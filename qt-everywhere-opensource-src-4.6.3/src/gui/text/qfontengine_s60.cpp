/****************************************************************************
**
** Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the QtGui module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial Usage
** Licensees holding valid Qt Commercial licenses may use this file in
** accordance with the Qt Commercial License Agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Nokia.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights.  These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
** If you have questions regarding the use of this file, please contact
** Nokia at qt-info@nokia.com.
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qfontengine_s60_p.h"
#include "qtextengine_p.h"
#include "qglobal.h"
#include <private/qapplication_p.h>
#include "qimage.h"
#include <private/qt_s60_p.h>

#include <e32base.h>
#include <e32std.h>
#include <eikenv.h>
#include <gdi.h>

QT_BEGIN_NAMESPACE

QSymbianTypeFaceExtras::QSymbianTypeFaceExtras(CFont* fontOwner, COpenFont *font)
    : m_font(font)
    , m_cmap(0)
    , m_symbolCMap(false)
    , m_fontOwner(fontOwner)
{
    TAny *trueTypeExtension = NULL;
    m_font->ExtendedInterface(KUidOpenFontTrueTypeExtension, trueTypeExtension);
    m_trueTypeExtension = static_cast<MOpenFontTrueTypeExtension*>(trueTypeExtension);
    Q_ASSERT(m_trueTypeExtension);
}

QByteArray QSymbianTypeFaceExtras::getSfntTable(uint tag) const
{
    Q_ASSERT(m_trueTypeExtension->HasTrueTypeTable(tag));
    TInt error = KErrNone;
    TInt tableByteLength = 0;
    TAny *table = q_check_ptr(m_trueTypeExtension->GetTrueTypeTable(error, tag, &tableByteLength));
    QByteArray result(static_cast<const char*>(table), tableByteLength);
    m_trueTypeExtension->ReleaseTrueTypeTable(table);
    return result;
}

bool QSymbianTypeFaceExtras::getSfntTableData(uint tag, uchar *buffer, uint *length) const
{
    if (!m_trueTypeExtension->HasTrueTypeTable(tag))
        return false;

    bool result = true;
    TInt error = KErrNone;
    TInt tableByteLength;
    TAny *table =
        q_check_ptr(m_trueTypeExtension->GetTrueTypeTable(error, tag, &tableByteLength));

    if (error != KErrNone) {
        return false;
    } else if (*length > 0 && *length < tableByteLength) {
        result = false; // Caller did not allocate enough memory
    } else {
        *length = tableByteLength;
        if (buffer)
            qMemCopy(buffer, table, tableByteLength);
    }

    m_trueTypeExtension->ReleaseTrueTypeTable(table);
    return result;
}

const unsigned char *QSymbianTypeFaceExtras::cmap() const
{
    if (!m_cmap) {
        m_cmapTable = getSfntTable(MAKE_TAG('c', 'm', 'a', 'p'));
        int size = 0;
        m_cmap = QFontEngineS60::getCMap(reinterpret_cast<const uchar *>(m_cmapTable.constData()), m_cmapTable.size(), &m_symbolCMap, &size);
    }
    return m_cmap;
}

CFont *QSymbianTypeFaceExtras::fontOwner() const
{
    return m_fontOwner;
}


// duplicated from qfontengine_xyz.cpp
static inline unsigned int getChar(const QChar *str, int &i, const int len)
{
    unsigned int uc = str[i].unicode();
    if (uc >= 0xd800 && uc < 0xdc00 && i < len-1) {
        uint low = str[i+1].unicode();
       if (low >= 0xdc00 && low < 0xe000) {
            uc = (uc - 0xd800)*0x400 + (low - 0xdc00) + 0x10000;
            ++i;
        }
    }
    return uc;
}

CFont *QFontEngineS60::fontWithSize(qreal size) const
{
    CFont *result = 0;
    TFontSpec fontSpec(qt_QString2TPtrC(QFontEngine::fontDef.family), TInt(size));
    fontSpec.iFontStyle.SetBitmapType(EAntiAliasedGlyphBitmap);
    fontSpec.iFontStyle.SetPosture(QFontEngine::fontDef.style == QFont::StyleNormal?EPostureUpright:EPostureItalic);
    fontSpec.iFontStyle.SetStrokeWeight(QFontEngine::fontDef.weight > QFont::Normal?EStrokeWeightBold:EStrokeWeightNormal);
    const TInt errorCode = S60->screenDevice()->GetNearestFontToDesignHeightInPixels(result, fontSpec);
    Q_ASSERT(result && (errorCode == 0));
    return result;
}

void QFontEngineS60::setFontScale(qreal scale)
{
    if (qFuzzyCompare(scale, qreal(1))) {
        if (!m_originalFont)
            m_originalFont = fontWithSize(m_originalFontSizeInPixels);
        m_activeFont = m_originalFont;
    } else {
        const qreal scaledFontSizeInPixels = m_originalFontSizeInPixels * scale;
        if (!m_scaledFont ||
                (TInt(scaledFontSizeInPixels) != TInt(m_scaledFontSizeInPixels))) {
            releaseFont(m_scaledFont);
            m_scaledFontSizeInPixels = scaledFontSizeInPixels;
            m_scaledFont = fontWithSize(m_scaledFontSizeInPixels);
        }
        m_activeFont = m_scaledFont;
    }
}

void QFontEngineS60::releaseFont(CFont *&font)
{
    if (font) {
        S60->screenDevice()->ReleaseFont(font);
        font = 0;
    }
}

QFontEngineS60::QFontEngineS60(const QFontDef &request, const QSymbianTypeFaceExtras *extras)
    : m_extras(extras)
    , m_originalFont(0)
    , m_originalFontSizeInPixels((request.pixelSize >= 0)?
            request.pixelSize:pointsToPixels(request.pointSize))
    , m_scaledFont(0)
    , m_scaledFontSizeInPixels(0)
    , m_activeFont(0)
{
    QFontEngine::fontDef = request;
    setFontScale(1.0);
    cache_cost = sizeof(QFontEngineS60);
}

QFontEngineS60::~QFontEngineS60()
{
    releaseFont(m_originalFont);
    releaseFont(m_scaledFont);
}

bool QFontEngineS60::stringToCMap(const QChar *characters, int len, QGlyphLayout *glyphs, int *nglyphs, QTextEngine::ShaperFlags flags) const
{
    if (*nglyphs < len) {
        *nglyphs = len;
        return false;
    }

    HB_Glyph *g = glyphs->glyphs;
    const unsigned char* cmap = m_extras->cmap();
    const bool isRtl = (flags & QTextEngine::RightToLeft);
    for (int i = 0; i < len; ++i) {
        const unsigned int uc = getChar(characters, i, len);
        *g++ = QFontEngine::getTrueTypeGlyphIndex(cmap,
        		isRtl ? QChar::mirroredChar(uc) : uc);
    }

    glyphs->numGlyphs = g - glyphs->glyphs;
    *nglyphs = glyphs->numGlyphs;

    if (flags & QTextEngine::GlyphIndicesOnly)
        return true;

    recalcAdvances(glyphs, flags);
    return true;
}

void QFontEngineS60::recalcAdvances(QGlyphLayout *glyphs, QTextEngine::ShaperFlags flags) const
{
    Q_UNUSED(flags);
    for (int i = 0; i < glyphs->numGlyphs; i++) {
        const glyph_metrics_t bbox = boundingBox_const(glyphs->glyphs[i]);
        glyphs->advances_x[i] = bbox.xoff;
        glyphs->advances_y[i] = bbox.yoff;
    }
}

QImage QFontEngineS60::alphaMapForGlyph(glyph_t glyph)
{
    TOpenFontCharMetrics metrics;
    const TUint8 *glyphBitmapBytes;
    TSize glyphBitmapSize;
    getCharacterData(glyph, metrics, glyphBitmapBytes, glyphBitmapSize);
    QImage result(glyphBitmapBytes, glyphBitmapSize.iWidth, glyphBitmapSize.iHeight, glyphBitmapSize.iWidth, QImage::Format_Indexed8);
    result.setColorTable(grayPalette());

    // The above setColorTable() call detached the image data anyway, so why not shape tha data a bit, while we can.
    // CFont::GetCharacterData() returns 8-bit data that obviously was 4-bit data before, and converted to 8-bit incorrectly.
    // The data values are 0x00, 0x10 ... 0xe0, 0xf0. So, a real opaque 0xff is never reached, which we get punished
    // for every time we want to blit this glyph in the raster paint engine.
    // "Fix" is to convert all 0xf0 to 0xff. Is fine, quality wise, and I assume faster than correcting all values.
    // Blitting is however, evidentially faster now.
    const int bpl = result.bytesPerLine();
    for (int row = 0; row < result.height(); ++row) {
        uchar *scanLine = result.scanLine(row);
        for (int column = 0; column < bpl; ++column) {
            if (*scanLine == 0xf0)
                *scanLine = 0xff;
            scanLine++;
        }
    }

    return result;
}

glyph_metrics_t QFontEngineS60::boundingBox(const QGlyphLayout &glyphs)
{
   if (glyphs.numGlyphs == 0)
        return glyph_metrics_t();

    QFixed w = 0;
    for (int i = 0; i < glyphs.numGlyphs; ++i)
        w += glyphs.effectiveAdvance(i);

    return glyph_metrics_t(0, -ascent(), w, ascent()+descent()+1, w, 0);
}

glyph_metrics_t QFontEngineS60::boundingBox_const(glyph_t glyph) const
{
    TOpenFontCharMetrics metrics;
    const TUint8 *glyphBitmapBytes;
    TSize glyphBitmapSize;
    getCharacterData(glyph, metrics, glyphBitmapBytes, glyphBitmapSize);
    TRect glyphBounds;
    metrics.GetHorizBounds(glyphBounds);
    const glyph_metrics_t result(
        glyphBounds.iTl.iX,
        glyphBounds.iTl.iY,
        glyphBounds.Width(),
        glyphBounds.Height(),
        metrics.HorizAdvance(),
        0
    );
    return result;
}

glyph_metrics_t QFontEngineS60::boundingBox(glyph_t glyph)
{
    return boundingBox_const(glyph);
}

QFixed QFontEngineS60::ascent() const
{
    return m_originalFont->FontMaxAscent();
}

QFixed QFontEngineS60::descent() const
{
    return m_originalFont->FontMaxDescent();
}

QFixed QFontEngineS60::leading() const
{
    return 0;
}

qreal QFontEngineS60::maxCharWidth() const
{
    return m_originalFont->MaxCharWidthInPixels();
}

const char *QFontEngineS60::name() const
{
    return "QFontEngineS60";
}

bool QFontEngineS60::canRender(const QChar *string, int len)
{
    const unsigned char *cmap = m_extras->cmap();
    for (int i = 0; i < len; ++i) {
        const unsigned int uc = getChar(string, i, len);
        if (QFontEngine::getTrueTypeGlyphIndex(cmap, uc) == 0)
            return false;
    }
    return true;
}

QByteArray QFontEngineS60::getSfntTable(uint tag) const
{
    return m_extras->getSfntTable(tag);
}

bool QFontEngineS60::getSfntTableData(uint tag, uchar *buffer, uint *length) const
{
    return m_extras->getSfntTableData(tag, buffer, length);
}

QFontEngine::Type QFontEngineS60::type() const
{
    return QFontEngine::S60FontEngine;
}

void QFontEngineS60::getCharacterData(glyph_t glyph, TOpenFontCharMetrics& metrics, const TUint8*& bitmap, TSize& bitmapSize) const
{
    // Setting the most significant bit tells GetCharacterData
    // that 'code' is a Glyph ID, rather than a UTF-16 value
    const TUint specialCode = (TUint)glyph | 0x80000000;

    const CFont::TCharacterDataAvailability availability =
            m_activeFont->GetCharacterData(specialCode, metrics, bitmap, bitmapSize);
    const glyph_t fallbackGlyph = '?';
    if (availability != CFont::EAllCharacterData) {
        const CFont::TCharacterDataAvailability fallbackAvailability =
                m_activeFont->GetCharacterData(fallbackGlyph, metrics, bitmap, bitmapSize);
        Q_ASSERT(fallbackAvailability == CFont::EAllCharacterData);
    }
}

QT_END_NAMESPACE

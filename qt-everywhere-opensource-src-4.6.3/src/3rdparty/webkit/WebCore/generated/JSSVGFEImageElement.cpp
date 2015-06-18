/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(SVG) && ENABLE(FILTERS)

#include "JSSVGFEImageElement.h"

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedString.h"
#include "KURL.h"
#include "SVGFEImageElement.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGFEImageElement);

/* Hash table */

static const HashTableValue JSSVGFEImageElementTableValues[12] =
{
    { "href", DontDelete|ReadOnly, (intptr_t)jsSVGFEImageElementHref, (intptr_t)0 },
    { "xmllang", DontDelete, (intptr_t)jsSVGFEImageElementXmllang, (intptr_t)setJSSVGFEImageElementXmllang },
    { "xmlspace", DontDelete, (intptr_t)jsSVGFEImageElementXmlspace, (intptr_t)setJSSVGFEImageElementXmlspace },
    { "externalResourcesRequired", DontDelete|ReadOnly, (intptr_t)jsSVGFEImageElementExternalResourcesRequired, (intptr_t)0 },
    { "x", DontDelete|ReadOnly, (intptr_t)jsSVGFEImageElementX, (intptr_t)0 },
    { "y", DontDelete|ReadOnly, (intptr_t)jsSVGFEImageElementY, (intptr_t)0 },
    { "width", DontDelete|ReadOnly, (intptr_t)jsSVGFEImageElementWidth, (intptr_t)0 },
    { "height", DontDelete|ReadOnly, (intptr_t)jsSVGFEImageElementHeight, (intptr_t)0 },
    { "result", DontDelete|ReadOnly, (intptr_t)jsSVGFEImageElementResult, (intptr_t)0 },
    { "className", DontDelete|ReadOnly, (intptr_t)jsSVGFEImageElementClassName, (intptr_t)0 },
    { "style", DontDelete|ReadOnly, (intptr_t)jsSVGFEImageElementStyle, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGFEImageElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 255, JSSVGFEImageElementTableValues, 0 };
#else
    { 33, 31, JSSVGFEImageElementTableValues, 0 };
#endif

/* Hash table for prototype */

static const HashTableValue JSSVGFEImageElementPrototypeTableValues[2] =
{
    { "getPresentationAttribute", DontDelete|Function, (intptr_t)jsSVGFEImageElementPrototypeFunctionGetPresentationAttribute, (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGFEImageElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGFEImageElementPrototypeTableValues, 0 };
#else
    { 2, 1, JSSVGFEImageElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGFEImageElementPrototype::s_info = { "SVGFEImageElementPrototype", 0, &JSSVGFEImageElementPrototypeTable, 0 };

JSObject* JSSVGFEImageElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFEImageElement>(exec, globalObject);
}

bool JSSVGFEImageElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGFEImageElementPrototypeTable, this, propertyName, slot);
}

bool JSSVGFEImageElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGFEImageElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGFEImageElement::s_info = { "SVGFEImageElement", &JSSVGElement::s_info, &JSSVGFEImageElementTable, 0 };

JSSVGFEImageElement::JSSVGFEImageElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFEImageElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

JSObject* JSSVGFEImageElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGFEImageElementPrototype(JSSVGFEImageElementPrototype::createStructure(JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGFEImageElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEImageElement, Base>(exec, &JSSVGFEImageElementTable, this, propertyName, slot);
}

bool JSSVGFEImageElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFEImageElement, Base>(exec, &JSSVGFEImageElementTable, this, propertyName, descriptor);
}

JSValue jsSVGFEImageElementHref(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGFEImageElement* castedThis = static_cast<JSSVGFEImageElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGFEImageElement* imp = static_cast<SVGFEImageElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->hrefAnimated();
    return toJS(exec, castedThis->globalObject(), obj.get(), imp);
}

JSValue jsSVGFEImageElementXmllang(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGFEImageElement* castedThis = static_cast<JSSVGFEImageElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGFEImageElement* imp = static_cast<SVGFEImageElement*>(castedThis->impl());
    return jsString(exec, imp->xmllang());
}

JSValue jsSVGFEImageElementXmlspace(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGFEImageElement* castedThis = static_cast<JSSVGFEImageElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGFEImageElement* imp = static_cast<SVGFEImageElement*>(castedThis->impl());
    return jsString(exec, imp->xmlspace());
}

JSValue jsSVGFEImageElementExternalResourcesRequired(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGFEImageElement* castedThis = static_cast<JSSVGFEImageElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGFEImageElement* imp = static_cast<SVGFEImageElement*>(castedThis->impl());
    RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
    return toJS(exec, castedThis->globalObject(), obj.get(), imp);
}

JSValue jsSVGFEImageElementX(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGFEImageElement* castedThis = static_cast<JSSVGFEImageElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGFEImageElement* imp = static_cast<SVGFEImageElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
    return toJS(exec, castedThis->globalObject(), obj.get(), imp);
}

JSValue jsSVGFEImageElementY(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGFEImageElement* castedThis = static_cast<JSSVGFEImageElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGFEImageElement* imp = static_cast<SVGFEImageElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
    return toJS(exec, castedThis->globalObject(), obj.get(), imp);
}

JSValue jsSVGFEImageElementWidth(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGFEImageElement* castedThis = static_cast<JSSVGFEImageElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGFEImageElement* imp = static_cast<SVGFEImageElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
    return toJS(exec, castedThis->globalObject(), obj.get(), imp);
}

JSValue jsSVGFEImageElementHeight(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGFEImageElement* castedThis = static_cast<JSSVGFEImageElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGFEImageElement* imp = static_cast<SVGFEImageElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
    return toJS(exec, castedThis->globalObject(), obj.get(), imp);
}

JSValue jsSVGFEImageElementResult(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGFEImageElement* castedThis = static_cast<JSSVGFEImageElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGFEImageElement* imp = static_cast<SVGFEImageElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->resultAnimated();
    return toJS(exec, castedThis->globalObject(), obj.get(), imp);
}

JSValue jsSVGFEImageElementClassName(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGFEImageElement* castedThis = static_cast<JSSVGFEImageElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGFEImageElement* imp = static_cast<SVGFEImageElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    return toJS(exec, castedThis->globalObject(), obj.get(), imp);
}

JSValue jsSVGFEImageElementStyle(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGFEImageElement* castedThis = static_cast<JSSVGFEImageElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGFEImageElement* imp = static_cast<SVGFEImageElement*>(castedThis->impl());
    return toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->style()));
}

void JSSVGFEImageElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGFEImageElement, Base>(exec, propertyName, value, &JSSVGFEImageElementTable, this, slot);
}

void setJSSVGFEImageElementXmllang(ExecState* exec, JSObject* thisObject, JSValue value)
{
    SVGFEImageElement* imp = static_cast<SVGFEImageElement*>(static_cast<JSSVGFEImageElement*>(thisObject)->impl());
    imp->setXmllang(value.toString(exec));
}

void setJSSVGFEImageElementXmlspace(ExecState* exec, JSObject* thisObject, JSValue value)
{
    SVGFEImageElement* imp = static_cast<SVGFEImageElement*>(static_cast<JSSVGFEImageElement*>(thisObject)->impl());
    imp->setXmlspace(value.toString(exec));
}

JSValue JSC_HOST_CALL jsSVGFEImageElementPrototypeFunctionGetPresentationAttribute(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGFEImageElement::s_info))
        return throwError(exec, TypeError);
    JSSVGFEImageElement* castedThisObj = static_cast<JSSVGFEImageElement*>(asObject(thisValue));
    SVGFEImageElement* imp = static_cast<SVGFEImageElement*>(castedThisObj->impl());
    const UString& name = args.at(0).toString(exec);


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), WTF::getPtr(imp->getPresentationAttribute(name)));
    return result;
}


}

#endif // ENABLE(SVG) && ENABLE(FILTERS)

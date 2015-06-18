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
#include "JSHTMLTableRowElement.h"

#include "HTMLCollection.h"
#include "HTMLElement.h"
#include "HTMLTableRowElement.h"
#include "JSHTMLCollection.h"
#include "JSHTMLElement.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLTableRowElement);

/* Hash table */

static const HashTableValue JSHTMLTableRowElementTableValues[10] =
{
    { "rowIndex", DontDelete|ReadOnly, (intptr_t)jsHTMLTableRowElementRowIndex, (intptr_t)0 },
    { "sectionRowIndex", DontDelete|ReadOnly, (intptr_t)jsHTMLTableRowElementSectionRowIndex, (intptr_t)0 },
    { "cells", DontDelete|ReadOnly, (intptr_t)jsHTMLTableRowElementCells, (intptr_t)0 },
    { "align", DontDelete, (intptr_t)jsHTMLTableRowElementAlign, (intptr_t)setJSHTMLTableRowElementAlign },
    { "bgColor", DontDelete, (intptr_t)jsHTMLTableRowElementBgColor, (intptr_t)setJSHTMLTableRowElementBgColor },
    { "ch", DontDelete, (intptr_t)jsHTMLTableRowElementCh, (intptr_t)setJSHTMLTableRowElementCh },
    { "chOff", DontDelete, (intptr_t)jsHTMLTableRowElementChOff, (intptr_t)setJSHTMLTableRowElementChOff },
    { "vAlign", DontDelete, (intptr_t)jsHTMLTableRowElementVAlign, (intptr_t)setJSHTMLTableRowElementVAlign },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsHTMLTableRowElementConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLTableRowElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 63, JSHTMLTableRowElementTableValues, 0 };
#else
    { 33, 31, JSHTMLTableRowElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSHTMLTableRowElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLTableRowElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLTableRowElementConstructorTableValues, 0 };
#else
    { 1, 0, JSHTMLTableRowElementConstructorTableValues, 0 };
#endif

class JSHTMLTableRowElementConstructor : public DOMConstructorObject {
public:
    JSHTMLTableRowElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSHTMLTableRowElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSHTMLTableRowElementPrototype::self(exec, globalObject), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual bool getOwnPropertyDescriptor(ExecState*, const Identifier&, PropertyDescriptor&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValue proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, StructureFlags)); 
    }
    
protected:
    static const unsigned StructureFlags = OverridesGetOwnPropertySlot | ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSHTMLTableRowElementConstructor::s_info = { "HTMLTableRowElementConstructor", 0, &JSHTMLTableRowElementConstructorTable, 0 };

bool JSHTMLTableRowElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLTableRowElementConstructor, DOMObject>(exec, &JSHTMLTableRowElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLTableRowElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLTableRowElementConstructor, DOMObject>(exec, &JSHTMLTableRowElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLTableRowElementPrototypeTableValues[3] =
{
    { "insertCell", DontDelete|Function, (intptr_t)jsHTMLTableRowElementPrototypeFunctionInsertCell, (intptr_t)1 },
    { "deleteCell", DontDelete|Function, (intptr_t)jsHTMLTableRowElementPrototypeFunctionDeleteCell, (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLTableRowElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 1, JSHTMLTableRowElementPrototypeTableValues, 0 };
#else
    { 4, 3, JSHTMLTableRowElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSHTMLTableRowElementPrototype::s_info = { "HTMLTableRowElementPrototype", 0, &JSHTMLTableRowElementPrototypeTable, 0 };

JSObject* JSHTMLTableRowElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLTableRowElement>(exec, globalObject);
}

bool JSHTMLTableRowElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSHTMLTableRowElementPrototypeTable, this, propertyName, slot);
}

bool JSHTMLTableRowElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSHTMLTableRowElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSHTMLTableRowElement::s_info = { "HTMLTableRowElement", &JSHTMLElement::s_info, &JSHTMLTableRowElementTable, 0 };

JSHTMLTableRowElement::JSHTMLTableRowElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLTableRowElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

JSObject* JSHTMLTableRowElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLTableRowElementPrototype(JSHTMLTableRowElementPrototype::createStructure(JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLTableRowElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLTableRowElement, Base>(exec, &JSHTMLTableRowElementTable, this, propertyName, slot);
}

bool JSHTMLTableRowElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLTableRowElement, Base>(exec, &JSHTMLTableRowElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLTableRowElementRowIndex(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLTableRowElement* castedThis = static_cast<JSHTMLTableRowElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(castedThis->impl());
    return jsNumber(exec, imp->rowIndex());
}

JSValue jsHTMLTableRowElementSectionRowIndex(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLTableRowElement* castedThis = static_cast<JSHTMLTableRowElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(castedThis->impl());
    return jsNumber(exec, imp->sectionRowIndex());
}

JSValue jsHTMLTableRowElementCells(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLTableRowElement* castedThis = static_cast<JSHTMLTableRowElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(castedThis->impl());
    return toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->cells()));
}

JSValue jsHTMLTableRowElementAlign(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLTableRowElement* castedThis = static_cast<JSHTMLTableRowElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(castedThis->impl());
    return jsString(exec, imp->align());
}

JSValue jsHTMLTableRowElementBgColor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLTableRowElement* castedThis = static_cast<JSHTMLTableRowElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(castedThis->impl());
    return jsString(exec, imp->bgColor());
}

JSValue jsHTMLTableRowElementCh(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLTableRowElement* castedThis = static_cast<JSHTMLTableRowElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(castedThis->impl());
    return jsString(exec, imp->ch());
}

JSValue jsHTMLTableRowElementChOff(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLTableRowElement* castedThis = static_cast<JSHTMLTableRowElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(castedThis->impl());
    return jsString(exec, imp->chOff());
}

JSValue jsHTMLTableRowElementVAlign(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLTableRowElement* castedThis = static_cast<JSHTMLTableRowElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(castedThis->impl());
    return jsString(exec, imp->vAlign());
}

JSValue jsHTMLTableRowElementConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLTableRowElement* domObject = static_cast<JSHTMLTableRowElement*>(asObject(slot.slotBase()));
    return JSHTMLTableRowElement::getConstructor(exec, domObject->globalObject());
}
void JSHTMLTableRowElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLTableRowElement, Base>(exec, propertyName, value, &JSHTMLTableRowElementTable, this, slot);
}

void setJSHTMLTableRowElementAlign(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(static_cast<JSHTMLTableRowElement*>(thisObject)->impl());
    imp->setAlign(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLTableRowElementBgColor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(static_cast<JSHTMLTableRowElement*>(thisObject)->impl());
    imp->setBgColor(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLTableRowElementCh(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(static_cast<JSHTMLTableRowElement*>(thisObject)->impl());
    imp->setCh(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLTableRowElementChOff(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(static_cast<JSHTMLTableRowElement*>(thisObject)->impl());
    imp->setChOff(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLTableRowElementVAlign(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(static_cast<JSHTMLTableRowElement*>(thisObject)->impl());
    imp->setVAlign(valueToStringWithNullCheck(exec, value));
}

JSValue JSHTMLTableRowElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLTableRowElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSValue JSC_HOST_CALL jsHTMLTableRowElementPrototypeFunctionInsertCell(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSHTMLTableRowElement::s_info))
        return throwError(exec, TypeError);
    JSHTMLTableRowElement* castedThisObj = static_cast<JSHTMLTableRowElement*>(asObject(thisValue));
    HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    int index = args.at(0).toInt32(exec);


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), WTF::getPtr(imp->insertCell(index, ec)));
    setDOMException(exec, ec);
    return result;
}

JSValue JSC_HOST_CALL jsHTMLTableRowElementPrototypeFunctionDeleteCell(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSHTMLTableRowElement::s_info))
        return throwError(exec, TypeError);
    JSHTMLTableRowElement* castedThisObj = static_cast<JSHTMLTableRowElement*>(asObject(thisValue));
    HTMLTableRowElement* imp = static_cast<HTMLTableRowElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    int index = args.at(0).toInt32(exec);

    imp->deleteCell(index, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}


}

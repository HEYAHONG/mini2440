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

#if ENABLE(SVG)

#include "JSSVGAnimatedNumber.h"

#include <runtime/JSNumberCell.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGAnimatedNumber);

/* Hash table */

static const HashTableValue JSSVGAnimatedNumberTableValues[3] =
{
    { "baseVal", DontDelete, (intptr_t)jsSVGAnimatedNumberBaseVal, (intptr_t)setJSSVGAnimatedNumberBaseVal },
    { "animVal", DontDelete|ReadOnly, (intptr_t)jsSVGAnimatedNumberAnimVal, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGAnimatedNumberTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 1, JSSVGAnimatedNumberTableValues, 0 };
#else
    { 4, 3, JSSVGAnimatedNumberTableValues, 0 };
#endif

/* Hash table for prototype */

static const HashTableValue JSSVGAnimatedNumberPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGAnimatedNumberPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGAnimatedNumberPrototypeTableValues, 0 };
#else
    { 1, 0, JSSVGAnimatedNumberPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGAnimatedNumberPrototype::s_info = { "SVGAnimatedNumberPrototype", 0, &JSSVGAnimatedNumberPrototypeTable, 0 };

JSObject* JSSVGAnimatedNumberPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGAnimatedNumber>(exec, globalObject);
}

const ClassInfo JSSVGAnimatedNumber::s_info = { "SVGAnimatedNumber", 0, &JSSVGAnimatedNumberTable, 0 };

JSSVGAnimatedNumber::JSSVGAnimatedNumber(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGAnimatedNumber> impl, SVGElement* context)
    : DOMObjectWithSVGContext(structure, globalObject, context)
    , m_impl(impl)
{
}

JSSVGAnimatedNumber::~JSSVGAnimatedNumber()
{
    forgetDOMObject(this, impl());
}

JSObject* JSSVGAnimatedNumber::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGAnimatedNumberPrototype(JSSVGAnimatedNumberPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSSVGAnimatedNumber::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAnimatedNumber, Base>(exec, &JSSVGAnimatedNumberTable, this, propertyName, slot);
}

bool JSSVGAnimatedNumber::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGAnimatedNumber, Base>(exec, &JSSVGAnimatedNumberTable, this, propertyName, descriptor);
}

JSValue jsSVGAnimatedNumberBaseVal(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGAnimatedNumber* castedThis = static_cast<JSSVGAnimatedNumber*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGAnimatedNumber* imp = static_cast<SVGAnimatedNumber*>(castedThis->impl());
    return jsNumber(exec, imp->baseVal());
}

JSValue jsSVGAnimatedNumberAnimVal(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGAnimatedNumber* castedThis = static_cast<JSSVGAnimatedNumber*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGAnimatedNumber* imp = static_cast<SVGAnimatedNumber*>(castedThis->impl());
    return jsNumber(exec, imp->animVal());
}

void JSSVGAnimatedNumber::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGAnimatedNumber, Base>(exec, propertyName, value, &JSSVGAnimatedNumberTable, this, slot);
}

void setJSSVGAnimatedNumberBaseVal(ExecState* exec, JSObject* thisObject, JSValue value)
{
    SVGAnimatedNumber* imp = static_cast<SVGAnimatedNumber*>(static_cast<JSSVGAnimatedNumber*>(thisObject)->impl());
    imp->setBaseVal(value.toFloat(exec));
    if (static_cast<JSSVGAnimatedNumber*>(thisObject)->context())
        static_cast<JSSVGAnimatedNumber*>(thisObject)->context()->svgAttributeChanged(static_cast<JSSVGAnimatedNumber*>(thisObject)->impl()->associatedAttributeName());
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SVGAnimatedNumber* object, SVGElement* context)
{
    return getDOMObjectWrapper<JSSVGAnimatedNumber>(exec, globalObject, object, context);
}
SVGAnimatedNumber* toSVGAnimatedNumber(JSC::JSValue value)
{
    return value.inherits(&JSSVGAnimatedNumber::s_info) ? static_cast<JSSVGAnimatedNumber*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)

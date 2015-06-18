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

#include "JSSVGAnimatedLengthList.h"

#include "JSSVGLengthList.h"
#include "SVGLengthList.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGAnimatedLengthList);

/* Hash table */

static const HashTableValue JSSVGAnimatedLengthListTableValues[3] =
{
    { "baseVal", DontDelete|ReadOnly, (intptr_t)jsSVGAnimatedLengthListBaseVal, (intptr_t)0 },
    { "animVal", DontDelete|ReadOnly, (intptr_t)jsSVGAnimatedLengthListAnimVal, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGAnimatedLengthListTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 1, JSSVGAnimatedLengthListTableValues, 0 };
#else
    { 4, 3, JSSVGAnimatedLengthListTableValues, 0 };
#endif

/* Hash table for prototype */

static const HashTableValue JSSVGAnimatedLengthListPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGAnimatedLengthListPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGAnimatedLengthListPrototypeTableValues, 0 };
#else
    { 1, 0, JSSVGAnimatedLengthListPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGAnimatedLengthListPrototype::s_info = { "SVGAnimatedLengthListPrototype", 0, &JSSVGAnimatedLengthListPrototypeTable, 0 };

JSObject* JSSVGAnimatedLengthListPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGAnimatedLengthList>(exec, globalObject);
}

const ClassInfo JSSVGAnimatedLengthList::s_info = { "SVGAnimatedLengthList", 0, &JSSVGAnimatedLengthListTable, 0 };

JSSVGAnimatedLengthList::JSSVGAnimatedLengthList(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGAnimatedLengthList> impl, SVGElement* context)
    : DOMObjectWithSVGContext(structure, globalObject, context)
    , m_impl(impl)
{
}

JSSVGAnimatedLengthList::~JSSVGAnimatedLengthList()
{
    forgetDOMObject(this, impl());
}

JSObject* JSSVGAnimatedLengthList::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGAnimatedLengthListPrototype(JSSVGAnimatedLengthListPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSSVGAnimatedLengthList::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAnimatedLengthList, Base>(exec, &JSSVGAnimatedLengthListTable, this, propertyName, slot);
}

bool JSSVGAnimatedLengthList::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGAnimatedLengthList, Base>(exec, &JSSVGAnimatedLengthListTable, this, propertyName, descriptor);
}

JSValue jsSVGAnimatedLengthListBaseVal(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGAnimatedLengthList* castedThis = static_cast<JSSVGAnimatedLengthList*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGAnimatedLengthList* imp = static_cast<SVGAnimatedLengthList*>(castedThis->impl());
    return toJS(exec, deprecatedGlobalObjectForPrototype(exec), WTF::getPtr(imp->baseVal()), castedThis->context());
}

JSValue jsSVGAnimatedLengthListAnimVal(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGAnimatedLengthList* castedThis = static_cast<JSSVGAnimatedLengthList*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGAnimatedLengthList* imp = static_cast<SVGAnimatedLengthList*>(castedThis->impl());
    return toJS(exec, deprecatedGlobalObjectForPrototype(exec), WTF::getPtr(imp->animVal()), castedThis->context());
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SVGAnimatedLengthList* object, SVGElement* context)
{
    return getDOMObjectWrapper<JSSVGAnimatedLengthList>(exec, globalObject, object, context);
}
SVGAnimatedLengthList* toSVGAnimatedLengthList(JSC::JSValue value)
{
    return value.inherits(&JSSVGAnimatedLengthList::s_info) ? static_cast<JSSVGAnimatedLengthList*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)

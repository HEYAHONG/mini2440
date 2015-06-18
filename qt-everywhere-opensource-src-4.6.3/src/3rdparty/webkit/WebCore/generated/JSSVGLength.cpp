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

#include "JSSVGLength.h"

#include "KURL.h"
#include "SVGLength.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGLength);

/* Hash table */

static const HashTableValue JSSVGLengthTableValues[6] =
{
    { "unitType", DontDelete|ReadOnly, (intptr_t)jsSVGLengthUnitType, (intptr_t)0 },
    { "value", DontDelete, (intptr_t)jsSVGLengthValue, (intptr_t)setJSSVGLengthValue },
    { "valueInSpecifiedUnits", DontDelete, (intptr_t)jsSVGLengthValueInSpecifiedUnits, (intptr_t)setJSSVGLengthValueInSpecifiedUnits },
    { "valueAsString", DontDelete, (intptr_t)jsSVGLengthValueAsString, (intptr_t)setJSSVGLengthValueAsString },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsSVGLengthConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGLengthTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 255, JSSVGLengthTableValues, 0 };
#else
    { 17, 15, JSSVGLengthTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSSVGLengthConstructorTableValues[12] =
{
    { "SVG_LENGTHTYPE_UNKNOWN", DontDelete|ReadOnly, (intptr_t)jsSVGLengthSVG_LENGTHTYPE_UNKNOWN, (intptr_t)0 },
    { "SVG_LENGTHTYPE_NUMBER", DontDelete|ReadOnly, (intptr_t)jsSVGLengthSVG_LENGTHTYPE_NUMBER, (intptr_t)0 },
    { "SVG_LENGTHTYPE_PERCENTAGE", DontDelete|ReadOnly, (intptr_t)jsSVGLengthSVG_LENGTHTYPE_PERCENTAGE, (intptr_t)0 },
    { "SVG_LENGTHTYPE_EMS", DontDelete|ReadOnly, (intptr_t)jsSVGLengthSVG_LENGTHTYPE_EMS, (intptr_t)0 },
    { "SVG_LENGTHTYPE_EXS", DontDelete|ReadOnly, (intptr_t)jsSVGLengthSVG_LENGTHTYPE_EXS, (intptr_t)0 },
    { "SVG_LENGTHTYPE_PX", DontDelete|ReadOnly, (intptr_t)jsSVGLengthSVG_LENGTHTYPE_PX, (intptr_t)0 },
    { "SVG_LENGTHTYPE_CM", DontDelete|ReadOnly, (intptr_t)jsSVGLengthSVG_LENGTHTYPE_CM, (intptr_t)0 },
    { "SVG_LENGTHTYPE_MM", DontDelete|ReadOnly, (intptr_t)jsSVGLengthSVG_LENGTHTYPE_MM, (intptr_t)0 },
    { "SVG_LENGTHTYPE_IN", DontDelete|ReadOnly, (intptr_t)jsSVGLengthSVG_LENGTHTYPE_IN, (intptr_t)0 },
    { "SVG_LENGTHTYPE_PT", DontDelete|ReadOnly, (intptr_t)jsSVGLengthSVG_LENGTHTYPE_PT, (intptr_t)0 },
    { "SVG_LENGTHTYPE_PC", DontDelete|ReadOnly, (intptr_t)jsSVGLengthSVG_LENGTHTYPE_PC, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGLengthConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 511, JSSVGLengthConstructorTableValues, 0 };
#else
    { 33, 31, JSSVGLengthConstructorTableValues, 0 };
#endif

class JSSVGLengthConstructor : public DOMConstructorObject {
public:
    JSSVGLengthConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSSVGLengthConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSSVGLengthPrototype::self(exec, globalObject), None);
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

const ClassInfo JSSVGLengthConstructor::s_info = { "SVGLengthConstructor", 0, &JSSVGLengthConstructorTable, 0 };

bool JSSVGLengthConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGLengthConstructor, DOMObject>(exec, &JSSVGLengthConstructorTable, this, propertyName, slot);
}

bool JSSVGLengthConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGLengthConstructor, DOMObject>(exec, &JSSVGLengthConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGLengthPrototypeTableValues[14] =
{
    { "SVG_LENGTHTYPE_UNKNOWN", DontDelete|ReadOnly, (intptr_t)jsSVGLengthSVG_LENGTHTYPE_UNKNOWN, (intptr_t)0 },
    { "SVG_LENGTHTYPE_NUMBER", DontDelete|ReadOnly, (intptr_t)jsSVGLengthSVG_LENGTHTYPE_NUMBER, (intptr_t)0 },
    { "SVG_LENGTHTYPE_PERCENTAGE", DontDelete|ReadOnly, (intptr_t)jsSVGLengthSVG_LENGTHTYPE_PERCENTAGE, (intptr_t)0 },
    { "SVG_LENGTHTYPE_EMS", DontDelete|ReadOnly, (intptr_t)jsSVGLengthSVG_LENGTHTYPE_EMS, (intptr_t)0 },
    { "SVG_LENGTHTYPE_EXS", DontDelete|ReadOnly, (intptr_t)jsSVGLengthSVG_LENGTHTYPE_EXS, (intptr_t)0 },
    { "SVG_LENGTHTYPE_PX", DontDelete|ReadOnly, (intptr_t)jsSVGLengthSVG_LENGTHTYPE_PX, (intptr_t)0 },
    { "SVG_LENGTHTYPE_CM", DontDelete|ReadOnly, (intptr_t)jsSVGLengthSVG_LENGTHTYPE_CM, (intptr_t)0 },
    { "SVG_LENGTHTYPE_MM", DontDelete|ReadOnly, (intptr_t)jsSVGLengthSVG_LENGTHTYPE_MM, (intptr_t)0 },
    { "SVG_LENGTHTYPE_IN", DontDelete|ReadOnly, (intptr_t)jsSVGLengthSVG_LENGTHTYPE_IN, (intptr_t)0 },
    { "SVG_LENGTHTYPE_PT", DontDelete|ReadOnly, (intptr_t)jsSVGLengthSVG_LENGTHTYPE_PT, (intptr_t)0 },
    { "SVG_LENGTHTYPE_PC", DontDelete|ReadOnly, (intptr_t)jsSVGLengthSVG_LENGTHTYPE_PC, (intptr_t)0 },
    { "newValueSpecifiedUnits", DontDelete|Function, (intptr_t)jsSVGLengthPrototypeFunctionNewValueSpecifiedUnits, (intptr_t)2 },
    { "convertToSpecifiedUnits", DontDelete|Function, (intptr_t)jsSVGLengthPrototypeFunctionConvertToSpecifiedUnits, (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGLengthPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 511, JSSVGLengthPrototypeTableValues, 0 };
#else
    { 33, 31, JSSVGLengthPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGLengthPrototype::s_info = { "SVGLengthPrototype", 0, &JSSVGLengthPrototypeTable, 0 };

JSObject* JSSVGLengthPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGLength>(exec, globalObject);
}

bool JSSVGLengthPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSSVGLengthPrototype, JSObject>(exec, &JSSVGLengthPrototypeTable, this, propertyName, slot);
}

bool JSSVGLengthPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticPropertyDescriptor<JSSVGLengthPrototype, JSObject>(exec, &JSSVGLengthPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGLength::s_info = { "SVGLength", 0, &JSSVGLengthTable, 0 };

JSSVGLength::JSSVGLength(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<JSSVGPODTypeWrapper<SVGLength> > impl, SVGElement* context)
    : DOMObjectWithSVGContext(structure, globalObject, context)
    , m_impl(impl)
{
}

JSSVGLength::~JSSVGLength()
{
    JSSVGDynamicPODTypeWrapperCache<SVGLength, SVGAnimatedLength>::forgetWrapper(m_impl.get());
    forgetDOMObject(this, impl());
}

JSObject* JSSVGLength::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGLengthPrototype(JSSVGLengthPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSSVGLength::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGLength, Base>(exec, &JSSVGLengthTable, this, propertyName, slot);
}

bool JSSVGLength::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGLength, Base>(exec, &JSSVGLengthTable, this, propertyName, descriptor);
}

JSValue jsSVGLengthUnitType(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGLength* castedThis = static_cast<JSSVGLength*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGLength imp(*castedThis->impl());
    return jsNumber(exec, imp.unitType());
}

JSValue jsSVGLengthValue(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGLength* castedThis = static_cast<JSSVGLength*>(asObject(slot.slotBase()));
    return castedThis->value(exec);
}

JSValue jsSVGLengthValueInSpecifiedUnits(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGLength* castedThis = static_cast<JSSVGLength*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGLength imp(*castedThis->impl());
    return jsNumber(exec, imp.valueInSpecifiedUnits());
}

JSValue jsSVGLengthValueAsString(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGLength* castedThis = static_cast<JSSVGLength*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGLength imp(*castedThis->impl());
    return jsString(exec, imp.valueAsString());
}

JSValue jsSVGLengthConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(slot);
    return JSSVGLength::getConstructor(exec, deprecatedGlobalObjectForPrototype(exec));
}
void JSSVGLength::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGLength, Base>(exec, propertyName, value, &JSSVGLengthTable, this, slot);
}

void setJSSVGLengthValue(ExecState* exec, JSObject* thisObject, JSValue value)
{
    SVGLength imp(*static_cast<JSSVGLength*>(thisObject)->impl());
    imp.setValue(value.toFloat(exec));
        static_cast<JSSVGLength*>(thisObject)->impl()->commitChange(imp, static_cast<JSSVGLength*>(thisObject)->context());
}

void setJSSVGLengthValueInSpecifiedUnits(ExecState* exec, JSObject* thisObject, JSValue value)
{
    SVGLength imp(*static_cast<JSSVGLength*>(thisObject)->impl());
    imp.setValueInSpecifiedUnits(value.toFloat(exec));
        static_cast<JSSVGLength*>(thisObject)->impl()->commitChange(imp, static_cast<JSSVGLength*>(thisObject)->context());
}

void setJSSVGLengthValueAsString(ExecState* exec, JSObject* thisObject, JSValue value)
{
    SVGLength imp(*static_cast<JSSVGLength*>(thisObject)->impl());
    imp.setValueAsString(valueToStringWithNullCheck(exec, value));
        static_cast<JSSVGLength*>(thisObject)->impl()->commitChange(imp, static_cast<JSSVGLength*>(thisObject)->context());
}

JSValue JSSVGLength::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGLengthConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSValue JSC_HOST_CALL jsSVGLengthPrototypeFunctionNewValueSpecifiedUnits(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGLength::s_info))
        return throwError(exec, TypeError);
    JSSVGLength* castedThisObj = static_cast<JSSVGLength*>(asObject(thisValue));
    JSSVGPODTypeWrapper<SVGLength>* wrapper = castedThisObj->impl();
    SVGLength imp(*wrapper);
    unsigned short unitType = args.at(0).toInt32(exec);
    float valueInSpecifiedUnits = args.at(1).toFloat(exec);

    imp.newValueSpecifiedUnits(unitType, valueInSpecifiedUnits);
    wrapper->commitChange(imp, castedThisObj->context());
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsSVGLengthPrototypeFunctionConvertToSpecifiedUnits(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGLength::s_info))
        return throwError(exec, TypeError);
    JSSVGLength* castedThisObj = static_cast<JSSVGLength*>(asObject(thisValue));
    return castedThisObj->convertToSpecifiedUnits(exec, args);
}

// Constant getters

JSValue jsSVGLengthSVG_LENGTHTYPE_UNKNOWN(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(0));
}

JSValue jsSVGLengthSVG_LENGTHTYPE_NUMBER(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(1));
}

JSValue jsSVGLengthSVG_LENGTHTYPE_PERCENTAGE(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(2));
}

JSValue jsSVGLengthSVG_LENGTHTYPE_EMS(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(3));
}

JSValue jsSVGLengthSVG_LENGTHTYPE_EXS(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(4));
}

JSValue jsSVGLengthSVG_LENGTHTYPE_PX(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(5));
}

JSValue jsSVGLengthSVG_LENGTHTYPE_CM(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(6));
}

JSValue jsSVGLengthSVG_LENGTHTYPE_MM(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(7));
}

JSValue jsSVGLengthSVG_LENGTHTYPE_IN(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(8));
}

JSValue jsSVGLengthSVG_LENGTHTYPE_PT(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(9));
}

JSValue jsSVGLengthSVG_LENGTHTYPE_PC(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(10));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, JSSVGPODTypeWrapper<SVGLength>* object, SVGElement* context)
{
    return getDOMObjectWrapper<JSSVGLength, JSSVGPODTypeWrapper<SVGLength> >(exec, globalObject, object, context);
}
SVGLength toSVGLength(JSC::JSValue value)
{
    return value.inherits(&JSSVGLength::s_info) ? (SVGLength) *static_cast<JSSVGLength*>(asObject(value))->impl() : SVGLength();
}

}

#endif // ENABLE(SVG)

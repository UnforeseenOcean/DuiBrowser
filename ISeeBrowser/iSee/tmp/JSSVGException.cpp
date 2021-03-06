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

#include "Document.h"
#include "Frame.h"
#include "SVGDocumentExtensions.h"
#include "SVGElement.h"
#include "SVGAnimatedTemplate.h"
#include "JSSVGException.h"

#include <wtf/GetPtr.h>

#include "KURL.h"
#include "SVGException.h"

#include <kjs/Error.h>
#include <kjs/JSNumberCell.h>
#include <kjs/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGException)

/* Hash table */

static const HashTableValue JSSVGExceptionTableValues[5] =
{
    { "code", (intptr_t)JSSVGException::CodeAttrNum, DontDelete|ReadOnly, 0 },
    { "name", (intptr_t)JSSVGException::NameAttrNum, DontDelete|ReadOnly, 0 },
    { "message", (intptr_t)JSSVGException::MessageAttrNum, DontDelete|ReadOnly, 0 },
    { "constructor", (intptr_t)JSSVGException::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGExceptionTable = { 127, JSSVGExceptionTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSSVGExceptionConstructorTableValues[4] =
{
    { "SVG_WRONG_TYPE_ERR", (intptr_t)0, DontDelete|ReadOnly, 0 },
    { "SVG_INVALID_VALUE_ERR", (intptr_t)1, DontDelete|ReadOnly, 0 },
    { "SVG_MATRIX_NOT_INVERTABLE", (intptr_t)2, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGExceptionConstructorTable = { 31, JSSVGExceptionConstructorTableValues, 0 };

class JSSVGExceptionConstructor : public DOMObject {
public:
    JSSVGExceptionConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSSVGExceptionPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSSVGExceptionConstructor::s_info = { "SVGExceptionConstructor", 0, &JSSVGExceptionConstructorTable, 0 };

bool JSSVGExceptionConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGExceptionConstructor, DOMObject>(exec, &JSSVGExceptionConstructorTable, this, propertyName, slot);
}

JSValue* JSSVGExceptionConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSSVGExceptionPrototypeTableValues[5] =
{
    { "SVG_WRONG_TYPE_ERR", (intptr_t)0, DontDelete|ReadOnly, 0 },
    { "SVG_INVALID_VALUE_ERR", (intptr_t)1, DontDelete|ReadOnly, 0 },
    { "SVG_MATRIX_NOT_INVERTABLE", (intptr_t)2, DontDelete|ReadOnly, 0 },
    { "toString", (intptr_t)jsSVGExceptionPrototypeFunctionToString, DontDelete|DontEnum|Function, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGExceptionPrototypeTable = { 31, JSSVGExceptionPrototypeTableValues, 0 };

const ClassInfo JSSVGExceptionPrototype::s_info = { "SVGExceptionPrototype", 0, &JSSVGExceptionPrototypeTable, 0 };

JSObject* JSSVGExceptionPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSSVGException.prototype]]");
    return JSC::cacheGlobalObject<JSSVGExceptionPrototype>(exec, *prototypeIdentifier);
}

bool JSSVGExceptionPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSSVGExceptionPrototype, JSObject>(exec, &JSSVGExceptionPrototypeTable, this, propertyName, slot);
}

JSValue* JSSVGExceptionPrototype::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

const ClassInfo JSSVGException::s_info = { "SVGException", 0, &JSSVGExceptionTable , 0 };

JSSVGException::JSSVGException(JSObject* prototype, SVGException* impl, SVGElement* context)
    : DOMObject(prototype)
    , m_context(context)
    , m_impl(impl)
{
}

JSSVGException::~JSSVGException()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSSVGException::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGException, Base>(exec, &JSSVGExceptionTable, this, propertyName, slot);
}

JSValue* JSSVGException::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case CodeAttrNum: {
        SVGException* imp = static_cast<SVGException*>(impl());
        return jsNumber(exec, imp->code());
    }
    case NameAttrNum: {
        SVGException* imp = static_cast<SVGException*>(impl());
        return jsString(exec, imp->name());
    }
    case MessageAttrNum: {
        SVGException* imp = static_cast<SVGException*>(impl());
        return jsString(exec, imp->message());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

JSValue* JSSVGException::getConstructor(ExecState* exec)
{
    static const Identifier* constructorIdentifier = new Identifier(exec, "[[SVGException.constructor]]");
    return JSC::cacheGlobalObject<JSSVGExceptionConstructor>(exec, *constructorIdentifier);
}

JSValue* jsSVGExceptionPrototypeFunctionToString(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGException::s_info))
        return throwError(exec, TypeError);
    JSSVGException* castedThisObj = static_cast<JSSVGException*>(thisValue);
    SVGException* imp = static_cast<SVGException*>(castedThisObj->impl());


    JSC::JSValue* result = jsString(exec, imp->toString());
    return result;
}

JSC::JSValue* toJS(JSC::ExecState* exec, SVGException* obj, SVGElement* context)
{
    return cacheSVGDOMObject<SVGException, JSSVGException, JSSVGExceptionPrototype>(exec, obj, context);
}
SVGException* toSVGException(JSC::JSValue* val)
{
    return val->isObject(&JSSVGException::s_info) ? static_cast<JSSVGException*>(val)->impl() : 0;
}

}

#endif // ENABLE(SVG)

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
#include "JSSVGPathSegLinetoRel.h"

#include <wtf/GetPtr.h>

#include "SVGPathSegLineto.h"

#include <kjs/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGPathSegLinetoRel)

/* Hash table */

static const HashTableValue JSSVGPathSegLinetoRelTableValues[3] =
{
    { "x", (intptr_t)JSSVGPathSegLinetoRel::XAttrNum, DontDelete, 0 },
    { "y", (intptr_t)JSSVGPathSegLinetoRel::YAttrNum, DontDelete, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGPathSegLinetoRelTable = { 1, JSSVGPathSegLinetoRelTableValues, 0 };

/* Hash table for prototype */

static const HashTableValue JSSVGPathSegLinetoRelPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGPathSegLinetoRelPrototypeTable = { 0, JSSVGPathSegLinetoRelPrototypeTableValues, 0 };

const ClassInfo JSSVGPathSegLinetoRelPrototype::s_info = { "SVGPathSegLinetoRelPrototype", 0, &JSSVGPathSegLinetoRelPrototypeTable, 0 };

JSObject* JSSVGPathSegLinetoRelPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSSVGPathSegLinetoRel.prototype]]");
    return JSC::cacheGlobalObject<JSSVGPathSegLinetoRelPrototype>(exec, *prototypeIdentifier);
}

const ClassInfo JSSVGPathSegLinetoRel::s_info = { "SVGPathSegLinetoRel", &JSSVGPathSeg::s_info, &JSSVGPathSegLinetoRelTable , 0 };

JSSVGPathSegLinetoRel::JSSVGPathSegLinetoRel(JSObject* prototype, SVGPathSegLinetoRel* impl, SVGElement* context)
    : JSSVGPathSeg(prototype, impl, context)
{
}

bool JSSVGPathSegLinetoRel::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegLinetoRel, Base>(exec, &JSSVGPathSegLinetoRelTable, this, propertyName, slot);
}

JSValue* JSSVGPathSegLinetoRel::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case XAttrNum: {
        SVGPathSegLinetoRel* imp = static_cast<SVGPathSegLinetoRel*>(impl());
        return jsNumber(exec, imp->x());
    }
    case YAttrNum: {
        SVGPathSegLinetoRel* imp = static_cast<SVGPathSegLinetoRel*>(impl());
        return jsNumber(exec, imp->y());
    }
    }
    return 0;
}

void JSSVGPathSegLinetoRel::put(ExecState* exec, const Identifier& propertyName, JSValue* value, PutPropertySlot& slot)
{
    lookupPut<JSSVGPathSegLinetoRel, Base>(exec, propertyName, value, &JSSVGPathSegLinetoRelTable, this, slot);
}

void JSSVGPathSegLinetoRel::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case XAttrNum: {
        SVGPathSegLinetoRel* imp = static_cast<SVGPathSegLinetoRel*>(impl());
        imp->setX(value->toFloat(exec));
        if (context())
            context()->svgAttributeChanged(impl()->associatedAttributeName());
        break;
    }
    case YAttrNum: {
        SVGPathSegLinetoRel* imp = static_cast<SVGPathSegLinetoRel*>(impl());
        imp->setY(value->toFloat(exec));
        if (context())
            context()->svgAttributeChanged(impl()->associatedAttributeName());
        break;
    }
    }
}


}

#endif // ENABLE(SVG)
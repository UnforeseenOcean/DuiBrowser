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
#include "JSSVGZoomEvent.h"

#include <wtf/GetPtr.h>

#include "JSSVGPoint.h"
#include "JSSVGRect.h"
#include "SVGZoomEvent.h"

#include <kjs/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGZoomEvent)

/* Hash table */

static const HashTableValue JSSVGZoomEventTableValues[6] =
{
    { "zoomRectScreen", (intptr_t)JSSVGZoomEvent::ZoomRectScreenAttrNum, DontDelete|ReadOnly, 0 },
    { "previousScale", (intptr_t)JSSVGZoomEvent::PreviousScaleAttrNum, DontDelete|ReadOnly, 0 },
    { "previousTranslate", (intptr_t)JSSVGZoomEvent::PreviousTranslateAttrNum, DontDelete|ReadOnly, 0 },
    { "newScale", (intptr_t)JSSVGZoomEvent::NewScaleAttrNum, DontDelete|ReadOnly, 0 },
    { "newTranslate", (intptr_t)JSSVGZoomEvent::NewTranslateAttrNum, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGZoomEventTable = { 31, JSSVGZoomEventTableValues, 0 };

/* Hash table for prototype */

static const HashTableValue JSSVGZoomEventPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGZoomEventPrototypeTable = { 0, JSSVGZoomEventPrototypeTableValues, 0 };

const ClassInfo JSSVGZoomEventPrototype::s_info = { "SVGZoomEventPrototype", 0, &JSSVGZoomEventPrototypeTable, 0 };

JSObject* JSSVGZoomEventPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSSVGZoomEvent.prototype]]");
    return JSC::cacheGlobalObject<JSSVGZoomEventPrototype>(exec, *prototypeIdentifier);
}

const ClassInfo JSSVGZoomEvent::s_info = { "SVGZoomEvent", &JSUIEvent::s_info, &JSSVGZoomEventTable , 0 };

JSSVGZoomEvent::JSSVGZoomEvent(JSObject* prototype, SVGZoomEvent* impl, SVGElement* context)
    : JSUIEvent(prototype, impl)
{
}

bool JSSVGZoomEvent::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGZoomEvent, Base>(exec, &JSSVGZoomEventTable, this, propertyName, slot);
}

JSValue* JSSVGZoomEvent::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case ZoomRectScreenAttrNum: {
        SVGZoomEvent* imp = static_cast<SVGZoomEvent*>(impl());
        return toJS(exec, JSSVGStaticPODTypeWrapper<FloatRect>::create(imp->zoomRectScreen()).get(), 0);
    }
    case PreviousScaleAttrNum: {
        SVGZoomEvent* imp = static_cast<SVGZoomEvent*>(impl());
        return jsNumber(exec, imp->previousScale());
    }
    case PreviousTranslateAttrNum: {
        SVGZoomEvent* imp = static_cast<SVGZoomEvent*>(impl());
        return toJS(exec, JSSVGStaticPODTypeWrapper<FloatPoint>::create(imp->previousTranslate()).get(), 0);
    }
    case NewScaleAttrNum: {
        SVGZoomEvent* imp = static_cast<SVGZoomEvent*>(impl());
        return jsNumber(exec, imp->newScale());
    }
    case NewTranslateAttrNum: {
        SVGZoomEvent* imp = static_cast<SVGZoomEvent*>(impl());
        return toJS(exec, JSSVGStaticPODTypeWrapper<FloatPoint>::create(imp->newTranslate()).get(), 0);
    }
    }
    return 0;
}


}

#endif // ENABLE(SVG)
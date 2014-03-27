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

/*
 * Portions of this code are Copyright (C) 2014 Yahoo! Inc. Licensed 
 * under the LGPL license.
 * 
 * Author: Nera Liu <neraliu@yahoo-inc.com>
 *
 */
#include "config.h"
#include "JSLocation.h"

#include "Frame.h"
#include "Document.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSLocationCustom.h"
#include "KURL.h"
#include "Location.h"
#include "TaintedCounter.h"
#include "TaintedTrace.h"
#include <sstream>
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSLocation);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSLocationTableValues[10] =
{
    { "href", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsLocationHref), (intptr_t)setJSLocationHref THUNK_GENERATOR(0) },
    { "protocol", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsLocationProtocol), (intptr_t)setJSLocationProtocol THUNK_GENERATOR(0) },
    { "host", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsLocationHost), (intptr_t)setJSLocationHost THUNK_GENERATOR(0) },
    { "hostname", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsLocationHostname), (intptr_t)setJSLocationHostname THUNK_GENERATOR(0) },
    { "port", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsLocationPort), (intptr_t)setJSLocationPort THUNK_GENERATOR(0) },
    { "pathname", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsLocationPathname), (intptr_t)setJSLocationPathname THUNK_GENERATOR(0) },
    { "search", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsLocationSearch), (intptr_t)setJSLocationSearch THUNK_GENERATOR(0) },
    { "hash", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsLocationHash), (intptr_t)setJSLocationHash THUNK_GENERATOR(0) },
    { "origin", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsLocationOrigin), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSLocationTable = { 34, 31, JSLocationTableValues, 0 };
/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSLocationPrototypeTableValues[6] =
{
    { "assign", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsLocationPrototypeFunctionAssign), (intptr_t)1 THUNK_GENERATOR(0) },
    { "replace", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsLocationPrototypeFunctionReplace), (intptr_t)1 THUNK_GENERATOR(0) },
    { "reload", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsLocationPrototypeFunctionReload), (intptr_t)0 THUNK_GENERATOR(0) },
    { "getParameter", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsLocationPrototypeFunctionGetParameter), (intptr_t)1 THUNK_GENERATOR(0) },
    { "toString", DontDelete | DontEnum | Function, (intptr_t)static_cast<NativeFunction>(jsLocationPrototypeFunctionToString), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSLocationPrototypeTable = { 17, 15, JSLocationPrototypeTableValues, 0 };
const ClassInfo JSLocationPrototype::s_info = { "LocationPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSLocationPrototypeTable, 0 };

JSObject* JSLocationPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSLocation>(exec, globalObject);
}

bool JSLocationPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSLocationPrototypeTable, this, propertyName, slot);
}

bool JSLocationPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSLocationPrototypeTable, this, propertyName, descriptor);
}

void JSLocationPrototype::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    if (putDelegate(exec, propertyName, value, slot))
        return;
    Base::put(exec, propertyName, value, slot);
}

const ClassInfo JSLocation::s_info = { "Location", &JSDOMWrapper::s_info, &JSLocationTable, 0 };

JSLocation::JSLocation(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Location> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSLocation::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSLocationPrototype(exec->globalData(), globalObject, JSLocationPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSLocation::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    if (getOwnPropertySlotDelegate(exec, propertyName, slot))
        return true;
    return getStaticValueSlot<JSLocation, Base>(exec, &JSLocationTable, this, propertyName, slot);
}

bool JSLocation::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    if (getOwnPropertyDescriptorDelegate(exec, propertyName, descriptor))
        return true;
    return getStaticValueDescriptor<JSLocation, Base>(exec, &JSLocationTable, this, propertyName, descriptor);
}

JSValue jsLocationHref(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSLocation* castedThis = static_cast<JSLocation*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Location* imp = static_cast<Location*>(castedThis->impl());
    JSValue result = jsString(exec, imp->href());
#ifdef JSC_TAINTED
    TaintedCounter* counter = TaintedCounter::getInstance();
    unsigned int tainted = counter->getCount();
    result.setTainted(tainted);

    TaintedStructure trace_struct;
    trace_struct.taintedno = tainted;
    trace_struct.internalfunc = "jsLocationHref";
    trace_struct.jsfunc = "location.href";
    trace_struct.action = "source";

    char msg[20];
    stringstream msgss;
    snprintf(msg, 20, "%s", result.toString(exec).utf8(true).data());
    msgss << msg;
    msgss >> trace_struct.value;

    TaintedTrace* trace = TaintedTrace::getInstance();
    trace->addTaintedTrace(trace_struct);
#endif
    return result;
}


JSValue jsLocationProtocol(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSLocation* castedThis = static_cast<JSLocation*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Location* imp = static_cast<Location*>(castedThis->impl());
    JSValue result = jsString(exec, imp->protocol());
#ifdef JSC_TAINTED
    TaintedCounter* counter = TaintedCounter::getInstance();
    unsigned int tainted = counter->getCount();
    result.setTainted(tainted);

    TaintedStructure trace_struct;
    trace_struct.taintedno = tainted;
    trace_struct.internalfunc = "jsLocationProtocol";
    trace_struct.jsfunc = "location.protocol";
    trace_struct.action = "source";

    char msg[20];
    stringstream msgss;
    snprintf(msg, 20, "%s", result.toString(exec).utf8(true).data());
    msgss << msg;
    msgss >> trace_struct.value;

    TaintedTrace* trace = TaintedTrace::getInstance();
    trace->addTaintedTrace(trace_struct);
#endif
    return result;
}


JSValue jsLocationHost(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSLocation* castedThis = static_cast<JSLocation*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Location* imp = static_cast<Location*>(castedThis->impl());
    JSValue result = jsString(exec, imp->host());
#ifdef JSC_TAINTED
    TaintedCounter* counter = TaintedCounter::getInstance();
    unsigned int tainted = counter->getCount();
    result.setTainted(tainted);

    TaintedStructure trace_struct;
    trace_struct.taintedno = tainted;
    trace_struct.internalfunc = "jsLocationHost";
    trace_struct.jsfunc = "location.host";
    trace_struct.action = "source";

    char msg[20];
    stringstream msgss;
    snprintf(msg, 20, "%s", result.toString(exec).utf8(true).data());
    msgss << msg;
    msgss >> trace_struct.value;

    TaintedTrace* trace = TaintedTrace::getInstance();
    trace->addTaintedTrace(trace_struct);
#endif
    return result;
}


JSValue jsLocationHostname(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSLocation* castedThis = static_cast<JSLocation*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Location* imp = static_cast<Location*>(castedThis->impl());
    JSValue result = jsString(exec, imp->hostname());
#ifdef JSC_TAINTED
    TaintedCounter* counter = TaintedCounter::getInstance();
    unsigned int tainted = counter->getCount();
    result.setTainted(tainted);

    TaintedStructure trace_struct;
    trace_struct.taintedno = tainted;
    trace_struct.internalfunc = "jsLocationHostname";
    trace_struct.jsfunc = "location.hostname";
    trace_struct.action = "source";

    char msg[20];
    stringstream msgss;
    snprintf(msg, 20, "%s", result.toString(exec).utf8(true).data());
    msgss << msg;
    msgss >> trace_struct.value;

    TaintedTrace* trace = TaintedTrace::getInstance();
    trace->addTaintedTrace(trace_struct);
#endif
    return result;
}


JSValue jsLocationPort(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSLocation* castedThis = static_cast<JSLocation*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Location* imp = static_cast<Location*>(castedThis->impl());
    JSValue result = jsString(exec, imp->port());
#ifdef JSC_TAINTED
    TaintedCounter* counter = TaintedCounter::getInstance();
    unsigned int tainted = counter->getCount();
    result.setTainted(tainted);

    TaintedStructure trace_struct;
    trace_struct.taintedno = tainted;
    trace_struct.internalfunc = "jsLocationPort";
    trace_struct.jsfunc = "location.port";
    trace_struct.action = "source";

    char msg[20];
    stringstream msgss;
    snprintf(msg, 20, "%s", result.toString(exec).utf8(true).data());
    msgss << msg;
    msgss >> trace_struct.value;

    TaintedTrace* trace = TaintedTrace::getInstance();
    trace->addTaintedTrace(trace_struct);
#endif
    return result;
}


JSValue jsLocationPathname(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSLocation* castedThis = static_cast<JSLocation*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Location* imp = static_cast<Location*>(castedThis->impl());
    JSValue result = jsString(exec, imp->pathname());
#ifdef JSC_TAINTED
    TaintedCounter* counter = TaintedCounter::getInstance();
    unsigned int tainted = counter->getCount();
    result.setTainted(tainted);

    TaintedStructure trace_struct;
    trace_struct.taintedno = tainted;
    trace_struct.internalfunc = "jsLocationPathname";
    trace_struct.jsfunc = "location.pathname";
    trace_struct.action = "source";

    char msg[20];
    stringstream msgss;
    snprintf(msg, 20, "%s", result.toString(exec).utf8(true).data());
    msgss << msg;
    msgss >> trace_struct.value;

    TaintedTrace* trace = TaintedTrace::getInstance();
    trace->addTaintedTrace(trace_struct);
#endif
    return result;
}


JSValue jsLocationSearch(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSLocation* castedThis = static_cast<JSLocation*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Location* imp = static_cast<Location*>(castedThis->impl());
    JSValue result = jsString(exec, imp->search());
#ifdef JSC_TAINTED
    TaintedCounter* counter = TaintedCounter::getInstance();
    unsigned int tainted = counter->getCount();
    result.setTainted(tainted);

    TaintedStructure trace_struct;
    trace_struct.taintedno = tainted;
    trace_struct.internalfunc = "jsLocationSearch";
    trace_struct.jsfunc = "location.search";
    trace_struct.action = "source";

    char msg[20];
    stringstream msgss;
    snprintf(msg, 20, "%s", result.toString(exec).utf8(true).data());
    msgss << msg;
    msgss >> trace_struct.value;

    TaintedTrace* trace = TaintedTrace::getInstance();
    trace->addTaintedTrace(trace_struct);
#endif
    return result;
}


JSValue jsLocationHash(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSLocation* castedThis = static_cast<JSLocation*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Location* imp = static_cast<Location*>(castedThis->impl());
    JSValue result = jsString(exec, imp->hash());
#ifdef JSC_TAINTED
    TaintedCounter* counter = TaintedCounter::getInstance();
    unsigned int tainted = counter->getCount();
    result.setTainted(tainted);

    TaintedStructure trace_struct;
    trace_struct.taintedno = tainted;
    trace_struct.internalfunc = "jsLocationHash";
    trace_struct.jsfunc = "location.hash";
    trace_struct.action = "source";

    char msg[20];
    stringstream msgss;
    snprintf(msg, 20, "%s", result.toString(exec).utf8(true).data());
    msgss << msg;
    msgss >> trace_struct.value;

    TaintedTrace* trace = TaintedTrace::getInstance();
    trace->addTaintedTrace(trace_struct);
#endif
    return result;
}


JSValue jsLocationOrigin(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSLocation* castedThis = static_cast<JSLocation*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Location* imp = static_cast<Location*>(castedThis->impl());
    JSValue result = jsString(exec, imp->origin());
#ifdef JSC_TAINTED
    TaintedCounter* counter = TaintedCounter::getInstance();
    unsigned int tainted = counter->getCount();
    result.setTainted(tainted);

    TaintedStructure trace_struct;
    trace_struct.taintedno = tainted;
    trace_struct.internalfunc = "jsLocationOrigin";
    trace_struct.jsfunc = "location.origin";
    trace_struct.action = "source";

    char msg[20];
    stringstream msgss;
    snprintf(msg, 20, "%s", result.toString(exec).utf8(true).data());
    msgss << msg;
    msgss >> trace_struct.value;

    TaintedTrace* trace = TaintedTrace::getInstance();
    trace->addTaintedTrace(trace_struct);
#endif
    return result;
}


void JSLocation::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    if (putDelegate(exec, propertyName, value, slot))
        return;
    lookupPut<JSLocation, Base>(exec, propertyName, value, &JSLocationTable, this, slot);
}

void setJSLocationHref(ExecState* exec, JSObject* thisObject, JSValue value)
{
#ifdef JSC_TAINTED
    unsigned int tainted = 0;
    if (value.isString() && value.isTainted()) {
	tainted = value.isTainted();
    }
    if (value.inherits(&StringObject::s_info) && asStringObject(value)->isTainted()) {
	tainted = asStringObject(value)->isTainted();
    }
    if (value.isObject()) {
        UString s = value.toString(exec);
        if (s.isTainted()) {
		tainted = s.isTainted();
	}
    }
    if (tainted) {
        JSLocation* castedThis = static_cast<JSLocation*>(thisObject);
	Location* imp = static_cast<Location*>(castedThis->impl());
        imp->frame()->document()->setTainted(tainted);

	TaintedStructure trace_struct;
	trace_struct.taintedno = tainted;
	trace_struct.internalfunc = "setJSLocationHref";
	trace_struct.jsfunc = "location.href";
	trace_struct.action = "sink";

	char msg[20];
	stringstream msgss;
	snprintf(msg, 20, "%s", value.toString(exec).utf8(true).data());
	msgss << msg;
	msgss >> trace_struct.value;

	TaintedTrace* trace = TaintedTrace::getInstance();
	trace->addTaintedTrace(trace_struct);
    }
#endif
    static_cast<JSLocation*>(thisObject)->setHref(exec, value);
}


void setJSLocationProtocol(ExecState* exec, JSObject* thisObject, JSValue value)
{
#ifdef JSC_TAINTED
    unsigned int tainted = 0;
    if (value.isString() && value.isTainted()) {
	tainted = value.isTainted();
    }
    if (value.inherits(&StringObject::s_info) && asStringObject(value)->isTainted()) {
	tainted = asStringObject(value)->isTainted();
    }
    if (value.isObject()) {
        UString s = value.toString(exec);
        if (s.isTainted()) {
		tainted = s.isTainted();
	}
    }
    if (tainted) {
        JSLocation* castedThis = static_cast<JSLocation*>(thisObject);
	Location* imp = static_cast<Location*>(castedThis->impl());
        imp->frame()->document()->setTainted(tainted);

	TaintedStructure trace_struct;
	trace_struct.taintedno = tainted;
	trace_struct.internalfunc = "setJSLocationProtocol";
	trace_struct.jsfunc = "location.protocol";
	trace_struct.action = "sink";

	char msg[20];
	stringstream msgss;
	snprintf(msg, 20, "%s", value.toString(exec).utf8(true).data());
	msgss << msg;
	msgss >> trace_struct.value;

	TaintedTrace* trace = TaintedTrace::getInstance();
	trace->addTaintedTrace(trace_struct);
    }
#endif
    static_cast<JSLocation*>(thisObject)->setProtocol(exec, value);
}


void setJSLocationHost(ExecState* exec, JSObject* thisObject, JSValue value)
{
#ifdef JSC_TAINTED
    unsigned int tainted = 0;
    if (value.isString() && value.isTainted()) {
	tainted = value.isTainted();
    }
    if (value.inherits(&StringObject::s_info) && asStringObject(value)->isTainted()) {
	tainted = asStringObject(value)->isTainted();
    }
    if (value.isObject()) {
        UString s = value.toString(exec);
        if (s.isTainted()) {
		tainted = s.isTainted();
	}
    }
    if (tainted) {
        JSLocation* castedThis = static_cast<JSLocation*>(thisObject);
	Location* imp = static_cast<Location*>(castedThis->impl());
        imp->frame()->document()->setTainted(tainted);

	TaintedStructure trace_struct;
	trace_struct.taintedno = tainted;
	trace_struct.internalfunc = "setJSLocationHost";
	trace_struct.jsfunc = "location.host";
	trace_struct.action = "sink";

	char msg[20];
	stringstream msgss;
	snprintf(msg, 20, "%s", value.toString(exec).utf8(true).data());
	msgss << msg;
	msgss >> trace_struct.value;

	TaintedTrace* trace = TaintedTrace::getInstance();
	trace->addTaintedTrace(trace_struct);
    }
#endif
    static_cast<JSLocation*>(thisObject)->setHost(exec, value);
}


void setJSLocationHostname(ExecState* exec, JSObject* thisObject, JSValue value)
{
#ifdef JSC_TAINTED
    unsigned int tainted = 0;
    if (value.isString() && value.isTainted()) {
	tainted = value.isTainted();
    }
    if (value.inherits(&StringObject::s_info) && asStringObject(value)->isTainted()) {
	tainted = asStringObject(value)->isTainted();
    }
    if (value.isObject()) {
        UString s = value.toString(exec);
        if (s.isTainted()) {
		tainted = s.isTainted();
	}
    }
    if (tainted) {
        JSLocation* castedThis = static_cast<JSLocation*>(thisObject);
	Location* imp = static_cast<Location*>(castedThis->impl());
        imp->frame()->document()->setTainted(tainted);

	TaintedStructure trace_struct;
	trace_struct.taintedno = tainted;
	trace_struct.internalfunc = "setJSLocationHostname";
	trace_struct.jsfunc = "location.hostname";
	trace_struct.action = "sink";

	char msg[20];
	stringstream msgss;
	snprintf(msg, 20, "%s", value.toString(exec).utf8(true).data());
	msgss << msg;
	msgss >> trace_struct.value;

	TaintedTrace* trace = TaintedTrace::getInstance();
	trace->addTaintedTrace(trace_struct);
    }
#endif
    static_cast<JSLocation*>(thisObject)->setHostname(exec, value);
}


void setJSLocationPort(ExecState* exec, JSObject* thisObject, JSValue value)
{
#ifdef JSC_TAINTED
    unsigned int tainted = 0;
    if (value.isString() && value.isTainted()) {
	tainted = value.isTainted();
    }
    if (value.inherits(&StringObject::s_info) && asStringObject(value)->isTainted()) {
	tainted = asStringObject(value)->isTainted();
    }
    if (value.isObject()) {
        UString s = value.toString(exec);
        if (s.isTainted()) {
		tainted = s.isTainted();
	}
    }
    if (tainted) {
        JSLocation* castedThis = static_cast<JSLocation*>(thisObject);
	Location* imp = static_cast<Location*>(castedThis->impl());
        imp->frame()->document()->setTainted(tainted);

	TaintedStructure trace_struct;
	trace_struct.taintedno = tainted;
	trace_struct.internalfunc = "setJSLocationPort";
	trace_struct.jsfunc = "location.port";
	trace_struct.action = "sink";

	char msg[20];
	stringstream msgss;
	snprintf(msg, 20, "%s", value.toString(exec).utf8(true).data());
	msgss << msg;
	msgss >> trace_struct.value;

	TaintedTrace* trace = TaintedTrace::getInstance();
	trace->addTaintedTrace(trace_struct);
    }
#endif
    static_cast<JSLocation*>(thisObject)->setPort(exec, value);
}


void setJSLocationPathname(ExecState* exec, JSObject* thisObject, JSValue value)
{
#ifdef JSC_TAINTED
    unsigned int tainted = 0;
    if (value.isString() && value.isTainted()) {
	tainted = value.isTainted();
    }
    if (value.inherits(&StringObject::s_info) && asStringObject(value)->isTainted()) {
	tainted = asStringObject(value)->isTainted();
    }
    if (value.isObject()) {
        UString s = value.toString(exec);
        if (s.isTainted()) {
		tainted = s.isTainted();
	}
    }
    if (tainted) {
        JSLocation* castedThis = static_cast<JSLocation*>(thisObject);
	Location* imp = static_cast<Location*>(castedThis->impl());
        imp->frame()->document()->setTainted(tainted);

	TaintedStructure trace_struct;
	trace_struct.taintedno = tainted;
	trace_struct.internalfunc = "setJSLocationPathname";
	trace_struct.jsfunc = "location.pathname";
	trace_struct.action = "sink";

	char msg[20];
	stringstream msgss;
	snprintf(msg, 20, "%s", value.toString(exec).utf8(true).data());
	msgss << msg;
	msgss >> trace_struct.value;

	TaintedTrace* trace = TaintedTrace::getInstance();
	trace->addTaintedTrace(trace_struct);
    }
#endif
    static_cast<JSLocation*>(thisObject)->setPathname(exec, value);
}


void setJSLocationSearch(ExecState* exec, JSObject* thisObject, JSValue value)
{
#ifdef JSC_TAINTED
    unsigned int tainted = 0;
    if (value.isString() && value.isTainted()) {
	tainted = value.isTainted();
    }
    if (value.inherits(&StringObject::s_info) && asStringObject(value)->isTainted()) {
	tainted = asStringObject(value)->isTainted();
    }
    if (value.isObject()) {
        UString s = value.toString(exec);
        if (s.isTainted()) {
		tainted = s.isTainted();
	}
    }
    if (tainted) {
        JSLocation* castedThis = static_cast<JSLocation*>(thisObject);
	Location* imp = static_cast<Location*>(castedThis->impl());
        imp->frame()->document()->setTainted(tainted);

	TaintedStructure trace_struct;
	trace_struct.taintedno = tainted;
	trace_struct.internalfunc = "setJSLocationSearch";
	trace_struct.jsfunc = "location.search";
	trace_struct.action = "sink";

	char msg[20];
	stringstream msgss;
	snprintf(msg, 20, "%s", value.toString(exec).utf8(true).data());
	msgss << msg;
	msgss >> trace_struct.value;

	TaintedTrace* trace = TaintedTrace::getInstance();
	trace->addTaintedTrace(trace_struct);
    }
#endif
    static_cast<JSLocation*>(thisObject)->setSearch(exec, value);
}


void setJSLocationHash(ExecState* exec, JSObject* thisObject, JSValue value)
{
#ifdef JSC_TAINTED
    unsigned int tainted = 0;
    if (value.isString() && value.isTainted()) {
	tainted = value.isTainted();
    }
    if (value.inherits(&StringObject::s_info) && asStringObject(value)->isTainted()) {
	tainted = asStringObject(value)->isTainted();
    }
    if (value.isObject()) {
        UString s = value.toString(exec);
        if (s.isTainted()) {
		tainted = s.isTainted();
	}
    }
    if (tainted) {
        JSLocation* castedThis = static_cast<JSLocation*>(thisObject);
	Location* imp = static_cast<Location*>(castedThis->impl());
        imp->frame()->document()->setTainted(tainted);

	TaintedStructure trace_struct;
	trace_struct.taintedno = tainted;
	trace_struct.internalfunc = "setJSLocationHash";
	trace_struct.jsfunc = "location.hash";
	trace_struct.action = "sink";

	char msg[20];
	stringstream msgss;
	snprintf(msg, 20, "%s", value.toString(exec).utf8(true).data());
	msgss << msg;
	msgss >> trace_struct.value;

	TaintedTrace* trace = TaintedTrace::getInstance();
	trace->addTaintedTrace(trace_struct);
    }
#endif
    static_cast<JSLocation*>(thisObject)->setHash(exec, value);
}


EncodedJSValue JSC_HOST_CALL jsLocationPrototypeFunctionAssign(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSLocation::s_info))
        return throwVMTypeError(exec);
    JSLocation* castedThis = static_cast<JSLocation*>(asObject(thisValue));
    return JSValue::encode(castedThis->assign(exec));
}

EncodedJSValue JSC_HOST_CALL jsLocationPrototypeFunctionReplace(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSLocation::s_info))
        return throwVMTypeError(exec);
    JSLocation* castedThis = static_cast<JSLocation*>(asObject(thisValue));
    return JSValue::encode(castedThis->replace(exec));
}

EncodedJSValue JSC_HOST_CALL jsLocationPrototypeFunctionReload(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSLocation::s_info))
        return throwVMTypeError(exec);
    JSLocation* castedThis = static_cast<JSLocation*>(asObject(thisValue));
    return JSValue::encode(castedThis->reload(exec));
}

EncodedJSValue JSC_HOST_CALL jsLocationPrototypeFunctionGetParameter(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSLocation::s_info))
        return throwVMTypeError(exec);
    JSLocation* castedThis = static_cast<JSLocation*>(asObject(thisValue));
    Location* imp = static_cast<Location*>(castedThis->impl());
    const String& name(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = jsString(exec, imp->getParameter(name));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsLocationPrototypeFunctionToString(ExecState* exec)
{
#ifdef JSC_TAINTED
// implement @ bindings/js/JSLocationCustom.cpp toStringFunction()
#endif
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSLocation::s_info))
        return throwVMTypeError(exec);
    JSLocation* castedThis = static_cast<JSLocation*>(asObject(thisValue));
    return JSValue::encode(castedThis->toStringFunction(exec));
}

static inline bool isObservable(JSLocation* jsLocation)
{
    if (jsLocation->hasCustomProperties())
        return true;
    return false;
}

bool JSLocationOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSLocation* jsLocation = static_cast<JSLocation*>(handle.get().asCell());
    if (!isObservable(jsLocation))
        return false;
    Frame* root = jsLocation->impl()->frame();
    if (!root)
        return false;
    return visitor.containsOpaqueRoot(root);
}

void JSLocationOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSLocation* jsLocation = static_cast<JSLocation*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsLocation->impl(), jsLocation);
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, Location* impl)
{
    return wrap<JSLocation>(exec, globalObject, impl);
}

Location* toLocation(JSC::JSValue value)
{
    return value.inherits(&JSLocation::s_info) ? static_cast<JSLocation*>(asObject(value))->impl() : 0;
}

}
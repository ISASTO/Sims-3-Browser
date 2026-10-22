/* objc_api.c — libobjc C entry points used by the guest (ARC, class introspection, exceptions, sync). */
#include "rt.h"

uint32_t objc_pool_push(void);
void objc_pool_pop(CPU *c, uint32_t token);
void objc_weak_register(gptr slot, gptr obj);
void objc_weak_unregister(gptr slot, gptr obj);
bool objc_is_deallocating(gptr obj);
uint32_t objc_instance_size(gptr cls);
bool objc_is_metaclass(gptr cls);
bool objc_is_class(gptr obj);
void objc_add_method_imp(gptr cls, gptr sel, gptr imp);
gptr objc_own_imp(gptr cls, gptr sel);
gptr objc_allocate_class_pair(gptr super, const char *name, uint32_t extra);
void objc_destroy_instance(gptr obj);
void H_objc_msgSend(CPU *c);

/* retain/release honour guest overrides of -retain/-release (e.g. singletons) */
static gptr sel_retain_, sel_release_, sel_autorelease_;
gptr host_nsobject_retain_imp, host_nsobject_release_imp, host_nsobject_autorelease_imp;
static bool custom(gptr obj, gptr sel, gptr host_imp) {
    gptr imp = objc_lookup_imp(LD32(obj), sel);
    return imp && imp != host_imp;
}
gptr rt_retain(CPU *c, gptr obj) {
    if (!obj) return 0;
    if (!sel_retain_) { sel_retain_ = sel_get("retain"); sel_release_ = sel_get("release"); sel_autorelease_ = sel_get("autorelease"); }
    if (custom(obj, sel_retain_, host_nsobject_retain_imp)) return msg(c, obj, "retain", 0);
    return objc_retain_(obj);
}
void rt_release(CPU *c, gptr obj) {
    if (!obj) return;
    if (!sel_retain_) { sel_retain_ = sel_get("retain"); sel_release_ = sel_get("release"); sel_autorelease_ = sel_get("autorelease"); }
    if (custom(obj, sel_release_, host_nsobject_release_imp)) { msg(c, obj, "release", 0); return; }
    objc_release_(c, obj);
}
gptr rt_autorelease(CPU *c, gptr obj) {
    if (!obj) return 0;
    if (!sel_retain_) { sel_retain_ = sel_get("retain"); sel_release_ = sel_get("release"); sel_autorelease_ = sel_get("autorelease"); }
    if (custom(obj, sel_autorelease_, host_nsobject_autorelease_imp)) return msg(c, obj, "autorelease", 0);
    return objc_autorelease_(obj);
}
gptr block_copy(gptr b);
void H_objc_retain(CPU *c) { RET(rt_retain(c, ARG(0))); }
void H_objc_release(CPU *c) { rt_release(c, ARG(0)); }
void H_objc_autorelease(CPU *c) { RET(rt_autorelease(c, ARG(0))); }
void H_objc_retainAutoreleasedReturnValue(CPU *c) { RET(rt_retain(c, ARG(0))); }
void H_objc_autoreleaseReturnValue(CPU *c) { RET(rt_autorelease(c, ARG(0))); }
void H_objc_retainAutoreleaseReturnValue(CPU *c) { gptr o = rt_retain(c, ARG(0)); RET(rt_autorelease(c, o)); }
void H_objc_retainAutorelease(CPU *c) { gptr o = rt_retain(c, ARG(0)); RET(rt_autorelease(c, o)); }
void H_objc_retainBlock(CPU *c) { RET(block_copy(ARG(0))); }
void H_objc_storeStrong(CPU *c) {
    gptr slot = ARG(0), obj = ARG(1);
    gptr prev = LD32(slot);
    if (prev == obj) return;
    rt_retain(c, obj);
    ST32(slot, obj);
    rt_release(c, prev);
}
void H_objc_autoreleasePoolPush(CPU *c) { RET(objc_pool_push()); }
void H_objc_autoreleasePoolPop(CPU *c) { objc_pool_pop(c, ARG(0)); }

/* weak */
void H_objc_initWeak(CPU *c) { gptr slot = ARG(0), obj = ARG(1); if (obj && objc_is_deallocating(obj)) obj = 0; ST32(slot, obj); if (obj) objc_weak_register(slot, obj); RET(obj); }
void H_objc_storeWeak(CPU *c) {
    gptr slot = ARG(0), obj = ARG(1);
    gptr prev = LD32(slot);
    if (prev) objc_weak_unregister(slot, prev);
    if (obj && objc_is_deallocating(obj)) obj = 0;
    ST32(slot, obj);
    if (obj) objc_weak_register(slot, obj);
    RET(obj);
}
void H_objc_destroyWeak(CPU *c) { gptr slot = ARG(0); gptr prev = LD32(slot); if (prev) objc_weak_unregister(slot, prev); ST32(slot, 0); }
void H_objc_loadWeakRetained(CPU *c) { gptr o = LD32(ARG(0)); if (o && objc_is_deallocating(o)) o = 0; RET(rt_retain(c, o)); }
void H_objc_copyWeak(CPU *c) { gptr o = LD32(ARG(1)); ST32(ARG(0), o); if (o) objc_weak_register(ARG(0), o); }

/* class/object introspection */
void H_objc_getClass(CPU *c) { RET(objc_class_named(GSTR(ARG(0)))); }
void H_objc_lookUpClass(CPU *c) { RET(objc_class_named(GSTR(ARG(0)))); }
void H_objc_getRequiredClass(CPU *c) { gptr k = objc_class_named(GSTR(ARG(0))); if (!k) rt_fatal(c, "objc_getRequiredClass(%s) failed", GSTR(ARG(0))); RET(k); }
void H_objc_getMetaClass(CPU *c) { gptr k = objc_class_named(GSTR(ARG(0))); RET(k ? LD32(k) : 0); }
void H_NSClassFromString(CPU *c) { RET(ARG(0) ? objc_class_named(nsstr_cstr(ARG(0))) : 0); }
void H_NSStringFromClass(CPU *c) { RET(ARG(0) ? nsstr(objc_class_name(ARG(0))) : 0); }
void H_NSStringFromSelector(CPU *c) { RET(ARG(0) ? nsstr(sel_name(ARG(0))) : 0); }
void H_object_getClass(CPU *c) { RET(objc_get_class(ARG(0))); }
void H_object_setClass(CPU *c) { gptr o = ARG(0); gptr old = o ? LD32(o) : 0; if (o) ST32(o, ARG(1)); RET(old); }
void H_class_getName(CPU *c) { RET(ARG(0) ? gstatic_str(objc_class_name(ARG(0))) : gstatic_str("nil")); }
void H_class_getSuperclass(CPU *c) { RET(objc_superclass(ARG(0))); }
void H_class_isMetaClass(CPU *c) { RET(objc_is_metaclass(ARG(0))); }
void H_class_getInstanceSize(CPU *c) { RET(objc_instance_size(ARG(0))); }
void H_class_respondsToSelector(CPU *c) { RET(ARG(0) && objc_lookup_imp(ARG(0), ARG(1)) != 0); }
void H_sel_getUid(CPU *c) { RET(sel_get(GSTR(ARG(0)))); }
void H_sel_registerName(CPU *c) { RET(sel_get(GSTR(ARG(0)))); }
/* Method handles: represent a Method as a small guest struct {sel, types, imp} */
static gptr make_method(gptr sel, gptr imp) { gptr m = gstatic_alloc(12); ST32(m, sel); ST32(m + 4, gstatic_str("v8@0:4")); ST32(m + 8, imp); return m; }
void H_class_getInstanceMethod(CPU *c) { gptr imp = ARG(0) ? objc_lookup_imp(ARG(0), ARG(1)) : 0; RET(imp ? make_method(ARG(1), imp) : 0); }
void H_class_getClassMethod(CPU *c) { gptr imp = ARG(0) ? objc_lookup_imp(LD32(ARG(0)), ARG(1)) : 0; RET(imp ? make_method(ARG(1), imp) : 0); }
void H_method_setImplementation(CPU *c) { rt_fatal(c, "method_setImplementation (swizzling) is not supported"); }
void H_class_addMethod(CPU *c) {
    gptr cls = ARG(0), sel = ARG(1), imp = ARG(2);
    if (objc_own_imp(cls, sel)) { RET(0); return; }
    objc_add_method_imp(cls, sel, imp); RET(1);
}
void H_class_replaceMethod(CPU *c) { gptr old = objc_own_imp(ARG(0), ARG(1)); objc_add_method_imp(ARG(0), ARG(1), ARG(2)); RET(old); }
void H_objc_allocateClassPair(CPU *c) { RET(objc_allocate_class_pair(ARG(0), GSTR(ARG(1)), ARG(2))); }
void H_objc_registerClassPair(CPU *c) { UNUSED(c); }
void H_objc_constructInstance(CPU *c) { gptr o = ARG(1); if (o) ST32(o, ARG(0)); RET(o); }
void H_object_getIndexedIvars(CPU *c) { RET(ARG(0) + objc_instance_size(LD32(ARG(0)))); }

/* @synchronized: single-threaded at any instant (cooperative scheduler) */
void H_objc_sync_enter(CPU *c) { c->locks++; RET(0); }
void H_objc_sync_exit(CPU *c) { if (c->locks) c->locks--; RET(0); }
void H_objc_enumerationMutation(CPU *c) { rt_fatal(c, "collection mutated while being enumerated (%s)", objc_obj_class_name(ARG(0))); }

/* exceptions: ObjC exceptions are not expected on the gameplay path; fail loudly with the reason */
void H_objc_exception_throw(CPU *c) {
    gptr e = ARG(0);
    const char *reason = "?";
    if (e && responds(e, "reason")) { gptr r = msg(c, e, "reason", 0); if (r) reason = nsstr_cstr(r); }
    rt_fatal(c, "Objective-C exception thrown: %s: %s", objc_obj_class_name(e), reason);
}
void H_objc_exception_rethrow(CPU *c) { rt_fatal(c, "objc_exception_rethrow"); }
void H_objc_begin_catch(CPU *c) { RET(ARG(0)); }
void H_objc_end_catch(CPU *c) { UNUSED(c); }
void H_objc_terminate(CPU *c) { rt_fatal(c, "objc_terminate"); }

/* properties (atomicity irrelevant under cooperative scheduling) */
void H_objc_getProperty(CPU *c) {
    gptr self = ARG(0); int32_t off = (int32_t)ARG(2);
    gptr v = LD32(self + off);
    if (ARG(3)) { rt_retain(c, v); rt_autorelease(c, v); }
    RET(v);
}
static void set_prop(CPU *c, gptr self, int32_t off, gptr v, bool copy) {
    gptr nv = copy && v ? msg(c, v, "copyWithZone:", 1, 0) : rt_retain(c, v);
    gptr old = LD32(self + off);
    ST32(self + off, nv);
    rt_release(c, old);
}
void H_objc_setProperty_nonatomic(CPU *c) { set_prop(c, ARG(0), (int32_t)ARG(3), ARG(2), false); }
void H_objc_setProperty_atomic(CPU *c) { set_prop(c, ARG(0), (int32_t)ARG(3), ARG(2), false); }
void H_objc_setProperty_nonatomic_copy(CPU *c) { set_prop(c, ARG(0), (int32_t)ARG(3), ARG(2), true); }
void H_objc_copyClassNamesForImage(CPU *c) { if (ARG(1)) ST32(ARG(1), 0); RET(0); }
void H_objc_getProtocol(CPU *c) { RET(0); }
void H_protocol_getName(CPU *c) { RET(ARG(0) ? LD32(ARG(0) + 4) : 0); }
void H_class_addProtocol(CPU *c) { RET(1); }
void H_class_addProperty(CPU *c) { RET(1); }
void H_class_getInstanceVariable(CPU *c) { RET(0); }
void H_class_getIvarLayout(CPU *c) { RET(0); }
void H_ivar_getOffset(CPU *c) { RET(0); }
void H_ivar_getName(CPU *c) { RET(0); }
void H_object_getIvar(CPU *c) { RET(0); }
void H_object_setIvar(CPU *c) { UNUSED(c); }
void H_property_copyAttributeList(CPU *c) { if (ARG(1)) ST32(ARG(1), 0); RET(0); }
void H_protocol_getMethodDescription(CPU *c) { ST32(ARG(0), 0); ST32(ARG(0) + 4, 0); }
void H_objc_readClassPair(CPU *c) { RET(0); }
void H_objc_initializeClassPair(CPU *c) { RET(0); }

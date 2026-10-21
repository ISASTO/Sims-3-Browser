/* cxx.c — libc++ / libc++abi HLE: operator new/delete, guards, atexit, pure virtual, SjLj unwinder
 * registration, exceptions (C++ throw is only used by jsoncpp in the SDK; we fail loudly if thrown). */
#include "rt.h"

void H__Znwm(CPU *c) { gptr p = gmalloc(ARG(0)); if (!p) rt_fatal(c, "operator new(%u) failed: guest heap exhausted", ARG(0)); RET(p); }
void H__Znam(CPU *c) { H__Znwm(c); }
void H__ZdlPv(CPU *c) { gfree(ARG(0)); }
void H__ZdaPv(CPU *c) { gfree(ARG(0)); }

/* function-local statics: guard byte 0 = initialised flag (single host thread) */
void H___cxa_guard_acquire(CPU *c) { gptr g = ARG(0); RET(LD8(g) ? 0 : 1); }
void H___cxa_guard_release(CPU *c) { ST8(ARG(0), 1); }
void H___cxa_guard_abort(CPU *c) { UNUSED(c); }
/* static destructors registered with __cxa_atexit run at process exit, which never happens in the browser port */
void H___cxa_atexit(CPU *c) { RET(0); }
void H___cxa_pure_virtual(CPU *c) { rt_fatal(c, "pure virtual function called"); }

/* SjLj unwinder function-context stack (Apple armv7 libunwind ABI) */
void H__Unwind_SjLj_Register(CPU *c) { gptr ctx = ARG(0); ST32(ctx, c->sjlj_head); c->sjlj_head = ctx; }
void H__Unwind_SjLj_Unregister(CPU *c) { gptr ctx = ARG(0); c->sjlj_head = LD32(ctx); }
void H__Unwind_SjLj_Resume(CPU *c) { rt_fatal(c, "_Unwind_SjLj_Resume: exception propagation reached a cleanup (exceptions are not expected on this path)"); }

void H___cxa_allocate_exception(CPU *c) { RET(gcalloc(1, ARG(0) + 128) + 128); }
void H___cxa_free_exception(CPU *c) { gfree(ARG(0) - 128); }
void H___cxa_throw(CPU *c) {
    gptr ti = ARG(1);
    const char *name = ti ? GSTR(LD32(ti + 4)) : "?";
    rt_fatal(c, "C++ exception thrown (type %s)", name);
}
void H___cxa_begin_catch(CPU *c) { RET(ARG(0)); }
void H___cxa_end_catch(CPU *c) { UNUSED(c); }
void H__ZSt9terminatev(CPU *c) { rt_fatal(c, "std::terminate"); }
void H__ZSt18uncaught_exceptionv(CPU *c) { RET(0); }
void H___gxx_personality_sj0(CPU *c) { rt_fatal(c, "C++ personality routine invoked"); }
void H___objc_personality_v0(CPU *c) { rt_fatal(c, "ObjC personality routine invoked"); }

/* libc++ std::string (32-bit, little-endian, default layout):
 *   long  = {cap|1, size, data};  short = {size<<1 (byte 0), chars[11]} */
static bool s_is_long(gptr s) { return LD8(s) & 1; }
static uint32_t s_size(gptr s) { return s_is_long(s) ? LD32(s + 4) : LD8(s) >> 1; }
static gptr s_data(gptr s) { return s_is_long(s) ? LD32(s + 8) : s + 1; }
static uint32_t s_cap(gptr s) { return s_is_long(s) ? (LD32(s) & ~1u) - 1 : 10; }
static void s_reserve(gptr s, uint32_t n) {
    if (n <= s_cap(s)) return;
    uint32_t sz = s_size(s);
    uint32_t cap = (n + 16) & ~15u;
    gptr d = gmalloc(cap);
    memcpy(G2H(d), G2H(s_data(s)), sz + 1);
    if (s_is_long(s)) gfree(LD32(s + 8));
    ST32(s, cap | 1); ST32(s + 4, sz); ST32(s + 8, d);
}
static void s_set_size(gptr s, uint32_t n) { if (s_is_long(s)) ST32(s + 4, n); else ST8(s, n << 1); ST8(s_data(s) + n, 0); }
static void s_assign(gptr s, const char *p, uint32_t n) {
    if (n > 10) {
        if (!s_is_long(s) || s_cap(s) < n) {
            if (s_is_long(s)) gfree(LD32(s + 8));
            uint32_t cap = (n + 16) & ~15u; gptr d = gmalloc(cap);
            ST32(s, cap | 1); ST32(s + 8, d);
        }
        memcpy(G2H(LD32(s + 8)), p, n); ST32(s + 4, n); ST8(LD32(s + 8) + n, 0);
    } else if (s_is_long(s)) { memcpy(G2H(LD32(s + 8)), p, n); ST32(s + 4, n); ST8(LD32(s + 8) + n, 0); }
    else { memcpy(G2H(s + 1), p, n); ST8(s, n << 1); ST8(s + 1 + n, 0); }
}
static void s_init(gptr s, const char *p, uint32_t n) { ST32(s, 0); ST32(s + 4, 0); ST32(s + 8, 0); s_assign(s, p, n); }
static void s_append(gptr s, const char *p, uint32_t n) {
    char *tmp = malloc(n + 1); memcpy(tmp, p, n);   /* p may alias s */
    uint32_t sz = s_size(s); s_reserve(s, sz + n);
    memcpy(G2H(s_data(s) + sz), tmp, n); s_set_size(s, sz + n); free(tmp);
}
#define STRSYM(x) H__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE##x
void STRSYM(6__initEPKcm)(CPU *c) { s_init(ARG(0), GSTR(ARG(1)), ARG(2)); }
void STRSYM(6__initEmc)(CPU *c) { gptr s = ARG(0); uint32_t n = ARG(1); char *t = malloc(n + 1); memset(t, (int)ARG(2), n); s_init(s, t, n); free(t); }
void STRSYM(6appendEPKc)(CPU *c) { s_append(ARG(0), GSTR(ARG(1)), (uint32_t)strlen(GSTR(ARG(1)))); RET(ARG(0)); }
void STRSYM(6appendEPKcm)(CPU *c) { s_append(ARG(0), GSTR(ARG(1)), ARG(2)); RET(ARG(0)); }
void STRSYM(6assignEPKc)(CPU *c) { const char *p = GSTR(ARG(1)); char *t = strdup(p); s_assign(ARG(0), t, (uint32_t)strlen(t)); free(t); RET(ARG(0)); }
void STRSYM(6insertEmPKc)(CPU *c) {
    gptr s = ARG(0); uint32_t pos = ARG(1); const char *p = GSTR(ARG(2)); uint32_t n = (uint32_t)strlen(p);
    char *t = strdup(p); uint32_t sz = s_size(s); if (pos > sz) rt_fatal(c, "std::string::insert out of range");
    s_reserve(s, sz + n); uint8_t *d = G2H(s_data(s)); memmove(d + pos + n, d + pos, sz - pos); memcpy(d + pos, t, n); s_set_size(s, sz + n); free(t); RET(s);
}
void STRSYM(6resizeEmc)(CPU *c) { gptr s = ARG(0); uint32_t n = ARG(1), sz = s_size(s); if (n > sz) { s_reserve(s, n); memset(G2H(s_data(s) + sz), (int)(ARG(2) & 0xff), n - sz); } s_set_size(s, n); }
void STRSYM(7reserveEm)(CPU *c) { s_reserve(ARG(0), ARG(1)); }
void STRSYM(9push_backEc)(CPU *c) { char ch = (char)ARG(1); s_append(ARG(0), &ch, 1); }
void STRSYM(C1ERKS5_)(CPU *c) { gptr s = ARG(0), o = ARG(1); char *t = malloc(s_size(o) + 1); memcpy(t, G2H(s_data(o)), s_size(o)); s_init(s, t, s_size(o)); free(t); RET(s); }
void STRSYM(D1Ev)(CPU *c) { gptr s = ARG(0); if (s_is_long(s)) gfree(LD32(s + 8)); RET(s); }
void STRSYM(aSERKS5_)(CPU *c) { gptr s = ARG(0), o = ARG(1); if (s != o) { char *t = malloc(s_size(o) + 1); memcpy(t, G2H(s_data(o)), s_size(o)); s_assign(s, t, s_size(o)); free(t); } RET(s); }
void H__ZNKSt3__121__basic_string_commonILb1EE20__throw_length_errorEv(CPU *c) { rt_fatal(c, "std::string length_error"); }
void H__ZNKSt3__120__vector_base_commonILb1EE20__throw_length_errorEv(CPU *c) { rt_fatal(c, "std::vector length_error"); }
void H__ZNKSt3__120__vector_base_commonILb1EE20__throw_out_of_rangeEv(CPU *c) { rt_fatal(c, "std::vector out_of_range"); }
void H__ZNSt3__19to_stringEl(CPU *c) { char b[32]; snprintf(b, sizeof b, "%d", (int32_t)ARG(1)); s_init(ARG(0), b, (uint32_t)strlen(b)); }
/* recursive_mutex: no-op under cooperative scheduling */
void H__ZNSt3__115recursive_mutexC1Ev(CPU *c) { RET(ARG(0)); }
void H__ZNSt3__115recursive_mutexD1Ev(CPU *c) { RET(ARG(0)); }
void H__ZNSt3__115recursive_mutex4lockEv(CPU *c) { UNUSED(c); }
void H__ZNSt3__115recursive_mutex6unlockEv(CPU *c) { UNUSED(c); }
/* shared_ptr control block: {vtable, shared_owners, shared_weak_owners} */
void H__ZNSt3__119__shared_weak_count12__add_sharedEv(CPU *c) { gptr p = ARG(0); ST32(p + 4, LD32(p + 4) + 1); }
void H__ZNSt3__119__shared_weak_count16__release_sharedEv(CPU *c) {
    gptr p = ARG(0);
    int32_t n = (int32_t)LD32(p + 4) - 1; ST32(p + 4, (uint32_t)n);
    if (n == -1) {
        gptr vt = LD32(p);
        guest_call1(c, LD32(vt + 8), p);            /* __on_zero_shared */
        int32_t w = (int32_t)LD32(p + 8) - 1; ST32(p + 8, (uint32_t)w);
        if (w == -1) guest_call1(c, LD32(vt + 16), p); /* __on_zero_shared_weak */
    }
}
void H__ZNSt3__119__shared_weak_countD2Ev(CPU *c) { RET(ARG(0)); }
void H__ZNSt9exceptionD2Ev(CPU *c) { RET(ARG(0)); }
void H__ZNKSt9exception4whatEv(CPU *c) { RET(gstatic_str("std::exception")); }
void H__ZNSt3__16chrono12system_clock3nowEv(CPU *c) { RET64((int64_t)(host_wall_ms() * 1000.0)); }

/* C++ runtime data referenced by the image (typeinfo vtables/objects, locale ids). The game does not use
 * dynamic_cast or RTTI-based exception matching on its own code paths; these give the references valid storage. */
void cxx_init(void) {
    static const char *syms[] = {"__ZTVN10__cxxabiv117__class_type_infoE", "__ZTVN10__cxxabiv120__si_class_type_infoE",
        "__ZTVN10__cxxabiv121__vmi_class_type_infoE", "__ZTINSt3__119__shared_weak_countE", "__ZTINSt3__18ios_baseE",
        "__ZTISt13runtime_error", "__ZTISt9exception", "__ZNSt3__15ctypeIcE2idE",
        "__ZNSt3__17num_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE2idE", "__objc_empty_cache", "__objc_empty_vtable"};
    for (unsigned i = 0; i < sizeof syms / sizeof syms[0]; i++) data_import_alloc(syms[i], 64);
}
void H__ZNSt3__16chrono12system_clock9to_time_tERKNS0_10time_pointIS1_NS0_8durationIxNS_5ratioILx1ELx1000000EEEEEEE(CPU *c) {
    int64_t us = (int64_t)LD64(ARG(0)); RET((uint32_t)(int32_t)(us / 1000000));
}
void H__ZNSt3__16chrono12system_clock11from_time_tEl(CPU *c) { RET64((int64_t)(int32_t)ARG(0) * 1000000); }

/* cxx_iostream.c — the libc++ (Apple, 32-bit) iostream pieces that live in libc++.dylib rather than in the
 * game binary: ios_base, locale with the ctype<char> and num_put<char> facets, basic_streambuf construction,
 * and basic_iostream destructors.  The templates instantiated in the game (basic_stringbuf, basic_ostream
 * operator<<, sentry, ...) are recompiled code and access these objects by their libc++ ABI layout, so the
 * layouts below follow libc++ exactly:
 *
 *   ios_base (72 bytes): vptr, fmtflags@4, precision@8, width@12, rdstate@16, exceptions@20, rdbuf@24,
 *                        locale@28, fn@32, index@36, event_size@40, event_cap@44, iarray@48 size@52 cap@56,
 *                        parray@60 size@64 cap@68;  basic_ios<char> adds tie@72, fill@76
 *   basic_streambuf<char> (32 bytes): vptr, locale@4, eback@8, gptr@12, egptr@16, pbase@20, pptr@24, epptr@28
 *   locale (4 bytes): pointer to the shared implementation;  locale::id: once_flag@0, id@4
 *   facet: vptr, __shared_owners_@4;  ctype<char> adds tab@8, del@12
 *
 * Facet virtual functions are host functions reached through guest vtables (slot order as in libc++). */
#include "rt.h"

/* ios_base::fmtflags (libc++) */
enum { F_BOOLALPHA = 0x1, F_DEC = 0x2, F_FIXED = 0x4, F_HEX = 0x8, F_INTERNAL = 0x10, F_LEFT = 0x20, F_OCT = 0x40, F_RIGHT = 0x80,
       F_SCIENTIFIC = 0x100, F_SHOWBASE = 0x200, F_SHOWPOINT = 0x400, F_SHOWPOS = 0x800, F_SKIPWS = 0x1000, F_UPPERCASE = 0x4000 };
enum { S_BAD = 1, S_EOF = 2, S_FAIL = 4 };

static gptr locale_imp, facet_ctype, facet_numput, id_ctype, id_numput;
static gptr vt_ctype, vt_numput;

/* ------------------------------------------------------------------ locale */
static void locale_ref(gptr imp) { if (imp) ST32(imp, LD32(imp) + 1); }
static void locale_unref(gptr imp) { if (imp && LD32(imp) > 1) ST32(imp, LD32(imp) - 1); }   /* the classic locale is never freed */
void H__ZNSt3__16localeC1Ev(CPU *c) { ST32(ARG(0), locale_imp); locale_ref(locale_imp); RET(ARG(0)); }
void H__ZNSt3__16localeD1Ev(CPU *c) { locale_unref(LD32(ARG(0))); RET(ARG(0)); }
/* const locale::facet* locale::use_facet(id&) const */
void H__ZNKSt3__16locale9use_facetERNS0_2idE(CPU *c) {
    gptr id = ARG(1);
    if (id == id_ctype) { RET(facet_ctype); return; }
    if (id == id_numput) { RET(facet_numput); return; }
    rt_fatal(c, "locale::use_facet: facet id %08x (%s) not provided", id, rt_symbolize(id));
}
/* locale ios_base::getloc() const — returned through memory (non-trivial class): r0 = result, r1 = this */
void H__ZNKSt3__18ios_base6getlocEv(CPU *c) { gptr imp = LD32(ARG(1) + 28); ST32(ARG(0), imp); locale_ref(imp); }

/* ------------------------------------------------------------------ ios_base */
void H__ZNSt3__18ios_base4initEPv(CPU *c) {
    gptr t = ARG(0), sb = ARG(1);
    ST32(t + 24, sb);
    ST32(t + 16, sb ? 0 : S_BAD);
    ST32(t + 20, 0);
    ST32(t + 4, F_SKIPWS | F_DEC);
    ST32(t + 12, 0);
    ST32(t + 8, 6);
    for (uint32_t o = 32; o < 72; o += 4) ST32(t + o, 0);
    ST32(t + 28, locale_imp); locale_ref(locale_imp);
}
static void ios_check(CPU *c, gptr t) {
    if (LD32(t + 16) & LD32(t + 20)) rt_fatal(c, "ios_base::failure (state %u, exceptions %u): C++ exceptions are not supported", LD32(t + 16), LD32(t + 20));
}
void H__ZNSt3__18ios_base5clearEj(CPU *c) {
    gptr t = ARG(0);
    ST32(t + 16, ARG(1) | (LD32(t + 24) ? 0 : S_BAD));
    ios_check(c, t);
}
void H__ZNSt3__18ios_base33__set_badbit_and_consider_rethrowEv(CPU *c) {
    gptr t = ARG(0);
    ST32(t + 16, LD32(t + 16) | S_BAD);
    if (LD32(t + 20) & S_BAD) rt_fatal(c, "ios_base: rethrow of a stream exception (C++ exceptions are not supported)");
}
static void ios_destroy(CPU *c, gptr t) {
    UNUSED(c);
    if (LD32(t + 32)) rt_log("ios_base: register_callback callbacks are not invoked at destruction");
    gfree(LD32(t + 32)); gfree(LD32(t + 36)); gfree(LD32(t + 48)); gfree(LD32(t + 60));
    locale_unref(LD32(t + 28));
}
void H__ZNSt3__18ios_baseD2Ev(CPU *c) { ios_destroy(c, ARG(0)); RET(ARG(0)); }
void H__ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(CPU *c) { ios_destroy(c, ARG(0)); RET(ARG(0)); }

/* ------------------------------------------------------------------ basic_streambuf<char> */
void H__ZNSt3__115basic_streambufIcNS_11char_traitsIcEEEC2Ev(CPU *c) {
    gptr t = ARG(0);
    gptr vt = image_symbol("__ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE");
    ST32(t, vt ? vt + 8 : 0);
    ST32(t + 4, locale_imp); locale_ref(locale_imp);
    for (uint32_t o = 8; o < 32; o += 4) ST32(t + o, 0);
    RET(t);
}
void H__ZNSt3__115basic_streambufIcNS_11char_traitsIcEEED2Ev(CPU *c) { locale_unref(LD32(ARG(0) + 4)); RET(ARG(0)); }

/* ------------------------------------------------------------------ basic_iostream<char> destructors
 * D2 (base object): the istream/ostream parts own no resources.  D1 (complete object) also destroys the virtual
 * basic_ios base, found through the vtable's virtual-base offset (vptr[-3]).  D0 = D1 + operator delete.
 * Thunks adjust `this` from the ostream subobject (+8) or through the virtual-base offset (vptr[-3]) first. */
static void iostream_d1(CPU *c, gptr t) { gptr vb = t + (uint32_t)(int32_t)LD32(LD32(t) - 12); ios_destroy(c, vb); }
void H__ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(CPU *c) { RET(ARG(0)); }
void H__ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED1Ev(CPU *c) { iostream_d1(c, ARG(0)); RET(ARG(0)); }
void H__ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED0Ev(CPU *c) { iostream_d1(c, ARG(0)); gfree(ARG(0)); }
void H__ZThn8_NSt3__114basic_iostreamIcNS_11char_traitsIcEEED1Ev(CPU *c) { iostream_d1(c, ARG(0) - 8); RET(ARG(0) - 8); }
void H__ZThn8_NSt3__114basic_iostreamIcNS_11char_traitsIcEEED0Ev(CPU *c) { iostream_d1(c, ARG(0) - 8); gfree(ARG(0) - 8); }
static gptr vthunk_this(gptr t) { return t + (uint32_t)(int32_t)LD32(LD32(t) - 12); }
void H__ZTv0_n12_NSt3__114basic_iostreamIcNS_11char_traitsIcEEED1Ev(CPU *c) { gptr t = vthunk_this(ARG(0)); iostream_d1(c, t); RET(t); }
void H__ZTv0_n12_NSt3__114basic_iostreamIcNS_11char_traitsIcEEED0Ev(CPU *c) { gptr t = vthunk_this(ARG(0)); iostream_d1(c, t); gfree(t); }

/* ------------------------------------------------------------------ ctype<char> facet (classic "C" locale) */
static void ct_dtor(CPU *c) { RET(ARG(0)); }
static void ct_zero(CPU *c) { UNUSED(c); }
static void ct_toupper(CPU *c) { int ch = (int)(int8_t)ARG(1); RET((uint32_t)(ch >= 'a' && ch <= 'z' ? ch - 32 : ch) & 0xff); }
static void ct_tolower(CPU *c) { int ch = (int)(int8_t)ARG(1); RET((uint32_t)(ch >= 'A' && ch <= 'Z' ? ch + 32 : ch) & 0xff); }
static void ct_toupper_r(CPU *c) { for (gptr p = ARG(1); p < ARG(2); p++) { uint8_t ch = LD8(p); if (ch >= 'a' && ch <= 'z') ST8(p, ch - 32); } RET(ARG(2)); }
static void ct_tolower_r(CPU *c) { for (gptr p = ARG(1); p < ARG(2); p++) { uint8_t ch = LD8(p); if (ch >= 'A' && ch <= 'Z') ST8(p, ch + 32); } RET(ARG(2)); }
static void ct_widen(CPU *c) { RET(ARG(1) & 0xff); }
static void ct_widen_r(CPU *c) { gptr lo = ARG(1), hi = ARG(2), to = ARG(3); for (; lo < hi; lo++, to++) ST8(to, LD8(lo)); RET(hi); }
static void ct_narrow(CPU *c) { uint32_t ch = ARG(1) & 0xff; RET(ch < 128 ? ch : ARG(2) & 0xff); }
static void ct_narrow_r(CPU *c) { gptr lo = ARG(1), hi = ARG(2), to = LD32(c->r[13]); uint8_t dfl = (uint8_t)ARG(3); for (; lo < hi; lo++, to++) { uint8_t ch = LD8(lo); ST8(to, ch < 128 ? ch : dfl); } RET(hi); }

/* ------------------------------------------------------------------ num_put<char, ostreambuf_iterator<char>> facet
 * do_put(iter s @r1, ios_base& @r2, char fill @r3, value @stack) -> iter.  Formatting follows libc++
 * (printf conversions chosen from the stream flags), then __pad_and_output with the stream width and fill,
 * written to the streambuf with sputn (vtable slot 12, xsputn).  A failed write nulls the iterator. */
static gptr put_out(CPU *c, gptr sb, gptr iob, uint8_t fill, const char *body, size_t n, size_t internal_at) {
    int32_t width = (int32_t)LD32(iob + 12);
    uint32_t adj = LD32(iob + 4) & (F_LEFT | F_RIGHT | F_INTERNAL);
    size_t pad = width > 0 && (size_t)width > n ? (size_t)width - n : 0;
    char *buf = malloc(n + pad + 1);
    if (adj == F_LEFT) { memcpy(buf, body, n); memset(buf + n, fill, pad); }
    else if (adj == F_INTERNAL) { memcpy(buf, body, internal_at); memset(buf + internal_at, fill, pad); memcpy(buf + internal_at + pad, body + internal_at, n - internal_at); }
    else { memset(buf, fill, pad); memcpy(buf + pad, body, n); }
    ST32(iob + 12, 0);   /* width is consumed by every formatted insertion */
    size_t total = n + pad;
    if (!sb) { free(buf); return 0; }
    gptr g = gmemdup(buf, (uint32_t)total);
    free(buf);
    gptr xsputn = LD32(LD32(sb) + 4 * 12);
    uint32_t wrote = guest_call3(c, xsputn, sb, g, (uint32_t)total);
    gfree(g);
    return wrote == total ? sb : 0;
}
/* index after the sign / 0x prefix, where internal padding goes */
static size_t internal_pos(const char *s) { size_t i = 0; if (s[i] == '+' || s[i] == '-') i++; if (s[i] == '0' && (s[i + 1] == 'x' || s[i + 1] == 'X')) i += 2; return i; }
static gptr put_int(CPU *c, gptr sb, gptr iob, uint8_t fill, uint64_t v, bool is_signed, bool wide) {
    uint32_t fl = LD32(iob + 4), base = fl & (F_DEC | F_OCT | F_HEX);
    char fmt[16], *f = fmt, out[64];
    *f++ = '%';
    if (fl & F_SHOWPOS && is_signed) *f++ = '+';
    if (fl & F_SHOWBASE) *f++ = '#';
    *f++ = 'l'; *f++ = 'l';
    *f++ = base == F_OCT ? 'o' : base == F_HEX ? (fl & F_UPPERCASE ? 'X' : 'x') : is_signed ? 'd' : 'u';
    *f = 0;
    if (is_signed) snprintf(out, sizeof out, fmt, wide ? (long long)(int64_t)v : (long long)(int32_t)v);
    else snprintf(out, sizeof out, fmt, wide ? (unsigned long long)v : (unsigned long long)(uint32_t)v);
    return put_out(c, sb, iob, fill, out, strlen(out), internal_pos(out));
}
static gptr put_float(CPU *c, gptr sb, gptr iob, uint8_t fill, double v) {
    uint32_t fl = LD32(iob + 4), ff = fl & (F_FIXED | F_SCIENTIFIC);
    int prec = (int)LD32(iob + 8);
    char fmt[16], *f = fmt, out[512];
    *f++ = '%';
    if (fl & F_SHOWPOS) *f++ = '+';
    if (fl & F_SHOWPOINT) *f++ = '#';
    bool up = fl & F_UPPERCASE;
    if (ff == (F_FIXED | F_SCIENTIFIC)) { *f++ = up ? 'A' : 'a'; *f = 0; snprintf(out, sizeof out, fmt, v); }
    else { *f++ = '.'; *f++ = '*'; *f++ = ff == F_FIXED ? (up ? 'F' : 'f') : ff == F_SCIENTIFIC ? (up ? 'E' : 'e') : (up ? 'G' : 'g'); *f = 0; snprintf(out, sizeof out, fmt, prec, v); }
    return put_out(c, sb, iob, fill, out, strlen(out), internal_pos(out));
}
static void np_dtor(CPU *c) { RET(ARG(0)); }
static void np_bool(CPU *c) {
    uint32_t v = LD32(c->r[13]) & 0xff;
    if (!(LD32(ARG(2) + 4) & F_BOOLALPHA)) { RET(put_int(c, ARG(1), ARG(2), (uint8_t)ARG(3), v, true, false)); return; }
    const char *s = v ? "true" : "false";
    RET(put_out(c, ARG(1), ARG(2), (uint8_t)ARG(3), s, strlen(s), 0));
}
static void np_long(CPU *c) { RET(put_int(c, ARG(1), ARG(2), (uint8_t)ARG(3), LD32(c->r[13]), true, false)); }
static void np_ulong(CPU *c) { RET(put_int(c, ARG(1), ARG(2), (uint8_t)ARG(3), LD32(c->r[13]), false, false)); }
static void np_llong(CPU *c) { RET(put_int(c, ARG(1), ARG(2), (uint8_t)ARG(3), LD64(c->r[13]), true, true)); }
static void np_ullong(CPU *c) { RET(put_int(c, ARG(1), ARG(2), (uint8_t)ARG(3), LD64(c->r[13]), false, true)); }
static void np_double(CPU *c) { uint64_t b = LD64(c->r[13]); double d; memcpy(&d, &b, 8); RET(put_float(c, ARG(1), ARG(2), (uint8_t)ARG(3), d)); }
static void np_ptr(CPU *c) { char out[16]; snprintf(out, sizeof out, "0x%x", LD32(c->r[13])); RET(put_out(c, ARG(1), ARG(2), (uint8_t)ARG(3), out, strlen(out), 2)); }

static gptr make_vtable(GuestFn *fns, const char **names, int n) {
    gptr vt = gcalloc((uint32_t)n + 2, 4);   /* offset-to-top, RTTI, slots */
    for (int i = 0; i < n; i++) ST32(vt + 8 + 4 * i, thunk_for(fns[i], names[i]));
    return vt + 8;
}
void cxx_iostream_init(void) {
    locale_imp = gcalloc(1, 16); ST32(locale_imp, 1);   /* refcount; the classic locale lives forever */
    id_ctype = data_import_lookup("__ZNSt3__15ctypeIcE2idE");
    id_numput = data_import_lookup("__ZNSt3__17num_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE2idE");
    GuestFn ctf[] = {ct_dtor, ct_dtor, ct_zero, ct_toupper, ct_toupper_r, ct_tolower, ct_tolower_r, ct_widen, ct_widen_r, ct_narrow, ct_narrow_r};
    const char *ctn[] = {"ctype::~ctype", "ctype::~ctype(D0)", "ctype::__on_zero_shared", "ctype::do_toupper", "ctype::do_toupper(range)", "ctype::do_tolower",
        "ctype::do_tolower(range)", "ctype::do_widen", "ctype::do_widen(range)", "ctype::do_narrow", "ctype::do_narrow(range)"};
    vt_ctype = make_vtable(ctf, ctn, 11);
    facet_ctype = gcalloc(1, 16);
    ST32(facet_ctype, vt_ctype); ST32(facet_ctype + 4, 0);
    gptr rl = data_import_lookup("__DefaultRuneLocale");
    ST32(facet_ctype + 8, rl ? rl + 52 : 0);   /* classic_table(): _DefaultRuneLocale.__runetype */
    GuestFn npf[] = {np_dtor, np_dtor, ct_zero, np_bool, np_long, np_ulong, np_llong, np_ullong, np_double, np_double, np_ptr};
    const char *npn[] = {"num_put::~num_put", "num_put::~num_put(D0)", "num_put::__on_zero_shared", "num_put::do_put(bool)", "num_put::do_put(long)",
        "num_put::do_put(unsigned long)", "num_put::do_put(long long)", "num_put::do_put(unsigned long long)", "num_put::do_put(double)",
        "num_put::do_put(long double)", "num_put::do_put(const void*)"};
    vt_numput = make_vtable(npf, npn, 11);
    facet_numput = gcalloc(1, 8);
    ST32(facet_numput, vt_numput);
}

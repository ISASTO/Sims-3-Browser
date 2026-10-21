/* libc.c — HLE for libSystem C library, math, compiler-rt helpers, stdio, time. */
#include "rt.h"
#include "fmt.h"
#include <time.h>
#include <ctype.h>

/* ------------------------------------------------------------------ memory */
void H_malloc(CPU *c) { RET(gmalloc(ARG(0))); }
void H_calloc(CPU *c) { RET(gcalloc(ARG(0), ARG(1))); }
void H_realloc(CPU *c) { RET(grealloc(ARG(0), ARG(1))); }
void H_reallocf(CPU *c) { gptr p = ARG(0); gptr n = grealloc(p, ARG(1)); if (!n && ARG(1)) gfree(p); RET(n); }
void H_valloc(CPU *c) { RET(gmalloc(ALIGN(ARG(0), 16))); }
void H_free(CPU *c) { gfree(ARG(0)); }
void H_bzero(CPU *c) { memset(G2H(ARG(0)), 0, ARG(1)); }
void H_memset(CPU *c) { memset(G2H(ARG(0)), (int)ARG(1), ARG(2)); RET(ARG(0)); }
void H___memset_chk(CPU *c) { if (ARG(2) > ARG(3)) rt_fatal(c, "__memset_chk overflow"); memset(G2H(ARG(0)), (int)ARG(1), ARG(2)); RET(ARG(0)); }
void H_memset_pattern16(CPU *c) { uint8_t *d = G2H(ARG(0)); const uint8_t *p = G2H(ARG(1)); uint32_t n = ARG(2); for (uint32_t i = 0; i < n; i++) d[i] = p[i & 15]; }
void H_memcpy(CPU *c) { memmove(G2H(ARG(0)), G2H(ARG(1)), ARG(2)); RET(ARG(0)); }
void H___memcpy_chk(CPU *c) { if (ARG(2) > ARG(3)) rt_fatal(c, "__memcpy_chk overflow"); memmove(G2H(ARG(0)), G2H(ARG(1)), ARG(2)); RET(ARG(0)); }
void H_memmove(CPU *c) { memmove(G2H(ARG(0)), G2H(ARG(1)), ARG(2)); RET(ARG(0)); }
void H_memcmp(CPU *c) { int r = memcmp(G2H(ARG(0)), G2H(ARG(1)), ARG(2)); RET(r < 0 ? -1 : r > 0 ? 1 : 0); }
void H_memchr(CPU *c) { uint8_t *p = memchr(G2H(ARG(0)), (int)(ARG(1) & 0xff), ARG(2)); RET(p ? H2G(p) : 0); }

/* ------------------------------------------------------------------ strings */
void H_strlen(CPU *c) { RET(strlen(GSTR(ARG(0)))); }
void H_strcmp(CPU *c) { int r = strcmp(GSTR(ARG(0)), GSTR(ARG(1))); RET(r); }
void H_strncmp(CPU *c) { int r = strncmp(GSTR(ARG(0)), GSTR(ARG(1)), ARG(2)); RET(r); }
void H_strcasecmp(CPU *c) { RET(strcasecmp(GSTR(ARG(0)), GSTR(ARG(1)))); }
void H_strncasecmp(CPU *c) { RET(strncasecmp(GSTR(ARG(0)), GSTR(ARG(1)), ARG(2))); }
void H_strcpy(CPU *c) { strcpy(GSTR(ARG(0)), GSTR(ARG(1))); RET(ARG(0)); }
void H_strncpy(CPU *c) { strncpy(GSTR(ARG(0)), GSTR(ARG(1)), ARG(2)); RET(ARG(0)); }
void H___strcat_chk(CPU *c) { char *d = GSTR(ARG(0)); const char *s = GSTR(ARG(1)); if (strlen(d) + strlen(s) + 1 > ARG(2)) rt_fatal(c, "__strcat_chk overflow"); strcat(d, s); RET(ARG(0)); }
void H_strchr(CPU *c) { char *p = strchr(GSTR(ARG(0)), (int)(ARG(1) & 0xff)); RET(p ? H2G(p) : 0); }
void H_strpbrk(CPU *c) { char *p = strpbrk(GSTR(ARG(0)), GSTR(ARG(1))); RET(p ? H2G(p) : 0); }
void H_atoi(CPU *c) { RET(atoi(GSTR(ARG(0)))); }
static void set_endptr(gptr endp, gptr base, const char *hs, const char *he) { if (endp) ST32(endp, base + (uint32_t)(he - hs)); }
void H_strtod(CPU *c) { char *e; const char *s = GSTR(ARG(0)); double d = strtod(s, &e); set_endptr(ARG(1), ARG(0), s, e); RETD(d); }
void H_strtoll(CPU *c) { char *e; const char *s = GSTR(ARG(0)); long long v = strtoll(s, &e, (int)ARG(2)); set_endptr(ARG(1), ARG(0), s, e); RET64(v); }
void H_strtoull(CPU *c) { char *e; const char *s = GSTR(ARG(0)); unsigned long long v = strtoull(s, &e, (int)ARG(2)); set_endptr(ARG(1), ARG(0), s, e); RET64(v); }
void H_strtoul(CPU *c) { char *e; const char *s = GSTR(ARG(0)); unsigned long long v = strtoull(s, &e, (int)ARG(2)); if (v > 0xffffffffull) v = 0xffffffffull; set_endptr(ARG(1), ARG(0), s, e); RET((uint32_t)v); }
void H___tolower(CPU *c) { uint32_t ch = ARG(0); RET(ch < 256 ? (uint32_t)tolower((int)ch) : ch); }
void H___toupper(CPU *c) { uint32_t ch = ARG(0); RET(ch < 256 ? (uint32_t)toupper((int)ch) : ch); }

/* Darwin ctype: _DefaultRuneLocale.__runetype[] bit flags */
#define CT_A 0x100u
#define CT_C 0x200u
#define CT_D 0x400u
#define CT_G 0x800u
#define CT_L 0x1000u
#define CT_P 0x2000u
#define CT_S 0x4000u
#define CT_U 0x8000u
#define CT_X 0x10000u
#define CT_B 0x20000u
#define CT_R 0x40000u
static uint32_t rune_type(int ch) {
    uint32_t f = 0;
    if (ch < 0 || ch > 127) return 0;
    if (isalpha(ch)) f |= CT_A;
    if (iscntrl(ch)) f |= CT_C;
    if (isdigit(ch)) f |= CT_D | (uint32_t)(ch - '0');
    if (isgraph(ch)) f |= CT_G;
    if (islower(ch)) f |= CT_L;
    if (ispunct(ch)) f |= CT_P;
    if (isspace(ch)) f |= CT_S;
    if (isupper(ch)) f |= CT_U;
    if (isxdigit(ch)) { f |= CT_X; if (!isdigit(ch)) f |= (uint32_t)(10 + (tolower(ch) - 'a')); }
    if (ch == ' ' || ch == '\t') f |= CT_B;
    if (isprint(ch)) f |= CT_R;
    return f;
}
void H___maskrune(CPU *c) { int ch = (int)ARG(0); RET(rune_type(ch) & ARG(1)); }
static void init_rune_locale(void) {
    gptr rl = data_import_alloc("__DefaultRuneLocale", 4096);
    memcpy(G2H(rl), "RuneMagA", 8);
    memcpy(G2H(rl + 8), "NONE", 4);
    ST32(rl + 48, 0xfffd);
    for (int i = 0; i < 256; i++) {
        ST32(rl + 52 + 4 * i, rune_type(i));
        ST32(rl + 52 + 1024 + 4 * i, (uint32_t)(i < 128 ? tolower(i) : i));
        ST32(rl + 52 + 2048 + 4 * i, (uint32_t)(i < 128 ? toupper(i) : i));
    }
}

/* ------------------------------------------------------------------ errno, misc */
static gptr errno_addr;
void H___error(CPU *c) { RET(errno_addr); }
static void set_errno(int e) { ST32(errno_addr, (uint32_t)e); }
void H_abort(CPU *c) { rt_fatal(c, "guest called abort()"); }
void H_exit(CPU *c) { rt_fatal(c, "guest called exit(%d)", (int)ARG(0)); }
void H__exit(CPU *c) { rt_fatal(c, "guest called _exit(%d)", (int)ARG(0)); }
void H___assert_rtn(CPU *c) { rt_fatal(c, "assertion failed: %s (%s:%d in %s)", GSTR(ARG(3)), GSTR(ARG(1)), (int)ARG(2), GSTR(ARG(0))); }
void H___stack_chk_fail(CPU *c) { rt_fatal(c, "stack protector check failed"); }
void H_arc4random(CPU *c) { static uint64_t s = 0x9E3779B97F4A7C15ull; s ^= s << 13; s ^= s >> 7; s ^= s << 17; RET((uint32_t)(s >> 16)); }
void H_OSAtomicIncrement32(CPU *c) { uint32_t a = ARG(0); uint32_t v = LD32(a) + 1; ST32(a, v); RET(v); }
void H_OSAtomicDecrement32(CPU *c) { uint32_t a = ARG(0); uint32_t v = LD32(a) - 1; ST32(a, v); RET(v); }
void H_getenv(CPU *c) { RET(0); }
void H_getpid(CPU *c) { RET(501); }
void H_getuid(CPU *c) { RET(501); }
void H_NSVersionOfLinkTimeLibrary(CPU *c) { RET(0xffffffffu); }
void H_NSVersionOfRunTimeLibrary(CPU *c) { RET(0xffffffffu); }
void H__dyld_register_func_for_add_image(CPU *c) { rt_log("_dyld_register_func_for_add_image(%s): image-add callbacks not delivered (single static image)", rt_symbolize(ARG(0))); }
/* dlopen/dlsym: system frameworks are part of the HLE runtime, so a framework path yields a pseudo-handle and
 * dlsym resolves against the same data-import and function tables the static binds use. */
void H_dlopen(CPU *c) {
    const char *p = ARG(0) ? GSTR(ARG(0)) : "";
    bool sys = !ARG(0) || !strncmp(p, "/System/Library/", 16) || !strncmp(p, "/usr/lib/", 9);
    if (rt_verbose || !sys) rt_log("dlopen(%s) -> %s", p, sys ? "runtime" : "not found");
    RET(sys ? 0xD1000001u : 0);
}
extern const struct ImportEntry import_funcs[];
extern const unsigned import_nfuncs;
void H_dlsym(CPU *c) {
    char nm[256]; snprintf(nm, sizeof nm, "_%s", GSTR(ARG(1)));
    gptr a = data_import_lookup(nm);
    if (!a && !strncmp(nm, "_kSec", 5)) { a = data_import_alloc(nm, 4); ST32(a, nsstr_static(nm + 1)); }   /* Security keys: value = name */
    if (!a) for (unsigned i = 0; i < import_nfuncs; i++) if (!strcmp(import_funcs[i].name, nm)) { a = thunk_for(import_funcs[i].fn, import_funcs[i].name); break; }
    if (!a) rt_log("dlsym(%s): not provided", nm + 1);
    RET(a);
}
void H_dlerror(CPU *c) { RET(0); }
void H_dlclose(CPU *c) { RET(0); }
void H_usleep(CPU *c) { sched_sleep_current(c, ARG(0) / 1000.0); RET(0); }

/* ------------------------------------------------------------------ compiler-rt (armv7 has no HW divide) */
void H___divsi3(CPU *c) { int32_t a = (int32_t)ARG(0), b = (int32_t)ARG(1); RET(b == 0 ? 0 : (a == INT32_MIN && b == -1) ? (uint32_t)a : (uint32_t)(a / b)); }
void H___udivsi3(CPU *c) { uint32_t a = ARG(0), b = ARG(1); RET(b ? a / b : 0); }
void H___modsi3(CPU *c) { int32_t a = (int32_t)ARG(0), b = (int32_t)ARG(1); RET(b == 0 ? (uint32_t)a : (a == INT32_MIN && b == -1) ? 0 : (uint32_t)(a % b)); }
void H___umodsi3(CPU *c) { uint32_t a = ARG(0), b = ARG(1); RET(b ? a % b : a); }
static int64_t a64(CPU *c, int i) { return (int64_t)((uint64_t)ARG(i) | ((uint64_t)ARG(i + 1) << 32)); }
void H___divdi3(CPU *c) { int64_t a = a64(c, 0), b = a64(c, 2); RET64(b == 0 ? 0 : (a == INT64_MIN && b == -1) ? a : a / b); }
void H___udivdi3(CPU *c) { uint64_t a = (uint64_t)a64(c, 0), b = (uint64_t)a64(c, 2); RET64(b ? a / b : 0); }
void H___umoddi3(CPU *c) { uint64_t a = (uint64_t)a64(c, 0), b = (uint64_t)a64(c, 2); RET64(b ? a % b : a); }
static int64_t sat_i64(double x) { if (x != x) return 0; if (x >= 9223372036854775807.0) return INT64_MAX; if (x <= -9223372036854775808.0) return INT64_MIN; return (int64_t)x; }
static uint64_t sat_u64(double x) { if (x != x || x <= 0) return 0; if (x >= 18446744073709551615.0) return UINT64_MAX; return (uint64_t)x; }
void H___fixdfdi(CPU *c) { RET64(sat_i64(ARGD(0))); }
void H___fixsfdi(CPU *c) { RET64(sat_i64(ARGF(0))); }
void H___fixunsdfdi(CPU *c) { RET64(sat_u64(ARGD(0))); }
void H___fixunssfdi(CPU *c) { RET64(sat_u64(ARGF(0))); }
void H___floatdidf(CPU *c) { RETD((double)a64(c, 0)); }
void H___floatundidf(CPU *c) { RETD((double)(uint64_t)a64(c, 0)); }
void H___floatundisf(CPU *c) { RETF((float)(uint64_t)a64(c, 0)); }

/* ------------------------------------------------------------------ math (softfp: floats in r0, doubles in r0:r1) */
void H_acosf(CPU *c) { RETF(acosf(ARGF(0))); }
void H_asinf(CPU *c) { RETF(asinf(ARGF(0))); }
void H_atanf(CPU *c) { RETF(atanf(ARGF(0))); }
void H_atan2f(CPU *c) { RETF(atan2f(ARGF(0), ARGF(1))); }
void H_ceilf(CPU *c) { RETF(ceilf(ARGF(0))); }
void H_cosf(CPU *c) { RETF(cosf(ARGF(0))); }
void H_sinf(CPU *c) { RETF(sinf(ARGF(0))); }
void H_tanf(CPU *c) { RETF(tanf(ARGF(0))); }
void H_expf(CPU *c) { RETF(expf(ARGF(0))); }
void H_floorf(CPU *c) { RETF(floorf(ARGF(0))); }
void H_roundf(CPU *c) { RETF(roundf(ARGF(0))); }
void H_floor(CPU *c) { RETD(floor(ARGD(0))); }
void H_round(CPU *c) { RETD(round(ARGD(0))); }
void H_lround(CPU *c) { double d = round(ARGD(0)); RET((uint32_t)(int32_t)CVT_S32(d)); }
void H_modf(CPU *c) { double ip; double f = modf(ARGD(0), &ip); if (ARG(2)) ST64(ARG(2), D2U(ip)); RETD(f); }
void H___sincosf_stret(CPU *c) { float x = U2F(ARG(1)); ST32(ARG(0), F2U(sinf(x))); ST32(ARG(0) + 4, F2U(cosf(x))); }
void H___sincos_stret(CPU *c) { double x = U2D((uint64_t)ARG(1) | ((uint64_t)ARG(2) << 32)); ST64(ARG(0), D2U(sin(x))); ST64(ARG(0) + 8, D2U(cos(x))); }

/* ------------------------------------------------------------------ time */
void H_time(CPU *c) { uint32_t t = (uint32_t)(host_wall_ms() / 1000.0); if (ARG(0)) ST32(ARG(0), t); RET(t); }
void H_gettimeofday(CPU *c) {
    double ms = host_wall_ms();
    if (ARG(0)) { ST32(ARG(0), (uint32_t)(ms / 1000.0)); ST32(ARG(0) + 4, (uint32_t)((uint64_t)(ms * 1000.0) % 1000000u)); }
    RET(0);
}
void H_mach_absolute_time(CPU *c) { RET64((uint64_t)(host_now_ms() * 1e6)); }
void H_mach_timebase_info(CPU *c) { ST32(ARG(0), 1); ST32(ARG(0) + 4, 1); RET(0); }
/* struct tm (Darwin, 32-bit): 9 ints + long tm_gmtoff + char *tm_zone = 44 bytes */
static gptr tm_static;
static void store_tm(gptr t, const struct tm *tm, long gmtoff, const char *zone) {
    int v[9] = {tm->tm_sec, tm->tm_min, tm->tm_hour, tm->tm_mday, tm->tm_mon, tm->tm_year, tm->tm_wday, tm->tm_yday, tm->tm_isdst};
    for (int i = 0; i < 9; i++) ST32(t + 4 * i, (uint32_t)v[i]);
    ST32(t + 36, (uint32_t)gmtoff);
    ST32(t + 40, gstatic_str(zone));
}
double host_tz_offset_min(double unix_ms);   /* minutes east of UTC */
void H_localtime(CPU *c) {
    time_t t = (time_t)(int32_t)LD32(ARG(0));
    double off = host_tz_offset_min((double)t * 1000.0);
    time_t lt = t + (time_t)(off * 60);
    struct tm tm; gmtime_r(&lt, &tm);
    if (!tm_static) tm_static = gstatic_alloc(44);
    store_tm(tm_static, &tm, (long)(off * 60), "LOCAL");
    RET(tm_static);
}
void H_gmtime_r(CPU *c) { time_t t = (time_t)(int32_t)LD32(ARG(0)); struct tm tm; gmtime_r(&t, &tm); store_tm(ARG(1), &tm, 0, "UTC"); RET(ARG(1)); }

/* ------------------------------------------------------------------ stdio (guest FILE has Darwin __sFILE layout: _p@0 _r@4 _w@8 _flags@12 _file@14) */
typedef struct HFile { char path[512]; gptr buf; uint32_t size, cap, pos; bool write, eof, err, append; } HFile;
#define MAXF 64
static HFile *hfiles[MAXF];
static gptr gfiles[MAXF];
static int file_slot(gptr f) { for (int i = 0; i < MAXF; i++) if (gfiles[i] == f && hfiles[i]) return i; return -1; }
const char *vfs_resolve(const char *guest_path, char *out, size_t outlen);   /* vfs.c */
static void file_sync_ptr(int k) { HFile *h = hfiles[k]; gptr f = gfiles[k]; if (h->write) { ST32(f + 0, 0); ST32(f + 4, 0); return; } ST32(f + 0, h->buf + h->pos); ST32(f + 4, h->size - h->pos); }
static void file_pull_ptr(int k) { HFile *h = hfiles[k]; gptr f = gfiles[k]; if (h->write) return; uint32_t p = LD32(f); if (p >= h->buf && p <= h->buf + h->size) h->pos = p - h->buf; }

static gptr file_open(const char *path, const char *mode) {
    char hp[1024];
    vfs_resolve(path, hp, sizeof hp);
    int k = -1;
    for (int i = 3; i < MAXF; i++) if (!hfiles[i]) { k = i; break; }
    if (k < 0) { set_errno(24); return 0; }
    HFile *h = calloc(1, sizeof *h);
    snprintf(h->path, sizeof h->path, "%s", hp);
    if (mode[0] == 'r' && !strchr(mode, '+')) {
        int sz = host_file_size(hp);
        if (sz < 0) { free(h); set_errno(2); return 0; }
        h->size = (uint32_t)sz; h->buf = gmalloc(h->size + 1);
        if (sz && host_file_read(hp, G2H(h->buf), 0, h->size) != sz) { gfree(h->buf); free(h); set_errno(5); return 0; }
    } else if (mode[0] == 'w' || mode[0] == 'a' || strchr(mode, '+')) {
        h->write = true; h->append = mode[0] == 'a';
        h->cap = 4096; h->buf = gmalloc(h->cap);
        if (mode[0] == 'a' || mode[0] == 'r') {
            int sz = host_file_size(hp);
            if (sz > 0) { h->cap = (uint32_t)sz + 4096; gfree(h->buf); h->buf = gmalloc(h->cap); host_file_read(hp, G2H(h->buf), 0, (uint32_t)sz); h->size = (uint32_t)sz; }
            else if (mode[0] == 'r' && sz < 0) { gfree(h->buf); free(h); set_errno(2); return 0; }
        }
        h->pos = h->append ? h->size : 0;
        if (mode[0] == 'w') host_file_write(hp, "", 0, 0);
    }
    hfiles[k] = h;
    gptr f = gcalloc(1, 88);
    ST16(f + 14, k);
    ST16(f + 12, h->write ? 0x8 : 0x4);
    gfiles[k] = f;
    file_sync_ptr(k);
    return f;
}
static void file_flush(int k) { HFile *h = hfiles[k]; if (h->write) host_file_write(h->path, G2H(h->buf), h->size, 0); }
void H_fopen(CPU *c) { gptr f = file_open(GSTR(ARG(0)), GSTR(ARG(1))); if (rt_verbose) rt_log("fopen(%s, %s) = %08x", GSTR(ARG(0)), GSTR(ARG(1)), f); RET(f); }
void H_fclose(CPU *c) {
    int k = file_slot(ARG(0)); if (k < 0) { RET(-1); return; }
    file_flush(k);
    gfree(hfiles[k]->buf); free(hfiles[k]); hfiles[k] = NULL; gfree(gfiles[k]); gfiles[k] = 0;
    RET(0);
}
void H_fread(CPU *c) {
    gptr dst = ARG(0); uint32_t sz = ARG(1), n = ARG(2); int k = file_slot(ARG(3));
    if (k < 0 || !sz) { RET(0); return; }
    file_pull_ptr(k);
    HFile *h = hfiles[k];
    uint32_t avail = h->size - h->pos, want = sz * n;
    if (want > avail) { want = avail - avail % sz; h->eof = true; }
    memcpy(G2H(dst), G2H(h->buf + h->pos), want);
    h->pos += want;
    file_sync_ptr(k);
    RET(want / sz);
}
static void con_write(const char *s, size_t n);
void H_fwrite(CPU *c) {
    gptr src = ARG(0); uint32_t sz = ARG(1), n = ARG(2); gptr f = ARG(3);
    uint32_t len = sz * n;
    int k = file_slot(f);
    if (k < 0) {
        if (f && LD16(f + 14) <= 2) { con_write((const char *)G2H(src), len); RET(n); return; }
        RET(0); return;
    }
    HFile *h = hfiles[k];
    if (!h->write) { RET(0); return; }
    if (h->pos + len > h->cap) { uint32_t nc = (h->pos + len) * 2; h->buf = grealloc(h->buf, nc); h->cap = nc; }
    memcpy(G2H(h->buf + h->pos), G2H(src), len);
    h->pos += len; if (h->pos > h->size) h->size = h->pos;
    RET(n);
}
void H_fflush(CPU *c) { int k = file_slot(ARG(0)); if (k >= 0) file_flush(k); RET(0); }
void H_fseek(CPU *c) {
    int k = file_slot(ARG(0)); if (k < 0) { RET(-1); return; }
    file_pull_ptr(k);
    HFile *h = hfiles[k]; int32_t off = (int32_t)ARG(1); int wh = (int)ARG(2);
    int64_t np = wh == 0 ? off : wh == 1 ? (int64_t)h->pos + off : (int64_t)h->size + off;
    if (np < 0) { set_errno(22); RET(-1); return; }
    if (!h->write && np > h->size) np = h->size;
    h->pos = (uint32_t)np; h->eof = false;
    file_sync_ptr(k);
    RET(0);
}
void H_ftell(CPU *c) { int k = file_slot(ARG(0)); if (k < 0) { RET(-1); return; } file_pull_ptr(k); RET(hfiles[k]->pos); }
void H_feof(CPU *c) { int k = file_slot(ARG(0)); if (k < 0) { RET(0); return; } file_pull_ptr(k); RET(hfiles[k]->eof || hfiles[k]->pos >= hfiles[k]->size); }
void H_ferror(CPU *c) { int k = file_slot(ARG(0)); RET(k >= 0 && hfiles[k]->err); }
void H_fileno(CPU *c) { gptr f = ARG(0); RET(f ? LD16(f + 14) : (uint32_t)-1); }
void H_flockfile(CPU *c) { UNUSED(c); }
void H_funlockfile(CPU *c) { UNUSED(c); }
void H___srget(CPU *c) {
    int k = file_slot(ARG(0)); if (k < 0) { RET(-1); return; }
    HFile *h = hfiles[k];
    /* getc macro decremented _r below zero; position is at _p */
    file_pull_ptr(k);
    if (h->pos >= h->size) { h->eof = true; ST32(gfiles[k] + 4, 0); RET(0xffffffffu); return; }
    uint8_t ch = LD8(h->buf + h->pos);
    h->pos++;
    file_sync_ptr(k);
    RET(ch);
}
void H_fgets(CPU *c) {
    gptr dst = ARG(0); int n = (int)ARG(1); int k = file_slot(ARG(2));
    if (k < 0 || n <= 0) { RET(0); return; }
    file_pull_ptr(k);
    HFile *h = hfiles[k];
    if (h->pos >= h->size) { h->eof = true; RET(0); return; }
    int i = 0;
    while (i < n - 1 && h->pos < h->size) { uint8_t ch = LD8(h->buf + h->pos++); ST8(dst + i++, ch); if (ch == '\n') break; }
    ST8(dst + i, 0);
    file_sync_ptr(k);
    RET(dst);
}

/* stdout/stderr are line-buffered into the host console */
static char con_buf[1024]; static size_t con_n;
static void con_write(const char *s, size_t n) {
    for (size_t i = 0; i < n; i++) {
        if (s[i] == '\n' || con_n == sizeof con_buf - 1) { con_buf[con_n] = 0; host_console(con_buf); con_n = 0; if (s[i] == '\n') continue; }
        con_buf[con_n++] = s[i];
    }
}
static void out_console(const char *s) { con_write(s, strlen(s)); }
void H_printf(CPU *c) { ArgReader a = {c, 1, 0}; char *s = gformat(c, GSTR(ARG(0)), &a); out_console(s); RET(strlen(s)); free(s); }
void H_vfprintf(CPU *c) { ArgReader a = {c, 0, ARG(2)}; char *s = gformat(c, GSTR(ARG(1)), &a); out_console(s); RET(strlen(s)); free(s); }
void H_puts(CPU *c) { out_console(GSTR(ARG(0))); con_write("\n", 1); RET(1); }
void H_putchar(CPU *c) { char b[2] = {(char)ARG(0), 0}; out_console(b); RET(ARG(0)); }
void H_perror(CPU *c) { rt_log("perror: %s (errno %u)", ARG(0) ? GSTR(ARG(0)) : "", LD32(errno_addr)); }
static void put_bounded(gptr dst, uint32_t n, const char *s) {
    if (!n) return;
    size_t l = strlen(s); if (l > n - 1) l = n - 1;
    memcpy(G2H(dst), s, l); ST8(dst + l, 0);
}
void H_sprintf(CPU *c) { ArgReader a = {c, 2, 0}; char *s = gformat(c, GSTR(ARG(1)), &a); strcpy(GSTR(ARG(0)), s); RET(strlen(s)); free(s); }
void H_snprintf(CPU *c) { ArgReader a = {c, 3, 0}; char *s = gformat(c, GSTR(ARG(2)), &a); put_bounded(ARG(0), ARG(1), s); RET(strlen(s)); free(s); }
void H___vsnprintf_chk(CPU *c) { ArgReader a = {c, 0, ARG(5)}; char *s = gformat(c, GSTR(ARG(4)), &a); put_bounded(ARG(0), ARG(1), s); RET(strlen(s)); free(s); }
void H_asprintf(CPU *c) { ArgReader a = {c, 2, 0}; char *s = gformat(c, GSTR(ARG(1)), &a); ST32(ARG(0), gstrdup(s)); RET(strlen(s)); free(s); }

/* qsort: BSD-compatible would matter only for unstable ties; only OpenSSL calls it. Insertion/merge with guest comparator. */
void H_qsort(CPU *c) {
    gptr base = ARG(0); uint32_t n = ARG(1), sz = ARG(2); gptr cmp = ARG(3);
    gptr tmp = gmalloc(sz);
    for (uint32_t i = 1; i < n; i++) {
        memcpy(G2H(tmp), G2H(base + i * sz), sz);
        uint32_t j = i;
        while (j > 0 && (int32_t)guest_call2(c, cmp, base + (j - 1) * sz, tmp) > 0) { memcpy(G2H(base + j * sz), G2H(base + (j - 1) * sz), sz); j--; }
        memcpy(G2H(base + j * sz), G2H(tmp), sz);
    }
    gfree(tmp);
}

/* ------------------------------------------------------------------ posix bits used by SDK code */
void H_uname(CPU *c) {
    gptr u = ARG(0);   /* struct utsname: 5 x char[256] */
    const char *f[5] = {"Darwin", "iPad", "14.0.0", "Darwin Kernel Version 14.0.0", "iPad3,4"};
    for (int i = 0; i < 5; i++) put_bounded(u + 256 * i, 256, f[i]);
    RET(0);
}
void H_sysctlbyname(CPU *c) {
    const char *name = GSTR(ARG(0));
    if (!strcmp(name, "hw.machine")) {
        const char *v = "iPad3,4"; uint32_t need = (uint32_t)strlen(v) + 1;
        if (ARG(2)) ST32(ARG(2), need);
        if (ARG(1)) memcpy(G2H(ARG(1)), v, need);
        RET(0); return;
    }
    rt_log("sysctlbyname(%s): not available", name);
    set_errno(2); RET(-1);
}
void H_sysctl(CPU *c) { rt_log("sysctl: not available"); set_errno(2); RET(-1); }
void H_open(CPU *c) { rt_log("open(%s): raw file descriptors unsupported", GSTR(ARG(0))); set_errno(2); RET(-1); }
void H_close(CPU *c) { RET(-1); }
void H_read(CPU *c) { set_errno(9); RET(-1); }
void H_write(CPU *c) { if (ARG(0) == 1 || ARG(0) == 2) { con_write((const char *)G2H(ARG(1)), ARG(2)); RET(ARG(2)); return; } set_errno(9); RET(-1); }
void H_socket(CPU *c) { rt_log("socket(): networking is not available in the browser port"); set_errno(47); RET(-1); }
void H_connect(CPU *c) { set_errno(51); RET(-1); }
void H_select(CPU *c) { set_errno(9); RET(-1); }
void H_getifaddrs(CPU *c) { ST32(ARG(0), 0); RET(0); }
void H_freeifaddrs(CPU *c) { UNUSED(c); }
void H_inet_ntoa(CPU *c) { static gptr b; if (!b) b = gstatic_alloc(16); put_bounded(b, 16, "0.0.0.0"); RET(b); }

void libc_init(void) {
    errno_addr = data_import_alloc("_errno_storage", 4);
    init_rune_locale();
    gptr guard = data_import_alloc("___stack_chk_guard", 4); ST32(guard, 0x2a5f3c91u);
    gptr se = data_import_alloc("___stderrp", 4);
    gptr ferr = gstatic_alloc(88); ST16(ferr + 14, 2); ST32(se, ferr);
    gptr so = data_import_alloc("___stdoutp", 4);
    gptr fout = gstatic_alloc(88); ST16(fout + 14, 1); ST32(so, fout);
}

/* Darwin struct stat (64-bit ino, armv7: 4-byte aligned 64-bit members): st_mode@4 st_size@60 st_blksize@76, size 108 */
int host_is_dir(const char *p);
static void fill_stat(gptr st, bool dir, uint32_t size) {
    memset(G2H(st), 0, 108);
    ST16(st + 4, dir ? 0040755 : 0100644); ST16(st + 6, 1);
    ST64(st + 60, size); ST64(st + 68, (size + 511) / 512); ST32(st + 76, 4096);
}
void H_fstat(CPU *c) {
    int fd = (int)ARG(0);
    if (fd >= 0 && fd < MAXF && hfiles[fd]) { HFile *h = hfiles[fd]; fill_stat(ARG(1), false, h->write ? h->size : h->size); RET(0); return; }
    if (fd >= 0 && fd <= 2) { fill_stat(ARG(1), false, 0); ST16(ARG(1) + 4, 0020666); RET(0); return; }
    set_errno(9); RET(-1);
}
void H_lstat(CPU *c) {
    char hp[1024]; vfs_resolve(GSTR(ARG(0)), hp, sizeof hp);
    int n = host_file_size(hp);
    if (n >= 0) { fill_stat(ARG(1), false, (uint32_t)n); RET(0); return; }
    if (host_is_dir(hp)) { fill_stat(ARG(1), true, 0); RET(0); return; }
    set_errno(2); RET(-1);
}

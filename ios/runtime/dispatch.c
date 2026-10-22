/* dispatch.c — indirect calls, host thunks, guest calls from host code, traps, diagnostics. */
#include "rt.h"
#include "image_manifest.h"

extern const struct FuncEntry recomp_funcs[];
extern const unsigned recomp_nfuncs;
extern const struct ImportEntry import_funcs[];
extern const unsigned import_nfuncs;
extern const struct StubEntry stub_funcs[];
extern const unsigned stub_nfuncs;
static GuestFn stub_lookup(uint32_t a) {
    unsigned lo = 0, hi = stub_nfuncs;
    while (lo < hi) { unsigned m = (lo + hi) / 2; if (stub_funcs[m].addr < a) lo = m + 1; else hi = m; }
    return lo < stub_nfuncs && stub_funcs[lo].addr == a ? stub_funcs[lo].fn : NULL;
}

uint32_t image_text_lo, image_text_hi;
static GuestFn *dtab;   /* direct-mapped: (addr - text_lo) >> 1 */
int rt_verbose = 0;

void rt_log(const char *fmt, ...) {
    char buf[2048];
    va_list ap; va_start(ap, fmt); vsnprintf(buf, sizeof buf, fmt, ap); va_end(ap);
    host_console(buf);
}

static struct { GuestFn fn; const char *name; } thunks[THUNK_MAX];
static unsigned nthunks;
uint32_t thunk_for(GuestFn fn, const char *name) {
    for (unsigned i = 0; i < nthunks; i++) if (thunks[i].fn == fn) return THUNK_BASE + 4 * i + 1;
    if (nthunks >= THUNK_MAX) { rt_log("thunk table full"); abort(); }
    thunks[nthunks].fn = fn; thunks[nthunks].name = name;
    return THUNK_BASE + 4 * nthunks++ + 1;
}
GuestFn thunk_lookup(uint32_t a) {
    if (a < THUNK_BASE) return NULL;
    uint32_t i = (a - THUNK_BASE) >> 2;
    return i < nthunks ? thunks[i].fn : NULL;
}
const char *thunk_name(uint32_t a) {
    if (a < THUNK_BASE) return NULL;
    uint32_t i = (a - THUNK_BASE) >> 2;
    return i < nthunks ? thunks[i].name : NULL;
}

void dispatch_init(void) {
    image_text_lo = img_sec_text;
    image_text_hi = img_sec_text + img_sec_text_size;
    dtab = calloc((image_text_hi - image_text_lo) / 2 + 1, sizeof(GuestFn));
    for (unsigned i = 0; i < recomp_nfuncs; i++) {
        uint32_t a = recomp_funcs[i].addr;
        if (a >= image_text_lo && a < image_text_hi) dtab[(a - image_text_lo) >> 1] = recomp_funcs[i].fn;
    }
    void fn_trace_init(void); fn_trace_init();
}

static const struct FuncEntry *func_containing(uint32_t a) {
    a &= ~1u;
    unsigned lo = 0, hi = recomp_nfuncs;
    while (lo < hi) { unsigned m = (lo + hi) / 2; if (recomp_funcs[m].addr <= a) lo = m + 1; else hi = m; }
    if (lo == 0) return NULL;
    const struct FuncEntry *f = &recomp_funcs[lo - 1];
    return (a < f->end) ? f : NULL;
}

const char *rt_symbolize(uint32_t addr) {
    static char buf[8][300]; static int k;
    char *b = buf[k++ & 7];
    const struct FuncEntry *f = func_containing(addr);
    if (f) snprintf(b, 300, "%s+0x%x", f->name, (addr & ~1u) - f->addr);
    else if (thunk_name(addr)) snprintf(b, 300, "<host %s>", thunk_name(addr));
    else snprintf(b, 300, "0x%08x", addr);
    return b;
}

void rt_backtrace(CPU *c) {
    uint32_t fp = c->r[7];
    rt_log("  lr: %s", rt_symbolize(c->r[14]));
    for (int i = 0; i < 40 && fp && fp >= 0x1000; i++) {
        uint32_t lr = LD32(fp + 4);
        rt_log("  #%d %s", i, rt_symbolize(lr));
        uint32_t nfp = LD32(fp);
        if (nfp <= fp) break;
        fp = nfp;
    }
}

void host_fatal_hook(const char *msg);
void rt_fatal(CPU *c, const char *fmt, ...) {
    char buf[2048];
    va_list ap; va_start(ap, fmt); vsnprintf(buf, sizeof buf, fmt, ap); va_end(ap);
    rt_log("FATAL: %s", buf);
    if (c) rt_backtrace(c);
    host_fatal_hook(buf);
    abort();
}

void call_indirect(CPU *c, uint32_t t) {
    uint32_t a = t & ~1u;
    if (a >= image_text_lo && a < image_text_hi) {
        GuestFn f = dtab[(a - image_text_lo) >> 1];
        if (f) { f(c); return; }
        rt_fatal(c, "indirect call into middle of function: %s", rt_symbolize(a));
    }
    GuestFn h = thunk_lookup(t);
    if (h) { h(c); return; }
    h = stub_lookup(a);   /* ARM-mode __picsymbolstub4 entries reached through shims/function pointers */
    if (h) { h(c); return; }
    rt_fatal(c, "indirect call to invalid address 0x%08x", t);
}

void hle_unimplemented(CPU *c, const char *name) { rt_fatal(c, "unimplemented import %s (called from %s)", name, rt_symbolize(c->r[14])); }
void trap_unimpl(CPU *c, uint32_t a, const char *w) { rt_fatal(c, "untranslated instruction at %s: %s", rt_symbolize(a), w); }
void trap_insn(CPU *c, uint32_t a) { rt_fatal(c, "trap instruction at %s", rt_symbolize(a)); }
void trap_jt(CPU *c, uint32_t a, uint32_t i) { rt_fatal(c, "jump table index %u out of range at %s", i, rt_symbolize(a)); }
void trap_falloff(CPU *c, uint32_t a) { rt_fatal(c, "execution fell into data at %s", rt_symbolize(a)); }
void trap_badresume(CPU *c, uint32_t pc) { rt_fatal(c, "bad SjLj resume address %08x", pc); }
void trap_sp(CPU *c, uint32_t e, uint32_t n) { rt_fatal(c, "stack imbalance at return: entry %08x now %08x", e, n); }

/* ------------------------------------------------------------------ host -> guest calls */
#define GUEST_RET_SENTINEL 0xFEFEFEFFu
uint64_t guest_call64(CPU *c, uint32_t addr, int nargs, const uint32_t *args) {
    uint32_t save[16]; memcpy(save, c->r, sizeof save);
    uint32_t sp = c->r[13];
    int nstack = nargs > 4 ? nargs - 4 : 0;
    sp -= 16;  /* red zone below caller's outgoing area */
    sp = (sp - 4 * nstack) & ~7u;
    for (int i = 0; i < nstack; i++) ST32(sp + 4 * i, args[4 + i]);
    for (int i = 0; i < 4; i++) c->r[i] = i < nargs ? args[i] : 0;
    c->r[13] = sp;
    c->r[14] = GUEST_RET_SENTINEL;
    c->depth++;
    if (c->depth > 2000) rt_fatal(c, "guest call depth exceeded");
    call_indirect(c, addr);
    c->depth--;
    uint64_t r = (uint64_t)c->r[0] | ((uint64_t)c->r[1] << 32);
    memcpy(c->r, save, sizeof save);
    return r;
}
uint32_t guest_call(CPU *c, uint32_t addr, int nargs, const uint32_t *args) { return (uint32_t)guest_call64(c, addr, nargs, args); }
uint32_t guest_call0(CPU *c, uint32_t a) { return guest_call(c, a, 0, NULL); }
uint32_t guest_call1(CPU *c, uint32_t a, uint32_t x) { uint32_t v[1] = {x}; return guest_call(c, a, 1, v); }
uint32_t guest_call2(CPU *c, uint32_t a, uint32_t x, uint32_t y) { uint32_t v[2] = {x, y}; return guest_call(c, a, 2, v); }
uint32_t guest_call3(CPU *c, uint32_t a, uint32_t x, uint32_t y, uint32_t z) { uint32_t v[3] = {x, y, z}; return guest_call(c, a, 3, v); }
uint32_t guest_call4(CPU *c, uint32_t a, uint32_t x, uint32_t y, uint32_t z, uint32_t w) { uint32_t v[4] = {x, y, z, w}; return guest_call(c, a, 4, v); }

gptr image_symbol(const char *name) {
    for (unsigned i = 0; i < img_nsyms; i++) if (!strcmp(img_syms[i].name, name)) return img_syms[i].addr;
    return 0;
}

/* ------------------------------------------------------------------ cooperative-thread variants */
extern const struct AsyncEntry async_funcs[];
extern const unsigned async_nfuncs;
extern const GuestFn async_imports[];
extern const unsigned async_nimports;
GuestFn async_lookup(uint32_t a) {
    a &= ~1u;
    unsigned lo = 0, hi = async_nfuncs;
    while (lo < hi) { unsigned m = (lo + hi) / 2; if (async_funcs[m].addr < a) lo = m + 1; else hi = m; }
    return lo < async_nfuncs && async_funcs[lo].addr == a ? async_funcs[lo].fn : NULL;
}
/* Indirect call from a resumable (A_*) frame: stay resumable when the target has a resumable variant or is a
 * suspending import; otherwise run the ordinary translation with suspension disabled. */
void call_indirect_async(CPU *c, uint32_t t) {
    uint32_t a = t & ~1u;
    GuestFn f = NULL;
    if (a >= image_text_lo && a < image_text_hi) f = async_lookup(a);
    else {
        GuestFn h = thunk_lookup(t);
        if (!h) h = stub_lookup(a);
        for (unsigned i = 0; h && i < async_nimports; i++) if (async_imports[i] == h) { f = h; break; }
    }
    if (f) { f(c); return; }
    c->async_ok = 0;
    call_indirect(c, t);
    c->async_ok = 1;
}

/* ------------------------------------------------------------------ native debugging: function entry trace / call profile
 * SIMS3_TRACE=name,~substring,...  logs entry (r0-r3, caller) of matching functions;
 * SIMS3_PROFILE=1 counts calls per function and prints the busiest at exit. */
#ifdef FN_TRACE
volatile uint32_t fn_trace_on;
static uint8_t *trace_sel; static uint32_t *call_count; static int profile_on;
static void profile_dump(void) {
    if (!call_count) return;
    unsigned idx[40] = {0}; uint32_t n = (image_text_hi - image_text_lo) >> 1;
    for (int k = 0; k < 40; k++) { uint32_t best = 0; unsigned bi = 0; for (uint32_t i = 0; i < n; i++) { bool used = false; for (int j = 0; j < k; j++) if (idx[j] == i) used = true; if (!used && call_count[i] > best) { best = call_count[i]; bi = i; } } idx[k] = bi; if (!best) break; fprintf(stderr, "profile: %10u %s\n", best, rt_symbolize(image_text_lo + 2 * bi)); }
}
void fn_trace(CPU *c, uint32_t a) {
    uint32_t i = (a - image_text_lo) >> 1;
    if (profile_on) call_count[i]++;
    if (trace_sel && trace_sel[i]) rt_log("trace: %s(%08x, %08x, %08x, %08x) from %s [thread %u]", rt_symbolize(a), c->r[0], c->r[1], c->r[2], c->r[3], rt_symbolize(c->r[14]), c->thread_id);
}
void fn_trace_init(void) {
    const char *t = getenv("SIMS3_TRACE");
    profile_on = getenv("SIMS3_PROFILE") != NULL;
    uint32_t n = (image_text_hi - image_text_lo) >> 1;
    if (profile_on) { call_count = calloc(n, 4); atexit(profile_dump); }
    if (t) {
        trace_sel = calloc(n, 1);
        char *s = strdup(t), *save = NULL;
        for (char *tok = strtok_r(s, ",", &save); tok; tok = strtok_r(NULL, ",", &save)) {
            bool sub = tok[0] == '~'; const char *q = sub ? tok + 1 : tok; int hits = 0;
            for (unsigned k = 0; k < recomp_nfuncs; k++) {
                const char *nm = recomp_funcs[k].name;
                if (sub ? strstr(nm, q) != NULL : !strcmp(nm, q)) { trace_sel[(recomp_funcs[k].addr - image_text_lo) >> 1] = 1; hits++; }
            }
            rt_log("trace: %s matches %d functions", tok, hits);
        }
        free(s);
    }
    fn_trace_on = trace_sel || call_count;
}
#else
void fn_trace_init(void) {}
#endif

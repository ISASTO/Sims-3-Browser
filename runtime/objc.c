/* objc.c — Objective-C 2 runtime (32-bit ABI) for guest classes and host-implemented classes.
 * Class/metaclass objects live in guest memory with the real objc_class layout
 * {isa, superclass, cache, vtable, data}; runtime bookkeeping is host-side (ClassInfo).
 * Selectors are uniqued guest C-string addresses (image __objc_methname strings are canonical). */
#include "rt.h"
#include "image_manifest.h"

typedef struct MEnt { gptr sel, imp; } MEnt;
typedef struct ClassInfo {
    gptr addr;           /* guest class_t */
    char *name;
    struct ClassInfo *super, *meta, *nonmeta;
    bool is_meta, is_host, initialized, initializing;
    bool lenient;        /* SDK-only host class: unknown messages return nil (logged once) */
    uint32_t instance_size;
    MEnt *m; uint32_t mcap, mcount;   /* own methods, open addressing by sel */
    gptr ro;             /* guest class_ro_t (image classes) */
    gptr protocols;      /* guest protocol_list_t* (image classes) */
    gptr *xprotos; uint32_t nxprotos;   /* protocol lists adopted by categories */
} ClassInfo;

/* ------------------------------------------------------------------ hash maps */
typedef struct { uint32_t k; void *v; } HEnt;
typedef struct { HEnt *e; uint32_t cap, n; } HMap;
static uint32_t mixh(uint32_t x) { x ^= x >> 16; x *= 0x7feb352d; x ^= x >> 15; x *= 0x846ca68b; x ^= x >> 16; return x; }
static void *hm_get(HMap *m, uint32_t k) {
    if (!m->cap) return NULL;
    for (uint32_t i = mixh(k) & (m->cap - 1);; i = (i + 1) & (m->cap - 1)) {
        if (m->e[i].k == k) return m->e[i].v;
        if (!m->e[i].k) return NULL;
    }
}
static void hm_put(HMap *m, uint32_t k, void *v) {
    if ((m->n + 1) * 2 > m->cap) {
        HMap n = {calloc(m->cap ? m->cap * 2 : 256, sizeof(HEnt)), m->cap ? m->cap * 2 : 256, 0};
        for (uint32_t i = 0; i < m->cap; i++) if (m->e[i].k) hm_put(&n, m->e[i].k, m->e[i].v);
        free(m->e); *m = n;
    }
    for (uint32_t i = mixh(k) & (m->cap - 1);; i = (i + 1) & (m->cap - 1)) {
        if (m->e[i].k == k) { m->e[i].v = v; return; }
        if (!m->e[i].k) { m->e[i].k = k; m->e[i].v = v; m->n++; return; }
    }
}

static HMap classes;      /* guest class addr -> ClassInfo* */
static HMap class_names;  /* name hash -> chain (we store by string in a separate table) */
static ClassInfo **class_list; static uint32_t nclass_list, cap_class_list;

static ClassInfo *ci_of(gptr cls) { return (ClassInfo *)hm_get(&classes, cls); }

/* ------------------------------------------------------------------ selectors */
typedef struct { char *name; gptr sel; } SelEnt;
static SelEnt *sels; static uint32_t sel_cap, sel_n;
static uint32_t strh(const char *s) { uint32_t h = 2166136261u; while (*s) h = (h ^ (uint8_t)*s++) * 16777619u; return h; }
static void sel_insert(const char *name, gptr sel) {
    if ((sel_n + 1) * 2 > sel_cap) {
        uint32_t nc = sel_cap ? sel_cap * 2 : 8192; SelEnt *ne = calloc(nc, sizeof(SelEnt));
        for (uint32_t i = 0; i < sel_cap; i++) if (sels[i].name) {
            uint32_t j = strh(sels[i].name) & (nc - 1); while (ne[j].name) j = (j + 1) & (nc - 1); ne[j] = sels[i]; }
        free(sels); sels = ne; sel_cap = nc;
    }
    uint32_t j = strh(name) & (sel_cap - 1);
    while (sels[j].name) { if (!strcmp(sels[j].name, name)) return; j = (j + 1) & (sel_cap - 1); }
    sels[j].name = strdup(name); sels[j].sel = sel; sel_n++;
}
gptr sel_get(const char *name) {
    if (sel_cap) {
        uint32_t j = strh(name) & (sel_cap - 1);
        while (sels[j].name) { if (!strcmp(sels[j].name, name)) return sels[j].sel; j = (j + 1) & (sel_cap - 1); }
    }
    gptr s = gstatic_str(name);
    sel_insert(name, s);
    return s;
}
const char *sel_name(gptr sel) { return sel ? GSTR(sel) : "(null)"; }

/* ------------------------------------------------------------------ method tables */
static void ci_add_method(ClassInfo *ci, gptr sel, gptr imp) {
    if ((ci->mcount + 1) * 2 > ci->mcap) {
        uint32_t nc = ci->mcap ? ci->mcap * 2 : 16; MEnt *ne = calloc(nc, sizeof(MEnt));
        for (uint32_t i = 0; i < ci->mcap; i++) if (ci->m[i].sel) {
            uint32_t j = mixh(ci->m[i].sel) & (nc - 1); while (ne[j].sel) j = (j + 1) & (nc - 1); ne[j] = ci->m[i]; }
        free(ci->m); ci->m = ne; ci->mcap = nc;
    }
    uint32_t j = mixh(sel) & (ci->mcap - 1);
    while (ci->m[j].sel) { if (ci->m[j].sel == sel) { ci->m[j].imp = imp; return; } j = (j + 1) & (ci->mcap - 1); }
    ci->m[j].sel = sel; ci->m[j].imp = imp; ci->mcount++;
}
static gptr ci_own_imp(ClassInfo *ci, gptr sel) {
    if (!ci->mcap) return 0;
    for (uint32_t j = mixh(sel) & (ci->mcap - 1);; j = (j + 1) & (ci->mcap - 1)) {
        if (ci->m[j].sel == sel) return ci->m[j].imp;
        if (!ci->m[j].sel) return 0;
    }
}

/* global (class, sel) -> imp cache */
typedef struct { gptr cls, sel, imp; } CEnt;
#define CACHE_SIZE (1u << 16)
static CEnt *mcache;
static void cache_flush(void) { memset(mcache, 0, CACHE_SIZE * sizeof(CEnt)); }

static gptr lookup_ci(ClassInfo *ci, gptr sel) {
    for (; ci; ci = ci->super) { gptr imp = ci_own_imp(ci, sel); if (imp) return imp; }
    return 0;
}

/* ------------------------------------------------------------------ class creation */
static void list_add(ClassInfo *ci) {
    if (nclass_list == cap_class_list) { cap_class_list = cap_class_list ? cap_class_list * 2 : 512; class_list = realloc(class_list, cap_class_list * sizeof(*class_list)); }
    class_list[nclass_list++] = ci;
}
gptr objc_class_named(const char *name) {
    for (uint32_t i = 0; i < nclass_list; i++) if (!class_list[i]->is_meta && !strcmp(class_list[i]->name, name)) return class_list[i]->addr;
    return 0;
}

static ClassInfo *make_ci(gptr addr, const char *name, bool meta, bool host) {
    ClassInfo *ci = calloc(1, sizeof *ci);
    ci->addr = addr; ci->name = strdup(name); ci->is_meta = meta; ci->is_host = host;
    hm_put(&classes, addr, ci);
    list_add(ci);
    return ci;
}

static ClassInfo *ns_object_ci;
gptr host_class(const char *name, const char *super, uint32_t instance_size) {
    gptr existing = objc_class_named(name);
    if (existing) return existing;
    ClassInfo *sup = NULL;
    if (super) {
        gptr s = objc_class_named(super);
        if (!s) s = host_class(super, "NSObject", 4);
        sup = ci_of(s);
    }
    gptr cls = gstatic_alloc(20), meta = gstatic_alloc(20);
    gptr ro = gstatic_alloc(40), mro = gstatic_alloc(40);
    gptr nm = gstatic_str(name);
    ST32(ro + 4, 4); ST32(ro + 8, instance_size); ST32(ro + 16, nm);
    ST32(mro + 0, 1); ST32(mro + 4, 20); ST32(mro + 8, 20); ST32(mro + 16, nm);
    ST32(cls + 16, ro); ST32(meta + 16, mro);
    ClassInfo *ci = make_ci(cls, name, false, true);
    ClassInfo *mi = make_ci(meta, name, true, true);
    ci->meta = mi; mi->nonmeta = ci; ci->instance_size = instance_size; mi->instance_size = 20;
    ci->ro = ro; mi->ro = mro;
    ci->super = sup;
    mi->super = sup ? sup->meta : ci;   /* root metaclass's superclass is the root class */
    ST32(cls + 0, meta);
    ST32(cls + 4, sup ? sup->addr : 0);
    ClassInfo *root = ci; while (root->super) root = root->super;
    ST32(meta + 0, root->meta->addr);
    ST32(meta + 4, mi->super->addr);
    if (!strcmp(name, "NSObject")) ns_object_ci = ci;
    return cls;
}
void host_alias_class(const char *name, gptr cls) { UNUSED(name); UNUSED(cls); }

void host_method(gptr cls, const char *sel, const char *types, HostIMP fn) {
    UNUSED(types);
    ClassInfo *ci = ci_of(cls);
    char nm[256]; snprintf(nm, sizeof nm, "-[%s %s]", ci->name, sel);
    ci_add_method(ci, sel_get(sel), thunk_for(fn, strdup(nm)));
}
void host_cmethod(gptr cls, const char *sel, const char *types, HostIMP fn) {
    UNUSED(types);
    ClassInfo *ci = ci_of(cls);
    char nm[256]; snprintf(nm, sizeof nm, "+[%s %s]", ci->name, sel);
    ci_add_method(ci->meta, sel_get(sel), thunk_for(fn, strdup(nm)));
}

gptr objc_get_class(gptr obj) { return obj ? LD32(obj) : 0; }
const char *objc_class_name(gptr cls) { ClassInfo *ci = ci_of(cls); return ci ? ci->name : "?"; }
const char *objc_obj_class_name(gptr obj) { return obj ? objc_class_name(LD32(obj)) : "nil"; }
gptr objc_superclass(gptr cls) { ClassInfo *ci = ci_of(cls); return ci && ci->super ? ci->super->addr : 0; }
bool objc_is_kind_of(gptr obj, gptr cls) {
    if (!obj) return false;
    for (ClassInfo *ci = ci_of(LD32(obj)); ci; ci = ci->super) if (ci->addr == cls) return true;
    return false;
}

/* ------------------------------------------------------------------ side table: refcounts + host payloads */
typedef struct Side { uint32_t rc; void *data; void (*dtor)(void *); gptr *weak; uint32_t nweak, capweak; bool deallocating; } Side;
static HMap side;
static Side *side_get(gptr obj) { return (Side *)hm_get(&side, obj); }
static void side_remove(gptr obj) {
    /* tombstone-free removal by rehash of the cluster */
    HMap *m = &side;
    if (!m->cap) return;
    uint32_t i = mixh(obj) & (m->cap - 1);
    while (m->e[i].k && m->e[i].k != obj) i = (i + 1) & (m->cap - 1);
    if (!m->e[i].k) return;
    m->e[i].k = 0; m->e[i].v = NULL; m->n--;
    for (uint32_t j = (i + 1) & (m->cap - 1); m->e[j].k; j = (j + 1) & (m->cap - 1)) {
        HEnt e = m->e[j]; m->e[j].k = 0; m->e[j].v = NULL; m->n--; hm_put(m, e.k, e.v);
    }
}
void *hostdata(gptr obj) { Side *s = side_get(obj); return s ? s->data : NULL; }
void *hostdata_ensure(gptr obj, uint32_t size, void (*dtor)(void *)) {
    Side *s = side_get(obj);
    if (!s) { s = calloc(1, sizeof *s); s->rc = 0x7fffffff; hm_put(&side, obj, s); }
    if (!s->data) { s->data = calloc(1, size); s->dtor = dtor; }
    return s->data;
}

gptr objc_alloc_instance(gptr cls, uint32_t extra) {
    ClassInfo *ci = ci_of(cls);
    uint32_t sz = (ci ? ci->instance_size : 4) + extra;
    if (sz < 4) sz = 4;
    gptr o = gcalloc(1, sz);
    ST32(o, cls);
    Side *s = calloc(1, sizeof *s); s->rc = 1;
    hm_put(&side, o, s);
    return o;
}

gptr objc_retain_(gptr obj) {
    if (!obj) return 0;
    Side *s = side_get(obj);
    if (s && s->rc < 0x7fffffff && !s->deallocating) s->rc++;
    return obj;
}
uint32_t objc_retain_count(gptr obj) { Side *s = side_get(obj); return s ? s->rc : 0x7fffffff; }

static void weak_clear(Side *s) {
    for (uint32_t i = 0; i < s->nweak; i++) if (LD32(s->weak[i]) ) ST32(s->weak[i], 0);
    free(s->weak); s->weak = NULL; s->nweak = s->capweak = 0;
}

void objc_release_(CPU *c, gptr obj) {
    if (!obj) return;
    Side *s = side_get(obj);
    if (!s || s->rc >= 0x7fffffff || s->deallocating) return;
    if (--s->rc == 0) {
        s->deallocating = true;
        weak_clear(s);
        msg(c, obj, "dealloc", 0);
    }
}

/* object destruction (NSObject -dealloc / object_dispose) */
void objc_destroy_instance(gptr obj) {
    Side *s = side_get(obj);
    if (s) {
        if (s->dtor && s->data) s->dtor(s->data);
        free(s->data);
        weak_clear(s);
        free(s);
        side_remove(obj);
    }
    gfree(obj);
}

/* weak references */
void objc_weak_register(gptr slot, gptr obj) {
    Side *s = side_get(obj);
    if (!s) return;
    if (s->nweak == s->capweak) { s->capweak = s->capweak ? s->capweak * 2 : 4; s->weak = realloc(s->weak, s->capweak * sizeof(gptr)); }
    s->weak[s->nweak++] = slot;
}
void objc_weak_unregister(gptr slot, gptr obj) {
    Side *s = obj ? side_get(obj) : NULL;
    if (!s) return;
    for (uint32_t i = 0; i < s->nweak; i++) if (s->weak[i] == slot) { s->weak[i] = s->weak[--s->nweak]; return; }
}
bool objc_is_deallocating(gptr obj) { Side *s = side_get(obj); return s && s->deallocating; }

/* autorelease pools */
/* one pool stack per guest thread (threads interleave under the cooperative scheduler) */
static struct { gptr *s; uint32_t n, cap; } ar_t[16];
#define ar_stack ar_t[sched_current_thread() & 15].s
#define ar_n ar_t[sched_current_thread() & 15].n
#define ar_cap ar_t[sched_current_thread() & 15].cap
#define POOL_MARK 0xFFFFFFFFu
uint32_t objc_pool_push(void) {
    if (ar_n == ar_cap) { ar_cap = ar_cap ? ar_cap * 2 : 1024; ar_stack = realloc(ar_stack, ar_cap * sizeof(gptr)); }
    ar_stack[ar_n++] = POOL_MARK;
    return ar_n;   /* token: index just past the mark */
}
void objc_pool_pop(CPU *c, uint32_t token) {
    if (token == 0 || token > ar_n) return;
    while (ar_n >= token) {
        gptr o = ar_stack[--ar_n];
        if (o == POOL_MARK) { if (ar_n < token) break; continue; }
        objc_release_(c, o);
    }
}
gptr objc_autorelease_(gptr obj) {
    if (!obj) return 0;
    if (ar_n == ar_cap) { ar_cap = ar_cap ? ar_cap * 2 : 1024; ar_stack = realloc(ar_stack, ar_cap * sizeof(gptr)); }
    ar_stack[ar_n++] = obj;
    return obj;
}
void objc_autorelease_pool_drain_all(CPU *c) { objc_pool_pop(c, 1); }

/* ------------------------------------------------------------------ lookup + messaging */
static void class_initialize(CPU *c, ClassInfo *ci);
gptr objc_lookup_imp(gptr cls, gptr sel) {
    uint32_t h = (mixh(cls) ^ (sel * 2654435761u)) & (CACHE_SIZE - 1);
    CEnt *e = &mcache[h];
    if (e->cls == cls && e->sel == sel) return e->imp;
    ClassInfo *ci = ci_of(cls);
    if (!ci) return 0;
    gptr imp = lookup_ci(ci, sel);
    if (imp) { e->cls = cls; e->sel = sel; e->imp = imp; }
    return imp;
}

static gptr sel_forwardInvocation, sel_resolveInstanceMethod, sel_initialize, sel_dealloc;
static void nil_imp(CPU *c) { c->r[0] = c->r[1] = c->r[2] = c->r[3] = 0; }
void objc_set_lenient(gptr cls) { ClassInfo *ci = ci_of(cls); if (ci) { ci->lenient = true; if (ci->meta) ci->meta->lenient = true; } }
static gptr unrecognized(CPU *c, gptr self, gptr sel) {
    ClassInfo *ci = ci_of(LD32(self));
    for (ClassInfo *k = ci; k; k = k->super) if (k->lenient) {
        static gptr seen[256]; static unsigned nseen;
        bool logged = false;
        for (unsigned i = 0; i < nseen; i++) if (seen[i] == sel) logged = true;
        if (!logged) { if (nseen < 256) seen[nseen++] = sel; rt_log("objc: %c[%s %s] ignored (SDK service not provided)", ci->is_meta ? '+' : '-', ci->name, sel_name(sel)); }
        return thunk_for(nil_imp, "nil_imp");
    }
    rt_fatal(c, "%c[%s %s]: unrecognized selector sent to %08x (from %s)", ci && ci->is_meta ? '+' : '-', ci ? ci->name : "?", sel_name(sel), self, rt_symbolize(c->r[14]));
}

static inline gptr resolve_send(CPU *c, gptr self, gptr sel) {
    gptr cls = LD32(self);
    ClassInfo *ci = NULL;
    gptr imp = objc_lookup_imp(cls, sel);
    if (__builtin_expect(!imp, 0)) {
        ci = ci_of(cls);
        if (!ci) rt_fatal(c, "message %s sent to non-object %08x (isa %08x)", sel_name(sel), self, cls);
        imp = unrecognized(c, self, sel);
    }
    return imp;
}

static void ensure_init(CPU *c, gptr self) {
    gptr cls = LD32(self);
    ClassInfo *ci = ci_of(cls);
    if (!ci) return;
    ClassInfo *k = ci->is_meta ? ci->nonmeta : ci;
    if (k && !k->initialized) class_initialize(c, k);
}

void H_objc_msgSend(CPU *c) {
    gptr self = c->r[0];
    if (!self) { c->r[0] = c->r[1] = c->r[2] = c->r[3] = 0; return; }
    gptr cls = LD32(self);
    gptr sel = c->r[1];
    uint32_t h = (mixh(cls) ^ (sel * 2654435761u)) & (CACHE_SIZE - 1);
    CEnt *e = &mcache[h];
    gptr imp;
    if (e->cls == cls && e->sel == sel) imp = e->imp;
    else { ensure_init(c, self); imp = resolve_send(c, self, sel); }
    call_indirect(c, imp);
}
void H_objc_msgSend_stret(CPU *c) {
    gptr self = c->r[1];
    if (!self) { return; }
    ensure_init(c, self);
    call_indirect(c, resolve_send(c, self, c->r[2]));
}
void H_objc_msgSendSuper2(CPU *c) {
    gptr sup = c->r[0];
    gptr recv = LD32(sup), cur = LD32(sup + 4);
    gptr sel = c->r[1];
    ClassInfo *ci = ci_of(cur);
    if (!ci) rt_fatal(c, "msgSendSuper2 with unknown class %08x", cur);
    gptr imp = ci->super ? lookup_ci(ci->super, sel) : 0;
    if (!imp) rt_fatal(c, "super %s: unrecognized selector (class %s)", sel_name(sel), ci->name);
    c->r[0] = recv;
    call_indirect(c, imp);
}
void H_objc_msgSendSuper2_stret(CPU *c) {
    gptr sup = c->r[1];
    gptr recv = LD32(sup), cur = LD32(sup + 4);
    ClassInfo *ci = ci_of(cur);
    gptr imp = ci && ci->super ? lookup_ci(ci->super, c->r[2]) : 0;
    if (!imp) rt_fatal(c, "super_stret %s unrecognized", sel_name(c->r[2]));
    c->r[1] = recv;
    call_indirect(c, imp);
}

static void class_initialize(CPU *c, ClassInfo *ci) {
    if (ci->initialized || ci->initializing) return;
    if (ci->super && !ci->super->initialized) class_initialize(c, ci->super);
    ci->initializing = true;
    gptr imp = ci_own_imp(ci->meta, sel_initialize);
    if (imp) {
        uint32_t args[2] = {ci->addr, sel_initialize};
        guest_call(c, imp, 2, args);
    }
    ci->initialized = true; ci->initializing = false;
}

/* host -> guest message send helper. Arguments are 32-bit words. */
uint64_t msgv64(CPU *c, gptr self, const char *sel, int nargs, va_list ap) {
    if (!self) return 0;
    gptr s = sel_get(sel);
    ensure_init(c, self);
    gptr imp = objc_lookup_imp(LD32(self), s);
    if (!imp) unrecognized(c, self, s);
    uint32_t args[16];
    args[0] = self; args[1] = s;
    for (int i = 0; i < nargs && i < 14; i++) args[2 + i] = va_arg(ap, uint32_t);
    return guest_call64(c, imp, nargs + 2, args);
}
uint32_t msg(CPU *c, gptr self, const char *sel, int nargs, ...) {
    va_list ap; va_start(ap, nargs); uint64_t r = msgv64(c, self, sel, nargs, ap); va_end(ap); return (uint32_t)r;
}
uint64_t msg64(CPU *c, gptr self, const char *sel, int nargs, ...) {
    va_list ap; va_start(ap, nargs); uint64_t r = msgv64(c, self, sel, nargs, ap); va_end(ap); return r;
}
bool responds(gptr obj, const char *sel) { return obj && objc_lookup_imp(LD32(obj), sel_get(sel)) != 0; }

/* ------------------------------------------------------------------ image class realization */
static void add_method_list(ClassInfo *ci, gptr ml) {
    if (!ml) return;
    uint32_t entsize = LD32(ml) & ~3u, count = LD32(ml + 4);
    for (uint32_t k = 0; k < count; k++) {
        gptr m = ml + 8 + k * entsize;
        gptr name = LD32(m), imp = LD32(m + 8);
        gptr sel = sel_get(GSTR(name));
        if (sel != name) ST32(m, sel);
        ci_add_method(ci, sel, imp);
    }
}

static ClassInfo *realize(gptr cls);
static ClassInfo *realize_meta(gptr meta, ClassInfo *nonmeta) {
    ClassInfo *mi = ci_of(meta);
    if (mi) return mi;
    gptr ro = LD32(meta + 16) & ~3u;
    mi = make_ci(meta, GSTR(LD32(ro + 16)), true, false);
    mi->ro = ro; mi->nonmeta = nonmeta; mi->instance_size = 20;
    add_method_list(mi, LD32(ro + 20));
    return mi;
}

static void slide_ivars(ClassInfo *ci, uint32_t super_size) {
    gptr ro = ci->ro;
    uint32_t start = LD32(ro + 4), size = LD32(ro + 8);
    if (super_size <= start) { ci->instance_size = size; return; }
    uint32_t delta = ALIGN(super_size, 4) - start;
    gptr il = LD32(ro + 28);
    if (il) {
        uint32_t entsize = LD32(il), count = LD32(il + 4);
        for (uint32_t k = 0; k < count; k++) {
            gptr iv = il + 8 + k * entsize;
            gptr offp = LD32(iv);
            if (offp) ST32(offp, LD32(offp) + delta);
        }
    }
    ST32(ro + 4, start + delta); ST32(ro + 8, size + delta);
    ci->instance_size = size + delta;
    rt_log("objc: slid ivars of %s by %u", ci->name, delta);
}

static ClassInfo *realize(gptr cls) {
    ClassInfo *ci = ci_of(cls);
    if (ci) return ci;
    gptr ro = LD32(cls + 16) & ~3u;
    const char *name = GSTR(LD32(ro + 16));
    ci = make_ci(cls, name, false, false);
    ci->ro = ro;
    ci->instance_size = LD32(ro + 8);
    gptr sup = LD32(cls + 4);
    if (sup) {
        ClassInfo *si = ci_of(sup);
        if (!si) si = realize(sup);
        ci->super = si;
        slide_ivars(ci, si->instance_size);
    }
    gptr meta = LD32(cls);
    ClassInfo *mi = realize_meta(meta, ci);
    ci->meta = mi;
    mi->super = ci->super ? ci->super->meta : ci;
    add_method_list(ci, LD32(ro + 20));
    ci->protocols = LD32(ro + 24);
    return ci;
}

gptr data_import_lookup(const char *name);
void objc_rt_load_image(CPU *c) {
    /* canonical selectors: every string in __objc_methname */
    for (gptr p = img_sec_methname; p < img_sec_methname + img_sec_methname_size;) {
        const char *s = GSTR(p);
        size_t n = strlen(s);
        if (n) sel_insert(s, p);
        p += n + 1;
    }
    for (uint32_t k = 0; k < img_sec_selrefs_size / 4; k++) {
        gptr r = img_sec_selrefs + 4 * k;
        ST32(r, sel_get(GSTR(LD32(r))));
    }
    sel_forwardInvocation = sel_get("forwardInvocation:");
    sel_resolveInstanceMethod = sel_get("resolveInstanceMethod:");
    sel_initialize = sel_get("initialize");
    sel_dealloc = sel_get("dealloc");
    for (uint32_t k = 0; k < img_sec_classlist_size / 4; k++) realize(LD32(img_sec_classlist + 4 * k));
    /* categories */
    for (uint32_t k = 0; k < img_sec_catlist_size / 4; k++) {
        gptr cat = LD32(img_sec_catlist + 4 * k);
        gptr cls = LD32(cat + 4);
        ClassInfo *ci = ci_of(cls);
        if (!ci) { rt_log("objc: category %s on unknown class %08x", GSTR(LD32(cat)), cls); continue; }
        add_method_list(ci, LD32(cat + 8));
        add_method_list(ci->meta, LD32(cat + 12));
        if (LD32(cat + 16)) { ci->xprotos = realloc(ci->xprotos, (ci->nxprotos + 1) * sizeof(gptr)); ci->xprotos[ci->nxprotos++] = LD32(cat + 16); }
    }
    cache_flush();
    /* +load */
    for (uint32_t k = 0; k < img_sec_nlclslist_size / 4; k++) {
        gptr cls = LD32(img_sec_nlclslist + 4 * k);
        ClassInfo *ci = ci_of(cls);
        gptr imp = ci ? ci_own_imp(ci->meta, sel_get("load")) : 0;
        if (imp) { rt_log("objc: +[%s load]", ci->name); guest_call2(c, imp, cls, sel_get("load")); }
    }
    for (uint32_t k = 0; k < img_sec_catlist_size / 4; k++) {
        gptr cat = LD32(img_sec_catlist + 4 * k);
        gptr cm = LD32(cat + 12);
        if (!cm) continue;
        uint32_t entsize = LD32(cm) & ~3u, count = LD32(cm + 4);
        for (uint32_t j = 0; j < count; j++) {
            gptr m = cm + 8 + j * entsize;
            if (LD32(m) == sel_get("load")) guest_call2(c, LD32(m + 8), LD32(cat + 4), sel_get("load"));
        }
    }
}

void objc_rt_init(void) {
    mcache = calloc(CACHE_SIZE, sizeof(CEnt));
}

/* placeholder classes for imported-but-unimplemented system classes */
gptr objc_class_for_import(const char *name) {
    gptr c = objc_class_named(name);
    if (c) return c;
    rt_log("objc: creating placeholder class %s (no host implementation)", name);
    return host_class(name, "NSObject", 4);
}
gptr objc_metaclass_of(gptr cls) { return LD32(cls); }

/* ------------------------------------------------------------------ runtime API used by HLE + guest */
uint32_t objc_instance_size(gptr cls) { ClassInfo *ci = ci_of(cls); return ci ? ci->instance_size : 0; }
bool objc_is_metaclass(gptr cls) { ClassInfo *ci = ci_of(cls); return ci && ci->is_meta; }
bool objc_is_class(gptr obj) { return ci_of(obj) != NULL; }
void objc_add_method_imp(gptr cls, gptr sel, gptr imp) { ClassInfo *ci = ci_of(cls); if (ci) { ci_add_method(ci, sel, imp); cache_flush(); } }
gptr objc_own_imp(gptr cls, gptr sel) { ClassInfo *ci = ci_of(cls); return ci ? ci_own_imp(ci, sel) : 0; }
gptr objc_class_protocols(gptr cls) { ClassInfo *ci = ci_of(cls); return ci ? ci->protocols : 0; }
/* protocol_t: isa, name, protocols (inherited protocol_list_t), ... */
static bool proto_list_has(gptr pl, const char *proto, int depth) {
    if (!pl || depth > 16) return false;
    uint32_t n = LD32(pl);
    for (uint32_t i = 0; i < n; i++) {
        gptr p = LD32(pl + 4 + 4 * i);
        if (!p) continue;
        if (!strcmp(GSTR(LD32(p + 4)), proto)) return true;
        if (proto_list_has(LD32(p + 8), proto, depth + 1)) return true;
    }
    return false;
}
bool objc_class_conforms(gptr cls, const char *proto) {
    /* host Foundation classes adopt the standard value protocols */
    static const char *std_protos[] = {"NSObject", "NSCoding", "NSSecureCoding", "NSCopying", "NSMutableCopying", "NSFastEnumeration", NULL};
    for (ClassInfo *ci = ci_of(cls); ci; ci = ci->super) {
        if (ci->is_host) {
            if (!strcmp(proto, "NSObject")) return true;
            static const char *value_classes[] = {"NSString", "NSNumber", "NSArray", "NSDictionary", "NSData", "NSDate", "NSSet", "NSURL", "NSValue", "NSNull", NULL};
            for (int i = 0; value_classes[i]; i++) if (!strcmp(ci->name, value_classes[i]))
                for (int j = 0; std_protos[j]; j++) if (!strcmp(proto, std_protos[j])) return true;
        }
    }
    for (ClassInfo *ci = ci_of(cls); ci; ci = ci->super) {
        if (proto_list_has(ci->protocols, proto, 0)) return true;
        for (uint32_t i = 0; i < ci->nxprotos; i++) if (proto_list_has(ci->xprotos[i], proto, 0)) return true;
    }
    return false;
}
/* objc_allocateClassPair / registerClassPair support (used by some SDK code) */
gptr objc_allocate_class_pair(gptr super, const char *name, uint32_t extra) {
    UNUSED(extra);
    if (objc_class_named(name)) return 0;
    ClassInfo *si = ci_of(super);
    gptr c = host_class(name, si ? si->name : NULL, si ? si->instance_size : 4);
    ci_of(c)->is_host = false;
    return c;
}

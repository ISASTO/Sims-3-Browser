/* rt.h — internal runtime API for the HLE layer.
 * Conventions:
 *   - guest pointers are uint32_t (type alias gptr); host pointers are real C pointers.
 *   - HLE functions have signature void H_xxx(CPU *c) and read arguments via ARG(i).
 *   - Every guest-visible object (ObjC objects, strings, buffers) lives in guest memory.
 */
#ifndef SIMS3_RT_H
#define SIMS3_RT_H
#include "cpu.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdbool.h>

typedef uint32_t gptr;

/* ------------------------------------------------------------------ args / returns */
static inline uint32_t rt_arg(CPU *c, int i) { return i < 4 ? c->r[i] : LD32(c->r[13] + 4 * (i - 4)); }
#define ARG(i) rt_arg(c, (i))
#define ARGF(i) U2F(ARG(i))
#define RET(v) do { c->r[0] = (uint32_t)(v); } while (0)
#define RET64(v) do { uint64_t _v = (uint64_t)(v); c->r[0] = (uint32_t)_v; c->r[1] = (uint32_t)(_v >> 32); } while (0)
#define RETF(f) do { c->r[0] = F2U((float)(f)); } while (0)
#define RETD(d) RET64(D2U((double)(d)))
/* double argument occupying two consecutive argument words starting at word index i */
static inline double rt_argd(CPU *c, int i) { return U2D((uint64_t)rt_arg(c, i) | ((uint64_t)rt_arg(c, i + 1) << 32)); }
#define ARGD(i) rt_argd(c, (i))

/* ------------------------------------------------------------------ logging / errors */
extern int rt_verbose;
void rt_log(const char *fmt, ...) __attribute__((format(printf, 1, 2)));
void rt_fatal(CPU *c, const char *fmt, ...) __attribute__((noreturn, format(printf, 2, 3)));
void rt_backtrace(CPU *c);
const char *rt_symbolize(uint32_t addr);   /* "name+off" for guest code addresses */

/* ------------------------------------------------------------------ guest memory */
void mem_init(void);
gptr gmalloc(uint32_t size);
gptr gcalloc(uint32_t n, uint32_t size);
gptr grealloc(gptr p, uint32_t size);
void gfree(gptr p);
uint32_t gmalloc_size(gptr p);
gptr gstrdup(const char *s);                /* host C string -> new guest string */
gptr gmemdup(const void *p, uint32_t n);
static inline char *GSTR(gptr p) { return p ? (char *)G2H(p) : NULL; }
gptr gstatic_alloc(uint32_t size);          /* never freed (runtime-lifetime objects) */
gptr gstatic_str(const char *s);            /* interned, never freed */

/* ------------------------------------------------------------------ host function thunks */
#define THUNK_BASE 0xFE000000u
#define THUNK_MAX 65536
uint32_t thunk_for(GuestFn fn, const char *name);  /* guest-callable address for a host function */
GuestFn thunk_lookup(uint32_t addr);
const char *thunk_name(uint32_t addr);

/* ------------------------------------------------------------------ calling guest code from host */
/* Calls guest function at addr with up to 4 word args (more go on the guest stack). Returns r0. */
uint32_t guest_call(CPU *c, uint32_t addr, int nargs, const uint32_t *args);
uint64_t guest_call64(CPU *c, uint32_t addr, int nargs, const uint32_t *args);
uint32_t guest_call0(CPU *c, uint32_t addr);
uint32_t guest_call1(CPU *c, uint32_t addr, uint32_t a0);
uint32_t guest_call2(CPU *c, uint32_t addr, uint32_t a0, uint32_t a1);
uint32_t guest_call3(CPU *c, uint32_t addr, uint32_t a0, uint32_t a1, uint32_t a2);
uint32_t guest_call4(CPU *c, uint32_t addr, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

/* ------------------------------------------------------------------ image */
extern uint32_t image_text_lo, image_text_hi;
void image_load(void);
gptr image_symbol(const char *name);     /* defined symbol in the guest image (exported or local) */
void dispatch_init(void);

/* ------------------------------------------------------------------ data imports (bind targets) */
/* HLE modules register guest addresses for imported data symbols (e.g. _kCFAllocatorDefault). */
void data_import_register(const char *name, gptr addr);
gptr data_import_lookup(const char *name);
gptr data_import_alloc(const char *name, uint32_t size);  /* allocate zeroed storage and register */

/* ------------------------------------------------------------------ ObjC */
typedef uint32_t id_t_;
#define nil 0u
void objc_rt_init(void);           /* create host classes */
void objc_rt_load_image(CPU *c);   /* realize image classes/categories, fix selrefs, run +load */
gptr sel_get(const char *name);    /* uniqued SEL */
const char *sel_name(gptr sel);
gptr objc_class_named(const char *name);
gptr objc_get_class(gptr obj);     /* isa (for tagged/nil safe) */
const char *objc_class_name(gptr cls);
const char *objc_obj_class_name(gptr obj);
gptr objc_superclass(gptr cls);
bool objc_is_kind_of(gptr obj, gptr cls);
gptr objc_lookup_imp(gptr cls, gptr sel);      /* 0 if not found */
gptr objc_alloc_instance(gptr cls, uint32_t extra);
gptr objc_retain_(gptr obj);
void objc_release_(CPU *c, gptr obj);
gptr objc_autorelease_(gptr obj);
uint32_t objc_retain_count(gptr obj);
void objc_autorelease_pool_drain_all(CPU *c);
/* message send from host code */
uint32_t msg(CPU *c, gptr self, const char *sel, int nargs, ...);
uint64_t msg64(CPU *c, gptr self, const char *sel, int nargs, ...);
bool responds(gptr obj, const char *sel);

/* host class definition */
typedef void (*HostIMP)(CPU *c);
gptr host_class(const char *name, const char *super, uint32_t instance_size);
void host_method(gptr cls, const char *sel, const char *types, HostIMP fn);
void host_cmethod(gptr cls, const char *sel, const char *types, HostIMP fn);
void host_alias_class(const char *name, gptr cls);
void *hostdata(gptr obj);                /* per-object host payload (side table), may be NULL */
void *hostdata_ensure(gptr obj, uint32_t size, void (*dtor)(void *));
#define SELF ARG(0)
#define CMD ARG(1)

/* ------------------------------------------------------------------ strings (NSString / CFString) */
gptr nsstr(const char *utf8);                 /* new autoreleased-equivalent (+0, owned by pool) NSString */
gptr nsstr_retained(const char *utf8);        /* +1 */
gptr nsstr_static(const char *utf8);          /* immortal */
gptr nsstr_from_utf16(const uint16_t *s, uint32_t n, bool retained);
char *nsstr_utf8(gptr s);                     /* host malloc'd copy; caller frees */
const char *nsstr_cstr(gptr s);               /* temp host string, valid until next call (ring buffer) */
uint32_t nsstr_len(gptr s);                   /* UTF-16 length */
uint16_t *nsstr_utf16(gptr s, uint32_t *len); /* host malloc'd UTF-16 copy */
bool is_nsstring(gptr obj);

/* ------------------------------------------------------------------ collections */
gptr nsarray_new(const gptr *items, uint32_t n, bool mutable_, bool retained);
uint32_t nsarray_count(gptr a);
gptr nsarray_get(gptr a, uint32_t i);
void nsarray_add(gptr a, gptr obj);
gptr nsdict_new(bool mutable_, bool retained);
gptr nsdict_get(gptr d, gptr key);
void nsdict_set(gptr d, gptr key, gptr val);
gptr nsnumber_int(int64_t v, bool retained);
gptr nsnumber_double(double v, bool retained);
gptr nsnumber_bool(bool v);
double nsnumber_get_double(gptr n);
int64_t nsnumber_get_int(gptr n);
bool is_nsnumber(gptr obj);
gptr nsdata_new(const void *bytes, uint32_t n, bool retained);
bool obj_equal(CPU *c, gptr a, gptr b);
uint32_t obj_hash(CPU *c, gptr a);

/* ------------------------------------------------------------------ platform (host.c / JS) */
double host_now_ms(void);                      /* monotonic ms */
double host_wall_ms(void);                     /* unix epoch ms */
int host_file_size(const char *path);         /* -1 if missing */
int host_file_read(const char *path, void *dst, uint32_t off, uint32_t len);
int host_file_write(const char *path, const void *src, uint32_t len, int append);
int host_file_delete(const char *path);
int host_dir_list(const char *path, char *out, uint32_t outlen);   /* NUL-separated names */
void host_console(const char *s);

/* virtual file system */
void vfs_init(void);
extern const char *VFS_BUNDLE;    /* "/app/sims3_iphone.app" */
extern const char *VFS_HOME;      /* "/home" */

/* threads / scheduler */
void sched_init(CPU *main_cpu);
CPU *cur_cpu(void);
uint32_t sched_current_thread(void);
void sched_run_threads(void);
void sched_sleep_current(CPU *c, double ms);

/* run loop */
void runloop_tick(CPU *c, double now_ms);
gptr timer_create_(CPU *c, double interval, gptr target, gptr sel, gptr userinfo, bool repeats);
void runloop_add_timer(gptr timer);
void runloop_perform_later(gptr target, gptr sel, gptr arg, double delay_ms);
void runloop_dispatch_async(gptr block_or_fn, gptr ctx, bool is_block);
extern double rt_now_ms;

/* blocks */
uint32_t block_invoke_addr(gptr block);
gptr block_copy(gptr block);
void block_release(CPU *c, gptr block);

/* misc */
void hle_register_all(void);
extern CPU *main_cpu;
extern uint32_t ui_sp_base;   /* guest sp to use for run-loop callbacks (below UIApplicationMain's frame) */
#define UNUSED(x) (void)(x)
#define ALIGN(x, a) (((x) + (a) - 1) & ~((a) - 1))
#endif

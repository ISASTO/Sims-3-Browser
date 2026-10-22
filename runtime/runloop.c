/* runloop.c — main run loop emulation driven by the browser frame callback:
 * NSTimer, NSRunLoop, performSelector:afterDelay:, libdispatch (main-queue serialised), Blocks runtime.
 * NSTimer semantics: a late repeating timer fires once and is rescheduled to the next multiple of its
 * interval after 'now' (no catch-up bursts), as documented for NSTimer/CFRunLoopTimer. */
#include "rt.h"

gptr rt_retain(CPU *c, gptr obj);
void rt_release(CPU *c, gptr obj);
void objc_destroy_instance(gptr obj);
static gptr cls_NSTimer, cls_NSRunLoop, cls_NSDate, cls_StackBlock, cls_GlobalBlock, cls_MallocBlock, cls_Queue;
static gptr main_runloop;

/* ------------------------------------------------------------------ timers */
typedef struct Timer { double interval, fire; gptr target, sel, userinfo, block; bool repeats, valid, scheduled; } Timer;
static gptr *timers; static uint32_t ntimers, captimers;
static Timer *T(gptr t) { return hostdata(t); }
gptr timer_create_(CPU *c, double interval, gptr target, gptr sel, gptr userinfo, bool repeats) {
    gptr t = objc_alloc_instance(cls_NSTimer, 0);
    Timer *s = hostdata_ensure(t, sizeof(Timer), NULL);
    if (interval < 0.0001) interval = 0.0001;
    s->interval = interval; s->fire = rt_now_ms + interval * 1000.0;
    s->target = rt_retain(c, target); s->sel = sel; s->userinfo = rt_retain(c, userinfo); s->repeats = repeats; s->valid = true;
    return t;
}
void runloop_add_timer(gptr t) {
    Timer *s = T(t);
    if (!s || s->scheduled || !s->valid) return;
    s->scheduled = true;
    objc_retain_(t);
    if (ntimers == captimers) { captimers = captimers ? captimers * 2 : 16; timers = realloc(timers, captimers * 4); }
    timers[ntimers++] = t;
}
static void timer_invalidate(CPU *c, gptr t) {
    Timer *s = T(t);
    if (!s || !s->valid) return;
    s->valid = false;
    gptr tg = s->target, ui = s->userinfo;
    s->target = s->userinfo = 0;
    rt_release(c, tg); rt_release(c, ui);
}
static void tm_scheduled(CPU *c) {
    gptr t = timer_create_(c, ARGD(2), ARG(4), ARG(5), ARG(6), ARG(7) & 0xff);
    runloop_add_timer(t);
    RET(objc_autorelease_(t));
}
static void tm_timerWith(CPU *c) { RET(objc_autorelease_(timer_create_(c, ARGD(2), ARG(4), ARG(5), ARG(6), ARG(7) & 0xff))); }
static void tm_invalidate(CPU *c) { timer_invalidate(c, SELF); }
static void tm_isValid(CPU *c) { Timer *s = T(SELF); RET(s && s->valid); }
static void tm_userInfo(CPU *c) { Timer *s = T(SELF); RET(s ? s->userinfo : 0); }
static void tm_timeInterval(CPU *c) { Timer *s = T(SELF); RETD(s ? s->interval : 0); }
static void tm_fire(CPU *c) { Timer *s = T(SELF); if (s && s->valid) { uint32_t a[3] = {s->target, s->sel, SELF}; gptr imp = objc_lookup_imp(LD32(s->target), s->sel); if (imp) guest_call(c, imp, 3, a); if (!s->repeats) timer_invalidate(c, SELF); } }
static void tm_dealloc(CPU *c) { timer_invalidate(c, SELF); objc_destroy_instance(SELF); }

static void rl_current(CPU *c) { RET(main_runloop); }
static void rl_addTimer(CPU *c) { runloop_add_timer(ARG(2)); }
static void rl_run(CPU *c) { rt_fatal(c, "-[NSRunLoop run] would block the browser thread"); }
static void rl_runUntilDate(CPU *c) { runloop_tick(c, host_now_ms()); RET(1); }
static void rl_getCFRunLoop(CPU *c) { RET(main_runloop); }

/* ------------------------------------------------------------------ deferred performs + dispatch */
typedef struct Pend { double when; gptr target, sel, arg; gptr block; gptr fn, ctx; bool cancelled; uint64_t seq; } Pend;
static Pend *pend; static uint32_t npend, cappend; static uint64_t pend_seq;
static void pend_add(Pend p) {
    if (npend == cappend) { cappend = cappend ? cappend * 2 : 64; pend = realloc(pend, cappend * sizeof(Pend)); }
    p.seq = pend_seq++;
    pend[npend++] = p;
}
void runloop_perform_later(gptr target, gptr sel, gptr arg, double delay_ms) {
    Pend p = {0}; p.when = rt_now_ms + delay_ms; p.target = objc_retain_(target); p.sel = sel; p.arg = objc_retain_(arg);
    pend_add(p);
}
void runloop_cancel_perform(gptr target, gptr sel, gptr arg, bool any) {
    for (uint32_t i = 0; i < npend; i++) if (pend[i].target == target && (any || (pend[i].sel == sel && pend[i].arg == arg))) pend[i].cancelled = true;
}
gptr block_copy(gptr b);
uint32_t block_invoke_addr(gptr b) { return LD32(b + 12); }
void runloop_dispatch_async(gptr block_or_fn, gptr ctx, bool is_block) {
    Pend p = {0}; p.when = rt_now_ms;
    if (is_block) p.block = block_copy(block_or_fn); else { p.fn = block_or_fn; p.ctx = ctx; }
    pend_add(p);
}
static void dispatch_after_ms(double ms, gptr block) { Pend p = {0}; p.when = rt_now_ms + ms; p.block = block_copy(block); pend_add(p); }

/* ------------------------------------------------------------------ tick */
uint32_t objc_pool_push(void);
void objc_pool_pop(CPU *c, uint32_t token);
void ui_dispatch_input(CPU *c);
void audio_tick(CPU *c);
void runloop_tick(CPU *c, double now) {
    rt_now_ms = now;
    uint32_t pool = objc_pool_push();
    void ui_dispatch_lifecycle(CPU *c); ui_dispatch_lifecycle(c);
    void motion_tick(CPU *c); motion_tick(c);
    ui_dispatch_input(c);
    audio_tick(c);
    /* deferred performs and dispatched blocks that are due (FIFO by sequence) */
    uint32_t n = npend;
    for (uint32_t i = 0; i < n && i < npend; i++) {
        Pend p = pend[i];
        if (p.cancelled || p.when > now) continue;
        pend[i].cancelled = true;
        if (p.block) { guest_call1(c, block_invoke_addr(p.block), p.block); void block_release(CPU *c, gptr b); block_release(c, p.block); }
        else if (p.fn) guest_call1(c, p.fn, p.ctx);
        else { gptr imp = objc_lookup_imp(LD32(p.target), p.sel); if (!imp) rt_fatal(c, "performSelector: %s not implemented by %s", sel_name(p.sel), objc_obj_class_name(p.target)); guest_call3(c, imp, p.target, p.sel, p.arg); rt_release(c, p.target); rt_release(c, p.arg); }
        if (c->unwinding) rt_fatal(c, "exception escaped run-loop callout");
    }
    uint32_t k = 0;
    for (uint32_t i = 0; i < npend; i++) if (!pend[i].cancelled) pend[k++] = pend[i];
    npend = k;
    /* timers in fire-time order */
    for (;;) {
        gptr best = 0; double bt = 1e300;
        for (uint32_t i = 0; i < ntimers; i++) { Timer *s = T(timers[i]); if (s->valid && s->fire <= now && s->fire < bt) { bt = s->fire; best = timers[i]; } }
        if (!best) break;
        Timer *s = T(best);
        if (s->repeats) {
            double nf = s->fire + s->interval * 1000.0;
            if (nf <= now) nf = now + s->interval * 1000.0 - fmod(now - s->fire, s->interval * 1000.0);
            s->fire = nf;
        } else s->fire = 1e300;
        gptr target = s->target, sel = s->sel;
        objc_retain_(best);
        gptr imp = objc_lookup_imp(LD32(target), sel);
        if (!imp) rt_fatal(c, "timer target %s does not implement %s", objc_obj_class_name(target), sel_name(sel));
        guest_call3(c, imp, target, sel, best);
        if (c->unwinding) rt_fatal(c, "exception escaped timer callout");
        if (!s->repeats) timer_invalidate(c, best);
        objc_release_(c, best);
    }
    k = 0;
    for (uint32_t i = 0; i < ntimers; i++) { if (T(timers[i])->valid) timers[k++] = timers[i]; else objc_release_(c, timers[i]); }
    ntimers = k;
    void sources_tick_(CPU *c, double now); sources_tick_(c, now);
    objc_pool_pop(c, pool);
}

/* ------------------------------------------------------------------ libdispatch subset (all work is serialised on the main loop) */
static gptr main_queue, global_queue;
void H_dispatch_async(CPU *c) { runloop_dispatch_async(ARG(1), 0, true); }
void H_dispatch_after(CPU *c) {
    uint64_t when = (uint64_t)ARG(0) | ((uint64_t)ARG(1) << 32);
    double ms = when == ~0ull ? 1e300 : (double)(int64_t)when / 1e6 - host_now_ms();
    dispatch_after_ms(ms < 0 ? 0 : ms, ARG(3));
}
void H_dispatch_time(CPU *c) {
    uint64_t base = (uint64_t)ARG(0) | ((uint64_t)ARG(1) << 32);
    int64_t delta = (int64_t)((uint64_t)ARG(2) | ((uint64_t)ARG(3) << 32));
    uint64_t now = (uint64_t)(host_now_ms() * 1e6);
    RET64((base == 0 ? now : base) + delta);
}
void H_dispatch_sync(CPU *c) { gptr b = ARG(1); guest_call1(c, block_invoke_addr(b), b); }
void H_dispatch_once(CPU *c) { gptr pred = ARG(0), b = ARG(1); if (LD32(pred) != 0xffffffffu) { ST32(pred, 0xffffffffu); guest_call1(c, block_invoke_addr(b), b); } }
void H_dispatch_once_f(CPU *c) { gptr pred = ARG(0); if (LD32(pred) != 0xffffffffu) { ST32(pred, 0xffffffffu); guest_call1(c, ARG(2), ARG(1)); } }
void H_dispatch_get_global_queue(CPU *c) { RET(global_queue); }
void H_dispatch_queue_create(CPU *c) { gptr q = objc_alloc_instance(cls_Queue, 0); RET(q); }
void H_dispatch_group_create(CPU *c) { gptr q = objc_alloc_instance(cls_Queue, 0); RET(q); }
void H_dispatch_group_enter(CPU *c) { int *n = hostdata_ensure(ARG(0), 8, NULL); n[0]++; }
void H_dispatch_group_leave(CPU *c) { int *n = hostdata_ensure(ARG(0), 8, NULL); n[0]--; }
void H_dispatch_group_notify(CPU *c) { runloop_dispatch_async(ARG(2), 0, true); }
/* dispatch sources: timer sources fire on the main loop; other source types are created but never signalled */
typedef struct { gptr handler, cancel_handler; double next, interval; int suspend; bool cancelled, timer; } DSrc;
static gptr cls_Source, *sources; static uint32_t nsources, capsources;
void H_dispatch_source_create(CPU *c) {
    gptr s = objc_alloc_instance(cls_Source, 0);
    DSrc *d = hostdata_ensure(s, sizeof(DSrc), NULL);
    d->suspend = 1; d->next = 1e300; d->timer = ARG(0) == data_import_lookup("__dispatch_source_type_timer");
    if (nsources == capsources) { capsources = capsources ? capsources * 2 : 16; sources = realloc(sources, capsources * sizeof(gptr)); }
    sources[nsources++] = objc_retain_(s);
    RET(s);
}
void H_dispatch_source_set_event_handler(CPU *c) { DSrc *d = hostdata(ARG(0)); if (!d) return; if (d->handler) block_release(c, d->handler); d->handler = ARG(1) ? block_copy(ARG(1)) : 0; }
void H_dispatch_source_set_cancel_handler(CPU *c) { DSrc *d = hostdata(ARG(0)); if (d) d->cancel_handler = ARG(1) ? block_copy(ARG(1)) : 0; }
void H_dispatch_source_set_timer(CPU *c) {
    DSrc *d = hostdata(ARG(0)); if (!d) return;
    uint64_t start = (uint64_t)ARG(1) | ((uint64_t)ARG(2) << 32), interval = (uint64_t)ARG(3) | ((uint64_t)ARG(4) << 32);
    double now = host_now_ms();
    double at = start == ~0ull ? 1e300 : start == 0 ? now : (double)start / 1e6;
    d->next = rt_now_ms + (at - now);
    d->interval = interval == ~0ull ? 0 : (double)interval / 1e6;
}
void H_dispatch_source_cancel(CPU *c) { DSrc *d = hostdata(ARG(0)); if (d) d->cancelled = true; }
void H_dispatch_source_testcancel(CPU *c) { DSrc *d = hostdata(ARG(0)); RET(d && d->cancelled); }
void H_dispatch_resume(CPU *c) { DSrc *d = ARG(0) ? hostdata(ARG(0)) : NULL; if (d && LD32(ARG(0)) == cls_Source && d->suspend > 0) d->suspend--; }
void H_dispatch_suspend(CPU *c) { DSrc *d = ARG(0) ? hostdata(ARG(0)) : NULL; if (d && LD32(ARG(0)) == cls_Source) d->suspend++; }
static void sources_tick(CPU *c, double now) {
    for (uint32_t i = 0; i < nsources; i++) {
        gptr s = sources[i]; DSrc *d = hostdata(s);
        if (d->cancelled) {
            if (d->cancel_handler) { gptr h = d->cancel_handler; d->cancel_handler = 0; guest_call1(c, block_invoke_addr(h), h); block_release(c, h); }
            continue;
        }
        if (!d->timer || d->suspend > 0 || !d->handler || d->next > now) continue;
        d->next = d->interval > 0 ? (d->next + d->interval > now ? d->next + d->interval : now + d->interval) : 1e300;
        guest_call1(c, block_invoke_addr(d->handler), d->handler);
        if (c->unwinding) rt_fatal(c, "exception escaped dispatch source handler");
    }
    uint32_t k = 0;
    for (uint32_t i = 0; i < nsources; i++) { DSrc *d = hostdata(sources[i]); if (d->cancelled && !d->cancel_handler) { if (d->handler) block_release(c, d->handler); objc_release_(c, sources[i]); } else sources[k++] = sources[i]; }
    nsources = k;
}

/* ------------------------------------------------------------------ Blocks runtime (Block ABI, 32-bit) */
#define BLOCK_NEEDS_FREE (1 << 24)
#define BLOCK_HAS_COPY_DISPOSE (1 << 25)
#define BLOCK_IS_GLOBAL (1 << 28)
gptr block_copy(gptr b) {
    if (!b) return 0;
    uint32_t flags = LD32(b + 4);
    if (LD32(b) == cls_GlobalBlock || (flags & BLOCK_IS_GLOBAL)) return b;
    if (flags & BLOCK_NEEDS_FREE) { ST32(b + 4, flags + 2); return b; }
    gptr desc = LD32(b + 16);
    uint32_t size = LD32(desc + 4);
    gptr n = gmalloc(size);
    memcpy(G2H(n), G2H(b), size);
    ST32(n, cls_MallocBlock);
    ST32(n + 4, (flags & ~0xfffeu) | BLOCK_NEEDS_FREE | 2);
    if (flags & BLOCK_HAS_COPY_DISPOSE) guest_call2(main_cpu, LD32(desc + 8), n, b);
    return n;
}
void block_release(CPU *c, gptr b) {
    if (!b) return;
    uint32_t flags = LD32(b + 4);
    if (!(flags & BLOCK_NEEDS_FREE)) return;
    uint32_t rc = flags & 0xfffe;
    if (rc > 2) { ST32(b + 4, flags - 2); return; }
    gptr desc = LD32(b + 16);
    if (flags & BLOCK_HAS_COPY_DISPOSE) guest_call1(c, LD32(desc + 12), b);
    gfree(b);
}
void H__Block_copy(CPU *c) { RET(block_copy(ARG(0))); }
void H__Block_release(CPU *c) { block_release(c, ARG(0)); }
/* byref: {isa, forwarding, flags, size, keep, destroy, ...} */
static gptr byref_copy(CPU *c, gptr src) {
    gptr fwd = LD32(src + 4);
    uint32_t fl = LD32(fwd + 8);
    if (fl & BLOCK_NEEDS_FREE) { ST32(fwd + 8, fl + 2); return fwd; }
    uint32_t size = LD32(src + 12);
    gptr cp = gmalloc(size);
    memcpy(G2H(cp), G2H(src), size);
    ST32(cp + 4, cp); ST32(src + 4, cp);
    ST32(cp + 8, (fl & ~0xfffeu) | BLOCK_NEEDS_FREE | 4);
    if (fl & BLOCK_HAS_COPY_DISPOSE) guest_call2(c, LD32(src + 16), cp, src);
    return cp;
}
static void byref_release(CPU *c, gptr b) {
    b = LD32(b + 4);
    uint32_t fl = LD32(b + 8);
    if (!(fl & BLOCK_NEEDS_FREE)) return;
    if ((fl & 0xfffe) > 2) { ST32(b + 8, fl - 2); return; }
    if (fl & BLOCK_HAS_COPY_DISPOSE) guest_call1(c, LD32(b + 20), b);
    gfree(b);
}
void H__Block_object_assign(CPU *c) {
    gptr dst = ARG(0), obj = ARG(1); uint32_t f = ARG(2);
    switch (f & 0x1f) {
    case 3: ST32(dst, rt_retain(c, obj)); break;              /* BLOCK_FIELD_IS_OBJECT */
    case 7: ST32(dst, block_copy(obj)); break;                /* BLOCK_FIELD_IS_BLOCK */
    case 8: case 24: ST32(dst, byref_copy(c, obj)); break;    /* BLOCK_FIELD_IS_BYREF (| WEAK) */
    case 19: case 23: ST32(dst, obj); break;                  /* weak object/block */
    default: rt_fatal(c, "_Block_object_assign flags %x", f);
    }
}
void H__Block_object_dispose(CPU *c) {
    gptr obj = ARG(0); uint32_t f = ARG(1);
    switch (f & 0x1f) {
    case 3: rt_release(c, obj); break;
    case 7: block_release(c, obj); break;
    case 8: case 24: byref_release(c, obj); break;
    case 19: case 23: break;
    default: rt_fatal(c, "_Block_object_dispose flags %x", f);
    }
}
static void bl_copy(CPU *c) { RET(block_copy(SELF)); }
static void bl_retain(CPU *c) { RET(block_copy(SELF)); }
static void bl_release(CPU *c) { block_release(c, SELF); }
static void bl_self(CPU *c) { RET(SELF); }

/* ------------------------------------------------------------------ NSDate (seconds since 2001-01-01) */
#define REF_EPOCH 978307200.0
typedef struct { double t; } DateS;
static gptr date_new(double t) { gptr d = objc_alloc_instance(cls_NSDate, 0); ((DateS *)hostdata_ensure(d, sizeof(DateS), NULL))->t = t; return objc_autorelease_(d); }
static double now_ref(void) { return host_wall_ms() / 1000.0 - REF_EPOCH; }
static void dt_date(CPU *c) { RET(date_new(now_ref())); }
static void dt_dateWithTimeIntervalSinceNow(CPU *c) { RET(date_new(now_ref() + ARGD(2))); }
static void dt_dateWithTimeIntervalSince1970(CPU *c) { RET(date_new(ARGD(2) - REF_EPOCH)); }
static void dt_distantFuture(CPU *c) { RET(date_new(63113904000.0)); }
static void dt_distantPast(CPU *c) { RET(date_new(-63114076800.0)); }
static void dt_init(CPU *c) { ((DateS *)hostdata_ensure(SELF, sizeof(DateS), NULL))->t = now_ref(); RET(SELF); }
static void dt_timeIntervalSinceReferenceDate(CPU *c) { DateS *d = hostdata(SELF); RETD(d ? d->t : 0); }
static void dt_timeIntervalSince1970(CPU *c) { DateS *d = hostdata(SELF); RETD((d ? d->t : 0) + REF_EPOCH); }
static void dt_timeIntervalSinceNow(CPU *c) { DateS *d = hostdata(SELF); RETD((d ? d->t : 0) - now_ref()); }
static void dt_timeIntervalSinceDate(CPU *c) { DateS *a = hostdata(SELF), *b = hostdata(ARG(2)); RETD((a ? a->t : 0) - (b ? b->t : 0)); }
static void dt_cmd_now(CPU *c) { RETD(now_ref()); }
void H_CFAbsoluteTimeGetCurrent(CPU *c) { RETD(now_ref()); }

void runloop_init(void) {
    cls_NSTimer = host_class("NSTimer", "NSObject", 4);
    host_cmethod(cls_NSTimer, "scheduledTimerWithTimeInterval:target:selector:userInfo:repeats:", "", tm_scheduled);
    host_cmethod(cls_NSTimer, "timerWithTimeInterval:target:selector:userInfo:repeats:", "", tm_timerWith);
    host_method(cls_NSTimer, "invalidate", "", tm_invalidate); host_method(cls_NSTimer, "isValid", "", tm_isValid);
    host_method(cls_NSTimer, "userInfo", "", tm_userInfo); host_method(cls_NSTimer, "timeInterval", "", tm_timeInterval);
    host_method(cls_NSTimer, "fire", "", tm_fire); host_method(cls_NSTimer, "dealloc", "", tm_dealloc);
    cls_NSRunLoop = host_class("NSRunLoop", "NSObject", 4);
    main_runloop = gstatic_alloc(4); ST32(main_runloop, cls_NSRunLoop);
    host_cmethod(cls_NSRunLoop, "currentRunLoop", "", rl_current); host_cmethod(cls_NSRunLoop, "mainRunLoop", "", rl_current);
    host_method(cls_NSRunLoop, "addTimer:forMode:", "", rl_addTimer); host_method(cls_NSRunLoop, "run", "", rl_run);
    host_method(cls_NSRunLoop, "runUntilDate:", "", rl_runUntilDate); host_method(cls_NSRunLoop, "runMode:beforeDate:", "", rl_runUntilDate);
    host_method(cls_NSRunLoop, "getCFRunLoop", "", rl_getCFRunLoop);
    data_import_register("_NSDefaultRunLoopMode", gstatic_alloc(4)); ST32(data_import_lookup("_NSDefaultRunLoopMode"), nsstr_static("kCFRunLoopDefaultMode"));
    data_import_register("_kCFRunLoopDefaultMode", gstatic_alloc(4)); ST32(data_import_lookup("_kCFRunLoopDefaultMode"), nsstr_static("kCFRunLoopDefaultMode"));
    data_import_register("_kCFRunLoopCommonModes", gstatic_alloc(4)); ST32(data_import_lookup("_kCFRunLoopCommonModes"), nsstr_static("kCFRunLoopCommonModes"));

    cls_StackBlock = host_class("__NSStackBlock__", "NSObject", 4);
    cls_GlobalBlock = host_class("__NSGlobalBlock__", "NSObject", 4);
    cls_MallocBlock = host_class("__NSMallocBlock__", "NSObject", 4);
    data_import_register("__NSConcreteStackBlock", cls_StackBlock);
    data_import_register("__NSConcreteGlobalBlock", cls_GlobalBlock);
    data_import_register("__NSConcreteMallocBlock", cls_MallocBlock);
    gptr bl[3] = {cls_StackBlock, cls_GlobalBlock, cls_MallocBlock};
    for (int i = 0; i < 3; i++) {
        host_method(bl[i], "copy", "", bl_copy); host_method(bl[i], "copyWithZone:", "", bl_copy); host_method(bl[i], "retain", "", bl_retain);
        host_method(bl[i], "release", "", bl_release); host_method(bl[i], "autorelease", "", bl_self);
    }
    cls_Queue = host_class("OS_dispatch_queue", "NSObject", 4);
    cls_Source = host_class("OS_dispatch_source", "NSObject", 4);
    main_queue = gstatic_alloc(4); ST32(main_queue, cls_Queue);
    global_queue = gstatic_alloc(4); ST32(global_queue, cls_Queue);
    data_import_register("__dispatch_main_q", main_queue);
    data_import_register("__dispatch_source_type_timer", gstatic_alloc(16));

    cls_NSDate = host_class("NSDate", "NSObject", 4);
    host_cmethod(cls_NSDate, "date", "", dt_date); host_cmethod(cls_NSDate, "dateWithTimeIntervalSinceNow:", "", dt_dateWithTimeIntervalSinceNow);
    host_cmethod(cls_NSDate, "dateWithTimeIntervalSince1970:", "", dt_dateWithTimeIntervalSince1970);
    host_cmethod(cls_NSDate, "distantFuture", "", dt_distantFuture); host_cmethod(cls_NSDate, "distantPast", "", dt_distantPast);
    host_cmethod(cls_NSDate, "timeIntervalSinceReferenceDate", "", dt_cmd_now);
    host_method(cls_NSDate, "init", "", dt_init); host_method(cls_NSDate, "timeIntervalSinceReferenceDate", "", dt_timeIntervalSinceReferenceDate);
    host_method(cls_NSDate, "timeIntervalSince1970", "", dt_timeIntervalSince1970); host_method(cls_NSDate, "timeIntervalSinceNow", "", dt_timeIntervalSinceNow);
    host_method(cls_NSDate, "timeIntervalSinceDate:", "", dt_timeIntervalSinceDate);
}
void sources_tick_(CPU *c, double now) { sources_tick(c, now); }

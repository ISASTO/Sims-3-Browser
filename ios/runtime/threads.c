/* threads.c — guest threads under a cooperative scheduler (DECISIONS.md D7).
 *
 * The browser gives the port one thread, so guest pthreads are run as cooperative threads on the host thread.
 * Each guest thread has its own CPU state and guest stack.  It executes the resumable (A_*) translations that the
 * recompiler emits for thread bodies (functions reachable from a thread entry that can reach a sleep/yield); a
 * thread suspends at usleep (Thread::sleep / Thread::yield) or, when its time slice is spent, after any call made
 * from a resumable frame while it holds no lock.  Suspension saves the resumable frames (innermost first) and
 * returns to the scheduler; resumption re-enters them outermost first.
 *
 * Scheduling points: every host frame (sched_run_threads, time-sliced, honouring sleep deadlines) and every sleep
 * on the main thread (the main thread cannot suspend because it is driven by the host frame callback, so its
 * sleep runs the other threads instead; their sleeps are polling delays, so they are woken early then). */
#include "rt.h"

#define MAX_THREADS 16
#define THREAD_STACK (1024 * 1024)
enum { T_FREE, T_NEW, T_READY, T_SLEEP, T_DONE };
typedef struct GThread {
    CPU cpu; int state; double wake; gptr entry, arg, stack, handle; uint32_t retval;
} GThread;
static GThread *thr[MAX_THREADS];   /* [0] = main thread (cpu not owned) */
static CPU *current;
static int in_sched;
static double slice_end;
static uint32_t preempt_tick;
uint32_t sched_switches, sched_preemptions;

void sched_init(CPU *m) { current = m; m->thread_id = 0; m->async_ok = 0; }
CPU *cur_cpu(void) { return current; }
uint32_t sched_current_thread(void) { return current ? current->thread_id : 0; }

AFrame *afr_push(CPU *c) {
    if (c->asp == c->acap) { c->acap = c->acap ? c->acap * 2 : 16; c->astack = realloc(c->astack, c->acap * sizeof(AFrame)); }
    return &c->astack[c->asp++];
}
AFrame *afr_pop(CPU *c) {
    if (!c->asp) rt_fatal(c, "resume with no saved frame");
    return &c->astack[--c->asp];
}
/* Re-enter the next saved frame (outermost first); with none left the suspension point itself completes. */
void sched_resume_inner(CPU *c) {
    if (!c->asp) { c->resuming = 0; return; }
    c->astack[c->asp - 1].fn(c);
}
int sched_should_preempt(CPU *c) {
    if (c->thread_id == 0 || c->locks || !slice_end) return 0;
    if ((++preempt_tick & 7) != 0) return 0;
    if (host_now_ms() < slice_end) return 0;
    sched_preemptions++;
    return 1;
}

static void run_thread(GThread *t) {
    CPU *prev = current, *c = &t->cpu;
    current = c;
    c->async_ok = 1;
    sched_switches++;
    if (t->state == T_NEW) {
        t->state = T_READY;
        memset(c->r, 0, sizeof c->r);
        c->r[0] = t->arg;
        c->r[13] = (t->stack + THREAD_STACK - 64) & ~15u;
        c->r[14] = 0;
        call_indirect_async(c, t->entry);
    } else {
        c->resuming = 1;
        sched_resume_inner(c);
    }
    current = prev;
    if (c->unwinding == UNWIND_SUSPEND) {
        c->unwinding = 0;
        if (t->state != T_SLEEP) t->state = T_READY;
        return;
    }
    if (c->unwinding) rt_fatal(c, "exception escaped guest thread %u (%s)", c->thread_id, rt_symbolize(t->entry));
    t->retval = c->r[0];
    t->state = T_DONE;
    c->asp = 0;
    if (rt_verbose) rt_log("thread %u (%s) finished", c->thread_id, rt_symbolize(t->entry));
}

/* Run each other live thread once.  budget_ms bounds the slice; early_wake treats sleeping threads as runnable. */
static void sched_round(double budget_ms, int early_wake) {
    if (in_sched) return;
    in_sched = 1;
    double now = host_now_ms();
    double saved_end = slice_end;
    slice_end = now + budget_ms;
    for (int i = 1; i < MAX_THREADS; i++) {
        GThread *t = thr[i];
        if (!t || t->state == T_FREE || t->state == T_DONE) continue;
        if (t->state == T_SLEEP && !early_wake && t->wake > now) continue;
        if (t->state == T_SLEEP) t->state = T_READY;
        run_thread(t);
        if (host_now_ms() >= slice_end) break;
    }
    slice_end = saved_end;
    in_sched = 0;
}
void sched_run_threads(void) { sched_round(6.0, 0); }

/* usleep / Thread::sleep / Thread::yield */
void sched_sleep_current(CPU *c, double ms) {
    if (c->thread_id == 0) {
        /* main thread: give the time to the other threads (bounded so the UI keeps updating) */
        sched_round(ms < 1 ? 1 : ms > 50 ? 50 : ms, 1);
        return;
    }
    GThread *t = thr[c->thread_id];
    if (c->async_ok && !c->resuming) {
        t->state = T_SLEEP;
        t->wake = host_now_ms() + ms;
        c->unwinding = UNWIND_SUSPEND;
        return;
    }
    static int warned;
    if (!warned++) rt_log("thread %u: sleep from a non-resumable frame (continuing without suspending)", c->thread_id);
}

void H_pthread_attr_init(CPU *c) { memset(G2H(ARG(0)), 0, 40); RET(0); }
void H_pthread_attr_destroy(CPU *c) { RET(0); }
void H_pthread_attr_setdetachstate(CPU *c) { RET(0); }
void H_pthread_mutex_lock(CPU *c) { c->locks++; RET(0); }
void H_pthread_mutex_unlock(CPU *c) { if (c->locks) c->locks--; RET(0); }
void H_pthread_create(CPU *c) {
    gptr out = ARG(0), entry = ARG(2), arg = ARG(3);
    int i = 1;
    while (i < MAX_THREADS && thr[i] && thr[i]->state != T_FREE && thr[i]->state != T_DONE) i++;
    if (i == MAX_THREADS) { rt_log("pthread_create: too many threads"); RET(35); return; }  /* EAGAIN */
    GThread *t = thr[i];
    if (!t) { t = thr[i] = calloc(1, sizeof *t); t->stack = gmalloc(THREAD_STACK); t->handle = gcalloc(1, 16); }
    AFrame *keep = t->cpu.astack; uint32_t cap = t->cpu.acap;
    memset(&t->cpu, 0, sizeof t->cpu);
    t->cpu.astack = keep; t->cpu.acap = cap;
    t->cpu.thread_id = (uint32_t)i;
    t->cpu.stack_lo = t->stack; t->cpu.stack_hi = t->stack + THREAD_STACK;
    t->entry = entry; t->arg = arg; t->state = T_NEW; t->wake = 0;
    ST32(t->handle, (uint32_t)i);
    if (out) ST32(out, t->handle);
    if (rt_verbose) rt_log("pthread_create: thread %d entry %s arg %08x", i, rt_symbolize(entry), arg);
    RET(0);
}

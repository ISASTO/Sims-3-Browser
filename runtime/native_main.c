/* native_main.c — headless driver: boot, then run N frames at 60 Hz simulated time. */
#ifndef GUEST_IDENTITY
#include "rt.h"
#include <signal.h>
#include <unistd.h>
int sims3_boot(void);
static void on_segv(int sig, siginfo_t *si, void *uc) {
    (void)uc;
    uintptr_t a = (uintptr_t)si->si_addr;
    rt_log("native: signal %d at host %p (guest %08x)", sig, si->si_addr, (unsigned)(a - (uintptr_t)guest_base));
    rt_backtrace(main_cpu);
    _exit(3);
}
int sims3_frame(double now_ms);
int main(int argc, char **argv) {
    int frames = argc > 1 ? atoi(argv[1]) : 60;
    if (getenv("SIMS3_VERBOSE")) rt_verbose = 1;
    struct sigaction sa = {0}; sa.sa_sigaction = on_segv; sa.sa_flags = SA_SIGINFO; sigaction(SIGSEGV, &sa, NULL); sigaction(SIGBUS, &sa, NULL);
    extern double native_clock_ms, native_clock_wall0;
    if (getenv("SIMS3_VIRTUAL_CLOCK")) { native_clock_wall0 = host_wall_ms(); native_clock_ms = 0; }
    if (sims3_boot()) return 1;
    /* scripted input (game points): SIMS3_INPUT="frame:x:y[:hold],frame:d:x0:y0:x1:y1:frames,..." — taps and drags */
    void sims3_touch(int type, int id, float x, float y);
    typedef struct { int at, len; float x0, y0, x1, y1; } Gest;
    Gest g[256]; int ng = 0;
    const char *in = getenv("SIMS3_INPUT");
    while (in && *in && ng < 256) {
        Gest e = {0}; int n = 0;
        if (sscanf(in, "%d:d:%f:%f:%f:%f:%d%n", &e.at, &e.x0, &e.y0, &e.x1, &e.y1, &e.len, &n) == 6) ;
        else if (sscanf(in, "%d:%f:%f:%d%n", &e.at, &e.x0, &e.y0, &e.len, &n) == 4) { e.x1 = e.x0; e.y1 = e.y0; }
        else if (sscanf(in, "%d:%f:%f%n", &e.at, &e.x0, &e.y0, &n) == 3) { e.len = 4; e.x1 = e.x0; e.y1 = e.y0; }
        else break;
        g[ng++] = e; in += n; if (*in == ',') in++;
    }
    /* SIMS3_TEXT="frame:text" types text + Return into the most recently shown text field */
    extern gptr native_last_textfield;
    void sims3_text_event(uint32_t view, int kind, const char *utf8);
    int text_at = -1; char text_val[128] = "";
    if (getenv("SIMS3_TEXT")) sscanf(getenv("SIMS3_TEXT"), "%d:%127[^\n]", &text_at, text_val);
    double t = host_now_ms();
    if (native_clock_ms >= 0) t = native_clock_ms;
    for (int i = 0; i < frames; i++) {
        for (int k = 0; k < ng; k++) {
            Gest *e = &g[k];
            if (i < e->at || i > e->at + e->len) continue;
            float f = e->len ? (float)(i - e->at) / (float)e->len : 1, x = e->x0 + (e->x1 - e->x0) * f, y = e->y0 + (e->y1 - e->y0) * f;
            if (i == e->at) { rt_log("native: touch (%.0f,%.0f) at frame %d", x, y, i); sims3_touch(0, 1, x, y); }
            else if (i == e->at + e->len) sims3_touch(2, 1, x, y);
            else if (e->x1 != e->x0 || e->y1 != e->y0) sims3_touch(1, 1, x, y);
        }
        if (i == text_at) { rt_log("native: text '%s' -> field %08x", text_val, native_last_textfield); sims3_text_event(native_last_textfield, 1, text_val); }
        if (getenv("SIMS3_REALTIME")) { double now = host_now_ms(); if (t + 1000.0 / 60.0 > now) usleep((useconds_t)((t + 1000.0 / 60.0 - now) * 1000)); t = host_now_ms(); }
        else t += 1000.0 / 60.0;
        if (native_clock_ms >= 0) native_clock_ms = t;
        if (sims3_frame(t) != 2) break;
    }
    rt_log("native: ran %d frames", frames);
    return 0;
}
#endif

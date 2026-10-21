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
    if (sims3_boot()) return 1;
    double t = host_now_ms();
    for (int i = 0; i < frames; i++) { t += 1000.0 / 60.0; if (sims3_frame(t) != 2) break; }
    rt_log("native: ran %d frames", frames);
    return 0;
}
#endif

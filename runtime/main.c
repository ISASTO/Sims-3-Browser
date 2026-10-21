/* main.c — boot sequence and the host-facing entry points (exported to JS in the wasm build). */
#include "rt.h"
#include "image_manifest.h"

CPU *main_cpu;
uint32_t ui_sp_base;
double rt_now_ms;
static gptr main_stack;
#define MAIN_STACK_SIZE (2u << 20)

void image_bind(void);
void libc_init(void);
void hle_init_modules(void);
void objc_rt_init(void);
int boot_state;   /* 0 = not booted, 1 = inside main, 2 = run loop active, 3 = dead */

__attribute__((export_name("sims3_boot")))
int sims3_boot(void) {
    static CPU mc;
    main_cpu = &mc;
    mem_init();
    vfs_init();
    dispatch_init();
    objc_rt_init();
    libc_init();
    hle_init_modules();        /* host classes + data imports */
    image_load();
    image_bind();
    main_stack = gmalloc(MAIN_STACK_SIZE);
    mc.stack_lo = main_stack; mc.stack_hi = main_stack + MAIN_STACK_SIZE;
    mc.r[13] = (main_stack + MAIN_STACK_SIZE - 64) & ~15u;
    sched_init(&mc);
    rt_now_ms = host_now_ms();
    objc_rt_load_image(&mc);
    /* C++ static initializers */
    for (uint32_t k = 0; k < img_sec_mod_init_size / 4; k++) {
        gptr f = LD32(img_sec_mod_init + 4 * k);
        if (rt_verbose) rt_log("init: %s", rt_symbolize(f));
        guest_call0(&mc, f);
        if (mc.unwinding) rt_fatal(&mc, "exception escaped static initializer %s", rt_symbolize(f));
    }
    /* main(argc, argv, envp, apple) */
    gptr argv = gcalloc(4, 4), envp = gcalloc(1, 4), apple = gcalloc(2, 4);
    ST32(argv, gstatic_str("/app/sims3_iphone.app/sims3_iphone"));
    ST32(apple, gstatic_str("executable_path=/app/sims3_iphone.app/sims3_iphone"));
    boot_state = 1;
    rt_log("boot: calling main at %s", rt_symbolize(img_entry));
    uint32_t args[4] = {1, argv, envp, apple};
    guest_call(&mc, img_entry, 4, args);
    if (boot_state == 2) {
        /* UIApplicationMain detached into the host run loop (see uikit.c); clear the escape */
        mc.unwinding = 0; mc.unwind_target = 0;
        rt_log("boot: entered run loop (guest sp base %08x)", ui_sp_base);
        return 0;
    }
    rt_log("boot: main returned without entering the run loop");
    boot_state = 3;
    return 1;
}

static uint64_t frames;
__attribute__((export_name("sims3_frame")))
int sims3_frame(double now_ms) {
    if (boot_state != 2) return boot_state;
    rt_now_ms = now_ms;
    CPU *c = main_cpu;
    c->r[13] = ui_sp_base;
    runloop_tick(c, now_ms);
    sched_run_threads();
    frames++;
    return 2;
}

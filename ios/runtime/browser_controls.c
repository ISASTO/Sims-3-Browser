/* Browser controls for the hash-verified iOS 1.4.16 image. Wheel zoom reads the original slider;
 * the optional content cheat calls the original pack loader and settings writer. */
#include "rt.h"

extern int boot_state;
extern float dev_scale;
int ui_app_state(void);
int browser_content_unlocked;
static int unlock_requested, unlock_status;
static double orbit_deadline;
__attribute__((export_name("sims3_orbit_hint")))
void sims3_orbit_hint(int enabled) { orbit_deadline = enabled ? host_now_ms() + 500 : 0; }

/* The first click stays immediate. If it opened an object menu, a subsequent double-press orbit
 * dismisses that root menu through its original Back action before the original two-finger begin. */
void browser_prepare_orbit(CPU *c) {
    if (!orbit_deadline) return;
    if (host_now_ms() > orbit_deadline) { orbit_deadline = 0; return; }
    if (c->r[1] != 8) return;
    orbit_deadline = 0;
    gptr scene = c->r[0];
    if (LD32(scene + 0x1ec) == 6 && LD8(scene + 0x636) && !LD8(scene + 0x637) &&
        !LD8(scene + 0x680) && !LD8(scene + 0x244))
        guest_call1(c, image_symbol("__ZN9SceneGame22processContextMenuBackEv"), scene);
}

static gptr engine(void) {
    static gptr slot;
    if (boot_state != 2 || ui_app_state() != 1) return 0;
    if (!slot) slot = image_symbol("__ZL18AppEngine_instance");
    return slot ? LD32(slot) : 0;
}
static gptr scene_game(gptr app) {
    /* AppEngine::getSceneGame, 0x26de6. */
    return app && LD32(app + 0x4f8) == 2 ? LD32(app + 0x48) : 0;
}

/* Accelerate live simulation, including sleep/actions; keep loading, pause and modal UI at 1x. */
__attribute__((export_name("sims3_speed_available")))
int sims3_speed_available(void) {
    gptr scene = scene_game(engine());
    return scene && LD32(scene + 0x2c) && LD32(scene + 0x1ec) == 6 &&
        !LD8(scene + 0x680) && !LD8(scene + 0x208) && !LD8(scene + 0x636) && !LD8(scene + 0x244);
}

__attribute__((export_name("sims3_zoom_bar")))
gptr sims3_zoom_bar(void) {
    gptr scene = scene_game(engine());
    if (!scene) return 0;
    uint32_t state = LD32(scene + 0x1ec), camera = LD32(scene + 0x2c0);
    /* Normal world/build routes only; never turn menu scrolling into a game tap. */
    if ((state != 6 && state != 7) || LD8(scene + 0x680) || LD8(scene + 0x208) ||
        LD8(scene + 0x636) || LD8(scene + 0x244) || (camera >= 2 && camera <= 4) ||
        !(LD8(scene + 0xa60) & 0x10)) return 0;
    gptr world = LD32(scene + 0x2c);
    float top = (int32_t)LD32(scene + 0x270), height = (int32_t)LD32(scene + 0x274);
    if (!world || height <= 0 || dev_scale <= 0) return 0;
    /* renderHUDZoomBar 0x46aac and processInputCameraNavigation 0x47038 share these limits. */
    int map = LD32(scene + 0x204) == 2;
    float near = map ? 800.f : 200.f, far = map ? 1800.f : 750.f;
    float distance = U2F(LD32(world + 0x48c));
    if (!isfinite(distance)) return 0;
    float t = fmaxf(0, fminf(1, (distance - near) / (far - near)));
    float x = (int32_t)LD32(scene + 0x260) + ((int32_t)LD32(scene + 0x268) >> 1);
    static gptr info;
    if (!info) info = gstatic_alloc(24);
    ST32(info, F2U(x / dev_scale));
    ST32(info + 4, F2U((top + height * t) / dev_scale));
    ST32(info + 8, F2U(top / dev_scale));
    ST32(info + 12, F2U((top + height) / dev_scale));
    ST32(info + 16, F2U(distance));
    ST32(info + 20, scene);
    return info;
}

__attribute__((export_name("sims3_content_mode")))
void sims3_content_mode(int enabled) { browser_content_unlocked = !!enabled; }

__attribute__((export_name("sims3_unlock_all")))
int sims3_unlock_all(void) {
    gptr scene = scene_game(engine());
    if (!scene || !LD32(scene + 0x2c) || LD32(scene + 0x1ec) != 6) return 0;
    unlock_requested = 1; unlock_status = 1;
    return 1;
}
__attribute__((export_name("sims3_unlock_status")))
int sims3_unlock_status(void) { return unlock_status; }

void browser_controls_tick(CPU *c) {
    if (!unlock_requested) return;
    unlock_requested = 0;
    gptr app = engine(), scene = scene_game(app);
    if (!scene || !LD32(scene + 0x2c) || LD32(scene + 0x1ec) != 6) { unlock_status = -1; return; }
    gptr manager = guest_call0(c, image_symbol("__ZN10DLCManager11getInstanceEv"));
    /* loadPack's recovered dispatch supports 1..14 and 16; 15 is absent from this IPA. */
    gptr unlock = image_symbol("__ZN10DLCManager9unlockDLCE3DLC");
    for (int pack = 1; pack <= 16; pack++) if (pack != 15) guest_call2(c, unlock, manager, pack);
    if (c->unwinding) rt_fatal(c, "exception escaped content unlock");
    if (LD32(manager + 0x2c) != 15) { unlock_status = -2; return; }
    guest_call1(c, image_symbol("__ZN9AppEngine11unlockBonusEv"), app);
    if (c->unwinding) rt_fatal(c, "exception escaped bonus unlock");
    browser_content_unlocked = 1;
    unlock_status = 2;
}

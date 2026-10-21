/* uikit.c — UIKit/QuartzCore/OpenGLES(EAGL) host classes and UIApplicationMain.
 * Virtual device (DECISIONS.md D9): iPhone 6 class, iOS 9.3, landscape, 667x375 points @2x = 1334x750 px.
 * View geometry is kept in hostdata; the browser host composites the GL view and simple UIKit overlays. */
#include "rt.h"

gptr rt_retain(CPU *c, gptr obj);
void rt_release(CPU *c, gptr obj);
void objc_destroy_instance(gptr obj);
void nc_post_name(CPU *c, const char *name);
extern int boot_state;
extern gptr cls_NSObject;
uint32_t host_ui_event(int kind, gptr view, const char *arg, float x, float y, float w, float h);
bool objc_own_imp_any(gptr obj, const char *sel);

/* ------------------------------------------------------------------ device configuration */
float dev_w_pt = 667, dev_h_pt = 375, dev_scale = 2;
static const char *dev_model = "iPhone", *dev_machine = "iPhone7,2", *dev_sys = "9.3.5";
static int dev_idiom = 0;
void uikit_configure(int w_pt, int h_pt, float scale, int idiom) { dev_w_pt = (float)w_pt; dev_h_pt = (float)h_pt; dev_scale = scale; dev_idiom = idiom; if (idiom == 1) { dev_model = "iPad"; dev_machine = "iPad3,4"; } }

static void ret_rect(CPU *c, gptr sret, float x, float y, float w, float h) { UNUSED(c); ST32(sret, F2U(x)); ST32(sret + 4, F2U(y)); ST32(sret + 8, F2U(w)); ST32(sret + 12, F2U(h)); }

/* ------------------------------------------------------------------ classes */
static gptr cls_UIScreen, cls_UIDevice, cls_UIApplication, cls_UIResponder, cls_UIView, cls_UIWindow, cls_UIVC, cls_CALayer,
            cls_CAEAGLLayer, cls_EAGLContext, cls_UIColor, cls_UITouch, cls_UIEvent, cls_UIImage, cls_UIImageView, cls_UIAlertView;
static gptr screen_obj, device_obj, app_obj, app_delegate, key_window, current_context;

/* ------------------------------------------------------------------ UIScreen / UIDevice */
static void sc_mainScreen(CPU *c) { RET(screen_obj); }
static void sc_screens(CPU *c) { RET(nsarray_new(&screen_obj, 1, false, false)); }
static void sc_bounds(CPU *c) { ret_rect(c, ARG(0), 0, 0, dev_w_pt, dev_h_pt); }
static void sc_nativeBounds(CPU *c) { ret_rect(c, ARG(0), 0, 0, dev_h_pt * dev_scale, dev_w_pt * dev_scale); }
static void sc_applicationFrame(CPU *c) { ret_rect(c, ARG(0), 0, 0, dev_w_pt, dev_h_pt); }
static void sc_scale(CPU *c) { RETF(dev_scale); }
static void sc_brightness(CPU *c) { RETF(0.5f); }
static void dv_currentDevice(CPU *c) { RET(device_obj); }
static void dv_model(CPU *c) { RET(nsstr(dev_model)); }
static void dv_systemVersion(CPU *c) { RET(nsstr(dev_sys)); }
static void dv_systemName(CPU *c) { RET(nsstr("iPhone OS")); }
static void dv_name(CPU *c) { RET(nsstr("Browser")); }
static void dv_idiom(CPU *c) { RET(dev_idiom); }
static void dv_orientation(CPU *c) { RET(3); /* UIDeviceOrientationLandscapeLeft */ }
static void dv_identifierForVendor(CPU *c) { RET(objc_autorelease_(objc_alloc_instance(objc_class_named("NSUUID"), 0))); }
static void dv_multitasking(CPU *c) { RET(1); }
static void dv_noop(CPU *c) { UNUSED(c); }
static void dv_batteryLevel(CPU *c) { RETF(1.0f); }
static void dv_batteryState(CPU *c) { RET(3); }
const char *dev_machine_name(void) { return dev_machine; }

/* ------------------------------------------------------------------ UIView (geometry + hierarchy in hostdata) */
typedef struct View {
    float x, y, w, h;           /* frame (points, superview coordinates) */
    float bx, by;               /* bounds origin */
    float scale, alpha;
    gptr superview, layer, image, bg;
    gptr *sub; uint32_t nsub, capsub;
    bool hidden, opaque, multitouch, user_interaction;
    uint32_t tag, host_id;
    gptr center_x_to, center_y_to;   /* NSLayoutConstraint centerX/centerY equal to another view (nib) */
} View;
static View *V(gptr v) { View *s = hostdata(v); if (!s) { s = hostdata_ensure(v, sizeof(View), NULL); s->scale = 1; s->alpha = 1; s->user_interaction = true; } return s; }
static gptr make_layer(CPU *c, gptr view);
static void vw_initWithFrame(CPU *c) {
    View *s = V(SELF);
    s->x = U2F(ARG(2)); s->y = U2F(ARG(3)); s->w = U2F(LD32(c->r[13])); s->h = U2F(LD32(c->r[13] + 4));
    RET(SELF);
}
static void vw_init(CPU *c) { V(SELF); RET(SELF); }
static void vw_initWithCoder(CPU *c) { V(SELF); RET(SELF); }
static void vw_dealloc(CPU *c) { View *s = hostdata(SELF); if (s) { for (uint32_t i = 0; i < s->nsub; i++) rt_release(c, s->sub[i]); free(s->sub); if (s->host_id) host_ui_event(2, SELF, NULL, 0, 0, 0, 0); } objc_destroy_instance(SELF); }
static void vw_frame(CPU *c) { View *s = V(ARG(1)); ret_rect(c, ARG(0), s->x, s->y, s->w, s->h); }
static void vw_bounds(CPU *c) { View *s = V(ARG(1)); ret_rect(c, ARG(0), s->bx, s->by, s->w, s->h); }
static void vw_center(CPU *c) { View *s = V(SELF); RET64((uint64_t)F2U(s->x + s->w / 2) | ((uint64_t)F2U(s->y + s->h / 2) << 32)); }
static void sync_host(gptr v);
static void vw_setFrame(CPU *c) { View *s = V(SELF); s->x = U2F(ARG(2)); s->y = U2F(ARG(3)); s->w = U2F(LD32(c->r[13])); s->h = U2F(LD32(c->r[13] + 4)); sync_host(SELF); }
static void vw_setBounds(CPU *c) { View *s = V(SELF); float cx = s->x + s->w / 2, cy = s->y + s->h / 2; s->bx = U2F(ARG(2)); s->by = U2F(ARG(3)); s->w = U2F(LD32(c->r[13])); s->h = U2F(LD32(c->r[13] + 4)); s->x = cx - s->w / 2; s->y = cy - s->h / 2; sync_host(SELF); }
static void vw_setCenter(CPU *c) { View *s = V(SELF); float cx = U2F(ARG(2)), cy = U2F(ARG(3)); s->x = cx - s->w / 2; s->y = cy - s->h / 2; sync_host(SELF); }
static void vw_addSubview(CPU *c) {
    View *s = V(SELF); gptr sub = ARG(2);
    View *t = V(sub);
    if (t->superview) { View *o = V(t->superview); for (uint32_t i = 0; i < o->nsub; i++) if (o->sub[i] == sub) { memmove(o->sub + i, o->sub + i + 1, (o->nsub - i - 1) * 4); o->nsub--; break; } }
    else rt_retain(c, sub);
    t->superview = SELF;
    if (s->nsub == s->capsub) { s->capsub = s->capsub ? s->capsub * 2 : 4; s->sub = realloc(s->sub, s->capsub * 4); }
    s->sub[s->nsub++] = sub;
    sync_host(sub);
    if (responds(sub, "didMoveToSuperview")) msg(c, sub, "didMoveToSuperview", 0);
}
static void vw_removeFromSuperview(CPU *c) {
    View *t = V(SELF);
    if (!t->superview) return;
    View *o = V(t->superview);
    for (uint32_t i = 0; i < o->nsub; i++) if (o->sub[i] == SELF) { memmove(o->sub + i, o->sub + i + 1, (o->nsub - i - 1) * 4); o->nsub--; break; }
    t->superview = 0;
    if (t->host_id) host_ui_event(2, SELF, NULL, 0, 0, 0, 0), t->host_id = 0;
    rt_release(c, SELF);
}
static void vw_bringSubviewToFront(CPU *c) { View *s = V(SELF); for (uint32_t i = 0; i < s->nsub; i++) if (s->sub[i] == ARG(2)) { memmove(s->sub + i, s->sub + i + 1, (s->nsub - i - 1) * 4); s->sub[s->nsub - 1] = ARG(2); break; } sync_host(ARG(2)); }
static void vw_subviews(CPU *c) { View *s = V(SELF); RET(nsarray_new(s->sub, s->nsub, false, false)); }
static void vw_superview(CPU *c) { RET(V(SELF)->superview); }
static void vw_window(CPU *c) { gptr v = SELF; while (v && !objc_is_kind_of(v, cls_UIWindow)) v = V(v)->superview; RET(v); }
static void vw_layer(CPU *c) { View *s = V(SELF); if (!s->layer) s->layer = make_layer(c, SELF); RET(s->layer); }
static void vw_setContentScaleFactor(CPU *c) { V(SELF)->scale = U2F(ARG(2)); }
static void vw_contentScaleFactor(CPU *c) { RETF(V(SELF)->scale); }
static void vw_setHidden(CPU *c) { V(SELF)->hidden = ARG(2) & 0xff; sync_host(SELF); }
static void vw_isHidden(CPU *c) { RET(V(SELF)->hidden); }
static void vw_setAlpha(CPU *c) { V(SELF)->alpha = U2F(ARG(2)); sync_host(SELF); }
static void vw_alpha(CPU *c) { RETF(V(SELF)->alpha); }
static void vw_setOpaque(CPU *c) { V(SELF)->opaque = ARG(2) & 0xff; }
static void vw_setMultipleTouchEnabled(CPU *c) { V(SELF)->multitouch = ARG(2) & 0xff; }
static void vw_setUserInteractionEnabled(CPU *c) { V(SELF)->user_interaction = ARG(2) & 0xff; }
static void vw_setBackgroundColor(CPU *c) { View *s = V(SELF); gptr o = s->bg; s->bg = rt_retain(c, ARG(2)); rt_release(c, o); sync_host(SELF); }
static void vw_setTag(CPU *c) { V(SELF)->tag = ARG(2); }
static void vw_tag(CPU *c) { RET(V(SELF)->tag); }
static void vw_viewWithTag(CPU *c) { View *s = V(SELF); if (s->tag == ARG(2)) { RET(SELF); return; } for (uint32_t i = 0; i < s->nsub; i++) { gptr r = msg(c, s->sub[i], "viewWithTag:", 1, ARG(2)); if (r) { RET(r); return; } } RET(0); }
static void vw_noop(CPU *c) { UNUSED(c); }
static void vw_layoutIfNeeded(CPU *c) { msg(c, SELF, "layoutSubviews", 0); }
static void vw_sizeToFit(CPU *c) { UNUSED(c); }
static void vw_isMultipleTouchEnabled(CPU *c) { RET(V(SELF)->multitouch); }

/* layers */
typedef struct { gptr view, props; bool opaque; } Layer;
static gptr make_layer(CPU *c, gptr view) {
    gptr cls = cls_CALayer;
    gptr vc = LD32(view);
    gptr lc = msg(c, vc, "layerClass", 0);
    if (lc) cls = lc;
    gptr l = objc_alloc_instance(cls, 0);
    Layer *s = hostdata_ensure(l, sizeof(Layer), NULL); s->view = view;
    return l;
}
static void vw_layerClass(CPU *c) { RET(cls_CALayer); }
static void ly_setOpaque(CPU *c) { ((Layer *)hostdata_ensure(SELF, sizeof(Layer), NULL))->opaque = ARG(2) & 0xff; }
static void ly_setDrawableProperties(CPU *c) { Layer *s = hostdata_ensure(SELF, sizeof(Layer), NULL); gptr o = s->props; s->props = rt_retain(c, ARG(2)); rt_release(c, o); }
static void ly_drawableProperties(CPU *c) { Layer *s = hostdata(SELF); RET(s ? s->props : 0); }
static void ly_bounds(CPU *c) { Layer *s = hostdata(ARG(1)); if (s && s->view) { View *v = V(s->view); ret_rect(c, ARG(0), 0, 0, v->w, v->h); } else ret_rect(c, ARG(0), 0, 0, 0, 0); }
static void ly_contentsScale(CPU *c) { Layer *s = hostdata(SELF); RETF(s && s->view ? V(s->view)->scale : 1); }

/* ------------------------------------------------------------------ host overlay sync (UIImageView etc. shown as DOM overlays) */
static void abs_frame(gptr v, float *x, float *y) { *x = 0; *y = 0; while (v) { View *s = V(v); *x += s->x - s->bx; *y += s->y - s->by; v = s->superview; } }
static bool in_window(gptr v) { while (v) { if (v == key_window) return true; v = V(v)->superview; } return false; }
static void apply_constraints(View *s) {
    if (s->center_x_to && s->center_x_to == s->superview) { View *p = V(s->superview); s->x = (p->w - s->w) / 2; }
    if (s->center_y_to && s->center_y_to == s->superview) { View *p = V(s->superview); s->y = (p->h - s->h) / 2; }
}
void uikit_add_center_constraint(gptr item, gptr to, int attr) { View *s = V(item); if (attr == 9) s->center_x_to = to; else s->center_y_to = to; }
void uikit_view_set_geometry(gptr view, float cx, float cy, float w, float h) { View *s = V(view); s->w = w; s->h = h; s->x = cx - w / 2; s->y = cy - h / 2; }
void uikit_view_set_image(gptr view, gptr image) { V(view)->image = objc_retain_(image); }
static void sync_host(gptr v) {
    View *s = hostdata(v);
    if (!s || !in_window(v)) return;
    apply_constraints(s);
    float x, y; abs_frame(v, &x, &y);
    x += V(v)->bx; y += V(v)->by;
    bool eagl = objc_is_kind_of(v, objc_class_named("EAGLView"));
    if (s->image) { const char *name = (const char *)hostdata(s->image); s->host_id = host_ui_event(1, v, name ? name : "", x, y, s->w, s->h); }
    else if (eagl) s->host_id = host_ui_event(3, v, NULL, x, y, s->w, s->h);
    else if (s->bg && s->nsub) s->host_id = host_ui_event(4, v, NULL, x, y, s->w, s->h);
    if (s->host_id) host_ui_event(5, v, s->hidden ? "hidden" : "visible", s->alpha, 0, 0, 0);
    for (uint32_t i = 0; i < s->nsub; i++) sync_host(s->sub[i]);
}

/* ------------------------------------------------------------------ UIWindow / UIViewController / UIResponder */
typedef struct { gptr root; } Win;
static void wn_makeKeyAndVisible(CPU *c) { key_window = SELF; rt_retain(c, SELF); sync_host(SELF); }
static void wn_setRootViewController(CPU *c) {
    Win *w = hostdata_ensure(SELF, sizeof(Win) + sizeof(View), NULL); UNUSED(w);
    gptr vc = ARG(2);
    static gptr root; root = vc; rt_retain(c, vc);
    gptr view = msg(c, vc, "view", 0);
    if (view) {
        View *s = V(view);
        s->x = 0; s->y = 0; s->w = dev_w_pt; s->h = dev_h_pt;
        CPU t = *c; t.r[0] = SELF; t.r[2] = view; vw_addSubview(&t);
    }
}
static gptr window_root;
static void wn_rootViewController(CPU *c) { RET(window_root); }
static void wn_setRootVC(CPU *c) { window_root = ARG(2); wn_setRootViewController(c); }
static void wn_keyWindow(CPU *c) { RET(key_window); }
typedef struct { gptr view; } VC;
static void vc_init(CPU *c) { hostdata_ensure(SELF, sizeof(VC), NULL); RET(SELF); }
static void vc_view(CPU *c) {
    VC *s = hostdata_ensure(SELF, sizeof(VC), NULL);
    if (!s->view) {
        if (objc_own_imp_any(SELF, "loadView")) msg(c, SELF, "loadView", 0);
        if (!s->view) { gptr v = objc_alloc_instance(cls_UIView, 0); View *vv = V(v); vv->w = dev_w_pt; vv->h = dev_h_pt; s->view = v; }
        if (responds(SELF, "viewDidLoad")) msg(c, SELF, "viewDidLoad", 0);
    }
    RET(s->view);
}
static void vc_setView(CPU *c) { VC *s = hostdata_ensure(SELF, sizeof(VC), NULL); gptr o = s->view; s->view = rt_retain(c, ARG(2)); rt_release(c, o); }
static void vc_isViewLoaded(CPU *c) { VC *s = hostdata(SELF); RET(s && s->view); }
static void vc_supportedInterfaceOrientations(CPU *c) { RET(0x18); }
static void vc_yes(CPU *c) { RET(1); }
static void vc_no(CPU *c) { RET(0); }
static void rs_true(CPU *c) { RET(1); }
static void rs_nextResponder(CPU *c) { RET(0); }

/* ------------------------------------------------------------------ UIApplication + UIApplicationMain */
static void ap_shared(CPU *c) { RET(app_obj); }
static void ap_delegate(CPU *c) { RET(app_delegate); }
static void ap_setDelegate(CPU *c) { app_delegate = ARG(2); }
static void ap_noop(CPU *c) { UNUSED(c); }
static void ap_statusBarOrientation(CPU *c) { RET(4); /* UIInterfaceOrientationLandscapeLeft */ }
static void ap_keyWindow(CPU *c) { RET(key_window); }
static void ap_windows(CPU *c) { RET(key_window ? nsarray_new(&key_window, 1, false, false) : nsarray_new(NULL, 0, false, false)); }
static void ap_applicationState(CPU *c) { RET(0); }
static void ap_openURL(CPU *c) { rt_log("UIApplication openURL: %s (opening external URLs is not performed)", nsstr_cstr(msg(c, ARG(2), "absoluteString", 0))); RET(0); }
static void ap_canOpenURL(CPU *c) { RET(0); }
static void ap_beginBackgroundTask(CPU *c) { static uint32_t k; RET(++k); }
static void ap_badge(CPU *c) { RET(0); }
static void ap_isRegistered(CPU *c) { RET(0); }
static void ap_supportedOrientations(CPU *c) { RET(0x18); }

void H_UIApplicationMain(CPU *c) {
    gptr del_name = ARG(3);
    app_obj = objc_alloc_instance(cls_UIApplication, 0);
    objc_retain_(app_obj);
    if (del_name) {
        gptr cls = objc_class_named(nsstr_cstr(del_name));
        if (!cls) rt_fatal(c, "UIApplicationMain: delegate class %s not found", nsstr_cstr(del_name));
        app_delegate = msg(c, msg(c, cls, "alloc", 0), "init", 0);
    }
    rt_log("UIApplicationMain: delegate %s", objc_obj_class_name(app_delegate));
    gptr opts = 0;
    if (responds(app_delegate, "application:willFinishLaunchingWithOptions:")) msg(c, app_delegate, "application:willFinishLaunchingWithOptions:", 2, app_obj, opts);
    if (responds(app_delegate, "application:didFinishLaunchingWithOptions:")) msg(c, app_delegate, "application:didFinishLaunchingWithOptions:", 2, app_obj, opts);
    else if (responds(app_delegate, "applicationDidFinishLaunching:")) msg(c, app_delegate, "applicationDidFinishLaunching:", 1, app_obj);
    nc_post_name(c, "UIApplicationDidFinishLaunchingNotification");
    if (responds(app_delegate, "applicationDidBecomeActive:")) msg(c, app_delegate, "applicationDidBecomeActive:", 1, app_obj);
    nc_post_name(c, "UIApplicationDidBecomeActiveNotification");
    /* Detach into the host-driven run loop: UIApplicationMain never returns on iOS. Callbacks will run on the
     * guest stack below this frame; we leave the guest frames above intact and escape to the host. */
    ui_sp_base = (c->r[13] - 256) & ~15u;
    boot_state = 2;
    c->unwinding = 1; c->unwind_target = 0;
}

/* lifecycle events from the host (focus/visibility) */
static void app_event(CPU *c, const char *sel, const char *note) {
    if (app_delegate && responds(app_delegate, sel)) msg(c, app_delegate, sel, 1, app_obj);
    nc_post_name(c, note);
}
void uikit_lifecycle(CPU *c, int active) {
    if (active) app_event(c, "applicationDidBecomeActive:", "UIApplicationDidBecomeActiveNotification");
    else app_event(c, "applicationWillResignActive:", "UIApplicationWillResignActiveNotification");
}
/* host lifecycle requests are queued and delivered on the next frame:
 * 0 resign active (window lost focus), 1 become active, 2 enter background (page hidden), 3 return to foreground */
static int lc_queue[8], lc_n, app_state = 1;   /* 1 active, 0 inactive, -1 background */
__attribute__((export_name("sims3_lifecycle")))
void sims3_lifecycle(int kind) { if (lc_n < 8) lc_queue[lc_n++] = kind; }
void ha_suspend(int suspended);
void ui_dispatch_lifecycle(CPU *c) {
    for (int i = 0; i < lc_n; i++) {
        int k = lc_queue[i];
        if ((k == 0 || k == 2) && app_state == 1) { app_event(c, "applicationWillResignActive:", "UIApplicationWillResignActiveNotification"); app_state = 0; }
        if (k == 2 && app_state == 0) { app_event(c, "applicationDidEnterBackground:", "UIApplicationDidEnterBackgroundNotification"); app_state = -1; ha_suspend(1); }
        if ((k == 1 || k == 3) && app_state == -1) { ha_suspend(0); app_event(c, "applicationWillEnterForeground:", "UIApplicationWillEnterForegroundNotification"); app_state = 0; }
        if ((k == 1 || k == 3) && app_state == 0) { app_event(c, "applicationDidBecomeActive:", "UIApplicationDidBecomeActiveNotification"); app_state = 1; }
        if (c->unwinding) rt_fatal(c, "exception escaped lifecycle handler");
    }
    lc_n = 0;
}
int ui_app_state(void) { return app_state; }

/* ------------------------------------------------------------------ touches */
typedef struct { float x, y, px, py; uint32_t phase, taps; gptr view; double ts; } TouchS;
#define MAXT 10
typedef struct { int type; int id; float x, y; } InEv;
static InEv *inq; static uint32_t ninq, capinq;
static gptr touch_objs[MAXT];
static int touch_ids[MAXT];
__attribute__((export_name("sims3_touch")))
void sims3_touch(int type, int id, float x, float y) {
    if (ninq == capinq) { capinq = capinq ? capinq * 2 : 64; inq = realloc(inq, capinq * sizeof(InEv)); }
    InEv e = {type, id, x, y}; inq[ninq++] = e;
}
static gptr find_touch_view(void) {
    /* topmost user-interaction-enabled descendant of the key window that implements touchesBegan:withEvent: (the EAGLView) */
    gptr eagl = objc_class_named("EAGLView");
    gptr stack[64]; int n = 0; if (key_window) stack[n++] = key_window;
    gptr best = 0;
    while (n) { gptr v = stack[--n]; View *s = V(v); if (s->hidden) continue; if (objc_is_kind_of(v, eagl)) best = v; for (uint32_t i = 0; i < s->nsub && n < 63; i++) stack[n++] = s->sub[i]; }
    return best;
}
void ui_dispatch_input(CPU *c) {
    if (!ninq) return;
    gptr view = find_touch_view();
    for (uint32_t k = 0; k < ninq; k++) {
        InEv e = inq[k];
        int slot = -1;
        for (int i = 0; i < MAXT; i++) if (touch_objs[i] && touch_ids[i] == e.id) slot = i;
        if (e.type == 0) {
            if (slot < 0) for (int i = 0; i < MAXT; i++) if (!touch_objs[i]) { slot = i; break; }
            if (slot < 0) continue;
            gptr t = objc_alloc_instance(cls_UITouch, 0);
            TouchS *s = hostdata_ensure(t, sizeof(TouchS), NULL);
            s->x = s->px = e.x; s->y = s->py = e.y; s->phase = 0; s->taps = 1; s->view = view; s->ts = rt_now_ms;
            touch_objs[slot] = t; touch_ids[slot] = e.id;
        } else if (slot < 0) continue;
        gptr t = touch_objs[slot];
        TouchS *s = hostdata(t);
        if (e.type != 0) { s->px = s->x; s->py = s->y; s->x = e.x; s->y = e.y; s->phase = e.type == 1 ? 1 : e.type == 2 ? 3 : 4; }
        if (!view) continue;
        gptr set = msg(c, objc_class_named("NSSet"), "setWithObject:", 1, t);
        gptr ev = objc_autorelease_(objc_alloc_instance(cls_UIEvent, 0));
        const char *sel = e.type == 0 ? "touchesBegan:withEvent:" : e.type == 1 ? "touchesMoved:withEvent:" : e.type == 2 ? "touchesEnded:withEvent:" : "touchesCancelled:withEvent:";
        msg(c, view, sel, 2, set, ev);
        if (c->unwinding) rt_fatal(c, "exception escaped touch handler");
        if (e.type >= 2) { objc_release_(c, t); touch_objs[slot] = 0; }
    }
    ninq = 0;
}
static void tc_locationInView(CPU *c) { TouchS *s = hostdata(ARG(1)); ST32(ARG(0), F2U(s->x)); ST32(ARG(0) + 4, F2U(s->y)); }
static void tc_previousLocationInView(CPU *c) { TouchS *s = hostdata(ARG(1)); ST32(ARG(0), F2U(s->px)); ST32(ARG(0) + 4, F2U(s->py)); }
static void tc_tapCount(CPU *c) { TouchS *s = hostdata(SELF); RET(s ? s->taps : 1); }
static void tc_phase(CPU *c) { TouchS *s = hostdata(SELF); RET(s ? s->phase : 0); }
static void tc_view(CPU *c) { TouchS *s = hostdata(SELF); RET(s ? s->view : 0); }
static void tc_timestamp(CPU *c) { TouchS *s = hostdata(SELF); RETD(s ? s->ts / 1000.0 : 0); }

/* ------------------------------------------------------------------ EAGLContext (rendering via the host GL layer) */
typedef struct { uint32_t api; } Ctx;
void gl_renderbuffer_from_drawable(CPU *c, uint32_t target, gptr layer);   /* gles.c */
void gl_present(CPU *c);
static void ea_initWithAPI(CPU *c) {
    uint32_t api = ARG(2);
    if (api != 1 && api != 2) { rt_log("EAGLContext initWithAPI:%u unsupported (no ES3)", api); rt_release(c, SELF); RET(0); return; }
    ((Ctx *)hostdata_ensure(SELF, sizeof(Ctx), NULL))->api = api;
    rt_log("EAGLContext: created OpenGL ES %u context", api);
    RET(SELF);
}
static void ea_setCurrentContext(CPU *c) { current_context = ARG(2); RET(1); }
static void ea_currentContext(CPU *c) { RET(current_context); }
static void ea_API(CPU *c) { Ctx *s = hostdata(SELF); RET(s ? s->api : 0); }
static void ea_renderbufferStorage(CPU *c) { gl_renderbuffer_from_drawable(c, ARG(2), ARG(3)); RET(1); }
static void ea_presentRenderbuffer(CPU *c) { gl_present(c); RET(1); }

/* ------------------------------------------------------------------ UIColor / UIImage / UIImageView / UIAlertView */
typedef struct { float r, g, b, a; } Col;
static gptr color_new(float r, float g, float b, float a) { gptr o = objc_alloc_instance(cls_UIColor, 0); Col *s = hostdata_ensure(o, sizeof(Col), NULL); s->r = r; s->g = g; s->b = b; s->a = a; return objc_autorelease_(o); }
static void co_rgba(CPU *c) { RET(color_new(U2F(ARG(2)), U2F(ARG(3)), U2F(LD32(c->r[13])), U2F(LD32(c->r[13] + 4)))); }
static void co_white_alpha(CPU *c) { float w = U2F(ARG(2)); RET(color_new(w, w, w, U2F(ARG(3)))); }
static void co_black(CPU *c) { RET(color_new(0, 0, 0, 1)); }
static void co_white(CPU *c) { RET(color_new(1, 1, 1, 1)); }
static void co_clear(CPU *c) { RET(color_new(0, 0, 0, 0)); }
static void co_CGColor(CPU *c) { RET(SELF); }
static void co_getRed(CPU *c) { Col *s = hostdata(SELF); if (!s) { RET(0); return; } if (ARG(2)) ST32(ARG(2), F2U(s->r)); if (ARG(3)) ST32(ARG(3), F2U(s->g)); gptr b = LD32(c->r[13]), a = LD32(c->r[13] + 4); if (b) ST32(b, F2U(s->b)); if (a) ST32(a, F2U(s->a)); RET(1); }
const float *uicolor_rgba(gptr col) { Col *s = col ? hostdata(col) : NULL; return s ? &s->r : NULL; }

/* UIImage imageNamed: resolves device-specific variants (@2x, ~iphone/~ipad) like UIKit; stores the bundle path */
static void im_imageNamed(CPU *c) {
    char nm[200]; snprintf(nm, sizeof nm, "%s", nsstr_cstr(ARG(2)));
    char *dot = strrchr(nm, '.'); char ext[16] = "png";
    if (dot) { snprintf(ext, sizeof ext, "%s", dot + 1); *dot = 0; }
    const char *dev = dev_idiom == 1 ? "~ipad" : "~iphone";
    char cand[6][256]; int sc = (int)dev_scale;
    snprintf(cand[0], 256, "%s@%dx%s.%s", nm, sc, dev, ext); snprintf(cand[1], 256, "%s@%dx.%s", nm, sc, ext);
    snprintf(cand[2], 256, "%s%s.%s", nm, dev, ext); snprintf(cand[3], 256, "%s.%s", nm, ext);
    snprintf(cand[4], 256, "%s@2x%s.%s", nm, dev, ext); snprintf(cand[5], 256, "%s@2x.%s", nm, ext);
    for (int i = 0; i < 6; i++) {
        char p[512]; snprintf(p, sizeof p, "%s/%s", VFS_BUNDLE, cand[i]);
        if (host_file_size(p) > 0) {
            gptr o = objc_alloc_instance(cls_UIImage, 0);
            char *d = hostdata_ensure(o, 256 + 4, NULL); snprintf(d, 256, "%s", cand[i]);
            RET(objc_autorelease_(o)); return;
        }
    }
    rt_log("UIImage imageNamed: %s not found in bundle", nsstr_cstr(ARG(2)));
    RET(0);
}
static void iv_initWithImage(CPU *c) { View *s = V(SELF); s->image = rt_retain(c, ARG(2)); RET(SELF); }
static void iv_setImage(CPU *c) { View *s = V(SELF); gptr o = s->image; s->image = rt_retain(c, ARG(2)); rt_release(c, o); sync_host(SELF); }
static void iv_image(CPU *c) { RET(V(SELF)->image); }

typedef struct { gptr delegate, title, message, cancel; int tag; } Alert;
static void al_init(CPU *c) {
    Alert *s = hostdata_ensure(SELF, sizeof(Alert), NULL);
    s->title = rt_retain(c, ARG(2)); s->message = rt_retain(c, ARG(3)); s->delegate = ARG(4); s->cancel = rt_retain(c, ARG(5));
    RET(SELF);
}
static void al_show(CPU *c) {
    Alert *s = hostdata(SELF);
    rt_log("UIAlertView: \"%s\" — \"%s\" [%s]", s && s->title ? nsstr_cstr(s->title) : "", s && s->message ? nsstr_cstr(s->message) : "", s && s->cancel ? nsstr_cstr(s->cancel) : "");
    host_ui_event(6, SELF, s && s->message ? nsstr_cstr(s->message) : "", 0, 0, 0, 0);
    /* the alert is acknowledged by the user in the host UI; dismissal is delivered as button 0 on the next tick */
    if (s && s->delegate) runloop_perform_later(SELF, sel_get("__dismissAlert"), 0, 0);
}
static void al_dismiss(CPU *c) {
    Alert *s = hostdata(SELF);
    if (s && s->delegate && responds(s->delegate, "alertView:clickedButtonAtIndex:")) msg(c, s->delegate, "alertView:clickedButtonAtIndex:", 2, SELF, 0);
}
static void al_setTag(CPU *c) { Alert *s = hostdata_ensure(SELF, sizeof(Alert), NULL); s->tag = (int)ARG(2); }
static void al_tag(CPU *c) { Alert *s = hostdata(SELF); RET(s ? (uint32_t)s->tag : 0); }

bool objc_own_imp_any(gptr obj, const char *sel) {
    /* true if a guest (non-host) class in obj's hierarchy implements sel */
    gptr imp = objc_lookup_imp(LD32(obj), sel_get(sel));
    return imp && thunk_lookup(imp) == NULL;
}

#define M(cls, sel, fn) host_method(cls, sel, "", fn)
#define CM(cls, sel, fn) host_cmethod(cls, sel, "", fn)
void uikit_init(void) {
    cls_UIScreen = host_class("UIScreen", "NSObject", 4);
    screen_obj = gstatic_alloc(4); ST32(screen_obj, cls_UIScreen);
    CM(cls_UIScreen, "mainScreen", sc_mainScreen); CM(cls_UIScreen, "screens", sc_screens);
    M(cls_UIScreen, "bounds", sc_bounds); M(cls_UIScreen, "nativeBounds", sc_nativeBounds); M(cls_UIScreen, "applicationFrame", sc_applicationFrame);
    M(cls_UIScreen, "scale", sc_scale); M(cls_UIScreen, "nativeScale", sc_scale); M(cls_UIScreen, "brightness", sc_brightness);
    cls_UIDevice = host_class("UIDevice", "NSObject", 4);
    device_obj = gstatic_alloc(4); ST32(device_obj, cls_UIDevice);
    CM(cls_UIDevice, "currentDevice", dv_currentDevice);
    M(cls_UIDevice, "model", dv_model); M(cls_UIDevice, "localizedModel", dv_model); M(cls_UIDevice, "systemVersion", dv_systemVersion);
    M(cls_UIDevice, "systemName", dv_systemName); M(cls_UIDevice, "name", dv_name); M(cls_UIDevice, "userInterfaceIdiom", dv_idiom);
    M(cls_UIDevice, "orientation", dv_orientation); M(cls_UIDevice, "identifierForVendor", dv_identifierForVendor);
    M(cls_UIDevice, "isMultitaskingSupported", dv_multitasking); M(cls_UIDevice, "beginGeneratingDeviceOrientationNotifications", dv_noop);
    M(cls_UIDevice, "endGeneratingDeviceOrientationNotifications", dv_noop); M(cls_UIDevice, "setBatteryMonitoringEnabled:", dv_noop);
    M(cls_UIDevice, "batteryLevel", dv_batteryLevel); M(cls_UIDevice, "batteryState", dv_batteryState); M(cls_UIDevice, "setProximityMonitoringEnabled:", dv_noop);

    cls_UIResponder = host_class("UIResponder", "NSObject", 4);
    M(cls_UIResponder, "becomeFirstResponder", rs_true); M(cls_UIResponder, "resignFirstResponder", rs_true); M(cls_UIResponder, "canBecomeFirstResponder", rs_true);
    M(cls_UIResponder, "nextResponder", rs_nextResponder);
    M(cls_UIResponder, "touchesBegan:withEvent:", vw_noop); M(cls_UIResponder, "touchesMoved:withEvent:", vw_noop);
    M(cls_UIResponder, "touchesEnded:withEvent:", vw_noop); M(cls_UIResponder, "touchesCancelled:withEvent:", vw_noop);
    cls_UIApplication = host_class("UIApplication", "UIResponder", 4);
    CM(cls_UIApplication, "sharedApplication", ap_shared);
    M(cls_UIApplication, "delegate", ap_delegate); M(cls_UIApplication, "setDelegate:", ap_setDelegate);
    M(cls_UIApplication, "setStatusBarHidden:", ap_noop); M(cls_UIApplication, "setStatusBarHidden:withAnimation:", ap_noop); M(cls_UIApplication, "setStatusBarHidden:animated:", ap_noop);
    M(cls_UIApplication, "setIdleTimerDisabled:", ap_noop); M(cls_UIApplication, "statusBarOrientation", ap_statusBarOrientation);
    M(cls_UIApplication, "setStatusBarOrientation:animated:", ap_noop); M(cls_UIApplication, "setStatusBarOrientation:", ap_noop);
    M(cls_UIApplication, "keyWindow", ap_keyWindow); M(cls_UIApplication, "windows", ap_windows); M(cls_UIApplication, "applicationState", ap_applicationState);
    M(cls_UIApplication, "openURL:", ap_openURL); M(cls_UIApplication, "canOpenURL:", ap_canOpenURL);
    M(cls_UIApplication, "beginBackgroundTaskWithExpirationHandler:", ap_beginBackgroundTask); M(cls_UIApplication, "endBackgroundTask:", ap_noop);
    M(cls_UIApplication, "applicationIconBadgeNumber", ap_badge); M(cls_UIApplication, "setApplicationIconBadgeNumber:", ap_noop);
    M(cls_UIApplication, "cancelAllLocalNotifications", ap_noop); M(cls_UIApplication, "registerForRemoteNotifications", ap_noop);
    M(cls_UIApplication, "registerUserNotificationSettings:", ap_noop); M(cls_UIApplication, "isRegisteredForRemoteNotifications", ap_isRegistered);
    M(cls_UIApplication, "registerForRemoteNotificationTypes:", ap_noop); M(cls_UIApplication, "supportedInterfaceOrientationsForWindow:", ap_supportedOrientations);
    M(cls_UIApplication, "beginIgnoringInteractionEvents", ap_noop); M(cls_UIApplication, "endIgnoringInteractionEvents", ap_noop);
    M(cls_UIApplication, "setNetworkActivityIndicatorVisible:", ap_noop);

    cls_UIView = host_class("UIView", "UIResponder", 4);
    gptr Vw = cls_UIView;
    CM(Vw, "layerClass", vw_layerClass);
    M(Vw, "initWithFrame:", vw_initWithFrame); M(Vw, "init", vw_init); M(Vw, "initWithCoder:", vw_initWithCoder); M(Vw, "dealloc", vw_dealloc);
    M(Vw, "frame", vw_frame); M(Vw, "bounds", vw_bounds); M(Vw, "center", vw_center); M(Vw, "setFrame:", vw_setFrame); M(Vw, "setBounds:", vw_setBounds);
    M(Vw, "setCenter:", vw_setCenter); M(Vw, "addSubview:", vw_addSubview); M(Vw, "removeFromSuperview", vw_removeFromSuperview);
    M(Vw, "bringSubviewToFront:", vw_bringSubviewToFront); M(Vw, "subviews", vw_subviews); M(Vw, "superview", vw_superview); M(Vw, "window", vw_window);
    M(Vw, "layer", vw_layer); M(Vw, "setContentScaleFactor:", vw_setContentScaleFactor); M(Vw, "contentScaleFactor", vw_contentScaleFactor);
    M(Vw, "setHidden:", vw_setHidden); M(Vw, "isHidden", vw_isHidden); M(Vw, "setAlpha:", vw_setAlpha); M(Vw, "alpha", vw_alpha);
    M(Vw, "setOpaque:", vw_setOpaque); M(Vw, "setMultipleTouchEnabled:", vw_setMultipleTouchEnabled); M(Vw, "isMultipleTouchEnabled", vw_isMultipleTouchEnabled);
    M(Vw, "setUserInteractionEnabled:", vw_setUserInteractionEnabled); M(Vw, "setExclusiveTouch:", vw_noop); M(Vw, "setBackgroundColor:", vw_setBackgroundColor);
    M(Vw, "setTag:", vw_setTag); M(Vw, "tag", vw_tag); M(Vw, "viewWithTag:", vw_viewWithTag); M(Vw, "setNeedsLayout", vw_noop); M(Vw, "layoutIfNeeded", vw_layoutIfNeeded);
    M(Vw, "layoutSubviews", vw_noop); M(Vw, "setNeedsDisplay", vw_noop); M(Vw, "setAutoresizingMask:", vw_noop); M(Vw, "setAutoresizesSubviews:", vw_noop);
    M(Vw, "setClipsToBounds:", vw_noop); M(Vw, "setContentMode:", vw_noop); M(Vw, "sizeToFit", vw_sizeToFit); M(Vw, "setTranslatesAutoresizingMaskIntoConstraints:", vw_noop);
    M(Vw, "didMoveToSuperview", vw_noop);
    cls_UIWindow = host_class("UIWindow", "UIView", 4);
    M(cls_UIWindow, "makeKeyAndVisible", wn_makeKeyAndVisible); M(cls_UIWindow, "makeKeyWindow", wn_makeKeyAndVisible);
    M(cls_UIWindow, "setRootViewController:", wn_setRootVC); M(cls_UIWindow, "rootViewController", wn_rootViewController);
    CM(cls_UIWindow, "keyWindow", wn_keyWindow);
    cls_UIVC = host_class("UIViewController", "UIResponder", 4);
    M(cls_UIVC, "init", vc_init); M(cls_UIVC, "initWithNibName:bundle:", vc_init); M(cls_UIVC, "view", vc_view); M(cls_UIVC, "setView:", vc_setView);
    M(cls_UIVC, "isViewLoaded", vc_isViewLoaded); M(cls_UIVC, "supportedInterfaceOrientations", vc_supportedInterfaceOrientations);
    M(cls_UIVC, "shouldAutorotate", vc_yes); M(cls_UIVC, "prefersStatusBarHidden", vc_yes); M(cls_UIVC, "shouldAutorotateToInterfaceOrientation:", vc_yes);
    M(cls_UIVC, "viewDidLoad", vw_noop); M(cls_UIVC, "setWantsFullScreenLayout:", vw_noop); M(cls_UIVC, "presentedViewController", vc_no);

    cls_CALayer = host_class("CALayer", "NSObject", 4);
    cls_CAEAGLLayer = host_class("CAEAGLLayer", "CALayer", 4);
    M(cls_CALayer, "setOpaque:", ly_setOpaque); M(cls_CALayer, "bounds", ly_bounds); M(cls_CALayer, "contentsScale", ly_contentsScale);
    M(cls_CALayer, "setContentsScale:", vw_noop); M(cls_CALayer, "setBounds:", vw_noop); M(cls_CALayer, "setFrame:", vw_noop);
    M(cls_CALayer, "setPosition:", vw_noop); M(cls_CALayer, "setNeedsDisplay", vw_noop); M(cls_CALayer, "setMasksToBounds:", vw_noop);
    M(cls_CALayer, "setCornerRadius:", vw_noop); M(cls_CALayer, "setBorderWidth:", vw_noop); M(cls_CALayer, "setBorderColor:", vw_noop);
    M(cls_CAEAGLLayer, "setDrawableProperties:", ly_setDrawableProperties); M(cls_CAEAGLLayer, "drawableProperties", ly_drawableProperties);
    cls_EAGLContext = host_class("EAGLContext", "NSObject", 4);
    M(cls_EAGLContext, "initWithAPI:", ea_initWithAPI); CM(cls_EAGLContext, "setCurrentContext:", ea_setCurrentContext);
    CM(cls_EAGLContext, "currentContext", ea_currentContext); M(cls_EAGLContext, "API", ea_API);
    M(cls_EAGLContext, "renderbufferStorage:fromDrawable:", ea_renderbufferStorage); M(cls_EAGLContext, "presentRenderbuffer:", ea_presentRenderbuffer);
    static const char *eagl_keys[][2] = {{"_kEAGLColorFormatRGB565", "EAGLColorFormatRGB565"}, {"_kEAGLColorFormatRGBA8", "EAGLColorFormatRGBA8"},
                                          {"_kEAGLDrawablePropertyColorFormat", "EAGLDrawablePropertyColorFormat"}, {"_kEAGLDrawablePropertyRetainedBacking", "EAGLDrawablePropertyRetainedBacking"}};
    for (int i = 0; i < 4; i++) { gptr p = data_import_alloc(eagl_keys[i][0], 4); ST32(p, nsstr_static(eagl_keys[i][1])); }

    cls_UIColor = host_class("UIColor", "NSObject", 4);
    CM(cls_UIColor, "colorWithRed:green:blue:alpha:", co_rgba); CM(cls_UIColor, "colorWithWhite:alpha:", co_white_alpha);
    CM(cls_UIColor, "blackColor", co_black); CM(cls_UIColor, "whiteColor", co_white); CM(cls_UIColor, "clearColor", co_clear);
    M(cls_UIColor, "initWithRed:green:blue:alpha:", co_rgba); M(cls_UIColor, "CGColor", co_CGColor); M(cls_UIColor, "getRed:green:blue:alpha:", co_getRed);
    cls_UITouch = host_class("UITouch", "NSObject", 4);
    M(cls_UITouch, "locationInView:", tc_locationInView); M(cls_UITouch, "previousLocationInView:", tc_previousLocationInView);
    M(cls_UITouch, "tapCount", tc_tapCount); M(cls_UITouch, "phase", tc_phase); M(cls_UITouch, "view", tc_view); M(cls_UITouch, "timestamp", tc_timestamp);
    cls_UIEvent = host_class("UIEvent", "NSObject", 4);
    cls_UIImage = host_class("UIImage", "NSObject", 4);
    CM(cls_UIImage, "imageNamed:", im_imageNamed);
    cls_UIImageView = host_class("UIImageView", "UIView", 4);
    M(cls_UIImageView, "initWithImage:", iv_initWithImage); M(cls_UIImageView, "setImage:", iv_setImage); M(cls_UIImageView, "image", iv_image);
    cls_UIAlertView = host_class("UIAlertView", "UIView", 4);
    M(cls_UIAlertView, "initWithTitle:message:delegate:cancelButtonTitle:otherButtonTitles:", al_init); M(cls_UIAlertView, "show", al_show);
    M(cls_UIAlertView, "__dismissAlert", al_dismiss); M(cls_UIAlertView, "setTag:", al_setTag); M(cls_UIAlertView, "tag", al_tag);

    static const char *notes[] = {"_UIApplicationDidBecomeActiveNotification", "_UIApplicationDidEnterBackgroundNotification", "_UIApplicationDidFinishLaunchingNotification",
        "_UIApplicationWillEnterForegroundNotification", "_UIApplicationWillResignActiveNotification", "_UIApplicationWillTerminateNotification",
        "_UIDeviceOrientationDidChangeNotification", "_UIApplicationLaunchOptionsAnnotationKey", "_UIApplicationLaunchOptionsRemoteNotificationKey",
        "_UIApplicationLaunchOptionsSourceApplicationKey", "_UIApplicationLaunchOptionsURLKey", "_UIApplicationOpenURLOptionsAnnotationKey",
        "_UIApplicationOpenURLOptionsSourceApplicationKey", "_UIPasteboardNameFind", "_UIPasteboardNameGeneral", "_NSFontAttributeName",
        "_NSForegroundColorAttributeName", "_NSParagraphStyleAttributeName", "_AVAudioSessionCategoryAmbient", "_AVAudioSessionInterruptionNotification",
        "_AVAudioSessionInterruptionTypeKey", "_AVAudioSessionSilenceSecondaryAudioHintNotification", "_AVAudioSessionSilenceSecondaryAudioHintTypeKey",
        "_MPMoviePlayerPlaybackDidFinishNotification", "_kSecAttrAccessGroup", "_kSecAttrGeneric", "_kSecClass", "_kSecClassGenericPassword",
        "_kSecMatchLimit", "_kSecMatchLimitOne", "_kSecReturnData", "_kSecValueData"};
    for (unsigned i = 0; i < sizeof notes / sizeof notes[0]; i++) { gptr p = data_import_alloc(notes[i], 4); ST32(p, nsstr_static(notes[i] + 1)); }
    gptr p = data_import_alloc("_UIBackgroundTaskInvalid", 4); ST32(p, 0);
    p = data_import_alloc("_UIWindowLevelNormal", 4); ST32(p, 0);
    p = data_import_alloc("_UIEdgeInsetsZero", 16);
    p = data_import_alloc("_CGRectZero", 16); p = data_import_alloc("_CGSizeZero", 8);
    p = data_import_alloc("_CGAffineTransformIdentity", 24); ST32(p, F2U(1)); ST32(p + 12, F2U(1));
    p = data_import_alloc("_kSecRandomDefault", 4);
}

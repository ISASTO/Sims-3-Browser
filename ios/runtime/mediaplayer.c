/* mediaplayer.c — MediaPlayer framework: the device music library, its picker, and the system music player.
 *
 * On the device, the game's Music Library button asks for media-library access (MPMediaLibrary), presents an
 * MPMediaPickerController and hands the picked songs to the system music player (MPMusicPlayerController), which
 * plays them in place of the game's soundtrack (the game's BGMusic stays quiet while other audio plays).
 *
 * In the browser the music library is the user's own audio files: the picker is a host panel that lets the user
 * choose files from their computer, and the system music player is a host audio element outside the game's audio
 * graph, with a small now-playing control standing in for the system's playback controls. Contracts:
 *   - authorization: the browser grants access per file choice, so the status is authorized (3);
 *   - a picker that is cancelled or closed without files calls mediaPickerDidCancel:, otherwise
 *     mediaPicker:didPickMediaItems: with one MPMediaItem per file (title = file name);
 *   - playbackState / nowPlayingItem / currentPlaybackTime report the host player's real state;
 *   - AVAudioSession isOtherAudioPlaying is YES while the system player is playing.
 * Not provided: library queries (MPMediaQuery), artwork, and playback-change notifications (the game uses none).
 */
#include "rt.h"
#include "hostaudio.h"

uint32_t host_ui_event(int kind, gptr view, const char *arg, float x, float y, float w, float h);
#define M(cls, sel, fn) host_method(cls, sel, "", fn)
#define CM(cls, sel, fn) host_cmethod(cls, sel, "", fn)

static gptr cls_Item, cls_Coll, cls_Picker, cls_PickerView, cls_Player, cls_AuthCb;

/* ------------------------------------------------------------------ MPMediaLibrary */
static void ml_status(CPU *c) { RET(3); /* MPMediaLibraryAuthorizationStatusAuthorized */ }
static void ml_request(CPU *c) {   /* + requestAuthorization:(void (^)(MPMediaLibraryAuthorizationStatus)) — async, as on iOS */
    gptr cb = objc_alloc_instance(cls_AuthCb, 0);
    ST32(cb + 4, block_copy(ARG(2)));
    runloop_perform_later(cb, sel_get("__fire"), 0, 0);
    objc_release_(c, cb);
}
static void authcb_fire(CPU *c) {
    gptr b = LD32(SELF + 4);
    if (b) { ST32(SELF + 4, 0); guest_call2(c, block_invoke_addr(b), b, 3); block_release(c, b); }
}
static gptr default_library;
static void ml_default(CPU *c) { RET(default_library); }

/* ------------------------------------------------------------------ MPMediaItem / MPMediaItemCollection */
typedef struct { uint32_t id; gptr title; } Item;
static gptr item_new(uint32_t id, const char *title) {
    gptr o = objc_alloc_instance(cls_Item, 0);
    Item *it = hostdata_ensure(o, sizeof(Item), NULL);
    it->id = id; it->title = nsstr_retained(title);
    return objc_autorelease_(o);
}
static void it_title(CPU *c) { Item *it = hostdata(SELF); RET(it ? it->title : 0); }
static void it_pid(CPU *c) { Item *it = hostdata(SELF); uint64_t v = it ? it->id : 0; c->r[0] = (uint32_t)v; c->r[1] = (uint32_t)(v >> 32); }
static void it_value(CPU *c) {
    Item *it = hostdata(SELF); const char *k = ARG(2) ? nsstr_cstr(ARG(2)) : "";
    if (!it) { RET(0); return; }
    if (!strcmp(k, "title")) RET(it->title);
    else if (!strcmp(k, "persistentID")) RET(nsnumber_int(it->id, false));
    else if (!strcmp(k, "mediaType")) RET(nsnumber_int(1 /* MPMediaTypeMusic */, false));
    else RET(0);   /* artist, album, artwork, duration, ...: not known for a local file */
}
typedef struct { gptr items; } Coll;
static void co_initWithItems(CPU *c) { Coll *k = hostdata_ensure(SELF, sizeof(Coll), NULL); k->items = ARG(2) ? objc_retain_(ARG(2)) : nsarray_new(NULL, 0, false, true); RET(SELF); }
static void co_collectionWithItems(CPU *c) { gptr o = objc_alloc_instance(cls_Coll, 0); CPU t = *c; t.r[0] = o; co_initWithItems(&t); RET(objc_autorelease_(o)); }
static void co_items(CPU *c) { Coll *k = hostdata(SELF); RET(k ? k->items : 0); }
static void co_count(CPU *c) { Coll *k = hostdata(SELF); RET(k ? nsarray_count(k->items) : 0); }
static void co_repr(CPU *c) { Coll *k = hostdata(SELF); RET(k && nsarray_count(k->items) ? nsarray_get(k->items, 0) : 0); }

/* ------------------------------------------------------------------ MPMediaPickerController */
/* the controller's own state lives in its instance (UIViewController's host payload is the view controller's) */
typedef struct { gptr isa, delegate, prompt; uint32_t multiple, types; } Picker;
static Picker *pk(gptr o) { return (Picker *)G2H(o); }
static void pc_initWithTypes(CPU *c) {
    gptr self = SELF;
    gptr sup_init = objc_lookup_imp(objc_superclass(cls_Picker), sel_get("init"));   /* [super init] (UIViewController) */
    uint32_t types = ARG(2);
    self = guest_call2(c, sup_init, self, sel_get("init"));
    pk(self)->types = types;
    gptr v = objc_alloc_instance(cls_PickerView, 0);
    ST32(v + 4, self);   /* the view knows its controller (weak) */
    msg(c, self, "setView:", 1, v);
    objc_release_(c, v);
    RET(self);
}
static void pc_initDefault(CPU *c) { CPU t = *c; t.r[2] = 0xff; pc_initWithTypes(&t); RET(t.r[0]); }
static void pc_setDelegate(CPU *c) { pk(SELF)->delegate = ARG(2); }
static void pc_delegate(CPU *c) { RET(pk(SELF)->delegate); }
static void pc_setMultiple(CPU *c) { pk(SELF)->multiple = ARG(2) & 0xff; }
static void pc_multiple(CPU *c) { RET(pk(SELF)->multiple); }
static void pc_setPrompt(CPU *c) { Picker *p = pk(SELF); gptr o = p->prompt; p->prompt = ARG(2) ? objc_retain_(ARG(2)) : 0; if (o) objc_release_(c, o); }
static void pc_prompt(CPU *c) { RET(pk(SELF)->prompt); }
static void pc_ignore(CPU *c) { UNUSED(c); }
static void pc_mediaTypes(CPU *c) { RET(pk(SELF)->types); }

/* host panel: the picker's view is shown by the browser host (ui kind 12) */
bool media_is_picker(gptr v) { return cls_PickerView && objc_is_kind_of(v, cls_PickerView); }
uint32_t media_sync(gptr v, float x, float y, float w, float h) {
    gptr ctl = LD32(v + 4);
    Picker *p = ctl ? pk(ctl) : NULL;
    char arg[300];
    snprintf(arg, sizeof arg, "%d\x1f%s", p && p->multiple ? 1 : 0, p && p->prompt ? nsstr_cstr(p->prompt) : "");
    return host_ui_event(12, v, arg, x, y, w, h);
}
/* results from the host panel: "id\x1ftitle\x1e..." (empty = cancelled), delivered on the run loop */
typedef struct { gptr view; char *list; } PickRes;
static PickRes *picks; static uint32_t npicks;
__attribute__((export_name("sims3_media_picked")))
void sims3_media_picked(uint32_t view, const char *list) {
    picks = realloc(picks, (npicks + 1) * sizeof *picks);
    picks[npicks].view = view; picks[npicks].list = strdup(list ? list : "");
    npicks++;
}
void media_dispatch(CPU *c) {
    for (uint32_t i = 0; i < npicks; i++) {
        PickRes r = picks[i];
        gptr ctl = r.view && objc_is_kind_of(r.view, cls_PickerView) ? LD32(r.view + 4) : 0;
        Picker *p = ctl ? pk(ctl) : NULL;
        if (p && p->delegate) {
            if (!*r.list) {
                if (responds(p->delegate, "mediaPickerDidCancel:")) msg(c, p->delegate, "mediaPickerDidCancel:", 1, ctl);
            } else {
                gptr items = nsarray_new(NULL, 0, true, false);
                for (char *s = r.list; s && *s;) {
                    char *rec_end = strchr(s, '\x1e'); if (rec_end) *rec_end = 0;
                    char *sep = strchr(s, '\x1f');
                    if (sep) { *sep = 0; nsarray_add(items, item_new((uint32_t)strtoul(s, NULL, 10), sep + 1)); }
                    s = rec_end ? rec_end + 1 : NULL;
                }
                gptr coll = objc_alloc_instance(cls_Coll, 0);
                CPU t = *c; t.r[0] = coll; t.r[2] = items; co_initWithItems(&t);
                if (responds(p->delegate, "mediaPicker:didPickMediaItems:")) msg(c, p->delegate, "mediaPicker:didPickMediaItems:", 2, ctl, coll);
                objc_release_(c, coll);
            }
            if (c->unwinding) rt_fatal(c, "exception escaped a media picker delegate callback");
        }
        free(r.list);
    }
    npicks = 0;
}

/* ------------------------------------------------------------------ MPMusicPlayerController */
typedef struct { gptr queue; bool system; int repeat, shuffle; float volume; } Player;
static gptr system_player, app_player;
static bool host_owner_system;   /* which controller's queue the host player holds */
static Player *pl(gptr o) { return hostdata_ensure(o, sizeof(Player), NULL); }
static void mp_system(CPU *c) { RET(system_player); }
static void mp_app(CPU *c) { RET(app_player); }
static void mp_setQueue(CPU *c) {
    Player *p = pl(SELF);
    Coll *k = ARG(2) ? hostdata(ARG(2)) : NULL;
    gptr o = p->queue; p->queue = k ? objc_retain_(k->items) : 0; if (o) objc_release_(c, o);
    uint32_t n = p->queue ? nsarray_count(p->queue) : 0, ids[256];
    if (n > 256) n = 256;
    for (uint32_t i = 0; i < n; i++) { Item *it = hostdata(nsarray_get(p->queue, i)); ids[i] = it ? it->id : 0; }
    ha_media_queue(ids, n);
    host_owner_system = p->system;
}
static void mp_setQueueQuery(CPU *c) { UNUSED(c); rt_log("MPMusicPlayerController setQueueWithQuery: library queries are not available; queue unchanged"); }
static bool owns(gptr self) { return pl(self)->system == host_owner_system; }
static void mp_play(CPU *c) { if (owns(SELF)) ha_media_cmd(0, 0); }
static void mp_pause(CPU *c) { if (owns(SELF)) ha_media_cmd(1, 0); }
static void mp_stop(CPU *c) { if (owns(SELF)) ha_media_cmd(2, 0); }
static void mp_next(CPU *c) { if (owns(SELF)) ha_media_cmd(3, 0); }
static void mp_prev(CPU *c) { if (owns(SELF)) ha_media_cmd(4, 0); }
static void mp_begin(CPU *c) { if (owns(SELF)) ha_media_cmd(5, 0); }
static void mp_setTime(CPU *c) { if (owns(SELF)) ha_media_cmd(6, ARGD(2)); }
static void mp_state(CPU *c) {
    /* MPMusicPlaybackState: 0 stopped, 1 playing, 2 paused */
    RET(owns(SELF) ? ha_media_state() : 0);
}
static void mp_nowPlaying(CPU *c) {
    Player *p = pl(SELF);
    int i = owns(SELF) && ha_media_state() ? ha_media_index() : -1;
    RET(p->queue && i >= 0 && (uint32_t)i < nsarray_count(p->queue) ? nsarray_get(p->queue, (uint32_t)i) : 0);
}
static void mp_index(CPU *c) { int i = owns(SELF) ? ha_media_index() : -1; RET(i < 0 ? 0x7fffffffu /* NSNotFound */ : (uint32_t)i); }
static void mp_time(CPU *c) { double t = owns(SELF) ? ha_media_time() : 0; uint64_t u = D2U(t); c->r[0] = (uint32_t)u; c->r[1] = (uint32_t)(u >> 32); }
static void mp_repeat(CPU *c) { RET(pl(SELF)->repeat); }
static void mp_setRepeat(CPU *c) { pl(SELF)->repeat = (int)ARG(2); if (owns(SELF)) ha_media_cmd(7, ARG(2)); }
static void mp_shuffle(CPU *c) { RET(pl(SELF)->shuffle); }
static void mp_setShuffle(CPU *c) { pl(SELF)->shuffle = (int)ARG(2); }   /* shuffle order is not reproduced */
static void mp_volume(CPU *c) { c->r[0] = F2U(pl(SELF)->volume); }
static void mp_setVolume(CPU *c) { pl(SELF)->volume = U2F(ARG(2)); if (owns(SELF)) ha_media_cmd(8, U2F(ARG(2))); }
static void mp_noop(CPU *c) { UNUSED(c); }

/* AVAudioSession -isOtherAudioPlaying: the system player is other audio from the app's point of view */
bool media_other_audio_playing(void) { return host_owner_system && ha_media_state() == 1; }

void mediaplayer_init(void) {
    gptr k = host_class("MPMediaLibrary", "NSObject", 4);
    default_library = objc_retain_(objc_alloc_instance(k, 0));
    CM(k, "authorizationStatus", ml_status); CM(k, "requestAuthorization:", ml_request); CM(k, "defaultMediaLibrary", ml_default);
    M(k, "beginGeneratingLibraryChangeNotifications", mp_noop); M(k, "endGeneratingLibraryChangeNotifications", mp_noop);
    cls_AuthCb = host_class("__MPAuthorizationCallback", "NSObject", 8); M(cls_AuthCb, "__fire", authcb_fire);

    cls_Item = host_class("MPMediaItem", "NSObject", 4);
    M(cls_Item, "title", it_title); M(cls_Item, "persistentID", it_pid); M(cls_Item, "valueForProperty:", it_value);
    cls_Coll = host_class("MPMediaItemCollection", "NSObject", 4);
    CM(cls_Coll, "collectionWithItems:", co_collectionWithItems); M(cls_Coll, "initWithItems:", co_initWithItems);
    M(cls_Coll, "items", co_items); M(cls_Coll, "count", co_count); M(cls_Coll, "representativeItem", co_repr);

    cls_PickerView = host_class("__MPMediaPickerView", "UIView", 8);
    cls_Picker = host_class("MPMediaPickerController", "UIViewController", sizeof(Picker));
    M(cls_Picker, "initWithMediaTypes:", pc_initWithTypes); M(cls_Picker, "init", pc_initDefault);
    M(cls_Picker, "setDelegate:", pc_setDelegate); M(cls_Picker, "delegate", pc_delegate);
    M(cls_Picker, "setAllowsPickingMultipleItems:", pc_setMultiple); M(cls_Picker, "allowsPickingMultipleItems", pc_multiple);
    M(cls_Picker, "setPrompt:", pc_setPrompt); M(cls_Picker, "prompt", pc_prompt); M(cls_Picker, "mediaTypes", pc_mediaTypes);
    M(cls_Picker, "setShowsCloudItems:", pc_ignore); M(cls_Picker, "setShowsItemsWithProtectedAssets:", pc_ignore);

    cls_Player = host_class("MPMusicPlayerController", "NSObject", 4);
    system_player = objc_retain_(objc_alloc_instance(cls_Player, 0)); pl(system_player)->system = true; pl(system_player)->volume = 1;
    app_player = objc_retain_(objc_alloc_instance(cls_Player, 0)); pl(app_player)->volume = 1;
    host_owner_system = true;
    CM(cls_Player, "systemMusicPlayer", mp_system); CM(cls_Player, "iPodMusicPlayer", mp_system);
    CM(cls_Player, "applicationMusicPlayer", mp_app); CM(cls_Player, "applicationQueuePlayer", mp_app);
    M(cls_Player, "setQueueWithItemCollection:", mp_setQueue); M(cls_Player, "setQueueWithQuery:", mp_setQueueQuery);
    M(cls_Player, "play", mp_play); M(cls_Player, "pause", mp_pause); M(cls_Player, "stop", mp_stop);
    M(cls_Player, "skipToNextItem", mp_next); M(cls_Player, "skipToPreviousItem", mp_prev); M(cls_Player, "skipToBeginning", mp_begin);
    M(cls_Player, "playbackState", mp_state); M(cls_Player, "nowPlayingItem", mp_nowPlaying); M(cls_Player, "indexOfNowPlayingItem", mp_index);
    M(cls_Player, "currentPlaybackTime", mp_time); M(cls_Player, "setCurrentPlaybackTime:", mp_setTime);
    M(cls_Player, "repeatMode", mp_repeat); M(cls_Player, "setRepeatMode:", mp_setRepeat);
    M(cls_Player, "shuffleMode", mp_shuffle); M(cls_Player, "setShuffleMode:", mp_setShuffle);
    M(cls_Player, "volume", mp_volume); M(cls_Player, "setVolume:", mp_setVolume);
    M(cls_Player, "prepareToPlay", mp_noop);
    M(cls_Player, "beginGeneratingPlaybackNotifications", mp_noop); M(cls_Player, "endGeneratingPlaybackNotifications", mp_noop);
}

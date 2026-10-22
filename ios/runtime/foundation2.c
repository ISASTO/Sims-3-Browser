/* foundation2.c — NSNotificationCenter, NSBundle, NSFileManager, NSUserDefaults, NSProcessInfo, NSThread,
 * NSLocale, NSError, locks, NSSet, NSValue, NSUUID, NSLog and path helpers. */
#include "rt.h"
#include "fmt.h"

gptr rt_retain(CPU *c, gptr obj);
void rt_release(CPU *c, gptr obj);
void objc_destroy_instance(gptr obj);
const char *vfs_resolve(const char *in, char *out, size_t outlen);
int host_is_dir(const char *p);
int host_mkdir(const char *p);
extern gptr cls_NSString, cls_NSArray, cls_NSDictionary, cls_NSNumber, cls_NSData;

gptr cls_NSObject_get(void);
#define M(cls, sel, fn) host_method(cls, sel, "", fn)
#define CM(cls, sel, fn) host_cmethod(cls, sel, "", fn)

/* ------------------------------------------------------------------ NSNotificationCenter */
typedef struct Obs { gptr observer, sel, name, object, block; bool dead; } Obs;
static Obs *obs; static uint32_t nobs, capobs;
static gptr cls_NC, nc_default, cls_Notification;
typedef struct { gptr name, object, userinfo; } NoteS;
static void nc_defaultCenter(CPU *c) { RET(nc_default); }
static void nc_add(gptr observer, gptr sel, gptr name, gptr object, gptr block) {
    if (nobs == capobs) { capobs = capobs ? capobs * 2 : 64; obs = realloc(obs, capobs * sizeof(Obs)); }
    Obs o = {observer, sel, name ? nsstr_static(nsstr_cstr(name)) : 0, object, block, false};
    obs[nobs++] = o;
}
static void nc_addObserver(CPU *c) { nc_add(ARG(2), ARG(3), ARG(4), ARG(5), 0); }
gptr block_copy(gptr b);
static void nc_addObserverForName(CPU *c) {
    /* addObserverForName:object:queue:usingBlock: -> returns an opaque observer token */
    gptr tok = objc_alloc_instance(cls_NSObject_get(), 0);
    nc_add(tok, 0, ARG(2), ARG(3), block_copy(LD32(c->r[13] + 4)));
    RET(objc_autorelease_(tok));
}
static void nc_removeObserver(CPU *c) { for (uint32_t i = 0; i < nobs; i++) if (obs[i].observer == ARG(2)) obs[i].dead = true; }
static void nc_removeObserver_name(CPU *c) {
    for (uint32_t i = 0; i < nobs; i++)
        if (obs[i].observer == ARG(2) && (!ARG(3) || (obs[i].name && obj_equal(c, obs[i].name, ARG(3)))) && (!ARG(4) || obs[i].object == ARG(4))) obs[i].dead = true;
}
static gptr note_new(CPU *c, gptr name, gptr object, gptr ui) {
    gptr n = objc_alloc_instance(cls_Notification, 0);
    NoteS *s = hostdata_ensure(n, sizeof(NoteS), NULL);
    s->name = rt_retain(c, name); s->object = object; s->userinfo = rt_retain(c, ui);
    return objc_autorelease_(n);
}
void nc_post(CPU *c, gptr name, gptr object, gptr ui) {
    gptr note = note_new(c, name, object, ui);
    uint32_t n = nobs;
    for (uint32_t i = 0; i < n; i++) {
        Obs o = obs[i];
        if (o.dead) continue;
        if (o.name && !obj_equal(c, o.name, name)) continue;
        if (o.object && o.object != object) continue;
        if (o.block) guest_call2(c, block_invoke_addr(o.block), o.block, note);
        else { gptr imp = objc_lookup_imp(LD32(o.observer), o.sel); if (!imp) rt_fatal(c, "notification observer %s lacks %s", objc_obj_class_name(o.observer), sel_name(o.sel)); guest_call3(c, imp, o.observer, o.sel, note); }
    }
}
void nc_post_name(CPU *c, const char *name) { nc_post(c, nsstr(name), 0, 0); }
static void nc_postNotificationName(CPU *c) { nc_post(c, ARG(2), ARG(3), 0); }
static void nc_postNotificationName_ui(CPU *c) { nc_post(c, ARG(2), ARG(3), ARG(4)); }
static void nc_postNotification(CPU *c) { NoteS *s = hostdata(ARG(2)); if (s) nc_post(c, s->name, s->object, s->userinfo); }
static void no_name(CPU *c) { NoteS *s = hostdata(SELF); RET(s ? s->name : 0); }
static void no_object(CPU *c) { NoteS *s = hostdata(SELF); RET(s ? s->object : 0); }
static void no_userInfo(CPU *c) { NoteS *s = hostdata(SELF); RET(s ? s->userinfo : 0); }
static void no_notificationWithName(CPU *c) { RET(note_new(c, ARG(2), ARG(3), ARG(4))); }

/* ------------------------------------------------------------------ NSBundle */
static gptr cls_NSBundle, main_bundle;
static void bu_mainBundle(CPU *c) { RET(main_bundle); }
static void bu_bundlePath(CPU *c) { RET(nsstr(VFS_BUNDLE)); }
static void bu_resourcePath(CPU *c) { RET(nsstr(VFS_BUNDLE)); }
static void bu_bundleIdentifier(CPU *c) { RET(nsstr("com.ea.sims3inc")); }
gptr plist_parse(CPU *c, const uint8_t *data, uint32_t len);   /* plist.c */
static gptr info_dict;
static gptr bundle_info(CPU *c) {
    if (info_dict) return info_dict;
    char p[256]; snprintf(p, sizeof p, "%s/Info.plist", VFS_BUNDLE);
    int n = host_file_size(p);
    if (n > 0) { uint8_t *b = malloc((size_t)n); host_file_read(p, b, 0, (uint32_t)n); info_dict = plist_parse(c, b, (uint32_t)n); free(b); }
    if (!info_dict) info_dict = nsdict_new(false, true);
    else rt_retain(c, info_dict);
    return info_dict;
}
static void bu_infoDictionary(CPU *c) { RET(bundle_info(c)); }
static void bu_objectForInfoDictionaryKey(CPU *c) { RET(nsdict_get(bundle_info(c), ARG(2))); }
static const char *preferred_lang(void);
static bool resource_exists(const char *dir, const char *file, char *out, size_t n) {
    char p[1024];
    snprintf(p, sizeof p, "%s/%s%s%s", VFS_BUNDLE, dir ? dir : "", dir && *dir ? "/" : "", file);
    char q[1024]; vfs_resolve(p, q, sizeof q);
    if (host_file_size(q) >= 0 || host_is_dir(q)) { snprintf(out, n, "%s", q); return true; }
    return false;
}
static gptr find_resource(CPU *c, gptr name, gptr type, gptr dir) {
    UNUSED(c);
    char file[512];
    const char *nm = name ? nsstr_cstr(name) : "";
    char nmc[400]; snprintf(nmc, sizeof nmc, "%s", nm);
    const char *ty = type ? nsstr_cstr(type) : "";
    if (*ty) snprintf(file, sizeof file, "%s.%s", nmc, ty); else snprintf(file, sizeof file, "%s", nmc);
    const char *d = dir ? nsstr_cstr(dir) : "";
    char dd[400]; snprintf(dd, sizeof dd, "%s", d);
    char out[1024];
    /* localized lookup first (<lang>.lproj, then en.lproj, Base.lproj), then the plain directory */
    const char *langs[3] = {preferred_lang(), "en", "Base"};
    for (int i = 0; i < 3; i++) {
        char ld[512]; snprintf(ld, sizeof ld, "%s%s%s.lproj", dd, *dd ? "/" : "", langs[i]);
        if (resource_exists(ld, file, out, sizeof out)) return nsstr(out);
    }
    if (resource_exists(dd, file, out, sizeof out)) return nsstr(out);
    return 0;
}
static void bu_pathForResource_ofType(CPU *c) { RET(find_resource(c, ARG(2), ARG(3), 0)); }
static void bu_pathForResource_ofType_inDirectory(CPU *c) { RET(find_resource(c, ARG(2), ARG(3), ARG(4))); }
static void bu_URLForResource(CPU *c) { gptr p = find_resource(c, ARG(2), ARG(3), 0); RET(p ? msg(c, objc_class_named("NSURL"), "fileURLWithPath:", 1, p) : 0); }
static void bu_localizations(CPU *c) {
    const char *l[8] = {"en", "fr_FR", "de", "it", "es_ES", "ja", "ko", "zh_CN"};
    gptr v[8]; for (int i = 0; i < 8; i++) v[i] = nsstr(l[i]);
    RET(nsarray_new(v, 8, false, false));
}
static void bu_preferredLocalizations(CPU *c) { gptr v = nsstr(preferred_lang()); RET(nsarray_new(&v, 1, false, false)); }
static void bu_localizedStringForKey(CPU *c) { RET(ARG(3) && nsstr_len(ARG(3)) ? ARG(3) : ARG(2)); }
static void bu_bundleWithPath(CPU *c) { RET(main_bundle); }
static void bu_load(CPU *c) { RET(1); }
static void bu_bundleURL(CPU *c) { RET(msg(c, objc_class_named("NSURL"), "fileURLWithPath:", 1, nsstr(VFS_BUNDLE))); }

/* preferred language: from the host (browser), mapped to the bundle's lproj names */
const char *host_language(void);
static const char *preferred_lang(void) {
    static char l[16];
    if (!l[0]) {
        const char *h = host_language();
        if (!strncmp(h, "fr", 2)) strcpy(l, "fr_FR"); else if (!strncmp(h, "de", 2)) strcpy(l, "de"); else if (!strncmp(h, "it", 2)) strcpy(l, "it");
        else if (!strncmp(h, "es", 2)) strcpy(l, "es_ES"); else if (!strncmp(h, "ja", 2)) strcpy(l, "ja"); else if (!strncmp(h, "ko", 2)) strcpy(l, "ko");
        else if (!strncmp(h, "zh", 2)) strcpy(l, "zh_CN"); else strcpy(l, "en");
    }
    return l;
}

/* ------------------------------------------------------------------ paths */
void H_NSHomeDirectory(CPU *c) { RET(nsstr(VFS_HOME)); }
void H_NSSearchPathForDirectoriesInDomains(CPU *c) {
    uint32_t d = ARG(0);
    const char *sub = d == 9 ? "Documents" : d == 13 ? "Library/Caches" : d == 5 ? "Library" : d == 14 ? "Library/Application Support" : NULL;
    if (!sub) { rt_log("NSSearchPathForDirectoriesInDomains: directory %u unsupported", d); RET(nsarray_new(NULL, 0, false, false)); return; }
    char p[256]; snprintf(p, sizeof p, "%s/%s", VFS_HOME, sub);
    host_mkdir(p);
    gptr s = nsstr(p);
    RET(nsarray_new(&s, 1, false, false));
}
void H_NSTemporaryDirectory(CPU *c) { RET(nsstr("/home/tmp/")); }

/* ------------------------------------------------------------------ NSFileManager */
static gptr cls_FM, fm_default;
static void fm_defaultManager(CPU *c) { RET(fm_default); }
static void fm_fileExistsAtPath(CPU *c) { char p[1024]; vfs_resolve(nsstr_cstr(ARG(2)), p, sizeof p); RET(host_file_size(p) >= 0 || host_is_dir(p)); }
static void fm_fileExistsAtPath_isDir(CPU *c) { char p[1024]; vfs_resolve(nsstr_cstr(ARG(2)), p, sizeof p); bool d = host_is_dir(p); bool e = d || host_file_size(p) >= 0; if (ARG(3)) ST8(ARG(3), d); RET(e); }
static void fm_createDirectory(CPU *c) { char p[1024]; vfs_resolve(nsstr_cstr(ARG(2)), p, sizeof p); RET(host_mkdir(p) == 0); }
static void fm_removeItemAtPath(CPU *c) { char p[1024]; vfs_resolve(nsstr_cstr(ARG(2)), p, sizeof p); RET(host_file_delete(p) == 0); }
static void fm_contentsOfDirectoryAtPath(CPU *c) {
    char p[1024]; vfs_resolve(nsstr_cstr(ARG(2)), p, sizeof p);
    char *buf = malloc(65536); int n = host_dir_list(p, buf, 65536);
    gptr arr = nsarray_new(NULL, 0, true, false);
    if (n >= 0) for (char *q = buf; *q; q += strlen(q) + 1) nsarray_add(arr, nsstr(q));
    else if (ARG(3)) ST32(ARG(3), 0);
    free(buf);
    RET(n >= 0 ? arr : 0);
}
static void fm_attributesOfItemAtPath(CPU *c) {
    char p[1024]; vfs_resolve(nsstr_cstr(ARG(2)), p, sizeof p);
    int n = host_file_size(p);
    if (n < 0 && !host_is_dir(p)) { RET(0); return; }
    gptr d = nsdict_new(true, false);
    nsdict_set(d, nsstr("NSFileSize"), nsnumber_int(n < 0 ? 0 : n, false));
    RET(d);
}
static void fm_attributesOfFileSystem(CPU *c) {
    gptr d = nsdict_new(true, false);
    nsdict_set(d, nsstr("NSFileSystemFreeSize"), nsnumber_int(4ll << 30, false));
    nsdict_set(d, nsstr("NSFileSystemSize"), nsnumber_int(16ll << 30, false));
    RET(d);
}
static void fm_copyItem(CPU *c) {
    char a[1024], b[1024]; vfs_resolve(nsstr_cstr(ARG(2)), a, sizeof a); vfs_resolve(nsstr_cstr(ARG(3)), b, sizeof b);
    int n = host_file_size(a); if (n < 0) { RET(0); return; }
    uint8_t *buf = malloc((size_t)n + 1); host_file_read(a, buf, 0, (uint32_t)n); int w = host_file_write(b, buf, (uint32_t)n, 0); free(buf);
    RET(w >= 0);
}
static void fm_moveItem(CPU *c) { fm_copyItem(c); if (c->r[0]) { char a[1024]; vfs_resolve(nsstr_cstr(ARG(2)), a, sizeof a); host_file_delete(a); } }
static void fm_createFileAtPath(CPU *c) {
    char p[1024]; vfs_resolve(nsstr_cstr(ARG(2)), p, sizeof p);
    gptr d = ARG(3);
    if (d) { gptr bytes = msg(c, d, "bytes", 0); uint32_t n = msg(c, d, "length", 0); RET(host_file_write(p, G2H(bytes), n, 0) >= 0); }
    else RET(host_file_write(p, "", 0, 0) >= 0);
}
static void fm_URLsForDirectory(CPU *c) {
    uint32_t args[3] = {ARG(2), ARG(3), 1};
    CPU tmp = *c; tmp.r[0] = args[0]; tmp.r[1] = args[1]; tmp.r[2] = 1;
    H_NSSearchPathForDirectoriesInDomains(&tmp);
    gptr arr = tmp.r[0];
    gptr out = nsarray_new(NULL, 0, true, false);
    for (uint32_t i = 0; i < nsarray_count(arr); i++) nsarray_add(out, msg(c, objc_class_named("NSURL"), "fileURLWithPath:", 1, nsarray_get(arr, i)));
    RET(out);
}

/* ------------------------------------------------------------------ NSUserDefaults (persisted as a binary-free text plist in /home/Library/Preferences) */
static gptr cls_UD, ud_std, ud_dict;
void plist_write_xml(CPU *c, gptr obj, char **out);      /* plist.c */
static const char *ud_path = "/home/Library/Preferences/com.ea.sims3inc.plist";
static void ud_load(CPU *c) {
    if (ud_dict) return;
    int n = host_file_size(ud_path);
    gptr d = 0;
    if (n > 0) { uint8_t *b = malloc((size_t)n); host_file_read(ud_path, b, 0, (uint32_t)n); d = plist_parse(c, b, (uint32_t)n); free(b); }
    ud_dict = nsdict_new(true, true);
    if (d) msg(c, ud_dict, "addEntriesFromDictionary:", 1, d);
}
static void ud_save(CPU *c) { char *x = NULL; plist_write_xml(c, ud_dict, &x); host_file_write(ud_path, x, (uint32_t)strlen(x), 0); free(x); }
static void ud_standard(CPU *c) { ud_load(c); RET(ud_std); }
static void ud_objectForKey(CPU *c) { ud_load(c); RET(nsdict_get(ud_dict, ARG(2))); }
static void ud_setObject(CPU *c) { ud_load(c); if (ARG(2)) nsdict_set(ud_dict, ARG(3), ARG(2)); else msg(c, ud_dict, "removeObjectForKey:", 1, ARG(3)); ud_save(c); }
static void ud_removeObjectForKey(CPU *c) { ud_load(c); msg(c, ud_dict, "removeObjectForKey:", 1, ARG(2)); ud_save(c); }
static void ud_boolForKey(CPU *c) { ud_load(c); gptr v = nsdict_get(ud_dict, ARG(2)); RET(v ? (msg(c, v, "boolValue", 0) & 0xff) : 0); }
static void ud_integerForKey(CPU *c) { ud_load(c); gptr v = nsdict_get(ud_dict, ARG(2)); RET(v ? msg(c, v, "intValue", 0) : 0); }
static void ud_floatForKey(CPU *c) { ud_load(c); gptr v = nsdict_get(ud_dict, ARG(2)); RETF(v ? (is_nsnumber(v) ? (float)nsnumber_get_double(v) : U2F(msg(c, v, "floatValue", 0))) : 0); }
static void ud_doubleForKey(CPU *c) { ud_load(c); gptr v = nsdict_get(ud_dict, ARG(2)); RETD(v && is_nsnumber(v) ? nsnumber_get_double(v) : 0); }
static void ud_stringForKey(CPU *c) { ud_load(c); gptr v = nsdict_get(ud_dict, ARG(2)); RET(v && is_nsstring(v) ? v : 0); }
static void ud_setBool(CPU *c) { ud_load(c); nsdict_set(ud_dict, ARG(3), nsnumber_bool(ARG(2) & 0xff)); ud_save(c); }
static void ud_setInteger(CPU *c) { ud_load(c); nsdict_set(ud_dict, ARG(3), nsnumber_int((int32_t)ARG(2), false)); ud_save(c); }
static void ud_setFloat(CPU *c) { ud_load(c); nsdict_set(ud_dict, ARG(3), nsnumber_double(U2F(ARG(2)), false)); ud_save(c); }
static void ud_setDouble(CPU *c) { ud_load(c); nsdict_set(ud_dict, ARG(4), nsnumber_double(ARGD(2), false)); ud_save(c); }
static void ud_synchronize(CPU *c) { ud_load(c); ud_save(c); RET(1); }
static void ud_registerDefaults(CPU *c) {
    ud_load(c);
    gptr d = ARG(2); gptr keys = msg(c, d, "allKeys", 0);
    for (uint32_t i = 0; i < nsarray_count(keys); i++) { gptr k = nsarray_get(keys, i); if (!nsdict_get(ud_dict, k)) nsdict_set(ud_dict, k, nsdict_get(d, k)); }
}
static void ud_dictionaryRepresentation(CPU *c) { ud_load(c); RET(ud_dict); }

/* ------------------------------------------------------------------ NSProcessInfo / NSThread */
static gptr cls_PI, pi_obj, cls_Thread, main_thread_obj;
static void pi_processInfo(CPU *c) { RET(pi_obj); }
static void pi_processName(CPU *c) { RET(nsstr("sims3_iphone")); }
static void pi_globallyUniqueString(CPU *c) { static uint32_t k; char b[64]; snprintf(b, sizeof b, "B7A3C1D2-0000-4000-8000-%012x", ++k); RET(nsstr(b)); }
static void pi_operatingSystemVersionString(CPU *c) { RET(nsstr("Version 8.4 (Build 12H143)")); }
static void pi_systemUptime(CPU *c) { RETD(host_now_ms() / 1000.0); }
static void pi_physicalMemory(CPU *c) { RET64(1ull << 30); }
static void pi_processorCount(CPU *c) { RET(2); }
static void pi_environment(CPU *c) { RET(nsdict_new(false, false)); }
static void pi_arguments(CPU *c) { gptr s = nsstr("/app/sims3_iphone.app/sims3_iphone"); RET(nsarray_new(&s, 1, false, false)); }
static void pi_osv_stret(CPU *c) { /* NSOperatingSystemVersion {8, 4, 0} via stret */ gptr r = ARG(0); ST32(r, 8); ST32(r + 4, 4); ST32(r + 8, 0); }
static void th_isMainThread(CPU *c) { RET(sched_current_thread() == 0); }
static void th_currentThread(CPU *c) { RET(main_thread_obj); }
static void th_threadDictionary(CPU *c) { static gptr d; if (!d) d = nsdict_new(true, true); RET(d); }
static void th_sleepForTimeInterval(CPU *c) { sched_sleep_current(c, ARGD(2) * 1000.0); }
static void th_detachNewThread(CPU *c) { rt_fatal(c, "+[NSThread detachNewThreadSelector:...] (%s) not supported yet", sel_name(ARG(2))); }

/* ------------------------------------------------------------------ NSLocale / NSTimeZone */
static gptr cls_Locale, cur_locale, cls_TZ;
static void lo_currentLocale(CPU *c) { RET(cur_locale); }
static void lo_preferredLanguages(CPU *c) { gptr v = nsstr(host_language()); RET(nsarray_new(&v, 1, false, false)); }
static void lo_objectForKey(CPU *c) {
    const char *k = nsstr_cstr(ARG(2));
    const char *h = host_language();
    char lang[8] = {0}, country[8] = "US";
    snprintf(lang, sizeof lang, "%.2s", h);
    if (strlen(h) >= 5) snprintf(country, sizeof country, "%.2s", h + 3);
    if (!strcmp(k, "kCFLocaleLanguageCodeKey")) RET(nsstr(lang));
    else if (!strcmp(k, "kCFLocaleCountryCodeKey")) RET(nsstr(country));
    else if (!strcmp(k, "kCFLocaleIdentifierKey")) { char b[16]; snprintf(b, sizeof b, "%s_%s", lang, country); RET(nsstr(b)); }
    else if (!strcmp(k, "kCFLocaleCurrencyCodeKey")) RET(nsstr("USD"));
    else RET(0);
}
static void lo_localeIdentifier(CPU *c) { const char *h = host_language(); char b[16]; snprintf(b, sizeof b, "%.2s_%.2s", h, strlen(h) >= 5 ? h + 3 : "US"); RET(nsstr(b)); }
static void tz_local(CPU *c) { RET(objc_alloc_instance(cls_TZ, 0)); }
static void tz_secondsFromGMT(CPU *c) { double host_tz_offset_min(double); RET((uint32_t)(int32_t)(host_tz_offset_min(host_wall_ms()) * 60)); }
static void tz_name(CPU *c) { RET(nsstr("Local")); }

/* ------------------------------------------------------------------ NSError */
static gptr cls_Error;
typedef struct { gptr domain, userinfo; int32_t code; } ErrS;
static void er_errorWithDomain(CPU *c) { gptr e = objc_alloc_instance(cls_Error, 0); ErrS *s = hostdata_ensure(e, sizeof(ErrS), NULL); s->domain = rt_retain(c, ARG(2)); s->code = (int32_t)ARG(3); s->userinfo = rt_retain(c, ARG(4)); RET(objc_autorelease_(e)); }
static void er_init(CPU *c) { ErrS *s = hostdata_ensure(SELF, sizeof(ErrS), NULL); s->domain = rt_retain(c, ARG(2)); s->code = (int32_t)ARG(3); s->userinfo = rt_retain(c, ARG(4)); RET(SELF); }
static void er_code(CPU *c) { ErrS *s = hostdata(SELF); RET(s ? (uint32_t)s->code : 0); }
static void er_domain(CPU *c) { ErrS *s = hostdata(SELF); RET(s ? s->domain : 0); }
static void er_userInfo(CPU *c) { ErrS *s = hostdata(SELF); RET(s ? s->userinfo : 0); }
static void er_localizedDescription(CPU *c) { ErrS *s = hostdata(SELF); char b[256]; snprintf(b, sizeof b, "Error %d (%s)", s ? s->code : 0, s ? nsstr_cstr(s->domain) : ""); RET(nsstr(b)); }

/* ------------------------------------------------------------------ locks (no contention under the cooperative scheduler) */
static void lk_noop(CPU *c) { UNUSED(c); }
/* Locks only matter to the cooperative scheduler: a thread holding one is not preempted (threads.c). */
static void lk_lock(CPU *c) { c->locks++; }
static void lk_unlock(CPU *c) { if (c->locks) c->locks--; }
static void lk_true(CPU *c) { c->locks++; RET(1); }

/* ------------------------------------------------------------------ NSSet (ordered by insertion) */
static gptr cls_Set, cls_MSet;
typedef struct { gptr arr; } SetS;
static gptr set_arr(CPU *c, gptr s) { SetS *x = hostdata(s); if (!x) { x = hostdata_ensure(s, sizeof(SetS), NULL); x->arr = nsarray_new(NULL, 0, true, true); } UNUSED(c); return x->arr; }
static void se_set(CPU *c) { gptr s = objc_alloc_instance(SELF, 0); set_arr(c, s); RET(objc_autorelease_(s)); }
static void se_init(CPU *c) { set_arr(c, SELF); RET(SELF); }
static void se_setWithArray(CPU *c) { gptr s = objc_alloc_instance(SELF, 0); gptr a = set_arr(c, s); gptr src = ARG(2); for (uint32_t i = 0; i < nsarray_count(src); i++) if (!(msg(c, a, "containsObject:", 1, nsarray_get(src, i)) & 0xff)) nsarray_add(a, nsarray_get(src, i)); RET(objc_autorelease_(s)); }
static void se_setWithObject(CPU *c) { gptr s = objc_alloc_instance(SELF, 0); nsarray_add(set_arr(c, s), ARG(2)); RET(objc_autorelease_(s)); }
static void se_setWithObjects(CPU *c) { gptr s = objc_alloc_instance(SELF, 0); gptr a = set_arr(c, s); ArgReader r = {c, 2, 0}; for (gptr x = ar_word(&r); x; x = ar_word(&r)) if (!(msg(c, a, "containsObject:", 1, x) & 0xff)) nsarray_add(a, x); RET(objc_autorelease_(s)); }
static void se_initWithObjects(CPU *c) { gptr a = set_arr(c, SELF); ArgReader r = {c, 2, 0}; for (gptr x = ar_word(&r); x; x = ar_word(&r)) if (!(msg(c, a, "containsObject:", 1, x) & 0xff)) nsarray_add(a, x); RET(SELF); }
static void se_initWithArray(CPU *c) { gptr a = set_arr(c, SELF); gptr src = ARG(2); for (uint32_t i = 0; src && i < nsarray_count(src); i++) if (!(msg(c, a, "containsObject:", 1, nsarray_get(src, i)) & 0xff)) nsarray_add(a, nsarray_get(src, i)); RET(SELF); }
static void se_initWithSet(CPU *c) { gptr a = set_arr(c, SELF); gptr src = ARG(2) ? set_arr(c, ARG(2)) : 0; for (uint32_t i = 0; src && i < nsarray_count(src); i++) nsarray_add(a, nsarray_get(src, i)); RET(SELF); }
static void se_setWithSet(CPU *c) { gptr s = objc_alloc_instance(SELF, 0); c->r[0] = s; c->r[2] = ARG(2); se_initWithSet(c); RET(objc_autorelease_(s)); }
static void se_unionSet(CPU *c) { gptr a = set_arr(c, SELF); gptr src = ARG(2) ? set_arr(c, ARG(2)) : 0; for (uint32_t i = 0; src && i < nsarray_count(src); i++) if (!(msg(c, a, "containsObject:", 1, nsarray_get(src, i)) & 0xff)) nsarray_add(a, nsarray_get(src, i)); }
static void se_addObjectsFromArray(CPU *c) { gptr a = set_arr(c, SELF); gptr src = ARG(2); for (uint32_t i = 0; src && i < nsarray_count(src); i++) if (!(msg(c, a, "containsObject:", 1, nsarray_get(src, i)) & 0xff)) nsarray_add(a, nsarray_get(src, i)); }
static void se_minusSet(CPU *c) { gptr a = set_arr(c, SELF); gptr src = ARG(2) ? set_arr(c, ARG(2)) : 0; for (uint32_t i = 0; src && i < nsarray_count(src); i++) msg(c, a, "removeObject:", 1, nsarray_get(src, i)); }
static void se_intersectsSet(CPU *c) { gptr a = set_arr(c, SELF); gptr src = ARG(2) ? set_arr(c, ARG(2)) : 0; for (uint32_t i = 0; src && i < nsarray_count(src); i++) if (msg(c, a, "containsObject:", 1, nsarray_get(src, i)) & 0xff) { RET(1); return; } RET(0); }
static void se_isSubsetOfSet(CPU *c) { gptr a = set_arr(c, SELF); gptr o = ARG(2) ? set_arr(c, ARG(2)) : 0; for (uint32_t i = 0; i < nsarray_count(a); i++) if (!o || !(msg(c, o, "containsObject:", 1, nsarray_get(a, i)) & 0xff)) { RET(0); return; } RET(1); }
static void se_setByAddingObject(CPU *c) { gptr s = objc_alloc_instance(cls_Set, 0); gptr a = set_arr(c, s); gptr src = set_arr(c, SELF); for (uint32_t i = 0; i < nsarray_count(src); i++) nsarray_add(a, nsarray_get(src, i)); if (!(msg(c, a, "containsObject:", 1, ARG(2)) & 0xff)) nsarray_add(a, ARG(2)); RET(objc_autorelease_(s)); }
static void se_enumerateObjectsUsingBlock(CPU *c) { msg(c, set_arr(c, SELF), "enumerateObjectsUsingBlock:", 1, ARG(2)); }
static void se_makeObjectsPerformSelector(CPU *c) { msg(c, set_arr(c, SELF), "makeObjectsPerformSelector:", 1, ARG(2)); }
static void se_isEqualToSet(CPU *c) { gptr a = set_arr(c, SELF); gptr o = ARG(2) ? set_arr(c, ARG(2)) : 0; if (!o || nsarray_count(a) != nsarray_count(o)) { RET(0); return; } se_isSubsetOfSet(c); }
static void se_count(CPU *c) { RET(nsarray_count(set_arr(c, SELF))); }
static void se_containsObject(CPU *c) { RET(msg(c, set_arr(c, SELF), "containsObject:", 1, ARG(2))); }
static void se_member(CPU *c) { gptr a = set_arr(c, SELF); for (uint32_t i = 0; i < nsarray_count(a); i++) if (obj_equal(c, nsarray_get(a, i), ARG(2))) { RET(nsarray_get(a, i)); return; } RET(0); }
static void se_addObject(CPU *c) { gptr a = set_arr(c, SELF); if (!(msg(c, a, "containsObject:", 1, ARG(2)) & 0xff)) nsarray_add(a, ARG(2)); }
static void se_removeObject(CPU *c) { msg(c, set_arr(c, SELF), "removeObject:", 1, ARG(2)); }
static void se_removeAllObjects(CPU *c) { msg(c, set_arr(c, SELF), "removeAllObjects", 0); }
static void se_allObjects(CPU *c) { RET(msg(c, set_arr(c, SELF), "copy", 0)); objc_autorelease_(c->r[0]); }
static void se_anyObject(CPU *c) { gptr a = set_arr(c, SELF); RET(nsarray_count(a) ? nsarray_get(a, 0) : 0); }
static void se_objectEnumerator(CPU *c) { RET(msg(c, set_arr(c, SELF), "objectEnumerator", 0)); }
static void se_countByEnumerating(CPU *c) { uint32_t r = msg(c, set_arr(c, SELF), "countByEnumeratingWithState:objects:count:", 3, ARG(2), ARG(3), ARG(4)); RET(r); }
static void se_copy(CPU *c) { gptr s = objc_alloc_instance(cls_Set, 0); gptr a = set_arr(c, s); gptr src = set_arr(c, SELF); for (uint32_t i = 0; i < nsarray_count(src); i++) nsarray_add(a, nsarray_get(src, i)); RET(s); }
static void se_mutableCopy(CPU *c) { gptr s = objc_alloc_instance(cls_MSet, 0); gptr a = set_arr(c, s); gptr src = set_arr(c, SELF); for (uint32_t i = 0; i < nsarray_count(src); i++) nsarray_add(a, nsarray_get(src, i)); RET(s); }

/* ------------------------------------------------------------------ NSValue (CGRect/CGPoint/CGSize/pointer boxes) */
static gptr cls_Value;
typedef struct { uint8_t b[32]; uint32_t n; } ValS;
static gptr val_new(const void *p, uint32_t n) { gptr v = objc_alloc_instance(cls_Value, 0); ValS *s = hostdata_ensure(v, sizeof(ValS), NULL); memcpy(s->b, p, n); s->n = n; return objc_autorelease_(v); }
static void va_valueWithPointer(CPU *c) { uint32_t p = ARG(2); RET(val_new(&p, 4)); }
static void va_pointerValue(CPU *c) { ValS *s = hostdata(SELF); uint32_t p = 0; if (s) memcpy(&p, s->b, 4); RET(p); }
static void va_valueWithNonretainedObject(CPU *c) { va_valueWithPointer(c); }
static void va_nonretainedObjectValue(CPU *c) { va_pointerValue(c); }
static void va_isEqual(CPU *c) { ValS *a = hostdata(SELF), *b = ARG(2) ? hostdata(ARG(2)) : NULL; RET(a && b && a->n == b->n && !memcmp(a->b, b->b, a->n)); }
static void va_hash(CPU *c) { ValS *a = hostdata(SELF); uint32_t h = 0; if (a) for (uint32_t i = 0; i < a->n; i++) h = h * 31 + a->b[i]; RET(h); }

/* ------------------------------------------------------------------ NSUUID */
static gptr cls_UUID;
static void uu_UUIDString(CPU *c) { RET(nsstr("6F9619FF-8B86-D011-B42D-00C04FC964FF")); }

/* ------------------------------------------------------------------ NSLog */
void H_NSLog(CPU *c) {
    ArgReader a = {c, 1, 0};
    char *s = gformat(c, nsstr_cstr(ARG(0)), &a);
    char *t = malloc(strlen(s) + 16); sprintf(t, "NSLog: %s", s); host_console(t); free(t); free(s);
}

gptr cls_NSObject_get(void) { return objc_class_named("NSObject"); }

void foundation3_init(void);
void foundation2_init(void) {
    { gptr p = data_import_alloc("_NSFileSystemFreeSize", 4); ST32(p, nsstr_static("NSFileSystemFreeSize")); p = data_import_alloc("_NSFileSystemSize", 4); ST32(p, nsstr_static("NSFileSystemSize")); }
    cls_NC = host_class("NSNotificationCenter", "NSObject", 4);
    nc_default = gstatic_alloc(4); ST32(nc_default, cls_NC);
    CM(cls_NC, "defaultCenter", nc_defaultCenter);
    M(cls_NC, "addObserver:selector:name:object:", nc_addObserver); M(cls_NC, "addObserverForName:object:queue:usingBlock:", nc_addObserverForName);
    M(cls_NC, "removeObserver:", nc_removeObserver); M(cls_NC, "removeObserver:name:object:", nc_removeObserver_name);
    M(cls_NC, "postNotificationName:object:", nc_postNotificationName); M(cls_NC, "postNotificationName:object:userInfo:", nc_postNotificationName_ui);
    M(cls_NC, "postNotification:", nc_postNotification);
    cls_Notification = host_class("NSNotification", "NSObject", 4);
    M(cls_Notification, "name", no_name); M(cls_Notification, "object", no_object); M(cls_Notification, "userInfo", no_userInfo);
    CM(cls_Notification, "notificationWithName:object:userInfo:", no_notificationWithName);

    cls_NSBundle = host_class("NSBundle", "NSObject", 4);
    main_bundle = gstatic_alloc(4); ST32(main_bundle, cls_NSBundle);
    CM(cls_NSBundle, "mainBundle", bu_mainBundle); CM(cls_NSBundle, "bundleWithPath:", bu_bundleWithPath); CM(cls_NSBundle, "bundleForClass:", bu_bundleWithPath);
    CM(cls_NSBundle, "preferredLocalizationsFromArray:", bu_preferredLocalizations);
    M(cls_NSBundle, "bundlePath", bu_bundlePath); M(cls_NSBundle, "resourcePath", bu_resourcePath); M(cls_NSBundle, "bundleIdentifier", bu_bundleIdentifier);
    M(cls_NSBundle, "infoDictionary", bu_infoDictionary); M(cls_NSBundle, "objectForInfoDictionaryKey:", bu_objectForInfoDictionaryKey);
    M(cls_NSBundle, "pathForResource:ofType:", bu_pathForResource_ofType); M(cls_NSBundle, "pathForResource:ofType:inDirectory:", bu_pathForResource_ofType_inDirectory);
    M(cls_NSBundle, "URLForResource:withExtension:", bu_URLForResource); M(cls_NSBundle, "localizations", bu_localizations);
    M(cls_NSBundle, "preferredLocalizations", bu_preferredLocalizations); M(cls_NSBundle, "localizedStringForKey:value:table:", bu_localizedStringForKey);
    M(cls_NSBundle, "load", bu_load); M(cls_NSBundle, "bundleURL", bu_bundleURL);

    cls_FM = host_class("NSFileManager", "NSObject", 4);
    fm_default = gstatic_alloc(4); ST32(fm_default, cls_FM);
    CM(cls_FM, "defaultManager", fm_defaultManager);
    M(cls_FM, "fileExistsAtPath:", fm_fileExistsAtPath); M(cls_FM, "fileExistsAtPath:isDirectory:", fm_fileExistsAtPath_isDir);
    M(cls_FM, "createDirectoryAtPath:withIntermediateDirectories:attributes:error:", fm_createDirectory);
    M(cls_FM, "removeItemAtPath:error:", fm_removeItemAtPath); M(cls_FM, "contentsOfDirectoryAtPath:error:", fm_contentsOfDirectoryAtPath);
    M(cls_FM, "attributesOfItemAtPath:error:", fm_attributesOfItemAtPath); M(cls_FM, "attributesOfFileSystemForPath:error:", fm_attributesOfFileSystem);
    M(cls_FM, "copyItemAtPath:toPath:error:", fm_copyItem); M(cls_FM, "moveItemAtPath:toPath:error:", fm_moveItem);
    M(cls_FM, "createFileAtPath:contents:attributes:", fm_createFileAtPath); M(cls_FM, "URLsForDirectory:inDomains:", fm_URLsForDirectory);

    cls_UD = host_class("NSUserDefaults", "NSObject", 4);
    ud_std = gstatic_alloc(4); ST32(ud_std, cls_UD);
    CM(cls_UD, "standardUserDefaults", ud_standard);
    M(cls_UD, "objectForKey:", ud_objectForKey); M(cls_UD, "setObject:forKey:", ud_setObject); M(cls_UD, "removeObjectForKey:", ud_removeObjectForKey);
    M(cls_UD, "boolForKey:", ud_boolForKey); M(cls_UD, "integerForKey:", ud_integerForKey); M(cls_UD, "floatForKey:", ud_floatForKey); M(cls_UD, "doubleForKey:", ud_doubleForKey);
    M(cls_UD, "stringForKey:", ud_stringForKey); M(cls_UD, "dictionaryForKey:", ud_objectForKey); M(cls_UD, "arrayForKey:", ud_objectForKey); M(cls_UD, "dataForKey:", ud_objectForKey);
    M(cls_UD, "setBool:forKey:", ud_setBool); M(cls_UD, "setInteger:forKey:", ud_setInteger); M(cls_UD, "setFloat:forKey:", ud_setFloat); M(cls_UD, "setDouble:forKey:", ud_setDouble);
    M(cls_UD, "setValue:forKey:", ud_setObject); M(cls_UD, "synchronize", ud_synchronize); M(cls_UD, "registerDefaults:", ud_registerDefaults);
    M(cls_UD, "dictionaryRepresentation", ud_dictionaryRepresentation);

    cls_PI = host_class("NSProcessInfo", "NSObject", 4);
    pi_obj = gstatic_alloc(4); ST32(pi_obj, cls_PI);
    CM(cls_PI, "processInfo", pi_processInfo);
    M(cls_PI, "processName", pi_processName); M(cls_PI, "globallyUniqueString", pi_globallyUniqueString);
    M(cls_PI, "operatingSystemVersionString", pi_operatingSystemVersionString); M(cls_PI, "systemUptime", pi_systemUptime);
    M(cls_PI, "physicalMemory", pi_physicalMemory); M(cls_PI, "processorCount", pi_processorCount); M(cls_PI, "activeProcessorCount", pi_processorCount);
    M(cls_PI, "environment", pi_environment); M(cls_PI, "arguments", pi_arguments); M(cls_PI, "operatingSystemVersion", pi_osv_stret);
    cls_Thread = host_class("NSThread", "NSObject", 4);
    main_thread_obj = gstatic_alloc(4); ST32(main_thread_obj, cls_Thread);
    CM(cls_Thread, "isMainThread", th_isMainThread); CM(cls_Thread, "currentThread", th_currentThread); CM(cls_Thread, "mainThread", th_currentThread);
    CM(cls_Thread, "sleepForTimeInterval:", th_sleepForTimeInterval); CM(cls_Thread, "detachNewThreadSelector:toTarget:withObject:", th_detachNewThread);
    M(cls_Thread, "isMainThread", th_isMainThread); M(cls_Thread, "threadDictionary", th_threadDictionary);

    cls_Locale = host_class("NSLocale", "NSObject", 4);
    cur_locale = gstatic_alloc(4); ST32(cur_locale, cls_Locale);
    CM(cls_Locale, "currentLocale", lo_currentLocale); CM(cls_Locale, "autoupdatingCurrentLocale", lo_currentLocale); CM(cls_Locale, "systemLocale", lo_currentLocale);
    CM(cls_Locale, "preferredLanguages", lo_preferredLanguages);
    M(cls_Locale, "objectForKey:", lo_objectForKey); M(cls_Locale, "localeIdentifier", lo_localeIdentifier);
    static const char *lkeys[][2] = {{"_NSLocaleCountryCode", "kCFLocaleCountryCodeKey"}, {"_NSLocaleCurrencyCode", "kCFLocaleCurrencyCodeKey"},
                                      {"_NSLocaleIdentifier", "kCFLocaleIdentifierKey"}, {"_kCFLocaleLanguageCode", "kCFLocaleLanguageCodeKey"}};
    for (int i = 0; i < 4; i++) { gptr p = data_import_alloc(lkeys[i][0], 4); ST32(p, nsstr_static(lkeys[i][1])); }
    cls_TZ = host_class("NSTimeZone", "NSObject", 4);
    CM(cls_TZ, "localTimeZone", tz_local); CM(cls_TZ, "systemTimeZone", tz_local); CM(cls_TZ, "defaultTimeZone", tz_local);
    M(cls_TZ, "secondsFromGMT", tz_secondsFromGMT); M(cls_TZ, "name", tz_name);

    cls_Error = host_class("NSError", "NSObject", 4);
    CM(cls_Error, "errorWithDomain:code:userInfo:", er_errorWithDomain); M(cls_Error, "initWithDomain:code:userInfo:", er_init);
    M(cls_Error, "code", er_code); M(cls_Error, "domain", er_domain); M(cls_Error, "userInfo", er_userInfo); M(cls_Error, "localizedDescription", er_localizedDescription);

    const char *locks[] = {"NSLock", "NSRecursiveLock", "NSCondition"};
    for (int i = 0; i < 3; i++) {
        gptr L = host_class(locks[i], "NSObject", 4);
        M(L, "lock", lk_lock); M(L, "unlock", lk_unlock); M(L, "tryLock", lk_true); M(L, "signal", lk_noop); M(L, "broadcast", lk_noop);
    }

    cls_Set = host_class("NSSet", "NSObject", 4); cls_MSet = host_class("NSMutableSet", "NSSet", 4);
    CM(cls_Set, "set", se_set); CM(cls_Set, "setWithArray:", se_setWithArray); CM(cls_Set, "setWithObject:", se_setWithObject); CM(cls_Set, "setWithObjects:", se_setWithObjects);
    M(cls_Set, "init", se_init); M(cls_Set, "count", se_count); M(cls_Set, "containsObject:", se_containsObject); M(cls_Set, "member:", se_member);
    M(cls_Set, "allObjects", se_allObjects); M(cls_Set, "anyObject", se_anyObject); M(cls_Set, "objectEnumerator", se_objectEnumerator);
    M(cls_Set, "countByEnumeratingWithState:objects:count:", se_countByEnumerating); M(cls_Set, "copyWithZone:", se_copy); M(cls_Set, "mutableCopyWithZone:", se_mutableCopy);
    CM(cls_MSet, "setWithCapacity:", se_set); M(cls_MSet, "initWithCapacity:", se_init);
    M(cls_Set, "initWithObjects:", se_initWithObjects); M(cls_Set, "initWithArray:", se_initWithArray); M(cls_Set, "initWithSet:", se_initWithSet);
    CM(cls_Set, "setWithSet:", se_setWithSet); M(cls_Set, "intersectsSet:", se_intersectsSet); M(cls_Set, "isSubsetOfSet:", se_isSubsetOfSet);
    M(cls_Set, "setByAddingObject:", se_setByAddingObject); M(cls_Set, "enumerateObjectsUsingBlock:", se_enumerateObjectsUsingBlock);
    M(cls_Set, "makeObjectsPerformSelector:", se_makeObjectsPerformSelector); M(cls_Set, "isEqualToSet:", se_isEqualToSet);
    M(cls_MSet, "unionSet:", se_unionSet); M(cls_MSet, "minusSet:", se_minusSet); M(cls_MSet, "addObjectsFromArray:", se_addObjectsFromArray);
    M(cls_MSet, "addObject:", se_addObject); M(cls_MSet, "removeObject:", se_removeObject); M(cls_MSet, "removeAllObjects", se_removeAllObjects);

    cls_Value = objc_class_named("NSValue");
    CM(cls_Value, "valueWithPointer:", va_valueWithPointer); CM(cls_Value, "valueWithNonretainedObject:", va_valueWithNonretainedObject);
    M(cls_Value, "pointerValue", va_pointerValue); M(cls_Value, "nonretainedObjectValue", va_nonretainedObjectValue);
    M(cls_Value, "isEqual:", va_isEqual); M(cls_Value, "hash", va_hash);

    cls_UUID = host_class("NSUUID", "NSObject", 4);
    M(cls_UUID, "UUIDString", uu_UUIDString);
    foundation3_init();
    void foundation4_init(void); foundation4_init();
    void foundation5_init(void); foundation5_init();
}

/* ------------------------------------------------------------------ plist file I/O on collections */
static gptr load_plist_file(CPU *c, gptr path) {
    char p[1024]; vfs_resolve(nsstr_cstr(path), p, sizeof p);
    int n = host_file_size(p); if (n <= 0) return 0;
    uint8_t *b = malloc((size_t)n); host_file_read(p, b, 0, (uint32_t)n);
    gptr r = plist_parse(c, b, (uint32_t)n); free(b);
    return r;
}
static void di_dictionaryWithContentsOfFile(CPU *c) {
    gptr r = load_plist_file(c, ARG(2));
    if (!r || !objc_is_kind_of(r, cls_NSDictionary)) { RET(0); return; }
    RET(msg(c, SELF, "dictionaryWithDictionary:", 1, r));
}
static void di_initWithContentsOfFile(CPU *c) {
    gptr r = load_plist_file(c, ARG(2));
    if (!r || !objc_is_kind_of(r, cls_NSDictionary)) { rt_release(c, SELF); RET(0); return; }
    RET(msg(c, SELF, "initWithDictionary:", 1, r));
}
static void ar_arrayWithContentsOfFile(CPU *c) {
    gptr r = load_plist_file(c, ARG(2));
    if (!r || !objc_is_kind_of(r, cls_NSArray)) { RET(0); return; }
    RET(msg(c, SELF, "arrayWithArray:", 1, r));
}
static void co_writeToFile(CPU *c) {
    char p[1024]; vfs_resolve(nsstr_cstr(ARG(2)), p, sizeof p);
    char *x = NULL; plist_write_xml(c, SELF, &x);
    RET(host_file_write(p, x, (uint32_t)strlen(x), 0) >= 0); free(x);
}
void foundation3_init(void) {
    CM(cls_NSDictionary, "dictionaryWithContentsOfFile:", di_dictionaryWithContentsOfFile);
    M(cls_NSDictionary, "initWithContentsOfFile:", di_initWithContentsOfFile);
    M(cls_NSDictionary, "writeToFile:atomically:", co_writeToFile);
    CM(cls_NSArray, "arrayWithContentsOfFile:", ar_arrayWithContentsOfFile);
    M(cls_NSArray, "writeToFile:atomically:", co_writeToFile);
}

/* ------------------------------------------------------------------ NSFileHandle (write-append files in the app container) */
typedef struct { char path[1024]; uint32_t off; bool write; } FH;
static gptr cls_FH;
static gptr fh_new(const char *gpath, bool write) {
    char p[1024]; vfs_resolve(gpath, p, sizeof p);
    if (!write && host_file_size(p) < 0) return 0;
    if (write && host_file_size(p) < 0) return 0;   /* fileHandleForWritingAtPath: requires an existing file */
    gptr h = objc_alloc_instance(cls_FH, 0);
    FH *s = hostdata_ensure(h, sizeof(FH), NULL);
    snprintf(s->path, sizeof s->path, "%s", p); s->write = write;
    return objc_autorelease_(h);
}
static void fh_forWriting(CPU *c) { RET(fh_new(nsstr_cstr(ARG(2)), true)); }
static void fh_forReading(CPU *c) { RET(fh_new(nsstr_cstr(ARG(2)), false)); }
static void fh_writeData(CPU *c) {
    FH *s = hostdata(SELF); gptr d = ARG(2);
    uint32_t n = msg(c, d, "length", 0); gptr b = msg(c, d, "bytes", 0);
    int sz = host_file_size(s->path);
    if (s->off >= (uint32_t)(sz < 0 ? 0 : sz)) { host_file_write(s->path, G2H(b), n, 1); s->off = (uint32_t)(sz < 0 ? 0 : sz) + n; return; }
    /* overwrite in the middle: read-modify-write */
    uint32_t total = s->off + n > (uint32_t)sz ? s->off + n : (uint32_t)sz;
    uint8_t *buf = calloc(1, total); host_file_read(s->path, buf, 0, (uint32_t)sz); memcpy(buf + s->off, G2H(b), n);
    host_file_write(s->path, buf, total, 0); free(buf); s->off += n;
}
static void fh_seekToEnd(CPU *c) { FH *s = hostdata(SELF); int sz = host_file_size(s->path); s->off = sz < 0 ? 0 : (uint32_t)sz; RET64(s->off); }
static void fh_seekToFileOffset(CPU *c) { FH *s = hostdata(SELF); s->off = ARG(2); }
static void fh_offsetInFile(CPU *c) { FH *s = hostdata(SELF); RET64(s->off); }
static void fh_truncate(CPU *c) { FH *s = hostdata(SELF); uint32_t n = ARG(2); int sz = host_file_size(s->path); uint8_t *buf = calloc(1, n + 1); if (sz > 0) host_file_read(s->path, buf, 0, (uint32_t)sz < n ? (uint32_t)sz : n); host_file_write(s->path, buf, n, 0); free(buf); s->off = n; }
static void fh_readDataToEndOfFile(CPU *c) { FH *s = hostdata(SELF); int sz = host_file_size(s->path); uint32_t n = sz > (int)s->off ? (uint32_t)sz - s->off : 0; uint8_t *b = malloc(n + 1); host_file_read(s->path, b, s->off, n); s->off += n; RET(nsdata_new(b, n, false)); free(b); }
static void fh_close(CPU *c) { UNUSED(c); }
void foundation4_init(void) {
    cls_FH = host_class("NSFileHandle", "NSObject", 4);
    CM(cls_FH, "fileHandleForWritingAtPath:", fh_forWriting); CM(cls_FH, "fileHandleForUpdatingAtPath:", fh_forWriting);
    CM(cls_FH, "fileHandleForReadingAtPath:", fh_forReading);
    M(cls_FH, "writeData:", fh_writeData); M(cls_FH, "seekToEndOfFile", fh_seekToEnd); M(cls_FH, "seekToFileOffset:", fh_seekToFileOffset);
    M(cls_FH, "offsetInFile", fh_offsetInFile); M(cls_FH, "truncateFileAtOffset:", fh_truncate); M(cls_FH, "readDataToEndOfFile", fh_readDataToEndOfFile);
    M(cls_FH, "closeFile", fh_close); M(cls_FH, "synchronizeFile", fh_close);
}

/* ------------------------------------------------------------------ NSDateFormatter (Unicode TR35 subset, local time) */
#include <time.h>
typedef struct { gptr fmt; } DFS;
static gptr cls_DF;
double host_tz_offset_min(double unix_ms);
static void df_setDateFormat(CPU *c) { DFS *s = hostdata_ensure(SELF, sizeof(DFS), NULL); rt_release(c, s->fmt); s->fmt = rt_retain(c, msg(c, ARG(2), "copy", 0)); rt_release(c, s->fmt); }
static void df_dateFormat(CPU *c) { DFS *s = hostdata(SELF); RET(s ? s->fmt : 0); }
static void df_noop(CPU *c) { UNUSED(c); }
static void df_stringFromDate(CPU *c) {
    DFS *s = hostdata(SELF); const char *f = s && s->fmt ? nsstr_cstr(s->fmt) : "yyyy-MM-dd HH:mm:ss";
    char *fc = strdup(f);
    double t = U2D(msg64(c, ARG(2), "timeIntervalSince1970", 0));
    double off = host_tz_offset_min(t * 1000.0);
    time_t tt = (time_t)(t + off * 60); struct tm tm; gmtime_r(&tt, &tm);
    int ms = (int)((t - floor(t)) * 1000);
    char out[256]; size_t k = 0;
    for (const char *p = fc; *p && k < 200;) {
        char ch = *p; int n = 0; while (p[n] == ch) n++;
        if (ch == '\'') { p++; while (*p && *p != '\'') out[k++] = *p++; if (*p) p++; continue; }
        switch (ch) {
        case 'y': k += (size_t)sprintf(out + k, n == 2 ? "%02d" : "%04d", n == 2 ? (tm.tm_year + 1900) % 100 : tm.tm_year + 1900); break;
        case 'M': k += (size_t)sprintf(out + k, n >= 2 ? "%02d" : "%d", tm.tm_mon + 1); break;
        case 'd': k += (size_t)sprintf(out + k, n >= 2 ? "%02d" : "%d", tm.tm_mday); break;
        case 'H': k += (size_t)sprintf(out + k, n >= 2 ? "%02d" : "%d", tm.tm_hour); break;
        case 'h': k += (size_t)sprintf(out + k, n >= 2 ? "%02d" : "%d", tm.tm_hour % 12 ? tm.tm_hour % 12 : 12); break;
        case 'm': k += (size_t)sprintf(out + k, n >= 2 ? "%02d" : "%d", tm.tm_min); break;
        case 's': k += (size_t)sprintf(out + k, n >= 2 ? "%02d" : "%d", tm.tm_sec); break;
        case 'S': k += (size_t)sprintf(out + k, "%03d", ms); break;
        case 'a': k += (size_t)sprintf(out + k, tm.tm_hour < 12 ? "AM" : "PM"); break;
        case 'Z': case 'z': case 'x': case 'X': { int o = (int)off; k += (size_t)sprintf(out + k, "%c%02d%02d", o < 0 ? '-' : '+', abs(o) / 60, abs(o) % 60); break; }
        default: for (int i = 0; i < n; i++) out[k++] = ch;
        }
        p += n;
    }
    out[k] = 0; free(fc);
    RET(nsstr(out));
}
static void df_dateFromString(CPU *c) { rt_log("NSDateFormatter dateFromString: not supported (%s)", nsstr_cstr(ARG(2))); RET(0); }
void foundation5_init(void) {
    cls_DF = host_class("NSDateFormatter", "NSObject", 4);
    M(cls_DF, "setDateFormat:", df_setDateFormat); M(cls_DF, "dateFormat", df_dateFormat); M(cls_DF, "stringFromDate:", df_stringFromDate);
    M(cls_DF, "dateFromString:", df_dateFromString); M(cls_DF, "setLocale:", df_noop); M(cls_DF, "setTimeZone:", df_noop);
    M(cls_DF, "setDateStyle:", df_noop); M(cls_DF, "setTimeStyle:", df_noop); M(cls_DF, "setFormatterBehavior:", df_noop);
}

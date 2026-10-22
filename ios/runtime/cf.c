/* cf.c — CoreFoundation C API mapped onto the host Foundation objects (toll-free bridging). */
#include "rt.h"
#include "fmt.h"
#include <ctype.h>

gptr rt_retain(CPU *c, gptr obj);
void rt_release(CPU *c, gptr obj);
gptr rt_autorelease(CPU *c, gptr obj);
const char *vfs_resolve(const char *in, char *out, size_t outlen);
extern gptr cls_NSString, cls_NSMutableString, cls_NSArray, cls_NSMutableArray, cls_NSDictionary, cls_NSMutableDictionary, cls_NSNumber, cls_NSData, cls_NSMutableData;
static gptr cls_URL, cls_UUIDcf;

/* ------------------------------------------------------------------ NSURL */
typedef struct { gptr str; bool file; } URLS;
static gptr url_new(CPU *c, gptr str, bool file) { gptr u = objc_alloc_instance(cls_URL, 0); URLS *s = hostdata_ensure(u, sizeof(URLS), NULL); s->str = rt_retain(c, msg(c, str, "copy", 0)); rt_release(c, s->str); s->file = file; return u; }
static void ur_fileURLWithPath(CPU *c) { RET(objc_autorelease_(url_new(c, ARG(2), true))); }
static void ur_URLWithString(CPU *c) { if (!ARG(2)) { RET(0); return; } const char *s = nsstr_cstr(ARG(2)); RET(objc_autorelease_(url_new(c, ARG(2), !strncmp(s, "file://", 7)))); }
static void ur_initFileURLWithPath(CPU *c) { URLS *s = hostdata_ensure(SELF, sizeof(URLS), NULL); s->str = rt_retain(c, ARG(2)); s->file = true; RET(SELF); }
static void ur_initWithString(CPU *c) { URLS *s = hostdata_ensure(SELF, sizeof(URLS), NULL); s->str = rt_retain(c, ARG(2)); s->file = !strncmp(nsstr_cstr(ARG(2)), "file://", 7); RET(SELF); }
static const char *url_path(gptr u) { URLS *s = hostdata(u); if (!s) return ""; const char *p = nsstr_cstr(s->str); return !strncmp(p, "file://", 7) ? p + 7 : p; }
static void ur_path(CPU *c) { RET(nsstr(url_path(SELF))); }
static void ur_absoluteString(CPU *c) { URLS *s = hostdata(SELF); if (s && s->file) { char b[1100]; snprintf(b, sizeof b, "file://%s", url_path(SELF)); RET(nsstr(b)); } else RET(s ? s->str : 0); }
static void ur_isFileURL(CPU *c) { URLS *s = hostdata(SELF); RET(s && s->file); }
static void ur_lastPathComponent(CPU *c) { RET(msg(c, nsstr(url_path(SELF)), "lastPathComponent", 0)); }
static void ur_pathExtension(CPU *c) { RET(msg(c, nsstr(url_path(SELF)), "pathExtension", 0)); }
static void ur_URLByAppendingPathComponent(CPU *c) { gptr p = msg(c, nsstr(url_path(SELF)), "stringByAppendingPathComponent:", 1, ARG(2)); RET(objc_autorelease_(url_new(c, p, true))); }
static void ur_scheme(CPU *c) { URLS *s = hostdata(SELF); if (s && s->file) { RET(nsstr("file")); return; } const char *p = s ? nsstr_cstr(s->str) : ""; const char *q = strstr(p, "://"); if (!q) { RET(0); return; } char *t = strndup(p, (size_t)(q - p)); RET(nsstr(t)); free(t); }
static void ur_host(CPU *c) { URLS *s = hostdata(SELF); const char *p = s ? nsstr_cstr(s->str) : ""; const char *q = strstr(p, "://"); if (!q) { RET(0); return; } q += 3; const char *e = q; while (*e && *e != '/' && *e != ':' && *e != '?') e++; char *t = strndup(q, (size_t)(e - q)); RET(nsstr(t)); free(t); }
static void ur_description(CPU *c) { ur_absoluteString(c); }
static void ur_isEqual(CPU *c) { URLS *a = hostdata(SELF), *b = ARG(2) ? hostdata(ARG(2)) : NULL; RET(a && b && obj_equal(c, a->str, b->str)); }
static void ur_copy(CPU *c) { RET(objc_retain_(SELF)); }
static void ur_checkReachable(CPU *c) {
    URLS *s = hostdata(SELF);
    gptr fm = msg(c, objc_class_named("NSFileManager"), "defaultManager", 0);
    bool ok = s && s->file && msg(c, fm, "fileExistsAtPath:", 1, nsstr(url_path(SELF)));
    if (!ok && ARG(2)) ST32(ARG(2), msg(c, objc_class_named("NSError"), "errorWithDomain:code:userInfo:", 3, nsstr("NSCocoaErrorDomain"), 260, 0));
    RET(ok);
}
/* resource values: backup exclusion etc. are accepted and not persisted (no iCloud backup in the port) */
static void ur_setResourceValue(CPU *c) { RET(1); }
static void ur_getResourceValue(CPU *c) { if (ARG(2)) ST32(ARG(2), 0); RET(1); }
static void ur_query(CPU *c) { URLS *s = hostdata(SELF); const char *p = s ? nsstr_cstr(s->str) : ""; const char *q = strchr(p, '?'); RET(q ? nsstr(q + 1) : 0); }

/* ------------------------------------------------------------------ memory management / type ids */
void H_CFRetain(CPU *c) { RET(rt_retain(c, ARG(0))); }
void H_CFRelease(CPU *c) { if (!ARG(0)) rt_fatal(c, "CFRelease(NULL)"); rt_release(c, ARG(0)); }
void H_CFAutorelease(CPU *c) { RET(rt_autorelease(c, ARG(0))); }
enum { TID_STRING = 7, TID_ARRAY = 19, TID_DICT = 18, TID_NUMBER = 22, TID_DATA = 20, TID_BOOL = 21, TID_URL = 29, TID_OTHER = 1 };
static uint32_t type_id(gptr o) {
    if (is_nsstring(o)) return TID_STRING;
    if (objc_is_kind_of(o, cls_NSArray)) return TID_ARRAY;
    if (objc_is_kind_of(o, cls_NSDictionary)) return TID_DICT;
    if (is_nsnumber(o)) return TID_NUMBER;
    if (objc_is_kind_of(o, cls_NSData)) return TID_DATA;
    if (objc_is_kind_of(o, cls_URL)) return TID_URL;
    return TID_OTHER;
}
void H_CFGetTypeID(CPU *c) { RET(type_id(ARG(0))); }
void H_CFDataGetTypeID(CPU *c) { RET(TID_DATA); }
void H_CFEqual(CPU *c) { RET(obj_equal(c, ARG(0), ARG(1))); }
void H_CFHash(CPU *c) { RET(obj_hash(c, ARG(0))); }
void H_CFShow(CPU *c) { char *d = NULL; extern char *obj_description_utf8(CPU *, gptr); d = obj_description_utf8(c, ARG(0)); rt_log("CFShow: %s", d); free(d); }

/* ------------------------------------------------------------------ strings */
#define kCFStringEncodingUTF8 0x08000100u
static uint32_t ns_enc(uint32_t cfenc) { /* CFStringEncoding -> NSStringEncoding */
    switch (cfenc) { case 0x08000100: return 4; case 0x0600: return 1; case 0x0201: return 5; case 0x0100: return 10; case 0: return 30; default: return cfenc == 0x0500 ? 12 : 4; }
}
void H_CFStringCreateWithCString(CPU *c) { if (!ARG(1)) { RET(0); return; } gptr s = objc_alloc_instance(cls_NSString, 0); RET(msg(c, s, "initWithCString:encoding:", 2, ARG(1), ns_enc(ARG(2)))); }
void H_CFStringCreateWithCStringNoCopy(CPU *c) { H_CFStringCreateWithCString(c); }
void H_CFStringCreateWithBytes(CPU *c) { gptr s = objc_alloc_instance(cls_NSString, 0); RET(msg(c, s, "initWithBytes:length:encoding:", 3, ARG(1), ARG(2), ns_enc(ARG(3)))); }
void H_CFStringCreateWithBytesNoCopy(CPU *c) { H_CFStringCreateWithBytes(c); }
void H_CFStringCreateCopy(CPU *c) { RET(msg(c, ARG(1), "copy", 0)); }
void H_CFStringCreateMutable(CPU *c) { gptr s = objc_alloc_instance(cls_NSMutableString, 0); RET(msg(c, s, "init", 0)); }
void H_CFStringCreateWithFormat(CPU *c) { ArgReader a = {c, 3, 0}; char *r = gformat(c, nsstr_cstr(ARG(2)), &a); RET(nsstr_retained(r)); free(r); }
void H_CFStringCreateWithFormatAndArguments(CPU *c) { ArgReader a = {c, 0, ARG(3)}; char *r = gformat(c, nsstr_cstr(ARG(2)), &a); RET(nsstr_retained(r)); free(r); }
void H_CFStringCreateWithSubstring(CPU *c) { gptr s = msg(c, ARG(1), "substringWithRange:", 2, ARG(2), ARG(3)); RET(rt_retain(c, s)); }
void H_CFStringAppend(CPU *c) { msg(c, ARG(0), "appendString:", 1, ARG(1)); }
void H_CFStringAppendCString(CPU *c) { msg(c, ARG(0), "appendString:", 1, nsstr(GSTR(ARG(1)))); }
void H_CFStringAppendFormat(CPU *c) { ArgReader a = {c, 3, 0}; char *r = gformat(c, nsstr_cstr(ARG(2)), &a); msg(c, ARG(0), "appendString:", 1, nsstr(r)); free(r); }
void H_CFStringDelete(CPU *c) { msg(c, ARG(0), "deleteCharactersInRange:", 2, ARG(1), ARG(2)); }
void H_CFStringGetLength(CPU *c) { RET(nsstr_len(ARG(0))); }
void H_CFStringGetCharacterAtIndex(CPU *c) { uint32_t n; uint16_t *u = nsstr_utf16(ARG(0), &n); RET(ARG(1) < n ? u[ARG(1)] : 0); free(u); }
void H_CFStringGetCharacters(CPU *c) { uint32_t n; uint16_t *u = nsstr_utf16(ARG(0), &n); uint32_t loc = ARG(1), len = ARG(2); if (loc + len > n) rt_fatal(c, "CFStringGetCharacters out of range"); memcpy(G2H(ARG(3)), u + loc, len * 2); free(u); }
void H_CFStringGetCharactersPtr(CPU *c) { RET(0); }
void H_CFStringGetCStringPtr(CPU *c) { RET(0); }
void H_CFStringGetCString(CPU *c) {
    const char *s = nsstr_cstr(ARG(0)); uint32_t n = ARG(2);
    if (strlen(s) + 1 > n) { RET(0); return; }
    memcpy(G2H(ARG(1)), s, strlen(s) + 1); RET(1);
}
void H_CFStringGetMaximumSizeForEncoding(CPU *c) { RET(ARG(0) * 3); }
void H_CFStringGetBytes(CPU *c) {
    /* (str, range{loc,len}, encoding, lossByte, isExternal, buffer, maxLen, usedLen*) */
    gptr s = ARG(0); uint32_t loc = ARG(1), len = ARG(2), enc = ARG(3);
    gptr buf = ARG(6); uint32_t max = ARG(7); gptr used = ARG(8);
    uint32_t n; uint16_t *u = nsstr_utf16(s, &n);
    if (loc + len > n) len = n > loc ? n - loc : 0;
    uint32_t out = 0, conv = 0;
    for (uint32_t i = 0; i < len; i++) {
        uint32_t ch = u[loc + i];
        char tmp[4]; uint32_t k;
        if (enc == kCFStringEncodingUTF8) {
            if (ch < 0x80) { tmp[0] = (char)ch; k = 1; } else if (ch < 0x800) { tmp[0] = (char)(0xc0 | ch >> 6); tmp[1] = (char)(0x80 | (ch & 63)); k = 2; }
            else { tmp[0] = (char)(0xe0 | ch >> 12); tmp[1] = (char)(0x80 | ((ch >> 6) & 63)); tmp[2] = (char)(0x80 | (ch & 63)); k = 3; }
        } else if (enc == 0x0100 || enc == 0x14000100) { tmp[0] = (char)(ch & 0xff); tmp[1] = (char)(ch >> 8); k = 2; }
        else { if (ch > 0xff) { if (!ARG(4)) break; ch = ARG(4); } tmp[0] = (char)ch; k = 1; }
        if (buf && out + k > max) break;
        if (buf) memcpy(G2H(buf + out), tmp, k);
        out += k; conv++;
    }
    free(u);
    if (used) ST32(used, out);
    RET(conv);
}
void H_CFStringCompare(CPU *c) { RET(msg(c, ARG(0), "compare:options:", 2, ARG(1), ARG(2))); }
void H_CFStringCompareWithOptions(CPU *c) { RET(msg(c, ARG(0), "compare:options:", 2, ARG(1), ARG(4))); }

/* ------------------------------------------------------------------ arrays / dictionaries / numbers / data */
void H_CFArrayGetCount(CPU *c) { RET(msg(c, ARG(0), "count", 0)); }
void H_CFArrayGetValueAtIndex(CPU *c) { RET(msg(c, ARG(0), "objectAtIndex:", 1, ARG(1))); }
void H_CFArrayGetValues(CPU *c) { for (uint32_t i = 0; i < ARG(2); i++) ST32(ARG(3) + 4 * i, msg(c, ARG(0), "objectAtIndex:", 1, ARG(1) + i)); }
void H_CFDictionaryGetCount(CPU *c) { RET(msg(c, ARG(0), "count", 0)); }
void H_CFDictionaryGetValue(CPU *c) { RET(nsdict_get(ARG(0), ARG(1))); }
void H_CFDictionaryGetKeysAndValues(CPU *c) {
    gptr keys = msg(c, ARG(0), "allKeys", 0);
    for (uint32_t i = 0; i < nsarray_count(keys); i++) { gptr k = nsarray_get(keys, i); if (ARG(1)) ST32(ARG(1) + 4 * i, k); if (ARG(2)) ST32(ARG(2) + 4 * i, nsdict_get(ARG(0), k)); }
}
void H_CFNumberCreate(CPU *c) {
    uint32_t t = ARG(1); gptr p = ARG(2);
    switch (t) {
    case 1: RET(nsnumber_int((int8_t)LD8(p), true)); break;
    case 2: RET(nsnumber_int((int16_t)LD16(p), true)); break;
    case 3: case 9: case 10: case 15: RET(nsnumber_int((int32_t)LD32(p), true)); break;
    case 4: case 11: RET(nsnumber_int((int64_t)LD64(p), true)); break;
    case 5: case 12: RET(nsnumber_double(U2F(LD32(p)), true)); break;
    case 6: case 13: case 16: RET(nsnumber_double(U2D(LD64(p)), true)); break;
    default: rt_fatal(c, "CFNumberCreate type %u", t);
    }
}
void H_CFNumberGetValue(CPU *c) {
    gptr n = ARG(0); uint32_t t = ARG(1); gptr p = ARG(2);
    switch (t) {
    case 1: ST8(p, nsnumber_get_int(n)); break;
    case 2: ST16(p, nsnumber_get_int(n)); break;
    case 3: case 9: case 10: case 15: ST32(p, (uint32_t)nsnumber_get_int(n)); break;
    case 4: case 11: ST64(p, (uint64_t)nsnumber_get_int(n)); break;
    case 5: case 12: ST32(p, F2U((float)nsnumber_get_double(n))); break;
    case 6: case 13: case 16: ST64(p, D2U(nsnumber_get_double(n))); break;
    default: rt_fatal(c, "CFNumberGetValue type %u", t);
    }
    RET(1);
}
void H_CFDataCreate(CPU *c) { RET(nsdata_new(G2H(ARG(1)), ARG(2), true)); }
void H_CFDataCreateWithBytesNoCopy(CPU *c) { RET(nsdata_new(G2H(ARG(1)), ARG(2), true)); }
void H_CFDataCreateMutable(CPU *c) { gptr d = objc_alloc_instance(cls_NSMutableData, 0); RET(msg(c, d, "initWithCapacity:", 1, ARG(1))); }
void H_CFDataGetMutableBytePtr(CPU *c) { RET(msg(c, ARG(0), "mutableBytes", 0)); }
void H_CFDataSetLength(CPU *c) { msg(c, ARG(0), "setLength:", 1, ARG(1)); }

/* ------------------------------------------------------------------ bundle / locale / URL / UUID */
void H_CFBundleGetMainBundle(CPU *c) { RET(msg(c, objc_class_named("NSBundle"), "mainBundle", 0)); }
void H_CFBundleCopyBundleLocalizations(CPU *c) { RET(rt_retain(c, msg(c, ARG(0), "localizations", 0))); }
void H_CFBundleCopyBundleURL(CPU *c) { RET(rt_retain(c, msg(c, ARG(0), "bundleURL", 0))); }
void H_CFBundleCopyResourceURL(CPU *c) {
    gptr p = msg(c, ARG(0), ARG(3) ? "pathForResource:ofType:inDirectory:" : "pathForResource:ofType:", 3, ARG(1), ARG(2), ARG(3));
    RET(p ? url_new(c, p, true) : 0);
}
void H_CFLocaleCopyCurrent(CPU *c) { RET(msg(c, objc_class_named("NSLocale"), "currentLocale", 0)); }
void H_CFLocaleCopyPreferredLanguages(CPU *c) { RET(rt_retain(c, msg(c, objc_class_named("NSLocale"), "preferredLanguages", 0))); }
void H_CFLocaleGetValue(CPU *c) { RET(msg(c, ARG(0), "objectForKey:", 1, ARG(1))); }
void H_CFURLGetFileSystemRepresentation(CPU *c) {
    const char *p = url_path(ARG(0)); uint32_t n = ARG(3);
    if (strlen(p) + 1 > n) { RET(0); return; }
    memcpy(G2H(ARG(2)), p, strlen(p) + 1); RET(1);
}
void H_CFURLCreateStringByAddingPercentEscapes(CPU *c) {
    const char *s = nsstr_cstr(ARG(1)); char *o = malloc(strlen(s) * 3 + 1); size_t k = 0;
    for (const unsigned char *p = (const unsigned char *)s; *p; p++) {
        if (isalnum(*p) || strchr("-_.~", *p)) o[k++] = (char)*p; else k += (size_t)sprintf(o + k, "%%%02X", *p);
    }
    o[k] = 0; RET(nsstr_retained(o)); free(o);
}
void H_CFUUIDCreate(CPU *c) { RET(objc_alloc_instance(cls_UUIDcf, 0)); }
void H_CFUUIDCreateString(CPU *c) { static uint32_t k; char b[64]; snprintf(b, sizeof b, "5F1E0C2A-7B3D-4E59-9A61-%012X", ++k); RET(nsstr_retained(b)); }
void H_CFRunLoopGetCurrent(CPU *c) { RET(msg(c, objc_class_named("NSRunLoop"), "currentRunLoop", 0)); }
void H_CFNetworkCopySystemProxySettings(CPU *c) { RET(nsdict_new(false, true)); }

void cf_init(void) {
    gptr p;
    p = data_import_alloc("_kCFAllocatorDefault", 4); ST32(p, 0);
    p = data_import_alloc("_kCFAllocatorNull", 4); ST32(p, 0);
    p = data_import_alloc("_kCFCoreFoundationVersionNumber", 8); ST64(p, D2U(1145.15));
    p = data_import_alloc("_NSFoundationVersionNumber", 8); ST64(p, D2U(1144.17));
    static const char *strs[][2] = {{"_NSInternalInconsistencyException", "NSInternalInconsistencyException"}, {"_NSInvalidArgumentException", "NSInvalidArgumentException"},
        {"_NSMallocException", "NSMallocException"}, {"_NSRangeException", "NSRangeException"}, {"_NSLocalizedDescriptionKey", "NSLocalizedDescription"},
        {"_NSLocalizedRecoveryOptionsErrorKey", "NSLocalizedRecoveryOptions"}, {"_NSLocalizedRecoverySuggestionErrorKey", "NSLocalizedRecoverySuggestion"},
        {"_NSRecoveryAttempterErrorKey", "NSRecoveryAttempter"}, {"_NSUnderlyingErrorKey", "NSUnderlyingError"}, {"_NSURLErrorDomain", "NSURLErrorDomain"},
        {"_NSKeyedArchiveRootObjectKey", "root"}, {"_kCFNetworkProxiesHTTPPort", "HTTPPort"}, {"_kCFNetworkProxiesHTTPProxy", "HTTPProxy"}};
    for (unsigned i = 0; i < sizeof strs / sizeof strs[0]; i++) { p = data_import_alloc(strs[i][0], 4); ST32(p, nsstr_static(strs[i][1])); }
    cls_URL = host_class("NSURL", "NSObject", 4);
    host_cmethod(cls_URL, "fileURLWithPath:", "", ur_fileURLWithPath); host_cmethod(cls_URL, "fileURLWithPath:isDirectory:", "", ur_fileURLWithPath);
    host_cmethod(cls_URL, "URLWithString:", "", ur_URLWithString);
    host_method(cls_URL, "initFileURLWithPath:", "", ur_initFileURLWithPath); host_method(cls_URL, "initWithString:", "", ur_initWithString);
    host_method(cls_URL, "path", "", ur_path); host_method(cls_URL, "absoluteString", "", ur_absoluteString); host_method(cls_URL, "isFileURL", "", ur_isFileURL);
    host_method(cls_URL, "lastPathComponent", "", ur_lastPathComponent); host_method(cls_URL, "pathExtension", "", ur_pathExtension);
    host_method(cls_URL, "URLByAppendingPathComponent:", "", ur_URLByAppendingPathComponent); host_method(cls_URL, "scheme", "", ur_scheme);
    host_method(cls_URL, "host", "", ur_host); host_method(cls_URL, "description", "", ur_description); host_method(cls_URL, "isEqual:", "", ur_isEqual);
    host_method(cls_URL, "query", "", ur_query);
    host_method(cls_URL, "checkResourceIsReachableAndReturnError:", "", ur_checkReachable);
    host_method(cls_URL, "setResourceValue:forKey:error:", "", ur_setResourceValue);
    host_method(cls_URL, "getResourceValue:forKey:error:", "", ur_getResourceValue); host_method(cls_URL, "copyWithZone:", "", ur_copy);
    cls_UUIDcf = host_class("__NSCFUUID", "NSObject", 4);
}

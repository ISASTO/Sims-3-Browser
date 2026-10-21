/* foundation.c — host implementations of core Foundation classes (NSObject, strings, collections,
 * numbers, data, null, autorelease pool).  Instance state lives in the side-table payload
 * (hostdata) so host classes have the same 4-byte instance size as on iOS (no ivar sliding). */
#include "rt.h"
#include "fmt.h"
#include <ctype.h>

gptr rt_retain(CPU *c, gptr obj);
void rt_release(CPU *c, gptr obj);
gptr rt_autorelease(CPU *c, gptr obj);
void objc_destroy_instance(gptr obj);
uint32_t objc_pool_push(void);
void objc_pool_pop(CPU *c, uint32_t token);
bool objc_is_class(gptr obj);
bool objc_class_conforms(gptr cls, const char *proto);
extern gptr host_nsobject_retain_imp, host_nsobject_release_imp, host_nsobject_autorelease_imp;

gptr cls_NSObject, cls_NSString, cls_NSMutableString, cls_NSConstantString, cls_NSArray, cls_NSMutableArray,
     cls_NSDictionary, cls_NSMutableDictionary, cls_NSNumber, cls_NSData, cls_NSMutableData, cls_NSNull,
     cls_NSAutoreleasePool, cls_NSSet, cls_NSMutableSet, cls_NSValue, cls_NSEnumerator, cls_NSArrayEnum;
static gptr null_singleton;

/* ================================================================== NSObject */
static void o_alloc(CPU *c) { RET(objc_alloc_instance(SELF, 0)); }
static void o_allocWithZone(CPU *c) { RET(objc_alloc_instance(SELF, 0)); }
static void o_new(CPU *c) { gptr o = objc_alloc_instance(SELF, 0); RET(msg(c, o, "init", 0)); }
static void o_self(CPU *c) { RET(SELF); }
static void o_class_i(CPU *c) { RET(LD32(SELF)); }
static void o_class_c(CPU *c) { RET(SELF); }
static void o_superclass_i(CPU *c) { RET(objc_superclass(LD32(SELF))); }
static void o_superclass_c(CPU *c) { RET(objc_superclass(SELF)); }
static void o_dealloc(CPU *c) { objc_destroy_instance(SELF); }
static void o_retain(CPU *c) { RET(objc_retain_(SELF)); }
static void o_release(CPU *c) { objc_release_(c, SELF); }
static void o_autorelease(CPU *c) { RET(objc_autorelease_(SELF)); }
static void o_retainCount(CPU *c) { RET(objc_retain_count(SELF)); }
static void o_noop_retain_c(CPU *c) { RET(SELF); }
static void o_noop_c(CPU *c) { UNUSED(c); }
static void o_isKindOfClass(CPU *c) { RET(objc_is_kind_of(SELF, ARG(2))); }
static void o_isMemberOfClass(CPU *c) { RET(LD32(SELF) == ARG(2)); }
static void o_respondsToSelector(CPU *c) { RET(objc_lookup_imp(LD32(SELF), ARG(2)) != 0); }
static void o_instancesRespondToSelector(CPU *c) { RET(objc_lookup_imp(SELF, ARG(2)) != 0); }
static void o_conformsToProtocol(CPU *c) {
    gptr p = ARG(2); gptr cls = objc_is_class(SELF) && !objc_is_kind_of(SELF, 0) ? SELF : LD32(SELF);
    if (!objc_is_class(SELF)) cls = LD32(SELF);
    RET(p && objc_class_conforms(cls, GSTR(LD32(p + 4))));
}
static void o_isEqual(CPU *c) { RET(SELF == ARG(2)); }
static void o_hash(CPU *c) { RET(SELF); }
static void o_description(CPU *c) { char b[128]; snprintf(b, sizeof b, "<%s: 0x%x>", objc_obj_class_name(SELF), SELF); RET(nsstr(b)); }
static void o_description_c(CPU *c) { RET(nsstr(objc_class_name(SELF))); }
static void o_copy(CPU *c) { RET(msg(c, SELF, "copyWithZone:", 1, 0)); }
static void o_mutableCopy(CPU *c) { RET(msg(c, SELF, "mutableCopyWithZone:", 1, 0)); }
static void o_zone(CPU *c) { RET(0); }
static void o_isProxy(CPU *c) { RET(0); }
static void o_performSelector(CPU *c) { uint32_t a[2] = {SELF, ARG(2)}; gptr imp = objc_lookup_imp(LD32(SELF), ARG(2)); if (!imp) rt_fatal(c, "performSelector: %s not implemented by %s", sel_name(ARG(2)), objc_obj_class_name(SELF)); RET(guest_call(c, imp, 2, a)); }
static void o_performSelector1(CPU *c) { uint32_t a[3] = {SELF, ARG(2), ARG(3)}; gptr imp = objc_lookup_imp(LD32(SELF), ARG(2)); if (!imp) rt_fatal(c, "performSelector:withObject: %s not implemented by %s", sel_name(ARG(2)), objc_obj_class_name(SELF)); RET(guest_call(c, imp, 3, a)); }
static void o_performSelector2(CPU *c) { uint32_t a[4] = {SELF, ARG(2), ARG(3), ARG(4)}; gptr imp = objc_lookup_imp(LD32(SELF), ARG(2)); if (!imp) rt_fatal(c, "performSelector:withObject:withObject: %s missing", sel_name(ARG(2))); RET(guest_call(c, imp, 4, a)); }
static void o_performSelectorAfterDelay(CPU *c) { runloop_perform_later(SELF, ARG(2), ARG(3), ARGD(4) * 1000.0); }
static void o_performSelectorOnMainThread(CPU *c) {
    /* waitUntilDone or not: the cooperative scheduler runs on one host thread; perform now if waiting, else next tick */
    if (ARG(4) & 0xff) { uint32_t a[3] = {SELF, ARG(2), ARG(3)}; gptr imp = objc_lookup_imp(LD32(SELF), ARG(2)); if (imp) guest_call(c, imp, 3, a); }
    else runloop_perform_later(SELF, ARG(2), ARG(3), 0);
}
static void o_methodForSelector(CPU *c) { RET(objc_lookup_imp(LD32(SELF), ARG(2))); }
static void o_init(CPU *c) { RET(SELF); }
static void o_doesNotRecognizeSelector(CPU *c) { rt_fatal(c, "doesNotRecognizeSelector: %s", sel_name(ARG(2))); }
static void o_cancelPrevious(CPU *c) { void runloop_cancel_perform(gptr target, gptr sel, gptr arg, bool any); runloop_cancel_perform(SELF, ARG(2), ARG(3), false); }
static void o_cancelPreviousAll(CPU *c) { void runloop_cancel_perform(gptr target, gptr sel, gptr arg, bool any); runloop_cancel_perform(SELF, 0, 0, true); }

/* ================================================================== strings */
typedef struct Str { uint16_t *u; uint32_t len, cap; char *utf8; bool mutable_; } Str;
static void str_dtor(void *p) { Str *s = p; free(s->u); free(s->utf8); }

static uint16_t *utf8_to_16(const char *s, uint32_t n, uint32_t *outlen) {
    uint16_t *o = malloc((n + 1) * 2); uint32_t k = 0;
    for (uint32_t i = 0; i < n;) {
        uint32_t ch = (uint8_t)s[i];
        int extra = ch >= 0xf0 ? 3 : ch >= 0xe0 ? 2 : ch >= 0xc0 ? 1 : 0;
        if (extra) { ch &= 0x3f >> extra; for (int j = 1; j <= extra && i + j < n; j++) ch = (ch << 6) | ((uint8_t)s[i + j] & 0x3f); }
        i += 1 + extra;
        if (ch >= 0x10000) { ch -= 0x10000; o = realloc(o, (n + 2 + k) * 2); o[k++] = (uint16_t)(0xd800 | (ch >> 10)); o[k++] = (uint16_t)(0xdc00 | (ch & 0x3ff)); }
        else o[k++] = (uint16_t)ch;
    }
    *outlen = k;
    return o;
}
static char *utf16_to_8(const uint16_t *u, uint32_t n) {
    char *o = malloc(n * 3 + 1); uint32_t k = 0;
    for (uint32_t i = 0; i < n; i++) {
        uint32_t ch = u[i];
        if (ch >= 0xd800 && ch < 0xdc00 && i + 1 < n && u[i + 1] >= 0xdc00 && u[i + 1] < 0xe000) { ch = 0x10000 + ((ch - 0xd800) << 10) + (u[i + 1] - 0xdc00); i++; o = realloc(o, n * 3 + 8 + k); }
        if (ch < 0x80) o[k++] = (char)ch;
        else if (ch < 0x800) { o[k++] = (char)(0xc0 | (ch >> 6)); o[k++] = (char)(0x80 | (ch & 0x3f)); }
        else if (ch < 0x10000) { o[k++] = (char)(0xe0 | (ch >> 12)); o[k++] = (char)(0x80 | ((ch >> 6) & 0x3f)); o[k++] = (char)(0x80 | (ch & 0x3f)); }
        else { o[k++] = (char)(0xf0 | (ch >> 18)); o[k++] = (char)(0x80 | ((ch >> 12) & 0x3f)); o[k++] = (char)(0x80 | ((ch >> 6) & 0x3f)); o[k++] = (char)(0x80 | (ch & 0x3f)); }
    }
    o[k] = 0;
    return o;
}

/* get string payload, materialising constant CFStrings {isa, flags, ptr, len} on first use */
static Str *S(gptr o) {
    Str *s = hostdata(o);
    if (s) return s;
    if (LD32(o) == cls_NSConstantString) {
        s = hostdata_ensure(o, sizeof(Str), str_dtor);
        uint32_t flags = LD32(o + 4), p = LD32(o + 8), n = LD32(o + 12);
        if (flags & 0x10) { s->u = malloc(n * 2 + 2); memcpy(s->u, G2H(p), n * 2); s->len = n; }
        else { /* 8-bit: treat as Latin-1 per CFString's default system encoding for constants (ASCII in practice) */
            s->u = malloc(n * 2 + 2); for (uint32_t i = 0; i < n; i++) s->u[i] = LD8(p + i); s->len = n; }
        s->cap = s->len;
        return s;
    }
    return NULL;
}
bool is_nsstring(gptr o) { return o && objc_is_kind_of(o, cls_NSString); }
static Str *SS(CPU *c, gptr o) { Str *s = S(o); if (!s) rt_fatal(c, "string operation on non-string object %08x (%s)", o, objc_obj_class_name(o)); return s; }

static gptr str_new(gptr cls, const uint16_t *u, uint32_t n, bool own_u) {
    gptr o = objc_alloc_instance(cls, 0);
    Str *s = hostdata_ensure(o, sizeof(Str), str_dtor);
    if (own_u) s->u = (uint16_t *)u; else { s->u = malloc(n * 2 + 2); if (n) memcpy(s->u, u, n * 2); }
    s->len = s->cap = n;
    s->mutable_ = cls == cls_NSMutableString;
    /* side table rc set by alloc_instance */
    return o;
}
gptr nsstr_from_utf16(const uint16_t *u, uint32_t n, bool retained) { gptr o = str_new(cls_NSString, u, n, false); return retained ? o : objc_autorelease_(o); }
gptr nsstr_retained(const char *utf8) { uint32_t n; uint16_t *u = utf8_to_16(utf8, (uint32_t)strlen(utf8), &n); return str_new(cls_NSString, u, n, true); }
gptr nsstr(const char *utf8) { return objc_autorelease_(nsstr_retained(utf8)); }
gptr nsstr_static(const char *utf8) { gptr o = nsstr_retained(utf8); objc_retain_(o); return o; }
static char *str_utf8(Str *s) { if (!s->utf8) s->utf8 = utf16_to_8(s->u, s->len); return s->utf8; }
static void str_dirty(Str *s) { free(s->utf8); s->utf8 = NULL; }
char *nsstr_utf8(gptr o) { Str *s = S(o); return s ? strdup(str_utf8(s)) : strdup("(null)"); }
const char *nsstr_cstr(gptr o) { if (!o) return "(null)"; Str *s = S(o); return s ? str_utf8(s) : objc_obj_class_name(o); }
uint32_t nsstr_len(gptr o) { Str *s = S(o); return s ? s->len : 0; }
uint16_t *nsstr_utf16(gptr o, uint32_t *len) { Str *s = S(o); *len = s ? s->len : 0; uint16_t *u = malloc(*len * 2 + 2); if (s) memcpy(u, s->u, *len * 2); return u; }

char *obj_description_utf8(CPU *c, gptr o) {
    if (!o) return strdup("(null)");
    if (is_nsstring(o)) return nsstr_utf8(o);
    gptr d = msg(c, o, "description", 0);
    return d ? nsstr_utf8(d) : strdup("(null)");
}

static void st_alloc(CPU *c) { RET(objc_alloc_instance(SELF == cls_NSMutableString ? cls_NSMutableString : cls_NSString, 0)); }
static Str *init_payload(gptr o) { Str *s = hostdata_ensure(o, sizeof(Str), str_dtor); s->mutable_ = LD32(o) == cls_NSMutableString; return s; }
static void set_payload_utf8(Str *s, const char *p, uint32_t n) { free(s->u); s->u = utf8_to_16(p, n, &s->len); s->cap = s->len; str_dirty(s); }
static void st_init(CPU *c) { init_payload(SELF); RET(SELF); }
static void st_initWithString(CPU *c) { Str *s = init_payload(SELF); Str *o = SS(c, ARG(2)); s->u = malloc(o->len * 2 + 2); memcpy(s->u, o->u, o->len * 2); s->len = s->cap = o->len; RET(SELF); }
static void st_initWithUTF8String(CPU *c) { if (!ARG(2)) { rt_release(c, SELF); RET(0); return; } Str *s = init_payload(SELF); set_payload_utf8(s, GSTR(ARG(2)), (uint32_t)strlen(GSTR(ARG(2)))); RET(SELF); }
static void decode_bytes(Str *s, const uint8_t *p, uint32_t n, uint32_t enc) {
    if (enc == 10 || enc == 0x90000100 || enc == 0x94000100) { /* UTF-16 variants */
        uint32_t k = n / 2; const uint8_t *q = p;
        bool be = enc == 0x90000100;
        if (k && enc == 10 && ((p[0] == 0xfe && p[1] == 0xff) || (p[0] == 0xff && p[1] == 0xfe))) { be = p[0] == 0xfe; q += 2; k--; }
        free(s->u); s->u = malloc(k * 2 + 2);
        for (uint32_t i = 0; i < k; i++) s->u[i] = be ? (uint16_t)(q[2 * i] << 8 | q[2 * i + 1]) : (uint16_t)(q[2 * i] | q[2 * i + 1] << 8);
        s->len = s->cap = k;
    } else if (enc == 4 || enc == 0x08000100) set_payload_utf8(s, (const char *)p, n);
    else { free(s->u); s->u = malloc(n * 2 + 2); for (uint32_t i = 0; i < n; i++) s->u[i] = p[i]; s->len = s->cap = n; }
    str_dirty(s);
}
static void st_initWithBytes(CPU *c) { Str *s = init_payload(SELF); decode_bytes(s, G2H(ARG(2)), ARG(3), ARG(4)); RET(SELF); }
static void st_initWithBytesNoCopy(CPU *c) { Str *s = init_payload(SELF); decode_bytes(s, G2H(ARG(2)), ARG(3), ARG(4)); if (LD8(c->r[13]) & 1) gfree(ARG(2)); RET(SELF); }
static void st_initWithData(CPU *c) { gptr d = ARG(2); gptr bytes = msg(c, d, "bytes", 0); uint32_t n = msg(c, d, "length", 0); Str *s = init_payload(SELF); decode_bytes(s, n ? G2H(bytes) : (const uint8_t *)"", n, ARG(3)); RET(SELF); }
static void st_initWithCString(CPU *c) { Str *s = init_payload(SELF); const char *p = GSTR(ARG(2)); decode_bytes(s, (const uint8_t *)p, (uint32_t)strlen(p), ARG(3)); RET(SELF); }
static void st_initWithCharacters(CPU *c) { Str *s = init_payload(SELF); uint32_t n = ARG(3); free(s->u); s->u = malloc(n * 2 + 2); memcpy(s->u, G2H(ARG(2)), n * 2); s->len = s->cap = n; RET(SELF); }
static void st_initWithFormat(CPU *c) { Str *s = init_payload(SELF); ArgReader a = {c, 3, 0}; char *r = gformat(c, nsstr_cstr(ARG(2)), &a); set_payload_utf8(s, r, (uint32_t)strlen(r)); free(r); RET(SELF); }
static void st_initWithFormat_args(CPU *c) { Str *s = init_payload(SELF); ArgReader a = {c, 0, ARG(3)}; char *r = gformat(c, nsstr_cstr(ARG(2)), &a); set_payload_utf8(s, r, (uint32_t)strlen(r)); free(r); RET(SELF); }
static gptr cls_for(gptr self) { return self == cls_NSMutableString ? cls_NSMutableString : cls_NSString; }
static gptr new_from_utf8(gptr cls, const char *p) { uint32_t n; uint16_t *u = utf8_to_16(p, (uint32_t)strlen(p), &n); return objc_autorelease_(str_new(cls, u, n, true)); }
static void st_string(CPU *c) { RET(new_from_utf8(cls_for(SELF), "")); }
static void st_stringWithString(CPU *c) { Str *o = SS(c, ARG(2)); RET(objc_autorelease_(str_new(cls_for(SELF), o->u, o->len, false))); }
static void st_stringWithUTF8String(CPU *c) { if (!ARG(2)) { RET(0); return; } RET(new_from_utf8(cls_for(SELF), GSTR(ARG(2)))); }
static void st_stringWithCString(CPU *c) { gptr o = objc_alloc_instance(cls_for(SELF), 0); Str *s = init_payload(o); const char *p = GSTR(ARG(2)); decode_bytes(s, (const uint8_t *)p, (uint32_t)strlen(p), c->r[3]); RET(objc_autorelease_(o)); }
static void st_stringWithFormat(CPU *c) { ArgReader a = {c, 3, 0}; char *r = gformat(c, nsstr_cstr(ARG(2)), &a); gptr o = new_from_utf8(cls_for(SELF), r); free(r); RET(o); }
static void st_stringWithCharacters(CPU *c) { RET(objc_autorelease_(str_new(cls_for(SELF), G2H(ARG(2)), ARG(3), false))); }
static void st_stringWithContentsOfFile(CPU *c) {
    char p[1024]; const char *vfs_resolve(const char *, char *, size_t); vfs_resolve(nsstr_cstr(ARG(2)), p, sizeof p);
    int n = host_file_size(p);
    if (n < 0) { if (c->r[3] == 0 && ARG(4)) ST32(ARG(4), 0); RET(0); return; }
    uint8_t *b = malloc((size_t)n + 1); host_file_read(p, b, 0, (uint32_t)n);
    gptr o = objc_alloc_instance(cls_for(SELF), 0); Str *s = init_payload(o); decode_bytes(s, b, (uint32_t)n, ARG(3) ? ARG(3) : 4); free(b);
    RET(objc_autorelease_(o));
}
static void st_length(CPU *c) { RET(SS(c, SELF)->len); }
static void st_characterAtIndex(CPU *c) { Str *s = SS(c, SELF); if (ARG(2) >= s->len) rt_fatal(c, "characterAtIndex out of range"); RET(s->u[ARG(2)]); }
static void st_getCharacters_range(CPU *c) { Str *s = SS(c, SELF); uint32_t loc = ARG(3), len = ARG(4 - 0 + 0); (void)len; len = c->r[3] ? 0 : 0; UNUSED(len);
    /* -getCharacters:(unichar*)buf range:(NSRange){loc,len}: buf=r2, loc=r3, len=[sp] */
    uint32_t L = LD32(c->r[13]); if (loc + L > s->len) rt_fatal(c, "getCharacters:range: out of range");
    memcpy(G2H(ARG(2)), s->u + loc, L * 2); }
static void st_getCharacters(CPU *c) { Str *s = SS(c, SELF); memcpy(G2H(ARG(2)), s->u, s->len * 2); }
static void st_UTF8String(CPU *c) { Str *s = SS(c, SELF); const char *u = str_utf8(s); gptr d = msg(c, cls_NSData, "dataWithBytes:length:", 2, gmemdup(u, (uint32_t)strlen(u) + 1), (uint32_t)strlen(u) + 1); RET(msg(c, d, "bytes", 0)); }
static void st_cStringUsingEncoding(CPU *c) { st_UTF8String(c); }
static void st_getCString(CPU *c) {
    Str *s = SS(c, SELF); const char *u = str_utf8(s); uint32_t n = ARG(3);
    if (strlen(u) + 1 > n) { RET(0); return; }
    memcpy(G2H(ARG(2)), u, strlen(u) + 1); RET(1);
}
static void st_lengthOfBytes(CPU *c) { Str *s = SS(c, SELF); uint32_t e = ARG(2); RET(e == 10 ? s->len * 2 : (uint32_t)strlen(str_utf8(s))); }
static void st_maximumLengthOfBytes(CPU *c) { Str *s = SS(c, SELF); RET(s->len * 4); }
static void st_dataUsingEncoding(CPU *c) { Str *s = SS(c, SELF); uint32_t e = ARG(2);
    if (e == 10) { RET(nsdata_new(s->u, s->len * 2, false)); return; }
    const char *u = str_utf8(s); RET(nsdata_new(u, (uint32_t)strlen(u), false)); }
static void st_copy(CPU *c) { Str *s = SS(c, SELF); if (!s->mutable_ && LD32(SELF) != cls_NSMutableString) { RET(objc_retain_(SELF)); return; } RET(str_new(cls_NSString, s->u, s->len, false)); }
static void st_mutableCopy(CPU *c) { Str *s = SS(c, SELF); RET(str_new(cls_NSMutableString, s->u, s->len, false)); }
static void st_description(CPU *c) { RET(SELF); }
static void st_isEqual(CPU *c) { gptr o = ARG(2); if (o == SELF) { RET(1); return; } if (!is_nsstring(o)) { RET(0); return; } Str *a = SS(c, SELF), *b = SS(c, o); RET(a->len == b->len && !memcmp(a->u, b->u, a->len * 2)); }
static uint32_t str_hash(Str *s) { uint32_t h = s->len; for (uint32_t i = 0; i < s->len; i++) h = h * 257 + s->u[i]; return h; }
static void st_hash(CPU *c) { RET(str_hash(SS(c, SELF))); }
static int cmp16(const uint16_t *a, uint32_t na, const uint16_t *b, uint32_t nb, bool ci) {
    uint32_t n = na < nb ? na : nb;
    for (uint32_t i = 0; i < n; i++) {
        uint32_t x = a[i], y = b[i];
        if (ci) { if (x < 128) x = (uint32_t)tolower((int)x); if (y < 128) y = (uint32_t)tolower((int)y); }
        if (x != y) return x < y ? -1 : 1;
    }
    return na < nb ? -1 : na > nb ? 1 : 0;
}
static void st_compare(CPU *c) { Str *a = SS(c, SELF), *b = SS(c, ARG(2)); RET((uint32_t)cmp16(a->u, a->len, b->u, b->len, false)); }
static void st_compare_options(CPU *c) { Str *a = SS(c, SELF), *b = SS(c, ARG(2)); RET((uint32_t)cmp16(a->u, a->len, b->u, b->len, ARG(3) & 1)); }
static void st_caseInsensitiveCompare(CPU *c) { Str *a = SS(c, SELF), *b = SS(c, ARG(2)); RET((uint32_t)cmp16(a->u, a->len, b->u, b->len, true)); }
static void st_isEqualToString(CPU *c) { gptr o = ARG(2); if (!o) { RET(0); return; } Str *a = SS(c, SELF), *b = SS(c, o); RET(a->len == b->len && !memcmp(a->u, b->u, a->len * 2)); }
static long find16(Str *h, Str *n, uint32_t from, uint32_t to, bool back, bool ci) {
    if (n->len == 0 || n->len > to - from) return -1;
    if (!back) { for (uint32_t i = from; i + n->len <= to; i++) if (!cmp16(h->u + i, n->len, n->u, n->len, ci)) return (long)i; }
    else { for (long i = (long)to - (long)n->len; i >= (long)from; i--) if (!cmp16(h->u + i, n->len, n->u, n->len, ci)) return i; }
    return -1;
}
static void st_hasPrefix(CPU *c) { Str *a = SS(c, SELF), *b = SS(c, ARG(2)); RET(b->len <= a->len && !memcmp(a->u, b->u, b->len * 2)); }
static void st_hasSuffix(CPU *c) { Str *a = SS(c, SELF), *b = SS(c, ARG(2)); RET(b->len <= a->len && !memcmp(a->u + a->len - b->len, b->u, b->len * 2)); }
/* NSRange return (8 bytes) comes back in r0:r1 on armv7 iOS? No: structs >4 bytes use sret. NSRange-returning
 * methods are called through objc_msgSend_stret with r0 = result pointer. Detect by checking whether SELF is the string. */
static void ret_range(CPU *c, long loc, uint32_t len, gptr sret) {
    uint32_t L = loc < 0 ? 0x7fffffffu : (uint32_t)loc, N = loc < 0 ? 0 : len;
    if (sret) { ST32(sret, L); ST32(sret + 4, N); }
    else { c->r[0] = L; c->r[1] = N; }
}
/* NSRange (8 bytes) is returned through objc_msgSend_stret on armv7: r0 = result, r1 = self, r2 = _cmd */
static void st_rangeOfString(CPU *c) { Str *a = SS(c, ARG(1)), *b = SS(c, ARG(3)); long i = find16(a, b, 0, a->len, false, false); ret_range(c, i, b->len, ARG(0)); }
static void st_rangeOfString_options(CPU *c) { Str *a = SS(c, ARG(1)), *b = SS(c, ARG(3)); uint32_t o = LD32(c->r[13]); long i = find16(a, b, 0, a->len, o & 4, o & 1); ret_range(c, i, b->len, ARG(0)); }
static gptr substr(Str *s, uint32_t from, uint32_t n) { return objc_autorelease_(str_new(cls_NSString, s->u + from, n, false)); }
static void st_substringFromIndex(CPU *c) { Str *s = SS(c, SELF); uint32_t i = ARG(2); if (i > s->len) rt_fatal(c, "substringFromIndex out of range"); RET(substr(s, i, s->len - i)); }
static void st_substringToIndex(CPU *c) { Str *s = SS(c, SELF); uint32_t i = ARG(2); if (i > s->len) rt_fatal(c, "substringToIndex out of range"); RET(substr(s, 0, i)); }
static void st_substringWithRange(CPU *c) { Str *s = SS(c, SELF); uint32_t loc = ARG(2), len = ARG(3); if (loc + len > s->len) rt_fatal(c, "substringWithRange out of range"); RET(substr(s, loc, len)); }
static void st_stringByAppendingString(CPU *c) { Str *a = SS(c, SELF), *b = SS(c, ARG(2)); uint16_t *u = malloc((a->len + b->len) * 2 + 2); memcpy(u, a->u, a->len * 2); memcpy(u + a->len, b->u, b->len * 2); RET(objc_autorelease_(str_new(cls_NSString, u, a->len + b->len, true))); }
static void st_stringByAppendingFormat(CPU *c) { Str *a = SS(c, SELF); ArgReader ar = {c, 3, 0}; char *r = gformat(c, nsstr_cstr(ARG(2)), &ar); char *x = malloc(strlen(str_utf8(a)) + strlen(r) + 1); strcpy(x, str_utf8(a)); strcat(x, r); RET(nsstr(x)); free(x); free(r); }
static void st_stringByReplacingOccurrencesOfString(CPU *c) {
    Str *s = SS(c, SELF), *f = SS(c, ARG(2)), *r = SS(c, ARG(3));
    uint32_t cap = s->len * (r->len + 1) + 1, k = 0; uint16_t *o = malloc(cap * 2);
    for (uint32_t i = 0; i < s->len;) {
        if (f->len && i + f->len <= s->len && !memcmp(s->u + i, f->u, f->len * 2)) { memcpy(o + k, r->u, r->len * 2); k += r->len; i += f->len; }
        else o[k++] = s->u[i++];
    }
    RET(objc_autorelease_(str_new(cls_NSString, o, k, true)));
}
static void st_lowercaseString(CPU *c) { Str *s = SS(c, SELF); uint16_t *u = malloc(s->len * 2 + 2); for (uint32_t i = 0; i < s->len; i++) u[i] = s->u[i] < 128 ? (uint16_t)tolower(s->u[i]) : s->u[i]; RET(objc_autorelease_(str_new(cls_NSString, u, s->len, true))); }
static void st_uppercaseString(CPU *c) { Str *s = SS(c, SELF); uint16_t *u = malloc(s->len * 2 + 2); for (uint32_t i = 0; i < s->len; i++) u[i] = s->u[i] < 128 ? (uint16_t)toupper(s->u[i]) : s->u[i]; RET(objc_autorelease_(str_new(cls_NSString, u, s->len, true))); }
static void st_intValue(CPU *c) { RET((uint32_t)atoi(str_utf8(SS(c, SELF)))); }
static void st_integerValue(CPU *c) { RET((uint32_t)atol(str_utf8(SS(c, SELF)))); }
static void st_longLongValue(CPU *c) { RET64((uint64_t)atoll(str_utf8(SS(c, SELF)))); }
static void st_floatValue(CPU *c) { RETF(strtof(str_utf8(SS(c, SELF)), NULL)); }
static void st_doubleValue(CPU *c) { RETD(strtod(str_utf8(SS(c, SELF)), NULL)); }
static void st_boolValue(CPU *c) { const char *p = str_utf8(SS(c, SELF)); while (*p == ' ') p++; RET(*p == 'Y' || *p == 'y' || *p == 'T' || *p == 't' || (*p >= '1' && *p <= '9')); }
static void st_componentsSeparatedByString(CPU *c) {
    Str *s = SS(c, SELF), *sep = SS(c, ARG(2));
    gptr arr = nsarray_new(NULL, 0, true, false);
    uint32_t start = 0;
    for (uint32_t i = 0; sep->len && i + sep->len <= s->len;) {
        if (!memcmp(s->u + i, sep->u, sep->len * 2)) { nsarray_add(arr, substr(s, start, i - start)); i += sep->len; start = i; }
        else i++;
    }
    nsarray_add(arr, substr(s, start, s->len - start));
    RET(arr);
}
static void st_pathComponents_last(CPU *c) { Str *s = SS(c, SELF); const char *u = str_utf8(s); size_t n = strlen(u); while (n > 1 && u[n - 1] == '/') n--; const char *p = u + n; while (p > u && p[-1] != '/') p--; char *t = strndup(p, (size_t)(u + n - p)); RET(nsstr(t)); free(t); }
static void st_stringByAppendingPathComponent(CPU *c) {
    const char *a = str_utf8(SS(c, SELF)); const char *b = nsstr_cstr(ARG(2));
    char *t = malloc(strlen(a) + strlen(b) + 2);
    if (!*a) strcpy(t, b); else if (a[strlen(a) - 1] == '/') sprintf(t, "%s%s", a, b); else sprintf(t, "%s/%s", a, b);
    RET(nsstr(t)); free(t);
}
static void st_stringByAppendingPathExtension(CPU *c) { const char *a = str_utf8(SS(c, SELF)); const char *b = nsstr_cstr(ARG(2)); char *t = malloc(strlen(a) + strlen(b) + 2); sprintf(t, "%s.%s", a, b); RET(nsstr(t)); free(t); }
static void st_stringByDeletingLastPathComponent(CPU *c) { char *t = strdup(str_utf8(SS(c, SELF))); size_t n = strlen(t); while (n > 1 && t[n - 1] == '/') t[--n] = 0; char *p = strrchr(t, '/'); if (p == t) t[1] = 0; else if (p) *p = 0; else t[0] = 0; RET(nsstr(t)); free(t); }
static void st_pathExtension(CPU *c) { const char *u = str_utf8(SS(c, SELF)); const char *sl = strrchr(u, '/'); const char *d = strrchr(u, '.'); RET(nsstr(d && (!sl || d > sl) ? d + 1 : "")); }
static void st_stringByDeletingPathExtension(CPU *c) { char *t = strdup(str_utf8(SS(c, SELF))); char *sl = strrchr(t, '/'); char *d = strrchr(t, '.'); if (d && (!sl || d > sl) && d != t) *d = 0; RET(nsstr(t)); free(t); }
static void st_fileSystemRepresentation(CPU *c) { st_UTF8String(c); }
static void st_stringByStandardizingPath(CPU *c) { RET(SELF); }
static void st_stringByTrimming(CPU *c) { Str *s = SS(c, SELF); uint32_t a = 0, b = s->len; while (a < b && (s->u[a] == ' ' || s->u[a] == '\n' || s->u[a] == '\t' || s->u[a] == '\r')) a++; while (b > a && (s->u[b - 1] == ' ' || s->u[b - 1] == '\n' || s->u[b - 1] == '\t' || s->u[b - 1] == '\r')) b--; RET(substr(s, a, b - a)); }
static void st_isAbsolutePath(CPU *c) { RET(str_utf8(SS(c, SELF))[0] == '/'); }
static void st_writeToFile(CPU *c) {
    const char *vfs_resolve(const char *, char *, size_t); char p[1024]; vfs_resolve(nsstr_cstr(ARG(2)), p, sizeof p);
    const char *u = str_utf8(SS(c, SELF)); RET(host_file_write(p, u, (uint32_t)strlen(u), 0) >= 0);
}
/* NSMutableString */
static void ms_appendString(CPU *c) { Str *a = SS(c, SELF); if (!ARG(2)) return; Str *b = SS(c, ARG(2)); a->u = realloc(a->u, (a->len + b->len + 1) * 2); memcpy(a->u + a->len, b->u, b->len * 2); a->len += b->len; str_dirty(a); }
static void ms_appendFormat(CPU *c) { Str *a = SS(c, SELF); ArgReader ar = {c, 3, 0}; char *r = gformat(c, nsstr_cstr(ARG(2)), &ar); uint32_t n; uint16_t *u = utf8_to_16(r, (uint32_t)strlen(r), &n); a->u = realloc(a->u, (a->len + n + 1) * 2); memcpy(a->u + a->len, u, n * 2); a->len += n; free(u); free(r); str_dirty(a); }
static void ms_setString(CPU *c) { Str *a = SS(c, SELF), *b = SS(c, ARG(2)); free(a->u); a->u = malloc(b->len * 2 + 2); memcpy(a->u, b->u, b->len * 2); a->len = b->len; str_dirty(a); }
static void ms_deleteCharactersInRange(CPU *c) { Str *a = SS(c, SELF); uint32_t loc = ARG(2), len = ARG(3); if (loc + len > a->len) rt_fatal(c, "deleteCharactersInRange out of range"); memmove(a->u + loc, a->u + loc + len, (a->len - loc - len) * 2); a->len -= len; str_dirty(a); }
static void ms_insertString(CPU *c) { Str *a = SS(c, SELF), *b = SS(c, ARG(2)); uint32_t at = ARG(3); a->u = realloc(a->u, (a->len + b->len + 1) * 2); memmove(a->u + at + b->len, a->u + at, (a->len - at) * 2); memcpy(a->u + at, b->u, b->len * 2); a->len += b->len; str_dirty(a); }
static void ms_initWithCapacity(CPU *c) { init_payload(SELF); RET(SELF); }
static void ms_stringWithCapacity(CPU *c) { RET(new_from_utf8(cls_NSMutableString, "")); }

/* ================================================================== arrays */
typedef struct Arr { gptr *v; uint32_t n, cap; bool mutable_; } Arr;
static void arr_dtor(void *p) { free(((Arr *)p)->v); }
static Arr *A_(gptr o) { return hostdata(o); }
static Arr *AA(CPU *c, gptr o) { Arr *a = A_(o); if (!a) rt_fatal(c, "array operation on %08x (%s) without storage", o, objc_obj_class_name(o)); return a; }
static void arr_push(Arr *a, gptr v) { if (a->n == a->cap) { a->cap = a->cap ? a->cap * 2 : 8; a->v = realloc(a->v, a->cap * 4); } a->v[a->n++] = v; }
gptr nsarray_new(const gptr *items, uint32_t n, bool mutable_, bool retained) {
    gptr o = objc_alloc_instance(mutable_ ? cls_NSMutableArray : cls_NSArray, 0);
    Arr *a = hostdata_ensure(o, sizeof(Arr), arr_dtor); a->mutable_ = mutable_;
    for (uint32_t i = 0; i < n; i++) arr_push(a, objc_retain_(items[i]));
    return retained ? o : objc_autorelease_(o);
}
uint32_t nsarray_count(gptr o) { Arr *a = A_(o); return a ? a->n : 0; }
gptr nsarray_get(gptr o, uint32_t i) { Arr *a = A_(o); return a && i < a->n ? a->v[i] : 0; }
void nsarray_add(gptr o, gptr v) { Arr *a = A_(o); arr_push(a, objc_retain_(v)); }
static Arr *arr_init(gptr o) { Arr *a = hostdata_ensure(o, sizeof(Arr), arr_dtor); a->mutable_ = objc_is_kind_of(o, cls_NSMutableArray); return a; }
static void ar_alloc(CPU *c) { RET(objc_alloc_instance(SELF, 0)); }
static void ar_init(CPU *c) { arr_init(SELF); RET(SELF); }
static void ar_dealloc(CPU *c) { Arr *a = A_(SELF); if (a) for (uint32_t i = 0; i < a->n; i++) rt_release(c, a->v[i]); objc_destroy_instance(SELF); }
static void ar_initWithObjects_count(CPU *c) { Arr *a = arr_init(SELF); for (uint32_t i = 0; i < ARG(3); i++) arr_push(a, rt_retain(c, LD32(ARG(2) + 4 * i))); RET(SELF); }
static void ar_initWithArray(CPU *c) { Arr *a = arr_init(SELF); gptr src = ARG(2); uint32_t n = msg(c, src, "count", 0); for (uint32_t i = 0; i < n; i++) arr_push(a, rt_retain(c, msg(c, src, "objectAtIndex:", 1, i))); RET(SELF); }
static void ar_initWithCapacity(CPU *c) { arr_init(SELF); RET(SELF); }
static void ar_array(CPU *c) { gptr o = objc_alloc_instance(SELF, 0); arr_init(o); RET(objc_autorelease_(o)); }
static void ar_arrayWithObject(CPU *c) { gptr o = objc_alloc_instance(SELF, 0); Arr *a = arr_init(o); arr_push(a, rt_retain(c, ARG(2))); RET(objc_autorelease_(o)); }
static void ar_arrayWithObjects_count(CPU *c) { gptr o = objc_alloc_instance(SELF, 0); Arr *a = arr_init(o); for (uint32_t i = 0; i < ARG(3); i++) arr_push(a, rt_retain(c, LD32(ARG(2) + 4 * i))); RET(objc_autorelease_(o)); }
static void ar_arrayWithObjects(CPU *c) { gptr o = objc_alloc_instance(SELF, 0); Arr *a = arr_init(o); ArgReader r = {c, 2, 0}; for (gptr x = ar_word(&r); x; x = ar_word(&r)) arr_push(a, rt_retain(c, x)); RET(objc_autorelease_(o)); }
static void ar_arrayWithArray(CPU *c) { gptr o = objc_alloc_instance(SELF, 0); Arr *a = arr_init(o); gptr src = ARG(2); uint32_t n = src ? msg(c, src, "count", 0) : 0; for (uint32_t i = 0; i < n; i++) arr_push(a, rt_retain(c, msg(c, src, "objectAtIndex:", 1, i))); RET(objc_autorelease_(o)); }
static void ar_arrayWithCapacity(CPU *c) { ar_array(c); }
static void ar_count(CPU *c) { RET(AA(c, SELF)->n); }
static void ar_objectAtIndex(CPU *c) { Arr *a = AA(c, SELF); if (ARG(2) >= a->n) rt_fatal(c, "-[NSArray objectAtIndex:]: index %u beyond bounds [0 .. %d]", ARG(2), (int)a->n - 1); RET(a->v[ARG(2)]); }
static void ar_firstObject(CPU *c) { Arr *a = AA(c, SELF); RET(a->n ? a->v[0] : 0); }
static void ar_lastObject(CPU *c) { Arr *a = AA(c, SELF); RET(a->n ? a->v[a->n - 1] : 0); }
static void ar_containsObject(CPU *c) { Arr *a = AA(c, SELF); for (uint32_t i = 0; i < a->n; i++) if (obj_equal(c, a->v[i], ARG(2))) { RET(1); return; } RET(0); }
static void ar_indexOfObject(CPU *c) { Arr *a = AA(c, SELF); for (uint32_t i = 0; i < a->n; i++) if (obj_equal(c, a->v[i], ARG(2))) { RET(i); return; } RET(0x7fffffff); }
static void ar_copy(CPU *c) { Arr *a = AA(c, SELF); if (!a->mutable_) { RET(objc_retain_(SELF)); return; } RET(nsarray_new(a->v, a->n, false, true)); }
static void ar_mutableCopy(CPU *c) { Arr *a = AA(c, SELF); RET(nsarray_new(a->v, a->n, true, true)); }
static void ar_addObject(CPU *c) { if (!ARG(2)) rt_fatal(c, "-[NSMutableArray addObject:]: object cannot be nil"); arr_push(AA(c, SELF), rt_retain(c, ARG(2))); }
static void ar_addObjectsFromArray(CPU *c) { gptr src = ARG(2); uint32_t n = msg(c, src, "count", 0); for (uint32_t i = 0; i < n; i++) arr_push(AA(c, SELF), rt_retain(c, msg(c, src, "objectAtIndex:", 1, i))); }
static void ar_insertObject(CPU *c) { Arr *a = AA(c, SELF); uint32_t at = ARG(3); if (at > a->n) rt_fatal(c, "insertObject:atIndex: out of range"); arr_push(a, 0); memmove(a->v + at + 1, a->v + at, (a->n - 1 - at) * 4); a->v[at] = rt_retain(c, ARG(2)); }
static void ar_removeObjectAtIndex(CPU *c) { Arr *a = AA(c, SELF); uint32_t at = ARG(2); if (at >= a->n) rt_fatal(c, "removeObjectAtIndex out of range"); gptr o = a->v[at]; memmove(a->v + at, a->v + at + 1, (a->n - at - 1) * 4); a->n--; rt_release(c, o); }
static void ar_removeLastObject(CPU *c) { Arr *a = AA(c, SELF); if (!a->n) rt_fatal(c, "removeLastObject on empty array"); rt_release(c, a->v[--a->n]); }
static void ar_removeAllObjects(CPU *c) { Arr *a = AA(c, SELF); while (a->n) rt_release(c, a->v[--a->n]); }
static void ar_removeObject(CPU *c) { Arr *a = AA(c, SELF); for (uint32_t i = 0; i < a->n;) if (obj_equal(c, a->v[i], ARG(2))) { gptr o = a->v[i]; memmove(a->v + i, a->v + i + 1, (a->n - i - 1) * 4); a->n--; rt_release(c, o); } else i++; }
static void ar_replaceObjectAtIndex(CPU *c) { Arr *a = AA(c, SELF); uint32_t at = ARG(2); if (at >= a->n) rt_fatal(c, "replaceObjectAtIndex out of range"); gptr o = a->v[at]; a->v[at] = rt_retain(c, ARG(3)); rt_release(c, o); }
static void ar_objectEnumerator(CPU *c);
/* NSFastEnumeration: countByEnumeratingWithState:objects:count: (state struct: state, itemsPtr, mutationsPtr, extra[5]) */
static void ar_countByEnumerating(CPU *c) {
    Arr *a = AA(c, SELF); gptr st = ARG(2);
    uint32_t idx = LD32(st);
    if (idx == 0) { ST32(st + 8, SELF + 0); }
    if (rt_verbose) rt_log("fastenum %08x st=%08x idx=%u n=%u mptr=%08x *mptr=%08x", SELF, st, idx, a->n, LD32(st + 8), LD32(LD32(st + 8)));
    if (idx >= a->n) { RET(0); return; }
    /* hand out a guest copy of the remaining items */
    uint32_t n = a->n - idx, max = ARG(4) ? ARG(4) : 16; if (n > max) n = max;
    gptr buf = ARG(3);
    for (uint32_t i = 0; i < n; i++) ST32(buf + 4 * i, a->v[idx + i]);
    ST32(st + 4, buf);
    ST32(st, idx + n);
    RET(n);
}
static void ar_description(CPU *c) { Arr *a = AA(c, SELF); char *s = strdup("("); for (uint32_t i = 0; i < a->n; i++) { char *d = obj_description_utf8(c, a->v[i]); s = realloc(s, strlen(s) + strlen(d) + 4); strcat(s, i ? ", " : ""); strcat(s, d); free(d); } s = realloc(s, strlen(s) + 2); strcat(s, ")"); RET(nsstr(s)); free(s); }
static void ar_componentsJoinedByString(CPU *c) { Arr *a = AA(c, SELF); const char *sep = nsstr_cstr(ARG(2)); char *sepc = strdup(sep); char *s = strdup(""); for (uint32_t i = 0; i < a->n; i++) { char *d = obj_description_utf8(c, a->v[i]); s = realloc(s, strlen(s) + strlen(d) + strlen(sepc) + 2); if (i) strcat(s, sepc); strcat(s, d); free(d); } RET(nsstr(s)); free(s); free(sepc); }
static void ar_makeObjectsPerform(CPU *c) { Arr *a = AA(c, SELF); for (uint32_t i = 0; i < a->n; i++) { gptr imp = objc_lookup_imp(LD32(a->v[i]), ARG(2)); if (imp) guest_call2(c, imp, a->v[i], ARG(2)); } }
static void ar_makeObjectsPerform1(CPU *c) { Arr *a = AA(c, SELF); for (uint32_t i = 0; i < a->n; i++) { gptr imp = objc_lookup_imp(LD32(a->v[i]), ARG(2)); if (imp) guest_call3(c, imp, a->v[i], ARG(2), ARG(3)); } }
static void ar_isEqualToArray(CPU *c) { Arr *a = AA(c, SELF); gptr o = ARG(2); if (!o) { RET(0); return; } Arr *b = A_(o); if (!b || a->n != b->n) { RET(0); return; } for (uint32_t i = 0; i < a->n; i++) if (!obj_equal(c, a->v[i], b->v[i])) { RET(0); return; } RET(1); }

/* enumerator over a snapshot */
typedef struct Enum { gptr *v; uint32_t n, i; } Enum;
static void en_dtor(void *p) { free(((Enum *)p)->v); }
static gptr make_enum(const gptr *v, uint32_t n) { gptr e = objc_alloc_instance(cls_NSArrayEnum, 0); Enum *s = hostdata_ensure(e, sizeof(Enum), en_dtor); s->v = malloc(n * 4 + 4); memcpy(s->v, v, n * 4); s->n = n; return objc_autorelease_(e); }
static void en_nextObject(CPU *c) { Enum *e = hostdata(SELF); RET(e && e->i < e->n ? e->v[e->i++] : 0); }
static void en_allObjects(CPU *c) { Enum *e = hostdata(SELF); RET(nsarray_new(e->v + e->i, e->n - e->i, false, false)); }
static void ar_objectEnumerator(CPU *c) { Arr *a = AA(c, SELF); RET(make_enum(a->v, a->n)); }
static void ar_reverseObjectEnumerator(CPU *c) { Arr *a = AA(c, SELF); gptr *t = malloc(a->n * 4 + 4); for (uint32_t i = 0; i < a->n; i++) t[i] = a->v[a->n - 1 - i]; RET(make_enum(t, a->n)); free(t); }

/* ================================================================== dictionaries (insertion-ordered) */
typedef struct Dict { gptr *k, *v; uint32_t n, cap; bool mutable_; } Dict;
static void dict_dtor(void *p) { Dict *d = p; free(d->k); free(d->v); }
static Dict *D_(gptr o) { return hostdata(o); }
static Dict *DD(CPU *c, gptr o) { Dict *d = D_(o); if (!d) rt_fatal(c, "dictionary operation on %08x (%s) without storage", o, objc_obj_class_name(o)); return d; }
static long dict_find(CPU *c, Dict *d, gptr key) {
    for (uint32_t i = 0; i < d->n; i++) if (d->k[i] == key) return i;
    for (uint32_t i = 0; i < d->n; i++) if (obj_equal(c, d->k[i], key)) return i;
    return -1;
}
static Dict *dict_init(gptr o) { Dict *d = hostdata_ensure(o, sizeof(Dict), dict_dtor); d->mutable_ = objc_is_kind_of(o, cls_NSMutableDictionary); return d; }
static void dict_set(CPU *c, Dict *d, gptr key, gptr val) {
    long i = dict_find(c, d, key);
    gptr v = rt_retain(c, val);
    if (i >= 0) { gptr old = d->v[i]; d->v[i] = v; rt_release(c, old); return; }
    if (d->n == d->cap) { d->cap = d->cap ? d->cap * 2 : 8; d->k = realloc(d->k, d->cap * 4); d->v = realloc(d->v, d->cap * 4); }
    gptr kc = is_nsstring(key) ? msg(c, key, "copyWithZone:", 1, 0) : rt_retain(c, key);
    d->k[d->n] = kc; d->v[d->n] = v; d->n++;
}
gptr nsdict_new(bool mutable_, bool retained) { gptr o = objc_alloc_instance(mutable_ ? cls_NSMutableDictionary : cls_NSDictionary, 0); dict_init(o); return retained ? o : objc_autorelease_(o); }
gptr nsdict_get(gptr o, gptr key) { Dict *d = D_(o); if (!d) return 0; long i = dict_find(main_cpu, d, key); return i < 0 ? 0 : d->v[i]; }
void nsdict_set(gptr o, gptr key, gptr val) { dict_set(main_cpu, D_(o), key, val); }
static void di_init(CPU *c) { dict_init(SELF); RET(SELF); }
static void di_dealloc(CPU *c) { Dict *d = D_(SELF); if (d) for (uint32_t i = 0; i < d->n; i++) { rt_release(c, d->k[i]); rt_release(c, d->v[i]); } objc_destroy_instance(SELF); }
static void di_dictionary(CPU *c) { gptr o = objc_alloc_instance(SELF, 0); dict_init(o); RET(objc_autorelease_(o)); }
static void di_initWithObjects_forKeys_count(CPU *c) { Dict *d = dict_init(SELF); for (uint32_t i = 0; i < ARG(4); i++) dict_set(c, d, LD32(ARG(3) + 4 * i), LD32(ARG(2) + 4 * i)); RET(SELF); }
static void di_dictionaryWithObjects_forKeys_count(CPU *c) { gptr o = objc_alloc_instance(SELF, 0); Dict *d = dict_init(o); for (uint32_t i = 0; i < ARG(4); i++) dict_set(c, d, LD32(ARG(3) + 4 * i), LD32(ARG(2) + 4 * i)); RET(objc_autorelease_(o)); }
static void di_dictionaryWithObject_forKey(CPU *c) { gptr o = objc_alloc_instance(SELF, 0); Dict *d = dict_init(o); dict_set(c, d, ARG(3), ARG(2)); RET(objc_autorelease_(o)); }
static void di_dictionaryWithObjectsAndKeys(CPU *c) { gptr o = objc_alloc_instance(SELF, 0); Dict *d = dict_init(o); ArgReader r = {c, 2, 0}; for (;;) { gptr v = ar_word(&r); if (!v) break; gptr k = ar_word(&r); dict_set(c, d, k, v); } RET(objc_autorelease_(o)); }
static void copy_dict_into(CPU *c, Dict *d, gptr src) {
    Dict *s = D_(src);
    if (s) { for (uint32_t i = 0; i < s->n; i++) dict_set(c, d, s->k[i], s->v[i]); return; }
    gptr keys = msg(c, src, "allKeys", 0); uint32_t n = msg(c, keys, "count", 0);
    for (uint32_t i = 0; i < n; i++) { gptr k = msg(c, keys, "objectAtIndex:", 1, i); dict_set(c, d, k, msg(c, src, "objectForKey:", 1, k)); }
}
static void di_dictionaryWithDictionary(CPU *c) { gptr o = objc_alloc_instance(SELF, 0); Dict *d = dict_init(o); if (ARG(2)) copy_dict_into(c, d, ARG(2)); RET(objc_autorelease_(o)); }
static void di_initWithDictionary(CPU *c) { Dict *d = dict_init(SELF); if (ARG(2)) copy_dict_into(c, d, ARG(2)); RET(SELF); }
static void di_initWithCapacity(CPU *c) { dict_init(SELF); RET(SELF); }
static void di_count(CPU *c) { RET(DD(c, SELF)->n); }
static void di_objectForKey(CPU *c) { Dict *d = DD(c, SELF); if (!ARG(2)) { RET(0); return; } long i = dict_find(c, d, ARG(2)); RET(i < 0 ? 0 : d->v[i]); }
static void di_setObject_forKey(CPU *c) { if (!ARG(3)) rt_fatal(c, "setObject:forKey: key cannot be nil"); if (!ARG(2)) rt_fatal(c, "setObject:forKey: object cannot be nil (key %s)", nsstr_cstr(ARG(3))); dict_set(c, DD(c, SELF), ARG(3), ARG(2)); }
static void di_setValue_forKey(CPU *c) { Dict *d = DD(c, SELF); if (!ARG(2)) { long i = dict_find(c, d, ARG(3)); if (i >= 0) { rt_release(c, d->k[i]); rt_release(c, d->v[i]); d->n--; memmove(d->k + i, d->k + i + 1, (d->n - i) * 4); memmove(d->v + i, d->v + i + 1, (d->n - i) * 4); } return; } dict_set(c, d, ARG(3), ARG(2)); }
static void di_removeObjectForKey(CPU *c) { Dict *d = DD(c, SELF); long i = dict_find(c, d, ARG(2)); if (i < 0) return; gptr k = d->k[i], v = d->v[i]; d->n--; memmove(d->k + i, d->k + i + 1, (d->n - i) * 4); memmove(d->v + i, d->v + i + 1, (d->n - i) * 4); rt_release(c, k); rt_release(c, v); }
static void di_removeAllObjects(CPU *c) { Dict *d = DD(c, SELF); while (d->n) { d->n--; rt_release(c, d->k[d->n]); rt_release(c, d->v[d->n]); } }
static void di_allKeys(CPU *c) { Dict *d = DD(c, SELF); RET(nsarray_new(d->k, d->n, false, false)); }
static void di_allValues(CPU *c) { Dict *d = DD(c, SELF); RET(nsarray_new(d->v, d->n, false, false)); }
static void di_keyEnumerator(CPU *c) { Dict *d = DD(c, SELF); RET(make_enum(d->k, d->n)); }
static void di_objectEnumerator(CPU *c) { Dict *d = DD(c, SELF); RET(make_enum(d->v, d->n)); }
static void di_copy(CPU *c) { Dict *d = DD(c, SELF); if (!d->mutable_) { RET(objc_retain_(SELF)); return; } gptr o = nsdict_new(false, true); Dict *n = D_(o); for (uint32_t i = 0; i < d->n; i++) dict_set(c, n, d->k[i], d->v[i]); RET(o); }
static void di_mutableCopy(CPU *c) { Dict *d = DD(c, SELF); gptr o = nsdict_new(true, true); Dict *n = D_(o); for (uint32_t i = 0; i < d->n; i++) dict_set(c, n, d->k[i], d->v[i]); RET(o); }
static void di_addEntriesFromDictionary(CPU *c) { if (ARG(2)) copy_dict_into(c, DD(c, SELF), ARG(2)); }
static void di_countByEnumerating(CPU *c) {
    Dict *d = DD(c, SELF); gptr st = ARG(2); uint32_t idx = LD32(st);
    if (idx == 0) ST32(st + 8, SELF);
    if (idx >= d->n) { RET(0); return; }
    uint32_t n = d->n - idx, max = ARG(4) ? ARG(4) : 16; if (n > max) n = max;
    for (uint32_t i = 0; i < n; i++) ST32(ARG(3) + 4 * i, d->k[idx + i]);
    ST32(st + 4, ARG(3)); ST32(st, idx + n); RET(n);
}
static void di_description(CPU *c) { Dict *d = DD(c, SELF); char *s = strdup("{"); for (uint32_t i = 0; i < d->n; i++) { char *k = obj_description_utf8(c, d->k[i]); char *v = obj_description_utf8(c, d->v[i]); s = realloc(s, strlen(s) + strlen(k) + strlen(v) + 8); strcat(s, k); strcat(s, " = "); strcat(s, v); strcat(s, "; "); free(k); free(v); } s = realloc(s, strlen(s) + 2); strcat(s, "}"); RET(nsstr(s)); free(s); }
static void di_valueForKey(CPU *c) { di_objectForKey(c); }

/* ================================================================== NSNumber */
typedef struct Num { char t; int64_t i; double d; } Num;
static Num *N_(gptr o) { return hostdata(o); }
bool is_nsnumber(gptr o) { return o && objc_is_kind_of(o, cls_NSNumber); }
static gptr num_new(char t, int64_t i, double d) { gptr o = objc_alloc_instance(cls_NSNumber, 0); Num *n = hostdata_ensure(o, sizeof(Num), NULL); n->t = t; n->i = i; n->d = d; return o; }
gptr nsnumber_int(int64_t v, bool retained) { gptr o = num_new('q', v, (double)v); return retained ? o : objc_autorelease_(o); }
gptr nsnumber_double(double v, bool retained) { gptr o = num_new('d', (int64_t)v, v); return retained ? o : objc_autorelease_(o); }
static gptr bool_yes, bool_no;
gptr nsnumber_bool(bool v) { return v ? bool_yes : bool_no; }
double nsnumber_get_double(gptr o) { Num *n = N_(o); return n ? (n->t == 'd' || n->t == 'f' ? n->d : (double)n->i) : 0; }
int64_t nsnumber_get_int(gptr o) { Num *n = N_(o); return n ? (n->t == 'd' || n->t == 'f' ? (int64_t)n->d : n->i) : 0; }
static void nu_numberWithInt(CPU *c) { RET(nsnumber_int((int32_t)ARG(2), false)); }
static void nu_numberWithUnsignedInt(CPU *c) { RET(nsnumber_int(ARG(2), false)); }
static void nu_numberWithLongLong(CPU *c) { RET(nsnumber_int((int64_t)((uint64_t)ARG(2) | ((uint64_t)ARG(3) << 32)), false)); }
static void nu_numberWithBool(CPU *c) { RET(nsnumber_bool(ARG(2) & 0xff)); }
static void nu_numberWithFloat(CPU *c) { gptr o = num_new('f', 0, U2F(ARG(2))); N_(o)->i = (int64_t)N_(o)->d; RET(objc_autorelease_(o)); }
static void nu_numberWithDouble(CPU *c) { RET(nsnumber_double(ARGD(2), false)); }
static void nu_initWithInt(CPU *c) { Num *n = hostdata_ensure(SELF, sizeof(Num), NULL); n->t = 'q'; n->i = (int32_t)ARG(2); n->d = (double)n->i; RET(SELF); }
static void nu_initWithBool(CPU *c) { Num *n = hostdata_ensure(SELF, sizeof(Num), NULL); n->t = 'c'; n->i = ARG(2) & 0xff; n->d = (double)n->i; RET(SELF); }
static void nu_initWithDouble(CPU *c) { Num *n = hostdata_ensure(SELF, sizeof(Num), NULL); n->t = 'd'; n->d = ARGD(2); n->i = (int64_t)n->d; RET(SELF); }
static void nu_initWithFloat(CPU *c) { Num *n = hostdata_ensure(SELF, sizeof(Num), NULL); n->t = 'f'; n->d = U2F(ARG(2)); n->i = (int64_t)n->d; RET(SELF); }
static void nu_initWithLongLong(CPU *c) { Num *n = hostdata_ensure(SELF, sizeof(Num), NULL); n->t = 'q'; n->i = (int64_t)((uint64_t)ARG(2) | ((uint64_t)ARG(3) << 32)); n->d = (double)n->i; RET(SELF); }
static void nu_intValue(CPU *c) { RET((uint32_t)(int32_t)nsnumber_get_int(SELF)); }
static void nu_boolValue(CPU *c) { RET(nsnumber_get_int(SELF) != 0 || nsnumber_get_double(SELF) != 0); }
static void nu_longLongValue(CPU *c) { RET64((uint64_t)nsnumber_get_int(SELF)); }
static void nu_floatValue(CPU *c) { RETF((float)nsnumber_get_double(SELF)); }
static void nu_doubleValue(CPU *c) { RETD(nsnumber_get_double(SELF)); }
static void nu_objCType(CPU *c) { Num *n = N_(SELF); char t[2] = {n ? n->t : 'i', 0}; RET(gstatic_str(t)); }
static void nu_isEqual(CPU *c) { gptr o = ARG(2); if (!is_nsnumber(o)) { RET(0); return; } RET(nsnumber_get_double(SELF) == nsnumber_get_double(o) && nsnumber_get_int(SELF) == nsnumber_get_int(o)); }
static void nu_hash(CPU *c) { RET((uint32_t)nsnumber_get_int(SELF)); }
static void nu_compare(CPU *c) { double a = nsnumber_get_double(SELF), b = nsnumber_get_double(ARG(2)); RET(a < b ? (uint32_t)-1 : a > b ? 1 : 0); }
static void nu_description(CPU *c) { Num *n = N_(SELF); char b[64]; if (n && (n->t == 'd' || n->t == 'f')) snprintf(b, sizeof b, "%.15g", n->d); else snprintf(b, sizeof b, "%lld", (long long)(n ? n->i : 0)); RET(nsstr(b)); }

/* ================================================================== NSData (bytes are guest memory) */
typedef struct Dat { gptr bytes; uint32_t len, cap; bool owns, mutable_; } Dat;
static Dat *DT(gptr o) { return hostdata(o); }
static void dat_free(Dat *d) { if (d->owns && d->bytes) gfree(d->bytes); d->bytes = 0; }
static Dat *dat_init(gptr o) { Dat *d = hostdata_ensure(o, sizeof(Dat), NULL); d->mutable_ = objc_is_kind_of(o, cls_NSMutableData); return d; }
static void dat_set(Dat *d, const void *p, uint32_t n) { dat_free(d); d->bytes = gmalloc(n ? n : 1); if (n) memcpy(G2H(d->bytes), p, n); d->len = n; d->cap = n; d->owns = true; }
gptr nsdata_new(const void *bytes, uint32_t n, bool retained) { gptr o = objc_alloc_instance(cls_NSData, 0); dat_set(dat_init(o), bytes, n); return retained ? o : objc_autorelease_(o); }
static void da_dealloc(CPU *c) { Dat *d = DT(SELF); if (d) dat_free(d); objc_destroy_instance(SELF); }
static void da_data(CPU *c) { gptr o = objc_alloc_instance(SELF, 0); dat_set(dat_init(o), "", 0); RET(objc_autorelease_(o)); }
static void da_init(CPU *c) { dat_set(dat_init(SELF), "", 0); RET(SELF); }
static void da_dataWithBytes(CPU *c) { gptr o = objc_alloc_instance(SELF, 0); dat_set(dat_init(o), G2H(ARG(2)), ARG(3)); RET(objc_autorelease_(o)); }
static void da_initWithBytes(CPU *c) { dat_set(dat_init(SELF), G2H(ARG(2)), ARG(3)); RET(SELF); }
static void da_dataWithBytesNoCopy(CPU *c) { gptr o = objc_alloc_instance(SELF, 0); Dat *d = dat_init(o); d->bytes = ARG(2); d->len = d->cap = ARG(3); d->owns = true; RET(objc_autorelease_(o)); }
static void da_dataWithBytesNoCopy_free(CPU *c) { gptr o = objc_alloc_instance(SELF, 0); Dat *d = dat_init(o); d->bytes = ARG(2); d->len = d->cap = ARG(3); d->owns = LD8(c->r[13]) & 1; RET(objc_autorelease_(o)); }
static void da_initWithBytesNoCopy(CPU *c) { Dat *d = dat_init(SELF); d->bytes = ARG(2); d->len = d->cap = ARG(3); d->owns = true; RET(SELF); }
static void da_initWithBytesNoCopy_free(CPU *c) { Dat *d = dat_init(SELF); d->bytes = ARG(2); d->len = d->cap = ARG(3); d->owns = LD8(c->r[13]) & 1; RET(SELF); }
static void da_dataWithData(CPU *c) { gptr o = objc_alloc_instance(SELF, 0); Dat *s = DT(ARG(2)); dat_set(dat_init(o), s ? G2H(s->bytes) : (void *)"", s ? s->len : 0); RET(objc_autorelease_(o)); }
static void da_dataWithLength(CPU *c) { gptr o = objc_alloc_instance(SELF, 0); Dat *d = dat_init(o); dat_free(d); d->bytes = gcalloc(1, ARG(2) ? ARG(2) : 1); d->len = d->cap = ARG(2); d->owns = true; RET(objc_autorelease_(o)); }
static void da_initWithLength(CPU *c) { Dat *d = dat_init(SELF); dat_free(d); d->bytes = gcalloc(1, ARG(2) ? ARG(2) : 1); d->len = d->cap = ARG(2); d->owns = true; RET(SELF); }
static void da_dataWithCapacity(CPU *c) { gptr o = objc_alloc_instance(SELF, 0); Dat *d = dat_init(o); dat_free(d); d->bytes = gmalloc(ARG(2) ? ARG(2) : 16); d->cap = ARG(2); d->len = 0; d->owns = true; RET(objc_autorelease_(o)); }
static void da_initWithCapacity(CPU *c) { Dat *d = dat_init(SELF); dat_free(d); d->bytes = gmalloc(ARG(2) ? ARG(2) : 16); d->cap = ARG(2); d->len = 0; d->owns = true; RET(SELF); }
static void load_file_into(Dat *d, const char *gpath, bool *ok) {
    const char *vfs_resolve(const char *, char *, size_t); char p[1024]; vfs_resolve(gpath, p, sizeof p);
    int n = host_file_size(p); *ok = n >= 0; if (n < 0) return;
    dat_free(d); d->bytes = gmalloc((uint32_t)n + 1); host_file_read(p, G2H(d->bytes), 0, (uint32_t)n); d->len = d->cap = (uint32_t)n; d->owns = true;
}
static void da_dataWithContentsOfFile(CPU *c) { gptr o = objc_alloc_instance(SELF, 0); Dat *d = dat_init(o); bool ok; load_file_into(d, nsstr_cstr(ARG(2)), &ok); if (!ok) { objc_destroy_instance(o); RET(0); return; } RET(objc_autorelease_(o)); }
static void da_initWithContentsOfFile(CPU *c) { Dat *d = dat_init(SELF); bool ok; load_file_into(d, nsstr_cstr(ARG(2)), &ok); if (!ok) { objc_destroy_instance(SELF); RET(0); return; } RET(SELF); }
static void da_bytes(CPU *c) { Dat *d = DT(SELF); RET(d ? d->bytes : 0); }
static void da_length(CPU *c) { Dat *d = DT(SELF); RET(d ? d->len : 0); }
static void da_getBytes_length(CPU *c) { Dat *d = DT(SELF); uint32_t n = ARG(3) < d->len ? ARG(3) : d->len; memcpy(G2H(ARG(2)), G2H(d->bytes), n); }
static void da_getBytes_range(CPU *c) { Dat *d = DT(SELF); uint32_t loc = ARG(3), len = LD32(c->r[13]); if (loc + len > d->len) rt_fatal(c, "getBytes:range: out of range"); memcpy(G2H(ARG(2)), G2H(d->bytes + loc), len); }
static void da_copy(CPU *c) { Dat *d = DT(SELF); if (!d->mutable_) { RET(objc_retain_(SELF)); return; } RET(nsdata_new(G2H(d->bytes), d->len, true)); }
static void da_mutableCopy(CPU *c) { Dat *d = DT(SELF); gptr o = objc_alloc_instance(cls_NSMutableData, 0); dat_set(dat_init(o), G2H(d->bytes), d->len); RET(o); }
static void da_mutableBytes(CPU *c) { da_bytes(c); }
static void dat_reserve(Dat *d, uint32_t n) { if (n <= d->cap) return; uint32_t nc = n * 2 + 16; gptr nb = gmalloc(nc); if (d->len) memcpy(G2H(nb), G2H(d->bytes), d->len); dat_free(d); d->bytes = nb; d->cap = nc; d->owns = true; }
static void da_appendBytes(CPU *c) { Dat *d = DT(SELF); uint32_t n = ARG(3); dat_reserve(d, d->len + n); memcpy(G2H(d->bytes + d->len), G2H(ARG(2)), n); d->len += n; }
static void da_appendData(CPU *c) { Dat *d = DT(SELF), *s = DT(ARG(2)); if (!s) return; dat_reserve(d, d->len + s->len); memcpy(G2H(d->bytes + d->len), G2H(s->bytes), s->len); d->len += s->len; }
static void da_setLength(CPU *c) { Dat *d = DT(SELF); uint32_t n = ARG(2); dat_reserve(d, n); if (n > d->len) memset(G2H(d->bytes + d->len), 0, n - d->len); d->len = n; }
static void da_increaseLength(CPU *c) { Dat *d = DT(SELF); uint32_t n = d->len + ARG(2); dat_reserve(d, n); memset(G2H(d->bytes + d->len), 0, ARG(2)); d->len = n; }
static void da_writeToFile(CPU *c) { Dat *d = DT(SELF); const char *vfs_resolve(const char *, char *, size_t); char p[1024]; vfs_resolve(nsstr_cstr(ARG(2)), p, sizeof p); RET(host_file_write(p, G2H(d->bytes), d->len, 0) >= 0); }
static void da_isEqual(CPU *c) { Dat *a = DT(SELF), *b = ARG(2) ? DT(ARG(2)) : NULL; RET(b && a->len == b->len && !memcmp(G2H(a->bytes), G2H(b->bytes), a->len)); }
static void da_description(CPU *c) { Dat *d = DT(SELF); char b[64]; snprintf(b, sizeof b, "<NSData %u bytes>", d ? d->len : 0); RET(nsstr(b)); }

/* ================================================================== NSNull, pool */
static void nl_null(CPU *c) { RET(null_singleton); }
static void pool_init(CPU *c) { uint32_t *t = hostdata_ensure(SELF, 4, NULL); *t = objc_pool_push(); RET(SELF); }
static void pool_drain(CPU *c) { uint32_t *t = hostdata(SELF); if (t) objc_pool_pop(c, *t); objc_destroy_instance(SELF); }
static void pool_addObject(CPU *c) { objc_autorelease_(ARG(2)); }

/* ================================================================== equality helpers */
bool obj_equal(CPU *c, gptr a, gptr b) {
    if (a == b) return true;
    if (!a || !b) return false;
    if (is_nsstring(a) && is_nsstring(b)) { Str *x = S(a), *y = S(b); return x->len == y->len && !memcmp(x->u, y->u, x->len * 2); }
    if (is_nsnumber(a) && is_nsnumber(b)) return nsnumber_get_double(a) == nsnumber_get_double(b) && nsnumber_get_int(a) == nsnumber_get_int(b);
    return msg(c, a, "isEqual:", 1, b) & 0xff;
}
uint32_t obj_hash(CPU *c, gptr a) { if (is_nsstring(a)) return str_hash(S(a)); return msg(c, a, "hash", 0); }

/* ================================================================== registration */
#define M(cls, sel, fn) host_method(cls, sel, "", fn)
#define CM(cls, sel, fn) host_cmethod(cls, sel, "", fn)
void foundation_init(void) {
    cls_NSObject = host_class("NSObject", NULL, 4);
    gptr O = cls_NSObject;
    CM(O, "alloc", o_alloc); CM(O, "allocWithZone:", o_allocWithZone); CM(O, "new", o_new); CM(O, "class", o_class_c);
    CM(O, "superclass", o_superclass_c); CM(O, "self", o_self); CM(O, "retain", o_noop_retain_c); CM(O, "release", o_noop_c);
    CM(O, "autorelease", o_noop_retain_c); CM(O, "isSubclassOfClass:", o_isKindOfClass); CM(O, "instancesRespondToSelector:", o_instancesRespondToSelector);
    CM(O, "respondsToSelector:", o_respondsToSelector); CM(O, "description", o_description_c); CM(O, "initialize", o_noop_c); CM(O, "load", o_noop_c);
    CM(O, "conformsToProtocol:", o_conformsToProtocol); CM(O, "isKindOfClass:", o_isKindOfClass); CM(O, "copyWithZone:", o_noop_retain_c);
    CM(O, "performSelector:", o_performSelector); CM(O, "performSelector:withObject:", o_performSelector1); CM(O, "hash", o_hash); CM(O, "isEqual:", o_isEqual);
    CM(O, "cancelPreviousPerformRequestsWithTarget:selector:object:", o_cancelPrevious); CM(O, "cancelPreviousPerformRequestsWithTarget:", o_cancelPreviousAll);
    M(O, "init", o_init); M(O, "self", o_self); M(O, "class", o_class_i); M(O, "superclass", o_superclass_i); M(O, "dealloc", o_dealloc);
    M(O, "retain", o_retain); M(O, "release", o_release); M(O, "autorelease", o_autorelease); M(O, "retainCount", o_retainCount);
    M(O, "isKindOfClass:", o_isKindOfClass); M(O, "isMemberOfClass:", o_isMemberOfClass); M(O, "respondsToSelector:", o_respondsToSelector);
    M(O, "conformsToProtocol:", o_conformsToProtocol); M(O, "isEqual:", o_isEqual); M(O, "hash", o_hash); M(O, "description", o_description);
    M(O, "debugDescription", o_description); M(O, "copy", o_copy); M(O, "mutableCopy", o_mutableCopy); M(O, "zone", o_zone); M(O, "isProxy", o_isProxy);
    M(O, "performSelector:", o_performSelector); M(O, "performSelector:withObject:", o_performSelector1); M(O, "performSelector:withObject:withObject:", o_performSelector2);
    M(O, "performSelector:withObject:afterDelay:", o_performSelectorAfterDelay);
    M(O, "performSelectorOnMainThread:withObject:waitUntilDone:", o_performSelectorOnMainThread);
    M(O, "methodForSelector:", o_methodForSelector); M(O, "doesNotRecognizeSelector:", o_doesNotRecognizeSelector);
    host_nsobject_retain_imp = objc_lookup_imp(O, sel_get("retain"));
    host_nsobject_release_imp = objc_lookup_imp(O, sel_get("release"));
    host_nsobject_autorelease_imp = objc_lookup_imp(O, sel_get("autorelease"));

    cls_NSString = host_class("NSString", "NSObject", 4);
    cls_NSMutableString = host_class("NSMutableString", "NSString", 4);
    cls_NSConstantString = host_class("__NSCFConstantString", "NSString", 4);
    data_import_register("___CFConstantStringClassReference", cls_NSConstantString);
    gptr St = cls_NSString;
    CM(St, "alloc", st_alloc); CM(St, "allocWithZone:", st_alloc); CM(St, "string", st_string); CM(St, "stringWithString:", st_stringWithString);
    CM(St, "stringWithUTF8String:", st_stringWithUTF8String); CM(St, "stringWithFormat:", st_stringWithFormat); CM(St, "stringWithCString:encoding:", st_stringWithCString);
    CM(St, "stringWithCharacters:length:", st_stringWithCharacters); CM(St, "stringWithContentsOfFile:encoding:error:", st_stringWithContentsOfFile);
    CM(St, "localizedStringWithFormat:", st_stringWithFormat);
    M(St, "init", st_init); M(St, "initWithString:", st_initWithString); M(St, "initWithUTF8String:", st_initWithUTF8String);
    M(St, "initWithBytes:length:encoding:", st_initWithBytes); M(St, "initWithBytesNoCopy:length:encoding:freeWhenDone:", st_initWithBytesNoCopy);
    M(St, "initWithData:encoding:", st_initWithData); M(St, "initWithCString:encoding:", st_initWithCString); M(St, "initWithCharacters:length:", st_initWithCharacters);
    M(St, "initWithFormat:", st_initWithFormat); M(St, "initWithFormat:arguments:", st_initWithFormat_args); M(St, "initWithFormat:locale:", st_initWithFormat);
    M(St, "length", st_length); M(St, "characterAtIndex:", st_characterAtIndex); M(St, "getCharacters:range:", st_getCharacters_range); M(St, "getCharacters:", st_getCharacters);
    M(St, "UTF8String", st_UTF8String); M(St, "cStringUsingEncoding:", st_cStringUsingEncoding); M(St, "getCString:maxLength:encoding:", st_getCString);
    M(St, "lengthOfBytesUsingEncoding:", st_lengthOfBytes); M(St, "maximumLengthOfBytesUsingEncoding:", st_maximumLengthOfBytes); M(St, "dataUsingEncoding:", st_dataUsingEncoding);
    M(St, "copyWithZone:", st_copy); M(St, "mutableCopyWithZone:", st_mutableCopy); M(St, "description", st_description); M(St, "isEqual:", st_isEqual); M(St, "hash", st_hash);
    M(St, "compare:", st_compare); M(St, "compare:options:", st_compare_options); M(St, "caseInsensitiveCompare:", st_caseInsensitiveCompare); M(St, "isEqualToString:", st_isEqualToString);
    M(St, "hasPrefix:", st_hasPrefix); M(St, "hasSuffix:", st_hasSuffix); M(St, "rangeOfString:", st_rangeOfString); M(St, "rangeOfString:options:", st_rangeOfString_options);
    M(St, "substringFromIndex:", st_substringFromIndex); M(St, "substringToIndex:", st_substringToIndex); M(St, "substringWithRange:", st_substringWithRange);
    M(St, "stringByAppendingString:", st_stringByAppendingString); M(St, "stringByAppendingFormat:", st_stringByAppendingFormat);
    M(St, "stringByReplacingOccurrencesOfString:withString:", st_stringByReplacingOccurrencesOfString);
    M(St, "lowercaseString", st_lowercaseString); M(St, "uppercaseString", st_uppercaseString); M(St, "intValue", st_intValue); M(St, "integerValue", st_integerValue);
    M(St, "longLongValue", st_longLongValue); M(St, "floatValue", st_floatValue); M(St, "doubleValue", st_doubleValue); M(St, "boolValue", st_boolValue);
    M(St, "componentsSeparatedByString:", st_componentsSeparatedByString); M(St, "lastPathComponent", st_pathComponents_last);
    M(St, "stringByAppendingPathComponent:", st_stringByAppendingPathComponent); M(St, "stringByAppendingPathExtension:", st_stringByAppendingPathExtension);
    M(St, "stringByDeletingLastPathComponent", st_stringByDeletingLastPathComponent); M(St, "pathExtension", st_pathExtension);
    M(St, "stringByDeletingPathExtension", st_stringByDeletingPathExtension); M(St, "fileSystemRepresentation", st_fileSystemRepresentation);
    M(St, "stringByStandardizingPath", st_stringByStandardizingPath); M(St, "stringByExpandingTildeInPath", st_stringByStandardizingPath);
    M(St, "stringByTrimmingCharactersInSet:", st_stringByTrimming); M(St, "isAbsolutePath", st_isAbsolutePath);
    M(St, "writeToFile:atomically:encoding:error:", st_writeToFile);
    gptr MS = cls_NSMutableString;
    CM(MS, "stringWithCapacity:", ms_stringWithCapacity); M(MS, "initWithCapacity:", ms_initWithCapacity);
    M(MS, "appendString:", ms_appendString); M(MS, "appendFormat:", ms_appendFormat); M(MS, "setString:", ms_setString);
    M(MS, "deleteCharactersInRange:", ms_deleteCharactersInRange); M(MS, "insertString:atIndex:", ms_insertString);

    cls_NSArray = host_class("NSArray", "NSObject", 4);
    cls_NSMutableArray = host_class("NSMutableArray", "NSArray", 4);
    cls_NSArrayEnum = host_class("__NSFastEnumerationEnumerator", "NSObject", 4);
    cls_NSEnumerator = host_class("NSEnumerator", "NSObject", 4);
    gptr Ar = cls_NSArray;
    CM(Ar, "array", ar_array); CM(Ar, "arrayWithObject:", ar_arrayWithObject); CM(Ar, "arrayWithObjects:count:", ar_arrayWithObjects_count);
    CM(Ar, "arrayWithObjects:", ar_arrayWithObjects); CM(Ar, "arrayWithArray:", ar_arrayWithArray); CM(Ar, "alloc", ar_alloc); CM(Ar, "allocWithZone:", ar_alloc);
    M(Ar, "init", ar_init); M(Ar, "dealloc", ar_dealloc); M(Ar, "initWithObjects:count:", ar_initWithObjects_count); M(Ar, "initWithArray:", ar_initWithArray);
    M(Ar, "count", ar_count); M(Ar, "objectAtIndex:", ar_objectAtIndex); M(Ar, "objectAtIndexedSubscript:", ar_objectAtIndex);
    M(Ar, "firstObject", ar_firstObject); M(Ar, "lastObject", ar_lastObject); M(Ar, "containsObject:", ar_containsObject); M(Ar, "indexOfObject:", ar_indexOfObject);
    M(Ar, "copyWithZone:", ar_copy); M(Ar, "mutableCopyWithZone:", ar_mutableCopy); M(Ar, "countByEnumeratingWithState:objects:count:", ar_countByEnumerating);
    M(Ar, "objectEnumerator", ar_objectEnumerator); M(Ar, "reverseObjectEnumerator", ar_reverseObjectEnumerator); M(Ar, "description", ar_description);
    M(Ar, "componentsJoinedByString:", ar_componentsJoinedByString); M(Ar, "makeObjectsPerformSelector:", ar_makeObjectsPerform);
    M(Ar, "makeObjectsPerformSelector:withObject:", ar_makeObjectsPerform1); M(Ar, "isEqualToArray:", ar_isEqualToArray);
    gptr MA = cls_NSMutableArray;
    CM(MA, "arrayWithCapacity:", ar_arrayWithCapacity); M(MA, "initWithCapacity:", ar_initWithCapacity);
    M(MA, "addObject:", ar_addObject); M(MA, "addObjectsFromArray:", ar_addObjectsFromArray); M(MA, "insertObject:atIndex:", ar_insertObject);
    M(MA, "removeObjectAtIndex:", ar_removeObjectAtIndex); M(MA, "removeLastObject", ar_removeLastObject); M(MA, "removeAllObjects", ar_removeAllObjects);
    M(MA, "removeObject:", ar_removeObject); M(MA, "replaceObjectAtIndex:withObject:", ar_replaceObjectAtIndex); M(MA, "setObject:atIndexedSubscript:", ar_replaceObjectAtIndex);
    M(cls_NSArrayEnum, "nextObject", en_nextObject); M(cls_NSArrayEnum, "allObjects", en_allObjects);

    cls_NSDictionary = host_class("NSDictionary", "NSObject", 4);
    cls_NSMutableDictionary = host_class("NSMutableDictionary", "NSDictionary", 4);
    gptr Di = cls_NSDictionary;
    CM(Di, "dictionary", di_dictionary); CM(Di, "dictionaryWithObjects:forKeys:count:", di_dictionaryWithObjects_forKeys_count);
    CM(Di, "dictionaryWithObject:forKey:", di_dictionaryWithObject_forKey); CM(Di, "dictionaryWithObjectsAndKeys:", di_dictionaryWithObjectsAndKeys);
    CM(Di, "dictionaryWithDictionary:", di_dictionaryWithDictionary); CM(Di, "alloc", ar_alloc); CM(Di, "allocWithZone:", ar_alloc);
    M(Di, "init", di_init); M(Di, "dealloc", di_dealloc); M(Di, "initWithObjects:forKeys:count:", di_initWithObjects_forKeys_count);
    M(Di, "initWithDictionary:", di_initWithDictionary); M(Di, "count", di_count); M(Di, "objectForKey:", di_objectForKey); M(Di, "objectForKeyedSubscript:", di_objectForKey);
    M(Di, "valueForKey:", di_valueForKey); M(Di, "allKeys", di_allKeys); M(Di, "allValues", di_allValues); M(Di, "keyEnumerator", di_keyEnumerator);
    M(Di, "objectEnumerator", di_objectEnumerator); M(Di, "copyWithZone:", di_copy); M(Di, "mutableCopyWithZone:", di_mutableCopy);
    M(Di, "countByEnumeratingWithState:objects:count:", di_countByEnumerating); M(Di, "description", di_description);
    gptr MD = cls_NSMutableDictionary;
    CM(MD, "dictionaryWithCapacity:", di_dictionary); M(MD, "initWithCapacity:", di_initWithCapacity);
    M(MD, "setObject:forKey:", di_setObject_forKey); M(MD, "setObject:forKeyedSubscript:", di_setObject_forKey); M(MD, "setValue:forKey:", di_setValue_forKey);
    M(MD, "removeObjectForKey:", di_removeObjectForKey); M(MD, "removeAllObjects", di_removeAllObjects); M(MD, "addEntriesFromDictionary:", di_addEntriesFromDictionary);

    cls_NSNumber = host_class("NSNumber", "NSObject", 4);
    host_class("NSValue", "NSObject", 4);
    gptr Nu = cls_NSNumber;
    CM(Nu, "numberWithInt:", nu_numberWithInt); CM(Nu, "numberWithInteger:", nu_numberWithInt); CM(Nu, "numberWithUnsignedInt:", nu_numberWithUnsignedInt);
    CM(Nu, "numberWithUnsignedInteger:", nu_numberWithUnsignedInt); CM(Nu, "numberWithLongLong:", nu_numberWithLongLong); CM(Nu, "numberWithLong:", nu_numberWithInt);
    CM(Nu, "numberWithUnsignedLongLong:", nu_numberWithLongLong); CM(Nu, "numberWithBool:", nu_numberWithBool); CM(Nu, "numberWithFloat:", nu_numberWithFloat);
    CM(Nu, "numberWithDouble:", nu_numberWithDouble); CM(Nu, "numberWithChar:", nu_numberWithInt); CM(Nu, "numberWithShort:", nu_numberWithInt);
    M(Nu, "initWithInt:", nu_initWithInt); M(Nu, "initWithInteger:", nu_initWithInt); M(Nu, "initWithBool:", nu_initWithBool); M(Nu, "initWithDouble:", nu_initWithDouble);
    M(Nu, "initWithFloat:", nu_initWithFloat); M(Nu, "initWithLongLong:", nu_initWithLongLong);
    M(Nu, "intValue", nu_intValue); M(Nu, "integerValue", nu_intValue); M(Nu, "unsignedIntValue", nu_intValue); M(Nu, "unsignedIntegerValue", nu_intValue);
    M(Nu, "boolValue", nu_boolValue); M(Nu, "charValue", nu_intValue); M(Nu, "shortValue", nu_intValue); M(Nu, "longValue", nu_intValue);
    M(Nu, "longLongValue", nu_longLongValue); M(Nu, "unsignedLongLongValue", nu_longLongValue); M(Nu, "floatValue", nu_floatValue); M(Nu, "doubleValue", nu_doubleValue);
    M(Nu, "objCType", nu_objCType); M(Nu, "isEqual:", nu_isEqual); M(Nu, "isEqualToNumber:", nu_isEqual); M(Nu, "hash", nu_hash); M(Nu, "compare:", nu_compare);
    M(Nu, "description", nu_description); M(Nu, "stringValue", nu_description); M(Nu, "copyWithZone:", o_noop_retain_c);
    bool_yes = num_new('c', 1, 1); bool_no = num_new('c', 0, 0);
    objc_retain_(bool_yes); objc_retain_(bool_no);
    data_import_register("_kCFBooleanTrue", gstatic_alloc(4)); ST32(data_import_lookup("_kCFBooleanTrue"), bool_yes);
    data_import_register("_kCFBooleanFalse", gstatic_alloc(4)); ST32(data_import_lookup("_kCFBooleanFalse"), bool_no);

    cls_NSData = host_class("NSData", "NSObject", 4);
    cls_NSMutableData = host_class("NSMutableData", "NSData", 4);
    gptr Da = cls_NSData;
    CM(Da, "data", da_data); CM(Da, "dataWithBytes:length:", da_dataWithBytes); CM(Da, "dataWithBytesNoCopy:length:", da_dataWithBytesNoCopy);
    CM(Da, "dataWithBytesNoCopy:length:freeWhenDone:", da_dataWithBytesNoCopy_free); CM(Da, "dataWithData:", da_dataWithData);
    CM(Da, "dataWithContentsOfFile:", da_dataWithContentsOfFile); CM(Da, "dataWithContentsOfFile:options:error:", da_dataWithContentsOfFile);
    CM(Da, "alloc", ar_alloc); CM(Da, "allocWithZone:", ar_alloc);
    M(Da, "init", da_init); M(Da, "dealloc", da_dealloc); M(Da, "initWithBytes:length:", da_initWithBytes); M(Da, "initWithBytesNoCopy:length:", da_initWithBytesNoCopy);
    M(Da, "initWithBytesNoCopy:length:freeWhenDone:", da_initWithBytesNoCopy_free); M(Da, "initWithContentsOfFile:", da_initWithContentsOfFile);
    M(Da, "bytes", da_bytes); M(Da, "length", da_length); M(Da, "getBytes:length:", da_getBytes_length); M(Da, "getBytes:range:", da_getBytes_range);
    M(Da, "copyWithZone:", da_copy); M(Da, "mutableCopyWithZone:", da_mutableCopy); M(Da, "writeToFile:atomically:", da_writeToFile);
    M(Da, "isEqual:", da_isEqual); M(Da, "isEqualToData:", da_isEqual); M(Da, "description", da_description);
    gptr MDa = cls_NSMutableData;
    CM(MDa, "dataWithLength:", da_dataWithLength); CM(MDa, "dataWithCapacity:", da_dataWithCapacity);
    M(MDa, "initWithLength:", da_initWithLength); M(MDa, "initWithCapacity:", da_initWithCapacity); M(MDa, "mutableBytes", da_mutableBytes);
    M(MDa, "appendBytes:length:", da_appendBytes); M(MDa, "appendData:", da_appendData); M(MDa, "setLength:", da_setLength); M(MDa, "increaseLengthBy:", da_increaseLength);

    cls_NSNull = host_class("NSNull", "NSObject", 4);
    null_singleton = gstatic_alloc(4); ST32(null_singleton, cls_NSNull);
    CM(cls_NSNull, "null", nl_null);
    data_import_register("_kCFNull", gstatic_alloc(4)); ST32(data_import_lookup("_kCFNull"), null_singleton);

    cls_NSAutoreleasePool = host_class("NSAutoreleasePool", "NSObject", 4);
    M(cls_NSAutoreleasePool, "init", pool_init); M(cls_NSAutoreleasePool, "drain", pool_drain); M(cls_NSAutoreleasePool, "release", pool_drain);
    CM(cls_NSAutoreleasePool, "addObject:", pool_addObject);
}

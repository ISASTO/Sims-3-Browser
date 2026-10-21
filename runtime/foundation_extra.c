/* foundation_extra.c — keyed archiving, character sets, scanner, regular expressions, exceptions,
 * networking classes (which fail as "offline"), operation queues and threads used by the bundled SDKs.
 *
 * Keyed archives are written as an XML plist tree {"$class": name, key: value, ...} and read back by this
 * runtime; they are not byte-compatible with Apple's NSKeyedArchiver format (DECISIONS.md D12). */
#include "rt.h"
#include "fmt.h"
#include <regex.h>
#include <ctype.h>

gptr rt_retain(CPU *c, gptr obj);
void rt_release(CPU *c, gptr obj);
void objc_destroy_instance(gptr obj);
gptr plist_parse(CPU *c, const uint8_t *data, uint32_t len);
void plist_write_xml(CPU *c, gptr obj, char **out);
const char *vfs_resolve(const char *in, char *out, size_t outlen);
extern gptr cls_NSString, cls_NSArray, cls_NSMutableArray, cls_NSDictionary, cls_NSMutableDictionary, cls_NSNumber, cls_NSData, cls_NSMutableData;
#define M(cls, sel, fn) host_method(cls, sel, "", fn)
#define CM(cls, sel, fn) host_cmethod(cls, sel, "", fn)
static void r_nil(CPU *c) { RET(0); }
static void r_no(CPU *c) { RET(0); }
static void r_yes(CPU *c) { RET(1); }
static void r_noop(CPU *c) { UNUSED(c); }

/* ================================================================== keyed archiving */
static gptr cls_KA, cls_KU, cls_Coder;
typedef struct { gptr data; gptr dict; } Coder;   /* dict = current object dictionary being encoded/decoded */
static bool plist_scalar(gptr o) { return is_nsstring(o) || is_nsnumber(o) || objc_is_kind_of(o, cls_NSData); }
static gptr encode_obj(CPU *c, gptr o);
static gptr encode_obj(CPU *c, gptr o) {
    if (!o) return nsstr("$null");
    if (plist_scalar(o)) return o;
    if (objc_is_kind_of(o, cls_NSArray)) {
        gptr a = nsarray_new(NULL, 0, true, false); uint32_t n = msg(c, o, "count", 0);
        for (uint32_t i = 0; i < n; i++) nsarray_add(a, encode_obj(c, msg(c, o, "objectAtIndex:", 1, i)));
        gptr d = nsdict_new(true, false); nsdict_set(d, nsstr("$class"), nsstr("NSArray")); nsdict_set(d, nsstr("NS.objects"), a); return d;
    }
    if (objc_is_kind_of(o, cls_NSDictionary)) {
        gptr keys = msg(c, o, "allKeys", 0), kk = nsarray_new(NULL, 0, true, false), vv = nsarray_new(NULL, 0, true, false);
        for (uint32_t i = 0; i < nsarray_count(keys); i++) { gptr k = nsarray_get(keys, i); nsarray_add(kk, encode_obj(c, k)); nsarray_add(vv, encode_obj(c, nsdict_get(o, k))); }
        gptr d = nsdict_new(true, false); nsdict_set(d, nsstr("$class"), nsstr("NSDictionary")); nsdict_set(d, nsstr("NS.keys"), kk); nsdict_set(d, nsstr("NS.objects"), vv); return d;
    }
    gptr d = nsdict_new(true, false);
    nsdict_set(d, nsstr("$class"), nsstr(objc_obj_class_name(o)));
    gptr coder = objc_alloc_instance(cls_KA, 0);
    Coder *s = hostdata_ensure(coder, sizeof(Coder), NULL); s->dict = d;
    msg(c, o, "encodeWithCoder:", 1, coder);
    rt_release(c, coder);
    return d;
}
static gptr decode_obj(CPU *c, gptr v) {
    if (!v) return 0;
    if (is_nsstring(v) && !strcmp(nsstr_cstr(v), "$null")) return 0;
    if (!objc_is_kind_of(v, cls_NSDictionary)) return v;
    gptr cn = nsdict_get(v, nsstr("$class"));
    if (!cn) return v;
    const char *name = nsstr_cstr(cn);
    if (!strcmp(name, "NSArray")) { gptr src = nsdict_get(v, nsstr("NS.objects")); gptr a = nsarray_new(NULL, 0, true, false); for (uint32_t i = 0; i < nsarray_count(src); i++) { gptr x = decode_obj(c, nsarray_get(src, i)); if (x) nsarray_add(a, x); } return a; }
    if (!strcmp(name, "NSDictionary")) { gptr kk = nsdict_get(v, nsstr("NS.keys")), vv = nsdict_get(v, nsstr("NS.objects")); gptr d = nsdict_new(true, false); for (uint32_t i = 0; i < nsarray_count(kk); i++) { gptr x = decode_obj(c, nsarray_get(vv, i)); if (x) nsdict_set(d, decode_obj(c, nsarray_get(kk, i)), x); } return d; }
    gptr cls = objc_class_named(name);
    if (!cls) { rt_log("unarchive: unknown class %s", name); return 0; }
    gptr coder = objc_alloc_instance(cls_KU, 0);
    Coder *s = hostdata_ensure(coder, sizeof(Coder), NULL); s->dict = v;
    gptr o = msg(c, msg(c, cls, "alloc", 0), "initWithCoder:", 1, coder);
    rt_release(c, coder);
    return o ? objc_autorelease_(o) : 0;
}
static gptr root_key(void) { return nsstr("root"); }
static void ka_initForWritingWithMutableData(CPU *c) { Coder *s = hostdata_ensure(SELF, sizeof(Coder), NULL); s->data = rt_retain(c, ARG(2)); s->dict = rt_retain(c, nsdict_new(true, false)); RET(SELF); }
static void ka_encodeObjectForKey(CPU *c) { Coder *s = hostdata(SELF); nsdict_set(s->dict, ARG(3), encode_obj(c, ARG(2))); }
static void ka_encodeObject(CPU *c) { Coder *s = hostdata(SELF); nsdict_set(s->dict, root_key(), encode_obj(c, ARG(2))); }
static void ka_encodeInt(CPU *c) { Coder *s = hostdata(SELF); nsdict_set(s->dict, ARG(3), nsnumber_int((int32_t)ARG(2), false)); }
static void ka_encodeInt64(CPU *c) { Coder *s = hostdata(SELF); nsdict_set(s->dict, LD32(c->r[13]), nsnumber_int((int64_t)((uint64_t)ARG(2) | ((uint64_t)ARG(3) << 32)), false)); }
static void ka_encodeBool(CPU *c) { Coder *s = hostdata(SELF); nsdict_set(s->dict, ARG(3), nsnumber_bool(ARG(2) & 0xff)); }
static void ka_encodeFloat(CPU *c) { Coder *s = hostdata(SELF); nsdict_set(s->dict, ARG(3), nsnumber_double(U2F(ARG(2)), false)); }
static void ka_encodeDouble(CPU *c) { Coder *s = hostdata(SELF); nsdict_set(s->dict, LD32(c->r[13]), nsnumber_double(ARGD(2), false)); }
static void ka_encodeValueOfObjCType(CPU *c) {
    Coder *s = hostdata(SELF); const char *t = GSTR(ARG(2)); gptr p = ARG(3);
    char key[32]; static int k; snprintf(key, sizeof key, "$v%d", k++);
    gptr arr = nsdict_get(s->dict, nsstr("$values")); if (!arr) { arr = nsarray_new(NULL, 0, true, false); nsdict_set(s->dict, nsstr("$values"), arr); }
    if (*t == '@') nsarray_add(arr, encode_obj(c, LD32(p)));
    else if (*t == 'd') nsarray_add(arr, nsnumber_double(U2D(LD64(p)), false));
    else if (*t == 'f') nsarray_add(arr, nsnumber_double(U2F(LD32(p)), false));
    else if (*t == 'q' || *t == 'Q') nsarray_add(arr, nsnumber_int((int64_t)LD64(p), false));
    else nsarray_add(arr, nsnumber_int((int32_t)LD32(p), false));
}
static void ka_finishEncoding(CPU *c) {
    Coder *s = hostdata(SELF); char *x; plist_write_xml(c, s->dict, &x);
    msg(c, s->data, "setLength:", 1, 0); msg(c, s->data, "appendBytes:length:", 2, gmemdup(x, (uint32_t)strlen(x)), (uint32_t)strlen(x)); free(x);
}
static void ka_allowsKeyedCoding(CPU *c) { RET(1); }
static void ka_archivedDataWithRootObject(CPU *c) { gptr d = encode_obj(c, ARG(2)); gptr top = nsdict_new(true, false); nsdict_set(top, root_key(), d); char *x; plist_write_xml(c, top, &x); RET(nsdata_new(x, (uint32_t)strlen(x), false)); free(x); }
static void ka_archiveRootObjectToFile(CPU *c) { gptr d = encode_obj(c, ARG(2)); gptr top = nsdict_new(true, false); nsdict_set(top, root_key(), d); char *x; plist_write_xml(c, top, &x); char p[1024]; vfs_resolve(nsstr_cstr(ARG(3)), p, sizeof p); RET(host_file_write(p, x, (uint32_t)strlen(x), 0) >= 0); free(x); }
static gptr parse_data(CPU *c, gptr data) { if (!data) return 0; uint32_t n = msg(c, data, "length", 0); gptr b = msg(c, data, "bytes", 0); return n ? plist_parse(c, G2H(b), n) : 0; }
static void ku_initForReadingWithData(CPU *c) { Coder *s = hostdata_ensure(SELF, sizeof(Coder), NULL); gptr d = parse_data(c, ARG(2)); if (!d || !objc_is_kind_of(d, cls_NSDictionary)) { rt_log("NSKeyedUnarchiver: data is not an archive written by this runtime"); rt_release(c, SELF); RET(0); return; } s->dict = rt_retain(c, d); RET(SELF); }
static void ku_decodeObjectForKey(CPU *c) { Coder *s = hostdata(SELF); RET(decode_obj(c, nsdict_get(s->dict, ARG(2)))); }
static void ku_decodeObject(CPU *c) { Coder *s = hostdata(SELF); RET(decode_obj(c, nsdict_get(s->dict, root_key()))); }
static void ku_decodeInt(CPU *c) { Coder *s = hostdata(SELF); gptr v = nsdict_get(s->dict, ARG(2)); RET(v ? (uint32_t)nsnumber_get_int(v) : 0); }
static void ku_decodeInt64(CPU *c) { Coder *s = hostdata(SELF); gptr v = nsdict_get(s->dict, ARG(2)); RET64(v ? (uint64_t)nsnumber_get_int(v) : 0); }
static void ku_decodeBool(CPU *c) { Coder *s = hostdata(SELF); gptr v = nsdict_get(s->dict, ARG(2)); RET(v ? nsnumber_get_int(v) != 0 : 0); }
static void ku_decodeFloat(CPU *c) { Coder *s = hostdata(SELF); gptr v = nsdict_get(s->dict, ARG(2)); RETF(v ? (float)nsnumber_get_double(v) : 0); }
static void ku_decodeDouble(CPU *c) { Coder *s = hostdata(SELF); gptr v = nsdict_get(s->dict, ARG(2)); RETD(v ? nsnumber_get_double(v) : 0); }
static void ku_containsValueForKey(CPU *c) { Coder *s = hostdata(SELF); RET(nsdict_get(s->dict, ARG(2)) != 0); }
static void ku_decodeValueOfObjCType(CPU *c) {
    Coder *s = hostdata(SELF); const char *t = GSTR(ARG(2)); gptr p = ARG(3);
    gptr arr = nsdict_get(s->dict, nsstr("$values"));
    uint32_t *idx = hostdata_ensure(SELF, sizeof(Coder) + 4, NULL); (void)idx;
    static gptr last; static uint32_t pos; if (last != SELF) { last = SELF; pos = 0; }
    gptr v = arr && pos < nsarray_count(arr) ? nsarray_get(arr, pos++) : 0;
    if (*t == '@') ST32(p, rt_retain(c, decode_obj(c, v)));
    else if (*t == 'd') ST64(p, D2U(v ? nsnumber_get_double(v) : 0));
    else if (*t == 'f') ST32(p, F2U(v ? (float)nsnumber_get_double(v) : 0));
    else if (*t == 'q' || *t == 'Q') ST64(p, v ? (uint64_t)nsnumber_get_int(v) : 0);
    else ST32(p, v ? (uint32_t)nsnumber_get_int(v) : 0);
}
static void ku_unarchiveObjectWithData(CPU *c) { gptr d = parse_data(c, ARG(2)); if (!d || !objc_is_kind_of(d, cls_NSDictionary)) { RET(0); return; } RET(decode_obj(c, nsdict_get(d, root_key()))); }
static void ku_unarchiveObjectWithFile(CPU *c) { gptr data = msg(c, cls_NSData, "dataWithContentsOfFile:", 1, ARG(2)); gptr d = parse_data(c, data); if (!d || !objc_is_kind_of(d, cls_NSDictionary)) { RET(0); return; } RET(decode_obj(c, nsdict_get(d, root_key()))); }

/* ================================================================== NSCharacterSet */
typedef struct { uint8_t bits[8192]; } CSet;   /* BMP membership */
static gptr cls_CS, cls_MCS;
static gptr cs_new(gptr cls, int (*pred)(int)) { gptr o = objc_alloc_instance(cls, 0); CSet *s = hostdata_ensure(o, sizeof(CSet), NULL); if (pred) for (int i = 0; i < 128; i++) if (pred(i)) s->bits[i >> 3] |= (uint8_t)(1 << (i & 7)); return objc_autorelease_(o); }
static int p_ws(int ch) { return ch == ' ' || ch == '\t'; }
static int p_wsnl(int ch) { return isspace(ch); }
static int p_digit(int ch) { return isdigit(ch); }
static int p_alnum(int ch) { return isalnum(ch); }
static int p_alpha(int ch) { return isalpha(ch); }
static void cs_whitespace(CPU *c) { RET(cs_new(cls_CS, p_ws)); }
static void cs_whitespaceNL(CPU *c) { RET(cs_new(cls_CS, p_wsnl)); }
static void cs_digits(CPU *c) { RET(cs_new(cls_CS, p_digit)); }
static void cs_alnum(CPU *c) { RET(cs_new(cls_CS, p_alnum)); }
static void cs_letters(CPU *c) { RET(cs_new(cls_CS, p_alpha)); }
static void cs_withString(CPU *c) { gptr o = cs_new(SELF == cls_MCS ? cls_MCS : cls_CS, NULL); CSet *s = hostdata(o); uint32_t n; uint16_t *u = nsstr_utf16(ARG(2), &n); for (uint32_t i = 0; i < n; i++) s->bits[u[i] >> 3] |= (uint8_t)(1 << (u[i] & 7)); free(u); RET(o); }
static void cs_inverted(CPU *c) { CSet *s = hostdata(SELF); gptr o = cs_new(cls_CS, NULL); CSet *t = hostdata(o); for (int i = 0; i < 8192; i++) t->bits[i] = (uint8_t)~s->bits[i]; RET(o); }
static void cs_isMember(CPU *c) { CSet *s = hostdata(SELF); uint32_t ch = ARG(2) & 0xffff; RET((s->bits[ch >> 3] >> (ch & 7)) & 1); }
bool cset_has(gptr set, uint16_t ch) { CSet *s = hostdata(set); return s && ((s->bits[ch >> 3] >> (ch & 7)) & 1); }
static void st_rangeOfCharacterFromSet(CPU *c) {
    gptr str = ARG(1), set = ARG(3); uint32_t n; uint16_t *u = nsstr_utf16(str, &n);
    uint32_t loc = 0x7fffffff, len = 0;
    for (uint32_t i = 0; i < n; i++) if (cset_has(set, u[i])) { loc = i; len = 1; break; }
    free(u); ST32(ARG(0), loc); ST32(ARG(0) + 4, len);
}
static void st_trimWithSet(CPU *c) {
    uint32_t n; uint16_t *u = nsstr_utf16(SELF, &n); uint32_t a = 0, b = n;
    while (a < b && cset_has(ARG(2), u[a])) a++; while (b > a && cset_has(ARG(2), u[b - 1])) b--;
    RET(nsstr_from_utf16(u + a, b - a, false)); free(u);
}

/* ================================================================== NSScanner (subset) */
static gptr cls_Scanner;
typedef struct { gptr str; uint32_t pos; } Scan;
static void sn_scannerWithString(CPU *c) { gptr o = objc_alloc_instance(cls_Scanner, 0); Scan *s = hostdata_ensure(o, sizeof(Scan), NULL); s->str = rt_retain(c, ARG(2)); RET(objc_autorelease_(o)); }
static void sn_isAtEnd(CPU *c) { Scan *s = hostdata(SELF); RET(s->pos >= nsstr_len(s->str)); }
static void sn_scanLocation(CPU *c) { Scan *s = hostdata(SELF); RET(s->pos); }
static void sn_setScanLocation(CPU *c) { Scan *s = hostdata(SELF); s->pos = ARG(2); }
static void sn_scanUpTo(CPU *c) {
    Scan *s = hostdata(SELF); uint32_t n; uint16_t *u = nsstr_utf16(s->str, &n); uint32_t st = s->pos;
    while (s->pos < n && !cset_has(ARG(2), u[s->pos])) s->pos++;
    if (ARG(3)) ST32(ARG(3), nsstr_from_utf16(u + st, s->pos - st, false));
    free(u); RET(s->pos > st);
}
static void sn_scanString(CPU *c) {
    Scan *s = hostdata(SELF); uint32_t n, m; uint16_t *u = nsstr_utf16(s->str, &n); uint16_t *w = nsstr_utf16(ARG(2), &m);
    bool ok = s->pos + m <= n && !memcmp(u + s->pos, w, m * 2);
    if (ok) { if (ARG(3)) ST32(ARG(3), ARG(2)); s->pos += m; }
    free(u); free(w); RET(ok);
}

/* ================================================================== NSRegularExpression (POSIX ERE subset) */
static gptr cls_Regex, cls_Match;
typedef struct { regex_t re; bool ok; } Re;
typedef struct { uint32_t loc[10], len[10]; uint32_t n; } Mt;
static void re_dtor(void *p) { Re *r = p; if (r->ok) regfree(&r->re); }
static gptr re_make(CPU *c, gptr self, gptr pattern) {
    Re *r = hostdata_ensure(self, sizeof(Re), re_dtor);
    int rc = regcomp(&r->re, nsstr_cstr(pattern), REG_EXTENDED);
    r->ok = rc == 0;
    if (!r->ok) { rt_log("NSRegularExpression: pattern '%s' not supported by POSIX ERE", nsstr_cstr(pattern)); UNUSED(c); return 0; }
    return self;
}
static void re_withPattern(CPU *c) { gptr o = objc_alloc_instance(cls_Regex, 0); RET(re_make(c, o, ARG(2)) ? objc_autorelease_(o) : 0); }
static void re_initWithPattern(CPU *c) { RET(re_make(c, SELF, ARG(2))); }
static void re_firstMatch(CPU *c) {
    Re *r = hostdata(SELF); const char *s = nsstr_cstr(ARG(2)); regmatch_t m[10];
    if (!r || !r->ok || regexec(&r->re, s, 10, m, 0)) { RET(0); return; }
    gptr o = objc_alloc_instance(cls_Match, 0); Mt *t = hostdata_ensure(o, sizeof(Mt), NULL);
    for (int i = 0; i < 10 && m[i].rm_so >= 0; i++) { t->loc[i] = (uint32_t)m[i].rm_so; t->len[i] = (uint32_t)(m[i].rm_eo - m[i].rm_so); t->n = (uint32_t)i + 1; }
    RET(objc_autorelease_(o));
}
static void mt_rangeAtIndex(CPU *c) { Mt *t = hostdata(ARG(1)); uint32_t i = ARG(3); ST32(ARG(0), i < t->n ? t->loc[i] : 0x7fffffff); ST32(ARG(0) + 4, i < t->n ? t->len[i] : 0); }
static void mt_range(CPU *c) { Mt *t = hostdata(ARG(1)); ST32(ARG(0), t->n ? t->loc[0] : 0x7fffffff); ST32(ARG(0) + 4, t->n ? t->len[0] : 0); }

/* ================================================================== NSException / NSAssertionHandler */
static gptr cls_Exc;
typedef struct { gptr name, reason, userinfo; } Exc;
static void ex_exceptionWithName(CPU *c) { gptr o = objc_alloc_instance(cls_Exc, 0); Exc *s = hostdata_ensure(o, sizeof(Exc), NULL); s->name = rt_retain(c, ARG(2)); s->reason = rt_retain(c, ARG(3)); s->userinfo = rt_retain(c, ARG(4)); RET(objc_autorelease_(o)); }
static void ex_reason(CPU *c) { Exc *s = hostdata(SELF); RET(s ? s->reason : 0); }
static void ex_name(CPU *c) { Exc *s = hostdata(SELF); RET(s ? s->name : 0); }
static void ex_raise(CPU *c) { Exc *s = hostdata(SELF); rt_fatal(c, "NSException raised: %s: %s", s && s->name ? nsstr_cstr(s->name) : "?", s && s->reason ? nsstr_cstr(s->reason) : "?"); }
static void ex_raise_format(CPU *c) { ArgReader a = {c, 4, 0}; char *r = gformat(c, nsstr_cstr(ARG(3)), &a); rt_fatal(c, "NSException raised: %s: %s", nsstr_cstr(ARG(2)), r); }
static gptr cls_AH, ah_obj;
static void ah_current(CPU *c) { RET(ah_obj); }
static void ah_failFn(CPU *c) { rt_fatal(c, "NSAssert failed in %s (%s:%d)", nsstr_cstr(ARG(2)), nsstr_cstr(ARG(3)), (int)LD32(c->r[13])); }
static void ah_failMethod(CPU *c) { rt_fatal(c, "NSAssert failed in %s %s (%s:%d)", objc_obj_class_name(ARG(3)), sel_name(ARG(2)), nsstr_cstr(LD32(c->r[13])), (int)LD32(c->r[13] + 4)); }

/* ================================================================== networking: offline contract */
static gptr cls_Req, cls_Conn, cls_Session, cls_SessCfg, cls_Task, cls_OpQ, cls_Thr, opq_main;
typedef struct { gptr url, method, body, headers; double timeout; } Req;
static Req *RQ(gptr o) { return hostdata_ensure(o, sizeof(Req), NULL); }
static void rq_requestWithURL(CPU *c) { gptr o = objc_alloc_instance(SELF, 0); RQ(o)->url = rt_retain(c, ARG(2)); RET(objc_autorelease_(o)); }
static void rq_initWithURL(CPU *c) { RQ(SELF)->url = rt_retain(c, ARG(2)); RET(SELF); }
static void rq_setURL(CPU *c) { RQ(SELF)->url = rt_retain(c, ARG(2)); }
static void rq_URL(CPU *c) { RET(RQ(SELF)->url); }
static void rq_setMethod(CPU *c) { RQ(SELF)->method = rt_retain(c, ARG(2)); }
static void rq_method(CPU *c) { RET(RQ(SELF)->method ? RQ(SELF)->method : nsstr("GET")); }
static void rq_setBody(CPU *c) { RQ(SELF)->body = rt_retain(c, ARG(2)); }
static void rq_body(CPU *c) { RET(RQ(SELF)->body); }
static void rq_setHeaders(CPU *c) { RQ(SELF)->headers = rt_retain(c, ARG(2)); }
static void rq_headers(CPU *c) { RET(RQ(SELF)->headers ? RQ(SELF)->headers : nsdict_new(false, false)); }
static void rq_setValueForHeader(CPU *c) { Req *r = RQ(SELF); if (!r->headers) r->headers = rt_retain(c, nsdict_new(true, false)); nsdict_set(r->headers, ARG(3), ARG(2)); }
static void rq_setTimeout(CPU *c) { RQ(SELF)->timeout = ARGD(2); }
static void rq_timeout(CPU *c) { RETD(RQ(SELF)->timeout); }
static gptr offline_error(CPU *c) {
    gptr ui = nsdict_new(true, false); nsdict_set(ui, nsstr("NSLocalizedDescription"), nsstr("The Internet connection appears to be offline."));
    return msg(c, objc_class_named("NSError"), "errorWithDomain:code:userInfo:", 3, nsstr("NSURLErrorDomain"), (uint32_t)-1009, ui);
}
typedef struct { gptr delegate, handler, session; } ConnS;
static void cn_initWithRequest(CPU *c) {
    ConnS *s = hostdata_ensure(SELF, sizeof(ConnS), NULL); s->delegate = rt_retain(c, ARG(3));
    rt_log("network: request to %s failed: offline (no network service in the browser port)", nsstr_cstr(msg(c, RQ(ARG(2))->url, "absoluteString", 0)));
    runloop_perform_later(SELF, sel_get("__deliverFailure"), 0, 0);
    RET(SELF);
}
static void cn_deliver(CPU *c) { ConnS *s = hostdata(SELF); if (s && s->delegate && responds(s->delegate, "connection:didFailWithError:")) msg(c, s->delegate, "connection:didFailWithError:", 2, SELF, offline_error(c)); }
static void ss_shared(CPU *c) { static gptr o; if (!o) { o = gstatic_alloc(4); ST32(o, cls_Session); } RET(o); }
static void ss_dataTask(CPU *c) {
    gptr t = objc_alloc_instance(cls_Task, 0); ConnS *s = hostdata_ensure(t, sizeof(ConnS), NULL);
    gptr block_copy(gptr b); s->handler = ARG(3) ? block_copy(ARG(3)) : 0;
    ConnS *ss = hostdata(SELF); if (ss) { s->delegate = ss->delegate; s->session = SELF; }
    rt_log("network: %s request failed: offline (no network service in the browser port)", sel_name(CMD));
    RET(objc_autorelease_(t));
}
static void ss_dataTaskNoHandler(CPU *c) { c->r[3] = 0; ss_dataTask(c); }
static void ss_sessionWithDelegate(CPU *c) {
    gptr o = objc_alloc_instance(cls_Session, 0); ConnS *s = hostdata_ensure(o, sizeof(ConnS), NULL);
    s->delegate = rt_retain(c, ARG(3));
    RET(objc_autorelease_(o));
}
static void tk_resume(CPU *c) { runloop_perform_later(SELF, sel_get("__deliverFailure"), 0, 0); }
static void tk_deliver(CPU *c) {
    ConnS *s = hostdata(SELF);
    if (s && s->handler) { uint32_t a[4] = {s->handler, 0, 0, offline_error(c)}; guest_call(c, block_invoke_addr(s->handler), 4, a); }
    else if (s && s->delegate && responds(s->delegate, "URLSession:task:didCompleteWithError:")) msg(c, s->delegate, "URLSession:task:didCompleteWithError:", 3, s->session, SELF, offline_error(c));
}
static void sc_default(CPU *c) { RET(objc_autorelease_(objc_alloc_instance(cls_SessCfg, 0))); }
static void oq_main(CPU *c) { RET(opq_main); }
static void oq_addOperationWithBlock(CPU *c) { runloop_dispatch_async(ARG(2), 0, true); }
/* NSThread workers (SDK networking/run-loop threads) are not started: their only job is network I/O */
static void th_initWithTarget(CPU *c) { RET(SELF); }
static void th_start(CPU *c) { rt_log("NSThread start: SDK worker thread not started (networking unavailable)"); UNUSED(c); }
static void o_performOnThread(CPU *c) { if (LD8(c->r[13] + 4) & 1) { gptr imp = objc_lookup_imp(LD32(SELF), ARG(2)); if (imp) guest_call3(c, imp, SELF, ARG(2), LD32(c->r[13])); } else runloop_perform_later(SELF, ARG(2), LD32(c->r[13]), 0); }

/* ================================================================== misc additions to core classes */
static void di_dictionaryWithObjects_forKeys(CPU *c) {
    gptr d = msg(c, SELF, "dictionary", 0); gptr vals = ARG(2), keys = ARG(3);
    uint32_t n = msg(c, keys, "count", 0);
    for (uint32_t i = 0; i < n; i++) msg(c, d, "setObject:forKey:", 2, msg(c, vals, "objectAtIndex:", 1, i), msg(c, keys, "objectAtIndex:", 1, i));
    RET(d);
}
static void nu_unsigned(CPU *c) { RET((uint32_t)nsnumber_get_int(SELF)); }
static void nu_numberWithUnsignedLong(CPU *c) { RET(nsnumber_int(ARG(2), false)); }
static void nu_initWithULL(CPU *c) { gptr n = nsnumber_int((int64_t)((uint64_t)ARG(2) | ((uint64_t)ARG(3) << 32)), true); objc_release_(c, SELF); RET(n); }
static void fm_fileSystemAttributes(CPU *c) { RET(msg(c, SELF, "attributesOfFileSystemForPath:error:", 2, ARG(2), 0)); }
static void fm_contentsAtPath(CPU *c) { RET(msg(c, cls_NSData, "dataWithContentsOfFile:", 1, ARG(2))); }
static void fm_subpaths(CPU *c) { RET(msg(c, SELF, "contentsOfDirectoryAtPath:error:", 2, ARG(2), 0)); }
static void fm_fileSize(CPU *c) { gptr v = msg(c, SELF, "objectForKey:", 1, nsstr("NSFileSize")); RET64(v ? (uint64_t)nsnumber_get_int(v) : 0); }
static void ar_sortedUsingSelector(CPU *c) {
    uint32_t n = msg(c, SELF, "count", 0); gptr *v = malloc(n * 4 + 4);
    for (uint32_t i = 0; i < n; i++) v[i] = msg(c, SELF, "objectAtIndex:", 1, i);
    for (uint32_t i = 1; i < n; i++) { gptr x = v[i]; uint32_t j = i; while (j > 0 && (int32_t)msg(c, v[j - 1], sel_name(ARG(2)), 1, x) > 0) { v[j] = v[j - 1]; j--; } v[j] = x; }
    RET(nsarray_new(v, n, false, false)); free(v);
}
static void da_base64(CPU *c) {
    static const char *b64 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    uint32_t n = msg(c, SELF, "length", 0); const uint8_t *p = G2H(msg(c, SELF, "bytes", 0));
    char *o = malloc(n / 3 * 4 + 8); uint32_t k = 0;
    for (uint32_t i = 0; i < n; i += 3) { uint32_t v = (uint32_t)p[i] << 16 | (i + 1 < n ? (uint32_t)p[i + 1] << 8 : 0) | (i + 2 < n ? p[i + 2] : 0);
        o[k++] = b64[v >> 18]; o[k++] = b64[(v >> 12) & 63]; o[k++] = i + 1 < n ? b64[(v >> 6) & 63] : '='; o[k++] = i + 2 < n ? b64[v & 63] : '='; }
    o[k] = 0; RET(nsstr(o)); free(o);
}
static void st_percentEscape(CPU *c) {
    const char *s = nsstr_cstr(SELF); char *o = malloc(strlen(s) * 3 + 1); size_t k = 0;
    for (const unsigned char *p = (const unsigned char *)s; *p; p++) { if (isalnum(*p) || strchr("-_.~!*'();:@&=+$,/?#[]", *p)) o[k++] = (char)*p; else k += (size_t)sprintf(o + k, "%%%02X", *p); }
    o[k] = 0; RET(nsstr(o)); free(o);
}
static void st_percentUnescape(CPU *c) {
    const char *s = nsstr_cstr(SELF); char *o = malloc(strlen(s) + 1); size_t k = 0;
    for (const char *p = s; *p; p++) { if (*p == '%' && isxdigit((unsigned char)p[1]) && isxdigit((unsigned char)p[2])) { char h[3] = {p[1], p[2], 0}; o[k++] = (char)strtol(h, NULL, 16); p += 2; } else o[k++] = *p; }
    o[k] = 0; RET(nsstr(o)); free(o);
}
static void lo_isoLanguageCodes(CPU *c) { const char *l[] = {"de", "en", "es", "fr", "it", "ja", "ko", "zh"}; gptr v[8]; for (int i = 0; i < 8; i++) v[i] = nsstr(l[i]); RET(nsarray_new(v, 8, false, false)); }
static void lo_isoCountryCodes(CPU *c) { const char *l[] = {"CN", "DE", "ES", "FR", "GB", "IT", "JP", "KR", "US"}; gptr v[9]; for (int i = 0; i < 9; i++) v[i] = nsstr(l[i]); RET(nsarray_new(v, 9, false, false)); }
static void lo_initWithLocaleIdentifier(CPU *c) { RET(SELF); }
static void tz_withName(CPU *c) { RET(msg(c, objc_class_named("NSTimeZone"), "localTimeZone", 0)); }
static void tz_abbreviation(CPU *c) { RET(nsstr("UTC")); }

void foundation_extra_init(void) {
    cls_Coder = host_class("NSCoder", "NSObject", 4);
    cls_KA = host_class("NSKeyedArchiver", "NSCoder", 4);
    cls_KU = host_class("NSKeyedUnarchiver", "NSCoder", 4);
    M(cls_KA, "initForWritingWithMutableData:", ka_initForWritingWithMutableData); M(cls_KA, "encodeObject:forKey:", ka_encodeObjectForKey);
    M(cls_KA, "encodeObject:", ka_encodeObject); M(cls_KA, "encodeInt:forKey:", ka_encodeInt); M(cls_KA, "encodeInteger:forKey:", ka_encodeInt);
    M(cls_KA, "encodeInt32:forKey:", ka_encodeInt); M(cls_KA, "encodeInt64:forKey:", ka_encodeInt64); M(cls_KA, "encodeBool:forKey:", ka_encodeBool);
    M(cls_KA, "encodeFloat:forKey:", ka_encodeFloat); M(cls_KA, "encodeDouble:forKey:", ka_encodeDouble); M(cls_KA, "encodeValueOfObjCType:at:", ka_encodeValueOfObjCType);
    M(cls_KA, "finishEncoding", ka_finishEncoding); M(cls_KA, "allowsKeyedCoding", ka_allowsKeyedCoding);
    CM(cls_KA, "archivedDataWithRootObject:", ka_archivedDataWithRootObject); CM(cls_KA, "archiveRootObject:toFile:", ka_archiveRootObjectToFile);
    M(cls_KU, "initForReadingWithData:", ku_initForReadingWithData); M(cls_KU, "decodeObjectForKey:", ku_decodeObjectForKey); M(cls_KU, "decodeObject", ku_decodeObject);
    M(cls_KU, "decodeIntForKey:", ku_decodeInt); M(cls_KU, "decodeIntegerForKey:", ku_decodeInt); M(cls_KU, "decodeInt32ForKey:", ku_decodeInt);
    M(cls_KU, "decodeInt64ForKey:", ku_decodeInt64); M(cls_KU, "decodeBoolForKey:", ku_decodeBool); M(cls_KU, "decodeFloatForKey:", ku_decodeFloat);
    M(cls_KU, "decodeDoubleForKey:", ku_decodeDouble); M(cls_KU, "containsValueForKey:", ku_containsValueForKey); M(cls_KU, "decodeValueOfObjCType:at:", ku_decodeValueOfObjCType);
    M(cls_KU, "finishDecoding", r_noop); M(cls_KU, "allowsKeyedCoding", ka_allowsKeyedCoding);
    CM(cls_KU, "unarchiveObjectWithData:", ku_unarchiveObjectWithData); CM(cls_KU, "unarchiveObjectWithFile:", ku_unarchiveObjectWithFile);

    cls_CS = host_class("NSCharacterSet", "NSObject", 4); cls_MCS = host_class("NSMutableCharacterSet", "NSCharacterSet", 4);
    CM(cls_CS, "whitespaceCharacterSet", cs_whitespace); CM(cls_CS, "whitespaceAndNewlineCharacterSet", cs_whitespaceNL);
    CM(cls_CS, "decimalDigitCharacterSet", cs_digits); CM(cls_CS, "alphanumericCharacterSet", cs_alnum); CM(cls_CS, "letterCharacterSet", cs_letters);
    CM(cls_CS, "characterSetWithCharactersInString:", cs_withString); M(cls_CS, "invertedSet", cs_inverted); M(cls_CS, "characterIsMember:", cs_isMember);
    M(cls_NSString, "rangeOfCharacterFromSet:", st_rangeOfCharacterFromSet); M(cls_NSString, "stringByTrimmingCharactersInSet:", st_trimWithSet);
    M(cls_NSString, "stringByAddingPercentEscapesUsingEncoding:", st_percentEscape); M(cls_NSString, "stringByReplacingPercentEscapesUsingEncoding:", st_percentUnescape);
    cls_Scanner = host_class("NSScanner", "NSObject", 4);
    CM(cls_Scanner, "scannerWithString:", sn_scannerWithString); M(cls_Scanner, "isAtEnd", sn_isAtEnd); M(cls_Scanner, "scanLocation", sn_scanLocation);
    M(cls_Scanner, "setScanLocation:", sn_setScanLocation); M(cls_Scanner, "scanUpToCharactersFromSet:intoString:", sn_scanUpTo); M(cls_Scanner, "scanString:intoString:", sn_scanString);
    cls_Regex = host_class("NSRegularExpression", "NSObject", 4); cls_Match = host_class("NSTextCheckingResult", "NSObject", 4);
    CM(cls_Regex, "regularExpressionWithPattern:options:error:", re_withPattern); M(cls_Regex, "initWithPattern:options:error:", re_initWithPattern);
    M(cls_Regex, "firstMatchInString:options:range:", re_firstMatch); M(cls_Match, "rangeAtIndex:", mt_rangeAtIndex); M(cls_Match, "range", mt_range);
    cls_Exc = host_class("NSException", "NSObject", 4);
    CM(cls_Exc, "exceptionWithName:reason:userInfo:", ex_exceptionWithName); CM(cls_Exc, "raise:format:", ex_raise_format);
    M(cls_Exc, "reason", ex_reason); M(cls_Exc, "name", ex_name); M(cls_Exc, "raise", ex_raise);
    data_import_register("_OBJC_EHTYPE_$_NSException", gstatic_alloc(12));
    cls_AH = host_class("NSAssertionHandler", "NSObject", 4); ah_obj = gstatic_alloc(4); ST32(ah_obj, cls_AH);
    CM(cls_AH, "currentHandler", ah_current); M(cls_AH, "handleFailureInFunction:file:lineNumber:description:", ah_failFn);
    M(cls_AH, "handleFailureInMethod:object:file:lineNumber:description:", ah_failMethod);

    cls_Req = host_class("NSURLRequest", "NSObject", 4); host_class("NSMutableURLRequest", "NSURLRequest", 4);
    CM(cls_Req, "requestWithURL:", rq_requestWithURL); CM(cls_Req, "requestWithURL:cachePolicy:timeoutInterval:", rq_requestWithURL);
    M(cls_Req, "initWithURL:", rq_initWithURL); M(cls_Req, "initWithURL:cachePolicy:timeoutInterval:", rq_initWithURL); M(cls_Req, "URL", rq_URL);
    M(cls_Req, "setURL:", rq_setURL); M(cls_Req, "HTTPMethod", rq_method); M(cls_Req, "setHTTPMethod:", rq_setMethod); M(cls_Req, "HTTPBody", rq_body);
    M(cls_Req, "setHTTPBody:", rq_setBody); M(cls_Req, "allHTTPHeaderFields", rq_headers); M(cls_Req, "setAllHTTPHeaderFields:", rq_setHeaders);
    M(cls_Req, "setValue:forHTTPHeaderField:", rq_setValueForHeader); M(cls_Req, "setTimeoutInterval:", rq_setTimeout); M(cls_Req, "timeoutInterval", rq_timeout);
    M(cls_Req, "setCachePolicy:", r_noop); M(cls_Req, "setHTTPShouldHandleCookies:", r_noop);
    cls_Conn = host_class("NSURLConnection", "NSObject", 4);
    M(cls_Conn, "initWithRequest:delegate:startImmediately:", cn_initWithRequest); M(cls_Conn, "initWithRequest:delegate:", cn_initWithRequest);
    M(cls_Conn, "__deliverFailure", cn_deliver); M(cls_Conn, "scheduleInRunLoop:forMode:", r_noop); M(cls_Conn, "start", r_noop); M(cls_Conn, "cancel", r_noop);
    cls_Session = host_class("NSURLSession", "NSObject", 4); cls_SessCfg = host_class("NSURLSessionConfiguration", "NSObject", 4);
    cls_Task = host_class("NSURLSessionDataTask", "NSObject", 4);
    CM(cls_Session, "sharedSession", ss_shared); CM(cls_Session, "sessionWithConfiguration:", ss_shared);
    M(cls_Session, "dataTaskWithURL:completionHandler:", ss_dataTask); M(cls_Session, "dataTaskWithRequest:completionHandler:", ss_dataTask);
    CM(cls_Session, "sessionWithConfiguration:delegate:delegateQueue:", ss_sessionWithDelegate);
    M(cls_Session, "dataTaskWithRequest:", ss_dataTaskNoHandler); M(cls_Session, "dataTaskWithURL:", ss_dataTaskNoHandler);
    M(cls_Session, "uploadTaskWithRequest:fromData:completionHandler:", ss_dataTask);
    { void objc_set_lenient(gptr cls); objc_set_lenient(cls_Session); objc_set_lenient(cls_SessCfg); objc_set_lenient(cls_Task); }
    M(cls_Task, "resume", tk_resume); M(cls_Task, "__deliverFailure", tk_deliver); M(cls_Task, "cancel", r_noop);
    CM(cls_SessCfg, "defaultSessionConfiguration", sc_default); M(cls_SessCfg, "setTimeoutIntervalForRequest:", r_noop);
    cls_OpQ = host_class("NSOperationQueue", "NSObject", 4); opq_main = gstatic_alloc(4); ST32(opq_main, cls_OpQ);
    CM(cls_OpQ, "mainQueue", oq_main); CM(cls_OpQ, "currentQueue", oq_main); M(cls_OpQ, "addOperationWithBlock:", oq_addOperationWithBlock);
    M(cls_OpQ, "setMaxConcurrentOperationCount:", r_noop); M(cls_OpQ, "cancelAllOperations", r_noop);
    cls_Thr = objc_class_named("NSThread");
    M(cls_Thr, "initWithTarget:selector:object:", th_initWithTarget); M(cls_Thr, "start", th_start); M(cls_Thr, "setName:", r_noop);
    M(cls_Thr, "setThreadPriority:", r_yes); M(cls_Thr, "cancel", r_noop); M(cls_Thr, "isCancelled", r_no); M(cls_Thr, "isExecuting", r_no);
    M(objc_class_named("NSObject"), "performSelector:onThread:withObject:waitUntilDone:", o_performOnThread);
    M(objc_class_named("NSRunLoop"), "addPort:forMode:", r_noop);
    host_class("NSMachPort", "NSObject", 4);

    CM(cls_NSDictionary, "dictionaryWithObjects:forKeys:", di_dictionaryWithObjects_forKeys);
    M(cls_NSNumber, "unsignedCharValue", nu_unsigned); M(cls_NSNumber, "unsignedShortValue", nu_unsigned); M(cls_NSNumber, "unsignedLongValue", nu_unsigned);
    CM(cls_NSNumber, "numberWithUnsignedLong:", nu_numberWithUnsignedLong); M(cls_NSNumber, "initWithUnsignedLongLong:", nu_initWithULL);
    gptr FM = objc_class_named("NSFileManager");
    M(FM, "fileSystemAttributesAtPath:", fm_fileSystemAttributes); M(FM, "contentsAtPath:", fm_contentsAtPath); M(FM, "subpathsAtPath:", fm_subpaths);
    M(cls_NSDictionary, "fileSize", fm_fileSize);
    M(cls_NSArray, "sortedArrayUsingSelector:", ar_sortedUsingSelector);
    M(cls_NSData, "base64EncodedStringWithOptions:", da_base64);
    gptr LO = objc_class_named("NSLocale");
    CM(LO, "ISOLanguageCodes", lo_isoLanguageCodes); CM(LO, "ISOCountryCodes", lo_isoCountryCodes); M(LO, "initWithLocaleIdentifier:", lo_initWithLocaleIdentifier);
    gptr TZ = objc_class_named("NSTimeZone");
    CM(TZ, "timeZoneWithName:", tz_withName); CM(TZ, "timeZoneWithAbbreviation:", tz_withName); M(TZ, "abbreviation", tz_abbreviation);
    UNUSED(r_nil);
}

/* ================================================================== block-based collection API */
/* Blocks are called as guest functions: invoke(block, args...).  The BOOL *stop flag lives in guest heap memory. */
static uint32_t call_block(CPU *c, gptr blk, int n, uint32_t a1, uint32_t a2, uint32_t a3) {
    uint32_t args[4] = {blk, a1, a2, a3};
    return guest_call(c, block_invoke_addr(blk), n + 1, args);
}
static void arb_enumerate(CPU *c, gptr arr, gptr blk, bool reverse) {
    gptr snap = msg(c, arr, "copy", 0);
    gptr stop = gcalloc(1, 4);
    uint32_t n = nsarray_count(snap);
    for (uint32_t k = 0; k < n && !LD8(stop); k++) {
        uint32_t i = reverse ? n - 1 - k : k;
        call_block(c, blk, 3, nsarray_get(snap, i), i, stop);
    }
    gfree(stop);
    rt_release(c, snap);
}
static void arb_enumerateObjectsUsingBlock(CPU *c) { arb_enumerate(c, SELF, ARG(2), false); }
static void arb_enumerateObjectsWithOptions(CPU *c) { arb_enumerate(c, SELF, ARG(3), (ARG(2) & 2) != 0); }  /* NSEnumerationReverse = 2 */
static void arb_indexOfObjectPassingTest(CPU *c) {
    gptr stop = gcalloc(1, 4); uint32_t n = nsarray_count(SELF), r = 0x7fffffff;
    for (uint32_t i = 0; i < n && !LD8(stop); i++) if (call_block(c, ARG(2), 3, nsarray_get(SELF, i), i, stop) & 0xff) { r = i; break; }
    gfree(stop); RET(r);
}
static void dib_enumerateKeysAndObjects(CPU *c, gptr blk) {
    gptr keys = msg(c, SELF, "allKeys", 0);
    gptr stop = gcalloc(1, 4);
    for (uint32_t i = 0; i < nsarray_count(keys) && !LD8(stop); i++) { gptr k = nsarray_get(keys, i); call_block(c, blk, 3, k, nsdict_get(SELF, k), stop); }
    gfree(stop);
}
static void dib_enumerateKeysAndObjectsUsingBlock(CPU *c) { dib_enumerateKeysAndObjects(c, ARG(2)); }
static void dib_enumerateKeysAndObjectsWithOptions(CPU *c) { dib_enumerateKeysAndObjects(c, ARG(3)); }
static void dib_keysOfEntriesPassingTest(CPU *c) {
    gptr keys = msg(c, SELF, "allKeys", 0), out = msg(c, objc_class_named("NSMutableSet"), "set", 0);
    gptr stop = gcalloc(1, 4);
    for (uint32_t i = 0; i < nsarray_count(keys) && !LD8(stop); i++) { gptr k = nsarray_get(keys, i); if (call_block(c, ARG(2), 3, k, nsdict_get(SELF, k), stop) & 0xff) msg(c, out, "addObject:", 1, k); }
    gfree(stop); RET(out);
}
/* insertion sort through the comparator block (collections here are small) */
static void arb_sortedArrayUsingComparator(CPU *c) {
    gptr out = msg(c, msg(c, SELF, "mutableCopy", 0), "autorelease", 0);
    uint32_t n = nsarray_count(out);
    gptr *v = malloc((n ? n : 1) * sizeof(gptr));
    for (uint32_t i = 0; i < n; i++) v[i] = nsarray_get(out, i);
    gptr blk = ARG(2);
    for (uint32_t i = 1; i < n; i++) {
        gptr x = v[i]; uint32_t j = i;
        while (j > 0 && (int32_t)call_block(c, blk, 2, v[j - 1], x, 0) > 0) { v[j] = v[j - 1]; j--; }
        v[j] = x;
    }
    for (uint32_t i = 0; i < n; i++) msg(c, out, "replaceObjectAtIndex:withObject:", 2, i, v[i]);
    free(v);
    RET(out);
}
static void arb_sortUsingComparator(CPU *c) {
    gptr sorted = msg(c, SELF, "sortedArrayUsingComparator:", 1, ARG(2));
    rt_retain(c, sorted);
    for (uint32_t i = 0; i < nsarray_count(sorted); i++) msg(c, SELF, "replaceObjectAtIndex:withObject:", 2, i, nsarray_get(sorted, i));
    rt_release(c, sorted);
}
/* NSPredicate: block predicates only (format-string predicates are not used by the game) */
static void pr_predicateWithBlock(CPU *c) { gptr p = objc_alloc_instance(SELF, 0); gptr *b = hostdata_ensure(p, 4, NULL); *b = block_copy(ARG(2)); RET(objc_autorelease_(p)); }
static void pr_predicateWithValue(CPU *c) { gptr p = objc_alloc_instance(SELF, 0); gptr *b = hostdata_ensure(p, 8, NULL); b[0] = 0; b[1] = ARG(2) & 0xff; RET(objc_autorelease_(p)); }
static void pr_predicateWithFormat(CPU *c) { rt_log("NSPredicate predicateWithFormat:%s unsupported (evaluates to YES)", nsstr_cstr(ARG(2))); c->r[2] = 1; pr_predicateWithValue(c); }
static bool pred_eval(CPU *c, gptr pred, gptr obj) {
    gptr *b = hostdata(pred);
    if (!b) return true;
    if (!b[0]) return b[1] != 0;
    return (call_block(c, b[0], 2, obj, 0, 0) & 0xff) != 0;
}
static void pr_evaluateWithObject(CPU *c) { RET(pred_eval(c, SELF, ARG(2))); }
static void arb_filteredArrayUsingPredicate(CPU *c) {
    gptr out = nsarray_new(NULL, 0, true, true);
    for (uint32_t i = 0; i < nsarray_count(SELF); i++) if (pred_eval(c, ARG(2), nsarray_get(SELF, i))) nsarray_add(out, nsarray_get(SELF, i));
    RET(objc_autorelease_(out));
}
static void arb_filterUsingPredicate(CPU *c) {
    for (uint32_t i = nsarray_count(SELF); i-- > 0;) if (!pred_eval(c, ARG(2), nsarray_get(SELF, i))) msg(c, SELF, "removeObjectAtIndex:", 1, i);
}
void foundation_blocks_init(void) {
    gptr Ar = objc_class_named("NSArray"), MA = objc_class_named("NSMutableArray"), Di = objc_class_named("NSDictionary");
    host_method(Ar, "enumerateObjectsUsingBlock:", "", arb_enumerateObjectsUsingBlock);
    host_method(Ar, "enumerateObjectsWithOptions:usingBlock:", "", arb_enumerateObjectsWithOptions);
    host_method(Ar, "indexOfObjectPassingTest:", "", arb_indexOfObjectPassingTest);
    host_method(Ar, "sortedArrayUsingComparator:", "", arb_sortedArrayUsingComparator);
    host_method(MA, "sortUsingComparator:", "", arb_sortUsingComparator);
    host_method(Ar, "filteredArrayUsingPredicate:", "", arb_filteredArrayUsingPredicate);
    host_method(MA, "filterUsingPredicate:", "", arb_filterUsingPredicate);
    gptr Pr = host_class("NSPredicate", "NSObject", 4);
    host_cmethod(Pr, "predicateWithBlock:", "", pr_predicateWithBlock);
    host_cmethod(Pr, "predicateWithValue:", "", pr_predicateWithValue);
    host_cmethod(Pr, "predicateWithFormat:", "", pr_predicateWithFormat);
    host_method(Pr, "evaluateWithObject:", "", pr_evaluateWithObject);
    host_method(Di, "enumerateKeysAndObjectsUsingBlock:", "", dib_enumerateKeysAndObjectsUsingBlock);
    host_method(Di, "enumerateKeysAndObjectsWithOptions:usingBlock:", "", dib_enumerateKeysAndObjectsWithOptions);
    host_method(Di, "keysOfEntriesPassingTest:", "", dib_keysOfEntriesPassingTest);
}

/* foundation3.c — further Foundation API used by the game's bundled SDKs (Nimble, FBSDK) and UI glue:
 * NSJSONSerialization, NSNumberFormatter, NSMapTable, key-value observing (no-op registry), URL-based file
 * operations, and collection / string / date / data conveniences.  Behaviour follows Apple's documented
 * semantics for the subset exercised; anything outside it is reported rather than guessed. */
#include "rt.h"
#include <ctype.h>

const char *vfs_resolve(const char *in, char *out, size_t outlen);
gptr rt_retain(CPU *c, gptr obj);
void rt_release(CPU *c, gptr obj);
int host_mkdir(const char *path);
int host_is_dir(const char *path);

static gptr cls(const char *n) { return objc_class_named(n); }
static bool kind(gptr o, const char *n) { return o && objc_is_kind_of(o, cls(n)); }
static void set_error(CPU *c, gptr out, const char *domain, int code, const char *desc) {
    if (!out) return;
    gptr ui = 0;
    if (desc) { ui = nsdict_new(true, false); nsdict_set(ui, nsstr("NSLocalizedDescription"), nsstr(desc)); }
    ST32(out, msg(c, cls("NSError"), "errorWithDomain:code:userInfo:", 3, nsstr(domain), (uint32_t)code, ui));
}

/* ================================================================== NSJSONSerialization */
typedef struct { const char *p, *e; bool mut; CPU *c; int depth; const char *err; } JP;
static void jws(JP *j) { while (j->p < j->e && (*j->p == ' ' || *j->p == '\t' || *j->p == '\n' || *j->p == '\r')) j->p++; }
static gptr jvalue(JP *j);
static void utf8_put(char **o, size_t *n, size_t *cap, uint32_t cp) {
    if (*n + 5 > *cap) { *cap = *cap * 2 + 16; *o = realloc(*o, *cap); }
    char *d = *o + *n;
    if (cp < 0x80) { d[0] = (char)cp; *n += 1; }
    else if (cp < 0x800) { d[0] = (char)(0xC0 | cp >> 6); d[1] = (char)(0x80 | (cp & 63)); *n += 2; }
    else if (cp < 0x10000) { d[0] = (char)(0xE0 | cp >> 12); d[1] = (char)(0x80 | ((cp >> 6) & 63)); d[2] = (char)(0x80 | (cp & 63)); *n += 3; }
    else { d[0] = (char)(0xF0 | cp >> 18); d[1] = (char)(0x80 | ((cp >> 12) & 63)); d[2] = (char)(0x80 | ((cp >> 6) & 63)); d[3] = (char)(0x80 | (cp & 63)); *n += 4; }
}
static uint32_t hex4(const char *p) { uint32_t v = 0; for (int i = 0; i < 4; i++) { char ch = p[i]; v = v << 4 | (uint32_t)(isdigit((unsigned char)ch) ? ch - '0' : (tolower((unsigned char)ch) - 'a' + 10)); } return v; }
static char *jstring_raw(JP *j) {
    if (j->p >= j->e || *j->p != '"') { j->err = "expected string"; return NULL; }
    j->p++;
    size_t n = 0, cap = 64; char *o = malloc(cap);
    while (j->p < j->e && *j->p != '"') {
        char ch = *j->p++;
        if (ch != '\\') { if (n + 2 > cap) { cap *= 2; o = realloc(o, cap); } o[n++] = ch; continue; }
        if (j->p >= j->e) break;
        char esc = *j->p++;
        switch (esc) {
        case 'n': utf8_put(&o, &n, &cap, '\n'); break; case 't': utf8_put(&o, &n, &cap, '\t'); break;
        case 'r': utf8_put(&o, &n, &cap, '\r'); break; case 'b': utf8_put(&o, &n, &cap, '\b'); break;
        case 'f': utf8_put(&o, &n, &cap, '\f'); break;
        case 'u': {
            if (j->e - j->p < 4) { j->err = "bad escape"; free(o); return NULL; }
            uint32_t cp = hex4(j->p); j->p += 4;
            if (cp >= 0xD800 && cp < 0xDC00 && j->e - j->p >= 6 && j->p[0] == '\\' && j->p[1] == 'u') {
                uint32_t lo = hex4(j->p + 2);
                if (lo >= 0xDC00 && lo < 0xE000) { cp = 0x10000 + ((cp - 0xD800) << 10) + (lo - 0xDC00); j->p += 6; }
            }
            utf8_put(&o, &n, &cap, cp); break; }
        default: utf8_put(&o, &n, &cap, (uint8_t)esc);
        }
    }
    if (j->p >= j->e) { j->err = "unterminated string"; free(o); return NULL; }
    j->p++;
    if (n + 1 > cap) o = realloc(o, n + 1);
    o[n] = 0;
    return o;
}
static gptr jvalue(JP *j) {
    jws(j);
    if (j->p >= j->e) { j->err = "unexpected end"; return 0; }
    if (++j->depth > 512) { j->err = "too deep"; return 0; }
    gptr r = 0;
    char ch = *j->p;
    if (ch == '{') {
        j->p++;
        r = j->mut ? nsdict_new(true, false) : nsdict_new(true, false);
        jws(j);
        if (j->p < j->e && *j->p == '}') { j->p++; goto done; }
        for (;;) {
            jws(j);
            char *k = jstring_raw(j); if (!k) return 0;
            jws(j);
            if (j->p >= j->e || *j->p != ':') { free(k); j->err = "expected ':'"; return 0; }
            j->p++;
            gptr v = jvalue(j); if (j->err) { free(k); return 0; }
            nsdict_set(r, nsstr(k), v); free(k);
            jws(j);
            if (j->p < j->e && *j->p == ',') { j->p++; continue; }
            if (j->p < j->e && *j->p == '}') { j->p++; break; }
            j->err = "expected ',' or '}'"; return 0;
        }
    } else if (ch == '[') {
        j->p++;
        r = nsarray_new(NULL, 0, true, false);
        jws(j);
        if (j->p < j->e && *j->p == ']') { j->p++; goto done; }
        for (;;) {
            gptr v = jvalue(j); if (j->err) return 0;
            nsarray_add(r, v);
            jws(j);
            if (j->p < j->e && *j->p == ',') { j->p++; continue; }
            if (j->p < j->e && *j->p == ']') { j->p++; break; }
            j->err = "expected ',' or ']'"; return 0;
        }
    } else if (ch == '"') {
        char *s = jstring_raw(j); if (!s) return 0;
        r = nsstr(s); free(s);
    } else if (!strncmp(j->p, "true", 4) && j->e - j->p >= 4) { j->p += 4; r = nsnumber_bool(true); }
    else if (!strncmp(j->p, "false", 5) && j->e - j->p >= 5) { j->p += 5; r = nsnumber_bool(false); }
    else if (!strncmp(j->p, "null", 4) && j->e - j->p >= 4) { j->p += 4; r = msg(j->c, cls("NSNull"), "null", 0); }
    else if (ch == '-' || isdigit((unsigned char)ch)) {
        char buf[64]; int k = 0; bool real = false;
        while (j->p < j->e && k < 63 && (isdigit((unsigned char)*j->p) || strchr("+-.eE", *j->p))) { if (strchr(".eE", *j->p)) real = true; buf[k++] = *j->p++; }
        buf[k] = 0;
        r = real ? nsnumber_double(strtod(buf, NULL), false) : nsnumber_int(strtoll(buf, NULL, 10), false);
    } else { j->err = "invalid value"; return 0; }
done:
    j->depth--;
    return r;
}
static void js_JSONObjectWithData(CPU *c) {
    gptr d = ARG(2);
    if (!d) { set_error(c, ARG(4), "NSCocoaErrorDomain", 3840, "No data"); RET(0); return; }
    uint32_t n = msg(c, d, "length", 0); gptr b = msg(c, d, "bytes", 0);
    JP j = {(const char *)G2H(b), (const char *)G2H(b) + n, (ARG(3) & 1) != 0, c, 0, NULL};
    if (n >= 3 && !memcmp(j.p, "\xEF\xBB\xBF", 3)) j.p += 3;
    gptr r = jvalue(&j);
    if (!j.err) { jws(&j); if (j.p != j.e) j.err = "garbage at end"; }
    if (j.err) { set_error(c, ARG(4), "NSCocoaErrorDomain", 3840, j.err); RET(0); return; }
    RET(r);
}
typedef struct { char *o; size_t n, cap; } SB;
static void sb_put(SB *s, const char *t, size_t k) { if (s->n + k + 1 > s->cap) { s->cap = (s->n + k + 1) * 2; s->o = realloc(s->o, s->cap); } memcpy(s->o + s->n, t, k); s->n += k; s->o[s->n] = 0; }
static void sb_str(SB *s, const char *t) { sb_put(s, t, strlen(t)); }
static void js_escape(SB *s, const char *t) {
    sb_str(s, "\"");
    for (const unsigned char *p = (const unsigned char *)t; *p; p++) {
        char e[8];
        if (*p == '"') sb_str(s, "\\\""); else if (*p == '\\') sb_str(s, "\\\\"); else if (*p == '\n') sb_str(s, "\\n");
        else if (*p == '\r') sb_str(s, "\\r"); else if (*p == '\t') sb_str(s, "\\t"); else if (*p == '/') sb_str(s, "\\/");
        else if (*p < 0x20) { snprintf(e, sizeof e, "\\u%04x", *p); sb_str(s, e); } else sb_put(s, (const char *)p, 1);
    }
    sb_str(s, "\"");
}
static bool js_write(CPU *c, SB *s, gptr o, int depth) {
    if (depth > 512) return false;
    if (!o) return false;
    if (is_nsstring(o)) { js_escape(s, nsstr_cstr(o)); return true; }
    if (is_nsnumber(o)) {
        const char *t = (const char *)G2H(msg(c, o, "objCType", 0));
        char b[64];
        if (t[0] == 'c' || t[0] == 'B') { int64_t v = nsnumber_get_int(o); if (v == 0 || v == 1) { sb_str(s, v ? "true" : "false"); return true; } }
        if (t[0] == 'f' || t[0] == 'd') { double v = nsnumber_get_double(o); if (!isfinite(v)) return false; snprintf(b, sizeof b, "%.17g", v); }
        else snprintf(b, sizeof b, "%lld", (long long)nsnumber_get_int(o));
        sb_str(s, b); return true;
    }
    if (kind(o, "NSNull")) { sb_str(s, "null"); return true; }
    if (kind(o, "NSArray")) {
        sb_str(s, "[");
        for (uint32_t i = 0; i < nsarray_count(o); i++) { if (i) sb_str(s, ","); if (!js_write(c, s, nsarray_get(o, i), depth + 1)) return false; }
        sb_str(s, "]"); return true;
    }
    if (kind(o, "NSDictionary")) {
        gptr keys = msg(c, o, "allKeys", 0);
        sb_str(s, "{");
        for (uint32_t i = 0; i < nsarray_count(keys); i++) {
            gptr k = nsarray_get(keys, i);
            if (!is_nsstring(k)) return false;
            if (i) sb_str(s, ",");
            js_escape(s, nsstr_cstr(k)); sb_str(s, ":");
            if (!js_write(c, s, nsdict_get(o, k), depth + 1)) return false;
        }
        sb_str(s, "}"); return true;
    }
    return false;
}
static void js_dataWithJSONObject(CPU *c) {
    SB s = {0};
    sb_str(&s, "");
    if (!kind(ARG(2), "NSArray") && !kind(ARG(2), "NSDictionary")) { set_error(c, ARG(4), "NSCocoaErrorDomain", 3840, "Invalid top-level type"); RET(0); return; }
    if (!js_write(c, &s, ARG(2), 0)) { free(s.o); set_error(c, ARG(4), "NSCocoaErrorDomain", 3840, "Invalid type in JSON write"); RET(0); return; }
    RET(nsdata_new(s.o, (uint32_t)s.n, false));
    free(s.o);
}
static void js_isValidJSONObject(CPU *c) {
    SB s = {0}; sb_str(&s, "");
    bool ok = (kind(ARG(2), "NSArray") || kind(ARG(2), "NSDictionary")) && js_write(c, &s, ARG(2), 0);
    free(s.o); RET(ok);
}

/* ================================================================== NSNumberFormatter (decimal / no style) */
typedef struct { uint32_t style; } NF;
static void nf_init(CPU *c) { hostdata_ensure(SELF, sizeof(NF), NULL); RET(SELF); }
static void nf_setNumberStyle(CPU *c) { ((NF *)hostdata_ensure(SELF, sizeof(NF), NULL))->style = ARG(2); }
static void nf_numberStyle(CPU *c) { NF *f = hostdata(SELF); RET(f ? f->style : 0); }
static void nf_noop(CPU *c) { UNUSED(c); }
static void nf_numberFromString(CPU *c) {
    if (!ARG(2)) { RET(0); return; }
    const char *s = nsstr_cstr(ARG(2)); char *end;
    while (isspace((unsigned char)*s)) s++;
    if (!*s) { RET(0); return; }
    double v = strtod(s, &end);
    while (isspace((unsigned char)*end)) end++;
    if (*end) { RET(0); return; }
    RET(v == (double)(int64_t)v && !strpbrk(s, ".eE") ? nsnumber_int((int64_t)v, false) : nsnumber_double(v, false));
}
static void nf_stringFromNumber(CPU *c) {
    if (!ARG(2)) { RET(0); return; }
    NF *f = hostdata(SELF); double v = nsnumber_get_double(ARG(2)); char b[64];
    if (f && f->style == 1) {   /* NSNumberFormatterDecimalStyle: grouping, up to 3 fraction digits */
        char t[64]; snprintf(t, sizeof t, "%.3f", fabs(v));
        char *dot = strchr(t, '.'); char *z = t + strlen(t) - 1; while (z > dot && *z == '0') *z-- = 0; if (z == dot) *z = 0;
        size_t il = dot ? (size_t)(dot - t) : strlen(t); size_t k = 0;
        if (v < 0) b[k++] = '-';
        for (size_t i = 0; i < il; i++) { b[k++] = t[i]; if ((il - i - 1) % 3 == 0 && i + 1 < il) b[k++] = ','; }
        b[k] = 0; if (dot && *dot) strcat(b, dot);
    } else if (v == (double)(int64_t)v) snprintf(b, sizeof b, "%lld", (long long)v);
    else snprintf(b, sizeof b, "%g", v);
    RET(nsstr(b));
}

/* ================================================================== key-value observing: observers are accepted; the
 * HLE classes never post KVO changes, and guest classes' own setters are not swizzled (no automatic notifications). */
static void kvo_add(CPU *c) { UNUSED(c); }
static void kvo_remove(CPU *c) { UNUSED(c); }
static void kv_valueForKeyPath(CPU *c) {
    gptr o = SELF; const char *path = nsstr_cstr(ARG(2));
    char *p = strdup(path), *save = NULL;
    for (char *k = strtok_r(p, ".", &save); k && o; k = strtok_r(NULL, ".", &save)) o = msg(c, o, "valueForKey:", 1, nsstr(k));
    free(p); RET(o);
}

/* ================================================================== collections */
static void ar_subarrayWithRange(CPU *c) {
    uint32_t loc = ARG(2), len = ARG(3), n = nsarray_count(SELF);
    if (loc > n || len > n - loc) rt_fatal(c, "subarrayWithRange: {%u,%u} beyond count %u", loc, len, n);
    gptr out = nsarray_new(NULL, 0, true, false);
    for (uint32_t i = 0; i < len; i++) nsarray_add(out, nsarray_get(SELF, loc + i));
    RET(out);
}
static void ar_arrayByAddingObject(CPU *c) { gptr out = msg(c, msg(c, SELF, "mutableCopy", 0), "autorelease", 0); nsarray_add(out, ARG(2)); RET(out); }
static void ar_arrayByAddingObjectsFromArray(CPU *c) { gptr out = msg(c, msg(c, SELF, "mutableCopy", 0), "autorelease", 0); for (uint32_t i = 0; ARG(2) && i < nsarray_count(ARG(2)); i++) nsarray_add(out, nsarray_get(ARG(2), i)); RET(out); }
static void ar_sortUsingSelector(CPU *c) {
    gptr sorted = msg(c, SELF, "sortedArrayUsingSelector:", 1, ARG(2));
    rt_retain(c, sorted);
    for (uint32_t i = 0; i < nsarray_count(sorted); i++) msg(c, SELF, "replaceObjectAtIndex:withObject:", 2, i, nsarray_get(sorted, i));
    rt_release(c, sorted);
}
static void ar_removeObjectsInArray(CPU *c) { for (uint32_t i = 0; ARG(2) && i < nsarray_count(ARG(2)); i++) msg(c, SELF, "removeObject:", 1, nsarray_get(ARG(2), i)); }
static void ar_removeObjectsInRange(CPU *c) { for (uint32_t i = 0; i < ARG(3); i++) msg(c, SELF, "removeObjectAtIndex:", 1, ARG(2)); }
static void ar_exchange(CPU *c) {
    gptr a = rt_retain(c, nsarray_get(SELF, ARG(2))), b = rt_retain(c, nsarray_get(SELF, ARG(3)));
    msg(c, SELF, "replaceObjectAtIndex:withObject:", 2, ARG(2), b); msg(c, SELF, "replaceObjectAtIndex:withObject:", 2, ARG(3), a);
    rt_release(c, a); rt_release(c, b);
}
static void ar_indexOfObjectIdenticalTo(CPU *c) { for (uint32_t i = 0; i < nsarray_count(SELF); i++) if (nsarray_get(SELF, i) == ARG(2)) { RET(i); return; } RET(0x7fffffff); }
static void di_isEqualToDictionary(CPU *c) {
    gptr o = ARG(2);
    if (!o || msg(c, SELF, "count", 0) != msg(c, o, "count", 0)) { RET(0); return; }
    gptr keys = msg(c, SELF, "allKeys", 0);
    for (uint32_t i = 0; i < nsarray_count(keys); i++) { gptr k = nsarray_get(keys, i); gptr v = nsdict_get(o, k); if (!v || !obj_equal(c, v, nsdict_get(SELF, k))) { RET(0); return; } }
    RET(1);
}
static void di_removeObjectsForKeys(CPU *c) { for (uint32_t i = 0; ARG(2) && i < nsarray_count(ARG(2)); i++) msg(c, SELF, "removeObjectForKey:", 1, nsarray_get(ARG(2), i)); }
static void di_objectsForKeys(CPU *c) {
    gptr out = nsarray_new(NULL, 0, true, false);
    for (uint32_t i = 0; ARG(2) && i < nsarray_count(ARG(2)); i++) { gptr v = nsdict_get(SELF, nsarray_get(ARG(2), i)); nsarray_add(out, v ? v : ARG(3)); }
    RET(out);
}
static void di_dictionaryWithContentsOfURL(CPU *c) { RET(msg(c, SELF, "dictionaryWithContentsOfFile:", 1, msg(c, ARG(2), "path", 0))); }
static void se_intersectSet(CPU *c) {
    gptr all = msg(c, SELF, "allObjects", 0);
    for (uint32_t i = 0; i < nsarray_count(all); i++) if (!ARG(2) || !(msg(c, ARG(2), "containsObject:", 1, nsarray_get(all, i)) & 0xff)) msg(c, SELF, "removeObject:", 1, nsarray_get(all, i));
}
/* NSMapTable: object keys compared with isEqual: (as the strong/weak variants the SDK requests); not copied */
static void mt_table(CPU *c) { RET(objc_autorelease_(msg(c, objc_alloc_instance(cls("NSMapTable"), 0), "init", 0))); }

/* ================================================================== strings */
static void st_stringByPadding(CPU *c) {
    uint32_t n = ARG(2), start = ARG(4); uint32_t sl, pl;
    uint16_t *s = nsstr_utf16(SELF, &sl), *p = nsstr_utf16(ARG(3), &pl);
    uint16_t *o = malloc((n + 1) * 2);
    for (uint32_t i = 0; i < n; i++) o[i] = i < sl ? s[i] : (pl ? p[(start + i - sl) % pl] : ' ');
    RET(nsstr_from_utf16(o, n, false));
    free(s); free(p); free(o);
}
static void ms_replaceOccurrences(CPU *c) {
    gptr r = msg(c, SELF, "stringByReplacingOccurrencesOfString:withString:", 2, ARG(2), ARG(3));
    uint32_t before = nsstr_len(SELF);
    /* count = occurrences replaced (non-overlapping) */
    const char *hay = nsstr_cstr(SELF); char *h = strdup(hay); const char *needle = nsstr_cstr(ARG(2)); uint32_t cnt = 0;
    if (*needle) for (const char *q = h; (q = strstr(q, needle)); q += strlen(needle)) cnt++;
    free(h); UNUSED(before);
    msg(c, SELF, "setString:", 1, r);
    RET(cnt);
}
static void st_initWithContentsOfFile_enc(CPU *c) {
    gptr d = msg(c, cls("NSData"), "dataWithContentsOfFile:", 1, ARG(2));
    if (!d) { set_error(c, ARG(4), "NSCocoaErrorDomain", 260, "The file couldn't be opened because there is no such file."); RET(0); return; }
    RET(msg(c, SELF, "initWithData:encoding:", 2, d, ARG(3)));
}
static void st_initWithContentsOfFile_used(CPU *c) {
    gptr d = msg(c, cls("NSData"), "dataWithContentsOfFile:", 1, ARG(2));
    if (!d) { set_error(c, ARG(4), "NSCocoaErrorDomain", 260, NULL); RET(0); return; }
    if (ARG(3)) ST32(ARG(3), 4);
    RET(msg(c, SELF, "initWithData:encoding:", 2, d, 4));
}

/* ================================================================== dates / data */
static void dt_dateByAddingTimeInterval(CPU *c) {
    double t = U2D(msg64(c, SELF, "timeIntervalSince1970", 0)) + ARGD(2);
    uint64_t bits; memcpy(&bits, &t, 8);
    RET(msg(c, cls("NSDate"), "dateWithTimeIntervalSince1970:", 2, (uint32_t)bits, (uint32_t)(bits >> 32)));
}
static void dt_isEqualToDate(CPU *c) {
    if (!ARG(2)) { RET(0); return; }
    double a = U2D(msg64(c, SELF, "timeIntervalSince1970", 0)), b = U2D(msg64(c, ARG(2), "timeIntervalSince1970", 0));
    RET(a == b);
}
static int b64v(int ch) {
    if (ch >= 'A' && ch <= 'Z') return ch - 'A'; if (ch >= 'a' && ch <= 'z') return ch - 'a' + 26;
    if (ch >= '0' && ch <= '9') return ch - '0' + 52; if (ch == '+' || ch == '-') return 62; if (ch == '/' || ch == '_') return 63; return -1;
}
static gptr b64_decode(const char *s, bool strict) {
    size_t n = strlen(s); uint8_t *o = malloc(n * 3 / 4 + 4); size_t k = 0; uint32_t acc = 0; int bits = 0;
    for (size_t i = 0; i < n; i++) {
        if (s[i] == '=') break;
        int v = b64v((unsigned char)s[i]);
        if (v < 0) { if (strict && !isspace((unsigned char)s[i])) { free(o); return 0; } continue; }
        acc = acc << 6 | (uint32_t)v; bits += 6;
        if (bits >= 8) { bits -= 8; o[k++] = (uint8_t)(acc >> bits); }
    }
    gptr d = nsdata_new(o, (uint32_t)k, true); free(o); return d;
}
static void da_initWithBase64EncodedString(CPU *c) { gptr d = ARG(2) ? b64_decode(nsstr_cstr(ARG(2)), !(ARG(3) & 1)) : 0; objc_release_(c, SELF); RET(d); }
static void da_initWithBase64Encoding(CPU *c) { gptr d = ARG(2) ? b64_decode(nsstr_cstr(ARG(2)), false) : 0; objc_release_(c, SELF); RET(d); }
static void da_base64Encoding(CPU *c) { RET(msg(c, SELF, "base64EncodedStringWithOptions:", 1, 0)); }
static void da_writeToURL(CPU *c) { RET(msg(c, SELF, "writeToFile:atomically:", 2, msg(c, ARG(2), "path", 0), ARG(3))); }
static void da_writeToURL_err(CPU *c) {
    uint32_t ok = msg(c, SELF, "writeToFile:atomically:", 2, msg(c, ARG(2), "path", 0), 1);
    if (!(ok & 0xff)) set_error(c, ARG(4), "NSCocoaErrorDomain", 642, NULL);
    RET(ok);
}
static void da_dataWithContentsOfURL(CPU *c) { gptr u = ARG(2); RET(u && (msg(c, u, "isFileURL", 0) & 0xff) ? msg(c, SELF, "dataWithContentsOfFile:", 1, msg(c, u, "path", 0)) : 0); }
static void da_initWithContentsOfURL(CPU *c) {
    gptr u = ARG(2);
    if (!u || !(msg(c, u, "isFileURL", 0) & 0xff)) { set_error(c, ARG(4), "NSURLErrorDomain", -1009, "The Internet connection appears to be offline."); objc_release_(c, SELF); RET(0); return; }
    gptr r = msg(c, SELF, "initWithContentsOfFile:", 1, msg(c, u, "path", 0));
    if (!r) set_error(c, ARG(4), "NSCocoaErrorDomain", 260, NULL);
    RET(r);
}

/* ================================================================== files by URL */
static void fm_removeItemAtURL(CPU *c) { RET(msg(c, SELF, "removeItemAtPath:error:", 2, msg(c, ARG(2), "path", 0), ARG(3))); }
static void fm_createDirectoryAtURL(CPU *c) { RET(msg(c, SELF, "createDirectoryAtPath:withIntermediateDirectories:attributes:error:", 4, msg(c, ARG(2), "path", 0), ARG(3), ARG(4), LD32(c->r[13]))); }
static void fm_URLForDirectory(CPU *c) {
    gptr arr = msg(c, SELF, "URLsForDirectory:inDomains:", 2, ARG(2), ARG(3));
    gptr u = arr && nsarray_count(arr) ? nsarray_get(arr, 0) : 0;
    if (u && (LD8(c->r[13] + 4) & 1)) { char p[1024]; vfs_resolve(nsstr_cstr(msg(c, u, "path", 0)), p, sizeof p); host_mkdir(p); }
    RET(u);
}
static void fm_isAccessible(CPU *c) { RET(msg(c, SELF, "fileExistsAtPath:", 1, ARG(2))); }
static void fm_isWritable(CPU *c) {
    const char *p = nsstr_cstr(ARG(2));
    RET(!strncmp(p, "/home", 5) && (msg(c, SELF, "fileExistsAtPath:", 1, ARG(2)) & 0xff));
}
static void fm_isExecutable(CPU *c) { RET(0); }
static void fm_directoryContentsAtPath(CPU *c) { RET(msg(c, SELF, "contentsOfDirectoryAtPath:error:", 2, ARG(2), 0)); }
static void ur_URLByAppendingPathComponent_dir(CPU *c) { RET(msg(c, SELF, "URLByAppendingPathComponent:", 1, ARG(2))); }
static void ur_fragment(CPU *c) { const char *s = nsstr_cstr(msg(c, SELF, "absoluteString", 0)); const char *h = strchr(s, '#'); RET(h ? nsstr(h + 1) : 0); }
static void ur_resourceSpecifier(CPU *c) { const char *s = nsstr_cstr(msg(c, SELF, "absoluteString", 0)); const char *h = strchr(s, ':'); RET(h ? nsstr(h + 1) : 0); }

void foundation_sdk_init(void) {
    gptr JS = host_class("NSJSONSerialization", "NSObject", 4);
    host_cmethod(JS, "JSONObjectWithData:options:error:", "", js_JSONObjectWithData);
    host_cmethod(JS, "dataWithJSONObject:options:error:", "", js_dataWithJSONObject);
    host_cmethod(JS, "isValidJSONObject:", "", js_isValidJSONObject);

    gptr NF_ = host_class("NSNumberFormatter", "NSObject", 4);
    host_method(NF_, "init", "", nf_init); host_method(NF_, "setNumberStyle:", "", nf_setNumberStyle); host_method(NF_, "numberStyle", "", nf_numberStyle);
    host_method(NF_, "setLocale:", "", nf_noop); host_method(NF_, "setMaximumFractionDigits:", "", nf_noop); host_method(NF_, "setMinimumFractionDigits:", "", nf_noop);
    host_method(NF_, "setGroupingSeparator:", "", nf_noop); host_method(NF_, "setUsesGroupingSeparator:", "", nf_noop);
    host_method(NF_, "numberFromString:", "", nf_numberFromString); host_method(NF_, "stringFromNumber:", "", nf_stringFromNumber);

    gptr O = cls("NSObject");
    host_method(O, "addObserver:forKeyPath:options:context:", "", kvo_add);
    host_method(O, "removeObserver:forKeyPath:", "", kvo_remove);
    host_method(O, "removeObserver:forKeyPath:context:", "", kvo_remove);
    host_method(O, "valueForKeyPath:", "", kv_valueForKeyPath);

    gptr Ar = cls("NSArray"), MA = cls("NSMutableArray"), Di = cls("NSDictionary"), MD = cls("NSMutableDictionary");
    host_method(Ar, "subarrayWithRange:", "", ar_subarrayWithRange);
    host_method(Ar, "arrayByAddingObject:", "", ar_arrayByAddingObject);
    host_method(Ar, "arrayByAddingObjectsFromArray:", "", ar_arrayByAddingObjectsFromArray);
    host_method(Ar, "indexOfObjectIdenticalTo:", "", ar_indexOfObjectIdenticalTo);
    host_method(MA, "sortUsingSelector:", "", ar_sortUsingSelector);
    host_method(MA, "removeObjectsInArray:", "", ar_removeObjectsInArray);
    host_method(MA, "removeObjectsInRange:", "", ar_removeObjectsInRange);
    host_method(MA, "exchangeObjectAtIndex:withObjectAtIndex:", "", ar_exchange);
    host_method(Di, "isEqualToDictionary:", "", di_isEqualToDictionary);
    host_method(Di, "objectsForKeys:notFoundMarker:", "", di_objectsForKeys);
    host_cmethod(Di, "dictionaryWithContentsOfURL:", "", di_dictionaryWithContentsOfURL);
    host_method(MD, "removeObjectsForKeys:", "", di_removeObjectsForKeys);
    host_method(cls("NSMutableSet"), "intersectSet:", "", se_intersectSet);
    gptr MT = host_class("NSMapTable", "NSMutableDictionary", 4);
    host_cmethod(MT, "weakToStrongObjectsMapTable", "", mt_table); host_cmethod(MT, "strongToStrongObjectsMapTable", "", mt_table);
    host_cmethod(MT, "strongToWeakObjectsMapTable", "", mt_table); host_cmethod(MT, "weakToWeakObjectsMapTable", "", mt_table);

    gptr St = cls("NSString"), MS = cls("NSMutableString");
    host_method(St, "stringByPaddingToLength:withString:startingAtIndex:", "", st_stringByPadding);
    host_method(St, "initWithContentsOfFile:encoding:error:", "", st_initWithContentsOfFile_enc);
    host_method(St, "initWithContentsOfFile:usedEncoding:error:", "", st_initWithContentsOfFile_used);
    host_method(MS, "replaceOccurrencesOfString:withString:options:range:", "", ms_replaceOccurrences);

    gptr Dt = cls("NSDate"), Da = cls("NSData");
    host_method(Dt, "dateByAddingTimeInterval:", "", dt_dateByAddingTimeInterval);
    host_method(Dt, "isEqualToDate:", "", dt_isEqualToDate);
    host_method(Da, "initWithBase64EncodedString:options:", "", da_initWithBase64EncodedString);
    host_method(Da, "initWithBase64Encoding:", "", da_initWithBase64Encoding);
    host_method(Da, "base64Encoding", "", da_base64Encoding);
    host_method(Da, "writeToURL:atomically:", "", da_writeToURL);
    host_method(Da, "writeToURL:options:error:", "", da_writeToURL_err);
    host_cmethod(Da, "dataWithContentsOfURL:", "", da_dataWithContentsOfURL);
    host_method(Da, "initWithContentsOfURL:", "", da_initWithContentsOfURL);
    host_method(Da, "initWithContentsOfURL:options:error:", "", da_initWithContentsOfURL);

    gptr FM = cls("NSFileManager");
    host_method(FM, "removeItemAtURL:error:", "", fm_removeItemAtURL);
    host_method(FM, "createDirectoryAtURL:withIntermediateDirectories:attributes:error:", "", fm_createDirectoryAtURL);
    host_method(FM, "URLForDirectory:inDomain:appropriateForURL:create:error:", "", fm_URLForDirectory);
    host_method(FM, "isReadableFileAtPath:", "", fm_isAccessible);
    host_method(FM, "isWritableFileAtPath:", "", fm_isWritable);
    host_method(FM, "isExecutableFileAtPath:", "", fm_isExecutable);
    host_method(FM, "directoryContentsAtPath:", "", fm_directoryContentsAtPath);
    gptr U = cls("NSURL");
    host_method(U, "URLByAppendingPathComponent:isDirectory:", "", ur_URLByAppendingPathComponent_dir);
    host_method(U, "fragment", "", ur_fragment);
    host_method(U, "resourceSpecifier", "", ur_resourceSpecifier);
}

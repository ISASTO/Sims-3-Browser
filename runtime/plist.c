/* plist.c — property list reading (XML and bplist00) into Foundation objects, and XML writing. */
#include "rt.h"

/* ------------------------------------------------------------------ XML */
typedef struct { const char *p, *e; } XP;
static void skip_ws(XP *x) { while (x->p < x->e && (*x->p == ' ' || *x->p == '\n' || *x->p == '\r' || *x->p == '\t')) x->p++; }
static void skip_misc(XP *x) {
    for (;;) {
        skip_ws(x);
        if (x->e - x->p >= 4 && !strncmp(x->p, "<!--", 4)) { const char *q = strstr(x->p, "-->"); x->p = q ? q + 3 : x->e; continue; }
        if (x->e - x->p >= 2 && (!strncmp(x->p, "<?", 2) || !strncmp(x->p, "<!", 2))) { const char *q = memchr(x->p, '>', (size_t)(x->e - x->p)); x->p = q ? q + 1 : x->e; continue; }
        return;
    }
}
static char *read_tag(XP *x, bool *closing, bool *selfclose) {
    skip_misc(x);
    if (x->p >= x->e || *x->p != '<') return NULL;
    x->p++;
    *closing = *x->p == '/'; if (*closing) x->p++;
    const char *s = x->p;
    while (x->p < x->e && *x->p != '>' && *x->p != ' ' && *x->p != '/') x->p++;
    char *name = strndup(s, (size_t)(x->p - s));
    while (x->p < x->e && *x->p != '>') x->p++;
    *selfclose = x->p[-1] == '/';
    x->p++;
    return name;
}
static char *read_text(XP *x) {
    const char *s = x->p;
    while (x->p < x->e && *x->p != '<') x->p++;
    size_t n = (size_t)(x->p - s);
    char *t = malloc(n + 1), *o = t;
    for (size_t i = 0; i < n; i++) {
        if (s[i] == '&') {
            if (!strncmp(s + i, "&lt;", 4)) { *o++ = '<'; i += 3; }
            else if (!strncmp(s + i, "&gt;", 4)) { *o++ = '>'; i += 3; }
            else if (!strncmp(s + i, "&amp;", 5)) { *o++ = '&'; i += 4; }
            else if (!strncmp(s + i, "&quot;", 6)) { *o++ = '"'; i += 5; }
            else if (!strncmp(s + i, "&apos;", 6)) { *o++ = '\''; i += 5; }
            else *o++ = s[i];
        } else *o++ = s[i];
    }
    *o = 0;
    return t;
}
static void expect_close(XP *x, const char *name) { bool cl, sc; char *t = read_tag(x, &cl, &sc); free(t); UNUSED(name); }
static gptr xml_value(CPU *c, XP *x);
static gptr xml_from_tag(CPU *c, XP *x, char *tag, bool sc) {
    gptr r = 0;
    if (!strcmp(tag, "dict")) {
        r = nsdict_new(true, false);
        if (!sc) for (;;) {
            bool cl, s2; char *k = read_tag(x, &cl, &s2);
            if (!k) break;
            if (cl) { free(k); break; }
            char *key = read_text(x); free(k); expect_close(x, "key");
            gptr v = xml_value(c, x);
            if (v) nsdict_set(r, nsstr(key), v);
            free(key);
        }
    } else if (!strcmp(tag, "array")) {
        r = nsarray_new(NULL, 0, true, false);
        if (!sc) for (;;) {
            skip_misc(x);
            if (x->p + 1 < x->e && x->p[0] == '<' && x->p[1] == '/') { bool cl, s2; free(read_tag(x, &cl, &s2)); break; }
            gptr v = xml_value(c, x);
            if (!v) break;
            nsarray_add(r, v);
        }
    } else if (!strcmp(tag, "string")) { char *t = sc ? strdup("") : read_text(x); r = nsstr(t); free(t); if (!sc) expect_close(x, tag); }
    else if (!strcmp(tag, "integer")) { char *t = read_text(x); r = nsnumber_int(strtoll(t, NULL, 10), false); free(t); expect_close(x, tag); }
    else if (!strcmp(tag, "real")) { char *t = read_text(x); r = nsnumber_double(strtod(t, NULL), false); free(t); expect_close(x, tag); }
    else if (!strcmp(tag, "true")) r = nsnumber_bool(true);
    else if (!strcmp(tag, "false")) r = nsnumber_bool(false);
    else if (!strcmp(tag, "data")) {
        char *t = read_text(x); expect_close(x, tag);
        static const char *b64 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
        uint8_t *o = malloc(strlen(t)); uint32_t n = 0, acc = 0; int bits = 0;
        for (char *q = t; *q; q++) { const char *k = strchr(b64, *q); if (!k || !*q) continue; acc = (acc << 6) | (uint32_t)(k - b64); bits += 6; if (bits >= 8) { bits -= 8; o[n++] = (uint8_t)(acc >> bits); } }
        r = nsdata_new(o, n, false); free(o); free(t);
    } else if (!strcmp(tag, "date")) { char *t = read_text(x); r = nsstr(t); free(t); expect_close(x, tag); }
    else if (!strcmp(tag, "plist")) { r = xml_value(c, x); expect_close(x, tag); }
    return r;
}
static gptr xml_value(CPU *c, XP *x) {
    bool cl, sc;
    char *tag = read_tag(x, &cl, &sc);
    if (!tag || cl) { free(tag); return 0; }
    gptr r = xml_from_tag(c, x, tag, sc);
    free(tag);
    return r;
}

/* ------------------------------------------------------------------ bplist00 */
typedef struct { const uint8_t *d; uint32_t n; int osz, rsz; uint64_t nobj, top, toff; } BP;
static uint64_t be(const uint8_t *p, int n) { uint64_t v = 0; for (int i = 0; i < n; i++) v = (v << 8) | p[i]; return v; }
static gptr bp_obj(CPU *c, BP *b, uint64_t idx, int depth);
static uint64_t bp_len(BP *b, const uint8_t **p, uint8_t low) {
    if (low != 0xf) return low;
    uint8_t m = **p; (*p)++;
    int sz = 1 << (m & 0xf);
    uint64_t v = be(*p, sz); *p += sz; UNUSED(b);
    return v;
}
static gptr bp_obj(CPU *c, BP *b, uint64_t idx, int depth) {
    if (idx >= b->nobj || depth > 64) return 0;
    uint64_t off = be(b->d + b->toff + idx * (uint64_t)b->osz, b->osz);
    const uint8_t *p = b->d + off;
    uint8_t m = *p++; uint8_t hi = m >> 4, lo = m & 0xf;
    switch (hi) {
    case 0: return lo == 8 ? nsnumber_bool(false) : lo == 9 ? nsnumber_bool(true) : 0;
    case 1: { int n = 1 << lo; uint64_t v = be(p, n); int64_t s = n == 8 ? (int64_t)v : n == 4 ? (int64_t)(uint32_t)v : (int64_t)v; return nsnumber_int(s, false); }
    case 2: { if (lo == 2) { uint32_t u = (uint32_t)be(p, 4); return nsnumber_double(U2F(u), false); } uint64_t u = be(p, 8); return nsnumber_double(U2D(u), false); }
    case 3: { uint64_t u = be(p, 8); return nsnumber_double(U2D(u), false); }
    case 4: { uint64_t n = bp_len(b, &p, lo); return nsdata_new(p, (uint32_t)n, false); }
    case 5: { uint64_t n = bp_len(b, &p, lo); char *t = strndup((const char *)p, n); gptr s = nsstr(t); free(t); return s; }
    case 6: { uint64_t n = bp_len(b, &p, lo); uint16_t *u = malloc(n * 2 + 2); for (uint64_t i = 0; i < n; i++) u[i] = (uint16_t)be(p + 2 * i, 2); gptr s = nsstr_from_utf16(u, (uint32_t)n, false); free(u); return s; }
    case 0xa: { uint64_t n = bp_len(b, &p, lo); gptr a = nsarray_new(NULL, 0, true, false); for (uint64_t i = 0; i < n; i++) { gptr v = bp_obj(c, b, be(p + i * b->rsz, b->rsz), depth + 1); if (v) nsarray_add(a, v); } return a; }
    case 0xd: { uint64_t n = bp_len(b, &p, lo); gptr d = nsdict_new(true, false);
        for (uint64_t i = 0; i < n; i++) { gptr k = bp_obj(c, b, be(p + i * b->rsz, b->rsz), depth + 1); gptr v = bp_obj(c, b, be(p + (n + i) * b->rsz, b->rsz), depth + 1); if (k && v) nsdict_set(d, k, v); }
        return d; }
    }
    return 0;
}

gptr plist_parse(CPU *c, const uint8_t *data, uint32_t len) {
    if (len >= 40 && !memcmp(data, "bplist00", 8)) {
        const uint8_t *t = data + len - 32;
        BP b = {data, len, t[6], t[7], be(t + 8, 8), be(t + 16, 8), be(t + 24, 8)};
        return bp_obj(c, &b, b.top, 0);
    }
    XP x = {(const char *)data, (const char *)data + len};
    return xml_value(c, &x);
}

/* ------------------------------------------------------------------ XML writer */
typedef struct { char *b; size_t n, cap; } WB;
static void wb(WB *w, const char *s) { size_t l = strlen(s); if (w->n + l + 1 > w->cap) { w->cap = (w->n + l + 1) * 2; w->b = realloc(w->b, w->cap); } memcpy(w->b + w->n, s, l + 1); w->n += l; }
static void wesc(WB *w, const char *s) { for (; *s; s++) { char t[2] = {*s, 0}; wb(w, *s == '<' ? "&lt;" : *s == '>' ? "&gt;" : *s == '&' ? "&amp;" : t); } }
extern gptr cls_NSDictionary, cls_NSArray, cls_NSData;
static void wval(CPU *c, WB *w, gptr o) {
    char tmp[64];
    if (is_nsstring(o)) { wb(w, "<string>"); wesc(w, nsstr_cstr(o)); wb(w, "</string>\n"); }
    else if (is_nsnumber(o)) {
        gptr t = msg(c, o, "objCType", 0); char ty = (char)LD8(t);
        if (ty == 'c' || ty == 'B') wb(w, nsnumber_get_int(o) ? "<true/>\n" : "<false/>\n");
        else if (ty == 'd' || ty == 'f') { snprintf(tmp, sizeof tmp, "<real>%.17g</real>\n", nsnumber_get_double(o)); wb(w, tmp); }
        else { snprintf(tmp, sizeof tmp, "<integer>%lld</integer>\n", (long long)nsnumber_get_int(o)); wb(w, tmp); }
    } else if (objc_is_kind_of(o, cls_NSDictionary)) {
        wb(w, "<dict>\n"); gptr keys = msg(c, o, "allKeys", 0);
        for (uint32_t i = 0; i < nsarray_count(keys); i++) { gptr k = nsarray_get(keys, i); wb(w, "<key>"); wesc(w, nsstr_cstr(k)); wb(w, "</key>\n"); wval(c, w, nsdict_get(o, k)); }
        wb(w, "</dict>\n");
    } else if (objc_is_kind_of(o, cls_NSArray)) {
        wb(w, "<array>\n"); for (uint32_t i = 0; i < nsarray_count(o); i++) wval(c, w, nsarray_get(o, i)); wb(w, "</array>\n");
    } else if (objc_is_kind_of(o, cls_NSData)) {
        static const char *b64 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
        gptr bytes = msg(c, o, "bytes", 0); uint32_t n = msg(c, o, "length", 0); const uint8_t *p = G2H(bytes);
        wb(w, "<data>");
        for (uint32_t i = 0; i < n; i += 3) {
            uint32_t v = (uint32_t)p[i] << 16 | (i + 1 < n ? (uint32_t)p[i + 1] << 8 : 0) | (i + 2 < n ? p[i + 2] : 0);
            char q[5] = {b64[v >> 18], b64[(v >> 12) & 63], i + 1 < n ? b64[(v >> 6) & 63] : '=', i + 2 < n ? b64[v & 63] : '=', 0};
            wb(w, q);
        }
        wb(w, "</data>\n");
    } else { rt_log("plist: cannot serialise %s", objc_obj_class_name(o)); wb(w, "<string></string>\n"); }
}
void plist_write_xml(CPU *c, gptr obj, char **out) {
    WB w = {0};
    wb(&w, "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n<!DOCTYPE plist PUBLIC \"-//Apple//DTD PLIST 1.0//EN\" \"http://www.apple.com/DTDs/PropertyList-1.0.dtd\">\n<plist version=\"1.0\">\n");
    wval(c, &w, obj);
    wb(&w, "</plist>\n");
    *out = w.b;
}

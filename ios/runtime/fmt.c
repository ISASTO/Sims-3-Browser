/* fmt.c — printf-family formatting over guest arguments (iOS armv7 ABI: words, doubles are two
 * consecutive words with no even-register/8-byte alignment — verified at 0x1a8dd0). Supports %@. */
#include "rt.h"
#include "fmt.h"

uint32_t ar_word(ArgReader *a) {
    if (a->va) { uint32_t v = LD32(a->va); a->va += 4; return v; }
    return rt_arg(a->c, a->idx++);
}
static uint64_t ar_dword(ArgReader *a) { uint32_t lo = ar_word(a); uint32_t hi = ar_word(a); return (uint64_t)lo | ((uint64_t)hi << 32); }

typedef struct { char *b; size_t n, cap; } SB;
static void sb_put(SB *s, const char *p, size_t n) {
    if (s->n + n + 1 > s->cap) { s->cap = (s->n + n + 1) * 2 + 64; s->b = realloc(s->b, s->cap); }
    memcpy(s->b + s->n, p, n); s->n += n; s->b[s->n] = 0;
}
static void sb_puts(SB *s, const char *p) { sb_put(s, p, strlen(p)); }

char *obj_description_utf8(CPU *c, gptr obj);   /* foundation.c */

/* Returns host-malloc'd UTF-8 string. */
char *gformat(CPU *c, const char *fmt, ArgReader *a) {
    SB s = {0};
    sb_put(&s, "", 0);
    for (const char *p = fmt; *p;) {
        if (*p != '%') { const char *q = strchr(p, '%'); size_t n = q ? (size_t)(q - p) : strlen(p); sb_put(&s, p, n); p += n; continue; }
        const char *start = p++;
        if (*p == '%') { sb_put(&s, "%", 1); p++; continue; }
        char spec[64]; size_t sl = 0; spec[sl++] = '%';
        /* positional args (%1$@) are not used by the game's format strings we have seen; reject loudly */
        while (*p && strchr("-+ #0'", *p)) { if (*p != '\'') spec[sl++] = *p; p++; }
        if (*p == '*') { int w = (int)ar_word(a); sl += snprintf(spec + sl, sizeof spec - sl, "%d", w); p++; }
        else while (*p >= '0' && *p <= '9') spec[sl++] = *p++;
        if (*p == '$') { rt_log("gformat: positional arguments unsupported in \"%s\"", fmt); free(s.b); return strdup(fmt); }
        if (*p == '.') {
            spec[sl++] = *p++;
            if (*p == '*') { int pr = (int)ar_word(a); sl += snprintf(spec + sl, sizeof spec - sl, "%d", pr); p++; }
            else while (*p >= '0' && *p <= '9') spec[sl++] = *p++;
        }
        int lng = 0; bool half = false, hh = false, sizet = false;
        for (;;) {
            if (*p == 'l') { lng++; p++; }
            else if (*p == 'h') { if (half) hh = true; half = true; p++; }
            else if (*p == 'q' || *p == 'j') { lng = 2; p++; }
            else if (*p == 'z' || *p == 't') { sizet = true; p++; }
            else if (*p == 'L') { lng = 3; p++; }
            else break;
        }
        char conv = *p ? *p++ : 0;
        char out[512];
        switch (conv) {
        case 'd': case 'i': case 'u': case 'x': case 'X': case 'o': case 'c': case 'C': {
            uint64_t v;
            if (lng >= 2) v = ar_dword(a); else v = ar_word(a);
            if (conv == 'c' || conv == 'C') { char ch = (char)v; spec[sl++] = 'c'; spec[sl] = 0; snprintf(out, sizeof out, spec, ch); sb_puts(&s, out); break; }
            spec[sl++] = 'l'; spec[sl++] = 'l'; spec[sl++] = conv; spec[sl] = 0;
            if (conv == 'd' || conv == 'i') {
                int64_t sv = lng >= 2 ? (int64_t)v : hh ? (int8_t)v : half ? (int16_t)v : (int32_t)(uint32_t)v;
                snprintf(out, sizeof out, spec, (long long)sv);
            } else {
                uint64_t uv = lng >= 2 ? v : hh ? (uint8_t)v : half ? (uint16_t)v : (uint32_t)v;
                snprintf(out, sizeof out, spec, (unsigned long long)uv);
            }
            sb_puts(&s, out); (void)sizet; break;
        }
        case 'f': case 'F': case 'e': case 'E': case 'g': case 'G': case 'a': case 'A': {
            double d = U2D(ar_dword(a));
            spec[sl++] = conv; spec[sl] = 0;
            snprintf(out, sizeof out, spec, d); sb_puts(&s, out); break;
        }
        case 's': {
            gptr sp = ar_word(a);
            spec[sl++] = 's'; spec[sl] = 0;
            const char *str = sp ? GSTR(sp) : "(null)";
            char *tmp = malloc(strlen(str) + sl + 600);
            sprintf(tmp, spec, str); sb_puts(&s, tmp); free(tmp); break;
        }
        case 'S': { /* UTF-16 */
            gptr sp = ar_word(a);
            if (!sp) { sb_puts(&s, "(null)"); break; }
            uint32_t n = 0; while (LD16(sp + 2 * n)) n++;
            gptr tmp = 0; (void)tmp;
            gptr str = nsstr_from_utf16((const uint16_t *)G2H(sp), n, false);
            sb_puts(&s, nsstr_cstr(str)); break;
        }
        case 'p': { uint32_t v = ar_word(a); snprintf(out, sizeof out, "0x%x", v); sb_puts(&s, out); break; }
        case '@': {
            gptr o = ar_word(a);
            char *d = obj_description_utf8(c, o);
            spec[sl++] = 's'; spec[sl] = 0;
            char *tmp = malloc(strlen(d) + sl + 600);
            sprintf(tmp, spec, d); sb_puts(&s, tmp); free(tmp); free(d); break;
        }
        case 'n': ar_word(a); break;
        default:
            sb_put(&s, start, (size_t)(p - start));
        }
    }
    return s.b;
}

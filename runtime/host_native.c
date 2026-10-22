/* host_native.c — native (Linux) host used for headless boot testing and debugging.
 * Bundle root from $SIMS3_BUNDLE, writable container from $SIMS3_HOME. GL/audio are recorded, not drawn. */
#ifndef GUEST_IDENTITY
#include "rt.h"
#include <time.h>
#include <sys/stat.h>
#include <dirent.h>
#include <errno.h>

static const char *map(const char *g, char *out, size_t n) {
    const char *b = getenv("SIMS3_BUNDLE"), *h = getenv("SIMS3_HOME");
    if (!b) b = "/home/claude/sims3/extract/Payload/sims3_iphone.app";
    if (!h) h = "/home/claude/sims3/build/home";
    if (!strncmp(g, "/app/sims3_iphone.app", 21)) snprintf(out, n, "%s%s", b, g + 21);
    else if (!strncmp(g, "/home", 5)) snprintf(out, n, "%s%s", h, g + 5);
    else snprintf(out, n, "/nonexistent%s", g);
    return out;
}
const char *host_language(void) { const char *l = getenv("SIMS3_LANG"); return l ? l : "en-US"; }
void host_console(const char *s) { fprintf(stderr, "%s\n", s); }
void host_fatal_hook(const char *m) { (void)m; }
/* The headless driver can run on a virtual clock (SIMS3_VIRTUAL_CLOCK=1): time advances by exactly one frame
 * period per frame, so scripted input lands at the same game state regardless of host speed. */
double native_clock_ms = -1, native_clock_wall0;
double host_now_ms(void) { if (native_clock_ms >= 0) return native_clock_ms; struct timespec t; clock_gettime(CLOCK_MONOTONIC, &t); return t.tv_sec * 1e3 + t.tv_nsec / 1e6; }
double host_wall_ms(void) { if (native_clock_ms >= 0) return native_clock_wall0 + native_clock_ms; struct timespec t; clock_gettime(CLOCK_REALTIME, &t); return t.tv_sec * 1e3 + t.tv_nsec / 1e6; }
double host_tz_offset_min(double ms) { (void)ms; return 0; }
int host_file_size(const char *p) { char h[1100]; struct stat st; if (stat(map(p, h, sizeof h), &st) || !S_ISREG(st.st_mode)) return -1; return (int)st.st_size; }
int host_file_read(const char *p, void *dst, uint32_t off, uint32_t len) {
    char h[1100]; FILE *f = fopen(map(p, h, sizeof h), "rb"); if (!f) return -1;
    fseek(f, off, SEEK_SET); size_t r = fread(dst, 1, len, f); fclose(f); return (int)r;
}
static void mkdirs(const char *path) {
    char t[1100]; snprintf(t, sizeof t, "%s", path);
    for (char *p = t + 1; *p; p++) if (*p == '/') { *p = 0; mkdir(t, 0755); *p = '/'; }
}
int host_file_write(const char *p, const void *src, uint32_t len, int append) {
    char h[1100]; map(p, h, sizeof h); mkdirs(h);
    FILE *f = fopen(h, append ? "ab" : "wb"); if (!f) return -1;
    size_t w = fwrite(src, 1, len, f); fclose(f); return (int)w;
}
int host_file_delete(const char *p) { char h[1100]; return remove(map(p, h, sizeof h)); }
int host_dir_list(const char *p, char *out, uint32_t outlen) {
    char h[1100]; DIR *d = opendir(map(p, h, sizeof h)); if (!d) return -1;
    uint32_t k = 0; struct dirent *e;
    while ((e = readdir(d))) {
        if (!strcmp(e->d_name, ".") || !strcmp(e->d_name, "..")) continue;
        size_t l = strlen(e->d_name) + 1; if (k + l + 1 > outlen) break;
        memcpy(out + k, e->d_name, l); k += (uint32_t)l;
    }
    out[k] = 0; closedir(d); return (int)k;
}
int host_is_dir(const char *p) { char h[1100]; struct stat st; return !stat(map(p, h, sizeof h), &st) && S_ISDIR(st.st_mode); }
int host_mkdir(const char *p) { char h[1100]; map(p, h, sizeof h); mkdirs(h); return mkdir(h, 0755) == 0 || errno == EEXIST ? 0 : -1; }
#endif

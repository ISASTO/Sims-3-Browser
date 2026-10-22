/* host_wasm.c — browser host: thin C wrappers over the JavaScript imports in web/sims3.js ("env" module).
 * The bundle is served read-only by the local web server; /home (saves, preferences, keychain) lives in a
 * JavaScript file map that is persisted to IndexedDB. */
#ifdef GUEST_IDENTITY
#include "rt.h"

#define JS(ret, name, args) __attribute__((import_module("env"), import_name(#name))) ret name args;
JS(void, js_console, (const char *s))
JS(void, js_fatal, (const char *s))
JS(double, js_now, (void))
JS(double, js_wall, (void))
JS(double, js_tz_offset_min, (double unix_ms))
JS(int, js_file_size, (const char *path))
JS(int, js_file_read, (const char *path, void *dst, uint32_t off, uint32_t len))
JS(int, js_file_write, (const char *path, const void *src, uint32_t len, int append))
JS(int, js_file_delete, (const char *path))
JS(int, js_dir_list, (const char *path, char *out, uint32_t outlen))
JS(int, js_is_dir, (const char *path))
JS(int, js_mkdir, (const char *path))
JS(int, js_language, (char *out, int outlen))
JS(uint32_t, js_ui_event, (int kind, uint32_t view, const char *arg, float x, float y, float w, float h))

void host_console(const char *s) { js_console(s); }
void host_fatal_hook(const char *m) { js_fatal(m); }
double host_now_ms(void) { return js_now(); }
double host_wall_ms(void) { return js_wall(); }
double host_tz_offset_min(double ms) { return js_tz_offset_min(ms); }
int host_file_size(const char *p) { return js_file_size(p); }
int host_file_read(const char *p, void *dst, uint32_t off, uint32_t len) { return js_file_read(p, dst, off, len); }
int host_file_write(const char *p, const void *src, uint32_t len, int append) { return js_file_write(p, src, len, append); }
int host_file_delete(const char *p) { return js_file_delete(p); }
int host_dir_list(const char *p, char *out, uint32_t outlen) { return js_dir_list(p, out, outlen); }
int host_is_dir(const char *p) { return js_is_dir(p); }
int host_mkdir(const char *p) { return js_mkdir(p); }
const char *host_language(void) { static char buf[32]; if (!buf[0] && js_language(buf, sizeof buf) <= 0) strcpy(buf, "en-US"); return buf; }
uint32_t host_ui_event(int kind, gptr view, const char *arg, float x, float y, float w, float h) { return js_ui_event(kind, view, arg, x, y, w, h); }
#endif

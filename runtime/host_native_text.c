/* host_native_text.c — native text stand-in: approximate metrics only (no glyphs).
 * The browser host rasterises real glyphs with Canvas2D. */
#ifndef GUEST_IDENTITY
#include "rt.h"
#include "hosttext.h"
void host_text_font_metrics(const char *font, float size, int bold, float *a, float *d, float *l) { (void)font; (void)bold; *a = size * 0.95f; *d = size * 0.25f; *l = size * 1.2f; }
float host_text_measure(const char *font, float size, int bold, const char *u) { (void)font; (void)bold; float w = 0; for (; *u; u++) if ((*u & 0xc0) != 0x80) w += size * 0.55f; return w; }
void host_text_render(const char *font, float size, int bold, const char *u, uint8_t *m, int w, int h, float b) { (void)font; (void)size; (void)bold; (void)u; (void)m; (void)w; (void)h; (void)b; }
#endif

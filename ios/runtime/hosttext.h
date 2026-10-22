/* hosttext.h — font metrics and glyph coverage rasterisation (Canvas2D in the browser). */
#pragma once
#include <stdint.h>
#ifdef GUEST_IDENTITY
#define HT(ret, name, args) __attribute__((import_module("text"), import_name(#name))) ret host_text_##name args;
#else
#define HT(ret, name, args) ret host_text_##name args;
#endif
HT(void, font_metrics, (const char *font, float size, int bold, float *ascent, float *descent, float *line_height))
HT(float, measure, (const char *font, float size, int bold, const char *utf8))
/* render UTF-8 text into an 8-bit coverage mask (w x h), baseline at y = baseline */
HT(void, render, (const char *font, float size, int bold, const char *utf8, uint8_t *mask, int w, int h, float baseline))

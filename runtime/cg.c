/* cg.c — CoreGraphics subset with a software rasteriser over guest-memory bitmaps, PNG decoding (stb_image),
 * UIFont/NSString text drawing (glyph coverage rasterised by the host), UIGraphics context stack.
 * Device space follows CoreGraphics: origin bottom-left, y up; memory row 0 is the top of the bitmap. */
#include "rt.h"
#include "hosttext.h"
#define STBI_ONLY_PNG
#define STBI_NO_STDIO
#define STB_IMAGE_IMPLEMENTATION
#define STBI_ASSERT(x) ((void)0)
#include "third_party/stb_image.h"

gptr rt_retain(CPU *c, gptr obj);
void rt_release(CPU *c, gptr obj);
void objc_destroy_instance(gptr obj);
const float *uicolor_rgba(gptr col);
static gptr cls_CGContext, cls_CGImage, cls_CGColorSpace, cls_CGColor, cls_CGPath, cls_CGGradient, cls_CGDataProvider, cls_UIFont;

typedef struct { float a, b, c, d, tx, ty; } Aff;
static Aff aff_mul(Aff m, Aff n) { /* m then n */ Aff r = {m.a * n.a + m.b * n.c, m.a * n.b + m.b * n.d, m.c * n.a + m.d * n.c, m.c * n.b + m.d * n.d, m.tx * n.a + m.ty * n.c + n.tx, m.tx * n.b + m.ty * n.d + n.ty}; return r; }
static void aff_apply(Aff m, float x, float y, float *ox, float *oy) { *ox = m.a * x + m.c * y + m.tx; *oy = m.b * x + m.d * y + m.ty; }

/* ------------------------------------------------------------------ images (host RGBA8 premultiplied, top row first) */
typedef struct { uint32_t w, h; uint8_t *px; } Img;
static void img_dtor(void *p) { free(((Img *)p)->px); }
static gptr image_new(uint32_t w, uint32_t h, uint8_t *px) { gptr o = objc_alloc_instance(cls_CGImage, 0); Img *s = hostdata_ensure(o, sizeof(Img), img_dtor); s->w = w; s->h = h; s->px = px; return o; }

/* ------------------------------------------------------------------ contexts */
typedef struct { Aff ctm; float fill[4], stroke[4]; float lw; float cx0, cy0, cx1, cy1; bool clip; int blend; bool aa; int interp; float alpha;
                 float sh_dx, sh_dy, sh_blur, sh_col[4]; bool shadow; int textmode; } GState;
typedef struct { float *pts; uint32_t n, cap; uint32_t *subs; uint32_t nsub, capsub; bool *closed; } Path;
typedef struct {
    gptr data; uint32_t w, h, bpr, bpc, info; bool owns;
    GState gs, stack[16]; int sp;
    Path path;
} Ctx;
static void path_reset(Path *p) { p->n = 0; p->nsub = 0; }
static void path_free(Path *p) { free(p->pts); free(p->subs); free(p->closed); memset(p, 0, sizeof *p); }
static void ctx_dtor(void *p) { Ctx *c = p; if (c->owns) gfree(c->data); path_free(&c->path); }
static Ctx *CX(gptr o) { return hostdata(o); }
static gptr ctx_new(gptr data, uint32_t w, uint32_t h, uint32_t bpc, uint32_t bpr, uint32_t info) {
    gptr o = objc_alloc_instance(cls_CGContext, 0);
    Ctx *c = hostdata_ensure(o, sizeof(Ctx), ctx_dtor);
    c->w = w; c->h = h; c->bpc = bpc; c->info = info;
    c->bpr = bpr ? bpr : w * 4;
    if (!data) { data = gcalloc(1, c->bpr * h); c->owns = true; }
    c->data = data;
    Aff id = {1, 0, 0, 1, 0, 0}; c->gs.ctm = id;
    c->gs.fill[3] = 1; c->gs.stroke[3] = 1; c->gs.lw = 1; c->gs.aa = true; c->gs.interp = 1; c->gs.alpha = 1;
    return o;
}
/* pixel format: kCGImageAlphaPremultipliedLast (RGBA) or PremultipliedFirst + 32Little (BGRA in memory) */
static bool is_bgra(Ctx *c) { uint32_t alpha = c->info & 0x1f, order = c->info & 0x7000; return (alpha == 2 || alpha == 6) && order == 0x2000; }
static inline void blend_px(Ctx *c, int x, int ydev, const float s[4], float cov) {
    if (x < 0 || ydev < 0 || x >= (int)c->w || ydev >= (int)c->h || cov <= 0) return;
    GState *g = &c->gs;
    if (g->clip && (x + 0.5f < g->cx0 || x + 0.5f > g->cx1 || ydev + 0.5f < g->cy0 || ydev + 0.5f > g->cy1)) return;
    uint8_t *p = G2H(c->data + (c->h - 1 - (uint32_t)ydev) * c->bpr + (uint32_t)x * 4);
    int ri = is_bgra(c) ? 2 : 0, bi = is_bgra(c) ? 0 : 2;
    float a = s[3] * cov * g->alpha;
    float sr = s[0] * a, sg = s[1] * a, sb = s[2] * a;
    if (g->blend == 17 /* copy */ || g->blend == 16 /* clear */) {
        if (g->blend == 16) { p[0] = p[1] = p[2] = p[3] = 0; return; }
        p[ri] = (uint8_t)(sr * 255 + .5f); p[1] = (uint8_t)(sg * 255 + .5f); p[bi] = (uint8_t)(sb * 255 + .5f); p[3] = (uint8_t)(a * 255 + .5f); return;
    }
    float ia = 1 - a;
    p[ri] = (uint8_t)(sr * 255 + p[ri] * ia + .5f); p[1] = (uint8_t)(sg * 255 + p[1] * ia + .5f);
    p[bi] = (uint8_t)(sb * 255 + p[bi] * ia + .5f); p[3] = (uint8_t)(a * 255 + p[3] * ia + .5f);
}
/* scanline polygon fill, nonzero winding, 4x vertical supersampling when antialiased */
static void fill_polys(Ctx *c, const float *pts, const uint32_t *subs, uint32_t nsub, uint32_t npts, const float col[4], bool eo) {
    float miny = 1e9f, maxy = -1e9f;
    for (uint32_t i = 0; i < npts; i++) { if (pts[2 * i + 1] < miny) miny = pts[2 * i + 1]; if (pts[2 * i + 1] > maxy) maxy = pts[2 * i + 1]; }
    int y0 = (int)floorf(miny), y1 = (int)ceilf(maxy);
    if (y0 < 0) y0 = 0; if (y1 > (int)c->h) y1 = (int)c->h;
    int ss = c->gs.aa ? 4 : 1;
    float *cov = calloc(c->w + 2, sizeof(float));
    float xs[512]; int dirs[512];
    for (int y = y0; y < y1; y++) {
        memset(cov, 0, (c->w + 2) * sizeof(float));
        for (int s = 0; s < ss; s++) {
            float sy = y + (ss == 1 ? 0.5f : (s + 0.5f) / ss);
            int nx = 0;
            for (uint32_t k = 0; k < nsub; k++) {
                uint32_t st = subs[k], en = k + 1 < nsub ? subs[k + 1] : npts;
                for (uint32_t i = st; i < en; i++) {
                    uint32_t j = i + 1 < en ? i + 1 : st;
                    float ax = pts[2 * i], ay = pts[2 * i + 1], bx = pts[2 * j], by = pts[2 * j + 1];
                    if ((ay <= sy && by > sy) || (by <= sy && ay > sy)) {
                        if (nx < 512) { xs[nx] = ax + (sy - ay) * (bx - ax) / (by - ay); dirs[nx] = ay < by ? 1 : -1; nx++; }
                    }
                }
            }
            for (int i = 1; i < nx; i++) { float t = xs[i]; int d = dirs[i]; int j = i; while (j > 0 && xs[j - 1] > t) { xs[j] = xs[j - 1]; dirs[j] = dirs[j - 1]; j--; } xs[j] = t; dirs[j] = d; }
            int wind = 0;
            for (int i = 0; i + 1 < nx + 1 && i < nx; i++) {
                wind += eo ? 1 : dirs[i];
                bool inside = eo ? (wind & 1) : wind != 0;
                if (!inside || i + 1 >= nx) continue;
                float xa = xs[i], xb = xs[i + 1];
                if (!c->gs.aa) { int a = (int)ceilf(xa - 0.5f), b = (int)ceilf(xb - 0.5f); for (int x = a; x < b; x++) if (x >= 0 && x < (int)c->w) cov[x] = 1; continue; }
                int xi0 = (int)floorf(xa), xi1 = (int)floorf(xb);
                for (int x = xi0; x <= xi1; x++) {
                    if (x < 0 || x >= (int)c->w) continue;
                    float l = xa > x ? xa : (float)x, r = xb < x + 1 ? xb : (float)x + 1;
                    if (r > l) cov[x] += (r - l) / ss;
                }
            }
        }
        for (int x = 0; x < (int)c->w; x++) if (cov[x] > 0) blend_px(c, x, y, col, cov[x] > 1 ? 1 : cov[x]);
    }
    free(cov);
}
static void fill_rect_dev(Ctx *c, float x, float y, float w, float h, const float col[4]) {
    float p[8]; Aff m = c->gs.ctm;
    aff_apply(m, x, y, &p[0], &p[1]); aff_apply(m, x + w, y, &p[2], &p[3]); aff_apply(m, x + w, y + h, &p[4], &p[5]); aff_apply(m, x, y + h, &p[6], &p[7]);
    uint32_t sub = 0; fill_polys(c, p, &sub, 1, 4, col, false);
}

/* ------------------------------------------------------------------ CG C API */
void H_CGColorSpaceCreateDeviceRGB(CPU *c) { RET(objc_alloc_instance(cls_CGColorSpace, 0)); }
void H_CGColorSpaceCreateDeviceGray(CPU *c) { RET(objc_alloc_instance(cls_CGColorSpace, 0)); }
void H_CGColorSpaceRelease(CPU *c) { if (ARG(0)) rt_release(c, ARG(0)); }
void H_CGColorCreate(CPU *c) { gptr o = objc_alloc_instance(cls_CGColor, 0); float *f = hostdata_ensure(o, 16, NULL); for (int i = 0; i < 4; i++) f[i] = U2F(LD32(ARG(1) + 4 * i)); RET(o); }
void H_CGColorRelease(CPU *c) { if (ARG(0)) rt_release(c, ARG(0)); }
static void color_of(gptr col, float out[4]) {
    const float *u = uicolor_rgba(col);
    if (u) { memcpy(out, u, 16); return; }
    float *f = col ? hostdata(col) : NULL;
    if (f) memcpy(out, f, 16); else { out[0] = out[1] = out[2] = 0; out[3] = 1; }
}
void H_CGBitmapContextCreate(CPU *c) {
    uint32_t w = ARG(1), h = ARG(2), bpc = ARG(3), bpr = LD32(c->r[13]), info = LD32(c->r[13] + 8);
    if (bpc != 8) { rt_log("CGBitmapContextCreate: %u bits per component unsupported", bpc); RET(0); return; }
    RET(ctx_new(ARG(0), w, h, bpc, bpr, info));
}
void H_CGBitmapContextCreateImage(CPU *c) {
    Ctx *x = CX(ARG(0)); if (!x) { RET(0); return; }
    uint8_t *px = malloc((size_t)x->w * x->h * 4);
    for (uint32_t y = 0; y < x->h; y++) {
        uint8_t *src = G2H(x->data + y * x->bpr), *dst = px + (size_t)y * x->w * 4;
        if (is_bgra(x)) for (uint32_t i = 0; i < x->w; i++) { dst[4 * i] = src[4 * i + 2]; dst[4 * i + 1] = src[4 * i + 1]; dst[4 * i + 2] = src[4 * i]; dst[4 * i + 3] = src[4 * i + 3]; }
        else memcpy(dst, src, x->w * 4);
    }
    RET(image_new(x->w, x->h, px));
}
void H_CGContextRelease(CPU *c) { if (ARG(0)) rt_release(c, ARG(0)); }
void H_CGContextRetain(CPU *c) { RET(rt_retain(c, ARG(0))); }
void H_CGContextSaveGState(CPU *c) { Ctx *x = CX(ARG(0)); if (x && x->sp < 16) x->stack[x->sp++] = x->gs; }
void H_CGContextRestoreGState(CPU *c) { Ctx *x = CX(ARG(0)); if (x && x->sp > 0) x->gs = x->stack[--x->sp]; }
void H_CGContextTranslateCTM(CPU *c) { Ctx *x = CX(ARG(0)); Aff t = {1, 0, 0, 1, ARGF(1), ARGF(2)}; x->gs.ctm = aff_mul(t, x->gs.ctm); }
void H_CGContextScaleCTM(CPU *c) { Ctx *x = CX(ARG(0)); Aff t = {ARGF(1), 0, 0, ARGF(2), 0, 0}; x->gs.ctm = aff_mul(t, x->gs.ctm); }
void H_CGContextRotateCTM(CPU *c) { Ctx *x = CX(ARG(0)); float a = ARGF(1); Aff t = {cosf(a), sinf(a), -sinf(a), cosf(a), 0, 0}; x->gs.ctm = aff_mul(t, x->gs.ctm); }
void H_CGContextSetRGBFillColor(CPU *c) { Ctx *x = CX(ARG(0)); x->gs.fill[0] = ARGF(1); x->gs.fill[1] = ARGF(2); x->gs.fill[2] = ARGF(3); x->gs.fill[3] = U2F(LD32(c->r[13])); }
void H_CGContextSetRGBStrokeColor(CPU *c) { Ctx *x = CX(ARG(0)); x->gs.stroke[0] = ARGF(1); x->gs.stroke[1] = ARGF(2); x->gs.stroke[2] = ARGF(3); x->gs.stroke[3] = U2F(LD32(c->r[13])); }
void H_CGContextSetFillColorWithColor(CPU *c) { Ctx *x = CX(ARG(0)); color_of(ARG(1), x->gs.fill); }
void H_CGContextSetStrokeColorWithColor(CPU *c) { Ctx *x = CX(ARG(0)); color_of(ARG(1), x->gs.stroke); }
void H_CGContextSetLineWidth(CPU *c) { Ctx *x = CX(ARG(0)); x->gs.lw = ARGF(1); }
void H_CGContextSetLineJoin(CPU *c) { UNUSED(c); }
void H_CGContextSetAllowsAntialiasing(CPU *c) { Ctx *x = CX(ARG(0)); x->gs.aa = ARG(1) & 0xff; }
void H_CGContextSetInterpolationQuality(CPU *c) { Ctx *x = CX(ARG(0)); x->gs.interp = (int)ARG(1); }
void H_CGContextSetBlendMode(CPU *c) { Ctx *x = CX(ARG(0)); x->gs.blend = (int)ARG(1); }
void H_CGContextSetTextDrawingMode(CPU *c) { Ctx *x = CX(ARG(0)); x->gs.textmode = (int)ARG(1); }
void H_CGContextSetShadowWithColor(CPU *c) {
    Ctx *x = CX(ARG(0));
    x->gs.sh_dx = ARGF(1); x->gs.sh_dy = ARGF(2); x->gs.sh_blur = ARGF(3);
    gptr col = LD32(c->r[13]);
    x->gs.shadow = col != 0;
    if (col) color_of(col, x->gs.sh_col);
}
void H_CGContextClipToRect(CPU *c) {
    Ctx *x = CX(ARG(0));
    float rx = ARGF(1), ry = ARGF(2), rw = ARGF(3), rh = U2F(LD32(c->r[13]));
    float ax, ay, bx, by; aff_apply(x->gs.ctm, rx, ry, &ax, &ay); aff_apply(x->gs.ctm, rx + rw, ry + rh, &bx, &by);
    float x0 = fminf(ax, bx), x1 = fmaxf(ax, bx), y0 = fminf(ay, by), y1 = fmaxf(ay, by);
    if (x->gs.clip) { x0 = fmaxf(x0, x->gs.cx0); y0 = fmaxf(y0, x->gs.cy0); x1 = fminf(x1, x->gs.cx1); y1 = fminf(y1, x->gs.cy1); }
    x->gs.cx0 = x0; x->gs.cy0 = y0; x->gs.cx1 = x1; x->gs.cy1 = y1; x->gs.clip = true;
}
void H_CGContextFillRect(CPU *c) { Ctx *x = CX(ARG(0)); fill_rect_dev(x, ARGF(1), ARGF(2), ARGF(3), U2F(LD32(c->r[13])), x->gs.fill); }
static void stroke_seg(Ctx *x, float ax, float ay, float bx, float by) {
    float dx = bx - ax, dy = by - ay, l = sqrtf(dx * dx + dy * dy); if (l < 1e-6f) return;
    float hw = x->gs.lw / 2, nx = -dy / l * hw, ny = dx / l * hw;
    float p[8], q[8] = {ax + nx, ay + ny, bx + nx, by + ny, bx - nx, by - ny, ax - nx, ay - ny};
    for (int i = 0; i < 4; i++) aff_apply(x->gs.ctm, q[2 * i], q[2 * i + 1], &p[2 * i], &p[2 * i + 1]);
    uint32_t sub = 0; fill_polys(x, p, &sub, 1, 4, x->gs.stroke, false);
}
void H_CGContextStrokeRect(CPU *c) {
    Ctx *x = CX(ARG(0)); float rx = ARGF(1), ry = ARGF(2), rw = ARGF(3), rh = U2F(LD32(c->r[13]));
    stroke_seg(x, rx, ry, rx + rw, ry); stroke_seg(x, rx + rw, ry, rx + rw, ry + rh); stroke_seg(x, rx + rw, ry + rh, rx, ry + rh); stroke_seg(x, rx, ry + rh, rx, ry);
}
/* paths (stored in user space, transformed at fill time) */
static void path_pt(Path *p, float x, float y) { if (p->n == p->cap) { p->cap = p->cap ? p->cap * 2 : 64; p->pts = realloc(p->pts, p->cap * 8); } p->pts[2 * p->n] = x; p->pts[2 * p->n + 1] = y; p->n++; }
static void path_move(Path *p, float x, float y) { if (p->nsub == p->capsub) { p->capsub = p->capsub ? p->capsub * 2 : 8; p->subs = realloc(p->subs, p->capsub * 4); p->closed = realloc(p->closed, p->capsub); } p->subs[p->nsub] = p->n; p->closed[p->nsub] = false; p->nsub++; path_pt(p, x, y); }
static void path_line(Path *p, float x, float y) { if (!p->nsub) path_move(p, x, y); else path_pt(p, x, y); }
static void path_curve(Path *p, float c1x, float c1y, float c2x, float c2y, float x, float y) {
    if (!p->n) return;
    float x0 = p->pts[2 * p->n - 2], y0 = p->pts[2 * p->n - 1];
    for (int i = 1; i <= 16; i++) { float t = i / 16.0f, u = 1 - t;
        path_pt(p, u * u * u * x0 + 3 * u * u * t * c1x + 3 * u * t * t * c2x + t * t * t * x, u * u * u * y0 + 3 * u * u * t * c1y + 3 * u * t * t * c2y + t * t * t * y); }
}
static void path_arcto(Path *p, float x1, float y1, float x2, float y2, float r) {
    if (!p->n) { path_move(p, x1, y1); return; }
    float x0 = p->pts[2 * p->n - 2], y0 = p->pts[2 * p->n - 1];
    float v1x = x0 - x1, v1y = y0 - y1, v2x = x2 - x1, v2y = y2 - y1;
    float l1 = sqrtf(v1x * v1x + v1y * v1y), l2 = sqrtf(v2x * v2x + v2y * v2y);
    if (l1 < 1e-6f || l2 < 1e-6f || r <= 0) { path_line(p, x1, y1); return; }
    v1x /= l1; v1y /= l1; v2x /= l2; v2y /= l2;
    float cosang = v1x * v2x + v1y * v2y, ang = acosf(fmaxf(-1, fminf(1, cosang)));
    if (fabsf(sinf(ang)) < 1e-6f) { path_line(p, x1, y1); return; }
    float d = r / tanf(ang / 2);
    float t1x = x1 + v1x * d, t1y = y1 + v1y * d, t2x = x1 + v2x * d, t2y = y1 + v2y * d;
    path_line(p, t1x, t1y);
    float bx = v1x + v2x, by = v1y + v2y, bl = sqrtf(bx * bx + by * by);
    float cx = x1 + bx / bl * r / sinf(ang / 2), cy = y1 + by / bl * r / sinf(ang / 2);
    float a0 = atan2f(t1y - cy, t1x - cx), a1 = atan2f(t2y - cy, t2x - cx);
    float da = a1 - a0; while (da > (float)M_PI) da -= 2 * (float)M_PI; while (da < -(float)M_PI) da += 2 * (float)M_PI;
    for (int i = 1; i <= 12; i++) { float a = a0 + da * i / 12; path_pt(p, cx + r * cosf(a), cy + r * sinf(a)); }
}
void H_CGContextBeginPath(CPU *c) { path_reset(&CX(ARG(0))->path); }
void H_CGContextMoveToPoint(CPU *c) { path_move(&CX(ARG(0))->path, ARGF(1), ARGF(2)); }
void H_CGContextAddLineToPoint(CPU *c) { path_line(&CX(ARG(0))->path, ARGF(1), ARGF(2)); }
void H_CGContextAddCurveToPoint(CPU *c) { gptr sp = c->r[13]; path_curve(&CX(ARG(0))->path, ARGF(1), ARGF(2), ARGF(3), U2F(LD32(sp)), U2F(LD32(sp + 4)), U2F(LD32(sp + 8))); }
void H_CGContextAddArcToPoint(CPU *c) { gptr sp = c->r[13]; path_arcto(&CX(ARG(0))->path, ARGF(1), ARGF(2), ARGF(3), U2F(LD32(sp)), U2F(LD32(sp + 4))); }
void H_CGContextAddLines(CPU *c) { Path *p = &CX(ARG(0))->path; for (uint32_t i = 0; i < ARG(2); i++) { float x = U2F(LD32(ARG(1) + 8 * i)), y = U2F(LD32(ARG(1) + 8 * i + 4)); if (!i) path_move(p, x, y); else path_line(p, x, y); } }
void H_CGContextClosePath(CPU *c) { Path *p = &CX(ARG(0))->path; if (p->nsub) p->closed[p->nsub - 1] = true; }
static void do_fill(Ctx *x, bool eo) {
    Path *p = &x->path; if (!p->n) return;
    float *t = malloc(p->n * 8);
    for (uint32_t i = 0; i < p->n; i++) aff_apply(x->gs.ctm, p->pts[2 * i], p->pts[2 * i + 1], &t[2 * i], &t[2 * i + 1]);
    fill_polys(x, t, p->subs, p->nsub, p->n, x->gs.fill, eo);
    free(t); path_reset(p);
}
static void do_stroke(Ctx *x) {
    Path *p = &x->path;
    for (uint32_t k = 0; k < p->nsub; k++) {
        uint32_t st = p->subs[k], en = k + 1 < p->nsub ? p->subs[k + 1] : p->n;
        for (uint32_t i = st; i + 1 < en; i++) stroke_seg(x, p->pts[2 * i], p->pts[2 * i + 1], p->pts[2 * i + 2], p->pts[2 * i + 3]);
        if (p->closed[k] && en > st + 1) stroke_seg(x, p->pts[2 * en - 2], p->pts[2 * en - 1], p->pts[2 * st], p->pts[2 * st + 1]);
    }
    path_reset(p);
}
void H_CGContextFillPath(CPU *c) { do_fill(CX(ARG(0)), false); }
void H_CGContextStrokePath(CPU *c) { do_stroke(CX(ARG(0))); }
void H_CGContextDrawPath(CPU *c) {
    Ctx *x = CX(ARG(0)); uint32_t mode = ARG(1);
    Path save = {0};
    if (mode >= 2) { save.n = x->path.n; save.pts = malloc(x->path.n * 8 + 8); memcpy(save.pts, x->path.pts, x->path.n * 8); save.nsub = x->path.nsub; save.subs = malloc(x->path.nsub * 4 + 4); memcpy(save.subs, x->path.subs, x->path.nsub * 4); save.closed = malloc(x->path.nsub + 1); memcpy(save.closed, x->path.closed, x->path.nsub); }
    if (mode == 0 || mode == 1 || mode == 3 || mode == 4) do_fill(x, mode == 1 || mode == 4);
    if (mode == 2) { do_stroke(x); }
    if (mode == 3 || mode == 4) { path_free(&x->path); x->path = save; save.pts = NULL; do_stroke(x); }
    free(save.pts); free(save.subs); free(save.closed);
}
void H_CGContextAddPath(CPU *c) { Path *s = hostdata(ARG(1)); Path *d = &CX(ARG(0))->path; if (!s) return; for (uint32_t k = 0; k < s->nsub; k++) { uint32_t st = s->subs[k], en = k + 1 < s->nsub ? s->subs[k + 1] : s->n; for (uint32_t i = st; i < en; i++) { if (i == st) path_move(d, s->pts[2 * i], s->pts[2 * i + 1]); else path_line(d, s->pts[2 * i], s->pts[2 * i + 1]); } } }
void H_CGContextClip(CPU *c) {
    /* clip to path bounding box (game uses rectangular clips only) */
    Ctx *x = CX(ARG(0)); Path *p = &x->path; if (!p->n) return;
    float x0 = 1e9f, y0 = 1e9f, x1 = -1e9f, y1 = -1e9f;
    for (uint32_t i = 0; i < p->n; i++) { float a, b; aff_apply(x->gs.ctm, p->pts[2 * i], p->pts[2 * i + 1], &a, &b); x0 = fminf(x0, a); y0 = fminf(y0, b); x1 = fmaxf(x1, a); y1 = fmaxf(y1, b); }
    if (x->gs.clip) { x0 = fmaxf(x0, x->gs.cx0); y0 = fmaxf(y0, x->gs.cy0); x1 = fminf(x1, x->gs.cx1); y1 = fminf(y1, x->gs.cy1); }
    x->gs.cx0 = x0; x->gs.cy0 = y0; x->gs.cx1 = x1; x->gs.cy1 = y1; x->gs.clip = true; path_reset(p);
}
void H_CGContextFillEllipseInRect(CPU *c) {
    Ctx *x = CX(ARG(0)); float rx = ARGF(1), ry = ARGF(2), rw = ARGF(3), rh = U2F(LD32(c->r[13]));
    path_reset(&x->path);
    for (int i = 0; i < 64; i++) { float a = i * 2 * (float)M_PI / 64; float px = rx + rw / 2 + rw / 2 * cosf(a), py = ry + rh / 2 + rh / 2 * sinf(a); if (!i) path_move(&x->path, px, py); else path_line(&x->path, px, py); }
    do_fill(x, false);
}
/* gradients: approximate linear/radial with per-pixel evaluation over the clip/path bounds */
typedef struct { float c0[4], c1[4]; } Grad;
void H_CGGradientCreateWithColors(CPU *c) {
    gptr g = objc_alloc_instance(cls_CGGradient, 0); Grad *s = hostdata_ensure(g, sizeof(Grad), NULL);
    gptr arr = ARG(1); uint32_t n = nsarray_count(arr);
    if (n) color_of(nsarray_get(arr, 0), s->c0); if (n) color_of(nsarray_get(arr, n - 1), s->c1);
    RET(g);
}
void H_CGGradientRelease(CPU *c) { if (ARG(0)) rt_release(c, ARG(0)); }
static void draw_gradient(Ctx *x, Grad *g, float sx, float sy, float ex, float ey, float r0, float r1, bool radial) {
    Aff m = x->gs.ctm; float det = m.a * m.d - m.b * m.c; if (fabsf(det) < 1e-9f) return;
    Aff inv = {m.d / det, -m.b / det, -m.c / det, m.a / det, 0, 0}; inv.tx = -(m.tx * inv.a + m.ty * inv.c); inv.ty = -(m.tx * inv.b + m.ty * inv.d);
    int X0 = 0, Y0 = 0, X1 = (int)x->w, Y1 = (int)x->h;
    if (x->gs.clip) { X0 = (int)fmaxf(0, floorf(x->gs.cx0)); Y0 = (int)fmaxf(0, floorf(x->gs.cy0)); X1 = (int)fminf((float)x->w, ceilf(x->gs.cx1)); Y1 = (int)fminf((float)x->h, ceilf(x->gs.cy1)); }
    for (int y = Y0; y < Y1; y++) for (int xx = X0; xx < X1; xx++) {
        float ux, uy; aff_apply(inv, xx + .5f, y + .5f, &ux, &uy);
        float t;
        if (!radial) { float dx = ex - sx, dy = ey - sy, l2 = dx * dx + dy * dy; t = l2 > 0 ? ((ux - sx) * dx + (uy - sy) * dy) / l2 : 0; }
        else { float d = sqrtf((ux - ex) * (ux - ex) + (uy - ey) * (uy - ey)); t = r1 > r0 ? (d - r0) / (r1 - r0) : 0; }
        t = fmaxf(0, fminf(1, t));
        float col[4]; for (int i = 0; i < 4; i++) col[i] = g->c0[i] + (g->c1[i] - g->c0[i]) * t;
        blend_px(x, xx, y, col, 1);
    }
}
void H_CGContextDrawLinearGradient(CPU *c) { Ctx *x = CX(ARG(0)); Grad *g = hostdata(ARG(1)); gptr sp = c->r[13]; if (g) draw_gradient(x, g, ARGF(2), ARGF(3), U2F(LD32(sp)), U2F(LD32(sp + 4)), 0, 0, false); }
void H_CGContextDrawRadialGradient(CPU *c) { Ctx *x = CX(ARG(0)); Grad *g = hostdata(ARG(1)); gptr sp = c->r[13]; if (g) draw_gradient(x, g, ARGF(2), ARGF(3), U2F(LD32(sp + 4)), U2F(LD32(sp + 8)), U2F(LD32(sp)), U2F(LD32(sp + 12)), true); }

/* image drawing: map destination pixels back into image space (handles flips/scales/translations) */
static void draw_image(Ctx *x, Img *im, float rx, float ry, float rw, float rh) {
    Aff m = x->gs.ctm;
    float px[4], py[4]; aff_apply(m, rx, ry, &px[0], &py[0]); aff_apply(m, rx + rw, ry, &px[1], &py[1]); aff_apply(m, rx + rw, ry + rh, &px[2], &py[2]); aff_apply(m, rx, ry + rh, &px[3], &py[3]);
    float minx = fminf(fminf(px[0], px[1]), fminf(px[2], px[3])), maxx = fmaxf(fmaxf(px[0], px[1]), fmaxf(px[2], px[3]));
    float miny = fminf(fminf(py[0], py[1]), fminf(py[2], py[3])), maxy = fmaxf(fmaxf(py[0], py[1]), fmaxf(py[2], py[3]));
    float det = m.a * m.d - m.b * m.c; if (fabsf(det) < 1e-12f || rw == 0 || rh == 0) return;
    Aff inv = {m.d / det, -m.b / det, -m.c / det, m.a / det, 0, 0}; inv.tx = -(m.tx * inv.a + m.ty * inv.c); inv.ty = -(m.tx * inv.b + m.ty * inv.d);
    int X0 = (int)fmaxf(0, floorf(minx)), X1 = (int)fminf((float)x->w, ceilf(maxx)), Y0 = (int)fmaxf(0, floorf(miny)), Y1 = (int)fminf((float)x->h, ceilf(maxy));
    bool fast = x->gs.blend == 0 && x->gs.alpha == 1 && !x->gs.clip;
    int ri = is_bgra(x) ? 2 : 0, bi = is_bgra(x) ? 0 : 2;
    for (int y = Y0; y < Y1; y++) for (int xx = X0; xx < X1; xx++) {
        float ux, uy; aff_apply(inv, xx + .5f, y + .5f, &ux, &uy);
        float u = (ux - rx) / rw, v = (uy - ry) / rh;     /* v=0 at rect bottom (CG user space) */
        if (u < 0 || u >= 1 || v < 0 || v >= 1) continue;
        float fx = u * im->w, fy = (1 - v) * im->h;       /* image row 0 is the top */
        uint8_t s[4];
        if (x->gs.interp == 1 /* none */ || (rw == (float)im->w && rh == (float)im->h)) {
            int sx = (int)fx, sy = (int)fy; if (sx >= (int)im->w) sx = (int)im->w - 1; if (sy >= (int)im->h) sy = (int)im->h - 1;
            memcpy(s, im->px + ((size_t)sy * im->w + (size_t)sx) * 4, 4);
        } else {
            float gx = fx - .5f, gy = fy - .5f; int x0 = (int)floorf(gx), y0 = (int)floorf(gy); float tx = gx - x0, ty = gy - y0;
            for (int k = 0; k < 4; k++) {
                float acc = 0;
                for (int j = 0; j < 2; j++) for (int i = 0; i < 2; i++) {
                    int sx = x0 + i, sy = y0 + j; if (sx < 0) sx = 0; if (sy < 0) sy = 0; if (sx >= (int)im->w) sx = (int)im->w - 1; if (sy >= (int)im->h) sy = (int)im->h - 1;
                    acc += im->px[((size_t)sy * im->w + (size_t)sx) * 4 + k] * (i ? tx : 1 - tx) * (j ? ty : 1 - ty);
                }
                s[k] = (uint8_t)(acc + .5f);
            }
        }
        uint8_t *d = G2H(x->data + (x->h - 1 - (uint32_t)y) * x->bpr + (uint32_t)xx * 4);
        if (fast || x->gs.blend == 17) {
            if (s[3] == 255 || x->gs.blend == 17) { d[ri] = s[0]; d[1] = s[1]; d[bi] = s[2]; d[3] = s[3]; continue; }
            if (s[3] == 0) continue;
            int ia = 255 - s[3];
            d[ri] = (uint8_t)(s[0] + (d[ri] * ia + 127) / 255); d[1] = (uint8_t)(s[1] + (d[1] * ia + 127) / 255); d[bi] = (uint8_t)(s[2] + (d[bi] * ia + 127) / 255); d[3] = (uint8_t)(s[3] + (d[3] * ia + 127) / 255);
        } else {
            float col[4] = {s[3] ? s[0] / (float)s[3] : 0, s[3] ? s[1] / (float)s[3] : 0, s[3] ? s[2] / (float)s[3] : 0, s[3] / 255.0f};
            blend_px(x, xx, y, col, 1);
        }
    }
}
void H_CGContextDrawImage(CPU *c) { Ctx *x = CX(ARG(0)); Img *im = hostdata(LD32(c->r[13] + 4)); if (x && im) draw_image(x, im, ARGF(1), ARGF(2), ARGF(3), U2F(LD32(c->r[13]))); }
void H_CGImageGetWidth(CPU *c) { Img *im = ARG(0) ? hostdata(ARG(0)) : NULL; RET(im ? im->w : 0); }
void H_CGImageGetHeight(CPU *c) { Img *im = ARG(0) ? hostdata(ARG(0)) : NULL; RET(im ? im->h : 0); }
void H_CGImageRelease(CPU *c) { if (ARG(0)) rt_release(c, ARG(0)); }
void H_CGImageRetain(CPU *c) { RET(rt_retain(c, ARG(0))); }
void H_CGImageCreateWithImageInRect(CPU *c) {
    Img *im = hostdata(ARG(0)); if (!im) { RET(0); return; }
    int rx = (int)floorf(ARGF(1)), ry = (int)floorf(ARGF(2)), rw = (int)ceilf(ARGF(3)), rh = (int)ceilf(U2F(LD32(c->r[13])));
    if (rx < 0) { rw += rx; rx = 0; } if (ry < 0) { rh += ry; ry = 0; }
    if (rx + rw > (int)im->w) rw = (int)im->w - rx; if (ry + rh > (int)im->h) rh = (int)im->h - ry;
    if (rw <= 0 || rh <= 0) { RET(0); return; }
    uint8_t *px = malloc((size_t)rw * rh * 4);
    for (int y = 0; y < rh; y++) memcpy(px + (size_t)y * rw * 4, im->px + ((size_t)(ry + y) * im->w + (size_t)rx) * 4, (size_t)rw * 4);
    RET(image_new((uint32_t)rw, (uint32_t)rh, px));
}
/* PNG via data provider: sequential callbacks {version, getBytes, skipForward, rewind, releaseInfo} */
typedef struct { gptr info; gptr cb[5]; } Prov;
void H_CGDataProviderCreateSequential(CPU *c) {
    gptr o = objc_alloc_instance(cls_CGDataProvider, 0); Prov *p = hostdata_ensure(o, sizeof(Prov), NULL);
    p->info = ARG(0); for (int i = 0; i < 5; i++) p->cb[i] = LD32(ARG(1) + 4 * i);
    RET(o);
}
void H_CGDataProviderRelease(CPU *c) {
    Prov *p = ARG(0) ? hostdata(ARG(0)) : NULL;
    if (p && p->cb[4]) guest_call1(c, p->cb[4], p->info);
    if (ARG(0)) rt_release(c, ARG(0));
}
void H_CGImageCreateWithPNGDataProvider(CPU *c) {
    Prov *p = hostdata(ARG(0)); if (!p) { RET(0); return; }
    /* drain the sequential provider */
    uint32_t cap = 65536, n = 0; uint8_t *buf = malloc(cap);
    gptr tmp = gmalloc(16384);
    for (;;) {
        uint32_t got = guest_call3(c, p->cb[1], p->info, tmp, 16384);
        if (!got || got > 16384) break;
        if (n + got > cap) { cap = (n + got) * 2; buf = realloc(buf, cap); }
        memcpy(buf + n, G2H(tmp), got); n += got;
    }
    gfree(tmp);
    int w, h, comp;
    uint8_t *px = stbi_load_from_memory(buf, (int)n, &w, &h, &comp, 4);
    free(buf);
    if (!px) { rt_log("PNG decode failed: %s", stbi_failure_reason()); RET(0); return; }
    /* CoreGraphics images draw premultiplied into contexts: premultiply once here */
    for (size_t i = 0; i < (size_t)w * h; i++) { uint8_t *q = px + 4 * i; if (q[3] != 255) { q[0] = (uint8_t)((q[0] * q[3] + 127) / 255); q[1] = (uint8_t)((q[1] * q[3] + 127) / 255); q[2] = (uint8_t)((q[2] * q[3] + 127) / 255); } }
    uint8_t *own = malloc((size_t)w * h * 4); memcpy(own, px, (size_t)w * h * 4); stbi_image_free(px);
    RET(image_new((uint32_t)w, (uint32_t)h, own));
}
/* CGPath objects */
static void pa_dtor(void *p) { path_free(p); }
void H_CGPathCreateMutable(CPU *c) { gptr o = objc_alloc_instance(cls_CGPath, 0); hostdata_ensure(o, sizeof(Path), pa_dtor); RET(o); }
void H_CGPathRelease(CPU *c) { if (ARG(0)) rt_release(c, ARG(0)); }
void H_CGPathMoveToPoint(CPU *c) { path_move(hostdata(ARG(0)), ARGF(2), ARGF(3)); }
void H_CGPathAddLineToPoint(CPU *c) { path_line(hostdata(ARG(0)), ARGF(2), ARGF(3)); }
void H_CGPathCloseSubpath(CPU *c) { Path *p = hostdata(ARG(0)); if (p->nsub) p->closed[p->nsub - 1] = true; }
void H_CGPathAddArcToPoint(CPU *c) { gptr sp = c->r[13]; path_arcto(hostdata(ARG(0)), ARGF(2), ARGF(3), U2F(LD32(sp)), U2F(LD32(sp + 4)), U2F(LD32(sp + 8))); }
void H_CGPathAddCurveToPoint(CPU *c) { gptr sp = c->r[13]; path_curve(hostdata(ARG(0)), ARGF(2), ARGF(3), U2F(LD32(sp)), U2F(LD32(sp + 4)), U2F(LD32(sp + 8)), U2F(LD32(sp + 12))); }

/* CGRect / CGAffineTransform helpers (CGRect by value: 4 words; struct returns > 4 bytes via sret) */
static float rf(CPU *c, int i) { return U2F(rt_arg(c, i)); }
void H_CGRectGetMinX(CPU *c) { float w = rf(c, 2); RETF(w < 0 ? rf(c, 0) + w : rf(c, 0)); }
void H_CGRectGetMinY(CPU *c) { float h = rf(c, 3); RETF(h < 0 ? rf(c, 1) + h : rf(c, 1)); }
void H_CGRectGetMaxX(CPU *c) { float w = rf(c, 2); RETF(w < 0 ? rf(c, 0) : rf(c, 0) + w); }
void H_CGRectGetMaxY(CPU *c) { float h = rf(c, 3); RETF(h < 0 ? rf(c, 1) : rf(c, 1) + h); }
void H_CGRectGetMidX(CPU *c) { RETF(rf(c, 0) + rf(c, 2) / 2); }
void H_CGRectGetMidY(CPU *c) { RETF(rf(c, 1) + rf(c, 3) / 2); }
void H_CGRectGetWidth(CPU *c) { RETF(fabsf(rf(c, 2))); }
void H_CGRectGetHeight(CPU *c) { RETF(fabsf(rf(c, 3))); }
void H_CGRectIsEmpty(CPU *c) { RET(rf(c, 2) == 0 || rf(c, 3) == 0); }
void H_CGRectEqualToRect(CPU *c) { RET(rf(c, 0) == rf(c, 4) && rf(c, 1) == rf(c, 5) && rf(c, 2) == rf(c, 6) && rf(c, 3) == rf(c, 7)); }
void H_CGRectInset(CPU *c) { gptr r = ARG(0); float dx = rf(c, 5), dy = rf(c, 6); ST32(r, F2U(rf(c, 1) + dx)); ST32(r + 4, F2U(rf(c, 2) + dy)); ST32(r + 8, F2U(rf(c, 3) - 2 * dx)); ST32(r + 12, F2U(rf(c, 4) - 2 * dy)); }
void H_CGRectIntegral(CPU *c) { gptr r = ARG(0); float x = floorf(rf(c, 1)), y = floorf(rf(c, 2)), x2 = ceilf(rf(c, 1) + rf(c, 3)), y2 = ceilf(rf(c, 2) + rf(c, 4)); ST32(r, F2U(x)); ST32(r + 4, F2U(y)); ST32(r + 8, F2U(x2 - x)); ST32(r + 12, F2U(y2 - y)); }
static void ret_aff(gptr r, Aff a) { ST32(r, F2U(a.a)); ST32(r + 4, F2U(a.b)); ST32(r + 8, F2U(a.c)); ST32(r + 12, F2U(a.d)); ST32(r + 16, F2U(a.tx)); ST32(r + 20, F2U(a.ty)); }
void H_CGAffineTransformMakeScale(CPU *c) { Aff a = {rf(c, 1), 0, 0, rf(c, 2), 0, 0}; ret_aff(ARG(0), a); }
void H_CGAffineTransformMakeRotation(CPU *c) { float t = rf(c, 1); Aff a = {cosf(t), sinf(t), -sinf(t), cosf(t), 0, 0}; ret_aff(ARG(0), a); }
void H_CGAffineTransformScale(CPU *c) { Aff m = {rf(c, 1), rf(c, 2), rf(c, 3), rf(c, 4), rf(c, 5), rf(c, 6)}; Aff s = {rf(c, 7), 0, 0, rf(c, 8), 0, 0}; ret_aff(ARG(0), aff_mul(s, m)); }

/* ------------------------------------------------------------------ UIGraphics context stack */
static gptr gstack[16]; static int ngstack;
void H_UIGraphicsPushContext(CPU *c) { if (ngstack < 16) gstack[ngstack++] = ARG(0); }
void H_UIGraphicsPopContext(CPU *c) { UNUSED(c); if (ngstack) ngstack--; }
void H_UIGraphicsGetCurrentContext(CPU *c) { RET(ngstack ? gstack[ngstack - 1] : 0); }
extern float dev_scale;
void H_UIGraphicsBeginImageContextWithOptions(CPU *c) {
    float sc = ARGF(3); if (sc == 0) sc = dev_scale;
    uint32_t w = (uint32_t)(ARGF(0) * sc), h = (uint32_t)(ARGF(1) * sc);
    gptr ctx = ctx_new(0, w, h, 8, w * 4, 1 /* premultiplied last */);
    Ctx *x = CX(ctx);
    /* UIKit image contexts are flipped (origin top-left) and scaled */
    Aff t = {sc, 0, 0, -sc, 0, (float)h}; x->gs.ctm = t;
    if (ngstack < 16) gstack[ngstack++] = ctx;
}
void H_UIGraphicsGetImageFromCurrentImageContext(CPU *c) {
    if (!ngstack) { RET(0); return; }
    CPU t = *c; t.r[0] = gstack[ngstack - 1]; H_CGBitmapContextCreateImage(&t);
    gptr img = t.r[0];
    gptr ui = objc_alloc_instance(objc_class_named("UIImage"), 0);
    gptr *slot = hostdata_ensure(ui, 256 + 4, NULL); slot[64] = img;
    RET(objc_autorelease_(ui));
}
void H_UIGraphicsEndImageContext(CPU *c) { if (ngstack) rt_release(c, gstack[--ngstack]); }
void H_UIImageJPEGRepresentation(CPU *c) { rt_log("UIImageJPEGRepresentation: JPEG encoding not available"); RET(0); }

/* ------------------------------------------------------------------ UIFont + NSString drawing */
typedef struct { float size; int bold; char name[64]; } Font;
static gptr font_new(float size, int bold, const char *name) { gptr o = objc_alloc_instance(cls_UIFont, 0); Font *f = hostdata_ensure(o, sizeof(Font), NULL); f->size = size; f->bold = bold; snprintf(f->name, sizeof f->name, "%s", name); return objc_autorelease_(o); }
static void uf_system(CPU *c) { RET(font_new(ARGF(2), 0, "system")); }
static void uf_bold(CPU *c) { RET(font_new(ARGF(2), 1, "system")); }
static void uf_named(CPU *c) { const char *n = nsstr_cstr(ARG(2)); RET(font_new(ARGF(3), strstr(n, "Bold") != NULL, n)); }
static void uf_systemFontSize(CPU *c) { RETF(14.0f); }
static void uf_withSize(CPU *c) { Font *f = hostdata(SELF); RET(font_new(ARGF(2), f ? f->bold : 0, f ? f->name : "system")); }
static void uf_pointSize(CPU *c) { Font *f = hostdata(SELF); RETF(f ? f->size : 14); }
static void uf_metric(CPU *c, int which) { Font *f = hostdata(SELF); float a, d, l; host_text_font_metrics(f->name, f->size, f->bold, &a, &d, &l); RETF(which == 0 ? a : which == 1 ? -d : which == 2 ? l : f->size * 0.7f); }
static void uf_ascender(CPU *c) { uf_metric(c, 0); }
static void uf_descender(CPU *c) { uf_metric(c, 1); }
static void uf_lineHeight(CPU *c) { uf_metric(c, 2); }
static void uf_capHeight(CPU *c) { uf_metric(c, 3); }
static void uf_fontName(CPU *c) { Font *f = hostdata(SELF); RET(nsstr(f && strcmp(f->name, "system") ? f->name : (f && f->bold ? ".SFUIText-Semibold" : ".SFUIText-Regular"))); }
static void text_size(gptr str, Font *f, float *w, float *h) {
    const char *u = nsstr_cstr(str);
    float a, d, l; host_text_font_metrics(f->name, f->size, f->bold, &a, &d, &l);
    *w = host_text_measure(f->name, f->size, f->bold, u);
    *h = ceilf(l);
}
/* -[NSString sizeWithFont:] -> CGSize via stret: r0 = result, r1 = self, r2 = _cmd, r3 = font */
static void ns_sizeWithFont(CPU *c) {
    Font *f = hostdata(ARG(3)); float w = 0, h = 0;
    if (f) text_size(ARG(1), f, &w, &h);
    ST32(ARG(0), F2U(ceilf(w))); ST32(ARG(0) + 4, F2U(h));
}
static void draw_text(CPU *c, Ctx *x, gptr str, Font *f, float px, float py) {
    UNUSED(c);
    const char *u = nsstr_cstr(str);
    float a, d, l; host_text_font_metrics(f->name, f->size, f->bold, &a, &d, &l);
    float w = host_text_measure(f->name, f->size, f->bold, u);
    /* rasterise at device scale */
    Aff m = x->gs.ctm;
    float sx = sqrtf(m.a * m.a + m.b * m.b), sy = sqrtf(m.c * m.c + m.d * m.d);
    float scale = fmaxf(sx, sy); if (scale <= 0) scale = 1;
    int W = (int)ceilf(w * scale) + 2, H = (int)ceilf(l * scale) + 2;
    if (W <= 0 || H <= 0 || W > 4096 || H > 1024) return;
    uint8_t *mask = calloc((size_t)W * H, 1);
    host_text_render(f->name, f->size * scale, f->bold, u, mask, W, H, a * scale);
    /* UIKit text drawing: (px,py) is the top-left of the line box in a flipped (UIKit) user space */
    for (int pass = 0; pass < 2; pass++) {
        if (pass == 0 && !x->gs.shadow) continue;
        const float *col = pass == 0 ? x->gs.sh_col : x->gs.fill;
        float ox = pass == 0 ? x->gs.sh_dx : 0, oy = pass == 0 ? x->gs.sh_dy : 0;
        for (int j = 0; j < H; j++) for (int i = 0; i < W; i++) {
            uint8_t cv = mask[(size_t)j * W + i]; if (!cv) continue;
            float ux = px + (i + .5f) / scale, uy = py + (j + .5f) / scale;
            float dx, dy; aff_apply(m, ux, uy, &dx, &dy);
            dx += ox; dy += oy;    /* shadow offsets are in base (device) space */
            blend_px(x, (int)floorf(dx), (int)floorf(dy), col, cv / 255.0f);
        }
    }
    free(mask);
}
/* -[NSString drawAtPoint:withFont:] -> CGSize via stret: r0 = sret, r1 = self, r2 = _cmd, r3 = x, [sp] = y, [sp+4] = font */
static void ns_drawAtPoint(CPU *c) {
    gptr sret = ARG(0), self = ARG(1); float x = U2F(ARG(3)), y = U2F(LD32(c->r[13])); gptr font = LD32(c->r[13] + 4);
    Font *f = hostdata(font); float w = 0, h = 0;
    if (f) { text_size(self, f, &w, &h); if (ngstack) draw_text(c, CX(gstack[ngstack - 1]), self, f, x, y); }
    ST32(sret, F2U(ceilf(w))); ST32(sret + 4, F2U(h));
}

void cg_init(void) {
    cls_CGContext = host_class("__CGContext", "NSObject", 4);
    cls_CGImage = host_class("__CGImage", "NSObject", 4);
    cls_CGColorSpace = host_class("__CGColorSpace", "NSObject", 4);
    cls_CGColor = host_class("__CGColor", "NSObject", 4);
    cls_CGPath = host_class("__CGPath", "NSObject", 4);
    cls_CGGradient = host_class("__CGGradient", "NSObject", 4);
    cls_CGDataProvider = host_class("__CGDataProvider", "NSObject", 4);
    cls_UIFont = host_class("UIFont", "NSObject", 4);
    host_cmethod(cls_UIFont, "systemFontOfSize:", "", uf_system); host_cmethod(cls_UIFont, "boldSystemFontOfSize:", "", uf_bold);
    host_cmethod(cls_UIFont, "fontWithName:size:", "", uf_named); host_cmethod(cls_UIFont, "systemFontSize", "", uf_systemFontSize);
    host_method(cls_UIFont, "fontWithSize:", "", uf_withSize); host_method(cls_UIFont, "pointSize", "", uf_pointSize);
    host_method(cls_UIFont, "ascender", "", uf_ascender); host_method(cls_UIFont, "descender", "", uf_descender);
    host_method(cls_UIFont, "lineHeight", "", uf_lineHeight); host_method(cls_UIFont, "capHeight", "", uf_capHeight);
    host_method(cls_UIFont, "fontName", "", uf_fontName); host_method(cls_UIFont, "familyName", "", uf_fontName);
    gptr S = objc_class_named("NSString");
    host_method(S, "sizeWithFont:", "", ns_sizeWithFont); host_method(S, "drawAtPoint:withFont:", "", ns_drawAtPoint);
}

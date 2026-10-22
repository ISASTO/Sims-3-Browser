/* pvrtc.c — PVRTC1 (2 and 4 bits per pixel) decoder.  The game ships PowerVR-compressed textures
 * (GL_COMPRESSED_*_PVRTC_*BPPV1_IMG, 0x8C00-0x8C03); WebGL does not offer PVRTC outside iOS Safari, so the
 * HLE glCompressedTexImage2D decodes them to RGBA8 and uploads that instead.
 *
 * Format (PowerVR texture compression, version 1): the image is split into 4x4 (4bpp) or 8x4 (2bpp) blocks
 * stored in Morton order; each 64-bit block holds 32 bits of per-texel modulation and two low-resolution colours
 * A and B (RGB555/ARGB3444).  The A and B images are bilinearly upscaled with block colours positioned at block
 * centres, and every texel blends A and B by its modulation weight. */
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

typedef struct { int r, g, b, a; } Col;   /* r,g,b 5-bit, a 4-bit */

static Col color_a(uint32_t w) {
    Col c;
    if (w & 0x8000) { c.r = (w >> 10) & 31; c.g = (w >> 5) & 31; c.b = (w & 0x1e) | ((w & 0x1e) >> 4); c.a = 15; }
    else { c.r = ((w >> 7) & 0x1e) | ((w >> 11) & 1); c.g = ((w >> 3) & 0x1e) | ((w >> 7) & 1); c.b = ((w << 1) & 0x1c) | ((w >> 2) & 3); c.a = (w >> 11) & 0xe; }
    return c;
}
static Col color_b(uint32_t w) {
    Col c;
    if (w & 0x80000000u) { c.r = (w >> 26) & 31; c.g = (w >> 21) & 31; c.b = (w >> 16) & 31; c.a = 15; }
    else { c.r = ((w >> 23) & 0x1e) | ((w >> 27) & 1); c.g = ((w >> 19) & 0x1e) | ((w >> 23) & 1); c.b = ((w >> 15) & 0x1e) | ((w >> 19) & 1); c.a = (w >> 27) & 0xe; }
    return c;
}
/* Morton index of block (x, y) in a bw x bh block grid (PowerVR twiddling: y in the low bit) */
static uint32_t twiddle(uint32_t bw, uint32_t bh, uint32_t x, uint32_t y) {
    uint32_t minax = bw < bh ? bw : bh, maxv = bw < bh ? y : x, minv = bw < bh ? x : y;
    /* the coordinate along the shorter axis supplies the low bit of each pair */
    uint32_t r = 0, src = 1, dst = 1; int shift = 0;
    if (bw >= bh) { minv = y; maxv = x; } else { minv = x; maxv = y; }
    while (src < minax) {
        if (minv & src) r |= dst;
        if (maxv & src) r |= dst << 1;
        src <<= 1; dst <<= 2; shift++;
    }
    return r | ((maxv >> shift) << (2 * shift));
}

/* Decode a w x h PVRTC1 image (power-of-two dimensions) into RGBA8. */
void pvrtc_decode(const uint8_t *src, int w, int h, int bpp2, uint8_t *out) {
    const int bw = bpp2 ? 8 : 4, bh = 4;
    int nx = w / bw, ny = h / bh;
    if (nx < 2) nx = 2;
    if (ny < 2) ny = 2;
    const int W = nx * bw, H = ny * bh;   /* decode at the padded block size, then crop */
    uint32_t *mod = malloc((size_t)nx * ny * 4), *col = malloc((size_t)nx * ny * 4);
    for (int by = 0; by < ny; by++) for (int bx = 0; bx < nx; bx++) {
        uint32_t k = twiddle((uint32_t)nx, (uint32_t)ny, (uint32_t)bx, (uint32_t)by);
        uint32_t m, cw; memcpy(&m, src + 8 * k, 4); memcpy(&cw, src + 8 * k + 4, 4);
        mod[by * nx + bx] = m; col[by * nx + bx] = cw;
    }
    /* per-texel modulation weight (0..8) and punch-through flag, from the texel's own block */
    uint8_t *wt = malloc((size_t)W * H);
    uint8_t *pt = calloc((size_t)W * H, 1);
    for (int by = 0; by < ny; by++) for (int bx = 0; bx < nx; bx++) {
        uint32_t m = mod[by * nx + bx], cw = col[by * nx + bx];
        int mode = cw & 1;
        if (bpp2 && mode) {
            /* texel 0's low bit (and texel 10's low bit) select the interpolation mode; the texel values then
             * use their high bit for both bits */
            if (m & 1) m = (m & (1u << 21)) ? (m | (1u << 20)) : (m & ~(1u << 20));
            m = (m & 2) ? (m | 1) : (m & ~1u);
        }
        for (int y = 0; y < bh; y++) for (int x = 0; x < bw; x++) {
            int X = bx * bw + x, Y = by * bh + y, v;
            if (!bpp2) {
                int q = (m >> (2 * (y * 4 + x))) & 3;
                if (!mode) v = q == 0 ? 0 : q == 1 ? 3 : q == 2 ? 5 : 8;
                else { v = q == 0 ? 0 : q == 3 ? 8 : 4; if (q == 2) pt[Y * W + X] = 1; }
            } else if (!mode) {
                v = (m >> (y * 8 + x)) & 1 ? 8 : 0;      /* 1 bit per texel */
            } else {
                /* 2-bit values stored for the checkerboard texels ((x ^ y) & 1) == 0; the others are
                 * interpolated (marked here with 0xff and filled in below) */
                if (((x ^ y) & 1) == 0) {
                    int q = (m >> (2 * ((y * 8 + x) >> 1))) & 3;
                    v = q == 0 ? 0 : q == 1 ? 3 : q == 2 ? 5 : 8;
                } else v = 0xff;
            }
            wt[Y * W + X] = (uint8_t)v;
        }
    }
    if (bpp2) {
        /* fill the interpolated texels of 2bpp mode-1 blocks: the block's modulation bits 0 (texel 0) and 20
         * (texel 10) select horizontal, vertical or both-neighbour averaging */
        for (int by = 0; by < ny; by++) for (int bx = 0; bx < nx; bx++) {
            uint32_t m = mod[by * nx + bx], cw = col[by * nx + bx];
            if (!(cw & 1)) continue;
            int sel = (m & 1) ? ((m >> 20) & 1 ? 2 : 1) : 0;   /* 0: average of 4, 1: horizontal, 2: vertical */
            for (int y = 0; y < bh; y++) for (int x = 0; x < bw; x++) {
                if (((x ^ y) & 1) == 0) continue;
                int X = bx * bw + x, Y = by * bh + y;
                int l = wt[Y * W + (X + W - 1) % W], r = wt[Y * W + (X + 1) % W];
                int u = wt[((Y + H - 1) % H) * W + X], d = wt[((Y + 1) % H) * W + X];
                if (l == 0xff) l = 4; if (r == 0xff) r = 4; if (u == 0xff) u = 4; if (d == 0xff) d = 4;
                int v = sel == 1 ? (l + r + 1) / 2 : sel == 2 ? (u + d + 1) / 2 : (l + r + u + d + 2) / 4;
                wt[Y * W + X] = (uint8_t)v;
            }
        }
    }
    /* bilinear upscale of colours A and B: block (bx, by)'s colours sit at texel (bx*bw + bw/2, by*bh + bh/2) */
    for (int Y = 0; Y < H; Y++) {
        int fy = Y - bh / 2; int by0 = (fy < 0 ? fy - bh + 1 : fy) / bh; int ty = fy - by0 * bh;   /* 0..bh-1 */
        int by1 = by0 + 1; by0 = (by0 + ny) % ny; by1 %= ny;
        for (int X = 0; X < W; X++) {
            int fx = X - bw / 2; int bx0 = (fx < 0 ? fx - bw + 1 : fx) / bw; int tx = fx - bx0 * bw;
            int bx1 = bx0 + 1; bx0 = (bx0 + nx) % nx; bx1 %= nx;
            uint32_t cP = col[by0 * nx + bx0], cQ = col[by0 * nx + bx1], cR = col[by1 * nx + bx0], cS = col[by1 * nx + bx1];
            int wP = (bw - tx) * (bh - ty), wQ = tx * (bh - ty), wR = (bw - tx) * ty, wS = tx * ty;   /* sum = bw*bh */
            Col aP = color_a(cP), aQ = color_a(cQ), aR = color_a(cR), aS = color_a(cS);
            Col bP = color_b(cP), bQ = color_b(cQ), bR = color_b(cR), bS = color_b(cS);
            int den = bw * bh;
            int ar = aP.r * wP + aQ.r * wQ + aR.r * wR + aS.r * wS, ag = aP.g * wP + aQ.g * wQ + aR.g * wR + aS.g * wS;
            int ab = aP.b * wP + aQ.b * wQ + aR.b * wR + aS.b * wS, aa = aP.a * wP + aQ.a * wQ + aR.a * wR + aS.a * wS;
            int br = bP.r * wP + bQ.r * wQ + bR.r * wR + bS.r * wS, bg = bP.g * wP + bQ.g * wQ + bR.g * wR + bS.g * wS;
            int bb = bP.b * wP + bQ.b * wQ + bR.b * wR + bS.b * wS, ba = bP.a * wP + bQ.a * wQ + bR.a * wR + bS.a * wS;
            int m = wt[Y * W + X];
            /* blend in 5/4-bit units scaled by den*8, then expand to 8 bits */
            int r = ar * (8 - m) + br * m, g = ag * (8 - m) + bg * m, b = ab * (8 - m) + bb * m, a = aa * (8 - m) + ba * m;
            int s5 = den * 8 * 31, s4 = den * 8 * 15;
            if (X < w && Y < h) {
                uint8_t *o = out + 4 * ((size_t)Y * w + X);
                o[0] = (uint8_t)((r * 255 + s5 / 2) / s5); o[1] = (uint8_t)((g * 255 + s5 / 2) / s5); o[2] = (uint8_t)((b * 255 + s5 / 2) / s5);
                o[3] = pt[Y * W + X] ? 0 : (uint8_t)((a * 255 + s4 / 2) / s4);
            }
        }
    }
    free(mod); free(col); free(wt); free(pt);
}

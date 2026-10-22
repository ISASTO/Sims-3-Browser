/* aac.c — MPEG-4 AAC-LC decoder (ISO/IEC 14496-3, subpart 4) for the AudioQueue implementation.
 *
 * On iOS, AudioQueue decodes compressed packets itself (AudioToolbox's AAC decoder); the game only enqueues raw AAC
 * packets read with AudioFileReadPackets. This file is the runtime's equivalent of that decoder, so the browser host
 * receives PCM and does not depend on the browser having an AAC codec.
 *
 * Supported: AAC-LC (object type 2), 1024-sample frames, SCE/CPE/LFE elements, M/S and intensity stereo, perceptual
 * noise substitution, pulse data, TNS, sine and KBD windows, all four window sequences. Not supported (rejected
 * with an error rather than decoded approximately): AAC Main prediction, SSR gain control, coupling channel elements,
 * 960-sample frames, SBR/PS (HE-AAC; those are separate object types and are rejected at open).
 * Validation: tools/aac_test.c decodes the game's CAF files and compares the PCM with FFmpeg's decoder.
 */
#include "aac.h"
#include "aac_tables.h"
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

enum { ONLY_LONG = 0, LONG_START = 1, EIGHT_SHORT = 2, LONG_STOP = 3 };
enum { ZERO_HCB = 0, ESC_HCB = 11, NOISE_HCB = 13, INTENSITY_HCB2 = 14, INTENSITY_HCB = 15 };
enum { ID_SCE = 0, ID_CPE = 1, ID_CCE = 2, ID_LFE = 3, ID_DSE = 4, ID_PCE = 5, ID_FIL = 6, ID_END = 7 };

static const uint32_t sample_rates[13] = { 96000, 88200, 64000, 48000, 44100, 32000, 24000, 22050, 16000, 12000, 11025, 8000, 7350 };

/* ------------------------------------------------------------------------------------------------ bit reader */
typedef struct { const uint8_t *p; uint32_t nbits, pos; bool err; } Bits;
static inline uint32_t gb1(Bits *b) {
    if (b->pos >= b->nbits) { b->err = true; return 0; }
    uint32_t v = (b->p[b->pos >> 3] >> (7 - (b->pos & 7))) & 1;
    b->pos++;
    return v;
}
static inline uint32_t gb(Bits *b, int n) {
    uint32_t v = 0;
    while (n--) v = (v << 1) | gb1(b);
    return v;
}
static inline void balign(Bits *b) { b->pos = (b->pos + 7) & ~7u; }

/* ------------------------------------------------------------------------------------------------ static tables */
typedef int16_t Node[2];
static Node sf_tree[2 * 121];
static Node spec_tree[11][2 * 289];
static float pow43[8192];
static float sine_long[1024], kbd_long[1024], sine_short[128], kbd_short[128];
typedef struct { int n; float *cr, *ci; uint16_t *rev; } FFT;
static FFT fft512, fft64;
static float *tw_pre_long_r, *tw_pre_long_i, *tw_post_long_r, *tw_post_long_i;
static float *tw_pre_short_r, *tw_pre_short_i, *tw_post_short_r, *tw_post_short_i;
static bool tables_ready;

static void huff_build(Node *t, const uint32_t *c32, const uint16_t *c16, const uint8_t *bits, int n) {
    int nodes = 1;
    t[0][0] = t[0][1] = 0;   /* 0 = no child (the root is never a child) */
    for (int s = 0; s < n; s++) {
        uint32_t code = c32 ? c32[s] : c16[s];
        int node = 0;
        for (int i = bits[s] - 1; i >= 0; i--) {
            int bit = (code >> i) & 1;
            if (i == 0) t[node][bit] = (int16_t)-(s + 1);
            else {
                if (!t[node][bit]) { t[nodes][0] = t[nodes][1] = 0; t[node][bit] = (int16_t)nodes++; }
                node = t[node][bit];
            }
        }
    }
}
static int huff_dec(Bits *b, const Node *t) {
    int node = 0;
    for (;;) {
        int nx = t[node][gb1(b)];
        if (nx < 0) return -nx - 1;
        if (nx == 0 || b->err) { b->err = true; return 0; }
        node = nx;
    }
}
static void kbd_init(float *w, double alpha, int n) {   /* rising half (n values) of the Kaiser-Bessel-derived window */
    double sum = 0, *acc = malloc(sizeof(double) * n);
    double a2 = (alpha * M_PI / n) * (alpha * M_PI / n);
    for (int i = 0; i < n; i++) {
        double t = i * (double)(n - i) * a2, bessel = 1.0;   /* I0 by its power series */
        for (int j = 50; j > 0; j--) bessel = bessel * t / ((double)j * j) + 1;
        sum += bessel;
        acc[i] = sum;
    }
    sum += 1;   /* the Kaiser window's last point (i = n) is I0(0) = 1 */
    for (int i = 0; i < n; i++) w[i] = (float)sqrt(acc[i] / sum);
    free(acc);
}
static void fft_init(FFT *f, int n) {
    f->n = n;
    f->cr = malloc(sizeof(float) * n / 2); f->ci = malloc(sizeof(float) * n / 2); f->rev = malloc(sizeof(uint16_t) * n);
    for (int i = 0; i < n / 2; i++) { f->cr[i] = (float)cos(-2 * M_PI * i / n); f->ci[i] = (float)sin(-2 * M_PI * i / n); }
    int lg = 0; while ((1 << lg) < n) lg++;
    for (int i = 0; i < n; i++) { int r = 0; for (int k = 0; k < lg; k++) if (i & (1 << k)) r |= 1 << (lg - 1 - k); f->rev[i] = (uint16_t)r; }
}
static void fft_run(const FFT *f, float *re, float *im) {   /* in-place forward DFT, exp(-2*pi*i*n*k/N) */
    int n = f->n;
    for (int i = 0; i < n; i++) { int r = f->rev[i]; if (r > i) { float t = re[i]; re[i] = re[r]; re[r] = t; t = im[i]; im[i] = im[r]; im[r] = t; } }
    for (int len = 2; len <= n; len <<= 1) {
        int half = len >> 1, step = n / len;
        for (int s = 0; s < n; s += len)
            for (int j = 0; j < half; j++) {
                float wr = f->cr[j * step], wi = f->ci[j * step];
                int a = s + j, b = a + half;
                float xr = re[b] * wr - im[b] * wi, xi = re[b] * wi + im[b] * wr;
                re[b] = re[a] - xr; im[b] = im[a] - xi;
                re[a] += xr; im[a] += xi;
            }
    }
}
static void twiddles(int m, float **pr, float **pi, float **qr, float **qi) {
    int h = m / 2;
    *pr = malloc(sizeof(float) * h); *pi = malloc(sizeof(float) * h); *qr = malloc(sizeof(float) * h); *qi = malloc(sizeof(float) * h);
    for (int k = 0; k < h; k++) {
        double a = -M_PI * (4 * k + 1) / (4.0 * m), b = -M_PI * k / (double)m;
        (*pr)[k] = (float)cos(a); (*pi)[k] = (float)sin(a); (*qr)[k] = (float)cos(b); (*qi)[k] = (float)sin(b);
    }
}
static void tables_init(void) {
    if (tables_ready) return;
    huff_build(sf_tree, aac_sf_code, NULL, aac_sf_bits, 121);
    for (int i = 0; i < 11; i++) huff_build(spec_tree[i], NULL, aac_spec_codes[i], aac_spec_bits[i], aac_spec_sizes[i]);
    for (int i = 0; i < 8192; i++) pow43[i] = (float)pow(i, 4.0 / 3.0);
    for (int i = 0; i < 1024; i++) sine_long[i] = (float)sin(M_PI / 2048 * (i + 0.5));
    for (int i = 0; i < 128; i++) sine_short[i] = (float)sin(M_PI / 256 * (i + 0.5));
    kbd_init(kbd_long, 4.0, 1024);
    kbd_init(kbd_short, 6.0, 128);
    fft_init(&fft512, 512); fft_init(&fft64, 64);
    twiddles(1024, &tw_pre_long_r, &tw_pre_long_i, &tw_post_long_r, &tw_post_long_i);
    twiddles(128, &tw_pre_short_r, &tw_pre_short_i, &tw_post_short_r, &tw_post_short_i);
    tables_ready = true;
}

/* IMDCT (4.6.11.3.1): y[n] = 2/N * sum_k X[k] cos(2*pi/N (n + n0)(k + 1/2)), N = 2M, n0 = (M + 1)/2.
   Computed as a DCT-IV of length M (through an M/2-point complex FFT) and the DCT-IV's symmetries. */
static void imdct(const float *X, int m, float *y) {
    float re[512], im[512], u[1024];
    int h = m / 2;
    const FFT *f = m == 1024 ? &fft512 : &fft64;
    const float *pr = m == 1024 ? tw_pre_long_r : tw_pre_short_r, *pi = m == 1024 ? tw_pre_long_i : tw_pre_short_i;
    const float *qr = m == 1024 ? tw_post_long_r : tw_post_short_r, *qi = m == 1024 ? tw_post_long_i : tw_post_short_i;
    for (int k = 0; k < h; k++) {
        float a = X[2 * k], b = X[m - 1 - 2 * k];
        re[k] = a * pr[k] - b * pi[k]; im[k] = a * pi[k] + b * pr[k];
    }
    fft_run(f, re, im);
    for (int k = 0; k < h; k++) {
        float r = re[k] * qr[k] - im[k] * qi[k], i = re[k] * qi[k] + im[k] * qr[k];
        u[2 * k] = r; u[m - 1 - 2 * k] = -i;
    }
    float s = 2.0f / (2 * m);
    for (int n = 0; n < h; n++) y[n] = s * u[n + h];
    for (int n = h; n < 3 * h; n++) y[n] = -s * u[3 * h - 1 - n];
    for (int n = 3 * h; n < 2 * m; n++) y[n] = -s * u[n - 3 * h];
}

/* ------------------------------------------------------------------------------------------------ decoder state */
typedef struct {
    int window_sequence, window_shape, max_sfb, num_windows, num_groups, group_len[8];
    const uint16_t *swb; int num_swb;
} Ics;
typedef struct {
    int n_filt[8], coef_res[8], length[8][4], order[8][4], dir[8][4], compress[8][4];
    uint8_t coef[8][4][32];
} Tns;
typedef struct {
    Ics ics;
    uint8_t cb[8][64];
    int sf[8][64];
    bool tns_present;
    Tns tns;
    int q[1024];
    float spec[1024];
} Chan;

struct AacDec {
    int sf_index, channels;
    float overlap[2][1024];
    int prev_shape[2];
    uint32_t rng;
    Chan ch[2];
    int ms_mask_present;
    uint8_t ms_used[8][64];
    char err[128];
};

#define FAIL(...) do { snprintf(d->err, sizeof d->err, __VA_ARGS__); return false; } while (0)

static bool read_ics_info(AacDec *d, Bits *b, Ics *ics) {
    gb(b, 1);   /* ics_reserved_bit */
    ics->window_sequence = (int)gb(b, 2);
    ics->window_shape = (int)gb(b, 1);
    ics->num_groups = 1; ics->group_len[0] = 1;
    if (ics->window_sequence == EIGHT_SHORT) {
        ics->max_sfb = (int)gb(b, 4);
        int grouping = (int)gb(b, 7);
        ics->num_windows = 8;
        for (int i = 0; i < 7; i++) {
            if (grouping & (1 << (6 - i))) ics->group_len[ics->num_groups - 1]++;
            else ics->group_len[ics->num_groups++] = 1;
        }
        ics->swb = aac_swb_128[d->sf_index]; ics->num_swb = aac_num_swb_128[d->sf_index];
    } else {
        ics->max_sfb = (int)gb(b, 6);
        ics->num_windows = 1;
        if (gb(b, 1)) FAIL("predictor_data_present set (AAC Main prediction) in an AAC-LC stream");
        ics->swb = aac_swb_1024[d->sf_index]; ics->num_swb = aac_num_swb_1024[d->sf_index];
    }
    if (ics->max_sfb > ics->num_swb) FAIL("max_sfb %d exceeds %d bands", ics->max_sfb, ics->num_swb);
    return !b->err;
}

static bool read_section_data(AacDec *d, Bits *b, Chan *c) {
    const Ics *ics = &c->ics;
    int bits = ics->window_sequence == EIGHT_SHORT ? 3 : 5, esc = (1 << bits) - 1;
    memset(c->cb, 0, sizeof c->cb);
    for (int g = 0; g < ics->num_groups; g++) {
        int k = 0;
        while (k < ics->max_sfb) {
            int cb = (int)gb(b, 4);
            if (cb == 12) FAIL("reserved section codebook 12");
            int len = 0, inc;
            while ((inc = (int)gb(b, bits)) == esc && !b->err) len += esc;
            len += inc;
            if (b->err) FAIL("truncated section data");
            if (k + len > ics->max_sfb) FAIL("section exceeds max_sfb");
            for (; len > 0; len--, k++) c->cb[g][k] = (uint8_t)cb;
        }
    }
    return true;
}

static bool read_scalefactors(AacDec *d, Bits *b, Chan *c, int global_gain) {
    const Ics *ics = &c->ics;
    int sf = global_gain, is_pos = 0, nrg = global_gain - 90;
    bool noise_first = true;
    for (int g = 0; g < ics->num_groups; g++)
        for (int k = 0; k < ics->max_sfb; k++) {
            int cb = c->cb[g][k];
            if (cb == ZERO_HCB) c->sf[g][k] = 0;
            else if (cb == INTENSITY_HCB || cb == INTENSITY_HCB2) { is_pos += huff_dec(b, sf_tree) - 60; c->sf[g][k] = is_pos; }
            else if (cb == NOISE_HCB) {
                if (noise_first) { noise_first = false; nrg += (int)gb(b, 9) - 256; }
                else nrg += huff_dec(b, sf_tree) - 60;
                c->sf[g][k] = nrg;
            } else {
                sf += huff_dec(b, sf_tree) - 60;
                if (sf < 0 || sf > 255) FAIL("scalefactor %d out of range", sf);
                c->sf[g][k] = sf;
            }
        }
    if (b->err) FAIL("truncated scalefactor data");
    return true;
}

static bool read_tns(AacDec *d, Bits *b, Chan *c) {
    bool shrt = c->ics.window_sequence == EIGHT_SHORT;
    Tns *t = &c->tns;
    for (int w = 0; w < c->ics.num_windows; w++) {
        t->n_filt[w] = (int)gb(b, shrt ? 1 : 2);
        if (!t->n_filt[w]) continue;
        t->coef_res[w] = (int)gb(b, 1);
        for (int f = 0; f < t->n_filt[w]; f++) {
            t->length[w][f] = (int)gb(b, shrt ? 4 : 6);
            t->order[w][f] = (int)gb(b, shrt ? 3 : 5);
            if (!t->order[w][f]) continue;
            t->dir[w][f] = (int)gb(b, 1);
            t->compress[w][f] = (int)gb(b, 1);
            int cbits = t->coef_res[w] + 3 - t->compress[w][f];
            for (int i = 0; i < t->order[w][f]; i++) t->coef[w][f][i] = (uint8_t)gb(b, cbits);
        }
    }
    if (b->err) FAIL("truncated TNS data");
    return true;
}

static int read_escape(Bits *b) {
    int n = 0;
    while (gb1(b)) { if (++n > 8) { b->err = true; return 0; } }
    return (1 << (n + 4)) + (int)gb(b, n + 4);
}

static bool read_spectral(AacDec *d, Bits *b, Chan *c) {
    const Ics *ics = &c->ics;
    memset(c->q, 0, sizeof c->q);
    for (int g = 0, w0 = 0; g < ics->num_groups; w0 += ics->group_len[g], g++)
        for (int k = 0; k < ics->max_sfb; k++) {
            int cb = c->cb[g][k];
            if (cb == ZERO_HCB || cb >= NOISE_HCB) continue;
            const Node *tree = spec_tree[cb - 1];
            for (int w = w0; w < w0 + ics->group_len[g]; w++) {
                int *q = c->q + w * 128;
                for (int i = ics->swb[k]; i < ics->swb[k + 1];) {
                    int idx = huff_dec(b, tree), v[4], nv;
                    if (cb <= 4) {
                        v[0] = idx / 27; v[1] = idx / 9 % 3; v[2] = idx / 3 % 3; v[3] = idx % 3; nv = 4;
                        if (cb <= 2) for (int j = 0; j < 4; j++) v[j] -= 1;
                    } else if (cb <= 6) { v[0] = idx / 9 - 4; v[1] = idx % 9 - 4; nv = 2; }
                    else { int mod = cb <= 8 ? 8 : cb <= 10 ? 13 : 17; v[0] = idx / mod; v[1] = idx % mod; nv = 2; }
                    bool unsign = cb == 3 || cb == 4 || cb >= 7;
                    if (unsign) for (int j = 0; j < nv; j++) if (v[j] && gb1(b)) v[j] = -v[j];
                    if (cb == ESC_HCB)
                        for (int j = 0; j < 2; j++) if (v[j] == 16 || v[j] == -16) { int e = read_escape(b); v[j] = v[j] < 0 ? -e : e; }
                    if (b->err) FAIL("truncated spectral data");
                    for (int j = 0; j < nv; j++) q[i + j] = v[j];
                    i += nv;
                }
            }
        }
    return true;
}

static uint32_t lcg(uint32_t *s) { *s = *s * 1664525u + 1013904223u; return *s; }

/* inverse quantization, scaling and noise substitution: q[] -> spec[] */
static void dequantize(AacDec *d, Chan *c) {
    const Ics *ics = &c->ics;
    memset(c->spec, 0, sizeof c->spec);
    for (int g = 0, w0 = 0; g < ics->num_groups; w0 += ics->group_len[g], g++)
        for (int k = 0; k < ics->max_sfb; k++) {
            int cb = c->cb[g][k], lo = ics->swb[k], hi = ics->swb[k + 1];
            if (cb == ZERO_HCB || cb == INTENSITY_HCB || cb == INTENSITY_HCB2) continue;
            for (int w = w0; w < w0 + ics->group_len[g]; w++) {
                float *s = c->spec + w * 128;
                if (cb == NOISE_HCB) {
                    float e = 0;
                    for (int i = lo; i < hi; i++) { s[i] = (float)(int32_t)lcg(&d->rng); e += s[i] * s[i]; }
                    float scale = (float)(exp2(0.25 * c->sf[g][k]) / sqrt(e > 0 ? e : 1));
                    for (int i = lo; i < hi; i++) s[i] *= scale;
                } else {
                    float scale = (float)exp2(0.25 * (c->sf[g][k] - 100));
                    const int *q = c->q + w * 128;
                    for (int i = lo; i < hi; i++) {
                        int v = q[i], a = v < 0 ? -v : v;
                        float m = a < 8192 ? pow43[a] : (float)pow(a, 4.0 / 3.0);
                        s[i] = (v < 0 ? -m : m) * scale;
                    }
                }
            }
        }
}

static bool read_ics(AacDec *d, Bits *b, Chan *c, bool common_window) {
    int global_gain = (int)gb(b, 8);
    if (!common_window && !read_ics_info(d, b, &c->ics)) return false;
    if (!read_section_data(d, b, c) || !read_scalefactors(d, b, c, global_gain)) return false;
    bool pulse = gb(b, 1);
    int npulse = 0, poff[4], pamp[4];
    if (pulse) {
        if (c->ics.window_sequence == EIGHT_SHORT) FAIL("pulse data in a short-window frame");
        npulse = (int)gb(b, 2) + 1;
        int start = (int)gb(b, 6);
        if (start > c->ics.num_swb) FAIL("pulse_start_sfb out of range");
        int k = c->ics.swb[start];
        for (int i = 0; i < npulse; i++) { k += (int)gb(b, 5); poff[i] = k; pamp[i] = (int)gb(b, 4); if (k >= 1024) FAIL("pulse offset out of range"); }
    }
    c->tns_present = gb(b, 1);
    if (c->tns_present && !read_tns(d, b, c)) return false;
    if (gb(b, 1)) FAIL("gain_control_data_present (AAC SSR) in an AAC-LC stream");
    if (!read_spectral(d, b, c)) return false;
    for (int i = 0; i < npulse; i++) c->q[poff[i]] += c->q[poff[i]] > 0 ? pamp[i] : -pamp[i];
    dequantize(d, c);
    return !b->err;
}

static void apply_ms(AacDec *d, Chan *l, Chan *r) {
    const Ics *ics = &l->ics;
    for (int g = 0, w0 = 0; g < ics->num_groups; w0 += ics->group_len[g], g++)
        for (int k = 0; k < ics->max_sfb; k++) {
            if (!d->ms_used[g][k] || l->cb[g][k] >= NOISE_HCB || r->cb[g][k] >= NOISE_HCB) continue;
            for (int w = w0; w < w0 + ics->group_len[g]; w++) {
                float *a = l->spec + w * 128, *b = r->spec + w * 128;
                for (int i = ics->swb[k]; i < ics->swb[k + 1]; i++) { float m = a[i], s = b[i]; a[i] = m + s; b[i] = m - s; }
            }
        }
}
static void apply_intensity(AacDec *d, Chan *l, Chan *r) {
    const Ics *ics = &r->ics;
    for (int g = 0, w0 = 0; g < ics->num_groups; w0 += ics->group_len[g], g++)
        for (int k = 0; k < ics->max_sfb; k++) {
            int cb = r->cb[g][k];
            if (cb != INTENSITY_HCB && cb != INTENSITY_HCB2) continue;
            float c = cb == INTENSITY_HCB ? 1.0f : -1.0f;
            if (d->ms_mask_present && d->ms_used[g][k]) c = -c;
            float scale = c * (float)exp2(-0.25 * r->sf[g][k]);
            for (int w = w0; w < w0 + ics->group_len[g]; w++) {
                const float *a = l->spec + w * 128; float *b = r->spec + w * 128;
                for (int i = ics->swb[k]; i < ics->swb[k + 1]; i++) b[i] = a[i] * scale;
            }
        }
}

/* TNS (4.6.9.3): decode the reflection coefficients to an LPC filter and run it over the spectrum */
static void apply_tns(AacDec *d, Chan *c) {
    const Ics *ics = &c->ics;
    const Tns *t = &c->tns;
    bool shrt = ics->window_sequence == EIGHT_SHORT;
    int max_order = shrt ? 7 : 12;
    int max_bands = shrt ? aac_tns_max_bands_128[d->sf_index] : aac_tns_max_bands_1024[d->sf_index];
    int lim = max_bands < ics->max_sfb ? max_bands : ics->max_sfb;
    for (int w = 0; w < ics->num_windows; w++) {
        int bottom = ics->num_swb;
        for (int f = 0; f < t->n_filt[w]; f++) {
            int top = bottom;
            bottom = top - t->length[w][f]; if (bottom < 0) bottom = 0;
            int order = t->order[w][f] < max_order ? t->order[w][f] : max_order;
            if (!order) continue;
            /* coefficients: sign-extend from the transmitted width, map through sin(), convert to direct form */
            int res = t->coef_res[w] + 3, cbits = res - t->compress[w][f];
            double iqfac = ((1 << (res - 1)) - 0.5) / (M_PI / 2.0), iqfac_m = ((1 << (res - 1)) + 0.5) / (M_PI / 2.0);
            double k2[32], a[33], tmp[33];
            for (int i = 0; i < order; i++) {
                int v = t->coef[w][f][i];
                if (v & (1 << (cbits - 1))) v -= 1 << cbits;
                k2[i] = sin(v / (v >= 0 ? iqfac : iqfac_m));
            }
            a[0] = 1;
            for (int m = 1; m <= order; m++) {
                for (int i = 1; i < m; i++) tmp[i] = a[i] + k2[m - 1] * a[m - i];
                for (int i = 1; i < m; i++) a[i] = tmp[i];
                a[m] = k2[m - 1];
            }
            int b0 = bottom < lim ? bottom : lim, t0 = top < lim ? top : lim;
            int start = ics->swb[b0], end = ics->swb[t0], size = end - start;
            if (size <= 0) continue;
            float *s = c->spec + w * 128;
            int inc = 1, pos = start;
            if (t->dir[w][f]) { inc = -1; pos = end - 1; }
            double state[32] = {0};
            for (int i = 0; i < size; i++, pos += inc) {
                double y = s[pos];
                for (int j = 0; j < order; j++) y -= a[j + 1] * state[j];
                for (int j = order - 1; j > 0; j--) state[j] = state[j - 1];
                state[0] = y;
                s[pos] = (float)y;
            }
        }
    }
}

/* filterbank: IMDCT, windowing and overlap-add -> 1024 output samples */
static void filterbank(AacDec *d, Chan *c, int ch, float *out) {
    float buf[2048], tmp[256];
    const Ics *ics = &c->ics;
    int shape = ics->window_shape, prev = d->prev_shape[ch];
    const float *lw = shape ? kbd_long : sine_long, *lw_prev = prev ? kbd_long : sine_long;
    const float *sw = shape ? kbd_short : sine_short, *sw_prev = prev ? kbd_short : sine_short;
    switch (ics->window_sequence) {
    case ONLY_LONG:
        imdct(c->spec, 1024, buf);
        for (int n = 0; n < 1024; n++) { buf[n] *= lw_prev[n]; buf[1024 + n] *= lw[1023 - n]; }
        break;
    case LONG_START:
        imdct(c->spec, 1024, buf);
        for (int n = 0; n < 1024; n++) buf[n] *= lw_prev[n];
        for (int n = 0; n < 128; n++) buf[1472 + n] *= sw[127 - n];
        for (int n = 1600; n < 2048; n++) buf[n] = 0;
        break;
    case LONG_STOP:
        imdct(c->spec, 1024, buf);
        for (int n = 0; n < 448; n++) buf[n] = 0;
        for (int n = 0; n < 128; n++) buf[448 + n] *= sw_prev[n];
        for (int n = 0; n < 1024; n++) buf[1024 + n] *= lw[1023 - n];
        break;
    default:   /* EIGHT_SHORT */
        memset(buf, 0, sizeof buf);
        for (int w = 0; w < 8; w++) {
            imdct(c->spec + w * 128, 128, tmp);
            const float *rise = w ? sw : sw_prev;
            for (int n = 0; n < 128; n++) { tmp[n] *= rise[n]; tmp[128 + n] *= sw[127 - n]; }
            for (int n = 0; n < 256; n++) buf[448 + 128 * w + n] += tmp[n];
        }
        break;
    }
    for (int n = 0; n < 1024; n++) out[n] = buf[n] + d->overlap[ch][n];
    memcpy(d->overlap[ch], buf + 1024, sizeof d->overlap[ch]);
    d->prev_shape[ch] = shape;
}

static bool skip_pce(AacDec *d, Bits *b) {
    gb(b, 4); gb(b, 2); gb(b, 4);
    int front = (int)gb(b, 4), side = (int)gb(b, 4), back = (int)gb(b, 4), lfe = (int)gb(b, 2), assoc = (int)gb(b, 3), cc = (int)gb(b, 4);
    if (gb(b, 1)) gb(b, 4);
    if (gb(b, 1)) gb(b, 4);
    if (gb(b, 1)) gb(b, 3);
    for (int i = 0; i < front + side + back; i++) gb(b, 5);
    for (int i = 0; i < lfe; i++) gb(b, 4);
    for (int i = 0; i < assoc; i++) gb(b, 4);
    for (int i = 0; i < cc; i++) gb(b, 5);
    balign(b);
    int comment = (int)gb(b, 8);
    b->pos += 8u * (uint32_t)comment;
    if (b->err || b->pos > b->nbits) FAIL("truncated program_config_element");
    return true;
}

static void silence(AacDec *d, int16_t *out) { memset(out, 0, sizeof(int16_t) * 1024 * (size_t)d->channels); }
static inline int16_t clip16(float v) {
    v = v >= 0 ? v + 0.5f : v - 0.5f;
    return v >= 32767.0f ? 32767 : v <= -32768.0f ? -32768 : (int16_t)v;
}

int aac_decode(AacDec *d, const uint8_t *pkt, uint32_t len, int16_t *out) {
    Bits b = { pkt, len * 8u, 0, false };
    float pcm[2][1024];
    int nout = 0;
    d->err[0] = 0;
    for (;;) {
        int id = (int)gb(&b, 3);
        if (b.err) { snprintf(d->err, sizeof d->err, "packet ends without ID_END"); goto fail; }
        if (id == ID_END) break;
        switch (id) {
        case ID_SCE: case ID_LFE: {
            gb(&b, 4);
            if (nout >= 2) { snprintf(d->err, sizeof d->err, "more than two output channels"); goto fail; }
            Chan *c = &d->ch[0];
            if (!read_ics(d, &b, c, false)) goto fail;
            if (c->tns_present) apply_tns(d, c);
            filterbank(d, c, nout, pcm[nout]);
            nout++;
            break;
        }
        case ID_CPE: {
            gb(&b, 4);
            if (nout != 0) { snprintf(d->err, sizeof d->err, "more than two output channels"); goto fail; }
            Chan *l = &d->ch[0], *r = &d->ch[1];
            bool common = gb(&b, 1);
            d->ms_mask_present = 0;
            if (common) {
                if (!read_ics_info(d, &b, &l->ics)) goto fail;
                r->ics = l->ics;
                d->ms_mask_present = (int)gb(&b, 2);
                if (d->ms_mask_present == 3) { snprintf(d->err, sizeof d->err, "reserved ms_mask_present 3"); goto fail; }
                for (int g = 0; g < l->ics.num_groups; g++)
                    for (int k = 0; k < l->ics.max_sfb; k++)
                        d->ms_used[g][k] = d->ms_mask_present == 2 ? 1 : d->ms_mask_present == 1 ? (uint8_t)gb(&b, 1) : 0;
            }
            if (!read_ics(d, &b, l, common) || !read_ics(d, &b, r, common)) goto fail;
            if (common && d->ms_mask_present) apply_ms(d, l, r);
            if (common) apply_intensity(d, l, r);
            if (l->tns_present) apply_tns(d, l);
            if (r->tns_present) apply_tns(d, r);
            filterbank(d, l, 0, pcm[0]);
            filterbank(d, r, 1, pcm[1]);
            nout = 2;
            break;
        }
        case ID_CCE: snprintf(d->err, sizeof d->err, "coupling_channel_element is not supported"); goto fail;
        case ID_DSE: {
            gb(&b, 4);
            bool align = gb(&b, 1);
            uint32_t cnt = gb(&b, 8);
            if (cnt == 255) cnt += gb(&b, 8);
            if (align) balign(&b);
            b.pos += 8 * cnt;
            break;
        }
        case ID_PCE: if (!skip_pce(d, &b)) goto fail; break;
        case ID_FIL: {
            uint32_t cnt = gb(&b, 4);
            if (cnt == 15) cnt += gb(&b, 8) - 1;
            b.pos += 8 * cnt;   /* extension payloads (fill, DRC, SBR) carry nothing an AAC-LC decoder must apply */
            break;
        }
        }
        if (b.err || b.pos > b.nbits) { snprintf(d->err, sizeof d->err, "element %d overruns the packet", id); goto fail; }
    }
    if (!nout) { silence(d, out); return 1024; }
    for (int i = 0; i < 1024; i++)
        for (int c = 0; c < d->channels; c++) out[i * d->channels + c] = clip16(pcm[c < nout ? c : nout - 1][i]);
    return 1024;
fail:
    silence(d, out);
    return -1;
}

uint32_t aac_cookie_asc(const uint8_t *p, uint32_t len, const uint8_t **asc) {
    /* walk MPEG-4 descriptors: ES_Descriptor (0x03) > DecoderConfigDescriptor (0x04) > DecoderSpecificInfo (0x05) */
    uint32_t i = 0;
    if (len >= 12 && !memcmp(p + 4, "esds", 4)) i = 12;   /* a full 'esds' atom (size, type, version/flags) */
    while (i + 2 <= len) {
        uint8_t tag = p[i++];
        uint32_t sz = 0; int n = 0;
        while (i < len && n < 4) { uint8_t c = p[i++]; sz = (sz << 7) | (c & 0x7f); n++; if (!(c & 0x80)) break; }
        if (tag == 0x03) {
            if (i + 3 > len) return 0;
            uint8_t flags = p[i + 2]; i += 3;
            if (flags & 0x80) i += 2;
            if (flags & 0x40) { if (i >= len) return 0; i += 1u + p[i]; }
            if (flags & 0x20) i += 2;
        } else if (tag == 0x04) i += 13;
        else if (tag == 0x05) { if (i + sz > len) return 0; *asc = p + i; return sz; }
        else i += sz;
    }
    return 0;
}

AacDec *aac_open(const uint8_t *asc, uint32_t asc_len, double rate, uint32_t channels, const char **why) {
    static const char *msg;
    int aot = 2, sfi = -1, cfg = (int)channels;
    if (asc && asc_len >= 2) {
        Bits b = { asc, asc_len * 8u, 0, false };
        aot = (int)gb(&b, 5);
        if (aot == 31) aot = 32 + (int)gb(&b, 6);
        sfi = (int)gb(&b, 4);
        if (sfi == 15) { uint32_t r = gb(&b, 24); rate = r; sfi = -1; }
        cfg = (int)gb(&b, 4);
        if (aot == 2 || aot == 1 || aot == 3 || aot == 4) {
            if (gb(&b, 1)) { msg = "960-sample AAC frames are not supported"; goto bad; }
        }
    }
    if (aot != 2) { msg = aot == 5 || aot == 29 ? "HE-AAC (SBR/PS) streams are not supported" : "only AAC-LC (object type 2) is supported"; goto bad; }
    if (sfi < 0) for (int i = 0; i < 13; i++) if ((double)sample_rates[i] == rate) sfi = i;
    if (sfi < 0 || sfi > 12) { msg = "unsupported AAC sample rate"; goto bad; }
    if (cfg < 1 || cfg > 2) { msg = "only mono and stereo AAC streams are supported"; goto bad; }
    tables_init();
    AacDec *d = calloc(1, sizeof *d);
    d->sf_index = sfi; d->channels = cfg; d->rng = 0x1f2e3d4c;
    if (why) *why = NULL;
    return d;
bad:
    if (why) *why = msg;
    return NULL;
}
uint32_t aac_channels(const AacDec *d) { return (uint32_t)d->channels; }
double aac_rate(const AacDec *d) { return sample_rates[d->sf_index]; }
const char *aac_error(const AacDec *d) { return d->err; }
void aac_reset(AacDec *d) { memset(d->overlap, 0, sizeof d->overlap); d->prev_shape[0] = d->prev_shape[1] = 0; }
void aac_close(AacDec *d) { free(d); }

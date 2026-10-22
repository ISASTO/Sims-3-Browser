/* aac_test.c — validates runtime/aac.c: IMDCT against the direct formula, then decodes a CAF (AAC) file to raw
   s16le PCM for comparison with a reference decoder (FFmpeg).
   cc -O2 -Iruntime tools/aac_test.c runtime/aac.c -lm -o build/aac_test && build/aac_test in.caf out.raw */
#include "../runtime/aac.c"
#include <stdio.h>

static uint64_t be64(const uint8_t *p) { uint64_t v = 0; for (int i = 0; i < 8; i++) v = (v << 8) | p[i]; return v; }
static uint32_t be32(const uint8_t *p) { return (uint32_t)p[0] << 24 | p[1] << 16 | p[2] << 8 | p[3]; }

int main(int argc, char **argv) {
    tables_init();
    /* 1. IMDCT vs direct evaluation */
    for (int m = 128; m <= 1024; m *= 8) {
        float X[1024], y[2048]; double maxerr = 0, maxv = 0;
        srand(1);
        for (int k = 0; k < m; k++) X[k] = (float)(rand() % 2001 - 1000);
        imdct(X, m, y);
        for (int n = 0; n < 2 * m; n++) {
            double r = 0;
            for (int k = 0; k < m; k++) r += X[k] * cos(2 * M_PI / (2 * m) * (n + (m + 1) / 2.0) * (k + 0.5));
            r *= 2.0 / (2 * m);
            if (fabs(r - y[n]) > maxerr) maxerr = fabs(r - y[n]);
            if (fabs(r) > maxv) maxv = fabs(r);
        }
        printf("imdct M=%d: max abs error %.3g (max |y| %.1f)\n", m, maxerr, maxv);
    }
    if (argc < 3) return 0;
    FILE *f = fopen(argv[1], "rb"); if (!f) { perror(argv[1]); return 1; }
    fseek(f, 0, SEEK_END); long n = ftell(f); fseek(f, 0, SEEK_SET);
    uint8_t *b = malloc(n); if (fread(b, 1, n, f) != (size_t)n) return 1; fclose(f);
    double rate = 0; uint32_t ch = 0; const uint8_t *kuki = NULL, *data = NULL; uint32_t kuki_len = 0;
    uint64_t npk = 0; const uint8_t *pakt = NULL;
    for (long p = 8; p + 12 <= n;) {
        uint32_t t = be32(b + p); int64_t sz = (int64_t)be64(b + p + 4); p += 12;
        if (sz < 0) sz = n - p;
        if (t == 0x64657363) { uint64_t r = be64(b + p); memcpy(&rate, &r, 8); ch = be32(b + p + 24); }
        else if (t == 0x6b756b69) { kuki = b + p; kuki_len = (uint32_t)sz; }
        else if (t == 0x64617461) data = b + p + 4;
        else if (t == 0x70616b74) { npk = be64(b + p); pakt = b + p + 24; }
        p += sz;
    }
    const uint8_t *asc = NULL; uint32_t asc_len = kuki ? aac_cookie_asc(kuki, kuki_len, &asc) : 0;
    const char *why; AacDec *d = aac_open(asc, asc_len, rate, ch, &why);
    if (!d) { printf("open failed: %s\n", why); return 1; }
    printf("rate %.0f ch %u asc %u bytes, %llu packets\n", rate, ch, asc_len, (unsigned long long)npk);
    FILE *o = fopen(argv[2], "wb");
    int16_t pcm[2048]; uint64_t off = 0; int errs = 0;
    for (uint64_t i = 0; i < npk; i++) {
        uint32_t sz = 0; uint8_t c; do { c = *pakt++; sz = (sz << 7) | (c & 0x7f); } while (c & 0x80);
        if (aac_decode(d, data + off, sz, pcm) < 0 && errs++ < 5) printf("packet %llu: %s\n", (unsigned long long)i, aac_error(d));
        fwrite(pcm, 2, 1024 * aac_channels(d), o);
        off += sz;
    }
    fclose(o);
    printf("decoded %llu packets, %d errors\n", (unsigned long long)npk, errs);
    return errs != 0;
}

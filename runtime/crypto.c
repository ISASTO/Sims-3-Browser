/* crypto.c — CommonCrypto subset: SHA-1/SHA-256 digests, HMAC, PBKDF2 and AES (ECB/CBC, PKCS#7) through
 * CCCrypt and the streaming CCCryptor API.  Used by the bundled Nimble SDK to protect its persistence files. */
#include "rt.h"

/* ------------------------------------------------------------------ SHA-1 */
typedef struct { uint32_t h[5]; uint64_t len; uint8_t buf[64]; uint32_t n; } SHA1C;
#define ROL(x, n) (((x) << (n)) | ((x) >> (32 - (n))))
static void sha1_block(SHA1C *s, const uint8_t *p) {
    uint32_t w[80];
    for (int i = 0; i < 16; i++) w[i] = (uint32_t)p[4 * i] << 24 | (uint32_t)p[4 * i + 1] << 16 | (uint32_t)p[4 * i + 2] << 8 | p[4 * i + 3];
    for (int i = 16; i < 80; i++) w[i] = ROL(w[i - 3] ^ w[i - 8] ^ w[i - 14] ^ w[i - 16], 1);
    uint32_t a = s->h[0], b = s->h[1], c = s->h[2], d = s->h[3], e = s->h[4];
    for (int i = 0; i < 80; i++) {
        uint32_t f, k;
        if (i < 20) { f = (b & c) | (~b & d); k = 0x5A827999; }
        else if (i < 40) { f = b ^ c ^ d; k = 0x6ED9EBA1; }
        else if (i < 60) { f = (b & c) | (b & d) | (c & d); k = 0x8F1BBCDC; }
        else { f = b ^ c ^ d; k = 0xCA62C1D6; }
        uint32_t t = ROL(a, 5) + f + e + k + w[i];
        e = d; d = c; c = ROL(b, 30); b = a; a = t;
    }
    s->h[0] += a; s->h[1] += b; s->h[2] += c; s->h[3] += d; s->h[4] += e;
}
static void sha1_init(SHA1C *s) { s->h[0] = 0x67452301; s->h[1] = 0xEFCDAB89; s->h[2] = 0x98BADCFE; s->h[3] = 0x10325476; s->h[4] = 0xC3D2E1F0; s->len = 0; s->n = 0; }
static void sha1_upd(SHA1C *s, const uint8_t *p, size_t n) { s->len += n; while (n) { size_t k = 64 - s->n; if (k > n) k = n; memcpy(s->buf + s->n, p, k); s->n += (uint32_t)k; p += k; n -= k; if (s->n == 64) { sha1_block(s, s->buf); s->n = 0; } } }
static void sha1_fin(SHA1C *s, uint8_t *out) {
    uint64_t bits = s->len * 8; uint8_t pad = 0x80, z = 0; sha1_upd(s, &pad, 1); while (s->n != 56) sha1_upd(s, &z, 1);
    uint8_t L[8]; for (int i = 0; i < 8; i++) L[i] = (uint8_t)(bits >> (56 - 8 * i)); sha1_upd(s, L, 8);
    for (int i = 0; i < 5; i++) { out[4 * i] = (uint8_t)(s->h[i] >> 24); out[4 * i + 1] = (uint8_t)(s->h[i] >> 16); out[4 * i + 2] = (uint8_t)(s->h[i] >> 8); out[4 * i + 3] = (uint8_t)s->h[i]; }
}

/* ------------------------------------------------------------------ SHA-256 */
typedef struct { uint32_t h[8]; uint64_t len; uint8_t buf[64]; uint32_t n; } SHA2C;
static const uint32_t K2[64] = {0x428a2f98,0x71374491,0xb5c0fbcf,0xe9b5dba5,0x3956c25b,0x59f111f1,0x923f82a4,0xab1c5ed5,0xd807aa98,0x12835b01,0x243185be,0x550c7dc3,0x72be5d74,0x80deb1fe,0x9bdc06a7,0xc19bf174,0xe49b69c1,0xefbe4786,0x0fc19dc6,0x240ca1cc,0x2de92c6f,0x4a7484aa,0x5cb0a9dc,0x76f988da,0x983e5152,0xa831c66d,0xb00327c8,0xbf597fc7,0xc6e00bf3,0xd5a79147,0x06ca6351,0x14292967,0x27b70a85,0x2e1b2138,0x4d2c6dfc,0x53380d13,0x650a7354,0x766a0abb,0x81c2c92e,0x92722c85,0xa2bfe8a1,0xa81a664b,0xc24b8b70,0xc76c51a3,0xd192e819,0xd6990624,0xf40e3585,0x106aa070,0x19a4c116,0x1e376c08,0x2748774c,0x34b0bcb5,0x391c0cb3,0x4ed8aa4a,0x5b9cca4f,0x682e6ff3,0x748f82ee,0x78a5636f,0x84c87814,0x8cc70208,0x90befffa,0xa4506ceb,0xbef9a3f7,0xc67178f2};
#define RR(x, n) (((x) >> (n)) | ((x) << (32 - (n))))
static void sha2_block(SHA2C *s, const uint8_t *p) {
    uint32_t w[64];
    for (int i = 0; i < 16; i++) w[i] = (uint32_t)p[4 * i] << 24 | (uint32_t)p[4 * i + 1] << 16 | (uint32_t)p[4 * i + 2] << 8 | p[4 * i + 3];
    for (int i = 16; i < 64; i++) w[i] = w[i - 16] + (RR(w[i - 15], 7) ^ RR(w[i - 15], 18) ^ (w[i - 15] >> 3)) + w[i - 7] + (RR(w[i - 2], 17) ^ RR(w[i - 2], 19) ^ (w[i - 2] >> 10));
    uint32_t a = s->h[0], b = s->h[1], c = s->h[2], d = s->h[3], e = s->h[4], f = s->h[5], g = s->h[6], h = s->h[7];
    for (int i = 0; i < 64; i++) {
        uint32_t t1 = h + (RR(e, 6) ^ RR(e, 11) ^ RR(e, 25)) + ((e & f) ^ (~e & g)) + K2[i] + w[i];
        uint32_t t2 = (RR(a, 2) ^ RR(a, 13) ^ RR(a, 22)) + ((a & b) ^ (a & c) ^ (b & c));
        h = g; g = f; f = e; e = d + t1; d = c; c = b; b = a; a = t1 + t2;
    }
    s->h[0] += a; s->h[1] += b; s->h[2] += c; s->h[3] += d; s->h[4] += e; s->h[5] += f; s->h[6] += g; s->h[7] += h;
}
static void sha2_init(SHA2C *s) { static const uint32_t iv[8] = {0x6a09e667,0xbb67ae85,0x3c6ef372,0xa54ff53a,0x510e527f,0x9b05688c,0x1f83d9ab,0x5be0cd19}; memcpy(s->h, iv, 32); s->len = 0; s->n = 0; }
static void sha2_upd(SHA2C *s, const uint8_t *p, size_t n) { s->len += n; while (n) { size_t k = 64 - s->n; if (k > n) k = n; memcpy(s->buf + s->n, p, k); s->n += (uint32_t)k; p += k; n -= k; if (s->n == 64) { sha2_block(s, s->buf); s->n = 0; } } }
static void sha2_fin(SHA2C *s, uint8_t *out) {
    uint64_t bits = s->len * 8; uint8_t pad = 0x80, z = 0; sha2_upd(s, &pad, 1); while (s->n != 56) sha2_upd(s, &z, 1);
    uint8_t L[8]; for (int i = 0; i < 8; i++) L[i] = (uint8_t)(bits >> (56 - 8 * i)); sha2_upd(s, L, 8);
    for (int i = 0; i < 8; i++) { out[4 * i] = (uint8_t)(s->h[i] >> 24); out[4 * i + 1] = (uint8_t)(s->h[i] >> 16); out[4 * i + 2] = (uint8_t)(s->h[i] >> 8); out[4 * i + 3] = (uint8_t)s->h[i]; }
}

/* ------------------------------------------------------------------ HMAC (SHA-1 / SHA-256) */
typedef struct { int alg; union { SHA1C s1; SHA2C s2; } in, out; } HMACC;
static int dlen(int alg) { return alg == 0 ? 20 : 32; }
static void hmac_init(HMACC *h, int alg, const uint8_t *key, size_t kl) {
    uint8_t k[64] = {0};
    h->alg = alg;
    if (kl > 64) { if (alg == 0) { SHA1C s; sha1_init(&s); sha1_upd(&s, key, kl); sha1_fin(&s, k); } else { SHA2C s; sha2_init(&s); sha2_upd(&s, key, kl); sha2_fin(&s, k); } }
    else memcpy(k, key, kl);
    uint8_t ip[64], op[64];
    for (int i = 0; i < 64; i++) { ip[i] = k[i] ^ 0x36; op[i] = k[i] ^ 0x5c; }
    if (alg == 0) { sha1_init(&h->in.s1); sha1_upd(&h->in.s1, ip, 64); sha1_init(&h->out.s1); sha1_upd(&h->out.s1, op, 64); }
    else { sha2_init(&h->in.s2); sha2_upd(&h->in.s2, ip, 64); sha2_init(&h->out.s2); sha2_upd(&h->out.s2, op, 64); }
}
static void hmac_upd(HMACC *h, const uint8_t *p, size_t n) { if (h->alg == 0) sha1_upd(&h->in.s1, p, n); else sha2_upd(&h->in.s2, p, n); }
static void hmac_fin(HMACC *h, uint8_t *out) {
    uint8_t ih[32];
    if (h->alg == 0) { sha1_fin(&h->in.s1, ih); sha1_upd(&h->out.s1, ih, 20); sha1_fin(&h->out.s1, out); }
    else { sha2_fin(&h->in.s2, ih); sha2_upd(&h->out.s2, ih, 32); sha2_fin(&h->out.s2, out); }
}
/* CCHmac(alg, key, keyLen, data, dataLen, macOut): kCCHmacAlgSHA1 = 0, kCCHmacAlgSHA256 = 2 */
void H_CCHmac(CPU *c) {
    uint32_t alg = ARG(0);
    if (alg != 0 && alg != 2) rt_fatal(c, "CCHmac algorithm %u unsupported", alg);
    HMACC h; hmac_init(&h, alg == 0 ? 0 : 2, G2H(ARG(1)), ARG(2));
    hmac_upd(&h, G2H(ARG(3)), ARG(4));
    uint8_t o[32]; hmac_fin(&h, o);
    memcpy(G2H(ARG(5)), o, (size_t)dlen(alg == 0 ? 0 : 2));
}
void H_CC_SHA1(CPU *c) { SHA1C s; sha1_init(&s); sha1_upd(&s, G2H(ARG(0)), ARG(1)); uint8_t o[20]; sha1_fin(&s, o); memcpy(G2H(ARG(2)), o, 20); RET(ARG(2)); }

/* CCKeyDerivationPBKDF(kCCPBKDF2, password, passwordLen, salt, saltLen, prf, rounds, derivedKey, derivedKeyLen)
 * prf: kCCPRFHmacAlgSHA1 = 1, kCCPRFHmacAlgSHA256 = 3 */
void H_CCKeyDerivationPBKDF(CPU *c) {
    uint32_t prf = ARG(5), rounds = ARG(6), dkl = ARG(8);
    if (ARG(0) != 2 || (prf != 1 && prf != 3)) { RET((uint32_t)-4300); return; }
    int alg = prf == 1 ? 0 : 2, hl = dlen(alg);
    const uint8_t *pw = G2H(ARG(1)), *salt = G2H(ARG(3));
    uint32_t pwl = ARG(2), sl = ARG(4);
    uint8_t *out = G2H(ARG(7));
    for (uint32_t blk = 1, done = 0; done < dkl; blk++) {
        uint8_t u[32], t[32], be[4] = {(uint8_t)(blk >> 24), (uint8_t)(blk >> 16), (uint8_t)(blk >> 8), (uint8_t)blk};
        HMACC h; hmac_init(&h, alg, pw, pwl); hmac_upd(&h, salt, sl); hmac_upd(&h, be, 4); hmac_fin(&h, u);
        memcpy(t, u, (size_t)hl);
        for (uint32_t r = 1; r < rounds; r++) { hmac_init(&h, alg, pw, pwl); hmac_upd(&h, u, (size_t)hl); hmac_fin(&h, u); for (int i = 0; i < hl; i++) t[i] ^= u[i]; }
        uint32_t k = dkl - done < (uint32_t)hl ? dkl - done : (uint32_t)hl;
        memcpy(out + done, t, k); done += k;
    }
    RET(0);
}

/* ------------------------------------------------------------------ AES */
static uint8_t sbox[256], isbox[256];
static uint8_t xt(uint8_t x) { return (uint8_t)((x << 1) ^ ((x & 0x80) ? 0x1b : 0)); }
static uint8_t gmul(uint8_t a, uint8_t b) { uint8_t p = 0; while (b) { if (b & 1) p ^= a; a = xt(a); b >>= 1; } return p; }
static void aes_tables(void) {
    if (sbox[0]) return;
    uint8_t p = 1, q = 1;
    do {
        p = p ^ (uint8_t)(p << 1) ^ (p & 0x80 ? 0x1b : 0);
        q ^= q << 1; q ^= q << 2; q ^= q << 4; if (q & 0x80) q ^= 0x09;
        uint8_t x = q ^ (uint8_t)((q << 1) | (q >> 7)) ^ (uint8_t)((q << 2) | (q >> 6)) ^ (uint8_t)((q << 3) | (q >> 5)) ^ (uint8_t)((q << 4) | (q >> 4));
        sbox[p] = x ^ 0x63;
    } while (p != 1);
    sbox[0] = 0x63;
    for (int i = 0; i < 256; i++) isbox[sbox[i]] = (uint8_t)i;
}
typedef struct { uint8_t rk[240]; int nr; } AES;
static int aes_setkey(AES *a, const uint8_t *key, uint32_t kl) {
    if (kl != 16 && kl != 24 && kl != 32) return -1;
    aes_tables();
    int nk = (int)kl / 4; a->nr = nk + 6;
    memcpy(a->rk, key, kl);
    uint8_t rcon = 1;
    for (int i = nk; i < 4 * (a->nr + 1); i++) {
        uint8_t t[4]; memcpy(t, a->rk + 4 * (i - 1), 4);
        if (i % nk == 0) { uint8_t u = t[0]; t[0] = sbox[t[1]] ^ rcon; t[1] = sbox[t[2]]; t[2] = sbox[t[3]]; t[3] = sbox[u]; rcon = xt(rcon); }
        else if (nk > 6 && i % nk == 4) for (int j = 0; j < 4; j++) t[j] = sbox[t[j]];
        for (int j = 0; j < 4; j++) a->rk[4 * i + j] = a->rk[4 * (i - nk) + j] ^ t[j];
    }
    return 0;
}
static void aes_enc(const AES *a, uint8_t s[16]) {
    for (int i = 0; i < 16; i++) s[i] ^= a->rk[i];
    for (int r = 1; r <= a->nr; r++) {
        uint8_t t[16];
        for (int i = 0; i < 16; i++) t[i] = sbox[s[(i + 4 * (i % 4)) % 16]];   /* SubBytes + ShiftRows */
        if (r != a->nr) for (int col = 0; col < 4; col++) {
            uint8_t *m = t + 4 * col, a0 = m[0], a1 = m[1], a2 = m[2], a3 = m[3];
            m[0] = xt(a0) ^ (xt(a1) ^ a1) ^ a2 ^ a3; m[1] = a0 ^ xt(a1) ^ (xt(a2) ^ a2) ^ a3;
            m[2] = a0 ^ a1 ^ xt(a2) ^ (xt(a3) ^ a3); m[3] = (xt(a0) ^ a0) ^ a1 ^ a2 ^ xt(a3);
        }
        for (int i = 0; i < 16; i++) s[i] = t[i] ^ a->rk[16 * r + i];
    }
}
static void aes_dec(const AES *a, uint8_t s[16]) {
    for (int i = 0; i < 16; i++) s[i] ^= a->rk[16 * a->nr + i];
    for (int r = a->nr - 1; r >= 0; r--) {
        uint8_t t[16];
        for (int i = 0; i < 16; i++) t[(i + 4 * (i % 4)) % 16] = isbox[s[i]];   /* InvShiftRows + InvSubBytes */
        for (int i = 0; i < 16; i++) t[i] ^= a->rk[16 * r + i];
        if (r) for (int col = 0; col < 4; col++) {
            uint8_t *m = t + 4 * col, a0 = m[0], a1 = m[1], a2 = m[2], a3 = m[3];
            m[0] = gmul(a0, 14) ^ gmul(a1, 11) ^ gmul(a2, 13) ^ gmul(a3, 9); m[1] = gmul(a0, 9) ^ gmul(a1, 14) ^ gmul(a2, 11) ^ gmul(a3, 13);
            m[2] = gmul(a0, 13) ^ gmul(a1, 9) ^ gmul(a2, 14) ^ gmul(a3, 11); m[3] = gmul(a0, 11) ^ gmul(a1, 13) ^ gmul(a2, 9) ^ gmul(a3, 14);
        }
        memcpy(s, t, 16);
    }
}

/* ------------------------------------------------------------------ CCCryptor */
enum { kCCParamError = -4300, kCCBufferTooSmall = -4301, kCCAlignmentError = -4303, kCCDecodeError = -4304, kCCUnimplemented = -4305 };
typedef struct { AES aes; int op; bool pad, ecb, used; uint8_t iv[16], buf[16]; uint32_t nbuf; } Cryptor;
#define NCRYPT 32
static Cryptor crs[NCRYPT];
static Cryptor *CR(gptr h) { return h >= 0xC0000001u && h < 0xC0000001u + NCRYPT && crs[h - 0xC0000001u].used ? &crs[h - 0xC0000001u] : NULL; }
static int cr_init(Cryptor *k, uint32_t op, uint32_t alg, uint32_t opts, const uint8_t *key, uint32_t kl, const uint8_t *iv) {
    if (alg != 0) return kCCUnimplemented;   /* kCCAlgorithmAES128 (all AES key sizes) */
    if (op > 1 || aes_setkey(&k->aes, key, kl)) return kCCParamError;
    k->op = (int)op; k->pad = opts & 1; k->ecb = (opts & 2) != 0; k->nbuf = 0;
    if (iv) memcpy(k->iv, iv, 16); else memset(k->iv, 0, 16);
    return 0;
}
static void cr_block(Cryptor *k, const uint8_t *in, uint8_t *out) {
    uint8_t b[16]; memcpy(b, in, 16);
    if (k->op == 0) { if (!k->ecb) for (int i = 0; i < 16; i++) b[i] ^= k->iv[i]; aes_enc(&k->aes, b); if (!k->ecb) memcpy(k->iv, b, 16); }
    else { uint8_t ct[16]; memcpy(ct, b, 16); aes_dec(&k->aes, b); if (!k->ecb) { for (int i = 0; i < 16; i++) b[i] ^= k->iv[i]; memcpy(k->iv, ct, 16); } }
    memcpy(out, b, 16);
}
static uint32_t cr_outlen(Cryptor *k, uint32_t in, bool fin) {
    uint32_t total = k->nbuf + in;
    if (!fin) { uint32_t n = total / 16 * 16; if (k->op == 1 && k->pad && n == total && n) n -= 16; return n; }
    if (k->op == 0 && k->pad) return (total / 16 + 1) * 16;
    return (total + 15) / 16 * 16;
}
static int cr_update(Cryptor *k, const uint8_t *in, uint32_t n, uint8_t *out, uint32_t avail, uint32_t *moved) {
    uint32_t need = cr_outlen(k, n, false);
    if (need > avail) return kCCBufferTooSmall;
    uint32_t o = 0;
    while (n) {
        uint32_t t = 16 - k->nbuf; if (t > n) t = n;
        memcpy(k->buf + k->nbuf, in, t); k->nbuf += t; in += t; n -= t;
        if (k->nbuf == 16 && (n || !(k->op == 1 && k->pad))) { cr_block(k, k->buf, out + o); o += 16; k->nbuf = 0; }
    }
    *moved = o;
    return 0;
}
static int cr_final(Cryptor *k, uint8_t *out, uint32_t avail, uint32_t *moved) {
    *moved = 0;
    if (k->op == 0) {
        if (!k->pad) { if (k->nbuf) return kCCAlignmentError; return 0; }
        if (avail < 16) return kCCBufferTooSmall;
        uint8_t p = (uint8_t)(16 - k->nbuf); memset(k->buf + k->nbuf, p, p);
        cr_block(k, k->buf, out); k->nbuf = 0; *moved = 16; return 0;
    }
    if (!k->nbuf) return k->pad ? kCCDecodeError : 0;
    if (k->nbuf != 16) return kCCAlignmentError;
    uint8_t b[16]; cr_block(k, k->buf, b); k->nbuf = 0;
    uint32_t n = 16;
    if (k->pad) { uint8_t p = b[15]; if (!p || p > 16) return kCCDecodeError; for (int i = 16 - p; i < 16; i++) if (b[i] != p) return kCCDecodeError; n -= p; }
    if (n > avail) return kCCBufferTooSmall;
    memcpy(out, b, n); *moved = n;
    return 0;
}
/* CCCrypt(op, alg, options, key, keyLength, iv, dataIn, dataInLength, dataOut, dataOutAvailable, dataOutMoved) */
void H_CCCrypt(CPU *c) {
    Cryptor k = {0};
    int r = cr_init(&k, ARG(0), ARG(1), ARG(2), G2H(ARG(3)), ARG(4), ARG(5) ? G2H(ARG(5)) : NULL);
    gptr movedp = ARG(10);
    if (r) { if (movedp) ST32(movedp, 0); RET((uint32_t)r); return; }
    uint32_t inl = ARG(7), avail = ARG(9);
    uint32_t need = cr_outlen(&k, inl, true);
    if (need > avail) { if (movedp) ST32(movedp, need); RET((uint32_t)kCCBufferTooSmall); return; }
    uint8_t *out = G2H(ARG(8)); uint32_t m1 = 0, m2 = 0;
    r = cr_update(&k, G2H(ARG(6)), inl, out, avail, &m1);
    if (!r) r = cr_final(&k, out + m1, avail - m1, &m2);
    if (movedp) ST32(movedp, m1 + m2);
    RET((uint32_t)r);
}
/* CCCryptorCreate(op, alg, options, key, keyLength, iv, cryptorRef) */
void H_CCCryptorCreate(CPU *c) {
    int i = 0; while (i < NCRYPT && crs[i].used) i++;
    if (i == NCRYPT) { RET((uint32_t)-4302); return; }
    int r = cr_init(&crs[i], ARG(0), ARG(1), ARG(2), G2H(ARG(3)), ARG(4), ARG(5) ? G2H(ARG(5)) : NULL);
    if (r) { RET((uint32_t)r); return; }
    crs[i].used = true;
    ST32(ARG(6), 0xC0000001u + (uint32_t)i);
    RET(0);
}
void H_CCCryptorUpdate(CPU *c) {
    Cryptor *k = CR(ARG(0)); if (!k) { RET((uint32_t)kCCParamError); return; }
    uint32_t m = 0; int r = cr_update(k, G2H(ARG(1)), ARG(2), G2H(ARG(3)), ARG(4), &m);
    if (ARG(5)) ST32(ARG(5), r == kCCBufferTooSmall ? cr_outlen(k, ARG(2), false) : m);
    RET((uint32_t)r);
}
void H_CCCryptorFinal(CPU *c) {
    Cryptor *k = CR(ARG(0)); if (!k) { RET((uint32_t)kCCParamError); return; }
    uint32_t m = 0; int r = cr_final(k, G2H(ARG(1)), ARG(2), &m);
    if (ARG(3)) ST32(ARG(3), m);
    RET((uint32_t)r);
}
void H_CCCryptorGetOutputLength(CPU *c) { Cryptor *k = CR(ARG(0)); RET(k ? cr_outlen(k, ARG(1), ARG(2) & 0xff) : 0); }
void H_CCCryptorReset(CPU *c) { Cryptor *k = CR(ARG(0)); if (!k) { RET((uint32_t)kCCParamError); return; } k->nbuf = 0; if (ARG(1)) memcpy(k->iv, G2H(ARG(1)), 16); else memset(k->iv, 0, 16); RET(0); }
void H_CCCryptorRelease(CPU *c) { Cryptor *k = CR(ARG(0)); if (k) memset(k, 0, sizeof *k); RET(0); }

/* self-test against FIPS-197 / RFC 6070 vectors (run once at boot) */
void crypto_selftest(void) {
    static const uint8_t key[16] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    static const uint8_t pt[16] = {0x00,0x11,0x22,0x33,0x44,0x55,0x66,0x77,0x88,0x99,0xaa,0xbb,0xcc,0xdd,0xee,0xff};
    static const uint8_t ct[16] = {0x69,0xc4,0xe0,0xd8,0x6a,0x7b,0x04,0x30,0xd8,0xcd,0xb7,0x80,0x70,0xb4,0xc5,0x5a};
    AES a; aes_setkey(&a, key, 16); uint8_t b[16]; memcpy(b, pt, 16); aes_enc(&a, b);
    bool ok = !memcmp(b, ct, 16); aes_dec(&a, b); ok = ok && !memcmp(b, pt, 16);
    uint8_t dk[20]; HMACC h; uint8_t u[20];
    /* PBKDF2-HMAC-SHA1("password", "salt", 2) = ea6c014dc72d6f8ccd1ed92ace1d41f0d8de8957 */
    static const uint8_t want[20] = {0xea,0x6c,0x01,0x4d,0xc7,0x2d,0x6f,0x8c,0xcd,0x1e,0xd9,0x2a,0xce,0x1d,0x41,0xf0,0xd8,0xde,0x89,0x57};
    hmac_init(&h, 0, (const uint8_t *)"password", 8); hmac_upd(&h, (const uint8_t *)"salt", 4); hmac_upd(&h, (const uint8_t *)"\0\0\0\1", 4); hmac_fin(&h, u);
    memcpy(dk, u, 20); hmac_init(&h, 0, (const uint8_t *)"password", 8); hmac_upd(&h, u, 20); hmac_fin(&h, u); for (int i = 0; i < 20; i++) dk[i] ^= u[i];
    ok = ok && !memcmp(dk, want, 20);
    if (!ok) rt_log("crypto: SELF-TEST FAILED");
}

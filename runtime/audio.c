/* audio.c — OpenAL (incl. alBufferDataStatic), AudioFile (CAF/WAV parsing), AudioQueue output.
 *
 * Timing model (DECISIONS.md D13): source/queue state is advanced on the run-loop clock in C, so the game's
 * state queries and AudioQueue buffer callbacks are deterministic; the browser host only renders sound:
 *   - OpenAL buffers are uploaded as PCM and sources are started/stopped on the host;
 *   - AudioQueue playback of AAC packets read from a CAF file is rendered by the host from the same file at
 *     the packet offset the game enqueued (the host decodes the file once). */
#include "rt.h"
#include "hostaudio.h"

const char *vfs_resolve(const char *in, char *out, size_t outlen);
static double now_s(void) { return rt_now_ms / 1000.0; }

/* ================================================================== OpenAL */
#define AL_SOURCE_RELATIVE 0x202
#define AL_PITCH 0x1003
#define AL_POSITION 0x1004
#define AL_VELOCITY 0x1006
#define AL_LOOPING 0x1007
#define AL_BUFFER 0x1009
#define AL_GAIN 0x100A
#define AL_ORIENTATION 0x100F
#define AL_SOURCE_STATE 0x1010
#define AL_INITIAL 0x1011
#define AL_PLAYING 0x1012
#define AL_PAUSED 0x1013
#define AL_STOPPED 0x1014
#define AL_REFERENCE_DISTANCE 0x1020
#define AL_ROLLOFF_FACTOR 0x1021
#define AL_MAX_DISTANCE 0x1023
#define AL_FORMAT_MONO8 0x1100
#define AL_FORMAT_MONO16 0x1101
#define AL_FORMAT_STEREO8 0x1102
#define AL_FORMAT_STEREO16 0x1103

typedef struct { bool used; uint32_t frames, freq, ch; } ALBuf;
typedef struct { bool used; uint32_t buf; bool loop; float gain, pitch; float pos[3], vel[3]; uint32_t state; double start, dur; } ALSrc;
#define NB 512
#define NS 128
static ALBuf bufs[NB]; static ALSrc srcs[NS];
static uint32_t al_error;
static bool ctx_current = false;

void H_alcOpenDevice(CPU *c) { RET(gstatic_alloc(16)); }
void H_alcCloseDevice(CPU *c) { RET(1); }
void H_alcCreateContext(CPU *c) { RET(gstatic_alloc(16)); }
void H_alcDestroyContext(CPU *c) { UNUSED(c); }
static gptr cur_ctx;
void H_alcMakeContextCurrent(CPU *c) { cur_ctx = ARG(0); ctx_current = cur_ctx != 0; ha_suspend(!ctx_current); RET(1); }
void H_alcGetCurrentContext(CPU *c) { RET(cur_ctx); }
void H_alGetError(CPU *c) { RET(al_error); al_error = 0; }
static void alBufferDataStatic_impl(CPU *c);
void H_alGetProcAddress(CPU *c) {
    const char *n = GSTR(ARG(0));
    if (!strcmp(n, "alBufferDataStatic")) { RET(thunk_for(alBufferDataStatic_impl, "alBufferDataStatic")); return; }
    if (!strcmp(n, "alcMacOSXMixerOutputRate")) { RET(0); return; }
    rt_log("alGetProcAddress(%s): extension not available", n); RET(0);
}
void H_alGenBuffers(CPU *c) {
    for (uint32_t i = 0; i < ARG(0); i++) {
        uint32_t k = 1; while (k < NB && bufs[k].used) k++;
        if (k == NB) { al_error = 0xA005; return; }
        bufs[k].used = true; bufs[k].frames = 0;
        ST32(ARG(1) + 4 * i, k);
    }
}
void H_alDeleteBuffers(CPU *c) { for (uint32_t i = 0; i < ARG(0); i++) { uint32_t k = LD32(ARG(1) + 4 * i); if (k && k < NB) { bufs[k].used = false; ha_buffer_delete(k); } } }
static void buffer_data(uint32_t id, uint32_t fmt, gptr data, uint32_t size, uint32_t freq) {
    if (!id || id >= NB || !bufs[id].used) { al_error = 0xA001; return; }
    uint32_t ch = (fmt == AL_FORMAT_STEREO8 || fmt == AL_FORMAT_STEREO16) ? 2 : 1;
    uint32_t bits = (fmt == AL_FORMAT_MONO8 || fmt == AL_FORMAT_STEREO8) ? 8 : 16;
    bufs[id].ch = ch; bufs[id].freq = freq; bufs[id].frames = size / (ch * bits / 8);
    ha_buffer(id, G2H(data), size, ch, bits, freq);
}
static void alBufferDataStatic_impl(CPU *c) { buffer_data(ARG(0), ARG(1), ARG(2), ARG(3), LD32(c->r[13])); }
void H_alBufferData(CPU *c) { buffer_data(ARG(0), ARG(1), ARG(2), ARG(3), LD32(c->r[13])); }
void H_alGenSources(CPU *c) {
    for (uint32_t i = 0; i < ARG(0); i++) {
        uint32_t k = 1; while (k < NS && srcs[k].used) k++;
        if (k == NS) { al_error = 0xA005; return; }
        memset(&srcs[k], 0, sizeof srcs[k]); srcs[k].used = true; srcs[k].gain = 1; srcs[k].pitch = 1; srcs[k].state = AL_INITIAL;
        ST32(ARG(1) + 4 * i, k);
    }
}
void H_alDeleteSources(CPU *c) { for (uint32_t i = 0; i < ARG(0); i++) { uint32_t k = LD32(ARG(1) + 4 * i); if (k && k < NS) { if (srcs[k].state == AL_PLAYING) ha_source_stop(k); srcs[k].used = false; } } }
static ALSrc *S_(uint32_t s) { if (!s || s >= NS || !srcs[s].used) { al_error = 0xA001; return NULL; } return &srcs[s]; }
static void update_state(uint32_t id) {
    ALSrc *s = &srcs[id];
    if (s->state == AL_PLAYING && !s->loop && now_s() >= s->start + s->dur) s->state = AL_STOPPED;
}
void H_alSourcei(CPU *c) {
    ALSrc *s = S_(ARG(0)); if (!s) return;
    switch (ARG(1)) {
    case AL_BUFFER: s->buf = ARG(2); break;
    case AL_LOOPING: s->loop = ARG(2) != 0; ha_source_loop(ARG(0), s->loop); break;
    case AL_SOURCE_RELATIVE: break;
    default: al_error = 0xA002;
    }
}
void H_alSourcef(CPU *c) {
    ALSrc *s = S_(ARG(0)); if (!s) return;
    float v = U2F(ARG(2));
    switch (ARG(1)) {
    case AL_GAIN: s->gain = v; ha_source_param(ARG(0), s->gain, s->pitch); break;
    case AL_PITCH: s->pitch = v > 0 ? v : 1; ha_source_param(ARG(0), s->gain, s->pitch); break;
    case AL_REFERENCE_DISTANCE: case AL_ROLLOFF_FACTOR: case AL_MAX_DISTANCE: break;
    default: al_error = 0xA002;
    }
}
void H_alSourcefv(CPU *c) {
    ALSrc *s = S_(ARG(0)); if (!s) return;
    gptr p = ARG(2);
    switch (ARG(1)) {
    case AL_POSITION: for (int i = 0; i < 3; i++) s->pos[i] = U2F(LD32(p + 4 * i)); break;
    case AL_VELOCITY: for (int i = 0; i < 3; i++) s->vel[i] = U2F(LD32(p + 4 * i)); break;
    case AL_GAIN: s->gain = U2F(LD32(p)); ha_source_param(ARG(0), s->gain, s->pitch); break;
    case AL_PITCH: s->pitch = U2F(LD32(p)); ha_source_param(ARG(0), s->gain, s->pitch); break;
    default: al_error = 0xA002;
    }
}
void H_alGetSourcei(CPU *c) {
    ALSrc *s = S_(ARG(0)); if (!s) return;
    switch (ARG(1)) {
    case AL_SOURCE_STATE: update_state(ARG(0)); ST32(ARG(2), s->state); break;
    case AL_BUFFER: ST32(ARG(2), s->buf); break;
    case AL_LOOPING: ST32(ARG(2), s->loop); break;
    default: al_error = 0xA002;
    }
}
void H_alGetSourcef(CPU *c) {
    ALSrc *s = S_(ARG(0)); if (!s) return;
    switch (ARG(1)) {
    case AL_GAIN: ST32(ARG(2), F2U(s->gain)); break;
    case AL_PITCH: ST32(ARG(2), F2U(s->pitch)); break;
    default: al_error = 0xA002;
    }
}
void H_alSourcePlay(CPU *c) {
    uint32_t id = ARG(0); ALSrc *s = S_(id); if (!s) return;
    ALBuf *b = s->buf && s->buf < NB ? &bufs[s->buf] : NULL;
    if (!b || !b->frames) { s->state = AL_STOPPED; return; }
    s->state = AL_PLAYING; s->start = now_s(); s->dur = (double)b->frames / b->freq / s->pitch;
    ha_source_play(id, s->buf, s->loop, s->gain, s->pitch);
}
void H_alSourceStop(CPU *c) { ALSrc *s = S_(ARG(0)); if (!s) return; if (s->state == AL_PLAYING) ha_source_stop(ARG(0)); s->state = AL_STOPPED; }
void H_alSourceRewind(CPU *c) { ALSrc *s = S_(ARG(0)); if (!s) return; if (s->state == AL_PLAYING) ha_source_stop(ARG(0)); s->state = AL_INITIAL; }
void H_alListener3f(CPU *c) { UNUSED(c); }
void H_alListenerfv(CPU *c) { UNUSED(c); }

/* ================================================================== AudioFile */
typedef struct {
    char path[512];
    uint8_t *bytes; uint32_t size;          /* whole file (host memory) */
    double rate; uint32_t fmt, flags, bpp, fpp, bpf, ch, bits;
    uint32_t data_off; uint64_t data_size;
    uint64_t npackets;
    uint32_t *pkt_off, *pkt_size;           /* VBR packet table (CAF 'pakt') */
    uint32_t max_pkt;
    uint8_t *cookie; uint32_t cookie_size;
    int64_t valid_frames; int32_t priming, remainder;
} AFile;
#define NAF 32
static AFile *afiles[NAF];
static uint64_t be64(const uint8_t *p) { uint64_t v = 0; for (int i = 0; i < 8; i++) v = v << 8 | p[i]; return v; }
static uint32_t be32(const uint8_t *p) { return (uint32_t)p[0] << 24 | (uint32_t)p[1] << 16 | (uint32_t)p[2] << 8 | p[3]; }
static uint64_t vlq(const uint8_t **p) { uint64_t v = 0; uint8_t b; do { b = *(*p)++; v = v << 7 | (b & 0x7f); } while (b & 0x80); return v; }
static bool parse_caf(AFile *f) {
    const uint8_t *b = f->bytes; uint32_t n = f->size;
    if (n < 8 || memcmp(b, "caff", 4)) return false;
    uint32_t i = 8;
    while (i + 12 <= n) {
        const uint8_t *t = b + i; int64_t sz = (int64_t)be64(t + 4);
        const uint8_t *d = t + 12;
        if (!memcmp(t, "desc", 4)) {
            uint64_t r = be64(d); memcpy(&f->rate, &r, 8);
            f->fmt = be32(d + 8); f->flags = be32(d + 12); f->bpp = be32(d + 16); f->fpp = be32(d + 20); f->ch = be32(d + 24); f->bits = be32(d + 28);
            f->bpf = f->bpp && f->fpp == 1 ? f->bpp : 0;
        } else if (!memcmp(t, "data", 4)) {
            f->data_off = i + 12 + 4;   /* skip edit count */
            f->data_size = sz < 0 ? n - f->data_off : (uint64_t)sz - 4;
        } else if (!memcmp(t, "pakt", 4)) {
            f->npackets = be64(d); f->valid_frames = (int64_t)be64(d + 8); f->priming = (int32_t)be32(d + 16); f->remainder = (int32_t)be32(d + 20);
            const uint8_t *p = d + 24;
            f->pkt_off = malloc((size_t)f->npackets * 4 + 4); f->pkt_size = malloc((size_t)f->npackets * 4 + 4);
            uint32_t off = 0;
            for (uint64_t k = 0; k < f->npackets; k++) {
                uint32_t s = f->bpp ? f->bpp : (uint32_t)vlq(&p);
                if (!f->fpp) vlq(&p);
                f->pkt_off[k] = off; f->pkt_size[k] = s; off += s; if (s > f->max_pkt) f->max_pkt = s;
            }
        } else if (!memcmp(t, "kuki", 4)) {
            f->cookie_size = (uint32_t)sz; f->cookie = malloc((size_t)sz); memcpy(f->cookie, d, (size_t)sz);
        }
        if (sz < 0) break;
        i += 12 + (uint32_t)sz;
    }
    if (!f->pkt_off && f->bpp) { f->npackets = f->data_size / f->bpp; f->max_pkt = f->bpp; }
    return f->data_off != 0;
}
static bool parse_wav(AFile *f) {
    const uint8_t *b = f->bytes; uint32_t n = f->size;
    if (n < 12 || memcmp(b, "RIFF", 4) || memcmp(b + 8, "WAVE", 4)) return false;
    uint32_t i = 12;
    while (i + 8 <= n) {
        uint32_t sz = (uint32_t)b[i + 4] | (uint32_t)b[i + 5] << 8 | (uint32_t)b[i + 6] << 16 | (uint32_t)b[i + 7] << 24;
        const uint8_t *d = b + i + 8;
        if (!memcmp(b + i, "fmt ", 4)) {
            f->ch = (uint32_t)(d[2] | d[3] << 8); f->rate = (double)(d[4] | d[5] << 8 | d[6] << 16 | (uint32_t)d[7] << 24);
            f->bpf = (uint32_t)(d[12] | d[13] << 8); f->bits = (uint32_t)(d[14] | d[15] << 8);
            f->fmt = 0x6c70636d; /* 'lpcm' */ f->flags = 0xC; /* signed integer | packed (little-endian) */ f->bpp = f->bpf; f->fpp = 1;
        } else if (!memcmp(b + i, "data", 4)) { f->data_off = i + 8; f->data_size = sz; }
        i += 8 + sz + (sz & 1);
    }
    if (f->bpp) { f->npackets = f->data_size / f->bpp; f->max_pkt = f->bpp; }
    return f->data_off != 0;
}
void H_AudioFileOpenURL(CPU *c) {
    gptr url = ARG(0);
    gptr path = msg(c, url, "path", 0);
    char p[1024]; vfs_resolve(nsstr_cstr(path), p, sizeof p);
    int sz = host_file_size(p);
    if (sz <= 0) { rt_log("AudioFileOpenURL: %s not found", p); RET(0x666e3f3f /* 'fnf?' */); return; }
    int k = 1; while (k < NAF && afiles[k]) k++;
    if (k == NAF) { RET((uint32_t)-42); return; }
    AFile *f = calloc(1, sizeof *f);
    snprintf(f->path, sizeof f->path, "%s", p);
    f->size = (uint32_t)sz; f->bytes = malloc((size_t)sz); host_file_read(p, f->bytes, 0, (uint32_t)sz);
    if (!parse_caf(f) && !parse_wav(f)) { rt_log("AudioFileOpenURL: unsupported file %s", p); free(f->bytes); free(f); RET(0x7479703f /* 'typ?' */); return; }
    afiles[k] = f;
    ST32(ARG(3), 0xA0000000u | (uint32_t)k);
    RET(0);
}
static AFile *AF(uint32_t id) { uint32_t k = id & 0xffff; return (id & 0xF0000000u) == 0xA0000000u && k < NAF ? afiles[k] : NULL; }
void H_AudioFileClose(CPU *c) {
    uint32_t k = ARG(0) & 0xffff; AFile *f = AF(ARG(0));
    if (f) { free(f->bytes); free(f->pkt_off); free(f->pkt_size); free(f->cookie); free(f); afiles[k] = NULL; }
    RET(0);
}
#define PROP(a, b, c_, d) ((uint32_t)(a) << 24 | (uint32_t)(b) << 16 | (uint32_t)(c_) << 8 | (uint32_t)(d))
static uint32_t prop_size(AFile *f, uint32_t prop) {
    switch (prop) {
    case PROP('d','f','m','t'): return 40;
    case PROP('b','c','n','t'): case PROP('p','c','n','t'): return 8;
    case PROP('p','k','u','b'): case PROP('p','s','z','e'): return 4;
    case PROP('m','g','i','c'): return f->cookie_size;
    case PROP('e','d','u','r'): return 8;
    case PROP('f','f','m','t'): return 4;
    }
    return 0;
}
void H_AudioFileGetPropertyInfo(CPU *c) {
    AFile *f = AF(ARG(0)); if (!f) { RET(-50); return; }
    uint32_t s = prop_size(f, ARG(1));
    if (!s && ARG(1) != PROP('m','g','i','c')) { RET(0x70727020 /* 'prp ' kAudioFileUnsupportedPropertyError? */); return; }
    if (ARG(2)) ST32(ARG(2), s);
    if (ARG(3)) ST32(ARG(3), 0);
    RET(0);
}
void H_AudioFileGetProperty(CPU *c) {
    AFile *f = AF(ARG(0)); if (!f) { RET(-50); return; }
    uint32_t prop = ARG(1); gptr io = ARG(2), out = ARG(3);
    uint8_t tmp[64]; uint32_t n = prop_size(f, prop);
    switch (prop) {
    case PROP('d','f','m','t'): {
        memcpy(tmp, &f->rate, 8);
        uint32_t w[8] = {f->fmt, f->flags, f->bpp, f->fpp, f->bpf, f->ch, f->bits, 0};
        memcpy(tmp + 8, w, 32); break; }
    case PROP('b','c','n','t'): { uint64_t v = f->data_size; memcpy(tmp, &v, 8); break; }
    case PROP('p','c','n','t'): { uint64_t v = f->npackets; memcpy(tmp, &v, 8); break; }
    case PROP('p','k','u','b'): case PROP('p','s','z','e'): memcpy(tmp, &f->max_pkt, 4); break;
    case PROP('f','f','m','t'): { uint32_t t = !memcmp(f->bytes, "caff", 4) ? PROP('c','a','f','f') : PROP('W','A','V','E'); memcpy(tmp, &t, 4); break; }
    case PROP('e','d','u','r'): { double d = f->fpp ? (double)f->npackets * f->fpp / f->rate : 0; memcpy(tmp, &d, 8); break; }
    case PROP('m','g','i','c'): {
        uint32_t want = LD32(io); if (want > f->cookie_size) want = f->cookie_size;
        memcpy(G2H(out), f->cookie, want); ST32(io, want); RET(0); return; }
    default: rt_log("AudioFileGetProperty: unsupported property %08x", prop); RET(0x7570726f); return;
    }
    uint32_t want = LD32(io); if (want > n) want = n;
    memcpy(G2H(out), tmp, want); ST32(io, want);
    RET(0);
}
void H_AudioFileReadBytes(CPU *c) {
    AFile *f = AF(ARG(0)); if (!f) { RET(-50); return; }
    uint64_t start = (uint64_t)ARG(2) | ((uint64_t)ARG(3) << 32);
    gptr io = LD32(c->r[13]), out = LD32(c->r[13] + 4);
    uint32_t want = LD32(io);
    if (start >= f->data_size) { ST32(io, 0); RET(0x656f6620 /* 'eof ' */); return; }
    if (start + want > f->data_size) want = (uint32_t)(f->data_size - start);
    memcpy(G2H(out), f->bytes + f->data_off + start, want);
    ST32(io, want);
    RET(0);
}
/* remember where packet payloads were copied, so AudioQueue knows what the game enqueued */
typedef struct { gptr dst; uint32_t file; uint64_t first; uint32_t count; } PktOrigin;
#define NPO 64
static PktOrigin porig[NPO]; static uint32_t nporig;
void H_AudioFileReadPackets(CPU *c) {
    AFile *f = AF(ARG(0)); if (!f) { RET(-50); return; }
    gptr out_bytes = ARG(2), descs = ARG(3);
    uint64_t start = (uint64_t)LD32(c->r[13]) | ((uint64_t)LD32(c->r[13] + 4) << 32);
    gptr io_np = LD32(c->r[13] + 8), out = LD32(c->r[13] + 12);
    uint32_t want = LD32(io_np), got = 0, bytes = 0;
    uint32_t cap = out_bytes ? LD32(out_bytes) : 0xffffffffu;
    for (uint64_t p = start; p < f->npackets && got < want; p++, got++) {
        uint32_t off = f->pkt_off ? f->pkt_off[p] : (uint32_t)(p * f->bpp), sz = f->pkt_size ? f->pkt_size[p] : f->bpp;
        if (cap != 0xffffffffu && bytes + sz > cap) break;
        memcpy(G2H(out + bytes), f->bytes + f->data_off + off, sz);
        if (descs) { ST64(descs + 16 * got, bytes); ST32(descs + 16 * got + 8, 0); ST32(descs + 16 * got + 12, sz); }
        bytes += sz;
    }
    if (out_bytes) ST32(out_bytes, bytes);
    ST32(io_np, got);
    PktOrigin o = {out, ARG(0), start, got};
    porig[nporig++ % NPO] = o;
    RET(0);
}

/* ================================================================== AudioQueue (output) */
typedef struct { gptr buf; double dur; uint32_t file; uint64_t first; uint32_t count; } QEnt;
typedef struct {
    bool used, running, paused, stopping;
    gptr cb, user, fmt_rate_ptr; double rate; uint32_t fpp;
    QEnt q[16]; uint32_t nq;
    double play_start;      /* run-loop time at which q[0] began playing */
    double played_frames;   /* frames fully played (for AudioQueueGetCurrentTime) */
    float volume;
    gptr listener_proc, listener_user;
    uint32_t host_file; uint64_t host_next_packet; bool host_playing;
} AQ;
#define NAQ 8
static AQ aqs[NAQ];
static AQ *Q(uint32_t id) { uint32_t k = id & 0xff; return (id & 0xFF000000u) == 0xB1000000u && k < NAQ && aqs[k].used ? &aqs[k] : NULL; }
void H_AudioQueueNewOutput(CPU *c) {
    gptr fmt = ARG(0);
    int k = 0; while (k < NAQ && aqs[k].used) k++;
    if (k == NAQ) { RET(-50); return; }
    AQ *a = &aqs[k]; memset(a, 0, sizeof *a);
    a->used = true; a->cb = ARG(1); a->user = ARG(2); a->volume = 1;
    a->rate = U2D(LD64(fmt)); a->fpp = LD32(fmt + 20); if (!a->fpp) a->fpp = 1;
    ST32(LD32(c->r[13] + 8), 0xB1000000u | (uint32_t)k);
    RET(0);
}
void H_AudioQueueAllocateBufferWithPacketDescriptions(CPU *c) {
    uint32_t size = ARG(1), ndesc = ARG(2);
    gptr b = gcalloc(1, 28);
    ST32(b, size); ST32(b + 4, gmalloc(size)); ST32(b + 16, ndesc); ST32(b + 20, ndesc ? gcalloc(ndesc, 16) : 0);
    ST32(ARG(3), b);
    RET(0);
}
void H_AudioQueueFreeBuffer(CPU *c) { gptr b = ARG(1); if (b) { gfree(LD32(b + 4)); gfree(LD32(b + 20)); gfree(b); } RET(0); }
static void aq_set_running(CPU *c, uint32_t id, AQ *a, bool r) {
    if (a->running == r) return;
    a->running = r;
    if (a->listener_proc) guest_call3(c, a->listener_proc, a->listener_user, id, 0x6171726e /* 'aqrn' */);
}
static void host_sync(uint32_t id, AQ *a) {
    if (!a->running || a->paused || !a->nq) { if (a->host_playing) { ha_stream_stop(id); a->host_playing = false; } return; }
    QEnt *e = &a->q[0];
    AFile *f = AF(e->file);
    if (!f) return;
    if (!a->host_playing || a->host_file != e->file || a->host_next_packet != e->first) {
        double off = (double)e->first * a->fpp / a->rate + (rt_now_ms / 1000.0 - a->play_start);
        if (off < 0) off = 0;
        ha_stream_play(id, f->path, off, a->volume);
        a->host_playing = true; a->host_file = e->file;
    }
    a->host_next_packet = e->first + e->count;
}
void H_AudioQueueEnqueueBuffer(CPU *c) {
    AQ *a = Q(ARG(0)); if (!a) { RET(-50); return; }
    gptr b = ARG(1);
    if (a->nq == 16) { RET(-66687); return; }
    QEnt e = {b, 0, 0, 0, 0};
    uint32_t np = ARG(2) ? ARG(2) : LD32(b + 24);
    e.dur = (double)np * a->fpp / a->rate;
    gptr data = LD32(b + 4);
    for (uint32_t i = 0; i < NPO && i < nporig; i++) if (porig[i].dst == data) { e.file = porig[i].file; e.first = porig[i].first; e.count = porig[i].count; }
    if (!a->nq) a->play_start = now_s();
    a->q[a->nq++] = e;
    RET(0);
}
void H_AudioQueuePrime(CPU *c) { if (ARG(2)) ST32(ARG(2), 0); RET(0); }
void H_AudioQueueStart(CPU *c) {
    uint32_t id = ARG(0); AQ *a = Q(id); if (!a) { RET(-50); return; }
    if (a->paused) { a->paused = false; a->play_start = now_s(); }
    else if (!a->running) a->play_start = now_s();
    aq_set_running(c, id, a, true);
    host_sync(id, a);
    RET(0);
}
void H_AudioQueuePause(CPU *c) { uint32_t id = ARG(0); AQ *a = Q(id); if (!a) { RET(-50); return; } a->paused = true; if (a->host_playing) { ha_stream_stop(id); a->host_playing = false; } RET(0); }
void H_AudioQueueStop(CPU *c) {
    uint32_t id = ARG(0); AQ *a = Q(id); if (!a) { RET(-50); return; }
    if (ARG(1) & 0xff) {   /* immediate */
        a->nq = 0; a->paused = false; a->stopping = false;
        if (a->host_playing) { ha_stream_stop(id); a->host_playing = false; }
        aq_set_running(c, id, a, false);
        a->played_frames = 0;
    } else a->stopping = true;
    RET(0);
}
void H_AudioQueueFlush(CPU *c) { RET(0); }
void H_AudioQueueDispose(CPU *c) { uint32_t id = ARG(0); AQ *a = Q(id); if (!a) { RET(-50); return; } if (a->host_playing) ha_stream_stop(id); a->used = false; RET(0); }
void H_AudioQueueSetParameter(CPU *c) { AQ *a = Q(ARG(0)); if (!a) { RET(-50); return; } if (ARG(1) == 1) { a->volume = U2F(ARG(2)); ha_stream_volume(ARG(0), a->volume); } RET(0); }
void H_AudioQueueGetParameter(CPU *c) { AQ *a = Q(ARG(0)); if (!a) { RET(-50); return; } ST32(ARG(2), F2U(ARG(1) == 1 ? a->volume : 0)); RET(0); }
void H_AudioQueueSetProperty(CPU *c) { RET(0); }   /* magic cookie / channel layout: the host decoder reads the file's own cookie */
void H_AudioQueueGetProperty(CPU *c) {
    AQ *a = Q(ARG(0)); if (!a) { RET(-50); return; }
    if (ARG(1) == 0x6171726e) { ST32(ARG(2), a->running); if (ARG(3)) ST32(ARG(3), 4); RET(0); return; }
    if (ARG(1) == 0x61717372) { double r = 44100.0; memcpy(G2H(ARG(2)), &r, 8); if (ARG(3)) ST32(ARG(3), 8); RET(0); return; }  /* 'aqsr' device rate */
    rt_log("AudioQueueGetProperty %08x unsupported", ARG(1)); RET(-50);
}
void H_AudioQueueAddPropertyListener(CPU *c) { AQ *a = Q(ARG(0)); if (!a) { RET(-50); return; } a->listener_proc = ARG(2); a->listener_user = ARG(3); RET(0); }
void H_AudioQueueRemovePropertyListener(CPU *c) { AQ *a = Q(ARG(0)); if (a) a->listener_proc = 0; RET(0); }
void H_AudioQueueCreateTimeline(CPU *c) { ST32(ARG(1), 0x7100); RET(0); }
void H_AudioQueueDisposeTimeline(CPU *c) { RET(0); }
void H_AudioQueueGetCurrentTime(CPU *c) {
    AQ *a = Q(ARG(0)); if (!a) { RET(-50); return; }
    gptr ts = ARG(2);
    double frames = a->played_frames;
    if (a->running && !a->paused && a->nq) frames += (now_s() - a->play_start) * a->rate;
    if (ts) { memset(G2H(ts), 0, 64); ST64(ts, D2U(frames)); ST32(ts + 56, 1); }
    if (ARG(3)) ST8(ARG(3), 0);
    RET(0);
}
/* run-loop step: complete buffers whose play time has elapsed and hand them back to the game */
void audio_tick(CPU *c) {
    for (int k = 0; k < NAQ; k++) {
        AQ *a = &aqs[k];
        if (!a->used || !a->running || a->paused) continue;
        uint32_t id = 0xB1000000u | (uint32_t)k;
        int guard = 0;
        while (a->nq && now_s() >= a->play_start + a->q[0].dur && guard++ < 16) {
            QEnt e = a->q[0];
            a->play_start += e.dur;
            a->played_frames += e.dur * a->rate;
            memmove(a->q, a->q + 1, (a->nq - 1) * sizeof(QEnt)); a->nq--;
            if (!a->stopping) guest_call3(c, a->cb, a->user, id, e.buf);
        }
        if (!a->nq && a->stopping) { a->stopping = false; aq_set_running(c, id, a, false); }
        host_sync(id, a);
    }
}
void audio_init(void) {}

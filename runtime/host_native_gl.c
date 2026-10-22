/* host_native_gl.c — native stand-in for the host GL: tracks object names and drawable size, records call counts.
 * Used only for headless boot testing; rendering is verified in the browser build. */
#ifndef GUEST_IDENTITY
#include "rt.h"
#include "hostgl.h"
static uint32_t next_name = 1, rb_w, rb_h, cur_rb;
uint64_t gl_calls, gl_draws;
#define CNT gl_calls++
static void gen(int n, void *p) { uint32_t *o = p; for (int i = 0; i < n; i++) o[i] = next_name++; gl_calls++; }
void hgl_ActiveTexture(uint32_t a) { (void)a; CNT; }
void hgl_AttachShader(uint32_t a, uint32_t b) { (void)a; (void)b; CNT; }
void hgl_BindAttribLocation(uint32_t a, uint32_t b, const char *s) { (void)a; (void)b; (void)s; CNT; }
void hgl_BindBuffer(uint32_t a, uint32_t b) { (void)a; (void)b; CNT; }
void hgl_BindFramebuffer(uint32_t a, uint32_t b) { (void)a; (void)b; CNT; }
void hgl_BindRenderbuffer(uint32_t a, uint32_t b) { (void)a; cur_rb = b; CNT; }
void hgl_BindTexture(uint32_t a, uint32_t b) { (void)a; (void)b; CNT; }
void hgl_BlendFunc(uint32_t a, uint32_t b) { (void)a; (void)b; CNT; }
void hgl_BufferData(uint32_t a, uint32_t b, const void *p, uint32_t u) { (void)a; (void)b; (void)p; (void)u; CNT; }
void hgl_BufferSubData(uint32_t a, uint32_t b, uint32_t s, const void *p) { (void)a; (void)b; (void)s; (void)p; CNT; }
uint32_t hgl_CheckFramebufferStatus(uint32_t a) { (void)a; CNT; return 0x8CD5; }
void hgl_Clear(uint32_t a) { (void)a; CNT; }
void hgl_ClearColor(float a, float b, float c, float d) { (void)a; (void)b; (void)c; (void)d; CNT; }
void hgl_ColorMask(int a, int b, int c, int d) { (void)a; (void)b; (void)c; (void)d; CNT; }
void hgl_CompileShader(uint32_t a) { (void)a; CNT; }
void hgl_CompressedTexImage2D(uint32_t t, int l, uint32_t f, int w, int h, int b, int s, const void *p) { (void)t; (void)l; (void)f; (void)w; (void)h; (void)b; (void)s; (void)p; CNT; }
void hgl_CompressedTexSubImage2D(uint32_t t, int l, int x, int y, int w, int h, uint32_t f, int s, const void *p) { (void)t; (void)l; (void)x; (void)y; (void)w; (void)h; (void)f; (void)s; (void)p; CNT; }
uint32_t hgl_CreateProgram(void) { CNT; return next_name++; }
uint32_t hgl_CreateShader(uint32_t a) { (void)a; CNT; return next_name++; }
void hgl_CullFace(uint32_t a) { (void)a; CNT; }
void hgl_DeleteBuffers(int n, const void *p) { (void)n; (void)p; CNT; }
void hgl_DeleteFramebuffers(int n, const void *p) { (void)n; (void)p; CNT; }
void hgl_DeleteProgram(uint32_t a) { (void)a; CNT; }
void hgl_DeleteRenderbuffers(int n, const void *p) { (void)n; (void)p; CNT; }
void hgl_DeleteShader(uint32_t a) { (void)a; CNT; }
void hgl_DeleteTextures(int n, const void *p) { (void)n; (void)p; CNT; }
void hgl_DepthMask(int a) { (void)a; CNT; }
void hgl_Disable(uint32_t a) { (void)a; CNT; }
void hgl_DisableVertexAttribArray(uint32_t a) { (void)a; CNT; }
void hgl_DrawArrays(uint32_t m, int f, int n) { (void)m; (void)f; (void)n; CNT; gl_draws++; }
void hgl_DrawElements(uint32_t m, int n, uint32_t t, uint32_t o, const void *p) { (void)m; (void)n; (void)t; (void)o; (void)p; CNT; gl_draws++; }
void hgl_Enable(uint32_t a) { (void)a; CNT; }
void hgl_EnableVertexAttribArray(uint32_t a) { (void)a; CNT; }
void hgl_FramebufferRenderbuffer(uint32_t a, uint32_t b, uint32_t c, uint32_t d) { (void)a; (void)b; (void)c; (void)d; CNT; }
void hgl_FramebufferTexture2D(uint32_t a, uint32_t b, uint32_t c, uint32_t d, int e) { (void)a; (void)b; (void)c; (void)d; (void)e; CNT; }
void hgl_FrontFace(uint32_t a) { (void)a; CNT; }
void hgl_GenBuffers(int n, void *p) { gen(n, p); }
void hgl_GenFramebuffers(int n, void *p) { gen(n, p); }
void hgl_GenRenderbuffers(int n, void *p) { gen(n, p); }
void hgl_GenTextures(int n, void *p) { gen(n, p); }
uint32_t hgl_GetError(void) { CNT; return 0; }
void hgl_GetFloatv(uint32_t a, void *p) { (void)a; memset(p, 0, 4); CNT; }
void hgl_GetIntegerv(uint32_t a, void *p) {
    int32_t v = 0;
    switch (a) { case 0x0D33: v = 4096; break; /* MAX_TEXTURE_SIZE */ case 0x8869: v = 16; break; case 0x8872: v = 16; break; case 0x8B4C: v = 16; break;
                 case 0x8DFB: v = 256; break; case 0x8DFD: v = 224; break; case 0x8DFC: v = 15; break; case 0x8CA6: v = 1; break; }
    memcpy(p, &v, 4); CNT;
}
void hgl_GetProgramInfoLog(uint32_t a, int n, void *l, void *s) { (void)a; if (l) memset(l, 0, 4); if (n && s) *(char *)s = 0; CNT; }
void hgl_GetProgramiv(uint32_t a, uint32_t p, void *o) { (void)a; int32_t v = (p == 0x8B82 || p == 0x8B83) ? 1 : 0; memcpy(o, &v, 4); CNT; }
void hgl_GetRenderbufferParameteriv(uint32_t t, uint32_t p, void *o) { (void)t; int32_t v = p == 0x8D42 ? (int32_t)rb_w : p == 0x8D43 ? (int32_t)rb_h : 0; memcpy(o, &v, 4); CNT; }
void hgl_GetShaderInfoLog(uint32_t a, int n, void *l, void *s) { (void)a; if (l) memset(l, 0, 4); if (n && s) *(char *)s = 0; CNT; }
void hgl_GetShaderSource(uint32_t a, int n, void *l, void *s) { (void)a; if (l) memset(l, 0, 4); if (n && s) *(char *)s = 0; CNT; }
void hgl_GetShaderiv(uint32_t a, uint32_t p, void *o) { (void)a; int32_t v = p == 0x8B81 ? 1 : 0; memcpy(o, &v, 4); CNT; }
static int next_loc;
int hgl_GetUniformLocation(uint32_t a, const char *n) { (void)a; (void)n; CNT; return next_loc++; }
uint32_t hgl_IsEnabled(uint32_t a) { (void)a; CNT; return 0; }
void hgl_LinkProgram(uint32_t a) { (void)a; CNT; }
void hgl_PixelStorei(uint32_t a, int b) { (void)a; (void)b; CNT; }
void hgl_PolygonOffset(float a, float b) { (void)a; (void)b; CNT; }
void hgl_RenderbufferStorage(uint32_t t, uint32_t f, int w, int h) { (void)t; (void)f; rb_w = (uint32_t)w; rb_h = (uint32_t)h; CNT; }
void hgl_Scissor(int a, int b, int c, int d) { (void)a; (void)b; (void)c; (void)d; CNT; }
void hgl_ShaderSource(uint32_t a, const char *s) { (void)a; (void)s; CNT; }
void hgl_TexImage2D(uint32_t t, int l, int i, int w, int h, int b, uint32_t f, uint32_t ty, const void *p) { (void)t; (void)l; (void)i; (void)w; (void)h; (void)b; (void)f; (void)ty; (void)p; CNT; }
void hgl_TexParameteri(uint32_t a, uint32_t b, int c) { (void)a; (void)b; (void)c; CNT; }
void hgl_TexSubImage2D(uint32_t t, int l, int x, int y, int w, int h, uint32_t f, uint32_t ty, const void *p) { (void)t; (void)l; (void)x; (void)y; (void)w; (void)h; (void)f; (void)ty; (void)p; CNT; }
void hgl_Uniform1f(int l, float a) { (void)l; (void)a; CNT; }
void hgl_Uniform1fv(int l, int n, const void *p) { (void)l; (void)n; (void)p; CNT; }
void hgl_Uniform1i(int l, int a) { (void)l; (void)a; CNT; }
void hgl_Uniform2f(int l, float a, float b) { (void)l; (void)a; (void)b; CNT; }
void hgl_Uniform2fv(int l, int n, const void *p) { (void)l; (void)n; (void)p; CNT; }
void hgl_Uniform3f(int l, float a, float b, float c) { (void)l; (void)a; (void)b; (void)c; CNT; }
void hgl_Uniform3fv(int l, int n, const void *p) { (void)l; (void)n; (void)p; CNT; }
void hgl_Uniform4f(int l, float a, float b, float c, float d) { (void)l; (void)a; (void)b; (void)c; (void)d; CNT; }
void hgl_Uniform4fv(int l, int n, const void *p) { (void)l; (void)n; (void)p; CNT; }
void hgl_UniformMatrix4fv(int l, int n, int t, const void *p) { (void)l; (void)n; (void)t; (void)p; CNT; }
void hgl_UseProgram(uint32_t a) { (void)a; CNT; }
void hgl_ValidateProgram(uint32_t a) { (void)a; CNT; }
void hgl_VertexAttribPointer(uint32_t i, int s, uint32_t t, int n, int st, uint32_t o, const void *p) { (void)i; (void)s; (void)t; (void)n; (void)st; (void)o; (void)p; CNT; }
void hgl_Viewport(int a, int b, int c, int d) { (void)a; (void)b; (void)c; (void)d; CNT; }
void hgl_SetDrawableRenderbuffer(void) { CNT; }
uint64_t native_presents;
void hgl_Present(void) { native_presents++; }
gptr native_last_textfield;
void sims3_media_picked(uint32_t view, const char *list);
uint32_t host_ui_event(int kind, gptr view, const char *arg, float x, float y, float w, float h) {
    static uint32_t ids;
    if (kind == 7) native_last_textfield = view;
    if (kind == 12) {   /* media picker panel: SIMS3_MEDIA=pick chooses two stand-in songs, anything else cancels */
        const char *m = getenv("SIMS3_MEDIA");
        sims3_media_picked(view, m && !strcmp(m, "pick") ? "1\x1f" "Song One\x1e" "2\x1f" "Song Two" : "");
    }
    if (rt_verbose) rt_log("ui_event kind=%d view=%08x %s (%.0f,%.0f %.0fx%.0f)", kind, view, arg ? arg : "", x, y, w, h);
    return kind == 2 || kind == 5 || kind == 6 ? 0 : ++ids;
}
#endif
#ifndef GUEST_IDENTITY
#include "hostaudio.h"
uint64_t native_audio_events;
void ha_buffer(uint32_t id, const void *pcm, uint32_t bytes, uint32_t ch, uint32_t bits, uint32_t freq) { (void)id; (void)pcm; (void)bytes; (void)ch; (void)bits; (void)freq; native_audio_events++; }
void ha_buffer_delete(uint32_t id) { (void)id; }
void ha_source_play(uint32_t s, uint32_t b, int l, float g, float p) { (void)s; (void)b; (void)l; (void)g; (void)p; native_audio_events++; }
void ha_source_stop(uint32_t s) { (void)s; }
void ha_source_loop(uint32_t s, int l) { (void)s; (void)l; }
void ha_source_param(uint32_t s, float g, float p) { (void)s; (void)g; (void)p; }
/* AudioQueue output streams: a simulated output device that consumes frames in real (run-loop) time, honouring the
   hostaudio.h contract. SIMS3_AUDIO_DUMP=dir writes every stream's PCM to dir/aq<k>_<n>_<rate>Hz_<ch>ch.s16le. */
typedef struct { bool used, running; double rate; uint32_t ch; uint64_t appended; double base, anchor; FILE *dump; } NStream;
static NStream nstreams[8];
static bool dev_suspended;
static NStream *nst(uint32_t q) { return &nstreams[q & 7]; }
static double ns_played(NStream *s) {
    if (!s->running || dev_suspended) return s->base;
    double p = s->base + (rt_now_ms / 1000.0 - s->anchor) * s->rate;
    return p > (double)s->appended ? (double)s->appended : p;
}
void ha_stream_open(uint32_t q, double rate, uint32_t ch) {
    static int serial;
    NStream *s = nst(q);
    if (s->dump) fclose(s->dump);
    memset(s, 0, sizeof *s);
    s->used = true; s->rate = rate; s->ch = ch;
    const char *dir = getenv("SIMS3_AUDIO_DUMP");
    if (dir) { char p[512]; snprintf(p, sizeof p, "%s/aq%u_%d_%.0fHz_%uch.s16le", dir, q & 7, serial++, rate, ch); s->dump = fopen(p, "wb"); }
    native_audio_events++;
}
void ha_stream_pcm(uint32_t q, const int16_t *pcm, uint32_t frames) {
    NStream *s = nst(q);
    if (!s->used) return;
    if (s->running && !dev_suspended && ns_played(s) >= (double)s->appended) { s->base = (double)s->appended; s->anchor = rt_now_ms / 1000.0; }
    s->appended += frames;
    if (s->dump) fwrite(pcm, sizeof(int16_t) * s->ch, frames, s->dump);
}
void ha_stream_run(uint32_t q, int on) {
    NStream *s = nst(q);
    if (!s->used || s->running == !!on) return;
    if (on) { s->anchor = rt_now_ms / 1000.0; s->running = true; }
    else { s->base = ns_played(s); s->running = false; }
}
double ha_stream_played(uint32_t q) { NStream *s = nst(q); return s->used ? ns_played(s) : 0; }
void ha_stream_stop(uint32_t q) { NStream *s = nst(q); if (s->dump) fclose(s->dump); memset(s, 0, sizeof *s); }
void ha_stream_volume(uint32_t q, float g) { (void)q; (void)g; }
/* system music player stand-in: plays its queue in run-loop time, 180 s per song */
static uint32_t mq[256], mqn; static int mstate, midx = -1; static double mstart;
void ha_media_queue(const uint32_t *ids, uint32_t n) { mqn = n > 256 ? 256 : n; memcpy(mq, ids, mqn * 4); mstate = 0; midx = mqn ? 0 : -1; }
static void media_advance(void) {
    if (mstate != 1 || midx < 0) return;
    while (midx >= 0 && rt_now_ms / 1000.0 - mstart >= 180) { mstart += 180; if (++midx >= (int)mqn) { midx = mqn ? 0 : -1; mstate = 0; } }
}
void ha_media_cmd(int cmd, double arg) {
    media_advance();
    if (rt_verbose) rt_log("media: cmd %d (%.2f), %u queued", cmd, arg, mqn);
    if (cmd == 0 && midx >= 0 && mstate != 1) { mstate = 1; mstart = rt_now_ms / 1000.0; }
    else if (cmd == 1 && mstate == 1) mstate = 2;
    else if (cmd == 2) { mstate = 0; midx = mqn ? 0 : -1; }
    else if (cmd == 3 && mqn) { midx = (midx + 1) % (int)mqn; mstart = rt_now_ms / 1000.0; }
    else if (cmd == 4 && mqn) { midx = (midx + (int)mqn - 1) % (int)mqn; mstart = rt_now_ms / 1000.0; }
    else if (cmd == 5 || cmd == 6) mstart = rt_now_ms / 1000.0 - (cmd == 6 ? arg : 0);
}
int ha_media_state(void) { media_advance(); return mstate; }
int ha_media_index(void) { media_advance(); return midx; }
double ha_media_time(void) { media_advance(); return mstate ? rt_now_ms / 1000.0 - mstart : 0; }
void ha_suspend(int on) {
    if (dev_suspended == !!on) return;
    for (int i = 0; i < 8; i++) {
        NStream *s = &nstreams[i];
        if (!s->used || !s->running) continue;
        if (on) s->base = ns_played(s); else s->anchor = rt_now_ms / 1000.0;
    }
    dev_suspended = !!on;
}
#endif
#ifndef GUEST_IDENTITY
void hgl_AlphaFunc(uint32_t a, float b) { (void)a; (void)b; CNT; }
void hgl_ClientActiveTexture(uint32_t a) { (void)a; CNT; }
void hgl_Color4f(float a, float b, float c, float d) { (void)a; (void)b; (void)c; (void)d; CNT; }
void hgl_ColorPointer(int s, uint32_t t, int st, uint32_t o, const void *p) { (void)s; (void)t; (void)st; (void)o; (void)p; CNT; }
void hgl_DisableClientState(uint32_t a) { (void)a; CNT; }
void hgl_EnableClientState(uint32_t a) { (void)a; CNT; }
void hgl_Fogf(uint32_t a, float b) { (void)a; (void)b; CNT; }
void hgl_Fogfv(uint32_t a, const void *p) { (void)a; (void)p; CNT; }
void hgl_LoadIdentity(void) { CNT; }
void hgl_LoadMatrixf(const void *p) { (void)p; CNT; }
void hgl_MatrixMode(uint32_t a) { (void)a; CNT; }
void hgl_MultMatrixf(const void *p) { (void)p; CNT; }
void hgl_Orthof(float a, float b, float c, float d, float e, float f) { (void)a; (void)b; (void)c; (void)d; (void)e; (void)f; CNT; }
void hgl_PopMatrix(void) { CNT; }
void hgl_PushMatrix(void) { CNT; }
void hgl_Scalef(float a, float b, float c) { (void)a; (void)b; (void)c; CNT; }
void hgl_Translatef(float a, float b, float c) { (void)a; (void)b; (void)c; CNT; }
void hgl_ShadeModel(uint32_t a) { (void)a; CNT; }
void hgl_TexCoordPointer(int s, uint32_t t, int st, uint32_t o, const void *p) { (void)s; (void)t; (void)st; (void)o; (void)p; CNT; }
void hgl_TexEnvf(uint32_t a, uint32_t b, float c) { (void)a; (void)b; (void)c; CNT; }
void hgl_TexEnvi(uint32_t a, uint32_t b, int c) { (void)a; (void)b; (void)c; CNT; }
void hgl_VertexPointer(int s, uint32_t t, int st, uint32_t o, const void *p) { (void)s; (void)t; (void)st; (void)o; (void)p; CNT; }
void hgl_CurrentPaletteMatrixOES(uint32_t a) { (void)a; CNT; }
void hgl_MatrixIndexPointerOES(int s, uint32_t t, int st, uint32_t o, const void *p) { (void)s; (void)t; (void)st; (void)o; (void)p; CNT; }
void hgl_WeightPointerOES(int s, uint32_t t, int st, uint32_t o, const void *p) { (void)s; (void)t; (void)st; (void)o; (void)p; CNT; }
#endif

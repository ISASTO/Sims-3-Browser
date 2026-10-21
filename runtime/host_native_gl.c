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
uint32_t host_ui_event(int kind, gptr view, const char *arg, float x, float y, float w, float h) {
    static uint32_t ids;
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
void ha_stream_play(uint32_t q, const char *path, double off, float g) { if (rt_verbose) rt_log("audio: stream %u play %s @%.2fs gain %.2f", q, path, off, g); native_audio_events++; }
void ha_stream_stop(uint32_t q) { (void)q; }
void ha_stream_volume(uint32_t q, float g) { (void)q; (void)g; }
void ha_suspend(int s) { (void)s; }
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

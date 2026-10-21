/* gles.c — OpenGL ES 2.0 entry points. Arguments are unpacked from the guest ABI and forwarded to the host GL
 * (hgl_*: WebGL2 in the browser, a recording stub natively). Guest client-memory pointers are passed as host
 * pointers (identity in wasm). OpenGL ES 1.1 fixed-function entry points are not provided (the game selects its
 * ES 2.0 renderer when an ES 2.0 context is available — see DECISIONS.md D10). */
#include "rt.h"
#include "hostgl.h"

#define P(i) ((void *)(ARG(i) ? G2H(ARG(i)) : NULL))
void H_glActiveTexture(CPU *c) { hgl_ActiveTexture(ARG(0)); }
void H_glAttachShader(CPU *c) { hgl_AttachShader(ARG(0), ARG(1)); }
void H_glBindAttribLocation(CPU *c) { hgl_BindAttribLocation(ARG(0), ARG(1), GSTR(ARG(2))); }
void H_glBindBuffer(CPU *c) { hgl_BindBuffer(ARG(0), ARG(1)); }
void H_glBindFramebuffer(CPU *c) { hgl_BindFramebuffer(ARG(0), ARG(1)); }
void H_glBindRenderbuffer(CPU *c) { hgl_BindRenderbuffer(ARG(0), ARG(1)); }
void H_glBindTexture(CPU *c) { hgl_BindTexture(ARG(0), ARG(1)); }
void H_glBlendFunc(CPU *c) { hgl_BlendFunc(ARG(0), ARG(1)); }
void H_glBufferData(CPU *c) { hgl_BufferData(ARG(0), ARG(1), P(2), ARG(3)); }
void H_glBufferSubData(CPU *c) { hgl_BufferSubData(ARG(0), ARG(1), ARG(2), P(3)); }
void H_glCheckFramebufferStatus(CPU *c) { RET(hgl_CheckFramebufferStatus(ARG(0))); }
void H_glClear(CPU *c) { hgl_Clear(ARG(0)); }
void H_glClearColor(CPU *c) { hgl_ClearColor(ARGF(0), ARGF(1), ARGF(2), ARGF(3)); }
void H_glColorMask(CPU *c) { hgl_ColorMask(ARG(0) & 0xff, ARG(1) & 0xff, ARG(2) & 0xff, ARG(3) & 0xff); }
void H_glCompileShader(CPU *c) { hgl_CompileShader(ARG(0)); }
void H_glCompressedTexImage2D(CPU *c) { hgl_CompressedTexImage2D(ARG(0), (int)ARG(1), ARG(2), (int)ARG(3), (int)ARG(4), (int)ARG(5), (int)ARG(6), P(7)); }
void H_glCompressedTexSubImage2D(CPU *c) { hgl_CompressedTexSubImage2D(ARG(0), (int)ARG(1), (int)ARG(2), (int)ARG(3), (int)ARG(4), (int)ARG(5), ARG(6), (int)ARG(7), P(8)); }
void H_glCreateProgram(CPU *c) { RET(hgl_CreateProgram()); }
void H_glCreateShader(CPU *c) { RET(hgl_CreateShader(ARG(0))); }
void H_glCullFace(CPU *c) { hgl_CullFace(ARG(0)); }
void H_glDeleteBuffers(CPU *c) { hgl_DeleteBuffers((int)ARG(0), P(1)); }
void H_glDeleteFramebuffers(CPU *c) { hgl_DeleteFramebuffers((int)ARG(0), P(1)); }
void H_glDeleteProgram(CPU *c) { hgl_DeleteProgram(ARG(0)); }
void H_glDeleteRenderbuffers(CPU *c) { hgl_DeleteRenderbuffers((int)ARG(0), P(1)); }
void H_glDeleteShader(CPU *c) { hgl_DeleteShader(ARG(0)); }
void H_glDeleteTextures(CPU *c) { hgl_DeleteTextures((int)ARG(0), P(1)); }
void H_glDepthMask(CPU *c) { hgl_DepthMask(ARG(0) & 0xff); }
void H_glDisable(CPU *c) { hgl_Disable(ARG(0)); }
void H_glDisableVertexAttribArray(CPU *c) { hgl_DisableVertexAttribArray(ARG(0)); }
void H_glDrawArrays(CPU *c) { hgl_DrawArrays(ARG(0), (int)ARG(1), (int)ARG(2)); }
void H_glDrawElements(CPU *c) { hgl_DrawElements(ARG(0), (int)ARG(1), ARG(2), ARG(3), P(3)); }
void H_glEnable(CPU *c) { hgl_Enable(ARG(0)); }
void H_glEnableVertexAttribArray(CPU *c) { hgl_EnableVertexAttribArray(ARG(0)); }
void H_glFramebufferRenderbuffer(CPU *c) { hgl_FramebufferRenderbuffer(ARG(0), ARG(1), ARG(2), ARG(3)); }
void H_glFramebufferTexture2D(CPU *c) { hgl_FramebufferTexture2D(ARG(0), ARG(1), ARG(2), ARG(3), (int)ARG(4)); }
void H_glFrontFace(CPU *c) { hgl_FrontFace(ARG(0)); }
void H_glGenBuffers(CPU *c) { hgl_GenBuffers((int)ARG(0), P(1)); }
void H_glGenFramebuffers(CPU *c) { hgl_GenFramebuffers((int)ARG(0), P(1)); }
void H_glGenRenderbuffers(CPU *c) { hgl_GenRenderbuffers((int)ARG(0), P(1)); }
void H_glGenTextures(CPU *c) { hgl_GenTextures((int)ARG(0), P(1)); }
void H_glGetError(CPU *c) { RET(hgl_GetError()); }
void H_glGetFloatv(CPU *c) { hgl_GetFloatv(ARG(0), P(1)); }
void H_glGetIntegerv(CPU *c) { hgl_GetIntegerv(ARG(0), P(1)); }
void H_glGetProgramInfoLog(CPU *c) { hgl_GetProgramInfoLog(ARG(0), (int)ARG(1), P(2), P(3)); }
void H_glGetProgramiv(CPU *c) { hgl_GetProgramiv(ARG(0), ARG(1), P(2)); }
void H_glGetRenderbufferParameteriv(CPU *c) { hgl_GetRenderbufferParameteriv(ARG(0), ARG(1), P(2)); }
void H_glGetShaderInfoLog(CPU *c) { hgl_GetShaderInfoLog(ARG(0), (int)ARG(1), P(2), P(3)); }
void H_glGetShaderSource(CPU *c) { hgl_GetShaderSource(ARG(0), (int)ARG(1), P(2), P(3)); }
void H_glGetShaderiv(CPU *c) { hgl_GetShaderiv(ARG(0), ARG(1), P(2)); }
void H_glGetUniformLocation(CPU *c) { RET((uint32_t)hgl_GetUniformLocation(ARG(0), GSTR(ARG(1)))); }
void H_glIsEnabled(CPU *c) { RET(hgl_IsEnabled(ARG(0))); }
void H_glLinkProgram(CPU *c) { hgl_LinkProgram(ARG(0)); }
void H_glPixelStorei(CPU *c) { hgl_PixelStorei(ARG(0), (int)ARG(1)); }
void H_glPolygonOffset(CPU *c) { hgl_PolygonOffset(ARGF(0), ARGF(1)); }
void H_glRenderbufferStorage(CPU *c) { hgl_RenderbufferStorage(ARG(0), ARG(1), (int)ARG(2), (int)ARG(3)); }
void H_glScissor(CPU *c) { hgl_Scissor((int)ARG(0), (int)ARG(1), (int)ARG(2), (int)ARG(3)); }
void H_glShaderSource(CPU *c) {
    /* (shader, count, const char **strings, const int *lengths) -> concatenate on the host side */
    uint32_t n = ARG(1); gptr strs = ARG(2), lens = ARG(3);
    size_t total = 0;
    for (uint32_t i = 0; i < n; i++) { int32_t l = lens ? (int32_t)LD32(lens + 4 * i) : -1; total += l < 0 ? strlen(GSTR(LD32(strs + 4 * i))) : (size_t)l; }
    char *src = malloc(total + 1); size_t k = 0;
    for (uint32_t i = 0; i < n; i++) { int32_t l = lens ? (int32_t)LD32(lens + 4 * i) : -1; const char *s = GSTR(LD32(strs + 4 * i)); size_t m = l < 0 ? strlen(s) : (size_t)l; memcpy(src + k, s, m); k += m; }
    src[k] = 0;
    hgl_ShaderSource(ARG(0), src);
    free(src);
}
void H_glTexImage2D(CPU *c) { hgl_TexImage2D(ARG(0), (int)ARG(1), (int)ARG(2), (int)ARG(3), (int)ARG(4), (int)ARG(5), ARG(6), ARG(7), P(8)); }
void H_glTexParameteri(CPU *c) { hgl_TexParameteri(ARG(0), ARG(1), (int)ARG(2)); }
void H_glTexSubImage2D(CPU *c) { hgl_TexSubImage2D(ARG(0), (int)ARG(1), (int)ARG(2), (int)ARG(3), (int)ARG(4), (int)ARG(5), ARG(6), ARG(7), P(8)); }
void H_glUniform1f(CPU *c) { hgl_Uniform1f((int)ARG(0), ARGF(1)); }
void H_glUniform1fv(CPU *c) { hgl_Uniform1fv((int)ARG(0), (int)ARG(1), P(2)); }
void H_glUniform1i(CPU *c) { hgl_Uniform1i((int)ARG(0), (int)ARG(1)); }
void H_glUniform2f(CPU *c) { hgl_Uniform2f((int)ARG(0), ARGF(1), ARGF(2)); }
void H_glUniform2fv(CPU *c) { hgl_Uniform2fv((int)ARG(0), (int)ARG(1), P(2)); }
void H_glUniform3f(CPU *c) { hgl_Uniform3f((int)ARG(0), ARGF(1), ARGF(2), ARGF(3)); }
void H_glUniform3fv(CPU *c) { hgl_Uniform3fv((int)ARG(0), (int)ARG(1), P(2)); }
void H_glUniform4f(CPU *c) { hgl_Uniform4f((int)ARG(0), ARGF(1), ARGF(2), ARGF(3), ARGF(4)); }
void H_glUniform4fv(CPU *c) { hgl_Uniform4fv((int)ARG(0), (int)ARG(1), P(2)); }
void H_glUniformMatrix4fv(CPU *c) { hgl_UniformMatrix4fv((int)ARG(0), (int)ARG(1), ARG(2) & 0xff, P(3)); }
void H_glUseProgram(CPU *c) { hgl_UseProgram(ARG(0)); }
void H_glValidateProgram(CPU *c) { hgl_ValidateProgram(ARG(0)); }
void H_glVertexAttribPointer(CPU *c) { hgl_VertexAttribPointer(ARG(0), (int)ARG(1), ARG(2), ARG(3) & 0xff, (int)ARG(4), ARG(5), P(5)); }
void H_glViewport(CPU *c) { hgl_Viewport((int)ARG(0), (int)ARG(1), (int)ARG(2), (int)ARG(3)); }

/* EAGL drawable: allocate the bound renderbuffer with the drawable's pixel size */
extern float dev_w_pt, dev_h_pt, dev_scale;
void gl_renderbuffer_from_drawable(CPU *c, uint32_t target, gptr layer) {
    UNUSED(c); UNUSED(layer);
    int w = (int)(dev_w_pt * dev_scale), h = (int)(dev_h_pt * dev_scale);
    rt_log("EAGL: renderbufferStorage fromDrawable %dx%d", w, h);
    hgl_RenderbufferStorage(target, 0x8058 /* GL_RGBA8 */, w, h);
    hgl_SetDrawableRenderbuffer();
}
uint64_t gl_presents;
void gl_present(CPU *c) { UNUSED(c); gl_presents++; hgl_Present(); }
void gl_init(void) {}

/* ---------------------------------------------------------------- OpenGL ES 1.1 subset + OES framebuffer aliases */
static float fx(uint32_t v) { return (float)(int32_t)v / 65536.0f; }
void H_glAlphaFunc(CPU *c) { hgl_AlphaFunc(ARG(0), ARGF(1)); }
void H_glClientActiveTexture(CPU *c) { hgl_ClientActiveTexture(ARG(0)); }
void H_glColor4f(CPU *c) { hgl_Color4f(ARGF(0), ARGF(1), ARGF(2), ARGF(3)); }
void H_glColor4ub(CPU *c) { hgl_Color4f((ARG(0) & 0xff) / 255.0f, (ARG(1) & 0xff) / 255.0f, (ARG(2) & 0xff) / 255.0f, (ARG(3) & 0xff) / 255.0f); }
void H_glColorPointer(CPU *c) { hgl_ColorPointer((int)ARG(0), ARG(1), (int)ARG(2), ARG(3), P(3)); }
void H_glDisableClientState(CPU *c) { hgl_DisableClientState(ARG(0)); }
void H_glEnableClientState(CPU *c) { hgl_EnableClientState(ARG(0)); }
void H_glFogf(CPU *c) { hgl_Fogf(ARG(0), ARGF(1)); }
void H_glFogfv(CPU *c) { hgl_Fogfv(ARG(0), P(1)); }
void H_glFogx(CPU *c) { uint32_t p = ARG(0); /* GL_FOG_MODE takes an enum, others fixed-point */ hgl_Fogf(p, p == 0x0B65 ? (float)ARG(1) : fx(ARG(1))); }
void H_glLoadIdentity(CPU *c) { UNUSED(c); hgl_LoadIdentity(); }
void H_glLoadMatrixf(CPU *c) { hgl_LoadMatrixf(P(0)); }
void H_glMatrixMode(CPU *c) { hgl_MatrixMode(ARG(0)); }
void H_glMultMatrixf(CPU *c) { hgl_MultMatrixf(P(0)); }
void H_glOrthof(CPU *c) { hgl_Orthof(ARGF(0), ARGF(1), ARGF(2), ARGF(3), U2F(LD32(c->r[13])), U2F(LD32(c->r[13] + 4))); }
void H_glPopMatrix(CPU *c) { UNUSED(c); hgl_PopMatrix(); }
void H_glPushMatrix(CPU *c) { UNUSED(c); hgl_PushMatrix(); }
void H_glScalef(CPU *c) { hgl_Scalef(ARGF(0), ARGF(1), ARGF(2)); }
void H_glTranslatef(CPU *c) { hgl_Translatef(ARGF(0), ARGF(1), ARGF(2)); }
void H_glShadeModel(CPU *c) { hgl_ShadeModel(ARG(0)); }
void H_glTexCoordPointer(CPU *c) { hgl_TexCoordPointer((int)ARG(0), ARG(1), (int)ARG(2), ARG(3), P(3)); }
void H_glVertexPointer(CPU *c) { hgl_VertexPointer((int)ARG(0), ARG(1), (int)ARG(2), ARG(3), P(3)); }
void H_glTexEnvf(CPU *c) { hgl_TexEnvf(ARG(0), ARG(1), ARGF(2)); }
void H_glTexEnvi(CPU *c) { hgl_TexEnvi(ARG(0), ARG(1), (int)ARG(2)); }
void H_glTexEnvx(CPU *c) { uint32_t pn = ARG(1); /* enum-valued params pass through, others are 16.16 */
    if (pn == 0x2200 || (pn >= 0x8571 && pn <= 0x8592) || pn == 0x8572) hgl_TexEnvi(ARG(0), pn, (int)ARG(2)); else hgl_TexEnvf(ARG(0), pn, fx(ARG(2))); }
void H_glTexParameterx(CPU *c) { hgl_TexParameteri(ARG(0), ARG(1), (int)ARG(2)); }
void H_glClearColorx(CPU *c) { hgl_ClearColor(fx(ARG(0)), fx(ARG(1)), fx(ARG(2)), fx(ARG(3))); }
void H_glCurrentPaletteMatrixOES(CPU *c) { hgl_CurrentPaletteMatrixOES(ARG(0)); }
void H_glMatrixIndexPointerOES(CPU *c) { hgl_MatrixIndexPointerOES((int)ARG(0), ARG(1), (int)ARG(2), ARG(3), P(3)); }
void H_glWeightPointerOES(CPU *c) { hgl_WeightPointerOES((int)ARG(0), ARG(1), (int)ARG(2), ARG(3), P(3)); }
void H_glBindFramebufferOES(CPU *c) { H_glBindFramebuffer(c); }
void H_glBindRenderbufferOES(CPU *c) { H_glBindRenderbuffer(c); }
void H_glCheckFramebufferStatusOES(CPU *c) { H_glCheckFramebufferStatus(c); }
void H_glDeleteFramebuffersOES(CPU *c) { H_glDeleteFramebuffers(c); }
void H_glDeleteRenderbuffersOES(CPU *c) { H_glDeleteRenderbuffers(c); }
void H_glFramebufferRenderbufferOES(CPU *c) { H_glFramebufferRenderbuffer(c); }
void H_glFramebufferTexture2DOES(CPU *c) { H_glFramebufferTexture2D(c); }
void H_glGenFramebuffersOES(CPU *c) { H_glGenFramebuffers(c); }
void H_glGenRenderbuffersOES(CPU *c) { H_glGenRenderbuffers(c); }
void H_glGetRenderbufferParameterivOES(CPU *c) { H_glGetRenderbufferParameteriv(c); }
void H_glRenderbufferStorageOES(CPU *c) { H_glRenderbufferStorage(c); }

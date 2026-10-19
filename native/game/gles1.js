/* OpenGL ES 1.1 (common profile) implemented on WebGL 1.
 *
 * The original game renders with the fixed-function GLES 1.x pipeline.  This
 * module keeps the complete fixed-function state (matrix stacks, lights,
 * materials, fog, texture environments, alpha test, clip planes, client
 * arrays and buffer objects) and generates a shader for each distinct state
 * combination.  The game renders into an off-screen framebuffer; complete
 * frames are copied to the visible canvas only at eglSwapBuffers, so partial
 * frames are never presented.
 */
(function (root) {
'use strict';

const GL_FIXED = 0x140C, GL_FLOAT = 0x1406, GL_BYTE = 0x1400, GL_UNSIGNED_BYTE = 0x1401, GL_SHORT = 0x1402, GL_UNSIGNED_SHORT = 0x1403;
const TYPE_SIZE = { 0x1400: 1, 0x1401: 1, 0x1402: 2, 0x1403: 2, 0x1404: 4, 0x1405: 4, 0x1406: 4, 0x140C: 4 };
const MV = 0x1700, PROJ = 0x1701, TEX = 0x1702;
const LIGHTING = 0x0B50, LIGHT0 = 0x4000, FOG = 0x0B60, TEXTURE_2D = 0x0DE1, ALPHA_TEST = 0x0BC0, COLOR_MATERIAL = 0x0B57,
  NORMALIZE = 0x0BA1, RESCALE_NORMAL = 0x803A, CLIP_PLANE0 = 0x3000, POINT_SPRITE = 0x8861;
const VERTEX_ARRAY = 0x8074, NORMAL_ARRAY = 0x8075, COLOR_ARRAY = 0x8076, TEXTURE_COORD_ARRAY = 0x8078, POINT_SIZE_ARRAY = 0x8B9C;
const MAX_LIGHTS = 8, MAX_UNITS = 2, MAX_CLIP = 6;
const ENV_MODULATE = 0x2100, ENV_DECAL = 0x2101, ENV_BLEND = 0x0BE2, ENV_REPLACE = 0x1E01, ENV_ADD = 0x0104, ENV_COMBINE = 0x8570;

const f32 = new Float32Array(1), u32 = new Uint32Array(f32.buffer);
function bitsToFloat(x) { u32[0] = x >>> 0; return f32[0]; }
function fixed(x) { return (x | 0) / 65536; }
function ident() { return new Float32Array([1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1]); }
function mul(a, b) {
  const c = new Float32Array(16);
  for (let j = 0; j < 4; j++) for (let i = 0; i < 4; i++) {
    c[j * 4 + i] = a[i] * b[j * 4] + a[4 + i] * b[j * 4 + 1] + a[8 + i] * b[j * 4 + 2] + a[12 + i] * b[j * 4 + 3];
  }
  return c;
}
function invert(m) {
  const inv = new Float32Array(16);
  inv[0] = m[5] * m[10] * m[15] - m[5] * m[11] * m[14] - m[9] * m[6] * m[15] + m[9] * m[7] * m[14] + m[13] * m[6] * m[11] - m[13] * m[7] * m[10];
  inv[4] = -m[4] * m[10] * m[15] + m[4] * m[11] * m[14] + m[8] * m[6] * m[15] - m[8] * m[7] * m[14] - m[12] * m[6] * m[11] + m[12] * m[7] * m[10];
  inv[8] = m[4] * m[9] * m[15] - m[4] * m[11] * m[13] - m[8] * m[5] * m[15] + m[8] * m[7] * m[13] + m[12] * m[5] * m[11] - m[12] * m[7] * m[9];
  inv[12] = -m[4] * m[9] * m[14] + m[4] * m[10] * m[13] + m[8] * m[5] * m[14] - m[8] * m[6] * m[13] - m[12] * m[5] * m[10] + m[12] * m[6] * m[9];
  inv[1] = -m[1] * m[10] * m[15] + m[1] * m[11] * m[14] + m[9] * m[2] * m[15] - m[9] * m[3] * m[14] - m[13] * m[2] * m[11] + m[13] * m[3] * m[10];
  inv[5] = m[0] * m[10] * m[15] - m[0] * m[11] * m[14] - m[8] * m[2] * m[15] + m[8] * m[3] * m[14] + m[12] * m[2] * m[11] - m[12] * m[3] * m[10];
  inv[9] = -m[0] * m[9] * m[15] + m[0] * m[11] * m[13] + m[8] * m[1] * m[15] - m[8] * m[3] * m[13] - m[12] * m[1] * m[11] + m[12] * m[3] * m[9];
  inv[13] = m[0] * m[9] * m[14] - m[0] * m[10] * m[13] - m[8] * m[1] * m[14] + m[8] * m[2] * m[13] + m[12] * m[1] * m[10] - m[12] * m[2] * m[9];
  inv[2] = m[1] * m[6] * m[15] - m[1] * m[7] * m[14] - m[5] * m[2] * m[15] + m[5] * m[3] * m[14] + m[13] * m[2] * m[7] - m[13] * m[3] * m[6];
  inv[6] = -m[0] * m[6] * m[15] + m[0] * m[7] * m[14] + m[4] * m[2] * m[15] - m[4] * m[3] * m[14] - m[12] * m[2] * m[7] + m[12] * m[3] * m[6];
  inv[10] = m[0] * m[5] * m[15] - m[0] * m[7] * m[13] - m[4] * m[1] * m[15] + m[4] * m[3] * m[13] + m[12] * m[1] * m[7] - m[12] * m[3] * m[5];
  inv[14] = -m[0] * m[5] * m[14] + m[0] * m[6] * m[13] + m[4] * m[1] * m[14] - m[4] * m[2] * m[13] - m[12] * m[1] * m[6] + m[12] * m[2] * m[5];
  inv[3] = -m[1] * m[6] * m[11] + m[1] * m[7] * m[10] + m[5] * m[2] * m[11] - m[5] * m[3] * m[10] - m[9] * m[2] * m[7] + m[9] * m[3] * m[6];
  inv[7] = m[0] * m[6] * m[11] - m[0] * m[7] * m[10] - m[4] * m[2] * m[11] + m[4] * m[3] * m[10] + m[8] * m[2] * m[7] - m[8] * m[3] * m[6];
  inv[11] = -m[0] * m[5] * m[11] + m[0] * m[7] * m[9] + m[4] * m[1] * m[11] - m[4] * m[3] * m[9] - m[8] * m[1] * m[7] + m[8] * m[3] * m[5];
  inv[15] = m[0] * m[5] * m[10] - m[0] * m[6] * m[9] - m[4] * m[1] * m[10] + m[4] * m[2] * m[9] + m[8] * m[1] * m[6] - m[8] * m[2] * m[5];
  let det = m[0] * inv[0] + m[1] * inv[4] + m[2] * inv[8] + m[3] * inv[12];
  if (!det) return ident();
  det = 1 / det;
  for (let i = 0; i < 16; i++) inv[i] *= det;
  return inv;
}
function xform(m, v) {
  return [m[0] * v[0] + m[4] * v[1] + m[8] * v[2] + m[12] * v[3], m[1] * v[0] + m[5] * v[1] + m[9] * v[2] + m[13] * v[3],
    m[2] * v[0] + m[6] * v[1] + m[10] * v[2] + m[14] * v[3], m[3] * v[0] + m[7] * v[1] + m[11] * v[2] + m[15] * v[3]];
}

class TexEnv {
  constructor() {
    this.mode = ENV_MODULATE; this.color = [0, 0, 0, 0];
    this.combineRGB = ENV_MODULATE; this.combineAlpha = ENV_MODULATE;
    this.srcRGB = [0x1702, 0x8578, 0x8576]; this.srcAlpha = [0x1702, 0x8578, 0x8576];
    this.opRGB = [0x0300, 0x0300, 0x0302]; this.opAlpha = [0x0302, 0x0302, 0x0302];
    this.scaleRGB = 1; this.scaleAlpha = 1;
  }
}

class GLES1 {
  constructor(canvas, options = {}) {
    this.canvas = canvas;
    this.log = options.log || (() => {});
    this.width = options.width || 480; this.height = options.height || 320;
    const attrs = { alpha: false, antialias: false, depth: false, stencil: false, preserveDrawingBuffer: false, premultipliedAlpha: false, powerPreference: 'high-performance' };
    const gl = canvas.getContext('webgl', attrs) || canvas.getContext('experimental-webgl', attrs);
    if (!gl) throw Error('WebGL is not available in this browser.');
    this.gl = gl;
    this.contextLost = false;
    canvas.addEventListener && canvas.addEventListener('webglcontextlost', e => { e.preventDefault(); this.contextLost = true; options.onContextLost && options.onContextLost(); });
    this.oesElementUint = gl.getExtension('OES_element_index_uint');
    this.reset();
  }

  reset() {
    const gl = this.gl;
    this.programs = new Map();
    this.enabled = new Set([0x0BD0 /* DITHER */, 0x809D /* MULTISAMPLE */]);
    this.matrixMode = MV;
    this.stacks = { [MV]: [ident()], [PROJ]: [ident()], tex: [[ident()], [ident()]] };
    this.color = [1, 1, 1, 1]; this.normal = [0, 0, 1]; this.texcoord = [[0, 0, 0, 1], [0, 0, 0, 1]];
    this.lights = [];
    for (let i = 0; i < MAX_LIGHTS; i++) this.lights.push({ ambient: [0, 0, 0, 1], diffuse: i ? [0, 0, 0, 1] : [1, 1, 1, 1], specular: i ? [0, 0, 0, 1] : [1, 1, 1, 1],
      position: [0, 0, 1, 0], spotDir: [0, 0, -1], spotExp: 0, spotCutoff: 180, att: [1, 0, 0] });
    this.lightModelAmbient = [0.2, 0.2, 0.2, 1]; this.twoSide = false;
    this.material = { ambient: [0.2, 0.2, 0.2, 1], diffuse: [0.8, 0.8, 0.8, 1], specular: [0, 0, 0, 1], emission: [0, 0, 0, 1], shininess: 0 };
    this.fog = { mode: 0x0800, density: 1, start: 0, end: 1, color: [0, 0, 0, 0] };
    this.alphaFunc = 0x0207; this.alphaRef = 0;
    this.clipPlanes = []; for (let i = 0; i < MAX_CLIP; i++) this.clipPlanes.push([0, 0, 0, 0]);
    this.activeUnit = 0; this.clientUnit = 0;
    this.texEnv = [new TexEnv(), new TexEnv()];
    this.boundTex = [0, 0];
    this.textures = new Map(); this.texInfo = new Map();
    this.buffers = new Map(); this.nextName = 1;
    this.arrayBuffer = 0; this.elementBuffer = 0;
    this.arrays = { vertex: null, normal: null, color: null, tex: [null, null], pointSize: null };
    this.clientEnabled = new Set(); this.texArrayEnabled = [false, false];
    this.unpackAlignment = 4;
    this.error = 0;
    this.shadeModel = 0x1D01;
    this.pointSize = 1;
    this.viewport = [0, 0, this.width, this.height];
    this.scissor = [0, 0, this.width, this.height];
    this.clearColor = [0, 0, 0, 0]; this.depthMask = true; this.colorMask = [true, true, true, true];
    this.draws = 0; this.framesPresented = 0;
    this.streamBuffers = [gl.createBuffer(), gl.createBuffer(), gl.createBuffer(), gl.createBuffer(), gl.createBuffer()];
    this.indexStream = gl.createBuffer();
    this.createTarget();
    this.createPresenter();
    gl.pixelStorei(gl.UNPACK_ALIGNMENT, 4);
    gl.disable(gl.DITHER);
  }

  // --------------------------------------------------------- framebuffer
  createTarget() {
    const gl = this.gl;
    this.fbo = gl.createFramebuffer();
    this.fboTex = gl.createTexture();
    gl.bindTexture(gl.TEXTURE_2D, this.fboTex);
    gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, this.width, this.height, 0, gl.RGBA, gl.UNSIGNED_BYTE, null);
    gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR);
    gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);
    gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_WRAP_S, gl.CLAMP_TO_EDGE);
    gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_WRAP_T, gl.CLAMP_TO_EDGE);
    this.fboDepth = gl.createRenderbuffer();
    gl.bindRenderbuffer(gl.RENDERBUFFER, this.fboDepth);
    gl.renderbufferStorage(gl.RENDERBUFFER, gl.DEPTH_STENCIL, this.width, this.height);
    gl.bindFramebuffer(gl.FRAMEBUFFER, this.fbo);
    gl.framebufferTexture2D(gl.FRAMEBUFFER, gl.COLOR_ATTACHMENT0, gl.TEXTURE_2D, this.fboTex, 0);
    gl.framebufferRenderbuffer(gl.FRAMEBUFFER, gl.DEPTH_STENCIL_ATTACHMENT, gl.RENDERBUFFER, this.fboDepth);
    const status = gl.checkFramebufferStatus(gl.FRAMEBUFFER);
    if (status !== gl.FRAMEBUFFER_COMPLETE) throw Error('Off-screen framebuffer incomplete: 0x' + status.toString(16));
    gl.viewport(0, 0, this.width, this.height);
    gl.clearColor(0, 0, 0, 1); gl.clear(gl.COLOR_BUFFER_BIT | gl.DEPTH_BUFFER_BIT | gl.STENCIL_BUFFER_BIT);
  }
  createPresenter() {
    const gl = this.gl;
    const vs = 'attribute vec2 p;varying vec2 t;uniform vec4 r;void main(){t=p*0.5+0.5;gl_Position=vec4(r.xy+p*r.zw,0.0,1.0);}';
    const fs = 'precision mediump float;varying vec2 t;uniform sampler2D s;void main(){gl_FragColor=vec4(texture2D(s,t).rgb,1.0);}';
    this.presentProgram = this.link(vs, fs, ['p']);
    this.presentRect = gl.getUniformLocation(this.presentProgram, 'r');
    this.presentQuad = gl.createBuffer();
    gl.bindBuffer(gl.ARRAY_BUFFER, this.presentQuad);
    gl.bufferData(gl.ARRAY_BUFFER, new Float32Array([-1, -1, 1, -1, -1, 1, 1, 1]), gl.STATIC_DRAW);
  }
  /* Copy the completed frame to the canvas, letterboxed to the game aspect. */
  present() {
    const gl = this.gl;
    if (this.contextLost) return;
    const cw = this.canvas.width, ch = this.canvas.height;
    const scale = Math.min(cw / this.width, ch / this.height);
    const w = this.width * scale / cw, h = this.height * scale / ch;
    gl.bindFramebuffer(gl.FRAMEBUFFER, null);
    const saved = this.saveFixedState();
    gl.disable(gl.BLEND); gl.disable(gl.DEPTH_TEST); gl.disable(gl.CULL_FACE); gl.disable(gl.SCISSOR_TEST); gl.disable(gl.STENCIL_TEST);
    gl.colorMask(true, true, true, true);
    gl.viewport(0, 0, cw, ch);
    gl.clearColor(0, 0, 0, 1); gl.clear(gl.COLOR_BUFFER_BIT);
    gl.useProgram(this.presentProgram);
    gl.uniform4f(this.presentRect, 0, 0, w, h);
    gl.bindBuffer(gl.ARRAY_BUFFER, this.presentQuad);
    for (let i = 0; i < 8; i++) gl.disableVertexAttribArray(i);
    gl.enableVertexAttribArray(0);
    gl.vertexAttribPointer(0, 2, gl.FLOAT, false, 0, 0);
    gl.activeTexture(gl.TEXTURE0);
    gl.bindTexture(gl.TEXTURE_2D, this.fboTex);
    gl.drawArrays(gl.TRIANGLE_STRIP, 0, 4);
    gl.bindFramebuffer(gl.FRAMEBUFFER, this.fbo);
    this.restoreFixedState(saved);
    this.framesPresented++;
    this.presentRectPx = { x: (cw - this.width * scale) / 2, y: (ch - this.height * scale) / 2, w: this.width * scale, h: this.height * scale };
  }
  saveFixedState() {
    const gl = this.gl;
    return { blend: this.enabled.has(gl.BLEND), depth: this.enabled.has(gl.DEPTH_TEST), cull: this.enabled.has(gl.CULL_FACE),
      scissor: this.enabled.has(gl.SCISSOR_TEST), stencil: this.enabled.has(gl.STENCIL_TEST) };
  }
  restoreFixedState(s) {
    const gl = this.gl;
    if (s.blend) gl.enable(gl.BLEND); if (s.depth) gl.enable(gl.DEPTH_TEST); if (s.cull) gl.enable(gl.CULL_FACE);
    if (s.scissor) gl.enable(gl.SCISSOR_TEST); if (s.stencil) gl.enable(gl.STENCIL_TEST);
    gl.colorMask(...this.colorMask);
    gl.viewport(...this.viewport);
    gl.clearColor(...this.clearColor);
    gl.activeTexture(gl.TEXTURE0 + this.activeUnit);
    gl.bindTexture(gl.TEXTURE_2D, this.textures.get(this.boundTex[this.activeUnit]) || null);
  }
  readPixels(x, y, w, h) {
    const gl = this.gl, out = new Uint8Array(w * h * 4);
    gl.readPixels(x, y, w, h, gl.RGBA, gl.UNSIGNED_BYTE, out);
    return out;
  }

  // -------------------------------------------------------------- shaders
  link(vsSrc, fsSrc, attribs) {
    const gl = this.gl;
    const compile = (type, src) => {
      const s = gl.createShader(type); gl.shaderSource(s, src); gl.compileShader(s);
      if (!gl.getShaderParameter(s, gl.COMPILE_STATUS) && !gl.isContextLost()) throw Error('Shader compile failed: ' + gl.getShaderInfoLog(s) + '\n' + src);
      return s;
    };
    const p = gl.createProgram();
    gl.attachShader(p, compile(gl.VERTEX_SHADER, vsSrc)); gl.attachShader(p, compile(gl.FRAGMENT_SHADER, fsSrc));
    attribs.forEach((a, i) => gl.bindAttribLocation(p, i, a));
    gl.linkProgram(p);
    if (!gl.getProgramParameter(p, gl.LINK_STATUS) && !gl.isContextLost()) throw Error('Shader link failed: ' + gl.getProgramInfoLog(p));
    return p;
  }
  stateKey() {
    const e = this.enabled;
    const lighting = e.has(LIGHTING);
    const parts = [];
    if (lighting) {
      parts.push('L');
      for (let i = 0; i < MAX_LIGHTS; i++) if (e.has(LIGHT0 + i)) {
        const l = this.lights[i];
        parts.push(i + (l.position[3] === 0 ? 'd' : 'p') + (l.spotCutoff !== 180 ? 's' : ''));
      }
      if (e.has(COLOR_MATERIAL)) parts.push('cm');
      if (this.twoSide) parts.push('2s');
    }
    if (e.has(FOG)) parts.push('F' + this.fog.mode);
    if (e.has(ALPHA_TEST)) parts.push('A' + this.alphaFunc);
    for (let u = 0; u < MAX_UNITS; u++) {
      if (!this.unitActive(u)) continue;
      const t = this.texEnv[u];
      parts.push('T' + u + ':' + t.mode + (t.mode === ENV_COMBINE ? [t.combineRGB, t.combineAlpha, ...t.srcRGB, ...t.srcAlpha, ...t.opRGB, ...t.opAlpha].join(',') : '')
        + ':' + (this.texFormat(u)));
    }
    let clip = 0; for (let i = 0; i < MAX_CLIP; i++) if (e.has(CLIP_PLANE0 + i)) clip |= 1 << i;
    if (clip) parts.push('C' + clip);
    return parts.join('|');
  }
  unitActive(u) {
    return this.enabled.has(TEXTURE_2D + (u << 16)) && this.boundTex[u] && this.textures.has(this.boundTex[u]);
  }
  texFormat(u) {
    const info = this.texInfo.get(this.boundTex[u]);
    return info ? info.format : 0x1908;
  }
  program() {
    const key = this.stateKey();
    let p = this.programs.get(key);
    if (!p) { p = this.buildProgram(key); this.programs.set(key, p); }
    return p;
  }
  buildProgram(key) {
    const e = this.enabled;
    const lighting = e.has(LIGHTING);
    const lights = [];
    if (lighting) for (let i = 0; i < MAX_LIGHTS; i++) if (e.has(LIGHT0 + i)) lights.push(i);
    const colorMaterial = lighting && e.has(COLOR_MATERIAL);
    const fog = e.has(FOG) ? this.fog.mode : 0;
    const alpha = e.has(ALPHA_TEST) ? this.alphaFunc : 0;
    const units = [];
    for (let u = 0; u < MAX_UNITS; u++) if (this.unitActive(u)) units.push(u);
    const clips = []; for (let i = 0; i < MAX_CLIP; i++) if (e.has(CLIP_PLANE0 + i)) clips.push(i);
    const twoSide = lighting && this.twoSide;
    let vs = 'precision highp float;\nattribute vec4 aPos; attribute vec3 aNrm; attribute vec4 aCol; attribute vec4 aTc0; attribute vec4 aTc1;\n'
      + 'uniform mat4 uMV, uP, uTM0, uTM1; uniform mat3 uNM;\n'
      + 'varying vec4 vCol; varying vec4 vBack; varying vec4 vTc0; varying vec4 vTc1; varying float vFog; varying vec4 vEye;\n';
    if (lighting) {
      vs += 'uniform vec4 uMatA, uMatD, uMatS, uMatE; uniform float uMatSh; uniform vec4 uSceneA;\n';
      for (const i of lights) vs += `uniform vec4 uL${i}A, uL${i}D, uL${i}S, uL${i}P; uniform vec3 uL${i}Sd, uL${i}At; uniform float uL${i}Se, uL${i}Sc;\n`;
      vs += 'vec4 shade(vec3 n, vec3 eye, vec4 ma, vec4 md) {\n  vec4 c = uMatE + ma * uSceneA;\n';
      for (const i of lights) {
        const l = this.lights[i];
        vs += '  {\n';
        if (l.position[3] === 0) vs += `    vec3 L = normalize(uL${i}P.xyz); float att = 1.0;\n`;
        else vs += `    vec3 d = uL${i}P.xyz - eye; float dist = length(d); vec3 L = d / max(dist, 1e-6); float att = 1.0 / (uL${i}At.x + uL${i}At.y * dist + uL${i}At.z * dist * dist);\n`;
        if (l.spotCutoff !== 180) vs += `    float sd = dot(-L, normalize(uL${i}Sd)); att *= sd >= cos(radians(uL${i}Sc)) ? pow(max(sd, 0.0), uL${i}Se) : 0.0;\n`;
        vs += `    float nl = max(dot(n, L), 0.0); vec3 H = normalize(L + vec3(0.0, 0.0, 1.0)); float nh = max(dot(n, H), 0.0);\n`
          + `    float sp = nl > 0.0 ? (uMatSh > 0.0 ? pow(nh, uMatSh) : 1.0) : 0.0;\n`
          + `    c += att * (ma * uL${i}A + nl * md * uL${i}D + sp * uMatS * uL${i}S);\n  }\n`;
      }
      vs += '  return vec4(c.rgb, md.a);\n}\n';
    }
    vs += 'void main() {\n  vec4 eye = uMV * aPos;\n  vEye = eye;\n  gl_Position = uP * eye;\n';
    if (lighting) {
      vs += '  vec3 n = normalize(uNM * aNrm);\n';
      vs += colorMaterial ? '  vec4 ma = aCol, md = aCol;\n' : '  vec4 ma = uMatA, md = uMatD;\n';
      vs += '  vCol = clamp(shade(n, eye.xyz, ma, md), 0.0, 1.0);\n';
      vs += twoSide ? '  vBack = clamp(shade(-n, eye.xyz, ma, md), 0.0, 1.0);\n' : '  vBack = vCol;\n';
    } else vs += '  vCol = aCol; vBack = aCol;\n';
    vs += '  vTc0 = uTM0 * aTc0; vTc1 = uTM1 * aTc1;\n  vFog = abs(eye.z);\n}\n';

    let fs = 'precision mediump float;\nvarying vec4 vCol; varying vec4 vBack; varying vec4 vTc0; varying vec4 vTc1; varying float vFog; varying highp vec4 vEye;\n'
      + 'uniform sampler2D uTex0, uTex1; uniform vec4 uEnv0, uEnv1; uniform vec4 uFogC; uniform vec3 uFogP; uniform float uAlphaRef;\n';
    for (const i of clips) fs += `uniform highp vec4 uClip${i};\n`;
    fs += 'void main() {\n';
    for (const i of clips) fs += `  if (dot(uClip${i}, vEye) < 0.0) discard;\n`;
    fs += twoSide ? '  vec4 prim = gl_FrontFacing ? vCol : vBack;\n' : '  vec4 prim = vCol;\n';
    fs += '  vec4 c = prim;\n';
    for (const u of units) {
      const t = this.texEnv[u];
      const tc = `vTc${u}`;
      const fmt = this.texFormat(u);
      fs += `  {\n    vec4 tx = texture2D(uTex${u}, ${tc}.xy / (${tc}.w == 0.0 ? 1.0 : ${tc}.w));\n`;
      // GL_ALPHA textures have rgb 0 in sampling; luminance etc. map naturally in WebGL.
      const hasColor = fmt !== 0x1906;            // GL_ALPHA
      const hasAlpha = fmt === 0x1908 || fmt === 0x1906 || fmt === 0x190A; // RGBA, ALPHA, LUMINANCE_ALPHA
      switch (t.mode) {
      case ENV_REPLACE:
        fs += `    c = vec4(${hasColor ? 'tx.rgb' : 'c.rgb'}, ${hasAlpha ? 'tx.a' : 'c.a'});\n`; break;
      case ENV_DECAL:
        fs += hasAlpha && hasColor ? '    c = vec4(mix(c.rgb, tx.rgb, tx.a), c.a);\n' : hasColor ? '    c = vec4(tx.rgb, c.a);\n' : ''; break;
      case ENV_BLEND:
        fs += `    c = vec4(${hasColor ? `mix(c.rgb, uEnv${u}.rgb, tx.rgb)` : 'c.rgb'}, ${fmt === 0x1906 || fmt === 0x190A ? 'c.a * tx.a' : (fmt === 0x1908 ? 'c.a * tx.a' : 'c.a')});\n`; break;
      case ENV_ADD:
        fs += `    c = vec4(${hasColor ? 'c.rgb + tx.rgb' : 'c.rgb'}, ${hasAlpha ? 'c.a * tx.a' : 'c.a'});\n`; break;
      case ENV_COMBINE:
        fs += this.combineGLSL(u, t, hasColor, hasAlpha); break;
      default: // MODULATE
        fs += `    c = vec4(${hasColor ? 'c.rgb * tx.rgb' : 'c.rgb'}, ${hasAlpha ? 'c.a * tx.a' : 'c.a'});\n`;
      }
      fs += '    c = clamp(c, 0.0, 1.0);\n  }\n';
    }
    if (alpha) {
      const cmp = { 0x0200: 'false', 0x0201: 'c.a < uAlphaRef', 0x0202: 'c.a == uAlphaRef', 0x0203: 'c.a <= uAlphaRef', 0x0204: 'c.a > uAlphaRef', 0x0205: 'c.a != uAlphaRef', 0x0206: 'c.a >= uAlphaRef', 0x0207: 'true' }[alpha] || 'true';
      fs += `  if (!(${cmp})) discard;\n`;
    }
    if (fog) {
      const f = fog === 0x2601 ? '(uFogP.z - vFog) / (uFogP.z - uFogP.y)' : fog === 0x0801 ? 'exp(-(uFogP.x * vFog) * (uFogP.x * vFog))' : 'exp(-uFogP.x * vFog)';
      fs += `  float ff = clamp(${f}, 0.0, 1.0);\n  c.rgb = mix(uFogC.rgb, c.rgb, ff);\n`;
    }
    fs += '  gl_FragColor = c;\n}\n';
    const gl = this.gl;
    const p = this.link(vs, fs, ['aPos', 'aNrm', 'aCol', 'aTc0', 'aTc1']);
    const u = {};
    const n = gl.getProgramParameter(p, gl.ACTIVE_UNIFORMS);
    for (let i = 0; i < n; i++) { const info = gl.getActiveUniform(p, i); u[info.name] = gl.getUniformLocation(p, info.name); }
    gl.useProgram(p);
    if (u.uTex0) gl.uniform1i(u.uTex0, 0);
    if (u.uTex1) gl.uniform1i(u.uTex1, 1);
    return { p, u, lights, clips, units, key };
  }
  combineGLSL(u, t, hasColor, hasAlpha) {
    const src = (s, isAlpha) => ({ 0x1702: 'tx', 0x8576: `uEnv${u}`, 0x8577: 'prim', 0x8578: 'c' }[s] || 'tx');
    const opRGB = (s, op) => {
      const v = src(s);
      return { 0x0300: `${v}.rgb`, 0x0301: `(1.0 - ${v}.rgb)`, 0x0302: `vec3(${v}.a)`, 0x0303: `vec3(1.0 - ${v}.a)` }[op] || `${v}.rgb`;
    };
    const opA = (s, op) => {
      const v = src(s);
      return { 0x0302: `${v}.a`, 0x0303: `(1.0 - ${v}.a)` }[op] || `${v}.a`;
    };
    const fn = (mode, a0, a1, a2, isAlpha) => {
      switch (mode) {
      case ENV_REPLACE: return a0;
      case ENV_ADD: return `(${a0} + ${a1})`;
      case 0x8574: return `(${a0} + ${a1} - 0.5)`;
      case 0x8575: return `mix(${a1}, ${a0}, ${a2})`;
      case 0x84E7: return `(${a0} - ${a1})`;
      case 0x86AE: case 0x86AF: return isAlpha ? a0 : `vec3(4.0 * dot(${a0} - 0.5, ${a1} - 0.5))`;
      default: return `(${a0} * ${a1})`;
      }
    };
    const rgb = fn(t.combineRGB, opRGB(t.srcRGB[0], t.opRGB[0]), opRGB(t.srcRGB[1], t.opRGB[1]), opRGB(t.srcRGB[2], t.opRGB[2]), false);
    const a = fn(t.combineAlpha, opA(t.srcAlpha[0], t.opAlpha[0]), opA(t.srcAlpha[1], t.opAlpha[1]), opA(t.srcAlpha[2], t.opAlpha[2]), true);
    let s = `    vec3 crgb = ${rgb} * ${t.scaleRGB.toFixed(1)}; float ca = ${a} * ${t.scaleAlpha.toFixed(1)};\n`;
    if (t.combineRGB === 0x86AF) s += '    ca = crgb.r;\n';
    s += '    c = vec4(crgb, ca);\n';
    return s;
  }

  // --------------------------------------------------------------- matrix
  stack() { return this.matrixMode === TEX ? this.stacks.tex[this.activeUnit] : this.stacks[this.matrixMode]; }
  top() { const s = this.stack(); return s[s.length - 1]; }
  setTop(m) { const s = this.stack(); s[s.length - 1] = m; }
  multTop(m) { this.setTop(mul(this.top(), m)); }

  readFloats(host, p, n, fixedPoint) {
    const out = new Array(n);
    for (let i = 0; i < n; i++) { const w = host.u32(p + i * 4); out[i] = fixedPoint ? fixed(w) : bitsToFloat(w); }
    return out;
  }

  // ------------------------------------------------------------ dispatch
  call(name, a, host) {
    const gl = this.gl;
    const [x, y, z, t] = a;
    const isX = name.endsWith('x') || name.endsWith('xv');
    const num = i => isX ? fixed(host.arg(i)) : bitsToFloat(host.arg(i));
    switch (name) {
    // ---- state
    case 'glEnable': case 'glDisable': {
      const on = name === 'glEnable';
      let cap = x;
      if (cap === TEXTURE_2D) cap = TEXTURE_2D + (this.activeUnit << 16);
      if (on) this.enabled.add(cap); else this.enabled.delete(cap);
      if ([gl.BLEND, gl.CULL_FACE, gl.DEPTH_TEST, gl.POLYGON_OFFSET_FILL, gl.SCISSOR_TEST, gl.STENCIL_TEST, gl.SAMPLE_ALPHA_TO_COVERAGE, gl.SAMPLE_COVERAGE].includes(x)) gl[on ? 'enable' : 'disable'](x);
      return 0;
    }
    case 'glIsEnabled': return (x === TEXTURE_2D ? this.enabled.has(TEXTURE_2D + (this.activeUnit << 16)) : this.enabled.has(x)) ? 1 : 0;
    case 'glEnableClientState': case 'glDisableClientState': {
      const on = name === 'glEnableClientState';
      if (x === TEXTURE_COORD_ARRAY) this.texArrayEnabled[this.clientUnit] = on;
      else if (on) this.clientEnabled.add(x); else this.clientEnabled.delete(x);
      return 0;
    }
    case 'glActiveTexture': this.activeUnit = Math.min(MAX_UNITS - 1, Math.max(0, x - 0x84C0)); gl.activeTexture(gl.TEXTURE0 + this.activeUnit); return 0;
    case 'glClientActiveTexture': this.clientUnit = Math.min(MAX_UNITS - 1, Math.max(0, x - 0x84C0)); return 0;
    case 'glShadeModel': this.shadeModel = x; return 0;
    case 'glHint': return 0;
    case 'glLogicOp': return 0;            // not available in WebGL; COLOR_LOGIC_OP is never enabled by the game's 2D paths
    case 'glFinish': case 'glFlush': return 0;
    case 'glGetError': { const e = this.error; this.error = 0; return e; }
    // ---- matrices
    case 'glMatrixMode': this.matrixMode = x; return 0;
    case 'glLoadIdentity': this.setTop(ident()); return 0;
    case 'glLoadMatrixf': case 'glLoadMatrixx': this.setTop(new Float32Array(this.readFloats(host, x, 16, isX))); return 0;
    case 'glMultMatrixf': case 'glMultMatrixx': this.multTop(new Float32Array(this.readFloats(host, x, 16, isX))); return 0;
    case 'glPushMatrix': { const s = this.stack(); if (s.length < 32) s.push(new Float32Array(s[s.length - 1])); else this.error = 0x0503; return 0; }
    case 'glPopMatrix': { const s = this.stack(); if (s.length > 1) s.pop(); else this.error = 0x0504; return 0; }
    case 'glTranslatef': case 'glTranslatex': { const m = ident(); m[12] = num(0); m[13] = num(1); m[14] = num(2); this.multTop(m); return 0; }
    case 'glScalef': case 'glScalex': { const m = ident(); m[0] = num(0); m[5] = num(1); m[10] = num(2); this.multTop(m); return 0; }
    case 'glRotatef': case 'glRotatex': {
      const ang = num(0) * Math.PI / 180; let ax = num(1), ay = num(2), az = num(3);
      const len = Math.hypot(ax, ay, az); if (!len) return 0; ax /= len; ay /= len; az /= len;
      const c = Math.cos(ang), s = Math.sin(ang), k = 1 - c;
      this.multTop(new Float32Array([ax * ax * k + c, ay * ax * k + az * s, az * ax * k - ay * s, 0, ax * ay * k - az * s, ay * ay * k + c, az * ay * k + ax * s, 0,
        ax * az * k + ay * s, ay * az * k - ax * s, az * az * k + c, 0, 0, 0, 0, 1]));
      return 0;
    }
    case 'glOrthof': case 'glOrthox': {
      const l = num(0), r = num(1), b = num(2), tp = num(3), n = num(4), f = num(5);
      this.multTop(new Float32Array([2 / (r - l), 0, 0, 0, 0, 2 / (tp - b), 0, 0, 0, 0, -2 / (f - n), 0, -(r + l) / (r - l), -(tp + b) / (tp - b), -(f + n) / (f - n), 1]));
      return 0;
    }
    case 'glFrustumf': case 'glFrustumx': {
      const l = num(0), r = num(1), b = num(2), tp = num(3), n = num(4), f = num(5);
      this.multTop(new Float32Array([2 * n / (r - l), 0, 0, 0, 0, 2 * n / (tp - b), 0, 0, (r + l) / (r - l), (tp + b) / (tp - b), -(f + n) / (f - n), -1, 0, 0, -2 * f * n / (f - n), 0]));
      return 0;
    }
    // ---- current attributes
    case 'glColor4f': case 'glColor4x': this.color = [num(0), num(1), num(2), num(3)]; return 0;
    case 'glNormal3f': case 'glNormal3x': this.normal = [num(0), num(1), num(2)]; return 0;
    case 'glMultiTexCoord4f': case 'glMultiTexCoord4x': {
      const unit = Math.min(MAX_UNITS - 1, Math.max(0, x - 0x84C0));
      const v = i => isX ? fixed(host.arg(i)) : bitsToFloat(host.arg(i));
      this.texcoord[unit] = [v(1), v(2), v(3), v(4)]; return 0;
    }
    // ---- lighting
    case 'glLightf': case 'glLightx': case 'glLightfv': case 'glLightxv': {
      const l = this.lights[x - LIGHT0]; if (!l) { this.error = 0x0500; return 0; }
      const vec = name.endsWith('v');
      const vals = vec ? this.readFloats(host, z, 4, isX) : [isX ? fixed(z) : bitsToFloat(z)];
      const mv = this.stacks[MV][this.stacks[MV].length - 1];
      switch (y) {
      case 0x1200: l.ambient = vals.slice(0, 4); break;
      case 0x1201: l.diffuse = vals.slice(0, 4); break;
      case 0x1202: l.specular = vals.slice(0, 4); break;
      case 0x1203: l.position = xform(mv, vals.slice(0, 4)); break;
      case 0x1204: { const d = xform(mv, [vals[0], vals[1], vals[2], 0]); l.spotDir = d.slice(0, 3); break; }
      case 0x1205: l.spotExp = vals[0]; break;
      case 0x1206: l.spotCutoff = vals[0]; break;
      case 0x1207: l.att[0] = vals[0]; break;
      case 0x1208: l.att[1] = vals[0]; break;
      case 0x1209: l.att[2] = vals[0]; break;
      }
      return 0;
    }
    case 'glLightModelf': case 'glLightModelx': case 'glLightModelfv': case 'glLightModelxv': {
      const vec = name.endsWith('v');
      if (x === 0x0B53 && vec) this.lightModelAmbient = this.readFloats(host, y, 4, isX);
      else if (x === 0x0B52) this.twoSide = (vec ? (isX ? fixed(host.u32(y)) : bitsToFloat(host.u32(y))) : (isX ? fixed(y) : bitsToFloat(y))) !== 0;
      return 0;
    }
    case 'glMaterialf': case 'glMaterialx': case 'glMaterialfv': case 'glMaterialxv': {
      const vec = name.endsWith('v');
      const vals = vec ? this.readFloats(host, z, 4, isX) : [isX ? fixed(z) : bitsToFloat(z)];
      const m = this.material;
      switch (y) {
      case 0x1200: m.ambient = vals.slice(0, 4); break;
      case 0x1201: m.diffuse = vals.slice(0, 4); break;
      case 0x1202: m.specular = vals.slice(0, 4); break;
      case 0x1600: m.emission = vals.slice(0, 4); break;
      case 0x1601: m.shininess = vals[0]; break;
      case 0x1602: m.ambient = vals.slice(0, 4); m.diffuse = vals.slice(0, 4); break;
      }
      return 0;
    }
    // ---- fog
    case 'glFogf': case 'glFogx': case 'glFogfv': case 'glFogxv': {
      const vec = name.endsWith('v');
      if (y === 0 && !vec) {}
      if (x === 0x0B66) { this.fog.color = this.readFloats(host, y, 4, isX); return 0; }
      let v;
      if (x === 0x0B65) v = vec ? host.u32(y) : (isX ? y : bitsToFloat(y));   // FOG_MODE is an enum
      else v = vec ? (isX ? fixed(host.u32(y)) : bitsToFloat(host.u32(y))) : (isX ? fixed(y) : bitsToFloat(y));
      if (x === 0x0B65) this.fog.mode = Math.round(v);
      else if (x === 0x0B62) this.fog.density = v;
      else if (x === 0x0B63) this.fog.start = v;
      else if (x === 0x0B64) this.fog.end = v;
      return 0;
    }
    case 'glAlphaFunc': case 'glAlphaFuncx': this.alphaFunc = x; this.alphaRef = Math.min(1, Math.max(0, isX ? fixed(y) : bitsToFloat(y))); return 0;
    case 'glClipPlanef': case 'glClipPlanex': {
      const eq = this.readFloats(host, y, 4, isX);
      const inv = invert(this.stacks[MV][this.stacks[MV].length - 1]);
      // plane_eye = plane_obj * inverse(MV)  (row vector times matrix)
      const pe = [0, 1, 2, 3].map(j => eq[0] * inv[j * 4] + eq[1] * inv[j * 4 + 1] + eq[2] * inv[j * 4 + 2] + eq[3] * inv[j * 4 + 3]);
      this.clipPlanes[x - CLIP_PLANE0] = pe;
      return 0;
    }
    // ---- texture environment
    case 'glTexEnvi': case 'glTexEnvf': case 'glTexEnvx': case 'glTexEnvfv': case 'glTexEnvxv': case 'glTexEnviv': {
      const env = this.texEnv[this.activeUnit];
      if (x !== 0x2300) return 0;
      const vec = name.endsWith('v');
      if (y === 0x2201) { env.color = this.readFloats(host, z, 4, name === 'glTexEnvxv'); return 0; }
      let v;
      if (vec) v = name === 'glTexEnvfv' ? bitsToFloat(host.u32(z)) : host.u32(z);
      else v = name === 'glTexEnvf' ? bitsToFloat(z) : z;
      if (y === 0x8573 || y === 0x0D1C) { // scales are numeric
        const s = name === 'glTexEnvx' || name === 'glTexEnvxv' ? fixed(v) : (name === 'glTexEnvf' || name === 'glTexEnvfv' ? v : v);
        if (y === 0x8573) env.scaleRGB = s; else env.scaleAlpha = s;
        return 0;
      }
      v = Math.round(v);
      switch (y) {
      case 0x2200: env.mode = v; break;
      case 0x8571: env.combineRGB = v; break;
      case 0x8572: env.combineAlpha = v; break;
      case 0x8580: case 0x8581: case 0x8582: env.srcRGB[y - 0x8580] = v; break;
      case 0x8588: case 0x8589: case 0x858A: env.srcAlpha[y - 0x8588] = v; break;
      case 0x8590: case 0x8591: case 0x8592: env.opRGB[y - 0x8590] = v; break;
      case 0x8598: case 0x8599: case 0x859A: env.opAlpha[y - 0x8598] = v; break;
      }
      return 0;
    }
    // ---- textures
    case 'glGenTextures': for (let i = 0; i < x; i++) { const id = this.nextName++; this.textures.set(id, gl.createTexture()); host.put32(y + 4 * i, id); } return 0;
    case 'glDeleteTextures': for (let i = 0; i < x; i++) { const id = host.u32(y + 4 * i); const tex = this.textures.get(id); if (tex) gl.deleteTexture(tex); this.textures.delete(id); this.texInfo.delete(id); for (let u = 0; u < MAX_UNITS; u++) if (this.boundTex[u] === id) this.boundTex[u] = 0; } return 0;
    case 'glBindTexture': {
      if (y && !this.textures.has(y)) this.textures.set(y, gl.createTexture());
      this.boundTex[this.activeUnit] = y;
      gl.bindTexture(gl.TEXTURE_2D, this.textures.get(y) || null);
      return 0;
    }
    case 'glTexParameteri': case 'glTexParameterx': case 'glTexParameterf': {
      let v = name === 'glTexParameterf' ? bitsToFloat(z) : z;
      if (y === 0x8191) { // GENERATE_MIPMAP
        const info = this.curTexInfo(); info.genMipmap = !!v; return 0;
      }
      if (y === 0x2801 || y === 0x2800 || y === 0x2802 || y === 0x2803) {
        v = Math.round(v);
        if (y === 0x2802 || y === 0x2803) { if (v === 0x2900 /* CLAMP */) v = gl.CLAMP_TO_EDGE; }
        const info = this.curTexInfo(); info[y] = v;
        this.applyTexParams(info);
      }
      return 0;
    }
    case 'glPixelStorei': if (x === 0x0CF5) { this.unpackAlignment = y; gl.pixelStorei(gl.UNPACK_ALIGNMENT, y); } return 0;
    case 'glTexImage2D': return this.texImage(host, false);
    case 'glTexSubImage2D': return this.texImage(host, true);
    case 'glCompressedTexImage2D': return this.compressedTexImage(host);
    case 'glCompressedTexSubImage2D': this.error = 0x0502; return 0;
    case 'glGenerateMipmap': { const info = this.curTexInfo(); if (info.pot) gl.generateMipmap(gl.TEXTURE_2D); return 0; }
    case 'glGetTexParameteriv': { const info = this.curTexInfo(); host.put32(z, info[y] || 0); return 0; }
    // ---- buffers
    case 'glGenBuffers': for (let i = 0; i < x; i++) { const id = this.nextName++; this.buffers.set(id, { gl: gl.createBuffer(), data: new Uint8Array(0) }); host.put32(y + 4 * i, id); } return 0;
    case 'glDeleteBuffers': for (let i = 0; i < x; i++) { const id = host.u32(y + 4 * i); const b = this.buffers.get(id); if (b) gl.deleteBuffer(b.gl); this.buffers.delete(id); if (this.arrayBuffer === id) this.arrayBuffer = 0; if (this.elementBuffer === id) this.elementBuffer = 0; } return 0;
    case 'glBindBuffer': {
      if (y && !this.buffers.has(y)) this.buffers.set(y, { gl: gl.createBuffer(), data: new Uint8Array(0) });
      if (x === 0x8892) this.arrayBuffer = y; else this.elementBuffer = y;
      return 0;
    }
    case 'glBufferData': {
      const id = x === 0x8892 ? this.arrayBuffer : this.elementBuffer, b = this.buffers.get(id);
      if (!b) { this.error = 0x0502; return 0; }
      b.data = z ? host.read(z, y) : new Uint8Array(y);
      b.dirty = true;
      return 0;
    }
    case 'glBufferSubData': {
      const id = x === 0x8892 ? this.arrayBuffer : this.elementBuffer, b = this.buffers.get(id);
      if (!b || y + z > b.data.length) { this.error = 0x0501; return 0; }
      b.data.set(host.read(t, z), y); b.dirty = true;
      return 0;
    }
    // ---- arrays
    case 'glVertexPointer': this.arrays.vertex = { size: x, type: y, stride: z, ptr: t, buffer: this.arrayBuffer }; return 0;
    case 'glColorPointer': this.arrays.color = { size: x, type: y, stride: z, ptr: t, buffer: this.arrayBuffer }; return 0;
    case 'glNormalPointer': this.arrays.normal = { size: 3, type: x, stride: y, ptr: z, buffer: this.arrayBuffer }; return 0;
    case 'glTexCoordPointer': this.arrays.tex[this.clientUnit] = { size: x, type: y, stride: z, ptr: t, buffer: this.arrayBuffer }; return 0;
    case 'glPointSizePointerOES': this.arrays.pointSize = { size: 1, type: x, stride: y, ptr: z, buffer: this.arrayBuffer }; return 0;
    case 'glDrawArrays': this.draw(host, x, null, y, z); return 0;
    case 'glDrawElements': this.draw(host, x, { type: z, ptr: t }, 0, y); return 0;
    // ---- raster state forwarded directly
    case 'glViewport': this.viewport = [x | 0, y | 0, z | 0, t | 0]; gl.viewport(x | 0, y | 0, z | 0, t | 0); return 0;
    case 'glScissor': this.scissor = [x | 0, y | 0, z | 0, t | 0]; gl.scissor(x | 0, y | 0, z | 0, t | 0); return 0;
    case 'glClearColor': case 'glClearColorx': this.clearColor = [num(0), num(1), num(2), num(3)]; gl.clearColor(...this.clearColor); return 0;
    case 'glClearDepthf': case 'glClearDepthx': gl.clearDepth(num(0)); return 0;
    case 'glClearStencil': gl.clearStencil(x); return 0;
    case 'glClear': gl.clear(x & (gl.COLOR_BUFFER_BIT | gl.DEPTH_BUFFER_BIT | gl.STENCIL_BUFFER_BIT)); return 0;
    case 'glColorMask': this.colorMask = [!!x, !!y, !!z, !!t]; gl.colorMask(!!x, !!y, !!z, !!t); return 0;
    case 'glDepthMask': this.depthMask = !!x; gl.depthMask(!!x); return 0;
    case 'glDepthFunc': gl.depthFunc(x); return 0;
    case 'glDepthRangef': case 'glDepthRangex': gl.depthRange(num(0), num(1)); return 0;
    case 'glCullFace': gl.cullFace(x); return 0;
    case 'glFrontFace': gl.frontFace(x); return 0;
    case 'glBlendFunc': gl.blendFunc(x, y); return 0;
    case 'glBlendFuncSeparate': gl.blendFuncSeparate(x, y, z, t); return 0;
    case 'glBlendEquationSeparate': gl.blendEquationSeparate(x, y); return 0;
    case 'glBlendColor': gl.blendColor(num(0), num(1), num(2), num(3)); return 0;
    case 'glStencilFunc': gl.stencilFunc(x, y, z); return 0;
    case 'glStencilFuncSeparate': gl.stencilFuncSeparate(x, y, z, t); return 0;
    case 'glStencilMask': gl.stencilMask(x); return 0;
    case 'glStencilMaskSeparate': gl.stencilMaskSeparate(x, y); return 0;
    case 'glStencilOp': gl.stencilOp(x, y, z); return 0;
    case 'glStencilOpSeparate': gl.stencilOpSeparate(x, y, z, t); return 0;
    case 'glPolygonOffset': case 'glPolygonOffsetx': gl.polygonOffset(num(0), num(1)); return 0;
    case 'glLineWidth': case 'glLineWidthx': gl.lineWidth(Math.max(1, num(0))); return 0;
    case 'glPointSize': case 'glPointSizex': this.pointSize = num(0); return 0;
    case 'glReadPixels': {
      const w = z | 0, h = t | 0, format = host.arg(4), type = host.arg(5), ptr = host.arg(6);
      const px = this.readPixels(x | 0, y | 0, w, h);
      if (format === 0x1908 && type === 0x1401) host.write(ptr, px);
      else if (format === 0x1907 && type === 0x1401) {
        const rowIn = w * 3, row = Math.ceil(rowIn / 4) * 4, out = new Uint8Array(row * h);
        for (let j = 0; j < h; j++) for (let i = 0; i < w; i++) for (let c = 0; c < 3; c++) out[j * row + i * 3 + c] = px[(j * w + i) * 4 + c];
        host.write(ptr, out);
      } else if (format === 0x1907 && type === 0x8363) {
        const row = Math.ceil(w * 2 / 4) * 4, out = new Uint8Array(row * h), dv = new DataView(out.buffer);
        for (let j = 0; j < h; j++) for (let i = 0; i < w; i++) { const o = (j * w + i) * 4; dv.setUint16(j * row + i * 2, ((px[o] >> 3) << 11) | ((px[o + 1] >> 2) << 5) | (px[o + 2] >> 3), true); }
        host.write(ptr, out);
      } else this.error = 0x0500;
      return 0;
    }
    // ---- queries
    case 'glGetString': return host.string(({ 0x1F00: 'Anthropic Recompiled Host', 0x1F01: 'WebGL fixed-function', 0x1F02: 'OpenGL ES-CM 1.1', 0x1F03: 'GL_OES_matrix_get GL_OES_blend_subtract' })[x] || '');
    case 'glGetIntegerv': return this.getv(host, x, y, 'i');
    case 'glGetFloatv': return this.getv(host, x, y, 'f');
    case 'glGetBooleanv': {
      const v = this.enabled.has(x) ? 1 : 0;
      if (x === 0x0B72) host.write(y, new Uint8Array([this.depthMask ? 1 : 0]));
      else if (x === 0x0C23) host.write(y, new Uint8Array(this.colorMask.map(b => b ? 1 : 0)));
      else host.write(y, new Uint8Array([v]));
      return 0;
    }
    }
    if (!this.unhandled) this.unhandled = new Set();
    if (!this.unhandled.has(name)) { this.unhandled.add(name); this.log('GL service not supported by the fixed-function host: ' + name); }
    this.error = 0x0502;
    return 0;
  }

  getv(host, pname, ptr, kind) {
    const write = vals => {
      vals.forEach((v, i) => {
        if (kind === 'f') { f32[0] = v; host.put32(ptr + i * 4, u32[0]); } else host.put32(ptr + i * 4, Math.round(v) | 0);
      });
      return 0;
    };
    const mat = { 0x0BA6: () => this.stacks[MV][this.stacks[MV].length - 1], 0x0BA7: () => this.stacks[PROJ][this.stacks[PROJ].length - 1],
      0x0BA8: () => { const s = this.stacks.tex[this.activeUnit]; return s[s.length - 1]; } }[pname];
    if (mat) return write(Array.from(mat()));
    switch (pname) {
    case 0x0D33: return write([2048]);          // MAX_TEXTURE_SIZE
    case 0x0D31: return write([MAX_LIGHTS]);    // MAX_LIGHTS
    case 0x0D32: return write([MAX_CLIP]);      // MAX_CLIP_PLANES
    case 0x84E2: return write([MAX_UNITS]);     // MAX_TEXTURE_UNITS
    case 0x0D36: case 0x0D38: case 0x0D39: return write([16]); // stack depths
    case 0x0D52: case 0x0D53: case 0x0D54: case 0x0D55: return write([8]);
    case 0x0D56: return write([24]); case 0x0D57: return write([8]);
    case 0x0BA2: return write(this.viewport);
    case 0x0C10: return write(this.scissor);
    case 0x0B00: return write(this.color);
    case 0x0B02: return write(this.normal);
    case 0x0BA0: return write([this.matrixMode]);
    case 0x84E0: return write([0x84C0 + this.activeUnit]);
    case 0x84E1: return write([0x84C0 + this.clientUnit]);
    case 0x8069: return write([this.boundTex[this.activeUnit]]);
    case 0x8894: return write([this.arrayBuffer]);
    case 0x8895: return write([this.elementBuffer]);
    case 0x0CF5: return write([this.unpackAlignment]);
    case 0x86A2: return write([0]);              // NUM_COMPRESSED_TEXTURE_FORMATS
    case 0x0B54: return write([this.shadeModel]);
    case 0x0BC1: return write([this.alphaFunc]);
    case 0x0BC2: return write([this.alphaRef]);
    case 0x8B9A: return write([0x1401]);        // IMPLEMENTATION_COLOR_READ_TYPE
    case 0x8B9B: return write([0x1908]);        // IMPLEMENTATION_COLOR_READ_FORMAT
    case 0x0D3A: return write([2048, 2048]);    // MAX_VIEWPORT_DIMS
    case 0x0B12: case 0x846D: case 0x846E: return write([1, 64]);
    }
    let v;
    try { v = this.gl.getParameter(pname); } catch { v = null; }
    if (v === null || v === undefined) { this.error = 0x0500; return 0; }
    if (typeof v === 'boolean') v = v ? 1 : 0;
    if (typeof v === 'number') return write([v]);
    if (v && typeof v.length === 'number') return write(Array.from(v, b => typeof b === 'boolean' ? (b ? 1 : 0) : b));
    return write([0]);
  }

  // ------------------------------------------------------------ textures
  curTexInfo() {
    const id = this.boundTex[this.activeUnit];
    let info = this.texInfo.get(id);
    if (!info) { info = { 0x2801: 0x2702, 0x2800: 0x2601, 0x2802: 0x2901, 0x2803: 0x2901, format: 0x1908, pot: true, levels: 0 }; this.texInfo.set(id, info); }
    return info;
  }
  applyTexParams(info) {
    const gl = this.gl;
    let min = info[0x2801], mag = info[0x2800], ws = info[0x2802], wt = info[0x2803];
    if (!info.pot) { ws = gl.CLAMP_TO_EDGE; wt = gl.CLAMP_TO_EDGE; if (min !== gl.NEAREST && min !== gl.LINEAR) min = gl.LINEAR; }
    else if (min !== gl.NEAREST && min !== gl.LINEAR && !info.complete && !info.genMipmap) {
      // mipmapped minification without a complete chain would sample black
      min = (min === gl.NEAREST_MIPMAP_NEAREST || min === gl.NEAREST_MIPMAP_LINEAR) ? gl.NEAREST : gl.LINEAR;
    }
    gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, min);
    gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, mag);
    gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_WRAP_S, ws);
    gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_WRAP_T, wt);
  }
  texImage(host, sub) {
    const gl = this.gl;
    const target = host.arg(0), level = host.arg(1);
    let w, h, format, type, ptr, xo = 0, yo = 0, internal;
    if (sub) { xo = host.arg(2); yo = host.arg(3); w = host.arg(4); h = host.arg(5); format = host.arg(6); type = host.arg(7); ptr = host.arg(8); }
    else { internal = host.arg(2); w = host.arg(3); h = host.arg(4); format = host.arg(6); type = host.arg(7); ptr = host.arg(8); }
    if (target !== 0x0DE1) { this.error = 0x0500; return 0; }
    const comps = { 0x1906: 1, 0x1907: 3, 0x1908: 4, 0x1909: 1, 0x190A: 2 }[format] || 4;
    const packed = type === 0x8363 || type === 0x8033 || type === 0x8034;
    const bpp = packed ? 2 : comps;
    const row = w * bpp, stride = Math.ceil(row / this.unpackAlignment) * this.unpackAlignment;
    let pixels = null;
    if (ptr && w > 0 && h > 0) {
      const raw = host.view(ptr, stride * (h - 1) + row);
      // Repack rows to WebGL's alignment (we always upload with alignment 1).
      const tight = new Uint8Array(row * h);
      for (let j = 0; j < h; j++) tight.set(raw.subarray(j * stride, j * stride + row), j * row);
      pixels = packed ? new Uint16Array(tight.buffer) : tight;
    }
    gl.pixelStorei(gl.UNPACK_ALIGNMENT, packed ? 2 : 1);
    const info = this.curTexInfo();
    if (sub) {
      if (pixels) gl.texSubImage2D(gl.TEXTURE_2D, level, xo, yo, w, h, format, type, pixels);
    } else {
      gl.texImage2D(gl.TEXTURE_2D, level, format, w, h, 0, format, type, pixels);
      if (level === 0) {
        info.format = format; info.width = w; info.height = h;
        info.pot = (w & (w - 1)) === 0 && (h & (h - 1)) === 0; info.levels = 1; info.complete = w === 1 && h === 1;
      } else {
        info.levels++;
        const maxLevels = Math.floor(Math.log2(Math.max(info.width || 1, info.height || 1))) + 1;
        if (info.levels >= maxLevels) info.complete = true;
      }
    }
    if (info.genMipmap && info.pot && level === 0) { gl.generateMipmap(gl.TEXTURE_2D); info.complete = true; }
    gl.pixelStorei(gl.UNPACK_ALIGNMENT, this.unpackAlignment);
    this.applyTexParams(info);
    return 0;
  }
  compressedTexImage(host) {
    // GLES 1.1 paletted formats (OES_compressed_paletted_texture) are core.
    const gl = this.gl;
    const level = host.arg(1), internal = host.arg(2), w = host.arg(3), h = host.arg(4), size = host.arg(6), ptr = host.arg(7);
    const pal = { 0x8B90: [16, 'rgb8'], 0x8B91: [16, 'rgba8'], 0x8B92: [16, 'r5g6b5'], 0x8B93: [16, 'rgba4'], 0x8B94: [16, 'rgb5a1'],
      0x8B95: [256, 'rgb8'], 0x8B96: [256, 'rgba8'], 0x8B97: [256, 'r5g6b5'], 0x8B98: [256, 'rgba4'], 0x8B99: [256, 'rgb5a1'] }[internal];
    if (!pal) { this.error = 0x0500; this.log('Unsupported compressed texture format 0x' + internal.toString(16)); return 0; }
    const [n, fmt] = pal;
    const entry = { rgb8: 3, rgba8: 4, r5g6b5: 2, rgba4: 2, rgb5a1: 2 }[fmt];
    const data = host.read(ptr, size);
    const dv = new DataView(data.buffer);
    const colors = [];
    for (let i = 0; i < n; i++) {
      const o = i * entry;
      if (fmt === 'rgb8') colors.push([data[o], data[o + 1], data[o + 2], 255]);
      else if (fmt === 'rgba8') colors.push([data[o], data[o + 1], data[o + 2], data[o + 3]]);
      else {
        const v = dv.getUint16(o, true);
        if (fmt === 'r5g6b5') colors.push([((v >> 11) & 31) * 255 / 31, ((v >> 5) & 63) * 255 / 63, (v & 31) * 255 / 31, 255]);
        else if (fmt === 'rgba4') colors.push([((v >> 12) & 15) * 17, ((v >> 8) & 15) * 17, ((v >> 4) & 15) * 17, (v & 15) * 17]);
        else colors.push([((v >> 11) & 31) * 255 / 31, ((v >> 6) & 31) * 255 / 31, ((v >> 1) & 31) * 255 / 31, (v & 1) * 255]);
      }
    }
    let off = n * entry;
    const levels = level <= 0 ? -level + 1 : 1;
    let lw = w, lh = h;
    const info = this.curTexInfo();
    for (let l = 0; l < levels; l++) {
      const out = new Uint8Array(lw * lh * 4);
      for (let i = 0; i < lw * lh; i++) {
        let idx;
        if (n === 16) { const b = data[off + (i >> 1)]; idx = (i & 1) ? b & 15 : b >> 4; } else idx = data[off + i];
        out.set(colors[idx] || [0, 0, 0, 0], i * 4);
      }
      off += n === 16 ? Math.ceil(lw * lh / 2) : lw * lh;
      gl.pixelStorei(gl.UNPACK_ALIGNMENT, 1);
      gl.texImage2D(gl.TEXTURE_2D, l, gl.RGBA, lw, lh, 0, gl.RGBA, gl.UNSIGNED_BYTE, out);
      lw = Math.max(1, lw >> 1); lh = Math.max(1, lh >> 1);
    }
    gl.pixelStorei(gl.UNPACK_ALIGNMENT, this.unpackAlignment);
    info.format = 0x1908; info.width = w; info.height = h; info.pot = (w & (w - 1)) === 0 && (h & (h - 1)) === 0; info.complete = levels > 1;
    this.applyTexParams(info);
    return 0;
  }

  // --------------------------------------------------------------- drawing
  arrayBytes(host, arr, first, count) {
    // Returns {bytes, type, size, stride} for vertices [first, first+count).
    const tsize = TYPE_SIZE[arr.type];
    if (!tsize) throw Error('Unsupported vertex array type 0x' + arr.type.toString(16));
    const stride = arr.stride || arr.size * tsize;
    const len = (count - 1) * stride + arr.size * tsize;
    let bytes;
    if (arr.buffer) {
      const b = this.buffers.get(arr.buffer);
      if (!b) throw Error('Draw from a deleted buffer object');
      const start = arr.ptr + first * stride;
      bytes = b.data.subarray(start, start + len);
    } else bytes = host.view(arr.ptr + first * stride, len);
    if (arr.type === GL_FIXED) {
      const out = new Float32Array(count * arr.size);
      const dv = new DataView(bytes.buffer, bytes.byteOffset, bytes.byteLength);
      for (let i = 0; i < count; i++) for (let j = 0; j < arr.size; j++) out[i * arr.size + j] = dv.getInt32(i * stride + j * 4, true) / 65536;
      return { bytes: new Uint8Array(out.buffer), type: GL_FLOAT, size: arr.size, stride: arr.size * 4 };
    }
    return { bytes, type: arr.type, size: arr.size, stride };
  }
  draw(host, mode, elements, first, count) {
    const gl = this.gl;
    if (this.contextLost || count <= 0) return;
    if (!this.clientEnabled.has(VERTEX_ARRAY) || !this.arrays.vertex) return;
    let lo = first, hi = first + count - 1, indices = null, indexType = 0;
    if (elements) {
      const isize = elements.type === GL_UNSIGNED_BYTE ? 1 : elements.type === GL_UNSIGNED_SHORT ? 2 : 4;
      let raw;
      if (this.elementBuffer) {
        const b = this.buffers.get(this.elementBuffer);
        raw = b.data.subarray(elements.ptr, elements.ptr + count * isize);
      } else raw = host.view(elements.ptr, count * isize);
      const src = isize === 1 ? new Uint8Array(raw) : isize === 2 ? new Uint16Array(raw.slice().buffer) : new Uint32Array(raw.slice().buffer);
      lo = Infinity; hi = -1;
      for (let i = 0; i < src.length; i++) { const v = src[i]; if (v < lo) lo = v; if (v > hi) hi = v; }
      indices = hi - lo < 65536 ? new Uint16Array(src.length) : new Uint32Array(src.length);
      for (let i = 0; i < src.length; i++) indices[i] = src[i] - lo;
      indexType = indices instanceof Uint16Array ? gl.UNSIGNED_SHORT : gl.UNSIGNED_INT;
      if (indexType === gl.UNSIGNED_INT && !this.oesElementUint) throw Error('Draw needs 32-bit indices');
    }
    const n = hi - lo + 1;
    if (n <= 0 || n > 4000000) return;
    const prog = this.program();
    gl.useProgram(prog.p);
    let slot = 0;
    const bind = (loc, arr, normalized) => {
      const a = this.arrayBytes(host, arr, lo, n);
      const buf = this.streamBuffers[slot++];
      gl.bindBuffer(gl.ARRAY_BUFFER, buf);
      gl.bufferData(gl.ARRAY_BUFFER, a.bytes, gl.STREAM_DRAW);
      gl.enableVertexAttribArray(loc);
      gl.vertexAttribPointer(loc, a.size, a.type, normalized && a.type !== GL_FLOAT, a.stride, 0);
    };
    bind(0, this.arrays.vertex, false);
    const lighting = this.enabled.has(LIGHTING);
    if (lighting && this.clientEnabled.has(NORMAL_ARRAY) && this.arrays.normal) bind(1, this.arrays.normal, true);
    else { gl.disableVertexAttribArray(1); gl.vertexAttrib3f(1, ...this.normal); }
    if (this.clientEnabled.has(COLOR_ARRAY) && this.arrays.color) bind(2, this.arrays.color, true);
    else { gl.disableVertexAttribArray(2); gl.vertexAttrib4f(2, ...this.color); }
    for (let u = 0; u < MAX_UNITS; u++) {
      const loc = 3 + u;
      if (prog.units.includes(u) && this.texArrayEnabled[u] && this.arrays.tex[u]) bind(loc, this.arrays.tex[u], false);
      else { gl.disableVertexAttribArray(loc); gl.vertexAttrib4f(loc, ...this.texcoord[u]); }
    }
    for (let i = 5; i < 8; i++) gl.disableVertexAttribArray(i);
    this.uniforms(prog);
    for (const u of prog.units) { gl.activeTexture(gl.TEXTURE0 + u); gl.bindTexture(gl.TEXTURE_2D, this.textures.get(this.boundTex[u]) || null); }
    gl.activeTexture(gl.TEXTURE0 + this.activeUnit);
    if (indices) {
      gl.bindBuffer(gl.ELEMENT_ARRAY_BUFFER, this.indexStream);
      gl.bufferData(gl.ELEMENT_ARRAY_BUFFER, indices, gl.STREAM_DRAW);
      gl.drawElements(mode, indices.length, indexType, 0);
    } else gl.drawArrays(mode, 0, count);
    this.draws++;
  }
  uniforms(prog) {
    const gl = this.gl, u = prog.u;
    const mv = this.stacks[MV][this.stacks[MV].length - 1];
    gl.uniformMatrix4fv(u.uMV, false, mv);
    gl.uniformMatrix4fv(u.uP, false, this.stacks[PROJ][this.stacks[PROJ].length - 1]);
    if (u.uTM0) gl.uniformMatrix4fv(u.uTM0, false, this.stacks.tex[0][this.stacks.tex[0].length - 1]);
    if (u.uTM1) gl.uniformMatrix4fv(u.uTM1, false, this.stacks.tex[1][this.stacks.tex[1].length - 1]);
    if (u.uNM) {
      const inv = invert(mv);
      gl.uniformMatrix3fv(u.uNM, false, new Float32Array([inv[0], inv[4], inv[8], inv[1], inv[5], inv[9], inv[2], inv[6], inv[10]]));
    }
    if (u.uMatA) {
      const m = this.material;
      gl.uniform4fv(u.uMatA, m.ambient); gl.uniform4fv(u.uMatD, m.diffuse); gl.uniform4fv(u.uMatS, m.specular); gl.uniform4fv(u.uMatE, m.emission);
      gl.uniform1f(u.uMatSh, m.shininess); gl.uniform4fv(u.uSceneA, this.lightModelAmbient);
      for (const i of prog.lights) {
        const l = this.lights[i];
        gl.uniform4fv(u[`uL${i}A`], l.ambient); gl.uniform4fv(u[`uL${i}D`], l.diffuse); gl.uniform4fv(u[`uL${i}S`], l.specular);
        gl.uniform4fv(u[`uL${i}P`], l.position);
        if (u[`uL${i}Sd`]) gl.uniform3fv(u[`uL${i}Sd`], l.spotDir);
        if (u[`uL${i}At`]) gl.uniform3fv(u[`uL${i}At`], l.att);
        if (u[`uL${i}Se`]) gl.uniform1f(u[`uL${i}Se`], l.spotExp);
        if (u[`uL${i}Sc`]) gl.uniform1f(u[`uL${i}Sc`], l.spotCutoff);
      }
    }
    if (u.uEnv0) gl.uniform4fv(u.uEnv0, this.texEnv[0].color);
    if (u.uEnv1) gl.uniform4fv(u.uEnv1, this.texEnv[1].color);
    if (u.uFogC) { gl.uniform4fv(u.uFogC, this.fog.color); gl.uniform3f(u.uFogP, this.fog.density, this.fog.start, this.fog.end); }
    if (u.uAlphaRef) gl.uniform1f(u.uAlphaRef, this.alphaRef);
    for (const i of prog.clips) gl.uniform4fv(u[`uClip${i}`], this.clipPlanes[i]);
  }
}

root.GLES1 = GLES1;
if (typeof module !== 'undefined') module.exports = { GLES1 };
})(typeof globalThis !== 'undefined' ? globalThis : this);

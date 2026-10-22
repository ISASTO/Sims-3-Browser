// gl.js — OpenGL ES 1.1 (fixed-function subset used by the game) and ES 2.0 on WebGL2.
// The guest renders into its own framebuffer object ("EAGL drawable"); presentRenderbuffer: blits that
// framebuffer to the canvas, so the canvas only changes at present time (no partial/flashing frames).
'use strict';

export function createGL(canvas, mem, log) {
  const gl = canvas.getContext('webgl2', { alpha: false, antialias: false, depth: false, stencil: false,
    preserveDrawingBuffer: false, premultipliedAlpha: false, powerPreference: 'high-performance' });
  if (!gl) throw new Error('WebGL2 is required');
  // typed views of wasm memory, recreated only when the memory has grown (a grown buffer detaches the old views)
  let vbuf = null, u8v = null, i32v = null, f32v = null;
  const views = () => { vbuf = mem.buffer; u8v = new Uint8Array(vbuf); i32v = new Int32Array(vbuf); f32v = new Float32Array(vbuf); };
  const U8 = () => { if (mem.buffer !== vbuf) views(); return u8v; };
  const I32 = () => { if (mem.buffer !== vbuf) views(); return i32v; };
  const F32 = () => { if (mem.buffer !== vbuf) views(); return f32v; };
  const cstr = (p) => { const u = U8(); let e = p; while (u[e]) e++; return new TextDecoder().decode(u.subarray(p, e)); };

  // ---------------------------------------------------------------- object name tables
  const textures = new Map(), buffers = new Map(), fbos = new Map(), rbos = new Map(), programs = new Map(), shaders = new Map();
  let nextName = 1;
  const gen = (n, p, table, ctor) => { const a = I32(); for (let i = 0; i < n; i++) { const id = nextName++; table.set(id, ctor()); a[(p >> 2) + i] = id; } };
  const del = (n, p, table, dtor) => { const a = I32(); for (let i = 0; i < n; i++) { const id = a[(p >> 2) + i]; const o = table.get(id); if (o) { dtor(o); table.delete(id); } } };

  // ---------------------------------------------------------------- bound state mirrors
  let arrayBuffer = 0, elementBuffer = 0, curFB = 0, curRB = 0, activeTex = 0, curProgram = 0;
  const boundTex = new Array(8).fill(0);
  let drawableFB = 0, drawableRB = 0, drawW = 0, drawH = 0;
  let glError = 0;
  let unpackAlign = 4;
  let depthMask = true;
  const caps = new Map();
  const isEnabledES1 = (cap) => !!caps.get(cap);

  // ---------------------------------------------------------------- ES1 fixed-function state
  const GL_MODELVIEW = 0x1700, GL_PROJECTION = 0x1701, GL_TEXTURE = 0x1702, GL_MATRIX_PALETTE_OES = 0x8840;
  const ident = () => new Float32Array([1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1]);
  const stacks = { [GL_MODELVIEW]: [ident()], [GL_PROJECTION]: [ident()], tex: [[ident()], [ident()]] };
  const palette = []; for (let i = 0; i < 32; i++) palette.push(ident());
  let matrixMode = GL_MODELVIEW, curPalette = 0;
  const curStack = () => matrixMode === GL_TEXTURE ? stacks.tex[activeTex] : matrixMode === GL_MATRIX_PALETTE_OES ? null : stacks[matrixMode];
  const topM = () => { if (matrixMode === GL_MATRIX_PALETTE_OES) return palette[curPalette]; const s = curStack(); return s[s.length - 1]; };
  const setTop = (m) => { if (matrixMode === GL_MATRIX_PALETTE_OES) { palette[curPalette] = m; return; } const s = curStack(); s[s.length - 1] = m; };
  const mul = (a, b) => { // a * b, column-major
    const r = new Float32Array(16);
    for (let i = 0; i < 4; i++) for (let j = 0; j < 4; j++) { let s = 0; for (let k = 0; k < 4; k++) s += a[k * 4 + j] * b[i * 4 + k]; r[i * 4 + j] = s; }
    return r;
  };
  let color = [1, 1, 1, 1];
  let alphaFunc = 0x0207, alphaRef = 0; // GL_ALWAYS
  let shadeFlat = false;
  const fog = { mode: 0x0800 /* EXP */, density: 1, start: 0, end: 1, color: [0, 0, 0, 0] };
  const texEnv = [0, 1].map(() => ({ mode: 0x2100 /* MODULATE */, color: [0, 0, 0, 0], combineRGB: 0x2100, combineAlpha: 0x2100,
    src: [0x1702, 0x8578, 0x8576, 0x1702, 0x8578, 0x8576], op: [0x0300, 0x0300, 0x0302, 0x0302, 0x0302, 0x0302], rgbScale: 1, alphaScale: 1 }));
  // client arrays
  const mkArr = () => ({ enabled: false, size: 4, type: 0x1406, stride: 0, offset: 0, buffer: 0, ptr: 0 });
  const arrays = { vertex: mkArr(), color: mkArr(), tex: [mkArr(), mkArr()], mindex: mkArr(), weight: mkArr() };
  let clientActive = 0;
  // ES2 generic attributes
  const attribs = []; for (let i = 0; i < 16; i++) attribs.push({ enabled: false, size: 4, type: 0x1406, norm: false, stride: 0, offset: 0, buffer: 0, ptr: 0 });

  // ---------------------------------------------------------------- streaming buffers for client-memory arrays
  const streamVB = [], streamIB = gl.createBuffer();
  for (let i = 0; i < 8; i++) streamVB.push(gl.createBuffer());
  const typeSize = (t) => t === 0x1400 || t === 0x1401 ? 1 : t === 0x1402 || t === 0x1403 ? 2 : 4;
  const vao = gl.createVertexArray();
  gl.bindVertexArray(vao);

  // ---------------------------------------------------------------- ES1 shader generation
  const progCache = new Map();
  function compile(type, src) {
    const s = gl.createShader(type); gl.shaderSource(s, src); gl.compileShader(s);
    if (!gl.getShaderParameter(s, gl.COMPILE_STATUS)) throw new Error('ES1 emu shader: ' + gl.getShaderInfoLog(s) + '\n' + src);
    return s;
  }
  function es1Program(key, st) {
    let p = progCache.get(key); if (p) return p;
    const nunits = st.tex.length;
    let vs = '#version 300 es\nprecision highp float;\nin vec4 aPos;\nin vec4 aColor;\nin vec4 aTex0;\nin vec4 aTex1;\nin vec4 aMIdx;\nin vec4 aWeight;\n' +
      'uniform mat4 uMV, uP, uT0, uT1;\nuniform vec4 uColor;\n' + (st.palette ? `uniform mat4 uPal[${st.palSize}];\n` : '') +
      `${st.flat ? 'flat ' : ''}out vec4 vColor;\nout vec2 vTex0;\nout vec2 vTex1;\nout float vFogDist;\nvoid main(){\n`;
    if (st.palette) {
      vs += ' vec4 p = vec4(0.0);\n';
      for (let k = 0; k < st.palUnits; k++) vs += ` p += aWeight[${k}] * (uPal[int(aMIdx[${k}])] * aPos);\n`;
      vs += ' vec4 eye = p;\n';
    } else vs += ' vec4 eye = uMV * aPos;\n';
    // A vertex on the eye plane (clip w ~ 0) is always outside the near plane and must be clipped away. Some
    // rasterizers (SwiftShader) drop the whole visible remainder of such triangles instead: the sky dome's zenith
    // vertex sits exactly above the camera, which opened a hole in the menu sky. Moving w off zero by at most 1e-3
    // keeps the vertex outside the near plane, so the clipped result is the one the GL specification defines.
    vs += ' gl_Position = uP * eye;\n if (abs(gl_Position.w) < 1e-3) gl_Position.w = gl_Position.w < 0.0 ? -1e-3 : 1e-3;\n vFogDist = abs(eye.z);\n';
    vs += st.colorArray ? ' vColor = aColor;\n' : ' vColor = uColor;\n';
    vs += ' vTex0 = (uT0 * aTex0).xy;\n vTex1 = (uT1 * aTex1).xy;\n}\n';
    let fs = '#version 300 es\nprecision mediump float;\n' + `${st.flat ? 'flat ' : ''}in vec4 vColor;\nin vec2 vTex0;\nin vec2 vTex1;\nin float vFogDist;\n` +
      'uniform sampler2D uS0, uS1;\nuniform vec4 uEnvC0, uEnvC1;\nuniform float uAlphaRef;\nuniform vec4 uFogColor;\nuniform vec3 uFog;\nout vec4 oColor;\n';
    const envCode = (u, e, prev) => {
      const t = `texture(uS${u}, vTex${u})`;
      const fmt = st.texFmt[u]; // 'rgba' | 'rgb' | 'a' | 'l' | 'la'
      const tc = `t${u}`;
      let code = ` vec4 ${tc} = ${t};\n`;
      if (fmt === 'rgb') code += ` ${tc}.a = 1.0;\n`;
      if (fmt === 'a') code += ` ${tc}.rgb = vec3(0.0);\n`;
      const m = e.mode;
      if (m === 0x1E01) { // REPLACE
        code += fmt === 'a' ? ` c = vec4(${prev}.rgb, ${tc}.a);\n` : fmt === 'rgb' || fmt === 'l' ? ` c = vec4(${tc}.rgb, ${prev}.a);\n` : ` c = ${tc};\n`;
      } else if (m === 0x2100) code += fmt === 'a' ? ` c = vec4(${prev}.rgb, ${prev}.a * ${tc}.a);\n` : ` c = ${prev} * ${tc};\n`;
      else if (m === 0x2101) code += ` c = vec4(mix(${prev}.rgb, ${tc}.rgb, ${tc}.a), ${prev}.a);\n`; // DECAL
      else if (m === 0x0BE2) code += ` c = vec4(mix(${prev}.rgb, uEnvC${u}.rgb, ${tc}.rgb), ${prev}.a * ${tc}.a);\n`; // BLEND
      else if (m === 0x0104) code += ` c = vec4(${prev}.rgb + ${tc}.rgb, ${prev}.a * ${tc}.a);\n`; // ADD
      else if (m === 0x8570) { // COMBINE
        const srcs = (i) => { const s = e.src[i]; return s === 0x1702 ? tc : s === 0x8576 ? 'uEnvC' + u : s === 0x8577 ? 'vColor' : prev; };
        const opnd = (i, alpha) => { const o = e.op[i]; const v = srcs(i);
          if (alpha) return o === 0x0302 ? `${v}.a` : `(1.0-${v}.a)`;
          return o === 0x0300 ? `${v}.rgb` : o === 0x0301 ? `(1.0-${v}.rgb)` : o === 0x0302 ? `vec3(${v}.a)` : `vec3(1.0-${v}.a)`; };
        const comb = (f, a0, a1, a2) => f === 0x1E01 ? a0 : f === 0x2100 ? `${a0}*${a1}` : f === 0x0104 ? `${a0}+${a1}` : f === 0x8574 ? `${a0}+${a1}-0.5` :
          f === 0x8575 ? `mix(${a1},${a0},${a2})` : f === 0x84E7 ? `${a0}-${a1}` : `${a0}*${a1}`;
        code += ` c = vec4(${comb(e.combineRGB, opnd(0), opnd(1), opnd(2))}, ${comb(e.combineAlpha, opnd(3, true), opnd(4, true), opnd(5, true))});\n`;
        if (e.rgbScale !== 1 || e.alphaScale !== 1) code += ` c *= vec4(vec3(${e.rgbScale.toFixed(1)}), ${e.alphaScale.toFixed(1)});\n`;
        code += ' c = clamp(c, 0.0, 1.0);\n';
      } else code += ` c = ${prev} * ${tc};\n`;
      return code;
    };
    fs += 'void main(){\n vec4 c = vColor;\n';
    for (let u = 0; u < nunits; u++) if (st.tex[u]) fs += envCode(u, st.env[u], 'c');
    if (st.alphaTest) {
      const f = st.alphaFunc;
      const cmp = f === 0x0200 ? 'false' : f === 0x0201 ? 'c.a < uAlphaRef' : f === 0x0202 ? 'c.a == uAlphaRef' : f === 0x0203 ? 'c.a <= uAlphaRef' :
        f === 0x0204 ? 'c.a > uAlphaRef' : f === 0x0205 ? 'c.a != uAlphaRef' : f === 0x0206 ? 'c.a >= uAlphaRef' : 'true';
      fs += ` if (!(${cmp})) discard;\n`;
    }
    if (st.fog) {
      const m = st.fogMode;
      fs += m === 0x2601 ? ' float f = clamp((uFog.z - vFogDist) / (uFog.z - uFog.y), 0.0, 1.0);\n' :
        m === 0x0801 ? ' float f = clamp(exp(-(uFog.x*vFogDist)*(uFog.x*vFogDist)), 0.0, 1.0);\n' : ' float f = clamp(exp(-uFog.x*vFogDist), 0.0, 1.0);\n';
      fs += ' c.rgb = mix(uFogColor.rgb, c.rgb, f);\n';
    }
    fs += ' oColor = c;\n}\n';
    const prog = gl.createProgram();
    gl.attachShader(prog, compile(gl.VERTEX_SHADER, vs)); gl.attachShader(prog, compile(gl.FRAGMENT_SHADER, fs));
    ['aPos', 'aColor', 'aTex0', 'aTex1', 'aMIdx', 'aWeight'].forEach((n, i) => gl.bindAttribLocation(prog, i, n));
    gl.linkProgram(prog);
    if (!gl.getProgramParameter(prog, gl.LINK_STATUS)) throw new Error('ES1 emu link: ' + gl.getProgramInfoLog(prog));
    const u = {}; for (const n of ['uMV', 'uP', 'uT0', 'uT1', 'uColor', 'uS0', 'uS1', 'uEnvC0', 'uEnvC1', 'uAlphaRef', 'uFogColor', 'uFog', 'uPal']) u[n] = gl.getUniformLocation(prog, n);
    p = { prog, u, cache: {} };
    progCache.set(key, p);
    return p;
  }
  const texFormats = new Map(); // gl texture name -> 'rgba'|'rgb'|'a'|'l'|'la'

  // ---------------------------------------------------------------- client array upload
  let es1Mode = true, curGLProg = null;
  function setupArray(loc, a, maxVertex, slot, on = a.enabled, norm = a.norm) {
    if (!on) { gl.disableVertexAttribArray(loc); return; }
    const ts = typeSize(a.type);
    const stride = a.stride || a.size * ts;
    const normalize = a.type === 0x1401 || a.type === 0x1400 ? (loc === 1 || a.normForce) : false;
    if (a.buffer) {
      const b = buffers.get(a.buffer); gl.bindBuffer(gl.ARRAY_BUFFER, b.obj);
      if (a.type === 0x140C) { /* GL_FIXED */ a.fixedSrc = true; }
      gl.vertexAttribPointer(loc, a.size, a.type === 0x140C ? gl.INT : a.type, norm !== undefined ? norm : normalize, stride, a.offset);
    } else {
      const bytes = stride * (maxVertex - 1) + a.size * ts;
      gl.bindBuffer(gl.ARRAY_BUFFER, streamVB[slot]);
      gl.bufferData(gl.ARRAY_BUFFER, U8().subarray(a.ptr, a.ptr + bytes), gl.STREAM_DRAW);
      gl.vertexAttribPointer(loc, a.size, a.type === 0x140C ? gl.INT : a.type, norm !== undefined ? norm : normalize, stride, 0);
    }
    gl.enableVertexAttribArray(loc);
  }
  function maxIndex(count, type, ptr, offset) {
    let src;
    if (elementBuffer) { const b = buffers.get(elementBuffer); src = b.shadow; ptr = offset; if (!src) return 65536; }
    else src = U8();
    if (type === 0x1403) { const a = new Uint16Array(src.buffer, src.byteOffset + ptr, count); let m = 0; for (let i = 0; i < count; i++) if (a[i] > m) m = a[i]; return m + 1; }
    if (type === 0x1401) { let m = 0; for (let i = 0; i < count; i++) if (src[ptr + i] > m) m = src[ptr + i]; return m + 1; }
    const a = new Uint32Array(src.buffer, src.byteOffset + ptr, count); let m = 0; for (let i = 0; i < count; i++) if (a[i] > m) m = a[i]; return m + 1;
  }
  let drawNo = 0;
  function es1Draw(nverts) {
    const dbgSolid = stats.debugSolid === drawNo++;   // debugging aid: draw N of each frame untextured, in red
    const st = { tex: [], env: [], texFmt: [], colorArray: arrays.color.enabled, flat: shadeFlat,
      alphaTest: isEnabledES1(0x0BC0), alphaFunc, fog: isEnabledES1(0x0B60), fogMode: fog.mode,
      palette: isEnabledES1(0x8840) && arrays.mindex.enabled && arrays.weight.enabled, palSize: 32, palUnits: arrays.weight.size };
    for (let u = 0; u < 2; u++) {
      const on = !dbgSolid && (caps.get('tex' + u) || false) && boundTex[u] && arrays.tex[u].enabled;
      st.tex.push(on); st.env.push(texEnv[u]); st.texFmt.push(texFormats.get(boundTex[u]) || 'rgba');
    }
    let key = '';
    for (let u = 0; u < 2; u++) {
      if (!st.tex[u]) { key += '-|'; continue; }
      const e = texEnv[u];
      if (!e.key) e.key = `${e.mode},${e.combineRGB},${e.combineAlpha},${e.src.join(',')},${e.op.join(',')},${e.rgbScale},${e.alphaScale}`;
      key += e.key + ',' + st.texFmt[u] + '|';
    }
    key += `${st.colorArray ? 1 : 0}${st.flat ? 1 : 0}|${st.alphaTest ? st.alphaFunc : 0}|${st.fog ? st.fogMode : 0}|${st.palette ? st.palUnits : 0}`;
    const p = es1Program(key, st);
    if (curGLProg !== p.prog) { gl.useProgram(p.prog); curGLProg = p.prog; }
    const c = p.cache, mv = stacks[GL_MODELVIEW], pr = stacks[GL_PROJECTION];
    const mvT = mv[mv.length - 1], prT = pr[pr.length - 1], t0 = stacks.tex[0][stacks.tex[0].length - 1], t1 = stacks.tex[1][stacks.tex[1].length - 1];
    if (c.mv !== mvT) { gl.uniformMatrix4fv(p.u.uMV, false, mvT); c.mv = mvT; }
    if (c.p !== prT) { gl.uniformMatrix4fv(p.u.uP, false, prT); c.p = prT; }
    if (c.t0 !== t0) { gl.uniformMatrix4fv(p.u.uT0, false, t0); c.t0 = t0; }
    if (c.t1 !== t1) { gl.uniformMatrix4fv(p.u.uT1, false, t1); c.t1 = t1; }
    if (c.color !== color) { gl.uniform4fv(p.u.uColor, color); c.color = color; }
    if (!c.samplers) { gl.uniform1i(p.u.uS0, 0); gl.uniform1i(p.u.uS1, 1); c.samplers = true; }
    if (c.env0 !== texEnv[0].color) { gl.uniform4fv(p.u.uEnvC0, texEnv[0].color); c.env0 = texEnv[0].color; }
    if (c.env1 !== texEnv[1].color) { gl.uniform4fv(p.u.uEnvC1, texEnv[1].color); c.env1 = texEnv[1].color; }
    if (c.aref !== alphaRef) { gl.uniform1f(p.u.uAlphaRef, alphaRef); c.aref = alphaRef; }
    if (c.fogc !== fog.color) { gl.uniform4fv(p.u.uFogColor, fog.color); c.fogc = fog.color; }
    if (c.fd !== fog.density || c.fs !== fog.start || c.fe !== fog.end) { gl.uniform3f(p.u.uFog, fog.density, fog.start, fog.end); c.fd = fog.density; c.fs = fog.start; c.fe = fog.end; }
    if (st.palette) { const flat = new Float32Array(32 * 16); for (let i = 0; i < 32; i++) flat.set(palette[i], i * 16); gl.uniformMatrix4fv(p.u.uPal, false, flat); }
    setupArray(0, arrays.vertex, nverts, 0);
    setupArray(1, arrays.color, nverts, 1);
    setupArray(2, arrays.tex[0], nverts, 2, st.tex[0]);
    setupArray(3, arrays.tex[1], nverts, 3, st.tex[1]);
    if (st.palette) { setupArray(4, arrays.mindex, nverts, 4, true, false); setupArray(5, arrays.weight, nverts, 5); }
    else { gl.disableVertexAttribArray(4); gl.disableVertexAttribArray(5); gl.vertexAttrib4f(4, 0, 0, 0, 0); gl.vertexAttrib4f(5, 1, 0, 0, 0); }
    if (!arrays.color.enabled) gl.vertexAttrib4fv(1, color);
    if (dbgSolid) { gl.disableVertexAttribArray(1); gl.vertexAttrib4f(1, 1, 0, 0, 1); gl.uniform4f(p.u.uColor, 1, 0, 0, 1); c.color = null; }
    if (!st.tex[0]) gl.vertexAttrib4f(2, 0, 0, 0, 1);
    if (!st.tex[1]) gl.vertexAttrib4f(3, 0, 0, 0, 1);
  }
  function es2Draw(nverts) {
    const o = curProgram ? programs.get(curProgram).obj : null;
    if (curGLProg !== o) { gl.useProgram(o); curGLProg = o; }
    for (let i = 0; i < 16; i++) { const a = attribs[i]; if (a.enabled) setupArray(i, a, nverts, i % 8); else gl.disableVertexAttribArray(i); }
  }
  function prepareDraw(nverts) {
    if (curProgram) { es1Mode = false; es2Draw(nverts); } else { es1Mode = true; es1Draw(nverts); }
    if (stats.capture) {   // debugging aid: window.sims3GL.capture = N records the draws of the next N frames
      const mv = stacks[GL_MODELVIEW], pr = stacks[GL_PROJECTION];
      stats.draws.push({ fb: curFB, n: nverts, tex: [caps.get('tex0') && boundTex[0], caps.get('tex1') && boundTex[1]], depth: !!caps.get(0x0B71), blend: !!caps.get(0x0BE2),
        cull: !!caps.get(0x0B44), alpha: !!caps.get(0x0BC0), fog: !!caps.get(0x0B60), fogp: [fog.mode, fog.density, fog.start, fog.end, fog.color.map((x) => +x.toFixed(2)).join('/')], dmask: depthMask, color: color.slice(), colorArr: arrays.color.enabled,
        vtx: [arrays.vertex.size, arrays.vertex.type, arrays.vertex.stride, !!arrays.vertex.buffer], P: Array.from(pr[pr.length - 1]),
        MV: Array.from(mv[mv.length - 1]), vp: gl.getParameter(gl.VIEWPORT) && Array.from(gl.getParameter(gl.VIEWPORT)),
        pos: stats.capturePos && nverts >= stats.capturePos && !arrays.vertex.buffer && arrays.vertex.type === 0x1402 ?
          Array.from({ length: nverts }, (_, i) => Array.from(new Int16Array(U8().buffer, arrays.vertex.ptr + i * (arrays.vertex.stride || arrays.vertex.size * 2), arrays.vertex.size))) : undefined,
        tc: stats.capturePos && nverts >= stats.capturePos && arrays.tex[0].enabled && !arrays.tex[0].buffer ? (() => { const a = arrays.tex[0], ts = a.type === 0x1406 ? 4 : a.type === 0x1402 ? 2 : 1, C = a.type === 0x1406 ? Float32Array : a.type === 0x1402 ? Int16Array : Int8Array;
          return { type: a.type, size: a.size, v: Array.from({ length: nverts }, (_, i) => Array.from(new C(U8().buffer.slice(a.ptr + i * (a.stride || a.size * ts), a.ptr + i * (a.stride || a.size * ts) + a.size * ts)))) }; })() : undefined,
        T0: Array.from(stacks.tex[0][stacks.tex[0].length - 1]).map((x) => +x.toFixed(6)), boundTex0: boundTex[0] });
    }
  }

  const imp = {
    // ---------------- ES2 core
    ActiveTexture: (t) => { activeTex = t - 0x84C0; gl.activeTexture(t); },
    AttachShader: (p, s) => gl.attachShader(programs.get(p).obj, shaders.get(s)),
    BindAttribLocation: (p, i, n) => gl.bindAttribLocation(programs.get(p).obj, i, cstr(n)),
    BindBuffer: (t, b) => {
      let o = buffers.get(b); if (b && !o) { o = { obj: gl.createBuffer(), shadow: null }; buffers.set(b, o); }
      if (t === 0x8892) arrayBuffer = b; else elementBuffer = b;
      gl.bindBuffer(t, o ? o.obj : null);
    },
    BindFramebuffer: (t, f) => {
      curFB = f; let o = fbos.get(f); if (f && !o) { o = gl.createFramebuffer(); fbos.set(f, o); }
      gl.bindFramebuffer(gl.FRAMEBUFFER, f ? o : null);
    },
    BindRenderbuffer: (t, r) => { curRB = r; let o = rbos.get(r); if (r && !o) { o = { obj: gl.createRenderbuffer(), w: 0, h: 0 }; rbos.set(r, o); } gl.bindRenderbuffer(gl.RENDERBUFFER, o ? o.obj : null); },
    BindTexture: (t, n) => {
      let o = textures.get(n); if (n && !o) { o = gl.createTexture(); textures.set(n, o); }
      boundTex[activeTex] = n; gl.bindTexture(gl.TEXTURE_2D, o || null);
    },
    BlendFunc: (s, d) => gl.blendFunc(s, d),
    BufferData: (t, size, p, usage) => {
      const o = buffers.get(t === 0x8892 ? arrayBuffer : elementBuffer);
      if (p) { const data = U8().slice(p, p + size); gl.bufferData(t, data, usage); if (t === 0x8893 && o) o.shadow = data; }
      else { gl.bufferData(t, size, usage); if (t === 0x8893 && o) o.shadow = new Uint8Array(size); }
    },
    BufferSubData: (t, off, size, p) => { const d = U8().subarray(p, p + size); gl.bufferSubData(t, off, d); const o = buffers.get(t === 0x8892 ? arrayBuffer : elementBuffer); if (t === 0x8893 && o && o.shadow) o.shadow.set(d, off); },
    CheckFramebufferStatus: (t) => gl.checkFramebufferStatus(gl.FRAMEBUFFER),
    Clear: (m) => { if (stats.capture) stats.draws.push({ clear: m, fb: curFB, cc: Array.from(gl.getParameter(gl.COLOR_CLEAR_VALUE)) }); if (!stats.skipDraws) gl.clear(m); },
    ClearColor: (r, g, b, a) => gl.clearColor(r, g, b, a),
    ColorMask: (r, g, b, a) => gl.colorMask(!!r, !!g, !!b, !!a),
    CompileShader: (s) => gl.compileShader(shaders.get(s)),
    CompressedTexImage2D: (t, l, f, w, h, b, size, p) => { log(`glCompressedTexImage2D format 0x${f.toString(16)} not supported by WebGL`); glError = 0x0500; },
    CompressedTexSubImage2D: () => { glError = 0x0500; },
    CreateProgram: () => { const id = nextName++; programs.set(id, { obj: gl.createProgram(), uniforms: new Map(), nextLoc: 0 }); return id; },
    CreateShader: (t) => { const id = nextName++; shaders.set(id, gl.createShader(t)); return id; },
    CullFace: (m) => gl.cullFace(m),
    DeleteBuffers: (n, p) => del(n, p, buffers, (o) => gl.deleteBuffer(o.obj)),
    DeleteFramebuffers: (n, p) => del(n, p, fbos, (o) => gl.deleteFramebuffer(o)),
    DeleteProgram: (p) => { const o = programs.get(p); if (o) { gl.deleteProgram(o.obj); programs.delete(p); } },
    DeleteRenderbuffers: (n, p) => del(n, p, rbos, (o) => gl.deleteRenderbuffer(o.obj)),
    DeleteShader: (s) => { const o = shaders.get(s); if (o) { gl.deleteShader(o); shaders.delete(s); } },
    DeleteTextures: (n, p) => del(n, p, textures, (o) => gl.deleteTexture(o)),
    DepthMask: (f) => { depthMask = !!f; gl.depthMask(!!f); },
    Disable: (c) => { if (c === 0x0DE1) { caps.set('tex' + activeTex, false); return; } caps.set(c, false); if (c === 0x0BC0 || c === 0x0B60 || c === 0x8840 || c === 0x0B50 || c === 0x0B57 || c === 0x0BA1 || c === 0x0B71 + 1000) return; try { gl.disable(c); } catch (e) {} },
    DisableVertexAttribArray: (i) => { attribs[i].enabled = false; },
    DrawArrays: (m, first, count) => { if (count <= 0 || stats.skipDraws) return; prepareDraw(first + count); if (stats.capture) Object.assign(stats.draws[stats.draws.length - 1], { mode: m, first }); gl.drawArrays(m, first, count); },
    DrawElements: (m, count, type, off, p) => {
      if (count <= 0 || stats.skipDraws) return;
      const n = maxIndex(count, type, p, off);
      prepareDraw(n);
      if (stats.capture && stats.capturePos && n >= stats.capturePos && !elementBuffer && type === 0x1403) { const d = stats.draws[stats.draws.length - 1]; d.mode = m; d.idx = Array.from(new Uint16Array(U8().buffer, p, count)); }
      if (elementBuffer) gl.drawElements(m, count, type, off);
      else { gl.bindBuffer(gl.ELEMENT_ARRAY_BUFFER, streamIB); gl.bufferData(gl.ELEMENT_ARRAY_BUFFER, U8().subarray(p, p + count * typeSize(type)), gl.STREAM_DRAW); gl.drawElements(m, count, type, 0); }
    },
    Enable: (c) => { if (c === 0x0DE1) { caps.set('tex' + activeTex, true); return; } caps.set(c, true); if (c === 0x0BC0 || c === 0x0B60 || c === 0x8840 || c === 0x0B50 || c === 0x0B57 || c === 0x0BA1) return; try { gl.enable(c); } catch (e) {} },
    EnableVertexAttribArray: (i) => { attribs[i].enabled = true; },
    FramebufferRenderbuffer: (t, att, rt, r) => { gl.framebufferRenderbuffer(gl.FRAMEBUFFER, att, gl.RENDERBUFFER, r ? rbos.get(r).obj : null); if (att === 0x8CE0 && r === drawableRB) drawableFB = curFB; },
    FramebufferTexture2D: (t, att, tt, tex, l) => gl.framebufferTexture2D(gl.FRAMEBUFFER, att, tt, tex ? textures.get(tex) : null, l),
    FrontFace: (m) => gl.frontFace(m),
    GenBuffers: (n, p) => gen(n, p, buffers, () => ({ obj: gl.createBuffer(), shadow: null })),
    GenFramebuffers: (n, p) => gen(n, p, fbos, () => gl.createFramebuffer()),
    GenRenderbuffers: (n, p) => gen(n, p, rbos, () => ({ obj: gl.createRenderbuffer(), w: 0, h: 0 })),
    GenTextures: (n, p) => gen(n, p, textures, () => gl.createTexture()),
    GetError: () => { const e = glError || gl.getError(); glError = 0; return e; },
    GetFloatv: (pn, p) => { const v = gl.getParameter(pn); const f = F32(); if (v && v.length) for (let i = 0; i < v.length; i++) f[(p >> 2) + i] = v[i]; else f[p >> 2] = v || 0; },
    GetIntegerv: (pn, p) => {
      const a = I32();
      if (pn === 0x8CA6) { a[p >> 2] = curFB; return; } if (pn === 0x8CA7) { a[p >> 2] = curRB; return; }
      if (pn === 0x8842) { a[p >> 2] = 32; return; } // MAX_PALETTE_MATRICES_OES
      if (pn === 0x86A4) { a[p >> 2] = 4; return; }  // MAX_VERTEX_UNITS_OES
      if (pn === 0x84E2) { a[p >> 2] = 2; return; }  // MAX_TEXTURE_UNITS (ES1)
      if (pn === 0x0D32) { a[p >> 2] = 32; return; } // MAX_MODELVIEW_STACK_DEPTH etc.
      let v; try { v = gl.getParameter(pn); } catch (e) { v = 0; }
      if (v && v.length !== undefined) for (let i = 0; i < v.length; i++) a[(p >> 2) + i] = v[i]; else a[p >> 2] = typeof v === 'boolean' ? (v ? 1 : 0) : (v | 0);
    },
    GetProgramInfoLog: (pr, n, lp, sp) => { const s = gl.getProgramInfoLog(programs.get(pr).obj) || ''; const b = new TextEncoder().encode(s).slice(0, Math.max(0, n - 1)); U8().set(b, sp); U8()[sp + b.length] = 0; if (lp) I32()[lp >> 2] = b.length; },
    GetProgramiv: (pr, pn, p) => { const v = gl.getProgramParameter(programs.get(pr).obj, pn === 0x8B84 ? gl.LINK_STATUS : pn); I32()[p >> 2] = pn === 0x8B84 ? (gl.getProgramInfoLog(programs.get(pr).obj) || '').length + 1 : (typeof v === 'boolean' ? (v ? 1 : 0) : v | 0); },
    GetRenderbufferParameteriv: (t, pn, p) => { const o = rbos.get(curRB); I32()[p >> 2] = pn === 0x8D42 ? o.w : pn === 0x8D43 ? o.h : gl.getRenderbufferParameter(gl.RENDERBUFFER, pn) | 0; },
    GetShaderInfoLog: (s, n, lp, sp) => { const str = gl.getShaderInfoLog(shaders.get(s)) || ''; const b = new TextEncoder().encode(str).slice(0, Math.max(0, n - 1)); U8().set(b, sp); U8()[sp + b.length] = 0; if (lp) I32()[lp >> 2] = b.length; },
    GetShaderSource: (s, n, lp, sp) => { const str = gl.getShaderSource(shaders.get(s)) || ''; const b = new TextEncoder().encode(str).slice(0, Math.max(0, n - 1)); U8().set(b, sp); U8()[sp + b.length] = 0; if (lp) I32()[lp >> 2] = b.length; },
    GetShaderiv: (s, pn, p) => { const o = shaders.get(s); const v = pn === 0x8B84 ? (gl.getShaderInfoLog(o) || '').length + 1 : gl.getShaderParameter(o, pn); I32()[p >> 2] = typeof v === 'boolean' ? (v ? 1 : 0) : v | 0; },
    GetUniformLocation: (pr, np) => {
      const o = programs.get(pr); const name = cstr(np);
      const loc = gl.getUniformLocation(o.obj, name); if (!loc) return -1;
      const id = ++o.nextLoc + (pr << 12); o.uniforms.set(id, loc); return id;
    },
    IsEnabled: (c) => c === 0x0DE1 ? (caps.get('tex' + activeTex) ? 1 : 0) : (caps.get(c) ? 1 : 0),
    LinkProgram: (p) => gl.linkProgram(programs.get(p).obj),
    PixelStorei: (pn, v) => { if (pn === 0x0CF5) unpackAlign = v; gl.pixelStorei(pn, v); },
    PolygonOffset: (f, u) => gl.polygonOffset(f, u),
    RenderbufferStorage: (t, f, w, h) => {
      const o = rbos.get(curRB); o.w = w; o.h = h;
      const fmt = f === 0x81A5 || f === 0x81A6 ? gl.DEPTH_COMPONENT16 : f === 0x88F0 ? gl.DEPTH24_STENCIL8 : f === 0x8D48 ? gl.STENCIL_INDEX8 : f === 0x8D62 ? gl.RGB565 : f === 0x8056 ? gl.RGBA4 : f === 0x8057 ? gl.RGB5_A1 : gl.RGBA8;
      gl.renderbufferStorage(gl.RENDERBUFFER, fmt, w, h);
    },
    Scissor: (x, y, w, h) => gl.scissor(x, y, w, h),
    ShaderSource: (s, p) => gl.shaderSource(shaders.get(s), cstr(p)),
    TexImage2D: (t, l, ifmt, w, h, b, fmt, type, p) => {
      const n = boundTex[activeTex];
      texFormats.set(n, fmt === 0x1908 ? 'rgba' : fmt === 0x1907 ? 'rgb' : fmt === 0x1906 ? 'a' : fmt === 0x1909 ? 'l' : fmt === 0x190A ? 'la' : 'rgba');
      gl.texImage2D(t, l, fmt, w, h, 0, fmt, type, p ? texData(fmt, type, w, h, p) : null);
      if (l === 0) autoMipmap(t, n);
    },
    // ES1.1 GL_GENERATE_MIPMAP: while set, every change to level 0 recomputes the other levels (WebGL2 has only the
    // explicit glGenerateMipmap, so it is issued after each level-0 upload)
    TexParameteri: (t, pn, v) => { if (pn === 0x8191) { genMip.set(boundTex[activeTex], !!v); return; } gl.texParameteri(t, pn, v); },
    TexSubImage2D: (t, l, x, y, w, h, fmt, type, p) => { gl.texSubImage2D(t, l, x, y, w, h, fmt, type, texData(fmt, type, w, h, p)); if (l === 0) autoMipmap(t, boundTex[activeTex]); },
    Uniform1f: (l, v) => gl.uniform1f(uloc(l), v),
    Uniform1fv: (l, n, p) => gl.uniform1fv(uloc(l), F32().subarray(p >> 2, (p >> 2) + n)),
    Uniform1i: (l, v) => gl.uniform1i(uloc(l), v),
    Uniform2f: (l, a, b) => gl.uniform2f(uloc(l), a, b),
    Uniform2fv: (l, n, p) => gl.uniform2fv(uloc(l), F32().subarray(p >> 2, (p >> 2) + 2 * n)),
    Uniform3f: (l, a, b, c) => gl.uniform3f(uloc(l), a, b, c),
    Uniform3fv: (l, n, p) => gl.uniform3fv(uloc(l), F32().subarray(p >> 2, (p >> 2) + 3 * n)),
    Uniform4f: (l, a, b, c, d) => gl.uniform4f(uloc(l), a, b, c, d),
    Uniform4fv: (l, n, p) => gl.uniform4fv(uloc(l), F32().subarray(p >> 2, (p >> 2) + 4 * n)),
    UniformMatrix4fv: (l, n, t, p) => gl.uniformMatrix4fv(uloc(l), !!t, F32().subarray(p >> 2, (p >> 2) + 16 * n)),
    UseProgram: (p) => { curProgram = p; const o = p ? programs.get(p).obj : null; gl.useProgram(o); curGLProg = o; },
    ValidateProgram: (p) => gl.validateProgram(programs.get(p).obj),
    VertexAttribPointer: (i, size, type, norm, stride, off, p) => { Object.assign(attribs[i], { size, type, norm: !!norm, stride, buffer: arrayBuffer, offset: off, ptr: p }); },
    Viewport: (x, y, w, h) => gl.viewport(x, y, w, h),
    SetDrawableRenderbuffer: () => { drawableRB = curRB; const o = rbos.get(curRB); drawW = o.w; drawH = o.h; canvas.width = o.w; canvas.height = o.h; },
    Present: () => {
      if (stats.skipDraws) { stats.presents++; return; }
      const fb = fbos.get(drawableFB);
      if (!fb) return;
      gl.bindFramebuffer(gl.READ_FRAMEBUFFER, fb);
      gl.bindFramebuffer(gl.DRAW_FRAMEBUFFER, null);
      const sc = caps.get(0x0C11); if (sc) gl.disable(gl.SCISSOR_TEST);
      gl.blitFramebuffer(0, 0, drawW, drawH, 0, 0, canvas.width, canvas.height, gl.COLOR_BUFFER_BIT, gl.NEAREST);
      if (sc) gl.enable(gl.SCISSOR_TEST);
      gl.bindFramebuffer(gl.FRAMEBUFFER, curFB ? fbos.get(curFB) : null);
      stats.presents++;
      if (stats.capture) { stats.capture--; stats.frames.push(stats.draws); stats.draws = []; }
      drawNo = 0;
    },
    // ---------------- ES1 fixed function
    AlphaFunc: (f, r) => { alphaFunc = f; alphaRef = r; },
    ClientActiveTexture: (t) => { clientActive = t - 0x84C0; },
    Color4f: (r, g, b, a) => { color = [r, g, b, a]; },
    ColorPointer: (size, type, stride, off, p) => Object.assign(arrays.color, { size, type, stride, buffer: arrayBuffer, offset: off, ptr: p, norm: type !== 0x1406 }),
    DisableClientState: (a) => { const x = clientArr(a); if (x) x.enabled = false; },
    EnableClientState: (a) => { const x = clientArr(a); if (x) x.enabled = true; },
    Fogf: (pn, v) => { if (pn === 0x0B65) fog.mode = v | 0; else if (pn === 0x0B62) fog.density = v; else if (pn === 0x0B63) fog.start = v; else if (pn === 0x0B64) fog.end = v; },
    Fogfv: (pn, p) => { const f = F32(); if (pn === 0x0B66) fog.color = [f[p >> 2], f[(p >> 2) + 1], f[(p >> 2) + 2], f[(p >> 2) + 3]]; else imp.Fogf(pn, f[p >> 2]); },
    LoadIdentity: () => setTop(ident()),
    LoadMatrixf: (p) => setTop(F32().slice(p >> 2, (p >> 2) + 16)),
    MatrixMode: (m) => { matrixMode = m; },
    MultMatrixf: (p) => setTop(mul(topM(), F32().slice(p >> 2, (p >> 2) + 16))),
    Orthof: (l, r, b, t, n, f) => setTop(mul(topM(), new Float32Array([2 / (r - l), 0, 0, 0, 0, 2 / (t - b), 0, 0, 0, 0, -2 / (f - n), 0, -(r + l) / (r - l), -(t + b) / (t - b), -(f + n) / (f - n), 1]))),
    PopMatrix: () => { const s = curStack(); if (s && s.length > 1) s.pop(); else glError = 0x0504; },
    PushMatrix: () => { const s = curStack(); if (s) s.push(new Float32Array(s[s.length - 1])); },
    Scalef: (x, y, z) => { const m = topM(), r = new Float32Array(16); for (let i = 0; i < 4; i++) { r[i] = m[i] * x; r[4 + i] = m[4 + i] * y; r[8 + i] = m[8 + i] * z; r[12 + i] = m[12 + i]; } setTop(r); },
    Translatef: (x, y, z) => { const m = topM(), r = new Float32Array(m); for (let i = 0; i < 4; i++) r[12 + i] = m[i] * x + m[4 + i] * y + m[8 + i] * z + m[12 + i]; setTop(r); },
    ShadeModel: (m) => { shadeFlat = m === 0x1D00; },
    TexCoordPointer: (size, type, stride, off, p) => Object.assign(arrays.tex[clientActive], { size, type, stride, buffer: arrayBuffer, offset: off, ptr: p, norm: false }),
    TexEnvf: (t, pn, v) => texEnvSet(pn, v),
    TexEnvi: (t, pn, v) => texEnvSet(pn, v),
    VertexPointer: (size, type, stride, off, p) => Object.assign(arrays.vertex, { size, type, stride, buffer: arrayBuffer, offset: off, ptr: p, norm: false }),
    CurrentPaletteMatrixOES: (i) => { curPalette = i; },
    MatrixIndexPointerOES: (size, type, stride, off, p) => Object.assign(arrays.mindex, { size, type, stride, buffer: arrayBuffer, offset: off, ptr: p, norm: false }),
    WeightPointerOES: (size, type, stride, off, p) => Object.assign(arrays.weight, { size, type, stride, buffer: arrayBuffer, offset: off, ptr: p, norm: false }),
  };
  function clientArr(a) {
    return a === 0x8074 ? arrays.vertex : a === 0x8076 ? arrays.color : a === 0x8078 ? arrays.tex[clientActive] : a === 0x8844 ? arrays.mindex : a === 0x86AD ? arrays.weight : null;
  }
  function texEnvSet(pn, v) {
    const e = texEnv[activeTex];
    e.key = null;
    if (pn === 0x2200) e.mode = v; else if (pn === 0x8571) e.combineRGB = v; else if (pn === 0x8572) e.combineAlpha = v;
    else if (pn >= 0x8580 && pn <= 0x8582) e.src[pn - 0x8580] = v; else if (pn >= 0x8588 && pn <= 0x858A) e.src[3 + pn - 0x8588] = v;
    else if (pn >= 0x8590 && pn <= 0x8592) e.op[pn - 0x8590] = v; else if (pn >= 0x8598 && pn <= 0x859A) e.op[3 + pn - 0x8598] = v;
    else if (pn === 0x8573) e.rgbScale = v; else if (pn === 0x0D1C) e.alphaScale = v;
  }
  // client pixel data for texImage2D/texSubImage2D: 8-bit channels as Uint8Array, packed 16-bit types as Uint16Array
  // (WebGL requires the view type to match), honouring GL_UNPACK_ALIGNMENT row padding
  function texData(fmt, type, w, h, p) {
    const packed16 = type === 0x8363 || type === 0x8033 || type === 0x8034;
    if (type !== 0x1401 && !packed16) { log(`glTexImage2D: unsupported type 0x${type.toString(16)} (format 0x${fmt.toString(16)})`); }
    const bpp = packed16 ? 2 : (fmt === 0x1908 ? 4 : fmt === 0x1907 ? 3 : fmt === 0x190A ? 2 : 1);
    const align = unpackAlign;
    const row = Math.ceil(w * bpp / align) * align;
    const len = row * (h - 1) + w * bpp;
    if (!packed16) return U8().subarray(p, p + len);
    if ((p & 1) === 0) return new Uint16Array(mem.buffer, p, len >> 1);
    return new Uint16Array(U8().slice(p, p + len).buffer);
  }
  const genMip = new Map();
  function autoMipmap(t, n) {
    if (!genMip.get(n)) return;
    stats.autoMipmaps++;
    try { gl.generateMipmap(t); } catch (e) { log(`GL_GENERATE_MIPMAP: ${e}`); }
  }
  function uloc(id) { const p = programs.get(id >> 12); return p ? p.uniforms.get(id) : null; }
  // ES1 GL_TEXTURE_ENV_COLOR via TexEnvfv is not imported; COMBINE sources use env colour default (0).
  const stats = { presents: 0, capture: 0, draws: [], frames: [], autoMipmaps: 0 };
  return { imports: imp, stats, gl };
}

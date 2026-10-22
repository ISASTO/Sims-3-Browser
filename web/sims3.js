// sims3.js — browser host for the recompiled game (sims3.wasm).
//
// Provides the wasm imports: "env" (files, clock, console, UIKit host views), "gl" (WebGL2, gl.js),
// "audio" (WebAudio), "text" (Canvas2D glyphs) and a minimal "wasi_snapshot_preview1".
// The app bundle is read from the local server (bundle/...), indexed by bundle-manifest.json.
// The writable container (/home: saves, preferences, keychain) is kept in memory and persisted to IndexedDB.
'use strict';
import { createGL } from './gl.js';

const POINTS_W = 667, POINTS_H = 375;           // virtual device: iPhone 6 class, landscape, @2x
const $ = (id) => document.getElementById(id);
const status = (s) => { const e = $('status'); if (e) e.textContent = s; };
const logBox = [];
function log(s) { console.log(s); logBox.push(s); if (logBox.length > 400) logBox.shift(); }

let inst = null, exp = null;
// Deterministic test mode (?test): no animation-frame loop; the driver advances a virtual clock one 60 Hz frame at a
// time through window.sims3Test.step(), optionally skipping draw submission for frames it does not capture.
const TEST = new URLSearchParams(location.search).has('test');
let vclock = TEST ? 0 : null; const wall0 = Date.now();
const mem = { get buffer() { return exp.memory.buffer; } };
const U8 = () => new Uint8Array(exp.memory.buffer);
const DV = () => new DataView(exp.memory.buffer);
const dec = new TextDecoder();
const enc = new TextEncoder();
function cstr(p) { if (!p) return ''; const u = U8(); let e = p; while (u[e]) e++; return dec.decode(u.subarray(p, e)); }
function putStr(p, n, s) { const b = enc.encode(s).subarray(0, n - 1); U8().set(b, p); U8()[p + b.length] = 0; return b.length; }

// ------------------------------------------------------------------ files
let manifest = null;          // { files: {rel: size}, dirs: [...] }
const bundleChildren = new Map();
const BUNDLE_PREFIX = '/app/sims3_iphone.app';
const fileCache = new Map();  // rel -> Uint8Array (LRU by insertion)
let fileCacheBytes = 0;
const FILE_CACHE_MAX = 96 << 20;
const stats = { bundleReads: 0, bundleBytes: 0, readMs: 0 };

function relBundle(path) {
  if (path === BUNDLE_PREFIX) return '';
  if (path.startsWith(BUNDLE_PREFIX + '/')) return path.slice(BUNDLE_PREFIX.length + 1).replace(/\/+$/, '');
  return null;
}
function relHome(path) {
  if (path === '/home') return '';
  if (path.startsWith('/home/')) return path.slice(6).replace(/\/+$/, '');
  return null;
}
function indexBundle() {
  for (const d of manifest.dirs) bundleChildren.set(d, new Set());
  const add = (rel) => { const i = rel.lastIndexOf('/'); const parent = i < 0 ? '' : rel.slice(0, i); const name = i < 0 ? rel : rel.slice(i + 1); if (!bundleChildren.has(parent)) bundleChildren.set(parent, new Set()); bundleChildren.get(parent).add(name); };
  for (const d of manifest.dirs) if (d) add(d);
  for (const f of Object.keys(manifest.files)) add(f);
}
function syncFetch(url) {
  const t0 = performance.now();
  const x = new XMLHttpRequest();
  x.open('GET', url, false);
  x.overrideMimeType('text/plain; charset=x-user-defined');
  x.send();
  if (x.status !== 200) return null;
  const s = x.responseText, n = s.length, u = new Uint8Array(n);
  for (let i = 0; i < n; i++) u[i] = s.charCodeAt(i) & 0xff;
  stats.bundleReads++; stats.bundleBytes += n; stats.readMs += performance.now() - t0;
  return u;
}
function bundleBytes(rel) {
  let b = fileCache.get(rel);
  if (b) { fileCache.delete(rel); fileCache.set(rel, b); return b; }
  b = syncFetch('bundle/' + rel.split('/').map(encodeURIComponent).join('/'));
  if (!b) return null;
  fileCache.set(rel, b); fileCacheBytes += b.length;
  while (fileCacheBytes > FILE_CACHE_MAX && fileCache.size > 1) { const [k, v] = fileCache.entries().next().value; fileCache.delete(k); fileCacheBytes -= v.length; }
  return b;
}

// /home: in-memory, persisted to IndexedDB
const home = new Map();       // rel -> Uint8Array
const homeDirs = new Set(['', 'Documents', 'Library', 'Library/Caches', 'Library/Preferences', 'tmp']);
let db = null, dirty = new Set(), deleted = new Set(), flushTimer = 0;
function idb(req) { return new Promise((res, rej) => { req.onsuccess = () => res(req.result); req.onerror = () => rej(req.error); }); }
async function homeOpen() {
  try {
    const r = indexedDB.open('sims3-home', 1);
    r.onupgradeneeded = () => { r.result.createObjectStore('files'); r.result.createObjectStore('dirs'); };
    db = await idb(r);
    const tx = db.transaction(['files', 'dirs'], 'readonly');
    const keys = await idb(tx.objectStore('files').getAllKeys());
    const vals = await idb(tx.objectStore('files').getAll());
    keys.forEach((k, i) => home.set(k, new Uint8Array(vals[i])));
    (await idb(tx.objectStore('dirs').getAllKeys())).forEach((k) => homeDirs.add(k));
    log(`home: restored ${home.size} files from IndexedDB`);
  } catch (e) { log('home: IndexedDB unavailable, saves will not persist (' + e + ')'); db = null; }
}
function homeTouch(rel) { dirty.add(rel); deleted.delete(rel); scheduleFlush(); }
function scheduleFlush() { if (!flushTimer) flushTimer = setTimeout(homeFlush, 400); }
function homeFlush() {
  flushTimer = 0;
  if (!db || (!dirty.size && !deleted.size)) return;
  const tx = db.transaction(['files', 'dirs'], 'readwrite');
  const fs = tx.objectStore('files'), ds = tx.objectStore('dirs');
  for (const k of dirty) { const v = home.get(k); if (v) fs.put(v.slice(), k); }
  for (const k of deleted) fs.delete(k);
  for (const d of homeDirs) ds.put(1, d);
  dirty.clear(); deleted.clear();
}
function homeParents(rel) { const parts = rel.split('/'); for (let i = 1; i < parts.length; i++) homeDirs.add(parts.slice(0, i).join('/')); }

const env = {
  js_console: (p) => log(cstr(p)),
  js_fatal: (p) => fatal(cstr(p)),
  js_now: () => vclock !== null ? vclock : performance.now(),
  js_wall: () => vclock !== null ? wall0 + vclock : Date.now(),
  js_tz_offset_min: (ms) => -new Date(ms).getTimezoneOffset(),
  js_file_size: (pp) => {
    const path = cstr(pp); let r = relBundle(path);
    if (r !== null) { const s = manifest.files[r]; return s === undefined ? -1 : s; }
    r = relHome(path); if (r !== null) { const b = home.get(r); return b ? b.length : -1; }
    return -1;
  },
  js_file_read: (pp, dst, off, len) => {
    const path = cstr(pp); let r = relBundle(path), b = null;
    if (r !== null) { if (manifest.files[r] === undefined) return -1; b = bundleBytes(r); }
    else { r = relHome(path); if (r !== null) b = home.get(r); }
    if (!b) return -1;
    const n = Math.max(0, Math.min(len, b.length - off));
    U8().set(b.subarray(off, off + n), dst);
    return n;
  },
  js_file_write: (pp, src, len, append) => {
    const r = relHome(cstr(pp)); if (r === null || r === '') return -1;
    const data = U8().slice(src, src + len);
    const old = append ? home.get(r) : null;
    if (old) { const m = new Uint8Array(old.length + len); m.set(old); m.set(data, old.length); home.set(r, m); } else home.set(r, data);
    homeParents(r); homeTouch(r);
    return len;
  },
  js_file_delete: (pp) => {
    const r = relHome(cstr(pp)); if (r === null) return -1;
    if (home.delete(r)) { dirty.delete(r); deleted.add(r); scheduleFlush(); return 0; }
    if (homeDirs.delete(r)) return 0;
    return -1;
  },
  js_dir_list: (pp, out, outlen) => {
    const path = cstr(pp); let names = null, r = relBundle(path);
    if (r !== null) { const s = bundleChildren.get(r); if (!s) return -1; names = [...s]; }
    else {
      r = relHome(path); if (r === null || !homeDirs.has(r)) return -1;
      const set = new Set(), pre = r ? r + '/' : '';
      for (const k of [...home.keys(), ...homeDirs]) if (k.startsWith(pre) && k.length > pre.length) set.add(k.slice(pre.length).split('/')[0]);
      names = [...set];
    }
    const u = U8(); let k = 0;
    for (const n of names) { const b = enc.encode(n); if (k + b.length + 2 > outlen) break; u.set(b, out + k); k += b.length; u[out + k++] = 0; }
    u[out + k] = 0;
    return k;
  },
  js_is_dir: (pp) => { const path = cstr(pp); let r = relBundle(path); if (r !== null) return bundleChildren.has(r) ? 1 : 0; r = relHome(path); return r !== null && homeDirs.has(r) ? 1 : 0; },
  js_mkdir: (pp) => { const r = relHome(cstr(pp)); if (r === null) return -1; homeParents(r + '/x'); homeDirs.add(r); scheduleFlush(); return 0; },
  js_language: (p, n) => putStr(p, n, navigator.language || 'en-US'),
  js_ui_event: (kind, view, argp, x, y, w, h) => uiEvent(kind, view, argp ? cstr(argp) : '', x, y, w, h),
};

// ------------------------------------------------------------------ UIKit host views (launch image, alerts)
const views = new Map();   // guest view -> element
let nextViewId = 1;
function uiEvent(kind, view, arg, x, y, w, h) {
  const stage = $('stage');
  const place = (el) => { el.style.left = (x / POINTS_W * 100) + '%'; el.style.top = (y / POINTS_H * 100) + '%'; el.style.width = (w / POINTS_W * 100) + '%'; el.style.height = (h / POINTS_H * 100) + '%'; };
  if (kind === 1) {   // UIImageView with a bundle image
    let el = views.get(view);
    if (!el) { el = document.createElement('img'); el.className = 'hostview'; stage.appendChild(el); views.set(view, el); }
    const r = arg.startsWith('/') ? relBundle(arg) : arg;   // image names resolve in the bundle root
    if (r !== null) el.src = 'bundle/' + r;
    place(el);
    return nextViewId++;
  }
  if (kind === 3) { const c = $('screen'); views.set(view, c); return nextViewId++; }   // the EAGL view is the canvas
  if (kind === 4) { let el = views.get(view); if (!el) { el = document.createElement('div'); el.className = 'hostview'; stage.appendChild(el); views.set(view, el); } if (arg) el.style.background = arg; place(el); return nextViewId++; }
  if (kind === 7) {   // UITextField: a real input element at the field's frame
    const [secure, keyboard, retKey, placeholder, text] = arg.split('\x1f');
    let el = views.get(view);
    if (!el) {
      el = document.createElement('input'); el.className = 'hostview hostinput'; el.autocomplete = 'off'; el.spellcheck = false;
      el.addEventListener('input', () => sendText(view, 0, el.value));
      el.addEventListener('keydown', (ev) => { ev.stopPropagation(); if (ev.key === 'Enter') { ev.preventDefault(); sendText(view, 1, el.value); } });
      el.addEventListener('pointerdown', (ev) => ev.stopPropagation());
      stage.appendChild(el); views.set(view, el);
    }
    el.type = secure === '1' ? 'password' : 'text';
    el.inputMode = keyboard === '4' || keyboard === '5' || keyboard === '11' ? 'numeric' : keyboard === '7' ? 'email' : keyboard === '3' ? 'url' : 'text';
    el.enterKeyHint = retKey === '9' ? 'done' : retKey === '1' ? 'go' : 'enter';
    el.placeholder = placeholder || '';
    if (document.activeElement !== el) el.value = text || '';
    place(el);
    return nextViewId++;
  }
  if (kind === 10) {   // UIWebView: an isolated iframe (HTML strings via srcdoc, bundle files by path)
    const sep = arg.indexOf('\x1f'), mode = arg.slice(0, sep), body = arg.slice(sep + 1);
    let el = views.get(view);
    if (!el) { el = document.createElement('iframe'); el.className = 'hostview hostweb'; el.setAttribute('sandbox', ''); stage.appendChild(el); views.set(view, el); }
    if (mode === 'html') { if (el.srcdoc !== body) el.srcdoc = body; }
    else { const r = body.startsWith('file://') ? relBundle(decodeURI(body.slice(7))) : body.startsWith('/') ? relBundle(body) : null; el.removeAttribute('srcdoc'); el.src = r !== null ? 'bundle/' + r : 'about:blank'; }
    place(el);
    return nextViewId++;
  }
  if (kind === 11) {   // UINavigationBar: title and bar buttons
    const [title, left, leftItem, right, rightItem] = arg.split('\x1f');
    let el = views.get(view);
    if (!el) { el = document.createElement('div'); el.className = 'hostview hostbar'; stage.appendChild(el); views.set(view, el); }
    el.textContent = '';
    const t = document.createElement('span'); t.className = 'bartitle'; t.textContent = title; el.appendChild(t);
    const btn = (label, item, side) => { if (!label || !+item) return; const b = document.createElement('button'); b.textContent = label; b.className = 'barbtn ' + side;
      b.addEventListener('click', (ev) => { ev.stopPropagation(); exp.sims3_ui_action(+item); }); el.appendChild(b); };
    btn(left, leftItem, 'left'); btn(right, rightItem, 'right');
    place(el);
    return nextViewId++;
  }
  if (kind === 8) { const el = views.get(view); if (el && el.focus) setTimeout(() => el.focus(), 0); return 0; }
  if (kind === 9) { const el = views.get(view); if (el && el.blur) el.blur(); return 0; }
  if (kind === 5) { const el = views.get(view); if (el && el.id !== 'screen') { el.style.display = arg === 'hidden' ? 'none' : ''; el.style.opacity = String(x); } return 0; }
  if (kind === 2) { const el = views.get(view); if (el && el.id !== 'screen') el.remove(); views.delete(view); return 0; }
  if (kind === 6) { toast(arg); return 0; }
  return 0;
}
function sendText(view, kind, value) {
  const b = enc.encode(value), p = exp.malloc(b.length + 1);
  U8().set(b, p); U8()[p + b.length] = 0;
  exp.sims3_text_event(view, kind, p);
  exp.free(p);
}
function toast(msg) {
  const t = document.createElement('div'); t.className = 'toast'; t.textContent = msg; document.body.appendChild(t);
  setTimeout(() => t.remove(), 5000);
}

// ------------------------------------------------------------------ text (Canvas2D)
const tcanvas = document.createElement('canvas');
const tctx = tcanvas.getContext('2d', { willReadFrequently: true });
function cssFont(name, size, bold) {
  const n = name.toLowerCase();
  const b = bold || /bold|heavy|black/.test(n);
  const fam = /courier|menlo|mono/.test(n) ? '"Courier New", monospace' : /georgia|times|serif/.test(n) && !/sans/.test(n) ? 'Georgia, "Times New Roman", serif' :
    /arial/.test(n) ? 'Arial, Helvetica, sans-serif' : '"Helvetica Neue", Helvetica, Arial, sans-serif';
  return `${b ? 'bold ' : ''}${size}px ${fam}`;
}
const text = {
  font_metrics: (fp, size, bold, ap, dp, lp) => {
    tctx.font = cssFont(cstr(fp), size, bold);
    const m = tctx.measureText('Hg');
    const a = m.fontBoundingBoxAscent || size * 0.95, d = m.fontBoundingBoxDescent || size * 0.25;
    const dv = DV(); dv.setFloat32(ap, a, true); dv.setFloat32(dp, d, true); dv.setFloat32(lp, Math.ceil(a + d), true);
  },
  measure: (fp, size, bold, sp) => { tctx.font = cssFont(cstr(fp), size, bold); return tctx.measureText(cstr(sp)).width; },
  render: (fp, size, bold, sp, mask, w, h, baseline) => {
    if (w <= 0 || h <= 0) return;
    if (tcanvas.width < w || tcanvas.height < h) { tcanvas.width = Math.max(w, tcanvas.width); tcanvas.height = Math.max(h, tcanvas.height); }
    tctx.clearRect(0, 0, w, h);
    tctx.font = cssFont(cstr(fp), size, bold); tctx.fillStyle = '#fff'; tctx.textBaseline = 'alphabetic';
    tctx.fillText(cstr(sp), 0, baseline);
    const px = tctx.getImageData(0, 0, w, h).data, u = U8();
    for (let i = 0, n = w * h; i < n; i++) u[mask + i] = px[i * 4 + 3];
  },
};

// ------------------------------------------------------------------ audio (WebAudio)
let actx = null, master = null, ameter = null;
const abufs = new Map(), asrcs = new Map(), streams = new Map();
function ac() {
  if (!actx) {
    actx = new (window.AudioContext || window.webkitAudioContext)({ latencyHint: 'interactive' });
    master = actx.createGain(); ameter = actx.createAnalyser(); ameter.fftSize = 2048;
    master.connect(ameter); ameter.connect(actx.destination);   // the analyser passes audio through; it feeds sims3AudioLevel()
  }
  return actx;
}
const audioStats = { buffers: 0, plays: 0, streams: 0, pcmFrames: 0, chunks: 0, underruns: 0 };
// AudioQueue output streams (hostaudio.h contract). The C runtime decodes; this side schedules PCM chunks gaplessly
// on the AudioContext timeline and reports how many frames the device has played. In ?test mode the position follows
// the virtual clock so that buffer callbacks stay deterministic.
const LEAD = 0.05;
const sclock = () => (TEST ? vclock / 1000 : ac().currentTime);
function sPlayed(s) {
  if (!s.running) return s.base;   // a suspended AudioContext's currentTime does not advance
  return Math.min(s.queued, s.base + Math.max(0, sclock() - s.anchor) * s.rate);
}
function sSchedule(s, ck, fromFrame) {
  const ctx = ac(), n = ctx.createBufferSource();
  n.buffer = ck.b; n.connect(s.g);
  const t = Math.max(s.schedEnd, ctx.currentTime + LEAD), off = Math.max(0, fromFrame - ck.start) / s.rate;
  n.start(t, off); ck.node = n; s.schedEnd = t + ck.frames / s.rate - off;
}
function sHalt(s) { for (const ck of s.chunks) if (ck.node) { try { ck.node.stop(); } catch (e) {} ck.node.disconnect(); ck.node = null; } s.schedEnd = 0; }
const audio = {
  buffer: (id, pcm, bytes, chn, bits, freq) => {
    audioStats.buffers++;
    const ctx = ac(); const frames = Math.floor(bytes / (chn * bits / 8)); if (frames <= 0) return;
    const b = ctx.createBuffer(chn, frames, freq); const dv = DV();
    for (let c = 0; c < chn; c++) {
      const out = b.getChannelData(c);
      if (bits === 16) for (let i = 0; i < frames; i++) out[i] = dv.getInt16(pcm + (i * chn + c) * 2, true) / 32768;
      else for (let i = 0; i < frames; i++) out[i] = (dv.getUint8(pcm + i * chn + c) - 128) / 128;
    }
    abufs.set(id, b);
  },
  buffer_delete: (id) => abufs.delete(id),
  source_play: (src, buf, loop, gain, pitch) => {
    audioStats.plays++;
    audio.source_stop(src);
    const b = abufs.get(buf); if (!b) return;
    const ctx = ac(); const n = ctx.createBufferSource(); const g = ctx.createGain();
    n.buffer = b; n.loop = !!loop; n.playbackRate.value = pitch || 1; g.gain.value = gain;
    n.connect(g); g.connect(master); n.start();
    const s = { n, g }; asrcs.set(src, s); n.onended = () => { if (asrcs.get(src) === s) asrcs.delete(src); };
  },
  source_stop: (src) => { const s = asrcs.get(src); if (s) { try { s.n.stop(); } catch (e) {} asrcs.delete(src); } },
  source_loop: (src, loop) => { const s = asrcs.get(src); if (s) s.n.loop = !!loop; },
  source_param: (src, gain, pitch) => { const s = asrcs.get(src); if (s) { s.g.gain.value = gain; s.n.playbackRate.value = pitch || 1; } },
  stream_open: (q, rate, ch) => {
    audio.stream_stop(q); audioStats.streams++;
    const ctx = ac(), g = ctx.createGain(); g.connect(master);
    streams.set(q, { g, rate, ch, chunks: [], queued: 0, running: false, base: 0, anchor: 0, schedEnd: 0, gain: 1 });
  },
  stream_pcm: (q, p, frames) => {
    const s = streams.get(q); if (!s || frames <= 0) return;
    const ctx = ac(), b = ctx.createBuffer(s.ch, frames, s.rate), src = new Int16Array(mem.buffer, p, frames * s.ch);
    for (let c = 0; c < s.ch; c++) { const out = b.getChannelData(c); for (let i = 0, j = c; i < frames; i++, j += s.ch) out[i] = src[j] / 32768; }
    const played = sPlayed(s);
    if (s.running && played >= s.queued) { if (s.queued > 0) audioStats.underruns++; s.base = s.queued; s.anchor = sclock() + LEAD; }
    while (s.chunks.length && s.chunks[0].start + s.chunks[0].frames <= played) s.chunks.shift();
    const ck = { b, start: s.queued, frames, node: null };
    s.chunks.push(ck); s.queued += frames; audioStats.pcmFrames += frames; audioStats.chunks++;
    if (s.running) sSchedule(s, ck, ck.start);
  },
  stream_run: (q, on) => {
    const s = streams.get(q); if (!s || s.running === !!on) return;
    if (on) {
      s.running = true; s.anchor = sclock() + LEAD; s.schedEnd = 0;
      for (const ck of s.chunks) if (ck.start + ck.frames > s.base) sSchedule(s, ck, s.base);
    } else { s.base = sPlayed(s); s.running = false; sHalt(s); }
  },
  stream_played: (q) => { const s = streams.get(q); return s ? sPlayed(s) : 0; },
  stream_stop: (q) => { const s = streams.get(q); if (s) { sHalt(s); s.g.disconnect(); streams.delete(q); } },
  stream_volume: (q, gain) => { const s = streams.get(q); if (s) s.g.gain.value = gain; },
  suspend: (on) => { if (actx) on ? actx.suspend() : actx.resume(); },
};

// ------------------------------------------------------------------ WASI (stdout/stderr, clocks, random)
const wasi = new Proxy({
  fd_write: (fd, iov, iovcnt, nwritten) => {
    const dv = DV(); let n = 0, s = '';
    for (let i = 0; i < iovcnt; i++) { const p = dv.getUint32(iov + 8 * i, true), l = dv.getUint32(iov + 8 * i + 4, true); s += dec.decode(U8().subarray(p, p + l)); n += l; }
    if (s.trim()) log(s.replace(/\n$/, ''));
    dv.setUint32(nwritten, n, true); return 0;
  },
  fd_close: () => 0, fd_seek: () => 70, fd_fdstat_get: (fd, p) => { const dv = DV(); dv.setUint8(p, 2); dv.setUint16(p + 2, 0, true); dv.setBigUint64(p + 8, 0n, true); dv.setBigUint64(p + 16, 0n, true); return 0; },
  fd_prestat_get: () => 8, fd_prestat_dir_name: () => 8, fd_read: () => 8, path_open: () => 44, path_filestat_get: () => 44,
  environ_sizes_get: (c, s) => { DV().setUint32(c, 0, true); DV().setUint32(s, 0, true); return 0; }, environ_get: () => 0,
  args_sizes_get: (c, s) => { DV().setUint32(c, 0, true); DV().setUint32(s, 0, true); return 0; }, args_get: () => 0,
  clock_time_get: (id, prec, out) => { const ns = id === 0 ? BigInt(Date.now()) * 1000000n : BigInt(Math.round(performance.now() * 1e6)); DV().setBigUint64(out, ns, true); return 0; },
  clock_res_get: (id, out) => { DV().setBigUint64(out, 1000n, true); return 0; },
  random_get: (p, n) => { crypto.getRandomValues(U8().subarray(p, p + n)); return 0; },
  proc_exit: (code) => { throw new Error('proc_exit ' + code); },
  sched_yield: () => 0, poll_oneoff: () => 52,
}, { get: (t, k) => t[k] || (() => { log('wasi: ' + String(k) + ' not provided'); return 52; }) });

// ------------------------------------------------------------------ errors
let dead = false;
function fatal(msg) {
  dead = true;
  const e = $('error'); e.style.display = 'block';
  e.textContent = 'The game stopped: ' + msg + '\n\nRecent log:\n' + logBox.slice(-40).join('\n');
}

// ------------------------------------------------------------------ input
function setupInput(canvas) {
  const pt = (ev) => { const r = canvas.getBoundingClientRect(); return [(ev.clientX - r.left) / r.width * POINTS_W, (ev.clientY - r.top) / r.height * POINTS_H]; };
  // Touch and pen pointers map 1:1 to UITouches.  A mouse has one pointer, so the game's two-finger gesture
  // (orbit the camera) is synthesized: right-button drag (or Ctrl + left drag) places two virtual fingers either
  // side of the cursor and turns them around it with horizontal motion and moves them together with vertical motion.
  const down = new Set();
  const TWO_A = 1000001, TWO_B = 1000002, R = 45;
  let two = null;   // { cx, cy, x0, y0 }
  const twoPos = (dx, dy) => { const a = dx * 0.012; const ox = Math.cos(a) * R, oy = Math.sin(a) * R; return [[two.cx + ox, two.cy + oy + dy], [two.cx - ox, two.cy - oy + dy]]; };
  const unlockAudio = () => { if (actx && actx.state === 'suspended' && document.visibilityState === 'visible') actx.resume(); else ac(); };
  canvas.addEventListener('pointerdown', (ev) => {
    ev.preventDefault(); unlockAudio(); canvas.setPointerCapture(ev.pointerId);
    const [x, y] = pt(ev);
    if (ev.pointerType === 'mouse' && (ev.button === 2 || (ev.button === 0 && ev.ctrlKey))) {
      two = { cx: x, cy: y, x0: x, y0: y, id: ev.pointerId };
      const [a, b] = twoPos(0, 0); exp.sims3_touch(0, TWO_A, a[0], a[1]); exp.sims3_touch(0, TWO_B, b[0], b[1]);
      return;
    }
    down.add(ev.pointerId); exp.sims3_touch(0, ev.pointerId, x, y);
  });
  canvas.addEventListener('pointermove', (ev) => {
    const [x, y] = pt(ev);
    if (two && ev.pointerId === two.id) { ev.preventDefault(); const [a, b] = twoPos(x - two.x0, y - two.y0); exp.sims3_touch(1, TWO_A, a[0], a[1]); exp.sims3_touch(1, TWO_B, b[0], b[1]); return; }
    if (!down.has(ev.pointerId)) return; ev.preventDefault(); exp.sims3_touch(1, ev.pointerId, x, y);
  });
  const end = (type) => (ev) => {
    const [x, y] = pt(ev);
    if (two && ev.pointerId === two.id) { ev.preventDefault(); const [a, b] = twoPos(x - two.x0, y - two.y0); exp.sims3_touch(type, TWO_A, a[0], a[1]); exp.sims3_touch(type, TWO_B, b[0], b[1]); two = null; return; }
    if (!down.delete(ev.pointerId)) return; ev.preventDefault(); exp.sims3_touch(type, ev.pointerId, x, y);
  };
  canvas.addEventListener('pointerup', end(2)); canvas.addEventListener('pointercancel', end(3));
  canvas.addEventListener('contextmenu', (ev) => ev.preventDefault());
  // lifecycle: hidden page = background (the game saves there), lost focus = inactive
  document.addEventListener('visibilitychange', () => { if (!exp) return; if (document.hidden) { exp.sims3_lifecycle(2); exp.sims3_frame(performance.now()); homeFlush(); } else exp.sims3_lifecycle(3); });
  window.addEventListener('blur', () => exp && exp.sims3_lifecycle(0));
  window.addEventListener('focus', () => exp && exp.sims3_lifecycle(1));
  window.addEventListener('pagehide', () => { if (exp && !dead) { exp.sims3_lifecycle(2); exp.sims3_frame(performance.now()); } homeFlush(); });
}

// ------------------------------------------------------------------ boot + frame loop
async function main() {
  const canvas = $('screen');
  status('Loading bundle index…');
  manifest = await (await fetch('bundle-manifest.json')).json();
  indexBundle();
  await homeOpen();
  status('Compiling game code…');
  const glh = createGL(canvas, mem, log);
  const t0 = performance.now();
  const { instance } = await WebAssembly.instantiateStreaming(fetch('sims3.wasm'), { env, gl: glh.imports, audio, text, wasi_snapshot_preview1: wasi });
  inst = instance; exp = instance.exports;
  log(`wasm: instantiated in ${(performance.now() - t0).toFixed(0)} ms`);
  if (exp._initialize) exp._initialize();
  status('Starting…');
  await new Promise((r) => setTimeout(r, 0));
  const tb = performance.now();
  let rc;
  if (new URLSearchParams(location.search).has('verbose')) exp.sims3_set_verbose(1);
  try { rc = exp.sims3_boot(); } catch (e) { if (!dead) fatal(String(e && e.stack || e)); return; }
  log(`boot: ${(performance.now() - tb).toFixed(0)} ms, result ${rc}, bundle reads ${stats.bundleReads} (${(stats.bundleBytes / 1048576).toFixed(1)} MiB, ${stats.readMs.toFixed(0)} ms)`);
  if (rc !== 0) { fatal('boot did not reach the run loop (state ' + rc + ')'); return; }
  setupInput(canvas);
  $('status').style.display = 'none';
  // frame loop + performance meter (frames presented per second and CPU time per frame)
  const perf = { frames: 0, presents0: 0, t0: performance.now(), cpu: 0, worst: 0 };
  window.sims3Perf = { fps: 0, cpuMs: 0, worstMs: 0, presents: () => glh.stats.presents, stats };
  window.sims3GL = glh.stats;
  window.sims3Audio = audioStats; window.sims3AudioStreams = streams;
  window.sims3AudioLevel = () => {   // RMS of what is reaching the output right now, plus the context state
    if (!ameter) return { state: 'none', rms: 0 };
    const d = new Float32Array(ameter.fftSize); ameter.getFloatTimeDomainData(d);
    let e = 0; for (const v of d) e += v * v;
    return { state: actx.state, time: +actx.currentTime.toFixed(2), rms: +Math.sqrt(e / d.length).toFixed(4) };
  };
  const meter = $('meter');
  function frame(now) {
    if (dead) return;
    const a = performance.now();
    try { exp.sims3_frame(now); } catch (e) { if (!dead) fatal(String(e && e.stack || e)); return; }
    const dt = performance.now() - a;
    perf.frames++; perf.cpu += dt; if (dt > perf.worst) perf.worst = dt;
    if (now - perf.t0 >= 1000) {
      const presents = glh.stats.presents - perf.presents0;
      const fps = presents * 1000 / (now - perf.t0);
      window.sims3Perf.fps = fps; window.sims3Perf.cpuMs = perf.cpu / perf.frames; window.sims3Perf.worstMs = perf.worst;
      if (meter) meter.textContent = `${fps.toFixed(0)} fps · ${(perf.cpu / perf.frames).toFixed(1)} ms/frame`;
      perf.t0 = now; perf.frames = 0; perf.cpu = 0; perf.worst = 0; perf.presents0 = glh.stats.presents;
    }
    requestAnimationFrame(frame);
  }
  if (TEST) {
    window.sims3Test = {
      step(n, drawLast = true) {
        for (let i = 0; i < n && !dead; i++) {
          vclock += 1000 / 60;
          glh.stats.skipDraws = !(drawLast && i === n - 1);
          try { exp.sims3_frame(vclock); } catch (e) { if (!dead) fatal(String(e && e.stack || e)); }
        }
        glh.stats.skipDraws = false;
        return dead ? 'dead' : 'ok';
      },
      frame: () => Math.round(vclock * 60 / 1000),
    };
    return;
  }
  requestAnimationFrame(frame);
}
main().catch((e) => fatal(String(e && e.stack || e)));

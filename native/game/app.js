/* Browser driver for the recompiled game: loading, the frame loop, input,
 * audio and persistent storage.  The game code itself runs as WebAssembly
 * compiled ahead of time from the original executable (sims3-game.wasm). */
(function () {
'use strict';
const $ = id => document.getElementById(id);
const WEB = '../../web/';
const state = { game: null, gl: null, running: false, paused: false, frames: 0, lastStats: 0, frameTimes: [], loadedBytes: 0, error: null };
const params = new URLSearchParams(location.search);

function setStatus(text, cls) { const s = $('status'); s.textContent = text; s.className = 'status' + (cls ? ' ' + cls : ''); }
function log(text) {
  const el = $('log');
  el.textContent = (el.textContent + '\n' + text).split('\n').slice(-200).join('\n');
  if (params.has('debug')) console.log(text);
}

async function fetchBytes(url) {
  const r = await fetch(url, { cache: 'force-cache' });
  if (!r.ok) throw Error('Could not load ' + url + ' (HTTP ' + r.status + ')');
  return new Uint8Array(await r.arrayBuffer());
}
async function sha256(bytes) {
  const d = await crypto.subtle.digest('SHA-256', bytes);
  return Array.from(new Uint8Array(d), b => b.toString(16).padStart(2, '0')).join('');
}

// ------------------------------------------------------------- assets
let manifest;
const assetCache = new Map(), assetPending = new Map();
async function fetchAsset(name) {
  if (assetCache.has(name)) return assetCache.get(name);
  if (assetPending.has(name)) return assetPending.get(name);
  const entry = manifest.webAssets[name];
  if (!entry) throw Error('Missing asset entry: ' + name);
  const p = (async () => {
    let out;
    if (entry.hd) {
      // High-resolution iPad art (zlib-compressed; see tools/build_hd_assets.py).
      out = fflate.unzlibSync(await fetchBytes(entry.hd));
      if (out.length !== entry.size) throw Error('Incomplete game resource ' + name);
    } else {
      const chunks = await Promise.all(entry.parts.map(part => fetchBytes(WEB + part)));
      out = new Uint8Array(entry.size);
      let pos = 0; for (const c of chunks) { out.set(c, pos); pos += c.length; }
      if (pos !== entry.size) throw Error('Incomplete game resource ' + name);
    }
    if (crypto.subtle && (await sha256(out)) !== entry.sha256) throw Error('Game resource checksum failed: ' + name);
    state.loadedBytes += out.length;
    assetCache.set(name, out);
    assetPending.delete(name);
    return out;
  })();
  assetPending.set(name, p);
  return p;
}

// Large archives the game opens but reads only small parts of (res.dz) are
// fetched in verified 64 KiB chunks with HTTP range requests.
const partCache = new Map();
async function fetchRange(url, start, end) {
  if (partCache.has(url)) return (await partCache.get(url)).subarray(start, end);
  const r = await fetch(url, { headers: { Range: `bytes=${start}-${end - 1}` } });
  if (!r.ok) throw Error('Could not load ' + url + ' (HTTP ' + r.status + ')');
  const bytes = new Uint8Array(await r.arrayBuffer());
  if (r.status === 206 && bytes.length === end - start) return bytes;
  // The server ignored the range: keep the whole part for later reads.
  partCache.set(url, Promise.resolve(bytes));
  return bytes.subarray(start, end);
}
function makeRanged(info) {
  const r = { size: info.size, chunkSize: info.chunkSize, chunks: new Map(), pending: new Map() };
  r.fetch = i => {
    if (r.chunks.has(i)) return Promise.resolve();
    if (r.pending.has(i)) return r.pending.get(i);
    const start = i * r.chunkSize, end = Math.min(r.size, start + r.chunkSize);
    const p = (async () => {
      const pieces = [];
      let off = 0;
      for (const part of info.parts) {
        const ps = off, pe = off + part.size;
        if (pe > start && ps < end) pieces.push(fetchRange(WEB + part.url, Math.max(start, ps) - ps, Math.min(end, pe) - ps));
        off = pe;
      }
      const bufs = await Promise.all(pieces);
      const out = new Uint8Array(end - start);
      let o = 0; for (const b of bufs) { out.set(b, o); o += b.length; }
      if (crypto.subtle && (await sha256(out)) !== info.sha256[i]) throw Error('Game archive chunk checksum failed');
      state.loadedBytes += out.length;
      r.chunks.set(i, out);
      r.pending.delete(i);
    })();
    r.pending.set(i, p);
    return p;
  };
  return r;
}

// ------------------------------------------------------- iPad art overlay
// The iOS/iPad release ships the same 2D interface as the Android release in
// 2x and 4x resolutions, in the same file formats.  When enabled, those files
// replace the Android originals under the same names.  ?ui=1 keeps the
// original Android art; ?ui=2 / ?ui=4 force a set.
function hdScale() {
  const q = params.get('ui');
  if (q === '1' || q === '2' || q === '4') return Number(q);
  const touch = navigator.maxTouchPoints > 1 || /Android|iPhone|iPad|Mobile/i.test(navigator.userAgent);
  const px = Math.max(screen.width, screen.height) * (devicePixelRatio || 1);
  return !touch && px >= 1900 ? 4 : 2;     // the 4x set needs more memory
}
async function applyHdArt(man) {
  const scale = hdScale();
  if (scale < 2) return 1;
  const base = `hd/${scale}x/`;
  const index = await fetch(base + 'index.json', { cache: 'no-cache' }).then(r => r.ok ? r.json() : null).catch(() => null);
  if (!index || index.format !== 'sims3-hd-overlay-v1') return 1;
  for (const [name, a] of Object.entries(index.assets)) {
    if (!man.webAssets[name]) continue;
    man.webAssets[name] = { size: a.size, sha256: a.sha256, hd: base + a.file };
    if (man.assets && man.assets[name]) man.assets[name] = [man.assets[name][0], a.size];
  }
  return scale;
}

// ------------------------------------------------------------- saves
const DB = 'sims3-native';
function openDB() {
  return new Promise((resolve, reject) => {
    const req = indexedDB.open(DB, 1);
    req.onupgradeneeded = () => req.result.createObjectStore('files');
    req.onsuccess = () => resolve(req.result);
    req.onerror = () => reject(req.error);
  });
}
async function loadSaves() {
  const db = await openDB();
  return new Promise((resolve, reject) => {
    const tx = db.transaction('files'), store = tx.objectStore('files'), out = [];
    const req = store.openCursor();
    req.onsuccess = () => { const c = req.result; if (c) { out.push([c.key, new Uint8Array(c.value)]); c.continue(); } else { db.close(); resolve(out); } };
    req.onerror = () => reject(req.error);
  });
}
let saveQueue = new Map(), saveTimer = null, saving = false;
function queueSave(name, bytes) {
  saveQueue.set(name, bytes.slice());
  clearTimeout(saveTimer);
  saveTimer = setTimeout(flushSaves, 250);
}
async function flushSaves() {
  if (saving || !saveQueue.size) return;
  saving = true;
  const batch = saveQueue; saveQueue = new Map();
  try {
    const db = await openDB();
    await new Promise((resolve, reject) => {
      const tx = db.transaction('files', 'readwrite');
      for (const [name, bytes] of batch) tx.objectStore('files').put(bytes, name);
      tx.oncomplete = resolve; tx.onerror = () => reject(tx.error); tx.onabort = () => reject(tx.error);
    });
    db.close();
    $('save-status').textContent = 'Saved ' + new Date().toLocaleTimeString() + ' (' + [...batch.keys()].join(', ') + ')';
  } catch (e) {
    $('save-status').textContent = 'Saving failed: ' + e.message;
    for (const [k, v] of batch) if (!saveQueue.has(k)) saveQueue.set(k, v);
  } finally { saving = false; }
}

// ------------------------------------------------------------- audio
let audio = null;
function ensureAudio() {
  if (audio) return audio;
  const AC = window.AudioContext || window.webkitAudioContext;
  if (!AC) return null;
  audio = new SimsAudio(new AC(), { log, fetchAsset });
  return audio;
}

// ------------------------------------------------------------- text entry
// Implements the s3eOSReadString extension (the phone's text-entry dialog).
function readString(prompt, initial) {
  return new Promise(resolve => {
    const dlg = $('ask'), input = $('ask-input');
    $('ask-label').textContent = prompt || 'Enter text';
    input.value = initial || '';
    state.dialogOpen = true;
    const done = () => { state.dialogOpen = false; dlg.removeEventListener('close', done); resolve(dlg.returnValue === 'ok' ? input.value : null); };
    dlg.addEventListener('close', done);
    input.onkeydown = e => { if (e.key === 'Enter') { e.preventDefault(); dlg.close('ok'); } };
    dlg.returnValue = '';
    dlg.showModal();
    input.focus(); input.select();
  });
}

// ------------------------------------------------------------- input
function canvasPoint(ev) {
  const c = $('game'), rect = c.getBoundingClientRect();
  const gl = state.gl;
  const pr = gl.presentRectPx || { x: 0, y: 0, w: c.width, h: c.height };
  const sx = c.width / rect.width, sy = c.height / rect.height;
  const px = (ev.clientX - rect.left) * sx, py = (ev.clientY - rect.top) * sy;
  const x = (px - pr.x) / pr.w * gl.width, y = (py - pr.y) / pr.h * gl.height;
  return { x: Math.max(0, Math.min(gl.width - 1, x)), y: Math.max(0, Math.min(gl.height - 1, y)) };
}
let pointerDown = false;
function bindInput() {
  const c = $('game');
  c.addEventListener('pointerdown', e => {
    if (!state.game) return;
    e.preventDefault(); c.setPointerCapture(e.pointerId); pointerDown = true;
    ensureAudio()?.resume();
    const p = canvasPoint(e); state.game.pointerEvent(p.x, p.y, true);
  });
  const up = e => { if (!state.game || !pointerDown) return; e.preventDefault(); pointerDown = false; const p = canvasPoint(e); state.game.pointerEvent(p.x, p.y, false); };
  c.addEventListener('pointerup', up); c.addEventListener('pointercancel', up);
  c.addEventListener('pointermove', e => { if (!state.game) return; const p = canvasPoint(e); state.game.pointerMotion(p.x, p.y, pointerDown); });
  c.addEventListener('contextmenu', e => e.preventDefault());
  window.addEventListener('blur', () => { if (pointerDown && state.game) { pointerDown = false; state.game.pointerEvent(state.game.pointer.x, state.game.pointer.y, false); } state.game?.releaseKeys(); });
  const tiltKeys = new Set();
  const updateTilt = () => state.game?.setTilt((tiltKeys.has('KeyD') ? 1 : 0) - (tiltKeys.has('KeyA') ? 1 : 0));
  window.addEventListener('keydown', e => {
    if (!state.game || state.dialogOpen) return;
    if (e.code === 'KeyS' && !e.repeat) { shake(); e.preventDefault(); return; }
    if (e.code === 'KeyA' || e.code === 'KeyD') { tiltKeys.add(e.code); updateTilt(); e.preventDefault(); return; }
    if (e.repeat) return;
    if (state.game.keyEvent(e.code, true)) e.preventDefault();
  });
  window.addEventListener('keyup', e => {
    if (!state.game || state.dialogOpen) return;
    if (e.code === 'KeyA' || e.code === 'KeyD') { tiltKeys.delete(e.code); updateTilt(); return; }
    if (state.game.keyEvent(e.code, false)) e.preventDefault();
  });
  window.addEventListener('blur', () => { tiltKeys.clear(); updateTilt(); });
  $('plumbob').addEventListener('click', shake);
  document.addEventListener('visibilitychange', () => {
    if (!state.game) return;
    if (document.hidden) { state.game.suspendEvent(); audio?.suspend(); flushSaves(); }
    else { state.game.resumeEvent(); if (!state.paused) audio?.resume(); }
  });
  window.addEventListener('pagehide', flushSaves);
}

// ------------------------------------------------------------- motion
function shake() {
  if (!state.game) return;
  state.game.shake();
  const b = $('plumbob'); b.classList.remove('shaking'); void b.offsetWidth; b.classList.add('shaking');
}
// Real accelerometer on phones and tablets (DeviceMotion, in m/s^2) mapped to
// s3eAccelerometer milli-g.  iOS reports the opposite sign convention.
let motionStarted = false;
function startMotion() {
  if (motionStarted || typeof DeviceMotionEvent === 'undefined') return;
  const go = () => {
    motionStarted = true;
    const ios = /iPad|iPhone|iPod/.test(navigator.userAgent) || (navigator.platform === 'MacIntel' && navigator.maxTouchPoints > 1);
    const k = (ios ? -1 : 1) * 1000 / 9.80665;
    window.addEventListener('devicemotion', e => {
      const a = e.accelerationIncludingGravity;
      if (!state.game || !a || a.x === null) return;
      state.game.setMotion(a.x * k, a.y * k, a.z * k);
    });
  };
  if (typeof DeviceMotionEvent.requestPermission === 'function') DeviceMotionEvent.requestPermission().then(r => { if (r === 'granted') go(); }).catch(() => {});
  else go();
}

// ------------------------------------------------------------- sizing
function resize() {
  const c = $('game');
  const rect = c.getBoundingClientRect();
  const dpr = Math.min(window.devicePixelRatio || 1, 3);
  const w = Math.max(1, Math.round(rect.width * dpr)), h = Math.max(1, Math.round(rect.height * dpr));
  if (c.width !== w || c.height !== h) { c.width = w; c.height = h; }
}

// ------------------------------------------------------------- loop
function tick(now) {
  if (!state.running) return;
  requestAnimationFrame(tick);
  if (state.paused || state.waiting || document.hidden) return;
  resize();
  const start = performance.now();
  try {
    for (;;) {
      const s = state.game.runSlice();
      if (!s) { state.running = false; setStatus('The game has closed. Reload the page to start again.'); return; }
      if (s.reason === 'frame') break;
      if (s.reason === 'input') {
        state.waiting = true;
        s.promise.then(() => { state.waiting = false; }, err => fail(err));
        break;
      }
      if (s.reason === 'asset') {
        state.waiting = true;
        setStatus('Loading game data… ' + (state.loadedBytes / 1048576).toFixed(1) + ' MB');
        s.promise.then(() => { state.waiting = false; }, err => fail(err));
        break;
      }
      if (performance.now() - start > 40) break;      // keep the page responsive during long loads
    }
  } catch (err) { fail(err); return; }
  const t = performance.now();
  state.frameTimes.push(t - start);
  if (t - state.lastStats > 1000) {
    const ft = state.frameTimes.sort((a, b) => a - b);
    const fps = state.gl.framesPresented - (state.lastFrames || 0);
    state.lastFrames = state.gl.framesPresented;
    if (!state.waiting) setStatus(`Running · ${fps} FPS · CPU ${ft[Math.floor(ft.length / 2)]?.toFixed(1) ?? '-'} ms/frame (p95 ${ft[Math.floor(ft.length * 0.95)]?.toFixed(1) ?? '-'} ms)`, 'running');
    state.frameTimes = []; state.lastStats = t;
    window.__simsStats = { fps, draws: state.gl.draws, frames: state.gl.framesPresented, heap: state.game.nextAllocation - 0x4a400000, loadedMB: state.loadedBytes / 1048576 };
  }
}
function fail(err) {
  state.running = false;
  state.error = err;
  console.error(err);
  setStatus('The game stopped: ' + (err && err.message || err), 'error');
  log(err && err.stack || String(err));
}

// ------------------------------------------------------------- boot
async function boot() {
  $('start').disabled = true;
  startMotion();          // needs the Play click as a user gesture on iOS
  try {
    setStatus('Loading the recompiled game…');
    ensureAudio();
    const canvas = $('game');
    resize();
    const [man, analysis, rangedInfo, wasm, exe] = await Promise.all([
      fetch(WEB + 'manifest.json').then(r => r.json()),
      fetch('imports.json').then(r => r.json()),
      fetch('ranged.json').then(r => r.ok ? r.json() : {}).catch(() => ({})),
      fetchBytes('sims3-game.wasm'),
      fetchBytes(WEB + 'game.s3e'),
    ]);
    manifest = man;
    state.uiArt = await applyHdArt(man);
    if (state.uiArt > 1) log(`Using the iPad release's ${state.uiArt}x interface art.`);
    const [s3eIcf, appIcf] = await Promise.all([fetchAsset('s3e.icf'), fetchAsset('app.icf')]);
    const gl = new GLES1(canvas, { width: 480, height: 320, scale: Number(params.get('scale')) || 0, log, onContextLost: () => fail(Error('The graphics context was lost. Reload the page to continue.')) });
    state.gl = gl;
    const saves = await loadSaves().catch(() => []);
    if (saves.length) $('save-status').textContent = saves.length + ' saved file(s) in this browser.';
    const game = new NativeGame({
      manifest, importNames: analysis.names, importAddress: analysis.address,
      loadedAssets: [['s3e.icf', s3eIcf], ['app.icf', appIcf]],
      saves, save: (name, bytes) => queueSave(name, bytes),
      fetchAsset, graphics: gl, audio: ensureAudio(), log, readString,
      ranged: Object.fromEntries(Object.entries(rangedInfo).map(([name, info]) => [name, makeRanged(info)])),
    });
    await game.init(wasm, exe);
    state.game = game;
    window.__sims = state;
    $('cover').hidden = true;
    $('pause').disabled = false;
    state.running = true;
    setStatus('Starting…');
    requestAnimationFrame(tick);
  } catch (err) { fail(err); $('start').disabled = false; }
}

function init() {
  bindInput();
  $('start').addEventListener('click', boot);
  $('pause').addEventListener('click', () => {
    state.paused = !state.paused;
    $('pause').textContent = state.paused ? 'Resume' : 'Pause';
    if (state.paused) { audio?.suspend(); state.game?.suspendEvent(); setStatus('Paused.'); }
    else { audio?.resume(); state.game?.resumeEvent(); }
  });
  $('fullscreen').addEventListener('click', () => {
    if (document.fullscreenElement) document.exitFullscreen();
    else $('stage').requestFullscreen?.().catch(e => log(e.message));
  });
  $('sound').addEventListener('click', () => {
    const a = ensureAudio(); if (!a) return;
    a.setMuted(!a.muted);
    $('sound').textContent = a.muted ? 'Sound off' : 'Sound on';
    $('sound').setAttribute('aria-pressed', String(!a.muted));
  });
  $('export').addEventListener('click', async () => {
    await flushSaves();
    const saves = await loadSaves();
    const value = { format: 'sims3-native-saves-v1', saves: saves.map(([n, b]) => [n, btoa(String.fromCharCode(...b))]) };
    const url = URL.createObjectURL(new Blob([JSON.stringify(value)], { type: 'application/json' }));
    const a = document.createElement('a'); a.href = url; a.download = 'sims3-saves.json'; a.click();
    setTimeout(() => URL.revokeObjectURL(url), 2000);
  });
  $('import').addEventListener('change', async e => {
    try {
      const file = e.target.files[0]; if (!file) return;
      if (state.running) throw Error('Reload the page and import saves before starting the game.');
      const value = JSON.parse(await file.text());
      if (value.format !== 'sims3-native-saves-v1' || !Array.isArray(value.saves)) throw Error('This is not a saves file from this page.');
      if (!confirm('Replace the saves stored in this browser with the imported file?')) return;
      const db = await openDB();
      await new Promise((resolve, reject) => {
        const tx = db.transaction('files', 'readwrite'), st = tx.objectStore('files');
        st.clear();
        for (const [n, b64] of value.saves) { if (typeof n !== 'string') throw Error('Invalid save entry'); st.put(Uint8Array.from(atob(b64), c => c.charCodeAt(0)), n); }
        tx.oncomplete = resolve; tx.onerror = () => reject(tx.error);
      });
      db.close();
      $('save-status').textContent = 'Imported ' + value.saves.length + ' file(s).';
    } catch (err) { $('save-status').textContent = err.message; }
  });
  window.addEventListener('resize', resize);
  if (params.has('autostart')) boot();
}
init();
})();

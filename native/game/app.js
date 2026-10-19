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
    const chunks = await Promise.all(entry.parts.map(part => fetchBytes(WEB + part)));
    const out = new Uint8Array(entry.size);
    let pos = 0; for (const c of chunks) { out.set(c, pos); pos += c.length; }
    if (pos !== entry.size) throw Error('Incomplete game resource ' + name);
    if (crypto.subtle && (await sha256(out)) !== entry.sha256) throw Error('Game resource checksum failed: ' + name);
    state.loadedBytes += out.length;
    assetCache.set(name, out);
    assetPending.delete(name);
    return out;
  })();
  assetPending.set(name, p);
  return p;
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
  window.addEventListener('keydown', e => { if (!state.game || e.repeat) return; if (state.game.keyEvent(e.code, true)) e.preventDefault(); });
  window.addEventListener('keyup', e => { if (!state.game) return; if (state.game.keyEvent(e.code, false)) e.preventDefault(); });
  document.addEventListener('visibilitychange', () => {
    if (!state.game) return;
    if (document.hidden) { state.game.suspendEvent(); audio?.suspend(); flushSaves(); }
    else { state.game.resumeEvent(); if (!state.paused) audio?.resume(); }
  });
  window.addEventListener('pagehide', flushSaves);
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
  try {
    setStatus('Loading the recompiled game…');
    ensureAudio();
    const canvas = $('game');
    resize();
    const [man, analysis, wasm, exe] = await Promise.all([
      fetch(WEB + 'manifest.json').then(r => r.json()),
      fetch('imports.json').then(r => r.json()),
      fetchBytes('sims3-game.wasm'),
      fetchBytes(WEB + 'game.s3e'),
    ]);
    manifest = man;
    const [s3eIcf, appIcf] = await Promise.all([fetchAsset('s3e.icf'), fetchAsset('app.icf')]);
    const gl = new GLES1(canvas, { width: 480, height: 320, log, onContextLost: () => fail(Error('The graphics context was lost. Reload the page to continue.')) });
    state.gl = gl;
    const saves = await loadSaves().catch(() => []);
    if (saves.length) $('save-status').textContent = saves.length + ' saved file(s) in this browser.';
    const game = new NativeGame({
      manifest, importNames: analysis.names, importAddress: analysis.address,
      loadedAssets: [['s3e.icf', s3eIcf], ['app.icf', appIcf]],
      saves, save: (name, bytes) => queueSave(name, bytes),
      fetchAsset, graphics: gl, audio: ensureAudio(), log,
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

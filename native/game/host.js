/* Browser/Node host for the statically recompiled Sims 3 executable.
 *
 * The game's original ARM code has been translated ahead of time to C and
 * compiled to WebAssembly (sims3-game.wasm).  This file supplies the Marmalade
 * (s3e) platform services that the original Android host provided: memory,
 * files, configuration, timers, input, audio and OpenGL ES.  It does not
 * contain or run an instruction interpreter.
 */
(function (root) {
'use strict';

const GUEST_BASE = 0x4a000000;
const STACK_BASE = 0x4a200000, STACK_TOP = 0x4a400000;
const HEAP_BASE = 0x4a400000;
const SENTINEL = 0x0d000000;
const PAGE = 65536;

class Suspend {
  constructor(reason, promise, retry) { this.reason = reason; this.promise = promise; this.retry = retry; }
}
class PendingAsset extends Error { constructor(name) { super('Loading game data'); this.assetName = name; } }

const compression = root.fflate || (typeof require === 'function' ? require('../../web/vendor/fflate.js') : null);
const latin1 = new TextDecoder('windows-1252');

class NativeGame {
  constructor(options) {
    this.opts = options;
    this.log = options.log || (() => {});
    this.manifest = options.manifest;
    this.h = this.manifest.header;
    this.assets = this.manifest.assets || {};
    this.webAssets = this.manifest.webAssets || {};
    this.loadedAssets = new Map(options.loadedAssets || []);
    this.fetchAsset = options.fetchAsset || null;     // async name -> Uint8Array
    this.saved = new Map(options.saves || []);
    this.onSave = options.save || (() => {});
    this.onAudio = options.audio || (() => {});
    this.graphics = options.graphics || null;
    this.clock = options.clock || (() => (typeof performance !== 'undefined' ? performance.now() : Date.now()));
    this.deterministic = !!options.deterministic;
    this.counts = Object.create(null);
    this.files = new Map(); this.nextFile = 1;
    this.allocations = new Map(); this.freeBins = new Map(); this.nextAllocation = HEAP_BASE;
    this.config = {}; this.callbacks = {}; this.timerEvents = []; this.pendingCallbacks = [];
    this.virtualTime = 0; this.frames = 0; this.quit = false; this.strings = new Map();
    this.pointer = { x: 240, y: 160, down: 0 };
    this.keysDown = new Set();
    this.audio = options.audio || null;
    this.sliceStart = 0;
    this.trace = options.trace || null;
    this.started = this.clock();
    this.nesting = 0;
    this.suspended = null;
    this.instructionsBudget = 0;
  }

  async init(wasmBytes, executable) {
    const imports = { env: {
      host_call: slot => this.hostCall(slot),
      rt_trap: addr => { throw this.fault('Recompiled code reached an unrecovered address', addr); },
      rt_undefined: addr => { throw this.fault('Undefined instruction', addr); },
      rt_swi: (addr, imm) => { throw this.fault('Unexpected SWI 0x' + imm.toString(16), addr); },
      rt_bad_rewind: fn => { throw this.fault('Resume record mismatch in function', fn); },
      rt_missing: target => { throw this.fault('No recompiled code for indirect target', target); },
      rt_trace: k => { if (this.traceHook) this.traceHook(k); },
    } };
    const { instance } = await WebAssembly.instantiate(wasmBytes, imports);
    this.instance = instance;
    this.x = instance.exports;
    this.memory = instance.exports.memory;
    this.cpuAddr = this.x.cpu();
    this.linear = this.x.guest_linear();
    this.views();
    // Map the original image at its original address; BSS is zero.
    const h = this.h;
    const code = executable.subarray(h.codeOffset, h.codeOffset + h.codeFileSize);
    this.ensure(GUEST_BASE + h.codeMemSize);
    this.u8.set(code, this.lin(GUEST_BASE));
    this.importNames = this.opts.importNames;
    this.importAddress = this.opts.importAddress || {};
    this.ensure(STACK_TOP);
    this.setReg(13, STACK_TOP - 16);
    this.setReg(10, STACK_BASE + 0x100);
    this.setReg(14, SENTINEL);
    this.parseConfig('s3e.icf'); this.parseConfig('app.icf');
    this.entry = GUEST_BASE + h.entryOffset;
    this.log('Mapped recompiled game; ' + this.importNames.length + ' host service slots.');
  }

  fault(message, addr) {
    const e = new Error(message + ' at 0x' + (addr >>> 0).toString(16) + ' (LR=0x' + this.reg(14).toString(16) + ', SP=0x' + this.reg(13).toString(16) + ')');
    e.guestAddress = addr >>> 0;
    return e;
  }

  // ------------------------------------------------------------ memory
  views() {
    const buf = this.memory.buffer;
    if (this.buffer === buf) return;
    this.buffer = buf;
    this.u8 = new Uint8Array(buf);
    this.dv = new DataView(buf);
    this.cpu32 = new Uint32Array(buf, this.cpuAddr, 32);
  }
  lin(a) { return (a >>> 0) - GUEST_BASE + this.linear; }
  ensure(guestEnd) {
    const need = this.lin(guestEnd);
    const have = this.memory.buffer.byteLength;
    if (need > have) {
      this.memory.grow(Math.ceil((need - have) / PAGE));
      this.views();
    }
  }
  reg(i) { this.views(); return this.cpu32[i] >>> 0; }
  setReg(i, v) { this.views(); this.cpu32[i] = v >>> 0; }
  r(i) { return this.reg(i); }
  w(i, v) { this.setReg(i, v); }
  read(p, n) { this.views(); if (!n) return new Uint8Array(); const o = this.lin(p); this.check(o, n); return this.u8.slice(o, o + n); }
  view(p, n) { this.views(); const o = this.lin(p); this.check(o, n); return this.u8.subarray(o, o + n); }
  write(p, b) { this.views(); if (!b.length) return; const o = this.lin(p); this.check(o, b.length); this.u8.set(b, o); }
  check(o, n) { if (o < this.linear || o + n > this.u8.length) throw Error('Guest memory access outside the mapped game at linear 0x' + o.toString(16)); }
  u32(p) { this.views(); const o = this.lin(p); this.check(o, 4); return this.dv.getUint32(o, true); }
  put32(p, v) { this.views(); const o = this.lin(p); this.check(o, 4); this.dv.setUint32(o, v >>> 0, true); }
  str(p, max = 4096) {
    if (!p) return '';
    this.views();
    const o = this.lin(p);
    let end = o;
    while (end < o + max && this.u8[end]) end++;
    return latin1.decode(this.u8.subarray(o, end));
  }
  arg(i) { return i < 4 ? this.reg(i) : this.u32(this.reg(13) + (i - 4) * 4); }
  alloc(n) {
    n = Math.max(n, 1);
    const size = 2 ** Math.ceil(Math.log2(Math.max(16, n)));
    const bin = this.freeBins.get(size);
    if (bin && bin.length) { const p = bin.pop(); this.allocations.set(p, size); return p; }
    const p = this.nextAllocation;
    this.nextAllocation = p + size;
    this.ensure(this.nextAllocation);
    this.allocations.set(p, size);
    return p;
  }
  free(p) {
    const size = this.allocations.get(p); if (!size) return;
    this.allocations.delete(p);
    if (!this.freeBins.has(size)) this.freeBins.set(size, []);
    this.freeBins.get(size).push(p);
  }
  string(s) {
    if (this.strings.has(s)) return this.strings.get(s);
    const b = new TextEncoder().encode(s + '\0'), p = this.alloc(b.length);
    this.write(p, b); this.strings.set(s, p); return p;
  }

  // ------------------------------------------------------------- files
  normalized(name) { return name.replace(/\\/g, '/').replace(/^(?:rom:|assets\/)/i, '').replace(/^\/+/, '').toLowerCase(); }
  asset(name) {
    name = this.normalized(name);
    if (this.saved.has(name)) return this.saved.get(name);
    if (this.loadedAssets.has(name)) return this.loadedAssets.get(name);
    if (this.webAssets[name]) {
      if (this.opts.loadAssetSync) { const b = this.opts.loadAssetSync(name); this.loadedAssets.set(name, b); return b; }
      throw new PendingAsset(name);
    }
    return null;
  }
  parseConfig(name) {
    const raw = this.asset(name); if (!raw) return;
    let section = '', active = true;
    for (let line of latin1.decode(raw).split(/\r?\n/)) {
      line = line.split('#')[0].trim();
      if (line[0] === '{') { active = line === '{}' || /OS=ANDROID/.test(line); continue; }
      const h = line.match(/^\[([^\]]+)\]/); if (h) { section = h[1].toLowerCase(); continue; }
      const m = line.match(/^([^=]+)=(.*)$/);
      if (active && m) this.config[section + '.' + m[1].trim().toLowerCase()] = m[2].trim().replace(/^"|"$/g, '');
    }
  }
  fileOpen(name, mode) {
    const norm = this.normalized(name); let bytes = this.asset(name);
    if (mode.includes('w')) bytes = new Uint8Array();
    if (bytes === null && mode.includes('a')) bytes = new Uint8Array();
    if (bytes === null) { this.log('Missing file: ' + name); return 0; }
    const id = this.nextFile++;
    this.files.set(id, { name: norm, bytes, pos: mode.includes('a') ? bytes.length : 0, eof: false, write: /[wa+]/.test(mode) });
    return id;
  }

  // ---------------------------------------------------------- execution
  hostCall(slot) {
    const cpu = this.cpu32;
    this.views();
    if (this.cpu32[22]) {               // rewinding: this is the suspended call resuming
      this.cpu32[22] = 0;
      const s = this.suspended; this.suspended = null;
      if (!s) throw Error('Resumed without a suspended host call');
      if (s.retry) return this.hostCall(slot);
      this.applyResult(s.result);
      return;
    }
    const name = this.importNames[slot];
    this.counts[name] = (this.counts[name] || 0) + 1;
    const a = [this.reg(0), this.reg(1), this.reg(2), this.reg(3)];
    if (this.trace) this.trace(name, a, this);
    let ret;
    try {
      ret = this.service(name, a);
    } catch (e) {
      if (e instanceof PendingAsset) {
        if (this.nesting) throw Error('Asset ' + e.assetName + ' requested inside a host callback before it was loaded');
        this.suspend(new Suspend('asset', this.fetchAsset(e.assetName).then(b => this.loadedAssets.set(e.assetName, b)), true));
        return;
      }
      if (e instanceof Suspend) { this.suspend(e); return; }
      throw e;
    }
    this.applyResult(ret);
  }
  applyResult(ret) {
    if (Array.isArray(ret)) { this.setReg(0, ret[0]); this.setReg(1, ret[1]); }
    else if (ret !== undefined) this.setReg(0, ret);
  }
  suspend(s) {
    if (this.nesting) throw Error('Guest suspension requested inside a host callback (' + s.reason + ')');
    this.suspended = s;
    this.cpu32[21] = 1; // unwinding
  }
  /* Run the game until it suspends (frame/asset) or quits. Returns the
   * suspension record or null when the game exits. */
  runSlice() {
    this.views();
    if (this.quit) return null;
    this.sliceStart = this.clock();
    if (!this.running) {
      this.running = true;
      this.setReg(14, SENTINEL);
      this.x.run(this.entry, SENTINEL);
    } else {
      if (this.suspended && (this.suspended.reason === 'yield' || this.suspended.reason === 'frame')) this.deliverCallbacks();
      this.views();
      this.cpu32[21] = 0;      // clear unwinding
      this.cpu32[22] = 1;      // rewinding
      this.x.run(this.entry, SENTINEL);
    }
    this.views();
    if (this.cpu32[21]) return this.suspended;
    if (this.cpu32[20] !== SENTINEL) throw this.fault('Control reached an address with no recompiled function', this.cpu32[20]);
    this.quit = true;
    this.log('Original game entry returned.');
    return null;
  }
  /* Call a guest function synchronously from inside a host service. */
  callGuest(fn, args) {
    this.views();
    // Save registers, flags, pc and the suspension flags of the interrupted
    // (possibly suspended) guest call chain.
    const saved = Array.from(this.cpu32.subarray(0, 24));
    this.nesting++;
    try {
      this.cpu32[21] = 0; this.cpu32[22] = 0;
      args.forEach((v, i) => this.setReg(i, v));
      this.x.run(fn, SENTINEL);
      this.views();
      if (this.cpu32[21]) throw Error('Guest callback attempted to suspend');
      if (this.cpu32[23] !== saved[23]) throw Error('Guest callback changed the resume stack');
    } finally {
      this.nesting--;
      this.views();
      this.cpu32.set(saved, 0);
    }
  }
  deliverCallbacks() {
    const now = this.time();
    for (const ev of this.timerEvents) if (ev && ev.at <= now) { this.pendingCallbacks.push({ fn: ev.fn, args: [0, ev.data] }); ev.at = Infinity; }
    while (this.pendingCallbacks.length) {
      const cb = this.pendingCallbacks.shift();
      this.callGuest(cb.fn, cb.args);
      if (cb.free) this.free(cb.free);
    }
  }
  time() { return this.deterministic ? this.virtualTime : this.clock() - this.started + this.virtualTime; }

  pointerEvent(x, y, down) {
    this.pointer = { x: Math.round(x), y: Math.round(y), down: down ? 1 : 0 };
    this.pointerChanged = true;
    for (const id of [0, 2]) {          // S3E_POINTER_BUTTON_EVENT, S3E_POINTER_TOUCH_EVENT
      const cb = this.callbacks['pointer' + id];
      if (!cb) continue;
      const p = this.alloc(16);
      this.put32(p, 0); this.put32(p + 4, down ? 1 : 0); this.put32(p + 8, this.pointer.x); this.put32(p + 12, this.pointer.y);
      this.pendingCallbacks.push({ fn: cb.fn, args: [p, cb.data], free: p });
    }
  }
  pointerMotion(x, y) {
    x = Math.round(x); y = Math.round(y);
    if (x === this.pointer.x && y === this.pointer.y) return;
    this.pointer.x = x; this.pointer.y = y;
    // Coalesce motion: only the latest position matters before the next yield.
    this.pendingCallbacks = this.pendingCallbacks.filter(cb => !cb.motion || (cb.free && this.free(cb.free), false));
    const cb1 = this.callbacks.pointer1;
    if (cb1) { const p = this.alloc(8); this.put32(p, x); this.put32(p + 4, y); this.pendingCallbacks.push({ fn: cb1.fn, args: [p, cb1.data], free: p, motion: true }); }
    const cb3 = this.callbacks.pointer3;
    if (cb3) { const p = this.alloc(12); this.put32(p, 0); this.put32(p + 4, x); this.put32(p + 8, y); this.pendingCallbacks.push({ fn: cb3.fn, args: [p, cb3.data], free: p, motion: true }); }
  }
  /* Browser key code -> s3eKey.  Arrow keys and Back are what the game's
   * keyboard handler (0x4a036854) acts on. */
  keyEvent(code, down) {
    const map = { Escape: 126, Backspace: 126, BrowserBack: 126, ArrowLeft: 9, ArrowUp: 10, ArrowRight: 11, ArrowDown: 12, Enter: 4, Space: 8 };
    const key = map[code];
    if (key === undefined) return false;
    if (down) this.keysDown.add(key); else this.keysDown.delete(key);
    const cb = this.callbacks.keyboard0;
    if (cb) { const p = this.alloc(8); this.put32(p, key); this.put32(p + 4, down ? 1 : 0); this.pendingCallbacks.push({ fn: cb.fn, args: [p, cb.data], free: p }); }
    return true;
  }
  releaseKeys() { for (const k of [...this.keysDown]) { const code = { 126: 'Escape', 9: 'ArrowLeft', 10: 'ArrowUp', 11: 'ArrowRight', 12: 'ArrowDown', 4: 'Enter', 8: 'Space' }[k]; if (code) this.keyEvent(code, false); } }
  /* S3E_DEVICE_PAUSE (0) / S3E_DEVICE_UNPAUSE (1) device callbacks. */
  suspendEvent() { if (this.devicePaused) return; this.devicePaused = true; const cb = this.callbacks.device0; if (cb) this.pendingCallbacks.push({ fn: cb.fn, args: [0, cb.data] }); }
  resumeEvent() { if (!this.devicePaused) return; this.devicePaused = false; const cb = this.callbacks.device1; if (cb) this.pendingCallbacks.push({ fn: cb.fn, args: [0, cb.data] }); this.lastYieldReturn = this.clock(); }

  // ----------------------------------------------------------- services
  register(kind, id, fn, data) { if (fn) this.callbacks[kind + id] = { fn, data }; else delete this.callbacks[kind + id]; return 0; }
  service(name, a) {
    const [x, y, z, t] = a;
    const compat = !!this.opts.emulatorCompat;
    switch (name) {
    // -- memory
    case 's3eMallocBase': return this.alloc(x);
    case 's3eReallocBase': {
      if (!x) return this.alloc(y);
      const old = this.allocations.get(x) || 0;
      if (old >= y) return x;
      const p = this.alloc(y);
      this.write(p, this.read(x, Math.min(y, old)));
      this.free(x); return p;
    }
    case 's3eFreeBase': this.free(x); return 0;
    case 's3eMemorySetUserMemMgr': return 0;
    case 's3eMemoryHeapCreate': return 0;
    case 's3eMemoryGetInt': return 64 * 1024 * 1024;
    case 's3eMemorySetInt': return 0;
    // -- configuration and device
    case 's3eConfigGetInt':
    case 's3eConfigGetString': {
      const k = this.str(x).toLowerCase() + '.' + this.str(y).toLowerCase();
      const value = this.config[k];
      if (value === undefined) return 1;
      if (name.endsWith('Int')) { const v = Number(value); if (!Number.isFinite(v)) return 1; this.put32(z, v); }
      else this.write(z, new TextEncoder().encode(value + '\0'));
      return 0;
    }
    case 's3eDeviceGetInt': return x === 0 ? 0x12 : x === 10 ? 0x00080101 : 0;
    case 's3eDeviceGetString': return this.string(({ 0: 'Android', 2: 'Browser', 8: 'ARMv4T', 13: '4.1.2', 31: 'en', 20: 'en_US' })[x] || '');
    case 's3eDeviceCheckQuitRequest': return this.quitRequested ? 1 : 0;
    case 's3eDeviceRequestQuit': this.quitRequested = true; return 0;
    case 's3eDeviceExit': this.quit = true; throw new Suspend('exit', null, false);
    case 's3eDeviceRegister': return compat ? 0 : this.register('device', x, y, z);
    case 's3eDeviceUnRegister': return compat ? 0 : this.register('device', x, 0, 0);
    case 's3eDeviceYield':
    case 's3eDeviceYieldUntilEvent': {
      if (compat || this.deterministic) {
        this.virtualTime += Math.max(1, x | 0);
        const result = [this.time() >>> 0, 0];
        throw Object.assign(new Suspend('yield', null, false), { result, ms: x | 0 });
      }
      this.deliverCallbacks();
      // Return to the browser periodically during long loading loops.
      if (this.clock() - this.sliceStart > 50) throw Object.assign(new Suspend('yield', null, false), { result: [this.time() >>> 0, 0] });
      return [this.time() >>> 0, 0];
    }
    // -- timers
    case 's3eTimerGetMs': return [Math.floor(this.time()) >>> 0, 0];
    case 's3eTimerGetLocaltimeOffset': return compat ? [0, 0] : (() => { const ms = -new Date().getTimezoneOffset() * 60000; return [ms >>> 0, ms < 0 ? 0xffffffff : 0]; })();
    case 's3eTimerSetTimer': this.timerEvents.push({ at: this.time() + x, fn: y, data: z }); return 0;
    // -- files
    case 's3eFileOpen': return this.fileOpen(this.str(x), this.str(y));
    case 's3eFileOpenFromMemory': { const id = this.nextFile++; this.files.set(id, { name: 'memory', bytes: this.read(x, y), pos: 0, eof: false }); return id; }
    case 's3eFileClose': {
      const f = this.files.get(x);
      if (f && f.write) { this.saved.set(f.name, f.bytes); this.onSave(f.name, f.bytes, this.saved); }
      this.files.delete(x); return f ? 0 : 1;
    }
    case 's3eFileRead': {
      const f = this.files.get(t); if (!f || !y) return 0;
      const n = Math.min(y * z, Math.max(0, f.bytes.length - f.pos)); const full = Math.floor(n / y);
      this.write(x, f.bytes.subarray(f.pos, f.pos + full * y)); f.pos += full * y; f.eof = full < z; return full;
    }
    case 's3eFileWrite': {
      const f = this.files.get(t); if (!f || !f.write) return 0;
      const n = y * z;
      if (f.pos + n > f.bytes.length) { const b = new Uint8Array(Math.max(f.pos + n, f.bytes.length * 2)); b.set(f.bytes); f.capacity = b; }
      const out = new Uint8Array(Math.max(f.bytes.length, f.pos + n)); out.set(f.bytes); out.set(this.read(x, n), f.pos);
      f.bytes = out; f.pos += n; return z;
    }
    case 's3eFileSeek': { const f = this.files.get(x); if (!f) return 1; const p = (z === 0 ? 0 : z === 1 ? f.pos : f.bytes.length) + (y | 0); if (p < 0) return 1; f.pos = p; f.eof = false; return 0; }
    case 's3eFileTell': { const f = this.files.get(x); return f ? f.pos : -1; }
    case 's3eFileGetSize': { const f = this.files.get(x); return f ? f.bytes.length : -1; }
    case 's3eFileEOF': { const f = this.files.get(x); return f && f.eof ? 1 : 0; }
    case 's3eFileGetChar': { const f = this.files.get(x); if (!f || f.pos >= f.bytes.length) { if (f) f.eof = true; return -1; } return f.bytes[f.pos++]; }
    case 's3eFileCheckExists': { const n = this.normalized(this.str(x)); return this.saved.has(n) || !!this.assets[n] || !!this.webAssets[n] ? 1 : 0; }
    case 's3eFileGetFileInt': {
      const n = this.normalized(this.str(x));
      const size = this.saved.has(n) ? this.saved.get(n).length : this.assets[n] ? this.assets[n][1] : this.webAssets[n] ? this.webAssets[n].size : 0;
      return [y === 4 ? size : 0, 0];
    }
    case 's3eFileGetError': return 2;
    case 's3eFileMakeDirectory':
    case 's3eFileAddUserFileSys': return 0;
    // -- display
    case 's3eSurfaceGetInt': return ({ 0: 480, 1: 320, 2: 480 * 4, 3: 4, 4: 480, 5: 320 })[x] || 0;
    case 's3eGLGetInt': return ({ 0: 480, 1: 320, 2: 2 })[x] || 0;
    case 's3eSurfacePtr': if (!this.surface) this.surface = this.alloc(480 * 320 * 4); return this.surface;
    case 's3eGLGetNativeWindow': if (!this.windowPtr) { this.windowPtr = this.alloc(8); this.put32(this.windowPtr, 480 | (320 << 16)); } return this.windowPtr;
    case 's3eSurfaceRegister': case 's3eSurfaceUnRegister': case 's3eSurfaceSetup': case 's3eSurfaceShow':
    case 's3eGLRegister': case 's3eGLUnRegister': return 0;
    // -- input
    case 's3ePointerGetX': return this.pointer.x;
    case 's3ePointerGetY': return this.pointer.y;
    case 's3ePointerUpdate': return 0;
    case 's3ePointerRegister': return this.register('pointer', x, y, z);
    case 's3eKeyboardRegister': return compat ? 0 : this.register('keyboard', x, y, z);
    case 's3eKeyboardSetInt': return 0;
    case 's3eAccelerometerGetInt': return 0;
    case 's3eAccelerometerGetX': case 's3eAccelerometerGetY': case 's3eAccelerometerGetZ': return 0;
    case 's3eAccelerometerStart': return 1;      // S3E_RESULT_ERROR: no accelerometer
    case 's3eAccelerometerStop': return 0;
    // -- debug
    case 's3eExtGetHash': return 1;             // no optional extensions
    case 's3eDebugPrint':
    case 's3eDebugOutputString': this.log('Game: ' + this.str(x)); return 0;
    case 's3eDebugAssertShow':
    case 's3eDebugErrorShow': throw Error(name + ': ' + a.filter(v => v > 0x10000000).map(v => { try { return this.str(v, 512); } catch { return '0x' + v.toString(16); } }).join(' | '));
    case 's3eDebugGetInt':
    case 's3eDebugIsDebuggerPresent': return 0;
    // -- music (s3eAudio)
    case 's3eAudioIsCodecSupported': return x === 1 || x === 5 ? 1 : 0;     // MP3, PCM
    case 's3eAudioPlay': {
      const nm = this.str(x), bytes = this.asset(nm);
      if (!bytes || !bytes.length) return 1;
      if (this.audio) return this.audio.playMusic(this.normalized(nm), bytes, y);
      this.onAudio({ action: 'play', name: nm, bytes, repeats: y }); this.audioPlaying = true; return 0;
    }
    case 's3eAudioStop': if (this.audio) this.audio.stopMusic(); else this.onAudio({ action: 'stop' }); this.audioPlaying = false; return 0;
    case 's3eAudioPause': if (this.audio) this.audio.pauseMusic(); else this.onAudio({ action: 'pause' }); return 0;
    case 's3eAudioResume': if (this.audio) this.audio.resumeMusic(); else this.onAudio({ action: 'resume' }); return 0;
    case 's3eAudioSetInt': if (this.audio && x === 0) this.audio.setMusicVolume(y); return 0;
    case 's3eAudioGetInt':
      if (this.audio) return x === 0 ? this.audio.musicVolume : x === 1 ? this.audio.musicStatus() : (x === 6 || x === 9) ? 1 : 0;
      return x === 0 ? 100 : x === 1 ? (this.audioPlaying ? 1 : 0) : (x === 6 || x === 9) ? 1 : 0;
    // -- PCM sound channels (s3eSound)
    case 's3eSoundGetFreeChannel': return this.audio && !compat ? this.audio.freeChannel() : -1;
    case 's3eSoundGetInt':
      if (compat || !this.audio) return 0;
      return ({ 0: this.audio.soundVolume, 1: 22050, 2: this.audio.outputRate, 3: 16, 5: 1, 7: 0 })[x] ?? 0;
    case 's3eSoundChannelPlay': {
      if (!this.audio) return 1;
      const samples = new Int16Array(this.read(y, z * 2).buffer);
      return this.audio.playSound(x, samples, this.audio.channels[x]?.rate || 22050, t);
    }
    case 's3eSoundChannelStop': if (this.audio) this.audio.stopSound(x); return 0;
    case 's3eSoundChannelSetInt':
      if (!this.audio) return 0;
      if (y === 0 || y === 1) return this.audio.setChannelRate(x, z);   // rate
      if (y === 3) return this.audio.setChannelVolume(x, z);            // volume
      return 0;
    case 's3eSoundChannelUnRegister': return 0;
    case 's3eSocketClose': return 0;
    // -- compression
    case 's3eCompressionDecomp': {
      const src = this.read(x, y), dest = this.u32(z), capacity = this.u32(t);
      let out;
      if (src[0] === 31 && src[1] === 139) out = compression.gunzipSync(src);
      else if ((src[0] & 15) === 8 && ((src[0] * 256 + src[1]) % 31) === 0) out = compression.unzlibSync(src);
      else out = compression.inflateSync(src);
      if (!dest || out.length > capacity) throw Error('Invalid decompression destination/capacity');
      this.write(dest, out); this.put32(t, out.length); return 0;
    }
    }
    if (name.startsWith('gl') || name.startsWith('egl')) return this.gl(name, a);
    throw Error('Unimplemented host function ' + name + ' at guest LR=0x' + this.reg(14).toString(16));
  }

  gl(name, a) {
    const [x, y, z, t] = a;
    if (name === 'eglSwapBuffers') {
      this.frames++;
      if (this.opts.frameMs) this.virtualTime += this.opts.frameMs;
      this.deliverCallbacks();
      if (this.graphics) this.graphics.present();
      throw Object.assign(new Suspend('frame', null, false), { result: 1 });
    }
    if (name === 'eglGetProcAddress') return this.importAddress[this.str(x)] || 0;
    if (name.startsWith('egl')) {
      if (name === 'eglGetError') return 0x3000;
      if (name === 'eglGetConfigs') { if (t) this.put32(t, 1); if (y && z) this.put32(y, 1); return 1; }
      if (name === 'eglGetConfigAttrib') { this.put32(t, ({ 0x3040: 1, 0x3024: 8, 0x3023: 8, 0x3022: 8, 0x3021: 8, 0x3025: 24, 0x3026: 8, 0x3033: 4 })[z] || 0); return 1; }
      if (name === 'eglInitialize') { if (y) this.put32(y, 1); if (z) this.put32(z, 4); return 1; }
      if (name === 'eglQueryContext') { if (t) this.put32(t, 1); return 1; }
      return 1;
    }
    if (this.graphics) return this.graphics.call(name, a, this);
    if (name === 'glGetString') return this.string(({ 0x1f00: 'Browser', 0x1f01: 'WebGL ARM bridge', 0x1f02: 'OpenGL ES 2.0', 0x1f03: '' })[x] || '');
    if (name === 'glGetError') return 0;
    if (name === 'glGetIntegerv') { this.put32(y, ({ 0xd33: 2048, 0x8872: 8, 0x8869: 8, 0xd56: 24, 0xd57: 8, 0xd55: 8, 0xd54: 8, 0xd53: 8, 0xd52: 8, 0xd31: 8 })[x] || 0); return 0; }
    if (name.startsWith('glGen')) { this.glIds = this.glIds || 1; for (let i = 0; i < x; i++) this.put32(y + 4 * i, this.glIds++); return 0; }
    if (name === 'glCreateShader' || name === 'glCreateProgram') { this.glIds = this.glIds || 1; return this.glIds++; }
    if (name === 'glGetShaderiv' || name === 'glGetProgramiv') { this.put32(z, 1); return 0; }
    if (name === 'glGetUniformLocation' || name === 'glGetAttribLocation') { this.glIds = this.glIds || 1; return this.glIds++; }
    return 0;
  }
}

root.NativeGame = NativeGame;
root.NativeGameSuspend = Suspend;
root.NativePendingAsset = PendingAsset;
if (typeof module !== 'undefined') module.exports = { NativeGame, Suspend, PendingAsset, GUEST_BASE, SENTINEL };
})(typeof globalThis !== 'undefined' ? globalThis : this);

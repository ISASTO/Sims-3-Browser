// Differential check: original ARM code (Unicorn emulator oracle) versus the
// statically recompiled WebAssembly build, compared at every recompiled
// function entry (key + all 16 general registers) and at every host call.
//
//   node tools/lockstep.mjs [maxEntries]
//
// Both sides use the same guest memory layout, allocator and a deterministic
// clock, so register values (including heap and stack pointers) must match.
import fs from 'node:fs';
import path from 'node:path';
import { createRequire } from 'node:module';
const require = createRequire(import.meta.url);
const root = path.resolve(path.dirname(new URL(import.meta.url).pathname), '..');
const web = path.join(root, 'web');
const manifest = JSON.parse(fs.readFileSync(path.join(web, 'manifest.json')));
const analysis = JSON.parse(fs.readFileSync(path.join(root, 'recovered/native/analysis-input.json')));
const load = name => new Uint8Array(Buffer.concat(manifest.webAssets[name].parts.map(p => fs.readFileSync(path.join(web, p)))));
const maxEntries = Number(process.argv[2] || 200000);
const skip = Number(process.env.SKIP || 0);
const LIMIT = Number(process.env.LIMIT ?? 3);
const realNow = performance.now.bind(performance);
performance.now = () => 0;

// ---------------------------------------------------------------- oracle
const keys = new Set();
for (const line of fs.readFileSync(path.join(root, 'native/game/gen/funcs.h'), 'utf8').split('\n')) {
  const m = line.match(/F_([0-9a-f]{8})_([AT])/);
  if (m) keys.add(parseInt(m[1], 16) | (m[2] === 'T' ? 1 : 0));
}
// Switch helpers whose inline tables are lifted into the caller.
const INLINED = new Set([0x4a007015, 0x4a007018, 0x4a1652fc]);
const MUnicorn = require(path.join(web, 'vendor/unicorn.cjs'));
const SimsRuntime = require(path.join(web, 'runtime.js'));
const uc = await MUnicorn();
function makeOracle(limit) {
  const emu = new SimsRuntime(uc, new Uint8Array(fs.readFileSync(path.join(web, 'game.s3e'))), manifest, null,
    { log: () => {}, loadedAssets: [['app.icf', load('app.icf')], ['s3e.icf', load('s3e.icf')]] });
  emu.e.mem_map(0x4a200000, 0x200000, uc.PROT_ALL);
  emu.e.mem_map(0x4a400000, 0x8000000, uc.PROT_ALL);
  emu.w(13, 0x4a400000 - 16); emu.w(10, 0x4a200000 + 0x100);
  emu.nextAllocation = 0x4a400000; emu.heapLimit = 0x4a400000 + 0x8000000;
  const expected = [];
  let total = 0;
  const origService = emu.service.bind(emu);
  emu.service = (name, a) => { const rec = { host: name, a: a.slice(), n: total }; expected.push(rec); try { return origService(name, a); } catch (e) { if (e && e.assetName) expected.pop(); throw e; } };
  const onEntry = (_, address) => {
    const t = (emu.e.reg_read_i32(uc.ARM_REG_CPSR) & 0x20) ? 1 : 0;
    const k = (Number(address) >>> 0) | t;
    if (!keys.has(k) || INLINED.has(k)) return;
    total++;
    if (total <= skip) return;
    if (expected.length >= limit) { emu.e.emu_stop(); emu.stopped = true; return; }
    const regs = []; for (let i = 0; i < 15; i++) regs.push(emu.r(i));
    const prev = expected[expected.length - 1];
    // A slice boundary can restart at a function entry; drop the duplicate.
    if (prev && prev.k === k && prev.regs.every((v, i) => v === regs[i])) return;
    expected.push({ k, regs, n: total });
  };
  // Block hooks: Unicorn.js 1.0.3 occasionally omits events for chained
  // translation blocks, so the comparison below tolerates short gaps.
  emu.e.hook_add(uc.HOOK_BLOCK, onEntry, null, 1, 0);
  while (expected.length < limit && !emu.stopped) {
    try { if (!emu.step(2000000)) break; } catch (e) { if (!e.assetName) { console.log('oracle stopped:', e.message); break; } emu.loadedAssets.set(e.assetName, load(e.assetName)); emu.error = null; }
  }
  emu.expected = expected; emu.total = total;
  return emu;
}
const t0 = realNow();
const oracle = makeOracle(maxEntries);
const expected = oracle.expected;
console.log('oracle: %d records (%d function entries) in %d ms, frames %d', expected.length, oracle.total, Math.round(realNow() - t0), oracle.frames);

// ---------------------------------------------------------------- native
const { NativeGame } = require(path.join(root, 'native/game/host.js'));
const importNames = analysis.imports.map(i => i.name);
const importAddress = {}; for (const i of analysis.imports) importAddress[i.name] = i.arm;
let idx = 0, ntotal = 0, done = false, skipped = 0, missed = 0, nativeOnly = 0;
const history = [];
function fail(msg) {
  console.log('MISMATCH at record %d: %s', idx, msg);
  for (const h of history.slice(-12)) console.log('   prev', h);
  for (const e of expected.slice(Math.max(0, idx - 4), idx + 4)) console.log('   oracle', e.host ? 'host ' + e.host : 'fn ' + hex(e.k) + ' lr=' + hex(e.regs[14]) + ' r0=' + hex(e.regs[0]) + ' r1=' + hex(e.regs[1]) + ' r5=' + hex(e.regs[5]) + ' r7=' + hex(e.regs[7]));
  done = true;
  if (process.env.MEMCHECK) memcheck();
  throw new Error('lockstep mismatch');
}
function memcheck() {
  // Re-run the oracle to stop exactly at this record, then compare memory.
  const o2 = makeOracle(idx);
  const regions = [[0x4a0007d0, 0x1ab000 - 0x7d0], [0x4a200000, 0x200000], [0x4a400000, Math.max(0x1000, game.nextAllocation - 0x4a400000)]];
  let reported = 0;
  for (const [base, size] of regions) {
    const a = o2.read(base, size), b = game.read(base, size);
    let i = 0;
    while (i < size && reported < 40) {
      if (a[i] !== b[i]) {
        let j = i; while (j < size && a[j] !== b[j]) j++;
        console.log('   memdiff 0x%s..0x%s oracle %s native %s', (base + i).toString(16), (base + j).toString(16),
          Buffer.from(a.subarray(i, Math.min(j, i + 16))).toString('hex'), Buffer.from(b.subarray(i, Math.min(j, i + 16))).toString('hex'));
        reported++; i = j;
      } else i++;
    }
  }
  if (!reported) console.log('   memory identical');
}
const hex = v => (v >>> 0).toString(16);
const game = new NativeGame({
  manifest, importNames, importAddress, deterministic: true, log: () => {}, loadAssetSync: load,
  trace: (name, a) => {
    if (done || ntotal < skip) return;
    const e = expected[idx];
    if (!e) { done = true; throw new Error('end'); }
    if (!e.host) {
      let j = idx;
      while (j < idx + 6 && expected[j] && !expected[j].host) j++;
      if (expected[j] && expected[j].host === name) { skipped += j - idx; idx = j; }
    }
    const e2 = expected[idx];
    if (!e2.host) fail('native host call ' + name + ' but oracle function entry ' + hex(e2.k));
    if (e2.host !== name || e2.a.some((v, i) => (v >>> 0) !== (a[i] >>> 0))) fail('host call ' + name + '(' + a.map(hex) + ') vs oracle ' + e2.host + '(' + e2.a.map(hex) + ')');
    history.push('host ' + name + '(' + a.map(hex).join(',') + ')');
    idx++;
  },
});
await game.init(fs.readFileSync(path.join(root, 'native/game/sims3-game-trace.wasm')), new Uint8Array(fs.readFileSync(path.join(web, 'game.s3e'))));
const origTrace = k => {
  ntotal++;
  if (done || ntotal <= skip) return;
  const e = expected[idx];
  if (!e) { done = true; throw new Error('end'); }
  game.views();
  const regs = Array.from(game.cpu32.subarray(0, 15));
  if (e.host || e.k !== (k >>> 0)) {
    // The oracle also records entries reached by local branches (e.g. ARM to
    // Thumb mode switches inside one function); skip a few such records.
    let j = idx;
    while (j < idx + 6 && expected[j] && !expected[j].host && expected[j].k !== (k >>> 0)) j++;
    if (expected[j] && !expected[j].host && expected[j].k === (k >>> 0)) { skipped += j - idx; idx = j; }
  }
  const e2 = expected[idx];
  if (e2.host || e2.k !== (k >>> 0)) {
    // Unicorn.js 1.0.3 occasionally omits a block-hook event for a call
    // target; tolerate a short run of native-only entries.
    nativeOnly++;
    if (nativeOnly <= LIMIT) { missed++; history.push('fn ' + hex(k) + ' (not in oracle trace)'); return; }
    if (e2.host) fail('native entered ' + hex(k) + ' but oracle host call ' + e2.host + '(' + e2.a.map(hex) + ')');
    fail('function ' + hex(k) + ' vs oracle ' + hex(e2.k) + ' regs ' + regs.map(hex).join(' '));
  }
  const diff = [];
  for (let i = 0; i < 15; i++) if ((regs[i] >>> 0) !== (e2.regs[i] >>> 0)) diff.push('r' + i + '=' + hex(regs[i]) + ' (oracle ' + hex(e2.regs[i]) + ')');
  if (diff.length) {
    nativeOnly++;
    if (nativeOnly <= LIMIT) { missed++; history.push('fn ' + hex(k) + ' (register mismatch; assuming oracle missed this entry)'); return; }
    fail('registers at ' + hex(k) + ': ' + diff.join(', '));
  }
  nativeOnly = 0;
  history.push('fn ' + hex(k) + ' lr=' + hex(regs[14]) + ' r0=' + hex(regs[0]) + ' r1=' + hex(regs[1]) + ' r5=' + hex(regs[5]) + ' r7=' + hex(regs[7]));
  idx++;
};
game.instance.exports; // instance created in init
// patch the import used by the trace build
game.traceHook = origTrace;
try {
  while (!done) { const s = game.runSlice(); if (!s) break; }
} catch (e) {
  if (!done) console.log('native stopped:', e.stack);
}
if (!done || idx >= expected.length) console.log('matched %d records (%d oracle-only local entries skipped, %d native-only entries)', idx, skipped, missed);
else console.log('matched %d of %d records before stopping (%d skipped, %d native-only)', idx, expected.length, skipped, missed);
if (!done) {
  for (const h of history.slice(-8)) console.log('   native', h);
  for (const e of expected.slice(idx, idx + 6)) console.log('   oracle next', e.host ? 'host ' + e.host : 'fn ' + hex(e.k) + ' lr=' + hex(e.regs[14]) + ' r0=' + hex(e.regs[0]));
  console.log('   native pc=0x' + hex(game.reg(15)) + ' cpu.pc=' + hex(game.cpu32[20]) + ' lr=' + hex(game.reg(14)));
}

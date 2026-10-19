// Find the first recompiled-function entry at which guest memory differs
// between the original-code oracle and the recompiled build.
//   node tools/lockstep-bisect.mjs <lo> <hi>
import fs from 'node:fs';
import path from 'node:path';
import { createRequire } from 'node:module';
const require = createRequire(import.meta.url);
const root = path.resolve(path.dirname(new URL(import.meta.url).pathname), '..');
const web = path.join(root, 'web');
const manifest = JSON.parse(fs.readFileSync(path.join(web, 'manifest.json')));
const analysis = JSON.parse(fs.readFileSync(path.join(root, 'recovered/native/analysis-input.json')));
const load = name => new Uint8Array(Buffer.concat(manifest.webAssets[name].parts.map(p => fs.readFileSync(path.join(web, p)))));
performance.now = () => 0;
const keys = new Set();
for (const line of fs.readFileSync(path.join(root, 'native/game/gen/funcs.h'), 'utf8').split('\n')) {
  const m = line.match(/F_([0-9a-f]{8})_([AT])/); if (m) keys.add(parseInt(m[1], 16) | (m[2] === 'T' ? 1 : 0));
}
const MUnicorn = require(path.join(web, 'vendor/unicorn.cjs'));
const SimsRuntime = require(path.join(web, 'runtime.js'));
const { NativeGame } = require(path.join(root, 'native/game/host.js'));
const uc = await MUnicorn();
const wasm = fs.readFileSync(path.join(root, 'native/game/sims3-game-trace.wasm'));
const exe = new Uint8Array(fs.readFileSync(path.join(web, 'game.s3e')));
let lastEmu = null;
function oracleAt(stopKey, occurrence) {
  if (lastEmu) { try { lastEmu.e.close(); } catch {} lastEmu = null; }
  const emu = new SimsRuntime(uc, exe, manifest, null, { log: () => {}, loadedAssets: [['app.icf', load('app.icf')], ['s3e.icf', load('s3e.icf')]] });
  emu.e.mem_map(0x4a200000, 0x200000, uc.PROT_ALL); emu.e.mem_map(0x4a400000, 0x2000000, uc.PROT_ALL);
  emu.w(13, 0x4a400000 - 16); emu.w(10, 0x4a200100); emu.nextAllocation = 0x4a400000; emu.heapLimit = 0x4c400000;
  lastEmu = emu;
  let count = 0;
  emu.e.hook_add(uc.HOOK_BLOCK, (_, address) => {
    const k = (Number(address) >>> 0) | ((emu.e.reg_read_i32(uc.ARM_REG_CPSR) & 0x20) ? 1 : 0);
    if (k !== stopKey) return;
    if (count === occurrence) { emu.e.emu_stop(); emu.stopped = true; emu.stopKey = k; return; }
    count++;
  }, null, 1, 0);
  while (!emu.stopped) { try { if (!emu.step(2000000)) break; } catch (e) { if (!e.assetName) throw e; emu.loadedAssets.set(e.assetName, load(e.assetName)); emu.error = null; } }
  return emu;
}
async function nativeAt(n) {
  const game = new NativeGame({ manifest, importNames: analysis.imports.map(i => i.name), importAddress: {}, deterministic: true, log: () => {}, loadAssetSync: load });
  await game.init(wasm, exe);
  let count = 0; const occ = new Map();
  game.traceHook = k => {
    const c = occ.get(k) || 0;
    if (count === n) { game.stopKey = k; game.occurrence = c; throw new Error('stop'); }
    occ.set(k, c + 1); count++;
  };
  try { while (game.runSlice()); } catch (e) { if (e.message !== 'stop') throw e; }
  return game;
}
function diff(o, g) {
  const sp = g.reg(13);
  const regions = [[0x4a0007d0, 0x1ab000 - 0x7d0], [sp, 0x4a400000 - sp], [0x4a400000, Math.max(0x1000, g.nextAllocation - 0x4a400000)]];
  const out = [];
  for (const [base, size] of regions) {
    const a = o.read(base, size), b = g.read(base, size);
    for (let i = 0; i < size && out.length < 20; i++) if (a[i] !== b[i]) {
      let j = i; while (j < size && a[j] !== b[j]) j++;
      out.push('0x' + (base + i).toString(16) + '..0x' + (base + j).toString(16) + ' oracle ' + Buffer.from(a.subarray(i, Math.min(j, i + 8))).toString('hex') + ' native ' + Buffer.from(b.subarray(i, Math.min(j, i + 8))).toString('hex'));
      i = j;
    }
  }
  return out;
}
let lo = Number(process.argv[2] || 0), hi = Number(process.argv[3]);
// invariant: memory equal at lo, differs at hi
while (hi - lo > 1) {
  const mid = (lo + hi) >> 1;
  const g = await nativeAt(mid), o = oracleAt(g.stopKey, g.occurrence);
  if (!o.stopped) { console.log('oracle never reached', mid); hi = mid; continue; }
  const d = diff(o, g);
  console.log(mid, d.length ? 'DIFF ' + d[0] : 'same');
  if (d.length) hi = mid; else lo = mid;
}
const g = await nativeAt(hi), o = oracleAt(g.stopKey, g.occurrence);
console.log('first differing entry index', hi, 'entering', g.stopKey?.toString(16), 'previous index', lo);
for (const line of diff(o, g)) console.log('  ', line);
const gl = await nativeAt(lo);
console.log('at index', lo, 'entering', gl.stopKey?.toString(16), 'regs', Array.from({ length: 15 }, (_, i) => gl.reg(i).toString(16)).join(' '));

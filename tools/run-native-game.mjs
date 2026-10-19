// Headless Node runner for the recompiled game (no WebGL; graphics calls use
// the minimal state stub).  Usage: node tools/run-native-game.mjs [frames]
import fs from 'node:fs';
import path from 'node:path';
import { createRequire } from 'node:module';
const require = createRequire(import.meta.url);
const root = path.resolve(path.dirname(new URL(import.meta.url).pathname), '..');
const { NativeGame } = require(path.join(root, 'native/game/host.js'));
const manifest = JSON.parse(fs.readFileSync(path.join(root, 'web/manifest.json')));
const analysis = JSON.parse(fs.readFileSync(path.join(root, 'recovered/native/analysis-input.json')));
const load = name => new Uint8Array(Buffer.concat(manifest.webAssets[name].parts.map(p => fs.readFileSync(path.join(root, 'web', p)))));
const frames = Number(process.argv[2] || 100);
const traceFile = process.env.TRACE_OUT;
const traceLines = [];
const importNames = analysis.imports.map(i => i.name);
const importAddress = {};
for (const i of analysis.imports) importAddress[i.name] = i.arm;
const game = new NativeGame({
  manifest, importNames, importAddress, deterministic: !!process.env.DETERMINISTIC || !!process.env.FRAME_MS, frameMs: Number(process.env.FRAME_MS || 0),
  log: s => { if (!process.env.QUIET) console.log(s); },
  loadAssetSync: load,
  trace: traceFile ? (name, a, g) => traceLines.push(name + ' ' + a.map(v => (v >>> 0).toString(16)).join(' ')) : null,
});
await game.init(fs.readFileSync(path.join(root, 'native/game/sims3-game.wasm')), new Uint8Array(fs.readFileSync(path.join(root, 'web/game.s3e'))));
const t0 = performance.now();
let slices = 0, s, frameTimes = [];
let last = performance.now();
try {
  while (game.frames < frames) {
    s = game.runSlice();
    slices++;
    if (!s) break;
    if (s.reason === 'frame') { const now = performance.now(); frameTimes.push(now - last); last = now; }
  }
} catch (e) {
  console.error('STOP', e.stack || String(e));
  process.exitCode = 1;
}
const elapsed = performance.now() - t0;
if (traceFile) fs.writeFileSync(traceFile, traceLines.join('\n') + '\n');
frameTimes.sort((a, b) => a - b);
const pct = p => frameTimes.length ? frameTimes[Math.min(frameTimes.length - 1, Math.floor(p * frameTimes.length))].toFixed(2) : null;
console.log('RESULT', JSON.stringify({ frames: game.frames, slices, elapsedMs: Math.round(elapsed), medianFrameMs: pct(0.5), p95FrameMs: pct(0.95), heap: game.nextAllocation - 0x4a400000, quit: game.quit, pc: '0x' + game.reg(15).toString(16), lr: '0x' + game.reg(14).toString(16), counts: game.counts }));

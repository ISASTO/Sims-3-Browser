// Compare actual compiled WebAssembly functions with the unmodified ARM game.
// Unicorn is a development oracle only; the tested Wasm module has no imports.
const assert = require('node:assert/strict');
const fs = require('node:fs');
const path = require('node:path');
const crypto = require('node:crypto');
const root = path.resolve(__dirname, '..');
const folderIndex = process.argv.indexOf('--folder');
const folder = folderIndex < 0 ? path.join(root, 'native') : path.resolve(process.argv[folderIndex + 1]);
const allowFailures = process.argv.includes('--allow-failures');
const hash = bytes => crypto.createHash('sha256').update(bytes).digest('hex');

// Fixed corpus: boundaries, small enum/character values, pairwise boundaries,
// and deterministic pseudorandom inputs, with randomized non-argument registers.
let state = 0x53a31e21;
function random() {
  state ^= state << 13; state ^= state >>> 17; state ^= state << 5;
  return state >>> 0;
}
function cases(arity) {
  const values = [0,1,2,3,4,5,6,7,8,9,10,11,12,13,15,16,22,28,31,32,33,36,40,63,64,
    127,128,255,256,0x3000,0x7fffffff,0x80000000,0xfffffffe,0xffffffff];
  const result = new Map();
  const add = args => result.set(args.join(','), args);
  for (const value of values) add(Array(arity).fill(value));
  for (let arg = 0; arg < arity; arg++) for (const value of values) {
    for (const fill of [0, 1, 0xffffffff]) {
      const input = Array(arity).fill(fill); input[arg] = value; add(input);
    }
  }
  if (arity >= 2) for (let a = 0; a < values.length; a++) for (let b = 0; b < values.length; b++) {
    const input = Array.from({length: arity}, (_, i) => values[(a + b + i) % values.length]);
    input[0] = values[a]; input[1] = values[b]; add(input);
  }
  // Single-byte arguments exercise enum, character, and numeric parsing leaves.
  for (let value = 0; value < 256; value++) add(Array(arity).fill(value));
  for (let i = 0; i < 512; i++) add(Array.from({length: arity}, random));
  return [...result.values()];
}

(async () => {
  const manifest = JSON.parse(fs.readFileSync(path.join(folder, 'manifest.json')));
  const wasm = fs.readFileSync(path.join(folder, 'verified-functions.wasm'));
  const source = fs.readFileSync(path.join(folder, 'verified-functions.c'));
  const original = fs.readFileSync(path.join(root, 'recovered/game.s3e'));
  assert.equal(hash(original), manifest.originalExecutableSha256);
  assert.equal(hash(wasm), manifest.wasmSha256);
  assert.equal(hash(source), manifest.sourceSha256);
  const module = await WebAssembly.compile(wasm);
  assert.deepEqual(WebAssembly.Module.imports(module), [], 'Native subset must not invoke an emulator or host shim');
  const instance = await WebAssembly.instantiate(module);
  const uc = await require(path.join(root, 'web/vendor/unicorn.cjs'))();
  const cpu = new uc.Unicorn(uc.ARCH_ARM, uc.MODE_ARM);
  const header = JSON.parse(fs.readFileSync(path.join(root, 'recovered/s3e-header.json')));
  const stack = 0x0e000000, stackSize = 0x100000, sentinel = 0x0d000000;
  cpu.mem_map(header.originalBase, Math.ceil(header.codeMemSize / 4096) * 4096, uc.PROT_ALL);
  cpu.mem_write(header.originalBase, original.subarray(header.codeOffset, header.codeOffset + header.codeFileSize));
  cpu.mem_map(stack, stackSize, uc.PROT_ALL);
  cpu.mem_map(sentinel, 4096, uc.PROT_ALL);
  const registers = Array.from({length:13}, (_, i) => uc['ARM_REG_R' + i]);
  const results = [];
  let total = 0;
  try {
    for (const item of manifest.functions) {
      const raw = fs.readFileSync(path.join(root, item.sourceFile), 'utf8');
      const block = raw.split('// Address: ' + item.address + '\n')[1];
      assert.ok(block, 'Recovered body is missing: ' + item.name);
      const body = block.split('// Address: ')[0].trim() + '\n';
      assert.equal(hash(Buffer.from(body)), item.sourceSha256, 'Recovered function provenance changed: ' + item.name);
      assert.ok(source.toString('utf8').includes(body), 'Compiled source must contain the actual recovered body');
      const execute = instance.exports[item.name];
      assert.equal(typeof execute, 'function', item.name);
      state = (0x53a31e21 ^ parseInt(item.address, 16)) >>> 0;
      const inputs = cases(item.argumentTypes.length);
      const result = {name:item.name, address:item.address, thumb:item.thumb, passed:true, cases:0};
      for (const args of inputs) {
        try {
          cpu.reg_write_i32(uc.ARM_REG_CPSR, (random() & 0xf0000000) | 0x10);
          for (let r = 0; r < registers.length; r++) cpu.reg_write_i32(registers[r], r < args.length ? args[r] | 0 : random() | 0);
          cpu.reg_write_i32(uc.ARM_REG_SP, stack + stackSize - 0x100);
          cpu.reg_write_i32(uc.ARM_REG_LR, sentinel);
          cpu.emu_start(parseInt(item.address,16) | (item.thumb ? 1 : 0), sentinel, 0, 50000);
          assert.equal(cpu.reg_read_i32(uc.ARM_REG_PC), sentinel, 'Reference did not return within instruction budget');
          const expected = cpu.reg_read_i32(uc.ARM_REG_R0) >>> 0;
          const actual = execute(...args) >>> 0;
          result.cases++; total++;
          if (actual !== expected) {
            result.passed = false; result.mismatch = {args, expected, actual}; break;
          }
        } catch (error) {
          result.passed = false; result.mismatch = {args, error:String(error)}; break;
        }
      }
      results.push(result);
      console.log(item.name + ': ' + (result.passed ? 'PASS' : 'REJECT') + ' (' + result.cases + ' cases)');
    }
  } finally { cpu.close(); }
  const passed = results.filter(item => item.passed).length;
  const report = {
    status:'Scalar subset only; passing these tests does not establish whole-game compatibility or exhaustive equivalence.',
    reference:'Unmodified recovered/game.s3e executed by Unicorn.js 1.0.3',
    wasmSha256:manifest.wasmSha256, sourceSha256:manifest.sourceSha256,
    corpus:'Boundary values, enums/bytes, pairwise boundaries, 512 seeded random vectors per function; randomized incoming non-argument registers and flags.',
    seed:'0x53a31e21 XOR function address', passedFunctions:passed, failedFunctions:results.length-passed,
    comparisons:total, results,
  };
  fs.writeFileSync(path.join(folder, 'verification.json'), JSON.stringify(report,null,2) + '\n');
  console.log(passed + '/' + results.length + ' functions matched in ' + total + ' comparisons.');
  if (!allowFailures && passed !== results.length) process.exitCode = 1;
})().catch(error => { console.error(error); process.exitCode = 1; });

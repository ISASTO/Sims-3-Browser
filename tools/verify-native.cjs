// Verify that analysis-only patches preserve original bytes and that every
// modeled ARM/Thumb import entry returns correctly in the reference CPU engine.
const assert = require('node:assert/strict');
const fs = require('node:fs');
const path = require('node:path');
const crypto = require('node:crypto');
const root = path.resolve(__dirname, '..');
const native = path.join(root, 'recovered/native');
const input = JSON.parse(fs.readFileSync(path.join(native, 'analysis-input.json')));
const header = JSON.parse(fs.readFileSync(path.join(root, 'recovered/s3e-header.json')));
const original = fs.readFileSync(path.join(root, 'recovered/game.s3e'));
assert.equal(crypto.createHash('sha256').update(original).digest('hex'), input.originalExecutableSha256);
assert.deepEqual(fs.readFileSync(path.join(root, 'web/game.s3e')), original);
const elf = fs.readFileSync(path.join(native, 'game-analysis.elf'));
assert.equal(crypto.createHash('sha256').update(elf).digest('hex'), input.analysisElfSha256);
const expected = Buffer.from(original.subarray(header.codeOffset, header.codeOffset + header.codeFileSize));
const entries = new Set();
for (const item of input.imports) {
  const offset = item.arm - input.base;
  assert.equal(expected.readUInt32LE(offset), 0xeafffffe);
  expected.writeUInt32LE(0xe12fff1e, offset);
  if (item.thumb !== null) {
    assert.equal(original.readUInt32LE(header.codeOffset + item.thumb - input.base), 0x46c04778);
  }
  for (const address of [item.arm, item.thumb].filter(x => x !== null)) {
    assert.ok(!entries.has(address), 'Overlapping import entry'); entries.add(address);
  }
}
assert.deepEqual(elf.subarray(4096, 4096 + input.codeFileSize), expected);

(async () => {
  const uc = await require(path.join(root, 'web/vendor/unicorn.cjs'))();
  const cpu = new uc.Unicorn(uc.ARCH_ARM, uc.MODE_ARM);
  cpu.mem_map(input.base, Math.ceil(input.codeMemSize / 4096) * 4096, uc.PROT_ALL);
  cpu.mem_map(0x0d000000, 4096, uc.PROT_ALL);
  cpu.mem_write(input.base, expected);
  let tested = 0;
  try {
    for (const item of input.imports) {
      for (const variant of ['arm', 'thumb']) {
        const address = item[variant]; if (address === null) continue;
        cpu.reg_write_i32(uc.ARM_REG_CPSR, 0x10);
        cpu.reg_write_i32(uc.ARM_REG_R0, 42);
        cpu.reg_write_i32(uc.ARM_REG_LR, 0x0d000000);
        cpu.emu_start(address | (variant === 'thumb' ? 1 : 0), 0x0d000000, 0, 8);
        assert.equal(cpu.reg_read_i32(uc.ARM_REG_PC), 0x0d000000, item.name + ' ' + variant);
        assert.equal(cpu.reg_read_i32(uc.ARM_REG_R0), 42);
        tested++;
      }
    }
  } finally { cpu.close(); }
  console.log('Original game bytes unchanged; only declared import slots differ in the analysis image.');
  console.log('All ' + tested + ' ARM/Thumb analysis import entries passed real CPU return checks.');
})().catch(error => { console.error(error); process.exitCode = 1; });

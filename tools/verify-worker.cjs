// Exercise the bundled worker in a browser-style global scope, without CommonJS
// or importScripts. This is a loader/ARM regression check, not a browser UI test.
const assert = require('node:assert/strict');
const fs = require('node:fs');
const path = require('node:path');
const vm = require('node:vm');
const {webcrypto} = require('node:crypto');

const web = path.resolve(__dirname, '../web');
const code = fs.readFileSync(path.join(web, 'worker.bundle.js'), 'utf8');
const wasm = fs.readFileSync(path.join(web, 'vendor/unicorn.wasm'));

async function verify(location) {
  const fetched = [], messages = [];
  const scope = {
    console, TextEncoder, TextDecoder, URL, WebAssembly, performance,
    setTimeout, clearTimeout, crypto: webcrypto,
    WorkerGlobalScope: function WorkerGlobalScope() {},
    location: new URL(location),
    postMessage: message => messages.push(message),
    fetch: async requested => {
      const url = new URL(requested, location).href;
      fetched.push(url);
      assert.equal(url, new URL('vendor/unicorn.wasm', location).href);
      return new Response(wasm, {headers: {'Content-Type': 'application/wasm'}});
    },
  };
  scope.self = scope;
  const context = vm.createContext(scope);
  vm.runInContext(code, context, {filename: 'worker.bundle.js'});
  for (const name of ['MUnicorn', 'SimsRuntime', 'SimsGraphics', 'onmessage']) {
    assert.equal(typeof context[name], 'function', name);
  }
  assert.equal(typeof context.fflate.inflateSync, 'function');
  assert.equal(typeof context.importScripts, 'undefined');

  const uc = await vm.runInContext(
    'MUnicorn({locateFile: name => new URL("vendor/" + name, self.location.href).href})',
    context,
  );
  assert.deepEqual(fetched, [new URL('vendor/unicorn.wasm', location).href]);
  const cpu = new uc.Unicorn(uc.ARCH_ARM, uc.MODE_ARM);
  try {
    cpu.mem_map(0x1000, 4096, uc.PROT_ALL);
    // MOV r0, #41; ADD r0, r0, #1.
    cpu.mem_write(0x1000, new Uint8Array([41, 0, 160, 227, 1, 0, 128, 226]));
    cpu.emu_start(0x1000, 0x1008, 0, 2);
    assert.equal(cpu.reg_read_i32(uc.ARM_REG_R0), 42);
  } finally {
    cpu.close();
  }

  context.fetch = async () => new Response('Not found', {status: 404});
  await context.start({});
  assert.ok(messages.some(message => message.type === 'error' &&
    message.text.includes('manifest.json (HTTP 404)')));
}

(async () => {
  await verify('http://127.0.0.1:8000/worker.bundle.js');
  await verify('http://127.0.0.1:8000/project/web/worker.bundle.js');
  console.log('Bundled worker loaded without importScripts; browser-path Wasm loading,');
  console.log('real ARM execution, nested paths, and missing-file error reporting passed.');
})().catch(error => { console.error(error); process.exitCode = 1; });

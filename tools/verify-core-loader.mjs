// Integration checks of the same loader and ARM-derived fixtures used in-browser.
import fs from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';
import {fileURLToPath} from 'node:url';
import {loadNativeCore} from '../native/core/runtime.js';
import {runNativeFixtures} from '../native/core/fixtures.js';

const folder=fileURLToPath(new URL('../native/core/',import.meta.url));
const fetchLocal=async url=>{
  try{return new Response(await fs.readFile(fileURLToPath(url)),{status:200});}
  catch{return new Response('Missing file',{status:404});}
};
const core=await loadNativeCore({fetch:fetchLocal});
const corpus=JSON.parse(await fs.readFile(path.join(folder,'browser-fixtures.json'),'utf8'));
const result=await runNativeFixtures(core,corpus);
assert.equal(result.functions,core.manifest.functions.length);
assert.throws(()=>core.invoke('unknown',[]),RangeError);
assert.throws(()=>core.invoke('divide_signed32',[1,0]),RangeError);
assert.throws(()=>core.invoke('divide_unsigned64',[1,0,0,0]),RangeError);
assert.throws(()=>core.invoke('utf16_length',[0x20001]),RangeError);
assert.throws(()=>core.invoke('copy_forward_endpoints',[0x20000,0x20001,8]),RangeError);
const before=core.memory.buffer.byteLength;
const allocation=core.allocate(before+1);
assert.ok(core.memory.buffer.byteLength>before,'The arena must grow memory when needed');
const fill=core.invoke('fill_end',[allocation,257,0xa5]);
assert.equal(fill.words[0],allocation+257);
assert.ok(new Uint8Array(core.memory.buffer,allocation,257).every(value=>value===0xa5));
core.resetArena();assert.equal(core.allocate(16),core.heapStart);
const report={environment:'Node.js '+process.version+'; browser loader integration, not an actual browser test.',
  wasmSha256:core.manifest.wasmSha256,fixtureChecks:result.passed,functionsCovered:result.functions,
  checks:['Original ARM-derived result words and memory hashes','Version/hash matching','32-bit-word JS interface',
    'Unknown-function and unsupported-domain rejection','Memory growth and fresh views','Temporary arena reset'],
  status:'All loader integration checks passed.'};
await fs.writeFile(path.join(folder,'loader-verification.json'),JSON.stringify(report,null,2)+'\n');
console.log(JSON.stringify(report,null,2));

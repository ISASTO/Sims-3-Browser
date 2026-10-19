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
assert.throws(()=>core.invoke('ctype_lower',[256]),RangeError);
assert.throws(()=>core.invoke('path_join',[0x20000,0x24000,0]),RangeError);
assert.throws(()=>core.invoke('bounded_string_append',[0x20000,0x24000,0]),RangeError);
assert.throws(()=>core.setPathRoot('x'.repeat(128)),RangeError);
assert.throws(()=>core.setPathRoot(new Uint8Array([65,0,66])),RangeError);
core.setPathRoot('Data/Objects');
core.setPathRoot(new Uint8Array(core.memory.buffer,core.pathRootAddress,12));
assert.equal(new TextDecoder().decode(new Uint8Array(core.memory.buffer,core.pathRootAddress,12)),'Data/Objects','Prefix updates may alias the original root buffer');
const before=core.memory.buffer.byteLength;
const allocation=core.allocate(before+1);
assert.ok(core.memory.buffer.byteLength>before,'The arena must grow memory when needed');
const fill=core.invoke('fill_end',[allocation,257,0xa5]);
assert.equal(fill.words[0],allocation+257);
assert.ok(new Uint8Array(core.memory.buffer,allocation,257).every(value=>value===0xa5));
core.resetArena();assert.equal(core.allocate(16),core.heapStart);
assert.equal(new TextDecoder().decode(new Uint8Array(core.memory.buffer,core.pathRootAddress,12)),'Data/Objects','Global path state survives arena reset and memory growth');
const source=core.allocate(128),destination=core.allocate(128);
new Uint8Array(core.memory.buffer,source,128).set(new TextEncoder().encode('Mesh/../Chair.M3G\0'));
core.invoke('path_resolve',[source,destination]);
const resolved=new Uint8Array(core.memory.buffer,destination,128);
assert.equal(new TextDecoder().decode(resolved.subarray(0,resolved.indexOf(0))),'data/objects/chair.m3g','Connected native path resolver uses persistent global state');
const report={environment:'Node.js '+process.version+'; browser loader integration, not an actual browser test.',
  wasmSha256:core.manifest.wasmSha256,fixtureChecks:result.passed,functionsCovered:result.functions,
  checks:['Original ARM-derived result words and memory hashes','Version/hash matching','32-bit-word JS interface',
    'Unknown-function and unsupported-domain rejection','Memory growth and fresh views','Temporary arena reset',
    'Relocated path-prefix updates, aliasing, growth and arena-reset persistence','Connected native resource-path resolution'],
  status:'All loader integration checks passed.'};
await fs.writeFile(path.join(folder,'loader-verification.json'),JSON.stringify(report,null,2)+'\n');
console.log(JSON.stringify(report,null,2));

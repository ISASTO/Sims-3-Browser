import fs from 'node:fs/promises';
import assert from 'node:assert/strict';
import {fileURLToPath} from 'node:url';
import {loadNativeResources} from '../native/resources/runtime.js';
import {loadLinkedFixtureCorpus,runLinkedFixtures,runResourceFixtures,inspectFontResource,validateGroupStream} from '../native/resources/fixtures.js';
const fetchLocal=async url=>{try{return new Response(await fs.readFile(fileURLToPath(url)));}catch{return new Response('Missing',{status:404});}};
const folder=new URL('../native/resources/',import.meta.url),json=async url=>JSON.parse(await fs.readFile(url,'utf8'));
const runtime=await loadNativeResources({fetch:fetchLocal});
assert.equal(runtime.memory,runtime.core.memory);assert.equal(runtime.memory,runtime.serialization.memory);
assert.equal(runtime.allocate,runtime.core.allocate);assert.equal(runtime.allocate,runtime.serialization.allocate);
const linked=await runLinkedFixtures(runtime,await loadLinkedFixtureCorpus(runtime,'core',{fetch:fetchLocal}),await loadLinkedFixtureCorpus(runtime,'serialization',{fetch:fetchLocal}));
const fixtures=await runResourceFixtures(runtime,await json(new URL('browser-fixtures.json',folder)));
assert.equal(fixtures.functions,runtime.manifest.functions.length);
assert.throws(()=>runtime.setRegistry([[1,0x4a050809]]),RangeError,'An unported original callback must be rejected');
assert.throws(()=>runtime.setRegistry([[0xffffffff+1,0x4a04e90d]]),RangeError);
assert.throws(()=>runtime.invoke('missing'),RangeError);assert.throws(()=>runtime.invoke('resource_dispatch',[]),RangeError);
assert.throws(()=>runtime.invokeSerial('serial_divide_unsigned32',[1,0]),RangeError);
assert.throws(()=>runtime.invokeCore('ctype_lower',[256]),RangeError);
// Hash and close never run progress. A disabled/invalid progress configuration
// must not prevent hashing or closing a stream, including a failed close.
const state=new DataView(runtime.memory.buffer,runtime.stateAddress,204);
state.setUint32(0xc8,0x0d001001,true);state.setUint32(0xb0,0,true);
assert.equal(runtime.hashName('CIwGxFont'),0xa68776be);
new DataView(runtime.memory.buffer).setUint32(runtime.openCountAddress,1,true);
assert.doesNotThrow(()=>runtime.invoke('resource_close'));
assert.equal(new DataView(runtime.memory.buffer).getUint32(runtime.openCountAddress,true),0);
await assert.rejects(()=>loadLinkedFixtureCorpus(runtime,'core',{fetch:async url=>{
 const response=await fetchLocal(url),b=new Uint8Array(await response.arrayBuffer());b[b.length-1]^=1;return new Response(b);
}}),/provenance/);
await assert.rejects(()=>loadNativeResources({fetch:async url=>{
 const response=await fetchLocal(url);if(!String(url).endsWith('/core/manifest.json'))return response;
 const d=await response.json();d.functions[0].label+='-changed';return new Response(JSON.stringify(d));
}}),/metadata mismatch/);
assert.throws(()=>validateGroupStream(new Uint8Array()),RangeError);
assert.throws(()=>validateGroupStream(Uint8Array.from([0x3d,3,6,6,0,0,1,0,0,0,0,0,0,0])),RangeError);
const before=runtime.memory.buffer.byteLength;runtime.allocate(before+1);assert.ok(runtime.memory.buffer.byteLength>before);
runtime.resetArena();runtime.setPathRoot('/');
runtime.setRegistry([[0x11223344,0x4a04e90d]]);const descriptor=new DataView(runtime.memory.buffer,runtime.registryAddress,16);
assert.equal(descriptor.getUint32(4,true),1);runtime.resetArena();assert.equal(descriptor.getUint32(4,true),0);
assert.equal(runtime.allocate(0),runtime.heapStart);
const resource=await inspectFontResource(runtime),expected=await json(new URL('member-verification.json',folder));
assert.equal(expected.wasmSha256,runtime.manifest.wasmSha256);assert.equal(resource.sha256,expected.assetSha256);
assert.deepEqual(resource.memberMetadata,expected.metadata);assert.equal(resource.chunks.length,2);
assert.deepEqual(resource.chunks.map(c=>[c.typeName,c.offset,c.length,c.nextOffset]),[['ResGroupMembers',6,14,24],['ResGroupResources',24,63921,63949]]);
assert.ok(resource.closed&&resource.openCount===0&&resource.memoryShared);
const report={status:'All linked Node fixture, memory, original-resource and member-field integration checks passed. Live browser results are separate.',
 environment:'Node.js '+process.version,wasmSha256:runtime.manifest.wasmSha256,linkedOriginalEntryPoints:runtime.manifest.linkedOriginalEntryPoints,
 coreFixtureChecks:linked.core.passed,serializationFixtureChecks:linked.serialization.passed,resourceFixtureChecks:fixtures.passed,
 totalFixtureChecks:linked.core.passed+linked.serialization.passed+fixtures.passed,
 newFunctionsCovered:fixtures.functions,memoryLayout:'All three gateways use the same WebAssembly.Memory and temporary allocation cursor. No raw pointers cross between different instances.',
 linkedRoundtrip:linked.roundtrip,resource,
 checked:['Original expectations from all three ARM fixture corpora replayed in the linked build','Nested original native callback bodies, registry duplicates, unknown chunks and length patching',
 'Close/flush/count behavior including failure and repeated close; hash/close do not require progress period','Callback allowlist and invalid arguments','Pinned linked manifest/corpus integrity, including changed metadata rejection','Memory growth, fresh views and registry clearing before arena reuse',
  'Actual native resource header/chunk/close loop, native type hashes and original member fields','Full original font byte roundtrip in the linked module'],
 limitations:'Registry installation and binding existing-open handles are adapters. Original open/startup, registry allocation/growth, general heap/vtables, group factories and full font/resource parsing remain unfinished. This does not fix main game FPS/flashing or establish whole-game/browser compatibility.'};
await fs.writeFile(new URL('loader-verification.json',folder),JSON.stringify(report,null,2)+'\n');console.log(JSON.stringify(report,null,2));

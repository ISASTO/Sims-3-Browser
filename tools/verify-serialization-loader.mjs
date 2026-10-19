import fs from 'node:fs/promises';
import assert from 'node:assert/strict';
import {fileURLToPath} from 'node:url';
import {loadNativeSerialization} from '../native/serialization/runtime.js';
import {runSerializationFixtures,runFontRoundtrip} from '../native/serialization/fixtures.js';
const fetchLocal=async url=>{try{return new Response(await fs.readFile(fileURLToPath(url)));}catch{return new Response('Missing',{status:404});}};
const core=await loadNativeSerialization({fetch:fetchLocal});
const folder=new URL('../native/serialization/',import.meta.url);
const corpus=JSON.parse(await fs.readFile(new URL('browser-fixtures.json',folder),'utf8'));
const fixtures=await runSerializationFixtures(core,corpus);
assert.equal(fixtures.functions,core.manifest.functions.length);
assert.throws(()=>core.invoke('unknown',[]),RangeError);
assert.throws(()=>core.invoke('serial_divide_unsigned32',[1,0]),RangeError);
assert.throws(()=>core.invoke('serial_signed16',[0x20000,1,16,2]),RangeError);
assert.throws(()=>core.invoke('serial_read_strided',[0x20000,1,1,1]),RangeError);
const before=core.memory.buffer.byteLength;core.allocate(before+1);
assert.ok(core.memory.buffer.byteLength>before,'Memory must grow');core.resetArena();assert.equal(core.allocate(0),core.heapStart);
const roundtrip=await runFontRoundtrip(core);
const report={status:'All Node loader/integration checks passed; actual browser results are recorded separately.',environment:'Node.js '+process.version,
 wasmSha256:core.manifest.wasmSha256,fixtureChecks:fixtures.passed,functionsCovered:fixtures.functions,
 checked:['ARM-derived words, full arena/context hashes, ordered file/callback traces and stream contents',
 'Exact host import allowlist and version hashes','Five-word argument interface and invalid-domain rejection',
 'Memory growth and fresh views','Native path resolution plus manifest/asset integrity verification',
 'Actual font resource header and byte-for-byte roundtrip through recovered native I/O'],roundtrip};
await fs.writeFile(new URL('loader-verification.json',folder),JSON.stringify(report,null,2)+'\n');
console.log(JSON.stringify(report,null,2));

import {runNativeFixtures} from '../core/fixtures.js';
import {runSerializationFixtures,runFontRoundtrip} from '../serialization/fixtures.js';
import {digest,knownChunkNames} from './runtime.js';
const decode=s=>Uint8Array.from(atob(s),c=>c.charCodeAt(0));
const same=(a,b)=>JSON.stringify(a)===JSON.stringify(b);
const requireResult=(ok,message)=>{if(!ok)throw new Error(message);};

export async function loadLinkedFixtureCorpus(runtime,component,options={}) {
 requireResult(['core','serialization'].includes(component),'Unknown linked fixture component');
 const path='native/'+component+'/browser-fixtures.json',expected=runtime.manifest.linkedFixtureSources[path];
 const url=new URL('../'+component+'/browser-fixtures.json',options.baseUrl||import.meta.url);
 const response=await (options.fetch||globalThis.fetch)(url,{cache:'no-store'});
 requireResult(response.ok,'Missing linked fixture corpus');const bytes=await response.arrayBuffer();
 requireResult(await digest(bytes)===expected,'Linked fixture bytes do not match build provenance');
 return JSON.parse(new TextDecoder().decode(bytes));
}

export async function runLinkedFixtures(runtime,coreCorpus,serialCorpus,onProgress=()=>{}) {
 const pins=runtime.manifest.linkedComponents;
 requireResult(coreCorpus.wasmSha256===pins.find(x=>x.path==='native/core').wasmSha256,'Core fixture provenance mismatch');
 requireResult(serialCorpus.wasmSha256===pins.find(x=>x.path==='native/serialization').wasmSha256,'Stream fixture provenance mismatch');
 const adapt=corpus=>({...corpus,wasmSha256:runtime.manifest.wasmSha256});
 const core=await runNativeFixtures(runtime.core,adapt(coreCorpus),p=>onProgress({...p,component:'core'}));
 runtime.setPathRoot('/');
 const serialization=await runSerializationFixtures(runtime.serialization,adapt(serialCorpus),p=>onProgress({...p,component:'serialization'}));
 const roundtrip=await runFontRoundtrip(runtime.serialization);
 return {core,serialization,roundtrip,note:'Original recorded expectations replayed against the new linked module, with exact baseline fixture provenance checked. Both gateways use the same memory and allocator.'};
}
export async function runResourceFixtures(runtime,corpus,onProgress=()=>{}) {
 requireResult(corpus.wasmSha256===runtime.manifest.wasmSha256,'Resource fixture/module mismatch');
 requireResult(corpus.originalExecutableSha256===runtime.manifest.originalExecutableSha256,'Resource fixtures reference another executable');
 let current,passed=0;const covered=new Set();
 const previous=runtime.setProgressHandler((event,{memory,stateAddress})=>{
  if(current.callbackCounter!==undefined)new DataView(memory.buffer,stateAddress,204).setUint32(0xac,current.callbackCounter,true);
 });
 try {
  for(const f of corpus.fixtures) {
   current=f;runtime.host.clear();
   for(const file of f.files)file.asset?await runtime.openAsset(file.asset,file):runtime.host.createFile(decode(file.data),file);
   const {base,size,seed,patches}=f.memory,arena=new Uint8Array(runtime.memory.buffer,base,size);
   for(let i=0;i<size;i++)arena[i]=(i*31+(i>>>8)*17+seed)&255;
   for(const [offset,b] of patches)arena.set(decode(b),offset);
   new Uint8Array(runtime.memory.buffer,runtime.stateAddress,204).set(decode(f.state));
   const reg=new DataView(runtime.memory.buffer,runtime.registryAddress,16);
   [base+0x5000,f.registry.length,...f.registryTail].forEach((x,i)=>reg.setUint32(i*4,x,true));
   new DataView(runtime.memory.buffer).setUint32(runtime.openCountAddress,f.openCount,true);
   const actual=runtime.invoke(f.address,f.args);
   requireResult(actual.mask===f.mask&&(!f.mask||actual.words[0]===f.expected),f.label+': result word');
   requireResult(await digest(new Uint8Array(runtime.memory.buffer,base,size))===f.expectedMemorySha256,f.label+': arena/table/canaries');
   requireResult(await digest(new Uint8Array(runtime.memory.buffer,runtime.stateAddress,204))===f.expectedStateSha256,f.label+': context');
   requireResult(await digest(new Uint8Array(runtime.memory.buffer,runtime.registryAddress,16))===f.expectedRegistrySha256,f.label+': registry');
   requireResult(new DataView(runtime.memory.buffer).getUint32(runtime.openCountAddress,true)===f.expectedOpenCount,f.label+': open count');
   requireResult(same(runtime.host.events,f.expectedEvents),f.label+': ordered SDK/progress events');
   const files=[];for(const [handle,file] of runtime.host.files)files.push({handle,position:file.position,writable:file.writable,closed:!!file.closed,dataSha256:await digest(file.data),bytes:file.data.length});
   requireResult(same(files,f.expectedFiles),f.label+': file bytes/cursors/close state');
   covered.add(f.address);passed++;onProgress({passed,total:corpus.fixtures.length,functions:covered.size,label:f.label,component:'resources'});
  }
 }finally{runtime.setProgressHandler(previous);}
 return {passed,total:corpus.fixtures.length,functions:covered.size};
}

// Bounds checking for browser integration, separate from original semantics.
// The original stream reader itself does not validate all malformed lengths.
export function validateGroupStream(bytes) {
 if(bytes.length<8||bytes[0]!==0x3d)throw new RangeError('Not a supported complete group stream');
 const v=new DataView(bytes.buffer,bytes.byteOffset,bytes.byteLength),version=bytes[1]<<16|bytes[2]<<8|bytes[3];
 let offset=version>=0x30102?6:4,count=0;
 while(offset+4<=bytes.length) {
  const type=v.getUint32(offset,true);if(!type){if(offset+4!==bytes.length)throw new RangeError('Unexpected bytes after group terminator');return {version,count};}
  if(offset+8>bytes.length)throw new RangeError('Incomplete group length');
  const length=v.getUint32(offset+4,true);if(length<4||offset+4+length>bytes.length||++count>4096)throw new RangeError('Invalid or unbounded group chunk');
  offset+=4+length;
 }
 throw new RangeError('Missing group terminator');
}
export async function inspectFontResource(runtime) {
 const previous=runtime.setProgressHandler(undefined);
 try {
  runtime.host.clear();runtime.resetArena();runtime.setPathRoot('/');
  const labels=new Map(knownChunkNames.map(name=>[runtime.hashName(name),name]));
  const asset=await runtime.openAsset('Fonts/./Fonts.Group.Bin'),file=runtime.host.files.get(asset.handle);
  const bounds=validateGroupStream(file.data);
  new Uint8Array(runtime.memory.buffer,runtime.stateAddress,204).fill(0);
  let state=new DataView(runtime.memory.buffer,runtime.stateAddress,204);state.setUint8(0,1);state.setUint32(8,asset.handle,true);
  new DataView(runtime.memory.buffer).setUint32(runtime.openCountAddress,1,true);runtime.setRegistry([]);
  runtime.invoke('resource_read_file'); // Actual original header/chunk/close loop.
  requireResult(file.closed&&file.position===asset.size,'Native resource loop did not consume and close the original file');
  requireResult(new DataView(runtime.memory.buffer).getUint32(runtime.openCountAddress,true)===0,'Native close count mismatch');
  const trace=runtime.host.events.filter(x=>x.op!=='progress'),readWord=e=>{
   requireResult(e?.op==='read'&&e.bytes.length===8,'Incomplete native word trace');return parseInt(e.bytes.match(/../g).reverse().join(''),16)>>>0;
  };
  const chunks=[];let index=bounds.version>=0x30102?2:1;
  for(;;) {
   const type=readWord(trace[index++]);if(!type)break;
   const tell=trace[index++],length=readWord(trace[index++]),seek=trace[index++];
   requireResult(tell?.op==='tell'&&seek?.op==='seek'&&seek.result===0,'Unexpected native chunk control flow');
   requireResult(seek.offset===tell.result+length,'Native chunk length/seek mismatch');
   chunks.push({typeHash:type.toString(16).padStart(8,'0'),typeName:labels.get(type)||'Unknown type',offset:tell.result-4,length,payloadBytes:length-4,nextOffset:seek.offset});
  }
  requireResult(chunks.length===bounds.count&&trace[index]?.op==='close'&&index+1===trace.length,'Native chunk/close trace mismatch');
  const member=chunks.find(x=>x.typeName==='ResGroupMembers');let memberMetadata;
  if(member) {
   const start=member.offset+8,end=member.nextOffset,nul=file.data.indexOf(0,start);
   requireResult(nul>=start&&nul-start<64&&nul+5<=end,'Unsupported member-name field bounds');
   const handle=runtime.host.createFile(file.data,{position:start,writable:false}),buffer=runtime.allocate(68);
   new Uint8Array(runtime.memory.buffer,buffer,68).fill(0);state=new DataView(runtime.memory.buffer,runtime.stateAddress,204);state.setUint8(0,1);state.setUint32(8,handle,true);
   new DataView(runtime.memory.buffer).setUint32(runtime.openCountAddress,1,true);
   runtime.invokeSerial('serial_string',[buffer,64,0,0]);runtime.invokeSerial('serial_unsigned32',[buffer+64,1,32,4]);
   const name=new TextDecoder().decode(new Uint8Array(runtime.memory.buffer,buffer,nul-start)),flags=new DataView(runtime.memory.buffer).getUint32(buffer+64,true);
   runtime.invoke('resource_close');memberMetadata={name,flags};
  }
  return {name:asset.name,bytes:asset.size,sha256:asset.sha256,version:bounds.version,chunks,memberMetadata,
   closed:!!file.closed,finalPosition:file.position,openCount:new DataView(runtime.memory.buffer).getUint32(runtime.openCountAddress,true),
   memoryShared:runtime.memory===runtime.core.memory&&runtime.memory===runtime.serialization.memory,
   note:'Original chunk loop skips unknown chunk payloads. Member fields use recovered native string/u32 routines with browser orchestration; original group construction, resource/font parsers and rendering remain unported.'};
 }finally{runtime.setProgressHandler(previous);}
}

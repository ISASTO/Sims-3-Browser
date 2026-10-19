// A linked native component: all three gateways share one memory and arena.
import {createResourceHost} from './host.js';
export const digest=async b=>Array.from(new Uint8Array(await crypto.subtle.digest('SHA-256',b)),x=>x.toString(16).padStart(2,'0')).join('');
export const knownChunkNames=['ResGroupMembers','ResGroupResources','ResGroupResourcesOptimised','ResGroupDirectory','ResGroupBuildData','ResGroupChildPaths','ResGroupHST'];
const wordArgs=(args,n,max=n)=>{
 if(!Array.isArray(args)||args.length<n||args.length>max||args.some(v=>!Number.isInteger(v)||v< -0x80000000||v>0xffffffff))throw new RangeError('Incorrect native argument words');
 return Array.from({length:max},(_,i)=>(args[i]??0)>>>0);
};
const keyOf=a=>typeof a==='number'?((a>>>0)&0xfffffffe).toString(16):String(a).replace(/^0x/i,'');
function entriesOf(manifest){const map=new Map();for(const e of manifest.functions){map.set(e.address,e);map.set(e.label,e);}return map;}

export async function loadNativeResources(options={}) {
 const fetcher=options.fetch||globalThis.fetch,base=new URL('.',options.baseUrl||import.meta.url);
 const jsonHashes=new Map();
 const loadJson=async url=>{const r=await fetcher(url,{cache:'no-store'});if(!r.ok)throw new Error('Missing native metadata: '+url);const b=await r.arrayBuffer();jsonHashes.set(String(url),await digest(b));return JSON.parse(new TextDecoder().decode(b));};
 const [manifest,response,coreManifest,serialManifest]=await Promise.all([
  loadJson(new URL('manifest.json',base)),fetcher(new URL('sims3-resources.wasm',base),{cache:'no-store'}),
  loadJson(new URL('../core/manifest.json',base)),loadJson(new URL('../serialization/manifest.json',base))]);
 if(!response.ok)throw new Error('Missing native resources module');
 const bytes=await response.arrayBuffer();if(await digest(bytes)!==manifest.wasmSha256)throw new Error('Resource module/manifest mismatch');
 // Linked component manifests must match the exact pinned build dependencies.
 for(const [path,component] of [['native/core',coreManifest],['native/serialization',serialManifest]]) {
  const pin=manifest.linkedComponents.find(x=>x.path===path);
  const url=new URL(path==='native/core'?'../core/manifest.json':'../serialization/manifest.json',base);
  if(!pin||pin.wasmSha256!==component.wasmSha256||pin.functions!==component.functions.length||jsonHashes.get(String(url))!==pin.manifestSha256)throw new Error('Linked component metadata mismatch');
 }
 const module=await WebAssembly.compile(bytes);
 const expected=manifest.hostImports.map(x=>x.module+'.'+x.name).sort();
 if(JSON.stringify(WebAssembly.Module.imports(module).map(x=>x.module+'.'+x.name).sort())!==JSON.stringify(expected))throw new Error('Unexpected resource host imports');
 let native,progressHandler=options.onProgress;
 const host=createResourceHost({read:(a,n)=>new Uint8Array(native.memory.buffer,a,n),write:(a,b)=>new Uint8Array(native.memory.buffer,a,b.length).set(b)},
  {onProgress:event=>progressHandler?.(event,{memory:native.memory,stateAddress:native.serial_state_ptr()>>>0})});
 native=(await WebAssembly.instantiate(module,{s3e:Object.fromEntries(['read','write','tell','seek','close'].map(n=>[n,host[n]])),bridge:{progress:host.progress}})).exports;
 const memory=native.memory,stateAddress=native.serial_state_ptr()>>>0,registryAddress=native.resource_registry_ptr()>>>0,
  openCountAddress=native.resource_open_count_ptr()>>>0,pathRootAddress=native.core_path_root()>>>0;
 const heapStart=Math.ceil((native.serial_heap_base()>>>0)/16)*16;let cursor=heapStart;
 const coreEntries=entriesOf(coreManifest),serialEntries=entriesOf(serialManifest),resourceEntries=entriesOf(manifest);
 function allocate(n,alignment=16) {
  if(!Number.isSafeInteger(n)||n<0||!Number.isInteger(alignment)||alignment<1||alignment>65536||(alignment&(alignment-1)))throw new RangeError('Invalid native allocation');
  const address=Math.ceil(cursor/alignment)*alignment,end=address+n;
  if(end>manifest.memory.maximumBytes)throw new RangeError('Resource component memory limit exceeded');
  if(end>memory.buffer.byteLength)memory.grow(Math.ceil((end-memory.buffer.byteLength)/65536));
  cursor=end;return address;
 }
 function result(mask,pointer,count,entry) {
  if(mask!==entry.resultRegisters.reduce((m,r)=>m|(1<<Number(r.slice(1))),0))throw new Error('Native result ABI mismatch');
  const view=new DataView(memory.buffer);return {mask,words:Array.from({length:count},(_,i)=>view.getUint32(pointer+i*4,true))};
 }
 function invokeCore(address,args=[]) {
  const e=coreEntries.get(keyOf(address));if(!e)throw new RangeError('Core function has not been recovered');
  const w=wordArgs(args,e.parameters.length,4),suite=e.suite;
  if(suite==='path_ctype'&&!(w[0]<=255||w[0]===0xffffffff))throw new RangeError('Default locale requires a byte or EOF');
  if((suite==='path_bounded_append'&&!w[2])||(suite==='path_join'&&(!w[2]||w[2]>0x7fffffff)))throw new RangeError('Invalid pathname capacity');
  if((suite==='sdiv32'&&!w[1])||((suite==='udiv64'||suite==='sdiv64')&&!w[2]&&!w[3]))throw new RangeError('Original division-by-zero exception is unported');
  if(suite==='zero_aligned'&&(w[0]&3))throw new RangeError('Unaligned zero buffer');
  if(suite.startsWith('utf16')&&((w[0]&1)||(e.parameters.length>1&&(w[1]&1))))throw new RangeError('Unaligned UTF-16 pointer');
  if((suite==='copy'||suite==='copy_forward')&&w[2]&&w[0]<w[1]+w[2]&&w[1]<w[0]+w[2])throw new RangeError('Forward copy requires disjoint buffers');
  return result(native.core_invoke(e.id,...w)>>>0,native.core_result_ptr()>>>0,4,e);
 }
 function checkProgress() {
  const v=new DataView(memory.buffer,stateAddress,204);
  if(v.getUint32(0xc8,true)&&!v.getUint32(0xb0,true))throw new RangeError('Enabled progress requires a nonzero period');
  return v;
 }
 function invokeSerial(address,args=[]) {
  const e=serialEntries.get(keyOf(address));if(!e)throw new RangeError('Serializer function has not been recovered');
  const w=wordArgs(args,e.parameters.length),v=checkProgress();
  if(e.suite==='divide'&&!w[1])throw new RangeError('Original divide-by-zero exception is unported');
  if(e.suite==='fields'&&w[2]>(e.label==='serial_signed16'?15:e.label==='serial_signed32'?31:32))throw new RangeError('Unsupported field bit count');
  if(v.getUint8(0)&&(e.suite==='boolean'||e.suite==='string')) {
   const f=host.files.get(v.getUint32(8,true));
   if(!f||f.closed||f.readLimit===0||(e.suite==='boolean'?f.data.length-f.position<w[1]:f.data.indexOf(0,f.position)<0))throw new RangeError('Incomplete original boolean/string input');
  }
  return result(native.serial_invoke(e.id,...Array.from({length:5},(_,i)=>w[i]??0))>>>0,native.serial_result_ptr()>>>0,2,e);
 }
 function invoke(address,args=[]) {
  const e=resourceEntries.get(keyOf(address));if(!e)throw new RangeError('Resource function has not been recovered');
  const w=wordArgs(args,e.parameters.length);
  if(['dispatch','next','file'].includes(e.suite))checkProgress();
  return result(native.resource_invoke(e.id,w[0]??0)>>>0,native.resource_result_ptr()>>>0,1,e);
 }
 const tokens=new Set(manifest.nativeCallbackTokens.map(x=>parseInt(x,16)));
 function setRegistry(entries=[]) {
  if(!Array.isArray(entries)||entries.length>4096||entries.some(p=>!Array.isArray(p)||p.length!==2||!Number.isInteger(p[0])||p[0]<0||p[0]>0xffffffff||!tokens.has(p[1])))throw new RangeError('Registry requires valid hashes and recovered native callback tokens');
  const address=entries.length?allocate(entries.length*8):0;
  if(entries.length)new Uint32Array(memory.buffer,address,entries.length*2).set(entries.flat());
  native.resource_install_registry(address,entries.length);
 }
 function resetArena(){native.resource_install_registry(0,0);cursor=heapStart;}
 function setPathRoot(value) {
  const b=typeof value==='string'?new TextEncoder().encode(value):value;
  if(!(b instanceof Uint8Array)||b.length>=128||b.includes(0))throw new RangeError('Invalid original directory prefix');
  const copy=b.slice(),dest=new Uint8Array(memory.buffer,pathRootAddress,128);dest.fill(0);dest.set(copy);
 }
 function hashName(value) {
  const b=typeof value==='string'?new TextEncoder().encode(value):value;
  if(!(b instanceof Uint8Array)||b.includes(0))throw new RangeError('Hash text requires nonzero bytes');
  const a=allocate(b.length+1,4);new Uint8Array(memory.buffer,a,b.length+1).set(b);
  new Uint8Array(memory.buffer,a+b.length,1)[0]=0;return invoke('resource_type_hash',[a]).words[0];
 }
 let assetManifest;
 async function openAsset(name,settings={}) {
  if(typeof name!=='string')throw new TypeError('Asset name must be text');
  const b=new TextEncoder().encode(name);if(b.length>127||b.includes(0))throw new RangeError('Asset path exceeds original domain');
  const source=allocate(128),destination=allocate(128),input=new Uint8Array(memory.buffer,source,128);input.fill(0);input.set(b);
  invokeCore('path_resolve',[source,destination]);
  const resolved=new Uint8Array(memory.buffer,destination,128),end=resolved.indexOf(0);
  if(end<0)throw new Error('Unterminated native path');
  const normalized=new TextDecoder().decode(resolved.subarray(0,end)),assetBase=new URL('../../web/',base);
  assetManifest??=loadJson(new URL('manifest.json',assetBase));
  const mapping=(await assetManifest).webAssets[normalized];if(!mapping)throw new Error('Absent original asset: '+normalized);
  const parts=await Promise.all(mapping.parts.map(async p=>{const r=await fetcher(new URL(p,assetBase));if(!r.ok)throw new Error('Missing asset part');return new Uint8Array(await r.arrayBuffer());}));
  const data=new Uint8Array(parts.reduce((n,p)=>n+p.length,0));let at=0;for(const p of parts){data.set(p,at);at+=p.length;}
  if(data.length!==mapping.size||await digest(data)!==mapping.sha256)throw new Error('Original asset integrity mismatch');
  return {handle:host.createFile(data,{...settings,writable:false}),name:normalized,size:data.length,sha256:mapping.sha256};
 }
 function setProgressHandler(fn) {if(fn!==undefined&&typeof fn!=='function')throw new TypeError('Invalid progress handler');const previous=progressHandler;progressHandler=fn;return previous;}
 const shared={memory,allocate,resetArena,heapStart};
 return {...shared,manifest,host,stateAddress,registryAddress,openCountAddress,pathRootAddress,invoke,invokeCore,invokeSerial,
  setRegistry,setPathRoot,hashName,openAsset,setProgressHandler,
  core:{...shared,manifest:{...coreManifest,wasmSha256:manifest.wasmSha256},invoke:invokeCore,pathRootAddress,setPathRoot},
  serialization:{...shared,manifest:{...serialManifest,wasmSha256:manifest.wasmSha256},stateAddress,host,invoke:invokeSerial,openAsset,setProgressHandler}};
}

import {createMemoryHost} from './host.js';
import {loadNativeCore} from '../core/runtime.js';
const digest=async bytes=>Array.from(new Uint8Array(await crypto.subtle.digest('SHA-256',bytes)),x=>x.toString(16).padStart(2,'0')).join('');

export async function loadNativeSerialization(options={}) {
  const fetcher=options.fetch||globalThis.fetch;
  const base=new URL('.',options.baseUrl||import.meta.url);
  const [manifestResponse,response]=await Promise.all([
    fetcher(new URL('manifest.json',base),{cache:'no-store'}),
    fetcher(new URL('sims3-serialization.wasm',base),{cache:'no-store'})]);
  if(!manifestResponse.ok||!response.ok)throw new Error('Unable to load native serialization files');
  const manifest=await manifestResponse.json(),bytes=await response.arrayBuffer();
  if(await digest(bytes)!==manifest.wasmSha256)throw new Error('Serialization manifest and module do not match');
  const module=await WebAssembly.compile(bytes);
  const expected=manifest.hostImports.map(x=>x.module+'.'+x.name).sort();
  if(JSON.stringify(WebAssembly.Module.imports(module).map(x=>x.module+'.'+x.name).sort())!==JSON.stringify(expected))throw new Error('Unexpected native serializer imports');
  let native,progressHandler=options.onProgress;
  const host=createMemoryHost({read:(address,n)=>new Uint8Array(native.memory.buffer,address,n),
    write:(address,bytes)=>new Uint8Array(native.memory.buffer,address,bytes.length).set(bytes)},
    {onProgress:event=>progressHandler?.(event,{memory:native.memory,stateAddress:native.serial_state_ptr()>>>0})});
  native=(await WebAssembly.instantiate(module,{s3e:{read:host.read,write:host.write},bridge:{progress:host.progress}})).exports;
  const stateAddress=native.serial_state_ptr()>>>0,resultAddress=native.serial_result_ptr()>>>0;
  let cursor=Math.ceil((native.serial_heap_base()>>>0)/16)*16;
  const heapStart=cursor,byName=new Map();
  for(const entry of manifest.functions){byName.set(entry.address,entry);byName.set(entry.label,entry);}
  function allocate(n,alignment=16) {
    if(!Number.isSafeInteger(n)||n<0||!Number.isInteger(alignment)||alignment<1||alignment>65536||(alignment&(alignment-1)))throw new RangeError('Invalid serializer allocation');
    const address=Math.ceil(cursor/alignment)*alignment,end=address+n;
    if(end>manifest.memory.maximumBytes)throw new RangeError('Serializer memory limit exceeded');
    if(end>native.memory.buffer.byteLength)native.memory.grow(Math.ceil((end-native.memory.buffer.byteLength)/65536));
    cursor=end;return address;
  }
  function invoke(address,args=[]) {
    const key=typeof address==='number'?((address>>>0)&0xfffffffe).toString(16):String(address).replace(/^0x/i,'');
    const entry=byName.get(key);if(!entry)throw new RangeError('Serializer function has not been recovered: '+key);
    if(args.length!==entry.parameters.length||args.some(x=>!Number.isInteger(x)||x< -0x80000000||x>0xffffffff))throw new RangeError('Incorrect serializer argument words');
    const words=Array.from({length:5},(_,i)=>(args[i]??0)>>>0),state=new DataView(native.memory.buffer,stateAddress,manifest.context.length);
    if(entry.suite==='divide'&&!words[1])throw new RangeError('The original divide-by-zero exception is unported');
    if(state.getUint32(0xc8,true)&&!state.getUint32(0xb0,true))throw new RangeError('Progress callback requires a nonzero period');
    if(entry.suite==='fields') {
      const max=entry.label==='serial_signed16'?15:entry.label==='serial_signed32'?31:32;
      if(words[2]>max)throw new RangeError('Unsupported serializer bit-count domain');
    }
    if(entry.suite==='boolean'&&state.getUint8(0)) {
      const file=host.files.get(state.getUint32(8,true));
      if(!file||file.readLimit===0||file.data.length-file.position<words[1])throw new RangeError('Original boolean short-read temporary is undefined');
    }
    if(entry.suite==='string'&&state.getUint8(0)) {
      const file=host.files.get(state.getUint32(8,true));
      if(!file||file.readLimit===0||file.data.indexOf(0,file.position)<0)throw new RangeError('String input must contain a reachable terminator');
    }
    const mask=native.serial_invoke(entry.id,...words)>>>0;
    const expectedMask=entry.resultRegisters.reduce((m,r)=>m|(1<<Number(r.slice(1))),0);
    if(mask!==expectedMask)throw new Error('Serializer result ABI mismatch');
    const view=new DataView(native.memory.buffer,resultAddress,8);
    return {mask,words:[view.getUint32(0,true),view.getUint32(4,true)]};
  }
  let assetManifestPromise,nativeCorePromise,assetScratch;
  async function openAsset(name,settings={}) {
    const encoded=new TextEncoder().encode(name);
    if(encoded.length>127||encoded.includes(0))throw new RangeError('Asset path exceeds the recovered pathname domain');
    nativeCorePromise??=options.core?Promise.resolve(options.core):loadNativeCore({fetch:fetcher,baseUrl:new URL('../core/',base)});
    const core=await nativeCorePromise;
    if(!assetScratch)assetScratch=[core.allocate(128),core.allocate(128)];
    const [source,destination]=assetScratch;
    const input=new Uint8Array(core.memory.buffer,source,128);input.fill(0);input.set(encoded);
    core.invoke('path_resolve',[source,destination]);
    const resolved=new Uint8Array(core.memory.buffer,destination,128);
    const normalized=new TextDecoder().decode(resolved.subarray(0,resolved.indexOf(0)));
    const assetBase=new URL('../../web/',base);
    assetManifestPromise??=fetcher(new URL('manifest.json',assetBase)).then(async r=>{if(!r.ok)throw new Error('Unable to load asset manifest');return r.json();});
    const mapping=(await assetManifestPromise).webAssets[normalized];
    if(!mapping)throw new Error('Game asset is absent: '+normalized);
    const parts=await Promise.all(mapping.parts.map(async part=>{const r=await fetcher(new URL(part,assetBase));if(!r.ok)throw new Error('Missing asset part: '+part);return new Uint8Array(await r.arrayBuffer());}));
    const bytes=new Uint8Array(parts.reduce((n,x)=>n+x.length,0));let offset=0;
    for(const part of parts){bytes.set(part,offset);offset+=part.length;}
    if(bytes.length!==mapping.size||await digest(bytes)!==mapping.sha256)throw new Error('Original asset integrity check failed: '+normalized);
    return {handle:host.createFile(bytes,{...settings,writable:false}),name:normalized,size:bytes.length,sha256:mapping.sha256};
  }
  return {manifest,memory:native.memory,stateAddress,host,invoke,allocate,heapStart,openAsset,
    setProgressHandler(handler){if(handler!==undefined&&typeof handler!=='function')throw new TypeError('Progress handler must be a function');const previous=progressHandler;progressHandler=handler;return previous;},
    resetArena(){cursor=heapStart;}};
}

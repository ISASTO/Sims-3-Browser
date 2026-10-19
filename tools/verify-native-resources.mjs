// Execute the original unmodified ARM resource bodies and real native callbacks.
// Only external SDK file/progress boundaries use the documented host model.
import fs from 'node:fs';
import path from 'node:path';
import crypto from 'node:crypto';
import assert from 'node:assert/strict';
import {createRequire} from 'node:module';
import {fileURLToPath} from 'node:url';
import {createResourceHost} from '../native/resources/host.js';
import {BASE,SIZE,A,R,resourceCases,rng,words,assetBytes} from './native-resource-cases.mjs';
const require=createRequire(import.meta.url),root=fileURLToPath(new URL('../',import.meta.url));
const folder=path.join(root,'native/resources'),json=p=>JSON.parse(fs.readFileSync(p,'utf8'));
const hash=b=>crypto.createHash('sha256').update(b).digest('hex');
const onlyIndex=process.argv.indexOf('--only'),only=onlyIndex<0?null:new Set(process.argv[onlyIndex+1].split(','));
const manifest=json(path.join(folder,'manifest.json')),original=fs.readFileSync(path.join(root,'recovered/game.s3e'));
const wasm=fs.readFileSync(path.join(folder,'sims3-resources.wasm'));
assert.equal(hash(wasm),manifest.wasmSha256);assert.equal(hash(original),manifest.originalExecutableSha256);
assert.deepEqual(original,fs.readFileSync(path.join(root,'web/game.s3e')));
assert.equal(hash(fs.readFileSync(path.join(folder,'contracts.json'))),manifest.contractsSha256);
for(const [name,sha] of Object.entries(manifest.sourceFiles))assert.equal(hash(fs.readFileSync(path.join(root,name))),sha,name);
const uc=await require(path.join(root,'web/vendor/unicorn.cjs'))(),cpu=new uc.Unicorn(uc.ARCH_ARM,uc.MODE_ARM);
const header=json(path.join(root,'recovered/s3e-header.json'));
const names={s3eFileRead:'read',s3eFileWrite:'write',s3eFileTell:'tell',s3eFileSeek:'seek',s3eFileClose:'close'};
const bindings=json(path.join(root,'recovered/native/analysis-input.json')).imports.filter(x=>x.name in names);
assert.equal(bindings.length,5);
const end=0x0d000000,sp=0x0e0fff00,context=0x4a19b6a8,registry=0x4a19fa98,openCount=0x4a192814;
cpu.mem_map(header.originalBase,Math.ceil(header.codeMemSize/4096)*4096,uc.PROT_ALL);
cpu.mem_write(header.originalBase,original.subarray(header.codeOffset,header.codeOffset+header.codeFileSize));
cpu.mem_map(BASE,SIZE,uc.PROT_ALL);cpu.mem_map(0x0e000000,0x100000,uc.PROT_ALL);cpu.mem_map(end,0x4000,uc.PROT_ALL);
const registers=Array.from({length:13},(_,i)=>uc['ARM_REG_R'+i]);
let current,pending,hostRandom=rng(1);
function patchCounter(memory,address){if(current.callbackCounter!==undefined)memory.write(address+0xac,words(current.callbackCounter));}
const referenceMemory={read:(a,n)=>cpu.mem_read(a,n),write:(a,b)=>cpu.mem_write(a,b)};
const refHost=createResourceHost(referenceMemory,{onProgress:()=>patchCounter(referenceMemory,context)});
let native;
const nativeMemory={read:(a,n)=>new Uint8Array(native.memory.buffer,a,n),write:(a,b)=>new Uint8Array(native.memory.buffer,a,b.length).set(b)};
const nativeHost=createResourceHost(nativeMemory,{onProgress:()=>patchCounter(nativeMemory,native.serial_state_ptr()>>>0)});
native=(await WebAssembly.instantiate(wasm,{s3e:Object.fromEntries(['read','write','tell','seek','close'].map(n=>[n,nativeHost[n]])),bridge:{progress:nativeHost.progress}})).instance.exports;
const nativeContext=native.serial_state_ptr()>>>0,nativeRegistry=native.resource_registry_ptr()>>>0,nativeCount=native.resource_open_count_ptr()>>>0;
assert.ok(native.serial_heap_base()<=BASE,'Comparison arena overlaps native program state/stack');
for(const binding of bindings)cpu.hook_add(uc.HOOK_CODE,()=>{pending=names[binding.name];cpu.emu_stop();},null,binding.arm,binding.arm);
cpu.hook_add(uc.HOOK_CODE,()=>{pending='progress';cpu.emu_stop();},null,end+0x1000,end+0x1000);
// Observe the original bx-r0 veneer without stopping or replacing its target.
let actualNativeCallbacks=[];
cpu.hook_add(uc.HOOK_CODE,()=>{actualNativeCallbacks.push(cpu.reg_read_i32(uc.ARM_REG_R0)>>>0);},null,0x4a1652c4,0x4a1652c4);

function runReference(entry,args,seed) {
 const random=rng(seed),incoming=registers.map((_,i)=>i<args.length?args[i]:random());
 cpu.reg_write_i32(uc.ARM_REG_CPSR,(random()&0xf0000000)|0x10);
 for(let i=0;i<13;i++)cpu.reg_write_i32(registers[i],incoming[i]|0);
 cpu.reg_write_i32(uc.ARM_REG_SP,sp);cpu.reg_write_i32(uc.ARM_REG_LR,end);
 cpu.mem_write(sp,words(random(),random(),random(),random()));
 let pc=parseInt(entry.address,16)|(entry.thumb?1:0),transitions=0;
 hostRandom=rng(seed^0x686f7374);actualNativeCallbacks=[];
 for(;;) {
  pending=null;cpu.emu_start(pc,end,0,2000000);
  if(!pending)break;
  if(++transitions>25000)throw new Error('Original file host transition limit exceeded');
  const a=registers.slice(0,4).map(r=>cpu.reg_read_i32(r)>>>0);let result;
  if(pending==='progress'){refHost.progress(cpu.reg_read_i32(uc.ARM_REG_R5)>>>0,a[0],a[1]);result=hostRandom();}
  else result=refHost[pending](...a);
  const lr=cpu.reg_read_i32(uc.ARM_REG_LR)>>>0;
  cpu.reg_write_i32(uc.ARM_REG_R0,result|0);
  for(const i of [1,2,3,12])cpu.reg_write_i32(registers[i],hostRandom()|0);
  cpu.reg_write_i32(uc.ARM_REG_CPSR,(hostRandom()&0xf0000000)|0x10|((lr&1)?0x20:0));
  cpu.reg_write_i32(uc.ARM_REG_PC,lr&0xfffffffe);pc=lr;
 }
 assert.equal(cpu.reg_read_i32(uc.ARM_REG_PC)>>>0,end,'Original return');
 assert.equal(cpu.reg_read_i32(uc.ARM_REG_SP)>>>0,sp,'Original stack preservation');
 for(let i=4;i<=11;i++)assert.equal(cpu.reg_read_i32(registers[i])>>>0,incoming[i]>>>0,'Original callee-saved r'+i);
 return cpu.reg_read_i32(uc.ARM_REG_R0)>>>0;
}
function compactMemory(data) {
 const seed=data[0],patches=[];let start=-1;
 for(let i=0;i<=data.length;i++) {
  const changed=i<data.length&&data[i]!==((i*31+(i>>>8)*17+seed)&255);
  if(changed&&start<0)start=i;
  if(!changed&&start>=0){patches.push([start,Buffer.from(data.subarray(start,i)).toString('base64')]);start=-1;}
 }
 return {base:BASE,size:data.length,seed,patches};
}
const describeFiles=host=>[...host.files].map(([handle,f])=>({handle,position:f.position,writable:f.writable,closed:!!f.closed,dataSha256:hash(f.data),bytes:f.data.length}));
function makeFixture(test,entry,expected,expectedState,expectedRegistry,expectedCount,memoryHash) {
 return {id:entry.id,address:entry.address,label:entry.label,case:test.label,args:test.args,memory:compactMemory(test.data),
  state:Buffer.from(test.state).toString('base64'),registry:test.registry,registryTail:test.registryTail,openCount:test.openCount,callbackCounter:test.callbackCounter,
  files:test.files.map(f=>({...f,data:f.asset?undefined:Buffer.from(f.data).toString('base64')})),mask:entry.resultRegisters.length?1:0,expected,
  expectedMemorySha256:memoryHash,expectedStateSha256:hash(expectedState),expectedRegistrySha256:hash(expectedRegistry),expectedOpenCount:expectedCount,
  expectedEvents:structuredClone(refHost.events),expectedFiles:describeFiles(refHost),originalNativeCallbacks:[...actualNativeCallbacks]};
}
const results=[],fixtures=[],assets=[];let comparisons=0,memoryBytesCompared=0,hostCallsCompared=0,nativeCallbacksExecuted=0,memberMetadata;
try {
 for(const entry of manifest.functions.filter(x=>!only||only.has(x.address))) {
  const result={address:entry.address,label:entry.label,cases:0,passed:true};let index=0,last;
  for(const test of resourceCases(entry)) {
   current=test;refHost.clear();nativeHost.clear();
   for(const f of test.files){refHost.createFile(f.data,f);nativeHost.createFile(f.data,f);}
   test.data.set(words(...test.registry.flat()),R);
   const descriptor=words(BASE+R,test.registry.length,...test.registryTail);
   cpu.mem_write(BASE,test.data);cpu.mem_write(context,test.state);cpu.mem_write(registry,descriptor);cpu.mem_write(openCount,words(test.openCount));
   nativeMemory.write(BASE,test.data);nativeMemory.write(nativeContext,test.state);nativeMemory.write(nativeRegistry,descriptor);nativeMemory.write(nativeCount,words(test.openCount));
   let expected,actual;
   try {
    expected=runReference(entry,test.args,0xa11ce5ed^parseInt(entry.address,16)^index);
    const mask=native.resource_invoke(entry.id,test.args[0]??0)>>>0;assert.equal(mask,entry.resultRegisters.length?1:0);
    actual=new DataView(native.memory.buffer).getUint32(native.resource_result_ptr()>>>0,true);
    if(mask)assert.equal(actual,expected,'Original r0 result');else expected=0;
    const memory=cpu.mem_read(BASE,SIZE),state=cpu.mem_read(context,204),reg=cpu.mem_read(registry,16);
    const count=new DataView(Uint8Array.from(cpu.mem_read(openCount,4)).buffer).getUint32(0,true);
    assert.deepEqual(Buffer.from(nativeMemory.read(BASE,SIZE)),Buffer.from(memory),'Arena/table/canary bytes');
    assert.deepEqual(Buffer.from(nativeMemory.read(nativeContext,204)),Buffer.from(state),'Serialization context');
    assert.deepEqual(Buffer.from(nativeMemory.read(nativeRegistry,16)),Buffer.from(reg),'Registry descriptor');
    assert.equal(new DataView(native.memory.buffer).getUint32(nativeCount,true),count,'Open counter');
    assert.deepEqual(nativeHost.events,refHost.events,'Ordered SDK/progress events');
    assert.deepEqual(describeFiles(nativeHost),describeFiles(refHost),'File contents/cursors/closed state');
    result.cases++;comparisons++;memoryBytesCompared+=SIZE+224;hostCallsCompared+=refHost.events.length;nativeCallbacksExecuted+=actualNativeCallbacks.length;
    last=makeFixture(test,entry,expected,state,reg,count,hash(memory));
    if([0,17,97].includes(index)||test.fixture)fixtures.push(last);
    if(test.files[0]?.asset)assets.push({name:test.files[0].asset,bytes:test.files[0].data.length,sha256:hash(test.files[0].data),
     finalPosition:refHost.files.get(7).position,closed:!!refHost.files.get(7).closed,openCount:count,
     chunkSeeks:refHost.events.filter(x=>x.op==='seek').length,originalTraceSha256:hash(JSON.stringify(refHost.events))});
   }catch(error) {
    result.passed=false;result.counterexample={index,case:test.label,args:test.args,expected,actual,error:String(error),referenceEvents:refHost.events,nativeEvents:nativeHost.events};
    console.error('REJECT '+entry.label+' '+JSON.stringify(result.counterexample));break;
   }
   index++;
  }
  if(result.passed&&last&&!fixtures.includes(last))fixtures.push(last);
  results.push(result);console.log(entry.label+': '+(result.passed?'PASS':'FAIL')+' ('+result.cases+' cases)');
 }
 if(!only&&results.every(x=>x.passed)) {
  // A separate connected original-ARM check of the real group-name/flags fields.
  // These reuse two existing serializers; they are not newly recovered entries.
  const data=new Uint8Array(SIZE),state=new Uint8Array(204),v=new DataView(state.buffer);
  state[0]=1;v.setUint32(8,7,true);current={};refHost.clear();nativeHost.clear();
  const bytes=assetBytes('fonts/fonts.group.bin');
  for(const host of [refHost,nativeHost])host.createFile(bytes,{handle:7,position:14,writable:false});
  cpu.mem_write(BASE,data);cpu.mem_write(context,state);cpu.mem_write(registry,words(BASE+R,0,0,0));cpu.mem_write(openCount,words(1));
  nativeMemory.write(BASE,data);nativeMemory.write(nativeContext,state);nativeMemory.write(nativeRegistry,words(BASE+R,0,0,0));nativeMemory.write(nativeCount,words(1));
  const serial=json(path.join(root,'native/serialization/manifest.json'));
  const calls=[{entry:serial.functions.find(e=>e.label==='serial_string'),args:[BASE+A,64,0,0],serial:true},
   {entry:serial.functions.find(e=>e.label==='serial_unsigned32'),args:[BASE+A+64,1,32,4],serial:true},
   {entry:manifest.functions.find(e=>e.label==='resource_close'),args:[],serial:false}];
  for(const [i,call] of calls.entries()) {
   runReference(call.entry,call.args,0x6d656d62^i);
   if(call.serial)native.serial_invoke(call.entry.id,...Array.from({length:5},(_,j)=>call.args[j]??0));else native.resource_invoke(call.entry.id,0);
   assert.deepEqual(Buffer.from(nativeMemory.read(BASE,SIZE)),Buffer.from(cpu.mem_read(BASE,SIZE)),'Real member field arena');
   assert.deepEqual(Buffer.from(nativeMemory.read(nativeContext,204)),Buffer.from(cpu.mem_read(context,204)),'Real member field context');
   assert.deepEqual(Buffer.from(nativeMemory.read(nativeCount,4)),Buffer.from(cpu.mem_read(openCount,4)),'Real member close count');
   assert.deepEqual(nativeHost.events,refHost.events,'Real member field host trace');
   assert.deepEqual(describeFiles(nativeHost),describeFiles(refHost),'Real member file/cursor/closed state');
  }
  const nameBytes=Uint8Array.from(cpu.mem_read(BASE+A,64)),name=new TextDecoder().decode(nameBytes.subarray(0,nameBytes.indexOf(0))),flags=new DataView(Uint8Array.from(cpu.mem_read(BASE+A+64,4)).buffer).getUint32(0,true);
  memberMetadata={status:'Original ARM member-name/flags fields and close matched native execution.',wasmSha256:manifest.wasmSha256,
   originalExecutableSha256:manifest.originalExecutableSha256,asset:'fonts/fonts.group.bin',assetSha256:hash(bytes),fieldOffset:14,
   metadata:{name,flags},callsCompared:calls.length,calls:calls.map(c=>({address:c.entry.address,label:c.entry.label,args:c.args})),
   orderedHostEvents:refHost.events,finalFiles:describeFiles(refHost),scope:'Recovered string/u32 fields and close only. Browser orchestration locates these fields; the original group-member handler and object factory remain unported.'};
  fs.writeFileSync(path.join(folder,'member-verification.json'),JSON.stringify(memberMetadata,null,2)+'\n');
  console.log('Original group member fields: '+JSON.stringify(memberMetadata.metadata)+'; 3 connected native calls matched.');
 }
}finally{cpu.close();}
const report={status:'Recovered resource control flow under controlled file/progress services. Complete object parsers and gameplay remain unfinished.',
 originalExecutableSha256:manifest.originalExecutableSha256,wasmSha256:manifest.wasmSha256,
 reference:'Unmodified original ARM/Thumb game routines; actual original no-argument callback bodies execute through bx r0. External SDK file/progress boundaries bind the shared controlled host; caller-saved registers/flags are randomized there.',
 checked:'Declared r0, original SP/callee-saved registers, every arena/table/canary/context/registry byte, separate open counter, ordered host/progress events and file bytes/cursors/closed state.',
 hostScope:manifest.hostScope,limits:manifest.limits,comparisons,memoryBytesCompared,hostCallsCompared,nativeCallbacksExecuted,
 passedFunctions:results.filter(x=>x.passed).length,failedFunctions:results.filter(x=>!x.passed).length,originalAssetsTraversed:assets.length,assets,memberFieldCallsCompared:memberMetadata?.callsCompared??0,results};
fs.mkdirSync(path.join(root,'analysis-work'),{recursive:true});
fs.writeFileSync(only?path.join(root,'analysis-work/resources-partial.json'):path.join(folder,'verification.json'),JSON.stringify(report,null,2)+'\n');
if(!only&&!report.failedFunctions)fs.writeFileSync(path.join(folder,'browser-fixtures.json'),JSON.stringify({status:report.status,wasmSha256:manifest.wasmSha256,originalExecutableSha256:manifest.originalExecutableSha256,fixtures},null,2)+'\n');
console.log(report.passedFunctions+'/'+results.length+' functions; '+comparisons+' comparisons; '+hostCallsCompared+' events; '+assets.length+' original resources.');
if(report.failedFunctions)process.exitCode=1;

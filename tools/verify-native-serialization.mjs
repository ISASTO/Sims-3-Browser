// Original ARM control flow versus recovered native serialization. The two
// sides use the same explicitly scoped memory-file host contract. The original
// game functions execute without instruction patches or substituted game code.
import fs from 'node:fs';
import path from 'node:path';
import crypto from 'node:crypto';
import assert from 'node:assert/strict';
import {createRequire} from 'node:module';
import {fileURLToPath} from 'node:url';
import {createMemoryHost} from '../native/serialization/host.js';
import {BASE,SIZE,cases,rng} from './native-serialization-cases.mjs';
const require=createRequire(import.meta.url),root=fileURLToPath(new URL('../',import.meta.url));
const folder=path.join(root,'native/serialization'),json=p=>JSON.parse(fs.readFileSync(p,'utf8'));
const hash=b=>crypto.createHash('sha256').update(b).digest('hex');
const onlyArg=process.argv.indexOf('--only'),only=onlyArg<0?null:new Set(process.argv[onlyArg+1].split(','));
const linkedResources=process.argv.includes('--linked-resources');
const baseline=json(path.join(folder,'manifest.json')),linked=linkedResources?json(path.join(root,'native/resources/manifest.json')):null;
const manifest=linked?{...baseline,wasmSha256:linked.wasmSha256,sourceFiles:{...baseline.sourceFiles,...linked.sourceFiles}}:baseline;
if(linked){assert.equal(hash(fs.readFileSync(path.join(root,'native/resources/contracts.json'))),linked.contractsSha256);assert.equal(linked.linkedComponents.find(x=>x.path==='native/serialization').wasmSha256,baseline.wasmSha256);}
const original=fs.readFileSync(path.join(root,'recovered/game.s3e'));
const wasm=fs.readFileSync(linked?path.join(root,'native/resources/sims3-resources.wasm'):path.join(folder,'sims3-serialization.wasm'));
assert.equal(hash(wasm),manifest.wasmSha256);assert.equal(hash(original),manifest.originalExecutableSha256);
assert.deepEqual(original,fs.readFileSync(path.join(root,'web/game.s3e')));
assert.equal(hash(fs.readFileSync(path.join(folder,'contracts.json'))),manifest.contractsSha256);
for(const [name,sha] of Object.entries(manifest.sourceFiles))assert.equal(hash(fs.readFileSync(path.join(root,name))),sha,name);
const uc=await require(path.join(root,'web/vendor/unicorn.cjs'))(),cpu=new uc.Unicorn(uc.ARCH_ARM,uc.MODE_ARM);
const header=json(path.join(root,'recovered/s3e-header.json'));
const bindings=json(path.join(root,'recovered/native/analysis-input.json')).imports.filter(x=>['s3eFileRead','s3eFileWrite'].includes(x.name));
assert.equal(bindings.length,2);
const end=0x0d000000,sp=0x0e0fff00,context=parseInt(manifest.context.originalAddress,16);
cpu.mem_map(header.originalBase,Math.ceil(header.codeMemSize/4096)*4096,uc.PROT_ALL);
cpu.mem_write(header.originalBase,original.subarray(header.codeOffset,header.codeOffset+header.codeFileSize));
cpu.mem_map(BASE,SIZE,uc.PROT_ALL);cpu.mem_map(0x0e000000,0x100000,uc.PROT_ALL);cpu.mem_map(end,0x4000,uc.PROT_ALL);
const registers=Array.from({length:13},(_,i)=>uc['ARM_REG_R'+i]);
let current,pending,hostRandom=rng(1);
function patchCounter(memory,address){if(current.callbackCounter!==undefined){const v=Buffer.alloc(4);v.writeUInt32LE(current.callbackCounter>>>0);memory.write(address+0xac,v);}}
const referenceMemory={read:(a,n)=>cpu.mem_read(a,n),write:(a,b)=>cpu.mem_write(a,b)};
const refHost=createMemoryHost(referenceMemory,{onProgress:()=>patchCounter(referenceMemory,context)});
let native;
const nativeMemory={read:(a,n)=>new Uint8Array(native.memory.buffer,a,n),write:(a,b)=>new Uint8Array(native.memory.buffer,a,b.length).set(b)};
const nativeHost=createMemoryHost(nativeMemory,{onProgress:()=>patchCounter(nativeMemory,native.serial_state_ptr()>>>0)});
const extra=linked?Object.fromEntries(['tell','seek','close'].map(name=>[name,()=>{throw new Error('Serializer unexpectedly called '+name);}])):{};
native=(await WebAssembly.instantiate(wasm,{s3e:{read:nativeHost.read,write:nativeHost.write,...extra},bridge:{progress:nativeHost.progress}})).instance.exports;
const nativeContext=native.serial_state_ptr()>>>0;
assert.ok(native.serial_heap_base()<=BASE,'Comparison arena overlaps native data or stack');
for(const binding of bindings)cpu.hook_add(uc.HOOK_CODE,()=>{pending=binding.name;cpu.emu_stop();},null,binding.arm,binding.arm);
for(const address of [end+0x1000,end+0x2000])cpu.hook_add(uc.HOOK_CODE,()=>{pending='callback';cpu.emu_stop();},null,address,address);

function runReference(entry,args,seed){
 const random=rng(seed),incoming=registers.map((_,i)=>i<Math.min(args.length,4)?args[i]:random());
 cpu.reg_write_i32(uc.ARM_REG_CPSR,(random()&0xf0000000)|0x10);
 for(let i=0;i<13;i++)cpu.reg_write_i32(registers[i],incoming[i]|0);
 cpu.reg_write_i32(uc.ARM_REG_SP,sp);cpu.reg_write_i32(uc.ARM_REG_LR,end);
 const stackWords=Buffer.alloc(16);for(let i=0;i<4;i++)stackWords.writeUInt32LE(i===0&&args.length===5?args[4]>>>0:random(),i*4);
 cpu.mem_write(sp,stackWords);let pc=parseInt(entry.address,16)|(entry.thumb?1:0),transitions=0;
 hostRandom=rng(seed^0x686f7374);
 for(;;){
  pending=null;cpu.emu_start(pc,end,0,2000000);
  if(!pending)break;
  if(++transitions>10000)throw new Error('Original host/callback transition limit exceeded');
  const a=registers.slice(0,4).map(r=>cpu.reg_read_i32(r)>>>0);
  let result;
  if(pending==='s3eFileRead')result=refHost.read(...a);
  else if(pending==='s3eFileWrite')result=refHost.write(...a);
  else {refHost.progress(cpu.reg_read_i32(uc.ARM_REG_R5)>>>0,a[0],a[1]);result=hostRandom();}
  const lr=cpu.reg_read_i32(uc.ARM_REG_LR)>>>0;
  cpu.reg_write_i32(uc.ARM_REG_R0,result|0);
  for(const i of [1,2,3,12])cpu.reg_write_i32(registers[i],hostRandom()|0);
  cpu.reg_write_i32(uc.ARM_REG_CPSR,(hostRandom()&0xf0000000)|0x10|((lr&1)?0x20:0));
  cpu.reg_write_i32(uc.ARM_REG_PC,lr&0xfffffffe);pc=lr;
 }
 assert.equal(cpu.reg_read_i32(uc.ARM_REG_PC)>>>0,end,'Original did not return');
 assert.equal(cpu.reg_read_i32(uc.ARM_REG_SP)>>>0,sp,'Original stack preservation');
 for(let i=4;i<=11;i++)assert.equal(cpu.reg_read_i32(registers[i])>>>0,incoming[i]>>>0,'Original callee-saved r'+i);
 return registers.slice(0,2).map(r=>cpu.reg_read_i32(r)>>>0);
}
function compactMemory(data){
 const seed=data[0],patches=[];let start=-1;
 for(let i=0;i<=data.length;i++){
  const changed=i<data.length&&data[i]!==((i*31+(i>>>8)*17+seed)&255);
  if(changed&&start<0)start=i;
  if(!changed&&start>=0){patches.push([start,Buffer.from(data.subarray(start,i)).toString('base64')]);start=-1;}
 }
 return{base:BASE,size:data.length,seed,patches};
}
function describeFiles(host){return [...host.files].map(([handle,f])=>({handle,position:f.position,writable:f.writable,dataSha256:hash(f.data),bytes:f.data.length}));}
function fixture(test,entry,expected,expectedMemory,expectedState){return{
 id:entry.id,address:entry.address,label:entry.label,case:test.label,args:test.args,
 memory:compactMemory(test.data),state:Buffer.from(test.state).toString('base64'),callbackCounter:test.callbackCounter,
 files:test.files.map(f=>({...f,data:f.asset?undefined:Buffer.from(f.data).toString('base64')})),
 expected,mask:entry.resultRegisters.reduce((m,r)=>m|(1<<Number(r.slice(1))),0),
 expectedMemorySha256:hash(expectedMemory),expectedStateSha256:hash(expectedState),expectedEvents:structuredClone(refHost.events),expectedFiles:describeFiles(refHost)};}

const results=[],fixtures=[];let comparisons=0,memoryBytesCompared=0,hostCallsCompared=0;
try{
 for(const entry of manifest.functions.filter(x=>!only||only.has(x.address))){
  const result={address:entry.address,label:entry.label,cases:0,passed:true};let index=0,last,chosen=-1;
  for(const test of cases(entry)){
   current=test;refHost.clear();nativeHost.clear();
   for(const f of test.files){refHost.createFile(f.data,f);nativeHost.createFile(f.data,f);}
   cpu.mem_write(BASE,test.data);cpu.mem_write(context,test.state);
   new Uint8Array(native.memory.buffer,BASE,SIZE).set(test.data);new Uint8Array(native.memory.buffer,nativeContext,204).set(test.state);
   let expected,actual;
   try{
    expected=runReference(entry,test.args,0x5eeda11^parseInt(entry.address,16)^index);
    const mask=native.serial_invoke(entry.id,...Array.from({length:5},(_,i)=>test.args[i]??0))>>>0;
    const expectedMask=entry.resultRegisters.reduce((m,r)=>m|(1<<Number(r.slice(1))),0);
    assert.equal(mask,expectedMask);
    const view=new DataView(native.memory.buffer,native.serial_result_ptr()>>>0,8);actual=[view.getUint32(0,true),view.getUint32(4,true)];
    for(let i=0;i<2;i++)if(mask&(1<<i))assert.equal(actual[i],expected[i],'Result r'+i);
    const expectedMemory=cpu.mem_read(BASE,SIZE),expectedState=cpu.mem_read(context,204);
    assert.deepEqual(Buffer.from(nativeMemory.read(BASE,SIZE)),Buffer.from(expectedMemory),'Arena bytes including canaries');
    assert.deepEqual(Buffer.from(nativeMemory.read(nativeContext,204)),Buffer.from(expectedState),'Relocated serialization context');
    assert.deepEqual(nativeHost.events,refHost.events,'Ordered host/callback call trace');
    assert.deepEqual(describeFiles(nativeHost),describeFiles(refHost),'Stream contents, cursors and writable state');
    result.cases++;comparisons++;memoryBytesCompared+=SIZE+204;hostCallsCompared+=refHost.events.length;
    expected=expected.map((x,i)=>mask&(1<<i)?x:0);
    if([0,17,97].includes(index)||test.fixture){fixtures.push(fixture(test,entry,expected,expectedMemory,expectedState));chosen=index;}
    last={test,expected,memoryHash:hash(expectedMemory),stateHash:hash(expectedState),events:structuredClone(refHost.events),files:describeFiles(refHost)};
   }catch(error){
    result.passed=false;result.counterexample={index,case:test.label,args:test.args,expected,actual,error:String(error),referenceEvents:refHost.events,nativeEvents:nativeHost.events};
    console.error('REJECT '+entry.label+' '+JSON.stringify({...result.counterexample,referenceEvents:refHost.events.slice(0,4),nativeEvents:nativeHost.events.slice(0,4)}));break;
   }
   index++;
  }
  if(result.passed&&last&&chosen!==index-1){
   const f=fixture(last.test,entry,last.expected,new Uint8Array(),new Uint8Array());
   f.expectedMemorySha256=last.memoryHash;f.expectedStateSha256=last.stateHash;f.expectedEvents=last.events;f.expectedFiles=last.files;fixtures.push(f);
  }
  results.push(result);console.log(entry.label+': '+(result.passed?'PASS':'FAIL')+' ('+result.cases+' cases)');
 }
}finally{cpu.close();}
const report={status:'Recovered serialization components only. Original ARM control flow is compared under an explicitly controlled memory-file/callback host.',
 originalExecutableSha256:manifest.originalExecutableSha256,wasmSha256:manifest.wasmSha256,
 reference:'Unmodified original ARM/Thumb functions with real register/stack calling conventions; SDK read/write and callback boundaries bind controlled memory-file services. Caller-saved registers/flags are randomized across those boundaries.',
 checked:'Declared result words, original SP/callee-saved registers, every arena/canary/context byte, ordered host/callback traces, file content hashes and cursor positions.',
 hostScope:manifest.hostScope,limits:manifest.limits,comparisons,memoryBytesCompared,hostCallsCompared,
 passedFunctions:results.filter(x=>x.passed).length,failedFunctions:results.filter(x=>!x.passed).length,results};
if(only)report.scope='Partial diagnostic run: '+[...only].join(',');
fs.mkdirSync(path.join(root,'analysis-work'),{recursive:true});
if(linked)report.linkedResourceModule=true;
fs.writeFileSync(only?path.join(root,'analysis-work/'+(linked?'linked-serialization-partial.json':'serialization-partial.json')):
 linked?path.join(root,'native/resources/linked-serialization-verification.json'):path.join(folder,'verification.json'),JSON.stringify(report,null,2)+'\n');
if(!only&&!linked&&!report.failedFunctions)fs.writeFileSync(path.join(folder,'browser-fixtures.json'),JSON.stringify({status:report.status,wasmSha256:manifest.wasmSha256,originalExecutableSha256:manifest.originalExecutableSha256,hostScope:manifest.hostScope,fixtures},null,2)+'\n');
console.log(report.passedFunctions+'/'+results.length+' functions; '+comparisons+' comparisons; '+hostCallsCompared+' host/callback events matched.');
if(report.failedFunctions)process.exitCode=1;

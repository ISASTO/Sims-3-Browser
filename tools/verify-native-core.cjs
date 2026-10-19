// Differential checks of native components against the unmodified ARM image.
// This development oracle is not imported by the browser's native Wasm module.
const fs=require('node:fs'),path=require('node:path'),crypto=require('node:crypto');
const assert=require('node:assert/strict');
const {BASE,SIZE,cases,rng}=require('./native-core-cases.cjs');
const root=path.resolve(__dirname,'..'),folder=path.join(root,'native/core');
const hash=data=>crypto.createHash('sha256').update(data).digest('hex');
const readJson=name=>JSON.parse(fs.readFileSync(name));
const onlyIndex=process.argv.indexOf('--only');
const only=onlyIndex<0?null:new Set(process.argv[onlyIndex+1].split(','));

function inputPattern(data) {
  const seed=data[0],patches=[];
  let start=-1;
  for(let i=0;i<=data.length;i++) {
    const differs=i<data.length && data[i]!==((i*31+(i>>>8)*17+seed)&255);
    if(differs&&start<0)start=i;
    if(!differs&&start>=0){patches.push([start,Buffer.from(data.subarray(start,i)).toString('base64')]);start=-1;}
  }
  return {base:BASE,size:data.length,seed,patches};
}

(async()=>{
  const manifest=readJson(path.join(folder,'manifest.json'));
  const wasm=fs.readFileSync(path.join(folder,'sims3-core.wasm'));
  const original=fs.readFileSync(path.join(root,'recovered/game.s3e'));
  assert.equal(hash(wasm),manifest.wasmSha256);
  assert.equal(hash(original),manifest.originalExecutableSha256);
  assert.deepEqual(original,fs.readFileSync(path.join(root,'web/game.s3e')));
  assert.equal(hash(fs.readFileSync(path.join(folder,'contracts.json'))),manifest.contractsSha256);
  for(const [file,sha] of Object.entries(manifest.sourceFiles))assert.equal(hash(fs.readFileSync(path.join(root,file))),sha,file);
  const module=await WebAssembly.compile(wasm);
  assert.deepEqual(WebAssembly.Module.imports(module),[]);
  const {exports:native}=await WebAssembly.instantiate(module);
  const output=native.core_result_ptr()>>>0;
  assert.ok(native.core_heap_base()<=BASE,'Test arena must be above native data and stack');
  const uc=await require(path.join(root,'web/vendor/unicorn.cjs'))();
  const cpu=new uc.Unicorn(uc.ARCH_ARM,uc.MODE_ARM);
  const header=readJson(path.join(root,'recovered/s3e-header.json'));
  const stack=0x0e000000,stackSize=0x100000,sentinel=0x0d000000;
  cpu.mem_map(header.originalBase,Math.ceil(header.codeMemSize/4096)*4096,uc.PROT_ALL);
  cpu.mem_write(header.originalBase,original.subarray(header.codeOffset,header.codeOffset+header.codeFileSize));
  cpu.mem_map(BASE,SIZE,uc.PROT_ALL);cpu.mem_map(stack,stackSize,uc.PROT_ALL);cpu.mem_map(sentinel,4096,uc.PROT_ALL);
  const pathState=manifest.pathState,rootAddress=parseInt(pathState.rootAddress,16),nativeRoot=native.core_path_root()>>>0;
  for(const region of manifest.dataRegions) {
    const address=parseInt(region.address,16),offset=header.codeOffset+address-header.originalBase;
    assert.equal(hash(original.subarray(offset,offset+region.length)),region.sha256,'Pinned original data region');
  }
  assert.deepEqual(Buffer.from(new Uint8Array(native.memory.buffer,nativeRoot,pathState.rootCapacity)),Buffer.from(cpu.mem_read(rootAddress,pathState.rootCapacity)),'Relocated initial directory prefix');
  // Recover the original C-locale table address by executing its initializer,
  // then perform the pointer assignment from original runtime initialization.
  cpu.reg_write_i32(uc.ARM_REG_CPSR,0x10);cpu.reg_write_i32(uc.ARM_REG_R0,0);cpu.reg_write_i32(uc.ARM_REG_R1,0);
  cpu.reg_write_i32(uc.ARM_REG_SP,stack+stackSize-0x100);cpu.reg_write_i32(uc.ARM_REG_LR,sentinel);
  cpu.emu_start(0x4a005b99,sentinel,0,100000);
  assert.equal(cpu.reg_read_i32(uc.ARM_REG_PC),sentinel,'Original C locale initializer returned');
  assert.equal(cpu.reg_read_i32(uc.ARM_REG_R0)>>>0,parseInt(pathState.ctypeTableStart,16));
  const localePointer=Buffer.alloc(4);localePointer.writeUInt32LE(parseInt(pathState.ctypeTableStart,16)+pathState.ctypePointerOffset);
  cpu.mem_write(parseInt(pathState.localePointerAddress,16),localePointer);
  const registers=Array.from({length:13},(_,i)=>uc['ARM_REG_R'+i]);
  const results=[],fixtures=[];
  let comparisons=0,memoryBytesCompared=0;
  try {
    for(const entry of manifest.functions.filter(entry=>!only||only.has(entry.address))) {
      const random=rng(0x72656773^parseInt(entry.address,16)),mask=entry.resultRegisters.reduce((m,r)=>m|(1<<Number(r.slice(1))),0);
      const result={address:entry.address,label:entry.label,passed:true,cases:0,resultRegisters:entry.resultRegisters,memoryBytesCompared:0};
      let lastFixture=null,index=0;
      for(const test of cases(entry)) {
        const incoming=registers.map((_,i)=>i<test.args.length?test.args[i]:random());
        let expected,actual;
        try {
          cpu.reg_write_i32(uc.ARM_REG_CPSR,(random()&0xf0000000)|0x10);
          for(let i=0;i<registers.length;i++)cpu.reg_write_i32(registers[i],incoming[i]|0);
          cpu.reg_write_i32(uc.ARM_REG_SP,stack+stackSize-0x100);cpu.reg_write_i32(uc.ARM_REG_LR,sentinel);
          if(test.data) {
            cpu.mem_write(BASE,test.data);
            new Uint8Array(native.memory.buffer,BASE,test.data.length).set(test.data);
          }
          if(test.pathRoot) {
            cpu.mem_write(rootAddress,test.pathRoot);
            new Uint8Array(native.memory.buffer,nativeRoot,pathState.rootCapacity).set(test.pathRoot);
          }
          cpu.emu_start(parseInt(entry.address,16)|(entry.thumb?1:0),sentinel,0,2500000);
          assert.equal(cpu.reg_read_i32(uc.ARM_REG_PC),sentinel,'Reference did not return');
          assert.equal(cpu.reg_read_i32(uc.ARM_REG_SP),stack+stackSize-0x100,'Original stack contract');
          for(let i=4;i<=11;i++)assert.equal(cpu.reg_read_i32(registers[i])>>>0,incoming[i]>>>0,'Callee-saved r'+i);
          expected=registers.slice(0,4).map(reg=>cpu.reg_read_i32(reg)>>>0);
          const actualMask=native.core_invoke(entry.id,...Array.from({length:4},(_,i)=>test.args[i]||0))>>>0;
          assert.equal(actualMask,mask,'Native gateway result mask');
          const view=new DataView(native.memory.buffer);
          actual=[0,1,2,3].map(i=>view.getUint32(output+i*4,true));
          for(let i=0;i<4;i++)if(mask&(1<<i))assert.equal(actual[i],expected[i],'Result r'+i);
          let expectedMemory;
          if(test.data) {
            expectedMemory=cpu.mem_read(BASE,test.data.length);
            const actualMemory=new Uint8Array(native.memory.buffer,BASE,test.data.length);
            let changed=-1;
            for(let i=0;i<test.data.length;i++)if(actualMemory[i]!==expectedMemory[i]){changed=i;break;}
            if(changed>=0)throw new Error('Memory mismatch at arena offset 0x'+changed.toString(16)+': expected '+expectedMemory[changed]+' got '+actualMemory[changed]);
            result.memoryBytesCompared+=test.data.length;memoryBytesCompared+=test.data.length;
          }
          const expectedRoot=test.pathRoot?cpu.mem_read(rootAddress,pathState.rootCapacity):null;
          if(expectedRoot)assert.deepEqual(Buffer.from(new Uint8Array(native.memory.buffer,nativeRoot,pathState.rootCapacity)),Buffer.from(expectedRoot),'Relocated directory prefix memory');
          result.cases++;comparisons++;
          if(index===0||index===17||index===97||(entry.suite==='move'&&test.args[0]===test.args[1]&&test.args[2]===1)) {
            fixtures.push({id:entry.id,address:entry.address,label:entry.label,case:test.label,args:test.args,mask,
              expected:expected.map((v,i)=>(mask&(1<<i))?v:0),memory:test.data?inputPattern(test.data):null,
              expectedMemorySha256:expectedMemory?hash(expectedMemory):null,
              ...(test.pathRoot?{pathRoot:Array.from(test.pathRoot),expectedPathRootSha256:hash(expectedRoot)}:{})});
          }
          // Keep only one full last fixture; compact its original input on demand.
          lastFixture={test,expected:expected.map((v,i)=>(mask&(1<<i))?v:0),memoryHash:expectedMemory?hash(expectedMemory):null,rootHash:expectedRoot?hash(expectedRoot):null};
        } catch(error) {
          result.passed=false;result.counterexample={case:test.label,args:test.args,expected,actual,error:String(error)};
          if(test.data)result.counterexample.input=inputPattern(test.data);
          if(test.pathRoot)result.counterexample.pathRoot=Array.from(test.pathRoot);
          console.error('REJECT '+entry.label+' '+JSON.stringify({...result.counterexample,input:undefined}));
          break;
        }
        index++;
      }
      if(result.passed&&lastFixture) {
        const {test,expected,memoryHash,rootHash}=lastFixture;
        fixtures.push({id:entry.id,address:entry.address,label:entry.label,case:test.label,args:test.args,mask,expected,
          memory:test.data?inputPattern(test.data):null,expectedMemorySha256:memoryHash,
          ...(test.pathRoot?{pathRoot:Array.from(test.pathRoot),expectedPathRootSha256:rootHash}:{})});
      }
      results.push(result);
      console.log(entry.label+': '+(result.passed?'PASS':'FAIL')+' ('+result.cases+' cases)');
    }
  } finally {cpu.close();}
  const report={status:'Native core components only; whole-game behavior and exhaustive equivalence remain unverified.',
    originalExecutableSha256:manifest.originalExecutableSha256,wasmSha256:manifest.wasmSha256,
    reference:'Unmodified ARM executable executed with Unicorn.js 1.0.3; randomized incoming flags and non-argument registers.',
    checked:'All declared result registers, original callee-saved registers/stack, every byte of each allocated test arena including canaries, and relocated directory-prefix state where used.',
    corpus:'ARM shifts and integer boundaries; alignment, overlap, copy/zero-padding, UTF-16, exhaustive single-byte comparisons; default C-locale bytes/EOF, bounded path operations, URI/drive/dot/parent/case/truncation rules, changed global prefixes and all 736 resource-manifest paths.',
    pathScope:pathState.scope,
    exceptionLimit:'Division by zero follows an unported original exception path and is excluded from equivalence tests. The native component traps; the JS wrapper rejects it.',
    passedFunctions:results.filter(x=>x.passed).length,failedFunctions:results.filter(x=>!x.passed).length,
    comparisons,memoryBytesCompared,results};
  if(only)report.scope='Partial diagnostic run: '+[...only].join(',');
  fs.writeFileSync(only?path.join(root,'analysis-work/core-partial.json'):path.join(folder,'verification.json'),JSON.stringify(report,null,2)+'\n');
  if(!only&&!report.failedFunctions)fs.writeFileSync(path.join(folder,'browser-fixtures.json'),JSON.stringify({
    status:'Original ARM oracle outputs for browser component validation; not whole-game validation.',
    originalExecutableSha256:manifest.originalExecutableSha256,wasmSha256:manifest.wasmSha256,fixtures},null,2)+'\n');
  console.log(report.passedFunctions+'/'+results.length+' functions passed; '+comparisons+' comparisons; '+memoryBytesCompared+' memory bytes compared.');
  if(report.failedFunctions)process.exitCode=1;
})().catch(error=>{console.error(error);process.exitCode=1;});

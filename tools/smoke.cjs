const fs=require('node:fs');
const path=require('node:path');
const base=path.resolve(__dirname,'../web');
const MUnicorn=require(path.join(base,'vendor/unicorn.cjs'));
const SimsRuntime=require(path.join(base,'runtime.js'));
(async()=>{
  const uc=await MUnicorn();
  const manifest=JSON.parse(fs.readFileSync(path.join(base,'manifest.json')));
  const load=name=>new Uint8Array(Buffer.concat(manifest.webAssets[name].parts.map(p=>fs.readFileSync(path.join(base,p)))));
  const runtime=new SimsRuntime(uc,new Uint8Array(fs.readFileSync(path.join(base,'game.s3e'))),
    manifest,process.env.LAZY?null:new Uint8Array(fs.readFileSync(path.join(base,'assets.pack'))),
    {log:console.log,loadedAssets:[['app.icf',load('app.icf')],['s3e.icf',load('s3e.icf')]]});
  const start=performance.now(),max=Number(process.argv[2]||20)*1000;
  let blocks=0;
  const trace=[];
  if(process.env.TRACE)runtime.e.hook_add(uc.HOOK_CODE,(_,address,size)=>{
    trace.push([Number(address).toString(16),size,runtime.r(13).toString(16)]);if(trace.length>40)trace.shift();
  });
  try {
    let pending=0;
    while(performance.now()-start<max){
      try{if(!runtime.step(Number(process.env.BLOCK||1000000)))break;blocks++;}
      catch(e){if(!e.assetName)throw e;if(pending++<15)console.log('PENDING',e.assetName,'already',runtime.loadedAssets.has(e.assetName),'pc',runtime.r(15).toString(16),'lr',runtime.r(14).toString(16));runtime.loadedAssets.set(e.assetName,load(e.assetName));runtime.error=null;}
    }
    console.log('RESULT',JSON.stringify({blocks,frames:runtime.frames,elapsedMs:performance.now()-start,pc:'0x'+runtime.r(15).toString(16),heap:runtime.nextAllocation-0x10000000,quit:runtime.quit,counts:runtime.counts}));
  }catch(error){
    console.error('STOP',String(error));
    console.log('TRACE',JSON.stringify(trace),'CPSR',runtime.e.reg_read_i32(uc.ARM_REG_CPSR).toString(16));
    fs.writeFileSync(path.join(base,'../recovered/crash-code.bin'),runtime.read(runtime.h.originalBase,Math.ceil(runtime.h.codeMemSize/4096)*4096));
    fs.writeFileSync(path.join(base,'../recovered/crash-stack.bin'),runtime.read(0xe000000,0x200000));
    console.log('RESULT',JSON.stringify({blocks,frames:runtime.frames,pc:'0x'+runtime.r(15).toString(16),lr:'0x'+runtime.r(14).toString(16),registers:Array.from({length:16},(_,i)=>'0x'+runtime.r(i).toString(16)),heap:runtime.nextAllocation-0x10000000,counts:runtime.counts}));process.exitCode=1;
  }
})();

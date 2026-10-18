const assert=require('node:assert/strict'),fs=require('node:fs'),path=require('node:path'),crypto=require('node:crypto');
const base=path.resolve(__dirname,'../web'),manifest=JSON.parse(fs.readFileSync(path.join(base,'manifest.json')));
function load(name){return new Uint8Array(Buffer.concat(manifest.webAssets[name].parts.map(p=>fs.readFileSync(path.join(base,p)))));}
for(const [name,entry] of Object.entries(manifest.webAssets)){
  const raw=load(name);assert.equal(raw.length,entry.size,name+' size');
  assert.equal(crypto.createHash('sha256').update(raw).digest('hex'),entry.sha256,name+' checksum');
}
console.log('All '+Object.keys(manifest.webAssets).length+' resource entries passed length/checksum verification.');
const M=require(path.join(base,'vendor/unicorn.cjs')),Runtime=require(path.join(base,'runtime.js'));
(async()=>{
 const uc=await M(),rt=new Runtime(uc,new Uint8Array(fs.readFileSync(path.join(base,'game.s3e'))),manifest,null,
   {loadedAssets:[['app.icf',load('app.icf')],['s3e.icf',load('s3e.icf')]]});
 // A real ARM callback adds one, writes through its argument, and returns.
 rt.write(0xd000100,new Uint8Array([1,0,0x80,0xe2,0,0,0x81,0xe5,0x1e,0xff,0x2f,0xe1]));
 const out=rt.alloc(4),before=Array.from({length:16},(_,i)=>rt.r(i));
 rt.callGuest(0xd000100,[41,out]);assert.equal(rt.u32(out),42);assert.deepEqual(Array.from({length:16},(_,i)=>rt.r(i)),before);
 // A callback calls the real imported FileOpen entry. Fetch suspension must
 // preserve the callback and then restore the interrupted game registers.
 const words=[0xe92d4010,0xe1a04002,0xe59fc010,0xe1a0e00f,0xe12fff1c,0xe5840000,0xe8bd4010,0xe12fff1e,0x4a0006bc];
 const code=new Uint8Array(words.length*4),v=new DataView(code.buffer);words.forEach((word,i)=>v.setUint32(i*4,word,true));rt.write(0xd000200,code);
 rt.beginGuest({fn:0xd000200,args:[rt.string('images/splash_sims.png'),rt.string('rb'),out]});
 let suspended=false;
 while(rt.activeCallback){
   try{rt.step(10000);}catch(error){assert.equal(error.assetName,'images/splash_sims.png');assert.ok(rt.activeCallback);suspended=true;rt.loadedAssets.set(error.assetName,load(error.assetName));rt.error=null;}
 }
 assert.ok(suspended);assert.equal(rt.files.get(rt.u32(out)).bytes.length,52395);
 assert.deepEqual(Array.from({length:16},(_,i)=>rt.r(i)),before);
 console.log('ARM callback execution, asset suspension, resumption, and register restoration passed.');
})().catch(error=>{console.error(error);process.exitCode=1;});

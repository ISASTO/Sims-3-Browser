const hash=async bytes=>Array.from(new Uint8Array(await crypto.subtle.digest('SHA-256',bytes)),x=>x.toString(16).padStart(2,'0')).join('');
const decode=value=>Uint8Array.from(atob(value),c=>c.charCodeAt(0));
const equal=(a,b)=>JSON.stringify(a)===JSON.stringify(b);
function requireResult(ok,message){if(!ok)throw new Error(message);}

export async function runSerializationFixtures(core,corpus,onProgress=()=>{}) {
  requireResult(corpus.wasmSha256===core.manifest.wasmSha256,'Fixture/module versions differ');
  requireResult(corpus.originalExecutableSha256===core.manifest.originalExecutableSha256,'Fixtures reference another game executable');
  let current,passed=0;const covered=new Set();
  const previous=core.setProgressHandler((event,{memory,stateAddress})=>{
    if(current.callbackCounter!==undefined)new DataView(memory.buffer,stateAddress,204).setUint32(0xac,current.callbackCounter,true);
  });
  try {
    for(const fixture of corpus.fixtures) {
      current=fixture;core.host.clear();
      for(const file of fixture.files) {
        if(file.asset)await core.openAsset(file.asset,file);
        else core.host.createFile(decode(file.data),file);
      }
      const {base,size,seed,patches}=fixture.memory,data=new Uint8Array(core.memory.buffer,base,size);
      for(let i=0;i<size;i++)data[i]=(i*31+(i>>>8)*17+seed)&255;
      for(const [offset,encoded] of patches)data.set(decode(encoded),offset);
      new Uint8Array(core.memory.buffer,core.stateAddress,204).set(decode(fixture.state));
      const result=core.invoke(fixture.address,fixture.args);
      requireResult(result.mask===fixture.mask,fixture.label+': result mask');
      for(let i=0;i<2;i++)if(fixture.mask&(1<<i))requireResult(result.words[i]===fixture.expected[i],fixture.label+': result r'+i);
      requireResult(await hash(new Uint8Array(core.memory.buffer,base,size))===fixture.expectedMemorySha256,fixture.label+': arena/canary bytes');
      requireResult(await hash(new Uint8Array(core.memory.buffer,core.stateAddress,204))===fixture.expectedStateSha256,fixture.label+': relocated context bytes');
      requireResult(equal(core.host.events,fixture.expectedEvents),fixture.label+': host/callback trace');
      const files=[];
      for(const [handle,f] of core.host.files)files.push({handle,position:f.position,writable:f.writable,dataSha256:await hash(f.data),bytes:f.data.length});
      requireResult(equal(files,fixture.expectedFiles),fixture.label+': file contents/cursors');
      covered.add(fixture.address);passed++;
      onProgress({passed,total:corpus.fixtures.length,functions:covered.size,label:fixture.label});
    }
  }finally{core.setProgressHandler(previous);}
  return{passed,total:corpus.fixtures.length,functions:covered.size};
}

// A real committed resource goes through native pathname resolution, verified
// HTTP asset loading, recovered header/field I/O, and a complete byte roundtrip.
// This checks stream integration; it does not parse or render the whole font.
export async function runFontRoundtrip(core) {
  const previous=core.setProgressHandler(undefined);
  try {
    core.host.clear();core.resetArena();
    const asset=await core.openAsset('Fonts/./Fonts.Group.Bin');
    const state=new Uint8Array(core.memory.buffer,core.stateAddress,204);state.fill(0);
    let view=new DataView(core.memory.buffer,core.stateAddress,204);view.setUint8(0,1);view.setUint32(8,asset.handle,true);
    requireResult(core.invoke('serial_resource_header',[]).words[0]===1,'Native resource header did not return');
    const version=view.getUint32(0xc0,true),extra=view.getUint16(0xc4,true),headerBytes=core.host.files.get(asset.handle).position;
    requireResult(version===0x030606&&extra===0&&headerBytes===6,'Original font header mismatch');
    const remaining=asset.size-headerBytes,buffer=core.allocate(remaining);
    core.invoke('serial_read_strided',[buffer,1,remaining,1,core.stateAddress]);
    const output=core.host.createFile([]);
    view=new DataView(core.memory.buffer,core.stateAddress,204);view.setUint8(0,0);view.setUint32(8,output,true);
    core.invoke('serial_resource_header',[]);
    core.invoke('serial_write_strided',[buffer,1,remaining,1,core.stateAddress]);
    const bytes=core.host.files.get(output).data;
    requireResult(bytes.length===asset.size&&await hash(bytes)===asset.sha256,'Native original-resource byte roundtrip failed');
    return{name:asset.name,bytes:asset.size,sha256:asset.sha256,version:'3.6.6',headerExtra:extra,headerBytes,
      note:'Complete resource-byte transfer through recovered stream code; full font parsing/rendering remains unported.'};
  }finally{core.setProgressHandler(previous);}
}

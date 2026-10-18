// Source entry point. The browser loads worker.bundle.js, built with
// python tools/build_worker.py, which includes the emulator and its dependencies.
let runtime,paused=false,manifest,loadedBytes=0,lastReport=0,lastSave=0,savePending=null;
const log=text=>postMessage({type:'log',text});
async function bytes(url){const response=await fetch(url);if(!response.ok)throw Error('Could not load '+url+' (HTTP '+response.status+'). Check that the entire project was extracted.');return new Uint8Array(await response.arrayBuffer());}
async function resource(name){
  const entry=manifest.webAssets[name];if(!entry)throw Error('Missing asset entry: '+name);
  const chunks=await Promise.all(entry.parts.map(bytes));
  const out=new Uint8Array(entry.size);let pos=0;for(const chunk of chunks){out.set(chunk,pos);pos+=chunk.length;}
  if(pos!==out.length)throw Error('Incomplete game resource');
  const digest=await crypto.subtle.digest('SHA-256',out);
  const hash=Array.from(new Uint8Array(digest),b=>b.toString(16).padStart(2,'0')).join('');
  if(hash!==entry.sha256)throw Error('Game resource checksum failed');
  loadedBytes+=out.length;return out;
}
async function start(message){
  try{
    postMessage({type:'status',text:'Preparing the original game…'});
    manifest=JSON.parse(new TextDecoder().decode(await bytes('manifest.json')));
    const [uc,executable,globalConfig,appConfig]=await Promise.all([
      MUnicorn({locateFile:path=>new URL('vendor/'+path,self.location.href).href,print:log,printErr:log}),
      bytes('game.s3e'),resource('s3e.icf'),resource('app.icf')]);
    const graphics=new SimsGraphics(message.canvas,log);
    runtime=new SimsRuntime(uc,executable,manifest,null,{
      loadedAssets:[['s3e.icf',globalConfig],['app.icf',appConfig]],saves:message.saves,
      graphics,log,save:saves=>{savePending=Array.from(saves,([name,data])=>[name,data]);},
      audio:audio=>postMessage({type:'audio',audio})
    });
    postMessage({type:'status',text:'Loading game data. First startup can take 1–2 minutes…'});
    while(!runtime.quit){
      if(!paused){
        try{runtime.step(160000);}catch(error){
          if(error instanceof PendingAsset){
            const raw=await resource(error.assetName);runtime.loadedAssets.set(error.assetName,raw);runtime.error=null;
          }else throw error;
        }
      }
      const now=performance.now();
      if(now-lastReport>1000){postMessage({type:'stats',frames:runtime.frames,draws:graphics.draws,downloaded:loadedBytes,heap:runtime.nextAllocation-0x10000000});lastReport=now;}
      if(savePending&&now-lastSave>1000){postMessage({type:'save',saves:savePending});savePending=null;lastSave=now;}
      await new Promise(resolve=>setTimeout(resolve,0));
    }
    postMessage({type:'status',text:'The game has closed. Reload to start again.'});
  }catch(error){postMessage({type:'error',text:error.message||String(error)});log(error.stack||String(error));}
}
onmessage=event=>{
  const message=event.data;
  if(message.type==='start')start(message);
  if(message.type==='pointer'&&runtime)runtime.pointerEvent(message.x,message.y,message.down);
  if(message.type==='motion'&&runtime)runtime.pointerMotion(message.x,message.y);
  if(message.type==='pause')paused=message.paused;
};

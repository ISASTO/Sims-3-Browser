/* Experimental Marmalade ARMv4T compatibility layer. Original game code runs
 * in Unicorn; this file supplies host services. No gameplay is re-created here.
 */
(function(root) {
'use strict';
const compression=root.fflate || (typeof require==='function'?require('./vendor/fflate.js'):null);
class PendingAsset extends Error {constructor(name){super('Loading game data');this.assetName=name;}}
class SimsRuntime {
  constructor(uc, executable, manifest, pack, options={}) {
    this.uc=uc; this.h=manifest.header; this.pack=pack; this.assets=manifest.assets;this.webAssets=manifest.webAssets||{};this.loadedAssets=new Map(options.loadedAssets||[]);
    this.log=options.log || (()=>{}); this.graphics=options.graphics;
    this.e=new uc.Unicorn(uc.ARCH_ARM,uc.MODE_ARM);
    this.counts={}; this.files=new Map(); this.saved=new Map(options.saves||[]); this.nextFile=1;
    this.pendingCallbacks=[];this.onAudio=options.audio||(()=>{});this.onSave=options.save||(()=>{});
    this.allocations=new Map(); this.freeBins=new Map(); this.nextAllocation=0x10000000; this.heapLimit=0x18000000;
    this.heaps=new Map(); this.config={}; this.callbacks={}; this.timerEvents=[];
    this.started=performance.now(); this.virtualTime=0; this.frames=0; this.glIds=1;
    this.quit=false; this.error=null; this.stopped=false; this.pointer={x:240,y:160,down:0};
    this.regs=Array.from({length:13},(_,i)=>uc['ARM_REG_R'+i]);
    this.regs.push(uc.ARM_REG_SP,uc.ARM_REG_LR,uc.ARM_REG_PC);
    this.e.mem_map(this.h.originalBase,Math.ceil(this.h.codeMemSize/4096)*4096,uc.PROT_ALL);
    this.e.mem_map(0x0e000000,0x200000,uc.PROT_ALL);
    this.e.mem_map(0x10000000,0x8000000,uc.PROT_ALL);
    this.e.mem_map(0x0d000000,0x10000,uc.PROT_ALL);
    const code=executable.slice(this.h.codeOffset,this.h.codeOffset+this.h.codeFileSize);
    const view=new DataView(code.buffer,code.byteOffset,code.byteLength);
    this.importAt=new Map(); this.symbolAddresses={};
    for(const r of this.h.externalRelocations) {
      const name=this.h.symbols[r.symbol];
      if(view.getUint32(r.offset,true)!==0xeafffffe) throw Error('Unsupported import relocation at '+r.offset);
      view.setUint32(r.offset,0xef000000|r.symbol,true);
      this.importAt.set(this.h.originalBase+r.offset,name);
      this.symbolAddresses[name]=this.h.originalBase+r.offset-4;
    }
    this.e.mem_write(this.h.originalBase,code);
    this.e.reg_write_i32(uc.ARM_REG_SP,0x0e1ffff0);
    this.e.reg_write_i32(uc.ARM_REG_R10,0x0e000100);
    this.e.reg_write_i32(uc.ARM_REG_LR,0x0d000000);
    this.e.reg_write_i32(uc.ARM_REG_PC,this.h.originalBase+this.h.entryOffset);
    this.e.hook_add(uc.HOOK_INTR,(_,intno)=>this.interrupt(intno));
    this.e.hook_add(uc.HOOK_MEM_UNMAPPED,(_,type,address,size)=>{
      this.error=Error(`Unmapped ARM memory ${type} at 0x${Number(address).toString(16)}, size ${size}, PC=0x${this.r(15).toString(16)}`);
      return false;
    });
    this.strings=new Map();
    this.parseConfig('s3e.icf'); this.parseConfig('app.icf');
    this.log('Mapped original ARM game; '+this.h.symbols.length+' imported services.');
  }
  r(i) {return this.e.reg_read_i32(this.regs[i])>>>0;}
  w(i,v) {this.e.reg_write_i32(this.regs[i],v|0);}
  read(p,n) {if(!n)return new Uint8Array();return new Uint8Array(this.e.mem_read(p,n));}
  write(p,b) {if(b.length)this.e.mem_write(p,b);}
  u32(p) {const b=this.read(p,4);return new DataView(b.buffer).getUint32(0,true);}
  put32(p,v) {const b=new Uint8Array(4);new DataView(b.buffer).setUint32(0,v>>>0,true);this.write(p,b);}
  str(p,max=4096) {
    if(!p)return '';
    const bytes=[];
    for(let off=0;off<max;off+=64) {
      const b=this.read(p+off,Math.min(64,max-off));
      for(const c of b){if(!c)return new TextDecoder('windows-1252').decode(new Uint8Array(bytes));bytes.push(c);}
    }
    return new TextDecoder().decode(new Uint8Array(bytes));
  }
  alloc(n) {
    n=Math.max(n,1);const size=2**Math.ceil(Math.log2(Math.max(16,n)));
    const bin=this.freeBins.get(size);
    if(bin?.length){const p=bin.pop();this.allocations.set(p,size);return p;}
    const p=this.nextAllocation;
    this.nextAllocation=p+size;
    if(this.nextAllocation>this.heapLimit)throw Error('Guest heap exhausted');
    this.allocations.set(p,size);return p;
  }
  free(p) {const size=this.allocations.get(p);if(!size)return;this.allocations.delete(p);if(!this.freeBins.has(size))this.freeBins.set(size,[]);this.freeBins.get(size).push(p);}
  string(s) {
    if(this.strings.has(s))return this.strings.get(s);
    const b=new TextEncoder().encode(s+'\0'),p=this.alloc(b.length);
    this.write(p,b);this.strings.set(s,p);return p;
  }
  arg(i) {return i<4?this.r(i):this.u32(this.r(13)+(i-4)*4);}
  normalized(name) {return name.replace(/\\/g,'/').replace(/^(?:rom:|assets\/)/i,'').replace(/^\/+/, '').toLowerCase();}
  asset(name) {
    name=this.normalized(name);
    if(this.saved.has(name))return this.saved.get(name);
    const entry=this.assets[name];
    if(this.pack&&entry)return this.pack.subarray(entry[0],entry[0]+entry[1]);
    if(this.loadedAssets.has(name))return this.loadedAssets.get(name);
    if(this.webAssets[name])throw new PendingAsset(name);
    return null;
  }
  parseConfig(name) {
    const raw=this.asset(name);if(!raw)return;
    let section='',active=true;
    for(let line of new TextDecoder('windows-1252').decode(raw).split(/\r?\n/)) {
      line=line.split('#')[0].trim();
      if(line[0]==='{'){active=line==='{}'||/OS=ANDROID/.test(line);continue;}
      const h=line.match(/^\[([^\]]+)\]/);if(h){section=h[1].toLowerCase();continue;}
      const m=line.match(/^([^=]+)=(.*)$/);
      if(active&&m)this.config[section+'.'+m[1].trim().toLowerCase()]=m[2].trim().replace(/^"|"$/g,'');
    }
  }
  fileOpen(name,mode) {
    const norm=this.normalized(name);let bytes=this.asset(name);
    if(mode.includes('w'))bytes=new Uint8Array();
    if(bytes===null&&mode.includes('a'))bytes=new Uint8Array();
    if(bytes===null){this.log('Missing file: '+name);return 0;}
    const id=this.nextFile++;this.files.set(id,{name:norm,bytes,pos:mode.includes('a')?bytes.length:0,eof:false,write:/[wa+]/.test(mode)});
    if((this.counts.s3eFileOpen||0)<40)this.log('Open '+name+' ('+bytes.length+' bytes)');
    return id;
  }
  interrupt(intno) {
    try {
      if(intno!==2)throw Error('Unsupported ARM interrupt '+intno);
      const pc=this.r(15)-4,name=this.importAt.get(pc);
      if(!name)throw Error('Unexpected supervisor call at 0x'+pc.toString(16));
      this.counts[name]=(this.counts[name]||0)+1;
      const a=Array.from({length:4},(_,i)=>this.r(i));
      if(this.counts[name]===1&&!name.startsWith('gl'))this.log(name+'('+a.map(x=>'0x'+x.toString(16)).join(', ')+')');
      const ret=this.service(name,a);
      if(Array.isArray(ret)){this.w(0,ret[0]);this.w(1,ret[1]);}
      else if(ret!==undefined)this.w(0,ret);
      this.w(15,this.r(14));
    } catch(error) {if(error instanceof PendingAsset)error.resumePC=this.r(15)-4;this.error=error;this.e.emu_stop();}
  }
  service(name,a) {
    const [x,y,z,t]=a;
    switch(name) {
    case 's3eMallocBase': return this.alloc(x);
    case 's3eReallocBase': {if(x&&(this.allocations.get(x)||0)>=y)return x;const p=this.alloc(y);if(x)this.write(p,this.read(x,Math.min(y,this.allocations.get(x)||0)));this.free(x);return p;}
    case 's3eFreeBase':this.free(x);return 0;
    case 's3eMemorySetUserMemMgr': return 0;
    case 's3eMemoryHeapCreate': return 0;
    case 's3eMemoryGetInt': return 64*1024*1024;
    case 's3eMemorySetInt': return 0;
    case 's3eConfigGetInt':
    case 's3eConfigGetString': {
      const key=this.str(x).toLowerCase()+'.'+this.str(y).toLowerCase();
      const value=this.config[key];
      if(value===undefined)return 1;
      if(name.endsWith('Int')) {const v=Number(value);if(!Number.isFinite(v))return 1;this.put32(z,v);}
      else this.write(z,new TextEncoder().encode(value+'\0'));
      return 0;
    }
    case 's3eDeviceGetInt': return x===0?0x12:x===10?0x00080101:0;
    case 's3eDeviceGetString': return this.string(({0:'Android',2:'Browser',8:'ARMv4T',13:'4.1.2',31:'en',20:'en_US'})[x]||'');
    case 's3eDeviceCheckQuitRequest': return this.quit?1:0;
    case 's3eDeviceRequestQuit':this.quit=true;return 0;
    case 's3eDeviceExit': this.quit=true;this.e.emu_stop();return 0;
    case 's3eDeviceYield':
    case 's3eDeviceYieldUntilEvent': this.virtualTime+=Math.max(1,x|0);this.e.emu_stop();return [this.virtualTime,0];
    case 's3eTimerGetMs': return [Math.floor(performance.now()-this.started+this.virtualTime),0];
    case 's3eTimerGetLocaltimeOffset':return [0,0];
    case 's3eTimerSetTimer': this.timerEvents.push({at:performance.now()+this.virtualTime+x,fn:y,data:z});return this.timerEvents.length;
    case 's3eFileOpen': return this.fileOpen(this.str(x),this.str(y));
    case 's3eFileOpenFromMemory': {const id=this.nextFile++;this.files.set(id,{name:'memory',bytes:this.read(x,y),pos:0,eof:false});return id;}
    case 's3eFileClose': {const f=this.files.get(x);if(f?.write){this.saved.set(f.name,f.bytes);this.onSave(this.saved);}this.files.delete(x);return f?0:-1;}
    case 's3eFileRead': {const f=this.files.get(t);if(!f||!y)return 0;const n=Math.min(y*z,Math.max(0,f.bytes.length-f.pos));const full=Math.floor(n/y);this.write(x,f.bytes.subarray(f.pos,f.pos+full*y));f.pos+=full*y;f.eof=full<z;return full;}
    case 's3eFileWrite': {const f=this.files.get(t);if(!f||!f.write)return 0;const n=y*z;const b=new Uint8Array(Math.max(f.bytes.length,f.pos+n));b.set(f.bytes);b.set(this.read(x,n),f.pos);f.bytes=b;f.pos+=n;this.saved.set(f.name,b);return z;}
    case 's3eFileSeek': {const f=this.files.get(x);if(!f)return -1;const p=(z===0?0:z===1?f.pos:f.bytes.length)+(y|0);if(p<0)return -1;f.pos=p;f.eof=false;return 0;}
    case 's3eFileTell': return this.files.get(x)?.pos??-1;
    case 's3eFileGetSize': return this.files.get(x)?.bytes.length??-1;
    case 's3eFileEOF': return this.files.get(x)?.eof?1:0;
    case 's3eFileGetChar': {const f=this.files.get(x);if(!f||f.pos>=f.bytes.length){if(f)f.eof=true;return -1;}return f.bytes[f.pos++];}
    case 's3eFileCheckExists': {const n=this.normalized(this.str(x));return this.saved.has(n)||!!this.assets[n]||!!this.webAssets[n]?1:0;}
    case 's3eFileGetFileInt':{const n=this.normalized(this.str(x));return [y===4?(this.saved.get(n)?.length??this.assets[n]?.[1]??this.webAssets[n]?.size??0):0,0];}
    case 's3eFileGetError':return 2;
    case 's3eFileMakeDirectory':
    case 's3eFileAddUserFileSys': return 0;
    case 's3eSurfaceGetInt':return ({0:480,1:320,2:480*4,3:4,4:480,5:320})[x]||0;
    case 's3eGLGetInt':return ({0:480,1:320,2:2})[x]||0;
    case 's3eSurfacePtr':if(!this.surface)this.surface=this.alloc(480*320*4);return this.surface;
    case 's3eGLGetNativeWindow':if(!this.windowPtr){this.windowPtr=this.alloc(8);this.put32(this.windowPtr,480|(320<<16));}return this.windowPtr;
    case 's3ePointerGetX':return this.pointer.x;
    case 's3ePointerGetY':return this.pointer.y;
    case 's3ePointerUpdate':return 0;
    case 's3ePointerRegister':this.callbacks['pointer'+x]={fn:y,data:z};return 0;
    case 's3eExtGetHash':this.log('Extension request 0x'+x.toString(16)+' ('+z+' bytes)');return 1;
    case 's3eDebugPrint':
    case 's3eDebugOutputString':this.log('Game: '+this.str(x));return 0;
    case 's3eDebugAssertShow':
    case 's3eDebugErrorShow':throw Error(name+': '+a.filter(v=>v>0x10000000).map(v=>{try{return this.str(v,512);}catch{return '0x'+v.toString(16);}}).join(' | '));
    case 's3eDebugGetInt':
    case 's3eDebugIsDebuggerPresent':return 0;
    case 's3eAudioIsCodecSupported':return 1;
    case 's3eAudioPlay':{const name=this.str(x),bytes=this.asset(name);if(!bytes)return 1;this.onAudio({action:'play',name,bytes,repeats:y});this.audioPlaying=true;return 0;}
    case 's3eAudioStop':this.onAudio({action:'stop'});this.audioPlaying=false;return 0;
    case 's3eAudioPause':this.onAudio({action:'pause'});return 0;
    case 's3eAudioResume':this.onAudio({action:'resume'});return 0;
    case 's3eAudioGetInt':return x===0?100:x===1?(this.audioPlaying?1:0):(x===6||x===9)?1:0;
    case 's3eSoundGetFreeChannel':return -1;
    case 's3eSoundGetInt':return 0;
    case 's3eAccelerometerGetInt':return 0;
    case 's3eAccelerometerGetX':
    case 's3eAccelerometerGetY':
    case 's3eAccelerometerGetZ':return 0;
    case 's3eAccelerometerStart':return 1;
    case 's3eAccelerometerStop':return 0;
    case 's3eCompressionDecomp': {
      const src=this.read(x,y),dest=this.u32(z),capacity=this.u32(t);
      let out;
      if(src[0]===31&&src[1]===139)out=compression.gunzipSync(src);
      else if((src[0]&15)===8&&((src[0]*256+src[1])%31)===0)out=compression.unzlibSync(src);
      else out=compression.inflateSync(src);
      if(!dest||out.length>capacity)throw Error('Invalid decompression destination/capacity');
      this.write(dest,out);this.put32(t,out.length);return 0;
    }
    case 's3eCompressionDecompInit': {
      if(!this.inflaters)this.inflaters=new Map();
      const id=this.alloc(4);let stream;
      stream=new compression.Unzlib((out)=>{stream.output=out;});
      this.inflaters.set(id,stream);return id;
    }
    case 's3eCompressionDecompRead': {
      const stream=this.inflaters?.get(x),outLen=this.arg(4);if(!stream)return -1;
      stream.output=new Uint8Array();stream.push(this.read(y,z),false);
      if(stream.output.length>this.u32(outLen))throw Error('Streaming decompression buffer exceeded');
      this.write(t,stream.output);this.put32(outLen,stream.output.length);return 0;
    }
    case 's3eCompressionDecompFinal':this.inflaters?.delete(x);return 0;
    }
    if(/^(s3eDeviceRegister|s3eDeviceUnRegister|s3eSurfaceRegister|s3eSurfaceUnRegister|s3eSurfaceSetup|s3eSurfaceShow|s3eGLRegister|s3eGLUnRegister|s3eKeyboardRegister|s3eKeyboardSetInt|s3eSocketClose|s3eAudioPause|s3eAudioResume|s3eAudioStop|s3eAudioSetInt|s3eSoundChannelSetInt|s3eSoundChannelStop|s3eSoundChannelUnRegister)$/.test(name))return 0;
    if(name.startsWith('gl')||name.startsWith('egl'))return this.gl(name,a);
    throw Error('Unimplemented host function '+name+' at guest LR=0x'+this.r(14).toString(16));
  }
  pointerEvent(x,y,down){
    this.pointer={x:Math.round(x),y:Math.round(y),down:down?1:0};
    const p=this.alloc(16);
    this.put32(p,0);this.put32(p+4,down?1:0);this.put32(p+8,this.pointer.x);this.put32(p+12,this.pointer.y);
    const cb=this.callbacks.pointer0;if(cb)this.pendingCallbacks.push({fn:cb.fn,args:[p,cb.data],free:p});else this.free(p);
  }
  pointerMotion(x,y){this.pointer.x=Math.round(x);this.pointer.y=Math.round(y);const cb=this.callbacks.pointer1;if(cb){const p=this.alloc(8);this.put32(p,this.pointer.x);this.put32(p+4,this.pointer.y);this.pendingCallbacks.push({fn:cb.fn,args:[p,cb.data],free:p});}}
  callGuest(fn,args){
    this.beginGuest({fn,args});
    while(this.activeCallback)this.runGuest(1000000);
  }
  beginGuest(callback){
    if(this.activeCallback)throw Error('Nested guest callback was not scheduled');
    // Unicorn.js 1.0.3 does not implement its context API. This game targets
    // ARMv4T without VFP, so save the general registers and CPSR explicitly.
    this.activeCallback={callback,registers:Array.from({length:16},(_,i)=>this.r(i)),
      status:this.e.reg_read_i32(this.uc.ARM_REG_CPSR),instructions:0};
    callback.args.forEach((v,i)=>this.w(i,v));this.w(14,0x0d000000);this.w(15,callback.fn);
  }
  runGuest(instructions){
    const state=this.activeCallback;
    const cpsr=this.e.reg_read_i32(this.uc.ARM_REG_CPSR),pc=this.r(15)|((cpsr&32)?1:0);
    this.e.emu_start(pc,0x0d000000,0,instructions);
    if(this.error){if(this.error.resumePC)this.w(15,this.error.resumePC);throw this.error;}
    state.instructions+=instructions;
    if(state.instructions>500000000)throw Error('Guest callback exceeded its execution budget');
    if(this.r(15)===0x0d000000){
      const {status,registers,callback}=state;
      this.e.reg_write_i32(this.uc.ARM_REG_CPSR,status);
      for(let i=0;i<15;i++)this.w(i,registers[i]);
      this.w(15,registers[15]|((status&32)?1:0));
      if(callback.free)this.free(callback.free);
      this.activeCallback=null;
    }
  }
  gl(name,a) {
    if(this.graphics)return this.graphics.call(name,a,this);
    const [x,y,z,t]=a;
    if(name==='eglSwapBuffers'){this.frames++;this.e.emu_stop();return 1;}
    if(name==='eglGetError')return 0x3000;
    if(name==='eglGetProcAddress')return this.symbolAddresses[this.str(x)]||0;
    if(name==='eglGetConfigs'){if(t)this.put32(t,1);if(y&&z)this.put32(y,1);return 1;}
    if(name==='eglGetConfigAttrib'){this.put32(t,({0x3040:4,0x3024:8,0x3023:8,0x3022:8,0x3021:8,0x3025:24,0x3026:8,0x3033:4})[z]||0);return 1;}
    if(name==='eglInitialize'){if(y)this.put32(y,1);if(z)this.put32(z,4);return 1;}
    if(name==='eglQueryContext'){if(t)this.put32(t,z===0x3098?2:1);return 1;}
    if(name.startsWith('egl'))return 1;
    if(name==='glGetString')return this.string(({0x1f00:'Browser',0x1f01:'WebGL ARM bridge',0x1f02:'OpenGL ES 2.0',0x1f03:''})[x]||'');
    if(name==='glGetError')return 0;
    if(name==='glGetIntegerv'){this.put32(y,({0xd33:2048,0x8872:8,0x8869:8,0xd56:24,0xd57:8,0xd55:8,0xd54:8,0xd53:8,0xd52:8,0xd31:8})[x]||0);return 0;}
    if(name.startsWith('glGen')){for(let i=0;i<x;i++)this.put32(y+4*i,this.glIds++);return 0;}
    if(name==='glCreateShader'||name==='glCreateProgram')return this.glIds++;
    if(name==='glGetShaderiv'||name==='glGetProgramiv'){this.put32(z,1);return 0;}
    if(name==='glGetUniformLocation'||name==='glGetAttribLocation')return this.glIds++;
    return 0;
  }
  step(instructions=1000000) {
    if(this.error){if(this.error.resumePC)this.w(15,this.error.resumePC);throw this.error;}
    if(this.quit)return false;
    if(this.activeCallback){this.runGuest(instructions);return true;}
    const now=performance.now()+this.virtualTime;
    for(const event of this.timerEvents)if(event&&event.at<=now){this.pendingCallbacks.push({fn:event.fn,args:[0,event.data]});event.at=Infinity;}
    if(this.pendingCallbacks.length){this.beginGuest(this.pendingCallbacks.shift());this.runGuest(instructions);return true;}
    const cpsr=this.e.reg_read_i32(this.uc.ARM_REG_CPSR);
    const pc=this.r(15)|((cpsr&32)?1:0);
    try{this.e.emu_start(pc,0x0d000000,0,instructions);}catch(error){if(error?.stack)this.log(error.stack);throw this.error||Error(String(error));}
    if(this.error){if(this.error.resumePC)this.w(15,this.error.resumePC);throw this.error;}
    if(this.r(15)===0x0d000000){this.quit=true;this.log('Original game entry returned.');return false;}
    return true;
  }
}
root.SimsRuntime=SimsRuntime;
root.PendingAsset=PendingAsset;
if(typeof module!=='undefined')module.exports=SimsRuntime;
})(typeof globalThis!=='undefined'?globalThis:this);

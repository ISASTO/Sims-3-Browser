// Controlled synchronous memory-file services for the recovered serializer.
// This adapter is also used by the original-ARM development oracle. Its host
// semantics are explicit test contracts, not a claim of complete SDK recovery.
const hex=bytes=>Array.from(bytes,x=>x.toString(16).padStart(2,'0')).join('');

export function createMemoryHost(memory,options={}) {
  const files=new Map(),events=[];
  function createFile(bytes,settings={}) {
    const id=settings.handle??(Math.max(0,...files.keys())+1);
    if(!Number.isInteger(id)||id<1||id>0xffffffff||files.has(id))throw new RangeError('Invalid or duplicate memory-file handle');
    const data=Uint8Array.from(bytes);
    const position=settings.position??0;
    if(!Number.isSafeInteger(position)||position<0)throw new RangeError('Invalid file position');
    const file={data,position,writable:settings.writable!==false,
      readLimit:settings.readLimit??null,writeLimit:settings.writeLimit??null};
    for(const limit of [file.readLimit,file.writeLimit])if(limit!==null&&(!Number.isSafeInteger(limit)||limit<0))throw new RangeError('Invalid transfer limit');
    files.set(id,file);return id;
  }
  function transfer(op,address,size,count,id) {
    address>>>=0;size>>>=0;count>>>=0;id>>>=0;
    const file=files.get(id),requested=size*count;
    let result=0xffffffff,bytes=new Uint8Array();
    if(file&&Number.isSafeInteger(requested)&&requested<=0x1000000&&(op==='read'||file.writable)) {
      const limit=op==='read'?file.readLimit:file.writeLimit;
      const n=Math.min(requested,limit??requested,op==='read'?Math.max(0,file.data.length-file.position):requested);
      if(op==='read') {
        bytes=file.data.slice(file.position,file.position+n);
        if(n)memory.write(address,bytes);
      } else {
        bytes=n?Uint8Array.from(memory.read(address,n)):new Uint8Array();
        if(n) {
          if(file.position+n>file.data.length) {
            const expanded=new Uint8Array(file.position+n);expanded.set(file.data);file.data=expanded;
          }
          file.data.set(bytes,file.position);
        }
      }
      file.position+=n;result=size?Math.floor(n/size):0;
    }
    events.push({op,size,count,handle:id,bytes:hex(bytes),result:result>>>0});
    return result|0;
  }
  function progress(callback,combined,remainder) {
    const event={op:'progress',callback:callback>>>0,combined:combined>>>0,remainder:remainder>>>0};
    events.push(event);options.onProgress?.(event);
  }
  return {files,events,createFile,clear(){files.clear();events.length=0;},
    read:(...args)=>transfer('read',...args),write:(...args)=>transfer('write',...args),progress};
}

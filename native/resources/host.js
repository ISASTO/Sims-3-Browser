// Browser memory-file model shared by Wasm and the ARM development oracle.
// This explicitly defines adapter semantics, not every original SDK behavior.
import {createMemoryHost} from '../serialization/host.js';
export function createResourceHost(memory,options={}) {
  const base=createMemoryHost(memory,options);
  const {files,events}=base;
  function transfer(op,address,size,count,handle) {
    if(files.get(handle>>>0)?.closed) {
      events.push({op,size:size>>>0,count:count>>>0,handle:handle>>>0,bytes:'',result:0xffffffff});
      return -1;
    }
    return base[op](address,size,count,handle);
  }
  function tell(handle) {
    handle>>>=0;const f=files.get(handle),result=f&&!f.closed?f.position:0xffffffff;
    events.push({op:'tell',handle,result:result>>>0});return result|0;
  }
  function seek(handle,offset,origin) {
    handle>>>=0;offset|=0;origin>>>=0;
    const f=files.get(handle);let result=0xffffffff;
    if(f&&!f.closed&&origin<=2) {
      const position=(origin===0?0:origin===1?f.position:f.data.length)+offset;
      if(Number.isSafeInteger(position)&&position>=0&&position<=0x1000000){f.position=position;result=0;}
    }
    events.push({op:'seek',handle,offset,origin,result:result>>>0});return result|0;
  }
  function close(handle) {
    handle>>>=0;const f=files.get(handle),result=f&&!f.closed?0:0xffffffff;
    if(!result)f.closed=true;
    events.push({op:'close',handle,result});return result|0;
  }
  return {...base,createFile(bytes,settings={}) {
    const id=base.createFile(bytes,settings);if(settings.closed)files.get(id).closed=true;return id;
  },read:(...a)=>transfer('read',...a),write:(...a)=>transfer('write',...a),tell,seek,close};
}

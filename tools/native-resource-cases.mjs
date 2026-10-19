// Inputs only. Expected results and traces are recorded from original ARM.
import fs from 'node:fs';
import {fileURLToPath} from 'node:url';
import {rng,pattern} from './native-serialization-cases.mjs';
export {rng};
export const BASE=0x20000,SIZE=0x6000,A=0x400,R=0x5000;
const root=fileURLToPath(new URL('../',import.meta.url));
const mapping=JSON.parse(fs.readFileSync(root+'web/manifest.json')).webAssets;
export const words=(...values)=>Uint8Array.from(values.flatMap(v=>[v&255,v>>>8&255,v>>>16&255,v>>>24&255]));
const join=(...parts)=>Uint8Array.from(parts.flatMap(p=>Array.from(p)));
const header=Uint8Array.from([0x3d,3,6,6,0,0]);
const chunk=(type,payload)=>join(words(type,4+payload.length),payload);
const boundaries=[0,1,2,15,255,0x7fffffff,0x80000000,0xfffffffe,0xffffffff];
function input(seed,reading=true) {
 const random=rng(seed),data=pattern(SIZE,random()),state=pattern(204,random()),view=new DataView(state.buffer);
 state[0]=reading?1:0;view.setUint32(8,7,true);view.setUint32(0xac,random(),true);
 view.setUint32(0xb0,7,true);view.setUint32(0xbc,seed&1,true);view.setUint32(0xc8,seed&2?0x0d001001:0,true);
 return {args:[],data,state,registry:[],registryTail:[random(),random()],openCount:random(),
  files:[{handle:7,data:Uint8Array.from([0,0,0,0]),position:0}],label:'',...(seed%3===0?{callbackCounter:5}:{})};
}
export function assetBytes(name) {return Uint8Array.from(Buffer.concat(mapping[name].parts.map(p=>fs.readFileSync(root+'web/'+p))));}
// This structural filter only selects valid bounded inputs. It supplies no
// expected native output, type labels, cursor traces, return words or hashes.
export function resourceInputNames() {
 return Object.keys(mapping).filter(name=>name.endsWith('.group.bin')).filter(name=>{
  const b=assetBytes(name);if(b.length<8||b[0]!==0x3d)return false;
  let p=((b[1]<<16|b[2]<<8|b[3])>=0x30102)?6:4;
  for(let n=0;n<4096&&p+4<=b.length;n++) {
   const v=new DataView(b.buffer,b.byteOffset+p),type=v.getUint32(0,true);
   if(!type)return p+4===b.length;
   if(p+8>b.length)return false;
   const length=v.getUint32(4,true);if(length<4||p+4+length>b.length)return false;
   p+=4+length;
  }
  return false;
 });
}
export function* resourceCases(entry) {
 const random=rng(0x7265736f^parseInt(entry.address,16));
 if(entry.suite==='hash') {
  const strings=JSON.parse(fs.readFileSync(root+'recovered/native/strings.json'));
  for(const {value} of strings) {
   const b=new TextEncoder().encode(value);if(b.length>SIZE-A-8)continue;
   const t=input(random());t.data.set(join(b,[0]),A);t.args=[BASE+A];t.label='original native string type/name hash';
   t.fixture=['ResGroupMembers','ResGroupResources','CIwGxFont','fonts'].includes(value);yield t;
  }
  for(let n=0;n<1024;n++) {
   const t=input(random()),count=n%257,b=Uint8Array.from({length:count},()=>1+random()%255);
   t.data.set(join(b,[0]),A);t.args=[BASE+A];t.label='ASCII case and unsigned high-byte hash';yield t;
  }
  return;
 }
 if(entry.suite==='close') {
  for(const reading of [false,true])for(const slow of [0,1,0xffffffff])for(const count of boundaries)
  for(const valid of [false,true])for(const closed of [false,true]) {
   const t=input(random(),reading),v=new DataView(t.state.buffer);v.setUint32(0xbc,slow,true);
   if(!valid)v.setUint32(8,0xabcdef01,true);
   t.openCount=count;t.files[0].closed=closed;t.label='flush byte, failed/repeated close and wrapping open count';yield t;
  }
  return;
 }
 if(entry.suite==='dispatch'||entry.suite==='next') {
  const callbacks=[0,0x4a04e90d,0x4a04d7bd,0x4a0399a1,0x4a03989f,0x4a046725];
  for(const reading of [false,true])for(const callback of callbacks)for(const position of [0,7,31])
  for(const slow of [0,1])for(const variant of [0,1,2,3,4])for(const prefix of [false,true]) {
   const t=input(random(),reading),v=new DataView(t.state.buffer);v.setUint32(0xbc,slow,true);
   let payload=callback===0x4a04d7bd?chunk(0x12345678,Uint8Array.from([7,8,9])):
    callback===0x4a046725?join(header,words(0)):header;
   let type=variant===4?0:0x55667788;
   // The two different callbacks prove duplicate hashes choose the first pair.
   if(callback)t.registry=variant===0?[[type,callback]]:variant===1?[[9,0x4a04e90d],[type,callback]]:
    variant===2?[[type,callback],[type,callback===0x4a04e90d?0x4a04d7bd:0x4a04e90d]]:
    [[9,callback]];
   const declared=payload.length+4+(prefix?11:0);
   const fields=entry.suite==='dispatch'?join(words(declared),payload):join(words(type,declared),payload);
   t.files[0].data=join(pattern(position,0x11),fields,words(0),pattern(32,0x44));t.files[0].position=position;
   t.args=entry.suite==='dispatch'?[type]:[];
   t.label='matched/unmatched, first duplicate, nested native callback and length patch';
   t.fixture=position===7&&slow===0&&variant<4&&!prefix;yield t;
  }
  if(entry.suite==='dispatch')for(const length of boundaries)for(const position of [0,4,12]) {
   const t=input(random());t.args=[0x11223344];t.files[0].data=join(pattern(position,3),words(length),pattern(24,9));
   t.files[0].position=position;t.label='unknown length, wrapped or rejected absolute seek';yield t;
  }
  if(entry.suite==='next')for(const n of [0,1,2,3,4]) {
   const t=input(random());t.files[0].data=new Uint8Array(n);t.label='zero-initialized type at EOF or short zero terminator';yield t;
  }
  return;
 }
 if(entry.suite==='file') {
  for(let n=0;n<128;n++)for(const reading of [false,true]) {
   const t=input(random(),reading),chunks=[];
   for(let i=0;i<n%17;i++)chunks.push(chunk(0x1000+i,pattern(random()%40,random())));
   t.files[0].data=join(header,...chunks,words(0));t.label='complete original header/chunk/close loop';yield t;
  }
  for(const name of resourceInputNames()) {
   const t=input(random());t.files[0]={handle:7,data:assetBytes(name),position:0,writable:false,asset:name};
   t.openCount=1;t.label='actual original resource: '+name;
   t.fixture=['fonts/fonts.group.bin','fonts/fonts_japan.group.bin'].includes(name);yield t;
  }
 }
}

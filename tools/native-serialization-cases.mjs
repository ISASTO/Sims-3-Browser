// Inputs only. Expected outputs are recorded by original ARM execution with
// controlled file/callback host services, never computed by these generators.
import fs from 'node:fs';
import {fileURLToPath} from 'node:url';
export const BASE=0x20000,SIZE=0x4000,A=0x400,C=0x3000;
export function rng(seed){let x=seed>>>0;return()=>{x^=x<<13;x^=x>>>17;x^=x<<5;return x>>>0;};}
export function pattern(n,seed){return Uint8Array.from({length:n},(_,i)=>(i*31+(i>>>8)*17+seed)&255);}
function input(seed,reading,count=16,slow=0,callback=false){
  const next=rng(seed||1),data=pattern(SIZE,next()),state=pattern(204,next()),view=new DataView(state.buffer);
  state[0]=reading?1:0;view.setUint32(8,7,true);view.setUint32(0xac,next(),true);
  view.setUint32(0xb0,[1,7,16,127,0x80000001,0xffffffff][next()%6],true);
  view.setUint32(0xbc,slow,true);view.setUint32(0xc8,callback?(seed&1?0x0d001001:0x0d002000):0,true);
  new DataView(data.buffer).setUint32(C+8,9,true);
  const files=[{handle:7,data:pattern(Math.max(512,count+16),next()),position:next()%8},
    {handle:9,data:pattern(512,next()),position:next()%8}];
  return{args:[],data,state,files,label:'',...(callback&&seed%3===0?{callbackCounter:7}:{})};
}
const WORDS=[0,1,2,7,15,16,31,32,255,256,65535,65536,0x7fffffff,0x80000000,0xfffffffe,0xffffffff];
const assetName='fonts/fonts.group.bin';
export function assetBytes(name=assetName){
  const root=fileURLToPath(new URL('../',import.meta.url));
  const manifest=JSON.parse(fs.readFileSync(root+'web/manifest.json','utf8'));
  return Buffer.concat(manifest.webAssets[name].parts.map(p=>fs.readFileSync(root+'web/'+p)));
}
export function* cases(entry){
 const next=rng(0x5352494f^parseInt(entry.address,16));
 if(entry.suite==='divide'){
  for(const a of WORDS)for(const b of WORDS)if(b)yield{...input(next(),false),args:[a,b],label:'unsigned quotient/remainder boundaries'};
  for(let i=0;i<4096;i++)yield{...input(next(),false),args:[next(),next()||1],label:'unsigned quotient/remainder random words'};
  return;
 }
 if(entry.suite==='advance'){
  for(const counter of WORDS)for(const amount of WORDS)for(const period of [1,2,7,16,255,0x80000000,0xffffffff]){
   const t=input(next(),false,0,0,true),v=new DataView(t.state.buffer);v.setUint32(0xac,counter,true);v.setUint32(0xb0,period,true);
   t.args=[amount];t.label='callback threshold, modulo overflow and counter mutation';yield t;
  }
  for(const amount of WORDS){const t=input(next(),false);new DataView(t.state.buffer).setUint32(0xb0,0,true);t.args=[amount];t.label='disabled callback permits zero period';yield t;}
  return;
 }
 if(entry.suite==='strided_read'||entry.suite==='strided_write'){
  for(const width of [0,1,2,3,4,5,8])for(const stride of [0,1,2,3,4,5,8,12])for(const count of [0,1,2,3,7,16,65])for(const short of [false,true]){
   const t=input(next(),entry.suite==='strided_read',count,0,true);t.args=[BASE+A+(next()&3),width,count,stride,BASE+C];
   if(short){t.files[1].readLimit=1;t.files[1].writeLimit=1;}
   t.fixture=count===7&&((width===stride&&[1,2,4].includes(width)&&!short)||(width===3&&stride===5&&short));
   t.label='five-argument context, stride, empty and partial transfer';yield t;
  }
  const bad=input(next(),entry.suite==='strided_read',3,0,true);
  new DataView(bad.data.buffer).setUint32(C+8,0xabcdef01,true);
  bad.args=[BASE+A,2,3,2,BASE+C];bad.label='invalid external-context handle return is ignored';yield bad;
  return;
 }
 if(entry.suite==='header'){
  const versions=[0,1,0x30101,0x30102,0x30606,0xffffff];
  for(const reading of [false,true])for(const version of versions)for(const short of [false,true]){
   const t=input(next(),reading,6,0,true);
   t.files[0].data=Uint8Array.from([0x3d,version>>>16,(version>>>8)&255,version&255,0xfe,0xdc,7,8]);t.files[0].position=0;
   if(short)t.files[0].readLimit=1;
   t.args=[];t.label='resource-header version boundary and short read';yield t;
  }
  const t=input(next(),true,6,0,true);t.files[0]={handle:7,data:assetBytes(),position:0,writable:false,asset:assetName};t.args=[];t.label='actual fonts resource header';t.fixture=true;yield t;
  return;
 }
 if(entry.suite==='string'){
  for(const reading of [false,true])for(const n of [0,1,2,3,7,31,127,255])for(const slow of [0,1]){
   const t=input(next(),reading,n+1,slow,true),bytes=Uint8Array.from({length:n+1},(_,i)=>i===n?0:1+next()%255);
   t.data.set(bytes,A);t.files[0].data=bytes;t.files[0].position=0;t.args=[BASE+A,0,123,0xa5];t.label='NUL string, ignored apparent capacity, per-byte read progress';yield t;
  }
  return;
 }
 if(entry.suite==='boolean'){
  for(const reading of [false,true])for(const stride of [0,1,2,3,4,8])for(const count of [0,1,2,7,31,65]){
   const t=input(next(),reading,count,0,true);t.args=[BASE+A,count,0,stride];t.label='boolean coercion and asymmetric read/write progress';yield t;
  }
  return;
 }
 const max=entry.label==='serial_signed16'?15:entry.label==='serial_signed32'?31:32;
 const bitCounts=[...new Set([0,1,2,7,8,9,14,15,16,17,23,24,30,31,32].filter(x=>x<=max))];
 for(const reading of [false,true])for(const slow of [0,1])for(const bits of bitCounts)for(const stride of [0,1,2,3,4,5,8,12])for(const count of [0,1,2,7,31]){
  const t=input(next(),reading,count,slow,true);t.args=[BASE+A,count,bits,stride];
  const natural=entry.label.includes('16')?2:entry.label.includes('32')?4:1;
  t.fixture=bits===max&&stride===natural&&count===7;
  t.label='field width, sign extension, stride rounding and fast/slow branch';yield t;
 }
 // Host failure/EOF return values are ignored by the original non-boolean field code.
 for(const limit of [0,1,2,3]){
  const t=input(next(),true,17,1,true);t.files[0].readLimit=limit;t.files[0].position=500;t.args=[BASE+A,17,Math.min(max,7),3];
  t.fixture=limit===3;
  t.label='short/zero reads preserve untouched destination bytes';yield t;
 }
 for(const reading of [false,true]){
  const t=input(next(),reading,3,1,true);new DataView(t.state.buffer).setUint32(8,0xabcdef01,true);
  t.args=[BASE+A,3,Math.min(max,7),3];t.label='invalid global handle return is ignored by field serializer';yield t;
 }
}

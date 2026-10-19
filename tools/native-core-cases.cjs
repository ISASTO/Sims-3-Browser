// Input generation only. Expected results come exclusively from the ARM binary.
const BASE=0x20000, A=0x800, B=0x4800, SIZE=0x10000;
const EDGES=[0,1,2,3,4,5,7,8,15,16,17,31,32,33,63,64,65,127,128,129,255,256,257,511,512,513,1023,1024,2047,4095,8193];
const WORDS=[0,1,2,3,7,15,16,31,32,33,63,64,127,128,255,256,0x3000,0x7fffffff,0x80000000,0xfffffffe,0xffffffff];
function rng(seed) { let state=seed>>>0;return()=>{state^=state<<13;state^=state>>>17;state^=state<<5;return state>>>0;}; }
function pattern(size,seed) { const data=new Uint8Array(size); for(let i=0;i<size;i++)data[i]=(i*31+(i>>>8)*17+seed)&255;return data; }
function text(data,offset,length,width,seed) {
  const next=rng(seed||1),view=new DataView(data.buffer);
  for(let i=0;i<length;i++) {
    const value=width===2?(next()%65535)+1:(next()%255)+1;
    if(width===2)view.setUint16(offset+i*2,value,true);else data[offset+i]=value;
  }
  if(width===2)view.setUint16(offset+length*2,0,true);else data[offset+length]=0;
}
function memory(args,data,label) { return {args:args.map(x=>x>>>0),data,label}; }
function scalar(args,label) { return {args:args.map(x=>x>>>0),data:null,label}; }

function* scalarCases(entry) {
  const next=rng(0x53a31e21^parseInt(entry.address,16)),n=entry.parameters.length;
  for(const value of WORDS)yield scalar(Array(n).fill(value),'equal-word boundary');
  for(let arg=0;arg<n;arg++)for(const value of WORDS)for(const fill of [0,1,0xffffffff]) {
    const v=Array(n).fill(fill);v[arg]=value;yield scalar(v,'one-word boundary');
  }
  if(n>=2)for(let i=0;i<WORDS.length;i++)for(let j=0;j<WORDS.length;j++) {
    const args=Array.from({length:n},(_,k)=>WORDS[(i+j+k)%WORDS.length]);args[0]=WORDS[i];args[1]=WORDS[j];yield scalar(args,'pairwise boundaries');
  }
  for(let i=0;i<256;i++)yield scalar(Array(n).fill(i),'byte/enum domain');
  for(let i=0;i<1024;i++)yield scalar(Array.from({length:n},next),'seeded random words');
}
function* arithmeticCases(entry) {
  const next=rng(0x6d617468^parseInt(entry.address,16));
  if(entry.suite==='shift64') {
    const counts=[...Array.from({length:513},(_,i)=>i),0x7fffffff,0x80000000,0x8000001f,0x80000020,0x8000003f,0xffffff00,0xffffffe0,0xffffffff];
    for(const count of counts)for(const value of [[0,0],[1,0],[0,1],[0xffffffff,0xffffffff],[0x89abcdef,0xfedcba98],[0,0x80000000]])yield scalar([...value,count],'ARM register shift count');
    for(let i=0;i<4096;i++)yield scalar([next(),next(),next()],'random register shift');
    return;
  }
  if(entry.suite==='sdiv32') {
    for(const a of WORDS)for(const b of WORDS)if(b)yield scalar([a,b],'signed divide boundary');
    for(let i=0;i<4096;i++){const a=next(),b=next()||1;yield scalar([a,b],'random signed divide');}return;
  }
  const values=[[0,0],[1,0],[2,0],[0xffffffff,0],[0,1],[1,1],[0xffffffff,0x7fffffff],[0,0x80000000],[1,0x80000000],[0xffffffff,0xffffffff],[0xfffffffe,0xffffffff],[0x89abcdef,0x01234567]];
  for(const a of values)for(const b of values) {
    if(entry.suite.includes('div')&&!b[0]&&!b[1])continue;
    yield scalar([...a,...b],'64-bit pair boundaries');
  }
  for(let i=0;i<4096;i++) {
    const args=[next(),next(),next(),next()];if(entry.suite.includes('div')&&!args[2]&&!args[3])args[2]=1;
    yield scalar(args,'random 64-bit pair');
  }
}
function* copyCases(entry) {
  for(const n of EDGES)for(let da=0;da<4;da++)for(let sa=0;sa<4;sa++)yield memory([BASE+A+da,BASE+B+sa,n],pattern(SIZE,n+da*3+sa),'disjoint, all byte alignments');
  if(entry.suite==='move')for(const delta of [-65,-33,-17,-4,-3,-2,-1,0,1,2,3,4,17,33,65])for(const n of EDGES.slice(0,23))for(let align=0;align<4;align++) {
    const src=A+128+align,dst=src+delta;
    yield memory([BASE+dst,BASE+src,n],pattern(SIZE,n+delta),'overlap/equal move');
  }
}
function* fillCases(entry) {
  const values=entry.suite==='fill'?[0,1,127,128,255,256,0x180,0xffffff80,0xffffffff]:[0];
  const alignments=entry.suite==='zero_aligned'?[0]:[0,1,2,3];
  for(const n of EDGES)for(const align of alignments)for(const value of values)yield memory([BASE+A+align,n,value],pattern(SIZE,n+value),'fill tails and alignment');
}
function* stringCases(entry) {
  const width=entry.suite.startsWith('utf16')?2:1,alignments=width===2?[0,2]:[0,1,2,3];
  const lengths=EDGES.filter(x=>x<=513),next=rng(0x737472^parseInt(entry.address,16));
  for(const length of lengths)for(const align of alignments) {
    let data=pattern(SIZE,length+align),a=A+align,b=B+alignments[(length+align)%alignments.length];
    text(data,a,length,width,length+17);text(data,b,length,width,length+17);
    if(entry.suite.includes('length')){yield memory([BASE+a],data,'terminated length');continue;}
    if(entry.suite==='string_copy'||entry.suite==='utf16_copy'){
      yield memory([BASE+a,BASE+b],data,'copy including terminator');continue;
    }
    if(entry.suite==='string_copy_pad') {
      for(const count of [0,1,Math.max(0,length-1),length,length+1,length+17,0xffffffff,0x80000000])yield memory([BASE+a,BASE+b,count],data.slice(),'copy count and zero padding');continue;
    }
    if(entry.suite==='string_append'||entry.suite==='string_append_count') {
      text(data,b,(length*3+1)%257,1,length+31);
      const counts=entry.suite==='string_append_count'?[0,1,length,length+1,257]:[0];
      for(const count of counts)yield memory([BASE+a,BASE+b,count],data.slice(),'append and capacity tail');continue;
    }
    if(['string_compare','string_compare_count','utf16_compare','memory_compare'].includes(entry.suite)) {
      const variants=[{pos:-1,value:1},{pos:0,value:0},{pos:Math.floor(length/2),value:0xff},{pos:Math.max(0,length-1),value:0x80}];
      for(const variant of variants) {
        const copy=data.slice(),view=new DataView(copy.buffer);
        if(variant.pos>=0) {const pos=b+variant.pos*width;if(width===2)view.setUint16(pos,variant.value,true);else copy[pos]=variant.value;}
        const counts=['string_compare_count','memory_compare'].includes(entry.suite)?[0,1,length,length+1,length+7]:[0];
        for(const count of counts)yield memory([BASE+a,BASE+b,count],copy.slice(),'equal, prefix, byte mismatch');
      }
      continue;
    }
    if(['string_find','utf16_find'].includes(entry.suite)) {
      const variants=['empty','prefix','interior','absent'];
      for(const variant of variants) {
        const copy=data.slice();
        if(variant==='empty')copy.fill(0,b,b+width);
        if(variant==='prefix'||variant==='interior') {
          const start=variant==='prefix'?0:Math.floor(length/2),count=Math.min(7,length-start);
          copy.copyWithin(b,a+start*width,a+(start+count)*width);copy.fill(0,b+count*width,b+(count+1)*width);
        }
        if(variant==='absent')text(copy,b,7,width,0x4132+length);
        yield memory([BASE+a,BASE+b],copy,variant+' substring');
      }
      continue;
    }
    if(['string_find_byte','string_find_last_byte','memory_find'].includes(entry.suite)) {
      for(const value of [0,1,127,128,255,0xffffffff,data[a],data[a+Math.max(0,length-1)]]) {
        const counts=entry.suite==='memory_find'?[0,1,length,length+1]:[0];
        for(const count of counts)yield memory([BASE+a,value,count],data.slice(),'first/last byte search');
      }
      continue;
    }
    throw new Error('No string suite '+entry.suite);
  }
  // Exact return-bit coverage for every single-byte pair, on both strcmp paths.
  if(entry.suite==='string_compare'||entry.suite==='memory_compare') {
    for(const align of [0,1])for(let a=0;a<256;a++)for(let b=0;b<256;b++) {
      const data=pattern(256,13);data[64+align]=a;data[65+align]=0;data[128+align]=b;data[129+align]=0;
      yield memory([BASE+64+align,BASE+128+align,1],data,'exhaustive byte pair, aligned/unaligned');
    }
  }
  for(let i=0;i<256;i++) {
    const length=next()%257,data=pattern(SIZE,next()),a=A+alignments[next()%alignments.length],b=B+alignments[next()%alignments.length];
    text(data,a,length,width,next());text(data,b,next()%257,width,next());
    if(entry.suite.includes('length'))yield memory([BASE+a],data,'random terminated length');
    else if(entry.suite.includes('find_byte')||entry.suite==='string_find_last_byte'||entry.suite==='memory_find')yield memory([BASE+a,next()&255,next()%(length+1)],data,'random byte search');
    else if(entry.suite==='string_copy_pad')yield memory([BASE+a,BASE+b,next()%513],data,'random copy/pad');
    else if(entry.suite==='string_append_count')yield memory([BASE+a,BASE+b,next()%257],data,'random bounded append');
    else yield memory([BASE+a,BASE+b,next()%257],data,'random terminated strings');
  }
}
function cases(entry) {
  if(entry.suite.startsWith('path_'))return require('./native-path-cases.cjs').cases(entry);
  if(entry.suite==='scalar')return scalarCases(entry);
  if(['shift64','multiply64','udiv64','sdiv64','sdiv32'].includes(entry.suite))return arithmeticCases(entry);
  if(['copy_forward','copy','move'].includes(entry.suite))return copyCases(entry);
  if(['fill','zero','zero_aligned'].includes(entry.suite))return fillCases(entry);
  return stringCases(entry);
}
module.exports={BASE,SIZE,cases,rng};

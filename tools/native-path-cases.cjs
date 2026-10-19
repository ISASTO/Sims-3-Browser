// Input generation only: expected results and bytes come from original ARM.
const fs=require('node:fs'),path=require('node:path');
const BASE=0x20000,SIZE=0x10000,A=0x800,B=0x4800;
function rng(seed){let x=seed>>>0;return()=>{x^=x<<13;x^=x>>>17;x^=x<<5;return x>>>0;};}
function pattern(seed){const b=new Uint8Array(SIZE);for(let i=0;i<b.length;i++)b[i]=(i*31+(i>>>8)*17+seed)&255;return b;}
function bytes(value){return typeof value==='string'?Buffer.from(value,'latin1'):value;}
function put(data,offset,value){const b=bytes(value);data.set(b,offset);data[offset+b.length]=0;}
function rootBytes(value){const b=new Uint8Array(128);b.set(bytes(value));return b;}
const PATHS=['','.','..','...','/','//','///','\\','\\\\','./','././a','a/./b','a/.','a/..','a/../b',
 '../a','../../a','../a/../b','a/b/../../c','a///b//c/','/a/b','/a/../../b','a\\B\\..\\C',
 'C:\\A\\B','C:/../A','C:/A/../B','://','http://','HTTP://Host/A/../B','rom://TEXTURES/./A.PNG',
 'x://///a//b','a://../b','x:y','a:b/c','x://a/../../b','file.tar.gz','.profile','a.','a..b',
 'name with spaces / file.bin ','a\t','a\n','a\v','a\f','a\r','a\x85','\xc0\xdf\xe0/\xd6.TXT',
 'a//./.././b/../../c','../..','a/../../','/./','./.','..//../a','a/../..','a/../../..',
 'a'.repeat(126),'a'.repeat(127),'a'.repeat(128),'x://'+ 'a'.repeat(130)];

function* cases(entry){
 const suite=entry.suite,next=rng(0x70617468^parseInt(entry.address,16));
 if(suite==='path_ctype'){
  for(let value=-1;value<256;value++)yield{args:[value>>>0],label:'all default C locale bytes and EOF'};
  return;
 }
 function test(first,second,args,label,root){
  const data=pattern(next());put(data,A,first);put(data,B,second);
  // The extension routine reads one byte preceding its input, even at length 1.
  data[A-1]=0;data[B-1]=0;
  return{args:args.map(v=>v>>>0),data,label,...(root!==undefined?{pathRoot:rootBytes(root)}:{})};
 }
 if(suite==='path_bounded_copy'||suite==='path_bounded_append'||suite==='path_join'){
  const values=['','x','a/','a\\','/b','\\b','ABcd','a'.repeat(31),'b'.repeat(126),'c'.repeat(127),'z'.repeat(257)];
  for(const dst of values)for(const src of values)for(const capacity of [0,1,2,3,7,16,31,32,33,127,128,129,258]){
   if(capacity===0&&suite!=='path_bounded_copy')continue;
   yield test(dst,src,[BASE+A,BASE+B,capacity],'bounded lengths, separator joins and truncation');
  }
  for(let i=0;i<512;i++){
   const align=i&3,sourceAlign=(i>>>2)&3,data=pattern(next());
   const dst=Buffer.from(Array.from({length:next()%260},()=>33+next()%94));
   const src=Buffer.from(Array.from({length:next()%260},()=>1+next()%255));
   put(data,A+align,dst);put(data,B+sourceAlign,src);
   yield{args:[BASE+A+align,BASE+B+sourceAlign,(next()%300)+(suite==='path_bounded_copy'?0:1)],data,label:'random disjoint aligned/unaligned bounded operation'};
  }
  return;
 }
 if(suite==='path_resolve'){
  const roots=['/','','rom://','Data/Objects','DATA\\Textures\\','../User/Save','C:/Game', 'r'.repeat(127)];
  for(const root of roots)for(const src of PATHS)yield test(src,'',[BASE+A,BASE+B],'resolve using changed global prefix',root);
  const manifest=JSON.parse(fs.readFileSync(path.join(__dirname,'../web/manifest.json'),'utf8'));
  const resources=manifest.files||manifest.assets||manifest.resources;
  const names=Array.isArray(resources)?resources.map(x=>typeof x==='string'?x:x.name||x.path):Object.keys(resources);
  for(const name of names)if(typeof name==='string')yield test(name,'',[BASE+A,BASE+B],'actual resource manifest path','/');
 }
 for(const original of PATHS){
  if(suite==='path_extension'&&!original.length)continue;
  if(suite==='path_filename'&&original.split(/[\\/]/).at(-1).length>126)continue;
  for(const mode of [0,1,2,-1]){
   if(suite==='path_normalize')yield test(original,'',[BASE+A,mode],'normalization boundary and case option');
   else if(suite==='path_scheme')yield test(original,'',[BASE+A],'URI substring boundary');
   else if(suite==='path_filename')for(const inPlace of [false,true])yield test(original,'',[BASE+A,inPlace?BASE+A:BASE+B,mode],'filename dots, separators and in-place copy');
   else if(suite==='path_parent')for(const inPlace of [false,true])yield test(original,'',[BASE+A,inPlace?BASE+A:BASE+B],'parent separator collapse and in-place copy');
   else if(suite==='path_extension')yield test(original,'',[BASE+A,BASE+B],'extension scan boundaries');
  }
 }
 const segments=['a','B','..','.','','','file.tar.gz','\\','C:','\xc0\xdf','with space'];
 for(let i=0;i<2048;i++){
  let value=Array.from({length:1+next()%16},()=>segments[next()%segments.length]).join(next()&1?'/':'\\');
  if(next()%5===0)value='rom://'+value;
  if(next()%7===0)value+=' \t\r';
  if(suite==='path_extension'&&!value.length)value='x';
  if(suite==='path_filename'&&value.split(/[\\/]/).at(-1).length>126)continue;
  const mode=next()&1;
  if(suite==='path_normalize')yield test(value,'',[BASE+A,mode],'seeded nested path normalization');
  else if(suite==='path_resolve')yield test(value,'',[BASE+A,BASE+B],'seeded resolve/global state',PATHS[next()%PATHS.length].slice(0,127));
  else if(suite==='path_scheme')yield test(value,'',[BASE+A],'seeded URI substring');
  else if(suite==='path_filename')yield test(value,'',[BASE+A,BASE+B,mode],'seeded filename extraction');
  else if(suite==='path_parent'||suite==='path_extension')yield test(value,'',[BASE+A,BASE+B],'seeded path scan');
 }
}
module.exports={cases};

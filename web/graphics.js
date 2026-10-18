/* OpenGL ES 1 fixed-function subset translated to WebGL. */
(function(root){
'use strict';
const identity=()=>new Float32Array([1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1]);
function multiply(a,b){const c=new Float32Array(16);for(let j=0;j<4;j++)for(let i=0;i<4;i++)for(let k=0;k<4;k++)c[j*4+i]+=a[k*4+i]*b[j*4+k];return c;}
const floatBits=new DataView(new ArrayBuffer(4));
function floating(x){floatBits.setUint32(0,x,true);return floatBits.getFloat32(0,true);}
class SimsGraphics {
  constructor(canvas,log=()=>{}){
    this.g=canvas.getContext('webgl',{alpha:false,antialias:false,depth:true,stencil:true,preserveDrawingBuffer:true});
    if(!this.g)throw Error('WebGL is unavailable');
    this.canvas=canvas;this.log=log;this.enabled=new Set();this.arrays=new Set();
    this.mode=0x1700;this.matrices=new Map([[0x1700,[identity()]],[0x1701,[identity()]],[0x1702,[identity()]]]);
    this.textureMatrices=[[identity()],[identity()]];
    this.color=[1,1,1,1];this.normal=[0,0,1];this.alphaFunc=0x207;this.alphaRef=0;this.clientArrays=[new Set(),new Set()];
    this.material=[0.8,0.8,0.8,1];this.ambient=[0.2,0.2,0.2,1];this.lightDirection=[0,0,1];this.lightColor=[1,1,1];
    this.textureIds=new Map();this.bufferIds=new Map();this.nextId=1;this.boundArray=0;this.boundElement=0;
    this.activeUnit=0;this.clientUnit=0;this.boundTextures=[0,0];this.textureEnabled=[false,false];this.texEnv=[0x2100,0x2100];
    this.pointers={};this.uvPointers={};this.glIgnored=new Set();this.pixelAlignment=4;this.draws=0;
    const vs=`attribute vec3 p;attribute vec3 n;attribute vec4 c;attribute vec2 uv;
      uniform mat4 mv;uniform mat4 projection;uniform mat4 tm;
      uniform bool lighting;uniform vec4 material;uniform vec3 ambient;uniform vec3 ld;uniform vec3 lc;
      varying vec4 color;varying vec2 tex;
      void main(){gl_Position=projection*mv*vec4(p,1.0);tex=(tm*vec4(uv,0.0,1.0)).xy;
        vec3 normal=normalize(mat3(mv)*n);float diffuse=max(dot(normal,normalize(ld)),0.0);
        color=lighting?vec4(material.rgb*(ambient+lc*diffuse),material.a):c;}`;
    const fs=`precision mediump float;varying vec4 color;varying vec2 tex;
      uniform sampler2D image;uniform bool textured;uniform bool replaceColor;uniform int af;uniform float ar;
      void main(){vec4 t=textured?texture2D(image,tex):vec4(1.0);vec4 v=replaceColor&&textured?t:color*t;
        if(af==512)discard;
        if(af==513&&!(v.a<ar))discard;if(af==514&&!(v.a==ar))discard;
        if(af==515&&!(v.a<=ar))discard;if(af==516&&!(v.a>ar))discard;
        if(af==517&&!(v.a!=ar))discard;if(af==518&&!(v.a>=ar))discard;
        gl_FragColor=v;}`;
    const g=this.g;
    const shader=(kind,source)=>{const s=g.createShader(kind);g.shaderSource(s,source);g.compileShader(s);if(!g.getShaderParameter(s,g.COMPILE_STATUS))throw Error(g.getShaderInfoLog(s));return s;};
    this.program=g.createProgram();g.attachShader(this.program,shader(g.VERTEX_SHADER,vs));g.attachShader(this.program,shader(g.FRAGMENT_SHADER,fs));g.linkProgram(this.program);
    if(!g.getProgramParameter(this.program,g.LINK_STATUS))throw Error(g.getProgramInfoLog(this.program));
    this.attributes={};for(const key of ['p','n','c','uv'])this.attributes[key]=g.getAttribLocation(this.program,key);
    this.uniforms={};for(const key of ['mv','projection','tm','lighting','material','ambient','ld','lc','image','textured','replaceColor','af','ar'])this.uniforms[key]=g.getUniformLocation(this.program,key);
    this.vertexBuffer=g.createBuffer();g.useProgram(this.program);g.uniform1i(this.uniforms.image,0);
  }
  matrixStack(){return this.mode===0x1702?this.textureMatrices[this.activeUnit]:this.matrices.get(this.mode);}
  matrix(){return this.matrixStack().at(-1);}
  setMatrix(m){const stack=this.matrixStack();stack[stack.length-1]=m;}
  transform(m){this.setMatrix(multiply(this.matrix(),m));}
  readMatrix(rt,p,fixed){const b=rt.read(p,64),d=new DataView(b.buffer),m=new Float32Array(16);for(let i=0;i<16;i++)m[i]=fixed?d.getInt32(i*4,true)/65536:d.getFloat32(i*4,true);return m;}
  pointer(rt,pointer,maxIndex,kind){
    if(!pointer)return null;
    const sizes={0x1400:1,0x1401:1,0x1402:2,0x1403:2,0x1404:4,0x1405:4,0x1406:4,0x140c:4};
    const bytes=sizes[pointer.type];if(!bytes)throw Error('Unsupported vertex type '+pointer.type);
    const stride=pointer.stride||pointer.size*bytes;
    let raw;
    if(pointer.buffer){const stored=this.bufferIds.get(pointer.buffer);if(!stored)throw Error('Missing guest vertex buffer');raw=stored.subarray(pointer.p,pointer.p+maxIndex*stride+pointer.size*bytes);}
    else raw=rt.read(pointer.p,maxIndex*stride+pointer.size*bytes);
    const d=new DataView(raw.buffer,raw.byteOffset,raw.byteLength);
    return (index,out,offset)=>{
      for(let j=0;j<pointer.size;j++){
        const p=index*stride+j*bytes;let v;
        switch(pointer.type){case 0x1400:v=d.getInt8(p);break;case 0x1401:v=d.getUint8(p);break;case 0x1402:v=d.getInt16(p,true);break;case 0x1403:v=d.getUint16(p,true);break;case 0x1404:v=d.getInt32(p,true);break;case 0x1405:v=d.getUint32(p,true);break;case 0x1406:v=d.getFloat32(p,true);break;case 0x140c:v=d.getInt32(p,true)/65536;break;}
        if(kind==='color'||kind==='normal'){
          if(pointer.type===0x1400)v=Math.max(-1,v/127);if(pointer.type===0x1401)v/=255;
          if(pointer.type===0x1402)v=Math.max(-1,v/32767);if(pointer.type===0x1403)v/=65535;
        }
        out[offset+j]=v;
      }
    };
  }
  draw(rt,mode,indices){
    if(!indices.length)return;let maxIndex=0;for(const i of indices)maxIndex=Math.max(maxIndex,i);
    if(maxIndex>1000000)throw Error('Invalid vertex index');
    const position=this.pointer(rt,this.pointers.vertex,maxIndex,'position');if(!position)throw Error('Missing vertex pointer');
    const normal=this.arrays.has(0x8075)?this.pointer(rt,this.pointers.normal,maxIndex,'normal'):null;
    const color=this.arrays.has(0x8076)?this.pointer(rt,this.pointers.color,maxIndex,'color'):null;
    const uv=this.clientArrays[0].has(0x8078)?this.pointer(rt,this.uvPointers[0],maxIndex,'uv'):null;
    const data=new Float32Array(indices.length*12);
    for(let i=0;i<indices.length;i++){const offset=i*12;data.set([0,0,0,...this.normal,...this.color,0,0],offset);position(indices[i],data,offset);normal?.(indices[i],data,offset+3);color?.(indices[i],data,offset+6);uv?.(indices[i],data,offset+10);}
    const g=this.g,u=this.uniforms;g.useProgram(this.program);g.bindBuffer(g.ARRAY_BUFFER,this.vertexBuffer);g.bufferData(g.ARRAY_BUFFER,data,g.STREAM_DRAW);
    for(const [key,size,offset] of [['p',3,0],['n',3,12],['c',4,24],['uv',2,40]]){const loc=this.attributes[key];g.enableVertexAttribArray(loc);g.vertexAttribPointer(loc,size,g.FLOAT,false,48,offset);}
    g.uniformMatrix4fv(u.mv,false,this.matrices.get(0x1700).at(-1));g.uniformMatrix4fv(u.projection,false,this.matrices.get(0x1701).at(-1));g.uniformMatrix4fv(u.tm,false,this.textureMatrices[0].at(-1));
    g.uniform1i(u.lighting,this.enabled.has(0xb50));g.uniform4fv(u.material,this.material);g.uniform3fv(u.ambient,this.ambient.slice(0,3));g.uniform3fv(u.ld,this.lightDirection);g.uniform3fv(u.lc,this.lightColor);
    g.activeTexture(g.TEXTURE0);g.bindTexture(g.TEXTURE_2D,this.textureIds.get(this.boundTextures[0])||null);g.uniform1i(u.textured,this.textureEnabled[0]&&!!this.boundTextures[0]);g.uniform1i(u.replaceColor,this.texEnv[0]===0x1e01);
    g.uniform1i(u.af,this.enabled.has(0xbc0)?this.alphaFunc:0x207);g.uniform1f(u.ar,this.alphaRef);
    g.drawArrays(mode,0,indices.length);this.draws++;
  }
  call(name,a,rt){
    const [x,y,z,t]=a,g=this.g;const f=i=>floating(rt.arg(i)),fx=i=>(rt.arg(i)|0)/65536;
    const writeFloats=(ptr,values)=>rt.write(ptr,new Uint8Array(new Float32Array(values).buffer));
    if(name==='eglSwapBuffers'){rt.frames++;rt.e.emu_stop();return 1;}
    if(name.startsWith('egl'))return SimsGraphics.egl(name,a,rt);
    switch(name){
    case 'glGetString':return rt.string(({0x1f00:'WebGL bridge',0x1f01:'Marmalade ARM emulator',0x1f02:'OpenGL ES-CM 1.1',0x1f03:''})[x]||'');
    case 'glGetError':return g.getError();
    case 'glGetIntegerv':{
      const fixed=({0xd33:2048,0xd31:8,0x84e2:2,0x84e8:2,0x8872:8,0x8869:8,0xd56:24,0xd57:8,0xd55:8,0xd54:8,0xd53:8,0xd52:8})[x];
      if(fixed!==undefined){rt.put32(y,fixed);return 0;}
      let value;try{value=g.getParameter(x);}catch{value=0;}
      if(value&&typeof value.length==='number')Array.from(value).forEach((v,i)=>rt.put32(y+i*4,v));else rt.put32(y,typeof value==='number'?value:0);return 0;
    }
    case 'glGetFloatv':{
      const mat=({0xba6:0x1700,0xba7:0x1701,0xba8:0x1702})[x];
      const val=mat?(mat===0x1702?this.textureMatrices[this.activeUnit].at(-1):this.matrices.get(mat).at(-1)):x===0xb00?this.color:g.getParameter(x);
      writeFloats(y,val&&typeof val.length==='number'?val:[Number(val)||0]);return 0;
    }
    case 'glGetBooleanv':rt.write(y,new Uint8Array([this.enabled.has(x)?1:0]));return 0;
    case 'glIsEnabled':return x===0xde1?Number(this.textureEnabled[this.activeUnit]):Number(this.enabled.has(x));
    case 'glEnable':case 'glDisable':{
      const on=name==='glEnable';if(on)this.enabled.add(x);else this.enabled.delete(x);
      if(x===0xde1)this.textureEnabled[this.activeUnit]=on;
      else if([g.BLEND,g.CULL_FACE,g.DEPTH_TEST,g.DITHER,g.POLYGON_OFFSET_FILL,g.SCISSOR_TEST,g.STENCIL_TEST,g.SAMPLE_ALPHA_TO_COVERAGE,g.SAMPLE_COVERAGE].includes(x))g[on?'enable':'disable'](x);
      return 0;
    }
    case 'glEnableClientState':if(x===0x8078)this.clientArrays[this.clientUnit].add(x);else this.arrays.add(x);return 0;
    case 'glDisableClientState':if(x===0x8078)this.clientArrays[this.clientUnit].delete(x);else this.arrays.delete(x);return 0;
    case 'glActiveTexture':this.activeUnit=x-0x84c0;return 0;
    case 'glClientActiveTexture':this.clientUnit=x-0x84c0;return 0;
    case 'glMatrixMode':this.mode=x;return 0;
    case 'glLoadIdentity':this.setMatrix(identity());return 0;
    case 'glLoadMatrixf':case 'glLoadMatrixx':this.setMatrix(this.readMatrix(rt,x,name.endsWith('x')));return 0;
    case 'glMultMatrixf':case 'glMultMatrixx':this.transform(this.readMatrix(rt,x,name.endsWith('x')));return 0;
    case 'glPushMatrix':this.matrixStack().push(new Float32Array(this.matrix()));return 0;
    case 'glPopMatrix':if(this.matrixStack().length>1)this.matrixStack().pop();return 0;
    case 'glTranslatef':case 'glTranslatex':{const v=name.endsWith('x')?fx:f,m=identity();m[12]=v(0);m[13]=v(1);m[14]=v(2);this.transform(m);return 0;}
    case 'glScalef':case 'glScalex':{const v=name.endsWith('x')?fx:f,m=identity();m[0]=v(0);m[5]=v(1);m[10]=v(2);this.transform(m);return 0;}
    case 'glRotatef':case 'glRotatex':{
      const v=name.endsWith('x')?fx:f,angle=v(0)*Math.PI/180;let ax=v(1),ay=v(2),az=v(3);const len=Math.hypot(ax,ay,az);if(!len)return 0;ax/=len;ay/=len;az/=len;
      const c=Math.cos(angle),s=Math.sin(angle),t=1-c;this.transform(new Float32Array([ax*ax*t+c,ay*ax*t+az*s,az*ax*t-ay*s,0,ax*ay*t-az*s,ay*ay*t+c,az*ay*t+ax*s,0,ax*az*t+ay*s,ay*az*t-ax*s,az*az*t+c,0,0,0,0,1]));return 0;
    }
    case 'glOrthof':case 'glOrthox':{const v=name.endsWith('x')?fx:f,l=v(0),r=v(1),b=v(2),top=v(3),n=v(4),far=v(5);this.transform(new Float32Array([2/(r-l),0,0,0,0,2/(top-b),0,0,0,0,-2/(far-n),0,-(r+l)/(r-l),-(top+b)/(top-b),-(far+n)/(far-n),1]));return 0;}
    case 'glFrustumf':case 'glFrustumx':{const v=name.endsWith('x')?fx:f,l=v(0),r=v(1),b=v(2),top=v(3),n=v(4),far=v(5);this.transform(new Float32Array([2*n/(r-l),0,0,0,0,2*n/(top-b),0,0,(r+l)/(r-l),(top+b)/(top-b),-(far+n)/(far-n),-1,0,0,-2*far*n/(far-n),0]));return 0;}
    case 'glColor4f':case 'glColor4x':{const v=name.endsWith('x')?fx:f;this.color=[v(0),v(1),v(2),v(3)];return 0;}
    case 'glNormal3f':case 'glNormal3x':{const v=name.endsWith('x')?fx:f;this.normal=[v(0),v(1),v(2)];return 0;}
    case 'glAlphaFunc':case 'glAlphaFuncx':this.alphaFunc=x;this.alphaRef=name.endsWith('x')?fx(1):f(1);return 0;
    case 'glTexEnvi':case 'glTexEnvf':case 'glTexEnvx':if(y===0x2200)this.texEnv[this.activeUnit]=name==='glTexEnvf'?f(2):z;return 0;
    case 'glVertexPointer':this.pointers.vertex={size:x,type:y,stride:z,p:t,buffer:this.boundArray};return 0;
    case 'glColorPointer':this.pointers.color={size:x,type:y,stride:z,p:t,buffer:this.boundArray};return 0;
    case 'glNormalPointer':this.pointers.normal={size:3,type:x,stride:y,p:z,buffer:this.boundArray};return 0;
    case 'glTexCoordPointer':this.uvPointers[this.clientUnit]={size:x,type:y,stride:z,p:t,buffer:this.boundArray};return 0;
    case 'glDrawArrays':this.draw(rt,x,Array.from({length:z},(_,i)=>y+i));return 0;
    case 'glDrawElements':{
      const size=z===0x1401?1:2;let b;
      if(this.boundElement)b=this.bufferIds.get(this.boundElement).subarray(t,t+y*size);else b=rt.read(t,y*size);
      const d=new DataView(b.buffer,b.byteOffset,b.byteLength);this.draw(rt,x,Array.from({length:y},(_,i)=>size===1?d.getUint8(i):d.getUint16(i*2,true)));return 0;
    }
    case 'glGenTextures':case 'glGenBuffers':for(let i=0;i<x;i++){const id=this.nextId++;rt.put32(y+4*i,id);if(name==='glGenTextures')this.textureIds.set(id,g.createTexture());else this.bufferIds.set(id,new Uint8Array());}return 0;
    case 'glBindTexture':this.boundTextures[this.activeUnit]=y;g.activeTexture(g.TEXTURE0+this.activeUnit);g.bindTexture(x,this.textureIds.get(y)||null);return 0;
    case 'glDeleteTextures':for(let i=0;i<x;i++){const id=rt.u32(y+4*i);g.deleteTexture(this.textureIds.get(id));this.textureIds.delete(id);}return 0;
    case 'glBindBuffer':if(x===g.ARRAY_BUFFER)this.boundArray=y;else this.boundElement=y;return 0;
    case 'glBufferData':this.bufferIds.set(x===g.ARRAY_BUFFER?this.boundArray:this.boundElement,z?rt.read(z,y):new Uint8Array(y));return 0;
    case 'glBufferSubData':this.bufferIds.get(x===g.ARRAY_BUFFER?this.boundArray:this.boundElement).set(rt.read(t,z),y);return 0;
    case 'glDeleteBuffers':for(let i=0;i<x;i++)this.bufferIds.delete(rt.u32(y+4*i));return 0;
    case 'glTexParameteri':case 'glTexParameterx':g.texParameteri(x,y,z);return 0;
    case 'glTexParameterf':g.texParameterf(x,y,f(2));return 0;
    case 'glTexImage2D':case 'glTexSubImage2D':{
      const sub=name==='glTexSubImage2D';const width=rt.arg(sub?4:3),height=rt.arg(sub?5:4),format=rt.arg(6),type=rt.arg(7),ptr=rt.arg(8);
      const components=format===g.RGBA?4:format===g.RGB?3:format===g.LUMINANCE_ALPHA?2:1;
      const packed=type!==g.UNSIGNED_BYTE,row=width*(packed?2:components),stride=Math.ceil(row/this.pixelAlignment)*this.pixelAlignment;
      const bytes=ptr?rt.read(ptr,stride*(height-1)+row):null;const pixels=bytes?(packed?new Uint16Array(bytes.buffer,bytes.byteOffset,bytes.length/2):bytes):null;
      if(sub)g.texSubImage2D(x,y,z,t,width,height,format,type,pixels);else g.texImage2D(x,y,z,width,height,rt.arg(5),format,type,pixels);return 0;
    }
    case 'glClearColor':case 'glClearColorx':{const v=name.endsWith('x')?fx:f;g.clearColor(v(0),v(1),v(2),v(3));return 0;}
    case 'glClearDepthf':case 'glClearDepthx':g.clearDepth(name.endsWith('x')?fx(0):f(0));return 0;
    case 'glDepthRangef':case 'glDepthRangex':{const v=name.endsWith('x')?fx:f;g.depthRange(v(0),v(1));return 0;}
    case 'glPolygonOffset':g.polygonOffset(f(0),f(1));return 0;
    case 'glLineWidth':case 'glLineWidthx':g.lineWidth(name.endsWith('x')?fx(0):f(0));return 0;
    case 'glPixelStorei':if(x===g.UNPACK_ALIGNMENT)this.pixelAlignment=y;g.pixelStorei(x,y);return 0;
    case 'glMaterialfv':case 'glMaterialxv':if(y===0x1201||y===0x1602){const b=rt.read(z,16),d=new DataView(b.buffer);this.material=Array.from({length:4},(_,i)=>name.endsWith('xv')?d.getInt32(i*4,true)/65536:d.getFloat32(i*4,true));}return 0;
    case 'glLightModelfv':case 'glLightModelxv':if(x===0xb53){const b=rt.read(y,16),d=new DataView(b.buffer);this.ambient=Array.from({length:4},(_,i)=>name.endsWith('xv')?d.getInt32(i*4,true)/65536:d.getFloat32(i*4,true));}return 0;
    case 'glLightfv':case 'glLightxv':if(x===0x4000){const b=rt.read(z,16),d=new DataView(b.buffer),v=Array.from({length:4},(_,i)=>name.endsWith('xv')?d.getInt32(i*4,true)/65536:d.getFloat32(i*4,true));if(y===0x1203)this.lightDirection=v.slice(0,3);if(y===0x1201)this.lightColor=v.slice(0,3);}return 0;
    }
    const direct={glViewport:['viewport',4],glScissor:['scissor',4],glClear:['clear',1],glClearStencil:['clearStencil',1],glDepthFunc:['depthFunc',1],glDepthMask:['depthMask',1],glColorMask:['colorMask',4],glCullFace:['cullFace',1],glFrontFace:['frontFace',1],glBlendFunc:['blendFunc',2],glBlendFuncSeparate:['blendFuncSeparate',4],glBlendEquationSeparate:['blendEquationSeparate',2],glStencilFunc:['stencilFunc',3],glStencilMask:['stencilMask',1],glStencilOp:['stencilOp',3],glFinish:['finish',0],glFlush:['flush',0]};
    if(direct[name]){const [method,n]=direct[name];g[method](...Array.from({length:n},(_,i)=>rt.arg(i)));return 0;}
    if(!this.glIgnored.has(name)){this.glIgnored.add(name);this.log('Graphics service pending: '+name);}
    return 0;
  }
  static egl(name,a,rt){
    const [x,y,z,t]=a;
    if(name==='eglGetError')return 0x3000;
    if(name==='eglGetProcAddress')return rt.symbolAddresses[rt.str(x)]||0;
    if(name==='eglGetConfigs'){if(t)rt.put32(t,1);if(y&&z)rt.put32(y,1);return 1;}
    if(name==='eglGetConfigAttrib'){rt.put32(t,({0x3040:1,0x3024:8,0x3023:8,0x3022:8,0x3021:8,0x3025:24,0x3026:8,0x3033:4})[z]||0);return 1;}
    if(name==='eglInitialize'){if(y)rt.put32(y,1);if(z)rt.put32(z,4);return 1;}
    if(name==='eglQueryContext'){if(t)rt.put32(t,z===0x3098?1:1);return 1;}
    return 1;
  }
}
root.SimsGraphics=SimsGraphics;
if(typeof module!=='undefined')module.exports={SimsGraphics,identity,multiply};
})(typeof globalThis!=='undefined'?globalThis:this);

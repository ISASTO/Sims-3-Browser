// Replay results recorded from original ARM execution, using the browser loader.
export async function runNativeFixtures(core, corpus, onProgress = () => {}) {
  if (corpus.wasmSha256 !== core.manifest.wasmSha256) throw new Error('Fixtures and native module versions do not match');
  if (corpus.originalExecutableSha256 !== core.manifest.originalExecutableSha256) throw new Error('Fixtures reference a different original game');
  const results = new Map();
  let passed = 0;
  for (const fixture of corpus.fixtures) {
    if(fixture.pathRoot) {
      new Uint8Array(core.memory.buffer,core.pathRootAddress,core.manifest.pathState.rootCapacity).set(fixture.pathRoot);
    }
    if (fixture.memory) {
      const {base,size,seed,patches} = fixture.memory;
      const data = new Uint8Array(core.memory.buffer,base,size);
      for (let i=0;i<size;i++) data[i]=(i*31+(i>>>8)*17+seed)&255;
      for (const [offset,encoded] of patches) {
        const bytes=Uint8Array.from(atob(encoded),c=>c.charCodeAt(0));
        data.set(bytes,offset);
      }
    }
    const actual=core.invoke(fixture.address,fixture.args);
    if (actual.mask !== fixture.mask) throw new Error(fixture.label+': result-mask mismatch');
    for (let i=0;i<4;i++) if (fixture.mask&(1<<i)) {
      if (actual.words[i] !== fixture.expected[i]) throw new Error(fixture.label+': r'+i+' differs from the original ARM result');
    }
    if (fixture.memory) {
      const {base,size}=fixture.memory;
      const digest=new Uint8Array(await crypto.subtle.digest('SHA-256',new Uint8Array(core.memory.buffer,base,size)));
      const sha=Array.from(digest,b=>b.toString(16).padStart(2,'0')).join('');
      if (sha !== fixture.expectedMemorySha256) throw new Error(fixture.label+': memory differs from the original ARM result');
    }
    if(fixture.pathRoot) {
      const digest=new Uint8Array(await crypto.subtle.digest('SHA-256',new Uint8Array(core.memory.buffer,core.pathRootAddress,core.manifest.pathState.rootCapacity)));
      const sha=Array.from(digest,b=>b.toString(16).padStart(2,'0')).join('');
      if(sha !== fixture.expectedPathRootSha256)throw new Error(fixture.label+': relocated directory state differs from the original');
    }
    passed++;
    results.set(fixture.address,(results.get(fixture.address)||0)+1);
    onProgress({passed,total:corpus.fixtures.length,functions:results.size,label:fixture.label});
  }
  return {passed,total:corpus.fixtures.length,functions:results.size};
}

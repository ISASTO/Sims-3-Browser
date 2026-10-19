// Browser loader for the recovered native components. This is not a game loop.
// The public ABI uses 32-bit words, including multiword results, so JS BigInt
// integration and post-MVP WebAssembly features are not required.
export async function loadNativeCore(options = {}) {
  const fetcher = options.fetch || globalThis.fetch;
  const base = new URL('.', options.baseUrl || import.meta.url);
  const [manifestResponse, wasmResponse] = await Promise.all([
    fetcher(new URL('manifest.json', base), {cache:'no-store'}),
    fetcher(new URL('sims3-core.wasm', base), {cache:'no-store'}),
  ]);
  if (!manifestResponse.ok || !wasmResponse.ok) throw new Error('Unable to load native core files');
  const manifest = await manifestResponse.json();
  const bytes = await wasmResponse.arrayBuffer();
  if (globalThis.crypto?.subtle) {
    const digest = new Uint8Array(await crypto.subtle.digest('SHA-256', bytes));
    const sha = Array.from(digest, b => b.toString(16).padStart(2,'0')).join('');
    if (sha !== manifest.wasmSha256) throw new Error('Native manifest and Wasm file do not match');
  }
  const module = await WebAssembly.compile(bytes);
  if (WebAssembly.Module.imports(module).length) throw new Error('Native core unexpectedly requires host imports');
  const instance = await WebAssembly.instantiate(module);
  const native = instance.exports;
  const frame = native.core_result_ptr() >>> 0;
  const entries = new Map();
  for (const entry of manifest.functions) {
    entries.set(entry.address, entry);
    entries.set(entry.label, entry);
  }
  let cursor = (native.core_heap_base() + 15) & ~15;
  const heapStart = cursor;
  function invoke(address, args = []) {
    const key = typeof address === 'number' ? ((address >>> 0) & 0xfffffffe).toString(16) :
      String(address).replace(/^0x/i,'');
    const entry = entries.get(key);
    if (!entry) throw new RangeError('This function has not been recompiled: '+key);
    if (args.length < entry.parameters.length || args.length > 4) throw new RangeError('Incorrect native argument count');
    const words = Array.from({length:4}, (_,i) => {
      const value = args[i] ?? 0;
      if (!Number.isInteger(value) || value < -0x80000000 || value > 0xffffffff) throw new RangeError('Native arguments must fit a 32-bit word');
      return value >>> 0;
    });
    if (entry.suite === 'sdiv32' && words[1] === 0 ||
        (entry.suite === 'udiv64' || entry.suite === 'sdiv64') && words[2] === 0 && words[3] === 0) {
      throw new RangeError('The original division-by-zero exception path has not been ported');
    }
    if (entry.suite === 'zero_aligned' && (words[0]&3)) throw new RangeError('This entry requires four-byte alignment');
    if (entry.suite.startsWith('utf16') && ((words[0]&1) || entry.parameters.length>1 && (words[1]&1))) {
      throw new RangeError('UTF-16 entries require two-byte alignment');
    }
    if (entry.suite === 'copy' || entry.suite === 'copy_forward') {
      const [dst,src,count] = words;
      if (count && dst < src+count && src < dst+count) throw new RangeError('Forward-copy contract requires non-overlapping regions');
    }
    const mask = native.core_invoke(entry.id, ...words) >>> 0;
    const expectedMask = entry.resultRegisters.reduce((m,r) => m | (1<<Number(r.slice(1))), 0);
    if (mask !== expectedMask) throw new Error('Native function ABI does not match the manifest');
    const view = new DataView(native.memory.buffer);
    return {mask, words:Array.from({length:4}, (_,i) => view.getUint32(frame+i*4,true))};
  }
  function allocate(length, alignment = 16) {
    if (!Number.isSafeInteger(length) || length < 0 || !Number.isInteger(alignment) || alignment<1 || alignment>65536 || (alignment&(alignment-1))) {
      throw new RangeError('Invalid native allocation');
    }
    const address = Math.ceil(cursor/alignment)*alignment;
    const end = address+length;
    if (end > manifest.memory.maximumBytes) throw new RangeError('Native core arena exhausted');
    if (end > native.memory.buffer.byteLength) native.memory.grow(Math.ceil((end-native.memory.buffer.byteLength)/65536));
    cursor = end;
    return address;
  }
  return {manifest, memory:native.memory, invoke, allocate,
    resetArena() { cursor=heapStart; }, heapStart};
}

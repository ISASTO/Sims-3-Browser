#!/usr/bin/env python3
"""Build recovered memory/string/arithmetic code as an import-free Wasm module."""
import argparse
import hashlib
import json
import re
import struct
import subprocess
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CORE = ROOT / 'native/core'
CTYPE = {'u32': 'uint32_t', 'i32': 'int32_t', 'u8': 'uint8_t', 'u64': 'uint64_t',
         'div64': 'CoreDiv64', 'p_u32': 'uint *', 'p_u8': 'char *',
         'p_u16': 'ushort *', 'p_i16': 'short *', 'p_byte': 'byte *'}
sha = lambda data: hashlib.sha256(data).hexdigest()


def recover(config, image, base):
    bodies = {}
    functions = {f['address']: f for f in json.loads((ROOT / 'recovered/native/functions.json').read_text())}
    for part in sorted((ROOT / 'recovered/native/decompiled').glob('part-*.c')):
        for block in re.split(r'// Address: ', part.read_text())[1:]:
            address, _, body = block.partition('\n')
            bodies[address.strip()] = body.strip() + '\n'
    result = ['/* Generated from pinned Ghidra bodies. Return corrections are recorded in contracts.json. */', '#include "core.h"']
    for address, literal in config['literalPool'].items():
        value = struct.unpack_from('<I', image, int(address, 16) - base)[0]
        if value != literal['value']:
            raise RuntimeError('Literal pool changed: ' + address)
        result.append(f'static const uint DAT_{address} = 0x{value:08x}u;')
    for entry in config['functions']:
        original = bodies[entry['address']]
        info = functions[entry['address']]
        entry.update(thumb=info['thumb'], recoveredBodySha256=sha(original.encode()),
                     sourceFile='recovered/native/' + info['file'])
        if not entry['sourceKind'].startswith('decompiler'):
            entry['implementationFile'] = 'native/core/src/' + ('arithmetic.c' if 'arithmetic' in entry['sourceKind'] else 'memory.c')
            continue
        if info['warnings'] or info['indirectCalls']:
            raise RuntimeError('Unreviewed decompiler warning in ' + entry['address'])
        body = original
        if entry['sourceKind'] == 'decompiler-return-fix':
            typ = 'uint *' if entry['address'] == '4a0012bc' else 'char *'
            body, n = re.subn(r'^void\s+' + entry['symbol'], typ + ' ' + entry['symbol'], body, count=1)
            if n != 1:
                raise RuntimeError('Return correction no longer matches ' + entry['address'])
            body = body.replace('{', '{\n  ' + typ + ' original_destination = param_1;', 1)
            body = re.sub(r'\breturn;', 'return original_destination;', body)
        result.append('// Address: ' + entry['address'] + '\n' + body)
        entry['implementationFile'] = 'native/core/src/recovered.c'
        entry['compiledBodySha256'] = sha(body.encode())
    (CORE / 'src/recovered.c').write_text('\n\n'.join(result) + '\n')
    return functions


def argument(type_name, register):
    typ = CTYPE.get(type_name, type_name)
    return f'({typ})(uintptr_t){register}' if type_name.startswith('p_') else f'({typ}){register}'


def dispatcher(entries):
    text = ['/* Generated native-function gateway; no ARM instruction interpreter. */', '#include "core.h"',
            'static uint32_t result_words[4];',
            'uint32_t core_result_ptr(void) { return (uint32_t)(uintptr_t)result_words; }',
            'uint32_t core_heap_base(void) { extern char __heap_base; return (uint32_t)(uintptr_t)&__heap_base; }']
    for entry in entries:
        if entry.get('sourceKind') == 'pinned-scalar':
            text.append(entry['signature'] + ';')
    text += ['uint32_t core_invoke(uint32_t id,uint32_t a,uint32_t b,uint32_t c,uint32_t d) {',
             '  result_words[0]=result_words[1]=result_words[2]=result_words[3]=0;', '  switch(id) {']
    for entry in entries:
        args = ','.join(argument(p['type'], r) for p, r in zip(entry['parameters'], 'abcd'))
        call = entry['symbol'] + '(' + args + ')'
        text.append(f'    case {entry["id"]}: {{')
        if entry['returnType'] == 'div64':
            text += ['      CoreDiv64 value=' + call + ';',
                     '      result_words[0]=(uint32_t)value.quotient; result_words[1]=(uint32_t)(value.quotient>>32);',
                     '      result_words[2]=(uint32_t)value.remainder; result_words[3]=(uint32_t)(value.remainder>>32);',
                     '      return 15;']
        elif entry['returnType'] == 'u64':
            text += ['      uint64_t value=' + call + ';',
                     '      result_words[0]=(uint32_t)value; result_words[1]=(uint32_t)(value>>32);',
                     '      return 3;']
        else:
            text += ['      result_words[0]=(uint32_t)(uintptr_t)' + call + ';', '      return 1;']
        text.append('    }')
    text += ['    default: return 0;', '  }', '}']
    (CORE / 'src/dispatch.c').write_text('\n'.join(text) + '\n')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--clang', type=Path, required=True)
    args = parser.parse_args()
    config = json.loads((CORE / 'contracts.json').read_text())
    header = json.loads((ROOT / 'recovered/s3e-header.json').read_text())
    original = (ROOT / 'recovered/game.s3e').read_bytes()
    image = original[header['codeOffset']:header['codeOffset'] + header['codeFileSize']]
    recover(config, image, header['originalBase'])
    entries = config['functions']
    scalar = json.loads((ROOT / 'native/manifest.json').read_text())
    for index, item in enumerate(scalar['functions'], 101):
        entries.append({'id': index, 'address': item['address'], 'symbol': item['name'], 'label': item['name'],
                        'thumb': item['thumb'], 'signature': item['signature'],
                        'parameters': [{'name': 'argument' + str(i), 'type': 'i32' if t == 'int' else 'u32'} for i, t in enumerate(item['argumentTypes'])],
                        'returnType': 'i32' if item['returnType'] == 'int' else 'u32',
                        'resultRegisters': ['r0'], 'suite': 'scalar', 'sourceKind': 'pinned-scalar',
                        'implementationFile': 'native/verified-functions.c', 'sourceFile': item['sourceFile'],
                        'recoveredBodySha256': item['sourceSha256']})
    dispatcher(entries)
    compiler = args.clang.resolve()
    options = ['--target=wasm32-unknown-unknown', '-mcpu=mvp', '-O2', '-ffreestanding', '-fno-builtin',
               '-nostdlib', '-fwrapv', '-funsigned-char', '-fno-strict-aliasing',
               '-fno-vectorize', '-fno-slp-vectorize', '-Werror=implicit-function-declaration',
               '-Wl,--no-entry', '-Wl,--strip-all', '-Wl,--initial-memory=1048576', '-Wl,--max-memory=67108864',
               '-Wl,--export-memory', '-Wl,--export=core_invoke', '-Wl,--export=core_result_ptr', '-Wl,--export=core_heap_base']
    inputs = ['native/core/src/arithmetic.c', 'native/core/src/memory.c', 'native/core/src/recovered.c',
              'native/core/src/dispatch.c', 'native/verified-functions.c']
    output = CORE / 'sims3-core.wasm'
    command = [str(compiler), *options, *[str(ROOT / path) for path in inputs], '-o', str(output)]
    result = subprocess.run(command, capture_output=True, text=True)
    if result.returncode:
        raise RuntimeError(result.stderr)
    output.chmod(0o644)
    if result.stderr:
        print(result.stderr)
    manifest = {
        'status': 'Native core components only; a complete game has not been rebuilt.',
        'target': 'wasm32-unknown-unknown', 'baseline': 'WebAssembly MVP; no OS, threads, SIMD, or imported functions.',
        'memory': {'initialBytes': 1048576, 'maximumBytes': 67108864, 'shared': False},
        'originalExecutableSha256': sha(original), 'wasmSha256': sha(output.read_bytes()),
        'compiler': subprocess.check_output([str(compiler), '--version'], text=True).splitlines()[0],
        'compilerOptions': options, 'sourceFiles': {p: sha((ROOT / p).read_bytes()) for p in inputs + ['native/core/src/core.h']},
        'contractsSha256': sha((CORE / 'contracts.json').read_bytes()),
        'literalPool': config['literalPool'], 'functions': entries,
    }
    (CORE / 'manifest.json').write_text(json.dumps(manifest, indent=2) + '\n')
    print(json.dumps({'functions': len(entries), 'bytes': output.stat().st_size, 'sha256': manifest['wasmSha256']}, indent=2))


if __name__ == '__main__':
    main()

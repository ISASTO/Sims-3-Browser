#!/usr/bin/env python3
"""Build reviewed native stream serialization, with explicit browser host ABIs."""
import argparse
import hashlib
import json
import subprocess
import struct
from pathlib import Path
from check_wasm_mvp import inspect

ROOT = Path(__file__).resolve().parents[1]
FOLDER = ROOT / 'native/serialization'
sha = lambda data: hashlib.sha256(data).hexdigest()


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--clang', type=Path, required=True)
    args = p.parse_args()
    config_bytes = (FOLDER / 'contracts.json').read_bytes()
    config = json.loads(config_bytes)
    functions = {f['address']: f for f in json.loads((ROOT / 'recovered/native/functions.json').read_text())}
    bodies = {}
    for part in (ROOT / 'recovered/native/decompiled').glob('part-*.c'):
        for block in part.read_text().split('// Address: ')[1:]:
            address, _, code = block.partition('\n')
            bodies[address.strip()] = code.strip() + '\n'
    original = (ROOT / 'recovered/game.s3e').read_bytes()
    header = json.loads((ROOT / 'recovered/s3e-header.json').read_text())
    assert struct.unpack_from('<I', original, header['codeOffset'] + 0x4e960)[0] == 0x30102
    entries = config['functions']
    for entry in entries:
        info = functions[entry['address']]
        entry.update(thumb=info['thumb'], recoveredBodySha256=sha(bodies[entry['address']].encode()),
                     sourceFile='recovered/native/' + info['file'])
    inputs = ['native/serialization/src/serialization.c', 'native/core/src/recovered.c',
              'native/core/src/memory.c', 'native/core/src/arithmetic.c']
    options = ['--target=wasm32-unknown-unknown', '-mcpu=mvp', '-O2', '-ffreestanding', '-fno-builtin',
               '-nostdlib', '-fwrapv', '-funsigned-char', '-fno-strict-aliasing',
               '-fno-vectorize', '-fno-slp-vectorize', '-Werror=implicit-function-declaration',
               '-Wl,--no-entry', '-Wl,--strip-all', '-Wl,--initial-memory=1048576', '-Wl,--max-memory=67108864',
               '-Wl,--export-memory', '-Wl,--export=serial_invoke', '-Wl,--export=serial_result_ptr',
               '-Wl,--export=serial_state_ptr', '-Wl,--export=serial_heap_base']
    compiler = str(args.clang.resolve())
    out = FOLDER / 'sims3-serialization.wasm'
    subprocess.run([compiler, *options, *[str(ROOT / x) for x in inputs], '-o', str(out)], check=True)
    out.chmod(0o644)
    manifest = {**config, 'target': 'wasm32-unknown-unknown', 'wasmSha256': sha(out.read_bytes()),
                'originalExecutableSha256': sha(original), 'contractsSha256': sha(config_bytes),
                'memory': {'initialBytes': 1048576, 'maximumBytes': 67108864, 'shared': False},
                'compiler': subprocess.check_output([compiler, '--version'], text=True).splitlines()[0],
                'compilerOptions': options,
                'sourceFiles': {x: sha((ROOT / x).read_bytes()) for x in inputs + ['native/core/src/core.h']},
                'reusedRecoveredFunctions': [{'address': '4a0013e0', 'label': 'string_length',
                                             'note': 'Already counted in the existing 65-function core; not a newly recovered function.'}]}
    (FOLDER / 'manifest.json').write_text(json.dumps(manifest, indent=2) + '\n')
    report = inspect(out.read_bytes(), config['hostImports'])
    # The default import-free audit must still reject this host-dependent module.
    try:
        inspect(out.read_bytes())
    except ValueError:
        pass
    else:
        raise AssertionError('Import-free audit accepted host imports')
    wrong = json.loads(json.dumps(config['hostImports']))
    wrong[0]['parameters'] = []
    try:
        inspect(out.read_bytes(), wrong)
    except ValueError:
        pass
    else:
        raise AssertionError('Host signature audit accepted a wrong ABI')
    (FOLDER / 'compatibility.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'newFunctions': len(entries), 'bytes': out.stat().st_size,
                      'sha256': manifest['wasmSha256'], 'hostImports': report['imports']}, indent=2))


if __name__ == '__main__':
    main()

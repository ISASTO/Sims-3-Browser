#!/usr/bin/env python3
"""Link recovered pathname, stream and resource control flow into one MVP Wasm."""
import argparse
import hashlib
import json
import struct
import subprocess
from pathlib import Path
from check_wasm_mvp import inspect

ROOT = Path(__file__).resolve().parents[1]
FOLDER = ROOT / 'native/resources'
sha = lambda data: hashlib.sha256(data).hexdigest()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--clang', required=True, type=Path)
    args = parser.parse_args()
    config_bytes = (FOLDER / 'contracts.json').read_bytes()
    config = json.loads(config_bytes)
    core = json.loads((ROOT / 'native/core/manifest.json').read_text())
    serial = json.loads((ROOT / 'native/serialization/manifest.json').read_text())
    for component in [core, serial]:
        for name, expected in component['sourceFiles'].items():
            assert sha((ROOT / name).read_bytes()) == expected, name
    original = (ROOT / 'recovered/game.s3e').read_bytes()
    header = json.loads((ROOT / 'recovered/s3e-header.json').read_text())
    for address, expected in [(0x4a02b208, 0x1505), (0x4a04d9d4, 0x4a19fa98),
                              (0x4a04d9d8, 0x4a19b6a8), (0x4a04d9dc, 0xcdcdcdcd),
                              (0x4a0399dc, 0x4a192814)]:
        assert struct.unpack_from('<I', original, header['codeOffset'] + address - header['originalBase'])[0] == expected
    functions = {f['address']: f for f in json.loads((ROOT / 'recovered/native/functions.json').read_text())}
    bodies = {}
    for part in (ROOT / 'recovered/native/decompiled').glob('part-*.c'):
        for block in part.read_text().split('// Address: ')[1:]:
            address, _, code = block.partition('\n')
            bodies[address.strip()] = code.strip() + '\n'
    for entry in config['functions']:
        info = functions[entry['address']]
        entry.update(thumb=info['thumb'], recoveredBodySha256=sha(bodies[entry['address']].encode()),
                     sourceFile='recovered/native/' + info['file'])
    inputs = ['native/core/src/arithmetic.c', 'native/core/src/memory.c',
              'native/core/src/recovered.c', 'native/core/src/path.c',
              'native/core/src/dispatch.c', 'native/verified-functions.c',
              'native/serialization/src/serialization.c', 'native/resources/src/resources.c']
    options = core['compilerOptions'][:]
    for name in ['serial_invoke', 'serial_result_ptr', 'serial_state_ptr', 'serial_heap_base',
                 'resource_invoke', 'resource_result_ptr', 'resource_registry_ptr',
                 'resource_open_count_ptr', 'resource_install_registry']:
        options.append('-Wl,--export=' + name)
    compiler = str(args.clang.resolve())
    output = FOLDER / 'sims3-resources.wasm'
    subprocess.run([compiler, *options, *[str(ROOT / name) for name in inputs], '-o', str(output)], check=True)
    output.chmod(0o644)
    report = inspect(output.read_bytes(), config['hostImports'])
    all_entries = core['functions'] + serial['functions'] + config['functions']
    addresses = [entry['address'] for entry in all_entries]
    assert len(set(addresses)) == len(addresses) == 86
    manifest = {**config, 'target': 'wasm32-unknown-unknown', 'wasmSha256': sha(output.read_bytes()),
                'originalExecutableSha256': sha(original), 'contractsSha256': sha(config_bytes),
                'memory': core['memory'], 'singleLinearMemory': True,
                'linkedOriginalEntryPoints': len(addresses),
                'linkedComponents': [{'path': folder, 'wasmSha256': component['wasmSha256'],
                                      'manifestSha256': sha((ROOT / folder / 'manifest.json').read_bytes()),
                                      'functions': len(component['functions'])}
                                     for folder, component in [('native/core', core), ('native/serialization', serial)]],
                'linkedFixtureSources': {name: sha((ROOT / name).read_bytes()) for name in
                                         ['native/core/browser-fixtures.json', 'native/serialization/browser-fixtures.json']},
                'compiler': subprocess.check_output([compiler, '--version'], text=True).splitlines()[0],
                'compilerOptions': options,
                'sourceFiles': {name: sha((ROOT / name).read_bytes()) for name in inputs +
                                ['native/core/src/core.h', 'native/core/src/path-data.h']}}
    (FOLDER / 'manifest.json').write_text(json.dumps(manifest, indent=2) + '\n')
    (FOLDER / 'compatibility.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'newFunctions': len(config['functions']), 'linkedOriginalEntryPoints': len(addresses),
                      'bytes': output.stat().st_size, 'sha256': manifest['wasmSha256'],
                      'hostImports': report['imports']}, indent=2))


if __name__ == '__main__':
    main()

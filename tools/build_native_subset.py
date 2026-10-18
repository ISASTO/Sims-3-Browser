#!/usr/bin/env python3
"""Compile a deliberately limited, differential-tested subset, NOT the game.

Select scalar leaf functions without memory accesses, calls, decompiler warnings,
or implicit register inputs. Keep only candidates that match the original ARM
executable on the deterministic validation corpus. No function is stubbed out.
"""
import argparse
import hashlib
import json
import re
import subprocess
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
TYPES = r'(?:int|uint|undefined4)'
SIGNATURE = re.compile(r'(' + TYPES + r') (FUN_[0-9a-f]+)\(([^()]*)\)')
PARAMETER = re.compile(r'(' + TYPES + r') (param_\d+)')
KEYWORDS = set('bool true false int uint undefined4 byte char short ushort unsigned signed '
               'return if else switch case default break continue do while for goto '
               'CARRY4 SCARRY4 SBORROW4'.split())
PREAMBLE = '''/* Recovered scalar leaf functions. This is NOT a game executable.
 * Function bodies below come from the pinned native Ghidra export.
 * No replacements are provided for functions that fail validation.
 * See manifest.json and verification.json for provenance and test limits. */
typedef unsigned int uint;
typedef unsigned int undefined4;
typedef unsigned char byte;
typedef unsigned short ushort;
typedef _Bool bool;
#define true 1
#define false 0
#define CARRY4(a,b) (((unsigned long long)(uint)(a) + (uint)(b)) > 0xffffffffull)
#define SCARRY4(a,b) (((long long)(int)(a) + (int)(b)) > 2147483647ll || ((long long)(int)(a) + (int)(b)) < -2147483648ll)
#define SBORROW4(a,b) (((long long)(int)(a) - (int)(b)) > 2147483647ll || ((long long)(int)(a) - (int)(b)) < -2147483648ll)

'''


def candidates():
    functions = json.loads((ROOT / 'recovered/native/functions.json').read_text())
    bodies = {}
    for part in sorted((ROOT / 'recovered/native/decompiled').glob('part-*.c')):
        for block in re.split(r'// Address: ', part.read_text())[1:]:
            address, _, body = block.partition('\n')
            bodies[address.strip()] = body.strip() + '\n'
    selected = []
    for function in functions:
        if (function['thunk'] or not function.get('decompiled') or function.get('warnings') or
                function.get('indirectCalls') or function.get('callees') or function['bodyBytes'] <= 8):
            continue
        if 'thumb' not in function:
            raise RuntimeError('Re-export with NativeExport.java to obtain instruction-set modes.')
        body = bodies[function['address']]
        declaration, _, implementation = body.partition('{')
        signature = SIGNATURE.fullmatch(declaration.strip())
        if not signature or '*' in implementation or '[' in implementation or '/*' in implementation:
            continue
        parameters = [PARAMETER.fullmatch(p.strip()) for p in signature[3].split(',')]
        if not 1 <= len(parameters) <= 4 or not all(parameters):
            continue
        identifiers = set(re.findall(r'\b[A-Za-z_]\w*\b', implementation))
        if any(identifier not in KEYWORDS and
               not re.fullmatch(r'(?:param_\d+|[A-Za-z]+Var\d+)', identifier) for identifier in identifiers):
            continue
        selected.append({
            'name': function['name'], 'address': function['address'], 'thumb': function['thumb'],
            'signature': declaration.strip(), 'argumentTypes': [p[1] for p in parameters],
            'returnType': signature[1], 'sourceFile': 'recovered/native/' + function['file'],
            'sourceSha256': hashlib.sha256(body.encode()).hexdigest(), 'body': body,
        })
    if not selected:
        raise RuntimeError('No eligible scalar leaf functions were found.')
    return selected


def emit(folder, functions, compiler, compiler_version):
    folder.mkdir(parents=True, exist_ok=True)
    source = PREAMBLE + '\n'.join('// Address: ' + f['address'] + '\n' + f['body'] for f in functions)
    (folder / 'verified-functions.c').write_text(source)
    command = [str(compiler), '--target=wasm32-unknown-unknown', '-O2', '-ffreestanding', '-nostdlib',
               '-fwrapv', '-fno-strict-aliasing', '-Werror=implicit-function-declaration',
               '-Wl,--no-entry', '-Wl,--strip-all', '-Wl,--initial-memory=131072',
               '-Wl,--max-memory=131072', '-o', str(folder / 'verified-functions.wasm'),
               str(folder / 'verified-functions.c')]
    command.extend('-Wl,--export=' + f['name'] for f in functions)
    subprocess.run(command, check=True, capture_output=True, text=True)
    manifest = {
        'status': 'A tested scalar subset only. No game, renderer, or browser runtime is implemented here.',
        'originalExecutableSha256': hashlib.sha256((ROOT / 'recovered/game.s3e').read_bytes()).hexdigest(),
        'sourceSha256': hashlib.sha256(source.encode()).hexdigest(),
        'wasmSha256': hashlib.sha256((folder / 'verified-functions.wasm').read_bytes()).hexdigest(),
        'compiler': compiler_version,
        'compilerOptions': command[1:12],
        'functions': [{key: value for key, value in f.items() if key != 'body'} for f in functions],
    }
    (folder / 'manifest.json').write_text(json.dumps(manifest, indent=2) + '\n')


def verify(folder, allow_failures=False):
    command = ['node', str(ROOT / 'tools/verify-native-subset.cjs'), '--folder', str(folder)]
    if allow_failures:
        command.append('--allow-failures')
    subprocess.run(command, check=True)
    return json.loads((folder / 'verification.json').read_text())


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--clang', type=Path, required=True, help='WASI SDK clang executable.')
    args = parser.parse_args()
    compiler = args.clang.resolve()
    version = subprocess.check_output([str(compiler), '--version'], text=True).splitlines()[0]
    selected = candidates()
    work = ROOT / 'analysis-work/native-subset-candidates'
    emit(work, selected, compiler, version)
    report = verify(work, allow_failures=True)
    passed = {item['name'] for item in report['results'] if item['passed']}
    filtered = [f for f in selected if f['name'] in passed]
    if not filtered:
        raise RuntimeError('No candidate matched the reference executable.')
    output = ROOT / 'native'
    emit(output, filtered, compiler, version)
    verify(output)
    audit = {
        'candidateFunctions': len(selected), 'verifiedFunctions': len(filtered),
        'rejectedFunctions': [item for item in report['results'] if not item['passed']],
        'note': 'Only strict scalar candidates were considered. Passing this corpus is not proof for all inputs.',
    }
    (output / 'candidate-audit.json').write_text(json.dumps(audit, indent=2) + '\n')
    print(json.dumps({key: value for key, value in audit.items() if key != 'rejectedFunctions'}, indent=2))


if __name__ == '__main__':
    main()

#!/usr/bin/env python3
"""Summarize actual native-recovery outputs without treating pseudocode as a port."""
import collections
import hashlib
import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
OUTPUT = ROOT / 'recovered/native'


def main():
    functions = json.loads((OUTPUT / 'functions.json').read_text())
    decompilation = json.loads((OUTPUT / 'decompilation-report.json').read_text())
    abi = json.loads((OUTPUT / 'abi-report.json').read_text())
    subset = json.loads((ROOT / 'native/verification.json').read_text())
    bodies = {}
    files = sorted((OUTPUT / 'decompiled').glob('part-*.c'))
    for file in files:
        for block in re.split(r'// Address: ', file.read_text())[1:]:
            address, _, body = block.partition('\n')
            bodies[address.strip()] = body
    warnings = collections.Counter()
    markers = {key: [] for key in ('badInstruction', 'implicitRegisterInput', 'untypedAdditionalReturn')}
    patterns = {'badInstruction': r'\bhalt_baddata',
                'implicitRegisterInput': r'\bunaff_|\bin_r\d+',
                'untypedAdditionalReturn': r'\bextraout_'}
    for function in functions:
        if function['thunk']:
            continue
        body = bodies.get(function['address'], '')
        for warning in re.findall(r'/\* WARNING: (.*?)\*/', body, re.S):
            key = warning.strip().split('\n')[0]
            for prefix in ('Removing unreachable block', 'Could not recover jumptable', 'Heritage AFTER dead removal'):
                if key.startswith(prefix):
                    key = prefix
                    break
            warnings[key] += 1
        for name, pattern in patterns.items():
            count = len(re.findall(pattern, body))
            if count:
                markers[name].append({'name': function['name'], 'address': function['address'], 'occurrences': count})
    report = {
        'status': 'Native recovery checkpoint. Full game decompilation and a native browser game are NOT complete.',
        'wholeGameNativeBuildAvailable': False,
        'discoveredFunctions': decompilation['functionsDiscovered'],
        'thunkFunctions': decompilation['importThunks'],
        'decompiledFunctionBodies': decompilation['functionsDecompiled'],
        'decompilerWarningComments': decompilation['warningComments'],
        'indirectCallSites': decompilation['indirectCallSites'],
        'warningCategories': dict(warnings.most_common()),
        'reviewMarkers': markers,
        'hostAbi': abi,
        'nativeSubset': {'functions': subset['passedFunctions'], 'comparisons': subset['comparisons'],
                         'failures': subset['failedFunctions'], 'wasmSha256': subset['wasmSha256']},
        'outputFiles': len(files),
        'outputLines': sum(file.read_text().count('\n') for file in files),
        'analysisArchiveSha256': hashlib.sha256((OUTPUT / 'game-analysis.gzf').read_bytes()).hexdigest(),
        'limitations': [
            'Function discovery is not exhaustive; code and data share the executable image.',
            'A successful decompiler result may still contain invalid flow, types, or implicit register dependencies.',
            'Some warnings describe normal optimizations; warning totals are not a count of distinct bugs.',
            'Function counts and body bytes do not measure a percentage of completed gameplay.',
            'The scalar test corpus is finite and does not establish exhaustive equivalence.',
            'No native character creation, town simulation, rendering, audio, or saving has been validated.',
        ],
    }
    (OUTPUT / 'recovery-audit.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({key: value for key, value in report.items() if key not in ('reviewMarkers', 'limitations')}, indent=2))


if __name__ == '__main__':
    main()

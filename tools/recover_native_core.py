#!/usr/bin/env python3
"""Apply recovered core ABI contracts to the preserved Ghidra analysis database."""
import argparse
import hashlib
import json
import os
import subprocess
import uuid
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]


def contract_sources(path, seen=None, addresses=None):
    seen = set() if seen is None else seen
    addresses = set() if addresses is None else addresses
    path = path.resolve()
    if path in seen:
        raise RuntimeError('Repeated/cyclic contract source: ' + str(path))
    seen.add(path)
    data = path.read_bytes()
    config = json.loads(data)
    sources = []
    if config.get('analysisBaseContracts'):
        sources.extend(contract_sources(ROOT / config['analysisBaseContracts'], seen, addresses))
    for entry in config['functions']:
        if entry['address'] in addresses:
            raise RuntimeError('Duplicate contract address: ' + entry['address'])
        addresses.add(entry['address'])
    sources.append({'path': path.relative_to(ROOT).as_posix(),
                    'sha256': hashlib.sha256(data).hexdigest(), 'functions': len(config['functions'])})
    return sources


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--ghidra', required=True, type=Path)
    parser.add_argument('--jdk', type=Path)
    parser.add_argument('--database', type=Path, default=ROOT / 'analysis-work/core-ghidra')
    parser.add_argument('--name', default='Sims3RecoveredCore')
    parser.add_argument('--resume', action='store_true')
    parser.add_argument('--contracts', type=Path, default=ROOT / 'native/core/contracts.json')
    parser.add_argument('--output', type=Path, default=ROOT / 'recovered/native/core-analysis')
    args = parser.parse_args()
    database = args.database.resolve()
    database.mkdir(parents=True, exist_ok=True)
    exists = (database / (args.name + '.gpr')).exists()
    if exists != args.resume:
        parser.error('Use --resume for an existing project, or choose a new --name for a fresh one.')
    launcher = args.ghidra.resolve() / 'support' / ('analyzeHeadless.bat' if os.name == 'nt' else 'analyzeHeadless')
    token = uuid.uuid4().hex
    command = [str(launcher), str(database), args.name]
    command += ['-process', 'game-analysis'] if args.resume else ['-import', str(ROOT / 'recovered/native/game-analysis.gzf')]
    command += ['-noanalysis', '-scriptPath', str(ROOT / 'tools/ghidra'),
                '-postScript', 'NativeCoreContracts.java', str(ROOT), token, str(args.contracts.resolve()), str(args.output.resolve()),
                '-log', str(database / (args.name + '.log'))]
    environment = os.environ.copy()
    if args.jdk:
        environment['JAVA_HOME'] = str(args.jdk.resolve())
    subprocess.run(command, env=environment, check=True)
    report = json.loads((args.output / 'report.json').read_text())
    if report.get('runToken') != token:
        raise RuntimeError('Ghidra did not produce a completion report for this run.')
    contracts = args.contracts.read_bytes()
    if report['contractsSha256'] != hashlib.sha256(contracts).hexdigest():
        raise RuntimeError('Annotations reference a different contract file.')
    config = json.loads(contracts)
    sources = contract_sources(args.contracts)
    expected = sum(source['functions'] for source in sources)
    if report.get('contractSources') != sources:
        raise RuntimeError('Annotation source chain or provenance changed.')
    if config.get('analysisBaseContracts'):
        base_contracts = (ROOT / config['analysisBaseContracts']).read_bytes()
        if report.get('baseContractsSha256') != hashlib.sha256(base_contracts).hexdigest():
            raise RuntimeError('Base annotation contracts changed.')
    if config.get('hostContracts') and report.get('observedHostSignaturesApplied') != len(config['hostContracts']):
        raise RuntimeError('Incomplete observed host annotations.')
    if not report['analysisImageUnchanged'] or report['contractsApplied'] != expected:
        raise RuntimeError('Incomplete core annotations or modified executable bytes.')
    print(json.dumps(report, indent=2))


if __name__ == '__main__':
    main()

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


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--ghidra', required=True, type=Path)
    parser.add_argument('--jdk', type=Path)
    parser.add_argument('--database', type=Path, default=ROOT / 'analysis-work/core-ghidra')
    parser.add_argument('--name', default='Sims3RecoveredCore')
    parser.add_argument('--resume', action='store_true')
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
                '-postScript', 'NativeCoreContracts.java', str(ROOT), token,
                '-log', str(database / (args.name + '.log'))]
    environment = os.environ.copy()
    if args.jdk:
        environment['JAVA_HOME'] = str(args.jdk.resolve())
    subprocess.run(command, env=environment, check=True)
    report = json.loads((ROOT / 'recovered/native/core-analysis/report.json').read_text())
    if report.get('runToken') != token:
        raise RuntimeError('Ghidra did not produce a completion report for this run.')
    contracts = (ROOT / 'native/core/contracts.json').read_bytes()
    if report['contractsSha256'] != hashlib.sha256(contracts).hexdigest():
        raise RuntimeError('Annotations reference a different contract file.')
    if not report['analysisImageUnchanged'] or report['contractsApplied'] != len(json.loads(contracts)['functions']):
        raise RuntimeError('Incomplete core annotations or modified executable bytes.')
    print(json.dumps(report, indent=2))


if __name__ == '__main__':
    main()

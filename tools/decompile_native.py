#!/usr/bin/env python3
"""Run native ARM recovery with Ghidra. Output is analysis, not a compiled port."""
import argparse
import json
import os
import subprocess
import sys
from pathlib import Path

PROJECT = Path(__file__).resolve().parents[1]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--ghidra', type=Path, required=True, help='Ghidra installation directory.')
    parser.add_argument('--jdk', type=Path, help='Compatible JDK installation directory.')
    parser.add_argument('--project', type=Path, default=PROJECT)
    parser.add_argument('--database', type=Path, help='Persistent analysis working directory.')
    parser.add_argument('--name', default='Sims3Native')
    parser.add_argument('--resume', action='store_true', help='Reuse an existing seeded Ghidra project.')
    args = parser.parse_args()
    project = args.project.resolve()
    database = (args.database or project / 'analysis-work').resolve()
    database.mkdir(parents=True, exist_ok=True)
    output = project / 'recovered/native'
    launcher = args.ghidra.resolve() / 'support' / ('analyzeHeadless.bat' if os.name == 'nt' else 'analyzeHeadless')
    environment = os.environ.copy()
    if args.jdk:
        environment['JAVA_HOME'] = str(args.jdk.resolve())
    common = [str(launcher), str(database), args.name,
              '-scriptPath', str(project / 'tools/ghidra'), '-max-cpu', '4']
    if not args.resume:
        if (database / (args.name + '.gpr')).exists():
            parser.error('Analysis project already exists. Use --resume or choose a new --name.')
        subprocess.run([sys.executable, str(project / 'tools/prepare_native.py'),
                        '--project', str(project)], check=True)
        seed_report = output / 'seed-report.json'
        if seed_report.exists():
            seed_report.unlink()
        subprocess.run(common + ['-import', str(output / 'game-analysis.elf'),
                       '-processor', 'ARM:LE:32:v4t', '-cspec', 'default',
                       '-preScript', 'NativeSeed.java', str(output / 'analysis-input.json'),
                       '-noanalysis', '-log', str(database / 'seed.log')],
                       check=True, env=environment)
    seed = json.loads((output / 'seed-report.json').read_text())
    inputs = json.loads((output / 'analysis-input.json').read_text())
    expected_entries = len(inputs['imports']) + sum(item['thumb'] is not None for item in inputs['imports'])
    if seed['importEntryPoints'] != expected_entries:
        raise RuntimeError('Import seeding was incomplete; refusing to run a misleading decompilation.')
    report_file = output / 'decompilation-report.json'
    if report_file.exists():
        report_file.unlink()
    abi_report = output / 'abi-report.json'
    if abi_report.exists():
        abi_report.unlink()
    subprocess.run(common + ['-process', 'game-analysis.elf',
                   '-preScript', 'NativeAbi.java', str(output), '-analysisTimeoutPerFile', '600',
                   '-postScript', 'NativeExport.java', str(output),
                   '-postScript', 'NativeMap.java', str(output),
                   '-log', str(database / 'analysis.log')], check=True, env=environment)
    report = json.loads(report_file.read_text())
    abi = json.loads(abi_report.read_text())
    if abi['khronosSignaturesApplied'] != 187:
        raise RuntimeError('Khronos ABI annotation did not complete.')
    print(json.dumps(report, indent=2))


if __name__ == '__main__':
    main()

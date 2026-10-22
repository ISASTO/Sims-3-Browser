#!/usr/bin/env python3
"""Verify an owner-supplied IPA, extract it, and regenerate the C translation.

Usage: python3 tools/prepare.py /path/to/game.ipa
Generated files remain in original/, extract/, analysis/ and build/.
"""
import argparse
import hashlib
from pathlib import Path
import shutil
import subprocess
import sys
import zipfile

from project import ROOT

EXPECTED = '8820bd6221c288d3d2d413ccd013b2300276a22c55cdaa14399af18b745c55aa'
EXECUTABLE = '2fe8b7be460abc5da42afa478e4b9773727320fe5a9c2aad2df01f12eda164e1'
APP = 'Payload/sims3_iphone.app/'


def sha256(path):
    with open(path, 'rb') as f:
        return hashlib.file_digest(f, 'sha256').hexdigest()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('ipa', type=Path)
    args = parser.parse_args()
    if sha256(args.ipa) != EXPECTED:
        parser.error('IPA SHA-256 does not match the supported Sims 3 iOS 1.4.16 build')
    root = Path(ROOT)
    for d in ('original', 'extract', 'analysis', 'build/gen'):
        (root / d).mkdir(parents=True, exist_ok=True)
    original = root / 'original/com_ea_sims3inc-iOS8_0.ipa'
    if not original.exists():
        shutil.copyfile(args.ipa, original)
    elif sha256(original) != EXPECTED:
        parser.error('An existing original IPA has a different hash; preserve and inspect it first')
    original.chmod(0o444)
    dest = root / 'extract'
    with zipfile.ZipFile(original) as archive:
        for item in archive.infolist():
            if not item.filename.startswith(APP):
                continue
            path = dest / item.filename
            if not path.resolve().is_relative_to(dest.resolve()):
                parser.error('Unsafe path in IPA')
            if item.is_dir():
                path.mkdir(parents=True, exist_ok=True)
            else:
                path.parent.mkdir(parents=True, exist_ok=True)
                with archive.open(item) as src, path.open('wb') as out:
                    shutil.copyfileobj(src, out)
    exe = root / 'original/sims3_iphone'
    if exe.exists() and sha256(exe) != EXECUTABLE:
        parser.error('An existing original executable has a different hash')
    if not exe.exists():
        shutil.copyfile(dest / APP / 'sims3_iphone', exe)
    if sha256(exe) != EXECUTABLE:
        parser.error('Executable SHA-256 does not match the supported build')
    exe.chmod(0o444)
    commands = [
        ['stabs.py', str(exe), 'analysis/stabs.json'],
        ['symmap.py', str(exe), 'analysis/stabs.json', 'analysis/functions.json'],
        ['objc.py', str(exe), 'analysis/objc.json'],
        ['callgraph.py'],
        ['manifest.py'],
        ['thumb2c.py', 'build/gen'],
    ]
    for command in commands:
        print('+', ' '.join(command), flush=True)
        subprocess.run([sys.executable, str(root / 'tools' / command[0]), *command[1:]],
                       cwd=root, check=True)
    print('Ready: make -j4 wasm', flush=True)


if __name__ == '__main__':
    main()

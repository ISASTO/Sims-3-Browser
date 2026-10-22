#!/usr/bin/env python3
"""Prepare the private Sims 3 browser build with your own copy of the game.

Usage:  python3 setup.py /path/to/com_ea_sims3inc-iOS8_0.ipa

Checks that the IPA is the version this build was made from, extracts the app bundle (the game's resources) into
./bundle next to this script, and writes web/bundle-manifest.json (file sizes and folders the browser host needs).
Nothing is uploaded anywhere.
"""
import hashlib, json, os, shutil, sys, zipfile

EXPECTED_SHA256 = '8820bd6221c288d3d2d413ccd013b2300276a22c55cdaa14399af18b745c55aa'
APP = 'Payload/sims3_iphone.app/'
here = os.path.dirname(os.path.abspath(__file__))


def main():
    if len(sys.argv) != 2:
        sys.exit(__doc__)
    ipa = sys.argv[1]
    h = hashlib.sha256()
    with open(ipa, 'rb') as f:
        for chunk in iter(lambda: f.read(1 << 20), b''):
            h.update(chunk)
    if h.hexdigest() != EXPECTED_SHA256:
        sys.exit(f'This IPA is not the one this build was made from (SHA-256 {h.hexdigest()}).\n'
                 f'Expected {EXPECTED_SHA256} (The Sims 3 1.4.16, com_ea_sims3inc-iOS8_0.ipa).')
    out = os.path.join(here, 'bundle')
    if os.path.exists(out):
        shutil.rmtree(out)
    files, dirs = {}, {''}
    with zipfile.ZipFile(ipa) as z:
        for info in z.infolist():
            if not info.filename.startswith(APP) or info.filename == APP:
                continue
            rel = info.filename[len(APP):]
            if '..' in rel.split('/'):
                continue
            dst = os.path.join(out, *rel.rstrip('/').split('/'))
            if info.is_dir():
                os.makedirs(dst, exist_ok=True)
                dirs.add(rel.rstrip('/'))
                continue
            os.makedirs(os.path.dirname(dst), exist_ok=True)
            with z.open(info) as src, open(dst, 'wb') as d:
                shutil.copyfileobj(src, d)
            files[rel] = info.file_size
            parts = rel.split('/')
            for i in range(1, len(parts)):
                dirs.add('/'.join(parts[:i]))
    with open(os.path.join(here, 'web', 'bundle-manifest.json'), 'w') as f:
        json.dump({'files': files, 'dirs': sorted(dirs)}, f, separators=(',', ':'))
    print(f'Extracted {len(files)} files ({sum(files.values()) >> 20} MiB) into {out}')
    print('Now run:  python3 serve.py   and open http://127.0.0.1:8333/')


if __name__ == '__main__':
    main()

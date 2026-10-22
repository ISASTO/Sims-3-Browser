#!/usr/bin/env python3
"""Compare every static-site resource against the extracted input; validate the wasm too."""
import argparse
import gzip
import hashlib
import json
from pathlib import Path
from project import ROOT


def main():
    root = Path(ROOT)
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--site', type=Path, default=root / 'build/site')
    parser.add_argument('--bundle', type=Path, default=root / 'extract/Payload/sims3_iphone.app')
    parser.add_argument('--wasm', type=Path, default=root / 'build/web/sims3.wasm')
    args = parser.parse_args()
    manifest = json.loads((args.site / 'bundle-manifest.json').read_text())
    packs = {}
    for name, size in manifest['packs'].items():
        data = (args.site / 'packs' / name).read_bytes()
        assert len(data) == size, name
        assert hashlib.sha256(data).hexdigest()[:16] in name, name
        packs[name] = data
    for rel, size in manifest['files'].items():
        if rel in manifest['storage']:
            name, offset, length, compressed = manifest['storage'][rel]
            assert 0 <= offset <= offset + length <= len(packs[name]), rel
            data = packs[name][offset:offset + length]
            data = gzip.decompress(data) if compressed else data
        else:
            data = (args.site / 'bundle' / rel).read_bytes()
        assert len(data) == size and data == (args.bundle / rel).read_bytes(), rel
    runtime = manifest['runtime']
    data = (args.site / runtime['url']).read_bytes()
    data = gzip.decompress(data) if runtime.get('encoding') == 'gzip' else data
    assert len(data) == runtime['bytes'], 'wasm size'
    assert hashlib.sha256(data).hexdigest() == runtime['sha256'], 'wasm hash'
    assert data == args.wasm.read_bytes(), 'wasm contents'
    print(f"PASS: {len(manifest['files'])} resources, {len(packs)} packs and WebAssembly match the local input byte for byte")


if __name__ == '__main__':
    main()

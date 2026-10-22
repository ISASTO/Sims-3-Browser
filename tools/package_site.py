#!/usr/bin/env python3
"""Create a self-contained static site, including the recompiled game and bundle resources.

Run after make wasm. Assets are losslessly compressed in small packs, so no server-side
code, custom Content-Encoding header, or cross-origin isolation is required.
"""
import argparse
import gzip
import hashlib
import json
import re
from pathlib import Path
import shutil
import tempfile

from project import ROOT

PACK_SIZE = 4 << 20
WEB_FILES = ('index.html', 'sims3.js', 'gl.js', 'player.js', 'vendor/fflate.js', 'vendor/fflate-LICENSE.txt')


def package(bundle, web, out):
    out.mkdir(parents=True, exist_ok=True)
    (out / 'packs').mkdir(exist_ok=True)
    host_version = hashlib.sha256(b''.join((web / name).read_bytes() for name in WEB_FILES)).hexdigest()[:16]
    for name in WEB_FILES:
        dst = out / name
        dst.parent.mkdir(parents=True, exist_ok=True)
        shutil.copyfile(web / name, dst)
        # A new shell must not import an older cached graphics adapter. Query versions work on
        # ordinary Pages hosting and leave the loose development build untouched.
        if name == 'index.html':
            dst.write_text(dst.read_text().replace('src="sims3.js"', f'src="sims3.js?v={host_version}"'))
        elif name.endswith('.js'):
            dst.write_text(re.sub(r'''(\bfrom\s+['"])(\./[^'"?]+\.js)(['"])''',
                                  lambda m: f'{m[1]}{m[2]}?v={host_version}{m[3]}', dst.read_text()))
    files, dirs, storage, packs = {}, {''}, {}, {}
    block = bytearray()
    entries = []

    def finish_pack():
        if not entries:
            return
        digest = hashlib.sha256(block).hexdigest()[:16]
        name = f'assets-{len(packs):03d}-{digest}.bin'
        (out / 'packs' / name).write_bytes(block)
        packs[name] = len(block)
        for rel, offset, length, compressed in entries:
            storage[rel] = [name, offset, length, compressed]
        block.clear()
        entries.clear()

    order_path = Path(ROOT) / 'tools/resource-order.json'
    order = json.loads(order_path.read_text()) if order_path.exists() else []
    priority = {name: i for i, name in enumerate(order)}
    paths = sorted(bundle.rglob('*'), key=lambda p: (priority.get(p.relative_to(bundle).as_posix(), len(priority)), p.as_posix()))
    for path in paths:
        if not path.is_file():
            continue
        rel = path.relative_to(bundle).as_posix()
        # File-sync staging files are not part of the IPA and must not enter a release pack.
        if any(part.startswith('.') for part in path.relative_to(bundle).parts):
            continue
        # Signing records and device/application logs are not runtime resources.
        if rel.split('/')[0] in ('_CodeSignature', 'SC_Info', '_MASReceipt') or path.name in ('NimbleLog.plist', 'embedded.mobileprovision', '.DS_Store'):
            continue
        data = path.read_bytes()
        files[rel] = len(data)
        parent = Path(rel).parent
        while parent != Path('.'):
            dirs.add(parent.as_posix())
            parent = parent.parent
        if not rel.startswith('StoreHelp/'):
            compressed = gzip.compress(data, compresslevel=9, mtime=0)
            packed = len(compressed) + 32 < len(data)
            payload = compressed if packed else data
            if block and len(block) + len(payload) > PACK_SIZE:
                finish_pack()
            entries.append((rel, len(block), len(payload), int(packed)))
            block.extend(payload)
        else:
            dst = out / 'bundle' / rel
            dst.parent.mkdir(parents=True, exist_ok=True)
            dst.write_bytes(data)
    finish_pack()
    wasm = (web / 'sims3.wasm').read_bytes()
    wasm_hash = hashlib.sha256(wasm).hexdigest()
    wasm_name = f'game-code-{wasm_hash[:16]}.bin'
    (out / wasm_name).write_bytes(gzip.compress(wasm, compresslevel=9, mtime=0))
    manifest = {'files': files, 'dirs': sorted(dirs), 'storage': storage, 'packs': packs,
                'preload': list(dict.fromkeys(storage[name][0] for name in order if name in storage))[:3],
                'runtime': {'url': wasm_name, 'encoding': 'gzip', 'bytes': len(wasm), 'sha256': wasm_hash},
                'hostVersion': host_version}
    (out / 'bundle-manifest.json').write_text(json.dumps(manifest, separators=(',', ':')))
    (out / '.nojekyll').touch()
    total = sum(p.stat().st_size for p in out.rglob('*') if p.is_file())
    print(f'Static site: {out}; {len(files)} resources, {len(packs)} packs, {total / (1 << 20):.1f} MiB')
    return manifest


def main():
    root = Path(ROOT)
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--out', type=Path, default=root / 'build/site')
    parser.add_argument('--bundle', type=Path, default=root / 'extract/Payload/sims3_iphone.app')
    parser.add_argument('--web', type=Path, default=root / 'build/web')
    args = parser.parse_args()
    if args.out.is_symlink():
        parser.error('Output must be a directory, not a symlink')
    if args.out.exists() and any(args.out.iterdir()):
        previous = args.out / 'bundle-manifest.json'
        if not previous.is_file() or 'storage' not in json.loads(previous.read_text()):
            parser.error('Refusing to replace a directory that is not a generated static site')
    args.out.parent.mkdir(parents=True, exist_ok=True)
    with tempfile.TemporaryDirectory(prefix='sims3-site-', dir=args.out.parent) as temporary:
        staged = Path(temporary) / 'site'
        package(args.bundle, args.web, staged)
        if args.out.exists():
            shutil.rmtree(args.out)
        shutil.move(str(staged), args.out)
    print('Ready:', args.out)


if __name__ == '__main__':
    main()

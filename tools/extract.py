#!/usr/bin/env python3
"""Recover the supplied Marmalade APK and generate a browser-readable asset pack.

No Android code is executed. The APK and DTRZ paths are checked before extraction.
"""
import argparse
import hashlib
import json
import lzma
import struct
import zipfile
from pathlib import Path, PurePosixPath


def safe_path(name):
    name = name.replace('\\', '/')
    p = PurePosixPath(name)
    if p.is_absolute() or '..' in p.parts:
        raise ValueError(f'Unsafe archive path: {name!r}')
    return p


def s3e_info(data):
    if data[:4] != b'XE3U':
        data = lzma.decompress(data, format=lzma.FORMAT_ALONE)
    if data[:4] != b'XE3U' or len(data) < 72:
        raise ValueError('Not a supported XE3U executable')
    keys = ['fixupOffset', 'fixupSize', 'codeOffset', 'codeFileSize',
            'codeMemSize', 'signatureOffset', 'signatureSize', 'entryOffset',
            'configOffset', 'configSize', 'originalBase', 'extraOffset', 'extraSize']
    h = dict(zip(keys, struct.unpack_from('<13I', data, 12)))
    h.update(version=struct.unpack_from('<I', data, 4)[0],
             flags=struct.unpack_from('<H', data, 8)[0],
             architecture=struct.unpack_from('<H', data, 10)[0])
    pos = h['fixupOffset']
    end = pos + h['fixupSize']
    symbols, relocations = [], []
    while pos < end:
        kind, size = struct.unpack_from('<II', data, pos)
        if size < 8 or pos + size > end:
            raise ValueError('Invalid fixup section')
        body = pos + 8
        if kind == 0:
            count = struct.unpack_from('<H', data, body)[0]
            strings = data[body+2:pos+size].split(b'\0')
            symbols = [s.decode('ascii') for s in strings[:count]]
        elif kind in (2, 3, 4):
            count = struct.unpack_from('<I', data, body)[0]
            for i in range(count):
                hi, lo, sym = struct.unpack_from('<HHH', data, body + 4 + 6*i)
                relocations.append({'kind': kind, 'offset': (hi << 16) | lo, 'symbol': sym})
        pos += size
    h['symbols'] = symbols
    h['externalRelocations'] = relocations
    return data, h


def extract_dtrz(data):
    if data[:4] != b'DTRZ':
        raise ValueError('Not DTRZ')
    count, group_count = struct.unpack_from('<HH', data, 4)
    cursor = 9
    def string():
        nonlocal cursor
        end = data.index(0, cursor)
        result = data[cursor:end].decode('utf-8')
        cursor = end + 1
        return result
    names = [string() for _ in range(count)]
    groups = [''] + [string() for _ in range(group_count - 1)]
    attrs = [struct.unpack_from('<HHH', data, cursor + 6*i) for i in range(count)]
    cursor += count*6
    _, record_count = struct.unpack_from('<HH', data, cursor)
    cursor += 4
    if record_count != count:
        raise ValueError('Unexpected DTRZ record count')
    records = [struct.unpack_from('<IIII', data, cursor + 16*i) for i in range(count)]
    offsets = sorted(set(r[0] for r in records) | {len(data)})
    ends = dict(zip(offsets, offsets[1:]))
    for name, (group, _, _), (offset, length, _, method) in zip(names, attrs, records):
        if group >= len(groups) or offset not in ends:
            raise ValueError('Invalid DTRZ range or group')
        path = safe_path(str(PurePosixPath(groups[group].replace('\\', '/')) / name))
        compressed = data[offset:ends[offset]]
        if method != 512:
            raise ValueError(f'Unsupported DTRZ method: {method}')
        dec = lzma.LZMADecompressor(format=lzma.FORMAT_ALONE)
        raw = dec.decompress(compressed)
        if len(raw) != length or not dec.eof:
            raise ValueError(f'Length/stream verification failed for {path}')
        yield str(path), raw


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('apk', type=Path)
    parser.add_argument('--output', type=Path, default=Path(__file__).resolve().parents[1])
    args = parser.parse_args()
    recovered = args.output / 'recovered'
    web = args.output / 'web'
    recovered.mkdir(parents=True, exist_ok=True)
    web.mkdir(parents=True, exist_ok=True)
    assets, inventory = {}, []
    with zipfile.ZipFile(args.apk) as apk:
        for info in apk.infolist():
            p = safe_path(info.filename)
            inventory.append({'name': str(p), 'bytes': info.file_size, 'crc32': f'{info.CRC:08x}'})
            if str(p).startswith('assets/') and not info.is_dir():
                assets[str(p)[7:]] = apk.read(info)
        game, header = s3e_info(assets['The Sims 3.s3e'])
        (recovered / 'game.s3e').write_bytes(game)
        (web / 'game.s3e').write_bytes(game)
        (recovered / 'classes.dex').write_bytes(apk.read('classes.dex'))
        (recovered / 'libthesims3.so').write_bytes(apk.read('lib/armeabi/libthesims3.so'))
    expanded = dict(extract_dtrz(assets['res.dz']))
    (recovered / 's3e-header.json').write_text(json.dumps(header, indent=2))
    (recovered / 'apk-inventory.json').write_text(json.dumps(inventory, indent=2))
    (recovered / 'dtrz-inventory.json').write_text(json.dumps(
        [{'name': name, 'bytes': len(raw), 'sha256': hashlib.sha256(raw).hexdigest()}
         for name, raw in expanded.items()], indent=2))
    for name, raw in expanded.items():
        dest = recovered / 'assets' / name
        dest.parent.mkdir(parents=True, exist_ok=True)
        dest.write_bytes(raw)
    assets.update(expanded)
    index = {}
    with (web / 'assets.pack').open('wb') as out:
        for name, raw in assets.items():
            index[name.lower()] = [out.tell(), len(raw)]
            out.write(raw)
    web_assets = {}
    resource_dir = web / 'data'
    resource_dir.mkdir(exist_ok=True)
    for i, (name, raw) in enumerate(assets.items()):
        chunks = []
        for j, offset in enumerate(range(0, len(raw), 8*1024*1024)):
            filename = f'{i:04d}-{j}.bin'
            (resource_dir / filename).write_bytes(raw[offset:offset+8*1024*1024])
            chunks.append('data/' + filename)
        web_assets[name.lower()] = {'parts': chunks, 'size': len(raw),
                                    'sha256': hashlib.sha256(raw).hexdigest()}
    manifest = {'header': header, 'assets': index, 'webAssets': web_assets,
                'apkSha256': hashlib.sha256(args.apk.read_bytes()).hexdigest()}
    (web / 'manifest.json').write_text(json.dumps(manifest, indent=2))
    print(json.dumps({'apkEntries': len(inventory), 'recoveredMembers': len(expanded),
                      'assetPackBytes': (web/'assets.pack').stat().st_size,
                      'gameBytes': len(game), 'imports': len(header['symbols']),
                      'gameEntry': hex(header['originalBase'] + header['entryOffset'])}, indent=2))


if __name__ == '__main__':
    main()

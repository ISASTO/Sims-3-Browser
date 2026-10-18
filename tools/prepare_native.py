#!/usr/bin/env python3
"""Create a reproducible ARM/Thumb analysis image; never patch the playable binary."""
import argparse
import hashlib
import json
import struct
from pathlib import Path

PROJECT = Path(__file__).resolve().parents[1]


def prepare(project=PROJECT):
    recovered = project / 'recovered'
    output = recovered / 'native'
    output.mkdir(exist_ok=True)
    header = json.loads((recovered / 's3e-header.json').read_text())
    original = (recovered / 'game.s3e').read_bytes()
    original_image = original[header['codeOffset']:header['codeOffset'] + header['codeFileSize']]
    image = bytearray(original_image)
    base = header['originalBase']
    imports = []
    for relocation in header['externalRelocations']:
        offset = relocation['offset']
        assert struct.unpack_from('<I', image, offset)[0] == 0xeafffffe
        # The original host rewrites this branch. Model an opaque returning
        # external function instead of letting analysis infer an infinite loop.
        struct.pack_into('<I', image, offset, 0xe12fff1e)
        has_thumb = offset >= 4 and struct.unpack_from('<I', original_image, offset - 4)[0] == 0x46c04778
        imports.append({'name': header['symbols'][relocation['symbol']],
                        'thumb': base + offset - 4 if has_thumb else None, 'arm': base + offset,
                        'originalWord': 'eafffffe', 'analysisWord': 'e12fff1e'})

    internal = []
    cursor = header['fixupOffset']
    end = cursor + header['fixupSize']
    while cursor < end:
        kind, size = struct.unpack_from('<II', original, cursor)
        if size < 8 or cursor + size > end:
            raise ValueError('Invalid fixup block')
        if kind == 1:
            count = struct.unpack_from('<I', original, cursor + 8)[0]
            internal.extend(struct.unpack_from(f'<{count}I', original, cursor + 12))
        cursor += size

    seeds = {}
    for offset in internal:
        pointer = struct.unpack_from('<I', image, offset)[0]
        target = (pointer & ~1) - base
        if target < 0 or target + 4 > len(image):
            continue
        half = struct.unpack_from('<H', image, target)[0]
        word = struct.unpack_from('<I', image, target)[0]
        # Only seed relocated function pointers with a strong stack prologue.
        # Other relocation targets may be strings, objects, or vtables.
        if pointer & 1 and half & 0xff00 == 0xb500:
            seeds[target] = True
        elif pointer % 4 == 0 and word & 0xffff4000 == 0xe92d4000:
            seeds[target] = False

    names = bytearray(b'\0')
    symbols = bytearray(16)
    def symbol(name, address):
        index = len(names)
        names.extend(name.encode('ascii') + b'\0')
        symbols.extend(struct.pack('<IIIBBH', index, address, 0, 0x12, 0, 1))
    symbol('s3e_game_entry', base + header['entryOffset'])
    for index, item in enumerate(imports):
        if item['thumb'] is not None:
            symbol('host_' + item['name'] + '_thumb_' + str(index), item['thumb'] | 1)
        symbol('host_' + item['name'] + '_arm_' + str(index), item['arm'])

    section_names = b'\0.image\0.bss\0.symtab\0.strtab\0.shstrtab\0'
    blob = bytearray(4096)
    blob.extend(image)
    def append(data):
        while len(blob) % 4:
            blob.append(0)
        offset = len(blob)
        blob.extend(data)
        return offset
    symoff, stroff, shstroff = append(symbols), append(names), append(section_names)
    while len(blob) % 4:
        blob.append(0)
    shoff = len(blob)
    blob.extend(bytes(40))
    sections = [
        (1, 1, 7, base, 4096, len(image), 0, 0, 4, 0),
        (8, 8, 3, base + len(image), 4096 + len(image), header['codeMemSize'] - len(image), 0, 0, 4, 0),
        (13, 2, 0, 0, symoff, len(symbols), 4, 1, 4, 16),
        (21, 3, 0, 0, stroff, len(names), 0, 0, 1, 0),
        (29, 3, 0, 0, shstroff, len(section_names), 0, 0, 1, 0),
    ]
    for section in sections:
        blob.extend(struct.pack('<10I', *section))
    ident = b'\x7fELF\x01\x01\x01' + bytes(9)
    entry = base + header['entryOffset']
    blob[:52] = struct.pack('<16sHHIIIIIHHHHHH', ident, 2, 40, 1, entry, 52, shoff,
                           0x5000000, 52, 32, 1, 40, 6, 5)
    blob[52:84] = struct.pack('<8I', 1, 4096, base, base, len(image), header['codeMemSize'], 7, 4096)
    (output / 'game-analysis.elf').write_bytes(blob)
    metadata = {
        'status': 'Analysis input only; not a recompiled game.',
        'originalExecutableSha256': hashlib.sha256(original).hexdigest(),
        'analysisElfSha256': hashlib.sha256(blob).hexdigest(),
        'language': 'ARM:LE:32:v4t', 'compiler': 'default',
        'base': base, 'entry': entry, 'codeFileSize': len(image), 'codeMemSize': header['codeMemSize'],
        'imports': imports, 'internalRelocations': internal,
        'functionPointerSeeds': [{'address': base + offset, 'thumb': thumb}
                                 for offset, thumb in sorted(seeds.items())],
    }
    (output / 'analysis-input.json').write_text(json.dumps(metadata, indent=2) + '\n')
    print(json.dumps({'imports': len(imports), 'relocations': len(internal),
                      'functionPointerSeeds': len(seeds), 'elfBytes': len(blob)}))


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--project', type=Path, default=PROJECT)
    prepare(parser.parse_args().project.resolve())

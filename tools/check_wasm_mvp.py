#!/usr/bin/env python3
"""Inspect the actual Wasm encoding for the WebAssembly MVP feature baseline.

This is a feature audit, not a replacement for engine type validation. It decodes
instruction immediates instead of searching raw bytes for forbidden prefixes.
"""
import argparse
import collections
import hashlib
import json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
VALUE_TYPES = {0x7f, 0x7e, 0x7d, 0x7c}


class Reader:
    def __init__(self, data):
        self.data, self.offset = data, 0

    def byte(self):
        if self.offset >= len(self.data):
            raise ValueError('Truncated Wasm encoding')
        value = self.data[self.offset]
        self.offset += 1
        return value

    def take(self, length):
        value = self.data[self.offset:self.offset + length]
        if len(value) != length:
            raise ValueError('Truncated Wasm section')
        self.offset += length
        return value

    def integer(self):
        result = shift = 0
        for _ in range(10):
            value = self.byte()
            result |= (value & 127) << shift
            if not value & 128:
                return result
            shift += 7
        raise ValueError('Overlong LEB integer')

    def name(self):
        return self.take(self.integer()).decode('utf8')


def value_type(reader):
    value = reader.byte()
    if value not in VALUE_TYPES:
        raise ValueError(f'Non-MVP value type: 0x{value:02x}')
    return value


def limits(reader):
    flags = reader.integer()
    if flags not in (0, 1):
        raise ValueError('Shared memory, memory64, or another extended limit encoding')
    minimum = reader.integer()
    maximum = reader.integer() if flags else None
    return {'initialPages': minimum, 'maximumPages': maximum, 'shared': False}


def initializer(reader):
    op = reader.byte()
    if op in (0x41, 0x42, 0x23):
        reader.integer()
    elif op in (0x43, 0x44):
        reader.take(4 if op == 0x43 else 8)
    else:
        raise ValueError('Extended constant-expression instruction')
    if reader.byte() != 0x0b:
        raise ValueError('Extended constant expression')


def instructions(reader, counts):
    final = None
    while reader.offset < len(reader.data):
        op = reader.byte()
        final = op
        counts[f'0x{op:02x}'] += 1
        if op in (0x02, 0x03, 0x04):
            block_type = reader.byte()
            if block_type != 0x40 and block_type not in VALUE_TYPES:
                raise ValueError('Indexed/multi-value block type')
        elif op in (0x0c, 0x0d, 0x10, 0x20, 0x21, 0x22, 0x23, 0x24, 0x41, 0x42):
            reader.integer()
        elif op == 0x0e:
            for _ in range(reader.integer() + 1):
                reader.integer()
        elif op == 0x11:
            reader.integer()
            if reader.integer() != 0:
                raise ValueError('Multiple tables')
        elif 0x28 <= op <= 0x3e:
            reader.integer(); reader.integer()
        elif op in (0x3f, 0x40):
            if reader.integer() != 0:
                raise ValueError('Multiple memories')
        elif op in (0x43, 0x44):
            reader.take(4 if op == 0x43 else 8)
        elif op in (0x00, 0x01, 0x05, 0x0b, 0x0f, 0x1a, 0x1b) or 0x45 <= op <= 0xbf:
            pass
        else:
            raise ValueError(f'Non-MVP instruction: 0x{op:02x}')
    if final != 0x0b:
        raise ValueError('Function body has no terminal end')


def inspect(data, allowed_imports=None):
    reader = Reader(data)
    if reader.take(8) != b'\0asm\x01\0\0\0':
        raise ValueError('Expected a version-1 Wasm module')
    counts = collections.Counter()
    memories, exports, globals_ = [], [], []
    functions = types = tables = 0
    signatures, host_imports = [], []
    allowed = {(x['module'], x['name']): x for x in (allowed_imports or [])}
    while reader.offset < len(data):
        section_id = reader.byte()
        section = Reader(reader.take(reader.integer()))
        if section_id == 0:
            continue
        if section_id == 1:
            types = section.integer()
            for _ in range(types):
                if section.byte() != 0x60:
                    raise ValueError('Non-MVP function type')
                parameters = [value_type(section) for _ in range(section.integer())]
                results = section.integer()
                if results > 1:
                    raise ValueError('Multi-value function results')
                result_types = [value_type(section) for _ in range(results)]
                signatures.append({'parameters': parameters, 'results': result_types})
        elif section_id == 2:
            for _ in range(section.integer()):
                module, name, kind = section.name(), section.name(), section.byte()
                if kind != 0 or (module, name) not in allowed:
                    raise ValueError('Undeclared host, WASI, emulator, or non-function import')
                signature = signatures[section.integer()]
                expected = allowed[(module, name)]
                if any(signature[key] != expected[key] for key in ('parameters', 'results')):
                    raise ValueError('Host import signature does not match its explicit contract')
                host_imports.append({'module': module, 'name': name, **signature})
        elif section_id == 3:
            for _ in range(section.integer()):
                section.integer()
        elif section_id == 4:
            tables = section.integer()
            if tables > 1:
                raise ValueError('Multiple tables')
            for _ in range(tables):
                if section.byte() != 0x70:
                    raise ValueError('Non-MVP reference type')
                limits(section)
        elif section_id == 5:
            for _ in range(section.integer()):
                memories.append(limits(section))
            if len(memories) > 1:
                raise ValueError('Multiple memories')
        elif section_id == 6:
            for _ in range(section.integer()):
                value_type(section)
                globals_.append(section.byte())
                initializer(section)
        elif section_id == 7:
            for _ in range(section.integer()):
                name, kind, index = section.name(), section.byte(), section.integer()
                if kind > 3:
                    raise ValueError('Extended export kind')
                if kind == 3 and globals_[index]:
                    raise ValueError('Exported mutable global requires a post-MVP feature')
                exports.append({'name': name, 'kind': kind})
        elif section_id == 8:
            section.integer()
        elif section_id == 9:
            for _ in range(section.integer()):
                if section.integer() != 0:
                    raise ValueError('Extended element segment')
                initializer(section)
                for _ in range(section.integer()):
                    section.integer()
        elif section_id == 10:
            functions = section.integer()
            for _ in range(functions):
                body = Reader(section.take(section.integer()))
                for _ in range(body.integer()):
                    body.integer(); value_type(body)
                instructions(body, counts)
        elif section_id == 11:
            for _ in range(section.integer()):
                if section.integer() != 0:
                    raise ValueError('Passive or extended data segment')
                initializer(section)
                section.take(section.integer())
        else:
            raise ValueError(f'Post-MVP section id: {section_id}')
        if section.offset != len(section.data):
            raise ValueError(f'Unconsumed section {section_id}')
    if allowed and {(x['module'], x['name']) for x in host_imports} != set(allowed):
        raise ValueError('Missing explicitly required host imports')
    return {'baseline': 'WebAssembly MVP', 'imports': len(host_imports), 'functionTypes': types,
            **({'hostImports': host_imports} if host_imports else {}),
            'compiledFunctions': functions, 'instructionCount': sum(counts.values()),
            'opcodes': dict(sorted(counts.items())), 'memories': memories, 'exports': exports,
            'wasmSha256': hashlib.sha256(data).hexdigest(),
            'note': 'Feature audit of the binary encoding. Engine validation and ARM differential results are recorded separately.'}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('wasm', nargs='?', type=Path, default=ROOT / 'native/core/sims3-core.wasm')
    parser.add_argument('--report', type=Path, default=ROOT / 'native/core/compatibility.json')
    args = parser.parse_args()
    report = inspect(args.wasm.read_bytes())
    args.report.write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({key: value for key, value in report.items() if key != 'opcodes'}, indent=2))


if __name__ == '__main__':
    main()

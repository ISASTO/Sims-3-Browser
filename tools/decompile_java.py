#!/usr/bin/env python3
"""Export DAD's approximate Java reconstruction and a Ghidra-friendly ARM ELF."""
import argparse
import json
import struct
from pathlib import Path


def arm_elf(recovered):
    h = json.loads((recovered / 's3e-header.json').read_text())
    raw = (recovered / 'game.s3e').read_bytes()
    code = raw[h['codeOffset']:h['codeOffset']+h['codeFileSize']]
    base, entry = h['originalBase'], h['originalBase']+h['entryOffset']
    names = bytearray(b'\0')
    symbols = bytearray(16)
    def symbol(name, address):
        offset = len(names)
        names.extend(name.encode()+b'\0')
        symbols.extend(struct.pack('<IIIBBH', offset, address, 0, 0x12, 0, 1))
    symbol('s3e_game_entry', entry)
    seen = set()
    for relocation in h['externalRelocations']:
        name = h['symbols'][relocation['symbol']]
        if name not in seen:
            symbol('host_'+name, base+relocation['offset'])
            seen.add(name)
    sections = b'\0.text\0.symtab\0.strtab\0.shstrtab\0'
    output = bytearray(4096)
    output.extend(code)
    def append(data):
        while len(output)%4: output.append(0)
        offset = len(output)
        output.extend(data)
        return offset
    symoff = append(symbols)
    stroff = append(names)
    shstroff = append(sections)
    while len(output)%4:output.append(0)
    shoff = len(output)
    output.extend(bytes(40))
    for args in [(1,1,7,base,4096,len(code),0,0,4,0),
                 (7,2,0,0,symoff,len(symbols),3,1,4,16),
                 (15,3,0,0,stroff,len(names),0,0,1,0),
                 (23,3,0,0,shstroff,len(sections),0,0,1,0)]:
        output.extend(struct.pack('<10I', *args))
    ident = b'\x7fELF\x01\x01\x01'+bytes(9)
    output[:52] = struct.pack('<16sHHIIIIIHHHHHH',ident,2,40,1,entry,52,shoff,0x5000000,52,32,1,40,5,4)
    output[52:84] = struct.pack('<8I',1,4096,base,base,len(code),h['codeMemSize'],7,4096)
    (recovered / 'game-arm-for-ghidra.elf').write_bytes(output)


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--project',type=Path,default=Path(__file__).resolve().parents[1])
    parser.add_argument('--all-classes',action='store_true')
    args = parser.parse_args()
    recovered = args.project / 'recovered'
    arm_elf(recovered)
    from loguru import logger
    logger.remove()
    from androguard.core.dex import DEX
    from androguard.core.analysis.analysis import Analysis
    from androguard.decompiler.decompiler import DecompilerDAD
    dex = DEX((recovered/'classes.dex').read_bytes())
    analysis = Analysis(dex)
    analysis.create_xref()
    dex.set_decompiler(DecompilerDAD(dex,analysis))
    failures, count = [], 0
    for cls in dex.get_classes():
        if not args.all_classes and not cls.get_name().startswith(('Lcom/ideaworks3d/','Lcom/ea/thesims3/')):
            continue
        try:
            source = cls.get_source()
            destination = recovered/'java'/(cls.get_name()[1:-1]+'.java')
            destination.parent.mkdir(parents=True,exist_ok=True)
            destination.write_text(source,encoding='utf-8')
            count += 1
        except Exception as error:
            failures.append({'class':cls.get_name(),'error':str(error)})
    result={'javaClasses':count,'failedClasses':failures,'totalDexClasses':len(dex.get_classes()),
            'warning':'Approximate decompiler output, not original source; ARM ELF wraps native machine code.'}
    (recovered/'decompilation-summary.json').write_text(json.dumps(result,indent=2))
    print(json.dumps(result,indent=2))


if __name__=='__main__':main()

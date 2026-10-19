"""Load the original Marmalade .s3e executable for static recompilation.

The original file is never modified. All addresses are original guest
addresses at the recorded load base (0x4a000000).
"""
import hashlib
import json
import struct
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
EXPECTED_SHA256 = "9b75f5584a9e817e51132b6ddfbb38ffef5e9e0d674c76976e1a124c7ee63d5d"


class Image:
    def __init__(self, root=ROOT):
        self.root = Path(root)
        raw = (self.root / "recovered/game.s3e").read_bytes()
        digest = hashlib.sha256(raw).hexdigest()
        if digest != EXPECTED_SHA256:
            raise SystemExit("recovered/game.s3e hash mismatch: " + digest)
        self.raw = raw
        self.sha256 = digest
        header = json.loads((self.root / "web/manifest.json").read_text())["header"]
        self.header = header
        self.base = header["originalBase"]
        self.code = raw[header["codeOffset"]:header["codeOffset"] + header["codeFileSize"]]
        self.code_size = header["codeFileSize"]
        self.mem_size = header["codeMemSize"]
        self.entry = self.base + header["entryOffset"]
        analysis = json.loads((self.root / "recovered/native/analysis-input.json").read_text())
        self.analysis = analysis
        if analysis["originalExecutableSha256"] != digest:
            raise SystemExit("analysis input does not describe this executable")
        self.internal_relocations = [self.base + o for o in analysis["internalRelocations"]]
        self.reloc_set = set(self.internal_relocations)
        # Import slots. Each external relocation is an ARM `B .` placeholder.
        # 225 also have a Thumb `bx pc; nop` veneer four bytes earlier.
        self.imports = []
        self.import_at = {}
        for index, imp in enumerate(analysis["imports"]):
            entry = {"index": index, "name": imp["name"], "arm": imp["arm"], "thumb": imp.get("thumb")}
            self.imports.append(entry)
            self.import_at[imp["arm"]] = index
            if imp.get("thumb") is not None:
                self.import_at[imp["thumb"]] = index
        self.import_end = max(i["arm"] for i in self.imports) + 4

    def in_image(self, addr, size=1):
        return self.base <= addr and addr + size <= self.base + self.code_size

    def u8(self, addr):
        return self.code[addr - self.base]

    def u16(self, addr):
        return struct.unpack_from("<H", self.code, addr - self.base)[0]

    def u32(self, addr):
        return struct.unpack_from("<I", self.code, addr - self.base)[0]

"""Build the high-resolution interface art overlay from the iOS/iPad release.

    python tools/build_hd_assets.py path/to/The_Sims_3_1_4_16.ipa

The iOS release (com.ea.sims3bv 1.4.16, universal iPhone/iPad, 2017) shares
its resource formats with the Android release: 513 resource files are
byte-identical, and the 2D interface texture atlases (texture_quad_*.m3g) ship
in 1x, 2x and 4x variants with the same sprite layout.  The Android game
addresses atlas sprites with normalised texture coordinates, so a larger atlas
can replace the original under the same file name and the original layout
file (anim2d.m3g) is kept.

The iOS executable is FairPlay-encrypted and is not used; only resource files
are read from the IPA.

A few sprites exist only in the Android atlases (for example the HUD pause
button), where the iOS atlas is transparent.  Those regions are taken from the
Android atlas, upscaled, so nothing the Android game draws goes missing.

For each output scale (2 and 4, relative to the Android art) this writes
native/game/hd/<scale>x/index.json and zlib-compressed M3G/PNG files under the
Android file names.  native/game/app.js substitutes them and verifies size and
SHA-256 after decompression.
"""
import hashlib
import io
import json
import struct
import sys
import zipfile
import zlib
from pathlib import Path

import numpy as np
from PIL import Image
from scipy import ndimage

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / "native/game/hd"
IPA_SHA256 = "d3982ba8e17fc008fd3824c056e60578e2bc7471e70cf17a8c5506db17fc8980"
RES = "Payload/sims3_iphone.app/res/"
SCALES = (2, 4)
M3G_ID = b"\xabJSR184\xbb\r\n\x1a\n"
IMAGE2D = 10
RGB, RGBA = 99, 100


# ----------------------------------------------------------------- M3G
def m3g_images(data):
    """Yield (offset of pixel bytes, format, width, height, pixel length) for
    every immutable Image2D in an uncompressed M3G file."""
    assert data[:12] == M3G_ID
    p = 12
    while p < len(data):
        scheme, total, _ = struct.unpack("<BII", data[p:p + 9])
        assert scheme == 0, "compressed M3G sections are not expected"
        q, end = p + 9, p + total - 4
        while q < end:
            kind, length = struct.unpack("<BI", data[q:q + 5])
            body = q + 5
            if kind == IMAGE2D:
                r = body + 4                                    # userID
                n = struct.unpack("<I", data[r:r + 4])[0]; r += 4 + 4 * n   # animation tracks
                n = struct.unpack("<I", data[r:r + 4])[0]; r += 4
                for _ in range(n):
                    r += 4; ln = struct.unpack("<I", data[r:r + 4])[0]; r += 4 + ln
                fmt, mutable = data[r], data[r + 1]
                w, h = struct.unpack("<II", data[r + 2:r + 10]); r += 10
                if not mutable:
                    ln = struct.unpack("<I", data[r:r + 4])[0]; r += 4 + ln   # palette
                    ln = struct.unpack("<I", data[r:r + 4])[0]
                    yield r + 4, fmt, w, h, ln
            q = body + length
        p += total


def m3g_fix_checksums(data):
    data = bytearray(data)
    p = 12
    while p < len(data):
        total = struct.unpack("<I", data[p + 1:p + 5])[0]
        struct.pack_into("<I", data, p + total - 4, zlib.adler32(bytes(data[p:p + total - 4])))
        p += total
    return bytes(data)


def m3g_image(data):
    imgs = list(m3g_images(data))
    assert len(imgs) == 1, "expected one Image2D per atlas"
    off, fmt, w, h, ln = imgs[0]
    mode = {RGB: "RGB", RGBA: "RGBA"}[fmt]
    assert ln == w * h * len(mode)
    return Image.frombytes(mode, (w, h), bytes(data[off:off + ln])), off, fmt


# ------------------------------------------------------------ compositing
def fill_missing(android, ios):
    """Copy sprites that exist only in the Android atlas into the iOS atlas."""
    a = np.asarray(android.convert("RGBA")).astype(np.float32) / 255
    k = ios.width // android.width
    small = np.asarray(ios.convert("RGBA").resize(android.size, Image.BOX)).astype(np.float32) / 255
    missing = (a[..., 3] > 0.25) & (small[..., 3] < 0.08)
    labels, n = ndimage.label(missing, structure=np.ones((3, 3)))
    if not n:
        return ios, 0
    sizes = ndimage.sum(missing, labels, range(1, n + 1))
    keep = np.isin(labels, 1 + np.flatnonzero(sizes >= 12))   # ignore stray lines and edge noise
    if not keep.any():
        return ios, 0
    keep = ndimage.binary_dilation(keep, iterations=2) & (a[..., 3] > 0)
    up_mask = Image.fromarray((keep * 255).astype(np.uint8)).resize(ios.size, Image.NEAREST)
    up = android.convert("RGBA").resize(ios.size, Image.LANCZOS)
    out = ios.convert("RGBA").copy()
    out.paste(up, (0, 0), up_mask)
    return out, int(keep.sum())


def build_atlas(android_bytes, variants, scale):
    """Pick the iOS variant that is `scale` times the Android atlas and fill
    in Android-only sprites.  Returns (bytes, ios name, filled pixels)."""
    a_img, _, _ = m3g_image(android_bytes)
    want = a_img.width * scale
    best = None
    for name, data in variants:
        img, off, fmt = m3g_image(data)
        if img.width % a_img.width or img.height * a_img.width != a_img.height * img.width:
            continue
        if img.width <= want and (best is None or img.width > best[1].width):
            best = (name, img, off, fmt, data)
    if best is None or best[1].width <= a_img.width:
        return None
    name, img, off, fmt, data = best
    merged, filled = fill_missing(a_img, img)
    if filled:
        merged = merged.convert({RGB: "RGB", RGBA: "RGBA"}[fmt])
        raw = merged.tobytes()
        data = bytearray(data); data[off:off + len(raw)] = raw
        data = m3g_fix_checksums(bytes(data))
    return data, name, filled


def build_png(android_bytes, variants, scale):
    a = Image.open(io.BytesIO(android_bytes))
    want = a.width * scale
    best = None
    for name, data in variants:
        img = Image.open(io.BytesIO(data))
        if img.width <= want and img.width > a.width and (best is None or img.width > best[1].width):
            best = (name, img, data)
    if not best:
        return None
    # Re-encode as a plain RGBA PNG with a single IDAT chunk, like the Android
    # files: the game's PNG reader inflates each IDAT run separately.
    out = io.BytesIO()
    best[1].convert("RGBA").save(out, "PNG", optimize=True)
    data = out.getvalue()
    assert data.count(b"IDAT") == 1
    return data, best[0], 0


# ------------------------------------------------------------------ main
def main():
    if len(sys.argv) != 2:
        raise SystemExit(__doc__)
    ipa = Path(sys.argv[1])
    digest = hashlib.sha256(ipa.read_bytes()).hexdigest()
    if digest != IPA_SHA256:
        print(f"warning: IPA SHA-256 {digest} differs from the verified release {IPA_SHA256}")
    manifest = json.loads((ROOT / "web/manifest.json").read_text())
    web = manifest["webAssets"]

    def android(name):
        return b"".join((ROOT / "web" / part).read_bytes() for part in web[name]["parts"])

    with zipfile.ZipFile(ipa) as z:
        ios = {n[len(RES):]: n for n in z.namelist() if n.startswith(RES) and "/" not in n[len(RES):]}

        def variants(stem, ext):
            return [(f"{stem}{s}.{ext}", z.read(ios[f"{stem}{s}.{ext}"])) for s in ("", "_2x", "_4x")
                    if f"{stem}{s}.{ext}" in ios]

        jobs = {name: ("m3g", name[:-4]) for name in web if name.startswith("texture_quad_") and name.endswith(".m3g")}
        jobs["images/btn_hand.png"] = ("png", "btn_hand")
        for scale in SCALES:
            folder = OUT / f"{scale}x"
            folder.mkdir(parents=True, exist_ok=True)
            for old in folder.glob("*.z"):
                old.unlink()
            index = {"format": "sims3-hd-overlay-v1", "scale": scale,
                     "source": {"bundle": "com.ea.sims3bv", "version": "1.4.16", "ipaSha256": digest},
                     "assets": {}}
            for name, (kind, stem) in sorted(jobs.items()):
                ext = "m3g" if kind == "m3g" else "png"
                found = variants(stem, ext)
                if not found:
                    continue
                result = (build_atlas if kind == "m3g" else build_png)(android(name), found, scale)
                if not result:
                    continue
                data, source, filled = result
                packed = zlib.compress(data, 9)
                digest_out = hashlib.sha256(data).hexdigest()
                # Content-addressed names, so browsers never mix cached versions.
                fname = f"{name.replace('/', '_')}.{digest_out[:12]}.z"
                (folder / fname).write_bytes(packed)
                index["assets"][name] = {"from": source, "file": fname, "size": len(data),
                                         "sha256": hashlib.sha256(data).hexdigest(), "packed": len(packed),
                                         "androidOnlyPixelsFilled": filled}
            (folder / "index.json").write_text(json.dumps(index, indent=1) + "\n")
            total = sum(a["packed"] for a in index["assets"].values())
            print(f"{scale}x: {len(index['assets'])} files, {total / 1e6:.1f} MB compressed")
            for name, a in index["assets"].items():
                print(f"   {name:44s} <- {a['from']:46s} filled {a['androidOnlyPixelsFilled']} px")


if __name__ == "__main__":
    main()

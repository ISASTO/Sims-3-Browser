"""Write the bundle file index used by the browser host (sizes for stat/size queries and directory listings).
Usage: bundle_manifest.py <app bundle dir> <out.json>"""
import json, os, sys
root, out = sys.argv[1], sys.argv[2]
files, dirs = {}, set([''])
for d, ds, fs in os.walk(root):
    ds[:] = [name for name in ds if not name.startswith('.')]
    rel = os.path.relpath(d, root)
    rel = '' if rel == '.' else rel
    dirs.add(rel)
    for f in fs:
        if f.startswith('.'):
            continue
        p = os.path.join(rel, f) if rel else f
        files[p] = os.path.getsize(os.path.join(d, f))
json.dump({'files': files, 'dirs': sorted(dirs)}, open(out, 'w'), separators=(',', ':'))
print(len(files), 'files', sum(files.values()) // (1 << 20), 'MiB')

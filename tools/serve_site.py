#!/usr/bin/env python3
"""Run the prebuilt static release locally; uses only Python's standard library."""
import argparse
import functools
import http.server
import json
from pathlib import Path
import threading
import webbrowser

from project import ROOT


def validate(root):
    manifest = json.loads((root / 'bundle-manifest.json').read_text())
    required = {'index.html': None, 'sims3.js': None, 'gl.js': None,
                'vendor/fflate.js': None, manifest['runtime']['url']: None}
    required.update({'packs/' + name: size for name, size in manifest['packs'].items()})
    required.update({'bundle/' + rel: size for rel, size in manifest['files'].items()
                     if rel not in manifest['storage']})
    for name, size in required.items():
        path = root / name
        if not path.resolve().is_relative_to(root.resolve()) or not path.is_file():
            raise ValueError('Missing or invalid release file: ' + name)
        if size is not None and path.stat().st_size != size:
            raise ValueError('Incomplete release file: ' + name)


class Handler(http.server.SimpleHTTPRequestHandler):
    extensions_map = {**http.server.SimpleHTTPRequestHandler.extensions_map,
                      '.js': 'text/javascript', '.json': 'application/json',
                      '.bin': 'application/octet-stream', '.wasm': 'application/wasm'}

    def end_headers(self):
        self.send_header('Cache-Control', 'no-cache')
        super().end_headers()


def main():
    root = Path(ROOT)
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--web', type=Path, default=root / ('play' if (root / 'play').exists() else 'build/site'))
    parser.add_argument('--port', type=int, default=8333)
    parser.add_argument('--no-open', action='store_true')
    parser.add_argument('--check', action='store_true')
    args = parser.parse_args()
    try:
        validate(args.web)
    except (OSError, ValueError, KeyError) as error:
        parser.exit(1, f'The static release is incomplete: {error}\nRun make site, or extract the complete repository.\n')
    if args.check:
        print('Static release files verified.')
        return
    handler = functools.partial(Handler, directory=str(args.web))
    server = http.server.ThreadingHTTPServer(('127.0.0.1', args.port), handler)
    url = f'http://127.0.0.1:{args.port}/'
    print('The Sims 3:', url, flush=True)
    if not args.no_open:
        threading.Timer(0.25, lambda: webbrowser.open(url)).start()
    try:
        server.serve_forever()
    except KeyboardInterrupt:
        pass
    finally:
        server.server_close()


if __name__ == '__main__':
    main()

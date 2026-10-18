#!/usr/bin/env python3
"""Serve the experimental browser project locally. Uses only Python's standard library."""
import argparse
import errno
import functools
import http.server
import json
import threading
import webbrowser
from pathlib import Path

WEB_ROOT = Path(__file__).resolve().parents[1] / 'web'


class GameRequestHandler(http.server.SimpleHTTPRequestHandler):
    # Windows can override mimetypes through registry entries. Workers need a
    # JavaScript MIME type regardless of those machine-specific associations.
    extensions_map = {
        **http.server.SimpleHTTPRequestHandler.extensions_map,
        '.html': 'text/html',
        '.js': 'text/javascript',
        '.json': 'application/json',
        '.wasm': 'application/wasm',
        '.bin': 'application/octet-stream',
        '.s3e': 'application/octet-stream',
    }

    def end_headers(self):
        # Revalidate local updates instead of mixing cached code from old builds.
        self.send_header('Cache-Control', 'no-cache')
        super().end_headers()


def validate_files(root):
    required = ['index.html', 'worker.bundle.js', 'manifest.json',
                'game.s3e', 'vendor/unicorn.wasm']
    missing = [name for name in required if not (root / name).is_file()]
    if missing:
        raise ValueError('Project files are missing: ' + ', '.join(missing) +
                         '. Download and extract the entire updated project.')
    try:
        manifest = json.loads((root / 'manifest.json').read_text(encoding='utf-8'))
        parts = {part for asset in manifest['webAssets'].values() for part in asset['parts']}
    except (ValueError, KeyError, TypeError) as error:
        raise ValueError('manifest.json is invalid. Extract a fresh copy of the project.') from error
    missing = sorted(part for part in parts if not (root / part).is_file())
    if missing:
        examples = ', '.join(missing[:3])
        raise ValueError(f'{len(missing)} game data files are missing ({examples}). '
                         'Download and extract the entire project, including web/data/.')
    with (root / 'vendor/unicorn.wasm').open('rb') as source:
        if source.read(4) != b'\x00asm':
            raise ValueError('vendor/unicorn.wasm is not a WebAssembly binary. '
                             'Download a fresh copy of the complete project.')


def create_server(root=WEB_ROOT, port=8000):
    handler = functools.partial(GameRequestHandler, directory=str(root))
    return http.server.ThreadingHTTPServer(('127.0.0.1', port), handler)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--port', type=int, default=8000)
    parser.add_argument('--no-open', action='store_true')
    parser.add_argument('--check', action='store_true', help='Check project files without starting a server.')
    args = parser.parse_args()
    try:
        validate_files(WEB_ROOT)
    except (OSError, ValueError) as error:
        parser.exit(1, f'Cannot start the prototype: {error}\n')
    if args.check:
        print('Startup files and all game data parts are present. WebAssembly header is valid.')
        return
    try:
        server = create_server(port=args.port)
    except OSError as error:
        if error.errno in (errno.EADDRINUSE, 10048):
            parser.exit(1, f'Port {args.port} is already in use. Stop the previous server with Ctrl+C, '
                           'then run this launcher again.\n')
        raise
    url = f'http://127.0.0.1:{server.server_port}/'
    print('The Sims 3 browser compatibility prototype')
    print('This is an unfinished prototype. Menu rendering and gameplay need further work.')
    print(f'Serving files from: {WEB_ROOT}')
    print(url)
    print('Press Ctrl+C to stop.')
    if not args.no_open:
        threading.Timer(0.5, lambda: webbrowser.open(url)).start()
    try:
        server.serve_forever()
    except KeyboardInterrupt:
        pass
    finally:
        server.server_close()


if __name__ == '__main__':
    main()

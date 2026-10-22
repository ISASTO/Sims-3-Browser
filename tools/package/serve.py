#!/usr/bin/env python3
"""Serve the private Sims 3 browser build on this computer only.

Usage:  python3 serve.py [--port 8333]
Serves web/ at / and the extracted game bundle (from setup.py) at /bundle/, bound to 127.0.0.1 so that nothing is
reachable from other machines. Open http://127.0.0.1:8333/ in a desktop browser.
"""
import argparse, http.server, os, posixpath, urllib.parse

here = os.path.dirname(os.path.abspath(__file__))
ap = argparse.ArgumentParser()
ap.add_argument('--port', type=int, default=8333)
args = ap.parse_args()
WEB, BUNDLE = os.path.join(here, 'web'), os.path.join(here, 'bundle')
if not os.path.isdir(BUNDLE) or not os.path.exists(os.path.join(WEB, 'bundle-manifest.json')):
    raise SystemExit('Run setup.py with your IPA first:  python3 setup.py /path/to/com_ea_sims3inc-iOS8_0.ipa')


class Handler(http.server.SimpleHTTPRequestHandler):
    extensions_map = dict(http.server.SimpleHTTPRequestHandler.extensions_map, **{
        '.wasm': 'application/wasm', '.js': 'text/javascript', '.json': 'application/json', '.caf': 'application/octet-stream'})

    def translate_path(self, path):
        path = urllib.parse.unquote(urllib.parse.urlsplit(path).path)
        base = WEB
        if path.startswith('/bundle/'):
            base, path = BUNDLE, path[len('/bundle'):]
        parts = [p for p in posixpath.normpath(path).split('/') if p and p not in ('.', '..')]
        return os.path.join(base, *parts)

    def end_headers(self):
        self.send_header('Cache-Control', 'no-cache')
        super().end_headers()

    def log_message(self, fmt, *a):
        pass


print(f'The Sims 3 (private browser build): http://127.0.0.1:{args.port}/   (Ctrl+C stops the server)')
http.server.ThreadingHTTPServer(('127.0.0.1', args.port), Handler).serve_forever()

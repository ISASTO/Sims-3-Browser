#!/usr/bin/env python3
"""Serve the experimental browser project locally. Uses only Python's standard library."""
import argparse
import functools
import http.server
import threading
import webbrowser
from pathlib import Path

parser = argparse.ArgumentParser()
parser.add_argument('--port', type=int, default=8000)
parser.add_argument('--no-open', action='store_true')
args = parser.parse_args()
root = Path(__file__).resolve().parents[1] / 'web'
handler = functools.partial(http.server.SimpleHTTPRequestHandler, directory=str(root))
http.server.SimpleHTTPRequestHandler.extensions_map['.wasm'] = 'application/wasm'
server = http.server.ThreadingHTTPServer(('127.0.0.1', args.port), handler)
url = f'http://127.0.0.1:{args.port}/'
print('The Sims 3 browser compatibility prototype')
print('This is an unfinished prototype. Menu rendering and gameplay need further work.')
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

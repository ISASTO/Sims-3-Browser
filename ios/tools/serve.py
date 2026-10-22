"""Private local server for the browser build.

Serves build/web/ at / and the extracted app bundle (read-only) at /bundle/.  Binds to 127.0.0.1 only: the
game content is the owner's private copy and is never published.

Usage: python3 tools/serve.py [--port 8333] [--bundle extract/Payload/sims3_iphone.app] [--web build/web]
"""
import argparse, http.server, os, posixpath, urllib.parse

ap = argparse.ArgumentParser()
ap.add_argument('--port', type=int, default=8333)
ap.add_argument('--host', default='127.0.0.1')
root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
ap.add_argument('--bundle', default=os.path.join(root, 'extract/Payload/sims3_iphone.app'))
ap.add_argument('--web', default=os.path.join(root, 'build/web'))
args = ap.parse_args()
WEB, BUNDLE = os.path.abspath(args.web), os.path.abspath(args.bundle)


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


if __name__ == '__main__':
    print(f'Serving the private build at http://{args.host}:{args.port}/ (bundle: {BUNDLE})')
    http.server.ThreadingHTTPServer((args.host, args.port), Handler).serve_forever()

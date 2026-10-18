#!/usr/bin/env python3
"""HTTP and incomplete-download regression checks. No browser or preview needed."""
import importlib.util
import json
import mimetypes
import tempfile
import threading
import unittest
from pathlib import Path
from unittest.mock import patch
from urllib.request import urlopen

spec = importlib.util.spec_from_file_location('game_server', Path(__file__).with_name('serve.py'))
game_server = importlib.util.module_from_spec(spec)
spec.loader.exec_module(game_server)


class LocalHTTPTests(unittest.TestCase):
    def test_worker_and_wasm_responses_ignore_incorrect_system_mime_types(self):
        # Reproduce bad platform file associations without depending on Windows.
        with patch.dict(mimetypes.types_map, {'.js': 'application/octet-stream', '.wasm': 'text/plain'}):
            server = game_server.create_server(port=0)
            thread = threading.Thread(target=server.serve_forever, daemon=True)
            thread.start()
            try:
                base = f'http://127.0.0.1:{server.server_port}/'
                for name, expected_type in [('worker.bundle.js', 'text/javascript'),
                                            ('vendor/unicorn.wasm', 'application/wasm')]:
                    with self.subTest(name=name), urlopen(base + name) as response:
                        self.assertEqual(response.headers.get_content_type(), expected_type)
                        self.assertEqual(response.headers['Cache-Control'], 'no-cache')
                        self.assertEqual(response.read(), (game_server.WEB_ROOT / name).read_bytes())
            finally:
                server.shutdown()
                server.server_close()
                thread.join()


class DownloadValidationTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.root = Path(self.temp.name)
        (self.root / 'vendor').mkdir()
        for name in ['index.html', 'worker.bundle.js', 'game.s3e']:
            (self.root / name).write_bytes(b'fixture')
        (self.root / 'manifest.json').write_text(json.dumps({'webAssets': {}}))
        (self.root / 'vendor/unicorn.wasm').write_bytes(b'\x00asm\x01\x00\x00\x00')

    def test_missing_bundle_is_reported_before_opening_browser(self):
        (self.root / 'worker.bundle.js').unlink()
        with self.assertRaisesRegex(ValueError, 'worker.bundle.js'):
            game_server.validate_files(self.root)

    def test_missing_data_part_identifies_incomplete_extraction(self):
        manifest = {'webAssets': {'example': {'parts': ['data/missing.bin']}}}
        (self.root / 'manifest.json').write_text(json.dumps(manifest))
        with self.assertRaisesRegex(ValueError, 'data/missing.bin'):
            game_server.validate_files(self.root)

    def test_text_downloaded_instead_of_wasm_is_rejected(self):
        (self.root / 'vendor/unicorn.wasm').write_bytes(b'Not a wasm download')
        with self.assertRaisesRegex(ValueError, 'not a WebAssembly binary'):
            game_server.validate_files(self.root)

    def test_complete_project_passes(self):
        game_server.validate_files(game_server.WEB_ROOT)


if __name__ == '__main__':
    unittest.main()

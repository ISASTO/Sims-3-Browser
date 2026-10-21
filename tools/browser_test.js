// browser_test.js — drive the private build in headless Chromium (Playwright): boot, capture console output,
// take frame captures, replay taps, and report presented-frame rate and per-frame CPU time.
//
// Usage: NODE_PATH=/opt/npm-tools/node_modules node tools/browser_test.js [url] [outdir] [--script steps.json]
//   steps.json: [{"wait": ms}, {"tap": [x, y]}, {"drag": [x0, y0, x1, y1, ms]}, {"shot": "name"}, {"perf": ms}]
//   (coordinates in game points, 667 x 375)
const { chromium } = require('playwright');
const fs = require('fs');
const path = require('path');

const url = process.argv[2] || 'http://127.0.0.1:8333/';
const out = process.argv[3] || '/tmp/sims3-shots';
const si = process.argv.indexOf('--script');
const steps = si > 0 ? JSON.parse(fs.readFileSync(process.argv[si + 1], 'utf8')) :
  [{ wait: 15000 }, { shot: 'boot' }, { perf: 5000 }, { shot: 'after' }];
fs.mkdirSync(out, { recursive: true });

(async () => {
  const browser = await chromium.launch({
    headless: true,
    args: ['--use-gl=angle', '--use-angle=swiftshader', '--enable-unsafe-swiftshader', '--ignore-gpu-blocklist', '--autoplay-policy=no-user-gesture-required',
      '--js-flags=--stack-size=4000'],
  });
  const page = await browser.newPage({ viewport: { width: 1334, height: 750 }, deviceScaleFactor: 1 });
  const logf = fs.createWriteStream(path.join(out, 'console.log'));
  page.on('console', (m) => { logf.write(m.text() + '\n'); });
  page.on('pageerror', (e) => { logf.write('PAGEERROR ' + e.stack + '\n'); console.log('pageerror', e.message); });
  const t0 = Date.now();
  await page.goto(url);
  const stage = async () => (await page.$('#stage')).boundingBox();
  const toPage = async (x, y) => { const b = await stage(); return [b.x + x / 667 * b.width, b.y + y / 375 * b.height]; };
  for (const s of steps) {
    if (s.wait) await page.waitForTimeout(s.wait);
    if (s.tap) { const [x, y] = await toPage(...s.tap); await page.mouse.move(x, y); await page.mouse.down(); await page.waitForTimeout(80); await page.mouse.up(); }
    if (s.drag) {
      const [x0, y0, x1, y1, ms] = s.drag; const [a, b] = await toPage(x0, y0); const [c, d] = await toPage(x1, y1);
      await page.mouse.move(a, b); await page.mouse.down(); const n = 10;
      for (let i = 1; i <= n; i++) { await page.mouse.move(a + (c - a) * i / n, b + (d - b) * i / n); await page.waitForTimeout((ms || 300) / n); }
      await page.mouse.up();
    }
    if (s.shot) { await page.screenshot({ path: path.join(out, s.shot + '.png') }); console.log(`[${((Date.now() - t0) / 1000).toFixed(1)}s] shot ${s.shot}`); }
    if (s.perf) {
      const samples = [];
      const end = Date.now() + s.perf;
      while (Date.now() < end) { await page.waitForTimeout(1000); samples.push(await page.evaluate(() => window.sims3Perf ? { fps: window.sims3Perf.fps, cpu: window.sims3Perf.cpuMs, worst: window.sims3Perf.worstMs } : null)); }
      console.log('perf', JSON.stringify(samples));
    }
    const err = await page.evaluate(() => { const e = document.getElementById('error'); return e && e.style.display === 'block' ? e.textContent : null; });
    if (err) { console.log('GAME ERROR:\n' + err.slice(0, 3000)); break; }
  }
  logf.end();
  await browser.close();
})();

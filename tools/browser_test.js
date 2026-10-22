// browser_test.js — drive the private build in headless Chromium (Playwright): boot, capture console output,
// take frame captures, replay taps, and report presented-frame rate and per-frame CPU time.
//
// Usage: NODE_PATH=/opt/npm-tools/node_modules node tools/browser_test.js [url] [outdir] [--script steps.json]
//   steps.json: [{"wait": ms}, {"tap": [x, y]}, {"drag": [x0, y0, x1, y1, ms]}, {"shot": "name"}, {"perf": ms},
//                {"type": "text"}, {"key": "Enter"}, {"reload": true}, {"eval": "js expression"},
//                {"files": [selector, path...]}, {"click": selector}, {"background": ms}]
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
  const launchArgs = ['--use-gl=angle', '--use-angle=swiftshader', '--enable-unsafe-swiftshader', '--ignore-gpu-blocklist', '--autoplay-policy=no-user-gesture-required'];
  const pi = process.argv.indexOf('--profile');
  let browser, page;
  if (pi > 0) {   // persistent profile: IndexedDB (saves) survives between runs
    browser = await chromium.launchPersistentContext(process.argv[pi + 1], { headless: true, args: launchArgs, viewport: { width: 1334, height: 750 }, deviceScaleFactor: 1 });
    page = browser.pages()[0] || await browser.newPage();
  } else {
    browser = await chromium.launch({ headless: true, args: launchArgs });
    page = await browser.newPage({ viewport: { width: 1334, height: 750 }, deviceScaleFactor: 1 });
  }
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
    // deterministic mode (page opened with ?test): frames advance only when the script says so
    if (s.frames) { const r = await page.evaluate(([n, d]) => window.sims3Test.step(n, d), [s.frames, s.draw !== false]); if (r === 'dead') console.log('game stopped'); }
    if (s.ftap) {
      const [x, y] = await toPage(...s.ftap); await page.mouse.move(x, y); await page.mouse.down();
      await page.evaluate(() => window.sims3Test.step(4, false)); await page.mouse.up(); await page.evaluate(() => window.sims3Test.step(1, false));
    }
    if (s.fdrag) {
      const [x0, y0, x1, y1, n] = s.fdrag; const [a, b] = await toPage(x0, y0); const [c, d] = await toPage(x1, y1);
      await page.mouse.move(a, b); await page.mouse.down({ button: s.right ? 'right' : 'left' });
      for (let i = 1; i <= n; i++) { await page.mouse.move(a + (c - a) * i / n, b + (d - b) * i / n); await page.evaluate(() => window.sims3Test.step(1, false)); }
      await page.mouse.up({ button: s.right ? 'right' : 'left' }); await page.evaluate(() => window.sims3Test.step(1, false));
    }
    if (s.waitBoot) await page.waitForFunction(() => window.sims3Test, null, { timeout: 120000 });
    if (s.rdrag) {   // right-button drag (two-finger gesture on the desktop mapping)
      const [x0, y0, x1, y1, ms] = s.rdrag; const [a, b] = await toPage(x0, y0); const [c, d] = await toPage(x1, y1);
      await page.mouse.move(a, b); await page.mouse.down({ button: 'right' }); const n = 12;
      for (let i = 1; i <= n; i++) { await page.mouse.move(a + (c - a) * i / n, b + (d - b) * i / n); await page.waitForTimeout((ms || 400) / n); }
      await page.mouse.up({ button: 'right' });
    }
    if (s.files) await page.setInputFiles(s.files[0], s.files.slice(1));   // [selector, path...] for a host file input
    if (s.click) await page.click(s.click);                                   // CSS selector of a host element
    if (s.type) await page.keyboard.type(s.type, { delay: 60 });
    if (s.key) await page.keyboard.press(s.key);
    if (s.reload) { await page.reload(); }
    if (s.background !== undefined) {   // simulate switching away from the tab and back (visibilitychange)
      const setHidden = (h) => page.evaluate((h) => { Object.defineProperty(document, 'hidden', { value: h, configurable: true }); Object.defineProperty(document, 'visibilityState', { value: h ? 'hidden' : 'visible', configurable: true }); document.dispatchEvent(new Event('visibilitychange')); }, h);
      await setHidden(true); await page.waitForTimeout(s.background || 500); await setHidden(false);
    }
    if (s.eval) console.log('eval', JSON.stringify(await page.evaluate(s.eval)));
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

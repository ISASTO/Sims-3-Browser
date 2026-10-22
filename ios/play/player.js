// Player chrome, display sizing, sustained-load resolution control and optional content easter egg.
const $ = (id) => document.getElementById(id);
const RATIO = 667 / 375;
const SCALES = { native: 1, high: .85, balanced: .67, performance: .5 };
const KEY = 'sims3-player-v1';
export function createPlayer({ graphics, shake, unlockAll, unlockStatus, persistUnlock, testMode }) {
  let saved = {};
  try { saved = JSON.parse(localStorage.getItem(KEY)) || {}; } catch {}
  let quality = Object.hasOwn(SCALES, saved.quality) || saved.quality === 'auto' ? saved.quality : 'auto';
  // Deterministic tests use native resolution unless they explicitly choose a mode.
  if (testMode) quality = 'native';
  let autoScale = 1, cssWidth = 0, cssHeight = 0, dpr = 1, low = 0, high = 0, settling = 0;
  let lastDpr = 0, lastShake = -Infinity, resizePending = true;
  const wrap = $('wrap'), stage = $('stage'), viewport = $('viewport');
  const select = $('quality'), fit = $('fit-tab'), fullscreen = $('fullscreen'), diamond = $('plumbob');
  const persist = () => { try { localStorage.setItem(KEY, JSON.stringify({ quality, expanded: wrap.classList.contains('expanded') })); } catch {} };
  select.value = quality;
  function expanded(on) {
    wrap.classList.toggle('expanded', on); fit.setAttribute('aria-pressed', String(on));
    fit.textContent = on ? 'Restore frame' : 'Fit to tab'; resizePending = true;
  }
  expanded(!!saved.expanded);
  fit.addEventListener('click', () => { expanded(!wrap.classList.contains('expanded')); persist(); });
  select.addEventListener('change', () => { quality = select.value; if (quality === 'auto') state.initialized = false; low = high = 0; settling = 3; resizePending = true; persist(); });
  $('metrics-toggle').addEventListener('click', () => {
    const panel = $('metrics'); panel.hidden = !panel.hidden;
    $('metrics-toggle').setAttribute('aria-pressed', String(!panel.hidden)); resizePending = true;
  });
  fullscreen.hidden = !document.fullscreenEnabled || !wrap.requestFullscreen;
  fullscreen.addEventListener('click', async () => {
    try {
      $('shell-notice').textContent = '';
      if (document.fullscreenElement) await document.exitFullscreen(); else await wrap.requestFullscreen();
    } catch { $('shell-notice').textContent = 'Fullscreen unavailable. Use Fit to tab.'; }
  });
  document.addEventListener('fullscreenchange', () => { fullscreen.textContent = document.fullscreenElement ? 'Exit fullscreen' : 'Fullscreen'; resizePending = true; });
  const secrets = $('secrets'), unlockButton = $('unlock-all'), unlockMessage = $('unlock-message');
  let modalCallback = () => {}, holdTimer = 0, holdOrigin = null, suppressClickUntil = 0, unlockPending = false;
  function openSecrets() {
    clearTimeout(holdTimer); modalCallback();
    if (!secrets.open) secrets.showModal();
  }
  diamond.addEventListener('pointerdown', (ev) => {
    if (ev.button !== 0 || diamond.disabled) return;
    holdOrigin = [ev.clientX, ev.clientY];
    holdTimer = setTimeout(() => { suppressClickUntil = performance.now() + 500; openSecrets(); }, 850);
  });
  diamond.addEventListener('pointermove', (ev) => { if (holdOrigin && Math.hypot(ev.clientX - holdOrigin[0], ev.clientY - holdOrigin[1]) > 8) clearTimeout(holdTimer); });
  for (const event of ['pointerup', 'pointercancel', 'pointerleave']) diamond.addEventListener(event, () => { clearTimeout(holdTimer); holdOrigin = null; });
  diamond.addEventListener('contextmenu', (ev) => { ev.preventDefault(); openSecrets(); });
  diamond.addEventListener('click', (ev) => {
    if (ev.shiftKey) { openSecrets(); return; }
    if (secrets.open || performance.now() < suppressClickUntil) return;
    const now = performance.now(); if (now - lastShake < 800) return; lastShake = now;
    shake(); diamond.classList.remove('shaking'); void diamond.offsetWidth; diamond.classList.add('shaking');
  });
  diamond.addEventListener('animationend', () => diamond.classList.remove('shaking'));
  unlockButton.addEventListener('click', () => {
    if (!unlockAll()) { unlockMessage.textContent = 'Load a household and return here to unlock its content.'; return; }
    unlockPending = true; unlockButton.disabled = true; unlockMessage.textContent = 'Unlocking…';
  });
  function afterFrame() {
    if (!unlockPending) return;
    const status = unlockStatus();
    if (status === 1) return;
    unlockPending = false; unlockButton.disabled = false;
    if (status !== 2) { unlockMessage.textContent = 'Content could not be unlocked. Return to your household and try again.'; return; }
    let saved = true;
    try { localStorage.setItem('sims3-content-unlocked-v1', '1'); } catch { saved = false; }
    persistUnlock();
    unlockMessage.textContent = saved ? 'All content unlocked. Reopen the shop or wardrobe to see it.' : 'Content unlocked for this session. Browser storage is unavailable.';
  }
  // Observer callbacks mark a pending change; allocation happens before the next complete guest frame.
  new ResizeObserver(() => { resizePending = true; }).observe(viewport);
  window.addEventListener('resize', () => { resizePending = true; });
  window.visualViewport?.addEventListener('resize', () => { resizePending = true; });
  function beforeFrame() {
    const deviceDpr = Math.max(.25, window.devicePixelRatio || 1);
    if (lastDpr !== deviceDpr) { lastDpr = deviceDpr; resizePending = true; }
    if (!resizePending) return;
    resizePending = false;
    const w = Math.max(1, viewport.clientWidth), h = Math.max(1, viewport.clientHeight);
    cssWidth = Math.min(w, h * RATIO); cssHeight = cssWidth / RATIO; dpr = deviceDpr;
    stage.style.width = cssWidth + 'px'; stage.style.height = cssHeight + 'px';
    const nativePixels = cssWidth * cssHeight * dpr * dpr;
    // Start at at most 1080p in Auto, then adapt upward/downward using sustained presentation rate.
    if (!state.initialized || nativePixels > state.nativePixels * 1.25) {
      autoScale = Math.min(1, Math.sqrt(1920 * 1080 / nativePixels)); state.initialized = true; settling = 3;
    }
    autoScale = Math.max(Math.min(1, Math.max(.5, 667 / (cssWidth * dpr))), autoScale);
    const scale = quality === 'auto' ? autoScale : SCALES[quality];
    const limit = Math.min(1, graphics.maxRenderSize / (cssWidth * dpr * scale), graphics.maxRenderSize / (cssHeight * dpr * scale));
    const rw = Math.max(1, Math.round(cssWidth * dpr * scale * limit));
    const rh = Math.max(1, Math.round(cssHeight * dpr * scale * limit));
    graphics.setRenderSize(rw, rh);
    Object.assign(state, { quality, cssWidth, cssHeight, dpr, nativePixels, scale: scale * limit, width: rw, height: rh, capped: limit < 1 });
    if (testMode) $('meter').textContent = `${rw} × ${rh}`;
  }
  function update(perf) {
    const g = graphics.stats;
    $('meter').textContent = `${perf.fps.toFixed(0)} fps · ${g.renderWidth} × ${g.renderHeight}`;
    if (!$('metrics').hidden) {
      const entries = [
        `Frame ${perf.frameMs.toFixed(1)} ms · p95 ${perf.p95Ms.toFixed(1)} ms`,
        `CPU ${perf.cpuMs.toFixed(1)} ms · peak ${perf.worstMs.toFixed(1)} ms`,
        `${g.drawCalls} draws/frame · ${(perf.uploadBytesPerSecond / 1048576).toFixed(1)} MiB/s uploads`,
        `Display ${dpr.toFixed(2)}× · render ${Math.round(state.scale * 100)}%${state.capped ? ' (GPU limit)' : ''}`,
        `Game memory ${perf.memoryMiB.toFixed(0)} MiB`,
      ];
      $('metric-values').replaceChildren(...entries.map((s) => { const el = document.createElement('span'); el.textContent = s; return el; }));
    }
    if (quality !== 'auto' || testMode || document.hidden || !perf.fps) return;
    if (settling > 0) { settling--; return; }
    low = perf.fps < 45 ? low + 1 : 0;
    high = perf.fps > 57 && perf.cpuMs < 12 ? high + 1 : 0;
    const floor = Math.min(1, Math.max(.5, 667 / (cssWidth * dpr)));
    if (low >= 3 && autoScale > floor) { autoScale = Math.max(floor, autoScale * .85); low = high = 0; settling = 3; resizePending = true; }
    else if (high >= 8 && autoScale < 1) { autoScale = Math.min(1, autoScale / .9); low = high = 0; settling = 5; resizePending = true; }
  }
  const state = { initialized: false, quality };
  beforeFrame();
  return { beforeFrame, afterFrame, update, state, onModal: (callback) => { modalCallback = callback; }, ready: () => { diamond.disabled = false; } };
}

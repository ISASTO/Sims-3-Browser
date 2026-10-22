import assert from 'node:assert/strict';
import { readFile } from 'node:fs/promises';
const code = await readFile(new URL('../web/simulation.js', import.meta.url));
const { SimulationClock } = await import('data:text/javascript;base64,' + code.toString('base64'));
const near = (actual, expected) => assert.ok(Math.abs(actual - expected) < 1e-5, `${actual} != ${expected}`);
let tests = 0;
function test(name, fn) { fn(); tests++; console.log('PASS', name); }

test('requested rates advance simulation equally on 60 Hz and 144 Hz displays', () => {
  for (const hz of [60, 144]) for (const rate of [1, 2, 4, 8]) {
    const clock = new SimulationClock(0, { budgetMs: Infinity });
    let draws = 0, previous = 0;
    for (let frame = 1; frame <= hz; frame++) clock.advance(frame * 1000 / hz, rate, () => true, (now, draw) => {
      assert.ok(now >= previous); if (rate > 1) assert.ok(now - previous <= 1000 / 60 + 1e-5);
      previous = now; if (draw) draws++;
    });
    near(clock.now, 1000 * rate); assert.equal(draws, hz);
  }
});
test('blocked gameplay remains at normal speed', () => {
  const clock = new SimulationClock(0);
  for (let frame = 1; frame <= 60; frame++) {
    const r = clock.advance(frame * 1000 / 60, 8, () => false, (_, draw) => assert.ok(draw));
    assert.equal(r.active, 1); assert.ok(r.blocked);
  }
  near(clock.now, 1000);
});
test('a menu opening inside a batch stops acceleration and still renders', () => {
  const clock = new SimulationClock(0, { budgetMs: Infinity });
  let active = true; const draws = [];
  const r = clock.advance(1000 / 60, 8, () => active, (_, draw) => { draws.push(draw); active = false; });
  assert.deepEqual(draws, [false, true]); assert.ok(r.blocked); near(clock.now, 1000 / 30);
  clock.advance(1000 / 30, 8, () => false, () => {}); near(clock.now, 50);
});
test('CPU limiting drops debt instead of replaying it after returning to normal', () => {
  let cpu = 0; const clock = new SimulationClock(0, { measure: () => cpu, budgetMs: 12 });
  const draws = []; const r = clock.advance(1000 / 60, 8, () => true, (_, draw) => { cpu += 15; draws.push(draw); });
  assert.ok(r.limited); assert.deepEqual(draws, [false, true]); near(clock.now, 1000 / 30);
  clock.advance(1000 / 30, 1, () => true, () => {}); near(clock.now, 50);
});
test('large foreground stalls have bounded work', () => {
  const clock = new SimulationClock(0, { budgetMs: Infinity });
  const r = clock.advance(10000, 8, () => true, () => {});
  assert.equal(r.steps, 16); assert.ok(r.limited); near(clock.now, 16 * 1000 / 60);
});
test('background and resume discard elapsed wall time', () => {
  const clock = new SimulationClock(0, { budgetMs: Infinity });
  clock.advance(1000 / 60, 8, () => true, () => {}); const before = clock.now;
  clock.reset(100000); near(clock.now, before);
  clock.advance(100000 + 1000 / 60, 8, () => true, () => {}); near(clock.now - before, 8 * 1000 / 60);
});
test('a stale display timestamp never moves either clock backward', () => {
  const clock = new SimulationClock(100);
  clock.advance(90, 1, () => true, () => {}); near(clock.now, 100);
  clock.advance(110, 1, () => true, () => {}); near(clock.now, 110);
});
console.log(`${tests} simulation-clock tests passed`);

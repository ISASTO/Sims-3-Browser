// Advance the original run loop in small steps; cap work instead of accumulating catch-up debt.
export class SimulationClock {
  constructor(now, { measure = () => performance.now(), budgetMs = 12, maxSteps = 16 } = {}) {
    this.now = now; this.lastReal = now;
    this.measure = measure; this.budgetMs = budgetMs; this.maxSteps = maxSteps;
  }
  reset(realNow) { this.lastReal = realNow; }
  advance(realNow, requested, allowed, run) {
    const elapsed = Math.max(0, realNow - this.lastReal);
    this.lastReal = Math.max(this.lastReal, realNow);
    const delta = Math.min(250, elapsed);
    const rate = [1, 2, 4, 8].includes(requested) ? requested : 1;
    const boosting = rate > 1 && allowed();
    const start = this.measure(), before = this.now;
    let steps = 0, remaining = delta * (boosting ? rate : 1), blocked = rate > 1 && !boosting;
    const step = 1000 / 60;
    if (boosting) {
      while (remaining > step + 1e-6 && steps < this.maxSteps - 1 && this.measure() - start < this.budgetMs) {
        this.now += step; remaining -= step; run(this.now, false); steps++;
        if (!allowed()) { blocked = true; break; }
      }
      // Always finish with a drawable frame, including when a menu opened during a substep.
      this.now += Math.min(step, remaining);
    } else this.now += remaining;
    run(this.now, true); steps++;
    const advanced = this.now - before;
    return { steps, advanced, elapsed, requested: rate, blocked,
      active: boosting && !blocked ? rate : 1,
      limited: boosting && !blocked && advanced + 1e-5 < delta * rate };
  }
}

/* Web Audio implementation of the Marmalade s3eAudio (compressed music) and
 * s3eSound (PCM channels) services used by the game. */
(function (root) {
'use strict';
const CHANNELS = 16;

class SimsAudio {
  constructor(ctx, options = {}) {
    this.ctx = ctx;
    this.log = options.log || (() => {});
    this.master = ctx.createGain();
    this.master.connect(ctx.destination);
    this.musicGain = ctx.createGain(); this.musicGain.connect(this.master);
    this.soundGain = ctx.createGain(); this.soundGain.connect(this.master);
    this.muted = false;
    this.music = null;            // {source, name, repeats, paused, startedAt, offset, buffer}
    this.musicVolume = 256; this.soundVolume = 256;
    this.decoded = new Map();
    this.channels = Array.from({ length: CHANNELS }, () => ({ source: null, gain: null, volume: 256, rate: 0, endAt: 0, paused: false }));
    this.outputRate = 22050;
    this.musicToken = 0;
  }
  resume() { if (this.ctx.state !== 'running' && !this.muted) this.ctx.resume().catch(() => {}); }
  suspend() { this.ctx.suspend().catch(() => {}); }
  setMuted(m) { this.muted = m; this.master.gain.value = m ? 0 : 1; if (!m) this.resume(); }

  // ---------------------------------------------------------- music
  async decode(name, bytes) {
    if (this.decoded.has(name)) return this.decoded.get(name);
    const p = this.ctx.decodeAudioData(bytes.slice().buffer);
    this.decoded.set(name, p);
    return p;
  }
  playMusic(name, bytes, repeats) {
    this.stopMusic();
    const token = ++this.musicToken;
    const music = { name, repeats, paused: false, playing: true, source: null };
    this.music = music;
    this.decode(name, bytes).then(buffer => {
      if (token !== this.musicToken || !music.playing) return;
      music.buffer = buffer;
      this.startMusicSource(music, 0);
    }, err => { this.log('Music could not be decoded (' + name + '): ' + err.message); music.playing = false; });
    return 0;
  }
  startMusicSource(music, offset) {
    const src = this.ctx.createBufferSource();
    src.buffer = music.buffer;
    // s3eAudioPlay: repeatCount 0 = repeat forever, n = play n times.
    src.loop = music.repeats === 0 || music.repeats > 1;
    src.connect(this.musicGain);
    src.start(0, offset % music.buffer.duration);
    music.source = src;
    music.startedAt = this.ctx.currentTime - offset;
    if (music.repeats > 1) {
      const end = music.buffer.duration * music.repeats - offset;
      src.stop(this.ctx.currentTime + end);
    }
    src.onended = () => { if (this.music === music && music.source === src && !music.paused) music.playing = false; };
  }
  stopMusic() {
    if (this.music) { this.music.playing = false; try { this.music.source && this.music.source.stop(); } catch {} }
    this.music = null;
    this.musicToken++;
  }
  pauseMusic() {
    const m = this.music; if (!m || m.paused || !m.source) return;
    m.offset = this.ctx.currentTime - m.startedAt; m.paused = true;
    try { m.source.stop(); } catch {}
  }
  resumeMusic() {
    const m = this.music; if (!m || !m.paused) return;
    m.paused = false; if (m.buffer) this.startMusicSource(m, m.offset || 0);
  }
  musicStatus() { const m = this.music; if (!m) return 0; if (m.paused) return 2; return m.playing ? 1 : 0; }
  setMusicVolume(v) { this.musicVolume = Math.max(0, Math.min(256, v)); this.musicGain.gain.value = this.musicVolume / 256; }

  // ---------------------------------------------------------- sound channels
  freeChannel() {
    const now = this.ctx.currentTime;
    for (let i = 0; i < CHANNELS; i++) {
      const c = this.channels[i];
      if (!c.source || (!c.loop && now >= c.endAt)) return i;
    }
    return -1;
  }
  playSound(channel, samples, rate, repeat) {
    const c = this.channels[channel];
    if (!c) return 1;
    this.stopSound(channel);
    const n = samples.length;
    if (!n) return 0;
    const buffer = this.ctx.createBuffer(1, n, Math.max(3000, Math.min(96000, rate || this.outputRate)));
    const data = buffer.getChannelData(0);
    for (let i = 0; i < n; i++) data[i] = samples[i] / 32768;
    const src = this.ctx.createBufferSource();
    src.buffer = buffer;
    const gain = this.ctx.createGain();
    gain.gain.value = c.volume / 256;
    src.connect(gain); gain.connect(this.soundGain);
    // s3eSoundChannelPlay: repeat 0 = loop forever, n = play n times.
    c.loop = repeat === 0;
    src.loop = repeat !== 1;
    const now = this.ctx.currentTime;
    src.start(now);
    if (repeat > 1) src.stop(now + buffer.duration * repeat);
    c.endAt = c.loop ? Infinity : now + buffer.duration * Math.max(1, repeat);
    c.source = src; c.gain = gain;
    src.onended = () => { if (c.source === src) { c.source = null; c.gain = null; } };
    return 0;
  }
  stopSound(channel) {
    const c = this.channels[channel]; if (!c || !c.source) return;
    try { c.source.stop(); } catch {}
    c.source = null; c.gain = null; c.endAt = 0;
  }
  setChannelVolume(channel, v) { const c = this.channels[channel]; if (!c) return 1; c.volume = Math.max(0, Math.min(256, v)); if (c.gain) c.gain.gain.value = c.volume / 256; return 0; }
  setChannelRate(channel, r) { const c = this.channels[channel]; if (!c) return 1; c.rate = r; return 0; }
  channelPlaying(channel) { const c = this.channels[channel]; return c && c.source && (c.loop || this.ctx.currentTime < c.endAt) ? 1 : 0; }
  setSoundVolume(v) { this.soundVolume = Math.max(0, Math.min(256, v)); this.soundGain.gain.value = this.soundVolume / 256; }
}

root.SimsAudio = SimsAudio;
if (typeof module !== 'undefined') module.exports = { SimsAudio };
})(typeof globalThis !== 'undefined' ? globalThis : this);

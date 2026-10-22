/* hostaudio.h — browser audio rendering interface (WebAudio); natively a silent stand-in. */
#pragma once
#include <stdint.h>
#ifdef GUEST_IDENTITY
#define HA(ret, name, args) __attribute__((import_module("audio"), import_name(#name))) ret ha_##name args;
#else
#define HA(ret, name, args) ret ha_##name args;
#endif
HA(void, buffer, (uint32_t id, const void *pcm, uint32_t bytes, uint32_t ch, uint32_t bits, uint32_t freq))
HA(void, buffer_delete, (uint32_t id))
HA(void, source_play, (uint32_t src, uint32_t buf, int loop, float gain, float pitch))
HA(void, source_stop, (uint32_t src))
HA(void, source_loop, (uint32_t src, int loop))
HA(void, source_param, (uint32_t src, float gain, float pitch))
/* AudioQueue output streams. Contract:
   - stream_open(q, rate, ch): create stream q (or discard all of its audio if it exists), paused, position 0;
   - stream_pcm(q, pcm, frames): append interleaved int16 frames (ch per frame) to q's timeline, gaplessly after the
     previous ones (if the device has already played everything queued, the new frames start as soon as possible);
   - stream_run(q, on): start/resume (1) or pause (0) q's playback;
   - stream_played(q): frames of q the output device has played since stream_open; never decreases, never exceeds
     the frames appended, and does not advance while q is paused or the device is suspended;
   - stream_stop(q): stop and destroy q. */
HA(void, stream_open, (uint32_t q, double rate, uint32_t ch))
HA(void, stream_pcm, (uint32_t q, const int16_t *pcm, uint32_t frames))
HA(void, stream_run, (uint32_t q, int on))
HA(double, stream_played, (uint32_t q))
HA(void, stream_stop, (uint32_t q))
HA(void, stream_volume, (uint32_t q, float gain))
HA(void, suspend, (int suspended))

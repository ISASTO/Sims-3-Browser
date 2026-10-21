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
HA(void, stream_play, (uint32_t q, const char *path, double offset_s, float gain))
HA(void, stream_stop, (uint32_t q))
HA(void, stream_volume, (uint32_t q, float gain))
HA(void, suspend, (int suspended))

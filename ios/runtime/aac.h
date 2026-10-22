/* aac.h — MPEG-4 AAC-LC decoder (raw_data_block packets, as AudioToolbox's AudioQueue/AudioConverter receive them). */
#pragma once
#include <stdint.h>

typedef struct AacDec AacDec;

/* asc: AudioSpecificConfig (may be NULL; then rate/channels describe an AAC-LC stream). Returns NULL for streams this
   decoder does not support (anything but AAC-LC with 1024-sample frames, 1 or 2 output channels); *why says why. */
AacDec *aac_open(const uint8_t *asc, uint32_t asc_len, double rate, uint32_t channels, const char **why);
/* Extracts the AudioSpecificConfig from an MPEG-4 ES descriptor ('esds' / CAF 'kuki' / kAudioQueueProperty_MagicCookie).
   Returns its length (0 if absent) and points *asc into cookie. */
uint32_t aac_cookie_asc(const uint8_t *cookie, uint32_t len, const uint8_t **asc);
/* Decodes one packet into 1024 interleaved int16 frames of aac_channels(d) channels. Returns 1024, or -1 on a
   bitstream error (out then holds silence; the decoder stays usable). */
int aac_decode(AacDec *d, const uint8_t *pkt, uint32_t len, int16_t *out);
uint32_t aac_channels(const AacDec *d);
double aac_rate(const AacDec *d);
const char *aac_error(const AacDec *d);    /* last decode error */
void aac_reset(AacDec *d);                 /* drop filterbank overlap (stream discontinuity) */
void aac_close(AacDec *d);

/* hle.c — module registration order. */
#include "rt.h"
void foundation_init(void);
void runloop_init(void);
void foundation2_init(void);
void uikit_init(void);
void cf_init(void);
void gl_init(void);
void audio_init(void);
void misc_init(void);
void foundation_extra_init(void);
void cxx_init(void);
void cg_init(void);
void nib_init(void);
void foundation_blocks_init(void);
void foundation_sdk_init(void);
void crypto_selftest(void);
void cxx_iostream_init(void);
void mediaplayer_init(void);
void hle_init_modules(void) {
    cxx_init();
    foundation_init();
    runloop_init();
    foundation2_init();
    cf_init();
    uikit_init();
    gl_init();
    audio_init();
    misc_init();
    foundation_extra_init();
    cg_init();
    nib_init();
    foundation_blocks_init();
    foundation_sdk_init();
    crypto_selftest();
    cxx_iostream_init();
    mediaplayer_init();
}

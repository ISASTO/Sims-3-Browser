/* misc.c — platform services with explicit "browser device" contracts (DECISIONS.md D11):
 * no ad tracking, no cellular, network reported unreachable, no in-app purchase, no accelerometer,
 * keychain persisted in the app container, CommonCrypto digests implemented. */
#include "rt.h"

gptr rt_retain(CPU *c, gptr obj);
void rt_release(CPU *c, gptr obj);
const char *vfs_resolve(const char *in, char *out, size_t outlen);
gptr plist_parse(CPU *c, const uint8_t *data, uint32_t len);
void plist_write_xml(CPU *c, gptr obj, char **out);
#define M(cls, sel, fn) host_method(cls, sel, "", fn)
#define CM(cls, sel, fn) host_cmethod(cls, sel, "", fn)
static void r_nil(CPU *c) { RET(0); }
static void r_no(CPU *c) { RET(0); }
static void r_yes(CPU *c) { RET(1); }
static void r_self(CPU *c) { RET(SELF); }
static void r_noop(CPU *c) { UNUSED(c); }
static gptr singleton(const char *cls) { gptr k = objc_class_named(cls); gptr o = gstatic_alloc(4); ST32(o, k); return o; }

/* ASIdentifierManager */
static gptr asid;
static void as_shared(CPU *c) { RET(asid); }
static void as_ad_id(CPU *c) { RET(objc_autorelease_(objc_alloc_instance(objc_class_named("NSUUID"), 0))); }
/* AVAudioSession */
static gptr avs;
static void av_shared(CPU *c) { RET(avs); }
static void av_setCategory(CPU *c) { RET(1); }
static void av_rate(CPU *c) { RETD(44100.0); }
static void av_vol(CPU *c) { RETF(1.0f); }
static void av_category(CPU *c) { RET(nsstr("AVAudioSessionCategoryAmbient")); }
bool media_other_audio_playing(void);   /* mediaplayer.c: the system music player is playing */
static void av_otherAudio(CPU *c) { RET(media_other_audio_playing()); }
/* SKPaymentQueue: purchases unavailable */
static gptr skq;
static void sk_default(CPU *c) { RET(skq); }
static void sk_transactions(CPU *c) { RET(nsarray_new(NULL, 0, false, false)); }
/* CMMotionManager: no accelerometer on desktop browsers */
static void cm_available(CPU *c) { RET(0); }
/* ADClient */
static gptr adc;
static void ad_shared(CPU *c) { RET(adc); }
/* UIPasteboard */
static gptr pb;
static void pb_general(CPU *c) { RET(pb); }

/* SystemConfiguration reachability: report "not reachable" */
void H_SCNetworkReachabilityCreateWithName(CPU *c) { RET(objc_alloc_instance(objc_class_named("NSObject"), 0)); }
void H_SCNetworkReachabilityGetFlags(CPU *c) { ST32(ARG(1), 0); RET(1); }
void H_SCNetworkReachabilitySetCallback(CPU *c) { RET(1); }
void H_SCNetworkReachabilityScheduleWithRunLoop(CPU *c) { RET(1); }
void H_SCNetworkReachabilityUnscheduleFromRunLoop(CPU *c) { RET(1); }

/* ------------------------------------------------------------------ keychain (kSecClassGenericPassword items keyed by kSecAttrGeneric) */
static const char *kc_path = "/home/Library/Keychain.plist";
static gptr kc;
static void kc_load(CPU *c) {
    if (kc) return;
    int n = host_file_size(kc_path); gptr d = 0;
    if (n > 0) { uint8_t *b = malloc((size_t)n); host_file_read(kc_path, b, 0, (uint32_t)n); d = plist_parse(c, b, (uint32_t)n); free(b); }
    kc = nsdict_new(true, true);
    if (d) msg(c, kc, "addEntriesFromDictionary:", 1, d);
}
static void kc_save(CPU *c) { char *x; plist_write_xml(c, kc, &x); host_file_write(kc_path, x, (uint32_t)strlen(x), 0); free(x); }
/* item identity: service / account / generic attribute (the attributes the game and its SDKs query by) */
static gptr kc_key(CPU *c, gptr q) {
    static const char *attrs[] = {"kSecAttrService", "kSecAttrAccount", "kSecAttrGeneric"};
    char key[1024] = ""; bool any = false;
    for (int i = 0; i < 3; i++) {
        gptr g = nsdict_get(q, nsstr(attrs[i]));
        if (!g) continue;
        if (!is_nsstring(g)) g = msg(c, objc_alloc_instance(objc_class_named("NSString"), 0), "initWithData:encoding:", 2, g, 4);
        const char *v = g ? nsstr_cstr(g) : "";
        /* the original single-attribute layout keyed generic-only items by the bare value */
        if (i == 2 && !any) return g ? g : nsstr("default");
        size_t k = strlen(key); snprintf(key + k, sizeof key - k, "%s%s=%s", any ? "|" : "", attrs[i] + 7, v); any = true;
    }
    return nsstr(any ? key : "default");
}
void H_SecItemCopyMatching(CPU *c) {
    kc_load(c);
    gptr v = nsdict_get(kc, kc_key(c, ARG(0)));
    if (!v) { RET(-25300); return; }   /* errSecItemNotFound */
    if (ARG(1)) ST32(ARG(1), rt_retain(c, v));
    RET(0);
}
void H_SecItemAdd(CPU *c) { kc_load(c); gptr v = nsdict_get(ARG(0), nsstr("kSecValueData")); if (v) { nsdict_set(kc, kc_key(c, ARG(0)), v); kc_save(c); } RET(0); }
void H_SecItemUpdate(CPU *c) { kc_load(c); gptr v = nsdict_get(ARG(1), nsstr("kSecValueData")); if (v) { nsdict_set(kc, kc_key(c, ARG(0)), v); kc_save(c); } RET(0); }
void H_SecItemDelete(CPU *c) { kc_load(c); msg(c, kc, "removeObjectForKey:", 1, kc_key(c, ARG(0))); kc_save(c); RET(0); }
void H_SecRandomCopyBytes(CPU *c) { static uint64_t s = 0x243F6A8885A308D3ull; for (uint32_t i = 0; i < ARG(1); i++) { s ^= s << 13; s ^= s >> 7; s ^= s << 17; ST8(ARG(2) + i, s >> 32); } RET(0); }

/* ------------------------------------------------------------------ CommonCrypto: SHA-256 and HMAC-SHA256 */
typedef struct { uint32_t h[8]; uint64_t len; uint8_t buf[64]; uint32_t n; } SHA;
static const uint32_t K256[64] = {0x428a2f98,0x71374491,0xb5c0fbcf,0xe9b5dba5,0x3956c25b,0x59f111f1,0x923f82a4,0xab1c5ed5,0xd807aa98,0x12835b01,0x243185be,0x550c7dc3,0x72be5d74,0x80deb1fe,0x9bdc06a7,0xc19bf174,0xe49b69c1,0xefbe4786,0x0fc19dc6,0x240ca1cc,0x2de92c6f,0x4a7484aa,0x5cb0a9dc,0x76f988da,0x983e5152,0xa831c66d,0xb00327c8,0xbf597fc7,0xc6e00bf3,0xd5a79147,0x06ca6351,0x14292967,0x27b70a85,0x2e1b2138,0x4d2c6dfc,0x53380d13,0x650a7354,0x766a0abb,0x81c2c92e,0x92722c85,0xa2bfe8a1,0xa81a664b,0xc24b8b70,0xc76c51a3,0xd192e819,0xd6990624,0xf40e3585,0x106aa070,0x19a4c116,0x1e376c08,0x2748774c,0x34b0bcb5,0x391c0cb3,0x4ed8aa4a,0x5b9cca4f,0x682e6ff3,0x748f82ee,0x78a5636f,0x84c87814,0x8cc70208,0x90befffa,0xa4506ceb,0xbef9a3f7,0xc67178f2};
#define RR(x, n) (((x) >> (n)) | ((x) << (32 - (n))))
static void sha_block(SHA *s, const uint8_t *p) {
    uint32_t w[64], a, b, c, d, e, f, g, h;
    for (int i = 0; i < 16; i++) w[i] = (uint32_t)p[4 * i] << 24 | (uint32_t)p[4 * i + 1] << 16 | (uint32_t)p[4 * i + 2] << 8 | p[4 * i + 3];
    for (int i = 16; i < 64; i++) w[i] = w[i - 16] + (RR(w[i - 15], 7) ^ RR(w[i - 15], 18) ^ (w[i - 15] >> 3)) + w[i - 7] + (RR(w[i - 2], 17) ^ RR(w[i - 2], 19) ^ (w[i - 2] >> 10));
    a = s->h[0]; b = s->h[1]; c = s->h[2]; d = s->h[3]; e = s->h[4]; f = s->h[5]; g = s->h[6]; h = s->h[7];
    for (int i = 0; i < 64; i++) {
        uint32_t t1 = h + (RR(e, 6) ^ RR(e, 11) ^ RR(e, 25)) + ((e & f) ^ (~e & g)) + K256[i] + w[i];
        uint32_t t2 = (RR(a, 2) ^ RR(a, 13) ^ RR(a, 22)) + ((a & b) ^ (a & c) ^ (b & c));
        h = g; g = f; f = e; e = d + t1; d = c; c = b; b = a; a = t1 + t2;
    }
    s->h[0] += a; s->h[1] += b; s->h[2] += c; s->h[3] += d; s->h[4] += e; s->h[5] += f; s->h[6] += g; s->h[7] += h;
}
static void sha_init(SHA *s) { static const uint32_t iv[8] = {0x6a09e667,0xbb67ae85,0x3c6ef372,0xa54ff53a,0x510e527f,0x9b05688c,0x1f83d9ab,0x5be0cd19}; memcpy(s->h, iv, 32); s->len = 0; s->n = 0; }
static void sha_upd(SHA *s, const uint8_t *p, size_t n) { s->len += n; while (n) { size_t k = 64 - s->n; if (k > n) k = n; memcpy(s->buf + s->n, p, k); s->n += (uint32_t)k; p += k; n -= k; if (s->n == 64) { sha_block(s, s->buf); s->n = 0; } } }
static void sha_fin(SHA *s, uint8_t out[32]) {
    uint64_t bits = s->len * 8; uint8_t pad = 0x80; sha_upd(s, &pad, 1); uint8_t z = 0; while (s->n != 56) sha_upd(s, &z, 1);
    uint8_t L[8]; for (int i = 0; i < 8; i++) L[i] = (uint8_t)(bits >> (56 - 8 * i)); sha_upd(s, L, 8);
    for (int i = 0; i < 8; i++) { out[4 * i] = (uint8_t)(s->h[i] >> 24); out[4 * i + 1] = (uint8_t)(s->h[i] >> 16); out[4 * i + 2] = (uint8_t)(s->h[i] >> 8); out[4 * i + 3] = (uint8_t)s->h[i]; }
}
void H_CC_SHA256(CPU *c) { SHA s; sha_init(&s); sha_upd(&s, G2H(ARG(0)), ARG(1)); uint8_t o[32]; sha_fin(&s, o); memcpy(G2H(ARG(2)), o, 32); RET(ARG(2)); }

void misc_init(void) {
    gptr k = host_class("ASIdentifierManager", "NSObject", 4); asid = singleton("ASIdentifierManager");
    CM(k, "sharedManager", as_shared); M(k, "advertisingIdentifier", as_ad_id); M(k, "isAdvertisingTrackingEnabled", r_no);
    k = host_class("CTTelephonyNetworkInfo", "NSObject", 4);
    M(k, "subscriberCellularProvider", r_nil); M(k, "currentRadioAccessTechnology", r_nil);
    k = host_class("AVAudioSession", "NSObject", 4); avs = singleton("AVAudioSession");
    CM(k, "sharedInstance", av_shared); M(k, "setCategory:error:", av_setCategory); M(k, "setActive:error:", av_setCategory);
    M(k, "setActive:withOptions:error:", av_setCategory); M(k, "category", av_category); M(k, "isOtherAudioPlaying", av_otherAudio);
    M(k, "secondaryAudioShouldBeSilencedHint", r_no); M(k, "setMode:error:", av_setCategory);
    M(k, "setPreferredSampleRate:error:", av_setCategory); M(k, "setPreferredIOBufferDuration:error:", av_setCategory);
    M(k, "setCategory:withOptions:error:", av_setCategory); M(k, "setDelegate:", r_noop); M(k, "sampleRate", av_rate); M(k, "outputVolume", av_vol);
    k = host_class("SKPaymentQueue", "NSObject", 4); skq = singleton("SKPaymentQueue");
    CM(k, "defaultQueue", sk_default); CM(k, "canMakePayments", r_no); M(k, "addTransactionObserver:", r_noop); M(k, "removeTransactionObserver:", r_noop);
    M(k, "transactions", sk_transactions);
    k = host_class("CMMotionManager", "NSObject", 4);
    M(k, "isAccelerometerAvailable", cm_available); M(k, "isDeviceMotionAvailable", cm_available); M(k, "isGyroAvailable", cm_available);
    M(k, "setAccelerometerUpdateInterval:", r_noop); M(k, "startAccelerometerUpdates", r_noop); M(k, "stopAccelerometerUpdates", r_noop);
    M(k, "accelerometerData", r_nil); M(k, "isAccelerometerActive", r_no);
    /* no motion hardware: update handlers are accepted but never invoked */
    M(k, "startAccelerometerUpdatesToQueue:withHandler:", r_noop); M(k, "startDeviceMotionUpdatesToQueue:withHandler:", r_noop); M(k, "stopDeviceMotionUpdates", r_noop);
    k = host_class("ADClient", "NSObject", 4); adc = singleton("ADClient");
    CM(k, "sharedClient", ad_shared); M(k, "requestAttributionDetailsWithBlock:", r_noop); M(k, "determineAppInstallationAttributionWithCompletionHandler:", r_noop);
    k = host_class("UIPasteboard", "NSObject", 4); pb = singleton("UIPasteboard");
    CM(k, "generalPasteboard", pb_general); CM(k, "pasteboardWithName:create:", pb_general); M(k, "string", r_nil); M(k, "setString:", r_noop);
    M(k, "dataForPasteboardType:", r_nil); M(k, "setPersistent:", r_noop); M(k, "setData:forPasteboardType:", r_noop);
    UNUSED(r_yes); UNUSED(r_self);
}

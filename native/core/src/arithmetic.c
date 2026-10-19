/* Reviewed recovery of ARM helper instructions and their multi-register results.
 * Register-controlled ARM shifts use the low byte and zero/sign fill at >=32.
 * Keep those rules explicit: C shifts by 32+ have undefined behavior.
 * Division's zero-denominator exception path is outside this core's contract.
 */
#include "core.h"

static uint32_t lsl32(uint32_t value,uint32_t count) {
    count &= 255;
    return count < 32 ? value << count : 0;
}
static uint32_t lsr32(uint32_t value,uint32_t count) {
    count &= 255;
    return count < 32 ? value >> count : 0;
}
static uint32_t asr32(uint32_t value,uint32_t count) {
    count &= 255;
    if (!count) return value;
    if (count >= 32) return 0u-(value>>31);
    return (value>>count) | ((0u-(value>>31))<<(32-count));
}

uint64_t FUN_4a000860(uint32_t lo,uint32_t hi,uint32_t count) {
    uint32_t delta=count-32;
    if (!(delta&0x80000000u)) return CONCAT44(lsl32(lo,delta),0);
    return CONCAT44(lsl32(hi,count)|lsr32(lo,32-count),lsl32(lo,count));
}
uint64_t FUN_4a000888(uint32_t lo,uint32_t hi,uint32_t count) {
    uint32_t delta=count-32;
    if (!(delta&0x80000000u)) return lsr32(hi,delta);
    return CONCAT44(lsr32(hi,count),lsr32(lo,count)|lsl32(hi,32-count));
}
uint64_t FUN_4a0008b0(uint32_t lo,uint32_t hi,uint32_t count) {
    uint32_t delta=count-32;
    if (!(delta&0x80000000u)) return CONCAT44(asr32(hi,31),asr32(hi,delta));
    return CONCAT44(asr32(hi,count),lsr32(lo,count)|lsl32(hi,32-count));
}
uint64_t FUN_4a0008dc(uint32_t al,uint32_t ah,uint32_t bl,uint32_t bh) {
    return CONCAT44(ah,al)*CONCAT44(bh,bl);
}
CoreDiv64 FUN_4a0008f8(uint32_t al,uint32_t ah,uint32_t bl,uint32_t bh) {
    uint64_t a=CONCAT44(ah,al),b=CONCAT44(bh,bl);
    if (!b) __builtin_trap();
    CoreDiv64 result={a/b,a%b};
    return result;
}
CoreDiv64 FUN_4a00080c(uint32_t al,uint32_t ah,uint32_t bl,uint32_t bh) {
    uint64_t a=CONCAT44(ah,al),b=CONCAT44(bh,bl);
    bool aneg=(ah>>31)!=0,bneg=(bh>>31)!=0;
    if (aneg) a=0-a;
    if (bneg) b=0-b;
    CoreDiv64 result=FUN_4a0008f8((uint32_t)a,(uint32_t)(a>>32),(uint32_t)b,(uint32_t)(b>>32));
    if (aneg!=bneg) result.quotient=0-result.quotient;
    if (aneg) result.remainder=0-result.remainder;
    return result;
}
uint64_t FUN_4a0015f0(uint32_t dividend,uint32_t divisor) {
    bool aneg=(dividend>>31)!=0,bneg=(divisor>>31)!=0;
    uint32_t a=aneg?0-dividend:dividend,b=bneg?0-divisor:divisor;
    if (!b) __builtin_trap();
    uint32_t q=a/b,r=a%b;
    if (aneg!=bneg) q=0-q;
    if (aneg) r=0-r;
    return CONCAT44(r,q);
}

/* Reviewed recovery of RVCT copy/move and shared fill tails.
 * The forward-copy contract requires non-overlapping regions. The move helper
 * permits overlap. Its backwards tail's final byte uses no writeback, leaving
 * a one-byte residual in some cases. Preserving wrappers return original dst.
 */
#include "core.h"

uint64_t FUN_4a000f84(uint *dst,uint *src,uint count) {
    byte *d=(byte *)dst,*s=(byte *)src;
    for (uint i=0;i<count;i++) d[i]=s[i];
    return CONCAT44((uint)(uintptr_t)(s+count),(uint)(uintptr_t)(d+count));
}
uint64_t FUN_4a00105c(uint *dst,uint *src,uint count) {
    uint d=(uint)(uintptr_t)dst,s=(uint)(uintptr_t)src;
    if (d>=s && d-s<count) {
        byte *out=(byte *)dst,*in=(byte *)src;
        for (uint i=count;i;i--) out[i-1]=in[i-1];
        uint residual=count<=3?(count&1):(d&1);
        return CONCAT44(s+residual,d+residual);
    }
    return FUN_4a000f84(dst,src,count);
}
uint *FUN_4a000eb8(uint *dst,uint *src,uint count) {
    FUN_4a000f84(dst,src,count);
    return dst;
}
uint *FUN_4a000ec8(uint *dst,uint *src,uint count) {
    FUN_4a00105c(dst,src,count);
    return dst;
}
undefined4 *FUN_4a000f70(undefined4 *dst,uint count,undefined1 fill) {
    byte *d=(byte *)dst;
    for (uint i=0;i<count;i++) d[i]=fill;
    return (undefined4 *)(d+count);
}
undefined4 *FUN_4a001274(undefined4 *dst,uint count) {
    return FUN_4a000f70(dst,count,0);
}
undefined4 *FUN_4a00121c(undefined4 *dst,uint count) {
    return FUN_4a001274(dst,count);
}

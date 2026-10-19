/* Generated native-function gateway; no ARM instruction interpreter. */
#include "core.h"
static uint32_t result_words[4];
uint32_t core_result_ptr(void) { return (uint32_t)(uintptr_t)result_words; }
uint32_t core_heap_base(void) { extern char __heap_base; return (uint32_t)(uintptr_t)&__heap_base; }
uint FUN_4a005250(uint param_1,uint param_2);
undefined4 FUN_4a005c34(undefined4 param_1);
int FUN_4a02afd8(uint param_1);
int FUN_4a030118(uint param_1);
int FUN_4a033804(int param_1);
uint FUN_4a038ee4(uint param_1);
undefined4 FUN_4a03d39c(int param_1,int param_2);
undefined4 FUN_4a05a600(uint param_1);
undefined4 FUN_4a08d5b4(undefined4 param_1,int param_2);
undefined4 FUN_4a08d5ce(undefined4 param_1,int param_2);
undefined4 FUN_4a099bc0(undefined4 param_1);
int FUN_4a0d4b74(int param_1,int param_2,int param_3);
int FUN_4a0d4bb8(int param_1);
undefined4 FUN_4a0de09c(undefined4 param_1);
undefined4 FUN_4a0de104(int param_1);
undefined4 FUN_4a0e7234(int param_1);
int FUN_4a105ec0(uint param_1,int param_2);
undefined4 FUN_4a106fe0(undefined4 param_1);
int FUN_4a107de8(int param_1,int param_2,int param_3);
int FUN_4a107e20(int param_1,int param_2,int param_3);
undefined4 FUN_4a1415a0(undefined4 param_1,int param_2,undefined4 param_3);
uint FUN_4a171fac(uint param_1);
uint32_t core_invoke(uint32_t id,uint32_t a,uint32_t b,uint32_t c,uint32_t d) {
  result_words[0]=result_words[1]=result_words[2]=result_words[3]=0;
  switch(id) {
    case 1: {
      uint64_t value=FUN_4a000860((uint32_t)a,(uint32_t)b,(uint32_t)c);
      result_words[0]=(uint32_t)value; result_words[1]=(uint32_t)(value>>32);
      return 3;
    }
    case 2: {
      uint64_t value=FUN_4a000888((uint32_t)a,(uint32_t)b,(uint32_t)c);
      result_words[0]=(uint32_t)value; result_words[1]=(uint32_t)(value>>32);
      return 3;
    }
    case 3: {
      uint64_t value=FUN_4a0008b0((uint32_t)a,(uint32_t)b,(uint32_t)c);
      result_words[0]=(uint32_t)value; result_words[1]=(uint32_t)(value>>32);
      return 3;
    }
    case 4: {
      uint64_t value=FUN_4a0008dc((uint32_t)a,(uint32_t)b,(uint32_t)c,(uint32_t)d);
      result_words[0]=(uint32_t)value; result_words[1]=(uint32_t)(value>>32);
      return 3;
    }
    case 5: {
      CoreDiv64 value=FUN_4a0008f8((uint32_t)a,(uint32_t)b,(uint32_t)c,(uint32_t)d);
      result_words[0]=(uint32_t)value.quotient; result_words[1]=(uint32_t)(value.quotient>>32);
      result_words[2]=(uint32_t)value.remainder; result_words[3]=(uint32_t)(value.remainder>>32);
      return 15;
    }
    case 6: {
      CoreDiv64 value=FUN_4a00080c((uint32_t)a,(uint32_t)b,(uint32_t)c,(uint32_t)d);
      result_words[0]=(uint32_t)value.quotient; result_words[1]=(uint32_t)(value.quotient>>32);
      result_words[2]=(uint32_t)value.remainder; result_words[3]=(uint32_t)(value.remainder>>32);
      return 15;
    }
    case 7: {
      uint64_t value=FUN_4a0015f0((uint32_t)a,(uint32_t)b);
      result_words[0]=(uint32_t)value; result_words[1]=(uint32_t)(value>>32);
      return 3;
    }
    case 8: {
      uint64_t value=FUN_4a000f84((uint *)(uintptr_t)a,(uint *)(uintptr_t)b,(uint32_t)c);
      result_words[0]=(uint32_t)value; result_words[1]=(uint32_t)(value>>32);
      return 3;
    }
    case 9: {
      uint64_t value=FUN_4a00105c((uint *)(uintptr_t)a,(uint *)(uintptr_t)b,(uint32_t)c);
      result_words[0]=(uint32_t)value; result_words[1]=(uint32_t)(value>>32);
      return 3;
    }
    case 10: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a000eb8((uint *)(uintptr_t)a,(uint *)(uintptr_t)b,(uint32_t)c);
      return 1;
    }
    case 11: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a000ec8((uint *)(uintptr_t)a,(uint *)(uintptr_t)b,(uint32_t)c);
      return 1;
    }
    case 12: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a000f70((uint *)(uintptr_t)a,(uint32_t)b,(uint8_t)c);
      return 1;
    }
    case 13: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a00121c((uint *)(uintptr_t)a,(uint32_t)b);
      return 1;
    }
    case 14: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a001274((uint *)(uintptr_t)a,(uint32_t)b);
      return 1;
    }
    case 15: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a000ed8((short *)(uintptr_t)a,(short *)(uintptr_t)b);
      return 1;
    }
    case 16: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a000ef4((ushort *)(uintptr_t)a,(ushort *)(uintptr_t)b);
      return 1;
    }
    case 17: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a000f18((int32_t)a,(int32_t)b);
      return 1;
    }
    case 18: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a000f50((short *)(uintptr_t)a);
      return 1;
    }
    case 19: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a0012bc((uint *)(uintptr_t)a,(uint *)(uintptr_t)b);
      return 1;
    }
    case 20: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a001314((uint *)(uintptr_t)a,(uint *)(uintptr_t)b,(uint32_t)c);
      return 1;
    }
    case 21: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a001368((uint *)(uintptr_t)a,(uint *)(uintptr_t)b,(int32_t)c);
      return 1;
    }
    case 22: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a0013e0((uint *)(uintptr_t)a);
      return 1;
    }
    case 23: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a00142c((uint *)(uintptr_t)a,(uint *)(uintptr_t)b);
      return 1;
    }
    case 24: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a00150c((char *)(uintptr_t)a,(uint8_t)b,(int32_t)c);
      return 1;
    }
    case 25: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a001538((char *)(uintptr_t)a,(char *)(uintptr_t)b);
      return 1;
    }
    case 26: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a001552((int32_t)a,(uint8_t)b);
      return 1;
    }
    case 27: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a00156c((char *)(uintptr_t)a,(char *)(uintptr_t)b,(int32_t)c);
      return 1;
    }
    case 28: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a0015a0((char *)(uintptr_t)a,(uint8_t)b);
      return 1;
    }
    case 29: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a0015c0((char *)(uintptr_t)a,(char *)(uintptr_t)b);
      return 1;
    }
    case 30: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a000e60((byte *)(uintptr_t)a,(byte *)(uintptr_t)b,(uint32_t)c);
      return 1;
    }
    case 31: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a000c5c((int32_t)a);
      return 1;
    }
    case 32: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a000c72((int32_t)a);
      return 1;
    }
    case 33: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a000c88((int32_t)a);
      return 1;
    }
    case 34: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a000ca8((int32_t)a);
      return 1;
    }
    case 35: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a16303e((char *)(uintptr_t)a,(char *)(uintptr_t)b,(uint32_t)c);
      return 1;
    }
    case 36: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a163010((char *)(uintptr_t)a,(char *)(uintptr_t)b,(uint32_t)c);
      return 1;
    }
    case 37: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a00b998((char *)(uintptr_t)a,(char *)(uintptr_t)b);
      return 1;
    }
    case 38: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a00b9ea((char *)(uintptr_t)a,(char *)(uintptr_t)b);
      return 1;
    }
    case 39: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a00ba22((char *)(uintptr_t)a,(char *)(uintptr_t)b,(int32_t)c);
      return 1;
    }
    case 40: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a00ba7c((char *)(uintptr_t)a);
      return 1;
    }
    case 41: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a00ba94((char *)(uintptr_t)a,(char *)(uintptr_t)b,(int32_t)c);
      return 1;
    }
    case 42: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a00bb00((char *)(uintptr_t)a,(int32_t)b);
      return 1;
    }
    case 43: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a00d6a8((char *)(uintptr_t)a,(char *)(uintptr_t)b);
      return 1;
    }
    case 101: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a005250((uint32_t)a,(uint32_t)b);
      return 1;
    }
    case 102: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a005c34((uint32_t)a);
      return 1;
    }
    case 103: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a02afd8((uint32_t)a);
      return 1;
    }
    case 104: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a030118((uint32_t)a);
      return 1;
    }
    case 105: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a033804((int32_t)a);
      return 1;
    }
    case 106: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a038ee4((uint32_t)a);
      return 1;
    }
    case 107: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a03d39c((int32_t)a,(int32_t)b);
      return 1;
    }
    case 108: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a05a600((uint32_t)a);
      return 1;
    }
    case 109: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a08d5b4((uint32_t)a,(int32_t)b);
      return 1;
    }
    case 110: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a08d5ce((uint32_t)a,(int32_t)b);
      return 1;
    }
    case 111: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a099bc0((uint32_t)a);
      return 1;
    }
    case 112: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a0d4b74((int32_t)a,(int32_t)b,(int32_t)c);
      return 1;
    }
    case 113: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a0d4bb8((int32_t)a);
      return 1;
    }
    case 114: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a0de09c((uint32_t)a);
      return 1;
    }
    case 115: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a0de104((int32_t)a);
      return 1;
    }
    case 116: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a0e7234((int32_t)a);
      return 1;
    }
    case 117: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a105ec0((uint32_t)a,(int32_t)b);
      return 1;
    }
    case 118: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a106fe0((uint32_t)a);
      return 1;
    }
    case 119: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a107de8((int32_t)a,(int32_t)b,(int32_t)c);
      return 1;
    }
    case 120: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a107e20((int32_t)a,(int32_t)b,(int32_t)c);
      return 1;
    }
    case 121: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a1415a0((uint32_t)a,(int32_t)b,(uint32_t)c);
      return 1;
    }
    case 122: {
      result_words[0]=(uint32_t)(uintptr_t)FUN_4a171fac((uint32_t)a);
      return 1;
    }
    default: return 0;
  }
}

/* Analyst-recovered ARM register contracts. No operating-system dependency. */
#ifndef SIMS3_CORE_H
#define SIMS3_CORE_H
#include <stdint.h>
#include <stddef.h>
typedef uint8_t byte;
typedef uint8_t undefined1;
typedef uint16_t ushort;
typedef uint16_t undefined2;
typedef uint32_t uint;
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef int64_t longlong;
typedef uint64_t ulonglong;
typedef _Bool bool;
#define true 1
#define false 0
#define CONCAT11(a,b) ((uint16_t)((uint16_t)(uint8_t)(a)<<8 | (uint8_t)(b)))
#define CONCAT22(a,b) ((uint32_t)((uint32_t)(uint16_t)(a)<<16 | (uint16_t)(b)))
#define CONCAT44(a,b) ((uint64_t)((uint64_t)(uint32_t)(a)<<32 | (uint32_t)(b)))
#define CARRY4(a,b) (((uint64_t)(uint32_t)(a)+(uint32_t)(b)) > UINT32_MAX)
#define SCARRY4(a,b) (((int64_t)(int32_t)(a)+(int32_t)(b)) > INT32_MAX || ((int64_t)(int32_t)(a)+(int32_t)(b)) < INT32_MIN)
#define SBORROW4(a,b) (((int64_t)(int32_t)(a)-(int32_t)(b)) > INT32_MAX || ((int64_t)(int32_t)(a)-(int32_t)(b)) < INT32_MIN)
typedef struct { uint64_t quotient; uint64_t remainder; } CoreDiv64;

uint64_t FUN_4a000860(uint32_t lo,uint32_t hi,uint32_t count);
uint64_t FUN_4a000888(uint32_t lo,uint32_t hi,uint32_t count);
uint64_t FUN_4a0008b0(uint32_t lo,uint32_t hi,uint32_t count);
uint64_t FUN_4a0008dc(uint32_t al,uint32_t ah,uint32_t bl,uint32_t bh);
CoreDiv64 FUN_4a0008f8(uint32_t al,uint32_t ah,uint32_t bl,uint32_t bh);
CoreDiv64 FUN_4a00080c(uint32_t al,uint32_t ah,uint32_t bl,uint32_t bh);
uint64_t FUN_4a0015f0(uint32_t dividend,uint32_t divisor);

uint64_t FUN_4a000f84(uint *dst,uint *src,uint count);
uint64_t FUN_4a00105c(uint *dst,uint *src,uint count);
uint *FUN_4a000eb8(uint *dst,uint *src,uint count);
uint *FUN_4a000ec8(uint *dst,uint *src,uint count);
int FUN_4a000e60(byte *first,byte *second,uint count);
undefined4 *FUN_4a000f70(undefined4 *dst,uint count,undefined1 fill);
undefined4 *FUN_4a00121c(undefined4 *dst,uint count);
undefined4 *FUN_4a001274(undefined4 *dst,uint count);

short *FUN_4a000ed8(short *dst,short *src);
int FUN_4a000ef4(ushort *a,ushort *b);
int FUN_4a000f18(int haystack,int needle);
int FUN_4a000f50(short *text);
uint *FUN_4a0012bc(uint *dst,uint *src);
int FUN_4a001314(uint *a,uint *b,uint count);
uint *FUN_4a001368(uint *dst,uint *src,int count);
int FUN_4a0013e0(uint *text);
uint FUN_4a00142c(uint *a,uint *b);
char *FUN_4a00150c(char *text,char ch,int count);
char *FUN_4a001538(char *dst,char *src);
char *FUN_4a001552(int text,char ch);
char *FUN_4a00156c(char *dst,char *src,int count);
char *FUN_4a0015a0(char *text,char ch);
char *FUN_4a0015c0(char *haystack,char *needle);
uint32_t core_path_root(void);
uint32_t FUN_4a000c5c(int32_t value);
uint32_t FUN_4a000c72(int32_t value);
int32_t FUN_4a000c88(int32_t value);
int32_t FUN_4a000ca8(int32_t value);
uint32_t FUN_4a16303e(char *destination,char *source,uint32_t capacity);
uint32_t FUN_4a163010(char *destination,char *source,uint32_t capacity);
char *FUN_4a00b998(char *source,char *destination);
char *FUN_4a00b9ea(char *source,char *destination);
char *FUN_4a00ba22(char *source,char *destination,int32_t keep_extension);
uint32_t FUN_4a00ba7c(char *source);
char *FUN_4a00ba94(char *destination,char *source,int32_t capacity);
char *FUN_4a00bb00(char *path,int32_t preserve_case);
char *FUN_4a00d6a8(char *source,char *destination);
#endif

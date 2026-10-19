/* Reviewed recovery of the game's connected binary stream serializer.
 * Original addresses name recovered functions; sr_* functions are browser
 * integration helpers. Default global state is relocated, not ARM-emulated.
 */
#include <stdint.h>
#include <stddef.h>
#include "../../core/src/core.h"

__attribute__((import_module("s3e"), import_name("read")))
extern uint32_t sr_read(void *,uint32_t,uint32_t,uint32_t);
__attribute__((import_module("s3e"), import_name("write")))
extern uint32_t sr_write(const void *,uint32_t,uint32_t,uint32_t);
__attribute__((import_module("bridge"), import_name("progress")))
extern void sr_progress(uint32_t,uint32_t,uint32_t);

_Alignas(16) static uint8_t state[204];
static uint32_t results[2];
static uint32_t get32(uint32_t offset) { return *(volatile uint32_t *)(state+offset); }
static void put32(uint32_t offset,uint32_t value) { *(volatile uint32_t *)(state+offset)=value; }
static uint32_t handle(void) { return get32(8); }
static int reading(void) { return *(volatile uint8_t *)state!=0; }
uint32_t serial_state_ptr(void) { return (uint32_t)(uintptr_t)state; }
uint32_t serial_result_ptr(void) { return (uint32_t)(uintptr_t)results; }
uint32_t serial_heap_base(void) { extern char __heap_base;return (uint32_t)(uintptr_t)&__heap_base; }

uint64_t FUN_4a0066d8(uint32_t numerator,uint32_t divisor) {
  if(!divisor)__builtin_trap(); /* Original divide-by-zero exception is unported. */
  return ((uint64_t)(numerator%divisor)<<32)|(numerator/divisor);
}

void FUN_4a0515e4(uint32_t amount) {
  uint32_t callback=get32(0xc8);
  if(callback) {
    uint32_t period=get32(0xb0);
    uint32_t remainder=(uint32_t)(FUN_4a0066d8(get32(0xac),period)>>32);
    uint32_t combined=remainder+amount;
    if(combined>=period)sr_progress(callback,combined,remainder);
  }
  /* The callback may mutate state; the original reloads the counter afterward. */
  put32(0xac,get32(0xac)+amount);
}

void FUN_4a056f30(uint8_t *destination,uint32_t width,uint32_t count,uint32_t stride,uint8_t *context) {
  if(width==stride)sr_read(destination,width,count,*(uint32_t *)(context+8));
  else for(uint32_t i=0;i<count;i++)sr_read(destination+stride*i,width,1,*(uint32_t *)(context+8));
  FUN_4a0515e4(width*count);
}
void FUN_4a056f94(uint8_t *source,uint32_t width,uint32_t count,uint32_t stride,uint8_t *context) {
  if(width==stride)sr_write(source,width,count,*(uint32_t *)(context+8));
  else for(uint32_t i=0;i<count;i++)sr_write(source+stride*i,width,1,*(uint32_t *)(context+8));
  FUN_4a0515e4(width*count);
}

static void transfer(uint8_t *data,uint32_t width,uint32_t count,uint32_t stride,int fast) {
  if(fast) {
    if(reading())sr_read(data,width,count,handle());
    else sr_write(data,width,count,handle());
    FUN_4a0515e4(width*count);
  } else if(reading())FUN_4a056f30(data,width,count,stride,state);
  else FUN_4a056f94(data,width,count,stride,state);
}

void FUN_4a0365d4(uint8_t *data,uint32_t count,uint32_t unused,uint32_t stride) {
  (void)unused;
  while(count--) {
    uint8_t value;
    if(!reading()) { value=*data!=0;sr_write(&value,1,1,handle()); }
    else { sr_read(&value,1,1,handle());*data=value!=0;FUN_4a0515e4(1); }
    data+=stride;
  }
}
void FUN_4a036638(uint8_t *data,uint32_t count,int32_t bits,uint32_t stride) {
  int fast=bits==8&&stride==1&&!get32(0xbc);
  transfer(data,fast?1:(uint32_t)((bits+8)/8),count,stride,fast);
}
void FUN_4a03669c(uint8_t *data,uint32_t count,int32_t bits,uint32_t stride) {
  transfer(data,1,count,stride,bits==7&&stride==1&&!get32(0xbc));
}
void FUN_4a039b90(uint8_t *data,uint32_t count,int32_t bits,uint32_t stride) {
  transfer(data,1,count,stride,bits==8&&stride==1&&!get32(0xbc));
}
void FUN_4a03c0b8(uint8_t *data,uint32_t count,int32_t bits,uint32_t stride) {
  int fast=bits==16&&stride==2&&!get32(0xbc);
  uint32_t width=bits+7<24?(uint32_t)((bits+7)/8):2;
  transfer(data,fast?2:width,count,stride,fast);
}
void FUN_4a03c12c(uint8_t *data,uint32_t count,int32_t bits,uint32_t stride) {
  int fast=bits==32&&stride==4&&!get32(0xbc);
  uint32_t width=bits+7<40?(uint32_t)((bits+7)/8):4;
  transfer(data,fast?4:width,count,stride,fast);
}
void FUN_4a0399e0(uint8_t *data,uint32_t count,int32_t bits,uint32_t stride) {
  int fast=bits==32&&stride==4&&!get32(0xbc);
  transfer(data,fast?4:(uint32_t)((bits+8)/8),count,stride,fast);
}
void FUN_4a039a4c(uint8_t *data,uint32_t count,int32_t bits,uint32_t stride) {
  int fast=bits==15&&stride==2&&!get32(0xbc),was_reading=reading();
  uint32_t width=bits+8<24?(uint32_t)((bits+8)/8):2;
  transfer(data,fast?2:width,count,stride,fast);
  if(!fast&&was_reading&&bits<15) {
    uint32_t shift=15-(uint32_t)bits;
    while(count--) {
      uint32_t value=data[0]|((uint32_t)data[1]<<8);
      int32_t signed_value=(int32_t)((value<<shift)<<16);
      value=(uint32_t)((signed_value>>shift)>>16);
      data[0]=(uint8_t)value;data[1]=(uint8_t)(value>>8);
      data+=stride&~1u;
    }
  }
}
void FUN_4a039aec(uint8_t *data,uint32_t count,int32_t bits,uint32_t stride) {
  int fast=bits==31&&stride==4&&!get32(0xbc),was_reading=reading();
  uint32_t width=bits+8<40?(uint32_t)((bits+8)/8):4;
  transfer(data,fast?4:width,count,stride,fast);
  if(!fast&&was_reading&&bits<31) {
    uint32_t shift=31-(uint32_t)bits;
    while(count--) {
      uint32_t value=data[0]|((uint32_t)data[1]<<8)|((uint32_t)data[2]<<16)|((uint32_t)data[3]<<24);
      value=(uint32_t)((int32_t)(value<<shift)>>shift);
      data[0]=(uint8_t)value;data[1]=(uint8_t)(value>>8);data[2]=(uint8_t)(value>>16);data[3]=(uint8_t)(value>>24);
      data+=stride&~3u;
    }
  }
}

void FUN_4a03c064(uint8_t *text,uint32_t unused1,uint32_t unused2,uint32_t initial) {
  (void)unused1;(void)unused2;
  uint8_t value=(uint8_t)initial;
  if(reading()) {
    uint32_t i=1;
    do {
      FUN_4a03669c(&value,1,7,1);*text++=value;
      if(!value)return;
      ++i;
    }while(i);
  } else FUN_4a03669c(text,(uint32_t)FUN_4a0013e0((uint *)text)+1,7,1);
}

uint32_t FUN_4a04e90c(void) {
  uint32_t word=0x0606033d;
  FUN_4a039b90((uint8_t *)&word,4,8,1);
  uint32_t version=((word>>8)&255)<<16|((word>>16)&255)<<8|(word>>24);
  put32(0xc0,version);
  if(version>=0x30102)FUN_4a03c0b8(state+0xc4,1,16,2);
  return 1;
}

/* Word gateway: five-argument original helpers retain their stack argument. */
uint32_t serial_invoke(uint32_t id,uint32_t a,uint32_t b,uint32_t c,uint32_t d,uint32_t e) {
  results[0]=results[1]=0;
  uint8_t *p=(uint8_t *)(uintptr_t)a;
  switch(id) {
    case 1:{uint64_t r=FUN_4a0066d8(a,b);results[0]=(uint32_t)r;results[1]=(uint32_t)(r>>32);return 3;}
    case 2:FUN_4a0515e4(a);break;
    case 3:FUN_4a056f30(p,b,c,d,(uint8_t *)(uintptr_t)e);break;
    case 4:FUN_4a056f94(p,b,c,d,(uint8_t *)(uintptr_t)e);break;
    case 5:FUN_4a0365d4(p,b,c,d);break;
    case 6:FUN_4a036638(p,b,(int32_t)c,d);break;
    case 7:FUN_4a03669c(p,b,(int32_t)c,d);break;
    case 8:FUN_4a039b90(p,b,(int32_t)c,d);break;
    case 9:FUN_4a03c0b8(p,b,(int32_t)c,d);break;
    case 10:FUN_4a03c12c(p,b,(int32_t)c,d);break;
    case 11:FUN_4a0399e0(p,b,(int32_t)c,d);break;
    case 12:FUN_4a039a4c(p,b,(int32_t)c,d);break;
    case 13:FUN_4a039aec(p,b,(int32_t)c,d);break;
    case 14:results[0]=FUN_4a04e90c();return 1;
    case 15:FUN_4a03c064(p,b,c,d);break;
  }
  return 0;
}

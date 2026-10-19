/* Reviewed original resource chunk control flow. The linked pathname and
 * serializer code share this module's memory. Original callback tokens are
 * mapped only to recovered native bodies; there is no CPU interpreter. */
#include <stdint.h>
#include <stddef.h>

extern uint32_t serial_state_ptr(void);
extern void FUN_4a03c12c(uint8_t *,uint32_t,int32_t,uint32_t);
extern uint32_t FUN_4a04e90c(void);
__attribute__((import_module("s3e"),import_name("write")))
extern uint32_t resource_write(const void *,uint32_t,uint32_t,uint32_t);
__attribute__((import_module("s3e"),import_name("tell")))
extern uint32_t resource_tell(uint32_t);
__attribute__((import_module("s3e"),import_name("seek")))
extern uint32_t resource_seek(uint32_t,int32_t,uint32_t);
__attribute__((import_module("s3e"),import_name("close")))
extern uint32_t resource_close(uint32_t);

/* Explicit relocations of original BSS objects, not a general game heap. */
_Alignas(16) static uint32_t registry[4]; /* original 4a19fa98 */
static uint32_t open_count;             /* original 4a192814 */
static uint32_t result_word;
static uint8_t *context(void) { return (uint8_t *)(uintptr_t)serial_state_ptr(); }
static uint32_t handle(void) { return *(volatile uint32_t *)(context()+8); }
static int reading(void) { return *(volatile uint8_t *)context()!=0; }

uint32_t resource_registry_ptr(void) { return (uint32_t)(uintptr_t)registry; }
uint32_t resource_open_count_ptr(void) { return (uint32_t)(uintptr_t)&open_count; }
uint32_t resource_result_ptr(void) { return (uint32_t)(uintptr_t)&result_word; }

/* Installation is browser integration. Original registration/growth is not
 * recovered here; the owner supplies a stable array of (hash, token) pairs. */
void resource_install_registry(uint32_t address,uint32_t count) {
  registry[0]=address;registry[1]=count;
}

uint32_t FUN_4a02b1e8(const uint8_t *text) {
  uint32_t value=0x1505;
  for(uint32_t ch;(ch=*text++)!=0;) {
    if(ch-0x41<0x1a)ch+=0x20;
    value=value*33+ch;
  }
  return value;
}

uint32_t FUN_4a04d7bc(void);
void FUN_4a0399a0(void);
void FUN_4a03989e(void);
void FUN_4a046724(void);

static void native_callback(uint32_t token) {
  /* Every accepted address is an actual recovered no-argument Thumb entry.
   * Do not silently accept arbitrary original function pointers. */
  switch(token) {
    case 0x4a04e90d:(void)FUN_4a04e90c();return;
    case 0x4a04d7bd:(void)FUN_4a04d7bc();return;
    case 0x4a0399a1:FUN_4a0399a0();return;
    case 0x4a03989f:FUN_4a03989e();return;
    case 0x4a046725:FUN_4a046724();return;
    default:__builtin_trap();
  }
}

void FUN_4a04d928(uint32_t type) {
  uint32_t *entry=(uint32_t *)(uintptr_t)registry[0];
  uint32_t *end=(uint32_t *)((uintptr_t)entry+registry[1]*8);
  int initial_reading=reading();
  for(;entry!=end;entry+=2) {
    if(entry[0]!=type)continue;
    uint32_t start=0,length;
    if(!initial_reading) {
      FUN_4a03c12c((uint8_t *)&type,1,32,4);
      start=resource_tell(handle());
      length=0xcdcdcdcd;
    }
    /* In read mode the original local is not initialized before this call.
     * The recovered domain requires a complete four-byte length read. */
    FUN_4a03c12c((uint8_t *)&length,1,32,4);
    native_callback(entry[1]);
    if(reading())return;
    uint32_t finish=resource_tell(handle());
    resource_seek(handle(),(int32_t)start,0);
    length=finish-start;
    FUN_4a03c12c((uint8_t *)&length,1,32,4);
    resource_seek(handle(),(int32_t)finish,0);
    return;
  }
  if(initial_reading) {
    uint32_t start=resource_tell(handle()),length;
    FUN_4a03c12c((uint8_t *)&length,1,32,4);
    /* Length includes its own four-byte word. This addition wraps at 32 bits. */
    resource_seek(handle(),(int32_t)(start+length),0);
  }
}

uint32_t FUN_4a04d7bc(void) {
  uint32_t type=0;
  FUN_4a03c12c((uint8_t *)&type,1,32,4);
  if(type)FUN_4a04d928(type);
  return type;
}

void FUN_4a0399a0(void) {
  if(!reading()&&*(volatile uint32_t *)(context()+0xbc))
    resource_write(context()+0xb4,1,1,handle());
  resource_close(handle());
  --open_count;
}
void FUN_4a03989e(void) { FUN_4a0399a0(); }
void FUN_4a046724(void) {
  if(FUN_4a04e90c()) {
    while(FUN_4a04d7bc()){}
    FUN_4a0399a0();
  }
}

uint32_t resource_invoke(uint32_t id,uint32_t a) {
  result_word=0;
  switch(id) {
    case 1:result_word=FUN_4a02b1e8((const uint8_t *)(uintptr_t)a);return 1;
    case 2:FUN_4a04d928(a);return 0;
    case 3:result_word=FUN_4a04d7bc();return 1;
    case 4:FUN_4a0399a0();return 0;
    case 5:FUN_4a03989e();return 0;
    case 6:FUN_4a046724();return 0;
    default:__builtin_trap();
  }
}

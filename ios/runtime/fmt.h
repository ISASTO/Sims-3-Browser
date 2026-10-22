#pragma once
#include "rt.h"
/* Sequential argument reader: either guest call arguments starting at word index idx, or a guest va_list. */
typedef struct { CPU *c; int idx; gptr va; } ArgReader;
uint32_t ar_word(ArgReader *a);
char *gformat(CPU *c, const char *fmt, ArgReader *a);

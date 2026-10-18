/* Recovered scalar leaf functions. This is NOT a game executable.
 * Function bodies below come from the pinned native Ghidra export.
 * No replacements are provided for functions that fail validation.
 * See manifest.json and verification.json for provenance and test limits. */
typedef unsigned int uint;
typedef unsigned int undefined4;
typedef unsigned char byte;
typedef unsigned short ushort;
typedef _Bool bool;
#define true 1
#define false 0
#define CARRY4(a,b) (((unsigned long long)(uint)(a) + (uint)(b)) > 0xffffffffull)
#define SCARRY4(a,b) (((long long)(int)(a) + (int)(b)) > 2147483647ll || ((long long)(int)(a) + (int)(b)) < -2147483648ll)
#define SBORROW4(a,b) (((long long)(int)(a) - (int)(b)) > 2147483647ll || ((long long)(int)(a) - (int)(b)) < -2147483648ll)

// Address: 4a005250
uint FUN_4a005250(uint param_1,uint param_2)

{
  uint uVar1;
  
  if (param_1 < 0x3a) {
    param_1 = param_1 - 0x30;
  }
  if (0x40 < (param_1 & 0xffffffdf)) {
    param_1 = (param_1 & 0xffffffdf) - 0x37;
  }
  uVar1 = 0xffffffff;
  if (param_1 < param_2) {
    uVar1 = param_1;
  }
  return uVar1;
}

// Address: 4a005c34
undefined4 FUN_4a005c34(undefined4 param_1)

{
  return param_1;
}

// Address: 4a02afd8
int FUN_4a02afd8(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = 0;
  uVar2 = 0;
  iVar3 = 0x200000;
  uVar4 = 0x40000000;
  do {
    uVar5 = uVar4 + uVar2;
    if (uVar5 == 0) {
      return iVar1;
    }
    uVar2 = uVar2 >> 1;
    if (uVar5 <= param_1) {
      param_1 = param_1 - uVar5;
      iVar1 = iVar1 + iVar3;
      uVar2 = uVar2 | uVar4;
    }
    uVar4 = (int)uVar4 >> 2;
    iVar3 = iVar3 >> 1;
  } while (iVar3 != 0);
  return iVar1;
}

// Address: 4a030118
int FUN_4a030118(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = 0;
  uVar2 = 0;
  uVar3 = 0x40000000;
  uVar4 = 0x8000000;
  do {
    uVar5 = uVar3 + uVar2;
    if (uVar5 == 0) {
      return iVar1;
    }
    uVar2 = uVar2 >> 1;
    if (uVar5 <= param_1) {
      param_1 = param_1 - uVar5;
      iVar1 = iVar1 + uVar4;
      uVar2 = uVar2 | uVar3;
    }
    uVar3 = uVar3 >> 2;
    uVar4 = uVar4 >> 1;
  } while (uVar4 != 0);
  return iVar1;
}

// Address: 4a033804
int FUN_4a033804(int param_1)

{
  if (param_1 == 0x16) {
    return 1;
  }
  if (param_1 < 0x17) {
    if (param_1 == 3) {
      return 4;
    }
    if (param_1 != 6) {
      if (param_1 != 8) {
        return 0;
      }
      param_1 = 3;
    }
    return param_1;
  }
  if (param_1 == 0x1c) {
    return 2;
  }
  if (param_1 != 0x24) {
    if (param_1 != 0x28) {
      return 0;
    }
    return 7;
  }
  return 5;
}

// Address: 4a038ee4
uint FUN_4a038ee4(uint param_1)

{
  uint uVar1;
  
  if ((param_1 & 1) != 0) {
    if (param_1 == 1) {
      uVar1 = 3;
    }
    else {
      uVar1 = 1;
    }
    return uVar1;
  }
  return param_1;
}

// Address: 4a03d39c
undefined4 FUN_4a03d39c(int param_1,int param_2)

{
  if (param_1 == 0x20) {
    if ((param_2 != 0) &&
       ((((((param_2 == 0x21 || (param_2 == 0x3f)) || (param_2 == 0x3a)) ||
          ((param_2 == 0x3b || (param_2 == 0x2e)))) ||
         ((param_2 == 0x25 || ((param_2 == 0x24 || (param_2 == 0x2d)))))) || (param_2 == 0x2c)))) {
      return 0;
    }
  }
  else if ((param_1 != 10) && (param_1 != 0x3000)) {
    return 0;
  }
  return 1;
}

// Address: 4a05a600
undefined4 FUN_4a05a600(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((0x20 < param_1) && (param_1 != 0x3000)) {
    uVar1 = 1;
  }
  return uVar1;
}

// Address: 4a08d5b4
undefined4 FUN_4a08d5b4(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((((param_2 != 0x20) && (param_2 != 9)) && (param_2 != 10)) &&
     ((param_2 != 0xd && (param_2 != 0)))) {
    uVar1 = 0;
  }
  return uVar1;
}

// Address: 4a08d5ce
undefined4 FUN_4a08d5ce(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((((param_2 != 0x20) && (param_2 != 9)) && (param_2 != 10)) && (param_2 != 0xd)) {
    uVar1 = 0;
  }
  return uVar1;
}

// Address: 4a099bc0
undefined4 FUN_4a099bc0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
  case 0xb:
    return 4;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 8:
  case 0xc:
    return 5;
  case 7:
    return 3;
  default:
    return 0;
  case 10:
    return 2;
  }
}

// Address: 4a0d4b74
int FUN_4a0d4b74(int param_1,int param_2,int param_3)

{
  if (param_3 < param_1) {
    param_1 = param_3;
  }
  if (param_1 < param_2) {
    param_1 = param_2;
  }
  return param_1;
}

// Address: 4a0d4bb8
int FUN_4a0d4bb8(int param_1)

{
  if (param_1 < 1) {
    param_1 = param_1 >> 0x1f;
  }
  else {
    param_1 = 1;
  }
  return param_1;
}

// Address: 4a0de09c
undefined4 FUN_4a0de09c(undefined4 param_1)

{
  switch(param_1) {
  case 2:
    return 3;
  default:
    return 0xffffffff;
  case 5:
    return 6;
  case 7:
    return 8;
  case 9:
    return 10;
  case 0xb:
    return 0xc;
  }
}

// Address: 4a0de104
undefined4 FUN_4a0de104(int param_1)

{
  if (param_1 == 8) {
    return 7;
  }
  if (param_1 < 9) {
    if (param_1 == 3) {
      return 2;
    }
    if (param_1 == 6) {
      return 5;
    }
  }
  else {
    if (param_1 == 10) {
      return 9;
    }
    if (param_1 == 0xc) {
      return 0xb;
    }
  }
  return 0xffffffff;
}

// Address: 4a0e7234
undefined4 FUN_4a0e7234(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((((3 < param_1 - 0x20U) && (param_1 != 0x27)) && (param_1 != 0x34)) &&
     ((param_1 != 0x2b && (param_1 != 0x35)))) {
    uVar1 = 0;
  }
  return uVar1;
}

// Address: 4a105ec0
int FUN_4a105ec0(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = -param_1;
  if ((int)-param_1 < (int)param_1) {
    uVar2 = param_1;
  }
  iVar1 = -param_2;
  if (-param_2 < param_2) {
    iVar1 = param_2;
  }
  if ((int)uVar2 <= iVar1) {
    if (param_2 < 0) {
      iVar1 = 3;
    }
    else {
      iVar1 = 1;
    }
    return iVar1;
  }
  return (param_1 >> 0x1f) << 1;
}

// Address: 4a106fe0
undefined4 FUN_4a106fe0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 0x5a0000;
  default:
    return 0;
  case 2:
    return 0xffa60000;
  case 3:
    return 0xb40000;
  case 4:
    return 0x2d0000;
  case 5:
    return 0xffd30000;
  case 6:
    return 0xff790000;
  case 7:
    return 0x870000;
  }
}

// Address: 4a107de8
int FUN_4a107de8(int param_1,int param_2,int param_3)

{
  if (param_3 == 0) {
    return param_1;
  }
  if (param_3 != 1) {
    if (param_3 != 2) {
      if (param_3 != 3) {
        param_2 = 0;
      }
      return param_2;
    }
    return -param_1;
  }
  return -param_2;
}

// Address: 4a107e20
int FUN_4a107e20(int param_1,int param_2,int param_3)

{
  if (param_3 == 0) {
    return param_2;
  }
  if (param_3 != 1) {
    if (param_3 != 2) {
      if (param_3 == 3) {
        param_1 = -param_1;
      }
      else {
        param_1 = 0;
      }
      return param_1;
    }
    return -param_2;
  }
  return param_1;
}

// Address: 4a1415a0
undefined4 FUN_4a1415a0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  switch(param_3) {
  default:
    return 0xffffffff;
  case 1:
    if (param_2 == 0) {
      uVar1 = 8;
    }
    else {
      uVar1 = 1;
    }
    return uVar1;
  case 2:
    if (param_2 == 0) {
      uVar1 = 9;
    }
    else {
      uVar1 = 2;
    }
    return uVar1;
  case 4:
    return 0;
  case 5:
    if (param_2 == 0) {
      uVar1 = 0xc;
    }
    else {
      uVar1 = 5;
    }
    break;
  case 7:
    if (param_2 == 0) {
      uVar1 = 0xd;
    }
    else {
      uVar1 = 6;
    }
    return uVar1;
  case 9:
    if (param_2 == 0) {
      uVar1 = 0xe;
    }
    else {
      uVar1 = 7;
    }
    return uVar1;
  case 0xb:
    if (param_2 == 0) {
      uVar1 = 10;
    }
    else {
      uVar1 = 3;
    }
    return uVar1;
  case 0xe:
    if (param_2 == 0) {
      uVar1 = 0xb;
    }
    else {
      uVar1 = 4;
    }
    return uVar1;
  }
  return uVar1;
}

// Address: 4a171fac
uint FUN_4a171fac(uint param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = param_1 & 0x80000000;
  if (uVar2 != 0) {
    param_1 = -param_1;
  }
  uVar2 = uVar2 | 0x40000000;
  bVar3 = param_1 >> 0x10 == 0;
  if (bVar3) {
    param_1 = param_1 << 0x10;
    bVar3 = param_1 == 0;
  }
  else {
    uVar2 = uVar2 + 0x8000000;
  }
  if (!bVar3) {
    if ((param_1 & 0xff000000) == 0) {
      param_1 = param_1 << 8;
    }
    else {
      uVar2 = uVar2 + 0x4000000;
    }
    if ((param_1 & 0xf0000000) == 0) {
      param_1 = param_1 << 4;
    }
    else {
      uVar2 = uVar2 + 0x2000000;
    }
    if ((param_1 & 0xc0000000) == 0) {
      param_1 = param_1 << 2;
      uVar1 = param_1;
    }
    else {
      uVar2 = uVar2 + 0x1000000;
      uVar1 = param_1 & 0xc0000000;
    }
    if ((int)uVar1 < 0) {
      uVar2 = uVar2 + 0x800000;
    }
    else {
      param_1 = param_1 << 1;
    }
    bVar3 = (bool)((byte)(param_1 >> 7) & 1);
    uVar2 = uVar2 + ((int)param_1 >> 8) + (uint)bVar3;
    if ((param_1 & 0x7f) != 0) {
      bVar3 = false;
    }
    if (bVar3) {
      uVar2 = uVar2 & 0xfffffffe;
    }
    return uVar2;
  }
  return param_1;
}

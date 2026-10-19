/* Generated from pinned Ghidra bodies. Return corrections are recorded in contracts.json. */

#include "core.h"

static const uint DAT_4a001308 = 0x01010101u;

static const uint DAT_4a001360 = 0x01010101u;

static const uint DAT_4a0013d4 = 0x01010101u;

static const uint DAT_4a001424 = 0x01010101u;

static const uint DAT_4a0014e4 = 0x01010101u;

// Address: 4a000ed8
short * FUN_4a000ed8(short *param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = param_1;
  do {
    sVar1 = *param_2;
    param_2 = param_2 + 1;
    *psVar2 = sVar1;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  return param_1;
}


// Address: 4a000ef4
int FUN_4a000ef4(ushort *param_1,ushort *param_2)

{
  for (; (*param_1 != 0 && (*param_1 == *param_2)); param_1 = param_1 + 1) {
    param_2 = param_2 + 1;
  }
  return (uint)*param_1 - (uint)*param_2;
}


// Address: 4a000f18
int FUN_4a000f18(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  
  do {
    iVar3 = 0;
    while( true ) {
      sVar2 = *(short *)(param_2 + iVar3 * 2);
      if (sVar2 == 0) {
        return param_1;
      }
      sVar1 = *(short *)(param_1 + iVar3 * 2);
      if (sVar1 == 0) {
        return 0;
      }
      if (sVar1 != sVar2) break;
      iVar3 = iVar3 + 1;
    }
    if (*(short *)(param_2 + iVar3 * 2) == 0) {
      return param_1;
    }
    param_1 = param_1 + 2;
  } while( true );
}


// Address: 4a000f50
int FUN_4a000f50(short *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; *param_1 != 0; param_1 = param_1 + 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


// Address: 4a0012bc
uint * FUN_4a0012bc(uint *param_1,uint *param_2)

{
  uint * original_destination = param_1;
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  
  iVar2 = DAT_4a001308;
  if ((((uint)param_1 | (uint)param_2) & 3) == 0) {
    uVar5 = DAT_4a001308 << 7;
    while( true ) {
      uVar3 = *param_2;
      param_2 = param_2 + 1;
      if ((uVar3 - iVar2 & ~uVar3 & uVar5) != 0) break;
      *param_1 = uVar3;
      param_1 = param_1 + 1;
    }
    while( true ) {
      *(char *)param_1 = (char)uVar3;
      param_1 = (uint *)((int)param_1 + 1);
      if ((uVar3 & 0xff) == 0) break;
      uVar3 = uVar3 >> 8;
    }
  }
  else {
    do {
      uVar5 = *param_2;
      pcVar4 = (char *)((int)param_1 + 1);
      *(char *)param_1 = (char)uVar5;
      if ((char)uVar5 == '\0') {
        return original_destination;
      }
      cVar1 = *(char *)((int)param_2 + 1);
      param_2 = (uint *)((int)param_2 + 2);
      param_1 = (uint *)((int)param_1 + 2);
      *pcVar4 = cVar1;
    } while (cVar1 != '\0');
  }
  return original_destination;
}


// Address: 4a001314
int FUN_4a001314(uint *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((((uint)param_1 | (uint)param_2) & 3) == 0) {
    while (((3 < param_3 && (uVar2 = *param_1, uVar2 == *param_2)) &&
           ((uVar2 - DAT_4a001360 & ~uVar2 & DAT_4a001360 << 7) == 0))) {
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 - 4;
    }
  }
  if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    do {
      uVar3 = (uint)(byte)*param_1;
      uVar2 = *param_2;
      param_1 = (uint *)((int)param_1 + 1);
      param_2 = (uint *)((int)param_2 + 1);
      if ((uVar3 == 0) || (uVar3 != (byte)uVar2)) break;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    iVar1 = uVar3 - (byte)uVar2;
  }
  return iVar1;
}


// Address: 4a001368
uint * FUN_4a001368(uint *param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = DAT_4a0013d4;
  puVar1 = param_1;
  if (((uint)param_1 & 3) == 0 && ((uint)param_2 & 3) == 0) {
    while (3 < param_3) {
      uVar4 = *param_2;
      if ((uVar4 - iVar3 & ~uVar4 & iVar3 << 7) != 0) break;
      *puVar1 = uVar4;
      puVar1 = puVar1 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + -4;
    }
  }
  do {
    iVar3 = param_3 + -1;
    if (param_3 < 1) {
      return param_1;
    }
    uVar4 = *param_2;
    puVar2 = (uint *)((int)puVar1 + 1);
    *(char *)puVar1 = (char)uVar4;
    puVar1 = puVar2;
    param_2 = (uint *)((int)param_2 + 1);
    param_3 = iVar3;
  } while ((char)uVar4 != '\0');
  FUN_4a001274(puVar2,iVar3);
  return param_1;
}


// Address: 4a0013e0
int FUN_4a0013e0(uint *param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)((int)param_1 + 1);
  while (((uint)param_1 & 3) != 0) {
    uVar2 = *param_1;
    param_1 = (uint *)((int)param_1 + 1);
    if ((char)uVar2 == '\0') {
      return (int)param_1 - (int)pcVar3;
    }
  }
  do {
    uVar2 = *param_1;
    param_1 = param_1 + 1;
  } while ((uVar2 - DAT_4a001424 & ~uVar2 & DAT_4a001424 << 7) == 0);
  iVar1 = (int)param_1 - (int)pcVar3;
  if ((uVar2 & 0xff) == 0) {
    return iVar1 + -3;
  }
  if ((uVar2 & 0xffff) >> 8 == 0) {
    return iVar1 + -2;
  }
  if ((uVar2 & 0xffffff) >> 0x10 != 0) {
    return iVar1;
  }
  return iVar1 + -1;
}


// Address: 4a00142c
uint FUN_4a00142c(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  byte *pbVar3;
  uint *puVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  
  if (((uint)param_1 & 3) != 0 || ((uint)param_2 & 3) != 0) {
    do {
      pbVar3 = (byte *)((int)param_1 + 1);
      uVar6 = (uint)(byte)*param_1;
      pbVar5 = (byte *)((int)param_2 + 1);
      uVar7 = (uint)(byte)*param_2;
      bVar11 = uVar6 == 1;
      if (uVar6 != 0) {
        bVar11 = uVar6 == uVar7;
      }
      if (!bVar11) break;
      param_1 = (uint *)((int)param_1 + 2);
      uVar6 = (uint)*pbVar3;
      param_2 = (uint *)((int)param_2 + 2);
      uVar7 = (uint)*pbVar5;
      bVar11 = uVar6 == 1;
      if (uVar6 != 0) {
        bVar11 = uVar6 == uVar7;
      }
    } while (bVar11);
    return uVar6 - uVar7;
  }
  do {
    puVar1 = param_1 + 1;
    uVar6 = *param_1;
    puVar4 = param_2 + 1;
    uVar7 = *param_2;
    uVar8 = uVar6 - DAT_4a0014e4 & ~uVar6 & DAT_4a0014e4 << 7;
    if (uVar8 != 0 || uVar6 != uVar7) break;
    param_1 = param_1 + 2;
    uVar6 = *puVar1;
    param_2 = param_2 + 2;
    uVar7 = *puVar4;
    uVar8 = uVar6 - DAT_4a0014e4 & ~uVar6 & DAT_4a0014e4 << 7;
  } while (uVar8 == 0 && uVar6 == uVar7);
  uVar2 = uVar7 * 0x1000000 + uVar6 * -0x1000000;
  bVar9 = uVar2 == 0;
  bVar12 = !bVar9 && uVar6 * 0x1000000 <= uVar7 * 0x1000000;
  bVar10 = (uVar8 & 0xff0) == 0;
  bVar11 = bVar9 && bVar10;
  if (bVar9 && bVar10) {
    uVar2 = uVar7 * 0x10000 + uVar6 * -0x10000;
    bVar9 = uVar2 == 0;
    bVar12 = !bVar9 && uVar6 * 0x10000 <= uVar7 * 0x10000;
    bVar10 = (uVar8 & 0xff00) == 0;
    bVar11 = bVar9 && bVar10;
    if (bVar9 && bVar10) {
      uVar2 = uVar7 * 0x100 + uVar6 * -0x100;
      bVar9 = uVar2 == 0;
      bVar12 = !bVar9 && uVar6 * 0x100 <= uVar7 * 0x100;
      bVar10 = (uVar8 & 0xff0000) == 0;
      bVar11 = bVar9 && bVar10;
      if (bVar9 && bVar10) {
        bVar12 = uVar6 <= uVar7;
        uVar2 = uVar7 - uVar6;
        bVar11 = uVar2 == 0;
      }
    }
  }
  if (!bVar11) {
    uVar2 = (uint)bVar12 << 0x1f | uVar2 >> 1;
  }
  return uVar2;
}


// Address: 4a00150c
char * FUN_4a00150c(char *param_1,char param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  if (param_3 != 0) {
    pcVar1 = param_1;
    do {
      pcVar2 = pcVar1;
      if (pcVar2 + 1 == param_1 + param_3) break;
      pcVar1 = pcVar2 + 1;
    } while (param_2 != *pcVar2);
    if (param_2 == *pcVar2) {
      return pcVar2;
    }
  }
  return (char *)0x0;
}


// Address: 4a001538
char * FUN_4a001538(char *param_1,char *param_2)

{
  char * original_destination = param_1;
  char cVar1;
  
  for (; *param_1 != '\0'; param_1 = param_1 + 1) {
  }
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *param_1 = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return original_destination;
}


// Address: 4a001552
char * FUN_4a001552(int param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_1 + -1);
  do {
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
    if (param_2 == cVar1) break;
  } while (cVar1 != '\0');
  if (param_2 != cVar1) {
    pcVar2 = (char *)0x0;
  }
  return pcVar2;
}


// Address: 4a00156c
char * FUN_4a00156c(char *param_1,char *param_2,int param_3)

{
  char * original_destination = param_1;
  char cVar1;
  
  for (; *param_1 != '\0'; param_1 = param_1 + 1) {
  }
  while( true ) {
    if (param_3 == 0) {
      *param_1 = '\0';
      return original_destination;
    }
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *param_1 = cVar1;
    param_1 = param_1 + 1;
    if (cVar1 == '\0') break;
    param_3 = param_3 + -1;
  }
  return original_destination;
}


// Address: 4a0015a0
char * FUN_4a0015a0(char *param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)0x0;
  do {
    cVar1 = *param_1;
    if (cVar1 == param_2) {
      pcVar2 = param_1;
    }
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return pcVar2;
}


// Address: 4a0015c0
char * FUN_4a0015c0(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = param_2;
  pcVar4 = param_1;
LAB_4a0015c8:
  cVar1 = *param_1;
  cVar2 = *pcVar3;
  param_1 = param_1 + 1;
  if (cVar1 != '\0') goto code_r0x4a0015d4;
  goto LAB_4a0015d8;
code_r0x4a0015d4:
  pcVar3 = pcVar3 + 1;
  if (cVar1 != cVar2) {
LAB_4a0015d8:
    pcVar3 = pcVar4;
    if ((cVar2 == '\0') || (pcVar3 = (char *)0x0, cVar1 == '\0')) {
      return pcVar3;
    }
    param_1 = pcVar4 + 1;
    pcVar3 = param_2;
    pcVar4 = param_1;
  }
  goto LAB_4a0015c8;
}


// Address: 4a000e60
int FUN_4a000e60(byte *param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  if ((3 < param_3) && ((((uint)param_1 | (uint)param_2) & 3) == 0)) {
    do {
      pbVar3 = param_2;
      pbVar1 = param_1;
      param_1 = pbVar1 + 4;
      param_2 = pbVar3 + 4;
      if (*(int *)pbVar1 != *(int *)pbVar3) break;
      param_3 = param_3 - 4;
    } while (3 < param_3);
    if (*(int *)pbVar1 != *(int *)pbVar3) {
      param_1 = pbVar1;
      param_2 = pbVar3;
    }
  }
  if (param_3 == 0) {
    iVar2 = 0;
  }
  else {
    if ((param_3 & 1) == 0) goto LAB_4a000e96;
    param_3 = param_3 + 1;
    do {
      uVar4 = (uint)*param_1;
      uVar5 = (uint)*param_2;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if ((uVar4 != uVar5) || (param_3 = param_3 - 2, param_3 == 0)) break;
LAB_4a000e96:
      uVar4 = (uint)*param_1;
      uVar5 = (uint)*param_2;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (uVar4 == uVar5);
    iVar2 = uVar4 - uVar5;
  }
  return iVar2;
}


/* AUTOMATED DECOMPILER OUTPUT. Not original source, not a buildable game.
 * Function boundaries, types, indirect calls, and data still require validation. */

// Address: 4a0007cc

void FUN_4a0007cc(void)

{
  FUN_4a15cf8c();
  return;
}



// Address: 4a0007f8

undefined * FUN_4a0007f8(void)

{
  return PTR_DAT_4a000804;
}



// Address: 4a00080c

int FUN_4a00080c(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  uVar2 = param_2 >> 1;
  uVar1 = param_4 >> 1;
  if ((int)uVar2 < 0) {
    bVar4 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(param_2 + (uint)bVar4);
  }
  if ((int)param_4 < 0) {
    bVar4 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(param_4 + bVar4);
  }
  iVar3 = FUN_4a0008f8(param_1,param_2,param_3,param_4);
  if (((uVar2 ^ uVar1) & 0x40000000) != 0) {
    iVar3 = -iVar3;
  }
  return iVar3;
}



// Address: 4a000860

longlong FUN_4a000860(uint param_1,int param_2,uint param_3)

{
  if ((int)(param_3 - 0x20) < 0) {
    return CONCAT44(param_2 << (param_3 & 0xff) | param_1 >> (0x20 - param_3 & 0xff),
                    param_1 << (param_3 & 0xff));
  }
  return (ulonglong)(param_1 << (param_3 - 0x20 & 0xff)) << 0x20;
}



// Address: 4a000888

ulonglong FUN_4a000888(uint param_1,uint param_2,uint param_3)

{
  if ((int)(param_3 - 0x20) < 0) {
    return CONCAT44(param_2 >> (param_3 & 0xff),
                    param_1 >> (param_3 & 0xff) | param_2 << (0x20 - param_3 & 0xff));
  }
  return (ulonglong)(param_2 >> (param_3 - 0x20 & 0xff));
}



// Address: 4a0008b0

undefined8 FUN_4a0008b0(uint param_1,int param_2,uint param_3)

{
  if ((int)(param_3 - 0x20) < 0) {
    return CONCAT44(param_2 >> (param_3 & 0xff),
                    param_1 >> (param_3 & 0xff) | param_2 << (0x20 - param_3 & 0xff));
  }
  return CONCAT44(param_2 >> 0x1f,param_2 >> (param_3 - 0x20 & 0xff));
}



// Address: 4a0008dc

undefined8 FUN_4a0008dc(uint param_1,int param_2,uint param_3,int param_4)

{
  return CONCAT44(param_4 * param_1 +
                  param_3 * param_2 + (int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20),
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}



// Address: 4a0008f8

ulonglong FUN_4a0008f8(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  
  uVar9 = 0;
  if (param_4 != 0 || (int)param_3 < 0) {
    if ((param_4 & 0x80000000) != 0) {
      return (ulonglong)(param_4 < param_2 || param_2 - param_4 < (uint)(param_3 <= param_1));
    }
    if (param_4 >> 0xf == 0) {
      uVar9 = 0x10;
    }
    param_4 = param_4 << uVar9;
    if (param_4 >> 0x17 == 0) {
      param_4 = param_4 << 8;
      uVar9 = uVar9 + 8;
    }
    if (param_4 >> 0x1b == 0) {
      param_4 = param_4 << 4;
      uVar9 = uVar9 + 4;
    }
    if (param_4 >> 0x1d == 0) {
      param_4 = param_4 << 2;
      uVar9 = uVar9 + 2;
    }
    bVar10 = param_4 >> 0x1e == 0;
    if (bVar10) {
      uVar9 = uVar9 + 1;
    }
    if (bVar10) {
      param_4 = param_4 << 1;
    }
    param_4 = param_4 | param_3 >> (0x20 - uVar9 & 0xff);
    param_3 = param_3 << uVar9;
    bVar10 = param_2 - param_4 < (uint)(param_3 <= param_1);
    uVar8 = param_2;
    if (param_4 < param_2 || bVar10) {
      uVar8 = param_2 - (param_4 + (param_3 > param_1));
      param_1 = param_1 - param_3;
    }
    bVar11 = uVar8 - param_4 < (uint)(param_3 <= param_1);
    uVar2 = uVar8;
    if (param_4 < uVar8 || bVar11) {
      uVar2 = uVar8 - (param_4 + (param_3 > param_1));
      param_1 = param_1 - param_3;
    }
    bVar13 = uVar2 - param_4 < (uint)(param_3 <= param_1);
    uVar4 = uVar2;
    if (param_4 < uVar2 || bVar13) {
      uVar4 = uVar2 - (param_4 + (param_3 > param_1));
      param_1 = param_1 - param_3;
    }
    uVar5 = (uint)(param_4 < param_2 || bVar10) + (uint)(param_4 < uVar8 || bVar11) +
            (uint)(param_4 < uVar2 || bVar13);
    iVar7 = 0;
    uVar8 = -param_3;
    uVar2 = -(param_4 + (param_3 != 0));
    if ((0xf < uVar9) && (uVar4 >> 0xe == 0)) {
      uVar4 = uVar4 << 0x10;
      iVar7 = 0x10;
    }
    if ((7 < uVar9 - iVar7) && (uVar4 >> 0x16 == 0)) {
      uVar4 = uVar4 << 8;
      iVar7 = iVar7 + 8;
    }
    uVar4 = uVar4 | param_1 >> (0x20U - iVar7 & 0xff);
    param_1 = param_1 << iVar7;
    bVar10 = false;
    if (uVar9 - iVar7 != 0) {
      uVar6 = (uVar9 - iVar7) - 1;
      uVar1 = 3 - (uVar6 & 3);
      bVar10 = CARRY4(uVar1,uVar1 * 2);
      switch(uVar6 & 3) {
      case 0:
        while( true ) {
          uVar6 = uVar6 - 4;
          bVar11 = CARRY4(param_1,param_1) || CARRY4(param_1 * 2,(uint)bVar10);
          param_1 = param_1 * 2 + (uint)bVar10;
          bVar13 = CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)bVar11);
          uVar4 = uVar4 * 2 + (uint)bVar11;
          bVar12 = CARRY4(uVar8,param_1) || CARRY4(uVar8 + param_1,(uint)bVar13);
          bVar11 = CARRY4(uVar2 + uVar4,(uint)bVar12);
          bVar10 = CARRY4(uVar2,uVar4) || bVar11;
          if (CARRY4(uVar2,uVar4) || bVar11) {
            uVar4 = uVar2 + uVar4 + (uint)bVar12;
            param_1 = uVar8 + param_1 + (uint)bVar13;
          }
          if ((int)uVar6 < 0) break;
switchD_4a000b80_caseD_3:
          bVar11 = CARRY4(param_1,param_1) || CARRY4(param_1 * 2,(uint)bVar10);
          param_1 = param_1 * 2 + (uint)bVar10;
          bVar13 = CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)bVar11);
          uVar4 = uVar4 * 2 + (uint)bVar11;
          bVar12 = CARRY4(uVar8,param_1) || CARRY4(uVar8 + param_1,(uint)bVar13);
          bVar11 = CARRY4(uVar2 + uVar4,(uint)bVar12);
          bVar10 = CARRY4(uVar2,uVar4) || bVar11;
          if (CARRY4(uVar2,uVar4) || bVar11) {
            uVar4 = uVar2 + uVar4 + (uint)bVar12;
            param_1 = uVar8 + param_1 + (uint)bVar13;
          }
switchD_4a000b80_caseD_2:
          bVar11 = CARRY4(param_1,param_1) || CARRY4(param_1 * 2,(uint)bVar10);
          param_1 = param_1 * 2 + (uint)bVar10;
          bVar13 = CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)bVar11);
          uVar4 = uVar4 * 2 + (uint)bVar11;
          bVar12 = CARRY4(uVar8,param_1) || CARRY4(uVar8 + param_1,(uint)bVar13);
          bVar11 = CARRY4(uVar2 + uVar4,(uint)bVar12);
          bVar10 = CARRY4(uVar2,uVar4) || bVar11;
          if (CARRY4(uVar2,uVar4) || bVar11) {
            uVar4 = uVar2 + uVar4 + (uint)bVar12;
            param_1 = uVar8 + param_1 + (uint)bVar13;
          }
switchD_4a000b80_caseD_1:
          bVar11 = CARRY4(param_1,param_1) || CARRY4(param_1 * 2,(uint)bVar10);
          param_1 = param_1 * 2 + (uint)bVar10;
          bVar13 = CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)bVar11);
          uVar4 = uVar4 * 2 + (uint)bVar11;
          bVar12 = CARRY4(uVar8,param_1) || CARRY4(uVar8 + param_1,(uint)bVar13);
          bVar11 = CARRY4(uVar2 + uVar4,(uint)bVar12);
          bVar10 = CARRY4(uVar2,uVar4) || bVar11;
          if (CARRY4(uVar2,uVar4) || bVar11) {
            uVar4 = uVar2 + uVar4 + (uint)bVar12;
            param_1 = uVar8 + param_1 + (uint)bVar13;
          }
        }
        break;
      case 1:
        goto switchD_4a000b80_caseD_1;
      case 2:
        goto switchD_4a000b80_caseD_2;
      case 3:
        goto switchD_4a000b80_caseD_3;
      }
    }
    param_1 = param_1 & ~((param_1 >> uVar9) << uVar9);
    bVar11 = CARRY4(param_1,param_1) || CARRY4(param_1 * 2,(uint)bVar10);
    uVar2 = param_1 * 2 + (uint)bVar10;
    uVar8 = uVar5 << uVar9;
    return CONCAT44((uint)bVar11 +
                    (uint)(uVar9 == 0 && bVar11 ||
                          uVar9 != 0 && (bool)((byte)(uVar5 >> 0x20 - uVar9) & 1)) +
                    (uint)CARRY4(uVar2,uVar8),uVar2 + uVar8);
  }
  if (param_3 == 0) {
    FUN_4a0063f0(2);
    return 0;
  }
  if (param_3 >> 0xf == 0) {
    uVar9 = 0x10;
  }
  param_3 = param_3 << uVar9;
  if (param_3 >> 0x17 == 0) {
    param_3 = param_3 << 8;
    uVar9 = uVar9 + 8;
  }
  if (param_3 >> 0x1b == 0) {
    param_3 = param_3 << 4;
    uVar9 = uVar9 + 4;
  }
  if (param_3 >> 0x1d == 0) {
    param_3 = param_3 << 2;
    uVar9 = uVar9 + 2;
  }
  if (param_3 >> 0x1e == 0) {
    param_3 = param_3 << 1;
    uVar9 = uVar9 + 1;
  }
  iVar7 = 0;
  if (param_3 << 1 <= param_2) {
    param_2 = param_2 + param_3 * -2;
    iVar7 = 2;
  }
  bVar10 = param_3 <= param_2;
  if (bVar10) {
    param_2 = param_2 - param_3;
  }
  uVar4 = uVar9 + 0x20;
  uVar2 = -param_3;
  uVar8 = param_1;
  if ((0x1f < uVar4) && (param_2 == 0 && param_1 >> 0x1e == 0)) {
    uVar8 = 0;
    uVar4 = uVar9;
    param_2 = param_1;
  }
  iVar3 = 0;
  if ((0xf < uVar4) && (param_2 >> 0xe == 0)) {
    param_2 = param_2 << 0x10;
    iVar3 = 0x10;
  }
  if ((7 < uVar4 - iVar3) && (param_2 >> 0x16 == 0)) {
    param_2 = param_2 << 8;
    iVar3 = iVar3 + 8;
  }
  param_2 = param_2 | uVar8 >> (0x20U - iVar3 & 0xff);
  uVar8 = uVar8 << iVar3;
  bVar11 = false;
  if (uVar4 - iVar3 != 0) {
    uVar5 = (uVar4 - iVar3) - 1;
    uVar4 = uVar5 & 7 ^ 7;
    bVar11 = CARRY4(uVar4,uVar4 * 2);
    switch(uVar5 & 7) {
    case 0:
      while( true ) {
        bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
        uVar8 = uVar8 * 2 + (uint)bVar11;
        uVar4 = param_2 * 2;
        bVar13 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar11 = CARRY4(uVar2,uVar4) || bVar13;
        param_2 = uVar2 + uVar4 + (uint)bVar12;
        uVar5 = uVar5 - 8;
        if (!CARRY4(uVar2,uVar4) && !bVar13) {
          param_2 = param_2 + param_3;
        }
        if ((int)uVar5 < 0) break;
switchD_4a000a4c_caseD_7:
        bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
        uVar8 = uVar8 * 2 + (uint)bVar11;
        uVar4 = param_2 * 2;
        bVar13 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar11 = CARRY4(uVar2,uVar4) || bVar13;
        param_2 = uVar2 + uVar4 + (uint)bVar12;
        if (!CARRY4(uVar2,uVar4) && !bVar13) {
          param_2 = param_2 + param_3;
        }
switchD_4a000a4c_caseD_6:
        bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
        uVar8 = uVar8 * 2 + (uint)bVar11;
        uVar4 = param_2 * 2;
        bVar13 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar11 = CARRY4(uVar2,uVar4) || bVar13;
        param_2 = uVar2 + uVar4 + (uint)bVar12;
        if (!CARRY4(uVar2,uVar4) && !bVar13) {
          param_2 = param_2 + param_3;
        }
switchD_4a000a4c_caseD_5:
        bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
        uVar8 = uVar8 * 2 + (uint)bVar11;
        uVar4 = param_2 * 2;
        bVar13 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar11 = CARRY4(uVar2,uVar4) || bVar13;
        param_2 = uVar2 + uVar4 + (uint)bVar12;
        if (!CARRY4(uVar2,uVar4) && !bVar13) {
          param_2 = param_2 + param_3;
        }
switchD_4a000a4c_caseD_4:
        bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
        uVar8 = uVar8 * 2 + (uint)bVar11;
        uVar4 = param_2 * 2;
        bVar13 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar11 = CARRY4(uVar2,uVar4) || bVar13;
        param_2 = uVar2 + uVar4 + (uint)bVar12;
        if (!CARRY4(uVar2,uVar4) && !bVar13) {
          param_2 = param_2 + param_3;
        }
switchD_4a000a4c_caseD_3:
        bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
        uVar8 = uVar8 * 2 + (uint)bVar11;
        uVar4 = param_2 * 2;
        bVar13 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar11 = CARRY4(uVar2,uVar4) || bVar13;
        param_2 = uVar2 + uVar4 + (uint)bVar12;
        if (!CARRY4(uVar2,uVar4) && !bVar13) {
          param_2 = param_2 + param_3;
        }
switchD_4a000a4c_caseD_2:
        bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
        uVar8 = uVar8 * 2 + (uint)bVar11;
        uVar4 = param_2 * 2;
        bVar13 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar11 = CARRY4(uVar2,uVar4) || bVar13;
        param_2 = uVar2 + uVar4 + (uint)bVar12;
        if (!CARRY4(uVar2,uVar4) && !bVar13) {
          param_2 = param_2 + param_3;
        }
switchD_4a000a4c_caseD_1:
        bVar12 = CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11);
        uVar8 = uVar8 * 2 + (uint)bVar11;
        uVar4 = param_2 * 2;
        bVar13 = CARRY4(uVar2 + uVar4,(uint)bVar12);
        bVar11 = CARRY4(uVar2,uVar4) || bVar13;
        param_2 = uVar2 + uVar4 + (uint)bVar12;
        if (!CARRY4(uVar2,uVar4) && !bVar13) {
          param_2 = param_2 + param_3;
        }
      }
      break;
    case 1:
      goto switchD_4a000a4c_caseD_1;
    case 2:
      goto switchD_4a000a4c_caseD_2;
    case 3:
      goto switchD_4a000a4c_caseD_3;
    case 4:
      goto switchD_4a000a4c_caseD_4;
    case 5:
      goto switchD_4a000a4c_caseD_5;
    case 6:
      goto switchD_4a000a4c_caseD_6;
    case 7:
      goto switchD_4a000a4c_caseD_7;
    }
  }
  return CONCAT44((param_2 & ~((param_2 >> uVar9) << uVar9)) * 2 +
                  (uint)(CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar11)) +
                  (iVar7 + (uint)bVar10 << uVar9),uVar8 * 2 + (uint)bVar11);
}



// Address: 4a000c5c

byte FUN_4a000c5c(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)thunk_FUN_4a003120();
  return *(byte *)(*piVar1 + param_1) & 0x98;
}



// Address: 4a000c72

byte FUN_4a000c72(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)thunk_FUN_4a003120();
  return *(byte *)(*piVar1 + param_1) & 1;
}



// Address: 4a000c88

int FUN_4a000c88(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)thunk_FUN_4a003120();
  if ((int)((uint)*(byte *)(*piVar1 + param_1) << 0x1b) < 0) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}



// Address: 4a000ca8

int FUN_4a000ca8(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)thunk_FUN_4a003120();
  if (((int)((uint)*(byte *)(*piVar1 + param_1) << 0x1c) < 0) && (param_1 != 0xdf)) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}



// Address: 4a000cd4

undefined4 FUN_4a000cd4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  uVar1 = FUN_4a0035b8(param_2,DAT_4a000d0c + 0x4a000cec,param_1,&uStack_8);
  iVar2 = FUN_4a14e4c0(param_1);
  if (iVar2 != 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// Address: 4a000d18

undefined4 FUN_4a000d18(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_20 = param_1;
  uStack_1c = param_4;
  uStack_8 = param_3;
  uStack_4 = param_4;
  uVar1 = FUN_4a0035b8(param_2,DAT_4a000d40 + 0x4a000d26,&local_20,&uStack_8);
  FUN_4a0035ec(0,&local_20);
  return uVar1;
}



// Address: 4a000d44

undefined4 FUN_4a000d44(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = param_1;
  uStack_c = param_4;
  uVar1 = FUN_4a0035b8(param_2,DAT_4a000d74 + 0x4a000d5a,&uStack_10,param_3);
  FUN_4a0035ec(0,&uStack_10);
  return uVar1;
}



// Address: 4a000d78

undefined4 FUN_4a000d78(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_28;
  int local_24;
  undefined4 uStack_4;
  
  local_24 = param_1;
  if (param_2 != 0) {
    local_24 = param_1 + param_2 + -1;
  }
  local_28 = param_1;
  uStack_4 = param_4;
  uVar1 = FUN_4a0035b8(param_3,DAT_4a000db0 + 0x4a000d90,&local_28,&uStack_4);
  if (param_2 != 0) {
    FUN_4a0035ec(0,&local_28);
  }
  return uVar1;
}



// Address: 4a000db4

undefined4 FUN_4a000db4(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int local_18;
  int local_14;
  
  local_14 = param_1;
  if (param_2 != 0) {
    local_14 = param_1 + param_2 + -1;
  }
  local_18 = param_1;
  uVar1 = FUN_4a0035b8(param_3,DAT_4a000de8 + 0x4a000dcc,&local_18);
  if (param_2 != 0) {
    FUN_4a0035ec(0,&local_18);
  }
  return uVar1;
}



// Address: 4a000df4

void FUN_4a000df4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *local_38 [6];
  int local_20;
  int local_1c;
  undefined4 uStack_10;
  undefined4 local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_44 = 0xffffffff;
  local_3c = 0;
  local_38[0] = &uStack_8;
  local_20 = DAT_4a000e30 + 0x4a000e16;
  local_1c = DAT_4a000e34 + 0x4a000e1c;
  local_48 = param_1;
  local_40 = param_1;
  uStack_10 = param_1;
  local_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_4a003714(&local_48,param_2,local_38);
  return;
}



// Address: 4a000e38

void FUN_4a000e38(undefined4 param_1)

{
  thunk_FUN_4a0030fc(param_1);
  return;
}



// Address: 4a000e40

void FUN_4a000e40(undefined4 param_1)

{
  thunk_FUN_4a0030fc(param_1);
  return;
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



// Address: 4a000eb8

undefined4 FUN_4a000eb8(undefined4 param_1)

{
  FUN_4a000f84();
  return param_1;
}



// Address: 4a000ec8

undefined4 FUN_4a000ec8(undefined4 param_1)

{
  FUN_4a00105c();
  return param_1;
}



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



// Address: 4a000f70

undefined4 * FUN_4a000f70(undefined4 *param_1,uint param_2,undefined1 param_3)

{
  uint uVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  
  uVar2 = CONCAT11(param_3,param_3);
  uVar6 = CONCAT22(uVar2,uVar2);
  if (param_2 < 4) {
    if ((bool)((byte)(param_2 >> 1) & 1)) {
      puVar5 = (undefined1 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = param_3;
      param_1 = (undefined4 *)((int)param_1 + 2);
      *puVar5 = param_3;
    }
    puVar4 = param_1;
    if ((int)(param_2 << 0x1f) < 0) {
      puVar4 = (undefined4 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = param_3;
    }
    return puVar4;
  }
  if (((uint)param_1 & 3) != 0) {
    iVar7 = 4 - ((uint)param_1 & 3);
    puVar4 = param_1;
    if (iVar7 != 2) {
      puVar4 = (undefined4 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = param_3;
    }
    param_2 = param_2 - iVar7;
    param_1 = puVar4;
    if (1 < iVar7) {
      param_1 = (undefined4 *)((int)puVar4 + 2);
      *(undefined2 *)puVar4 = uVar2;
    }
  }
  bVar8 = 0x1f < param_2;
  param_2 = param_2 - 0x20;
  do {
    if (bVar8) {
      *param_1 = uVar6;
      param_1[1] = uVar6;
      param_1[2] = uVar6;
      param_1[3] = uVar6;
      param_1[4] = uVar6;
      param_1[5] = uVar6;
      param_1[6] = uVar6;
      param_1[7] = uVar6;
      param_1 = param_1 + 8;
      bVar8 = 0x1f < param_2;
      param_2 = param_2 - 0x20;
    }
  } while (bVar8);
  if ((bool)((byte)(param_2 >> 4) & 1)) {
    *param_1 = uVar6;
    param_1[1] = uVar6;
    param_1[2] = uVar6;
    param_1[3] = uVar6;
    param_1 = param_1 + 4;
  }
  if ((int)(param_2 << 0x1c) < 0) {
    *param_1 = uVar6;
    param_1[1] = uVar6;
    param_1 = param_1 + 2;
  }
  uVar1 = param_2 << 0x1e;
  puVar4 = param_1;
  if ((bool)((byte)((param_2 << 0x1c) >> 0x1e) & 1)) {
    puVar4 = param_1 + 1;
    *param_1 = uVar6;
  }
  if (uVar1 == 0) {
    return puVar4;
  }
  puVar3 = puVar4;
  if ((int)uVar1 < 0) {
    puVar3 = (undefined4 *)((int)puVar4 + 2);
    *(undefined2 *)puVar4 = uVar2;
  }
  puVar4 = puVar3;
  if ((uVar1 & 0x40000000) != 0) {
    puVar4 = (undefined4 *)((int)puVar3 + 1);
    *(undefined1 *)puVar3 = param_3;
  }
  return puVar4;
}



// Address: 4a000f84

undefined8 FUN_4a000f84(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint *puVar2;
  byte *pbVar3;
  uint *puVar4;
  byte bVar5;
  undefined2 uVar6;
  byte bVar7;
  uint in_r12;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  
  if (3 < param_3) {
    uVar8 = (uint)param_1 & 3;
    in_r12 = uVar8;
    if (uVar8 != 0) {
      bVar5 = (byte)*param_2;
      puVar2 = (uint *)((int)param_2 + 1);
      if (uVar8 < 3) {
        puVar2 = (uint *)((int)param_2 + 2);
        in_r12 = (uint)*(byte *)((int)param_2 + 1);
      }
      *(byte *)param_1 = bVar5;
      param_2 = puVar2;
      if (uVar8 < 2) {
        param_2 = (uint *)((int)puVar2 + 1);
        bVar5 = (byte)*puVar2;
      }
      puVar2 = (uint *)((int)param_1 + 1);
      if (uVar8 < 3) {
        puVar2 = (uint *)((int)param_1 + 2);
        *(byte *)((int)param_1 + 1) = (byte)in_r12;
      }
      param_3 = (param_3 + uVar8) - 4;
      param_1 = puVar2;
      if (uVar8 < 2) {
        param_1 = (uint *)((int)puVar2 + 1);
        *(byte *)puVar2 = bVar5;
      }
    }
    param_4 = (uint)param_2 & 3;
    if (param_4 == 0) {
      bVar12 = 0x1f < param_3;
      param_3 = param_3 - 0x20;
      uVar8 = 0;
      if (bVar12) {
        do {
          if (bVar12) {
            uVar8 = param_2[1];
            uVar9 = param_2[2];
            uVar10 = param_2[3];
            *param_1 = *param_2;
            param_1[1] = uVar8;
            param_1[2] = uVar9;
            param_1[3] = uVar10;
            uVar8 = param_2[4];
            uVar9 = param_2[5];
            uVar10 = param_2[6];
            uVar11 = param_2[7];
            param_2 = param_2 + 8;
            param_1[4] = uVar8;
            param_1[5] = uVar9;
            param_1[6] = uVar10;
            param_1[7] = uVar11;
            param_1 = param_1 + 8;
            bVar12 = 0x1f < param_3;
            param_3 = param_3 - 0x20;
          }
        } while (bVar12);
      }
      if ((bool)((byte)(param_3 >> 4) & 1)) {
        uVar8 = *param_2;
        uVar9 = param_2[1];
        uVar10 = param_2[2];
        uVar11 = param_2[3];
        param_2 = param_2 + 4;
        *param_1 = uVar8;
        param_1[1] = uVar9;
        param_1[2] = uVar10;
        param_1[3] = uVar11;
        param_1 = param_1 + 4;
      }
      if ((int)(param_3 << 0x1c) < 0) {
        uVar8 = *param_2;
        uVar9 = param_2[1];
        param_2 = param_2 + 2;
        *param_1 = uVar8;
        param_1[1] = uVar9;
        param_1 = param_1 + 2;
      }
      puVar1 = param_1;
      puVar2 = param_2;
      if ((bool)((byte)(param_3 >> 2) & 1)) {
        puVar2 = param_2 + 1;
        uVar8 = *param_2;
        puVar1 = param_1 + 1;
        *param_1 = uVar8;
      }
      uVar6 = (undefined2)uVar8;
      if ((param_3 & 3) != 0) {
        bVar13 = (bool)((byte)(param_3 >> 1) & 1);
        param_3 = param_3 << 0x1f;
        bVar12 = (int)param_3 < 0;
        puVar4 = puVar2;
        if (bVar13) {
          puVar4 = (uint *)((int)puVar2 + 2);
          uVar6 = (undefined2)*puVar2;
        }
        puVar2 = puVar4;
        if (bVar12) {
          puVar2 = (uint *)((int)puVar4 + 1);
          param_3 = (uint)(byte)*puVar4;
        }
        puVar4 = puVar1;
        if (bVar13) {
          puVar4 = (uint *)((int)puVar1 + 2);
          *(undefined2 *)puVar1 = uVar6;
        }
        puVar1 = puVar4;
        if (bVar12) {
          puVar1 = (uint *)((int)puVar4 + 1);
          *(byte *)puVar4 = (byte)param_3;
        }
        return CONCAT44(puVar2,puVar1);
      }
      return CONCAT44(puVar2,puVar1);
    }
    bVar12 = 3 < param_3;
    param_3 = param_3 - 4;
    if (bVar12) {
      param_2 = (uint *)((int)param_2 - param_4);
      in_r12 = *param_2;
      puVar2 = param_1;
      if (param_4 == 2) {
        do {
          puVar1 = param_2;
          param_4 = in_r12 >> 0x10;
          param_2 = puVar1 + 1;
          in_r12 = *param_2;
          bVar12 = 3 < param_3;
          param_3 = param_3 - 4;
          param_4 = param_4 | in_r12 << 0x10;
          param_1 = puVar2 + 1;
          *puVar2 = param_4;
          puVar2 = param_1;
        } while (bVar12);
        param_2 = (uint *)((int)puVar1 + 6);
      }
      else if (param_4 < 3) {
        do {
          puVar1 = param_2;
          param_4 = in_r12 >> 8;
          param_2 = puVar1 + 1;
          in_r12 = *param_2;
          bVar12 = 3 < param_3;
          param_3 = param_3 - 4;
          param_4 = param_4 | in_r12 << 0x18;
          param_1 = puVar2 + 1;
          *puVar2 = param_4;
          puVar2 = param_1;
        } while (bVar12);
        param_2 = (uint *)((int)puVar1 + 5);
      }
      else {
        do {
          puVar1 = param_2;
          param_4 = in_r12 >> 0x18;
          param_2 = puVar1 + 1;
          in_r12 = *param_2;
          bVar12 = 3 < param_3;
          param_3 = param_3 - 4;
          param_4 = param_4 | in_r12 << 8;
          param_1 = puVar2 + 1;
          *puVar2 = param_4;
          puVar2 = param_1;
        } while (bVar12);
        param_2 = (uint *)((int)puVar1 + 7);
      }
    }
  }
  bVar7 = (byte)in_r12;
  bVar5 = (byte)param_4;
  bVar13 = (bool)((byte)(param_3 >> 1) & 1);
  param_3 = param_3 << 0x1f;
  bVar12 = (int)param_3 < 0;
  if (bVar13) {
    pbVar3 = (byte *)((int)param_2 + 1);
    bVar5 = (byte)*param_2;
    param_2 = (uint *)((int)param_2 + 2);
    bVar7 = *pbVar3;
  }
  puVar2 = param_2;
  if (bVar12) {
    puVar2 = (uint *)((int)param_2 + 1);
    param_3 = (uint)(byte)*param_2;
  }
  if (bVar13) {
    pbVar3 = (byte *)((int)param_1 + 1);
    *(byte *)param_1 = bVar5;
    param_1 = (uint *)((int)param_1 + 2);
    *pbVar3 = bVar7;
  }
  puVar1 = param_1;
  if (bVar12) {
    puVar1 = (uint *)((int)param_1 + 1);
    *(byte *)param_1 = (byte)param_3;
  }
  return CONCAT44(puVar2,puVar1);
}



// Address: 4a00105c

undefined8 FUN_4a00105c(uint *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  byte *pbVar3;
  uint *puVar4;
  byte bVar5;
  undefined2 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  uint in_r12;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  
  uVar7 = (int)param_1 - (int)param_2;
  bVar12 = uVar7 == 0;
  if (param_1 >= param_2) {
    bVar12 = param_3 == uVar7;
  }
  if ((param_1 < param_2 || param_3 < uVar7) || bVar12) {
    if (3 < param_3) {
      uVar7 = (uint)param_1 & 3;
      in_r12 = uVar7;
      if (uVar7 != 0) {
        bVar5 = (byte)*param_2;
        puVar2 = (uint *)((int)param_2 + 1);
        if (uVar7 < 3) {
          puVar2 = (uint *)((int)param_2 + 2);
          in_r12 = (uint)*(byte *)((int)param_2 + 1);
        }
        *(byte *)param_1 = bVar5;
        param_2 = puVar2;
        if (uVar7 < 2) {
          param_2 = (uint *)((int)puVar2 + 1);
          bVar5 = (byte)*puVar2;
        }
        puVar2 = (uint *)((int)param_1 + 1);
        if (uVar7 < 3) {
          puVar2 = (uint *)((int)param_1 + 2);
          *(byte *)((int)param_1 + 1) = (byte)in_r12;
        }
        param_3 = (param_3 + uVar7) - 4;
        param_1 = puVar2;
        if (uVar7 < 2) {
          param_1 = (uint *)((int)puVar2 + 1);
          *(byte *)puVar2 = bVar5;
        }
      }
      uVar7 = (uint)param_2 & 3;
      if (uVar7 == 0) {
        bVar12 = 0x1f < param_3;
        param_3 = param_3 - 0x20;
        uVar7 = 0;
        if (bVar12) {
          do {
            if (bVar12) {
              uVar7 = param_2[1];
              uVar8 = param_2[2];
              uVar9 = param_2[3];
              *param_1 = *param_2;
              param_1[1] = uVar7;
              param_1[2] = uVar8;
              param_1[3] = uVar9;
              uVar7 = param_2[4];
              uVar8 = param_2[5];
              uVar9 = param_2[6];
              uVar11 = param_2[7];
              param_2 = param_2 + 8;
              param_1[4] = uVar7;
              param_1[5] = uVar8;
              param_1[6] = uVar9;
              param_1[7] = uVar11;
              param_1 = param_1 + 8;
              bVar12 = 0x1f < param_3;
              param_3 = param_3 - 0x20;
            }
          } while (bVar12);
        }
        if ((bool)((byte)(param_3 >> 4) & 1)) {
          uVar7 = *param_2;
          uVar8 = param_2[1];
          uVar9 = param_2[2];
          uVar11 = param_2[3];
          param_2 = param_2 + 4;
          *param_1 = uVar7;
          param_1[1] = uVar8;
          param_1[2] = uVar9;
          param_1[3] = uVar11;
          param_1 = param_1 + 4;
        }
        if ((int)(param_3 << 0x1c) < 0) {
          uVar7 = *param_2;
          uVar8 = param_2[1];
          param_2 = param_2 + 2;
          *param_1 = uVar7;
          param_1[1] = uVar8;
          param_1 = param_1 + 2;
        }
        puVar1 = param_1;
        puVar2 = param_2;
        if ((bool)((byte)(param_3 >> 2) & 1)) {
          puVar2 = param_2 + 1;
          uVar7 = *param_2;
          puVar1 = param_1 + 1;
          *param_1 = uVar7;
        }
        uVar6 = (undefined2)uVar7;
        if ((param_3 & 3) == 0) {
          return CONCAT44(puVar2,puVar1);
        }
        bVar13 = (bool)((byte)(param_3 >> 1) & 1);
        param_3 = param_3 << 0x1f;
        bVar12 = (int)param_3 < 0;
        puVar4 = puVar2;
        if (bVar13) {
          puVar4 = (uint *)((int)puVar2 + 2);
          uVar6 = (undefined2)*puVar2;
        }
        puVar2 = puVar4;
        if (bVar12) {
          puVar2 = (uint *)((int)puVar4 + 1);
          param_3 = (uint)(byte)*puVar4;
        }
        puVar4 = puVar1;
        if (bVar13) {
          puVar4 = (uint *)((int)puVar1 + 2);
          *(undefined2 *)puVar1 = uVar6;
        }
        puVar1 = puVar4;
        if (bVar12) {
          puVar1 = (uint *)((int)puVar4 + 1);
          *(byte *)puVar4 = (byte)param_3;
        }
        return CONCAT44(puVar2,puVar1);
      }
      bVar12 = 3 < param_3;
      param_3 = param_3 - 4;
      if (bVar12) {
        param_2 = (uint *)((int)param_2 - uVar7);
        in_r12 = *param_2;
        puVar2 = param_1;
        if (uVar7 == 2) {
          do {
            puVar1 = param_2;
            uVar7 = in_r12 >> 0x10;
            param_2 = puVar1 + 1;
            in_r12 = *param_2;
            bVar12 = 3 < param_3;
            param_3 = param_3 - 4;
            uVar7 = uVar7 | in_r12 << 0x10;
            param_1 = puVar2 + 1;
            *puVar2 = uVar7;
            puVar2 = param_1;
          } while (bVar12);
          param_2 = (uint *)((int)puVar1 + 6);
        }
        else if (uVar7 < 3) {
          do {
            puVar1 = param_2;
            uVar7 = in_r12 >> 8;
            param_2 = puVar1 + 1;
            in_r12 = *param_2;
            bVar12 = 3 < param_3;
            param_3 = param_3 - 4;
            uVar7 = uVar7 | in_r12 << 0x18;
            param_1 = puVar2 + 1;
            *puVar2 = uVar7;
            puVar2 = param_1;
          } while (bVar12);
          param_2 = (uint *)((int)puVar1 + 5);
        }
        else {
          do {
            puVar1 = param_2;
            uVar7 = in_r12 >> 0x18;
            param_2 = puVar1 + 1;
            in_r12 = *param_2;
            bVar12 = 3 < param_3;
            param_3 = param_3 - 4;
            uVar7 = uVar7 | in_r12 << 8;
            param_1 = puVar2 + 1;
            *puVar2 = uVar7;
            puVar2 = param_1;
          } while (bVar12);
          param_2 = (uint *)((int)puVar1 + 7);
        }
      }
    }
    bVar10 = (byte)in_r12;
    bVar5 = (byte)uVar7;
    bVar13 = (bool)((byte)(param_3 >> 1) & 1);
    param_3 = param_3 << 0x1f;
    bVar12 = (int)param_3 < 0;
    if (bVar13) {
      pbVar3 = (byte *)((int)param_2 + 1);
      bVar5 = (byte)*param_2;
      param_2 = (uint *)((int)param_2 + 2);
      bVar10 = *pbVar3;
    }
    puVar2 = param_2;
    if (bVar12) {
      puVar2 = (uint *)((int)param_2 + 1);
      param_3 = (uint)(byte)*param_2;
    }
    if (bVar13) {
      pbVar3 = (byte *)((int)param_1 + 1);
      *(byte *)param_1 = bVar5;
      param_1 = (uint *)((int)param_1 + 2);
      *pbVar3 = bVar10;
    }
    puVar1 = param_1;
    if (bVar12) {
      puVar1 = (uint *)((int)param_1 + 1);
      *(byte *)param_1 = (byte)param_3;
    }
    return CONCAT44(puVar2,puVar1);
  }
  param_1 = (uint *)((int)param_1 + param_3);
  param_2 = (uint *)((int)param_2 + param_3);
  if (3 < param_3) {
    bVar12 = ((uint)param_1 & 3) == 0;
    do {
      if (!bVar12) {
        param_2 = (uint *)((int)param_2 + -1);
        param_3 = param_3 - 1;
        param_1 = (uint *)((int)param_1 + -1);
        *(byte *)param_1 = *(byte *)param_2;
      }
      bVar12 = ((uint)param_1 & 3) == 0;
    } while (!bVar12);
    uVar7 = (uint)param_2 & 3;
    if (uVar7 == 0) {
      while (uVar7 = param_3 - 0x10, 0xf < param_3) {
        puVar2 = param_2 + -1;
        uVar11 = param_2[-2];
        uVar9 = param_2[-3];
        param_2 = param_2 + -4;
        uVar8 = *param_2;
        param_1[-1] = *puVar2;
        param_1[-2] = uVar11;
        param_1[-3] = uVar9;
        param_1 = param_1 + -4;
        *param_1 = uVar8;
        param_3 = uVar7;
      }
      uVar8 = param_3 << 0x1d;
      bVar12 = (int)uVar8 < 0;
      if ((bool)((byte)(uVar7 >> 3) & 1)) {
        puVar2 = param_2 + -1;
        param_2 = param_2 + -2;
        uVar8 = *param_2;
        param_1[-1] = *puVar2;
        param_1 = param_1 + -2;
        *param_1 = uVar8;
      }
      if (bVar12) {
        param_2 = param_2 + -1;
        uVar8 = *param_2;
        param_1 = param_1 + -1;
        *param_1 = uVar8;
      }
      uVar6 = (undefined2)uVar8;
      if ((uVar7 & 3) == 0) {
        return CONCAT44(param_2,param_1);
      }
      bVar13 = (bool)((byte)(uVar7 >> 1) & 1);
      param_3 = param_3 << 0x1f;
      bVar12 = (int)param_3 < 0;
      if (bVar13) {
        param_2 = (uint *)((int)param_2 + -2);
        uVar6 = *(undefined2 *)param_2;
      }
      if (bVar12) {
        param_3 = (uint)*(byte *)((int)param_2 + -1);
      }
      if (bVar13) {
        param_1 = (uint *)((int)param_1 + -2);
        *(undefined2 *)param_1 = uVar6;
      }
      if (bVar12) {
        *(byte *)((int)param_1 + -1) = (byte)param_3;
      }
      return CONCAT44(param_2,param_1);
    }
    bVar12 = 3 < param_3;
    param_3 = param_3 - 4;
    if (bVar12) {
      param_2 = (uint *)((int)param_2 - uVar7);
      in_r12 = *param_2;
      if (uVar7 < 2) {
        do {
          puVar2 = param_2;
          uVar7 = in_r12 << 0x18;
          param_2 = puVar2 + -1;
          in_r12 = *param_2;
          bVar12 = 3 < param_3;
          param_3 = param_3 - 4;
          uVar7 = uVar7 | in_r12 >> 8;
          param_1 = param_1 + -1;
          *param_1 = uVar7;
        } while (bVar12);
        param_2 = (uint *)((int)puVar2 + -3);
      }
      else if (uVar7 < 3) {
        do {
          puVar2 = param_2;
          uVar7 = in_r12 << 0x10;
          param_2 = puVar2 + -1;
          in_r12 = *param_2;
          bVar12 = 3 < param_3;
          param_3 = param_3 - 4;
          uVar7 = uVar7 | in_r12 >> 0x10;
          param_1 = param_1 + -1;
          *param_1 = uVar7;
        } while (bVar12);
        param_2 = (uint *)((int)puVar2 + -2);
      }
      else {
        do {
          puVar2 = param_2;
          uVar7 = in_r12 << 8;
          param_2 = puVar2 + -1;
          in_r12 = *param_2;
          bVar12 = 3 < param_3;
          param_3 = param_3 - 4;
          uVar7 = uVar7 | in_r12 >> 0x18;
          param_1 = param_1 + -1;
          *param_1 = uVar7;
        } while (bVar12);
        param_2 = (uint *)((int)puVar2 + -1);
      }
    }
  }
  bVar10 = (byte)in_r12;
  bVar5 = (byte)uVar7;
  bVar13 = (bool)((byte)(param_3 >> 1) & 1);
  param_3 = param_3 << 0x1f;
  bVar12 = (int)param_3 < 0;
  if (bVar13) {
    bVar5 = *(byte *)((int)param_2 + -1);
    param_2 = (uint *)((int)param_2 + -2);
    bVar10 = *(byte *)param_2;
  }
  if (bVar12) {
    param_3 = (uint)*(byte *)((int)param_2 + -1);
  }
  if (bVar13) {
    *(byte *)((int)param_1 + -1) = bVar5;
    param_1 = (uint *)((int)param_1 + -2);
    *(byte *)param_1 = bVar10;
  }
  if (bVar12) {
    *(byte *)((int)param_1 + -1) = (byte)param_3;
  }
  return CONCAT44(param_2,param_1);
}



// Address: 4a001134

undefined8 FUN_4a001134(undefined4 *param_1,byte *param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  
  bVar9 = 0x1f < param_3;
  param_3 = param_3 - 0x20;
  if (bVar9) {
    do {
      if (bVar9) {
        uVar6 = *(undefined4 *)(param_2 + 4);
        uVar7 = *(undefined4 *)(param_2 + 8);
        uVar8 = *(undefined4 *)(param_2 + 0xc);
        *param_1 = *(undefined4 *)param_2;
        param_1[1] = uVar6;
        param_1[2] = uVar7;
        param_1[3] = uVar8;
        param_4 = *(undefined4 *)(param_2 + 0x10);
        uVar6 = *(undefined4 *)(param_2 + 0x14);
        uVar7 = *(undefined4 *)(param_2 + 0x18);
        uVar8 = *(undefined4 *)(param_2 + 0x1c);
        param_2 = param_2 + 0x20;
        param_1[4] = param_4;
        param_1[5] = uVar6;
        param_1[6] = uVar7;
        param_1[7] = uVar8;
        param_1 = param_1 + 8;
        bVar9 = 0x1f < param_3;
        param_3 = param_3 - 0x20;
      }
    } while (bVar9);
  }
  if ((bool)((byte)(param_3 >> 4) & 1)) {
    param_4 = *(undefined4 *)param_2;
    uVar6 = *(undefined4 *)(param_2 + 4);
    uVar7 = *(undefined4 *)(param_2 + 8);
    uVar8 = *(undefined4 *)(param_2 + 0xc);
    param_2 = param_2 + 0x10;
    *param_1 = param_4;
    param_1[1] = uVar6;
    param_1[2] = uVar7;
    param_1[3] = uVar8;
    param_1 = param_1 + 4;
  }
  if ((int)(param_3 << 0x1c) < 0) {
    param_4 = *(undefined4 *)param_2;
    uVar6 = *(undefined4 *)(param_2 + 4);
    param_2 = param_2 + 8;
    *param_1 = param_4;
    param_1[1] = uVar6;
    param_1 = param_1 + 2;
  }
  puVar2 = param_1;
  pbVar3 = param_2;
  if ((bool)((byte)(param_3 >> 2) & 1)) {
    pbVar3 = param_2 + 4;
    param_4 = *(undefined4 *)param_2;
    puVar2 = param_1 + 1;
    *param_1 = param_4;
  }
  uVar5 = (undefined2)param_4;
  if ((param_3 & 3) != 0) {
    bVar10 = (bool)((byte)(param_3 >> 1) & 1);
    param_3 = param_3 << 0x1f;
    bVar9 = (int)param_3 < 0;
    pbVar4 = pbVar3;
    if (bVar10) {
      pbVar4 = pbVar3 + 2;
      uVar5 = *(undefined2 *)pbVar3;
    }
    pbVar3 = pbVar4;
    if (bVar9) {
      pbVar3 = pbVar4 + 1;
      param_3 = (uint)*pbVar4;
    }
    puVar1 = puVar2;
    if (bVar10) {
      puVar1 = (undefined4 *)((int)puVar2 + 2);
      *(undefined2 *)puVar2 = uVar5;
    }
    puVar2 = puVar1;
    if (bVar9) {
      puVar2 = (undefined4 *)((int)puVar1 + 1);
      *(char *)puVar1 = (char)param_3;
    }
    return CONCAT44(pbVar3,puVar2);
  }
  return CONCAT44(pbVar3,puVar2);
}



// Address: 4a001198

undefined8 FUN_4a001198(uint *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  byte *pbVar2;
  uint *puVar3;
  uint *puVar4;
  byte *pbVar5;
  undefined2 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  byte *pbVar16;
  
  uVar7 = (int)param_1 - (int)param_2;
  bVar14 = uVar7 == 0;
  if (param_2 <= param_1) {
    bVar14 = param_3 == uVar7;
  }
  if ((param_2 <= param_1 && uVar7 <= param_3) && !bVar14) {
    pbVar2 = (byte *)((int)param_1 + param_3);
    bVar14 = ((uint)pbVar2 & 3) == 0;
    pbVar5 = (byte *)((int)param_2 + param_3);
    do {
      if (!bVar14) {
        param_3 = param_3 - 1;
        pbVar5 = pbVar5 + -1;
        pbVar2 = pbVar2 + -1;
        *pbVar2 = *pbVar5;
      }
      bVar14 = ((uint)pbVar2 & 3) == 0;
    } while (!bVar14);
    while (uVar7 = param_3 - 0x10, 0xf < param_3) {
      pbVar16 = pbVar5 + -4;
      iVar11 = *(int *)(pbVar5 + -8);
      iVar9 = *(int *)(pbVar5 + -0xc);
      pbVar5 = pbVar5 + -0x10;
      iVar8 = *(int *)pbVar5;
      *(int *)(pbVar2 + -4) = *(int *)pbVar16;
      *(int *)(pbVar2 + -8) = iVar11;
      *(int *)(pbVar2 + -0xc) = iVar9;
      pbVar2 = pbVar2 + -0x10;
      *(int *)pbVar2 = iVar8;
      param_3 = uVar7;
    }
    iVar8 = param_3 << 0x1d;
    bVar14 = iVar8 < 0;
    if ((bool)((byte)(uVar7 >> 3) & 1)) {
      pbVar16 = pbVar5 + -4;
      pbVar5 = pbVar5 + -8;
      iVar8 = *(int *)pbVar5;
      *(int *)(pbVar2 + -4) = *(int *)pbVar16;
      pbVar2 = pbVar2 + -8;
      *(int *)pbVar2 = iVar8;
    }
    if (bVar14) {
      pbVar5 = pbVar5 + -4;
      iVar8 = *(int *)pbVar5;
      pbVar2 = pbVar2 + -4;
      *(int *)pbVar2 = iVar8;
    }
    uVar6 = (undefined2)iVar8;
    if ((uVar7 & 3) == 0) {
      return CONCAT44(pbVar5,pbVar2);
    }
    bVar15 = (bool)((byte)(uVar7 >> 1) & 1);
    param_3 = param_3 << 0x1f;
    bVar14 = (int)param_3 < 0;
    if (bVar15) {
      pbVar5 = pbVar5 + -2;
      uVar6 = *(undefined2 *)pbVar5;
    }
    if (bVar14) {
      param_3 = (uint)pbVar5[-1];
    }
    if (bVar15) {
      pbVar2 = pbVar2 + -2;
      *(undefined2 *)pbVar2 = uVar6;
    }
    if (bVar14) {
      pbVar2[-1] = (byte)param_3;
    }
    return CONCAT44(pbVar5,pbVar2);
  }
  bVar14 = 0x1f < param_3;
  param_3 = param_3 - 0x20;
  if (bVar14) {
    do {
      if (bVar14) {
        uVar7 = param_2[1];
        uVar10 = param_2[2];
        uVar12 = param_2[3];
        *param_1 = *param_2;
        param_1[1] = uVar7;
        param_1[2] = uVar10;
        param_1[3] = uVar12;
        uVar7 = param_2[4];
        uVar10 = param_2[5];
        uVar12 = param_2[6];
        uVar13 = param_2[7];
        param_2 = param_2 + 8;
        param_1[4] = uVar7;
        param_1[5] = uVar10;
        param_1[6] = uVar12;
        param_1[7] = uVar13;
        param_1 = param_1 + 8;
        bVar14 = 0x1f < param_3;
        param_3 = param_3 - 0x20;
      }
    } while (bVar14);
  }
  if ((bool)((byte)(param_3 >> 4) & 1)) {
    uVar7 = *param_2;
    uVar10 = param_2[1];
    uVar12 = param_2[2];
    uVar13 = param_2[3];
    param_2 = param_2 + 4;
    *param_1 = uVar7;
    param_1[1] = uVar10;
    param_1[2] = uVar12;
    param_1[3] = uVar13;
    param_1 = param_1 + 4;
  }
  if ((int)(param_3 << 0x1c) < 0) {
    uVar7 = *param_2;
    uVar10 = param_2[1];
    param_2 = param_2 + 2;
    *param_1 = uVar7;
    param_1[1] = uVar10;
    param_1 = param_1 + 2;
  }
  puVar1 = param_1;
  puVar4 = param_2;
  if ((bool)((byte)(param_3 >> 2) & 1)) {
    puVar4 = param_2 + 1;
    uVar7 = *param_2;
    puVar1 = param_1 + 1;
    *param_1 = uVar7;
  }
  uVar6 = (undefined2)uVar7;
  if ((param_3 & 3) == 0) {
    return CONCAT44(puVar4,puVar1);
  }
  bVar15 = (bool)((byte)(param_3 >> 1) & 1);
  param_3 = param_3 << 0x1f;
  bVar14 = (int)param_3 < 0;
  puVar3 = puVar4;
  if (bVar15) {
    puVar3 = (uint *)((int)puVar4 + 2);
    uVar6 = (undefined2)*puVar4;
  }
  puVar4 = puVar3;
  if (bVar14) {
    puVar4 = (uint *)((int)puVar3 + 1);
    param_3 = (uint)(byte)*puVar3;
  }
  puVar3 = puVar1;
  if (bVar15) {
    puVar3 = (uint *)((int)puVar1 + 2);
    *(undefined2 *)puVar1 = uVar6;
  }
  puVar1 = puVar3;
  if (bVar14) {
    puVar1 = (uint *)((int)puVar3 + 1);
    *(byte *)puVar3 = (byte)param_3;
  }
  return CONCAT44(puVar4,puVar1);
}



// Address: 4a00121c

undefined4 * FUN_4a00121c(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  bVar4 = 0x1f < param_2;
  param_2 = param_2 - 0x20;
  do {
    if (bVar4) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1 = param_1 + 8;
      bVar4 = 0x1f < param_2;
      param_2 = param_2 - 0x20;
    }
  } while (bVar4);
  if ((bool)((byte)(param_2 >> 4) & 1)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1 = param_1 + 4;
  }
  if ((int)(param_2 << 0x1c) < 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  uVar1 = param_2 << 0x1e;
  puVar3 = param_1;
  if ((bool)((byte)((param_2 << 0x1c) >> 0x1e) & 1)) {
    puVar3 = param_1 + 1;
    *param_1 = 0;
  }
  if (uVar1 != 0) {
    puVar2 = puVar3;
    if ((int)uVar1 < 0) {
      puVar2 = (undefined4 *)((int)puVar3 + 2);
      *(undefined2 *)puVar3 = 0;
    }
    puVar3 = puVar2;
    if ((uVar1 & 0x40000000) != 0) {
      puVar3 = (undefined4 *)((int)puVar2 + 1);
      *(undefined1 *)puVar2 = 0;
    }
    return puVar3;
  }
  return puVar3;
}



// Address: 4a001274

undefined4 * FUN_4a001274(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  bool bVar6;
  
  if (param_2 < 4) {
    if ((bool)((byte)(param_2 >> 1) & 1)) {
      puVar4 = (undefined1 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = 0;
      param_1 = (undefined4 *)((int)param_1 + 2);
      *puVar4 = 0;
    }
    puVar3 = param_1;
    if ((int)(param_2 << 0x1f) < 0) {
      puVar3 = (undefined4 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = 0;
    }
    return puVar3;
  }
  if (((uint)param_1 & 3) != 0) {
    iVar5 = 4 - ((uint)param_1 & 3);
    puVar3 = param_1;
    if (iVar5 != 2) {
      puVar3 = (undefined4 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = 0;
    }
    param_2 = param_2 - iVar5;
    param_1 = puVar3;
    if (1 < iVar5) {
      param_1 = (undefined4 *)((int)puVar3 + 2);
      *(undefined2 *)puVar3 = 0;
    }
  }
  bVar6 = 0x1f < param_2;
  param_2 = param_2 - 0x20;
  do {
    if (bVar6) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1 = param_1 + 8;
      bVar6 = 0x1f < param_2;
      param_2 = param_2 - 0x20;
    }
  } while (bVar6);
  if ((bool)((byte)(param_2 >> 4) & 1)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1 = param_1 + 4;
  }
  if ((int)(param_2 << 0x1c) < 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  uVar1 = param_2 << 0x1e;
  puVar3 = param_1;
  if ((bool)((byte)((param_2 << 0x1c) >> 0x1e) & 1)) {
    puVar3 = param_1 + 1;
    *param_1 = 0;
  }
  if (uVar1 == 0) {
    return puVar3;
  }
  puVar2 = puVar3;
  if ((int)uVar1 < 0) {
    puVar2 = (undefined4 *)((int)puVar3 + 2);
    *(undefined2 *)puVar3 = 0;
  }
  puVar3 = puVar2;
  if ((uVar1 & 0x40000000) != 0) {
    puVar3 = (undefined4 *)((int)puVar2 + 1);
    *(undefined1 *)puVar2 = 0;
  }
  return puVar3;
}



// Address: 4a0012bc

void FUN_4a0012bc(uint *param_1,uint *param_2)

{
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
        return;
      }
      cVar1 = *(char *)((int)param_2 + 1);
      param_2 = (uint *)((int)param_2 + 2);
      param_1 = (uint *)((int)param_1 + 2);
      *pcVar4 = cVar1;
    } while (cVar1 != '\0');
  }
  return;
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



// Address: 4a0014ec

undefined4 FUN_4a0014ec(undefined4 *param_1)

{
  return *param_1;
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

void FUN_4a001538(char *param_1,char *param_2)

{
  char cVar1;
  
  for (; *param_1 != '\0'; param_1 = param_1 + 1) {
  }
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *param_1 = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return;
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

void FUN_4a00156c(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  
  for (; *param_1 != '\0'; param_1 = param_1 + 1) {
  }
  while( true ) {
    if (param_3 == 0) {
      *param_1 = '\0';
      return;
    }
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *param_1 = cVar1;
    param_1 = param_1 + 1;
    if (cVar1 == '\0') break;
    param_3 = param_3 + -1;
  }
  return;
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



// Address: 4a0015f0

longlong FUN_4a0015f0(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  
  if ((int)(param_1 | param_2) < 0) {
    uVar4 = param_2 & 0x80000000;
    if ((int)uVar4 < 0) {
      param_2 = -param_2;
    }
    uVar3 = uVar4 ^ (int)param_1 >> 0x20;
    if (SUB41(param_1 >> 0x1f,0)) {
      param_1 = -param_1;
    }
    uVar1 = param_2;
    if (param_1 >> 4 < param_2) goto LAB_4a0017bc;
    if (param_1 >> 8 < param_2) goto LAB_4a00178c;
    uVar1 = param_2 << 6;
    uVar4 = 0xfc000000;
    if (param_1 >> 8 < uVar1) goto LAB_4a00178c;
    uVar1 = param_2 << 0xc;
    uVar4 = 0xfff00000;
    if (param_1 >> 8 < uVar1) goto LAB_4a00178c;
    uVar1 = param_2 << 0x12;
    uVar4 = 0xffffc000;
    if (uVar1 <= param_1 >> 8) {
      uVar1 = param_2 << 0x18;
      uVar4 = 0xffffff00;
    }
    bVar6 = uVar1 == 0;
    if (!bVar6) {
      do {
        if (bVar6) {
          uVar1 = uVar1 >> 6;
        }
LAB_4a00178c:
        bVar6 = uVar1 <= param_1 >> 7;
        if (bVar6) {
          param_1 = param_1 + uVar1 * -0x80;
        }
        bVar7 = uVar1 <= param_1 >> 6;
        if (bVar7) {
          param_1 = param_1 + uVar1 * -0x40;
        }
        bVar8 = uVar1 <= param_1 >> 5;
        if (bVar8) {
          param_1 = param_1 + uVar1 * -0x20;
        }
        bVar9 = uVar1 <= param_1 >> 4;
        if (bVar9) {
          param_1 = param_1 + uVar1 * -0x10;
        }
        uVar4 = (((uVar4 * 2 + (uint)bVar6) * 2 + (uint)bVar7) * 2 + (uint)bVar8) * 2 + (uint)bVar9;
LAB_4a0017bc:
        bVar6 = uVar1 <= param_1 >> 3;
        if (bVar6) {
          param_1 = param_1 + uVar1 * -8;
        }
        uVar5 = uVar4 * 2 + (uint)bVar6;
        bVar7 = uVar1 <= param_1 >> 2;
        if (bVar7) {
          param_1 = param_1 + uVar1 * -4;
        }
        uVar4 = uVar5 * 2 + (uint)bVar7;
        bVar6 = true;
      } while (CARRY4(uVar5,uVar5) || CARRY4(uVar5 * 2,(uint)bVar7));
      bVar6 = uVar1 <= param_1 >> 1;
      if (bVar6) {
        param_1 = param_1 + uVar1 * -2;
      }
      uVar5 = param_1 - uVar1;
      if (uVar1 > param_1) {
        uVar5 = param_1;
      }
      iVar2 = (uVar4 * 2 + (uint)bVar6) * 2 + (uint)(uVar1 <= param_1);
      if ((int)uVar3 >> 0x1f < 0) {
        iVar2 = -iVar2;
      }
      if ((bool)((byte)(uVar3 >> 0x1e) & 1)) {
        uVar5 = -uVar5;
      }
      return CONCAT44(uVar5,iVar2);
    }
LAB_4a004788:
    FUN_4a0063f0(2);
    return 0;
  }
  if (param_1 >> 1 < param_2) {
    if (param_1 < param_2) {
      return (ulonglong)param_1 << 0x20;
    }
    return CONCAT44(param_1 - param_2,1);
  }
  iVar2 = 0;
  uVar4 = param_2;
  if (param_2 <= param_1 >> 4) {
    if (param_2 <= param_1 >> 8) {
      if (param_1 >> 0xc < param_2) goto LAB_4a00167c;
      if (param_1 >> 0x10 < param_2) goto LAB_4a00164c;
      uVar4 = param_2 << 8;
      iVar2 = -0x1000000;
      if (uVar4 <= param_1 >> 0x10) {
        iVar2 = -0x10000;
        uVar4 = param_2 << 0x10;
      }
      if (param_1 >> 0xc < uVar4) goto LAB_4a00167c;
      bVar6 = false;
      if (uVar4 == 0) goto LAB_4a004788;
      do {
        if (bVar6) {
          uVar4 = uVar4 >> 8;
        }
LAB_4a00164c:
        bVar6 = uVar4 <= param_1 >> 0xf;
        if (bVar6) {
          param_1 = param_1 + uVar4 * -0x8000;
        }
        bVar7 = uVar4 <= param_1 >> 0xe;
        if (bVar7) {
          param_1 = param_1 + uVar4 * -0x4000;
        }
        bVar8 = uVar4 <= param_1 >> 0xd;
        if (bVar8) {
          param_1 = param_1 + uVar4 * -0x2000;
        }
        bVar9 = uVar4 <= param_1 >> 0xc;
        if (bVar9) {
          param_1 = param_1 + uVar4 * -0x1000;
        }
        iVar2 = (((iVar2 * 2 + (uint)bVar6) * 2 + (uint)bVar7) * 2 + (uint)bVar8) * 2 + (uint)bVar9;
LAB_4a00167c:
        bVar6 = uVar4 <= param_1 >> 0xb;
        if (bVar6) {
          param_1 = param_1 + uVar4 * -0x800;
        }
        bVar7 = uVar4 <= param_1 >> 10;
        if (bVar7) {
          param_1 = param_1 + uVar4 * -0x400;
        }
        bVar8 = uVar4 <= param_1 >> 9;
        if (bVar8) {
          param_1 = param_1 + uVar4 * -0x200;
        }
        uVar3 = ((iVar2 * 2 + (uint)bVar6) * 2 + (uint)bVar7) * 2 + (uint)bVar8;
        bVar7 = uVar4 <= param_1 >> 8;
        if (bVar7) {
          param_1 = param_1 + uVar4 * -0x100;
        }
        iVar2 = uVar3 * 2 + (uint)bVar7;
        bVar6 = true;
      } while (CARRY4(uVar3,uVar3) || CARRY4(uVar3 * 2,(uint)bVar7));
    }
    bVar6 = uVar4 <= param_1 >> 7;
    if (bVar6) {
      param_1 = param_1 + uVar4 * -0x80;
    }
    bVar7 = uVar4 <= param_1 >> 6;
    if (bVar7) {
      param_1 = param_1 + uVar4 * -0x40;
    }
    bVar8 = uVar4 <= param_1 >> 5;
    if (bVar8) {
      param_1 = param_1 + uVar4 * -0x20;
    }
    bVar9 = uVar4 <= param_1 >> 4;
    if (bVar9) {
      param_1 = param_1 + uVar4 * -0x10;
    }
    iVar2 = (((iVar2 * 2 + (uint)bVar6) * 2 + (uint)bVar7) * 2 + (uint)bVar8) * 2 + (uint)bVar9;
  }
  bVar6 = uVar4 <= param_1 >> 3;
  if (bVar6) {
    param_1 = param_1 + uVar4 * -8;
  }
  bVar7 = uVar4 <= param_1 >> 2;
  if (bVar7) {
    param_1 = param_1 + uVar4 * -4;
  }
  bVar8 = uVar4 <= param_1 >> 1;
  if (bVar8) {
    param_1 = param_1 + uVar4 * -2;
  }
  uVar3 = param_1 - uVar4;
  if (uVar4 > param_1) {
    uVar3 = param_1;
  }
  return CONCAT44(uVar3,(((iVar2 * 2 + (uint)bVar6) * 2 + (uint)bVar7) * 2 + (uint)bVar8) * 2 +
                        (uint)(uVar4 <= param_1));
}



// Address: 4a001808

undefined4 FUN_4a001808(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  
  thunk_FUN_4a1722bc();
  uStack_1c = 0;
  uStack_24 = param_1;
  uStack_20 = param_2;
  uVar1 = thunk_FUN_4a1653dc(&uStack_24);
  puStack_18 = (undefined4 *)thunk_FUN_4a003144();
  *puStack_18 = 0;
  iVar2 = FUN_4a005b98(0);
  puStack_18[1] = iVar2 + 1;
  puStack_18[2] = 0;
  uVar3 = FUN_4a005bc8(0);
  puStack_18[3] = uVar3;
  puStack_18[4] = 0;
  FUN_4a0018e8();
  return uVar1;
}



// Address: 4a001810

undefined4 FUN_4a001810(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  
  thunk_FUN_4a1722bc();
  local_1c = 0;
  local_24 = param_1;
  local_20 = param_2;
  uVar1 = thunk_FUN_4a1653dc(&local_24);
  local_18 = (undefined4 *)thunk_FUN_4a003144();
  *local_18 = 0;
  iVar2 = FUN_4a005b98(0);
  local_18[1] = iVar2 + 1;
  local_18[2] = 0;
  uVar3 = FUN_4a005bc8(0);
  local_18[3] = uVar3;
  local_18[4] = 0;
  FUN_4a0018e8();
  return uVar1;
}



// Address: 4a0018cc

void FUN_4a0018cc(void)

{
  FUN_4a149168(0);
  return;
}



// Address: 4a0018e8

void FUN_4a0018e8(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)(DAT_4a001910 + 0x4a0018f8);
  for (piVar1 = (int *)(DAT_4a00190c + 0x4a0018f4); piVar1 != piVar2; piVar1 = piVar1 + 1) {
    FUN_4a1652c4(*piVar1 + (int)piVar1);
  }
  return;
}



// Address: 4a00191c

void FUN_4a00191c(void)

{
  FUN_4a149110();
  thunk_FUN_4a161530();
  return;
}



// Address: 4a00192c

void FUN_4a00192c(void)

{
  FUN_4a003e8e();
  return;
}



// Address: 4a001944

undefined8 FUN_4a001944(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = param_3;
  uStack_14 = param_4;
  uVar1 = FUN_4a003168();
  local_18 = DAT_4a001990;
  uStack_14 = DAT_4a001994;
  thunk_FUN_4a003694(&local_18,param_1,0);
  thunk_FUN_4a003182(uVar1);
  return CONCAT44(uStack_14,local_18);
}



// Address: 4a001998

undefined8 FUN_4a001998(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  
  uVar3 = DAT_4a001ab8 + ((param_2 & 0x7fffffff) >> 0x14);
  if (0x13 < (int)uVar3) {
    uVar4 = 0x32 < uVar3;
    if (((int)uVar3 < 0x34) && (uVar1 = 0xffffffff >> (uVar3 - 0x14 & 0xff), (param_1 & uVar1) != 0)
       ) {
      uVar5 = FUN_4a17152c(param_1,param_2,DAT_4a001abc,DAT_4a001ac0);
      FUN_4a171488((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),DAT_4a001ac4,DAT_4a001ac8);
      if (!(bool)uVar4) {
        uVar2 = param_1;
        if (0 < (int)param_2) {
          if (uVar3 == 0x14) {
            param_2 = param_2 + 1;
          }
          else {
            uVar2 = param_1 + (1 << (0x34 - uVar3 & 0xff));
            if (uVar2 < param_1) {
              param_2 = param_2 + 1;
            }
          }
        }
        param_1 = uVar2 & ~uVar1;
      }
    }
    goto LAB_4a001aa8;
  }
  uVar4 = 1;
  if ((int)uVar3 < 0) {
    uVar5 = FUN_4a170848(param_1,param_2,DAT_4a001abc,DAT_4a001ac0);
    FUN_4a171488((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),DAT_4a001ac4,DAT_4a001ac8);
    if ((bool)uVar4) goto LAB_4a001aa8;
    if ((int)param_2 < 0) {
      uVar3 = 0x80000000;
    }
    else {
      uVar3 = DAT_4a001acc;
      if (param_2 == 0 && param_1 == 0) goto LAB_4a001aa8;
    }
  }
  else {
    uVar1 = DAT_4a001ad0 >> (uVar3 & 0xff);
    uVar4 = 1;
    if ((param_2 & uVar1) == 0 && param_1 == 0) goto LAB_4a001aa8;
    uVar5 = FUN_4a170848(param_1,param_2,DAT_4a001abc,DAT_4a001ac0);
    FUN_4a171488((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),DAT_4a001ac4,DAT_4a001ac8);
    if ((bool)uVar4) goto LAB_4a001aa8;
    if (0 < (int)param_2) {
      param_2 = param_2 + (0x100000U >> (uVar3 & 0xff));
    }
    uVar3 = param_2 & ~uVar1;
  }
  param_2 = uVar3;
  param_1 = 0;
LAB_4a001aa8:
  return CONCAT44(param_2,param_1);
}



// Address: 4a001ad8

undefined8 FUN_4a001ad8(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  
  uVar3 = DAT_4a001c00 + ((param_2 & 0x7fffffff) >> 0x14);
  if (0x13 < (int)uVar3) {
    uVar4 = 0x32 < uVar3;
    if (((int)uVar3 < 0x34) && (uVar1 = 0xffffffff >> (uVar3 - 0x14 & 0xff), (param_1 & uVar1) != 0)
       ) {
      uVar5 = FUN_4a17152c(param_1,param_2,DAT_4a001c04,DAT_4a001c08);
      FUN_4a171488((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),DAT_4a001c0c,DAT_4a001c10);
      if (!(bool)uVar4) {
        uVar2 = param_1;
        if ((int)param_2 < 0) {
          if (uVar3 == 0x14) {
            param_2 = param_2 + 1;
          }
          else {
            uVar2 = param_1 + (1 << (0x34 - uVar3 & 0xff));
            if (uVar2 < param_1) {
              param_2 = param_2 + 1;
            }
          }
        }
        param_1 = uVar2 & ~uVar1;
      }
    }
    goto LAB_4a001bf0;
  }
  uVar4 = 1;
  if ((int)uVar3 < 0) {
    uVar5 = FUN_4a170848(param_1,param_2,DAT_4a001c04,DAT_4a001c08);
    FUN_4a171488((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),DAT_4a001c0c,DAT_4a001c10);
    if ((bool)uVar4) goto LAB_4a001bf0;
    if (-1 < (int)param_2) {
      param_1 = 0;
      param_2 = param_1;
      goto LAB_4a001bf0;
    }
    uVar3 = DAT_4a001c14;
    if ((param_2 & 0x7fffffff) == 0 && param_1 == 0) goto LAB_4a001bf0;
  }
  else {
    uVar1 = DAT_4a001c18 >> (uVar3 & 0xff);
    uVar4 = 1;
    if ((param_2 & uVar1) == 0 && param_1 == 0) goto LAB_4a001bf0;
    uVar5 = FUN_4a170848(param_1,param_2,DAT_4a001c04,DAT_4a001c08);
    FUN_4a171488((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),DAT_4a001c0c,DAT_4a001c10);
    if ((bool)uVar4) goto LAB_4a001bf0;
    if ((int)param_2 < 0) {
      param_2 = param_2 + (0x100000U >> (uVar3 & 0xff));
    }
    uVar3 = param_2 & ~uVar1;
  }
  param_2 = uVar3;
  param_1 = 0;
LAB_4a001bf0:
  return CONCAT44(param_2,param_1);
}



// Address: 4a001c1c

uint FUN_4a001c1c(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 uVar4;
  
  uVar3 = ((param_1 & 0x7fffffff) >> 0x17) - 0x7f;
  if ((int)uVar3 < 0x17) {
    uVar4 = 1;
    if ((int)uVar3 < 0) {
      uVar2 = FUN_4a171a94(param_1,DAT_4a001cb0);
      FUN_4a172458(uVar2,0);
      if (!(bool)uVar4) {
        if ((int)param_1 < 0) {
          if (param_1 != 0x80000000) {
            param_1 = DAT_4a001cb4;
          }
        }
        else {
          param_1 = 0;
        }
      }
    }
    else {
      uVar1 = DAT_4a001cb8 >> (uVar3 & 0xff);
      uVar4 = 1;
      if ((param_1 & uVar1) != 0) {
        uVar2 = FUN_4a171a94(param_1,DAT_4a001cb0);
        FUN_4a172458(uVar2,0);
        if (!(bool)uVar4) {
          if ((int)param_1 < 0) {
            param_1 = param_1 + (0x800000U >> (uVar3 & 0xff));
          }
          param_1 = param_1 & ~uVar1;
        }
      }
    }
  }
  return param_1;
}



// Address: 4a001cc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_4a001cc0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 extraout_r1;
  undefined4 uVar7;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint unaff_r4;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint unaff_r6;
  uint *puVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  undefined1 uVar22;
  bool bVar23;
  bool bVar24;
  undefined1 uVar25;
  bool bVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  longlong lVar31;
  ulonglong uVar32;
  int iStack_a4;
  uint uStack_84;
  uint uStack_50;
  
  iVar10 = DAT_4a002074;
  uVar27 = CONCAT44(param_2,param_1);
  uVar1 = param_4 & 0x7fffffff;
  uVar5 = param_2 & 0x7fffffff;
  if (((int)DAT_4a002044 < (int)uVar5) ||
     ((((uVar5 == DAT_4a002044 && (param_1 != 0)) || ((int)DAT_4a002044 < (int)uVar1)) ||
      ((uVar1 == DAT_4a002044 && (param_3 != 0)))))) {
    uVar5 = FUN_4a170848(param_1,param_2,param_3,param_4);
    return uVar5;
  }
  uVar20 = param_2 & 0x7fffffff;
  if (uVar1 == 0 && param_3 == 0) {
    if ((uVar20 != 0 || param_1 != 0) && (uVar5 != 0x7ff00000 || param_1 != 0)) {
      return DAT_4a002048;
    }
    thunk_FUN_4a003182(1);
    return DAT_4a002048;
  }
  iVar14 = 0;
  uVar21 = uVar20;
  if ((int)param_2 < 0) {
    uVar21 = DAT_4a002050 | DAT_4a002050 << 1;
  }
  if ((int)param_2 < 0 && (int)uVar1 < (int)uVar21) {
    if ((int)uVar1 < DAT_4a002054) {
      if ((int)DAT_4a002050 <= (int)uVar1) {
        uVar21 = DAT_4a002058 + ((int)uVar1 >> 0x14);
        if ((int)uVar21 < 0x15) {
          if (param_3 == 0) {
            unaff_r6 = uVar1 >> (0x14 - uVar21 & 0xff);
            uVar21 = unaff_r6 << (0x14 - uVar21 & 0xff);
          }
          if (param_3 == 0 && uVar21 == uVar1) goto LAB_4a001de4;
        }
        else {
          unaff_r6 = param_3 >> (0x34 - uVar21 & 0xff);
          if (unaff_r6 << (0x34 - uVar21 & 0xff) == param_3) {
LAB_4a001de4:
            iVar14 = 2 - (unaff_r6 & 1);
          }
        }
      }
    }
    else {
      iVar14 = 2;
    }
  }
  if ((uVar20 == 0 && param_1 == 0) && ((int)param_4 < 0)) {
    if (param_2 == 0 || iVar14 == 2) {
      thunk_FUN_4a003182(1);
      return DAT_4a00205c;
    }
    if (iVar14 == 1) {
      thunk_FUN_4a003182(1);
LAB_4a001ffc:
      puVar6 = &DAT_4a002080;
      goto LAB_4a002000;
    }
  }
  else {
    puVar6 = &DAT_4a00206c;
    puVar18 = (uint *)(DAT_4a002074 + 0x4a001e4c);
    if (param_3 == 0) {
      if ((uVar1 == DAT_4a002044) && ((int)uVar5 < (int)DAT_4a002044)) {
        if (uVar5 != 0x3ff00000 || param_1 != 0) {
          if (-1 < (int)param_2) {
            if ((int)uVar5 < (int)DAT_4a002050) {
              if ((int)param_4 < 0) {
                return 0;
              }
            }
            else if (-1 < (int)param_4) {
              return 0;
            }
            return *puVar18;
          }
          if ((uint)((int)DAT_4a002050 <= (int)uVar5) == -((int)param_4 >> 0x1f)) goto LAB_4a002000;
        }
        goto LAB_4a001e2c;
      }
      uStack_84 = param_2;
      if (uVar1 == DAT_4a002050) {
        if (-1 < (int)param_4) {
          return param_1;
        }
        if (uVar5 == 0) {
          uVar1 = DAT_4a00205c;
          uVar20 = DAT_4a002060;
          if (param_1 != 0) {
            thunk_FUN_4a003182(2);
            uVar1 = DAT_4a00205c;
            uVar20 = DAT_4a002060;
          }
        }
        else {
          uVar1 = DAT_4a00206c;
          uVar20 = DAT_4a002070;
          if (uVar5 != DAT_4a002044 || param_1 != 0) {
            if ((int)DAT_4a002044 <= (int)uVar5) {
              return param_1;
            }
            if ((ram0x4a170fd4 & ~(DAT_4a00204c >> 4)) == 0 ||
                (ram0x4a170fd4 & ~(param_2 >> 4)) == 0) {
              uVar5 = DAT_4a00204c * 2;
              uVar1 = ram0x4a170fd4 * 0x20;
              bVar23 = uVar5 == uVar1;
              bVar24 = bVar23 && DAT_4a002048 == 0;
              bVar26 = bVar23 || uVar1 <= uVar5;
              if (!bVar23 && uVar1 > uVar5 || bVar23 && DAT_4a002048 == 0) {
                bVar26 = ram0x4a170fd4 * 0x20 <= param_2 * 2;
                bVar24 = param_2 * 2 == ram0x4a170fd4 * 0x20;
              }
              if (bVar24) {
                bVar26 = true;
              }
              uVar5 = DAT_4a170a28;
              uVar1 = DAT_4a170fdc;
              if (bVar26 && (!bVar24 || param_1 != 0)) {
LAB_4a172874:
                uVar20 = 0;
                uVar21 = uVar1 & 0xf;
                if (uVar21 == 9) {
                  if ((uVar1 & 0x100000) == 0) {
                    return 0;
                  }
                  if ((uVar1 & 0x70000) == 0) {
                    return 0x30000000;
                  }
                  return 8;
                }
                if (uVar21 == 10) {
                  if ((uVar1 & 0x40) != 0) {
                    uVar20 = 0x80000000;
                  }
                  return uVar20;
                }
                if (uVar21 == 8) {
                  if ((uVar1 & 0x40) != 0) {
                    return 0;
                  }
                  if ((uVar1 & 0x10) == 0) {
                    return uVar5 & 0xff000000 | (uVar5 & 0xffffff) << 3;
                  }
                  return 0;
                }
                return 0;
              }
              if ((DAT_4a00204c & 0x7fffffff) != 0x7ff00000) {
                return 0;
              }
              if ((param_2 & 0x7fffffff) != 0x7ff00000) {
                return DAT_4a002048;
              }
            }
            else {
              uVar5 = ram0x4a170fd4 & param_2 >> 4;
              if (uVar5 != 0 && (DAT_4a00204c & ram0x4a170fd4 << 4) != 0) {
                uVar1 = param_2 << 0xb | param_1 >> 0x15;
                iVar14 = (ram0x4a170fd4 & DAT_4a00204c >> 4 | (DAT_4a00204c ^ param_2) >> 0x1f) -
                         uVar5;
                uVar32 = FUN_4a170cf4(DAT_4a002048 << 0xb,
                                      DAT_4a00204c << 0xb | DAT_4a002048 >> 0x15 | 0x80000000,
                                      param_1 << 0xb);
                iVar10 = (int)uVar32 << 0x15;
                uVar5 = (uint)(uVar32 >> 0xb);
                uVar20 = (int)((uVar32 >> 0xb) >> 0x20) +
                         (uVar1 + (iVar14 + 0x3fc0000 >> 0x10)) * 0x100000;
                uVar1 = uVar20 ^ iVar14 * -0x80000000;
                if ((iVar10 != 0) && (SUB41((uint)iVar10 >> 0x1f,0))) {
                  if ((uVar32 & 0x3ff) == 0) {
                    uVar21 = 0x80000000;
                  }
                  else {
                    uVar21 = 0;
                  }
                  uVar1 = uVar1 + (0xfffffffe < uVar5);
                  uVar5 = uVar5 + 1 & ~(uVar21 >> 0x1f);
                }
                if ((-1 < (int)(uVar1 ^ iVar14 * -0x80000000)) &&
                   ((uVar20 & DAT_4a170fd8) != 0 && (DAT_4a170fd8 & ~uVar1) != 0)) {
                  return uVar5;
                }
                if (0x4000000 < iVar14 + 0x3fc0000) {
                  return 0;
                }
                return 0;
              }
              if ((DAT_4a00204c & ram0x4a170fd4 << 4) != 0) {
                return 0;
              }
              if ((param_2 & ram0x4a170fd4 << 4) != 0) {
                return 0;
              }
            }
            return 0;
          }
        }
        goto LAB_4a00281c;
      }
      if (param_4 == 0x40000000) goto LAB_4a002ac8;
      if ((param_4 == 0x3fe00000) && (-1 < (int)param_2)) {
        iVar10 = DAT_4a002b4c - ((uint)(param_1 != 0) | param_2 & 0x7fffffff);
        bVar24 = (bool)((byte)((uint)iVar10 >> 0x1e) & 1);
        if ((-1 < iVar10) && (FUN_4a17121c(param_1,param_2,DAT_4a002b50,DAT_4a002b54), !bVar24)) {
          thunk_FUN_4a003182(1);
          return DAT_4a002b58;
        }
        if ((param_2 & 0x7ff00000) == 0) {
          if (param_1 != 0 || (param_2 & 0xfffff) != 0) {
            return 0;
          }
          return param_1;
        }
        if ((~param_2 & 0x7ff00000) == 0) {
          uVar5 = DAT_4a170a38;
          uVar1 = DAT_4a1716c4;
          if (param_1 != 0 || (param_2 & 0xfffff) != 0) goto LAB_4a172874;
          if (-1 < (int)param_2) {
            return param_1;
          }
        }
        else if ((param_2 & 0x80000000) == 0) {
          uVar5 = param_2 & ~((param_2 >> 0x14) << 0x14) | 0x100000;
          if ((bool)((char)(param_2 >> 0x14) - 3U & 1)) {
            iVar10 = (int)param_1 >> 0x1f;
            param_1 = param_1 << 1;
            uVar5 = uVar5 * 2 - iVar10;
          }
          uVar13 = 0;
          uVar20 = 0x40000000;
          uVar1 = param_1 << 10;
          uVar21 = (uVar5 << 10 | param_1 >> 0x16) + 0xc0000000;
          uVar5 = 0x10000000;
          do {
            uVar15 = uVar21 - uVar20;
            uVar16 = uVar15;
            if (uVar20 <= uVar21) {
              uVar16 = uVar15 - uVar5;
            }
            if (uVar20 <= uVar21 && uVar5 <= uVar15) {
              uVar20 = uVar20 + uVar5 * 2;
              uVar21 = uVar16;
            }
            iVar10 = (int)uVar1 >> 0x1f;
            uVar1 = uVar1 * 2;
            uVar21 = uVar21 * 2 - iVar10;
            bVar24 = (bool)((byte)uVar5 & 1);
            uVar5 = uVar5 >> 1;
          } while (uVar5 != 0);
          uVar16 = uVar21 - (uVar20 + !bVar24);
          uVar5 = uVar1;
          if (uVar20 < uVar21 || uVar21 - uVar20 < (uint)bVar24) {
            if (uVar16 != 0 || uVar16 < (0x7fffffff < uVar1)) {
              uVar20 = uVar20 + 1;
              uVar5 = uVar1 + 0x80000000;
              uVar21 = uVar16 - (0x7fffffff >= uVar1);
            }
          }
          uVar16 = 0x40000000;
          uVar1 = uVar5 << 1;
          uVar5 = uVar21 * 2 - ((int)uVar5 >> 0x1f);
          do {
            uVar17 = uVar1 - uVar13;
            uVar15 = uVar5 - (uVar20 + (uVar13 > uVar1));
            uVar21 = uVar1;
            if (uVar20 < uVar5 || uVar5 - uVar20 < (uint)(uVar13 <= uVar1)) {
              if (uVar15 != 0 || uVar15 < (uVar16 <= uVar17)) {
                uVar13 = uVar13 + uVar16 * 2;
                uVar21 = uVar17 - uVar16;
                uVar5 = uVar15 - (uVar16 > uVar17);
              }
            }
            uVar16 = uVar16 >> 1;
            uVar1 = uVar21 << 1;
            uVar5 = uVar5 * 2 - ((int)uVar21 >> 0x1f);
          } while (uVar16 != 0x80);
          uVar21 = 0;
          if (uVar5 != 0 || uVar1 != 0) {
            uVar21 = 2;
          }
          uVar5 = (uint)((byte)(uVar13 >> 9) & 1) << 0x1f | uVar21 >> 1;
          uVar1 = uVar5;
          if (uVar5 == 0) {
            uVar1 = unaff_r4;
          }
          uVar20 = uVar13 >> 10 | uVar20 << 0x16;
          if (uVar5 != 0) {
            uVar20 = uVar20 - ((int)uVar1 >> 0x1f);
            if ((uVar1 & 0x7fffffff) == 0) {
              uVar20 = uVar20 & 0xfffffffe;
            }
            return uVar20;
          }
          return uVar20;
        }
        return 0;
      }
    }
    if (param_1 == 0) {
      if (uVar5 == 0) {
        if (((iVar14 == 2 || param_2 == 0) || (iVar14 != 1)) || (-1 < (int)param_2))
        goto LAB_4a002000;
LAB_4a001fb0:
        puVar6 = &DAT_4a002078;
        goto LAB_4a002000;
      }
      if (uVar5 == 0x7ff00000) {
        if (0 < (int)param_2) {
          if (-1 < (int)param_4) {
            return DAT_4a00205c;
          }
          goto LAB_4a002000;
        }
        if ((int)param_2 < 0) {
          if ((int)param_4 < 0) {
            if (iVar14 == 2) goto LAB_4a002000;
            if (iVar14 == 1) goto LAB_4a001fb0;
            if (iVar14 == 0) goto LAB_4a002000;
          }
          else {
            if (iVar14 == 2) {
              return DAT_4a00205c;
            }
            if (iVar14 == 1) goto LAB_4a001ffc;
            if (iVar14 == 0) goto LAB_4a001e2c;
          }
        }
      }
      if (uVar5 == DAT_4a002050) {
        if (0 < (int)param_2) {
          return DAT_4a002048;
        }
        if ((-1 < (int)param_2) || (iVar14 != 0)) {
          if (iVar14 == 2) {
            uVar2 = 1;
          }
          else {
            uVar2 = 0xffffffff;
          }
          uVar5 = FUN_4a1711b0(uVar2);
          return uVar5;
        }
        goto LAB_4a001e2c;
      }
    }
    if (-1 < (int)param_2 || iVar14 != 0) {
      if (DAT_4a002500 < (int)uVar1) {
        if (DAT_4a002500 + 0x2100000 < (int)uVar1) {
          if (DAT_4a002500 + -0x1f00001 < (int)uVar5) {
            if ((int)uVar5 < (int)DAT_4a002050) goto LAB_4a0020e8;
            goto LAB_4a00211c;
          }
LAB_4a0020f0:
          if ((int)param_4 < 0) {
LAB_4a002124:
            thunk_FUN_4a003182(2);
            uVar1 = DAT_4a00205c;
            uVar20 = DAT_4a002060;
            param_1 = DAT_4a00205c;
            uStack_84 = DAT_4a002060;
            goto LAB_4a00281c;
          }
        }
        else {
LAB_4a0020e8:
          if ((int)uVar5 < DAT_4a002500 + -0x1f00001) goto LAB_4a0020f0;
          if ((int)uVar5 <= (int)DAT_4a002050) {
            uVar27 = FUN_4a1716d0(param_1,param_2,DAT_4a002048,DAT_4a00204c);
            uVar7 = (undefined4)((ulonglong)uVar27 >> 0x20);
            uVar2 = (undefined4)uVar27;
            uVar27 = FUN_4a1728ec(uVar2,uVar7,0xfffffffe);
            uVar27 = FUN_4a17152c((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),DAT_4a002504,
                                  DAT_4a002508);
            uVar27 = FUN_4a1712a8((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),uVar2,uVar7);
            uVar27 = FUN_4a17152c((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),DAT_4a00250c,
                                  DAT_4a002510);
            uVar28 = FUN_4a1712a8(uVar2,uVar7);
            uVar27 = FUN_4a1712a8((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),(int)uVar27,
                                  (int)((ulonglong)uVar27 >> 0x20));
            uVar28 = FUN_4a1712a8(uVar2,uVar7,DAT_4a002514,DAT_4a002518);
            uVar9 = (undefined4)((ulonglong)uVar28 >> 0x20);
            uVar27 = FUN_4a1712a8((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),DAT_4a00251c,
                                  DAT_4a002520);
            uVar29 = FUN_4a1712a8(uVar2,uVar7,DAT_4a002524,DAT_4a002528);
            uVar27 = FUN_4a1716d0((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),(int)uVar27,
                                  (int)((ulonglong)uVar27 >> 0x20));
            FUN_4a170848((int)uVar28,uVar9,(int)uVar27,(int)((ulonglong)uVar27 >> 0x20));
            uVar28 = FUN_4a1716d0(0,extraout_r1,(int)uVar28,uVar9);
            uVar2 = extraout_r1;
            goto LAB_4a0026b4;
          }
LAB_4a00211c:
          if (0 < (int)param_4) goto LAB_4a002124;
        }
        thunk_FUN_4a003182(2);
        param_1 = DAT_4a002048;
        uStack_84 = DAT_4a00204c;
      }
      else {
        iVar3 = 0;
        uStack_50 = param_1;
        if (uVar5 < 0x100000) {
          uVar27 = FUN_4a1728ec(param_1,param_2 & 0x7fffffff,0x35);
          uVar5 = (uint)((ulonglong)uVar27 >> 0x20);
          uStack_50 = (uint)uVar27;
          iVar3 = -0x35;
        }
        iVar3 = iVar3 + ((int)uVar5 >> 0x14);
        iStack_a4 = iVar3 + -0x3ff;
        uVar5 = uVar5 & 0xfffff;
        uVar1 = uVar5 | 0x3ff00000;
        if (DAT_4a00252c < (int)uVar5) {
          if ((int)uVar5 < DAT_4a002530) {
            iVar19 = 1;
          }
          else {
            iVar19 = 0;
            uVar1 = uVar1 - 0x100000;
            iStack_a4 = iVar3 + -0x3fe;
          }
        }
        else {
          iVar19 = 0;
        }
        puVar4 = (undefined4 *)(DAT_4a002534 + 0x4a0022cc + iVar19 * 8);
        uVar11 = puVar4[1];
        uVar8 = *puVar4;
        uVar27 = FUN_4a1716d0(uStack_50,uVar1);
        uVar7 = (undefined4)((ulonglong)uVar27 >> 0x20);
        uVar28 = FUN_4a170848(uStack_50,uVar1,uVar8,uVar11);
        uVar28 = FUN_4a170b24(DAT_4a002048,DAT_4a00204c,(int)uVar28,(int)((ulonglong)uVar28 >> 0x20)
                             );
        uVar9 = (undefined4)((ulonglong)uVar28 >> 0x20);
        uVar29 = FUN_4a1712a8((int)uVar27,uVar7,(int)uVar28,uVar9);
        uVar12 = (undefined4)((ulonglong)uVar29 >> 0x20);
        uVar2 = (undefined4)uVar29;
        uVar5 = *puVar18;
        iVar3 = ((int)uVar1 >> 1 | 0x20000000U) + iVar19 * 0x40000 + 0x80000;
        uVar29 = FUN_4a1716d0(uVar5,iVar3,uVar8,uVar11);
        uVar29 = FUN_4a17152c((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),uStack_50,uVar1);
        uVar29 = FUN_4a1712a8(0,uVar12,(int)uVar29,(int)((ulonglong)uVar29 >> 0x20));
        uVar30 = FUN_4a1712a8(0,uVar12,uVar5,iVar3);
        uVar27 = FUN_4a17152c((int)uVar30,(int)((ulonglong)uVar30 >> 0x20),(int)uVar27,uVar7);
        uVar27 = FUN_4a1716d0((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),(int)uVar29,
                              (int)((ulonglong)uVar29 >> 0x20));
        uVar27 = FUN_4a1712a8((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),(int)uVar28,uVar9);
        uVar9 = (undefined4)((ulonglong)uVar27 >> 0x20);
        uVar28 = FUN_4a1712a8(uVar2,uVar12);
        uVar8 = (undefined4)((ulonglong)uVar28 >> 0x20);
        uVar7 = (undefined4)uVar28;
        uVar28 = FUN_4a003eb0(DAT_4a002538 + 0x4a002408,6,uVar7,uVar8);
        uVar29 = FUN_4a1712a8(uVar7,uVar8,uVar7,uVar8);
        uVar28 = FUN_4a1712a8((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),(int)uVar28,
                              (int)((ulonglong)uVar28 >> 0x20));
        uVar29 = FUN_4a170848(0,uVar12,uVar2,uVar12);
        uVar29 = FUN_4a1712a8((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),(int)uVar27,uVar9);
        uVar28 = FUN_4a170848((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),(int)uVar28,
                              (int)((ulonglong)uVar28 >> 0x20));
        uVar7 = (undefined4)((ulonglong)uVar28 >> 0x20);
        uVar29 = FUN_4a1712a8(0,uVar12);
        uVar8 = (undefined4)((ulonglong)uVar29 >> 0x20);
        uVar30 = FUN_4a170848((int)uVar29,uVar8,DAT_4a00253c,DAT_4a002540);
        FUN_4a170848((int)uVar30,(int)((ulonglong)uVar30 >> 0x20),(int)uVar28,uVar7);
        uVar30 = FUN_4a1716d0(0,extraout_r1_00,DAT_4a00253c,DAT_4a002540);
        uVar29 = FUN_4a1716d0((int)uVar30,(int)((ulonglong)uVar30 >> 0x20),(int)uVar29,uVar8);
        uVar28 = FUN_4a17152c((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),(int)uVar28,uVar7);
        uVar29 = FUN_4a1712a8(0,uVar12,0,extraout_r1_00);
        uVar7 = (undefined4)((ulonglong)uVar29 >> 0x20);
        uVar28 = FUN_4a1712a8((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),uVar2,uVar12);
        uVar27 = FUN_4a1712a8((int)uVar27,uVar9,0,extraout_r1_00);
        uVar27 = FUN_4a170848((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),(int)uVar28,
                              (int)((ulonglong)uVar28 >> 0x20));
        uVar2 = (undefined4)((ulonglong)uVar27 >> 0x20);
        FUN_4a170848((int)uVar29,uVar7,(int)uVar27,uVar2);
        uVar28 = FUN_4a1716d0(0,extraout_r1_01,(int)uVar29,uVar7);
        uVar27 = FUN_4a17152c((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),(int)uVar27,uVar2);
        uVar28 = FUN_4a1712a8(0,extraout_r1_01,DAT_4a002948,DAT_4a00294c);
        uVar2 = (undefined4)((ulonglong)uVar28 >> 0x20);
        uVar27 = FUN_4a1712a8((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),DAT_4a002950,DAT_4a002954
                             );
        uVar29 = FUN_4a1712a8(0,extraout_r1_01,DAT_4a002958,DAT_4a00295c);
        uVar27 = FUN_4a170848((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),(int)uVar27,
                              (int)((ulonglong)uVar27 >> 0x20));
        puVar4 = (undefined4 *)(DAT_4a002960 + 0x4a002614 + iVar19 * 8);
        uVar27 = FUN_4a170848((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),*puVar4,puVar4[1]);
        uVar29 = FUN_4a1711b0(iStack_a4);
        uVar7 = (undefined4)((ulonglong)uVar29 >> 0x20);
        uVar30 = FUN_4a170848((int)uVar28,uVar2,(int)uVar27,(int)((ulonglong)uVar27 >> 0x20));
        puVar4 = (undefined4 *)(DAT_4a002964 + 0x4a00265c + iVar19 * 8);
        uVar12 = puVar4[1];
        uVar9 = *puVar4;
        uVar30 = FUN_4a170848((int)uVar30,(int)((ulonglong)uVar30 >> 0x20));
        FUN_4a170848((int)uVar30,(int)((ulonglong)uVar30 >> 0x20),(int)uVar29,uVar7);
        uVar29 = FUN_4a1716d0(0,extraout_r1_02,(int)uVar29,uVar7);
        uVar29 = FUN_4a1716d0((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),uVar9,uVar12);
        uVar28 = FUN_4a1716d0((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),(int)uVar28,uVar2);
        uVar2 = extraout_r1_02;
LAB_4a0026b4:
        uVar27 = FUN_4a17152c((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),(int)uVar27,
                              (int)((ulonglong)uVar27 >> 0x20));
        uStack_84 = DAT_4a00296c;
        param_1 = DAT_4a002968;
        if ((int)param_2 < 0 && iVar14 == 1) {
          uStack_84 = DAT_4a002974;
          param_1 = DAT_4a002970;
        }
        uVar27 = FUN_4a1712a8(param_3,param_4,(int)uVar27,(int)((ulonglong)uVar27 >> 0x20));
        uVar28 = FUN_4a1716d0(param_3,param_4,0,param_4);
        uVar28 = FUN_4a1712a8((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),0,uVar2);
        uVar27 = FUN_4a170848((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),(int)uVar27,
                              (int)((ulonglong)uVar27 >> 0x20));
        uVar9 = (undefined4)((ulonglong)uVar27 >> 0x20);
        uVar7 = (undefined4)uVar27;
        uVar27 = FUN_4a1712a8(0,param_4,0,uVar2);
        uVar12 = (undefined4)((ulonglong)uVar27 >> 0x20);
        uVar2 = (undefined4)uVar27;
        lVar31 = FUN_4a170848(uVar7,uVar9,uVar2,uVar12);
        uVar5 = (uint)((ulonglong)lVar31 >> 0x20);
        iVar14 = (int)lVar31;
        uVar25 = DAT_4a002978 <= uVar5;
        if ((int)DAT_4a002978 <= (int)uVar5) {
          if (uVar5 == DAT_4a002978 && iVar14 == 0) {
            uVar28 = FUN_4a1716d0(iVar14,uVar5,uVar2,uVar12);
            uVar29 = FUN_4a170848(uVar7,uVar9,DAT_4a00297c,DAT_4a002980);
            FUN_4a171488((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),(int)uVar28,
                         (int)((ulonglong)uVar28 >> 0x20));
            if ((bool)uVar25) goto LAB_4a002824;
          }
          thunk_FUN_4a003182(2);
          uVar1 = DAT_4a00205c;
          uVar20 = DAT_4a002060;
          goto LAB_4a00281c;
        }
        uVar25 = DAT_4a002984 <= (uVar5 & 0x7fffffff);
        if (!(bool)uVar25) {
LAB_4a002824:
          uVar1 = 0;
          if ((int)~(DAT_4a002058 >> 0xc | DAT_4a002058 << 0x14) < (int)(uVar5 & 0x7fffffff)) {
            uVar5 = (0x100000U >> (DAT_4a002058 + ((int)(uVar5 & 0x7fffffff) >> 0x14) + 1 & 0xff)) +
                    uVar5;
            uVar20 = DAT_4a002058 + ((uVar5 & 0x7fffffff) >> 0x14);
            uVar1 = (uVar5 & DAT_4a002058 >> 0xc | 0x100000) >> (0x14 - uVar20 & 0xff);
            if (lVar31 < 0) {
              uVar1 = -uVar1;
            }
            uVar27 = FUN_4a1716d0(uVar2,uVar12,*puVar18,
                                  uVar5 & ~((DAT_4a002058 >> 0xc) >> (uVar20 & 0xff)));
          }
          uVar2 = (undefined4)((ulonglong)uVar27 >> 0x20);
          FUN_4a170848(uVar7,uVar9,(int)uVar27,uVar2);
          uVar28 = FUN_4a1712a8(0,extraout_r1_03,DAT_4a002988,DAT_4a00298c);
          uVar12 = (undefined4)((ulonglong)uVar28 >> 0x20);
          uVar29 = FUN_4a1712a8(0,extraout_r1_03,DAT_4a002990,DAT_4a002994);
          uVar27 = FUN_4a1716d0(0,extraout_r1_03,(int)uVar27,uVar2);
          uVar27 = FUN_4a17152c((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),uVar7,uVar9);
          uVar27 = FUN_4a1712a8((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),DAT_4a002998,
                                DAT_4a00299c);
          uVar27 = FUN_4a170848((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),(int)uVar29,
                                (int)((ulonglong)uVar29 >> 0x20));
          uVar7 = (undefined4)((ulonglong)uVar27 >> 0x20);
          uVar29 = FUN_4a170848((int)uVar28,uVar12,(int)uVar27,uVar7);
          uVar9 = (undefined4)((ulonglong)uVar29 >> 0x20);
          uVar2 = (undefined4)uVar29;
          uVar28 = FUN_4a1716d0(uVar2,uVar9,(int)uVar28,uVar12);
          uVar27 = FUN_4a17152c((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),(int)uVar27,uVar7);
          uVar7 = (undefined4)((ulonglong)uVar27 >> 0x20);
          uVar28 = FUN_4a1712a8(uVar2,uVar9);
          uVar12 = (undefined4)((ulonglong)uVar28 >> 0x20);
          uVar29 = FUN_4a003eb0(DAT_4a002ad8 + 0x4a0029f0,5,(int)uVar28,uVar12);
          uVar28 = FUN_4a1712a8((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),(int)uVar28,uVar12);
          uVar28 = FUN_4a17152c((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),uVar2,uVar9);
          uVar12 = (undefined4)((ulonglong)uVar28 >> 0x20);
          uVar29 = FUN_4a1712a8(uVar2,uVar9,(int)uVar27,uVar7);
          uVar27 = FUN_4a170848((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),(int)uVar27,uVar7);
          uVar29 = FUN_4a1716d0((int)uVar28,uVar12,DAT_4a002adc,DAT_4a002ae0);
          uVar28 = FUN_4a1712a8(uVar2,uVar9,(int)uVar28,uVar12);
          uVar28 = FUN_4a170b24((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),(int)uVar29,
                                (int)((ulonglong)uVar29 >> 0x20));
          uVar27 = FUN_4a1716d0((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),(int)uVar27,
                                (int)((ulonglong)uVar27 >> 0x20));
          uVar27 = FUN_4a1716d0((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),uVar2,uVar9);
          uVar28 = FUN_4a17152c((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),DAT_4a002968,
                                DAT_4a00296c);
          iVar10 = (int)((ulonglong)uVar28 >> 0x20);
          iVar14 = iVar10 + uVar1 * 0x100000;
          uVar27 = CONCAT44(iVar14,(int)uVar28);
          if (iVar14 >> 0x14 < 1) {
            uVar27 = FUN_4a1728ec((int)uVar28,iVar10,uVar1);
          }
LAB_4a002ac8:
          uVar5 = FUN_4a1712a8(param_1,uStack_84,(int)uVar27,(int)((ulonglong)uVar27 >> 0x20));
          return uVar5;
        }
        bVar24 = uVar5 + DAT_4a002984 * 0x1fffff == 0;
        uVar22 = bVar24 && iVar14 == 0;
        if (bVar24 && iVar14 == 0) {
          uVar28 = FUN_4a1716d0(iVar14,uVar5,uVar2,uVar12);
          FUN_4a171488((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),uVar7,uVar9);
          if ((bool)uVar25 && !(bool)uVar22) goto LAB_4a002824;
        }
        thunk_FUN_4a003182(2);
      }
      uVar1 = *puVar18;
      uVar20 = *(uint *)(iVar10 + 0x4a001e50);
LAB_4a00281c:
      uVar5 = FUN_4a14b7f8(uVar1,uVar20,param_1,uStack_84);
      return uVar5;
    }
  }
LAB_4a001e2c:
  thunk_FUN_4a003182(1);
  puVar6 = &DAT_4a002064;
LAB_4a002000:
  return *puVar6;
}



// Address: 4a002ae4

longlong FUN_4a002ae4(uint param_1,uint param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint unaff_r4;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  iVar6 = DAT_4a002b4c - ((uint)(param_1 != 0) | param_2 & 0x7fffffff);
  bVar13 = (bool)((byte)((uint)iVar6 >> 0x1e) & 1);
  if ((-1 < iVar6) && (FUN_4a17121c(param_1,param_2,DAT_4a002b50,DAT_4a002b54), !bVar13)) {
    thunk_FUN_4a003182(1);
    return CONCAT44(DAT_4a002b5c,DAT_4a002b58);
  }
  if ((param_2 & 0x7ff00000) == 0) {
    if (param_1 == 0 && (param_2 & 0xfffff) == 0) {
      return CONCAT44(param_2,param_1);
    }
    return (ulonglong)(param_2 & 0x80000000) << 0x20;
  }
  if ((~param_2 & 0x7ff00000) == 0) {
    if (param_1 != 0 || (param_2 & 0xfffff) != 0) {
      uVar2 = 0;
      uVar4 = DAT_4a1716c4 & 0xf;
      if (uVar4 == 9) {
        if ((DAT_4a1716c4 & 0x100000) == 0) {
          return (ulonglong)DAT_4a170a38 << 0x20;
        }
        if ((DAT_4a1716c4 & 0x70000) != 0) {
          return CONCAT44(~(DAT_4a1716c4 << 0xf) << 1,8);
        }
        return CONCAT44(DAT_4a170a38,0x30000000);
      }
      if (uVar4 == 10) {
        if ((DAT_4a1716c4 & 0x40) != 0) {
          uVar2 = 0x80000000;
        }
        return CONCAT44(DAT_4a170a38,uVar2);
      }
      if (uVar4 != 8) {
        return (ulonglong)DAT_4a170a38 << 0x20;
      }
      if ((DAT_4a1716c4 & 0x40) != 0) {
        return 0;
      }
      if ((DAT_4a1716c4 & 0x10) != 0) {
        return 0;
      }
      return CONCAT44(DAT_4a170a38,DAT_4a170a38 & 0xff000000 | (DAT_4a170a38 & 0xffffff) << 3);
    }
    if (-1 < (int)param_2) {
      return CONCAT44(param_2,param_1);
    }
  }
  else if ((param_2 & 0x80000000) == 0) {
    uVar4 = param_2 & ~((param_2 >> 0x14) << 0x14) | 0x100000;
    uVar12 = (param_2 >> 0x14) + 0xfd;
    if ((bool)((byte)uVar12 & 1)) {
      iVar6 = (int)param_1 >> 0x1f;
      param_1 = param_1 << 1;
      uVar4 = uVar4 * 2 - iVar6;
    }
    uVar8 = 0;
    uVar7 = 0x40000000;
    uVar3 = param_1 << 10;
    uVar5 = (uVar4 << 10 | param_1 >> 0x16) + 0xc0000000;
    uVar4 = 0x10000000;
    do {
      uVar9 = uVar5 - uVar7;
      uVar10 = uVar9;
      if (uVar7 <= uVar5) {
        uVar10 = uVar9 - uVar4;
      }
      if (uVar7 <= uVar5 && uVar4 <= uVar9) {
        uVar7 = uVar7 + uVar4 * 2;
        uVar5 = uVar10;
      }
      iVar6 = (int)uVar3 >> 0x1f;
      uVar3 = uVar3 * 2;
      uVar5 = uVar5 * 2 - iVar6;
      bVar13 = (bool)((byte)uVar4 & 1);
      uVar4 = uVar4 >> 1;
    } while (uVar4 != 0);
    uVar10 = uVar5 - (uVar7 + !bVar13);
    uVar4 = uVar3;
    if (uVar7 < uVar5 || uVar5 - uVar7 < (uint)bVar13) {
      if (uVar10 != 0 || uVar10 < (0x7fffffff < uVar3)) {
        uVar7 = uVar7 + 1;
        uVar4 = uVar3 + 0x80000000;
        uVar5 = uVar10 - (0x7fffffff >= uVar3);
      }
    }
    uVar10 = 0x40000000;
    uVar3 = uVar4 << 1;
    uVar4 = uVar5 * 2 - ((int)uVar4 >> 0x1f);
    do {
      uVar11 = uVar3 - uVar8;
      uVar9 = uVar4 - (uVar7 + (uVar8 > uVar3));
      uVar5 = uVar3;
      if (uVar7 < uVar4 || uVar4 - uVar7 < (uint)(uVar8 <= uVar3)) {
        if (uVar9 != 0 || uVar9 < (uVar10 <= uVar11)) {
          uVar8 = uVar8 + uVar10 * 2;
          uVar5 = uVar11 - uVar10;
          uVar4 = uVar9 - (uVar10 > uVar11);
        }
      }
      uVar10 = uVar10 >> 1;
      uVar3 = uVar5 << 1;
      uVar4 = uVar4 * 2 - ((int)uVar5 >> 0x1f);
    } while (uVar10 != 0x80);
    uVar5 = 0;
    if (uVar4 != 0 || uVar3 != 0) {
      uVar5 = 2;
    }
    uVar4 = (uint)((byte)(uVar8 >> 9) & 1) << 0x1f | uVar5 >> 1;
    uVar3 = uVar4;
    if (uVar4 == 0) {
      uVar3 = unaff_r4;
    }
    uVar5 = uVar8 >> 10 | uVar7 << 0x16;
    iVar6 = (uVar7 >> 10) + ((uVar12 >> 1) + 0x180) * 0x100000;
    if (uVar4 == 0) {
      return CONCAT44(iVar6,uVar5);
    }
    bVar1 = (byte)(uVar3 >> 0x1f);
    uVar4 = uVar5 + bVar1;
    if ((uVar3 & 0x7fffffff) == 0) {
      uVar4 = uVar4 & 0xfffffffe;
    }
    return CONCAT44(iVar6 + (uint)CARRY4(uVar5,(uint)bVar1),uVar4);
  }
  return (ulonglong)DAT_4a1716c8 << 0x20;
}



// Address: 4a002b60

uint FUN_4a002b60(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  
  iVar1 = DAT_4a002bb0 - (param_1 & 0x7fffffff);
  bVar9 = (bool)((byte)((uint)iVar1 >> 0x1e) & 1);
  if ((-1 < iVar1) && (FUN_4a1720a0(param_1,0), !bVar9)) {
    thunk_FUN_4a003182(1);
    return DAT_4a002bb4;
  }
  uVar4 = param_1 >> 0x17 & 0xff;
  if (uVar4 == 0 || uVar4 == 0xff) {
    if (uVar4 != 0xff) {
      if ((param_1 & 0x7fffffff) == 0) {
        return param_1;
      }
      return param_1 & 0x80000000;
    }
    if ((param_1 & 0x7fffff) != 0) {
      uVar4 = DAT_4a1725b4 & 0xf;
      if (uVar4 == 9) {
        if ((DAT_4a1725b4 & 0x100000) == 0) {
          return 0;
        }
        if ((DAT_4a1725b4 & 0x70000) != 0) {
          return 8;
        }
        return 0x30000000;
      }
      if (uVar4 == 10) {
        uVar4 = DAT_4a171bb0;
        if ((DAT_4a1725b4 & 0x40) != 0) {
          uVar4 = 0x80000000;
        }
        return uVar4;
      }
      if (uVar4 != 8) {
        return DAT_4a171bb0;
      }
      if ((DAT_4a1725b4 & 0x40) != 0) {
        return 0;
      }
      if ((DAT_4a1725b4 & 0x10) != 0) {
        return DAT_4a171bb0 << 0x1d;
      }
      return DAT_4a171bb0 >> 0x1d | (param_1 >> 0x17) << 3;
    }
    if ((param_1 & 0x80000000) == 0) {
      return param_1;
    }
  }
  else if ((param_1 & 0x80000000) == 0) {
    uVar4 = param_1 << 8 | 0x80000000;
    uVar2 = (param_1 >> 0x17) + 0x7d;
    uVar5 = 0x40000000;
    if (!(bool)((byte)uVar2 & 1)) {
      uVar4 = uVar4 >> 1;
    }
    uVar6 = 0x10000000;
    uVar4 = uVar4 + 0xc0000000 >> 1;
    uVar2 = uVar2 >> 1 | 0x17000000;
    do {
      uVar3 = uVar2;
      bVar9 = uVar5 <= uVar4 * 2;
      uVar7 = uVar4 * 2 - uVar5;
      uVar2 = uVar7;
      if (bVar9) {
        uVar2 = uVar7 - uVar6;
      }
      bVar8 = uVar7 < uVar6;
      if (bVar9 && !bVar8) {
        uVar5 = uVar5 + uVar6 * 2;
        uVar4 = uVar2;
      }
      uVar6 = uVar6 >> 1;
      if (!bVar9 || bVar8) {
        uVar4 = uVar4 << 1;
      }
      uVar2 = uVar3 - 0x1000000;
    } while (0xffffff < uVar3);
    uVar2 = uVar5 << 0x1a;
    if (((bool)((byte)(uVar5 >> 6) & 1)) && (uVar5 = uVar5 + 0x80, uVar4 == uVar2)) {
      uVar5 = uVar5 & 0xffffff7f;
    }
    return (uVar5 >> 7) + uVar3 * 0x800000;
  }
  return DAT_4a1725b8;
}



// Address: 4a002bb8

/* WARNING: Removing unreachable block (ram,0x4a1729d8) */
/* WARNING: Removing unreachable block (ram,0x4a1729ec) */
/* WARNING: Removing unreachable block (ram,0x4a1728bc) */
/* WARNING: Removing unreachable block (ram,0x4a1728ac) */
/* WARNING: Removing unreachable block (ram,0x4a1729e0) */
/* WARNING: Removing unreachable block (ram,0x4a17289c) */

uint FUN_4a002bb8(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  uint uVar10;
  undefined4 in_lr;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  
  uVar2 = param_1 & 0x7fffffff;
  bVar14 = 0x3f7fffff < uVar2;
  if (0x3f800000 < uVar2) {
    bVar14 = SBORROW4(uVar2,DAT_4a002c58);
    if ((int)uVar2 <= DAT_4a002c58) {
      thunk_FUN_4a003182(1);
      return DAT_4a002c5c;
    }
    uVar2 = 1;
    uVar6 = param_1 >> 0x17 & 0xff;
    bVar12 = uVar6 == 0;
    if (!bVar12) {
      param_4 = uVar6 ^ 0xff;
      bVar12 = param_4 == 0;
    }
    bVar13 = bVar12;
    if (!bVar12) {
      bVar14 = SBORROW4(param_4,1);
      bVar13 = param_4 == 1;
    }
    bVar11 = !bVar12 && (int)(param_4 - 1) < 0;
    bVar12 = bVar11 == bVar14;
    bVar1 = !bVar13;
    if (bVar1 && bVar12) {
      bVar14 = SCARRY4(uVar6,1);
      bVar13 = uVar6 == 0xffffffff;
    }
    if (!bVar13 && ((!bVar1 || !bVar12) && bVar11) == bVar14) {
      return param_1 + 0x800000;
    }
    if (uVar6 == 0) {
      return param_1 & 0x80000000;
    }
    if (param_4 != 0) {
      return param_1 & 0x80000000 | 0x7f800000;
    }
    uVar9 = 0xb;
    uVar6 = DAT_4a171bb0;
    if ((param_1 & 0x7fffff) == 0) {
      return param_1;
    }
LAB_4a172874:
    uVar9 = uVar9 & 0xf;
    if (uVar9 == 9) {
      return 0;
    }
    if (uVar9 != 10) {
      if (uVar9 == 8) {
        return uVar2 & 0xff000000 | uVar6 >> 0x1d | (uVar2 & 0xffffff) << 3;
      }
      return uVar6;
    }
    return uVar6;
  }
  FUN_4a1720a0(param_1,DAT_4a002c60);
  if (bVar14) {
    uVar3 = FUN_4a1724e0(param_1,0x3f800000);
    uVar4 = FUN_4a1725c0(0x40000000,uVar3);
    FUN_4a17211c(uVar4,uVar3);
  }
  else {
    uVar3 = FUN_4a17211c(param_1,param_1);
    FUN_4a1724e0(uVar3,0x3f800000);
  }
  uVar9 = FUN_4a1724f4();
  uVar2 = param_1 & 0x7fffffff;
  uVar6 = 0;
  if ((param_1 & 0x80000000) != 0) {
    uVar6 = 3;
    param_1 = param_1 ^ 0x80000000;
  }
  uVar7 = uVar9 & 0x7fffffff;
  if ((uVar9 & 0x80000000) != 0) {
    uVar6 = ~uVar6;
    uVar9 = uVar9 ^ 0x80000000;
  }
  uVar10 = uVar9;
  uVar8 = param_1;
  if (uVar2 < uVar7) {
    uVar6 = uVar6 ^ 1;
    uVar10 = param_1;
    uVar8 = uVar9;
    uVar2 = param_1;
  }
  uVar2 = FUN_4a171bb8(uVar10,uVar8,uVar2,uVar7,unaff_r4,unaff_r5,unaff_r6,in_lr);
  if (0x72 < (uVar2 & 0x7fffffff) >> 0x17) {
    uVar2 = FUN_4a005c9c();
  }
  if ((uVar6 & 1) != 0) {
    uVar2 = uVar2 ^ 0x80000000;
  }
  uVar3 = FUN_4a171fac((int)(uVar6 + 1) >> 1);
  uVar7 = FUN_4a17211c(uVar3,DAT_4a004024);
  uVar6 = DAT_4a171ba4;
  if ((int)(uVar7 ^ uVar2) < 0) {
    uVar2 = uVar2 ^ 0x80000000;
    if (uVar7 < uVar2) {
      uVar9 = uVar7 - uVar2 ^ 0x80000000;
      uVar7 = uVar7 - uVar9;
      uVar2 = uVar2 + uVar9;
    }
    uVar9 = uVar7 >> 0x17;
    uVar8 = uVar9 - (uVar2 >> 0x17);
    if ((uVar2 & 0x7f800000) != 0 && (uVar9 & 0xff) != 0xff) {
      uVar6 = uVar7 << 8 | 0x80000000;
      uVar2 = uVar2 << 8 | 0x80000000;
      uVar10 = uVar6 - (uVar2 >> (uVar8 & 0xff));
      if ((int)uVar10 < 0) {
        bVar14 = (bool)((byte)(uVar10 >> 7) & 1);
        uVar6 = (uVar10 >> 8) + (uVar9 - 1) * 0x800000 + (uint)bVar14;
        if (!bVar14) {
          return uVar6;
        }
        if ((uVar10 & 0x7f) != 0) {
          return uVar6;
        }
      }
      else {
        bVar12 = (uVar9 & 0xfe) == 0;
        bVar14 = false;
        if (!bVar12) {
          uVar6 = uVar10 * 2;
          bVar14 = (int)uVar6 < 0;
          bVar12 = uVar6 == 0;
        }
        if (!bVar14) {
          if (bVar12) {
            if (uVar10 >> 7 == 0) {
              return 0;
            }
            return (uVar7 >> 0x1f) << 0x1f;
          }
          if (uVar6 == 0) {
            return 0;
          }
          uVar2 = uVar6;
          uVar8 = uVar9;
          if (uVar6 >> 0x17 == 0) {
            uVar2 = uVar6 << 8;
            uVar8 = uVar9 - 8;
            if ((uVar6 & 0xffffff) >> 0xf == 0) {
              uVar2 = uVar6 << 0x10;
              uVar8 = uVar9 - 0x10;
            }
          }
          if ((uVar2 & 0x78000000) != 0) {
            uVar2 = uVar2 >> 4;
            uVar8 = uVar8 + 4;
          }
          if ((uVar2 & 0x6000000) != 0) {
            uVar2 = uVar2 >> 2;
            uVar8 = uVar8 + 2;
          }
          uVar8 = uVar8 - ((uVar2 < 0x1000000) + 9);
          if (uVar2 >= 0x1000000) {
            uVar2 = uVar2 >> 1;
          }
          if ((uVar9 ^ uVar8) >> 8 == 0) {
            return uVar2 + uVar8 * 0x800000;
          }
          return (uVar7 >> 0x1f) << 0x1f;
        }
        bVar14 = (bool)((byte)(uVar6 >> 7) & 1);
        uVar6 = ((int)uVar6 >> 8) + uVar9 * 0x800000 + (uint)bVar14;
        if (!bVar14) {
          return uVar6;
        }
        if ((uVar10 & 0x3f) != 0) {
          return uVar6;
        }
      }
      if (uVar2 << (0x20 - uVar8 & 0xff) == 0) {
        uVar6 = uVar6 & 0xfffffffe;
      }
      else {
        uVar6 = uVar6 - 1;
      }
      return uVar6;
    }
    if ((uVar9 & 0xff) != 0xff) {
      if ((uVar7 & 0x7f800000) == 0) {
        uVar7 = 0;
      }
      return uVar7;
    }
    uVar8 = uVar7 * 2;
    uVar9 = 0x4000002;
    if (uVar2 << 1 < 0xff000001 && uVar8 < 0xff000001) {
      if (uVar8 == uVar2 * 2) {
        if ((int)(uVar7 ^ uVar2) < 0) {
          return uVar7;
        }
        return DAT_4a172724;
      }
      if (uVar8 == 0xff000000) {
        return uVar7;
      }
      return uVar2 ^ 0x80000000;
    }
    goto LAB_4a172874;
  }
  iVar5 = uVar7 - uVar2;
  if (uVar7 < uVar2) {
    uVar7 = uVar7 - iVar5;
    uVar2 = uVar2 + iVar5;
  }
  uVar9 = uVar7 >> 0x17;
  uVar8 = uVar9 - (uVar2 >> 0x17);
  if ((uVar2 & 0x7f800000) == 0 || (uVar9 & 0xff) == 0xff) {
    if ((uVar9 & 0xff) != 0xff) {
      if ((uVar7 & 0x7f800000) == 0) {
        uVar7 = uVar7 & 0x80000000;
      }
      return uVar7;
    }
    uVar8 = uVar7 * 2;
    uVar9 = 0x4000001;
    if (uVar2 << 1 < 0xff000001 && uVar8 < 0xff000001) {
      if (uVar8 == uVar2 * 2) {
        if (-1 < (int)(uVar7 ^ uVar2)) {
          return uVar7;
        }
        return DAT_4a171b98;
      }
      if (uVar8 == 0xff000000) {
        return uVar7;
      }
      return uVar2;
    }
    goto LAB_4a172874;
  }
  uVar6 = uVar7 << 8 | 0x80000000;
  uVar7 = uVar2 << 8 | 0x80000000;
  uVar2 = uVar7 >> (uVar8 & 0xff);
  uVar10 = uVar6 + uVar2;
  if (CARRY4(uVar6,uVar2)) {
    uVar2 = uVar10 >> 1 | 0x80000000;
    bVar14 = (bool)((byte)(uVar2 >> 7) & 1);
    uVar2 = uVar2 >> 8;
    uVar6 = uVar2 + uVar9 * 0x800000 + (uint)bVar14;
    if (bVar14) {
      uVar2 = uVar10 & 0xff;
    }
    uVar9 = uVar6 * 2;
    if (uVar2 != 0) {
      if (uVar9 < 0xff000000) {
        return uVar6;
      }
      goto LAB_4a171b0c;
    }
  }
  else {
    bVar14 = (bool)((byte)(uVar10 >> 7) & 1);
    uVar6 = (uVar10 >> 8) + (uVar9 - 1) * 0x800000 + (uint)bVar14;
    if (!bVar14) {
      return uVar6;
    }
    uVar9 = uVar6 * 2;
    if ((uVar10 & 0x7f) != 0) {
      bVar14 = 0xfeffffff < uVar9;
    }
    if (!bVar14) {
      return uVar6;
    }
  }
  if (uVar7 << (0x20 - uVar8 & 0xff) == 0) {
    uVar6 = uVar6 & 0xfffffffe;
  }
  if (uVar9 < 0xff000000) {
    return uVar6;
  }
LAB_4a171b0c:
  return (uVar6 + 0xa0000000 >> 0x17 | 0xff) << 0x17;
}



// Address: 4a002c64

/* WARNING: Removing unreachable block (ram,0x4a1729d8) */
/* WARNING: Removing unreachable block (ram,0x4a1729ec) */
/* WARNING: Removing unreachable block (ram,0x4a1728bc) */
/* WARNING: Removing unreachable block (ram,0x4a1728ac) */
/* WARNING: Removing unreachable block (ram,0x4a1729e0) */
/* WARNING: Removing unreachable block (ram,0x4a17289c) */

uint FUN_4a002c64(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_r4;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  
  uVar2 = param_1 & 0x7fffffff;
  if (0x3f800000 < uVar2) {
    bVar13 = SBORROW4(uVar2,DAT_4a002cd0);
    if ((int)uVar2 <= DAT_4a002cd0) {
      thunk_FUN_4a003182(1);
      return DAT_4a002cd4;
    }
    uVar2 = 1;
    uVar5 = param_1 >> 0x17 & 0xff;
    bVar11 = uVar5 == 0;
    if (!bVar11) {
      param_4 = uVar5 ^ 0xff;
      bVar11 = param_4 == 0;
    }
    bVar12 = bVar11;
    if (!bVar11) {
      bVar13 = SBORROW4(param_4,1);
      bVar12 = param_4 == 1;
    }
    bVar10 = !bVar11 && (int)(param_4 - 1) < 0;
    bVar11 = bVar10 == bVar13;
    bVar1 = !bVar12;
    if (bVar1 && bVar11) {
      bVar13 = SCARRY4(uVar5,1);
      bVar12 = uVar5 == 0xffffffff;
    }
    if (!bVar12 && ((!bVar1 || !bVar11) && bVar10) == bVar13) {
      return param_1 + 0x800000;
    }
    if (uVar5 == 0) {
      return param_1 & 0x80000000;
    }
    if (param_4 != 0) {
      return param_1 & 0x80000000 | 0x7f800000;
    }
    uVar8 = 0xb;
    uVar5 = DAT_4a171bb0;
    if ((param_1 & 0x7fffff) == 0) {
      return param_1;
    }
LAB_4a172874:
    uVar8 = uVar8 & 0xf;
    if (uVar8 == 9) {
      return 0;
    }
    if (uVar8 != 10) {
      if (uVar8 == 8) {
        return uVar2 & 0xff000000 | uVar5 >> 0x1d | (uVar2 & 0xffffff) << 3;
      }
      return uVar5;
    }
    return uVar5;
  }
  uVar3 = FUN_4a17211c(param_1,param_1);
  FUN_4a1724e0(uVar3,0x3f800000);
  uVar8 = FUN_4a1724f4();
  uVar2 = uVar8 & 0x7fffffff;
  uVar5 = 0;
  if ((uVar8 & 0x80000000) != 0) {
    uVar5 = 3;
    uVar8 = uVar8 ^ 0x80000000;
  }
  uVar6 = param_1 & 0x7fffffff;
  if ((param_1 & 0x80000000) != 0) {
    uVar5 = ~uVar5;
    param_1 = param_1 ^ 0x80000000;
  }
  uVar9 = param_1;
  uVar7 = uVar8;
  if (uVar2 < uVar6) {
    uVar5 = uVar5 ^ 1;
    uVar9 = uVar8;
    uVar7 = param_1;
    uVar2 = uVar8;
  }
  uVar2 = FUN_4a171bb8(uVar9,uVar7,uVar2,uVar6,unaff_r4);
  if (0x72 < (uVar2 & 0x7fffffff) >> 0x17) {
    uVar2 = FUN_4a005c9c();
  }
  if ((uVar5 & 1) != 0) {
    uVar2 = uVar2 ^ 0x80000000;
  }
  uVar3 = FUN_4a171fac((int)(uVar5 + 1) >> 1);
  uVar6 = FUN_4a17211c(uVar3,DAT_4a004024);
  uVar5 = DAT_4a171ba4;
  if ((int)(uVar6 ^ uVar2) < 0) {
    uVar2 = uVar2 ^ 0x80000000;
    if (uVar6 < uVar2) {
      uVar8 = uVar6 - uVar2 ^ 0x80000000;
      uVar6 = uVar6 - uVar8;
      uVar2 = uVar2 + uVar8;
    }
    uVar8 = uVar6 >> 0x17;
    uVar7 = uVar8 - (uVar2 >> 0x17);
    if ((uVar2 & 0x7f800000) != 0 && (uVar8 & 0xff) != 0xff) {
      uVar5 = uVar6 << 8 | 0x80000000;
      uVar2 = uVar2 << 8 | 0x80000000;
      uVar9 = uVar5 - (uVar2 >> (uVar7 & 0xff));
      if ((int)uVar9 < 0) {
        bVar13 = (bool)((byte)(uVar9 >> 7) & 1);
        uVar5 = (uVar9 >> 8) + (uVar8 - 1) * 0x800000 + (uint)bVar13;
        if (!bVar13) {
          return uVar5;
        }
        if ((uVar9 & 0x7f) != 0) {
          return uVar5;
        }
      }
      else {
        bVar11 = (uVar8 & 0xfe) == 0;
        bVar13 = false;
        if (!bVar11) {
          uVar5 = uVar9 * 2;
          bVar13 = (int)uVar5 < 0;
          bVar11 = uVar5 == 0;
        }
        if (!bVar13) {
          if (bVar11) {
            if (uVar9 >> 7 == 0) {
              return 0;
            }
            return (uVar6 >> 0x1f) << 0x1f;
          }
          if (uVar5 == 0) {
            return 0;
          }
          uVar2 = uVar5;
          uVar7 = uVar8;
          if (uVar5 >> 0x17 == 0) {
            uVar2 = uVar5 << 8;
            uVar7 = uVar8 - 8;
            if ((uVar5 & 0xffffff) >> 0xf == 0) {
              uVar2 = uVar5 << 0x10;
              uVar7 = uVar8 - 0x10;
            }
          }
          if ((uVar2 & 0x78000000) != 0) {
            uVar2 = uVar2 >> 4;
            uVar7 = uVar7 + 4;
          }
          if ((uVar2 & 0x6000000) != 0) {
            uVar2 = uVar2 >> 2;
            uVar7 = uVar7 + 2;
          }
          uVar7 = uVar7 - ((uVar2 < 0x1000000) + 9);
          if (uVar2 >= 0x1000000) {
            uVar2 = uVar2 >> 1;
          }
          if ((uVar8 ^ uVar7) >> 8 == 0) {
            return uVar2 + uVar7 * 0x800000;
          }
          return (uVar6 >> 0x1f) << 0x1f;
        }
        bVar13 = (bool)((byte)(uVar5 >> 7) & 1);
        uVar5 = ((int)uVar5 >> 8) + uVar8 * 0x800000 + (uint)bVar13;
        if (!bVar13) {
          return uVar5;
        }
        if ((uVar9 & 0x3f) != 0) {
          return uVar5;
        }
      }
      if (uVar2 << (0x20 - uVar7 & 0xff) == 0) {
        uVar5 = uVar5 & 0xfffffffe;
      }
      else {
        uVar5 = uVar5 - 1;
      }
      return uVar5;
    }
    if ((uVar8 & 0xff) != 0xff) {
      if ((uVar6 & 0x7f800000) == 0) {
        uVar6 = 0;
      }
      return uVar6;
    }
    uVar7 = uVar6 * 2;
    uVar8 = 0x4000002;
    if (uVar2 << 1 < 0xff000001 && uVar7 < 0xff000001) {
      if (uVar7 == uVar2 * 2) {
        if ((int)(uVar6 ^ uVar2) < 0) {
          return uVar6;
        }
        return DAT_4a172724;
      }
      if (uVar7 == 0xff000000) {
        return uVar6;
      }
      return uVar2 ^ 0x80000000;
    }
    goto LAB_4a172874;
  }
  iVar4 = uVar6 - uVar2;
  if (uVar6 < uVar2) {
    uVar6 = uVar6 - iVar4;
    uVar2 = uVar2 + iVar4;
  }
  uVar8 = uVar6 >> 0x17;
  uVar7 = uVar8 - (uVar2 >> 0x17);
  if ((uVar2 & 0x7f800000) == 0 || (uVar8 & 0xff) == 0xff) {
    if ((uVar8 & 0xff) != 0xff) {
      if ((uVar6 & 0x7f800000) == 0) {
        uVar6 = uVar6 & 0x80000000;
      }
      return uVar6;
    }
    uVar7 = uVar6 * 2;
    uVar8 = 0x4000001;
    if (uVar2 << 1 < 0xff000001 && uVar7 < 0xff000001) {
      if (uVar7 == uVar2 * 2) {
        if (-1 < (int)(uVar6 ^ uVar2)) {
          return uVar6;
        }
        return DAT_4a171b98;
      }
      if (uVar7 == 0xff000000) {
        return uVar6;
      }
      return uVar2;
    }
    goto LAB_4a172874;
  }
  uVar5 = uVar6 << 8 | 0x80000000;
  uVar6 = uVar2 << 8 | 0x80000000;
  uVar2 = uVar6 >> (uVar7 & 0xff);
  uVar9 = uVar5 + uVar2;
  if (CARRY4(uVar5,uVar2)) {
    uVar2 = uVar9 >> 1 | 0x80000000;
    bVar13 = (bool)((byte)(uVar2 >> 7) & 1);
    uVar2 = uVar2 >> 8;
    uVar5 = uVar2 + uVar8 * 0x800000 + (uint)bVar13;
    if (bVar13) {
      uVar2 = uVar9 & 0xff;
    }
    uVar8 = uVar5 * 2;
    if (uVar2 != 0) {
      if (uVar8 < 0xff000000) {
        return uVar5;
      }
      goto LAB_4a171b0c;
    }
  }
  else {
    bVar13 = (bool)((byte)(uVar9 >> 7) & 1);
    uVar5 = (uVar9 >> 8) + (uVar8 - 1) * 0x800000 + (uint)bVar13;
    if (!bVar13) {
      return uVar5;
    }
    uVar8 = uVar5 * 2;
    if ((uVar9 & 0x7f) != 0) {
      bVar13 = 0xfeffffff < uVar8;
    }
    if (!bVar13) {
      return uVar5;
    }
  }
  if (uVar6 << (0x20 - uVar7 & 0xff) == 0) {
    uVar5 = uVar5 & 0xfffffffe;
  }
  if (uVar8 < 0xff000000) {
    return uVar5;
  }
LAB_4a171b0c:
  return (uVar5 + 0xa0000000 >> 0x17 | 0xff) << 0x17;
}



// Address: 4a002cd8

/* WARNING: Removing unreachable block (ram,0x4a1729d8) */
/* WARNING: Removing unreachable block (ram,0x4a1729ec) */
/* WARNING: Removing unreachable block (ram,0x4a1728bc) */
/* WARNING: Removing unreachable block (ram,0x4a1728ac) */
/* WARNING: Removing unreachable block (ram,0x4a1729e0) */
/* WARNING: Removing unreachable block (ram,0x4a003fb8) */
/* WARNING: Removing unreachable block (ram,0x4a17289c) */

ulonglong FUN_4a002cd8(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  
  do {
    bVar13 = SBORROW4(param_1,DAT_4a002cf4);
    if ((int)param_1 <= DAT_4a002cf4) {
      uVar7 = 0;
      uVar4 = param_1 & 0x7fffffff;
      if ((param_1 & 0x80000000) != 0) {
        uVar7 = 0xffffffff;
        param_1 = param_1 ^ 0x80000000;
      }
      uVar6 = param_1;
      uVar3 = 0x3f800000;
      if (0x3f800000 < uVar4) {
        uVar7 = uVar7 ^ 1;
        uVar6 = 0x3f800000;
        uVar3 = param_1;
      }
      uVar4 = FUN_4a171bb8(uVar6,uVar3);
      if (0x72 < (uVar4 & 0x7fffffff) >> 0x17) {
        uVar4 = FUN_4a005c9c();
      }
      if ((uVar7 & 1) != 0) {
        uVar4 = uVar4 ^ 0x80000000;
      }
      uVar2 = FUN_4a171fac((int)(uVar7 + 1) >> 1);
      uVar7 = FUN_4a17211c(uVar2,DAT_4a004024);
      uVar3 = DAT_4a171ba4;
      if ((int)(uVar7 ^ uVar4) < 0) {
        uVar4 = uVar4 ^ 0x80000000;
        if (uVar7 < uVar4) {
          uVar6 = uVar7 - uVar4 ^ 0x80000000;
          uVar7 = uVar7 - uVar6;
          uVar4 = uVar4 + uVar6;
        }
        uVar6 = uVar7 >> 0x17;
        uVar8 = uVar6 - (uVar4 >> 0x17);
        if ((uVar4 & 0x7f800000) != 0 && (uVar6 & 0xff) != 0xff) {
          uVar3 = uVar7 << 8 | 0x80000000;
          uVar4 = uVar4 << 8;
          uVar9 = uVar3 - ((uVar4 | 0x80000000) >> (uVar8 & 0xff));
          if ((int)uVar9 < 0) {
            bVar13 = (bool)((byte)(uVar9 >> 7) & 1);
            uVar7 = (uVar9 >> 8) + (uVar6 - 1) * 0x800000 + (uint)bVar13;
            if (!bVar13) {
              return CONCAT44(uVar4,uVar7) | 0x8000000000000000;
            }
            if ((uVar9 & 0x7f) != 0) {
              return CONCAT44(uVar4,uVar7) | 0x8000000000000000;
            }
          }
          else {
            bVar11 = (uVar6 & 0xfe) == 0;
            bVar13 = false;
            if (!bVar11) {
              uVar3 = uVar9 * 2;
              bVar13 = (int)uVar3 < 0;
              bVar11 = uVar3 == 0;
            }
            if (!bVar13) {
              if (bVar11) {
                if (uVar9 >> 7 == 0) {
                  return (ulonglong)uVar4 << 0x20 | 0x8000000000000000;
                }
                return CONCAT44(uVar4,(uVar7 >> 0x1f) << 0x1f) | 0x8000000000000000;
              }
              if (uVar3 == 0) {
                return (ulonglong)uVar4 << 0x20 | 0x8000000000000000;
              }
              uVar8 = uVar3;
              uVar9 = uVar6;
              if (uVar3 >> 0x17 == 0) {
                uVar8 = uVar3 << 8;
                uVar9 = uVar6 - 8;
                if ((uVar3 & 0xffffff) >> 0xf == 0) {
                  uVar8 = uVar3 << 0x10;
                  uVar9 = uVar6 - 0x10;
                }
              }
              if ((uVar8 & 0x78000000) != 0) {
                uVar8 = uVar8 >> 4;
                uVar9 = uVar9 + 4;
              }
              if ((uVar8 & 0x6000000) != 0) {
                uVar8 = uVar8 >> 2;
                uVar9 = uVar9 + 2;
              }
              uVar9 = uVar9 - ((uVar8 < 0x1000000) + 9);
              if (uVar8 >= 0x1000000) {
                uVar8 = uVar8 >> 1;
              }
              if ((uVar6 ^ uVar9) >> 8 == 0) {
                return CONCAT44(uVar4,uVar8 + uVar9 * 0x800000) | 0x8000000000000000;
              }
              return CONCAT44(uVar4,(uVar7 >> 0x1f) << 0x1f) | 0x8000000000000000;
            }
            bVar13 = (bool)((byte)(uVar3 >> 7) & 1);
            uVar7 = ((int)uVar3 >> 8) + uVar6 * 0x800000 + (uint)bVar13;
            if (!bVar13) {
              return CONCAT44(uVar4,uVar7) | 0x8000000000000000;
            }
            if ((uVar9 & 0x3f) != 0) {
              return CONCAT44(uVar4,uVar7) | 0x8000000000000000;
            }
          }
          iVar5 = (uVar4 | 0x80000000) << (0x20 - uVar8 & 0xff);
          if (iVar5 == 0) {
            uVar7 = uVar7 & 0xfffffffe;
          }
          else {
            uVar7 = uVar7 - 1;
          }
          return CONCAT44(iVar5,uVar7);
        }
        if ((uVar6 & 0xff) != 0xff) {
          if ((uVar7 & 0x7f800000) == 0) {
            uVar7 = 0;
          }
          return CONCAT44(uVar4,uVar7);
        }
        uVar6 = uVar7 * 2;
        uVar8 = 0x4000002;
        if (uVar4 << 1 < 0xff000001 && uVar6 < 0xff000001) {
          if (uVar6 == uVar4 * 2) {
            if ((int)(uVar7 ^ uVar4) < 0) {
              return CONCAT44(uVar4,uVar7);
            }
            return CONCAT44(uVar4,DAT_4a172724);
          }
          if (uVar6 == 0xff000000) {
            return CONCAT44(uVar4,uVar7);
          }
          return CONCAT44(uVar4,uVar4) ^ 0x80000000;
        }
      }
      else {
        iVar5 = uVar7 - uVar4;
        if (uVar7 < uVar4) {
          uVar7 = uVar7 - iVar5;
          uVar4 = uVar4 + iVar5;
        }
        uVar6 = uVar7 >> 0x17;
        uVar8 = uVar6 - (uVar4 >> 0x17);
        if ((uVar4 & 0x7f800000) != 0 && (uVar6 & 0xff) != 0xff) {
          uVar3 = uVar7 << 8 | 0x80000000;
          uVar4 = uVar4 << 8;
          uVar7 = (uVar4 | 0x80000000) >> (uVar8 & 0xff);
          uVar9 = uVar3 + uVar7;
          if (CARRY4(uVar3,uVar7)) {
            uVar7 = uVar9 >> 1 | 0x80000000;
            bVar13 = (bool)((byte)(uVar7 >> 7) & 1);
            uVar7 = uVar7 >> 8;
            uVar3 = uVar7 + uVar6 * 0x800000 + (uint)bVar13;
            if (bVar13) {
              uVar7 = uVar9 & 0xff;
            }
            uVar6 = uVar3 * 2;
            if (uVar7 != 0) {
              if (uVar6 < 0xff000000) {
                return CONCAT44(uVar4,uVar3) | 0x8000000000000000;
              }
              goto LAB_4a171b0c;
            }
          }
          else {
            bVar13 = (bool)((byte)(uVar9 >> 7) & 1);
            uVar3 = (uVar9 >> 8) + (uVar6 - 1) * 0x800000 + (uint)bVar13;
            if (!bVar13) {
              return CONCAT44(uVar4,uVar3) | 0x8000000000000000;
            }
            uVar6 = uVar3 * 2;
            if ((uVar9 & 0x7f) != 0) {
              bVar13 = 0xfeffffff < uVar6;
            }
            if (!bVar13) {
              return CONCAT44(uVar4,uVar3) | 0x8000000000000000;
            }
          }
          iVar5 = (uVar4 | 0x80000000) << (0x20 - uVar8 & 0xff);
          if (iVar5 == 0) {
            uVar3 = uVar3 & 0xfffffffe;
          }
          if (uVar6 < 0xff000000) {
            return CONCAT44(iVar5,uVar3);
          }
LAB_4a171b0c:
          uVar7 = uVar3 + 0xa0000000 >> 0x17;
          return CONCAT44(uVar7,(uVar7 | 0xff) << 0x17) | 0xff00000000;
        }
        if ((uVar6 & 0xff) != 0xff) {
          if ((uVar7 & 0x7f800000) == 0) {
            uVar7 = uVar7 & 0x80000000;
          }
          return CONCAT44(uVar4,uVar7);
        }
        uVar6 = uVar7 * 2;
        uVar8 = 0x4000001;
        if (uVar4 << 1 < 0xff000001 && uVar6 < 0xff000001) {
          if (uVar6 == uVar4 * 2) {
            if (-1 < (int)(uVar7 ^ uVar4)) {
              return CONCAT44(uVar4,uVar7);
            }
            return CONCAT44(uVar4,DAT_4a171b98);
          }
          if (uVar6 == 0xff000000) {
            return CONCAT44(uVar4,uVar7);
          }
          return CONCAT44(uVar4,uVar4);
        }
      }
      goto LAB_4a172874;
    }
  } while ((int)param_1 <= DAT_4a002cf4);
  uVar4 = 1;
  uVar7 = param_1 >> 0x17 & 0xff;
  bVar11 = uVar7 == 0;
  if (!bVar11) {
    param_4 = uVar7 ^ 0xff;
    bVar11 = param_4 == 0;
  }
  bVar12 = bVar11;
  if (!bVar11) {
    bVar13 = SBORROW4(param_4,1);
    bVar12 = param_4 == 1;
  }
  bVar10 = !bVar11 && (int)(param_4 - 1) < 0;
  bVar11 = bVar10 == bVar13;
  bVar1 = !bVar12;
  if (bVar1 && bVar11) {
    bVar13 = SCARRY4(uVar7,1);
    bVar12 = uVar7 == 0xffffffff;
  }
  if (!bVar12 && ((!bVar1 || !bVar11) && bVar10) == bVar13) {
    return CONCAT44(1,param_1 + 0x800000);
  }
  if (uVar7 == 0) {
    return CONCAT44(1,param_1) & 0xffffffff80000000;
  }
  if (param_4 != 0) {
    return CONCAT44(1,param_1 & 0x80000000 | 0x7f800000);
  }
  uVar8 = 0xb;
  uVar3 = DAT_4a171bb0;
  if ((param_1 & 0x7fffff) == 0) {
    return CONCAT44(1,param_1);
  }
LAB_4a172874:
  uVar8 = uVar8 & 0xf;
  if (uVar8 == 9) {
    return (ulonglong)uVar4 << 0x20;
  }
  if (uVar8 != 10) {
    if (uVar8 == 8) {
      return CONCAT44(uVar4,uVar4 & 0xff000000 | uVar3 >> 0x1d | (uVar4 & 0xffffff) << 3);
    }
    return CONCAT44(uVar4,uVar3);
  }
  return CONCAT44(uVar4,uVar3);
}



// Address: 4a002cf8

/* WARNING: Removing unreachable block (ram,0x4a1729d8) */
/* WARNING: Removing unreachable block (ram,0x4a1729ec) */
/* WARNING: Removing unreachable block (ram,0x4a1728bc) */
/* WARNING: Removing unreachable block (ram,0x4a1728ac) */
/* WARNING: Removing unreachable block (ram,0x4a1729e0) */
/* WARNING: Removing unreachable block (ram,0x4a17289c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_4a002cf8(uint param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  
  uVar7 = param_2 & 0x7fffffff;
  if ((~((int)param_2 >> 0x17) & 0xffU) == 0 || (~((int)param_1 >> 0x17) & 0xffU) == 0) {
    iVar5 = uVar7 - DAT_4a002d58;
    if ((int)uVar7 <= (int)DAT_4a002d58) {
      iVar5 = (param_1 & 0x7fffffff) - DAT_4a002d58;
      uVar7 = param_1 & 0x7fffffff;
    }
    if (uVar7 == DAT_4a002d58 || iVar5 < 0 != SBORROW4(uVar7,DAT_4a002d58)) {
      if ((~((int)param_2 >> 0x17) & 0xffU) == 0 && (~((int)param_1 >> 0x17) & 0xffU) == 0) {
        thunk_FUN_4a003182(1);
        return DAT_4a002d5c;
      }
      goto LAB_4a003fa8;
    }
  }
  else {
LAB_4a003fa8:
    uVar4 = param_2 & 0x7fffffff;
    uVar7 = 0;
    if ((param_2 & 0x80000000) != 0) {
      uVar7 = 3;
      param_2 = param_2 ^ 0x80000000;
    }
    uVar6 = param_1 & 0x7fffffff;
    if ((param_1 & 0x80000000) != 0) {
      uVar7 = ~uVar7;
      param_1 = param_1 ^ 0x80000000;
    }
    uVar2 = param_1;
    if (uVar4 < uVar6) {
      uVar7 = uVar7 ^ 1;
      uVar2 = param_2;
      param_2 = param_1;
    }
    param_2 = FUN_4a171bb8(uVar2,param_2);
    if (0x72 < (param_2 & 0x7fffffff) >> 0x17) {
      param_2 = FUN_4a005c9c();
    }
    if ((uVar7 & 1) != 0) {
      param_2 = param_2 ^ 0x80000000;
    }
    uVar1 = FUN_4a171fac((int)(uVar7 + 1) >> 1);
    param_1 = FUN_4a17211c(uVar1,DAT_4a004024);
  }
  if ((int)(param_1 ^ param_2) < 0) {
    param_2 = param_2 ^ 0x80000000;
    if (param_1 < param_2) {
      uVar7 = param_1 - param_2 ^ 0x80000000;
      param_1 = param_1 - uVar7;
      param_2 = param_2 + uVar7;
    }
    uVar7 = param_1 >> 0x17;
    uVar4 = uVar7 - (param_2 >> 0x17);
    if ((param_2 & 0x7f800000) != 0 && (uVar7 & 0xff) != 0xff) {
      uVar6 = param_1 << 8 | 0x80000000;
      uVar2 = param_2 << 8 | 0x80000000;
      uVar3 = uVar6 - (uVar2 >> (uVar4 & 0xff));
      if ((int)uVar3 < 0) {
        bVar10 = (bool)((byte)(uVar3 >> 7) & 1);
        uVar7 = (uVar3 >> 8) + (uVar7 - 1) * 0x800000 + (uint)bVar10;
        if (!bVar10) {
          return uVar7;
        }
        if ((uVar3 & 0x7f) != 0) {
          return uVar7;
        }
      }
      else {
        bVar9 = (uVar7 & 0xfe) == 0;
        bVar10 = false;
        if (!bVar9) {
          uVar6 = uVar3 * 2;
          bVar10 = (int)uVar6 < 0;
          bVar9 = uVar6 == 0;
        }
        if (!bVar10) {
          if (bVar9) {
            if (uVar3 >> 7 == 0) {
              return 0;
            }
            return (param_1 >> 0x1f) << 0x1f;
          }
          if (uVar6 == 0) {
            return 0;
          }
          uVar4 = uVar6;
          uVar2 = uVar7;
          if (uVar6 >> 0x17 == 0) {
            uVar4 = uVar6 << 8;
            uVar2 = uVar7 - 8;
            if ((uVar6 & 0xffffff) >> 0xf == 0) {
              uVar4 = uVar6 << 0x10;
              uVar2 = uVar7 - 0x10;
            }
          }
          if ((uVar4 & 0x78000000) != 0) {
            uVar4 = uVar4 >> 4;
            uVar2 = uVar2 + 4;
          }
          if ((uVar4 & 0x6000000) != 0) {
            uVar4 = uVar4 >> 2;
            uVar2 = uVar2 + 2;
          }
          uVar2 = uVar2 - ((uVar4 < 0x1000000) + 9);
          if (uVar4 >= 0x1000000) {
            uVar4 = uVar4 >> 1;
          }
          if ((uVar7 ^ uVar2) >> 8 == 0) {
            return uVar4 + uVar2 * 0x800000;
          }
          return (param_1 >> 0x1f) << 0x1f;
        }
        bVar10 = (bool)((byte)(uVar6 >> 7) & 1);
        uVar7 = ((int)uVar6 >> 8) + uVar7 * 0x800000 + (uint)bVar10;
        if (!bVar10) {
          return uVar7;
        }
        if ((uVar3 & 0x3f) != 0) {
          return uVar7;
        }
      }
      if (uVar2 << (0x20 - uVar4 & 0xff) == 0) {
        uVar7 = uVar7 & 0xfffffffe;
      }
      else {
        uVar7 = uVar7 - 1;
      }
      return uVar7;
    }
    if ((uVar7 & 0xff) != 0xff) {
      if ((param_1 & 0x7f800000) == 0) {
        param_1 = 0;
      }
      return param_1;
    }
    uVar7 = param_1 * 2;
    uVar4 = 0x4000002;
    if (param_2 << 1 < 0xff000001 && uVar7 < 0xff000001) {
      if (uVar7 == param_2 * 2) {
        if ((int)(param_1 ^ param_2) < 0) {
          return param_1;
        }
        return DAT_4a172724;
      }
      if (uVar7 == 0xff000000) {
        return param_1;
      }
      return param_2 ^ 0x80000000;
    }
LAB_4a171b9c:
    uVar4 = uVar4 & 0xf;
    if (uVar4 == 9) {
      return 0;
    }
    if (uVar4 != 10) {
      if (uVar4 == 8) {
        return param_2 & 0xff000000 | DAT_4a171ba4 >> 0x1d | (param_2 & 0xffffff) << 3;
      }
      return DAT_4a171ba4;
    }
    return DAT_4a171ba4;
  }
  iVar5 = param_1 - param_2;
  if (param_1 < param_2) {
    param_1 = param_1 - iVar5;
    param_2 = param_2 + iVar5;
  }
  uVar7 = param_1 >> 0x17;
  uVar4 = uVar7 - (param_2 >> 0x17);
  if ((param_2 & 0x7f800000) == 0 || (uVar7 & 0xff) == 0xff) {
    if ((uVar7 & 0xff) != 0xff) {
      if ((param_1 & 0x7f800000) == 0) {
        param_1 = param_1 & 0x80000000;
      }
      return param_1;
    }
    uVar7 = param_1 * 2;
    uVar4 = 0x4000001;
    if (param_2 << 1 < 0xff000001 && uVar7 < 0xff000001) {
      if (uVar7 == param_2 * 2) {
        if (-1 < (int)(param_1 ^ param_2)) {
          return param_1;
        }
        return DAT_4a171b98;
      }
      if (uVar7 == 0xff000000) {
        return param_1;
      }
      return param_2;
    }
    goto LAB_4a171b9c;
  }
  uVar2 = param_1 << 8 | 0x80000000;
  uVar3 = param_2 << 8 | 0x80000000;
  uVar6 = uVar3 >> (uVar4 & 0xff);
  uVar8 = uVar2 + uVar6;
  if (CARRY4(uVar2,uVar6)) {
    uVar6 = uVar8 >> 1 | 0x80000000;
    bVar10 = (bool)((byte)(uVar6 >> 7) & 1);
    uVar6 = uVar6 >> 8;
    uVar7 = uVar6 + uVar7 * 0x800000 + (uint)bVar10;
    if (bVar10) {
      uVar6 = uVar8 & 0xff;
    }
    uVar2 = uVar7 * 2;
    if (uVar6 != 0) {
      if (uVar2 < 0xff000000) {
        return uVar7;
      }
      goto LAB_4a171b0c;
    }
  }
  else {
    bVar10 = (bool)((byte)(uVar8 >> 7) & 1);
    uVar7 = (uVar8 >> 8) + (uVar7 - 1) * 0x800000 + (uint)bVar10;
    if (!bVar10) {
      return uVar7;
    }
    uVar2 = uVar7 * 2;
    if ((uVar8 & 0x7f) != 0) {
      bVar10 = 0xfeffffff < uVar2;
    }
    if (!bVar10) {
      return uVar7;
    }
  }
  if (uVar3 << (0x20 - uVar4 & 0xff) == 0) {
    uVar7 = uVar7 & 0xfffffffe;
  }
  if (uVar2 < 0xff000000) {
    return uVar7;
  }
LAB_4a171b0c:
  return (uVar7 + 0xa0000000 >> 0x17 | 0xff) << 0x17;
}



// Address: 4a002d64

/* WARNING: Removing unreachable block (ram,0x4a1729d8) */
/* WARNING: Removing unreachable block (ram,0x4a1729ec) */
/* WARNING: Removing unreachable block (ram,0x4a1728ac) */
/* WARNING: Removing unreachable block (ram,0x4a1728a8) */
/* WARNING: Removing unreachable block (ram,0x4a1728b0) */
/* WARNING: Removing unreachable block (ram,0x4a17287c) */
/* WARNING: Removing unreachable block (ram,0x4a172894) */
/* WARNING: Removing unreachable block (ram,0x4a172898) */
/* WARNING: Removing unreachable block (ram,0x4a17289c) */
/* WARNING: Removing unreachable block (ram,0x4a1728b4) */
/* WARNING: Removing unreachable block (ram,0x4a1728bc) */
/* WARNING: Removing unreachable block (ram,0x4a1728d0) */
/* WARNING: Removing unreachable block (ram,0x4a1729d0) */
/* WARNING: Removing unreachable block (ram,0x4a172a04) */
/* WARNING: Removing unreachable block (ram,0x4a1729e0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_4a002d64(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint local_18;
  uint local_14;
  uint local_10;
  
  local_10 = param_4;
  local_14 = param_3;
  local_18 = param_2;
  uVar3 = (param_1 & 0x7fffffff) >> 0x17;
  uVar7 = 0x72 < uVar3;
  bVar8 = SBORROW4(uVar3,0x73);
  if ((bool)uVar7) {
    if ((~((int)param_1 >> 0x17) & 0xffU) == 0) {
      if ((param_1 & 0x7fffff) != 0) {
        uVar3 = param_1 >> 0x17 & 0xff;
        bVar5 = uVar3 == 0;
        if (!bVar5) {
          param_4 = uVar3 ^ 0xff;
          bVar5 = param_4 == 0;
        }
        bVar6 = bVar5;
        if (!bVar5) {
          bVar8 = SBORROW4(param_4,1);
          bVar6 = param_4 == 1;
        }
        bVar4 = !bVar5 && (int)(param_4 - 1) < 0;
        bVar5 = bVar4 == bVar8;
        bVar1 = !bVar6;
        if (bVar1 && bVar5) {
          bVar8 = SCARRY4(uVar3,1);
          bVar6 = uVar3 == 0xffffffff;
        }
        if (!bVar6 && ((!bVar1 || !bVar5) && bVar4) == bVar8) {
          return CONCAT44(1,param_1 + 0x800000);
        }
        if (uVar3 == 0) {
          return CONCAT44(1,param_1) & 0xffffffff80000000;
        }
        if (param_4 == 0) {
          if ((param_1 & 0x7fffff) == 0) {
            return CONCAT44(1,param_1);
          }
          return CONCAT44(1,DAT_4a171bb0);
        }
        return CONCAT44(1,param_1 & 0x80000000 | 0x7f800000);
      }
      thunk_FUN_4a003182(1);
      local_14 = DAT_4a002e3c;
    }
    else {
      uVar3 = FUN_4a004300(param_1,&local_10);
      FUN_4a1720a0(local_10,0);
      if (!(bool)uVar7) {
        local_10 = local_10 ^ 0x80000000;
      }
      FUN_4a00463c(local_10,&local_14,&local_18);
      if (!(bool)uVar7) {
        local_14 = local_14 ^ 0x80000000;
      }
      uVar3 = uVar3 & 3;
      uVar2 = local_14;
      if ((uVar3 == 1) || (uVar2 = local_18, uVar3 == 2)) {
        local_14 = uVar2 ^ 0x80000000;
      }
      else if (uVar3 != 3) {
        local_14 = local_18;
      }
    }
  }
  else {
    local_14 = 0x3f800000;
  }
  return CONCAT44(local_18,local_14);
}



// Address: 4a002e40

uint FUN_4a002e40(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  
  if ((~((int)param_1 >> 0x17) & 0xffU) == 0) {
    bVar10 = SCARRY4(param_1,0x800000);
    if (param_1 == 0xff800000) {
      return 0;
    }
    uVar2 = 1;
    uVar5 = param_1 >> 0x17 & 0xff;
    bVar8 = uVar5 == 0;
    if (!bVar8) {
      param_4 = uVar5 ^ 0xff;
      bVar8 = param_4 == 0;
    }
    bVar9 = bVar8;
    if (!bVar8) {
      bVar10 = SBORROW4(param_4,1);
      bVar9 = param_4 == 1;
    }
    bVar7 = !bVar8 && (int)(param_4 - 1) < 0;
    bVar8 = bVar7 == bVar10;
    bVar1 = !bVar9;
    if (bVar1 && bVar8) {
      bVar10 = SCARRY4(uVar5,1);
      bVar9 = uVar5 == 0xffffffff;
    }
    if (!bVar9 && ((!bVar1 || !bVar8) && bVar7) == bVar10) {
      return param_1 + 0x800000;
    }
    if (uVar5 == 0) {
      return param_1 & 0x80000000;
    }
    if (param_4 != 0) {
      return param_1 & 0x80000000 | 0x7f800000;
    }
    uVar4 = 0xb;
    uVar5 = DAT_4a171bb0;
    if ((param_1 & 0x7fffff) == 0) {
      return param_1;
    }
  }
  else {
    uVar5 = FUN_4a004028(param_1,0);
    uVar2 = DAT_4a002ebc;
    if ((uVar5 & 0x7fffffff) != 0) {
      if (uVar5 == DAT_4a002ebc) {
        thunk_FUN_4a003182(2);
        uVar5 = uVar2;
      }
      return uVar5;
    }
    thunk_FUN_4a003182(2);
    uVar2 = *(uint *)(DAT_4a002eb8 + 0x4a002e90);
    uVar5 = *(uint *)(DAT_4a002eb8 + 0x4a002e94);
    uVar6 = uVar5 & 0x80000000;
    uVar4 = uVar5 & 0x7fffffff ^ uVar5 << 1;
    if ((uVar4 & 0x7f000000) != 0 || (uVar4 & 0xe00000) != 0) {
      iVar3 = (uVar5 & 0x7fffffff) + 0xc8000000;
      if (iVar3 < 0x100000) {
        return uVar6;
      }
      bVar10 = (bool)((byte)(uVar2 >> 0x1c) & 1);
      if ((bVar10 && (uVar2 & 0xfffffff) != 0) ||
         ((bVar10 && (-1 < (int)((uVar2 & 0x20000000) * 4 + -0x40000000))))) {
        bVar10 = 0xdfffffff < uVar2;
        uVar2 = uVar2 + 0x20000000;
        iVar3 = iVar3 + (uint)bVar10;
      }
      if (iVar3 < 0xff00000) {
        return uVar6 | iVar3 << 3 | uVar2 >> 0x1d;
      }
      return uVar6 | 0x7f800000;
    }
    if ((uVar5 & 0x100000) == 0) {
      return uVar6;
    }
    if (uVar2 == 0 && (uVar5 & 0xfffff) == 0) {
      return uVar5 & 0xff8fffff;
    }
    uVar5 = 0;
    uVar2 = DAT_4a170a38;
    uVar4 = DAT_4a170840;
  }
  uVar6 = uVar4 & 0xf;
  if (uVar6 == 9) {
    if ((uVar4 & 0x100000) == 0) {
      return 0;
    }
    if ((uVar4 & 0x70000) != 0) {
      return 8;
    }
    return 0x30000000;
  }
  if (uVar6 == 10) {
    if ((uVar4 & 0x40) != 0) {
      uVar5 = 0x80000000;
    }
    return uVar5;
  }
  if (uVar6 != 8) {
    return uVar5;
  }
  if ((uVar4 & 0x40) != 0) {
    return 0;
  }
  if ((uVar4 & 0x10) != 0) {
    return uVar5 << 0x1d;
  }
  return uVar2 & 0xff000000 | uVar5 >> 0x1d | (uVar2 & 0xffffff) << 3;
}



// Address: 4a002ec0

/* WARNING: Removing unreachable block (ram,0x4a1729d8) */
/* WARNING: Removing unreachable block (ram,0x4a1729ec) */
/* WARNING: Removing unreachable block (ram,0x4a1728bc) */
/* WARNING: Removing unreachable block (ram,0x4a1728ac) */
/* WARNING: Removing unreachable block (ram,0x4a1729e0) */
/* WARNING: Removing unreachable block (ram,0x4a17289c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_4a002ec0(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  uint local_c;
  uint local_8 [2];
  
  local_c = param_3;
  local_8[0] = param_4;
  iVar1 = FUN_4a0041e0(param_1,DAT_4a002f00,0x3f800000,local_8);
  if (iVar1 != 0) {
    return CONCAT44(&local_c,local_8[0]);
  }
  if ((int)(local_8[0] ^ local_c) < 0) {
    local_c = local_c ^ 0x80000000;
    if (local_8[0] < local_c) {
      uVar3 = local_8[0] - local_c ^ 0x80000000;
      local_8[0] = local_8[0] - uVar3;
      local_c = local_c + uVar3;
    }
    uVar3 = local_8[0] >> 0x17;
    uVar5 = uVar3 - (local_c >> 0x17);
    if ((local_c & 0x7f800000) != 0 && (uVar3 & 0xff) != 0xff) {
      uVar4 = local_8[0] << 8 | 0x80000000;
      local_c = local_c << 8;
      uVar2 = uVar4 - ((local_c | 0x80000000) >> (uVar5 & 0xff));
      if ((int)uVar2 < 0) {
        bVar8 = (bool)((byte)(uVar2 >> 7) & 1);
        uVar3 = (uVar2 >> 8) + (uVar3 - 1) * 0x800000 + (uint)bVar8;
        if (!bVar8) {
          return CONCAT44(local_c,uVar3) | 0x8000000000000000;
        }
        if ((uVar2 & 0x7f) != 0) {
          return CONCAT44(local_c,uVar3) | 0x8000000000000000;
        }
      }
      else {
        bVar7 = (uVar3 & 0xfe) == 0;
        bVar8 = false;
        if (!bVar7) {
          uVar4 = uVar2 * 2;
          bVar8 = (int)uVar4 < 0;
          bVar7 = uVar4 == 0;
        }
        if (!bVar8) {
          if (bVar7) {
            if (uVar2 >> 7 == 0) {
              return (ulonglong)local_c << 0x20 | 0x8000000000000000;
            }
            return CONCAT44(local_c,(local_8[0] >> 0x1f) << 0x1f) | 0x8000000000000000;
          }
          if (uVar4 == 0) {
            return (ulonglong)local_c << 0x20 | 0x8000000000000000;
          }
          uVar5 = uVar4;
          uVar2 = uVar3;
          if (uVar4 >> 0x17 == 0) {
            uVar5 = uVar4 << 8;
            uVar2 = uVar3 - 8;
            if ((uVar4 & 0xffffff) >> 0xf == 0) {
              uVar5 = uVar4 << 0x10;
              uVar2 = uVar3 - 0x10;
            }
          }
          if ((uVar5 & 0x78000000) != 0) {
            uVar5 = uVar5 >> 4;
            uVar2 = uVar2 + 4;
          }
          if ((uVar5 & 0x6000000) != 0) {
            uVar5 = uVar5 >> 2;
            uVar2 = uVar2 + 2;
          }
          uVar2 = uVar2 - ((uVar5 < 0x1000000) + 9);
          if (uVar5 >= 0x1000000) {
            uVar5 = uVar5 >> 1;
          }
          if ((uVar3 ^ uVar2) >> 8 == 0) {
            return CONCAT44(local_c,uVar5 + uVar2 * 0x800000) | 0x8000000000000000;
          }
          return CONCAT44(local_c,(local_8[0] >> 0x1f) << 0x1f) | 0x8000000000000000;
        }
        bVar8 = (bool)((byte)(uVar4 >> 7) & 1);
        uVar3 = ((int)uVar4 >> 8) + uVar3 * 0x800000 + (uint)bVar8;
        if (!bVar8) {
          return CONCAT44(local_c,uVar3) | 0x8000000000000000;
        }
        if ((uVar2 & 0x3f) != 0) {
          return CONCAT44(local_c,uVar3) | 0x8000000000000000;
        }
      }
      iVar1 = (local_c | 0x80000000) << (0x20 - uVar5 & 0xff);
      if (iVar1 == 0) {
        uVar3 = uVar3 & 0xfffffffe;
      }
      else {
        uVar3 = uVar3 - 1;
      }
      return CONCAT44(iVar1,uVar3);
    }
    if ((uVar3 & 0xff) != 0xff) {
      if ((local_8[0] & 0x7f800000) == 0) {
        local_8[0] = 0;
      }
      return CONCAT44(local_c,local_8[0]);
    }
    uVar3 = local_8[0] * 2;
    uVar5 = 0x4000002;
    if (local_c << 1 < 0xff000001 && uVar3 < 0xff000001) {
      if (uVar3 == local_c * 2) {
        if ((int)(local_8[0] ^ local_c) < 0) {
          return CONCAT44(local_c,local_8[0]);
        }
        return CONCAT44(local_c,DAT_4a172724);
      }
      if (uVar3 == 0xff000000) {
        return CONCAT44(local_c,local_8[0]);
      }
      return CONCAT44(local_c,local_c) ^ 0x80000000;
    }
LAB_4a171b9c:
    uVar5 = uVar5 & 0xf;
    if (uVar5 == 9) {
      return (ulonglong)local_c << 0x20;
    }
    if (uVar5 != 10) {
      if (uVar5 == 8) {
        return CONCAT44(local_c,local_c & 0xff000000 |
                                DAT_4a171ba4 >> 0x1d | (local_c & 0xffffff) << 3);
      }
      return CONCAT44(local_c,DAT_4a171ba4);
    }
    return CONCAT44(local_c,DAT_4a171ba4);
  }
  iVar1 = local_8[0] - local_c;
  if (local_8[0] < local_c) {
    local_8[0] = local_8[0] - iVar1;
    local_c = local_c + iVar1;
  }
  uVar3 = local_8[0] >> 0x17;
  uVar5 = uVar3 - (local_c >> 0x17);
  if ((local_c & 0x7f800000) == 0 || (uVar3 & 0xff) == 0xff) {
    if ((uVar3 & 0xff) != 0xff) {
      if ((local_8[0] & 0x7f800000) == 0) {
        local_8[0] = local_8[0] & 0x80000000;
      }
      return CONCAT44(local_c,local_8[0]);
    }
    uVar3 = local_8[0] * 2;
    uVar5 = 0x4000001;
    if (local_c << 1 < 0xff000001 && uVar3 < 0xff000001) {
      if (uVar3 == local_c * 2) {
        if (-1 < (int)(local_8[0] ^ local_c)) {
          return CONCAT44(local_c,local_8[0]);
        }
        return CONCAT44(local_c,DAT_4a171b98);
      }
      if (uVar3 == 0xff000000) {
        return CONCAT44(local_c,local_8[0]);
      }
      return CONCAT44(local_c,local_c);
    }
    goto LAB_4a171b9c;
  }
  uVar2 = local_8[0] << 8 | 0x80000000;
  local_c = local_c << 8;
  uVar4 = (local_c | 0x80000000) >> (uVar5 & 0xff);
  uVar6 = uVar2 + uVar4;
  if (CARRY4(uVar2,uVar4)) {
    uVar4 = uVar6 >> 1 | 0x80000000;
    bVar8 = (bool)((byte)(uVar4 >> 7) & 1);
    uVar4 = uVar4 >> 8;
    uVar3 = uVar4 + uVar3 * 0x800000 + (uint)bVar8;
    if (bVar8) {
      uVar4 = uVar6 & 0xff;
    }
    uVar2 = uVar3 * 2;
    if (uVar4 != 0) {
      if (uVar2 < 0xff000000) {
        return CONCAT44(local_c,uVar3) | 0x8000000000000000;
      }
      goto LAB_4a171b0c;
    }
  }
  else {
    bVar8 = (bool)((byte)(uVar6 >> 7) & 1);
    uVar3 = (uVar6 >> 8) + (uVar3 - 1) * 0x800000 + (uint)bVar8;
    if (!bVar8) {
      return CONCAT44(local_c,uVar3) | 0x8000000000000000;
    }
    uVar2 = uVar3 * 2;
    if ((uVar6 & 0x7f) != 0) {
      bVar8 = 0xfeffffff < uVar2;
    }
    if (!bVar8) {
      return CONCAT44(local_c,uVar3) | 0x8000000000000000;
    }
  }
  iVar1 = (local_c | 0x80000000) << (0x20 - uVar5 & 0xff);
  if (iVar1 == 0) {
    uVar3 = uVar3 & 0xfffffffe;
  }
  if (uVar2 < 0xff000000) {
    return CONCAT44(iVar1,uVar3);
  }
LAB_4a171b0c:
  uVar3 = uVar3 + 0xa0000000 >> 0x17;
  return CONCAT44(uVar3,(uVar3 | 0xff) << 0x17) | 0xff00000000;
}



// Address: 4a002f08

/* WARNING: Removing unreachable block (ram,0x4a1729d8) */
/* WARNING: Removing unreachable block (ram,0x4a1729ec) */
/* WARNING: Removing unreachable block (ram,0x4a1728ac) */
/* WARNING: Removing unreachable block (ram,0x4a1728a8) */
/* WARNING: Removing unreachable block (ram,0x4a1728b0) */
/* WARNING: Removing unreachable block (ram,0x4a17287c) */
/* WARNING: Removing unreachable block (ram,0x4a172894) */
/* WARNING: Removing unreachable block (ram,0x4a172898) */
/* WARNING: Removing unreachable block (ram,0x4a17289c) */
/* WARNING: Removing unreachable block (ram,0x4a1728b4) */
/* WARNING: Removing unreachable block (ram,0x4a1728bc) */
/* WARNING: Removing unreachable block (ram,0x4a1728d0) */
/* WARNING: Removing unreachable block (ram,0x4a1729d0) */
/* WARNING: Removing unreachable block (ram,0x4a172a04) */
/* WARNING: Removing unreachable block (ram,0x4a1729e0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_4a002f08(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint local_18;
  uint local_14;
  uint local_10;
  
  local_10 = param_4;
  local_14 = param_3;
  local_18 = param_2;
  uVar3 = (param_1 & 0x7fffffff) >> 0x17;
  uVar7 = 0x72 < uVar3;
  bVar8 = SBORROW4(uVar3,0x73);
  if ((bool)uVar7) {
    if ((~((int)param_1 >> 0x17) & 0xffU) == 0) {
      if ((param_1 & 0x7fffff) != 0) {
        uVar3 = param_1 >> 0x17 & 0xff;
        bVar5 = uVar3 == 0;
        if (!bVar5) {
          param_4 = uVar3 ^ 0xff;
          bVar5 = param_4 == 0;
        }
        bVar6 = bVar5;
        if (!bVar5) {
          bVar8 = SBORROW4(param_4,1);
          bVar6 = param_4 == 1;
        }
        bVar4 = !bVar5 && (int)(param_4 - 1) < 0;
        bVar5 = bVar4 == bVar8;
        bVar1 = !bVar6;
        if (bVar1 && bVar5) {
          bVar8 = SCARRY4(uVar3,1);
          bVar6 = uVar3 == 0xffffffff;
        }
        if (!bVar6 && ((!bVar1 || !bVar5) && bVar4) == bVar8) {
          return CONCAT44(1,param_1 + 0x800000);
        }
        if (uVar3 == 0) {
          return CONCAT44(1,param_1) & 0xffffffff80000000;
        }
        if (param_4 == 0) {
          if ((param_1 & 0x7fffff) == 0) {
            return CONCAT44(1,param_1);
          }
          return CONCAT44(1,DAT_4a171bb0);
        }
        return CONCAT44(1,param_1 & 0x80000000 | 0x7f800000);
      }
      thunk_FUN_4a003182(1);
      param_1 = DAT_4a002fdc;
    }
    else {
      uVar3 = FUN_4a004300(param_1,&local_10);
      FUN_4a1720a0(local_10,0);
      if (!(bool)uVar7) {
        local_10 = local_10 ^ 0x80000000;
      }
      FUN_4a00463c(local_10,&local_14,&local_18);
      if (!(bool)uVar7) {
        local_14 = local_14 ^ 0x80000000;
      }
      uVar3 = uVar3 & 3;
      param_1 = local_18;
      if ((uVar3 != 1) &&
         ((uVar2 = local_14, uVar3 == 2 || (uVar2 = local_18, param_1 = local_14, uVar3 == 3)))) {
        param_1 = uVar2 ^ 0x80000000;
      }
    }
  }
  return CONCAT44(local_18,param_1);
}



// Address: 4a002fe0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_4a002fe0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  uint local_18;
  uint local_14;
  uint local_10;
  
  local_10 = param_4;
  local_14 = param_3;
  local_18 = param_2;
  uVar7 = (param_1 & 0x7fffffff) >> 0x17;
  uVar14 = 0x72 < uVar7;
  bVar15 = SBORROW4(uVar7,0x73);
  if ((bool)uVar14) {
    if ((~((int)param_1 >> 0x17) & 0xffU) == 0) {
      if ((param_1 & 0x7fffff) != 0) {
        local_18 = 1;
        uVar7 = param_1 >> 0x17 & 0xff;
        bVar12 = uVar7 == 0;
        if (!bVar12) {
          param_4 = uVar7 ^ 0xff;
          bVar12 = param_4 == 0;
        }
        bVar13 = bVar12;
        if (!bVar12) {
          bVar15 = SBORROW4(param_4,1);
          bVar13 = param_4 == 1;
        }
        bVar11 = !bVar12 && (int)(param_4 - 1) < 0;
        bVar12 = bVar11 == bVar15;
        bVar1 = !bVar13;
        if (bVar1 && bVar12) {
          bVar15 = SCARRY4(uVar7,1);
          bVar13 = uVar7 == 0xffffffff;
        }
        if (!bVar13 && ((!bVar1 || !bVar12) && bVar11) == bVar15) {
          return CONCAT44(1,param_1 + 0x800000);
        }
        if (uVar7 == 0) {
          return CONCAT44(1,param_1) & 0xffffffff80000000;
        }
        if (param_4 != 0) {
          return CONCAT44(1,param_1 & 0x80000000 | 0x7f800000);
        }
        uVar2 = 0xb;
        uVar4 = DAT_4a171bb0;
        if ((param_1 & 0x7fffff) == 0) {
          return CONCAT44(1,param_1);
        }
LAB_4a172874:
        uVar7 = uVar2 & 0xf;
        if (uVar7 == 9) {
          if ((uVar2 & 0x100000) == 0) {
            return (ulonglong)local_18 << 0x20;
          }
          if ((uVar2 & 0x70000) != 0) {
            return CONCAT44(~(uVar2 << 0xf) << 1,8);
          }
          return CONCAT44(local_18,0x30000000);
        }
        if (uVar7 == 10) {
          if ((uVar2 & 0x40) != 0) {
            uVar4 = 0x80000000;
          }
          return CONCAT44(local_18,uVar4);
        }
        if (uVar7 != 8) {
          return CONCAT44(local_18,uVar4);
        }
        if ((uVar2 & 0x40) != 0) {
          return 0;
        }
        if ((uVar2 & 0x10) != 0) {
          return CONCAT44(uVar4 & 0xff000000 | (uVar4 & 0xfffffff) >> 3,uVar4 << 0x1d);
        }
        return CONCAT44(local_18,local_18 & 0xff000000 | uVar4 >> 0x1d | (local_18 & 0xffffff) << 3)
        ;
      }
      thunk_FUN_4a003182(1);
      param_1 = DAT_4a0030ac;
    }
    else {
      uVar7 = FUN_4a004300(param_1,&local_10);
      FUN_4a1720a0(local_10,0);
      if (!(bool)uVar14) {
        local_10 = local_10 ^ 0x80000000;
      }
      FUN_4a00463c(local_10,&local_14,&local_18);
      if (!(bool)uVar14) {
        local_14 = local_14 ^ 0x80000000;
      }
      if ((uVar7 & 1) != 1) {
        uVar7 = local_14 >> 7 & 0xff0000;
        bVar15 = uVar7 == 0;
        if (!bVar15) {
          param_4 = local_18 >> 7 & 0xff0000;
          bVar15 = param_4 == 0;
        }
        if (!bVar15) {
          bVar15 = uVar7 == 0xff0000;
        }
        if (!bVar15) {
          bVar15 = param_4 == 0xff0000;
        }
        if (!bVar15) {
          if ((int)(local_14 ^ local_18) < 0) {
            uVar7 = uVar7 | 0x100;
          }
          uVar5 = local_14 & 0xffffff | 0x800000;
          uVar2 = local_18 & 0xffffff | 0x800000;
          uVar8 = (uint)*(byte *)(0x4a171d28 - (uVar2 >> 0x11));
          bVar15 = uVar2 <= uVar5;
          uVar4 = -uVar2;
          iVar9 = uVar8 * 2;
          if (!bVar15) {
            uVar5 = uVar5 << 1;
          }
          uVar6 = (uVar7 - param_4) + 0x7d0000;
          iVar9 = uVar8 * 0x100 + (((int)(uVar4 * iVar9) >> 4) * iVar9 >> 0x15);
          uVar7 = iVar9 * (uVar5 >> 8) >> 0x14;
          uVar8 = uVar4 * uVar7 + uVar5 * 0x800;
          uVar10 = uVar6 & 0x100;
          uVar6 = uVar6 + ((int)uVar6 >> 0x10) + (uint)bVar15;
          uVar5 = iVar9 * (uVar8 >> 8) >> 0x13;
          uVar8 = uVar4 * uVar5 + uVar8 * 0x1000;
          bVar15 = CARRY4(uVar8,uVar4);
          if (bVar15) {
            uVar8 = uVar8 + uVar4;
          }
          if (uVar8 != 0) {
            uVar10 = uVar10 | 0x40000002;
          }
          bVar12 = CARRY4(uVar4,uVar8 * 2);
          bVar13 = uVar8 * 2 == uVar2;
          if (bVar12) {
            uVar10 = uVar10 | 0x40000001;
          }
          if (bVar13) {
            uVar10 = uVar10 | 4;
          }
          uVar7 = uVar5 + uVar7 * 0x1000 + (uint)bVar15 + uVar6 * 0x800000 + (uint)bVar12;
          if (!bVar13) {
            bVar12 = 0xfbffff < uVar6;
          }
          if (!bVar12) {
            return CONCAT44(uVar10,uVar7) | 0x800000000;
          }
          uVar5 = uVar10 | 8 | uVar7 * -0x80000000;
          if (bVar13 || uVar6 == 0xfc0000) {
            uVar7 = uVar7 & 0xfffffffe;
          }
          if (uVar6 < 0xfc0000) {
            return CONCAT44(uVar5,uVar7);
          }
          if ((int)(uVar6 - 0xfc0000) < 0) {
            if ((uVar6 & 0xf0) != 0) {
              uVar7 = uVar7 + 0x60000000 & 0x80000000;
            }
            return CONCAT44(uVar5,uVar7);
          }
          if (0xfdffffff < uVar7 * 2 + 0x1000000) {
            return CONCAT44(uVar5,uVar7);
          }
          if ((int)(uVar7 + 0xa0000000) < 0) {
            uVar3 = 0xff800000;
          }
          else {
            uVar3 = 0x7f800000;
          }
          return CONCAT44(uVar5,uVar3);
        }
        if ((int)(local_14 ^ local_18) < 0) {
          uVar7 = uVar7 | 0x100;
        }
        uVar5 = local_18 >> 7 & 0xff0000;
        if (uVar7 < 0xff0000 && uVar5 < 0xff0000) {
          if (uVar5 != 0) {
            return CONCAT44(local_18,local_14 ^ local_18) & 0xffffffff80000000;
          }
          if ((uVar7 & 0xff0000) == 0) {
            return CONCAT44(local_18,DAT_4a171d98);
          }
          return CONCAT44(local_18,(uVar7 | 0xff) << 0x17);
        }
        uVar5 = local_14 * 2;
        if (uVar5 < 0xff000001) {
          uVar5 = local_18 * 2;
        }
        uVar4 = DAT_4a171ba4;
        uVar2 = DAT_4a171d94;
        if (uVar5 < 0xff000001) {
          if ((local_14 & 0x7fffffff) == 0x7f800000 && (local_18 & 0x7fffffff) == 0x7f800000) {
            return CONCAT44(local_18,DAT_4a171d98);
          }
          if ((local_18 & 0x7fffffff) == 0x7f800000) {
            local_14 = 0;
          }
          else {
            local_14 = local_14 & 0x7fffffff;
          }
          return CONCAT44(local_18,local_14 | uVar7 << 0x17);
        }
        goto LAB_4a172874;
      }
      param_1 = FUN_4a171bb8(local_18,local_14);
      param_1 = param_1 ^ 0x80000000;
    }
  }
  return CONCAT44(local_18,param_1);
}



// Address: 4a0030fc

void FUN_4a0030fc(undefined4 param_1)

{
  thunk_FUN_4a0018cc(param_1);
  host_s3eDeviceExit_thumb(param_1);
  return;
}



// Address: 4a003120

int FUN_4a003120(void)

{
  int iVar1;
  
  iVar1 = FUN_4a003144();
  return iVar1 + 4;
}



// Address: 4a003144

undefined * FUN_4a003144(void)

{
  return PTR_DAT_4a003150;
}



// Address: 4a003158

undefined * FUN_4a003158(void)

{
  return PTR_DAT_4a003164;
}



// Address: 4a003168

undefined4 FUN_4a003168(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a0007f8();
  return *puVar1;
}



// Address: 4a003182

void FUN_4a003182(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a0007f8();
  *puVar1 = param_1;
  return;
}



// Address: 4a003192

void FUN_4a003192(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x34);
  uVar2 = 0x30;
  if (-1 < (int)(*(uint *)(param_1 + 0x18) << 0x1b)) {
    uVar2 = 0x20;
  }
  if ((*(uint *)(param_1 + 0x18) & 1) == 0) {
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      FUN_4a1652c8(uVar2,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x1c));
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    }
  }
  return;
}



// Address: 4a0031c2

void FUN_4a0031c2(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if ((*(uint *)(param_1 + 0x18) & 1) != 0) {
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      FUN_4a1652c8(0x20,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x1c));
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    }
  }
  return;
}



// Address: 4a0031e6

int FUN_4a0031e6(int param_1,int param_2)

{
  if (*(int *)(param_2 + 0x18) << 0x15 < 0) {
    param_1 = (int)(char)param_1;
  }
  else if (*(int *)(param_2 + 0x18) << 0x17 < 0) {
    return (int)(short)param_1;
  }
  return param_1;
}



// Address: 4a0031fc

uint FUN_4a0031fc(uint param_1,int param_2)

{
  if (*(int *)(param_2 + 0x18) << 0x15 < 0) {
    param_1 = param_1 & 0xff;
  }
  else if (*(int *)(param_2 + 0x18) << 0x17 < 0) {
    return param_1 & 0xffff;
  }
  return param_1;
}



// Address: 4a003212

void FUN_4a003212(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) << 0x1a < 0) {
    for (iVar1 = 0;
        (iVar1 < *(int *)(param_1 + 0x38) &&
        ((iVar1 < param_3 || (*(char *)(param_2 + iVar1) != '\0')))); iVar1 = iVar1 + 1) {
    }
  }
  else {
    for (iVar1 = 0; (iVar1 < param_3 || (*(char *)(param_2 + iVar1) != '\0')); iVar1 = iVar1 + 1) {
    }
  }
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - iVar1;
  FUN_4a003192(param_1);
  FUN_4a1652ca(param_1,param_2,param_2 + iVar1,*(undefined4 *)(param_1 + 0x20));
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + iVar1;
  FUN_4a0031c2(param_1);
  return;
}



// Address: 4a003270

void FUN_4a003270(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 local_34 [8];
  undefined4 local_2c;
  undefined4 uStack_28;
  int local_24;
  int iStack_20;
  int local_1c;
  int iStack_18;
  
  local_2c = *(undefined4 *)(DAT_4a003330 + 0x4a00327e);
  uStack_28 = *(undefined4 *)(DAT_4a003330 + 0x4a003282);
  iVar5 = 0;
  iVar4 = 0;
  iStack_20 = param_1;
  local_1c = param_2;
  iStack_18 = param_3;
  do {
    if (((*(int *)(param_1 + 0x18) << 0x1a < 0) && (*(int *)(param_1 + 0x38) <= iVar5)) ||
       ((param_3 <= iVar4 && (*(short *)(local_1c + iVar4 * 2) == 0)))) goto LAB_4a0032c6;
    iVar1 = FUN_4a003e04(local_34,*(undefined2 *)(local_1c + iVar4 * 2),&local_2c);
    if (iVar1 != -1) {
      if ((*(int *)(param_1 + 0x18) << 0x1a < 0) &&
         (*(uint *)(param_1 + 0x38) < (uint)(iVar5 + iVar1))) {
LAB_4a0032c6:
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - iVar5;
        FUN_4a003192(param_1);
        local_2c = *(undefined4 *)(DAT_4a003330 + 0x4a00327e);
        uStack_28 = *(undefined4 *)(DAT_4a003330 + 0x4a003282);
        for (local_24 = 0; local_24 < iVar4; local_24 = local_24 + 1) {
          uVar2 = FUN_4a003e04(local_34,*(undefined2 *)(local_1c + local_24 * 2),&local_2c);
          if (uVar2 != 0xffffffff) {
            for (uVar3 = 0; uVar3 < uVar2; uVar3 = uVar3 + 1) {
              FUN_4a1652c8(local_34[uVar3],*(undefined4 *)(param_1 + 0x24),
                           *(undefined4 *)(param_1 + 0x1c));
            }
          }
        }
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + iVar5;
        FUN_4a0031c2(param_1);
        return;
      }
      iVar5 = iVar5 + iVar1;
    }
    iVar4 = iVar4 + 1;
  } while( true );
}



// Address: 4a003334

void FUN_4a003334(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 local_50;
  undefined1 local_4c [32];
  int local_2c;
  int local_28;
  int iStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  local_2c = DAT_4a0033ec + 0x4a003344;
  if (param_2 != 0x58) {
    local_2c = DAT_4a0033ec + 0x4a003333;
  }
  local_28 = param_1;
  iStack_24 = param_2;
  uStack_20 = param_3;
  uStack_1c = param_4;
  if (-1 < *(int *)(param_1 + 0x18) << 0x18) {
    param_3 = FUN_4a0031fc(param_3,param_1);
    param_4 = 0;
  }
  local_50 = 0;
  puVar3 = (undefined *)0x4a0033f0;
  if ((int)(*(uint *)(local_28 + 0x18) << 0x1c) < 0) {
    if (param_2 != 0x70) {
      if (param_3 != 0 || param_4 != 0) {
        puVar3 = (undefined *)0x4a0033f8;
        if (param_2 != 0x78) {
          puVar3 = (undefined *)0x4a0033fc;
        }
        local_50 = 2;
      }
      goto LAB_4a0033aa;
    }
    puVar3 = &DAT_4a0033f4;
    local_50 = 1;
  }
  else if (param_2 != 0x70) goto LAB_4a0033aa;
  *(uint *)(local_28 + 0x18) = *(uint *)(local_28 + 0x18) | 0x20;
  *(undefined4 *)(local_28 + 0x38) = 8;
LAB_4a0033aa:
  iVar2 = 0;
  for (; param_3 != 0 || param_4 != 0; param_3 = param_3 >> 4 | uVar1) {
    local_4c[iVar2] = *(undefined1 *)(local_2c + (param_3 & 0xf));
    uVar1 = param_4 << 0x1c;
    iVar2 = iVar2 + 1;
    param_4 = param_4 >> 4;
  }
  FUN_4a004b38(local_28,local_4c,iVar2,puVar3,local_50);
  return;
}



// Address: 4a003400

void FUN_4a003400(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 local_3c;
  char local_38 [32];
  undefined *local_18;
  
  if (-1 < *(int *)(param_1 + 0x18) << 0x18) {
    param_3 = FUN_4a0031fc(param_3,param_1);
    param_4 = 0;
  }
  local_18 = &DAT_4a00348c;
  local_3c = 0;
  if ((*(int *)(param_1 + 0x18) << 0x1c < 0) &&
     ((*(int *)(param_1 + 0x18) << 0x1a < 0 || (param_3 != 0 || param_4 != 0)))) {
    local_18 = &DAT_4a003490;
    local_3c = 1;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
  }
  iVar2 = 0;
  for (; param_3 != 0 || param_4 != 0; param_3 = param_3 >> 3 | uVar1) {
    local_38[iVar2] = ((byte)param_3 & 7) + 0x30;
    uVar1 = param_4 << 0x1d;
    iVar2 = iVar2 + 1;
    param_4 = param_4 >> 3;
  }
  FUN_4a004b38(param_1,local_38,iVar2,local_18,local_3c);
  return;
}



// Address: 4a003494

void FUN_4a003494(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char extraout_r1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  char local_40 [32];
  int local_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  uVar4 = 0;
  puVar3 = (undefined *)0x4a0034f8;
  local_20 = param_1;
  iStack_1c = param_2;
  uStack_18 = param_3;
  if (param_2 == 0x75) {
    iVar1 = FUN_4a0031fc(param_3,param_1);
  }
  else {
    iVar1 = FUN_4a0031e6();
    if (iVar1 < 0) {
      iVar1 = -iVar1;
      puVar3 = &DAT_4a0034fc;
    }
    else if (*(int *)(local_20 + 0x18) << 0x1e < 0) {
      puVar3 = (undefined *)0x4a003500;
    }
    else {
      if (-1 < *(int *)(local_20 + 0x18) << 0x1d) goto LAB_4a0034cc;
      puVar3 = (undefined *)0x4a003504;
    }
    uVar4 = 1;
  }
LAB_4a0034cc:
  iVar2 = 0;
  while (iVar1 != 0) {
    iVar1 = thunk_FUN_4a005bfc();
    local_40[iVar2] = extraout_r1 + '0';
    iVar2 = iVar2 + 1;
  }
  FUN_4a004b38(local_20,local_40,iVar2,puVar3,uVar4);
  return;
}



// Address: 4a003508

void FUN_4a003508(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  longlong lVar5;
  undefined4 local_4c;
  undefined1 local_48 [32];
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  puVar3 = (undefined *)0x4a003584;
  local_4c = 0;
  iVar1 = param_3;
  iVar2 = param_3;
  iVar4 = param_4;
  if (param_2 != 0x75) {
    if (param_4 < 0) {
      puVar3 = &DAT_4a003588;
      iVar1 = -(uint)(param_3 != 0);
      iVar2 = -param_3;
      iVar4 = -(uint)(param_3 != 0) - param_4;
    }
    else if (*(int *)(param_1 + 0x18) << 0x1e < 0) {
      puVar3 = (undefined *)0x4a00358c;
    }
    else {
      if (-1 < *(int *)(param_1 + 0x18) << 0x1d) goto LAB_4a003546;
      puVar3 = (undefined *)0x4a003590;
    }
    local_4c = 1;
  }
LAB_4a003546:
  lVar5 = CONCAT44(iVar4,iVar2);
  iVar2 = 0;
  local_28 = param_1;
  iStack_24 = param_2;
  iStack_20 = param_3;
  iStack_1c = param_4;
  while (lVar5 != 0) {
    lVar5 = thunk_FUN_4a0047b0((int)lVar5,(int)((ulonglong)lVar5 >> 0x20));
    iVar1 = iVar1 + 0x30;
    local_48[iVar2] = (char)iVar1;
    iVar2 = iVar2 + 1;
  }
  FUN_4a004b38(local_28,local_48,iVar2,puVar3,local_4c);
  return;
}



// Address: 4a003594

void FUN_4a003594(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar2 << 0x15 < 0) {
    *(char *)param_2 = (char)iVar1;
    return;
  }
  if (iVar2 << 0x17 < 0) {
    *(short *)param_2 = (short)iVar1;
    return;
  }
  if (iVar2 << 0x18 < 0) {
    *param_2 = iVar1;
    param_2[1] = iVar1 >> 0x1f;
    return;
  }
  *param_2 = iVar1;
  return;
}



// Address: 4a0035b8

void FUN_4a0035b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_58 [28];
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  local_2c = &uStack_14;
  local_38 = DAT_4a0035e4 + 0x4a0035ca;
  local_28 = 0;
  local_30 = DAT_4a0035e8 + 0x4a0035d4;
  local_3c = param_2;
  local_34 = param_3;
  uStack_14 = param_1;
  uStack_10 = param_2;
  uStack_c = param_3;
  uStack_8 = param_4;
  FUN_4a004850(auStack_58,param_4);
  return;
}



// Address: 4a0035ec

void FUN_4a0035ec(undefined1 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_2;
  *puVar1 = param_1;
  *param_2 = puVar1 + 1;
  return;
}



// Address: 4a003654

void FUN_4a003654(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 uStack_10;
  int local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_38 = &uStack_8;
  *(undefined4 *)(param_2 + 0xc) = 0;
  local_20 = DAT_4a0036f8 + 0x4a00366e;
  local_1c = DAT_4a0036fc + 0x4a003674;
  local_34 = 4;
  local_30 = DAT_4a003700;
  local_18 = DAT_4a003704 + 0x4a003682;
  uStack_10 = param_1;
  local_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  thunk_FUN_4a005872(0,param_2,param_1,&local_38);
  return;
}



// Address: 4a003694

void FUN_4a003694(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int local_24;
  int local_20;
  int iStack_1c;
  undefined1 auStack_18 [4];
  int local_14;
  
  local_20 = 0xffffffff;
  local_14 = 0;
  local_24 = param_2;
  iStack_1c = param_2;
  iVar1 = FUN_4a003654(&local_14,&local_24,param_1);
  local_20 = param_2 + local_14;
  if (param_3 != (int *)0x0) {
    iVar2 = local_20;
    if (local_14 == 0) {
      iVar2 = param_2;
    }
    *param_3 = iVar2;
  }
  if ((local_14 != 0) && ((iVar1 < 1 || (local_24 != local_20)))) {
    local_20 = local_20 - param_2;
    local_24 = param_2;
    iStack_1c = param_2;
    FUN_4a003654(&local_14,&local_24,param_1,auStack_18);
  }
  return;
}



// Address: 4a003714

void FUN_4a003714(undefined4 param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_3 + 0xc) = param_2;
  *(int *)(param_3 + 0x14) = DAT_4a00373c + 0x4a003726;
  *(int *)(param_3 + 0x20) = DAT_4a003740 + 0x4a00372c;
  *(undefined4 *)(param_3 + 0x10) = 0;
  FUN_4a005274();
  return;
}



// Address: 4a003744

int FUN_4a003744(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_2c;
  int local_28;
  int local_1c;
  
  uVar4 = param_4[1];
  local_28 = 0;
  iVar6 = param_4[2];
  iVar8 = -1;
  do {
    iVar7 = iVar8;
    iVar8 = iVar7 + 1;
    local_2c = FUN_4a1652c6(param_2,param_4[6]);
    iVar1 = FUN_4a1652c6(local_2c,param_4[8]);
  } while (iVar1 != 0);
  if (local_2c == -1) {
    return -1;
  }
  uVar5 = uVar4 & 0xfffff9ff;
  iVar1 = iVar6;
  iVar9 = iVar8;
  local_1c = param_3;
  if (0 < iVar6) {
    if ((int)(uVar4 << 0x19) < 0) {
      if (local_2c != 0x2b) {
        if (local_2c != 0x2d) goto LAB_4a0037b0;
        uVar5 = uVar5 | 0x400;
      }
      iVar8 = iVar7 + 2;
      local_2c = FUN_4a1652c6(param_2,param_4[6]);
      iVar6 = iVar6 + -1;
      iVar1 = iVar6;
      iVar9 = iVar8;
      if (iVar6 < 1) goto LAB_4a00380a;
    }
LAB_4a0037b0:
    iVar1 = iVar6;
    iVar9 = iVar8;
    if (local_2c == 0x30) {
      uVar4 = uVar5 | 0x200;
      iVar1 = iVar6 + -1;
      iVar9 = iVar8 + 1;
      local_2c = FUN_4a1652c6(param_2,param_4[6]);
      if ((iVar1 < 1) || ((local_2c != 0x78 && (local_2c != 0x58)))) {
        if (param_3 == 0) {
          local_1c = 8;
        }
      }
      else if ((param_3 == 0) || (param_3 == 0x10)) {
        iVar1 = iVar6 + -2;
        iVar9 = iVar8 + 2;
        local_2c = FUN_4a1652c6(param_2,param_4[6]);
        local_1c = 0x10;
        uVar4 = uVar5;
      }
      goto LAB_4a003832;
    }
  }
LAB_4a00380a:
  uVar4 = uVar5;
  if (param_3 == 0) {
    local_1c = 10;
  }
LAB_4a003832:
  while ((0 < iVar1 && (iVar8 = FUN_4a005250(local_2c,local_1c), -1 < iVar8))) {
    iVar1 = iVar1 + -1;
    iVar9 = iVar9 + 1;
    local_28 = local_1c * local_28 + iVar8;
    local_2c = FUN_4a1652c6(param_2,param_4[6]);
    uVar4 = uVar4 | 0x200;
  }
  FUN_4a1652c6(param_2,param_4[7]);
  if ((int)(uVar4 << 0x16) < 0) {
    if ((uVar4 & 1) == 0) {
      if ((int)(uVar4 << 0x19) < 0) {
        iVar8 = -local_28;
        if (-1 < (int)(uVar4 << 0x15)) {
          iVar8 = local_28;
        }
        puVar2 = (undefined4 *)*param_4;
        *param_4 = puVar2 + 1;
        piVar3 = (int *)*puVar2;
        if ((int)(uVar4 << 0x14) < 0) {
          *(char *)piVar3 = (char)iVar8;
        }
        else if ((int)(uVar4 << 0x1c) < 0) {
          *(short *)piVar3 = (short)iVar8;
        }
        else {
          *piVar3 = iVar8;
        }
      }
      else {
        puVar2 = (undefined4 *)*param_4;
        *param_4 = puVar2 + 1;
        piVar3 = (int *)*puVar2;
        if ((int)(uVar4 << 0x14) < 0) {
          *(char *)piVar3 = (char)local_28;
        }
        else if ((int)(uVar4 << 0x1c) < 0) {
          *(short *)piVar3 = (short)local_28;
        }
        else {
          *piVar3 = local_28;
        }
      }
    }
  }
  else {
    iVar9 = -2;
  }
  return iVar9;
}



// Address: 4a0038a4

int FUN_4a0038a4(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  int local_2c;
  
  uVar1 = param_3[1];
  puVar6 = (undefined1 *)0x0;
  local_2c = param_3[2];
  iVar5 = 0;
  iVar2 = FUN_4a1652c6(param_2,param_3[6]);
  if (param_4 == 0 && param_5 == 0) {
    while (iVar3 = FUN_4a1652c6(iVar2,param_3[8]), iVar3 != 0) {
      iVar5 = iVar5 + 1;
      iVar2 = FUN_4a1652c6(param_2,param_3[6]);
    }
  }
  if (iVar2 == -1) {
    iVar2 = -1;
  }
  else {
    if ((uVar1 & 1) == 0) {
      puVar4 = (undefined4 *)*param_3;
      *param_3 = puVar4 + 1;
      puVar6 = (undefined1 *)*puVar4;
    }
    while ((0 < local_2c && (iVar2 != -1))) {
      if (param_4 == 0) {
        if ((param_5 == 0) && (iVar3 = FUN_4a1652c6(iVar2,param_3[8]), iVar3 != 0)) break;
      }
      else if ((*(uint *)(((int)(((uint)(iVar2 >> 0x1f) >> 0x1b) + iVar2) >> 5) * 4 + param_4) &
               1 << (iVar2 % 0x20 & 0xffU)) == 0) break;
      if ((uVar1 & 1) == 0) {
        *puVar6 = (char)iVar2;
        puVar6 = puVar6 + 1;
      }
      iVar5 = iVar5 + 1;
      local_2c = local_2c + -1;
      iVar2 = FUN_4a1652c6(param_2,param_3[6]);
    }
    FUN_4a1652c6(param_2,param_3[7]);
    if ((uVar1 & 1) == 0 && param_5 == 0) {
      *puVar6 = 0;
    }
    iVar2 = -2;
    if ((local_2c < (int)param_3[2]) && ((param_5 == 0 || (local_2c == 0)))) {
      iVar2 = iVar5;
    }
  }
  return iVar2;
}



// Address: 4a003994

int FUN_4a003994(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 local_3c [2];
  undefined4 local_38;
  undefined4 uStack_34;
  int local_30;
  int local_2c;
  uint local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 *puStack_1c;
  int local_18;
  
  local_28 = param_3[1];
  puVar5 = (undefined2 *)0x0;
  local_2c = param_3[2];
  local_30 = 0;
  local_38 = 0;
  uStack_34 = 0;
  iVar4 = 0;
  uStack_24 = param_1;
  local_20 = param_2;
  puStack_1c = param_3;
  local_18 = param_4;
  uVar1 = FUN_4a1652c6(param_2,param_3[6]);
  if (local_18 == 0 && param_5 == 0) {
    while (iVar2 = FUN_4a1652c6(uVar1,param_3[8]), iVar2 != 0) {
      iVar4 = iVar4 + 1;
      uVar1 = FUN_4a1652c6(local_20,param_3[6]);
    }
  }
  if (uVar1 == 0xffffffff) {
    iVar2 = -1;
  }
  else {
    if ((local_28 & 1) == 0) {
      puVar3 = (undefined4 *)*param_3;
      *param_3 = puVar3 + 1;
      puVar5 = (undefined2 *)*puVar3;
    }
    while ((0 < local_2c && (uVar1 != 0xffffffff))) {
      if (local_18 == 0) {
        if ((param_5 == 0) && (iVar2 = FUN_4a1652c6(uVar1,param_3[8]), iVar2 != 0)) break;
      }
      else if ((*(uint *)(((int)(((uint)((int)uVar1 >> 0x1f) >> 0x1b) + uVar1) >> 5) * 4 + local_18)
               & 1 << ((int)uVar1 % 0x20 & 0xffU)) == 0) break;
      iVar2 = FUN_4a005b4e(local_3c,uVar1 & 0xff,&local_38);
      if (iVar2 == -1) {
        FUN_4a1652c6(local_20,param_3[7]);
        goto LAB_4a003a96;
      }
      if (iVar2 == -2) {
        local_30 = 1;
      }
      else {
        local_30 = 0;
        if ((local_28 & 1) == 0) {
          *puVar5 = local_3c[0];
          puVar5 = puVar5 + 1;
        }
        local_2c = local_2c + -1;
      }
      iVar4 = iVar4 + 1;
      uVar1 = FUN_4a1652c6(local_20,param_3[6]);
    }
    FUN_4a1652c6(local_20,param_3[7]);
    if (local_30 == 0) {
      if ((local_28 & 1) == 0 && param_5 == 0) {
        *puVar5 = 0;
      }
      iVar2 = -2;
      if ((local_2c < (int)param_3[2]) && ((param_5 == 0 || (local_2c == 0)))) {
        iVar2 = iVar4;
      }
    }
    else {
LAB_4a003a96:
      iVar2 = -2;
    }
  }
  return iVar2;
}



// Address: 4a003ac6

int FUN_4a003ac6(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4,
                undefined4 param_5,undefined4 param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 local_34;
  undefined4 uStack_30;
  uint local_2c;
  undefined1 *local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 *puStack_1c;
  int local_18;
  
  local_28 = (undefined1 *)0x0;
  local_2c = param_3[1];
  iVar5 = param_3[2];
  local_34 = 0;
  uStack_30 = 0;
  iVar4 = 0;
  uStack_24 = param_1;
  local_20 = param_2;
  puStack_1c = param_3;
  local_18 = param_4;
  uVar1 = FUN_4a1652c6(param_2,param_3[6]);
  if (local_18 == 0 && param_7 == 0) {
    while (iVar2 = FUN_4a1652c6(uVar1,param_3[8]), iVar2 != 0) {
      iVar4 = iVar4 + 1;
      uVar1 = FUN_4a1652c6(local_20,param_3[6]);
    }
  }
  if (uVar1 == 0xffffffff) {
    iVar2 = -1;
  }
  else {
    if ((local_2c & 1) == 0) {
      puVar3 = (undefined4 *)*param_3;
      *param_3 = puVar3 + 1;
      local_28 = (undefined1 *)*puVar3;
    }
    while ((0 < iVar5 && (uVar1 != 0xffffffff))) {
      if (local_18 == 0) {
        if ((param_7 == 0) && (iVar2 = FUN_4a1652c6(uVar1,param_3[8]), iVar2 != 0)) break;
      }
      else {
        iVar2 = FUN_4a005640(local_18,param_5,param_6,uVar1);
        if (iVar2 == 0) break;
      }
      if ((local_2c & 1) == 0) {
        iVar2 = FUN_4a003e04(local_28,uVar1 & 0xffff,&local_34);
        if (iVar2 == -1) {
          return -2;
        }
        local_28 = local_28 + iVar2;
      }
      iVar5 = iVar5 + -1;
      iVar4 = iVar4 + 1;
      uVar1 = FUN_4a1652c6(local_20,param_3[6]);
    }
    FUN_4a1652c6(local_20,param_3[7]);
    if ((local_2c & 1) == 0 && param_7 == 0) {
      *local_28 = 0;
    }
    iVar2 = -2;
    if ((iVar5 < (int)param_3[2]) && ((param_7 == 0 || (iVar5 == 0)))) {
      iVar2 = iVar4;
    }
  }
  return iVar2;
}



// Address: 4a003bc2

int FUN_4a003bc2(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4,
                undefined4 param_5,undefined4 param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  int local_2c;
  
  uVar1 = param_3[1];
  puVar6 = (undefined2 *)0x0;
  local_2c = param_3[2];
  iVar5 = 0;
  iVar2 = FUN_4a1652c6(param_2,param_3[6]);
  if (param_4 == 0 && param_7 == 0) {
    while (iVar3 = FUN_4a1652c6(iVar2,param_3[8]), iVar3 != 0) {
      iVar5 = iVar5 + 1;
      iVar2 = FUN_4a1652c6(param_2,param_3[6]);
    }
  }
  if (iVar2 == -1) {
    iVar2 = -1;
  }
  else {
    if ((uVar1 & 1) == 0) {
      puVar4 = (undefined4 *)*param_3;
      *param_3 = puVar4 + 1;
      puVar6 = (undefined2 *)*puVar4;
    }
    while ((0 < local_2c && (iVar2 != -1))) {
      if (param_4 == 0) {
        if ((param_7 == 0) && (iVar3 = FUN_4a1652c6(iVar2,param_3[8]), iVar3 != 0)) break;
      }
      else {
        iVar3 = FUN_4a005640(param_4,param_5,param_6,iVar2);
        if (iVar3 == 0) break;
      }
      if ((uVar1 & 1) == 0) {
        *puVar6 = (short)iVar2;
        puVar6 = puVar6 + 1;
      }
      iVar5 = iVar5 + 1;
      local_2c = local_2c + -1;
      iVar2 = FUN_4a1652c6(param_2,param_3[6]);
    }
    FUN_4a1652c6(param_2,param_3[7]);
    if ((uVar1 & 1) == 0 && param_7 == 0) {
      *puVar6 = 0;
    }
    iVar2 = -2;
    if ((local_2c < (int)param_3[2]) && ((param_7 == 0 || (local_2c == 0)))) {
      iVar2 = iVar5;
    }
  }
  return iVar2;
}



// Address: 4a003ca4

int FUN_4a003ca4(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int local_34;
  int local_30;
  int local_2c;
  int local_1c;
  
  uVar4 = param_4[1];
  iVar3 = param_4[2];
  iVar7 = -1;
  do {
    iVar6 = iVar7;
    iVar7 = iVar6 + 1;
    local_34 = FUN_4a1652c6(param_2,param_4[6]);
    iVar1 = FUN_4a1652c6(local_34,param_4[8]);
  } while (iVar1 != 0);
  if (local_34 == -1) {
    return -1;
  }
  uVar5 = uVar4 & 0xfffff9ff;
  iVar1 = iVar3;
  iVar8 = iVar7;
  local_1c = param_3;
  if (0 < iVar3) {
    if ((int)(uVar4 << 0x19) < 0) {
      if (local_34 != 0x2b) {
        if (local_34 != 0x2d) goto LAB_4a003d12;
        uVar5 = uVar5 | 0x400;
      }
      iVar7 = iVar6 + 2;
      local_34 = FUN_4a1652c6(param_2,param_4[6]);
      iVar3 = iVar3 + -1;
      iVar1 = iVar3;
      iVar8 = iVar7;
      if (iVar3 < 1) goto LAB_4a003d6a;
    }
LAB_4a003d12:
    iVar1 = iVar3;
    iVar8 = iVar7;
    if (local_34 == 0x30) {
      uVar4 = uVar5 | 0x200;
      iVar1 = iVar3 + -1;
      iVar8 = iVar7 + 1;
      local_34 = FUN_4a1652c6(param_2,param_4[6]);
      if ((iVar1 < 1) || ((local_34 != 0x78 && (local_34 != 0x58)))) {
        lVar9 = 0;
        if (param_3 == 0) {
          local_1c = 8;
          lVar9 = 0;
        }
      }
      else if ((param_3 == 0) || (lVar9 = 0, param_3 == 0x10)) {
        iVar1 = iVar3 + -2;
        iVar8 = iVar7 + 2;
        local_34 = FUN_4a1652c6(param_2,param_4[6]);
        local_1c = 0x10;
        uVar4 = uVar5;
        lVar9 = 0;
      }
      goto LAB_4a003da8;
    }
  }
LAB_4a003d6a:
  uVar4 = uVar5;
  lVar9 = 0;
  if (param_3 == 0) {
    local_1c = 10;
    lVar9 = 0;
  }
LAB_4a003da8:
  while( true ) {
    local_2c = (int)((ulonglong)lVar9 >> 0x20);
    local_30 = (int)lVar9;
    if ((iVar1 < 1) || (iVar7 = FUN_4a005250(local_34,local_1c), iVar7 < 0)) break;
    iVar1 = iVar1 + -1;
    lVar9 = thunk_FUN_4a0008dc(local_1c,local_1c >> 0x1f,local_30,local_2c);
    iVar8 = iVar8 + 1;
    local_34 = FUN_4a1652c6(param_2,param_4[6]);
    uVar4 = uVar4 | 0x200;
    lVar9 = lVar9 + iVar7;
  }
  FUN_4a1652c6(param_2,param_4[7]);
  if ((int)(uVar4 << 0x16) < 0) {
    if ((uVar4 & 1) == 0) {
      if ((int)(uVar4 << 0x19) < 0) {
        if ((int)(uVar4 << 0x15) < 0) {
          lVar9 = CONCAT44(-local_2c - (uint)(local_30 != 0),-local_30);
        }
        puVar2 = (undefined4 *)*param_4;
        *param_4 = puVar2 + 1;
        *(longlong *)*puVar2 = lVar9;
      }
      else {
        puVar2 = (undefined4 *)*param_4;
        *param_4 = puVar2 + 1;
        *(longlong *)*puVar2 = lVar9;
      }
    }
  }
  else {
    iVar8 = -2;
  }
  return iVar8;
}



// Address: 4a003e04

undefined4 FUN_4a003e04(undefined1 *param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)thunk_FUN_4a003120();
  iVar2 = *piVar1;
  if (*(char *)(iVar2 + 0x101) == '\x01') {
    uVar3 = FUN_4a1652ca(param_1,param_2,param_3,iVar2 + *(int *)(iVar2 + 0x107) + 0x107);
  }
  else if ((param_2 < 0x100) && (*(char *)(iVar2 + param_2) != '\0')) {
    uVar3 = 1;
    *param_1 = (char)param_2;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



// Address: 4a003e52

void FUN_4a003e52(undefined4 param_1)

{
  FUN_4a149218(0xc,param_1);
  return;
}



// Address: 4a003e66

int FUN_4a003e66(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_4 != 0) {
    iVar1 = param_4 * param_3 + param_1;
    do {
      iVar1 = iVar1 - param_3;
      FUN_4a1652d0(iVar1);
    } while (param_1 != iVar1);
  }
  return param_1 + -8;
}



// Address: 4a003e8e

/* WARNING: Control flow encountered bad instruction data */

void FUN_4a003e8e(void)

{
  int iVar1;
  
  iVar1 = FUN_4a005c48();
  if (*(int *)(iVar1 + 0x10) == 0) {
    FUN_4a1652c4(*(undefined4 *)(iVar1 + 8));
  }
  else {
    *(undefined4 *)(iVar1 + 0x10) = 0;
    FUN_4a1652c6();
  }
  FUN_4a149ab0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Address: 4a003eb0

/* WARNING: Control flow encountered bad instruction data */

void FUN_4a003eb0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Address: 4a004028

/* WARNING: Removing unreachable block (ram,0x4a1729d8) */
/* WARNING: Removing unreachable block (ram,0x4a1729ec) */
/* WARNING: Removing unreachable block (ram,0x4a1728bc) */
/* WARNING: Removing unreachable block (ram,0x4a1728ac) */
/* WARNING: Removing unreachable block (ram,0x4a1729e0) */
/* WARNING: Removing unreachable block (ram,0x4a17289c) */
/* WARNING: Removing unreachable block (ram,0x4a172158) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_4a004028(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  undefined8 uVar17;
  uint local_20;
  undefined4 uStack_1c;
  uint uStack_18;
  
  uVar2 = DAT_4a0041c0;
  uStack_18 = param_4;
  uStack_1c = param_3;
  puVar10 = &local_20;
  local_20 = param_2;
  uVar6 = param_1 & 0x7fffffff;
  if (uVar6 < 0x33800000) {
    uVar2 = 0x3f800000;
    goto LAB_4a004190;
  }
  if ((param_1 & 0x80000000) == 0) {
    iVar3 = DAT_4a0041c4;
    if (DAT_4a0041c4 <= (int)uVar6) goto LAB_4a004190;
LAB_4a004070:
    bVar14 = SBORROW4(uVar6,iVar3);
    if ((~((int)param_1 >> 0x17) & 0xffU) == 0) {
      uVar6 = 1;
      uVar9 = param_1 >> 0x17 & 0xff;
      bVar15 = uVar9 == 0;
      if (!bVar15) {
        param_4 = uVar9 ^ 0xff;
        bVar15 = param_4 == 0;
      }
      bVar16 = bVar15;
      if (!bVar15) {
        bVar14 = SBORROW4(param_4,1);
        bVar16 = param_4 == 1;
      }
      bVar13 = !bVar15 && (int)(param_4 - 1) < 0;
      bVar15 = bVar13 == bVar14;
      bVar1 = !bVar16;
      if (bVar1 && bVar15) {
        bVar14 = SCARRY4(uVar9,1);
        bVar16 = uVar9 == 0xffffffff;
      }
      if (!bVar16 && ((!bVar1 || !bVar15) && bVar13) == bVar14) {
        return CONCAT44(1,param_1 + 0x800000);
      }
      if (uVar9 == 0) {
        return CONCAT44(1,param_1) & 0xffffffff80000000;
      }
      if (param_4 != 0) {
        return CONCAT44(1,param_1 & 0x80000000 | 0x7f800000);
      }
      uVar8 = 0xb;
      uVar9 = DAT_4a171bb0;
      if ((param_1 & 0x7fffff) == 0) {
        return CONCAT44(1,param_1);
      }
      goto LAB_4a172874;
    }
    uVar17 = FUN_4a171a2c();
    FUN_4a170848((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),DAT_4a0041cc,DAT_4a0041d0);
    iVar3 = FUN_4a171070();
    iVar12 = iVar3 + -0x80;
    uVar4 = FUN_4a171fac(iVar12);
    uVar4 = FUN_4a1724e0(uVar4,param_1);
    FUN_4a006044(uVar4,&uStack_18,&uStack_1c);
    if (iVar12 == 0) {
LAB_4a004168:
      uVar17 = CONCAT44((int)local_20 >> 0x17,local_20);
      if (((int)local_20 >> 0x17 & 0xffU) == 0) goto LAB_4a004178;
    }
    else {
      if (iVar12 < -0x6d) goto LAB_4a004178;
      uVar17 = FUN_4a0015f0(iVar3 + -0x12,10);
      iVar3 = (int)((ulonglong)uVar17 >> 0x20);
      uVar6 = (int)uVar17 - 0xb;
      if (iVar3 != 0) {
        local_20 = FUN_4a17211c(local_20,*(undefined4 *)(DAT_4a0041d4 + iVar3 * 4 + 0x4a0040f4));
      }
      if (uVar6 == 0) goto LAB_4a004168;
      if ((int)uVar6 < 1) {
        if (-0xc < (int)uVar6) {
          local_20 = FUN_4a17211c(local_20,*(undefined4 *)(DAT_4a0041dc + 0x4a004154 + ~uVar6 * 4));
          param_2 = param_2 - 0x24;
          goto LAB_4a004168;
        }
      }
      else if ((int)uVar6 < 9) {
        local_20 = FUN_4a17211c(local_20,*(undefined4 *)(DAT_4a0041d8 + uVar6 * 4 + 0x4a004124));
        param_2 = param_2 + 0x10;
        goto LAB_4a004168;
      }
LAB_4a004178:
      uVar17 = FUN_4a149aa8();
    }
    uVar5 = (uint)uVar17;
    uVar6 = (uint)((ulonglong)uVar17 >> 0x20) & 0xff;
    if (0xfe < (int)(uVar6 + param_2)) goto LAB_4a004190;
    if (-0x19 < (int)(uVar6 - param_2)) {
      uVar6 = param_2 * 0x800000 + 0x3f800000;
      uVar7 = uVar5 >> 7 & 0xff0000;
      bVar14 = uVar7 == 0;
      if (!bVar14) {
        puVar10 = (uint *)(uVar6 >> 7 & 0xff0000);
        bVar14 = puVar10 == (uint *)0x0;
      }
      if (!bVar14) {
        bVar14 = uVar7 == 0xff0000;
      }
      if (!bVar14) {
        bVar14 = puVar10 == (uint *)0xff0000;
      }
      if (!bVar14) {
        if ((int)(uVar5 ^ uVar6) < 0) {
          uVar7 = uVar7 | 0x100;
        }
        iVar3 = uVar6 * 0x100;
        uVar6 = (uint)((ulonglong)(uVar5 << 8 | 0x80000000) * 0x80000000 >> 0x20);
        iVar12 = (int)puVar10 + (uVar7 - 0x800000);
        bVar14 = 0x7fffffff < uVar6;
        if (!bVar14) {
          uVar6 = uVar6 << 1;
        }
        uVar8 = iVar12 + (iVar12 >> 0x10) + (uint)bVar14;
        bVar14 = (bool)((byte)(uVar6 >> 7) & 1);
        uVar9 = uVar6 >> 8;
        if (bVar14) {
          uVar9 = 0;
        }
        uVar6 = (uVar6 >> 8) + uVar8 * 0x800000 + (uint)bVar14;
        if (uVar9 != 0) {
          bVar14 = 0xfbffff < uVar8;
        }
        if (!bVar14) {
          return CONCAT44(iVar3,uVar6) | 0x8000000000000000;
        }
        if (uVar9 == 0 || uVar8 == 0xfc0000) {
          uVar6 = uVar6 & 0xfffffffe;
        }
        if (uVar8 < 0xfc0000) {
          return CONCAT44(iVar3,uVar6) | 0x8000000000000000;
        }
        if (-1 < (int)(uVar8 - 0xfc0000)) {
          if (-1 < (int)((uVar6 + 0x800000) * 2)) {
            if ((int)(uVar6 + 0xa0000000) < 0) {
              uVar2 = 0xff800000;
            }
            else {
              uVar2 = 0x7f800000;
            }
            return CONCAT44(iVar3,uVar2) | 0x8000000000000000;
          }
          return CONCAT44(iVar3,uVar6) | 0x8000000000000000;
        }
        if ((int)(uVar8 ^ 0xff) < -0xffff) {
          uVar6 = uVar6 + 0x60000000;
          if ((int)(uVar8 ^ 0xff) < -0xffff) {
            uVar6 = uVar6 & 0x80000000;
          }
          return CONCAT44(iVar3,uVar6) | 0x8000000000000000;
        }
        return CONCAT44(iVar3,uVar6) | 0x8000000000000000;
      }
      if ((int)(uVar5 ^ uVar6) < 0) {
        uVar7 = uVar7 | 0x100;
      }
      uVar11 = uVar6 >> 7 & 0xff0000;
      if (uVar7 < 0xff0000 && uVar11 < 0xff0000) {
        return CONCAT44(uVar6,uVar5 ^ uVar6) & 0xffffffff80000000;
      }
      uVar5 = uVar5 * 2;
      if (uVar5 < 0xff000001) {
        uVar5 = uVar6 * 2;
      }
      uVar8 = 0x4000003;
      uVar9 = DAT_4a171ba4;
      if (uVar5 < 0xff000001) {
        if ((uVar7 & 0xff0000) == 0 || uVar11 == 0) {
          return CONCAT44(uVar6,DAT_4a172220);
        }
        return CONCAT44(uVar6,(uVar7 | 0xff) << 0x17);
      }
LAB_4a172874:
      uVar8 = uVar8 & 0xf;
      if (uVar8 == 9) {
        return (ulonglong)uVar6 << 0x20;
      }
      if (uVar8 == 10) {
        return CONCAT44(uVar6,uVar9);
      }
      if (uVar8 != 8) {
        return CONCAT44(uVar6,uVar9);
      }
      return CONCAT44(uVar6,uVar6 & 0xff000000 | uVar9 >> 0x1d | (uVar6 & 0xffffff) << 3);
    }
  }
  else {
    iVar3 = DAT_4a0041c8;
    if ((int)uVar6 < DAT_4a0041c8) goto LAB_4a004070;
  }
  uVar2 = 0;
LAB_4a004190:
  return CONCAT44(local_20,uVar2);
}



// Address: 4a0041e0

undefined4
FUN_4a0041e0(uint param_1,undefined4 param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  if (((~((int)param_1 >> 0x17) & 0xffU) == 0) && (param_1 != 0xff800000)) {
    uVar1 = FUN_4a17295c(param_1,1);
  }
  else if ((param_1 & 0x7fffffff) == 0) {
    thunk_FUN_4a003182(1);
    uVar1 = DAT_4a0042f8;
  }
  else {
    if ((param_1 & 0x80000000) == 0) {
      uVar4 = (param_1 & 0x7fffffff) >> 0x17;
      if (uVar4 == 0) {
        param_1 = FUN_4a17295c(param_1,0x20);
        uVar4 = ((param_1 & 0x7fffffff) >> 0x17) - 0x20;
      }
      uVar5 = param_1 & 0x3fffffff | 0x3f800000;
      uVar1 = FUN_4a171fac(uVar4 - 0x7f);
      uVar1 = FUN_4a17211c(uVar1,param_2);
      uVar2 = FUN_4a171a94(uVar5,0x3f800000);
      uVar3 = FUN_4a1725c0(uVar5,0x3f800000);
      uVar2 = FUN_4a171bb8(uVar3,uVar2);
      uVar2 = FUN_4a1724e0(uVar2,uVar5);
      FUN_4a171bb8(uVar3,uVar2);
      uVar2 = FUN_4a005e50();
      if (param_3 != 0x3f800000) {
        uVar2 = FUN_4a17211c(uVar2,param_3);
      }
      *param_4 = uVar1;
      *param_5 = uVar2;
      return 0;
    }
    thunk_FUN_4a003182(1);
    uVar1 = DAT_4a0042fc;
  }
  *param_4 = uVar1;
  return 1;
}



// Address: 4a004300

uint FUN_4a004300(uint param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  uVar6 = DAT_4a004600;
  uVar5 = DAT_4a0045fc;
  iVar7 = DAT_4a0045f8;
  if ((int)(param_1 & 0x7fffffff) < DAT_4a0045f8) {
    uVar9 = 0;
  }
  else {
    FUN_4a17211c(param_1,DAT_4a004604,param_3,param_4,param_4);
    uVar9 = FUN_4a171e90();
    if ((int)uVar9 < 0) {
      iVar8 = -1;
      uVar10 = -uVar9;
    }
    else {
      iVar8 = 1;
      uVar10 = uVar9;
    }
    if ((int)uVar10 < 0x1000) {
      uVar1 = FUN_4a171fac(uVar9);
      uVar2 = FUN_4a17211c(uVar1,uVar5);
      uVar3 = FUN_4a1724e0(uVar2,param_1);
      uVar2 = uVar6;
      uVar4 = uVar1;
    }
    else {
      if (0xffffff < (int)uVar10) goto LAB_4a00445c;
      uVar1 = FUN_4a171fac(iVar8 * (DAT_4a004608 & uVar10));
      uVar2 = FUN_4a17211c(uVar1,uVar5);
      uVar2 = FUN_4a1724e0(uVar2,param_1);
      uVar4 = FUN_4a17211c(uVar1,uVar6);
      uVar2 = FUN_4a1724e0(uVar4,uVar2);
      uVar4 = FUN_4a171fac((uVar10 & 0xfff) * iVar8);
      uVar3 = FUN_4a17211c(uVar4,uVar5);
      uVar2 = FUN_4a1724e0(uVar3,uVar2);
      uVar3 = FUN_4a17211c(uVar1,DAT_4a00460c);
      uVar2 = FUN_4a1724e0(uVar3,uVar2);
      uVar3 = FUN_4a17211c(uVar4,uVar6);
      uVar3 = FUN_4a1724e0(uVar3,uVar2);
      uVar2 = DAT_4a004610;
    }
    uVar2 = FUN_4a17211c(uVar1,uVar2);
    uVar2 = FUN_4a1724e0(uVar2,uVar3);
    uVar4 = FUN_4a17211c(uVar4,DAT_4a004614);
    param_1 = FUN_4a1724e0(uVar4,uVar2);
  }
LAB_4a00445c:
  iVar8 = DAT_4a00461c;
  uVar10 = param_1 & 0x7fffffff;
  if (DAT_4a004618 < (int)uVar10) {
    if ((int)uVar10 < iVar7) {
      if ((int)param_1 < 1) {
        uVar2 = FUN_4a171a94(param_1,uVar5);
        uVar5 = DAT_4a004620;
        if ((int)(uVar10 + iVar8) < 0x800) {
          uVar2 = FUN_4a171a94(uVar2,uVar6);
          uVar5 = DAT_4a004614;
        }
        uVar10 = FUN_4a171a94(uVar2,uVar5);
        *param_2 = uVar10;
        uVar9 = uVar9 - 1;
      }
      else {
        uVar2 = FUN_4a1725c0();
        uVar5 = DAT_4a004620;
        if ((int)(uVar10 + iVar8) < 0x800) {
          uVar2 = FUN_4a1725c0(uVar2,uVar6);
          uVar5 = DAT_4a004614;
        }
        uVar10 = FUN_4a1725c0(uVar2,uVar5);
        *param_2 = uVar10;
        uVar9 = uVar9 + 1;
      }
    }
    else {
      uVar10 = param_1 & 0xfffff000;
      uVar2 = FUN_4a1725c0(param_1,uVar10);
      uVar5 = DAT_4a004624;
      uVar4 = FUN_4a17211c(uVar10,DAT_4a004624);
      uVar6 = DAT_4a004628;
      uVar3 = FUN_4a17211c(uVar10,DAT_4a004628);
      uVar5 = FUN_4a17211c(uVar2,uVar5);
      uVar6 = FUN_4a17211c(uVar2,uVar6);
      uVar5 = FUN_4a171a94(uVar3,uVar5);
      uVar2 = FUN_4a171a94(uVar4,uVar5);
      uVar4 = FUN_4a1725c0(uVar2,uVar4);
      uVar5 = FUN_4a1724e0(uVar4,uVar5);
      uVar6 = FUN_4a171a94(uVar5,uVar6);
      uVar5 = DAT_4a00462c;
      uVar4 = FUN_4a1722d4(uVar2,DAT_4a00462c);
      uVar5 = FUN_4a171bb8(uVar4,uVar5);
      uVar5 = FUN_4a17295c(uVar5,3);
      FUN_4a171a94(uVar5,DAT_4a004630);
      iVar7 = FUN_4a171e1c();
      uVar5 = DAT_4a004634;
      uVar2 = FUN_4a1722d4(uVar2,DAT_4a004634);
      uVar6 = FUN_4a171a94(uVar2,uVar6);
      uVar5 = FUN_4a1722d4(uVar6,uVar5);
      uVar10 = FUN_4a171bb8(uVar5,DAT_4a004638);
      *param_2 = uVar10;
      uVar9 = uVar9 + (iVar7 >> 1);
    }
  }
  else {
    *param_2 = param_1;
  }
  return uVar9;
}



// Address: 4a00463c

void FUN_4a00463c(uint param_1,uint *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint unaff_r5;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  if ((int)param_1 < 0x39800001) {
    *param_2 = param_1;
    uVar1 = 0x3f800000;
  }
  else {
    uVar6 = param_1 & 0xffffff | 0x800000;
    iVar4 = ((param_1 & 0x7fffffff) >> 0x17) - 0x7f;
    iVar2 = 0;
    if (-1 < iVar4) {
      unaff_r5 = 0;
    }
    iVar7 = uVar6 * 0x20;
    iVar8 = 0x20000000;
    uVar9 = unaff_r5;
    if (-1 >= iVar4) {
      iVar7 = DAT_4a00477c + 0x4a004694 + iVar4 * -8;
      uVar9 = *(uint *)(iVar7 + -4);
      iVar7 = (int)(uVar6 * 0x40 - *(int *)(iVar7 + -8)) >> (-(iVar4 + uVar9) & 0xff);
      unaff_r5 = 0;
      while ((int)unaff_r5 < (int)uVar9) {
        iVar4 = iVar2 >> ((unaff_r5 & 0x7f) << 1);
        if ((1 << (unaff_r5 & 0xff) & 0xd1U) == 0) {
          iVar11 = -iVar8;
        }
        else {
          iVar4 = -iVar4;
          iVar11 = iVar8;
        }
        iVar8 = iVar4 + iVar8;
        iVar2 = (iVar2 + iVar11) * 2;
        unaff_r5 = unaff_r5 + 1;
      }
    }
    uVar5 = 0;
    iVar4 = 0;
    uVar6 = unaff_r5 << 1;
    do {
      iVar7 = iVar7 * 2;
      iVar11 = iVar2 >> (uVar6 & 0xff);
      iVar10 = *(int *)(DAT_4a004780 + 0x4a004704 + unaff_r5 * 4);
      if (iVar7 >= 0) {
        iVar11 = -iVar11;
      }
      iVar11 = iVar11 + iVar8;
      iVar8 = iVar8 >> (uVar5 & 0xff);
      if (iVar7 < 0) {
        iVar8 = -iVar8;
      }
      else {
        iVar10 = -iVar10;
      }
      iVar2 = iVar2 + iVar8;
      iVar7 = iVar7 + iVar10;
      iVar4 = iVar4 + 1;
      unaff_r5 = unaff_r5 + 1;
      uVar5 = uVar5 + 1;
      uVar6 = uVar6 + 1;
      iVar8 = iVar11;
    } while (iVar4 < 0x20);
    uVar3 = FUN_4a171fac(iVar2);
    uVar1 = DAT_4a004784;
    iVar2 = FUN_4a17211c(uVar3,DAT_4a004784);
    *param_2 = iVar2 + uVar9 * -0x800000;
    uVar3 = FUN_4a171fac(iVar11);
    uVar1 = FUN_4a17211c(uVar3,uVar1);
  }
  *param_3 = uVar1;
  return;
}



// Address: 4a00479c

undefined * FUN_4a00479c(void)

{
  return PTR_DAT_4a0047a8;
}



// Address: 4a0047b0

undefined8 FUN_4a0047b0(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_1 >> 2 | param_2 << 0x1e;
  uVar1 = param_1 - uVar3;
  uVar2 = param_2 - ((param_2 >> 2) + (uint)(param_1 < uVar3));
  uVar4 = uVar1 >> 4 | uVar2 * 0x10000000;
  uVar3 = uVar1 + uVar4;
  uVar2 = uVar2 + (uVar2 >> 4) + (uint)CARRY4(uVar1,uVar4);
  uVar4 = uVar3 >> 8 | uVar2 * 0x1000000;
  uVar1 = uVar3 + uVar4;
  uVar2 = uVar2 + (uVar2 >> 8) + (uint)CARRY4(uVar3,uVar4);
  uVar4 = uVar1 >> 0x10 | uVar2 * 0x10000;
  uVar3 = uVar1 + uVar4;
  uVar1 = uVar2 + (uVar2 >> 0x10) + (uint)CARRY4(uVar1,uVar4);
  uVar2 = uVar1 + CARRY4(uVar3,uVar1);
  uVar3 = uVar3 + uVar1 >> 3 | uVar2 * 0x20000000;
  uVar1 = uVar2 >> 3;
  if (-1 < (int)((param_2 - (param_1 < 10)) -
                (((uVar1 << 2 | (uVar2 & 7) >> 1) + uVar1 + (uint)CARRY4(uVar3,uVar3 * 4)) * 2 +
                 (uint)CARRY4(uVar3 * 5,uVar3 * 5) + (uint)(param_1 - 10 < uVar3 * 10)))) {
    return CONCAT44(uVar1 + (0xfffffffe < uVar3),uVar3 + 1);
  }
  return CONCAT44(uVar1,uVar3);
}



// Address: 4a004850

undefined4 FUN_4a004850(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined1 local_30;
  undefined1 local_2f;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined4 local_28;
  undefined4 uStack_24;
  int local_20;
  int local_1c;
  
  iVar1 = 0;
LAB_4a004a0e:
  *(int *)(param_1 + 0x3c) = iVar1;
LAB_4a004860:
  piVar2 = *(int **)(param_1 + 0x2c);
  iVar1 = *piVar2;
  local_20 = iVar1;
  while ((iVar3 = FUN_4a1652c6(piVar2,*(undefined4 *)(param_1 + 0x28)), iVar3 != 0 &&
         (iVar3 != 0x25))) {
    piVar2 = *(int **)(param_1 + 0x2c);
    iVar1 = *piVar2;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  }
  if (local_20 != iVar1) {
    FUN_4a1652ca(param_1,local_20,iVar1,*(undefined4 *)(param_1 + 0x20));
  }
  iVar1 = DAT_4a004b34;
  if (iVar3 == 0) {
LAB_4a004a9a:
    return *(undefined4 *)(param_1 + 0x3c);
  }
  uVar11 = 0;
  while (((uVar4 = FUN_4a1652c6(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x28)),
          0x1f < (int)uVar4 && (uVar4 < 0x31)) &&
         (uVar5 = (uint)*(byte *)(iVar1 + uVar4 + 0x4a00487e), uVar5 != 0))) {
    uVar11 = uVar11 | uVar5;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  do {
    if (uVar4 == 0x2a) {
      iVar3 = *param_2;
      param_2 = param_2 + 1;
      *(int *)(iVar1 * 4 + param_1 + 0x34) = iVar3;
      uVar4 = FUN_4a1652c6(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x28));
      if (iVar1 == 1) {
        if (*(int *)(param_1 + 0x38) < 0) {
          uVar11 = uVar11 & 0xffffffdf;
        }
        break;
      }
    }
    else {
      if (uVar4 - 0x30 < 10) {
        local_1c = iVar1 * 4 + param_1;
        *(uint *)(local_1c + 0x34) = uVar4 - 0x30;
        while (uVar4 = FUN_4a1652c6(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x28))
              , uVar4 - 0x30 < 10) {
          *(uint *)(local_1c + 0x34) = *(int *)(local_1c + 0x34) * 10 + uVar4 + -0x30;
        }
      }
      if (iVar1 == 1) break;
    }
    if (uVar4 != 0x2e) break;
    uVar4 = FUN_4a1652c6(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x28));
    uVar11 = uVar11 | 0x20;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  if (*(int *)(param_1 + 0x34) < 0) {
    *(int *)(param_1 + 0x34) = -*(int *)(param_1 + 0x34);
    uVar11 = uVar11 ^ 1;
  }
  if ((uVar11 & 1) != 0) {
    uVar11 = uVar11 & 0xffffffef;
  }
  iVar1 = uVar11 << 0x1e;
  if (iVar1 < 0) {
    iVar1 = 4;
    uVar11 = uVar11 & 0xfffffffb;
  }
  uVar15 = CONCAT44(iVar1,uVar4);
  if ((uVar4 == 0x6c) || (uVar4 == 0x68)) {
    uVar5 = FUN_4a1652c6(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x28));
    if (uVar5 == uVar4) {
      uVar5 = 0x80;
      if (uVar4 != 0x6c) {
        uVar5 = 0x400;
      }
      goto LAB_4a0049a0;
    }
    uVar6 = 0x40;
    if (uVar4 != 0x6c) {
      uVar6 = 0x100;
    }
    uVar15 = CONCAT44(uVar6,uVar5);
    uVar11 = uVar11 | uVar6;
  }
  else if (((uVar4 == 0x4c) || (uVar4 == 0x6a)) || ((uVar4 == 0x74 || (uVar4 == 0x7a)))) {
    uVar5 = 0;
    if ((uVar4 != 0x4c) && (uVar5 = 0x80, uVar4 != 0x6a)) {
      uVar5 = 0;
    }
LAB_4a0049a0:
    uVar11 = uVar11 | uVar5;
    uVar15 = FUN_4a1652c6(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x28));
  }
  iVar1 = (int)uVar15;
  bVar14 = SBORROW4(iVar1,0x65);
  bVar12 = iVar1 + -0x65 < 0;
  bVar13 = iVar1 == 0x65;
  *(uint *)(param_1 + 0x18) = uVar11;
LAB_4a0049ac:
  if (bVar13) {
    puVar10 = (undefined4 *)((int)param_2 + 7U & 0xfffffff8);
    param_2 = puVar10 + 2;
    local_28 = *puVar10;
    uStack_24 = puVar10[1];
    thunk_FUN_4a00513c(param_1,iVar1,&local_28,&local_20);
    goto LAB_4a004860;
  }
  if (bVar12 != bVar14) {
    bVar14 = SBORROW4(iVar1,0x47);
    bVar12 = iVar1 + -0x47 < 0;
    bVar13 = true;
    if (iVar1 == 0x47) goto LAB_4a0049ac;
    if (iVar1 < 0x48) {
      if (iVar1 == 0) goto LAB_4a004a9a;
      bVar13 = iVar1 == 0x41;
    }
    else {
      if (iVar1 == 0x58) goto LAB_4a004a86;
      bVar13 = iVar1 == 0x61;
      if (!bVar13) {
        if (iVar1 != 99) {
          if (iVar1 == 100) goto LAB_4a004acc;
          goto LAB_4a004a02;
        }
        uVar8 = 1;
        if ((int)(uVar11 << 0x19) < 0) {
          local_2a = 0;
          puVar7 = &local_2c;
          local_2c = (undefined2)*param_2;
LAB_4a004a40:
          param_2 = param_2 + 1;
          if (*(int *)(param_1 + 0x30) == 0) {
            FUN_4a003270(param_1,puVar7);
          }
        }
        else {
          local_2f = 0;
          local_30 = (undefined1)*param_2;
          puVar7 = (undefined2 *)&local_30;
LAB_4a004a58:
          param_2 = param_2 + 1;
          if (*(int *)(param_1 + 0x30) == 0) {
            FUN_4a003212(param_1,puVar7,uVar8);
          }
        }
        goto LAB_4a004860;
      }
    }
    if (bVar13) {
      puVar10 = (undefined4 *)((int)param_2 + 7U & 0xfffffff8);
      param_2 = puVar10 + 2;
      local_28 = *puVar10;
      uStack_24 = puVar10[1];
      thunk_FUN_4a172870(param_1,iVar1,&local_28,&local_20);
      goto LAB_4a004860;
    }
    bVar14 = SBORROW4(iVar1,0x45);
    bVar12 = iVar1 + -0x45 < 0;
    bVar13 = iVar1 == 0x45;
    if (!bVar13) {
      bVar14 = SBORROW4(iVar1,0x46);
      bVar12 = iVar1 + -0x46 < 0;
      bVar13 = iVar1 == 0x46;
      if (!bVar13) goto LAB_4a004a02;
    }
    goto LAB_4a0049ac;
  }
  if (iVar1 == 0x6f) {
    if ((int)(uVar11 << 0x18) < 0) {
      piVar2 = (int *)((int)param_2 + 7U & 0xfffffff8);
      param_2 = piVar2 + 2;
      iVar1 = *piVar2;
      iVar3 = piVar2[1];
    }
    else {
      iVar1 = *param_2;
      param_2 = param_2 + 1;
      iVar3 = 0;
    }
    FUN_4a003400(param_1,(int)((ulonglong)uVar15 >> 0x20),iVar1,iVar3);
    goto LAB_4a004860;
  }
  if (iVar1 < 0x70) {
    bVar14 = SBORROW4(iVar1,0x66);
    bVar12 = iVar1 + -0x66 < 0;
    bVar13 = true;
    if (iVar1 == 0x66) goto LAB_4a0049ac;
    bVar14 = SBORROW4(iVar1,0x67);
    bVar12 = iVar1 + -0x67 < 0;
    bVar13 = true;
    if (iVar1 != 0x67) goto code_r0x4a0049e8;
    goto LAB_4a0049ac;
  }
  if (iVar1 == 0x70) goto LAB_4a004a86;
  if (iVar1 == 0x73) {
    puVar7 = (undefined2 *)*param_2;
    uVar8 = 0xffffffff;
    if (-1 < (int)(uVar11 << 0x19)) goto LAB_4a004a58;
    goto LAB_4a004a40;
  }
  if (iVar1 == 0x75) goto LAB_4a004acc;
  if (iVar1 != 0x78) goto LAB_4a004a02;
LAB_4a004a86:
  if ((int)(uVar11 << 0x18) < 0) {
    piVar2 = (int *)((int)param_2 + 7U & 0xfffffff8);
    param_2 = piVar2 + 2;
    iVar3 = *piVar2;
    iVar9 = piVar2[1];
  }
  else {
    iVar3 = *param_2;
    param_2 = param_2 + 1;
    iVar9 = 0;
  }
  FUN_4a003334(param_1,iVar1,iVar3,iVar9);
  goto LAB_4a004860;
code_r0x4a0049e8:
  if (iVar1 == 0x69) {
LAB_4a004acc:
    if ((int)(uVar11 << 0x18) < 0) {
      puVar10 = (undefined4 *)((int)param_2 + 7U & 0xfffffff8);
      param_2 = puVar10 + 2;
      FUN_4a003508(param_1,iVar1,*puVar10,puVar10[1]);
    }
    else {
      iVar3 = *param_2;
      param_2 = param_2 + 1;
      FUN_4a003494(param_1,iVar1,iVar3);
    }
  }
  else {
    if (iVar1 != 0x6e) goto LAB_4a004a02;
    iVar1 = *param_2;
    param_2 = param_2 + 1;
    FUN_4a003594(param_1,iVar1);
  }
  goto LAB_4a004860;
LAB_4a004a02:
  FUN_4a1652c8(iVar1,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x1c));
  iVar1 = *(int *)(param_1 + 0x3c) + 1;
  goto LAB_4a004a0e;
}



// Address: 4a004b38

void FUN_4a004b38(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  if ((int)(*(uint *)(param_1 + 0x18) << 0x1a) < 0) {
    iVar1 = *(int *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffffef;
  }
  else {
    iVar1 = 1;
  }
  iVar2 = 0;
  if (param_3 < iVar1) {
    iVar2 = iVar1 - param_3;
  }
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - (iVar2 + param_3 + param_5);
  if (-1 < *(int *)(param_1 + 0x18) << 0x1b) {
    FUN_4a003192(param_1);
  }
  for (iVar1 = 0; iVar1 < param_5; iVar1 = iVar1 + 1) {
    FUN_4a1652c8(*(undefined1 *)(param_4 + iVar1),*(undefined4 *)(param_1 + 0x24),
                 *(undefined4 *)(param_1 + 0x1c));
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  }
  if (*(int *)(param_1 + 0x18) << 0x1b < 0) {
    FUN_4a003192(param_1);
  }
  while (0 < iVar2) {
    FUN_4a1652c8(0x30,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x1c));
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    iVar2 = iVar2 + -1;
  }
  while (0 < param_3) {
    FUN_4a1652c8(*(undefined1 *)(param_2 + param_3 + -1),*(undefined4 *)(param_1 + 0x24),
                 *(undefined4 *)(param_1 + 0x1c));
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    param_3 = param_3 + -1;
  }
  FUN_4a0031c2(param_1);
  return;
}



// Address: 4a004be2

void FUN_4a004be2(int *param_1,char *param_2,undefined4 param_3,int param_4,int param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 local_5c;
  uint local_54;
  int local_50 [2];
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  uint local_28;
  int *local_24;
  char *pcStack_20;
  undefined4 uStack_1c;
  int local_18;
  
  local_24 = param_1;
  pcStack_20 = param_2;
  uStack_1c = param_3;
  local_18 = param_4;
  thunk_FUN_4a0064b0(param_3,&local_3c,&local_48,0);
  local_34 = thunk_FUN_4a1727bc(0);
  local_34 = local_34 & 0xc00000;
  if ((int)local_3c < 0) {
    local_34 = local_34 * 5 >> 1 & 0xc00000;
  }
  local_34 = local_34 >> 0x16;
  if (1 < local_34) {
    local_34 = 0xffffffff;
  }
  if ((local_3c & 0x7fffffff) == 0 && local_38 == 0) {
    if (param_5 == 1) {
      iVar3 = -(local_18 + 1);
      local_18 = 0;
    }
    else {
      for (iVar3 = 0; iVar3 < local_18; iVar3 = iVar3 + 1) {
        param_2[iVar3] = '0';
      }
      iVar3 = 0;
    }
    param_2[local_18] = '\0';
    local_24[1] = local_18;
    local_24[2] = param_5;
    *local_24 = iVar3;
    return;
  }
  local_2c = DAT_4a005050 * (local_48 + DAT_4a00504c) >> 0x10;
  local_28 = -local_34;
LAB_4a004c7c:
  do {
    if (param_5 == 0) {
      iVar3 = (local_2c - local_18) + 1;
    }
    else {
      iVar3 = -local_18;
    }
    uVar6 = local_28;
    if (iVar3 < 1) {
      uVar6 = local_34;
    }
    iVar4 = iVar3;
    if (iVar3 < 0) {
      iVar4 = -iVar3;
    }
    FUN_4a006320(local_50,iVar4);
    uVar10 = thunk_FUN_4a006704(local_3c,local_38);
    local_5c._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
    local_5c._0_4_ = (int)uVar10 + DAT_4a005054;
    uVar7 = local_34;
    local_54 = uVar6;
    if (iVar3 < 1) {
      local_50[0] = local_50[0] + DAT_4a005054;
      local_5c = thunk_FUN_4a006cf8(&local_5c,local_50,local_34,local_50);
    }
    else {
      local_50[0] = local_50[0] - DAT_4a005054;
      local_5c = thunk_FUN_4a006c88(&local_5c,local_50);
    }
    uVar9 = (undefined4)(local_5c >> 0x20);
    puVar8 = &local_54;
    uVar6 = uVar7;
    if ((local_5c & 0xffff) != 0) {
      uVar9 = 0x7fffffff;
      uVar6 = 0xffffffff;
    }
    lVar11 = CONCAT44(uVar9,uVar6);
    iVar3 = local_18;
    local_54 = uVar7;
    if (param_5 != 0) {
      iVar3 = 0;
      local_30 = 0;
      while( true ) {
        if ((lVar11 == 0) || (0x10 < iVar3)) break;
        lVar11 = thunk_FUN_4a0047b0((int)lVar11,(int)((ulonglong)lVar11 >> 0x20));
        puVar8 = puVar8 + 0xc;
        param_2[iVar3] = (char)puVar8;
        iVar3 = iVar3 + 1;
      }
      if (lVar11 != 0) {
        if (local_30 != 0) goto LAB_4a004db8;
        local_18 = 0x11;
        param_5 = 0;
        goto LAB_4a004c7c;
      }
      iVar4 = iVar3;
      for (iVar5 = 0; iVar4 = iVar4 + -1, iVar5 < iVar4; iVar5 = iVar5 + 1) {
        cVar1 = param_2[iVar5];
        param_2[iVar5] = param_2[iVar4];
        param_2[iVar4] = cVar1;
      }
      local_44 = (iVar3 - local_18) + -1;
      local_40 = iVar3;
LAB_4a004db8:
      param_2[local_40] = '\0';
      local_24[2] = param_5;
      local_24[1] = local_40;
      *local_24 = local_44;
      return;
    }
    while( true ) {
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) break;
      lVar11 = thunk_FUN_4a0047b0((int)lVar11,(int)((ulonglong)lVar11 >> 0x20));
      puVar8 = puVar8 + 0xc;
      param_2[iVar3] = (char)puVar8;
    }
    local_40 = local_18;
    bVar2 = true;
    if (lVar11 == 0) {
      if (*param_2 == '0') {
        local_2c = local_2c + -1;
        goto LAB_4a004d42;
      }
    }
    else {
      local_2c = local_2c + 1;
LAB_4a004d42:
      bVar2 = false;
    }
    local_44 = local_2c;
    if (bVar2) goto LAB_4a004db8;
  } while( true );
}



// Address: 4a004dce

int FUN_4a004dce(int param_1,int param_2,int param_3,undefined1 param_4)

{
  char cVar1;
  undefined1 uVar2;
  char extraout_r1;
  int extraout_r1_00;
  int iVar3;
  
  *(undefined1 *)(param_1 + param_2) = param_4;
  if (param_3 < 0) {
    param_3 = -param_3;
    uVar2 = 0x2d;
  }
  else {
    uVar2 = 0x2b;
  }
  *(undefined1 *)(param_1 + param_2 + 1) = uVar2;
  iVar3 = param_2 + 2;
  if (99 < param_3) {
    cVar1 = thunk_FUN_4a0015f0(param_3,100);
    *(char *)(param_1 + iVar3) = cVar1 + '0';
    iVar3 = param_2 + 3;
    param_3 = extraout_r1_00;
  }
  cVar1 = thunk_FUN_4a0015f0(param_3,10);
  *(char *)(param_1 + iVar3) = cVar1 + '0';
  *(char *)(param_1 + iVar3 + 1) = extraout_r1 + '0';
  return iVar3 + 2;
}



// Address: 4a004e16

int FUN_4a004e16(int param_1,undefined1 *param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  int iVar5;
  bool bVar6;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_24;
  undefined1 *puStack_20;
  undefined4 local_1c;
  int iStack_18;
  
  local_34 = *(uint *)(param_4 + 0x18);
  local_24 = param_1;
  puStack_20 = param_2;
  local_1c = param_3;
  iStack_18 = param_4;
  iVar2 = thunk_FUN_4a003144();
  cVar1 = *(char *)((int)*(int **)(iVar2 + 0xc) + **(int **)(iVar2 + 0xc));
  iVar2 = thunk_FUN_4a006474(local_1c,&local_38);
  puVar4 = &DAT_4a005058;
  if (((local_38 == 0) && (puVar4 = &DAT_4a00505c, -1 < (int)(local_34 << 0x1e))) &&
     (puVar4 = &DAT_4a005060, -1 < (int)(local_34 << 0x1d))) {
    puVar4 = &DAT_4a005064;
  }
  *(undefined **)(param_4 + 8) = puVar4;
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      puVar3 = &DAT_4a005068;
      if (0x60 < local_24) {
        puVar3 = &DAT_4a00506c;
      }
    }
    else {
      puVar3 = &DAT_4a005070;
      if (0x60 < local_24) {
        puVar3 = &DAT_4a005074;
      }
    }
    *param_2 = *puVar3;
    param_2[1] = puVar3[1];
    param_2[2] = puVar3[2];
    param_2[3] = 0;
    *(uint *)(param_4 + 0x18) = local_34 & 0xffffffef;
    return 3;
  }
  bVar6 = local_24 == 0x45;
  do {
    if (bVar6) {
      iVar2 = *(int *)(param_4 + 0x38);
      if (0x11 < iVar2) {
        *(undefined4 *)(param_4 + 0x38) = 0x11;
        *(int *)(param_4 + 0x10) = iVar2 + -0x11;
      }
      FUN_4a004be2(&local_30,param_2 + 1,local_1c,*(int *)(param_4 + 0x38) + 1,0);
      *param_2 = param_2[1];
      iVar2 = local_2c + 1;
      if (*(int *)(param_4 + 0x38) == 0 && (local_34 & 8) == 0) {
        iVar2 = 1;
      }
      else {
        param_2[1] = cVar1;
      }
      iVar5 = local_24;
      if (0 < *(int *)(param_4 + 0x10)) {
        param_2[iVar2] = 0x3e;
        iVar2 = iVar2 + 1;
      }
      goto LAB_4a005134;
    }
    if (local_24 == 0x46) goto LAB_4a004ea6;
    bVar6 = true;
  } while (local_24 == 0x65);
  if (local_24 == 0x66) {
LAB_4a004ea6:
    FUN_4a004be2(&local_30,param_2 + 1,local_1c,*(undefined4 *)(param_4 + 0x38),1);
    *param_2 = 0x30;
    if (local_30 < 0) {
      if (*(int *)(param_4 + 0x38) + 1 < -local_30) {
        param_2[1] = cVar1;
        iVar2 = 2;
        *(undefined4 *)(param_4 + 0x10) = *(undefined4 *)(param_4 + 0x38);
      }
      else {
        iVar2 = *(int *)(param_4 + 0x38) + local_30 + 2;
        if (local_2c + 1 < iVar2) {
          *(int *)(param_4 + 0x10) = (iVar2 - local_2c) + -1;
          iVar2 = local_2c + 1;
        }
        iVar5 = iVar2;
        if (local_30 == -1) {
          for (; 0 < iVar5; iVar5 = iVar5 + -1) {
            param_2[iVar5 + 1] = param_2[iVar5];
          }
          iVar2 = iVar2 + 1;
          *param_2 = 0x30;
          param_2[1] = cVar1;
        }
        else {
          for (; 0 < iVar5; iVar5 = iVar5 + -1) {
            param_2[iVar5 + 2] = param_2[iVar5];
          }
          *param_2 = 0x30;
          iVar2 = iVar2 + 2;
          param_2[1] = cVar1;
          param_2[2] = 0x3c;
          *(int *)(param_4 + 0xc) = -local_30 + -1;
        }
      }
      if (*(int *)(param_4 + 0x10) < 1) goto LAB_4a004fae;
    }
    else {
      iVar2 = *(int *)(param_4 + 0x38) + local_30 + 2;
      if (iVar2 < 0x13) {
        for (iVar5 = 0; iVar5 <= local_30; iVar5 = iVar5 + 1) {
          param_2[iVar5] = param_2[iVar5 + 1];
        }
        param_2[local_30 + 1] = cVar1;
        goto LAB_4a004fae;
      }
      iVar2 = 0x12;
      if (local_30 < 0x11) {
        for (iVar5 = 0; iVar5 <= local_30; iVar5 = iVar5 + 1) {
          param_2[iVar5] = param_2[iVar5 + 1];
        }
        param_2[local_30 + 1] = cVar1;
        iVar5 = *(int *)(param_4 + 0x38) + local_30 + -0x10;
        *(int *)(param_4 + 0x10) = iVar5;
        if (iVar5 == 0) goto LAB_4a004fae;
      }
      else {
        for (iVar2 = 0; iVar2 < 0x11; iVar2 = iVar2 + 1) {
          param_2[iVar2] = param_2[iVar2 + 1];
        }
        param_2[0x11] = 0x3c;
        *(int *)(param_4 + 0xc) = local_30 + -0x10;
        param_2[0x12] = cVar1;
        iVar2 = 0x13;
        if (*(int *)(param_4 + 0x38) == 0) goto LAB_4a004fae;
        *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x38);
      }
    }
    param_2[iVar2] = 0x3e;
    iVar2 = iVar2 + 1;
LAB_4a004fae:
    if (*(int *)(param_4 + 0x38) != 0 || (local_34 & 8) != 0) {
      return iVar2;
    }
    return iVar2 + -1;
  }
  local_3c = 0;
  if (*(int *)(param_4 + 0x38) < 1) {
    iVar2 = 1;
    *(undefined4 *)(param_4 + 0x38) = 1;
  }
  else {
    iVar2 = *(int *)(param_4 + 0x38);
  }
  iVar5 = 0x11;
  if (iVar2 < 0x12) {
    iVar5 = iVar2;
  }
  FUN_4a004be2(&local_30,param_2 + 1,local_1c,iVar5,0);
  *param_2 = 0x30;
  iVar2 = local_2c + 1;
  if ((local_30 < *(int *)(param_4 + 0x38)) && (-5 < local_30)) {
    local_24 = 0x66;
    if (-1 < local_30) {
      if (local_30 < local_2c) {
        for (iVar5 = 0; iVar5 <= local_30; iVar5 = iVar5 + 1) {
          param_2[iVar5] = param_2[iVar5 + 1];
        }
        param_2[local_30 + 1] = cVar1;
      }
      else {
        for (iVar5 = 0; iVar5 <= local_2c; iVar5 = iVar5 + 1) {
          param_2[iVar5] = param_2[iVar5 + 1];
        }
        param_2[iVar2] = cVar1;
        param_2[local_2c] = 0x3c;
        local_3c = (local_30 - iVar2) + 2;
        iVar2 = local_2c + 2;
        *(int *)(param_4 + 0xc) = local_3c;
      }
      goto LAB_4a00509a;
    }
    local_30 = -local_30;
    for (iVar5 = iVar2; -1 < iVar5; iVar5 = iVar5 + -1) {
      param_2[iVar5 + local_30] = param_2[iVar5];
    }
    iVar2 = iVar2 + local_30;
    for (iVar5 = 0; iVar5 <= local_30; iVar5 = iVar5 + 1) {
      param_2[iVar5] = 0x30;
    }
  }
  else {
    *param_2 = param_2[1];
  }
  param_2[1] = cVar1;
LAB_4a00509a:
  if ((int)(local_34 << 0x1c) < 0) {
    if (0x11 < *(int *)(param_4 + 0x38)) {
      *(int *)(param_4 + 0x10) = (*(int *)(param_4 + 0x38) - local_3c) + -0x11;
      param_2[iVar2] = 0x3e;
      iVar2 = iVar2 + 1;
    }
  }
  else {
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (param_2[iVar2] != cVar1) {
      for (; param_2[iVar2 + -1] == '0'; iVar2 = iVar2 + -1) {
      }
    }
    if (param_2[iVar2 + -1] == cVar1) {
      iVar2 = iVar2 + -1;
    }
  }
  if (local_24 != 0x66) {
    iVar5 = local_24 + -2;
LAB_4a005134:
    iVar2 = FUN_4a004dce(param_2,iVar2,local_30,iVar5);
  }
  return iVar2;
}



// Address: 4a00513c

void FUN_4a00513c(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char local_34 [32];
  
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (-1 < *(int *)(param_1 + 0x18) << 0x1a) {
    *(undefined4 *)(param_1 + 0x38) = 6;
  }
  iVar2 = FUN_4a004e16(param_2,local_34,param_3,param_1);
  uVar5 = (uint)(**(char **)(param_1 + 8) != '\0');
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar3 = *(int *)(param_1 + 0xc) + -1;
  }
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar3 = *(int *)(param_1 + 0x10) + iVar3 + -1;
  }
  *(uint *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - (iVar3 + iVar2 + uVar5);
  if (-1 < *(int *)(param_1 + 0x18) << 0x1b) {
    FUN_4a003192(param_1);
  }
  if (uVar5 != 0) {
    FUN_4a1652c8(**(undefined1 **)(param_1 + 8),*(undefined4 *)(param_1 + 0x24),
                 *(undefined4 *)(param_1 + 0x1c));
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  }
  if (*(int *)(param_1 + 0x18) << 0x1b < 0) {
    FUN_4a003192(param_1);
  }
  iVar3 = 0;
  do {
    if (iVar2 <= iVar3) {
      FUN_4a0031c2(param_1);
      return;
    }
    cVar1 = local_34[iVar3];
    if (cVar1 == '<') {
      for (iVar6 = 0; iVar6 < *(int *)(param_1 + 0xc); iVar6 = iVar6 + 1) {
        FUN_4a1652c8(0x30,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x1c));
      }
      iVar4 = *(int *)(param_1 + 0xc);
      iVar6 = *(int *)(param_1 + 0x3c);
LAB_4a005204:
      iVar6 = iVar6 + iVar4;
    }
    else {
      if (cVar1 == '>') {
        for (iVar6 = 0; iVar6 < *(int *)(param_1 + 0x10); iVar6 = iVar6 + 1) {
          FUN_4a1652c8(0x30,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x1c));
        }
        iVar4 = *(int *)(param_1 + 0x10);
        iVar6 = *(int *)(param_1 + 0x3c);
        goto LAB_4a005204;
      }
      FUN_4a1652c8(cVar1,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x1c));
      iVar6 = *(int *)(param_1 + 0x3c) + 1;
    }
    iVar3 = iVar3 + 1;
    *(int *)(param_1 + 0x3c) = iVar6;
  } while( true );
}



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



// Address: 4a005274

int FUN_4a005274(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  int local_58;
  int local_54;
  undefined4 local_50;
  uint local_4c [8];
  int local_2c;
  int local_28;
  int local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 *puStack_18;
  
  local_24 = 0;
  local_28 = 1;
  iVar10 = 0;
  local_20 = param_2 + 3;
  local_1c = param_1;
  puStack_18 = param_2;
LAB_4a00528e:
  while( true ) {
    iVar1 = FUN_4a1652c8(local_20,1,param_2[5]);
    if (iVar1 == 0) {
      return local_24;
    }
    if (iVar1 == 0x25) break;
    iVar2 = FUN_4a1652c6(iVar1,param_2[8]);
    if (iVar2 == 0) {
      iVar2 = FUN_4a1652c6(local_1c,param_2[6]);
      if (iVar2 != iVar1) {
        FUN_4a1652c6(local_1c,param_2[7]);
        bVar11 = iVar2 == -1;
        goto LAB_4a005306;
      }
LAB_4a0052f8:
      iVar10 = iVar10 + 1;
    }
    else {
      do {
        uVar3 = FUN_4a1652c8(local_20,1,param_2[5]);
        iVar1 = FUN_4a1652c6(uVar3,param_2[8]);
      } while (iVar1 != 0);
      FUN_4a1652c8(local_20,0xffffffff,param_2[5]);
      while( true ) {
        uVar3 = FUN_4a1652c6(local_1c,param_2[6]);
        iVar1 = FUN_4a1652c6(uVar3,param_2[8]);
        if (iVar1 == 0) break;
        iVar10 = iVar10 + 1;
      }
      FUN_4a1652c6(local_1c,param_2[7]);
    }
  }
  iVar1 = 0;
  uVar9 = 0;
  iVar2 = FUN_4a1652c8(local_20,0,param_2[5]);
  if (iVar2 == 0x2a) {
    FUN_4a1652c8(local_20,1,param_2[5]);
    uVar9 = 1;
  }
  while (iVar2 = FUN_4a1652c8(local_20,1,param_2[5]), iVar2 - 0x30U < 10) {
    if (DAT_4a005638 < iVar1) {
      return local_24;
    }
    iVar1 = iVar1 * 10 + iVar2 + -0x30;
    if (iVar1 < 0) {
      return local_24;
    }
    uVar9 = uVar9 | 0x10;
  }
  if (-1 < (int)(uVar9 << 0x1b)) {
    iVar1 = DAT_4a005634;
  }
  if (iVar2 == 0x6c) {
    iVar2 = FUN_4a1652c8(local_20,1,param_2[5]);
    if (iVar2 == 0x6c) {
LAB_4a0053a8:
      uVar6 = 2;
      goto LAB_4a005382;
    }
    uVar6 = 4;
LAB_4a0053a0:
    uVar9 = uVar9 | uVar6;
  }
  else {
    if (iVar2 == 0x4c) {
      uVar6 = 0x20;
LAB_4a005382:
      uVar9 = uVar9 | uVar6;
    }
    else {
      if (iVar2 == 0x68) {
        iVar2 = FUN_4a1652c8(local_20,1,param_2[5]);
        if (iVar2 != 0x68) {
          uVar6 = 8;
          goto LAB_4a0053a0;
        }
        uVar6 = 0x800;
        goto LAB_4a005382;
      }
      if (iVar2 == 0x6a) goto LAB_4a0053a8;
      if ((iVar2 != 0x74) && (iVar2 != 0x7a)) goto LAB_4a0053be;
    }
    iVar2 = FUN_4a1652c8(local_20,1,param_2[5]);
  }
LAB_4a0053be:
  param_2[1] = uVar9;
  param_2[2] = iVar1;
  if (iVar2 == 0x65) {
LAB_4a005478:
    iVar1 = thunk_FUN_4a005872(0xfffffffe,local_1c,&local_2c,param_2);
  }
  else {
    if (iVar2 < 0x66) {
      if (iVar2 == 0x58) {
LAB_4a005430:
        param_2[1] = uVar9 | 0x40;
        if (-1 < (int)(uVar9 << 0x1e)) {
LAB_4a0054da:
          uVar3 = 0x10;
LAB_4a0054de:
          iVar1 = FUN_4a003744(0xfffffffe,local_1c,uVar3,param_2);
          goto LAB_4a005608;
        }
        uVar3 = 0x10;
      }
      else {
        if (iVar2 < 0x59) {
          if (iVar2 != 0x45) {
            if (iVar2 < 0x46) {
              if (iVar2 == 0x25) {
                iVar1 = FUN_4a1652c6(local_1c,param_2[6]);
                if (iVar1 != 0x25) {
                  FUN_4a1652c6(local_1c,param_2[7]);
                  if (iVar1 != -1) {
                    return local_24;
                  }
                  do {
                    bVar11 = false;
                    if (local_24 == 0) {
                      return -1;
                    }
LAB_4a005306:
                  } while (bVar11);
                  return local_24;
                }
                goto LAB_4a0052f8;
              }
              if (iVar2 != 0x41) {
                return local_24;
              }
            }
            else if ((iVar2 != 0x46) && (iVar2 != 0x47)) {
              return local_24;
            }
          }
          goto LAB_4a005478;
        }
        bVar11 = iVar2 == 0x5b;
        do {
          if (bVar11) goto LAB_4a0054f8;
          if (iVar2 == 0x61) goto LAB_4a005478;
          bVar11 = true;
        } while (iVar2 == 99);
        if (iVar2 != 100) {
          return local_24;
        }
LAB_4a0054ea:
        param_2[1] = uVar9 | 0x40;
        if (-1 < (int)(uVar9 << 0x1e)) {
          uVar3 = 10;
          goto LAB_4a0054de;
        }
        uVar3 = 10;
      }
    }
    else if (iVar2 == 0x6f) {
      param_2[1] = uVar9 | 0x40;
      if (-1 < (int)(uVar9 << 0x1e)) {
        uVar3 = 8;
        goto LAB_4a0054de;
      }
      uVar3 = 8;
    }
    else {
      if (0x6f < iVar2) {
        if (iVar2 == 0x70) {
          param_2[1] = uVar9 & DAT_4a00563c;
          goto LAB_4a0054da;
        }
        if (iVar2 != 0x73) {
          if (iVar2 == 0x75) goto LAB_4a0054ea;
          if (iVar2 != 0x78) {
            return local_24;
          }
          goto LAB_4a005430;
        }
LAB_4a0054f8:
        puVar8 = (uint *)0x0;
        local_2c = 0;
        local_50 = 0;
        local_54 = 0;
        local_58 = 0;
        if (iVar2 == 99) {
          if (-1 < (int)(uVar9 << 0x1b)) {
            param_2[2] = 1;
          }
          local_50 = 1;
        }
        else if (iVar2 == 0x5b) {
          iVar1 = FUN_4a1652c8(local_20,1,param_2[5],0);
          if (iVar1 == 0x5e) {
            local_2c = 1;
            iVar1 = FUN_4a1652c8(local_20,1,param_2[5]);
          }
          if (param_2[4] == 0) {
            iVar2 = 0;
            do {
              iVar7 = iVar2 + 1;
              local_4c[iVar2] = 0;
              iVar2 = iVar7;
            } while (iVar7 < 8);
          }
          else {
            local_58 = param_2[3] + -2;
          }
          do {
            if (iVar1 == 0) {
              return local_24;
            }
            if (param_2[4] == 0) {
              local_4c[(int)(((uint)(iVar1 >> 0x1f) >> 0x1b) + iVar1) >> 5] =
                   local_4c[(int)(((uint)(iVar1 >> 0x1f) >> 0x1b) + iVar1) >> 5] |
                   1 << (iVar1 % 0x20 & 0xffU);
            }
            else {
              local_54 = local_54 + 1;
            }
            iVar1 = FUN_4a1652c8(local_20,1,param_2[5]);
          } while (iVar1 != 0x5d);
          if (local_2c != 0) {
            iVar1 = 0;
            do {
              iVar2 = iVar1 + 1;
              local_4c[iVar1] = ~local_4c[iVar1];
              iVar1 = iVar2;
            } while (iVar2 < 8);
          }
          puVar8 = local_4c;
        }
        if (param_2[4] == 0) {
          if ((int)(param_2[1] << 0x1d) < 0) {
            iVar1 = FUN_4a003994(0xfffffffe,local_1c,param_2);
          }
          else {
            iVar1 = FUN_4a0038a4(0xfffffffe,local_1c,param_2,puVar8,local_50);
          }
        }
        else if (param_2[1] * 0x20000000 < 0) {
          iVar1 = FUN_4a003bc2(0xfffffffe,local_1c,param_2);
        }
        else {
          iVar1 = FUN_4a003ac6(0xfffffffe,local_1c,param_2,local_58,local_54,local_2c,local_50);
        }
        goto LAB_4a005608;
      }
      if ((iVar2 == 0x66) || (iVar2 == 0x67)) goto LAB_4a005478;
      if (iVar2 != 0x69) {
        if (iVar2 != 0x6e) {
          return local_24;
        }
        puVar4 = (undefined4 *)*param_2;
        *param_2 = puVar4 + 1;
        piVar5 = (int *)*puVar4;
        if ((int)(uVar9 << 0x14) < 0) {
          *(char *)piVar5 = (char)iVar10;
        }
        else if ((int)(uVar9 << 0x1c) < 0) {
          *(short *)piVar5 = (short)iVar10;
        }
        else if ((int)(uVar9 << 0x1e) < 0) {
          *piVar5 = iVar10;
          piVar5[1] = iVar10 >> 0x1f;
        }
        else {
          *piVar5 = iVar10;
        }
        goto LAB_4a00528e;
      }
      param_2[1] = uVar9 | 0x40;
      if (-1 < (int)(uVar9 << 0x1e)) {
        uVar3 = 0;
        goto LAB_4a0054de;
      }
      uVar3 = 0;
    }
    iVar1 = FUN_4a003ca4(0xfffffffe,local_1c,uVar3,param_2);
  }
LAB_4a005608:
  if (iVar1 < 0) {
    if ((iVar1 == -1) && (local_28 != 0)) {
      return -1;
    }
    return local_24;
  }
  if ((uVar9 & 1) == 0) {
    local_24 = local_24 + 1;
  }
  iVar10 = iVar10 + iVar1;
  local_28 = 0;
  goto LAB_4a00528e;
}



// Address: 4a005640

uint FUN_4a005640(ushort *param_1,int param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  bool bVar2;
  
  do {
    bVar2 = param_2 == 0;
    param_2 = param_2 + -1;
    if (bVar2) {
      return param_3;
    }
    uVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (uVar1 != param_4);
  return (uint)(param_3 == 0);
}



// Address: 4a005660

void FUN_4a005660(undefined4 param_1,byte *param_2,byte *param_3,int param_4)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  int local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  undefined4 local_24;
  byte *pbStack_20;
  byte *pbStack_1c;
  int local_18;
  
  if (*param_2 == 0xff) {
    iVar10 = 0;
  }
  else {
    iVar10 = 0;
    pbVar5 = param_2;
    while( true ) {
      pbVar5 = pbVar5 + 1;
      if (*pbVar5 == 0xff) break;
      iVar10 = (uint)*pbVar5 + iVar10 * 10;
    }
    if (*param_2 == 0x2d) {
      iVar10 = -iVar10;
    }
  }
  local_28 = 0;
  bVar1 = *param_3;
  local_24 = param_1;
  pbStack_20 = param_2;
  pbStack_1c = param_3;
  local_18 = param_4;
  if ((bVar1 == 0x2d) || (uVar2 = 0, bVar1 == 0x2b)) {
    param_3 = param_3 + 1;
    local_28 = (uint)(bVar1 == 0x2d);
    uVar2 = 0;
  }
  while( true ) {
    iVar9 = (int)(uVar2 >> 0x20);
    bVar1 = *param_3;
    if (bVar1 == 0xff) break;
    param_3 = param_3 + 1;
    local_30 = (uint)bVar1;
    lVar11 = thunk_FUN_4a1652e0((int)uVar2,iVar9,10);
    uVar2 = lVar11 + (ulonglong)local_30;
  }
  uVar3 = thunk_FUN_4a1727bc(0);
  if (local_28 != 0) {
    uVar3 = uVar3 * 5 >> 1;
  }
  local_2c = (uVar3 & 0xffffff) >> 0x16;
  if (1 < local_2c) {
    local_2c = 0xffffffff;
  }
  iVar10 = iVar10 + local_18;
  if ((int)uVar2 == 0 && iVar9 == 0) {
    uVar6 = local_28 << 0x1f;
    uVar8 = 0;
LAB_4a00586a:
    thunk_FUN_4a006514(local_24,uVar6,uVar8);
  }
  else {
    if (iVar10 < DAT_4a005b00) {
      local_34 = local_28 << 0x1f;
      uVar3 = 0;
    }
    else {
      if (iVar10 < 0x1f5) {
        uVar3 = -local_2c;
        if (-1 < iVar10) {
          uVar3 = local_2c;
        }
        iVar7 = iVar10;
        if (iVar10 < 0) {
          iVar7 = -iVar10;
        }
        FUN_4a006320(auStack_38,iVar7,uVar3);
        local_44 = DAT_4a005b08;
        if (iVar9 == 0) {
          uVar2 = uVar2 << 0x20;
          local_44 = DAT_4a005b08 + -0x20;
        }
        if ((uVar2 & 0xffff000000000000) == 0) {
          uVar2 = uVar2 << 0x10;
          local_44 = local_44 + -0x10;
        }
        if ((uVar2 & 0xff00000000000000) == 0) {
          uVar2 = uVar2 << 8;
          local_44 = local_44 + -8;
        }
        if ((uVar2 & 0xf000000000000000) == 0) {
          uVar2 = uVar2 << 4;
          local_44 = local_44 + -4;
        }
        if ((uVar2 & 0xc000000000000000) == 0) {
          uVar2 = uVar2 << 2;
          local_44 = local_44 + -2;
        }
        uVar3 = (uint)uVar2;
        if ((uVar2 & 0x8000000000000000) == 0) {
          uVar2 = CONCAT44((int)(uVar2 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3),uVar3 * 2);
          local_44 = local_44 + -1;
        }
        local_40 = (undefined4)(uVar2 >> 0x20);
        uStack_3c = (undefined4)uVar2;
        if (iVar10 < 1) {
          uVar12 = thunk_FUN_4a006cc0(&local_44,auStack_38,local_2c);
        }
        else {
          uVar12 = thunk_FUN_4a006d30();
        }
        uVar3 = DAT_4a005b0c;
        uVar8 = (uint)((ulonglong)uVar12 >> 0x20);
        uVar6 = (uint)uVar12;
        if (local_28 != 0) {
          uVar6 = uVar6 ^ 0x80000000;
        }
        if (((uVar6 & 0x7fffffff) == 0 && uVar8 == 0) ||
           ((uVar6 & 0x7fffffff) >> 0x14 == DAT_4a005b0c)) {
          puVar4 = (undefined4 *)thunk_FUN_4a0007f8();
          *puVar4 = 2;
          if ((uVar6 & 0x7fffffff) >> 0x14 == uVar3) {
            thunk_FUN_4a0064b0(DAT_4a005b10 + 0x4a005858,&local_34,auStack_38,0);
            uVar6 = uVar6 & 0x80000000 | local_34;
            uVar8 = local_30;
          }
        }
        goto LAB_4a00586a;
      }
      thunk_FUN_4a0064b0(DAT_4a005b04 + 0x4a005734,&local_34,auStack_38,0);
      local_34 = local_28 << 0x1f | local_34;
      uVar3 = local_30;
    }
    thunk_FUN_4a006514(local_24,local_34,uVar3);
    puVar4 = (undefined4 *)thunk_FUN_4a0007f8();
    *puVar4 = 2;
  }
  return;
}



// Address: 4a005872

int FUN_4a005872(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint local_74;
  uint local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 *local_60;
  undefined1 *local_5c;
  undefined1 *local_58;
  undefined1 local_54 [9];
  undefined1 auStack_4b [3];
  undefined1 local_48;
  undefined1 local_47 [18];
  undefined1 auStack_35 [5];
  int local_30;
  uint local_2c;
  undefined4 uStack_24;
  undefined4 local_20;
  int *local_1c;
  int *piStack_18;
  
  local_30 = 0;
  uVar8 = param_4[1];
  iVar10 = param_4[2];
  local_6c = 0;
  uStack_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  piStack_18 = param_4;
  iVar2 = thunk_FUN_4a003144();
  local_70 = (uint)*(byte *)((int)*(int **)(iVar2 + 0xc) + **(int **)(iVar2 + 0xc));
  iVar2 = -1;
  do {
    iVar4 = iVar2;
    iVar2 = iVar4 + 1;
    local_2c = FUN_4a1652c6(local_20,param_4[6]);
    iVar3 = FUN_4a1652c6(local_2c,param_4[8]);
  } while (iVar3 != 0);
  if (local_2c == 0xffffffff) {
    return -1;
  }
  uVar8 = uVar8 & 0xfffff97f;
  if (0 < iVar10) {
    if (local_2c != 0x2b) {
      if (local_2c != 0x2d) goto LAB_4a0058e0;
      uVar8 = uVar8 | 0x400;
    }
    iVar2 = iVar4 + 2;
    local_2c = FUN_4a1652c6(local_20,param_4[6]);
    iVar10 = iVar10 + -1;
  }
LAB_4a0058e0:
  local_48 = 0x2d;
  if (-1 < (int)(uVar8 << 0x15)) {
    local_48 = 0x2b;
  }
  local_58 = local_47;
  local_5c = local_54;
  if (0 < iVar10) {
    if ((((local_2c == 0x69) || (local_2c == 0x49)) || (local_2c == 0x6e)) || (local_2c == 0x4e)) {
      local_74 = local_2c;
      iVar3 = thunk_FUN_4a1729cc(0xfffffffd,local_20,local_1c,param_4,iVar2,uVar8,iVar10);
      if (iVar3 != -3) {
        return iVar3;
      }
    }
    do {
      if (local_2c != 0x30) {
        if (((local_2c == 0x78) || (local_2c == 0x58)) &&
           ((local_6c == 1 &&
            (iVar3 = thunk_FUN_4a1729c8(0xfffffffd,local_20,local_1c,param_4,iVar2,uVar8,iVar10),
            iVar3 != -3)))) {
          return iVar3;
        }
        break;
      }
      iVar2 = iVar2 + 1;
      local_2c = FUN_4a1652c6(local_20,param_4[6]);
      iVar10 = iVar10 + -1;
      uVar8 = uVar8 | 0x200;
      *local_1c = iVar2;
      local_6c = local_6c + 1;
    } while (0 < iVar10);
  }
  if (local_2c == local_70) {
    uVar8 = uVar8 | 0x80;
    iVar3 = iVar2;
    while( true ) {
      iVar10 = iVar10 + -1;
      iVar2 = iVar3 + 1;
      local_2c = FUN_4a1652c6(local_20,param_4[6]);
      if (local_2c != 0x30) break;
      local_30 = local_30 + -1;
      uVar8 = uVar8 | 0x200;
      *local_1c = iVar3 + 2;
      local_2c = 0x30;
      iVar3 = iVar2;
    }
  }
  do {
    if (iVar10 < 1) {
LAB_4a005ace:
      FUN_4a1652c6(local_20,param_4[7]);
      *local_58 = 0xff;
      *local_5c = 0xff;
      local_68 = 0;
      uStack_64 = 0;
      FUN_4a005660(&local_68,local_54,&local_48,local_30);
      if (-1 < (int)(uVar8 << 0x16)) {
        return -2;
      }
      if ((uVar8 & 0x24) != 0) {
        if ((uVar8 & 1) != 0) {
          return iVar2;
        }
        piVar5 = (int *)*param_4;
        *param_4 = (int)(piVar5 + 1);
        puVar6 = (undefined4 *)*piVar5;
        *puVar6 = local_68;
        puVar6[1] = uStack_64;
        return iVar2;
      }
      thunk_FUN_4a0065f4(&local_74,&local_68);
      if ((uVar8 & 1) != 0) {
        return iVar2;
      }
      puVar6 = (undefined4 *)*param_4;
      *param_4 = (int)(puVar6 + 1);
      *(uint *)*puVar6 = local_74;
      return iVar2;
    }
    if ((local_2c == local_70) && (-1 < (int)(uVar8 << 0x18))) {
      uVar9 = uVar8 | 0x80;
    }
    else {
      if (9 < local_2c - 0x30) {
        if ((0 < iVar10) &&
           (((local_2c == 0x65 || (local_2c == 0x45)) && ((int)(uVar8 << 0x16) < 0)))) {
          uVar8 = uVar8 & 0xfffffcff;
          iVar11 = iVar10 + -1;
          iVar4 = FUN_4a1652c6(local_20,param_4[6]);
          iVar3 = 0x20;
          if (0 < iVar11) {
            iVar3 = iVar4;
          }
          if (iVar3 == 0x2b) {
LAB_4a005a0e:
            iVar4 = FUN_4a1652c6(local_20,param_4[6]);
            iVar11 = iVar10 + -2;
            iVar1 = iVar2 + 2;
          }
          else {
            iVar1 = iVar2 + 1;
            if (iVar3 == 0x2d) {
              uVar8 = uVar8 | 0x100;
              goto LAB_4a005a0e;
            }
          }
          iVar2 = iVar1;
          if ((int)(uVar8 << 0x17) < 0) {
            uVar7 = 0x2d;
          }
          else {
            uVar7 = 0x2b;
          }
          *local_5c = uVar7;
          local_60 = local_5c + 1;
          local_5c = local_60;
          while ((0 < iVar11 && (uVar9 = iVar4 - 0x30, uVar9 < 10))) {
            iVar11 = iVar11 + -1;
            if (local_5c < auStack_4b) {
              *local_5c = (char)uVar9;
              if (((uVar9 & 0xff) != 0) || (local_60 < local_5c)) {
                local_5c = local_5c + 1;
              }
            }
            else {
              local_30 = DAT_4a005b14;
              if (-1 < (int)(uVar8 << 0x17)) {
                local_30 = -DAT_4a005b14;
              }
            }
            iVar2 = iVar2 + 1;
            iVar4 = FUN_4a1652c6(local_20,param_4[6]);
            *local_1c = iVar2;
            uVar8 = uVar8 | 0x200;
          }
        }
        goto LAB_4a005ace;
      }
      uVar9 = uVar8 | 0x200;
      if (local_58 < auStack_35) {
        *local_58 = (char)(local_2c - 0x30);
        local_58 = local_58 + 1;
        if ((int)(uVar8 << 0x18) < 0) {
          local_30 = local_30 + -1;
        }
      }
      else if (-1 < (int)(uVar8 << 0x18)) {
        local_30 = local_30 + 1;
      }
    }
    iVar10 = iVar10 + -1;
    if ((int)(uVar9 << 0x16) < 0) {
      *local_1c = iVar2 + 1;
    }
    iVar2 = iVar2 + 1;
    local_2c = FUN_4a1652c6(local_20,param_4[6]);
    uVar8 = uVar9;
  } while( true );
}



// Address: 4a005b4e

undefined4 FUN_4a005b4e(undefined2 *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)thunk_FUN_4a003120();
  iVar2 = *piVar1;
  if (*(char *)(iVar2 + 0x101) == '\x01') {
    uVar3 = FUN_4a1652ca(param_1,param_2,param_3,iVar2 + *(int *)(iVar2 + 0x103) + 0x103);
  }
  else if (*(char *)(iVar2 + param_2) == '\0') {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 1;
    *param_1 = (short)param_2;
  }
  return uVar3;
}



// Address: 4a005b98

int FUN_4a005b98(undefined4 param_1,char *param_2)

{
  int iVar1;
  
  if (((param_2 == (char *)0x0) || (*param_2 == '\0')) ||
     (iVar1 = thunk_FUN_4a00142c(param_2,&DAT_4a005bc0), iVar1 == 0)) {
    iVar1 = DAT_4a005bc4 + 0x4a005bb8;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



// Address: 4a005bc8

int FUN_4a005bc8(undefined4 param_1,char *param_2)

{
  int iVar1;
  
  if (((param_2 == (char *)0x0) || (*param_2 == '\0')) ||
     (iVar1 = thunk_FUN_4a00142c(param_2,&DAT_4a005bf0), iVar1 == 0)) {
    iVar1 = DAT_4a005bf4 + 0x4a005be8;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



// Address: 4a005bfc

undefined8 FUN_4a005bfc(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 - (param_1 >> 2);
  uVar1 = uVar1 + (uVar1 >> 4);
  uVar1 = uVar1 + (uVar1 >> 8);
  uVar1 = uVar1 + (uVar1 >> 0x10) >> 3;
  iVar2 = (param_1 - 10) + uVar1 * -10;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 10;
  }
  else {
    uVar1 = uVar1 + 1;
  }
  return CONCAT44(iVar2,uVar1);
}



// Address: 4a005c34

undefined4 FUN_4a005c34(undefined4 param_1)

{
  return param_1;
}



// Address: 4a005c48

undefined4 * FUN_4a005c48(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  puVar3 = (undefined4 *)thunk_FUN_4a006310();
  puVar5 = (undefined4 *)*puVar3;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)thunk_FUN_4a15e080(0x20);
    if (puVar5 == (undefined4 *)0x0) {
      FUN_4a149ab0();
    }
    uVar1 = DAT_4a005c90;
    uVar4 = 0;
    *puVar3 = puVar5;
    *puVar5 = 0;
    puVar5[1] = uVar1;
    puVar5[2] = PTR_DAT_4a005c94;
    *(undefined1 *)(puVar5 + 3) = 0;
    iVar2 = DAT_4a005c98;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    if (iVar2 != 0) {
      uVar4 = FUN_4a00642a(0,iVar2,puVar5 + 2);
    }
    puVar5[7] = uVar4;
  }
  return puVar5;
}



// Address: 4a005c9c

void FUN_4a005c9c(uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (0x39800000 < (int)param_1) {
    iVar13 = 0;
    iVar14 = 7;
    iVar12 = ((param_1 & 0x7fffffff) >> 0x17) - 0x7f;
    iVar4 = 0;
    iVar10 = -iVar12;
    uVar9 = 0x20000000;
    uVar8 = (param_1 & 0xffffff | 0x800000) << 6;
    uVar7 = 0;
    do {
      piVar11 = (int *)(DAT_4a005e48 + 0x4a005cf0 + iVar14 * 0x20);
      iVar15 = piVar11[1];
      bVar17 = iVar15 == iVar12;
      iVar16 = iVar15;
      if (iVar12 <= iVar15) {
        iVar16 = *piVar11 - ((int)uVar8 >> (iVar15 - iVar12 & 0xffU));
      }
      iVar3 = iVar15 - iVar12;
      if (iVar15 >= iVar12) {
        bVar17 = iVar16 == 0;
        iVar3 = iVar16;
      }
      if (!bVar17 && iVar3 < 0 == (iVar15 < iVar12 && SBORROW4(iVar15,iVar12))) {
        lVar1 = (longlong)piVar11[2] * 0x20000000;
        uVar9 = (uint)lVar1;
        lVar20 = (longlong)piVar11[3] * 0x20000000;
        lVar19 = (longlong)(int)uVar8 * (longlong)piVar11[2];
        iVar4 = piVar11[4];
        lVar2 = (longlong)(int)uVar8 * (longlong)piVar11[3];
        uVar18 = FUN_4a0008b0((int)lVar2,(int)((ulonglong)lVar2 >> 0x20),iVar4 - iVar12);
        iVar14 = iVar4;
        if (iVar10 < iVar4) {
          iVar14 = iVar10;
        }
        local_30 = (undefined4)lVar19;
        local_2c = (undefined4)((ulonglong)lVar19 >> 0x20);
        lVar19 = FUN_4a0008b0(local_30,local_2c,-(iVar12 + iVar14));
        local_24 = (undefined4)((ulonglong)lVar20 >> 0x20);
        local_28 = (undefined4)lVar20;
        lVar20 = FUN_4a0008b0(local_28,local_24,iVar4 - iVar14);
        uVar8 = (uint)(lVar19 + lVar20) >> 0x1d | (int)((ulonglong)(lVar19 + lVar20) >> 0x20) * 8;
        iVar13 = piVar11[5];
        uVar7 = piVar11[6] - 1;
        iVar4 = piVar11[7];
        uVar9 = uVar9 - (uint)uVar18 >> 0x1d |
                ((int)((ulonglong)lVar1 >> 0x20) -
                ((int)((ulonglong)uVar18 >> 0x20) + (uint)(uVar9 < (uint)uVar18))) * 8;
        iVar10 = iVar14;
        break;
      }
      bVar17 = iVar14 != 0;
      iVar14 = iVar14 + -1;
    } while (bVar17);
    iVar12 = 0;
    do {
      iVar16 = *(int *)(DAT_4a005e4c + 0x4a005dc0 + iVar4 * 4);
      iVar14 = (int)uVar8 >> (iVar4 + iVar10 & 0xffU);
      if ((int)uVar8 < 0) {
        iVar14 = -iVar14;
        iVar15 = (int)uVar9 >> (iVar4 - iVar10 & 0xffU);
        iVar16 = -(iVar16 >> (iVar4 - uVar7 & 0xff));
      }
      else {
        iVar15 = -((int)uVar9 >> (iVar4 - iVar10 & 0xffU));
        iVar16 = iVar16 >> (iVar4 - uVar7 & 0xff);
      }
      uVar9 = uVar9 + iVar14;
      iVar13 = iVar13 + iVar16;
      uVar8 = uVar8 + iVar15;
      iVar12 = iVar12 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar12 < 0x20);
    uVar5 = FUN_4a171fac(1 << (uVar7 & 0xff));
    uVar5 = FUN_4a17295c(uVar5,0x1e);
    uVar6 = FUN_4a171fac(iVar13);
    FUN_4a171bb8(uVar6,uVar5);
  }
  return;
}



// Address: 4a005e50

void FUN_4a005e50(uint param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  longlong lVar20;
  longlong lVar21;
  undefined4 local_28;
  undefined4 local_24;
  
  if (0x39800000 < (int)param_1) {
    iVar13 = 0;
    uVar14 = 0;
    iVar11 = 0;
    uVar9 = 0x20000000;
    iVar12 = ((param_1 & 0x7fffffff) >> 0x17) - 0x7f;
    iVar3 = 0;
    uVar8 = (param_1 & 0xffffff | 0x800000) << 6;
    iVar6 = 8;
    do {
      piVar10 = (int *)(DAT_4a00603c + 0x4a005ea0 + iVar6 * 0x20);
      iVar15 = piVar10[1];
      bVar19 = iVar15 == iVar12;
      iVar16 = iVar15;
      if (iVar12 <= iVar15) {
        iVar16 = *piVar10 - ((int)uVar8 >> (iVar15 - iVar12 & 0xffU));
      }
      iVar2 = iVar15 - iVar12;
      if (iVar15 >= iVar12) {
        bVar19 = iVar16 == 0;
        iVar2 = iVar16;
      }
      if (!bVar19 && iVar2 < 0 == (iVar15 < iVar12 && SBORROW4(iVar15,iVar12))) {
        iVar11 = piVar10[2];
        lVar20 = (longlong)(int)uVar8 * (longlong)iVar11;
        lVar21 = (longlong)piVar10[3] * 0x20000000;
        iVar3 = piVar10[4];
        lVar1 = (longlong)(int)uVar8 * (longlong)piVar10[3];
        lVar1 = FUN_4a0008b0((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),iVar3 - iVar12,0x20000000,
                             param_1);
        lVar1 = (longlong)iVar11 * 0x20000000 + lVar1;
        iVar11 = iVar3;
        if (-iVar12 < iVar3) {
          iVar11 = -iVar12;
        }
        lVar20 = FUN_4a0008b0((int)lVar20,(int)((ulonglong)lVar20 >> 0x20),-(iVar12 + iVar11));
        local_28 = (undefined4)lVar21;
        local_24 = (undefined4)((ulonglong)lVar21 >> 0x20);
        lVar21 = FUN_4a0008b0(local_28,local_24,iVar3 - iVar11);
        uVar8 = (uint)(lVar20 + lVar21) >> 0x1d | (int)((ulonglong)(lVar20 + lVar21) >> 0x20) * 8;
        iVar13 = piVar10[5];
        uVar14 = piVar10[6] - 1;
        iVar3 = piVar10[7];
        uVar9 = (uint)lVar1 >> 0x1d | (int)((ulonglong)lVar1 >> 0x20) * 8;
        break;
      }
      bVar19 = iVar6 != 0;
      iVar6 = iVar6 + -1;
    } while (bVar19);
    iVar6 = iVar3 - (uint)(3 < iVar3);
    uVar18 = (uint)(0xd < iVar3);
    iVar12 = 0;
    uVar7 = (iVar6 - uVar18) + iVar11 + 1;
    uVar17 = ((iVar6 - uVar18) - iVar11) + 1;
    uVar18 = ((iVar6 - uVar18) - uVar14) + 1;
    do {
      iVar11 = (int)uVar8 >> (uVar7 & 0xff);
      bVar19 = -1 < (int)uVar8;
      if (bVar19) {
        iVar11 = -iVar11;
      }
      iVar6 = (int)uVar9 >> (uVar17 & 0xff);
      if (bVar19) {
        iVar6 = -iVar6;
      }
      uVar8 = uVar8 + iVar6;
      iVar6 = *(int *)(DAT_4a006040 + 0x4a005fb4 + iVar3 * 4) >> (uVar18 & 0xff);
      if (!bVar19) {
        iVar6 = -iVar6;
      }
      iVar13 = iVar13 + iVar6;
      if (iVar3 != 3 && iVar3 != 0xd) {
        uVar7 = uVar7 + 1;
        uVar17 = uVar17 + 1;
        uVar18 = uVar18 + 1;
      }
      iVar12 = iVar12 + 1;
      iVar3 = iVar3 + 1;
      uVar9 = uVar9 + iVar11;
    } while (iVar12 < 0x20);
    uVar4 = FUN_4a171fac(1 << (uVar14 & 0xff));
    uVar4 = FUN_4a17295c(uVar4,0x1e);
    uVar5 = FUN_4a171fac(iVar13);
    FUN_4a171bb8(uVar5,uVar4);
  }
  return;
}



// Address: 4a006044

undefined8 FUN_4a006044(uint param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  
  if ((int)param_1 < 0x39800001) {
    *param_2 = param_1;
    *param_3 = 0x3f800000;
    uVar2 = FUN_4a171a94();
    goto LAB_4a0062e4;
  }
  iVar10 = 0;
  uVar5 = ((param_1 & 0x7fffffff) >> 0x17) - 0x7f;
  bVar14 = -1 < (int)uVar5;
  if (bVar14) {
    uVar5 = 0;
  }
  iVar3 = (param_1 & 0xffffff | 0x800000) * 0x40;
  iVar9 = 0x20000000;
  uVar8 = uVar5;
  uVar11 = uVar5;
  if (bVar14) {
LAB_4a0061bc:
    iVar6 = 0;
  }
  else {
    iVar6 = DAT_4a0062fc + 0x4a0060b0 + uVar5 * -8;
    uVar11 = *(uint *)(iVar6 + -4);
    iVar3 = iVar3 - *(int *)(iVar6 + -8);
    uVar5 = uVar5 + ((uVar11 - (3 < (int)uVar11)) - (uint)(0xd < (int)uVar11)) + 1;
    if ((int)uVar5 < 1) {
      if ((int)uVar5 < 0) {
        iVar3 = iVar3 >> (-uVar5 & 0xff);
      }
    }
    else {
      iVar3 = iVar3 << (uVar5 & 0xff);
    }
    uVar5 = 1;
    for (uVar8 = 0; (int)uVar8 < (int)uVar11; uVar8 = uVar8 + 1) {
      bVar14 = (1 << (uVar8 & 0xff) & 0x81U) == 0;
      iVar6 = iVar10 >> (uVar5 & 0xff);
      if (bVar14) {
        iVar6 = iVar9 - iVar6;
      }
      iVar13 = iVar9 >> 1;
      if (bVar14) {
        iVar13 = -iVar13;
        iVar9 = iVar6;
      }
      else {
        iVar9 = iVar6 + iVar9;
      }
      iVar10 = iVar10 + iVar13 <<
               ((-(uint)(3 < (int)(uVar8 + 1)) - (uint)(0xd < (int)(uVar8 + 1))) +
                (uint)(3 < (int)uVar8) + (uint)(0xd < (int)uVar8) + 1 & 0xff);
      if (uVar8 != 3 && uVar8 != 0xd) {
        uVar5 = uVar5 + 2;
      }
    }
    uVar5 = (uVar8 - (3 < (int)uVar8)) - (uint)(0xd < (int)uVar8);
    if ((int)uVar8 < 4) goto LAB_4a0061bc;
    iVar6 = 1;
  }
  iVar13 = 0;
  uVar7 = ((uVar8 - iVar6) - (uint)(0xd < (int)uVar8)) + uVar5 + 1;
  uVar5 = (((uVar8 - (3 < (int)uVar8)) - (uint)(0xd < (int)uVar8)) - uVar5) + 1;
  do {
    iVar6 = *(int *)(DAT_4a006300 + 0x4a006220 + uVar8 * 4);
    if (uVar8 == 3 || uVar8 == 0xd) {
      iVar6 = iVar6 >> 1;
      iVar1 = iVar3;
    }
    else {
      iVar1 = iVar3 << 1;
    }
    iVar12 = iVar10 >> (uVar7 & 0xff);
    if (iVar3 < 0) {
      iVar12 = -iVar12;
    }
    iVar12 = iVar9 + iVar12;
    iVar9 = iVar9 >> (uVar5 & 0xff);
    if (iVar3 < 0) {
      iVar9 = -iVar9;
    }
    else {
      iVar6 = -iVar6;
    }
    iVar10 = iVar10 + iVar9;
    iVar3 = iVar1 + iVar6;
    if (uVar8 != 3 && uVar8 != 0xd) {
      uVar7 = uVar7 + 1;
      uVar5 = uVar5 + 1;
    }
    iVar13 = iVar13 + 1;
    uVar8 = uVar8 + 1;
    iVar9 = iVar12;
  } while (iVar13 < 0x20);
  uVar2 = FUN_4a171fac(iVar10);
  uVar5 = FUN_4a17211c(uVar2,DAT_4a006304);
  iVar3 = uVar11 - (3 < (int)uVar11);
  *param_2 = uVar5;
  *param_2 = (uVar5 + (iVar3 - (uint)(0xd < (int)uVar11)) * -0x800000) - 0x800000;
  uVar4 = FUN_4a171fac(iVar12);
  uVar2 = DAT_4a006308;
  uVar4 = FUN_4a17211c(uVar4,DAT_4a006308);
  *param_3 = uVar4;
  uVar4 = FUN_4a171fac(iVar12 + (iVar10 >> (iVar3 - (uint)(0xd < (int)uVar11) & 0xff)));
  uVar2 = FUN_4a17211c(uVar4,uVar2);
LAB_4a0062e4:
  *param_4 = uVar2;
  return CONCAT44(param_2,param_1);
}



// Address: 4a006310

undefined * FUN_4a006310(void)

{
  return PTR_DAT_4a00631c;
}



// Address: 4a006320

void FUN_4a006320(undefined8 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 local_48;
  undefined4 uStack_44;
  int local_40;
  undefined8 local_3c;
  int iStack_34;
  undefined8 local_30;
  int iStack_28;
  uint local_24;
  undefined8 *local_20;
  int iStack_1c;
  int iStack_18;
  
  local_30._0_4_ = *(undefined4 *)(DAT_4a0063ec + 0x4a006332);
  local_30._4_4_ = *(undefined4 *)(DAT_4a0063ec + 0x4a006336);
  iStack_28 = *(int *)(DAT_4a0063ec + 0x4a00633a);
  local_3c._0_4_ = *(undefined4 *)(DAT_4a0063ec + 0x4a00633e);
  local_3c._4_4_ = *(undefined4 *)(DAT_4a0063ec + 0x4a006342);
  iStack_34 = *(int *)(DAT_4a0063ec + 0x4a006346);
  local_20 = param_1;
  iStack_1c = param_2;
  iStack_18 = param_3;
  uVar7 = thunk_FUN_4a0015f0(param_2 + 0x1b9b,0x37);
  uVar8 = CONCAT44(local_30._4_4_,(undefined4)local_30);
  uVar4 = (int)uVar7 - 0x80;
  uVar3 = (int)((ulonglong)uVar7 >> 0x20) - 0x1b;
  bVar6 = (int)uVar3 < 0;
  if (bVar6) {
    uVar3 = -uVar3;
  }
  local_24 = (uint)bVar6;
  iVar5 = 0;
  for (; uVar7 = CONCAT44(local_3c._4_4_,(undefined4)local_3c), uVar3 != 0; uVar3 = (int)uVar3 >> 1)
  {
    if ((uVar3 & 1) != 0) {
      iVar2 = param_3;
      local_30 = uVar8;
      uVar8 = thunk_FUN_4a006cf8(&local_30,iVar5 * 0xc + DAT_4a0063ec + 0x4a0062b6);
      iStack_28 = iVar2;
    }
    iVar5 = iVar5 + 1;
  }
  iVar5 = 0;
  for (; local_30 = uVar8, local_3c = uVar7, uVar4 != 0; uVar4 = (int)uVar4 >> 1) {
    if ((uVar4 & 1) != 0) {
      puVar1 = (undefined4 *)(iVar5 * 0x10 + DAT_4a0063ec + 0x4a0062f2);
      local_48 = *puVar1;
      uStack_44 = puVar1[1];
      local_40 = puVar1[2];
      if (-param_3 == puVar1[3]) {
        local_40 = local_40 + param_3;
      }
      iVar2 = param_3;
      uVar7 = thunk_FUN_4a006cf8(&local_3c,&local_48);
      iStack_34 = iVar2;
      uVar8 = local_30;
    }
    iVar5 = iVar5 + 1;
  }
  if (local_24 == 0) {
    uVar8 = thunk_FUN_4a006cf8(&local_3c,&local_30);
  }
  else {
    uVar8 = thunk_FUN_4a006c88(&local_3c,&local_30);
  }
  *local_20 = uVar8;
  *(int *)(local_20 + 1) = param_3;
  return;
}



// Address: 4a0063f0

void FUN_4a0063f0(undefined4 param_1)

{
  FUN_4a149218(2,param_1);
  return;
}



// Address: 4a0063f8

void FUN_4a0063f8(undefined4 param_1)

{
  FUN_4a149218(2,param_1);
  return;
}



// Address: 4a00642a

void FUN_4a00642a(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)thunk_FUN_4a15e080(0x88);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  return;
}



// Address: 4a006474

undefined4 FUN_4a006474(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_2 = (uint)param_1[1] >> 0x1f;
  iVar1 = FUN_4a00662c(*param_1,param_1[1]);
  if (iVar1 == 3) {
    uVar2 = 2;
  }
  else if (iVar1 == 7) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Address: 4a0064b0

void FUN_4a0064b0(uint *param_1,uint *param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1[1];
  *param_2 = uVar1;
  param_2[1] = *param_1;
  if ((uVar1 & 0x7fffffff) >> 0x14 == 0) {
    uVar3 = FUN_4a1728ec(*param_1,param_1[1],0x40);
    uVar2 = (uint)((ulonglong)uVar3 >> 0x20);
    if (param_4 != 0) {
      param_2[1] = (uint)uVar3;
    }
    uVar1 = (uVar2 >> 0x14 & 0xfffff7ff) - 0x40;
    if (param_4 != 0) {
      *param_2 = uVar2;
    }
  }
  else {
    uVar1 = (uVar1 & 0x7fffffff) >> 0x14;
  }
  *param_3 = uVar1;
  return;
}



// Address: 4a006514

void FUN_4a006514(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = param_2;
  *param_1 = param_3;
  return;
}



// Address: 4a006520

uint FUN_4a006520(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  uint local_18;
  
  local_18 = param_4;
  FUN_4a00665c(param_1,param_2,&local_18);
  local_18 = local_18 + 0x7e;
  bVar4 = local_18 == 0;
  if ((0 < (int)local_18) || (FUN_4a170fe4(param_1,param_2,DAT_4a006618,DAT_4a00661c), bVar4)) {
    uVar6 = 0xfe < local_18;
    uVar5 = local_18 == 0xff;
    if ((int)local_18 < 0xff) {
      uVar3 = param_2 & 0x80000000;
      uVar1 = param_2 & 0x7fffffff ^ param_2 << 1;
      if ((uVar1 & 0x7f000000) != 0 || (uVar1 & 0xe00000) != 0) {
        iVar2 = (param_2 & 0x7fffffff) + 0xc8000000;
        if (iVar2 < 0x100000) {
          return uVar3;
        }
        bVar4 = (bool)((byte)(param_1 >> 0x1c) & 1);
        if ((bVar4 && (param_1 & 0xfffffff) != 0) ||
           ((bVar4 && (-1 < (int)((param_1 & 0x20000000) * 4 + -0x40000000))))) {
          bVar4 = 0xdfffffff < param_1;
          param_1 = param_1 + 0x20000000;
          iVar2 = iVar2 + (uint)bVar4;
        }
        if (0xfefffff < iVar2) {
          return uVar3 | 0x7f800000;
        }
        return uVar3 | iVar2 << 3 | param_1 >> 0x1d;
      }
      if ((param_2 & 0x100000) == 0) {
        return uVar3;
      }
      if (param_1 == 0 && (param_2 & 0xfffff) == 0) {
        return param_2 & 0xff8fffff;
      }
      uVar1 = 0;
      uVar3 = DAT_4a170840 & 0xf;
      if (uVar3 != 9) {
        if (uVar3 == 10) {
          if ((DAT_4a170840 & 0x40) != 0) {
            uVar1 = 0x80000000;
          }
          return uVar1;
        }
        if (uVar3 != 8) {
          return 0;
        }
        if ((DAT_4a170840 & 0x40) != 0) {
          return 0;
        }
        if ((DAT_4a170840 & 0x10) == 0) {
          return DAT_4a170a38 & 0xff000000 | (DAT_4a170a38 & 0xffffff) << 3;
        }
        return 0;
      }
      if ((DAT_4a170840 & 0x100000) == 0) {
        return 0;
      }
      if ((DAT_4a170840 & 0x70000) == 0) {
        return 0x30000000;
      }
      return 8;
    }
    thunk_FUN_4a003182(2);
    FUN_4a171488(param_1,param_2,DAT_4a006618,DAT_4a00661c);
    uVar1 = DAT_4a006624;
    if ((bool)uVar6 && !(bool)uVar5) {
      uVar1 = DAT_4a006628;
    }
  }
  else {
    uVar1 = FUN_4a170798(param_1,param_2);
    if ((uVar1 & 0x7fffffff) == 0) {
      thunk_FUN_4a003182(2,0);
    }
  }
  return uVar1;
}



// Address: 4a0065f4

void FUN_4a0065f4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_4a006520(*param_2,param_2[1]);
  *param_1 = uVar1;
  return;
}



// Address: 4a00662c

uint FUN_4a00662c(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0 || (param_2 & 0xfffff) != 0) {
    uVar1 = 4;
  }
  if ((param_2 & 0x7fffffff) >> 0x14 != 0) {
    uVar1 = uVar1 | 1;
  }
  if (DAT_4a006658 == (param_2 & 0x7fffffff) >> 0x14) {
    uVar1 = uVar1 | 2;
  }
  if (uVar1 == 1) {
    uVar1 = 5;
  }
  return uVar1;
}



// Address: 4a00665c

void FUN_4a00665c(int param_1,uint param_2,int *param_3)

{
  uint extraout_r1;
  uint uVar1;
  int iVar2;
  
  *param_3 = 0;
  uVar1 = param_2 & 0x7fffffff;
  if (((int)uVar1 < DAT_4a0066d0) && (uVar1 != 0 || param_1 != 0)) {
    if (uVar1 < 0x100000) {
      FUN_4a1728ec(param_1,param_2,0x36);
      iVar2 = -0x36;
      uVar1 = extraout_r1 & 0x7fffffff;
      *param_3 = -0x36;
    }
    else {
      iVar2 = *param_3;
    }
    *param_3 = iVar2 + ((int)uVar1 >> 0x14) + -0x3fe;
  }
  return;
}



// Address: 4a0066d8

undefined8 FUN_4a0066d8(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  
  iVar3 = 0;
  uVar1 = param_2;
  if (param_2 <= param_1 >> 4) {
    if (param_2 <= param_1 >> 8) {
      if (param_1 >> 0xc < param_2) goto LAB_4a00167c;
      if (param_1 >> 0x10 < param_2) goto LAB_4a00164c;
      uVar1 = param_2 << 8;
      iVar3 = -0x1000000;
      if (uVar1 <= param_1 >> 0x10) {
        iVar3 = -0x10000;
        uVar1 = param_2 << 0x10;
      }
      if (param_1 >> 0xc < uVar1) goto LAB_4a00167c;
      bVar4 = false;
      if (uVar1 == 0) {
        FUN_4a0063f0(2);
        return 0;
      }
      do {
        if (bVar4) {
          uVar1 = uVar1 >> 8;
        }
LAB_4a00164c:
        bVar4 = uVar1 <= param_1 >> 0xf;
        if (bVar4) {
          param_1 = param_1 + uVar1 * -0x8000;
        }
        bVar5 = uVar1 <= param_1 >> 0xe;
        if (bVar5) {
          param_1 = param_1 + uVar1 * -0x4000;
        }
        bVar6 = uVar1 <= param_1 >> 0xd;
        if (bVar6) {
          param_1 = param_1 + uVar1 * -0x2000;
        }
        bVar7 = uVar1 <= param_1 >> 0xc;
        if (bVar7) {
          param_1 = param_1 + uVar1 * -0x1000;
        }
        iVar3 = (((iVar3 * 2 + (uint)bVar4) * 2 + (uint)bVar5) * 2 + (uint)bVar6) * 2 + (uint)bVar7;
LAB_4a00167c:
        bVar4 = uVar1 <= param_1 >> 0xb;
        if (bVar4) {
          param_1 = param_1 + uVar1 * -0x800;
        }
        bVar5 = uVar1 <= param_1 >> 10;
        if (bVar5) {
          param_1 = param_1 + uVar1 * -0x400;
        }
        bVar6 = uVar1 <= param_1 >> 9;
        if (bVar6) {
          param_1 = param_1 + uVar1 * -0x200;
        }
        uVar2 = ((iVar3 * 2 + (uint)bVar4) * 2 + (uint)bVar5) * 2 + (uint)bVar6;
        bVar5 = uVar1 <= param_1 >> 8;
        if (bVar5) {
          param_1 = param_1 + uVar1 * -0x100;
        }
        iVar3 = uVar2 * 2 + (uint)bVar5;
        bVar4 = true;
      } while (CARRY4(uVar2,uVar2) || CARRY4(uVar2 * 2,(uint)bVar5));
    }
    bVar4 = uVar1 <= param_1 >> 7;
    if (bVar4) {
      param_1 = param_1 + uVar1 * -0x80;
    }
    bVar5 = uVar1 <= param_1 >> 6;
    if (bVar5) {
      param_1 = param_1 + uVar1 * -0x40;
    }
    bVar6 = uVar1 <= param_1 >> 5;
    if (bVar6) {
      param_1 = param_1 + uVar1 * -0x20;
    }
    bVar7 = uVar1 <= param_1 >> 4;
    if (bVar7) {
      param_1 = param_1 + uVar1 * -0x10;
    }
    iVar3 = (((iVar3 * 2 + (uint)bVar4) * 2 + (uint)bVar5) * 2 + (uint)bVar6) * 2 + (uint)bVar7;
  }
  bVar4 = uVar1 <= param_1 >> 3;
  if (bVar4) {
    param_1 = param_1 + uVar1 * -8;
  }
  bVar5 = uVar1 <= param_1 >> 2;
  if (bVar5) {
    param_1 = param_1 + uVar1 * -4;
  }
  bVar6 = uVar1 <= param_1 >> 1;
  if (bVar6) {
    param_1 = param_1 + uVar1 * -2;
  }
  uVar2 = param_1 - uVar1;
  if (uVar1 > param_1) {
    uVar2 = param_1;
  }
  return CONCAT44(uVar2,(((iVar3 * 2 + (uint)bVar4) * 2 + (uint)bVar5) * 2 + (uint)bVar6) * 2 +
                        (uint)(uVar1 <= param_1));
}



// Address: 4a006704

undefined8 FUN_4a006704(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = param_1 << 1;
  uVar2 = (param_1 & 0x7fffffff) >> 0x13;
  uVar1 = param_2 << 0xb;
  if (iVar5 != 0 || param_2 != 0) {
    uVar2 = uVar2 + 0x7800;
  }
  uVar3 = param_1 << 0xb | param_2 >> 0x15;
  uVar2 = param_1 & 0x80000000 | uVar2 >> 1;
  if (iVar5 != 0 || param_2 != 0) {
    uVar3 = uVar3 | 0x80000000;
  }
  if (iVar5 >> 0x15 != 0) {
    if (iVar5 >> 0x15 == -1) {
      uVar2 = uVar2 | 0x40000000;
    }
    return CONCAT44(uVar3,uVar2);
  }
  if ((uVar3 & 0x80000000) == 0) {
    return CONCAT44(uVar3,uVar2);
  }
  uVar4 = uVar3 & 0x7fffffff;
  if (uVar4 == 0) {
    if ((param_2 & 0x1fffff) >> 5 == 0) {
      uVar1 = param_2 << 0x1b;
      iVar5 = 0x10;
    }
    else {
      iVar5 = 0;
    }
    if (uVar1 >> 0x18 == 0) {
      uVar1 = uVar1 << 8;
      iVar5 = iVar5 + 8;
    }
    if (uVar1 >> 0x1c == 0) {
      uVar1 = uVar1 << 4;
      iVar5 = iVar5 + 4;
    }
    if (uVar1 >> 0x1e == 0) {
      uVar1 = uVar1 << 2;
      iVar5 = iVar5 + 2;
    }
    if (-1 < (int)uVar1) {
      uVar1 = uVar1 << 1;
      iVar5 = iVar5 + 1;
    }
    return CONCAT44(uVar1,(uVar2 - 0x1f) - iVar5);
  }
  if (uVar4 >> 0x10 == 0) {
    uVar4 = uVar3 << 0x10;
    iVar5 = 0x10;
  }
  else {
    iVar5 = 0;
  }
  if (uVar4 >> 0x18 == 0) {
    uVar4 = uVar4 << 8;
    iVar5 = iVar5 + 8;
  }
  if (uVar4 >> 0x1c == 0) {
    uVar4 = uVar4 << 4;
    iVar5 = iVar5 + 4;
  }
  if (uVar4 >> 0x1e == 0) {
    uVar4 = uVar4 << 2;
    iVar5 = iVar5 + 2;
  }
  if (-1 < (int)uVar4) {
    iVar5 = iVar5 + 1;
  }
  if (-1 < (int)uVar4) {
    uVar4 = uVar4 << 1;
  }
  return CONCAT44(uVar4 | uVar1 >> (0x20U - iVar5 & 0xff),(uVar2 - iVar5) + 1);
}



// Address: 4a0067f8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_4a0067f8(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint unaff_r4;
  uint unaff_r5;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  
  uVar10 = unaff_r4 >> 0x10;
  uVar9 = unaff_r5 >> 0x10;
  uVar12 = (uint)*(byte *)((unaff_r4 >> 0x18) + 0x4a006a44);
  uVar23 = unaff_r5 & ~(uVar9 << 0x10);
  uVar19 = unaff_r4 & ~(uVar10 << 0x10);
  uVar1 = (uint)((byte)param_2 & 1) << 0x1f | param_3 >> 1;
  if ((bool)((byte)param_3 & 1)) {
    uVar3 = 0x80000000;
  }
  else {
    uVar3 = 0;
  }
  iVar13 = ((0x800000 - (uVar10 * uVar12 + uVar12)) * uVar12 >> 0x13) + 2;
  uVar20 = 0x20000000 - ((unaff_r4 >> 0xd) * iVar13 + iVar13);
  uVar12 = uVar20 >> 0x10;
  uVar22 = uVar12 * iVar13 + ((uVar20 & ~(uVar12 << 0x10)) * iVar13 >> 0x10) >> 6;
  uVar12 = uVar22 * (param_2 >> 0x10) >> 0x10;
  uVar4 = uVar1 - uVar12 * uVar9;
  uVar20 = uVar12 * uVar23;
  bVar24 = uVar20 * 0x10000 <= uVar3;
  uVar3 = uVar3 + uVar20 * -0x10000;
  uVar20 = uVar20 >> 0x10;
  bVar2 = uVar4 - uVar20 < (uint)bVar24;
  bVar25 = uVar20 < uVar4 || bVar2;
  uVar5 = uVar4 - (uVar20 + !bVar24);
  uVar14 = uVar12 * uVar19;
  if (uVar20 < uVar4 || bVar2) {
    bVar25 = uVar14 * 0x10000 <= uVar5;
  }
  uVar5 = uVar5 + uVar14 * -0x10000;
  uVar4 = ((param_2 >> 1) - (uVar10 * uVar12 + (uint)(uVar1 < uVar12 * uVar9))) -
          ((uVar14 >> 0x10) + (uint)!bVar25);
  uVar1 = uVar22 * (uVar4 >> 2) >> 0x10;
  uVar20 = uVar1 * uVar9;
  bVar24 = uVar20 * 0x80000 <= uVar3;
  uVar3 = uVar3 + uVar20 * -0x80000;
  uVar20 = uVar20 >> 0xd;
  bVar2 = uVar5 - uVar20 < (uint)bVar24;
  bVar25 = uVar20 < uVar5 || bVar2;
  uVar14 = uVar5 - (uVar20 + !bVar24);
  uVar15 = uVar10 * uVar1;
  if (uVar20 < uVar5 || bVar2) {
    bVar25 = uVar15 * 0x80000 <= uVar14;
  }
  uVar14 = uVar14 + uVar15 * -0x80000;
  uVar20 = uVar1 * uVar23;
  bVar26 = uVar20 * 8 <= uVar3;
  uVar5 = uVar20 >> 0x1d;
  bVar2 = uVar14 - uVar5 < (uint)bVar26;
  bVar24 = uVar5 < uVar14 || bVar2;
  uVar6 = uVar14 - (uVar5 + !bVar26);
  uVar16 = uVar1 * uVar19;
  if (uVar5 < uVar14 || bVar2) {
    bVar24 = uVar16 * 8 <= uVar6;
  }
  uVar6 = uVar6 + uVar16 * -8;
  uVar5 = ((uVar4 - ((uVar15 >> 0xd) + (uint)!bVar25)) - ((uVar16 >> 0x1d) + (uint)!bVar24)) *
          0x4000000 | uVar6 >> 6;
  uVar14 = uVar6 * 0x4000000 | uVar3 + uVar20 * -8 >> 6;
  uVar21 = uVar22 * (uVar5 >> 0xf);
  uVar20 = uVar20 * -0x20000000;
  uVar3 = uVar21 >> 0x10;
  uVar15 = uVar14 - uVar3 * uVar9;
  uVar4 = uVar3 * uVar23;
  bVar24 = uVar4 * 0x10000 <= uVar20;
  uVar20 = uVar20 + uVar4 * -0x10000;
  uVar4 = uVar4 >> 0x10;
  bVar2 = uVar15 - uVar4 < (uint)bVar24;
  bVar25 = uVar4 < uVar15 || bVar2;
  uVar6 = uVar15 - (uVar4 + !bVar24);
  uVar16 = uVar3 * uVar19;
  if (uVar4 < uVar15 || bVar2) {
    bVar25 = uVar16 * 0x10000 <= uVar6;
  }
  uVar6 = uVar6 + uVar16 * -0x10000;
  uVar14 = (uVar5 - (uVar10 * uVar3 + (uint)(uVar14 < uVar3 * uVar9))) -
           ((uVar16 >> 0x10) + (uint)!bVar25);
  uVar4 = uVar22 * (uVar14 >> 2) >> 0x10;
  uVar5 = uVar4 * uVar9;
  bVar24 = uVar5 * 0x80000 <= uVar20;
  uVar20 = uVar20 + uVar5 * -0x80000;
  uVar5 = uVar5 >> 0xd;
  bVar2 = uVar6 - uVar5 < (uint)bVar24;
  bVar25 = uVar5 < uVar6 || bVar2;
  uVar15 = uVar6 - (uVar5 + !bVar24);
  uVar16 = uVar10 * uVar4;
  if (uVar5 < uVar6 || bVar2) {
    bVar25 = uVar16 * 0x80000 <= uVar15;
  }
  uVar15 = uVar15 + uVar16 * -0x80000;
  uVar5 = uVar4 * uVar23;
  bVar26 = uVar5 * 8 <= uVar20;
  uVar6 = uVar5 >> 0x1d;
  bVar2 = uVar15 - uVar6 < (uint)bVar26;
  bVar24 = uVar6 < uVar15 || bVar2;
  uVar7 = uVar15 - (uVar6 + !bVar26);
  uVar17 = uVar4 * uVar19;
  if (uVar6 < uVar15 || bVar2) {
    bVar24 = uVar17 * 8 <= uVar7;
  }
  uVar7 = uVar7 + uVar17 * -8;
  uVar16 = ((uVar14 - ((uVar16 >> 0xd) + (uint)!bVar25)) - ((uVar17 >> 0x1d) + (uint)!bVar24)) *
           0x4000000 | uVar7 >> 6;
  uVar11 = uVar3 * 0x400000 + uVar4 * 0x200;
  uVar22 = uVar22 * (uVar16 >> 0xf);
  uVar7 = uVar7 * 0x4000000 | uVar20 + uVar5 * -8 >> 6;
  uVar5 = uVar5 * -0x20000000;
  uVar14 = uVar22 >> 0x10;
  uVar20 = uVar14 << 0x1c;
  uVar17 = uVar7 - uVar14 * uVar9;
  uVar6 = uVar14 * uVar23;
  bVar24 = uVar6 * 0x10000 <= uVar5;
  uVar15 = uVar6 >> 0x10;
  bVar2 = uVar17 - uVar15 < (uint)bVar24;
  bVar25 = uVar15 < uVar17 || bVar2;
  uVar8 = uVar17 - (uVar15 + !bVar24);
  uVar18 = uVar14 * uVar19;
  if (uVar15 < uVar17 || bVar2) {
    bVar25 = uVar18 * 0x10000 <= uVar8;
  }
  uVar8 = uVar8 + uVar18 * -0x10000;
  uVar22 = uVar22 >> 0x14;
  uVar17 = uVar11 + uVar22;
  uVar15 = ((uVar16 - (uVar10 * uVar14 + (uint)(uVar7 < uVar14 * uVar9))) -
           ((uVar18 >> 0x10) + (uint)!bVar25)) * 0x4000 | uVar8 >> 0x12;
  uVar14 = uVar8 * 0x4000 | uVar5 + uVar6 * -0x10000 >> 0x12;
  uVar5 = uVar6 * -0x40000000;
  uVar19 = uVar19 | uVar10 << 0x10;
  uVar23 = uVar23 | uVar9 << 0x10;
  bVar2 = uVar15 - uVar19 < (uint)(uVar23 <= uVar14);
  uVar10 = uVar15;
  if (uVar19 < uVar15 || bVar2) {
    uVar10 = uVar15 - (uVar19 + (uVar23 > uVar14));
    uVar14 = uVar14 - uVar23;
  }
  uVar6 = uVar6 * -0x80000000;
  bVar24 = CARRY4(uVar14,uVar14) || CARRY4(uVar14 * 2,(uint)CARRY4(uVar5,uVar5));
  uVar9 = uVar14 * 2 + (uint)CARRY4(uVar5,uVar5);
  bVar25 = CARRY4(uVar10 * 2,(uint)bVar24);
  bVar26 = CARRY4(uVar10,uVar10) || bVar25;
  uVar5 = uVar10 * 2 + (uint)bVar24;
  bVar24 = bVar26 < (uVar19 < uVar5 || uVar5 - uVar19 < (uint)(uVar23 <= uVar9));
  if ((CARRY4(uVar10,uVar10) || bVar25) || bVar24) {
    uVar5 = uVar5 - (uVar19 + (uVar23 > uVar9));
    uVar9 = uVar9 - uVar23;
  }
  bVar27 = CARRY4(uVar9,uVar9) || CARRY4(uVar9 * 2,(uint)CARRY4(uVar6,uVar6));
  uVar10 = uVar9 * 2 + (uint)CARRY4(uVar6,uVar6);
  bVar25 = CARRY4(uVar5 * 2,(uint)bVar27);
  bVar28 = CARRY4(uVar5,uVar5) || bVar25;
  uVar9 = uVar5 * 2 + (uint)bVar27;
  bVar27 = bVar28 < (uVar19 < uVar9 || uVar9 - uVar19 < (uint)(uVar23 <= uVar10));
  if ((CARRY4(uVar5,uVar5) || bVar25) || bVar27) {
    uVar9 = uVar9 - (uVar19 + (uVar23 > uVar10));
    uVar10 = uVar10 - uVar23;
  }
  if (uVar9 != 0 || uVar10 != 0) {
    uVar20 = uVar20 | 1;
  }
  uVar10 = (((uint)(uVar19 < uVar15 || bVar2) * 2 + (uint)(bVar26 || bVar24)) * 2 +
           (uint)(bVar28 || bVar27)) * 0x10000000;
  uVar9 = uVar17 + CARRY4(uVar20,uVar10);
  iVar13 = uVar12 * 0x10000 + uVar1 * 8 + (uVar21 >> 0x1a) +
           (uint)CARRY4(uVar3 * 0x400000,uVar4 * 0x200) + (uint)CARRY4(uVar11,uVar22) +
           (uint)CARRY4(uVar17,(uint)CARRY4(uVar20,uVar10));
  if (-1 < iVar13) {
    return CONCAT44(iVar13 * 2 +
                    (uint)(CARRY4(uVar9,uVar9) ||
                          CARRY4(uVar9 * 2,(uint)CARRY4(uVar20 + uVar10,uVar20 + uVar10))),
                    param_1 ^ param_4) & 0xffffffff80000000;
  }
  return CONCAT44(iVar13,param_1 ^ param_4) & 0xffffffff80000000;
}



// Address: 4a006b44

ulonglong FUN_4a006b44(undefined4 param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = param_3 >> 0xb | param_2 << 0x15;
  uVar2 = FUN_4a006ba8(param_1,param_2 >> 0xb,uVar1,param_4 + -0x3c01);
  if (((uint)uVar2 & 0x7fffffff) + 1 < 0x800) {
    return CONCAT44(uVar1,(int)((ulonglong)uVar2 >> 0x20) + (uint)uVar2 * 0x100000);
  }
  return (ulonglong)DAT_4a006ba4;
}



// Address: 4a006ba8

undefined8 FUN_4a006ba8(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint unaff_r6;
  int unaff_r11;
  bool bVar3;
  bool bVar4;
  
  uVar2 = param_4;
  if ((int)param_4 < 0) {
    unaff_r6 = (unaff_r6 | unaff_r6 << 0x10) >> 0x10;
    if ((int)param_4 < -0x3f) {
      uVar1 = unaff_r6 | param_3;
      uVar2 = 0;
      param_3 = 0;
      unaff_r6 = (uVar1 | uVar1 << 0x10) >> 0x10 | param_2;
      param_2 = 0;
      if ((int)param_4 < -0x40) {
        unaff_r6 = (unaff_r6 | unaff_r6 << 0x10) >> 0x10;
      }
    }
    else {
      if ((int)param_4 < -0x1f) {
        unaff_r6 = unaff_r6 | param_3;
        param_4 = param_4 + 0x20;
        param_2 = 0;
        param_3 = param_2;
      }
      uVar1 = -param_4;
      uVar2 = 0;
      if (uVar1 != 0) {
        unaff_r6 = (unaff_r6 | unaff_r6 << 0x10) >> 0x10 | param_3 << (param_4 + 0x20 & 0xff);
        param_3 = param_3 >> (uVar1 & 0xff) | param_2 << (param_4 + 0x20 & 0xff);
        param_2 = param_2 >> (uVar1 & 0xff);
        uVar2 = 0;
      }
    }
  }
  bVar4 = SUB41(unaff_r6 >> 0x1f,0);
  if ((unaff_r6 & 0x7fffffff) == 0) {
    if (!bVar4) goto LAB_4a006bf4;
    bVar4 = (bool)((byte)param_3 & 1);
  }
  bVar3 = unaff_r11 != -1;
  if (unaff_r11 == 0) {
    bVar3 = SUB41(((uint)bVar4 << 0x1f) >> 0x1f,0);
  }
  bVar3 = bVar3 && 0xfffffffe < param_3;
  uVar1 = param_2;
  if (bVar3) {
    uVar1 = param_2 + 1;
  }
  bVar3 = bVar3 && 0xfffffffe < param_2;
  if (bVar3) {
    uVar1 = 0x80000000;
  }
  uVar2 = uVar2 + bVar3;
  param_2 = uVar1;
LAB_4a006bf4:
  return CONCAT44(param_2,uVar2 | param_1 & 0x80000000);
}



// Address: 4a006c88

void FUN_4a006c88(int *param_1,int *param_2)

{
  if ((param_1[1] & ~(*param_1 << 1)) < 0 && (param_2[1] & ~(*param_2 << 1)) < 0) {
    FUN_4a0067f8(*param_1,param_1[1],param_1[2]);
    FUN_4a006ba8();
  }
  return;
}



// Address: 4a006cc0

void FUN_4a006cc0(int *param_1,int *param_2)

{
  if ((param_1[1] & ~(*param_1 << 1)) < 0 && (param_2[1] & ~(*param_2 << 1)) < 0) {
    FUN_4a0067f8(*param_1,param_1[1],param_1[2]);
    FUN_4a006b44();
  }
  return;
}



// Address: 4a006cf8

void FUN_4a006cf8(uint *param_1,uint *param_2)

{
  if ((*param_1 & 0x40000000) == 0 && (*param_2 & 0x40000000) == 0) {
    FUN_4a006d64(*param_1,param_1[1],param_1[2]);
    FUN_4a006ba8();
  }
  return;
}



// Address: 4a006d30

void FUN_4a006d30(uint *param_1,uint *param_2)

{
  if ((*param_1 & 0x40000000) == 0 && (*param_2 & 0x40000000) == 0) {
    FUN_4a006d64(*param_1,param_1[1],param_1[2]);
    FUN_4a006b44();
  }
  return;
}



// Address: 4a006d64

/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_4a006d64(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint unaff_r4;
  uint unaff_r5;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  bool bVar19;
  
  param_1 = param_1 ^ param_4;
  if (param_3 == 0) {
    if (unaff_r5 == 0) {
      uVar11 = unaff_r4 >> 0x10;
      uVar12 = param_2 >> 0x10;
      uVar14 = unaff_r4 & ~(uVar11 << 0x10);
      param_2 = param_2 & ~(uVar12 << 0x10);
      uVar3 = uVar14 * uVar12;
      uVar14 = param_2 * uVar14;
      param_2 = uVar11 * param_2;
      uVar2 = uVar3 * 0x10000;
      uVar13 = uVar14 + uVar2;
      uVar1 = param_2 * 0x10000;
      uVar15 = uVar13 + uVar1;
      iVar5 = uVar11 * uVar12 + (uVar3 >> 0x10) + (uint)CARRY4(uVar14,uVar2) + (param_2 >> 0x10) +
              (uint)CARRY4(uVar13,uVar1);
      if (-1 < iVar5) {
        return CONCAT44(iVar5 * 2 + (uint)CARRY4(uVar15,uVar15),param_1) & 0xffffffff80000000;
      }
      return CONCAT44(iVar5,param_1) & 0xffffffff80000000;
    }
    uVar14 = param_2 >> 0x10;
    uVar13 = unaff_r4 >> 0x10;
    param_2 = param_2 & ~(uVar14 << 0x10);
    uVar10 = unaff_r4 & ~(uVar13 << 0x10);
    uVar3 = uVar10 * param_2;
    uVar10 = uVar14 * uVar10;
    uVar2 = param_2 * uVar13 * 0x10000;
    uVar4 = uVar3 + uVar2;
    uVar15 = unaff_r5 >> 0x10;
    uVar1 = uVar10 * 0x10000;
    uVar6 = uVar4 + uVar1;
    uVar16 = unaff_r5 & ~(uVar15 << 0x10);
    uVar7 = uVar16 * param_2;
    uVar16 = uVar14 * uVar16;
    uVar11 = param_2 * uVar15 * 0x10000;
    uVar8 = uVar7 + uVar11;
    uVar12 = uVar16 * 0x10000;
    uVar9 = uVar8 + uVar12;
    uVar11 = uVar14 * uVar15 + (param_2 * uVar15 >> 0x10) + (uint)CARRY4(uVar7,uVar11) +
             (uVar16 >> 0x10) + (uint)CARRY4(uVar8,uVar12);
    uVar12 = uVar11 + uVar6;
    iVar5 = uVar14 * uVar13 + (param_2 * uVar13 >> 0x10) + (uint)CARRY4(uVar3,uVar2) +
            (uVar10 >> 0x10) + (uint)CARRY4(uVar4,uVar1) + (uint)CARRY4(uVar11,uVar6);
    if (-1 < iVar5) {
      return CONCAT44(iVar5 * 2 +
                      (uint)(CARRY4(uVar12,uVar12) || CARRY4(uVar12 * 2,(uint)CARRY4(uVar9,uVar9))),
                      param_1) & 0xffffffff80000000;
    }
    return CONCAT44(iVar5,param_1) & 0xffffffff80000000;
  }
  if (unaff_r5 == 0) {
    uVar14 = unaff_r4 >> 0x10;
    uVar13 = param_2 >> 0x10;
    uVar7 = unaff_r4 & ~(uVar14 << 0x10);
    param_2 = param_2 & ~(uVar13 << 0x10);
    uVar3 = param_2 * uVar7;
    param_2 = uVar14 * param_2;
    uVar2 = uVar7 * uVar13 * 0x10000;
    uVar4 = uVar3 + uVar2;
    uVar15 = param_3 >> 0x10;
    uVar1 = param_2 * 0x10000;
    uVar6 = uVar4 + uVar1;
    param_3 = param_3 & ~(uVar15 << 0x10);
    uVar8 = param_3 * uVar7;
    param_3 = uVar14 * param_3;
    uVar11 = uVar7 * uVar15 * 0x10000;
    uVar9 = uVar8 + uVar11;
    uVar12 = param_3 * 0x10000;
    uVar10 = uVar9 + uVar12;
    uVar12 = uVar14 * uVar15 + (uVar7 * uVar15 >> 0x10) + (uint)CARRY4(uVar8,uVar11) +
             (param_3 >> 0x10) + (uint)CARRY4(uVar9,uVar12);
    uVar11 = uVar12 + uVar6;
    iVar5 = uVar14 * uVar13 + (uVar7 * uVar13 >> 0x10) + (uint)CARRY4(uVar3,uVar2) +
            (param_2 >> 0x10) + (uint)CARRY4(uVar4,uVar1) + (uint)CARRY4(uVar12,uVar6);
    if (-1 < iVar5) {
      return CONCAT44(iVar5 * 2 +
                      (uint)(CARRY4(uVar11,uVar11) || CARRY4(uVar11 * 2,(uint)CARRY4(uVar10,uVar10))
                            ),param_1) & 0xffffffff80000000;
    }
    return CONCAT44(iVar5,param_1) & 0xffffffff80000000;
  }
  uVar12 = param_2 >> 0x10;
  uVar14 = unaff_r4 >> 0x10;
  uVar8 = param_2 & ~(uVar12 << 0x10);
  uVar6 = unaff_r4 & ~(uVar14 << 0x10);
  uVar3 = uVar8 * uVar14;
  uVar8 = uVar6 * uVar8;
  uVar6 = uVar12 * uVar6;
  uVar2 = uVar3 * 0x10000;
  uVar9 = uVar8 + uVar2;
  uVar13 = param_3 >> 0x10;
  uVar1 = uVar6 * 0x10000;
  uVar10 = uVar9 + uVar1;
  uVar15 = unaff_r5 >> 0x10;
  uVar16 = param_3 & ~(uVar13 << 0x10);
  uVar7 = unaff_r5 & ~(uVar15 << 0x10);
  uVar4 = uVar16 * uVar15;
  uVar16 = uVar7 * uVar16;
  uVar7 = uVar13 * uVar7;
  uVar11 = uVar4 * 0x10000;
  uVar17 = uVar16 + uVar11;
  uVar15 = uVar13 * uVar15 + (uVar4 >> 0x10) + (uint)CARRY4(uVar16,uVar11);
  iVar5 = 0;
  uVar11 = uVar7 * 0x10000;
  uVar4 = uVar17 + uVar11;
  uVar13 = uVar15 + (uVar7 >> 0x10) + (uint)CARRY4(uVar17,uVar11);
  uVar11 = uVar10 + uVar13;
  uVar1 = uVar12 * uVar14 + (uVar3 >> 0x10) + (uint)CARRY4(uVar8,uVar2) + (uVar6 >> 0x10) +
          (uint)CARRY4(uVar9,uVar1) + (uint)CARRY4(uVar10,uVar13);
  uVar14 = uVar11 + uVar4;
  uVar12 = uVar11 + uVar1 + (uint)CARRY4(uVar11,uVar4);
  bVar19 = param_3 <= param_2;
  param_2 = param_2 - param_3;
  bVar18 = param_2 == 0;
  uVar2 = 0;
  if (!bVar19) {
    uVar2 = 0xffffffff;
    iVar5 = unaff_r4 - unaff_r5;
  }
  if (!bVar18) {
    bVar19 = unaff_r4 <= unaff_r5;
    uVar15 = unaff_r5 - unaff_r4;
    bVar18 = uVar15 == 0;
  }
  uVar13 = param_2 >> 0x10;
  if (bVar18) {
    uVar2 = 0;
  }
  if (!bVar19) {
    iVar5 = iVar5 - param_2;
  }
  param_2 = param_2 & ~(uVar13 << 0x10);
  uVar3 = uVar15 >> 0x10;
  if (!bVar19) {
    uVar2 = ~uVar2;
  }
  uVar15 = uVar15 & ~(uVar3 << 0x10);
  uVar10 = param_2 * uVar3;
  param_2 = uVar15 * param_2;
  uVar15 = uVar13 * uVar15;
  uVar6 = uVar10 * 0x10000;
  uVar8 = param_2 + uVar6;
  uVar7 = uVar15 * 0x10000;
  uVar9 = uVar8 + uVar7;
  uVar13 = uVar13 * uVar3 + iVar5 + (uVar10 >> 0x10) + (uint)CARRY4(param_2,uVar6) +
           (uVar15 >> 0x10) + (uint)CARRY4(uVar8,uVar7);
  uVar15 = uVar12 + uVar13 + (uint)CARRY4(uVar14,uVar9);
  iVar5 = uVar1 + (CARRY4(uVar11,uVar1) || CARRY4(uVar11 + uVar1,(uint)CARRY4(uVar11,uVar4))) +
          uVar2 + (uint)(CARRY4(uVar12,uVar13) || CARRY4(uVar12 + uVar13,(uint)CARRY4(uVar14,uVar9))
                        );
  uVar2 = uVar14 + uVar9 | (uVar4 | uVar4 * 4) >> 2;
  if (-1 < iVar5) {
    return CONCAT44(iVar5 * 2 +
                    (uint)(CARRY4(uVar15,uVar15) || CARRY4(uVar15 * 2,(uint)CARRY4(uVar2,uVar2))),
                    param_1) & 0xffffffff80000000;
  }
  return CONCAT44(iVar5,param_1) & 0xffffffff80000000;
}



// Address: 4a007050

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a007050(uint *param_1,uint *param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  if (param_2 == (uint *)0x0) {
    return;
  }
  puVar1 = param_2 + -2;
  uVar8 = param_2[-1];
  uVar4 = *param_1;
  uVar3 = uVar8 & 0xfffffffc;
  if (uVar3 <= uVar4) {
    *param_1 = uVar4 | 3;
    *param_2 = param_1[(uVar8 >> 3) - 1];
    param_1[(uVar8 >> 3) - 1] = (uint)puVar1;
    return;
  }
  if ((uVar8 & 2) != 0) {
    return;
  }
  *param_1 = uVar4 | 1;
  uVar4 = (int)puVar1 + uVar3;
  uVar8 = *(uint *)(uVar4 + 4) & 0xfffffffc;
  if ((param_2[-1] & 1) == 0) {
    uVar3 = uVar3 + *puVar1;
    puVar1 = (uint *)((int)puVar1 - *puVar1);
    uVar6 = puVar1[2];
    uVar9 = puVar1[3];
    *(uint *)(uVar6 + 0xc) = uVar9;
    *(uint *)(uVar9 + 8) = uVar6;
  }
  if (param_1[0xb] == uVar4) {
    uVar3 = uVar3 + uVar8;
    puVar1[1] = uVar3 | 1;
    param_1[0xb] = (uint)puVar1;
  }
  else {
    uVar6 = *(uint *)(uVar4 + uVar8 + 4);
    *(uint *)(uVar4 + 4) = uVar8;
    if ((uVar6 & 1) == 0) {
      iVar10 = *(int *)(uVar4 + 8);
      iVar5 = *(int *)(uVar4 + 0xc);
      uVar3 = uVar3 + uVar8;
      *(int *)(iVar10 + 0xc) = iVar5;
      *(int *)(iVar5 + 8) = iVar10;
    }
    uVar4 = param_1[0xf];
    puVar1[3] = (uint)(param_1 + 0xd);
    puVar1[2] = uVar4;
    param_1[0xf] = (uint)puVar1;
    *(uint **)(uVar4 + 0xc) = puVar1;
    puVar1[1] = uVar3 | 1;
    *(uint *)((int)puVar1 + uVar3) = uVar3;
  }
  if (0x1ffff < uVar3) {
    if ((*param_1 & 2) == 0) {
      return;
    }
    uVar3 = *param_1;
    if (uVar3 == 0) {
      iVar5 = 1;
      do {
        iVar10 = iVar5 + 1;
        param_1[iVar5 * 2 + 0xe] = (uint)(param_1 + iVar5 * 2 + 0xb);
        param_1[iVar5 * 2 + 0xd] = (uint)(param_1 + iVar5 * 2 + 0xb);
        iVar5 = iVar10;
      } while (iVar10 < 0x60);
      param_1[0xd2] = 0;
      param_1[0xd3] = 0x40000;
      param_1[0xd5] = 0;
      param_1[0xd1] = 0x40000;
      param_1[0xd8] = param_1[0xd8] | 1;
      *param_1 = *param_1 & 3 | 0x48;
      param_1[0xb] = (uint)(param_1 + 0xd);
      param_1[0xd7] = 2;
      return;
    }
    *param_1 = uVar3 & 0xfffffffd;
    puVar1 = param_1;
    do {
      puVar1 = puVar1 + 1;
      piVar2 = (int *)*puVar1;
      if (piVar2 != (int *)0x0) {
        *puVar1 = 0;
        do {
          piVar7 = (int *)piVar2[2];
          uVar4 = piVar2[1] & 0xfffffffe;
          uVar8 = (int)piVar2 + uVar4;
          uVar6 = *(uint *)(uVar8 + 4) & 0xfffffffc;
          if ((piVar2[1] & 1U) == 0) {
            iVar5 = *piVar2;
            piVar2 = (int *)((int)piVar2 - iVar5);
            uVar4 = uVar4 + iVar5;
            iVar5 = piVar2[3];
            iVar10 = piVar2[2];
            *(int *)(iVar10 + 0xc) = iVar5;
            *(int *)(iVar5 + 8) = iVar10;
          }
          if (param_1[0xb] == uVar8) {
            piVar2[1] = uVar4 + uVar6 | 1;
            param_1[0xb] = (uint)piVar2;
          }
          else {
            uVar9 = *(uint *)(uVar8 + uVar6 + 4);
            *(uint *)(uVar8 + 4) = uVar6;
            if ((uVar9 & 1) == 0) {
              uVar4 = uVar4 + uVar6;
              iVar10 = *(int *)(uVar8 + 8);
              iVar5 = *(int *)(uVar8 + 0xc);
              *(int *)(iVar10 + 0xc) = iVar5;
              *(int *)(iVar5 + 8) = iVar10;
            }
            uVar8 = param_1[0xf];
            param_1[0xf] = (uint)piVar2;
            *(int **)(uVar8 + 0xc) = piVar2;
            piVar2[2] = uVar8;
            piVar2[3] = (int)(param_1 + 0xd);
            piVar2[1] = uVar4 | 1;
            *(uint *)((int)piVar2 + uVar4) = uVar4;
          }
          piVar2 = piVar7;
        } while (piVar7 != (int *)0x0);
      }
    } while (puVar1 != param_1 + ((uVar3 >> 3) - 1));
    return;
  }
  return;
}



// Address: 4a007174

void FUN_4a007174(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  
  if (param_2[0xb] == 0) {
    FUN_4a007780(param_2);
  }
  uVar8 = 0;
  uVar7 = 1;
  uVar9 = *(uint *)(param_2[0xb] + 4) & 0xfffffffc;
  uVar4 = uVar9 - 0x10;
  uVar14 = 0;
  iVar15 = 0;
  do {
    uVar2 = param_2[iVar15 + 1];
    while (uVar2 != 0) {
      puVar3 = (uint *)(uVar2 + 4);
      uVar2 = *(uint *)(uVar2 + 8);
      uVar5 = *puVar3 & 0xfffffffc;
      if (uVar4 < uVar5) {
        uVar4 = *puVar3 & 0xfffffffc;
      }
      uVar8 = uVar8 + 1;
      uVar14 = uVar14 + uVar5;
    }
    iVar15 = iVar15 + 1;
  } while (iVar15 < 10);
  uVar9 = uVar9 + uVar14;
  iVar15 = 1;
  do {
    puVar3 = (uint *)param_2[iVar15 * 2 + 0xe];
    while (puVar3 != param_2 + iVar15 * 2 + 0xb) {
      puVar1 = puVar3 + 1;
      puVar3 = (uint *)puVar3[3];
      uVar2 = *puVar1 & 0xfffffffc;
      if (uVar4 < uVar2) {
        uVar4 = *puVar1 & 0xfffffffc;
      }
      uVar7 = uVar7 + 1;
      uVar9 = uVar9 + uVar2;
    }
    iVar15 = iVar15 + 1;
  } while (iVar15 < 0x60);
  uVar2 = *(uint *)(param_2[0xb] + 4) & 0xfffffffc;
  uVar5 = param_2[0xda];
  iVar15 = uVar2 - param_2[0xd2];
  uVar10 = param_2[0xd4];
  uVar11 = param_2[0xd9];
  uVar12 = param_2[0xdd];
  uVar13 = iVar15 - 0x14;
  uVar6 = *param_2;
  *param_1 = uVar5;
  param_1[1] = uVar7;
  param_1[2] = uVar8;
  param_1[3] = uVar10;
  param_1[4] = uVar11;
  param_1[5] = uVar12;
  param_1[6] = uVar14;
  if (uVar4 != 0) {
    uVar4 = uVar4 - 4;
  }
  param_1[7] = uVar5 - uVar9;
  param_1[8] = uVar9;
  if ((uVar6 & 1) == 0) {
    uVar13 = iVar15 - 0x10;
  }
  param_1[9] = uVar2;
  param_1[10] = uVar4;
  param_1[0xb] = uVar13;
  return;
}



// Address: 4a00729c

/* WARNING: Removing unreachable block (ram,0x4a05c100) */

uint * FUN_4a00729c(uint *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  uint unaff_r5;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  
  do {
    if (0xffffffdf < param_2) {
      return (uint *)0x0;
    }
    param_2 = param_2 + 0xb;
    uVar11 = unaff_r5;
    if (0xf < param_2) {
      uVar11 = param_2 & 0xfffffff8;
    }
    uVar1 = *param_1;
    if (0xf >= param_2) {
      uVar11 = 0x10;
    }
    if ((uVar1 & 1) != 0) {
      if (uVar11 <= uVar1) {
        puVar3 = (uint *)param_1[(uVar11 >> 3) - 1];
        if (puVar3 != (uint *)0x0) {
          param_1[(uVar11 >> 3) - 1] = puVar3[2];
          goto LAB_4a00734c;
        }
      }
      if (uVar11 < 0x100) {
        uVar15 = uVar11 >> 3;
        puVar3 = (uint *)param_1[uVar15 * 2 + 0xe];
        if (puVar3 != param_1 + uVar15 * 2 + 0xb) {
          uVar1 = puVar3[3];
          *(uint *)((int)puVar3 + uVar11 + 4) = *(uint *)((int)puVar3 + uVar11 + 4) | 1;
          param_1[uVar15 * 2 + 0xe] = uVar1;
          *(uint **)(uVar1 + 8) = param_1 + uVar15 * 2 + 0xb;
LAB_4a00734c:
          return puVar3 + 2;
        }
      }
      else {
        uVar15 = uVar11 >> 8;
        if (uVar15 < 0x10000) {
          uVar13 = uVar15 - 0x100 >> 0x10 & 8;
          iVar10 = uVar15 << uVar13;
          uVar5 = iVar10 - 0x1000U >> 0x10 & 4;
          iVar10 = iVar10 << uVar5;
          uVar4 = iVar10 - 0x4000U >> 0x10 & 2;
          uVar15 = iVar10 << uVar4;
          iVar10 = (uVar15 >> 0xe & ~(uVar15 >> 0xf)) + (0xd - (uVar13 + uVar5 + uVar4));
          uVar15 = (uVar11 >> (iVar10 + 6U & 0xff) & 3) + iVar10 * 4 + 0x20;
        }
        else {
          uVar15 = 0x5f;
        }
        if ((uVar1 & 2) != 0) {
          FUN_4a007780(param_1);
        }
      }
      puVar3 = (uint *)param_1[0x10];
      puVar14 = param_1 + 0xd;
      if (puVar3 != puVar14) {
        do {
          puVar7 = (uint *)puVar3[1];
          puVar2 = (uint *)puVar3[3];
          uVar1 = (uint)puVar7 & 0xfffffffc;
          if (uVar11 < 0x100) {
            puVar8 = puVar7;
            if (puVar2 == puVar14) {
              puVar8 = (uint *)param_1[0xc];
            }
            if ((puVar2 == puVar14 && puVar8 == puVar3) && (uVar11 + 0x10 < uVar1)) {
              uVar15 = (int)puVar3 + uVar11;
              param_1[0xf] = uVar15;
              param_1[0x10] = uVar15;
              param_1[0xc] = uVar15;
              uVar1 = uVar1 - uVar11;
              *(uint **)(uVar15 + 8) = puVar14;
              *(uint **)(uVar15 + 0xc) = puVar14;
              puVar3[1] = uVar11 | 1;
              *(uint *)(uVar15 + 4) = uVar1 | 1;
              *(uint *)(uVar15 + uVar1) = uVar1;
              goto LAB_4a00745c;
            }
          }
          param_1[0x10] = (uint)puVar2;
          puVar2[2] = (uint)puVar14;
          if (uVar1 == uVar11) {
            *(uint *)((int)puVar3 + uVar1 + 4) = *(uint *)((int)puVar3 + uVar1 + 4) | 1;
LAB_4a00745c:
            return puVar3 + 2;
          }
          if (uVar1 < 0x100) {
            uVar13 = (uint)puVar7 >> 3;
            puVar7 = (uint *)param_1[uVar13 * 2 + 0xd];
            puVar8 = param_1 + uVar13 * 2 + 0xb;
          }
          else {
            uVar13 = (uint)puVar7 >> 8;
            if (uVar13 < 0x10000) {
              uVar12 = uVar13 - 0x100 >> 0x10 & 8;
              iVar10 = uVar13 << uVar12;
              uVar4 = iVar10 - 0x1000U >> 0x10 & 4;
              iVar10 = iVar10 << uVar4;
              uVar5 = iVar10 - 0x4000U >> 0x10 & 2;
              uVar13 = iVar10 << uVar5;
              iVar10 = (uVar13 >> 0xe & ~(uVar13 >> 0xf)) + (0xd - (uVar12 + uVar4 + uVar5));
              uVar13 = (uVar1 >> (iVar10 + 6U & 0xff) & 3) + iVar10 * 4 + 0x20;
            }
            else {
              uVar13 = 0x5f;
            }
            puVar9 = param_1 + uVar13 * 2 + 0xb;
            puVar2 = (uint *)param_1[uVar13 * 2 + 0xd];
            puVar7 = puVar2;
            puVar8 = puVar9;
            if ((puVar2 != puVar9) &&
               (puVar8 = (uint *)param_1[uVar13 * 2 + 0xe], puVar7 = puVar9, puVar8[1] <= uVar1)) {
              uVar1 = uVar1 | 1;
              while( true ) {
                bVar17 = uVar1 <= puVar2[1];
                bVar16 = puVar2[1] == uVar1;
                if (bVar17 && !bVar16) {
                  puVar2 = (uint *)puVar2[2];
                  bVar17 = uVar1 <= puVar2[1];
                  bVar16 = puVar2[1] == uVar1;
                }
                if (bVar17 && !bVar16) {
                  puVar2 = (uint *)puVar2[2];
                  bVar17 = uVar1 <= puVar2[1];
                  bVar16 = puVar2[1] == uVar1;
                }
                if ((!bVar17 || bVar16) || (puVar2 = (uint *)puVar2[2], puVar2[1] <= uVar1)) break;
                puVar2 = (uint *)puVar2[2];
              }
              puVar8 = (uint *)puVar2[3];
              puVar7 = puVar2;
            }
          }
          param_1[((int)uVar13 >> 5) + 0xcd] =
               param_1[((int)uVar13 >> 5) + 0xcd] | 1 << (uVar13 & 0x1f);
          puVar3[2] = (uint)puVar7;
          puVar3[3] = (uint)puVar8;
          puVar7[3] = (uint)puVar3;
          puVar8[2] = (uint)puVar3;
          puVar3 = (uint *)param_1[0x10];
        } while (puVar3 != puVar14);
      }
      if (0xff < uVar11) {
        for (puVar3 = (uint *)param_1[uVar15 * 2 + 0xe]; puVar3 != param_1 + uVar15 * 2 + 0xb;
            puVar3 = (uint *)puVar3[3]) {
          uVar1 = puVar3[1] & 0xfffffffc;
          if (uVar11 <= uVar1) {
            uVar13 = puVar3[2];
            uVar4 = puVar3[3];
            uVar15 = uVar1 - uVar11;
            *(uint *)(uVar13 + 0xc) = uVar4;
            *(uint *)(uVar4 + 8) = uVar13;
            if (uVar15 < 0x10) {
              *(uint *)((int)puVar3 + uVar1 + 4) = *(uint *)((int)puVar3 + uVar1 + 4) | 1;
              return puVar3 + 2;
            }
            uVar1 = (int)puVar3 + uVar11;
            param_1[0xf] = uVar1;
            param_1[0x10] = uVar1;
            *(uint **)(uVar1 + 8) = puVar14;
            *(uint **)(uVar1 + 0xc) = puVar14;
            puVar3[1] = uVar11 | 1;
            *(uint *)(uVar1 + 4) = uVar15 | 1;
            *(uint *)(uVar1 + uVar15) = uVar15;
            goto LAB_4a007770;
          }
        }
      }
      uVar15 = uVar15 + 1;
      puVar3 = param_1 + uVar15 * 2 + 0xb;
      uVar13 = uVar15 >> 5;
      uVar4 = param_1[uVar13 + 0xcd];
      uVar1 = 1 << (uVar15 & 0x1f);
      do {
        uVar15 = uVar13;
        if ((uVar4 < uVar1) || (uVar1 == 0)) {
          do {
            uVar13 = uVar15 + 1;
            if (2 < uVar13) goto LAB_4a007730;
            uVar4 = param_1[uVar15 + 0xce];
            uVar15 = uVar13;
          } while (uVar4 == 0);
          puVar3 = param_1 + uVar13 * 0x40 + 0xb;
          uVar1 = 1;
        }
        for (; (uVar1 & uVar4) == 0; uVar1 = uVar1 << 1) {
          puVar3 = puVar3 + 2;
        }
        puVar2 = (uint *)puVar3[3];
        if (puVar2 != puVar3) {
          uVar13 = puVar2[3];
          uVar1 = puVar2[1] & 0xfffffffc;
          uVar15 = uVar1 - uVar11;
          puVar3[3] = uVar13;
          *(uint **)(uVar13 + 8) = puVar3;
          if (uVar15 < 0x10) {
            *(uint *)((int)puVar2 + uVar1 + 4) = *(uint *)((int)puVar2 + uVar1 + 4) | 1;
          }
          else {
            uVar1 = (int)puVar2 + uVar11;
            param_1[0xf] = uVar1;
            param_1[0x10] = uVar1;
            *(uint **)(uVar1 + 8) = puVar14;
            *(uint **)(uVar1 + 0xc) = puVar14;
            if (uVar11 < 0x100) {
              param_1[0xc] = uVar1;
            }
            puVar2[1] = uVar11 | 1;
            *(uint *)(uVar1 + 4) = uVar15 | 1;
            *(uint *)(uVar1 + uVar15) = uVar15;
          }
          return puVar2 + 2;
        }
        uVar4 = uVar4 & ~uVar1;
        puVar3 = puVar3 + 2;
        uVar1 = uVar1 << 1;
        param_1[uVar13 + 0xcd] = uVar4;
      } while( true );
    }
    if (uVar1 == 0) {
      FUN_4a007780(param_1);
    }
LAB_4a007730:
    puVar3 = (uint *)param_1[0xb];
    uVar1 = puVar3[1];
    if (uVar11 + 0x10 <= (uVar1 & 0xfffffffc)) {
      param_1[0xb] = (int)puVar3 + uVar11;
      puVar3[1] = uVar11 | 1;
      *(uint *)((int)puVar3 + uVar11 + 4) = (uVar1 & 0xfffffffc) - uVar11 | 1;
LAB_4a007770:
      return puVar3 + 2;
    }
    if ((*param_1 & 2) == 0) {
      uVar15 = param_1[0xb];
      uVar1 = *(uint *)(uVar15 + 4) & 0xfffffffc;
      iVar10 = param_1[0xd2] + uVar11 + 0x10;
      if ((param_1[0xd8] & 1) != 0) {
        iVar10 = iVar10 - uVar1;
      }
      uVar13 = uVar15 + uVar1;
      if (iVar10 < 1) {
        return (uint *)0x0;
      }
      uVar4 = param_1[0xe0] + iVar10;
      if ((int)param_1[0xe1] < (int)uVar4) {
        uVar4 = 0xffffffff;
      }
      else {
        param_1[0xe0] = uVar4;
        uVar4 = (uVar4 + param_1[0xdf]) - iVar10;
      }
      if (uVar4 == 0xffffffff) {
        return (uint *)0x0;
      }
      uVar5 = param_1[0xda];
      uVar12 = uVar5 + iVar10;
      if (uVar4 == uVar13) {
        uVar5 = iVar10 + uVar1 | 1;
      }
      param_1[0xda] = uVar12;
      if (uVar4 == uVar13) {
        *(uint *)(uVar15 + 4) = uVar5;
        goto LAB_4a05c230;
      }
      iVar6 = 0;
      uVar5 = uVar4;
      if ((param_1[0xd8] & 1) == 0) {
LAB_4a05c198:
        if ((int)param_1[0xe1] < (int)param_1[0xe0]) {
          uVar13 = 0xffffffff;
        }
        else {
          uVar13 = param_1[0xe0] + param_1[0xdf];
        }
        param_1[0xda] = ((uVar13 - uVar4) - iVar10) + uVar12;
LAB_4a05c1c0:
        iVar6 = 0;
        if (uVar13 == 0xffffffff) goto LAB_4a05c230;
      }
      else {
        if (uVar1 != 0) {
          if (uVar4 < uVar13) {
            param_1[0xd8] = param_1[0xd8] & 0xfffffffe;
            goto LAB_4a05c198;
          }
          param_1[0xda] = (uVar4 - uVar13) + uVar12;
        }
        uVar13 = uVar4 + 8 & 7;
        if (uVar13 != 0) {
          iVar6 = 8 - uVar13;
        }
        if (uVar13 != 0) {
          uVar5 = uVar4 + iVar6;
        }
        iVar6 = iVar6 + uVar1;
        uVar13 = param_1[0xe0] + iVar6;
        if ((int)param_1[0xe1] < (int)uVar13) {
          uVar13 = 0xffffffff;
        }
        else {
          param_1[0xe0] = uVar13;
          uVar13 = (uVar13 + param_1[0xdf]) - iVar6;
        }
        if (uVar13 == 0xffffffff) {
          if ((int)param_1[0xe1] < (int)param_1[0xe0]) {
            uVar13 = 0xffffffff;
          }
          else {
            uVar13 = param_1[0xdf] + param_1[0xe0];
          }
          goto LAB_4a05c1c0;
        }
        if (uVar13 < uVar4) {
          uVar13 = uVar4 + iVar10;
          param_1[0xd8] = param_1[0xd8] & 0xfffffffe;
          goto LAB_4a05c1c0;
        }
      }
      param_1[0xb] = uVar5;
      *(uint *)(uVar5 + 4) = (uVar13 - uVar5) + iVar6 | 1;
      param_1[0xda] = iVar6 + param_1[0xda];
      if (uVar1 != 0) {
        uVar1 = uVar1 - 0xc & 0xfffffff8;
        *(uint *)(uVar15 + 4) = uVar1 | 1;
        *(undefined4 *)(uVar15 + uVar1 + 4) = 5;
        *(undefined4 *)(uVar15 + uVar1 + 8) = 5;
        if (0xf < uVar1) {
          uVar1 = param_1[0xd1];
          param_1[0xd1] = 0xffffffff;
          FUN_4a007050(param_1,uVar15 + 8);
          param_1[0xd1] = uVar1;
        }
      }
LAB_4a05c230:
      uVar1 = param_1[0xda];
      if (param_1[0xdb] < uVar1) {
        param_1[0xdb] = uVar1;
      }
      if (param_1[0xdd] < uVar1 + param_1[0xd9]) {
        param_1[0xdd] = uVar1 + param_1[0xd9];
      }
      uVar1 = param_1[0xb];
      uVar15 = *(uint *)(uVar1 + 4) & 0xfffffffc;
      if (uVar15 < uVar11 + 0x10) {
        return (uint *)0x0;
      }
      param_1[0xb] = uVar1 + uVar11;
      *(uint *)(uVar1 + 4) = uVar11 | 1;
      *(uint *)(uVar1 + uVar11 + 4) = uVar15 - uVar11 | 1;
      return (uint *)(uVar1 + 8);
    }
    FUN_4a007780(param_1);
    param_2 = uVar11 - 7;
  } while( true );
}



// Address: 4a007780

void FUN_4a007780(uint *param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  uint uVar10;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    *param_1 = uVar1 & 0xfffffffd;
    puVar9 = param_1;
    do {
      puVar9 = puVar9 + 1;
      piVar2 = (int *)*puVar9;
      if (piVar2 != (int *)0x0) {
        *puVar9 = 0;
        do {
          piVar8 = (int *)piVar2[2];
          uVar3 = piVar2[1] & 0xfffffffe;
          uVar4 = (int)piVar2 + uVar3;
          uVar10 = *(uint *)(uVar4 + 4) & 0xfffffffc;
          if ((piVar2[1] & 1U) == 0) {
            iVar5 = *piVar2;
            piVar2 = (int *)((int)piVar2 - iVar5);
            uVar3 = uVar3 + iVar5;
            iVar5 = piVar2[3];
            iVar7 = piVar2[2];
            *(int *)(iVar7 + 0xc) = iVar5;
            *(int *)(iVar5 + 8) = iVar7;
          }
          if (param_1[0xb] == uVar4) {
            piVar2[1] = uVar3 + uVar10 | 1;
            param_1[0xb] = (uint)piVar2;
          }
          else {
            uVar6 = *(uint *)(uVar4 + uVar10 + 4);
            *(uint *)(uVar4 + 4) = uVar10;
            if ((uVar6 & 1) == 0) {
              uVar3 = uVar3 + uVar10;
              iVar7 = *(int *)(uVar4 + 8);
              iVar5 = *(int *)(uVar4 + 0xc);
              *(int *)(iVar7 + 0xc) = iVar5;
              *(int *)(iVar5 + 8) = iVar7;
            }
            uVar4 = param_1[0xf];
            param_1[0xf] = (uint)piVar2;
            *(int **)(uVar4 + 0xc) = piVar2;
            piVar2[2] = uVar4;
            piVar2[3] = (int)(param_1 + 0xd);
            piVar2[1] = uVar3 | 1;
            *(uint *)((int)piVar2 + uVar3) = uVar3;
          }
          piVar2 = piVar8;
        } while (piVar8 != (int *)0x0);
      }
    } while (puVar9 != param_1 + ((uVar1 >> 3) - 1));
    return;
  }
  iVar5 = 1;
  do {
    iVar7 = iVar5 + 1;
    param_1[iVar5 * 2 + 0xe] = (uint)(param_1 + iVar5 * 2 + 0xb);
    param_1[iVar5 * 2 + 0xd] = (uint)(param_1 + iVar5 * 2 + 0xb);
    iVar5 = iVar7;
  } while (iVar7 < 0x60);
  param_1[0xd2] = 0;
  param_1[0xd3] = 0x40000;
  param_1[0xd5] = 0;
  param_1[0xd1] = 0x40000;
  param_1[0xd8] = param_1[0xd8] | 1;
  *param_1 = *param_1 & 3 | 0x48;
  param_1[0xb] = (uint)(param_1 + 0xd);
  param_1[0xd7] = 2;
  return;
}



// Address: 4a0078f0

/* WARNING: Removing unreachable block (ram,0x4a05c100) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint * FUN_4a0078f0(uint *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint unaff_r4;
  uint unaff_r5;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  
  if (param_2 != (uint *)0x0) {
    if (param_3 < 0xffffffe0) {
      param_3 = param_3 + 0xb;
      if (0xf < param_3) {
        unaff_r4 = param_3 & 0xfffffff8;
      }
      uVar2 = param_2[-1];
      if (0xf >= param_3) {
        unaff_r4 = 0x10;
      }
      uVar13 = uVar2 & 0xfffffffc;
      if ((uVar2 & 2) == 0) {
        if (uVar13 < unaff_r4) {
          puVar12 = (uint *)((int)param_2 + (uVar13 - 8));
          if (((uint *)param_1[0xb] == puVar12) &&
             (uVar10 = (puVar12[1] & 0xfffffffc) + uVar13, unaff_r4 + 0x10 <= uVar10)) {
            param_2[-1] = uVar2 & 1 | unaff_r4;
            uVar2 = (int)param_2 + (unaff_r4 - 8);
            param_1[0xb] = uVar2;
            *(uint *)(uVar2 + 4) = uVar10 - unaff_r4 | 1;
            return param_2;
          }
          if ((((uint *)param_1[0xb] == puVar12) ||
              ((*(uint *)((int)puVar12 + (puVar12[1] & 0xfffffffe) + 4) & 1) != 0)) ||
             (uVar2 = (puVar12[1] & 0xfffffffc) + uVar13, uVar2 < unaff_r4)) {
            puVar3 = (uint *)FUN_4a00729c(param_1,unaff_r4 - 7);
            if (puVar3 == (uint *)0x0) {
              return (uint *)0x0;
            }
            if (puVar3 + -2 != puVar12) {
              uVar2 = uVar13 - 4 >> 2;
              if (uVar2 < 10) {
                *puVar3 = *param_2;
                puVar3[1] = param_2[1];
                puVar3[2] = param_2[2];
                if (4 < uVar2) {
                  puVar3[3] = param_2[3];
                  puVar3[4] = param_2[4];
                  if (6 < uVar2) {
                    puVar3[5] = param_2[5];
                    puVar3[6] = param_2[6];
                    if (8 < uVar2) {
                      puVar3[7] = param_2[7];
                      puVar3[8] = param_2[8];
                    }
                  }
                }
              }
              else if (uVar2 != 0) {
                FUN_4a001134(puVar3,param_2,uVar2 << 2);
              }
              FUN_4a007050(param_1,param_2);
              return puVar3;
            }
            uVar13 = (puVar3[-1] & 0xfffffffc) + uVar13;
          }
          else {
            uVar13 = puVar12[2];
            uVar10 = puVar12[3];
            *(uint *)(uVar13 + 0xc) = uVar10;
            *(uint *)(uVar10 + 8) = uVar13;
            uVar13 = uVar2;
          }
        }
        uVar2 = uVar13 - unaff_r4;
        if (uVar2 < 0x10) {
          param_2[-1] = param_2[-1] & 1 | uVar13;
          *(uint *)((int)param_2 + (uVar13 - 4)) = *(uint *)((int)param_2 + (uVar13 - 4)) | 1;
        }
        else {
          param_2[-1] = param_2[-1] & 1 | unaff_r4;
          iVar11 = uVar2 + (unaff_r4 - 8);
          *(uint *)((int)param_2 + (unaff_r4 - 4)) = uVar2 | 1;
          *(uint *)((int)param_2 + iVar11 + 4) = *(uint *)((int)param_2 + iVar11 + 4) | 1;
          FUN_4a007050(param_1,(int)param_2 + unaff_r4);
        }
        return param_2;
      }
    }
    return (uint *)0x0;
  }
  do {
    if (0xffffffdf < param_3) {
      return (uint *)0x0;
    }
    param_3 = param_3 + 0xb;
    uVar2 = unaff_r5;
    if (0xf < param_3) {
      uVar2 = param_3 & 0xfffffff8;
    }
    uVar13 = *param_1;
    if (0xf >= param_3) {
      uVar2 = 0x10;
    }
    if ((uVar13 & 1) != 0) {
      if (uVar2 <= uVar13) {
        puVar12 = (uint *)param_1[(uVar2 >> 3) - 1];
        if (puVar12 != (uint *)0x0) {
          param_1[(uVar2 >> 3) - 1] = puVar12[2];
          goto LAB_4a00734c;
        }
      }
      if (uVar2 < 0x100) {
        uVar10 = uVar2 >> 3;
        puVar12 = (uint *)param_1[uVar10 * 2 + 0xe];
        if (puVar12 != param_1 + uVar10 * 2 + 0xb) {
          uVar13 = puVar12[3];
          *(uint *)((int)puVar12 + uVar2 + 4) = *(uint *)((int)puVar12 + uVar2 + 4) | 1;
          param_1[uVar10 * 2 + 0xe] = uVar13;
          *(uint **)(uVar13 + 8) = param_1 + uVar10 * 2 + 0xb;
LAB_4a00734c:
          return puVar12 + 2;
        }
      }
      else {
        uVar10 = uVar2 >> 8;
        if (uVar10 < 0x10000) {
          uVar15 = uVar10 - 0x100 >> 0x10 & 8;
          iVar11 = uVar10 << uVar15;
          uVar5 = iVar11 - 0x1000U >> 0x10 & 4;
          iVar11 = iVar11 << uVar5;
          uVar4 = iVar11 - 0x4000U >> 0x10 & 2;
          uVar10 = iVar11 << uVar4;
          iVar11 = (uVar10 >> 0xe & ~(uVar10 >> 0xf)) + (0xd - (uVar15 + uVar5 + uVar4));
          uVar10 = (uVar2 >> (iVar11 + 6U & 0xff) & 3) + iVar11 * 4 + 0x20;
        }
        else {
          uVar10 = 0x5f;
        }
        if ((uVar13 & 2) != 0) {
          FUN_4a007780(param_1);
        }
      }
      puVar12 = (uint *)param_1[0x10];
      puVar3 = param_1 + 0xd;
      if (puVar12 != puVar3) {
        do {
          puVar7 = (uint *)puVar12[1];
          puVar1 = (uint *)puVar12[3];
          uVar13 = (uint)puVar7 & 0xfffffffc;
          if (uVar2 < 0x100) {
            puVar8 = puVar7;
            if (puVar1 == puVar3) {
              puVar8 = (uint *)param_1[0xc];
            }
            if ((puVar1 == puVar3 && puVar8 == puVar12) && (uVar2 + 0x10 < uVar13)) {
              uVar10 = (int)puVar12 + uVar2;
              param_1[0xf] = uVar10;
              param_1[0x10] = uVar10;
              param_1[0xc] = uVar10;
              uVar13 = uVar13 - uVar2;
              *(uint **)(uVar10 + 8) = puVar3;
              *(uint **)(uVar10 + 0xc) = puVar3;
              puVar12[1] = uVar2 | 1;
              *(uint *)(uVar10 + 4) = uVar13 | 1;
              *(uint *)(uVar10 + uVar13) = uVar13;
              goto LAB_4a00745c;
            }
          }
          param_1[0x10] = (uint)puVar1;
          puVar1[2] = (uint)puVar3;
          if (uVar13 == uVar2) {
            *(uint *)((int)puVar12 + uVar13 + 4) = *(uint *)((int)puVar12 + uVar13 + 4) | 1;
LAB_4a00745c:
            return puVar12 + 2;
          }
          if (uVar13 < 0x100) {
            uVar15 = (uint)puVar7 >> 3;
            puVar7 = (uint *)param_1[uVar15 * 2 + 0xd];
            puVar8 = param_1 + uVar15 * 2 + 0xb;
          }
          else {
            uVar15 = (uint)puVar7 >> 8;
            if (uVar15 < 0x10000) {
              uVar14 = uVar15 - 0x100 >> 0x10 & 8;
              iVar11 = uVar15 << uVar14;
              uVar4 = iVar11 - 0x1000U >> 0x10 & 4;
              iVar11 = iVar11 << uVar4;
              uVar5 = iVar11 - 0x4000U >> 0x10 & 2;
              uVar15 = iVar11 << uVar5;
              iVar11 = (uVar15 >> 0xe & ~(uVar15 >> 0xf)) + (0xd - (uVar14 + uVar4 + uVar5));
              uVar15 = (uVar13 >> (iVar11 + 6U & 0xff) & 3) + iVar11 * 4 + 0x20;
            }
            else {
              uVar15 = 0x5f;
            }
            puVar9 = param_1 + uVar15 * 2 + 0xb;
            puVar1 = (uint *)param_1[uVar15 * 2 + 0xd];
            puVar7 = puVar1;
            puVar8 = puVar9;
            if ((puVar1 != puVar9) &&
               (puVar8 = (uint *)param_1[uVar15 * 2 + 0xe], puVar7 = puVar9, puVar8[1] <= uVar13)) {
              uVar13 = uVar13 | 1;
              while( true ) {
                bVar17 = uVar13 <= puVar1[1];
                bVar16 = puVar1[1] == uVar13;
                if (bVar17 && !bVar16) {
                  puVar1 = (uint *)puVar1[2];
                  bVar17 = uVar13 <= puVar1[1];
                  bVar16 = puVar1[1] == uVar13;
                }
                if (bVar17 && !bVar16) {
                  puVar1 = (uint *)puVar1[2];
                  bVar17 = uVar13 <= puVar1[1];
                  bVar16 = puVar1[1] == uVar13;
                }
                if ((!bVar17 || bVar16) || (puVar1 = (uint *)puVar1[2], puVar1[1] <= uVar13)) break;
                puVar1 = (uint *)puVar1[2];
              }
              puVar8 = (uint *)puVar1[3];
              puVar7 = puVar1;
            }
          }
          param_1[((int)uVar15 >> 5) + 0xcd] =
               param_1[((int)uVar15 >> 5) + 0xcd] | 1 << (uVar15 & 0x1f);
          puVar12[2] = (uint)puVar7;
          puVar12[3] = (uint)puVar8;
          puVar7[3] = (uint)puVar12;
          puVar8[2] = (uint)puVar12;
          puVar12 = (uint *)param_1[0x10];
        } while (puVar12 != puVar3);
      }
      if (0xff < uVar2) {
        for (puVar12 = (uint *)param_1[uVar10 * 2 + 0xe]; puVar12 != param_1 + uVar10 * 2 + 0xb;
            puVar12 = (uint *)puVar12[3]) {
          uVar13 = puVar12[1] & 0xfffffffc;
          if (uVar2 <= uVar13) {
            uVar15 = puVar12[2];
            uVar4 = puVar12[3];
            uVar10 = uVar13 - uVar2;
            *(uint *)(uVar15 + 0xc) = uVar4;
            *(uint *)(uVar4 + 8) = uVar15;
            if (uVar10 < 0x10) {
              *(uint *)((int)puVar12 + uVar13 + 4) = *(uint *)((int)puVar12 + uVar13 + 4) | 1;
              return puVar12 + 2;
            }
            uVar13 = (int)puVar12 + uVar2;
            param_1[0xf] = uVar13;
            param_1[0x10] = uVar13;
            *(uint **)(uVar13 + 8) = puVar3;
            *(uint **)(uVar13 + 0xc) = puVar3;
            puVar12[1] = uVar2 | 1;
            *(uint *)(uVar13 + 4) = uVar10 | 1;
            *(uint *)(uVar13 + uVar10) = uVar10;
            goto LAB_4a007770;
          }
        }
      }
      uVar10 = uVar10 + 1;
      puVar12 = param_1 + uVar10 * 2 + 0xb;
      uVar15 = uVar10 >> 5;
      uVar4 = param_1[uVar15 + 0xcd];
      uVar13 = 1 << (uVar10 & 0x1f);
      do {
        uVar10 = uVar15;
        if ((uVar4 < uVar13) || (uVar13 == 0)) {
          do {
            uVar15 = uVar10 + 1;
            if (2 < uVar15) goto LAB_4a007730;
            uVar4 = param_1[uVar10 + 0xce];
            uVar10 = uVar15;
          } while (uVar4 == 0);
          puVar12 = param_1 + uVar15 * 0x40 + 0xb;
          uVar13 = 1;
        }
        for (; (uVar13 & uVar4) == 0; uVar13 = uVar13 << 1) {
          puVar12 = puVar12 + 2;
        }
        puVar1 = (uint *)puVar12[3];
        if (puVar1 != puVar12) {
          uVar15 = puVar1[3];
          uVar13 = puVar1[1] & 0xfffffffc;
          uVar10 = uVar13 - uVar2;
          puVar12[3] = uVar15;
          *(uint **)(uVar15 + 8) = puVar12;
          if (uVar10 < 0x10) {
            *(uint *)((int)puVar1 + uVar13 + 4) = *(uint *)((int)puVar1 + uVar13 + 4) | 1;
          }
          else {
            uVar13 = (int)puVar1 + uVar2;
            param_1[0xf] = uVar13;
            param_1[0x10] = uVar13;
            *(uint **)(uVar13 + 8) = puVar3;
            *(uint **)(uVar13 + 0xc) = puVar3;
            if (uVar2 < 0x100) {
              param_1[0xc] = uVar13;
            }
            puVar1[1] = uVar2 | 1;
            *(uint *)(uVar13 + 4) = uVar10 | 1;
            *(uint *)(uVar13 + uVar10) = uVar10;
          }
          return puVar1 + 2;
        }
        uVar4 = uVar4 & ~uVar13;
        puVar12 = puVar12 + 2;
        uVar13 = uVar13 << 1;
        param_1[uVar15 + 0xcd] = uVar4;
      } while( true );
    }
    if (uVar13 == 0) {
      FUN_4a007780(param_1);
    }
LAB_4a007730:
    puVar12 = (uint *)param_1[0xb];
    uVar13 = puVar12[1];
    if (uVar2 + 0x10 <= (uVar13 & 0xfffffffc)) {
      param_1[0xb] = (int)puVar12 + uVar2;
      puVar12[1] = uVar2 | 1;
      *(uint *)((int)puVar12 + uVar2 + 4) = (uVar13 & 0xfffffffc) - uVar2 | 1;
LAB_4a007770:
      return puVar12 + 2;
    }
    if ((*param_1 & 2) == 0) {
      uVar10 = param_1[0xb];
      uVar13 = *(uint *)(uVar10 + 4) & 0xfffffffc;
      iVar11 = param_1[0xd2] + uVar2 + 0x10;
      if ((param_1[0xd8] & 1) != 0) {
        iVar11 = iVar11 - uVar13;
      }
      uVar15 = uVar10 + uVar13;
      if (iVar11 < 1) {
        return (uint *)0x0;
      }
      uVar4 = param_1[0xe0] + iVar11;
      if ((int)param_1[0xe1] < (int)uVar4) {
        uVar4 = 0xffffffff;
      }
      else {
        param_1[0xe0] = uVar4;
        uVar4 = (uVar4 + param_1[0xdf]) - iVar11;
      }
      if (uVar4 == 0xffffffff) {
        return (uint *)0x0;
      }
      uVar5 = param_1[0xda];
      uVar14 = uVar5 + iVar11;
      if (uVar4 == uVar15) {
        uVar5 = iVar11 + uVar13 | 1;
      }
      param_1[0xda] = uVar14;
      if (uVar4 == uVar15) {
        *(uint *)(uVar10 + 4) = uVar5;
        goto LAB_4a05c230;
      }
      iVar6 = 0;
      uVar5 = uVar4;
      if ((param_1[0xd8] & 1) == 0) {
LAB_4a05c198:
        if ((int)param_1[0xe1] < (int)param_1[0xe0]) {
          uVar15 = 0xffffffff;
        }
        else {
          uVar15 = param_1[0xe0] + param_1[0xdf];
        }
        param_1[0xda] = ((uVar15 - uVar4) - iVar11) + uVar14;
LAB_4a05c1c0:
        iVar6 = 0;
        if (uVar15 == 0xffffffff) goto LAB_4a05c230;
      }
      else {
        if (uVar13 != 0) {
          if (uVar4 < uVar15) {
            param_1[0xd8] = param_1[0xd8] & 0xfffffffe;
            goto LAB_4a05c198;
          }
          param_1[0xda] = (uVar4 - uVar15) + uVar14;
        }
        uVar15 = uVar4 + 8 & 7;
        if (uVar15 != 0) {
          iVar6 = 8 - uVar15;
        }
        if (uVar15 != 0) {
          uVar5 = uVar4 + iVar6;
        }
        iVar6 = iVar6 + uVar13;
        uVar15 = param_1[0xe0] + iVar6;
        if ((int)param_1[0xe1] < (int)uVar15) {
          uVar15 = 0xffffffff;
        }
        else {
          param_1[0xe0] = uVar15;
          uVar15 = (uVar15 + param_1[0xdf]) - iVar6;
        }
        if (uVar15 == 0xffffffff) {
          if ((int)param_1[0xe1] < (int)param_1[0xe0]) {
            uVar15 = 0xffffffff;
          }
          else {
            uVar15 = param_1[0xdf] + param_1[0xe0];
          }
          goto LAB_4a05c1c0;
        }
        if (uVar15 < uVar4) {
          uVar15 = uVar4 + iVar11;
          param_1[0xd8] = param_1[0xd8] & 0xfffffffe;
          goto LAB_4a05c1c0;
        }
      }
      param_1[0xb] = uVar5;
      *(uint *)(uVar5 + 4) = (uVar15 - uVar5) + iVar6 | 1;
      param_1[0xda] = iVar6 + param_1[0xda];
      if (uVar13 != 0) {
        uVar13 = uVar13 - 0xc & 0xfffffff8;
        *(uint *)(uVar10 + 4) = uVar13 | 1;
        *(undefined4 *)(uVar10 + uVar13 + 4) = 5;
        *(undefined4 *)(uVar10 + uVar13 + 8) = 5;
        if (0xf < uVar13) {
          uVar13 = param_1[0xd1];
          param_1[0xd1] = 0xffffffff;
          FUN_4a007050(param_1,uVar10 + 8);
          param_1[0xd1] = uVar13;
        }
      }
LAB_4a05c230:
      uVar13 = param_1[0xda];
      if (param_1[0xdb] < uVar13) {
        param_1[0xdb] = uVar13;
      }
      if (param_1[0xdd] < uVar13 + param_1[0xd9]) {
        param_1[0xdd] = uVar13 + param_1[0xd9];
      }
      uVar13 = param_1[0xb];
      uVar10 = *(uint *)(uVar13 + 4) & 0xfffffffc;
      if (uVar10 < uVar2 + 0x10) {
        return (uint *)0x0;
      }
      param_1[0xb] = uVar13 + uVar2;
      *(uint *)(uVar13 + 4) = uVar2 | 1;
      *(uint *)(uVar13 + uVar2 + 4) = uVar10 - uVar2 | 1;
      return (uint *)(uVar13 + 8);
    }
    FUN_4a007780(param_1);
    param_3 = uVar2 - 7;
  } while( true );
}



// Address: 4a007b34

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a007b34(uint param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6,
                 int param_7,int param_8,int param_9,uint param_10,ushort *param_11,uint param_12)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ushort *puVar10;
  ushort *puVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uStack_78;
  uint uStack_74;
  ushort *puStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint local_64;
  
  uVar6 = -1 << (param_10 & 0xff);
  iVar2 = 1 << (param_10 & 0xff);
  uVar1 = param_10 << 1;
  local_64 = param_2 & uVar6;
  param_4 = param_2 + param_4;
  if (param_4 <= (int)local_64) {
    return;
  }
  uVar6 = uVar6 & param_1;
  iVar3 = 1 << (param_12 & 0xff);
  param_3 = param_1 + param_3;
  do {
    if ((int)uVar6 < param_3) {
      iVar7 = iVar2 + local_64;
      iVar4 = (int)local_64 >> (param_10 & 0xff);
      iVar8 = param_9 * iVar4;
      uStack_68 = uVar6;
      do {
        uVar15 = param_2;
        if ((int)param_2 < (int)local_64) {
          uVar15 = local_64;
        }
        iVar9 = 0;
        puStack_70 = (ushort *)(param_8 * uVar15 + param_6);
        iVar17 = 0;
        iVar18 = 0;
        iVar20 = 0;
        iVar16 = 0;
        if (param_12 == 4) {
          uVar15 = param_1;
          if ((int)param_1 < (int)uStack_68) {
            uVar15 = uStack_68;
          }
          uVar15 = (int)uVar15 >> 1;
LAB_4a007cf4:
          puStack_70 = (ushort *)(uVar15 + (int)puStack_70);
        }
        else {
          if (param_12 == 8) {
            uVar15 = param_1;
            if ((int)param_1 < (int)uStack_68) {
              uVar15 = uStack_68;
            }
            goto LAB_4a007cf4;
          }
          if (param_12 == 0x10) {
            uVar15 = param_1;
            if ((int)param_1 < (int)uStack_68) {
              uVar15 = uStack_68;
            }
            puStack_70 = puStack_70 + uVar15;
          }
        }
        uStack_74 = param_2;
        if ((int)param_2 < (int)local_64) {
          uStack_74 = local_64;
        }
        iVar19 = param_4;
        if (iVar7 < param_4) {
          iVar19 = iVar7;
        }
        if ((int)uStack_74 < iVar19) {
          iVar19 = uStack_68 + iVar2;
          do {
            uVar15 = param_1;
            if ((int)param_1 < (int)uStack_68) {
              uVar15 = uStack_68;
            }
            iVar12 = param_3;
            if (iVar19 < param_3) {
              iVar12 = iVar19;
            }
            puVar10 = puStack_70;
            if ((int)uVar15 < iVar12) {
              do {
                uVar14 = 0;
                puVar11 = puVar10;
                if (param_12 == 4) {
                  if ((uVar15 & 1) == 0) {
                    uVar14 = (uint)param_11[(byte)*puVar10 & 0xf];
                  }
                  else {
                    uVar14 = (uint)param_11[(byte)((byte)*puVar10 >> 4)];
                    puVar11 = (ushort *)((int)puVar10 + 1);
                  }
                }
                else if (param_12 == 8) {
                  uVar14 = (uint)param_11[(byte)*puVar10];
                  puVar11 = (ushort *)((int)puVar10 + 1);
                }
                else if (param_12 == 0x10) {
                  puVar11 = puVar10 + 1;
                  uVar14 = (uint)*puVar10;
                }
                if (param_5 == uVar14) {
                  iVar20 = iVar20 + 1;
                }
                else {
                  iVar9 = iVar9 + (uVar14 & 0x1f);
                  iVar16 = iVar16 + 1;
                  iVar17 = iVar17 + ((uVar14 & 0x3e0) >> 5);
                  iVar18 = iVar18 + ((uVar14 & 0x7c00) >> 10);
                }
                uVar15 = uVar15 + 1;
                iVar12 = param_3;
                if (iVar19 < param_3) {
                  iVar12 = iVar19;
                }
                puVar10 = puVar11;
              } while ((int)uVar15 < iVar12);
            }
            uStack_74 = uStack_74 + 1;
            puStack_70 = (ushort *)((int)puStack_70 + param_8);
            iVar12 = param_4;
            if (iVar7 < param_4) {
              iVar12 = iVar7;
            }
          } while ((int)uStack_74 < iVar12);
          if (iVar20 == iVar16) goto LAB_4a007e04;
        }
        else {
LAB_4a007e04:
          if (((int)(uStack_68 ^ local_64) >> (param_10 & 0xff) & 1U) != 0) {
            iVar20 = iVar20 + 1;
          }
        }
        uStack_78 = param_5;
        if (iVar20 <= iVar16) {
          if (iVar16 == 1 << (uVar1 & 0xff)) {
            uStack_6c = iVar9 >> (uVar1 & 0xff);
            iVar17 = iVar17 >> (uVar1 & 0xff);
            iVar18 = iVar18 >> (uVar1 & 0xff);
          }
          else {
            uStack_6c = FUN_4a0066d8(iVar9,iVar16);
            iVar17 = FUN_4a0066d8(iVar17,iVar16);
            iVar18 = FUN_4a0066d8(iVar18,iVar16);
          }
          if ((int)param_12 < 0x10) {
            uVar15 = 0;
            uStack_78 = 0;
            iVar20 = 0xc00;
            puVar10 = param_11;
            if (0 < iVar3) {
              do {
                uVar14 = (uint)*puVar10;
                if ((uVar14 != 0) &&
                   (iVar16 = (uVar14 & 0x1f) - uStack_6c, iVar9 = ((uVar14 & 0x7c00) >> 10) - iVar18
                   , iVar19 = ((uVar14 & 0x3e0) >> 5) - iVar17,
                   iVar9 = iVar19 * iVar19 + iVar16 * iVar16 + (iVar9 * iVar9 >> 1), iVar9 < iVar20)
                   ) {
                  uStack_78 = uVar15 & 0xff;
                  iVar20 = iVar9;
                }
                uVar15 = uVar15 + 1;
                puVar10 = puVar10 + 1;
              } while ((int)uVar15 < iVar3);
            }
          }
          else {
            uStack_78 = uStack_6c | iVar17 << 5 | iVar18 << 10;
          }
        }
        if (param_12 == 4) {
          pbVar13 = (byte *)(iVar4 * param_9 + ((int)uStack_68 >> (param_10 + 1 & 0xff)) + param_7);
          bVar5 = *pbVar13;
          if (((int)uStack_68 >> (param_10 & 0xff) & 1U) == 0) {
            bVar5 = (byte)uStack_78 | bVar5 & 0xf0;
          }
          else {
            bVar5 = bVar5 & 0xf | (byte)(uStack_78 << 4);
          }
          *pbVar13 = bVar5;
        }
        else if (param_12 == 8) {
          *(byte *)(iVar8 + ((int)uStack_68 >> (param_10 & 0xff)) + param_7) = (byte)uStack_78;
        }
        else if (param_12 == 0x10) {
          *(short *)(iVar8 + ((int)uStack_68 >> (param_10 - 1 & 0xff)) + param_7) = (short)uStack_78
          ;
        }
        uStack_68 = uStack_68 + iVar2;
      } while ((int)uStack_68 < param_3);
    }
    local_64 = local_64 + iVar2;
    if (param_4 <= (int)local_64) {
      return;
    }
  } while( true );
}



// Address: 4a007ff8

void FUN_4a007ff8(void)

{
  return;
}



// Address: 4a007ffa

void FUN_4a007ffa(void)

{
  return;
}



// Address: 4a008004

void FUN_4a008004(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar1 = PTR_DAT_4a00806c;
  PTR_DAT_4a00806c[4] = 0;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    if ((*(int *)puVar1 != 0) && (iVar2 = FUN_4a1652c6(s_Error_4a008078), iVar2 != 3)) {
      return;
    }
    pcVar3 = s_Error_4a008078;
  }
  else {
    iVar2 = FUN_4a0013e0(puVar1 + 4);
    PTR_DAT_4a008070[3] = 0;
    pcVar3 = puVar1 + iVar2 + 4;
    FUN_4a000db4(pcVar3,DAT_4a008074 - iVar2,param_1,&uStack_c);
    if ((*(int *)puVar1 != 0) && (iVar2 = FUN_4a1652c6(pcVar3), iVar2 != 3)) {
      return;
    }
  }
  host_s3eDebugErrorShow_thumb(0,pcVar3);
  return;
}



// Address: 4a00808c

void FUN_4a00808c(int *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_b4 [5];
  undefined4 local_a0;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  host_s3eSurfaceGetInt_thumb(4);
  local_24 = (float)thunk_FUN_4a171fac();
  host_s3eSurfaceGetInt_thumb(5);
  local_28 = (float)thunk_FUN_4a171fac();
  FUN_4a1500f8(DAT_4a0082a0);
  local_48 = thunk_FUN_4a171fac(*param_1);
  local_44 = thunk_FUN_4a171fac(param_1[1]);
  local_40 = thunk_FUN_4a171fac(*param_1 + *param_2);
  local_3c = thunk_FUN_4a171fac(param_1[1]);
  local_38 = thunk_FUN_4a171fac(*param_1 + *param_2);
  local_34 = thunk_FUN_4a171fac(param_1[1] + param_2[1]);
  local_30 = thunk_FUN_4a171fac(param_1[1]);
  local_2c = thunk_FUN_4a171fac(param_1[1] + param_2[1]);
  local_68 = *param_3;
  local_64 = thunk_FUN_4a171a94(param_3[1],param_4[1]);
  local_60 = thunk_FUN_4a171a94(*param_3,*param_4);
  local_5c = thunk_FUN_4a171a94(param_3[1],param_4[1]);
  local_58 = thunk_FUN_4a171a94(*param_3,*param_4);
  iVar2 = DAT_4a0082b0;
  uVar5 = DAT_4a0082ac;
  local_54 = param_3[1];
  local_50 = *param_3;
  local_4c = param_3[1];
  local_74 = *(undefined4 *)PTR_DAT_4a0082a4;
  uStack_70 = *(undefined4 *)(PTR_DAT_4a0082a4 + 4);
  uStack_6c = *(undefined4 *)(PTR_DAT_4a0082a4 + 8);
  cVar1 = *PTR_DAT_4a0082a8;
  uVar4 = thunk_FUN_4a172098(param_5,PTR_DAT_4a0082a4 + 0xc);
  local_18 = thunk_FUN_4a17211c(uVar4,uVar5);
  uVar4 = thunk_FUN_4a172098(param_6);
  local_1c = thunk_FUN_4a17211c(uVar4,uVar5);
  uVar4 = thunk_FUN_4a172098(param_7);
  local_20 = thunk_FUN_4a17211c(uVar4,uVar5);
  uVar4 = thunk_FUN_4a172098(param_8);
  uVar5 = thunk_FUN_4a17211c(uVar4,uVar5);
  puVar3 = PTR_DAT_4a0082b4;
  if (cVar1 == '\0') {
    thunk_FUN_4a150618(DAT_4a0082e0);
    host_glLoadIdentity_thumb();
    host_glOrthof_thumb(0.0,local_24,0.0,local_28,DAT_4a0082e4,1.0);
    FUN_4a150154(DAT_4a0082e8);
    FUN_4a150154(DAT_4a0082e8 + -4);
    thunk_FUN_4a150618(0x1700);
    thunk_FUN_4a1504dc();
    thunk_FUN_4a150618(DAT_4a0082e0 + 1);
    thunk_FUN_4a1504dc();
    FUN_4a150d6c(2,iVar2,0,&local_48);
    FUN_4a150a70(2,iVar2,0,&local_68);
    FUN_4a14febc(local_18,local_1c,local_20,uVar5);
  }
  else {
    FUN_4a150d34(*(undefined4 *)(PTR_DAT_4a0082b4 + 0xc));
    thunk_FUN_4a001134(local_b4,PTR_DAT_4a0082a4 + 0xc,0x40);
    local_b4[0] = thunk_FUN_4a171bb8(0x40000000,local_24);
    local_a0 = thunk_FUN_4a171bb8(0x40000000,local_28);
    uVar4 = FUN_4a1503f0(*(undefined4 *)(puVar3 + 0xc),s_inPMVMat_4a0082b8);
    FUN_4a150d20(uVar4,1,0,local_b4);
    uVar4 = FUN_4a1503f0(*(undefined4 *)(puVar3 + 0xc),s_inColour_4a0082c4);
    FUN_4a150ccc(uVar4,local_18,local_1c,local_20,uVar5);
    uVar5 = FUN_4a1502f8(*(undefined4 *)(puVar3 + 0xc),s_inVert_4a0082d0);
    FUN_4a150d48(uVar5,2,iVar2,0,0,&local_48);
    uVar5 = FUN_4a1502f8(*(undefined4 *)(puVar3 + 0xc),s_inUV0_4a0082d8);
    FUN_4a150d48(uVar5,2,iVar2,0,0,&local_68);
    FUN_4a150168(0);
    FUN_4a150168(1);
  }
  host_glDrawElements_arm(4,6,DAT_4a0082b0 - 3,&local_74);
  return;
}



// Address: 4a0082ec

void FUN_4a0082ec(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar1 = PTR_DAT_4a008368;
  if (*PTR_DAT_4a008364 != '\0') {
    uVar2 = FUN_4a0570a0(DAT_4a00836c,*(undefined4 *)(PTR_DAT_4a008368 + 4));
    uVar3 = FUN_4a0570a0(DAT_4a00836c + -1,*(undefined4 *)(puVar1 + 8));
    uVar4 = FUN_4a14ffc8();
    *(undefined4 *)(puVar1 + 0xc) = uVar4;
    FUN_4a14fcf8(uVar4,uVar2);
    FUN_4a14fcf8(*(undefined4 *)(puVar1 + 0xc),uVar3);
    FUN_4a1504cc(*(undefined4 *)(puVar1 + 0xc));
    FUN_4a14fd04(*(undefined4 *)(puVar1 + 0xc),0,s_inVert_4a008370);
    FUN_4a14fd04(*(undefined4 *)(puVar1 + 0xc),1,s_inUV0_4a008378);
    FUN_4a1504cc(*(undefined4 *)(puVar1 + 0xc));
    FUN_4a15005c(uVar2);
    FUN_4a15005c(uVar3);
    iVar5 = FUN_4a00abc0(0xd);
    *puVar1 = iVar5 != 0;
  }
  return;
}



// Address: 4a008380

void FUN_4a008380(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_4a0083b4;
  if (*PTR_DAT_4a0083b0 != '\0') {
    if (*PTR_DAT_4a0083b4 != '\0') {
      FUN_4a00ae50(0xd,1);
      FUN_4a00ae50(8,1);
    }
    FUN_4a15002c(*(undefined4 *)(puVar1 + 0xc));
  }
  return;
}



// Address: 4a0083c0

undefined1 FUN_4a0083c0(int param_1)

{
  return PTR_DAT_4a0083c8[param_1];
}



// Address: 4a0083cc

void FUN_4a0083cc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  bool bVar10;
  
  pvVar4 = host_glGetString_thumb(DAT_4a0085e4);
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_fragment_precision_high_4a0085e8);
  puVar1 = PTR_DAT_4a008608;
  if (iVar5 != 0) {
    *PTR_DAT_4a008608 = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_texture_mirrored_repeat_4a00860c);
  if (iVar5 != 0) {
    puVar1[1] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_mapbuffer_4a00862c);
  if (iVar5 != 0) {
    puVar1[2] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_packed_depth_stencil_4a008640);
  if (iVar5 != 0) {
    puVar1[3] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_QCOM_perfmon_global_mode_4a00865c);
  if (iVar5 != 0) {
    puVar1[4] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_single_precision_4a008678);
  if (iVar5 != 0) {
    puVar1[5] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_element_index_uint_4a008690);
  if (iVar5 != 0) {
    puVar1[6] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_texture_cube_map_4a0086ac);
  if (iVar5 != 0) {
    puVar1[7] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_texture_half_float_linear_4a0086c4);
  if (iVar5 != 0) {
    puVar1[8] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_IMG_user_clip_plane_4a0086e8);
  if (iVar5 != 0) {
    puVar1[9] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_NV_fence_4a008700);
  if (iVar5 != 0) {
    puVar1[10] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_blend_equation_separate_4a00870c);
  if (iVar5 != 0) {
    puVar1[0xb] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_blend_subtract_4a00872c);
  if (iVar5 != 0) {
    puVar1[0xc] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_EXT_read_format_bgra_4a008744);
  if (iVar5 != 0) {
    puVar1[0xd] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_framebuffer_object_4a00875c);
  if (iVar5 != 0) {
    puVar1[0xe] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_EXT_shader_texture_lod_4a008778);
  if (iVar5 != 0) {
    puVar1[0xf] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_ARM_rgba8_4a008794);
  if (iVar5 != 0) {
    puVar1[0x10] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_EXT_texture_compression_s3tc_4a0087a4);
  if (iVar5 != 0) {
    puVar1[0x11] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_QCOM_extended_get2_4a0087c4);
  if (iVar5 != 0) {
    puVar1[0x12] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_IMG_shader_binary_4a0087dc);
  if (iVar5 != 0) {
    puVar1[0x13] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_extended_matrix_palette_4a0087f4);
  if (iVar5 != 0) {
    puVar1[0x14] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_get_program_binary_4a008814);
  if (iVar5 != 0) {
    puVar1[0x15] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_compressed_ETC1_RGB8_text_4a008830);
  if (iVar5 != 0) {
    puVar1[0x16] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_rgb8_rgba8_4a008854);
  if (iVar5 != 0) {
    puVar1[0x17] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_QCOM_writeonly_rendering_4a008868);
  if (iVar5 != 0) {
    puVar1[0x18] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_AMD_compressed_3DC_texture_4a008884);
  if (iVar5 != 0) {
    puVar1[0x19] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_IMG_texture_env_enhanced_fixe_4a0088a4);
  if (iVar5 != 0) {
    puVar1[0x1a] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_APPLE_texture_format_BGRA8888_4a0088d0);
  if (iVar5 != 0) {
    puVar1[0x1b] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_EXT_discard_framebuffer_4a0088f4);
  if (iVar5 != 0) {
    puVar1[0x1c] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_fixed_point_4a008910);
  if (iVar5 != 0) {
    puVar1[0x1d] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_EXT_texture_compression_dxt1_4a008924);
  if (iVar5 != 0) {
    puVar1[0x1e] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_matrix_palette_4a008944);
  if (iVar5 != 0) {
    puVar1[0x1f] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_ARB_texture_env_combine_4a00895c);
  puVar1 = PTR_DAT_4a008608;
  puVar7 = PTR_DAT_4a008608 + 0x20;
  if (iVar5 != 0) {
    *puVar7 = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_IMG_multisampled_render_to_te_4a008978);
  if (iVar5 != 0) {
    puVar1[0x21] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_depth32_4a0089a0);
  if (iVar5 != 0) {
    puVar1[0x22] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_APPLE_texture_2D_limited_npot_4a0089b0);
  if (iVar5 != 0) {
    puVar1[0x23] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_texture_npot_4a0089d4);
  if (iVar5 != 0) {
    puVar1[0x24] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_APPLE_framebuffer_multisample_4a008c04);
  if (iVar5 != 0) {
    puVar1[0x25] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_ARM_mali_shader_binary_4a008c28);
  if (iVar5 != 0) {
    puVar1[0x26] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_EXT_texture_format_BGRA8888_4a008c44);
  if (iVar5 != 0) {
    puVar1[0x27] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_blend_func_separate_4a008c64);
  if (iVar5 != 0) {
    puVar1[0x28] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_texture_half_float_4a008c80);
  if (iVar5 != 0) {
    puVar1[0x29] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_EGL_image_4a008c9c);
  if (iVar5 != 0) {
    puVar1[0x2a] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_QCOM_extended_get_4a008cb0);
  if (iVar5 != 0) {
    puVar1[0x2b] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_vertex_half_float_4a008cc8);
  if (iVar5 != 0) {
    puVar1[0x2c] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_ANGLE_framebuffer_multisample_4a008ce4);
  if (iVar5 != 0) {
    puVar1[0x2d] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_QCOM_tiled_rendering_4a008d08);
  if (iVar5 != 0) {
    puVar1[0x2e] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_stencil8_4a008d20);
  if (iVar5 != 0) {
    puVar1[0x2f] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_ATI_extended_texture_coordina_4a008d30);
  if (iVar5 != 0) {
    puVar1[0x30] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_ANGLE_framebuffer_blit_4a008d60);
  if (iVar5 != 0) {
    puVar1[0x31] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_AMD_program_binary_Z400_4a008d7c);
  if (iVar5 != 0) {
    puVar1[0x32] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_stencil4_4a008d98);
  if (iVar5 != 0) {
    puVar1[0x33] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_stencil1_4a008da8);
  if (iVar5 != 0) {
    puVar1[0x34] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_APPLE_texture_max_level_4a008db8);
  if (iVar5 != 0) {
    puVar1[0x35] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_texture_3D_4a008dd4);
  if (iVar5 != 0) {
    puVar1[0x36] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_draw_texture_4a008de8);
  if (iVar5 != 0) {
    puVar1[0x37] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_APPLE_rgb_422_4a008dfc);
  if (iVar5 != 0) {
    puVar1[0x38] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_VIV_shader_binary_4a008e10);
  if (iVar5 != 0) {
    puVar1[0x39] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_byte_coordinates_4a008e28);
  if (iVar5 != 0) {
    puVar1[0x3a] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_EXT_texture_lod_bias_4a008e40);
  if (iVar5 != 0) {
    puVar1[0x3b] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_AMD_performance_monitor_4a008e58);
  if (iVar5 != 0) {
    puVar1[0x3c] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_IMG_program_binary_4a008e74);
  if (iVar5 != 0) {
    puVar1[0x3d] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_vertex_type_10_10_10_2_4a008e8c);
  if (iVar5 != 0) {
    puVar1[0x3e] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_query_matrix_4a008eac);
  if (iVar5 != 0) {
    puVar1[0x3f] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_texture_env_crossbar_4a008ec0);
  puVar2 = PTR_DAT_4a008edc;
  if (iVar5 != 0) {
    *PTR_DAT_4a008edc = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_NV_coverage_sample_4a008ee0);
  if (iVar5 != 0) {
    puVar2[1] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_EXT_multi_draw_arrays_4a008ef8);
  if (iVar5 != 0) {
    puVar2[2] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_EXT_texture_type_2_10_10_10_R_4a008f14);
  if (iVar5 != 0) {
    puVar2[3] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_fbo_render_mipmap_4a008f38);
  if (iVar5 != 0) {
    puVar2[4] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_compressed_paletted_textu_4a008f54);
  if (iVar5 != 0) {
    puVar2[5] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_vertex_array_object_4a008f78);
  if (iVar5 != 0) {
    puVar2[6] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_standard_derivatives_4a008f94);
  if (iVar5 != 0) {
    puVar2[7] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_texture_float_4a008fb0);
  if (iVar5 != 0) {
    puVar2[8] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_texture_float_linear_4a008fc8);
  if (iVar5 != 0) {
    puVar2[9] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_EXT_texture_filter_anisotropi_4a008fe4);
  if (iVar5 != 0) {
    puVar2[10] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_NV_depth_nonlinear_4a0093a0);
  if (iVar5 != 0) {
    puVar2[0xb] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_EXT_blend_minmax_4a0093b8);
  if (iVar5 != 0) {
    puVar2[0xc] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_IMG_read_format_4a0093cc);
  if (iVar5 != 0) {
    puVar2[0xd] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_depth24_4a0093e0);
  if (iVar5 != 0) {
    puVar2[0xe] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_stencil_wrap_4a0093f0);
  if (iVar5 != 0) {
    puVar2[0xf] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_matrix_get_4a009404);
  if (iVar5 != 0) {
    puVar2[0x10] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_OES_depth_texture_4a009418);
  if (iVar5 != 0) {
    puVar2[0x11] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_IMG_texture_compression_pvrtc_4a009430);
  if (iVar5 != 0) {
    puVar2[0x12] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_AMD_compressed_ATC_texture_4a009454);
  if (iVar5 != 0) {
    puVar2[0x13] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_QCOM_driver_control_4a009474);
  if (iVar5 != 0) {
    puVar2[0x14] = 1;
  }
  iVar5 = FUN_4a0015c0(pvVar4,s_GL_ATI_texture_compression_atitc_4a00948c);
  if (iVar5 != 0) {
    puVar2[0x13] = 1;
  }
  iVar5 = host_s3eGLGetInt_thumb(0);
  if (0x100 < iVar5) {
    *puVar7 = 1;
  }
  if (PTR_DAT_4a0094b0[0xe] != '\0') {
    host_glGetIntegerv_thumb(DAT_4a0094b8,PTR_DAT_4a0094b4);
    uVar6 = host_glGetError_thumb();
    if (uVar6 != 0) {
      *(undefined4 *)PTR_DAT_4a0094b4 = 0;
      *PTR_DAT_4a0094bc = 1;
    }
  }
  puVar3 = PTR_DAT_4a0094c0;
  if (PTR_DAT_4a0094b0[2] != '\0') {
    pvVar4 = host_eglGetProcAddress_thumb(s_glMapBufferOES_4a0094c4);
    *(void **)puVar3 = pvVar4;
    if (pvVar4 == (void *)0x0) {
LAB_4a0090ea:
      PTR_DAT_4a0094b0[2] = 0;
    }
    else if (PTR_DAT_4a0094b0[2] != '\0') {
      pvVar4 = host_eglGetProcAddress_thumb(s_glUnmapBufferOES_4a0094d4);
      *(void **)(puVar3 + 4) = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_4a0090ea;
      if (PTR_DAT_4a0094b0[2] != '\0') {
        pvVar4 = host_eglGetProcAddress_thumb(s_glGetBufferPointervOES_4a0094e8);
        *(void **)(puVar3 + 8) = pvVar4;
        if (pvVar4 == (void *)0x0) goto LAB_4a0090ea;
      }
    }
  }
  if (PTR_DAT_4a0094b0[5] != '\0') {
    pvVar4 = host_eglGetProcAddress_thumb(s_glDepthRangefOES_4a009500);
    *(void **)(puVar3 + 0xc) = pvVar4;
    if (pvVar4 == (void *)0x0) {
LAB_4a009168:
      PTR_DAT_4a0094b0[5] = 0;
    }
    else if (PTR_DAT_4a0094b0[5] != '\0') {
      pvVar4 = host_eglGetProcAddress_thumb(s_glFrustumfOES_4a009514);
      *(void **)(puVar3 + 0x10) = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_4a009168;
      if (PTR_DAT_4a0094b0[5] != '\0') {
        pvVar4 = host_eglGetProcAddress_thumb(s_glOrthofOES_4a009524);
        *(void **)(puVar3 + 0x14) = pvVar4;
        if (pvVar4 == (void *)0x0) goto LAB_4a009168;
        if (PTR_DAT_4a0094b0[5] != '\0') {
          pvVar4 = host_eglGetProcAddress_thumb(s_glClipPlanefOES_4a009530);
          *(void **)(puVar3 + 0x18) = pvVar4;
          if (pvVar4 == (void *)0x0) goto LAB_4a009168;
          if (PTR_DAT_4a0094b0[5] != '\0') {
            pvVar4 = host_eglGetProcAddress_thumb(s_glGetClipPlanefOES_4a009540);
            *(void **)(puVar3 + 0x1c) = pvVar4;
            if (pvVar4 == (void *)0x0) goto LAB_4a009168;
            if (PTR_DAT_4a0094b0[5] != '\0') {
              pvVar4 = host_eglGetProcAddress_thumb(s_glClearDepthfOES_4a009554);
              *(void **)(puVar3 + 0x20) = pvVar4;
              if (pvVar4 == (void *)0x0) goto LAB_4a009168;
            }
          }
        }
      }
    }
  }
  if (PTR_DAT_4a0094b0[7] != '\0') {
    pvVar4 = host_eglGetProcAddress_thumb(s_glTexGenfOES_4a009568);
    *(void **)(puVar3 + 0x24) = pvVar4;
    if (pvVar4 == (void *)0x0) {
LAB_4a009222:
      PTR_DAT_4a0094b0[7] = 0;
    }
    else if (PTR_DAT_4a0094b0[7] != '\0') {
      pvVar4 = host_eglGetProcAddress_thumb(s_glTexGenfvOES_4a009578);
      *(void **)(puVar3 + 0x28) = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_4a009222;
      if (PTR_DAT_4a0094b0[7] != '\0') {
        pvVar4 = host_eglGetProcAddress_thumb(s_glTexGeniOES_4a009588);
        *(void **)(puVar3 + 0x2c) = pvVar4;
        if (pvVar4 == (void *)0x0) goto LAB_4a009222;
        if (PTR_DAT_4a0094b0[7] != '\0') {
          pvVar4 = host_eglGetProcAddress_thumb(s_glTexGenivOES_4a009598);
          *(void **)(puVar3 + 0x30) = pvVar4;
          if (pvVar4 == (void *)0x0) goto LAB_4a009222;
          if (PTR_DAT_4a0094b0[7] != '\0') {
            pvVar4 = host_eglGetProcAddress_thumb(s_glTexGenxOES_4a0095a8);
            *(void **)(puVar3 + 0x34) = pvVar4;
            if (pvVar4 == (void *)0x0) goto LAB_4a009222;
            if (PTR_DAT_4a0094b0[7] != '\0') {
              pvVar4 = host_eglGetProcAddress_thumb(s_glTexGenxvOES_4a0095b8);
              *(void **)(puVar3 + 0x38) = pvVar4;
              if (pvVar4 == (void *)0x0) goto LAB_4a009222;
              if (PTR_DAT_4a0094b0[7] != '\0') {
                pvVar4 = host_eglGetProcAddress_thumb(s_glGetTexGenfvOES_4a0095c8);
                *(void **)(puVar3 + 0x3c) = pvVar4;
                if (pvVar4 == (void *)0x0) goto LAB_4a009222;
                if (PTR_DAT_4a0094b0[7] != '\0') {
                  pvVar4 = host_eglGetProcAddress_thumb(s_glGetTexGenivOES_4a0095dc);
                  *(void **)(puVar3 + 0x40) = pvVar4;
                  if (pvVar4 == (void *)0x0) goto LAB_4a009222;
                  if (PTR_DAT_4a0094b0[7] != '\0') {
                    pvVar4 = host_eglGetProcAddress_thumb(s_glGetTexGenxvOES_4a0095f0);
                    *(void **)(puVar3 + 0x44) = pvVar4;
                    if (pvVar4 == (void *)0x0) goto LAB_4a009222;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (PTR_DAT_4a0094b0[9] != '\0') {
    pvVar4 = host_eglGetProcAddress_thumb(s_glClipPlanefIMG_4a009604);
    *(void **)(puVar3 + 0x48) = pvVar4;
    if (pvVar4 == (void *)0x0) {
LAB_4a009264:
      PTR_DAT_4a0094b0[9] = 0;
    }
    else if (PTR_DAT_4a0094b0[9] != '\0') {
      pvVar4 = host_eglGetProcAddress_thumb(s_glClipPlanexIMG_4a009614);
      *(void **)(puVar3 + 0x4c) = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_4a009264;
    }
  }
  if (PTR_DAT_4a0094b0[10] != '\0') {
    pvVar4 = host_eglGetProcAddress_thumb(s_glDeleteFencesNV_4a009624);
    *(void **)(puVar3 + 0x50) = pvVar4;
    if (pvVar4 == (void *)0x0) {
LAB_4a0092e2:
      PTR_DAT_4a0094b0[10] = 0;
    }
    else if (PTR_DAT_4a0094b0[10] != '\0') {
      pvVar4 = host_eglGetProcAddress_thumb(s_glGenFencesNV_4a009638);
      *(void **)(puVar3 + 0x54) = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_4a0092e2;
      if (PTR_DAT_4a0094b0[10] != '\0') {
        pvVar4 = host_eglGetProcAddress_thumb(s_glIsFenceNV_4a009648);
        *(void **)(puVar3 + 0x58) = pvVar4;
        if (pvVar4 == (void *)0x0) goto LAB_4a0092e2;
        if (PTR_DAT_4a0094b0[10] != '\0') {
          pvVar4 = host_eglGetProcAddress_thumb(s_glTestFenceNV_4a009654);
          *(void **)(puVar3 + 0x5c) = pvVar4;
          if (pvVar4 == (void *)0x0) goto LAB_4a0092e2;
          if (PTR_DAT_4a0094b0[10] != '\0') {
            pvVar4 = host_eglGetProcAddress_thumb(s_glGetFenceivNV_4a009664);
            *(void **)(puVar3 + 0x60) = pvVar4;
            if (pvVar4 == (void *)0x0) goto LAB_4a0092e2;
            if (PTR_DAT_4a0094b0[10] != '\0') {
              pvVar4 = host_eglGetProcAddress_thumb(s_glFinishFenceNV_4a009674);
              *(void **)(puVar3 + 100) = pvVar4;
              if (pvVar4 == (void *)0x0) goto LAB_4a0092e2;
              if (PTR_DAT_4a0094b0[10] != '\0') {
                pvVar4 = host_eglGetProcAddress_thumb(s_glSetFenceNV_4a009684);
                *(void **)(puVar3 + 0x68) = pvVar4;
                if (pvVar4 == (void *)0x0) goto LAB_4a0092e2;
              }
            }
          }
        }
      }
    }
  }
  if (PTR_DAT_4a0094b0[0xb] != '\0') {
    pvVar4 = host_eglGetProcAddress_thumb(s_glBlendEquationSeparateOES_4a009694);
    *(void **)(puVar3 + 0x6c) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      PTR_DAT_4a0094b0[0xb] = 0;
    }
  }
  if (PTR_DAT_4a0094b0[0xc] != '\0') {
    pvVar4 = host_eglGetProcAddress_thumb(s_glBlendEquationOES_4a0096b0);
    *(void **)(puVar3 + 0x70) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      PTR_DAT_4a0094b0[0xc] = 0;
    }
  }
  if (PTR_DAT_4a0094b0[0xe] != '\0') {
    pvVar4 = host_eglGetProcAddress_thumb(s_glIsRenderbufferOES_4a0096c4);
    *(void **)(PTR_DAT_4a0094c0 + 0x74) = pvVar4;
    puVar3 = PTR_DAT_4a0094b0;
    if (pvVar4 == (void *)0x0) {
      PTR_DAT_4a0094b0[0xe] = 0;
    }
    else if (PTR_DAT_4a0094b0[0xe] != '\0') {
      pvVar4 = host_eglGetProcAddress_thumb(s_glBindRenderbufferOES_4a0096d8);
      bVar9 = pvVar4 == (void *)0x0;
      *(void **)(PTR_DAT_4a0094c0 + 0x78) = pvVar4;
      do {
        do {
          if (bVar9) goto LAB_4a0097d8;
          if (puVar3[0xe] == '\0') goto LAB_4a009804;
          pvVar4 = host_eglGetProcAddress_thumb(s_glDeleteRenderbuffersOES_4a0096f0);
          *(void **)(PTR_DAT_4a0094c0 + 0x7c) = pvVar4;
          bVar9 = true;
        } while (pvVar4 == (void *)0x0);
        if (puVar3[0xe] == '\0') goto LAB_4a009804;
        pvVar4 = host_eglGetProcAddress_thumb(s_glGenRenderbuffersOES_4a00970c);
        *(void **)(PTR_DAT_4a0094c0 + 0x80) = pvVar4;
        bVar9 = true;
      } while (pvVar4 == (void *)0x0);
      if (puVar3[0xe] != '\0') {
        pvVar4 = host_eglGetProcAddress_thumb(s_glRenderbufferStorageOES_4a009abc);
        *(void **)(PTR_DAT_4a009ad8 + 4) = pvVar4;
        if (pvVar4 == (void *)0x0) {
LAB_4a0097d8:
          puVar3[0xe] = 0;
        }
        else if (puVar3[0xe] != '\0') {
          pvVar4 = host_eglGetProcAddress_thumb(s_glGetRenderbufferParameterivOES_4a009adc);
          *(void **)(PTR_DAT_4a009ad8 + 8) = pvVar4;
          if (pvVar4 == (void *)0x0) goto LAB_4a0097d8;
          if (puVar3[0xe] != '\0') {
            pvVar4 = host_eglGetProcAddress_thumb(s_glIsFramebufferOES_4a009afc);
            *(void **)(PTR_DAT_4a009ad8 + 0xc) = pvVar4;
            if (pvVar4 == (void *)0x0) goto LAB_4a0097d8;
            if (puVar3[0xe] != '\0') {
              pvVar4 = host_eglGetProcAddress_thumb(s_glBindFramebufferOES_4a009b10);
              *(void **)(PTR_DAT_4a009ad8 + 0x10) = pvVar4;
              if (pvVar4 == (void *)0x0) goto LAB_4a0097d8;
              if (puVar3[0xe] != '\0') {
                pvVar4 = host_eglGetProcAddress_thumb(s_glDeleteFramebuffersOES_4a009b28);
                *(void **)(PTR_DAT_4a009ad8 + 0x14) = pvVar4;
                if (pvVar4 == (void *)0x0) goto LAB_4a0097d8;
                if (puVar3[0xe] != '\0') {
                  pvVar4 = host_eglGetProcAddress_thumb(s_glGenFramebuffersOES_4a009b40);
                  *(void **)(PTR_DAT_4a009ad8 + 0x18) = pvVar4;
                  if (pvVar4 == (void *)0x0) goto LAB_4a0097d8;
                  if (puVar3[0xe] != '\0') {
                    pvVar4 = host_eglGetProcAddress_thumb(s_glCheckFramebufferStatusOES_4a009b58);
                    *(void **)(PTR_DAT_4a009ad8 + 0x1c) = pvVar4;
                    if (pvVar4 == (void *)0x0) goto LAB_4a0097d8;
                    if (puVar3[0xe] != '\0') {
                      pvVar4 = host_eglGetProcAddress_thumb(s_glFramebufferRenderbufferOES_4a009b74)
                      ;
                      *(void **)(PTR_DAT_4a009ad8 + 0x20) = pvVar4;
                      if (pvVar4 == (void *)0x0) goto LAB_4a0097d8;
                      if (puVar3[0xe] != '\0') {
                        pvVar4 = host_eglGetProcAddress_thumb(s_glFramebufferTexture2DOES_4a009b94);
                        *(void **)(PTR_DAT_4a009ad8 + 0x24) = pvVar4;
                        if (pvVar4 == (void *)0x0) goto LAB_4a0097d8;
                        if (puVar3[0xe] != '\0') {
                          pvVar4 = host_eglGetProcAddress_thumb
                                             (s_glGetFramebufferAttachmentParame_4a009bb0);
                          *(void **)(PTR_DAT_4a009ad8 + 0x28) = pvVar4;
                          if (pvVar4 == (void *)0x0) goto LAB_4a0097d8;
                          if (puVar3[0xe] != '\0') {
                            pvVar4 = host_eglGetProcAddress_thumb(s_glGenerateMipmapOES_4a009bdc);
                            *(void **)(PTR_DAT_4a009ad8 + 0x2c) = pvVar4;
                            if (pvVar4 == (void *)0x0) goto LAB_4a0097d8;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_4a009804:
  puVar3 = PTR_DAT_4a009bf0;
  if (PTR_DAT_4a009bf0[0x12] != '\0') {
    pvVar4 = host_eglGetProcAddress_thumb(s_glExtGetShadersQCOM_4a009bf4);
    *(void **)(PTR_DAT_4a009ad8 + 0x30) = pvVar4;
    if (pvVar4 == (void *)0x0) {
LAB_4a00982e:
      puVar3[0x12] = 0;
    }
    else if (puVar3[0x12] != '\0') {
      pvVar4 = host_eglGetProcAddress_thumb(s_glExtGetProgramsQCOM_4a009c08);
      *(void **)(PTR_DAT_4a009ad8 + 0x34) = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_4a00982e;
      if (puVar3[0x12] != '\0') {
        pvVar4 = host_eglGetProcAddress_thumb(s_glExtIsProgramBinaryQCOM_4a009c20);
        *(void **)(PTR_DAT_4a009ad8 + 0x38) = pvVar4;
        if (pvVar4 == (void *)0x0) goto LAB_4a00982e;
        if (puVar3[0x12] != '\0') {
          pvVar4 = host_eglGetProcAddress_thumb(s_glExtGetProgramBinarySourceQCOM_4a009c3c);
          *(void **)(PTR_DAT_4a009ad8 + 0x3c) = pvVar4;
          if (pvVar4 == (void *)0x0) goto LAB_4a00982e;
        }
      }
    }
  }
  if (puVar3[0x1c] != '\0') {
    pvVar4 = host_eglGetProcAddress_thumb(s_glDiscardFramebufferEXT_4a009c5c);
    *(void **)(PTR_DAT_4a009ad8 + 0x40) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      puVar3[0x1c] = 0;
    }
  }
  bVar9 = puVar3[0x1d] == '\0';
LAB_4a009874:
  if (!bVar9) {
    pvVar4 = host_eglGetProcAddress_thumb(s_glAlphaFuncxOES_4a009c74);
    bVar9 = pvVar4 == (void *)0x0;
    *(void **)(PTR_DAT_4a009ad8 + 0x44) = pvVar4;
LAB_4a009882:
    do {
      if (bVar9) {
LAB_4a009f1e:
        puVar3[0x1d] = 0;
        break;
      }
      bVar9 = true;
      if (puVar3[0x1d] == '\0') goto LAB_4a009874;
      pvVar4 = host_eglGetProcAddress_thumb(s_glClearColorxOES_4a009c84);
      bVar9 = pvVar4 == (void *)0x0;
      *(void **)(PTR_DAT_4a009ad8 + 0x48) = pvVar4;
      if (!bVar9) {
        bVar10 = puVar3[0x1d] == '\0';
LAB_4a00989c:
        bVar9 = true;
        if (bVar10) goto LAB_4a009874;
        pvVar4 = host_eglGetProcAddress_thumb(s_glClearDepthxOES_4a009c98);
        bVar9 = pvVar4 == (void *)0x0;
        *(void **)(PTR_DAT_4a009ad8 + 0x4c) = pvVar4;
LAB_4a0098aa:
        if (!bVar9) {
          bVar9 = puVar3[0x1d] == '\0';
LAB_4a0098b0:
          if (!bVar9) {
            pvVar4 = host_eglGetProcAddress_thumb(s_glClipPlanexOES_4a009cac);
            bVar9 = pvVar4 == (void *)0x0;
            *(void **)(PTR_DAT_4a009ad8 + 0x50) = pvVar4;
LAB_4a0098be:
            if (!bVar9) {
              bVar9 = puVar3[0x1d] == '\0';
LAB_4a0098c4:
              if (!bVar9) {
                pvVar4 = host_eglGetProcAddress_thumb(s_glColor4xOES_4a009cbc);
                bVar9 = pvVar4 == (void *)0x0;
                *(void **)(PTR_DAT_4a009ad8 + 0x54) = pvVar4;
LAB_4a0098d2:
                if (!bVar9) {
                  bVar9 = puVar3[0x1d] == '\0';
LAB_4a0098d8:
                  if (!bVar9) {
                    pvVar4 = host_eglGetProcAddress_thumb(s_glDepthRangexOES_4a009ccc);
                    bVar9 = pvVar4 == (void *)0x0;
                    *(void **)(PTR_DAT_4a009ad8 + 0x58) = pvVar4;
LAB_4a0098e6:
                    if (!bVar9) {
                      bVar9 = puVar3[0x1d] == '\0';
LAB_4a0098ec:
                      if (!bVar9) {
                        pvVar4 = host_eglGetProcAddress_thumb(s_glFogxOES_4a009ce0);
                        bVar9 = pvVar4 == (void *)0x0;
                        *(void **)(PTR_DAT_4a009ad8 + 0x5c) = pvVar4;
LAB_4a0098fa:
                        if (!bVar9) {
                          bVar9 = puVar3[0x1d] == '\0';
LAB_4a009900:
                          if (!bVar9) {
                            pvVar4 = host_eglGetProcAddress_thumb(s_glFogxvOES_4a009cec);
                            bVar9 = pvVar4 == (void *)0x0;
                            *(void **)(PTR_DAT_4a009ad8 + 0x60) = pvVar4;
LAB_4a00990e:
                            if (!bVar9) {
                              bVar9 = puVar3[0x1d] == '\0';
LAB_4a009914:
                              if (!bVar9) {
                                pvVar4 = host_eglGetProcAddress_thumb(s_glFrustumxOES_4a009cf8);
                                bVar9 = pvVar4 == (void *)0x0;
                                *(void **)(PTR_DAT_4a009ad8 + 100) = pvVar4;
LAB_4a009922:
                                if (!bVar9) {
                                  bVar9 = puVar3[0x1d] == '\0';
LAB_4a009928:
                                  if (!bVar9) {
                                    pvVar4 = host_eglGetProcAddress_thumb
                                                       (s_glGetClipPlanexOES_4a009d08);
                                    bVar9 = pvVar4 == (void *)0x0;
                                    *(void **)(PTR_DAT_4a009ad8 + 0x68) = pvVar4;
LAB_4a009936:
                                    if (!bVar9) {
                                      bVar9 = puVar3[0x1d] == '\0';
LAB_4a00993c:
                                      if (!bVar9) {
                                        pvVar4 = host_eglGetProcAddress_thumb
                                                           (s_glGetFixedvOES_4a009d1c);
                                        bVar9 = pvVar4 == (void *)0x0;
                                        *(void **)(PTR_DAT_4a009ad8 + 0x6c) = pvVar4;
LAB_4a00994a:
                                        if (!bVar9) {
                                          bVar9 = puVar3[0x1d] == '\0';
LAB_4a009950:
                                          if (!bVar9) {
                                            pvVar4 = host_eglGetProcAddress_thumb
                                                               (s_glGetLightxvOES_4a009d2c);
                                            bVar9 = pvVar4 == (void *)0x0;
                                            *(void **)(PTR_DAT_4a009ad8 + 0x70) = pvVar4;
LAB_4a00995e:
                                            if (!bVar9) {
                                              bVar9 = puVar3[0x1d] == '\0';
LAB_4a009964:
                                              if (!bVar9) {
                                                pvVar4 = host_eglGetProcAddress_thumb
                                                                   (s_glGetMaterialxvOES_4a009d3c);
                                                bVar9 = pvVar4 == (void *)0x0;
                                                *(void **)(PTR_DAT_4a009ad8 + 0x74) = pvVar4;
LAB_4a009978:
                                                if (!bVar9) {
                                                  bVar10 = puVar3[0x1d] == '\0';
LAB_4a00997e:
                                                  if (!bVar10) {
                                                    pvVar4 = host_eglGetProcAddress_thumb
                                                                       (s_glGetTexEnvxvOES_4a009d50)
                                                    ;
                                                    bVar9 = pvVar4 == (void *)0x0;
                                                    *(void **)(PTR_DAT_4a009ad8 + 0x78) = pvVar4;
LAB_4a00998c:
                                                    if (!bVar9) {
                                                      bVar9 = puVar3[0x1d] == '\0';
LAB_4a009992:
                                                      if (!bVar9) {
                                                        pvVar4 = host_eglGetProcAddress_thumb
                                                                           (
                                                  s_glGetTexParameterxvOES_4a009d64);
                                                  bVar9 = pvVar4 == (void *)0x0;
                                                  *(void **)(PTR_DAT_4a009ad8 + 0x7c) = pvVar4;
LAB_4a0099a0:
                                                  if (!bVar9) {
                                                    bVar9 = puVar3[0x1d] == '\0';
LAB_4a0099a6:
                                                    if (!bVar9) {
                                                      pvVar4 = host_eglGetProcAddress_thumb
                                                                         (
                                                  s_glLightModelxOES_4a009d7c);
                                                  bVar9 = pvVar4 == (void *)0x0;
                                                  *(void **)(PTR_DAT_4a009ad8 + 0x80) = pvVar4;
                                                  while (!bVar9) {
                                                    bVar10 = puVar3[0x1d] == '\0';
                                                    while( true ) {
                                                      bVar9 = true;
                                                      if (bVar10) goto LAB_4a0098d8;
                                                      pvVar4 = host_eglGetProcAddress_thumb
                                                                         (
                                                  s_glLightModelxvOES_4a009d90);
                                                  *(void **)(PTR_DAT_4a009ad8 + 0x84) = pvVar4;
                                                  bVar9 = true;
                                                  if (pvVar4 == (void *)0x0) goto LAB_4a0098e6;
                                                  bVar9 = true;
                                                  if (puVar3[0x1d] == '\0') goto LAB_4a0098ec;
                                                  pvVar4 = host_eglGetProcAddress_thumb
                                                                     (s_glLightxOES_4a009da4);
                                                  *(void **)(PTR_DAT_4a009ad8 + 0x88) = pvVar4;
                                                  bVar9 = true;
                                                  if (pvVar4 == (void *)0x0) goto LAB_4a0098fa;
                                                  bVar9 = true;
                                                  if (puVar3[0x1d] == '\0') goto LAB_4a009900;
                                                  pvVar4 = host_eglGetProcAddress_thumb
                                                                     (s_glLightxvOES_4a009db0);
                                                  *(void **)(PTR_DAT_4a009ad8 + 0x8c) = pvVar4;
                                                  bVar9 = true;
                                                  if (pvVar4 == (void *)0x0) goto LAB_4a00990e;
                                                  bVar9 = true;
                                                  if (puVar3[0x1d] == '\0') goto LAB_4a009914;
                                                  pvVar4 = host_eglGetProcAddress_thumb
                                                                     (s_glLineWidthxOES_4a009dc0);
                                                  *(void **)(PTR_DAT_4a009ad8 + 0x90) = pvVar4;
                                                  bVar9 = true;
                                                  if (pvVar4 == (void *)0x0) goto LAB_4a009922;
                                                  bVar9 = true;
                                                  if (puVar3[0x1d] == '\0') goto LAB_4a009928;
                                                  pvVar4 = host_eglGetProcAddress_thumb
                                                                     (s_glLoadMatrixxOES_4a009dd0);
                                                  *(void **)(PTR_DAT_4a009ad8 + 0x94) = pvVar4;
                                                  bVar9 = true;
                                                  if (pvVar4 == (void *)0x0) goto LAB_4a009936;
                                                  bVar9 = true;
                                                  if (puVar3[0x1d] == '\0') goto LAB_4a00993c;
                                                  pvVar4 = host_eglGetProcAddress_thumb
                                                                     (s_glMaterialxOES_4a009de4);
                                                  *(void **)(PTR_DAT_4a009ad8 + 0x98) = pvVar4;
                                                  bVar9 = true;
                                                  if (pvVar4 == (void *)0x0) goto LAB_4a00994a;
                                                  bVar9 = true;
                                                  if (puVar3[0x1d] == '\0') goto LAB_4a009950;
                                                  pvVar4 = host_eglGetProcAddress_thumb
                                                                     (s_glMaterialxvOES_4a009df4);
                                                  *(void **)(PTR_DAT_4a009ad8 + 0x9c) = pvVar4;
                                                  bVar9 = true;
                                                  if (pvVar4 == (void *)0x0) goto LAB_4a00995e;
                                                  bVar9 = true;
                                                  if (puVar3[0x1d] == '\0') goto LAB_4a009964;
                                                  pvVar4 = host_eglGetProcAddress_thumb
                                                                     (s_glMultMatrixxOES_4a009e04);
                                                  *(void **)(PTR_DAT_4a009ad8 + 0xa0) = pvVar4;
                                                  bVar9 = true;
                                                  if (pvVar4 == (void *)0x0) goto LAB_4a009978;
                                                  bVar10 = true;
                                                  if (puVar3[0x1d] == '\0') goto LAB_4a00997e;
                                                  pvVar4 = host_eglGetProcAddress_thumb
                                                                     (
                                                  s_glMultiTexCoord4xOES_4a009e18);
                                                  *(void **)(PTR_DAT_4a009ad8 + 0xa4) = pvVar4;
                                                  bVar9 = true;
                                                  if (pvVar4 == (void *)0x0) goto LAB_4a00998c;
                                                  bVar9 = true;
                                                  if (puVar3[0x1d] == '\0') goto LAB_4a009992;
                                                  pvVar4 = host_eglGetProcAddress_thumb
                                                                     (s_glNormal3xOES_4a009e30);
                                                  *(void **)(PTR_DAT_4a009ad8 + 0xa8) = pvVar4;
                                                  bVar9 = true;
                                                  if (pvVar4 == (void *)0x0) goto LAB_4a0099a0;
                                                  bVar9 = true;
                                                  if (puVar3[0x1d] == '\0') goto LAB_4a0099a6;
                                                  pvVar4 = host_eglGetProcAddress_thumb
                                                                     (s_glOrthoxOES_4a009e40);
                                                  *(void **)(PTR_DAT_4a009ad8 + 0xac) = pvVar4;
                                                  bVar9 = true;
                                                  if (pvVar4 == (void *)0x0) break;
                                                  bVar10 = puVar3[0x1d] == '\0';
                                                  if (!bVar10) {
                                                    pvVar4 = host_eglGetProcAddress_thumb
                                                                       (
                                                  s_glPointParameterxOES_4a009e4c);
                                                  *(void **)(PTR_DAT_4a009ad8 + 0xb0) = pvVar4;
                                                  if (pvVar4 == (void *)0x0) goto LAB_4a009f1e;
                                                  if (puVar3[0x1d] == '\0') goto LAB_4a009f4a;
                                                  pvVar4 = host_eglGetProcAddress_thumb
                                                                     (
                                                  s_glPointParameterxvOES_4a00a1b0);
                                                  *(void **)(PTR_DAT_4a00a1c8 + 0x34) = pvVar4;
                                                  if (pvVar4 == (void *)0x0) goto LAB_4a009f1e;
                                                  if (puVar3[0x1d] == '\0') goto LAB_4a009f4a;
                                                  pvVar4 = host_eglGetProcAddress_thumb
                                                                     (s_glPointSizexOES_4a00a1cc);
                                                  *(void **)(PTR_DAT_4a00a1c8 + 0x38) = pvVar4;
                                                  if (pvVar4 == (void *)0x0) goto LAB_4a009f1e;
                                                  if (puVar3[0x1d] == '\0') goto LAB_4a009f4a;
                                                  pvVar4 = host_eglGetProcAddress_thumb
                                                                     (s_glPolygonOffsetxOES_4a00a1dc
                                                                     );
                                                  *(void **)(PTR_DAT_4a00a1c8 + 0x3c) = pvVar4;
                                                  if (pvVar4 == (void *)0x0) goto LAB_4a009f1e;
                                                  if (puVar3[0x1d] == '\0') goto LAB_4a009f4a;
                                                  pvVar4 = host_eglGetProcAddress_thumb
                                                                     (s_glRotatexOES_4a00a1f0);
                                                  *(void **)(PTR_DAT_4a00a1c8 + 0x40) = pvVar4;
                                                  if (pvVar4 == (void *)0x0) goto LAB_4a009f1e;
                                                  if (puVar3[0x1d] == '\0') goto LAB_4a009f4a;
                                                  pvVar4 = host_eglGetProcAddress_thumb
                                                                     (
                                                  s_glSampleCoveragexOES_4a00a200);
                                                  *(void **)(PTR_DAT_4a00a1c8 + 0x44) = pvVar4;
                                                  if (pvVar4 == (void *)0x0) goto LAB_4a009f1e;
                                                  if (puVar3[0x1d] == '\0') goto LAB_4a009f4a;
                                                  pvVar4 = host_eglGetProcAddress_thumb
                                                                     (s_glScalexOES_4a00a218);
                                                  *(void **)(PTR_DAT_4a00a1c8 + 0x48) = pvVar4;
                                                  if (pvVar4 == (void *)0x0) goto LAB_4a009f1e;
                                                  if (puVar3[0x1d] == '\0') goto LAB_4a009f4a;
                                                  pvVar4 = host_eglGetProcAddress_thumb
                                                                     (s_glTexEnvxOES_4a00a224);
                                                  *(void **)(PTR_DAT_4a00a1c8 + 0x4c) = pvVar4;
                                                  if (pvVar4 == (void *)0x0) goto LAB_4a009f1e;
                                                  if (puVar3[0x1d] == '\0') goto LAB_4a009f4a;
                                                  pvVar4 = host_eglGetProcAddress_thumb
                                                                     (s_glTexEnvxvOES_4a00a234);
                                                  *(void **)(PTR_DAT_4a00a1c8 + 0x50) = pvVar4;
                                                  if (pvVar4 == (void *)0x0) goto LAB_4a009f1e;
                                                  if (puVar3[0x1d] == '\0') goto LAB_4a009f4a;
                                                  pvVar4 = host_eglGetProcAddress_thumb
                                                                     (s_glTexParameterxOES_4a00a244)
                                                  ;
                                                  *(void **)(PTR_DAT_4a00a1c8 + 0x54) = pvVar4;
                                                  if (pvVar4 == (void *)0x0) goto LAB_4a009f1e;
                                                  if (puVar3[0x1d] == '\0') goto LAB_4a009f4a;
                                                  pvVar4 = host_eglGetProcAddress_thumb
                                                                     (s_glTexParameterxvOES_4a00a258
                                                                     );
                                                  *(void **)(PTR_DAT_4a00a1c8 + 0x58) = pvVar4;
                                                  if (pvVar4 == (void *)0x0) goto LAB_4a009f1e;
                                                  if (puVar3[0x1d] == '\0') goto LAB_4a009f4a;
                                                  pvVar4 = host_eglGetProcAddress_thumb
                                                                     (s_glTranslatexOES_4a00a26c);
                                                  *(void **)(PTR_DAT_4a00a1c8 + 0x5c) = pvVar4;
                                                  if (pvVar4 != (void *)0x0) goto LAB_4a009f4a;
                                                  goto LAB_4a009f1e;
                                                  }
                                                  }
                                                  }
                                                  goto LAB_4a0098d2;
                                                  }
                                                  goto LAB_4a0098c4;
                                                  }
                                                  goto LAB_4a0098be;
                                                  }
                                                  goto LAB_4a0098b0;
                                                  }
                                                  goto LAB_4a0098aa;
                                                  }
                                                  goto LAB_4a00989c;
                                                }
                                                goto LAB_4a009882;
                                              }
                                              goto LAB_4a009874;
                                            }
                                            goto LAB_4a009882;
                                          }
                                          goto LAB_4a009874;
                                        }
                                        goto LAB_4a009882;
                                      }
                                      goto LAB_4a009874;
                                    }
                                    goto LAB_4a009882;
                                  }
                                  goto LAB_4a009874;
                                }
                                goto LAB_4a009882;
                              }
                              goto LAB_4a009874;
                            }
                            goto LAB_4a009882;
                          }
                          goto LAB_4a009874;
                        }
                        goto LAB_4a009882;
                      }
                      goto LAB_4a009874;
                    }
                    goto LAB_4a009882;
                  }
                  goto LAB_4a009874;
                }
                goto LAB_4a009882;
              }
              goto LAB_4a009874;
            }
            goto LAB_4a009882;
          }
          goto LAB_4a009874;
        }
      }
    } while( true );
  }
LAB_4a009f4a:
  if (puVar3[0x1f] != '\0') {
    pvVar4 = host_eglGetProcAddress_thumb(s_glCurrentPaletteMatrixOES_4a00a27c);
    *(void **)(PTR_DAT_4a00a1c8 + 0x60) = pvVar4;
    if (pvVar4 == (void *)0x0) {
LAB_4a009f72:
      puVar3[0x1f] = 0;
    }
    else if (puVar3[0x1f] != '\0') {
      pvVar4 = host_eglGetProcAddress_thumb(s_glLoadPaletteFromModelViewMatrix_4a00a298);
      *(void **)(PTR_DAT_4a00a1c8 + 100) = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_4a009f72;
      if (puVar3[0x1f] != '\0') {
        pvVar4 = host_eglGetProcAddress_thumb(s_glMatrixIndexPointerOES_4a00a2bc);
        *(void **)(PTR_DAT_4a00a1c8 + 0x68) = pvVar4;
        if (pvVar4 == (void *)0x0) goto LAB_4a009f72;
        if (puVar3[0x1f] != '\0') {
          pvVar4 = host_eglGetProcAddress_thumb(s_glWeightPointerOES_4a00a2d4);
          *(void **)(PTR_DAT_4a00a1c8 + 0x6c) = pvVar4;
          if (pvVar4 == (void *)0x0) goto LAB_4a009f72;
        }
      }
    }
  }
  if (puVar1[0x21] != '\0') {
    pvVar4 = host_eglGetProcAddress_thumb(s_glRenderbufferStorageMultisample_4a00a2e8);
    puVar3 = PTR_DAT_4a00a1c8;
    *(void **)(PTR_DAT_4a00a1c8 + 0x70) = pvVar4;
    if (pvVar4 == (void *)0x0) {
LAB_4a009fb2:
      puVar1[0x21] = 0;
    }
    else if (puVar1[0x21] != '\0') {
      pvVar4 = host_eglGetProcAddress_thumb(s_glFramebufferTexture2DMultisampl_4a00a30c);
      *(void **)(puVar3 + 0x74) = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_4a009fb2;
    }
  }
  if (puVar1[0x25] != '\0') {
    pvVar4 = host_eglGetProcAddress_thumb(s_glRenderbufferStorageMultisample_4a00a334);
    puVar3 = PTR_DAT_4a00a1c8;
    *(void **)(PTR_DAT_4a00a1c8 + 0x78) = pvVar4;
    if (pvVar4 == (void *)0x0) {
LAB_4a009fdc:
      puVar1[0x25] = 0;
    }
    else if (puVar1[0x25] != '\0') {
      pvVar4 = host_eglGetProcAddress_thumb(s_glResolveMultisampleFramebufferA_4a00a35c);
      *(void **)(puVar3 + 0x7c) = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_4a009fdc;
    }
  }
  puVar3 = PTR_DAT_4a00a1c8;
  puVar8 = (undefined4 *)(PTR_DAT_4a00a1c8 + 0x80);
  if (puVar1[0x28] != '\0') {
    pvVar4 = host_eglGetProcAddress_thumb(s_glBlendFuncSeparateOES_4a00a384);
    *puVar8 = pvVar4;
    if (pvVar4 == (void *)0x0) {
      puVar1[0x28] = 0;
    }
  }
  if (puVar1[0x2a] != '\0') {
    pvVar4 = host_eglGetProcAddress_thumb(s_glEGLImageTargetTexture2DOES_4a00a39c);
    *(void **)(puVar3 + 0x84) = pvVar4;
    if (pvVar4 == (void *)0x0) {
LAB_4a00a01c:
      puVar1[0x2a] = 0;
    }
    else if (puVar1[0x2a] != '\0') {
      pvVar4 = host_eglGetProcAddress_thumb(s_glEGLImageTargetRenderbufferStor_4a00a3bc);
      *(void **)(puVar3 + 0x88) = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_4a00a01c;
    }
  }
  if (puVar1[0x2b] != '\0') {
    pvVar4 = host_eglGetProcAddress_thumb(s_glExtGetTexturesQCOM_4a00a3e4);
    *(void **)(puVar3 + 0x8c) = pvVar4;
    if (pvVar4 == (void *)0x0) {
LAB_4a00a09e:
      puVar1[0x2b] = 0;
    }
    else if (puVar1[0x2b] != '\0') {
      pvVar4 = host_eglGetProcAddress_thumb(s_glExtGetBuffersQCOM_4a00a3fc);
      *(void **)(puVar3 + 0x90) = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_4a00a09e;
      if (puVar1[0x2b] != '\0') {
        pvVar4 = host_eglGetProcAddress_thumb(s_glExtGetRenderbuffersQCOM_4a00a410);
        *(void **)(puVar3 + 0x94) = pvVar4;
        if (pvVar4 == (void *)0x0) goto LAB_4a00a09e;
        if (puVar1[0x2b] != '\0') {
          pvVar4 = host_eglGetProcAddress_thumb(s_glExtGetFramebuffersQCOM_4a00a42c);
          *(void **)(puVar3 + 0x98) = pvVar4;
          if (pvVar4 == (void *)0x0) goto LAB_4a00a09e;
          if (puVar1[0x2b] != '\0') {
            pvVar4 = host_eglGetProcAddress_thumb(s_glExtGetTexLevelParameterivQCOM_4a00a448);
            *(void **)(puVar3 + 0x9c) = pvVar4;
            if (pvVar4 == (void *)0x0) goto LAB_4a00a09e;
            if (puVar1[0x2b] != '\0') {
              pvVar4 = host_eglGetProcAddress_thumb(s_glExtTexObjectStateOverrideiQCOM_4a00a468);
              *(void **)(puVar3 + 0xa0) = pvVar4;
              if (pvVar4 == (void *)0x0) goto LAB_4a00a09e;
              if (puVar1[0x2b] != '\0') {
                pvVar4 = host_eglGetProcAddress_thumb(s_glExtGetTexSubImageQCOM_4a00a48c);
                *(void **)(puVar3 + 0xa4) = pvVar4;
                if (pvVar4 == (void *)0x0) goto LAB_4a00a09e;
                if (puVar1[0x2b] != '\0') {
                  pvVar4 = host_eglGetProcAddress_thumb(s_glExtGetBufferPointervQCOM_4a00a4a4);
                  *(void **)(puVar3 + 0xa8) = pvVar4;
                  if (pvVar4 == (void *)0x0) goto LAB_4a00a09e;
                }
              }
            }
          }
        }
      }
    }
  }
  if (puVar1[0x2e] != '\0') {
    pvVar4 = host_eglGetProcAddress_thumb(s_glStartTilingQCOM_4a00a4c0);
    *(void **)(puVar3 + 0xac) = pvVar4;
    if (pvVar4 == (void *)0x0) {
LAB_4a00a0d8:
      puVar1[0x2e] = 0;
    }
    else if (puVar1[0x2e] != '\0') {
      pvVar4 = host_eglGetProcAddress_thumb(s_glEndTilingQCOM_4a00a4d4);
      *(void **)(puVar3 + 0xb0) = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_4a00a0d8;
    }
  }
  if (puVar1[0x37] != '\0') {
    pvVar4 = host_eglGetProcAddress_thumb(s_glDrawTexsOES_4a00a4e4);
    *(void **)(puVar3 + 0xb4) = pvVar4;
    if (pvVar4 == (void *)0x0) {
LAB_4a00a15a:
      puVar1[0x37] = 0;
    }
    else if (puVar1[0x37] != '\0') {
      pvVar4 = host_eglGetProcAddress_thumb(s_glDrawTexiOES_4a00a4f4);
      *(void **)(puVar3 + 0xb8) = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_4a00a15a;
      if (puVar1[0x37] != '\0') {
        pvVar4 = host_eglGetProcAddress_thumb(s_glDrawTexxOES_4a00a504);
        *(void **)(puVar3 + 0xbc) = pvVar4;
        if (pvVar4 == (void *)0x0) goto LAB_4a00a15a;
        if (puVar1[0x37] != '\0') {
          pvVar4 = host_eglGetProcAddress_thumb(s_glDrawTexsvOES_4a00a514);
          *(void **)(puVar3 + 0xc0) = pvVar4;
          if (pvVar4 == (void *)0x0) goto LAB_4a00a15a;
          if (puVar1[0x37] != '\0') {
            pvVar4 = host_eglGetProcAddress_thumb(s_glDrawTexivOES_4a00a524);
            *(void **)(puVar3 + 0xc4) = pvVar4;
            if (pvVar4 == (void *)0x0) goto LAB_4a00a15a;
            if (puVar1[0x37] != '\0') {
              pvVar4 = host_eglGetProcAddress_thumb(s_glDrawTexxvOES_4a00a534);
              *(void **)(puVar3 + 200) = pvVar4;
              if (pvVar4 == (void *)0x0) goto LAB_4a00a15a;
              if (puVar1[0x37] != '\0') {
                pvVar4 = host_eglGetProcAddress_thumb(s_glDrawTexfOES_4a00a544);
                *(void **)(puVar3 + 0xcc) = pvVar4;
                if (pvVar4 == (void *)0x0) goto LAB_4a00a15a;
                if (puVar1[0x37] != '\0') {
                  pvVar4 = host_eglGetProcAddress_thumb(s_glDrawTexfvOES_4a00a554);
                  *(void **)(puVar3 + 0xd0) = pvVar4;
                  if (pvVar4 == (void *)0x0) goto LAB_4a00a15a;
                }
              }
            }
          }
        }
      }
    }
  }
  if (puVar1[0x3f] != '\0') {
    pvVar4 = host_eglGetProcAddress_thumb(s_glQueryMatrixxOES_4a00a564);
    *(void **)(puVar3 + 0xd4) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      puVar1[0x3f] = 0;
    }
  }
  if (puVar2[2] != '\0') {
    pvVar4 = host_eglGetProcAddress_thumb(s_glMultiDrawArraysEXT_4a00a578);
    *(void **)(puVar3 + 0xd8) = pvVar4;
    if (pvVar4 == (void *)0x0) {
LAB_4a00a1a8:
      puVar2[2] = 0;
    }
    else if (puVar2[2] != '\0') {
      pvVar4 = host_eglGetProcAddress_thumb(s_glMultiDrawElementsEXT_4a00a644);
      *(void **)(puVar3 + 0xdc) = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_4a00a1a8;
    }
  }
  if (puVar2[6] == '\0') goto LAB_4a00a5f0;
  pvVar4 = host_eglGetProcAddress_thumb(s_glBindVertexArrayOES_4a00a65c);
  *(void **)(puVar3 + 0xe0) = pvVar4;
  if (pvVar4 != (void *)0x0) {
    if (puVar2[6] == '\0') goto LAB_4a00a5f0;
    pvVar4 = host_eglGetProcAddress_thumb(s_glDeleteVertexArraysOES_4a00a674);
    *(void **)(puVar3 + 0xe4) = pvVar4;
    if (pvVar4 != (void *)0x0) {
      if (puVar2[6] == '\0') goto LAB_4a00a5f0;
      pvVar4 = host_eglGetProcAddress_thumb(s_glGenVertexArraysOES_4a00a68c);
      *(void **)(puVar3 + 0xe8) = pvVar4;
      if (pvVar4 != (void *)0x0) {
        if (puVar2[6] == '\0') goto LAB_4a00a5f0;
        pvVar4 = host_eglGetProcAddress_thumb(s_glIsVertexArrayOES_4a00a6a4);
        *(void **)(puVar3 + 0xec) = pvVar4;
        if (pvVar4 != (void *)0x0) goto LAB_4a00a5f0;
      }
    }
  }
  puVar2[6] = 0;
LAB_4a00a5f0:
  if (puVar2[0x14] == '\0') {
    return;
  }
  pvVar4 = host_eglGetProcAddress_thumb(s_glGetDriverControlsQCOM_4a00a6b8);
  *(void **)(puVar3 + 0xf0) = pvVar4;
  if (pvVar4 != (void *)0x0) {
    if (puVar2[0x14] == '\0') {
      return;
    }
    pvVar4 = host_eglGetProcAddress_thumb(s_glGetDriverControlStringQCOM_4a00a6d0);
    *(void **)(puVar3 + 0xf4) = pvVar4;
    if (pvVar4 != (void *)0x0) {
      if (puVar2[0x14] == '\0') {
        return;
      }
      pvVar4 = host_eglGetProcAddress_thumb(s_glEnableDriverControlQCOM_4a00a6f0);
      *(void **)(puVar3 + 0xf8) = pvVar4;
      if (pvVar4 != (void *)0x0) {
        if (puVar2[0x14] == '\0') {
          return;
        }
        pvVar4 = host_eglGetProcAddress_thumb(s_glDisableDriverControlQCOM_4a00a70c);
        *(void **)(puVar3 + 0xfc) = pvVar4;
        if (pvVar4 != (void *)0x0) {
          return;
        }
      }
    }
  }
  puVar2[0x14] = 0;
  return;
}




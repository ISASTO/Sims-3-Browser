/* AUTOMATED DECOMPILER OUTPUT. Not original source, not a buildable game.
 * Function boundaries, types, indirect calls, and data still require validation. */

// Address: 4a164e90

undefined4 FUN_4a164e90(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  if (*(int *)(iVar3 + 0x34) == 0) {
    iVar1 = (**(code **)(param_1 + 0x20))
                      (*(undefined4 *)(param_1 + 0x28),1 << (*(uint *)(iVar3 + 0x24) & 0xff),1);
    *(int *)(iVar3 + 0x34) = iVar1;
    if (iVar1 == 0) {
      return 1;
    }
  }
  if (*(int *)(iVar3 + 0x28) == 0) {
    *(int *)(iVar3 + 0x28) = 1 << (*(uint *)(iVar3 + 0x24) & 0xff);
    *(undefined4 *)(iVar3 + 0x30) = 0;
    *(undefined4 *)(iVar3 + 0x2c) = 0;
  }
  uVar2 = *(uint *)(iVar3 + 0x28);
  uVar4 = param_2 - *(int *)(param_1 + 0x10);
  if (uVar4 < uVar2) {
    uVar2 = uVar2 - *(int *)(iVar3 + 0x30);
    if (uVar4 < uVar2) {
      uVar2 = uVar4;
    }
    FUN_4a000f84(*(int *)(iVar3 + 0x30) + *(int *)(iVar3 + 0x34),*(int *)(param_1 + 0xc) - uVar4,
                 uVar2);
    iVar1 = uVar4 - uVar2;
    if (iVar1 == 0) {
      uVar4 = *(int *)(iVar3 + 0x30) + uVar2;
      *(uint *)(iVar3 + 0x30) = uVar4;
      if (uVar4 == *(uint *)(iVar3 + 0x28)) {
        *(undefined4 *)(iVar3 + 0x30) = 0;
      }
      if (*(uint *)(iVar3 + 0x28) <= *(uint *)(iVar3 + 0x2c)) {
        return 0;
      }
      iVar1 = *(uint *)(iVar3 + 0x2c) + uVar2;
    }
    else {
      FUN_4a000f84(*(undefined4 *)(iVar3 + 0x34),*(int *)(param_1 + 0xc) - iVar1,iVar1);
      *(int *)(iVar3 + 0x30) = iVar1;
      iVar1 = *(int *)(iVar3 + 0x28);
    }
    *(int *)(iVar3 + 0x2c) = iVar1;
  }
  else {
    FUN_4a000f84(*(undefined4 *)(iVar3 + 0x34),*(int *)(param_1 + 0xc) - uVar2);
    *(undefined4 *)(iVar3 + 0x30) = 0;
    *(undefined4 *)(iVar3 + 0x2c) = *(undefined4 *)(iVar3 + 0x28);
  }
  return 0;
}



// Address: 4a164fc0

undefined4 FUN_4a164fc0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_210 [507];
  undefined1 auStack_15 [4];
  char local_11;
  
  thunk_FUN_4a00121c(auStack_210,0x200);
  FUN_4a000db4(auStack_210,0x200,param_1,param_2);
  if (local_11 != '\0') {
    FUN_4a0012bc(auStack_15,&DAT_4a165014);
  }
  uVar1 = FUN_4a0013e0(auStack_210);
  FUN_4a14f4bc(auStack_210,uVar1,1,*(undefined4 *)(PTR_DAT_4a165018 + 0xc));
  return 0;
}



// Address: 4a16501c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a16501c(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  int iVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  int local_4c;
  int iStack_2c;
  undefined4 *puStack_28;
  
  iVar11 = *(int *)(param_1 + 0x70);
  iVar16 = *(int *)(param_1 + 0x144);
  iVar8 = *(int *)(param_1 + 0x1c8);
  iVar6 = *(int *)(iVar8 + 8);
  iVar12 = *(int *)(iVar8 + 0xc);
  iVar19 = *(int *)(iVar8 + 0x10);
  iVar8 = *(int *)(iVar8 + 0x14);
  local_4c = 1;
  iStack_2c = param_3;
  puStack_28 = param_4;
  if (1 < param_5 + 1) {
    do {
      iVar17 = iStack_2c * 4;
      iVar1 = iStack_2c * 4;
      iVar2 = iStack_2c * 4;
      iStack_2c = iStack_2c + 1;
      puVar18 = (undefined1 *)*puStack_28;
      if (iVar11 != 0) {
        iVar7 = iVar11;
        pbVar9 = *(byte **)(*param_2 + iVar17);
        pbVar10 = *(byte **)(param_2[1] + iVar1);
        pbVar13 = *(byte **)(param_2[2] + iVar2);
        puVar14 = puVar18 + 1;
        puVar15 = puVar18 + 2;
        do {
          bVar3 = *pbVar13;
          bVar4 = *pbVar9;
          bVar5 = *pbVar10;
          iVar17 = iVar16 + (uint)bVar4;
          iVar7 = iVar7 + -1;
          *puVar18 = *(undefined1 *)(*(int *)(iVar6 + (uint)bVar3 * 4) + iVar17);
          *puVar14 = *(undefined1 *)
                      (iVar16 + (uint)bVar4 +
                                (*(int *)(iVar19 + (uint)bVar3 * 4) +
                                 *(int *)(iVar8 + (uint)bVar5 * 4) >> 0x10));
          *puVar15 = *(undefined1 *)(*(int *)(iVar12 + (uint)bVar5 * 4) + iVar17);
          pbVar9 = pbVar9 + 1;
          pbVar10 = pbVar10 + 1;
          pbVar13 = pbVar13 + 1;
          puVar14 = puVar14 + 3;
          puVar15 = puVar15 + 3;
          puVar18 = puVar18 + 3;
        } while (iVar7 != 0);
      }
      local_4c = local_4c + 1;
      puStack_28 = puStack_28 + 1;
    } while (local_4c < param_5 + 1);
    return;
  }
  return;
}



// Address: 4a165140

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a165140(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  int iVar15;
  byte *pbVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  int iVar22;
  byte *pbVar23;
  int local_54;
  int iStack_2c;
  undefined4 *puStack_28;
  
  iVar14 = *(int *)(param_1 + 0x70);
  iVar22 = *(int *)(param_1 + 0x144);
  iVar11 = *(int *)(param_1 + 0x1c8);
  iVar8 = *(int *)(iVar11 + 8);
  iVar15 = *(int *)(iVar11 + 0xc);
  iVar9 = *(int *)(iVar11 + 0x10);
  iVar11 = *(int *)(iVar11 + 0x14);
  local_54 = 1;
  iStack_2c = param_3;
  puStack_28 = param_4;
  if (1 < param_5 + 1) {
    do {
      iVar1 = iStack_2c * 4;
      iVar2 = iStack_2c * 4;
      iVar3 = iStack_2c * 4;
      iVar4 = iStack_2c * 4;
      iStack_2c = iStack_2c + 1;
      puVar17 = (undefined1 *)*puStack_28;
      if (iVar14 != 0) {
        iVar12 = iVar14;
        pbVar13 = *(byte **)(*param_2 + iVar2);
        pbVar16 = *(byte **)(param_2[1] + iVar3);
        puVar18 = puVar17 + 1;
        puVar19 = puVar17 + 2;
        puVar20 = *(undefined1 **)(param_2[3] + iVar4);
        puVar21 = puVar17 + 3;
        pbVar23 = *(byte **)(param_2[2] + iVar1);
        do {
          uVar5 = *puVar20;
          iVar12 = iVar12 + -1;
          bVar6 = *pbVar16;
          uVar10 = (uint)*pbVar13;
          bVar7 = *pbVar23;
          *puVar17 = *(undefined1 *)(iVar22 + (0xff - (*(int *)(iVar8 + (uint)bVar7 * 4) + uVar10)))
          ;
          puVar17 = puVar17 + 4;
          *puVar18 = *(undefined1 *)
                      (iVar22 + (0xff - (uVar10 + (*(int *)(iVar9 + (uint)bVar7 * 4) +
                                                   *(int *)(iVar11 + (uint)bVar6 * 4) >> 0x10))));
          *puVar19 = *(undefined1 *)
                      (iVar22 + (0xff - (uVar10 + *(int *)(iVar15 + (uint)bVar6 * 4))));
          *puVar21 = uVar5;
          pbVar13 = pbVar13 + 1;
          pbVar16 = pbVar16 + 1;
          puVar18 = puVar18 + 4;
          puVar19 = puVar19 + 4;
          puVar20 = puVar20 + 1;
          puVar21 = puVar21 + 4;
          pbVar23 = pbVar23 + 1;
        } while (iVar12 != 0);
      }
      local_54 = local_54 + 1;
      puStack_28 = puStack_28 + 1;
    } while (local_54 < param_5 + 1);
    return;
  }
  return;
}



// Address: 4a1652a8

void FUN_4a1652a8(undefined4 param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int in_lr;
  
  if (param_2 * param_3 == 0x10) {
    iVar4 = in_lr - (int)PTR_FUN_4a1490b0_1_4a15e0a4;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (iVar4 < 100) {
      uVar3 = *(int *)(PTR_DAT_4a05be94 + 4) + 0x10;
      puVar1 = &DAT_00000010;
      if (uVar3 < 0x200) {
        puVar1 = PTR_DAT_4a05be90 + *(int *)(PTR_DAT_4a05be94 + 4);
      }
      *(uint *)(PTR_DAT_4a05be94 + 4) = uVar3;
      if (uVar3 >= 0x200) {
        puVar2 = (undefined4 *)FUN_4a057044();
        FUN_4a1652c6(puVar1,*puVar2);
        return;
      }
      return;
    }
  }
  FUN_4a161570();
  return;
}



// Address: 4a1652c4

void FUN_4a1652c4(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x4a1652c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a1652c6

void FUN_4a1652c6(undefined4 param_1,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x4a1652c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a1652c8

void FUN_4a1652c8(undefined4 param_1,undefined4 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x4a1652c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a1652ca

void FUN_4a1652ca(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x4a1652ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a1652cc

void FUN_4a1652cc(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x4a1652cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a1652ce

void FUN_4a1652ce(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x4a1652ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a1652d0

void FUN_4a1652d0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x4a1652d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a1652d2

void FUN_4a1652d2(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x4a1652d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a1652e0

undefined8 FUN_4a1652e0(uint param_1,int param_2,uint param_3)

{
  return CONCAT44(param_3 * param_2 + (int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20),
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}



// Address: 4a1652e8

longlong FUN_4a1652e8(int param_1,int param_2)

{
  return (longlong)param_2 * (longlong)param_1;
}



// Address: 4a1652fc

void FUN_4a1652fc(void)

{
  byte bVar1;
  uint in_r3;
  int in_lr;
  
  if (in_r3 < *(byte *)(in_lr + -1)) {
    bVar1 = *(byte *)(in_lr + in_r3);
  }
  else {
    bVar1 = *(byte *)(in_lr + (uint)*(byte *)(in_lr + -1));
  }
                    /* WARNING: Could not recover jumptable at 0x4a165318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(in_lr + (uint)bVar1 * 2))();
  return;
}



// Address: 4a16531c

int FUN_4a16531c(int *param_1)

{
  int iVar1;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    FUN_4a00192c();
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*param_1 + -4);
    if (iVar1 == 0) {
      FUN_4a00192c();
    }
  }
  return iVar1;
}



// Address: 4a165364

/* WARNING: Removing unreachable block (ram,0x4a165370) */
/* WARNING: Removing unreachable block (ram,0x4a1653b8) */

void s3e_game_entry(void)

{
  (*(code *)PTR_FUN_4a15404c_1_4a1653e4)();
  FUN_4a1653d0();
  FUN_4a001808();
  (*(code *)PTR_FUN_4a154074_1_4a1653e8)();
  (*(code *)PTR_FUN_4a00b7e8_1_4a1653ec)();
  FUN_4a000e38();
  (*(code *)PTR_FUN_4a154010_1_4a1653f0)();
  return;
}



// Address: 4a1653d0

void FUN_4a1653d0(void)

{
  return;
}



// Address: 4a1653dc

void FUN_4a1653dc(void)

{
  return;
}



// Address: 4a1653f4

int FUN_4a1653f4(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    piVar2 = (int *)(*param_1 + param_2 * 8 + 4);
    if (*piVar2 == 0) {
      piStack_18 = param_1;
      iStack_14 = param_2;
      uStack_10 = param_3;
      uStack_c = param_4;
      FUN_4a0978b4(&piStack_18);
      thunk_FUN_4a161570(0x34);
      iVar1 = FUN_4a0693e0();
      *piVar2 = iVar1;
      FUN_4a0978e0(&piStack_18);
    }
    iVar1 = *piVar2;
  }
  return iVar1;
}



// Address: 4a16542e

undefined4 FUN_4a16542e(int *param_1,uint param_2)

{
  if ((param_2 != 0) && (((uint)param_1[1] <= param_2 || (*(int *)(*param_1 + param_2 * 8) == 0))))
  {
    return 0;
  }
  return 1;
}



// Address: 4a16544c

int FUN_4a16544c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    piVar2 = (int *)(*param_1 + param_2 * 8 + 4);
    if (*piVar2 == 0) {
      piStack_18 = param_1;
      iStack_14 = param_2;
      uStack_10 = param_3;
      uStack_c = param_4;
      FUN_4a0978b4(&piStack_18);
      thunk_FUN_4a161570(0xc);
      iVar1 = FUN_4a069520();
      *piVar2 = iVar1;
      FUN_4a0978e0(&piStack_18);
    }
    iVar1 = *piVar2;
  }
  return iVar1;
}



// Address: 4a165486

int FUN_4a165486(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    piVar3 = (int *)(*param_1 + param_2 * 8 + 4);
    if (*piVar3 == 0) {
      piStack_20 = param_1;
      iStack_1c = param_2;
      uStack_18 = param_3;
      uStack_14 = param_4;
      FUN_4a0978b4(&piStack_20);
      puVar2 = (undefined4 *)thunk_FUN_4a161570(0x20);
      thunk_FUN_4a00121c(puVar2,0x20);
      *puVar2 = 1;
      *piVar3 = (int)puVar2;
      FUN_4a0978e0(&piStack_20);
    }
    iVar1 = *piVar3;
  }
  return iVar1;
}



// Address: 4a1654c8

int FUN_4a1654c8(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    piVar2 = (int *)(*param_1 + param_2 * 8 + 4);
    if (*piVar2 == 0) {
      piStack_20 = param_1;
      iStack_1c = param_2;
      uStack_18 = param_3;
      uStack_14 = param_4;
      FUN_4a0978b4(&piStack_20);
      iVar1 = thunk_FUN_4a161570(0x54);
      thunk_FUN_4a00121c(iVar1,0x54);
      *piVar2 = iVar1;
      FUN_4a0978e0(&piStack_20);
    }
    iVar1 = *piVar2;
  }
  return iVar1;
}



// Address: 4a165506

int FUN_4a165506(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    piVar2 = (int *)(*param_1 + param_2 * 8 + 4);
    if (*piVar2 == 0) {
      piStack_20 = param_1;
      iStack_1c = param_2;
      uStack_18 = param_3;
      uStack_14 = param_4;
      FUN_4a0978b4(&piStack_20);
      iVar1 = thunk_FUN_4a161570(0x18);
      thunk_FUN_4a00121c(iVar1,0x18);
      *piVar2 = iVar1;
      FUN_4a0978e0(&piStack_20);
    }
    iVar1 = *piVar2;
  }
  return iVar1;
}



// Address: 4a165544

int FUN_4a165544(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    piVar3 = (int *)(*param_1 + param_2 * 8 + 4);
    if (*piVar3 == 0) {
      piStack_18 = param_1;
      iStack_14 = param_2;
      uStack_10 = param_3;
      uStack_c = param_4;
      FUN_4a0978b4(&piStack_18);
      puVar2 = (undefined4 *)thunk_FUN_4a161570(0xc);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *piVar3 = (int)puVar2;
      FUN_4a0978e0(&piStack_18);
    }
    iVar1 = *piVar3;
  }
  return iVar1;
}



// Address: 4a165584

int * FUN_4a165584(int *param_1,int param_2)

{
  if (*param_1 != 0) {
    FUN_4a161530();
  }
  *param_1 = param_2;
  return param_1;
}



// Address: 4a16559e

void FUN_4a16559e(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  return;
}



// Address: 4a1655b0

undefined4 FUN_4a1655b0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*param_1 == 2) && (iVar1 = FUN_4a000e60(param_1 + 1,param_2,0xc), iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Address: 4a1655d0

undefined4 FUN_4a1655d0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*param_1 == 1) && (iVar1 = FUN_4a000e60(param_1 + 1,param_2,0xc), iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Address: 4a1655f0

undefined4 *
FUN_4a1655f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  *param_1 = 2;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  return param_1 + 5;
}



// Address: 4a1655fe

undefined4 FUN_4a1655fe(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  
  if (*param_1 == 2) {
    cVar1 = param_2 == 0;
    thunk_FUN_4a171da0(param_2,param_1[1],param_3,param_4,param_4);
    if (cVar1 != '\0') {
      cVar1 = param_3 == 0;
      thunk_FUN_4a171da0(param_3,param_1[2]);
      if (cVar1 != '\0') {
        cVar1 = param_4 == 0;
        thunk_FUN_4a171da0(param_4,param_1[3]);
        if ((cVar1 != '\0') && (thunk_FUN_4a171da0(param_5,param_1[4]), cVar1 != '\0')) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// Address: 4a165642

undefined4 FUN_4a165642(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((((*param_1 == 1) && (param_1[1] == param_2)) && (param_1[2] == param_3)) &&
     ((param_1[3] == param_4 && (param_1[4] == param_5)))) {
    uVar1 = 1;
  }
  return uVar1;
}



// Address: 4a165670

void FUN_4a165670(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = 0;
  return;
}



// Address: 4a165684

undefined4 * FUN_4a165684(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = 2;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  param_1[1] = *param_2;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  return param_1 + 5;
}



// Address: 4a165694

undefined4 * FUN_4a165694(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = 1;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  param_1[1] = *param_2;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  return param_1 + 5;
}



// Address: 4a1656a4

undefined4 FUN_4a1656a4(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*param_1 == 2) && (iVar1 = FUN_4a000e60(param_1 + 1,param_2,0x10), iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Address: 4a1656c4

undefined4 FUN_4a1656c4(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*param_1 == 1) && (iVar1 = FUN_4a000e60(param_1 + 1,param_2,0x10), iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Address: 4a1656e4

/* WARNING: Removing unreachable block (ram,0x4a1729d8) */
/* WARNING: Removing unreachable block (ram,0x4a1729ec) */
/* WARNING: Removing unreachable block (ram,0x4a1728bc) */
/* WARNING: Removing unreachable block (ram,0x4a1728ac) */
/* WARNING: Removing unreachable block (ram,0x4a1729e0) */
/* WARNING: Removing unreachable block (ram,0x4a17289c) */

ulonglong FUN_4a1656e4(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  
  uVar1 = FUN_4a17211c(param_1[2],param_2[8]);
  uVar2 = FUN_4a17211c(param_1[1],param_2[4]);
  uVar3 = FUN_4a17211c(*param_1,*param_2);
  uVar4 = FUN_4a171a94(uVar3,uVar2);
  if ((int)(uVar4 ^ uVar1) < 0) {
    uVar1 = uVar1 ^ 0x80000000;
    if (uVar4 < uVar1) {
      uVar6 = uVar4 - uVar1 ^ 0x80000000;
      uVar4 = uVar4 - uVar6;
      uVar1 = uVar1 + uVar6;
    }
    uVar6 = uVar4 >> 0x17;
    uVar8 = uVar6 - (uVar1 >> 0x17);
    if ((uVar1 & 0x7f800000) != 0 && (uVar6 & 0xff) != 0xff) {
      uVar5 = uVar4 << 8 | 0x80000000;
      uVar1 = uVar1 << 8;
      uVar9 = uVar5 - ((uVar1 | 0x80000000) >> (uVar8 & 0xff));
      if ((int)uVar9 < 0) {
        bVar11 = (bool)((byte)(uVar9 >> 7) & 1);
        uVar4 = (uVar9 >> 8) + (uVar6 - 1) * 0x800000 + (uint)bVar11;
        if (!bVar11) {
          return CONCAT44(uVar1,uVar4) | 0x8000000000000000;
        }
        if ((uVar9 & 0x7f) != 0) {
          return CONCAT44(uVar1,uVar4) | 0x8000000000000000;
        }
      }
      else {
        bVar10 = (uVar6 & 0xfe) == 0;
        bVar11 = false;
        if (!bVar10) {
          uVar5 = uVar9 * 2;
          bVar11 = (int)uVar5 < 0;
          bVar10 = uVar5 == 0;
        }
        if (!bVar11) {
          if (bVar10) {
            if (uVar9 >> 7 == 0) {
              return (ulonglong)uVar1 << 0x20 | 0x8000000000000000;
            }
            return CONCAT44(uVar1,(uVar4 >> 0x1f) << 0x1f) | 0x8000000000000000;
          }
          if (uVar5 == 0) {
            return (ulonglong)uVar1 << 0x20 | 0x8000000000000000;
          }
          uVar8 = uVar5;
          uVar9 = uVar6;
          if (uVar5 >> 0x17 == 0) {
            uVar8 = uVar5 << 8;
            uVar9 = uVar6 - 8;
            if ((uVar5 & 0xffffff) >> 0xf == 0) {
              uVar8 = uVar5 << 0x10;
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
            return CONCAT44(uVar1,uVar8 + uVar9 * 0x800000) | 0x8000000000000000;
          }
          return CONCAT44(uVar1,(uVar4 >> 0x1f) << 0x1f) | 0x8000000000000000;
        }
        bVar11 = (bool)((byte)(uVar5 >> 7) & 1);
        uVar4 = ((int)uVar5 >> 8) + uVar6 * 0x800000 + (uint)bVar11;
        if (!bVar11) {
          return CONCAT44(uVar1,uVar4) | 0x8000000000000000;
        }
        if ((uVar9 & 0x3f) != 0) {
          return CONCAT44(uVar1,uVar4) | 0x8000000000000000;
        }
      }
      iVar7 = (uVar1 | 0x80000000) << (0x20 - uVar8 & 0xff);
      if (iVar7 == 0) {
        uVar4 = uVar4 & 0xfffffffe;
      }
      else {
        uVar4 = uVar4 - 1;
      }
      return CONCAT44(iVar7,uVar4);
    }
    if ((uVar6 & 0xff) != 0xff) {
      if ((uVar4 & 0x7f800000) == 0) {
        uVar4 = 0;
      }
      return CONCAT44(uVar1,uVar4);
    }
    uVar6 = uVar4 * 2;
    uVar8 = 0x4000002;
    if (uVar1 << 1 < 0xff000001 && uVar6 < 0xff000001) {
      if (uVar6 == uVar1 * 2) {
        if ((int)(uVar4 ^ uVar1) < 0) {
          return CONCAT44(uVar1,uVar4);
        }
        return CONCAT44(uVar1,DAT_4a172724);
      }
      if (uVar6 == 0xff000000) {
        return CONCAT44(uVar1,uVar4);
      }
      return CONCAT44(uVar1,uVar1) ^ 0x80000000;
    }
LAB_4a171b9c:
    uVar8 = uVar8 & 0xf;
    if (uVar8 == 9) {
      return (ulonglong)uVar1 << 0x20;
    }
    if (uVar8 != 10) {
      if (uVar8 == 8) {
        return CONCAT44(uVar1,uVar1 & 0xff000000 | DAT_4a171ba4 >> 0x1d | (uVar1 & 0xffffff) << 3);
      }
      return CONCAT44(uVar1,DAT_4a171ba4);
    }
    return CONCAT44(uVar1,DAT_4a171ba4);
  }
  iVar7 = uVar4 - uVar1;
  if (uVar4 < uVar1) {
    uVar4 = uVar4 - iVar7;
    uVar1 = uVar1 + iVar7;
  }
  uVar6 = uVar4 >> 0x17;
  uVar8 = uVar6 - (uVar1 >> 0x17);
  if ((uVar1 & 0x7f800000) == 0 || (uVar6 & 0xff) == 0xff) {
    if ((uVar6 & 0xff) != 0xff) {
      if ((uVar4 & 0x7f800000) == 0) {
        uVar4 = uVar4 & 0x80000000;
      }
      return CONCAT44(uVar1,uVar4);
    }
    uVar6 = uVar4 * 2;
    uVar8 = 0x4000001;
    if (uVar1 << 1 < 0xff000001 && uVar6 < 0xff000001) {
      if (uVar6 == uVar1 * 2) {
        if (-1 < (int)(uVar4 ^ uVar1)) {
          return CONCAT44(uVar1,uVar4);
        }
        return CONCAT44(uVar1,DAT_4a171b98);
      }
      if (uVar6 == 0xff000000) {
        return CONCAT44(uVar1,uVar4);
      }
      return CONCAT44(uVar1,uVar1);
    }
    goto LAB_4a171b9c;
  }
  uVar5 = uVar4 << 8 | 0x80000000;
  uVar1 = uVar1 << 8;
  uVar4 = (uVar1 | 0x80000000) >> (uVar8 & 0xff);
  uVar9 = uVar5 + uVar4;
  if (CARRY4(uVar5,uVar4)) {
    uVar4 = uVar9 >> 1 | 0x80000000;
    bVar11 = (bool)((byte)(uVar4 >> 7) & 1);
    uVar4 = uVar4 >> 8;
    uVar6 = uVar4 + uVar6 * 0x800000 + (uint)bVar11;
    if (bVar11) {
      uVar4 = uVar9 & 0xff;
    }
    uVar5 = uVar6 * 2;
    if (uVar4 != 0) {
      if (uVar5 < 0xff000000) {
        return CONCAT44(uVar1,uVar6) | 0x8000000000000000;
      }
      goto LAB_4a171b0c;
    }
  }
  else {
    bVar11 = (bool)((byte)(uVar9 >> 7) & 1);
    uVar6 = (uVar9 >> 8) + (uVar6 - 1) * 0x800000 + (uint)bVar11;
    if (!bVar11) {
      return CONCAT44(uVar1,uVar6) | 0x8000000000000000;
    }
    uVar5 = uVar6 * 2;
    if ((uVar9 & 0x7f) != 0) {
      bVar11 = 0xfeffffff < uVar5;
    }
    if (!bVar11) {
      return CONCAT44(uVar1,uVar6) | 0x8000000000000000;
    }
  }
  iVar7 = (uVar1 | 0x80000000) << (0x20 - uVar8 & 0xff);
  if (iVar7 == 0) {
    uVar6 = uVar6 & 0xfffffffe;
  }
  if (uVar5 < 0xff000000) {
    return CONCAT44(iVar7,uVar6);
  }
LAB_4a171b0c:
  uVar1 = uVar6 + 0xa0000000 >> 0x17;
  return CONCAT44(uVar1,(uVar1 | 0xff) << 0x17) | 0xff00000000;
}



// Address: 4a165730

/* WARNING: Removing unreachable block (ram,0x4a1729d8) */
/* WARNING: Removing unreachable block (ram,0x4a1729ec) */
/* WARNING: Removing unreachable block (ram,0x4a1728bc) */
/* WARNING: Removing unreachable block (ram,0x4a1728ac) */
/* WARNING: Removing unreachable block (ram,0x4a1729e0) */
/* WARNING: Removing unreachable block (ram,0x4a17289c) */

ulonglong FUN_4a165730(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  
  uVar1 = FUN_4a17211c(param_1[3],param_2[0xc]);
  uVar2 = FUN_4a17211c(param_1[2],param_2[8]);
  uVar3 = FUN_4a17211c(param_1[1],param_2[4]);
  uVar4 = FUN_4a17211c(*param_1,*param_2);
  uVar3 = FUN_4a171a94(uVar4,uVar3);
  uVar5 = FUN_4a171a94(uVar3,uVar2);
  if ((int)(uVar5 ^ uVar1) < 0) {
    uVar1 = uVar1 ^ 0x80000000;
    if (uVar5 < uVar1) {
      uVar7 = uVar5 - uVar1 ^ 0x80000000;
      uVar5 = uVar5 - uVar7;
      uVar1 = uVar1 + uVar7;
    }
    uVar7 = uVar5 >> 0x17;
    uVar9 = uVar7 - (uVar1 >> 0x17);
    if ((uVar1 & 0x7f800000) != 0 && (uVar7 & 0xff) != 0xff) {
      uVar6 = uVar5 << 8 | 0x80000000;
      uVar1 = uVar1 << 8;
      uVar10 = uVar6 - ((uVar1 | 0x80000000) >> (uVar9 & 0xff));
      if ((int)uVar10 < 0) {
        bVar12 = (bool)((byte)(uVar10 >> 7) & 1);
        uVar5 = (uVar10 >> 8) + (uVar7 - 1) * 0x800000 + (uint)bVar12;
        if (!bVar12) {
          return CONCAT44(uVar1,uVar5) | 0x8000000000000000;
        }
        if ((uVar10 & 0x7f) != 0) {
          return CONCAT44(uVar1,uVar5) | 0x8000000000000000;
        }
      }
      else {
        bVar11 = (uVar7 & 0xfe) == 0;
        bVar12 = false;
        if (!bVar11) {
          uVar6 = uVar10 * 2;
          bVar12 = (int)uVar6 < 0;
          bVar11 = uVar6 == 0;
        }
        if (!bVar12) {
          if (bVar11) {
            if (uVar10 >> 7 == 0) {
              return (ulonglong)uVar1 << 0x20 | 0x8000000000000000;
            }
            return CONCAT44(uVar1,(uVar5 >> 0x1f) << 0x1f) | 0x8000000000000000;
          }
          if (uVar6 == 0) {
            return (ulonglong)uVar1 << 0x20 | 0x8000000000000000;
          }
          uVar9 = uVar6;
          uVar10 = uVar7;
          if (uVar6 >> 0x17 == 0) {
            uVar9 = uVar6 << 8;
            uVar10 = uVar7 - 8;
            if ((uVar6 & 0xffffff) >> 0xf == 0) {
              uVar9 = uVar6 << 0x10;
              uVar10 = uVar7 - 0x10;
            }
          }
          if ((uVar9 & 0x78000000) != 0) {
            uVar9 = uVar9 >> 4;
            uVar10 = uVar10 + 4;
          }
          if ((uVar9 & 0x6000000) != 0) {
            uVar9 = uVar9 >> 2;
            uVar10 = uVar10 + 2;
          }
          uVar10 = uVar10 - ((uVar9 < 0x1000000) + 9);
          if (uVar9 >= 0x1000000) {
            uVar9 = uVar9 >> 1;
          }
          if ((uVar7 ^ uVar10) >> 8 == 0) {
            return CONCAT44(uVar1,uVar9 + uVar10 * 0x800000) | 0x8000000000000000;
          }
          return CONCAT44(uVar1,(uVar5 >> 0x1f) << 0x1f) | 0x8000000000000000;
        }
        bVar12 = (bool)((byte)(uVar6 >> 7) & 1);
        uVar5 = ((int)uVar6 >> 8) + uVar7 * 0x800000 + (uint)bVar12;
        if (!bVar12) {
          return CONCAT44(uVar1,uVar5) | 0x8000000000000000;
        }
        if ((uVar10 & 0x3f) != 0) {
          return CONCAT44(uVar1,uVar5) | 0x8000000000000000;
        }
      }
      iVar8 = (uVar1 | 0x80000000) << (0x20 - uVar9 & 0xff);
      if (iVar8 == 0) {
        uVar5 = uVar5 & 0xfffffffe;
      }
      else {
        uVar5 = uVar5 - 1;
      }
      return CONCAT44(iVar8,uVar5);
    }
    if ((uVar7 & 0xff) != 0xff) {
      if ((uVar5 & 0x7f800000) == 0) {
        uVar5 = 0;
      }
      return CONCAT44(uVar1,uVar5);
    }
    uVar7 = uVar5 * 2;
    uVar9 = 0x4000002;
    if (uVar1 << 1 < 0xff000001 && uVar7 < 0xff000001) {
      if (uVar7 == uVar1 * 2) {
        if ((int)(uVar5 ^ uVar1) < 0) {
          return CONCAT44(uVar1,uVar5);
        }
        return CONCAT44(uVar1,DAT_4a172724);
      }
      if (uVar7 == 0xff000000) {
        return CONCAT44(uVar1,uVar5);
      }
      return CONCAT44(uVar1,uVar1) ^ 0x80000000;
    }
LAB_4a171b9c:
    uVar9 = uVar9 & 0xf;
    if (uVar9 == 9) {
      return (ulonglong)uVar1 << 0x20;
    }
    if (uVar9 != 10) {
      if (uVar9 == 8) {
        return CONCAT44(uVar1,uVar1 & 0xff000000 | DAT_4a171ba4 >> 0x1d | (uVar1 & 0xffffff) << 3);
      }
      return CONCAT44(uVar1,DAT_4a171ba4);
    }
    return CONCAT44(uVar1,DAT_4a171ba4);
  }
  iVar8 = uVar5 - uVar1;
  if (uVar5 < uVar1) {
    uVar5 = uVar5 - iVar8;
    uVar1 = uVar1 + iVar8;
  }
  uVar7 = uVar5 >> 0x17;
  uVar9 = uVar7 - (uVar1 >> 0x17);
  if ((uVar1 & 0x7f800000) == 0 || (uVar7 & 0xff) == 0xff) {
    if ((uVar7 & 0xff) != 0xff) {
      if ((uVar5 & 0x7f800000) == 0) {
        uVar5 = uVar5 & 0x80000000;
      }
      return CONCAT44(uVar1,uVar5);
    }
    uVar7 = uVar5 * 2;
    uVar9 = 0x4000001;
    if (uVar1 << 1 < 0xff000001 && uVar7 < 0xff000001) {
      if (uVar7 == uVar1 * 2) {
        if (-1 < (int)(uVar5 ^ uVar1)) {
          return CONCAT44(uVar1,uVar5);
        }
        return CONCAT44(uVar1,DAT_4a171b98);
      }
      if (uVar7 == 0xff000000) {
        return CONCAT44(uVar1,uVar5);
      }
      return CONCAT44(uVar1,uVar1);
    }
    goto LAB_4a171b9c;
  }
  uVar6 = uVar5 << 8 | 0x80000000;
  uVar1 = uVar1 << 8;
  uVar5 = (uVar1 | 0x80000000) >> (uVar9 & 0xff);
  uVar10 = uVar6 + uVar5;
  if (CARRY4(uVar6,uVar5)) {
    uVar5 = uVar10 >> 1 | 0x80000000;
    bVar12 = (bool)((byte)(uVar5 >> 7) & 1);
    uVar5 = uVar5 >> 8;
    uVar7 = uVar5 + uVar7 * 0x800000 + (uint)bVar12;
    if (bVar12) {
      uVar5 = uVar10 & 0xff;
    }
    uVar6 = uVar7 * 2;
    if (uVar5 != 0) {
      if (uVar6 < 0xff000000) {
        return CONCAT44(uVar1,uVar7) | 0x8000000000000000;
      }
      goto LAB_4a171b0c;
    }
  }
  else {
    bVar12 = (bool)((byte)(uVar10 >> 7) & 1);
    uVar7 = (uVar10 >> 8) + (uVar7 - 1) * 0x800000 + (uint)bVar12;
    if (!bVar12) {
      return CONCAT44(uVar1,uVar7) | 0x8000000000000000;
    }
    uVar6 = uVar7 * 2;
    if ((uVar10 & 0x7f) != 0) {
      bVar12 = 0xfeffffff < uVar6;
    }
    if (!bVar12) {
      return CONCAT44(uVar1,uVar7) | 0x8000000000000000;
    }
  }
  iVar8 = (uVar1 | 0x80000000) << (0x20 - uVar9 & 0xff);
  if (iVar8 == 0) {
    uVar7 = uVar7 & 0xfffffffe;
  }
  if (uVar6 < 0xff000000) {
    return CONCAT44(iVar8,uVar7);
  }
LAB_4a171b0c:
  uVar1 = uVar7 + 0xa0000000 >> 0x17;
  return CONCAT44(uVar1,(uVar1 | 0xff) << 0x17) | 0xff00000000;
}



// Address: 4a165794

int * FUN_4a165794(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x34))(param_1);
  if (iVar1 != 3) {
    param_1 = (int *)0x0;
  }
  return param_1;
}



// Address: 4a1657c4

int * FUN_4a1657c4(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x34))(param_1);
  if (iVar1 != 0x10) {
    param_1 = (int *)0x0;
  }
  return param_1;
}



// Address: 4a1657f4

int * FUN_4a1657f4(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x34))(param_1);
  if (iVar1 != 0x10) {
    param_1 = (int *)0x0;
  }
  return param_1;
}



// Address: 4a165824

int * FUN_4a165824(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x34))(param_1);
  if (iVar1 != 0xe && iVar1 != 0x10) {
    param_1 = (int *)0x0;
  }
  return param_1;
}



// Address: 4a165858

int * FUN_4a165858(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x34))(param_1);
  if (iVar1 != 0xe && iVar1 != 0x10) {
    param_1 = (int *)0x0;
  }
  return param_1;
}



// Address: 4a16588c

int * FUN_4a16588c(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x34))(param_1);
  if ((((((iVar1 == 5 || iVar1 == 9) || iVar1 == 0x16) || iVar1 == 0xc) || iVar1 == 0xe) ||
      iVar1 == 0x10) || iVar1 == 0x12) {
    return param_1;
  }
  return (int *)0x0;
}



// Address: 4a1658dc

int * FUN_4a1658dc(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x34))(param_1);
  if (iVar1 != 9 && iVar1 != 0x16) {
    param_1 = (int *)0x0;
  }
  return param_1;
}



// Address: 4a165910

int * FUN_4a165910(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x34))(param_1);
  if (iVar1 != 9 && iVar1 != 0x16) {
    param_1 = (int *)0x0;
  }
  return param_1;
}



// Address: 4a165944

int * FUN_4a165944(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x34))(param_1);
  if (iVar1 != 10) {
    param_1 = (int *)0x0;
  }
  return param_1;
}



// Address: 4a165974

void FUN_4a165974(char *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  *param_1 = '\0';
  do {
    while( true ) {
      if (((char *)*param_2 == param_1) || (pcVar2 = *(char **)(param_1 + 4), *pcVar2 != '\0')) {
        *(undefined1 *)*param_2 = 1;
        return;
      }
      pcVar3 = *(char **)(*(int *)(pcVar2 + 4) + 8);
      if (pcVar2 != pcVar3) break;
      pcVar3 = *(char **)(*(int *)(pcVar2 + 4) + 0xc);
      if ((pcVar3 != (char *)0x0) && (*pcVar3 == '\0')) goto LAB_4a165a88;
      if (*(char **)(pcVar2 + 0xc) == param_1) {
        iVar4 = *(int *)(pcVar2 + 0xc);
        *(undefined4 *)(pcVar2 + 0xc) = *(undefined4 *)(iVar4 + 8);
        if (*(int *)(iVar4 + 8) != 0) {
          *(char **)(*(int *)(iVar4 + 8) + 4) = pcVar2;
        }
        *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(pcVar2 + 4);
        if ((char *)*param_2 == pcVar2) {
          *param_2 = iVar4;
        }
        else {
          iVar1 = *(int *)(pcVar2 + 4);
          if (*(char **)(iVar1 + 8) == pcVar2) {
            *(int *)(iVar1 + 8) = iVar4;
          }
          else {
            *(int *)(iVar1 + 0xc) = iVar4;
          }
        }
        *(char **)(iVar4 + 8) = pcVar2;
        *(int *)(pcVar2 + 4) = iVar4;
        param_1 = pcVar2;
      }
      **(undefined1 **)(param_1 + 4) = 1;
      **(undefined1 **)(*(int *)(param_1 + 4) + 4) = 0;
      iVar4 = *(int *)(*(int *)(param_1 + 4) + 4);
      iVar1 = *(int *)(iVar4 + 8);
      *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar1 + 0xc);
      if (*(int *)(iVar1 + 0xc) != 0) {
        *(int *)(*(int *)(iVar1 + 0xc) + 4) = iVar4;
      }
      *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar4 + 4);
      if (*param_2 == iVar4) {
        *param_2 = iVar1;
      }
      else {
        iVar5 = *(int *)(iVar4 + 4);
        if (*(int *)(iVar5 + 0xc) == iVar4) {
          *(int *)(iVar5 + 0xc) = iVar1;
        }
        else {
          *(int *)(iVar5 + 8) = iVar1;
        }
      }
      *(int *)(iVar1 + 0xc) = iVar4;
LAB_4a165b68:
      *(int *)(iVar4 + 4) = iVar1;
    }
    if ((pcVar3 == (char *)0x0) || (*pcVar3 != '\0')) {
      if (*(char **)(pcVar2 + 8) == param_1) {
        iVar4 = *(int *)(pcVar2 + 8);
        *(undefined4 *)(pcVar2 + 8) = *(undefined4 *)(iVar4 + 0xc);
        if (*(int *)(iVar4 + 0xc) != 0) {
          *(char **)(*(int *)(iVar4 + 0xc) + 4) = pcVar2;
        }
        *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(pcVar2 + 4);
        if ((char *)*param_2 == pcVar2) {
          *param_2 = iVar4;
        }
        else {
          iVar1 = *(int *)(pcVar2 + 4);
          if (*(char **)(iVar1 + 0xc) == pcVar2) {
            *(int *)(iVar1 + 0xc) = iVar4;
          }
          else {
            *(int *)(iVar1 + 8) = iVar4;
          }
        }
        *(char **)(iVar4 + 0xc) = pcVar2;
        *(int *)(pcVar2 + 4) = iVar4;
        param_1 = pcVar2;
      }
      **(undefined1 **)(param_1 + 4) = 1;
      **(undefined1 **)(*(int *)(param_1 + 4) + 4) = 0;
      iVar4 = *(int *)(*(int *)(param_1 + 4) + 4);
      iVar1 = *(int *)(iVar4 + 0xc);
      *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar1 + 8);
      if (*(int *)(iVar1 + 8) != 0) {
        *(int *)(*(int *)(iVar1 + 8) + 4) = iVar4;
      }
      *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar4 + 4);
      if (*param_2 == iVar4) {
        *param_2 = iVar1;
      }
      else {
        iVar5 = *(int *)(iVar4 + 4);
        if (*(int *)(iVar5 + 8) == iVar4) {
          *(int *)(iVar5 + 8) = iVar1;
        }
        else {
          *(int *)(iVar5 + 0xc) = iVar1;
        }
      }
      *(int *)(iVar1 + 8) = iVar4;
      goto LAB_4a165b68;
    }
LAB_4a165a88:
    *pcVar2 = '\x01';
    *pcVar3 = '\x01';
    **(undefined1 **)(*(int *)(param_1 + 4) + 4) = 0;
    param_1 = *(char **)(*(int *)(param_1 + 4) + 4);
  } while( true );
}



// Address: 4a165b98

int FUN_4a165b98(byte *param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  pbVar1 = (byte *)(uint)*param_1;
  bVar4 = pbVar1 == (byte *)0x0;
  if (bVar4) {
    pbVar1 = *(byte **)(*(int *)(param_1 + 4) + 4);
  }
  if (bVar4 && pbVar1 == param_1) {
    return *(int *)(param_1 + 0xc);
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 4);
    if (*(byte **)(iVar2 + 8) == param_1) {
      do {
        iVar3 = *(int *)(iVar2 + 4);
        bVar4 = *(int *)(iVar3 + 8) == iVar2;
        iVar2 = iVar3;
      } while (bVar4);
      return iVar3;
    }
    return iVar2;
  }
  if (*(int *)(iVar2 + 0xc) != 0) {
    do {
      iVar2 = *(int *)(iVar2 + 0xc);
    } while (*(int *)(iVar2 + 0xc) != 0);
    return iVar2;
  }
  return iVar2;
}



// Address: 4a165c0c

int FUN_4a165c0c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 4);
    if (*(int *)(iVar1 + 0xc) == param_1) {
      do {
        param_1 = iVar1;
        iVar1 = *(int *)(param_1 + 4);
      } while (*(int *)(iVar1 + 0xc) == param_1);
    }
    if (*(int *)(param_1 + 0xc) != iVar1) {
      param_1 = iVar1;
    }
    return param_1;
  }
  if (*(int *)(iVar1 + 8) == 0) {
    return iVar1;
  }
  do {
    iVar1 = *(int *)(iVar1 + 8);
  } while (*(int *)(iVar1 + 8) != 0);
  return iVar1;
}



// Address: 4a165c70

void FUN_4a165c70(byte *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *unaff_r7;
  int iVar9;
  
  pbVar8 = *(byte **)(param_1 + 8);
  pbVar6 = *(byte **)(param_1 + 0xc);
  pbVar3 = param_1;
  pbVar7 = pbVar6;
  if ((pbVar8 != (byte *)0x0) && (pbVar7 = pbVar8, pbVar6 != (byte *)0x0)) {
    iVar9 = *(int *)(pbVar6 + 8);
    while (iVar9 != 0) {
      pbVar6 = *(byte **)(pbVar6 + 8);
      iVar9 = *(int *)(pbVar6 + 8);
    }
    pbVar3 = pbVar6;
    pbVar7 = *(byte **)(pbVar6 + 0xc);
  }
  if (pbVar3 == param_1) {
    pbVar6 = *(byte **)(pbVar3 + 4);
    if (pbVar7 != (byte *)0x0) {
      *(byte **)(pbVar7 + 4) = pbVar6;
    }
    if ((byte *)*param_2 == param_1) {
      *param_2 = (int)pbVar7;
    }
    else {
      iVar9 = *(int *)(param_1 + 4);
      unaff_r7 = *(byte **)(iVar9 + 8);
      if (unaff_r7 == param_1) {
        *(byte **)(iVar9 + 8) = pbVar7;
      }
      else {
        *(byte **)(iVar9 + 0xc) = pbVar7;
      }
    }
    if ((byte *)*param_3 == param_1) {
      if (*(int *)(param_1 + 0xc) == 0) {
        *param_3 = *(undefined4 *)(param_1 + 4);
      }
      else {
        iVar9 = *(int *)(pbVar7 + 8);
        pbVar8 = pbVar7;
        while (iVar9 != 0) {
          pbVar8 = *(byte **)(pbVar8 + 8);
          iVar9 = *(int *)(pbVar8 + 8);
        }
        *param_3 = pbVar8;
        unaff_r7 = (byte *)0x0;
      }
    }
    if ((byte *)*param_4 == param_1) {
      if (*(int *)(param_1 + 8) == 0) {
        *param_4 = *(undefined4 *)(param_1 + 4);
      }
      else {
        iVar9 = *(int *)(pbVar7 + 0xc);
        pbVar8 = pbVar7;
        while (iVar9 != 0) {
          pbVar8 = *(byte **)(pbVar8 + 0xc);
          iVar9 = *(int *)(pbVar8 + 0xc);
        }
        *param_4 = pbVar8;
      }
    }
  }
  else {
    *(byte **)(pbVar8 + 4) = pbVar3;
    *(undefined4 *)(pbVar3 + 8) = *(undefined4 *)(param_1 + 8);
    pbVar6 = pbVar3;
    if (*(byte **)(param_1 + 0xc) != pbVar3) {
      pbVar6 = *(byte **)(pbVar3 + 4);
      if (pbVar7 != (byte *)0x0) {
        *(byte **)(pbVar7 + 4) = pbVar6;
      }
      *(byte **)(*(int *)(pbVar3 + 4) + 8) = pbVar7;
      *(undefined4 *)(pbVar3 + 0xc) = *(undefined4 *)(param_1 + 0xc);
      *(byte **)(*(int *)(param_1 + 0xc) + 4) = pbVar3;
    }
    if ((byte *)*param_2 == param_1) {
      *param_2 = (int)pbVar3;
    }
    else {
      iVar9 = *(int *)(param_1 + 4);
      if (*(byte **)(iVar9 + 8) == param_1) {
        *(byte **)(iVar9 + 8) = pbVar3;
      }
      else {
        *(byte **)(iVar9 + 0xc) = pbVar3;
      }
    }
    *(undefined4 *)(pbVar3 + 4) = *(undefined4 *)(param_1 + 4);
    bVar1 = *pbVar3;
    *pbVar3 = *param_1;
    *param_1 = bVar1;
    pbVar3 = param_1;
  }
  if (*pbVar3 == 0) {
    return;
  }
  do {
    pbVar3 = (byte *)*param_2;
    if (pbVar3 == pbVar7) {
LAB_4a166120:
      if (pbVar7 == (byte *)0x0) {
        return;
      }
LAB_4a16612c:
      *pbVar7 = 1;
      return;
    }
    if (pbVar7 != (byte *)0x0) {
      pbVar3 = (byte *)(uint)*pbVar7;
    }
    if (pbVar7 != (byte *)0x0 && pbVar3 != (byte *)0x1) goto LAB_4a16612c;
    pbVar3 = *(byte **)(pbVar6 + 8);
    if (pbVar3 != pbVar7) {
      if (*pbVar3 == 0) {
        *pbVar3 = 1;
        *pbVar6 = 0;
        iVar9 = *(int *)(pbVar6 + 8);
        *(undefined4 *)(pbVar6 + 8) = *(undefined4 *)(iVar9 + 0xc);
        if (*(int *)(iVar9 + 0xc) != 0) {
          *(byte **)(*(int *)(iVar9 + 0xc) + 4) = pbVar6;
        }
        *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(pbVar6 + 4);
        if ((byte *)*param_2 == pbVar6) {
          *param_2 = iVar9;
        }
        else {
          iVar4 = *(int *)(pbVar6 + 4);
          unaff_r7 = *(byte **)(iVar4 + 0xc);
          if (unaff_r7 == pbVar6) {
            *(int *)(iVar4 + 0xc) = iVar9;
          }
          else {
            *(int *)(iVar4 + 8) = iVar9;
          }
        }
        *(byte **)(iVar9 + 0xc) = pbVar6;
        *(int *)(pbVar6 + 4) = iVar9;
        pbVar3 = *(byte **)(pbVar6 + 8);
      }
      pbVar8 = *(byte **)(pbVar3 + 0xc);
      if (pbVar8 != (byte *)0x0) {
        unaff_r7 = (byte *)(uint)*pbVar8;
      }
      if (pbVar8 != (byte *)0x0 && unaff_r7 != (byte *)0x1) {
        pcVar5 = *(char **)(pbVar3 + 8);
        cVar2 = '\0';
        if (pcVar5 != (char *)0x0) {
          cVar2 = *pcVar5;
        }
        if (pcVar5 == (char *)0x0 || cVar2 == '\x01') {
          if (*(int *)(pbVar3 + 0xc) != 0) {
            *pbVar8 = 1;
          }
          *pbVar3 = 0;
          iVar9 = *(int *)(pbVar3 + 0xc);
          *(undefined4 *)(pbVar3 + 0xc) = *(undefined4 *)(iVar9 + 8);
          if (*(int *)(iVar9 + 8) != 0) {
            *(byte **)(*(int *)(iVar9 + 8) + 4) = pbVar3;
          }
          *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(pbVar3 + 4);
          if ((byte *)*param_2 == pbVar3) {
            *param_2 = iVar9;
          }
          else {
            iVar4 = *(int *)(pbVar3 + 4);
            if (*(byte **)(iVar4 + 8) == pbVar3) {
              *(int *)(iVar4 + 8) = iVar9;
            }
            else {
              *(int *)(iVar4 + 0xc) = iVar9;
            }
          }
          *(byte **)(iVar9 + 8) = pbVar3;
          *(int *)(pbVar3 + 4) = iVar9;
          pbVar3 = *(byte **)(pbVar6 + 8);
        }
      }
      else {
        pcVar5 = *(char **)(pbVar3 + 8);
        cVar2 = '\0';
        if (pcVar5 != (char *)0x0) {
          cVar2 = *pcVar5;
        }
        if (pcVar5 == (char *)0x0 || cVar2 == '\x01') goto LAB_4a16601c;
      }
      *pbVar3 = *pbVar6;
      *pbVar6 = 1;
      if (*(undefined1 **)(pbVar3 + 8) != (undefined1 *)0x0) {
        **(undefined1 **)(pbVar3 + 8) = 1;
      }
      iVar9 = *(int *)(pbVar6 + 8);
      *(undefined4 *)(pbVar6 + 8) = *(undefined4 *)(iVar9 + 0xc);
      if (*(int *)(iVar9 + 0xc) != 0) {
        *(byte **)(*(int *)(iVar9 + 0xc) + 4) = pbVar6;
      }
      *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(pbVar6 + 4);
      if ((byte *)*param_2 == pbVar6) {
        *param_2 = iVar9;
      }
      else {
        iVar4 = *(int *)(pbVar6 + 4);
        if (*(byte **)(iVar4 + 0xc) == pbVar6) {
          *(int *)(iVar4 + 0xc) = iVar9;
        }
        else {
          *(int *)(iVar4 + 8) = iVar9;
        }
      }
      *(byte **)(iVar9 + 0xc) = pbVar6;
LAB_4a16611c:
      *(int *)(pbVar6 + 4) = iVar9;
      goto LAB_4a166120;
    }
    pbVar3 = *(byte **)(pbVar6 + 0xc);
    if (*pbVar3 == 0) {
      *pbVar3 = 1;
      *pbVar6 = 0;
      iVar9 = *(int *)(pbVar6 + 0xc);
      *(undefined4 *)(pbVar6 + 0xc) = *(undefined4 *)(iVar9 + 8);
      if (*(int *)(iVar9 + 8) != 0) {
        *(byte **)(*(int *)(iVar9 + 8) + 4) = pbVar6;
      }
      *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(pbVar6 + 4);
      if ((byte *)*param_2 == pbVar6) {
        *param_2 = iVar9;
      }
      else {
        iVar4 = *(int *)(pbVar6 + 4);
        unaff_r7 = *(byte **)(iVar4 + 8);
        if (unaff_r7 == pbVar6) {
          *(int *)(iVar4 + 8) = iVar9;
        }
        else {
          *(int *)(iVar4 + 0xc) = iVar9;
        }
      }
      *(byte **)(iVar9 + 8) = pbVar6;
      *(int *)(pbVar6 + 4) = iVar9;
      pbVar3 = *(byte **)(pbVar6 + 0xc);
    }
    pbVar8 = *(byte **)(pbVar3 + 8);
    if (pbVar8 != (byte *)0x0) {
      unaff_r7 = (byte *)(uint)*pbVar8;
    }
    if (pbVar8 != (byte *)0x0 && unaff_r7 != (byte *)0x1) {
      pcVar5 = *(char **)(pbVar3 + 0xc);
      cVar2 = '\0';
      if (pcVar5 != (char *)0x0) {
        cVar2 = *pcVar5;
      }
      if (pcVar5 == (char *)0x0 || cVar2 == '\x01') {
        if (*(int *)(pbVar3 + 8) != 0) {
          *pbVar8 = 1;
        }
        *pbVar3 = 0;
        iVar9 = *(int *)(pbVar3 + 8);
        *(undefined4 *)(pbVar3 + 8) = *(undefined4 *)(iVar9 + 0xc);
        if (*(int *)(iVar9 + 0xc) != 0) {
          *(byte **)(*(int *)(iVar9 + 0xc) + 4) = pbVar3;
        }
        *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(pbVar3 + 4);
        if ((byte *)*param_2 == pbVar3) {
          *param_2 = iVar9;
        }
        else {
          iVar4 = *(int *)(pbVar3 + 4);
          if (*(byte **)(iVar4 + 0xc) == pbVar3) {
            *(int *)(iVar4 + 0xc) = iVar9;
          }
          else {
            *(int *)(iVar4 + 8) = iVar9;
          }
        }
        *(byte **)(iVar9 + 0xc) = pbVar3;
        *(int *)(pbVar3 + 4) = iVar9;
        pbVar3 = *(byte **)(pbVar6 + 0xc);
      }
LAB_4a165f2c:
      *pbVar3 = *pbVar6;
      *pbVar6 = 1;
      if (*(undefined1 **)(pbVar3 + 0xc) != (undefined1 *)0x0) {
        **(undefined1 **)(pbVar3 + 0xc) = 1;
      }
      iVar9 = *(int *)(pbVar6 + 0xc);
      *(undefined4 *)(pbVar6 + 0xc) = *(undefined4 *)(iVar9 + 8);
      if (*(int *)(iVar9 + 8) != 0) {
        *(byte **)(*(int *)(iVar9 + 8) + 4) = pbVar6;
      }
      *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(pbVar6 + 4);
      if ((byte *)*param_2 == pbVar6) {
        *param_2 = iVar9;
      }
      else {
        iVar4 = *(int *)(pbVar6 + 4);
        if (*(byte **)(iVar4 + 8) == pbVar6) {
          *(int *)(iVar4 + 8) = iVar9;
        }
        else {
          *(int *)(iVar4 + 0xc) = iVar9;
        }
      }
      *(byte **)(iVar9 + 8) = pbVar6;
      goto LAB_4a16611c;
    }
    pcVar5 = *(char **)(pbVar3 + 0xc);
    cVar2 = '\0';
    if (pcVar5 != (char *)0x0) {
      cVar2 = *pcVar5;
    }
    if (pcVar5 != (char *)0x0 && cVar2 != '\x01') goto LAB_4a165f2c;
LAB_4a16601c:
    *pbVar3 = 0;
    pbVar7 = pbVar6;
    pbVar6 = *(byte **)(pbVar6 + 4);
  } while( true );
}



// Address: 4a166138

undefined4 FUN_4a166138(void)

{
  return 0;
}



// Address: 4a166140

undefined4 FUN_4a166140(void)

{
  return 0;
}



// Address: 4a166148

int * FUN_4a166148(int *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  uint local_38;
  uint local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_2c = (undefined1 *)param_2[1];
  local_30 = (undefined1 *)*param_2;
  local_24 = 0;
  local_28 = 0;
  if (local_30 != local_2c) {
    uVar4 = (int)local_2c - (int)local_30;
    local_34 = param_1[1] - *param_1;
    local_38 = 0;
    if ((uVar4 == 0xffffffff) || (-uVar4 - 2 < (uint)(param_1[1] - *param_1))) {
      FUN_4a0bcbf4(PTR_s_basic_string_4a16633c);
    }
    puVar5 = local_2c;
    if ((param_1[2] - *param_1) - 1U < local_34 + uVar4) {
      puVar3 = &local_38;
      if (uVar4 <= local_34) {
        puVar3 = &local_34;
      }
      local_38 = uVar4;
      iVar6 = *puVar3 + local_34 + 1;
      if (iVar6 == 0) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        puVar5 = (undefined1 *)FUN_4a15e080(iVar6);
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = (undefined1 *)FUN_4a1669a8();
        }
      }
      iVar7 = *param_1;
      iVar8 = param_1[1];
      FUN_4a166140();
      puVar9 = puVar5;
      if (iVar8 != iVar7) {
        iVar8 = iVar8 - iVar7;
        iVar7 = FUN_4a000ec8(puVar5,iVar7,iVar8);
        puVar9 = (undefined1 *)(iVar7 + iVar8);
      }
      puVar2 = local_2c;
      puVar1 = local_30;
      FUN_4a166140();
      if (puVar2 != puVar1) {
        iVar8 = (int)puVar2 - (int)puVar1;
        iVar7 = FUN_4a000ec8(puVar9,puVar1,iVar8);
        puVar9 = (undefined1 *)(iVar7 + iVar8);
      }
      *puVar9 = 0;
      if (*param_1 != 0) {
        FUN_4a14f21c();
      }
      *param_1 = (int)puVar5;
      param_1[1] = (int)puVar9;
      param_1[2] = (int)(puVar5 + iVar6);
    }
    else {
      puVar9 = local_30 + 1;
      iVar6 = param_1[1];
      local_38 = 0;
      FUN_4a166140();
      if (puVar5 != puVar9) {
        FUN_4a000ec8(iVar6 + 1,puVar9,(int)puVar5 - (int)puVar9);
      }
      *(undefined1 *)(param_1[1] + uVar4) = 0;
      *(undefined1 *)param_1[1] = *local_30;
      param_1[1] = param_1[1] + uVar4;
    }
  }
  return param_1;
}



// Address: 4a166340

int * FUN_4a166340(int *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  uint local_34;
  uint local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_20 = 0;
  local_24 = 0;
  if (param_2 != param_3) {
    uVar4 = (int)param_3 - (int)param_2;
    local_30 = param_1[1] - *param_1;
    local_34 = 0;
    local_2c = param_2;
    local_28 = param_3;
    if ((uVar4 == 0xffffffff) || (-uVar4 - 2 < (uint)(param_1[1] - *param_1))) {
      FUN_4a0bcbf4(PTR_s_basic_string_4a1664ec);
    }
    if ((param_1[2] - *param_1) - 1U < local_30 + uVar4) {
      puVar3 = &local_34;
      if (uVar4 <= local_30) {
        puVar3 = &local_30;
      }
      local_34 = uVar4;
      iVar6 = *puVar3 + local_30 + 1;
      if (iVar6 == 0) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        puVar5 = (undefined1 *)FUN_4a15e080(iVar6);
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = (undefined1 *)FUN_4a1669a8();
        }
      }
      iVar7 = *param_1;
      iVar9 = param_1[1];
      FUN_4a166140();
      puVar8 = puVar5;
      if (iVar9 != iVar7) {
        iVar9 = iVar9 - iVar7;
        iVar7 = FUN_4a000ec8(puVar5,iVar7,iVar9);
        puVar8 = (undefined1 *)(iVar7 + iVar9);
      }
      puVar2 = local_28;
      puVar1 = local_2c;
      if (local_28 != local_2c) {
        iVar7 = FUN_4a000ec8(puVar8);
        puVar8 = puVar2 + (iVar7 - (int)puVar1);
      }
      *puVar8 = 0;
      if (*param_1 != 0) {
        FUN_4a14f21c();
      }
      *param_1 = (int)puVar5;
      param_1[1] = (int)puVar8;
      param_1[2] = (int)(puVar5 + iVar6);
    }
    else {
      puVar5 = local_2c + 1;
      if (local_28 != puVar5) {
        FUN_4a000ec8(param_1[1] + 1,puVar5,(int)local_28 - (int)puVar5);
      }
      *(undefined1 *)(param_1[1] + uVar4) = 0;
      *(undefined1 *)param_1[1] = *local_2c;
      param_1[1] = param_1[1] + uVar4;
    }
  }
  return param_1;
}



// Address: 4a1664f0

int * FUN_4a1664f0(int *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  uint local_38;
  uint local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_24 = 0;
  local_28 = 0;
  if (param_2 != param_3) {
    uVar4 = (int)param_3 - (int)param_2;
    local_34 = param_1[1] - *param_1;
    local_38 = 0;
    local_30 = param_2;
    local_2c = param_3;
    if ((uVar4 == 0xffffffff) || (-uVar4 - 2 < (uint)(param_1[1] - *param_1))) {
      FUN_4a0bcbf4(PTR_s_basic_string_4a1666d8);
    }
    puVar5 = local_2c;
    if ((param_1[2] - *param_1) - 1U < local_34 + uVar4) {
      puVar3 = &local_38;
      if (uVar4 <= local_34) {
        puVar3 = &local_34;
      }
      local_38 = uVar4;
      iVar6 = *puVar3 + local_34 + 1;
      if (iVar6 == 0) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        puVar5 = (undefined1 *)FUN_4a15e080(iVar6);
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = (undefined1 *)FUN_4a1669a8();
        }
      }
      iVar7 = *param_1;
      iVar9 = param_1[1];
      FUN_4a166140();
      puVar8 = puVar5;
      if (iVar9 != iVar7) {
        iVar9 = iVar9 - iVar7;
        iVar7 = FUN_4a000ec8(puVar5,iVar7,iVar9);
        puVar8 = (undefined1 *)(iVar7 + iVar9);
      }
      puVar2 = local_2c;
      puVar1 = local_30;
      FUN_4a166140();
      if (puVar2 != puVar1) {
        iVar9 = (int)puVar2 - (int)puVar1;
        iVar7 = FUN_4a000ec8(puVar8,puVar1,iVar9);
        puVar8 = (undefined1 *)(iVar7 + iVar9);
      }
      *puVar8 = 0;
      if (*param_1 != 0) {
        FUN_4a14f21c();
      }
      *param_1 = (int)puVar5;
      param_1[1] = (int)puVar8;
      param_1[2] = (int)(puVar5 + iVar6);
    }
    else {
      puVar8 = local_30 + 1;
      iVar6 = param_1[1];
      local_38 = 0;
      FUN_4a166140();
      if (puVar5 != puVar8) {
        FUN_4a000ec8(iVar6 + 1,puVar8,(int)puVar5 - (int)puVar8);
      }
      *(undefined1 *)(param_1[1] + uVar4) = 0;
      *(undefined1 *)param_1[1] = *local_30;
      param_1[1] = param_1[1] + uVar4;
    }
  }
  return param_1;
}



// Address: 4a1666dc

int * FUN_4a1666dc(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = thunk_FUN_4a0013e0(param_2);
  iVar1 = iVar1 + param_2;
  iVar3 = (iVar1 - param_2) + 1;
  if (iVar3 == 0) {
    FUN_4a0bcbf4(PTR_s_basic_string_4a166794);
  }
  else {
    iVar2 = FUN_4a15e080(iVar3);
    if (iVar2 == 0) {
      iVar2 = FUN_4a1669a8();
    }
    *param_1 = iVar2;
    param_1[1] = iVar2;
    param_1[2] = iVar2 + iVar3;
  }
  iVar3 = *param_1;
  if (iVar1 != param_2) {
    iVar3 = FUN_4a000ec8();
    iVar3 = iVar3 + (iVar1 - param_2);
  }
  param_1[1] = iVar3;
  *(undefined1 *)param_1[1] = 0;
  return param_1;
}



// Address: 4a166798

void FUN_4a166798(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *local_44 [2];
  undefined4 local_3c;
  undefined4 local_38;
  
  iVar1 = param_2 * 2 + 2;
  iVar2 = param_2;
  while (iVar4 = iVar1, iVar4 < param_3) {
    iVar1 = param_1 + iVar4 * 0x28;
    iVar1 = FUN_4a13758c(iVar1,iVar1 + -0x28);
    if (iVar1 != 0) {
      iVar4 = iVar4 + -1;
    }
    iVar1 = param_1 + iVar4 * 0x28;
    iVar2 = param_1 + iVar2 * 0x28;
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
    *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar1 + 0x1c);
    *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar1 + 0x20);
    *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar1 + 0x24);
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar1 + 0x14);
    *(undefined1 *)(iVar2 + 0x18) = *(undefined1 *)(iVar1 + 0x18);
    iVar2 = iVar4;
    iVar1 = (iVar4 + 1) * 2;
  }
  if (iVar4 == param_3) {
    iVar3 = param_1 + iVar4 * 0x28;
    iVar1 = param_1 + iVar2 * 0x28;
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar3 + -0x20);
    iVar2 = iVar4 + -1;
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar3 + -0x1c);
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar3 + -0x18);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar3 + -0xc);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar3 + -8);
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(iVar3 + -4);
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar3 + -0x14);
    *(undefined1 *)(iVar1 + 0x18) = *(undefined1 *)(iVar3 + -0x10);
  }
  iVar1 = FUN_4a0a9150(local_44,param_4);
  while (iVar4 = (iVar2 + -1) / 2, param_2 < iVar2) {
    iVar5 = param_1 + iVar4 * 0x28;
    iVar3 = FUN_4a13758c(iVar5,iVar1);
    if (iVar3 == 0) break;
    iVar2 = param_1 + iVar2 * 0x28;
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar5 + 8);
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar5 + 0x10);
    *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar5 + 0x1c);
    *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar5 + 0x20);
    *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar5 + 0x24);
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar5 + 0x14);
    *(undefined1 *)(iVar2 + 0x18) = *(undefined1 *)(iVar5 + 0x18);
    iVar2 = iVar4;
  }
  param_1 = param_1 + iVar2 * 0x28;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar1 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(iVar1 + 0x24);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar1 + 0x14);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(iVar1 + 0x18);
  local_44[0] = PTR_PTR_4a1669a4;
  local_3c = 0;
  local_38 = 0;
  FUN_4a0c6bf4(local_44);
  return;
}



// Address: 4a1669a8

void FUN_4a1669a8(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  code *pcVar3;
  
  puVar1 = PTR_DAT_4a1669f0;
  do {
    pcVar3 = *(code **)puVar1;
    if (pcVar3 == (code *)0x0) {
      FUN_4a15f528(PTR_s_out_of_memory_4a1669f4);
      FUN_4a000e38(1);
    }
    (*pcVar3)();
    iVar2 = FUN_4a15e080(param_1);
  } while (iVar2 == 0);
  return;
}



// Address: 4a1669f8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1669f8(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined *apuStack_84 [2];
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined *apuStack_58 [2];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  puVar2 = PTR_PTR_4a166c7c;
  if (param_1 == param_2) {
    return;
  }
  iVar8 = param_1 + 0x28;
  iStack_30 = param_1;
  iStack_2c = param_2;
  uStack_28 = param_3;
  if (iVar8 != param_2) {
    do {
      puVar3 = (undefined4 *)FUN_4a0c6bc0(apuStack_58);
      *puVar3 = puVar2;
      puVar3[2] = *(undefined4 *)(iVar8 + 8);
      puVar3[3] = *(undefined4 *)(iVar8 + 0xc);
      puVar3[4] = *(undefined4 *)(iVar8 + 0x10);
      puVar3[5] = *(undefined4 *)(iVar8 + 0x14);
      *(undefined1 *)(puVar3 + 6) = *(undefined1 *)(iVar8 + 0x18);
      puVar3[7] = *(undefined4 *)(iVar8 + 0x1c);
      puVar3[8] = *(undefined4 *)(iVar8 + 0x20);
      puVar3[9] = *(undefined4 *)(iVar8 + 0x24);
      uStack_5c = uStack_28;
      iVar4 = FUN_4a13758c(puVar3,param_1);
      if (iVar4 == 0) {
        iVar6 = FUN_4a0a9150(apuStack_84,puVar3);
        iVar7 = FUN_4a13758c(iVar6,iVar8 + -0x28);
        iVar5 = iVar8 + -0x28;
        iVar4 = iVar8;
        while (iVar1 = iVar5, iVar7 != 0) {
          *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar1 + 8);
          *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
          *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
          *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(iVar1 + 0x1c);
          *(undefined4 *)(iVar4 + 0x20) = *(undefined4 *)(iVar1 + 0x20);
          *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(iVar1 + 0x24);
          *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(iVar1 + 0x14);
          *(undefined1 *)(iVar4 + 0x18) = *(undefined1 *)(iVar1 + 0x18);
          iVar7 = FUN_4a13758c(iVar6,iVar1 + -0x28);
          iVar5 = iVar1 + -0x28;
          iVar4 = iVar1;
        }
        *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar6 + 8);
        *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar6 + 0xc);
        *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar6 + 0x10);
        *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(iVar6 + 0x1c);
        *(undefined4 *)(iVar4 + 0x20) = *(undefined4 *)(iVar6 + 0x20);
        *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(iVar6 + 0x24);
        *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(iVar6 + 0x14);
        *(undefined1 *)(iVar4 + 0x18) = *(undefined1 *)(iVar6 + 0x18);
        apuStack_84[0] = puVar2;
        uStack_7c = 0;
        uStack_78 = 0;
        FUN_4a0c6bf4(apuStack_84);
      }
      else {
        uStack_64 = 0;
        uStack_60 = 0;
        uStack_68 = 0;
        uStack_64 = FUN_4a166138();
        iVar4 = (int)((ulonglong)((longlong)DAT_4a166c80 * (longlong)(iVar8 - param_1)) >> 0x20);
        uStack_68 = 0;
        iVar5 = (iVar4 >> 4) - (iVar4 >> 0x1f);
        iVar4 = iVar8 + 0x28;
        iVar6 = iVar8;
        for (; 0 < iVar5; iVar5 = iVar5 + -1) {
          *(undefined4 *)(iVar4 + -0x20) = *(undefined4 *)(iVar6 + -0x20);
          *(undefined4 *)(iVar4 + -0x1c) = *(undefined4 *)(iVar6 + -0x1c);
          *(undefined4 *)(iVar4 + -0x18) = *(undefined4 *)(iVar6 + -0x18);
          *(undefined4 *)(iVar4 + -0xc) = *(undefined4 *)(iVar6 + -0xc);
          *(undefined4 *)(iVar4 + -8) = *(undefined4 *)(iVar6 + -8);
          *(undefined4 *)(iVar4 + -4) = *(undefined4 *)(iVar6 + -4);
          *(undefined4 *)(iVar4 + -0x14) = *(undefined4 *)(iVar6 + -0x14);
          *(undefined1 *)(iVar4 + -0x10) = *(undefined1 *)(iVar6 + -0x10);
          iVar4 = iVar4 + -0x28;
          iVar6 = iVar6 + -0x28;
        }
        *(undefined4 *)(param_1 + 8) = puVar3[2];
        *(undefined4 *)(param_1 + 0xc) = puVar3[3];
        *(undefined4 *)(param_1 + 0x10) = puVar3[4];
        *(undefined4 *)(param_1 + 0x1c) = puVar3[7];
        *(undefined4 *)(param_1 + 0x20) = puVar3[8];
        *(undefined4 *)(param_1 + 0x24) = puVar3[9];
        *(undefined4 *)(param_1 + 0x14) = puVar3[5];
        *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(puVar3 + 6);
      }
      apuStack_58[0] = puVar2;
      uStack_50 = 0;
      uStack_4c = 0;
      FUN_4a0c6bf4(apuStack_58);
      iVar8 = iVar8 + 0x28;
    } while (iVar8 != param_2);
    return;
  }
  return;
}



// Address: 4a166c84

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a166c84(uint param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  longlong lVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  code *UNRECOVERED_JUMPTABLE;
  undefined *apuStack_bc [2];
  undefined *puStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_94;
  undefined *puStack_90;
  undefined *puStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined **ppuStack_68;
  undefined4 uStack_64;
  undefined *apuStack_60 [2];
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_38;
  uint uStack_34;
  uint local_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  puVar2 = PTR_PTR_4a16729c;
  uStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  iStack_28 = param_4;
  if ((int)(param_2 - param_1) < 0x2a8) {
    return;
  }
  while (uVar8 = local_30, param_4 != 0) {
    ppuStack_68 = apuStack_60;
    lVar1 = (longlong)DAT_4a1672a0 * (longlong)(int)(local_30 - param_1);
    iVar3 = (int)((ulonglong)lVar1 >> 0x20);
    uVar11 = param_1 + ((iVar3 >> 5) - (iVar3 >> 0x1f)) * 0x28;
    param_4 = param_4 + -1;
    uVar15 = local_30 - 0x28;
    iVar3 = FUN_4a13758c(param_1,uVar11,(int)lVar1);
    if (iVar3 == 0) {
      iVar3 = FUN_4a13758c(param_1,uVar15);
      uVar13 = param_1;
      if (iVar3 == 0) {
        iVar3 = FUN_4a13758c(uVar11,uVar15);
        goto joined_r0x4a1670e8;
      }
    }
    else {
      iVar3 = FUN_4a13758c(uVar11,uVar15);
      uVar13 = uVar11;
      if (iVar3 == 0) {
        iVar3 = FUN_4a13758c(param_1,uVar15);
        uVar11 = param_1;
joined_r0x4a1670e8:
        uVar13 = uVar11;
        if (iVar3 != 0) {
          uVar13 = uVar15;
        }
      }
    }
    puVar4 = (undefined4 *)FUN_4a0c6bc0(ppuStack_68);
    *puVar4 = puVar2;
    puVar4[2] = *(undefined4 *)(uVar13 + 8);
    puVar4[3] = *(undefined4 *)(uVar13 + 0xc);
    puVar4[4] = *(undefined4 *)(uVar13 + 0x10);
    puVar4[5] = *(undefined4 *)(uVar13 + 0x14);
    *(undefined1 *)(puVar4 + 6) = *(undefined1 *)(uVar13 + 0x18);
    puVar4[7] = *(undefined4 *)(uVar13 + 0x1c);
    puVar4[8] = *(undefined4 *)(uVar13 + 0x20);
    puVar4[9] = *(undefined4 *)(uVar13 + 0x24);
    uVar11 = param_1;
    while( true ) {
      iVar3 = FUN_4a13758c(uVar11,puVar4);
      while (iVar3 != 0) {
        uVar11 = uVar11 + 0x28;
        iVar3 = FUN_4a13758c(uVar11,puVar4);
      }
      uVar8 = uVar8 - 0x28;
      iVar3 = FUN_4a13758c(puVar4,uVar8);
      while (iVar3 != 0) {
        uVar8 = uVar8 - 0x28;
        iVar3 = FUN_4a13758c(puVar4,uVar8);
      }
      if (uVar8 <= uVar11) break;
      FUN_4a0a9150(&puStack_8c,uVar11);
      *(undefined4 *)(uVar11 + 8) = *(undefined4 *)(uVar8 + 8);
      *(undefined4 *)(uVar11 + 0xc) = *(undefined4 *)(uVar8 + 0xc);
      *(undefined4 *)(uVar11 + 0x10) = *(undefined4 *)(uVar8 + 0x10);
      *(undefined4 *)(uVar11 + 0x1c) = *(undefined4 *)(uVar8 + 0x1c);
      *(undefined4 *)(uVar11 + 0x20) = *(undefined4 *)(uVar8 + 0x20);
      *(undefined4 *)(uVar11 + 0x24) = *(undefined4 *)(uVar8 + 0x24);
      *(undefined4 *)(uVar11 + 0x14) = *(undefined4 *)(uVar8 + 0x14);
      *(undefined1 *)(uVar11 + 0x18) = *(undefined1 *)(uVar8 + 0x18);
      *(undefined4 *)(uVar8 + 8) = uStack_84;
      *(undefined4 *)(uVar8 + 0xc) = uStack_80;
      *(undefined4 *)(uVar8 + 0x10) = uStack_7c;
      *(undefined4 *)(uVar8 + 0x1c) = uStack_70;
      *(undefined4 *)(uVar8 + 0x20) = uStack_6c;
      *(undefined ***)(uVar8 + 0x24) = ppuStack_68;
      *(undefined4 *)(uVar8 + 0x14) = uStack_78;
      *(undefined1 *)(uVar8 + 0x18) = uStack_74;
      puStack_8c = puVar2;
      uStack_84 = 0;
      uStack_80 = 0;
      FUN_4a0c6bf4(&puStack_8c);
      uVar11 = uVar11 + 0x28;
    }
    apuStack_60[0] = puVar2;
    uStack_58 = 0;
    uStack_54 = 0;
    FUN_4a0c6bf4(apuStack_60);
    FUN_4a166c84(uVar11,local_30,0,param_4);
    local_30 = uVar11;
    if ((int)(uVar11 - param_1) < 0x2a8) {
      return;
    }
  }
  uStack_64 = param_5;
  iStack_38 = local_30 - param_1;
  ppuStack_68 = (undefined **)param_5;
  if (0x4f < iStack_38) {
    iVar3 = (int)((ulonglong)((longlong)DAT_4a1672a0 * (longlong)iStack_38) >> 0x20);
    iVar14 = (iVar3 >> 4) - (iVar3 >> 0x1f);
    iVar3 = (iVar14 + -2) / 2;
    do {
      iVar9 = param_1 + iVar3 * 0x28;
      puVar4 = (undefined4 *)FUN_4a0c6bc0(&puStack_90);
      *puVar4 = puVar2;
      puVar4[2] = *(undefined4 *)(iVar9 + 8);
      puVar4[3] = *(undefined4 *)(iVar9 + 0xc);
      puVar4[4] = *(undefined4 *)(iVar9 + 0x10);
      puVar4[5] = *(undefined4 *)(iVar9 + 0x14);
      *(undefined1 *)(puVar4 + 6) = *(undefined1 *)(iVar9 + 0x18);
      puVar4[7] = *(undefined4 *)(iVar9 + 0x1c);
      puVar4[8] = *(undefined4 *)(iVar9 + 0x20);
      puVar4[9] = *(undefined4 *)(iVar9 + 0x24);
      uStack_94 = ppuStack_68;
      iVar5 = iVar3 * 2 + 2;
      iVar9 = iVar3;
      while (iVar10 = iVar5, iVar10 < iVar14) {
        iVar5 = param_1 + iVar10 * 0x28;
        iVar5 = FUN_4a13758c(iVar5,iVar5 + -0x28);
        if (iVar5 != 0) {
          iVar10 = iVar10 + -1;
        }
        iVar5 = param_1 + iVar10 * 0x28;
        iVar9 = param_1 + iVar9 * 0x28;
        *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(iVar5 + 8);
        *(undefined4 *)(iVar9 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
        *(undefined4 *)(iVar9 + 0x10) = *(undefined4 *)(iVar5 + 0x10);
        *(undefined4 *)(iVar9 + 0x1c) = *(undefined4 *)(iVar5 + 0x1c);
        *(undefined4 *)(iVar9 + 0x20) = *(undefined4 *)(iVar5 + 0x20);
        *(undefined4 *)(iVar9 + 0x24) = *(undefined4 *)(iVar5 + 0x24);
        *(undefined4 *)(iVar9 + 0x14) = *(undefined4 *)(iVar5 + 0x14);
        *(undefined1 *)(iVar9 + 0x18) = *(undefined1 *)(iVar5 + 0x18);
        iVar9 = iVar10;
        iVar5 = (iVar10 + 1) * 2;
      }
      if (iVar10 == iVar14) {
        iVar7 = param_1 + iVar9 * 0x28;
        iVar5 = param_1 + iVar10 * 0x28;
        iVar9 = iVar10 + -1;
        *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar5 + -0x20);
        *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(iVar5 + -0x1c);
        *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(iVar5 + -0x18);
        *(undefined4 *)(iVar7 + 0x1c) = *(undefined4 *)(iVar5 + -0xc);
        *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(iVar5 + -8);
        *(undefined4 *)(iVar7 + 0x24) = *(undefined4 *)(iVar5 + -4);
        *(undefined4 *)(iVar7 + 0x14) = *(undefined4 *)(iVar5 + -0x14);
        *(undefined1 *)(iVar7 + 0x18) = *(undefined1 *)(iVar5 + -0x10);
      }
      iVar5 = FUN_4a0a9150(apuStack_bc,puVar4);
      while (iVar10 = (iVar9 + -1) / 2, iVar3 < iVar9) {
        iVar12 = param_1 + iVar10 * 0x28;
        iVar7 = FUN_4a13758c(iVar12,iVar5);
        if (iVar7 == 0) break;
        iVar9 = param_1 + iVar9 * 0x28;
        *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(iVar12 + 8);
        *(undefined4 *)(iVar9 + 0xc) = *(undefined4 *)(iVar12 + 0xc);
        *(undefined4 *)(iVar9 + 0x10) = *(undefined4 *)(iVar12 + 0x10);
        *(undefined4 *)(iVar9 + 0x1c) = *(undefined4 *)(iVar12 + 0x1c);
        *(undefined4 *)(iVar9 + 0x20) = *(undefined4 *)(iVar12 + 0x20);
        *(undefined4 *)(iVar9 + 0x24) = *(undefined4 *)(iVar12 + 0x24);
        *(undefined4 *)(iVar9 + 0x14) = *(undefined4 *)(iVar12 + 0x14);
        *(undefined1 *)(iVar9 + 0x18) = *(undefined1 *)(iVar12 + 0x18);
        iVar9 = iVar10;
      }
      iVar9 = param_1 + iVar9 * 0x28;
      *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(iVar5 + 8);
      *(undefined4 *)(iVar9 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
      *(undefined4 *)(iVar9 + 0x10) = *(undefined4 *)(iVar5 + 0x10);
      *(undefined4 *)(iVar9 + 0x1c) = *(undefined4 *)(iVar5 + 0x1c);
      *(undefined4 *)(iVar9 + 0x20) = *(undefined4 *)(iVar5 + 0x20);
      *(undefined4 *)(iVar9 + 0x24) = *(undefined4 *)(iVar5 + 0x24);
      *(undefined4 *)(iVar9 + 0x14) = *(undefined4 *)(iVar5 + 0x14);
      *(undefined1 *)(iVar9 + 0x18) = *(undefined1 *)(iVar5 + 0x18);
      puStack_b4 = (undefined *)0x0;
      apuStack_bc[0] = puVar2;
      uStack_b0 = 0;
      FUN_4a0c6bf4(apuStack_bc);
      uStack_88 = 0;
      puStack_90 = puVar2;
      uStack_84 = 0;
      FUN_4a0c6bf4(&puStack_90);
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
    } while( true );
  }
  iVar3 = DAT_4a1672a0;
  uVar8 = local_30;
  if (iStack_38 < 0x50) {
                    /* WARNING: Could not recover jumptable at 0x4a166f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  do {
    uVar11 = uVar8 - 0x28;
    uVar6 = FUN_4a0a9150(&puStack_8c,uVar8 - 0x28);
    *(undefined4 *)(uVar8 - 0x20) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(uVar8 - 0x1c) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(uVar8 - 0x18) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(uVar8 - 0xc) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(uVar8 - 8) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(uVar8 - 4) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(uVar8 - 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined1 *)(uVar8 - 0x10) = *(undefined1 *)(param_1 + 0x18);
    uVar6 = FUN_4a0a9150(&puStack_b4,uVar6);
    iVar14 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)((uVar8 - 0x28) - param_1)) >> 0x20)
    ;
    FUN_4a166798(param_1,0,(iVar14 >> 4) - (iVar14 >> 0x1f),uVar6);
    puStack_b4 = puVar2;
    uStack_ac = 0;
    uStack_a8 = 0;
    FUN_4a0c6bf4(&puStack_b4);
    puStack_8c = puVar2;
    uStack_84 = 0;
    uStack_80 = 0;
    FUN_4a0c6bf4(&puStack_8c);
    uVar8 = uVar11;
  } while (0x4f < (int)(uVar11 - param_1));
  return;
}



// Address: 4a1672a4

void FUN_4a1672a4(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int local_28;
  int local_24 [2];
  
  puVar6 = (undefined4 *)param_1[1];
  if (puVar6 != (undefined4 *)param_1[2]) {
    *puVar6 = *param_2;
    param_1[1] = param_1[1] + 4;
    return;
  }
  local_24[0] = 1;
  local_24[1] = 0;
  local_28 = param_1[1] - *param_1 >> 2;
  if (local_28 == 0) {
    piVar1 = local_24;
  }
  else {
    piVar1 = &local_28;
  }
  iVar8 = *piVar1 + local_28;
  if (iVar8 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_4a15e080(iVar8 * 4);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)FUN_4a1669a8();
    }
  }
  puVar4 = (undefined4 *)*param_1;
  iVar5 = local_24[0];
  puVar7 = puVar2;
  if (puVar6 != puVar4) {
    iVar3 = FUN_4a000ec8(puVar2);
    iVar5 = local_24[0];
    puVar7 = (undefined4 *)((int)puVar6 + (iVar3 - (int)puVar4));
  }
  do {
    iVar5 = iVar5 + -1;
    puVar6 = puVar7 + 1;
    *puVar7 = *param_2;
    puVar7 = puVar6;
  } while (iVar5 != 0);
  if (*param_1 != 0) {
    FUN_4a14f21c();
  }
  param_1[2] = (int)(puVar2 + iVar8);
  param_1[1] = (int)puVar6;
  *param_1 = (int)puVar2;
  return;
}



// Address: 4a1673a8

void FUN_4a1673a8(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  do {
    FUN_4a1673a8(param_1,*(undefined4 *)(param_2 + 0xc));
    iVar1 = *(int *)(param_2 + 8);
    if (param_2 != 0) {
      FUN_4a14f21c(param_2);
    }
    param_2 = iVar1;
  } while (iVar1 != 0);
  return;
}



// Address: 4a1673e8

void FUN_4a1673e8(int *param_1,int *param_2,int param_3,int param_4,uint *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  
  if ((*param_2 == param_4) ||
     ((param_6 == 0 && ((param_3 != 0 || (*param_5 < *(uint *)(param_4 + 0x10))))))) {
    iVar1 = FUN_4a15e080(0x18);
    if (iVar1 == 0) {
      iVar1 = FUN_4a1669a8();
    }
    *(uint *)(iVar1 + 0x10) = *param_5;
    *(uint *)(iVar1 + 0x14) = param_5[1];
    *(int *)(param_4 + 8) = iVar1;
    iVar2 = *param_2;
    if (iVar2 == param_4) {
      *(int *)(iVar2 + 4) = iVar1;
      *(int *)(*param_2 + 0xc) = iVar1;
    }
    else if (*(int *)(iVar2 + 8) == param_4) {
      *(int *)(iVar2 + 8) = iVar1;
    }
  }
  else {
    iVar1 = FUN_4a15e080(0x18);
    if (iVar1 == 0) {
      iVar1 = FUN_4a1669a8();
    }
    *(uint *)(iVar1 + 0x10) = *param_5;
    *(uint *)(iVar1 + 0x14) = param_5[1];
    *(int *)(param_4 + 0xc) = iVar1;
    if (*(int *)(*param_2 + 0xc) == param_4) {
      *(int *)(*param_2 + 0xc) = iVar1;
    }
  }
  *(int *)(iVar1 + 4) = param_4;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  FUN_4a165974(iVar1,*param_2 + 4);
  param_2[1] = param_2[1] + 1;
  *param_1 = iVar1;
  return;
}



// Address: 4a167508

void FUN_4a167508(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  do {
    FUN_4a167508(param_1,*(undefined4 *)(param_2 + 0xc));
    iVar1 = *(int *)(param_2 + 8);
    if (param_2 != 0) {
      FUN_4a14f21c(param_2);
    }
    param_2 = iVar1;
  } while (iVar1 != 0);
  return;
}



// Address: 4a167548

void FUN_4a167548(int *param_1,int *param_2,int param_3,int param_4,uint *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  
  if ((*param_2 == param_4) ||
     ((param_6 == 0 && ((param_3 != 0 || (*param_5 < *(uint *)(param_4 + 0x10))))))) {
    iVar1 = FUN_4a15e080(0x18);
    if (iVar1 == 0) {
      iVar1 = FUN_4a1669a8();
    }
    *(uint *)(iVar1 + 0x10) = *param_5;
    *(uint *)(iVar1 + 0x14) = param_5[1];
    *(int *)(param_4 + 8) = iVar1;
    iVar2 = *param_2;
    if (iVar2 == param_4) {
      *(int *)(iVar2 + 4) = iVar1;
      *(int *)(*param_2 + 0xc) = iVar1;
    }
    else if (*(int *)(iVar2 + 8) == param_4) {
      *(int *)(iVar2 + 8) = iVar1;
    }
  }
  else {
    iVar1 = FUN_4a15e080(0x18);
    if (iVar1 == 0) {
      iVar1 = FUN_4a1669a8();
    }
    *(uint *)(iVar1 + 0x10) = *param_5;
    *(uint *)(iVar1 + 0x14) = param_5[1];
    *(int *)(param_4 + 0xc) = iVar1;
    if (*(int *)(*param_2 + 0xc) == param_4) {
      *(int *)(*param_2 + 0xc) = iVar1;
    }
  }
  *(int *)(iVar1 + 4) = param_4;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  FUN_4a165974(iVar1,*param_2 + 4);
  param_2[1] = param_2[1] + 1;
  *param_1 = iVar1;
  return;
}



// Address: 4a167668

int * FUN_4a167668(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  if ((int *)*param_1 != param_2) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 0xc))(param_2);
    }
    piVar2 = (int *)*param_1;
    if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    *param_1 = (int)param_2;
  }
  return param_1;
}



// Address: 4a1676e8

undefined4 FUN_4a1676e8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 0x1c))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c(iVar1);
  }
  return 0;
}



// Address: 4a167748

void FUN_4a167748(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a1677b8;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 0x1c))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c(iVar1);
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a1677bc

undefined4 FUN_4a1677bc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 100))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c(iVar1);
  }
  return 0;
}



// Address: 4a167820

void FUN_4a167820(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a167894;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 100))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c(iVar1);
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a167898

undefined4 FUN_4a167898(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 0x14))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c(iVar1);
  }
  return 0;
}



// Address: 4a1678f8

void FUN_4a1678f8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a167968;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 0x14))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c(iVar1);
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16796c

undefined4 FUN_4a16796c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 0x14))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c(iVar1);
  }
  return 0;
}



// Address: 4a1679cc

int * FUN_4a1679cc(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined *puVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  undefined *local_48 [2];
  int local_40;
  int *local_3c;
  int local_34;
  undefined *local_30;
  int *local_2c;
  int local_28;
  
  local_2c = (int *)param_1;
  local_28 = param_2;
  local_2c = (int *)FUN_4a0c6bc0();
  local_30 = PTR_PTR_4a167bf4;
  local_2c[2] = 0;
  puVar2 = PTR_PTR_4a167bf8;
  local_2c[3] = 0;
  *local_2c = (int)puVar2;
  if (0 < local_28) {
    local_34 = FUN_4a15e080(local_28 * 0x14);
    if (local_34 == 0) {
      local_34 = FUN_4a1669a8();
    }
    puVar2 = PTR_PTR_4a167bfc;
    iVar10 = 0;
    do {
      iVar8 = local_34 + iVar10 * 0x14;
      puVar4 = (undefined4 *)FUN_4a0c6bc0(local_48);
      puVar4[2] = 0;
      *puVar4 = puVar2;
      puVar4[3] = 0;
      puVar5 = (undefined4 *)FUN_4a0c6bc0(iVar8);
      *puVar5 = local_30;
      puVar5[2] = puVar4[2];
      piVar7 = (int *)puVar4[3];
      puVar5[3] = piVar7;
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0xc))();
      }
      piVar7 = local_3c;
      iVar8 = local_40;
      *puVar5 = puVar2;
      local_48[0] = puVar2;
      bVar11 = local_3c != (int *)0x0;
      if (bVar11) {
        iVar9 = local_3c[2];
        cVar1 = (char)local_3c[5];
      }
      else {
        iVar9 = 0;
        cVar1 = '\0';
      }
      bVar12 = local_3c == (int *)0x0;
      local_3c = (int *)0x0;
      local_40 = 0;
      if ((bVar12) || (iVar6 = (**(code **)(*piVar7 + 8))(piVar7), iVar6 == 0)) {
        bVar3 = 0;
      }
      else {
        (**(code **)(*piVar7 + 4))(piVar7);
        bVar3 = 1;
      }
      if (!(bool)(bVar3 & (bVar11 && cVar1 != '\0'))) {
        iVar9 = 0;
      }
      if (iVar9 != 0) {
        iVar6 = 0;
        if (0 < iVar8) {
          do {
            (*(code *)**(undefined4 **)(iVar9 + iVar6 * 0x14))();
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar8);
          if (iVar9 == 0) goto LAB_4a167b58;
        }
        FUN_4a14f21c(iVar9);
      }
LAB_4a167b58:
      FUN_4a0c6bf4(local_48);
      iVar10 = iVar10 + 1;
    } while (iVar10 < local_28);
    thunk_FUN_4a161570(0x18);
    puVar4 = (undefined4 *)FUN_4a0c0628();
    puVar2 = PTR_PTR_4a167c00;
    *puVar4 = PTR_PTR_4a167c00;
    puVar4[2] = local_34;
    puVar4[3] = 0x14;
    puVar4[4] = local_28;
    *(undefined1 *)(puVar4 + 5) = 1;
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)(puVar2 + 0xc))(puVar4);
    }
    (**(code **)(*local_2c + 0x1c))(local_2c);
    local_2c[3] = (int)puVar4;
    local_2c[2] = local_28;
  }
  return local_2c;
}



// Address: 4a167c04

void FUN_4a167c04(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a167c74;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 0x14))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c(iVar1);
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a167c78

undefined4 FUN_4a167c78(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 0x14))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c(iVar1);
  }
  return 0;
}



// Address: 4a167cd8

int * FUN_4a167cd8(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_38 [20];
  
  piVar3 = (int *)FUN_4a0c6bc0();
  puVar2 = PTR_PTR_4a167e14;
  piVar3[2] = 0;
  puVar1 = PTR_PTR_4a167e10;
  piVar3[3] = 0;
  *piVar3 = (int)puVar2;
  if (0 < param_2) {
    iVar4 = FUN_4a15e080(param_2 * 0x14);
    if (iVar4 == 0) {
      iVar4 = FUN_4a1669a8();
    }
    puVar2 = PTR_PTR_4a167e18;
    iVar8 = 0;
    do {
      puVar5 = (undefined4 *)FUN_4a0c6bc0(auStack_38);
      puVar5[2] = 0;
      puVar5[3] = 0;
      *puVar5 = puVar2;
      puVar6 = (undefined4 *)FUN_4a0c6bc0(iVar4 + iVar8 * 0x14);
      *puVar6 = puVar1;
      puVar6[2] = puVar5[2];
      piVar7 = (int *)puVar5[3];
      puVar6[3] = piVar7;
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0xc))();
      }
      *puVar6 = puVar2;
      FUN_4a168b90(auStack_38);
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_2);
    thunk_FUN_4a161570(0x18);
    puVar5 = (undefined4 *)FUN_4a0c0628();
    puVar5[3] = 0x14;
    puVar5[4] = param_2;
    puVar1 = PTR_PTR_4a167e1c;
    *puVar5 = PTR_PTR_4a167e1c;
    puVar5[2] = iVar4;
    *(undefined1 *)(puVar5 + 5) = 1;
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)(puVar1 + 0xc))(puVar5);
    }
    (**(code **)(*piVar3 + 0x1c))(piVar3);
    piVar3[3] = (int)puVar5;
    piVar3[2] = param_2;
  }
  return piVar3;
}



// Address: 4a167e20

void FUN_4a167e20(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a167e90;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 0x14))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c(iVar1);
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a167e94

undefined4 FUN_4a167e94(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 0x14))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c(iVar1);
  }
  return 0;
}



// Address: 4a167ef4

void FUN_4a167ef4(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a167f64;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 0x14))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c(iVar1);
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a167f68

undefined4 FUN_4a167f68(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 0x14))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c(iVar1);
  }
  return 0;
}



// Address: 4a167fc8

int * FUN_4a167fc8(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_38 [20];
  
  piVar3 = (int *)FUN_4a0c6bc0();
  puVar2 = PTR_PTR_4a168104;
  piVar3[2] = 0;
  puVar1 = PTR_PTR_4a168100;
  piVar3[3] = 0;
  *piVar3 = (int)puVar2;
  if (0 < param_2) {
    iVar4 = FUN_4a15e080(param_2 * 0x14);
    if (iVar4 == 0) {
      iVar4 = FUN_4a1669a8();
    }
    puVar2 = PTR_PTR_4a168108;
    iVar8 = 0;
    do {
      puVar5 = (undefined4 *)FUN_4a0c6bc0(auStack_38);
      puVar5[2] = 0;
      puVar5[3] = 0;
      *puVar5 = puVar2;
      puVar6 = (undefined4 *)FUN_4a0c6bc0(iVar4 + iVar8 * 0x14);
      *puVar6 = puVar1;
      puVar6[2] = puVar5[2];
      piVar7 = (int *)puVar5[3];
      puVar6[3] = piVar7;
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0xc))();
      }
      *puVar6 = puVar2;
      FUN_4a169024(auStack_38);
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_2);
    thunk_FUN_4a161570(0x18);
    puVar5 = (undefined4 *)FUN_4a0c0628();
    puVar5[3] = 0x14;
    puVar5[4] = param_2;
    puVar1 = PTR_PTR_4a16810c;
    *puVar5 = PTR_PTR_4a16810c;
    puVar5[2] = iVar4;
    *(undefined1 *)(puVar5 + 5) = 1;
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)(puVar1 + 0xc))(puVar5);
    }
    (**(code **)(*piVar3 + 0x1c))(piVar3);
    piVar3[3] = (int)puVar5;
    piVar3[2] = param_2;
  }
  return piVar3;
}



// Address: 4a168110

void FUN_4a168110(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a168180;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 0x14))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c(iVar1);
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a168184

undefined4 FUN_4a168184(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 0x14))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c(iVar1);
  }
  return 0;
}



// Address: 4a1681e4

int * FUN_4a1681e4(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_38 [20];
  
  piVar3 = (int *)FUN_4a0c6bc0();
  puVar2 = PTR_PTR_4a168320;
  piVar3[2] = 0;
  puVar1 = PTR_PTR_4a16831c;
  piVar3[3] = 0;
  *piVar3 = (int)puVar2;
  if (0 < param_2) {
    iVar4 = FUN_4a15e080(param_2 * 0x14);
    if (iVar4 == 0) {
      iVar4 = FUN_4a1669a8();
    }
    puVar2 = PTR_PTR_4a168324;
    iVar8 = 0;
    do {
      puVar5 = (undefined4 *)FUN_4a0c6bc0(auStack_38);
      puVar5[2] = 0;
      puVar5[3] = 0;
      *puVar5 = puVar2;
      puVar6 = (undefined4 *)FUN_4a0c6bc0(iVar4 + iVar8 * 0x14);
      *puVar6 = puVar1;
      puVar6[2] = puVar5[2];
      piVar7 = (int *)puVar5[3];
      puVar6[3] = piVar7;
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0xc))();
      }
      *puVar6 = puVar2;
      FUN_4a169628(auStack_38);
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_2);
    thunk_FUN_4a161570(0x18);
    puVar5 = (undefined4 *)FUN_4a0c0628();
    puVar5[3] = 0x14;
    puVar5[4] = param_2;
    puVar1 = PTR_PTR_4a168328;
    *puVar5 = PTR_PTR_4a168328;
    puVar5[2] = iVar4;
    *(undefined1 *)(puVar5 + 5) = 1;
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)(puVar1 + 0xc))(puVar5);
    }
    (**(code **)(*piVar3 + 0x1c))(piVar3);
    piVar3[3] = (int)puVar5;
    piVar3[2] = param_2;
  }
  return piVar3;
}



// Address: 4a16832c

void FUN_4a16832c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a16839c;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 0x14))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c(iVar1);
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a1683a0

undefined4 FUN_4a1683a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 0x14))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c(iVar1);
  }
  return 0;
}



// Address: 4a168400

void FUN_4a168400(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a168470;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 0x14))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c(iVar1);
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a168474

undefined4 FUN_4a168474(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 0x14))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c(iVar1);
  }
  return 0;
}



// Address: 4a1684d4

int * FUN_4a1684d4(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined *local_38 [2];
  int local_30;
  
  piVar4 = (int *)FUN_4a0c6bc0();
  puVar2 = PTR_PTR_4a168654;
  piVar4[2] = 0;
  puVar1 = PTR_PTR_4a168650;
  piVar4[3] = 0;
  *piVar4 = (int)puVar2;
  if (0 < param_2) {
    iVar5 = FUN_4a15e080(param_2 * 0x14);
    if (iVar5 == 0) {
      iVar5 = FUN_4a1669a8();
    }
    puVar2 = PTR_PTR_4a168658;
    iVar11 = 0;
    do {
      puVar6 = (undefined4 *)FUN_4a0c6bc0(local_38);
      puVar6[2] = 0;
      puVar6[3] = 0;
      *puVar6 = puVar2;
      puVar7 = (undefined4 *)FUN_4a0c6bc0(iVar5 + iVar11 * 0x14);
      *puVar7 = puVar1;
      puVar7[2] = puVar6[2];
      piVar8 = (int *)puVar6[3];
      puVar7[3] = piVar8;
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 0xc))();
      }
      iVar3 = local_30;
      *puVar7 = puVar2;
      local_38[0] = puVar2;
      iVar9 = FUN_4a0bcc84(local_38);
      if (iVar9 != 0) {
        iVar10 = 0;
        if (0 < iVar3) {
          do {
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar3);
          if (iVar9 == 0) goto LAB_4a1685d0;
        }
        FUN_4a14f21c(iVar9);
      }
LAB_4a1685d0:
      FUN_4a0c6bf4(local_38);
      iVar11 = iVar11 + 1;
    } while (iVar11 < param_2);
    thunk_FUN_4a161570(0x18);
    puVar6 = (undefined4 *)FUN_4a0c0628();
    puVar6[3] = 0x14;
    puVar6[4] = param_2;
    puVar1 = PTR_PTR_4a16865c;
    *puVar6 = PTR_PTR_4a16865c;
    puVar6[2] = iVar5;
    *(undefined1 *)(puVar6 + 5) = 1;
    if (puVar6 != (undefined4 *)0x0) {
      (**(code **)(puVar1 + 0xc))(puVar6);
    }
    (**(code **)(*piVar4 + 0x1c))(piVar4);
    piVar4[3] = (int)puVar6;
    piVar4[2] = param_2;
  }
  return piVar4;
}



// Address: 4a168660

void FUN_4a168660(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a1686d0;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 0x14))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c(iVar1);
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a1686d4

undefined4 FUN_4a1686d4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 0x14))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c(iVar1);
  }
  return 0;
}



// Address: 4a168734

void FUN_4a168734(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a1687a4;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 0x14))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c(iVar1);
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a1687a8

undefined4 FUN_4a1687a8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 0x14))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c(iVar1);
  }
  return 0;
}



// Address: 4a168808

void FUN_4a168808(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a168878;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 0x14))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c(iVar1);
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16887c

undefined4 FUN_4a16887c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 0x14))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c(iVar1);
  }
  return 0;
}



// Address: 4a1688dc

void FUN_4a1688dc(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a16894c;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 0x14))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c(iVar1);
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a168950

undefined4 FUN_4a168950(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 0x14))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c(iVar1);
  }
  return 0;
}



// Address: 4a1689b0

void FUN_4a1689b0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a168a20;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 0x14))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c(iVar1);
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a168a24

undefined4 FUN_4a168a24(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 0x14))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c(iVar1);
  }
  return 0;
}



// Address: 4a168a84

int * FUN_4a168a84(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 auStack_34 [20];
  
  piVar2 = (int *)FUN_4a0c6bc0();
  puVar1 = PTR_PTR_4a168b84;
  piVar2[2] = 0;
  piVar2[3] = 0;
  *piVar2 = (int)puVar1;
  if (0 < param_2) {
    iVar3 = FUN_4a15e080(param_2 * 0x14);
    if (iVar3 == 0) {
      iVar3 = FUN_4a1669a8();
    }
    puVar1 = PTR_PTR_4a168b88;
    iVar5 = 0;
    do {
      puVar4 = (undefined4 *)FUN_4a0c6bc0(auStack_34);
      puVar4[2] = 0;
      *puVar4 = puVar1;
      puVar4[3] = 0;
      FUN_4a16b5a0(iVar3 + iVar5 * 0x14,puVar4);
      FUN_4a16b6c0(auStack_34);
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2);
    thunk_FUN_4a161570(0x18);
    puVar4 = (undefined4 *)FUN_4a0c0628();
    puVar4[3] = 0x14;
    puVar4[4] = param_2;
    puVar1 = PTR_PTR_4a168b8c;
    *puVar4 = PTR_PTR_4a168b8c;
    puVar4[2] = iVar3;
    *(undefined1 *)(puVar4 + 5) = 1;
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)(puVar1 + 0xc))(puVar4);
    }
    (**(code **)(*piVar2 + 0x1c))(piVar2);
    piVar2[3] = (int)puVar4;
    piVar2[2] = param_2;
  }
  return piVar2;
}



// Address: 4a168b90

void FUN_4a168b90(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a168c00;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 0x14))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c(iVar1);
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a168c04

undefined4 FUN_4a168c04(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 0x14))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c(iVar1);
  }
  return 0;
}



// Address: 4a168c64

void FUN_4a168c64(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a168cd4;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 0x14))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c(iVar1);
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a168cd8

undefined4 FUN_4a168cd8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 0x14))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c(iVar1);
  }
  return 0;
}



// Address: 4a168d38

int * FUN_4a168d38(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 auStack_34 [20];
  
  piVar2 = (int *)FUN_4a0c6bc0();
  puVar1 = PTR_PTR_4a168e38;
  piVar2[2] = 0;
  piVar2[3] = 0;
  *piVar2 = (int)puVar1;
  if (0 < param_2) {
    iVar3 = FUN_4a15e080(param_2 * 0x14);
    if (iVar3 == 0) {
      iVar3 = FUN_4a1669a8();
    }
    puVar1 = PTR_PTR_4a168e3c;
    iVar5 = 0;
    do {
      puVar4 = (undefined4 *)FUN_4a0c6bc0(auStack_34);
      puVar4[2] = 0;
      *puVar4 = puVar1;
      puVar4[3] = 0;
      FUN_4a16bdcc(iVar3 + iVar5 * 0x14,puVar4);
      FUN_4a16bef4(auStack_34);
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2);
    thunk_FUN_4a161570(0x18);
    puVar4 = (undefined4 *)FUN_4a0c0628();
    puVar4[3] = 0x14;
    puVar4[4] = param_2;
    puVar1 = PTR_PTR_4a168e40;
    *puVar4 = PTR_PTR_4a168e40;
    puVar4[2] = iVar3;
    *(undefined1 *)(puVar4 + 5) = 1;
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)(puVar1 + 0xc))(puVar4);
    }
    (**(code **)(*piVar2 + 0x1c))(piVar2);
    piVar2[3] = (int)puVar4;
    piVar2[2] = param_2;
  }
  return piVar2;
}



// Address: 4a168e44

void FUN_4a168e44(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a168eb4;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 0x14))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c(iVar1);
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a168eb8

undefined4 FUN_4a168eb8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 0x14))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c(iVar1);
  }
  return 0;
}



// Address: 4a168f18

int * FUN_4a168f18(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 auStack_34 [20];
  
  piVar2 = (int *)FUN_4a0c6bc0();
  puVar1 = PTR_PTR_4a169018;
  piVar2[2] = 0;
  piVar2[3] = 0;
  *piVar2 = (int)puVar1;
  if (0 < param_2) {
    iVar3 = FUN_4a15e080(param_2 * 0x14);
    if (iVar3 == 0) {
      iVar3 = FUN_4a1669a8();
    }
    puVar1 = PTR_PTR_4a16901c;
    iVar5 = 0;
    do {
      puVar4 = (undefined4 *)FUN_4a0c6bc0(auStack_34);
      puVar4[2] = 0;
      *puVar4 = puVar1;
      puVar4[3] = 0;
      FUN_4a16c074(iVar3 + iVar5 * 0x14,puVar4);
      FUN_4a16c1a0(auStack_34);
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2);
    thunk_FUN_4a161570(0x18);
    puVar4 = (undefined4 *)FUN_4a0c0628();
    puVar4[3] = 0x14;
    puVar4[4] = param_2;
    puVar1 = PTR_PTR_4a169020;
    *puVar4 = PTR_PTR_4a169020;
    puVar4[2] = iVar3;
    *(undefined1 *)(puVar4 + 5) = 1;
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)(puVar1 + 0xc))(puVar4);
    }
    (**(code **)(*piVar2 + 0x1c))(piVar2);
    piVar2[3] = (int)puVar4;
    piVar2[2] = param_2;
  }
  return piVar2;
}



// Address: 4a169024

void FUN_4a169024(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a169094;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar2 * 0x14))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c(iVar1);
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a169098

undefined4 FUN_4a169098(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  piVar4 = *(int **)(param_1 + 0xc);
  if (piVar4 != (int *)0x0) {
    iVar6 = piVar4[2];
    param_2 = (uint)*(byte *)(piVar4 + 5);
  }
  else {
    iVar6 = 0;
  }
  iVar5 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((piVar4 == (int *)0x0) || (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar4 + 4))(piVar4);
    bVar1 = 1;
  }
  iVar2 = 0;
  if ((bool)(bVar1 & (piVar4 != (int *)0x0 && param_2 != 0))) {
    iVar2 = iVar6;
  }
  if (iVar2 != 0) {
    iVar6 = 0;
    if (0 < iVar5) {
      do {
        piVar4 = *(int **)(iVar2 + iVar6 * 4);
        if ((piVar4 != (int *)0x0) && (iVar3 = (**(code **)(*piVar4 + 8))(piVar4), iVar3 != 0)) {
          (**(code **)(*piVar4 + 4))(piVar4);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar5);
      if (iVar2 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c(iVar2);
  }
  return 0;
}



// Address: 4a169190

void FUN_4a169190(undefined4 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  puVar2 = PTR_PTR_4a169294;
  *param_1 = PTR_PTR_4a169294;
  piVar5 = (int *)param_1[3];
  iVar7 = param_1[2];
  if (piVar5 != (int *)0x0) {
    iVar6 = piVar5[2];
    puVar2 = (undefined *)(uint)*(byte *)(piVar5 + 5);
  }
  else {
    iVar6 = 0;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  if ((piVar5 == (int *)0x0) || (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar5 + 4))(piVar5);
    bVar1 = 1;
  }
  iVar3 = 0;
  if ((bool)(bVar1 & (piVar5 != (int *)0x0 && puVar2 != (undefined *)0x0))) {
    iVar3 = iVar6;
  }
  if (iVar3 != 0) {
    iVar6 = 0;
    if (0 < iVar7) {
      do {
        piVar5 = *(int **)(iVar3 + iVar6 * 4);
        if ((piVar5 != (int *)0x0) && (iVar4 = (**(code **)(*piVar5 + 8))(piVar5), iVar4 != 0)) {
          (**(code **)(*piVar5 + 4))(piVar5);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar7);
      if (iVar3 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c(iVar3);
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a169298

undefined4 FUN_4a169298(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  piVar4 = *(int **)(param_1 + 0xc);
  if (piVar4 != (int *)0x0) {
    iVar6 = piVar4[2];
    param_2 = (uint)*(byte *)(piVar4 + 5);
  }
  else {
    iVar6 = 0;
  }
  iVar5 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((piVar4 == (int *)0x0) || (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar4 + 4))(piVar4);
    bVar1 = 1;
  }
  iVar2 = 0;
  if ((bool)(bVar1 & (piVar4 != (int *)0x0 && param_2 != 0))) {
    iVar2 = iVar6;
  }
  if (iVar2 != 0) {
    iVar6 = 0;
    if (0 < iVar5) {
      do {
        piVar4 = *(int **)(iVar2 + iVar6 * 4);
        if ((piVar4 != (int *)0x0) && (iVar3 = (**(code **)(*piVar4 + 8))(piVar4), iVar3 != 0)) {
          (**(code **)(*piVar4 + 4))(piVar4);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar5);
      if (iVar2 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c(iVar2);
  }
  return 0;
}



// Address: 4a169390

void FUN_4a169390(undefined4 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  puVar2 = PTR_PTR_4a169494;
  *param_1 = PTR_PTR_4a169494;
  piVar5 = (int *)param_1[3];
  iVar7 = param_1[2];
  if (piVar5 != (int *)0x0) {
    iVar6 = piVar5[2];
    puVar2 = (undefined *)(uint)*(byte *)(piVar5 + 5);
  }
  else {
    iVar6 = 0;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  if ((piVar5 == (int *)0x0) || (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar5 + 4))(piVar5);
    bVar1 = 1;
  }
  iVar3 = 0;
  if ((bool)(bVar1 & (piVar5 != (int *)0x0 && puVar2 != (undefined *)0x0))) {
    iVar3 = iVar6;
  }
  if (iVar3 != 0) {
    iVar6 = 0;
    if (0 < iVar7) {
      do {
        piVar5 = *(int **)(iVar3 + iVar6 * 4);
        if ((piVar5 != (int *)0x0) && (iVar4 = (**(code **)(*piVar5 + 8))(piVar5), iVar4 != 0)) {
          (**(code **)(*piVar5 + 4))(piVar5);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar7);
      if (iVar3 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c(iVar3);
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a169498

undefined4 FUN_4a169498(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar3 = 0;
    if (0 < iVar5) {
      do {
        piVar4 = *(int **)(iVar1 + iVar3 * 4);
        if ((piVar4 != (int *)0x0) && (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 != 0)) {
          (**(code **)(*piVar4 + 4))(piVar4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar5);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c(iVar1);
  }
  return 0;
}



// Address: 4a16951c

/* WARNING: Removing unreachable block (ram,0x4a16957c) */
/* WARNING: Removing unreachable block (ram,0x4a169598) */

int * FUN_4a16951c(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_4a0c6bc0();
  puVar1 = PTR_PTR_4a169620;
  piVar2[2] = 0;
  piVar2[3] = 0;
  *piVar2 = (int)puVar1;
  if (0 < param_2) {
    iVar3 = FUN_4a15e080(param_2 << 2);
    if (iVar3 == 0) {
      iVar3 = FUN_4a1669a8();
    }
    iVar5 = 0;
    do {
      *(undefined4 *)(iVar3 + iVar5 * 4) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2);
    thunk_FUN_4a161570(0x18);
    puVar4 = (undefined4 *)FUN_4a0c0628();
    puVar4[3] = 4;
    puVar4[4] = param_2;
    puVar1 = PTR_PTR_4a169624;
    *puVar4 = PTR_PTR_4a169624;
    puVar4[2] = iVar3;
    *(undefined1 *)(puVar4 + 5) = 1;
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)(puVar1 + 0xc))(puVar4);
    }
    (**(code **)(*piVar2 + 0x1c))(piVar2);
    piVar2[3] = (int)puVar4;
    piVar2[2] = param_2;
  }
  return piVar2;
}



// Address: 4a169628

void FUN_4a169628(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  *param_1 = PTR_PTR_4a1696bc;
  iVar5 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar3 = 0;
    if (0 < iVar5) {
      do {
        piVar4 = *(int **)(iVar1 + iVar3 * 4);
        if ((piVar4 != (int *)0x0) && (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 != 0)) {
          (**(code **)(*piVar4 + 4))(piVar4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar5);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c(iVar1);
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a1696c0

undefined4 FUN_4a1696c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c();
  }
  return 0;
}



// Address: 4a169704

void FUN_4a169704(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a169758;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16975c

undefined4 FUN_4a16975c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c();
  }
  return 0;
}



// Address: 4a1697a0

void FUN_4a1697a0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a1697f4;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a1697f8

undefined4 FUN_4a1697f8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c();
  }
  return 0;
}



// Address: 4a16983c

void FUN_4a16983c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a169890;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a169894

undefined4 FUN_4a169894(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 8);
  piVar4 = *(int **)(param_1 + 0xc);
  if (piVar4 != (int *)0x0) {
    iVar5 = piVar4[2];
    param_2 = (uint)*(byte *)(piVar4 + 5);
  }
  else {
    iVar5 = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((piVar4 == (int *)0x0) || (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar4 + 4))(piVar4);
    bVar1 = 1;
  }
  iVar2 = 0;
  if ((bool)(bVar1 & (piVar4 != (int *)0x0 && param_2 != 0))) {
    iVar2 = iVar5;
  }
  if (iVar2 != 0) {
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
      if (iVar2 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c();
  }
  return 0;
}



// Address: 4a16994c

int * FUN_4a16994c(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_4a0c6bc0();
  puVar1 = PTR_PTR_4a169a14;
  piVar2[2] = 0;
  piVar2[3] = 0;
  *piVar2 = (int)puVar1;
  if (0 < param_2) {
    iVar3 = FUN_4a15e080(param_2 << 2);
    if (iVar3 == 0) {
      iVar3 = FUN_4a1669a8();
    }
    iVar5 = 0;
    do {
      *(undefined4 *)(iVar3 + iVar5 * 4) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2);
    thunk_FUN_4a161570(0x18);
    puVar4 = (undefined4 *)FUN_4a0c0628();
    puVar4[3] = 4;
    puVar4[4] = param_2;
    puVar1 = PTR_PTR_4a169a18;
    *puVar4 = PTR_PTR_4a169a18;
    puVar4[2] = iVar3;
    *(undefined1 *)(puVar4 + 5) = 1;
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)(puVar1 + 0xc))(puVar4);
    }
    (**(code **)(*piVar2 + 0x1c))(piVar2);
    piVar2[3] = (int)puVar4;
    piVar2[2] = param_2;
  }
  return piVar2;
}



// Address: 4a169a1c

void FUN_4a169a1c(undefined4 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  puVar2 = PTR_PTR_4a169ae0;
  *param_1 = PTR_PTR_4a169ae0;
  iVar4 = param_1[2];
  piVar5 = (int *)param_1[3];
  if (piVar5 != (int *)0x0) {
    iVar6 = piVar5[2];
    puVar2 = (undefined *)(uint)*(byte *)(piVar5 + 5);
  }
  else {
    iVar6 = 0;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  if ((piVar5 == (int *)0x0) || (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar5 + 4))(piVar5);
    bVar1 = 1;
  }
  iVar3 = 0;
  if ((bool)(bVar1 & (piVar5 != (int *)0x0 && puVar2 != (undefined *)0x0))) {
    iVar3 = iVar6;
  }
  if (iVar3 != 0) {
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
      if (iVar3 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a169ae4

undefined4 FUN_4a169ae4(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 8);
  piVar4 = *(int **)(param_1 + 0xc);
  if (piVar4 != (int *)0x0) {
    iVar5 = piVar4[2];
    param_2 = (uint)*(byte *)(piVar4 + 5);
  }
  else {
    iVar5 = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((piVar4 == (int *)0x0) || (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar4 + 4))(piVar4);
    bVar1 = 1;
  }
  iVar2 = 0;
  if ((bool)(bVar1 & (piVar4 != (int *)0x0 && param_2 != 0))) {
    iVar2 = iVar5;
  }
  if (iVar2 != 0) {
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
      if (iVar2 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c();
  }
  return 0;
}



// Address: 4a169b9c

void FUN_4a169b9c(undefined4 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  puVar2 = PTR_PTR_4a169c60;
  *param_1 = PTR_PTR_4a169c60;
  iVar4 = param_1[2];
  piVar5 = (int *)param_1[3];
  if (piVar5 != (int *)0x0) {
    iVar6 = piVar5[2];
    puVar2 = (undefined *)(uint)*(byte *)(piVar5 + 5);
  }
  else {
    iVar6 = 0;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  if ((piVar5 == (int *)0x0) || (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar5 + 4))(piVar5);
    bVar1 = 1;
  }
  iVar3 = 0;
  if ((bool)(bVar1 & (piVar5 != (int *)0x0 && puVar2 != (undefined *)0x0))) {
    iVar3 = iVar6;
  }
  if (iVar3 != 0) {
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
      if (iVar3 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a169c64

undefined4 FUN_4a169c64(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c();
  }
  return 0;
}



// Address: 4a169ca8

int * FUN_4a169ca8(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_4a0c6bc0();
  puVar1 = PTR_PTR_4a169d70;
  piVar2[2] = 0;
  piVar2[3] = 0;
  *piVar2 = (int)puVar1;
  if (0 < param_2) {
    iVar3 = FUN_4a15e080(param_2 << 2);
    if (iVar3 == 0) {
      iVar3 = FUN_4a1669a8();
    }
    iVar5 = 0;
    do {
      *(undefined4 *)(iVar3 + iVar5 * 4) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2);
    thunk_FUN_4a161570(0x18);
    puVar4 = (undefined4 *)FUN_4a0c0628();
    puVar4[3] = 4;
    puVar4[4] = param_2;
    puVar1 = PTR_PTR_4a169d74;
    *puVar4 = PTR_PTR_4a169d74;
    puVar4[2] = iVar3;
    *(undefined1 *)(puVar4 + 5) = 1;
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)(puVar1 + 0xc))(puVar4);
    }
    (**(code **)(*piVar2 + 0x1c))(piVar2);
    piVar2[3] = (int)puVar4;
    piVar2[2] = param_2;
  }
  return piVar2;
}



// Address: 4a169d78

void FUN_4a169d78(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a169dcc;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a169dd0

undefined4 FUN_4a169dd0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c();
  }
  return 0;
}



// Address: 4a169e14

int * FUN_4a169e14(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_4a0c6bc0();
  puVar1 = PTR_PTR_4a169edc;
  piVar2[2] = 0;
  piVar2[3] = 0;
  *piVar2 = (int)puVar1;
  if (0 < param_2) {
    iVar3 = FUN_4a15e080(param_2 << 2);
    if (iVar3 == 0) {
      iVar3 = FUN_4a1669a8();
    }
    iVar5 = 0;
    do {
      *(undefined4 *)(iVar3 + iVar5 * 4) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2);
    thunk_FUN_4a161570(0x18);
    puVar4 = (undefined4 *)FUN_4a0c0628();
    puVar4[3] = 4;
    puVar4[4] = param_2;
    puVar1 = PTR_PTR_4a169ee0;
    *puVar4 = PTR_PTR_4a169ee0;
    puVar4[2] = iVar3;
    *(undefined1 *)(puVar4 + 5) = 1;
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)(puVar1 + 0xc))(puVar4);
    }
    (**(code **)(*piVar2 + 0x1c))(piVar2);
    piVar2[3] = (int)puVar4;
    piVar2[2] = param_2;
  }
  return piVar2;
}



// Address: 4a169ee4

void FUN_4a169ee4(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a169f38;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a169f3c

undefined4 FUN_4a169f3c(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 8);
  piVar4 = *(int **)(param_1 + 0xc);
  if (piVar4 != (int *)0x0) {
    iVar5 = piVar4[2];
    param_2 = (uint)*(byte *)(piVar4 + 5);
  }
  else {
    iVar5 = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((piVar4 == (int *)0x0) || (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar4 + 4))(piVar4);
    bVar1 = 1;
  }
  iVar2 = 0;
  if ((bool)(bVar1 & (piVar4 != (int *)0x0 && param_2 != 0))) {
    iVar2 = iVar5;
  }
  if (iVar2 != 0) {
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
      if (iVar2 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c();
  }
  return 0;
}



// Address: 4a169ff4

void FUN_4a169ff4(undefined4 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  puVar2 = PTR_PTR_4a16a0b8;
  *param_1 = PTR_PTR_4a16a0b8;
  iVar4 = param_1[2];
  piVar5 = (int *)param_1[3];
  if (piVar5 != (int *)0x0) {
    iVar6 = piVar5[2];
    puVar2 = (undefined *)(uint)*(byte *)(piVar5 + 5);
  }
  else {
    iVar6 = 0;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  if ((piVar5 == (int *)0x0) || (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar5 + 4))(piVar5);
    bVar1 = 1;
  }
  iVar3 = 0;
  if ((bool)(bVar1 & (piVar5 != (int *)0x0 && puVar2 != (undefined *)0x0))) {
    iVar3 = iVar6;
  }
  if (iVar3 != 0) {
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
      if (iVar3 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16a0bc

undefined4 FUN_4a16a0bc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c();
  }
  return 0;
}



// Address: 4a16a100

void FUN_4a16a100(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a16a154;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16a158

undefined4 FUN_4a16a158(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 8);
  piVar4 = *(int **)(param_1 + 0xc);
  if (piVar4 != (int *)0x0) {
    iVar5 = piVar4[2];
    param_2 = (uint)*(byte *)(piVar4 + 5);
  }
  else {
    iVar5 = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((piVar4 == (int *)0x0) || (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar4 + 4))(piVar4);
    bVar1 = 1;
  }
  iVar2 = 0;
  if ((bool)(bVar1 & (piVar4 != (int *)0x0 && param_2 != 0))) {
    iVar2 = iVar5;
  }
  if (iVar2 != 0) {
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
      if (iVar2 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c();
  }
  return 0;
}



// Address: 4a16a210

void FUN_4a16a210(undefined4 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  puVar2 = PTR_PTR_4a16a2d4;
  *param_1 = PTR_PTR_4a16a2d4;
  iVar4 = param_1[2];
  piVar5 = (int *)param_1[3];
  if (piVar5 != (int *)0x0) {
    iVar6 = piVar5[2];
    puVar2 = (undefined *)(uint)*(byte *)(piVar5 + 5);
  }
  else {
    iVar6 = 0;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  if ((piVar5 == (int *)0x0) || (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar5 + 4))(piVar5);
    bVar1 = 1;
  }
  iVar3 = 0;
  if ((bool)(bVar1 & (piVar5 != (int *)0x0 && puVar2 != (undefined *)0x0))) {
    iVar3 = iVar6;
  }
  if (iVar3 != 0) {
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
      if (iVar3 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16a2d8

undefined4 FUN_4a16a2d8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c();
  }
  return 0;
}



// Address: 4a16a31c

int * FUN_4a16a31c(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_4a0c6bc0();
  puVar1 = PTR_PTR_4a16a3e4;
  piVar2[2] = 0;
  piVar2[3] = 0;
  *piVar2 = (int)puVar1;
  if (0 < param_2) {
    iVar3 = FUN_4a15e080(param_2 << 2);
    if (iVar3 == 0) {
      iVar3 = FUN_4a1669a8();
    }
    iVar5 = 0;
    do {
      *(undefined4 *)(iVar3 + iVar5 * 4) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2);
    thunk_FUN_4a161570(0x18);
    puVar4 = (undefined4 *)FUN_4a0c0628();
    puVar4[3] = 4;
    puVar4[4] = param_2;
    puVar1 = PTR_PTR_4a16a3e8;
    *puVar4 = PTR_PTR_4a16a3e8;
    puVar4[2] = iVar3;
    *(undefined1 *)(puVar4 + 5) = 1;
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)(puVar1 + 0xc))(puVar4);
    }
    (**(code **)(*piVar2 + 0x1c))(piVar2);
    piVar2[3] = (int)puVar4;
    piVar2[2] = param_2;
  }
  return piVar2;
}



// Address: 4a16a3ec

void FUN_4a16a3ec(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a16a440;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16a444

undefined4 FUN_4a16a444(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c();
  }
  return 0;
}



// Address: 4a16a488

void FUN_4a16a488(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a16a4dc;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16a4e0

undefined4 FUN_4a16a4e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c();
  }
  return 0;
}



// Address: 4a16a524

int * FUN_4a16a524(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_4a0c6bc0();
  puVar1 = PTR_PTR_4a16a5ec;
  piVar2[2] = 0;
  piVar2[3] = 0;
  *piVar2 = (int)puVar1;
  if (0 < param_2) {
    iVar3 = FUN_4a15e080(param_2 << 2);
    if (iVar3 == 0) {
      iVar3 = FUN_4a1669a8();
    }
    iVar5 = 0;
    do {
      *(undefined4 *)(iVar3 + iVar5 * 4) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2);
    thunk_FUN_4a161570(0x18);
    puVar4 = (undefined4 *)FUN_4a0c0628();
    puVar4[3] = 4;
    puVar4[4] = param_2;
    puVar1 = PTR_PTR_4a16a5f0;
    *puVar4 = PTR_PTR_4a16a5f0;
    puVar4[2] = iVar3;
    *(undefined1 *)(puVar4 + 5) = 1;
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)(puVar1 + 0xc))(puVar4);
    }
    (**(code **)(*piVar2 + 0x1c))(piVar2);
    piVar2[3] = (int)puVar4;
    piVar2[2] = param_2;
  }
  return piVar2;
}



// Address: 4a16a5f4

void FUN_4a16a5f4(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a16a648;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16a64c

undefined4 FUN_4a16a64c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c();
  }
  return 0;
}



// Address: 4a16a690

void FUN_4a16a690(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a16a6e4;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16a6e8

undefined4 FUN_4a16a6e8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c();
  }
  return 0;
}



// Address: 4a16a72c

void FUN_4a16a72c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a16a780;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16a784

undefined4 FUN_4a16a784(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c();
  }
  return 0;
}



// Address: 4a16a7c8

int * FUN_4a16a7c8(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_4a0c6bc0();
  puVar1 = PTR_PTR_4a16a890;
  piVar2[2] = 0;
  piVar2[3] = 0;
  *piVar2 = (int)puVar1;
  if (0 < param_2) {
    iVar3 = FUN_4a15e080(param_2 << 2);
    if (iVar3 == 0) {
      iVar3 = FUN_4a1669a8();
    }
    iVar5 = 0;
    do {
      *(undefined4 *)(iVar3 + iVar5 * 4) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2);
    thunk_FUN_4a161570(0x18);
    puVar4 = (undefined4 *)FUN_4a0c0628();
    puVar4[3] = 4;
    puVar4[4] = param_2;
    puVar1 = PTR_PTR_4a16a894;
    *puVar4 = PTR_PTR_4a16a894;
    puVar4[2] = iVar3;
    *(undefined1 *)(puVar4 + 5) = 1;
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)(puVar1 + 0xc))(puVar4);
    }
    (**(code **)(*piVar2 + 0x1c))(piVar2);
    piVar2[3] = (int)puVar4;
    piVar2[2] = param_2;
  }
  return piVar2;
}



// Address: 4a16a898

void FUN_4a16a898(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a16a8ec;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16a8f0

undefined4 FUN_4a16a8f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c();
  }
  return 0;
}



// Address: 4a16a934

void FUN_4a16a934(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a16a988;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16a98c

undefined4 FUN_4a16a98c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c();
  }
  return 0;
}



// Address: 4a16a9d0

void FUN_4a16a9d0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a16aa24;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16aa28

undefined4 FUN_4a16aa28(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 8);
  piVar4 = *(int **)(param_1 + 0xc);
  if (piVar4 != (int *)0x0) {
    iVar5 = piVar4[2];
    param_2 = (uint)*(byte *)(piVar4 + 5);
  }
  else {
    iVar5 = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((piVar4 == (int *)0x0) || (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar4 + 4))(piVar4);
    bVar1 = 1;
  }
  iVar2 = 0;
  if ((bool)(bVar1 & (piVar4 != (int *)0x0 && param_2 != 0))) {
    iVar2 = iVar5;
  }
  if (iVar2 != 0) {
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
      if (iVar2 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c();
  }
  return 0;
}



// Address: 4a16aae0

void FUN_4a16aae0(undefined4 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  puVar2 = PTR_PTR_4a16aba4;
  *param_1 = PTR_PTR_4a16aba4;
  iVar4 = param_1[2];
  piVar5 = (int *)param_1[3];
  if (piVar5 != (int *)0x0) {
    iVar6 = piVar5[2];
    puVar2 = (undefined *)(uint)*(byte *)(piVar5 + 5);
  }
  else {
    iVar6 = 0;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  if ((piVar5 == (int *)0x0) || (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar5 + 4))(piVar5);
    bVar1 = 1;
  }
  iVar3 = 0;
  if ((bool)(bVar1 & (piVar5 != (int *)0x0 && puVar2 != (undefined *)0x0))) {
    iVar3 = iVar6;
  }
  if (iVar3 != 0) {
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
      if (iVar3 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16aba8

undefined4 FUN_4a16aba8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c();
  }
  return 0;
}



// Address: 4a16abec

void FUN_4a16abec(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a16ac40;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16ac44

undefined4 FUN_4a16ac44(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 8);
  piVar4 = *(int **)(param_1 + 0xc);
  if (piVar4 != (int *)0x0) {
    iVar5 = piVar4[2];
    param_2 = (uint)*(byte *)(piVar4 + 5);
  }
  else {
    iVar5 = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((piVar4 == (int *)0x0) || (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar4 + 4))(piVar4);
    bVar1 = 1;
  }
  iVar2 = 0;
  if ((bool)(bVar1 & (piVar4 != (int *)0x0 && param_2 != 0))) {
    iVar2 = iVar5;
  }
  if (iVar2 != 0) {
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
      if (iVar2 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c();
  }
  return 0;
}



// Address: 4a16acfc

int * FUN_4a16acfc(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_4a0c6bc0();
  puVar1 = PTR_PTR_4a16adc4;
  piVar2[2] = 0;
  piVar2[3] = 0;
  *piVar2 = (int)puVar1;
  if (0 < param_2) {
    iVar3 = FUN_4a15e080(param_2 << 2);
    if (iVar3 == 0) {
      iVar3 = FUN_4a1669a8();
    }
    iVar5 = 0;
    do {
      *(undefined4 *)(iVar3 + iVar5 * 4) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2);
    thunk_FUN_4a161570(0x18);
    puVar4 = (undefined4 *)FUN_4a0c0628();
    puVar4[3] = 4;
    puVar4[4] = param_2;
    puVar1 = PTR_PTR_4a16adc8;
    *puVar4 = PTR_PTR_4a16adc8;
    puVar4[2] = iVar3;
    *(undefined1 *)(puVar4 + 5) = 1;
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)(puVar1 + 0xc))(puVar4);
    }
    (**(code **)(*piVar2 + 0x1c))(piVar2);
    piVar2[3] = (int)puVar4;
    piVar2[2] = param_2;
  }
  return piVar2;
}



// Address: 4a16adcc

void FUN_4a16adcc(undefined4 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  puVar2 = PTR_PTR_4a16ae90;
  *param_1 = PTR_PTR_4a16ae90;
  iVar4 = param_1[2];
  piVar5 = (int *)param_1[3];
  if (piVar5 != (int *)0x0) {
    iVar6 = piVar5[2];
    puVar2 = (undefined *)(uint)*(byte *)(piVar5 + 5);
  }
  else {
    iVar6 = 0;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  if ((piVar5 == (int *)0x0) || (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar5 + 4))(piVar5);
    bVar1 = 1;
  }
  iVar3 = 0;
  if ((bool)(bVar1 & (piVar5 != (int *)0x0 && puVar2 != (undefined *)0x0))) {
    iVar3 = iVar6;
  }
  if (iVar3 != 0) {
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
      if (iVar3 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16ae94

undefined4 FUN_4a16ae94(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 8);
  piVar4 = *(int **)(param_1 + 0xc);
  if (piVar4 != (int *)0x0) {
    iVar5 = piVar4[2];
    param_2 = (uint)*(byte *)(piVar4 + 5);
  }
  else {
    iVar5 = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((piVar4 == (int *)0x0) || (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar4 + 4))(piVar4);
    bVar1 = 1;
  }
  iVar2 = 0;
  if ((bool)(bVar1 & (piVar4 != (int *)0x0 && param_2 != 0))) {
    iVar2 = iVar5;
  }
  if (iVar2 != 0) {
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
      if (iVar2 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c();
  }
  return 0;
}



// Address: 4a16af4c

void FUN_4a16af4c(undefined4 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  puVar2 = PTR_PTR_4a16b010;
  *param_1 = PTR_PTR_4a16b010;
  iVar4 = param_1[2];
  piVar5 = (int *)param_1[3];
  if (piVar5 != (int *)0x0) {
    iVar6 = piVar5[2];
    puVar2 = (undefined *)(uint)*(byte *)(piVar5 + 5);
  }
  else {
    iVar6 = 0;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  if ((piVar5 == (int *)0x0) || (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar5 + 4))(piVar5);
    bVar1 = 1;
  }
  iVar3 = 0;
  if ((bool)(bVar1 & (piVar5 != (int *)0x0 && puVar2 != (undefined *)0x0))) {
    iVar3 = iVar6;
  }
  if (iVar3 != 0) {
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
      if (iVar3 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16b014

undefined4 FUN_4a16b014(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 8);
  piVar4 = *(int **)(param_1 + 0xc);
  if (piVar4 != (int *)0x0) {
    iVar5 = piVar4[2];
    param_2 = (uint)*(byte *)(piVar4 + 5);
  }
  else {
    iVar5 = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((piVar4 == (int *)0x0) || (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar4 + 4))(piVar4);
    bVar1 = 1;
  }
  iVar2 = 0;
  if ((bool)(bVar1 & (piVar4 != (int *)0x0 && param_2 != 0))) {
    iVar2 = iVar5;
  }
  if (iVar2 != 0) {
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
      if (iVar2 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c();
  }
  return 0;
}



// Address: 4a16b0cc

void FUN_4a16b0cc(undefined4 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  puVar2 = PTR_PTR_4a16b190;
  *param_1 = PTR_PTR_4a16b190;
  iVar4 = param_1[2];
  piVar5 = (int *)param_1[3];
  if (piVar5 != (int *)0x0) {
    iVar6 = piVar5[2];
    puVar2 = (undefined *)(uint)*(byte *)(piVar5 + 5);
  }
  else {
    iVar6 = 0;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  if ((piVar5 == (int *)0x0) || (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar5 + 4))(piVar5);
    bVar1 = 1;
  }
  iVar3 = 0;
  if ((bool)(bVar1 & (piVar5 != (int *)0x0 && puVar2 != (undefined *)0x0))) {
    iVar3 = iVar6;
  }
  if (iVar3 != 0) {
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
      if (iVar3 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16b194

undefined4 FUN_4a16b194(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 8);
  piVar4 = *(int **)(param_1 + 0xc);
  if (piVar4 != (int *)0x0) {
    iVar5 = piVar4[2];
    param_2 = (uint)*(byte *)(piVar4 + 5);
  }
  else {
    iVar5 = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((piVar4 == (int *)0x0) || (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar4 + 4))(piVar4);
    bVar1 = 1;
  }
  iVar2 = 0;
  if ((bool)(bVar1 & (piVar4 != (int *)0x0 && param_2 != 0))) {
    iVar2 = iVar5;
  }
  if (iVar2 != 0) {
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
      if (iVar2 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c();
  }
  return 0;
}



// Address: 4a16b24c

void FUN_4a16b24c(undefined4 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  puVar2 = PTR_PTR_4a16b310;
  *param_1 = PTR_PTR_4a16b310;
  iVar4 = param_1[2];
  piVar5 = (int *)param_1[3];
  if (piVar5 != (int *)0x0) {
    iVar6 = piVar5[2];
    puVar2 = (undefined *)(uint)*(byte *)(piVar5 + 5);
  }
  else {
    iVar6 = 0;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  if ((piVar5 == (int *)0x0) || (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar5 + 4))(piVar5);
    bVar1 = 1;
  }
  iVar3 = 0;
  if ((bool)(bVar1 & (piVar5 != (int *)0x0 && puVar2 != (undefined *)0x0))) {
    iVar3 = iVar6;
  }
  if (iVar3 != 0) {
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
      if (iVar3 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16b314

undefined4 FUN_4a16b314(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c();
  }
  return 0;
}



// Address: 4a16b358

void FUN_4a16b358(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a16b3ac;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16b3b0

undefined4 FUN_4a16b3b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c();
  }
  return 0;
}



// Address: 4a16b3f4

void FUN_4a16b3f4(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a16b448;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16b44c

undefined4 FUN_4a16b44c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c();
  }
  return 0;
}



// Address: 4a16b490

void FUN_4a16b490(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a16b4e4;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16b4e8

undefined4 FUN_4a16b4e8(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 8);
  piVar4 = *(int **)(param_1 + 0xc);
  if (piVar4 != (int *)0x0) {
    iVar5 = piVar4[2];
    param_2 = (uint)*(byte *)(piVar4 + 5);
  }
  else {
    iVar5 = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((piVar4 == (int *)0x0) || (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar4 + 4))(piVar4);
    bVar1 = 1;
  }
  iVar2 = 0;
  if ((bool)(bVar1 & (piVar4 != (int *)0x0 && param_2 != 0))) {
    iVar2 = iVar5;
  }
  if (iVar2 != 0) {
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
      if (iVar2 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c();
  }
  return 0;
}



// Address: 4a16b5a0

undefined4 * FUN_4a16b5a0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a16b5f0;
  puVar1[2] = *(undefined4 *)(param_2 + 8);
  piVar2 = *(int **)(param_2 + 0xc);
  puVar1[3] = piVar2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))();
  }
  *puVar1 = PTR_PTR_4a16b5f4;
  return puVar1;
}



// Address: 4a16b5f8

int * FUN_4a16b5f8(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_4a0c6bc0();
  puVar1 = PTR_PTR_4a16b6b8;
  piVar2[2] = 0;
  piVar2[3] = 0;
  *piVar2 = (int)puVar1;
  if (0 < param_2) {
    iVar3 = FUN_4a15e080(param_2);
    if (iVar3 == 0) {
      iVar3 = FUN_4a1669a8();
    }
    iVar5 = 0;
    do {
      *(undefined1 *)(iVar3 + iVar5) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2);
    thunk_FUN_4a161570(0x18);
    puVar4 = (undefined4 *)FUN_4a0c0628();
    puVar1 = PTR_PTR_4a16b6bc;
    *puVar4 = PTR_PTR_4a16b6bc;
    puVar4[3] = 1;
    puVar4[4] = param_2;
    puVar4[2] = iVar3;
    *(undefined1 *)(puVar4 + 5) = 1;
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)(puVar1 + 0xc))(puVar4);
    }
    (**(code **)(*piVar2 + 0x1c))(piVar2);
    piVar2[3] = (int)puVar4;
    piVar2[2] = param_2;
  }
  return piVar2;
}



// Address: 4a16b6c0

void FUN_4a16b6c0(undefined4 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  puVar2 = PTR_PTR_4a16b784;
  *param_1 = PTR_PTR_4a16b784;
  iVar4 = param_1[2];
  piVar5 = (int *)param_1[3];
  if (piVar5 != (int *)0x0) {
    iVar6 = piVar5[2];
    puVar2 = (undefined *)(uint)*(byte *)(piVar5 + 5);
  }
  else {
    iVar6 = 0;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  if ((piVar5 == (int *)0x0) || (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar5 + 4))(piVar5);
    bVar1 = 1;
  }
  iVar3 = 0;
  if ((bool)(bVar1 & (piVar5 != (int *)0x0 && puVar2 != (undefined *)0x0))) {
    iVar3 = iVar6;
  }
  if (iVar3 != 0) {
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
      if (iVar3 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16b788

undefined4 FUN_4a16b788(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c();
  }
  return 0;
}



// Address: 4a16b7cc

void FUN_4a16b7cc(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = PTR_PTR_4a16b820;
  iVar3 = param_1[2];
  iVar1 = FUN_4a0bcc84(param_1);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      if (iVar1 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16b824

undefined4 FUN_4a16b824(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 8);
  piVar4 = *(int **)(param_1 + 0xc);
  if (piVar4 != (int *)0x0) {
    iVar5 = piVar4[2];
    param_2 = (uint)*(byte *)(piVar4 + 5);
  }
  else {
    iVar5 = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((piVar4 == (int *)0x0) || (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar4 + 4))(piVar4);
    bVar1 = 1;
  }
  iVar2 = 0;
  if ((bool)(bVar1 & (piVar4 != (int *)0x0 && param_2 != 0))) {
    iVar2 = iVar5;
  }
  if (iVar2 != 0) {
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
      if (iVar2 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c();
  }
  return 0;
}



// Address: 4a16b8dc

undefined4 * FUN_4a16b8dc(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a16b92c;
  puVar1[2] = *(undefined4 *)(param_2 + 8);
  piVar2 = *(int **)(param_2 + 0xc);
  puVar1[3] = piVar2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))();
  }
  *puVar1 = PTR_PTR_4a16b930;
  return puVar1;
}



// Address: 4a16b934

int * FUN_4a16b934(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_4a0c6bc0();
  puVar1 = PTR_PTR_4a16b9fc;
  piVar2[2] = 0;
  piVar2[3] = 0;
  *piVar2 = (int)puVar1;
  if (0 < param_2) {
    iVar3 = FUN_4a15e080(param_2 << 2);
    if (iVar3 == 0) {
      iVar3 = FUN_4a1669a8();
    }
    iVar5 = 0;
    do {
      *(undefined4 *)(iVar3 + iVar5 * 4) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2);
    thunk_FUN_4a161570(0x18);
    puVar4 = (undefined4 *)FUN_4a0c0628();
    puVar4[3] = 4;
    puVar4[4] = param_2;
    puVar1 = PTR_PTR_4a16ba00;
    *puVar4 = PTR_PTR_4a16ba00;
    puVar4[2] = iVar3;
    *(undefined1 *)(puVar4 + 5) = 1;
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)(puVar1 + 0xc))(puVar4);
    }
    (**(code **)(*piVar2 + 0x1c))(piVar2);
    piVar2[3] = (int)puVar4;
    piVar2[2] = param_2;
  }
  return piVar2;
}



// Address: 4a16ba04

void FUN_4a16ba04(undefined4 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  puVar2 = PTR_PTR_4a16bac8;
  *param_1 = PTR_PTR_4a16bac8;
  iVar4 = param_1[2];
  piVar5 = (int *)param_1[3];
  if (piVar5 != (int *)0x0) {
    iVar6 = piVar5[2];
    puVar2 = (undefined *)(uint)*(byte *)(piVar5 + 5);
  }
  else {
    iVar6 = 0;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  if ((piVar5 == (int *)0x0) || (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar5 + 4))(piVar5);
    bVar1 = 1;
  }
  iVar3 = 0;
  if ((bool)(bVar1 & (piVar5 != (int *)0x0 && puVar2 != (undefined *)0x0))) {
    iVar3 = iVar6;
  }
  if (iVar3 != 0) {
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
      if (iVar3 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16bacc

undefined4 FUN_4a16bacc(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 8);
  piVar4 = *(int **)(param_1 + 0xc);
  if (piVar4 != (int *)0x0) {
    iVar5 = piVar4[2];
    param_2 = (uint)*(byte *)(piVar4 + 5);
  }
  else {
    iVar5 = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((piVar4 == (int *)0x0) || (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar4 + 4))(piVar4);
    bVar1 = 1;
  }
  iVar2 = 0;
  if ((bool)(bVar1 & (piVar4 != (int *)0x0 && param_2 != 0))) {
    iVar2 = iVar5;
  }
  if (iVar2 != 0) {
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
      if (iVar2 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c();
  }
  return 0;
}



// Address: 4a16bb84

int * FUN_4a16bb84(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_4a0c6bc0();
  puVar1 = PTR_PTR_4a16bc44;
  piVar2[2] = 0;
  piVar2[3] = 0;
  *piVar2 = (int)puVar1;
  if (0 < param_2) {
    iVar3 = FUN_4a15e080(param_2);
    if (iVar3 == 0) {
      iVar3 = FUN_4a1669a8();
    }
    iVar5 = 0;
    do {
      *(undefined1 *)(iVar3 + iVar5) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2);
    thunk_FUN_4a161570(0x18);
    puVar4 = (undefined4 *)FUN_4a0c0628();
    puVar1 = PTR_PTR_4a16bc48;
    *puVar4 = PTR_PTR_4a16bc48;
    puVar4[3] = 1;
    puVar4[4] = param_2;
    puVar4[2] = iVar3;
    *(undefined1 *)(puVar4 + 5) = 1;
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)(puVar1 + 0xc))(puVar4);
    }
    (**(code **)(*piVar2 + 0x1c))(piVar2);
    piVar2[3] = (int)puVar4;
    piVar2[2] = param_2;
  }
  return piVar2;
}



// Address: 4a16bc4c

void FUN_4a16bc4c(undefined4 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  puVar2 = PTR_PTR_4a16bd10;
  *param_1 = PTR_PTR_4a16bd10;
  iVar4 = param_1[2];
  piVar5 = (int *)param_1[3];
  if (piVar5 != (int *)0x0) {
    iVar6 = piVar5[2];
    puVar2 = (undefined *)(uint)*(byte *)(piVar5 + 5);
  }
  else {
    iVar6 = 0;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  if ((piVar5 == (int *)0x0) || (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar5 + 4))(piVar5);
    bVar1 = 1;
  }
  iVar3 = 0;
  if ((bool)(bVar1 & (piVar5 != (int *)0x0 && puVar2 != (undefined *)0x0))) {
    iVar3 = iVar6;
  }
  if (iVar3 != 0) {
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
      if (iVar3 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16bd14

undefined4 FUN_4a16bd14(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 8);
  piVar4 = *(int **)(param_1 + 0xc);
  if (piVar4 != (int *)0x0) {
    iVar5 = piVar4[2];
    param_2 = (uint)*(byte *)(piVar4 + 5);
  }
  else {
    iVar5 = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((piVar4 == (int *)0x0) || (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar4 + 4))(piVar4);
    bVar1 = 1;
  }
  iVar2 = 0;
  if ((bool)(bVar1 & (piVar4 != (int *)0x0 && param_2 != 0))) {
    iVar2 = iVar5;
  }
  if (iVar2 != 0) {
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
      if (iVar2 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c();
  }
  return 0;
}



// Address: 4a16bdcc

undefined4 * FUN_4a16bdcc(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a16be1c;
  puVar1[2] = *(undefined4 *)(param_2 + 8);
  piVar2 = *(int **)(param_2 + 0xc);
  puVar1[3] = piVar2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))();
  }
  *puVar1 = PTR_PTR_4a16be20;
  return puVar1;
}



// Address: 4a16be24

int * FUN_4a16be24(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = (int *)FUN_4a0c6bc0();
  puVar1 = PTR_PTR_4a16beec;
  piVar2[2] = 0;
  piVar2[3] = 0;
  *piVar2 = (int)puVar1;
  if (0 < param_2) {
    iVar3 = FUN_4a15e080(param_2 << 2);
    if (iVar3 == 0) {
      iVar3 = FUN_4a1669a8();
    }
    iVar5 = 0;
    do {
      *(undefined4 *)(iVar3 + iVar5 * 4) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2);
    thunk_FUN_4a161570(0x18);
    puVar4 = (undefined4 *)FUN_4a0c0628();
    puVar4[3] = 4;
    puVar4[4] = param_2;
    puVar1 = PTR_PTR_4a16bef0;
    *puVar4 = PTR_PTR_4a16bef0;
    puVar4[2] = iVar3;
    *(undefined1 *)(puVar4 + 5) = 1;
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)(puVar1 + 0xc))(puVar4);
    }
    (**(code **)(*piVar2 + 0x1c))(piVar2);
    piVar2[3] = (int)puVar4;
    piVar2[2] = param_2;
  }
  return piVar2;
}



// Address: 4a16bef4

void FUN_4a16bef4(undefined4 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  puVar2 = PTR_PTR_4a16bfb8;
  *param_1 = PTR_PTR_4a16bfb8;
  iVar4 = param_1[2];
  piVar5 = (int *)param_1[3];
  if (piVar5 != (int *)0x0) {
    iVar6 = piVar5[2];
    puVar2 = (undefined *)(uint)*(byte *)(piVar5 + 5);
  }
  else {
    iVar6 = 0;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  if ((piVar5 == (int *)0x0) || (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar5 + 4))(piVar5);
    bVar1 = 1;
  }
  iVar3 = 0;
  if ((bool)(bVar1 & (piVar5 != (int *)0x0 && puVar2 != (undefined *)0x0))) {
    iVar3 = iVar6;
  }
  if (iVar3 != 0) {
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
      if (iVar3 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16bfbc

undefined4 FUN_4a16bfbc(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 8);
  piVar4 = *(int **)(param_1 + 0xc);
  if (piVar4 != (int *)0x0) {
    iVar5 = piVar4[2];
    param_2 = (uint)*(byte *)(piVar4 + 5);
  }
  else {
    iVar5 = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((piVar4 == (int *)0x0) || (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar4 + 4))(piVar4);
    bVar1 = 1;
  }
  iVar2 = 0;
  if ((bool)(bVar1 & (piVar4 != (int *)0x0 && param_2 != 0))) {
    iVar2 = iVar5;
  }
  if (iVar2 != 0) {
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
      if (iVar2 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c();
  }
  return 0;
}



// Address: 4a16c074

undefined4 * FUN_4a16c074(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a16c0c4;
  puVar1[2] = *(undefined4 *)(param_2 + 8);
  piVar2 = *(int **)(param_2 + 0xc);
  puVar1[3] = piVar2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))();
  }
  *puVar1 = PTR_PTR_4a16c0c8;
  return puVar1;
}



// Address: 4a16c0cc

int * FUN_4a16c0cc(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  piVar3 = (int *)FUN_4a0c6bc0();
  puVar2 = PTR_PTR_4a16c198;
  piVar3[2] = 0;
  piVar3[3] = 0;
  *piVar3 = (int)puVar2;
  if (0 < param_2) {
    iVar4 = FUN_4a15e080(param_2 << 1);
    if (iVar4 == 0) {
      iVar4 = FUN_4a1669a8();
    }
    iVar6 = 0;
    do {
      iVar1 = iVar6 * 2;
      iVar6 = iVar6 + 1;
      *(undefined2 *)(iVar4 + iVar1) = 0;
    } while (iVar6 < param_2);
    thunk_FUN_4a161570(0x18);
    puVar5 = (undefined4 *)FUN_4a0c0628();
    puVar5[3] = 2;
    puVar5[4] = param_2;
    puVar2 = PTR_PTR_4a16c19c;
    *puVar5 = PTR_PTR_4a16c19c;
    puVar5[2] = iVar4;
    *(undefined1 *)(puVar5 + 5) = 1;
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)(puVar2 + 0xc))(puVar5);
    }
    (**(code **)(*piVar3 + 0x1c))(piVar3);
    piVar3[3] = (int)puVar5;
    piVar3[2] = param_2;
  }
  return piVar3;
}



// Address: 4a16c1a0

void FUN_4a16c1a0(undefined4 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  puVar2 = PTR_PTR_4a16c264;
  *param_1 = PTR_PTR_4a16c264;
  iVar4 = param_1[2];
  piVar5 = (int *)param_1[3];
  if (piVar5 != (int *)0x0) {
    iVar6 = piVar5[2];
    puVar2 = (undefined *)(uint)*(byte *)(piVar5 + 5);
  }
  else {
    iVar6 = 0;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  if ((piVar5 == (int *)0x0) || (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar5 + 4))(piVar5);
    bVar1 = 1;
  }
  iVar3 = 0;
  if ((bool)(bVar1 & (piVar5 != (int *)0x0 && puVar2 != (undefined *)0x0))) {
    iVar3 = iVar6;
  }
  if (iVar3 != 0) {
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
      if (iVar3 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16c268

undefined4 FUN_4a16c268(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 8);
  piVar4 = *(int **)(param_1 + 0xc);
  if (piVar4 != (int *)0x0) {
    iVar5 = piVar4[2];
    param_2 = (uint)*(byte *)(piVar4 + 5);
  }
  else {
    iVar5 = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((piVar4 == (int *)0x0) || (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar4 + 4))(piVar4);
    bVar1 = 1;
  }
  iVar2 = 0;
  if ((bool)(bVar1 & (piVar4 != (int *)0x0 && param_2 != 0))) {
    iVar2 = iVar5;
  }
  if (iVar2 != 0) {
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
      if (iVar2 == 0) {
        return 0;
      }
    }
    FUN_4a14f21c();
  }
  return 0;
}



// Address: 4a16c320

void FUN_4a16c320(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = PTR_PTR_4a16c344;
  return;
}



// Address: 4a16c348

void FUN_4a16c348(undefined4 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  puVar2 = PTR_PTR_4a16c40c;
  *param_1 = PTR_PTR_4a16c40c;
  iVar4 = param_1[2];
  piVar5 = (int *)param_1[3];
  if (piVar5 != (int *)0x0) {
    iVar6 = piVar5[2];
    puVar2 = (undefined *)(uint)*(byte *)(piVar5 + 5);
  }
  else {
    iVar6 = 0;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  if ((piVar5 == (int *)0x0) || (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar5 + 4))(piVar5);
    bVar1 = 1;
  }
  iVar3 = 0;
  if ((bool)(bVar1 & (piVar5 != (int *)0x0 && puVar2 != (undefined *)0x0))) {
    iVar3 = iVar6;
  }
  if (iVar3 != 0) {
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
      if (iVar3 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16c410

void FUN_4a16c410(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (param_5 < 1) {
    return;
  }
  do {
    iVar3 = param_2 + iVar5;
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 8);
    }
    iVar4 = param_4 + iVar5;
    if (*(int *)(param_3 + 0xc) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_3 + 0xc) + 8);
    }
    iVar5 = iVar5 + 1;
    *(undefined1 *)(iVar2 + iVar4) = *(undefined1 *)(iVar1 + iVar3);
  } while (iVar5 < param_5);
  return;
}



// Address: 4a16c470

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a16c470(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  undefined *local_44 [2];
  int local_3c;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  uStack_30 = param_1;
  iStack_2c = param_2;
  uStack_28 = param_3;
  piVar3 = (int *)FUN_4a0c6bc0();
  piVar3[2] = 0;
  piVar3[3] = 0;
  puVar2 = PTR_PTR_4a16c6c0;
  puVar1 = PTR_PTR_4a16c6b8;
  *piVar3 = (int)PTR_PTR_4a16c6bc;
  if (0 < param_2) {
    iVar4 = FUN_4a15e080(param_2 * 0x14);
    if (iVar4 == 0) {
      iVar4 = FUN_4a1669a8();
    }
    iVar10 = 0;
    do {
      puVar5 = (undefined4 *)FUN_4a0c6bc0(local_44);
      puVar5[2] = 0;
      puVar5[3] = 0;
      *puVar5 = puVar2;
      puVar6 = (undefined4 *)FUN_4a0c6bc0(iVar4 + iVar10 * 0x14);
      *puVar6 = puVar1;
      puVar6[2] = puVar5[2];
      piVar7 = (int *)puVar5[3];
      puVar6[3] = piVar7;
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0xc))();
      }
      iVar12 = local_3c;
      *puVar6 = puVar2;
      local_44[0] = puVar2;
      iVar8 = FUN_4a0bcc84(local_44);
      if (iVar8 != 0) {
        iVar9 = 0;
        if (0 < iVar12) {
          do {
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar12);
          if (iVar8 == 0) goto LAB_4a16c56c;
        }
        FUN_4a14f21c(iVar8);
      }
LAB_4a16c56c:
      FUN_4a0c6bf4(local_44);
      iVar10 = iVar10 + 1;
    } while (iVar10 < param_2);
    thunk_FUN_4a161570(0x18);
    puVar5 = (undefined4 *)FUN_4a0c0628();
    puVar5[3] = 0x14;
    puVar5[4] = param_2;
    puVar1 = PTR_PTR_4a16c6c4;
    *puVar5 = PTR_PTR_4a16c6c4;
    puVar5[2] = iVar4;
    *(undefined1 *)(puVar5 + 5) = 1;
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)(puVar1 + 0xc))(puVar5);
    }
    (**(code **)(*piVar3 + 0x1c))(piVar3);
    piVar3[3] = (int)puVar5;
    piVar3[2] = param_2;
  }
  iVar4 = 0;
  if (param_2 < 1) {
    return;
  }
  do {
    iVar10 = 0;
    if (piVar3[3] != 0) {
      iVar10 = *(int *)(piVar3[3] + 8);
    }
    piVar7 = (int *)(iVar10 + iVar4 * 0x14);
    iVar10 = FUN_4a16be24(local_44,uStack_28);
    iVar12 = *(int *)(iVar10 + 8);
    piVar11 = *(int **)(iVar10 + 0xc);
    if (piVar11 != (int *)0x0) {
      (**(code **)(*piVar11 + 0xc))(piVar11);
    }
    (**(code **)(*piVar7 + 0x1c))(piVar7);
    iVar10 = local_3c;
    piVar7[2] = iVar12;
    piVar7[3] = (int)piVar11;
    local_44[0] = puVar2;
    iVar12 = FUN_4a0bcc84(local_44);
    if (iVar12 != 0) {
      iVar8 = 0;
      if (0 < iVar10) {
        do {
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar10);
        if (iVar12 == 0) goto LAB_4a16c698;
      }
      FUN_4a14f21c();
    }
LAB_4a16c698:
    FUN_4a0c6bf4(local_44);
    iVar4 = iVar4 + 1;
    if (param_2 <= iVar4) {
      return;
    }
  } while( true );
}



// Address: 4a16c6c8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a16c6c8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_r1;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_38 [20];
  
  if (param_2 <= *(int *)(param_1 + 0x40)) {
    return;
  }
  iVar1 = FUN_4a16be24(auStack_38);
  uVar9 = *(undefined4 *)(iVar1 + 8);
  piVar8 = *(int **)(iVar1 + 0xc);
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0xc))(piVar8);
  }
  (**(code **)(*(int *)(param_1 + 0x38) + 0x1c))((int *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x40) = uVar9;
  *(int **)(param_1 + 0x44) = piVar8;
  FUN_4a16bef4(auStack_38);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    do {
      if (*(int *)(param_1 + 0x44) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x44) + 8);
      }
      *(undefined4 *)(iVar5 + iVar1 * 4) = 0xffffffff;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x40));
  }
  iVar1 = *(int *)(param_1 + 0x18);
  iVar5 = 0;
  if (iVar1 < 1) {
                    /* WARNING: Could not recover jumptable at 0x4a16c790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  do {
    piVar8 = *(int **)(*(int *)(param_1 + 0x1c) + iVar5 * 4);
    uVar2 = (**(code **)(*piVar8 + 0x18))(piVar8);
    iVar10 = *(int *)(param_1 + 0x40);
    FUN_4a0015f0(uVar2 & 0x7fffffff,iVar10);
    iVar4 = extraout_r1;
    if (extraout_r1 == 0) {
      iVar4 = iVar10;
    }
    iVar7 = extraout_r1;
    while( true ) {
      if (iVar7 == iVar10) {
        iVar7 = 0;
      }
      iVar3 = 0;
      if (*(int *)(param_1 + 0x44) != 0) {
        iVar3 = *(int *)(*(int *)(param_1 + 0x44) + 8);
      }
      uVar6 = *(uint *)(iVar3 + iVar7 * 4);
      if ((int)uVar6 < 0) {
        if (0xfffffffd < uVar6) goto LAB_4a16c860;
      }
      else {
        piVar11 = *(int **)(*(int *)(param_1 + 0x1c) + uVar6 * 4);
        uVar6 = (**(code **)(*piVar11 + 0x18))(piVar11);
        if ((uVar6 == uVar2) &&
           ((piVar8 == piVar11 ||
            (iVar3 = (**(code **)(*piVar8 + 0x14))(piVar8,piVar11), iVar3 != 0))))
        goto LAB_4a16c860;
      }
      if (iVar7 == iVar4 + -1) break;
      iVar7 = iVar7 + 1;
    }
    iVar7 = -1;
LAB_4a16c860:
    iVar4 = 0;
    if (*(int *)(param_1 + 0x44) != 0) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x44) + 8);
    }
    *(int *)(iVar4 + iVar7 * 4) = iVar5;
    iVar5 = iVar5 + 1;
    if (iVar1 <= iVar5) {
      return;
    }
  } while( true );
}



// Address: 4a16c88c

void FUN_4a16c88c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  *param_1 = PTR_PTR_4a16ca8c;
  if (0 < (int)param_1[6]) {
    do {
      piVar4 = *(int **)(param_1[7] + iVar3 * 4);
      *(undefined4 *)(param_1[7] + iVar3 * 4) = 0;
      if ((piVar4 != (int *)0x0) && (iVar1 = (**(code **)(*piVar4 + 8))(piVar4), iVar1 != 0)) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[6]);
  }
  param_1[6] = 0;
  iVar3 = 0;
  if (0 < (int)param_1[0xc]) {
    do {
      piVar4 = *(int **)(param_1[0xd] + iVar3 * 4);
      *(undefined4 *)(param_1[0xd] + iVar3 * 4) = 0;
      if ((piVar4 != (int *)0x0) && (iVar1 = (**(code **)(*piVar4 + 8))(piVar4), iVar1 != 0)) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[0xc]);
  }
  param_1[0xc] = 0;
  iVar3 = FUN_4a16bef4(param_1 + 0xe);
  iVar1 = 0;
  *(undefined4 *)(iVar3 + -0x18) = PTR_PTR_4a16ca90;
  if (0 < *(int *)(iVar3 + -8)) {
    do {
      piVar4 = *(int **)(*(int *)(iVar3 + -4) + iVar1 * 4);
      *(undefined4 *)(*(int *)(iVar3 + -4) + iVar1 * 4) = 0;
      if ((piVar4 != (int *)0x0) && (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 != 0)) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(iVar3 + -8));
  }
  *(undefined4 *)(iVar3 + -8) = 0;
  thunk_FUN_4a161530(*(undefined4 *)(iVar3 + -4));
  iVar3 = FUN_4a0c6bf4((undefined4 *)(iVar3 + -0x18));
  iVar1 = 0;
  *(undefined4 *)(iVar3 + -0x18) = PTR_PTR_4a16ca94;
  if (0 < *(int *)(iVar3 + -8)) {
    do {
      piVar4 = *(int **)(*(int *)(iVar3 + -4) + iVar1 * 4);
      *(undefined4 *)(*(int *)(iVar3 + -4) + iVar1 * 4) = 0;
      if ((piVar4 != (int *)0x0) && (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 != 0)) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(iVar3 + -8));
  }
  *(undefined4 *)(iVar3 + -8) = 0;
  thunk_FUN_4a161530(*(undefined4 *)(iVar3 + -4));
  iVar3 = FUN_4a0c6bf4((undefined4 *)(iVar3 + -0x18));
  *(undefined **)(iVar3 + -8) = PTR_PTR_4a0c0674;
  *(undefined4 *)(iVar3 + -4) = 0xffffffff;
  return;
}



// Address: 4a16ca98

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a16ca98(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_r1;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_38 [20];
  
  if (param_2 <= *(int *)(param_1 + 0x40)) {
    return;
  }
  iVar1 = FUN_4a16be24(auStack_38);
  uVar9 = *(undefined4 *)(iVar1 + 8);
  piVar8 = *(int **)(iVar1 + 0xc);
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0xc))(piVar8);
  }
  (**(code **)(*(int *)(param_1 + 0x38) + 0x1c))((int *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x40) = uVar9;
  *(int **)(param_1 + 0x44) = piVar8;
  FUN_4a16bef4(auStack_38);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    do {
      if (*(int *)(param_1 + 0x44) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x44) + 8);
      }
      *(undefined4 *)(iVar5 + iVar1 * 4) = 0xffffffff;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x40));
  }
  iVar1 = *(int *)(param_1 + 0x18);
  iVar5 = 0;
  if (iVar1 < 1) {
                    /* WARNING: Could not recover jumptable at 0x4a16cb60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  do {
    piVar8 = *(int **)(*(int *)(param_1 + 0x1c) + iVar5 * 4);
    uVar2 = (**(code **)(*piVar8 + 0x18))(piVar8);
    iVar10 = *(int *)(param_1 + 0x40);
    FUN_4a0015f0(uVar2 & 0x7fffffff,iVar10);
    iVar4 = extraout_r1;
    if (extraout_r1 == 0) {
      iVar4 = iVar10;
    }
    iVar7 = extraout_r1;
    while( true ) {
      if (iVar7 == iVar10) {
        iVar7 = 0;
      }
      iVar3 = 0;
      if (*(int *)(param_1 + 0x44) != 0) {
        iVar3 = *(int *)(*(int *)(param_1 + 0x44) + 8);
      }
      uVar6 = *(uint *)(iVar3 + iVar7 * 4);
      if ((int)uVar6 < 0) {
        if (0xfffffffd < uVar6) goto LAB_4a16cc30;
      }
      else {
        piVar11 = *(int **)(*(int *)(param_1 + 0x1c) + uVar6 * 4);
        uVar6 = (**(code **)(*piVar11 + 0x18))(piVar11);
        if ((uVar6 == uVar2) &&
           ((piVar8 == piVar11 ||
            (iVar3 = (**(code **)(*piVar8 + 0x14))(piVar8,piVar11), iVar3 != 0))))
        goto LAB_4a16cc30;
      }
      if (iVar7 == iVar4 + -1) break;
      iVar7 = iVar7 + 1;
    }
    iVar7 = -1;
LAB_4a16cc30:
    iVar4 = 0;
    if (*(int *)(param_1 + 0x44) != 0) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x44) + 8);
    }
    *(int *)(iVar4 + iVar7 * 4) = iVar5;
    iVar5 = iVar5 + 1;
    if (iVar1 <= iVar5) {
      return;
    }
  } while( true );
}



// Address: 4a16cc5c

void FUN_4a16cc5c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  *param_1 = PTR_PTR_4a16ce5c;
  if (0 < (int)param_1[6]) {
    do {
      piVar4 = *(int **)(param_1[7] + iVar3 * 4);
      *(undefined4 *)(param_1[7] + iVar3 * 4) = 0;
      if ((piVar4 != (int *)0x0) && (iVar1 = (**(code **)(*piVar4 + 8))(piVar4), iVar1 != 0)) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[6]);
  }
  param_1[6] = 0;
  iVar3 = 0;
  if (0 < (int)param_1[0xc]) {
    do {
      piVar4 = *(int **)(param_1[0xd] + iVar3 * 4);
      *(undefined4 *)(param_1[0xd] + iVar3 * 4) = 0;
      if ((piVar4 != (int *)0x0) && (iVar1 = (**(code **)(*piVar4 + 8))(piVar4), iVar1 != 0)) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[0xc]);
  }
  param_1[0xc] = 0;
  iVar3 = FUN_4a16bef4(param_1 + 0xe);
  iVar1 = 0;
  *(undefined4 *)(iVar3 + -0x18) = PTR_PTR_4a16ce60;
  if (0 < *(int *)(iVar3 + -8)) {
    do {
      piVar4 = *(int **)(*(int *)(iVar3 + -4) + iVar1 * 4);
      *(undefined4 *)(*(int *)(iVar3 + -4) + iVar1 * 4) = 0;
      if ((piVar4 != (int *)0x0) && (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 != 0)) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(iVar3 + -8));
  }
  *(undefined4 *)(iVar3 + -8) = 0;
  thunk_FUN_4a161530(*(undefined4 *)(iVar3 + -4));
  iVar3 = FUN_4a0c6bf4((undefined4 *)(iVar3 + -0x18));
  iVar1 = 0;
  *(undefined4 *)(iVar3 + -0x18) = PTR_PTR_4a16ce64;
  if (0 < *(int *)(iVar3 + -8)) {
    do {
      piVar4 = *(int **)(*(int *)(iVar3 + -4) + iVar1 * 4);
      *(undefined4 *)(*(int *)(iVar3 + -4) + iVar1 * 4) = 0;
      if ((piVar4 != (int *)0x0) && (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 != 0)) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(iVar3 + -8));
  }
  *(undefined4 *)(iVar3 + -8) = 0;
  thunk_FUN_4a161530(*(undefined4 *)(iVar3 + -4));
  iVar3 = FUN_4a0c6bf4((undefined4 *)(iVar3 + -0x18));
  *(undefined **)(iVar3 + -8) = PTR_PTR_4a0c0674;
  *(undefined4 *)(iVar3 + -4) = 0xffffffff;
  return;
}



// Address: 4a16ce68

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a16ce68(int param_1,int param_2)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int extraout_r1;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_38 [20];
  
  if (param_2 <= *(int *)(param_1 + 0x40)) {
    return;
  }
  piVar2 = (int *)FUN_4a0c6bc0(auStack_38);
  puVar1 = PTR_PTR_4a16d0dc;
  piVar2[2] = 0;
  piVar2[3] = 0;
  *piVar2 = (int)puVar1;
  if (0 < param_2) {
    iVar3 = FUN_4a15e080(param_2 << 2);
    if (iVar3 == 0) {
      iVar3 = FUN_4a1669a8();
    }
    iVar8 = 0;
    do {
      *(undefined4 *)(iVar3 + iVar8 * 4) = 0;
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_2);
    thunk_FUN_4a161570(0x18);
    puVar4 = (undefined4 *)FUN_4a0c0628();
    puVar1 = PTR_PTR_4a16d0e0;
    *puVar4 = PTR_PTR_4a16d0e0;
    puVar4[3] = 4;
    puVar4[4] = param_2;
    puVar4[2] = iVar3;
    *(undefined1 *)(puVar4 + 5) = 1;
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)(puVar1 + 0xc))(puVar4);
    }
    (**(code **)(*piVar2 + 0x1c))(piVar2);
    piVar2[2] = param_2;
    piVar2[3] = (int)puVar4;
  }
  iVar3 = piVar2[2];
  piVar2 = (int *)piVar2[3];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))(piVar2);
  }
  (**(code **)(*(int *)(param_1 + 0x38) + 0x1c))((int *)(param_1 + 0x38));
  *(int *)(param_1 + 0x40) = iVar3;
  *(int **)(param_1 + 0x44) = piVar2;
  FUN_4a16bef4(auStack_38);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    do {
      if (*(int *)(param_1 + 0x44) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(*(int *)(param_1 + 0x44) + 8);
      }
      *(undefined4 *)(iVar8 + iVar3 * 4) = 0xffffffff;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x40));
  }
  iVar3 = *(int *)(param_1 + 0x18);
  iVar8 = 0;
  if (iVar3 < 1) {
                    /* WARNING: Could not recover jumptable at 0x4a16cfe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  do {
    piVar2 = *(int **)(*(int *)(param_1 + 0x1c) + iVar8 * 4);
    uVar5 = (**(code **)(*piVar2 + 0x18))(piVar2);
    iVar11 = *(int *)(param_1 + 0x40);
    FUN_4a0015f0(uVar5 & 0x7fffffff,iVar11);
    iVar7 = extraout_r1;
    if (extraout_r1 == 0) {
      iVar7 = iVar11;
    }
    iVar10 = extraout_r1;
    while( true ) {
      if (iVar10 == iVar11) {
        iVar10 = 0;
      }
      iVar6 = 0;
      if (*(int *)(param_1 + 0x44) != 0) {
        iVar6 = *(int *)(*(int *)(param_1 + 0x44) + 8);
      }
      uVar9 = *(uint *)(iVar6 + iVar10 * 4);
      if ((int)uVar9 < 0) {
        if (0xfffffffd < uVar9) goto LAB_4a16d0b0;
      }
      else {
        piVar12 = *(int **)(*(int *)(param_1 + 0x1c) + uVar9 * 4);
        uVar9 = (**(code **)(*piVar12 + 0x18))(piVar12);
        if ((uVar9 == uVar5) &&
           ((piVar2 == piVar12 ||
            (iVar6 = (**(code **)(*piVar2 + 0x14))(piVar2,piVar12), iVar6 != 0))))
        goto LAB_4a16d0b0;
      }
      if (iVar10 == iVar7 + -1) break;
      iVar10 = iVar10 + 1;
    }
    iVar10 = -1;
LAB_4a16d0b0:
    iVar7 = 0;
    if (*(int *)(param_1 + 0x44) != 0) {
      iVar7 = *(int *)(*(int *)(param_1 + 0x44) + 8);
    }
    *(int *)(iVar7 + iVar10 * 4) = iVar8;
    iVar8 = iVar8 + 1;
    if (iVar3 <= iVar8) {
      return;
    }
  } while( true );
}



// Address: 4a16d0e4

void FUN_4a16d0e4(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  *param_1 = PTR_PTR_4a16d2e4;
  if (0 < (int)param_1[6]) {
    do {
      piVar4 = *(int **)(param_1[7] + iVar3 * 4);
      *(undefined4 *)(param_1[7] + iVar3 * 4) = 0;
      if ((piVar4 != (int *)0x0) && (iVar1 = (**(code **)(*piVar4 + 8))(piVar4), iVar1 != 0)) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[6]);
  }
  param_1[6] = 0;
  iVar3 = 0;
  if (0 < (int)param_1[0xc]) {
    do {
      piVar4 = *(int **)(param_1[0xd] + iVar3 * 4);
      *(undefined4 *)(param_1[0xd] + iVar3 * 4) = 0;
      if ((piVar4 != (int *)0x0) && (iVar1 = (**(code **)(*piVar4 + 8))(piVar4), iVar1 != 0)) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[0xc]);
  }
  param_1[0xc] = 0;
  iVar3 = FUN_4a16bef4(param_1 + 0xe);
  iVar1 = 0;
  *(undefined4 *)(iVar3 + -0x18) = PTR_PTR_4a16d2e8;
  if (0 < *(int *)(iVar3 + -8)) {
    do {
      piVar4 = *(int **)(*(int *)(iVar3 + -4) + iVar1 * 4);
      *(undefined4 *)(*(int *)(iVar3 + -4) + iVar1 * 4) = 0;
      if ((piVar4 != (int *)0x0) && (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 != 0)) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(iVar3 + -8));
  }
  *(undefined4 *)(iVar3 + -8) = 0;
  thunk_FUN_4a161530(*(undefined4 *)(iVar3 + -4));
  iVar3 = FUN_4a0c6bf4((undefined4 *)(iVar3 + -0x18));
  iVar1 = 0;
  *(undefined4 *)(iVar3 + -0x18) = PTR_PTR_4a16d2ec;
  if (0 < *(int *)(iVar3 + -8)) {
    do {
      piVar4 = *(int **)(*(int *)(iVar3 + -4) + iVar1 * 4);
      *(undefined4 *)(*(int *)(iVar3 + -4) + iVar1 * 4) = 0;
      if ((piVar4 != (int *)0x0) && (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 != 0)) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(iVar3 + -8));
  }
  *(undefined4 *)(iVar3 + -8) = 0;
  thunk_FUN_4a161530(*(undefined4 *)(iVar3 + -4));
  iVar3 = FUN_4a0c6bf4((undefined4 *)(iVar3 + -0x18));
  *(undefined **)(iVar3 + -8) = PTR_PTR_4a0c0674;
  *(undefined4 *)(iVar3 + -4) = 0xffffffff;
  return;
}



// Address: 4a16d2f0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a16d2f0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if ((*(int *)(param_1 + 0x10) == iVar2) && (iVar1 = *(int *)(param_1 + 8) + iVar2, iVar2 < iVar1))
  {
    *(int *)(param_1 + 0xc) = iVar1;
    iVar3 = *(int *)(param_1 + 0x14);
    iVar2 = thunk_FUN_4a161570(iVar1 * 4);
    *(int *)(param_1 + 0x14) = iVar2;
    if (iVar2 != 0) {
      iVar2 = 0;
      if (0 < *(int *)(param_1 + 0x10)) {
        do {
          iVar1 = iVar2 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar2 * 4) = *(undefined4 *)(iVar3 + iVar2 * 4)
          ;
          iVar2 = iVar1;
        } while (iVar1 < *(int *)(param_1 + 0x10));
      }
      thunk_FUN_4a161530(iVar3);
    }
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 < *(int *)(param_1 + 0xc)) {
      do {
        iVar1 = iVar2 + 1;
        *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar2 * 4) = 0;
        iVar2 = iVar1;
      } while (iVar1 < *(int *)(param_1 + 0xc));
    }
  }
  iVar2 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar2 + 1;
  piVar4 = *(int **)(*(int *)(param_1 + 0x14) + iVar2 * 4);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))();
  }
  *(int **)(*(int *)(param_1 + 0x14) + iVar2 * 4) = param_2;
  if (piVar4 == (int *)0x0) {
    return;
  }
  iVar2 = (**(code **)(*piVar4 + 8))(piVar4);
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a16d3fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a16d410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar4 + 4))(piVar4);
  return;
}



// Address: 4a16d414

void FUN_4a16d414(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  *param_1 = PTR_PTR_4a16d4a4;
  if (0 < (int)param_1[4]) {
    do {
      piVar3 = *(int **)(param_1[5] + iVar2 * 4);
      *(undefined4 *)(param_1[5] + iVar2 * 4) = 0;
      if ((piVar3 != (int *)0x0) && (iVar1 = (**(code **)(*piVar3 + 8))(piVar3), iVar1 != 0)) {
        (**(code **)(*piVar3 + 4))(piVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[4]);
  }
  param_1[4] = 0;
  thunk_FUN_4a161530(param_1[5]);
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16d4a8

void FUN_4a16d4a8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  *param_1 = PTR_PTR_4a16d538;
  if (0 < (int)param_1[4]) {
    do {
      piVar3 = *(int **)(param_1[5] + iVar2 * 4);
      *(undefined4 *)(param_1[5] + iVar2 * 4) = 0;
      if ((piVar3 != (int *)0x0) && (iVar1 = (**(code **)(*piVar3 + 8))(piVar3), iVar1 != 0)) {
        (**(code **)(*piVar3 + 4))(piVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[4]);
  }
  param_1[4] = 0;
  thunk_FUN_4a161530(param_1[5]);
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16d53c

void FUN_4a16d53c(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x14) + iVar3 * 4);
      *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar3 * 4) = 0;
      if (piVar1 == (int *)0x0) {
        piVar1 = (int *)0x0;
      }
      else {
        piVar1 = (int *)(*(int *)(*piVar1 + -0xc) + (int)piVar1);
      }
      if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 8))(piVar1), iVar2 != 0)) {
        (**(code **)(*piVar1 + 4))(piVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



// Address: 4a16d5cc

void FUN_4a16d5cc(undefined4 *param_1)

{
  *param_1 = PTR_PTR_4a16d5f8;
  FUN_4a16d53c(param_1);
  thunk_FUN_4a161530(param_1[5]);
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16d5fc

void FUN_4a16d5fc(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  *param_1 = PTR_PTR_4a16d68c;
  if (0 < (int)param_1[4]) {
    do {
      piVar3 = *(int **)(param_1[5] + iVar2 * 4);
      *(undefined4 *)(param_1[5] + iVar2 * 4) = 0;
      if ((piVar3 != (int *)0x0) && (iVar1 = (**(code **)(*piVar3 + 8))(piVar3), iVar1 != 0)) {
        (**(code **)(*piVar3 + 4))(piVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[4]);
  }
  param_1[4] = 0;
  thunk_FUN_4a161530(param_1[5]);
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16d7b4

void FUN_4a16d7b4(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  *param_1 = PTR_PTR_4a16d844;
  if (0 < (int)param_1[4]) {
    do {
      piVar3 = *(int **)(param_1[5] + iVar2 * 4);
      *(undefined4 *)(param_1[5] + iVar2 * 4) = 0;
      if ((piVar3 != (int *)0x0) && (iVar1 = (**(code **)(*piVar3 + 8))(piVar3), iVar1 != 0)) {
        (**(code **)(*piVar3 + 4))(piVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[4]);
  }
  param_1[4] = 0;
  thunk_FUN_4a161530(param_1[5]);
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16d848

void FUN_4a16d848(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  *param_1 = PTR_PTR_4a16d8d8;
  if (0 < (int)param_1[4]) {
    do {
      piVar3 = *(int **)(param_1[5] + iVar2 * 4);
      *(undefined4 *)(param_1[5] + iVar2 * 4) = 0;
      if ((piVar3 != (int *)0x0) && (iVar1 = (**(code **)(*piVar3 + 8))(piVar3), iVar1 != 0)) {
        (**(code **)(*piVar3 + 4))(piVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[4]);
  }
  param_1[4] = 0;
  thunk_FUN_4a161530(param_1[5]);
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16d8dc

void FUN_4a16d8dc(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  *param_1 = PTR_PTR_4a16d96c;
  if (0 < (int)param_1[4]) {
    do {
      piVar3 = *(int **)(param_1[5] + iVar2 * 4);
      *(undefined4 *)(param_1[5] + iVar2 * 4) = 0;
      if ((piVar3 != (int *)0x0) && (iVar1 = (**(code **)(*piVar3 + 8))(piVar3), iVar1 != 0)) {
        (**(code **)(*piVar3 + 4))(piVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[4]);
  }
  param_1[4] = 0;
  thunk_FUN_4a161530(param_1[5]);
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16d970

void FUN_4a16d970(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  *param_1 = PTR_PTR_4a16da00;
  if (0 < (int)param_1[4]) {
    do {
      piVar3 = *(int **)(param_1[5] + iVar2 * 4);
      *(undefined4 *)(param_1[5] + iVar2 * 4) = 0;
      if ((piVar3 != (int *)0x0) && (iVar1 = (**(code **)(*piVar3 + 8))(piVar3), iVar1 != 0)) {
        (**(code **)(*piVar3 + 4))(piVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[4]);
  }
  param_1[4] = 0;
  thunk_FUN_4a161530(param_1[5]);
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16da04

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a16da04(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 <= *(int *)(param_1 + 0x10)) {
    return;
  }
  if (*(int *)(param_1 + 0xc) < param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    iVar3 = *(int *)(param_1 + 0x14);
    iVar1 = thunk_FUN_4a161570(param_2 << 2);
    *(int *)(param_1 + 0x14) = iVar1;
    if (iVar1 != 0) {
      iVar1 = 0;
      if (0 < *(int *)(param_1 + 0x10)) {
        do {
          iVar2 = iVar1 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar1 * 4) = *(undefined4 *)(iVar3 + iVar1 * 4)
          ;
          iVar1 = iVar2;
        } while (iVar2 < *(int *)(param_1 + 0x10));
      }
      thunk_FUN_4a161530(iVar3);
    }
    iVar1 = *(int *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0xc)) {
      do {
        iVar3 = iVar1 + 1;
        *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar1 * 4) = 0;
        iVar1 = iVar3;
      } while (iVar3 < *(int *)(param_1 + 0xc));
    }
  }
  if (*(int *)(param_1 + 0x10) < param_2) {
    do {
      iVar1 = *(int *)(param_1 + 0xc);
      if ((*(int *)(param_1 + 0x10) == iVar1) &&
         (iVar3 = *(int *)(param_1 + 8) + iVar1, iVar1 < iVar3)) {
        *(int *)(param_1 + 0xc) = iVar3;
        iVar2 = *(int *)(param_1 + 0x14);
        iVar1 = thunk_FUN_4a161570(iVar3 * 4);
        *(int *)(param_1 + 0x14) = iVar1;
        if (iVar1 != 0) {
          iVar1 = 0;
          if (0 < *(int *)(param_1 + 0x10)) {
            do {
              iVar3 = iVar1 + 1;
              *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar1 * 4) =
                   *(undefined4 *)(iVar2 + iVar1 * 4);
              iVar1 = iVar3;
            } while (iVar3 < *(int *)(param_1 + 0x10));
          }
          thunk_FUN_4a161530(iVar2);
        }
        iVar1 = *(int *)(param_1 + 0x10);
        if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0xc)) {
          do {
            iVar3 = iVar1 + 1;
            *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar1 * 4) = 0;
            iVar1 = iVar3;
          } while (iVar3 < *(int *)(param_1 + 0xc));
        }
      }
      iVar1 = *(int *)(param_1 + 0x10);
      *(int *)(param_1 + 0x10) = iVar1 + 1;
      piVar4 = *(int **)(*(int *)(param_1 + 0x14) + iVar1 * 4);
      *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar1 * 4) = 0;
      if ((piVar4 != (int *)0x0) && (iVar1 = (**(code **)(*piVar4 + 8))(piVar4), iVar1 != 0)) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
    } while (*(int *)(param_1 + 0x10) < param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a16dabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a16dbc8

undefined4 * FUN_4a16dbc8(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a16dc7c;
  puVar1[2] = 10;
  puVar1[4] = 0;
  puVar1[3] = 10;
  puVar1[5] = 0;
  iVar2 = thunk_FUN_4a161570(0x28);
  puVar1[5] = iVar2;
  if (iVar2 != 0) {
    iVar2 = 0;
    if (0 < (int)puVar1[4]) {
      do {
        iVar3 = iVar2 + 1;
        *(undefined4 *)(puVar1[5] + iVar2 * 4) = *(undefined4 *)(iVar2 * 4);
        iVar2 = iVar3;
      } while (iVar3 < (int)puVar1[4]);
    }
    thunk_FUN_4a161530(0);
  }
  iVar2 = puVar1[4];
  if ((int)puVar1[4] < (int)puVar1[3]) {
    do {
      iVar3 = iVar2 + 1;
      *(undefined4 *)(puVar1[5] + iVar2 * 4) = 0;
      iVar2 = iVar3;
    } while (iVar3 < (int)puVar1[3]);
  }
  return puVar1;
}



// Address: 4a16dc80

void FUN_4a16dc80(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  *param_1 = PTR_PTR_4a16dd10;
  if (0 < (int)param_1[4]) {
    do {
      piVar3 = *(int **)(param_1[5] + iVar2 * 4);
      *(undefined4 *)(param_1[5] + iVar2 * 4) = 0;
      if ((piVar3 != (int *)0x0) && (iVar1 = (**(code **)(*piVar3 + 8))(piVar3), iVar1 != 0)) {
        (**(code **)(*piVar3 + 4))(piVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[4]);
  }
  param_1[4] = 0;
  thunk_FUN_4a161530(param_1[5]);
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16dd14

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a16dd14(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if ((*(int *)(param_1 + 0x10) == iVar2) && (iVar1 = *(int *)(param_1 + 8) + iVar2, iVar2 < iVar1))
  {
    *(int *)(param_1 + 0xc) = iVar1;
    iVar3 = *(int *)(param_1 + 0x14);
    iVar2 = thunk_FUN_4a161570(iVar1 * 4);
    *(int *)(param_1 + 0x14) = iVar2;
    if (iVar2 != 0) {
      iVar2 = 0;
      if (0 < *(int *)(param_1 + 0x10)) {
        do {
          iVar1 = iVar2 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar2 * 4) = *(undefined4 *)(iVar3 + iVar2 * 4)
          ;
          iVar2 = iVar1;
        } while (iVar1 < *(int *)(param_1 + 0x10));
      }
      thunk_FUN_4a161530(iVar3);
    }
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 < *(int *)(param_1 + 0xc)) {
      do {
        iVar1 = iVar2 + 1;
        *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar2 * 4) = 0;
        iVar2 = iVar1;
      } while (iVar1 < *(int *)(param_1 + 0xc));
    }
  }
  iVar2 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar2 + 1;
  piVar4 = *(int **)(*(int *)(param_1 + 0x14) + iVar2 * 4);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))();
  }
  *(int **)(*(int *)(param_1 + 0x14) + iVar2 * 4) = param_2;
  if (piVar4 == (int *)0x0) {
    return;
  }
  iVar2 = (**(code **)(*piVar4 + 8))(piVar4);
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a16de20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a16de34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar4 + 4))(piVar4);
  return;
}



// Address: 4a16de38

void FUN_4a16de38(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  *param_1 = PTR_PTR_4a16dec8;
  if (0 < (int)param_1[4]) {
    do {
      piVar3 = *(int **)(param_1[5] + iVar2 * 4);
      *(undefined4 *)(param_1[5] + iVar2 * 4) = 0;
      if ((piVar3 != (int *)0x0) && (iVar1 = (**(code **)(*piVar3 + 8))(piVar3), iVar1 != 0)) {
        (**(code **)(*piVar3 + 4))(piVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[4]);
  }
  param_1[4] = 0;
  thunk_FUN_4a161530(param_1[5]);
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a16decc

void FUN_4a16decc(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if (param_2 == 0) {
      FUN_4a0a6f48(*param_1,0x30);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_4a0a6ed8(*param_1,param_2 * 0x30,0x30);
    }
    *param_1 = uVar1;
  }
  return;
}



// Address: 4a16defa

uint FUN_4a16defa(int *param_1,uint param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  param_3 = param_3 - param_2;
  for (uVar4 = param_2; uVar4 < (uint)(param_1[1] - param_3); uVar4 = uVar4 + 1) {
    iVar3 = *param_1 + uVar4 * 0x30;
    iVar2 = *param_1 + (uVar4 + param_3) * 0x30;
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar2 + 4);
    if (*(int *)(iVar3 + 8) != 0) {
      FUN_4a161530();
    }
    if (*(int *)(iVar2 + 8) == 0) {
      *(undefined4 *)(iVar3 + 8) = 0;
    }
    else {
      puVar1 = (undefined1 *)FUN_4a161570(0xa0);
      *puVar1 = 0;
      *(undefined4 *)(iVar3 + 8) = puVar1;
      FUN_4a0012bc(puVar1,*(undefined4 *)(iVar2 + 8));
    }
    FUN_4a16f83c(iVar3 + 0xc,iVar2 + 0xc);
    FUN_4a16ee0a(iVar3 + 0x1c,iVar2 + 0x1c);
    *(undefined4 *)(iVar3 + 0x2c) = *(undefined4 *)(iVar2 + 0x2c);
  }
  FUN_4a16e03a(param_1,param_1[1] - param_3);
  return param_2;
}



// Address: 4a16df8e

void FUN_4a16df8e(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = param_1[1];
  uVar2 = param_2;
  if (uVar1 < param_2) {
    uVar2 = param_1[2];
    iVar5 = param_2 - uVar1;
    if (uVar2 < uVar1 + iVar5) {
      uVar3 = 2;
      if (0xf < uVar2) {
        uVar3 = uVar2 >> 3;
      }
      FUN_4a16decc(param_1,uVar3 + uVar1 + iVar5);
    }
    for (iVar4 = 0; iVar4 < iVar5; iVar4 = iVar4 + 1) {
      FUN_4a060d40(param_1[1] * 0x30 + iVar4 * 0x30 + *param_1);
    }
    param_1[1] = param_1[1] + iVar5;
  }
  else {
    for (; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
      FUN_4a1652c6(*param_1 + uVar2 * 0x30,**(undefined4 **)(*param_1 + uVar2 * 0x30));
    }
    param_1[1] = param_2;
  }
  return;
}



// Address: 4a16dffe

void FUN_4a16dffe(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = param_1[2];
  if (uVar1 < param_2) {
    uVar3 = 2;
    if (0xf < uVar1) {
      uVar3 = uVar1 >> 3;
    }
    uVar3 = uVar3 + param_2;
    if (uVar1 != uVar3) {
      param_1[2] = uVar3;
      if (uVar3 == 0) {
        FUN_4a0a6f48(*param_1,0x30);
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_4a0a6ed8(*param_1,uVar3 * 0x30,0x30);
      }
      *param_1 = uVar2;
    }
  }
  return;
}



// Address: 4a16e03a

void FUN_4a16e03a(int *param_1,uint param_2)

{
  uint uVar1;
  
  for (uVar1 = param_2; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
    FUN_4a1652c6(*param_1 + uVar1 * 0x30,**(undefined4 **)(*param_1 + uVar1 * 0x30));
  }
  param_1[1] = param_2;
  return;
}



// Address: 4a16e064

void FUN_4a16e064(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if (param_2 == 0) {
      FUN_4a0a6f48(*param_1,0x58);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_4a0a6ed8(*param_1,param_2 * 0x58,0x58);
    }
    *param_1 = uVar1;
  }
  return;
}



// Address: 4a16e092

void FUN_4a16e092(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = param_1[1];
  if (uVar1 < param_2) {
    iVar5 = param_2 - uVar1;
    uVar2 = param_1[2];
    if (uVar2 < uVar1 + iVar5) {
      uVar3 = 2;
      if (0xf < uVar2) {
        uVar3 = uVar2 >> 3;
      }
      FUN_4a16e064(param_1,uVar3 + uVar1 + iVar5);
    }
    for (iVar4 = 0; iVar4 < iVar5; iVar4 = iVar4 + 1) {
      FUN_4a069e28(param_1[1] * 0x58 + iVar4 * 0x58 + *param_1);
    }
    param_1[1] = param_1[1] + iVar5;
  }
  else {
    FUN_4a16e0e8(param_1);
  }
  return;
}



// Address: 4a16e0e8

void FUN_4a16e0e8(int *param_1,uint param_2)

{
  uint uVar1;
  
  for (uVar1 = param_2; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
    FUN_4a1652c6(*param_1 + uVar1 * 0x58,**(undefined4 **)(*param_1 + uVar1 * 0x58));
  }
  param_1[1] = param_2;
  return;
}



// Address: 4a16e112

void FUN_4a16e112(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if (param_2 == 0) {
      FUN_4a0a6f48(*param_1,0x18);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_4a0a6ed8(*param_1,param_2 * 0x18,0x18);
    }
    *param_1 = uVar1;
  }
  return;
}



// Address: 4a16e140

void FUN_4a16e140(int param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 4); uVar1 = uVar1 + 1) {
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// Address: 4a16e152

void FUN_4a16e152(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = param_1[1];
  uVar1 = param_2;
  if (uVar3 < param_2) {
    iVar4 = param_2 - uVar3;
    FUN_4a16e19e(param_1,uVar3 + iVar4);
    for (iVar2 = 0; iVar2 < iVar4; iVar2 = iVar2 + 1) {
      *(undefined1 *)(param_1[1] * 0x18 + iVar2 * 0x18 + *param_1 + 0x14) = 0;
    }
    param_1[1] = param_1[1] + iVar4;
  }
  else {
    for (; uVar1 < uVar3; uVar1 = uVar1 + 1) {
    }
    param_1[1] = param_2;
  }
  return;
}



// Address: 4a16e19e

void FUN_4a16e19e(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < param_2) {
    uVar2 = 2;
    if (0xf < uVar1) {
      uVar2 = uVar1 >> 3;
    }
    FUN_4a16e112(param_1,uVar2 + param_2);
  }
  return;
}



// Address: 4a16e1ba

/* WARNING: Removing unreachable block (ram,0x4a16e1dc) */

int * FUN_4a16e1ba(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfc;
  if (param_2 == 0) {
    param_1[1] = 0;
  }
  else {
    FUN_4a16e112(param_1,param_2 + 2);
    for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
      *(undefined1 *)(param_1[1] * 0x18 + iVar1 * 0x18 + *param_1 + 0x14) = 0;
    }
    param_1[1] = param_1[1] + param_2;
  }
  for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
  }
  param_1[1] = 0;
  return param_1;
}



// Address: 4a16e228

void FUN_4a16e228(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if (param_2 == 0) {
      FUN_4a0a6f48(*param_1,0xc);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_4a0a6ed8(*param_1,param_2 * 0xc,0xc);
    }
    *param_1 = uVar1;
  }
  return;
}



// Address: 4a16e256

void FUN_4a16e256(int param_1,int param_2)

{
  if (*(int *)(param_1 + 8) < param_2) {
    FUN_4a16e228();
  }
  return;
}



// Address: 4a16e268

void FUN_4a16e268(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < param_2) {
    uVar2 = 2;
    if (0xf < uVar1) {
      uVar2 = uVar1 >> 3;
    }
    FUN_4a16e228(param_1,uVar2 + param_2);
  }
  return;
}



// Address: 4a16e284

void FUN_4a16e284(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if (param_2 == 0) {
      FUN_4a0a6f48(*param_1,8);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_4a0a6ed8(*param_1,param_2 << 3,8);
    }
    *param_1 = uVar1;
  }
  return;
}



// Address: 4a16e2b0

void FUN_4a16e2b0(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = param_1[1];
  if (uVar1 < param_2) {
    iVar3 = param_2 - uVar1;
    FUN_4a16e2f2(param_1,uVar1 + iVar3);
    for (iVar2 = 0; iVar2 < iVar3; iVar2 = iVar2 + 1) {
      FUN_4a092080(param_1[1] * 8 + iVar2 * 8 + *param_1);
    }
    param_1[1] = param_1[1] + iVar3;
  }
  else {
    FUN_4a16e30e(param_1);
  }
  return;
}



// Address: 4a16e2f2

void FUN_4a16e2f2(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < param_2) {
    uVar2 = 2;
    if (0xf < uVar1) {
      uVar2 = uVar1 >> 3;
    }
    FUN_4a16e284(param_1,uVar2 + param_2);
  }
  return;
}



// Address: 4a16e30e

void FUN_4a16e30e(int *param_1,uint param_2)

{
  uint uVar1;
  
  for (uVar1 = param_2; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
    FUN_4a09208c(*param_1 + uVar1 * 8);
  }
  param_1[1] = param_2;
  return;
}



// Address: 4a16e332

undefined4 * FUN_4a16e332(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfc;
  FUN_4a16e2b0(param_1);
  FUN_4a16e30e(param_1,0);
  return param_1;
}



// Address: 4a16e360

void FUN_4a16e360(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if (param_2 == 0) {
      FUN_4a0a6f48(*param_1,0x18);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_4a0a6ed8(*param_1,param_2 * 0x18,0x18);
    }
    *param_1 = uVar1;
  }
  return;
}



// Address: 4a16e38e

int FUN_4a16e38e(int *param_1)

{
  return *param_1 + param_1[1] * 0x18 + -0x18;
}



// Address: 4a16e39c

void FUN_4a16e39c(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = param_1[1];
  if (uVar1 < param_2) {
    iVar3 = param_2 - uVar1;
    FUN_4a16e3e2(param_1,uVar1 + iVar3);
    for (iVar2 = 0; iVar2 < iVar3; iVar2 = iVar2 + 1) {
      FUN_4a0a3eb8(param_1[1] * 0x18 + iVar2 * 0x18 + *param_1);
    }
    param_1[1] = param_1[1] + iVar3;
  }
  else {
    FUN_4a16e40e(param_1);
  }
  return;
}



// Address: 4a16e3e2

void FUN_4a16e3e2(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < param_2) {
    uVar2 = 2;
    if (0xf < uVar1) {
      uVar2 = uVar1 >> 3;
    }
    FUN_4a16e360(param_1,uVar2 + param_2);
  }
  return;
}



// Address: 4a16e3fe

void FUN_4a16e3fe(int param_1)

{
  FUN_4a16e40e(param_1,*(int *)(param_1 + 4) + -1);
  return;
}



// Address: 4a16e40e

void FUN_4a16e40e(int *param_1,uint param_2)

{
  uint uVar1;
  
  for (uVar1 = param_2; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
    FUN_4a0a3ec8(*param_1 + uVar1 * 0x18);
  }
  param_1[1] = param_2;
  return;
}



// Address: 4a16e434

void FUN_4a16e434(int *param_1)

{
  FUN_4a16e3e2(param_1,param_1[1] + 1);
  FUN_4a0a3eb8(*param_1 + param_1[1] * 0x18);
  param_1[1] = param_1[1] + 1;
  return;
}



// Address: 4a16e45a

undefined8 FUN_4a16e45a(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_3 - param_2;
  uVar2 = uVar3;
  if ((uint)(param_1[1] - param_3) <= uVar3) {
    uVar2 = param_1[1] - param_3;
  }
  for (uVar1 = 0; uVar1 < uVar2; uVar1 = uVar1 + 1) {
    thunk_FUN_4a000f84(*param_1 + (param_2 + uVar1) * 8,
                       *param_1 + ((param_1[1] - uVar2) + uVar1) * 8,8);
  }
  FUN_4a16e524(param_1,param_1[1] - uVar3);
  return CONCAT44(param_1,param_2);
}



// Address: 4a16e4a4

void FUN_4a16e4a4(undefined4 param_1)

{
  FUN_4a16e524(param_1,0);
  return;
}



// Address: 4a16e4b0

uint FUN_4a16e4b0(int *param_1,uint param_2)

{
  uint uVar1;
  
  for (uVar1 = param_2; uVar1 < param_1[1] - 1U; uVar1 = uVar1 + 1) {
    thunk_FUN_4a000f84(*param_1 + uVar1 * 8,*param_1 + (uVar1 + 1) * 8,8);
  }
  FUN_4a16e524(param_1,param_1[1] + -1);
  return param_2;
}



// Address: 4a16e4ea

void FUN_4a16e4ea(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = param_1[2];
  if (uVar1 < param_2) {
    uVar3 = 2;
    if (0xf < uVar1) {
      uVar3 = uVar1 >> 3;
    }
    uVar3 = uVar3 + param_2;
    if (uVar1 != uVar3) {
      param_1[2] = uVar3;
      if (uVar3 == 0) {
        FUN_4a0a6f48(*param_1,8);
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_4a0a6ed8(*param_1,uVar3 * 8,8);
      }
      *param_1 = uVar2;
    }
  }
  return;
}



// Address: 4a16e524

void FUN_4a16e524(int param_1,uint param_2)

{
  uint uVar1;
  
  for (uVar1 = param_2; uVar1 < *(uint *)(param_1 + 4); uVar1 = uVar1 + 1) {
  }
  *(uint *)(param_1 + 4) = param_2;
  return;
}



// Address: 4a16e534

void FUN_4a16e534(int *param_1,undefined4 param_2)

{
  FUN_4a16e4ea(param_1,param_1[1] + 1);
  thunk_FUN_4a000f84(*param_1 + param_1[1] * 8,param_2,8);
  param_1[1] = param_1[1] + 1;
  return;
}



// Address: 4a16e55e

int * FUN_4a16e55e(int *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfc;
  if (param_2 == 0) {
    FUN_4a16e524(param_1);
  }
  else {
    FUN_4a16e4ea(param_1);
    for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
      FUN_4a0a41ae(param_1[1] * 8 + iVar1 * 8 + *param_1,0,0,0x80,0x100);
    }
    param_1[1] = param_1[1] + param_2;
  }
  FUN_4a16e524(param_1,0);
  return param_1;
}



// Address: 4a16e5c6

undefined4 * FUN_4a16e5c6(undefined4 *param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
  }
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    FUN_4a0a6f48(*param_1,8);
    *param_1 = 0;
  }
  return param_1;
}



// Address: 4a16e5f0

void FUN_4a16e5f0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if (param_2 == 0) {
      FUN_4a0a6f48(*param_1,8);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_4a0a6ed8(*param_1,param_2 << 3,8);
    }
    *param_1 = uVar1;
  }
  return;
}



// Address: 4a16e61c

int FUN_4a16e61c(int *param_1)

{
  return *param_1 + param_1[1] * 8 + -8;
}



// Address: 4a16e628

void FUN_4a16e628(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = param_1[2];
  if (uVar1 < param_2) {
    uVar3 = 2;
    if (0xf < uVar1) {
      uVar3 = uVar1 >> 3;
    }
    uVar3 = uVar3 + param_2;
    if (uVar1 != uVar3) {
      param_1[2] = uVar3;
      if (uVar3 == 0) {
        FUN_4a0a6f48(*param_1,8);
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_4a0a6ed8(*param_1,uVar3 * 8,8);
      }
      *param_1 = uVar2;
    }
  }
  return;
}



// Address: 4a16e662

void FUN_4a16e662(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if (param_2 == 0) {
      FUN_4a0a6f48(*param_1,8);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_4a0a6ed8(*param_1,param_2 << 3,8);
    }
    *param_1 = uVar1;
  }
  return;
}



// Address: 4a16e68e

void FUN_4a16e68e(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < param_2) {
    uVar2 = 2;
    if (0xf < uVar1) {
      uVar2 = uVar1 >> 3;
    }
    FUN_4a16e662(param_1,uVar2 + param_2);
  }
  return;
}



// Address: 4a16e6aa

void FUN_4a16e6aa(int param_1,uint param_2)

{
  uint uVar1;
  
  for (uVar1 = param_2; uVar1 < *(uint *)(param_1 + 4); uVar1 = uVar1 + 1) {
  }
  *(uint *)(param_1 + 4) = param_2;
  return;
}



// Address: 4a16e6ba

undefined4 * FUN_4a16e6ba(undefined4 *param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
  }
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    FUN_4a0a6f48(*param_1,8);
    *param_1 = 0;
  }
  return param_1;
}



// Address: 4a16e6e4

int FUN_4a16e6e4(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  int *piVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint uVar8;
  
  uVar1 = param_3 - param_2;
  uVar2 = uVar1;
  if ((uint)(param_1[1] - param_3) <= uVar1) {
    uVar2 = param_1[1] - param_3;
  }
  for (uVar8 = 0; uVar8 < uVar2; uVar8 = uVar8 + 1) {
    puVar4 = (undefined2 *)(*param_1 + (param_2 + uVar8) * 0x18);
    puVar6 = (undefined2 *)(*param_1 + ((param_1[1] - uVar2) + uVar8) * 0x18);
    *puVar4 = *puVar6;
    puVar4[1] = puVar6[1];
    *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(puVar6 + 2);
    piVar5 = (int *)(puVar4 + 4);
    FUN_4a16e140(piVar5);
    if ((*(uint *)(puVar6 + 6) < *(uint *)(puVar4 + 8) >> 1) ||
       (*(uint *)(puVar4 + 8) < *(uint *)(puVar6 + 6))) {
      FUN_4a16e112(piVar5);
    }
    for (uVar7 = 0; uVar7 < *(uint *)(puVar6 + 6); uVar7 = uVar7 + 1) {
      iVar3 = *(int *)(puVar6 + 4);
      FUN_4a16e19e(piVar5,*(int *)(puVar4 + 6) + 1);
      thunk_FUN_4a001134(*piVar5 + *(int *)(puVar4 + 6) * 0x18,iVar3 + uVar7 * 0x18,0x18);
      *(int *)(puVar4 + 6) = *(int *)(puVar4 + 6) + 1;
    }
  }
  FUN_4a16e870(param_1,param_1[1] - uVar1);
  return param_2;
}



// Address: 4a16e79c

void FUN_4a16e79c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if (param_2 == 0) {
      FUN_4a0a6f48(*param_1,0x18);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_4a0a6ed8(*param_1,param_2 * 0x18,0x18);
    }
    *param_1 = uVar1;
  }
  return;
}



// Address: 4a16e7ca

void FUN_4a16e7ca(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  
  uVar1 = param_1[1];
  if (uVar1 < param_2) {
    iVar2 = param_2 - uVar1;
    FUN_4a16e854(param_1,uVar1 + iVar2,param_3,param_4,param_2,iVar2,param_4);
    for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
      puVar4 = (undefined2 *)(param_1[1] * 0x18 + iVar5 * 0x18 + *param_1);
      *(undefined4 *)(puVar4 + 4) = 0;
      *(undefined4 *)(puVar4 + 6) = 0;
      *(undefined4 *)(puVar4 + 8) = 0;
      puVar3 = puVar4 + 4;
      *(byte *)(puVar4 + 10) = *(byte *)(puVar4 + 10) & 0xfc;
      FUN_4a16e152(puVar3,0);
      FUN_4a16e140(puVar3);
      FUN_4a16e112(puVar3,10);
      *puVar4 = 0x1000;
      puVar4[1] = 0x1000;
      *(undefined4 *)(puVar4 + 2) = 0;
    }
    param_1[1] = param_1[1] + iVar2;
  }
  else {
    FUN_4a16e870(param_1);
  }
  return;
}



// Address: 4a16e854

void FUN_4a16e854(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < param_2) {
    uVar2 = 2;
    if (0xf < uVar1) {
      uVar2 = uVar1 >> 3;
    }
    FUN_4a16e79c(param_1,uVar2 + param_2);
  }
  return;
}



// Address: 4a16e870

void FUN_4a16e870(int *param_1,uint param_2)

{
  uint uVar1;
  
  for (uVar1 = param_2; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
    FUN_4a0d40e8(*param_1 + uVar1 * 0x18);
  }
  param_1[1] = param_2;
  return;
}



// Address: 4a16e896

int * FUN_4a16e896(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfc;
  if (param_2 == 0) {
    FUN_4a16e870(param_1);
  }
  else {
    FUN_4a16e854(param_1);
    for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 1) {
      iVar1 = FUN_4a16e1ba(param_1[1] * 0x18 + iVar2 * 0x18 + *param_1 + 8,0);
      FUN_4a16e112(iVar1,10);
      *(undefined2 *)(iVar1 + -8) = 0x1000;
      *(undefined2 *)(iVar1 + -6) = 0x1000;
      *(undefined4 *)(iVar1 + -4) = 0;
    }
    param_1[1] = param_1[1] + param_2;
  }
  FUN_4a16e870(param_1,0);
  return param_1;
}



// Address: 4a16e918

void FUN_4a16e918(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if (param_2 == 0) {
      FUN_4a0a6f48(*param_1,0x30);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_4a0a6ed8(*param_1,param_2 * 0x30,0x30);
    }
    *param_1 = uVar1;
  }
  return;
}



// Address: 4a16e946

void FUN_4a16e946(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  uVar1 = param_1[2];
  if (uVar1 < (uint)(param_1[1] + param_2)) {
    uVar2 = 2;
    if (0xf < uVar1) {
      uVar2 = uVar1 >> 3;
    }
    FUN_4a16e918(param_1,uVar2 + param_1[1] + param_2);
  }
  for (iVar5 = 0; iVar5 < param_2; iVar5 = iVar5 + 1) {
    puVar4 = (undefined4 *)(param_1[1] * 0x30 + iVar5 * 0x30 + *param_1);
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *(byte *)(puVar4 + 4) = *(byte *)(puVar4 + 4) & 0xfc;
    FUN_4a16e092(puVar4 + 1,0);
    FUN_4a16e0e8(puVar4 + 1,0);
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar3 = puVar4 + 8;
    puVar4[10] = 0;
    *(byte *)(puVar4 + 0xb) = *(byte *)(puVar4 + 0xb) & 0xfc;
    FUN_4a16e7ca(puVar3,0);
    FUN_4a16e870(puVar3,0);
    *puVar4 = 0;
    FUN_4a16e854(puVar3,3);
    puVar4[6] = 0;
  }
  param_1[1] = param_1[1] + param_2;
  return;
}



// Address: 4a16e9f0

void FUN_4a16e9f0(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = param_1[1];
  if (uVar1 < param_2) {
    iVar3 = param_2 - uVar1;
    FUN_4a16ea78(param_1,uVar1 + iVar3,param_3,param_4,param_2,iVar3,param_4);
    for (iVar5 = 0; iVar5 < iVar3; iVar5 = iVar5 + 1) {
      iVar2 = param_1[1] * 0x30 + iVar5 * 0x30 + *param_1;
      *(undefined4 *)(iVar2 + 4) = 0;
      *(undefined4 *)(iVar2 + 8) = 0;
      iVar4 = iVar2 + 4;
      *(undefined4 *)(iVar2 + 0xc) = 0;
      *(byte *)(iVar2 + 0x10) = *(byte *)(iVar2 + 0x10) & 0xfc;
      FUN_4a16e092(iVar4,0);
      FUN_4a16e0e8(iVar4,0);
      iVar2 = FUN_4a16e896(iVar2 + 0x20,0);
      *(undefined4 *)(iVar2 + -0x20) = 0;
      FUN_4a16e854(iVar2,3);
      *(undefined4 *)(iVar2 + -8) = 0;
    }
    param_1[1] = param_1[1] + iVar3;
  }
  else {
    FUN_4a16eab4(param_1);
  }
  return;
}



// Address: 4a16ea78

void FUN_4a16ea78(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = param_1[2];
  if (uVar1 < param_2) {
    uVar3 = 2;
    if (0xf < uVar1) {
      uVar3 = uVar1 >> 3;
    }
    uVar3 = uVar3 + param_2;
    if (uVar1 != uVar3) {
      param_1[2] = uVar3;
      if (uVar3 == 0) {
        FUN_4a0a6f48(*param_1,0x30);
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_4a0a6ed8(*param_1,uVar3 * 0x30,0x30);
      }
      *param_1 = uVar2;
    }
  }
  return;
}



// Address: 4a16eab4

void FUN_4a16eab4(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  
  for (uVar3 = param_2; uVar3 < (uint)param_1[1]; uVar3 = uVar3 + 1) {
    iVar1 = *param_1 + uVar3 * 0x30;
    piVar2 = (int *)(iVar1 + 0x20);
    for (uVar4 = 0; uVar4 < *(uint *)(iVar1 + 0x24); uVar4 = uVar4 + 1) {
      FUN_4a0d40e8(*piVar2 + uVar4 * 0x18);
    }
    if ((*(byte *)(iVar1 + 0x2c) & 1) == 0) {
      FUN_4a0a6f48(*piVar2,0x18);
      *piVar2 = 0;
    }
    piVar2 = (int *)(iVar1 + 4);
    for (uVar4 = 0; uVar4 < *(uint *)(iVar1 + 8); uVar4 = uVar4 + 1) {
      FUN_4a1652c6(*piVar2 + uVar4 * 0x58,**(undefined4 **)(*piVar2 + uVar4 * 0x58));
    }
    if ((*(byte *)(iVar1 + 0x10) & 1) == 0) {
      FUN_4a0a6f48(*piVar2,0x58);
      *piVar2 = 0;
    }
  }
  param_1[1] = param_2;
  return;
}



// Address: 4a16eb34

void FUN_4a16eb34(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = param_1[2];
  if (uVar1 < param_2) {
    uVar3 = 2;
    if (0xf < uVar1) {
      uVar3 = uVar1 >> 3;
    }
    uVar3 = uVar3 + param_2;
    if (uVar1 != uVar3) {
      param_1[2] = uVar3;
      if (uVar3 == 0) {
        FUN_4a0a6f48(*param_1,0xa0);
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_4a0a6ed8(*param_1,uVar3 * 0xa0,0xa0);
      }
      *param_1 = uVar2;
    }
  }
  return;
}



// Address: 4a16eb70

/* WARNING: Removing unreachable block (ram,0x4a16eb92) */

int * FUN_4a16eb70(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfc;
  if (param_2 == 0) {
    param_1[1] = 0;
  }
  else {
    FUN_4a16eb34(param_1);
    for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
      *(undefined1 *)(param_1[1] * 0xa0 + iVar1 * 0xa0 + *param_1) = 0;
    }
    param_1[1] = param_1[1] + param_2;
  }
  for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
  }
  param_1[1] = 0;
  return param_1;
}



// Address: 4a16ebdc

undefined4 * FUN_4a16ebdc(undefined4 *param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
  }
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    FUN_4a0a6f48(*param_1,0xa0);
    *param_1 = 0;
  }
  return param_1;
}



// Address: 4a16ec06

void FUN_4a16ec06(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = param_1[1];
  uVar1 = param_2;
  if (uVar3 < param_2) {
    iVar4 = param_2 - uVar3;
    FUN_4a16ec52(param_1,uVar3 + iVar4);
    for (iVar2 = 0; iVar2 < iVar4; iVar2 = iVar2 + 1) {
      *(undefined1 *)(param_1[1] * 0x28 + iVar2 * 0x28 + *param_1) = 0;
    }
    param_1[1] = param_1[1] + iVar4;
  }
  else {
    for (; uVar1 < uVar3; uVar1 = uVar1 + 1) {
    }
    param_1[1] = param_2;
  }
  return;
}



// Address: 4a16ec52

void FUN_4a16ec52(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = param_1[2];
  if (uVar1 < param_2) {
    uVar3 = 2;
    if (0xf < uVar1) {
      uVar3 = uVar1 >> 3;
    }
    uVar3 = uVar3 + param_2;
    if (uVar1 != uVar3) {
      param_1[2] = uVar3;
      if (uVar3 == 0) {
        FUN_4a0a6f48(*param_1,0x28);
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_4a0a6ed8(*param_1,uVar3 * 0x28,0x28);
      }
      *param_1 = uVar2;
    }
  }
  return;
}



// Address: 4a16ec8e

undefined4 * FUN_4a16ec8e(undefined4 *param_1)

{
  uint uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfc;
  FUN_4a16ec06(param_1);
  for (uVar1 = 0; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
  }
  param_1[1] = 0;
  return param_1;
}



// Address: 4a16ecc2

undefined4 * FUN_4a16ecc2(undefined4 *param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
  }
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    FUN_4a0a6f48(*param_1,0x28);
    *param_1 = 0;
  }
  return param_1;
}



// Address: 4a16ecec

void FUN_4a16ecec(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if (param_2 == 0) {
      FUN_4a0a6f48(*param_1,8);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_4a0a6ed8(*param_1,param_2 << 3,8);
    }
    *param_1 = uVar1;
  }
  return;
}



// Address: 4a16ed18

void FUN_4a16ed18(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint local_18;
  
  if (*PTR_DAT_4a16eda0 == '\0') {
    local_18 = *(uint *)(param_1 + 4);
    FUN_4a03c12c(&local_18,1,0x20,4);
  }
  else {
    local_18 = param_4;
    FUN_4a03c12c(&local_18,1,0x20,4);
    uVar2 = local_18;
    if (*(uint *)(param_1 + 4) < local_18) {
      FUN_4a16ecec(param_1,local_18);
    }
    uVar1 = *(uint *)(param_1 + 4);
    uVar4 = uVar2;
    if (uVar1 < uVar2) {
      iVar5 = uVar2 - uVar1;
      uVar2 = *(uint *)(param_1 + 8);
      if (uVar2 < uVar1 + iVar5) {
        uVar4 = 2;
        if (0xf < uVar2) {
          uVar4 = uVar2 >> 3;
        }
        FUN_4a16ecec(param_1,uVar4 + uVar1 + iVar5);
      }
      for (iVar3 = 0; iVar3 < iVar5; iVar3 = iVar3 + 1) {
      }
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar5;
    }
    else {
      for (; uVar4 < uVar1; uVar4 = uVar4 + 1) {
      }
      *(uint *)(param_1 + 4) = uVar2;
    }
    FUN_4a16ecec(param_1,*(undefined4 *)(param_1 + 4));
  }
  return;
}



// Address: 4a16eda4

void FUN_4a16eda4(int param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 4); uVar1 = uVar1 + 1) {
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// Address: 4a16edb6

void FUN_4a16edb6(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)(param_1 + 4);
  uVar1 = param_2;
  if (uVar3 < param_2) {
    iVar4 = param_2 - uVar3;
    FUN_4a16edee(param_1,uVar3 + iVar4);
    for (iVar2 = 0; iVar2 < iVar4; iVar2 = iVar2 + 1) {
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar4;
  }
  else {
    for (; uVar1 < uVar3; uVar1 = uVar1 + 1) {
    }
    *(uint *)(param_1 + 4) = param_2;
  }
  return;
}



// Address: 4a16edee

void FUN_4a16edee(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < param_2) {
    uVar2 = 2;
    if (0xf < uVar1) {
      uVar2 = uVar1 >> 3;
    }
    FUN_4a16ecec(param_1,uVar2 + param_2);
  }
  return;
}



// Address: 4a16ee0a

void FUN_4a16ee0a(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  FUN_4a16eda4();
  if (((uint)param_2[1] < (uint)param_1[2] >> 1) || ((uint)param_1[2] < (uint)param_2[1])) {
    FUN_4a16ecec(param_1);
  }
  for (uVar3 = 0; uVar3 < (uint)param_2[1]; uVar3 = uVar3 + 1) {
    puVar4 = (undefined4 *)(*param_2 + uVar3 * 8);
    FUN_4a16edee(param_1,param_1[1] + 1);
    puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
    uVar2 = puVar4[1];
    *puVar1 = *puVar4;
    puVar1[1] = uVar2;
    param_1[1] = param_1[1] + 1;
  }
  return;
}



// Address: 4a16ee5c

/* WARNING: Removing unreachable block (ram,0x4a16ee7e) */

undefined4 * FUN_4a16ee5c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfc;
  if (param_2 == 0) {
    param_1[1] = 0;
  }
  else {
    iVar3 = param_2 + 2;
    if (iVar3 != 0) {
      param_1[2] = iVar3;
      uVar1 = FUN_4a0a6ed8(0,iVar3 * 8,8);
      *param_1 = uVar1;
    }
    for (iVar3 = 0; iVar3 < param_2; iVar3 = iVar3 + 1) {
    }
    param_1[1] = param_1[1] + param_2;
  }
  for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
  }
  param_1[1] = 0;
  return param_1;
}



// Address: 4a16eec2

void FUN_4a16eec2(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if (param_2 == 0) {
      FUN_4a0a6f48(*param_1,8);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_4a0a6ed8(*param_1,param_2 << 3,8);
    }
    *param_1 = uVar1;
  }
  return;
}



// Address: 4a16eeee

void FUN_4a16eeee(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = param_1[1];
  uVar1 = param_2;
  if (uVar4 < param_2) {
    iVar5 = param_2 - uVar4;
    FUN_4a16ef38(param_1,uVar4 + iVar5);
    for (iVar2 = 0; iVar2 < iVar5; iVar2 = iVar2 + 1) {
      puVar3 = (undefined4 *)(param_1[1] * 8 + iVar2 * 8 + *param_1);
      *puVar3 = 0;
      puVar3[1] = 0;
    }
    param_1[1] = param_1[1] + iVar5;
  }
  else {
    for (; uVar1 < uVar4; uVar1 = uVar1 + 1) {
    }
    param_1[1] = param_2;
  }
  return;
}



// Address: 4a16ef38

void FUN_4a16ef38(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < param_2) {
    uVar2 = 2;
    if (0xf < uVar1) {
      uVar2 = uVar1 >> 3;
    }
    FUN_4a16eec2(param_1,uVar2 + param_2);
  }
  return;
}



// Address: 4a16ef54

void FUN_4a16ef54(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  FUN_4a16ef38(param_1,param_1[1] + 1);
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  uVar2 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  param_1[1] = param_1[1] + 1;
  return;
}



// Address: 4a16ef7a

void FUN_4a16ef7a(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if (param_2 == 0) {
      FUN_4a0a6f48(*param_1,8);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_4a0a6ed8(*param_1,param_2 << 3,8);
    }
    *param_1 = uVar1;
  }
  return;
}



// Address: 4a16efa6

void FUN_4a16efa6(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < param_2) {
    uVar2 = 2;
    if (0xf < uVar1) {
      uVar2 = uVar1 >> 3;
    }
    FUN_4a16ef7a(param_1,uVar2 + param_2);
  }
  return;
}



// Address: 4a16efc2

void FUN_4a16efc2(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  FUN_4a16efa6(param_1,param_1[1] + 1);
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  uVar2 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  param_1[1] = param_1[1] + 1;
  return;
}



// Address: 4a16efe8

/* WARNING: Removing unreachable block (ram,0x4a16f00a) */

int * FUN_4a16efe8(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfc;
  if (param_2 == 0) {
    param_1[1] = 0;
  }
  else {
    FUN_4a16efa6(param_1);
    for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
      puVar3 = (undefined4 *)(param_1[1] * 8 + iVar1 * 8 + *param_1);
      *puVar3 = 0;
      puVar3[1] = 0;
    }
    param_1[1] = param_1[1] + param_2;
  }
  for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
  }
  param_1[1] = 0;
  return param_1;
}



// Address: 4a16f052

void FUN_4a16f052(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if (param_2 == 0) {
      FUN_4a0a6f48(*param_1,8);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_4a0a6ed8(*param_1,param_2 << 3,8);
    }
    *param_1 = uVar1;
  }
  return;
}



// Address: 4a16f07e

void FUN_4a16f07e(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < param_2) {
    uVar2 = 2;
    if (0xf < uVar1) {
      uVar2 = uVar1 >> 3;
    }
    FUN_4a16f052(param_1,uVar2 + param_2);
  }
  return;
}



// Address: 4a16f09a

void FUN_4a16f09a(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  FUN_4a16f07e(param_1,param_1[1] + 1);
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  uVar2 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  param_1[1] = param_1[1] + 1;
  return;
}



// Address: 4a16f0c0

/* WARNING: Removing unreachable block (ram,0x4a16f0e2) */

int * FUN_4a16f0c0(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfc;
  if (param_2 == 0) {
    param_1[1] = 0;
  }
  else {
    FUN_4a16f07e(param_1);
    for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
      puVar3 = (undefined4 *)(param_1[1] * 8 + iVar1 * 8 + *param_1);
      *puVar3 = 0;
      puVar3[1] = 0;
    }
    param_1[1] = param_1[1] + param_2;
  }
  for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
  }
  param_1[1] = 0;
  return param_1;
}



// Address: 4a16f12a

void FUN_4a16f12a(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if (param_2 == 0) {
      FUN_4a0a6f48(*param_1,8);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_4a0a6ed8(*param_1,param_2 << 3,8);
    }
    *param_1 = uVar1;
  }
  return;
}



// Address: 4a16f156

void FUN_4a16f156(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < param_2) {
    uVar2 = 2;
    if (0xf < uVar1) {
      uVar2 = uVar1 >> 3;
    }
    FUN_4a16f12a(param_1,uVar2 + param_2);
  }
  return;
}



// Address: 4a16f172

void FUN_4a16f172(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  FUN_4a16f156(param_1,param_1[1] + 1);
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  uVar2 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  param_1[1] = param_1[1] + 1;
  return;
}



// Address: 4a16f198

/* WARNING: Removing unreachable block (ram,0x4a16f1ba) */

int * FUN_4a16f198(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfc;
  if (param_2 == 0) {
    param_1[1] = 0;
  }
  else {
    FUN_4a16f156(param_1);
    for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
      puVar3 = (undefined4 *)(param_1[1] * 8 + iVar1 * 8 + *param_1);
      *puVar3 = 0;
      puVar3[1] = 0;
    }
    param_1[1] = param_1[1] + param_2;
  }
  for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
  }
  param_1[1] = 0;
  return param_1;
}



// Address: 4a16f202

void FUN_4a16f202(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if (param_2 == 0) {
      FUN_4a0a6f48(*param_1,8);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_4a0a6ed8(*param_1,param_2 << 3,8);
    }
    *param_1 = uVar1;
  }
  return;
}



// Address: 4a16f22e

void FUN_4a16f22e(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < param_2) {
    uVar2 = 2;
    if (0xf < uVar1) {
      uVar2 = uVar1 >> 3;
    }
    FUN_4a16f202(param_1,uVar2 + param_2);
  }
  return;
}



// Address: 4a16f24a

void FUN_4a16f24a(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  FUN_4a16f22e(param_1,param_1[1] + 1);
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  uVar2 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  param_1[1] = param_1[1] + 1;
  return;
}



// Address: 4a16f270

/* WARNING: Removing unreachable block (ram,0x4a16f292) */

int * FUN_4a16f270(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfc;
  if (param_2 == 0) {
    param_1[1] = 0;
  }
  else {
    FUN_4a16f22e(param_1);
    for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
      puVar3 = (undefined4 *)(param_1[1] * 8 + iVar1 * 8 + *param_1);
      *puVar3 = 0;
      puVar3[1] = 0;
    }
    param_1[1] = param_1[1] + param_2;
  }
  for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
  }
  param_1[1] = 0;
  return param_1;
}



// Address: 4a16f2da

void FUN_4a16f2da(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if (param_2 == 0) {
      FUN_4a0a6f48(*param_1,8);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_4a0a6ed8(*param_1,param_2 << 3,8);
    }
    *param_1 = uVar1;
  }
  return;
}



// Address: 4a16f306

void FUN_4a16f306(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < param_2) {
    uVar2 = 2;
    if (0xf < uVar1) {
      uVar2 = uVar1 >> 3;
    }
    FUN_4a16f2da(param_1,uVar2 + param_2);
  }
  return;
}



// Address: 4a16f322

void FUN_4a16f322(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  FUN_4a16f306(param_1,param_1[1] + 1);
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  uVar2 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  param_1[1] = param_1[1] + 1;
  return;
}



// Address: 4a16f348

/* WARNING: Removing unreachable block (ram,0x4a16f36a) */

int * FUN_4a16f348(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfc;
  if (param_2 == 0) {
    param_1[1] = 0;
  }
  else {
    FUN_4a16f306(param_1);
    for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
      puVar3 = (undefined4 *)(param_1[1] * 8 + iVar1 * 8 + *param_1);
      *puVar3 = 0;
      puVar3[1] = 0;
    }
    param_1[1] = param_1[1] + param_2;
  }
  for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
  }
  param_1[1] = 0;
  return param_1;
}



// Address: 4a16f3b2

void FUN_4a16f3b2(int param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 4); uVar1 = uVar1 + 1) {
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// Address: 4a16f3c4

/* WARNING: Removing unreachable block (ram,0x4a16f3e4) */

undefined4 * FUN_4a16f3c4(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfc;
  if (param_2 == 0) {
    param_1[1] = 0;
  }
  else {
    iVar2 = param_2 + 2;
    if (iVar2 != 0) {
      param_1[2] = iVar2;
      uVar1 = FUN_4a0a6ed8(0,iVar2 * 8,8);
      *param_1 = uVar1;
    }
    for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 1) {
    }
    param_1[1] = param_1[1] + param_2;
  }
  FUN_4a16f3b2(param_1);
  return param_1;
}



// Address: 4a16f41e

void FUN_4a16f41e(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if (param_2 == 0) {
      FUN_4a0a6f48(*param_1,0x28);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_4a0a6ed8(*param_1,param_2 * 0x28,0x28);
    }
    *param_1 = uVar1;
  }
  return;
}



// Address: 4a16f44c

void FUN_4a16f44c(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar4 = param_1[1];
  uVar1 = param_2;
  if (uVar4 < param_2) {
    uVar1 = param_1[2];
    iVar6 = param_2 - uVar4;
    if (uVar1 < uVar4 + iVar6) {
      uVar5 = 2;
      if (0xf < uVar1) {
        uVar5 = uVar1 >> 3;
      }
      FUN_4a16f41e(param_1,uVar5 + uVar4 + iVar6);
    }
    for (iVar2 = 0; iVar2 < iVar6; iVar2 = iVar2 + 1) {
      iVar3 = param_1[1] * 0x28 + iVar2 * 0x28 + *param_1;
      *(undefined4 *)(iVar3 + 4) = 0;
      *(undefined1 *)(iVar3 + 0x14) = 0;
    }
    param_1[1] = param_1[1] + iVar6;
  }
  else {
    for (; uVar1 < uVar4; uVar1 = uVar1 + 1) {
    }
    param_1[1] = param_2;
  }
  return;
}



// Address: 4a16f4aa

void FUN_4a16f4aa(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if (param_2 == 0) {
      FUN_4a0a6f48(*param_1,8);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_4a0a6ed8(*param_1,param_2 << 3,8);
    }
    *param_1 = uVar1;
  }
  return;
}



// Address: 4a16f4d6

int FUN_4a16f4d6(int *param_1)

{
  return *param_1 + param_1[1] * 8 + -8;
}



// Address: 4a16f4e2

void FUN_4a16f4e2(int param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 4); uVar1 = uVar1 + 1) {
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// Address: 4a16f4f4

void FUN_4a16f4f4(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)(param_1 + 4);
  uVar1 = param_2;
  if (uVar3 < param_2) {
    iVar4 = param_2 - uVar3;
    FUN_4a16f52c(param_1,uVar3 + iVar4);
    for (iVar2 = 0; iVar2 < iVar4; iVar2 = iVar2 + 1) {
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar4;
  }
  else {
    for (; uVar1 < uVar3; uVar1 = uVar1 + 1) {
    }
    *(uint *)(param_1 + 4) = param_2;
  }
  return;
}



// Address: 4a16f52c

void FUN_4a16f52c(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < param_2) {
    uVar2 = 2;
    if (0xf < uVar1) {
      uVar2 = uVar1 >> 3;
    }
    FUN_4a16f4aa(param_1,uVar2 + param_2);
  }
  return;
}



// Address: 4a16f548

void FUN_4a16f548(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if (param_2 == 0) {
      FUN_4a0a6f48(*param_1,0xc);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_4a0a6ed8(*param_1,param_2 * 0xc,0xc);
    }
    *param_1 = uVar1;
  }
  return;
}



// Address: 4a16f576

void FUN_4a16f576(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = param_1[1];
  uVar1 = param_2;
  if (uVar2 < param_2) {
    uVar1 = param_1[2];
    iVar5 = param_2 - uVar2;
    if (uVar1 < uVar2 + iVar5) {
      uVar3 = 2;
      if (0xf < uVar1) {
        uVar3 = uVar1 >> 3;
      }
      FUN_4a16f548(param_1,uVar3 + uVar2 + iVar5);
    }
    for (iVar4 = 0; iVar4 < iVar5; iVar4 = iVar4 + 1) {
      FUN_4a1023a6(param_1[1] * 0xc + iVar4 * 0xc + *param_1);
    }
    param_1[1] = param_1[1] + iVar5;
  }
  else {
    for (; uVar1 < uVar2; uVar1 = uVar1 + 1) {
    }
    param_1[1] = param_2;
  }
  return;
}



// Address: 4a16f5d2

undefined4 * FUN_4a16f5d2(undefined4 *param_1)

{
  uint uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfc;
  FUN_4a16f576(param_1);
  for (uVar1 = 0; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
  }
  param_1[1] = 0;
  return param_1;
}



// Address: 4a16f606

void FUN_4a16f606(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if (param_2 == 0) {
      FUN_4a0a6f48(*param_1,6);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_4a0a6ed8(*param_1,param_2 * 6,6);
    }
    *param_1 = uVar1;
  }
  return;
}



// Address: 4a16f634

void FUN_4a16f634(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint local_10;
  
  if (*PTR_DAT_4a16f684 == '\0') {
    local_10 = *(uint *)(param_1 + 4);
    FUN_4a03c12c(&local_10,1,0x20,4);
  }
  else {
    local_10 = param_4;
    FUN_4a03c12c(&local_10,1,0x20,4);
    uVar1 = local_10;
    if (*(uint *)(param_1 + 4) < local_10) {
      FUN_4a16f606(param_1,local_10);
    }
    FUN_4a16f688(param_1,uVar1);
    FUN_4a16f606(param_1,*(undefined4 *)(param_1 + 4));
  }
  return;
}



// Address: 4a16f688

void FUN_4a16f688(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)(param_1 + 4);
  uVar1 = param_2;
  if (uVar3 < param_2) {
    iVar4 = param_2 - uVar3;
    FUN_4a16f6c0(param_1,uVar3 + iVar4);
    for (iVar2 = 0; iVar2 < iVar4; iVar2 = iVar2 + 1) {
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar4;
  }
  else {
    for (; uVar1 < uVar3; uVar1 = uVar1 + 1) {
    }
    *(uint *)(param_1 + 4) = param_2;
  }
  return;
}



// Address: 4a16f6c0

void FUN_4a16f6c0(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < param_2) {
    uVar2 = 2;
    if (0xf < uVar1) {
      uVar2 = uVar1 >> 3;
    }
    FUN_4a16f606(param_1,uVar2 + param_2);
  }
  return;
}



// Address: 4a16f6dc

undefined4 * FUN_4a16f6dc(undefined4 *param_1)

{
  uint uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfc;
  FUN_4a16f688(param_1);
  for (uVar1 = 0; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
  }
  param_1[1] = 0;
  return param_1;
}



// Address: 4a16f710

void FUN_4a16f710(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if (param_2 == 0) {
      FUN_4a0a6f48(*param_1,4);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_4a0a6ed8(*param_1,param_2 << 2,4);
    }
    *param_1 = uVar1;
  }
  return;
}



// Address: 4a16f73c

uint FUN_4a16f73c(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  param_3 = param_3 - param_2;
  for (uVar1 = param_2; uVar1 < (uint)(param_1[1] - param_3); uVar1 = uVar1 + 1) {
    *(undefined4 *)(*param_1 + uVar1 * 4) = *(undefined4 *)(*param_1 + (uVar1 + param_3) * 4);
  }
  FUN_4a16f7ba(param_1,param_1[1] - param_3);
  return param_2;
}



// Address: 4a16f76c

void FUN_4a16f76c(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 < param_2) {
    iVar3 = param_2 - uVar1;
    FUN_4a16f79e(param_1,uVar1 + iVar3);
    for (iVar2 = 0; iVar2 < iVar3; iVar2 = iVar2 + 1) {
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar3;
  }
  else {
    FUN_4a16f7ba(param_1);
  }
  return;
}



// Address: 4a16f79e

void FUN_4a16f79e(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < param_2) {
    uVar2 = 2;
    if (0xf < uVar1) {
      uVar2 = uVar1 >> 3;
    }
    FUN_4a16f710(param_1,uVar2 + param_2);
  }
  return;
}



// Address: 4a16f7ba

void FUN_4a16f7ba(int param_1,uint param_2)

{
  uint uVar1;
  
  for (uVar1 = param_2; uVar1 < *(uint *)(param_1 + 4); uVar1 = uVar1 + 1) {
  }
  *(uint *)(param_1 + 4) = param_2;
  return;
}



// Address: 4a16f7ca

void FUN_4a16f7ca(int *param_1,undefined4 *param_2)

{
  FUN_4a16f79e(param_1,param_1[1] + 1);
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}



// Address: 4a16f7f0

undefined4 * FUN_4a16f7f0(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfc;
  if (param_2 == 0) {
    FUN_4a16f7ba(param_1);
  }
  else {
    FUN_4a16f79e(param_1);
    for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
    }
    param_1[1] = param_1[1] + param_2;
  }
  FUN_4a16f7ba(param_1,0);
  return param_1;
}



// Address: 4a16f83c

void FUN_4a16f83c(int param_1,int *param_2)

{
  uint uVar1;
  
  FUN_4a16f7ba(param_1,0);
  if (((uint)param_2[1] < *(uint *)(param_1 + 8) >> 1) ||
     (*(uint *)(param_1 + 8) < (uint)param_2[1])) {
    FUN_4a16f710(param_1);
  }
  for (uVar1 = 0; uVar1 < (uint)param_2[1]; uVar1 = uVar1 + 1) {
    FUN_4a16f7ca(param_1,*param_2 + uVar1 * 4);
  }
  return;
}



// Address: 4a16f87a

void FUN_4a16f87a(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = param_1[2];
  if (uVar1 < param_2) {
    uVar3 = 2;
    if (0xf < uVar1) {
      uVar3 = uVar1 >> 3;
    }
    uVar3 = uVar3 + param_2;
    if (uVar1 != uVar3) {
      param_1[2] = uVar3;
      if (uVar3 == 0) {
        FUN_4a0a6f48(*param_1,4);
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_4a0a6ed8(*param_1,uVar3 * 4,4);
      }
      *param_1 = uVar2;
    }
  }
  return;
}



// Address: 4a16f8b4

void FUN_4a16f8b4(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if (param_2 == 0) {
      FUN_4a0a6f48(*param_1,4);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_4a0a6ed8(*param_1,param_2 << 2,4);
    }
    *param_1 = uVar1;
  }
  return;
}



// Address: 4a16f8e0

void FUN_4a16f8e0(int *param_1,undefined4 *param_2)

{
  FUN_4a16f906(param_1,param_1[1] + 1);
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}



// Address: 4a16f906

void FUN_4a16f906(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < param_2) {
    uVar2 = 2;
    if (0xf < uVar1) {
      uVar2 = uVar1 >> 3;
    }
    FUN_4a16f8b4(param_1,uVar2 + param_2);
  }
  return;
}



// Address: 4a16f922

void FUN_4a16f922(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = param_1[2];
  if (uVar1 < param_2) {
    uVar3 = 2;
    if (0xf < uVar1) {
      uVar3 = uVar1 >> 3;
    }
    uVar3 = uVar3 + param_2;
    if (uVar1 != uVar3) {
      param_1[2] = uVar3;
      if (uVar3 == 0) {
        FUN_4a0a6f48(*param_1,4);
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_4a0a6ed8(*param_1,uVar3 * 4,4);
      }
      *param_1 = uVar2;
    }
  }
  return;
}



// Address: 4a16f95c

void FUN_4a16f95c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if (param_2 == 0) {
      FUN_4a0a6f48(*param_1,4);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_4a0a6ed8(*param_1,param_2 << 2,4);
    }
    *param_1 = uVar1;
  }
  return;
}



// Address: 4a16f988

void FUN_4a16f988(int param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 4); uVar1 = uVar1 + 1) {
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// Address: 4a16f99a

void FUN_4a16f99a(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < param_2) {
    uVar2 = 2;
    if (0xf < uVar1) {
      uVar2 = uVar1 >> 3;
    }
    FUN_4a16f95c(param_1,uVar2 + param_2);
  }
  return;
}



// Address: 4a16f9b6

void FUN_4a16f9b6(int *param_1,undefined4 *param_2)

{
  FUN_4a16f99a(param_1,param_1[1] + 1);
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}



// Address: 4a16f9dc

void FUN_4a16f9dc(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if (param_2 == 0) {
      FUN_4a0a6f48(*param_1,4);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_4a0a6ed8(*param_1,param_2 << 2,4);
    }
    *param_1 = uVar1;
  }
  return;
}



// Address: 4a16fa08

void FUN_4a16fa08(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < param_2) {
    uVar2 = 2;
    if (0xf < uVar1) {
      uVar2 = uVar1 >> 3;
    }
    FUN_4a16f9dc(param_1,uVar2 + param_2);
  }
  return;
}



// Address: 4a16fa24

void FUN_4a16fa24(int param_1,uint param_2)

{
  uint uVar1;
  
  for (uVar1 = param_2; uVar1 < *(uint *)(param_1 + 4); uVar1 = uVar1 + 1) {
  }
  *(uint *)(param_1 + 4) = param_2;
  return;
}



// Address: 4a16fa34

undefined4 * FUN_4a16fa34(undefined4 *param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
  }
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    FUN_4a0a6f48(*param_1,4);
    *param_1 = 0;
  }
  return param_1;
}



// Address: 4a16fa5e

void FUN_4a16fa5e(int param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 4); uVar1 = uVar1 + 1) {
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// Address: 4a16fa70

void FUN_4a16fa70(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = param_1[2];
  if (uVar1 < param_2) {
    uVar3 = 2;
    if (0xf < uVar1) {
      uVar3 = uVar1 >> 3;
    }
    uVar3 = uVar3 + param_2;
    if (uVar1 != uVar3) {
      param_1[2] = uVar3;
      if (uVar3 == 0) {
        FUN_4a0a6f48(*param_1,4);
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_4a0a6ed8(*param_1,uVar3 * 4,4);
      }
      *param_1 = uVar2;
    }
  }
  return;
}



// Address: 4a16faaa

/* WARNING: Removing unreachable block (ram,0x4a16faca) */

undefined4 * FUN_4a16faaa(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfc;
  if (param_2 == 0) {
    param_1[1] = 0;
  }
  else {
    FUN_4a16fa70(param_1);
    for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
    }
    param_1[1] = param_1[1] + param_2;
  }
  FUN_4a16fa5e(param_1);
  return param_1;
}



// Address: 4a16fafa

undefined4 * FUN_4a16fafa(undefined4 *param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
  }
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    FUN_4a0a6f48(*param_1,4);
    *param_1 = 0;
  }
  return param_1;
}



// Address: 4a16fb24

void FUN_4a16fb24(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if (param_2 == 0) {
      FUN_4a0a6f48(*param_1,4);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_4a0a6ed8(*param_1,param_2 << 2,4);
    }
    *param_1 = uVar1;
  }
  return;
}



// Address: 4a16fb50

void FUN_4a16fb50(int param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 4); uVar1 = uVar1 + 1) {
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// Address: 4a16fb62

void FUN_4a16fb62(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = *(uint *)(param_1 + 4);
  uVar1 = param_2;
  if (uVar3 < param_2) {
    uVar1 = *(uint *)(param_1 + 8);
    iVar5 = param_2 - uVar3;
    if (uVar1 < uVar3 + iVar5) {
      uVar4 = 2;
      if (0xf < uVar1) {
        uVar4 = uVar1 >> 3;
      }
      FUN_4a16fb24(param_1,uVar4 + uVar3 + iVar5);
    }
    for (iVar2 = 0; iVar2 < iVar5; iVar2 = iVar2 + 1) {
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar5;
  }
  else {
    for (; uVar1 < uVar3; uVar1 = uVar1 + 1) {
    }
    *(uint *)(param_1 + 4) = param_2;
  }
  return;
}



// Address: 4a16fbaa

void FUN_4a16fbaa(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if (param_2 == 0) {
      FUN_4a0a6f48(*param_1,1);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_4a0a6ed8(*param_1,param_2,1);
    }
    *param_1 = uVar1;
  }
  return;
}



// Address: 4a16fbd4

void FUN_4a16fbd4(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = *(uint *)(param_1 + 4);
  uVar1 = param_2;
  if (uVar3 < param_2) {
    uVar1 = *(uint *)(param_1 + 8);
    iVar5 = param_2 - uVar3;
    if (uVar1 < uVar3 + iVar5) {
      uVar4 = 2;
      if (0xf < uVar1) {
        uVar4 = uVar1 >> 3;
      }
      FUN_4a16fbaa(param_1,uVar4 + uVar3 + iVar5);
    }
    for (iVar2 = 0; iVar2 < iVar5; iVar2 = iVar2 + 1) {
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar5;
  }
  else {
    for (; uVar1 < uVar3; uVar1 = uVar1 + 1) {
    }
    *(uint *)(param_1 + 4) = param_2;
  }
  return;
}



// Address: 4a16fc1c

void FUN_4a16fc1c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if (param_2 == 0) {
      FUN_4a0a6f48(*param_1,4);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_4a0a6ed8(*param_1,param_2 << 2,4);
    }
    *param_1 = uVar1;
  }
  return;
}



// Address: 4a16fc48

void FUN_4a16fc48(int param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 4); uVar1 = uVar1 + 1) {
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// Address: 4a16fc5a

void FUN_4a16fc5a(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < param_2) {
    uVar2 = 2;
    if (0xf < uVar1) {
      uVar2 = uVar1 >> 3;
    }
    FUN_4a16fc1c(param_1,uVar2 + param_2);
  }
  return;
}



// Address: 4a16fc76

void FUN_4a16fc76(int *param_1,undefined4 *param_2)

{
  FUN_4a16fc5a(param_1,param_1[1] + 1);
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}



// Address: 4a16fc9c

void FUN_4a16fc9c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if (param_2 == 0) {
      FUN_4a0a6f48(*param_1,4);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_4a0a6ed8(*param_1,param_2 << 2,4);
    }
    *param_1 = uVar1;
  }
  return;
}



// Address: 4a16fcc8

void FUN_4a16fcc8(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint local_18;
  
  if (*PTR_DAT_4a16fd40 == '\0') {
    local_18 = *(uint *)(param_1 + 4);
    FUN_4a03c12c(&local_18,1,0x20,4);
  }
  else {
    local_18 = param_4;
    FUN_4a03c12c(&local_18,1,0x20,4);
    uVar1 = local_18;
    if (*(uint *)(param_1 + 4) < local_18) {
      FUN_4a16fc9c(param_1,local_18);
    }
    uVar2 = *(uint *)(param_1 + 4);
    uVar4 = uVar1;
    if (uVar2 < uVar1) {
      iVar5 = uVar1 - uVar2;
      FUN_4a16fd44(param_1,uVar2 + iVar5);
      for (iVar3 = 0; iVar3 < iVar5; iVar3 = iVar3 + 1) {
      }
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar5;
    }
    else {
      for (; uVar4 < uVar2; uVar4 = uVar4 + 1) {
      }
      *(uint *)(param_1 + 4) = uVar1;
    }
    FUN_4a16fc9c(param_1,*(undefined4 *)(param_1 + 4));
  }
  return;
}



// Address: 4a16fd44

void FUN_4a16fd44(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < param_2) {
    uVar2 = 2;
    if (0xf < uVar1) {
      uVar2 = uVar1 >> 3;
    }
    FUN_4a16fc9c(param_1,uVar2 + param_2);
  }
  return;
}



// Address: 4a16fd60

void FUN_4a16fd60(int *param_1,undefined4 *param_2)

{
  FUN_4a16fd44(param_1,param_1[1] + 1);
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}



// Address: 4a16fd86

/* WARNING: Removing unreachable block (ram,0x4a16fda8) */

undefined4 * FUN_4a16fd86(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfc;
  if (param_2 == 0) {
    param_1[1] = 0;
  }
  else {
    FUN_4a16fd44(param_1);
    for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
    }
    param_1[1] = param_1[1] + param_2;
  }
  for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
  }
  param_1[1] = 0;
  return param_1;
}



// Address: 4a16fde0

undefined4 * FUN_4a16fde0(undefined4 *param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
  }
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    FUN_4a0a6f48(*param_1,4);
    *param_1 = 0;
  }
  return param_1;
}



// Address: 4a16fe0a

void FUN_4a16fe0a(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if (param_2 == 0) {
      FUN_4a0a6f48(*param_1,2);
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_4a0a6ed8(*param_1,param_2 << 1,2);
    }
    *param_1 = uVar1;
  }
  return;
}



// Address: 4a16fe36

void FUN_4a16fe36(int param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 4); uVar1 = uVar1 + 1) {
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// Address: 4a16fe48

void FUN_4a16fe48(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)(param_1 + 4);
  uVar1 = param_2;
  if (uVar3 < param_2) {
    iVar4 = param_2 - uVar3;
    FUN_4a16fe80(param_1,uVar3 + iVar4);
    for (iVar2 = 0; iVar2 < iVar4; iVar2 = iVar2 + 1) {
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar4;
  }
  else {
    for (; uVar1 < uVar3; uVar1 = uVar1 + 1) {
    }
    *(uint *)(param_1 + 4) = param_2;
  }
  return;
}



// Address: 4a16fe80

void FUN_4a16fe80(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < param_2) {
    uVar2 = 2;
    if (0xf < uVar1) {
      uVar2 = uVar1 >> 3;
    }
    FUN_4a16fe0a(param_1,uVar2 + param_2);
  }
  return;
}



// Address: 4a16fe9c

int FUN_4a16fe9c(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_2 + 8);
  if (param_3 < iVar5) {
    uVar1 = iVar5 - param_3 & 1;
  }
  else {
    uVar1 = 0;
  }
  iVar2 = uVar1 + param_3;
  iVar6 = 0;
  if (param_3 < iVar2) {
    do {
      iVar3 = iVar6;
      if (*(int *)(param_2 + 0xc) != 0) {
        iVar3 = *(int *)(*(int *)(param_2 + 0xc) + 8);
      }
      if (*(char *)(iVar3 + param_3) == param_1) {
        return param_3;
      }
      param_3 = param_3 + 1;
    } while (param_3 < iVar2);
  }
  if (iVar2 < iVar5) {
    iVar3 = *(int *)(param_2 + 0xc);
    do {
      iVar4 = iVar6;
      if (iVar3 != 0) {
        iVar4 = *(int *)(iVar3 + 8);
      }
      if (*(char *)(iVar4 + iVar2) == param_1) {
        return iVar2;
      }
      iVar4 = iVar6;
      if (iVar3 != 0) {
        iVar4 = *(int *)(iVar3 + 8);
      }
      if (*(char *)(iVar4 + iVar2 + 1) == param_1) {
        return iVar2 + 1;
      }
      iVar2 = iVar2 + 2;
    } while (iVar2 < iVar5);
  }
  return -1;
}



// Address: 4a16ff5c

int FUN_4a16ff5c(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_2 + 8);
  if (param_3 < iVar5) {
    uVar1 = iVar5 - param_3 & 1;
  }
  else {
    uVar1 = 0;
  }
  iVar2 = uVar1 + param_3;
  iVar6 = 0;
  if (param_3 < iVar2) {
    do {
      iVar3 = iVar6;
      if (*(int *)(param_2 + 0xc) != 0) {
        iVar3 = *(int *)(*(int *)(param_2 + 0xc) + 8);
      }
      if (*(short *)(iVar3 + param_3 * 2) == param_1) {
        return param_3;
      }
      param_3 = param_3 + 1;
    } while (param_3 < iVar2);
  }
  if (iVar2 < iVar5) {
    iVar3 = *(int *)(param_2 + 0xc);
    do {
      iVar4 = iVar6;
      if (iVar3 != 0) {
        iVar4 = *(int *)(iVar3 + 8);
      }
      if (*(short *)(iVar4 + iVar2 * 2) == param_1) {
        return iVar2;
      }
      iVar4 = iVar6;
      if (iVar3 != 0) {
        iVar4 = *(int *)(iVar3 + 8);
      }
      if (*(short *)(iVar4 + (iVar2 + 1) * 2) == param_1) {
        return iVar2 + 1;
      }
      iVar2 = iVar2 + 2;
    } while (iVar2 < iVar5);
  }
  return -1;
}



// Address: 4a170028

undefined4 FUN_4a170028(undefined4 param_1)

{
  FUN_4a0012bc();
  return param_1;
}



// Address: 4a170040

undefined4 * FUN_4a170040(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  undefined4 unaff_r4;
  
  thunk_FUN_4a161570(0x14);
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0c70cc;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  uVar2 = FUN_4a04d4d0(0,s_java_util_Hashtable_4a170058,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a17006c

undefined4 FUN_4a17006c(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int extraout_r1;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  iVar9 = 0;
  uVar1 = (**(code **)(*param_2 + 0x18))(param_2);
  iVar8 = *(int *)(param_1 + 0x40);
  FUN_4a0015f0(uVar1 & 0x7fffffff,iVar8);
  iVar4 = extraout_r1;
  if (extraout_r1 == 0) {
    iVar4 = iVar8;
  }
  iVar5 = extraout_r1;
  do {
    if (iVar5 == iVar8) {
      iVar5 = 0;
    }
    if (*(int *)(param_1 + 0x44) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0x44) + 8);
    }
    iVar2 = *(int *)(iVar2 + iVar5 * 4);
    if (iVar2 < 0) {
      if (iVar2 == -1) {
LAB_4a170154:
        iVar5 = -1;
LAB_4a170158:
        if (-1 < iVar5) {
          if (*(int *)(param_1 + 0x44) != 0) {
            iVar9 = *(int *)(*(int *)(param_1 + 0x44) + 8);
          }
          uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x34) + *(int *)(iVar9 + iVar5 * 4) * 4);
          if ((param_2 != (int *)0x0) && (iVar4 = (**(code **)(*param_2 + 8))(param_2), iVar4 != 0))
          {
            (**(code **)(*param_2 + 4))(param_2);
          }
          return uVar6;
        }
        if ((param_2 != (int *)0x0) && (iVar4 = (**(code **)(*param_2 + 8))(param_2), iVar4 != 0)) {
          (**(code **)(*param_2 + 4))(param_2);
        }
        return 0;
      }
    }
    else {
      piVar7 = *(int **)(*(int *)(param_1 + 0x1c) + iVar2 * 4);
      uVar3 = (**(code **)(*piVar7 + 0x18))(piVar7);
      if ((uVar3 == uVar1) &&
         ((param_2 == piVar7 || (iVar2 = (**(code **)(*param_2 + 0x14))(param_2,piVar7), iVar2 != 0)
          ))) goto LAB_4a170158;
    }
    if (iVar5 == iVar4 + -1) goto LAB_4a170154;
    iVar5 = iVar5 + 1;
  } while( true );
}



// Address: 4a170200

void FUN_4a170200(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a17022c;
  return;
}



// Address: 4a170238

undefined4 * FUN_4a170238(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  undefined4 unaff_r4;
  
  thunk_FUN_4a161570(0x14);
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0c70cc;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  uVar2 = FUN_4a04d4d0(0,s_java_util_Hashtable_4a170250,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a170264

void FUN_4a170264(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a170290;
  return;
}



// Address: 4a17029c

undefined4 * FUN_4a17029c(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  undefined4 unaff_r4;
  
  thunk_FUN_4a161570(0x14);
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0c70cc;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  uVar2 = FUN_4a04d4d0(0,s_java_util_Hashtable_4a1702b4,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a1702c8

void FUN_4a1702c8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a1702f4;
  return;
}



// Address: 4a170300

undefined4 * FUN_4a170300(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  undefined4 unaff_r4;
  
  thunk_FUN_4a161570(0x14);
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0c70cc;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  uVar2 = FUN_4a04d4d0(0,s_java_util_Stack_4a170318,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a170328

void FUN_4a170328(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a170354;
  return;
}



// Address: 4a170360

undefined4 * FUN_4a170360(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  undefined4 unaff_r4;
  
  thunk_FUN_4a161570(0x14);
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0c70cc;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  uVar2 = FUN_4a04d4d0(0,s_java_util_Vector_4a170378,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a17038c

void FUN_4a17038c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a1703b8;
  return;
}



// Address: 4a1703c4

undefined4 * FUN_4a1703c4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  undefined4 unaff_r4;
  
  thunk_FUN_4a161570(0x14);
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0c70cc;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  uVar2 = FUN_4a04d4d0(0,s_java_util_Vector_4a1703dc,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a1703f0

void FUN_4a1703f0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a17041c;
  return;
}



// Address: 4a170428

undefined4 * FUN_4a170428(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  undefined4 unaff_r4;
  
  thunk_FUN_4a161570(0x14);
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0c70cc;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  uVar2 = FUN_4a04d4d0(0,s_java_util_Vector_4a170440,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a170454

void FUN_4a170454(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a170480;
  return;
}



// Address: 4a17048c

undefined4 * FUN_4a17048c(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  undefined4 unaff_r4;
  
  thunk_FUN_4a161570(0x14);
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0c70cc;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  uVar2 = FUN_4a04d4d0(0,s_java_util_Vector_4a1704a4,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a1704b8

void FUN_4a1704b8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a1704e4;
  return;
}



// Address: 4a1704f0

undefined4 * FUN_4a1704f0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  undefined4 unaff_r4;
  
  thunk_FUN_4a161570(0x14);
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0c70cc;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  uVar2 = FUN_4a04d4d0(0,s_java_util_Vector_4a170508,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a17051c

void FUN_4a17051c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a170548;
  return;
}



// Address: 4a170554

undefined4 * FUN_4a170554(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  undefined4 unaff_r4;
  
  thunk_FUN_4a161570(0x14);
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0c70cc;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  uVar2 = FUN_4a04d4d0(0,s_java_util_Vector_4a17056c,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a170580

void FUN_4a170580(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a1705ac;
  return;
}



// Address: 4a1705b8

undefined4 * FUN_4a1705b8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  undefined4 unaff_r4;
  
  thunk_FUN_4a161570(0x14);
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0c70cc;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  uVar2 = FUN_4a04d4d0(0,s_java_util_Vector_4a1705d0,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a1705e4

void FUN_4a1705e4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a170610;
  return;
}



// Address: 4a17061c

undefined4 * FUN_4a17061c(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  undefined4 unaff_r4;
  
  thunk_FUN_4a161570(0x14);
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0c70cc;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  uVar2 = FUN_4a04d4d0(0,s_java_util_Vector_4a170634,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a170648

void FUN_4a170648(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a170674;
  return;
}



// Address: 4a170680

undefined4 * FUN_4a170680(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  undefined4 unaff_r4;
  
  thunk_FUN_4a161570(0x14);
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0c70cc;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  uVar2 = FUN_4a04d4d0(0,s_java_util_Vector_4a170698,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a1706ac

void FUN_4a1706ac(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a1706d8;
  return;
}



// Address: 4a1706e4

undefined4 * FUN_4a1706e4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  undefined4 unaff_r4;
  
  thunk_FUN_4a161570(0x14);
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0c70cc;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  uVar2 = FUN_4a04d4d0(0,s_java_util_Vector_4a1706fc,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a170710

void FUN_4a170710(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a17073c;
  return;
}



// Address: 4a170740

int FUN_4a170740(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}



// Address: 4a170748

int FUN_4a170748(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0x28;
}



// Address: 4a170752

uint FUN_4a170752(int *param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  while( true ) {
    if ((uint)param_1[1] <= uVar1) {
      return 0xffffffff;
    }
    if (*(int *)(*param_1 + uVar1 * 4) == *param_2) break;
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}



// Address: 4a170776

int FUN_4a170776(int *param_1,int param_2)

{
  return *param_1 + param_2 * 2;
}



// Address: 4a17077e

bool FUN_4a17077e(void)

{
  int iVar1;
  
  iVar1 = thunk_FUN_4a00142c();
  return iVar1 == 0;
}



// Address: 4a170798

ulonglong FUN_4a170798(uint param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = param_2 & 0x7fffffff ^ param_2 << 1;
  if ((uVar3 & 0x7f000000) != 0 || (uVar3 & 0xe00000) != 0) {
    iVar2 = (param_2 & 0x7fffffff) + 0xc8000000;
    if (iVar2 < 0x100000) {
      return CONCAT44(iVar2,param_2) & 0xffffffff80000000;
    }
    bVar4 = (bool)((byte)(param_1 >> 0x1c) & 1);
    if ((bVar4 && (param_1 & 0xfffffff) != 0) ||
       ((bVar4 && (-1 < (int)((param_1 & 0x20000000) * 4 + -0x40000000))))) {
      bVar4 = 0xdfffffff < param_1;
      param_1 = param_1 + 0x20000000;
      iVar2 = iVar2 + (uint)bVar4;
    }
    if (0xfefffff < iVar2) {
      return CONCAT44(iVar2,param_2) & 0xffffffff80000000 | 0x7f800000;
    }
    return CONCAT44(iVar2,param_2 & 0x80000000 | iVar2 << 3 | param_1 >> 0x1d);
  }
  if ((param_2 & 0x100000) == 0) {
    return CONCAT44(param_2,param_2) & 0x7fffffff80000000;
  }
  if (param_1 == 0 && (param_2 & 0xfffff) == 0) {
    return CONCAT44(param_2,param_2) & 0xffffffffff8fffff;
  }
  uVar1 = 0;
  uVar3 = DAT_4a170840 & 0xf;
  if (uVar3 != 9) {
    if (uVar3 == 10) {
      if ((DAT_4a170840 & 0x40) != 0) {
        uVar1 = 0x80000000;
      }
      return CONCAT44(DAT_4a170a38,uVar1);
    }
    if (uVar3 != 8) {
      return (ulonglong)DAT_4a170a38 << 0x20;
    }
    if ((DAT_4a170840 & 0x40) != 0) {
      return 0;
    }
    if ((DAT_4a170840 & 0x10) == 0) {
      return CONCAT44(DAT_4a170a38,DAT_4a170a38 & 0xff000000 | (DAT_4a170a38 & 0xffffff) << 3);
    }
    return 0;
  }
  if ((DAT_4a170840 & 0x100000) == 0) {
    return (ulonglong)DAT_4a170a38 << 0x20;
  }
  if ((DAT_4a170840 & 0x70000) == 0) {
    return CONCAT44(DAT_4a170a38,0x30000000);
  }
  return CONCAT44(~(DAT_4a170840 << 0xf) << 1,8);
}



// Address: 4a170848

ulonglong FUN_4a170848(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  
  if ((int)(param_2 ^ param_4) < 0) {
    param_4 = param_4 ^ 0x80000000;
    bVar11 = param_3 <= param_1;
    uVar7 = param_1 - param_3;
    if (param_2 <= param_4 && (uint)bVar11 <= param_2 - param_4) {
      bVar12 = CARRY4(param_3,uVar7);
      param_3 = param_3 + uVar7;
      uVar10 = param_2 - (param_4 + !bVar11) ^ 0x80000000;
      param_4 = param_4 + uVar10 + (uint)bVar12;
      bVar11 = param_1 < uVar7;
      param_1 = param_1 - uVar7;
      param_2 = param_2 - (uVar10 + bVar11);
    }
    uVar7 = param_2 >> 0x14;
    uVar10 = uVar7 - (param_4 >> 0x14);
    if ((DAT_4a17190c & param_4 << 1) != 0 && DAT_4a17190c != uVar7 << 0x15) {
      uVar6 = -param_3;
      uVar4 = param_2 & ~(uVar7 << 0x14);
      iVar9 = ((int)DAT_4a17190c >> 1) -
              ((param_4 & ~((int)DAT_4a17190c >> 1)) + (uint)(param_3 != 0));
      uVar8 = 0x20 - uVar10;
      if (uVar10 < 0x21) {
        uVar1 = uVar6 >> (uVar10 & 0xff);
        uVar3 = param_1 + uVar1;
        uVar4 = uVar4 + (iVar9 >> (uVar10 & 0xff)) + (uint)CARRY4(param_1,uVar1);
        uVar10 = iVar9 << (uVar8 & 0xff);
        uVar1 = uVar3 + uVar10;
        bVar11 = CARRY4(uVar4,(uint)CARRY4(uVar3,uVar10));
        iVar9 = uVar4 + CARRY4(uVar3,uVar10);
      }
      else {
        uVar10 = uVar10 - 0x20;
        uVar6 = (uint)(param_3 * -2 != 0) | (iVar9 * 2 + (uint)CARRY4(uVar6,uVar6)) * 2;
        uVar8 = 0x1e - uVar10;
        if (0x1e < uVar10 || uVar8 == 0) {
          return CONCAT44(uVar4 + uVar7 * 0x100000,param_1);
        }
        uVar10 = iVar9 >> (uVar10 & 0xff);
        uVar1 = param_1 + uVar10;
        bVar11 = uVar4 != 0 || uVar4 < CARRY4(param_1,uVar10);
        iVar9 = uVar4 - !CARRY4(param_1,uVar10);
      }
      if (-1 < iVar9) {
        iVar9 = iVar9 + uVar7 * 0x100000;
        iVar5 = uVar6 << (uVar8 & 0xff);
        if (-1 < iVar5) {
          return CONCAT44(iVar9,uVar1);
        }
        uVar1 = uVar1 + 1;
        if (uVar1 != 0 && iVar5 != -0x80000000) {
          return CONCAT44(iVar9,uVar1);
        }
        if (uVar1 == 0) {
          iVar9 = iVar9 + 1;
          uVar1 = 0;
        }
        else {
          uVar1 = uVar1 & 0xfffffffe;
        }
        return CONCAT44(iVar9,uVar1);
      }
      uVar8 = uVar8 + 1 & 0xff;
      bVar11 = uVar8 == 0 && bVar11 || uVar8 != 0 && (bool)((byte)(uVar6 >> 0x20 - uVar8) & 1);
      uVar10 = uVar1 * 2 + (uint)bVar11;
      iVar9 = iVar9 * 2 + (uint)(CARRY4(uVar1,uVar1) || CARRY4(uVar1 * 2,(uint)bVar11));
      uVar4 = iVar9 + uVar7 * 0x200000;
      bVar11 = (bool)((byte)(uVar4 >> 0x14) & 1);
      if (!bVar11 || uVar4 >> 0x15 == 0) {
        if (bVar11) {
          uVar7 = (iVar9 >> 1) + uVar7 * 0x100000;
          uVar10 = (uint)((byte)iVar9 & 1) << 0x1f | uVar10 >> 1;
          if (uVar7 * 2 != 0 || uVar10 != 0) {
            if (0x1fffff < uVar7 * 2) {
              return CONCAT44(uVar7,uVar10);
            }
            return (ulonglong)(uVar7 & 0x80000000) << 0x20;
          }
        }
        else {
          uVar6 = iVar9 + 0x200000;
          if (uVar6 != 0 || uVar10 != 0) {
            iVar9 = (uVar7 & 0xfffff7ff) - 2;
            do {
              bVar11 = CARRY4(uVar10,uVar10);
              uVar10 = uVar10 * 2;
              uVar6 = uVar6 * 2 + (uint)bVar11;
              iVar9 = iVar9 + -1;
            } while ((uVar6 & 0x100000) == 0);
            iVar5 = uVar6 + (param_2 & 0x80000000) + iVar9 * 0x100000;
            if (-1 < iVar9) {
              return CONCAT44(iVar5,uVar10);
            }
            return (ulonglong)(iVar5 + 0x60000000U & 0x80000000) << 0x20;
          }
        }
        return (ulonglong)uVar10;
      }
      iVar9 = iVar9 + uVar7 * 0x100000;
      uVar7 = -((int)(uVar6 << uVar8) >> 0x1f);
      uVar4 = uVar10 + uVar7;
      bVar11 = uVar4 == 0;
      if (!CARRY4(uVar10,uVar7)) {
        bVar11 = uVar6 << uVar8 == -0x80000000;
      }
      if (!bVar11) {
        return CONCAT44(iVar9,uVar4);
      }
      if (uVar4 == 0) {
        iVar9 = iVar9 + 1;
        uVar4 = 0;
      }
      else {
        uVar4 = uVar4 & 0xfffffffe;
      }
      return CONCAT44(iVar9,uVar4);
    }
    if (DAT_4a17190c != uVar7 << 0x15) {
      if ((param_2 & DAT_4a17190c >> 1) == 0) {
        param_2 = 0;
        param_1 = 0;
      }
      return CONCAT44(param_2,param_1);
    }
    uVar7 = param_2 * 2 + (uint)(param_1 != 0);
    uVar10 = param_4 * 2 + (uint)(param_3 != 0);
    bVar12 = DAT_4a17190c <= uVar7;
    bVar11 = uVar7 == DAT_4a17190c;
    if (!bVar12 || bVar11) {
      bVar12 = DAT_4a17190c <= uVar10;
      bVar11 = uVar10 == DAT_4a17190c;
    }
    uVar7 = DAT_4a171910;
    if (!bVar12 || bVar11) {
      iVar9 = param_2 * 2 + (uint)(param_1 != 0);
      if (iVar9 == param_4 * 2 + (uint)(param_3 != 0)) {
        if ((int)(param_2 ^ param_4) < 0) {
          return (ulonglong)param_2 << 0x20;
        }
        return (ulonglong)DAT_4a171914 << 0x20;
      }
      if (iVar9 == -0x200000) {
        return (ulonglong)param_2 << 0x20;
      }
      return (ulonglong)(param_4 ^ 0x80000000) << 0x20;
    }
LAB_4a170a1c:
    uVar2 = 0;
    uVar10 = uVar7 & 0xf;
    if (uVar10 == 9) {
      if ((uVar7 & 0x100000) == 0) {
        return (ulonglong)DAT_4a170a28 << 0x20;
      }
      if ((uVar7 & 0x70000) != 0) {
        return CONCAT44(~(uVar7 << 0xf) << 1,8);
      }
      return CONCAT44(DAT_4a170a28,0x30000000);
    }
    if (uVar10 == 10) {
      if ((uVar7 & 0x40) != 0) {
        uVar2 = 0x80000000;
      }
      return CONCAT44(DAT_4a170a28,uVar2);
    }
    if (uVar10 != 8) {
      return (ulonglong)DAT_4a170a28 << 0x20;
    }
    if ((uVar7 & 0x40) != 0) {
      return 0;
    }
    if ((uVar7 & 0x10) != 0) {
      return 0;
    }
    return CONCAT44(DAT_4a170a28,DAT_4a170a28 & 0xff000000 | (DAT_4a170a28 & 0xffffff) << 3);
  }
  uVar7 = param_1 - param_3;
  iVar9 = param_2 - (param_4 + (param_3 > param_1));
  if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
    bVar11 = CARRY4(param_3,uVar7);
    param_3 = param_3 + uVar7;
    param_4 = param_4 + iVar9 + (uint)bVar11;
    bVar11 = param_1 < uVar7;
    param_1 = param_1 - uVar7;
    param_2 = param_2 - (iVar9 + (uint)bVar11);
  }
  uVar7 = param_2 >> 0x14;
  uVar10 = uVar7 - (param_4 >> 0x14);
  if ((DAT_4a170a0c & param_4 << 1) == 0 || DAT_4a170a0c == uVar7 << 0x15) {
    if (DAT_4a170a0c != uVar7 << 0x15) {
      if ((param_2 & DAT_4a170a0c >> 1) == 0) {
        param_2 = param_2 & 0x80000000;
        param_1 = 0;
      }
      return CONCAT44(param_2,param_1);
    }
    uVar7 = param_2 * 2 + (uint)(param_1 != 0);
    uVar10 = param_4 * 2 + (uint)(param_3 != 0);
    bVar12 = DAT_4a170a0c <= uVar7;
    bVar11 = uVar7 == DAT_4a170a0c;
    if (!bVar12 || bVar11) {
      bVar12 = DAT_4a170a0c <= uVar10;
      bVar11 = uVar10 == DAT_4a170a0c;
    }
    uVar7 = DAT_4a170a14;
    if (!bVar12 || bVar11) {
      iVar9 = param_2 * 2 + (uint)(param_1 != 0);
      if (iVar9 == param_4 * 2 + (uint)(param_3 != 0)) {
        if (-1 < (int)(param_2 ^ param_4)) {
          return (ulonglong)param_2 << 0x20;
        }
        return (ulonglong)DAT_4a170a18 << 0x20;
      }
      if (iVar9 == -0x200000) {
        return (ulonglong)param_2 << 0x20;
      }
      return (ulonglong)param_4 << 0x20;
    }
    goto LAB_4a170a1c;
  }
  param_2 = param_2 & ~(uVar7 << 0x14);
  uVar6 = param_4 & ~DAT_4a170a0c | 0x100000;
  uVar8 = 0x20 - uVar10;
  if (uVar10 < 0x21) {
    uVar1 = param_3 >> (uVar10 & 0xff);
    bVar11 = CARRY4(param_1,uVar1);
    uVar1 = param_1 + uVar1;
    uVar4 = uVar6 << (uVar8 & 0xff);
    param_1 = uVar1 + uVar4;
    uVar6 = param_2 + (uVar6 >> (uVar10 & 0xff)) + (uint)bVar11 + (uint)CARRY4(uVar1,uVar4);
    if (0xfffff < uVar6) {
LAB_4a170928:
      uVar10 = (uVar6 + 0x100000 >> 1) + uVar7 * 0x100000;
      bVar11 = (bool)((byte)param_1 & 1);
      uVar7 = (uint)((byte)(uVar6 + 0x100000) & 1) << 0x1f | param_1 >> 1;
      if (!bVar11) {
LAB_4a170960:
        if (uVar10 * 2 < 0xffe00000) {
          return CONCAT44(uVar10,uVar7);
        }
        uVar7 = DAT_4a170a10;
        if ((int)(uVar10 + 0xa0000000) < 0) {
          uVar7 = DAT_4a170a10 | 0x80000000;
        }
        return (ulonglong)uVar7 << 0x20;
      }
      bVar12 = CARRY4(uVar7,(uint)bVar11);
      uVar7 = uVar7 + bVar11;
      uVar6 = uVar7;
      if (!bVar12) {
        uVar6 = param_3 << (uVar8 & 0xff);
      }
      if (uVar6 != 0) goto LAB_4a170960;
      goto LAB_4a1708d4;
    }
    uVar10 = uVar6 + uVar7 * 0x100000;
  }
  else {
    param_3 = uVar6 * 2 + (uint)(param_3 != 0);
    uVar10 = uVar10 - 0x20;
    bVar11 = uVar10 < 0x20;
    uVar8 = 0x1f - uVar10;
    if (bVar11) {
      uVar6 = uVar6 >> (uVar10 & 0xff);
      bVar11 = CARRY4(param_1,uVar6);
      param_1 = param_1 + uVar6;
    }
    else {
      uVar8 = 0;
    }
    uVar10 = param_2 + uVar7 * 0x100000 + (uint)bVar11;
    if (uVar7 != uVar10 >> 0x14) {
      uVar6 = uVar10 + uVar7 * -0x100000;
      goto LAB_4a170928;
    }
  }
  param_3 = param_3 << (uVar8 & 0xff);
  if (-1 < (int)param_3) {
    return CONCAT44(uVar10,param_1);
  }
  uVar7 = param_1 + 1;
  uVar6 = uVar7;
  if (param_1 != 0xffffffff) {
    uVar6 = param_3 & 0x7fffffff;
  }
  if (uVar6 != 0) {
    return CONCAT44(uVar10,uVar7);
  }
LAB_4a1708d4:
  if (uVar7 == 0) {
    uVar10 = uVar10 + 1;
    uVar7 = 0;
  }
  else {
    uVar7 = uVar7 & 0xfffffffe;
  }
  if (uVar10 * 2 < 0xffe00000) {
    return CONCAT44(uVar10,uVar7);
  }
  uVar7 = DAT_4a170a10;
  if ((int)(uVar10 + 0xa0000000) < 0) {
    uVar7 = DAT_4a170a10 | 0x80000000;
  }
  return (ulonglong)uVar7 << 0x20;
}



// Address: 4a170b24

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_4a170b24(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  ulonglong uVar12;
  
  if ((ram0x4a170fd4 & ~(param_2 >> 4)) == 0 || (ram0x4a170fd4 & ~(param_4 >> 4)) == 0) {
    uVar8 = param_2 * 2;
    uVar4 = ram0x4a170fd4 * 0x20;
    bVar9 = uVar8 == uVar4;
    bVar10 = bVar9 && param_1 == 0;
    bVar11 = bVar9 || uVar4 <= uVar8;
    if (!bVar9 && uVar4 > uVar8 || bVar9 && param_1 == 0) {
      bVar11 = ram0x4a170fd4 * 0x20 <= param_4 * 2;
      bVar10 = param_4 * 2 == ram0x4a170fd4 * 0x20;
    }
    if (bVar10) {
      bVar11 = true;
    }
    if (bVar11 && (!bVar10 || param_3 != 0)) {
      uVar2 = 0;
      uVar8 = DAT_4a170fdc & 0xf;
      if (uVar8 == 9) {
        if ((DAT_4a170fdc & 0x100000) == 0) {
          return (ulonglong)DAT_4a170a28 << 0x20;
        }
        if ((DAT_4a170fdc & 0x70000) != 0) {
          return CONCAT44(~(DAT_4a170fdc << 0xf) << 1,8);
        }
        return CONCAT44(DAT_4a170a28,0x30000000);
      }
      if (uVar8 == 10) {
        if ((DAT_4a170fdc & 0x40) != 0) {
          uVar2 = 0x80000000;
        }
        return CONCAT44(DAT_4a170a28,uVar2);
      }
      if (uVar8 != 8) {
        return (ulonglong)DAT_4a170a28 << 0x20;
      }
      if ((DAT_4a170fdc & 0x40) != 0) {
        return 0;
      }
      if ((DAT_4a170fdc & 0x10) != 0) {
        return 0;
      }
      return CONCAT44(DAT_4a170a28,DAT_4a170a28 & 0xff000000 | (DAT_4a170a28 & 0xffffff) << 3);
    }
    if ((param_2 & 0x7fffffff) != 0x7ff00000) {
      return (ulonglong)((param_2 ^ param_4) & 0x80000000) << 0x20;
    }
    if ((param_4 & 0x7fffffff) != 0x7ff00000) {
      uVar8 = param_2 & 0x7fffffff;
      if ((int)(param_2 ^ param_4) < 0) {
        uVar8 = uVar8 | 0x80000000;
      }
      return CONCAT44(uVar8,param_1);
    }
  }
  else {
    uVar8 = ram0x4a170fd4 & param_4 >> 4;
    if (uVar8 != 0 && (param_2 & ram0x4a170fd4 << 4) != 0) {
      uVar4 = param_4 << 0xb | param_3 >> 0x15;
      iVar6 = (ram0x4a170fd4 & param_2 >> 4 | (param_2 ^ param_4) >> 0x1f) - uVar8;
      iVar7 = iVar6 + 0x3fc0000;
      uVar12 = FUN_4a170cf4(param_1 << 0xb,param_2 << 0xb | param_1 >> 0x15 | 0x80000000,
                            param_3 << 0xb);
      iVar1 = (int)uVar12 << 0x15;
      uVar8 = (uint)(uVar12 >> 0xb);
      uVar3 = (int)((uVar12 >> 0xb) >> 0x20) + (uVar4 + (iVar7 >> 0x10)) * 0x100000;
      uVar4 = uVar3 ^ iVar6 * -0x80000000;
      if ((iVar1 != 0) && (SUB41((uint)iVar1 >> 0x1f,0))) {
        if ((uVar12 & 0x3ff) == 0) {
          uVar5 = 0x80000000;
        }
        else {
          uVar5 = 0;
        }
        uVar4 = uVar4 + (0xfffffffe < uVar8);
        uVar8 = uVar8 + 1 & ~(uVar5 >> 0x1f);
      }
      if ((-1 < (int)(uVar4 ^ iVar6 * -0x80000000)) &&
         ((uVar3 & DAT_4a170fd8) != 0 && (DAT_4a170fd8 & ~uVar4) != 0)) {
        return CONCAT44(uVar4,uVar8);
      }
      if (iVar7 < 0x4000001) {
        return (ulonglong)(uVar4 + 0x60000000 & 0x80000000) << 0x20;
      }
      if (0x3ffffff < iVar7) {
        uVar4 = uVar4 + 0xa0000000;
      }
      return (ulonglong)((uVar4 | 0x7fffffff) ^ 0xfffff) << 0x20;
    }
    if ((param_2 & ram0x4a170fd4 << 4) != 0) {
      return (ulonglong)((param_2 ^ param_4 | 0x7fffffff) ^ 0xfffff) << 0x20;
    }
    if ((param_4 & ram0x4a170fd4 << 4) != 0) {
      return (ulonglong)((param_2 ^ param_4) & 0x80000000) << 0x20;
    }
  }
  return (ulonglong)DAT_4a170fe0 << 0x20;
}



// Address: 4a170cf4

undefined8 FUN_4a170cf4(uint param_1,uint param_2,uint param_3,uint param_4)

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
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  
  uVar7 = param_4 >> 0x10;
  uVar8 = param_3 >> 0x10;
  uVar11 = (uint)*(byte *)((param_4 >> 0x18) + 0x4a170ed4);
  param_3 = param_3 & ~(uVar8 << 0x10);
  uVar10 = param_4 & ~(uVar7 << 0x10);
  uVar1 = (uint)((byte)param_2 & 1) << 0x1f | param_1 >> 1;
  if ((bool)((byte)param_1 & 1)) {
    uVar14 = 0x80000000;
  }
  else {
    uVar14 = 0;
  }
  iVar12 = ((0x800000 - (uVar7 * uVar11 + uVar11)) * uVar11 >> 0x13) + 2;
  uVar13 = 0x20000000 - ((param_4 >> 0xd) * iVar12 + iVar12);
  uVar11 = uVar13 >> 0x10;
  uVar11 = uVar11 * iVar12 + ((uVar13 & ~(uVar11 << 0x10)) * iVar12 >> 0x10) >> 6;
  uVar13 = uVar11 * (param_2 >> 0x10) >> 0x10;
  uVar3 = uVar1 - uVar13 * uVar8;
  uVar15 = uVar13 * param_3;
  bVar21 = uVar15 * 0x10000 <= uVar14;
  uVar14 = uVar14 + uVar15 * -0x10000;
  uVar15 = uVar15 >> 0x10;
  bVar2 = uVar3 - uVar15 < (uint)bVar21;
  bVar22 = uVar15 < uVar3 || bVar2;
  uVar4 = uVar3 - (uVar15 + !bVar21);
  uVar16 = uVar13 * uVar10;
  if (uVar15 < uVar3 || bVar2) {
    bVar22 = uVar16 * 0x10000 <= uVar4;
  }
  uVar4 = uVar4 + uVar16 * -0x10000;
  uVar16 = ((param_2 >> 1) - (uVar7 * uVar13 + (uint)(uVar1 < uVar13 * uVar8))) -
           ((uVar16 >> 0x10) + (uint)!bVar22);
  uVar1 = uVar11 * (uVar16 >> 2) >> 0x10;
  uVar15 = uVar1 * uVar8;
  bVar21 = uVar15 * 0x80000 <= uVar14;
  uVar14 = uVar14 + uVar15 * -0x80000;
  uVar15 = uVar15 >> 0xd;
  bVar2 = uVar4 - uVar15 < (uint)bVar21;
  bVar22 = uVar15 < uVar4 || bVar2;
  uVar3 = uVar4 - (uVar15 + !bVar21);
  uVar17 = uVar7 * uVar1;
  if (uVar15 < uVar4 || bVar2) {
    bVar22 = uVar17 * 0x80000 <= uVar3;
  }
  uVar3 = uVar3 + uVar17 * -0x80000;
  uVar15 = uVar1 * param_3;
  bVar23 = uVar15 * 8 <= uVar14;
  uVar4 = uVar15 >> 0x1d;
  bVar2 = uVar3 - uVar4 < (uint)bVar23;
  bVar21 = uVar4 < uVar3 || bVar2;
  uVar5 = uVar3 - (uVar4 + !bVar23);
  uVar18 = uVar1 * uVar10;
  if (uVar4 < uVar3 || bVar2) {
    bVar21 = uVar18 * 8 <= uVar5;
  }
  uVar5 = uVar5 + uVar18 * -8;
  uVar18 = ((uVar16 - ((uVar17 >> 0xd) + (uint)!bVar22)) - ((uVar18 >> 0x1d) + (uint)!bVar21)) *
           0x4000000 | uVar5 >> 6;
  uVar4 = uVar5 * 0x4000000 | uVar14 + uVar15 * -8 >> 6;
  uVar5 = uVar11 * (uVar18 >> 0xf);
  uVar15 = uVar15 * -0x20000000;
  uVar14 = uVar5 >> 0x10;
  uVar16 = uVar4 - uVar14 * uVar8;
  uVar3 = uVar14 * param_3;
  bVar21 = uVar3 * 0x10000 <= uVar15;
  uVar15 = uVar15 + uVar3 * -0x10000;
  uVar3 = uVar3 >> 0x10;
  bVar2 = uVar16 - uVar3 < (uint)bVar21;
  bVar22 = uVar3 < uVar16 || bVar2;
  uVar17 = uVar16 - (uVar3 + !bVar21);
  uVar19 = uVar14 * uVar10;
  if (uVar3 < uVar16 || bVar2) {
    bVar22 = uVar19 * 0x10000 <= uVar17;
  }
  uVar17 = uVar17 + uVar19 * -0x10000;
  uVar16 = (uVar18 - (uVar7 * uVar14 + (uint)(uVar4 < uVar14 * uVar8))) -
           ((uVar19 >> 0x10) + (uint)!bVar22);
  uVar11 = uVar11 * (uVar16 >> 2) >> 0x10;
  uVar3 = uVar11 * uVar8;
  bVar21 = uVar3 * 0x80000 <= uVar15;
  uVar15 = uVar15 + uVar3 * -0x80000;
  uVar3 = uVar3 >> 0xd;
  bVar2 = uVar17 - uVar3 < (uint)bVar21;
  bVar22 = uVar3 < uVar17 || bVar2;
  uVar4 = uVar17 - (uVar3 + !bVar21);
  uVar18 = uVar7 * uVar11;
  if (uVar3 < uVar17 || bVar2) {
    bVar22 = uVar18 * 0x80000 <= uVar4;
  }
  uVar4 = uVar4 + uVar18 * -0x80000;
  uVar17 = uVar11 * param_3;
  bVar23 = uVar17 * 8 <= uVar15;
  uVar3 = uVar17 >> 0x1d;
  bVar2 = uVar4 - uVar3 < (uint)bVar23;
  bVar21 = uVar3 < uVar4 || bVar2;
  uVar19 = uVar4 - (uVar3 + !bVar23);
  uVar20 = uVar11 * uVar10;
  if (uVar3 < uVar4 || bVar2) {
    bVar21 = uVar20 * 8 <= uVar19;
  }
  uVar19 = uVar19 + uVar20 * -8;
  uVar9 = uVar14 * 0x400000 + uVar11 * 0x200;
  uVar6 = uVar19 * 0x4000000 | uVar15 + uVar17 * -8 >> 6;
  uVar15 = uVar17 * -0x20000000;
  uVar3 = uVar17 * -0x40000000;
  uVar4 = uVar6 * 2 + (uint)CARRY4(uVar15,uVar15);
  uVar10 = uVar10 | uVar7 << 0x10;
  param_3 = param_3 | uVar8 << 0x10;
  uVar8 = (((uVar16 - ((uVar18 >> 0xd) + (uint)!bVar22)) - ((uVar20 >> 0x1d) + (uint)!bVar21)) *
           0x4000000 | uVar19 >> 6) * 2 +
          (uint)(CARRY4(uVar6,uVar6) || CARRY4(uVar6 * 2,(uint)CARRY4(uVar15,uVar15)));
  bVar2 = uVar8 - uVar10 < (uint)(param_3 <= uVar4);
  uVar7 = uVar8;
  if (uVar10 < uVar8 || bVar2) {
    uVar7 = uVar8 - (uVar10 + (param_3 > uVar4));
    uVar4 = uVar4 - param_3;
  }
  uVar17 = uVar17 * -0x80000000;
  bVar21 = CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)CARRY4(uVar3,uVar3));
  uVar15 = uVar4 * 2 + (uint)CARRY4(uVar3,uVar3);
  bVar22 = CARRY4(uVar7 * 2,(uint)bVar21);
  bVar23 = CARRY4(uVar7,uVar7) || bVar22;
  uVar3 = uVar7 * 2 + (uint)bVar21;
  bVar21 = bVar23 < (uVar10 < uVar3 || uVar3 - uVar10 < (uint)(param_3 <= uVar15));
  if ((CARRY4(uVar7,uVar7) || bVar22) || bVar21) {
    uVar3 = uVar3 - (uVar10 + (param_3 > uVar15));
    uVar15 = uVar15 - param_3;
  }
  bVar24 = CARRY4(uVar15,uVar15) || CARRY4(uVar15 * 2,(uint)CARRY4(uVar17,uVar17));
  uVar7 = uVar15 * 2 + (uint)CARRY4(uVar17,uVar17);
  bVar22 = CARRY4(uVar3 * 2,(uint)bVar24);
  bVar25 = CARRY4(uVar3,uVar3) || bVar22;
  uVar15 = uVar3 * 2 + (uint)bVar24;
  bVar24 = bVar25 < (uVar10 < uVar15 || uVar15 - uVar10 < (uint)(param_3 <= uVar7));
  if ((CARRY4(uVar3,uVar3) || bVar22) || bVar24) {
    uVar15 = uVar15 - (uVar10 + (param_3 > uVar7));
    uVar7 = uVar7 - param_3;
  }
  uVar8 = (((uint)(uVar10 < uVar8 || bVar2) * 2 + (uint)(bVar23 || bVar21)) * 2 +
          (uint)(bVar25 || bVar24)) * 0x200;
  iVar12 = uVar13 * 0x10000 + uVar1 * 8 + (uVar5 >> 0x1a) +
           (uint)CARRY4(uVar14 * 0x400000,uVar11 * 0x200) + (uint)CARRY4(uVar9,uVar8);
  uVar7 = uVar9 + uVar8 | (uint)(uVar15 != 0 || uVar7 != 0);
  if (iVar12 < 0) {
    return CONCAT44(iVar12,uVar7);
  }
  return CONCAT44(iVar12 * 2 + (uint)CARRY4(uVar7,uVar7),uVar7 * 2);
}



// Address: 4a170fe4

longlong FUN_4a170fe4(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  byte in_Q;
  
  uVar3 = param_2 | param_4;
  if ((int)uVar3 < 0) {
    if ((int)(uVar3 + 0x100000) < 0) {
      if ((int)(uVar3 - 0x100000) < 0) {
        if (param_4 != param_2) {
          return CONCAT44(param_2,param_1);
        }
        return CONCAT44(param_2,param_1);
      }
      goto LAB_4a171020;
    }
    if (param_2 << 1 < 0xffe00000 && param_4 << 1 < 0xffe00000) {
      return CONCAT44(param_2,param_1);
    }
  }
  else {
    bVar7 = SCARRY4(uVar3,0x100000);
    bVar6 = -1 < (int)(uVar3 + 0x100000);
    if (bVar6) {
      bVar7 = SBORROW4(uVar3,0x100000);
    }
    if (bVar6 && -1 < (int)(uVar3 - 0x100000)) {
      if (param_2 != param_4) {
        return CONCAT44(param_2,param_1);
      }
      return CONCAT44(param_2,param_1);
    }
    if (!bVar7) {
LAB_4a171020:
      return CONCAT44(param_2,param_1);
    }
    if (-1 < (int)(param_2 + 0x100000) && -1 < (int)(param_4 + 0x100000)) {
      return CONCAT44(param_2,param_1);
    }
  }
  uVar3 = param_2 * 2;
  bVar7 = uVar3 == 0xffe00000 && param_1 == 0;
  if (uVar3 < 0xffe00000 || uVar3 == 0xffe00000 && param_1 == 0) {
    uVar3 = param_4 * 2;
    bVar7 = uVar3 == 0xffe00000;
  }
  if (!bVar7 && uVar3 < 0xffe00000 || bVar7 && param_3 == 0) {
    if ((int)(param_2 | param_4) < 0) {
      bVar7 = param_2 <= param_4;
      if (param_4 == param_2) {
        bVar7 = param_1 <= param_3;
      }
      uVar3 = ((byte)((param_4 == param_2 && param_3 == param_1) << 3 | bVar7 << 2 | in_Q) & 0xd) <<
              0x1b;
      if (!bVar7) {
        uVar3 = uVar3 | 0x80000000;
      }
      return CONCAT44(param_2,uVar3);
    }
    bVar7 = param_4 <= param_2;
    bVar6 = SBORROW4(param_2,param_4);
    iVar1 = param_2 - param_4;
    if (param_2 == param_4) {
      bVar7 = param_3 <= param_1;
      bVar6 = SBORROW4(param_1,param_3);
      iVar1 = param_1 - param_3;
    }
    bVar4 = param_2 == param_4 && param_1 == param_3;
    if (bVar6) {
      bVar6 = !bVar7;
      if (bVar6) {
        bVar7 = false;
      }
      bVar5 = !bVar6;
      if (bVar5) {
        bVar7 = true;
      }
      return CONCAT44(param_2,(uint)(byte)((!bVar5 && (bVar6 || iVar1 < 0)) << 4 |
                                           (!bVar5 && (!bVar6 && bVar4)) << 3 | bVar7 << 2 | in_Q)
                              << 0x1b);
    }
    return CONCAT44(param_2,(uint)(byte)((iVar1 < 0) << 4 | bVar4 << 3 | bVar7 << 2 | in_Q) << 0x1b)
    ;
  }
  if ((DAT_4a171068 & 0xd0000) == 0) {
    uVar2 = 0;
    uVar3 = DAT_4a171068 & 0xf;
    if (uVar3 != 9) {
      if (uVar3 == 10) {
        if ((DAT_4a171068 & 0x40) != 0) {
          uVar2 = 0x80000000;
        }
        return CONCAT44(DAT_4a170a28,uVar2);
      }
      if (uVar3 != 8) {
        return (ulonglong)DAT_4a170a28 << 0x20;
      }
      if ((DAT_4a171068 & 0x40) != 0) {
        return 0;
      }
      if ((DAT_4a171068 & 0x10) != 0) {
        return 0;
      }
      return CONCAT44(DAT_4a170a28,DAT_4a170a28 & 0xff000000 | (DAT_4a170a28 & 0xffffff) << 3);
    }
    param_1 = 8;
    param_2 = DAT_4a170a28;
  }
  if ((DAT_4a171068 & 0x100000) == 0) {
    return (ulonglong)param_2 << 0x20;
  }
  if ((DAT_4a171068 & 0x70000) != 0) {
    return CONCAT44(~(DAT_4a171068 << 0xf) << 1,param_1);
  }
  return CONCAT44(param_2,0x30000000);
}



// Address: 4a171070

/* WARNING: Removing unreachable block (ram,0x4a1729ec) */

ulonglong FUN_4a171070(uint param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = param_2 >> 0x14;
  uVar5 = param_2 << 0xb | param_1 >> 0x15;
  if (uVar6 != 0) {
    uVar5 = uVar5 | 0x80000000;
  }
  if ((int)uVar6 < 0) {
    iVar2 = 0;
    if ((uVar6 & 0x7ff) == 0) {
      uVar5 = uVar5 & 0x7fffffff;
    }
    iVar4 = (uVar6 & 0x7ff) - 0x380;
    uVar6 = 0x9e - iVar4;
    if (iVar4 < 0x9f) {
      if ((int)uVar6 < 0x100) {
        iVar2 = -(uVar5 >> (uVar6 & 0xff));
      }
      if (iVar2 < 1) {
        return CONCAT44(iVar2,iVar2);
      }
    }
  }
  else {
    uVar3 = 0x9e - (uVar6 - 0x380);
    if (uVar3 != 0 && (int)(uVar6 - 0x380) < 0x9f) {
      if ((int)uVar3 < 0x100) {
        uVar5 = uVar5 >> (uVar3 & 0xff);
      }
      else {
        uVar5 = 0;
      }
      return CONCAT44(uVar5,uVar5);
    }
  }
  uVar6 = param_2 * 2 + (uint)(param_1 != 0);
  if (uVar6 < 0xffe00001) {
    if (0xffdfffff < uVar6) {
      return CONCAT44(param_2,~(param_2 >> 0x1f)) ^ 0x80000000;
    }
    return CONCAT44(param_2,~(param_2 >> 0x1f)) ^ 0x80000000;
  }
  uVar1 = 0;
  uVar6 = DAT_4a17111c & 0xf;
  if (uVar6 == 9) {
    if ((DAT_4a17111c & 0x100000) == 0) {
      return (ulonglong)DAT_4a170a38 << 0x20;
    }
    return CONCAT44(~(DAT_4a17111c << 0xf) << 1,8);
  }
  if (uVar6 == 10) {
    if ((DAT_4a17111c & 0x40) != 0) {
      uVar1 = 0x80000000;
    }
    return CONCAT44(DAT_4a170a38,uVar1);
  }
  if (uVar6 != 8) {
    return (ulonglong)DAT_4a170a38 << 0x20;
  }
  if ((DAT_4a17111c & 0x40) != 0) {
    return 0;
  }
  if ((DAT_4a17111c & 0x10) == 0) {
    return CONCAT44(DAT_4a170a38,DAT_4a170a38 & 0xff000000 | (DAT_4a170a38 & 0xffffff) << 3);
  }
  return 0;
}



// Address: 4a171124

/* WARNING: Removing unreachable block (ram,0x4a1729ec) */

longlong FUN_4a171124(uint param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = (int)param_2 >> 0x14;
  uVar4 = param_2 << 0xb | param_1 >> 0x15;
  if (iVar1 != 0) {
    uVar4 = uVar4 | 0x80000000;
  }
  if (iVar1 < 0) {
    if ((int)(param_2 + 0x40000000) < -0x100000) {
      return (ulonglong)param_2 << 0x20;
    }
  }
  else {
    uVar3 = 0x9e - (iVar1 + -0x380);
    if (iVar1 + -0x380 < 0x9f) {
      if ((int)uVar3 < 0x100) {
        uVar4 = uVar4 >> (uVar3 & 0xff);
      }
      else {
        uVar4 = 0;
      }
      return CONCAT44(uVar4,uVar4);
    }
  }
  uVar4 = param_2 * 2 + (uint)(param_1 != 0);
  if (uVar4 < 0xffe00001) {
    if (uVar4 < 0xffe00000) {
      return CONCAT44(param_2,~((int)param_2 >> 0x1f));
    }
    return CONCAT44(param_2,~((int)param_2 >> 0x1f));
  }
  uVar2 = 0;
  uVar4 = DAT_4a1711a8 & 0xf;
  if (uVar4 == 9) {
    if ((DAT_4a1711a8 & 0x100000) != 0) {
      return CONCAT44(~(DAT_4a1711a8 << 0xf) << 1,8);
    }
    return (ulonglong)DAT_4a170a38 << 0x20;
  }
  if (uVar4 == 10) {
    if ((DAT_4a1711a8 & 0x40) != 0) {
      uVar2 = 0x80000000;
    }
    return CONCAT44(DAT_4a170a38,uVar2);
  }
  if (uVar4 != 8) {
    return (ulonglong)DAT_4a170a38 << 0x20;
  }
  if ((DAT_4a1711a8 & 0x40) != 0) {
    return 0;
  }
  if ((DAT_4a1711a8 & 0x10) != 0) {
    return 0;
  }
  return CONCAT44(DAT_4a170a38,DAT_4a170a38 & 0xff000000 | (DAT_4a170a38 & 0xffffff) << 3);
}



// Address: 4a1711b0

undefined8 FUN_4a1711b0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = param_1 & 0x80000000;
  if (uVar2 != 0) {
    param_1 = -param_1;
  }
  uVar2 = uVar2 | 0x40000000;
  uVar1 = param_1 >> 0x10;
  bVar3 = uVar1 == 0;
  if (bVar3) {
    param_1 = param_1 << 0x10;
    bVar3 = param_1 == 0;
  }
  else {
    uVar2 = uVar2 + 0x1000000;
  }
  if (bVar3) {
    return CONCAT44(param_1,uVar1);
  }
  if ((param_1 & 0xff000000) == 0) {
    param_1 = param_1 << 8;
  }
  else {
    uVar2 = uVar2 + 0x800000;
  }
  if ((param_1 & 0xf0000000) == 0) {
    param_1 = param_1 << 4;
  }
  else {
    uVar2 = uVar2 + 0x400000;
  }
  if ((param_1 & 0xc0000000) == 0) {
    param_1 = param_1 << 2;
    uVar1 = param_1;
  }
  else {
    uVar2 = uVar2 + 0x200000;
    uVar1 = param_1 & 0xc0000000;
  }
  if ((int)uVar1 < 0) {
    uVar2 = uVar2 + 0x100000;
  }
  else {
    param_1 = param_1 << 1;
  }
  return CONCAT44(uVar2 + ((int)param_1 >> 0xb),param_1 << 0x15);
}



// Address: 4a17120c

undefined8 FUN_4a17120c(uint param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 0x40000000;
  uVar1 = param_1 >> 0x10;
  bVar3 = uVar1 == 0;
  if (bVar3) {
    param_1 = param_1 << 0x10;
    bVar3 = param_1 == 0;
  }
  else {
    iVar2 = 0x41000000;
  }
  if (!bVar3) {
    if ((param_1 & 0xff000000) == 0) {
      param_1 = param_1 << 8;
    }
    else {
      iVar2 = iVar2 + 0x800000;
    }
    if ((param_1 & 0xf0000000) == 0) {
      param_1 = param_1 << 4;
    }
    else {
      iVar2 = iVar2 + 0x400000;
    }
    if ((param_1 & 0xc0000000) == 0) {
      param_1 = param_1 << 2;
      uVar1 = param_1;
    }
    else {
      iVar2 = iVar2 + 0x200000;
      uVar1 = param_1 & 0xc0000000;
    }
    if ((int)uVar1 < 0) {
      iVar2 = iVar2 + 0x100000;
    }
    else {
      param_1 = param_1 << 1;
    }
    return CONCAT44(iVar2 + ((int)param_1 >> 0xb),param_1 << 0x15);
  }
  return CONCAT44(param_1,uVar1);
}



// Address: 4a17121c

longlong FUN_4a17121c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  byte in_Q;
  
  uVar3 = param_2 | param_4;
  if ((int)uVar3 < 0) {
    if ((int)(uVar3 + 0x100000) < 0) {
      if ((int)(uVar3 - 0x100000) < 0) {
        if (param_4 != param_2) {
          return CONCAT44(param_2,param_1);
        }
        return CONCAT44(param_2,param_1);
      }
      goto LAB_4a171258;
    }
    if (param_2 << 1 < 0xffe00000 && param_4 << 1 < 0xffe00000) {
      return CONCAT44(param_2,param_1);
    }
  }
  else {
    bVar7 = SCARRY4(uVar3,0x100000);
    bVar6 = -1 < (int)(uVar3 + 0x100000);
    if (bVar6) {
      bVar7 = SBORROW4(uVar3,0x100000);
    }
    if (bVar6 && -1 < (int)(uVar3 - 0x100000)) {
      if (param_2 != param_4) {
        return CONCAT44(param_2,param_1);
      }
      return CONCAT44(param_2,param_1);
    }
    if (!bVar7) {
LAB_4a171258:
      return CONCAT44(param_2,param_1);
    }
    if (-1 < (int)(param_2 + 0x100000) && -1 < (int)(param_4 + 0x100000)) {
      return CONCAT44(param_2,param_1);
    }
  }
  uVar3 = param_2 * 2;
  bVar7 = uVar3 == 0xffe00000 && param_1 == 0;
  if (uVar3 < 0xffe00000 || uVar3 == 0xffe00000 && param_1 == 0) {
    uVar3 = param_4 * 2;
    bVar7 = uVar3 == 0xffe00000;
  }
  if (!bVar7 && uVar3 < 0xffe00000 || bVar7 && param_3 == 0) {
    if ((int)(param_2 | param_4) < 0) {
      bVar7 = param_2 <= param_4;
      if (param_4 == param_2) {
        bVar7 = param_1 <= param_3;
      }
      uVar3 = ((byte)((param_4 == param_2 && param_3 == param_1) << 3 | bVar7 << 2 | in_Q) & 0xd) <<
              0x1b;
      if (!bVar7) {
        uVar3 = uVar3 | 0x80000000;
      }
      return CONCAT44(param_2,uVar3);
    }
    bVar7 = param_4 <= param_2;
    bVar6 = SBORROW4(param_2,param_4);
    iVar1 = param_2 - param_4;
    if (param_2 == param_4) {
      bVar7 = param_3 <= param_1;
      bVar6 = SBORROW4(param_1,param_3);
      iVar1 = param_1 - param_3;
    }
    bVar4 = param_2 == param_4 && param_1 == param_3;
    if (bVar6) {
      bVar6 = !bVar7;
      if (bVar6) {
        bVar7 = false;
      }
      bVar5 = !bVar6;
      if (bVar5) {
        bVar7 = true;
      }
      return CONCAT44(param_2,(uint)(byte)((!bVar5 && (bVar6 || iVar1 < 0)) << 4 |
                                           (!bVar5 && (!bVar6 && bVar4)) << 3 | bVar7 << 2 | in_Q)
                              << 0x1b);
    }
    return CONCAT44(param_2,(uint)(byte)((iVar1 < 0) << 4 | bVar4 << 3 | bVar7 << 2 | in_Q) << 0x1b)
    ;
  }
  if ((DAT_4a1712a0 & 0xd0000) == 0) {
    uVar2 = 0;
    uVar3 = DAT_4a1712a0 & 0xf;
    if (uVar3 != 9) {
      if (uVar3 == 10) {
        if ((DAT_4a1712a0 & 0x40) != 0) {
          uVar2 = 0x80000000;
        }
        return CONCAT44(DAT_4a170a28,uVar2);
      }
      if (uVar3 != 8) {
        return (ulonglong)DAT_4a170a28 << 0x20;
      }
      if ((DAT_4a1712a0 & 0x40) != 0) {
        return 0;
      }
      if ((DAT_4a1712a0 & 0x10) != 0) {
        return 0;
      }
      return CONCAT44(DAT_4a170a28,DAT_4a170a28 & 0xff000000 | (DAT_4a170a28 & 0xffffff) << 3);
    }
    param_1 = 8;
    param_2 = DAT_4a170a28;
  }
  if ((DAT_4a1712a0 & 0x100000) == 0) {
    return (ulonglong)param_2 << 0x20;
  }
  if ((DAT_4a1712a0 & 0x70000) != 0) {
    return CONCAT44(~(DAT_4a1712a0 << 0xf) << 1,param_1);
  }
  return CONCAT44(param_2,0x30000000);
}



// Address: 4a1712a8

longlong FUN_4a1712a8(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  
  if ((DAT_4a171474 & ~(param_2 >> 4)) != 0 && (DAT_4a171474 & ~(param_4 >> 4)) != 0) {
    uVar14 = DAT_4a171474 & param_2 >> 4 | (param_2 ^ param_4) >> 0x1f;
    uVar7 = DAT_4a171474 & param_4 >> 4;
    if (uVar7 == 0 || (param_2 & DAT_4a171474 << 4) == 0) {
      return (ulonglong)(uVar14 << 0x1f) << 0x20;
    }
    iVar15 = uVar14 + uVar7;
    iVar16 = iVar15 + -0x3fc0000;
    uVar7 = param_2 & ~(DAT_4a171474 << 5) | 0x100000;
    uVar14 = param_4 & ~(DAT_4a171474 << 5) | 0x100000;
    lVar1 = (ulonglong)param_3 * (ulonglong)uVar7;
    uVar11 = (uint)((ulonglong)lVar1 >> 0x20);
    lVar2 = (ulonglong)uVar14 * (ulonglong)param_1;
    uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
    lVar4 = lVar1 + lVar2;
    uVar9 = (uint)((ulonglong)lVar4 >> 0x20);
    lVar3 = (ulonglong)uVar14 * (ulonglong)uVar7;
    uVar7 = (uint)lVar3;
    uVar12 = (uint)((ulonglong)param_3 * (ulonglong)param_1 >> 0x20);
    lVar5 = lVar4 + CONCAT44(uVar7,uVar12);
    uVar10 = (uint)lVar5;
    uVar14 = (uint)((ulonglong)lVar5 >> 0x20);
    uVar7 = (int)((ulonglong)lVar3 >> 0x20) +
            (uint)(CARRY4(uVar8,uVar11) ||
                  CARRY4(uVar8 + uVar11,(uint)CARRY4((uint)lVar2,(uint)lVar1))) +
            (uint)(CARRY4(uVar9,uVar7) || CARRY4(uVar9 + uVar7,(uint)CARRY4((uint)lVar4,uVar12)));
    if ((int)((ulonglong)param_3 * (ulonglong)param_1) != 0) {
      uVar10 = uVar10 | 1;
    }
    iVar13 = (0x1ff < uVar7) + 0x14;
    uVar11 = 0x20 - iVar13;
    uVar8 = uVar10 << (uVar11 & 0xff);
    uVar9 = uVar14 << (uVar11 & 0xff) | uVar10 >> iVar13;
    uVar10 = (uVar7 << (uVar11 & 0xff) | uVar14 >> iVar13) +
             ((iVar16 >> 0x10) + -4 + (uint)(0x1ff < uVar7)) * 0x100000;
    uVar14 = uVar10 ^ iVar15 * -0x80000000;
    if ((uVar8 != 0) && (SUB41(uVar8 >> 0x1f,0))) {
      if ((uVar8 & 0x7fffffff) == 0) {
        uVar7 = uVar7 | 0x80000000;
      }
      uVar14 = uVar14 + (0xfffffffe < uVar9);
      uVar9 = uVar9 + 1 & ~(uVar7 >> 0x1f);
    }
    if ((-1 < (int)uVar10) && ((uVar10 & DAT_4a171478) != 0 && (DAT_4a171478 & ~uVar14) != 0)) {
      return CONCAT44(uVar14,uVar9);
    }
    if (0x3ffffff < iVar16) {
      return (ulonglong)((uVar14 + 0xa0000000 | 0x7fffffff) ^ 0xfffff) << 0x20;
    }
    return (ulonglong)(uVar14 + 0x60000000 & 0x80000000) << 0x20;
  }
  uVar7 = param_2 * 2;
  uVar14 = DAT_4a171474 * 0x20;
  bVar17 = uVar7 == uVar14;
  bVar18 = bVar17 && param_1 == 0;
  bVar19 = bVar17 || uVar14 <= uVar7;
  if (!bVar17 && uVar14 > uVar7 || bVar17 && param_1 == 0) {
    bVar19 = DAT_4a171474 * 0x20 <= param_4 * 2;
    bVar18 = param_4 * 2 == DAT_4a171474 * 0x20;
  }
  if (bVar18) {
    bVar19 = true;
  }
  if (!bVar19 || bVar18 && param_3 == 0) {
    uVar7 = param_2 * 2;
    if (0x1fffff < uVar7) {
      uVar7 = param_4 * 2;
    }
    if (0x1fffff < uVar7) {
      return (ulonglong)((param_2 ^ param_4) & 0x80000000 | 0x7ff00000) << 0x20;
    }
    return (ulonglong)DAT_4a171480 << 0x20;
  }
  uVar6 = 0;
  uVar7 = DAT_4a17147c & 0xf;
  if (uVar7 == 9) {
    if ((DAT_4a17147c & 0x100000) == 0) {
      return (ulonglong)DAT_4a170a28 << 0x20;
    }
    if ((DAT_4a17147c & 0x70000) != 0) {
      return CONCAT44(~(DAT_4a17147c << 0xf) << 1,8);
    }
    return CONCAT44(DAT_4a170a28,0x30000000);
  }
  if (uVar7 == 10) {
    if ((DAT_4a17147c & 0x40) != 0) {
      uVar6 = 0x80000000;
    }
    return CONCAT44(DAT_4a170a28,uVar6);
  }
  if (uVar7 != 8) {
    return (ulonglong)DAT_4a170a28 << 0x20;
  }
  if ((DAT_4a17147c & 0x40) != 0) {
    return 0;
  }
  if ((DAT_4a17147c & 0x10) != 0) {
    return 0;
  }
  return CONCAT44(DAT_4a170a28,DAT_4a170a28 & 0xff000000 | (DAT_4a170a28 & 0xffffff) << 3);
}



// Address: 4a171488

longlong FUN_4a171488(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  byte in_Q;
  
  uVar3 = param_4 | param_2;
  if ((int)uVar3 < 0) {
    if ((int)(uVar3 + 0x100000) < 0) {
      if ((int)(uVar3 - 0x100000) < 0) {
        if (param_2 != param_4) {
          return CONCAT44(param_2,param_1);
        }
        return CONCAT44(param_2,param_1);
      }
      goto LAB_4a1714c4;
    }
    if (param_4 << 1 < 0xffe00000 && param_2 << 1 < 0xffe00000) {
      return CONCAT44(param_2,param_1);
    }
  }
  else {
    bVar7 = SCARRY4(uVar3,0x100000);
    bVar6 = -1 < (int)(uVar3 + 0x100000);
    if (bVar6) {
      bVar7 = SBORROW4(uVar3,0x100000);
    }
    if (bVar6 && -1 < (int)(uVar3 - 0x100000)) {
      if (param_4 != param_2) {
        return CONCAT44(param_2,param_1);
      }
      return CONCAT44(param_2,param_1);
    }
    if (!bVar7) {
LAB_4a1714c4:
      return CONCAT44(param_2,param_1);
    }
    if (-1 < (int)(param_4 + 0x100000) && -1 < (int)(param_2 + 0x100000)) {
      return CONCAT44(param_2,param_1);
    }
  }
  uVar3 = param_4 * 2;
  bVar7 = uVar3 == 0xffe00000 && param_3 == 0;
  if (uVar3 < 0xffe00000 || uVar3 == 0xffe00000 && param_3 == 0) {
    uVar3 = param_2 * 2;
    bVar7 = uVar3 == 0xffe00000;
  }
  if (!bVar7 && uVar3 < 0xffe00000 || bVar7 && param_1 == 0) {
    if ((int)(param_4 | param_2) < 0) {
      bVar7 = param_4 <= param_2;
      if (param_2 == param_4) {
        bVar7 = param_3 <= param_1;
      }
      uVar3 = ((byte)((param_2 == param_4 && param_1 == param_3) << 3 | bVar7 << 2 | in_Q) & 0xd) <<
              0x1b;
      if (!bVar7) {
        uVar3 = uVar3 | 0x80000000;
      }
      return CONCAT44(param_4,uVar3);
    }
    bVar7 = param_2 <= param_4;
    bVar6 = SBORROW4(param_4,param_2);
    iVar1 = param_4 - param_2;
    if (param_4 == param_2) {
      bVar7 = param_1 <= param_3;
      bVar6 = SBORROW4(param_3,param_1);
      iVar1 = param_3 - param_1;
    }
    bVar4 = param_4 == param_2 && param_3 == param_1;
    if (bVar6) {
      bVar6 = !bVar7;
      if (bVar6) {
        bVar7 = false;
      }
      bVar5 = !bVar6;
      if (bVar5) {
        bVar7 = true;
      }
      return CONCAT44(param_4,(uint)(byte)((!bVar5 && (bVar6 || iVar1 < 0)) << 4 |
                                           (!bVar5 && (!bVar6 && bVar4)) << 3 | bVar7 << 2 | in_Q)
                              << 0x1b);
    }
    return CONCAT44(param_4,(uint)(byte)((iVar1 < 0) << 4 | bVar4 << 3 | bVar7 << 2 | in_Q) << 0x1b)
    ;
  }
  if ((DAT_4a171524 & 0xd0000) == 0) {
    uVar2 = 0;
    uVar3 = DAT_4a171524 & 0xf;
    if (uVar3 != 9) {
      if (uVar3 == 10) {
        if ((DAT_4a171524 & 0x40) != 0) {
          uVar2 = 0x80000000;
        }
        return CONCAT44(DAT_4a170a28,uVar2);
      }
      if (uVar3 != 8) {
        return (ulonglong)DAT_4a170a28 << 0x20;
      }
      if ((DAT_4a171524 & 0x40) != 0) {
        return 0;
      }
      if ((DAT_4a171524 & 0x10) != 0) {
        return 0;
      }
      return CONCAT44(DAT_4a170a28,DAT_4a170a28 & 0xff000000 | (DAT_4a170a28 & 0xffffff) << 3);
    }
    param_3 = 8;
    param_4 = DAT_4a170a28;
  }
  if ((DAT_4a171524 & 0x100000) == 0) {
    return (ulonglong)param_4 << 0x20;
  }
  if ((DAT_4a171524 & 0x70000) != 0) {
    return CONCAT44(~(DAT_4a171524 << 0xf) << 1,param_3);
  }
  return CONCAT44(param_4,0x30000000);
}



// Address: 4a17152c

ulonglong FUN_4a17152c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  
  uVar4 = param_2 ^ 0x80000000;
  if (-1 < (int)(param_2 ^ param_4)) {
    param_4 = param_4 ^ 0x80000000;
    bVar12 = param_3 <= param_1;
    uVar9 = param_1 - param_3;
    if (uVar4 <= param_4 && (uint)bVar12 <= uVar4 - param_4) {
      bVar13 = CARRY4(param_3,uVar9);
      param_3 = param_3 + uVar9;
      uVar11 = uVar4 - (param_4 + !bVar12) ^ 0x80000000;
      param_4 = param_4 + uVar11 + (uint)bVar13;
      bVar12 = param_1 < uVar9;
      param_1 = param_1 - uVar9;
      uVar4 = uVar4 - (uVar11 + bVar12);
    }
    uVar9 = uVar4 >> 0x14;
    uVar11 = uVar9 - (param_4 >> 0x14);
    if ((DAT_4a17190c & param_4 << 1) != 0 && DAT_4a17190c != uVar9 << 0x15) {
      uVar6 = -param_3;
      uVar5 = uVar4 & ~(uVar9 << 0x14);
      iVar8 = ((int)DAT_4a17190c >> 1) -
              ((param_4 & ~((int)DAT_4a17190c >> 1)) + (uint)(param_3 != 0));
      uVar10 = 0x20 - uVar11;
      if (uVar11 < 0x21) {
        uVar3 = uVar6 >> (uVar11 & 0xff);
        uVar2 = param_1 + uVar3;
        uVar5 = uVar5 + (iVar8 >> (uVar11 & 0xff)) + (uint)CARRY4(param_1,uVar3);
        uVar11 = iVar8 << (uVar10 & 0xff);
        uVar3 = uVar2 + uVar11;
        bVar12 = CARRY4(uVar5,(uint)CARRY4(uVar2,uVar11));
        iVar8 = uVar5 + CARRY4(uVar2,uVar11);
      }
      else {
        uVar11 = uVar11 - 0x20;
        uVar6 = (uint)(param_3 * -2 != 0) | (iVar8 * 2 + (uint)CARRY4(uVar6,uVar6)) * 2;
        uVar10 = 0x1e - uVar11;
        if (0x1e < uVar11 || uVar10 == 0) {
          return CONCAT44(uVar5 + uVar9 * 0x100000,param_1);
        }
        uVar11 = iVar8 >> (uVar11 & 0xff);
        uVar3 = param_1 + uVar11;
        bVar12 = uVar5 != 0 || uVar5 < CARRY4(param_1,uVar11);
        iVar8 = uVar5 - !CARRY4(param_1,uVar11);
      }
      if (-1 < iVar8) {
        iVar8 = iVar8 + uVar9 * 0x100000;
        iVar7 = uVar6 << (uVar10 & 0xff);
        if (-1 < iVar7) {
          return CONCAT44(iVar8,uVar3);
        }
        uVar3 = uVar3 + 1;
        if (uVar3 != 0 && iVar7 != -0x80000000) {
          return CONCAT44(iVar8,uVar3);
        }
        if (uVar3 == 0) {
          iVar8 = iVar8 + 1;
          uVar3 = 0;
        }
        else {
          uVar3 = uVar3 & 0xfffffffe;
        }
        return CONCAT44(iVar8,uVar3);
      }
      uVar10 = uVar10 + 1 & 0xff;
      bVar12 = uVar10 == 0 && bVar12 || uVar10 != 0 && (bool)((byte)(uVar6 >> 0x20 - uVar10) & 1);
      uVar11 = uVar3 * 2 + (uint)bVar12;
      iVar8 = iVar8 * 2 + (uint)(CARRY4(uVar3,uVar3) || CARRY4(uVar3 * 2,(uint)bVar12));
      uVar5 = iVar8 + uVar9 * 0x200000;
      bVar12 = (bool)((byte)(uVar5 >> 0x14) & 1);
      if (!bVar12 || uVar5 >> 0x15 == 0) {
        if (bVar12) {
          uVar4 = (iVar8 >> 1) + uVar9 * 0x100000;
          uVar11 = (uint)((byte)iVar8 & 1) << 0x1f | uVar11 >> 1;
          if (uVar4 * 2 != 0 || uVar11 != 0) {
            if (0x1fffff < uVar4 * 2) {
              return CONCAT44(uVar4,uVar11);
            }
            return (ulonglong)(uVar4 & 0x80000000) << 0x20;
          }
        }
        else {
          uVar6 = iVar8 + 0x200000;
          if (uVar6 != 0 || uVar11 != 0) {
            iVar8 = (uVar9 & 0xfffff7ff) - 2;
            do {
              bVar12 = CARRY4(uVar11,uVar11);
              uVar11 = uVar11 * 2;
              uVar6 = uVar6 * 2 + (uint)bVar12;
              iVar8 = iVar8 + -1;
            } while ((uVar6 & 0x100000) == 0);
            iVar7 = uVar6 + (uVar4 & 0x80000000) + iVar8 * 0x100000;
            if (-1 < iVar8) {
              return CONCAT44(iVar7,uVar11);
            }
            return (ulonglong)(iVar7 + 0x60000000U & 0x80000000) << 0x20;
          }
        }
        return (ulonglong)uVar11;
      }
      iVar8 = iVar8 + uVar9 * 0x100000;
      uVar4 = -((int)(uVar6 << uVar10) >> 0x1f);
      uVar9 = uVar11 + uVar4;
      bVar12 = uVar9 == 0;
      if (!CARRY4(uVar11,uVar4)) {
        bVar12 = uVar6 << uVar10 == -0x80000000;
      }
      if (!bVar12) {
        return CONCAT44(iVar8,uVar9);
      }
      if (uVar9 == 0) {
        iVar8 = iVar8 + 1;
        uVar9 = 0;
      }
      else {
        uVar9 = uVar9 & 0xfffffffe;
      }
      return CONCAT44(iVar8,uVar9);
    }
    if (DAT_4a17190c != uVar9 << 0x15) {
      if ((uVar4 & DAT_4a17190c >> 1) == 0) {
        uVar4 = 0;
        param_1 = 0;
      }
      return CONCAT44(uVar4,param_1);
    }
    uVar9 = uVar4 * 2 + (uint)(param_1 != 0);
    uVar11 = param_4 * 2 + (uint)(param_3 != 0);
    bVar13 = DAT_4a17190c <= uVar9;
    bVar12 = uVar9 == DAT_4a17190c;
    if (!bVar13 || bVar12) {
      bVar13 = DAT_4a17190c <= uVar11;
      bVar12 = uVar11 == DAT_4a17190c;
    }
    uVar9 = DAT_4a171910;
    if (!bVar13 || bVar12) {
      iVar8 = uVar4 * 2 + (uint)(param_1 != 0);
      if (iVar8 == param_4 * 2 + (uint)(param_3 != 0)) {
        if ((int)(uVar4 ^ param_4) < 0) {
          return (ulonglong)uVar4 << 0x20;
        }
        return (ulonglong)DAT_4a171914 << 0x20;
      }
      if (iVar8 == -0x200000) {
        return (ulonglong)uVar4 << 0x20;
      }
      return (ulonglong)(param_4 ^ 0x80000000) << 0x20;
    }
LAB_4a170a1c:
    uVar1 = 0;
    uVar4 = uVar9 & 0xf;
    if (uVar4 == 9) {
      if ((uVar9 & 0x100000) == 0) {
        return (ulonglong)DAT_4a170a28 << 0x20;
      }
      if ((uVar9 & 0x70000) != 0) {
        return CONCAT44(~(uVar9 << 0xf) << 1,8);
      }
      return CONCAT44(DAT_4a170a28,0x30000000);
    }
    if (uVar4 == 10) {
      if ((uVar9 & 0x40) != 0) {
        uVar1 = 0x80000000;
      }
      return CONCAT44(DAT_4a170a28,uVar1);
    }
    if (uVar4 != 8) {
      return (ulonglong)DAT_4a170a28 << 0x20;
    }
    if ((uVar9 & 0x40) != 0) {
      return 0;
    }
    if ((uVar9 & 0x10) != 0) {
      return 0;
    }
    return CONCAT44(DAT_4a170a28,DAT_4a170a28 & 0xff000000 | (DAT_4a170a28 & 0xffffff) << 3);
  }
  uVar9 = param_1 - param_3;
  iVar8 = uVar4 - (param_4 + (param_3 > param_1));
  if (uVar4 <= param_4 && (uint)(param_3 <= param_1) <= uVar4 - param_4) {
    bVar12 = CARRY4(param_3,uVar9);
    param_3 = param_3 + uVar9;
    param_4 = param_4 + iVar8 + (uint)bVar12;
    bVar12 = param_1 < uVar9;
    param_1 = param_1 - uVar9;
    uVar4 = uVar4 - (iVar8 + (uint)bVar12);
  }
  uVar9 = uVar4 >> 0x14;
  uVar11 = uVar9 - (param_4 >> 0x14);
  if ((DAT_4a170a0c & param_4 << 1) == 0 || DAT_4a170a0c == uVar9 << 0x15) {
    if (DAT_4a170a0c != uVar9 << 0x15) {
      if ((uVar4 & DAT_4a170a0c >> 1) == 0) {
        uVar4 = uVar4 & 0x80000000;
        param_1 = 0;
      }
      return CONCAT44(uVar4,param_1);
    }
    uVar9 = uVar4 * 2 + (uint)(param_1 != 0);
    uVar11 = param_4 * 2 + (uint)(param_3 != 0);
    bVar13 = DAT_4a170a0c <= uVar9;
    bVar12 = uVar9 == DAT_4a170a0c;
    if (!bVar13 || bVar12) {
      bVar13 = DAT_4a170a0c <= uVar11;
      bVar12 = uVar11 == DAT_4a170a0c;
    }
    uVar9 = DAT_4a170a14;
    if (!bVar13 || bVar12) {
      iVar8 = uVar4 * 2 + (uint)(param_1 != 0);
      if (iVar8 == param_4 * 2 + (uint)(param_3 != 0)) {
        if (-1 < (int)(uVar4 ^ param_4)) {
          return (ulonglong)uVar4 << 0x20;
        }
        return (ulonglong)DAT_4a170a18 << 0x20;
      }
      if (iVar8 == -0x200000) {
        return (ulonglong)uVar4 << 0x20;
      }
      return (ulonglong)param_4 << 0x20;
    }
    goto LAB_4a170a1c;
  }
  uVar4 = uVar4 & ~(uVar9 << 0x14);
  uVar6 = param_4 & ~DAT_4a170a0c | 0x100000;
  uVar10 = 0x20 - uVar11;
  if (uVar11 < 0x21) {
    uVar3 = param_3 >> (uVar11 & 0xff);
    bVar12 = CARRY4(param_1,uVar3);
    uVar3 = param_1 + uVar3;
    uVar5 = uVar6 << (uVar10 & 0xff);
    param_1 = uVar3 + uVar5;
    uVar11 = uVar4 + (uVar6 >> (uVar11 & 0xff)) + (uint)bVar12 + (uint)CARRY4(uVar3,uVar5);
    if (0xfffff < uVar11) {
LAB_4a170928:
      uVar4 = (uVar11 + 0x100000 >> 1) + uVar9 * 0x100000;
      bVar12 = (bool)((byte)param_1 & 1);
      uVar9 = (uint)((byte)(uVar11 + 0x100000) & 1) << 0x1f | param_1 >> 1;
      if (!bVar12) {
LAB_4a170960:
        if (uVar4 * 2 < 0xffe00000) {
          return CONCAT44(uVar4,uVar9);
        }
        uVar9 = DAT_4a170a10;
        if ((int)(uVar4 + 0xa0000000) < 0) {
          uVar9 = DAT_4a170a10 | 0x80000000;
        }
        return (ulonglong)uVar9 << 0x20;
      }
      bVar13 = CARRY4(uVar9,(uint)bVar12);
      uVar9 = uVar9 + bVar12;
      uVar11 = uVar9;
      if (!bVar13) {
        uVar11 = param_3 << (uVar10 & 0xff);
      }
      if (uVar11 != 0) goto LAB_4a170960;
      goto LAB_4a1708d4;
    }
    uVar4 = uVar11 + uVar9 * 0x100000;
  }
  else {
    param_3 = uVar6 * 2 + (uint)(param_3 != 0);
    uVar11 = uVar11 - 0x20;
    bVar12 = uVar11 < 0x20;
    uVar10 = 0x1f - uVar11;
    if (bVar12) {
      uVar6 = uVar6 >> (uVar11 & 0xff);
      bVar12 = CARRY4(param_1,uVar6);
      param_1 = param_1 + uVar6;
    }
    else {
      uVar10 = 0;
    }
    uVar4 = uVar4 + uVar9 * 0x100000 + (uint)bVar12;
    if (uVar9 != uVar4 >> 0x14) {
      uVar11 = uVar4 + uVar9 * -0x100000;
      goto LAB_4a170928;
    }
  }
  param_3 = param_3 << (uVar10 & 0xff);
  if (-1 < (int)param_3) {
    return CONCAT44(uVar4,param_1);
  }
  uVar9 = param_1 + 1;
  uVar11 = uVar9;
  if (param_1 != 0xffffffff) {
    uVar11 = param_3 & 0x7fffffff;
  }
  if (uVar11 != 0) {
    return CONCAT44(uVar4,uVar9);
  }
LAB_4a1708d4:
  if (uVar9 == 0) {
    uVar4 = uVar4 + 1;
    uVar9 = 0;
  }
  else {
    uVar9 = uVar9 & 0xfffffffe;
  }
  if (uVar4 * 2 < 0xffe00000) {
    return CONCAT44(uVar4,uVar9);
  }
  uVar9 = DAT_4a170a10;
  if ((int)(uVar4 + 0xa0000000) < 0) {
    uVar9 = DAT_4a170a10 | 0x80000000;
  }
  return (ulonglong)uVar9 << 0x20;
}



// Address: 4a1716d0

ulonglong FUN_4a1716d0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  
  if (-1 < (int)(param_2 ^ param_4)) {
    bVar11 = param_3 <= param_1;
    uVar8 = param_1 - param_3;
    if (param_2 <= param_4 && (uint)bVar11 <= param_2 - param_4) {
      bVar12 = CARRY4(param_3,uVar8);
      param_3 = param_3 + uVar8;
      uVar10 = param_2 - (param_4 + !bVar11) ^ 0x80000000;
      param_4 = param_4 + uVar10 + (uint)bVar12;
      bVar11 = param_1 < uVar8;
      param_1 = param_1 - uVar8;
      param_2 = param_2 - (uVar10 + bVar11);
    }
    uVar8 = param_2 >> 0x14;
    uVar10 = uVar8 - (param_4 >> 0x14);
    if ((DAT_4a17190c & param_4 << 1) != 0 && DAT_4a17190c != uVar8 << 0x15) {
      uVar5 = -param_3;
      uVar4 = param_2 & ~(uVar8 << 0x14);
      iVar7 = ((int)DAT_4a17190c >> 1) -
              ((param_4 & ~((int)DAT_4a17190c >> 1)) + (uint)(param_3 != 0));
      uVar9 = 0x20 - uVar10;
      if (uVar10 < 0x21) {
        uVar3 = uVar5 >> (uVar10 & 0xff);
        uVar2 = param_1 + uVar3;
        uVar4 = uVar4 + (iVar7 >> (uVar10 & 0xff)) + (uint)CARRY4(param_1,uVar3);
        uVar10 = iVar7 << (uVar9 & 0xff);
        uVar3 = uVar2 + uVar10;
        bVar11 = CARRY4(uVar4,(uint)CARRY4(uVar2,uVar10));
        iVar7 = uVar4 + CARRY4(uVar2,uVar10);
      }
      else {
        uVar10 = uVar10 - 0x20;
        uVar5 = (uint)(param_3 * -2 != 0) | (iVar7 * 2 + (uint)CARRY4(uVar5,uVar5)) * 2;
        uVar9 = 0x1e - uVar10;
        if (0x1e < uVar10 || uVar9 == 0) {
          return CONCAT44(uVar4 + uVar8 * 0x100000,param_1);
        }
        uVar10 = iVar7 >> (uVar10 & 0xff);
        uVar3 = param_1 + uVar10;
        bVar11 = uVar4 != 0 || uVar4 < CARRY4(param_1,uVar10);
        iVar7 = uVar4 - !CARRY4(param_1,uVar10);
      }
      if (-1 < iVar7) {
        iVar7 = iVar7 + uVar8 * 0x100000;
        iVar6 = uVar5 << (uVar9 & 0xff);
        if (-1 < iVar6) {
          return CONCAT44(iVar7,uVar3);
        }
        uVar3 = uVar3 + 1;
        if (uVar3 != 0 && iVar6 != -0x80000000) {
          return CONCAT44(iVar7,uVar3);
        }
        if (uVar3 == 0) {
          iVar7 = iVar7 + 1;
          uVar3 = 0;
        }
        else {
          uVar3 = uVar3 & 0xfffffffe;
        }
        return CONCAT44(iVar7,uVar3);
      }
      uVar9 = uVar9 + 1 & 0xff;
      bVar11 = uVar9 == 0 && bVar11 || uVar9 != 0 && (bool)((byte)(uVar5 >> 0x20 - uVar9) & 1);
      uVar10 = uVar3 * 2 + (uint)bVar11;
      iVar7 = iVar7 * 2 + (uint)(CARRY4(uVar3,uVar3) || CARRY4(uVar3 * 2,(uint)bVar11));
      uVar4 = iVar7 + uVar8 * 0x200000;
      bVar11 = (bool)((byte)(uVar4 >> 0x14) & 1);
      if (!bVar11 || uVar4 >> 0x15 == 0) {
        if (bVar11) {
          uVar8 = (iVar7 >> 1) + uVar8 * 0x100000;
          uVar10 = (uint)((byte)iVar7 & 1) << 0x1f | uVar10 >> 1;
          if (uVar8 * 2 != 0 || uVar10 != 0) {
            if (0x1fffff < uVar8 * 2) {
              return CONCAT44(uVar8,uVar10);
            }
            return (ulonglong)(uVar8 & 0x80000000) << 0x20;
          }
        }
        else {
          uVar5 = iVar7 + 0x200000;
          if (uVar5 != 0 || uVar10 != 0) {
            iVar7 = (uVar8 & 0xfffff7ff) - 2;
            do {
              bVar11 = CARRY4(uVar10,uVar10);
              uVar10 = uVar10 * 2;
              uVar5 = uVar5 * 2 + (uint)bVar11;
              iVar7 = iVar7 + -1;
            } while ((uVar5 & 0x100000) == 0);
            iVar6 = uVar5 + (param_2 & 0x80000000) + iVar7 * 0x100000;
            if (-1 < iVar7) {
              return CONCAT44(iVar6,uVar10);
            }
            return (ulonglong)(iVar6 + 0x60000000U & 0x80000000) << 0x20;
          }
        }
        return (ulonglong)uVar10;
      }
      iVar7 = iVar7 + uVar8 * 0x100000;
      uVar8 = -((int)(uVar5 << uVar9) >> 0x1f);
      uVar4 = uVar10 + uVar8;
      bVar11 = uVar4 == 0;
      if (!CARRY4(uVar10,uVar8)) {
        bVar11 = uVar5 << uVar9 == -0x80000000;
      }
      if (!bVar11) {
        return CONCAT44(iVar7,uVar4);
      }
      if (uVar4 == 0) {
        iVar7 = iVar7 + 1;
        uVar4 = 0;
      }
      else {
        uVar4 = uVar4 & 0xfffffffe;
      }
      return CONCAT44(iVar7,uVar4);
    }
    if (DAT_4a17190c != uVar8 << 0x15) {
      if ((param_2 & DAT_4a17190c >> 1) == 0) {
        param_2 = 0;
        param_1 = 0;
      }
      return CONCAT44(param_2,param_1);
    }
    uVar8 = param_2 * 2 + (uint)(param_1 != 0);
    uVar10 = param_4 * 2 + (uint)(param_3 != 0);
    bVar12 = DAT_4a17190c <= uVar8;
    bVar11 = uVar8 == DAT_4a17190c;
    if (!bVar12 || bVar11) {
      bVar12 = DAT_4a17190c <= uVar10;
      bVar11 = uVar10 == DAT_4a17190c;
    }
    uVar8 = DAT_4a171910;
    if (!bVar12 || bVar11) {
      iVar7 = param_2 * 2 + (uint)(param_1 != 0);
      if (iVar7 == param_4 * 2 + (uint)(param_3 != 0)) {
        if ((int)(param_2 ^ param_4) < 0) {
          return (ulonglong)param_2 << 0x20;
        }
        return (ulonglong)DAT_4a171914 << 0x20;
      }
      if (iVar7 == -0x200000) {
        return (ulonglong)param_2 << 0x20;
      }
      return (ulonglong)(param_4 ^ 0x80000000) << 0x20;
    }
LAB_4a170a1c:
    uVar1 = 0;
    uVar10 = uVar8 & 0xf;
    if (uVar10 == 9) {
      if ((uVar8 & 0x100000) == 0) {
        return (ulonglong)DAT_4a170a28 << 0x20;
      }
      if ((uVar8 & 0x70000) != 0) {
        return CONCAT44(~(uVar8 << 0xf) << 1,8);
      }
      return CONCAT44(DAT_4a170a28,0x30000000);
    }
    if (uVar10 == 10) {
      if ((uVar8 & 0x40) != 0) {
        uVar1 = 0x80000000;
      }
      return CONCAT44(DAT_4a170a28,uVar1);
    }
    if (uVar10 != 8) {
      return (ulonglong)DAT_4a170a28 << 0x20;
    }
    if ((uVar8 & 0x40) != 0) {
      return 0;
    }
    if ((uVar8 & 0x10) != 0) {
      return 0;
    }
    return CONCAT44(DAT_4a170a28,DAT_4a170a28 & 0xff000000 | (DAT_4a170a28 & 0xffffff) << 3);
  }
  param_4 = param_4 ^ 0x80000000;
  uVar8 = param_1 - param_3;
  iVar7 = param_2 - (param_4 + (param_3 > param_1));
  if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
    bVar11 = CARRY4(param_3,uVar8);
    param_3 = param_3 + uVar8;
    param_4 = param_4 + iVar7 + (uint)bVar11;
    bVar11 = param_1 < uVar8;
    param_1 = param_1 - uVar8;
    param_2 = param_2 - (iVar7 + (uint)bVar11);
  }
  uVar8 = param_2 >> 0x14;
  uVar10 = uVar8 - (param_4 >> 0x14);
  if ((DAT_4a170a0c & param_4 << 1) == 0 || DAT_4a170a0c == uVar8 << 0x15) {
    if (DAT_4a170a0c != uVar8 << 0x15) {
      if ((param_2 & DAT_4a170a0c >> 1) == 0) {
        param_2 = param_2 & 0x80000000;
        param_1 = 0;
      }
      return CONCAT44(param_2,param_1);
    }
    uVar8 = param_2 * 2 + (uint)(param_1 != 0);
    uVar10 = param_4 * 2 + (uint)(param_3 != 0);
    bVar12 = DAT_4a170a0c <= uVar8;
    bVar11 = uVar8 == DAT_4a170a0c;
    if (!bVar12 || bVar11) {
      bVar12 = DAT_4a170a0c <= uVar10;
      bVar11 = uVar10 == DAT_4a170a0c;
    }
    uVar8 = DAT_4a170a14;
    if (!bVar12 || bVar11) {
      iVar7 = param_2 * 2 + (uint)(param_1 != 0);
      if (iVar7 == param_4 * 2 + (uint)(param_3 != 0)) {
        if (-1 < (int)(param_2 ^ param_4)) {
          return (ulonglong)param_2 << 0x20;
        }
        return (ulonglong)DAT_4a170a18 << 0x20;
      }
      if (iVar7 == -0x200000) {
        return (ulonglong)param_2 << 0x20;
      }
      return (ulonglong)param_4 << 0x20;
    }
    goto LAB_4a170a1c;
  }
  param_2 = param_2 & ~(uVar8 << 0x14);
  uVar5 = param_4 & ~DAT_4a170a0c | 0x100000;
  uVar9 = 0x20 - uVar10;
  if (uVar10 < 0x21) {
    uVar3 = param_3 >> (uVar10 & 0xff);
    bVar11 = CARRY4(param_1,uVar3);
    uVar3 = param_1 + uVar3;
    uVar4 = uVar5 << (uVar9 & 0xff);
    param_1 = uVar3 + uVar4;
    uVar5 = param_2 + (uVar5 >> (uVar10 & 0xff)) + (uint)bVar11 + (uint)CARRY4(uVar3,uVar4);
    if (0xfffff < uVar5) {
LAB_4a170928:
      uVar10 = (uVar5 + 0x100000 >> 1) + uVar8 * 0x100000;
      bVar11 = (bool)((byte)param_1 & 1);
      uVar8 = (uint)((byte)(uVar5 + 0x100000) & 1) << 0x1f | param_1 >> 1;
      if (!bVar11) {
LAB_4a170960:
        if (uVar10 * 2 < 0xffe00000) {
          return CONCAT44(uVar10,uVar8);
        }
        uVar8 = DAT_4a170a10;
        if ((int)(uVar10 + 0xa0000000) < 0) {
          uVar8 = DAT_4a170a10 | 0x80000000;
        }
        return (ulonglong)uVar8 << 0x20;
      }
      bVar12 = CARRY4(uVar8,(uint)bVar11);
      uVar8 = uVar8 + bVar11;
      uVar5 = uVar8;
      if (!bVar12) {
        uVar5 = param_3 << (uVar9 & 0xff);
      }
      if (uVar5 != 0) goto LAB_4a170960;
      goto LAB_4a1708d4;
    }
    uVar10 = uVar5 + uVar8 * 0x100000;
  }
  else {
    param_3 = uVar5 * 2 + (uint)(param_3 != 0);
    uVar10 = uVar10 - 0x20;
    bVar11 = uVar10 < 0x20;
    uVar9 = 0x1f - uVar10;
    if (bVar11) {
      uVar5 = uVar5 >> (uVar10 & 0xff);
      bVar11 = CARRY4(param_1,uVar5);
      param_1 = param_1 + uVar5;
    }
    else {
      uVar9 = 0;
    }
    uVar10 = param_2 + uVar8 * 0x100000 + (uint)bVar11;
    if (uVar8 != uVar10 >> 0x14) {
      uVar5 = uVar10 + uVar8 * -0x100000;
      goto LAB_4a170928;
    }
  }
  param_3 = param_3 << (uVar9 & 0xff);
  if (-1 < (int)param_3) {
    return CONCAT44(uVar10,param_1);
  }
  uVar8 = param_1 + 1;
  uVar5 = uVar8;
  if (param_1 != 0xffffffff) {
    uVar5 = param_3 & 0x7fffffff;
  }
  if (uVar5 != 0) {
    return CONCAT44(uVar10,uVar8);
  }
LAB_4a1708d4:
  if (uVar8 == 0) {
    uVar10 = uVar10 + 1;
    uVar8 = 0;
  }
  else {
    uVar8 = uVar8 & 0xfffffffe;
  }
  if (uVar10 * 2 < 0xffe00000) {
    return CONCAT44(uVar10,uVar8);
  }
  uVar8 = DAT_4a170a10;
  if ((int)(uVar10 + 0xa0000000) < 0) {
    uVar8 = DAT_4a170a10 | 0x80000000;
  }
  return (ulonglong)uVar8 << 0x20;
}



// Address: 4a171a2c

ulonglong FUN_4a171a2c(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_1 + 0x800000 & 0x7f000000) != 0) {
    iVar1 = (int)param_1 >> 3;
    if (-1 < iVar1) {
      return CONCAT44(iVar1 + 0x38000000,param_1 << 0x1d);
    }
    return CONCAT44(iVar1 + -0x38000000,param_1 << 0x1d);
  }
  if ((param_1 + 0x800000 & 0x800000) != 0) {
    if ((param_1 & 0x7fffffff) == 0) {
      return (ulonglong)param_1 << 0x20;
    }
    return (ulonglong)(param_1 & 0x80000000) << 0x20;
  }
  if ((param_1 & 0x7fffff) == 0) {
    return (ulonglong)param_1 << 0x20 | 0x70000000000000;
  }
  uVar2 = DAT_4a171a8c & 0xf;
  if (uVar2 == 9) {
    if ((DAT_4a171a8c & 0x100000) == 0) {
      return (ulonglong)param_2 << 0x20;
    }
    if ((DAT_4a171a8c & 0x70000) != 0) {
      return CONCAT44(~(DAT_4a171a8c << 0xf) << 1,8);
    }
    return CONCAT44(param_2,0x30000000);
  }
  if (uVar2 == 10) {
    uVar2 = DAT_4a171bb0;
    if ((DAT_4a171a8c & 0x40) != 0) {
      uVar2 = 0x80000000;
    }
    return CONCAT44(param_2,uVar2);
  }
  if (uVar2 != 8) {
    return CONCAT44(param_2,DAT_4a171bb0);
  }
  if ((DAT_4a171a8c & 0x40) != 0) {
    return 0;
  }
  if ((DAT_4a171a8c & 0x10) != 0) {
    return CONCAT44(DAT_4a171bb0 & 0xff000000 | (DAT_4a171bb0 & 0xfffffff) >> 3,DAT_4a171bb0 << 0x1d
                   );
  }
  return CONCAT44(param_2,param_2 & 0xff000000 | DAT_4a171bb0 >> 0x1d | (param_2 & 0xffffff) << 3);
}




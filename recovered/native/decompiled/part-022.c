/* AUTOMATED DECOMPILER OUTPUT. Not original source, not a buildable game.
 * Function boundaries, types, indirect calls, and data still require validation. */

// Address: 4a12a35c

void FUN_4a12a35c(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  
  iVar1 = FUN_4a084be4(param_1 + 0x2e8);
  if (iVar1 <= DAT_4a12a454) {
    return;
  }
  uVar8 = true;
  if (*(int *)(param_1 + 0x2e0) != 0) {
    FUN_4a1720a0(iVar1,0x3f800000);
    if ((bool)uVar8) {
      iVar1 = 0x3f800000;
    }
    uVar2 = FUN_4a1725c0(0x3f800000,iVar1);
    FUN_4a172458(uVar2,0);
    if ((bool)uVar8) {
      uVar2 = 0;
    }
    iVar3 = FUN_4a13caa0(*(undefined4 *)(param_1 + 0x20));
    iVar4 = FUN_4a13db00(*(undefined4 *)(param_1 + 0x2e0));
    iVar5 = FUN_4a13caa0(*(undefined4 *)(param_1 + 0x20));
    iVar6 = FUN_4a13db00(*(undefined4 *)(param_1 + 0x2e0));
    uVar7 = FUN_4a171fac(iVar6 + iVar5);
    uVar2 = FUN_4a17211c(uVar7,uVar2);
    uVar7 = FUN_4a171fac(iVar3 - iVar4);
    uVar7 = FUN_4a17211c(uVar7,iVar1);
    FUN_4a171a94(uVar7,uVar2);
    uVar2 = FUN_4a171e1c();
    (**(code **)(*param_2 + 0x34))(param_2,*(undefined4 *)(param_1 + 0x2e0),0,uVar2);
    return;
  }
  return;
}



// Address: 4a12a458

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a12a458(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 uVar10;
  
  iVar1 = FUN_4a084be4(param_1 + 0x364);
  if (iVar1 <= DAT_4a12a650) {
    return;
  }
  uVar10 = 1;
  if (*(int *)(param_1 + 0x35c) != 0) {
    iVar2 = *(int *)(param_1 + 0x20);
    iVar9 = iVar2 + 0x128;
    uVar3 = FUN_4a171fac(*(int *)(param_1 + 0x3dc) + -5000);
    uVar4 = FUN_4a171fac(*(int *)(param_1 + 0x3d8) + -5000);
    uVar3 = FUN_4a171bb8(uVar4,uVar3);
    uVar3 = FUN_4a0d4b38(uVar3,0,0x3f800000);
    uVar4 = FUN_4a1725c0(0x3f800000,uVar3);
    FUN_4a172458(uVar4,0);
    if ((bool)uVar10) {
      uVar4 = 0;
    }
    FUN_4a1720a0(iVar1,0x3f800000);
    if ((bool)uVar10) {
      iVar1 = 0x3f800000;
    }
    uVar5 = FUN_4a1725c0(0x3f800000,iVar1);
    FUN_4a172458(uVar5,0);
    iVar6 = *(int *)(param_1 + 0x3e0);
    if ((bool)uVar10) {
      uVar5 = 0;
    }
    iVar7 = FUN_4a13ca78(*(undefined4 *)(param_1 + 0x20));
    iVar7 = iVar7 - *(int *)(param_1 + 0x3e0) >> 1;
    if (iVar7 < 10) {
      iVar7 = 10;
    }
    uVar8 = FUN_4a171fac(iVar7);
    uVar4 = FUN_4a17211c(uVar8,uVar4);
    uVar8 = FUN_4a171fac(-(iVar6 + 10));
    uVar3 = FUN_4a17211c(uVar8,uVar3);
    FUN_4a171a94(uVar3,uVar4);
    FUN_4a171e1c();
    uVar3 = FUN_4a17211c(uVar5,0xc1200000);
    uVar4 = FUN_4a17211c(iVar1,0x41200000);
    FUN_4a171a94(uVar4,uVar3);
    iVar1 = FUN_4a171e1c();
    uVar3 = FUN_4a171fac(iVar1 + -10);
    uVar4 = FUN_4a13ca78(*(undefined4 *)(param_1 + 0x20));
    FUN_4a09f9c8(iVar9,0xac);
    FUN_4a171e1c();
    FUN_4a171fac();
    FUN_4a171fac(uVar4);
    FUN_4a0a07ac(iVar9,0xac,0,uVar3);
    FUN_4a09f3a4(iVar9,param_2);
    FUN_4a06b02c(iVar2 + 0x278,param_2,*(undefined4 *)(param_1 + 0x35c),1);
    return;
  }
  return;
}



// Address: 4a12a654

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a12a654(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  
  FUN_4a084dd8();
  iVar2 = param_1 + 0x778;
  FUN_4a084dd8(iVar2,param_2);
  iVar3 = param_1 + 0x7ec;
  FUN_4a084dd8(iVar3,param_2);
  FUN_4a084dd8(param_1 + 0x860,param_2);
  if (*(int *)(param_1 + 0xd60) == 0) {
    return;
  }
  if ((*(int *)(param_1 + 0x1ac) == 0xd) &&
     (iVar4 = *(int *)(param_1 + 0x1b0), (iVar4 == 3 || iVar4 == 4) || iVar4 == 5)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) || (*(int *)(param_1 + 0x1ac) == 0x10)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  FUN_4a06f7a4(*(undefined4 *)(*(int *)(param_1 + 0xd60) + 0x34),param_2);
  FUN_4a06f7a4(*(undefined4 *)(*(int *)(param_1 + 0xd64) + 0x34),param_2);
  if ((*(uint *)(*(int *)(*(int *)(param_1 + 0xd60) + 0x34) + 0x24) & 2) == 0) {
    iVar4 = FUN_4a141abc(*(undefined4 *)(param_1 + 0x24),0);
    if (iVar4 == 0) {
      uVar13 = *(undefined4 *)(PTR_DAT_4a12a8dc + *(int *)(param_1 + 0xd68) * 4);
      *(undefined4 *)(param_1 + 0xd68) = 0;
    }
    else {
      uVar13 = *(undefined4 *)(PTR_DAT_4a12a8d4 + *(int *)(param_1 + 0xd68) * 4);
      if (bVar1) {
        iVar4 = 0;
      }
      else {
        uVar5 = *(int *)(param_1 + 0xd68) + 1;
        iVar4 = uVar5 + (uint)((ulonglong)uVar5 * (ulonglong)DAT_4a12a8d8 >> 0x21) * -9;
      }
      *(int *)(param_1 + 0xd68) = iVar4;
    }
    FUN_4a06f95c(*(undefined4 *)(*(int *)(param_1 + 0xd60) + 0x34),uVar13,0x10);
    FUN_4a06f95c(*(undefined4 *)(*(int *)(param_1 + 0xd64) + 0x34),uVar13,0x10);
  }
  uVar13 = FUN_4a084be4(iVar3);
  uVar6 = FUN_4a084be4(iVar2);
  uVar7 = FUN_4a084be4(param_1 + 0x704);
  FUN_4a0af1d4(*(undefined4 *)(*(int *)(param_1 + 0xd60) + 0x30),uVar7,uVar6,uVar13);
  uVar13 = FUN_4a084be4(param_1 + 0x860);
  uVar13 = FUN_4a171a94(uVar13,*(undefined4 *)(param_1 + 0xe20));
  FUN_4a0af110(*(undefined4 *)(*(int *)(param_1 + 0xd60) + 0x30),uVar13,0,0x3f800000);
  iVar4 = *(int *)(param_1 + 0x3f8);
  uVar13 = *(undefined4 *)(iVar4 + 0xc);
  uVar6 = *(undefined4 *)(iVar4 + 0x10);
  uVar7 = *(undefined4 *)(iVar4 + 0x14);
  uVar14 = *(undefined4 *)(iVar4 + 0x18);
  uVar16 = *(undefined4 *)(iVar4 + 0x1c);
  *(undefined4 *)(param_1 + 0x404) = *(undefined4 *)(iVar4 + 8);
  *(undefined4 *)(param_1 + 0x408) = uVar13;
  *(undefined4 *)(param_1 + 0x40c) = uVar6;
  *(undefined4 *)(param_1 + 0x410) = uVar7;
  *(undefined4 *)(param_1 + 0x414) = uVar14;
  *(undefined4 *)(param_1 + 0x418) = uVar16;
  uVar13 = *(undefined4 *)(iVar4 + 0x24);
  uVar6 = *(undefined4 *)(iVar4 + 0x28);
  uVar7 = *(undefined4 *)(iVar4 + 0x2c);
  uVar14 = *(undefined4 *)(iVar4 + 0x30);
  uVar16 = *(undefined4 *)(iVar4 + 0x34);
  *(undefined4 *)(param_1 + 0x41c) = *(undefined4 *)(iVar4 + 0x20);
  *(undefined4 *)(param_1 + 0x420) = uVar13;
  *(undefined4 *)(param_1 + 0x424) = uVar6;
  *(undefined4 *)(param_1 + 0x428) = uVar7;
  *(undefined4 *)(param_1 + 0x42c) = uVar14;
  *(undefined4 *)(param_1 + 0x430) = uVar16;
  uVar13 = *(undefined4 *)(iVar4 + 0x3c);
  uVar6 = *(undefined4 *)(iVar4 + 0x40);
  uVar7 = *(undefined4 *)(iVar4 + 0x44);
  *(undefined4 *)(param_1 + 0x434) = *(undefined4 *)(iVar4 + 0x38);
  *(undefined4 *)(param_1 + 0x438) = uVar13;
  *(undefined4 *)(param_1 + 0x43c) = uVar6;
  *(undefined4 *)(param_1 + 0x440) = uVar7;
  uVar13 = FUN_4a084be4(iVar3);
  uVar6 = FUN_4a084be4(iVar2);
  uVar7 = FUN_4a084be4(param_1 + 0x704);
  FUN_4a0b7e44(param_1 + 0x3fc,uVar7,uVar6,uVar13);
  uVar13 = FUN_4a084be4(param_1 + 0x860);
  uVar13 = FUN_4a171a94(uVar13,*(undefined4 *)(param_1 + 0xe20));
  FUN_4a0b7cb0(param_1 + 0x3fc,uVar13,0,0x3f800000);
  FUN_4a0af058(*(undefined4 *)(*(int *)(param_1 + 0xd64) + 0x30),param_1 + 0x3fc);
  iVar2 = *(int *)(param_1 + 0x3f0);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0x3f8);
    piVar9 = *(int **)(iVar2 + 0x7c);
    if (iVar3 == 0) {
      if ((piVar9 != (int *)0x0) && (iVar3 = (**(code **)(*piVar9 + 8))(piVar9), iVar3 != 0)) {
        (**(code **)(*piVar9 + 4))(piVar9);
      }
      *(undefined4 *)(iVar2 + 0x7c) = 0;
    }
    else if (piVar9 == (int *)0x0) {
      uVar13 = thunk_FUN_4a161570(0x48);
      piVar9 = (int *)FUN_4a0b89d4(uVar13,iVar3);
      *(int **)(iVar2 + 0x7c) = piVar9;
      if (piVar9 != (int *)0x0) {
        (**(code **)(*piVar9 + 0xc))();
      }
    }
    else {
      iVar4 = *(int *)(iVar3 + 0xc);
      iVar8 = *(int *)(iVar3 + 0x10);
      iVar10 = *(int *)(iVar3 + 0x14);
      iVar11 = *(int *)(iVar3 + 0x18);
      iVar12 = *(int *)(iVar3 + 0x1c);
      iVar15 = *(int *)(iVar3 + 0x20);
      piVar9[2] = *(int *)(iVar3 + 8);
      piVar9[3] = iVar4;
      piVar9[4] = iVar8;
      piVar9[5] = iVar10;
      piVar9[6] = iVar11;
      piVar9[7] = iVar12;
      piVar9[8] = iVar15;
      iVar4 = *(int *)(iVar3 + 0x28);
      iVar8 = *(int *)(iVar3 + 0x2c);
      iVar10 = *(int *)(iVar3 + 0x30);
      iVar11 = *(int *)(iVar3 + 0x34);
      iVar12 = *(int *)(iVar3 + 0x38);
      iVar15 = *(int *)(iVar3 + 0x3c);
      piVar9[9] = *(int *)(iVar3 + 0x24);
      piVar9[10] = iVar4;
      piVar9[0xb] = iVar8;
      piVar9[0xc] = iVar10;
      piVar9[0xd] = iVar11;
      piVar9[0xe] = iVar12;
      piVar9[0xf] = iVar15;
      iVar4 = *(int *)(iVar3 + 0x44);
      piVar9[0x10] = *(int *)(iVar3 + 0x40);
      piVar9[0x11] = iVar4;
    }
    *(undefined1 *)(iVar2 + 200) = 0;
    return;
  }
  return;
}



// Address: 4a12aad0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a12aad0(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar9;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  iStack_2c = param_1;
  uStack_28 = param_2;
  iVar2 = FUN_4a130b7c();
  if (iVar2 == 0) {
    return;
  }
  iVar7 = *(int *)(param_1 + 0x20);
  iStack_44 = iVar7 + 0x128;
  iVar8 = iVar7 + 0x278;
  iVar3 = FUN_4a13ca78(iVar7);
  puVar1 = PTR_DAT_4a12b024;
  iVar2 = *(int *)(param_1 + 0x1b0);
  bVar9 = iVar2 != 0xb;
  if (bVar9) {
    iVar2 = *(int *)(param_1 + 0x1ac);
  }
  uStack_48 = (uint)(bVar9 && iVar2 != 0x13);
  FUN_4a0bbd68(*(undefined4 *)PTR_DAT_4a12b024,0x30,2);
  uVar4 = FUN_4a171fac();
  FUN_4a13caa0(iVar7);
  uVar5 = FUN_4a171fac();
  FUN_4a1725c0(uVar5,0x42400000);
  uVar5 = FUN_4a171e1c();
  FUN_4a0bbe00(*(undefined4 *)puVar1,uVar5,2);
  uVar5 = FUN_4a171fac();
  uStack_4c = FUN_4a0cb6c4(param_1,2);
  uVar5 = FUN_4a171e1c(uVar5);
  uVar4 = FUN_4a171e1c(uVar4);
  FUN_4a0fa6e8(uStack_4c,iStack_44,uVar4,uVar5);
  iVar2 = FUN_4a0bbe00(*(undefined4 *)puVar1,0x1e,2);
  uStack_30 = FUN_4a171fac();
  uStack_34 = FUN_4a171fac(iVar3 >> 1);
  FUN_4a0a02bc(iStack_44,0x107,0x108,0x109);
  FUN_4a171fac(iVar2 + 4);
  FUN_4a0a02bc(iStack_44,0x16a);
  FUN_4a09f3a4(iStack_44,uStack_28);
  FUN_4a06b074(iVar8,uStack_28,0xc9a,6);
  uVar4 = *(undefined4 *)puVar1;
  iStack_50 = FUN_4a0bc200(uVar4);
  iStack_54 = FUN_4a0bc1f8(uVar4);
  if (iStack_50 < iStack_54) {
    piVar6 = &iStack_54;
  }
  else {
    piVar6 = &iStack_50;
  }
  iVar2 = *piVar6 / 2 + -0x96;
  FUN_4a0bbd68(*(undefined4 *)puVar1,iVar2,2);
  uVar4 = *(undefined4 *)puVar1;
  iStack_50 = FUN_4a0bc200(uVar4);
  iStack_54 = FUN_4a0bc1f8(uVar4);
  if (iStack_54 < iStack_50) {
    piVar6 = &iStack_54;
  }
  else {
    piVar6 = &iStack_50;
  }
  iVar3 = FUN_4a0bbe00(*(undefined4 *)puVar1,*piVar6 + -0x5a,2);
  uStack_38 = FUN_4a171fac();
  FUN_4a171fac(iVar2);
  iStack_54 = 0x42c80000;
  iStack_50 = 0x3f800000;
  FUN_4a09ff60(iStack_44,0x10a,0x10d,0x110);
  uStack_3c = FUN_4a171fac(iVar3 + 0x3c);
  uStack_40 = uStack_34;
  FUN_4a0a02bc(iStack_44,0x11f,0x120,0x121);
  FUN_4a0a02bc(iStack_44,0x122);
  FUN_4a09f3a4(iStack_44,uStack_28);
  FUN_4a06b074(iVar8,uStack_28,0xb1c,4);
  uVar4 = FUN_4a171fac(iVar3 + 0x18);
  FUN_4a09f664(iStack_44,0x113,uStack_34,uVar4);
  FUN_4a09f3a4(iStack_44,uStack_28);
  piVar6 = (int *)FUN_4a145948(iVar7);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))();
    FUN_4a13ca78(iVar7);
    uVar4 = FUN_4a171fac();
    FUN_4a1725c0(uVar4,0x42400000);
    uVar4 = FUN_4a171e1c();
    FUN_4a0bbd68(*(undefined4 *)puVar1,uVar4,2);
    uVar4 = FUN_4a171fac();
    FUN_4a13caa0(iVar7);
    uVar5 = FUN_4a171fac();
    FUN_4a1725c0(uVar5,0x42400000);
    uVar5 = FUN_4a171e1c();
    FUN_4a0bbe00(*(undefined4 *)puVar1,uVar5,2);
    uVar5 = FUN_4a171fac();
    iStack_50 = FUN_4a0cb6c4(param_1,0x2000);
    uVar5 = FUN_4a171e1c(uVar5);
    uVar4 = FUN_4a171e1c(uVar4);
    FUN_4a0fa6e8(iStack_50,iStack_44,uVar4,uVar5);
    FUN_4a09f3a4(iStack_44,uStack_28);
    FUN_4a09f9c8(iStack_44,0x113);
    FUN_4a171e1c();
    FUN_4a06b02c(iVar8,uStack_28,piVar6,4);
  }
  if (*(int *)(param_1 + 0x1b0) == 0xb) {
    FUN_4a0fe1e0(iVar7,uStack_28);
    FUN_4a0ce0a8(param_1,uStack_28);
  }
  if (piVar6 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar6 + 8))(piVar6);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a12b020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar6 + 4))(piVar6);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a12b008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a12afe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



// Address: 4a12b028

void FUN_4a12b028(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_54 [20];
  undefined1 auStack_40 [20];
  int local_2c;
  undefined4 local_28;
  
  if (*(int *)(param_1 + 0xe14) == 0) {
    piVar2 = (int *)FUN_4a0c6bc0(auStack_40);
    puVar1 = PTR_PTR_4a12b66c;
    piVar2[2] = 0;
    piVar2[3] = 0;
    *piVar2 = (int)puVar1;
    iVar3 = FUN_4a15e080(0x104);
    if (iVar3 == 0) {
      iVar3 = FUN_4a1669a8();
    }
    puVar1 = PTR_PTR_4a12b670;
    iVar12 = 0;
    do {
      puVar4 = (undefined4 *)FUN_4a0c6bc0(auStack_54);
      puVar4[2] = 0;
      puVar4[3] = 0;
      *puVar4 = puVar1;
      FUN_4a16bdcc(iVar3 + iVar12 * 0x14,puVar4);
      FUN_4a16bef4(auStack_54);
      iVar12 = iVar12 + 1;
    } while (iVar12 < 0xd);
    thunk_FUN_4a161570(0x18);
    piVar5 = (int *)FUN_4a0c0628();
    piVar5[3] = 0x14;
    piVar5[4] = 0xd;
    puVar1 = PTR_PTR_4a12b674;
    *piVar5 = (int)PTR_PTR_4a12b674;
    piVar5[2] = iVar3;
    *(undefined1 *)(piVar5 + 5) = 1;
    if (piVar5 != (int *)0x0) {
      (**(code **)(puVar1 + 0xc))(piVar5);
    }
    (**(code **)(*piVar2 + 0x1c))(piVar2);
    piVar2[2] = 0xd;
    piVar2[3] = (int)piVar5;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
    }
    (**(code **)(*(int *)(param_1 + 0xe0c) + 0x1c))((int *)(param_1 + 0xe0c));
    *(undefined4 *)(param_1 + 0xe14) = 0xd;
    *(int **)(param_1 + 0xe18) = piVar5;
    FUN_4a168e44(auStack_40);
  }
  local_28 = FUN_4a141abc(*(undefined4 *)(param_1 + 0x24),0);
  local_2c = FUN_4a140fd0(*(undefined4 *)(param_1 + 0x24),0);
  iVar3 = 0;
  do {
    switch(iVar3) {
    case 0:
      if (*(int *)(param_1 + 0xe18) == 0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = *(int **)(*(int *)(param_1 + 0xe18) + 8);
      }
      iVar12 = FUN_4a16be24(auStack_40,2);
      iVar9 = *(int *)(iVar12 + 8);
      piVar5 = *(int **)(iVar12 + 0xc);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0xc))(piVar5);
      }
      (**(code **)(*piVar2 + 0x1c))(piVar2);
      piVar2[2] = iVar9;
      piVar2[3] = (int)piVar5;
      FUN_4a16bef4(auStack_40);
      iVar12 = 0;
      if (*(int *)(param_1 + 0xe18) == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(*(int *)(param_1 + 0xe18) + 8);
      }
      if (*(int *)(iVar9 + 0xc) == 0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = *(undefined4 **)(*(int *)(iVar9 + 0xc) + 8);
      }
      *puVar4 = 0;
      if (*(int *)(param_1 + 0xe18) == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(*(int *)(param_1 + 0xe18) + 8);
      }
      if (*(int *)(iVar9 + 0xc) != 0) {
        iVar12 = *(int *)(*(int *)(iVar9 + 0xc) + 8);
      }
      *(undefined4 *)(iVar12 + 4) = 1;
      break;
    case 1:
    case 2:
    case 4:
    case 5:
    case 7:
    case 9:
    case 0xb:
      iVar12 = FUN_4a14440c(*(undefined4 *)(param_1 + 0x28),0,iVar3);
      iVar11 = 0;
      iVar9 = 0;
      if (0 < iVar12) {
        do {
          uVar6 = FUN_4a141458(*(undefined4 *)(param_1 + 0x24),local_28,iVar3,iVar9);
          uVar7 = FUN_4a141668(*(undefined4 *)(param_1 + 0x24),0,iVar3);
          uVar8 = FUN_4a143c90(*(undefined4 *)(param_1 + 0x28),uVar7,uVar6);
          if ((uVar8 & 4) == 0) {
            iVar11 = iVar11 + 1;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar12);
      }
      if ((*(int *)(param_1 + 0xdd8) == local_2c) && (*(int *)(param_1 + iVar3 * 4 + 0xdd8) != -1))
      {
        iVar11 = iVar11 + 1;
      }
      iVar9 = *(int *)(param_1 + 0xe18);
      if (iVar9 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(iVar9 + 8);
      }
      if (*(int *)(iVar10 + iVar3 * 0x14 + 8) != iVar11) {
        if (iVar9 == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *(int *)(iVar9 + 8);
        }
        piVar2 = (int *)(iVar9 + iVar3 * 0x14);
        iVar9 = FUN_4a16be24(auStack_40,iVar11);
        iVar11 = *(int *)(iVar9 + 8);
        piVar5 = *(int **)(iVar9 + 0xc);
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 0xc))(piVar5);
        }
        (**(code **)(*piVar2 + 0x1c))(piVar2);
        piVar2[2] = iVar11;
        piVar2[3] = (int)piVar5;
        FUN_4a16bef4(auStack_40);
      }
      iVar9 = 0;
      iVar11 = 0;
      if (0 < iVar12) {
        do {
          uVar6 = FUN_4a141458(*(undefined4 *)(param_1 + 0x24),local_28,iVar3,iVar11);
          uVar7 = FUN_4a141668(*(undefined4 *)(param_1 + 0x24),0,iVar3);
          uVar8 = FUN_4a143c90(*(undefined4 *)(param_1 + 0x28),uVar7,uVar6);
          if ((uVar8 & 4) == 0) {
            if (*(int *)(param_1 + 0xe18) == 0) {
              iVar10 = 0;
            }
            else {
              iVar10 = *(int *)(*(int *)(param_1 + 0xe18) + 8);
            }
            iVar10 = *(int *)(iVar10 + iVar3 * 0x14 + 0xc);
            if (iVar10 == 0) {
              iVar10 = 0;
            }
            else {
              iVar10 = *(int *)(iVar10 + 8);
            }
            *(undefined4 *)(iVar10 + iVar9 * 4) = uVar6;
            iVar9 = iVar9 + 1;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar12);
      }
      if ((*(int *)(param_1 + 0xdd8) == local_2c) &&
         (iVar12 = *(int *)(param_1 + iVar3 * 4 + 0xdd8), iVar12 != -1)) {
        if (*(int *)(param_1 + 0xe18) == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = *(int *)(*(int *)(param_1 + 0xe18) + 8);
        }
        iVar11 = *(int *)(iVar11 + iVar3 * 0x14 + 0xc);
        if (iVar11 == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = *(int *)(iVar11 + 8);
        }
        *(int *)(iVar11 + iVar9 * 4) = iVar12;
      }
      break;
    case 3:
    case 6:
    case 8:
    case 10:
    case 0xc:
      iVar12 = FUN_4a0de104(iVar3);
      if ((*(int *)(param_1 + 0xdd8) == local_2c) &&
         (iVar9 = FUN_4a140fd0(*(undefined4 *)(param_1 + 0x24),0,iVar12),
         iVar9 == *(int *)(param_1 + iVar12 * 4 + 0xdd8))) {
        if (*(int *)(param_1 + 0xe18) == 0) {
          iVar12 = 0;
        }
        else {
          iVar12 = *(int *)(*(int *)(param_1 + 0xe18) + 8);
        }
        piVar2 = (int *)(iVar12 + iVar3 * 0x14);
        iVar12 = FUN_4a16be24(auStack_40,1);
        iVar9 = *(int *)(iVar12 + 8);
        piVar5 = *(int **)(iVar12 + 0xc);
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 0xc))(piVar5);
        }
        (**(code **)(*piVar2 + 0x1c))(piVar2);
        piVar2[2] = iVar9;
        piVar2[3] = (int)piVar5;
        FUN_4a16bef4(auStack_40);
        puVar4 = (undefined4 *)0x0;
        if (*(int *)(param_1 + 0xe18) == 0) {
          iVar12 = 0;
        }
        else {
          iVar12 = *(int *)(*(int *)(param_1 + 0xe18) + 8);
        }
        iVar12 = *(int *)(iVar12 + iVar3 * 0x14 + 0xc);
        if (iVar12 != 0) {
          puVar4 = *(undefined4 **)(iVar12 + 8);
        }
        *puVar4 = *(undefined4 *)(param_1 + iVar3 * 4 + 0xdd8);
      }
      else {
        iVar12 = FUN_4a14440c(*(undefined4 *)(param_1 + 0x28),0,iVar3);
        iVar9 = *(int *)(param_1 + 0xe18);
        if (iVar9 == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = *(int *)(iVar9 + 8);
        }
        if (*(int *)(iVar11 + iVar3 * 0x14 + 8) != iVar12) {
          if (iVar9 == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = *(int *)(iVar9 + 8);
          }
          piVar2 = (int *)(iVar9 + iVar3 * 0x14);
          iVar9 = FUN_4a16be24(auStack_40,iVar12);
          iVar11 = *(int *)(iVar9 + 8);
          piVar5 = *(int **)(iVar9 + 0xc);
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 0xc))(piVar5);
          }
          (**(code **)(*piVar2 + 0x1c))(piVar2);
          piVar2[2] = iVar11;
          piVar2[3] = (int)piVar5;
          FUN_4a16bef4(auStack_40);
        }
        iVar9 = 0;
        if (0 < iVar12) {
          do {
            if (*(int *)(param_1 + 0xe18) == 0) {
              iVar11 = 0;
            }
            else {
              iVar11 = *(int *)(*(int *)(param_1 + 0xe18) + 8);
            }
            iVar11 = *(int *)(iVar11 + iVar3 * 0x14 + 0xc);
            if (iVar11 == 0) {
              iVar11 = 0;
            }
            else {
              iVar11 = *(int *)(iVar11 + 8);
            }
            *(int *)(iVar11 + iVar9 * 4) = iVar9;
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar12);
        }
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xd);
  return;
}



// Address: 4a12b678

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a12b678(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (*(int *)(param_1 + 0x250) == 0) {
    return;
  }
  iVar1 = FUN_4a13ca78(*(undefined4 *)(param_1 + 0x20),param_2,param_3,param_4);
  iVar2 = FUN_4a13caa0(*(undefined4 *)(param_1 + 0x20));
  uVar3 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x254));
  iVar4 = FUN_4a17211c(uVar3,DAT_4a12b7a4);
  if (0x3f800000 < iVar4) {
    iVar4 = 0x3f800000;
  }
  (**(code **)(*param_2 + 0xa0))(param_2,0);
  FUN_4a13caa0(*(undefined4 *)(param_1 + 0x20));
  uVar3 = FUN_4a13ca78(*(undefined4 *)(param_1 + 0x20));
  (**(code **)(*param_2 + 0x58))(param_2,0,0,uVar3);
  FUN_4a150618(0x1700);
  FUN_4a150738();
  uVar3 = FUN_4a1725c0(0x3f800000,iVar4);
  uVar5 = FUN_4a171fac(iVar2 >> 1);
  uVar5 = FUN_4a17211c(uVar5,uVar3);
  uVar6 = FUN_4a171fac(iVar1 >> 1);
  uVar3 = FUN_4a17211c(uVar6,uVar3);
  FUN_4a150bec(uVar3,uVar5,0);
  FUN_4a1507c0(iVar4,iVar4,0x3f800000);
  (**(code **)(*param_2 + 0x34))(param_2,*(undefined4 *)(param_1 + 0x250),iVar1 >> 1,iVar2 >> 1);
  FUN_4a156d94();
  return;
}



// Address: 4a12b7a8

void FUN_4a12b7a8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(param_1 + 0x20);
  iVar7 = iVar6 + 0x128;
  FUN_4a13ca78(iVar6);
  uVar1 = FUN_4a171fac();
  FUN_4a13caa0(iVar6);
  uVar2 = FUN_4a171fac();
  uVar3 = FUN_4a09f9c8(iVar7,0x14);
  uVar4 = FUN_4a09f974(iVar7,0x14);
  uVar5 = FUN_4a171bb8(uVar2,uVar4);
  uVar4 = FUN_4a17295c(uVar1,0xffffffff);
  uVar3 = FUN_4a171bb8(uVar4,uVar3);
  uVar4 = FUN_4a17295c(uVar1,0xfffffffe);
  uVar1 = FUN_4a17211c(uVar1,0x3f400000);
  uVar2 = FUN_4a17295c(uVar2,0xffffffff);
  FUN_4a09f664(iVar7,0x14,uVar4,uVar2,0x3f800000,uVar5 ^ 0x80000000,uVar3,0xc2b40000);
  FUN_4a09f664(iVar7,0x14,uVar1,uVar2,0x3f800000,uVar5,uVar3,0x42b40000);
  return;
}



// Address: 4a12b8bc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a12b8bc(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  iStack_2c = param_1;
  uStack_28 = param_2;
  iVar2 = FUN_4a130b7c();
  puVar1 = PTR_DAT_4a12be14;
  if (iVar2 != 0) {
    iStack_38 = *(int *)(param_1 + 0x20) + 0x278;
    iStack_3c = *(int *)(param_1 + 0x20) + 0x128;
    uVar9 = *(undefined4 *)PTR_DAT_4a12be14;
    iStack_40 = FUN_4a0bc200(uVar9);
    iStack_44 = FUN_4a0bc1f8(uVar9);
    if (iStack_40 < iStack_44) {
      piVar4 = &iStack_44;
    }
    else {
      piVar4 = &iStack_40;
    }
    iVar2 = FUN_4a0bbd68(*(undefined4 *)puVar1,*piVar4 + -0x122,2);
    iVar3 = FUN_4a0bc1f8(*(undefined4 *)puVar1);
    if (iVar3 == 400) {
      iVar2 = iVar2 + 0x78;
    }
    iVar3 = FUN_4a0bc1f8(*(undefined4 *)puVar1);
    uVar9 = *(undefined4 *)puVar1;
    if (iVar3 == 0x140) {
      iVar2 = iVar2 + 0xaa;
    }
    iStack_40 = FUN_4a0bc200(uVar9);
    iStack_44 = FUN_4a0bc1f8(uVar9);
    if (iStack_44 < iStack_40) {
      piVar4 = &iStack_44;
    }
    else {
      piVar4 = &iStack_40;
    }
    iVar3 = FUN_4a0bbe00(*(undefined4 *)PTR_DAT_4a12be14,*piVar4 + -0x13b,1);
    FUN_4a171fac();
    FUN_4a171fac(iVar2);
    iStack_44 = 0x43910000;
    iStack_40 = 0x3f800000;
    FUN_4a09ff60(iStack_3c,0x141,0x142,0x143);
    FUN_4a171fac(iVar3 + 0x2a);
    FUN_4a171fac(iVar2 + 0x96);
    FUN_4a0a02bc(iStack_3c,0x16a,0x16b);
    FUN_4a171fac(iVar3 + 0x41);
    FUN_4a171fac(iVar2 + 0x32);
    iStack_44 = 0x433e0000;
    iStack_40 = 0x3f800000;
    FUN_4a09ff60(iStack_3c,0x14b,0x14c,0x14d);
    FUN_4a09f3a4(iStack_3c,uStack_28);
    FUN_4a06b074(iStack_38,uStack_28,0xb19,6);
    uVar9 = FUN_4a0cf540(param_1,2);
    FUN_4a0d22c4(uVar9,iVar2 + 0x3c,iVar3 + 0x4b,0xb4);
    FUN_4a0d23c4(uVar9,uStack_28);
    uVar9 = FUN_4a171fac(iVar2 + 0x16);
    uVar5 = FUN_4a171fac(iVar3 + 0x1e);
    FUN_4a09f664(iStack_3c,0x1a7,uVar9,uVar5);
    uVar6 = FUN_4a0cb6c4(param_1,2);
    uVar5 = FUN_4a171e1c(uVar5);
    uVar9 = FUN_4a171e1c(uVar9);
    FUN_4a0fa6e8(uVar6,iStack_3c,uVar9,uVar5);
    iStack_40 = iVar3 + 0x109;
    iVar10 = iVar2 + 0x46;
    iVar7 = FUN_4a1404dc(*(undefined4 *)(param_1 + 0x24));
    iVar8 = 0;
    uStack_30 = FUN_4a171fac(iStack_40);
    do {
      uStack_34 = FUN_4a171fac(iVar10);
      FUN_4a09f664(iStack_3c,0x87,uStack_34,uStack_30);
      FUN_4a09f3a4(iStack_3c,uStack_28);
      if (iVar8 < iVar7) {
        FUN_4a09f664(iStack_3c,0x72,uStack_34,uStack_30);
        FUN_4a09f3a4(iStack_3c,uStack_28);
      }
      iVar8 = iVar8 + 1;
      iVar10 = iVar10 + 0x1c;
    } while (iVar8 < 5);
    iVar7 = FUN_4a1404dc(*(undefined4 *)(param_1 + 0x24));
    if (iVar7 == 5) {
      uVar9 = FUN_4a171fac(iVar2 + 0xe6);
      uVar5 = FUN_4a171fac(iVar3 + 0x11b);
      FUN_4a09f664(iStack_3c,0x1a7,uVar9,uVar5);
      uVar6 = FUN_4a0cb6c4(param_1,0x20);
      uVar5 = FUN_4a171e1c(uVar5);
      uVar9 = FUN_4a171e1c(uVar9);
      FUN_4a0fa6e8(uVar6,iStack_3c,uVar9,uVar5);
      FUN_4a09f3a4(iStack_3c,uStack_28);
    }
    puVar1 = PTR_DAT_4a12be14;
    FUN_4a0bc1f8(*(undefined4 *)PTR_DAT_4a12be14);
    uVar9 = FUN_4a0bbd68(*(undefined4 *)puVar1,0x6c,2);
    FUN_4a171fac(iVar3 + 0x113);
    FUN_4a171fac(uVar9);
    FUN_4a0a02bc(iStack_3c,0x167,0x168,0x169);
    FUN_4a09f3a4(iStack_3c,uStack_28);
    FUN_4a06cd2c(iStack_38,uStack_28,0,0xb1a);
    return;
  }
  return;
}



// Address: 4a12be24

/* WARNING: Removing unreachable block (ram,0x4a0faea0) */
/* WARNING: Removing unreachable block (ram,0x4a0fae9c) */
/* WARNING: Removing unreachable block (ram,0x4a0fcc80) */
/* WARNING: Removing unreachable block (ram,0x4a0fcc84) */
/* WARNING: Removing unreachable block (ram,0x4a0fcc9c) */
/* WARNING: Removing unreachable block (ram,0x4a0faebc) */
/* WARNING: Removing unreachable block (ram,0x4a0faf08) */
/* WARNING: Removing unreachable block (ram,0x4a12c3c4) */
/* WARNING: Removing unreachable block (ram,0x4a12c3e0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * FUN_4a12be24(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar9;
  int *piVar10;
  undefined4 unaff_r6;
  int iVar11;
  undefined4 unaff_r7;
  int *piVar12;
  int iVar13;
  undefined4 unaff_r8;
  int *piVar14;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_lr;
  undefined4 *puVar15;
  undefined8 uVar16;
  uint uStack_124;
  undefined1 auStack_120 [240];
  undefined1 auStack_30 [8];
  undefined4 in_stack_ffffffd8;
  int *in_stack_ffffffdc;
  int in_stack_ffffffe0;
  undefined4 uStack_4;
  
LAB_4a12be34:
  iVar9 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_1 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = param_2;
  FUN_4a0fe374(iVar9);
  FUN_4a0fd00c(iVar9);
  puVar3 = *(undefined4 **)(param_1 + 0x1b8);
  if (puVar3 == (undefined4 *)&DAT_00000004) {
    piVar12 = *(int **)(param_1 + 0x250);
    if (piVar12 != (int *)0x0) {
      iVar4 = (**(code **)(*piVar12 + 8))(piVar12);
      puVar3 = (undefined4 *)0x0;
      if (iVar4 != 0) {
        puVar3 = (undefined4 *)(**(code **)(*piVar12 + 4))(piVar12);
      }
      *(undefined4 *)(param_1 + 0x250) = 0;
    }
LAB_4a12bed4:
    piVar12 = *(int **)(param_1 + 0xd5c);
    if (piVar12 != (int *)0x0) {
      iVar4 = (**(code **)(*piVar12 + 8))(piVar12);
      puVar3 = (undefined4 *)0x0;
      if (iVar4 != 0) {
        puVar3 = (undefined4 *)(**(code **)(*piVar12 + 4))(piVar12);
      }
      *(undefined4 *)(param_1 + 0xd5c) = 0;
    }
  }
  else {
    if (puVar3 == (undefined4 *)0xd) goto LAB_4a12bed4;
    if (puVar3 == (undefined4 *)0x1f) {
      puVar3 = (undefined4 *)FUN_4a09fa1c(*(int *)(param_1 + 0x20) + 0x128,0x109);
    }
  }
  switch(param_2) {
  default:
    return puVar3;
  case 1:
    *(undefined4 *)(param_1 + 0x1e4) = 0;
    FUN_4a0fb75c(iVar9,0);
    if (*PTR_DAT_4a12c7b8 == '\0') {
      puVar3 = *(undefined4 **)(iVar9 + 0x264);
      *(undefined1 *)(puVar3 + 3) = 1;
      puVar3[10] = 1;
      *(undefined1 *)(puVar3 + 0xc) = 1;
      puVar3[0xb] = 0xffffffff;
      *(undefined1 *)(puVar3 + 5) = 0;
      switch(puVar3[6]) {
      case 0:
        puVar3[6] = 5;
        return puVar3;
      case 1:
        goto switchD_4a0d3700_caseD_1;
      default:
        return puVar3;
      }
    }
    puVar3 = (undefined4 *)host_s3eAudioGetInt_arm(1);
    if (puVar3 != (undefined4 *)0x0) {
      return puVar3;
    }
    return (undefined4 *)0x0;
  case 2:
    uVar7 = *(undefined4 *)(param_1 + 0x1c4);
    *(undefined4 *)(iVar9 + 0x460) = *(undefined4 *)(param_1 + 0x1c0);
    *(undefined4 *)(iVar9 + 0x464) = uVar7;
    return (undefined4 *)(iVar9 + 0x460);
  case 4:
    piVar12 = (int *)FUN_4a135e3c(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x60),PTR_DAT_4a12c7bc,
                                  0);
    *(int **)(param_1 + 0x250) = piVar12;
    if (piVar12 != (int *)0x0) {
      (**(code **)(*piVar12 + 0xc))();
    }
    FUN_4a0be380(*(undefined4 *)(param_1 + 0x250));
    puVar1 = PTR_DAT_4a12c7c0;
    *(undefined4 *)(param_1 + 0x254) = 0;
    *puVar1 = 1;
  case 5:
    iVar4 = 0;
    if (0 < *(int *)(iVar9 + 0x470)) {
      do {
        iVar6 = *(int *)(iVar9 + 0x474);
        if (iVar6 == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = *(int *)(iVar6 + 8);
        }
        if ((*(uint *)(iVar11 + (iVar4 * 2 + 1) * 4) & 2) != 0) {
          if (iVar6 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(iVar6 + 8);
          }
          FUN_4a0992b8(*(undefined4 *)(iVar6 + iVar4 * 8),0);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 * 2 < *(int *)(iVar9 + 0x470));
    }
    iVar4 = 0;
    if ((int)*(undefined4 **)(iVar9 + 0x484) < 1) {
      return *(undefined4 **)(iVar9 + 0x484);
    }
    do {
      iVar11 = *(int *)(iVar9 + 0x488);
      iVar6 = 0;
      if (iVar11 != 0) {
        iVar6 = *(int *)(iVar11 + 8);
      }
      if ((*(uint *)(iVar6 + (iVar4 + 1) * 4) & 2) != 0) {
        iVar6 = 0;
        if (iVar11 != 0) {
          iVar6 = *(int *)(iVar11 + 8);
        }
        FUN_4a09fa1c(iVar9 + 0x128,*(undefined4 *)(iVar6 + iVar4 * 4));
      }
      iVar4 = iVar4 + 2;
    } while (iVar4 < (int)*(undefined4 **)(iVar9 + 0x484));
    return *(undefined4 **)(iVar9 + 0x484);
  case 6:
    param_4 = 2;
    FUN_4a089fa0(*(undefined4 *)(param_1 + 0x168),0x800,0x825);
    iVar9 = 0;
    if (*(int *)(param_1 + 0x7c) != 0) {
      iVar9 = *(int *)(*(int *)(param_1 + 0x7c) + 8);
    }
    puVar3 = *(undefined4 **)(iVar9 + 0xc);
    goto FUN_4a0d297c;
  case 7:
    puVar3 = (undefined4 *)FUN_4a1614d4();
    if (puVar3 == (undefined4 *)0x1) {
      host_s3eConfigGetString_arm(PTR_DAT_4a12c7c4 + -0x18,PTR_DAT_4a12c7c4,auStack_120);
      uStack_124 = 0;
      host_s3eConfigGetInt_arm(PTR_DAT_4a12c7c8 + -0x10,PTR_DAT_4a12c7c8,&uStack_124);
      puVar3 = (undefined4 *)FUN_4a161604(auStack_120,uStack_124 & 0xff);
      return puVar3;
    }
    return puVar3;
  case 8:
    FUN_4a0ff4a4();
    thunk_FUN_4a0c6b08();
    return *(undefined4 **)(*(int *)(param_1 + 0x20) + 0x264);
  case 9:
    puVar3 = *(undefined4 **)(param_1 + 0x1b8);
    if ((puVar3 == (undefined4 *)&DAT_0000000a || puVar3 == (undefined4 *)&DAT_00000016) ||
        puVar3 == (undefined4 *)&DAT_00000012) {
      return puVar3;
    }
    puVar3 = (undefined4 *)FUN_4a0cf540(param_1,0);
    unaff_r4 = *(undefined4 *)(&stack0xfffffed8 + 0x10c);
    unaff_r5 = *(undefined4 *)(&stack0xfffffed8 + 0x110);
    unaff_r6 = *(undefined4 *)(&stack0xfffffed8 + 0x114);
    unaff_r7 = *(undefined4 *)(&stack0xfffffed8 + 0x118);
    unaff_r8 = *(undefined4 *)(&stack0xfffffed8 + 0x11c);
    unaff_r9 = *(undefined4 *)(&stack0xfffffed8 + 0x120);
    in_lr = *(undefined4 *)(&stack0xfffffed8 + 0x124);
    register0x00000054 = (BADSPACEBASE *)(&stack0xfffffed8 + 0x128);
FUN_4a0d297c:
    *(undefined4 *)((int)register0x00000054 + -4) = in_lr;
    *(undefined4 *)((int)register0x00000054 + -8) = unaff_r11;
    *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r10;
    *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r9;
    *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r8;
    *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r7;
    *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_r6;
    *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_r5;
    *(undefined4 *)((int)register0x00000054 + -0x24) = unaff_r4;
    puVar15 = (undefined4 *)((int)register0x00000054 + -0x28);
    *puVar15 = param_4;
    iVar9 = FUN_4a134a50(puVar3,1);
    if (iVar9 == 0) {
      puVar3[0x2a] = 0xffffffff;
      puVar3[10] = puVar3[10] & 0xfffffffd;
      return puVar3;
    }
    iVar9 = FUN_4a0ff494();
    uVar7 = *(undefined4 *)(iVar9 + 0x520);
    uVar8 = *(undefined4 *)(iVar9 + 0x51c);
    iVar4 = FUN_4a0fba7c();
    FUN_4a134a98(puVar3,2);
    puVar3[0x2c] = 1;
    puVar3[0x2e] = puVar3[0x22] + -0x14;
    puVar3[0x29] = 0xffffffff;
    switch(puVar3[0x1d]) {
    case 0:
      puVar3[0x3b] = 0;
      uVar7 = FUN_4a145bfc(iVar9);
      puVar3[0x29] = uVar7;
      puVar3[0x2b] = 7;
      puVar3[0x2c] = 7;
      puVar3[0x2d] = 1;
      puVar3[0x2e] = 0x76;
      puVar3[0x2f] = puVar3[0x23];
      goto switchD_4a0d29f4_default;
    case 1:
      puVar3[0x3b] = 1;
      uVar7 = FUN_4a13fd18(uVar8);
      puVar3[0x2b] = uVar7;
      uVar7 = FUN_4a13f8d8(uVar8);
      puVar3[0x29] = uVar7;
      puVar3[0x2c] = puVar3[0x2b];
      puVar3[0x2d] = 1;
      puVar3[0x2e] = 0xa0;
      uVar7 = puVar3[0x23];
      break;
    case 2:
      uVar7 = FUN_4a13fb20(uVar8);
      puVar3[0x2b] = uVar7;
      uVar7 = 0x28;
      break;
    case 3:
      uVar7 = FUN_4a13fa90(uVar8);
      puVar3[0x2b] = uVar7;
      uVar7 = 0x22;
      break;
    case 4:
      uVar7 = FUN_4a13fb04(uVar8);
      puVar3[0x2b] = uVar7;
      puVar3[0x2f] = 0x2d;
      iVar4 = 0;
      iVar6 = FUN_4a13fb04(uVar8);
      uVar5 = iVar6 - 1;
      if (-1 < (int)uVar5) {
        do {
          uVar7 = FUN_4a13fa58(uVar8,uVar5);
          iVar6 = FUN_4a06bf88(iVar9 + 0x278,uVar7,3);
          if (iVar4 < iVar6) {
            iVar4 = iVar6;
          }
          uVar5 = uVar5 - 1;
        } while (uVar5 < 0x80000000);
      }
      puVar3[0x30] = iVar4;
      goto switchD_4a0d29f4_default;
    case 5:
      uVar7 = FUN_4a140cec(uVar8);
      puVar3[0x2b] = uVar7;
      uVar7 = 0x28;
      break;
    case 6:
      uVar7 = FUN_4a141390(uVar8);
      puVar3[0x2b] = uVar7;
      uVar7 = 0x28;
      break;
    case 7:
      puVar3[0x29] = 0;
      puVar3[0x2b] = *(undefined4 *)(iVar4 + 0xa24);
      uVar7 = 0x28;
      break;
    case 8:
      puVar3[0x29] = 0;
      uVar8 = FUN_4a145634(uVar7,*(undefined4 *)(iVar4 + 0x6d4));
      puVar3[0x2b] = uVar8;
      puVar3[0x2f] = 0x28;
      puVar3[0x2d] = 1;
      iVar9 = 0;
      puVar3[0x2e] = 0xb4;
      do {
        uVar8 = FUN_4a1457e4(uVar7,iVar9,*(undefined4 *)(iVar4 + 0x6d4));
        thunk_FUN_4a161570(0x40);
        uVar2 = FUN_4a099040();
        if (puVar3[0x34] == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(puVar3[0x34] + 8);
        }
        *(undefined4 *)(iVar6 + iVar9 * 4) = uVar2;
        if (puVar3[0x34] == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(puVar3[0x34] + 8);
        }
        FUN_4a098798(*(undefined4 *)(iVar6 + iVar9 * 4),uVar8);
        if (puVar3[0x34] == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(puVar3[0x34] + 8);
        }
        FUN_4a0cb16c(*(undefined4 *)(*(int *)(iVar6 + iVar9 * 4) + 0x34));
        if (puVar3[0x39] == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(puVar3[0x39] + 8);
        }
        *(int *)(iVar6 + iVar9 * 4) = iVar9;
        iVar9 = iVar9 + 1;
      } while (iVar9 < 5);
switchD_4a0d29f4_default:
      if (*(char *)(puVar3 + 0x1f) != '\0') {
        iVar6 = puVar3[0x2e];
        puVar3[0x22] = iVar6;
        puVar3[0x20] = puVar3[0x24] + (puVar3[0x26] - iVar6 >> 1);
        uVar16 = FUN_4a0015f0(puVar3[0x2b],puVar3[0x2d]);
        iVar13 = (int)uVar16 + (uint)(0 < (int)((ulonglong)uVar16 >> 0x20));
        iVar11 = (iVar13 + -1) * iVar6;
        puVar3[0x2c] = iVar13;
        iVar4 = puVar3[0x29];
        iVar9 = -iVar11;
        if (iVar4 < 0) {
          iVar4 = 0;
        }
        if (iVar11 != 0 && -1 < iVar9) {
          iVar9 = 0;
        }
        uVar7 = FUN_4a171fac(iVar9);
        uVar8 = 0;
        if (puVar3[0x1d] == 0) {
          uVar8 = FUN_4a171fac(iVar6);
          *puVar15 = uVar8;
          uVar7 = FUN_4a171a94(uVar8,uVar7);
          uVar8 = FUN_4a1724e0(*puVar15,0);
          if (iVar4 == 0) {
            iVar4 = 1;
          }
          else if (iVar13 + -1 == iVar4) {
            iVar4 = iVar13 + -2;
          }
        }
        uVar2 = FUN_4a171fac(iVar6);
        FUN_4a08c5fc(puVar3,uVar7,uVar8,uVar2);
        FUN_4a08c564(puVar3,(int)puVar3[0x22] <= iVar11);
        uVar7 = FUN_4a171fac(-iVar4 * puVar3[0x2e]);
        puVar3[0x17] = uVar7;
        puVar3[0x1c] = uVar7;
        return puVar3;
      }
      uVar16 = FUN_4a0015f0(puVar3[0x2b],puVar3[0x2c]);
      iVar9 = (uint)(0 < (int)((ulonglong)uVar16 >> 0x20)) + (int)uVar16;
      puVar3[0x2d] = iVar9;
      iVar9 = iVar9 * puVar3[0x2f];
      iVar4 = puVar3[0x23] - iVar9;
      if (0 < iVar4) {
        iVar4 = 0;
      }
      uVar7 = FUN_4a171fac(iVar4);
      FUN_4a08c614(puVar3,uVar7,0);
      FUN_4a08c608(puVar3,(int)puVar3[0x23] < iVar9);
      puVar3[0x11] = 0;
      puVar3[0x15] = 0;
      return puVar3;
    case 9:
      puVar3[0x29] = 0;
      uVar7 = FUN_4a06be4c(iVar9 + 0x278,3);
      puVar3[0x2f] = uVar7;
      puVar3[0x2b] = *(undefined4 *)(iVar4 + 0xa50);
      goto switchD_4a0d29f4_default;
    case 10:
      uVar7 = FUN_4a145540(uVar7);
      puVar3[0x2b] = uVar7;
      puVar3[0x2c] = uVar7;
      puVar3[0x2d] = 1;
      puVar3[0x2e] = 0xa0;
      uVar7 = puVar3[0x23];
      break;
    case 0xb:
      uVar7 = FUN_4a1454dc(uVar7);
      puVar3[0x2b] = uVar7;
      puVar3[0x2c] = uVar7;
      puVar3[0x2d] = 1;
      puVar3[0x2e] = 0xa0;
      uVar7 = puVar3[0x23];
      break;
    case 0xc:
      iVar9 = FUN_4a0fba7c(iVar9);
      iVar9 = FUN_4a143ac8(uVar7,*(undefined4 *)(iVar9 + 0x6ac));
      uVar7 = FUN_4a0f5958(uVar7,(int)*(char *)(iVar9 + 0x1f));
      puVar3[0x2b] = uVar7;
      puVar3[0x2c] = uVar7;
      puVar3[0x2d] = 1;
      puVar3[0x2e] = 0xa0;
      uVar7 = puVar3[0x23];
      break;
    case 0xd:
      uVar7 = FUN_4a0f3e54(uVar7);
      puVar3[0x2b] = uVar7;
      puVar3[0x2c] = uVar7;
      puVar3[0x2d] = 1;
      puVar3[0x2e] = 0xa0;
      uVar7 = puVar3[0x23];
      break;
    default:
      goto switchD_4a0d29f4_default;
    }
    puVar3[0x2f] = uVar7;
    goto switchD_4a0d29f4_default;
  case 0xb:
    uVar8 = 0x820;
    uVar7 = 0x821;
    goto FUN_4a0cd7a0;
  case 0xc:
    if (*(char *)(param_1 + 0x448) == '\0') {
      uVar8 = 0x86c;
      uVar7 = 0x86d;
    }
    else {
      uVar8 = 0x84f;
      uVar7 = 0x851;
    }
    break;
  case 0xd:
    FUN_4a132ce0(param_1);
    piVar12 = (int *)FUN_4a135e3c(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x60),PTR_DAT_4a12c7cc,
                                  0);
    *(int **)(param_1 + 0xd5c) = piVar12;
    if (piVar12 != (int *)0x0) {
      (**(code **)(*piVar12 + 0xc))();
    }
    FUN_4a0be380(*(undefined4 *)(param_1 + 0xd5c));
    *(undefined4 *)(param_1 + 0x1b0) = 0;
  case 0x11:
    FUN_4a130030(param_1,0x271c);
    uVar7 = 0x2725;
FUN_4a131aa0:
    uVar8 = FUN_4a16b8dc(&stack0xffffffd8,param_1 + 0x1f0);
    FUN_4a0b74b0(*(undefined4 *)(param_1 + 0x3ec),uVar7);
    uVar2 = FUN_4a16588c();
    FUN_4a13935c(uVar2,uVar8);
    FUN_4a16ba04(&stack0xffffffd8);
    if (*(int *)(param_1 + 0x1fc) == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x1fc) + 8);
    }
    FUN_4a084bdc(param_1 + 0x704,*puVar3);
    if (*(int *)(param_1 + 0x1fc) == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(*(int *)(param_1 + 0x1fc) + 8);
    }
    FUN_4a084bdc(param_1 + 0x778,*(undefined4 *)(iVar9 + 4));
    if (*(int *)(param_1 + 0x1fc) == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(*(int *)(param_1 + 0x1fc) + 8);
    }
    FUN_4a084bdc(param_1 + 0x7ec,*(undefined4 *)(iVar9 + 8));
    uVar8 = FUN_4a16b8dc(&stack0xffffffd8,param_1 + 0x1f0);
    FUN_4a0b74b0(*(undefined4 *)(param_1 + 0x3ec),uVar7);
    uVar7 = FUN_4a16588c();
    FUN_4a139388(uVar7,uVar8);
    FUN_4a16ba04(&stack0xffffffd8);
    if (*(int *)(param_1 + 0x1fc) == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(*(int *)(param_1 + 0x1fc) + 8);
    }
    uVar7 = FUN_4a002bb8(*(undefined4 *)(iVar9 + 0xc));
    uVar7 = FUN_4a17211c(uVar7,0x43b40000);
    uVar5 = FUN_4a171bb8(uVar7,*(undefined4 *)PTR_DAT_4a131c30);
    if (uVar5 < 0xc3340000) {
      if (0x4333ffff < (int)uVar5) {
        uVar5 = FUN_4a1725c0(uVar5,0x43b40000);
      }
    }
    else {
      uVar5 = FUN_4a171a94(uVar5,0x43b40000);
    }
    uVar7 = FUN_4a084be4(param_1 + 0x860);
    FUN_4a171a94(uVar7,*(undefined4 *)(param_1 + 0xe20));
    uVar7 = FUN_4a0d4990();
    FUN_4a084b60(param_1 + 0x860,uVar7);
    *(undefined4 *)(param_1 + 0xe20) = 0;
    *(undefined4 *)(param_1 + 0xe24) = 0;
    *(undefined4 *)(param_1 + 0xe28) = 0;
    puVar3 = (undefined4 *)FUN_4a084bdc(param_1 + 0x860,uVar5);
    return puVar3;
  case 0xe:
    FUN_4a130030(param_1,0x271e);
    uVar7 = 0x2725;
    goto FUN_4a131aa0;
  case 0xf:
    FUN_4a130030(param_1,0x271f);
    uVar7 = 0x2725;
    goto FUN_4a131aa0;
  case 0x10:
    *(undefined4 *)(param_1 + 0x1b0) = 10;
    FUN_4a130030(param_1,0x2721);
    uVar7 = 0x2727;
    goto FUN_4a131aa0;
  case 0x12:
    uVar8 = 0x822;
    uVar7 = 0x823;
    goto FUN_4a0cd7a0;
  case 0x13:
    uVar8 = 0x81d;
    uVar7 = 0x824;
    goto FUN_4a0cd7a0;
  case 0x14:
    uVar8 = 0xcd1;
    uVar7 = 0xcd0;
    goto FUN_4a0cd7a0;
  case 0x15:
    uVar8 = 0x829;
    uVar7 = 0x842;
    goto FUN_4a0cd7a0;
  case 0x17:
    uVar8 = 0xcaf;
    uVar7 = 0xcb0;
    break;
  case 0x18:
    FUN_4a09f864(*(int *)(param_1 + 0x20) + 0x128,0x109);
    FUN_4a098f10(param_1 + 0x284,0);
    if (*(int *)(param_1 + 0x2c4) == 0) {
      piVar10 = (int *)(param_1 + 0x2c4);
      piVar12 = (int *)FUN_4a136124(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x60),0x129);
      if ((int *)*piVar10 != piVar12) {
        if (piVar12 != (int *)0x0) {
          (**(code **)(*piVar12 + 0xc))(piVar12);
        }
        piVar14 = (int *)*piVar10;
        if ((piVar14 != (int *)0x0) && (iVar4 = (**(code **)(*piVar14 + 8))(piVar14), iVar4 != 0)) {
          (**(code **)(*piVar14 + 4))(piVar14);
        }
        *piVar10 = (int)piVar12;
      }
    }
    FUN_4a0d6ab8(auStack_30,*(undefined4 *)(param_1 + 0x24));
    if (in_stack_ffffffdc != (int *)0x0) {
      (**(code **)(*in_stack_ffffffdc + 0xc))(in_stack_ffffffdc);
    }
    (**(code **)(*(int *)(param_1 + 0x2cc) + 0x1c))((int *)(param_1 + 0x2cc));
    *(undefined4 *)(param_1 + 0x2d4) = in_stack_ffffffd8;
    *(int **)(param_1 + 0x2d8) = in_stack_ffffffdc;
    FUN_4a16bc4c(auStack_30);
    uVar7 = FUN_4a145948(iVar9);
    iVar4 = FUN_4a141abc(*(undefined4 *)(param_1 + 0x24),0);
    if (iVar4 == 0) {
      uVar8 = 0xcbb;
    }
    else {
      uVar8 = 0xcba;
    }
    FUN_4a1351bc(iVar9 + 0x278,uVar8);
    FUN_4a06b7b4(iVar9 + 0x278,0xfffffff5,0xcb9,uVar7);
    uVar8 = 300;
    uVar7 = 1;
    iVar4 = -0xb;
    goto code_r0x4a06b330;
  case 0x19:
    uVar8 = 0xb4;
    uVar7 = 1;
    iVar4 = 0xcbd;
    goto code_r0x4a06b330;
  case 0x1a:
    uVar8 = 200;
    uVar7 = 1;
    iVar4 = 0xcbf;
    goto code_r0x4a06b330;
  case 0x1b:
    uVar8 = 100;
    uVar7 = 2;
    iVar4 = 0xcc3;
    goto code_r0x4a06b330;
  case 0x1c:
    uVar8 = 200;
    uVar7 = 1;
    iVar4 = 0xcc4;
    goto code_r0x4a06b330;
  case 0x1d:
    goto switchD_4a12bf18_caseD_1d;
  case 0x1e:
    uVar8 = 0xcb3;
    uVar7 = 0xcb5;
    break;
  case 0x1f:
    FUN_4a09f864(*(int *)(param_1 + 0x20) + 0x128,0x109);
    uVar8 = 200;
    uVar7 = 1;
    iVar4 = 0xccd;
code_r0x4a06b330:
    iVar6 = 0;
    if (iVar4 < -2) {
      if (*(int *)(iVar9 + 0x2b8) != 0) {
        iVar6 = *(int *)(*(int *)(iVar9 + 0x2b8) + 8);
      }
      piVar12 = *(int **)(iVar6 + (iVar4 + 0xc) * 4);
    }
    else {
      uVar2 = FUN_4a08db2c();
      piVar12 = (int *)FUN_4a135b4c(uVar2,iVar4,0);
    }
    if (piVar12 != (int *)0x0) {
      (**(code **)(*piVar12 + 0xc))();
    }
    if (*(int **)(iVar9 + 0x304) != piVar12) {
      if (piVar12 != (int *)0x0) {
        (**(code **)(*piVar12 + 0xc))();
      }
      piVar10 = *(int **)(iVar9 + 0x304);
      if ((piVar10 != (int *)0x0) && (iVar4 = (**(code **)(*piVar10 + 8))(piVar10), iVar4 != 0)) {
        (**(code **)(*piVar10 + 4))(piVar10);
      }
      *(int **)(iVar9 + 0x304) = piVar12;
    }
    puVar3 = (undefined4 *)FUN_4a06b0fc(iVar9 + 0x278,piVar12,uVar7,uVar8);
    if ((piVar12 != (int *)0x0) && (iVar9 = (**(code **)(*piVar12 + 8))(piVar12), iVar9 != 0)) {
      (**(code **)(*piVar12 + 4))(piVar12);
    }
    return puVar3;
  case 0x21:
    uVar8 = 0xcb3;
    uVar7 = 0xcb6;
    break;
  case 0x22:
    uVar8 = 0xcb3;
    uVar7 = 0xcb7;
    break;
  case 0x23:
    uVar7 = FUN_4a145948(iVar9);
    FUN_4a06b6cc(iVar9 + 0x278,0xfffffff5,0xcb4,uVar7);
    uVar8 = 0xcb3;
    uVar7 = 0xfffffff5;
    break;
  case 0x24:
    *(undefined1 *)(param_1 + 0x448) = 1;
    FUN_4a12be24(param_1,0xd);
    iVar4 = FUN_4a0941ec();
    iVar9 = FUN_4a0ff494();
    uVar8 = *(undefined4 *)(iVar9 + 0x51c);
    uVar7 = FUN_4a140fd0(uVar8,0,2);
    *(undefined4 *)(iVar4 + 0x20) = uVar7;
    uVar7 = FUN_4a140fd0(uVar8,0,3);
    *(undefined4 *)(iVar4 + 0x24) = uVar7;
    uVar7 = FUN_4a140fd0(uVar8,0,0xb);
    *(undefined4 *)(iVar4 + 0x28) = uVar7;
    uVar7 = FUN_4a140fd0(uVar8,0,0xc);
    *(undefined4 *)(iVar4 + 0x2c) = uVar7;
    uVar7 = FUN_4a140fd0(uVar8,0,5);
    *(undefined4 *)(iVar4 + 0x30) = uVar7;
    uVar7 = FUN_4a140fd0(uVar8,0,6);
    *(undefined4 *)(iVar4 + 0x34) = uVar7;
    uVar7 = FUN_4a140fd0(uVar8,0,7);
    *(undefined4 *)(iVar4 + 0x38) = uVar7;
    uVar7 = FUN_4a140fd0(uVar8,0,8);
    *(undefined4 *)(iVar4 + 0x3c) = uVar7;
    uVar7 = FUN_4a140fd0(uVar8,0,9);
    *(undefined4 *)(iVar4 + 0x40) = uVar7;
    puVar3 = (undefined4 *)FUN_4a140fd0(uVar8,0,10);
    *(undefined4 **)(iVar4 + 0x44) = puVar3;
    return puVar3;
  case 0x25:
    uVar8 = 0xc9e;
    uVar7 = 0xca0;
    goto FUN_4a0cd7a0;
  case 0x26:
    uVar8 = 0xc9e;
    uVar7 = 0xca1;
FUN_4a0cd7a0:
    puVar3 = (undefined4 *)FUN_4a089eb4(*(undefined4 *)(param_1 + 0x168),uVar7,uVar8,0x40);
    return puVar3;
  case 0x28:
    FUN_4a0fe5e8(*(undefined4 *)(param_1 + 0x20));
    uVar8 = 0xc9b;
    uVar7 = 0xc9d;
    break;
  case 0x29:
    uVar8 = 0xc9b;
    uVar7 = 0xc9c;
    break;
  case 0x2a:
    iVar4 = host_s3eConfigGetInt_arm(&DAT_4a12c7e8,s_RenderDisclaimerIn3D_4a12c7d0,&stack0xffffffe0)
    ;
    if ((iVar4 != 0) || (in_stack_ffffffe0 == 0)) {
      iVar4 = 0;
      if (*(int *)PTR_DAT_4a12c7ec != 0) {
        iVar4 = *(int *)PTR_DAT_4a12c7f0;
      }
      if (*(int *)PTR_DAT_4a12c7ec != 0 && iVar4 != 0) {
        *(undefined4 *)PTR_DAT_4a12c7ec = 0;
        if (*(int *)PTR_DAT_4a12c7f4 == 0) {
          host_s3eDeviceGetString_arm(0x18);
        }
        else {
          FUN_4a00e63c();
        }
      }
    }
    iVar4 = FUN_4a13ca78(iVar9);
    iVar4 = (int)((ulonglong)((longlong)DAT_4a12c7f8 * (longlong)iVar4) >> 0x20);
    puVar3 = (undefined4 *)FUN_4a06b330(iVar9 + 0x278,0xcdf,1,iVar4 - (iVar4 >> 0x1f));
    *(undefined4 *)(param_1 + 600) = 0;
    return puVar3;
  }
  iVar4 = *(int *)(param_1 + 0x168);
  iVar9 = FUN_4a0ff494();
  *(undefined4 *)(iVar4 + 0x78) = 1;
  *(undefined4 *)(iVar4 + 0x94) = 0xffffffff;
  *(undefined4 *)(iVar4 + 0x98) = 4;
  *(undefined4 *)(iVar4 + 0x90) = uVar8;
  *(undefined4 *)(iVar4 + 0x9c) = 0xffffffff;
  *(undefined4 *)(iVar4 + 0xa0) = 0xffffffff;
  FUN_4a09f974(iVar9 + 0x128,0x60);
  uVar8 = FUN_4a171e1c();
  *(undefined4 *)(iVar4 + 0xa4) = uVar8;
  *(undefined4 *)(iVar4 + 0xa8) = 200;
  FUN_4a08a03c(iVar4,uVar7,0);
  *(undefined4 *)(iVar4 + 0x74) = 0;
  *(undefined4 *)(iVar4 + 0x7c) = 2;
  *(undefined4 *)(iVar4 + 0x80) = 0;
                    /* WARNING: Could not recover jumptable at 0x4a0faeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar3 = (undefined4 *)(*(code *)PTR_caseD_2_4a0faec8)();
  return puVar3;
switchD_4a12bf18_caseD_1d:
  FUN_4a098e94(param_1 + 0x284);
  in_stack_ffffffe0 = 0;
  piVar12 = *(int **)(param_1 + 0x2c4);
  if (piVar12 != (int *)0x0) {
    iVar9 = (**(code **)(*piVar12 + 8))(piVar12);
    if (iVar9 != 0) {
      (**(code **)(*piVar12 + 4))(piVar12);
    }
    *(undefined4 *)(param_1 + 0x2c4) = 0;
  }
  FUN_4a09fa1c(*(int *)(param_1 + 0x20) + 0x128,0x109);
  param_2 = 9;
  goto LAB_4a12be34;
switchD_4a0d3700_caseD_1:
  puVar3[6] = 2;
  uVar5 = puVar3[9];
  if ((int)uVar5 < 0) {
    return (undefined4 *)puVar3[2];
  }
  iVar4 = ((undefined4 *)puVar3[2])[0x1d];
  iVar9 = 0;
  if (iVar4 != 0) {
    iVar9 = *(int *)(iVar4 + 8);
  }
  iVar6 = 0;
  if (iVar4 == 0) {
    iVar9 = 0;
  }
  puVar3 = *(undefined4 **)(iVar9 + (uVar5 & 0xffff) * 0x14 + 0xc);
  if (puVar3 != (undefined4 *)0x0) {
    iVar6 = puVar3[2];
  }
  piVar12 = *(int **)(iVar6 + (uVar5 >> 0x10) * 4);
  if (piVar12 == (int *)0x0) {
    return puVar3;
  }
  (**(code **)(*piVar12 + 0x40))(piVar12);
                    /* WARNING: Could not recover jumptable at 0x4a08673c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar3 = (undefined4 *)(**(code **)(*piVar12 + 0x38))(piVar12,*(code **)(*piVar12 + 0x38),0);
  return puVar3;
}



// Address: 4a12c7fc

void FUN_4a12c7fc(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  if ((*(int *)(param_1 + 0x84) == 0) && (iVar12 = *(int *)(param_1 + 0xe28), 0 < iVar12)) {
    uVar1 = FUN_4a171fac(iVar12);
    uVar1 = FUN_4a17211c(uVar1,*(undefined4 *)(param_1 + 0xe24));
    uVar1 = FUN_4a17211c(uVar1,DAT_4a12c984);
    *(int *)(param_1 + 0xe28) = iVar12 - param_2;
    uVar2 = FUN_4a171fac(param_2);
    uVar1 = FUN_4a17211c(uVar2,uVar1);
    FUN_4a171a94(uVar1,*(undefined4 *)(param_1 + 0xe20));
    FUN_4a171e1c();
    FUN_4a0d4a38();
    uVar1 = FUN_4a171fac();
    *(undefined4 *)(param_1 + 0xe20) = uVar1;
  }
  FUN_4a084dd8(param_1 + 0x44c,param_2);
  FUN_4a084dd8(param_1 + 0x4c0,param_2);
  FUN_4a084dd8(param_1 + 0x534,param_2);
  FUN_4a084dd8(param_1 + 0x5a8,param_2);
  FUN_4a084dd8(param_1 + 0x61c,param_2);
  FUN_4a084dd8(param_1 + 0x690,param_2);
  uVar1 = FUN_4a084be4(param_1 + 0x534);
  uVar2 = FUN_4a084be4(param_1 + 0x4c0);
  uVar3 = FUN_4a084be4(param_1 + 0x44c);
  uVar4 = FUN_4a084be4(param_1 + 0x690);
  uVar5 = FUN_4a084be4(param_1 + 0x61c);
  uVar6 = FUN_4a084be4(param_1 + 0x5a8);
  FUN_4a080f98(*(undefined4 *)(param_1 + 0x3f4),uVar6,uVar5,uVar4,uVar3,uVar2,uVar1,0,0x3f800000,0);
  FUN_4a0b7cb0(*(undefined4 *)(param_1 + 0x3f4),0x42b40000,0,0,0x3f800000);
  iVar7 = *(int *)(param_1 + 0x3f4);
  iVar12 = *(int *)(param_1 + 0x444);
  piVar10 = *(int **)(iVar12 + 0x7c);
  if (iVar7 == 0) {
    if ((piVar10 != (int *)0x0) && (iVar7 = (**(code **)(*piVar10 + 8))(piVar10), iVar7 != 0)) {
      (**(code **)(*piVar10 + 4))(piVar10);
    }
    *(undefined4 *)(iVar12 + 0x7c) = 0;
  }
  else if (piVar10 == (int *)0x0) {
    uVar1 = thunk_FUN_4a161570(0x48);
    piVar10 = (int *)FUN_4a0b89d4(uVar1,iVar7);
    *(int **)(iVar12 + 0x7c) = piVar10;
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 0xc))();
    }
  }
  else {
    iVar8 = *(int *)(iVar7 + 0xc);
    iVar9 = *(int *)(iVar7 + 0x10);
    iVar11 = *(int *)(iVar7 + 0x14);
    iVar13 = *(int *)(iVar7 + 0x18);
    iVar14 = *(int *)(iVar7 + 0x1c);
    iVar15 = *(int *)(iVar7 + 0x20);
    piVar10[2] = *(int *)(iVar7 + 8);
    piVar10[3] = iVar8;
    piVar10[4] = iVar9;
    piVar10[5] = iVar11;
    piVar10[6] = iVar13;
    piVar10[7] = iVar14;
    piVar10[8] = iVar15;
    iVar8 = *(int *)(iVar7 + 0x28);
    iVar9 = *(int *)(iVar7 + 0x2c);
    iVar11 = *(int *)(iVar7 + 0x30);
    iVar13 = *(int *)(iVar7 + 0x34);
    iVar14 = *(int *)(iVar7 + 0x38);
    iVar15 = *(int *)(iVar7 + 0x3c);
    piVar10[9] = *(int *)(iVar7 + 0x24);
    piVar10[10] = iVar8;
    piVar10[0xb] = iVar9;
    piVar10[0xc] = iVar11;
    piVar10[0xd] = iVar13;
    piVar10[0xe] = iVar14;
    piVar10[0xf] = iVar15;
    iVar8 = *(int *)(iVar7 + 0x44);
    piVar10[0x10] = *(int *)(iVar7 + 0x40);
    piVar10[0x11] = iVar8;
  }
  *(undefined1 *)(iVar12 + 200) = 0;
  return;
}



// Address: 4a12c988

/* WARNING: Removing unreachable block (ram,0x4a12caa4) */
/* WARNING: Removing unreachable block (ram,0x4a12cac0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a12c988(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 auStack_64 [8];
  undefined4 local_5c;
  int *local_58;
  undefined1 auStack_50 [8];
  undefined4 local_48;
  int *local_44;
  undefined1 auStack_3c [20];
  int local_28;
  
  local_28 = *(int *)(param_1 + 0x20) + 0x278;
  if (*(int *)(param_1 + 0x234) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x234) + 8);
  }
  if (iVar3 == 0) {
    iVar3 = FUN_4a06c1c0(local_28);
    FUN_4a16be24(auStack_50,iVar3 + 5);
    piVar5 = local_44;
    uVar4 = local_48;
    if (local_44 != (int *)0x0) {
      (**(code **)(*local_44 + 0xc))(local_44);
    }
    (**(code **)(*(int *)(param_1 + 0x228) + 0x1c))((int *)(param_1 + 0x228));
    *(undefined4 *)(param_1 + 0x230) = uVar4;
    *(int **)(param_1 + 0x234) = piVar5;
    uVar4 = FUN_4a16bdcc(auStack_3c,auStack_50);
    FUN_4a0ff4b8(uVar4,1);
    FUN_4a16bef4(auStack_3c);
    iVar10 = iVar3 + 1;
    piVar5 = (int *)FUN_4a0c6bc0(auStack_64);
    puVar2 = PTR_PTR_4a12cce0;
    piVar5[2] = 0;
    puVar1 = PTR_PTR_4a12ccdc;
    piVar5[3] = 0;
    *piVar5 = (int)puVar2;
    if (0 < iVar10) {
      iVar6 = FUN_4a15e080(iVar10 * 4);
      if (iVar6 == 0) {
        iVar6 = FUN_4a1669a8();
      }
      iVar8 = 0;
      do {
        *(undefined4 *)(iVar6 + iVar8 * 4) = 0;
        local_68 = 0;
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar10);
      thunk_FUN_4a161570(0x18);
      puVar7 = (undefined4 *)FUN_4a0c0628();
      puVar7[3] = 4;
      puVar7[4] = iVar10;
      puVar2 = PTR_PTR_4a12cce4;
      *puVar7 = PTR_PTR_4a12cce4;
      puVar7[2] = iVar6;
      *(undefined1 *)(puVar7 + 5) = 1;
      if (puVar7 != (undefined4 *)0x0) {
        (**(code **)(puVar2 + 0xc))(puVar7);
      }
      (**(code **)(*piVar5 + 0x1c))(piVar5);
      piVar5[2] = iVar10;
      piVar5[3] = (int)puVar7;
    }
    piVar5 = local_58;
    if (local_58 != (int *)0x0) {
      (**(code **)(*local_58 + 0xc))(local_58);
    }
    (**(code **)(*(int *)(param_1 + 0x23c) + 0x1c))((int *)(param_1 + 0x23c));
    *(undefined4 *)(param_1 + 0x244) = local_5c;
    *(int **)(param_1 + 0x248) = piVar5;
    puVar2 = PTR_PTR_4a12cce8;
    iVar10 = 0;
    if (0 < iVar3) {
      do {
        puVar7 = (undefined4 *)FUN_4a0c6bc0(local_78);
        *puVar7 = puVar1;
        puVar7[2] = local_48;
        puVar7[3] = local_44;
        if (local_44 != (int *)0x0) {
          (**(code **)(*local_44 + 0xc))();
        }
        *puVar7 = puVar2;
        FUN_4a0fc4b0(puVar7,iVar10);
        FUN_4a16bef4(local_78);
        iVar6 = 0;
        if (local_58 != (int *)0x0) {
          iVar6 = local_58[2];
        }
        piVar9 = (int *)(iVar6 + iVar10 * 4);
        piVar5 = (int *)FUN_4a13515c(local_28,0,iVar10);
        if ((int *)*piVar9 != piVar5) {
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 0xc))(piVar5);
          }
          piVar11 = (int *)*piVar9;
          if ((piVar11 != (int *)0x0) && (iVar6 = (**(code **)(*piVar11 + 8))(piVar11), iVar6 != 0))
          {
            (**(code **)(*piVar11 + 4))(piVar11);
          }
          *piVar9 = (int)piVar5;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar3);
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x20) + 0x49c);
    if (iVar3 != -1) {
      iVar10 = 0;
      if (local_44 != (int *)0x0) {
        iVar10 = local_44[2];
      }
      *(int *)(iVar10 + 8) = iVar3;
    }
    thunk_FUN_4a161570(0xbc);
    uVar4 = FUN_4a08c014();
    *(undefined4 *)(param_1 + 0x224) = uVar4;
    FUN_4a08bf50(uVar4,param_1 + 0x228,param_1 + 0x23c);
    FUN_4a0cb72c(param_1,*(undefined4 *)(param_1 + 0x224));
    FUN_4a169628(auStack_64);
    FUN_4a16bef4(auStack_50);
    return;
  }
  return;
}



// Address: 4a12ccec

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a12ccec(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  iStack_2c = param_1;
  uStack_28 = param_2;
  iVar2 = FUN_4a130b7c();
  puVar1 = PTR_DAT_4a12d240;
  if (iVar2 != 0) {
    iStack_38 = *(int *)(param_1 + 0x20) + 0x278;
    iStack_3c = *(int *)(param_1 + 0x20) + 0x128;
    uVar3 = FUN_4a0bbd68(*(undefined4 *)PTR_DAT_4a12d240,5,2);
    uVar7 = *(undefined4 *)puVar1;
    iStack_48 = FUN_4a0bc200(uVar7);
    iStack_4c = FUN_4a0bc1f8(uVar7);
    if (iStack_4c < iStack_48) {
      piVar6 = &iStack_4c;
    }
    else {
      piVar6 = &iStack_48;
    }
    iVar2 = FUN_4a0bbe00(*(undefined4 *)puVar1,*piVar6 + -0x13b,1);
    FUN_4a171fac();
    FUN_4a171fac(uVar3);
    iStack_4c = 0x43910000;
    iStack_48 = 0x3f800000;
    FUN_4a09ff60(iStack_3c,0x141,0x142,0x143);
    FUN_4a09f3a4(iStack_3c,uStack_28);
    iVar4 = FUN_4a0bbd68(*(undefined4 *)puVar1,0x3a,2);
    FUN_4a171fac(iVar2 + 0x2a);
    FUN_4a171fac(iVar4 + 100);
    FUN_4a0a02bc(iStack_3c,0x16a);
    uStack_30 = FUN_4a171fac(iVar2 + 0x41);
    FUN_4a171fac(iVar4 + -8);
    iStack_4c = 0x433e0000;
    iStack_48 = 0x3f800000;
    FUN_4a09ff60(iStack_3c,0x14b,0x14c,0x14d);
    iStack_40 = iVar4 + -0x10;
    iStack_44 = iVar4 + 199;
    uStack_34 = FUN_4a171fac(iVar2 + 0x80);
    uVar3 = FUN_4a171fac(iStack_40);
    FUN_4a09f664(iStack_3c,0xb2,uVar3,uStack_34);
    uVar3 = FUN_4a171fac(iStack_44);
    FUN_4a09f664(iStack_3c,0xb3,uVar3,uStack_34);
    FUN_4a09f3a4(iStack_3c,uStack_28);
    FUN_4a06b074(iStack_38,uStack_28,0x875,6);
    uVar3 = FUN_4a0cf540(param_1,1);
    FUN_4a0d22c4(uVar3,iVar4 + -4,iVar2 + 0x49,0xc0);
    FUN_4a0d23c4(uVar3,uStack_28);
    FUN_4a0bbd68(*(undefined4 *)puVar1,0x1d,2);
    uVar3 = FUN_4a171fac();
    uVar7 = FUN_4a171fac(iVar2 + 0x1e);
    FUN_4a09f664(iStack_3c,0x1a7,uVar3,uVar7);
    uVar5 = FUN_4a0cb6c4(param_1,2);
    uVar7 = FUN_4a171e1c(uVar7);
    uVar3 = FUN_4a171e1c(uVar3);
    FUN_4a0fa6e8(uVar5,iStack_3c,uVar3,uVar7);
    FUN_4a0bbd68(*(undefined4 *)puVar1,0xf0,2);
    uVar3 = FUN_4a171fac();
    iVar4 = FUN_4a0bc1f8(*(undefined4 *)puVar1);
    if (iVar4 == 400) {
      uVar3 = FUN_4a1725c0(uVar3,0x430c0000);
    }
    else {
      iVar4 = FUN_4a0bc1f8(*(undefined4 *)puVar1);
      if (iVar4 == 0x140) {
        uVar3 = FUN_4a1725c0(uVar3,0x43200000);
      }
    }
    uVar7 = FUN_4a171fac(iVar2 + 0x11b);
    FUN_4a09f664(iStack_3c,0x1a7,uVar3,uVar7);
    uVar5 = FUN_4a0cb6c4(param_1,0x20);
    uVar7 = FUN_4a171e1c(uVar7);
    uVar3 = FUN_4a171e1c(uVar3);
    FUN_4a0fa6e8(uVar5,iStack_3c,uVar3,uVar7);
    FUN_4a09f3a4(iStack_3c,uStack_28);
    uVar3 = *(undefined4 *)puVar1;
    iStack_48 = FUN_4a0bc200(uVar3);
    iStack_4c = FUN_4a0bc1f8(uVar3);
    if (iStack_48 < iStack_4c) {
      piVar6 = &iStack_4c;
    }
    else {
      piVar6 = &iStack_48;
    }
    uVar3 = FUN_4a0bbd68(*(undefined4 *)puVar1,*piVar6 + -0x6c,2);
    FUN_4a0bc1f8(*(undefined4 *)puVar1);
    FUN_4a171fac(iVar2 + 0x113);
    FUN_4a171fac(uVar3);
    FUN_4a0a02bc(iStack_3c,0x167,0x168,0x169);
    FUN_4a09f3a4(iStack_3c,uStack_28);
    FUN_4a06b330(iStack_38,0xb12,4);
    FUN_4a06c45c(iStack_38,uStack_28,4,uVar3);
    return;
  }
  return;
}



// Address: 4a12d248

void FUN_4a12d248(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = *(int *)(param_1 + 0x20);
  iVar6 = iVar5 + 0x128;
  iVar7 = iVar5 + 0x278;
  FUN_4a12b7a8();
  FUN_4a13ca78(iVar5);
  uVar1 = FUN_4a171fac();
  uVar1 = FUN_4a1725c0(uVar1,0x43700000);
  FUN_4a13caa0(iVar5);
  uVar2 = FUN_4a171fac();
  uVar2 = FUN_4a1725c0(uVar2,0x42500000);
  uVar1 = FUN_4a171a94(uVar1,0x42f00000);
  uVar3 = FUN_4a0cb6c4(param_1,0x1000);
  FUN_4a09f664(iVar6,0x14a,0x42f00000,uVar2,0x3f800000,0x3f800000,0x3f800000,0);
  uVar4 = FUN_4a171e1c(uVar2);
  FUN_4a0fa6e8(uVar3,iVar6,0x78,uVar4,1);
  uVar3 = FUN_4a0cb6c4(param_1,0x4000000);
  FUN_4a09f664(iVar6,0x14a,uVar1,uVar2,0x3f800000,0x3f800000,0x3f800000,0);
  uVar1 = FUN_4a171e1c(uVar1);
  FUN_4a0fa6e8(uVar3,iVar6,uVar1,uVar4,1);
  FUN_4a09f3a4(iVar6,param_2);
  iVar5 = FUN_4a13ca78(iVar5);
  FUN_4a06c45c(iVar7,param_2,1,iVar5 >> 1,0x6e,0x12);
  FUN_4a1725c0(uVar2,0x42000000);
  uVar2 = FUN_4a171e1c();
  FUN_4a06cd2c(iVar7,param_2,0,0xccf,5,0x50,0x78,uVar2,0x22);
  FUN_4a06cd2c(iVar7,param_2,1,0xcce,5,0x50,uVar1,uVar2,0x22);
  return;
}



// Address: 4a12d444

/* WARNING: Removing unreachable block (ram,0x4a041a44) */
/* WARNING: Removing unreachable block (ram,0x4a041a48) */
/* WARNING: Removing unreachable block (ram,0x4a041a4c) */
/* WARNING: Removing unreachable block (ram,0x4a041a50) */
/* WARNING: Removing unreachable block (ram,0x4a041a58) */
/* WARNING: Removing unreachable block (ram,0x4a041a6c) */
/* WARNING: Removing unreachable block (ram,0x4a041a74) */
/* WARNING: Removing unreachable block (ram,0x4a041a78) */
/* WARNING: Removing unreachable block (ram,0x4a041a7c) */
/* WARNING: Removing unreachable block (ram,0x4a150d90) */
/* WARNING: Removing unreachable block (ram,0x4a150da4) */
/* WARNING: Removing unreachable block (ram,0x4a150da8) */
/* WARNING: Removing unreachable block (ram,0x4a0004e8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a12d444(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  undefined4 local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int iStack_2c;
  undefined4 local_28;
  
  local_58 = *(int *)(param_1 + 0x20);
  local_5c = local_58 + 0x278;
  local_60 = local_58 + 0x128;
  local_64 = *(int *)(param_1 + 0x1ac);
  bVar13 = local_64 == 9;
  bVar14 = local_64 == 10;
  bVar15 = local_64 != 0x16;
  if ((bVar13 || bVar14) || !bVar15) {
    local_64 = 1;
  }
  if ((!bVar13 && !bVar14) && bVar15) {
    local_64 = 0;
  }
  iStack_2c = param_1;
  local_28 = param_2;
  iVar3 = FUN_4a145c04(local_58);
  *(undefined4 *)PTR_DAT_4a12dae0 = *(undefined4 *)PTR_DAT_4a12dadc;
  piVar4 = (int *)FUN_4a0fc26c(*(undefined4 *)(param_1 + 0x20));
  FUN_4a0a83a4(piVar4,local_28);
  FUN_4a0a8b14(piVar4,*(undefined4 *)(param_1 + 0x25c));
  (**(code **)(*piVar4 + 0x30))(piVar4);
  FUN_4a12a458(param_1,local_28);
  FUN_4a041910(1);
  puVar2 = PTR_DAT_4a12dae4;
  FUN_4a0bbb28(*(undefined4 *)PTR_DAT_4a12dae4);
  uVar7 = *(undefined4 *)puVar2;
  local_a8 = FUN_4a0bc200(uVar7);
  local_ac = FUN_4a0bc1f8(uVar7);
  if (local_ac < local_a8) {
    piVar4 = &local_ac;
  }
  else {
    piVar4 = &local_a8;
  }
  iVar1 = (*piVar4 + -0x140) / 2;
  uVar7 = *(undefined4 *)PTR_DAT_4a12dae4;
  local_a8 = FUN_4a0bc200(uVar7);
  local_ac = FUN_4a0bc1f8(uVar7);
  if (local_a8 < local_ac) {
    piVar4 = &local_ac;
  }
  else {
    piVar4 = &local_a8;
  }
  iVar10 = (*piVar4 + -0x1e0) / 2 + 10;
  local_68 = iVar10;
  local_6c = FUN_4a13ca78(local_58);
  local_6c = local_6c + iVar10 * -2;
  local_78 = FUN_4a13caa0(local_58);
  local_78 = local_78 + (iVar1 + 10) * -2;
  local_70 = local_78 + -10;
  iVar8 = local_6c + -0x50;
  iVar10 = iVar8 >> 1;
  iVar12 = local_68 + iVar10 + 0x37;
  local_74 = iVar1 + 0x35;
  iVar9 = iVar12 - iVar10;
  local_78 = local_78 + -0x67;
  local_7c = iVar9 + 8;
  local_80 = iVar1 + 0x46;
  local_84 = local_6c + -0x68;
  local_88 = iVar9 + -8;
  iVar11 = local_6c + -0x58;
  local_8c = iVar9 + iVar11 + 7;
  local_90 = iVar1 + 0x82;
  local_94 = iVar9 + (iVar11 >> 1);
  local_98 = local_78 + iVar1 + 0x3f + -0x3b;
  local_a8 = FUN_4a09f974(local_60,0x7f);
  local_30 = FUN_4a171fac(iVar11);
  FUN_4a171bb8(local_30,local_a8);
  local_9c = FUN_4a171e1c();
  local_a0 = iVar1 + 0x2a;
  local_a4 = iVar1 + 0x109;
  iVar11 = local_68 + 0x19;
  *(undefined4 *)PTR_DAT_4a12dae0 = *(undefined4 *)PTR_DAT_4a12dae8;
  local_34 = FUN_4a171fac(local_70);
  local_38 = FUN_4a171fac(local_6c);
  local_3c = FUN_4a171fac(iVar1 + 10);
  uVar7 = FUN_4a171fac(local_68);
  local_ac = local_34;
  local_a8 = 0x3f800000;
  FUN_4a09ff60(local_60,0x141,0x142,0x143,0x144,0x145,0x146,0x147,0x148,0x149,uVar7,local_3c,
               local_38);
  local_40 = FUN_4a171fac(local_90);
  uVar7 = FUN_4a171fac(local_88);
  FUN_4a09f664(local_60,0xb2,uVar7,local_40,0x3f800000,0x3f800000,0x3f800000,0);
  uVar7 = FUN_4a171fac(local_8c);
  FUN_4a09f664(local_60,0xb3,uVar7,local_40,0x3f800000,0x3f800000,0x3f800000,0);
  local_44 = FUN_4a171fac(local_a0);
  local_48 = FUN_4a171fac(iVar11);
  FUN_4a09f664(local_60,0x14a,local_48,local_44,0x3f800000,0x3f800000,0x3f800000,0);
  local_4c = FUN_4a171fac(iVar8);
  local_50 = FUN_4a171fac(local_74);
  uVar7 = FUN_4a171fac(iVar12);
  FUN_4a0a02bc(local_60,0x16a,0x16b,0x16c,uVar7,local_50,local_4c,0x3f800000,0x3f800000,0,0);
  FUN_4a09f3a4(local_60,local_28);
  if (*(int *)(param_1 + 0x1ac) == 10 || *(int *)(param_1 + 0x1ac) == 0xb) {
    uVar7 = 0x82b;
  }
  else {
    uVar7 = 0x82a;
  }
  FUN_4a06b074(local_5c,local_28,uVar7,6,iVar12,local_74 + -5,0x12);
  if (*(int *)(param_1 + 0x1ac) == 10 || *(int *)(param_1 + 0x1ac) == 0xb) {
    local_a8 = FUN_4a13caa0(local_58);
    uVar7 = FUN_4a13ca78(local_58);
    FUN_4a0fb45c(local_58,local_28,0x41,0xff4d0000,0,0,uVar7,local_a8);
  }
  uVar7 = FUN_4a0cb6c4(param_1,2);
  FUN_4a0fa6e8(uVar7,local_60,iVar11,local_a0,local_64);
  if ((0 < iVar3) && (*(int *)(param_1 + 0x1ac) == 9)) {
    uVar7 = FUN_4a171fac(local_a4);
    FUN_4a09f664(local_60,0x14a,local_48,uVar7,0x3f800000,0x3f800000,0x3f800000,0);
    uVar7 = FUN_4a0cb6c4(param_1,0x800);
    FUN_4a0fa6e8(uVar7,local_60,iVar11,local_a4,local_64);
  }
  local_54 = FUN_4a171fac(local_78);
  uVar7 = FUN_4a171fac(iVar1 + 0x3f);
  uVar5 = FUN_4a171fac(iVar9);
  local_ac = local_54;
  local_a8 = 0x3f800000;
  FUN_4a09ff60(local_60,0x14b,0x14c,0x14d,0x14e,0x14f,0x150,0x151,0x152,0x153,uVar5,uVar7,local_30);
  uVar7 = FUN_4a171fac(local_9c);
  uVar5 = FUN_4a171fac(local_98);
  uVar6 = FUN_4a171fac(local_94);
  FUN_4a09f664(local_60,0x7f,uVar6,uVar5,0x3f800000,uVar7,0x3f800000,0);
  FUN_4a09f3a4(local_60,local_28);
  iVar8 = *(int *)(param_1 + 0x1ac);
  if (iVar8 == 0x16) {
    uVar7 = 0xcb1;
  }
  else if (iVar8 == 10 || iVar8 == 0xb) {
    uVar7 = 0xc99;
  }
  else if (iVar3 == 0) {
    uVar7 = 0xc96;
  }
  else if (iVar3 == 7) {
    uVar7 = 0xc97;
  }
  else {
    uVar7 = 0xc98;
  }
  FUN_4a06cd2c(local_5c,local_28,0,uVar7,4,iVar10,iVar12,iVar1 + 0xe6,0x12);
  uVar7 = FUN_4a0cf540(param_1,0);
  FUN_4a0d22c4(uVar7,local_7c,local_80,local_84,0x78,local_64);
  FUN_4a0d23c4(uVar7,local_28);
  FUN_4a0bbcb4(*(undefined4 *)PTR_DAT_4a12dae4);
  puVar2 = PTR_DAT_4a041a9c;
  iVar3 = 0;
  if (*(int *)PTR_DAT_4a041a9c != 0) {
    iVar3 = *(int *)(PTR_DAT_4a041a9c + 4);
  }
  if (*(int *)PTR_DAT_4a041a9c == 0 || iVar3 == 0) {
    return;
  }
  *(undefined4 *)(PTR_DAT_4a041a9c + 0x28) = 0;
  iVar3 = *(int *)(PTR_DAT_4a041a9c + 0x38);
  if (*(int *)(PTR_DAT_4a041a9c + 0x1c) != 0) {
    *(int *)(puVar2 + 8) = *(int *)(PTR_DAT_4a041a9c + 0x34) + *(int *)(puVar2 + 0x3c);
    *(int *)(puVar2 + 0xc) = iVar3 + *(int *)(puVar2 + 0x40);
    FUN_4a150d7c(-(*(int *)(puVar2 + 0x14) + *(int *)(puVar2 + 0x3c) / 2),
                 -(*(int *)(puVar2 + 0x40) / 2));
    thunk_FUN_4a150140(0xc11);
    *(undefined4 *)(puVar2 + 0x24) = 1;
    FUN_4a1507ec(0,0,*(undefined4 *)(puVar2 + 0x34),*(undefined4 *)(puVar2 + 0x38));
    *(undefined4 *)(puVar2 + 0x24) = 0;
  }
  if (*(int *)(puVar2 + 0x20) == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0419cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  *(int *)(puVar2 + 8) = *(int *)(puVar2 + 0x34) + *(int *)(puVar2 + 0x3c);
  *(int *)(puVar2 + 0xc) = *(int *)(puVar2 + 0x38) + *(int *)(puVar2 + 0x40);
  FUN_4a150d7c((*(int *)(puVar2 + 0x10) + *(int *)(puVar2 + 0x18)) - *(int *)(puVar2 + 0x3c) / 2,
               -(*(int *)(puVar2 + 0x40) / 2));
  *(undefined4 *)(puVar2 + 0x24) = 1;
  thunk_FUN_4a150140(0xc11);
  FUN_4a1507ec(*(undefined4 *)(puVar2 + 0x34),0,*(undefined4 *)(puVar2 + 0x34),
               *(undefined4 *)(puVar2 + 0x38));
  *(undefined4 *)(puVar2 + 0x24) = 0;
  return;
}



// Address: 4a12daec

void FUN_4a12daec(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = *(int *)(param_1 + 0x20);
  iVar6 = iVar5 + 0x128;
  iVar7 = iVar5 + 0x278;
  FUN_4a12b7a8();
  FUN_4a13ca78(iVar5);
  uVar1 = FUN_4a171fac();
  uVar1 = FUN_4a1725c0(uVar1,0x43be0000);
  uVar1 = FUN_4a17295c(uVar1,0xffffffff);
  FUN_4a12de00(param_1,uVar1,0x41800000,0x43be0000,0x425c0000);
  FUN_4a13caa0(iVar5);
  uVar2 = FUN_4a171fac();
  uVar2 = FUN_4a1725c0(uVar2,0x42500000);
  uVar3 = FUN_4a0cb6c4(param_1,0x1000);
  FUN_4a09f664(iVar6,0x14a,0x42600000,uVar2,0x3f800000,0x3f800000,0x3f800000,0);
  uVar4 = FUN_4a171e1c(uVar2);
  FUN_4a0fa6e8(uVar3,iVar6,0x38,uVar4,1);
  uVar3 = FUN_4a0cb6c4(param_1,0x1000000);
  FUN_4a09f664(iVar6,0x14a,0x43150000,uVar2,0x3f800000,0x3f800000,0x3f800000,0);
  FUN_4a0fa6e8(uVar3,iVar6,0x95,uVar4,1);
  uVar3 = FUN_4a0cb6c4(param_1,0x4000000);
  FUN_4a09f664(iVar6,0x14a,0x43720000,uVar2,0x3f800000,0x3f800000,0x3f800000,0);
  FUN_4a0fa6e8(uVar3,iVar6,0xf2,uVar4,1);
  FUN_4a09f3a4(iVar6,param_2);
  FUN_4a098d50(param_1 + 0x284,param_2,0x161,0x53,0xa0,0x104);
  FUN_4a171a94(uVar1,0x433e0000);
  uVar1 = FUN_4a171e1c();
  FUN_4a06b074(iVar7,param_2,0xcb8,6,uVar1,0x2b,0x12);
  iVar5 = FUN_4a13ca78(iVar5);
  FUN_4a06c45c(iVar7,param_2,1,iVar5 >> 1,0x8c,0x12);
  FUN_4a1725c0(uVar2,0x42000000);
  uVar1 = FUN_4a171e1c();
  FUN_4a06cd2c(iVar7,param_2,0,0xcc5,5,0x55,0x38,uVar1,0x22);
  FUN_4a06cd2c(iVar7,param_2,1,0xcc6,5,0x55,0x95,uVar1,0x22);
  FUN_4a06cd2c(iVar7,param_2,2,0xcc7,5,0x55,0xf2,uVar1,0x22);
  return;
}



// Address: 4a12dde4

int FUN_4a12dde4(int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  
  iVar1 = *(int *)(param_1 + 0x1ac);
  bVar2 = iVar1 == 10;
  bVar3 = iVar1 == 0xb;
  bVar4 = iVar1 != 0x16;
  if ((bVar2 || bVar3) || !bVar4) {
    iVar1 = 1;
  }
  if ((!bVar2 && !bVar3) && bVar4) {
    iVar1 = 0;
  }
  return iVar1;
}



// Address: 4a12de00

void FUN_4a12de00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x20) + 0x128;
  uVar1 = FUN_4a09f974(iVar6,0x13);
  uVar2 = FUN_4a09f9c8(iVar6,0x13);
  uVar3 = FUN_4a17295c(param_4,0xffffffff);
  uVar4 = FUN_4a171bb8(uVar3,uVar1);
  uVar1 = FUN_4a171bb8(param_5,uVar2);
  uVar2 = FUN_4a17295c(param_4,0xfffffffe);
  uVar2 = FUN_4a171a94(uVar2,param_2);
  uVar3 = FUN_4a17211c(param_4,0x3f400000);
  uVar3 = FUN_4a171a94(uVar3,param_2);
  uVar5 = FUN_4a17295c(param_5,0xffffffff);
  uVar5 = FUN_4a171a94(uVar5,param_3);
  FUN_4a09f664(iVar6,0x13,uVar2,uVar5,0x3f800000,uVar4,uVar1,0);
  FUN_4a09f664(iVar6,0x13,uVar3,uVar5,0x3f800000,uVar4 ^ 0x80000000,uVar1,0);
  return;
}



// Address: 4a12df08

undefined * FUN_4a12df08(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_2c [8];
  undefined4 local_24;
  int *local_20;
  
  FUN_4a0fb644();
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  switch(*(undefined4 *)(param_1 + 0x1e4)) {
  case 0:
    *(undefined4 *)(param_1 + 0x1e8) = 0;
    FUN_4a16be24(auStack_2c,0xf);
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 0xc))(local_20);
    }
    (**(code **)(*(int *)(param_1 + 0x1cc) + 0x1c))((int *)(param_1 + 0x1cc));
    *(undefined4 *)(param_1 + 0x1d4) = local_24;
    *(int **)(param_1 + 0x1d8) = local_20;
    FUN_4a129524(param_1);
    *(int *)(param_1 + 0x1e4) = *(int *)(param_1 + 0x1e4) + 1;
    *(undefined4 *)(param_1 + 0x1e8) = 0x14;
    FUN_4a0fc758(uVar2);
    FUN_4a16bef4(auStack_2c);
    break;
  case 1:
    iVar1 = FUN_4a0fc394(uVar2,4);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x1e8) = 0x32;
      *(int *)(param_1 + 0x1e4) = *(int *)(param_1 + 0x1e4) + 1;
    }
    break;
  case 2:
    FUN_4a131e38(param_1);
    *(undefined4 *)(param_1 + 0x1e8) = 0x3c;
    *(int *)(param_1 + 0x1e4) = *(int *)(param_1 + 0x1e4) + 1;
    break;
  case 3:
    uVar2 = FUN_4a077b38();
    FUN_4a07cbd0();
    FUN_4a07ea80(uVar2);
    FUN_4a07d410(uVar2);
    FUN_4a098b50(*(undefined4 *)(param_1 + 0x26c),1);
    *(undefined4 *)(param_1 + 0x1e8) = 0x50;
    *(int *)(param_1 + 0x1e4) = *(int *)(param_1 + 0x1e4) + 1;
    break;
  case 4:
    uVar2 = FUN_4a077b38();
    FUN_4a078bb0(uVar2,1);
    *(undefined4 *)(param_1 + 0x1e8) = 100;
    *(int *)(param_1 + 0x1e4) = *(int *)(param_1 + 0x1e4) + 1;
  }
  host_s3eDeviceYield_arm(0);
  return PTR_s_SceneMenu_updateLoadingState_4a12e08c;
}



// Address: 4a12e5f4

void FUN_4a12e5f4(int param_1,int *param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  int *piVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  char cVar21;
  undefined1 uVar22;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 auStack_68 [4];
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  int iStack_2c;
  int *local_28;
  
  local_34 = *(int *)(param_1 + 0x20);
  iVar18 = local_34 + 0x278;
  local_38 = local_34 + 0x128;
  iStack_2c = param_1;
  local_28 = param_2;
  local_3c = FUN_4a0642fc();
  iVar4 = FUN_4a084be4(param_1 + 0xce8);
  puVar2 = PTR_DAT_4a12f3e4;
  bVar20 = *(char *)(param_1 + 0x448) == '\0';
  if (bVar20) {
    iVar19 = 0xb01;
  }
  else {
    iVar19 = 0x9e;
  }
  if (!bVar20) {
    iVar19 = iVar19 + 0xc00;
  }
  iVar5 = FUN_4a0bbd68(*(undefined4 *)PTR_DAT_4a12f3e4,5,2);
  local_58 = FUN_4a0bbe00(*(undefined4 *)puVar2,0x20,2);
  iVar6 = FUN_4a06bf88(iVar18,iVar19,4);
  uVar7 = FUN_4a171fac(iVar6 + 0x53);
  local_30 = FUN_4a171fac(local_58);
  uVar8 = FUN_4a171fac(iVar5 + (iVar6 + 0x53 >> 1));
  local_78 = 0;
  FUN_4a0a02bc(local_38,0xa8,0xa9,0xaa,uVar8,local_30,uVar7,iVar4,0x3f800000,0);
  FUN_4a09f3a4(local_38,local_28);
  FUN_4a0bbd68(*(undefined4 *)puVar2,0x20,2);
  uVar7 = FUN_4a171fac();
  FUN_4a0bbe00(*(undefined4 *)puVar2,0x20,2);
  uVar8 = FUN_4a171fac();
  local_5c = FUN_4a0cb6c4(param_1,0x1000);
  uVar8 = FUN_4a171e1c(uVar8);
  uVar7 = FUN_4a171e1c(uVar7);
  FUN_4a0fa6e8(local_5c,local_38,uVar7,uVar8,1);
  FUN_4a09f3a4(local_38,local_28);
  FUN_4a06b074(iVar18,local_28,iVar19,4,iVar5 + 0x39,local_58,0x11);
  uVar7 = *(undefined4 *)puVar2;
  local_58 = FUN_4a0bc200(uVar7);
  local_5c = FUN_4a0bc1f8(uVar7);
  if (local_58 < local_5c) {
    piVar16 = &local_5c;
  }
  else {
    piVar16 = &local_58;
  }
  FUN_4a0bbd68(*(undefined4 *)puVar2,*piVar16 + -0x21,2);
  uVar7 = FUN_4a171fac();
  uVar8 = *(undefined4 *)puVar2;
  local_58 = FUN_4a0bc200(uVar8);
  local_5c = FUN_4a0bc1f8(uVar8);
  if (local_5c < local_58) {
    piVar16 = &local_5c;
  }
  else {
    piVar16 = &local_58;
  }
  FUN_4a0bbe00(*(undefined4 *)puVar2,*piVar16 + -0x24,2);
  uVar8 = FUN_4a171fac();
  FUN_4a09f664(local_38,0x1a7,uVar7,uVar8,0x3f800000,0x3f800000,0x3f800000,0);
  uVar9 = FUN_4a0cb6c4(param_1,0x2000);
  uVar8 = FUN_4a171e1c(uVar8);
  uVar7 = FUN_4a171e1c(uVar7);
  FUN_4a0fa6e8(uVar9,local_38,uVar7,uVar8,1);
  if (*(char *)(param_1 + 0x448) == '\0') {
    uVar7 = FUN_4a0bbd68(*(undefined4 *)puVar2,0x2d,2);
    FUN_4a0bbe00(*(undefined4 *)puVar2,0xcd,0);
    uVar8 = FUN_4a171fac();
    uVar7 = FUN_4a171fac(uVar7);
    FUN_4a09f664(local_38,0xa6,uVar7,uVar8,iVar4,0x3f800000,0x3f800000,0);
  }
  uVar7 = *(undefined4 *)puVar2;
  local_58 = FUN_4a0bc200(uVar7);
  local_5c = FUN_4a0bc1f8(uVar7);
  if (local_58 < local_5c) {
    piVar16 = &local_5c;
  }
  else {
    piVar16 = &local_58;
  }
  uVar7 = FUN_4a0bbd68(*(undefined4 *)puVar2,*piVar16 + -0x20,2);
  iVar18 = FUN_4a0bc1f8(*(undefined4 *)puVar2);
  if ((iVar18 == 400) || (iVar18 = FUN_4a0bc1f8(*(undefined4 *)puVar2), iVar18 == 0x140)) {
    FUN_4a0bbe00(*(undefined4 *)puVar2,0x82,0);
  }
  else {
    FUN_4a0bbe00(*(undefined4 *)puVar2,0x82,2);
  }
  uVar8 = FUN_4a171fac();
  uVar7 = FUN_4a171fac(uVar7);
  FUN_4a09f664(local_38,0xa7,uVar7,uVar8,iVar4,0x3f800000,0x3f800000,0);
  if (*(char *)(param_1 + 0x448) == '\0') {
    FUN_4a0bbe00(*(undefined4 *)puVar2,0x113,0);
    uVar7 = FUN_4a171fac();
    FUN_4a0bbd68(*(undefined4 *)puVar2,0x30,2);
    uVar8 = FUN_4a171fac();
    FUN_4a09f664(local_38,0x1a5,uVar8,uVar7,iVar4,0x3f800000,0x3f800000,0);
  }
  iVar18 = 0;
  do {
    puVar2 = PTR_DAT_4a12f3e8;
    if ((*(char *)(param_1 + 0x448) == '\0') ||
       (bVar20 = false, *(int *)(PTR_DAT_4a12f3e8 + iVar18 * 4 + 0x20) != 0)) {
      bVar20 = true;
    }
    if (bVar20) {
      uVar7 = FUN_4a171fac(*(undefined4 *)(PTR_DAT_4a12f3e8 + iVar18 * 4 + 0x14));
      local_40 = FUN_4a171fac(*(undefined4 *)(puVar2 + iVar18 * 4 + 0x18));
      iVar5 = FUN_4a171e1c(uVar7);
      uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x520);
      uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x51c);
      iVar19 = 0;
      if (*(int *)(param_1 + 0xe18) != 0) {
        iVar19 = *(int *)(*(int *)(param_1 + 0xe18) + 8);
      }
      if (*(int *)(iVar19 + iVar5 * 0x14 + 8) < 2) {
LAB_4a12eb00:
        bVar20 = true;
      }
      else {
        local_60 = FUN_4a140fd0(uVar7,0,0xb);
        uVar7 = FUN_4a141668(uVar7,0,0xb);
        uVar10 = FUN_4a143c90(uVar8,uVar7,local_60);
        if (iVar5 == 2) {
          uVar10 = uVar10 & 1;
joined_r0x4a12eafc:
          if (uVar10 != 0) goto LAB_4a12eb00;
        }
        else if (iVar5 == 1) {
          uVar10 = uVar10 & 0x18;
          goto joined_r0x4a12eafc;
        }
        bVar20 = false;
      }
      iVar19 = FUN_4a171e1c(local_40);
      if ((iVar19 == -1) ||
         (iVar19 = FUN_4a14440c(*(undefined4 *)(param_1 + 0x28),0,iVar19), 1 < iVar19)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      iVar19 = *(int *)(puVar2 + iVar18 * 4);
      cVar21 = iVar19 == 0xf0;
      if (0xef < iVar19) {
        uVar7 = *(undefined4 *)PTR_DAT_4a12f3e4;
        local_60 = FUN_4a0bc200(uVar7);
        local_64 = FUN_4a0bc1f8(uVar7);
        cVar21 = local_60 == local_64;
        if (local_60 < local_64) {
          piVar16 = &local_64;
        }
        else {
          piVar16 = &local_60;
        }
        iVar19 = *piVar16 - (0x1e0 - iVar19);
      }
      puVar3 = PTR_DAT_4a12f3e4;
      FUN_4a0bbd68(*(undefined4 *)PTR_DAT_4a12f3e4,iVar19,2);
      local_44 = FUN_4a171fac();
      FUN_4a0bbe00(*(undefined4 *)puVar3,*(undefined4 *)(puVar2 + iVar18 * 4 + 4),0);
      local_48 = FUN_4a171fac();
      local_4c = FUN_4a171fac(*(undefined4 *)(puVar2 + iVar18 * 4 + 0xc));
      local_50 = FUN_4a171fac(*(undefined4 *)(puVar2 + iVar18 * 4 + 0x10));
      local_54 = FUN_4a171fac(*(undefined4 *)(puVar2 + iVar18 * 4 + 0x1c));
      uVar7 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x1b0));
      FUN_4a171da0(uVar7,local_54);
      uVar8 = DAT_4a12f3f0;
      uVar7 = DAT_4a12f3ec;
      local_5c = iVar4;
      local_58 = iVar4;
      if (bVar20) {
        local_58 = FUN_4a17211c(iVar4,DAT_4a12f3f4);
        local_5c = FUN_4a17211c(local_5c,DAT_4a12f3f8);
      }
      iVar19 = iVar4;
      if (bVar1) {
        iVar19 = FUN_4a17211c(iVar4,DAT_4a12f3f4);
      }
      uVar22 = local_40 == -0x40800000;
      if (!(bool)uVar22) {
        uVar9 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x1b0));
        FUN_4a171da0(uVar9,local_54);
        if ((bool)uVar22) {
          uVar9 = FUN_4a171a94(local_44,0xc2480000);
          FUN_4a09f664(local_38,0x1a3,uVar9,local_48,iVar19,0x3f800000,0x3f800000,0);
          FUN_4a09f3a4(local_38,local_28);
        }
      }
      if (cVar21 == '\0') {
        uVar7 = 0x3f800000;
      }
      else {
        FUN_4a09f664(local_38,0x1a6,local_44,local_48,iVar4,uVar8,uVar8,0);
        FUN_4a09f3a4(local_38,local_28);
      }
      FUN_4a171e1c(uVar7);
      uVar7 = FUN_4a171fac();
      FUN_4a09f664(local_38,0x1a2,local_44,local_48,local_5c,uVar7,uVar7,0);
      uVar7 = local_4c;
      if (cVar21 != '\0') {
        uVar7 = local_50;
      }
      uVar7 = FUN_4a171e1c(uVar7);
      FUN_4a09f664(local_38,uVar7,local_44,local_48,local_58,0x3f800000,0x3f800000,0);
    }
    iVar18 = iVar18 + 0xb;
  } while (iVar18 < 0x58);
  FUN_4a09f3a4(local_38,local_28);
  iVar4 = DAT_4a12f3fc;
  if (*(int *)(param_1 + 0x1ac) != 0xd) goto LAB_4a12f1a0;
  iVar18 = FUN_4a084be4(param_1 + 0x8d4);
  if (iVar4 < iVar18) {
    iVar4 = FUN_4a084be4(param_1 + 0x8d4);
    uVar8 = 0x272c;
    uVar7 = 0x272d;
  }
  else {
    iVar18 = FUN_4a084be4(param_1 + 0x948);
    if (iVar4 < iVar18) {
      iVar4 = FUN_4a084be4(param_1 + 0x948);
      uVar8 = 0x272f;
      uVar7 = 0x2730;
    }
    else {
      iVar18 = FUN_4a084be4(param_1 + 0xa30);
      uVar8 = 0x2735;
      uVar7 = 0x2736;
      if (iVar4 < iVar18) {
        iVar18 = param_1 + 0xa30;
      }
      else {
        iVar18 = param_1 + 0xaa4;
        iVar19 = FUN_4a084be4(iVar18);
        if (iVar19 <= iVar4) {
          iVar18 = FUN_4a084be4(param_1 + 0xb18);
          if (iVar4 < iVar18) {
            iVar4 = FUN_4a084be4(param_1 + 0xb18);
            uVar8 = 0x2738;
            uVar7 = 0x2739;
          }
          else {
            iVar18 = FUN_4a084be4(param_1 + 0x9bc);
            if (iVar4 < iVar18) {
              iVar4 = FUN_4a084be4(param_1 + 0x9bc);
              uVar8 = 0x2732;
              uVar7 = 0x2733;
            }
            else {
              iVar18 = FUN_4a084be4(param_1 + 0xb8c);
              if (iVar4 < iVar18) {
                iVar4 = FUN_4a084be4(param_1 + 0xb8c);
                uVar8 = 0x273b;
                uVar7 = 0x273c;
              }
              else {
                iVar18 = FUN_4a084be4(param_1 + 0xc00);
                if (iVar18 <= iVar4) goto LAB_4a12f1a0;
                iVar4 = FUN_4a084be4(param_1 + 0xc00);
                uVar8 = 0x273e;
                uVar7 = 0x273f;
              }
            }
          }
          goto LAB_4a12eef4;
        }
      }
      iVar4 = FUN_4a084be4(iVar18);
    }
  }
LAB_4a12eef4:
  if (0 < iVar4) {
    uVar9 = FUN_4a16b8dc(auStack_68,param_1 + 0x1f0);
    FUN_4a0b74b0(*(undefined4 *)(param_1 + 0x3ec),uVar8);
    uVar8 = FUN_4a16588c();
    FUN_4a13935c(uVar8,uVar9);
    FUN_4a16ba04(auStack_68);
    iVar4 = *(int *)(param_1 + 0x1fc);
    iVar18 = 0;
    bVar20 = iVar4 != 0;
    if (bVar20) {
      iVar19 = *(int *)(iVar4 + 8);
    }
    else {
      iVar19 = 0;
    }
    uVar8 = *(undefined4 *)(iVar19 + 8);
    if (bVar20) {
      iVar19 = *(int *)(iVar4 + 8);
      puVar11 = *(undefined4 **)(iVar4 + 8);
    }
    else {
      puVar11 = (undefined4 *)0x0;
    }
    uVar9 = *puVar11;
    if (!bVar20) {
      iVar19 = 0;
    }
    uVar17 = *(undefined4 *)(iVar19 + 4);
    uVar12 = FUN_4a13caa0(*(undefined4 *)(param_1 + 0x20));
    uVar13 = FUN_4a13ca78(*(undefined4 *)(param_1 + 0x20));
    uVar14 = FUN_4a16b8dc(auStack_68,param_1 + 0x204);
    FUN_4a07d204(uVar14,*(undefined4 *)(param_1 + 0x444),*(undefined4 *)(param_1 + 0x3f4),uVar13,
                 uVar12,uVar9,uVar17,uVar8);
    FUN_4a16ba04(auStack_68);
    if (*(int *)(param_1 + 0x210) == 0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      puVar11 = *(undefined4 **)(*(int *)(param_1 + 0x210) + 8);
    }
    local_6c = FUN_4a171e1c(*puVar11);
    if (*(int *)(param_1 + 0x210) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1 + 0x210) + 8);
    }
    local_70 = FUN_4a171e1c(*(undefined4 *)(iVar4 + 4));
    uVar8 = FUN_4a16b8dc(auStack_68,param_1 + 0x1f0);
    FUN_4a0b74b0(*(undefined4 *)(param_1 + 0x3ec),uVar7);
    uVar7 = FUN_4a16588c();
    FUN_4a13935c(uVar7,uVar8);
    FUN_4a16ba04(auStack_68);
    iVar4 = *(int *)(param_1 + 0x1fc);
    bVar20 = iVar4 != 0;
    if (bVar20) {
      iVar19 = *(int *)(iVar4 + 8);
    }
    else {
      iVar19 = 0;
    }
    uVar7 = *(undefined4 *)(iVar19 + 8);
    if (bVar20) {
      iVar19 = *(int *)(iVar4 + 8);
      puVar11 = *(undefined4 **)(iVar4 + 8);
    }
    else {
      puVar11 = (undefined4 *)0x0;
    }
    uVar8 = *puVar11;
    if (!bVar20) {
      iVar19 = 0;
    }
    uVar14 = *(undefined4 *)(iVar19 + 4);
    uVar9 = FUN_4a13caa0(*(undefined4 *)(param_1 + 0x20));
    uVar12 = FUN_4a13ca78(*(undefined4 *)(param_1 + 0x20));
    uVar13 = FUN_4a16b8dc(auStack_68,param_1 + 0x204);
    FUN_4a07d204(uVar13,*(undefined4 *)(param_1 + 0x444),*(undefined4 *)(param_1 + 0x3f4),uVar12,
                 uVar9,uVar8,uVar14,uVar7);
    FUN_4a16ba04(auStack_68);
    if (*(int *)(param_1 + 0x210) == 0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      puVar11 = *(undefined4 **)(*(int *)(param_1 + 0x210) + 8);
    }
    local_74 = FUN_4a171e1c(*puVar11);
    if (*(int *)(param_1 + 0x210) != 0) {
      iVar18 = *(int *)(*(int *)(param_1 + 0x210) + 8);
    }
    local_78 = FUN_4a171e1c(*(undefined4 *)(iVar18 + 4));
    puVar2 = PTR_DAT_4a12f3e4;
    FUN_4a0bbe98(*(undefined4 *)PTR_DAT_4a12f3e4,&local_6c,&local_70);
    FUN_4a0bbe98(*(undefined4 *)puVar2,&local_74,&local_78);
    piVar16 = local_28;
    uVar7 = FUN_4a13db00(*(undefined4 *)(param_1 + 0xd5c));
    uVar8 = FUN_4a13daf8(*(undefined4 *)(param_1 + 0xd5c));
    (**(code **)(*piVar16 + 0x40))
              (piVar16,*(undefined4 *)(param_1 + 0xd5c),0,0,uVar8,uVar7,0,local_6c,local_70,0x12);
    piVar16 = local_28;
    uVar7 = FUN_4a13db00(*(undefined4 *)(param_1 + 0xd5c));
    uVar8 = FUN_4a13daf8(*(undefined4 *)(param_1 + 0xd5c));
    (**(code **)(*piVar16 + 0x40))
              (piVar16,*(undefined4 *)(param_1 + 0xd5c),0,0,uVar8,uVar7,2,local_74,local_78,0x12);
  }
LAB_4a12f1a0:
  uVar7 = FUN_4a084be4(param_1 + 0xc74);
  iVar4 = FUN_4a13caa0(*(undefined4 *)(param_1 + 0x20));
  uVar8 = FUN_4a171fac(iVar4 >> 1);
  iVar4 = FUN_4a13ca78(*(undefined4 *)(param_1 + 0x20));
  uVar9 = FUN_4a171fac(iVar4 >> 1);
  FUN_4a09f664(local_38,0x105,uVar9,uVar8,uVar7,0x3f800000,0x3f800000,0);
  FUN_4a09f3a4(local_38,local_28);
  puVar2 = PTR_DAT_4a12f3e8;
  uVar10 = 0;
  if (*(char *)(param_1 + 0xd6c) != '\0') {
    *(undefined1 *)(param_1 + 0xd6d) = 1;
  }
  do {
    iVar4 = FUN_4a141abc(*(undefined4 *)(param_1 + 0x24),0);
    if (iVar4 == 0) {
      iVar4 = 10;
    }
    else {
      iVar4 = 9;
    }
    if (*(int *)(puVar2 + (iVar4 + uVar10) * 4) != -1) {
      iVar19 = *(int *)(puVar2 + uVar10 * 4 + 0x14);
      FUN_4a140fd0(*(undefined4 *)(param_1 + 0x24),0,iVar19);
      iVar18 = FUN_4a0f089c();
      uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x520);
      uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x51c);
      iVar4 = 0;
      if (*(int *)(param_1 + 0xe18) != 0) {
        iVar4 = *(int *)(*(int *)(param_1 + 0xe18) + 8);
      }
      if (1 < *(int *)(iVar4 + iVar19 * 0x14 + 8)) {
        local_58 = FUN_4a140fd0(uVar7,0,0xb);
        uVar7 = FUN_4a141668(uVar7,0,0xb);
        uVar15 = FUN_4a143c90(uVar8,uVar7,local_58);
        if (iVar19 == 2) {
          uVar15 = uVar15 & 1;
joined_r0x4a12f2f0:
          if (uVar15 != 0) goto LAB_4a12f3cc;
        }
        else if (iVar19 == 1) {
          uVar15 = uVar15 & 0x18;
          goto joined_r0x4a12f2f0;
        }
        if ((iVar18 != 0) && (iVar4 = FUN_4a0652b4(local_3c,iVar18), iVar4 != 0)) {
          iVar18 = *(int *)(puVar2 + uVar10 * 4);
          if (0xef < iVar18) {
            uVar7 = *(undefined4 *)PTR_DAT_4a12f3e4;
            local_58 = FUN_4a0bc200(uVar7);
            local_5c = FUN_4a0bc1f8(uVar7);
            if (local_58 < local_5c) {
              piVar16 = &local_5c;
            }
            else {
              piVar16 = &local_58;
            }
            iVar18 = *piVar16 - (0x1e0 - iVar18);
          }
          puVar3 = PTR_DAT_4a12f3e4;
          iVar18 = FUN_4a0bbd68(*(undefined4 *)PTR_DAT_4a12f3e4,iVar18,2);
          iVar19 = FUN_4a0bbe00(*(undefined4 *)puVar3,*(undefined4 *)(puVar2 + uVar10 * 4 + 4),0);
          iVar5 = FUN_4a13ca78(local_34);
          if (iVar18 < iVar5 >> 1) {
            iVar5 = -0x14;
          }
          else {
            iVar5 = 0x14;
          }
          (**(code **)(*local_28 + 0x34))(local_28,iVar4,iVar5 + iVar18,iVar19 + -0x13,0x12);
        }
      }
    }
LAB_4a12f3cc:
    uVar10 = uVar10 + 0xb;
    if (0x57 < uVar10) {
      return;
    }
  } while( true );
}



// Address: 4a12f400

void FUN_4a12f400(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = *(int *)(param_1 + 0x20);
  iVar7 = iVar6 + 0x128;
  iVar8 = iVar6 + 0x278;
  FUN_4a12b7a8();
  FUN_4a13ca78(iVar6);
  uVar1 = FUN_4a171fac();
  uVar1 = FUN_4a1725c0(uVar1,0x42e00000);
  FUN_4a13caa0(iVar6);
  uVar2 = FUN_4a171fac();
  uVar2 = FUN_4a1725c0(uVar2,0x42500000);
  uVar3 = FUN_4a17295c(uVar1,0xffffffff);
  uVar3 = FUN_4a171a94(uVar3,0x42600000);
  uVar1 = FUN_4a171a94(uVar1,0x42600000);
  uVar4 = FUN_4a0cb6c4(param_1,0x1000);
  FUN_4a09f664(iVar7,0x14a,0x42600000,uVar2,0x3f800000,0x3f800000,0x3f800000,0);
  uVar5 = FUN_4a171e1c(uVar2);
  FUN_4a0fa6e8(uVar4,iVar7,0x38,uVar5,1);
  uVar4 = FUN_4a0cb6c4(param_1,0x4000000);
  FUN_4a09f664(iVar7,0x14a,uVar3,uVar2,0x3f800000,0x3f800000,0x3f800000,0);
  uVar3 = FUN_4a171e1c(uVar3);
  FUN_4a0fa6e8(uVar4,iVar7,uVar3,uVar5,1);
  uVar4 = FUN_4a0cb6c4(param_1,0x2000000);
  FUN_4a09f664(iVar7,0x14a,uVar1,uVar2,0x3f800000,0x3f800000,0x3f800000,0);
  uVar1 = FUN_4a171e1c(uVar1);
  FUN_4a0fa6e8(uVar4,iVar7,uVar1,uVar5,1);
  FUN_4a09f3a4(iVar7,param_2);
  iVar6 = FUN_4a13ca78(iVar6);
  FUN_4a06c45c(iVar8,param_2,1,iVar6 >> 1,0x6e,0x12);
  FUN_4a1725c0(uVar2,0x42000000);
  uVar2 = FUN_4a171e1c();
  FUN_4a06cd2c(iVar8,param_2,0,0xcc5,5,0x50,0x38,uVar2,0x22);
  FUN_4a06cd2c(iVar8,param_2,1,0xcc8,5,0x50,uVar3,uVar2,0x22);
  FUN_4a06cd2c(iVar8,param_2,2,0xcc9,5,0x50,uVar1,uVar2,0x22);
  return;
}



// Address: 4a12f6a8

void FUN_4a12f6a8(int param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar7 = *(int *)(param_1 + 0x20);
  iVar8 = iVar7 + 0x128;
  iVar9 = iVar7 + 0x278;
  FUN_4a12b7a8();
  FUN_4a13ca78(iVar7);
  uVar2 = FUN_4a171fac();
  uVar2 = FUN_4a1725c0(uVar2,0x43340000);
  uVar2 = FUN_4a1725c0(uVar2,0x41200000);
  FUN_4a12de00(param_1,uVar2,0x41800000,0x43340000,0x42340000);
  FUN_4a13caa0(iVar7);
  uVar3 = FUN_4a171fac();
  uVar3 = FUN_4a1725c0(uVar3,0x42500000);
  uVar4 = FUN_4a0cb6c4(param_1,0x1000);
  FUN_4a09f664(iVar8,0x14a,0x42600000,uVar3,0x3f800000,0x3f800000,0x3f800000,0);
  uVar5 = FUN_4a171e1c(uVar3);
  FUN_4a0fa6e8(uVar4,iVar8,0x38,uVar5,1);
  uVar4 = FUN_4a0cb6c4(param_1,0x1000000);
  FUN_4a09f664(iVar8,0x14a,0x43150000,uVar3,0x3f800000,0x3f800000,0x3f800000,0);
  FUN_4a0fa6e8(uVar4,iVar8,0x95,uVar5,1);
  uVar4 = FUN_4a0cb6c4(param_1,0x4000000);
  FUN_4a09f664(iVar8,0x14a,0x43720000,uVar3,0x3f800000,0x3f800000,0x3f800000,0);
  FUN_4a0fa6e8(uVar4,iVar8,0xf2,uVar5,1);
  FUN_4a09f664(iVar8,0x15,0x43170000,0x42e20000,0x3f800000,0x3f800000,0x3f800000,0x41200000);
  lVar1 = (longlong)DAT_4a12fae8 * (longlong)*(int *)(param_1 + 0x1b4);
  iVar6 = (int)((ulonglong)lVar1 >> 0x20);
  iVar7 = iVar6 >> 6;
  iVar6 = iVar7 - (iVar6 >> 0x1f);
  uVar4 = FUN_4a171fac(*(int *)(param_1 + 0x1b4) + iVar6 * -1000,iVar6 * -0x7d,iVar7,(int)lVar1);
  uVar4 = FUN_4a17295c(uVar4,0xffffffff);
  uVar4 = FUN_4a17211c(uVar4,*(undefined4 *)PTR_DAT_4a12faec);
  FUN_4a17211c(uVar4,DAT_4a12faf0);
  uVar4 = FUN_4a002d64();
  FUN_4a09f664(iVar8,0x16,0x42140000,0x42c00000,uVar4,0x3f800000,0x3f800000,0x41200000);
  FUN_4a09f664(iVar8,0x17,0x43700000,0x42b40000,uVar4,0x3f800000,0x3f800000,0x41200000);
  FUN_4a09f664(iVar8,0x18,0x41a80000,0x42c00000,0x3f800000,0x3f800000,0x3f800000,0);
  FUN_4a09f664(iVar8,0x18,0x43850000,0x42b40000,0x3f800000,0xbf800000,0x3f800000,0);
  FUN_4a09f3a4(iVar8,param_2);
  FUN_4a171a94(uVar2,0x42b40000);
  uVar2 = FUN_4a171e1c();
  FUN_4a06b074(iVar9,param_2,0xcbc,6,uVar2,0x26,0x12);
  FUN_4a06c45c(iVar9,param_2,1,uVar2,0x3f,10);
  FUN_4a06cd2c(iVar9,param_2,0,0xcbe,0,0x8c,uVar2,300,0x22);
  FUN_4a1725c0(uVar3,0x42000000);
  uVar2 = FUN_4a171e1c();
  FUN_4a06cd2c(iVar9,param_2,0,0xcc5,5,0x50,0x38,uVar2,0x22);
  FUN_4a06cd2c(iVar9,param_2,1,0xcc6,5,0x50,0x95,uVar2,0x22);
  FUN_4a06cd2c(iVar9,param_2,2,0xcc7,5,0x50,0xf2,uVar2,0x22);
  return;
}



// Address: 4a12faf4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a12faf4(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  iVar9 = *(int *)(param_1 + 0x20);
  iVar2 = iVar9 + 0x278;
  iVar11 = iVar9 + 0x128;
  (**(code **)(*param_2 + 0x34))(param_2,*(undefined4 *)(param_1 + 0x2c4),0);
  iVar3 = FUN_4a13ca78(iVar9);
  iVar4 = FUN_4a13caa0(iVar9);
  FUN_4a098d50(param_1 + 0x284,param_2,(iVar3 + -0xfa >> 1) + -10,iVar4 + -300 >> 1);
  FUN_4a09f664(iVar11,0x211,0x42ac0000,0x42740000);
  uVar5 = FUN_4a0cdbf4(param_1);
  FUN_4a09f664(iVar11,uVar5,0x42380000,0x42740000);
  FUN_4a09f3a4(iVar11,param_2);
  FUN_4a06cd2c(iVar2,param_2,0,0xcc0);
  uVar5 = FUN_4a145948(iVar9);
  FUN_4a06b02c(iVar2,param_2,uVar5,7);
  iVar3 = FUN_4a06c7e8(iVar2);
  iVar4 = FUN_4a06be4c(iVar2,3);
  iVar9 = FUN_4a13caa0(iVar9);
  uVar5 = FUN_4a09f974(iVar11,0x7e);
  FUN_4a171bb8(0x42e60000,uVar5);
  FUN_4a06b074(iVar2,param_2,0xcc1,7);
  FUN_4a06b074(iVar2,param_2,0xcc2,3);
  FUN_4a06c45c(iVar2,param_2,2,0x17e);
  uVar5 = FUN_4a171fac(((iVar9 >> 1) - (iVar3 * iVar4 + 0x28 >> 1)) + 0x26);
  FUN_4a09f664(iVar11,0x7e,0x43bf0000,uVar5);
  FUN_4a09f3a4(iVar11,param_2);
  uVar6 = *(uint *)(param_1 + 0x2d4);
  iVar2 = 0x14;
  iVar3 = 0xd2;
  iVar4 = 0;
  if ((int)(uVar6 + 2) < 1) {
    return;
  }
  do {
    uVar12 = uVar6 & 0xff;
    if ((iVar4 != 0) && (uVar12 = (uVar6 & 0xff00) >> 8, iVar4 != 1)) {
      iVar9 = 0;
      if (*(int *)(param_1 + 0x2d8) != 0) {
        iVar9 = *(int *)(*(int *)(param_1 + 0x2d8) + 8);
      }
      uVar12 = (uint)*(byte *)(iVar9 + iVar4 + -2);
    }
    uVar10 = 0;
    do {
      if ((uVar12 & 1 << (uVar10 & 0xff)) != 0) {
        (**(code **)(**(int **)(param_1 + 0x2c4) + 0x1c))
                  (*(int **)(param_1 + 0x2c4),param_1 + 0x270,0);
        puVar7 = (uint *)0x0;
        if (*(int *)(param_1 + 0x27c) != 0) {
          puVar7 = *(uint **)(*(int *)(param_1 + 0x27c) + 8);
        }
        uVar8 = *puVar7;
        uVar1 = (uVar8 & 0xff00) >> 8;
        if (uVar1 == 0xff) {
          iVar9 = 0x10;
        }
        else {
          iVar9 = -0x10;
        }
        (**(code **)(*param_2 + 0xa0))
                  (param_2,uVar8 & 0xff0000 | (iVar9 + uVar1 & 0xff) << 8 | uVar8 & 0xff);
        (**(code **)(*param_2 + 0x58))(param_2,iVar2,iVar3);
      }
      iVar2 = iVar2 + 4;
      if (0x95 < iVar2) {
        iVar2 = 0x14;
        iVar3 = iVar3 + 3;
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < 8);
    iVar4 = iVar4 + 1;
  } while (iVar4 < (int)(uVar6 + 2));
  return;
}



// Address: 4a130030

void FUN_4a130030(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_28 [20];
  
  uVar1 = FUN_4a16b8dc(auStack_28,param_1 + 0x1f0);
  FUN_4a0b74b0(*(undefined4 *)(param_1 + 0x3ec),param_2);
  uVar2 = FUN_4a16588c();
  FUN_4a13935c(uVar2,uVar1);
  FUN_4a16ba04(auStack_28);
  iVar5 = 0;
  if (*(int *)(param_1 + 0x1fc) == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x1fc) + 8);
  }
  FUN_4a084bdc(param_1 + 0x5a8,*puVar3);
  if (*(int *)(param_1 + 0x1fc) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x1fc) + 8);
  }
  FUN_4a084bdc(param_1 + 0x61c,*(undefined4 *)(iVar4 + 4));
  if (*(int *)(param_1 + 0x1fc) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x1fc) + 8);
  }
  FUN_4a084bdc(param_1 + 0x690,*(undefined4 *)(iVar4 + 8));
  uVar1 = FUN_4a16b8dc(auStack_28,param_1 + 0x1f0);
  FUN_4a0b74b0(*(undefined4 *)(param_1 + 0x3ec),param_3);
  uVar2 = FUN_4a16588c();
  FUN_4a13935c(uVar2,uVar1);
  FUN_4a16ba04(auStack_28);
  if (*(int *)(param_1 + 0x1fc) == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x1fc) + 8);
  }
  FUN_4a084bdc(param_1 + 0x44c,*puVar3);
  if (*(int *)(param_1 + 0x1fc) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x1fc) + 8);
  }
  FUN_4a084bdc(param_1 + 0x4c0,*(undefined4 *)(iVar4 + 4));
  if (*(int *)(param_1 + 0x1fc) != 0) {
    iVar5 = *(int *)(*(int *)(param_1 + 0x1fc) + 8);
  }
  FUN_4a084bdc(param_1 + 0x534,*(undefined4 *)(iVar5 + 8));
  return;
}



// Address: 4a130324

void FUN_4a130324(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = *(int *)(param_1 + 0x20);
  iVar7 = iVar6 + 0x128;
  iVar8 = iVar6 + 0x278;
  FUN_4a12b7a8();
  FUN_4a13ca78(iVar6);
  uVar1 = FUN_4a171fac();
  uVar1 = FUN_4a1725c0(uVar1,0x42e00000);
  FUN_4a13caa0(iVar6);
  uVar2 = FUN_4a171fac();
  uVar2 = FUN_4a1725c0(uVar2,0x42500000);
  uVar3 = FUN_4a17295c(uVar1,0xffffffff);
  uVar3 = FUN_4a171a94(uVar3,0x42600000);
  uVar1 = FUN_4a171a94(uVar1,0x42600000);
  uVar4 = FUN_4a0cb6c4(param_1,0x8000000);
  FUN_4a09f664(iVar7,0x14a,0x42600000,uVar2,0x3f800000,0x3f800000,0x3f800000,0);
  uVar5 = FUN_4a171e1c(uVar2);
  FUN_4a0fa6e8(uVar4,iVar7,0x38,uVar5,1);
  uVar4 = FUN_4a0cb6c4(param_1,0x4000000);
  FUN_4a09f664(iVar7,0x14a,uVar3,uVar2,0x3f800000,0x3f800000,0x3f800000,0);
  uVar3 = FUN_4a171e1c(uVar3);
  FUN_4a0fa6e8(uVar4,iVar7,uVar3,uVar5,1);
  uVar4 = FUN_4a0cb6c4(param_1,0x2000000);
  FUN_4a09f664(iVar7,0x14a,uVar1,uVar2,0x3f800000,0x3f800000,0x3f800000,0);
  uVar1 = FUN_4a171e1c(uVar1);
  FUN_4a0fa6e8(uVar4,iVar7,uVar1,uVar5,1);
  FUN_4a09f3a4(iVar7,param_2);
  iVar6 = FUN_4a13ca78(iVar6);
  FUN_4a06c45c(iVar8,param_2,1,iVar6 >> 1,0x6e,0x12);
  FUN_4a1725c0(uVar2,0x42000000);
  uVar2 = FUN_4a171e1c();
  FUN_4a06cd2c(iVar8,param_2,0,0xcca,5,0x50,0x38,uVar2,0x22);
  FUN_4a06cd2c(iVar8,param_2,1,0xccb,5,0x50,uVar3,uVar2,0x22);
  FUN_4a06cd2c(iVar8,param_2,2,0xccc,5,0x50,uVar1,uVar2,0x22);
  return;
}



// Address: 4a1305d0

/* WARNING: Removing unreachable block (ram,0x4a06f994) */
/* WARNING: Removing unreachable block (ram,0x4a06fa48) */
/* WARNING: Removing unreachable block (ram,0x4a06fa58) */
/* WARNING: Removing unreachable block (ram,0x4a06fa60) */
/* WARNING: Removing unreachable block (ram,0x4a06fa64) */
/* WARNING: Removing unreachable block (ram,0x4a06f9a0) */
/* WARNING: Removing unreachable block (ram,0x4a06fa18) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff0 : 0x4a06fa34 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_4a1305d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int in_r12;
  bool bVar9;
  
  iVar2 = FUN_4a0fe640(*(undefined4 *)(param_1 + 0x20),0,1);
  FUN_4a0deaec(*(undefined4 *)(param_1 + 0x24),0,iVar2);
  iVar8 = 0;
  while (iVar8 = iVar8 + 1, iVar8 < 0xd) {
    if (iVar8 != 0) {
      FUN_4a12b028(param_1);
      if (*(int *)(param_1 + 0xe18) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(param_1 + 0xe18) + 8);
      }
      iVar4 = FUN_4a0fe640(*(undefined4 *)(param_1 + 0x20),0,*(int *)(iVar4 + iVar8 * 0x14 + 8) + -1
                          );
      if (*(int *)(param_1 + 0xe18) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0xe18) + 8);
      }
      iVar5 = *(int *)(iVar5 + iVar8 * 0x14 + 0xc);
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(iVar5 + 8);
      }
      FUN_4a0deaec(*(undefined4 *)(param_1 + 0x24),iVar8,*(undefined4 *)(iVar5 + iVar4 * 4));
    }
  }
  iVar8 = 0;
  do {
    uVar3 = FUN_4a140fd0(*(undefined4 *)(param_1 + 0x24),0,iVar8);
    iVar4 = iVar8 * 4;
    iVar8 = iVar8 + 1;
    *(undefined4 *)(param_1 + iVar2 * 0x34 + iVar4 + 0xd70) = uVar3;
  } while (iVar8 < 0xd);
  FUN_4a0cad1c(*(undefined4 *)(param_1 + 0xd60),*(undefined4 *)(param_1 + 0xd64));
  iVar2 = FUN_4a141abc(*(undefined4 *)(param_1 + 0x24),0);
  *(undefined4 *)(param_1 + 0xd68) = 0;
  if (iVar2 == 0) {
    iVar2 = 0x6f;
  }
  else {
    iVar2 = 8;
  }
  FUN_4a06f95c(*(undefined4 *)(*(int *)(param_1 + 0xd60) + 0x34),iVar2,0x10);
  iVar4 = *(int *)(*(int *)(param_1 + 0xd64) + 0x34);
  uVar7 = *(uint *)(iVar4 + 0x24);
  bVar9 = (uVar7 & 1) != 0;
  iVar8 = 0;
  if (bVar9) {
    in_r12 = *(int *)(iVar4 + 8);
    iVar8 = *(int *)(in_r12 + 8);
  }
  if (!bVar9 || iVar8 <= iVar2) {
    return iVar4;
  }
  *(int *)(iVar4 + 0xc) = (int)(short)iVar2;
  iVar8 = 0;
  if (*(int *)(in_r12 + 0xc) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(in_r12 + 0xc) + 8);
  }
  if (*(int *)(in_r12 + 0x20) != 0) {
    iVar8 = *(int *)(*(int *)(in_r12 + 0x20) + 8);
  }
  iVar5 = *(int *)(iVar4 + 0x10) * (int)*(short *)(iVar5 + iVar2 * 2);
  iVar2 = (int)*(short *)(iVar8 + iVar2 * 2) * *(int *)(iVar4 + 0x10);
  *(int *)(iVar4 + 0x18) = iVar5;
  *(int *)(iVar4 + 0x1c) = iVar2;
  if ((uVar7 & 8) == 0) {
    *(int *)(iVar4 + 0x14) = iVar5;
  }
  else {
    *(int *)(iVar4 + 0x14) = iVar2;
  }
  *(uint *)(iVar4 + 0x24) = uVar7 & 8 | 3;
  piVar6 = *(int **)(iVar4 + 0x28);
  if (piVar6 != (int *)0x0) {
    uVar3 = *(undefined4 *)(iVar4 + 0x14);
    iVar8 = (**(code **)(*piVar6 + 0x30))(piVar6);
    iVar2 = 0;
    if (piVar6[2] != 0) {
      iVar2 = *(int *)(piVar6[2] + 0x10);
    }
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      iVar4 = *(int *)(*(int *)(piVar6[2] + 0x14) + iVar2 * 4);
      if ((*(uint *)(*(int *)(iVar4 + 0x2c) + 0x30) & 0x60000000) != 0) {
        uVar1 = FUN_4a1395b4(iVar4,uVar3);
        (**(code **)(*piVar6 + 0x1c))(piVar6,*(undefined4 *)(iVar4 + 0x30),uVar1);
      }
    }
    (**(code **)(*piVar6 + 0x24))(piVar6,uVar3);
    return iVar8;
  }
  return iVar4;
}



// Address: 4a130714

void FUN_4a130714(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  
  iVar1 = FUN_4a130b7c();
  FUN_4a084dd8(param_1 + 0x8d4,param_2);
  FUN_4a084dd8(param_1 + 0x948,param_2);
  FUN_4a084dd8(param_1 + 0x9bc,param_2);
  FUN_4a084dd8(param_1 + 0xa30,param_2);
  FUN_4a084dd8(param_1 + 0xaa4,param_2);
  FUN_4a084dd8(param_1 + 0xb18,param_2);
  FUN_4a084dd8(param_1 + 0xb8c,param_2);
  FUN_4a084dd8(param_1 + 0xc00,param_2);
  FUN_4a084dd8(param_1 + 0xc74,param_2);
  FUN_4a084dd8(param_1 + 0xce8,param_2);
  if (iVar1 == 0) {
LAB_4a130804:
    bVar10 = false;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x1ac);
    bVar10 = iVar2 == 0xd;
    if (bVar10) {
      iVar2 = *(int *)(param_1 + 0x1b0);
    }
    if (!bVar10 || iVar2 != 8) goto LAB_4a130804;
    bVar10 = true;
  }
  if (iVar1 == 0) {
LAB_4a130828:
    bVar11 = false;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x1ac);
    bVar11 = iVar2 == 0xd;
    if (bVar11) {
      iVar2 = *(int *)(param_1 + 0x1b0);
    }
    if (!bVar11 || iVar2 != 7) goto LAB_4a130828;
    bVar11 = true;
  }
  if (iVar1 == 0) {
LAB_4a13084c:
    bVar12 = false;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x1ac);
    bVar12 = iVar2 == 0xd;
    if (bVar12) {
      iVar2 = *(int *)(param_1 + 0x1b0);
    }
    if (!bVar12 || iVar2 != 4) goto LAB_4a13084c;
    bVar12 = true;
  }
  if (iVar1 == 0) {
LAB_4a130870:
    bVar13 = false;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x1ac);
    bVar13 = iVar2 == 0xd;
    if (bVar13) {
      iVar2 = *(int *)(param_1 + 0x1b0);
    }
    if (!bVar13 || iVar2 != 5) goto LAB_4a130870;
    bVar13 = true;
  }
  if (iVar1 == 0) {
LAB_4a130894:
    bVar14 = false;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x1ac);
    bVar14 = iVar2 == 0xd;
    if (bVar14) {
      iVar2 = *(int *)(param_1 + 0x1b0);
    }
    if (!bVar14 || iVar2 != 3) goto LAB_4a130894;
    bVar14 = true;
  }
  if (iVar1 == 0) {
LAB_4a1308b8:
    bVar15 = false;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x1ac);
    bVar15 = iVar2 == 0xd;
    if (bVar15) {
      iVar2 = *(int *)(param_1 + 0x1b0);
    }
    if (!bVar15 || iVar2 != 6) goto LAB_4a1308b8;
    bVar15 = true;
  }
  if (iVar1 == 0) {
LAB_4a1308dc:
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x1ac);
    bVar16 = iVar2 == 0xd;
    if (bVar16) {
      iVar2 = *(int *)(param_1 + 0x1b0);
    }
    if (!bVar16 || iVar2 != 1) goto LAB_4a1308dc;
  }
  if (iVar1 == 0) {
LAB_4a130904:
    bVar16 = false;
  }
  else {
    iVar9 = *(int *)(param_1 + 0x1ac);
    bVar16 = iVar9 == 0xd;
    if (bVar16) {
      iVar9 = *(int *)(param_1 + 0x1b0);
    }
    if (!bVar16 || iVar9 != 2) goto LAB_4a130904;
    bVar16 = true;
  }
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x1ac);
    bVar17 = iVar1 == 0xd;
    if (bVar17) {
      iVar1 = *(int *)(param_1 + 0x1b0);
    }
    if (bVar17 && iVar1 == 9) {
      bVar17 = true;
      goto LAB_4a130930;
    }
  }
  bVar17 = false;
LAB_4a130930:
  uVar3 = DAT_4a130b70;
  uVar4 = DAT_4a130b74;
  if (bVar10) {
    uVar3 = DAT_4a130b68;
    uVar4 = DAT_4a130b6c;
  }
  uVar3 = FUN_4a170798(uVar3,uVar4);
  FUN_4a084bdc(param_1 + 0x8d4,uVar3);
  uVar3 = DAT_4a130b70;
  uVar4 = DAT_4a130b74;
  if (bVar11) {
    uVar3 = DAT_4a130b68;
    uVar4 = DAT_4a130b6c;
  }
  uVar3 = FUN_4a170798(uVar3,uVar4);
  FUN_4a084bdc(param_1 + 0x948,uVar3);
  uVar3 = DAT_4a130b70;
  uVar4 = DAT_4a130b74;
  if (bVar15) {
    uVar3 = DAT_4a130b68;
    uVar4 = DAT_4a130b6c;
  }
  uVar3 = FUN_4a170798(uVar3,uVar4);
  FUN_4a084bdc(param_1 + 0x9bc,uVar3);
  uVar3 = DAT_4a130b70;
  uVar4 = DAT_4a130b74;
  if (bVar12 || bVar13) {
    uVar3 = DAT_4a130b68;
    uVar4 = DAT_4a130b6c;
  }
  uVar3 = FUN_4a170798(uVar3,uVar4);
  FUN_4a084bdc(param_1 + 0xa30,uVar3);
  uVar3 = DAT_4a130b70;
  uVar4 = DAT_4a130b74;
  if (bVar13) {
    uVar3 = DAT_4a130b68;
    uVar4 = DAT_4a130b6c;
  }
  uVar3 = FUN_4a170798(uVar3,uVar4);
  FUN_4a084bdc(param_1 + 0xaa4,uVar3);
  uVar3 = DAT_4a130b70;
  uVar4 = DAT_4a130b74;
  if (bVar14) {
    uVar3 = DAT_4a130b68;
    uVar4 = DAT_4a130b6c;
  }
  uVar3 = FUN_4a170798(uVar3,uVar4);
  FUN_4a084bdc(param_1 + 0xb18,uVar3);
  uVar3 = DAT_4a130b70;
  uVar4 = DAT_4a130b74;
  if (iVar2 != 0) {
    uVar3 = DAT_4a130b68;
    uVar4 = DAT_4a130b6c;
  }
  uVar3 = FUN_4a170798(uVar3,uVar4);
  FUN_4a084bdc(param_1 + 0xb8c,uVar3);
  uVar3 = DAT_4a130b70;
  uVar4 = DAT_4a130b74;
  if (bVar16) {
    uVar3 = DAT_4a130b68;
    uVar4 = DAT_4a130b6c;
  }
  uVar3 = FUN_4a170798(uVar3,uVar4);
  FUN_4a084bdc(param_1 + 0xc00,uVar3);
  uVar3 = DAT_4a130b70;
  uVar4 = DAT_4a130b74;
  if (bVar17) {
    uVar3 = DAT_4a130b68;
    uVar4 = DAT_4a130b6c;
  }
  uVar3 = FUN_4a170798(uVar3,uVar4);
  FUN_4a084bdc(param_1 + 0xc74,uVar3);
  uVar3 = 0;
  if ((*(int *)(param_1 + 0x1ac) == 0xd) && (uVar3 = DAT_4a130b78, !bVar17)) {
    uVar3 = 0x3f800000;
  }
  FUN_4a084bdc(param_1 + 0xce8,uVar3);
  FUN_4a0b74b0(*(undefined4 *)(param_1 + 0x3ec),0x272b);
  uVar3 = FUN_4a16588c();
  FUN_4a0b74b0(*(undefined4 *)(param_1 + 0x3ec),0x272e);
  uVar4 = FUN_4a16588c();
  FUN_4a0b74b0(*(undefined4 *)(param_1 + 0x3ec),0x2731);
  uVar5 = FUN_4a16588c();
  FUN_4a0b74b0(*(undefined4 *)(param_1 + 0x3ec),0x2734);
  uVar6 = FUN_4a16588c();
  FUN_4a0b74b0(*(undefined4 *)(param_1 + 0x3ec),0x2737);
  uVar7 = FUN_4a16588c();
  FUN_4a0b74b0(*(undefined4 *)(param_1 + 0x3ec),0x273a);
  uVar8 = FUN_4a16588c();
  FUN_4a0b74b0(*(undefined4 *)(param_1 + 0x3ec),0x273d);
  iVar1 = FUN_4a16588c();
  FUN_4a0b4608(uVar3,0);
  FUN_4a0b4608(uVar4,0);
  FUN_4a0b4608(uVar6,0);
  FUN_4a0b4608(uVar7,0);
  FUN_4a0b4608(uVar5,0);
  FUN_4a0b4608(uVar8,0);
  *(undefined1 *)(iVar1 + 0xd0) = 0;
  return;
}



// Address: 4a130b7c

undefined4 FUN_4a130b7c(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 in_CY;
  undefined1 uVar7;
  
  uVar1 = DAT_4a130c28;
  uVar2 = FUN_4a084b58();
  uVar3 = FUN_4a084be4(param_1 + 0x44c);
  uVar4 = FUN_4a084b58();
  uVar5 = FUN_4a084be4(param_1 + 0x5a8);
  uVar6 = FUN_4a1725c0(uVar4,uVar5);
  FUN_4a1720a0(uVar6 ^ 0x80000000,uVar6);
  if ((bool)in_CY) {
    uVar6 = uVar6 ^ 0x80000000;
  }
  uVar7 = uVar1 <= uVar6;
  if ((int)uVar6 < (int)uVar1) {
    uVar6 = FUN_4a1725c0(uVar2,uVar3);
    FUN_4a1720a0(uVar6 ^ 0x80000000,uVar6);
    if ((bool)uVar7) {
      uVar6 = uVar6 ^ 0x80000000;
    }
    if ((int)uVar6 < (int)uVar1) {
      return 1;
    }
  }
  return 0;
}



// Address: 4a130c2c

/* WARNING: Removing unreachable block (ram,0x4a0cea18) */
/* WARNING: Removing unreachable block (ram,0x4a0cebd0) */
/* WARNING: Removing unreachable block (ram,0x4a0cebd8) */
/* WARNING: Removing unreachable block (ram,0x4a0cebdc) */
/* WARNING: Removing unreachable block (ram,0x4a0cebe0) */
/* WARNING: Removing unreachable block (ram,0x4a0cebe8) */
/* WARNING: Removing unreachable block (ram,0x4a0cebf0) */
/* WARNING: Removing unreachable block (ram,0x4a0cebf4) */
/* WARNING: Removing unreachable block (ram,0x4a0cebf8) */
/* WARNING: Removing unreachable block (ram,0x4a0cebfc) */
/* WARNING: Removing unreachable block (ram,0x4a0cec10) */
/* WARNING: Removing unreachable block (ram,0x4a0cec24) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a130c2c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_34 [20];
  
  iVar4 = FUN_4a0cb850(param_2,param_3,2);
  if (iVar4 != 0) {
    iVar4 = FUN_4a13ef1c(param_1);
    if (iVar4 == 8) {
      if (*(int *)(*(int *)(param_1 + 0x20) + 0x49c) < 0) {
        uVar5 = FUN_4a06c6c8(*(int *)(param_1 + 0x20) + 0x278);
        FUN_4a0fcc0c(*(undefined4 *)(param_1 + 0x20),uVar5);
        FUN_4a0fdf10(*(undefined4 *)(param_1 + 0x20));
      }
      FUN_4a0ce9dc(param_1,0xffffffff);
      host_s3eConfigGetInt_arm
                (PTR_s_EnableS3DDisclaimer_4a130d90 + -4,PTR_s_EnableS3DDisclaimer_4a130d90,
                 &stack0xffffffe8);
      if (param_4 == 1) {
        FUN_4a12be24(param_1,0x2a);
        return;
      }
      FUN_4a12be24(param_1,1);
      return;
    }
    iVar4 = FUN_4a13ef1c(param_1);
    if (iVar4 == 9) {
      puVar3 = (undefined4 *)FUN_4a0c6bc0(auStack_34);
      puVar1 = PTR_PTR_4a0cec8c;
      puVar3[2] = 0;
      *puVar3 = puVar1;
      puVar3[3] = 0;
                    /* WARNING: Could not recover jumptable at 0x4a0cea14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR_caseD_0_4a0cea20)();
      return;
    }
    *(undefined4 *)(param_1 + 0x1bc) = 5;
    iVar4 = FUN_4a0fb654(*(undefined4 *)(param_1 + 0x20));
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x20);
      *(undefined4 *)(iVar4 + 0x44c) = 0xffffff;
      *(undefined4 *)(iVar4 + 0x450) = 0xffffffff;
      *(undefined1 *)(iVar4 + 0x448) = 1;
      *(undefined1 *)(iVar4 + 0x458) = 0;
      return;
    }
    return;
  }
  iVar4 = FUN_4a0cb850(param_2,param_3,0x80000000);
  if (iVar4 == 0) {
    return;
  }
  iVar4 = 0;
  if (*(int *)(param_3 + 0xc) != 0) {
    iVar4 = *(int *)(*(int *)(param_3 + 0xc) + 8);
  }
  iVar6 = *(int *)(iVar4 + 8);
  iVar4 = FUN_4a06c6c8(*(int *)(param_1 + 0x20) + 0x278);
  if (iVar4 == iVar6) {
                    /* WARNING: Could not recover jumptable at 0x4a130d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_4a0fcc0c(*(undefined4 *)(param_1 + 0x20),iVar6);
  FUN_4a0fdf10(*(undefined4 *)(param_1 + 0x20));
  FUN_4a0fcfe8(*(undefined4 *)(param_1 + 0x20));
  FUN_4a0941ec();
  FUN_4a08db2c();
  piVar2 = (int *)FUN_4a135b44();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4a094ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  (**(code **)(*piVar2 + 0xc))();
  iVar4 = (**(code **)(*piVar2 + 8))(piVar2);
  if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a094ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a094ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 4))(piVar2);
  return;
}



// Address: 4a131aa0

void FUN_4a131aa0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_28 [20];
  
  uVar1 = FUN_4a16b8dc(auStack_28,param_1 + 0x1f0);
  FUN_4a0b74b0(*(undefined4 *)(param_1 + 0x3ec),param_2);
  uVar2 = FUN_4a16588c();
  FUN_4a13935c(uVar2,uVar1);
  FUN_4a16ba04(auStack_28);
  if (*(int *)(param_1 + 0x1fc) == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x1fc) + 8);
  }
  FUN_4a084bdc(param_1 + 0x704,*puVar3);
  if (*(int *)(param_1 + 0x1fc) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x1fc) + 8);
  }
  FUN_4a084bdc(param_1 + 0x778,*(undefined4 *)(iVar4 + 4));
  if (*(int *)(param_1 + 0x1fc) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x1fc) + 8);
  }
  FUN_4a084bdc(param_1 + 0x7ec,*(undefined4 *)(iVar4 + 8));
  uVar1 = FUN_4a16b8dc(auStack_28,param_1 + 0x1f0);
  FUN_4a0b74b0(*(undefined4 *)(param_1 + 0x3ec),param_2);
  uVar2 = FUN_4a16588c();
  FUN_4a139388(uVar2,uVar1);
  FUN_4a16ba04(auStack_28);
  if (*(int *)(param_1 + 0x1fc) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x1fc) + 8);
  }
  uVar1 = FUN_4a002bb8(*(undefined4 *)(iVar4 + 0xc));
  uVar1 = FUN_4a17211c(uVar1,0x43b40000);
  uVar5 = FUN_4a171bb8(uVar1,*(undefined4 *)PTR_DAT_4a131c30);
  if (uVar5 < 0xc3340000) {
    if (0x4333ffff < (int)uVar5) {
      uVar5 = FUN_4a1725c0(uVar5,0x43b40000);
    }
  }
  else {
    uVar5 = FUN_4a171a94(uVar5,0x43b40000);
  }
  uVar1 = FUN_4a084be4(param_1 + 0x860);
  FUN_4a171a94(uVar1,*(undefined4 *)(param_1 + 0xe20));
  uVar1 = FUN_4a0d4990();
  FUN_4a084b60(param_1 + 0x860,uVar1);
  *(undefined4 *)(param_1 + 0xe20) = 0;
  *(undefined4 *)(param_1 + 0xe24) = 0;
  *(undefined4 *)(param_1 + 0xe28) = 0;
  FUN_4a084bdc(param_1 + 0x860,uVar5);
  return;
}



// Address: 4a131c34

char * FUN_4a131c34(int param_1)

{
  undefined4 uVar1;
  
  FUN_4a0ff3fc(s_SceneMenu__ending_4a131c6c);
  uVar1 = FUN_4a077b38();
  FUN_4a07ce40(uVar1,0);
  FUN_4a0fcc1c(*(undefined4 *)(param_1 + 0x20),4,0xffffffff);
  return s_SceneMenu__ended_4a131c80;
}



// Address: 4a131c94

void FUN_4a131c94(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x44) != 0) {
    *(undefined1 *)(param_1 + 0x218) = *(undefined1 *)(*(int *)(param_1 + 0x20) + 0x48);
    iVar2 = FUN_4a04e214();
    if ((iVar2 == 0) || (uVar1 = 0, *(char *)(*(int *)(param_1 + 0x20) + 0x48) != '\0')) {
      uVar1 = 1;
    }
    *(undefined1 *)(param_1 + 0x219) = uVar1;
    return;
  }
  return;
}



// Address: 4a131ce4

char * FUN_4a131ce4(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  int local_18;
  
  local_18 = param_4;
  FUN_4a0ff3fc(s_SceneMenu__starting_4a131df0);
  FUN_4a037774(0);
  FUN_4a0cefc0(param_1);
  FUN_4a0fc21c(*(undefined4 *)(param_1 + 0x20));
  puVar1 = PTR_DAT_4a131e04;
  if (*(int *)PTR_DAT_4a131e04 == 0) {
    FUN_4a08db2c();
    iVar2 = FUN_4a08df78();
    if (iVar2 != 0) {
      FUN_4a12c988(param_1);
    }
  }
  if (param_2 == -1) {
    param_2 = 5;
  }
  *(int *)(param_1 + 0x1c8) = param_2;
  if (*(int *)puVar1 == 0) {
    FUN_4a08db2c();
    iVar2 = FUN_4a08df78();
    if ((iVar2 != 0) && (iVar2 = FUN_4a0fd1a0(*(undefined4 *)(param_1 + 0x20)), iVar2 != 0)) {
      FUN_4a0ce9dc(param_1,8);
      goto code_r0x4a0ff3fc;
    }
  }
  host_s3eConfigGetInt_arm(&DAT_4a131e1c,s_EnableS3DDisclaimer_4a131e08,&local_18);
  if ((local_18 == 1) && (*PTR_DAT_4a131e20 != '\0')) {
    *PTR_DAT_4a131e20 = 0;
    FUN_4a12be24(param_1,0x2a);
  }
  else {
    FUN_4a12be24(param_1,1);
  }
code_r0x4a0ff3fc:
  switchD_4a110030::default(*(undefined4 *)(param_1 + 0x20),2);
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  return s_SceneMenu__started_4a131e24;
}



// Address: 4a131e38

/* WARNING: Removing unreachable block (ram,0x4a06f994) */
/* WARNING: Removing unreachable block (ram,0x4a06f998) */
/* WARNING: Removing unreachable block (ram,0x4a06f9a0) */
/* WARNING: Removing unreachable block (ram,0x4a06fa48) */
/* WARNING: Removing unreachable block (ram,0x4a06fa58) */
/* WARNING: Removing unreachable block (ram,0x4a06fa60) */
/* WARNING: Removing unreachable block (ram,0x4a06fa64) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff0 : 0x4a06fa34 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_4a131e38(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int in_r12;
  bool bVar9;
  
  thunk_FUN_4a161570(0xe8);
  piVar1 = (int *)FUN_4a0b50dc();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  *(int **)(param_1 + 0x25c) = piVar1;
  thunk_FUN_4a161570(0x30);
  uVar2 = FUN_4a0a8358();
  FUN_4a0a8340(uVar2,0);
  FUN_4a0a8348(uVar2,1);
  FUN_4a0b5004(piVar1,uVar2);
  thunk_FUN_4a161570(0x13c);
  piVar3 = (int *)FUN_4a0b52ec();
  *(int **)(param_1 + 0x264) = piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
  }
  FUN_4a0b4c10(piVar1,*(undefined4 *)(param_1 + 0x264));
  FUN_4a0b5070(piVar1,*(undefined4 *)(param_1 + 0x264));
  FUN_4a13ca78(*(undefined4 *)(param_1 + 0x20));
  uVar2 = FUN_4a171fac();
  FUN_4a13caa0(*(undefined4 *)(param_1 + 0x20));
  uVar4 = FUN_4a171fac();
  uVar2 = FUN_4a171bb8(uVar4,uVar2);
  FUN_4a0b52c4(*(undefined4 *)(param_1 + 0x264),0x42a00000,uVar2,*(undefined4 *)PTR_DAT_4a132034,
               *(undefined4 *)PTR_DAT_4a132030);
  thunk_FUN_4a161570(0x48);
  piVar3 = (int *)FUN_4a0b8a1c();
  *(int **)(param_1 + 0x260) = piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
  }
  FUN_4a0b7cb0(*(undefined4 *)(param_1 + 0x260),0x42b40000,0,0,0x3f800000);
  FUN_4a0af058(*(undefined4 *)(param_1 + 0x264),*(undefined4 *)(param_1 + 0x260));
  piVar3 = (int *)FUN_4a0982e0(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x60),0x124);
  uVar2 = FUN_4a077b38();
  FUN_4a07c63c(uVar2,piVar3,0xffffffff);
  FUN_4a077aa8(piVar3);
  FUN_4a0b4c10(piVar1,piVar3);
  if ((piVar3 != (int *)0x0) && (iVar5 = (**(code **)(*piVar3 + 8))(piVar3), iVar5 != 0)) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  uVar2 = thunk_FUN_4a161570(0x2c);
  piVar1 = (int *)FUN_4a06fa68(uVar2,*(int *)(param_1 + 0x20) + 0x1f8);
  *(int **)(param_1 + 0x268) = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))();
  }
  FUN_4a06f8f0(*(undefined4 *)(param_1 + 0x268),piVar3);
  iVar6 = *(int *)(param_1 + 0x268);
  uVar8 = *(uint *)(iVar6 + 0x24);
  bVar9 = (uVar8 & 1) != 0;
  iVar5 = 0;
  if (bVar9) {
    in_r12 = *(int *)(iVar6 + 8);
    iVar5 = *(int *)(in_r12 + 8);
  }
  if (!bVar9 || iVar5 < 0x10d) {
    return iVar6;
  }
  *(undefined4 *)(iVar6 + 0xc) = 0x10c;
  iVar5 = 0;
  if (*(int *)(in_r12 + 0xc) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(*(int *)(in_r12 + 0xc) + 8);
  }
  if (*(int *)(in_r12 + 0x20) != 0) {
    iVar5 = *(int *)(*(int *)(in_r12 + 0x20) + 8);
  }
  iVar7 = *(int *)(iVar6 + 0x10) * (int)*(short *)(iVar7 + 0x218);
  iVar5 = (int)*(short *)(iVar5 + 0x218) * *(int *)(iVar6 + 0x10);
  *(int *)(iVar6 + 0x18) = iVar7;
  *(int *)(iVar6 + 0x1c) = iVar5;
  if ((uVar8 & 8) == 0) {
    *(int *)(iVar6 + 0x14) = iVar7;
  }
  else {
    *(int *)(iVar6 + 0x14) = iVar5;
  }
  *(uint *)(iVar6 + 0x24) = uVar8 & 8 | 7;
  piVar1 = *(int **)(iVar6 + 0x28);
  if (piVar1 != (int *)0x0) {
    uVar2 = *(undefined4 *)(iVar6 + 0x14);
    iVar6 = (**(code **)(*piVar1 + 0x30))(piVar1);
    iVar5 = 0;
    if (piVar1[2] != 0) {
      iVar5 = *(int *)(piVar1[2] + 0x10);
    }
    while (iVar5 = iVar5 + -1, -1 < iVar5) {
      iVar7 = *(int *)(*(int *)(piVar1[2] + 0x14) + iVar5 * 4);
      if ((*(uint *)(*(int *)(iVar7 + 0x2c) + 0x30) & 0x60000000) != 0) {
        uVar4 = FUN_4a1395b4(iVar7,uVar2);
        (**(code **)(*piVar1 + 0x1c))(piVar1,*(undefined4 *)(iVar7 + 0x30),uVar4);
      }
    }
    (**(code **)(*piVar1 + 0x24))(piVar1,uVar2);
    return iVar6;
  }
  return iVar6;
}



// Address: 4a132038

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a132038(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined1 uVar14;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  puVar2 = PTR_DAT_4a1327bc;
  puVar1 = PTR_DAT_4a1327b8;
  *(undefined4 *)PTR_DAT_4a1327b8 = 0x41000000;
  uVar6 = DAT_4a1327c0;
  if (0xf < *(int *)puVar2) {
    FUN_4a041aa0(0xf,0x41000000,DAT_4a1327c0);
  }
  FUN_4a0cf090(param_1);
  iVar13 = *(int *)(param_1 + 0x20);
  iVar11 = FUN_4a13ef1c(param_1);
  puVar3 = PTR_DAT_4a1327c4;
  puVar2 = PTR_DAT_4a1327bc;
  if (iVar11 != -1) {
    if (iVar11 == 8) {
      (**(code **)(*param_2 + 0xa0))(param_2,0);
      iVar11 = FUN_4a13caa0(*(undefined4 *)(param_1 + 0x20));
      param_4 = FUN_4a13ca78(*(undefined4 *)(param_1 + 0x20));
      local_28 = iVar11;
      (**(code **)(*param_2 + 0x58))(param_2,0);
      FUN_4a041910(1);
      FUN_4a0bbb28(*(undefined4 *)puVar3);
      FUN_4a08b5ec(*(undefined4 *)(param_1 + 0x224),param_2);
      FUN_4a0bbcb4(*(undefined4 *)puVar3);
      FUN_4a041910(0);
    }
    else if (iVar11 == 9) {
      piVar12 = (int *)FUN_4a0fc26c(*(undefined4 *)(param_1 + 0x20));
      FUN_4a0a83a4(piVar12,param_2);
      FUN_4a0a8b14(piVar12,*(undefined4 *)(param_1 + 0x25c));
      (**(code **)(*piVar12 + 0x30))(piVar12);
      FUN_4a12a458(param_1,param_2);
      FUN_4a041910(1);
      FUN_4a0bbb28(*(undefined4 *)puVar3);
      FUN_4a08b5ec(*(undefined4 *)(param_1 + 0x224),param_2);
      FUN_4a0bbcb4(*(undefined4 *)puVar3);
      FUN_4a041910(0);
    }
    else {
      piVar12 = (int *)FUN_4a0fc26c(*(undefined4 *)(param_1 + 0x20));
      FUN_4a0a83a4(piVar12,param_2);
      FUN_4a0a8b14(piVar12,*(undefined4 *)(param_1 + 0x25c));
      (**(code **)(*piVar12 + 0x30))(piVar12);
      FUN_4a12a458(param_1,param_2);
      FUN_4a0bbb28(*(undefined4 *)puVar3);
      FUN_4a0cd6d4(param_1,param_2);
      FUN_4a0bbcb4(*(undefined4 *)puVar3);
    }
    uStack_20 = param_4;
    iVar11 = FUN_4a084be4(param_1 + 0x2e8);
    if (DAT_4a12a454 < iVar11) {
      uVar14 = true;
      if (*(int *)(param_1 + 0x2e0) != 0) {
        FUN_4a1720a0(iVar11,0x3f800000);
        if ((bool)uVar14) {
          iVar11 = 0x3f800000;
        }
        uVar6 = FUN_4a1725c0(0x3f800000,iVar11);
        FUN_4a172458(uVar6,0);
        if ((bool)uVar14) {
          uVar6 = 0;
        }
        iVar13 = FUN_4a13caa0(*(undefined4 *)(param_1 + 0x20));
        iVar7 = FUN_4a13db00(*(undefined4 *)(param_1 + 0x2e0));
        iVar8 = FUN_4a13caa0(*(undefined4 *)(param_1 + 0x20));
        iVar9 = FUN_4a13db00(*(undefined4 *)(param_1 + 0x2e0));
        uVar10 = FUN_4a171fac(iVar9 + iVar8);
        uVar6 = FUN_4a17211c(uVar10,uVar6);
        uVar10 = FUN_4a171fac(iVar13 - iVar7);
        uVar10 = FUN_4a17211c(uVar10,iVar11);
        FUN_4a171a94(uVar10,uVar6);
        uVar6 = FUN_4a171e1c();
        uStack_20 = 9;
        (**(code **)(*param_2 + 0x34))(param_2,*(undefined4 *)(param_1 + 0x2e0),0,uVar6);
        return;
      }
      return;
    }
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x1ac)) {
  case 1:
    iVar11 = 0;
    if (*(int *)PTR_DAT_4a1327c8 != 0) {
      iVar11 = *(int *)PTR_DAT_4a1327cc;
    }
    if (*(int *)PTR_DAT_4a1327c8 == 0 || iVar11 == 0) {
      thunk_FUN_4a14fe28(0x4100);
    }
    FUN_4a041910(1);
    FUN_4a0cbf9c(param_1,param_2);
    FUN_4a041910(0);
    break;
  case 3:
    piVar12 = (int *)FUN_4a0fc26c(*(undefined4 *)(param_1 + 0x20));
    FUN_4a0a83a4(piVar12,param_2);
    FUN_4a0a8b14(piVar12,*(undefined4 *)(param_1 + 0x25c));
    (**(code **)(*piVar12 + 0x30))(piVar12);
    FUN_4a12a458(param_1,param_2);
    FUN_4a08b5ec(*(undefined4 *)(param_1 + 0x224),param_2);
    break;
  case 4:
    FUN_4a12b678(param_1,param_2);
    break;
  case 5:
    FUN_4a129474(param_1,param_2);
    FUN_4a12a35c(param_1,param_2);
    break;
  case 6:
    piVar12 = (int *)FUN_4a0fc26c(*(undefined4 *)(param_1 + 0x20));
    FUN_4a0a83a4(piVar12,param_2);
    FUN_4a0a8b14(piVar12,*(undefined4 *)(param_1 + 0x25c));
    (**(code **)(*piVar12 + 0x30))(piVar12);
    FUN_4a12a458(param_1,param_2);
    FUN_4a041910(1);
    FUN_4a0cd7cc(param_1,param_2);
    FUN_4a12a35c(param_1,param_2);
    FUN_4a041910(0);
    break;
  case 9:
  case 10:
  case 0x16:
    FUN_4a12d444(param_1,param_2);
    FUN_4a041910(1);
    FUN_4a12a35c(param_1,param_2);
    FUN_4a041910(0);
    break;
  case 0xb:
    FUN_4a12d444(param_1,param_2);
    FUN_4a041910(1);
    FUN_4a0ce0a8(param_1,param_2);
    FUN_4a041910(0);
    break;
  case 0xc:
  case 0x12:
  case 0x23:
  case 0x25:
  case 0x26:
    uVar10 = 0x41700000;
    uVar5 = 1;
    *(undefined4 *)puVar1 = 0x41700000;
LAB_4a13261c:
    FUN_4a041aa0(uVar5,uVar10,uVar6);
    goto LAB_4a132620;
  case 0xd:
    goto switchD_4a132204_caseD_d;
  case 0xe:
  case 0xf:
  case 0x11:
    goto switchD_4a132204_caseD_e;
  case 0x10:
    *(undefined4 *)puVar1 = 0x41f00000;
    if (0xf < *(int *)puVar2) {
      FUN_4a041aa0(0xf);
    }
    FUN_4a133d40(param_1,param_2);
    goto switchD_4a132204_caseD_d;
  case 0x13:
    uVar10 = 0x41f00000;
    *(undefined4 *)puVar1 = 0x41f00000;
    if (0xf < *(int *)puVar2) {
      uVar5 = 0xf;
      goto LAB_4a13261c;
    }
LAB_4a132620:
    FUN_4a133d40(param_1,param_2);
    FUN_4a041910(1);
    FUN_4a0fe1e0(iVar13,param_2);
    FUN_4a0ce0a8(param_1,param_2);
    FUN_4a041910(0);
    break;
  case 0x14:
  case 0x15:
  case 0x28:
  case 0x29:
    FUN_4a129474(param_1,param_2);
    FUN_4a041910(1);
    FUN_4a12a35c(param_1,param_2);
    FUN_4a0fe1e0(iVar13,param_2);
    FUN_4a0ce0a8(param_1,param_2);
    FUN_4a041910(0);
    break;
  case 0x17:
  case 0x1e:
  case 0x21:
  case 0x22:
    FUN_4a12d444(param_1,param_2);
    FUN_4a041910(1);
    FUN_4a0fe1e0(iVar13,param_2);
    FUN_4a0ce0a8(param_1,param_2);
    FUN_4a041910(0);
    break;
  case 0x18:
    FUN_4a12daec(param_1,param_2);
    break;
  case 0x19:
    FUN_4a12f6a8(param_1,param_2);
    break;
  case 0x1a:
    FUN_4a12f400(param_1,param_2);
    break;
  case 0x1b:
    FUN_4a12faf4(param_1,param_2);
    break;
  case 0x1c:
    FUN_4a130324(param_1,param_2);
    break;
  case 0x1f:
    FUN_4a12d248(param_1,param_2);
    break;
  case 0x2a:
    (**(code **)(*param_2 + 0xa0))(param_2,0);
    uVar6 = FUN_4a13caa0(*(undefined4 *)(param_1 + 0x20));
    uVar10 = FUN_4a13ca78(*(undefined4 *)(param_1 + 0x20));
    local_28 = uVar6;
    (**(code **)(*param_2 + 0x58))(param_2,0,0,uVar10);
    FUN_4a041910(1);
    FUN_4a0bc020(*(undefined4 *)puVar3);
    iVar11 = FUN_4a13caa0(*(undefined4 *)(param_1 + 0x20));
    iVar7 = FUN_4a13ca78(*(undefined4 *)(param_1 + 0x20));
    local_28 = iVar11 / 2;
    uStack_24 = 0x12;
    FUN_4a06c45c(iVar13 + 0x278,param_2,1,iVar7 / 2);
    FUN_4a0bbcb4(*(undefined4 *)puVar3);
    FUN_4a041910(0);
  }
LAB_4a0cb958:
  FUN_4a0cecb0(param_1);
  iVar11 = *(int *)(param_1 + 0x180);
  iVar13 = *(int *)(param_1 + 0x20) + 0x128;
  if (0 < iVar11) {
    uVar6 = FUN_4a171fac(iVar11 + -0x200000);
    uVar6 = FUN_4a17211c(uVar6,DAT_4a0cba9c);
    FUN_4a1724e0(uVar6,0x3f800000);
    uVar6 = FUN_4a171fac(iVar11);
    uVar6 = FUN_4a17295c(uVar6,0xffffffe9);
    if (*(char *)(param_1 + 0x184) == '\0') {
      uVar10 = *(undefined4 *)(param_1 + 0x174);
      uStack_20 = *(undefined4 *)(param_1 + 0x178);
      FUN_4a0bbf48(*(undefined4 *)PTR_DAT_4a0cbaa0,&stack0xffffffe4,&uStack_20);
    }
    else {
      uVar10 = FUN_4a16bdcc(&uStack_34,param_1 + 0x2c);
      FUN_4a0f2970(*(undefined4 *)(param_1 + 0x28),uVar10,*(undefined4 *)(param_1 + 0x174),
                   *(undefined4 *)(param_1 + 0x178));
      FUN_4a16bef4(&uStack_34);
      iVar11 = 0;
      if (*(int *)(param_1 + 0x38) == 0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x38) + 8);
      }
      uVar10 = *puVar4;
      if (*(int *)(param_1 + 0x38) != 0) {
        iVar11 = *(int *)(*(int *)(param_1 + 0x38) + 8);
      }
      uStack_20 = *(undefined4 *)(iVar11 + 4);
    }
    uVar5 = FUN_4a171fac(uStack_20);
    uVar10 = FUN_4a171fac(uVar10);
    uStack_2c = 0;
    uStack_34 = uVar6;
    uStack_30 = uVar6;
    FUN_4a09f664(iVar13,0x2a,uVar10,uVar5);
    FUN_4a09f3a4(iVar13,param_2);
    return;
  }
  return;
switchD_4a132204_caseD_d:
  puVar2 = PTR_DAT_4a1327bc;
  if (*(int *)(param_1 + 0x1b0) == 3) {
    *(undefined4 *)puVar1 = 0x425c0000;
    iVar11 = *(int *)puVar2;
    if (0xf < iVar11) {
      iVar11 = 0xf;
    }
    FUN_4a041aa0(iVar11,0x425c0000,uVar6);
  }
  puVar2 = PTR_DAT_4a1327bc;
  if (*(int *)(param_1 + 0x1b0) == 4) {
    *(undefined4 *)puVar1 = 0x42340000;
    iVar11 = *(int *)puVar2;
    if (0xf < iVar11) {
      iVar11 = 0xf;
    }
    FUN_4a041aa0(iVar11,0x42340000,uVar6);
  }
  puVar2 = PTR_DAT_4a1327bc;
  if (*(int *)(param_1 + 0x1b0) == 5) {
    *(undefined4 *)puVar1 = 0x425c0000;
    iVar11 = *(int *)puVar2;
    if (0xf < iVar11) {
      iVar11 = 0xf;
    }
    FUN_4a041aa0(iVar11,0x425c0000,uVar6);
  }
  puVar2 = PTR_DAT_4a1327bc;
  if (*(int *)(param_1 + 0x1b0) == 6) {
    *(undefined4 *)puVar1 = 0x41880000;
    iVar11 = *(int *)puVar2;
    if (0xf < iVar11) {
      iVar11 = 0xf;
    }
    FUN_4a041aa0(iVar11,0x41880000,uVar6);
  }
  puVar2 = PTR_DAT_4a1327bc;
  if (*(int *)(param_1 + 0x1b0) == 8) {
    *(undefined4 *)puVar1 = 0x41880000;
    iVar11 = *(int *)puVar2;
    if (0xf < iVar11) {
      iVar11 = 0xf;
    }
    FUN_4a041aa0(iVar11,0x41880000,uVar6);
  }
  puVar2 = PTR_DAT_4a1327bc;
  if (*(int *)(param_1 + 0x1b0) == 7) {
    *(undefined4 *)puVar1 = 0x41880000;
    iVar11 = *(int *)puVar2;
    if (0xf < iVar11) {
      iVar11 = 0xf;
    }
    FUN_4a041aa0(iVar11,0x41880000,uVar6);
  }
switchD_4a132204_caseD_e:
  FUN_4a133d40(param_1,param_2);
  goto LAB_4a0cb958;
}



// Address: 4a1327d0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1327d0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar7;
  undefined1 auStack_148 [20];
  undefined1 auStack_134 [256];
  undefined1 auStack_34 [20];
  undefined1 auStack_20 [24];
  
  iVar5 = *(int *)(param_1 + 0x20);
  if ((*(int *)(iVar5 + 0x3c) == 0) || (*(char *)(iVar5 + 0x40) != '\0')) {
    if (*(int *)(iVar5 + 0x44) == 0) {
      return;
    }
    if ((*(char *)(param_1 + 0x218) == '\0') || (*(char *)(iVar5 + 0x48) != '\0')) {
      if (*(char *)(param_1 + 0x219) != '\0') {
        return;
      }
      iVar5 = FUN_4a04e214();
      if ((iVar5 != 0) && (*(char *)(*(int *)(param_1 + 0x20) + 0x48) == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x4a132848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
  }
  puVar2 = (undefined4 *)FUN_4a0c6bc0(auStack_34);
  *puVar2 = PTR_PTR_4a129748;
  puVar2[2] = *(undefined4 *)(param_1 + 0x1d4);
  piVar6 = *(int **)(param_1 + 0x1d8);
  puVar2[3] = piVar6;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))();
  }
  *puVar2 = PTR_PTR_4a12974c;
  uVar3 = FUN_4a16bdcc(auStack_20,auStack_34);
  FUN_4a0ff4b8(uVar3,0x81b);
  FUN_4a16bef4(auStack_20);
  uVar4 = *(uint *)(param_1 + 0x20);
  if (*(int *)(uVar4 + 0x38) == 0) {
    bVar7 = *(int *)(uVar4 + 0x3c) == 0;
    cVar1 = '\0';
    if (!bVar7) {
      cVar1 = *(char *)(uVar4 + 0x40);
    }
    if (bVar7 || cVar1 == '\0') {
      bVar7 = *(int *)(uVar4 + 0x44) == 0;
      if (!bVar7) {
        uVar4 = (uint)*(byte *)(uVar4 + 0x48);
      }
      if (bVar7 || uVar4 == 0) {
        uVar3 = FUN_4a16bdcc(auStack_148,auStack_34);
        FUN_4a0fc4b0(uVar3,0x825);
        FUN_4a16bef4(auStack_148);
      }
      else {
        uVar3 = FUN_4a16bdcc(auStack_148,auStack_34);
        FUN_4a0fc4b0(uVar3,0xcdb);
        FUN_4a16bef4(auStack_148);
        uVar3 = FUN_4a16bdcc(auStack_148,auStack_34);
        FUN_4a0fc4b0(uVar3,0xcdd);
        FUN_4a16bef4(auStack_148);
      }
      goto LAB_4a129648;
    }
  }
  uVar3 = FUN_4a16bdcc(auStack_148,auStack_34);
  FUN_4a0fc4b0(uVar3,0xcd8);
  FUN_4a16bef4(auStack_148);
LAB_4a129648:
  if ((*(int *)(*(int *)(param_1 + 0x20) + 0x44) != 0) && (iVar5 = FUN_4a04e214(), iVar5 != 0)) {
    uVar3 = FUN_4a16bdcc(auStack_148,auStack_34);
    FUN_4a0fc4b0(uVar3,0xcdc);
    FUN_4a16bef4(auStack_148);
  }
  host_s3eConfigGetString_arm(s_GetMoreGames_4a129754,&DAT_4a129750,auStack_134);
  uVar4 = thunk_FUN_4a0013e0(auStack_134);
  if (2 < uVar4) {
    uVar3 = FUN_4a16bdcc(auStack_148,auStack_34);
    FUN_4a0fc4b0(uVar3,0x829);
    FUN_4a16bef4(auStack_148);
  }
  uVar3 = FUN_4a16bdcc(auStack_20,auStack_34);
  FUN_4a0fc4b0(uVar3,0x826);
  FUN_4a16bef4(auStack_20);
  uVar3 = FUN_4a16bdcc(auStack_20,auStack_34);
  FUN_4a0fc4b0(uVar3,0x827);
  FUN_4a16bef4(auStack_20);
  uVar3 = FUN_4a16bdcc(auStack_20,auStack_34);
  FUN_4a0fc4b0(uVar3,0xcd1);
  FUN_4a16bef4(auStack_20);
  FUN_4a06f47c(*(undefined4 *)(param_1 + 0x1e0),auStack_34,0);
  FUN_4a16bef4(auStack_34);
  return;
}



// Address: 4a132858

/* WARNING: Removing unreachable block (ram,0x4a0faea0) */
/* WARNING: Removing unreachable block (ram,0x4a0fae9c) */
/* WARNING: Removing unreachable block (ram,0x4a0fcc80) */
/* WARNING: Removing unreachable block (ram,0x4a0fcc84) */
/* WARNING: Removing unreachable block (ram,0x4a0fcc9c) */
/* WARNING: Removing unreachable block (ram,0x4a0faebc) */
/* WARNING: Removing unreachable block (ram,0x4a0faf08) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * FUN_4a132858(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int *piVar11;
  undefined4 unaff_r6;
  int iVar12;
  int *piVar13;
  undefined4 unaff_r7;
  int iVar14;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar15;
  undefined8 uVar16;
  uint uStack_124;
  undefined1 auStack_120 [240];
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  int *piStack_24;
  int *piStack_20;
  undefined4 uStack_4;
  
  FUN_4a0cf054();
  *(int *)(param_1 + 0x1b4) = *(int *)(param_1 + 0x1b4) + param_2;
  iVar5 = *(int *)(param_1 + 0x1ac);
  if (iVar5 != 1) {
    if ((iVar5 == 5 || iVar5 == 0x28) && (iVar5 = FUN_4a13ef1c(param_1), iVar5 == -1)) {
      FUN_4a0ff408(*(undefined4 *)(param_1 + 0x20));
    }
    if (*(int *)(param_1 + 0x268) != 0) {
      iVar5 = (int)((ulonglong)((longlong)DAT_4a132cc8 * (longlong)param_2) >> 0x20);
      iVar5 = iVar5 - (iVar5 >> 0x1f);
      if (iVar5 < 1) {
        iVar5 = 1;
      }
      FUN_4a06f7a4(*(int *)(param_1 + 0x268),iVar5);
    }
    iVar5 = FUN_4a13ef1c(param_1);
    if (iVar5 == -1) {
      puVar6 = (undefined4 *)(*(int *)(param_1 + 0x1ac) + -2);
      switch(puVar6) {
      default:
        goto switchD_4a1329b8_caseD_0;
      case (undefined4 *)0x2:
        puVar6 = (undefined4 *)(*(int *)(param_1 + 0x254) + param_2);
        *(undefined4 **)(param_1 + 0x254) = puVar6;
        if ((int)puVar6 < 0xfa1) {
          return puVar6;
        }
        uVar9 = 1;
        break;
      case (undefined4 *)0x5:
        if (*(int *)(param_1 + 0x1bc) == 5) {
          return (undefined4 *)0x5;
        }
        if (*(char *)(param_1 + 0x21a) == '\0') {
          *(undefined4 *)(param_1 + 0x1bc) = 5;
          puVar6 = (undefined4 *)FUN_4a0fb654(*(undefined4 *)(param_1 + 0x20));
          if (puVar6 != (undefined4 *)0x0) {
            return puVar6;
          }
          puVar6 = *(undefined4 **)(param_1 + 0x20);
          puVar6[0x113] = 0xffffff;
          puVar6[0x114] = 0xffffffff;
          *(undefined1 *)(puVar6 + 0x112) = 1;
          *(undefined1 *)(puVar6 + 0x116) = 0;
          return puVar6;
        }
        *(undefined4 *)(param_1 + 0x1ac) = 0x27;
        return (undefined4 *)0x27;
      case (undefined4 *)0x6:
        FUN_4a0ff4a4();
        thunk_FUN_4a0c6b08();
        puVar6 = (undefined4 *)FUN_4a0c74dc();
        if (puVar6 == *(undefined4 **)(param_1 + 0x20)) {
          FUN_4a0d34e4((*(undefined4 **)(param_1 + 0x20))[0x99]);
          FUN_4a12be24(param_1,5);
          puVar6 = *(undefined4 **)(param_1 + 0x20);
          puVar6[0x114] = 1;
          puVar6[0x113] = 0;
          *(undefined1 *)(puVar6 + 0x112) = 1;
          *(undefined1 *)(puVar6 + 0x116) = 0;
          return puVar6;
        }
        return puVar6;
      case (undefined4 *)0x7:
      case (undefined4 *)0x8:
      case (undefined4 *)0x14:
                    /* WARNING: Could not recover jumptable at 0x4a132b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar6 = (undefined4 *)
                 (**(code **)(**(int **)(param_1 + 0x26c) + 0x20))
                           (*(int **)(param_1 + 0x26c),param_2);
        return puVar6;
      case (undefined4 *)0xb:
      case (undefined4 *)0xc:
      case (undefined4 *)0xd:
      case (undefined4 *)0xe:
      case (undefined4 *)0xf:
        bVar15 = *(char *)(param_1 + 0x449) == '\0';
        iVar5 = 0;
        if (!bVar15) {
          iVar5 = *(int *)(param_1 + 0x1b4);
        }
        if (bVar15 || iVar5 < 0x1f5) {
          if ((*(char *)(param_1 + 0x44a) != '\0') || (*(int *)(param_1 + 0x1b4) < 0x1f5)) {
            FUN_4a12c7fc(param_1,param_2);
            FUN_4a12a654(param_1,param_2);
            FUN_4a130714(param_1,param_2);
            puVar6 = *(undefined4 **)(param_1 + 0x1ac);
            bVar15 = puVar6 == (undefined4 *)0xd;
            if (bVar15) {
              puVar6 = *(undefined4 **)(param_1 + 0x1b0);
            }
            if (!bVar15 || puVar6 != (undefined4 *)&DAT_00000009) {
              return puVar6;
            }
            iVar5 = FUN_4a130b7c(param_1);
            if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a132bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              puVar6 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_00)();
              return puVar6;
            }
            iVar5 = FUN_4a084be4(param_1 + 0xc74);
            *(bool *)(param_1 + 0xd6c) = DAT_4a132ccc < iVar5;
            if (*(char *)(param_1 + 0xd6d) != '\0') {
              FUN_4a1305d0(param_1);
              *(undefined1 *)(param_1 + 0xd6c) = 0;
              *(undefined1 *)(param_1 + 0xd6d) = 0;
              *(undefined4 *)(param_1 + 0x1b0) = 0;
              return (undefined4 *)0x0;
            }
                    /* WARNING: Could not recover jumptable at 0x4a132c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar6 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_00)();
            return puVar6;
          }
          *(undefined1 *)(param_1 + 0x44a) = 1;
          uVar9 = 0xc;
        }
        else {
          *(undefined1 *)(param_1 + 0x449) = 0;
          uVar9 = 0x23;
        }
        break;
      case (undefined4 *)0x1e:
        FUN_4a0ff4a4();
        iVar5 = thunk_FUN_4a0c6b08();
        return *(undefined4 **)(iVar5 + 8);
      case (undefined4 *)0x28:
        puVar6 = (undefined4 *)(*(int *)(param_1 + 600) + param_2);
        *(undefined4 **)(param_1 + 600) = puVar6;
        if (8000 < (int)puVar6) {
          iVar5 = host_s3eConfigGetInt_arm
                            (PTR_s_RenderDisclaimerIn3D_4a132cd0 + -0x18,
                             PTR_s_RenderDisclaimerIn3D_4a132cd0,&stack0xffffffe8);
          if (((iVar5 != 0) || (param_4 == 0)) && (*(int *)PTR_DAT_4a132cd4 != 0)) {
            *(undefined4 *)PTR_DAT_4a132cd8 = 1;
            if (*(int *)PTR_DAT_4a132cdc == 0) {
              host_s3eDeviceGetString_arm(0x17);
            }
            else {
              FUN_4a05a7c4();
            }
          }
          puVar6 = (undefined4 *)FUN_4a12be24(param_1,1);
          return puVar6;
        }
        return puVar6;
      }
    }
    else {
      if (iVar5 != 9) {
        FUN_4a0cd78c(param_1,param_2);
      }
      puVar6 = (undefined4 *)FUN_4a13ef1c(param_1);
      if (puVar6 != (undefined4 *)0xffffffff) {
        return puVar6;
      }
      uVar9 = *(undefined4 *)(param_1 + 0x1ac);
    }
LAB_4a12be34:
    iVar5 = *(int *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_1 + 0x1ac);
    *(undefined4 *)(param_1 + 0x1b4) = 0;
    *(undefined4 *)(param_1 + 0x1ac) = uVar9;
    FUN_4a0fe374(iVar5);
    FUN_4a0fd00c(iVar5);
    puVar6 = *(undefined4 **)(param_1 + 0x1b8);
    if (puVar6 == (undefined4 *)&DAT_00000004) {
      piVar13 = *(int **)(param_1 + 0x250);
      if (piVar13 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar13 + 8))(piVar13);
        puVar6 = (undefined4 *)0x0;
        if (iVar3 != 0) {
          puVar6 = (undefined4 *)(**(code **)(*piVar13 + 4))(piVar13);
        }
        *(undefined4 *)(param_1 + 0x250) = 0;
      }
LAB_4a12bed4:
      piVar13 = *(int **)(param_1 + 0xd5c);
      if (piVar13 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar13 + 8))(piVar13);
        puVar6 = (undefined4 *)0x0;
        if (iVar3 != 0) {
          puVar6 = (undefined4 *)(**(code **)(*piVar13 + 4))(piVar13);
        }
        *(undefined4 *)(param_1 + 0xd5c) = 0;
      }
    }
    else {
      if (puVar6 == (undefined4 *)0xd) goto LAB_4a12bed4;
      if (puVar6 == (undefined4 *)0x1f) {
        puVar6 = (undefined4 *)FUN_4a09fa1c(*(int *)(param_1 + 0x20) + 0x128,0x109);
      }
    }
    switch(uVar9) {
    default:
      return puVar6;
    case 1:
      *(undefined4 *)(param_1 + 0x1e4) = 0;
      FUN_4a0fb75c(iVar5,0);
      if (*PTR_DAT_4a12c7b8 != '\0') {
        puVar6 = (undefined4 *)host_s3eAudioGetInt_arm(1);
        if (puVar6 == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
        return puVar6;
      }
      puVar6 = *(undefined4 **)(iVar5 + 0x264);
      uVar9 = 1;
      goto FUN_4a0d36d0;
    case 2:
      uVar9 = *(undefined4 *)(param_1 + 0x1c4);
      *(undefined4 *)(iVar5 + 0x460) = *(undefined4 *)(param_1 + 0x1c0);
      *(undefined4 *)(iVar5 + 0x464) = uVar9;
      return (undefined4 *)(iVar5 + 0x460);
    case 4:
      piVar13 = (int *)FUN_4a135e3c(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x60),
                                    PTR_DAT_4a12c7bc,0);
      *(int **)(param_1 + 0x250) = piVar13;
      if (piVar13 != (int *)0x0) {
        (**(code **)(*piVar13 + 0xc))();
      }
      FUN_4a0be380(*(undefined4 *)(param_1 + 0x250));
      puVar1 = PTR_DAT_4a12c7c0;
      *(undefined4 *)(param_1 + 0x254) = 0;
      *puVar1 = 1;
    case 5:
      iVar3 = 0;
      if (0 < *(int *)(iVar5 + 0x470)) {
        do {
          iVar7 = *(int *)(iVar5 + 0x474);
          if (iVar7 == 0) {
            iVar12 = 0;
          }
          else {
            iVar12 = *(int *)(iVar7 + 8);
          }
          if ((*(uint *)(iVar12 + (iVar3 * 2 + 1) * 4) & 2) != 0) {
            if (iVar7 == 0) {
              iVar7 = 0;
            }
            else {
              iVar7 = *(int *)(iVar7 + 8);
            }
            FUN_4a0992b8(*(undefined4 *)(iVar7 + iVar3 * 8),0);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 * 2 < *(int *)(iVar5 + 0x470));
      }
      iVar3 = 0;
      if (0 < (int)*(undefined4 **)(iVar5 + 0x484)) {
        do {
          iVar12 = *(int *)(iVar5 + 0x488);
          iVar7 = 0;
          if (iVar12 != 0) {
            iVar7 = *(int *)(iVar12 + 8);
          }
          if ((*(uint *)(iVar7 + (iVar3 + 1) * 4) & 2) != 0) {
            iVar7 = 0;
            if (iVar12 != 0) {
              iVar7 = *(int *)(iVar12 + 8);
            }
            FUN_4a09fa1c(iVar5 + 0x128,*(undefined4 *)(iVar7 + iVar3 * 4));
          }
          iVar3 = iVar3 + 2;
        } while (iVar3 < (int)*(undefined4 **)(iVar5 + 0x484));
        return *(undefined4 **)(iVar5 + 0x484);
      }
      return *(undefined4 **)(iVar5 + 0x484);
    case 6:
      param_4 = 2;
      FUN_4a089fa0(*(undefined4 *)(param_1 + 0x168),0x800,0x825);
      iVar5 = 0;
      if (*(int *)(param_1 + 0x7c) != 0) {
        iVar5 = *(int *)(*(int *)(param_1 + 0x7c) + 8);
      }
      puVar6 = *(undefined4 **)(iVar5 + 0xc);
      goto FUN_4a0d297c;
    case 7:
      puVar6 = (undefined4 *)FUN_4a1614d4();
      if (puVar6 == (undefined4 *)0x1) {
        host_s3eConfigGetString_arm(PTR_DAT_4a12c7c4 + -0x18,PTR_DAT_4a12c7c4,auStack_120);
        uStack_124 = 0;
        host_s3eConfigGetInt_arm(PTR_DAT_4a12c7c8 + -0x10,PTR_DAT_4a12c7c8,&uStack_124);
        puVar6 = (undefined4 *)FUN_4a161604(auStack_120,uStack_124 & 0xff);
        return puVar6;
      }
      return puVar6;
    case 8:
      FUN_4a0ff4a4();
      thunk_FUN_4a0c6b08();
      return *(undefined4 **)(*(int *)(param_1 + 0x20) + 0x264);
    case 9:
      puVar6 = *(undefined4 **)(param_1 + 0x1b8);
      if ((puVar6 == (undefined4 *)&DAT_0000000a || puVar6 == (undefined4 *)&DAT_00000016) ||
          puVar6 == (undefined4 *)&DAT_00000012) {
        return puVar6;
      }
      puVar6 = (undefined4 *)FUN_4a0cf540(param_1,0);
      unaff_r4 = *(undefined4 *)(&stack0xfffffed8 + 0x10c);
      unaff_r5 = *(undefined4 *)(&stack0xfffffed8 + 0x110);
      unaff_r6 = *(undefined4 *)(&stack0xfffffed8 + 0x114);
      unaff_r7 = *(undefined4 *)(&stack0xfffffed8 + 0x118);
      unaff_r8 = *(undefined4 *)(&stack0xfffffed8 + 0x11c);
      unaff_r9 = *(undefined4 *)(&stack0xfffffed8 + 0x120);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(&stack0xfffffed8 + 0x124);
      register0x00000054 = (BADSPACEBASE *)(&stack0xfffffed8 + 0x128);
FUN_4a0d297c:
      *(code **)((int)register0x00000054 + -4) = UNRECOVERED_JUMPTABLE_00;
      *(undefined4 *)((int)register0x00000054 + -8) = unaff_r11;
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r10;
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r9;
      *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r8;
      *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r7;
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_r6;
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_r5;
      *(undefined4 *)((int)register0x00000054 + -0x24) = unaff_r4;
      piVar13 = (int *)((int)register0x00000054 + -0x28);
      *piVar13 = param_4;
      iVar5 = FUN_4a134a50(puVar6,1);
      if (iVar5 == 0) {
        puVar6[0x2a] = 0xffffffff;
        puVar6[10] = puVar6[10] & 0xfffffffd;
        return puVar6;
      }
      iVar5 = FUN_4a0ff494();
      uVar9 = *(undefined4 *)(iVar5 + 0x520);
      uVar10 = *(undefined4 *)(iVar5 + 0x51c);
      iVar3 = FUN_4a0fba7c();
      FUN_4a134a98(puVar6,2);
      puVar6[0x2c] = 1;
      puVar6[0x2e] = puVar6[0x22] + -0x14;
      puVar6[0x29] = 0xffffffff;
      switch(puVar6[0x1d]) {
      case 0:
        puVar6[0x3b] = 0;
        uVar9 = FUN_4a145bfc(iVar5);
        puVar6[0x29] = uVar9;
        puVar6[0x2b] = 7;
        puVar6[0x2c] = 7;
        puVar6[0x2d] = 1;
        puVar6[0x2e] = 0x76;
        puVar6[0x2f] = puVar6[0x23];
        goto switchD_4a0d29f4_default;
      case 1:
        puVar6[0x3b] = 1;
        uVar9 = FUN_4a13fd18(uVar10);
        puVar6[0x2b] = uVar9;
        uVar9 = FUN_4a13f8d8(uVar10);
        puVar6[0x29] = uVar9;
        puVar6[0x2c] = puVar6[0x2b];
        puVar6[0x2d] = 1;
        puVar6[0x2e] = 0xa0;
        uVar9 = puVar6[0x23];
        break;
      case 2:
        uVar9 = FUN_4a13fb20(uVar10);
        puVar6[0x2b] = uVar9;
        uVar9 = 0x28;
        break;
      case 3:
        uVar9 = FUN_4a13fa90(uVar10);
        puVar6[0x2b] = uVar9;
        uVar9 = 0x22;
        break;
      case 4:
        uVar9 = FUN_4a13fb04(uVar10);
        puVar6[0x2b] = uVar9;
        puVar6[0x2f] = 0x2d;
        iVar3 = 0;
        iVar7 = FUN_4a13fb04(uVar10);
        uVar8 = iVar7 - 1;
        if (-1 < (int)uVar8) {
          do {
            uVar9 = FUN_4a13fa58(uVar10,uVar8);
            iVar7 = FUN_4a06bf88(iVar5 + 0x278,uVar9,3);
            if (iVar3 < iVar7) {
              iVar3 = iVar7;
            }
            uVar8 = uVar8 - 1;
          } while (uVar8 < 0x80000000);
        }
        puVar6[0x30] = iVar3;
        goto switchD_4a0d29f4_default;
      case 5:
        uVar9 = FUN_4a140cec(uVar10);
        puVar6[0x2b] = uVar9;
        uVar9 = 0x28;
        break;
      case 6:
        uVar9 = FUN_4a141390(uVar10);
        puVar6[0x2b] = uVar9;
        uVar9 = 0x28;
        break;
      case 7:
        puVar6[0x29] = 0;
        puVar6[0x2b] = *(undefined4 *)(iVar3 + 0xa24);
        uVar9 = 0x28;
        break;
      case 8:
        puVar6[0x29] = 0;
        uVar10 = FUN_4a145634(uVar9,*(undefined4 *)(iVar3 + 0x6d4));
        puVar6[0x2b] = uVar10;
        puVar6[0x2f] = 0x28;
        puVar6[0x2d] = 1;
        iVar5 = 0;
        puVar6[0x2e] = 0xb4;
        do {
          uVar10 = FUN_4a1457e4(uVar9,iVar5,*(undefined4 *)(iVar3 + 0x6d4));
          thunk_FUN_4a161570(0x40);
          uVar4 = FUN_4a099040();
          if (puVar6[0x34] == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(puVar6[0x34] + 8);
          }
          *(undefined4 *)(iVar7 + iVar5 * 4) = uVar4;
          if (puVar6[0x34] == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(puVar6[0x34] + 8);
          }
          FUN_4a098798(*(undefined4 *)(iVar7 + iVar5 * 4),uVar10);
          if (puVar6[0x34] == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(puVar6[0x34] + 8);
          }
          FUN_4a0cb16c(*(undefined4 *)(*(int *)(iVar7 + iVar5 * 4) + 0x34));
          if (puVar6[0x39] == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(puVar6[0x39] + 8);
          }
          *(int *)(iVar7 + iVar5 * 4) = iVar5;
          iVar5 = iVar5 + 1;
        } while (iVar5 < 5);
switchD_4a0d29f4_default:
        if (*(char *)(puVar6 + 0x1f) == '\0') {
          uVar16 = FUN_4a0015f0(puVar6[0x2b],puVar6[0x2c]);
          iVar5 = (uint)(0 < (int)((ulonglong)uVar16 >> 0x20)) + (int)uVar16;
          puVar6[0x2d] = iVar5;
          iVar5 = iVar5 * puVar6[0x2f];
          iVar3 = puVar6[0x23] - iVar5;
          if (0 < iVar3) {
            iVar3 = 0;
          }
          uVar9 = FUN_4a171fac(iVar3);
          FUN_4a08c614(puVar6,uVar9,0);
          FUN_4a08c608(puVar6,(int)puVar6[0x23] < iVar5);
          puVar6[0x11] = 0;
          puVar6[0x15] = 0;
          return puVar6;
        }
        iVar7 = puVar6[0x2e];
        puVar6[0x22] = iVar7;
        puVar6[0x20] = puVar6[0x24] + (puVar6[0x26] - iVar7 >> 1);
        uVar16 = FUN_4a0015f0(puVar6[0x2b],puVar6[0x2d]);
        iVar14 = (int)uVar16 + (uint)(0 < (int)((ulonglong)uVar16 >> 0x20));
        iVar12 = (iVar14 + -1) * iVar7;
        puVar6[0x2c] = iVar14;
        iVar3 = puVar6[0x29];
        iVar5 = -iVar12;
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        if (iVar12 != 0 && -1 < iVar5) {
          iVar5 = 0;
        }
        uVar9 = FUN_4a171fac(iVar5);
        uVar10 = 0;
        if (puVar6[0x1d] == 0) {
          iVar5 = FUN_4a171fac(iVar7);
          *piVar13 = iVar5;
          uVar9 = FUN_4a171a94(iVar5,uVar9);
          uVar10 = FUN_4a1724e0(*piVar13,0);
          if (iVar3 == 0) {
            iVar3 = 1;
          }
          else if (iVar14 + -1 == iVar3) {
            iVar3 = iVar14 + -2;
          }
        }
        uVar4 = FUN_4a171fac(iVar7);
        FUN_4a08c5fc(puVar6,uVar9,uVar10,uVar4);
        FUN_4a08c564(puVar6,(int)puVar6[0x22] <= iVar12);
        uVar9 = FUN_4a171fac(-iVar3 * puVar6[0x2e]);
        puVar6[0x17] = uVar9;
        puVar6[0x1c] = uVar9;
        return puVar6;
      case 9:
        puVar6[0x29] = 0;
        uVar9 = FUN_4a06be4c(iVar5 + 0x278,3);
        puVar6[0x2f] = uVar9;
        puVar6[0x2b] = *(undefined4 *)(iVar3 + 0xa50);
        goto switchD_4a0d29f4_default;
      case 10:
        uVar9 = FUN_4a145540(uVar9);
        puVar6[0x2b] = uVar9;
        puVar6[0x2c] = uVar9;
        puVar6[0x2d] = 1;
        puVar6[0x2e] = 0xa0;
        uVar9 = puVar6[0x23];
        break;
      case 0xb:
        uVar9 = FUN_4a1454dc(uVar9);
        puVar6[0x2b] = uVar9;
        puVar6[0x2c] = uVar9;
        puVar6[0x2d] = 1;
        puVar6[0x2e] = 0xa0;
        uVar9 = puVar6[0x23];
        break;
      case 0xc:
        iVar5 = FUN_4a0fba7c(iVar5);
        iVar5 = FUN_4a143ac8(uVar9,*(undefined4 *)(iVar5 + 0x6ac));
        uVar9 = FUN_4a0f5958(uVar9,(int)*(char *)(iVar5 + 0x1f));
        puVar6[0x2b] = uVar9;
        puVar6[0x2c] = uVar9;
        puVar6[0x2d] = 1;
        puVar6[0x2e] = 0xa0;
        uVar9 = puVar6[0x23];
        break;
      case 0xd:
        uVar9 = FUN_4a0f3e54(uVar9);
        puVar6[0x2b] = uVar9;
        puVar6[0x2c] = uVar9;
        puVar6[0x2d] = 1;
        puVar6[0x2e] = 0xa0;
        uVar9 = puVar6[0x23];
        break;
      default:
        goto switchD_4a0d29f4_default;
      }
      puVar6[0x2f] = uVar9;
      goto switchD_4a0d29f4_default;
    case 0xb:
      uVar10 = 0x820;
      uVar9 = 0x821;
      goto FUN_4a0cd7a0;
    case 0xc:
      if (*(char *)(param_1 + 0x448) == '\0') {
        uVar10 = 0x86c;
        uVar9 = 0x86d;
      }
      else {
        uVar10 = 0x84f;
        uVar9 = 0x851;
      }
      break;
    case 0xd:
      FUN_4a132ce0(param_1);
      piVar13 = (int *)FUN_4a135e3c(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x60),
                                    PTR_DAT_4a12c7cc,0);
      *(int **)(param_1 + 0xd5c) = piVar13;
      if (piVar13 != (int *)0x0) {
        (**(code **)(*piVar13 + 0xc))();
      }
      FUN_4a0be380(*(undefined4 *)(param_1 + 0xd5c));
      *(undefined4 *)(param_1 + 0x1b0) = 0;
    case 0x11:
      FUN_4a130030(param_1,0x271c);
      uVar9 = 0x2725;
FUN_4a131aa0:
      uVar10 = FUN_4a16b8dc(&uStack_28,param_1 + 0x1f0);
      FUN_4a0b74b0(*(undefined4 *)(param_1 + 0x3ec),uVar9);
      uVar4 = FUN_4a16588c();
      FUN_4a13935c(uVar4,uVar10);
      FUN_4a16ba04(&uStack_28);
      if (*(int *)(param_1 + 0x1fc) == 0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = *(undefined4 **)(*(int *)(param_1 + 0x1fc) + 8);
      }
      FUN_4a084bdc(param_1 + 0x704,*puVar6);
      if (*(int *)(param_1 + 0x1fc) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x1fc) + 8);
      }
      FUN_4a084bdc(param_1 + 0x778,*(undefined4 *)(iVar5 + 4));
      if (*(int *)(param_1 + 0x1fc) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x1fc) + 8);
      }
      FUN_4a084bdc(param_1 + 0x7ec,*(undefined4 *)(iVar5 + 8));
      uVar10 = FUN_4a16b8dc(&uStack_28,param_1 + 0x1f0);
      FUN_4a0b74b0(*(undefined4 *)(param_1 + 0x3ec),uVar9);
      uVar9 = FUN_4a16588c();
      FUN_4a139388(uVar9,uVar10);
      FUN_4a16ba04(&uStack_28);
      if (*(int *)(param_1 + 0x1fc) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x1fc) + 8);
      }
      uVar9 = FUN_4a002bb8(*(undefined4 *)(iVar5 + 0xc));
      uVar9 = FUN_4a17211c(uVar9,0x43b40000);
      uVar8 = FUN_4a171bb8(uVar9,*(undefined4 *)PTR_DAT_4a131c30);
      if (uVar8 < 0xc3340000) {
        if (0x4333ffff < (int)uVar8) {
          uVar8 = FUN_4a1725c0(uVar8,0x43b40000);
        }
      }
      else {
        uVar8 = FUN_4a171a94(uVar8,0x43b40000);
      }
      uVar9 = FUN_4a084be4(param_1 + 0x860);
      FUN_4a171a94(uVar9,*(undefined4 *)(param_1 + 0xe20));
      uVar9 = FUN_4a0d4990();
      FUN_4a084b60(param_1 + 0x860,uVar9);
      *(undefined4 *)(param_1 + 0xe20) = 0;
      *(undefined4 *)(param_1 + 0xe24) = 0;
      *(undefined4 *)(param_1 + 0xe28) = 0;
      puVar6 = (undefined4 *)FUN_4a084bdc(param_1 + 0x860,uVar8);
      return puVar6;
    case 0xe:
      FUN_4a130030(param_1,0x271e);
      uVar9 = 0x2725;
      goto FUN_4a131aa0;
    case 0xf:
      FUN_4a130030(param_1,0x271f);
      uVar9 = 0x2725;
      goto FUN_4a131aa0;
    case 0x10:
      *(undefined4 *)(param_1 + 0x1b0) = 10;
      FUN_4a130030(param_1,0x2721);
      uVar9 = 0x2727;
      goto FUN_4a131aa0;
    case 0x12:
      uVar10 = 0x822;
      uVar9 = 0x823;
      goto FUN_4a0cd7a0;
    case 0x13:
      uVar10 = 0x81d;
      uVar9 = 0x824;
      goto FUN_4a0cd7a0;
    case 0x14:
      uVar10 = 0xcd1;
      uVar9 = 0xcd0;
      goto FUN_4a0cd7a0;
    case 0x15:
      uVar10 = 0x829;
      uVar9 = 0x842;
      goto FUN_4a0cd7a0;
    case 0x17:
      uVar10 = 0xcaf;
      uVar9 = 0xcb0;
      break;
    case 0x18:
      FUN_4a09f864(*(int *)(param_1 + 0x20) + 0x128,0x109);
      FUN_4a098f10(param_1 + 0x284,0);
      if (*(int *)(param_1 + 0x2c4) == 0) {
        piVar2 = (int *)(param_1 + 0x2c4);
        piVar13 = (int *)FUN_4a136124(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x60),0x129);
        if ((int *)*piVar2 != piVar13) {
          if (piVar13 != (int *)0x0) {
            (**(code **)(*piVar13 + 0xc))(piVar13);
          }
          piVar11 = (int *)*piVar2;
          if ((piVar11 != (int *)0x0) && (iVar3 = (**(code **)(*piVar11 + 8))(piVar11), iVar3 != 0))
          {
            (**(code **)(*piVar11 + 4))(piVar11);
          }
          *piVar2 = (int)piVar13;
        }
      }
      FUN_4a0d6ab8(auStack_30,*(undefined4 *)(param_1 + 0x24));
      if (piStack_24 != (int *)0x0) {
        (**(code **)(*piStack_24 + 0xc))(piStack_24);
      }
      (**(code **)(*(int *)(param_1 + 0x2cc) + 0x1c))((int *)(param_1 + 0x2cc));
      *(undefined4 *)(param_1 + 0x2d4) = uStack_28;
      *(int **)(param_1 + 0x2d8) = piStack_24;
      FUN_4a16bc4c(auStack_30);
      uVar9 = FUN_4a145948(iVar5);
      iVar3 = FUN_4a141abc(*(undefined4 *)(param_1 + 0x24),0);
      if (iVar3 == 0) {
        uVar10 = 0xcbb;
      }
      else {
        uVar10 = 0xcba;
      }
      FUN_4a1351bc(iVar5 + 0x278,uVar10);
      FUN_4a06b7b4(iVar5 + 0x278,0xfffffff5,0xcb9,uVar9);
      piVar13 = (int *)0x12c;
      uVar9 = 1;
      iVar3 = -0xb;
      goto code_r0x4a06b330;
    case 0x19:
      piVar13 = (int *)0xb4;
      uVar9 = 1;
      iVar3 = 0xcbd;
      goto code_r0x4a06b330;
    case 0x1a:
      piVar13 = (int *)0xc8;
      uVar9 = 1;
      iVar3 = 0xcbf;
      goto code_r0x4a06b330;
    case 0x1b:
      piVar13 = (int *)0x64;
      uVar9 = 2;
      iVar3 = 0xcc3;
      goto code_r0x4a06b330;
    case 0x1c:
      piVar13 = (int *)0xc8;
      uVar9 = 1;
      iVar3 = 0xcc4;
      goto code_r0x4a06b330;
    case 0x1d:
      goto switchD_4a12bf18_caseD_1d;
    case 0x1e:
      uVar10 = 0xcb3;
      uVar9 = 0xcb5;
      break;
    case 0x1f:
      FUN_4a09f864(*(int *)(param_1 + 0x20) + 0x128,0x109);
      piVar13 = (int *)0xc8;
      uVar9 = 1;
      iVar3 = 0xccd;
code_r0x4a06b330:
      iVar7 = 0;
      piStack_20 = piVar13;
      if (iVar3 < -2) {
        if (*(int *)(iVar5 + 0x2b8) != 0) {
          iVar7 = *(int *)(*(int *)(iVar5 + 0x2b8) + 8);
        }
        piVar2 = *(int **)(iVar7 + (iVar3 + 0xc) * 4);
      }
      else {
        uVar10 = FUN_4a08db2c();
        piVar2 = (int *)FUN_4a135b4c(uVar10,iVar3,0);
      }
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xc))();
      }
      if (*(int **)(iVar5 + 0x304) != piVar2) {
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0xc))();
        }
        piVar11 = *(int **)(iVar5 + 0x304);
        if ((piVar11 != (int *)0x0) && (iVar3 = (**(code **)(*piVar11 + 8))(piVar11), iVar3 != 0)) {
          (**(code **)(*piVar11 + 4))(piVar11);
        }
        *(int **)(iVar5 + 0x304) = piVar2;
      }
      piStack_20 = (int *)(iVar5 + 0x2f0);
      puVar6 = (undefined4 *)FUN_4a06b0fc(iVar5 + 0x278,piVar2,uVar9,piVar13);
      if ((piVar2 != (int *)0x0) && (iVar5 = (**(code **)(*piVar2 + 8))(piVar2), iVar5 != 0)) {
        (**(code **)(*piVar2 + 4))(piVar2);
      }
      return puVar6;
    case 0x21:
      uVar10 = 0xcb3;
      uVar9 = 0xcb6;
      break;
    case 0x22:
      uVar10 = 0xcb3;
      uVar9 = 0xcb7;
      break;
    case 0x23:
      uVar9 = FUN_4a145948(iVar5);
      FUN_4a06b6cc(iVar5 + 0x278,0xfffffff5,0xcb4,uVar9);
      uVar10 = 0xcb3;
      uVar9 = 0xfffffff5;
      break;
    case 0x24:
      *(undefined1 *)(param_1 + 0x448) = 1;
      FUN_4a12be24(param_1,0xd);
      iVar3 = FUN_4a0941ec();
      iVar5 = FUN_4a0ff494();
      uVar10 = *(undefined4 *)(iVar5 + 0x51c);
      uVar9 = FUN_4a140fd0(uVar10,0,2);
      *(undefined4 *)(iVar3 + 0x20) = uVar9;
      uVar9 = FUN_4a140fd0(uVar10,0,3);
      *(undefined4 *)(iVar3 + 0x24) = uVar9;
      uVar9 = FUN_4a140fd0(uVar10,0,0xb);
      *(undefined4 *)(iVar3 + 0x28) = uVar9;
      uVar9 = FUN_4a140fd0(uVar10,0,0xc);
      *(undefined4 *)(iVar3 + 0x2c) = uVar9;
      uVar9 = FUN_4a140fd0(uVar10,0,5);
      *(undefined4 *)(iVar3 + 0x30) = uVar9;
      uVar9 = FUN_4a140fd0(uVar10,0,6);
      *(undefined4 *)(iVar3 + 0x34) = uVar9;
      uVar9 = FUN_4a140fd0(uVar10,0,7);
      *(undefined4 *)(iVar3 + 0x38) = uVar9;
      uVar9 = FUN_4a140fd0(uVar10,0,8);
      *(undefined4 *)(iVar3 + 0x3c) = uVar9;
      uVar9 = FUN_4a140fd0(uVar10,0,9);
      *(undefined4 *)(iVar3 + 0x40) = uVar9;
      puVar6 = (undefined4 *)FUN_4a140fd0(uVar10,0,10);
      *(undefined4 **)(iVar3 + 0x44) = puVar6;
      return puVar6;
    case 0x25:
      uVar10 = 0xc9e;
      uVar9 = 0xca0;
      goto FUN_4a0cd7a0;
    case 0x26:
      uVar10 = 0xc9e;
      uVar9 = 0xca1;
FUN_4a0cd7a0:
      puVar6 = (undefined4 *)FUN_4a089eb4(*(undefined4 *)(param_1 + 0x168),uVar9,uVar10,0x40);
      return puVar6;
    case 0x28:
      FUN_4a0fe5e8(*(undefined4 *)(param_1 + 0x20));
      uVar10 = 0xc9b;
      uVar9 = 0xc9d;
      break;
    case 0x29:
      uVar10 = 0xc9b;
      uVar9 = 0xc9c;
      break;
    case 0x2a:
      iVar3 = host_s3eConfigGetInt_arm(&DAT_4a12c7e8,s_RenderDisclaimerIn3D_4a12c7d0,&piStack_20);
      if ((iVar3 != 0) || (piStack_20 == (int *)0x0)) {
        iVar3 = 0;
        if (*(int *)PTR_DAT_4a12c7ec != 0) {
          iVar3 = *(int *)PTR_DAT_4a12c7f0;
        }
        if (*(int *)PTR_DAT_4a12c7ec != 0 && iVar3 != 0) {
          *(undefined4 *)PTR_DAT_4a12c7ec = 0;
          if (*(int *)PTR_DAT_4a12c7f4 == 0) {
            host_s3eDeviceGetString_arm(0x18);
          }
          else {
            FUN_4a00e63c();
          }
        }
      }
      iVar3 = FUN_4a13ca78(iVar5);
      iVar3 = (int)((ulonglong)((longlong)DAT_4a12c7f8 * (longlong)iVar3) >> 0x20);
      puVar6 = (undefined4 *)FUN_4a06b330(iVar5 + 0x278,0xcdf,1,iVar3 - (iVar3 >> 0x1f));
      *(undefined4 *)(param_1 + 600) = 0;
      return puVar6;
    }
    iVar3 = *(int *)(param_1 + 0x168);
    iVar5 = FUN_4a0ff494();
    *(undefined4 *)(iVar3 + 0x78) = 1;
    *(undefined4 *)(iVar3 + 0x94) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x98) = 4;
    *(undefined4 *)(iVar3 + 0x90) = uVar10;
    *(undefined4 *)(iVar3 + 0x9c) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0xa0) = 0xffffffff;
    FUN_4a09f974(iVar5 + 0x128,0x60);
    uVar10 = FUN_4a171e1c();
    *(undefined4 *)(iVar3 + 0xa4) = uVar10;
    *(undefined4 *)(iVar3 + 0xa8) = 200;
    FUN_4a08a03c(iVar3,uVar9,0);
    *(undefined4 *)(iVar3 + 0x74) = 0;
    *(undefined4 *)(iVar3 + 0x7c) = 2;
    *(undefined4 *)(iVar3 + 0x80) = 0;
                    /* WARNING: Could not recover jumptable at 0x4a0faeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar6 = (undefined4 *)(*(code *)PTR_caseD_2_4a0faec8)();
    return puVar6;
  }
  FUN_4a0cca84(param_1,param_2,*(undefined4 *)(param_1 + 0x1e8));
  iVar5 = FUN_4a0ff408(*(undefined4 *)(param_1 + 0x20));
  if ((iVar5 == 0) && (*(int *)(param_1 + 0x1e4) != 5)) {
    FUN_4a12df08(param_1);
  }
  iVar5 = *(int *)(param_1 + 0x1e4);
  bVar15 = iVar5 == 5;
  if (bVar15) {
    iVar5 = *(int *)(param_1 + 0x1ec);
  }
  if ((bVar15 && iVar5 == 0x10000) && (0x42c7ffff < *(int *)(param_1 + 0x1a8))) {
    FUN_4a12be24(param_1,*(undefined4 *)(param_1 + 0x1c8));
    puVar6 = *(undefined4 **)(*(int *)(param_1 + 0x20) + 0x264);
    uVar9 = 0;
FUN_4a0d36d0:
    *(undefined1 *)(puVar6 + 3) = 1;
    puVar6[10] = uVar9;
    *(undefined1 *)(puVar6 + 0xc) = 1;
    puVar6[0xb] = 0xffffffff;
    *(undefined1 *)(puVar6 + 5) = 0;
    switch(puVar6[6]) {
    case 0:
      puVar6[6] = 5;
      return puVar6;
    case 1:
      goto switchD_4a0d3700_caseD_1;
    default:
      return puVar6;
    }
  }
  iVar5 = (int)((ulonglong)((longlong)DAT_4a132cc4 * (longlong)(*(int *)(param_1 + 0x1e8) << 0x10))
               >> 0x20);
  puVar6 = (undefined4 *)((iVar5 >> 5) - (iVar5 >> 0x1f));
  *(undefined4 **)(param_1 + 0x1ec) = puVar6;
switchD_4a1329b8_caseD_0:
  return puVar6;
switchD_4a12bf18_caseD_1d:
  FUN_4a098e94(param_1 + 0x284);
  piStack_20 = (int *)0x0;
  piVar13 = *(int **)(param_1 + 0x2c4);
  if (piVar13 != (int *)0x0) {
    iVar5 = (**(code **)(*piVar13 + 8))(piVar13);
    if (iVar5 != 0) {
      (**(code **)(*piVar13 + 4))(piVar13);
    }
    *(int **)(param_1 + 0x2c4) = piStack_20;
  }
  piVar13 = piStack_20;
  if ((piStack_20 != (int *)0x0) && (iVar5 = (**(code **)(*piStack_20 + 8))(piStack_20), iVar5 != 0)
     ) {
    (**(code **)(*piVar13 + 4))(piVar13);
  }
  FUN_4a09fa1c(*(int *)(param_1 + 0x20) + 0x128,0x109);
  uVar9 = 9;
  goto LAB_4a12be34;
switchD_4a0d3700_caseD_1:
  puVar6[6] = 2;
  uVar8 = puVar6[9];
  if ((int)uVar8 < 0) {
    return (undefined4 *)puVar6[2];
  }
  iVar3 = ((undefined4 *)puVar6[2])[0x1d];
  iVar5 = 0;
  if (iVar3 != 0) {
    iVar5 = *(int *)(iVar3 + 8);
  }
  iVar7 = 0;
  if (iVar3 == 0) {
    iVar5 = 0;
  }
  puVar6 = *(undefined4 **)(iVar5 + (uVar8 & 0xffff) * 0x14 + 0xc);
  if (puVar6 != (undefined4 *)0x0) {
    iVar7 = puVar6[2];
  }
  piVar13 = *(int **)(iVar7 + (uVar8 >> 0x10) * 4);
  if (piVar13 != (int *)0x0) {
    (**(code **)(*piVar13 + 0x40))(piVar13);
                    /* WARNING: Could not recover jumptable at 0x4a08673c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar6 = (undefined4 *)(**(code **)(*piVar13 + 0x38))(piVar13,*(code **)(*piVar13 + 0x38),0);
    return puVar6;
  }
  return puVar6;
}



// Address: 4a132ce0

void FUN_4a132ce0(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined1 auStack_a8 [12];
  int local_9c;
  undefined1 auStack_94 [12];
  int local_88;
  undefined1 auStack_80 [12];
  int local_74;
  undefined1 auStack_6c [12];
  int local_60;
  undefined1 auStack_58 [12];
  int local_4c;
  undefined1 auStack_44 [12];
  int local_38;
  undefined1 auStack_30 [12];
  int local_24;
  int local_20;
  
  puVar12 = (undefined4 *)0x0;
  if (*(int *)(param_1 + 1000) == 0) {
    thunk_FUN_4a161570(0xe8);
    piVar2 = (int *)FUN_4a0b50dc();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))(piVar2);
    }
    thunk_FUN_4a161570(0x13c);
    piVar3 = (int *)FUN_4a0b52ec();
    *(int **)(param_1 + 0x444) = piVar3;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0xc))();
    }
    FUN_4a0b4c10(piVar2,*(undefined4 *)(param_1 + 0x444));
    FUN_4a0b5070(piVar2,*(undefined4 *)(param_1 + 0x444));
    FUN_4a13ca78(*(undefined4 *)(param_1 + 0x20));
    uVar4 = FUN_4a171fac();
    FUN_4a13caa0(*(undefined4 *)(param_1 + 0x20));
    uVar5 = FUN_4a171fac();
    uVar4 = FUN_4a171bb8(uVar5,uVar4);
    puVar1 = PTR_DAT_4a133af4;
    uVar5 = *(undefined4 *)PTR_DAT_4a133af4;
    local_20 = FUN_4a0bc200(uVar5);
    local_24 = FUN_4a0bc1f8(uVar5);
    if (local_24 < local_20) {
      piVar3 = &local_24;
    }
    else {
      piVar3 = &local_20;
    }
    uVar5 = FUN_4a171fac(*piVar3);
    uVar13 = *(undefined4 *)puVar1;
    local_20 = FUN_4a0bc200(uVar13);
    local_24 = FUN_4a0bc1f8(uVar13);
    if (local_20 < local_24) {
      piVar3 = &local_24;
    }
    else {
      piVar3 = &local_20;
    }
    uVar13 = FUN_4a171fac(*piVar3);
    uVar5 = FUN_4a171bb8(uVar13,uVar5);
    puVar1 = PTR_DAT_4a133af8;
    uVar13 = FUN_4a17211c(0x42480000,*(undefined4 *)PTR_DAT_4a133af8);
    uVar13 = FUN_4a17211c(uVar13,DAT_4a133afc);
    FUN_4a17295c(uVar13,0xffffffff);
    uVar13 = FUN_4a002fe0();
    uVar13 = FUN_4a17211c(uVar13,DAT_4a133b00);
    FUN_4a17211c(uVar13,uVar5);
    uVar5 = FUN_4a002cd8();
    uVar5 = FUN_4a17295c(uVar5,1);
    uVar5 = FUN_4a17211c(uVar5,0x43340000);
    uVar5 = FUN_4a171bb8(uVar5,*(undefined4 *)puVar1);
    local_b8 = *(undefined4 *)PTR_DAT_4a133b04;
    FUN_4a0b52c4(*(undefined4 *)(param_1 + 0x444),uVar5,uVar4,*(undefined4 *)PTR_DAT_4a133b08);
    thunk_FUN_4a161570(0x48);
    piVar3 = (int *)FUN_4a0b8a1c();
    *(int **)(param_1 + 0x3f4) = piVar3;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0xc))();
    }
    thunk_FUN_4a161570(0x8c);
    piVar3 = (int *)FUN_4a0cb3f4();
    *(int **)(param_1 + 0xd60) = piVar3;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0xc))();
    }
    FUN_4a0b4c10(piVar2,*(undefined4 *)(*(int *)(param_1 + 0xd60) + 0x30));
    thunk_FUN_4a161570(0x8c);
    piVar3 = (int *)FUN_4a0cb3f4();
    *(int **)(param_1 + 0xd64) = piVar3;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0xc))();
    }
    FUN_4a0b4c10(piVar2,*(undefined4 *)(*(int *)(param_1 + 0xd64) + 0x30));
    uVar4 = FUN_4a077b38();
    FUN_4a082464(uVar4,0xb0,0);
    uVar4 = FUN_4a165910();
    *(undefined4 *)(param_1 + 0x3ec) = uVar4;
    uVar4 = FUN_4a077b38();
    FUN_4a0b75a8(*(undefined4 *)(param_1 + 0x3ec));
    piVar3 = (int *)FUN_4a165910();
    *(int **)(param_1 + 0x3f0) = piVar3;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0xc))();
    }
    uVar5 = FUN_4a078b6c(uVar4,0x20);
    FUN_4a07e900(uVar4,*(undefined4 *)(param_1 + 0x3f0),0x51,uVar5);
    uVar5 = FUN_4a078b6c(uVar4,0x24);
    FUN_4a07e900(uVar4,*(undefined4 *)(param_1 + 0x3f0),0x50,uVar5);
    FUN_4a0b74b0(*(undefined4 *)(param_1 + 0x3f0),0x2741);
    uVar4 = FUN_4a16588c();
    FUN_4a0b4608(uVar4,0);
    FUN_4a0b74b0(*(undefined4 *)(param_1 + 0x3f0),0x2740);
    uVar4 = FUN_4a16588c();
    FUN_4a0b4608(uVar4,0);
    FUN_4a0b74b0(*(undefined4 *)(param_1 + 0x3f0),0x2742);
    uVar4 = FUN_4a16588c();
    FUN_4a0b4608(uVar4,0);
    FUN_4a0b4c10(piVar2,*(undefined4 *)(param_1 + 0x3f0));
    FUN_4a077aa8(*(undefined4 *)(param_1 + 0x3f0));
    FUN_4a0b4c10(piVar2,*(undefined4 *)(param_1 + 0x3ec));
    FUN_4a077aa8(*(undefined4 *)(param_1 + 0x3ec));
    thunk_FUN_4a161570(0x48);
    piVar3 = (int *)FUN_4a0b8a1c();
    *(int **)(param_1 + 0x3f8) = piVar3;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0xc))();
    }
    FUN_4a16b934(auStack_44,3);
    FUN_4a16b934(auStack_58,3);
    FUN_4a16b934(auStack_6c,3);
    uVar4 = FUN_4a16b8dc(auStack_30,auStack_44);
    FUN_4a0b74b0(*(undefined4 *)(param_1 + 0x3ec),0x2728);
    uVar5 = FUN_4a16588c();
    FUN_4a13935c(uVar5,uVar4);
    FUN_4a16ba04(auStack_30);
    uVar4 = FUN_4a16b8dc(auStack_30,auStack_58);
    FUN_4a0b74b0(*(undefined4 *)(param_1 + 0x3ec),0x2729);
    uVar5 = FUN_4a16588c();
    FUN_4a13935c(uVar5,uVar4);
    FUN_4a16ba04(auStack_30);
    uVar4 = FUN_4a16b8dc(auStack_30,auStack_6c);
    FUN_4a0b74b0(*(undefined4 *)(param_1 + 0x3ec),0x272a);
    uVar5 = FUN_4a16588c();
    FUN_4a13935c(uVar5,uVar4);
    FUN_4a16ba04(auStack_30);
    FUN_4a16b934(auStack_80,3);
    FUN_4a16b934(auStack_94,3);
    if (local_38 == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = *(undefined4 **)(local_38 + 8);
    }
    if (local_4c == 0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = *(undefined4 **)(local_4c + 8);
    }
    uVar4 = FUN_4a1725c0(*puVar7,*puVar6);
    if (local_74 == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = *(undefined4 **)(local_74 + 8);
    }
    *puVar6 = uVar4;
    if (local_38 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(local_38 + 8);
    }
    if (local_4c == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(local_4c + 8);
    }
    uVar4 = FUN_4a1725c0(*(undefined4 *)(iVar9 + 4),*(undefined4 *)(iVar8 + 4));
    if (local_74 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(local_74 + 8);
    }
    *(undefined4 *)(iVar8 + 4) = uVar4;
    if (local_38 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(local_38 + 8);
    }
    if (local_4c == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(local_4c + 8);
    }
    uVar4 = FUN_4a1725c0(*(undefined4 *)(iVar9 + 8),*(undefined4 *)(iVar8 + 8));
    if (local_74 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(local_74 + 8);
    }
    *(undefined4 *)(iVar8 + 8) = uVar4;
    if (local_38 == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = *(undefined4 **)(local_38 + 8);
    }
    if (local_60 == 0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = *(undefined4 **)(local_60 + 8);
    }
    uVar4 = FUN_4a1725c0(*puVar7,*puVar6);
    if (local_88 == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = *(undefined4 **)(local_88 + 8);
    }
    *puVar6 = uVar4;
    if (local_38 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(local_38 + 8);
    }
    if (local_60 == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(local_60 + 8);
    }
    uVar4 = FUN_4a1725c0(*(undefined4 *)(iVar9 + 4),*(undefined4 *)(iVar8 + 4));
    if (local_88 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(local_88 + 8);
    }
    *(undefined4 *)(iVar8 + 4) = uVar4;
    if (local_38 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(local_38 + 8);
    }
    if (local_60 == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(local_60 + 8);
    }
    uVar4 = FUN_4a1725c0(*(undefined4 *)(iVar9 + 8),*(undefined4 *)(iVar8 + 8));
    if (local_88 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(local_88 + 8);
    }
    *(undefined4 *)(iVar8 + 8) = uVar4;
    FUN_4a16b934(auStack_a8,3);
    if (local_88 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(local_88 + 8);
    }
    if (local_74 == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(local_74 + 8);
    }
    uVar4 = FUN_4a17211c(*(undefined4 *)(iVar9 + 8),*(undefined4 *)(iVar8 + 4));
    if (local_88 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(local_88 + 8);
    }
    if (local_74 == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(local_74 + 8);
    }
    uVar5 = FUN_4a17211c(*(undefined4 *)(iVar9 + 4),*(undefined4 *)(iVar8 + 8));
    uVar4 = FUN_4a1725c0(uVar5,uVar4);
    if (local_9c == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = *(undefined4 **)(local_9c + 8);
    }
    *puVar6 = uVar4;
    if (local_88 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(local_88 + 8);
    }
    if (local_74 == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = *(undefined4 **)(local_74 + 8);
    }
    uVar4 = FUN_4a17211c(*puVar6,*(undefined4 *)(iVar8 + 8));
    if (local_88 == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = *(undefined4 **)(local_88 + 8);
    }
    if (local_74 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(local_74 + 8);
    }
    uVar5 = FUN_4a17211c(*(undefined4 *)(iVar8 + 8),*puVar6);
    uVar4 = FUN_4a1725c0(uVar5,uVar4);
    if (local_9c == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(local_9c + 8);
    }
    *(undefined4 *)(iVar8 + 4) = uVar4;
    if (local_88 == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = *(undefined4 **)(local_88 + 8);
    }
    if (local_74 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(local_74 + 8);
    }
    uVar4 = FUN_4a17211c(*(undefined4 *)(iVar8 + 4),*puVar6);
    if (local_88 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(local_88 + 8);
    }
    if (local_74 == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = *(undefined4 **)(local_74 + 8);
    }
    uVar5 = FUN_4a17211c(*puVar6,*(undefined4 *)(iVar8 + 4));
    uVar4 = FUN_4a1725c0(uVar5,uVar4);
    if (local_9c == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(local_9c + 8);
    }
    *(undefined4 *)(iVar8 + 8) = uVar4;
    if (local_9c != 0) {
      iVar8 = *(int *)(local_9c + 8);
    }
    else {
      iVar8 = 0;
    }
    if (local_9c != 0) {
      iVar9 = *(int *)(local_9c + 8);
    }
    else {
      iVar9 = 0;
    }
    uVar4 = FUN_4a17211c(*(undefined4 *)(iVar9 + 8),*(undefined4 *)(iVar8 + 8));
    if (local_9c != 0) {
      iVar8 = *(int *)(local_9c + 8);
    }
    else {
      iVar8 = 0;
    }
    if (local_9c != 0) {
      iVar9 = *(int *)(local_9c + 8);
    }
    else {
      iVar9 = 0;
    }
    uVar5 = FUN_4a17211c(*(undefined4 *)(iVar9 + 4),*(undefined4 *)(iVar8 + 4));
    if (local_9c != 0) {
      puVar6 = *(undefined4 **)(local_9c + 8);
    }
    else {
      puVar6 = (undefined4 *)0x0;
    }
    if (local_9c != 0) {
      puVar7 = *(undefined4 **)(local_9c + 8);
    }
    else {
      puVar7 = (undefined4 *)0x0;
    }
    uVar13 = FUN_4a17211c(*puVar7,*puVar6);
    uVar5 = FUN_4a171a94(uVar13,uVar5);
    FUN_4a171a94(uVar5,uVar4);
    uVar4 = FUN_4a002b60();
    uVar4 = FUN_4a171bb8(0x3f800000,uVar4);
    if (local_9c == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = *(undefined4 **)(local_9c + 8);
    }
    uVar5 = FUN_4a17211c(*puVar6,uVar4);
    *puVar6 = uVar5;
    if (local_9c == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(local_9c + 8);
    }
    uVar5 = FUN_4a17211c(*(undefined4 *)(iVar8 + 4),uVar4);
    *(undefined4 *)(iVar8 + 4) = uVar5;
    if (local_9c == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(local_9c + 8);
    }
    uVar4 = FUN_4a17211c(*(undefined4 *)(iVar8 + 8),uVar4);
    *(undefined4 *)(iVar8 + 8) = uVar4;
    bVar14 = local_38 != 0;
    if (bVar14) {
      iVar8 = *(int *)(local_38 + 8);
    }
    else {
      iVar8 = 0;
    }
    uStack_b0 = *(undefined4 *)(iVar8 + 8);
    if (bVar14) {
      iVar8 = *(int *)(local_38 + 8);
    }
    else {
      iVar8 = 0;
    }
    uStack_b4 = *(undefined4 *)(iVar8 + 4);
    if (bVar14) {
      puVar6 = *(undefined4 **)(local_38 + 8);
    }
    else {
      puVar6 = (undefined4 *)0x0;
    }
    local_b8 = *puVar6;
    bVar14 = local_9c != 0;
    if (bVar14) {
      iVar8 = *(int *)(local_9c + 8);
    }
    else {
      iVar8 = 0;
    }
    if (bVar14) {
      iVar9 = *(int *)(local_9c + 8);
    }
    else {
      iVar9 = 0;
    }
    if (bVar14) {
      puVar6 = *(undefined4 **)(local_9c + 8);
    }
    else {
      puVar6 = (undefined4 *)0x0;
    }
    FUN_4a0818f0(*(undefined4 *)(param_1 + 0x3f8),*puVar6,*(undefined4 *)(iVar9 + 4),
                 *(undefined4 *)(iVar8 + 8));
    FUN_4a16ba04(auStack_a8);
    FUN_4a16ba04(auStack_94);
    FUN_4a16ba04(auStack_80);
    FUN_4a16ba04(auStack_6c);
    FUN_4a16ba04(auStack_58);
    FUN_4a16ba04(auStack_44);
    FUN_4a0cad1c(*(undefined4 *)(param_1 + 0xd60),*(undefined4 *)(param_1 + 0xd64));
    iVar8 = FUN_4a141abc(*(undefined4 *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0xd68) = 0;
    if (iVar8 == 0) {
      uVar4 = 0x6f;
    }
    else {
      uVar4 = 8;
    }
    FUN_4a06f95c(*(undefined4 *)(*(int *)(param_1 + 0xd60) + 0x34),uVar4,0x10);
    FUN_4a06f95c(*(undefined4 *)(*(int *)(param_1 + 0xd64) + 0x34),uVar4,0x10);
    *(int **)(param_1 + 1000) = piVar2;
  }
  iVar8 = *(int *)(param_1 + 0x1b8);
  bVar14 = iVar8 == 0xc;
  bVar15 = iVar8 == 0x23;
  bVar16 = iVar8 == 0x12;
  bVar17 = iVar8 == 0x25;
  bVar18 = iVar8 == 0x26;
  bVar19 = iVar8 == 0xe;
  piVar2 = &local_b8;
  if (((((bVar14 || bVar15) || bVar16) || bVar17) || bVar18) || bVar19) {
    piVar2 = (int *)&stack0xffffffe4;
  }
  if (((((bVar14 || bVar15) || bVar16) || bVar17) || bVar18) || bVar19) {
    param_1 = *piVar2;
    puVar12 = (undefined4 *)piVar2[2];
    piVar2 = piVar2 + 7;
  }
  if (((((bVar14 || bVar15) || bVar16) || bVar17) || bVar18) || bVar19) {
    return;
  }
  piVar3 = (int *)(param_1 + 0xd70);
  piVar11 = (int *)(param_1 + 0xda4);
  *(byte *)(param_1 + 0x44a) = *(byte *)(*(int *)(param_1 + 0x20) + 0x495) ^ 1;
  *(undefined4 **)(param_1 + 0xd70) = puVar12;
  iVar8 = 6;
  *(undefined4 **)(param_1 + 0xda4) = puVar12;
  do {
    piVar3[1] = (int)puVar12;
    piVar11[1] = (int)puVar12;
    piVar3 = piVar3 + 2;
    *piVar3 = (int)puVar12;
    iVar8 = iVar8 + -1;
    piVar11 = piVar11 + 2;
    *piVar11 = (int)puVar12;
  } while (iVar8 != 0);
  if (*(int *)PTR_DAT_4a133b0c != 0) {
    *(undefined4 *)(param_1 + 0xdb8) = 0xd;
    *(undefined4 **)(param_1 + 0xd84) = puVar12;
  }
  *(undefined4 **)(param_1 + 0xe20) = puVar12;
  *(undefined4 **)(param_1 + 0xe24) = puVar12;
  *(undefined4 **)(param_1 + 0xe28) = puVar12;
  if (*(char *)(param_1 + 0x448) == '\0') {
    if (*(char *)(param_1 + 0x449) == '\0') {
      FUN_4a0fd058(*(undefined4 *)(param_1 + 0x20));
      FUN_4a0fb524(*(undefined4 *)(param_1 + 0x20),0);
      goto LAB_4a1336e4;
    }
  }
  else {
LAB_4a1336e4:
    if (*(char *)(param_1 + 0x449) == '\0') goto LAB_4a13376c;
  }
  uVar4 = FUN_4a140fd0(*(undefined4 *)(param_1 + 0x24),0,0xb);
  uVar5 = FUN_4a141668(*(undefined4 *)(param_1 + 0x24),0,0xb);
  uVar10 = FUN_4a143c90(*(undefined4 *)(param_1 + 0x28),uVar5,uVar4);
  if ((uVar10 & 1) != 0) {
    FUN_4a0deaec(*(undefined4 *)(param_1 + 0x24),2,0);
    FUN_4a0deaec(*(undefined4 *)(param_1 + 0x24),3,0);
  }
  if ((uVar10 & 0x18) != 0) {
    FUN_4a0deaec(*(undefined4 *)(param_1 + 0x24),1,0);
  }
LAB_4a13376c:
  puVar6 = (undefined4 *)(param_1 + 0xdd8);
  iVar8 = 6;
  *(undefined4 *)(param_1 + 0xdd8) = 0xffffffff;
  do {
    puVar6[1] = 0xffffffff;
    iVar8 = iVar8 + -1;
    puVar6 = puVar6 + 2;
    *puVar6 = 0xffffffff;
  } while (iVar8 != 0);
  iVar8 = 0;
  do {
    iVar9 = FUN_4a141170(*(undefined4 *)(param_1 + 0x24),0,iVar8);
    if (iVar9 == -1 || iVar8 == 0) {
      uVar4 = FUN_4a140fd0(*(undefined4 *)(param_1 + 0x24),0,iVar8);
      *(undefined4 *)(param_1 + iVar8 * 4 + 0xdd8) = uVar4;
      iVar9 = FUN_4a0de09c(iVar8);
      if (iVar9 != -1) {
        uVar4 = FUN_4a140fd0(*(undefined4 *)(param_1 + 0x24),0,iVar9);
        *(undefined4 *)(param_1 + iVar9 * 4 + 0xdd8) = uVar4;
      }
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0xd);
  FUN_4a12b028(param_1);
  FUN_4a0cad1c(*(undefined4 *)(param_1 + 0xd60),*(undefined4 *)(param_1 + 0xd64));
  uVar4 = FUN_4a0cf540(param_1,1);
  FUN_4a0d297c(uVar4,0xffffffff);
  uVar4 = FUN_4a0cf540(param_1,2);
  FUN_4a0d297c(uVar4,0xffffffff);
  uVar4 = FUN_4a16b8dc(piVar2 + 0x22,param_1 + 0x1f0);
  FUN_4a0b74b0(*(undefined4 *)(param_1 + 0x3ec),0x2725);
  uVar5 = FUN_4a16588c();
  FUN_4a13935c(uVar5,uVar4);
  FUN_4a16ba04(piVar2 + 0x22);
  puVar6 = puVar12;
  if (*(int *)(param_1 + 0x1fc) != 0) {
    puVar6 = *(undefined4 **)(*(int *)(param_1 + 0x1fc) + 8);
  }
  FUN_4a084b60(param_1 + 0x704,*puVar6);
  puVar6 = puVar12;
  if (*(int *)(param_1 + 0x1fc) != 0) {
    puVar6 = *(undefined4 **)(*(int *)(param_1 + 0x1fc) + 8);
  }
  FUN_4a084b60(param_1 + 0x778,puVar6[1]);
  puVar6 = puVar12;
  if (*(int *)(param_1 + 0x1fc) != 0) {
    puVar6 = *(undefined4 **)(*(int *)(param_1 + 0x1fc) + 8);
  }
  FUN_4a084b60(param_1 + 0x7ec,puVar6[2]);
  FUN_4a084b60(param_1 + 0x860,0);
  if (*(int *)(param_1 + 0x3f0) != 0) {
    FUN_4a0af058(*(int *)(param_1 + 0x3f0),*(undefined4 *)(param_1 + 0x3f8));
  }
  uVar4 = FUN_4a16b8dc(piVar2 + 0x22,param_1 + 0x1f0);
  FUN_4a0b74b0(*(undefined4 *)(param_1 + 0x3ec),0x271c);
  uVar5 = FUN_4a16588c();
  FUN_4a13935c(uVar5,uVar4);
  FUN_4a16ba04(piVar2 + 0x22);
  puVar6 = puVar12;
  if (*(int *)(param_1 + 0x1fc) != 0) {
    puVar6 = *(undefined4 **)(*(int *)(param_1 + 0x1fc) + 8);
  }
  FUN_4a084b60(param_1 + 0x5a8,*puVar6);
  puVar6 = puVar12;
  if (*(int *)(param_1 + 0x1fc) != 0) {
    puVar6 = *(undefined4 **)(*(int *)(param_1 + 0x1fc) + 8);
  }
  FUN_4a084b60(param_1 + 0x61c,puVar6[1]);
  puVar6 = puVar12;
  if (*(int *)(param_1 + 0x1fc) != 0) {
    puVar6 = *(undefined4 **)(*(int *)(param_1 + 0x1fc) + 8);
  }
  FUN_4a084b60(param_1 + 0x690,puVar6[2]);
  uVar4 = FUN_4a16b8dc(piVar2 + 0x22,param_1 + 0x1f0);
  FUN_4a0b74b0(*(undefined4 *)(param_1 + 0x3ec),0x2711);
  uVar5 = FUN_4a16588c();
  FUN_4a13935c(uVar5,uVar4);
  FUN_4a16ba04(piVar2 + 0x22);
  puVar6 = puVar12;
  if (*(int *)(param_1 + 0x1fc) != 0) {
    puVar6 = *(undefined4 **)(*(int *)(param_1 + 0x1fc) + 8);
  }
  FUN_4a084b60(param_1 + 0x44c,*puVar6);
  puVar6 = puVar12;
  if (*(int *)(param_1 + 0x1fc) != 0) {
    puVar6 = *(undefined4 **)(*(int *)(param_1 + 0x1fc) + 8);
  }
  FUN_4a084b60(param_1 + 0x4c0,puVar6[1]);
  puVar6 = puVar12;
  if (*(int *)(param_1 + 0x1fc) != 0) {
    puVar6 = *(undefined4 **)(*(int *)(param_1 + 0x1fc) + 8);
  }
  FUN_4a084b60(param_1 + 0x534,puVar6[2]);
  FUN_4a084b60(param_1 + 0xce8,0);
  FUN_4a084b60(param_1 + 0x8d4,0);
  FUN_4a084b60(param_1 + 0x948,0);
  FUN_4a084b60(param_1 + 0x9bc,0);
  FUN_4a084b60(param_1 + 0xa30,0);
  FUN_4a084b60(param_1 + 0xaa4,0);
  FUN_4a084b60(param_1 + 0xb18,0);
  FUN_4a084b60(param_1 + 0xb8c,0);
  FUN_4a084b60(param_1 + 0xc00,0);
  FUN_4a084b60(param_1 + 0xc74,0);
  iVar8 = FUN_4a141abc(*(undefined4 *)(param_1 + 0x24),0);
  *(undefined4 **)(param_1 + 0xd68) = puVar12;
  if (iVar8 == 0) {
    uVar4 = 0x6f;
  }
  else {
    uVar4 = 8;
  }
  FUN_4a06f95c(*(undefined4 *)(*(int *)(param_1 + 0xd60) + 0x34),uVar4,0x10);
  FUN_4a06f95c(*(undefined4 *)(*(int *)(param_1 + 0xd64) + 0x34),uVar4,0x10);
  return;
}



// Address: 4a133b10

undefined4 FUN_4a133b10(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_r1;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_38 [20];
  
  iVar1 = *(int *)(param_1 + 0xe18);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
  }
  iVar8 = 0;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  iVar2 = iVar2 + param_2 * 0x14;
  iVar1 = FUN_4a140fd0(*(undefined4 *)(param_1 + 0x24),0,param_2);
  iVar3 = FUN_4a16bdcc(auStack_38,iVar2);
  uVar6 = *(uint *)(iVar3 + 8);
  uVar7 = 0;
  if ((int)uVar6 < 1) {
    uVar9 = 0;
  }
  else {
    uVar9 = uVar6 & 1;
  }
  if (uVar9 != 0) {
    do {
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(iVar3 + 0xc) + 8);
      }
      if (*(int *)(iVar5 + uVar7 * 4) == iVar1) goto LAB_4a133c08;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)uVar9);
  }
  if ((int)uVar9 < (int)uVar6) {
    iVar3 = *(int *)(iVar3 + 0xc);
    do {
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(iVar3 + 8);
      }
      uVar7 = uVar9;
      if (*(int *)(iVar5 + uVar9 * 4) == iVar1) goto LAB_4a133c08;
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(iVar3 + 8);
      }
      if (*(int *)(iVar5 + (uVar9 + 1) * 4) == iVar1) {
        uVar7 = uVar9 + 1;
        goto LAB_4a133c08;
      }
      uVar9 = uVar9 + 2;
    } while ((int)uVar9 < (int)uVar6);
  }
  uVar7 = 0xffffffff;
LAB_4a133c08:
  FUN_4a16bef4(auStack_38);
  FUN_4a0015f0(uVar7 + *(int *)(iVar2 + 8) + param_3);
  if (*(int *)(iVar2 + 0xc) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar2 + 0xc) + 8);
  }
  iVar2 = *(int *)(iVar2 + extraout_r1 * 4);
  if (iVar2 != iVar1) {
    FUN_4a0deaec(*(undefined4 *)(param_1 + 0x24),param_2,iVar2);
    if (param_2 == 0) {
      uVar7 = 0;
      do {
        uVar4 = FUN_4a140fd0(*(undefined4 *)(param_1 + 0x24),0,uVar7);
        *(undefined4 *)(param_1 + iVar1 * 0x34 + uVar7 * 4 + 0xd70) = uVar4;
        if ((1 < uVar7 && uVar7 != 3) && uVar7 != 4) {
          FUN_4a0deaec(*(undefined4 *)(param_1 + 0x24),uVar7,
                       *(undefined4 *)(param_1 + iVar2 * 0x34 + uVar7 * 4 + 0xd70));
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < 0xd);
    }
    else {
      iVar2 = FUN_4a0de09c(param_2);
      if (iVar2 != -1) {
        FUN_4a0deaec(*(undefined4 *)(param_1 + 0x24),iVar2,0);
      }
    }
    FUN_4a12b028(param_1);
    if (*(int *)(param_1 + 0xe18) != 0) {
      iVar8 = *(int *)(*(int *)(param_1 + 0xe18) + 8);
    }
    iVar1 = *(int *)(iVar8 + 0x44);
    iVar2 = FUN_4a140fd0(*(undefined4 *)(param_1 + 0x24),0,3);
    if (iVar1 <= iVar2) {
      FUN_4a0deaec(*(undefined4 *)(param_1 + 0x24),3,0);
    }
    return 1;
  }
  return 0;
}



// Address: 4a133d40

/* WARNING: Removing unreachable block (ram,0x4a041a44) */
/* WARNING: Removing unreachable block (ram,0x4a041a48) */
/* WARNING: Removing unreachable block (ram,0x4a041a4c) */
/* WARNING: Removing unreachable block (ram,0x4a041a50) */
/* WARNING: Removing unreachable block (ram,0x4a041a58) */
/* WARNING: Removing unreachable block (ram,0x4a041a6c) */
/* WARNING: Removing unreachable block (ram,0x4a041a74) */
/* WARNING: Removing unreachable block (ram,0x4a041a78) */
/* WARNING: Removing unreachable block (ram,0x4a041a7c) */
/* WARNING: Removing unreachable block (ram,0x4a150d90) */
/* WARNING: Removing unreachable block (ram,0x4a150da4) */
/* WARNING: Removing unreachable block (ram,0x4a150da8) */
/* WARNING: Removing unreachable block (ram,0x4a0004e8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a133d40(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  code *UNRECOVERED_JUMPTABLE;
  
  piVar2 = (int *)FUN_4a0fc26c(*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)PTR_DAT_4a133f60 = *(undefined4 *)PTR_DAT_4a133f5c;
  FUN_4a0a83a4(piVar2,param_2);
  FUN_4a0a8b14(piVar2,*(undefined4 *)(param_1 + 1000));
  (**(code **)(*piVar2 + 0x30))(piVar2);
  FUN_4a041910(1);
  puVar1 = PTR_DAT_4a133f64;
  FUN_4a0bbb28(*(undefined4 *)PTR_DAT_4a133f64);
  iVar3 = *(int *)(param_1 + 0x1ac);
  if (((((iVar3 == 0xc || iVar3 == 0x23) || iVar3 == 0xd) || iVar3 == 0x12) || iVar3 == 0x25) ||
      iVar3 == 0x26) {
    FUN_4a12e5f4(param_1,param_2);
  }
  else if (iVar3 == 0xe) {
    iVar3 = FUN_4a084be4(param_1 + 0xce8);
    if (DAT_4a133f68 < iVar3) {
      FUN_4a12e5f4(param_1,param_2);
    }
    FUN_4a12ccec(param_1,param_2);
  }
  else if (iVar3 == 0xf) {
    FUN_4a12b8bc(param_1,param_2);
  }
  else if (iVar3 == 0x10) {
    FUN_4a041910(1);
    FUN_4a12aad0(param_1,param_2);
    FUN_4a041910(0);
  }
  else if (iVar3 == 0x11) {
    iVar3 = *(int *)(param_1 + 0x20);
    iVar7 = iVar3 + 0x128;
    FUN_4a13caa0(iVar3);
    uVar4 = FUN_4a171fac();
    uVar4 = FUN_4a1725c0(uVar4,0x42400000);
    uVar5 = FUN_4a0cb6c4(param_1,2);
    uVar4 = FUN_4a171e1c(uVar4);
    FUN_4a0fa6e8(uVar5,iVar7,0x30,uVar4,1);
    FUN_4a13ca78(iVar3);
    uVar4 = FUN_4a171fac();
    uVar4 = FUN_4a1725c0(uVar4,0x42400000);
    FUN_4a13caa0(iVar3);
    uVar5 = FUN_4a171fac();
    uVar5 = FUN_4a1725c0(uVar5,0x42400000);
    uVar6 = FUN_4a0cb6c4(param_1,0x2000);
    uVar5 = FUN_4a171e1c(uVar5);
    uVar4 = FUN_4a171e1c(uVar4);
    FUN_4a0fa6e8(uVar6,iVar7,uVar4,uVar5,1);
    FUN_4a09f3a4(iVar7,param_2);
  }
  else if (iVar3 == 0x13) {
    FUN_4a12aad0(param_1,param_2);
  }
  FUN_4a0bbcb4(*(undefined4 *)puVar1);
  puVar1 = PTR_DAT_4a041a9c;
  iVar3 = 0;
  if (*(int *)PTR_DAT_4a041a9c != 0) {
    iVar3 = *(int *)(PTR_DAT_4a041a9c + 4);
  }
  if (*(int *)PTR_DAT_4a041a9c != 0 && iVar3 != 0) {
    *(undefined4 *)(PTR_DAT_4a041a9c + 0x28) = 0;
    iVar3 = *(int *)(PTR_DAT_4a041a9c + 0x38);
    if (*(int *)(PTR_DAT_4a041a9c + 0x1c) != 0) {
      *(int *)(puVar1 + 8) = *(int *)(PTR_DAT_4a041a9c + 0x34) + *(int *)(puVar1 + 0x3c);
      *(int *)(puVar1 + 0xc) = iVar3 + *(int *)(puVar1 + 0x40);
      FUN_4a150d7c(-(*(int *)(puVar1 + 0x14) + *(int *)(puVar1 + 0x3c) / 2),
                   -(*(int *)(puVar1 + 0x40) / 2));
      thunk_FUN_4a150140(0xc11);
      *(undefined4 *)(puVar1 + 0x24) = 1;
      FUN_4a1507ec(0,0,*(undefined4 *)(puVar1 + 0x34),*(undefined4 *)(puVar1 + 0x38));
      *(undefined4 *)(puVar1 + 0x24) = 0;
    }
    if (*(int *)(puVar1 + 0x20) != 0) {
      *(int *)(puVar1 + 8) = *(int *)(puVar1 + 0x34) + *(int *)(puVar1 + 0x3c);
      *(int *)(puVar1 + 0xc) = *(int *)(puVar1 + 0x38) + *(int *)(puVar1 + 0x40);
      FUN_4a150d7c((*(int *)(puVar1 + 0x10) + *(int *)(puVar1 + 0x18)) - *(int *)(puVar1 + 0x3c) / 2
                   ,-(*(int *)(puVar1 + 0x40) / 2));
      *(undefined4 *)(puVar1 + 0x24) = 1;
      thunk_FUN_4a150140(0xc11);
      FUN_4a1507ec(*(undefined4 *)(puVar1 + 0x34),0,*(undefined4 *)(puVar1 + 0x34),
                   *(undefined4 *)(puVar1 + 0x38));
      *(undefined4 *)(puVar1 + 0x24) = 0;
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a0419cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a133f6c

undefined4 * FUN_4a133f6c(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  puVar2 = (undefined4 *)FUN_4a0cf590();
  puVar1 = PTR_PTR_4a134378;
  *puVar2 = PTR_PTR_4a134378;
  puVar2[2] = puVar1 + 0x48;
  puVar2[4] = puVar1 + 0x68;
  puVar2[5] = puVar1 + 0x78;
  puVar2[6] = puVar1 + 0x88;
  puVar2[3] = puVar1 + 0x58;
  puVar2[1] = puVar1 + 0x38;
  puVar2[7] = puVar1 + 0x98;
  puVar2[0x6c] = 0xffffffff;
  puVar2[0x6b] = 0;
  puVar2[0x6d] = 0;
  puVar2[0x6e] = 0;
  puVar2[0x6f] = 0;
  puVar2[0x71] = 0xffffffff;
  puVar2[0x70] = 0;
  puVar2[0x72] = 0;
  iVar3 = FUN_4a16be24(puVar2 + 0x73,0);
  *(undefined4 *)(iVar3 + 0x14) = 0;
  *(undefined4 *)(iVar3 + 0x18) = 0;
  *(undefined4 *)(iVar3 + 0x1c) = 0;
  *(undefined4 *)(iVar3 + 0x20) = 0;
  iVar3 = FUN_4a16b934(iVar3 + 0x24,4);
  iVar3 = FUN_4a16b934(iVar3 + 0x14,4);
  *(undefined1 *)(iVar3 + 0x16) = 0;
  *(undefined4 *)(iVar3 + 0x18) = 0;
  *(undefined4 *)(iVar3 + 0x1c) = 0;
  *(undefined4 *)(iVar3 + 0x20) = 0;
  iVar3 = FUN_4a16be24(iVar3 + 0x24,0);
  puVar2 = (undefined4 *)FUN_4a0c6bc0(iVar3 + 0x14);
  puVar1 = PTR_PTR_4a13437c;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = puVar1;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  iVar3 = FUN_4a16be24(puVar2 + 0xd,1);
  iVar3 = FUN_4a099040(iVar3 + 0x14);
  *(undefined4 *)(iVar3 + 0x40) = 0;
  *(undefined4 *)(iVar3 + 0x44) = 0;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(iVar3 + 0x48);
  puVar1 = PTR_PTR_4a134380;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = puVar1;
  puVar2[5] = 0;
  puVar2[6] = 0;
  iVar3 = FUN_4a084f54(puVar2 + 7,0,0x447a0000);
  *(undefined4 *)(iVar3 + 0x74) = 0;
  *(undefined4 *)(iVar3 + 0x78) = 0;
  iVar3 = FUN_4a084f54(iVar3 + 0x7c,0,0x447a0000);
  *(undefined4 *)(iVar3 + 0x74) = 0;
  *(undefined4 *)(iVar3 + 0x78) = 0;
  *(undefined4 *)(iVar3 + 0x7c) = 0;
  *(undefined4 *)(iVar3 + 0x80) = 0;
  *(undefined4 *)(iVar3 + 0x84) = 0;
  *(undefined4 *)(iVar3 + 0x88) = 0;
  *(undefined4 *)(iVar3 + 0x8c) = 0;
  *(undefined4 *)(iVar3 + 0x90) = 0;
  *(undefined4 *)(iVar3 + 0x94) = 0;
  iVar3 = FUN_4a0b8a1c(iVar3 + 0x98);
  *(undefined4 *)(iVar3 + 0x48) = 0;
  *(undefined1 *)(iVar3 + 0x4c) = 0;
  *(undefined1 *)(iVar3 + 0x4d) = 0;
  *(undefined1 *)(iVar3 + 0x4e) = 0;
  iVar3 = FUN_4a084f54(iVar3 + 0x50,0,0x44898000);
  iVar3 = FUN_4a084f54(iVar3 + 0x74,0,0x44898000);
  iVar3 = FUN_4a084f54(iVar3 + 0x74,0,0x44898000);
  iVar3 = FUN_4a084f54(iVar3 + 0x74,0,0x44898000);
  iVar3 = FUN_4a084f54(iVar3 + 0x74,0,0x44898000);
  iVar3 = FUN_4a084f54(iVar3 + 0x74,0,0x44898000);
  iVar3 = FUN_4a084f54(iVar3 + 0x74,0,0x44898000);
  iVar3 = FUN_4a084f54(iVar3 + 0x74,0,0x44898000);
  iVar3 = FUN_4a084f54(iVar3 + 0x74,0,0x44898000);
  iVar3 = FUN_4a084f54(iVar3 + 0x74,0,0x44898000);
  iVar3 = FUN_4a084f54(iVar3 + 0x74,0,0x43160000);
  iVar3 = FUN_4a084f54(iVar3 + 0x74,0,0x43160000);
  iVar3 = FUN_4a084f54(iVar3 + 0x74,0,0x43160000);
  iVar3 = FUN_4a084f54(iVar3 + 0x74,0,0x43160000);
  iVar3 = FUN_4a084f54(iVar3 + 0x74,0,0x43160000);
  iVar3 = FUN_4a084f54(iVar3 + 0x74,0,0x43160000);
  iVar3 = FUN_4a084f54(iVar3 + 0x74,0,0x43160000);
  iVar3 = FUN_4a084f54(iVar3 + 0x74,0,0x43160000);
  iVar3 = FUN_4a084f54(iVar3 + 0x74,0,0x43160000);
  iVar3 = FUN_4a084f54(iVar3 + 0x74,0,0x43160000);
  *(undefined4 *)(iVar3 + 0x74) = 0;
  *(undefined4 *)(iVar3 + 0x78) = 0;
  *(undefined4 *)(iVar3 + 0x7c) = 0;
  *(undefined4 *)(iVar3 + 0x80) = 0;
  *(undefined1 *)(iVar3 + 0x84) = 0;
  *(undefined1 *)(iVar3 + 0x85) = 0;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(iVar3 + 0x124);
  puVar1 = PTR_PTR_4a134384;
  puVar2[2] = 0;
  *puVar2 = puVar1;
  puVar2[3] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  FUN_4a0fb754(param_2,DAT_4a134388);
  thunk_FUN_4a161570(0x6c);
  uVar4 = FUN_4a06f504();
  puVar2[-0x30b] = uVar4;
  FUN_4a0cb72c(puVar2 + -899,uVar4);
  thunk_FUN_4a161570(0x40);
  piVar5 = (int *)FUN_4a099040();
  puVar2[-0x2e8] = piVar5;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))();
  }
  return puVar2 + -899;
}



// Address: 4a1343a4

int FUN_4a1343a4(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  puVar3 = PTR_PTR_4a134a0c;
  *param_1 = PTR_PTR_4a134a0c;
  param_1[2] = puVar3 + 0x48;
  param_1[4] = puVar3 + 0x68;
  param_1[5] = puVar3 + 0x78;
  param_1[6] = puVar3 + 0x88;
  param_1[3] = puVar3 + 0x58;
  param_1[1] = puVar3 + 0x38;
  param_1[7] = puVar3 + 0x98;
  piVar7 = (int *)param_1[0xfa];
  if (piVar7 != (int *)0x0) {
    iVar5 = (**(code **)(*piVar7 + 8))(piVar7);
    if (iVar5 != 0) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
    param_1[0xfa] = 0;
  }
  piVar7 = (int *)param_1[0x111];
  if (piVar7 != (int *)0x0) {
    iVar5 = (**(code **)(*piVar7 + 8))(piVar7);
    if (iVar5 != 0) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
    param_1[0x111] = 0;
  }
  piVar7 = (int *)param_1[0xfd];
  if (piVar7 != (int *)0x0) {
    iVar5 = (**(code **)(*piVar7 + 8))(piVar7);
    if (iVar5 != 0) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
    param_1[0xfd] = 0;
  }
  piVar7 = (int *)param_1[0x358];
  if (piVar7 != (int *)0x0) {
    iVar5 = (**(code **)(*piVar7 + 8))(piVar7);
    if (iVar5 != 0) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
    param_1[0x358] = 0;
  }
  piVar7 = (int *)param_1[0x359];
  if (piVar7 != (int *)0x0) {
    iVar5 = (**(code **)(*piVar7 + 8))(piVar7);
    if (iVar5 != 0) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
    param_1[0x359] = 0;
  }
  piVar7 = (int *)param_1[0xfb];
  if (piVar7 != (int *)0x0) {
    iVar5 = (**(code **)(*piVar7 + 8))(piVar7);
    if (iVar5 != 0) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
    param_1[0xfb] = 0;
  }
  piVar7 = (int *)param_1[0xfc];
  if (piVar7 != (int *)0x0) {
    iVar5 = (**(code **)(*piVar7 + 8))(piVar7);
    if (iVar5 != 0) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
    param_1[0xfc] = 0;
  }
  piVar7 = (int *)param_1[0xfe];
  if (piVar7 != (int *)0x0) {
    iVar5 = (**(code **)(*piVar7 + 8))(piVar7);
    if (iVar5 != 0) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
    param_1[0xfe] = 0;
  }
  piVar7 = (int *)param_1[0x9b];
  if (piVar7 != (int *)0x0) {
    iVar5 = (**(code **)(*piVar7 + 8))(piVar7);
    if (iVar5 != 0) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
    param_1[0x9b] = 0;
  }
  piVar7 = (int *)param_1[0x97];
  if ((piVar7 != (int *)0x0) && (iVar5 = (**(code **)(*piVar7 + 8))(piVar7), iVar5 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  param_1[0x97] = 0;
  piVar7 = (int *)param_1[0x99];
  if ((piVar7 != (int *)0x0) && (iVar5 = (**(code **)(*piVar7 + 8))(piVar7), iVar5 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  param_1[0x99] = 0;
  piVar7 = (int *)param_1[0x98];
  if ((piVar7 != (int *)0x0) && (iVar5 = (**(code **)(*piVar7 + 8))(piVar7), iVar5 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  param_1[0x98] = 0;
  piVar7 = (int *)param_1[0x9a];
  if ((piVar7 != (int *)0x0) && (iVar5 = (**(code **)(*piVar7 + 8))(piVar7), iVar5 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  param_1[0x9a] = 0;
  piVar7 = (int *)param_1[0xb2];
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)((int)piVar7 + *(int *)(*piVar7 + -0xc));
  }
  if ((piVar7 != (int *)0x0) && (iVar5 = (**(code **)(*piVar7 + 8))(piVar7), iVar5 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  param_1[0xb2] = 0;
  piVar7 = (int *)param_1[0x357];
  if (piVar7 != (int *)0x0) {
    iVar5 = (**(code **)(*piVar7 + 8))(piVar7);
    if (iVar5 != 0) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
    param_1[0x357] = 0;
  }
  iVar5 = FUN_4a168e44(param_1 + 899);
  iVar5 = FUN_4a085184(iVar5 + -0x124);
  iVar5 = FUN_4a085184(iVar5 + -0x74);
  iVar5 = FUN_4a085184(iVar5 + -0x74);
  iVar5 = FUN_4a085184(iVar5 + -0x74);
  iVar5 = FUN_4a085184(iVar5 + -0x74);
  iVar5 = FUN_4a085184(iVar5 + -0x74);
  iVar5 = FUN_4a085184(iVar5 + -0x74);
  iVar5 = FUN_4a085184(iVar5 + -0x74);
  iVar5 = FUN_4a085184(iVar5 + -0x74);
  iVar5 = FUN_4a085184(iVar5 + -0x74);
  iVar5 = FUN_4a085184(iVar5 + -0x74);
  iVar5 = FUN_4a085184(iVar5 + -0x74);
  iVar5 = FUN_4a085184(iVar5 + -0x74);
  iVar5 = FUN_4a085184(iVar5 + -0x74);
  iVar5 = FUN_4a085184(iVar5 + -0x74);
  iVar5 = FUN_4a085184(iVar5 + -0x74);
  iVar5 = FUN_4a085184(iVar5 + -0x74);
  iVar5 = FUN_4a085184(iVar5 + -0x74);
  iVar5 = FUN_4a085184(iVar5 + -0x74);
  iVar5 = FUN_4a085184(iVar5 + -0x74);
  iVar5 = FUN_4a0c6bf4(iVar5 + -0x50);
  iVar5 = FUN_4a085184(iVar5 + -0x98);
  piVar7 = *(int **)(iVar5 + -4);
  if ((piVar7 != (int *)0x0) && (iVar6 = (**(code **)(*piVar7 + 8))(piVar7), iVar6 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  piVar7 = *(int **)(iVar5 + -8);
  if ((piVar7 != (int *)0x0) && (iVar6 = (**(code **)(*piVar7 + 8))(piVar7), iVar6 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  iVar5 = FUN_4a085184(iVar5 + -0x7c);
  piVar7 = *(int **)(iVar5 + -4);
  if ((piVar7 != (int *)0x0) && (iVar6 = (**(code **)(*piVar7 + 8))(piVar7), iVar6 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  piVar7 = *(int **)(iVar5 + -8);
  if ((piVar7 != (int *)0x0) && (iVar6 = (**(code **)(*piVar7 + 8))(piVar7), iVar6 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  iVar5 = FUN_4a16bc4c(iVar5 + -0x1c);
  piVar7 = *(int **)(iVar5 + -8);
  if ((piVar7 != (int *)0x0) && (iVar6 = (**(code **)(*piVar7 + 8))(piVar7), iVar6 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  iVar5 = FUN_4a0991a0(iVar5 + -0x48);
  iVar5 = FUN_4a16bef4(iVar5 + -0x14);
  iVar5 = FUN_4a169628(iVar5 + -0x34);
  iVar5 = FUN_4a16bef4(iVar5 + -0x14);
  iVar5 = FUN_4a16ba04(iVar5 + -0x24);
  iVar5 = FUN_4a16ba04(iVar5 + -0x14);
  iVar5 = FUN_4a16bef4(iVar5 + -0x24);
  puVar3 = PTR_PTR_4a0cff10;
  iVar6 = 0;
  *(undefined **)(iVar5 + -0x1cc) = PTR_PTR_4a0cff10;
  *(undefined **)(iVar5 + -0x1c4) = puVar3 + 0x44;
  *(undefined **)(iVar5 + -0x1bc) = puVar3 + 100;
  *(undefined **)(iVar5 + -0x1b8) = puVar3 + 0x74;
  *(undefined **)(iVar5 + -0x1b4) = puVar3 + 0x84;
  *(undefined **)(iVar5 + -0x1c0) = puVar3 + 0x54;
  *(undefined **)(iVar5 + -0x1c8) = puVar3 + 0x34;
  *(undefined **)(iVar5 + -0x1b0) = puVar3 + 0x94;
  if (0 < *(int *)(iVar5 + -0x178)) {
    do {
      piVar7 = *(int **)(*(int *)(iVar5 + -0x174) + iVar6 * 4);
      *(undefined4 *)(*(int *)(iVar5 + -0x174) + iVar6 * 4) = 0;
      if ((piVar7 != (int *)0x0) && (iVar2 = (**(code **)(*piVar7 + 8))(piVar7), iVar2 != 0)) {
        (**(code **)(*piVar7 + 4))(piVar7);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(iVar5 + -0x178));
  }
  *(undefined4 *)(iVar5 + -0x178) = 0;
  iVar5 = FUN_4a16bef4(iVar5 + -0x80);
  iVar5 = FUN_4a16bef4(iVar5 + -0x14);
  iVar5 = FUN_4a16bef4(iVar5 + -0x14);
  iVar5 = FUN_4a16bef4(iVar5 + -0x14);
  iVar5 = FUN_4a16bef4(iVar5 + -0x14);
  iVar5 = FUN_4a16bef4(iVar5 + -0x18);
  iVar5 = FUN_4a16bef4(iVar5 + -0x14);
  puVar3 = PTR_PTR_4a0cff14;
  *(undefined4 *)(iVar5 + -0x60) = PTR_PTR_4a0cff14;
  iVar6 = *(int *)(iVar5 + -0x58);
  piVar7 = *(int **)(iVar5 + -0x54);
  if (piVar7 != (int *)0x0) {
    iVar2 = piVar7[2];
    puVar3 = (undefined *)(uint)*(byte *)(piVar7 + 5);
  }
  else {
    iVar2 = 0;
  }
  *(undefined4 *)(iVar5 + -0x54) = 0;
  *(undefined4 *)(iVar5 + -0x58) = 0;
  if ((piVar7 == (int *)0x0) || (iVar4 = (**(code **)(*piVar7 + 8))(piVar7), iVar4 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar7 + 4))(piVar7);
    bVar1 = 1;
  }
  if (!(bool)(bVar1 & (piVar7 != (int *)0x0 && puVar3 != (undefined *)0x0))) {
    iVar2 = 0;
  }
  if (iVar2 != 0) {
    iVar4 = 0;
    if (0 < iVar6) {
      do {
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar6);
      if (iVar2 == 0) goto LAB_4a0cfdb8;
    }
    FUN_4a14f21c();
  }
LAB_4a0cfdb8:
  iVar5 = FUN_4a0c6bf4((undefined4 *)(iVar5 + -0x60));
  puVar3 = PTR_PTR_4a0cff18;
  *(undefined4 *)(iVar5 + -0x14) = PTR_PTR_4a0cff18;
  iVar6 = *(int *)(iVar5 + -0xc);
  piVar7 = *(int **)(iVar5 + -8);
  if (piVar7 != (int *)0x0) {
    iVar2 = piVar7[2];
    puVar3 = (undefined *)(uint)*(byte *)(piVar7 + 5);
  }
  else {
    iVar2 = 0;
  }
  *(undefined4 *)(iVar5 + -8) = 0;
  *(undefined4 *)(iVar5 + -0xc) = 0;
  if ((piVar7 == (int *)0x0) || (iVar4 = (**(code **)(*piVar7 + 8))(piVar7), iVar4 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar7 + 4))(piVar7);
    bVar1 = 1;
  }
  if (!(bool)(bVar1 & (piVar7 != (int *)0x0 && puVar3 != (undefined *)0x0))) {
    iVar2 = 0;
  }
  if (iVar2 != 0) {
    iVar4 = 0;
    if (0 < iVar6) {
      do {
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar6);
      if (iVar2 == 0) goto LAB_4a0cfe70;
    }
    FUN_4a14f21c();
  }
LAB_4a0cfe70:
  iVar5 = FUN_4a0c6bf4((undefined4 *)(iVar5 + -0x14));
  iVar6 = 0;
  *(undefined4 *)(iVar5 + -0x18) = PTR_PTR_4a0cff1c;
  if (0 < *(int *)(iVar5 + -8)) {
    do {
      piVar7 = *(int **)(*(int *)(iVar5 + -4) + iVar6 * 4);
      *(undefined4 *)(*(int *)(iVar5 + -4) + iVar6 * 4) = 0;
      if ((piVar7 != (int *)0x0) && (iVar2 = (**(code **)(*piVar7 + 8))(piVar7), iVar2 != 0)) {
        (**(code **)(*piVar7 + 4))(piVar7);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(iVar5 + -8));
  }
  *(undefined4 *)(iVar5 + -8) = 0;
  thunk_FUN_4a161530(*(undefined4 *)(iVar5 + -4));
  iVar5 = FUN_4a0c6bf4((undefined4 *)(iVar5 + -0x18));
  iVar5 = FUN_4a16bef4(iVar5 + -0x18);
  return iVar5 + -0x2c;
}



// Address: 4a134a10

bool FUN_4a134a10(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  return (param_2 - param_4) * (param_2 - param_4) + (param_1 - param_3) * (param_1 - param_3) <=
         param_5 * param_5;
}



// Address: 4a134a40

void FUN_4a134a40(int param_1)

{
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffffffe;
  return;
}



// Address: 4a134a50

bool FUN_4a134a50(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0x28) & param_2) != 0;
}



// Address: 4a134a60

undefined4 FUN_4a134a60(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  
  bVar4 = SBORROW4(param_1,param_3);
  iVar1 = param_1 - param_3;
  bVar3 = param_1 == param_3;
  if (param_3 <= param_1) {
    bVar4 = SBORROW4(param_2,param_4);
    iVar1 = param_2 - param_4;
    bVar3 = param_2 == param_4;
  }
  bVar2 = iVar1 < 0;
  if (bVar2 == bVar4) {
    param_3 = param_3 + param_5;
    bVar4 = SBORROW4(param_3,param_1);
    bVar2 = param_3 - param_1 < 0;
    bVar3 = param_3 == param_1;
  }
  if (!bVar3 && bVar2 == bVar4) {
    param_4 = param_4 + param_6;
    bVar4 = SBORROW4(param_4,param_2);
    bVar2 = param_4 - param_2 < 0;
    bVar3 = param_4 == param_2;
  }
  if (bVar3 || bVar2 != bVar4) {
    return 0;
  }
  return 1;
}



// Address: 4a134a98

void FUN_4a134a98(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x28) = param_2 | *(uint *)(param_1 + 0x28);
  return;
}



// Address: 4a134aa8

undefined4 FUN_4a134aa8(void)

{
  int iVar1;
  
  iVar1 = FUN_4a0ff494();
  return *(undefined4 *)(iVar1 + 0x54);
}



// Address: 4a134ac8

void FUN_4a134ac8(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_4a0c6bc0();
  puVar1 = PTR_PTR_4a134b28;
  *puVar2 = PTR_PTR_4a134b28;
  puVar2[4] = puVar1 + 0x50;
  puVar2[6] = puVar1 + 0x70;
  puVar2[7] = puVar1 + 0x80;
  puVar2[8] = puVar1 + 0x90;
  puVar2[5] = puVar1 + 0x60;
  puVar2[3] = puVar1 + 0x40;
  puVar2[2] = puVar1 + 0x30;
  puVar2[9] = puVar1 + 0xa0;
  puVar2[10] = 0;
  return;
}



// Address: 4a134b68

void FUN_4a134b68(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int local_18;
  
  uVar2 = *(uint *)(param_1 + 0x34);
  local_18 = param_4;
  if ((uVar2 & 1) == 0) {
    thunk_FUN_4a0eadb8(*(undefined4 *)(param_1 + 0x2c),param_2,*(undefined4 *)(param_1 + 0x18),
                       param_3);
  }
  else if ((uVar2 & DAT_4a134be8) != 0) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      local_18 = 0;
      if (((-1 < (int)(uVar2 << 0x12)) || (FUN_4a062528(param_1,&local_18), local_18 == 0)) &&
         (*(int *)(param_1 + 0x34) << 0x11 < 0)) {
        FUN_4a0624ec(param_1,&local_18);
      }
      iVar1 = local_18;
      if (local_18 != 0) {
        thunk_FUN_4a0eadb8(local_18,param_2,*(undefined1 *)(param_1 + 0x40),param_3);
        thunk_FUN_4a161530(iVar1);
        return;
      }
    }
    else {
      thunk_FUN_4a0eadb8(*(int *)(param_1 + 0x2c),param_2,*(undefined4 *)(param_1 + 0x18),param_3);
    }
    return;
  }
  return;
}



// Address: 4a134bfc

char FUN_4a134bfc(int param_1)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  byte bStack_17;
  
  puVar2 = PTR_DAT_4a134d68;
  iVar4 = param_1 + 0x18;
  if (*PTR_DAT_4a134d64 == '\0') {
    if (*(char *)(param_1 + 0x40) != '\0') {
      return *(char *)(param_1 + 0x40);
    }
    iVar4 = thunk_FUN_4a0e6898(iVar4);
    iVar3 = *(int *)(param_1 + 0x18);
    if (iVar3 == 0x24) {
      return '$';
    }
    if (iVar3 == 0x2e) {
      return '\x06';
    }
    if (iVar3 == 0x2f) {
      return '\x06';
    }
    if (iVar4 == 0x10) {
      return '\x16';
    }
    if (iVar4 == 0x100) {
      return '\x1c';
    }
    if (iVar4 == 0x80) {
      return '\x1d';
    }
    if (iVar4 == 0x40) {
      return '\x1e';
    }
    if (iVar4 == 0x20) {
      return '\x1f';
    }
    if (iVar4 != 0) {
      return '\x1c';
    }
    if ((iVar3 != 3) && (-1 < *(int *)(param_1 + 0x34) << 0x14)) {
      if (iVar3 == 8) {
        return '\b';
      }
      if (iVar3 == 6) {
        return '\x06';
      }
      return '\b';
    }
  }
  else {
    bStack_17 = (byte)((ushort)*(undefined2 *)(PTR_DAT_4a134d68 + *(int *)(param_1 + 0x18) * 6 + 4)
                      >> 8);
    if ((bStack_17 == '\x01') || (iVar3 = thunk_FUN_4a142154(param_1 + 0x10), iVar3 != 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    iVar3 = thunk_FUN_4a142b8c(param_1 + 0x10,0xff);
    if ((iVar3 != 0) &&
       (bStack_17 = (byte)((ushort)*(undefined2 *)(puVar2 + *(int *)(param_1 + 0x18) * 6 + 4) >> 8),
       1 < bStack_17)) {
      if (*(int *)(param_1 + 0x2c) == 0) {
        return '\x06';
      }
      iVar4 = thunk_FUN_4a0e6898(iVar4);
      if (iVar4 == 0x10) {
        return '$';
      }
      return '%';
    }
    if (bVar1) {
      if (*(int *)(param_1 + 0x2c) == 0) {
        return '\b';
      }
      iVar4 = thunk_FUN_4a0e6898(iVar4);
      if (iVar4 == 0x10) {
        return '\x16';
      }
      return '\x1c';
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      iVar4 = thunk_FUN_4a0e6898(iVar4);
      if (iVar4 != 0x10) {
        return '\x19';
      }
      return '\x13';
    }
  }
  return '\x03';
}



// Address: 4a134d6c

undefined4 FUN_4a134d6c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x7c);
}



// Address: 4a134d74

undefined4 FUN_4a134d74(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x80) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x80) + 8);
  }
  return *(undefined4 *)(iVar1 + param_2 * 4);
}



// Address: 4a134d88

undefined4 FUN_4a134d88(int param_1)

{
  return *(undefined4 *)(param_1 + 100);
}



// Address: 4a134d90

undefined4 FUN_4a134d90(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x68) + 8);
  }
  return *(undefined4 *)(iVar1 + param_2 * 4);
}



// Address: 4a134da4

uint FUN_4a134da4(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = 0;
  if (*(int *)(param_1 + 0x80) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x80) + 8);
  }
  uVar7 = *(uint *)(param_1 + 100);
  sVar1 = *(short *)(*(int *)(iVar2 + param_2 * 4) + 4);
  if ((int)uVar7 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = uVar7 & 1;
  }
  uVar4 = 0;
  if (uVar3 != 0) {
    iVar2 = *(int *)(param_1 + 0x68);
    do {
      iVar5 = iVar6;
      if (iVar2 != 0) {
        iVar5 = *(int *)(iVar2 + 8);
      }
      if (*(short *)(*(int *)(iVar5 + uVar4 * 4) + 4) == sVar1) {
        iVar5 = iVar6;
        if (iVar2 != 0) {
          iVar5 = *(int *)(iVar2 + 8);
        }
        if (*(char *)(*(int *)(iVar5 + uVar4 * 4) + 8) == '\t') {
          return uVar4;
        }
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)uVar3);
  }
  if ((int)uVar3 < (int)uVar7) {
    iVar2 = *(int *)(param_1 + 0x68);
    do {
      iVar5 = iVar6;
      if (iVar2 != 0) {
        iVar5 = *(int *)(iVar2 + 8);
      }
      if (*(short *)(*(int *)(iVar5 + uVar3 * 4) + 4) == sVar1) {
        iVar5 = iVar6;
        if (iVar2 != 0) {
          iVar5 = *(int *)(iVar2 + 8);
        }
        if (*(char *)(*(int *)(iVar5 + uVar3 * 4) + 8) == '\t') {
          return uVar3;
        }
      }
      iVar5 = iVar6;
      if (iVar2 != 0) {
        iVar5 = *(int *)(iVar2 + 8);
      }
      if (*(short *)(*(int *)(iVar5 + (uVar3 + 1) * 4) + 4) == sVar1) {
        iVar5 = iVar6;
        if (iVar2 != 0) {
          iVar5 = *(int *)(iVar2 + 8);
        }
        if (*(char *)(*(int *)(iVar5 + (uVar3 + 1) * 4) + 8) == '\t') {
          return uVar3 + 1;
        }
      }
      uVar3 = uVar3 + 2;
    } while ((int)uVar3 < (int)uVar7);
  }
  return 0xffffffff;
}



// Address: 4a134edc

undefined4 * FUN_4a134edc(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  thunk_FUN_4a161570(0x8c);
  puVar2 = (undefined4 *)FUN_4a0c6bc0();
  puVar1 = PTR_PTR_4a0cb510;
  *puVar2 = PTR_PTR_4a0cb510;
  puVar2[4] = puVar1 + 0x44;
  puVar2[6] = puVar1 + 100;
  puVar2[7] = puVar1 + 0x74;
  puVar2[8] = puVar1 + 0x84;
  puVar2[5] = puVar1 + 0x54;
  puVar2[3] = puVar1 + 0x34;
  puVar2[2] = puVar1 + 0x24;
  puVar2[9] = puVar1 + 0x94;
  puVar2[10] = 0;
  puVar2[0xb] = 0xffffffff;
  puVar2[0xc] = 0;
  puVar2[0xe] = 0xffffffff;
  puVar2[0xd] = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(puVar2 + 0x13);
  puVar1 = PTR_PTR_4a0cb514;
  puVar2[2] = 0;
  *puVar2 = puVar1;
  puVar2[3] = 0;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(puVar2 + 5);
  puVar2[2] = 0;
  *puVar2 = puVar1;
  puVar2[3] = 0;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(puVar2 + 5);
  puVar2[2] = 0;
  *puVar2 = puVar1;
  puVar2[3] = 0;
  puVar2[5] = 0;
  thunk_FUN_4a161570(0xe0);
  piVar3 = (int *)FUN_4a0b4e14();
  puVar2[-0x11] = piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
  }
  iVar4 = FUN_4a0ff494();
  uVar5 = thunk_FUN_4a161570(0x2c);
  uVar5 = FUN_4a06fa68(uVar5,iVar4 + 0x1f8);
  puVar2[-0x10] = uVar5;
  uVar5 = thunk_FUN_4a161570(0x2c);
  uVar5 = FUN_4a06fa68(uVar5,iVar4 + 0x1f8);
  puVar2[-0xd] = uVar5;
  return puVar2 + -0x1d;
}



// Address: 4a134ef0

undefined4 * FUN_4a134ef0(void)

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
  uVar2 = FUN_4a04d4d0(0,s_Model_4a134f08,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a134f10

void FUN_4a134f10(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a134f3c;
  return;
}



// Address: 4a134f40

undefined4 FUN_4a134f40(ushort *param_1)

{
  if (((param_1[2] == 0) && (param_1[3] == 0)) && (*param_1 == DAT_4a134f5c)) {
    return *(undefined4 *)(param_1 + 6);
  }
  return 0;
}



// Address: 4a134f80

void FUN_4a134f80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_4a02b1e8(param_2);
  FUN_4a13512c(param_1,uVar1,param_3);
  return;
}



// Address: 4a134f9c

int FUN_4a134f9c(int param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_3 == 0) {
    iVar3 = *(int *)(param_1 + 0x10);
    iVar5 = iVar3 + *(int *)(param_1 + 0x14) * 0x30;
    uVar4 = param_4 | 1;
    uVar2 = 0;
    iVar6 = param_1;
    for (; iVar1 = 0, iVar3 != iVar5; iVar3 = iVar3 + 0x30) {
      iVar1 = FUN_4a134ff8(param_1,param_2,*(undefined4 *)(iVar3 + 4),uVar4,param_5,iVar6,param_2,
                           uVar2,param_4);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
  }
  else {
    iVar1 = param_1;
    uVar4 = param_4;
    uVar2 = FUN_4a02b1e8(param_3);
    iVar1 = FUN_4a134ff8(param_1,param_2,uVar2,param_4,param_5,iVar1,param_2,param_3,uVar4);
  }
  return iVar1;
}



// Address: 4a134ff8

int FUN_4a134ff8(int param_1,int param_2,undefined4 param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  bool bVar7;
  
  bVar7 = true;
  if ((int)(param_4 << 0x1a) < 0) {
    bVar7 = *(int *)(*(int *)(*(int *)PTR_DAT_4a135124 + 100) + 4) != *(int *)(param_1 + 4);
    iVar1 = FUN_4a046d40(param_1);
    if (iVar1 != 0) {
      bVar7 = false;
    }
  }
  *(undefined4 *)PTR_DAT_4a135128 = 0;
  uVar2 = param_4 | 1;
  if ((bVar7) && (iVar1 = FUN_4a13512c(param_1,param_3,uVar2), iVar1 != 0)) {
    iVar3 = 0;
    for (uVar4 = 0; uVar4 < *(uint *)(iVar1 + 0x10); uVar4 = uVar4 + 1) {
      if (*(int *)(*(int *)(*(int *)(iVar1 + 0xc) + uVar4 * 4) + 4) == param_2) {
        iVar3 = *(int *)(*(int *)(iVar1 + 0xc) + uVar4 * 4);
        break;
      }
    }
    if ((iVar3 != 0) ||
       ((iVar3 = FUN_4a060870(iVar1,param_2), iVar3 != -1 &&
        (iVar3 = FUN_4a0608fc(iVar1,*(undefined4 *)(param_1 + 0xe0),iVar3,param_1), iVar3 != 0)))) {
      *(int *)PTR_DAT_4a135128 = param_1;
      return iVar3;
    }
  }
  if (-1 < (int)(param_4 << 0x1c)) {
    for (puVar5 = *(undefined4 **)(param_1 + 0x20);
        puVar5 < (undefined4 *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x24) * 4);
        puVar5 = puVar5 + 1) {
      iVar1 = FUN_4a134ff8(*puVar5,param_2,param_3,uVar2,0);
      if (iVar1 != 0) {
        *(undefined4 *)PTR_DAT_4a135128 = *puVar5;
        return iVar1;
      }
    }
  }
  if (param_5 != 0) {
    for (piVar6 = *(int **)(*(int *)PTR_DAT_4a135124 + 0x44);
        piVar6 < (int *)(*(int *)(*(int *)PTR_DAT_4a135124 + 0x44) +
                        *(int *)(*(int *)PTR_DAT_4a135124 + 0x48) * 4); piVar6 = piVar6 + 1) {
      iVar1 = *piVar6;
      if (iVar1 == param_1) {
        if ((int)(param_4 << 0x1a) < 0) {
          return 0;
        }
      }
      else if (((((*(uint *)(iVar1 + 0xc) & 1) != 0) && (-1 < (int)(param_4 << 0x1d))) ||
               ((int)(param_4 << 0x1e) < 0)) &&
              (iVar3 = FUN_4a134ff8(iVar1,param_2,param_3,uVar2,0), iVar3 != 0)) {
        *(int *)PTR_DAT_4a135128 = iVar1;
        return iVar3;
      }
    }
  }
  return 0;
}



// Address: 4a13512c

int FUN_4a13512c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = iVar1 + *(int *)(param_1 + 0x14) * 0x30;
  while( true ) {
    if (iVar1 == iVar2) {
      return 0;
    }
    if (*(int *)(iVar1 + 4) == param_2) break;
    iVar1 = iVar1 + 0x30;
  }
  return iVar1;
}



// Address: 4a13515c

undefined4 FUN_4a13515c(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_24 [12];
  int local_18;
  
  uVar1 = FUN_4a08db2c();
  FUN_4a1358e0(auStack_24,uVar1);
  iVar2 = 0;
  if (local_18 != 0) {
    iVar2 = *(int *)(local_18 + 8);
  }
  uVar1 = FUN_4a135b4c(uVar1,param_2,*(undefined4 *)(iVar2 + param_3 * 4));
  FUN_4a169628(auStack_24);
  return uVar1;
}



// Address: 4a1351bc

undefined4 FUN_4a1351bc(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 auStack_28 [12];
  int iStack_1c;
  
  if (-3 < (int)param_2) {
    iVar1 = FUN_4a08db2c();
    iVar2 = FUN_4a1357f8(iVar1,0);
    iVar8 = 0;
    if (*(int *)(iVar1 + 0x3c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(iVar1 + 0x3c) + 8);
    }
    iVar5 = *(int *)(iVar5 + ((int)(*(uint *)(iVar1 + 0x24) & param_2) >>
                             (*(uint *)(iVar1 + 0x28) & 0xff)) * 0x14 + 0xc);
    uVar3 = *(uint *)(iVar1 + 0x2c);
    iVar1 = 0;
    if (iVar5 != 0) {
      iVar1 = *(int *)(iVar5 + 8);
    }
    if (iVar5 == 0) {
      iVar1 = 0;
    }
    iVar1 = iVar1 + iVar2 * 0x14;
    puVar4 = (undefined4 *)FUN_4a0c6bc0(auStack_28);
    *puVar4 = PTR_PTR_4a135c1c;
    puVar4[2] = *(undefined4 *)(iVar1 + 8);
    piVar6 = *(int **)(iVar1 + 0xc);
    puVar4[3] = piVar6;
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0xc))();
    }
    *puVar4 = PTR_PTR_4a135c20;
    if (iStack_1c != 0) {
      iVar8 = *(int *)(iStack_1c + 8);
    }
    uVar7 = *(undefined4 *)(iVar8 + (uVar3 & param_2) * 4);
    FUN_4a169628(auStack_28);
    return uVar7;
  }
  iVar1 = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 8);
  }
  return *(undefined4 *)(iVar1 + (param_2 + 0xc) * 4);
}



// Address: 4a135204

void FUN_4a135204(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a135230;
  return;
}



// Address: 4a13523c

undefined4 * FUN_4a13523c(void)

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
  uVar2 = FUN_4a04d4d0(0,s_game_BGMusic_4a135254,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a135264

undefined4 FUN_4a135264(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xd4);
  if (((iVar1 == 0x80 || iVar1 == 0x7f) || iVar1 == 0x7e) &&
     (*(int *)(param_1 + 200) == 6 || *(int *)(param_1 + 200) == 5)) {
    return 1;
  }
  return 0;
}



// Address: 4a135294

undefined4 FUN_4a135294(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 auStack_60 [3];
  int iStack_54;
  undefined1 auStack_4c [20];
  undefined1 auStack_38 [8];
  int iStack_30;
  
  uVar1 = FUN_4a1460a4();
  iVar5 = *(int *)(param_1 + 0x44);
  iVar6 = *(int *)(param_1 + 0x4c);
  piVar7 = (int *)0x0;
  if (param_2 != 0) {
    iVar2 = FUN_4a146640(param_2,iVar5,iVar6,0);
    if (iVar2 == -1) {
      return 0;
    }
    FUN_4a16bdcc(auStack_60,PTR_DAT_4a1353f0);
    uVar3 = FUN_4a16bdcc(auStack_4c,auStack_60);
    FUN_4a14637c(param_2,uVar3,iVar2);
    FUN_4a16bef4(auStack_4c);
    piVar4 = piVar7;
    if (iStack_54 != 0) {
      piVar4 = *(int **)(iStack_54 + 8);
    }
    param_3 = *piVar4;
    if (iStack_54 != 0) {
      piVar7 = *(int **)(iStack_54 + 8);
    }
    param_4 = piVar7[1];
    FUN_4a16bef4(auStack_60);
  }
  auStack_60[0] = 0;
  FUN_4a0f7080(auStack_38,uVar1,iVar5,iVar6);
  if (iStack_30 < 1) {
    iVar5 = iVar5 - param_3;
    iVar6 = iVar6 - param_4;
    if (iVar5 <= -iVar5) {
      iVar5 = -iVar5;
    }
    if (iVar6 <= -iVar6) {
      iVar6 = -iVar6;
    }
    iVar2 = FUN_4a144a5c(uVar1,param_3,param_4);
    if ((iVar2 == 0) || (0x200000 < iVar5 + iVar6)) {
      FUN_4a16bef4(auStack_38);
      return 0;
    }
  }
  FUN_4a16bef4(auStack_38);
  return 1;
}



// Address: 4a1353fc

undefined4 FUN_4a1353fc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14c);
}



// Address: 4a135404

undefined4 FUN_4a135404(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((((((param_2 != param_1 && param_2 != 0) &&
         (iVar1 = FUN_4a146e94(*(undefined4 *)(param_1 + 0x20)), param_2 != iVar1)) &&
        ((iVar2 = FUN_4a146a9c(param_2), iVar2 != 0 || (iVar1 == 0)))) &&
       ((iVar1 = *(int *)(param_2 + 0xd4), (iVar1 != 0x80 && iVar1 != 0x7f) && iVar1 != 0x7e ||
        (*(int *)(param_2 + 200) != 6 && *(int *)(param_2 + 200) != 5)))) &&
      ((*(int *)(param_2 + 0x138) == -1 ||
       (iVar1 = FUN_4a146a9c(param_1), iVar1 == *(int *)(param_2 + 0x138))))) &&
     (iVar1 = FUN_4a1461c0(param_2,8), iVar1 == 0)) {
    iVar1 = FUN_4a1461c0(param_2,0x400);
    if (iVar1 != 0) {
      uVar3 = FUN_4a146a9c(param_1);
      uVar4 = FUN_4a145f8c(param_1);
      iVar1 = FUN_4a13fc4c(uVar4,uVar3,0xc);
      if (iVar1 == -1) {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}



// Address: 4a1354f4

bool FUN_4a1354f4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  iVar1 = FUN_4a145f8c();
  uVar2 = FUN_4a1460a4(param_1);
  uVar3 = FUN_4a146a9c(param_1);
  iVar4 = FUN_4a13fa14(iVar1,uVar3);
  if (iVar4 != -1) {
    uVar3 = FUN_4a146a9c(param_1);
    uVar3 = FUN_4a14039c(iVar1,uVar3);
    uVar5 = FUN_4a14076c(iVar1,iVar4,uVar3);
    if ((uVar5 & 1) != 0) {
      return true;
    }
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar5 = FUN_4a142f80(uVar2);
    if ((int)uVar5 < 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar5 & 1;
    }
    iVar4 = 0;
    if (uVar7 != 0) {
      do {
        iVar6 = FUN_4a143130(uVar2,iVar4);
        if (((*(uint *)(iVar6 + 0x10) & 2) != 0) && (iVar6 = FUN_4a140338(iVar1,iVar4), iVar6 != 0))
        {
          return true;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)uVar7);
    }
    for (; (int)uVar7 < (int)uVar5; uVar7 = uVar7 + 2) {
      iVar4 = FUN_4a143130(uVar2,uVar7);
      if (((*(uint *)(iVar4 + 0x10) & 2) != 0) && (iVar4 = FUN_4a140338(iVar1,uVar7), iVar4 != 0)) {
        return true;
      }
      iVar4 = FUN_4a143130(uVar2,uVar7 + 1);
      if (((*(uint *)(iVar4 + 0x10) & 2) != 0) &&
         (iVar4 = FUN_4a140338(iVar1,uVar7 + 1), iVar4 != 0)) {
        return true;
      }
    }
  }
  iVar6 = FUN_4a146a9c(param_1);
  iVar4 = 0;
  if (*(int *)(iVar1 + 0x484) != 0) {
    iVar4 = *(int *)(*(int *)(iVar1 + 0x484) + 8);
  }
  return (*(byte *)(iVar4 + iVar6) & 1) != 0;
}



// Address: 4a135654

uint FUN_4a135654(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_4a145f8c();
  uVar2 = FUN_4a13fb44(uVar1,*(undefined4 *)(param_1 + 0xd4));
  return (uVar2 & 4) >> 2;
}



// Address: 4a135678

undefined4 FUN_4a135678(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1);
  if ((iVar1 == 0) && (iVar1 = param_1[0x37], (iVar1 != 9 && iVar1 != 10) && iVar1 != 1)) {
    return 0;
  }
  return 1;
}



// Address: 4a1356c4

void FUN_4a1356c4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a1356f0;
  return;
}



// Address: 4a1356f4

bool FUN_4a1356f4(int param_1)

{
  return *(int *)(param_1 + 0xdc) == 0x1b;
}



// Address: 4a135720

void FUN_4a135720(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_4a134a60(param_2,param_3,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
               *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
  return;
}



// Address: 4a135760

void FUN_4a135760(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_4a02b1e8(param_2);
  FUN_4a13578c(param_1,uVar1,param_3,param_4 | 1);
  return;
}



// Address: 4a13578c

int FUN_4a13578c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 100) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 100) + 4);
  }
  piVar2 = *(int **)(param_1 + 0x44);
  iVar4 = param_1;
  uVar5 = param_4;
  while( true ) {
    if ((int *)(*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x48) * 4) <= piVar2) {
      return 0;
    }
    iVar1 = *piVar2;
    if (((*(int *)(iVar1 + 4) == iVar3) ||
        ((((*(uint *)(iVar1 + 0xc) & 1) != 0 && (-1 < (int)(param_4 << 0x1d))) ||
         ((int)(param_4 << 0x1e) < 0)))) &&
       (iVar1 = FUN_4a134f9c(iVar1,param_2,param_3,param_4 | 1,1,iVar4,param_2,param_3,uVar5),
       iVar1 != 0)) break;
    piVar2 = piVar2 + 1;
  }
  return iVar1;
}



// Address: 4a1357e6

void FUN_4a1357e6(int param_1,undefined4 param_2)

{
  FUN_4a135c66(param_1 + 0x44,param_2,1);
  return;
}



// Address: 4a1357f8

int FUN_4a1357f8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == (int *)0x0) {
    return *(int *)(param_1 + 0x20);
  }
  (**(code **)(*param_2 + 0xc))(param_2);
  iVar3 = *(int *)(param_1 + 0x14);
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      iVar1 = FUN_4a13e0a8(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4),param_2);
      if (iVar1 != 0) {
        if ((param_2 != (int *)0x0) && (iVar3 = (**(code **)(*param_2 + 8))(param_2), iVar3 != 0)) {
          (**(code **)(*param_2 + 4))(param_2);
        }
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  if ((param_2 != (int *)0x0) && (iVar2 = (**(code **)(*param_2 + 8))(param_2), iVar2 != 0)) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return -1;
}



// Address: 4a1358e0

void FUN_4a1358e0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  iVar1 = FUN_4a16951c(param_1,*(undefined4 *)(param_2 + 0x14));
  iVar3 = 0;
  if (*(int *)(iVar1 + 8) < 1) {
    return;
  }
  do {
    iVar2 = 0;
    if (*(int *)(iVar1 + 0xc) != 0) {
      iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 8);
    }
    piVar5 = (int *)(iVar2 + iVar3 * 4);
    piVar4 = *(int **)(*(int *)(param_2 + 0x18) + iVar3 * 4);
    if ((int *)*piVar5 != piVar4) {
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0xc))(piVar4);
      }
      piVar6 = (int *)*piVar5;
      if ((piVar6 != (int *)0x0) && (iVar2 = (**(code **)(*piVar6 + 8))(piVar6), iVar2 != 0)) {
        (**(code **)(*piVar6 + 4))(piVar6);
      }
      *piVar5 = (int)piVar4;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < *(int *)(iVar1 + 8));
  return;
}



// Address: 4a1359a8

int * FUN_4a1359a8(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if (param_3 == (int *)0x0) {
    param_3 = *(int **)(param_1 + 0x1c);
  }
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 0xc))();
  }
  piVar1 = (int *)FUN_4a0c3584(param_2,param_3);
  if (piVar1 == (int *)0x0) {
    if (param_3 == (int *)0x0) {
      return (int *)0x0;
    }
    iVar2 = (**(code **)(*param_3 + 8))(param_3);
  }
  else {
    (**(code **)(*piVar1 + 0xc))();
    uVar3 = thunk_FUN_4a161570(0x18);
    piVar4 = (int *)FUN_4a0c2adc(uVar3,piVar1);
    iVar2 = FUN_4a0c28bc();
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*piVar1 + 8))(piVar1);
      if (iVar2 != 0) {
        (**(code **)(*piVar1 + 4))(piVar1);
      }
      if ((param_3 != (int *)0x0) && (iVar2 = (**(code **)(*param_3 + 8))(param_3), iVar2 != 0)) {
        (**(code **)(*param_3 + 4))(param_3);
      }
      return piVar4;
    }
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    iVar2 = (**(code **)(*piVar1 + 8))(piVar1);
    if (iVar2 != 0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    if (param_3 == (int *)0x0) {
      return (int *)0x0;
    }
    iVar2 = (**(code **)(*param_3 + 8))(param_3);
  }
  if (iVar2 != 0) {
    (**(code **)(*param_3 + 4))(param_3);
  }
  return (int *)0x0;
}



// Address: 4a135b44

undefined4 FUN_4a135b44(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



// Address: 4a135b4c

undefined4 FUN_4a135b4c(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 auStack_28 [12];
  int local_1c;
  
  iVar1 = FUN_4a1357f8(param_1,param_3);
  iVar8 = 0;
  if (*(int *)(param_1 + 0x3c) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x3c) + 8);
  }
  iVar5 = *(int *)(iVar4 + ((int)(*(uint *)(param_1 + 0x24) & param_2) >>
                           (*(uint *)(param_1 + 0x28) & 0xff)) * 0x14 + 0xc);
  uVar2 = *(uint *)(param_1 + 0x2c);
  iVar4 = 0;
  if (iVar5 != 0) {
    iVar4 = *(int *)(iVar5 + 8);
  }
  if (iVar5 == 0) {
    iVar4 = 0;
  }
  iVar4 = iVar4 + iVar1 * 0x14;
  puVar3 = (undefined4 *)FUN_4a0c6bc0(auStack_28);
  *puVar3 = PTR_PTR_4a135c1c;
  puVar3[2] = *(undefined4 *)(iVar4 + 8);
  piVar6 = *(int **)(iVar4 + 0xc);
  puVar3[3] = piVar6;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))();
  }
  *puVar3 = PTR_PTR_4a135c20;
  if (local_1c != 0) {
    iVar8 = *(int *)(local_1c + 8);
  }
  uVar7 = *(undefined4 *)(iVar8 + (uVar2 & param_2) * 4);
  FUN_4a169628(auStack_28);
  return uVar7;
}



// Address: 4a135c2c

undefined4 FUN_4a135c2c(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// Address: 4a135c30

undefined4 FUN_4a135c30(int param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (((param_2 == (char *)0x0) || (*param_2 == '\0')) || (*(int *)(param_1 + 8) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = thunk_FUN_4a161570(4);
    uVar2 = FUN_4a1503f0(*(undefined4 *)(param_1 + 8),param_2);
    uVar1 = FUN_4a0a4aa2(uVar1,uVar2);
  }
  return uVar1;
}



// Address: 4a135c66

int FUN_4a135c66(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  while( true ) {
    piVar1 = (int *)FUN_4a135c90(param_1);
    if (piVar1 <= piVar2) {
      return 0;
    }
    if (*(int *)(*piVar2 + 4) == param_2) break;
    piVar2 = piVar2 + 1;
  }
  return *piVar2;
}



// Address: 4a135c90

int FUN_4a135c90(int *param_1)

{
  return *param_1 + param_1[1] * 4;
}



// Address: 4a135ca4

undefined4 * FUN_4a135ca4(void)

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
  uVar2 = FUN_4a04d4d0(0,s_MapObject_4a135cbc,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a135cc8

void FUN_4a135cc8(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  uVar5 = *(uint *)(param_2 + 0x20);
  iVar7 = (uint)((uVar5 & 7) != 0) + ((int)(uVar5 + ((uint)((int)uVar5 >> 0x1f) >> 0x1d)) >> 3);
  piVar2 = (int *)FUN_4a0c6bc0();
  puVar1 = PTR_PTR_4a135e08;
  piVar2[2] = 0;
  piVar2[3] = 0;
  *piVar2 = (int)puVar1;
  if (0 < iVar7) {
    iVar3 = FUN_4a15e080(iVar7);
    if (iVar3 == 0) {
      iVar3 = FUN_4a1669a8();
    }
    iVar6 = 0;
    do {
      *(undefined1 *)(iVar3 + iVar6) = 0;
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar7);
    thunk_FUN_4a161570(0x18);
    puVar4 = (undefined4 *)FUN_4a0c0628();
    puVar1 = PTR_PTR_4a135e0c;
    *puVar4 = PTR_PTR_4a135e0c;
    puVar4[2] = iVar3;
    puVar4[3] = 1;
    puVar4[4] = iVar7;
    *(undefined1 *)(puVar4 + 5) = 1;
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)(puVar1 + 0xc))(puVar4);
    }
    (**(code **)(*piVar2 + 0x1c))(piVar2);
    piVar2[3] = (int)puVar4;
    piVar2[2] = iVar7;
  }
  iVar3 = 0;
  if (0 < iVar7) {
    do {
      uVar5 = 0;
      iVar6 = 0;
      if (piVar2[3] != 0) {
        iVar6 = *(int *)(piVar2[3] + 8);
      }
      *(undefined1 *)(iVar6 + iVar3) = 0;
      do {
        iVar6 = FUN_4a13e940(param_2 + 4,uVar5 + iVar3 * 8);
        if (iVar6 != 0) {
          iVar6 = 0;
          if (piVar2[3] != 0) {
            iVar6 = *(int *)(piVar2[3] + 8);
          }
          *(byte *)(iVar6 + iVar3) = *(byte *)(iVar6 + iVar3) | (byte)(1 << (uVar5 & 0xff));
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < 8);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar7);
    return;
  }
  return;
}



// Address: 4a135e24

undefined * FUN_4a135e24(undefined4 param_1,int param_2)

{
  return PTR_s_bin_anim2d_bin_4a135e38 + param_2 * 0x3b;
}



// Address: 4a135e3c

undefined4 FUN_4a135e3c(undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 auStack_1a8 [236];
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 *local_b4;
  undefined1 *local_b0;
  undefined1 *local_ac;
  undefined1 auStack_a8 [128];
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  
  local_28 = (undefined1 *)0x0;
  local_24 = (undefined1 *)0x0;
  local_20 = (undefined1 *)0x0;
  puVar2 = (undefined1 *)FUN_4a15e080(8);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = (undefined1 *)FUN_4a1669a8();
  }
  local_20 = puVar2 + 8;
  local_ac = (undefined1 *)0x0;
  *puVar2 = 0;
  local_28 = puVar2;
  local_24 = puVar2;
  FUN_4a13e59c(param_2,auStack_a8);
  if (param_3 != 0) {
    iVar3 = thunk_FUN_4a001314(auStack_a8,&DAT_4a136110,4);
    if (iVar3 == 0) {
      uVar4 = thunk_FUN_4a0013e0(&DAT_4a136114);
      if ((uint)((int)local_24 - (int)local_28) < uVar4) {
        if (local_24 != local_28) {
          FUN_4a000eb8(local_28,&DAT_4a136114);
        }
        FUN_4a166340(&local_28,&DAT_4a136114 + ((int)local_24 - (int)local_28),&DAT_4a136114 + uVar4
                    );
      }
      else {
        if (uVar4 != 0) {
          FUN_4a000eb8(local_28,&DAT_4a136114,uVar4);
        }
        puVar2 = local_24;
        puVar8 = local_28 + uVar4;
        if (puVar8 != local_24) {
          FUN_4a000ec8(puVar8,local_24,1);
          local_24 = local_24 + -((int)puVar2 - (int)puVar8);
        }
      }
    }
    else {
      piVar6 = (int *)FUN_4a0bc374();
      iVar3 = thunk_FUN_4a0013e0(&DAT_4a136114);
      if ((piVar6[1] - *piVar6 == iVar3) &&
         (iVar3 = thunk_FUN_4a000e60(*piVar6,&DAT_4a136114,iVar3), iVar3 == 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        piVar6 = (int *)FUN_4a0bc374();
        iVar3 = thunk_FUN_4a0013e0(s_images__4a136118);
        local_b8 = 0;
        local_b4 = (undefined1 *)0x0;
        iVar9 = (piVar6[1] - *piVar6) + iVar3 + 1;
        local_b0 = (undefined1 *)0x0;
        local_ac = (undefined1 *)0x0;
        if (iVar9 == 0) {
          FUN_4a0bcbf4(PTR_s_basic_string_4a136120);
        }
        else {
          puVar2 = (undefined1 *)FUN_4a15e080(iVar9);
          if (puVar2 == (undefined1 *)0x0) {
            puVar2 = (undefined1 *)FUN_4a1669a8();
          }
          local_ac = puVar2 + iVar9;
          local_b4 = puVar2;
          local_b0 = puVar2;
        }
        local_bc = 0;
        *local_b0 = 0;
        FUN_4a166340(&local_b4,s_images__4a136118,s_images__4a136118 + iVar3);
        FUN_4a166148(&local_b4,piVar6);
        FUN_4a166148(&local_28,&local_b4);
        if (local_b4 != (undefined1 *)0x0) {
          FUN_4a14f21c();
        }
      }
    }
  }
  iVar3 = thunk_FUN_4a0013e0(auStack_a8);
  FUN_4a166340(&local_28,auStack_a8,auStack_a8 + iVar3);
  uVar5 = thunk_FUN_4a161570(0x14);
  piVar6 = (int *)FUN_4a0c707c(uVar5,local_28);
  FUN_4a00121c(auStack_1a8,0x100);
  FUN_4a13e59c(piVar6,auStack_1a8);
  uVar5 = thunk_FUN_4a161570(0x14);
  FUN_4a0c707c(uVar5,auStack_1a8);
  piVar7 = (int *)FUN_4a0c49e0();
  uVar5 = thunk_FUN_4a0c314c();
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))(piVar6);
  }
  if (local_28 != (undefined1 *)0x0) {
    FUN_4a14f21c();
  }
  return uVar5;
}



// Address: 4a136124

undefined4 FUN_4a136124(undefined4 param_1,int param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 auStack_1a8 [236];
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined1 *puStack_b4;
  undefined1 *puStack_b0;
  undefined1 *puStack_ac;
  undefined1 auStack_a8 [128];
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  uVar7 = thunk_FUN_4a161570(0x14);
  uVar7 = FUN_4a0c707c(uVar7,PTR_s_bin_anim2d_bin_4a136160 + param_2 * 0x3b);
  puStack_28 = (undefined1 *)0x0;
  puStack_24 = (undefined1 *)0x0;
  puStack_20 = (undefined1 *)0x0;
  puVar2 = (undefined1 *)FUN_4a15e080(8);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = (undefined1 *)FUN_4a1669a8();
  }
  puStack_20 = puVar2 + 8;
  puStack_ac = (undefined1 *)0x0;
  *puVar2 = 0;
  puStack_28 = puVar2;
  puStack_24 = puVar2;
  FUN_4a13e59c(uVar7,auStack_a8);
  iVar3 = thunk_FUN_4a001314(auStack_a8,&DAT_4a136110,4);
  if (iVar3 == 0) {
    uVar4 = thunk_FUN_4a0013e0(&DAT_4a136114);
    if ((uint)((int)puStack_24 - (int)puStack_28) < uVar4) {
      if (puStack_24 != puStack_28) {
        FUN_4a000eb8(puStack_28,&DAT_4a136114);
      }
      FUN_4a166340(&puStack_28,&DAT_4a136114 + ((int)puStack_24 - (int)puStack_28),
                   &DAT_4a136114 + uVar4);
    }
    else {
      if (uVar4 != 0) {
        FUN_4a000eb8(puStack_28,&DAT_4a136114,uVar4);
      }
      puVar2 = puStack_24;
      puVar8 = puStack_28 + uVar4;
      if (puVar8 != puStack_24) {
        FUN_4a000ec8(puVar8,puStack_24,1);
        puStack_24 = puStack_24 + -((int)puVar2 - (int)puVar8);
      }
    }
  }
  else {
    piVar5 = (int *)FUN_4a0bc374();
    iVar3 = thunk_FUN_4a0013e0(&DAT_4a136114);
    if ((piVar5[1] - *piVar5 == iVar3) &&
       (iVar3 = thunk_FUN_4a000e60(*piVar5,&DAT_4a136114,iVar3), iVar3 == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      piVar5 = (int *)FUN_4a0bc374();
      iVar3 = thunk_FUN_4a0013e0(s_images__4a136118);
      uStack_b8 = 0;
      puStack_b4 = (undefined1 *)0x0;
      iVar9 = (piVar5[1] - *piVar5) + iVar3 + 1;
      puStack_b0 = (undefined1 *)0x0;
      puStack_ac = (undefined1 *)0x0;
      if (iVar9 == 0) {
        FUN_4a0bcbf4(PTR_s_basic_string_4a136120);
      }
      else {
        puVar2 = (undefined1 *)FUN_4a15e080(iVar9);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = (undefined1 *)FUN_4a1669a8();
        }
        puStack_ac = puVar2 + iVar9;
        puStack_b4 = puVar2;
        puStack_b0 = puVar2;
      }
      uStack_bc = 0;
      *puStack_b0 = 0;
      FUN_4a166340(&puStack_b4,s_images__4a136118,s_images__4a136118 + iVar3);
      FUN_4a166148(&puStack_b4,piVar5);
      FUN_4a166148(&puStack_28,&puStack_b4);
      if (puStack_b4 != (undefined1 *)0x0) {
        FUN_4a14f21c();
      }
    }
  }
  iVar3 = thunk_FUN_4a0013e0(auStack_a8);
  FUN_4a166340(&puStack_28,auStack_a8,auStack_a8 + iVar3);
  uVar7 = thunk_FUN_4a161570(0x14);
  piVar5 = (int *)FUN_4a0c707c(uVar7,puStack_28);
  FUN_4a00121c(auStack_1a8,0x100);
  FUN_4a13e59c(piVar5,auStack_1a8);
  uVar7 = thunk_FUN_4a161570(0x14);
  FUN_4a0c707c(uVar7,auStack_1a8);
  piVar6 = (int *)FUN_4a0c49e0();
  uVar7 = thunk_FUN_4a0c314c();
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))(piVar6);
  }
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  if (puStack_28 != (undefined1 *)0x0) {
    FUN_4a14f21c();
  }
  return uVar7;
}



// Address: 4a13616c

undefined4 * FUN_4a13616c(void)

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
  uVar2 = FUN_4a04d4d0(0,s_RoomCorner_4a136184,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a136200

undefined4 * FUN_4a136200(void)

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
  uVar2 = FUN_4a04d4d0(0,s_game_AnimPlayer3D_4a136218,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a13622c

bool FUN_4a13622c(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_4a1652c8(param_1,param_2,*(undefined4 *)(*param_1 + 0x10));
  return iVar1 != DAT_4a136248;
}



// Address: 4a13624c

uint FUN_4a13624c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  
  puVar7 = (ushort *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0x14) * 8);
  iVar2 = FUN_4a09cc28(puVar7,param_2,param_3,param_4,param_4);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x14);
    if (iVar2 != 0) {
      puVar3 = *(ushort **)(param_1 + 4);
      uVar6 = *(uint *)(puVar3 + 2);
      if ((uVar6 <= param_2) && (param_2 < uVar6 + puVar3[1])) {
        uVar1 = *puVar3;
        goto LAB_4a136288;
      }
    }
    iVar4 = -1;
    if (*(uint *)(puVar7 + 2) <= param_2) {
      iVar4 = 1;
    }
    do {
      while( true ) {
        iVar2 = iVar2 + iVar4;
        if (iVar2 < 0) {
          return DAT_4a1362e8;
        }
        if (*(int *)(param_1 + 8) <= iVar2) {
          return DAT_4a1362e8;
        }
        puVar7 = (ushort *)(*(int *)(param_1 + 4) + iVar2 * 8);
        iVar5 = FUN_4a09cc28(puVar7,param_2);
        if (iVar5 != 0) {
          *(int *)(param_1 + 0x14) = iVar2;
          goto LAB_4a136266;
        }
        if (iVar4 != -1) break;
        if (*(int *)(puVar7 + 2) + (uint)puVar7[1] <= param_2) {
          return DAT_4a1362e8;
        }
      }
    } while ((iVar4 != 1) || (uVar6 = DAT_4a1362e8, *(uint *)(puVar7 + 2) <= param_2));
  }
  else {
LAB_4a136266:
    uVar1 = *puVar7;
    uVar6 = *(uint *)(puVar7 + 2);
LAB_4a136288:
    uVar6 = (uVar1 + param_2) - uVar6 & 0xffff;
  }
  return uVar6;
}



// Address: 4a1362f4

undefined4 * FUN_4a1362f4(void)

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
  uVar2 = FUN_4a04d4d0(0,s_MapObjectSim_4a13630c,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a136368

undefined4 FUN_4a136368(short *param_1,short *param_2)

{
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (param_1[3] == param_2[3])) {
    return 1;
  }
  return 0;
}



// Address: 4a136390

undefined4 FUN_4a136390(int *param_1)

{
  if (*(int *)(*param_1 + 0x3c) == 0) {
    if ((char)param_1[8] != '\0') {
      return 0x16;
    }
  }
  else if (**(int **)PTR_DAT_4a1363b8 << 0x15 < 0) {
    return 5;
  }
  return 0x24;
}



// Address: 4a1364ac

int FUN_4a1364ac(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x14) == param_2) {
    iVar1 = *(int *)(param_1 + 4);
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x10) + param_2 * 4);
  }
  return iVar1 + -1;
}



// Address: 4a1364c2

undefined4 FUN_4a1364c2(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



// Address: 4a1364c6

int FUN_4a1364c6(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    return *(int *)(param_1 + 0x14) + 1;
  }
  return 0;
}



// Address: 4a1364d6

undefined4 FUN_4a1364d6(int param_1,int param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x10) + (param_2 + -1) * 4);
}



// Address: 4a1364ec

void FUN_4a1364ec(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uStack_10;
  undefined2 uStack_c;
  undefined2 uStack_a;
  
  iVar1 = *param_2 + param_3 * 8;
  uStack_10 = *(undefined4 *)(iVar1 + 4);
  _uStack_c = CONCAT22(*(undefined2 *)(param_2[10] + 0x12),*(undefined2 *)(iVar1 + 2));
  thunk_FUN_4a000f84(param_1,&uStack_10,8);
  return;
}



// Address: 4a136540

undefined4 FUN_4a136540(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x4c) + 8);
  }
  return *(undefined4 *)(iVar1 + param_2 * 4);
}



// Address: 4a136554

void FUN_4a136554(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_4a13c094();
  if ((*(int *)(param_1 + 0x3c) != 0) && (param_2[1] == 0)) {
    uVar1 = FUN_4a0b74b0(*(int *)(param_1 + 0x3c),*param_2);
    param_2[1] = uVar1;
  }
  if ((*(int *)(param_1 + 0x54) != 0) && (param_2[1] == 0)) {
    uVar1 = FUN_4a0b74b0(*(int *)(param_1 + 0x54),*param_2);
    param_2[1] = uVar1;
  }
  if ((*(int *)(param_1 + 0x58) != 0) && (param_2[1] == 0)) {
    uVar1 = FUN_4a0b74b0(*(int *)(param_1 + 0x58),*param_2);
    param_2[1] = uVar1;
  }
  iVar3 = 0;
  do {
    if (*(int *)(param_1 + 0x4c) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0x4c) + 8);
    }
    iVar2 = *(int *)(iVar2 + iVar3 * 4);
    if ((iVar2 != 0) && (param_2[1] == 0)) {
      uVar1 = FUN_4a0b74b0(iVar2,*param_2);
      param_2[1] = uVar1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  return;
}



// Address: 4a136620

int FUN_4a136620(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = 0;
  iVar3 = *(int *)PTR_DAT_4a13670c;
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x10);
  }
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    iVar2 = FUN_4a0b74f4(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + iVar1 * 4),param_2
                        );
    if (iVar2 < iVar3) {
      iVar3 = iVar2;
    }
  }
  iVar1 = iVar3;
  if ((*(int *)(param_1 + 0x54) != 0) &&
     (iVar1 = FUN_4a0b74f4(*(int *)(param_1 + 0x54),param_2), iVar3 <= iVar1)) {
    iVar1 = iVar3;
  }
  iVar3 = iVar1;
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (iVar3 = FUN_4a0b74f4(*(int *)(param_1 + 0x58),param_2), iVar1 <= iVar3)) {
    iVar3 = iVar1;
  }
  iVar1 = 0;
  do {
    iVar2 = *(int *)(param_1 + 0x4c);
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iVar2 + 8);
    }
    iVar4 = iVar3;
    if (*(int *)(iVar5 + iVar1 * 4) != 0) {
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + 8);
      }
      iVar4 = FUN_4a0b74f4(*(undefined4 *)(iVar2 + iVar1 * 4),param_2);
      if (iVar3 <= iVar4) {
        iVar4 = iVar3;
      }
    }
    iVar1 = iVar1 + 1;
    iVar3 = iVar4;
  } while (iVar1 < 2);
  return iVar4;
}



// Address: 4a136718

void FUN_4a136718(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a136744;
  return;
}



// Address: 4a136750

undefined1 FUN_4a136750(int param_1)

{
  return *(undefined1 *)(param_1 + 0x2c);
}



// Address: 4a136758

undefined1 FUN_4a136758(int param_1)

{
  return *(undefined1 *)(param_1 + 0x2d);
}



// Address: 4a136760

undefined4 FUN_4a136760(int param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



// Address: 4a136768

undefined4 FUN_4a136768(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int extraout_r1;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  
  piVar8 = *(int **)(param_1 + 0xe8);
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0xc))(piVar8);
  }
  iVar10 = 0;
  uVar1 = (**(code **)(*piVar8 + 0x18))(piVar8);
  iVar9 = *(int *)(param_1 + 0x148);
  FUN_4a0015f0(uVar1 & 0x7fffffff,iVar9);
  iVar4 = extraout_r1;
  if (extraout_r1 == 0) {
    iVar4 = iVar9;
  }
  iVar5 = extraout_r1;
  do {
    if (iVar5 == iVar9) {
      iVar5 = 0;
    }
    if (*(int *)(param_1 + 0x14c) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0x14c) + 8);
    }
    iVar2 = *(int *)(iVar2 + iVar5 * 4);
    if (iVar2 < 0) {
      if (iVar2 == -1) {
LAB_4a136854:
        iVar5 = -1;
LAB_4a136858:
        if (-1 < iVar5) {
          if (*(int *)(param_1 + 0x14c) != 0) {
            iVar10 = *(int *)(*(int *)(param_1 + 0x14c) + 8);
          }
          uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x13c) + *(int *)(iVar10 + iVar5 * 4) * 4);
          if ((piVar8 != (int *)0x0) && (iVar4 = (**(code **)(*piVar8 + 8))(piVar8), iVar4 != 0)) {
            (**(code **)(*piVar8 + 4))(piVar8);
          }
          return uVar6;
        }
        if ((piVar8 != (int *)0x0) && (iVar4 = (**(code **)(*piVar8 + 8))(piVar8), iVar4 != 0)) {
          (**(code **)(*piVar8 + 4))(piVar8);
        }
        return 0;
      }
    }
    else {
      piVar7 = *(int **)(*(int *)(param_1 + 0x124) + iVar2 * 4);
      uVar3 = (**(code **)(*piVar7 + 0x18))(piVar7);
      if ((uVar3 == uVar1) &&
         ((piVar8 == piVar7 || (iVar2 = (**(code **)(*piVar8 + 0x14))(piVar8,piVar7), iVar2 != 0))))
      goto LAB_4a136858;
    }
    if (iVar5 == iVar4 + -1) goto LAB_4a136854;
    iVar5 = iVar5 + 1;
  } while( true );
}



// Address: 4a136900

undefined4 FUN_4a136900(int param_1)

{
  return *(undefined4 *)(param_1 + 0xf8);
}



// Address: 4a136908

undefined4 FUN_4a136908(int param_1)

{
  return *(undefined4 *)(param_1 + 0xfc);
}



// Address: 4a136910

undefined4 FUN_4a136910(int param_1)

{
  return *(undefined4 *)(param_1 + 0x100);
}



// Address: 4a136918

undefined4 FUN_4a136918(int param_1)

{
  return *(undefined4 *)(param_1 + 0x104);
}



// Address: 4a136920

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a136920(int param_1,int param_2,int param_3,uint param_4)

{
  longlong lVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  int *piVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined1 auStack_c4 [72];
  undefined1 auStack_7c [8];
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 *puStack_60;
  undefined *puStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined *puStack_28;
  
  if (*(char *)(param_2 + 0xd0) == '\0') {
    return;
  }
  iVar3 = FUN_4a1658dc(param_2);
  if (iVar3 != 0) {
    FUN_4a0b8a1c(&uStack_70);
    iVar9 = 0;
    iVar11 = 0;
    if (*(int *)(iVar3 + 0xdc) != 0) {
      iVar11 = *(int *)(*(int *)(iVar3 + 0xdc) + 0x10);
    }
    if (param_3 == 0) {
      if (0 < iVar11) {
        do {
          iVar20 = *(int *)(*(int *)(*(int *)(iVar3 + 0xdc) + 0x14) + iVar9 * 4);
          if (*(char *)(iVar20 + 0xd0) != '\0') {
            FUN_4a1393f8(iVar20,&uStack_70);
            FUN_4a136920(param_1,iVar20,&uStack_70,param_4);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar11);
      }
    }
    else if (0 < iVar11) {
      do {
        iVar20 = *(int *)(*(int *)(*(int *)(iVar3 + 0xdc) + 0x14) + iVar9 * 4);
        if (*(char *)(iVar20 + 0xd0) != '\0') {
          iStack_68 = *(int *)(param_3 + 8);
          uStack_64 = *(undefined4 *)(param_3 + 0xc);
          puStack_60 = *(undefined4 **)(param_3 + 0x10);
          puStack_5c = *(undefined **)(param_3 + 0x14);
          uStack_58 = *(undefined4 *)(param_3 + 0x18);
          uStack_54 = *(undefined4 *)(param_3 + 0x1c);
          uStack_50 = *(undefined4 *)(param_3 + 0x20);
          uStack_4c = *(undefined4 *)(param_3 + 0x24);
          uStack_48 = *(undefined4 *)(param_3 + 0x28);
          uStack_44 = *(undefined4 *)(param_3 + 0x2c);
          uStack_40 = *(undefined4 *)(param_3 + 0x30);
          uStack_3c = *(undefined4 *)(param_3 + 0x34);
          uStack_38 = *(undefined4 *)(param_3 + 0x38);
          iStack_34 = *(undefined4 *)(param_3 + 0x3c);
          iStack_30 = *(undefined4 *)(param_3 + 0x40);
          uStack_2c = *(undefined4 *)(param_3 + 0x44);
          FUN_4a139528(iVar20,&uStack_70);
          FUN_4a136920(param_1,iVar20,&uStack_70,param_4);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar11);
    }
    FUN_4a0c6bf4(&uStack_70);
    return;
  }
  iVar3 = FUN_4a165824(param_2);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = *(uint *)(iVar3 + 0xd8);
  }
  if (iVar3 == 0 || (uVar4 & param_4) == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a136a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  iVar11 = FUN_4a1657c4(iVar3);
  uStack_2c = (uint)(iVar11 != 0);
  if (uStack_2c != 0) {
    FUN_4a0b8a1c(auStack_7c);
    uVar12 = *(undefined4 *)(iVar11 + 0x114);
    FUN_4a1393f8(uVar12,auStack_7c);
    if (param_3 == 0) {
      FUN_4a136920(param_1,uVar12,auStack_7c,param_4);
    }
    else {
      FUN_4a0b89d4(auStack_c4,param_3);
      FUN_4a0b7d00(auStack_c4,auStack_7c);
      FUN_4a136920(param_1,uVar12,auStack_c4,param_4);
      FUN_4a0c6bf4(auStack_c4);
    }
    FUN_4a0c6bf4(auStack_7c);
  }
  if (*(int *)(param_1 + 0x1b8) <= *(int *)(param_1 + 0x1c0)) {
    thunk_FUN_4a161570(0x48);
    piVar5 = (int *)FUN_4a0b8a1c();
    iVar11 = *(int *)(param_1 + 0x1b4);
    if ((*(int *)(param_1 + 0x1b8) == iVar11) &&
       (iVar9 = *(int *)(param_1 + 0x1b0) + iVar11, iVar11 < iVar9)) {
      *(int *)(param_1 + 0x1b4) = iVar9;
      iVar20 = *(int *)(param_1 + 0x1bc);
      iVar11 = thunk_FUN_4a161570(iVar9 * 4);
      *(int *)(param_1 + 0x1bc) = iVar11;
      if (iVar11 != 0) {
        iVar11 = 0;
        if (0 < *(int *)(param_1 + 0x1b8)) {
          do {
            iVar9 = iVar11 + 1;
            *(undefined4 *)(*(int *)(param_1 + 0x1bc) + iVar11 * 4) =
                 *(undefined4 *)(iVar20 + iVar11 * 4);
            iVar11 = iVar9;
          } while (iVar9 < *(int *)(param_1 + 0x1b8));
        }
        thunk_FUN_4a161530(iVar20);
      }
      iVar11 = *(int *)(param_1 + 0x1b8);
      if (*(int *)(param_1 + 0x1b8) < *(int *)(param_1 + 0x1b4)) {
        do {
          iVar9 = iVar11 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x1bc) + iVar11 * 4) = 0;
          iVar11 = iVar9;
        } while (iVar9 < *(int *)(param_1 + 0x1b4));
      }
    }
    iVar11 = *(int *)(param_1 + 0x1b8);
    *(int *)(param_1 + 0x1b8) = iVar11 + 1;
    piVar17 = *(int **)(*(int *)(param_1 + 0x1bc) + iVar11 * 4);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))();
    }
    *(int **)(*(int *)(param_1 + 0x1bc) + iVar11 * 4) = piVar5;
    if ((piVar17 != (int *)0x0) && (iVar11 = (**(code **)(*piVar17 + 8))(piVar17), iVar11 != 0)) {
      (**(code **)(*piVar17 + 4))(piVar17);
    }
  }
  iVar11 = *(int *)(param_1 + 0x1c0);
  *(int *)(param_1 + 0x1c0) = iVar11 + 1;
  puVar2 = PTR_DAT_4a136f48;
  iStack_30 = *(int *)(*(int *)(param_1 + 0x1bc) + iVar11 * 4);
  if (param_3 == 0) {
    uVar12 = *(undefined4 *)(PTR_DAT_4a136f48 + 4);
    uVar8 = *(undefined4 *)(PTR_DAT_4a136f48 + 8);
    uVar13 = *(undefined4 *)(PTR_DAT_4a136f48 + 0xc);
    uVar15 = *(undefined4 *)(PTR_DAT_4a136f48 + 0x10);
    uVar18 = *(undefined4 *)(PTR_DAT_4a136f48 + 0x14);
    uVar19 = *(undefined4 *)(PTR_DAT_4a136f48 + 0x18);
    uVar21 = *(undefined4 *)(PTR_DAT_4a136f48 + 0x1c);
    uVar22 = *(undefined4 *)(PTR_DAT_4a136f48 + 0x20);
    puVar6 = (undefined4 *)(PTR_DAT_4a136f48 + 0x24);
    *(undefined4 *)(iStack_30 + 8) = *(undefined4 *)PTR_DAT_4a136f48;
    *(undefined4 *)(iStack_30 + 0xc) = uVar12;
    *(undefined4 *)(iStack_30 + 0x10) = uVar8;
    *(undefined4 *)(iStack_30 + 0x14) = uVar13;
    *(undefined4 *)(iStack_30 + 0x18) = uVar15;
    *(undefined4 *)(iStack_30 + 0x1c) = uVar18;
    *(undefined4 *)(iStack_30 + 0x20) = uVar19;
    *(undefined4 *)(iStack_30 + 0x24) = uVar21;
    *(undefined4 *)(iStack_30 + 0x28) = uVar22;
    uVar12 = *(undefined4 *)(puVar2 + 0x28);
    uVar8 = *(undefined4 *)(puVar2 + 0x2c);
    uVar13 = *(undefined4 *)(puVar2 + 0x30);
    uVar15 = *(undefined4 *)(puVar2 + 0x34);
    uVar18 = *(undefined4 *)(puVar2 + 0x38);
    uVar19 = *(undefined4 *)(puVar2 + 0x3c);
    *(undefined4 *)(iStack_30 + 0x2c) = *puVar6;
    *(undefined4 *)(iStack_30 + 0x30) = uVar12;
    *(undefined4 *)(iStack_30 + 0x34) = uVar8;
    *(undefined4 *)(iStack_30 + 0x38) = uVar13;
    *(undefined4 *)(iStack_30 + 0x3c) = uVar15;
    *(undefined4 *)(iStack_30 + 0x40) = uVar18;
    *(undefined4 *)(iStack_30 + 0x44) = uVar19;
  }
  else {
    uVar12 = *(undefined4 *)(param_3 + 0xc);
    uVar8 = *(undefined4 *)(param_3 + 0x10);
    uVar13 = *(undefined4 *)(param_3 + 0x14);
    uVar15 = *(undefined4 *)(param_3 + 0x18);
    uVar18 = *(undefined4 *)(param_3 + 0x1c);
    uVar19 = *(undefined4 *)(param_3 + 0x20);
    uVar21 = *(undefined4 *)(param_3 + 0x24);
    uVar22 = *(undefined4 *)(param_3 + 0x28);
    *(undefined4 *)(iStack_30 + 8) = *(undefined4 *)(param_3 + 8);
    *(undefined4 *)(iStack_30 + 0xc) = uVar12;
    *(undefined4 *)(iStack_30 + 0x10) = uVar8;
    *(undefined4 *)(iStack_30 + 0x14) = uVar13;
    *(undefined4 *)(iStack_30 + 0x18) = uVar15;
    *(undefined4 *)(iStack_30 + 0x1c) = uVar18;
    *(undefined4 *)(iStack_30 + 0x20) = uVar19;
    *(undefined4 *)(iStack_30 + 0x24) = uVar21;
    *(undefined4 *)(iStack_30 + 0x28) = uVar22;
    uVar12 = *(undefined4 *)(param_3 + 0x30);
    uVar8 = *(undefined4 *)(param_3 + 0x34);
    uVar13 = *(undefined4 *)(param_3 + 0x38);
    uVar15 = *(undefined4 *)(param_3 + 0x3c);
    uVar18 = *(undefined4 *)(param_3 + 0x40);
    uVar19 = *(undefined4 *)(param_3 + 0x44);
    *(undefined4 *)(iStack_30 + 0x2c) = *(undefined4 *)(param_3 + 0x2c);
    *(undefined4 *)(iStack_30 + 0x30) = uVar12;
    *(undefined4 *)(iStack_30 + 0x34) = uVar8;
    *(undefined4 *)(iStack_30 + 0x38) = uVar13;
    *(undefined4 *)(iStack_30 + 0x3c) = uVar15;
    *(undefined4 *)(iStack_30 + 0x40) = uVar18;
    *(undefined4 *)(iStack_30 + 0x44) = uVar19;
  }
  iStack_34 = FUN_4a13b5dc(iVar3);
  iVar11 = 0;
  if (iStack_34 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a136ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  puStack_28 = PTR_PTR_4a136f4c;
  do {
    iVar9 = FUN_4a13b4a0(iVar3,iVar11);
    if ((iVar9 != 0) && (iVar9 = FUN_4a13b5bc(iVar3,iVar11), iVar9 != 0)) {
      puVar6 = (undefined4 *)FUN_4a0c6bc0(&puStack_5c);
      *puVar6 = puStack_28;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0x44;
      *(char *)(puVar6 + 6) = (char)uStack_2c;
      puVar6[7] = 0;
      puVar6[8] = 0;
      puVar6[9] = 0;
      if ((iVar3 != 0) && (iVar9 = FUN_4a165824(iVar3), iVar9 != 0)) {
        iVar20 = FUN_4a13b4a0(iVar9,iVar11);
        iVar7 = FUN_4a13b5bc(iVar9,iVar11);
        if (iVar20 != 0 && iVar7 != 0) {
          puVar6[2] = iVar3;
          puVar6[3] = iStack_30;
          uVar12 = *(undefined4 *)(iVar20 + 0x28);
          puVar6[8] = iVar7;
          puVar6[4] = uVar12;
          puVar6[7] = iVar20;
          uVar12 = FUN_4a13b5e4(iVar9);
          puVar6[9] = uVar12;
          if (*(int *)(iVar20 + 0x34) != 0) {
            puVar6[5] = *(undefined4 *)(*(int *)(iVar20 + 0x34) + 0x28);
          }
        }
      }
      iVar9 = *(int *)(param_1 + 0x1a0);
      puStack_60 = puVar6;
      if (iVar9 == *(int *)(param_1 + 0x1a4)) {
        iStack_68 = 1;
        uStack_64 = 0;
        lVar1 = (longlong)DAT_4a136f50 *
                (longlong)(*(int *)(param_1 + 0x1a0) - *(int *)(param_1 + 0x19c));
        iVar20 = (int)((ulonglong)lVar1 >> 0x20);
        iStack_6c = (iVar20 >> 4) - (iVar20 >> 0x1f);
        if (iStack_6c == 0) {
          piVar5 = &iStack_68;
        }
        else {
          piVar5 = &iStack_6c;
        }
        iVar20 = *piVar5 + iStack_6c;
        if (iVar20 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = FUN_4a15e080(iVar20 * 0x28,iStack_6c,(int)lVar1);
          if (iVar7 == 0) {
            iVar7 = FUN_4a1669a8();
          }
        }
        iVar10 = *(int *)(param_1 + 0x19c);
        uStack_70 = 0;
        iVar14 = iVar7;
        for (; iVar10 != iVar9; iVar10 = iVar10 + 0x28) {
          FUN_4a0a9150(iVar14,iVar10);
          iVar14 = iVar14 + 0x28;
        }
        if (iStack_68 == 1) {
          FUN_4a0a9150(iVar14,puStack_60);
          iVar14 = iVar14 + 0x28;
        }
        else {
          uStack_74 = 0;
          for (iVar9 = iStack_68; iVar9 != 0; iVar9 = iVar9 + -1) {
            FUN_4a0a9150(iVar14,puStack_60);
            iVar14 = iVar14 + 0x28;
          }
        }
        puVar6 = *(undefined4 **)(param_1 + 0x19c);
        puVar16 = *(undefined4 **)(param_1 + 0x1a0);
        uStack_70 = 0;
        for (; puVar6 != puVar16; puVar6 = puVar6 + 10) {
          (**(code **)*puVar6)(puVar6);
        }
        if (*(int *)(param_1 + 0x19c) != 0) {
          FUN_4a14f21c();
        }
        *(int *)(param_1 + 0x1a4) = iVar7 + iVar20 * 0x28;
        *(int *)(param_1 + 0x1a0) = iVar14;
        *(int *)(param_1 + 0x19c) = iVar7;
      }
      else {
        FUN_4a0a9150(iVar9,puVar6);
        *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) + 0x28;
      }
      puStack_5c = puStack_28;
      uStack_54 = 0;
      uStack_50 = 0;
      FUN_4a0c6bf4(&puStack_5c);
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 != iStack_34);
  return;
}



// Address: 4a136f54

void FUN_4a136f54(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6)

{
  int *piVar1;
  
  if ((*(uint *)(param_1 + 0xc) & param_6) != 0) {
    piVar1 = (int *)FUN_4a136768();
    (**(code **)(*piVar1 + 0x20))(piVar1,param_5);
    (**(code **)(*piVar1 + 0x38))(piVar1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x4a136fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x24))(piVar1);
    return;
  }
  return;
}



// Address: 4a1374a8

void FUN_4a1374a8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a1374d4;
  return;
}



// Address: 4a137518

undefined4 FUN_4a137518(int param_1)

{
  return *(undefined4 *)(param_1 + 0xe8);
}



// Address: 4a137520

void FUN_4a137520(void)

{
  undefined4 *puVar1;
  
  thunk_FUN_4a161570(0xe0);
  puVar1 = (undefined4 *)FUN_4a0b4714();
  *puVar1 = PTR_PTR_4a137548;
  puVar1[0x37] = 0;
  return;
}



// Address: 4a13754c

undefined4 * FUN_4a13754c(void)

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
  uVar2 = FUN_4a04d4d0(0,s_javax_microedition_m3g_Group_4a137564,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a13758c

undefined4 FUN_4a13758c(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 != *(uint *)(param_2 + 0x10)) {
    if ((int)uVar2 < (int)*(uint *)(param_2 + 0x10)) {
      return 1;
    }
    return 0;
  }
  bVar6 = *(char *)(param_1 + 0x18) != '\0';
  uVar1 = 0;
  if (bVar6) {
    uVar1 = (uint)*(byte *)(param_2 + 0x18);
  }
  bVar7 = uVar1 != 0;
  if (bVar6 && bVar7) {
    uVar1 = *(uint *)(param_1 + 0x24);
    uVar2 = *(uint *)(param_2 + 0x24);
  }
  if ((bVar6 && bVar7) && uVar1 != uVar2) {
    if ((!bVar6 || !bVar7) || uVar2 <= uVar1) {
      return 0;
    }
    return 1;
  }
  if (*(int *)(param_1 + 0x14) != *(int *)(param_2 + 0x14)) {
    if (*(int *)(param_1 + 0x14) == 0x44) {
      return 1;
    }
    if (*(int *)(param_2 + 0x14) == 0x44) {
      return 0;
    }
  }
  iVar4 = *(int *)(param_1 + 0x1c);
  iVar5 = *(int *)(param_2 + 0x1c);
  if (iVar4 != iVar5) {
    iVar3 = 0;
    do {
      uVar2 = FUN_4a136540(iVar4,iVar3);
      uVar1 = FUN_4a136540(iVar5,iVar3);
      if (uVar2 != uVar1) {
        if (uVar1 <= uVar2) {
          return 0;
        }
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
    if (*(uint *)(iVar4 + 0x58) != *(uint *)(iVar5 + 0x58)) {
      if (*(uint *)(iVar5 + 0x58) <= *(uint *)(iVar4 + 0x58)) {
        return 0;
      }
      return 1;
    }
    if (*(uint *)(iVar4 + 0x34) != *(uint *)(iVar5 + 0x34)) {
      if (*(uint *)(iVar5 + 0x34) <= *(uint *)(iVar4 + 0x34)) {
        return 0;
      }
      return 1;
    }
    if (*(uint *)(iVar4 + 0x30) != *(uint *)(iVar5 + 0x30)) {
      if (*(uint *)(iVar5 + 0x30) <= *(uint *)(iVar4 + 0x30)) {
        return 0;
      }
      return 1;
    }
  }
  if (*(uint *)(param_1 + 0x24) == *(uint *)(param_2 + 0x24)) {
    if (*(uint *)(param_1 + 0x20) < *(uint *)(param_2 + 0x20)) {
      return 1;
    }
  }
  else if (*(uint *)(param_1 + 0x24) < *(uint *)(param_2 + 0x24)) {
    return 1;
  }
  return 0;
}



// Address: 4a1376d0

void FUN_4a1376d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x38);
  iVar1 = 0;
  if (iVar4 < 1) {
    return;
  }
  do {
    if (*(int *)(param_1 + 0x3c) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0x3c) + 8);
    }
    if (*(int *)(param_2 + 0xc) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(param_2 + 0xc) + 8);
    }
    *(uint *)(iVar3 + iVar1 * 4) = (uint)*(ushort *)(iVar2 + iVar1 * 2);
    iVar1 = iVar1 + 1;
  } while (iVar1 < iVar4);
  return;
}



// Address: 4a13773c

void FUN_4a13773c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a137768;
  return;
}



// Address: 4a13776c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a13776c(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int unaff_r6;
  int in_lr;
  int iVar9;
  undefined1 auStack_34 [20];
  
  iVar2 = *(int *)(param_1 + 0x160);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 8);
  }
  iVar8 = *(int *)(*(int *)(param_1 + 0x11c) + 0x10);
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  if ((iVar3 == 0) || (iVar8 != *(int *)(param_1 + 0x15c))) {
    piVar4 = (int *)FUN_4a0c6bc0(auStack_34);
    puVar1 = PTR_PTR_4a137910;
    piVar4[2] = 0;
    piVar4[3] = 0;
    *piVar4 = (int)puVar1;
    if (0 < iVar8) {
      iVar3 = FUN_4a15e080(iVar8 << 2);
      if (iVar3 == 0) {
        iVar3 = FUN_4a1669a8();
      }
      iVar2 = 0;
      do {
        *(undefined4 *)(iVar3 + iVar2 * 4) = 0;
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar8);
      thunk_FUN_4a161570(0x18);
      puVar5 = (undefined4 *)FUN_4a0c0628();
      puVar5[3] = 4;
      puVar5[4] = iVar8;
      puVar1 = PTR_PTR_4a137914;
      *puVar5 = PTR_PTR_4a137914;
      puVar5[2] = iVar3;
      *(undefined1 *)(puVar5 + 5) = 1;
      if (puVar5 != (undefined4 *)0x0) {
        (**(code **)(puVar1 + 0xc))(puVar5);
      }
      (**(code **)(*piVar4 + 0x1c))(piVar4);
      piVar4[2] = iVar8;
      piVar4[3] = (int)puVar5;
    }
    iVar3 = piVar4[2];
    piVar4 = (int *)piVar4[3];
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))(piVar4);
    }
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))((int *)(param_1 + 0x154));
    *(int *)(param_1 + 0x15c) = iVar3;
    *(int **)(param_1 + 0x160) = piVar4;
    FUN_4a16adcc(auStack_34);
  }
  iVar2 = *(int *)(param_1 + 0x11c);
  iVar3 = *(int *)(iVar2 + 0x10);
  if (*(int *)(param_1 + 0x15c) < iVar3) {
    iVar3 = *(int *)(param_1 + 0x15c);
  }
  iVar8 = 0;
  iVar9 = iVar3;
  if (iVar3 < 1) {
    iVar8 = unaff_r6;
    iVar9 = in_lr;
  }
  iVar6 = 0;
  if (iVar3 < 1) {
    return;
  }
  do {
    iVar3 = iVar8;
    if (*(int *)(param_1 + 0x160) != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x160) + 8);
    }
    iVar7 = iVar6 + 1;
    *(undefined4 *)(iVar3 + iVar6 * 4) = *(undefined4 *)(*(int *)(iVar2 + 0x14) + iVar6 * 4);
    iVar6 = iVar7;
  } while (iVar7 < iVar9);
  return;
}



// Address: 4a137918

void FUN_4a137918(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  FUN_4a13b4c0();
  if (*(int *)(param_1 + 0x114) == 0) {
    return;
  }
  if (param_2[1] == 0) {
    uVar1 = FUN_4a0b74b0(*(int *)(param_1 + 0x114),*param_2);
    param_2[1] = uVar1;
    return;
  }
  return;
}



// Address: 4a13795c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_4a13795c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  int aiStack_60 [10];
  int iStack_38;
  int iStack_34;
  int iStack_2c;
  int local_28;
  
  local_28 = param_1;
  FUN_4a13b5e4(param_1);
  iVar1 = FUN_4a13b5e4(local_28);
  iVar2 = FUN_4a139288();
  if (iVar2 != 0) {
    return iVar2;
  }
  if (*(int *)(local_28 + 0x168) == 0) {
    iStack_2c = *(int *)(iVar1 + 0x28);
    uVar3 = thunk_FUN_4a161570(0x48);
    piVar4 = (int *)FUN_4a0ad610(uVar3,iStack_2c,4,1);
    *(int **)(local_28 + 0x168) = piVar4;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))();
    }
    iVar1 = FUN_4a13776c(local_28);
    puVar5 = (undefined4 *)FUN_4a0c6bc0(aiStack_60 + 8);
    *puVar5 = PTR_PTR_4a137bf0;
    puVar5[2] = *(undefined4 *)(iVar1 + 8);
    piVar4 = *(int **)(iVar1 + 0xc);
    puVar5[3] = piVar4;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))();
    }
    iVar1 = 0;
    *puVar5 = PTR_PTR_4a137bf4;
    if (0 < iStack_2c) {
      do {
        aiStack_60[0] = 0;
        aiStack_60[5] = 0;
        aiStack_60[1] = 0;
        aiStack_60[2] = 0;
        iVar2 = 0;
        aiStack_60[4] = 0;
        aiStack_60[6] = 0;
        aiStack_60[7] = 0;
        aiStack_60[3] = 0;
        if (0 < iStack_38) {
          do {
            iVar6 = 0;
            if (iStack_34 != 0) {
              iVar6 = *(int *)(iStack_34 + 8);
            }
            iVar7 = FUN_4a17006c(*(undefined4 *)(local_28 + 0x124),
                                 *(undefined4 *)(iVar6 + iVar2 * 4));
            iVar6 = 0;
            if (*(int *)(iVar7 + 0xc) != 0) {
              iVar6 = *(int *)(*(int *)(iVar7 + 0xc) + 8);
            }
            iVar6 = *(int *)(iVar6 + iVar1 * 4);
            if (iVar6 <= -iVar6) {
              iVar6 = -iVar6;
            }
            if (iVar6 != 0) {
              iVar7 = 0;
LAB_4a137ab8:
              if (iVar6 <= aiStack_60[iVar7]) goto LAB_4a137b50;
              uVar15 = 3 - iVar7;
              if (0 < (int)uVar15) {
                piVar4 = aiStack_60 + 7;
                piVar9 = aiStack_60 + 8;
                piVar8 = aiStack_60 + 3;
                piVar14 = aiStack_60 + 4;
                if ((uVar15 & 1) != 0) {
                  piVar4 = aiStack_60 + 6;
                  aiStack_60[7] = aiStack_60[6];
                  piVar9 = aiStack_60 + 7;
                  piVar8 = aiStack_60 + 2;
                  piVar14 = aiStack_60 + 3;
                  aiStack_60[3] = aiStack_60[2];
                }
                iVar10 = piVar4[-1];
                iVar11 = piVar8[-1];
                for (iVar16 = (int)uVar15 >> 1; iVar16 != 0; iVar16 = iVar16 + -1) {
                  iVar13 = piVar4[-2];
                  iVar12 = piVar8[-2];
                  piVar9[-1] = iVar10;
                  piVar14[-1] = iVar11;
                  iVar10 = piVar4[-3];
                  iVar11 = piVar8[-3];
                  piVar9 = piVar9 + -2;
                  *piVar9 = iVar13;
                  piVar14 = piVar14 + -2;
                  *piVar14 = iVar12;
                  piVar4 = piVar4 + -2;
                  piVar8 = piVar8 + -2;
                }
              }
              aiStack_60[iVar7 + 4] = iVar2;
              aiStack_60[iVar7] = iVar6;
            }
LAB_4a137b5c:
            iVar2 = iVar2 + 1;
          } while (iVar2 < iStack_38);
        }
        iVar2 = aiStack_60[4];
        if (0x7f < aiStack_60[4]) {
          iVar2 = aiStack_60[4] + -0x100;
        }
        uStack_64 = (undefined1)iVar2;
        iVar2 = aiStack_60[5];
        if (0x7f < aiStack_60[5]) {
          iVar2 = aiStack_60[5] + -0x100;
        }
        uStack_63 = (undefined1)iVar2;
        iVar2 = aiStack_60[6];
        if (0x7f < aiStack_60[6]) {
          iVar2 = aiStack_60[6] + -0x100;
        }
        uStack_62 = (undefined1)iVar2;
        iVar2 = aiStack_60[7];
        if (0x7f < aiStack_60[7]) {
          iVar2 = aiStack_60[7] + -0x100;
        }
        uStack_61 = (undefined1)iVar2;
        FUN_4a0ad2fc(*(undefined4 *)(local_28 + 0x168),iVar1,1,&uStack_64);
        iVar1 = iVar1 + 1;
      } while (iVar1 < iStack_2c);
    }
    FUN_4a16adcc(aiStack_60 + 8);
  }
  return *(int *)(local_28 + 0x168);
LAB_4a137b50:
  iVar7 = iVar7 + 1;
  if (3 < iVar7) goto LAB_4a137b5c;
  goto LAB_4a137ab8;
}



// Address: 4a137bf8

int FUN_4a137bf8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uStack_70;
  undefined4 auStack_6c [4];
  int aiStack_5c [4];
  byte abStack_4c [4];
  undefined1 auStack_48 [12];
  int iStack_3c;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  FUN_4a13b5e4();
  iVar1 = FUN_4a13b5e4(param_1);
  iVar2 = FUN_4a139290();
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x16c) == 0) {
      iStack_2c = FUN_4a13795c(param_1);
      iStack_30 = *(int *)(iStack_2c + 0x2c);
      iStack_34 = *(int *)(iVar1 + 0x28);
      uVar3 = thunk_FUN_4a161570(0x48);
      piVar4 = (int *)FUN_4a0ad610(uVar3,iStack_34,iStack_30,4);
      *(int **)(param_1 + 0x16c) = piVar4;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0xc))();
      }
      iVar1 = FUN_4a13776c(param_1);
      puVar5 = (undefined4 *)FUN_4a0c6bc0(auStack_48);
      *puVar5 = PTR_PTR_4a137e4c;
      puVar5[2] = *(undefined4 *)(iVar1 + 8);
      piVar4 = *(int **)(iVar1 + 0xc);
      puVar5[3] = piVar4;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0xc))();
      }
      iVar1 = 0;
      *puVar5 = PTR_PTR_4a137e50;
      if (0 < iStack_34) {
        iStack_28 = iStack_30 << 2;
        do {
          if (0 < iStack_30) {
            FUN_4a00121c(aiStack_5c,iStack_28);
          }
          FUN_4a1386ac(iStack_2c,iVar1,1,abStack_4c);
          iVar2 = 0;
          iVar9 = 0;
          iVar8 = 0;
          do {
            iVar6 = 0;
            if (iStack_3c != 0) {
              iVar6 = *(int *)(iStack_3c + 8);
            }
            iVar7 = FUN_4a17006c(*(undefined4 *)(param_1 + 0x124),
                                 *(undefined4 *)(iVar6 + (uint)abStack_4c[iVar8] * 4));
            iVar6 = 0;
            if (*(int *)(iVar7 + 0xc) != 0) {
              iVar6 = *(int *)(*(int *)(iVar7 + 0xc) + 8);
            }
            iVar6 = *(int *)(iVar6 + iVar1 * 4);
            if (iVar6 <= iVar2) {
              iVar2 = iVar6;
            }
            iVar7 = -iVar6;
            if (-iVar6 < iVar6) {
              iVar7 = iVar6;
            }
            aiStack_5c[iVar8] = iVar6;
            iVar8 = iVar8 + 1;
            iVar9 = iVar9 + iVar7;
          } while (iVar8 < 4);
          uStack_70 = 0x3f800000;
          if (0 < iVar9) {
            uVar3 = FUN_4a171fac(iVar9);
            uStack_70 = FUN_4a171bb8(uStack_70,uVar3);
          }
          if (0 < iStack_30) {
            piVar4 = aiStack_5c;
            iVar6 = 0;
            iVar8 = iStack_30;
            puVar5 = &uStack_70;
            do {
              puVar5 = puVar5 + 1;
              if (iVar9 < 1) {
                if (iVar6 == 0) {
                  uVar3 = 0x3f800000;
                }
                else {
                  uVar3 = 0;
                }
                *puVar5 = uVar3;
              }
              else {
                uVar3 = FUN_4a171fac(*piVar4 - iVar2);
                uVar3 = FUN_4a17211c(uVar3,uStack_70);
                *puVar5 = uVar3;
              }
              iVar8 = iVar8 + -1;
              piVar4 = piVar4 + 1;
              iVar6 = iVar6 + 1;
            } while (iVar8 != 0);
          }
          FUN_4a0ad390(*(undefined4 *)(param_1 + 0x16c),iVar1,1,auStack_6c);
          iVar1 = iVar1 + 1;
        } while (iVar1 < iStack_34);
      }
      FUN_4a16adcc(auStack_48);
    }
    return *(int *)(param_1 + 0x16c);
  }
  return iVar2;
}



// Address: 4a137e54

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_4a137e54(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  FUN_4a13b5e4();
  iVar1 = FUN_4a17006c(*(undefined4 *)(param_1 + 0x124),param_2);
  if (iVar1 == 0) {
    return 0;
  }
  iVar9 = 1 - *(uint *)(param_3 + 8);
  if (1 < *(uint *)(param_3 + 8)) {
    iVar9 = 0;
  }
  iVar2 = FUN_4a13b5e4(param_1);
  iVar8 = *(int *)(iVar2 + 0x28);
  iVar7 = 0;
  iVar2 = 0;
  if (0 < iVar8) {
    do {
      if (*(int *)(iVar1 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar1 + 0xc) + 8);
      }
      iVar3 = *(int *)(iVar3 + iVar2 * 4);
      if (iVar3 != 0) {
        if (iVar9 == 0) {
          if (*(int *)(param_3 + 0xc) == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)(*(int *)(param_3 + 0xc) + 8);
          }
          *(int *)(iVar4 + iVar7 * 4) = iVar2;
          if (*(int *)(param_1 + 0x134) == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)(*(int *)(param_1 + 0x134) + 8);
          }
          uVar5 = FUN_4a171fac(*(undefined4 *)(iVar4 + iVar2 * 4));
          uVar6 = FUN_4a171fac(iVar3);
          uVar5 = FUN_4a171bb8(uVar6,uVar5);
          if (*(int *)(param_4 + 0xc) == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(*(int *)(param_4 + 0xc) + 8);
          }
          *(undefined4 *)(iVar3 + iVar7 * 4) = uVar5;
        }
        iVar7 = iVar7 + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar8);
  }
  return iVar7;
}



// Address: 4a137f60

undefined4 FUN_4a137f60(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int extraout_r1;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar8 = *(int *)(param_1 + 0x120);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  iVar10 = 0;
  uVar2 = (**(code **)(*param_2 + 0x18))(param_2);
  iVar9 = *(int *)(iVar8 + 0x40);
  FUN_4a0015f0(uVar2 & 0x7fffffff,iVar9);
  iVar1 = extraout_r1;
  if (extraout_r1 == 0) {
    iVar1 = iVar9;
  }
  iVar5 = extraout_r1;
  do {
    if (iVar5 == iVar9) {
      iVar5 = 0;
    }
    if (*(int *)(iVar8 + 0x44) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(iVar8 + 0x44) + 8);
    }
    iVar3 = *(int *)(iVar3 + iVar5 * 4);
    if (iVar3 < 0) {
      if (iVar3 == -1) {
LAB_4a138048:
        iVar5 = -1;
LAB_4a13804c:
        if (-1 < iVar5) {
          if (*(int *)(iVar8 + 0x44) != 0) {
            iVar10 = *(int *)(*(int *)(iVar8 + 0x44) + 8);
          }
          uVar6 = *(undefined4 *)(*(int *)(iVar8 + 0x34) + *(int *)(iVar10 + iVar5 * 4) * 4);
          if ((param_2 != (int *)0x0) && (iVar8 = (**(code **)(*param_2 + 8))(param_2), iVar8 != 0))
          {
            (**(code **)(*param_2 + 4))(param_2);
          }
          return uVar6;
        }
        if ((param_2 != (int *)0x0) && (iVar8 = (**(code **)(*param_2 + 8))(param_2), iVar8 != 0)) {
          (**(code **)(*param_2 + 4))(param_2);
        }
        return 0;
      }
    }
    else {
      piVar7 = *(int **)(*(int *)(iVar8 + 0x1c) + iVar3 * 4);
      uVar4 = (**(code **)(*piVar7 + 0x18))(piVar7);
      if ((uVar4 == uVar2) &&
         ((param_2 == piVar7 || (iVar3 = (**(code **)(*param_2 + 0x14))(param_2,piVar7), iVar3 != 0)
          ))) goto LAB_4a13804c;
    }
    if (iVar5 == iVar1 + -1) goto LAB_4a138048;
    iVar5 = iVar5 + 1;
  } while( true );
}



// Address: 4a1380f4

int FUN_4a1380f4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_4a13b5ec();
  iVar2 = FUN_4a0b74f4(*(undefined4 *)(param_1 + 0x114),param_2);
  if (iVar1 <= iVar2) {
    iVar2 = iVar1;
  }
  return iVar2;
}



// Address: 4a138124

int FUN_4a138124(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_4c [20];
  int local_38 [2];
  int local_30;
  int *local_2c;
  
  iVar2 = FUN_4a13776c();
  piVar8 = *(int **)(param_1 + 0x13c);
  iVar9 = *(int *)(iVar2 + 8);
  if (piVar8 == (int *)0x0) {
    thunk_FUN_4a161570(0x18);
    piVar8 = (int *)FUN_4a0c6bc0();
    *piVar8 = (int)PTR_PTR_4a13860c;
    piVar8[2] = 10;
    piVar8[3] = 0;
    piVar8[4] = 0;
    piVar8[5] = 0;
    if (0 < iVar9) {
      piVar8[3] = iVar9;
      iVar3 = thunk_FUN_4a161570(iVar9 << 2);
      piVar8[5] = iVar3;
      if (iVar3 != 0) {
        iVar3 = 0;
        if (0 < piVar8[4]) {
          do {
            iVar6 = iVar3 + 1;
            *(undefined4 *)(piVar8[5] + iVar3 * 4) = *(undefined4 *)(iVar3 * 4);
            iVar3 = iVar6;
          } while (iVar6 < piVar8[4]);
        }
        thunk_FUN_4a161530(0);
      }
      iVar3 = piVar8[4];
      if (piVar8[4] < piVar8[3]) {
        do {
          iVar6 = iVar3 + 1;
          *(undefined4 *)(piVar8[5] + iVar3 * 4) = 0;
          iVar3 = iVar6;
        } while (iVar6 < piVar8[3]);
      }
    }
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 0xc))(piVar8);
    }
    *(int **)(param_1 + 0x13c) = piVar8;
  }
  if (piVar8[3] < iVar9) {
    piVar8[3] = iVar9;
    iVar6 = piVar8[5];
    iVar3 = thunk_FUN_4a161570(iVar9 << 2);
    piVar8[5] = iVar3;
    if (iVar3 != 0) {
      iVar3 = 0;
      if (0 < piVar8[4]) {
        do {
          iVar7 = iVar3 + 1;
          *(undefined4 *)(piVar8[5] + iVar3 * 4) = *(undefined4 *)(iVar6 + iVar3 * 4);
          iVar3 = iVar7;
        } while (iVar7 < piVar8[4]);
      }
      thunk_FUN_4a161530(iVar6);
    }
    iVar3 = piVar8[4];
    if (piVar8[4] < piVar8[3]) {
      do {
        iVar6 = iVar3 + 1;
        *(undefined4 *)(piVar8[5] + iVar3 * 4) = 0;
        iVar3 = iVar6;
      } while (iVar6 < piVar8[3]);
    }
  }
  iVar3 = piVar8[4];
  while (iVar3 < iVar9) {
    thunk_FUN_4a161570(0x48);
    piVar4 = (int *)FUN_4a0b8a1c();
    iVar3 = piVar8[3];
    if ((piVar8[4] == iVar3) && (iVar6 = piVar8[2] + iVar3, iVar3 < iVar6)) {
      piVar8[3] = iVar6;
      iVar7 = piVar8[5];
      iVar3 = thunk_FUN_4a161570(iVar6 * 4);
      piVar8[5] = iVar3;
      if (iVar3 != 0) {
        iVar3 = 0;
        if (0 < piVar8[4]) {
          do {
            iVar6 = iVar3 + 1;
            *(undefined4 *)(piVar8[5] + iVar3 * 4) = *(undefined4 *)(iVar7 + iVar3 * 4);
            iVar3 = iVar6;
          } while (iVar6 < piVar8[4]);
        }
        thunk_FUN_4a161530(iVar7);
      }
      iVar3 = piVar8[4];
      if (piVar8[4] < piVar8[3]) {
        do {
          iVar6 = iVar3 + 1;
          *(undefined4 *)(piVar8[5] + iVar3 * 4) = 0;
          iVar3 = iVar6;
        } while (iVar6 < piVar8[3]);
      }
    }
    iVar3 = piVar8[4];
    piVar8[4] = iVar3 + 1;
    piVar10 = *(int **)(piVar8[5] + iVar3 * 4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))();
    }
    *(int **)(piVar8[5] + iVar3 * 4) = piVar4;
    if ((piVar10 != (int *)0x0) && (iVar3 = (**(code **)(*piVar10 + 8))(piVar10), iVar3 != 0)) {
      (**(code **)(*piVar10 + 4))(piVar10);
    }
    iVar3 = piVar8[4];
  }
  puVar5 = (undefined4 *)FUN_4a0c6bc0(local_38);
  *puVar5 = PTR_PTR_4a138610;
  puVar5[2] = *(undefined4 *)(param_1 + 0x148);
  piVar4 = *(int **)(param_1 + 0x14c);
  puVar5[3] = piVar4;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))();
  }
  puVar1 = PTR_PTR_4a138614;
  *puVar5 = PTR_PTR_4a138614;
  if (local_2c == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = local_2c[2];
  }
  if ((iVar3 == 0) || (local_30 != iVar9)) {
    piVar4 = (int *)FUN_4a0c6bc0(auStack_4c);
    piVar4[2] = 0;
    piVar4[3] = 0;
    *piVar4 = (int)puVar1;
    if (0 < iVar9) {
      iVar3 = FUN_4a15e080(iVar9 << 2);
      if (iVar3 == 0) {
        iVar3 = FUN_4a1669a8();
      }
      iVar6 = 0;
      do {
        *(undefined4 *)(iVar3 + iVar6 * 4) = 0;
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar9);
      thunk_FUN_4a161570(0x18);
      puVar5 = (undefined4 *)FUN_4a0c0628();
      puVar5[3] = 4;
      puVar5[4] = iVar9;
      puVar1 = PTR_PTR_4a138618;
      *puVar5 = PTR_PTR_4a138618;
      puVar5[2] = iVar3;
      *(undefined1 *)(puVar5 + 5) = 1;
      if (puVar5 != (undefined4 *)0x0) {
        (**(code **)(puVar1 + 0xc))(puVar5);
      }
      (**(code **)(*piVar4 + 0x1c))(piVar4);
      piVar4[2] = iVar9;
      piVar4[3] = (int)puVar5;
    }
    iVar3 = piVar4[2];
    piVar4 = (int *)piVar4[3];
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))(piVar4);
    }
    (**(code **)(local_38[0] + 0x1c))(local_38);
    local_30 = iVar3;
    local_2c = piVar4;
    FUN_4a16b24c(auStack_4c);
    piVar4 = local_2c;
    iVar3 = local_30;
    if (local_2c != (int *)0x0) {
      (**(code **)(*local_2c + 0xc))(local_2c);
    }
    (**(code **)(*(int *)(param_1 + 0x140) + 0x1c))((int *)(param_1 + 0x140));
    *(int *)(param_1 + 0x148) = iVar3;
    *(int **)(param_1 + 0x14c) = piVar4;
  }
  iVar3 = 0;
  if (0 < iVar9) {
    do {
      if (*(int *)(iVar2 + 0xc) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(iVar2 + 0xc) + 8);
      }
      uVar12 = *(undefined4 *)(iVar6 + iVar3 * 4);
      uVar11 = *(undefined4 *)(piVar8[5] + iVar3 * 4);
      FUN_4a13b6a8(uVar12,param_1,uVar11);
      uVar12 = FUN_4a137f60(param_1,uVar12);
      FUN_4a0b7d00(uVar11,uVar12);
      if (local_2c == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = local_2c[2];
      }
      *(undefined4 *)(iVar6 + iVar3 * 4) = uVar11;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar9);
  }
  FUN_4a16b24c(local_38);
  return param_1 + 0x140;
}



// Address: 4a138624

void FUN_4a138624(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a138650;
  return;
}



// Address: 4a138654

int FUN_4a138654(int param_1)

{
  int iVar1;
  
  switch(*(undefined4 *)(param_1 + 0x30)) {
  default:
    iVar1 = 0;
    break;
  case 1:
    iVar1 = 1;
    break;
  case 2:
  case 5:
    iVar1 = 2;
    break;
  case 3:
  case 4:
    iVar1 = 4;
  }
  return *(int *)(param_1 + 0x2c) * iVar1;
}



// Address: 4a1386ac

void FUN_4a1386ac(int param_1,int param_2,int param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int unaff_r4;
  int iVar5;
  int unaff_r5;
  int iVar6;
  undefined1 *puVar7;
  
  iVar5 = *(int *)(param_1 + 0x2c);
  iVar6 = *(int *)(param_1 + 0x44);
  puVar7 = (undefined1 *)(param_2 * iVar6 + *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x3c));
  *param_4 = *puVar7;
  param_4[1] = puVar7[1];
  puVar1 = param_4 + 2;
  puVar3 = puVar7 + 2;
  if (2 < iVar5) {
    puVar3 = puVar7 + 3;
    puVar1 = param_4 + 3;
    param_4[2] = puVar7[2];
  }
  puVar2 = puVar1;
  if (3 < iVar5) {
    puVar2 = puVar1 + 1;
    *puVar1 = *puVar3;
  }
  puVar7 = puVar7 + iVar6;
  if (param_3 < 2) {
    iVar5 = unaff_r4;
    iVar6 = unaff_r5;
  }
  iVar4 = 1;
  if (1 < param_3) {
    do {
      *puVar2 = *puVar7;
      puVar2[1] = puVar7[1];
      puVar1 = puVar2 + 2;
      if (2 < iVar5) {
        puVar2[2] = puVar7[2];
        puVar1 = puVar2 + 3;
        if (3 < iVar5) {
          puVar1 = puVar2 + 4;
          puVar2[3] = puVar7[3];
        }
      }
      iVar4 = iVar4 + 1;
      puVar7 = puVar7 + iVar6;
      puVar2 = puVar1;
    } while (iVar4 < param_3);
    return;
  }
  return;
}



// Address: 4a138794

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a138794(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  int unaff_r5;
  int iVar11;
  char *pcVar12;
  short *psVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 uStack_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int iStack_34;
  int local_30;
  int local_2c;
  undefined4 *puStack_28;
  
  puStack_28 = param_4;
  local_2c = param_3;
  local_30 = param_2;
  iStack_34 = param_1;
  iVar11 = *(int *)(param_1 + 0x2c);
  iVar15 = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x34);
  local_38 = *(int *)(param_1 + 0x44);
  switch(*(undefined4 *)(param_1 + 0x30)) {
  default:
    return;
  case 1:
    pcVar12 = (char *)(param_2 * local_38 + iVar15);
    uVar6 = FUN_4a171fac((int)*pcVar12);
    *param_4 = uVar6;
    uVar6 = FUN_4a171fac((int)pcVar12[1]);
    param_4[1] = uVar6;
    puVar2 = param_4 + 2;
    if (2 < iVar11) {
      uVar6 = FUN_4a171fac((int)pcVar12[2]);
      param_4[2] = uVar6;
      puVar2 = param_4 + 3;
      if (3 < iVar11) {
        uVar6 = FUN_4a171fac((int)pcVar12[3]);
        puVar2 = param_4 + 4;
        param_4[3] = uVar6;
      }
    }
    pcVar12 = pcVar12 + local_38;
    iVar15 = 1;
    if (param_3 < 2) {
      return;
    }
    do {
      uVar6 = FUN_4a171fac((int)*pcVar12);
      *puVar2 = uVar6;
      uVar6 = FUN_4a171fac((int)pcVar12[1]);
      puVar2[1] = uVar6;
      puVar4 = puVar2 + 2;
      if (2 < iVar11) {
        uVar6 = FUN_4a171fac((int)pcVar12[2]);
        puVar2[2] = uVar6;
        puVar4 = puVar2 + 3;
        if (3 < iVar11) {
          uVar6 = FUN_4a171fac((int)pcVar12[3]);
          puVar4 = puVar2 + 4;
          puVar2[3] = uVar6;
        }
      }
      iVar15 = iVar15 + 1;
      pcVar12 = pcVar12 + local_38;
      puVar2 = puVar4;
    } while (iVar15 < param_3);
    return;
  case 2:
    break;
  case 3:
    local_3c = 0;
    local_40 = 0;
    iVar14 = 0;
    iVar10 = 0;
    if (param_3 < 1) {
      return;
    }
    do {
      iVar16 = (local_30 + iVar10) * local_38;
      iVar17 = 0;
      if (0 < iVar11) {
        do {
          uVar6 = FUN_4a171fac(*(undefined4 *)(iVar15 + (iVar16 + iVar17) * 4));
          uVar6 = FUN_4a17295c(uVar6,0xfffffff0);
          iVar17 = iVar17 + 1;
          param_4[iVar14] = uVar6;
          iVar14 = iVar14 + 1;
        } while (iVar17 < iVar11);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < local_2c);
    return;
  case 4:
    puVar9 = (undefined4 *)(iVar15 + param_2 * local_38 * 4);
    *param_4 = *puVar9;
    param_4[1] = puVar9[1];
    puVar2 = param_4 + 2;
    puVar4 = puVar9 + 2;
    if (2 < iVar11) {
      puVar4 = puVar9 + 3;
      puVar2 = param_4 + 3;
      param_4[2] = puVar9[2];
    }
    puVar3 = puVar2;
    if (3 < iVar11) {
      puVar3 = puVar2 + 1;
      *puVar2 = *puVar4;
    }
    puVar2 = &uStack_48;
    if (param_3 < 2) {
      iVar11 = unaff_r5;
      puVar2 = (undefined4 *)register0x00000054;
    }
    puVar9 = puVar9 + local_38;
    iVar15 = 1;
    if (1 < param_3) {
      do {
        *puVar3 = *puVar9;
        puVar3[1] = puVar9[1];
        puVar4 = puVar3 + 2;
        if (2 < iVar11) {
          puVar3[2] = puVar9[2];
          puVar4 = puVar3 + 3;
          if (3 < iVar11) {
            puVar4 = puVar3 + 4;
            puVar3[3] = puVar9[3];
          }
        }
        iVar15 = iVar15 + 1;
        puVar9 = puVar9 + *(int *)((int)puVar2 + 0x10);
        puVar3 = puVar4;
      } while (iVar15 < param_3);
      return;
    }
    return;
  case 5:
    local_3c = 0;
    local_40 = 0;
    iVar14 = 0;
    local_44 = 0;
    if (param_3 < 1) {
      return;
    }
    do {
      iVar10 = 0;
      iVar17 = (local_30 + local_44) * local_38;
      if (0 < iVar11) {
        do {
          uVar5 = (uint)*(short *)(iVar15 + (iVar17 + iVar10) * 2);
          if ((int)uVar5 < 1) {
            uStack_48 = 1;
          }
          else {
            uStack_48 = 0xffffffff;
          }
          uVar1 = (uVar5 & 0x7fff) >> 10;
          uVar6 = FUN_4a172098(uVar5 & 0x3ff);
          uVar6 = FUN_4a17295c(uVar6,0xfffffff6);
          if (uVar1 != 0) {
            uVar6 = FUN_4a171a94(uVar6,0x3f800000);
          }
          uVar7 = FUN_4a171fac(1 << uVar1);
          uVar8 = FUN_4a171fac(uStack_48);
          uVar6 = FUN_4a17211c(uVar8,uVar6);
          uVar6 = FUN_4a17211c(uVar6,uVar7);
          uVar6 = FUN_4a17295c(uVar6,0xfffffff1);
          iVar10 = iVar10 + 1;
          param_4[iVar14] = uVar6;
          iVar14 = iVar14 + 1;
        } while (iVar10 < iVar11);
      }
      local_44 = local_44 + 1;
    } while (local_44 < local_2c);
    return;
  }
  psVar13 = (short *)(iVar15 + local_38 * param_2 * 2);
  uVar6 = FUN_4a171fac((int)*psVar13);
  *param_4 = uVar6;
  uVar6 = FUN_4a171fac((int)psVar13[1]);
  param_4[1] = uVar6;
  puVar2 = param_4 + 2;
  if (2 < iVar11) {
    uVar6 = FUN_4a171fac((int)psVar13[2]);
    param_4[2] = uVar6;
    puVar2 = param_4 + 3;
    if (3 < iVar11) {
      uVar6 = FUN_4a171fac((int)psVar13[3]);
      puVar2 = param_4 + 4;
      param_4[3] = uVar6;
    }
  }
  psVar13 = psVar13 + local_38;
  iVar15 = 1;
  if (param_3 < 2) {
    return;
  }
  do {
    uVar6 = FUN_4a171fac((int)*psVar13);
    *puVar2 = uVar6;
    uVar6 = FUN_4a171fac((int)psVar13[1]);
    puVar2[1] = uVar6;
    puVar4 = puVar2 + 2;
    if (2 < iVar11) {
      uVar6 = FUN_4a171fac((int)psVar13[2]);
      puVar2[2] = uVar6;
      puVar4 = puVar2 + 3;
      if (3 < iVar11) {
        uVar6 = FUN_4a171fac((int)psVar13[3]);
        puVar4 = puVar2 + 4;
        puVar2[3] = uVar6;
      }
    }
    iVar15 = iVar15 + 1;
    psVar13 = psVar13 + local_38;
    puVar2 = puVar4;
  } while (iVar15 < param_3);
  return;
}



// Address: 4a138c44

void FUN_4a138c44(int param_1,int param_2,int param_3,undefined2 *param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int unaff_r4;
  int iVar5;
  int unaff_r5;
  int iVar6;
  undefined2 *puVar7;
  
  iVar5 = *(int *)(param_1 + 0x2c);
  iVar6 = *(int *)(param_1 + 0x44);
  puVar7 = (undefined2 *)(*(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x3c) + param_2 * iVar6 * 2)
  ;
  *param_4 = *puVar7;
  param_4[1] = puVar7[1];
  puVar2 = param_4 + 2;
  puVar3 = puVar7 + 2;
  if (2 < iVar5) {
    puVar3 = puVar7 + 3;
    puVar2 = param_4 + 3;
    param_4[2] = puVar7[2];
  }
  puVar1 = puVar2;
  if (3 < iVar5) {
    puVar1 = puVar2 + 1;
    *puVar2 = *puVar3;
  }
  puVar7 = puVar7 + iVar6;
  if (param_3 < 2) {
    iVar5 = unaff_r4;
    iVar6 = unaff_r5;
  }
  iVar4 = 1;
  if (1 < param_3) {
    do {
      *puVar1 = *puVar7;
      puVar1[1] = puVar7[1];
      puVar2 = puVar1 + 2;
      if (2 < iVar5) {
        puVar1[2] = puVar7[2];
        puVar2 = puVar1 + 3;
        if (3 < iVar5) {
          puVar2 = puVar1 + 4;
          puVar1[3] = puVar7[3];
        }
      }
      iVar4 = iVar4 + 1;
      puVar7 = puVar7 + iVar6;
      puVar1 = puVar2;
    } while (iVar4 < param_3);
    return;
  }
  return;
}



// Address: 4a138d30

void FUN_4a138d30(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  int unaff_r4;
  int iVar5;
  int unaff_r5;
  int iVar6;
  undefined1 *puVar7;
  
  puVar7 = (undefined1 *)0x0;
  if (*(int *)(param_4 + 0xc) != 0) {
    puVar7 = *(undefined1 **)(*(int *)(param_4 + 0xc) + 8);
  }
  iVar5 = *(int *)(param_1 + 0x2c);
  iVar6 = *(int *)(param_1 + 0x44);
  puVar4 = (undefined1 *)(param_2 * iVar6 + *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x3c));
  *puVar7 = *puVar4;
  puVar7[1] = puVar4[1];
  puVar1 = puVar7 + 2;
  puVar2 = puVar4 + 2;
  if (2 < iVar5) {
    puVar2 = puVar4 + 3;
    puVar1 = puVar7 + 3;
    puVar7[2] = puVar4[2];
  }
  puVar7 = puVar1;
  if (3 < iVar5) {
    puVar7 = puVar1 + 1;
    *puVar1 = *puVar2;
  }
  puVar4 = puVar4 + iVar6;
  if (param_3 < 2) {
    iVar5 = unaff_r4;
    iVar6 = unaff_r5;
  }
  iVar3 = 1;
  if (1 < param_3) {
    do {
      *puVar7 = *puVar4;
      puVar7[1] = puVar4[1];
      puVar1 = puVar7 + 2;
      if (2 < iVar5) {
        puVar7[2] = puVar4[2];
        puVar1 = puVar7 + 3;
        if (3 < iVar5) {
          puVar1 = puVar7 + 4;
          puVar7[3] = puVar4[3];
        }
      }
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + iVar6;
      puVar7 = puVar1;
    } while (iVar3 < param_3);
    return;
  }
  return;
}



// Address: 4a138e28

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a138e28(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int unaff_r5;
  char *pcVar12;
  short *psVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 *puStack_28;
  
  puVar9 = (undefined4 *)0x0;
  if (*(int *)(param_4 + 0xc) != 0) {
    puVar9 = *(undefined4 **)(*(int *)(param_4 + 0xc) + 8);
  }
  puStack_28 = puVar9;
  iStack_2c = param_3;
  iStack_30 = param_2;
  iStack_34 = param_1;
  iVar11 = *(int *)(param_1 + 0x2c);
  iVar15 = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x34);
  iStack_38 = *(int *)(param_1 + 0x44);
  switch(*(undefined4 *)(param_1 + 0x30)) {
  default:
    return;
  case 1:
    pcVar12 = (char *)(param_2 * iStack_38 + iVar15);
    uVar5 = FUN_4a171fac((int)*pcVar12);
    *puVar9 = uVar5;
    uVar5 = FUN_4a171fac((int)pcVar12[1]);
    puVar9[1] = uVar5;
    puVar2 = puVar9 + 2;
    if (2 < iVar11) {
      uVar5 = FUN_4a171fac((int)pcVar12[2]);
      puVar9[2] = uVar5;
      puVar2 = puVar9 + 3;
      if (3 < iVar11) {
        uVar5 = FUN_4a171fac((int)pcVar12[3]);
        puVar2 = puVar9 + 4;
        puVar9[3] = uVar5;
      }
    }
    pcVar12 = pcVar12 + iStack_38;
    iVar15 = 1;
    if (param_3 < 2) {
      return;
    }
    do {
      uVar5 = FUN_4a171fac((int)*pcVar12);
      *puVar2 = uVar5;
      uVar5 = FUN_4a171fac((int)pcVar12[1]);
      puVar2[1] = uVar5;
      puVar9 = puVar2 + 2;
      if (2 < iVar11) {
        uVar5 = FUN_4a171fac((int)pcVar12[2]);
        puVar2[2] = uVar5;
        puVar9 = puVar2 + 3;
        if (3 < iVar11) {
          uVar5 = FUN_4a171fac((int)pcVar12[3]);
          puVar9 = puVar2 + 4;
          puVar2[3] = uVar5;
        }
      }
      iVar15 = iVar15 + 1;
      pcVar12 = pcVar12 + iStack_38;
      puVar2 = puVar9;
    } while (iVar15 < param_3);
    return;
  case 2:
    break;
  case 3:
    uStack_3c = 0;
    uStack_40 = 0;
    iVar14 = 0;
    iVar10 = 0;
    if (param_3 < 1) {
      return;
    }
    do {
      iVar16 = (iStack_30 + iVar10) * iStack_38;
      iVar17 = 0;
      if (0 < iVar11) {
        do {
          uVar5 = FUN_4a171fac(*(undefined4 *)(iVar15 + (iVar16 + iVar17) * 4));
          uVar5 = FUN_4a17295c(uVar5,0xfffffff0);
          iVar17 = iVar17 + 1;
          puVar9[iVar14] = uVar5;
          iVar14 = iVar14 + 1;
        } while (iVar17 < iVar11);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iStack_2c);
    return;
  case 4:
    puVar8 = (undefined4 *)(iVar15 + param_2 * iStack_38 * 4);
    *puVar9 = *puVar8;
    puVar9[1] = puVar8[1];
    puVar2 = puVar9 + 2;
    puVar3 = puVar8 + 2;
    if (2 < iVar11) {
      puVar3 = puVar8 + 3;
      puVar2 = puVar9 + 3;
      puVar9[2] = puVar8[2];
    }
    puVar9 = puVar2;
    if (3 < iVar11) {
      puVar9 = puVar2 + 1;
      *puVar2 = *puVar3;
    }
    puVar2 = &uStack_48;
    if (param_3 < 2) {
      iVar11 = unaff_r5;
      puVar2 = (undefined4 *)register0x00000054;
    }
    puVar8 = puVar8 + iStack_38;
    iVar15 = 1;
    if (1 < param_3) {
      do {
        *puVar9 = *puVar8;
        puVar9[1] = puVar8[1];
        puVar3 = puVar9 + 2;
        if (2 < iVar11) {
          puVar9[2] = puVar8[2];
          puVar3 = puVar9 + 3;
          if (3 < iVar11) {
            puVar3 = puVar9 + 4;
            puVar9[3] = puVar8[3];
          }
        }
        iVar15 = iVar15 + 1;
        puVar8 = puVar8 + *(int *)((int)puVar2 + 0x10);
        puVar9 = puVar3;
      } while (iVar15 < param_3);
      return;
    }
    return;
  case 5:
    uStack_3c = 0;
    uStack_40 = 0;
    iVar14 = 0;
    iStack_44 = 0;
    if (param_3 < 1) {
      return;
    }
    do {
      iVar10 = 0;
      iVar17 = (iStack_30 + iStack_44) * iStack_38;
      if (0 < iVar11) {
        do {
          uVar4 = (uint)*(short *)(iVar15 + (iVar17 + iVar10) * 2);
          if ((int)uVar4 < 1) {
            uStack_48 = 1;
          }
          else {
            uStack_48 = 0xffffffff;
          }
          uVar1 = (uVar4 & 0x7fff) >> 10;
          uVar5 = FUN_4a172098(uVar4 & 0x3ff);
          uVar5 = FUN_4a17295c(uVar5,0xfffffff6);
          if (uVar1 != 0) {
            uVar5 = FUN_4a171a94(uVar5,0x3f800000);
          }
          uVar6 = FUN_4a171fac(1 << uVar1);
          uVar7 = FUN_4a171fac(uStack_48);
          uVar5 = FUN_4a17211c(uVar7,uVar5);
          uVar5 = FUN_4a17211c(uVar5,uVar6);
          uVar5 = FUN_4a17295c(uVar5,0xfffffff1);
          iVar10 = iVar10 + 1;
          puVar9[iVar14] = uVar5;
          iVar14 = iVar14 + 1;
        } while (iVar10 < iVar11);
      }
      iStack_44 = iStack_44 + 1;
    } while (iStack_44 < iStack_2c);
    return;
  }
  psVar13 = (short *)(iVar15 + iStack_38 * param_2 * 2);
  uVar5 = FUN_4a171fac((int)*psVar13);
  *puVar9 = uVar5;
  uVar5 = FUN_4a171fac((int)psVar13[1]);
  puVar9[1] = uVar5;
  puVar2 = puVar9 + 2;
  if (2 < iVar11) {
    uVar5 = FUN_4a171fac((int)psVar13[2]);
    puVar9[2] = uVar5;
    puVar2 = puVar9 + 3;
    if (3 < iVar11) {
      uVar5 = FUN_4a171fac((int)psVar13[3]);
      puVar2 = puVar9 + 4;
      puVar9[3] = uVar5;
    }
  }
  psVar13 = psVar13 + iStack_38;
  iVar15 = 1;
  if (param_3 < 2) {
    return;
  }
  do {
    uVar5 = FUN_4a171fac((int)*psVar13);
    *puVar2 = uVar5;
    uVar5 = FUN_4a171fac((int)psVar13[1]);
    puVar2[1] = uVar5;
    puVar9 = puVar2 + 2;
    if (2 < iVar11) {
      uVar5 = FUN_4a171fac((int)psVar13[2]);
      puVar2[2] = uVar5;
      puVar9 = puVar2 + 3;
      if (3 < iVar11) {
        uVar5 = FUN_4a171fac((int)psVar13[3]);
        puVar9 = puVar2 + 4;
        puVar2[3] = uVar5;
      }
    }
    iVar15 = iVar15 + 1;
    psVar13 = psVar13 + iStack_38;
    puVar2 = puVar9;
  } while (iVar15 < param_3);
  return;
}



// Address: 4a138e3c

void FUN_4a138e3c(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int unaff_r4;
  int iVar5;
  int unaff_r5;
  int iVar6;
  undefined4 *puVar7;
  
  puVar7 = (undefined4 *)0x0;
  if (*(int *)(param_4 + 0xc) != 0) {
    puVar7 = *(undefined4 **)(*(int *)(param_4 + 0xc) + 8);
  }
  iVar5 = *(int *)(param_1 + 0x2c);
  iVar6 = *(int *)(param_1 + 0x44);
  puVar4 = (undefined4 *)(*(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x3c) + param_2 * iVar6 * 4)
  ;
  *puVar7 = *puVar4;
  puVar7[1] = puVar4[1];
  puVar1 = puVar7 + 2;
  puVar2 = puVar4 + 2;
  if (2 < iVar5) {
    puVar2 = puVar4 + 3;
    puVar1 = puVar7 + 3;
    puVar7[2] = puVar4[2];
  }
  puVar7 = puVar1;
  if (3 < iVar5) {
    puVar7 = puVar1 + 1;
    *puVar1 = *puVar2;
  }
  puVar4 = puVar4 + iVar6;
  if (param_3 < 2) {
    iVar5 = unaff_r4;
    iVar6 = unaff_r5;
  }
  iVar3 = 1;
  if (1 < param_3) {
    do {
      *puVar7 = *puVar4;
      puVar7[1] = puVar4[1];
      puVar1 = puVar7 + 2;
      if (2 < iVar5) {
        puVar7[2] = puVar4[2];
        puVar1 = puVar7 + 3;
        if (3 < iVar5) {
          puVar1 = puVar7 + 4;
          puVar7[3] = puVar4[3];
        }
      }
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + iVar6;
      puVar7 = puVar1;
    } while (iVar3 < param_3);
    return;
  }
  return;
}



// Address: 4a138f34

void FUN_4a138f34(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  int unaff_r4;
  int iVar5;
  int unaff_r5;
  int iVar6;
  undefined2 *puVar7;
  
  puVar7 = (undefined2 *)0x0;
  if (*(int *)(param_4 + 0xc) != 0) {
    puVar7 = *(undefined2 **)(*(int *)(param_4 + 0xc) + 8);
  }
  iVar5 = *(int *)(param_1 + 0x2c);
  iVar6 = *(int *)(param_1 + 0x44);
  puVar4 = (undefined2 *)(*(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x3c) + param_2 * iVar6 * 2)
  ;
  *puVar7 = *puVar4;
  puVar7[1] = puVar4[1];
  puVar1 = puVar7 + 2;
  puVar2 = puVar4 + 2;
  if (2 < iVar5) {
    puVar2 = puVar4 + 3;
    puVar1 = puVar7 + 3;
    puVar7[2] = puVar4[2];
  }
  puVar7 = puVar1;
  if (3 < iVar5) {
    puVar7 = puVar1 + 1;
    *puVar1 = *puVar2;
  }
  puVar4 = puVar4 + iVar6;
  if (param_3 < 2) {
    iVar5 = unaff_r4;
    iVar6 = unaff_r5;
  }
  iVar3 = 1;
  if (1 < param_3) {
    do {
      *puVar7 = *puVar4;
      puVar7[1] = puVar4[1];
      puVar1 = puVar7 + 2;
      if (2 < iVar5) {
        puVar7[2] = puVar4[2];
        puVar1 = puVar7 + 3;
        if (3 < iVar5) {
          puVar1 = puVar7 + 4;
          puVar7[3] = puVar4[3];
        }
      }
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + iVar6;
      puVar7 = puVar1;
    } while (iVar3 < param_3);
    return;
  }
  return;
}



// Address: 4a139030

int FUN_4a139030(int param_1)

{
  return *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x34);
}



// Address: 4a139040

undefined4 * FUN_4a139040(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  thunk_FUN_4a161570(0x4c);
  puVar1 = (undefined4 *)FUN_4a0b7654();
  *puVar1 = PTR_PTR_4a1390c0;
  puVar2 = (undefined4 *)thunk_FUN_4a161570(0x1c);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  *puVar2 = 0;
  puVar1[0xb] = 0;
  puVar1[10] = puVar2;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *(undefined1 *)(puVar1 + 0xe) = 1;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  return puVar1;
}



// Address: 4a1390c4

undefined4 * FUN_4a1390c4(void)

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
  uVar2 = FUN_4a04d4d0(0,s_javax_microedition_m3g_Image2D_4a1390dc,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a1390fc

undefined4 FUN_4a1390fc(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x34);
    param_2[1] = *(undefined4 *)(param_1 + 0x38);
    param_2[2] = *(undefined4 *)(param_1 + 0x3c);
    param_2[3] = *(undefined4 *)(param_1 + 0x40);
  }
  return *(undefined4 *)(param_1 + 0x30);
}



// Address: 4a13912c

undefined4 FUN_4a13912c(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)0x0;
  if (*(int *)(param_2 + 0xc) != 0) {
    puVar1 = *(undefined4 **)(*(int *)(param_2 + 0xc) + 8);
  }
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)(param_1 + 0x34);
    puVar1[1] = *(undefined4 *)(param_1 + 0x38);
    puVar1[2] = *(undefined4 *)(param_1 + 0x3c);
    puVar1[3] = *(undefined4 *)(param_1 + 0x40);
  }
  return *(undefined4 *)(param_1 + 0x30);
}



// Address: 4a13916c

undefined4 FUN_4a13916c(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  if ((-1 < param_2) && (param_2 < 2)) {
    if (*(int *)(param_1 + 0x5c) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x5c) + 8);
    }
    iVar1 = *(int *)(iVar1 + param_2 * 4);
    if (iVar1 != 0) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + 8);
        param_3[1] = *(undefined4 *)(iVar1 + 0xc);
        param_3[2] = *(undefined4 *)(iVar1 + 0x10);
        param_3[3] = 0;
      }
      return *(undefined4 *)(iVar1 + 4);
    }
  }
  return 0;
}



// Address: 4a1391d0

undefined4 FUN_4a1391d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_3 + 0xc);
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar1 + 8);
  }
  if (iVar3 == 0) {
    if ((-1 < param_2) && (param_2 < 2)) {
      if (*(int *)(param_1 + 0x5c) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0x5c) + 8);
      }
      iVar1 = *(int *)(iVar1 + param_2 * 4);
      if (iVar1 != 0) goto LAB_4a139280;
    }
  }
  else {
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = *(undefined4 **)(iVar1 + 8);
    }
    if ((-1 < param_2) && (param_2 < 2)) {
      if (*(int *)(param_1 + 0x5c) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0x5c) + 8);
      }
      iVar1 = *(int *)(iVar1 + param_2 * 4);
      if (iVar1 != 0) {
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = *(undefined4 *)(iVar1 + 8);
          puVar2[1] = *(undefined4 *)(iVar1 + 0xc);
          puVar2[2] = *(undefined4 *)(iVar1 + 0x10);
          puVar2[3] = 0;
        }
LAB_4a139280:
        return *(undefined4 *)(iVar1 + 4);
      }
    }
  }
  return 0;
}



// Address: 4a139288

undefined4 FUN_4a139288(int param_1)

{
  return *(undefined4 *)(param_1 + 100);
}



// Address: 4a139290

undefined4 FUN_4a139290(int param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}



// Address: 4a1392a0

void FUN_4a1392a0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a1392cc;
  return;
}



// Address: 4a1392d8

undefined4 * FUN_4a1392d8(void)

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
  uVar2 = FUN_4a04d4d0(0,s_javax_microedition_m3g_Object3D_4a1392f0,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a139318

undefined4 * FUN_4a139318(void)

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
  uVar2 = FUN_4a04d4d0(0,s_javax_microedition_m3g_renderer__4a139330,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a13935c

void FUN_4a13935c(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)0x0;
  if (*(int *)(param_2 + 0xc) != 0) {
    puVar1 = *(undefined4 **)(*(int *)(param_2 + 0xc) + 8);
  }
  *puVar1 = *(undefined4 *)(param_1 + 0x28);
  puVar1[1] = *(undefined4 *)(param_1 + 0x2c);
  puVar1[2] = *(undefined4 *)(param_1 + 0x30);
  return;
}



// Address: 4a139388

void FUN_4a139388(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)0x0;
  if (*(int *)(param_2 + 0xc) != 0) {
    puVar2 = *(undefined4 **)(*(int *)(param_2 + 0xc) + 8);
  }
  uVar1 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x40));
  uVar1 = FUN_4a17295c(uVar1,0xfffffff0);
  *puVar2 = uVar1;
  uVar1 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x44));
  uVar1 = FUN_4a17295c(uVar1,0xfffffff0);
  puVar2[1] = uVar1;
  uVar1 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x48));
  uVar1 = FUN_4a17295c(uVar1,0xfffffff0);
  puVar2[2] = uVar1;
  uVar1 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x4c));
  uVar1 = FUN_4a17295c(uVar1,0xfffffff0);
  puVar2[3] = uVar1;
  return;
}



// Address: 4a1393f8

void FUN_4a1393f8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  FUN_4a139430();
  uVar1 = *(undefined4 *)(param_1 + 0x8c);
  uVar2 = *(undefined4 *)(param_1 + 0x90);
  uVar3 = *(undefined4 *)(param_1 + 0x94);
  uVar4 = *(undefined4 *)(param_1 + 0x98);
  uVar5 = *(undefined4 *)(param_1 + 0x9c);
  uVar6 = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  *(undefined4 *)(param_2 + 0x10) = uVar2;
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  *(undefined4 *)(param_2 + 0x18) = uVar4;
  *(undefined4 *)(param_2 + 0x1c) = uVar5;
  *(undefined4 *)(param_2 + 0x20) = uVar6;
  uVar1 = *(undefined4 *)(param_1 + 0xa8);
  uVar2 = *(undefined4 *)(param_1 + 0xac);
  uVar3 = *(undefined4 *)(param_1 + 0xb0);
  uVar4 = *(undefined4 *)(param_1 + 0xb4);
  uVar5 = *(undefined4 *)(param_1 + 0xb8);
  uVar6 = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(param_2 + 0x28) = uVar1;
  *(undefined4 *)(param_2 + 0x2c) = uVar2;
  *(undefined4 *)(param_2 + 0x30) = uVar3;
  *(undefined4 *)(param_2 + 0x34) = uVar4;
  *(undefined4 *)(param_2 + 0x38) = uVar5;
  *(undefined4 *)(param_2 + 0x3c) = uVar6;
  uVar1 = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 0x44) = uVar1;
  return;
}



// Address: 4a139430

void FUN_4a139430(int param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  undefined4 *puVar9;
  
  puVar1 = PTR_DAT_4a139524;
  if (*(char *)(param_1 + 200) == '\0') {
    iVar5 = param_1 + 0x80;
    uVar3 = *(undefined4 *)(PTR_DAT_4a139524 + 4);
    uVar4 = *(undefined4 *)(PTR_DAT_4a139524 + 8);
    uVar6 = *(undefined4 *)(PTR_DAT_4a139524 + 0xc);
    puVar9 = (undefined4 *)(PTR_DAT_4a139524 + 0x10);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)PTR_DAT_4a139524;
    *(undefined4 *)(param_1 + 0x8c) = uVar3;
    *(undefined4 *)(param_1 + 0x90) = uVar4;
    *(undefined4 *)(param_1 + 0x94) = uVar6;
    uVar3 = *(undefined4 *)(puVar1 + 0x14);
    uVar4 = *(undefined4 *)(puVar1 + 0x18);
    uVar6 = *(undefined4 *)(puVar1 + 0x1c);
    *(undefined4 *)(param_1 + 0x98) = *puVar9;
    *(undefined4 *)(param_1 + 0x9c) = uVar3;
    *(undefined4 *)(param_1 + 0xa0) = uVar4;
    *(undefined4 *)(param_1 + 0xa4) = uVar6;
    uVar3 = *(undefined4 *)(puVar1 + 0x24);
    uVar4 = *(undefined4 *)(puVar1 + 0x28);
    uVar6 = *(undefined4 *)(puVar1 + 0x2c);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(puVar1 + 0x20);
    *(undefined4 *)(param_1 + 0xac) = uVar3;
    *(undefined4 *)(param_1 + 0xb0) = uVar4;
    *(undefined4 *)(param_1 + 0xb4) = uVar6;
    uVar3 = *(undefined4 *)(puVar1 + 0x34);
    uVar4 = *(undefined4 *)(puVar1 + 0x38);
    uVar6 = *(undefined4 *)(puVar1 + 0x3c);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(puVar1 + 0x30);
    *(undefined4 *)(param_1 + 0xbc) = uVar3;
    *(undefined4 *)(param_1 + 0xc0) = uVar4;
    *(undefined4 *)(param_1 + 0xc4) = uVar6;
    uVar2 = *(uint *)(param_1 + 0x28) & 0x7fffffff;
    bVar7 = false;
    if (uVar2 == 0) {
      uVar2 = *(uint *)(param_1 + 0x2c) & 0x7fffffff;
      bVar7 = uVar2 == 0;
    }
    bVar8 = false;
    if (bVar7) {
      uVar2 = *(uint *)(param_1 + 0x30) & 0x7fffffff;
      bVar8 = uVar2 == 0;
    }
    if (!bVar8) {
      uVar2 = FUN_4a0b7e44(iVar5,*(uint *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                           *(undefined4 *)(param_1 + 0x30));
    }
    bVar7 = *(int *)(param_1 + 0x4c) == 0x10000;
    if (bVar7) {
      uVar2 = *(uint *)(param_1 + 0x40);
    }
    bVar8 = bVar7 && uVar2 == 0;
    if (bVar7 && uVar2 == 0) {
      uVar2 = *(uint *)(param_1 + 0x44);
      bVar8 = uVar2 == 0;
    }
    bVar7 = false;
    if (bVar8) {
      uVar2 = *(uint *)(param_1 + 0x48);
      bVar7 = uVar2 == 0;
    }
    if (!bVar7) {
      uVar2 = FUN_4a0b83ec(iVar5,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                           *(undefined4 *)(param_1 + 0x48));
    }
    bVar7 = *(int *)(param_1 + 0x34) == 0x3f800000;
    if (bVar7) {
      uVar2 = *(uint *)(param_1 + 0x38);
    }
    bVar8 = bVar7 && uVar2 == 0x3f800000;
    if (bVar7 && uVar2 == 0x3f800000) {
      bVar8 = *(int *)(param_1 + 0x3c) == 0x3f800000;
    }
    if (!bVar8) {
      FUN_4a0b88fc(iVar5,*(int *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
                   *(undefined4 *)(param_1 + 0x3c));
    }
    if (*(int *)(param_1 + 0x7c) != 0) {
      FUN_4a0b7d00(iVar5);
    }
    *(undefined1 *)(param_1 + 200) = 1;
    return;
  }
  return;
}



// Address: 4a139528

void FUN_4a139528(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_r4;
  undefined4 *puVar6;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  
  FUN_4a139430();
  iVar5 = param_1 + 0x88;
  puVar6 = (undefined4 *)(param_2 + 8);
  uVar1 = FUN_4a165730(puVar6,iVar5);
  uVar2 = FUN_4a165730(puVar6,param_1 + 0x8c);
  uVar3 = FUN_4a165730(puVar6,param_1 + 0x90);
  uVar4 = FUN_4a165730(puVar6,param_1 + 0x94);
  *puVar6 = uVar1;
  *(undefined4 *)(param_2 + 0xc) = uVar2;
  *(undefined4 *)(param_2 + 0x10) = uVar3;
  puVar6 = (undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_2 + 0x14) = uVar4;
  uVar1 = FUN_4a165730(puVar6,iVar5,uVar4,param_4,unaff_r4,unaff_r5,unaff_r6);
  uVar2 = FUN_4a165730(puVar6,param_1 + 0x8c);
  uVar3 = FUN_4a165730(puVar6,param_1 + 0x90);
  uVar4 = FUN_4a165730(puVar6,param_1 + 0x94);
  *puVar6 = uVar1;
  *(undefined4 *)(param_2 + 0x1c) = uVar2;
  *(undefined4 *)(param_2 + 0x20) = uVar3;
  puVar6 = (undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_2 + 0x24) = uVar4;
  uVar1 = FUN_4a165730(puVar6,iVar5);
  uVar2 = FUN_4a165730(puVar6,param_1 + 0x8c);
  uVar3 = FUN_4a165730(puVar6,param_1 + 0x90);
  uVar4 = FUN_4a165730(puVar6,param_1 + 0x94);
  *puVar6 = uVar1;
  *(undefined4 *)(param_2 + 0x2c) = uVar2;
  *(undefined4 *)(param_2 + 0x30) = uVar3;
  puVar6 = (undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_2 + 0x34) = uVar4;
  uVar1 = FUN_4a165730(puVar6,iVar5);
  uVar2 = FUN_4a165730(puVar6,param_1 + 0x8c);
  uVar3 = FUN_4a165730(puVar6,param_1 + 0x90);
  uVar4 = FUN_4a165730(puVar6,param_1 + 0x94);
  *(undefined4 *)(param_2 + 0x44) = uVar4;
  *(undefined4 *)(param_2 + 0x40) = uVar3;
  *(undefined4 *)(param_2 + 0x3c) = uVar2;
  *puVar6 = uVar1;
  return;
}



// Address: 4a139548

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a139548(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_4a13c094();
  if (param_2[1] != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar1 = FUN_4a0b74b0(*(int *)(param_1 + 0x28),*param_2);
    param_2[1] = uVar1;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    if (param_2[1] == 0) {
      uVar1 = FUN_4a0b74b0(*(int *)(param_1 + 0x2c),*param_2);
      param_2[1] = uVar1;
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a13958c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a1395b4

int FUN_4a1395b4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    return param_1 + 0x48;
  }
  uVar1 = FUN_4a0b3194(*(int *)(param_1 + 0x2c));
  FUN_4a0b1ee4(*(undefined4 *)(param_1 + 0x28),uVar1,0,param_1 + 0x34);
  puVar3 = (undefined4 *)0x0;
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x30);
  if (*(int *)(param_1 + 0x40) != 0) {
    puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x40) + 8);
  }
  if (0 < (int)*(uint *)(param_1 + 0x3c)) {
    puVar4 = puVar3 + -1;
    if ((*(uint *)(param_1 + 0x3c) & 1) != 0) {
      uVar2 = FUN_4a17211c(*puVar3,uVar1);
      *puVar3 = uVar2;
      puVar4 = puVar3;
    }
    for (iVar5 = *(int *)(param_1 + 0x3c) >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar2 = FUN_4a17211c(puVar4[1],uVar1);
      puVar4[1] = uVar2;
      uVar2 = FUN_4a17211c(puVar4[2],uVar1);
      puVar4 = puVar4 + 2;
      *puVar4 = uVar2;
    }
  }
  return param_1 + 0x34;
}



// Address: 4a13966c

int FUN_4a13966c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar1 = *(int *)PTR_DAT_4a1396c4;
  if (*(int *)(param_1 + 8) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x10);
  }
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    iVar3 = FUN_4a0b74f4(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + iVar2 * 4),param_2
                        );
    if (iVar3 < iVar1) {
      iVar1 = iVar3;
    }
  }
  return iVar1;
}



// Address: 4a1396d0

void FUN_4a1396d0(void)

{
  undefined4 *puVar1;
  
  thunk_FUN_4a161570(0xe8);
  puVar1 = (undefined4 *)FUN_4a0af6a4();
  *puVar1 = PTR_PTR_4a139724;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0xffffffff;
  puVar1[0x35] = 0xe3;
  puVar1[0x36] = 0xd2;
  puVar1[0x37] = 0xd0;
  puVar1[0x38] = 0xf1;
  puVar1[0x39] = 0xf1;
  return;
}



// Address: 4a139728

undefined4 * FUN_4a139728(void)

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
  uVar2 = FUN_4a04d4d0(0,s_javax_microedition_m3g_Texture2D_4a139740,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a139764

void FUN_4a139764(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  thunk_FUN_4a161570(0x48);
  puVar2 = (undefined4 *)FUN_4a0c6bc0();
  puVar1 = PTR_DAT_4a1397b0;
  *puVar2 = PTR_PTR_4a1397ac;
  uVar3 = *(undefined4 *)(puVar1 + 4);
  uVar4 = *(undefined4 *)(puVar1 + 8);
  uVar5 = *(undefined4 *)(puVar1 + 0xc);
  puVar2[2] = *(undefined4 *)puVar1;
  puVar2[3] = uVar3;
  puVar2[4] = uVar4;
  puVar2[5] = uVar5;
  uVar3 = *(undefined4 *)(puVar1 + 0x14);
  uVar4 = *(undefined4 *)(puVar1 + 0x18);
  uVar5 = *(undefined4 *)(puVar1 + 0x1c);
  puVar2[6] = *(undefined4 *)(puVar1 + 0x10);
  puVar2[7] = uVar3;
  puVar2[8] = uVar4;
  puVar2[9] = uVar5;
  uVar3 = *(undefined4 *)(puVar1 + 0x24);
  uVar4 = *(undefined4 *)(puVar1 + 0x28);
  uVar5 = *(undefined4 *)(puVar1 + 0x2c);
  puVar2[10] = *(undefined4 *)(puVar1 + 0x20);
  puVar2[0xb] = uVar3;
  puVar2[0xc] = uVar4;
  puVar2[0xd] = uVar5;
  uVar3 = *(undefined4 *)(puVar1 + 0x34);
  uVar4 = *(undefined4 *)(puVar1 + 0x38);
  uVar5 = *(undefined4 *)(puVar1 + 0x3c);
  puVar2[0xe] = *(undefined4 *)(puVar1 + 0x30);
  puVar2[0xf] = uVar3;
  puVar2[0x10] = uVar4;
  puVar2[0x11] = uVar5;
  return;
}



// Address: 4a1397b4

undefined4 * FUN_4a1397b4(void)

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
  uVar2 = FUN_4a04d4d0(0,s_javax_microedition_m3g_Transform_4a1397cc,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a1397f0

void FUN_4a1397f0(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  thunk_FUN_4a161570(0x5c);
  puVar2 = (undefined4 *)FUN_4a0afe80();
  *puVar2 = PTR_PTR_4a0a80d4;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  piVar3 = (int *)FUN_4a0c6bc0(puVar2 + 0x10);
  puVar1 = PTR_PTR_4a0a80d8;
  piVar3[2] = 0;
  piVar3[3] = 0;
  *piVar3 = (int)puVar1;
  iVar4 = FUN_4a15e080(8);
  if (iVar4 == 0) {
    iVar4 = FUN_4a1669a8();
  }
  iVar5 = 0;
  do {
    *(undefined4 *)(iVar4 + iVar5 * 4) = 0;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  thunk_FUN_4a161570(0x18);
  puVar2 = (undefined4 *)FUN_4a0c0628();
  puVar2[3] = 4;
  puVar2[4] = 2;
  puVar1 = PTR_PTR_4a0a80dc;
  *puVar2 = PTR_PTR_4a0a80dc;
  puVar2[2] = iVar4;
  *(undefined1 *)(puVar2 + 5) = 1;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)(puVar1 + 0xc))(puVar2);
  }
  (**(code **)(*piVar3 + 0x1c))(piVar3);
  piVar3[2] = 2;
  piVar3[3] = (int)puVar2;
  piVar3[5] = 0;
  iVar5 = 0;
  iVar4 = 1;
  piVar3[6] = 0;
  do {
    iVar4 = iVar4 + 1;
    if (piVar3[3] == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(piVar3[3] + 8);
    }
    *(undefined4 *)(iVar6 + iVar5 * 4) = 0;
    iVar5 = iVar5 + 1;
  } while (iVar4 < 3);
  return;
}



// Address: 4a139804

undefined4 * FUN_4a139804(void)

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
  uVar2 = FUN_4a04d4d0(0,s_javax_microedition_m3g_Appearanc_4a13981c,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a139840

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
/* WARNING: Removing unreachable block (ram,0x4a172990) */
/* WARNING: Removing unreachable block (ram,0x4a172994) */

undefined8 FUN_4a139840(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  char in_OV;
  bool bVar3;
  bool bVar4;
  
  uVar1 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x30));
  uVar2 = uVar1 >> 0x17 & 0xff;
  bVar3 = uVar2 == 0;
  if (!bVar3) {
    param_4 = uVar2 ^ 0xff;
    bVar3 = param_4 == 0;
  }
  bVar4 = bVar3;
  if (!bVar3) {
    in_OV = SBORROW4(param_4,-0x10);
    bVar4 = param_4 == 0xfffffff0;
  }
  bVar3 = !bVar3 && (int)(param_4 + 0x10) < 0;
  if (!bVar4 && bVar3 == (bool)in_OV) {
    in_OV = SCARRY4(uVar2,-0x10);
    bVar3 = (int)(uVar2 - 0x10) < 0;
    bVar4 = uVar2 == 0x10;
  }
  if (!bVar4 && bVar3 == (bool)in_OV) {
    return CONCAT44(0xfffffff0,uVar1 + 0xf8000000);
  }
  if (uVar2 == 0) {
    return CONCAT44(0xfffffff0,uVar1 & 0x80000000);
  }
  if (param_4 != 0) {
    return CONCAT44(0xfffffff0,uVar1 & 0x80000000);
  }
  if ((uVar1 & 0x7fffff) != 0) {
    return CONCAT44(0xfffffff0,DAT_4a171bb0);
  }
  return CONCAT44(0xfffffff0,uVar1);
}



// Address: 4a139858

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
/* WARNING: Removing unreachable block (ram,0x4a172990) */
/* WARNING: Removing unreachable block (ram,0x4a172994) */

undefined8 FUN_4a139858(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  char in_OV;
  bool bVar3;
  bool bVar4;
  
  uVar1 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x3c));
  uVar2 = uVar1 >> 0x17 & 0xff;
  bVar3 = uVar2 == 0;
  if (!bVar3) {
    param_4 = uVar2 ^ 0xff;
    bVar3 = param_4 == 0;
  }
  bVar4 = bVar3;
  if (!bVar3) {
    in_OV = SBORROW4(param_4,-0x10);
    bVar4 = param_4 == 0xfffffff0;
  }
  bVar3 = !bVar3 && (int)(param_4 + 0x10) < 0;
  if (!bVar4 && bVar3 == (bool)in_OV) {
    in_OV = SCARRY4(uVar2,-0x10);
    bVar3 = (int)(uVar2 - 0x10) < 0;
    bVar4 = uVar2 == 0x10;
  }
  if (!bVar4 && bVar3 == (bool)in_OV) {
    return CONCAT44(0xfffffff0,uVar1 + 0xf8000000);
  }
  if (uVar2 == 0) {
    return CONCAT44(0xfffffff0,uVar1 & 0x80000000);
  }
  if (param_4 != 0) {
    return CONCAT44(0xfffffff0,uVar1 & 0x80000000);
  }
  if ((uVar1 & 0x7fffff) != 0) {
    return CONCAT44(0xfffffff0,DAT_4a171bb0);
  }
  return CONCAT44(0xfffffff0,uVar1);
}



// Address: 4a139878

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
/* WARNING: Removing unreachable block (ram,0x4a172990) */
/* WARNING: Removing unreachable block (ram,0x4a172994) */

undefined8 FUN_4a139878(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  char in_OV;
  bool bVar3;
  bool bVar4;
  
  uVar1 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x38));
  uVar2 = uVar1 >> 0x17 & 0xff;
  bVar3 = uVar2 == 0;
  if (!bVar3) {
    param_4 = uVar2 ^ 0xff;
    bVar3 = param_4 == 0;
  }
  bVar4 = bVar3;
  if (!bVar3) {
    in_OV = SBORROW4(param_4,-0x10);
    bVar4 = param_4 == 0xfffffff0;
  }
  bVar3 = !bVar3 && (int)(param_4 + 0x10) < 0;
  if (!bVar4 && bVar3 == (bool)in_OV) {
    in_OV = SCARRY4(uVar2,-0x10);
    bVar3 = (int)(uVar2 - 0x10) < 0;
    bVar4 = uVar2 == 0x10;
  }
  if (!bVar4 && bVar3 == (bool)in_OV) {
    return CONCAT44(0xfffffff0,uVar1 + 0xf8000000);
  }
  if (uVar2 == 0) {
    return CONCAT44(0xfffffff0,uVar1 & 0x80000000);
  }
  if (param_4 != 0) {
    return CONCAT44(0xfffffff0,uVar1 & 0x80000000);
  }
  if ((uVar1 & 0x7fffff) != 0) {
    return CONCAT44(0xfffffff0,DAT_4a171bb0);
  }
  return CONCAT44(0xfffffff0,uVar1);
}



// Address: 4a139890

void FUN_4a139890(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a1398bc;
  return;
}



// Address: 4a1398c8

undefined4 * FUN_4a1398c8(void)

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
  uVar2 = FUN_4a04d4d0(0,s_javax_microedition_m3g_Graphics3_4a1398e0,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a13990c

void FUN_4a13990c(void)

{
  undefined4 *puVar1;
  
  thunk_FUN_4a161570(0x38);
  puVar1 = (undefined4 *)FUN_4a0b7654();
  *puVar1 = PTR_PTR_4a139954;
  puVar1[10] = 0xa0;
  puVar1[0xb] = 0xa8;
  puVar1[0xc] = 0xa5;
  *(undefined1 *)(puVar1 + 0xd) = 0;
  *(undefined1 *)((int)puVar1 + 0x35) = 0;
  *(undefined1 *)((int)puVar1 + 0x36) = 0;
  return;
}



// Address: 4a139958

undefined4 * FUN_4a139958(void)

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
  uVar2 = FUN_4a04d4d0(0,s_javax_microedition_m3g_PolygonMo_4a139970,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a139994

void FUN_4a139994(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  thunk_FUN_4a161570(0x170);
  puVar2 = (undefined4 *)FUN_4a0b4330();
  *puVar2 = PTR_PTR_4a0ace48;
  puVar2[0x45] = 0;
  *(undefined1 *)(puVar2 + 0x46) = 1;
  puVar2[0x47] = 0;
  puVar2[0x48] = 0;
  puVar2[0x49] = 0;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(puVar2 + 0x4a);
  puVar1 = PTR_PTR_4a0ace4c;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = puVar1;
  puVar2[5] = 0;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(puVar2 + 6);
  puVar1 = PTR_PTR_4a0ace50;
  puVar2[2] = 0;
  *puVar2 = puVar1;
  puVar2[3] = 0;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(puVar2 + 5);
  puVar1 = PTR_PTR_4a0ace54;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = puVar1;
  puVar2[5] = 0;
  puVar2[6] = 0;
  return;
}



// Address: 4a1399a8

undefined4 * FUN_4a1399a8(void)

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
  uVar2 = FUN_4a04d4d0(0,s_javax_microedition_m3g_Mesh_4a1399c0,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a1399dc

int * FUN_4a1399dc(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  thunk_FUN_4a161570(0x74);
  puVar2 = (undefined4 *)FUN_4a0b7654();
  *puVar2 = PTR_PTR_4a0ae67c;
  puVar2[0xb] = 0xffffffff;
  puVar2[10] = 0;
  puVar2[0xd] = 0x3f800000;
  puVar2[0xc] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  piVar3 = (int *)FUN_4a0c6bc0(puVar2 + 0x14);
  puVar1 = PTR_PTR_4a0ae680;
  piVar3[2] = 0;
  piVar3[3] = 0;
  *piVar3 = (int)puVar1;
  iVar4 = FUN_4a15e080(8);
  if (iVar4 == 0) {
    iVar4 = FUN_4a1669a8();
  }
  iVar5 = 0;
  do {
    *(undefined4 *)(iVar4 + iVar5 * 4) = 0;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  thunk_FUN_4a161570(0x18);
  puVar2 = (undefined4 *)FUN_4a0c0628();
  puVar1 = PTR_PTR_4a0ae684;
  puVar2[2] = iVar4;
  *puVar2 = puVar1;
  puVar2[3] = 4;
  puVar2[4] = 2;
  *(undefined1 *)(puVar2 + 5) = 1;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)(puVar1 + 0xc))(puVar2);
  }
  (**(code **)(*piVar3 + 0x1c))(piVar3);
  piVar3[2] = 2;
  piVar3[3] = (int)puVar2;
  piVar3[5] = 0;
  piVar3[6] = 0;
  *(undefined1 *)(piVar3 + 7) = 1;
  piVar3[8] = 0;
  return piVar3 + -0x14;
}



// Address: 4a1399f0

undefined4 * FUN_4a1399f0(void)

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
  uVar2 = FUN_4a04d4d0(0,s_javax_microedition_m3g_VertexBuf_4a139a08,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a139a2c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a139a2c(int param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 local_2c;
  int iStack_28;
  
  iStack_30 = param_1;
  local_2c = param_2;
  iStack_28 = param_3;
  if (param_3 == 0) {
    FUN_4a1393f8(param_2,param_1 + 0xf4);
    local_70 = *(undefined4 *)(param_1 + 0xfc);
    local_6c = *(undefined4 *)(param_1 + 0x100);
    local_68 = *(undefined4 *)(param_1 + 0x104);
    local_64 = *(undefined4 *)(param_1 + 0x108);
    local_60 = *(undefined4 *)(param_1 + 0x10c);
    uStack_5c = *(undefined4 *)(param_1 + 0x110);
    local_58 = *(undefined4 *)(param_1 + 0x114);
    local_54 = *(undefined4 *)(param_1 + 0x118);
    local_50 = *(undefined4 *)(param_1 + 0x11c);
    local_4c = *(undefined4 *)(param_1 + 0x120);
    uStack_48 = *(undefined4 *)(param_1 + 0x124);
    local_44 = *(undefined4 *)(param_1 + 0x128);
    local_40 = *(undefined4 *)(param_1 + 300);
    local_3c = *(undefined4 *)(param_1 + 0x130);
    local_38 = *(undefined4 *)(param_1 + 0x134);
    uStack_34 = *(undefined4 *)(param_1 + 0x138);
  }
  else {
    FUN_4a1393f8(param_2,param_1 + 0x13c);
    local_70 = *(undefined4 *)(param_1 + 0x144);
    local_6c = *(undefined4 *)(param_1 + 0x148);
    local_68 = *(undefined4 *)(param_1 + 0x14c);
    local_64 = *(undefined4 *)(param_1 + 0x150);
    local_60 = *(undefined4 *)(param_1 + 0x154);
    uStack_5c = *(undefined4 *)(param_1 + 0x158);
    local_58 = *(undefined4 *)(param_1 + 0x15c);
    local_54 = *(undefined4 *)(param_1 + 0x160);
    local_50 = *(undefined4 *)(param_1 + 0x164);
    local_4c = *(undefined4 *)(param_1 + 0x168);
    uStack_48 = *(undefined4 *)(param_1 + 0x16c);
    local_44 = *(undefined4 *)(param_1 + 0x170);
    local_40 = *(undefined4 *)(param_1 + 0x174);
    local_3c = *(undefined4 *)(param_1 + 0x178);
    local_38 = *(undefined4 *)(param_1 + 0x17c);
    uStack_34 = *(undefined4 *)(param_1 + 0x180);
  }
  (**(code **)(**(int **)(param_1 + 8) + 0xac))(*(int **)(param_1 + 8),0x1702);
  iVar5 = thunk_FUN_4a000e60(&local_70,PTR_DAT_4a139c88,0x40);
  uVar4 = local_38;
  uVar3 = local_3c;
  uVar2 = local_40;
  uVar10 = local_4c;
  uVar9 = local_50;
  uVar8 = local_60;
  if (iVar5 == 0) {
    FUN_4a1504dc();
  }
  else {
    local_60 = local_6c;
    local_6c = uVar8;
    local_50 = local_68;
    local_68 = uVar9;
    local_40 = local_64;
    local_64 = uVar2;
    local_4c = local_58;
    local_58 = uVar10;
    local_3c = local_54;
    local_54 = uVar3;
    local_38 = local_44;
    local_44 = uVar4;
    FUN_4a150544(&local_70);
  }
  iVar5 = FUN_4a13c360(local_2c);
  if (iVar5 == 0) {
    return;
  }
  iVar6 = FUN_4a13c300(local_2c);
  if (iVar6 == 0xe0) {
    uVar8 = 0x104;
  }
  else if (iVar6 == 0xe1) {
    uVar8 = 0xbe2;
  }
  else if (iVar6 == 0xe2) {
    uVar8 = 0x2101;
  }
  else if (iVar6 == 0xe3) {
    uVar8 = 0x2100;
  }
  else {
    uVar8 = 0x1e01;
  }
  iVar6 = FUN_4a13c320(local_2c);
  uVar9 = 0x2600;
  iVar7 = FUN_4a13c318(local_2c);
  puVar1 = PTR_DAT_4a139c8c;
  if (iVar7 == 0xd1) {
    uVar10 = 0x2601;
    uVar9 = 0x2601;
    if (((iVar6 != 0xd1) && (uVar9 = uVar10, iVar6 == 0xd2)) &&
       (iVar6 = FUN_4a0bc1f8(*(undefined4 *)PTR_DAT_4a139c8c), iVar6 != 400)) {
      FUN_4a0bc1f8(*(undefined4 *)puVar1);
    }
  }
  FUN_4a13c308(local_2c);
  FUN_4a13c310(local_2c);
  FUN_4a0b0338(*(undefined4 *)(param_1 + 8),iVar5,0xde1,uVar9);
  thunk_FUN_4a150aa8(0x2300,0x2200,uVar8);
  return;
}




/* AUTOMATED DECOMPILER OUTPUT. Not original source, not a buildable game.
 * Function boundaries, types, indirect calls, and data still require validation. */

// Address: 4a11d254

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

void FUN_4a11d254(int param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  code *UNRECOVERED_JUMPTABLE;
  uint local_8c [5];
  undefined4 local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_4a041910(1);
  puVar1 = PTR_DAT_4a11db18;
  iVar12 = *(int *)(param_1 + 0x20);
  local_48 = iVar12 + 0x278;
  local_4c = iVar12 + 0x128;
  local_50 = FUN_4a0bbcf0(*(undefined4 *)PTR_DAT_4a11db18,0x32);
  iVar2 = FUN_4a0bbcf0(*(undefined4 *)puVar1,0x28);
  iVar3 = FUN_4a0bbd68(*(undefined4 *)puVar1,0x1e,2);
  iVar4 = FUN_4a0bbe00(*(undefined4 *)puVar1,0x19,2);
  local_54 = 0x814;
  local_58 = FUN_4a06be4c(local_48,6);
  local_5c = FUN_4a06bf88(local_48,0x814,6);
  iVar13 = local_58 + 0x14;
  local_5c = local_5c + 0x4a;
  local_60 = iVar4 - (iVar13 >> 1);
  (**(code **)(*param_2 + 0xa0))(param_2,0);
  uVar5 = FUN_4a13ca78(iVar12);
  (**(code **)(*param_2 + 0x58))(param_2,0,0,uVar5,local_50);
  (**(code **)(*param_2 + 0xa0))(param_2,0);
  local_6c = FUN_4a13ca78(iVar12);
  iVar12 = FUN_4a13caa0(iVar12);
  (**(code **)(*param_2 + 0x58))(param_2,0,iVar12 - iVar2,local_6c,iVar2);
  FUN_4a09f3a4(local_4c,param_2);
  iVar2 = FUN_4a171fac(iVar13);
  uVar5 = FUN_4a171fac(local_5c);
  uVar6 = FUN_4a171fac(local_60);
  local_8c[3] = FUN_4a171fac(iVar3);
  local_70 = 0x3f800000;
  puVar11 = local_8c;
  local_8c[0] = 0x186;
  local_8c[1] = 0x189;
  local_8c[2] = 0x18c;
  local_8c[4] = uVar6;
  local_78 = uVar5;
  local_74 = iVar2;
  local_28 = local_8c[3];
  FUN_4a09ff60(local_4c,0x184,0x187,0x18a,0x185,0x188,0x18b);
  uVar5 = FUN_4a171fac(iVar4);
  local_8c[0] = 0;
  FUN_4a09f664(local_4c,0x14a,local_28,uVar5,0x3f800000,0x3f800000,0x3f800000);
  uVar5 = FUN_4a0cb6c4(param_1,0x80000);
  iVar2 = 1 - (uint)*(byte *)(param_1 + 0x67c);
  if (1 < *(byte *)(param_1 + 0x67c)) {
    iVar2 = 0;
  }
  FUN_4a0fa6e8(uVar5,local_4c,iVar3,iVar4,iVar2);
  puVar1 = PTR_DAT_4a11db18;
  uVar5 = FUN_4a0bbd68(*(undefined4 *)PTR_DAT_4a11db18,0x1e,2);
  uVar6 = *(undefined4 *)puVar1;
  local_6c = FUN_4a0bc200(uVar6);
  local_70 = FUN_4a0bc1f8(uVar6);
  if (local_70 < local_6c) {
    piVar10 = &local_70;
  }
  else {
    piVar10 = &local_6c;
  }
  uVar6 = FUN_4a0bbe00(*(undefined4 *)puVar1,*piVar10 + -0x1e,2);
  uVar7 = FUN_4a171fac();
  uVar8 = FUN_4a171fac(uVar5);
  local_8c[0] = 0;
  FUN_4a09f664(local_4c,0x178,uVar8,uVar7,0x3f800000,0x3f800000,0x3f800000);
  FUN_4a0bbb28(*(undefined4 *)puVar1);
  uVar7 = FUN_4a0cb6c4(param_1,1);
  iVar2 = 1 - (uint)*(byte *)(param_1 + 0x67c);
  if (1 < *(byte *)(param_1 + 0x67c)) {
    iVar2 = 0;
  }
  FUN_4a0fa6e8(uVar7,local_4c,uVar5,uVar6,iVar2);
  if (*(int *)(param_1 + 0x7f4) == 2) {
    uVar5 = *(undefined4 *)puVar1;
    local_6c = FUN_4a0bc200(uVar5);
    local_70 = FUN_4a0bc1f8(uVar5);
    if (local_6c < local_70) {
      piVar10 = &local_70;
    }
    else {
      piVar10 = &local_6c;
    }
    iVar4 = *piVar10;
    iVar2 = FUN_4a0bbcf0(*(undefined4 *)puVar1,0xfa);
    FUN_4a098798(*(undefined4 *)(param_1 + 0x6b8),0x80);
    FUN_4a098c68(*(undefined4 *)(param_1 + 0x6b8));
    FUN_4a0bbcb4(*(undefined4 *)puVar1);
    uVar5 = FUN_4a0bbcf0(*(undefined4 *)puVar1,200);
    uVar6 = FUN_4a0bbcf0(*(undefined4 *)puVar1,400);
    FUN_4a098d50(*(undefined4 *)(param_1 + 0x6b8),param_2,iVar4 - iVar2,0,uVar6,uVar5);
    FUN_4a0bbb28(*(undefined4 *)puVar1);
  }
  uVar5 = *(undefined4 *)puVar1;
  local_6c = FUN_4a0bc200(uVar5);
  local_70 = FUN_4a0bc1f8(uVar5);
  if (local_6c < local_70) {
    piVar10 = &local_70;
  }
  else {
    piVar10 = &local_6c;
  }
  uVar5 = FUN_4a0bbd68(*(undefined4 *)puVar1,*piVar10 + -0x28,2);
  local_64 = FUN_4a0bbe00(*(undefined4 *)puVar1,0x23,2);
  local_68 = FUN_4a17211c(*(undefined4 *)PTR_DAT_4a11db20,DAT_4a11db1c);
  if (*(int *)(param_1 + 0x7f4) == 0) {
    iVar2 = *(int *)(param_1 + 0x85c);
    local_2c = FUN_4a171fac(iVar2);
    uVar6 = FUN_4a171fac(iVar2 - *(int *)(param_1 + 0x854));
    uVar6 = FUN_4a171bb8(uVar6,local_2c);
    uVar9 = FUN_4a17211c(uVar6,0x43b40000);
    local_30 = FUN_4a171fac(local_64);
    local_34 = FUN_4a171fac(uVar5);
    local_8c[0] = 0;
    FUN_4a09f664(local_4c,0x17e,local_34,local_30,0x3f800000,0x3f800000,0x3f800000);
    FUN_4a09f3a4(local_4c,param_2);
    (**(code **)(*param_2 + 0xb4))(param_2,0xdb,0x1d,0x1d,0x7f);
    uVar6 = FUN_4a171e1c(uVar9 ^ 0x80000000);
    (**(code **)(*param_2 + 0x54))(param_2,uVar5,local_64,0x32,0x32,0xffffffa6,uVar6);
    uVar5 = FUN_4a171a94(uVar9,0x42b40000);
    uVar5 = FUN_4a1724e0(uVar5,0x43b40000);
    local_38 = FUN_4a17211c(uVar5,local_68);
    uVar5 = FUN_4a002d64();
    uVar5 = FUN_4a17211c(uVar5,0x41900000);
    FUN_4a171a94(local_34,uVar5);
    uVar5 = FUN_4a171e1c();
    uVar6 = FUN_4a002f08(local_38);
    uVar6 = FUN_4a17211c(uVar6,0x41900000);
    FUN_4a171a94(local_30,uVar6);
    FUN_4a171e1c();
    uVar6 = FUN_4a171fac();
    uVar5 = FUN_4a171fac(uVar5);
    local_8c[0] = uVar9;
    FUN_4a09f664(local_4c,0x180,uVar5,uVar6,0x3f800000,0x3f800000,0x3f800000);
    local_8c[0] = 0;
    FUN_4a09f664(local_4c,0x17f,local_34,local_30,0x3f800000,0x3f800000,0x3f800000);
LAB_4a11d948:
    if (*(int *)(param_1 + 0x7f4) == 2) {
      iVar2 = 0x5a;
      goto LAB_4a11d95c;
    }
  }
  else if (*(int *)(param_1 + 0x7f4) == 2) {
    iVar2 = *(int *)(param_1 + 0x85c);
    local_3c = FUN_4a171fac(iVar2);
    uVar6 = FUN_4a171fac(iVar2 - *(int *)(param_1 + 0x854));
    uVar6 = FUN_4a171bb8(uVar6,local_3c);
    uVar9 = FUN_4a17211c(uVar6,0x43b40000);
    uVar6 = FUN_4a171fac(local_64);
    local_40 = FUN_4a171fac(uVar5);
    local_8c[0] = 0;
    FUN_4a09f664(local_4c,0x182,local_40,uVar6,0x3f800000,0x3f800000,0x3f800000);
    FUN_4a09f3a4(local_4c,param_2);
    (**(code **)(*param_2 + 0xa0))(param_2,DAT_4a11db24);
    uVar7 = FUN_4a171e1c(uVar9 ^ 0x80000000);
    (**(code **)(*param_2 + 0x54))(param_2,uVar5,local_64,0x32,0x32,0xffffffa6,uVar7);
    local_8c[0] = 0;
    FUN_4a09f664(local_4c,0x183,local_40,uVar6,0x3f800000,0x3f800000,0x3f800000);
    goto LAB_4a11d948;
  }
  iVar2 = 0x14;
LAB_4a11d95c:
  FUN_4a09f9c8(local_4c,0x168);
  iVar4 = FUN_4a171e1c();
  uVar5 = *(undefined4 *)puVar1;
  local_6c = FUN_4a0bc200(uVar5);
  local_70 = FUN_4a0bc1f8(uVar5);
  if (local_70 < local_6c) {
    piVar10 = &local_70;
  }
  else {
    piVar10 = &local_6c;
  }
  iVar12 = FUN_4a0bbe00(*(undefined4 *)PTR_DAT_4a11db18,*piVar10 - iVar4,2);
  if ((*(int *)(param_1 + 0x7fc) != -1) && (*(char *)(param_1 + 0x210) == '\0')) {
    iVar13 = FUN_4a06bf88(local_48,*(int *)(param_1 + 0x7fc),4);
    puVar1 = PTR_DAT_4a11db18;
    iVar13 = iVar13 + 0x28;
    local_6c = *(int *)PTR_DAT_4a11db18;
    local_70 = FUN_4a0bc200();
    local_74 = FUN_4a0bc1f8(local_6c);
    if (local_70 < local_74) {
      piVar10 = &local_74;
    }
    else {
      piVar10 = &local_70;
    }
    puVar11 = (uint *)FUN_4a0bbd68(*(undefined4 *)puVar1,(*piVar10 - iVar13) - iVar2,0);
    local_44 = FUN_4a171fac(iVar13);
    uVar5 = FUN_4a171fac(iVar12 + (iVar4 >> 1));
    uVar6 = FUN_4a171fac((int)puVar11 + (iVar13 >> 1));
    local_8c[0] = 0x3f800000;
    local_8c[1] = 0x3f800000;
    local_8c[2] = 0x40400000;
    local_8c[3] = 0x40400000;
    FUN_4a0a02bc(local_4c,0x167,0x168,0x169,uVar6,uVar5,local_44);
  }
  FUN_4a09f3a4(local_4c,param_2);
  FUN_4a06b074(local_48,param_2,local_54,6,iVar3 + 0x2c,local_60 + 10,9);
  if ((*(int *)(param_1 + 0x7fc) != -1) && (*(char *)(param_1 + 0x210) == '\0')) {
    FUN_4a06b074(local_48,param_2,*(int *)(param_1 + 0x7fc),4,puVar11 + 5,iVar12 + (iVar4 >> 1),0x11
                );
  }
  FUN_4a0bbcb4(*(undefined4 *)PTR_DAT_4a11db18);
  puVar1 = PTR_DAT_4a041a9c;
  iVar2 = 0;
  if (*(int *)PTR_DAT_4a041a9c != 0) {
    iVar2 = *(int *)(PTR_DAT_4a041a9c + 4);
  }
  if (*(int *)PTR_DAT_4a041a9c != 0 && iVar2 != 0) {
    *(undefined4 *)(PTR_DAT_4a041a9c + 0x28) = 0;
    iVar2 = *(int *)(PTR_DAT_4a041a9c + 0x38);
    if (*(int *)(PTR_DAT_4a041a9c + 0x1c) != 0) {
      *(int *)(puVar1 + 8) = *(int *)(PTR_DAT_4a041a9c + 0x34) + *(int *)(puVar1 + 0x3c);
      *(int *)(puVar1 + 0xc) = iVar2 + *(int *)(puVar1 + 0x40);
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



// Address: 4a11db28

void FUN_4a11db28(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined1 auStack_6c [20];
  int local_58;
  undefined1 auStack_54 [12];
  int local_48;
  undefined1 auStack_40 [12];
  int local_34;
  int iStack_2c;
  undefined4 local_28;
  
  iStack_2c = param_1;
  local_28 = param_2;
  FUN_4a16be24(auStack_40,3);
  FUN_4a16be24(auStack_54,3);
  iVar6 = 0;
  local_58 = *(int *)(param_1 + 0x20) + 0x128;
  if (0 < *(int *)(param_1 + 0x860)) {
    do {
      iVar7 = param_1 + iVar6 * 4;
      if (0x42480000 < *(int *)(iVar7 + 0x828)) {
        FUN_4a0b74b0(*(undefined4 *)(*(int *)(iVar7 + 0x818) + 0x28),0xc1c);
        uVar1 = FUN_4a16588c();
        uVar2 = FUN_4a16bdcc(auStack_6c,auStack_40);
        uVar3 = FUN_4a146c0c(*(undefined4 *)(param_1 + 0x7f0));
        FUN_4a13ebfc(uVar3,uVar2,uVar1,1);
        FUN_4a16bef4(auStack_6c);
        bVar9 = local_34 != 0;
        if (bVar9) {
          iVar4 = *(int *)(local_34 + 8);
        }
        else {
          iVar4 = 0;
        }
        uVar1 = *(undefined4 *)(iVar4 + 8);
        if (bVar9) {
          iVar4 = *(int *)(local_34 + 8);
        }
        else {
          iVar4 = 0;
        }
        uVar2 = *(undefined4 *)(iVar4 + 4);
        if (bVar9) {
          puVar5 = *(undefined4 **)(local_34 + 8);
        }
        else {
          puVar5 = (undefined4 *)0x0;
        }
        uVar8 = *puVar5;
        uVar3 = FUN_4a16bdcc(auStack_6c,auStack_54);
        FUN_4a0f2970(*(undefined4 *)(param_1 + 0x28),uVar3,uVar8,uVar2,uVar1);
        FUN_4a16bef4(auStack_6c);
        uVar1 = FUN_4a1725c0(*(undefined4 *)(iVar7 + 0x828),0x42480000);
        uVar1 = FUN_4a17211c(uVar1,DAT_4a11dce8);
        if (local_48 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(local_48 + 8);
        }
        uVar2 = FUN_4a171fac(*(undefined4 *)(iVar7 + 4));
        if (local_48 == 0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5 = *(undefined4 **)(local_48 + 8);
        }
        uVar3 = FUN_4a171fac(*puVar5);
        FUN_4a09f664(local_58,0x181,uVar3,uVar2,uVar1,0x40a00000,0x40a00000,0);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x860));
  }
  FUN_4a09f3a4(local_58,local_28);
  FUN_4a16bef4(auStack_54);
  FUN_4a16bef4(auStack_40);
  return;
}



// Address: 4a11dcec

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a11dcec(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(int *)(param_1 + 0x7ec) != 1) {
    return;
  }
  if (0x3f7fffff < *(int *)(param_1 + 0x8bc)) {
    iVar8 = *(int *)(param_1 + 0x20) + 0x128;
    FUN_4a13ca78();
    uVar3 = FUN_4a171fac();
    uVar3 = FUN_4a17211c(uVar3,DAT_4a11df5c);
    uVar4 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x8a8),0x42c80000);
    FUN_4a1724e0(uVar4,0x43910000);
    FUN_4a171e1c();
    uVar4 = FUN_4a171fac();
    FUN_4a17211c(uVar4,uVar3);
    uVar3 = FUN_4a171e1c();
    iVar5 = FUN_4a13caa0(*(undefined4 *)(param_1 + 0x20));
    uVar4 = FUN_4a171fac(iVar5 * 100);
    FUN_4a17211c(uVar4,DAT_4a11df60);
    FUN_4a171e1c();
    uVar4 = FUN_4a171fac();
    uVar3 = FUN_4a171fac(uVar3);
    FUN_4a09f664(iVar8,0x22,uVar3,uVar4);
    FUN_4a09f3a4(iVar8,param_2);
    if (*(int *)(param_1 + 0x7ec) != 1) {
                    /* WARNING: Could not recover jumptable at 0x4a11ddec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  puVar2 = PTR_DAT_4a11df68;
  puVar1 = PTR_DAT_4a11df64;
  if (*PTR_DAT_4a11df64 == '\0') {
    iVar5 = *(int *)(param_1 + 0x20) + 0x128;
    FUN_4a0bbb28(*(undefined4 *)PTR_DAT_4a11df68);
    uVar3 = FUN_4a0bbd68(*(undefined4 *)puVar2,0x32,2);
    uVar4 = FUN_4a0bbd68(*(undefined4 *)puVar2,0x2ee);
    FUN_4a0bbe00(*(undefined4 *)puVar2,0xa0,2);
    uVar6 = FUN_4a171fac();
    uVar3 = FUN_4a171fac(uVar3);
    if (*(int *)(puVar1 + 0xc) < 1) {
      uVar7 = 0x77;
    }
    else {
      uVar7 = 0x78;
    }
    FUN_4a09f664(iVar5,uVar7,uVar3,uVar6);
    FUN_4a09f664(iVar5,0x7b,uVar3,uVar6);
    uVar3 = FUN_4a171fac(uVar4);
    if (*(int *)(puVar1 + 0xc) < 0) {
      uVar4 = 0x78;
    }
    else {
      uVar4 = 0x77;
    }
    FUN_4a09f664(iVar5,uVar4,uVar3,uVar6);
    FUN_4a09f664(iVar5,0x7b,uVar3,uVar6);
    FUN_4a09f3a4(iVar5,param_2);
    iVar5 = *(int *)puVar2;
    *(undefined1 *)(*(int *)PTR_DAT_4a0bbce8 + 0xc) = 0;
    host_glMatrixMode_arm(0x1700);
    FUN_4a150724();
    *(undefined4 *)(iVar5 + 8) = 0x3f800000;
    return;
  }
  return;
}



// Address: 4a11df6c

void FUN_4a11df6c(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  
  iVar13 = *(int *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  iVar4 = iVar13 + 0x278;
  iVar5 = iVar13 + 0x128;
  iVar6 = FUN_4a13caa0(iVar13);
  iVar7 = FUN_4a13ca78(iVar13);
  iVar12 = 0;
  iVar14 = 0;
  if (0 < *(int *)(param_1 + 0xa24)) {
    do {
      if (*(int *)(param_1 + 0xa3c) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(*(int *)(param_1 + 0xa3c) + 8);
      }
      uVar15 = *(undefined4 *)(iVar8 + iVar14 * 4);
      iVar8 = FUN_4a140338(uVar3,uVar15);
      if (*(int *)(param_1 + 0xa28) == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(*(int *)(param_1 + 0xa28) + 8);
      }
      iVar8 = *(int *)(iVar9 + iVar14 * 4) - iVar8;
      if (iVar8 < 1) {
        if (iVar8 < 0) {
          iVar9 = FUN_4a143130(uVar2,uVar15);
          sVar1 = *(short *)(iVar9 + 0x16);
          goto LAB_4a11e038;
        }
      }
      else {
        iVar9 = FUN_4a143130(uVar2,uVar15);
        sVar1 = *(short *)(iVar9 + 0x14);
LAB_4a11e038:
        iVar12 = sVar1 * iVar8 + iVar12;
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < *(int *)(param_1 + 0xa24));
  }
  iVar14 = FUN_4a06be4c(iVar4,3);
  iVar8 = FUN_4a06c7e8(iVar4);
  FUN_4a09f9c8(iVar5,0x60);
  iVar9 = FUN_4a171e1c();
  FUN_4a09f9c8(iVar5,0x62);
  iVar10 = FUN_4a171e1c();
  FUN_4a09f974(iVar5,0x61);
  iVar11 = FUN_4a171e1c();
  iVar10 = iVar9 + iVar8 * iVar14 + iVar14 + iVar10 + 0x71;
  iVar9 = iVar9 + (iVar6 - iVar10 >> 1);
  iVar6 = iVar7 - iVar11 >> 1;
  iVar16 = iVar6 + 0x18;
  uVar2 = FUN_4a171fac(iVar10);
  iVar7 = FUN_4a13caa0(iVar13);
  uVar3 = FUN_4a171fac(iVar7 >> 1);
  iVar7 = FUN_4a13ca78(iVar13);
  uVar15 = FUN_4a171fac((iVar7 >> 1) + 4);
  FUN_4a0a050c(iVar5,0x60,0x61,0x62,uVar15,uVar3,uVar2,0x3f800000);
  iVar8 = iVar8 * iVar14 + iVar9;
  iVar10 = iVar8 + iVar14 + 0x8d;
  iVar7 = FUN_4a13ca78(iVar13);
  iVar14 = FUN_4a13ca78(iVar13);
  uVar2 = FUN_4a0cb6c4(param_1,0x20);
  uVar3 = FUN_4a0cb6c4(param_1,0x40);
  FUN_4a0fa6e8(uVar2,iVar5,(iVar14 >> 1) + 0x30,iVar10,1);
  FUN_4a0fa6e8(uVar3,iVar5,(iVar7 >> 1) + -0x30,iVar10,1);
  FUN_4a09f3a4(iVar5,param_2);
  iVar5 = FUN_4a13ca78(iVar13);
  FUN_4a06c45c(iVar4,param_2,3,iVar5 >> 1,iVar9,10);
  uVar2 = FUN_4a0cf540(param_1,9);
  FUN_4a0d22c4(uVar2,iVar6 + 0x36,iVar8 + 5,iVar11 + -100,100,1);
  FUN_4a0d23c4(uVar2,param_2);
  FUN_4a06b074(iVar4,param_2,0xafa,3,iVar16,iVar8 + 0x6e,9);
  uVar2 = FUN_4a06c410(iVar4);
  FUN_4a06c86c(iVar4,iVar12);
  FUN_4a06afd0(iVar4,param_2,uVar2,3,iVar16 + iVar11 + -0x28,iVar8 + 0x6e,0xc);
  return;
}



// Address: 4a11e2a0

void FUN_4a11e2a0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 700);
  *(int *)(param_1 + 700) = param_2;
  switch(param_2) {
  case 0:
    *(undefined1 *)(param_1 + 0x2d8) = 1;
    *(undefined4 *)(param_1 + 0x2f8) = 0;
    *(undefined4 *)(param_1 + 0x2fc) = 0;
    *(undefined4 *)(param_1 + 0x304) = 0;
    *(undefined4 *)(param_1 + 0x300) = 0;
    *(undefined4 *)(param_1 + 0x308) = 0;
    *(undefined4 *)(param_1 + 0x30c) = 0;
    break;
  case 1:
    *(undefined1 *)(param_1 + 0x2d8) = 0;
    FUN_4a111968(param_1);
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_1 + 0x2dc);
    *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(param_1 + 0x2e0);
    *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_1 + 0x2e4);
    *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_1 + 0x2f0);
    *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(param_1 + 0x2e8);
    *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_1 + 0x2ec);
    break;
  case 6:
    *(undefined1 *)(param_1 + 0x2d8) = 0;
    iVar2 = *(int *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(iVar2 + 0x470);
    *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(iVar2 + 0x474);
    *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(iVar2 + 0x478);
    *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(iVar2 + 0x48c);
    *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(iVar2 + 0x484);
    *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(iVar2 + 0x488);
    *(undefined4 *)(param_1 + 0x2f4) = *(undefined4 *)(param_1 + 0x7f0);
    FUN_4a11f284(param_1);
    if (*(int *)(param_1 + 0x7f4) == 2) {
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x470) = *(undefined4 *)(param_1 + 0x2c0);
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x474) = *(undefined4 *)(param_1 + 0x2c4);
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x478) = *(undefined4 *)(param_1 + 0x2c8);
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x484) = *(undefined4 *)(param_1 + 0x2cc);
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x488) = *(undefined4 *)(param_1 + 0x2d0);
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x48c) = *(undefined4 *)(param_1 + 0x2d4);
      FUN_4a0f5774(*(undefined4 *)(param_1 + 0x28));
      *(undefined1 *)(param_1 + 0x2d8) = 1;
    }
    break;
  case 8:
    *(undefined4 *)(param_1 + 0x2f4) = 0;
    *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_1 + 0x2dc);
    *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(param_1 + 0x2e0);
    *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_1 + 0x2e4);
    *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_1 + 0x2f0);
    *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(param_1 + 0x2e8);
    *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_1 + 0x2ec);
    if (*(int *)(param_1 + 0x7f4) == 2) {
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x470) = *(undefined4 *)(param_1 + 0x2dc);
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x474) = *(undefined4 *)(param_1 + 0x2c4);
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x478) = *(undefined4 *)(param_1 + 0x2c8);
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x484) = *(undefined4 *)(param_1 + 0x2cc);
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x488) = *(undefined4 *)(param_1 + 0x2d0);
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x48c) = *(undefined4 *)(param_1 + 0x2d4);
      FUN_4a084b60(param_1 + 0x318,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x470));
      FUN_4a084b60(param_1 + 0x38c,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x474));
      FUN_4a084b60(param_1 + 0x400,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x478));
      FUN_4a084b60(param_1 + 0x474,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x48c));
      FUN_4a084b60(param_1 + 0x4e8,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x484));
      FUN_4a084b60(param_1 + 0x55c,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x488));
    }
  }
  if (iVar3 == 0) {
    if (param_2 != 0) {
      FUN_4a084b60(param_1 + 0x318,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x470));
      FUN_4a084b60(param_1 + 0x38c,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x474));
      FUN_4a084b60(param_1 + 0x400,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x478));
      FUN_4a084b60(param_1 + 0x474,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x48c));
      FUN_4a084b60(param_1 + 0x4e8,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x484));
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x488);
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0x5b0)) {
        do {
          if (*(int *)(param_1 + 0x594) == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(*(int *)(param_1 + 0x594) + 8);
          }
          *(undefined4 *)(iVar2 + iVar3 * 4) = uVar1;
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_1 + 0x5b0));
      }
      if (0 < *(int *)(param_1 + 0x5b4)) {
        iVar3 = 0;
        do {
          if (*(int *)(param_1 + 0x5a8) == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(*(int *)(param_1 + 0x5a8) + 8);
          }
          *(undefined4 *)(iVar2 + iVar3 * 4) = uVar1;
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_1 + 0x5b4));
      }
      *(undefined4 *)(param_1 + 0x5cc) = uVar1;
      *(undefined4 *)(param_1 + 0x5c4) = uVar1;
      *(undefined4 *)(param_1 + 0x5c0) = uVar1;
      return;
    }
    return;
  }
  return;
}



// Address: 4a11e574

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_4a11e574(int param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 unaff_r6;
  int iVar14;
  bool bVar15;
  undefined1 uVar16;
  undefined1 auStack_40 [12];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  uVar6 = DAT_4a11ea5c;
  if (*(int *)(param_1 + 0x7ec) == 5) {
    FUN_4a0475bc(1,0x41700000);
    FUN_4a120320(param_1,2);
    uVar6 = FUN_4a146c0c(*(undefined4 *)(param_1 + 0x7f0));
    iVar13 = 0;
    if (0 < *(int *)(param_1 + 0x860)) {
      do {
        FUN_4a13eaec(uVar6,iVar13 + 3000);
        uVar7 = FUN_4a165910();
        FUN_4a0b4ac8(uVar7,*(undefined4 *)(*(int *)(param_1 + iVar13 * 4 + 0x818) + 0x28));
        iVar13 = iVar13 + 1;
      } while (iVar13 < *(int *)(param_1 + 0x860));
    }
    iVar13 = *(int *)(param_1 + 0xa84);
joined_r0x4a11e618:
    if (iVar13 < 1) {
      uVar8 = FUN_4a0d36b8(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x264));
    }
    else {
      uVar8 = FUN_4a0d32e4(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x264));
    }
    *(undefined4 *)(param_1 + 0x80c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x814) = 0;
    return uVar8;
  }
  if (*(int *)(param_1 + 0x7ec) == 6) {
    uVar8 = *(int *)(param_1 + 0x858) - param_2;
    *(uint *)(param_1 + 0x858) = uVar8;
    if (0 < (int)uVar8) {
      return uVar8;
    }
    FUN_4a0475bc(1,0x41700000);
    FUN_4a120320(param_1,3);
    uVar6 = FUN_4a146c0c(*(undefined4 *)(param_1 + 0x7f0));
    iVar13 = 0;
    if (0 < *(int *)(param_1 + 0x860)) {
      do {
        FUN_4a13eaec(uVar6,iVar13 + 3000);
        uVar7 = FUN_4a165910();
        FUN_4a0b4ac8(uVar7,*(undefined4 *)(*(int *)(param_1 + iVar13 * 4 + 0x818) + 0x28));
        iVar13 = iVar13 + 1;
      } while (iVar13 < *(int *)(param_1 + 0x860));
    }
    iVar13 = *(int *)(param_1 + 0xa84);
    goto joined_r0x4a11e618;
  }
  iVar13 = *(int *)(param_1 + 0x854) + param_2;
  *(int *)(param_1 + 0x854) = iVar13;
  if (*(int *)(param_1 + 0x85c) < iVar13) {
    FUN_4a0ff3f8(*(undefined4 *)(param_1 + 0x20),400,uVar6);
    uVar6 = 5;
  }
  else {
    if ((*(int *)(param_1 + 0x84c) != -1) &&
       (iVar13 = *(int *)(param_1 + *(int *)(param_1 + 0x84c) * 4 + 0x818),
       (*(uint *)(iVar13 + 0x24) & 2) == 0)) {
      FUN_4a06f95c(iVar13,0xdf,0x14);
      if (*(int *)(param_1 + 0x848) != -1) {
        FUN_4a06f95c(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x848) * 4 + 0x818),0xe0,0x10);
      }
      *(undefined4 *)(param_1 + 0x850) = 1;
      *(undefined4 *)(param_1 + 0x84c) = 0xffffffff;
    }
    puVar3 = PTR_DAT_4a11ea64;
    uVar6 = DAT_4a11ea60;
    iVar13 = *(int *)(param_1 + 0x848);
    if (iVar13 != -1) {
      uVar8 = *(uint *)(param_1 + 0x850);
      if (uVar8 == 1) {
        iVar13 = *(int *)(param_1 + iVar13 * 4 + 0x818);
        if ((*(uint *)(iVar13 + 0x24) & 2) == 0) {
          FUN_4a06f95c(iVar13,0xe3,0x14);
          *(undefined4 *)(param_1 + 0x850) = 0;
LAB_4a11e850:
          if (*puVar3 == '\0') {
            uVar7 = 0;
            if (*(int *)(puVar3 + 4) != 0) {
              uVar7 = 10;
            }
            uVar7 = FUN_4a172098(uVar7);
            *(undefined4 *)(param_1 + 0x814) = uVar7;
          }
          else {
            uVar7 = FUN_4a0c0e08();
            FUN_4a0c0ea4(uVar7,&local_2c,&local_30);
            uVar7 = FUN_4a17211c(local_34);
            uVar9 = FUN_4a17211c(local_30);
            uVar10 = FUN_4a17211c(local_2c);
            uVar9 = FUN_4a171a94(uVar10,uVar9);
            FUN_4a171a94(uVar9,uVar7);
            uVar7 = FUN_4a002b60();
            uVar8 = FUN_4a1725c0(uVar7,*(undefined4 *)(param_1 + 0x810));
            uVar9 = FUN_4a171a94(uVar8 & 0x7fffffff,*(undefined4 *)(param_1 + 0x814));
            *(undefined4 *)(param_1 + 0x814) = uVar9;
            *(undefined4 *)(param_1 + 0x810) = uVar7;
          }
          if (DAT_4a11ea68 < *(int *)(param_1 + 0x814)) {
            FUN_4a06f95c(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x848) * 4 + 0x818),0xe1,0x10)
            ;
            *(undefined4 *)(param_1 + 0x850) = 2;
          }
        }
      }
      else {
        uVar16 = 1 < uVar8;
        if (uVar8 == 2) {
          uVar7 = FUN_4a171fac(param_2);
          uVar7 = FUN_4a17211c(uVar7,uVar6);
          uVar7 = FUN_4a17211c(uVar7,0x42480000);
          iVar13 = param_1 + iVar13 * 4;
          uVar7 = FUN_4a1724e0(uVar7,*(undefined4 *)(iVar13 + 0x828));
          *(undefined4 *)(iVar13 + 0x828) = uVar7;
          FUN_4a172458(0,uVar7);
          if (!(bool)uVar16) {
            uVar7 = 0;
          }
          *(undefined4 *)(param_1 + *(int *)(param_1 + 0x848) * 4 + 0x828) = uVar7;
          iVar13 = param_1 + *(int *)(param_1 + 0x848) * 4;
          if ((*(uint *)(*(int *)(iVar13 + 0x818) + 0x24) & 2) == 0) {
            *(undefined4 *)(param_1 + 0x850) = 0;
            FUN_4a06f95c(*(undefined4 *)(iVar13 + 0x818),0xe3,0x14);
          }
        }
        if (*(int *)(param_1 + 0x850) == 0) goto LAB_4a11e850;
      }
      if ((((*puVar3 == '\0') && (*(int *)(puVar3 + 4) != 0)) &&
          (iVar13 = *(int *)(param_1 + 0x848), -1 < iVar13)) &&
         (iVar14 = *(int *)(puVar3 + 4) - param_2, *(int *)(puVar3 + 4) = iVar14, iVar14 < 0)) {
        *(undefined4 *)(puVar3 + 4) = 0;
        FUN_4a06f95c(*(undefined4 *)(param_1 + iVar13 * 4 + 0x818),0xe3,0x14);
        *(undefined4 *)(param_1 + 0x850) = 0;
      }
    }
    uVar7 = DAT_4a11ea6c;
    iVar13 = 0;
    if ((int)*(uint *)(param_1 + 0x860) < 1) {
      return *(uint *)(param_1 + 0x860);
    }
    uVar9 = FUN_4a171fac(param_2);
    uStack_28 = FUN_4a17211c(uVar9,uVar6);
    while( true ) {
      iVar14 = param_1 + iVar13 * 4;
      FUN_4a06f7a4(*(undefined4 *)(iVar14 + 0x818),param_2);
      uVar6 = FUN_4a17211c(uStack_28,*(undefined4 *)(iVar14 + 0x838));
      uVar6 = FUN_4a171a94(uVar6,*(undefined4 *)(iVar14 + 0x828));
      *(undefined4 *)(iVar14 + 0x828) = uVar6;
      uVar6 = FUN_4a17211c(uVar6,uVar7);
      uVar6 = FUN_4a17295c(uVar6,8);
      FUN_4a1724e0(uVar6,0x43800000);
      uVar8 = FUN_4a171e1c();
      if ((int)uVar8 < 0) {
        uVar8 = 0;
      }
      FUN_4a07cd9c(*(undefined4 *)(*(int *)(iVar14 + 0x818) + 0x28),uVar8 | uVar8 << 8 | 0xff0000);
      if (0x4281ffff < *(int *)(iVar14 + 0x828)) {
        *(undefined4 *)(param_1 + 0x7fc) = 0xc0e;
      }
      if (uVar8 == 0) break;
      iVar13 = iVar13 + 1;
      if ((int)*(uint *)(param_1 + 0x860) <= iVar13) {
        return *(uint *)(param_1 + 0x860);
      }
    }
    *(undefined4 *)(param_1 + 0x7fc) = 0xc0f;
    uVar6 = 6;
  }
  iVar14 = *(int *)(param_1 + 0x24);
  iVar13 = host_s3eAccelerometerGetInt_arm(0);
  uVar8 = (uint)(iVar13 != 0);
  *PTR_DAT_4a120740 = iVar13 != 0;
  bVar15 = false;
  *(undefined4 *)(param_1 + 0x7ec) = uVar6;
  puVar3 = PTR_DAT_4a120740;
  switch(uVar6) {
  case 0:
    *(undefined4 *)(param_1 + 0x2b4) = 0;
    FUN_4a115d8c(param_1,0);
    iVar13 = 6;
    goto code_r0x4a11e2a0;
  case 1:
    iVar13 = *(int *)(param_1 + 0x7f4);
    if (iVar13 == 0) {
      *(undefined4 *)(PTR_DAT_4a120740 + 4) = 0;
      FUN_4a11a440(param_1,5);
    }
    else if (iVar13 == 1) {
      *(undefined4 *)(param_1 + 0x8d4) = 0;
      *(undefined4 *)(puVar3 + 8) = 0;
      *(undefined4 *)(puVar3 + 0xc) = 0;
      *(undefined4 *)(puVar3 + 0x10) = 0;
      FUN_4a11a440(param_1,6);
    }
    else if (iVar13 == 2) {
      FUN_4a11a440(param_1,7);
    }
    else if (iVar13 == 3) {
      FUN_4a11a440(param_1,8);
    }
    iVar13 = 7;
code_r0x4a11e2a0:
    iVar14 = *(int *)(param_1 + 700);
    *(int *)(param_1 + 700) = iVar13;
    uVar8 = 0;
    switch(iVar13) {
    case 0:
      *(undefined1 *)(param_1 + 0x2d8) = 1;
      *(undefined4 *)(param_1 + 0x2f8) = 0;
      *(undefined4 *)(param_1 + 0x2fc) = 0;
      *(undefined4 *)(param_1 + 0x304) = 0;
      *(undefined4 *)(param_1 + 0x300) = 0;
      *(undefined4 *)(param_1 + 0x308) = 0;
      *(undefined4 *)(param_1 + 0x30c) = 0;
      break;
    case 1:
      *(undefined1 *)(param_1 + 0x2d8) = 0;
      uVar8 = FUN_4a111968(param_1);
      break;
    case 5:
      *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_1 + 0x2dc);
      *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(param_1 + 0x2e0);
      *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_1 + 0x2e4);
      *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_1 + 0x2f0);
      *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(param_1 + 0x2e8);
      uVar8 = *(uint *)(param_1 + 0x2ec);
      *(uint *)(param_1 + 0x2d0) = uVar8;
      break;
    case 6:
      *(undefined1 *)(param_1 + 0x2d8) = 0;
      iVar4 = *(int *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(iVar4 + 0x470);
      *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(iVar4 + 0x474);
      *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(iVar4 + 0x478);
      *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(iVar4 + 0x48c);
      *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(iVar4 + 0x484);
      *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(iVar4 + 0x488);
      *(undefined4 *)(param_1 + 0x2f4) = *(undefined4 *)(param_1 + 0x7f0);
      FUN_4a11f284(param_1);
      uVar8 = *(uint *)(param_1 + 0x7f4);
      if (uVar8 == 2) {
        *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x470) = *(undefined4 *)(param_1 + 0x2c0);
        *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x474) = *(undefined4 *)(param_1 + 0x2c4);
        *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x478) = *(undefined4 *)(param_1 + 0x2c8);
        *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x484) = *(undefined4 *)(param_1 + 0x2cc);
        *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x488) = *(undefined4 *)(param_1 + 0x2d0);
        *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x48c) = *(undefined4 *)(param_1 + 0x2d4);
        uVar8 = FUN_4a0f5774(*(undefined4 *)(param_1 + 0x28));
        *(undefined1 *)(param_1 + 0x2d8) = 1;
      }
    }
    if (iVar14 == 0) {
      if (iVar13 != 0) {
        FUN_4a084b60(param_1 + 0x318,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x470));
        FUN_4a084b60(param_1 + 0x38c,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x474));
        FUN_4a084b60(param_1 + 0x400,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x478));
        FUN_4a084b60(param_1 + 0x474,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x48c));
        FUN_4a084b60(param_1 + 0x4e8,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x484));
        uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x488);
        iVar13 = 0;
        if (0 < *(int *)(param_1 + 0x5b0)) {
          do {
            if (*(int *)(param_1 + 0x594) == 0) {
              iVar14 = 0;
            }
            else {
              iVar14 = *(int *)(*(int *)(param_1 + 0x594) + 8);
            }
            *(undefined4 *)(iVar14 + iVar13 * 4) = uVar6;
            iVar13 = iVar13 + 1;
          } while (iVar13 < *(int *)(param_1 + 0x5b0));
        }
        if (0 < *(int *)(param_1 + 0x5b4)) {
          iVar13 = 0;
          do {
            if (*(int *)(param_1 + 0x5a8) == 0) {
              iVar14 = 0;
            }
            else {
              iVar14 = *(int *)(*(int *)(param_1 + 0x5a8) + 8);
            }
            *(undefined4 *)(iVar14 + iVar13 * 4) = uVar6;
            iVar13 = iVar13 + 1;
          } while (iVar13 < *(int *)(param_1 + 0x5b4));
        }
        *(undefined4 *)(param_1 + 0x5cc) = uVar6;
        *(undefined4 *)(param_1 + 0x5c4) = uVar6;
        *(undefined4 *)(param_1 + 0x5c0) = uVar6;
        return param_1 + 0x55c;
      }
      return uVar8;
    }
    return uVar8;
  case 2:
    uVar6 = thunk_FUN_4a161570(0x14);
    uVar6 = FUN_4a0c707c(uVar6,s_success_4a120744);
    uVar9 = *(undefined4 *)(param_1 + 0x7f8);
    uVar7 = FUN_4a0941ec();
    FUN_4a094e78(uVar7,uVar9,1,uVar6);
    FUN_4a0cf554(param_1,0x4c);
    FUN_4a1161d0(param_1,6);
    if (*(int *)(param_1 + 0x7f4) == 1) {
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x20) + 0x264) + 0x30) = 0;
    }
    else if (*(int *)(param_1 + 0xa84) < 1) {
      FUN_4a0d36b8(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x264));
      FUN_4a0d36d0(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x264),4,0);
    }
    else {
      FUN_4a0d32e4();
    }
    iVar13 = *(int *)(param_1 + 0x7f4);
    if (iVar13 == 0) {
      FUN_4a110ec4(param_1,0);
      FUN_4a0daefc(iVar14,0x1b);
      iVar13 = FUN_4a13fd10(iVar14);
      if (iVar13 == 0) {
        FUN_4a0daefc(iVar14,0x1c);
      }
      else if (iVar13 == 6) {
        FUN_4a0daefc(iVar14,0x1d);
      }
      else if (iVar13 == 9) {
        FUN_4a0daefc(iVar14,0x1e);
      }
    }
    else if (iVar13 == 1) {
      FUN_4a110ec4(param_1,1);
      FUN_4a10918c(*(undefined4 *)(param_1 + 0x7f0));
      FUN_4a0daefc(iVar14,0x15);
      iVar13 = *(int *)(param_1 + 0x8c8);
      if (iVar13 == 0x1f) {
        FUN_4a0daefc(iVar14,0x16);
      }
      else if (iVar13 == 0x20) {
        FUN_4a0daefc(iVar14,0x17);
      }
      else if (iVar13 == 0x1d) {
        FUN_4a0daefc(iVar14,0x18);
      }
      switchD_4a0de288::default(iVar14,*(undefined4 *)(param_1 + 0x8c8),1);
      uVar7 = *(undefined4 *)(param_1 + 0x8c8);
      uVar6 = 0xafe;
      *(undefined4 *)(param_1 + 0x73c) = 1;
      *(undefined4 *)(param_1 + 0x740) = 0xa1b;
      *(undefined4 *)(param_1 + 0x738) = uVar7;
      iVar13 = FUN_4a140338(*(undefined4 *)(param_1 + 0x24),uVar7);
      iVar4 = FUN_4a143130(*(undefined4 *)(param_1 + 0x28),uVar7);
      if (iVar13 == *(char *)(iVar4 + 0x18)) {
        uVar6 = 0xaff;
      }
      *(undefined4 *)(param_1 + 0x744) = uVar6;
    }
    else if (iVar13 == 2) {
      FUN_4a110ec4(param_1,2);
      FUN_4a0daefc(iVar14,0x19);
      FUN_4a1061e0(*(undefined4 *)(param_1 + 0x7f0));
      FUN_4a12122c(param_1);
    }
    break;
  case 3:
    uVar6 = thunk_FUN_4a161570(0x14);
    uVar6 = FUN_4a0c707c(uVar6,&DAT_4a12074c);
    uVar9 = *(undefined4 *)(param_1 + 0x7f8);
    uVar7 = FUN_4a0941ec();
    FUN_4a094e78(uVar7,uVar9,0,uVar6);
    if (*(int *)(param_1 + 0x7f4) == 1) {
      FUN_4a0f1b30(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(*(int *)(param_1 + 0x8cc) + 0x28)
                  );
      FUN_4a0f1b30(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(*(int *)(param_1 + 0x8d0) + 0x28)
                  );
      *(undefined4 *)(param_1 + 0x80c) = 0xffffffff;
      FUN_4a10918c(*(undefined4 *)(param_1 + 0x7f0));
LAB_4a1206a4:
      if ((*(int *)(param_1 + 0x7f4) != 2) ||
         (iVar13 = FUN_4a0fb748(*(undefined4 *)(param_1 + 0x20)), 4 < iVar13)) goto LAB_4a12075c;
      uVar6 = thunk_FUN_4a161570(0x14);
      uVar6 = FUN_4a0c707c(uVar6,s_repair_4a120754);
      uVar7 = FUN_4a0941ec();
      FUN_4a094d04(uVar7,uVar6);
      *(undefined4 *)(param_1 + 0x290) = 7;
      FUN_4a0cd7c0(param_1,0xb66);
      FUN_4a1161d0(param_1,9);
    }
    else {
      if (*(int *)(param_1 + 0x7f4) == 2) {
        FUN_4a12122c(param_1);
        goto LAB_4a1206a4;
      }
LAB_4a12075c:
      FUN_4a076d54(*(undefined4 *)(param_1 + 0x5f8));
      FUN_4a073914(*(undefined4 *)(param_1 + 0x5f8),0xb,0);
      iVar13 = *(int *)(param_1 + 0x7f4);
      if (iVar13 == 0) {
        uVar9 = 0xa0d;
      }
      else if (iVar13 == 1) {
        uVar9 = 0xa1b;
      }
      else if (iVar13 == 2) {
        uVar9 = 0xa22;
      }
      *(undefined4 *)(param_1 + 0x290) = 0;
      FUN_4a0cd7c0(param_1,0xb33,uVar9);
      FUN_4a1161d0(param_1,9);
      if (*(int *)(param_1 + 0x7f4) == 1) {
        *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x20) + 0x264) + 0x30) = 0;
      }
      else if (*(int *)(param_1 + 0xa84) < 1) {
        FUN_4a0d36b8(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x264));
      }
      else {
        FUN_4a0d32e4();
      }
      bVar15 = true;
    }
    FUN_4a10918c(*(undefined4 *)(param_1 + 0x5f8));
    uVar8 = FUN_4a11e2a0(param_1,8);
  default:
    if (!bVar15) {
      return uVar8;
    }
    goto LAB_4a120c74;
  case 4:
    uVar6 = thunk_FUN_4a161570(0x14);
    uVar6 = FUN_4a0c707c(uVar6,s_cancel_4a120b54);
    uVar9 = *(undefined4 *)(param_1 + 0x7f8);
    uVar7 = FUN_4a0941ec();
    FUN_4a094e78(uVar7,uVar9,0,uVar6);
    iVar13 = *(int *)(param_1 + 0x7f4);
    if (iVar13 == 0) {
      uVar6 = FUN_4a146c0c(*(undefined4 *)(param_1 + 0x7f0));
      iVar13 = 0;
      if (0 < *(int *)(param_1 + 0x860)) {
        do {
          FUN_4a13eaec(uVar6,iVar13 + 3000);
          uVar7 = FUN_4a165910();
          FUN_4a0b4ac8(uVar7,*(undefined4 *)(*(int *)(param_1 + iVar13 * 4 + 0x818) + 0x28));
          iVar13 = iVar13 + 1;
        } while (iVar13 < *(int *)(param_1 + 0x860));
      }
      if (*(int *)(param_1 + 0xa84) < 1) {
        FUN_4a0d36b8(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x264));
      }
      else {
        FUN_4a0d32e4();
      }
      *(undefined4 *)(param_1 + 0x814) = 0;
      *(undefined4 *)(param_1 + 0x80c) = 0xffffffff;
    }
    else if (iVar13 == 1) {
      FUN_4a10918c(*(undefined4 *)(param_1 + 0x7f0));
      FUN_4a0f1b30(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(*(int *)(param_1 + 0x8cc) + 0x28)
                  );
      FUN_4a0f1b30(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(*(int *)(param_1 + 0x8d0) + 0x28)
                  );
      *(undefined4 *)(param_1 + 0x80c) = 0xffffffff;
    }
    else if (iVar13 == 2) {
      FUN_4a12122c(param_1);
    }
    *(undefined4 *)(param_1 + 0x7c4) = 0;
    FUN_4a076d54(*(undefined4 *)(param_1 + 0x5f8));
    iVar13 = *(int *)(param_1 + 0x7f4);
    if (iVar13 == 0) {
      unaff_r6 = 0xa0d;
    }
    else if (iVar13 == 1) {
      unaff_r6 = 0xa1b;
    }
    else if (iVar13 == 2) {
      unaff_r6 = 0xa22;
    }
    *(undefined4 *)(param_1 + 0x290) = 0;
    FUN_4a0cd7c0(param_1,0xb34,unaff_r6);
    FUN_4a1161d0(param_1,9);
    if (*(int *)(param_1 + 0x7f4) == 1) {
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x20) + 0x264) + 0x30) = 0;
    }
    else if (*(int *)(param_1 + 0xa84) < 1) {
      FUN_4a0d36b8(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x264));
    }
    else {
      FUN_4a0d32e4();
    }
    break;
  case 5:
    iVar13 = 1 - *(uint *)(param_1 + 0x7f4);
    if (1 < *(uint *)(param_1 + 0x7f4)) {
      iVar13 = 0;
    }
    switchD_4a11cc8c::default(iVar13,s_only_cooking_uses_timeup_state_4a120b5c);
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    return 0;
  case 6:
    *(undefined4 *)(param_1 + 0x858) = 2000;
    uVar8 = 1 - *(uint *)(param_1 + 0x7f4);
    if (1 < *(uint *)(param_1 + 0x7f4)) {
      uVar8 = 0;
    }
    return uVar8;
  case 7:
    switchD_4a11cc8c::default
              (*(int *)(param_1 + 0x7f4) == 1,s_only_fishing_uses_intro_state_4a120b9c);
    uVar6 = *(undefined4 *)(param_1 + 0x5f8);
    FUN_4a107f20(uVar6,0x80);
    FUN_4a074248(uVar6,0x3c);
    iVar13 = *(int *)(param_1 + 0x28);
    FUN_4a0b4c10(*(undefined4 *)(iVar13 + 0x414),*(undefined4 *)(*(int *)(param_1 + 0x8d0) + 0x28));
    *(undefined1 *)(iVar13 + 0x450) = 1;
    return 1;
  }
  FUN_4a10918c(*(undefined4 *)(param_1 + 0x5f8));
  FUN_4a11e2a0(param_1,8);
LAB_4a120c74:
  uVar8 = *(uint *)(param_1 + 0x7f4);
  if (uVar8 == 0) {
    iVar13 = 1;
  }
  else {
    if (uVar8 != 1) {
      return uVar8;
    }
    iVar13 = 0;
  }
  do {
    uStack_28 = *(undefined4 *)(iVar14 + 0x18);
    local_2c = FUN_4a0fba7c();
    bVar15 = false;
    uVar6 = FUN_4a16b5a0(auStack_40,iVar14 + 0x7e0);
    iVar4 = FUN_4a16fe9c((char)iVar13,uVar6,0);
    FUN_4a16b6c0(auStack_40);
    if (iVar4 == -1) {
      if (*(char *)(iVar14 + 0x7d9) == iVar13) {
        *(undefined1 *)(iVar14 + 0x7d9) = 0xff;
        bVar15 = true;
        iVar4 = 4;
        *(undefined4 *)(iVar14 + 0x7dc) = 0;
      }
    }
    else {
      bVar15 = true;
      if (*(int *)(iVar14 + 0x7ec) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(iVar14 + 0x7ec) + 8);
      }
      *(undefined1 *)(iVar5 + iVar4) = 0xff;
    }
    uVar8 = 0;
    if (iVar13 == 0) {
      uVar8 = 4;
    }
    else if (iVar13 == 1) {
      uVar8 = 8;
    }
    uVar12 = 0;
    *(uint *)(iVar14 + 0x7f8) = uVar8 | *(uint *)(iVar14 + 0x7f8);
    if (*(int *)(iVar14 + 400) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(iVar14 + 400) + 8);
    }
    uVar2 = *(ushort *)(iVar5 + *(char *)(iVar14 + 0x7d8) * 2);
    uVar8 = 0;
    iVar5 = 0;
    if (0 < *(int *)(iVar14 + 0x1a0)) {
      do {
        iVar11 = 0;
        if (*(int *)(iVar14 + 0x1b8) != 0) {
          iVar11 = *(int *)(*(int *)(iVar14 + 0x1b8) + 8);
        }
        if ((*(ushort *)(iVar11 + iVar5 * 2) & uVar2) != 0) {
          uVar1 = 1 << (uVar12 & 0xff);
          if (iVar13 == iVar5) {
            if ((*(uint *)(iVar14 + 0x7f4) & uVar1) == 0) {
              bVar15 = true;
              *(uint *)(iVar14 + 0x7f4) = *(uint *)(iVar14 + 0x7f4) | uVar1;
              goto LAB_4a0db034;
            }
LAB_4a0db040:
            uVar8 = uVar8 + 1;
          }
          else {
LAB_4a0db034:
            if ((uVar1 & *(uint *)(iVar14 + 0x7f4)) != 0) goto LAB_4a0db040;
          }
          uVar12 = uVar12 + 1;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(iVar14 + 0x1a0));
    }
    if (bVar15) {
      FUN_4a0fd124(uStack_28,iVar13);
      FUN_4a1182e0(local_2c,iVar13,iVar4);
      uVar6 = FUN_4a0941ec();
      FUN_4a094d68(uVar6,iVar13);
    }
    if (uVar8 == uVar12) {
      *(uint *)(iVar14 + 0x7f8) = *(uint *)(iVar14 + 0x7f8) | 1;
    }
    uVar8 = FUN_4a145968(uStack_28);
    if ((uVar8 == 0) &&
       (uVar12 = *(uint *)(iVar14 + 0x1a0), uVar8 = FUN_4a145b3c(uStack_28), uVar8 == uVar12)) {
      uVar8 = FUN_4a10ea2c(local_2c);
    }
    if (iVar13 != 0x15) {
      return uVar8;
    }
    iVar4 = (*(ushort *)(iVar14 + 0x810) + 1) * 0x10000;
    uVar8 = iVar4 >> 0x10;
    if (0xf < (int)uVar8) {
      iVar13 = 0x2b;
    }
    *(short *)(iVar14 + 0x810) = (short)((uint)iVar4 >> 0x10);
    if ((int)uVar8 < 0x10) {
      return uVar8;
    }
  } while( true );
}



// Address: 4a11ea70

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_4a11ea70(int param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  bool bVar17;
  undefined1 uVar18;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar5 = *(int *)(param_1 + 0x7ec);
  if (iVar5 == 1) {
    iVar5 = FUN_4a146be8(*(undefined4 *)(param_1 + 0x5f8),1);
    if (iVar5 != 0) {
      FUN_4a06f7a4(*(undefined4 *)(iVar5 + 0x34),param_2);
    }
    local_2c = FUN_4a0c0e08();
    uVar12 = DAT_4a11f13c;
    puVar1 = PTR_DAT_4a11f138;
    if (*PTR_DAT_4a11f138 == '\0') {
      uVar18 = 1;
      if (*(int *)(PTR_DAT_4a11f138 + 0xc) != 0) {
        uVar6 = FUN_4a171fac(param_2 * *(int *)(PTR_DAT_4a11f138 + 0xc));
        uVar6 = FUN_4a17211c(uVar6,uVar12);
        uVar9 = FUN_4a171a94(uVar6,*(undefined4 *)(param_1 + 0x8d4));
        uVar13 = 0xbf800000;
        uVar18 = 0xbf7fffff < uVar9;
        *(uint *)(param_1 + 0x8d4) = uVar9;
        if ((uVar9 < 0xbf800001) &&
           (uVar18 = 0x3f7fffff < uVar9, uVar13 = uVar9, 0x3f800000 < (int)uVar9)) {
          uVar13 = 0x3f800000;
        }
        *(uint *)(param_1 + 0x8d4) = uVar13;
      }
    }
    else {
      FUN_4a0c0e44(local_2c,&local_3c,&local_40,&local_44);
      uVar6 = FUN_4a17211c(local_44);
      uVar7 = FUN_4a17211c(local_40);
      uVar8 = FUN_4a17211c(local_3c);
      uVar7 = FUN_4a171a94(uVar8,uVar7);
      FUN_4a171a94(uVar7,uVar6);
      uVar13 = FUN_4a002b60();
      uVar18 = 1;
      if ((uVar13 & 0x7fffffff) == 0) {
        uVar13 = 0x3f800000;
        local_40 = 0x3f800000;
      }
      local_3c = FUN_4a171bb8(local_3c,uVar13);
      uVar6 = FUN_4a171bb8(local_40,uVar13);
      local_40 = uVar6;
      local_44 = FUN_4a171bb8(local_44,uVar13);
      uVar6 = FUN_4a002bb8(uVar6);
      puVar2 = PTR_DAT_4a11f140;
      uVar7 = FUN_4a17295c(*(undefined4 *)PTR_DAT_4a11f140,0xffffffff);
      uVar6 = FUN_4a1725c0(uVar7,uVar6);
      uVar7 = FUN_4a171bb8(0x43340000,*(undefined4 *)puVar2);
      uVar6 = FUN_4a17211c(uVar7,uVar6);
      uVar6 = FUN_4a171a94(uVar6,0x41c80000);
      FUN_4a1720a0(0x42480000,uVar6);
      if (!(bool)uVar18) {
        uVar6 = 0x42480000;
      }
      FUN_4a172458(0,uVar6);
      if (!(bool)uVar18) {
        uVar6 = 0;
      }
      uVar6 = FUN_4a17211c(uVar6,DAT_4a11f144);
      uVar6 = FUN_4a1725c0(uVar6,0x3f800000);
      *(undefined4 *)(param_1 + 0x8d4) = uVar6;
    }
    uVar6 = FUN_4a171a94(*(undefined4 *)(param_1 + 0x8d4),0x3f800000);
    uVar6 = FUN_4a17295c(uVar6,0xffffffff);
    FUN_4a106a48(*(undefined4 *)(param_1 + 0x5f8),uVar6);
    FUN_4a06f8b0(*(undefined4 *)(param_1 + 0x8d0));
    uVar7 = FUN_4a171fac();
    FUN_4a17211c(uVar7,uVar6);
    uVar6 = FUN_4a171e1c();
    FUN_4a06f87c(*(undefined4 *)(param_1 + 0x8d0),uVar6);
    uVar7 = *(undefined4 *)(param_1 + 0x8d4);
    uVar6 = FUN_4a17295c(*(undefined4 *)(param_1 + 0x8a8),0xffffffff);
    uVar7 = FUN_4a171a94(uVar7,0x3f800000);
    uVar7 = FUN_4a17295c(uVar7,0xffffffff);
    uVar13 = FUN_4a1725c0(uVar6,uVar7);
    FUN_4a1720a0(uVar13 ^ 0x80000000,uVar13);
    if ((bool)uVar18) {
      uVar13 = uVar13 ^ 0x80000000;
    }
    iVar5 = DAT_4a11f14c;
    if ((int)uVar13 < DAT_4a11f148) {
      iVar5 = DAT_4a11f150;
    }
    uVar6 = FUN_4a171fac(param_2);
    uVar6 = FUN_4a17211c(uVar6,uVar12);
    uVar7 = FUN_4a17211c(uVar6,iVar5);
    uVar7 = FUN_4a171a94(uVar7,*(undefined4 *)(param_1 + 0x8bc));
    *(undefined4 *)(param_1 + 0x8bc) = uVar7;
    if (iVar5 < 1) {
      iVar5 = host_s3eAccelerometerGetInt_arm(0);
      if (iVar5 == 0) {
        uVar7 = 0xcd3;
      }
      else {
        uVar7 = 0xc0a;
      }
      *(undefined4 *)(param_1 + 0x7fc) = uVar7;
    }
    else {
      *(undefined4 *)(param_1 + 0x7fc) = 0xc0b;
    }
    if ((int)*(uint *)(param_1 + 0x8bc) < 0x3f800000) {
      if (*(uint *)(param_1 + 0x8bc) < 0xbf000000) {
        *(undefined4 *)(param_1 + 0x8ac) = 0;
        uVar13 = 0x40400000;
        goto LAB_4a11eec8;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x7fc) = 0xc0c;
      uVar6 = FUN_4a17211c(uVar6,*(undefined4 *)(param_1 + 0x8b0));
      uVar13 = FUN_4a171a94(uVar6,*(undefined4 *)(param_1 + 0x8ac));
      bVar17 = 0x3f7fffff < uVar13;
      *(uint *)(param_1 + 0x8ac) = uVar13;
      if ((0x3f7fffff < (int)uVar13) || (bVar17 = true, (int)uVar13 < 1)) {
        FUN_4a1720a0(0x3f800000,uVar13);
        if (!bVar17) {
          uVar13 = 0x3f800000;
        }
        FUN_4a172458(0,uVar13);
        if (!bVar17) {
          uVar13 = 0;
        }
        *(uint *)(param_1 + 0x8ac) = uVar13;
        uVar13 = *(uint *)(param_1 + 0x8b0) ^ 0x80000000;
LAB_4a11eec8:
        *(uint *)(param_1 + 0x8b0) = uVar13;
      }
      FUN_4a0c0ea4(local_2c,&local_30,&local_34,&local_38);
      local_28 = FUN_4a17211c(local_38);
      uVar6 = FUN_4a17211c(local_34);
      uVar7 = FUN_4a17211c(local_30);
      uVar6 = FUN_4a171a94(uVar7,uVar6);
      FUN_4a171a94(uVar6,local_28);
      iVar5 = FUN_4a002b60();
      bVar17 = iVar5 == DAT_4a11f154;
      if (iVar5 <= DAT_4a11f154) {
        bVar17 = *(int *)(puVar1 + 0x10) == 0;
      }
      uVar13 = *(uint *)(param_1 + 0x8bc);
      if (bVar17) {
        if ((uVar13 < 0xbf000000) && (bVar17 = 0x3f7fffff < uVar13, (int)uVar13 < 0x3f800000)) {
          FUN_4a1720a0(*(undefined4 *)(param_1 + 0x8b8),*(undefined4 *)(param_1 + 0x8b4));
          iVar5 = param_2;
          if (!bVar17) {
            iVar5 = -param_2;
          }
          uVar6 = FUN_4a171fac(iVar5);
          uVar12 = FUN_4a17211c(uVar6,uVar12);
          uVar12 = FUN_4a17211c(uVar12,*(undefined4 *)(param_1 + 0x8c0));
          uVar12 = FUN_4a171a94(uVar12,*(undefined4 *)(param_1 + 0x8a8));
          *(undefined4 *)(param_1 + 0x8a8) = uVar12;
          uVar18 = 1;
          if (!bVar17) {
            FUN_4a1720a0();
          }
          else {
            FUN_4a172458(uVar12,*(undefined4 *)(param_1 + 0x8b8));
          }
          if (!(bool)uVar18) {
            uVar6 = *(undefined4 *)(param_1 + 0x8b8);
            *(undefined4 *)(param_1 + 0x8a8) = uVar6;
            uVar12 = FUN_4a1725c0(0x40000000,uVar6);
            FUN_4a172458(uVar6,uVar12);
            if (!(bool)uVar18) {
              uVar12 = uVar6;
            }
            uVar12 = FUN_4a171e1c(uVar12);
            uVar7 = FUN_4a171e1c(*(undefined4 *)(param_1 + 0x8c4));
            FUN_4a0fe640(*(undefined4 *)(param_1 + 0x20),uVar7,uVar12);
            uVar13 = FUN_4a171fac();
            uVar12 = FUN_4a1725c0(0x40000000,uVar13);
            FUN_4a1720a0(uVar12,uVar6);
            if ((!(bool)uVar18) ||
               ((FUN_4a1720a0(uVar6,uVar13), (bool)uVar18 &&
                (iVar5 = FUN_4a0fb748(*(undefined4 *)(param_1 + 0x20)), iVar5 < 0x32)))) {
              bVar17 = true;
            }
            else {
              bVar17 = false;
            }
            if (bVar17) {
              uVar13 = uVar13 ^ 0x80000000;
            }
            *(undefined4 *)(param_1 + 0x8b4) = uVar6;
            uVar12 = FUN_4a171a94(uVar13,uVar6);
            *(undefined4 *)(param_1 + 0x8b8) = uVar12;
          }
          uVar12 = FUN_4a1725c0(*(undefined4 *)(param_1 + 0x8a8),0x3f800000);
          uVar12 = FUN_4a17211c(uVar12,0x42480000);
          iVar5 = *(int *)(param_1 + 0x5f8);
          uVar6 = 0;
          if (*(int *)(iVar5 + 0x50) != 3 && *(int *)(iVar5 + 0x50) != 2) {
            uVar6 = uVar12;
            uVar12 = 0;
          }
          uVar15 = *(undefined4 *)(*(int *)(param_1 + 0x8cc) + 0x28);
          uVar7 = FUN_4a171fac(*(undefined4 *)(iVar5 + 0x4c));
          uVar7 = FUN_4a17295c(uVar7,0xfffffff0);
          uVar12 = FUN_4a171a94(uVar7,uVar12);
          uVar7 = FUN_4a171fac(*(undefined4 *)(iVar5 + 0x48));
          uVar7 = FUN_4a17295c(uVar7,0xfffffff0);
          uVar8 = FUN_4a171fac(*(undefined4 *)(iVar5 + 0x44));
          uVar8 = FUN_4a17295c(uVar8,0xfffffff0);
          uVar6 = FUN_4a171a94(uVar8,uVar6);
          FUN_4a0af1d4(uVar15,uVar6,uVar7,uVar12);
        }
        goto code_r0x4a06f7a4;
      }
      if ((0x3f7fffff < (int)uVar13) || (*(int *)(puVar1 + 0x10) != 0)) {
        *(undefined4 *)(param_1 + 0x8bc) = 0x3f800000;
        goto LAB_4a11ef50;
      }
    }
    *(undefined4 *)(param_1 + 0x8bc) = 0xbf000000;
LAB_4a11ef50:
    iVar5 = FUN_4a120320(param_1,8);
    return iVar5;
  }
  if (iVar5 == 7) {
    FUN_4a06f7a4(*(undefined4 *)(param_1 + 0x8d0),param_2);
    iVar5 = FUN_4a14610c(*(undefined4 *)(param_1 + 0x5f8));
    if (iVar5 != 0) {
      return iVar5;
    }
    FUN_4a120320(param_1,1);
    FUN_4a074248(*(undefined4 *)(param_1 + 0x5f8),0x3f);
    FUN_4a106a48(*(undefined4 *)(param_1 + 0x5f8),0x3f000000);
    FUN_4a06f95c(*(undefined4 *)(param_1 + 0x8d0),0xe5,0x14);
    iVar5 = FUN_4a06f8b0(*(undefined4 *)(param_1 + 0x8d0));
    FUN_4a06f87c(*(undefined4 *)(param_1 + 0x8d0),iVar5 >> 1);
    iVar5 = *(int *)(param_1 + 0x28);
    FUN_4a0b4c10(*(undefined4 *)(iVar5 + 0x414),*(undefined4 *)(*(int *)(param_1 + 0x8cc) + 0x28));
    *(undefined1 *)(iVar5 + 0x450) = 1;
    return 1;
  }
  if (iVar5 == 8) {
    FUN_4a06f7a4(*(undefined4 *)(param_1 + 0x8d0),param_2);
    iVar5 = FUN_4a14610c(*(undefined4 *)(param_1 + 0x5f8));
    if (iVar5 == 0) {
      if (*(int *)(param_1 + 0x8bc) == 0x3f800000) {
        uVar12 = 2;
      }
      else {
        uVar12 = 3;
      }
      FUN_4a120320(param_1,uVar12);
      FUN_4a0f1b30(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(*(int *)(param_1 + 0x8cc) + 0x28)
                  );
      FUN_4a0f1b30(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(*(int *)(param_1 + 0x8d0) + 0x28)
                  );
      *(undefined4 *)(param_1 + 0x80c) = 0xffffffff;
    }
  }
code_r0x4a06f7a4:
  iVar5 = *(int *)(param_1 + 0x8cc);
  uVar13 = *(uint *)(iVar5 + 0x24);
  if ((uVar13 & 1) == 0 || (uVar13 & 2) == 0) {
    return iVar5;
  }
  iVar16 = *(int *)(iVar5 + 0x18);
  iVar14 = *(int *)(iVar5 + 0x1c);
  iVar4 = *(int *)(iVar5 + 0x20) * param_2 >> 7;
  if ((uVar13 & 8) == 0) {
    iVar10 = *(int *)(iVar5 + 0x14) + iVar4;
    iVar11 = iVar10;
    if (iVar10 <= iVar14) goto LAB_4a06f840;
    iVar11 = iVar14;
    if ((uVar13 & 4) == 0) goto LAB_4a06f83c;
    if (iVar14 - iVar16 <= iVar4) goto LAB_4a06f840;
    iVar10 = iVar10 - iVar14;
  }
  else {
    iVar10 = *(int *)(iVar5 + 0x14) - iVar4;
    iVar11 = iVar10;
    if (iVar16 <= iVar10) goto LAB_4a06f840;
    iVar11 = iVar16;
    if ((uVar13 & 4) == 0) {
LAB_4a06f83c:
      uVar13 = uVar13 & 0xfffffffd;
      goto LAB_4a06f840;
    }
    iVar11 = iVar14;
    if (iVar14 - iVar16 <= iVar4) goto LAB_4a06f840;
    iVar10 = iVar10 + iVar14;
  }
  iVar11 = iVar10 + iVar16;
LAB_4a06f840:
  *(int *)(iVar5 + 0x14) = iVar11;
  *(uint *)(iVar5 + 0x24) = uVar13;
  piVar3 = *(int **)(iVar5 + 0x28);
  if (piVar3 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar3 + 0x30))(piVar3);
    iVar5 = 0;
    if (piVar3[2] != 0) {
      iVar5 = *(int *)(piVar3[2] + 0x10);
    }
    while (iVar5 = iVar5 + -1, -1 < iVar5) {
      iVar14 = *(int *)(*(int *)(piVar3[2] + 0x14) + iVar5 * 4);
      if ((*(uint *)(*(int *)(iVar14 + 0x2c) + 0x30) & 0x60000000) != 0) {
        uVar12 = FUN_4a1395b4(iVar14,iVar11);
        (**(code **)(*piVar3 + 0x1c))(piVar3,*(undefined4 *)(iVar14 + 0x30),uVar12);
      }
    }
    (**(code **)(*piVar3 + 0x24))(piVar3,iVar11);
    return iVar4;
  }
  return 0;
}



// Address: 4a11f158

void FUN_4a11f158(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_24 [8];
  int local_1c;
  
  iVar1 = FUN_4a13fa70(*(undefined4 *)(param_1 + 0x24),2);
  thunk_FUN_4a161570(0x8c);
  uVar2 = FUN_4a0cb3f4();
  *(undefined4 *)(param_1 + 0x940) = uVar2;
  FUN_4a0ca898(uVar2,0x1c);
  iVar3 = *(int *)(param_1 + 0x28);
  FUN_4a0af1d4(*(undefined4 *)(*(int *)(param_1 + 0x940) + 0x30),*(undefined4 *)(iVar3 + 0x470),
               *(undefined4 *)(iVar3 + 0x474),*(undefined4 *)(iVar3 + 0x478));
  FUN_4a0efadc(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(*(int *)(param_1 + 0x940) + 0x30));
  if (*(int *)(param_1 + 0x938) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x938) + 8);
  }
  FUN_4a16bdcc(auStack_24,iVar3 + iVar1 * 0x14);
  uVar2 = FUN_4a0fe640(*(undefined4 *)(param_1 + 0x20),0,local_1c + -1);
  FUN_4a10b760(param_1,uVar2);
  *(undefined4 *)(param_1 + 0x85c) = 30000;
  *(undefined4 *)(param_1 + 0x9f8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9f4) = 0;
  uVar2 = thunk_FUN_4a161570(0x2c);
  uVar2 = FUN_4a06fa68(uVar2,*(int *)(param_1 + 0x20) + 0x1f8);
  *(undefined4 *)(param_1 + 0x96c) = uVar2;
  FUN_4a06f8f0(uVar2,*(undefined4 *)(*(int *)(param_1 + 0x940) + 0x30));
  FUN_4a06f95c(*(undefined4 *)(param_1 + 0x96c),0xea,0x14);
  *(undefined4 *)(param_1 + 0x7fc) = 0xc10;
  uVar2 = FUN_4a136760(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x40c));
  *(undefined4 *)(param_1 + 0x8d8) = uVar2;
  FUN_4a0a8350(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x40c),DAT_4a11f280);
  FUN_4a16bef4(auStack_24);
  return;
}



// Address: 4a11f284

void FUN_4a11f284(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined1 auStack_50 [12];
  int local_44;
  undefined1 auStack_3c [12];
  undefined4 local_30;
  int *local_2c;
  int *local_28;
  
  iVar2 = *(int *)(param_1 + 0x28);
  uVar11 = *(undefined4 *)(iVar2 + 0x470);
  uVar6 = *(undefined4 *)(iVar2 + 0x474);
  uVar12 = *(undefined4 *)(iVar2 + 0x478);
  uVar10 = *(undefined4 *)(iVar2 + 0x484);
  uVar7 = *(undefined4 *)(iVar2 + 0x488);
  uVar9 = *(undefined4 *)(iVar2 + 0x48c);
  if (*(int *)(param_1 + 0x2f4) != 0) {
    FUN_4a16bdcc(auStack_50,param_1 + 0x2c);
    iVar2 = 0;
    uVar12 = FUN_4a16bdcc(auStack_3c,auStack_50);
    FUN_4a145ed0(*(undefined4 *)(param_1 + 0x2f4),uVar12,0);
    FUN_4a16bef4(auStack_3c);
    if (local_44 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = *(undefined4 **)(local_44 + 8);
    }
    uVar12 = FUN_4a171fac(*puVar3);
    puVar1 = PTR_DAT_4a11f738;
    uVar11 = FUN_4a17211c(uVar12,*(undefined4 *)PTR_DAT_4a11f738);
    if (local_44 != 0) {
      iVar2 = *(int *)(local_44 + 8);
    }
    uVar6 = 0x41800000;
    uVar12 = FUN_4a171fac(*(undefined4 *)(iVar2 + 8));
    uVar12 = FUN_4a17211c(uVar12,*(undefined4 *)puVar1);
    FUN_4a16bef4(auStack_50);
  }
  local_28 = (int *)0x0;
  local_2c = *(int **)(param_1 + 0x7f8);
  piVar13 = (int *)(param_1 + 0x7f8);
  if (local_2c != (int *)0x0) {
    iVar2 = (**(code **)(*local_2c + 8))(local_2c);
    if (iVar2 != 0) {
      (**(code **)(*local_2c + 4))(local_2c);
    }
    *piVar13 = (int)local_28;
  }
  local_2c = local_28;
  if ((local_28 != (int *)0x0) && (iVar2 = (**(code **)(*local_28 + 8))(local_28), iVar2 != 0)) {
    (**(code **)(*local_2c + 4))(local_2c);
  }
  iVar2 = *(int *)(param_1 + 0x7f4);
  if (iVar2 == 0) {
    uVar7 = thunk_FUN_4a161570(0x14);
    piVar4 = (int *)FUN_4a0c707c(uVar7,s_cooking_4a11f748);
    if ((int *)*piVar13 != piVar4) {
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0xc))(piVar4);
      }
      piVar8 = (int *)*piVar13;
      if ((piVar8 != (int *)0x0) && (iVar2 = (**(code **)(*piVar8 + 8))(piVar8), iVar2 != 0)) {
        (**(code **)(*piVar8 + 4))(piVar8);
      }
      *piVar13 = (int)piVar4;
    }
    uVar9 = 0x42c80000;
    uVar10 = 0x423c0000;
    uVar6 = 0x41f00000;
    iVar2 = (**(code **)(**(int **)(param_1 + 0x2f4) + 0x2c))();
    uVar7 = FUN_4a171fac((iVar2 >> 0x10) + -10);
  }
  else if (iVar2 == 1) {
    uVar7 = thunk_FUN_4a161570(0x14);
    piVar4 = (int *)FUN_4a0c707c(uVar7,s_fishing_4a11f750);
    if ((int *)*piVar13 != piVar4) {
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0xc))(piVar4);
      }
      piVar8 = (int *)*piVar13;
      if ((piVar8 != (int *)0x0) && (iVar2 = (**(code **)(*piVar8 + 8))(piVar8), iVar2 != 0)) {
        (**(code **)(*piVar8 + 4))(piVar8);
      }
      *piVar13 = (int)piVar4;
    }
    if (*(int *)(param_1 + 0x7ec) == 8) {
      uVar9 = 0x43480000;
      uVar10 = 0x41a00000;
      uVar6 = 0x420c0000;
      iVar2 = (**(code **)(**(int **)(param_1 + 0x2f4) + 0x2c))();
      uVar7 = FUN_4a171fac((iVar2 >> 0x10) + -0x2d);
      iVar2 = *(int *)(*(int *)(param_1 + 0x5f8) + 0x50);
      if (iVar2 == 3 || iVar2 == 2) {
        uVar7 = FUN_4a1725c0(uVar7,0x42b40000);
      }
    }
    else {
      uVar9 = 0x43340000;
      uVar10 = 0x42480000;
      uVar6 = 0x425c0000;
      iVar2 = (**(code **)(**(int **)(param_1 + 0x2f4) + 0x2c))();
      uVar7 = FUN_4a171fac((iVar2 >> 0x10) + 200);
      iVar2 = *(int *)(*(int *)(param_1 + 0x5f8) + 0x50);
      if (iVar2 == 3 || iVar2 == 2) {
        uVar7 = FUN_4a1725c0(uVar7,0x42b40000);
      }
      FUN_4a171a94(uVar7,0x42b40000);
      local_2c = (int *)FUN_4a0d4978();
      uVar5 = FUN_4a002f08();
      FUN_4a17211c(uVar5,0x41f00000);
      local_30 = FUN_4a171e1c();
      uVar5 = FUN_4a002d64(local_2c);
      FUN_4a17211c(uVar5,0x41f00000);
      uVar5 = FUN_4a171e1c();
      uVar14 = FUN_4a171fac(local_30);
      uVar11 = FUN_4a171a94(uVar14,uVar11);
      uVar5 = FUN_4a171fac(uVar5);
      uVar12 = FUN_4a171a94(uVar5,uVar12);
    }
  }
  else if (iVar2 == 2) {
    uVar12 = thunk_FUN_4a161570(0x14);
    piVar4 = (int *)FUN_4a0c707c(uVar12,s_repairing_4a11f73c);
    if ((int *)*piVar13 != piVar4) {
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0xc))(piVar4);
      }
      piVar8 = (int *)*piVar13;
      if ((piVar8 != (int *)0x0) && (iVar2 = (**(code **)(*piVar8 + 8))(piVar8), iVar2 != 0)) {
        (**(code **)(*piVar8 + 4))(piVar8);
      }
      *piVar13 = (int)piVar4;
    }
    uVar11 = 0x461c4000;
    uVar6 = 0;
    uVar10 = 0x428c0000;
    uVar7 = 0;
    uVar9 = 0x43af0000;
    uVar12 = uVar11;
  }
  uVar14 = *(undefined4 *)(param_1 + 0x7f8);
  uVar5 = FUN_4a0941ec();
  FUN_4a094e74(uVar5,uVar14);
  *(undefined4 *)(param_1 + 0x2c0) = uVar11;
  *(undefined4 *)(param_1 + 0x2c4) = uVar6;
  *(undefined4 *)(param_1 + 0x2c8) = uVar12;
  *(undefined4 *)(param_1 + 0x2cc) = uVar10;
  *(undefined4 *)(param_1 + 0x2d0) = uVar7;
  *(undefined4 *)(param_1 + 0x2d4) = uVar9;
  return;
}



// Address: 4a11f758

int FUN_4a11f758(int param_1,int param_2)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  int iVar3;
  undefined1 auStack_2c [8];
  int local_24;
  int local_20;
  
  FUN_4a10ca70(auStack_2c,param_1);
  iVar1 = FUN_4a0fe640(*(undefined4 *)(param_1 + 0x20),0,local_24 + -1);
  iVar3 = 0;
  if (0 < local_24) {
    do {
      FUN_4a0015f0(iVar1 + iVar3,local_24);
      if (local_20 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(local_20 + 8);
      }
      iVar2 = *(int *)(iVar2 + extraout_r1 * 4);
      if (*(int *)(iVar2 + 0x28) == param_2) {
        FUN_4a16a5f4(auStack_2c);
        return iVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_24);
  }
  FUN_4a16a5f4(auStack_2c);
  return 0;
}



// Address: 4a11f950

void FUN_4a11f950(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  iVar1 = *(int *)(param_2 + 0xc);
  iVar5 = 0;
  bVar9 = iVar1 != 0;
  if (bVar9) {
    iVar6 = *(int *)(iVar1 + 8);
  }
  else {
    iVar6 = 0;
  }
  iVar6 = *(int *)(iVar6 + 4);
  if (bVar9) {
    iVar7 = *(int *)(iVar1 + 8);
  }
  else {
    iVar7 = 0;
  }
  iVar7 = *(int *)(iVar7 + 8);
  if (bVar9) {
    iVar8 = *(int *)(iVar1 + 8);
    iVar5 = *(int *)(iVar1 + 8);
  }
  else {
    iVar8 = 0;
  }
  iVar8 = *(int *)(iVar8 + 0x14);
  iVar1 = *(int *)(iVar5 + 0x18);
  FUN_4a13ca78(*(undefined4 *)(param_1 + 0x20));
  uVar2 = FUN_4a171fac();
  uVar3 = FUN_4a171fac(iVar8 - iVar6);
  uVar4 = FUN_4a171bb8(uVar3,uVar2);
  FUN_4a13caa0(*(undefined4 *)(param_1 + 0x20));
  uVar2 = FUN_4a171fac();
  uVar3 = FUN_4a171fac(iVar1 - iVar7);
  uVar2 = FUN_4a171bb8(uVar3,uVar2);
  uVar3 = FUN_4a17211c(uVar4 ^ 0x80000000,0x43b40000);
  iVar1 = *(int *)(param_1 + 0x28);
  uVar4 = FUN_4a171a94(*(undefined4 *)(iVar1 + 0x488),uVar3);
  if (uVar4 < 0x80000001) {
    if (0x43b40000 < (int)uVar4) {
      uVar4 = FUN_4a1725c0(uVar4,0x43b40000);
    }
  }
  else {
    uVar4 = FUN_4a1725c0(0x43b40000,uVar4);
  }
  uVar2 = FUN_4a17211c(uVar2,0x42700000);
  iVar6 = FUN_4a171a94(*(undefined4 *)(iVar1 + 0x484),uVar2);
  iVar5 = 0x41700000;
  if ((iVar6 < 0x41700000) || (iVar5 = 0x42960000, 0x42960000 < iVar6)) {
    iVar6 = iVar5;
  }
  *(uint *)(iVar1 + 0x488) = uVar4;
  *(int *)(*(int *)(param_1 + 0x28) + 0x484) = iVar6;
  *(uint *)(param_1 + 0xa68) = *(uint *)(param_1 + 0xa68) | 2;
  return;
}



// Address: 4a11fbe0

int FUN_4a11fbe0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x9ec)) {
    puVar6 = (undefined4 *)0x0;
    do {
      iVar1 = *(int *)(param_1 + 0x9a8);
      puVar2 = puVar6;
      if (iVar1 != 0) {
        puVar2 = *(undefined4 **)(iVar1 + 8);
      }
      puVar4 = puVar6;
      if (puVar2[iVar5 * 5 + 3] != 0) {
        puVar4 = *(undefined4 **)(puVar2[iVar5 * 5 + 3] + 8);
      }
      puVar2 = puVar6;
      if (iVar1 != 0) {
        puVar2 = *(undefined4 **)(iVar1 + 8);
      }
      puVar3 = puVar6;
      if (puVar2[iVar5 * 5 + 3] != 0) {
        puVar3 = *(undefined4 **)(puVar2[iVar5 * 5 + 3] + 8);
      }
      iVar1 = FUN_4a134a10(param_2,param_3,*puVar4,puVar3[1]);
      if (iVar1 != 0) {
        return iVar5;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x9ec));
  }
  return -1;
}



// Address: 4a11fc98

void FUN_4a11fc98(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  if (*(int *)(param_1 + 0x84) != 0) {
    return;
  }
  iVar12 = *(int *)(param_1 + 0x30c);
  if (0 < iVar12) {
    uVar1 = FUN_4a171fac(iVar12);
    uVar2 = FUN_4a17211c(uVar1,*(undefined4 *)(param_1 + 0x2f8));
    uVar6 = DAT_4a11feb8;
    uVar2 = FUN_4a17211c(uVar2,DAT_4a11feb8);
    uVar3 = FUN_4a17211c(uVar1,*(undefined4 *)(param_1 + 0x2fc));
    uVar3 = FUN_4a17211c(uVar3,uVar6);
    uVar4 = FUN_4a17211c(uVar1,*(undefined4 *)(param_1 + 0x304));
    uVar4 = FUN_4a17211c(uVar4,uVar6);
    uVar5 = FUN_4a17211c(uVar1,*(undefined4 *)(param_1 + 0x300));
    uVar5 = FUN_4a17211c(uVar5,uVar6);
    uVar1 = FUN_4a17211c(uVar1,*(undefined4 *)(param_1 + 0x308));
    uVar6 = FUN_4a17211c(uVar1,uVar6);
    *(int *)(param_1 + 0x30c) = iVar12 - param_2;
    iVar12 = *(int *)(param_1 + 0x28);
    uVar1 = FUN_4a171e1c(*(undefined4 *)(iVar12 + 0x470));
    uVar7 = FUN_4a171e1c(*(undefined4 *)(iVar12 + 0x478));
    uVar8 = FUN_4a171fac(param_2);
    uVar2 = FUN_4a17211c(uVar8,uVar2);
    FUN_4a17211c(uVar8,uVar3);
    puVar9 = (undefined4 *)FUN_4a0f6708(iVar12,uVar2);
    uVar2 = puVar9[1];
    uVar3 = *puVar9;
    iVar12 = *(int *)(param_1 + 0x28);
    uVar1 = FUN_4a171fac(uVar1);
    uVar1 = FUN_4a171a94(uVar1,uVar3);
    *(undefined4 *)(iVar12 + 0x470) = uVar1;
    iVar12 = *(int *)(param_1 + 0x28);
    uVar1 = FUN_4a171fac(uVar7);
    uVar1 = FUN_4a171a94(uVar1,uVar2);
    *(undefined4 *)(iVar12 + 0x478) = uVar1;
    uVar1 = FUN_4a17211c(uVar8,uVar4);
    FUN_4a171a94(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x488),uVar1);
    FUN_4a171e1c();
    FUN_4a0d4a38();
    iVar12 = *(int *)(param_1 + 0x28);
    uVar1 = FUN_4a171fac();
    *(undefined4 *)(iVar12 + 0x488) = uVar1;
    uVar1 = FUN_4a17211c(uVar8,uVar5);
    iVar13 = *(int *)(param_1 + 0x28);
    FUN_4a171a94(*(undefined4 *)(iVar13 + 0x484),uVar1);
    iVar12 = FUN_4a171e1c();
    if (iVar12 < 0xf) {
      iVar12 = 0xf;
    }
    if (0x4b < iVar12) {
      iVar12 = 0x4b;
    }
    uVar1 = FUN_4a171fac(iVar12);
    *(undefined4 *)(iVar13 + 0x484) = uVar1;
    uVar6 = FUN_4a17211c(uVar8,uVar6);
    iVar13 = *(int *)(param_1 + 0x28);
    FUN_4a171a94(*(undefined4 *)(iVar13 + 0x48c),uVar6);
    iVar12 = FUN_4a171e1c();
    if (*(int *)(param_1 + 0x1d8) == 2) {
      iVar10 = 0x708;
      iVar11 = 800;
    }
    else {
      iVar10 = 0x2ee;
      iVar11 = 200;
    }
    if (iVar12 < iVar11) {
      iVar12 = iVar11;
    }
    if (iVar12 <= iVar10) {
      iVar10 = iVar12;
    }
    uVar6 = FUN_4a171fac(iVar10);
    *(undefined4 *)(iVar13 + 0x48c) = uVar6;
    return;
  }
  return;
}



// Address: 4a11febc

void FUN_4a11febc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  uVar1 = FUN_4a1457cc(uVar2,param_3);
  uVar2 = FUN_4a1457d8(uVar2,param_5);
  FUN_4a10ea38(param_1,param_2,uVar1,param_4,uVar2,param_6,param_7);
  return;
}



// Address: 4a11ff20

int FUN_4a11ff20(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_34 [8];
  int local_2c;
  int local_28;
  
  iVar6 = 0;
  iVar5 = 0x200001;
  FUN_4a10ca70(auStack_34,param_1);
  iVar3 = 0;
  if (0 < local_2c) {
    do {
      if (local_28 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(local_28 + 8);
      }
      iVar4 = *(int *)(iVar1 + iVar3 * 4);
      iVar1 = FUN_4a146b58(iVar4,0x200);
      if (iVar1 != 0) {
        iVar1 = param_2 - *(int *)(iVar4 + 0x44);
        if (iVar1 <= -iVar1) {
          iVar1 = -iVar1;
        }
        iVar2 = param_3 - *(int *)(iVar4 + 0x4c);
        if (iVar2 <= -iVar2) {
          iVar2 = -iVar2;
        }
        if (iVar1 + iVar2 < iVar5) {
          iVar5 = iVar1 + iVar2;
          iVar6 = iVar4;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_2c);
  }
  FUN_4a16a5f4(auStack_34);
  return iVar6;
}



// Address: 4a11ffe4

void FUN_4a11ffe4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_104 [12];
  int local_f8;
  undefined1 auStack_f0 [72];
  undefined1 auStack_a8 [12];
  int local_9c;
  undefined1 auStack_94 [12];
  int local_88;
  undefined1 auStack_80 [12];
  int local_74;
  undefined1 auStack_6c [12];
  int local_60;
  undefined1 auStack_58 [20];
  undefined1 auStack_44 [20];
  undefined1 auStack_30 [20];
  
  FUN_4a16be24(auStack_6c,3);
  iVar11 = 0;
  FUN_4a16be24(auStack_80,3);
  FUN_4a16be24(auStack_94,4);
  FUN_4a17295c(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x470),0x10);
  uVar1 = FUN_4a171e1c();
  if (local_60 == 0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    puVar9 = *(undefined4 **)(local_60 + 8);
  }
  *puVar9 = uVar1;
  FUN_4a17295c(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x474),0x10);
  uVar1 = FUN_4a171e1c();
  if (local_60 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(local_60 + 8);
  }
  *(undefined4 *)(iVar10 + 4) = uVar1;
  FUN_4a17295c(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x478),0x10);
  uVar1 = FUN_4a171e1c();
  if (local_60 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(local_60 + 8);
  }
  *(undefined4 *)(iVar10 + 8) = uVar1;
  if (local_74 == 0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    puVar9 = *(undefined4 **)(local_74 + 8);
  }
  *puVar9 = 0;
  if (local_74 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(local_74 + 8);
  }
  *(undefined4 *)(iVar10 + 4) = 1;
  if (local_74 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(local_74 + 8);
  }
  *(undefined4 *)(iVar10 + 8) = 0;
  uVar1 = FUN_4a16bdcc(auStack_58,auStack_80);
  uVar2 = FUN_4a16bdcc(auStack_44,auStack_6c);
  uVar3 = FUN_4a16bdcc(auStack_30,auStack_94);
  FUN_4a0f5d7c(*(undefined4 *)(param_1 + 0x28),uVar3,uVar2,uVar1,param_2,param_3);
  FUN_4a16bef4(auStack_30);
  FUN_4a16bef4(auStack_44);
  FUN_4a16bef4(auStack_58);
  if (*(int *)(param_1 + 0x9e4) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(*(int *)(param_1 + 0x9e4) + 8);
  }
  uVar2 = *(undefined4 *)(iVar10 + *(int *)(param_1 + 0x9f8) * 4);
  FUN_4a16be24(auStack_a8,3);
  uVar1 = FUN_4a16bdcc(auStack_58,auStack_a8);
  FUN_4a13ebfc(*(undefined4 *)(param_1 + 0x940),uVar1,uVar2,1);
  FUN_4a16bef4(auStack_58);
  FUN_4a0b8a1c(auStack_f0);
  FUN_4a13b6a8(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x410),uVar2,auStack_f0);
  FUN_4a16be24(auStack_104,4);
  if (local_9c == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *(int **)(local_9c + 8);
  }
  if (local_88 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = *(int **)(local_88 + 8);
  }
  if (local_f8 == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = *(int **)(local_f8 + 8);
  }
  *piVar6 = *piVar4 - *piVar5;
  if (local_9c == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(local_9c + 8);
  }
  if (local_88 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(local_88 + 8);
  }
  if (local_f8 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(local_f8 + 8);
  }
  *(int *)(iVar8 + 4) = *(int *)(iVar10 + 4) - *(int *)(iVar7 + 4);
  if (local_9c == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(local_9c + 8);
  }
  if (local_88 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(local_88 + 8);
  }
  if (local_f8 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(local_f8 + 8);
  }
  *(int *)(iVar8 + 8) = *(int *)(iVar10 + 8) - *(int *)(iVar7 + 8);
  if (local_f8 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(local_f8 + 8);
  }
  *(undefined4 *)(iVar10 + 0xc) = 0;
  FUN_4a13c368(auStack_f0,auStack_104);
  bVar12 = local_f8 != 0;
  if (bVar12) {
    iVar10 = *(int *)(local_f8 + 8);
  }
  else {
    iVar10 = 0;
  }
  if (bVar12) {
    iVar7 = *(int *)(local_f8 + 8);
  }
  else {
    iVar7 = 0;
  }
  if (bVar12) {
    piVar4 = *(int **)(local_f8 + 8);
  }
  else {
    piVar4 = (int *)0x0;
  }
  if (*(int *)(param_1 + 0x9bc) != 0) {
    iVar11 = *(int *)(*(int *)(param_1 + 0x9bc) + 8);
  }
  FUN_4a0af278(*(undefined4 *)(iVar11 + *(int *)(param_1 + 0x9f8) * 4),-*piVar4,
               *(undefined4 *)(iVar7 + 4),-*(int *)(iVar10 + 8));
  FUN_4a16bef4(auStack_104);
  FUN_4a0c6bf4(auStack_f0);
  FUN_4a16bef4(auStack_a8);
  FUN_4a16bef4(auStack_94);
  FUN_4a16bef4(auStack_80);
  FUN_4a16bef4(auStack_6c);
  return;
}



// Address: 4a120320

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_4a120320(int param_1,undefined4 param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  uint uVar13;
  undefined4 unaff_r6;
  undefined4 uVar14;
  int *piVar15;
  int iVar16;
  bool bVar17;
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar16 = *(int *)(param_1 + 0x24);
  iVar7 = host_s3eAccelerometerGetInt_arm(0);
  uVar9 = (uint)(iVar7 != 0);
  *PTR_DAT_4a120740 = iVar7 != 0;
  bVar17 = false;
  *(undefined4 *)(param_1 + 0x7ec) = param_2;
  puVar3 = PTR_DAT_4a120740;
  switch(param_2) {
  case 0:
    *(undefined4 *)(param_1 + 0x2b4) = 0;
    FUN_4a115d8c(param_1,0);
    iVar7 = 6;
    goto code_r0x4a11e2a0;
  case 1:
    iVar7 = *(int *)(param_1 + 0x7f4);
    if (iVar7 == 0) {
      *(undefined4 *)(PTR_DAT_4a120740 + 4) = 0;
      FUN_4a11a440(param_1,5);
    }
    else if (iVar7 == 1) {
      *(undefined4 *)(param_1 + 0x8d4) = 0;
      *(undefined4 *)(puVar3 + 8) = 0;
      *(undefined4 *)(puVar3 + 0xc) = 0;
      *(undefined4 *)(puVar3 + 0x10) = 0;
      FUN_4a11a440(param_1,6);
    }
    else if (iVar7 == 2) {
      FUN_4a11a440(param_1,7);
    }
    else if (iVar7 == 3) {
      FUN_4a11a440(param_1,8);
    }
    iVar7 = 7;
code_r0x4a11e2a0:
    iVar16 = *(int *)(param_1 + 700);
    *(int *)(param_1 + 700) = iVar7;
    uVar9 = 0;
    switch(iVar7) {
    case 0:
      *(undefined1 *)(param_1 + 0x2d8) = 1;
      *(undefined4 *)(param_1 + 0x2f8) = 0;
      *(undefined4 *)(param_1 + 0x2fc) = 0;
      *(undefined4 *)(param_1 + 0x304) = 0;
      *(undefined4 *)(param_1 + 0x300) = 0;
      *(undefined4 *)(param_1 + 0x308) = 0;
      *(undefined4 *)(param_1 + 0x30c) = 0;
      break;
    case 1:
      *(undefined1 *)(param_1 + 0x2d8) = 0;
      uVar9 = FUN_4a111968(param_1);
      break;
    case 5:
      *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_1 + 0x2dc);
      *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(param_1 + 0x2e0);
      *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_1 + 0x2e4);
      *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_1 + 0x2f0);
      *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(param_1 + 0x2e8);
      uVar9 = *(uint *)(param_1 + 0x2ec);
      *(uint *)(param_1 + 0x2d0) = uVar9;
      break;
    case 6:
      *(undefined1 *)(param_1 + 0x2d8) = 0;
      iVar5 = *(int *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(iVar5 + 0x470);
      *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(iVar5 + 0x474);
      *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(iVar5 + 0x478);
      *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(iVar5 + 0x48c);
      *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(iVar5 + 0x484);
      *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(iVar5 + 0x488);
      *(undefined4 *)(param_1 + 0x2f4) = *(undefined4 *)(param_1 + 0x7f0);
      FUN_4a11f284(param_1);
      uVar9 = *(uint *)(param_1 + 0x7f4);
      if (uVar9 == 2) {
        *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x470) = *(undefined4 *)(param_1 + 0x2c0);
        *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x474) = *(undefined4 *)(param_1 + 0x2c4);
        *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x478) = *(undefined4 *)(param_1 + 0x2c8);
        *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x484) = *(undefined4 *)(param_1 + 0x2cc);
        *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x488) = *(undefined4 *)(param_1 + 0x2d0);
        *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x48c) = *(undefined4 *)(param_1 + 0x2d4);
        uVar9 = FUN_4a0f5774(*(undefined4 *)(param_1 + 0x28));
        *(undefined1 *)(param_1 + 0x2d8) = 1;
      }
    }
    if (iVar16 == 0) {
      if (iVar7 != 0) {
        FUN_4a084b60(param_1 + 0x318,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x470));
        FUN_4a084b60(param_1 + 0x38c,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x474));
        FUN_4a084b60(param_1 + 0x400,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x478));
        FUN_4a084b60(param_1 + 0x474,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x48c));
        FUN_4a084b60(param_1 + 0x4e8,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x484));
        uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x488);
        iVar7 = 0;
        if (0 < *(int *)(param_1 + 0x5b0)) {
          do {
            if (*(int *)(param_1 + 0x594) == 0) {
              iVar16 = 0;
            }
            else {
              iVar16 = *(int *)(*(int *)(param_1 + 0x594) + 8);
            }
            *(undefined4 *)(iVar16 + iVar7 * 4) = uVar4;
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(param_1 + 0x5b0));
        }
        if (0 < *(int *)(param_1 + 0x5b4)) {
          iVar7 = 0;
          do {
            if (*(int *)(param_1 + 0x5a8) == 0) {
              iVar16 = 0;
            }
            else {
              iVar16 = *(int *)(*(int *)(param_1 + 0x5a8) + 8);
            }
            *(undefined4 *)(iVar16 + iVar7 * 4) = uVar4;
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(param_1 + 0x5b4));
        }
        *(undefined4 *)(param_1 + 0x5cc) = uVar4;
        *(undefined4 *)(param_1 + 0x5c4) = uVar4;
        *(undefined4 *)(param_1 + 0x5c0) = uVar4;
        return param_1 + 0x55c;
      }
      return uVar9;
    }
    return uVar9;
  case 2:
    uVar4 = thunk_FUN_4a161570(0x14);
    uVar4 = FUN_4a0c707c(uVar4,s_success_4a120744);
    uVar8 = *(undefined4 *)(param_1 + 0x7f8);
    uVar11 = FUN_4a0941ec();
    FUN_4a094e78(uVar11,uVar8,1,uVar4);
    FUN_4a0cf554(param_1,0x4c);
    FUN_4a1161d0(param_1,6);
    if (*(int *)(param_1 + 0x7f4) == 1) {
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x20) + 0x264) + 0x30) = 0;
    }
    else if (*(int *)(param_1 + 0xa84) < 1) {
      FUN_4a0d36b8(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x264));
      FUN_4a0d36d0(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x264),4,0);
    }
    else {
      FUN_4a0d32e4();
    }
    iVar7 = *(int *)(param_1 + 0x7f4);
    if (iVar7 == 0) {
      FUN_4a110ec4(param_1,0);
      FUN_4a0daefc(iVar16,0x1b);
      iVar7 = FUN_4a13fd10(iVar16);
      if (iVar7 == 0) {
        FUN_4a0daefc(iVar16,0x1c);
      }
      else if (iVar7 == 6) {
        FUN_4a0daefc(iVar16,0x1d);
      }
      else if (iVar7 == 9) {
        FUN_4a0daefc(iVar16,0x1e);
      }
    }
    else if (iVar7 == 1) {
      FUN_4a110ec4(param_1,1);
      FUN_4a10918c(*(undefined4 *)(param_1 + 0x7f0));
      FUN_4a0daefc(iVar16,0x15);
      iVar7 = *(int *)(param_1 + 0x8c8);
      if (iVar7 == 0x1f) {
        FUN_4a0daefc(iVar16,0x16);
      }
      else if (iVar7 == 0x20) {
        FUN_4a0daefc(iVar16,0x17);
      }
      else if (iVar7 == 0x1d) {
        FUN_4a0daefc(iVar16,0x18);
      }
      switchD_4a0de288::default(iVar16,*(undefined4 *)(param_1 + 0x8c8),1);
      uVar11 = *(undefined4 *)(param_1 + 0x8c8);
      uVar4 = 0xafe;
      *(undefined4 *)(param_1 + 0x73c) = 1;
      *(undefined4 *)(param_1 + 0x740) = 0xa1b;
      *(undefined4 *)(param_1 + 0x738) = uVar11;
      iVar7 = FUN_4a140338(*(undefined4 *)(param_1 + 0x24),uVar11);
      iVar5 = FUN_4a143130(*(undefined4 *)(param_1 + 0x28),uVar11);
      if (iVar7 == *(char *)(iVar5 + 0x18)) {
        uVar4 = 0xaff;
      }
      *(undefined4 *)(param_1 + 0x744) = uVar4;
    }
    else if (iVar7 == 2) {
      FUN_4a110ec4(param_1,2);
      FUN_4a0daefc(iVar16,0x19);
      FUN_4a1061e0(*(undefined4 *)(param_1 + 0x7f0));
      FUN_4a12122c(param_1);
    }
    goto LAB_4a12051c;
  case 3:
    uVar4 = thunk_FUN_4a161570(0x14);
    uVar4 = FUN_4a0c707c(uVar4,&DAT_4a12074c);
    uVar8 = *(undefined4 *)(param_1 + 0x7f8);
    uVar11 = FUN_4a0941ec();
    FUN_4a094e78(uVar11,uVar8,0,uVar4);
    if (*(int *)(param_1 + 0x7f4) == 1) {
      FUN_4a0f1b30(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(*(int *)(param_1 + 0x8cc) + 0x28)
                  );
      FUN_4a0f1b30(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(*(int *)(param_1 + 0x8d0) + 0x28)
                  );
      *(undefined4 *)(param_1 + 0x80c) = 0xffffffff;
      FUN_4a10918c(*(undefined4 *)(param_1 + 0x7f0));
LAB_4a1206a4:
      if ((*(int *)(param_1 + 0x7f4) != 2) ||
         (iVar7 = FUN_4a0fb748(*(undefined4 *)(param_1 + 0x20)), 4 < iVar7)) goto LAB_4a12075c;
      uVar4 = thunk_FUN_4a161570(0x14);
      uVar4 = FUN_4a0c707c(uVar4,s_repair_4a120754);
      uVar11 = FUN_4a0941ec();
      FUN_4a094d04(uVar11,uVar4);
      *(undefined4 *)(param_1 + 0x290) = 7;
      FUN_4a0cd7c0(param_1,0xb66);
      FUN_4a1161d0(param_1,9);
    }
    else {
      if (*(int *)(param_1 + 0x7f4) == 2) {
        FUN_4a12122c(param_1);
        goto LAB_4a1206a4;
      }
LAB_4a12075c:
      FUN_4a076d54(*(undefined4 *)(param_1 + 0x5f8));
      FUN_4a073914(*(undefined4 *)(param_1 + 0x5f8),0xb,0);
      iVar7 = *(int *)(param_1 + 0x7f4);
      if (iVar7 == 0) {
        uVar8 = 0xa0d;
      }
      else if (iVar7 == 1) {
        uVar8 = 0xa1b;
      }
      else if (iVar7 == 2) {
        uVar8 = 0xa22;
      }
      *(undefined4 *)(param_1 + 0x290) = 0;
      FUN_4a0cd7c0(param_1,0xb33,uVar8);
      FUN_4a1161d0(param_1,9);
      if (*(int *)(param_1 + 0x7f4) == 1) {
        *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x20) + 0x264) + 0x30) = 0;
      }
      else if (*(int *)(param_1 + 0xa84) < 1) {
        FUN_4a0d36b8(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x264));
      }
      else {
        FUN_4a0d32e4();
      }
      bVar17 = true;
    }
    FUN_4a10918c(*(undefined4 *)(param_1 + 0x5f8));
    uVar9 = FUN_4a11e2a0(param_1,8);
    break;
  case 4:
    uVar4 = thunk_FUN_4a161570(0x14);
    uVar4 = FUN_4a0c707c(uVar4,s_cancel_4a120b54);
    uVar8 = *(undefined4 *)(param_1 + 0x7f8);
    uVar11 = FUN_4a0941ec();
    FUN_4a094e78(uVar11,uVar8,0,uVar4);
    iVar7 = *(int *)(param_1 + 0x7f4);
    if (iVar7 == 0) {
      uVar4 = FUN_4a146c0c(*(undefined4 *)(param_1 + 0x7f0));
      iVar7 = 0;
      if (0 < *(int *)(param_1 + 0x860)) {
        do {
          FUN_4a13eaec(uVar4,iVar7 + 3000);
          uVar11 = FUN_4a165910();
          FUN_4a0b4ac8(uVar11,*(undefined4 *)(*(int *)(param_1 + iVar7 * 4 + 0x818) + 0x28));
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(param_1 + 0x860));
      }
      if (*(int *)(param_1 + 0xa84) < 1) {
        FUN_4a0d36b8(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x264));
      }
      else {
        FUN_4a0d32e4();
      }
      *(undefined4 *)(param_1 + 0x814) = 0;
      *(undefined4 *)(param_1 + 0x80c) = 0xffffffff;
    }
    else if (iVar7 == 1) {
      FUN_4a10918c(*(undefined4 *)(param_1 + 0x7f0));
      FUN_4a0f1b30(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(*(int *)(param_1 + 0x8cc) + 0x28)
                  );
      FUN_4a0f1b30(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(*(int *)(param_1 + 0x8d0) + 0x28)
                  );
      *(undefined4 *)(param_1 + 0x80c) = 0xffffffff;
    }
    else if (iVar7 == 2) {
      FUN_4a12122c(param_1);
    }
    *(undefined4 *)(param_1 + 0x7c4) = 0;
    FUN_4a076d54(*(undefined4 *)(param_1 + 0x5f8));
    iVar7 = *(int *)(param_1 + 0x7f4);
    if (iVar7 == 0) {
      unaff_r6 = 0xa0d;
    }
    else if (iVar7 == 1) {
      unaff_r6 = 0xa1b;
    }
    else if (iVar7 == 2) {
      unaff_r6 = 0xa22;
    }
    *(undefined4 *)(param_1 + 0x290) = 0;
    FUN_4a0cd7c0(param_1,0xb34,unaff_r6);
    FUN_4a1161d0(param_1,9);
    if (*(int *)(param_1 + 0x7f4) == 1) {
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x20) + 0x264) + 0x30) = 0;
    }
    else if (*(int *)(param_1 + 0xa84) < 1) {
      FUN_4a0d36b8(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x264));
    }
    else {
      FUN_4a0d32e4();
    }
LAB_4a12051c:
    FUN_4a10918c(*(undefined4 *)(param_1 + 0x5f8));
    FUN_4a11e2a0(param_1,8);
    goto LAB_4a120c74;
  case 5:
    iVar7 = 1 - *(uint *)(param_1 + 0x7f4);
    if (1 < *(uint *)(param_1 + 0x7f4)) {
      iVar7 = 0;
    }
    switchD_4a11cc8c::default(iVar7,s_only_cooking_uses_timeup_state_4a120b5c);
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    return 0;
  case 6:
    *(undefined4 *)(param_1 + 0x858) = 2000;
    uVar9 = 1 - *(uint *)(param_1 + 0x7f4);
    if (1 < *(uint *)(param_1 + 0x7f4)) {
      uVar9 = 0;
    }
    return uVar9;
  case 7:
    switchD_4a11cc8c::default
              (*(int *)(param_1 + 0x7f4) == 1,s_only_fishing_uses_intro_state_4a120b9c);
    uVar4 = *(undefined4 *)(param_1 + 0x5f8);
    FUN_4a107f20(uVar4,0x80);
    FUN_4a074248(uVar4,0x3c);
    iVar7 = *(int *)(param_1 + 0x28);
    FUN_4a0b4c10(*(undefined4 *)(iVar7 + 0x414),*(undefined4 *)(*(int *)(param_1 + 0x8d0) + 0x28));
    *(undefined1 *)(iVar7 + 0x450) = 1;
    return 1;
  case 8:
    switchD_4a11cc8c::default
              (*(int *)(param_1 + 0x7f4) == 1,s_only_fishing_uses_outro_state_4a120bbc);
    uVar4 = *(undefined4 *)(param_1 + 0x5f8);
    FUN_4a107f20(uVar4,0x80);
    if (*(int *)(param_1 + 0x8bc) == 0x3f800000) {
      uVar11 = 0x40;
    }
    else {
      uVar11 = 0x3d;
    }
    FUN_4a074248(uVar4,uVar11);
    if (*(int *)(param_1 + 0x8bc) == 0x3f800000) {
      uVar4 = 0xe7;
    }
    else {
      uVar4 = 0xe6;
    }
    FUN_4a06f95c(*(undefined4 *)(param_1 + 0x8d0),uVar4,0x10);
    if (*(int *)(param_1 + 0x8bc) == 0x3f800000) {
      FUN_4a06f95c(*(int *)(param_1 + 0x8cc),0xe8,0x10);
      iVar7 = *(int *)(param_1 + 0x5f8);
      uVar14 = *(undefined4 *)(*(int *)(param_1 + 0x8cc) + 0x28);
      uVar4 = FUN_4a171fac(*(undefined4 *)(iVar7 + 0x4c));
      uVar4 = FUN_4a17295c(uVar4,0xfffffff0);
      uVar11 = FUN_4a171fac(*(undefined4 *)(iVar7 + 0x48));
      uVar11 = FUN_4a17295c(uVar11,0xfffffff0);
      uVar8 = FUN_4a171fac(*(undefined4 *)(iVar7 + 0x44));
      uVar8 = FUN_4a17295c(uVar8,0xfffffff0);
      FUN_4a0af1d4(uVar14,uVar8,uVar11,uVar4);
      iVar16 = *(int *)(*(int *)(param_1 + 0x20) + 0x260);
      iVar7 = FUN_4a085614(iVar16);
      if (iVar7 != 0) {
        FUN_4a0866c0(iVar16,0x49);
      }
      if (*(int *)(iVar16 + 0x74) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(*(int *)(iVar16 + 0x74) + 8);
      }
      iVar16 = 0;
      if (0 < *(int *)(iVar7 + 0x5bc)) {
        do {
          if (*(int *)(iVar7 + 0x5c0) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(*(int *)(iVar7 + 0x5c0) + 8);
          }
          piVar12 = *(int **)(iVar5 + iVar16 * 4);
          if (piVar12[1] != 400) {
            (**(code **)(*piVar12 + 0x28))(piVar12);
            (**(code **)(*piVar12 + 0x30))(piVar12,0);
            (**(code **)(*piVar12 + 0x3c))(piVar12);
            return iVar16 << 0x10 | 0x49;
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < *(int *)(iVar7 + 0x5bc));
      }
      return 0xffffffff;
    }
    iVar16 = *(int *)(*(int *)(param_1 + 0x8cc) + 0x28);
    iVar7 = *(int *)(*(int *)(param_1 + 0x28) + 0x414);
    uVar9 = FUN_4a0b470c(iVar16,0);
    iVar7 = *(int *)(iVar7 + 0xdc);
    if (iVar7 == 0) {
      return uVar9;
    }
    iVar6 = *(int *)(iVar7 + 0x10);
    iVar5 = 0;
    if (0 < iVar6) {
      do {
        if (*(int *)(*(int *)(iVar7 + 0x14) + iVar5 * 4) == iVar16) goto LAB_4a0b4b20;
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar6);
    }
    iVar5 = -1;
LAB_4a0b4b20:
    if (iVar5 != -1) {
      iVar5 = iVar5 + 1;
      if (iVar5 < iVar6) {
        do {
          piVar15 = *(int **)(*(int *)(iVar7 + 0x14) + iVar5 * 4);
          piVar12 = *(int **)(*(int *)(iVar7 + 0x14) + (iVar5 + -1) * 4);
          if (piVar15 != (int *)0x0) {
            (**(code **)(*piVar15 + 0xc))();
          }
          *(int **)(*(int *)(iVar7 + 0x14) + (iVar5 + -1) * 4) = piVar15;
          if ((piVar12 != (int *)0x0) &&
             (iVar16 = (**(code **)(*piVar12 + 8))(piVar12), iVar16 != 0)) {
            (**(code **)(*piVar12 + 4))(piVar12);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(iVar7 + 0x10));
      }
      iVar16 = *(int *)(iVar7 + 0x10) + -1;
      piVar12 = *(int **)(*(int *)(iVar7 + 0x14) + iVar16 * 4);
      *(undefined4 *)(*(int *)(iVar7 + 0x14) + iVar16 * 4) = 0;
      if ((piVar12 != (int *)0x0) && (iVar16 = (**(code **)(*piVar12 + 8))(piVar12), iVar16 != 0)) {
        (**(code **)(*piVar12 + 4))(piVar12);
      }
      uVar9 = *(int *)(iVar7 + 0x10) - 1;
      *(uint *)(iVar7 + 0x10) = uVar9;
      return uVar9;
    }
    return 0xffffffff;
  case 0xb:
    FUN_4a06f95c(*(undefined4 *)(param_1 + 0x96c),0xeb,0x14);
    *(undefined4 *)(param_1 + 0x970) = 3000;
    iVar7 = 0;
    if (0 < *(int *)(param_1 + 0x94c)) {
      do {
        if (*(int *)(param_1 + 0x950) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0x950) + 8);
        }
        FUN_4a0b4608(*(undefined4 *)(*(int *)(iVar5 + iVar7 * 4) + 0x28),1);
        if (*(int *)(param_1 + 0x950) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0x950) + 8);
        }
        FUN_4a06f95c(*(undefined4 *)(iVar5 + iVar7 * 4),0xec,0x14);
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_1 + 0x94c));
    }
    uVar9 = FUN_4a0cf554(param_1,0x4f);
  }
  if (!bVar17) {
    return uVar9;
  }
LAB_4a120c74:
  uVar9 = *(uint *)(param_1 + 0x7f4);
  if (uVar9 == 0) {
    iVar7 = 1;
  }
  else {
    if (uVar9 != 1) {
      return uVar9;
    }
    iVar7 = 0;
  }
  do {
    uStack_28 = *(undefined4 *)(iVar16 + 0x18);
    uStack_2c = FUN_4a0fba7c();
    bVar17 = false;
    uVar4 = FUN_4a16b5a0(auStack_40,iVar16 + 0x7e0);
    iVar5 = FUN_4a16fe9c((char)iVar7,uVar4,0);
    FUN_4a16b6c0(auStack_40);
    if (iVar5 == -1) {
      if (*(char *)(iVar16 + 0x7d9) == iVar7) {
        *(undefined1 *)(iVar16 + 0x7d9) = 0xff;
        bVar17 = true;
        iVar5 = 4;
        *(undefined4 *)(iVar16 + 0x7dc) = 0;
      }
    }
    else {
      bVar17 = true;
      if (*(int *)(iVar16 + 0x7ec) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(iVar16 + 0x7ec) + 8);
      }
      *(undefined1 *)(iVar6 + iVar5) = 0xff;
    }
    uVar9 = 0;
    if (iVar7 == 0) {
      uVar9 = 4;
    }
    else if (iVar7 == 1) {
      uVar9 = 8;
    }
    uVar13 = 0;
    *(uint *)(iVar16 + 0x7f8) = uVar9 | *(uint *)(iVar16 + 0x7f8);
    if (*(int *)(iVar16 + 400) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(iVar16 + 400) + 8);
    }
    uVar2 = *(ushort *)(iVar6 + *(char *)(iVar16 + 0x7d8) * 2);
    uVar9 = 0;
    iVar6 = 0;
    if (0 < *(int *)(iVar16 + 0x1a0)) {
      do {
        iVar10 = 0;
        if (*(int *)(iVar16 + 0x1b8) != 0) {
          iVar10 = *(int *)(*(int *)(iVar16 + 0x1b8) + 8);
        }
        if ((*(ushort *)(iVar10 + iVar6 * 2) & uVar2) != 0) {
          uVar1 = 1 << (uVar13 & 0xff);
          if (iVar7 == iVar6) {
            if ((*(uint *)(iVar16 + 0x7f4) & uVar1) == 0) {
              bVar17 = true;
              *(uint *)(iVar16 + 0x7f4) = *(uint *)(iVar16 + 0x7f4) | uVar1;
              goto LAB_4a0db034;
            }
LAB_4a0db040:
            uVar9 = uVar9 + 1;
          }
          else {
LAB_4a0db034:
            if ((uVar1 & *(uint *)(iVar16 + 0x7f4)) != 0) goto LAB_4a0db040;
          }
          uVar13 = uVar13 + 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(iVar16 + 0x1a0));
    }
    if (bVar17) {
      FUN_4a0fd124(uStack_28,iVar7);
      FUN_4a1182e0(uStack_2c,iVar7,iVar5);
      uVar4 = FUN_4a0941ec();
      FUN_4a094d68(uVar4,iVar7);
    }
    if (uVar9 == uVar13) {
      *(uint *)(iVar16 + 0x7f8) = *(uint *)(iVar16 + 0x7f8) | 1;
    }
    uVar9 = FUN_4a145968(uStack_28);
    if ((uVar9 == 0) &&
       (uVar13 = *(uint *)(iVar16 + 0x1a0), uVar9 = FUN_4a145b3c(uStack_28), uVar9 == uVar13)) {
      uVar9 = FUN_4a10ea2c(uStack_2c);
    }
    if (iVar7 != 0x15) {
      return uVar9;
    }
    iVar5 = (*(ushort *)(iVar16 + 0x810) + 1) * 0x10000;
    uVar9 = iVar5 >> 0x10;
    if (0xf < (int)uVar9) {
      iVar7 = 0x2b;
    }
    *(short *)(iVar16 + 0x810) = (short)((uint)iVar5 >> 0x10);
    if ((int)uVar9 < 0x10) {
      return uVar9;
    }
  } while( true );
}



// Address: 4a120ca8

/* WARNING: Removing unreachable block (ram,0x4a0faea0) */
/* WARNING: Removing unreachable block (ram,0x4a0fae9c) */
/* WARNING: Removing unreachable block (ram,0x4a116204) */
/* WARNING: Removing unreachable block (ram,0x4a0faebc) */
/* WARNING: Removing unreachable block (ram,0x4a0faf08) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_4a120ca8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  int iVar12;
  undefined1 auStack_50 [20];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [4];
  undefined4 local_28;
  
  iVar7 = *(int *)(param_1 + 0xa10);
  *(undefined4 *)(param_1 + 0xa10) = param_2;
  iVar8 = *(int *)(param_1 + 0x20);
  iVar1 = iVar8 + 0x128;
  switch(param_2) {
  case 0:
    if (iVar7 != -1) {
      return iVar1;
    }
    uVar11 = thunk_FUN_4a161570(0x14);
    uVar11 = FUN_4a0c707c(uVar11,*(undefined4 *)(PTR_PTR_4a120fd4 + *(int *)(param_1 + 0xa5c) * 4));
    uVar2 = FUN_4a0941ec();
    FUN_4a094aa4(uVar2,uVar11);
    uVar11 = FUN_4a143934(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0xa5c));
    iVar1 = FUN_4a16be24(auStack_2c,uVar11);
    uVar11 = *(undefined4 *)(iVar1 + 8);
    piVar9 = *(int **)(iVar1 + 0xc);
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 0xc))(piVar9);
    }
    (**(code **)(*(int *)(param_1 + 0xa1c) + 0x1c))((int *)(param_1 + 0xa1c));
    *(undefined4 *)(param_1 + 0xa24) = uVar11;
    *(int **)(param_1 + 0xa28) = piVar9;
    FUN_4a16bef4(auStack_2c);
    iVar1 = FUN_4a16be24(auStack_2c,*(undefined4 *)(param_1 + 0xa24));
    uVar11 = *(undefined4 *)(iVar1 + 8);
    piVar9 = *(int **)(iVar1 + 0xc);
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 0xc))(piVar9);
    }
    (**(code **)(*(int *)(param_1 + 0xa30) + 0x1c))((int *)(param_1 + 0xa30));
    *(undefined4 *)(param_1 + 0xa38) = uVar11;
    *(int **)(param_1 + 0xa3c) = piVar9;
    FUN_4a16bef4(auStack_2c);
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0xa24)) {
      do {
        uVar11 = FUN_4a14367c(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0xa5c),iVar1
                             );
        uVar2 = FUN_4a140338(*(undefined4 *)(param_1 + 0x24),uVar11);
        if (*(int *)(param_1 + 0xa28) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(*(int *)(param_1 + 0xa28) + 8);
        }
        *(undefined4 *)(iVar7 + iVar1 * 4) = uVar2;
        if (*(int *)(param_1 + 0xa3c) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(*(int *)(param_1 + 0xa3c) + 8);
        }
        *(undefined4 *)(iVar7 + iVar1 * 4) = uVar11;
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0xa24));
    }
    *(undefined4 *)(param_1 + 0xa44) = 0;
    uVar11 = FUN_4a0cf540(param_1,7);
    FUN_4a0d297c(uVar11,0xffffffff);
    FUN_4a0d21e4(uVar11,0);
    *(undefined4 *)(param_1 + 0xa18) = 1000;
    *(undefined4 *)(param_1 + 0xa14) = 1000;
    return 1000;
  case 1:
    break;
  case 2:
    iVar7 = *(int *)(param_1 + 0x168);
    iVar1 = FUN_4a0ff494();
    *(undefined4 *)(iVar7 + 0x78) = 1;
    *(undefined4 *)(iVar7 + 0x94) = 0xffffffff;
    *(undefined4 *)(iVar7 + 0x98) = 4;
    *(undefined4 *)(iVar7 + 0x90) = 0xbff;
    *(undefined4 *)(iVar7 + 0x9c) = 0xffffffff;
    *(undefined4 *)(iVar7 + 0xa0) = 0xffffffff;
    FUN_4a09f974(iVar1 + 0x128,0x60);
    uVar11 = FUN_4a171e1c();
    *(undefined4 *)(iVar7 + 0xa4) = uVar11;
    *(undefined4 *)(iVar7 + 0xa8) = 200;
    FUN_4a08a03c(iVar7,0xc00,0);
    *(undefined4 *)(iVar7 + 0x74) = 0;
    *(undefined4 *)(iVar7 + 0x7c) = 2;
    *(undefined4 *)(iVar7 + 0x80) = 0;
                    /* WARNING: Could not recover jumptable at 0x4a0faeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*(code *)PTR_caseD_2_4a0faec8)();
    return iVar1;
  case 3:
    FUN_4a09f974(iVar1,0x61);
    iVar1 = FUN_4a171e1c();
    FUN_4a06b330(iVar8 + 0x278,0xc01,3,iVar1 + -0x28);
    iVar7 = 0;
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0xa24)) {
      do {
        if (*(int *)(param_1 + 0xa3c) == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(*(int *)(param_1 + 0xa3c) + 8);
        }
        if (*(int *)(param_1 + 0xa28) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(param_1 + 0xa28) + 8);
        }
        iVar3 = *(int *)(iVar3 + iVar1 * 4);
        iVar8 = FUN_4a140338(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(iVar8 + iVar1 * 4));
        if (iVar3 != iVar8) {
          iVar7 = iVar7 + 1;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0xa24));
    }
    iVar1 = FUN_4a168d38(auStack_3c,iVar7);
    uVar11 = *(undefined4 *)(iVar1 + 8);
    piVar9 = *(int **)(iVar1 + 0xc);
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 0xc))(piVar9);
    }
    (**(code **)(*(int *)(param_1 + 0xa48) + 0x1c))((int *)(param_1 + 0xa48));
    *(undefined4 *)(param_1 + 0xa50) = uVar11;
    *(int **)(param_1 + 0xa54) = piVar9;
    FUN_4a168e44(auStack_3c);
    iVar7 = 0;
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0xa24)) {
      do {
        iVar8 = 0;
        if (*(int *)(param_1 + 0xa3c) != 0) {
          iVar8 = *(int *)(*(int *)(param_1 + 0xa3c) + 8);
        }
        local_28 = *(undefined4 *)(iVar8 + iVar7 * 4);
        iVar8 = 0;
        if (*(int *)(param_1 + 0xa28) != 0) {
          iVar8 = *(int *)(*(int *)(param_1 + 0xa28) + 8);
        }
        iVar12 = *(int *)(iVar8 + iVar7 * 4);
        iVar3 = FUN_4a140338(*(undefined4 *)(param_1 + 0x24),local_28);
        iVar8 = iVar1;
        if (iVar12 != iVar3) {
          iVar8 = 0;
          if (*(int *)(param_1 + 0xa54) != 0) {
            iVar8 = *(int *)(*(int *)(param_1 + 0xa54) + 8);
          }
          piVar9 = (int *)(iVar8 + iVar1 * 0x14);
          iVar8 = FUN_4a16be24(auStack_50,2);
          iVar6 = *(int *)(iVar8 + 8);
          piVar10 = *(int **)(iVar8 + 0xc);
          if (piVar10 != (int *)0x0) {
            (**(code **)(*piVar10 + 0xc))(piVar10);
          }
          (**(code **)(*piVar9 + 0x1c))(piVar9);
          piVar9[3] = (int)piVar10;
          piVar9[2] = iVar6;
          FUN_4a16bef4(auStack_50);
          iVar6 = 0;
          if (*(int *)(param_1 + 0xa54) == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)(*(int *)(param_1 + 0xa54) + 8);
          }
          iVar8 = *(int *)(iVar8 + iVar1 * 0x14 + 0xc);
          if (iVar8 == 0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            puVar4 = *(undefined4 **)(iVar8 + 8);
          }
          *puVar4 = local_28;
          iVar8 = iVar1 + 1;
          if (*(int *)(param_1 + 0xa54) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(*(int *)(param_1 + 0xa54) + 8);
          }
          iVar1 = *(int *)(iVar5 + iVar1 * 0x14 + 0xc);
          if (iVar1 != 0) {
            iVar6 = *(int *)(iVar1 + 8);
          }
          *(int *)(iVar6 + 4) = iVar12 - iVar3;
        }
        iVar7 = iVar7 + 1;
        iVar1 = iVar8;
      } while (iVar7 < *(int *)(param_1 + 0xa24));
    }
    uVar11 = FUN_4a0cf540(param_1,9);
    iVar1 = FUN_4a0d297c(uVar11,0xffffffff);
  default:
    return iVar1;
  case 0xffffffff:
    if (iVar7 == 0) {
      FUN_4a0941ec();
      FUN_4a094c64();
    }
    *(undefined4 *)(param_1 + 0x1c0) = 6;
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    *(undefined1 *)(param_1 + 0x1dc) = 1;
    host_s3eAccelerometerStop_arm();
                    /* WARNING: Could not recover jumptable at 0x4a116200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*(code *)PTR_caseD_6_4a116220)();
    return iVar1;
  }
  FUN_4a0cd7c0(param_1,0xbfe);
  FUN_4a11a440(param_1,0x1d);
  uVar11 = *(undefined4 *)(param_1 + 0x24);
  if (*(char *)(param_1 + 0x6f3) == '\0') {
    if (*(char *)(param_1 + 0x7d8) == '\0') {
      if (*(int *)(param_1 + 0x738) != -1) {
        FUN_4a1161d0(param_1,0xf);
        return 1;
      }
      iVar1 = FUN_4a0dbda4(uVar11);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x290) = 8;
        FUN_4a0cd7c0(param_1,0xb60,0xb58);
        FUN_4a1161d0(param_1,9);
        return 1;
      }
      if (*(char *)(param_1 + 0x6f1) == '\0') {
        iVar1 = FUN_4a0dd630(uVar11);
        if (iVar1 == 0) {
          iVar1 = FUN_4a0dd584(uVar11);
          if (iVar1 == -1) {
            if (*(char *)(param_1 + 0x6f2) != '\0') {
              *(undefined1 *)(param_1 + 0x6f2) = 0;
              iVar1 = FUN_4a141a98(uVar11);
              if (iVar1 != -1) {
                if (((((iVar1 == 7 || iVar1 == 1) || iVar1 == 0x1e) || iVar1 == 0x1b) ||
                    iVar1 == 0x1d) || iVar1 == 0x1a) {
                  FUN_4a11a440(param_1,0x1e);
                }
                FUN_4a0ff3f8(*(undefined4 *)(param_1 + 0x20),400);
                iVar1 = FUN_4a14155c(*(undefined4 *)(param_1 + 0x24));
                if (iVar1 == 0) {
                  FUN_4a0ce9a4(param_1,0xa48);
                }
                else {
                  FUN_4a0ce964(param_1,0xa47);
                }
                FUN_4a1161d0(param_1,0xe);
                return 1;
              }
            }
            if ((*(int *)(param_1 + 0x214) < 0) &&
               (iVar1 = FUN_4a145d3c(*(undefined4 *)(param_1 + 0x20),0x18), iVar1 == 0)) {
              FUN_4a11a440(param_1,0x18);
            }
            else {
              iVar1 = FUN_4a13fa14(*(undefined4 *)(param_1 + 0x24),0);
              if ((iVar1 != -1) ||
                 ((iVar1 = FUN_4a145d3c(*(undefined4 *)(param_1 + 0x20),0x17), iVar1 != 0 ||
                  (iVar1 = FUN_4a13fb90(*(undefined4 *)(param_1 + 0x24)), iVar1 < 0x7bd)))) {
                return 0;
              }
              FUN_4a11a440(param_1,0x17);
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x290) = 0;
            FUN_4a0cd7c0(param_1,iVar1,0xb43);
            FUN_4a1161d0(param_1,9);
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x290) = 0;
          FUN_4a0cd7c0(param_1,0xb53);
          FUN_4a1161d0(param_1,9);
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x6f1) = 0;
        FUN_4a0fb7a0(*(undefined4 *)(param_1 + 0x20));
        *(undefined4 *)(param_1 + 0x290) = 0;
        FUN_4a0cd7c0(param_1,0xb52);
        FUN_4a1161d0(param_1,9);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x7d8) = 0;
      FUN_4a1161d0(param_1,0x12);
      FUN_4a11bed4(param_1,3);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x6f3) = 0;
    if (*(char *)(param_1 + 0x632) != '\0') {
      *(undefined1 *)(param_1 + 0x632) = 0;
      *(undefined1 *)(param_1 + 0x633) = 0;
      *(undefined2 *)(param_1 + 0x634) = 0xffff;
      *(undefined4 *)(param_1 + 0x674) = 0;
      *(undefined4 *)(param_1 + 0x2b4) = 0;
      FUN_4a115d8c(param_1,0);
    }
    FUN_4a0ccc48(param_1,*(undefined4 *)(param_1 + 0x6f8),*(undefined4 *)(param_1 + 0x6f4));
    *(undefined1 *)(param_1 + 0x210) = 1;
    FUN_4a0d58d0(*(undefined4 *)(param_1 + 0x24));
  }
  return 1;
}



// Address: 4a12122c

void FUN_4a12122c(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x94c)) {
    do {
      if (*(int *)(param_1 + 0x950) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0x950) + 8);
      }
      FUN_4a0f1b30(*(undefined4 *)(param_1 + 0x28),
                   *(undefined4 *)(*(int *)(iVar1 + iVar3 * 4) + 0x28));
      if (*(int *)(param_1 + 0x950) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0x950) + 8);
      }
      piVar2 = *(int **)(iVar1 + iVar3 * 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x94c));
  }
  if (*(int **)(param_1 + 0x96c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x96c) + 4))();
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x960)) {
    do {
      if (*(int *)(param_1 + 0x964) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0x964) + 8);
      }
      piVar2 = *(int **)(iVar1 + iVar3 * 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x960));
  }
  FUN_4a0cb1ec(*(undefined4 *)(param_1 + 0x940));
  if (*(int **)(param_1 + 0x940) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x940) + 4))();
  }
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 0x40c) + 0x28) =
       *(undefined4 *)(param_1 + 0x8d8);
  return;
}



// Address: 4a121cf0

void FUN_4a121cf0(int param_1,int *param_2)

{
  short sVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  int local_94;
  int local_90;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int iStack_2c;
  int *local_28;
  
  puVar2 = PTR_DAT_4a122608;
  iStack_2c = param_1;
  local_28 = param_2;
  FUN_4a0bbb28(*(undefined4 *)PTR_DAT_4a122608);
  iVar10 = *(int *)(param_1 + 0x20);
  local_48 = iVar10 + 0x278;
  local_4c = iVar10 + 0x128;
  uVar3 = *(uint *)(param_1 + 0xa10);
  bVar14 = uVar3 == 0;
  if (bVar14) {
    uVar3 = (uint)*(byte *)(param_1 + 0x210);
  }
  local_50 = (uint)(bVar14 && uVar3 == 0);
  FUN_4a13ca78(iVar10);
  FUN_4a13caa0(iVar10);
  uVar11 = *(undefined4 *)puVar2;
  local_90 = FUN_4a0bc200(uVar11);
  local_94 = FUN_4a0bc1f8(uVar11);
  if (local_90 < local_94) {
    piVar5 = &local_94;
  }
  else {
    piVar5 = &local_90;
  }
  iVar10 = FUN_4a0bbd68(*(undefined4 *)puVar2,*piVar5 + -0x122,2);
  iVar4 = FUN_4a0bc1f8(*(undefined4 *)puVar2);
  if ((iVar4 == 400) || (iVar4 = FUN_4a0bc1f8(*(undefined4 *)puVar2), iVar4 == 0x140)) {
    iVar10 = 0x78;
  }
  uVar11 = *(undefined4 *)puVar2;
  local_90 = FUN_4a0bc200(uVar11);
  local_94 = FUN_4a0bc1f8(uVar11);
  puVar2 = PTR_DAT_4a122608;
  if (local_94 < local_90) {
    piVar5 = &local_94;
  }
  else {
    piVar5 = &local_90;
  }
  iVar12 = *piVar5;
  iVar4 = FUN_4a0bbcf0(*(undefined4 *)PTR_DAT_4a122608,0x140);
  iVar6 = FUN_4a0bbe00(*(undefined4 *)puVar2,iVar12 - iVar4 >> 1,2);
  uVar11 = FUN_4a171fac();
  uVar7 = FUN_4a171fac(iVar10);
  local_94 = 0x43a00000;
  local_90 = 0x3f800000;
  FUN_4a09ff60(local_4c,0x141,0x142,0x143,0x144,0x145,0x146,0x147,0x148,0x149,uVar7,uVar11,
               0x43a50000);
  local_54 = iVar6 + 0xe;
  uVar11 = FUN_4a171fac();
  local_30 = FUN_4a171fac(iVar10 + 0x2d);
  local_90 = 0x3f800000;
  local_94 = 0x434e0000;
  FUN_4a09ff60(local_4c,0x14b,0x14c,0x14d,0x14e,0x14f,0x150,0x151,0x152,0x153,local_30,uVar11,
               0x436d0000);
  iVar4 = FUN_4a06be4c(local_48,3);
  iVar12 = local_54;
  iVar4 = iVar4 + 0x1e;
  iVar13 = local_54 + 0xd1;
  local_58 = iVar10 + 0xca;
  local_34 = FUN_4a171fac(iVar4);
  uVar11 = FUN_4a171fac(iVar13);
  local_94 = local_34;
  local_90 = 0x3f800000;
  FUN_4a09ff60(local_4c,0x14b,0x14c,0x14d,0x14e,0x14f,0x150,0x151,0x152,0x153,local_30,uVar11,
               0x43310000);
  local_5c = iVar13 + (iVar4 >> 1);
  local_60 = FUN_4a0cb6c4(param_1,0x20);
  local_38 = FUN_4a171fac(local_5c);
  uVar11 = FUN_4a171fac(iVar10 + 0xfa);
  FUN_4a09f664(local_4c,0x14a,uVar11,local_38,0x3f800000,0x3f800000,0x3f800000,0);
  FUN_4a0fa6e8(local_60,local_4c,iVar10 + 0xfa,local_5c,local_50);
  iVar8 = FUN_4a06be4c(local_48,3);
  iVar4 = iVar13 + iVar4 + 3;
  *(int *)(param_1 + 0xa04) = iVar10 + 0x99;
  *(int *)(param_1 + 0xa08) = iVar4 + (iVar8 + 0x14 >> 1);
  *(undefined4 *)(param_1 + 0xa0c) = 100;
  local_3c = FUN_4a171fac();
  uVar11 = FUN_4a171fac(iVar4);
  uVar7 = FUN_4a171fac(iVar10 + 0x85);
  local_94 = local_3c;
  local_90 = 0x3f800000;
  FUN_4a09ff60(local_4c,0x14b,0x14c,0x14d,0x14e,0x14f,0x150,0x151,0x152,0x153,uVar7,uVar11,
               0x43140000);
  local_64 = FUN_4a0bbd68(*(undefined4 *)puVar2,0x20,2);
  local_6c = FUN_4a0bbe00(*(undefined4 *)puVar2,0x20,2);
  iVar4 = local_64;
  iVar8 = local_64 + 0x58;
  local_68 = local_6c;
  (**(code **)(*local_28 + 0xa0))(local_28,DAT_4a12260c);
  (**(code **)(*local_28 + 0x58))(local_28,iVar4 + 3,local_6c + -0x1b,0xd2,0x37);
  local_40 = FUN_4a171fac(local_6c);
  uVar11 = FUN_4a171fac(iVar8);
  FUN_4a0a02bc(local_4c,0x16d,0x16d,0x16e,uVar11,local_40,0x433e0000,0x3f800000,0x3f800000,0,0);
  local_70 = FUN_4a0cb6c4(param_1,0x80000);
  uVar11 = FUN_4a171fac(local_64);
  FUN_4a09f664(local_4c,0x14a,uVar11,local_40,0x3f800000,0x3f800000,0x3f800000,0);
  FUN_4a0fa6e8(local_70,local_4c,local_64,local_68,local_50);
  FUN_4a11a2bc(param_1,local_28,1);
  FUN_4a0bbb28(*(undefined4 *)puVar2);
  iVar4 = FUN_4a143ac8(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0xa5c));
  FUN_4a06b074(local_48,local_28,*(undefined4 *)(iVar4 + 0xc),3,iVar8,local_6c,0x12);
  FUN_4a09f3a4(local_4c,local_28);
  iVar4 = FUN_4a06be4c(local_48,3);
  iVar8 = iVar4 * 3 + 6;
  local_74 = (iVar6 - iVar8) + 0xdc;
  local_78 = iVar10 + 0x4b;
  local_7c = iVar10 + 0xfc;
  local_80 = FUN_4a0cf540(param_1,7);
  FUN_4a0d22c4(local_80,iVar10 + 0x2f,local_54 + 5,0xe9,0xc4 - iVar8,1);
  FUN_4a0d23c4(local_80,local_28);
  FUN_4a0bbb28(*(undefined4 *)PTR_DAT_4a122608);
  FUN_4a06b074(local_48,local_28,0xaf7,3,local_78,local_74,9);
  local_44 = local_74 + iVar4;
  FUN_4a06b074(local_48,local_28,0xaf8,3,local_78,local_44,9);
  iVar8 = local_74 + iVar4 * 2;
  FUN_4a06b074(local_48,local_28,0xafb,3,local_78,iVar8,9);
  uVar11 = FUN_4a14367c(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0xa5c),
                        *(undefined4 *)(local_80 + 0xa4));
  local_84 = FUN_4a140338(*(undefined4 *)(param_1 + 0x24),uVar11);
  iVar4 = FUN_4a143130(*(undefined4 *)(param_1 + 0x28),uVar11);
  local_88 = (int)*(short *)(iVar4 + 0x14);
  iVar4 = FUN_4a143130(*(undefined4 *)(param_1 + 0x28),uVar11);
  sVar1 = *(short *)(iVar4 + 0x16);
  local_8c = FUN_4a06c410(local_48);
  FUN_4a06c86c(local_48,local_88);
  FUN_4a06afd0(local_48,local_28,local_8c,3,local_7c,local_74,0xc);
  local_8c = FUN_4a06c410(local_48);
  FUN_4a06c86c(local_48,(int)sVar1);
  FUN_4a06afd0(local_48,local_28,local_8c,3,local_7c,local_44,0xc);
  uVar11 = FUN_4a06c410(local_48);
  FUN_4a06c378(local_48,local_84);
  FUN_4a06afd0(local_48,local_28,uVar11,3,local_7c,iVar8,0xc);
  FUN_4a06b074(local_48,local_28,0xafa,3,iVar10 + 0x41,iVar12 + 0xe0,9);
  uVar11 = FUN_4a06c410(local_48);
  FUN_4a06c86c(local_48,*(undefined4 *)(param_1 + 0xa44));
  FUN_4a06afd0(local_48,local_28,uVar11,3,local_58,iVar12 + 0xe0,0xc);
  FUN_4a06b074(local_48,local_28,0xafc,3,iVar10 + 0x10a,*(undefined4 *)(param_1 + 0xa08),0x14);
  FUN_4a0bbb28(*(undefined4 *)PTR_DAT_4a122608);
  uVar11 = FUN_4a171fac(iVar6 + 0x120);
  uVar7 = FUN_4a171fac(iVar10 + 0x69);
  FUN_4a09f664(local_4c,0x17a,uVar7,uVar11,0x3f800000,0x3f800000,0x3f800000,0x42b40000);
  FUN_4a09f3a4(local_4c,local_28);
  FUN_4a0bbb28(*(undefined4 *)PTR_DAT_4a122608);
  puVar2 = PTR_DAT_4a122610;
  *(int *)(PTR_DAT_4a122610 + 0x14) = iVar6 + 0x11f;
  *(int *)(puVar2 + 0x18) = iVar10 + 0x44;
  *(int *)(puVar2 + 0x1c) = iVar10 + 0x8f;
  uVar11 = DAT_4a122614;
  if (*(int *)(param_1 + 0xa18) < 200) {
    uVar7 = FUN_4a171fac();
    uVar9 = FUN_4a171fac(iVar10 + 0x44);
    FUN_4a09f664(local_4c,0x78,uVar9,uVar7,0x3f000000,uVar11,uVar11,0);
  }
  if (*(int *)(param_1 + 0xa14) < 200) {
    uVar7 = FUN_4a171fac(*(undefined4 *)(puVar2 + 0x14));
    uVar9 = FUN_4a171fac(*(undefined4 *)(puVar2 + 0x1c));
    FUN_4a09f664(local_4c,0x78,uVar9,uVar7,0x3f000000,uVar11,uVar11,0);
  }
  FUN_4a09f3a4(local_4c,local_28);
  iVar10 = *(int *)PTR_DAT_4a122608;
  *(undefined1 *)(*(int *)PTR_DAT_4a0bbce8 + 0xc) = 0;
  host_glMatrixMode_arm(0x1700);
  FUN_4a150724();
  *(undefined4 *)(iVar10 + 8) = 0x3f800000;
  return;
}



// Address: 4a122618

void FUN_4a122618(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  
  if (*(int *)(param_1 + 0x69c) == 0xe && param_2 == 0xd) {
    FUN_4a0941ec();
    FUN_4a094c64();
  }
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  uVar7 = *(undefined4 *)(param_1 + 0x28);
  switch(param_2) {
  case 0:
    FUN_4a1161d0(param_1,6);
    goto LAB_4a1228a8;
  case 1:
    *(undefined4 *)(param_1 + 0x2b8) = 4;
    if ((*(int *)(param_1 + 0x2b4) == 0) ||
       (iVar3 = FUN_4a146b58(*(int *)(param_1 + 0x2b4),4), iVar3 == 0)) {
      *(undefined4 *)(param_1 + 0x2b4) = 0;
      FUN_4a115d8c(param_1,0);
    }
    goto LAB_4a1228a8;
  case 2:
    iVar3 = *(int *)(param_1 + 0x69c);
    if ((((iVar3 == 7 || iVar3 == 3) || iVar3 == 8) || iVar3 == 4) || iVar3 == 6) break;
    uVar7 = FUN_4a0cf540(param_1,8);
    uVar4 = 0xffffffff;
    goto LAB_4a122a60;
  case 3:
    FUN_4a0cd7c0(param_1,0xb2d);
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x2b4) = 0;
    FUN_4a115d8c(param_1,0);
    *(undefined4 *)(param_1 + 0x2b8) = 8;
    if (*(int *)(param_1 + 0x2b4) != 0) {
      iVar3 = FUN_4a146b58(*(int *)(param_1 + 0x2b4),8);
joined_r0x4a1228f0:
      if (iVar3 != 0) break;
    }
    goto LAB_4a1228f4;
  case 5:
    iVar3 = FUN_4a143ac8(uVar7,*(undefined4 *)(param_1 + 0x6a0));
    FUN_4a0ce964(param_1,0xb30,*(undefined4 *)(iVar3 + 0xc));
    break;
  case 7:
    FUN_4a143ac8(uVar7,*(undefined4 *)(param_1 + 0x6a0));
    goto LAB_4a122ac0;
  case 8:
    iVar3 = FUN_4a143ac8(uVar7,*(undefined4 *)(param_1 + 0x6a0));
    FUN_4a0cd7c0(param_1,0xb2f,*(undefined4 *)(iVar3 + 0xc));
    break;
  case 9:
    uVar7 = FUN_4a1460f8(*(undefined4 *)(param_1 + 0x6a4));
    FUN_4a0ce964(param_1,0xb31,uVar7);
    break;
  case 10:
    FUN_4a0ce964(param_1,0xb44);
    break;
  case 0xb:
    FUN_4a0ce9a4(param_1,0xb45);
    break;
  case 0xc:
    *(undefined4 *)(param_1 + 0x6a0) = *(undefined4 *)(*(int *)(param_1 + 0x6a4) + 0x28);
    FUN_4a106a9c(*(int *)(param_1 + 0x6a4),0);
    FUN_4a108d64(*(undefined4 *)(param_1 + 0x6a4));
    FUN_4a0f21b4(uVar7,*(undefined4 *)(param_1 + 0x6a0),0);
    *(undefined4 *)(param_1 + 0x2b8) = 8;
    if ((*(int *)(param_1 + 0x2b4) != 0) &&
       (iVar3 = FUN_4a146b58(*(int *)(param_1 + 0x2b4),8), iVar3 != 0)) break;
LAB_4a1228a8:
    *(undefined4 *)(param_1 + 0x2b4) = 0;
    FUN_4a115d8c(param_1,0);
    break;
  case 0xe:
    if (*(int *)(param_1 + 0x69c) != 2) {
      uVar7 = thunk_FUN_4a161570(0x14);
      uVar7 = FUN_4a0c707c(uVar7,s_build_mode_4a122a44);
      uVar4 = FUN_4a0941ec();
      FUN_4a094aa4(uVar4,uVar7);
    }
    break;
  case 0xf:
    *(undefined4 *)(param_1 + 0x2b4) = 0;
    FUN_4a115d8c(param_1,0);
    *(undefined4 *)(param_1 + 0x2b8) = 0;
    if (*(int *)(param_1 + 0x2b4) != 0) {
      iVar3 = FUN_4a146b58(*(int *)(param_1 + 0x2b4),0);
      goto joined_r0x4a1228f0;
    }
LAB_4a1228f4:
    *(undefined4 *)(param_1 + 0x2b4) = 0;
    FUN_4a115d8c(param_1,0);
    break;
  case 0x10:
  case 0x11:
    iVar2 = FUN_4a0f7058(uVar7,*(undefined4 *)(param_1 + 0x6a8));
    iVar6 = *(int *)(iVar2 + 0x14);
    iVar3 = *(int *)(iVar2 + 0x1c);
    FUN_4a1457cc(uVar7,*(int *)(iVar2 + 0x10) + (*(int *)(iVar2 + 0x18) >> 1));
    uVar4 = FUN_4a171fac();
    puVar1 = PTR_DAT_4a122a50;
    uVar4 = FUN_4a17211c(uVar4,*(undefined4 *)PTR_DAT_4a122a50);
    FUN_4a1457d8(uVar7,iVar6 + (iVar3 >> 1));
    uVar7 = FUN_4a171fac();
    uVar7 = FUN_4a17211c(uVar7,*(undefined4 *)puVar1);
    iVar3 = *(int *)(iVar2 + 0x18);
    if (*(int *)(iVar2 + 0x18) <= *(int *)(iVar2 + 0x1c)) {
      iVar3 = *(int *)(iVar2 + 0x1c);
    }
    uVar5 = FUN_4a171fac(iVar3);
    uVar5 = FUN_4a17211c(uVar5,0x41f00000);
    uVar5 = FUN_4a171a94(uVar5,0x43960000);
    uVar5 = FUN_4a0d4b38(uVar5,0x43480000,0x443b8000);
    *(undefined4 *)(param_1 + 0x2c0) = uVar4;
    iVar3 = *(int *)(param_1 + 0x28);
    uVar4 = *(undefined4 *)(iVar3 + 0x474);
    *(undefined4 *)(param_1 + 0x2d4) = uVar5;
    *(undefined4 *)(param_1 + 0x2c4) = uVar4;
    *(undefined4 *)(param_1 + 0x2c8) = uVar7;
    *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(iVar3 + 0x484);
    *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(iVar3 + 0x488);
    *(undefined4 *)(param_1 + 0x2f4) = 0;
    *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(iVar3 + 0x470);
    *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(iVar3 + 0x474);
    *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(iVar3 + 0x478);
    *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(iVar3 + 0x48c);
    *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(iVar3 + 0x484);
    *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(iVar3 + 0x488);
    FUN_4a11e2a0(param_1,4);
    if (param_2 == 0x10) {
      uVar7 = 10;
    }
    else {
      uVar7 = 0xb;
    }
    uVar7 = FUN_4a0cf540(param_1,uVar7);
    if (param_2 == 0x10) {
      uVar4 = FUN_4a0f590c();
    }
    else {
      uVar4 = FUN_4a0f49cc(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x6ac));
    }
LAB_4a122a60:
    FUN_4a0d297c(uVar7,uVar4);
    break;
  case 0x12:
    FUN_4a115d8c(param_1,*(undefined4 *)(param_1 + 0x6a4));
    break;
  case 0x13:
    FUN_4a0ce964(param_1,0xc22);
    break;
  case 0x14:
    FUN_4a0ce964(param_1,0xc4b);
    break;
  case 0x15:
  case 0x16:
LAB_4a122ac0:
    FUN_4a0cd7c0(param_1,0xb2e);
  }
  *(int *)(param_1 + 0x69c) = param_2;
  return;
}



// Address: 4a122adc

int FUN_4a122adc(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 in_lr;
  
  uVar4 = 0x82e;
  *(undefined4 *)(param_1 + 0x694) = param_2;
  switch(param_2) {
  case 0:
    iVar2 = *(int *)(param_1 + 0x698);
    *(undefined1 *)(iVar2 + 0x31) = 1;
    uVar4 = *(undefined4 *)(param_1 + 0x688);
    piVar5 = *(int **)(param_1 + 0x68c);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
    }
    (**(code **)(*(int *)(iVar2 + 0x44) + 0x1c))((int *)(iVar2 + 0x44));
    *(undefined4 *)(iVar2 + 0x4c) = uVar4;
    *(int **)(iVar2 + 0x50) = piVar5;
    if (*(int *)(param_1 + 0x68c) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x68c) + 8);
    }
    *(undefined4 *)(iVar1 + 8) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    iVar1 = FUN_4a134aa8(iVar2);
    if (*(int *)(iVar1 + 0x40) == iVar2) {
      *(undefined4 *)(iVar1 + 0x40) = 0;
    }
    return iVar1;
  case 1:
    uVar3 = 0x830;
    break;
  case 2:
    uVar3 = 0x832;
    break;
  case 3:
    FUN_4a0ff4a4(param_1,param_2,0x82e);
    thunk_FUN_4a0c6b08();
    return *(int *)(*(int *)(param_1 + 0x20) + 0x264);
  case 4:
    uVar4 = 0xcd9;
    uVar3 = 0xcda;
    break;
  case 5:
    uVar4 = 0xcd1;
    uVar3 = 0xcd0;
    break;
  default:
    return param_1;
  }
  iVar2 = FUN_4a089eb4(*(undefined4 *)(param_1 + 0x168),uVar3,uVar4,0x40,0x20,in_lr);
  return iVar2;
}



// Address: 4a122b9c

void FUN_4a122b9c(int param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_4a13ca78(*(undefined4 *)(param_1 + 0x20));
  puVar1 = PTR_DAT_4a122cf4;
  uVar3 = FUN_4a0bbd68(*(undefined4 *)PTR_DAT_4a122cf4,iVar2 + -0x46,2);
  *(undefined4 *)(param_1 + 0x25c) = uVar3;
  iVar2 = FUN_4a13caa0(*(undefined4 *)(param_1 + 0x20));
  uVar3 = FUN_4a0bbe00(*(undefined4 *)puVar1,iVar2 + -0x55,2);
  *(undefined4 *)(param_1 + 0x260) = uVar3;
  *(undefined4 *)(param_1 + 0x264) = 0x1e;
  iVar2 = FUN_4a13ca78(*(undefined4 *)(param_1 + 0x20));
  uVar3 = FUN_4a0bbd68(*(undefined4 *)puVar1,iVar2 + -0x46,2);
  *(undefined4 *)(param_1 + 0x268) = uVar3;
  iVar2 = FUN_4a13caa0(*(undefined4 *)(param_1 + 0x20));
  uVar3 = FUN_4a0bbe00(*(undefined4 *)puVar1,iVar2 + -0x7d,2);
  *(undefined4 *)(param_1 + 0x26c) = uVar3;
  *(undefined4 *)(param_1 + 0x270) = 0x1e;
  if (*(char *)(param_1 + 0x276) == '\0') {
    (**(code **)(*param_2 + 0x34))
              (param_2,*(undefined4 *)(param_1 + 0x280),*(undefined4 *)(param_1 + 0x25c),
               *(undefined4 *)(param_1 + 0x260));
  }
  else {
    (**(code **)(*param_2 + 0x34))(param_2,*(undefined4 *)(param_1 + 0x27c));
  }
  iVar2 = 0;
  if (*(int *)PTR_DAT_4a122cf8 != 0) {
    iVar2 = *(int *)PTR_DAT_4a122cfc;
  }
  if (*(int *)PTR_DAT_4a122cf8 != 0 && iVar2 != 0) {
    if (*(char *)(param_1 + 0x277) == '\0') {
      (**(code **)(*param_2 + 0x34))
                (param_2,*(undefined4 *)(param_1 + 0x28c),*(undefined4 *)(param_1 + 0x268),
                 *(undefined4 *)(param_1 + 0x26c));
      return;
    }
    (**(code **)(*param_2 + 0x34))(param_2,*(undefined4 *)(param_1 + 0x288));
    return;
  }
  return;
}



// Address: 4a122d00

int FUN_4a122d00(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auStack_34 [8];
  int local_2c;
  int local_28;
  
  uVar6 = *(undefined4 *)(param_1 + 0x28);
  FUN_4a10ca70(auStack_34,param_1);
  iVar5 = 0;
  if (0 < local_2c) {
    do {
      if (local_28 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(local_28 + 8);
      }
      iVar4 = *(int *)(iVar1 + iVar5 * 4);
      iVar1 = FUN_4a146b58(iVar4,0x80000);
      if (iVar1 != 0) {
        iVar2 = FUN_4a144cb0(uVar6,*(undefined4 *)(iVar4 + 0x44));
        iVar3 = FUN_4a144cb8(uVar6,*(undefined4 *)(iVar4 + 0x4c));
        bVar9 = SBORROW4(param_2,iVar2);
        iVar1 = param_2 - iVar2;
        bVar8 = param_2 == iVar2;
        if (param_2 <= iVar2) {
          bVar9 = SBORROW4(param_3,iVar3);
          iVar1 = param_3 - iVar3;
          bVar8 = param_3 == iVar3;
        }
        bVar7 = iVar1 < 0;
        if (bVar8 || bVar7 != bVar9) {
          iVar2 = iVar2 - *(char *)(iVar4 + 0x54);
          bVar9 = SBORROW4(iVar2,param_2);
          bVar7 = iVar2 - param_2 < 0;
        }
        if (bVar7 != bVar9) {
          iVar3 = iVar3 - *(char *)(iVar4 + 0x55);
          bVar9 = SBORROW4(iVar3,param_3);
          bVar7 = iVar3 - param_3 < 0;
        }
        if (bVar7 != bVar9) {
          FUN_4a16a5f4(auStack_34);
          return iVar4;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_2c);
  }
  FUN_4a16a5f4(auStack_34);
  return 0;
}



// Address: 4a122ddc

/* WARNING: Removing unreachable block (ram,0x4a11e2dc) */
/* WARNING: Removing unreachable block (ram,0x4a11e4fc) */
/* WARNING: Removing unreachable block (ram,0x4a11e500) */
/* WARNING: Removing unreachable block (ram,0x4a11e504) */
/* WARNING: Removing unreachable block (ram,0x4a11e508) */
/* WARNING: Removing unreachable block (ram,0x4a11e50c) */
/* WARNING: Removing unreachable block (ram,0x4a084b60) */
/* WARNING: Removing unreachable block (ram,0x4a084b74) */
/* WARNING: Removing unreachable block (ram,0x4a084b7c) */
/* WARNING: Removing unreachable block (ram,0x4a084b80) */
/* WARNING: Removing unreachable block (ram,0x4a084b84) */
/* WARNING: Removing unreachable block (ram,0x4a084b98) */
/* WARNING: Removing unreachable block (ram,0x4a084ba4) */
/* WARNING: Removing unreachable block (ram,0x4a084ba8) */
/* WARNING: Removing unreachable block (ram,0x4a084bb0) */
/* WARNING: Removing unreachable block (ram,0x4a084bb4) */
/* WARNING: Removing unreachable block (ram,0x4a084bb8) */
/* WARNING: Removing unreachable block (ram,0x4a084bcc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_4a122ddc(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  undefined4 uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar28;
  bool bVar29;
  undefined1 uVar30;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  uint uStack_3c;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int local_24;
  int local_20;
  int iStack_1c;
  int iStack_4;
  
  iVar4 = FUN_4a0cb850(param_2,param_3,0x80000);
  puVar2 = PTR_DAT_4a11a2a8;
  puVar1 = PTR_DAT_4a11a2a4;
  iVar20 = 0;
  if (iVar4 == 0) {
    if (*(uint *)(param_1 + 0x40) != 0) {
      return *(uint *)(param_1 + 0x40);
    }
    if (param_2 != 3 && param_2 != 7) {
      uVar6 = *(uint *)(param_1 + 700);
      if ((uVar6 == 2 || uVar6 == 3) || uVar6 == 4) {
        return uVar6;
      }
      switch(param_2) {
      case 0:
        iVar4 = 0;
        if (*(int *)(param_3 + 0xc) != 0) {
          iVar4 = *(int *)(*(int *)(param_3 + 0xc) + 8);
        }
        (&iStack_50)[7] = *(int *)(iVar4 + 4);
        iVar4 = 0;
        if (*(int *)(param_3 + 0xc) != 0) {
          iVar4 = *(int *)(*(int *)(param_3 + 0xc) + 8);
        }
        (&iStack_50)[6] = *(int *)(iVar4 + 8);
        if (*(int *)(param_1 + 0x1c0) != 7) {
          FUN_4a0bbe98(*(undefined4 *)PTR_DAT_4a1253bc,&iStack_50 + 7,&iStack_50 + 6);
        }
        puVar1 = PTR_DAT_4a1253bc;
        iVar4 = FUN_4a0bbcf0(*(undefined4 *)PTR_DAT_4a1253bc,10);
        iVar7 = *(int *)(param_1 + 0x238);
        iVar20 = FUN_4a0bbcf0(*(undefined4 *)puVar1,10);
        iVar5 = *(int *)(param_1 + 0x230);
        iStack_50 = *(undefined4 *)(param_1 + 0x234);
        (&iStack_50)[1] = iVar4 + 0xf + iVar7;
        uVar6 = FUN_4a134a60((&iStack_50)[7],(&iStack_50)[6],*(undefined4 *)(param_1 + 0x22c),
                             iVar5 - iVar20);
        if (uVar6 == 0) {
          *(undefined1 *)(param_1 + 0x274) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x274) = 1;
        }
        *(undefined1 *)(param_1 + 0xa6c) = 1;
      default:
        return uVar6;
      case 2:
        *(undefined1 *)(param_1 + 0xa6c) = 0;
        return 0;
      case 3:
      case 7:
        if (uVar6 != 1) {
          if (uVar6 != 5) {
            return uVar6;
          }
          goto code_r0x4a11e2a0;
        }
        break;
      case 4:
        if (uVar6 != 1) {
          if (uVar6 != 5) {
            return uVar6;
          }
          goto code_r0x4a11e2a0;
        }
        break;
      case 5:
        if (*(char *)(param_1 + 0x274) != '\0') {
          (&iStack_50)[0x13] = (&iStack_50)[0x13];
          (&iStack_50)[0x12] = (&iStack_50)[0xf];
          (&iStack_50)[0x11] = (&iStack_50)[0xe];
          (&iStack_50)[0x10] = (&iStack_50)[0xd];
          (&iStack_50)[0xf] = (&iStack_50)[0xc];
          (&iStack_50)[0xe] = (&iStack_50)[0xb];
          if (*(int *)(param_3 + 0xc) == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)(*(int *)(param_3 + 0xc) + 8);
          }
          (&iStack_50)[0xd] = *(int *)(iVar4 + 0x18);
          (&iStack_50)[0xc] = 0;
          bVar29 = *(char *)(param_1 + 0x277) != '\0';
          iVar4 = 0;
          if (bVar29) {
            iVar4 = *(int *)PTR_DAT_4a11a2a4;
          }
          bVar28 = iVar4 != 0;
          if (bVar29 && bVar28) {
            iVar4 = *(int *)PTR_DAT_4a11a2a8;
          }
          uVar30 = 1;
          if ((bVar29 && bVar28) && iVar4 != 0) {
            uVar22 = FUN_4a171fac((&iStack_50)[0xd] + -0x32);
            uVar22 = FUN_4a17211c(uVar22,0x41f00000);
            FUN_4a17211c(uVar22,DAT_4a11a2ac);
            uVar6 = FUN_4a171e1c();
            puVar3 = PTR_DAT_4a11a2b0;
            uVar30 = true;
            *(uint *)PTR_DAT_4a11a2b0 = uVar6;
            if ((int)uVar6 < 0) {
              *(undefined4 *)puVar3 = 0;
            }
            else {
              uVar30 = 0x1d < uVar6;
              if (0x1e < (int)uVar6) {
                *(undefined4 *)puVar3 = 0x1e;
              }
            }
            iVar4 = 0x1e - (*(uint *)puVar3 & 0xfffe);
            *(int *)puVar3 = iVar4;
            FUN_4a041aa0(iVar4,*(undefined4 *)PTR_DAT_4a11a2b4,0xbf800000);
          }
          FUN_4a0bbe98(*(undefined4 *)PTR_DAT_4a11a2b8,&iStack_50 + 0xc,&iStack_50 + 0xd);
          iVar4 = *(int *)(param_1 + 0x23c);
          iVar20 = (&iStack_50)[0xd];
          uVar22 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x240));
          uVar18 = FUN_4a171fac(iVar20 - iVar4);
          uVar22 = FUN_4a171bb8(uVar18,uVar22);
          FUN_4a1720a0(0x3f800000,uVar22);
          if (!(bool)uVar30) {
            uVar22 = 0x3f800000;
          }
          FUN_4a172458(0,uVar22);
          if (!(bool)uVar30) {
            uVar22 = 0;
          }
          bVar29 = *(char *)(param_1 + 0x277) != '\0';
          iVar4 = 0;
          if (bVar29) {
            iVar4 = *(int *)puVar1;
          }
          bVar28 = iVar4 != 0;
          if (bVar29 && bVar28) {
            iVar4 = *(int *)puVar2;
          }
          if ((bVar29 && bVar28) && iVar4 != 0) {
            uVar22 = FUN_4a17211c(uVar22,0x44098000);
            uVar6 = FUN_4a171a94(uVar22,0x43480000);
            *(uint *)(*(int *)(param_1 + 0x28) + 0x490) = uVar6;
            return uVar6;
          }
          if (*(int *)(param_1 + 0x1d8) == 2) {
            iVar4 = 800;
            iVar20 = 0x708;
          }
          else {
            iVar20 = 0x2ee;
            iVar4 = 200;
          }
          uVar18 = FUN_4a171fac(iVar20 - iVar4);
          uVar22 = FUN_4a17211c(uVar18,uVar22);
          uVar18 = FUN_4a171fac(iVar4);
          uVar22 = FUN_4a171a94(uVar18,uVar22);
          *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x48c) = uVar22;
          uVar6 = *(uint *)(param_1 + 0xa68) | 4;
          *(uint *)(param_1 + 0xa68) = uVar6;
          return uVar6;
        }
        if (*(char *)(param_1 + 0x275) != '\0') {
          iVar20 = *(int *)(param_1 + 0x244);
          uVar30 = 1;
          iVar4 = 0;
          if (*(int *)(param_3 + 0xc) != 0) {
            iVar4 = *(int *)(*(int *)(param_3 + 0xc) + 8);
          }
          iVar4 = *(int *)(iVar4 + 0x14);
          uVar22 = FUN_4a171fac(*(undefined4 *)(param_1 + 600));
          uVar18 = FUN_4a171fac((iVar4 - iVar20) + -5);
          uVar22 = FUN_4a171bb8(uVar18,uVar22);
          FUN_4a1720a0(0x3f800000,uVar22);
          if (!(bool)uVar30) {
            uVar22 = 0x3f800000;
          }
          FUN_4a172458(0,uVar22);
          if (!(bool)uVar30) {
            uVar22 = 0;
          }
          uVar22 = FUN_4a17211c(uVar22,0x43b40000);
          *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x488) = uVar22;
          uVar6 = *(uint *)(param_1 + 0xa68) | 2;
          *(uint *)(param_1 + 0xa68) = uVar6;
          return uVar6;
        }
        if (*(char *)(param_1 + 0x276) != '\0') {
          (&iStack_50)[0x13] = (&iStack_50)[0x13];
          (&iStack_50)[0x12] = (&iStack_50)[0xf];
          (&iStack_50)[0x11] = (&iStack_50)[0xe];
          (&iStack_50)[0x10] = (&iStack_50)[0xd];
          (&iStack_50)[0xf] = (&iStack_50)[0xc];
          (&iStack_50)[0xe] = (&iStack_50)[0xb];
          iVar4 = *(int *)(param_3 + 0xc);
          iVar20 = 0;
          bVar29 = iVar4 != 0;
          if (bVar29) {
            iVar7 = *(int *)(iVar4 + 8);
          }
          else {
            iVar7 = 0;
          }
          iVar7 = *(int *)(iVar7 + 4);
          if (bVar29) {
            iVar5 = *(int *)(iVar4 + 8);
          }
          else {
            iVar5 = 0;
          }
          iVar5 = *(int *)(iVar5 + 8);
          if (bVar29) {
            iVar16 = *(int *)(iVar4 + 8);
            iVar20 = *(int *)(iVar4 + 8);
          }
          else {
            iVar16 = 0;
          }
          iVar16 = *(int *)(iVar16 + 0x14);
          iVar4 = *(int *)(iVar20 + 0x18);
          FUN_4a13ca78(*(undefined4 *)(param_1 + 0x20));
          uVar22 = FUN_4a171fac();
          uVar18 = FUN_4a171fac(iVar16 - iVar7);
          uVar6 = FUN_4a171bb8(uVar18,uVar22);
          FUN_4a13caa0(*(undefined4 *)(param_1 + 0x20));
          uVar22 = FUN_4a171fac();
          uVar18 = FUN_4a171fac(iVar4 - iVar5);
          uVar22 = FUN_4a171bb8(uVar18,uVar22);
          uVar18 = FUN_4a17211c(uVar6 ^ 0x80000000,0x43b40000);
          iVar4 = *(int *)(param_1 + 0x28);
          uVar6 = FUN_4a171a94(*(undefined4 *)(iVar4 + 0x488),uVar18);
          if (uVar6 < 0x80000001) {
            if (0x43b40000 < (int)uVar6) {
              uVar6 = FUN_4a1725c0(uVar6,0x43b40000);
            }
          }
          else {
            uVar6 = FUN_4a1725c0(0x43b40000,uVar6);
          }
          uVar22 = FUN_4a17211c(uVar22,0x42700000);
          iVar7 = FUN_4a171a94(*(undefined4 *)(iVar4 + 0x484),uVar22);
          iVar20 = 0x41700000;
          if ((iVar7 < 0x41700000) || (iVar20 = 0x42960000, 0x42960000 < iVar7)) {
            iVar7 = iVar20;
          }
          *(uint *)(iVar4 + 0x488) = uVar6;
          *(int *)(*(int *)(param_1 + 0x28) + 0x484) = iVar7;
          uVar6 = *(uint *)(param_1 + 0xa68) | 2;
          *(uint *)(param_1 + 0xa68) = uVar6;
          return uVar6;
        }
        if (uVar6 == 1) {
          *(undefined4 *)(param_1 + 0x2f4) = 0;
LAB_4a124b80:
          FUN_4a11e2a0(param_1,0);
        }
        else if (uVar6 == 5) goto LAB_4a124b80;
        *(undefined1 *)(param_1 + 0x2d8) = 1;
        *(undefined4 *)(param_1 + 0x2f8) = 0;
        *(undefined4 *)(param_1 + 0x2fc) = 0;
        *(undefined4 *)(param_1 + 0x304) = 0;
        *(undefined4 *)(param_1 + 0x300) = 0;
        *(undefined4 *)(param_1 + 0x308) = 0;
        *(undefined4 *)(param_1 + 0x30c) = 0;
        uVar22 = DAT_4a1253c0;
        iVar4 = *(int *)(param_3 + 0xc);
        iVar20 = *(int *)(param_1 + 0x28);
        bVar29 = iVar4 != 0;
        if (bVar29) {
          iVar7 = *(int *)(iVar4 + 8);
        }
        else {
          iVar7 = 0;
        }
        uVar18 = *(undefined4 *)(iVar7 + 0x24);
        if (bVar29) {
          iVar7 = *(int *)(iVar4 + 8);
        }
        else {
          iVar7 = 0;
        }
        iVar7 = *(int *)(iVar7 + 4);
        if (bVar29) {
          iVar5 = *(int *)(iVar4 + 8);
        }
        else {
          iVar5 = 0;
        }
        iVar16 = *(int *)(iVar5 + 8);
        if (bVar29) {
          iVar5 = *(int *)(iVar4 + 8);
          iVar4 = *(int *)(iVar4 + 8);
        }
        else {
          iVar4 = 0;
        }
        iVar4 = *(int *)(iVar4 + 0x18);
        if (!bVar29) {
          iVar5 = 0;
        }
        iVar5 = *(int *)(iVar5 + 0x14);
        bVar29 = *(int *)(param_1 + 0x1d8) != 2;
        uVar23 = *(undefined4 *)(iVar20 + 0x48c);
        if (bVar29) {
          iVar8 = 0x3f000000;
        }
        else {
          iVar8 = 0x3fc00000;
        }
        (&iStack_50)[7] = iVar8;
        if (bVar29) {
          uVar9 = 200;
        }
        else {
          uVar9 = 800;
        }
        uVar9 = FUN_4a171fac(uVar9);
        uVar23 = FUN_4a1724e0(uVar9,uVar23);
        uVar22 = FUN_4a17211c(uVar23,uVar22);
        uVar22 = FUN_4a171a94(uVar22,(&iStack_50)[7]);
        uVar23 = FUN_4a171fac(-(iVar5 - iVar7));
        uVar23 = FUN_4a17211c(uVar23,uVar22);
        uVar9 = FUN_4a171fac(-(iVar4 - iVar16));
        uVar22 = FUN_4a17211c(uVar9,uVar22);
        uVar9 = FUN_4a0d4978(*(undefined4 *)(iVar20 + 0x488));
        uVar10 = FUN_4a002d64();
        uVar9 = FUN_4a002f08(uVar9);
        uVar11 = FUN_4a17211c(uVar9,uVar22);
        uVar12 = FUN_4a17211c(uVar10,uVar23);
        uVar11 = FUN_4a171a94(uVar12,uVar11);
        uVar23 = FUN_4a17211c(uVar9,uVar23);
        uVar22 = FUN_4a17211c(uVar10,uVar22);
        uVar22 = FUN_4a1725c0(uVar22,uVar23);
        *(undefined4 *)(param_1 + 0x304) = 0;
        *(undefined4 *)(param_1 + 0x300) = 0;
        *(undefined4 *)(param_1 + 0x308) = 0;
        puVar14 = (undefined4 *)FUN_4a0f6708(*(undefined4 *)(param_1 + 0x28),uVar11,uVar22);
        uVar23 = *puVar14;
        uVar9 = puVar14[1];
        uVar22 = FUN_4a171fac(uVar18);
        uVar18 = FUN_4a171bb8(uVar23,uVar22);
        *(undefined4 *)(param_1 + 0x2f8) = uVar18;
        uVar22 = FUN_4a171bb8(uVar9,uVar22);
        *(undefined4 *)(param_1 + 0x2fc) = uVar22;
        *(undefined4 *)(param_1 + 0x30c) = 700;
        iVar4 = *(int *)(param_1 + 0x28);
        uVar18 = *(undefined4 *)(iVar4 + 0x478);
        uVar22 = FUN_4a171a94(*(undefined4 *)(iVar4 + 0x470),uVar23);
        *(undefined4 *)(iVar4 + 0x470) = uVar22;
        iVar4 = *(int *)(param_1 + 0x28);
        uVar22 = FUN_4a171a94(uVar18,uVar9);
        *(undefined4 *)(iVar4 + 0x478) = uVar22;
        uVar6 = *(uint *)(param_1 + 0xa68) | 1;
LAB_4a1253ac:
        *(uint *)(param_1 + 0xa68) = uVar6;
        return uVar6;
      case 8:
        if (uVar6 == 1) {
          *(undefined4 *)(param_1 + 0x2f4) = 0;
        }
        else if (uVar6 != 5) goto LAB_4a124d84;
        FUN_4a11e2a0(param_1,0);
LAB_4a124d84:
        *(undefined1 *)(param_1 + 0x2d8) = 1;
        *(undefined4 *)(param_1 + 0x2f8) = 0;
        *(undefined4 *)(param_1 + 0x2fc) = 0;
        *(undefined4 *)(param_1 + 0x304) = 0;
        *(undefined4 *)(param_1 + 0x300) = 0;
        *(undefined4 *)(param_1 + 0x308) = 0;
        *(undefined4 *)(param_1 + 0x30c) = 0;
        *(undefined4 *)(param_1 + 0x310) = 0;
        return 0;
      case 9:
        if (uVar6 == 1) {
          *(undefined4 *)(param_1 + 0x2f4) = 0;
LAB_4a124de8:
          FUN_4a11e2a0(param_1,0);
        }
        else if (uVar6 == 5) goto LAB_4a124de8;
        iVar4 = *(int *)(param_3 + 0xc);
        bVar29 = iVar4 == 0;
        if (bVar29) {
          iVar20 = 0;
        }
        else {
          iVar20 = *(int *)(iVar4 + 8);
        }
        (&iStack_50)[7] = *(int *)(iVar20 + 0x24);
        if (bVar29) {
          iVar20 = 0;
        }
        else {
          iVar20 = *(int *)(iVar4 + 8);
        }
        uVar6 = *(uint *)(iVar20 + 4);
        if (bVar29) {
          iVar20 = 0;
        }
        else {
          iVar20 = *(int *)(iVar4 + 8);
        }
        uVar19 = *(uint *)(iVar20 + 8);
        if (bVar29) {
          iVar20 = 0;
        }
        else {
          iVar20 = *(int *)(iVar4 + 8);
        }
        uVar21 = *(uint *)(iVar20 + 0x14);
        if (bVar29) {
          iVar20 = 0;
        }
        else {
          iVar20 = *(int *)(iVar4 + 8);
        }
        uVar24 = *(uint *)(iVar20 + 0x18);
        if (bVar29) {
          iVar20 = 0;
        }
        else {
          iVar20 = *(int *)(iVar4 + 8);
        }
        uVar26 = *(uint *)(iVar20 + 0xc);
        if (bVar29) {
          iVar20 = 0;
        }
        else {
          iVar20 = *(int *)(iVar4 + 8);
        }
        uVar25 = *(uint *)(iVar20 + 0x10);
        if (bVar29) {
          iVar20 = 0;
        }
        else {
          iVar20 = *(int *)(iVar4 + 8);
        }
        if (bVar29) {
          iVar4 = 0;
        }
        (&iStack_50)[6] = *(int *)(iVar20 + 0x1c);
        if (!bVar29) {
          iVar4 = *(int *)(iVar4 + 8);
        }
        uVar27 = *(uint *)(iVar4 + 0x20);
        if ((uVar6 == uVar21 && uVar19 == uVar24) || (uVar26 == (&iStack_50)[6] && uVar25 == uVar27)
           ) {
          uVar30 = uVar21 <= uVar6;
          bVar29 = uVar6 == uVar21;
          if (bVar29) {
            uVar30 = uVar24 <= uVar19;
          }
          bVar28 = bVar29 && uVar19 == uVar24;
          if (bVar29 && uVar19 == uVar24) {
            uVar13 = (&iStack_50)[6];
            uVar30 = uVar13 <= uVar26;
            bVar28 = uVar26 == uVar13;
          }
          if (bVar28) {
            uVar30 = uVar27 <= uVar25;
          }
          if (bVar28 && uVar25 == uVar27) goto LAB_4a124fe8;
        }
        else {
          (&iStack_50)[10] = uVar26 - uVar6;
          (&iStack_50)[9] = uVar25 - uVar19;
          iVar4 = FUN_4a171fac((uVar6 - (&iStack_50)[6]) * (uVar25 - uVar19) +
                               (uVar26 - uVar6) * (uVar27 - uVar19));
          (&iStack_50)[5] = iVar4;
          uVar13 = FUN_4a171fac((uVar6 - uVar21) * (&iStack_50)[9] +
                                (&iStack_50)[10] * (uVar24 - uVar19));
          if ((((&iStack_50)[5] < 1) || (uVar30 = 0x7fffffff < uVar13, uVar13 < 0x80000001)) &&
             ((uVar15 = (&iStack_50)[5], uVar30 = 0x7fffffff < uVar15, uVar15 < 0x80000001 ||
              (uVar30 = true, (int)uVar13 < 1)))) {
LAB_4a124fe8:
            *(undefined4 *)(param_1 + 0x304) = 0;
            goto LAB_4a124ff0;
          }
        }
        iVar4 = FUN_4a171fac(uVar26 - uVar6);
        (&iStack_50)[4] = iVar4;
        iVar4 = FUN_4a171fac(uVar25 - uVar19);
        (&iStack_50)[5] = iVar4;
        iVar4 = FUN_4a171fac((&iStack_50)[6] - uVar21);
        (&iStack_50)[2] = iVar4;
        iVar4 = FUN_4a171fac(uVar27 - uVar24);
        (&iStack_50)[3] = iVar4;
        uVar22 = FUN_4a002cf8((&iStack_50)[5],(&iStack_50)[4]);
        iStack_50 = uVar22;
        uVar22 = FUN_4a002cf8((&iStack_50)[3],(&iStack_50)[2]);
        iVar4 = FUN_4a1725c0(uVar22,iStack_50);
        (&iStack_50)[1] = iVar4;
        uVar22 = FUN_4a171bb8(0x43340000,*(undefined4 *)PTR_DAT_4a1253c4);
        iVar4 = FUN_4a17211c(uVar22,(&iStack_50)[1]);
        (&iStack_50)[1] = iVar4;
        uVar22 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x488);
        iStack_50 = *(int *)(param_1 + 0x28);
        uVar22 = FUN_4a171a94(uVar22,(&iStack_50)[1]);
        *(undefined4 *)(iStack_50 + 0x488) = uVar22;
        uVar22 = FUN_4a171fac((&iStack_50)[7]);
        uVar22 = FUN_4a171bb8((&iStack_50)[1],uVar22);
        *(undefined4 *)(param_1 + 0x304) = uVar22;
        uVar22 = FUN_4a0d4b38(uVar22,0xbf000000,0x3f000000);
        *(undefined4 *)(param_1 + 0x304) = uVar22;
        *(uint *)(param_1 + 0xa68) = *(uint *)(param_1 + 0xa68) | 2;
LAB_4a124ff0:
        uVar22 = FUN_4a171fac(uVar19 + uVar25);
        iVar4 = FUN_4a17295c(uVar22,0xffffffff);
        (&iStack_50)[5] = iVar4;
        uVar22 = FUN_4a171fac(uVar24 + uVar27);
        uVar22 = FUN_4a17295c(uVar22,0xffffffff);
        uVar22 = FUN_4a1725c0(uVar22,(&iStack_50)[5]);
        (&iStack_50)[4] = *(int *)(*(int *)(param_1 + 0x28) + 0x484);
        uVar22 = FUN_4a17211c(uVar22,DAT_4a1253c8);
        iVar4 = FUN_4a171a94(uVar22,(&iStack_50)[4]);
        (&iStack_50)[3] = iVar4;
        FUN_4a172458(0x41700000,iVar4);
        if ((bool)uVar30) {
          iVar4 = (&iStack_50)[3];
        }
        else {
          iVar4 = 0x41700000;
        }
        (&iStack_50)[2] = iVar4;
        FUN_4a1720a0(0x42960000,iVar4);
        if ((bool)uVar30) {
          iVar4 = (&iStack_50)[2];
        }
        else {
          iVar4 = 0x42960000;
        }
        (&iStack_50)[3] = iVar4;
        *(int *)(*(int *)(param_1 + 0x28) + 0x484) = iVar4;
        iVar4 = FUN_4a171fac((&iStack_50)[7]);
        (&iStack_50)[8] = iVar4;
        uVar22 = FUN_4a1725c0((&iStack_50)[3],(&iStack_50)[4]);
        uVar22 = FUN_4a17295c(uVar22,0xffffffff);
        uVar22 = FUN_4a171bb8(uVar22,(&iStack_50)[8]);
        *(undefined4 *)(param_1 + 0x300) = uVar22;
        uVar22 = FUN_4a171fac(uVar25 - uVar19);
        uVar18 = FUN_4a171fac(uVar26 - uVar6);
        uVar22 = FUN_4a0d4b88(uVar18,uVar22);
        iVar4 = (&iStack_50)[6];
        uVar18 = FUN_4a171fac(uVar27 - uVar24);
        uVar23 = FUN_4a171fac(iVar4 - uVar21);
        uVar18 = FUN_4a0d4b88(uVar23,uVar18);
        uVar18 = FUN_4a1725c0(uVar22,uVar18);
        uVar22 = DAT_4a1253cc;
        uVar23 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x48c);
        uVar18 = FUN_4a17211c((&iStack_50)[8],uVar18);
        uVar22 = FUN_4a17211c(uVar18,uVar22);
        uVar22 = FUN_4a171a94(uVar22,uVar23);
        uVar6 = *(uint *)(param_1 + 0x1d8);
        if (uVar6 == 2) {
          uVar18 = 0x708;
        }
        else {
          uVar18 = 0x2ee;
        }
        uVar18 = FUN_4a172098(uVar18);
        uVar30 = 1 < uVar6;
        if (uVar6 == 2) {
          uVar23 = 800;
        }
        else {
          uVar23 = 200;
        }
        uVar23 = FUN_4a172098(uVar23);
        FUN_4a172458(uVar23,uVar22);
        if ((bool)uVar30) {
          uVar23 = uVar22;
        }
        FUN_4a1720a0(uVar18,uVar23);
        *(undefined4 *)(param_1 + 0x30c) = 700;
        return 700;
      case 10:
        *(undefined4 *)(param_1 + 0x310) = 0;
        *(undefined4 *)(param_1 + 0x84) = 0;
        *(undefined4 *)(param_1 + 0x88) = 0;
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
        iVar4 = *(int *)(param_1 + 0x20);
        iVar20 = *(int *)(iVar4 + 0x368);
        if (iVar20 == 0) {
          puVar14 = (undefined4 *)0x0;
        }
        else {
          puVar14 = *(undefined4 **)(iVar20 + 8);
        }
        *puVar14 = 0;
        iVar4 = *(int *)(iVar4 + 0x368);
        if (iVar4 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(uint *)(iVar4 + 8);
        }
        *(undefined4 *)(uVar6 + 4) = 0;
        return uVar6;
      case 0xb:
        iVar20 = *(int *)(param_3 + 0xc);
        iVar4 = 0;
        if (iVar20 != 0) {
          iVar4 = *(int *)(iVar20 + 8);
        }
        if (*(int *)(iVar4 + 4) < 1) {
          *(undefined1 *)(param_1 + 0x278) = 0;
          return 0;
        }
        iVar4 = 0;
        if (iVar20 != 0) {
          iVar4 = *(int *)(iVar20 + 8);
        }
        uVar6 = *(uint *)(iVar4 + 4);
        if ((uVar6 & 0x1020) != 0) {
          uVar6 = (uint)*(byte *)(param_1 + 0x278);
          if (uVar6 == 0) {
            uVar6 = 1 - *(byte *)(param_1 + 0x276);
            if (1 < *(byte *)(param_1 + 0x276)) {
              uVar6 = 0;
            }
            *(char *)(param_1 + 0x276) = (char)uVar6;
          }
          *(undefined1 *)(param_1 + 0x278) = 1;
          return uVar6;
        }
        bVar29 = (uVar6 & 0x8010) != 0;
        iVar4 = 0;
        uVar19 = (uint)bVar29;
        *(undefined1 *)(param_1 + 0x278) = 0;
        if ((!bVar29) && ((uVar6 & 0x10040) != 0)) {
          uVar19 = 0xffffffff;
        }
        bVar29 = (uVar6 & 0x2004) != 0;
        uVar21 = (uint)bVar29;
        if ((!bVar29) && ((uVar6 & 0x4100) != 0)) {
          uVar21 = 0xffffffff;
        }
        if (uVar19 == 0 && uVar21 == 0) {
          return 0;
        }
        if (*(char *)(param_1 + 0x276) != '\0') {
          FUN_4a16be24(&iStack_50 + 3,10);
          iVar7 = (&iStack_50)[6];
          iVar20 = iVar4;
          if (iVar7 != 0) {
            iVar20 = *(int *)(iVar7 + 8);
          }
          *(undefined4 *)(iVar20 + 4) = 0;
          iVar7 = (&iStack_50)[6];
          iVar20 = iVar4;
          if (iVar7 != 0) {
            iVar20 = *(int *)(iVar7 + 8);
          }
          *(undefined4 *)(iVar20 + 8) = 0;
          iVar7 = (&iStack_50)[6];
          iVar20 = iVar4;
          if (iVar7 != 0) {
            iVar20 = *(int *)(iVar7 + 8);
          }
          *(uint *)(iVar20 + 0x14) = uVar19 * 0x1e;
          iVar7 = (&iStack_50)[6];
          iVar20 = iVar4;
          if (iVar7 != 0) {
            iVar20 = *(int *)(iVar7 + 8);
          }
          *(uint *)(iVar20 + 0x18) = uVar21 * 0x3c;
          iVar20 = (&iStack_50)[6];
          if (iVar20 != 0) {
            iVar4 = *(int *)(iVar20 + 8);
          }
          *(undefined4 *)(iVar4 + 0x24) = 1;
          FUN_4a11f950(param_1,&iStack_50 + 3);
          uVar6 = FUN_4a16bef4(&iStack_50 + 3);
          return uVar6;
        }
        uVar30 = 1 < *(uint *)(param_1 + 0x1d8);
        if (*(uint *)(param_1 + 0x1d8) == 2) {
          uVar22 = 800;
          uVar18 = 0x708;
        }
        else {
          uVar18 = 0x2ee;
          uVar22 = 200;
        }
        uVar23 = FUN_4a171fac(uVar21);
        uVar23 = FUN_4a17211c(uVar23,0x40400000);
        uVar23 = FUN_4a17211c(uVar23,0x41f00000);
        uVar23 = FUN_4a1725c0(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x48c),uVar23);
        uVar18 = FUN_4a171fac(uVar18);
        FUN_4a1720a0(uVar18,uVar23);
        if ((bool)uVar30) {
          uVar18 = FUN_4a171fac(uVar22);
          FUN_4a172458(uVar18,uVar23);
          if (!(bool)uVar30) goto LAB_4a125398;
        }
        else {
LAB_4a125398:
          uVar23 = uVar18;
        }
        *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x48c) = uVar23;
        uVar6 = *(uint *)(param_1 + 0xa68) | 4;
        goto LAB_4a1253ac;
      }
      *(undefined4 *)(param_1 + 0x2f4) = 0;
code_r0x4a11e2a0:
      (&iStack_50)[0x13] = (&iStack_50)[0x13];
      (&iStack_50)[0x12] = (&iStack_50)[0x11];
      (&iStack_50)[0x11] = (&iStack_50)[0x10];
      (&iStack_50)[0x10] = (&iStack_50)[0xf];
      (&iStack_50)[0xf] = (&iStack_50)[0xe];
      (&iStack_50)[0xe] = (&iStack_50)[0xd];
      (&iStack_50)[0xd] = (&iStack_50)[0xc];
      (&iStack_50)[0xc] = (&iStack_50)[0xb];
      *(undefined4 *)(param_1 + 700) = 0;
                    /* WARNING: Could not recover jumptable at 0x4a11e2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)switchD_4a11e2d8::switchdataD_4a11e2e0)(0);
      return uVar6;
    }
    iVar5 = *(int *)(param_3 + 0xc);
    iVar7 = iVar20;
    iVar4 = iVar20;
    if (iVar5 != 0) {
      iVar7 = *(int *)(iVar5 + 8);
      iVar4 = *(int *)(iVar5 + 8);
    }
    uVar18 = *(undefined4 *)(iVar4 + 4);
    uVar23 = *(undefined4 *)(iVar7 + 8);
    uVar22 = FUN_4a0f06e0(*(undefined4 *)(param_1 + 0x28),uVar18,uVar23);
    iVar4 = FUN_4a118a34(param_1,uVar18,uVar23,uVar22);
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a122f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*UNRECOVERED_JUMPTABLE)();
      return uVar6;
    }
    uVar22 = *(undefined4 *)(iVar4 + 0x50);
    if (*(int *)(iVar4 + 0x28) == 0xf) {
      iVar4 = *(int *)(iVar4 + 0x60);
    }
    if (*(int *)(param_1 + 0x69c) == 0xc) {
      FUN_4a11a440(param_1,0x1c);
      FUN_4a10918c(*(undefined4 *)(param_1 + 0x6a4));
      iStack_30 = uVar22;
      FUN_4a105624(*(undefined4 *)(param_1 + 0x6a4),*(undefined4 *)(iVar4 + 0x44),
                   *(undefined4 *)(iVar4 + 0x48),*(undefined4 *)(iVar4 + 0x4c));
      FUN_4a106a9c(*(undefined4 *)(param_1 + 0x6a4),1);
      uVar23 = *(undefined4 *)(iVar4 + 0x44);
      uVar18 = FUN_4a146a9c(*(undefined4 *)(param_1 + 0x6a4));
      iStack_30 = uVar22;
      FUN_4a0ef688(*(undefined4 *)(param_1 + 0x28),uVar18,uVar23);
      *(undefined4 *)(param_1 + 0x6a4) = 0;
      FUN_4a10ca70(&iStack_2c,param_1);
      iVar4 = 0;
      if (0 < local_24) {
        do {
          iVar7 = iVar20;
          if (local_20 != 0) {
            iVar7 = *(int *)(local_20 + 8);
          }
          uVar22 = *(undefined4 *)(iVar7 + iVar4 * 4);
          iVar7 = FUN_4a146b58(uVar22,8);
          if (iVar7 != 0) {
            FUN_4a109858(uVar22);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < local_24);
      }
      FUN_4a16a5f4(&iStack_2c);
      FUN_4a122618(param_1,1);
      iVar20 = *(int *)(*(int *)(param_1 + 0x20) + 0x260);
      iVar4 = FUN_4a085614(iVar20);
      if (iVar4 != 0) {
        FUN_4a0866c0(iVar20,0x40);
      }
      if (*(int *)(iVar20 + 0x74) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(iVar20 + 0x74) + 8);
      }
      iVar20 = 0;
      if (0 < *(int *)(iVar4 + 0x508)) {
        do {
          if (*(int *)(iVar4 + 0x50c) == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(*(int *)(iVar4 + 0x50c) + 8);
          }
          piVar17 = *(int **)(iVar7 + iVar20 * 4);
          if (piVar17[1] != 400) {
            (**(code **)(*piVar17 + 0x28))(piVar17);
            (**(code **)(*piVar17 + 0x30))(piVar17,0);
            (**(code **)(*piVar17 + 0x3c))(piVar17);
            return iVar20 << 0x10 | 0x40;
          }
          iVar20 = iVar20 + 1;
        } while (iVar20 < *(int *)(iVar4 + 0x508));
      }
      return 0xffffffff;
    }
    *(int *)(param_1 + 0x2b4) = iVar4;
    FUN_4a115d8c(param_1,iVar4);
    iVar4 = 5;
  }
  else {
    FUN_4a10ca70(&iStack_2c,param_1);
    iVar4 = 0;
    if (0 < local_24) {
      do {
        if (local_20 == 0) {
          iVar20 = 0;
        }
        else {
          iVar20 = *(int *)(local_20 + 8);
        }
        uVar22 = *(undefined4 *)(iVar20 + iVar4 * 4);
        iVar20 = FUN_4a146b58(uVar22,8);
        if (iVar20 != 0) {
          FUN_4a109858(uVar22);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_24);
    }
    FUN_4a16a5f4(&iStack_2c);
    if (*(int *)(param_1 + 0x69c) == 0xc) {
      uVar22 = *(undefined4 *)(param_1 + 0x6a4);
      FUN_4a106a9c(uVar22,1);
      FUN_4a10918c(uVar22);
      *(undefined4 *)(param_1 + 0x6a4) = 0;
      iVar4 = 1;
    }
    else {
      iVar4 = 2;
    }
  }
  if (*(int *)(param_1 + 0x69c) == 0xe && iVar4 == 0xd) {
    FUN_4a0941ec();
    FUN_4a094c64();
  }
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  uVar6 = 0;
  switch(iVar4) {
  case 0:
    FUN_4a1161d0(param_1,6);
    goto LAB_4a1228a8;
  case 1:
    *(undefined4 *)(param_1 + 0x2b8) = 4;
    if ((*(int *)(param_1 + 0x2b4) == 0) ||
       (iVar20 = FUN_4a146b58(*(int *)(param_1 + 0x2b4),4), iVar20 == 0)) {
      *(undefined4 *)(param_1 + 0x2b4) = 0;
      FUN_4a115d8c(param_1,0);
    }
LAB_4a1228a8:
    *(undefined4 *)(param_1 + 0x2b4) = 0;
    uVar6 = FUN_4a115d8c(param_1,0);
    break;
  case 2:
    uVar6 = *(uint *)(param_1 + 0x69c);
    if ((((uVar6 != 7 && uVar6 != 3) && uVar6 != 8) && uVar6 != 4) && uVar6 != 6) {
      uVar22 = FUN_4a0cf540(param_1,8);
      uVar6 = FUN_4a0d297c(uVar22,0xffffffff);
    }
    break;
  case 3:
    uVar6 = FUN_4a0cd7c0(param_1,0xb2d);
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x2b4) = 0;
    FUN_4a115d8c(param_1,0);
    *(undefined4 *)(param_1 + 0x2b8) = 8;
    if ((*(int *)(param_1 + 0x2b4) == 0) ||
       (uVar6 = FUN_4a146b58(*(int *)(param_1 + 0x2b4),8), uVar6 == 0)) {
      *(undefined4 *)(param_1 + 0x2b4) = 0;
      uVar6 = FUN_4a115d8c(param_1,0);
    }
    break;
  case 5:
    iVar20 = FUN_4a143ac8(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x6a0));
    uVar6 = FUN_4a0ce964(param_1,0xb30,*(undefined4 *)(iVar20 + 0xc));
    break;
  case 7:
    iVar20 = FUN_4a143ac8(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x6a0));
    uVar6 = FUN_4a0cd7c0(param_1,0xb2e,*(undefined4 *)(iVar20 + 0xc));
  }
  *(int *)(param_1 + 0x69c) = iVar4;
  return uVar6;
}



// Address: 4a1239d8

/* WARNING: Removing unreachable block (ram,0x4a11a488) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1239d8(int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_r4;
  int unaff_r5;
  undefined4 uVar5;
  int unaff_r6;
  undefined4 uVar6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int *piVar7;
  code *UNRECOVERED_JUMPTABLE_00;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  
  iVar2 = FUN_4a0cb850(param_2,param_3);
  if (iVar2 == 0) {
    if (param_2 != 3) {
      return;
    }
    iVar3 = *(int *)(param_3 + 0xc);
    iVar2 = 0;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar2 = *(int *)(iVar3 + 8);
      iVar3 = *(int *)(iVar3 + 8);
    }
    uVar6 = *(undefined4 *)(iVar2 + 8);
    uVar5 = *(undefined4 *)(iVar3 + 4);
    iVar2 = FUN_4a0cf540(param_1,8);
    iVar3 = FUN_4a135720(iVar2,uVar5,uVar6);
    if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a123a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    UNRECOVERED_JUMPTABLE = (code *)0x4a123a70;
    uVar10 = FUN_4a13f250(iVar2,uVar5,uVar6);
    iVar3 = (int)((ulonglong)uVar10 >> 0x20);
    iVar4 = (int)uVar10;
    bVar8 = -1 < iVar4;
    bVar9 = iVar4 == 0;
    if (bVar8) {
      iVar3 = *(int *)(iVar2 + 0xac);
      bVar9 = iVar3 == iVar4;
    }
    piVar7 = (int *)&stack0xffffffe8;
    if (bVar9 || (!bVar8 || iVar3 < iVar4)) {
      param_1 = unaff_r4;
      piVar7 = (int *)register0x00000054;
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
    }
                    /* WARNING: Could not recover jumptable at 0x4a123a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    if (bVar9 || (!bVar8 || iVar3 < iVar4)) {
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    uVar5 = FUN_4a1457e4(*(undefined4 *)(param_1 + 0x28),iVar4,*(undefined4 *)(param_1 + 0x6d4));
    *(undefined4 *)(param_1 + 0x6a0) = uVar5;
    iVar2 = FUN_4a1449bc(*(undefined4 *)(param_1 + 0x28),uVar5);
    if (iVar2 == 0) {
      FUN_4a0cf554(param_1,0x14);
      unaff_r4 = *piVar7;
      unaff_r5 = piVar7[1];
      unaff_r6 = piVar7[2];
      unaff_r7 = piVar7[3];
      unaff_r8 = piVar7[4];
      UNRECOVERED_JUMPTABLE_00 = (code *)piVar7[5];
      register0x00000054 = (BADSPACEBASE *)(piVar7 + 6);
      iVar2 = 8;
    }
    else {
      iVar2 = FUN_4a143ac8(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x6a0));
      sVar1 = *(short *)(iVar2 + 0x1a);
      iVar2 = FUN_4a141aa4(*(undefined4 *)(param_1 + 0x24));
      if (iVar2 < sVar1) {
        FUN_4a0cf554(param_1,0x14);
        FUN_4a122618(param_1,7);
        piVar7[5] = piVar7[5];
        piVar7[4] = piVar7[2];
        piVar7[3] = piVar7[1];
        piVar7[2] = *piVar7;
        iVar3 = *(int *)(param_1 + 0x20);
        iVar2 = FUN_4a145d3c(iVar3);
        if (iVar2 != 0) {
          return;
        }
        FUN_4a0fe54c(iVar3,0x1d);
        if (*(char *)(iVar3 + 0x495) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x4a11a47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)piVar7[5])();
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x4a11a484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR_caseD_1d_4a11a500)();
        return;
      }
      iVar2 = FUN_4a0f21b4(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x6a0),0);
      if (iVar2 < 1) {
        FUN_4a0cf554(param_1,0x14);
        unaff_r4 = *piVar7;
        unaff_r5 = piVar7[1];
        unaff_r6 = piVar7[2];
        unaff_r7 = piVar7[3];
        unaff_r8 = piVar7[4];
        UNRECOVERED_JUMPTABLE_00 = (code *)piVar7[5];
        register0x00000054 = (BADSPACEBASE *)(piVar7 + 6);
        iVar2 = 3;
      }
      else {
        FUN_4a0cf554(param_1,0x15);
        unaff_r4 = *piVar7;
        unaff_r5 = piVar7[1];
        unaff_r6 = piVar7[2];
        unaff_r7 = piVar7[3];
        unaff_r8 = piVar7[4];
        UNRECOVERED_JUMPTABLE_00 = (code *)piVar7[5];
        register0x00000054 = (BADSPACEBASE *)(piVar7 + 6);
        iVar2 = 4;
      }
    }
  }
  else {
    iVar2 = 0xe;
  }
  *(code **)((int)register0x00000054 + -4) = UNRECOVERED_JUMPTABLE_00;
  *(int *)((int)register0x00000054 + -8) = unaff_r10;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(int *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x20) = unaff_r4;
  if (*(int *)(param_1 + 0x69c) == 0xe && iVar2 == 0xd) {
    FUN_4a0941ec();
    FUN_4a094c64();
  }
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  switch(iVar2) {
  case 0:
    FUN_4a1161d0(param_1,6);
    goto LAB_4a1228a8;
  case 1:
    *(undefined4 *)(param_1 + 0x2b8) = 4;
    if ((*(int *)(param_1 + 0x2b4) == 0) ||
       (iVar3 = FUN_4a146b58(*(int *)(param_1 + 0x2b4),4), iVar3 == 0)) {
      *(undefined4 *)(param_1 + 0x2b4) = 0;
      FUN_4a115d8c(param_1,0);
    }
    goto LAB_4a1228a8;
  case 2:
    iVar3 = *(int *)(param_1 + 0x69c);
    if ((((iVar3 != 7 && iVar3 != 3) && iVar3 != 8) && iVar3 != 4) && iVar3 != 6) {
      uVar5 = FUN_4a0cf540(param_1,8);
      FUN_4a0d297c(uVar5,0xffffffff);
    }
    break;
  case 3:
    FUN_4a0cd7c0(param_1,0xb2d);
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x2b4) = 0;
    FUN_4a115d8c(param_1,0);
    *(undefined4 *)(param_1 + 0x2b8) = 8;
    if (*(int *)(param_1 + 0x2b4) != 0) {
      iVar3 = FUN_4a146b58(*(int *)(param_1 + 0x2b4),8);
joined_r0x4a1228f0:
      if (iVar3 != 0) break;
    }
    goto LAB_4a1228f4;
  case 5:
    iVar3 = FUN_4a143ac8(uVar5,*(undefined4 *)(param_1 + 0x6a0));
    FUN_4a0ce964(param_1,0xb30,*(undefined4 *)(iVar3 + 0xc));
    break;
  case 7:
    iVar3 = FUN_4a143ac8(uVar5,*(undefined4 *)(param_1 + 0x6a0));
    FUN_4a0cd7c0(param_1,0xb2e,*(undefined4 *)(iVar3 + 0xc));
    break;
  case 8:
    iVar3 = FUN_4a143ac8(uVar5,*(undefined4 *)(param_1 + 0x6a0));
    FUN_4a0cd7c0(param_1,0xb2f,*(undefined4 *)(iVar3 + 0xc));
    break;
  case 9:
    uVar5 = FUN_4a1460f8(*(undefined4 *)(param_1 + 0x6a4));
    FUN_4a0ce964(param_1,0xb31,uVar5);
    break;
  case 10:
    FUN_4a0ce964(param_1,0xb44);
    break;
  case 0xb:
    FUN_4a0ce9a4(param_1,0xb45);
    break;
  case 0xc:
    *(undefined4 *)(param_1 + 0x6a0) = *(undefined4 *)(*(int *)(param_1 + 0x6a4) + 0x28);
    FUN_4a106a9c(*(int *)(param_1 + 0x6a4),0);
    FUN_4a108d64(*(undefined4 *)(param_1 + 0x6a4));
    FUN_4a0f21b4(uVar5,*(undefined4 *)(param_1 + 0x6a0),0);
    *(undefined4 *)(param_1 + 0x2b8) = 8;
    if ((*(int *)(param_1 + 0x2b4) != 0) &&
       (iVar3 = FUN_4a146b58(*(int *)(param_1 + 0x2b4),8), iVar3 != 0)) break;
LAB_4a1228a8:
    *(undefined4 *)(param_1 + 0x2b4) = 0;
    FUN_4a115d8c(param_1,0);
    break;
  case 0xe:
    if (*(int *)(param_1 + 0x69c) != 2) {
      uVar5 = thunk_FUN_4a161570(0x14);
      uVar5 = FUN_4a0c707c(uVar5,s_build_mode_4a122a44);
      uVar6 = FUN_4a0941ec();
      FUN_4a094aa4(uVar6,uVar5);
    }
    break;
  case 0xf:
    *(undefined4 *)(param_1 + 0x2b4) = 0;
    FUN_4a115d8c(param_1,0);
    *(undefined4 *)(param_1 + 0x2b8) = 0;
    if (*(int *)(param_1 + 0x2b4) != 0) {
      iVar3 = FUN_4a146b58(*(int *)(param_1 + 0x2b4),0);
      goto joined_r0x4a1228f0;
    }
LAB_4a1228f4:
    *(undefined4 *)(param_1 + 0x2b4) = 0;
    FUN_4a115d8c(param_1,0);
  }
  *(int *)(param_1 + 0x69c) = iVar2;
  return;
}



// Address: 4a1246f0

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

void FUN_4a1246f0(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar7 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x69c);
  uVar5 = 0xffffffff;
  iVar8 = iVar7 + 0x278;
  iVar6 = 0;
  uVar4 = 0xaf7;
  uVar3 = uVar4;
  if (iVar2 == 5) {
    uVar4 = *(undefined4 *)(param_1 + 0x6a0);
    iVar2 = FUN_4a143ac8(*(undefined4 *)(param_1 + 0x28),uVar4);
    iVar6 = (int)*(short *)(iVar2 + 0x1a);
    iVar2 = FUN_4a143ac8(*(undefined4 *)(param_1 + 0x28),uVar4);
    uVar5 = *(undefined4 *)(iVar2 + 0xc);
  }
  else if (iVar2 == 9) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x6a4) + 0x28);
    iVar2 = FUN_4a143ac8(*(undefined4 *)(param_1 + 0x28),uVar3);
    iVar6 = (int)*(short *)(iVar2 + 0x1c);
    iVar2 = FUN_4a143ac8(*(undefined4 *)(param_1 + 0x28),uVar3);
    uVar5 = *(undefined4 *)(iVar2 + 0xc);
    uVar3 = 0xaf8;
  }
  else if (iVar2 == 0x13) {
    iVar6 = 0x32;
    uVar5 = 0xc23;
  }
  else {
    uVar3 = 0xffffffff;
    if (iVar2 == 0x14) {
      iVar6 = 0x32;
      uVar5 = 0xc4c;
      uVar3 = uVar4;
    }
  }
  FUN_4a0ce950(param_1,1,uVar5);
  FUN_4a0ce950(param_1,2,uVar3);
  uVar3 = FUN_4a06c410(iVar8);
  FUN_4a06c86c(iVar8,iVar6);
  FUN_4a06b694(iVar8,0xfffffff7,uVar3);
  FUN_4a0ce950(param_1,3,0xfffffff7);
  FUN_4a10ce84(param_1,param_2);
  FUN_4a041910(1);
  FUN_4a0fe1e0(iVar7,param_2);
  FUN_4a0cdc50(param_1,param_2,2);
  puVar1 = PTR_DAT_4a041a9c;
  iVar2 = 0;
  if (*(int *)PTR_DAT_4a041a9c != 0) {
    iVar2 = *(int *)(PTR_DAT_4a041a9c + 4);
  }
  if (*(int *)PTR_DAT_4a041a9c == 0 || iVar2 == 0) {
    return;
  }
  *(undefined4 *)(PTR_DAT_4a041a9c + 0x28) = 0;
  iVar2 = *(int *)(PTR_DAT_4a041a9c + 0x38);
  if (*(int *)(PTR_DAT_4a041a9c + 0x1c) != 0) {
    *(int *)(puVar1 + 8) = *(int *)(PTR_DAT_4a041a9c + 0x34) + *(int *)(puVar1 + 0x3c);
    *(int *)(puVar1 + 0xc) = iVar2 + *(int *)(puVar1 + 0x40);
    FUN_4a150d7c(-(*(int *)(puVar1 + 0x14) + *(int *)(puVar1 + 0x3c) / 2),
                 -(*(int *)(puVar1 + 0x40) / 2));
    thunk_FUN_4a150140(0xc11);
    *(undefined4 *)(puVar1 + 0x24) = 1;
    FUN_4a1507ec(0,0,*(undefined4 *)(puVar1 + 0x34),*(undefined4 *)(puVar1 + 0x38));
    *(undefined4 *)(puVar1 + 0x24) = 0;
  }
  if (*(int *)(puVar1 + 0x20) == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0419cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  *(int *)(puVar1 + 8) = *(int *)(puVar1 + 0x34) + *(int *)(puVar1 + 0x3c);
  *(int *)(puVar1 + 0xc) = *(int *)(puVar1 + 0x38) + *(int *)(puVar1 + 0x40);
  FUN_4a150d7c((*(int *)(puVar1 + 0x10) + *(int *)(puVar1 + 0x18)) - *(int *)(puVar1 + 0x3c) / 2,
               -(*(int *)(puVar1 + 0x40) / 2));
  *(undefined4 *)(puVar1 + 0x24) = 1;
  thunk_FUN_4a150140(0xc11);
  FUN_4a1507ec(*(undefined4 *)(puVar1 + 0x34),0,*(undefined4 *)(puVar1 + 0x34),
               *(undefined4 *)(puVar1 + 0x38));
  *(undefined4 *)(puVar1 + 0x24) = 0;
  return;
}



// Address: 4a124844

void FUN_4a124844(int param_1)

{
  FUN_4a115d8c();
  *(undefined1 *)(param_1 + 0x314) = 1;
  return;
}



// Address: 4a124860

undefined4 FUN_4a124860(int param_1,int param_2)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_2c [8];
  int local_24;
  int local_20;
  
  FUN_4a10ca70(auStack_2c,param_1);
  iVar1 = FUN_4a0fe640(*(undefined4 *)(param_1 + 0x20),0,local_24 + -1);
  iVar3 = 0;
  if (0 < local_24) {
    do {
      FUN_4a0015f0(iVar1 + iVar3,local_24);
      if (local_20 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(local_20 + 8);
      }
      uVar4 = *(undefined4 *)(iVar2 + extraout_r1 * 4);
      iVar2 = FUN_4a1460d4(uVar4);
      if (iVar2 == param_2) {
        FUN_4a16a5f4(auStack_2c);
        return uVar4;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_24);
  }
  FUN_4a16a5f4(auStack_2c);
  return 0;
}



// Address: 4a124918

/* WARNING: Removing unreachable block (ram,0x4a11e2dc) */
/* WARNING: Removing unreachable block (ram,0x4a11e4fc) */
/* WARNING: Removing unreachable block (ram,0x4a11e500) */
/* WARNING: Removing unreachable block (ram,0x4a11e504) */
/* WARNING: Removing unreachable block (ram,0x4a11e508) */
/* WARNING: Removing unreachable block (ram,0x4a11e50c) */
/* WARNING: Removing unreachable block (ram,0x4a084b60) */
/* WARNING: Removing unreachable block (ram,0x4a084b74) */
/* WARNING: Removing unreachable block (ram,0x4a084b7c) */
/* WARNING: Removing unreachable block (ram,0x4a084b80) */
/* WARNING: Removing unreachable block (ram,0x4a084b84) */
/* WARNING: Removing unreachable block (ram,0x4a084b98) */
/* WARNING: Removing unreachable block (ram,0x4a084ba4) */
/* WARNING: Removing unreachable block (ram,0x4a084ba8) */
/* WARNING: Removing unreachable block (ram,0x4a084bb0) */
/* WARNING: Removing unreachable block (ram,0x4a084bb4) */
/* WARNING: Removing unreachable block (ram,0x4a084bb8) */
/* WARNING: Removing unreachable block (ram,0x4a084bcc) */

void FUN_4a124918(int param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  undefined4 uVar21;
  uint uVar22;
  uint uVar23;
  undefined4 uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  bool bVar28;
  bool bVar29;
  undefined1 uVar30;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  uint uStack_3c;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_4;
  
  puVar2 = PTR_DAT_4a11a2a8;
  puVar1 = PTR_DAT_4a11a2a4;
  iVar5 = *(int *)(param_1 + 700);
  if ((iVar5 == 2 || iVar5 == 3) || iVar5 == 4) {
    return;
  }
  switch(param_2) {
  case 0:
    iVar5 = 0;
    if (*(int *)(param_3 + 0xc) != 0) {
      iVar5 = *(int *)(*(int *)(param_3 + 0xc) + 8);
    }
    (&iStack_50)[7] = *(int *)(iVar5 + 4);
    iVar5 = 0;
    if (*(int *)(param_3 + 0xc) != 0) {
      iVar5 = *(int *)(*(int *)(param_3 + 0xc) + 8);
    }
    (&iStack_50)[6] = *(int *)(iVar5 + 8);
    if (*(int *)(param_1 + 0x1c0) != 7) {
      FUN_4a0bbe98(*(undefined4 *)PTR_DAT_4a1253bc,&iStack_50 + 7,&iStack_50 + 6);
    }
    puVar1 = PTR_DAT_4a1253bc;
    iVar5 = FUN_4a0bbcf0(*(undefined4 *)PTR_DAT_4a1253bc,10);
    iVar14 = *(int *)(param_1 + 0x238);
    iVar12 = FUN_4a0bbcf0(*(undefined4 *)puVar1,10);
    iVar17 = *(int *)(param_1 + 0x230);
    iStack_50 = *(undefined4 *)(param_1 + 0x234);
    (&iStack_50)[1] = iVar5 + 0xf + iVar14;
    iVar5 = FUN_4a134a60((&iStack_50)[7],(&iStack_50)[6],*(undefined4 *)(param_1 + 0x22c),
                         iVar17 - iVar12);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 0x274) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x274) = 1;
    }
    *(undefined1 *)(param_1 + 0xa6c) = 1;
  default:
    return;
  case 2:
    *(undefined1 *)(param_1 + 0xa6c) = 0;
    return;
  case 3:
  case 7:
    if (iVar5 != 1) {
      if (iVar5 != 5) {
        return;
      }
      goto code_r0x4a11e2a0;
    }
    break;
  case 4:
    if (iVar5 != 1) {
      if (iVar5 != 5) {
        return;
      }
      goto code_r0x4a11e2a0;
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0x274) != '\0') {
      (&iStack_50)[0x13] = (&iStack_50)[0x13];
      (&iStack_50)[0x12] = (&iStack_50)[0xf];
      (&iStack_50)[0x11] = (&iStack_50)[0xe];
      (&iStack_50)[0x10] = (&iStack_50)[0xd];
      (&iStack_50)[0xf] = (&iStack_50)[0xc];
      (&iStack_50)[0xe] = (&iStack_50)[0xb];
      if (*(int *)(param_3 + 0xc) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_3 + 0xc) + 8);
      }
      (&iStack_50)[0xd] = *(int *)(iVar5 + 0x18);
      (&iStack_50)[0xc] = 0;
      bVar29 = *(char *)(param_1 + 0x277) != '\0';
      iVar5 = 0;
      if (bVar29) {
        iVar5 = *(int *)PTR_DAT_4a11a2a4;
      }
      bVar28 = iVar5 != 0;
      if (bVar29 && bVar28) {
        iVar5 = *(int *)PTR_DAT_4a11a2a8;
      }
      uVar30 = 1;
      if ((bVar29 && bVar28) && iVar5 != 0) {
        uVar21 = FUN_4a171fac((&iStack_50)[0xd] + -0x32);
        uVar21 = FUN_4a17211c(uVar21,0x41f00000);
        FUN_4a17211c(uVar21,DAT_4a11a2ac);
        uVar13 = FUN_4a171e1c();
        puVar3 = PTR_DAT_4a11a2b0;
        uVar30 = true;
        *(uint *)PTR_DAT_4a11a2b0 = uVar13;
        if ((int)uVar13 < 0) {
          *(undefined4 *)puVar3 = 0;
        }
        else {
          uVar30 = 0x1d < uVar13;
          if (0x1e < (int)uVar13) {
            *(undefined4 *)puVar3 = 0x1e;
          }
        }
        iVar5 = 0x1e - (*(uint *)puVar3 & 0xfffe);
        *(int *)puVar3 = iVar5;
        FUN_4a041aa0(iVar5,*(undefined4 *)PTR_DAT_4a11a2b4,0xbf800000);
      }
      FUN_4a0bbe98(*(undefined4 *)PTR_DAT_4a11a2b8,&iStack_50 + 0xc,&iStack_50 + 0xd);
      iVar5 = *(int *)(param_1 + 0x23c);
      iVar12 = (&iStack_50)[0xd];
      uVar21 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x240));
      uVar24 = FUN_4a171fac(iVar12 - iVar5);
      uVar21 = FUN_4a171bb8(uVar24,uVar21);
      FUN_4a1720a0(0x3f800000,uVar21);
      if (!(bool)uVar30) {
        uVar21 = 0x3f800000;
      }
      FUN_4a172458(0,uVar21);
      if (!(bool)uVar30) {
        uVar21 = 0;
      }
      bVar29 = *(char *)(param_1 + 0x277) != '\0';
      iVar5 = 0;
      if (bVar29) {
        iVar5 = *(int *)puVar1;
      }
      bVar28 = iVar5 != 0;
      if (bVar29 && bVar28) {
        iVar5 = *(int *)puVar2;
      }
      if ((bVar29 && bVar28) && iVar5 != 0) {
        uVar21 = FUN_4a17211c(uVar21,0x44098000);
        uVar21 = FUN_4a171a94(uVar21,0x43480000);
        *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x490) = uVar21;
        return;
      }
      if (*(int *)(param_1 + 0x1d8) == 2) {
        iVar5 = 800;
        iVar12 = 0x708;
      }
      else {
        iVar12 = 0x2ee;
        iVar5 = 200;
      }
      uVar24 = FUN_4a171fac(iVar12 - iVar5);
      uVar21 = FUN_4a17211c(uVar24,uVar21);
      uVar24 = FUN_4a171fac(iVar5);
      uVar21 = FUN_4a171a94(uVar24,uVar21);
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x48c) = uVar21;
      *(uint *)(param_1 + 0xa68) = *(uint *)(param_1 + 0xa68) | 4;
      return;
    }
    if (*(char *)(param_1 + 0x275) != '\0') {
      iVar12 = *(int *)(param_1 + 0x244);
      uVar30 = 1;
      iVar5 = 0;
      if (*(int *)(param_3 + 0xc) != 0) {
        iVar5 = *(int *)(*(int *)(param_3 + 0xc) + 8);
      }
      iVar5 = *(int *)(iVar5 + 0x14);
      uVar21 = FUN_4a171fac(*(undefined4 *)(param_1 + 600));
      uVar24 = FUN_4a171fac((iVar5 - iVar12) + -5);
      uVar21 = FUN_4a171bb8(uVar24,uVar21);
      FUN_4a1720a0(0x3f800000,uVar21);
      if (!(bool)uVar30) {
        uVar21 = 0x3f800000;
      }
      FUN_4a172458(0,uVar21);
      if (!(bool)uVar30) {
        uVar21 = 0;
      }
      uVar21 = FUN_4a17211c(uVar21,0x43b40000);
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x488) = uVar21;
      *(uint *)(param_1 + 0xa68) = *(uint *)(param_1 + 0xa68) | 2;
      return;
    }
    if (*(char *)(param_1 + 0x276) != '\0') {
      (&iStack_50)[0x13] = (&iStack_50)[0x13];
      (&iStack_50)[0x12] = (&iStack_50)[0xf];
      (&iStack_50)[0x11] = (&iStack_50)[0xe];
      (&iStack_50)[0x10] = (&iStack_50)[0xd];
      (&iStack_50)[0xf] = (&iStack_50)[0xc];
      (&iStack_50)[0xe] = (&iStack_50)[0xb];
      iVar5 = *(int *)(param_3 + 0xc);
      iVar12 = 0;
      bVar29 = iVar5 != 0;
      if (bVar29) {
        iVar14 = *(int *)(iVar5 + 8);
      }
      else {
        iVar14 = 0;
      }
      iVar14 = *(int *)(iVar14 + 4);
      if (bVar29) {
        iVar17 = *(int *)(iVar5 + 8);
      }
      else {
        iVar17 = 0;
      }
      iVar17 = *(int *)(iVar17 + 8);
      if (bVar29) {
        iVar19 = *(int *)(iVar5 + 8);
        iVar12 = *(int *)(iVar5 + 8);
      }
      else {
        iVar19 = 0;
      }
      iVar19 = *(int *)(iVar19 + 0x14);
      iVar5 = *(int *)(iVar12 + 0x18);
      FUN_4a13ca78(*(undefined4 *)(param_1 + 0x20));
      uVar21 = FUN_4a171fac();
      uVar24 = FUN_4a171fac(iVar19 - iVar14);
      uVar13 = FUN_4a171bb8(uVar24,uVar21);
      FUN_4a13caa0(*(undefined4 *)(param_1 + 0x20));
      uVar21 = FUN_4a171fac();
      uVar24 = FUN_4a171fac(iVar5 - iVar17);
      uVar21 = FUN_4a171bb8(uVar24,uVar21);
      uVar24 = FUN_4a17211c(uVar13 ^ 0x80000000,0x43b40000);
      iVar5 = *(int *)(param_1 + 0x28);
      uVar13 = FUN_4a171a94(*(undefined4 *)(iVar5 + 0x488),uVar24);
      if (uVar13 < 0x80000001) {
        if (0x43b40000 < (int)uVar13) {
          uVar13 = FUN_4a1725c0(uVar13,0x43b40000);
        }
      }
      else {
        uVar13 = FUN_4a1725c0(0x43b40000,uVar13);
      }
      uVar21 = FUN_4a17211c(uVar21,0x42700000);
      iVar14 = FUN_4a171a94(*(undefined4 *)(iVar5 + 0x484),uVar21);
      iVar12 = 0x41700000;
      if ((iVar14 < 0x41700000) || (iVar12 = 0x42960000, 0x42960000 < iVar14)) {
        iVar14 = iVar12;
      }
      *(uint *)(iVar5 + 0x488) = uVar13;
      *(int *)(*(int *)(param_1 + 0x28) + 0x484) = iVar14;
      *(uint *)(param_1 + 0xa68) = *(uint *)(param_1 + 0xa68) | 2;
      return;
    }
    if (iVar5 == 1) {
      *(undefined4 *)(param_1 + 0x2f4) = 0;
LAB_4a124b80:
      FUN_4a11e2a0(param_1,0);
    }
    else if (iVar5 == 5) goto LAB_4a124b80;
    *(undefined1 *)(param_1 + 0x2d8) = 1;
    *(undefined4 *)(param_1 + 0x2f8) = 0;
    *(undefined4 *)(param_1 + 0x2fc) = 0;
    *(undefined4 *)(param_1 + 0x304) = 0;
    *(undefined4 *)(param_1 + 0x300) = 0;
    *(undefined4 *)(param_1 + 0x308) = 0;
    *(undefined4 *)(param_1 + 0x30c) = 0;
    uVar21 = DAT_4a1253c0;
    iVar5 = *(int *)(param_3 + 0xc);
    iVar12 = *(int *)(param_1 + 0x28);
    bVar29 = iVar5 != 0;
    if (bVar29) {
      iVar14 = *(int *)(iVar5 + 8);
    }
    else {
      iVar14 = 0;
    }
    uVar24 = *(undefined4 *)(iVar14 + 0x24);
    if (bVar29) {
      iVar14 = *(int *)(iVar5 + 8);
    }
    else {
      iVar14 = 0;
    }
    iVar14 = *(int *)(iVar14 + 4);
    if (bVar29) {
      iVar17 = *(int *)(iVar5 + 8);
    }
    else {
      iVar17 = 0;
    }
    iVar19 = *(int *)(iVar17 + 8);
    if (bVar29) {
      iVar17 = *(int *)(iVar5 + 8);
      iVar5 = *(int *)(iVar5 + 8);
    }
    else {
      iVar5 = 0;
    }
    iVar5 = *(int *)(iVar5 + 0x18);
    if (!bVar29) {
      iVar17 = 0;
    }
    iVar17 = *(int *)(iVar17 + 0x14);
    bVar29 = *(int *)(param_1 + 0x1d8) != 2;
    uVar15 = *(undefined4 *)(iVar12 + 0x48c);
    if (bVar29) {
      iVar6 = 0x3f000000;
    }
    else {
      iVar6 = 0x3fc00000;
    }
    (&iStack_50)[7] = iVar6;
    if (bVar29) {
      uVar7 = 200;
    }
    else {
      uVar7 = 800;
    }
    uVar7 = FUN_4a171fac(uVar7);
    uVar15 = FUN_4a1724e0(uVar7,uVar15);
    uVar21 = FUN_4a17211c(uVar15,uVar21);
    uVar21 = FUN_4a171a94(uVar21,(&iStack_50)[7]);
    uVar15 = FUN_4a171fac(-(iVar17 - iVar14));
    uVar15 = FUN_4a17211c(uVar15,uVar21);
    uVar7 = FUN_4a171fac(-(iVar5 - iVar19));
    uVar21 = FUN_4a17211c(uVar7,uVar21);
    uVar7 = FUN_4a0d4978(*(undefined4 *)(iVar12 + 0x488));
    uVar8 = FUN_4a002d64();
    uVar7 = FUN_4a002f08(uVar7);
    uVar9 = FUN_4a17211c(uVar7,uVar21);
    uVar10 = FUN_4a17211c(uVar8,uVar15);
    uVar9 = FUN_4a171a94(uVar10,uVar9);
    uVar15 = FUN_4a17211c(uVar7,uVar15);
    uVar21 = FUN_4a17211c(uVar8,uVar21);
    uVar21 = FUN_4a1725c0(uVar21,uVar15);
    *(undefined4 *)(param_1 + 0x304) = 0;
    *(undefined4 *)(param_1 + 0x300) = 0;
    *(undefined4 *)(param_1 + 0x308) = 0;
    puVar16 = (undefined4 *)FUN_4a0f6708(*(undefined4 *)(param_1 + 0x28),uVar9,uVar21);
    uVar15 = *puVar16;
    uVar7 = puVar16[1];
    uVar21 = FUN_4a171fac(uVar24);
    uVar24 = FUN_4a171bb8(uVar15,uVar21);
    *(undefined4 *)(param_1 + 0x2f8) = uVar24;
    uVar21 = FUN_4a171bb8(uVar7,uVar21);
    *(undefined4 *)(param_1 + 0x2fc) = uVar21;
    *(undefined4 *)(param_1 + 0x30c) = 700;
    iVar5 = *(int *)(param_1 + 0x28);
    uVar24 = *(undefined4 *)(iVar5 + 0x478);
    uVar21 = FUN_4a171a94(*(undefined4 *)(iVar5 + 0x470),uVar15);
    *(undefined4 *)(iVar5 + 0x470) = uVar21;
    iVar5 = *(int *)(param_1 + 0x28);
    uVar21 = FUN_4a171a94(uVar24,uVar7);
    *(undefined4 *)(iVar5 + 0x478) = uVar21;
    uVar13 = *(uint *)(param_1 + 0xa68) | 1;
LAB_4a1253ac:
    *(uint *)(param_1 + 0xa68) = uVar13;
    return;
  case 8:
    if (iVar5 == 1) {
      *(undefined4 *)(param_1 + 0x2f4) = 0;
    }
    else if (iVar5 != 5) goto LAB_4a124d84;
    FUN_4a11e2a0(param_1,0);
LAB_4a124d84:
    *(undefined1 *)(param_1 + 0x2d8) = 1;
    *(undefined4 *)(param_1 + 0x2f8) = 0;
    *(undefined4 *)(param_1 + 0x2fc) = 0;
    *(undefined4 *)(param_1 + 0x304) = 0;
    *(undefined4 *)(param_1 + 0x300) = 0;
    *(undefined4 *)(param_1 + 0x308) = 0;
    *(undefined4 *)(param_1 + 0x30c) = 0;
    *(undefined4 *)(param_1 + 0x310) = 0;
    return;
  case 9:
    if (iVar5 == 1) {
      *(undefined4 *)(param_1 + 0x2f4) = 0;
LAB_4a124de8:
      FUN_4a11e2a0(param_1,0);
    }
    else if (iVar5 == 5) goto LAB_4a124de8;
    iVar5 = *(int *)(param_3 + 0xc);
    bVar29 = iVar5 == 0;
    if (bVar29) {
      iVar12 = 0;
    }
    else {
      iVar12 = *(int *)(iVar5 + 8);
    }
    (&iStack_50)[7] = *(int *)(iVar12 + 0x24);
    if (bVar29) {
      iVar12 = 0;
    }
    else {
      iVar12 = *(int *)(iVar5 + 8);
    }
    uVar13 = *(uint *)(iVar12 + 4);
    if (bVar29) {
      iVar12 = 0;
    }
    else {
      iVar12 = *(int *)(iVar5 + 8);
    }
    uVar20 = *(uint *)(iVar12 + 8);
    if (bVar29) {
      iVar12 = 0;
    }
    else {
      iVar12 = *(int *)(iVar5 + 8);
    }
    uVar22 = *(uint *)(iVar12 + 0x14);
    if (bVar29) {
      iVar12 = 0;
    }
    else {
      iVar12 = *(int *)(iVar5 + 8);
    }
    uVar23 = *(uint *)(iVar12 + 0x18);
    if (bVar29) {
      iVar12 = 0;
    }
    else {
      iVar12 = *(int *)(iVar5 + 8);
    }
    uVar26 = *(uint *)(iVar12 + 0xc);
    if (bVar29) {
      iVar12 = 0;
    }
    else {
      iVar12 = *(int *)(iVar5 + 8);
    }
    uVar25 = *(uint *)(iVar12 + 0x10);
    if (bVar29) {
      iVar12 = 0;
    }
    else {
      iVar12 = *(int *)(iVar5 + 8);
    }
    if (bVar29) {
      iVar5 = 0;
    }
    (&iStack_50)[6] = *(int *)(iVar12 + 0x1c);
    if (!bVar29) {
      iVar5 = *(int *)(iVar5 + 8);
    }
    uVar27 = *(uint *)(iVar5 + 0x20);
    if ((uVar13 == uVar22 && uVar20 == uVar23) || (uVar26 == (&iStack_50)[6] && uVar25 == uVar27)) {
      uVar30 = uVar22 <= uVar13;
      bVar29 = uVar13 == uVar22;
      if (bVar29) {
        uVar30 = uVar23 <= uVar20;
      }
      bVar28 = bVar29 && uVar20 == uVar23;
      if (bVar29 && uVar20 == uVar23) {
        uVar11 = (&iStack_50)[6];
        uVar30 = uVar11 <= uVar26;
        bVar28 = uVar26 == uVar11;
      }
      if (bVar28) {
        uVar30 = uVar27 <= uVar25;
      }
      if (bVar28 && uVar25 == uVar27) goto LAB_4a124fe8;
    }
    else {
      (&iStack_50)[10] = uVar26 - uVar13;
      (&iStack_50)[9] = uVar25 - uVar20;
      iVar5 = FUN_4a171fac((uVar13 - (&iStack_50)[6]) * (uVar25 - uVar20) +
                           (uVar26 - uVar13) * (uVar27 - uVar20));
      (&iStack_50)[5] = iVar5;
      uVar11 = FUN_4a171fac((uVar13 - uVar22) * (&iStack_50)[9] +
                            (&iStack_50)[10] * (uVar23 - uVar20));
      if ((((&iStack_50)[5] < 1) || (uVar30 = 0x7fffffff < uVar11, uVar11 < 0x80000001)) &&
         ((uVar18 = (&iStack_50)[5], uVar30 = 0x7fffffff < uVar18, uVar18 < 0x80000001 ||
          (uVar30 = true, (int)uVar11 < 1)))) {
LAB_4a124fe8:
        *(undefined4 *)(param_1 + 0x304) = 0;
        goto LAB_4a124ff0;
      }
    }
    iVar5 = FUN_4a171fac(uVar26 - uVar13);
    (&iStack_50)[4] = iVar5;
    iVar5 = FUN_4a171fac(uVar25 - uVar20);
    (&iStack_50)[5] = iVar5;
    iVar5 = FUN_4a171fac((&iStack_50)[6] - uVar22);
    (&iStack_50)[2] = iVar5;
    iVar5 = FUN_4a171fac(uVar27 - uVar23);
    (&iStack_50)[3] = iVar5;
    uVar21 = FUN_4a002cf8((&iStack_50)[5],(&iStack_50)[4]);
    iStack_50 = uVar21;
    uVar21 = FUN_4a002cf8((&iStack_50)[3],(&iStack_50)[2]);
    iVar5 = FUN_4a1725c0(uVar21,iStack_50);
    (&iStack_50)[1] = iVar5;
    uVar21 = FUN_4a171bb8(0x43340000,*(undefined4 *)PTR_DAT_4a1253c4);
    iVar5 = FUN_4a17211c(uVar21,(&iStack_50)[1]);
    (&iStack_50)[1] = iVar5;
    uVar21 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x488);
    iStack_50 = *(int *)(param_1 + 0x28);
    uVar21 = FUN_4a171a94(uVar21,(&iStack_50)[1]);
    *(undefined4 *)(iStack_50 + 0x488) = uVar21;
    uVar21 = FUN_4a171fac((&iStack_50)[7]);
    uVar21 = FUN_4a171bb8((&iStack_50)[1],uVar21);
    *(undefined4 *)(param_1 + 0x304) = uVar21;
    uVar21 = FUN_4a0d4b38(uVar21,0xbf000000,0x3f000000);
    *(undefined4 *)(param_1 + 0x304) = uVar21;
    *(uint *)(param_1 + 0xa68) = *(uint *)(param_1 + 0xa68) | 2;
LAB_4a124ff0:
    uVar21 = FUN_4a171fac(uVar20 + uVar25);
    iVar5 = FUN_4a17295c(uVar21,0xffffffff);
    (&iStack_50)[5] = iVar5;
    uVar21 = FUN_4a171fac(uVar23 + uVar27);
    uVar21 = FUN_4a17295c(uVar21,0xffffffff);
    uVar21 = FUN_4a1725c0(uVar21,(&iStack_50)[5]);
    (&iStack_50)[4] = *(int *)(*(int *)(param_1 + 0x28) + 0x484);
    uVar21 = FUN_4a17211c(uVar21,DAT_4a1253c8);
    iVar5 = FUN_4a171a94(uVar21,(&iStack_50)[4]);
    (&iStack_50)[3] = iVar5;
    FUN_4a172458(0x41700000,iVar5);
    if ((bool)uVar30) {
      iVar5 = (&iStack_50)[3];
    }
    else {
      iVar5 = 0x41700000;
    }
    (&iStack_50)[2] = iVar5;
    FUN_4a1720a0(0x42960000,iVar5);
    if ((bool)uVar30) {
      iVar5 = (&iStack_50)[2];
    }
    else {
      iVar5 = 0x42960000;
    }
    (&iStack_50)[3] = iVar5;
    *(int *)(*(int *)(param_1 + 0x28) + 0x484) = iVar5;
    iVar5 = FUN_4a171fac((&iStack_50)[7]);
    (&iStack_50)[8] = iVar5;
    uVar21 = FUN_4a1725c0((&iStack_50)[3],(&iStack_50)[4]);
    uVar21 = FUN_4a17295c(uVar21,0xffffffff);
    uVar21 = FUN_4a171bb8(uVar21,(&iStack_50)[8]);
    *(undefined4 *)(param_1 + 0x300) = uVar21;
    uVar21 = FUN_4a171fac(uVar25 - uVar20);
    uVar24 = FUN_4a171fac(uVar26 - uVar13);
    uVar21 = FUN_4a0d4b88(uVar24,uVar21);
    iVar5 = (&iStack_50)[6];
    uVar24 = FUN_4a171fac(uVar27 - uVar23);
    uVar15 = FUN_4a171fac(iVar5 - uVar22);
    uVar24 = FUN_4a0d4b88(uVar15,uVar24);
    uVar24 = FUN_4a1725c0(uVar21,uVar24);
    uVar21 = DAT_4a1253cc;
    uVar15 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x48c);
    uVar24 = FUN_4a17211c((&iStack_50)[8],uVar24);
    uVar21 = FUN_4a17211c(uVar24,uVar21);
    uVar21 = FUN_4a171a94(uVar21,uVar15);
    uVar13 = *(uint *)(param_1 + 0x1d8);
    if (uVar13 == 2) {
      uVar24 = 0x708;
    }
    else {
      uVar24 = 0x2ee;
    }
    uVar24 = FUN_4a172098(uVar24);
    uVar30 = 1 < uVar13;
    if (uVar13 == 2) {
      uVar15 = 800;
    }
    else {
      uVar15 = 200;
    }
    uVar15 = FUN_4a172098(uVar15);
    FUN_4a172458(uVar15,uVar21);
    if ((bool)uVar30) {
      uVar15 = uVar21;
    }
    FUN_4a1720a0(uVar24,uVar15);
    *(undefined4 *)(param_1 + 0x30c) = 700;
    return;
  case 10:
    *(undefined4 *)(param_1 + 0x310) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
    iVar5 = *(int *)(param_1 + 0x20);
    iVar12 = *(int *)(iVar5 + 0x368);
    if (iVar12 == 0) {
      puVar16 = (undefined4 *)0x0;
    }
    else {
      puVar16 = *(undefined4 **)(iVar12 + 8);
    }
    *puVar16 = 0;
    iVar5 = *(int *)(iVar5 + 0x368);
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iVar5 + 8);
    }
    *(undefined4 *)(iVar5 + 4) = 0;
    return;
  case 0xb:
    iVar12 = *(int *)(param_3 + 0xc);
    iVar5 = 0;
    if (iVar12 != 0) {
      iVar5 = *(int *)(iVar12 + 8);
    }
    if (*(int *)(iVar5 + 4) < 1) {
      *(undefined1 *)(param_1 + 0x278) = 0;
      return;
    }
    iVar5 = 0;
    if (iVar12 != 0) {
      iVar5 = *(int *)(iVar12 + 8);
    }
    uVar13 = *(uint *)(iVar5 + 4);
    if ((uVar13 & 0x1020) != 0) {
      if (*(char *)(param_1 + 0x278) == '\0') {
        cVar4 = '\x01' - *(byte *)(param_1 + 0x276);
        if (1 < *(byte *)(param_1 + 0x276)) {
          cVar4 = '\0';
        }
        *(char *)(param_1 + 0x276) = cVar4;
      }
      *(undefined1 *)(param_1 + 0x278) = 1;
      return;
    }
    bVar29 = (uVar13 & 0x8010) != 0;
    iVar5 = 0;
    uVar20 = (uint)bVar29;
    *(undefined1 *)(param_1 + 0x278) = 0;
    if ((!bVar29) && ((uVar13 & 0x10040) != 0)) {
      uVar20 = 0xffffffff;
    }
    bVar29 = (uVar13 & 0x2004) != 0;
    uVar22 = (uint)bVar29;
    if ((!bVar29) && ((uVar13 & 0x4100) != 0)) {
      uVar22 = 0xffffffff;
    }
    if (uVar20 == 0 && uVar22 == 0) {
      return;
    }
    if (*(char *)(param_1 + 0x276) != '\0') {
      FUN_4a16be24(&iStack_50 + 3,10);
      iVar14 = (&iStack_50)[6];
      iVar12 = iVar5;
      if (iVar14 != 0) {
        iVar12 = *(int *)(iVar14 + 8);
      }
      *(undefined4 *)(iVar12 + 4) = 0;
      iVar14 = (&iStack_50)[6];
      iVar12 = iVar5;
      if (iVar14 != 0) {
        iVar12 = *(int *)(iVar14 + 8);
      }
      *(undefined4 *)(iVar12 + 8) = 0;
      iVar14 = (&iStack_50)[6];
      iVar12 = iVar5;
      if (iVar14 != 0) {
        iVar12 = *(int *)(iVar14 + 8);
      }
      *(uint *)(iVar12 + 0x14) = uVar20 * 0x1e;
      iVar14 = (&iStack_50)[6];
      iVar12 = iVar5;
      if (iVar14 != 0) {
        iVar12 = *(int *)(iVar14 + 8);
      }
      *(uint *)(iVar12 + 0x18) = uVar22 * 0x3c;
      iVar12 = (&iStack_50)[6];
      if (iVar12 != 0) {
        iVar5 = *(int *)(iVar12 + 8);
      }
      *(undefined4 *)(iVar5 + 0x24) = 1;
      FUN_4a11f950(param_1,&iStack_50 + 3);
      FUN_4a16bef4(&iStack_50 + 3);
      return;
    }
    uVar30 = 1 < *(uint *)(param_1 + 0x1d8);
    if (*(uint *)(param_1 + 0x1d8) == 2) {
      uVar21 = 800;
      uVar24 = 0x708;
    }
    else {
      uVar24 = 0x2ee;
      uVar21 = 200;
    }
    uVar15 = FUN_4a171fac(uVar22);
    uVar15 = FUN_4a17211c(uVar15,0x40400000);
    uVar15 = FUN_4a17211c(uVar15,0x41f00000);
    uVar15 = FUN_4a1725c0(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x48c),uVar15);
    uVar24 = FUN_4a171fac(uVar24);
    FUN_4a1720a0(uVar24,uVar15);
    if ((bool)uVar30) {
      uVar24 = FUN_4a171fac(uVar21);
      FUN_4a172458(uVar24,uVar15);
      if (!(bool)uVar30) goto LAB_4a125398;
    }
    else {
LAB_4a125398:
      uVar15 = uVar24;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x48c) = uVar15;
    uVar13 = *(uint *)(param_1 + 0xa68) | 4;
    goto LAB_4a1253ac;
  }
  *(undefined4 *)(param_1 + 0x2f4) = 0;
code_r0x4a11e2a0:
  (&iStack_50)[0x13] = (&iStack_50)[0x13];
  (&iStack_50)[0x12] = (&iStack_50)[0x11];
  (&iStack_50)[0x11] = (&iStack_50)[0x10];
  (&iStack_50)[0x10] = (&iStack_50)[0xf];
  (&iStack_50)[0xf] = (&iStack_50)[0xe];
  (&iStack_50)[0xe] = (&iStack_50)[0xd];
  (&iStack_50)[0xd] = (&iStack_50)[0xc];
  (&iStack_50)[0xc] = (&iStack_50)[0xb];
  *(undefined4 *)(param_1 + 700) = 0;
                    /* WARNING: Could not recover jumptable at 0x4a11e2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)switchD_4a11e2d8::switchdataD_4a11e2e0)(0);
  return;
}



// Address: 4a1253d0

int FUN_4a1253d0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_38 [8];
  int local_30;
  int local_2c;
  
  iVar5 = *(int *)PTR_DAT_4a125494;
  iVar6 = 0;
  FUN_4a10ca70(auStack_38,param_1);
  iVar3 = 0;
  if (0 < local_30) {
    do {
      if (local_2c == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(local_2c + 8);
      }
      iVar4 = *(int *)(iVar1 + iVar3 * 4);
      iVar1 = FUN_4a1460d4(iVar4);
      if (iVar1 == param_2) {
        iVar1 = param_3 - *(int *)(iVar4 + 0x44);
        if (iVar1 <= -iVar1) {
          iVar1 = -iVar1;
        }
        iVar2 = param_4 - *(int *)(iVar4 + 0x4c);
        if (iVar2 <= -iVar2) {
          iVar2 = -iVar2;
        }
        if (iVar1 + iVar2 < iVar5) {
          iVar5 = iVar1 + iVar2;
          iVar6 = iVar4;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_30);
  }
  FUN_4a16a5f4(auStack_38);
  return iVar6;
}



// Address: 4a125930

/* WARNING: Removing unreachable block (ram,0x4a0ed0cc) */
/* WARNING: Removing unreachable block (ram,0x4a0ed0d4) */
/* WARNING: Removing unreachable block (ram,0x4a0ed0d8) */
/* WARNING: Removing unreachable block (ram,0x4a0ed0dc) */
/* WARNING: Removing unreachable block (ram,0x4a0eecb8) */
/* WARNING: Removing unreachable block (ram,0x4a0eecc0) */
/* WARNING: Removing unreachable block (ram,0x4a0eecc4) */
/* WARNING: Removing unreachable block (ram,0x4a0eecc8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a125930(int param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [8];
  
  iVar7 = FUN_4a0cb850(param_2,param_3,0x20);
  if (iVar7 == 0) {
    iVar7 = FUN_4a0cb850(param_2,param_3,0x80000000);
    if (iVar7 == 0) {
      return;
    }
    iVar7 = 0;
    if (*(int *)(param_3 + 0xc) != 0) {
      iVar7 = *(int *)(*(int *)(param_3 + 0xc) + 8);
    }
    if (*(int *)(param_1 + 0x69c) == 0x10) {
      iVar13 = FUN_4a144c98(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(iVar7 + 8));
      iVar8 = *(int *)(param_1 + 0x28);
      iVar10 = *(int *)(param_1 + 0x6a8);
      iVar12 = 0;
      bVar14 = iVar10 < 0;
      bVar15 = iVar10 == 0;
      iVar7 = iVar8;
      if (!bVar14) {
        iVar7 = *(int *)(iVar8 + 0x3d4);
        bVar15 = iVar7 == iVar10;
      }
      iVar4 = iVar7;
      if (bVar15 || (bVar14 || iVar7 < iVar10)) {
        iVar4 = 0;
      }
      if (!bVar15 && (!bVar14 && iVar10 <= iVar7)) {
        if (*(int *)(iVar8 + 0x3d8) != 0) {
          iVar12 = *(int *)(*(int *)(iVar8 + 0x3d8) + 8);
        }
        iVar4 = *(int *)(iVar12 + iVar10 * 4);
      }
      if (*(int *)(iVar4 + 0x20) != iVar13) {
        iVar7 = FUN_4a0ff494();
        iVar10 = *(int *)(iVar7 + 0x520);
        iVar7 = *(int *)(iVar10 + 0x108);
        iVar12 = 0;
        if (iVar7 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(iVar7 + 8);
        }
        iVar7 = iVar7 + *(int *)(iVar4 + 0x20) * 0x14;
        puVar3 = (undefined4 *)FUN_4a0c6bc0(auStack_34);
        puVar1 = PTR_PTR_4a0b9108;
        *puVar3 = PTR_PTR_4a0b9108;
        puVar3[2] = *(undefined4 *)(iVar7 + 8);
        piVar9 = *(int **)(iVar7 + 0xc);
        puVar3[3] = piVar9;
        if (piVar9 != (int *)0x0) {
          (**(code **)(*piVar9 + 0xc))();
        }
        puVar2 = PTR_PTR_4a0b910c;
        *puVar3 = PTR_PTR_4a0b910c;
        iVar7 = *(int *)(iVar10 + 0x108);
        if (iVar7 != 0) {
          iVar12 = *(int *)(iVar7 + 8);
        }
        iVar12 = iVar12 + iVar13 * 0x14;
        puVar3 = (undefined4 *)FUN_4a0c6bc0(auStack_48);
        *puVar3 = puVar1;
        puVar3[2] = *(undefined4 *)(iVar12 + 8);
        piVar9 = *(int **)(iVar12 + 0xc);
        puVar3[3] = piVar9;
        if (piVar9 != (int *)0x0) {
          (**(code **)(*piVar9 + 0xc))();
        }
        *puVar3 = puVar2;
        FUN_4a103bd8(*(undefined4 *)(iVar4 + 0x40),auStack_34,auStack_48,0x18);
        *(int *)(iVar4 + 0x20) = iVar13;
        FUN_4a16bef4(auStack_48);
        FUN_4a16bef4(auStack_34);
        return;
      }
      return;
    }
    if (*(int *)(param_1 + 0x69c) != 0x11) {
      return;
    }
    iVar13 = FUN_4a1449a4(*(undefined4 *)(param_1 + 0x28));
    iVar8 = *(int *)(param_1 + 0x28);
    iVar10 = *(int *)(param_1 + 0x6a8);
    iVar12 = 0;
    bVar14 = iVar10 < 0;
    bVar15 = iVar10 == 0;
    iVar7 = iVar8;
    if (!bVar14) {
      iVar7 = *(int *)(iVar8 + 0x3d4);
      bVar15 = iVar7 == iVar10;
    }
    iVar4 = iVar7;
    if (bVar15 || (bVar14 || iVar7 < iVar10)) {
      iVar4 = 0;
    }
    if (!bVar15 && (!bVar14 && iVar10 <= iVar7)) {
      if (*(int *)(iVar8 + 0x3d8) != 0) {
        iVar12 = *(int *)(*(int *)(iVar8 + 0x3d8) + 8);
      }
      iVar4 = *(int *)(iVar12 + iVar10 * 4);
    }
    if (*(int *)(iVar4 + 0x24) != iVar13) {
      iVar7 = FUN_4a0ff494();
      uVar11 = *(undefined4 *)(iVar7 + 0x520);
      FUN_4a143f18(auStack_28,uVar11,*(undefined4 *)(iVar4 + 0x24));
      FUN_4a143f18(auStack_3c,uVar11,iVar13);
      iVar7 = 0;
      do {
        FUN_4a103bd8(*(undefined4 *)(iVar4 + 0x40),auStack_28,auStack_3c,iVar7 * 6);
        FUN_4a103bd8(*(undefined4 *)(iVar4 + 0x40),auStack_28,auStack_3c,iVar7 * 6 + 2);
        iVar7 = iVar7 + 1;
      } while (iVar7 < 4);
      *(int *)(iVar4 + 0x24) = iVar13;
      FUN_4a16bef4(auStack_3c);
      FUN_4a16bef4(auStack_28);
      return;
    }
    return;
  }
  uVar11 = 0xffffffff;
  iVar10 = 0;
  iVar13 = -1;
  iVar12 = -1;
  iVar7 = -1;
  if (*(int *)(param_1 + 0x69c) == 0x10) {
    uVar11 = 10;
    iVar10 = 0x32;
    iVar13 = FUN_4a0f590c(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x6ac));
    iVar12 = 0x15;
    iVar7 = 0x13;
  }
  else if (*(int *)(param_1 + 0x69c) == 0x11) {
    uVar11 = 0xb;
    iVar10 = 0x32;
    iVar13 = FUN_4a0f49cc(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x6ac));
    iVar12 = 0x16;
    iVar7 = 0x14;
  }
  iVar8 = FUN_4a0cf540(param_1,uVar11);
  if (*(int *)(iVar8 + 0xa4) == iVar13) {
    iVar7 = 0xf;
  }
  else {
    iVar13 = FUN_4a141aa4(*(undefined4 *)(param_1 + 0x24));
    if (iVar13 < iVar10) {
      iVar7 = iVar12;
    }
  }
  if (*(int *)(param_1 + 0x69c) == 0xe && iVar7 == 0xd) {
    FUN_4a0941ec();
    FUN_4a094c64();
  }
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  uVar11 = *(undefined4 *)(param_1 + 0x28);
  switch(iVar7) {
  case 0:
    FUN_4a1161d0(param_1,6);
    goto LAB_4a1228a8;
  case 1:
    *(undefined4 *)(param_1 + 0x2b8) = 4;
    if ((*(int *)(param_1 + 0x2b4) == 0) ||
       (iVar13 = FUN_4a146b58(*(int *)(param_1 + 0x2b4),4), iVar13 == 0)) {
      *(undefined4 *)(param_1 + 0x2b4) = 0;
      FUN_4a115d8c(param_1,0);
    }
    goto LAB_4a1228a8;
  case 2:
    iVar13 = *(int *)(param_1 + 0x69c);
    if ((((iVar13 == 7 || iVar13 == 3) || iVar13 == 8) || iVar13 == 4) || iVar13 == 6) break;
    uVar11 = FUN_4a0cf540(param_1,8);
    uVar5 = 0xffffffff;
    goto LAB_4a122a60;
  case 3:
    FUN_4a0cd7c0(param_1,0xb2d);
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x2b4) = 0;
    FUN_4a115d8c(param_1,0);
    *(undefined4 *)(param_1 + 0x2b8) = 8;
    if (*(int *)(param_1 + 0x2b4) != 0) {
      iVar13 = FUN_4a146b58(*(int *)(param_1 + 0x2b4),8);
joined_r0x4a1228f0:
      if (iVar13 != 0) break;
    }
    goto LAB_4a1228f4;
  case 5:
    iVar13 = FUN_4a143ac8(uVar11,*(undefined4 *)(param_1 + 0x6a0));
    FUN_4a0ce964(param_1,0xb30,*(undefined4 *)(iVar13 + 0xc));
    break;
  case 7:
    FUN_4a143ac8(uVar11,*(undefined4 *)(param_1 + 0x6a0));
    goto LAB_4a122ac0;
  case 8:
    iVar13 = FUN_4a143ac8(uVar11,*(undefined4 *)(param_1 + 0x6a0));
    FUN_4a0cd7c0(param_1,0xb2f,*(undefined4 *)(iVar13 + 0xc));
    break;
  case 9:
    uVar11 = FUN_4a1460f8(*(undefined4 *)(param_1 + 0x6a4));
    FUN_4a0ce964(param_1,0xb31,uVar11);
    break;
  case 10:
    FUN_4a0ce964(param_1,0xb44);
    break;
  case 0xb:
    FUN_4a0ce9a4(param_1,0xb45);
    break;
  case 0xc:
    *(undefined4 *)(param_1 + 0x6a0) = *(undefined4 *)(*(int *)(param_1 + 0x6a4) + 0x28);
    FUN_4a106a9c(*(int *)(param_1 + 0x6a4),0);
    FUN_4a108d64(*(undefined4 *)(param_1 + 0x6a4));
    FUN_4a0f21b4(uVar11,*(undefined4 *)(param_1 + 0x6a0),0);
    *(undefined4 *)(param_1 + 0x2b8) = 8;
    if ((*(int *)(param_1 + 0x2b4) != 0) &&
       (iVar13 = FUN_4a146b58(*(int *)(param_1 + 0x2b4),8), iVar13 != 0)) break;
LAB_4a1228a8:
    *(undefined4 *)(param_1 + 0x2b4) = 0;
    FUN_4a115d8c(param_1,0);
    break;
  case 0xe:
    if (*(int *)(param_1 + 0x69c) != 2) {
      uVar11 = thunk_FUN_4a161570(0x14);
      uVar11 = FUN_4a0c707c(uVar11,s_build_mode_4a122a44);
      uVar5 = FUN_4a0941ec();
      FUN_4a094aa4(uVar5,uVar11);
    }
    break;
  case 0xf:
    *(undefined4 *)(param_1 + 0x2b4) = 0;
    FUN_4a115d8c(param_1,0);
    *(undefined4 *)(param_1 + 0x2b8) = 0;
    if (*(int *)(param_1 + 0x2b4) != 0) {
      iVar13 = FUN_4a146b58(*(int *)(param_1 + 0x2b4),0);
      goto joined_r0x4a1228f0;
    }
LAB_4a1228f4:
    *(undefined4 *)(param_1 + 0x2b4) = 0;
    FUN_4a115d8c(param_1,0);
    break;
  case 0x10:
  case 0x11:
    iVar10 = FUN_4a0f7058(uVar11,*(undefined4 *)(param_1 + 0x6a8));
    iVar12 = *(int *)(iVar10 + 0x14);
    iVar13 = *(int *)(iVar10 + 0x1c);
    FUN_4a1457cc(uVar11,*(int *)(iVar10 + 0x10) + (*(int *)(iVar10 + 0x18) >> 1));
    uVar5 = FUN_4a171fac();
    puVar1 = PTR_DAT_4a122a50;
    uVar5 = FUN_4a17211c(uVar5,*(undefined4 *)PTR_DAT_4a122a50);
    FUN_4a1457d8(uVar11,iVar12 + (iVar13 >> 1));
    uVar11 = FUN_4a171fac();
    uVar11 = FUN_4a17211c(uVar11,*(undefined4 *)puVar1);
    iVar13 = *(int *)(iVar10 + 0x18);
    if (*(int *)(iVar10 + 0x18) <= *(int *)(iVar10 + 0x1c)) {
      iVar13 = *(int *)(iVar10 + 0x1c);
    }
    uVar6 = FUN_4a171fac(iVar13);
    uVar6 = FUN_4a17211c(uVar6,0x41f00000);
    uVar6 = FUN_4a171a94(uVar6,0x43960000);
    uVar6 = FUN_4a0d4b38(uVar6,0x43480000,0x443b8000);
    *(undefined4 *)(param_1 + 0x2c0) = uVar5;
    iVar13 = *(int *)(param_1 + 0x28);
    uVar5 = *(undefined4 *)(iVar13 + 0x474);
    *(undefined4 *)(param_1 + 0x2d4) = uVar6;
    *(undefined4 *)(param_1 + 0x2c4) = uVar5;
    *(undefined4 *)(param_1 + 0x2c8) = uVar11;
    *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(iVar13 + 0x484);
    *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(iVar13 + 0x488);
    *(undefined4 *)(param_1 + 0x2f4) = 0;
    *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(iVar13 + 0x470);
    *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(iVar13 + 0x474);
    *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(iVar13 + 0x478);
    *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(iVar13 + 0x48c);
    *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(iVar13 + 0x484);
    *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(iVar13 + 0x488);
    FUN_4a11e2a0(param_1,4);
    if (iVar7 == 0x10) {
      uVar11 = 10;
    }
    else {
      uVar11 = 0xb;
    }
    uVar11 = FUN_4a0cf540(param_1,uVar11);
    if (iVar7 == 0x10) {
      uVar5 = FUN_4a0f590c();
    }
    else {
      uVar5 = FUN_4a0f49cc(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x6ac));
    }
LAB_4a122a60:
    FUN_4a0d297c(uVar11,uVar5);
    break;
  case 0x12:
    FUN_4a115d8c(param_1,*(undefined4 *)(param_1 + 0x6a4));
    break;
  case 0x13:
    FUN_4a0ce964(param_1,0xc22);
    break;
  case 0x14:
    FUN_4a0ce964(param_1,0xc4b);
    break;
  case 0x15:
  case 0x16:
LAB_4a122ac0:
    FUN_4a0cd7c0(param_1,0xb2e);
  }
  *(int *)(param_1 + 0x69c) = iVar7;
  return;
}



// Address: 4a125aa0

/* WARNING: Removing unreachable block (ram,0x4a122634) */
/* WARNING: Removing unreachable block (ram,0x4a122650) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a125aa0(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  iVar4 = *(int *)(param_1 + 0x2b4);
  if (iVar4 == 0) {
    return;
  }
  uVar6 = *(undefined4 *)(iVar4 + 0x50);
  if (*(int *)(iVar4 + 0x28) == 0xf) {
    iVar4 = *(int *)(iVar4 + 0x60);
  }
  uVar7 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = FUN_4a0f953c(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x6a0),
                       *(undefined4 *)(iVar4 + 0x44),*(undefined4 *)(iVar4 + 0x4c));
  FUN_4a0cf554(param_1,0x40);
  uStack_34 = uVar6;
  uStack_30 = uVar2;
  iVar4 = FUN_4a10ea38(param_1,*(undefined4 *)(param_1 + 0x6a0),*(undefined4 *)(iVar4 + 0x44),
                       *(undefined4 *)(iVar4 + 0x48));
  FUN_4a10ca70(&uStack_34,param_1);
  iVar5 = 0;
  if (0 < iStack_2c) {
    do {
      if (iStack_28 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iStack_28 + 8);
      }
      uVar6 = *(undefined4 *)(iVar3 + iVar5 * 4);
      iVar3 = FUN_4a146b58(uVar6,8);
      if (iVar3 != 0) {
        FUN_4a109858(uVar6);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iStack_2c);
  }
  FUN_4a16a5f4(&uStack_34);
  *(int *)(param_1 + 0x2b4) = iVar4;
  FUN_4a115d8c(param_1,iVar4);
  FUN_4a0dd3b8(uVar7,*(undefined4 *)(param_1 + 0x6a0));
  if (param_2 == 0) {
    iVar5 = FUN_4a143ac8(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x6a0));
    sVar1 = *(short *)(iVar5 + 0x1a);
    FUN_4a0d585c(uVar7);
    uStack_34 = 3;
    uStack_30 = 0xffffffff;
    iVar4 = FUN_4a10ea38(param_1,0xb,
                         *(int *)(iVar4 + 0x44) - ((*(char *)(iVar4 + 0x54) + -1) * 0x200000 >> 1),0
                        );
    if (iVar4 != 0) {
      FUN_4a107248(iVar4,-(int)sVar1);
    }
    *(undefined4 *)(param_1 + 0x1c4) = 0;
                    /* WARNING: Could not recover jumptable at 0x4a12264c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_caseD_6_4a12266c)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a125bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a125c38

/* WARNING: Removing unreachable block (ram,0x4a122634) */
/* WARNING: Removing unreachable block (ram,0x4a122650) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_4a125c38(int param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  
  iVar3 = FUN_4a0cb850(param_2,param_3,0x20);
  if (iVar3 == 0) {
    iVar3 = FUN_4a0cb850(param_2,param_3,0x42);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x1c4) = 0;
                    /* WARNING: Could not recover jumptable at 0x4a12264c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)PTR_caseD_1_4a122658)();
      return uVar2;
    }
    return 0;
  }
  iVar7 = *(int *)(param_1 + 0x6a4);
  switchD_4a11cc8c::default(iVar7 != 0,PTR_s_Can_t_sell_null_object_4a125d6c);
  uVar8 = *(undefined4 *)(iVar7 + 0x28);
  uVar4 = FUN_4a146a9c(iVar7);
  FUN_4a0ee9f8(*(undefined4 *)(param_1 + 0x28),uVar4);
  FUN_4a119f8c(param_1,iVar7);
  iVar3 = FUN_4a143ac8(*(undefined4 *)(param_1 + 0x28),uVar8);
  sVar1 = *(short *)(iVar3 + 0x1c);
  FUN_4a0d585c(*(undefined4 *)(param_1 + 0x24),(int)sVar1);
  iVar3 = FUN_4a10ea38(param_1,0xb,
                       *(int *)(iVar7 + 0x44) - ((*(char *)(iVar7 + 0x54) + -1) * 0x200000 >> 1));
  if (iVar3 != 0) {
    FUN_4a107248(iVar3,(int)sVar1);
  }
  FUN_4a109858(iVar7);
  FUN_4a122618(param_1,1);
  iVar7 = *(int *)(*(int *)(param_1 + 0x20) + 0x260);
  iVar3 = FUN_4a085614(iVar7);
  if (iVar3 != 0) {
    FUN_4a0866c0(iVar7,0x53);
  }
  if (*(int *)(iVar7 + 0x74) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(iVar7 + 0x74) + 8);
  }
  iVar7 = 0;
  if (0 < *(int *)(iVar3 + 0x684)) {
    do {
      if (*(int *)(iVar3 + 0x688) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(iVar3 + 0x688) + 8);
      }
      piVar6 = *(int **)(iVar5 + iVar7 * 4);
      if (piVar6[1] != 400) {
        (**(code **)(*piVar6 + 0x28))(piVar6);
        (**(code **)(*piVar6 + 0x30))(piVar6,0);
        (**(code **)(*piVar6 + 0x3c))(piVar6);
        return iVar7 << 0x10 | 0x53;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(iVar3 + 0x684));
  }
  return 0xffffffff;
}



// Address: 4a125d70

undefined4 FUN_4a125d70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int local_5c;
  int local_58;
  undefined4 local_50;
  int local_4c;
  undefined1 auStack_48 [12];
  int local_3c;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  FUN_4a16bdcc(auStack_48,param_1 + 0x1ac);
  puVar8 = (undefined4 *)0x0;
  local_4c = FUN_4a1465cc(local_2c);
  iVar9 = 0;
LAB_4a125d9c:
  do {
    uVar1 = FUN_4a16bdcc(&uStack_60,auStack_48);
    FUN_4a14637c(local_2c,uVar1,iVar9);
    FUN_4a16bef4(&uStack_60);
    iVar9 = iVar9 + 1;
    if (local_4c <= iVar9) {
LAB_4a125ee4:
      if (local_3c != 0) {
        iVar9 = *(int *)(local_3c + 8);
      }
      else {
        iVar9 = 0;
      }
      if (local_3c != 0) {
        puVar8 = *(undefined4 **)(local_3c + 8);
      }
      uStack_64 = 0;
      uStack_60 = local_28;
      uVar1 = FUN_4a10ea38(param_1,local_30,*puVar8,0,*(undefined4 *)(iVar9 + 4));
      FUN_4a16bef4(auStack_48);
      return uVar1;
    }
    if (local_3c != 0) {
      iVar2 = *(int *)(local_3c + 8);
    }
    else {
      iVar2 = 0;
    }
    if (local_3c != 0) {
      puVar3 = *(undefined4 **)(local_3c + 8);
    }
    else {
      puVar3 = (undefined4 *)0x0;
    }
    iVar2 = FUN_4a144a5c(*(undefined4 *)(param_1 + 0x28),*puVar3,*(undefined4 *)(iVar2 + 4));
    if (iVar2 != 0) goto LAB_4a125ee4;
  } while (local_4c < 2);
  if (local_3c != 0) {
    puVar3 = *(undefined4 **)(local_3c + 8);
  }
  else {
    puVar3 = (undefined4 *)0x0;
  }
  if (local_3c != 0) {
    iVar2 = *(int *)(local_3c + 8);
  }
  else {
    iVar2 = 0;
  }
  uVar1 = *(undefined4 *)(iVar2 + 4);
  local_50 = *(undefined4 *)(param_1 + 0x28);
  iVar2 = FUN_4a144cb0(local_50,*puVar3);
  iVar4 = FUN_4a144cb8(local_50,uVar1);
  FUN_4a10ca70(&uStack_64,param_1);
  iVar6 = 0;
  if (0 < local_5c) {
    do {
      if (local_58 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(local_58 + 8);
      }
      iVar7 = *(int *)(iVar5 + iVar6 * 4);
      iVar5 = FUN_4a146b58(iVar7,0x2000);
      if (iVar5 != 0) {
        iVar5 = FUN_4a144cb0(local_50,*(undefined4 *)(iVar7 + 0x44));
        iVar7 = FUN_4a144cb8(local_50,*(undefined4 *)(iVar7 + 0x4c));
        if (iVar5 == iVar2 && iVar7 == iVar4) goto code_r0x4a125ec0;
      }
      iVar6 = iVar6 + 1;
      if (local_5c <= iVar6) break;
    } while( true );
  }
  FUN_4a16a5f4(&uStack_64);
  goto LAB_4a125ee4;
code_r0x4a125ec0:
  FUN_4a16a5f4(&uStack_64);
  goto LAB_4a125d9c;
}



// Address: 4a125f40

/* WARNING: Removing unreachable block (ram,0x4a122634) */
/* WARNING: Removing unreachable block (ram,0x4a122650) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a125f40(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_4a0cb850(param_2,param_3,0x20);
  if (iVar1 == 0) {
    iVar1 = FUN_4a0cb850(param_2,param_3,0x44);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x69c);
    if (iVar1 == 0x13) {
LAB_4a1260a0:
      FUN_4a0eec9c(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x6a8),
                   *(undefined4 *)(param_1 + 0x6ac),0);
    }
    else {
      if (iVar1 != 0x14) {
        if (iVar1 == 0x15) goto LAB_4a1260a0;
        if (iVar1 != 0x16) goto FUN_4a122618;
      }
      FUN_4a0ed0b0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x6a8),
                   *(undefined4 *)(param_1 + 0x6ac),0);
    }
    goto FUN_4a122618;
  }
  iVar1 = 0;
  if (*(int *)(param_1 + 0x69c) == 0x13) {
    iVar1 = FUN_4a0cf540(param_1,10);
    uVar2 = FUN_4a144c98(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(iVar1 + 0xa4));
    FUN_4a0eec9c(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x6a8),uVar2,1);
LAB_4a125fb4:
    iVar1 = 0x32;
  }
  else if (*(int *)(param_1 + 0x69c) == 0x14) {
    iVar1 = FUN_4a0cf540(param_1,0xb);
    uVar2 = FUN_4a1449a4(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(iVar1 + 0xa4));
    FUN_4a0ed0b0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x6a8),uVar2,1);
    goto LAB_4a125fb4;
  }
  FUN_4a0d585c(*(undefined4 *)(param_1 + 0x24));
  iVar3 = FUN_4a10ea38(param_1,0xb,*(undefined4 *)(param_1 + 0x6b0),0);
  if (iVar3 != 0) {
    FUN_4a107248(iVar3,-iVar1);
  }
FUN_4a122618:
  *(undefined4 *)(param_1 + 0x1c4) = 0;
                    /* WARNING: Could not recover jumptable at 0x4a12264c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_caseD_f_4a122690)();
  return;
}



// Address: 4a1260b8

void FUN_4a1260b8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_50 [8];
  int local_48;
  int local_44;
  undefined1 auStack_3c [20];
  undefined1 auStack_28 [20];
  
  FUN_4a0ff3fc(s_SceneGame__ending_4a126474);
  FUN_4a10ca70(auStack_50,param_1);
  iVar3 = 0;
  if (0 < local_48) {
    do {
      if (local_44 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(local_44 + 8);
      }
      FUN_4a10f484(param_1,*(undefined4 *)(iVar1 + iVar3 * 4));
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_48);
  }
  FUN_4a10ca70(auStack_28,param_1);
  FUN_4a16a5f4(auStack_28);
  FUN_4a110aac(auStack_3c,param_1);
  FUN_4a169a1c(auStack_3c);
  piVar4 = *(int **)(param_1 + 0x6b8);
  if ((piVar4 != (int *)0x0) && (iVar3 = (**(code **)(*piVar4 + 8))(piVar4), iVar3 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  *(undefined4 *)(param_1 + 0x6b8) = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x5d8)) {
    do {
      if (*(int *)(param_1 + 0x5dc) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0x5dc) + 8);
      }
      piVar4 = *(int **)(iVar1 + iVar3 * 4);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)(*(int *)(*piVar4 + -0xc) + (int)piVar4);
      }
      if ((piVar4 != (int *)0x0) && (iVar1 = (**(code **)(*piVar4 + 8))(piVar4), iVar1 != 0)) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      if (*(int *)(param_1 + 0x5dc) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0x5dc) + 8);
      }
      *(undefined4 *)(iVar1 + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x5d8));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x5ec)) {
    do {
      if (*(int *)(param_1 + 0x5f0) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0x5f0) + 8);
      }
      piVar4 = *(int **)(iVar1 + iVar3 * 4);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)(*(int *)(*piVar4 + -0xc) + (int)piVar4);
      }
      if ((piVar4 != (int *)0x0) && (iVar1 = (**(code **)(*piVar4 + 8))(piVar4), iVar1 != 0)) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      if (*(int *)(param_1 + 0x5f0) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0x5f0) + 8);
      }
      *(undefined4 *)(iVar1 + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x5ec));
  }
  FUN_4a16d53c(param_1 + 0x600);
  FUN_4a16d53c(param_1 + 0x618);
  *(undefined1 *)(param_1 + 0x630) = 1;
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_4a0f6d2c();
  }
  FUN_4a0ff3fc(s_SceneGame_end__unloaded_SimWorld_4a126488);
  uVar2 = 0x3f8;
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x460) == 2) {
    uVar2 = 0x3f0;
  }
  FUN_4a0fcc1c(*(int *)(param_1 + 0x20),uVar2,0xffffffff);
  piVar4 = *(int **)(param_1 + 0x27c);
  if (piVar4 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar4 + 8))(piVar4);
    if (iVar3 != 0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *(undefined4 *)(param_1 + 0x27c) = 0;
  }
  piVar4 = *(int **)(param_1 + 0x280);
  if (piVar4 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar4 + 8))(piVar4);
    if (iVar3 != 0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *(undefined4 *)(param_1 + 0x280) = 0;
  }
  if (*(int *)PTR_DAT_4a1264ac != 0) {
    piVar4 = *(int **)(param_1 + 0x284);
    if (piVar4 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar4 + 8))(piVar4);
      if (iVar3 != 0) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      *(undefined4 *)(param_1 + 0x284) = 0;
    }
    piVar4 = *(int **)(param_1 + 0x288);
    if (piVar4 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar4 + 8))(piVar4);
      if (iVar3 != 0) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      *(undefined4 *)(param_1 + 0x288) = 0;
    }
    piVar4 = *(int **)(param_1 + 0x28c);
    if (piVar4 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar4 + 8))(piVar4);
      if (iVar3 != 0) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      *(undefined4 *)(param_1 + 0x28c) = 0;
    }
  }
  FUN_4a0ff3fc(s_SceneGame_end__unloaded_images_4a1264b0);
  FUN_4a0fca00(*(undefined4 *)(param_1 + 0x20));
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x260);
  FUN_4a111294(param_1);
  FUN_4a128078(param_1);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x758)) {
    do {
      if (*(int *)(param_1 + 0x75c) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0x75c) + 8);
      }
      FUN_4a085310(uVar2,(int)*(short *)(iVar1 + iVar3 * 2));
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x758));
  }
  FUN_4a0ff3fc(s_SceneGame_end__unloaded_sounds_4a126538);
  FUN_4a0941ec();
  FUN_4a094040();
  FUN_4a0ff3fc(s_SceneGame__ended_4a126558);
  FUN_4a16a5f4(auStack_50);
  return;
}



// Address: 4a126594

char * FUN_4a126594(int param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  bool bVar13;
  undefined1 auStack_90 [16];
  undefined4 local_80;
  undefined *local_7c [2];
  int local_74;
  int *local_70;
  undefined *local_68 [2];
  int local_60;
  undefined1 auStack_54 [20];
  int *local_40;
  undefined1 auStack_3c [20];
  undefined4 local_28;
  
  iVar11 = *(int *)(param_1 + 0x20);
  local_28 = *(undefined4 *)(iVar11 + 0x51c);
  FUN_4a0ff3fc(s_SceneGame__starting_4a126990);
  FUN_4a037774(0);
  FUN_4a0cefc0(param_1);
  FUN_4a0e3904(local_28);
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  *(undefined1 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  uVar5 = FUN_4a13ca78(iVar11);
  *(undefined4 *)(param_1 + 0x1e8) = uVar5;
  iVar6 = FUN_4a13caa0(iVar11);
  iVar11 = DAT_4a1269a4;
  *(int *)(param_1 + 0x1ec) = iVar6;
  lVar2 = (longlong)iVar11 * (longlong)iVar6;
  *(short *)(param_1 + 0x1f0) = (short)(int)(lVar2 >> 0x23) - (short)(lVar2 >> 0x3f);
  *(undefined1 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  uVar5 = FUN_4a141aa4(local_28,0x1f0,(int)lVar2);
  *(undefined4 *)(param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x290) = 0;
  *(undefined4 *)(param_1 + 0x2a0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x294) = 0;
  *(undefined4 *)(param_1 + 0x2a4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2b4) = 0;
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 700) = 0;
  *(undefined4 *)(param_1 + 0x2c4) = 0x42000000;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x2cc) = 0x42340000;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 0x42340000;
  *(undefined4 *)(param_1 + 0x2d4) = 0x43960000;
  *(undefined1 *)(param_1 + 0x2d8) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 0x42000000;
  *(undefined4 *)(param_1 + 0x2dc) = 0;
  *(undefined4 *)(param_1 + 0x2e8) = 0x42340000;
  *(undefined4 *)(param_1 + 0x2e4) = 0;
  *(undefined4 *)(param_1 + 0x2ec) = 0x42340000;
  *(undefined4 *)(param_1 + 0x2f0) = 0x43960000;
  *(undefined4 *)(param_1 + 0x2f4) = 0;
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  *(undefined4 *)(param_1 + 0x2fc) = 0;
  *(undefined4 *)(param_1 + 0x300) = 0;
  *(undefined4 *)(param_1 + 0x304) = 0;
  *(undefined4 *)(param_1 + 0x308) = 0;
  *(undefined4 *)(param_1 + 0x30c) = 0;
  *(undefined4 *)(param_1 + 0x310) = 0;
  if (*(int *)(*(int *)(param_1 + 0x28) + 0x410) == 0) {
    iVar11 = FUN_4a16a524(local_68,0);
    uVar5 = *(undefined4 *)(iVar11 + 8);
    piVar12 = *(int **)(iVar11 + 0xc);
    if (piVar12 != (int *)0x0) {
      (**(code **)(*piVar12 + 0xc))(piVar12);
    }
    (**(code **)(*(int *)(param_1 + 0x5d0) + 0x1c))((int *)(param_1 + 0x5d0));
    *(undefined4 *)(param_1 + 0x5d8) = uVar5;
    *(int **)(param_1 + 0x5dc) = piVar12;
    FUN_4a16a5f4(local_68);
    iVar11 = FUN_4a16994c(local_7c,0);
    uVar5 = *(undefined4 *)(iVar11 + 8);
    piVar12 = *(int **)(iVar11 + 0xc);
    if (piVar12 != (int *)0x0) {
      (**(code **)(*piVar12 + 0xc))(piVar12);
    }
    (**(code **)(*(int *)(param_1 + 0x5e4) + 0x1c))((int *)(param_1 + 0x5e4));
    *(undefined4 *)(param_1 + 0x5ec) = uVar5;
    *(int **)(param_1 + 0x5f0) = piVar12;
    FUN_4a169a1c(local_7c);
    *(undefined4 *)(param_1 + 0x5f8) = 0;
    *(undefined4 *)(param_1 + 0x5fc) = 0;
    FUN_4a16d53c(param_1 + 0x600);
    FUN_4a16d53c(param_1 + 0x618);
  }
  *(undefined1 *)(param_1 + 0x630) = 1;
  *(undefined1 *)(param_1 + 0x631) = 1;
  *(undefined1 *)(param_1 + 0x632) = 0;
  *(undefined1 *)(param_1 + 0x633) = 0;
  *(undefined2 *)(param_1 + 0x634) = 0;
  if (*(int *)(param_1 + 0x644) == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(*(int *)(param_1 + 0x644) + 8);
  }
  if (iVar11 == 0) {
    iVar11 = FUN_4a16be24(local_68,0x37);
    uVar5 = *(undefined4 *)(iVar11 + 8);
    piVar12 = *(int **)(iVar11 + 0xc);
    if (piVar12 != (int *)0x0) {
      (**(code **)(*piVar12 + 0xc))(piVar12);
    }
    (**(code **)(*(int *)(param_1 + 0x638) + 0x1c))((int *)(param_1 + 0x638));
    *(undefined4 *)(param_1 + 0x640) = uVar5;
    *(int **)(param_1 + 0x644) = piVar12;
    FUN_4a16bef4(local_68);
    iVar11 = FUN_4a16be24(local_68,0x37);
    uVar5 = *(undefined4 *)(iVar11 + 8);
    piVar12 = *(int **)(iVar11 + 0xc);
    if (piVar12 != (int *)0x0) {
      (**(code **)(*piVar12 + 0xc))(piVar12);
    }
    (**(code **)(*(int *)(param_1 + 0x64c) + 0x1c))((int *)(param_1 + 0x64c));
    *(undefined4 *)(param_1 + 0x654) = uVar5;
    *(int **)(param_1 + 0x658) = piVar12;
    FUN_4a16bef4(local_68);
    iVar11 = FUN_4a16be24(local_68,0x37);
    uVar5 = *(undefined4 *)(iVar11 + 8);
    piVar12 = *(int **)(iVar11 + 0xc);
    if (piVar12 != (int *)0x0) {
      (**(code **)(*piVar12 + 0xc))(piVar12);
    }
    (**(code **)(*(int *)(param_1 + 0x660) + 0x1c))((int *)(param_1 + 0x660));
    *(undefined4 *)(param_1 + 0x668) = uVar5;
    *(int **)(param_1 + 0x66c) = piVar12;
    FUN_4a16bef4(local_68);
  }
  *(undefined4 *)(param_1 + 0x674) = 0;
  if (*(int *)(param_1 + 0x678) == 0) {
    thunk_FUN_4a161570(0xb4);
    uVar5 = FUN_4a091604();
    *(undefined4 *)(param_1 + 0x678) = uVar5;
    FUN_4a0cb72c(param_1,uVar5);
  }
  *(undefined1 *)(param_1 + 0x67c) = 0;
  *(undefined1 *)(param_1 + 0x67d) = 0;
  if (*(int *)(param_1 + 0x68c) == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(*(int *)(param_1 + 0x68c) + 8);
  }
  if (iVar11 == 0) {
    FUN_4a16be24(local_7c,0xf);
    uVar5 = FUN_4a16bdcc(local_68,local_7c);
    FUN_4a0ff4b8(uVar5,0x82c);
    FUN_4a16bef4(local_68);
    uVar5 = FUN_4a16bdcc(local_68,local_7c);
    FUN_4a0fc4b0(uVar5,0x826);
    FUN_4a16bef4(local_68);
    uVar5 = FUN_4a16bdcc(local_68,local_7c);
    FUN_4a0fc4b0(uVar5,0x827);
    FUN_4a16bef4(local_68);
    uVar7 = *(uint *)(param_1 + 0x20);
    if (*(int *)(uVar7 + 0x38) == 0) {
      bVar13 = *(int *)(uVar7 + 0x44) != 0;
      cVar1 = '\0';
      if (bVar13) {
        cVar1 = *(char *)(uVar7 + 0x48);
      }
      if (bVar13 && cVar1 != '\0') goto LAB_4a1269ec;
      bVar13 = *(int *)(uVar7 + 0x3c) != 0;
      if (bVar13) {
        uVar7 = (uint)*(byte *)(uVar7 + 0x40);
      }
      if (bVar13 && uVar7 != 0) goto LAB_4a1269ec;
      uVar5 = FUN_4a16bdcc(auStack_90,local_7c);
      FUN_4a0fc4b0(uVar5,0x82f);
      FUN_4a16bef4(auStack_90);
      uVar5 = FUN_4a16bdcc(auStack_90,local_7c);
      FUN_4a0fc4b0(uVar5,0x831);
      FUN_4a16bef4(auStack_90);
    }
    else {
LAB_4a1269ec:
      uVar5 = FUN_4a16bdcc(auStack_90,local_7c);
      FUN_4a0fc4b0(uVar5,0xcd1);
      FUN_4a16bef4(auStack_90);
    }
    iVar11 = local_74;
    if (local_70 != (int *)0x0) {
      (**(code **)(*local_70 + 0xc))(local_70);
    }
    (**(code **)(*(int *)(param_1 + 0x680) + 0x1c))((int *)(param_1 + 0x680));
    *(int *)(param_1 + 0x688) = iVar11;
    *(int **)(param_1 + 0x68c) = local_70;
    FUN_4a16bef4(local_7c);
  }
  *(undefined4 *)(param_1 + 0x694) = 0;
  if (*(int *)(param_1 + 0x698) == 0) {
    thunk_FUN_4a161570(0x6c);
    uVar5 = FUN_4a06f504();
    *(undefined4 *)(param_1 + 0x698) = uVar5;
    FUN_4a0cb72c(param_1,uVar5);
  }
  *(undefined4 *)(param_1 + 0x69c) = 0;
  *(undefined4 *)(param_1 + 0x6a4) = 0;
  thunk_FUN_4a161570(0x40);
  piVar12 = (int *)FUN_4a099040();
  *(int **)(param_1 + 0x6b8) = piVar12;
  if (piVar12 != (int *)0x0) {
    (**(code **)(*piVar12 + 0xc))();
  }
  if (*(int *)(param_1 + 0x6dc) == 0) {
    thunk_FUN_4a161570(0xb4);
    uVar5 = FUN_4a089c6c();
    *(undefined4 *)(param_1 + 0x6dc) = uVar5;
    FUN_4a0cb72c(param_1,uVar5);
  }
  *(undefined4 *)(param_1 + 0x6e0) = 0;
  *(undefined4 *)(param_1 + 0x6e4) = 0;
  *(undefined4 *)(param_1 + 0x6e8) = 0;
  *(undefined4 *)(param_1 + 0x6ec) = 0;
  *(undefined1 *)(param_1 + 0x6f0) = 0;
  *(undefined1 *)(param_1 + 0x6f1) = 0;
  *(undefined1 *)(param_1 + 0x6f2) = 0;
  *(undefined1 *)(param_1 + 0x6f3) = 0;
  *(undefined4 *)(param_1 + 0x73c) = 0;
  *(undefined4 *)(param_1 + 0x738) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x740) = 0;
  *(undefined4 *)(param_1 + 0x744) = 0;
  *(undefined4 *)(param_1 + 0x748) = 0;
  *(undefined4 *)(param_1 + 0x74c) = 0;
  puVar8 = (undefined4 *)FUN_4a0c6bc0(auStack_3c);
  puVar3 = PTR_PTR_4a127180;
  puVar8[2] = 0;
  puVar8[3] = 0;
  *puVar8 = puVar3;
  (**(code **)(*(int *)(param_1 + 0x750) + 0x1c))((int *)(param_1 + 0x750));
  *(undefined4 *)(param_1 + 0x758) = 0;
  *(undefined4 *)(param_1 + 0x75c) = 0;
  FUN_4a16c1a0(auStack_3c);
  *(undefined4 *)(param_1 + 0x768) = 0;
  FUN_4a1141dc(param_1);
  uVar5 = FUN_4a13f9c0(local_28);
  *(undefined4 *)(param_1 + 0x7c0) = uVar5;
  *(undefined4 *)(param_1 + 0x7c4) = 0;
  *(undefined1 *)(param_1 + 0x7d8) = 0;
  *(undefined4 *)(param_1 + 0x7dc) = 0;
  *(undefined4 *)(param_1 + 0x7ec) = 0;
  *(undefined4 *)(param_1 + 0x7f0) = 0;
  local_40 = (int *)0x0;
  piVar12 = *(int **)(param_1 + 0x7f8);
  if (piVar12 != (int *)0x0) {
    iVar11 = (**(code **)(*piVar12 + 8))(piVar12);
    if (iVar11 != 0) {
      (**(code **)(*piVar12 + 4))(piVar12);
    }
    *(int **)(param_1 + 0x7f8) = local_40;
  }
  piVar12 = local_40;
  if ((local_40 != (int *)0x0) && (iVar11 = (**(code **)(*local_40 + 8))(local_40), iVar11 != 0)) {
    (**(code **)(*piVar12 + 4))(piVar12);
  }
  if (*(int *)(param_1 + 0x874) == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(*(int *)(param_1 + 0x874) + 8);
  }
  if (iVar11 == 0) {
    iVar11 = FUN_4a16be24(local_68,4);
    uVar5 = *(undefined4 *)(iVar11 + 8);
    piVar12 = *(int **)(iVar11 + 0xc);
    if (piVar12 != (int *)0x0) {
      (**(code **)(*piVar12 + 0xc))(piVar12);
    }
    (**(code **)(*(int *)(param_1 + 0x868) + 0x1c))((int *)(param_1 + 0x868));
    *(undefined4 *)(param_1 + 0x870) = uVar5;
    *(int **)(param_1 + 0x874) = piVar12;
    FUN_4a16bef4(local_68);
    iVar11 = FUN_4a16be24(local_68,4);
    uVar5 = *(undefined4 *)(iVar11 + 8);
    piVar12 = *(int **)(iVar11 + 0xc);
    if (piVar12 != (int *)0x0) {
      (**(code **)(*piVar12 + 0xc))(piVar12);
    }
    (**(code **)(*(int *)(param_1 + 0x87c) + 0x1c))((int *)(param_1 + 0x87c));
    *(undefined4 *)(param_1 + 0x884) = uVar5;
    *(int **)(param_1 + 0x888) = piVar12;
    FUN_4a16bef4(local_68);
    piVar12 = (int *)FUN_4a0c6bc0(local_7c);
    puVar3 = PTR_PTR_4a127184;
    piVar12[2] = 0;
    piVar12[3] = 0;
    *piVar12 = (int)puVar3;
    iVar11 = FUN_4a15e080(4);
    if (iVar11 == 0) {
      iVar11 = FUN_4a1669a8();
    }
    iVar6 = 0;
    do {
      local_80 = 0;
      *(undefined1 *)(iVar11 + iVar6) = 0;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 4);
    thunk_FUN_4a161570(0x18);
    piVar9 = (int *)FUN_4a0c0628();
    puVar4 = PTR_PTR_4a127188;
    *piVar9 = (int)PTR_PTR_4a127188;
    piVar9[3] = 1;
    piVar9[4] = 4;
    piVar9[2] = iVar11;
    *(undefined1 *)(piVar9 + 5) = 1;
    if (piVar9 != (int *)0x0) {
      (**(code **)(puVar4 + 0xc))(piVar9);
    }
    (**(code **)(*piVar12 + 0x1c))(piVar12);
    piVar12[2] = 4;
    piVar12[3] = (int)piVar9;
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 0xc))(piVar9);
    }
    (**(code **)(*(int *)(param_1 + 0x890) + 0x1c))((int *)(param_1 + 0x890));
    *(undefined4 *)(param_1 + 0x898) = 4;
    *(int **)(param_1 + 0x89c) = piVar9;
    local_7c[0] = puVar3;
    iVar11 = FUN_4a0bcc84(local_7c);
    if (iVar11 != 0) {
      iVar6 = 0;
      if (0 < local_74) {
        do {
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_74);
        if (iVar11 == 0) goto LAB_4a126e50;
      }
      FUN_4a14f21c(iVar11);
    }
LAB_4a126e50:
    FUN_4a0c6bf4(local_7c);
  }
  *(undefined4 *)(param_1 + 0xa10) = 0xffffffff;
  if (*(int *)(param_1 + 0x708) == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(*(int *)(param_1 + 0x708) + 8);
  }
  piVar12 = (int *)(param_1 + 0x724);
  if (iVar11 == 0) {
    iVar11 = FUN_4a16a31c(local_68,5);
    uVar5 = *(undefined4 *)(iVar11 + 8);
    piVar9 = *(int **)(iVar11 + 0xc);
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 0xc))(piVar9);
    }
    (**(code **)(*(int *)(param_1 + 0x6fc) + 0x1c))((int *)(param_1 + 0x6fc));
    iVar11 = local_60;
    *(undefined4 *)(param_1 + 0x704) = uVar5;
    *(int **)(param_1 + 0x708) = piVar9;
    puVar3 = PTR_PTR_4a12718c;
    local_68[0] = PTR_PTR_4a12718c;
    iVar6 = FUN_4a0bcc84(local_68);
    if (iVar6 != 0) {
      iVar10 = 0;
      if (0 < iVar11) {
        do {
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar11);
        if (iVar6 == 0) goto LAB_4a126f1c;
      }
      FUN_4a14f21c(iVar6);
    }
LAB_4a126f1c:
    FUN_4a0c6bf4(local_68);
    iVar11 = 0;
    if (0 < *(int *)(param_1 + 0x704)) {
      do {
        thunk_FUN_4a161570(0x10);
        uVar5 = FUN_4a0fb394();
        if (*(int *)(param_1 + 0x708) == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(*(int *)(param_1 + 0x708) + 8);
        }
        *(undefined4 *)(iVar6 + iVar11 * 4) = uVar5;
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(param_1 + 0x704));
    }
    uVar5 = FUN_4a13fb98(local_28);
    iVar11 = FUN_4a16a31c(local_68,uVar5);
    uVar5 = *(undefined4 *)(iVar11 + 8);
    piVar9 = *(int **)(iVar11 + 0xc);
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 0xc))(piVar9);
    }
    (**(code **)(*(int *)(param_1 + 0x710) + 0x1c))((int *)(param_1 + 0x710));
    *(undefined4 *)(param_1 + 0x718) = uVar5;
    *(int **)(param_1 + 0x71c) = piVar9;
    local_68[0] = puVar3;
    iVar11 = FUN_4a0bcc84(local_68);
    if (iVar11 != 0) {
      iVar6 = 0;
      if (0 < local_60) {
        do {
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_60);
        if (iVar11 == 0) goto LAB_4a127000;
      }
      FUN_4a14f21c(iVar11);
    }
LAB_4a127000:
    FUN_4a0c6bf4(local_68);
    iVar11 = 0;
    if (0 < *(int *)(param_1 + 0x718)) {
      do {
        thunk_FUN_4a161570(0x10);
        uVar5 = FUN_4a0fb394();
        if (*(int *)(param_1 + 0x71c) == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(*(int *)(param_1 + 0x71c) + 8);
        }
        *(undefined4 *)(iVar6 + iVar11 * 4) = uVar5;
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(param_1 + 0x718));
    }
    iVar11 = FUN_4a16be24(local_7c,*(undefined4 *)(param_1 + 0x718));
    uVar5 = *(undefined4 *)(iVar11 + 8);
    piVar9 = *(int **)(iVar11 + 0xc);
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 0xc))(piVar9);
    }
    (**(code **)(*piVar12 + 0x1c))(piVar12);
    *(int **)(param_1 + 0x730) = piVar9;
    *(undefined4 *)(param_1 + 0x72c) = uVar5;
    FUN_4a16bef4(local_7c);
  }
  iVar11 = FUN_4a16bdcc(auStack_54,piVar12);
  iVar6 = 0;
  if (0 < *(int *)(iVar11 + 8)) {
    do {
      if (*(int *)(iVar11 + 0xc) == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(*(int *)(iVar11 + 0xc) + 8);
      }
      *(undefined4 *)(iVar10 + iVar6 * 4) = 0;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(iVar11 + 8));
  }
  FUN_4a16bef4(auStack_54);
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  if (param_2 == 99) {
    *(undefined4 *)(param_1 + 0x1d8) = 2;
  }
  else if (param_2 == 0x62) {
    param_2 = 6;
    *(undefined4 *)(param_1 + 0x1d8) = 2;
  }
  else {
    if (param_2 == 100) {
      *(undefined4 *)(param_1 + 0x1d8) = 1;
    }
    else if (param_2 == 0x61) {
      *(undefined4 *)(param_1 + 0x7c4) = 0x1e;
    }
    else if (param_2 != -1) goto LAB_4a127138;
    param_2 = 6;
  }
LAB_4a127138:
  *(int *)(param_1 + 0x1d4) = param_2;
  if (*(int *)(param_1 + 0x1d8) == 1) {
    FUN_4a0d36d0(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x264),3,0);
  }
  FUN_4a0941ec();
  FUN_4a094330();
  FUN_4a1161d0(param_1,1);
  return s_SceneGame__started_4a127190;
}



// Address: 4a1271a4

void FUN_4a1271a4(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)PTR_DAT_4a1275f8 = 0x41380000;
  FUN_4a0cf090(param_1);
  uVar7 = *(undefined4 *)(param_1 + 0x20);
  switch(*(undefined4 *)(param_1 + 0x1c0)) {
  case 1:
    FUN_4a041910(1);
    FUN_4a0cbf9c(param_1,param_2);
    FUN_4a041910(0);
    break;
  case 3:
  case 4:
  case 9:
  case 0x14:
  case 0x16:
    FUN_4a10ce84(param_1,param_2);
    FUN_4a041910(1);
    if (*(int *)(*(int *)(param_1 + 0x168) + 0x90) == 0xc8c) {
      FUN_4a10ce84(param_1,param_2);
      FUN_4a041910(1);
      FUN_4a0fe1e0(*(undefined4 *)(param_1 + 0x20),param_2);
      puVar1 = PTR_DAT_4a1275fc;
      FUN_4a0bbb28(*(undefined4 *)PTR_DAT_4a1275fc);
      FUN_4a0894f0(*(undefined4 *)(param_1 + 0x6dc),param_2);
      FUN_4a0bbcb4(*(undefined4 *)puVar1);
      FUN_4a041910(0);
    }
    FUN_4a0fe1e0(uVar7,param_2);
    FUN_4a0ce0a8(param_1,param_2);
    FUN_4a041910(0);
    break;
  case 6:
  case 0x15:
    FUN_4a10ce84(param_1,param_2);
    break;
  case 7:
    FUN_4a1146e8(param_1,param_2);
    break;
  case 8:
    FUN_4a10ce84(param_1,param_2);
    FUN_4a041910(1);
    FUN_4a0fe1e0(*(undefined4 *)(param_1 + 0x20),param_2);
    puVar1 = PTR_DAT_4a1275fc;
    FUN_4a0bbb28(*(undefined4 *)PTR_DAT_4a1275fc);
    FUN_4a0894f0(*(undefined4 *)(param_1 + 0x6dc),param_2);
    FUN_4a0bbcb4(*(undefined4 *)puVar1);
    FUN_4a041910(0);
    break;
  case 10:
    FUN_4a1126c8(param_1,param_2);
    break;
  case 0xb:
    iVar5 = *(int *)(param_1 + 0x20);
    iVar6 = iVar5 + 0x278;
    FUN_4a0ce950(param_1,1,0xaf1);
    FUN_4a0ce950(param_1,2,0xab8);
    uVar7 = FUN_4a06c410(iVar6);
    FUN_4a06c86c(iVar6,*(undefined4 *)(param_1 + 0x6ec));
    FUN_4a06b694(iVar6,0xfffffff7,uVar7);
    FUN_4a0ce950(param_1,3,0xfffffff7);
    FUN_4a10ce84(param_1,param_2);
    FUN_4a041910(1);
    FUN_4a0fe1e0(iVar5,param_2);
    FUN_4a0cdc50(param_1,param_2,2);
    FUN_4a041910(0);
    break;
  case 0xc:
    FUN_4a119184(param_1,param_2);
    break;
  case 0xd:
  case 0x12:
    FUN_4a10ce84(param_1,param_2);
    FUN_4a041910(1);
    FUN_4a0fe1e0(*(undefined4 *)(param_1 + 0x20),param_2);
    FUN_4a0ce0a8(param_1,param_2);
    FUN_4a041910(0);
    break;
  case 0xe:
    FUN_4a10ce84(param_1,param_2);
    FUN_4a041910(1);
    FUN_4a0fe1e0(*(undefined4 *)(param_1 + 0x20),param_2);
    FUN_4a0cdc50(param_1,param_2,4);
    FUN_4a041910(0);
    break;
  case 0xf:
    FUN_4a10ce84(param_1,param_2);
    FUN_4a041910(1);
    FUN_4a0fe1e0(*(undefined4 *)(param_1 + 0x20),param_2);
    FUN_4a0cdc50(param_1,param_2,5);
    FUN_4a041910(0);
    break;
  case 0x10:
    FUN_4a112db8(param_1,param_2);
    break;
  case 0x11:
    iVar5 = *(int *)(param_1 + 0xa10);
    if (iVar5 == 0) {
      FUN_4a0ef16c(*(undefined4 *)(param_1 + 0x28),param_2);
      FUN_4a041910(1);
      FUN_4a121cf0(param_1,param_2);
      FUN_4a041910(0);
    }
    else if (iVar5 == 1 || iVar5 == 2) {
      FUN_4a0ef16c(*(undefined4 *)(param_1 + 0x28),param_2);
      FUN_4a041910(1);
      FUN_4a121cf0(param_1,param_2);
      FUN_4a0fe1e0(*(undefined4 *)(param_1 + 0x20),param_2);
      FUN_4a0ce0a8(param_1,param_2);
      FUN_4a041910(0);
    }
    else if (iVar5 == 3) {
      FUN_4a0ef16c(*(undefined4 *)(param_1 + 0x28),param_2);
      FUN_4a041910(1);
      puVar1 = PTR_DAT_4a1275fc;
      FUN_4a0bbb28(*(undefined4 *)PTR_DAT_4a1275fc);
      FUN_4a11df6c(param_1,param_2);
      FUN_4a0bbcb4(*(undefined4 *)puVar1);
      FUN_4a041910(0);
    }
    break;
  case 0x13:
    FUN_4a10e684(param_1,param_2);
  }
  if (*(char *)(param_1 + 0x210) != '\0') {
    FUN_4a041910(1);
    FUN_4a0ce0a8(param_1,param_2);
    FUN_4a041910(0);
  }
  FUN_4a0cecb0(param_1);
  iVar5 = *(int *)(param_1 + 0x180);
  iVar6 = *(int *)(param_1 + 0x20) + 0x128;
  if (0 < iVar5) {
    uVar7 = FUN_4a171fac(iVar5 + -0x200000);
    uVar7 = FUN_4a17211c(uVar7,DAT_4a0cba9c);
    FUN_4a1724e0(uVar7,0x3f800000);
    uVar7 = FUN_4a171fac(iVar5);
    uVar7 = FUN_4a17295c(uVar7,0xffffffe9);
    if (*(char *)(param_1 + 0x184) == '\0') {
      uStack_1c = *(undefined4 *)(param_1 + 0x174);
      uStack_20 = *(undefined4 *)(param_1 + 0x178);
      FUN_4a0bbf48(*(undefined4 *)PTR_DAT_4a0cbaa0,&uStack_1c,&uStack_20);
    }
    else {
      uVar2 = FUN_4a16bdcc(&uStack_34,param_1 + 0x2c);
      FUN_4a0f2970(*(undefined4 *)(param_1 + 0x28),uVar2,*(undefined4 *)(param_1 + 0x174),
                   *(undefined4 *)(param_1 + 0x178));
      FUN_4a16bef4(&uStack_34);
      iVar5 = 0;
      if (*(int *)(param_1 + 0x38) == 0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x38) + 8);
      }
      uStack_1c = *puVar3;
      if (*(int *)(param_1 + 0x38) != 0) {
        iVar5 = *(int *)(*(int *)(param_1 + 0x38) + 8);
      }
      uStack_20 = *(undefined4 *)(iVar5 + 4);
    }
    uVar2 = FUN_4a171fac(uStack_20);
    uVar4 = FUN_4a171fac(uStack_1c);
    uStack_2c = 0;
    uStack_34 = uVar7;
    uStack_30 = uVar7;
    FUN_4a09f664(iVar6,0x2a,uVar4,uVar2);
    FUN_4a09f3a4(iVar6,param_2);
    return;
  }
  return;
}



// Address: 4a127604

/* WARNING: Removing unreachable block (ram,0x4a122650) */
/* WARNING: Removing unreachable block (ram,0x4a122634) */
/* WARNING: Removing unreachable block (ram,0x4a116204) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffec : 0x4a11657c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * FUN_4a127604(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 *extraout_r1;
  int iVar17;
  int unaff_r4;
  int *piVar18;
  undefined4 *unaff_r5;
  undefined4 uVar19;
  int *piVar20;
  undefined4 unaff_r6;
  undefined4 *unaff_r7;
  undefined4 unaff_r8;
  int unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined1 *puVar21;
  code *pcVar22;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar23;
  bool bVar24;
  int *piVar25;
  undefined8 uVar26;
  undefined1 auStack_50 [8];
  int iStack_48;
  int iStack_44;
  undefined1 auStack_3c [12];
  int iStack_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int in_stack_ffffffec;
  undefined4 *in_stack_fffffff0;
  undefined4 in_stack_fffffff4;
  undefined4 *in_stack_fffffff8;
  
  FUN_4a0cf054();
  param_1[0x71] = param_1[0x71] + (int)param_2;
  if (param_1[0x70] == 1) {
    FUN_4a0cca84(param_1,param_2,param_1[0x7e]);
    iVar11 = FUN_4a0ff408(param_1[8]);
    if (iVar11 == 0) {
      FUN_4a11939c(param_1);
    }
    if ((undefined4 *)param_1[0x7d] == (undefined4 *)0x5) {
      if (0x42c7ffff < (int)param_1[0x6a]) {
        FUN_4a037774(1);
        uVar16 = 5;
        if (param_1[0x76] == 0) {
          uVar16 = 4;
        }
        else if (param_1[0x76] == 1) {
          uVar16 = 3;
        }
        FUN_4a0d36d0(*(undefined4 *)(param_1[8] + 0x264),uVar16,0);
        if (*(char *)(param_1[8] + 0x496) == '\0') {
          FUN_4a1161d0(param_1,0x14);
        }
        else {
          FUN_4a1161d0(param_1,param_1[0x75]);
        }
        if (param_1[0x76] == 2) {
          FUN_4a0fe54c(param_1[8],0x18);
          FUN_4a11a440(param_1,1);
        }
        else if ((param_1[0x76] == 1) && (iVar11 = FUN_4a145a38(param_1[8]), iVar11 == 4)) {
          FUN_4a11a440(param_1,2);
        }
        else if ((param_1[0x76] == 0) && (param_1[0x70] != 0x14)) {
          FUN_4a11a440(param_1,0x23);
        }
        FUN_4a110350(param_1);
        FUN_4a0fb754(param_1[8],DAT_4a1116fc);
        puVar12 = (undefined4 *)param_1[8];
        puVar12[0x114] = 1;
        puVar12[0x113] = 0;
        *(undefined1 *)(puVar12 + 0x112) = 1;
        *(undefined1 *)(puVar12 + 0x116) = 0;
        return puVar12;
      }
      return (undefined4 *)param_1[0x6a];
    }
    return (undefined4 *)param_1[0x7d];
  }
  FUN_4a12821c();
  if (*(char *)(param_1 + 0x19f) != '\0') {
    uVar26 = FUN_4a13ef1c(param_1);
    if ((int)uVar26 != -1) {
      return param_1;
    }
    if ((undefined4 *)param_1[0x1a5] != (undefined4 *)0x3) {
      return (undefined4 *)param_1[0x1a5];
    }
    FUN_4a0ff4a4(3,(int)((ulonglong)uVar26 >> 0x20));
    thunk_FUN_4a0c6b08();
    iVar11 = FUN_4a0c74dc();
    if (iVar11 == *(int *)(param_1[8] + 0x34c)) {
                    /* WARNING: Could not recover jumptable at 0x4a127694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar12 = (undefined4 *)(*UNRECOVERED_JUMPTABLE)();
      return puVar12;
    }
    FUN_4a0d34e4(*(undefined4 *)(param_1[8] + 0x264));
    FUN_4a122adc(param_1,0);
    if (*(char *)((int)param_1 + 0x67d) != '\0') {
      *(undefined1 *)(param_1 + 0x19f) = 0;
      puVar12 = (undefined4 *)param_1[8];
      if (puVar12[0x108] != 0) {
        puVar12[0x108] = 0;
      }
      if (puVar12[0x109] != 0) {
        puVar12[0x109] = 0;
      }
      return puVar12;
    }
                    /* WARNING: Could not recover jumptable at 0x4a1276b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar12 = (undefined4 *)(*UNRECOVERED_JUMPTABLE)();
    return puVar12;
  }
  pcVar22 = UNRECOVERED_JUMPTABLE;
  switch((undefined4 *)(param_1[0x70] + -6)) {
  case (undefined4 *)0x0:
    puVar12 = (undefined4 *)(uint)*(byte *)(param_1 + 0x19f);
    bVar24 = puVar12 == (undefined4 *)0x0;
    if (bVar24) {
      puVar12 = (undefined4 *)(uint)*(byte *)(param_1 + 0x84);
    }
    if (!bVar24 || puVar12 != (undefined4 *)0x0) {
      return puVar12;
    }
    puVar12 = (undefined4 *)param_1[0x70];
    if (puVar12 != (undefined4 *)&DAT_00000006 && puVar12 != (undefined4 *)&DAT_00000015) {
      return puVar12;
    }
    iVar11 = param_1[9];
    if ((((param_1[0xa5] == 0) || (FUN_4a1113f4(param_1,param_2), *(char *)(param_1 + 0x84) == '\0')
         ) && (iVar17 = FUN_4a141aac(iVar11), iVar17 == 0)) &&
       (iVar17 = FUN_4a110350(param_1), iVar17 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x4a10cf78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar12 = (undefined4 *)(*UNRECOVERED_JUMPTABLE)();
      return puVar12;
    }
    if (((param_1[0x76] == 0) && (0 < (int)param_1[0x85])) && (param_1[0x70] != 0x15)) {
      param_1[0x85] = param_1[0x85] - (int)param_2;
    }
    if ((param_1[0xa8] != -1) &&
       (iVar17 = param_1[0xaa], param_1[0xaa] = iVar17 + (int)param_2, 2000 < iVar17 + (int)param_2)
       ) {
      if ((int)param_1[0xac] < (int)param_1[0xab]) {
        param_1[0xa8] = 0xffffffff;
        param_1[0xa9] = 0xffffffff;
      }
      else {
        param_1[0xab] = param_1[0xab] + (int)param_2 * 0xccc;
      }
    }
    param_1[0x86] = param_2;
    iVar17 = FUN_4a13fb88(iVar11);
    puVar12 = param_2;
    if (iVar17 != 0) {
      puVar12 = (undefined4 *)((int)param_2 << 2);
    }
    iVar17 = FUN_4a077b38();
    iVar13 = 0;
    *(undefined1 *)(iVar17 + 0xd9) = 0;
    *(undefined1 *)(iVar17 + 0xd8) = 0;
    FUN_4a10ca70(auStack_2c,param_1);
    if (iStack_20 == 0) {
      iVar17 = 0;
    }
    else {
      iVar17 = *(int *)(iStack_20 + 8);
    }
    iVar5 = 0;
    if (iVar17 != 0) {
      iVar11 = 0;
      iVar5 = iStack_24;
    }
    if ((iVar17 != 0 && iVar5 != 0) && -1 < iVar5) {
      do {
        if (iStack_20 == 0) {
          iVar17 = 0;
        }
        else {
          iVar17 = *(int *)(iStack_20 + 8);
        }
        piVar25 = *(int **)(iVar17 + iVar11 * 4);
        (**(code **)(*piVar25 + 0x14))(piVar25,puVar12);
        iVar11 = iVar11 + 1;
      } while (iVar11 < iStack_24);
    }
    FUN_4a16d53c(param_1 + 0x186);
    FUN_4a16a5f4(auStack_2c);
    FUN_4a1100c8(param_1,param_2);
    (**(code **)(*(int *)param_1[0x8a] + 0x20))((int *)param_1[0x8a],param_2);
    if (param_1[0xa5] != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a10d0cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar12 = (undefined4 *)(*UNRECOVERED_JUMPTABLE)();
      return puVar12;
    }
    iVar11 = FUN_4a0ff408(param_1[8]);
    if (iVar11 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a10d0e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar12 = (undefined4 *)(*UNRECOVERED_JUMPTABLE)();
      return puVar12;
    }
    FUN_4a111700(param_1,param_2);
    if (param_1[0x76] == 2) {
      FUN_4a11a86c(param_1,param_2);
    }
    else if (param_1[0x76] == 0) {
      FUN_4a118480();
    }
    else {
      FUN_4a11c2b4(param_1,param_2);
    }
    iVar11 = iVar13;
    if (param_1[0x1d7] != 0) {
      iVar11 = *(int *)(param_1[0x1d7] + 8);
    }
    if (iVar11 != 0) {
      iVar11 = param_1[0x1d9];
      puVar12 = (undefined4 *)FUN_4a0c6bc0(auStack_2c);
      *puVar12 = PTR_PTR_4a10d234;
      puVar12[2] = param_1[0x1d6];
      piVar25 = (int *)param_1[0x1d7];
      puVar12[3] = piVar25;
      if (piVar25 != (int *)0x0) {
        (**(code **)(*piVar25 + 0xc))();
      }
      *puVar12 = PTR_PTR_4a10d238;
      iVar17 = param_1[0x1d3];
      param_1[0x1d3] = iVar17 + (int)param_2;
      if (iVar11 < iVar17 + (int)param_2) {
        param_1[0x1d3] = 0;
        iVar11 = FUN_4a0fe640(param_1[8],0,puVar12[2] + -1);
        if (puVar12[3] != 0) {
          iVar13 = *(int *)(puVar12[3] + 8);
        }
        FUN_4a086608(*(undefined4 *)(param_1[8] + 0x260),(int)*(short *)(iVar13 + iVar11 * 2),
                     0x3f800000);
      }
      FUN_4a16c1a0(auStack_2c);
    }
    uVar9 = param_1[8];
    if (*(int *)(uVar9 + 0x38) == 0) {
      bVar24 = *(int *)(uVar9 + 0x44) != 0;
      cVar1 = '\0';
      if (bVar24) {
        cVar1 = *(char *)(uVar9 + 0x48);
      }
      if (!bVar24 || cVar1 == '\0') {
        bVar24 = *(int *)(uVar9 + 0x3c) == 0;
        if (!bVar24) {
          uVar9 = (uint)*(byte *)(uVar9 + 0x40);
        }
        if (bVar24 || uVar9 == 0) goto LAB_4a10d224;
      }
    }
    FUN_4a1137bc(param_1,param_2);
LAB_4a10d224:
    piVar20 = (int *)param_1[0x17e];
    FUN_4a16bdcc(auStack_28,param_1 + 0x1dc);
    piVar18 = (int *)0x0;
    puVar12 = (undefined4 *)FUN_4a0c6bc0(auStack_3c);
    *puVar12 = PTR_PTR_4a1169c4;
    puVar12[2] = param_1[0x1e3];
    piVar25 = (int *)param_1[0x1e4];
    puVar12[3] = piVar25;
    if (piVar25 != (int *)0x0) {
      (**(code **)(*piVar25 + 0xc))();
    }
    *puVar12 = PTR_PTR_4a1169c8;
    if ((int)param_1[0x1db] < 1) {
      uVar9 = FUN_4a13fb44(param_1[9],piVar20[0x35]);
      if ((uVar9 & 0x80000) == 0) {
        if (iStack_1c == 0) {
          piVar25 = (int *)0x0;
        }
        else {
          piVar25 = *(int **)(iStack_1c + 8);
        }
        *piVar25 = piVar20[0x35];
        if (iStack_30 != 0) {
          piVar18 = *(int **)(iStack_30 + 8);
        }
        *piVar18 = piVar20[0x38];
        param_1[0x1db] = 1;
      }
    }
    else {
      iVar11 = (**(code **)(*piVar20 + 0x10))(piVar20);
      if (iVar11 == 0) {
        iVar11 = piVar20[0x35];
        if (iStack_1c == 0) {
          piVar25 = (int *)0x0;
        }
        else {
          piVar25 = *(int **)(iStack_1c + 8);
        }
        if ((*piVar25 != iVar11) &&
           (uVar9 = FUN_4a13fb44(param_1[9],iVar11), (uVar9 & 0x80000) == 0)) {
          if (iStack_1c == 0) {
            piVar25 = (int *)0x0;
          }
          else {
            piVar25 = *(int **)(iStack_1c + 8);
          }
          *piVar25 = iVar11;
          if (iStack_30 != 0) {
            piVar18 = *(int **)(iStack_30 + 8);
          }
          *piVar18 = piVar20[0x38];
        }
      }
      else {
        param_1[0x1db] = param_1[0x1db] + -1;
        iVar11 = 0;
        do {
          if (iStack_1c != 0) {
            iVar17 = *(int *)(iStack_1c + 8);
          }
          else {
            iVar17 = 0;
          }
          if (iStack_1c != 0) {
            iVar13 = *(int *)(iStack_1c + 8);
          }
          else {
            iVar13 = 0;
          }
          *(undefined4 *)(iVar13 + iVar11 * 4) = *(undefined4 *)(iVar17 + (iVar11 + 1) * 4);
          if (iStack_30 != 0) {
            iVar17 = *(int *)(iStack_30 + 8);
          }
          else {
            iVar17 = 0;
          }
          if (iStack_30 != 0) {
            iVar13 = *(int *)(iStack_30 + 8);
          }
          else {
            iVar13 = 0;
          }
          *(undefined4 *)(iVar13 + iVar11 * 4) = *(undefined4 *)(iVar17 + (iVar11 + 1) * 4);
          iVar17 = param_1[0x1e9];
          if (iVar17 != 0) {
            iVar13 = *(int *)(iVar17 + 8);
          }
          else {
            iVar13 = 0;
          }
          if (iVar17 != 0) {
            iVar17 = *(int *)(iVar17 + 8);
          }
          else {
            iVar17 = 0;
          }
          *(undefined4 *)(iVar17 + iVar11 * 4) = *(undefined4 *)(iVar13 + (iVar11 + 1) * 4);
          iVar17 = param_1[0x1ee];
          if (iVar17 != 0) {
            iVar13 = *(int *)(iVar17 + 8);
          }
          else {
            iVar13 = 0;
          }
          if (iVar17 != 0) {
            iVar17 = *(int *)(iVar17 + 8);
          }
          else {
            iVar17 = 0;
          }
          *(undefined4 *)(iVar17 + iVar11 * 4) = *(undefined4 *)(iVar13 + (iVar11 + 1) * 4);
          iVar11 = iVar11 + 1;
        } while (iVar11 < 2);
        if (iStack_30 == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = *(int *)(iStack_30 + 8);
        }
        *(undefined4 *)(iVar11 + param_1[0x1db] * 4) = 0;
        if (0 < (int)param_1[0x1db]) {
          iVar11 = param_1[0x17e];
          if (iStack_1c == 0) {
            puVar12 = (undefined4 *)0x0;
          }
          else {
            puVar12 = *(undefined4 **)(iStack_1c + 8);
          }
          if (iStack_30 == 0) {
            puVar14 = (undefined4 *)0x0;
          }
          else {
            puVar14 = *(undefined4 **)(iStack_30 + 8);
          }
          uVar16 = *puVar14;
          if (param_1[0x1e9] == 0) {
            puVar14 = (undefined4 *)0x0;
          }
          else {
            puVar14 = *(undefined4 **)(param_1[0x1e9] + 8);
          }
          FUN_4a0737a4(iVar11,*puVar12,uVar16,*puVar14);
          FUN_4a110aac(auStack_50,param_1);
          iVar17 = 0;
          if (0 < iStack_48) {
            do {
              if (iStack_44 == 0) {
                iVar13 = 0;
              }
              else {
                iVar13 = *(int *)(iStack_44 + 8);
              }
              iVar13 = *(int *)(iVar13 + iVar17 * 4);
              if (iVar13 != iVar11) {
                FUN_4a071d48(iVar13,uVar16);
              }
              iVar17 = iVar17 + 1;
            } while (iVar17 < iStack_48);
          }
          FUN_4a169a1c(auStack_50);
        }
      }
    }
    FUN_4a16a5f4(auStack_3c);
    puVar12 = (undefined4 *)FUN_4a16bef4(auStack_28);
    return puVar12;
  case (undefined4 *)0x1:
    puVar12 = param_2;
    if (*(char *)((int)param_1 + 0x6f3) != '\0') {
      pcVar22 = (code *)0x4a116524;
      FUN_4a110350(param_1);
      puVar12 = extraout_r1;
    }
    puVar14 = (undefined4 *)param_1[0x1a7];
    if (puVar14 == (undefined4 *)&DAT_0000000e) {
      if ((int)param_1[0x1b6] < 1) {
                    /* WARNING: Could not recover jumptable at 0x4a1165a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar12 = (undefined4 *)(*UNRECOVERED_JUMPTABLE)();
        return puVar12;
      }
      param_2 = (undefined4 *)(param_1[0x1b6] - (int)param_2);
      param_1[0x1b6] = param_2;
      if (0 < (int)param_2) {
        return param_2;
      }
      goto LAB_4a1166cc;
    }
    if ((int)puVar14 < 0xf) {
      if (puVar14 == (undefined4 *)0x1 || puVar14 == (undefined4 *)&DAT_00000004) goto LAB_4a1165c0;
      if (puVar14 != (undefined4 *)&DAT_00000006) {
        if (puVar14 != (undefined4 *)0xc) {
                    /* WARNING: Could not recover jumptable at 0x4a116554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar12 = (undefined4 *)(*UNRECOVERED_JUMPTABLE)();
          return puVar12;
        }
        goto LAB_4a1165c0;
      }
    }
    else {
      if (puVar14 != (undefined4 *)&DAT_0000000f) {
        unaff_r5 = param_1;
        unaff_r7 = param_2;
        puVar21 = auStack_28;
        puVar4 = puVar14;
        if ((puVar14 == (undefined4 *)&DAT_00000010 || puVar14 == (undefined4 *)0x11) ||
            puVar14 == (undefined4 *)&DAT_00000012) {
          unaff_r4 = in_stack_ffffffec;
          unaff_r5 = in_stack_fffffff0;
          unaff_r6 = in_stack_fffffff4;
          unaff_r7 = in_stack_fffffff8;
          puVar21 = (undefined1 *)register0x00000054;
          pcVar22 = UNRECOVERED_JUMPTABLE;
          puVar4 = param_1;
          puVar12 = param_2;
        }
        param_2 = puVar12;
        param_1 = puVar4;
        if ((puVar14 != (undefined4 *)&DAT_00000010 && puVar14 != (undefined4 *)0x11) &&
            puVar14 != (undefined4 *)&DAT_00000012) {
          return param_1;
        }
        break;
      }
LAB_4a1165c0:
      FUN_4a1100c8(param_1,param_2);
    }
    if ((param_1[0xa8] != -1) &&
       (iVar11 = param_1[0xaa], param_1[0xaa] = iVar11 + (int)param_2, 2000 < iVar11 + (int)param_2)
       ) {
      if ((int)param_1[0xac] < (int)param_1[0xab]) {
        param_1[0xa8] = 0xffffffff;
        param_1[0xa9] = 0xffffffff;
      }
      else {
        param_1[0xab] = param_1[0xab] + (int)param_2 * 0xccc;
      }
    }
    FUN_4a10ca70(auStack_28,param_1);
    if (iStack_1c == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)(iStack_1c + 8);
    }
    iVar17 = 0;
    if (iVar11 != 0) {
      unaff_r4 = 0;
      iVar17 = iStack_20;
    }
    if ((iVar11 != 0 && iVar17 != 0) && -1 < iVar17) {
      do {
        if (iStack_1c == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = *(int *)(iStack_1c + 8);
        }
        piVar25 = *(int **)(iVar11 + unaff_r4 * 4);
        if (piVar25[10] == 0xb) {
          (**(code **)(*piVar25 + 0x14))(piVar25,param_2);
        }
        unaff_r4 = unaff_r4 + 1;
      } while (unaff_r4 < iStack_20);
    }
    FUN_4a16a5f4(auStack_28);
    if (param_1[0x1a7] != 6) {
                    /* WARNING: Could not recover jumptable at 0x4a1166ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar12 = (undefined4 *)(*UNRECOVERED_JUMPTABLE)();
      return puVar12;
    }
    if ((int)param_1[0x71] < 0x5dd) {
      return (undefined4 *)param_1[0x71];
    }
LAB_4a1166cc:
    param_1[0x71] = 0;
                    /* WARNING: Could not recover jumptable at 0x4a12264c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar12 = (undefined4 *)(*(code *)PTR_caseD_2_4a12265c)();
    return puVar12;
  default:
    return (undefined4 *)(param_1[0x70] + -6);
  case (undefined4 *)0xa:
    FUN_4a1138d0(param_1,param_2);
    puVar21 = (undefined1 *)register0x00000054;
    break;
  case (undefined4 *)0xb:
    param_1[0x286] = param_1[0x286] + (int)param_2;
    param_1[0x285] = param_1[0x285] + (int)param_2;
    if (*(char *)((int)param_1 + 0x6f3) == '\0') {
      return (undefined4 *)0x0;
    }
    uVar16 = param_1[9];
    if (*(char *)((int)param_1 + 0x6f3) == '\0') {
      if (*(char *)(param_1 + 0x1f6) == '\0') {
        if (param_1[0x1ce] != -1) {
          FUN_4a1161d0(param_1,0xf);
          return (undefined4 *)0x1;
        }
        iVar11 = FUN_4a0dbda4(uVar16);
        if (iVar11 != 0) {
          param_1[0xa4] = 8;
          FUN_4a0cd7c0(param_1,0xb60,0xb58);
          FUN_4a1161d0(param_1,9);
          return (undefined4 *)0x1;
        }
        if (*(char *)((int)param_1 + 0x6f1) == '\0') {
          iVar11 = FUN_4a0dd630(uVar16);
          if (iVar11 == 0) {
            iVar11 = FUN_4a0dd584(uVar16);
            if (iVar11 == -1) {
              if (*(char *)((int)param_1 + 0x6f2) != '\0') {
                *(undefined1 *)((int)param_1 + 0x6f2) = 0;
                iVar11 = FUN_4a141a98(uVar16);
                if (iVar11 != -1) {
                  if (((((iVar11 == 7 || iVar11 == 1) || iVar11 == 0x1e) || iVar11 == 0x1b) ||
                      iVar11 == 0x1d) || iVar11 == 0x1a) {
                    FUN_4a11a440(param_1,0x1e);
                  }
                  FUN_4a0ff3f8(param_1[8],400);
                  iVar11 = FUN_4a14155c(param_1[9]);
                  if (iVar11 == 0) {
                    FUN_4a0ce9a4(param_1,0xa48);
                  }
                  else {
                    FUN_4a0ce964(param_1,0xa47);
                  }
                  FUN_4a1161d0(param_1,0xe);
                  return (undefined4 *)0x1;
                }
              }
              if (((int)param_1[0x85] < 0) && (iVar11 = FUN_4a145d3c(param_1[8],0x18), iVar11 == 0))
              {
                FUN_4a11a440(param_1,0x18);
              }
              else {
                iVar11 = FUN_4a13fa14(param_1[9],0);
                if ((iVar11 != -1) ||
                   ((iVar11 = FUN_4a145d3c(param_1[8],0x17), iVar11 != 0 ||
                    (iVar11 = FUN_4a13fb90(param_1[9]), iVar11 < 0x7bd)))) {
                  return (undefined4 *)0x0;
                }
                FUN_4a11a440(param_1,0x17);
              }
            }
            else {
              param_1[0xa4] = 0;
              FUN_4a0cd7c0(param_1,iVar11,0xb43);
              FUN_4a1161d0(param_1,9);
            }
          }
          else {
            param_1[0xa4] = 0;
            FUN_4a0cd7c0(param_1,0xb53);
            FUN_4a1161d0(param_1,9);
          }
        }
        else {
          *(undefined1 *)((int)param_1 + 0x6f1) = 0;
          FUN_4a0fb7a0(param_1[8]);
          param_1[0xa4] = 0;
          FUN_4a0cd7c0(param_1,0xb52);
          FUN_4a1161d0(param_1,9);
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x1f6) = 0;
        FUN_4a1161d0(param_1,0x12);
        FUN_4a11bed4(param_1,3);
      }
    }
    else {
      *(undefined1 *)((int)param_1 + 0x6f3) = 0;
      if (*(char *)((int)param_1 + 0x632) != '\0') {
        *(undefined1 *)((int)param_1 + 0x632) = 0;
        *(undefined1 *)((int)param_1 + 0x633) = 0;
        *(undefined2 *)(param_1 + 0x18d) = 0xffff;
        param_1[0x19d] = 0;
        param_1[0xad] = 0;
        FUN_4a115d8c(param_1,0);
      }
      FUN_4a0ccc48(param_1,param_1[0x1be],param_1[0x1bd]);
      *(undefined1 *)(param_1 + 0x84) = 1;
      FUN_4a0d58d0(param_1[9]);
    }
    return (undefined4 *)0x1;
  case (undefined4 *)0xd:
    param_1[0x1fa] = param_1[0x1fa] + (int)param_2;
    iVar11 = param_1[0x1f7];
    if (iVar11 == 1) {
      FUN_4a1100c8(param_1,param_2);
      if (*(char *)(param_1 + 0xb6) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x4a127818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar12 = (undefined4 *)(*UNRECOVERED_JUMPTABLE)();
        return puVar12;
      }
      param_1[0xad] = 0;
      FUN_4a115d8c(param_1,0);
      uVar16 = 2;
    }
    else if (iVar11 == 2) {
      if ((int)param_1[0x71] < 0x1f5) {
        return (undefined4 *)param_1[0x71];
      }
      uVar16 = 3;
    }
    else {
      if (iVar11 != 4) {
                    /* WARNING: Could not recover jumptable at 0x4a1277dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar12 = (undefined4 *)(*UNRECOVERED_JUMPTABLE)();
        return puVar12;
      }
      if ((int)param_1[0x71] < 0x3e9) {
        return (undefined4 *)param_1[0x71];
      }
      uVar16 = 5;
    }
FUN_4a11be8c:
    param_1[0x1f7] = uVar16;
    param_1[0x71] = 0;
    switch(uVar16) {
    default:
      return param_1;
    case 1:
      iVar11 = param_1[0x17e];
      param_1[0xad] = iVar11;
      param_1[0xbd] = iVar11;
      if (iVar11 == 0) {
        if (param_1[0xaf] == 8) {
          return param_1;
        }
        iVar11 = 0;
      }
      else {
        iVar11 = param_1[10];
        param_1[0xb7] = *(undefined4 *)(iVar11 + 0x470);
        param_1[0xb8] = *(undefined4 *)(iVar11 + 0x474);
        param_1[0xb9] = *(undefined4 *)(iVar11 + 0x478);
        param_1[0xbc] = *(undefined4 *)(iVar11 + 0x48c);
        param_1[0xba] = *(undefined4 *)(iVar11 + 0x484);
        param_1[0xbb] = *(undefined4 *)(iVar11 + 0x488);
        iVar11 = 2;
      }
      iVar17 = param_1[0xaf];
      param_1[0xaf] = iVar11;
      switch(iVar11) {
      case 0:
        *(undefined1 *)(param_1 + 0xb6) = 1;
        param_1[0xbe] = 0;
        param_1[0xbf] = 0;
        param_1[0xc1] = 0;
        param_1[0xc0] = 0;
        param_1[0xc2] = 0;
        param_1[0xc3] = 0;
      }
      if (iVar17 == 0) {
        if (iVar11 != 0) {
          FUN_4a084b60(param_1 + 0xc6,*(undefined4 *)(param_1[10] + 0x470));
          FUN_4a084b60(param_1 + 0xe3,*(undefined4 *)(param_1[10] + 0x474));
          FUN_4a084b60(param_1 + 0x100,*(undefined4 *)(param_1[10] + 0x478));
          FUN_4a084b60(param_1 + 0x11d,*(undefined4 *)(param_1[10] + 0x48c));
          FUN_4a084b60(param_1 + 0x13a,*(undefined4 *)(param_1[10] + 0x484));
          uVar16 = *(undefined4 *)(param_1[10] + 0x488);
          iVar11 = 0;
          if (0 < (int)param_1[0x16c]) {
            do {
              if (param_1[0x165] == 0) {
                iVar17 = 0;
              }
              else {
                iVar17 = *(int *)(param_1[0x165] + 8);
              }
              *(undefined4 *)(iVar17 + iVar11 * 4) = uVar16;
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)param_1[0x16c]);
          }
          if (0 < (int)param_1[0x16d]) {
            iVar11 = 0;
            do {
              if (param_1[0x16a] == 0) {
                iVar17 = 0;
              }
              else {
                iVar17 = *(int *)(param_1[0x16a] + 8);
              }
              *(undefined4 *)(iVar17 + iVar11 * 4) = uVar16;
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)param_1[0x16d]);
          }
          param_1[0x173] = uVar16;
          param_1[0x171] = uVar16;
          param_1[0x170] = uVar16;
          return param_1 + 0x157;
        }
        return (undefined4 *)0x0;
      }
      return (undefined4 *)0x0;
    case 3:
      uVar9 = param_1[0x1f9];
      iVar17 = *(int *)(param_1[8] + 0x260);
      iVar11 = FUN_4a085614(iVar17);
      if (iVar11 != 0) {
        FUN_4a0866c0(iVar17,uVar9);
      }
      if (*(int *)(iVar17 + 0x74) == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = *(int *)(*(int *)(iVar17 + 0x74) + 8);
      }
      iVar11 = iVar11 + uVar9 * 0x14;
      iVar13 = *(int *)(iVar11 + 8);
      iVar17 = 0;
      if (0 < iVar13) {
        iVar11 = *(int *)(iVar11 + 0xc);
        do {
          if (iVar11 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(iVar11 + 8);
          }
          piVar25 = *(int **)(iVar5 + iVar17 * 4);
          if (piVar25[1] != 400) {
            (**(code **)(*piVar25 + 0x28))(piVar25);
            (**(code **)(*piVar25 + 0x30))(piVar25,0);
            (**(code **)(*piVar25 + 0x3c))(piVar25);
            return (undefined4 *)(uVar9 | iVar17 << 0x10);
          }
          iVar17 = iVar17 + 1;
        } while (iVar17 < iVar13);
      }
      return (undefined4 *)0xffffffff;
    case 5:
      goto LAB_4a10d23c;
    }
  case (undefined4 *)0xf:
    FUN_4a10cee8(param_1,param_2);
    switch(param_1[0x298]) {
    default:
      return param_2;
    case 1:
      if (*(char *)(param_1 + 0xb6) == '\0') {
        return (undefined4 *)0x0;
      }
      param_1[0xa4] = 6;
      FUN_4a0cd7c0(param_1,0xc78);
      FUN_4a1161d0(param_1,9);
      puVar12 = (undefined4 *)param_1[9];
      break;
    case 2:
      iVar11 = 0;
      if (*(int *)PTR_DAT_4a113f60 != 0) {
        iVar11 = *(int *)PTR_DAT_4a113f64;
      }
      if (*(int *)PTR_DAT_4a113f60 == 0 || iVar11 == 0) {
        uVar16 = 3;
        goto LAB_4a120fd8;
      }
      param_1[0xa4] = 6;
      FUN_4a0cd7c0(param_1,0xcd7);
      FUN_4a1161d0(param_1,9);
      puVar12 = (undefined4 *)param_1[9];
      break;
    case 3:
      if ((undefined4 *)(uint)*(byte *)(param_1 + 0x29b) != (undefined4 *)0x0) {
        return (undefined4 *)(uint)*(byte *)(param_1 + 0x29b);
      }
      puVar12 = (undefined4 *)param_1[0x29a];
      if ((((uint)puVar12 & 1) == 0 || ((uint)puVar12 & 6) == 0) &&
         (((uint)puVar12 & 2) == 0 || ((uint)puVar12 & 4) == 0)) {
        return puVar12;
      }
      uVar16 = 4;
LAB_4a120fd8:
      puVar12 = param_1;
      switch(uVar16) {
      case 0:
        FUN_4a0d6154(param_1[9]);
        param_1[0x299] = 0;
        param_1[0xa4] = 6;
        FUN_4a0cd7c0(param_1,0x84e);
        FUN_4a1161d0(param_1,9);
        puVar12 = (undefined4 *)FUN_4a0d58d0(param_1[9]);
        break;
      case 1:
        puVar12 = (undefined4 *)FUN_4a11e2a0(param_1,9);
        break;
      case 3:
        puVar12 = (undefined4 *)(param_1[0x299] ^ 0x1010);
        param_1[0x299] = puVar12;
        break;
      case 4:
        param_1[0xa4] = 6;
        FUN_4a0cd7c0(param_1,0xc7a);
        FUN_4a1161d0(param_1,9);
        puVar12 = (undefined4 *)FUN_4a0d58d0(param_1[9]);
        break;
      case 5:
        param_1[0xae] = 2;
        if ((param_1[0xad] == 0) || (iVar11 = FUN_4a146b58(param_1[0xad],2), iVar11 == 0)) {
          param_1[0xad] = 0;
          FUN_4a115d8c(param_1,0);
        }
        puVar12 = (undefined4 *)0x0;
        *(undefined1 *)(param_1 + 0x77) = 0;
        break;
      case 6:
        puVar12 = (undefined4 *)(param_1[0x299] ^ 1);
        param_1[0x299] = puVar12;
        break;
      case 7:
        param_1[0x299] = param_1[0x299] ^ 4;
        FUN_4a0d761c(param_1[9],0,0x22ffff);
        FUN_4a0d761c(param_1[9],2,0x4b0000);
        FUN_4a0d761c(param_1[9],1,0x640000);
        FUN_4a0d761c(param_1[9],5,0x4b0000);
        FUN_4a0d761c(param_1[9],3,0x4b0000);
        FUN_4a0d761c(param_1[9],4,0x4b0000);
        puVar12 = (undefined4 *)0xbb8;
        param_1[0x29c] = 3000;
      }
      param_1[0x298] = uVar16;
      return puVar12;
    case 6:
      iVar11 = (**(code **)(*(int *)param_1[0x17e] + 0x10))();
      if (iVar11 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a113d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar12 = (undefined4 *)(*UNRECOVERED_JUMPTABLE)();
        return puVar12;
      }
      param_1[0xa4] = 6;
      FUN_4a0cd7c0(param_1,0xc7e);
      FUN_4a1161d0(param_1,9);
      puVar12 = (undefined4 *)param_1[9];
      break;
    case 7:
      param_2 = (undefined4 *)(param_1[0x29c] - (int)param_2);
      param_1[0x29c] = param_2;
      if (0 < (int)param_2) {
        return param_2;
      }
      param_1[0xa4] = 6;
      FUN_4a0cd7c0(param_1,0x862,0xc7d);
      FUN_4a1161d0(param_1,9);
      puVar12 = (undefined4 *)param_1[9];
      break;
    case 8:
      if (*(char *)(param_1 + 0x29d) == '\0') {
        if ((int)param_1[0x1db] < 1) {
          return (undefined4 *)param_1[0x1db];
        }
        piVar25 = (int *)0x0;
        if (param_1[0x1df] != 0) {
          piVar25 = *(int **)(param_1[0x1df] + 8);
        }
        if ((undefined4 *)*piVar25 != (undefined4 *)0x83) {
          return (undefined4 *)*piVar25;
        }
        *(undefined1 *)(param_1 + 0x29d) = 1;
        return (undefined4 *)0x1;
      }
      iVar11 = (**(code **)(*(int *)param_1[0x17e] + 0x10))();
      if (iVar11 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a113e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar12 = (undefined4 *)(*UNRECOVERED_JUMPTABLE)();
        return puVar12;
      }
      FUN_4a0d761c(param_1[9],0,0x410000);
      param_1[0xa4] = 6;
      FUN_4a0cd7c0(param_1,0xc7f,0x839);
      FUN_4a1161d0(param_1,9);
      puVar12 = (undefined4 *)param_1[9];
      break;
    case 10:
      if (*(char *)(param_1 + 0x29d) == '\0') {
        param_2 = (undefined4 *)(param_1[0x29c] - (int)param_2);
        param_1[0x29c] = param_2;
        if ((int)param_2 < 1) {
          FUN_4a0d58e0(param_1[9]);
          *(undefined1 *)(param_1 + 0x29d) = 1;
          return (undefined4 *)0x1;
        }
        return param_2;
      }
      param_1[0xa4] = 6;
      FUN_4a0cd7c0(param_1,0xc83);
      FUN_4a1161d0(param_1,9);
      puVar12 = (undefined4 *)param_1[9];
      break;
    case 0xb:
      uVar16 = FUN_4a171fac();
      uVar16 = FUN_4a17211c(uVar16,DAT_4a113f68);
      uVar16 = FUN_4a17211c(uVar16,param_1[0x29f]);
      uVar10 = FUN_4a171a94(uVar16,param_1[0x29e]);
      uVar3 = DAT_4a113f6c;
      param_1[0x29e] = uVar10;
      uVar9 = uVar3;
      if (((int)uVar3 < (int)uVar10) && (uVar9 = DAT_4a113f70, (int)uVar10 < (int)DAT_4a113f70)) {
                    /* WARNING: Could not recover jumptable at 0x4a113f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar12 = (undefined4 *)(*UNRECOVERED_JUMPTABLE)();
        return puVar12;
      }
      bVar24 = uVar9 <= uVar10;
      FUN_4a172458(uVar3,uVar10);
      uVar9 = DAT_4a113f70;
      if (!bVar24) {
        uVar10 = uVar3;
      }
      FUN_4a1720a0(DAT_4a113f70,uVar10);
      if (!bVar24) {
        uVar10 = uVar9;
      }
      param_1[0x29e] = uVar10;
      uVar9 = param_1[0x29f];
      param_1[0x29f] = (undefined4 *)(uVar9 ^ 0x80000000);
      return (undefined4 *)(uVar9 ^ 0x80000000);
    }
    puVar12[0x261] = 0x9c4;
    return puVar12;
  }
  *(code **)(puVar21 + -4) = pcVar22;
  *(undefined4 *)(puVar21 + -8) = unaff_r6;
  *(undefined4 **)(puVar21 + -0xc) = unaff_r5;
  piVar25 = (int *)(puVar21 + -0x10);
  *piVar25 = unaff_r4;
  switch(param_1[0xaf]) {
  case 0:
    goto switchD_4a1100dc_caseD_0;
  case 1:
    FUN_4a111968(param_1);
    if (*(char *)(param_1 + 0xb6) == '\0') {
      FUN_4a11bfc8(param_1,param_2);
    }
    else {
      FUN_4a111968(param_1);
      *(undefined4 *)(param_1[10] + 0x470) = param_1[0xb0];
      *(undefined4 *)(param_1[10] + 0x474) = param_1[0xb1];
      *(undefined4 *)(param_1[10] + 0x478) = param_1[0xb2];
      *(undefined1 *)(param_1 + 0xb6) = 1;
    }
    goto switchD_4a1100dc_caseD_0;
  case 2:
  case 3:
    FUN_4a111968(param_1);
    break;
  case 4:
  case 5:
    break;
  case 6:
    if (param_1[0x1fd] == 2) goto switchD_4a1100dc_default;
    break;
  case 7:
    iVar11 = param_1[0x1fd];
    bVar24 = iVar11 != 1;
    if (!bVar24) {
      iVar11 = param_1[0x1fb];
    }
    if (bVar24 || iVar11 != 8) goto switchD_4a1100dc_default;
    FUN_4a11f284(param_1);
    break;
  case 8:
    FUN_4a11bfc8(param_1,param_2);
    if (*(char *)(param_1 + 0xb6) != '\0') {
      FUN_4a11e2a0(param_1,0);
    }
    goto switchD_4a1100dc_default;
  case 9:
    iVar11 = param_1[10];
    param_1[0xb0] = *(undefined4 *)(iVar11 + 0x470);
    param_1[0xb1] = *(undefined4 *)(iVar11 + 0x474);
    param_1[0xb2] = *(undefined4 *)(iVar11 + 0x478);
    param_1[0xb5] = 0x443b8000;
    param_1[0xb3] = *(undefined4 *)(iVar11 + 0x484);
    param_1[0xb4] = *(undefined4 *)(iVar11 + 0x488);
    break;
  default:
    goto switchD_4a1100dc_default;
  }
  FUN_4a11bfc8(param_1,param_2);
switchD_4a1100dc_default:
  iVar11 = param_1[10];
  iVar17 = *piVar25;
  uVar16 = *(undefined4 *)(puVar21 + -0xc);
  uVar19 = *(undefined4 *)(puVar21 + -8);
  *(undefined4 *)(puVar21 + -4) = *(undefined4 *)(puVar21 + -4);
  *(undefined4 *)(puVar21 + -8) = unaff_r11;
  *(undefined4 *)(puVar21 + -0xc) = unaff_r10;
  *piVar25 = unaff_r9;
  *(undefined4 *)(puVar21 + -0x14) = unaff_r8;
  *(undefined4 **)(puVar21 + -0x18) = unaff_r7;
  *(undefined4 *)(puVar21 + -0x1c) = uVar19;
  *(undefined4 *)(puVar21 + -0x20) = uVar16;
  *(int *)(puVar21 + -0x24) = iVar17;
  uVar16 = FUN_4a0d4990(*(undefined4 *)(iVar11 + 0x488));
  iVar17 = 0;
  if (0 < *(int *)(iVar11 + 0x3d4)) {
    do {
      if (*(int *)(iVar11 + 0x3d8) == 0) {
        iVar13 = 0;
      }
      else {
        iVar13 = *(int *)(*(int *)(iVar11 + 0x3d8) + 8);
      }
      uVar19 = *(undefined4 *)(iVar13 + iVar17 * 4);
      *(undefined4 **)(puVar21 + -0x60) = param_2;
      FUN_4a0baf80(uVar19,*(undefined4 *)(iVar11 + 0x470),*(undefined4 *)(iVar11 + 0x478),uVar16);
      iVar17 = iVar17 + 1;
    } while (iVar17 < *(int *)(iVar11 + 0x3d4));
  }
  iVar13 = *(int *)(iVar11 + 0x3f0);
  iVar17 = 0;
  if (0 < iVar13) {
    do {
      FUN_4a0688f4(*(undefined4 *)(*(int *)(iVar11 + 0x3f4) + iVar17 * 4));
      iVar17 = iVar17 + 1;
    } while (iVar17 < iVar13);
  }
  iVar17 = iVar11 + 0x20;
  *(undefined4 *)(puVar21 + -0x28) = *(undefined4 *)(iVar11 + 0x464);
  if (*(int *)(iVar11 + 0x2c) == 0) {
    puVar12 = (undefined4 *)0x0;
  }
  else {
    puVar12 = *(undefined4 **)(*(int *)(iVar11 + 0x2c) + 8);
  }
  *puVar12 = 0;
  if (*(int *)(iVar11 + 0x2c) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(*(int *)(iVar11 + 0x2c) + 8);
  }
  *(undefined4 *)(iVar13 + 4) = 0;
  if (*(int *)(iVar11 + 0x2c) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(*(int *)(iVar11 + 0x2c) + 8);
  }
  *(undefined4 *)(iVar13 + 8) = 0;
  if (*(int *)(iVar11 + 0x2c) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(*(int *)(iVar11 + 0x2c) + 8);
  }
  *(undefined4 *)(iVar13 + 0xc) = 0x3f800000;
  FUN_4a13c870(*(undefined4 *)(puVar21 + -0x28),iVar17);
  puVar12 = *(undefined4 **)(iVar11 + 0x2c);
  bVar24 = puVar12 == (undefined4 *)0x0;
  if (bVar24) {
    puVar14 = (undefined4 *)0x0;
  }
  else {
    puVar14 = (undefined4 *)puVar12[2];
  }
  *(undefined4 *)(puVar21 + -0x2c) = *puVar14;
  if (bVar24) {
    iVar13 = 0;
  }
  else {
    iVar13 = puVar12[2];
  }
  *(undefined4 *)(puVar21 + -0x30) = *(undefined4 *)(iVar13 + 4);
  if (bVar24) {
    iVar13 = 0;
  }
  else {
    iVar13 = puVar12[2];
  }
  if (bVar24) {
    puVar12 = (undefined4 *)0x0;
  }
  *(undefined4 *)(puVar21 + -0x34) = *(undefined4 *)(iVar13 + 8);
  if (!bVar24) {
    puVar12 = (undefined4 *)puVar12[2];
  }
  *puVar12 = 0;
  if (*(int *)(iVar11 + 0x2c) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(*(int *)(iVar11 + 0x2c) + 8);
  }
  *(undefined4 *)(iVar13 + 4) = 0;
  if (*(int *)(iVar11 + 0x2c) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(*(int *)(iVar11 + 0x2c) + 8);
  }
  *(undefined4 *)(iVar13 + 8) = 0xbf800000;
  if (*(int *)(iVar11 + 0x2c) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(*(int *)(iVar11 + 0x2c) + 8);
  }
  *(undefined4 *)(iVar13 + 0xc) = 0x3f800000;
  FUN_4a13c870(*(undefined4 *)(puVar21 + -0x28),iVar17);
  iVar13 = *(int *)(iVar11 + 0x2c);
  if (iVar13 == 0) {
    puVar12 = (undefined4 *)0x0;
  }
  else {
    puVar12 = *(undefined4 **)(iVar13 + 8);
  }
  uVar16 = FUN_4a1725c0(*puVar12,*(undefined4 *)(puVar21 + -0x2c));
  *(undefined4 *)(puVar21 + -0x38) = uVar16;
  if (iVar13 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iVar13 + 8);
  }
  uVar16 = FUN_4a1725c0(*(undefined4 *)(iVar5 + 4),*(undefined4 *)(puVar21 + -0x30));
  if (iVar13 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iVar13 + 8);
  }
  uVar19 = FUN_4a1725c0(*(undefined4 *)(iVar5 + 8),*(undefined4 *)(puVar21 + -0x34));
  if (iVar13 == 0) {
    puVar12 = (undefined4 *)0x0;
  }
  else {
    puVar12 = *(undefined4 **)(iVar13 + 8);
  }
  *puVar12 = 0x3f800000;
  if (*(int *)(iVar11 + 0x2c) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(*(int *)(iVar11 + 0x2c) + 8);
  }
  *(undefined4 *)(iVar13 + 4) = 0;
  if (*(int *)(iVar11 + 0x2c) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(*(int *)(iVar11 + 0x2c) + 8);
  }
  *(undefined4 *)(iVar13 + 8) = 0;
  if (*(int *)(iVar11 + 0x2c) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(*(int *)(iVar11 + 0x2c) + 8);
  }
  *(undefined4 *)(iVar13 + 0xc) = 0x3f800000;
  FUN_4a13c870(*(undefined4 *)(puVar21 + -0x28),iVar17);
  iVar17 = *(int *)(iVar11 + 0x2c);
  if (iVar17 == 0) {
    puVar12 = (undefined4 *)0x0;
  }
  else {
    puVar12 = *(undefined4 **)(iVar17 + 8);
  }
  uVar6 = FUN_4a1725c0(*puVar12,*(undefined4 *)(puVar21 + -0x2c));
  if (iVar17 == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(iVar17 + 8);
  }
  uVar7 = FUN_4a1725c0(*(undefined4 *)(iVar13 + 4),*(undefined4 *)(puVar21 + -0x30));
  if (iVar17 == 0) {
    iVar17 = 0;
  }
  else {
    iVar17 = *(int *)(iVar17 + 8);
  }
  uVar8 = FUN_4a1725c0(*(undefined4 *)(iVar17 + 8),*(undefined4 *)(puVar21 + -0x34));
  uVar15 = *(undefined4 *)(*(int *)(iVar11 + 0x1c) + 0x260);
  *(undefined4 *)(puVar21 + -0x40) = uVar8;
  *(undefined4 *)(puVar21 + -0x3c) = uVar15;
  *(undefined4 *)(puVar21 + -0x48) = uVar6;
  *(undefined4 *)(puVar21 + -0x44) = uVar7;
  *(undefined4 *)(puVar21 + -0x4c) = uVar19;
  *(undefined4 *)(puVar21 + -0x5c) = 0;
  *(undefined4 *)(puVar21 + -0x54) = *(undefined4 *)(puVar21 + -0x38);
  *(undefined4 *)(puVar21 + -0x50) = uVar16;
  *(undefined4 *)(puVar21 + -0x58) = 0;
  *(undefined4 *)(puVar21 + -0x60) = 0;
  FUN_4a08581c(*(undefined4 *)(puVar21 + -0x3c),*(undefined4 *)(iVar11 + 0x470),
               *(undefined4 *)(iVar11 + 0x474),*(undefined4 *)(iVar11 + 0x478));
  iVar17 = FUN_4a0fba7c(*(undefined4 *)(iVar11 + 0x1c));
  bVar24 = *(int *)(iVar17 + 0x1c0) == 0x10;
  if (bVar24) {
    iVar17 = *(int *)(iVar17 + 0x7f4);
  }
  if (!bVar24 || iVar17 != 2) {
    iVar17 = FUN_4a0fba7c(*(undefined4 *)(iVar11 + 0x1c));
    bVar24 = *(int *)(iVar17 + 0x1c0) == 0x10;
    if (bVar24) {
      iVar17 = *(int *)(iVar17 + 0x7f4);
    }
    if (!bVar24 || iVar17 != 0) {
      uVar9 = *(int *)(iVar11 + 0x44c) - (int)param_2;
      *(uint *)(iVar11 + 0x44c) = uVar9;
      if (-1 < (int)uVar9) {
        uVar9 = (uint)*(byte *)(iVar11 + 0x450);
      }
      if (uVar9 != 0) {
        *(undefined4 *)(iVar11 + 0x44c) = 0x2ee;
        uVar9 = FUN_4a0f1650(iVar11);
        bVar24 = uVar9 == 0;
        if (bVar24) {
          uVar9 = (uint)*(byte *)(iVar11 + 0x450);
        }
        if (!bVar24 || uVar9 != 0) {
          FUN_4a0f1b44(iVar11);
        }
        *(undefined1 *)(iVar11 + 0x450) = 0;
      }
    }
  }
  uVar16 = FUN_4a077b38();
  FUN_4a0816c8(uVar16,param_2);
  FUN_4a06f7a4(iVar11 + 0x420,param_2);
  FUN_4a0fba7c(*(undefined4 *)(iVar11 + 0x1c));
  iVar17 = FUN_4a146d64();
  if (iVar17 == 0) {
    return (undefined4 *)0x0;
  }
  iVar11 = FUN_4a145a38(*(undefined4 *)(iVar11 + 0x1c));
  if (iVar11 != 4) {
                    /* WARNING: Could not recover jumptable at 0x4a0f1638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar12 = (undefined4 *)(**(code **)(puVar21 + -4))();
    return puVar12;
  }
  iVar13 = FUN_4a077b38();
  uVar16 = *(undefined4 *)(puVar21 + -0x18);
  uVar19 = *(undefined4 *)(puVar21 + -0x14);
  *(undefined4 *)(puVar21 + -4) = *(undefined4 *)(puVar21 + -4);
  *(undefined4 *)(puVar21 + -8) = *(undefined4 *)(puVar21 + -0x1c);
  *(undefined4 *)(puVar21 + -0xc) = *(undefined4 *)(puVar21 + -0x20);
  puVar12 = (undefined4 *)(puVar21 + -0x10);
  *puVar12 = *(undefined4 *)(puVar21 + -0x24);
  iVar11 = *(int *)(iVar13 + 0xcc) + (int)param_2;
  iVar17 = (int)((ulonglong)((longlong)DAT_4a0816b0 * (longlong)iVar11) >> 0x20);
  *(int *)(iVar13 + 0xcc) = iVar11 + ((iVar17 >> 0xf) - (iVar17 >> 0x1f)) * -90000;
  iVar11 = *(int *)(iVar13 + 0xd0) + (int)param_2;
  iVar17 = (int)((ulonglong)((longlong)DAT_4a0816b4 * (longlong)iVar11) >> 0x20);
  *(int *)(iVar13 + 0xd0) = iVar11 + ((iVar17 >> 9) - (iVar17 >> 0x1f)) * -24000;
  iVar17 = *(int *)(iVar13 + 0xd4) + (int)param_2;
  lVar2 = (longlong)DAT_4a0816b8 * (longlong)iVar17;
  iVar5 = (int)((ulonglong)lVar2 >> 0x20);
  iVar11 = iVar5 >> 0xb;
  *(int *)(iVar13 + 0xd4) = iVar17 + (iVar11 - (iVar5 >> 0x1f)) * -32000;
  iVar17 = 0;
  if (*(int *)(iVar13 + 0x2c) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(iVar13 + 0x2c) + 8);
  }
  iVar11 = FUN_4a136540(*(undefined4 *)(iVar5 + 0x54),0,iVar11,(int)lVar2);
  if (iVar11 != 0) {
    uVar6 = FUN_4a171fac(*(undefined4 *)(iVar13 + 0xcc));
    uVar6 = FUN_4a17295c(uVar6,1);
    uVar6 = FUN_4a17211c(uVar6,DAT_4a0816bc);
    FUN_4a0af1d4(iVar11,0,uVar6);
  }
  if (*(int *)(iVar13 + 0x2c) == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(*(int *)(iVar13 + 0x2c) + 8);
  }
  iVar11 = FUN_4a136540(*(undefined4 *)(iVar11 + 0x58),0);
  if (iVar11 != 0) {
    uVar6 = FUN_4a171fac(*(undefined4 *)(iVar13 + 0xd0));
    uVar6 = FUN_4a17295c(uVar6,1);
    uVar6 = FUN_4a17211c(uVar6,DAT_4a0816c0);
    FUN_4a0af1d4(iVar11,uVar6,0);
  }
  if (*(int *)(iVar13 + 0x2c) != 0) {
    iVar17 = *(int *)(*(int *)(iVar13 + 0x2c) + 8);
  }
  iVar11 = FUN_4a136540(*(undefined4 *)(iVar17 + 0x5c),0);
  uVar23 = iVar11 == 0;
  if (!(bool)uVar23) {
    uVar6 = FUN_4a171fac(*(undefined4 *)(iVar13 + 0xd4));
    uVar6 = FUN_4a17295c(uVar6,1);
    uVar6 = FUN_4a17211c(uVar6,DAT_4a0816c4);
    uVar7 = *puVar12;
    uVar8 = *(undefined4 *)(puVar21 + -0xc);
    uVar15 = *(undefined4 *)(puVar21 + -8);
    *(undefined4 *)(puVar21 + -4) = *(undefined4 *)(puVar21 + -4);
    *(undefined4 *)(puVar21 + -8) = uVar19;
    *(undefined4 *)(puVar21 + -0xc) = uVar16;
    *puVar12 = uVar15;
    *(undefined4 *)(puVar21 + -0x14) = uVar8;
    *(undefined4 *)(puVar21 + -0x18) = uVar7;
    puVar12 = (undefined4 *)FUN_4a171da0(*(undefined4 *)(iVar11 + 0x28));
    if ((bool)uVar23) {
      puVar12 = (undefined4 *)FUN_4a171da0(*(undefined4 *)(iVar11 + 0x2c),0);
    }
    if ((bool)uVar23) {
      puVar12 = (undefined4 *)FUN_4a171da0(*(undefined4 *)(iVar11 + 0x30),0);
    }
    if (!(bool)uVar23) {
      *(undefined4 *)(iVar11 + 0x28) = uVar6;
      *(undefined4 *)(iVar11 + 0x2c) = 0;
      *(undefined4 *)(iVar11 + 0x30) = 0;
      *(undefined1 *)(iVar11 + 200) = 0;
      return (undefined4 *)0x0;
    }
    return puVar12;
  }
  return (undefined4 *)0x0;
switchD_4a1100dc_caseD_0:
  FUN_4a11fc98(param_1,param_2);
  goto switchD_4a1100dc_default;
LAB_4a10d23c:
  uVar16 = 0x7fc00;
  if (param_1[0x76] == 2) {
    uVar16 = 0x77c00;
  }
  FUN_4a0fcc1c(param_1[8],uVar16,0xffffffff);
  iVar11 = param_1[0x1f8];
  if (iVar11 == 0) {
    iVar11 = param_1[8];
    puVar12 = (undefined4 *)(iVar11 + 0x460);
    *puVar12 = 1;
    *(undefined4 *)(iVar11 + 0x464) = 0xffffffff;
    return puVar12;
  }
  if (iVar11 != 2) {
    if (iVar11 == 3) {
      param_1[0x1f1] = 0x1e;
      iVar11 = FUN_4a0d7508(param_1[9]);
      if (iVar11 != 0) {
        uVar16 = thunk_FUN_4a161570(0x14);
        uVar16 = FUN_4a0c707c(uVar16,PTR_s_woohoo_4a10d338);
        uVar19 = FUN_4a0941ec();
        FUN_4a094d04(uVar19,uVar16);
        param_1[0xa4] = 7;
        FUN_4a0cd7c0(param_1,0xb65);
        FUN_4a1161d0(param_1,9);
        uVar16 = 2;
        goto FUN_4a11be8c;
      }
    }
    else if ((iVar11 == 5) && (iVar11 = FUN_4a142f18(param_1[10]), iVar11 != 0)) {
      FUN_4a0daefc(param_1[9],0x3e);
    }
  }
  param_1[0x70] = 6;
  param_1[0x71] = 0;
  *(undefined1 *)(param_1 + 0x77) = 1;
  host_s3eAccelerometerStop_arm();
                    /* WARNING: Could not recover jumptable at 0x4a116200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar12 = (undefined4 *)(*(code *)PTR_caseD_6_4a116220)();
  return puVar12;
}



// Address: 4a12785c

undefined4 FUN_4a12785c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_2c [8];
  int local_24;
  int local_20;
  
  FUN_4a110aac(auStack_2c,param_1);
  iVar2 = 0;
  if (0 < local_24) {
    do {
      if (local_20 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(local_20 + 8);
      }
      uVar3 = *(undefined4 *)(iVar1 + iVar2 * 4);
      iVar1 = FUN_4a146a9c(uVar3);
      if (iVar1 == param_2) {
        FUN_4a169a1c(auStack_2c);
        return uVar3;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_24);
  }
  FUN_4a169a1c(auStack_2c);
  return 0;
}



// Address: 4a1278e8

/* WARNING: Removing unreachable block (ram,0x4a116204) */

void FUN_4a1278e8(int param_1,int param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x1cc) = 2;
  *(undefined4 *)(param_1 + 0x1d0) = 0x62;
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x1c0) = 4;
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    *(undefined1 *)(param_1 + 0x1dc) = 1;
    host_s3eAccelerometerStop_arm();
                    /* WARNING: Could not recover jumptable at 0x4a116200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_caseD_4_4a116218)();
    return;
  }
  *(undefined4 *)(param_1 + 0x1c8) = 2;
  iVar1 = FUN_4a0fb654(*(undefined4 *)(param_1 + 0x20));
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    *(undefined4 *)(iVar1 + 0x44c) = 0xffffff;
    *(undefined4 *)(iVar1 + 0x450) = 0xffffffff;
    *(undefined1 *)(iVar1 + 0x448) = 1;
    *(undefined1 *)(iVar1 + 0x458) = 0;
    return;
  }
  return;
}



// Address: 4a127938

void FUN_4a127938(int param_1)

{
  short sVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  undefined *apuStack_3c [2];
  int iStack_34;
  int *piStack_30;
  undefined *puStack_28;
  
  iVar10 = *(int *)(*(int *)(param_1 + 0x20) + 0x260);
  if (*(int *)(param_1 + 0x1d8) == 2) {
    FUN_4a086318(iVar10,0x48);
    FUN_4a086318(iVar10,0x41);
    FUN_4a086318(iVar10,0x53);
  }
  if (*(int *)(param_1 + 0x1d8) == 1) {
    FUN_4a086318(iVar10,0x49);
    FUN_4a086318(iVar10,0x4b);
    FUN_4a086318(iVar10,0x4c);
    FUN_4a086318(iVar10,0x42);
    FUN_4a086318(iVar10,0x54);
    FUN_4a086318(iVar10,0x55);
    FUN_4a086318(iVar10,0x56);
  }
  else {
    FUN_4a086318(iVar10,0x40);
    FUN_4a086318(iVar10,0x41);
    FUN_4a086318(iVar10,0x10);
    FUN_4a086318(iVar10,0x42);
    FUN_4a086318(iVar10,0x47);
    FUN_4a086318(iVar10,0x46);
    FUN_4a086318(iVar10,0x45);
    FUN_4a086318(iVar10,0x43);
    FUN_4a086318(iVar10,0x44);
    FUN_4a086318(iVar10,0x4c);
    FUN_4a086318(iVar10,0x4a);
    FUN_4a086318(iVar10,0x4d);
    FUN_4a086318(iVar10,0x4f);
    FUN_4a086318(iVar10,0x50);
    FUN_4a086318(iVar10,0x51);
    FUN_4a086318(iVar10,0x52);
    FUN_4a086318(iVar10,0x4e);
    FUN_4a086318(iVar10,0x53);
    FUN_4a086318(iVar10,0x54);
    FUN_4a086318(iVar10,0x55);
    FUN_4a086318(iVar10,0x56);
  }
  FUN_4a086318(iVar10,0xc);
  FUN_4a086318(iVar10,0xe);
  FUN_4a086318(iVar10,0xd);
  FUN_4a086318(iVar10,0x11);
  FUN_4a086318(iVar10,0xf);
  FUN_4a085310();
  if (*(int *)(iVar10 + 0x4c) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(iVar10 + 0x4c) + 8);
  }
  uVar11 = (uint)*(byte *)(iVar4 + 0x17);
  piVar5 = (int *)FUN_4a0c6bc0(apuStack_3c);
  puStack_28 = PTR_PTR_4a0865f4;
  piVar5[2] = 0;
  piVar5[3] = 0;
  *piVar5 = (int)puStack_28;
  if (uVar11 != 0) {
    iVar4 = FUN_4a15e080(uVar11 << 2);
    if (iVar4 == 0) {
      iVar4 = FUN_4a1669a8();
    }
    iVar9 = 0;
    do {
      *(undefined4 *)(iVar4 + iVar9 * 4) = 0;
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)uVar11);
    thunk_FUN_4a161570(0x18);
    puVar6 = (undefined4 *)FUN_4a0c0628();
    puVar6[3] = 4;
    puVar6[4] = uVar11;
    puVar3 = PTR_PTR_4a0865f8;
    *puVar6 = PTR_PTR_4a0865f8;
    puVar6[2] = iVar4;
    *(undefined1 *)(puVar6 + 5) = 1;
    if (puVar6 != (undefined4 *)0x0) {
      (**(code **)(puVar3 + 0xc))(puVar6);
    }
    (**(code **)(*piVar5 + 0x1c))(piVar5);
    piVar5[2] = uVar11;
    piVar5[3] = (int)puVar6;
  }
  piVar5 = piStack_30;
  iVar4 = iStack_34;
  if (*(int *)(iVar10 + 0x74) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(int *)(iVar10 + 0x74) + 8);
  }
  if (piStack_30 != (int *)0x0) {
    (**(code **)(*piStack_30 + 0xc))(piStack_30);
  }
  (**(code **)(*(int *)(iVar9 + 0x1cc) + 0x1c))((int *)(iVar9 + 0x1cc));
  *(int *)(iVar9 + 0x1d4) = iVar4;
  piVar12 = (int *)0x0;
  *(int **)(iVar9 + 0x1d8) = piVar5;
  iVar4 = 0;
  if (uVar11 != 0) {
    do {
      if (iVar4 == 0) {
        if (*(int *)(iVar10 + 0x24) == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *(int *)(*(int *)(iVar10 + 0x24) + 8);
        }
        sVar1 = *(short *)(iVar9 + 0x2e);
        uVar7 = thunk_FUN_4a161570(0x14);
        piVar8 = (int *)FUN_4a0c707c(uVar7,PTR_s_bin_anim2d_bin_4a0865fc + sVar1 * 0x3b);
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 0xc))(piVar8);
        }
        bVar2 = false;
        uVar7 = thunk_FUN_4a161570(0x14);
        uVar7 = FUN_4a0c707c(uVar7,PTR_DAT_4a086600);
        iVar9 = FUN_4a13e1c4(piVar8,uVar7);
        if (iVar9 == 0) {
          uVar7 = thunk_FUN_4a161570(0x14);
          uVar7 = FUN_4a0c707c(uVar7,PTR_DAT_4a086604);
          iVar9 = FUN_4a13e1c4(piVar8,uVar7);
          if (iVar9 != 0) goto LAB_4a086508;
        }
        else {
LAB_4a086508:
          bVar2 = true;
        }
        piVar5 = (int *)FUN_4a0c7964(piVar8);
        if (piVar5 != (int *)0x0 && bVar2) {
          (**(code **)(*piVar5 + 0x2c))(piVar5);
        }
        piVar12 = piVar5;
        if ((piVar8 != (int *)0x0) && (iVar9 = (**(code **)(*piVar8 + 8))(piVar8), iVar9 != 0)) {
          (**(code **)(*piVar8 + 4))(piVar8);
        }
      }
      else {
        piVar5 = (int *)FUN_4a0c80a0(piVar12);
      }
      if (piStack_30 == (int *)0x0) {
        iVar9 = 0;
      }
      else {
        iVar9 = piStack_30[2];
      }
      *(int **)(iVar9 + iVar4 * 4) = piVar5;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar11);
  }
  apuStack_3c[0] = puStack_28;
  iVar10 = FUN_4a0bcc84(apuStack_3c);
  if (iVar10 != 0) {
    iVar4 = 0;
    if (0 < iStack_34) {
      do {
        iVar4 = iVar4 + 1;
      } while (iVar4 < iStack_34);
      if (iVar10 == 0) goto LAB_4a0865e0;
    }
    FUN_4a14f21c();
  }
LAB_4a0865e0:
  FUN_4a0c6bf4(apuStack_3c);
  return;
}



// Address: 4a127b24

void FUN_4a127b24(int param_1)

{
  FUN_4a07378c(*(undefined4 *)(param_1 + 0x5f8),9,0);
  if (*(int *)(param_1 + 0x1d8) == 2) {
    if (*(char *)(param_1 + 0x632) != '\0') {
      *(undefined1 *)(param_1 + 0x632) = 0;
      *(undefined1 *)(param_1 + 0x633) = 0;
      *(undefined2 *)(param_1 + 0x634) = 0xffff;
      *(undefined4 *)(param_1 + 0x674) = 0;
      *(undefined4 *)(param_1 + 0x2b4) = 0;
      FUN_4a115d8c(param_1,0);
    }
    *(undefined4 *)(param_1 + 0x298) = *(undefined4 *)(*(int *)(param_1 + 0x5f8) + 0xd4);
    *(undefined4 *)(param_1 + 0x294) = 1;
    FUN_4a0d58d0(*(undefined4 *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x29c) = 0;
    return;
  }
  return;
}



// Address: 4a127ce8

/* WARNING: Removing unreachable block (ram,0x4a120cd4) */
/* WARNING: Removing unreachable block (ram,0x4a116204) */

void FUN_4a127ce8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0x28);
  if (iVar3 == 0x9b) {
    iVar1 = FUN_4a145968(*(undefined4 *)(param_1 + 0x20));
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x290) = 0;
      FUN_4a0cd7c0(param_1,0xb51);
      *(undefined4 *)(param_1 + 0x1c0) = 9;
      *(undefined4 *)(param_1 + 0x1c4) = 0;
      *(undefined1 *)(param_1 + 0x1dc) = 1;
      host_s3eAccelerometerStop_arm();
                    /* WARNING: Could not recover jumptable at 0x4a116200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR_caseD_0_4a11622c)();
      return;
    }
  }
  else if (iVar3 == 0x9e) {
    FUN_4a11a440(param_1,0x21);
  }
  *(int *)(param_1 + 0xa5c) = iVar3;
  FUN_4a1161d0(param_1,0x11);
  uVar2 = *(undefined4 *)(param_1 + 0xa10);
  *(undefined4 *)(param_1 + 0xa10) = 0;
                    /* WARNING: Could not recover jumptable at 0x4a120cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_caseD_0_4a120cdc)(*(int *)(param_1 + 0x20) + 0x128,1,uVar2);
  return;
}



// Address: 4a127d64

void FUN_4a127d64(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  FUN_4a106a9c(param_2,1);
  iVar3 = *(int *)(param_1 + 0x60c);
  if ((*(int *)(param_1 + 0x610) == iVar3) &&
     (iVar1 = *(int *)(param_1 + 0x608) + iVar3, iVar3 < iVar1)) {
    *(int *)(param_1 + 0x60c) = iVar1;
    iVar4 = *(int *)(param_1 + 0x614);
    iVar3 = thunk_FUN_4a161570(iVar1 * 4);
    *(int *)(param_1 + 0x614) = iVar3;
    if (iVar3 != 0) {
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0x610)) {
        do {
          iVar1 = iVar3 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x614) + iVar3 * 4) =
               *(undefined4 *)(iVar4 + iVar3 * 4);
          iVar3 = iVar1;
        } while (iVar1 < *(int *)(param_1 + 0x610));
      }
      thunk_FUN_4a161530(iVar4);
    }
    iVar3 = *(int *)(param_1 + 0x610);
    if (iVar3 < *(int *)(param_1 + 0x60c)) {
      do {
        iVar1 = iVar3 + 1;
        *(undefined4 *)(*(int *)(param_1 + 0x614) + iVar3 * 4) = 0;
        iVar3 = iVar1;
      } while (iVar1 < *(int *)(param_1 + 0x60c));
    }
  }
  iVar3 = *(int *)(param_1 + 0x610);
  *(int *)(param_1 + 0x610) = iVar3 + 1;
  piVar5 = *(int **)(*(int *)(param_1 + 0x614) + iVar3 * 4);
  piVar2 = param_2;
  if (param_2 != (int *)0x0) {
    piVar2 = (int *)(*(int *)(*param_2 + -0xc) + (int)param_2);
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))();
  }
  *(int **)(*(int *)(param_1 + 0x614) + iVar3 * 4) = param_2;
  if (piVar5 != (int *)0x0) {
    piVar5 = (int *)((int)piVar5 + *(int *)(*piVar5 + -0xc));
  }
  if ((piVar5 != (int *)0x0) && (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  *(undefined1 *)(param_1 + 0x630) = 1;
  iVar3 = FUN_4a146b58(param_2,0x2000);
  if (iVar3 != 0) {
    *(undefined1 *)(param_1 + 0x631) = 1;
  }
  return;
}



// Address: 4a127ed0

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

void FUN_4a127ed0(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar3;
  
  FUN_4a041910(1);
  bVar3 = *(int *)(param_1 + 0xa64) != 0;
  iVar2 = 0;
  if (bVar3) {
    iVar2 = *(int *)(param_1 + 0x1c0);
  }
  if (!bVar3 || iVar2 == 0x14) {
    return;
  }
  if (*(char *)(param_1 + 0x210) == '\0') {
    FUN_4a112eec(param_1,param_2);
  }
  FUN_4a10f7b0(param_1,param_2);
  if (*(int *)(param_1 + 0x294) != 0) {
    FUN_4a111044(param_1,param_2);
  }
  if (*(char *)(param_1 + 0x67c) == '\0') {
    if ((*(char *)(param_1 + 0x1dc) == '\0') && (*(char *)(param_1 + 0x632) != '\0')) {
      FUN_4a11494c(param_1,param_2);
      FUN_4a090720(*(undefined4 *)(param_1 + 0x678),param_2);
    }
    else if (*(char *)(param_1 + 0x210) == '\0') {
      FUN_4a11494c(param_1,param_2);
      if ((*(int *)(param_1 + 0x1c0) != 7) ||
         (iVar2 = *(int *)(param_1 + 0x69c),
         (((((iVar2 != 0x10 && iVar2 != 0x11) && iVar2 != 0x12) && iVar2 != 0x13) && iVar2 != 0x14)
         && iVar2 != 0x15) && iVar2 != 0x16)) {
        FUN_4a1171b8(param_1,param_2);
        FUN_4a122b9c(param_1,param_2);
      }
    }
    else {
      FUN_4a11494c(param_1,param_2);
      FUN_4a0fe1e0(*(undefined4 *)(param_1 + 0x20),param_2);
    }
  }
  else {
    FUN_4a11494c(param_1,param_2);
    FUN_4a0fe1e0(*(undefined4 *)(param_1 + 0x20),param_2);
    iVar2 = FUN_4a13ef1c(param_1);
    if (iVar2 == -1) {
      switch(*(undefined4 *)(param_1 + 0x694)) {
      case 0:
        FUN_4a06ec04(*(undefined4 *)(param_1 + 0x698),param_2,0,1);
        break;
      case 1:
      case 2:
      case 4:
      case 5:
        FUN_4a0ce0a8(param_1,param_2);
      }
    }
    else {
      FUN_4a0cd6d4(param_1,param_2);
    }
  }
  puVar1 = PTR_DAT_4a041a9c;
  iVar2 = 0;
  if (*(int *)PTR_DAT_4a041a9c != 0) {
    iVar2 = *(int *)(PTR_DAT_4a041a9c + 4);
  }
  if (*(int *)PTR_DAT_4a041a9c != 0 && iVar2 != 0) {
    *(undefined4 *)(PTR_DAT_4a041a9c + 0x28) = 0;
    iVar2 = *(int *)(PTR_DAT_4a041a9c + 0x38);
    if (*(int *)(PTR_DAT_4a041a9c + 0x1c) != 0) {
      *(int *)(puVar1 + 8) = *(int *)(PTR_DAT_4a041a9c + 0x34) + *(int *)(puVar1 + 0x3c);
      *(int *)(puVar1 + 0xc) = iVar2 + *(int *)(puVar1 + 0x40);
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



// Address: 4a128078

void FUN_4a128078(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined *apuStack_5c [2];
  int iStack_54;
  int iStack_50;
  undefined *apuStack_48 [2];
  int iStack_40;
  undefined *apuStack_34 [2];
  int iStack_2c;
  
  iVar7 = *(int *)(*(int *)(param_1 + 0x20) + 0x260);
  if (*(int *)(param_1 + 0x1d8) == 2) {
    FUN_4a085310(iVar7,0x48);
    FUN_4a085310(iVar7,0x41);
    FUN_4a085310(iVar7,0x53);
  }
  if (*(int *)(param_1 + 0x1d8) == 1) {
    FUN_4a085310(iVar7,0x49);
    FUN_4a085310(iVar7,0x4b);
    FUN_4a085310(iVar7,0x4c);
    FUN_4a085310(iVar7,0x42);
  }
  else {
    FUN_4a085310(iVar7,0x40);
    FUN_4a085310(iVar7,0x41);
    FUN_4a085310(iVar7,0x10);
    FUN_4a085310(iVar7,0x42);
    FUN_4a085310(iVar7,0x47);
    FUN_4a085310(iVar7,0x46);
    FUN_4a085310(iVar7,0x45);
    FUN_4a085310(iVar7,0x43);
    FUN_4a085310(iVar7,0x44);
    FUN_4a085310(iVar7,0x4c);
    FUN_4a085310(iVar7,0x4a);
    FUN_4a085310(iVar7,0x4d);
    FUN_4a085310(iVar7,0x4f);
    FUN_4a085310(iVar7,0x50);
    FUN_4a085310(iVar7,0x51);
    FUN_4a085310(iVar7,0x52);
    FUN_4a085310(iVar7,0x4e);
    FUN_4a085310(iVar7,0x53);
  }
  FUN_4a085310(iVar7,0xc);
  FUN_4a085310(iVar7,0xe);
  FUN_4a085310(iVar7,0xd);
  FUN_4a085310(iVar7,0x11);
  FUN_4a085310(iVar7,0xf);
  if (*(int *)(iVar7 + 0x74) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(iVar7 + 0x74) + 8);
  }
  puVar3 = (undefined4 *)FUN_4a0c6bc0(apuStack_5c);
  *puVar3 = PTR_PTR_4a0855cc;
  puVar3[2] = *(undefined4 *)(iVar6 + 0x1d4);
  piVar5 = *(int **)(iVar6 + 0x1d8);
  puVar3[3] = piVar5;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))();
  }
  puVar1 = PTR_PTR_4a0855d0;
  iVar6 = 0;
  *puVar3 = PTR_PTR_4a0855d0;
  if (0 < iStack_54) {
    do {
      if (iStack_50 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iStack_50 + 8);
      }
      piVar5 = *(int **)(iVar4 + iVar6 * 4);
      if (piVar5 != (int *)0x0) {
        if (piVar5[1] == 400) {
          (**(code **)(*piVar5 + 0x40))(piVar5);
          (**(code **)(*piVar5 + 0x38))(piVar5,*(code **)(*piVar5 + 0x38),0);
          host_s3eDeviceYield_arm(500);
        }
        (**(code **)(*piVar5 + 0x1c))(piVar5);
        piVar5 = (int *)((int)piVar5 + *(int *)(*piVar5 + -0xc));
        if ((piVar5 != (int *)0x0) && (iVar4 = (**(code **)(*piVar5 + 8))(piVar5), iVar4 != 0)) {
          (**(code **)(*piVar5 + 4))(piVar5);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iStack_54);
  }
  if (*(int *)(iVar7 + 0x74) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(iVar7 + 0x74) + 8);
  }
  puVar3 = (undefined4 *)FUN_4a0c6bc0(apuStack_34);
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = puVar1;
  (**(code **)(*(int *)(iVar6 + 0x1cc) + 0x1c))((int *)(iVar6 + 0x1cc));
  *(undefined4 *)(iVar6 + 0x1d4) = 0;
  *(undefined4 *)(iVar6 + 0x1d8) = 0;
  apuStack_34[0] = puVar1;
  iVar6 = FUN_4a0bcc84(apuStack_34);
  if (iVar6 != 0) {
    iVar4 = 0;
    if (0 < iStack_2c) {
      do {
        iVar4 = iVar4 + 1;
      } while (iVar4 < iStack_2c);
      if (iVar6 == 0) goto LAB_4a0854d8;
    }
    FUN_4a14f21c();
  }
LAB_4a0854d8:
  FUN_4a0c6bf4(apuStack_34);
  if (*(int *)(iVar7 + 0x88) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(*(int *)(iVar7 + 0x88) + 8);
  }
  puVar3 = (undefined4 *)FUN_4a0c6bc0(apuStack_48);
  puVar2 = PTR_PTR_4a0855d4;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = puVar2;
  (**(code **)(*(int *)(iVar7 + 0x1cc) + 0x1c))((int *)(iVar7 + 0x1cc));
  *(undefined4 *)(iVar7 + 0x1d4) = 0;
  *(undefined4 *)(iVar7 + 0x1d8) = 0;
  apuStack_48[0] = puVar2;
  iVar7 = FUN_4a0bcc84(apuStack_48);
  if (iVar7 != 0) {
    iVar6 = 0;
    if (0 < iStack_40) {
      do {
        iVar6 = iVar6 + 1;
      } while (iVar6 < iStack_40);
      if (iVar7 == 0) goto LAB_4a085570;
    }
    FUN_4a14f21c();
  }
LAB_4a085570:
  FUN_4a0c6bf4(apuStack_48);
  apuStack_5c[0] = puVar1;
  iVar7 = FUN_4a0bcc84(apuStack_5c);
  if (iVar7 != 0) {
    iVar6 = 0;
    if (0 < iStack_54) {
      do {
        iVar6 = iVar6 + 1;
      } while (iVar6 < iStack_54);
      if (iVar7 == 0) goto LAB_4a0855b8;
    }
    FUN_4a14f21c();
  }
LAB_4a0855b8:
  FUN_4a0c6bf4(apuStack_5c);
  return;
}



// Address: 4a12821c

void FUN_4a12821c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 uVar7;
  bool bVar8;
  
  uVar1 = FUN_4a141aa4(*(undefined4 *)(param_1 + 0x24));
  uVar1 = FUN_4a0cd66c(*(undefined4 *)(param_1 + 0x224),uVar1,param_2,9);
  *(undefined4 *)(param_1 + 0x224) = uVar1;
  uVar2 = *(uint *)(param_1 + 0x1c0);
  bVar8 = uVar2 == 6;
  if (bVar8) {
    uVar2 = (uint)*(byte *)(param_1 + 0x67c);
  }
  if (bVar8 && uVar2 == 0) {
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x704)) {
      do {
        if (*(int *)(param_1 + 0x708) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(param_1 + 0x708) + 8);
        }
        FUN_4a0faf18(*(undefined4 *)(iVar3 + iVar6 * 4),param_2);
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x704));
    }
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x718)) {
      do {
        if (*(int *)(param_1 + 0x71c) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(param_1 + 0x71c) + 8);
        }
        FUN_4a0faf18(*(undefined4 *)(iVar3 + iVar6 * 4),param_2);
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x718));
    }
  }
  iVar3 = 0;
  iVar6 = 0;
  do {
    iVar4 = FUN_4a141a80(*(undefined4 *)(param_1 + 0x24),iVar6);
    if (iVar4 != -1) {
      iVar3 = iVar3 + 1;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 6);
  if (iVar3 == 0) {
    *(undefined1 *)(param_1 + 0x21c) = 0;
  }
  uVar1 = DAT_4a128378;
  uVar7 = 1;
  if (*(char *)(param_1 + 0x21c) == '\0') {
    uVar5 = FUN_4a171fac(param_2);
    uVar1 = FUN_4a17211c(uVar5,uVar1);
    uVar1 = FUN_4a1724e0(uVar1,*(undefined4 *)(param_1 + 0x220));
    FUN_4a172458(uVar1,0);
    if ((bool)uVar7) {
      uVar1 = 0;
    }
  }
  else {
    uVar5 = FUN_4a171fac(param_2);
    uVar1 = FUN_4a17211c(uVar5,uVar1);
    uVar1 = FUN_4a171a94(uVar1,*(undefined4 *)(param_1 + 0x220));
    FUN_4a1720a0(uVar1,0x3f800000);
    if ((bool)uVar7) {
      uVar1 = 0x3f800000;
    }
  }
  *(undefined4 *)(param_1 + 0x220) = uVar1;
  return;
}



// Address: 4a12837c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_4a12837c(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 in_r3;
  bool bVar9;
  
  puVar4 = (undefined4 *)FUN_4a0cf590();
  puVar2 = PTR_PTR_4a128cd4;
  *puVar4 = PTR_PTR_4a128cd4;
  puVar4[2] = puVar2 + 0x48;
  puVar4[4] = puVar2 + 0x68;
  puVar4[5] = puVar2 + 0x78;
  puVar4[6] = puVar2 + 0x88;
  puVar4[3] = puVar2 + 0x58;
  puVar4[1] = puVar2 + 0x38;
  puVar4[7] = puVar2 + 0x98;
  iVar5 = FUN_4a16be24(puVar4 + 0x6b,10);
  *(undefined4 *)(iVar5 + 0x14) = 0;
  *(undefined4 *)(iVar5 + 0x18) = 0;
  *(undefined4 *)(iVar5 + 0x1c) = 0;
  *(undefined4 *)(iVar5 + 0x20) = 0;
  *(undefined4 *)(iVar5 + 0x24) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0x28) = 0;
  *(undefined4 *)(iVar5 + 0x2c) = 0;
  *(undefined1 *)(iVar5 + 0x30) = 0;
  *(undefined4 *)(iVar5 + 0x34) = 0;
  *(undefined4 *)(iVar5 + 0x38) = 0;
  *(undefined4 *)(iVar5 + 0x3c) = 0;
  *(undefined4 *)(iVar5 + 0x40) = 0;
  *(undefined2 *)(iVar5 + 0x44) = 0;
  *(undefined4 *)(iVar5 + 0x48) = 0;
  *(undefined4 *)(iVar5 + 0x4c) = 0;
  puVar4 = (undefined4 *)FUN_4a0c6bc0(iVar5 + 0x50);
  puVar2 = PTR_PTR_4a128cd8;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = puVar2;
  *(undefined1 *)(puVar4 + 5) = 0;
  puVar4[6] = 300000;
  puVar4[7] = 0;
  *(undefined1 *)(puVar4 + 8) = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0;
  puVar4[0x14] = 0;
  puVar4[0x15] = 0;
  puVar4[0x16] = 0;
  puVar4[0x17] = 0;
  *(undefined1 *)(puVar4 + 0x1e) = 0;
  *(undefined1 *)((int)puVar4 + 0x79) = 0;
  *(undefined1 *)((int)puVar4 + 0x7a) = 0;
  *(undefined1 *)((int)puVar4 + 0x7b) = 0;
  *(undefined1 *)(puVar4 + 0x1f) = 0;
  puVar4[0x20] = 0;
  puVar4[0x21] = 0;
  puVar4[0x22] = 0;
  puVar4[0x23] = 0;
  puVar4[0x24] = 0;
  puVar4[0x25] = 0;
  puVar4[0x26] = 0;
  puVar4[0x27] = 0;
  puVar4[0x28] = 0;
  puVar4[0x29] = 0;
  puVar4[0x2a] = 0;
  puVar4[0x2b] = 0;
  puVar4[0x2c] = 0;
  puVar4[0x2d] = 0;
  puVar4[0x2e] = 0;
  puVar4[0x2f] = 0;
  puVar4[0x30] = 0;
  puVar4[0x32] = 0x42000000;
  puVar4[0x31] = 0;
  puVar4[0x34] = 0x42340000;
  puVar4[0x33] = 0;
  puVar4[0x35] = 0x42340000;
  puVar4[0x36] = 0x43960000;
  *(undefined1 *)(puVar4 + 0x37) = 0;
  puVar4[0x39] = 0x42000000;
  puVar4[0x38] = 0;
  puVar4[0x3b] = 0x42340000;
  puVar4[0x3a] = 0;
  puVar4[0x3c] = 0x42340000;
  puVar4[0x3d] = 0x43960000;
  puVar4[0x3e] = 0;
  puVar4[0x3f] = 0;
  puVar4[0x40] = 0;
  puVar4[0x41] = 0;
  puVar4[0x42] = 0;
  puVar4[0x43] = 0;
  uVar7 = DAT_4a128cdc;
  puVar4[0x44] = 0;
  puVar4[0x45] = 0;
  *(undefined1 *)(puVar4 + 0x46) = 0;
  iVar5 = FUN_4a084f54(puVar4 + 0x47,0,uVar7,0,in_r3);
  iVar5 = FUN_4a084f54(iVar5 + 0x74,0,uVar7,0,in_r3);
  iVar5 = FUN_4a084f54(iVar5 + 0x74,0,uVar7);
  iVar5 = FUN_4a084f54(iVar5 + 0x74,0,uVar7);
  iVar5 = FUN_4a084f54(iVar5 + 0x74,0,uVar7);
  iVar5 = FUN_4a084f54(iVar5 + 0x74,0,uVar7);
  puVar4 = (undefined4 *)FUN_4a0c6bc0(iVar5 + 0x74);
  puVar2 = PTR_PTR_4a128ce0;
  puVar4[2] = 0;
  *puVar4 = puVar2;
  puVar4[3] = 0;
  iVar5 = FUN_4a16994c(puVar4 + 5,0);
  *(undefined4 *)(iVar5 + 0x14) = 0;
  *(undefined4 *)(iVar5 + 0x18) = 0;
  puVar4 = (undefined4 *)FUN_4a0c6bc0(iVar5 + 0x1c);
  puVar2 = PTR_PTR_4a128ce4;
  puVar4[4] = 0;
  *puVar4 = puVar2;
  puVar4[2] = 10;
  puVar4[3] = 10;
  puVar4[5] = 0;
  iVar5 = thunk_FUN_4a161570(0x28);
  puVar4[5] = iVar5;
  if (iVar5 != 0) {
    iVar5 = 0;
    if (0 < (int)puVar4[4]) {
      do {
        iVar8 = iVar5 + 1;
        *(undefined4 *)(puVar4[5] + iVar5 * 4) = *(undefined4 *)(iVar5 * 4);
        iVar5 = iVar8;
      } while (iVar8 < (int)puVar4[4]);
    }
    thunk_FUN_4a161530(0);
  }
  iVar5 = puVar4[4];
  if ((int)puVar4[4] < (int)puVar4[3]) {
    do {
      iVar8 = iVar5 + 1;
      *(undefined4 *)(puVar4[5] + iVar5 * 4) = 0;
      iVar5 = iVar8;
    } while (iVar8 < (int)puVar4[3]);
  }
  puVar3 = PTR_PTR_4a128ce8;
  *puVar4 = PTR_PTR_4a128ce8;
  puVar4 = (undefined4 *)FUN_4a0c6bc0(puVar4 + 6);
  puVar4[4] = 0;
  *puVar4 = puVar2;
  puVar4[2] = 10;
  puVar4[3] = 10;
  puVar4[5] = 0;
  iVar5 = thunk_FUN_4a161570(0x28);
  puVar4[5] = iVar5;
  if (iVar5 != 0) {
    iVar5 = 0;
    if (0 < (int)puVar4[4]) {
      do {
        iVar8 = iVar5 + 1;
        *(undefined4 *)(puVar4[5] + iVar5 * 4) = *(undefined4 *)(iVar5 * 4);
        iVar5 = iVar8;
      } while (iVar8 < (int)puVar4[4]);
    }
    thunk_FUN_4a161530(0);
  }
  iVar5 = puVar4[4];
  if ((int)puVar4[4] < (int)puVar4[3]) {
    do {
      iVar8 = iVar5 + 1;
      *(undefined4 *)(puVar4[5] + iVar5 * 4) = 0;
      iVar5 = iVar8;
    } while (iVar8 < (int)puVar4[3]);
  }
  *puVar4 = puVar3;
  *(undefined1 *)(puVar4 + 6) = 0;
  *(undefined1 *)((int)puVar4 + 0x19) = 0;
  *(undefined1 *)((int)puVar4 + 0x1a) = 0;
  *(undefined1 *)((int)puVar4 + 0x1b) = 0;
  *(undefined2 *)(puVar4 + 7) = 0;
  iVar5 = FUN_4a16be24(puVar4 + 8,0);
  iVar5 = FUN_4a16be24(iVar5 + 0x14,0);
  iVar5 = FUN_4a16be24(iVar5 + 0x14,0);
  *(undefined4 *)(iVar5 + 0x14) = 0;
  *(undefined4 *)(iVar5 + 0x18) = 0;
  *(undefined1 *)(iVar5 + 0x1c) = 0;
  *(undefined1 *)(iVar5 + 0x1d) = 0;
  iVar5 = FUN_4a16be24(iVar5 + 0x20,0);
  *(undefined4 *)(iVar5 + 0x14) = 0;
  *(undefined4 *)(iVar5 + 0x18) = 0;
  *(undefined4 *)(iVar5 + 0x1c) = 0;
  *(undefined4 *)(iVar5 + 0x20) = 0;
  *(undefined4 *)(iVar5 + 0x24) = 0;
  *(undefined4 *)(iVar5 + 0x28) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0x30) = 0;
  *(undefined4 *)(iVar5 + 0x2c) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0x34) = 0;
  *(undefined4 *)(iVar5 + 0x38) = 0;
  *(undefined4 *)(iVar5 + 0x3c) = 0;
  *(undefined4 *)(iVar5 + 0x40) = 0;
  *(undefined4 *)(iVar5 + 0x44) = 0;
  *(undefined4 *)(iVar5 + 0x48) = 0;
  *(undefined4 *)(iVar5 + 0x4c) = 0;
  *(undefined4 *)(iVar5 + 0x50) = 0;
  *(undefined4 *)(iVar5 + 0x54) = 0;
  *(undefined4 *)(iVar5 + 0x58) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0x5c) = 0;
  *(undefined4 *)(iVar5 + 0x60) = 0;
  *(undefined4 *)(iVar5 + 100) = 0;
  *(undefined4 *)(iVar5 + 0x68) = 0;
  *(undefined4 *)(iVar5 + 0x6c) = 0;
  *(undefined1 *)(iVar5 + 0x70) = 0;
  *(undefined1 *)(iVar5 + 0x71) = 0;
  *(undefined1 *)(iVar5 + 0x72) = 0;
  *(undefined1 *)(iVar5 + 0x73) = 0;
  *(undefined4 *)(iVar5 + 0x74) = 0x800;
  *(undefined4 *)(iVar5 + 0x78) = 0x800;
  iVar5 = FUN_4a16a31c(iVar5 + 0x7c,0);
  iVar5 = FUN_4a16a31c(iVar5 + 0x14,0);
  iVar5 = FUN_4a16be24(iVar5 + 0x14,0);
  *(undefined4 *)(iVar5 + 0x14) = 0;
  *(undefined4 *)(iVar5 + 0x18) = 0;
  *(undefined4 *)(iVar5 + 0x1c) = 0;
  *(undefined4 *)(iVar5 + 0x20) = 0;
  *(undefined4 *)(iVar5 + 0x24) = 0;
  *(undefined4 *)(iVar5 + 0x28) = 0;
  puVar4 = (undefined4 *)FUN_4a0c6bc0(iVar5 + 0x2c);
  puVar2 = PTR_PTR_4a128cec;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = puVar2;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  iVar5 = FUN_4a16be24(puVar4 + 8,0);
  iVar5 = FUN_4a16a524(iVar5 + 0x14,0);
  iVar5 = FUN_4a16be24(iVar5 + 0x14,0);
  iVar5 = FUN_4a16be24(iVar5 + 0x14,0);
  *(undefined4 *)(iVar5 + 0x14) = 0;
  *(undefined4 *)(iVar5 + 0x18) = 0;
  *(undefined4 *)(iVar5 + 0x1c) = 0;
  *(undefined4 *)(iVar5 + 0x20) = 0;
  *(undefined4 *)(iVar5 + 0x24) = 0;
  *(undefined4 *)(iVar5 + 0x28) = 0;
  *(undefined1 *)(iVar5 + 0x2c) = 0;
  *(undefined4 *)(iVar5 + 0x30) = 0;
  *(undefined4 *)(iVar5 + 0x34) = 0;
  *(undefined4 *)(iVar5 + 0x38) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0x3c) = 0;
  *(undefined4 *)(iVar5 + 0x40) = 0;
  *(undefined4 *)(iVar5 + 0x44) = 0;
  *(undefined4 *)(iVar5 + 0x48) = 0;
  *(undefined4 *)(iVar5 + 0x50) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0x4c) = 0;
  *(undefined4 *)(iVar5 + 0x54) = 0;
  *(undefined4 *)(iVar5 + 0x58) = 0;
  *(undefined4 *)(iVar5 + 0x60) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0x5c) = 0;
  *(undefined4 *)(iVar5 + 0x9c) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0xa4) = 0;
  *(undefined4 *)(iVar5 + 0xa0) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0xa8) = 0;
  *(undefined4 *)(iVar5 + 0xac) = 0;
  *(undefined4 *)(iVar5 + 0xb0) = 0;
  *(undefined4 *)(iVar5 + 0xb4) = 0;
  *(undefined4 *)(iVar5 + 0xb8) = 0;
  iVar5 = FUN_4a16be24(iVar5 + 0xbc,4);
  iVar5 = FUN_4a16be24(iVar5 + 0x14,4);
  piVar6 = (int *)FUN_4a0c6bc0(iVar5 + 0x14);
  puVar2 = PTR_PTR_4a128cf0;
  piVar6[2] = 0;
  piVar6[3] = 0;
  *piVar6 = (int)puVar2;
  iVar5 = FUN_4a15e080(4);
  if (iVar5 == 0) {
    iVar5 = FUN_4a1669a8();
  }
  iVar8 = 0;
  do {
    *(undefined1 *)(iVar5 + iVar8) = 0;
    iVar8 = iVar8 + 1;
  } while (iVar8 < 4);
  thunk_FUN_4a161570(0x18);
  puVar4 = (undefined4 *)FUN_4a0c0628();
  puVar2 = PTR_PTR_4a128cf4;
  *puVar4 = PTR_PTR_4a128cf4;
  puVar4[3] = 1;
  puVar4[4] = 4;
  puVar4[2] = iVar5;
  *(undefined1 *)(puVar4 + 5) = 1;
  if (puVar4 != (undefined4 *)0x0) {
    (**(code **)(puVar2 + 0xc))(puVar4);
  }
  (**(code **)(*piVar6 + 0x1c))(piVar6);
  piVar6[2] = 4;
  piVar6[3] = (int)puVar4;
  piVar6[5] = 0;
  piVar6[6] = 0;
  piVar6[8] = 0x40400000;
  piVar6[7] = 0;
  piVar6[9] = 0;
  piVar6[10] = 0;
  piVar6[0xb] = 0;
  piVar6[0xc] = 0;
  piVar6[0xd] = 0;
  piVar6[0xe] = 0;
  piVar6[0xf] = 0;
  piVar6[0x10] = 0;
  piVar6[0x11] = 0;
  piVar6[0x12] = 0;
  iVar5 = FUN_4a16be24(piVar6 + 0x13,0);
  iVar5 = FUN_4a168d38(iVar5 + 0x14,0);
  iVar5 = FUN_4a168d38(iVar5 + 0x14,0);
  iVar5 = FUN_4a168d38(iVar5 + 0x14,0);
  iVar5 = FUN_4a168d38(iVar5 + 0x14,0);
  *(undefined4 *)(iVar5 + 0x14) = 0;
  puVar4 = (undefined4 *)FUN_4a0c6bc0(iVar5 + 0x18);
  puVar2 = PTR_PTR_4a128cf8;
  puVar4[2] = 0;
  *puVar4 = puVar2;
  puVar4[3] = 0;
  puVar4 = (undefined4 *)FUN_4a0c6bc0(puVar4 + 5);
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = puVar2;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4 = (undefined4 *)FUN_4a0c6bc0(puVar4 + 7);
  puVar2 = PTR_PTR_4a128cfc;
  puVar4[2] = 0;
  *puVar4 = puVar2;
  puVar4[3] = 0;
  puVar4 = (undefined4 *)FUN_4a0c6bc0(puVar4 + 5);
  puVar4[2] = 0;
  *puVar4 = puVar2;
  puVar4[3] = 0;
  puVar4 = (undefined4 *)FUN_4a0c6bc0(puVar4 + 5);
  puVar3 = PTR_PTR_4a128d00;
  puVar4[2] = 0;
  *puVar4 = puVar3;
  puVar4[3] = 0;
  iVar5 = FUN_4a16acfc(puVar4 + 5,0);
  puVar4 = (undefined4 *)FUN_4a0c6bc0(iVar5 + 0x14);
  puVar4[2] = 0;
  *puVar4 = puVar2;
  puVar4[3] = 0;
  iVar5 = FUN_4a16acfc(puVar4 + 5,0);
  *(undefined4 *)(iVar5 + 0x14) = 0;
  *(undefined4 *)(iVar5 + 0x18) = 0;
  *(undefined4 *)(iVar5 + 0x1c) = 0;
  *(undefined4 *)(iVar5 + 0x20) = 0xffffffff;
  *(undefined1 *)(iVar5 + 0x24) = 0;
  *(undefined4 *)(iVar5 + 0x28) = 0;
  *(undefined4 *)(iVar5 + 0x2c) = 0;
  *(undefined4 *)(iVar5 + 0x30) = 0;
  *(undefined4 *)(iVar5 + 0x38) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0x34) = 0;
  *(undefined4 *)(iVar5 + 0x3c) = 0;
  *(undefined4 *)(iVar5 + 0x40) = 0;
  puVar4 = (undefined4 *)FUN_4a0c6bc0(iVar5 + 0x44);
  puVar4[2] = 0;
  *puVar4 = puVar2;
  puVar4[3] = 0;
  puVar4 = (undefined4 *)FUN_4a0c6bc0(puVar4 + 5);
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = puVar2;
  puVar4[5] = 0;
  puVar4 = (undefined4 *)FUN_4a0c6bc0(puVar4 + 6);
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = puVar3;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0xffffffff;
  puVar4[8] = 0;
  *(undefined1 *)(puVar4 + 9) = 0;
  puVar4[10] = 0;
  *(undefined1 *)(puVar4 + 0xb) = 0;
  puVar4[0xc] = 0x3f800000;
  puVar4[0xd] = _DAT_4a128d04;
  *(undefined1 *)(puVar4 + 0xe) = 0;
  puVar4[0xf] = 0;
  iVar5 = puVar4[-0x28a] + 0x1f8;
  uVar7 = thunk_FUN_4a161570(0x2c);
  uVar7 = FUN_4a06fa68(uVar7,iVar5);
  puVar4[-0x8c] = uVar7;
  uVar7 = thunk_FUN_4a161570(0x2c);
  uVar7 = FUN_4a06fa68(uVar7,iVar5);
  puVar4[-0x8b] = uVar7;
  uVar7 = thunk_FUN_4a161570(0x2c);
  uVar7 = FUN_4a06fa68(uVar7,iVar5);
  puVar4[-0x8a] = uVar7;
  uVar7 = thunk_FUN_4a161570(0x2c);
  uVar7 = FUN_4a06fa68(uVar7,iVar5);
  puVar4[-0x89] = uVar7;
  uVar7 = thunk_FUN_4a161570(0x2c);
  uVar7 = FUN_4a06fa68(uVar7,iVar5);
  puVar4[-0x5f] = uVar7;
  uVar7 = thunk_FUN_4a161570(0x2c);
  uVar7 = FUN_4a06fa68(uVar7,iVar5);
  puVar4[-0x5e] = uVar7;
  iVar5 = puVar4[-0x28a];
  if (*(int *)(iVar5 + 0x38) == 0) {
    bVar9 = *(int *)(iVar5 + 0x44) == 0;
    cVar1 = '\0';
    if (!bVar9) {
      cVar1 = *(char *)(iVar5 + 0x48);
    }
    if (bVar9 || cVar1 == '\0') {
      bVar9 = *(int *)(iVar5 + 0x3c) != 0;
      cVar1 = '\0';
      if (bVar9) {
        cVar1 = *(char *)(iVar5 + 0x40);
      }
      if (bVar9 && cVar1 != '\0') {
        *(undefined4 *)(iVar5 + 0x354) = 180000;
      }
    }
    else {
      uVar7 = FUN_4a035900();
      *(undefined4 *)(puVar4[-0x28a] + 0x354) = uVar7;
    }
  }
  else {
    iVar5 = host_s3eConfigGetInt_arm(s_Telefonica_4a128d14,s_>demoTime_4a128d07 + 1,iVar5 + 0x354);
    if (iVar5 != 0) {
      *(undefined4 *)(puVar4[-0x28a] + 0x354) = 180000;
    }
  }
  thunk_FUN_4a161570(0x40);
  piVar6 = (int *)FUN_4a099040();
  puVar4[-0x208] = piVar6;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))();
  }
  return puVar4 + -0x292;
}



// Address: 4a128d38

int FUN_4a128d38(undefined4 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  
  puVar2 = PTR_PTR_4a12944c;
  *param_1 = PTR_PTR_4a12944c;
  param_1[2] = puVar2 + 0x48;
  param_1[4] = puVar2 + 0x68;
  param_1[5] = puVar2 + 0x78;
  param_1[6] = puVar2 + 0x88;
  param_1[3] = puVar2 + 0x58;
  param_1[1] = puVar2 + 0x38;
  param_1[7] = puVar2 + 0x98;
  uVar7 = param_1[0x1c1] - 1;
  if (-1 < (int)uVar7) {
    do {
      if (param_1[0x1c2] == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(param_1[0x1c2] + 8);
      }
      thunk_FUN_4a161530(*(undefined4 *)(iVar3 + uVar7 * 4));
      uVar7 = uVar7 - 1;
    } while (uVar7 < 0x80000000);
  }
  uVar7 = param_1[0x1c6] - 1;
  if (-1 < (int)uVar7) {
    do {
      if (param_1[0x1c7] == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(param_1[0x1c7] + 8);
      }
      thunk_FUN_4a161530(*(undefined4 *)(iVar3 + uVar7 * 4));
      uVar7 = uVar7 - 1;
    } while (uVar7 < 0x80000000);
  }
  if (param_1[0x19e] != 0) {
    FUN_4a0cd358(param_1);
    param_1[0x19e] = 0;
  }
  if (param_1[0x1a6] != 0) {
    FUN_4a0cd358(param_1);
    param_1[0x1a6] = 0;
  }
  if (param_1[0x1b7] != 0) {
    FUN_4a0cd358(param_1);
    param_1[0x1b7] = 0;
  }
  piVar8 = (int *)param_1[0x8a];
  if (piVar8 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar8 + 8))(piVar8);
    if (iVar3 != 0) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    param_1[0x8a] = 0;
  }
  if ((int *)param_1[0x206] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x206] + 4))();
  }
  if ((int *)param_1[0x207] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x207] + 4))();
  }
  if ((int *)param_1[0x208] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x208] + 4))();
  }
  if ((int *)param_1[0x209] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x209] + 4))();
  }
  if ((int *)param_1[0x233] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x233] + 4))();
  }
  if ((int *)param_1[0x234] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x234] + 4))();
  }
  piVar8 = (int *)param_1[0x9f];
  if ((piVar8 != (int *)0x0) && (iVar3 = (**(code **)(*piVar8 + 8))(piVar8), iVar3 != 0)) {
    (**(code **)(*piVar8 + 4))(piVar8);
  }
  piVar8 = (int *)param_1[0xa0];
  if ((piVar8 != (int *)0x0) && (iVar3 = (**(code **)(*piVar8 + 8))(piVar8), iVar3 != 0)) {
    (**(code **)(*piVar8 + 4))(piVar8);
  }
  if (*(int *)PTR_DAT_4a129450 != 0) {
    piVar8 = (int *)param_1[0xa1];
    if ((piVar8 != (int *)0x0) && (iVar3 = (**(code **)(*piVar8 + 8))(piVar8), iVar3 != 0)) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    piVar8 = (int *)param_1[0xa2];
    if ((piVar8 != (int *)0x0) && (iVar3 = (**(code **)(*piVar8 + 8))(piVar8), iVar3 != 0)) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    piVar8 = (int *)param_1[0xa3];
    if ((piVar8 != (int *)0x0) && (iVar3 = (**(code **)(*piVar8 + 8))(piVar8), iVar3 != 0)) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
  }
  iVar3 = FUN_4a168e44(param_1 + 0x292);
  iVar3 = FUN_4a16bef4(iVar3 + -0x18);
  iVar3 = FUN_4a16bef4(iVar3 + -0x14);
  puVar2 = PTR_PTR_4a129454;
  *(undefined **)(iVar3 + -0x44) = PTR_PTR_4a129454;
  iVar6 = *(int *)(iVar3 + -0x3c);
  iVar4 = FUN_4a0bcc84(iVar3 + -0x44);
  if (iVar4 != 0) {
    iVar5 = 0;
    if (0 < iVar6) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar6);
      if (iVar4 == 0) goto LAB_4a1290a0;
    }
    FUN_4a14f21c();
  }
LAB_4a1290a0:
  iVar3 = FUN_4a0c6bf4(iVar3 + -0x44);
  iVar3 = FUN_4a16bef4(iVar3 + -0x14);
  *(undefined **)(iVar3 + -0x14) = puVar2;
  iVar6 = *(int *)(iVar3 + -0xc);
  iVar4 = FUN_4a0bcc84(iVar3 + -0x14);
  if (iVar4 != 0) {
    iVar5 = 0;
    if (0 < iVar6) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar6);
      if (iVar4 == 0) goto LAB_4a1290f0;
    }
    FUN_4a14f21c();
  }
LAB_4a1290f0:
  iVar3 = FUN_4a0c6bf4(iVar3 + -0x14);
  iVar3 = FUN_4a168e44(iVar3 + -0x14);
  iVar3 = FUN_4a16bef4(iVar3 + -0x14);
  iVar3 = FUN_4a16bef4(iVar3 + -0x14);
  puVar2 = PTR_PTR_4a129458;
  *(undefined **)(iVar3 + -0x1c) = PTR_PTR_4a129458;
  iVar6 = *(int *)(iVar3 + -0x14);
  iVar4 = FUN_4a0bcc84(iVar3 + -0x1c);
  if (iVar4 != 0) {
    iVar5 = 0;
    if (0 < iVar6) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar6);
      if (iVar4 == 0) goto LAB_4a129154;
    }
    FUN_4a14f21c();
  }
LAB_4a129154:
  iVar3 = FUN_4a0c6bf4(iVar3 + -0x1c);
  *(undefined **)(iVar3 + -0x14) = puVar2;
  iVar6 = *(int *)(iVar3 + -0xc);
  iVar4 = FUN_4a0bcc84(iVar3 + -0x14);
  if (iVar4 != 0) {
    iVar5 = 0;
    if (0 < iVar6) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar6);
      if (iVar4 == 0) goto LAB_4a12919c;
    }
    FUN_4a14f21c();
  }
LAB_4a12919c:
  iVar3 = FUN_4a0c6bf4(iVar3 + -0x14);
  iVar3 = FUN_4a168e44(iVar3 + -0x18);
  iVar3 = FUN_4a168e44(iVar3 + -0x14);
  iVar3 = FUN_4a168e44(iVar3 + -0x14);
  iVar3 = FUN_4a168e44(iVar3 + -0x14);
  iVar3 = FUN_4a16bef4(iVar3 + -0x14);
  puVar9 = (undefined4 *)(iVar3 + -0x4c);
  *puVar9 = PTR_PTR_4a12945c;
  iVar4 = *(int *)(iVar3 + -0x44);
  iVar3 = FUN_4a0bcc84(puVar9);
  if (iVar3 != 0) {
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
      if (iVar3 == 0) goto LAB_4a129210;
    }
    FUN_4a14f21c();
  }
LAB_4a129210:
  iVar3 = FUN_4a0c6bf4(puVar9);
  iVar3 = FUN_4a16bef4(iVar3 + -0x14);
  iVar3 = FUN_4a16bef4(iVar3 + -0x14);
  piVar8 = *(int **)(iVar3 + -0x70);
  if ((piVar8 != (int *)0x0) && (iVar4 = (**(code **)(*piVar8 + 8))(piVar8), iVar4 != 0)) {
    (**(code **)(*piVar8 + 4))(piVar8);
  }
  iVar3 = FUN_4a16bef4(iVar3 + -0xbc);
  iVar3 = FUN_4a16bef4(iVar3 + -0x14);
  iVar3 = FUN_4a16a5f4(iVar3 + -0x14);
  iVar3 = FUN_4a16bef4(iVar3 + -0x14);
  iVar3 = FUN_4a16c1a0(iVar3 + -0x20);
  iVar3 = FUN_4a16bef4(iVar3 + -0x2c);
  puVar2 = PTR_PTR_4a129460;
  *(undefined **)(iVar3 + -0x14) = PTR_PTR_4a129460;
  iVar6 = *(int *)(iVar3 + -0xc);
  iVar4 = FUN_4a0bcc84(iVar3 + -0x14);
  if (iVar4 != 0) {
    iVar5 = 0;
    if (0 < iVar6) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar6);
      if (iVar4 == 0) goto LAB_4a1292dc;
    }
    FUN_4a14f21c();
  }
LAB_4a1292dc:
  iVar3 = FUN_4a0c6bf4(iVar3 + -0x14);
  *(undefined **)(iVar3 + -0x14) = puVar2;
  iVar6 = *(int *)(iVar3 + -0xc);
  iVar4 = FUN_4a0bcc84(iVar3 + -0x14);
  if (iVar4 != 0) {
    iVar5 = 0;
    if (0 < iVar6) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar6);
      if (iVar4 == 0) goto LAB_4a129324;
    }
    FUN_4a14f21c();
  }
LAB_4a129324:
  iVar3 = FUN_4a0c6bf4(iVar3 + -0x14);
  iVar3 = FUN_4a16bef4(iVar3 + -0x7c);
  iVar3 = FUN_4a16bef4(iVar3 + -0x20);
  iVar3 = FUN_4a16bef4(iVar3 + -0x14);
  iVar3 = FUN_4a16bef4(iVar3 + -0x14);
  puVar2 = PTR_PTR_4a129464;
  *(undefined **)(iVar3 + -0x20) = PTR_PTR_4a129464;
  FUN_4a16d53c(iVar3 + -0x20);
  thunk_FUN_4a161530(*(undefined4 *)(iVar3 + -0xc));
  iVar3 = FUN_4a0c6bf4(iVar3 + -0x20);
  *(undefined **)(iVar3 + -0x18) = puVar2;
  FUN_4a16d53c(iVar3 + -0x18);
  thunk_FUN_4a161530(*(undefined4 *)(iVar3 + -4));
  iVar3 = FUN_4a0c6bf4(iVar3 + -0x18);
  iVar3 = FUN_4a169a1c(iVar3 + -0x1c);
  iVar3 = FUN_4a16a5f4(iVar3 + -0x14);
  iVar3 = FUN_4a085184(iVar3 + -0x74);
  iVar3 = FUN_4a085184(iVar3 + -0x74);
  iVar3 = FUN_4a085184(iVar3 + -0x74);
  iVar3 = FUN_4a085184(iVar3 + -0x74);
  iVar3 = FUN_4a085184(iVar3 + -0x74);
  iVar3 = FUN_4a085184(iVar3 + -0x74);
  puVar9 = (undefined4 *)(iVar3 + -0x11c);
  *puVar9 = PTR_PTR_4a129468;
  iVar4 = *(int *)(iVar3 + -0x114);
  iVar3 = FUN_4a0bcc84(puVar9);
  if (iVar3 != 0) {
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        (*(code *)**(undefined4 **)(iVar3 + iVar6 * 0x14))();
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
      if (iVar3 == 0) goto FUN_4a0cfc1c;
    }
    FUN_4a14f21c(iVar3);
  }
FUN_4a0cfc1c:
  iVar3 = FUN_4a0c6bf4(puVar9);
  iVar3 = FUN_4a16bef4(iVar3 + -0x50);
  puVar2 = PTR_PTR_4a0cff10;
  iVar4 = 0;
  *(undefined **)(iVar3 + -0x1ac) = PTR_PTR_4a0cff10;
  *(undefined **)(iVar3 + -0x1a4) = puVar2 + 0x44;
  *(undefined **)(iVar3 + -0x19c) = puVar2 + 100;
  *(undefined **)(iVar3 + -0x198) = puVar2 + 0x74;
  *(undefined **)(iVar3 + -0x194) = puVar2 + 0x84;
  *(undefined **)(iVar3 + -0x1a0) = puVar2 + 0x54;
  *(undefined **)(iVar3 + -0x1a8) = puVar2 + 0x34;
  *(undefined **)(iVar3 + -400) = puVar2 + 0x94;
  if (0 < *(int *)(iVar3 + -0x158)) {
    do {
      piVar8 = *(int **)(*(int *)(iVar3 + -0x154) + iVar4 * 4);
      *(undefined4 *)(*(int *)(iVar3 + -0x154) + iVar4 * 4) = 0;
      if ((piVar8 != (int *)0x0) && (iVar6 = (**(code **)(*piVar8 + 8))(piVar8), iVar6 != 0)) {
        (**(code **)(*piVar8 + 4))(piVar8);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(iVar3 + -0x158));
  }
  *(undefined4 *)(iVar3 + -0x158) = 0;
  iVar3 = FUN_4a16bef4(iVar3 + -0x60);
  iVar3 = FUN_4a16bef4(iVar3 + -0x14);
  iVar3 = FUN_4a16bef4(iVar3 + -0x14);
  iVar3 = FUN_4a16bef4(iVar3 + -0x14);
  iVar3 = FUN_4a16bef4(iVar3 + -0x14);
  iVar3 = FUN_4a16bef4(iVar3 + -0x18);
  iVar3 = FUN_4a16bef4(iVar3 + -0x14);
  puVar2 = PTR_PTR_4a0cff14;
  *(undefined4 *)(iVar3 + -0x60) = PTR_PTR_4a0cff14;
  iVar4 = *(int *)(iVar3 + -0x58);
  piVar8 = *(int **)(iVar3 + -0x54);
  if (piVar8 != (int *)0x0) {
    iVar6 = piVar8[2];
    puVar2 = (undefined *)(uint)*(byte *)(piVar8 + 5);
  }
  else {
    iVar6 = 0;
  }
  *(undefined4 *)(iVar3 + -0x54) = 0;
  *(undefined4 *)(iVar3 + -0x58) = 0;
  if ((piVar8 == (int *)0x0) || (iVar5 = (**(code **)(*piVar8 + 8))(piVar8), iVar5 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar8 + 4))(piVar8);
    bVar1 = 1;
  }
  if (!(bool)(bVar1 & (piVar8 != (int *)0x0 && puVar2 != (undefined *)0x0))) {
    iVar6 = 0;
  }
  if (iVar6 != 0) {
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
      if (iVar6 == 0) goto LAB_4a0cfdb8;
    }
    FUN_4a14f21c();
  }
LAB_4a0cfdb8:
  iVar3 = FUN_4a0c6bf4((undefined4 *)(iVar3 + -0x60));
  puVar2 = PTR_PTR_4a0cff18;
  *(undefined4 *)(iVar3 + -0x14) = PTR_PTR_4a0cff18;
  iVar4 = *(int *)(iVar3 + -0xc);
  piVar8 = *(int **)(iVar3 + -8);
  if (piVar8 != (int *)0x0) {
    iVar6 = piVar8[2];
    puVar2 = (undefined *)(uint)*(byte *)(piVar8 + 5);
  }
  else {
    iVar6 = 0;
  }
  *(undefined4 *)(iVar3 + -8) = 0;
  *(undefined4 *)(iVar3 + -0xc) = 0;
  if ((piVar8 == (int *)0x0) || (iVar5 = (**(code **)(*piVar8 + 8))(piVar8), iVar5 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar8 + 4))(piVar8);
    bVar1 = 1;
  }
  if (!(bool)(bVar1 & (piVar8 != (int *)0x0 && puVar2 != (undefined *)0x0))) {
    iVar6 = 0;
  }
  if (iVar6 != 0) {
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
      if (iVar6 == 0) goto LAB_4a0cfe70;
    }
    FUN_4a14f21c();
  }
LAB_4a0cfe70:
  iVar3 = FUN_4a0c6bf4((undefined4 *)(iVar3 + -0x14));
  iVar4 = 0;
  *(undefined4 *)(iVar3 + -0x18) = PTR_PTR_4a0cff1c;
  if (0 < *(int *)(iVar3 + -8)) {
    do {
      piVar8 = *(int **)(*(int *)(iVar3 + -4) + iVar4 * 4);
      *(undefined4 *)(*(int *)(iVar3 + -4) + iVar4 * 4) = 0;
      if ((piVar8 != (int *)0x0) && (iVar6 = (**(code **)(*piVar8 + 8))(piVar8), iVar6 != 0)) {
        (**(code **)(*piVar8 + 4))(piVar8);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(iVar3 + -8));
  }
  *(undefined4 *)(iVar3 + -8) = 0;
  thunk_FUN_4a161530(*(undefined4 *)(iVar3 + -4));
  iVar3 = FUN_4a0c6bf4((undefined4 *)(iVar3 + -0x18));
  iVar3 = FUN_4a16bef4(iVar3 + -0x18);
  return iVar3 + -0x2c;
}



// Address: 4a129474

void FUN_4a129474(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  
  puVar1 = PTR_DAT_4a129518;
  *(undefined4 *)PTR_DAT_4a129518 = *(undefined4 *)PTR_DAT_4a129514;
  piVar3 = (int *)FUN_4a0fc26c(*(undefined4 *)(param_1 + 0x20));
  FUN_4a0a83a4(piVar3,param_2);
  FUN_4a0a8b14(piVar3,*(undefined4 *)(param_1 + 0x25c));
  (**(code **)(*piVar3 + 0x30))(piVar3);
  FUN_4a12a458(param_1,param_2);
  puVar2 = PTR_DAT_4a12951c;
  FUN_4a0bbb28(*(undefined4 *)PTR_DAT_4a12951c);
  *(undefined4 *)puVar1 = *(undefined4 *)PTR_DAT_4a129520;
  FUN_4a06ec04(*(undefined4 *)(param_1 + 0x1e0),param_2,1);
  iVar4 = *(int *)puVar2;
  *(undefined1 *)(*(int *)PTR_DAT_4a0bbce8 + 0xc) = 0;
  host_glMatrixMode_arm(0x1700);
  FUN_4a150724();
  *(undefined4 *)(iVar4 + 8) = 0x3f800000;
  return;
}



// Address: 4a129524

void FUN_4a129524(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  undefined1 auStack_148 [20];
  undefined1 auStack_134 [256];
  undefined1 auStack_34 [20];
  undefined1 auStack_20 [20];
  
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



// Address: 4a129764

/* WARNING: Removing unreachable block (ram,0x4a0faea0) */
/* WARNING: Removing unreachable block (ram,0x4a0fae9c) */
/* WARNING: Removing unreachable block (ram,0x4a0fcc80) */
/* WARNING: Removing unreachable block (ram,0x4a0fcc84) */
/* WARNING: Removing unreachable block (ram,0x4a0fcc9c) */
/* WARNING: Removing unreachable block (ram,0x4a0faebc) */
/* WARNING: Removing unreachable block (ram,0x4a0faf08) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * FUN_4a129764(int param_1,int param_2,int param_3,int *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  short *psVar5;
  uint uVar6;
  int **ppiVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 extraout_r1;
  int iVar13;
  undefined4 uVar14;
  int *unaff_r4;
  int *unaff_r5;
  uint uVar15;
  int *piVar16;
  int *unaff_r6;
  int iVar17;
  int iVar18;
  undefined4 unaff_r7;
  undefined4 uVar19;
  int *piVar20;
  int iVar21;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  int *piVar22;
  undefined4 unaff_r10;
  undefined4 *puVar23;
  undefined4 unaff_r11;
  undefined4 *puVar24;
  undefined1 *puVar25;
  int **ppiVar26;
  code *UNRECOVERED_JUMPTABLE_13;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  undefined8 uVar30;
  uint uStack_124;
  undefined1 auStack_120 [20];
  undefined1 auStack_10c [156];
  undefined4 auStack_70 [2];
  int iStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint uStack_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 local_30;
  int local_2c;
  int *piStack_28;
  int *piStack_24;
  int *piStack_20;
  int *piStack_1c;
  undefined4 local_4;
  
  FUN_4a0cb8a0();
  if (*(int *)(param_1 + 0x1ac) == 1) {
    return (undefined4 *)((int)&iRam00000000 + 1);
  }
  uVar19 = *(undefined4 *)(param_1 + 0x20);
  uVar30 = FUN_4a0fd024(uVar19);
  iVar12 = (int)((ulonglong)uVar30 >> 0x20);
  bVar27 = (int)uVar30 != 0;
  if (bVar27) {
    iVar12 = *(int *)(param_1 + 0x1bc);
  }
  iVar17 = 0;
  if (bVar27 && iVar12 != 0) {
    FUN_4a12be24(param_1);
    puVar4 = (undefined4 *)FUN_4a0fb778(uVar19);
    *(undefined4 *)(param_1 + 0x1bc) = 0;
switchD_4a12983c_caseD_1:
    return puVar4;
  }
  iVar12 = FUN_4a0ff408(uVar19);
  if (iVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a1297d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
    return puVar4;
  }
  iVar12 = FUN_4a13ef1c(param_1);
  if (iVar12 != -1) {
    if (iVar12 == 9 || iVar12 == 8) {
      FUN_4a130c2c();
    }
    else {
      FUN_4a0ce690(param_1,param_2,param_3);
    }
    puVar4 = (undefined4 *)FUN_4a13ef1c(param_1);
    if (puVar4 != (undefined4 *)0xffffffff) {
      return puVar4;
    }
    uVar19 = *(undefined4 *)(param_1 + 0x1ac);
    goto code_r0x4a12be24;
  }
  puVar4 = (undefined4 *)(*(int *)(param_1 + 0x1ac) + -3);
  piStack_1c = unaff_r6;
  switch(puVar4) {
  case (undefined4 *)0x0:
    iVar12 = FUN_4a0cb850(param_2,param_3,2);
    if (iVar12 == 0) {
      iVar12 = FUN_4a0cb850(param_2,param_3,0x80000000);
      if (iVar12 == 0) {
        return (undefined4 *)0x0;
      }
      iVar12 = 0;
      if (*(int *)(param_3 + 0xc) != 0) {
        iVar12 = *(int *)(*(int *)(param_3 + 0xc) + 8);
      }
      iVar17 = *(int *)(iVar12 + 8);
      iVar12 = FUN_4a06c6c8(*(int *)(param_1 + 0x20) + 0x278);
      if (iVar12 == iVar17) {
                    /* WARNING: Could not recover jumptable at 0x4a130d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
        return puVar4;
      }
      FUN_4a0fcc0c(*(undefined4 *)(param_1 + 0x20),iVar17);
      FUN_4a0fdf10(*(undefined4 *)(param_1 + 0x20));
      FUN_4a0fcfe8(*(undefined4 *)(param_1 + 0x20));
      FUN_4a0941ec();
      FUN_4a08db2c();
      piVar20 = (int *)FUN_4a135b44();
      if (piVar20 == (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4a094ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
        return puVar4;
      }
      (**(code **)(*piVar20 + 0xc))();
      iVar12 = (**(code **)(*piVar20 + 8))(piVar20);
      if (iVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a094ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
        return puVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x4a094ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar4 = (undefined4 *)(**(code **)(*piVar20 + 4))(piVar20);
      return puVar4;
    }
    iVar12 = FUN_4a13ef1c(param_1);
    if (iVar12 == 8) {
      if (*(int *)(*(int *)(param_1 + 0x20) + 0x49c) < 0) {
        uVar19 = FUN_4a06c6c8(*(int *)(param_1 + 0x20) + 0x278);
        FUN_4a0fcc0c(*(undefined4 *)(param_1 + 0x20),uVar19);
        FUN_4a0fdf10(*(undefined4 *)(param_1 + 0x20));
      }
      FUN_4a0ce9dc(param_1,0xffffffff);
      host_s3eConfigGetInt_arm
                (PTR_s_EnableS3DDisclaimer_4a130d90 + -4,PTR_s_EnableS3DDisclaimer_4a130d90,
                 &stack0xffffffe8);
      if (param_4 == (int *)((int)&iRam00000000 + 1)) {
        puVar4 = (undefined4 *)FUN_4a12be24(param_1,0x2a);
        return puVar4;
      }
      puVar4 = (undefined4 *)FUN_4a12be24(param_1,1);
      return puVar4;
    }
    iVar12 = FUN_4a13ef1c(param_1);
    if (iVar12 != 9) {
      *(undefined4 *)(param_1 + 0x1bc) = 5;
      puVar4 = (undefined4 *)FUN_4a0fb654(*(undefined4 *)(param_1 + 0x20));
      if (puVar4 != (undefined4 *)0x0) {
        return puVar4;
      }
      puVar4 = *(undefined4 **)(param_1 + 0x20);
      goto LAB_4a0fc244;
    }
    uVar19 = 0;
    goto code_r0x4a0ce9dc;
  default:
    goto switchD_4a12983c_caseD_1;
  case (undefined4 *)0x2:
    iVar12 = FUN_4a0cb850(param_2,param_3,0x80000000);
    if (iVar12 == 0) {
      iVar12 = FUN_4a0cb850(param_2,param_3,0x200000);
      if (iVar12 == 0) {
        iVar12 = FUN_4a0cb850(param_2,param_3,0x400000);
        if (iVar12 == 0) {
          iVar12 = FUN_4a0cb850(param_2,param_3,0x80);
          if (iVar12 == 0) {
            return (undefined4 *)0x0;
          }
          uVar19 = 0x14;
          goto code_r0x4a12be24;
        }
        iVar12 = 0xc9b;
      }
      else {
        iVar12 = 0x81c;
      }
    }
    else {
      if (*(int *)(param_3 + 0xc) != 0) {
        iVar17 = *(int *)(*(int *)(param_3 + 0xc) + 8);
      }
      iVar12 = *(int *)(iVar17 + 8);
    }
    iVar17 = iVar12 + -0xca2;
    if (iVar12 == 0xca2) {
      *(undefined4 *)(param_1 + 0x1bc) = 8;
      puVar4 = (undefined4 *)FUN_4a0fb654(*(undefined4 *)(param_1 + 0x20));
      if (puVar4 != (undefined4 *)0x0) {
        return puVar4;
      }
      puVar4 = *(undefined4 **)(param_1 + 0x20);
      goto LAB_4a0fc244;
    }
    if (0xca2 < iVar12) {
      if (iVar17 == 0x39) {
        uVar19 = 1;
      }
      else {
        if (iVar17 < 0x3a) {
          if (iVar17 != 0x2f) {
            if (iVar17 != 0x36) {
              return (undefined4 *)0x0;
            }
            uVar10 = *(uint *)(param_1 + 0x20);
            bVar27 = *(int *)(uVar10 + 0x3c) != 0;
            if (bVar27) {
              uVar10 = (uint)*(byte *)(uVar10 + 0x40);
            }
            if (!bVar27 || uVar10 == 0) {
              FUN_4a0c0924();
              iVar12 = host_s3eConfigGetString_arm(s_Telefonica_4a12aab4,&DAT_4a12aab0,auStack_10c);
              if (iVar12 == 0) {
                FUN_4a161604(auStack_10c,0);
              }
              puVar4 = (undefined4 *)host_s3eDeviceRequestQuit_arm();
              return puVar4;
            }
            iVar12 = FUN_4a161438();
            if (iVar12 == 0) {
              FUN_4a15edcc(s_JNI_Extension_is_not_available_4a02dce8);
              return (undefined4 *)((int)&iRam00000000 + 1);
            }
            piVar20 = (int *)FUN_4a161478();
            if (piVar20 == (int *)0x0) {
              FUN_4a15edcc(s_Unable_to_get_JVM_4a02dd08);
              return (undefined4 *)((int)&iRam00000000 + 1);
            }
            FUN_4a15edcc(s_________________________JVM___p_4a02dd1c,piVar20);
            uVar19 = (**(code **)(*piVar20 + 0x18))(piVar20,&stack0xffffffec,0x10006);
            FUN_4a15edcc(s________________________rtn___d_e_4a02dd3c,uVar19,0);
            iVar12 = (**(code **)(iRam00000000 + 0x18))(0,s_com_cp_app_MainActivity_4a02dd64);
            if (iVar12 == 0) {
              FUN_4a15edcc(PTR_s__________________________________4a02dd7c);
              return (undefined4 *)((int)&iRam00000000 + 1);
            }
            iVar17 = (**(code **)(iRam00000000 + 0x240))
                               (0,iVar12,s_m_Activity_4a02dd80,s_Lcom_cp_app_MainActivity__4a02dd8c)
            ;
            if (iVar17 == 0) {
              FUN_4a15edcc(PTR_s____________________________Sorry_4a02dda8);
              return (undefined4 *)((int)&iRam00000000 + 1);
            }
            iVar12 = (**(code **)(iRam00000000 + 0x244))(0,iVar12,iVar17);
            if (iVar12 == 0) {
              FUN_4a15edcc(s_Sorry__I_can_t_use_ActivityDemoW_4a02ddac);
              return (undefined4 *)((int)&iRam00000000 + 1);
            }
            uVar19 = (**(code **)(iRam00000000 + 0x18))
                               (0,s_com_ea_sfr_demowrapper_SfrDemoWr_4a02ddd4);
            iVar17 = (**(code **)(iRam00000000 + 0x1c4))
                               (0,uVar19,s_ShowMainMenuPurchaseScreen_4a02ddfc,
                                s__Landroid_app_Activity_Z_V_4a02de18);
            if (iVar17 == 0) {
              FUN_4a15edcc(s_Sorry__I_can_t_find_ShowMainMenu_4a02de34);
              return (undefined4 *)((int)&iRam00000000 + 1);
            }
            FUN_4a0e493c(0,uVar19,iVar17,iVar12);
            return (undefined4 *)0x0;
          }
          uVar19 = 0x14;
          goto code_r0x4a12be24;
        }
        if (iVar17 == 0x3a) {
          uVar19 = 2;
        }
        else {
          if (iVar17 != 0x3b) {
            return (undefined4 *)0x0;
          }
          uVar19 = 7;
        }
      }
      FUN_4a15edcc(s_TnbNative___tnbShow___d_4a0577fc,uVar19);
      piVar20 = (int *)FUN_4a05be98();
      iVar12 = (**(code **)(*piVar20 + 0x18))(piVar20,s_com_cp_app_MainActivity_4a057818);
      if (iVar12 == 0) {
        FUN_4a15edcc(s_Unable_to_find_the_activity_clas_4a057830);
        return (undefined4 *)((int)&iRam00000000 + 1);
      }
      iVar17 = (**(code **)(*piVar20 + 0x240))
                         (piVar20,iVar12,s_m_Activity_4a057854,s_Lcom_cp_app_MainActivity__4a057860)
      ;
      if (iVar17 == 0) {
        FUN_4a15edcc(s_Sorry__I_can_t_find_MainWrapper_4a05787c);
        return (undefined4 *)((int)&iRam00000000 + 1);
      }
      iVar12 = (**(code **)(*piVar20 + 0x244))(piVar20,iVar12,iVar17);
      if (iVar12 == 0) {
        FUN_4a15edcc(s_Sorry__I_can_t_use_MainWrapper_4a0578a0);
        return (undefined4 *)((int)&iRam00000000 + 1);
      }
      uVar19 = (**(code **)(*piVar20 + 0x18))(piVar20,s_com_ea_tnb_WrapperActivity_4a0578c0);
      iVar17 = (**(code **)(*piVar20 + 0x1c4))
                         (piVar20,uVar19,&DAT_4a0578dc,s__Landroid_app_Activity_I_V_4a0578e4);
      if (iVar17 == 0) {
        FUN_4a15edcc(s_Sorry__I_can_t_find_show_4a057900);
        return (undefined4 *)((int)&iRam00000000 + 1);
      }
      FUN_4a0e4910(piVar20,uVar19,iVar17,iVar12);
      return (undefined4 *)0x0;
    }
    if (iVar12 == 0x827) {
      uVar19 = 3;
    }
    else {
      if (0x827 < iVar12) {
        if (iVar12 == 0x829) {
          uVar19 = 0x15;
        }
        else {
          if (iVar12 != 0xc9b) {
            return (undefined4 *)0x0;
          }
          uVar19 = 0x29;
        }
        goto code_r0x4a12be24;
      }
      if (iVar12 == 0x81c) {
        uVar19 = 9;
        goto code_r0x4a12be24;
      }
      if (iVar12 == 0x825) {
        uVar19 = 6;
        goto code_r0x4a12be24;
      }
      if (iVar12 != 0x826) {
        return (undefined4 *)0x0;
      }
      uVar19 = 0;
    }
code_r0x4a0ce9dc:
    puVar4 = (undefined4 *)FUN_4a0c6bc0(&local_34);
    puVar1 = PTR_PTR_4a0cec8c;
    puVar4[2] = 0;
    *puVar4 = puVar1;
    puVar4[3] = 0;
    uVar14 = 0xffffffff;
    switch(uVar19) {
    case 0:
      piVar20 = *(int **)(param_1 + 0x108);
      iVar12 = *(int *)(param_1 + 0x104);
      break;
    case 1:
      piVar20 = *(int **)(param_1 + 0x11c);
      iVar12 = *(int *)(param_1 + 0x118);
      break;
    case 2:
      local_38 = (undefined4 *)0x20;
      uVar14 = 0;
      FUN_4a089eb4(*(undefined4 *)(param_1 + 0x168),0x83d,0x83c,0x40);
      goto switchD_4a0cea14_caseD_ffffffff;
    case 3:
      piVar20 = *(int **)(param_1 + 0x130);
      iVar12 = *(int *)(param_1 + 300);
      break;
    default:
      goto switchD_4a0cea14_caseD_ffffffff;
    }
    if (piVar20 != (int *)0x0) {
      (**(code **)(*piVar20 + 0xc))(piVar20);
    }
    (*(code *)local_34[7])(&local_34);
    local_2c = iVar12;
    piStack_28 = piVar20;
    FUN_4a08be58(*(undefined4 *)(param_1 + 0x164),&local_34);
switchD_4a0cea14_caseD_ffffffff:
    piVar20 = piStack_28;
    iVar12 = local_2c;
    if (*(int *)(param_1 + 0xf8) == -1) {
      if (piStack_28 == (int *)0x0) {
        iVar17 = 0;
      }
      else {
        iVar17 = piStack_28[2];
      }
      if (iVar17 != 0) {
        if (piStack_28 == (int *)0x0) {
          iVar17 = 0;
        }
        else {
          iVar17 = piStack_28[2];
        }
        *(undefined4 *)(iVar17 + 8) = 0;
      }
    }
    if (piStack_28 != (int *)0x0) {
      (**(code **)(*piStack_28 + 0xc))(piStack_28);
    }
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x1c))((int *)(param_1 + 0x14c));
    *(int *)(param_1 + 0x154) = iVar12;
    *(int **)(param_1 + 0x158) = piVar20;
    *(undefined4 *)(param_1 + 0x160) = uVar14;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0xf8) = uVar19;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
    FUN_4a0fd714(*(undefined4 *)(param_1 + 0x20));
    FUN_4a0fe374(*(undefined4 *)(param_1 + 0x20));
    FUN_4a0fd00c(*(undefined4 *)(param_1 + 0x20));
    puVar4 = (undefined4 *)FUN_4a16bef4(&local_34);
    return puVar4;
  case (undefined4 *)0x3:
    iVar12 = FUN_4a0cb850(param_2,param_3,6);
    if (iVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a1299bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
      return puVar4;
    }
    goto LAB_4a12a324;
  case (undefined4 *)0x6:
    uVar19 = *(undefined4 *)(param_1 + 0x20);
    iVar12 = FUN_4a0cb850(param_2,param_3,2);
    if (iVar12 == 0) {
      iVar12 = FUN_4a0cb850(param_2,param_3,0x800);
      if (iVar12 == 0) {
        iVar12 = FUN_4a0cb850(param_2,param_3,0x800000);
        if (iVar12 == 0) {
          iVar12 = FUN_4a0cb850(param_2,param_3,0x10000000);
          if (iVar12 == 0) {
            iVar12 = FUN_4a0cb850(param_2,param_3,0x80000000);
            if (iVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a130274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
              return puVar4;
            }
            if (*(int *)(param_3 + 0xc) == 0) {
              puVar4 = (undefined4 *)0x0;
            }
            else {
              puVar4 = *(undefined4 **)(*(int *)(param_3 + 0xc) + 8);
            }
            if ((int)puVar4[2] < 0) {
              return puVar4;
            }
            FUN_4a0fe2fc(uVar19);
            iVar12 = FUN_4a145a54(uVar19);
            if (iVar12 == 0) {
              *(undefined1 *)(param_1 + 0x449) = 0;
              FUN_4a0fd058(uVar19);
              FUN_4a0fb7ac(uVar19);
              *(undefined4 *)(param_1 + 0x1bc) = 0xd;
              iVar12 = FUN_4a0fb654(*(undefined4 *)(param_1 + 0x20));
              if (iVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a130314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
                return puVar4;
              }
            }
            else {
              FUN_4a0ff474(uVar19);
              *(undefined4 *)(param_1 + 0x1c4) = 0xffffffff;
              *(undefined4 *)(param_1 + 0x1c0) = 2;
              *(undefined4 *)(param_1 + 0x1bc) = 2;
              iVar12 = FUN_4a0fb654(*(undefined4 *)(param_1 + 0x20));
              if (iVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a1302e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
                return puVar4;
              }
            }
          }
          else {
            iVar12 = FUN_4a145c04(uVar19);
            if (6 < iVar12) {
              uVar19 = 0x1e;
              goto code_r0x4a12be24;
            }
            *(undefined4 *)(param_1 + 0x1bc) = 0x1f;
            iVar12 = FUN_4a0fb654(*(undefined4 *)(param_1 + 0x20));
            if (iVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a130254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
              return puVar4;
            }
          }
          puVar4 = *(undefined4 **)(param_1 + 0x20);
          goto LAB_4a0fc244;
        }
        iVar12 = FUN_4a145c04(uVar19);
        if (iVar12 < 1) {
          uVar19 = 0x17;
        }
        else {
          uVar19 = 0x16;
        }
      }
      else {
        uVar19 = 10;
      }
    }
    else {
      uVar19 = 5;
    }
    goto code_r0x4a12be24;
  case (undefined4 *)0x7:
    uVar19 = *(undefined4 *)(param_1 + 0x20);
    iVar12 = FUN_4a0cb850(param_2,param_3,2);
    if (iVar12 == 0) {
      iVar12 = FUN_4a0cb850(param_2,param_3,0x80000000);
      if (iVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a129a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
        return puVar4;
      }
      puVar4 = *(undefined4 **)(param_3 + 0xc);
      if (puVar4 != (undefined4 *)0x0) {
        iVar17 = puVar4[2];
      }
      if (*(int *)(iVar17 + 8) < 0) {
        return puVar4;
      }
      FUN_4a0fe2fc(uVar19);
      iVar12 = FUN_4a145a54(uVar19);
      if (iVar12 == 0) {
        return (undefined4 *)0x0;
      }
      uVar19 = 0xb;
      goto code_r0x4a12be24;
    }
    goto LAB_4a129f58;
  case (undefined4 *)0x8:
    iVar12 = FUN_4a0cb850(param_2,param_3,0x20);
    if (iVar12 != 0) {
      piVar20 = (int *)FUN_4a145948(uVar19);
      if (piVar20 != (int *)0x0) {
        (**(code **)(*piVar20 + 0xc))();
      }
      uVar14 = FUN_4a145bfc(uVar19);
      FUN_4a0fd0a4(uVar19,uVar14);
      FUN_4a0fdf10(uVar19);
      uVar19 = FUN_4a0941ec();
      FUN_4a094c04(uVar19,uVar14,piVar20);
      FUN_4a12be24(param_1,9);
      if (piVar20 == (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4a129ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
        return puVar4;
      }
      iVar12 = (**(code **)(*piVar20 + 8))(piVar20);
      if (iVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a129af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
        return puVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x4a129b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar4 = (undefined4 *)(**(code **)(*piVar20 + 4))(piVar20);
      return puVar4;
    }
    iVar12 = FUN_4a0cb850(param_2,param_3,0x40);
    if (iVar12 == 0) {
      return (undefined4 *)0x0;
    }
    uVar19 = 10;
    goto code_r0x4a12be24;
  case (undefined4 *)0x9:
  case (undefined4 *)0x20:
    iVar12 = FUN_4a0cb850(param_2,param_3,0x84);
    if (iVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a129f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
      return puVar4;
    }
    goto LAB_4a12a278;
  case (undefined4 *)0xa:
    piStack_24 = unaff_r4;
    piStack_20 = unaff_r5;
    iVar12 = FUN_4a0cb850(param_2,param_3,0x1000);
    if (iVar12 != 0) {
      unaff_r4 = piStack_24;
      unaff_r5 = piStack_20;
      unaff_r6 = piStack_1c;
      if (*(char *)(param_1 + 0x448) == '\0') {
        uVar19 = 0x12;
      }
      else {
        uVar19 = 0x25;
      }
      goto code_r0x4a12be24;
    }
    iVar12 = FUN_4a0cb850(param_2,param_3,0x2000);
    puVar1 = PTR_DAT_4a131a94;
    if (iVar12 != 0) {
      unaff_r4 = piStack_24;
      unaff_r5 = piStack_20;
      unaff_r6 = piStack_1c;
      if (*(char *)(param_1 + 0x448) == '\0') {
        uVar19 = 0xe;
      }
      else {
        uVar19 = 0x26;
      }
      goto code_r0x4a12be24;
    }
    iVar12 = 0;
    if (param_2 == 3) {
      iVar12 = *(int *)(param_3 + 0xc);
      if (iVar12 == 0) {
        iVar17 = 0;
      }
      else {
        iVar17 = *(int *)(iVar12 + 8);
      }
      uStack_44 = *(undefined4 *)(iVar17 + 4);
      if (iVar12 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)(iVar12 + 8);
      }
      uStack_48 = *(undefined4 *)(iVar12 + 8);
      if (*(char *)(param_1 + 0x448) == '\0') {
        uVar19 = FUN_4a0bbcf0(*(undefined4 *)PTR_DAT_4a131a94,0x14);
        uVar14 = FUN_4a0bbe00(*(undefined4 *)puVar1,0x11c,0);
        uVar9 = FUN_4a0bbd68(*(undefined4 *)puVar1,0x30,2);
        auStack_70[0] = uVar19;
        iVar12 = FUN_4a134a10(uStack_44,uStack_48,uVar9,uVar14);
        if (iVar12 != 0) {
          FUN_4a130030(param_1,0x271c);
          FUN_4a131aa0(param_1,0x2725);
          *(undefined4 *)(param_1 + 0x1b0) = 9;
          puVar4 = (undefined4 *)FUN_4a0cf554(param_1,0x15);
          return puVar4;
        }
      }
      uVar15 = 0;
      uVar10 = 0;
LAB_4a130f20:
      puVar1 = PTR_DAT_4a131a98;
      if ((*(char *)(param_1 + 0x448) == '\0') ||
         (bVar27 = false, *(int *)(PTR_DAT_4a131a98 + uVar10 * 4 + 0x20) != 0)) {
        bVar27 = true;
      }
      if (!bVar27) goto LAB_4a131254;
      iVar12 = *(int *)(PTR_DAT_4a131a98 + uVar10 * 4);
      if (0xef < iVar12) {
        uVar19 = *(undefined4 *)PTR_DAT_4a131a94;
        iStack_64 = FUN_4a0bc200(uVar19);
        iStack_68 = FUN_4a0bc1f8(uVar19);
        if (iStack_64 < iStack_68) {
          piVar20 = &iStack_68;
        }
        else {
          piVar20 = &iStack_64;
        }
        iVar12 = *piVar20 - (0x1e0 - iVar12);
      }
      puVar2 = PTR_DAT_4a131a94;
      FUN_4a0bbd68(*(undefined4 *)PTR_DAT_4a131a94,iVar12,2);
      uVar19 = FUN_4a171fac();
      FUN_4a0bbe00(*(undefined4 *)puVar2,*(undefined4 *)(puVar1 + uVar10 * 4 + 4),0);
      uStack_5c = FUN_4a171fac();
      uStack_60 = FUN_4a171fac(*(int *)(puVar1 + uVar10 * 4 + 8) >> 1);
      iVar12 = FUN_4a0bc1f8(*(undefined4 *)puVar2);
      if ((iVar12 == 400) || (iVar12 = FUN_4a0bc1f8(*(undefined4 *)puVar2), iVar12 == 0x140)) {
        uStack_60 = FUN_4a171a94(uStack_60,0x41200000);
      }
      iVar17 = *(int *)(puVar1 + uVar10 * 4 + 0x14);
      iVar12 = 0;
      if (*(int *)(param_1 + 0xe18) != 0) {
        iVar12 = *(int *)(*(int *)(param_1 + 0xe18) + 8);
      }
      uVar9 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x520);
      uVar14 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x51c);
      if (*(int *)(iVar12 + iVar17 * 0x14 + 8) < 2) {
LAB_4a13109c:
        bVar27 = true;
      }
      else {
        iStack_64 = FUN_4a140fd0(uVar14,0,0xb);
        uVar14 = FUN_4a141668(uVar14,0,0xb);
        uVar6 = FUN_4a143c90(uVar9,uVar14,iStack_64);
        if (iVar17 == 2) {
          uVar6 = uVar6 & 1;
joined_r0x4a131098:
          if (uVar6 != 0) goto LAB_4a13109c;
        }
        else if (iVar17 == 1) {
          uVar6 = uVar6 & 0x18;
          goto joined_r0x4a131098;
        }
        bVar27 = false;
      }
      if (bVar27) goto LAB_4a131254;
      uVar14 = FUN_4a171e1c(uStack_60);
      uVar9 = FUN_4a171e1c(uStack_5c);
      uVar19 = FUN_4a171e1c(uVar19);
      auStack_70[0] = uVar14;
      iVar12 = FUN_4a134a10(uStack_44,uStack_48,uVar19,uVar9);
      if (iVar12 == 0) goto LAB_4a131254;
      FUN_4a0cf554(param_1,0x15);
      uVar19 = 0xffffffff;
      uVar15 = 1;
      uVar14 = 0xffffffff;
      uVar9 = 0x2725;
      iVar12 = -1;
      switch(iVar17) {
      case 0:
        uVar19 = 0x2722;
        uVar14 = 0x2717;
        iVar12 = 1;
        break;
      case 1:
        uVar19 = 0x2723;
        uVar14 = 0x2718;
        iVar12 = 2;
        break;
      case 2:
        iVar12 = 4;
        goto LAB_4a1311d8;
      case 4:
        uVar19 = 0x271a;
        uVar14 = 0x270e;
        iVar12 = 3;
        break;
      case 5:
        uVar19 = 0x2724;
        uVar14 = 0x2719;
        iVar12 = 6;
        break;
      case 7:
        uVar19 = 0x2720;
        uVar14 = 0x2715;
        iVar12 = 7;
        break;
      case 9:
        uVar19 = 0x271b;
        uVar14 = 10000;
        iVar12 = 8;
        break;
      case 0xb:
        iVar12 = 5;
LAB_4a1311d8:
        uVar14 = 0x2712;
        uVar19 = 0x271d;
        uVar9 = 0x2726;
      }
      if (*(int *)(param_1 + 0x1b0) == iVar12) {
        *(undefined4 *)(param_1 + 0x1b0) = 0;
        FUN_4a130030(param_1,0x271c);
        FUN_4a131aa0(param_1,0x2725);
      }
      else {
        FUN_4a130030(param_1,uVar19,uVar14);
        FUN_4a131aa0(param_1,uVar9);
        *(int *)(param_1 + 0x1b0) = iVar12;
      }
      goto LAB_4a131260;
    }
    puVar4 = (undefined4 *)0x0;
    if (param_2 != 8) {
      if (param_2 != 9) {
        if (param_2 != 4) {
          if (param_2 != 5) {
                    /* WARNING: Could not recover jumptable at 0x4a1319e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
            return puVar4;
          }
          iVar11 = *(int *)(param_3 + 0xc);
          iVar17 = iVar12;
          if (iVar11 != 0) {
            iVar17 = *(int *)(iVar11 + 8);
          }
          uVar19 = *(undefined4 *)(iVar17 + 0x24);
          iVar17 = iVar12;
          if (iVar11 != 0) {
            iVar12 = *(int *)(iVar11 + 8);
            iVar17 = *(int *)(iVar11 + 8);
          }
          iVar17 = *(int *)(iVar17 + 4);
          iVar12 = *(int *)(iVar12 + 0x14);
          FUN_4a13ca78(*(undefined4 *)(param_1 + 0x20));
          uVar14 = FUN_4a171fac();
          uVar9 = FUN_4a171fac(iVar17 - iVar12);
          uVar10 = FUN_4a171bb8(uVar9,uVar14);
          uVar14 = FUN_4a17211c(uVar10 ^ 0x80000000,0x43b40000);
          uVar9 = FUN_4a171a94(*(undefined4 *)(param_1 + 0xe20),uVar14);
          *(undefined4 *)(param_1 + 0xe20) = uVar9;
          uVar19 = FUN_4a171fac(uVar19);
          uVar19 = FUN_4a171bb8(uVar14,uVar19);
          *(undefined4 *)(param_1 + 0xe24) = uVar19;
          uVar19 = FUN_4a0d4b38(uVar19,0xbf000000,0x3f000000);
          *(undefined4 *)(param_1 + 0xe24) = uVar19;
          *(undefined4 *)(param_1 + 0xe28) = 1000;
          return (undefined4 *)0x3e8;
        }
        goto LAB_4a1317b4;
      }
      iVar12 = *(int *)(param_3 + 0xc);
      bVar27 = iVar12 == 0;
      if (bVar27) {
        iVar17 = 0;
      }
      else {
        iVar17 = *(int *)(iVar12 + 8);
      }
      local_30 = *(undefined4 *)(iVar17 + 0x24);
      if (bVar27) {
        iVar17 = 0;
      }
      else {
        iVar17 = *(int *)(iVar12 + 8);
      }
      iVar17 = *(int *)(iVar17 + 4);
      if (bVar27) {
        iVar11 = 0;
      }
      else {
        iVar11 = *(int *)(iVar12 + 8);
      }
      iVar11 = *(int *)(iVar11 + 8);
      if (bVar27) {
        iVar18 = 0;
      }
      else {
        iVar18 = *(int *)(iVar12 + 8);
      }
      iVar18 = *(int *)(iVar18 + 0x14);
      if (bVar27) {
        iVar21 = 0;
      }
      else {
        iVar21 = *(int *)(iVar12 + 8);
      }
      iVar21 = *(int *)(iVar21 + 0x18);
      if (bVar27) {
        iVar13 = 0;
      }
      else {
        iVar13 = *(int *)(iVar12 + 8);
      }
      puVar23 = *(undefined4 **)(iVar13 + 0xc);
      if (bVar27) {
        iVar13 = 0;
      }
      else {
        iVar13 = *(int *)(iVar12 + 8);
      }
      puVar24 = *(undefined4 **)(iVar13 + 0x10);
      if (bVar27) {
        iVar13 = 0;
      }
      else {
        iVar13 = *(int *)(iVar12 + 8);
      }
      local_34 = *(undefined4 **)(iVar13 + 0x1c);
      if (bVar27) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)(iVar12 + 8);
      }
      local_38 = *(undefined4 **)(iVar12 + 0x20);
      puVar4 = local_38;
      if (iVar17 != iVar18 || iVar11 != iVar21) {
        puVar4 = local_34;
        if (puVar23 == local_34) {
          puVar4 = local_38;
        }
        if (puVar23 != local_34 || puVar24 != puVar4) {
          piStack_28 = (int *)((int)puVar23 - iVar17);
          local_2c = (int)puVar24 - iVar11;
          uStack_3c = FUN_4a171fac((iVar17 - (int)local_34) * local_2c +
                                   (int)piStack_28 * ((int)local_38 - iVar11));
          puVar4 = (undefined4 *)
                   FUN_4a171fac((iVar17 - iVar18) * local_2c + (int)piStack_28 * (iVar21 - iVar11));
          if ((((int)uStack_3c < 1) || (puVar4 < (undefined4 *)0x80000001)) &&
             ((uStack_3c < 0x80000001 || ((int)puVar4 < 1)))) goto LAB_4a1317b4;
          goto LAB_4a131904;
        }
      }
      bVar27 = iVar17 == iVar18 && iVar11 == iVar21;
      if (iVar17 == iVar18 && iVar11 == iVar21) {
        bVar27 = puVar23 == local_34;
        puVar4 = local_34;
      }
      if (bVar27) {
        puVar4 = local_38;
      }
      if (!bVar27 || puVar24 != local_38) {
LAB_4a131904:
        uVar19 = FUN_4a171fac((int)puVar23 - iVar17);
        uVar14 = FUN_4a171fac((int)puVar24 - iVar11);
        uVar9 = FUN_4a171fac((int)local_34 - iVar18);
        uVar8 = FUN_4a171fac((int)local_38 - iVar21);
        uVar19 = FUN_4a002cf8(uVar14,uVar19);
        uVar14 = FUN_4a002cf8(uVar8,uVar9);
        uVar19 = FUN_4a1725c0(uVar14,uVar19);
        uVar14 = FUN_4a171bb8(0x43340000,*(undefined4 *)PTR_DAT_4a131a9c);
        uVar19 = FUN_4a17211c(uVar14,uVar19);
        uVar14 = FUN_4a171a94(*(undefined4 *)(param_1 + 0xe20),uVar19);
        *(undefined4 *)(param_1 + 0xe20) = uVar14;
        uVar14 = FUN_4a171fac(local_30);
        uVar19 = FUN_4a171bb8(uVar19,uVar14);
        *(undefined4 *)(param_1 + 0xe24) = uVar19;
        uVar19 = FUN_4a0d4b38(uVar19,0xbf000000,0x3f000000);
        *(undefined4 *)(param_1 + 0xe24) = uVar19;
        *(undefined4 *)(param_1 + 0xe28) = 1000;
        return (undefined4 *)0x3e8;
      }
    }
LAB_4a1317b4:
    *(undefined4 *)(param_1 + 0xe28) = 0;
    *(undefined4 *)(param_1 + 0xe24) = 0;
    return puVar4;
  case (undefined4 *)0xb:
    iVar12 = FUN_4a0cb850(param_2,param_3,2);
    if (iVar12 == 0) {
      iVar12 = FUN_4a0cb850(param_2,param_3,0x20);
      if (iVar12 == 0) {
        iVar12 = FUN_4a0cb850(param_2,param_3,0x80000000);
        if (iVar12 != 0) {
          if (*(int *)(param_3 + 0xc) != 0) {
            iVar17 = *(int *)(*(int *)(param_3 + 0xc) + 8);
          }
          puVar4 = *(undefined4 **)(param_1 + 0x24);
          *(char *)(puVar4 + 0x1f6) = (char)*(undefined4 *)(iVar17 + 8);
          return puVar4;
        }
        if (param_2 != 0xb) {
                    /* WARNING: Could not recover jumptable at 0x4a12a008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
          return puVar4;
        }
        if (*(int *)(param_3 + 0xc) != 0) {
          iVar17 = *(int *)(*(int *)(param_3 + 0xc) + 8);
        }
        if (((uint)*(undefined4 **)(iVar17 + 4) & 0x1020) == 0) {
          return *(undefined4 **)(iVar17 + 4);
        }
      }
      uVar19 = 0xf;
      goto code_r0x4a12be24;
    }
    goto LAB_4a12a278;
  case (undefined4 *)0xc:
    iVar12 = FUN_4a0cb850(param_2,param_3,2);
    if (iVar12 != 0) {
      uVar19 = 0xe;
      goto code_r0x4a12be24;
    }
    iVar12 = FUN_4a0cb850(param_2,param_3);
    if (iVar12 != 0) {
      uVar19 = 0x10;
      goto code_r0x4a12be24;
    }
    if (param_2 != 3) {
      return (undefined4 *)0x0;
    }
    if (*(int *)(param_3 + 0xc) == 0) {
      iVar12 = 0;
    }
    else {
      iVar12 = *(int *)(*(int *)(param_3 + 0xc) + 8);
    }
    iVar12 = FUN_4a0ccce4(param_1,2,*(undefined4 *)(iVar12 + 4));
    if (iVar12 < 0) {
                    /* WARNING: Could not recover jumptable at 0x4a12ff70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
      return puVar4;
    }
    iVar17 = FUN_4a13fc4c(*(undefined4 *)(param_1 + 0x24),0,iVar12);
    iVar11 = FUN_4a1404dc(*(undefined4 *)(param_1 + 0x24));
    if (iVar11 == 5) {
      if (iVar17 == -1) {
        uVar19 = FUN_4a0cf540(param_1,2);
        FUN_4a0d22bc(uVar19,0);
        uVar10 = 0x14;
        goto code_r0x4a0cf554;
      }
    }
    else if (iVar17 == -1) {
      FUN_4a0d7630(*(undefined4 *)(param_1 + 0x24),iVar12);
      uVar19 = FUN_4a0cf540(param_1,2);
      FUN_4a0d22bc(uVar19,1);
      uVar10 = 0x15;
      goto code_r0x4a0cf554;
    }
    FUN_4a0daa18(*(undefined4 *)(param_1 + 0x24),iVar12);
    uVar19 = FUN_4a0cf540(param_1,2);
    FUN_4a0d22bc(uVar19,2);
    uVar10 = 0x14;
code_r0x4a0cf554:
    iVar17 = *(int *)(*(int *)(param_1 + 0x20) + 0x260);
    iVar12 = FUN_4a085614(iVar17);
    if (iVar12 != 0) {
      FUN_4a0866c0(iVar17,uVar10);
    }
    if (*(int *)(iVar17 + 0x74) == 0) {
      iVar12 = 0;
    }
    else {
      iVar12 = *(int *)(*(int *)(iVar17 + 0x74) + 8);
    }
    iVar12 = iVar12 + uVar10 * 0x14;
    iVar11 = *(int *)(iVar12 + 8);
    iVar17 = 0;
    if (0 < iVar11) {
      iVar12 = *(int *)(iVar12 + 0xc);
      do {
        if (iVar12 == 0) {
          iVar18 = 0;
        }
        else {
          iVar18 = *(int *)(iVar12 + 8);
        }
        piVar20 = *(int **)(iVar18 + iVar17 * 4);
        if (piVar20[1] != 400) {
          (**(code **)(*piVar20 + 0x28))(piVar20);
          (**(code **)(*piVar20 + 0x30))(piVar20,0);
          (**(code **)(*piVar20 + 0x3c))(piVar20);
          return (undefined4 *)(uVar10 | iVar17 << 0x10);
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 < iVar11);
    }
    return (undefined4 *)0xffffffff;
  case (undefined4 *)0xd:
    piStack_28 = param_4;
    if (*(int *)(param_1 + 0x1b0) == 0xb) {
      puVar4 = (undefined4 *)FUN_4a0cb850(param_2,param_3,4);
      if (puVar4 != (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x1b0) = 10;
      }
      return puVar4;
    }
    piStack_24 = unaff_r4;
    piStack_20 = unaff_r5;
    iVar12 = FUN_4a0cb850(param_2,param_3,2);
    if (iVar12 != 0) {
      uVar19 = 0xf;
      param_4 = piStack_28;
      unaff_r4 = piStack_24;
      unaff_r5 = piStack_20;
      unaff_r6 = piStack_1c;
      goto code_r0x4a12be24;
    }
    iVar12 = FUN_4a0cb850(param_2,param_3,0x2000);
    if (iVar12 != 0) {
      uVar19 = 0x13;
      param_4 = piStack_28;
      unaff_r4 = piStack_24;
      unaff_r5 = piStack_20;
      unaff_r6 = piStack_1c;
      goto code_r0x4a12be24;
    }
    puVar4 = (undefined4 *)FUN_4a130b7c(param_1);
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4a12e128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
      return puVar4;
    }
    if (param_2 != 3) {
      return puVar4;
    }
    iVar12 = FUN_4a13ca78(*(undefined4 *)(param_1 + 0x20));
    puVar1 = PTR_DAT_4a12e5ec;
    iVar11 = 0x10e;
    iVar17 = FUN_4a0bc1f8(*(undefined4 *)PTR_DAT_4a12e5ec);
    if ((iVar17 == 400) || (iVar17 = FUN_4a0bc1f8(*(undefined4 *)puVar1), iVar17 == 0x140)) {
      iVar11 = 0xe6;
    }
    puVar4 = *(undefined4 **)(param_3 + 0xc);
    piVar20 = (int *)0x0;
    if (puVar4 == (undefined4 *)0x0) {
      iVar17 = 0;
    }
    else {
      iVar17 = puVar4[2];
    }
    iVar18 = (iVar12 >> 1) + -0x50;
    iVar12 = (iVar12 >> 1) + 0x50;
    if (*(int *)(iVar17 + 4) <= iVar18) {
                    /* WARNING: Could not recover jumptable at 0x4a12e19c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
      return puVar4;
    }
    piVar3 = piVar20;
    if (puVar4 != (undefined4 *)0x0) {
      piVar3 = (int *)puVar4[2];
    }
    if (iVar12 <= piVar3[1]) {
      return puVar4;
    }
    piVar3 = piVar20;
    if (puVar4 != (undefined4 *)0x0) {
      piVar3 = (int *)puVar4[2];
    }
    if (piVar3[2] <= iVar11) {
      return (undefined4 *)piVar3[2];
    }
    FUN_4a0cf554(param_1,0x15,iVar12,iVar18);
    iVar12 = FUN_4a1614e8();
    if (iVar12 == 1) {
      uVar19 = FUN_4a1351bc(*(int *)(param_1 + 0x20) + 0x278,0xc9a);
      uVar19 = FUN_4a13df60(uVar19,0);
      uVar14 = thunk_FUN_4a161570(0x14);
      uVar9 = FUN_4a1614fc(uVar19,0);
      piStack_28 = (int *)FUN_4a0c707c(uVar14,uVar9);
      if (piStack_28 != (int *)0x0) {
        (**(code **)(*piStack_28 + 0xc))();
      }
      piVar3 = piVar20;
      if (piStack_28 != (int *)0x0) {
        (**(code **)(*piStack_28 + 0xc))();
        piVar3 = piStack_28;
      }
      piVar20 = piStack_28;
      if ((piStack_28 != (int *)0x0) &&
         (iVar12 = (**(code **)(*piStack_28 + 8))(piStack_28), iVar12 != 0)) {
        (**(code **)(*piVar20 + 4))(piVar20);
      }
      thunk_FUN_4a161530(uVar19);
      piVar20 = piVar3;
      if (piVar3 != (int *)0x0) {
LAB_4a12e304:
        iVar12 = FUN_4a13e1b4(piVar3);
        piVar20 = piVar3;
        if (0 < iVar12) {
          iVar12 = FUN_4a13e1b4(piVar3);
          iVar11 = 0;
          uVar10 = iVar12 - 1;
          iVar17 = 0;
          if (0 < iVar12) {
            do {
              iVar18 = FUN_4a13dfe4(piVar3,iVar17);
              if ((((iVar18 != 0x20) && (iVar18 = FUN_4a13dfe4(piVar3,iVar17), iVar18 != 10)) &&
                  (iVar18 = FUN_4a13dfe4(piVar3,iVar17), iVar18 != 0xd)) &&
                 (iVar18 = FUN_4a13dfe4(piVar3,iVar17), iVar18 != 9)) break;
              iVar17 = iVar17 + 1;
              iVar11 = iVar11 + 1;
            } while (iVar17 < iVar12);
          }
          uVar15 = uVar10;
          if (-1 < (int)uVar10) {
            do {
              iVar12 = FUN_4a13dfe4(piVar3,uVar10);
              if (((iVar12 != 0x20) && (iVar12 = FUN_4a13dfe4(piVar3,uVar10), iVar12 != 10)) &&
                 ((iVar12 = FUN_4a13dfe4(piVar3,uVar10), iVar12 != 0xd &&
                  (iVar12 = FUN_4a13dfe4(piVar3,uVar10), iVar12 != 9)))) break;
              uVar10 = uVar10 - 1;
              uVar15 = uVar15 - 1;
            } while (uVar10 < 0x80000000);
          }
          piVar16 = (int *)FUN_4a13e624(piVar3,iVar11,uVar15 + 1);
          if (piVar3 != piVar16) {
            if (piVar16 != (int *)0x0) {
              (**(code **)(*piVar16 + 0xc))(piVar16);
            }
            piVar20 = piVar16;
            if ((piVar3 != (int *)0x0) && (iVar12 = (**(code **)(*piVar3 + 8))(piVar3), iVar12 != 0)
               ) {
              (**(code **)(*piVar3 + 4))(piVar3);
            }
          }
          piStack_28 = (int *)piVar20[2];
          psVar5 = (short *)FUN_4a145d70(&piStack_28);
          iVar12 = FUN_4a13e1b4(piVar20);
          if (0 < iVar12) {
            do {
              if (*psVar5 == 10 || *psVar5 == 0xd) {
                *psVar5 = 0x20;
              }
              iVar12 = iVar12 + -1;
              psVar5 = psVar5 + 1;
            } while (iVar12 != 0);
          }
          piVar20[2] = (int)piStack_28;
          if (piVar20 == (int *)0x0) goto LAB_4a12e580;
        }
        iVar12 = FUN_4a13e1b4(piVar20);
        if (0 < iVar12) {
          piVar3 = (int *)FUN_4a0c48bc();
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 0xc))(piVar3);
          }
          iVar12 = (**(code **)(*piVar3 + 0x2c))(piVar3,piVar20);
          if ((piVar3 != (int *)0x0) && (iVar17 = (**(code **)(*piVar3 + 8))(piVar3), iVar17 != 0))
          {
            (**(code **)(*piVar3 + 4))(piVar3);
          }
          if (iVar12 < 0x47) {
            FUN_4a0fb524(*(undefined4 *)(param_1 + 0x20),piVar20);
            *(undefined4 *)(param_1 + 0x1b0) = 10;
          }
          else {
            FUN_4a0cd7c0(param_1,0xc95);
            *(undefined4 *)(param_1 + 0x1b0) = 0xb;
          }
          goto LAB_4a12e5a8;
        }
      }
    }
    else {
      uVar19 = thunk_FUN_4a161570(0x14);
      uVar19 = FUN_4a0c707c(uVar19,&DAT_4a12e5f0);
      uVar14 = FUN_4a0ff4a4();
      piVar3 = (int *)FUN_4a10a6c4(uVar14,uVar19,0x32);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0xc))(piVar3);
        goto LAB_4a12e304;
      }
    }
LAB_4a12e580:
    iVar12 = FUN_4a145948(*(undefined4 *)(param_1 + 0x20));
    if (iVar12 == 0) {
      FUN_4a0cd7c0(param_1,0xc94);
      *(undefined4 *)(param_1 + 0x1b0) = 0xb;
    }
LAB_4a12e5a8:
    if (piVar20 == (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4a12e5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
      return puVar4;
    }
    iVar12 = (**(code **)(*piVar20 + 8))(piVar20);
    if (iVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a12e5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
      return puVar4;
    }
                    /* WARNING: Could not recover jumptable at 0x4a12e5e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (undefined4 *)(**(code **)(*piVar20 + 4))(piVar20);
    return puVar4;
  case (undefined4 *)0xe:
    iVar12 = FUN_4a0cb850(param_2,param_3,2);
    if (iVar12 == 0) {
      iVar12 = FUN_4a0cb850(param_2,param_3,0x2000);
      if (iVar12 == 0) {
        return (undefined4 *)0x0;
      }
      uVar19 = 0x13;
      goto code_r0x4a12be24;
    }
    goto LAB_4a12a18c;
  case (undefined4 *)0xf:
    iVar12 = FUN_4a0cb850(param_2,param_3,0x20);
    if (iVar12 != 0) {
      FUN_4a0fb524(*(undefined4 *)(param_1 + 0x20),0);
      *(undefined4 *)(param_1 + 0x1bc) = 9;
      iVar12 = FUN_4a0fb654(*(undefined4 *)(param_1 + 0x20));
      if (iVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a12a0e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
        return puVar4;
      }
      break;
    }
    iVar12 = FUN_4a0cb850(param_2,param_3,0x42);
    if (iVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a12a108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
      return puVar4;
    }
    goto LAB_4a12a278;
  case (undefined4 *)0x10:
    iVar12 = FUN_4a0cb850(param_2,param_3,0x20);
    if (iVar12 != 0) {
      uVar14 = FUN_4a0941ec();
      FUN_4a094edc(uVar14,0);
      FUN_4a0ff1d4(uVar19);
      FUN_4a0ff474(uVar19);
      *(undefined4 *)(param_1 + 0x1c0) = 2;
      *(undefined4 *)(param_1 + 0x1c4) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x1bc) = 2;
      iVar12 = FUN_4a0fb654(*(undefined4 *)(param_1 + 0x20));
      if (iVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a12a168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
        return puVar4;
      }
      break;
    }
    iVar12 = FUN_4a0cb850(param_2,param_3,0x42);
    if (iVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a12a188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
      return puVar4;
    }
LAB_4a12a18c:
    uVar19 = 0x10;
    goto code_r0x4a12be24;
  case (undefined4 *)0x11:
    iVar12 = FUN_4a0cb850(param_2,param_3,0x20);
    if (iVar12 != 0) {
      host_s3eDeviceRequestQuit_arm();
      if (*(int *)(*(int *)(param_1 + 0x20) + 0x44) == 0 && *(int *)PTR_DAT_4a12a334 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a12a1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
        return puVar4;
      }
      FUN_4a15edcc(s_KILL_ME__________________________4a12a338);
      FUN_4a15edcc(s_TnbNative___kill__4a0575f8);
      piVar20 = (int *)FUN_4a05be98();
      iVar12 = (**(code **)(*piVar20 + 0x18))(piVar20,s_com_cp_app_MainActivity_4a05760c);
      if (iVar12 == 0) {
        FUN_4a15edcc(s_Unable_to_find_the_activity_clas_4a057624);
        return (undefined4 *)((int)&iRam00000000 + 1);
      }
      iVar17 = (**(code **)(*piVar20 + 0x240))
                         (piVar20,iVar12,s_m_Activity_4a057648,s_Lcom_cp_app_MainActivity__4a057654)
      ;
      if (iVar17 == 0) {
        FUN_4a15edcc(s_Sorry__I_can_t_find_MainWrapper_4a057670);
        return (undefined4 *)((int)&iRam00000000 + 1);
      }
      iVar17 = (**(code **)(*piVar20 + 0x244))(piVar20,iVar12,iVar17);
      if (iVar17 == 0) {
        FUN_4a15edcc(s_Sorry__I_can_t_use_MainWrapper_4a057694);
        return (undefined4 *)((int)&iRam00000000 + 1);
      }
      iVar17 = (**(code **)(*piVar20 + 0x1c4))(piVar20,iVar12,s_killMe_4a0576b4,&DAT_4a0576bc);
      if (iVar17 == 0) {
        FUN_4a15edcc(s_Sorry__I_can_t_find_killMe_4a0576c0);
        return (undefined4 *)((int)&iRam00000000 + 1);
      }
      (**(code **)(*piVar20 + 0x238))(piVar20,iVar12,iVar17,&stack0xfffffff4);
      return (undefined4 *)0x0;
    }
    iVar12 = FUN_4a0cb850(param_2,param_3,0x42);
    if (iVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a12a1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
      return puVar4;
    }
    goto LAB_4a12a324;
  case (undefined4 *)0x12:
    iVar12 = FUN_4a0cb850(param_2,param_3,0x20);
    if (iVar12 != 0) {
      *(undefined1 *)(param_1 + 0x21a) = 0;
      *(undefined4 *)(param_1 + 0x1bc) = 7;
      iVar12 = FUN_4a0fb654(*(undefined4 *)(param_1 + 0x20));
      if (iVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a12a238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
        return puVar4;
      }
      break;
    }
    iVar12 = FUN_4a0cb850(param_2,param_3,0x42);
    if (iVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a12a258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
      return puVar4;
    }
    goto LAB_4a12a324;
  case (undefined4 *)0x13:
    uVar19 = *(undefined4 *)(param_1 + 0x20);
    iVar12 = FUN_4a0cb850(param_2,param_3,2);
    if (iVar12 == 0) {
      iVar12 = FUN_4a0cb850(param_2,param_3,0x80000000);
      if (iVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a129b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
        return puVar4;
      }
      puVar4 = *(undefined4 **)(param_3 + 0xc);
      if (puVar4 != (undefined4 *)0x0) {
        iVar17 = puVar4[2];
      }
      if (*(int *)(iVar17 + 8) < 0) {
        return puVar4;
      }
      FUN_4a0fe2fc(uVar19);
      iVar12 = FUN_4a145a54(uVar19);
      if (iVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a129bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
        return puVar4;
      }
      *(undefined4 *)(param_1 + 0x1bc) = 0x18;
      iVar12 = FUN_4a0fb654(*(undefined4 *)(param_1 + 0x20));
      if (iVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a129bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
        return puVar4;
      }
      break;
    }
    goto LAB_4a129f58;
  case (undefined4 *)0x14:
  case (undefined4 *)0x1b:
    iVar12 = FUN_4a0cb850(param_2,param_3,4);
    if (iVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a129b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
      return puVar4;
    }
    goto LAB_4a129f58;
  case (undefined4 *)0x15:
    iVar12 = FUN_4a0cb850(param_2,param_3,0x1000);
    if (iVar12 == 0) {
      iVar12 = FUN_4a0cb850(param_2,param_3,0x1000000);
      if (iVar12 == 0) {
        iVar12 = FUN_4a0cb850(param_2,param_3,0x4000000);
        if (iVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a129c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
          return puVar4;
        }
        *(undefined4 *)(param_1 + 0x1bc) = 0x19;
        iVar12 = FUN_4a0fb654(*(undefined4 *)(param_1 + 0x20));
        if (iVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a129c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
          return puVar4;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x1bc) = 0x1a;
        iVar12 = FUN_4a0fb654(*(undefined4 *)(param_1 + 0x20));
        if (iVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a129c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
          return puVar4;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x1bc) = 0x1d;
      iVar12 = FUN_4a0fb654(*(undefined4 *)(param_1 + 0x20));
      if (iVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a129c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
        return puVar4;
      }
    }
    break;
  case (undefined4 *)0x16:
    iVar12 = FUN_4a0cb850(param_2,param_3,0x1000);
    if (iVar12 == 0) {
      iVar12 = FUN_4a0cb850(param_2,param_3,0x1000000);
      if (iVar12 == 0) {
        iVar12 = FUN_4a0cb850(param_2,param_3,0x4000000);
        if (iVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a129d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
          return puVar4;
        }
        *(undefined4 *)(param_1 + 0x1bc) = 0x1a;
        iVar12 = FUN_4a0fb654(*(undefined4 *)(param_1 + 0x20));
        if (iVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a129d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
          return puVar4;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x1bc) = 0x1a;
        iVar12 = FUN_4a0fb654(*(undefined4 *)(param_1 + 0x20));
        if (iVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a129cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
          return puVar4;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x1bc) = 0x1d;
      iVar12 = FUN_4a0fb654(*(undefined4 *)(param_1 + 0x20));
      if (iVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a129cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
        return puVar4;
      }
    }
    break;
  case (undefined4 *)0x17:
    iVar12 = FUN_4a0cb850(param_2,param_3,0x1000);
    if (iVar12 == 0) {
      iVar12 = FUN_4a0cb850(param_2,param_3,0x4000000);
      if (iVar12 == 0) {
        iVar12 = FUN_4a0cb850(param_2,param_3,0x2000000);
        if (iVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a129dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
          return puVar4;
        }
        *(undefined4 *)(param_1 + 0x1bc) = 0x19;
        iVar12 = FUN_4a0fb654(*(undefined4 *)(param_1 + 0x20));
        if (iVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a129de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
          return puVar4;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x1bc) = 0x1b;
        iVar12 = FUN_4a0fb654(*(undefined4 *)(param_1 + 0x20));
        if (iVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a129da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
          return puVar4;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x1bc) = 0x1d;
      iVar12 = FUN_4a0fb654(*(undefined4 *)(param_1 + 0x20));
      if (iVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a129d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
        return puVar4;
      }
    }
    break;
  case (undefined4 *)0x18:
    if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a129df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
      return puVar4;
    }
    FUN_4a0941ec();
    FUN_4a09453c();
    *(undefined4 *)(param_1 + 0x1bc) = 0x1c;
    iVar12 = FUN_4a0fb654(*(undefined4 *)(param_1 + 0x20));
    if (iVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a129e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
      return puVar4;
    }
    break;
  case (undefined4 *)0x19:
    iVar12 = FUN_4a0cb850(param_2,param_3,0x8000000);
    if (iVar12 == 0) {
      iVar12 = FUN_4a0cb850(param_2,param_3,0x4000000);
      if (iVar12 == 0) {
        iVar12 = FUN_4a0cb850(param_2,param_3,0x2000000);
        if (iVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a129ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
          return puVar4;
        }
        *(undefined4 *)(param_1 + 0x1bc) = 0x19;
        iVar12 = FUN_4a0fb654(*(undefined4 *)(param_1 + 0x20));
        if (iVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a129ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
          return puVar4;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x1bc) = 0x1d;
        iVar12 = FUN_4a0fb654(*(undefined4 *)(param_1 + 0x20));
        if (iVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a129e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
          return puVar4;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x1bc) = 0x1b;
      iVar12 = FUN_4a0fb654(*(undefined4 *)(param_1 + 0x20));
      if (iVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a129e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
        return puVar4;
      }
    }
    break;
  case (undefined4 *)0x1c:
    iVar12 = FUN_4a0cb850(param_2,param_3,0x4000000);
    if (iVar12 == 0) {
      iVar12 = FUN_4a0cb850(param_2,param_3,0x1000);
      if (iVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a129f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
        return puVar4;
      }
      *(undefined4 *)(param_1 + 0x1bc) = 9;
      iVar12 = FUN_4a0fb654(*(undefined4 *)(param_1 + 0x20));
      if (iVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a129f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
        return puVar4;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x1bc) = 0x20;
      iVar12 = FUN_4a0fb654(*(undefined4 *)(param_1 + 0x20));
      if (iVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a129ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
        return puVar4;
      }
    }
    break;
  case (undefined4 *)0x1e:
  case (undefined4 *)0x1f:
    iVar12 = FUN_4a0cb850(param_2,param_3,4);
    if (iVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a129f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
      return puVar4;
    }
LAB_4a129f58:
    uVar19 = 9;
    goto code_r0x4a12be24;
  case (undefined4 *)0x22:
  case (undefined4 *)0x23:
    iVar12 = FUN_4a0cb850(param_2,param_3,0x40);
    if (iVar12 == 0) {
      iVar12 = FUN_4a0cb850(param_2,param_3,0x20);
      if (iVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a12a2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
        return puVar4;
      }
      if (*(int *)(param_1 + 0x1ac) == 0x26) {
        FUN_4a0fca00();
      }
      else {
        FUN_4a0fc764(uVar19);
      }
      uVar14 = FUN_4a0941ec();
      FUN_4a094edc(uVar14,1);
      FUN_4a0ff474(uVar19);
      *(undefined4 *)(param_1 + 0x1c0) = 2;
      *(undefined4 *)(param_1 + 0x1c4) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x1bc) = 2;
      iVar12 = FUN_4a0fb654(*(undefined4 *)(param_1 + 0x20));
      if (iVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a12a2f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
        return puVar4;
      }
      break;
    }
LAB_4a12a278:
    uVar19 = 0xd;
    goto code_r0x4a12be24;
  case (undefined4 *)0x25:
  case (undefined4 *)0x26:
    iVar12 = FUN_4a0cb850(param_2,param_3,4);
    if (iVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a12a320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE_13)();
      return puVar4;
    }
LAB_4a12a324:
    uVar19 = 5;
code_r0x4a12be24:
    puVar25 = &stack0xfffffed8;
    piStack_1c = unaff_r4;
LAB_4a12be34:
    iVar12 = *(int *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_1 + 0x1ac);
    *(undefined4 *)(param_1 + 0x1b4) = 0;
    *(undefined4 *)(param_1 + 0x1ac) = uVar19;
    FUN_4a0fe374(iVar12);
    FUN_4a0fd00c(iVar12);
    puVar4 = *(undefined4 **)(param_1 + 0x1b8);
    if (puVar4 == (undefined4 *)&DAT_00000004) {
      piVar20 = *(int **)(param_1 + 0x250);
      if (piVar20 != (int *)0x0) {
        iVar17 = (**(code **)(*piVar20 + 8))(piVar20);
        puVar4 = (undefined4 *)0x0;
        if (iVar17 != 0) {
          puVar4 = (undefined4 *)(**(code **)(*piVar20 + 4))(piVar20);
        }
        *(undefined4 *)(param_1 + 0x250) = 0;
      }
LAB_4a12bed4:
      piVar20 = *(int **)(param_1 + 0xd5c);
      if (piVar20 != (int *)0x0) {
        iVar17 = (**(code **)(*piVar20 + 8))(piVar20);
        puVar4 = (undefined4 *)0x0;
        if (iVar17 != 0) {
          puVar4 = (undefined4 *)(**(code **)(*piVar20 + 4))(piVar20);
        }
        *(undefined4 *)(param_1 + 0xd5c) = 0;
      }
    }
    else {
      if (puVar4 == (undefined4 *)0xd) goto LAB_4a12bed4;
      if (puVar4 == (undefined4 *)0x1f) {
        puVar4 = (undefined4 *)FUN_4a09fa1c(*(int *)(param_1 + 0x20) + 0x128,0x109);
      }
    }
    switch(uVar19) {
    default:
      return puVar4;
    case 1:
      *(undefined4 *)(param_1 + 0x1e4) = 0;
      FUN_4a0fb75c(iVar12,0);
      if (*PTR_DAT_4a12c7b8 == '\0') {
        puVar4 = *(undefined4 **)(iVar12 + 0x264);
        *(undefined1 *)(puVar4 + 3) = 1;
        puVar4[10] = 1;
        *(undefined1 *)(puVar4 + 0xc) = 1;
        puVar4[0xb] = 0xffffffff;
        *(undefined1 *)(puVar4 + 5) = 0;
        switch(puVar4[6]) {
        case 0:
          puVar4[6] = 5;
          return puVar4;
        case 1:
          goto switchD_4a0d3700_caseD_1;
        default:
          return puVar4;
        }
      }
      puVar4 = (undefined4 *)host_s3eAudioGetInt_arm(1);
      if (puVar4 != (undefined4 *)0x0) {
        return puVar4;
      }
      return (undefined4 *)0x0;
    case 2:
      uVar19 = *(undefined4 *)(param_1 + 0x1c4);
      *(undefined4 *)(iVar12 + 0x460) = *(undefined4 *)(param_1 + 0x1c0);
      *(undefined4 *)(iVar12 + 0x464) = uVar19;
      return (undefined4 *)(iVar12 + 0x460);
    case 4:
      piVar20 = (int *)FUN_4a135e3c(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x60),
                                    PTR_DAT_4a12c7bc,0);
      *(int **)(param_1 + 0x250) = piVar20;
      if (piVar20 != (int *)0x0) {
        (**(code **)(*piVar20 + 0xc))();
      }
      FUN_4a0be380(*(undefined4 *)(param_1 + 0x250));
      puVar1 = PTR_DAT_4a12c7c0;
      *(undefined4 *)(param_1 + 0x254) = 0;
      *puVar1 = 1;
    case 5:
      piStack_28 = piStack_1c;
      iVar17 = 0;
      if (0 < *(int *)(iVar12 + 0x470)) {
        do {
          iVar11 = *(int *)(iVar12 + 0x474);
          if (iVar11 == 0) {
            iVar18 = 0;
          }
          else {
            iVar18 = *(int *)(iVar11 + 8);
          }
          if ((*(uint *)(iVar18 + (iVar17 * 2 + 1) * 4) & 2) != 0) {
            if (iVar11 == 0) {
              iVar11 = 0;
            }
            else {
              iVar11 = *(int *)(iVar11 + 8);
            }
            FUN_4a0992b8(*(undefined4 *)(iVar11 + iVar17 * 8),0);
          }
          iVar17 = iVar17 + 1;
        } while (iVar17 * 2 < *(int *)(iVar12 + 0x470));
      }
      iVar17 = 0;
      if ((int)*(undefined4 **)(iVar12 + 0x484) < 1) {
        return *(undefined4 **)(iVar12 + 0x484);
      }
      do {
        iVar18 = *(int *)(iVar12 + 0x488);
        iVar11 = 0;
        if (iVar18 != 0) {
          iVar11 = *(int *)(iVar18 + 8);
        }
        if ((*(uint *)(iVar11 + (iVar17 + 1) * 4) & 2) != 0) {
          iVar11 = 0;
          if (iVar18 != 0) {
            iVar11 = *(int *)(iVar18 + 8);
          }
          FUN_4a09fa1c(iVar12 + 0x128,*(undefined4 *)(iVar11 + iVar17 * 4));
        }
        iVar17 = iVar17 + 2;
      } while (iVar17 < (int)*(undefined4 **)(iVar12 + 0x484));
      return *(undefined4 **)(iVar12 + 0x484);
    case 6:
      param_4 = (int *)((int)&iRam00000000 + 2);
      FUN_4a089fa0(*(undefined4 *)(param_1 + 0x168),0x800,0x825);
      iVar12 = 0;
      if (*(int *)(param_1 + 0x7c) != 0) {
        iVar12 = *(int *)(*(int *)(param_1 + 0x7c) + 8);
      }
      puVar4 = *(undefined4 **)(iVar12 + 0xc);
      piVar20 = piStack_1c;
      goto FUN_4a0d297c;
    case 7:
      puVar4 = (undefined4 *)FUN_4a1614d4();
      if (puVar4 == (undefined4 *)((int)&iRam00000000 + 1)) {
        host_s3eConfigGetString_arm(PTR_DAT_4a12c7c4 + -0x18,PTR_DAT_4a12c7c4,auStack_120);
        uStack_124 = 0;
        host_s3eConfigGetInt_arm(PTR_DAT_4a12c7c8 + -0x10,PTR_DAT_4a12c7c8,&uStack_124);
        puVar4 = (undefined4 *)FUN_4a161604(auStack_120,uStack_124 & 0xff);
        return puVar4;
      }
      return puVar4;
    case 8:
      FUN_4a0ff4a4();
      thunk_FUN_4a0c6b08();
      return *(undefined4 **)(*(int *)(param_1 + 0x20) + 0x264);
    case 9:
      puVar4 = *(undefined4 **)(param_1 + 0x1b8);
      if ((puVar4 == (undefined4 *)&DAT_0000000a || puVar4 == (undefined4 *)&DAT_00000016) ||
          puVar4 == (undefined4 *)&DAT_00000012) {
        return puVar4;
      }
      puVar4 = (undefined4 *)FUN_4a0cf540(param_1,0);
      unaff_r5 = *(int **)(puVar25 + 0x110);
      unaff_r6 = *(int **)(puVar25 + 0x114);
      unaff_r7 = *(undefined4 *)(puVar25 + 0x118);
      unaff_r8 = *(undefined4 *)(puVar25 + 0x11c);
      unaff_r9 = *(undefined4 *)(puVar25 + 0x120);
      UNRECOVERED_JUMPTABLE_13 = *(code **)(puVar25 + 0x124);
      register0x00000054 = (BADSPACEBASE *)(puVar25 + 0x128);
      piVar20 = *(int **)(puVar25 + 0x10c);
FUN_4a0d297c:
      *(code **)((int)register0x00000054 + -4) = UNRECOVERED_JUMPTABLE_13;
      *(undefined4 *)((int)register0x00000054 + -8) = unaff_r11;
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r10;
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r9;
      *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r8;
      *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r7;
      *(int **)((int)register0x00000054 + -0x1c) = unaff_r6;
      *(int **)((int)register0x00000054 + -0x20) = unaff_r5;
      *(int **)((int)register0x00000054 + -0x24) = piVar20;
      puVar23 = (undefined4 *)((int)register0x00000054 + -0x28);
      *puVar23 = param_4;
      iVar12 = FUN_4a134a50(puVar4,1);
      if (iVar12 == 0) {
        puVar4[0x2a] = 0xffffffff;
        puVar4[10] = puVar4[10] & 0xfffffffd;
        return puVar4;
      }
      iVar12 = FUN_4a0ff494();
      uVar19 = *(undefined4 *)(iVar12 + 0x520);
      uVar14 = *(undefined4 *)(iVar12 + 0x51c);
      iVar17 = FUN_4a0fba7c();
      FUN_4a134a98(puVar4,2);
      puVar4[0x2c] = 1;
      puVar4[0x2e] = puVar4[0x22] + -0x14;
      puVar4[0x29] = 0xffffffff;
      switch(puVar4[0x1d]) {
      case 0:
        puVar4[0x3b] = 0;
        uVar19 = FUN_4a145bfc(iVar12);
        puVar4[0x29] = uVar19;
        puVar4[0x2b] = 7;
        puVar4[0x2c] = 7;
        puVar4[0x2d] = 1;
        puVar4[0x2e] = 0x76;
        puVar4[0x2f] = puVar4[0x23];
        goto switchD_4a0d29f4_default;
      case 1:
        puVar4[0x3b] = 1;
        uVar19 = FUN_4a13fd18(uVar14);
        puVar4[0x2b] = uVar19;
        uVar19 = FUN_4a13f8d8(uVar14);
        puVar4[0x29] = uVar19;
        puVar4[0x2c] = puVar4[0x2b];
        puVar4[0x2d] = 1;
        puVar4[0x2e] = 0xa0;
        uVar19 = puVar4[0x23];
        break;
      case 2:
        uVar19 = FUN_4a13fb20(uVar14);
        puVar4[0x2b] = uVar19;
        uVar19 = 0x28;
        break;
      case 3:
        uVar19 = FUN_4a13fa90(uVar14);
        puVar4[0x2b] = uVar19;
        uVar19 = 0x22;
        break;
      case 4:
        uVar19 = FUN_4a13fb04(uVar14);
        puVar4[0x2b] = uVar19;
        puVar4[0x2f] = 0x2d;
        iVar17 = 0;
        iVar11 = FUN_4a13fb04(uVar14);
        uVar10 = iVar11 - 1;
        if (-1 < (int)uVar10) {
          do {
            uVar19 = FUN_4a13fa58(uVar14,uVar10);
            iVar11 = FUN_4a06bf88(iVar12 + 0x278,uVar19,3);
            if (iVar17 < iVar11) {
              iVar17 = iVar11;
            }
            uVar10 = uVar10 - 1;
          } while (uVar10 < 0x80000000);
        }
        puVar4[0x30] = iVar17;
        goto switchD_4a0d29f4_default;
      case 5:
        uVar19 = FUN_4a140cec(uVar14);
        puVar4[0x2b] = uVar19;
        uVar19 = 0x28;
        break;
      case 6:
        uVar19 = FUN_4a141390(uVar14);
        puVar4[0x2b] = uVar19;
        uVar19 = 0x28;
        break;
      case 7:
        puVar4[0x29] = 0;
        puVar4[0x2b] = *(undefined4 *)(iVar17 + 0xa24);
        uVar19 = 0x28;
        break;
      case 8:
        puVar4[0x29] = 0;
        uVar14 = FUN_4a145634(uVar19,*(undefined4 *)(iVar17 + 0x6d4));
        puVar4[0x2b] = uVar14;
        puVar4[0x2f] = 0x28;
        puVar4[0x2d] = 1;
        iVar12 = 0;
        puVar4[0x2e] = 0xb4;
        do {
          uVar14 = FUN_4a1457e4(uVar19,iVar12,*(undefined4 *)(iVar17 + 0x6d4));
          thunk_FUN_4a161570(0x40);
          uVar9 = FUN_4a099040();
          if (puVar4[0x34] == 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = *(int *)(puVar4[0x34] + 8);
          }
          *(undefined4 *)(iVar11 + iVar12 * 4) = uVar9;
          if (puVar4[0x34] == 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = *(int *)(puVar4[0x34] + 8);
          }
          FUN_4a098798(*(undefined4 *)(iVar11 + iVar12 * 4),uVar14);
          if (puVar4[0x34] == 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = *(int *)(puVar4[0x34] + 8);
          }
          FUN_4a0cb16c(*(undefined4 *)(*(int *)(iVar11 + iVar12 * 4) + 0x34));
          if (puVar4[0x39] == 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = *(int *)(puVar4[0x39] + 8);
          }
          *(int *)(iVar11 + iVar12 * 4) = iVar12;
          iVar12 = iVar12 + 1;
        } while (iVar12 < 5);
switchD_4a0d29f4_default:
        if (*(char *)(puVar4 + 0x1f) != '\0') {
          iVar11 = puVar4[0x2e];
          puVar4[0x22] = iVar11;
          puVar4[0x20] = puVar4[0x24] + (puVar4[0x26] - iVar11 >> 1);
          uVar30 = FUN_4a0015f0(puVar4[0x2b],puVar4[0x2d]);
          iVar21 = (int)uVar30 + (uint)(0 < (int)((ulonglong)uVar30 >> 0x20));
          iVar18 = (iVar21 + -1) * iVar11;
          puVar4[0x2c] = iVar21;
          iVar17 = puVar4[0x29];
          iVar12 = -iVar18;
          if (iVar17 < 0) {
            iVar17 = 0;
          }
          if (iVar18 != 0 && -1 < iVar12) {
            iVar12 = 0;
          }
          uVar19 = FUN_4a171fac(iVar12);
          uVar14 = 0;
          if (puVar4[0x1d] == 0) {
            uVar14 = FUN_4a171fac(iVar11);
            *puVar23 = uVar14;
            uVar19 = FUN_4a171a94(uVar14,uVar19);
            uVar14 = FUN_4a1724e0(*puVar23,0);
            if (iVar17 == 0) {
              iVar17 = 1;
            }
            else if (iVar21 + -1 == iVar17) {
              iVar17 = iVar21 + -2;
            }
          }
          uVar9 = FUN_4a171fac(iVar11);
          FUN_4a08c5fc(puVar4,uVar19,uVar14,uVar9);
          FUN_4a08c564(puVar4,(int)puVar4[0x22] <= iVar18);
          uVar19 = FUN_4a171fac(-iVar17 * puVar4[0x2e]);
          puVar4[0x17] = uVar19;
          puVar4[0x1c] = uVar19;
          return puVar4;
        }
        uVar30 = FUN_4a0015f0(puVar4[0x2b],puVar4[0x2c]);
        iVar12 = (uint)(0 < (int)((ulonglong)uVar30 >> 0x20)) + (int)uVar30;
        puVar4[0x2d] = iVar12;
        iVar12 = iVar12 * puVar4[0x2f];
        iVar17 = puVar4[0x23] - iVar12;
        if (0 < iVar17) {
          iVar17 = 0;
        }
        uVar19 = FUN_4a171fac(iVar17);
        FUN_4a08c614(puVar4,uVar19,0);
        FUN_4a08c608(puVar4,(int)puVar4[0x23] < iVar12);
        puVar4[0x11] = 0;
        puVar4[0x15] = 0;
        return puVar4;
      case 9:
        puVar4[0x29] = 0;
        uVar19 = FUN_4a06be4c(iVar12 + 0x278,3);
        puVar4[0x2f] = uVar19;
        puVar4[0x2b] = *(undefined4 *)(iVar17 + 0xa50);
        goto switchD_4a0d29f4_default;
      case 10:
        uVar19 = FUN_4a145540(uVar19);
        puVar4[0x2b] = uVar19;
        puVar4[0x2c] = uVar19;
        puVar4[0x2d] = 1;
        puVar4[0x2e] = 0xa0;
        uVar19 = puVar4[0x23];
        break;
      case 0xb:
        uVar19 = FUN_4a1454dc(uVar19);
        puVar4[0x2b] = uVar19;
        puVar4[0x2c] = uVar19;
        puVar4[0x2d] = 1;
        puVar4[0x2e] = 0xa0;
        uVar19 = puVar4[0x23];
        break;
      case 0xc:
        iVar12 = FUN_4a0fba7c(iVar12);
        iVar12 = FUN_4a143ac8(uVar19,*(undefined4 *)(iVar12 + 0x6ac));
        uVar19 = FUN_4a0f5958(uVar19,(int)*(char *)(iVar12 + 0x1f));
        puVar4[0x2b] = uVar19;
        puVar4[0x2c] = uVar19;
        puVar4[0x2d] = 1;
        puVar4[0x2e] = 0xa0;
        uVar19 = puVar4[0x23];
        break;
      case 0xd:
        uVar19 = FUN_4a0f3e54(uVar19);
        puVar4[0x2b] = uVar19;
        puVar4[0x2c] = uVar19;
        puVar4[0x2d] = 1;
        puVar4[0x2e] = 0xa0;
        uVar19 = puVar4[0x23];
        break;
      default:
        goto switchD_4a0d29f4_default;
      }
      puVar4[0x2f] = uVar19;
      goto switchD_4a0d29f4_default;
    case 0xb:
      uVar14 = 0x820;
      uVar19 = 0x821;
      goto FUN_4a0cd7a0;
    case 0xc:
      if (*(char *)(param_1 + 0x448) == '\0') {
        uVar14 = 0x86c;
        uVar19 = 0x86d;
      }
      else {
        uVar14 = 0x84f;
        uVar19 = 0x851;
      }
      break;
    case 0xd:
      FUN_4a132ce0(param_1);
      piVar20 = (int *)FUN_4a135e3c(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x60),
                                    PTR_DAT_4a12c7cc,0);
      *(int **)(param_1 + 0xd5c) = piVar20;
      if (piVar20 != (int *)0x0) {
        (**(code **)(*piVar20 + 0xc))();
      }
      FUN_4a0be380(*(undefined4 *)(param_1 + 0xd5c));
      *(undefined4 *)(param_1 + 0x1b0) = 0;
    case 0x11:
      FUN_4a130030(param_1,0x271c);
      uVar19 = 0x2725;
code_r0x4a131aa0:
      uVar14 = FUN_4a16b8dc(&piStack_28,param_1 + 0x1f0);
      FUN_4a0b74b0(*(undefined4 *)(param_1 + 0x3ec),uVar19);
      uVar9 = FUN_4a16588c();
      FUN_4a13935c(uVar9,uVar14);
      FUN_4a16ba04(&piStack_28);
      if (*(int *)(param_1 + 0x1fc) == 0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x1fc) + 8);
      }
      FUN_4a084bdc(param_1 + 0x704,*puVar4);
      if (*(int *)(param_1 + 0x1fc) == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)(*(int *)(param_1 + 0x1fc) + 8);
      }
      FUN_4a084bdc(param_1 + 0x778,*(undefined4 *)(iVar12 + 4));
      if (*(int *)(param_1 + 0x1fc) == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)(*(int *)(param_1 + 0x1fc) + 8);
      }
      FUN_4a084bdc(param_1 + 0x7ec,*(undefined4 *)(iVar12 + 8));
      uVar14 = FUN_4a16b8dc(&piStack_28,param_1 + 0x1f0);
      FUN_4a0b74b0(*(undefined4 *)(param_1 + 0x3ec),uVar19);
      uVar19 = FUN_4a16588c();
      FUN_4a139388(uVar19,uVar14);
      FUN_4a16ba04(&piStack_28);
      if (*(int *)(param_1 + 0x1fc) == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)(*(int *)(param_1 + 0x1fc) + 8);
      }
      uVar19 = FUN_4a002bb8(*(undefined4 *)(iVar12 + 0xc));
      uVar19 = FUN_4a17211c(uVar19,0x43b40000);
      uVar10 = FUN_4a171bb8(uVar19,*(undefined4 *)PTR_DAT_4a131c30);
      if (uVar10 < 0xc3340000) {
        if (0x4333ffff < (int)uVar10) {
          uVar10 = FUN_4a1725c0(uVar10,0x43b40000);
        }
      }
      else {
        uVar10 = FUN_4a171a94(uVar10,0x43b40000);
      }
      uVar19 = FUN_4a084be4(param_1 + 0x860);
      FUN_4a171a94(uVar19,*(undefined4 *)(param_1 + 0xe20));
      uVar19 = FUN_4a0d4990();
      FUN_4a084b60(param_1 + 0x860,uVar19);
      *(undefined4 *)(param_1 + 0xe20) = 0;
      *(undefined4 *)(param_1 + 0xe24) = 0;
      *(undefined4 *)(param_1 + 0xe28) = 0;
      puVar4 = (undefined4 *)FUN_4a084bdc(param_1 + 0x860,uVar10);
      return puVar4;
    case 0xe:
      FUN_4a130030(param_1,0x271e);
      uVar19 = 0x2725;
      goto code_r0x4a131aa0;
    case 0xf:
      FUN_4a130030(param_1,0x271f);
      uVar19 = 0x2725;
      goto code_r0x4a131aa0;
    case 0x10:
      *(undefined4 *)(param_1 + 0x1b0) = 10;
      FUN_4a130030(param_1,0x2721);
      uVar19 = 0x2727;
      goto code_r0x4a131aa0;
    case 0x12:
      uVar14 = 0x822;
      uVar19 = 0x823;
      goto FUN_4a0cd7a0;
    case 0x13:
      uVar14 = 0x81d;
      uVar19 = 0x824;
      goto FUN_4a0cd7a0;
    case 0x14:
      uVar14 = 0xcd1;
      uVar19 = 0xcd0;
      goto FUN_4a0cd7a0;
    case 0x15:
      uVar14 = 0x829;
      uVar19 = 0x842;
      goto FUN_4a0cd7a0;
    case 0x17:
      uVar14 = 0xcaf;
      uVar19 = 0xcb0;
      break;
    case 0x18:
      FUN_4a09f864(*(int *)(param_1 + 0x20) + 0x128,0x109);
      FUN_4a098f10(param_1 + 0x284,0);
      if (*(int *)(param_1 + 0x2c4) == 0) {
        piVar3 = (int *)(param_1 + 0x2c4);
        piVar20 = (int *)FUN_4a136124(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x60),0x129);
        if ((int *)*piVar3 != piVar20) {
          if (piVar20 != (int *)0x0) {
            (**(code **)(*piVar20 + 0xc))(piVar20);
          }
          piVar16 = (int *)*piVar3;
          if ((piVar16 != (int *)0x0) &&
             (iVar17 = (**(code **)(*piVar16 + 8))(piVar16), iVar17 != 0)) {
            (**(code **)(*piVar16 + 4))(piVar16);
          }
          *piVar3 = (int)piVar20;
        }
      }
      FUN_4a0d6ab8(&local_30,*(undefined4 *)(param_1 + 0x24));
      piVar20 = piStack_28;
      if (piStack_24 != (int *)0x0) {
        (**(code **)(*piStack_24 + 0xc))(piStack_24);
      }
      (**(code **)(*(int *)(param_1 + 0x2cc) + 0x1c))((int *)(param_1 + 0x2cc));
      *(int **)(param_1 + 0x2d4) = piVar20;
      *(int **)(param_1 + 0x2d8) = piStack_24;
      FUN_4a16bc4c(&local_30);
      uVar19 = FUN_4a145948(iVar12);
      iVar17 = FUN_4a141abc(*(undefined4 *)(param_1 + 0x24),0);
      if (iVar17 == 0) {
        uVar14 = 0xcbb;
      }
      else {
        uVar14 = 0xcba;
      }
      FUN_4a1351bc(iVar12 + 0x278,uVar14);
      FUN_4a06b7b4(iVar12 + 0x278,0xfffffff5,0xcb9,uVar19);
      piVar20 = (int *)0x12c;
      uVar19 = 1;
      iVar17 = -0xb;
      goto code_r0x4a06b330;
    case 0x19:
      piVar20 = (int *)0xb4;
      uVar19 = 1;
      iVar17 = 0xcbd;
      goto code_r0x4a06b330;
    case 0x1a:
      piVar20 = (int *)0xc8;
      uVar19 = 1;
      iVar17 = 0xcbf;
      goto code_r0x4a06b330;
    case 0x1b:
      piVar20 = (int *)0x64;
      uVar19 = 2;
      iVar17 = 0xcc3;
      goto code_r0x4a06b330;
    case 0x1c:
      piVar20 = (int *)0xc8;
      uVar19 = 1;
      iVar17 = 0xcc4;
      goto code_r0x4a06b330;
    case 0x1d:
      goto switchD_4a12bf18_caseD_1d;
    case 0x1e:
      uVar14 = 0xcb3;
      uVar19 = 0xcb5;
      break;
    case 0x1f:
      FUN_4a09f864(*(int *)(param_1 + 0x20) + 0x128,0x109);
      piVar20 = (int *)0xc8;
      uVar19 = 1;
      iVar17 = 0xccd;
code_r0x4a06b330:
      iVar11 = 0;
      piStack_20 = piVar20;
      if (iVar17 < -2) {
        if (*(int *)(iVar12 + 0x2b8) != 0) {
          iVar11 = *(int *)(*(int *)(iVar12 + 0x2b8) + 8);
        }
        piVar3 = *(int **)(iVar11 + (iVar17 + 0xc) * 4);
      }
      else {
        uVar14 = FUN_4a08db2c();
        piVar3 = (int *)FUN_4a135b4c(uVar14,iVar17,0);
      }
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0xc))();
      }
      if (*(int **)(iVar12 + 0x304) != piVar3) {
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0xc))();
        }
        piVar16 = *(int **)(iVar12 + 0x304);
        if ((piVar16 != (int *)0x0) && (iVar17 = (**(code **)(*piVar16 + 8))(piVar16), iVar17 != 0))
        {
          (**(code **)(*piVar16 + 4))(piVar16);
        }
        *(int **)(iVar12 + 0x304) = piVar3;
      }
      piStack_20 = (int *)(iVar12 + 0x2f0);
      puVar4 = (undefined4 *)FUN_4a06b0fc(iVar12 + 0x278,piVar3,uVar19,piVar20);
      if ((piVar3 != (int *)0x0) && (iVar12 = (**(code **)(*piVar3 + 8))(piVar3), iVar12 != 0)) {
        (**(code **)(*piVar3 + 4))(piVar3);
      }
      return puVar4;
    case 0x21:
      uVar14 = 0xcb3;
      uVar19 = 0xcb6;
      break;
    case 0x22:
      uVar14 = 0xcb3;
      uVar19 = 0xcb7;
      break;
    case 0x23:
      uVar19 = FUN_4a145948(iVar12);
      FUN_4a06b6cc(iVar12 + 0x278,0xfffffff5,0xcb4,uVar19);
      uVar14 = 0xcb3;
      uVar19 = 0xfffffff5;
      break;
    case 0x24:
      *(undefined1 *)(param_1 + 0x448) = 1;
      FUN_4a12be24(param_1,0xd);
      iVar17 = FUN_4a0941ec();
      iVar12 = FUN_4a0ff494();
      uVar14 = *(undefined4 *)(iVar12 + 0x51c);
      uVar19 = FUN_4a140fd0(uVar14,0,2);
      *(undefined4 *)(iVar17 + 0x20) = uVar19;
      uVar19 = FUN_4a140fd0(uVar14,0,3);
      *(undefined4 *)(iVar17 + 0x24) = uVar19;
      uVar19 = FUN_4a140fd0(uVar14,0,0xb);
      *(undefined4 *)(iVar17 + 0x28) = uVar19;
      uVar19 = FUN_4a140fd0(uVar14,0,0xc);
      *(undefined4 *)(iVar17 + 0x2c) = uVar19;
      uVar19 = FUN_4a140fd0(uVar14,0,5);
      *(undefined4 *)(iVar17 + 0x30) = uVar19;
      uVar19 = FUN_4a140fd0(uVar14,0,6);
      *(undefined4 *)(iVar17 + 0x34) = uVar19;
      uVar19 = FUN_4a140fd0(uVar14,0,7);
      *(undefined4 *)(iVar17 + 0x38) = uVar19;
      uVar19 = FUN_4a140fd0(uVar14,0,8);
      *(undefined4 *)(iVar17 + 0x3c) = uVar19;
      uVar19 = FUN_4a140fd0(uVar14,0,9);
      *(undefined4 *)(iVar17 + 0x40) = uVar19;
      puVar4 = (undefined4 *)FUN_4a140fd0(uVar14,0,10);
      *(undefined4 **)(iVar17 + 0x44) = puVar4;
      return puVar4;
    case 0x25:
      uVar14 = 0xc9e;
      uVar19 = 0xca0;
      goto FUN_4a0cd7a0;
    case 0x26:
      uVar14 = 0xc9e;
      uVar19 = 0xca1;
FUN_4a0cd7a0:
      puVar4 = (undefined4 *)FUN_4a089eb4(*(undefined4 *)(param_1 + 0x168),uVar19,uVar14,0x40);
      return puVar4;
    case 0x28:
      FUN_4a0fe5e8(*(undefined4 *)(param_1 + 0x20));
      uVar14 = 0xc9b;
      uVar19 = 0xc9d;
      break;
    case 0x29:
      uVar14 = 0xc9b;
      uVar19 = 0xc9c;
      break;
    case 0x2a:
      iVar17 = host_s3eConfigGetInt_arm(&DAT_4a12c7e8,s_RenderDisclaimerIn3D_4a12c7d0,&piStack_20);
      if ((iVar17 != 0) || (piStack_20 == (int *)0x0)) {
        iVar17 = 0;
        if (*(int *)PTR_DAT_4a12c7ec != 0) {
          iVar17 = *(int *)PTR_DAT_4a12c7f0;
        }
        if (*(int *)PTR_DAT_4a12c7ec != 0 && iVar17 != 0) {
          *(undefined4 *)PTR_DAT_4a12c7ec = 0;
          if (*(int *)PTR_DAT_4a12c7f4 == 0) {
            host_s3eDeviceGetString_arm(0x18);
          }
          else {
            FUN_4a00e63c();
          }
        }
      }
      iVar17 = FUN_4a13ca78(iVar12);
      iVar17 = (int)((ulonglong)((longlong)DAT_4a12c7f8 * (longlong)iVar17) >> 0x20);
      puVar4 = (undefined4 *)FUN_4a06b330(iVar12 + 0x278,0xcdf,1,iVar17 - (iVar17 >> 0x1f));
      *(undefined4 *)(param_1 + 600) = 0;
      return puVar4;
    }
    iVar17 = *(int *)(param_1 + 0x168);
    iVar12 = FUN_4a0ff494();
    *(undefined4 *)(iVar17 + 0x78) = 1;
    *(undefined4 *)(iVar17 + 0x94) = 0xffffffff;
    *(undefined4 *)(iVar17 + 0x98) = 4;
    *(undefined4 *)(iVar17 + 0x90) = uVar14;
    *(undefined4 *)(iVar17 + 0x9c) = 0xffffffff;
    *(undefined4 *)(iVar17 + 0xa0) = 0xffffffff;
    FUN_4a09f974(iVar12 + 0x128,0x60);
    uVar14 = FUN_4a171e1c();
    *(undefined4 *)(iVar17 + 0xa4) = uVar14;
    *(undefined4 *)(iVar17 + 0xa8) = 200;
    FUN_4a08a03c(iVar17,uVar19,0);
    *(undefined4 *)(iVar17 + 0x74) = 0;
    *(undefined4 *)(iVar17 + 0x7c) = 2;
    *(undefined4 *)(iVar17 + 0x80) = 0;
                    /* WARNING: Could not recover jumptable at 0x4a0faeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (undefined4 *)(*(code *)PTR_caseD_2_4a0faec8)();
    return puVar4;
  }
  puVar4 = *(undefined4 **)(param_1 + 0x20);
LAB_4a0fc244:
  puVar4[0x113] = 0xffffff;
  puVar4[0x114] = 0xffffffff;
  *(undefined1 *)(puVar4 + 0x112) = 1;
  *(undefined1 *)(puVar4 + 0x116) = 0;
  return puVar4;
LAB_4a131254:
  uVar10 = uVar10 + 0xb;
  if (0x57 < uVar10) goto LAB_4a131260;
  goto LAB_4a130f20;
switchD_4a12bf18_caseD_1d:
  FUN_4a098e94(param_1 + 0x284);
  piStack_20 = (int *)0x0;
  piVar20 = *(int **)(param_1 + 0x2c4);
  if (piVar20 != (int *)0x0) {
    iVar12 = (**(code **)(*piVar20 + 8))(piVar20);
    if (iVar12 != 0) {
      (**(code **)(*piVar20 + 4))(piVar20);
    }
    *(int **)(param_1 + 0x2c4) = piStack_20;
  }
  piVar20 = piStack_20;
  if ((piStack_20 != (int *)0x0) &&
     (iVar12 = (**(code **)(*piStack_20 + 8))(piStack_20), iVar12 != 0)) {
    (**(code **)(*piVar20 + 4))(piVar20);
  }
  FUN_4a09fa1c(*(int *)(param_1 + 0x20) + 0x128,0x109);
  uVar19 = 9;
  goto LAB_4a12be34;
switchD_4a0d3700_caseD_1:
  puVar4[6] = 2;
  uVar10 = puVar4[9];
  if ((int)uVar10 < 0) {
    return (undefined4 *)puVar4[2];
  }
  iVar17 = ((undefined4 *)puVar4[2])[0x1d];
  iVar12 = 0;
  if (iVar17 != 0) {
    iVar12 = *(int *)(iVar17 + 8);
  }
  iVar11 = 0;
  if (iVar17 == 0) {
    iVar12 = 0;
  }
  puVar4 = *(undefined4 **)(iVar12 + (uVar10 & 0xffff) * 0x14 + 0xc);
  if (puVar4 != (undefined4 *)0x0) {
    iVar11 = puVar4[2];
  }
  piVar20 = *(int **)(iVar11 + (uVar10 >> 0x10) * 4);
  if (piVar20 == (int *)0x0) {
    return puVar4;
  }
  (**(code **)(*piVar20 + 0x40))(piVar20);
                    /* WARNING: Could not recover jumptable at 0x4a08673c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar4 = (undefined4 *)(**(code **)(*piVar20 + 0x38))(piVar20,*(code **)(*piVar20 + 0x38),0);
  return puVar4;
LAB_4a131260:
  UNRECOVERED_JUMPTABLE = (code *)0x4a131268;
  uVar10 = FUN_4a130b7c(param_1);
  bVar27 = (uVar10 & ~uVar15) != 0;
  iVar12 = 0;
  if (bVar27) {
    iVar12 = *(int *)(param_1 + 0x1b0);
  }
  bVar28 = iVar12 == 0;
  bVar29 = iVar12 == 9;
  ppiVar26 = (int **)auStack_70;
  if ((!bVar27 || bVar28) || bVar29) {
    ppiVar26 = &piStack_24;
  }
  if ((!bVar27 || bVar28) || bVar29) {
    param_1 = (int)*ppiVar26;
    UNRECOVERED_JUMPTABLE = (code *)ppiVar26[8];
    ppiVar26 = ppiVar26 + 9;
  }
                    /* WARNING: Could not recover jumptable at 0x4a131280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if ((!bVar27 || bVar28) || bVar29) {
    puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE)();
    return puVar4;
  }
  uVar19 = 0x2735;
  iVar17 = -1;
  uVar14 = 0x2736;
  switch(iVar12) {
  default:
    uVar19 = 0xffffffff;
    uVar14 = 0xffffffff;
    goto LAB_4a1314e4;
  case 1:
    uVar19 = 0x273b;
    iVar17 = 0;
    uVar14 = 0x273c;
    goto LAB_4a1314e4;
  case 2:
    iVar17 = 1;
    uVar19 = 0x273e;
    uVar14 = 0x273f;
    goto LAB_4a1314e4;
  case 3:
    iVar17 = 4;
    uVar19 = 0x2738;
    uVar14 = 0x2739;
    goto LAB_4a1314e4;
  case 4:
    iVar17 = 2;
    uVar9 = 3;
    uVar19 = 0x2735;
    break;
  case 5:
    iVar17 = 0xb;
    uVar9 = 0xc;
    break;
  case 6:
    iVar17 = 5;
    uVar19 = 0x2732;
    uVar9 = 6;
    uVar14 = 0x2733;
    break;
  case 7:
    iVar17 = 7;
    uVar19 = 0x272f;
    uVar9 = 8;
    uVar14 = 0x2730;
    break;
  case 8:
    iVar17 = 9;
    uVar19 = 0x272c;
    uVar9 = 10;
    uVar14 = 0x272d;
  }
  iVar12 = FUN_4a14440c(*(undefined4 *)(param_1 + 0x28),0,uVar9);
  puVar1 = PTR_DAT_4a131a98;
  if (1 < iVar12) {
    iVar12 = 0;
    ppiVar26[5] = (int *)0x0;
    ppiVar26[4] = (int *)0x0;
    do {
      if (*(int *)(PTR_DAT_4a131a98 + iVar12 * 4 + 0x14) == iVar17) {
        iVar11 = *(int *)(PTR_DAT_4a131a98 + iVar12 * 4);
        if (0xef < iVar11) {
          ppiVar26[3] = *(int **)PTR_DAT_4a131a94;
          piVar20 = (int *)FUN_4a0bc200();
          ppiVar26[2] = piVar20;
          piVar20 = (int *)FUN_4a0bc1f8(ppiVar26[3]);
          ppiVar26[1] = piVar20;
          if ((int)ppiVar26[2] < (int)piVar20) {
            ppiVar7 = ppiVar26 + 1;
          }
          else {
            ppiVar7 = ppiVar26 + 2;
          }
          iVar11 = (int)*ppiVar7 - (0x1e0 - iVar11);
        }
        puVar2 = PTR_DAT_4a131a94;
        piVar20 = (int *)FUN_4a0bbd68(*(undefined4 *)PTR_DAT_4a131a94,iVar11 + -0x32,2);
        ppiVar26[5] = piVar20;
        piVar20 = (int *)FUN_4a0bbe00(*(undefined4 *)puVar2,*(undefined4 *)(puVar1 + iVar12 * 4 + 4)
                                      ,0);
        ppiVar26[4] = piVar20;
        break;
      }
      iVar12 = iVar12 + 0xb;
    } while (iVar12 < 0x58);
    *ppiVar26 = (int *)0x1e;
    iVar12 = FUN_4a134a10(ppiVar26[0xb],ppiVar26[10],ppiVar26[5],ppiVar26[4]);
    if (iVar12 != 0) {
      uVar19 = FUN_4a14440c(*(undefined4 *)(param_1 + 0x28),0,uVar9);
      iVar12 = FUN_4a141170(*(undefined4 *)(param_1 + 0x24),0,uVar9);
      FUN_4a0015f0(iVar12 + 1,uVar19);
      FUN_4a0deb14(*(undefined4 *)(param_1 + 0x24),uVar9,extraout_r1);
      FUN_4a0cf554(param_1,0x15);
      puVar4 = (undefined4 *)
               FUN_4a0cad1c(*(undefined4 *)(param_1 + 0xd60),*(undefined4 *)(param_1 + 0xd64));
      return puVar4;
    }
  }
LAB_4a1314e4:
  uVar9 = FUN_4a16b8dc(ppiVar26 + 0xc,param_1 + 0x1f0);
  FUN_4a0b74b0(*(undefined4 *)(param_1 + 0x3ec),uVar19);
  uVar19 = FUN_4a16588c();
  FUN_4a13935c(uVar19,uVar9);
  FUN_4a16ba04(ppiVar26 + 0xc);
  iVar12 = *(int *)(param_1 + 0x1fc);
  bVar27 = iVar12 != 0;
  if (bVar27) {
    iVar11 = *(int *)(iVar12 + 8);
  }
  else {
    iVar11 = 0;
  }
  piVar20 = *(int **)(iVar11 + 8);
  if (bVar27) {
    iVar11 = *(int *)(iVar12 + 8);
    piVar3 = *(int **)(iVar12 + 8);
  }
  else {
    piVar3 = (int *)0x0;
  }
  piVar3 = (int *)*piVar3;
  if (!bVar27) {
    iVar11 = 0;
  }
  piVar22 = *(int **)(iVar11 + 4);
  uVar19 = FUN_4a13caa0(*(undefined4 *)(param_1 + 0x20));
  piVar16 = (int *)FUN_4a13ca78(*(undefined4 *)(param_1 + 0x20));
  ppiVar26[5] = piVar16;
  uVar9 = FUN_4a16b8dc(ppiVar26 + 0xc,param_1 + 0x204);
  *ppiVar26 = (int *)uVar19;
  ppiVar26[3] = piVar20;
  ppiVar26[2] = piVar22;
  ppiVar26[1] = piVar3;
  FUN_4a07d204(uVar9,*(undefined4 *)(param_1 + 0x444),*(undefined4 *)(param_1 + 0x3f4),ppiVar26[5]);
  FUN_4a16ba04(ppiVar26 + 0xc);
  if (*(int *)(param_1 + 0x210) == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x210) + 8);
  }
  piVar20 = (int *)FUN_4a171e1c(*puVar4);
  ppiVar26[9] = piVar20;
  if (*(int *)(param_1 + 0x210) == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = *(int *)(*(int *)(param_1 + 0x210) + 8);
  }
  piVar20 = (int *)FUN_4a171e1c(*(undefined4 *)(iVar12 + 4));
  ppiVar26[8] = piVar20;
  uVar19 = FUN_4a16b8dc(ppiVar26 + 0xc,param_1 + 0x1f0);
  FUN_4a0b74b0(*(undefined4 *)(param_1 + 0x3ec),uVar14);
  uVar14 = FUN_4a16588c();
  FUN_4a13935c(uVar14,uVar19);
  FUN_4a16ba04(ppiVar26 + 0xc);
  iVar12 = *(int *)(param_1 + 0x1fc);
  bVar27 = iVar12 != 0;
  if (bVar27) {
    iVar11 = *(int *)(iVar12 + 8);
  }
  else {
    iVar11 = 0;
  }
  piVar20 = *(int **)(iVar11 + 8);
  if (bVar27) {
    iVar11 = *(int *)(iVar12 + 8);
    piVar3 = *(int **)(iVar12 + 8);
  }
  else {
    piVar3 = (int *)0x0;
  }
  piVar3 = (int *)*piVar3;
  if (!bVar27) {
    iVar11 = 0;
  }
  piVar16 = *(int **)(iVar11 + 4);
  uVar19 = FUN_4a13caa0(*(undefined4 *)(param_1 + 0x20));
  uVar14 = FUN_4a13ca78(*(undefined4 *)(param_1 + 0x20));
  uVar9 = FUN_4a16b8dc(ppiVar26 + 0xc,param_1 + 0x204);
  ppiVar26[3] = piVar20;
  ppiVar26[2] = piVar16;
  ppiVar26[1] = piVar3;
  *ppiVar26 = (int *)uVar19;
  FUN_4a07d204(uVar9,*(undefined4 *)(param_1 + 0x444),*(undefined4 *)(param_1 + 0x3f4),uVar14);
  FUN_4a16ba04(ppiVar26 + 0xc);
  if (*(int *)(param_1 + 0x210) == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x210) + 8);
  }
  piVar20 = (int *)FUN_4a171e1c(*puVar4);
  ppiVar26[7] = piVar20;
  if (*(int *)(param_1 + 0x210) == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = *(int *)(*(int *)(param_1 + 0x210) + 8);
  }
  piVar20 = (int *)FUN_4a171e1c(*(undefined4 *)(iVar12 + 4));
  puVar1 = PTR_DAT_4a131a94;
  ppiVar26[6] = piVar20;
  FUN_4a0bbe98(*(undefined4 *)PTR_DAT_4a131a94,ppiVar26 + 9,ppiVar26 + 8);
  FUN_4a0bbe98(*(undefined4 *)puVar1,ppiVar26 + 7,ppiVar26 + 6);
  uVar19 = FUN_4a0bbcf0(*(undefined4 *)puVar1,0x2d);
  *ppiVar26 = (int *)uVar19;
  uVar14 = 0;
  iVar12 = FUN_4a134a10(ppiVar26[0xb],ppiVar26[10],ppiVar26[9],ppiVar26[8]);
  if (iVar12 == 0) {
    *ppiVar26 = (int *)uVar19;
    iVar12 = FUN_4a134a10(ppiVar26[0xb],ppiVar26[10],ppiVar26[7],ppiVar26[6]);
    if (iVar12 != 0) {
      uVar14 = 1;
    }
  }
  else {
    uVar14 = 0xffffffff;
  }
  iVar12 = FUN_4a133b10(param_1,iVar17,uVar14);
  if (iVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a131740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (undefined4 *)(*(code *)ppiVar26[0x1b])();
    return puVar4;
  }
  FUN_4a0cf554(param_1,0x15);
  FUN_4a0cad1c(*(undefined4 *)(param_1 + 0xd60),*(undefined4 *)(param_1 + 0xd64));
  iVar12 = FUN_4a141abc(*(undefined4 *)(param_1 + 0x24),0);
  *(undefined4 *)(param_1 + 0xd68) = 0;
  if (iVar12 == 0) {
    uVar19 = 0x6f;
  }
  else {
    uVar19 = 8;
  }
  FUN_4a06f95c(*(undefined4 *)(*(int *)(param_1 + 0xd60) + 0x34),uVar19,0x10);
  puVar4 = (undefined4 *)FUN_4a06f95c(*(undefined4 *)(*(int *)(param_1 + 0xd64) + 0x34),uVar19,0x10)
  ;
  return puVar4;
}




/* AUTOMATED DECOMPILER OUTPUT. Not original source, not a buildable game.
 * Function boundaries, types, indirect calls, and data still require validation. */

// Address: 4a086318

void FUN_4a086318(int param_1,int param_2)

{
  short sVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  undefined *local_3c [2];
  int local_34;
  int *local_30;
  undefined *local_28;
  
  FUN_4a085310();
  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x4c) + 8);
  }
  uVar10 = (uint)*(byte *)(iVar4 + param_2);
  piVar5 = (int *)FUN_4a0c6bc0(local_3c);
  local_28 = PTR_PTR_4a0865f4;
  piVar5[2] = 0;
  piVar5[3] = 0;
  *piVar5 = (int)local_28;
  if (uVar10 != 0) {
    iVar4 = FUN_4a15e080(uVar10 << 2);
    if (iVar4 == 0) {
      iVar4 = FUN_4a1669a8();
    }
    iVar8 = 0;
    do {
      *(undefined4 *)(iVar4 + iVar8 * 4) = 0;
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)uVar10);
    thunk_FUN_4a161570(0x18);
    puVar6 = (undefined4 *)FUN_4a0c0628();
    puVar6[3] = 4;
    puVar6[4] = uVar10;
    puVar3 = PTR_PTR_4a0865f8;
    *puVar6 = PTR_PTR_4a0865f8;
    puVar6[2] = iVar4;
    *(undefined1 *)(puVar6 + 5) = 1;
    if (puVar6 != (undefined4 *)0x0) {
      (**(code **)(puVar3 + 0xc))(puVar6);
    }
    (**(code **)(*piVar5 + 0x1c))(piVar5);
    piVar5[2] = uVar10;
    piVar5[3] = (int)puVar6;
  }
  piVar5 = local_30;
  iVar4 = local_34;
  if (*(int *)(param_1 + 0x74) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(*(int *)(param_1 + 0x74) + 8);
  }
  piVar9 = (int *)(iVar8 + param_2 * 0x14);
  if (local_30 != (int *)0x0) {
    (**(code **)(*local_30 + 0xc))(local_30);
  }
  (**(code **)(*piVar9 + 0x1c))(piVar9);
  piVar9[2] = iVar4;
  piVar11 = (int *)0x0;
  piVar9[3] = (int)piVar5;
  iVar4 = 0;
  if (uVar10 != 0) {
    do {
      if (iVar4 == 0) {
        if (*(int *)(param_1 + 0x24) == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(*(int *)(param_1 + 0x24) + 8);
        }
        sVar1 = *(short *)(iVar8 + param_2 * 2);
        uVar7 = thunk_FUN_4a161570(0x14);
        piVar9 = (int *)FUN_4a0c707c(uVar7,PTR_s_bin_anim2d_bin_4a0865fc + sVar1 * 0x3b);
        if (piVar9 != (int *)0x0) {
          (**(code **)(*piVar9 + 0xc))(piVar9);
        }
        bVar2 = false;
        uVar7 = thunk_FUN_4a161570(0x14);
        uVar7 = FUN_4a0c707c(uVar7,PTR_DAT_4a086600);
        iVar8 = FUN_4a13e1c4(piVar9,uVar7);
        if (iVar8 == 0) {
          uVar7 = thunk_FUN_4a161570(0x14);
          uVar7 = FUN_4a0c707c(uVar7,PTR_DAT_4a086604);
          iVar8 = FUN_4a13e1c4(piVar9,uVar7);
          if (iVar8 != 0) goto LAB_4a086508;
        }
        else {
LAB_4a086508:
          bVar2 = true;
        }
        piVar5 = (int *)FUN_4a0c7964(piVar9);
        if (piVar5 != (int *)0x0 && bVar2) {
          (**(code **)(*piVar5 + 0x2c))(piVar5);
        }
        piVar11 = piVar5;
        if ((piVar9 != (int *)0x0) && (iVar8 = (**(code **)(*piVar9 + 8))(piVar9), iVar8 != 0)) {
          (**(code **)(*piVar9 + 4))(piVar9);
        }
      }
      else {
        piVar5 = (int *)FUN_4a0c80a0(piVar11);
      }
      if (local_30 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = local_30[2];
      }
      *(int **)(iVar8 + iVar4 * 4) = piVar5;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar10);
  }
  local_3c[0] = local_28;
  iVar4 = FUN_4a0bcc84(local_3c);
  if (iVar4 != 0) {
    iVar8 = 0;
    if (0 < local_34) {
      do {
        iVar8 = iVar8 + 1;
      } while (iVar8 < local_34);
      if (iVar4 == 0) goto LAB_4a0865e0;
    }
    FUN_4a14f21c();
  }
LAB_4a0865e0:
  FUN_4a0c6bf4(local_3c);
  return;
}



// Address: 4a086608

uint FUN_4a086608(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x74) + 8);
  }
  iVar1 = iVar1 + param_2 * 0x14;
  iVar5 = *(int *)(iVar1 + 8);
  iVar2 = 0;
  if (0 < iVar5) {
    iVar1 = *(int *)(iVar1 + 0xc);
    do {
      if (iVar1 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar1 + 8);
      }
      piVar4 = *(int **)(iVar3 + iVar2 * 4);
      if (piVar4[1] != 400) {
        (**(code **)(*piVar4 + 0x28))(piVar4);
        (**(code **)(*piVar4 + 0x30))(piVar4,0);
        (**(code **)(*piVar4 + 0x3c))(piVar4);
        return param_2 | iVar2 << 0x10;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar5);
  }
  return 0xffffffff;
}



// Address: 4a0866c0

void FUN_4a0866c0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if ((int)param_2 < 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x74);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
  }
  iVar3 = 0;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  iVar2 = *(int *)(iVar2 + (param_2 & 0xffff) * 0x14 + 0xc);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 8);
  }
  piVar4 = *(int **)(iVar3 + (param_2 >> 0x10) * 4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x40))(piVar4);
                    /* WARNING: Could not recover jumptable at 0x4a08673c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar4 + 0x38))(piVar4,*(code **)(*piVar4 + 0x38),0);
    return;
  }
  return;
}



// Address: 4a086740

undefined4 * FUN_4a086740(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  
  *param_1 = PTR_PTR_4a086878;
  puVar3 = (undefined4 *)FUN_4a0c6bc0(param_1 + 1);
  puVar1 = PTR_PTR_4a08687c;
  puVar3[2] = 0;
  *puVar3 = puVar1;
  puVar3[3] = 0;
  puVar3 = (undefined4 *)FUN_4a0c6bc0(puVar3 + 5);
  puVar2 = PTR_PTR_4a086880;
  puVar3[2] = 0;
  *puVar3 = puVar2;
  puVar3[3] = 0;
  puVar3 = (undefined4 *)FUN_4a0c6bc0(puVar3 + 5);
  puVar3[2] = 0;
  *puVar3 = puVar1;
  puVar3[3] = 0;
  puVar3 = (undefined4 *)FUN_4a0c6bc0(puVar3 + 5);
  puVar3[2] = 0;
  *puVar3 = puVar1;
  puVar3[3] = 0;
  puVar3 = (undefined4 *)FUN_4a0c6bc0(puVar3 + 5);
  puVar3[2] = 0;
  *puVar3 = puVar1;
  puVar3[3] = 0;
  puVar3 = (undefined4 *)FUN_4a0c6bc0(puVar3 + 5);
  puVar1 = PTR_PTR_4a086884;
  puVar3[2] = 0;
  *puVar3 = puVar1;
  puVar3[3] = 0;
  puVar3 = (undefined4 *)FUN_4a0c6bc0(puVar3 + 5);
  puVar1 = PTR_PTR_4a086888;
  puVar3[2] = 0;
  *puVar3 = puVar1;
  puVar3[3] = 0;
  puVar3 = (undefined4 *)FUN_4a0c6bc0(puVar3 + 5);
  puVar1 = PTR_PTR_4a08688c;
  puVar3[2] = 0;
  *puVar3 = puVar1;
  puVar3[3] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  uVar4 = thunk_FUN_4a161570(0x14);
  piVar5 = (int *)FUN_4a0c707c(uVar4,s_VolumeControl_4a086890);
  puVar3[5] = piVar5;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))();
  }
  uVar4 = thunk_FUN_4a161570(0x14);
  piVar5 = (int *)FUN_4a0c707c(uVar4,s_PositionControl_4a0868a0);
  puVar3[6] = piVar5;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))();
  }
  uVar4 = thunk_FUN_4a161570(0x14);
  piVar5 = (int *)FUN_4a0c707c(uVar4,s_PitchControl_4a0868b0);
  puVar3[7] = piVar5;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))();
  }
  return puVar3 + -0x24;
}



// Address: 4a0868d8

int FUN_4a0868d8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar2 = 0;
  *param_1 = PTR_PTR_4a086b58;
  iVar4 = param_1[8];
  if (0 < iVar4) {
    do {
      FUN_4a085310(param_1,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar4);
  }
  piVar3 = (int *)param_1[0x29];
  if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 8))(piVar3), iVar2 != 0)) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  piVar3 = (int *)param_1[0x2a];
  if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 8))(piVar3), iVar2 != 0)) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  piVar3 = (int *)param_1[0x2b];
  if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 8))(piVar3), iVar2 != 0)) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  param_1[0x24] = PTR_PTR_4a086b5c;
  iVar4 = param_1[0x26];
  iVar2 = FUN_4a0bcc84(param_1 + 0x24);
  if (iVar2 != 0) {
    iVar1 = 0;
    if (0 < iVar4) {
      do {
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar4);
      if (iVar2 == 0) goto LAB_4a086a08;
    }
    FUN_4a14f21c();
  }
LAB_4a086a08:
  iVar2 = FUN_4a0c6bf4(param_1 + 0x24);
  puVar5 = (undefined4 *)(iVar2 + -0x14);
  *puVar5 = PTR_PTR_4a086b60;
  iVar4 = *(int *)(iVar2 + -0xc);
  iVar2 = FUN_4a0bcc84(puVar5);
  if (iVar2 != 0) {
    iVar1 = 0;
    if (0 < iVar4) {
      do {
        (*(code *)**(undefined4 **)(iVar2 + iVar1 * 0x14))();
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar4);
      if (iVar2 == 0) goto LAB_4a086a70;
    }
    FUN_4a14f21c(iVar2);
  }
LAB_4a086a70:
  iVar2 = FUN_4a0c6bf4(puVar5);
  puVar5 = (undefined4 *)(iVar2 + -0x14);
  *puVar5 = PTR_PTR_4a086b64;
  iVar4 = *(int *)(iVar2 + -0xc);
  iVar2 = FUN_4a0bcc84(puVar5);
  if (iVar2 != 0) {
    iVar1 = 0;
    if (0 < iVar4) {
      do {
        (*(code *)**(undefined4 **)(iVar2 + iVar1 * 0x14))();
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar4);
      if (iVar2 == 0) goto LAB_4a086ad8;
    }
    FUN_4a14f21c(iVar2);
  }
LAB_4a086ad8:
  iVar2 = FUN_4a0c6bf4(puVar5);
  iVar2 = FUN_4a16bc4c(iVar2 + -0x14);
  iVar2 = FUN_4a16bc4c(iVar2 + -0x14);
  iVar2 = FUN_4a16bc4c(iVar2 + -0x14);
  puVar5 = (undefined4 *)(iVar2 + -0x14);
  *puVar5 = PTR_PTR_4a086b68;
  iVar4 = *(int *)(iVar2 + -0xc);
  iVar2 = FUN_4a0bcc84(puVar5);
  if (iVar2 != 0) {
    iVar1 = 0;
    if (0 < iVar4) {
      do {
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar4);
      if (iVar2 == 0) goto LAB_4a086b3c;
    }
    FUN_4a14f21c();
  }
LAB_4a086b3c:
  iVar2 = FUN_4a0c6bf4(puVar5);
  iVar2 = FUN_4a16bc4c(iVar2 + -0x14);
  return iVar2 + -4;
}



// Address: 4a086b6c

void FUN_4a086b6c(int *param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,int param_7,int param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  iVar2 = FUN_4a0ff494();
  uVar3 = *(undefined4 *)(iVar2 + 0x51c);
  if (param_2 == 0) {
    uVar3 = FUN_4a140fb8(uVar3,param_6);
    FUN_4a06b074(iVar2 + 0x278,param_1,uVar3,3,param_3,param_4,0x12);
    return;
  }
  uVar14 = 0xd0;
  uVar15 = 0xd1;
  uVar16 = 0xd2;
  uVar4 = FUN_4a13fe14(uVar3,param_6);
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_4a13fe14(uVar3,param_6);
    if ((uVar4 & 2) != 0) {
      uVar14 = 0xd6;
      uVar15 = 0xd7;
      uVar16 = 0xd8;
    }
  }
  else {
    uVar14 = 0xd3;
    uVar15 = 0xd4;
    uVar16 = 0xd5;
  }
  uVar3 = FUN_4a171fac(param_5 + -0x19);
  if (param_8 == 0) {
    uVar5 = 0x3f400000;
    uVar1 = 0x3f800000;
  }
  else {
    uVar5 = 0x3f800000;
    uVar1 = DAT_4a086e64;
  }
  uVar6 = FUN_4a171fac(param_5);
  uVar7 = FUN_4a171fac(param_4);
  uVar8 = FUN_4a171fac(param_3);
  FUN_4a0a02bc(param_2,0xd9,0xda,0xdb,uVar8,uVar7,uVar6,0x3f800000,uVar1,0,0);
  if (param_7 == 0x10000) {
    FUN_4a0a02bc(param_2,uVar14,uVar15,uVar16,uVar8,uVar7,uVar6,0x3f800000,uVar1,0,0);
  }
  else {
    FUN_4a09f3a4(param_2,param_1);
    uVar9 = (**(code **)(*param_1 + 0x74))(param_1);
    uVar10 = (**(code **)(*param_1 + 0x78))(param_1);
    uVar11 = (**(code **)(*param_1 + 0x70))(param_1);
    uVar12 = (**(code **)(*param_1 + 0x6c))(param_1);
    uVar13 = FUN_4a0d4b28(param_5,param_7);
    (**(code **)(*param_1 + 0x9c))(param_1,param_3 - (param_5 >> 1),uVar10,uVar13,uVar12);
    FUN_4a0a02bc(param_2,uVar14,uVar15,uVar16,uVar8,uVar7,uVar6,0x3f800000,uVar1,0,0);
    FUN_4a09f3a4(param_2,param_1);
    (**(code **)(*param_1 + 0x9c))(param_1,uVar9,uVar10,uVar11,uVar12);
  }
  FUN_4a0a02bc(param_2,0xdc,0xdd,0xde,uVar8,uVar7,uVar3,0x3f800000,uVar5,0,0);
  return;
}



// Address: 4a086e68

void FUN_4a086e68(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 uVar5;
  undefined4 unaff_r4;
  
  iVar2 = FUN_4a08c570(param_1,*(undefined4 *)(param_1 + 0x5c));
  iVar1 = -iVar2;
  *(int *)(param_1 + 0x8c) = iVar1;
  FUN_4a0ff494();
  iVar3 = *(int *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  iVar4 = iVar3;
  uVar5 = extraout_r1;
  if (iVar3 != -1) {
    uVar5 = 1;
    iVar4 = param_1;
  }
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  if (iVar3 != -1) {
    iVar4 = FUN_4a08c564(iVar4,uVar5,param_3,param_4,unaff_r4);
  }
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  if (iVar2 != 0 && -1 < iVar1) {
    iVar4 = iVar1 + -1;
  }
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  if (iVar2 != 0 && -1 < iVar1) {
    *(int *)(param_1 + 0x90) = iVar4;
  }
  if (iVar1 < 6) {
    *(int *)(param_1 + 0x94) = iVar1 + 1;
  }
  switch(iVar1 + 1) {
  case 0:
    *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
    return;
  case 1:
    *(undefined4 *)(param_1 + 0xa4) = 0;
    uVar5 = 0x871;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0xa4) = 1;
    uVar5 = 0x870;
    break;
  case 3:
    *(undefined4 *)(param_1 + 0xa4) = 2;
    uVar5 = 0x872;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0xa4) = 3;
    uVar5 = 0x873;
    break;
  case 5:
    *(undefined4 *)(param_1 + 0xa4) = 4;
    uVar5 = 0x874;
    break;
  case 6:
    *(undefined4 *)(param_1 + 0xa4) = 5;
    uVar5 = 0x875;
    break;
  case 7:
    *(undefined4 *)(param_1 + 0xa4) = 6;
    *(undefined4 *)(param_1 + 0xa0) = 0x877;
    return;
  default:
    return;
  }
  *(undefined4 *)(param_1 + 0xa0) = uVar5;
  return;
}



// Address: 4a086f34

/* WARNING: Removing unreachable block (ram,0x4a0faea0) */
/* WARNING: Removing unreachable block (ram,0x4a0fae9c) */
/* WARNING: Removing unreachable block (ram,0x4a08cadc) */
/* WARNING: Removing unreachable block (ram,0x4a08cad4) */
/* WARNING: Removing unreachable block (ram,0x4a08cad8) */
/* WARNING: Removing unreachable block (ram,0x4a08cae0) */
/* WARNING: Removing unreachable block (ram,0x4a08cae8) */
/* WARNING: Removing unreachable block (ram,0x4a08caec) */
/* WARNING: Removing unreachable block (ram,0x4a08caf0) */
/* WARNING: Removing unreachable block (ram,0x4a08caf4) */
/* WARNING: Removing unreachable block (ram,0x4a08cb2c) */
/* WARNING: Removing unreachable block (ram,0x4a0faebc) */
/* WARNING: Removing unreachable block (ram,0x4a0faf08) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a086f34(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 extraout_r1;
  int extraout_r1_00;
  int iVar6;
  int unaff_r6;
  int iVar7;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_2c [20];
  
  iVar1 = FUN_4a0ff494();
  iVar1 = *(int *)(iVar1 + 0x51c);
  if (*(int *)(param_1 + 0x88) != 0) {
    return;
  }
  FUN_4a08c244(param_1,param_2,param_3);
  iVar2 = *(int *)(param_1 + 0x8c);
  iVar6 = 0;
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x98) == -1) {
      iVar2 = FUN_4a0cb850(param_2,param_3,0x80000000);
      if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a08702c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      iVar2 = iVar6;
      if (*(int *)(param_3 + 0xc) != 0) {
        iVar2 = *(int *)(*(int *)(param_3 + 0xc) + 8);
      }
      iVar1 = FUN_4a141128(iVar1,*(undefined4 *)(iVar2 + 8));
      iVar2 = FUN_4a0ff494();
      iVar2 = *(int *)(iVar2 + 0x51c);
      *(undefined4 *)(param_1 + 0x98) = 10;
      *(int *)(param_1 + 0x9c) = iVar1;
      iVar2 = *(int *)(iVar2 + 0x420);
      if (iVar2 != 0) {
        iVar6 = *(int *)(iVar2 + 8);
      }
      *(int *)(param_1 + 0xa0) = (int)*(short *)(iVar6 + iVar1 * 2);
      goto code_r0x4a08c564;
    }
    iVar1 = FUN_4a0cb850(param_2,param_3,0x100000);
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0870a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  else {
    if (iVar2 == 3) {
      iVar2 = FUN_4a0cb850(param_2,param_3,0x4000);
      if (iVar2 == 0) {
        return;
      }
      uVar3 = FUN_4a16b5a0(auStack_2c,iVar1 + 0x7e0);
      iVar6 = FUN_4a16fe9c(0xffffffff,uVar3,0);
      FUN_4a16b6c0(auStack_2c);
      iVar2 = extraout_r1_00;
      if (iVar6 != -1) {
        unaff_r6 = iVar1 + 0x700;
        iVar2 = (int)*(char *)(iVar1 + 0x7d9);
      }
      iVar7 = 0;
      if (iVar6 != -1 && iVar2 != -1) {
        FUN_4a0fd4f0(*(undefined4 *)(iVar1 + 0x18));
        if (*(int *)(iVar1 + 0x7ec) != 0) {
          iVar7 = *(int *)(*(int *)(iVar1 + 0x7ec) + 8);
        }
        *(undefined1 *)(iVar7 + iVar6) = *(undefined1 *)(unaff_r6 + 0xd9);
        *(undefined1 *)(iVar1 + 0x7d9) = 0xff;
        *(undefined4 *)(iVar1 + 0x7dc) = 0;
        iVar1 = FUN_4a0fba7c(*(undefined4 *)(iVar1 + 0x18));
        iVar2 = 0;
        if (*(int *)(iVar1 + 0x708) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(*(int *)(iVar1 + 0x708) + 8);
        }
        FUN_4a0faf80(*(undefined4 *)(iVar7 + 0x10),0);
        if (*(int *)(iVar1 + 0x708) != 0) {
          iVar2 = *(int *)(*(int *)(iVar1 + 0x708) + 8);
        }
        puVar5 = *(undefined4 **)(iVar2 + iVar6 * 4);
        *puVar5 = 3;
        puVar5[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x4a0faeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR_caseD_3_4a0faecc)();
        return;
      }
      return;
    }
    if (iVar2 != 6) {
                    /* WARNING: Could not recover jumptable at 0x4a086f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    if (*(int *)(param_1 + 0x98) == -1) {
      iVar2 = FUN_4a0cb850(param_2,param_3,0x80000000);
      if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a086fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      if (*(int *)(param_3 + 0xc) != 0) {
        iVar6 = *(int *)(*(int *)(param_3 + 0xc) + 8);
      }
      uVar3 = FUN_4a1407b8(iVar1,*(undefined4 *)(iVar6 + 8));
      iVar1 = FUN_4a0ff494();
      uVar4 = *(undefined4 *)(iVar1 + 0x520);
      *(undefined4 *)(param_1 + 0x98) = 0xb;
      *(undefined4 *)(param_1 + 0x9c) = uVar3;
      iVar1 = FUN_4a143130(uVar4,uVar3);
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar1 + 8);
code_r0x4a08c564:
      *(undefined1 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      iVar1 = FUN_4a134aa8(param_1);
      if (*(int *)(iVar1 + 0x40) == param_1) {
        *(undefined4 *)(iVar1 + 0x40) = 0;
      }
      return;
    }
    iVar1 = FUN_4a0cb850(param_2,param_3,0x100000);
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0870ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  iVar6 = *(int *)(param_1 + 0x8c);
  *(int *)(param_1 + 0x8c) = iVar6;
  FUN_4a0ff494();
  iVar2 = *(int *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  iVar1 = iVar2;
  uVar3 = extraout_r1;
  if (iVar2 != -1) {
    uVar3 = 1;
    iVar1 = param_1;
  }
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  if (iVar2 != -1) {
    iVar1 = FUN_4a08c564(iVar1,uVar3);
  }
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  if (0 < iVar6) {
    iVar1 = iVar6 + -1;
  }
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  if (0 < iVar6) {
    *(int *)(param_1 + 0x90) = iVar1;
  }
  if (iVar6 < 6) {
    *(int *)(param_1 + 0x94) = iVar6 + 1;
  }
  switch(iVar6 + 1) {
  case 0:
    *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
    return;
  case 1:
    *(undefined4 *)(param_1 + 0xa4) = 0;
    uVar3 = 0x871;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0xa4) = 1;
    uVar3 = 0x870;
    break;
  case 3:
    *(undefined4 *)(param_1 + 0xa4) = 2;
    uVar3 = 0x872;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0xa4) = 3;
    uVar3 = 0x873;
    break;
  case 5:
    *(undefined4 *)(param_1 + 0xa4) = 4;
    uVar3 = 0x874;
    break;
  case 6:
    *(undefined4 *)(param_1 + 0xa4) = 5;
    uVar3 = 0x875;
    break;
  case 7:
    *(undefined4 *)(param_1 + 0xa4) = 6;
    *(undefined4 *)(param_1 + 0xa0) = 0x877;
    return;
  default:
    return;
  }
  *(undefined4 *)(param_1 + 0xa0) = uVar3;
  return;
}



// Address: 4a087100

void FUN_4a087100(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
  short sVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined4 uVar27;
  int iVar28;
  
  iVar4 = FUN_4a0ff494();
  iVar22 = iVar4 + 0x278;
  iVar23 = *(int *)(iVar4 + 0x51c);
  uVar27 = *(undefined4 *)(iVar4 + 0x520);
  iVar4 = iVar4 + 0x128;
  iVar5 = FUN_4a13fa14(iVar23,0);
  iVar6 = param_3 + (param_5 >> 1);
  uVar7 = FUN_4a171fac();
  if (iVar5 != -1) {
    uVar8 = FUN_4a14039c(iVar23,0);
    uVar9 = FUN_4a14076c(iVar23,iVar5,uVar8);
    uVar10 = FUN_4a140c1c(iVar23,iVar5,uVar8);
    uVar11 = FUN_4a13fad8(iVar23,iVar5);
    uVar12 = FUN_4a140710(iVar23,iVar5);
    uVar13 = FUN_4a1414dc(iVar23,iVar5,uVar8);
    uVar14 = FUN_4a1407a0(iVar23,iVar5);
    iVar15 = FUN_4a143ac8(uVar27,uVar14);
    uVar27 = *(undefined4 *)(iVar15 + 0xc);
    iVar16 = FUN_4a13fac4(iVar23,iVar5);
    iVar15 = 0;
    if (*(int *)(iVar23 + 0x420) != 0) {
      iVar15 = *(int *)(*(int *)(iVar23 + 0x420) + 8);
    }
    sVar1 = *(short *)(iVar15 + iVar16 * 2);
    uVar14 = FUN_4a09f974(iVar4,0xbc);
    uVar17 = FUN_4a09f9c8(iVar4,0x7f);
    uVar18 = FUN_4a171fac(param_4 + param_6 + -0x19);
    FUN_4a171a94(uVar18,uVar17);
    uVar17 = FUN_4a171e1c();
    uVar18 = FUN_4a09f974(iVar4,0x7f);
    uVar14 = FUN_4a171bb8(uVar14,uVar18);
    iVar16 = (param_5 >> 1) + -10;
    iVar6 = iVar6 + 5;
    iVar24 = param_3 + (iVar16 >> 1);
    iVar15 = iVar6 + iVar16;
    param_6 = param_6 + -0x50;
    iVar28 = param_4 + 0x37;
    uVar18 = FUN_4a171fac(param_6);
    uVar19 = FUN_4a171fac(iVar16);
    uVar20 = FUN_4a171fac(iVar28);
    uVar21 = FUN_4a171fac(param_3);
    FUN_4a09ff60(iVar4,0xe9,0xea,0xeb,0xec,0xed,0xee,0xef,0xf0,0xf1,uVar21,uVar20,uVar19,uVar18,
                 0x3f800000);
    FUN_4a09f664(iVar4,0xbc,uVar7,uVar20,0x3f800000,0x3f800000,0x3f800000,0);
    uVar18 = FUN_4a171fac(param_4 + 0x1b);
    uVar19 = FUN_4a171fac(param_3 + 0xfb);
    FUN_4a09f664(iVar4,uVar11,uVar19,uVar18,0x3f800000,0x3f800000,0x3f800000,0);
    uVar11 = FUN_4a171fac(uVar17);
    FUN_4a09f664(iVar4,0x7f,uVar7,uVar11,0x3f800000,uVar14,0xbf800000,0);
    FUN_4a09f3a4(iVar4,param_2);
    FUN_4a06b074(iVar22,param_2,uVar13,3,param_3 + param_3 + 0xfb >> 1,param_4 + 0x1b,0x12);
    iVar4 = FUN_4a06be4c(iVar22,3);
    iVar16 = iVar28 + (param_6 - (iVar4 * 4 + 4) >> 1);
    FUN_4a06b074(iVar22,param_2,0xabc,3,iVar24,iVar16,0x12);
    iVar16 = iVar16 + iVar4;
    uVar7 = FUN_4a06c410(iVar22);
    puVar3 = PTR_DAT_4a0877e4;
    puVar2 = PTR_DAT_4a0877e0;
    iVar26 = 0;
    iVar25 = 0;
    do {
      if ((*(uint *)(puVar2 + iVar25 * 4) & uVar9) != 0) {
        if (0 < iVar26) {
          FUN_4a06cbe8(iVar22,0x803);
        }
        FUN_4a06cbe8(iVar22,*(undefined4 *)(puVar3 + iVar25 * 4));
        iVar26 = iVar26 + 1;
      }
      iVar25 = iVar25 + 1;
    } while (iVar25 < 7);
    FUN_4a06afd0(iVar22,param_2,uVar7,3,iVar24,iVar16,0x12);
    iVar16 = iVar16 + iVar4 + 4;
    FUN_4a06b074(iVar22,param_2,0xac5,3,iVar24,iVar16,0x12);
    uVar7 = FUN_4a06c410(iVar22);
    uVar11 = FUN_4a141510(iVar23,iVar5,uVar8);
    FUN_4a06cfb0(iVar22,uVar11);
    FUN_4a06cbe8(iVar22,0xac6);
    uVar8 = FUN_4a141090(iVar23,iVar5,uVar8);
    FUN_4a06cfb0(iVar22,uVar8);
    FUN_4a06afd0(iVar22,param_2,uVar7,3,iVar24,iVar16 + iVar4,0x12);
    iVar28 = iVar28 + (param_6 - (iVar4 * 4 + 0xc) >> 1);
    FUN_4a06b074(iVar22,param_2,0xab6,3,iVar6,iVar28,0x11);
    FUN_4a06b074(iVar22,param_2,uVar12,3,iVar15,iVar28,0x14);
    iVar5 = iVar28 + iVar4 + 4;
    FUN_4a06b074(iVar22,param_2,0xab8,3,iVar6,iVar5,0x11);
    uVar7 = FUN_4a06c410(iVar22);
    FUN_4a06c86c(iVar22,uVar10);
    FUN_4a06afd0(iVar22,param_2,uVar7,3,iVar15,iVar5,0x14);
    iVar5 = iVar5 + iVar4 + 4;
    FUN_4a06b074(iVar22,param_2,0xaba,3,iVar6,iVar5,0x11);
    FUN_4a06b074(iVar22,param_2,uVar27,3,iVar15,iVar5,0x14);
    iVar4 = iVar5 + iVar4 + 4;
    FUN_4a06b074(iVar22,param_2,0xabb,3,iVar6,iVar4,0x11);
    FUN_4a06b074(iVar22,param_2,(int)sVar1,3,iVar15,iVar4,0x14);
    return;
  }
  uVar27 = FUN_4a09f974(iVar4,0x7e);
  uVar27 = FUN_4a171bb8(0x43480000,uVar27);
  uVar8 = FUN_4a171fac(param_4 + 0x44);
  FUN_4a09f664(iVar4,0x7e,uVar7,uVar8,0x3f800000,uVar27,0x3f800000,0);
  FUN_4a09f3a4(iVar4,param_2);
  FUN_4a06b074(iVar22,param_2,0xacc,3,iVar6,param_4 + 0x22,0x12);
  FUN_4a06cd2c(iVar22,param_2,0,0xacd,3,200,iVar6,param_4 + (param_6 + -0x44 >> 1) + 0x44,0x12);
  return;
}



// Address: 4a0877e8

void FUN_4a0877e8(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  
  iVar1 = FUN_4a0ff494();
  iVar12 = iVar1 + 0x278;
  iVar13 = iVar1 + 0x128;
  uVar2 = *(undefined4 *)(iVar1 + 0x51c);
  iVar3 = FUN_4a141a98();
  iVar4 = param_3 + 0x4e;
  iVar5 = ((param_3 + param_5) - iVar4) + -0x32;
  iVar17 = param_3 + (param_5 >> 1);
  iVar14 = param_4 + 0x15;
  uVar6 = FUN_4a171fac(iVar17);
  uVar7 = FUN_4a09f974(iVar13,0x7f);
  uVar8 = FUN_4a171fac(iVar5);
  uVar7 = FUN_4a171bb8(uVar8,uVar7);
  uVar9 = FUN_4a09f974(iVar13,0x7e);
  uVar8 = FUN_4a171bb8(uVar8,uVar9);
  iVar1 = param_4 + param_6 + iVar14 + 0x70 >> 1;
  uVar9 = FUN_4a171fac(iVar14);
  FUN_4a09f664(iVar13,0x7f,uVar6,uVar9,0x3f800000,uVar7,0x3f800000,0);
  uVar7 = DAT_4a087bf4;
  iVar16 = 0;
  uVar9 = FUN_4a171fac(param_3 + 0x32);
  iVar15 = iVar14;
  do {
    uVar10 = FUN_4a171fac(iVar15 + 0xe);
    FUN_4a09f664(iVar13,0x87,uVar9,uVar10,0x3f800000,uVar7,uVar7,0);
    iVar11 = FUN_4a13f8e4(uVar2,iVar16);
    if (iVar11 != -1) {
      FUN_4a09f664(iVar13,0x28,uVar9,uVar10,0x3f800000,0x3f800000,0x3f800000,0);
    }
    iVar15 = iVar15 + 0x1c;
    uVar10 = FUN_4a171fac(iVar15);
    FUN_4a09f664(iVar13,0x7e,uVar6,uVar10,0x3f800000,uVar8,0x3f800000,0);
    iVar16 = iVar16 + 1;
  } while (iVar16 < 4);
  uVar7 = FUN_4a171fac(param_5 + -0x14);
  uVar6 = FUN_4a171fac(iVar1);
  uVar9 = FUN_4a171fac(iVar17);
  FUN_4a0a02bc(iVar13,0xbd,0xbe,0xbf,uVar9,uVar6,uVar7,0x3f800000,0x3f800000,0,0);
  uVar7 = FUN_4a171fac(iVar1 + -8);
  uVar6 = FUN_4a171fac(iVar17 + 0x19);
  FUN_4a09f664(iVar13,0x7e,uVar6,uVar7,0x3f800000,uVar8,0x3f800000,0);
  if (iVar3 != -1) {
    uVar7 = FUN_4a134aa8(param_1);
    uVar7 = FUN_4a0cb6c4(uVar7,0x4000);
    FUN_4a0fa6e8(uVar7,iVar13,iVar17 + -0x7d,iVar1,1);
  }
  FUN_4a09f3a4(iVar13,param_2);
  FUN_4a06b074(iVar12,param_2,0xa45,3,iVar17,param_4 + 8,0x12);
  iVar13 = 0;
  iVar15 = 0;
  do {
    iVar16 = FUN_4a13f8e4(uVar2,iVar15);
    uVar7 = 0xa4b;
    if (iVar16 != -1) {
      uVar7 = FUN_4a1404ac(uVar2,iVar16);
    }
    FUN_4a06cd2c(iVar12,param_2,iVar13,uVar7,3,iVar5,iVar4,iVar14 + 0xe,0x11);
    iVar15 = iVar15 + 1;
    iVar13 = iVar13 + 1;
    iVar14 = iVar14 + 0x1c;
  } while (iVar15 < 4);
  FUN_4a06b074(iVar12,param_2,0xa46,3,iVar4,iVar1 + -0x10,0x11);
  uVar7 = 0xa4c;
  if (iVar3 != -1) {
    uVar7 = FUN_4a1404ac(uVar2,iVar3);
  }
  FUN_4a06cd2c(iVar12,param_2,iVar13,uVar7,3,iVar5,iVar4,iVar1 + -5,9);
  return;
}



// Address: 4a087bf8

void FUN_4a087bf8(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  int iVar24;
  undefined4 local_8c;
  undefined4 local_88;
  
  iVar1 = FUN_4a0ff494();
  iVar16 = iVar1 + 0x278;
  iVar17 = iVar1 + 0x128;
  uVar2 = *(undefined4 *)(iVar1 + 0x51c);
  iVar1 = FUN_4a13fb98();
  if (*(int *)(param_1 + 0xb0) == 0) {
    iVar19 = 0;
    iVar18 = 0;
    if (0 < iVar1) {
      do {
        uVar3 = FUN_4a140844(uVar2,iVar18);
        iVar4 = FUN_4a06bf88(iVar16,uVar3,3);
        if (iVar19 < iVar4) {
          iVar19 = iVar4;
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < iVar1);
    }
    *(int *)(param_1 + 0xb0) = iVar19;
  }
  iVar19 = FUN_4a0015f0(param_6 + -0x2a,iVar1);
  uVar3 = FUN_4a171fac(param_4 + 5);
  uVar5 = FUN_4a171fac(iVar19);
  iVar18 = param_3 + 10 + *(int *)(param_1 + 0xb0);
  iVar20 = iVar18 + 0xc;
  iVar24 = ((param_3 + param_5) - iVar20) + -0x28;
  iVar19 = iVar19 >> 1;
  iVar4 = 0;
  if (0 < iVar1) {
    uVar6 = FUN_4a171fac(iVar20 + iVar24 + 0x14);
    uVar7 = FUN_4a171fac(iVar19);
    uVar8 = FUN_4a171fac(iVar20);
    uVar9 = FUN_4a171fac(iVar20 + (iVar24 >> 1));
    uVar10 = FUN_4a171fac(iVar24);
    uVar11 = FUN_4a171fac(iVar19);
    local_88 = uVar3;
    do {
      iVar20 = FUN_4a13fba0(uVar2,iVar4);
      FUN_4a0d4b0c(iVar20,0x640000);
      uVar12 = FUN_4a171fac();
      uVar12 = FUN_4a17295c(uVar12,0xfffffff0);
      uVar13 = FUN_4a171a94(uVar11,local_88);
      FUN_4a0a02bc(iVar17,0x2e,0x2f,0x30,uVar9,uVar13,uVar10,0x3f800000,0x3f800000,0,0);
      uVar21 = 0x31;
      uVar22 = 0x32;
      uVar23 = 0x33;
      local_8c = FUN_4a140384(uVar2,iVar4);
      if (iVar20 < 0x230000) {
        uVar21 = 0x34;
        uVar22 = 0x35;
        uVar23 = 0x36;
        local_8c = FUN_4a13fde4(uVar2,iVar4);
      }
      else if (iVar20 < 0x410000) {
        local_8c = FUN_4a13fdfc(uVar2,iVar4);
      }
      uVar14 = FUN_4a09f974(iVar17,uVar23);
      uVar15 = FUN_4a09f974(iVar17,uVar21);
      uVar14 = FUN_4a171a94(uVar15,uVar14);
      FUN_4a1725c0(uVar14,0x41000000);
      iVar20 = FUN_4a171e1c();
      uVar14 = FUN_4a171fac(iVar24 - iVar20);
      uVar12 = FUN_4a17211c(uVar14,uVar12);
      uVar14 = FUN_4a171fac(iVar20);
      uVar12 = FUN_4a171a94(uVar14,uVar12);
      uVar14 = FUN_4a17295c(uVar12,0xffffffff);
      uVar14 = FUN_4a171a94(uVar8,uVar14);
      FUN_4a0a02bc(iVar17,uVar21,uVar22,uVar23,uVar14,uVar13,uVar12,0x3f800000,0x3f800000,0,0);
      uVar12 = FUN_4a171a94(uVar7,local_88);
      FUN_4a09f664(iVar17,local_8c,uVar6,uVar12,0x3f800000,0x3f800000,0x3f800000,0);
      local_88 = FUN_4a171a94(local_88,uVar5);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  uVar6 = FUN_4a171fac(param_5 + -0x14);
  uVar7 = FUN_4a171fac(param_4 + param_6 + -0x20);
  uVar8 = FUN_4a171fac(param_3 + 10);
  FUN_4a09ff60(iVar17,0xe9,0xea,0xeb,0xec,0xed,0xee,0xef,0xf0,0xf1,uVar8,uVar7,uVar6,0x42000000,
               0x3f800000);
  FUN_4a09f3a4(iVar17,param_2);
  iVar17 = FUN_4a171e1c(uVar3);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      uVar3 = FUN_4a140844(uVar2,iVar4);
      FUN_4a06b074(iVar16,param_2,uVar3,3,iVar18,iVar17 + iVar19,0x14);
      uVar3 = FUN_4a171fac(iVar17);
      FUN_4a171a94(uVar3,uVar5);
      iVar17 = FUN_4a171e1c();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  uVar3 = FUN_4a06c410(iVar16);
  FUN_4a06cbe8(iVar16,0xa30);
  uVar2 = FUN_4a14082c(uVar2);
  FUN_4a06cbe8(iVar16,uVar2);
  FUN_4a06afd0(iVar16,param_2,uVar3,3,param_3 + 10 + (param_5 + -0x14 >> 1),
               param_4 + param_6 + -0x10,0x12);
  return;
}



// Address: 4a088078

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a088078(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar1 = FUN_4a0ff494();
  iVar2 = iVar1 + 0x278;
  iVar3 = iVar1 + 0x128;
  uVar4 = *(undefined4 *)(iVar1 + 0x51c);
  uVar5 = FUN_4a13f8d8();
  uVar5 = FUN_4a140d9c(uVar4,uVar5);
  iVar6 = FUN_4a1410c4(uVar4);
  iVar11 = param_3 + (param_5 >> 1);
  FUN_4a06be4c(iVar2,3);
  uVar7 = FUN_4a171fac();
  FUN_4a17211c(uVar7,DAT_4a08851c);
  FUN_4a171e1c();
  iVar13 = param_4 + 0x83;
  uVar7 = FUN_4a09f974(iVar3,0x7e);
  uVar8 = FUN_4a171fac(param_5);
  uVar8 = FUN_4a17211c(uVar8,DAT_4a088520);
  FUN_4a171bb8(uVar8,uVar7);
  uVar7 = FUN_4a171fac(param_4 + 0x19);
  uVar8 = FUN_4a171fac(iVar11 - (param_5 >> 2));
  FUN_4a09f664(iVar3,0xb5,uVar8,uVar7);
  FUN_4a171fac(param_5 >> 1);
  FUN_4a171fac(param_4);
  FUN_4a171fac(iVar11);
  FUN_4a09ff60(iVar3,0xe9,0xea,0xeb);
  iVar12 = 0;
  if (0 < iVar6) {
    uVar7 = FUN_4a171fac(iVar11);
    uVar8 = FUN_4a171fac(param_3 + 0x2c);
    do {
      iVar11 = FUN_4a141444(uVar4,iVar12);
      uVar9 = FUN_4a171fac(iVar13);
      FUN_4a09f664(iVar3,0x87,uVar8,uVar9);
      if (iVar11 != 0) {
        FUN_4a09f664(iVar3,0x86,uVar8,uVar9);
      }
      uVar9 = FUN_4a171fac(iVar13 + -8);
      FUN_4a09f664(iVar3,0x7e,uVar7,uVar9);
      iVar12 = iVar12 + 1;
      iVar13 = iVar13 + 0x10;
    } while (iVar12 < iVar6);
  }
  FUN_4a09f3a4(iVar3,param_2);
  piVar10 = (int *)FUN_4a145948(iVar1);
  if (piVar10 != (int *)0x0) {
    (**(code **)(*piVar10 + 0xc))();
  }
  FUN_4a06b02c(iVar2,param_2,piVar10,6);
  FUN_4a06b074(iVar2,param_2,0xab0,3);
  FUN_4a06b074(iVar2,param_2,uVar5,3);
  if ((piVar10 != (int *)0x0) && (iVar1 = (**(code **)(*piVar10 + 8))(piVar10), iVar1 != 0)) {
    (**(code **)(*piVar10 + 4))(piVar10);
  }
  iVar1 = FUN_4a1404dc(uVar4);
  FUN_4a06b074(iVar2,param_2,0xaae,3);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      uVar5 = FUN_4a13f97c(uVar4,0,iVar3);
      uVar5 = FUN_4a1406a0(uVar4,uVar5);
      FUN_4a06b074(iVar2,param_2,uVar5,3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  FUN_4a06b074(iVar2,param_2,0xab1,3);
  iVar1 = 0;
  if (0 < iVar6) {
    do {
      uVar5 = FUN_4a140f38(uVar4,iVar1);
      uVar5 = FUN_4a1404ac(uVar4,uVar5);
      FUN_4a06b074(iVar2,param_2,uVar5,3);
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar6);
    return;
  }
  return;
}



// Address: 4a088524

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a088524(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,int param_7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  int *piVar14;
  int iVar15;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar16;
  undefined *puVar17;
  int iVar18;
  int iVar19;
  undefined *puVar20;
  undefined *puVar21;
  bool bVar22;
  bool bVar23;
  int iStack_48;
  int iStack_44;
  undefined *puStack_34;
  int local_30;
  int local_2c;
  int *piStack_28;
  
  switch(param_3) {
  case 0:
    uVar2 = FUN_4a134aa8();
    iVar3 = FUN_4a0cf540(uVar2,6);
    local_2c = 1;
    local_30 = param_7;
    FUN_4a0d22c4(iVar3,param_4,param_5,param_6);
    FUN_4a0d23c4(iVar3,param_2);
    if (*(int *)(iVar3 + 0xac) == 0) {
      iVar3 = FUN_4a0ff494();
      local_2c = (int)(param_6 * 3 + ((uint)(param_6 * 3 >> 0x1f) >> 0x1e)) >> 2;
      local_30 = 3;
      FUN_4a06cd2c(iVar3 + 0x278,param_2,0,0xaac);
      return;
    }
    return;
  case 1:
    local_30 = param_6;
    local_2c = param_7;
    FUN_4a087100(param_1,param_2,param_4,param_5);
    return;
  case 2:
    break;
  case 3:
    local_30 = param_6;
    local_2c = param_7;
    FUN_4a0877e8(param_1,param_2,param_4,param_5);
    return;
  case 4:
    local_30 = param_6;
    local_2c = param_7;
    FUN_4a087bf8(param_1,param_2,param_4,param_5);
    return;
  case 5:
    local_30 = param_6;
    local_2c = param_7;
    FUN_4a088078(param_1,param_2,param_4,param_5);
    return;
  case 6:
    uVar2 = FUN_4a134aa8();
    iVar3 = FUN_4a0cf540(uVar2,5);
    local_2c = 1;
    local_30 = param_7;
    FUN_4a0d22c4(iVar3,param_4,param_5,param_6);
    FUN_4a0d23c4(iVar3,param_2);
    if (*(int *)(iVar3 + 0xac) == 0) {
      iVar3 = FUN_4a0ff494();
      local_2c = (int)(param_6 * 3 + ((uint)(param_6 * 3 >> 0x1f) >> 0x1e)) >> 2;
      local_30 = 3;
      FUN_4a06cd2c(iVar3 + 0x278,param_2,0,0xaad);
      return;
    }
    return;
  default:
    return;
  case 10:
    local_30 = param_6;
    local_2c = param_7;
    FUN_4a088ca4(param_1,param_2,param_4,param_5);
    return;
  case 0xb:
    local_30 = param_6;
    local_2c = param_7;
    FUN_4a0887c4(param_1,param_2,param_4,param_5);
    return;
  }
  uVar2 = FUN_4a134aa8();
  iVar1 = FUN_4a0cf540(uVar2,4);
  local_2c = 1;
  local_30 = param_7;
  FUN_4a0d22c4(iVar1,param_4,param_5,param_6);
  local_2c = iVar1;
  piStack_28 = param_2;
  iVar6 = FUN_4a0ff494();
  puVar21 = PTR_DAT_4a0d28fc;
  iVar7 = iVar6 + 0x128;
  iStack_44 = *(int *)(iVar1 + 0x98);
  puVar20 = *(undefined **)(iVar1 + 0x90);
  iVar3 = *(int *)(iVar1 + 0x94);
  iStack_48 = *(int *)(iVar1 + 0x9c);
  iVar8 = FUN_4a0bc1f8(*(undefined4 *)PTR_DAT_4a0d28fc);
  if (((iVar8 == 400) || (iVar8 = FUN_4a0bc1f8(*(undefined4 *)puVar21), iVar8 == 0x140)) &&
     (*(int *)(iVar1 + 0x74) == 6 || *(int *)(iVar1 + 0x74) == 4)) {
    puVar20 = (undefined *)(**(code **)(*piStack_28 + 0x74))(piStack_28);
    if ((int)puVar20 < (int)*(undefined **)(iVar1 + 0x90)) {
      puVar20 = *(undefined **)(iVar1 + 0x90);
    }
    iVar8 = (**(code **)(*piStack_28 + 0x78))(piStack_28);
    iVar15 = *(int *)(iVar1 + 0x94);
    if (iVar15 <= iVar8) {
      iVar3 = iVar8;
    }
    iStack_44 = (int)puVar20 - *(int *)(iVar1 + 0x90);
    if (iVar8 < iVar15) {
      iVar3 = iVar15;
    }
    iVar8 = *(int *)(iVar1 + 0x90) - (int)puVar20;
    if (iStack_44 <= iVar8) {
      iStack_44 = iVar8;
    }
    iStack_44 = *(int *)(iVar1 + 0x98) - iStack_44;
    iStack_48 = iVar3 - iVar15;
    if (iVar3 - iVar15 <= iVar15 - iVar3) {
      iStack_48 = iVar15 - iVar3;
    }
    iStack_48 = *(int *)(iVar1 + 0x9c) - iStack_48;
  }
  iVar8 = *(int *)(iVar1 + 0x88);
  iVar18 = *(int *)(iVar1 + 0x80);
  iVar15 = FUN_4a171e1c(*(undefined4 *)(iVar1 + 0x5c));
  puVar21 = (undefined *)(iVar15 + iVar18);
  iVar15 = FUN_4a171e1c(*(undefined4 *)(iVar1 + 0x44));
  iVar15 = iVar15 + *(int *)(iVar1 + 0x84);
  iVar9 = *(int *)(iVar1 + 0xbc);
  uVar2 = FUN_4a171fac(iVar8 + -0x14);
  uVar10 = FUN_4a17295c(uVar2,0xffffffff);
  uVar11 = FUN_4a171fac(iVar18);
  uVar10 = FUN_4a171a94(uVar11,uVar10);
  uVar11 = FUN_4a09f974(iVar7,0x7e);
  FUN_4a171bb8(uVar2,uVar11);
  iVar8 = 0;
  if (0 < *(int *)(iVar1 + 0xac)) {
    local_30 = iStack_48 + iVar3;
    puStack_34 = puVar20 + iStack_44;
    puVar17 = puVar21;
    iVar18 = iVar15;
    do {
      if (*(char *)(iVar1 + 0x7c) == '\0') {
        if ((iVar3 - *(int *)(iVar1 + 0xbc) < iVar18) &&
           (iVar18 < *(int *)(iVar1 + 0xbc) + local_30)) {
LAB_4a0d25a8:
          FUN_4a0d0004(iVar1,0,iVar7,iVar8);
          if ((*(int *)(iVar1 + 0xb0) == 1) &&
             ((iVar8 < *(int *)(iVar1 + 0xac) + -1 && (*(int *)(iVar1 + 0x74) != 9)))) {
            uVar2 = FUN_4a171fac(iVar9 + iVar18);
            FUN_4a09f664(iVar7,0x7e,uVar10,uVar2);
          }
        }
      }
      else {
        puVar12 = puVar17 + *(int *)(iVar1 + 0xb8);
        bVar23 = SBORROW4((int)puVar12,(int)puVar20);
        iVar19 = (int)puVar12 - (int)puVar20;
        bVar22 = puVar12 == puVar20;
        if ((int)puVar20 < (int)puVar12) {
          bVar23 = SBORROW4((int)puStack_34,(int)puVar17);
          iVar19 = (int)puStack_34 - (int)puVar17;
          bVar22 = puStack_34 == puVar17;
        }
        if (!bVar22 && iVar19 < 0 == bVar23) goto LAB_4a0d25a8;
      }
      iVar19 = *(int *)(iVar1 + 0xb0);
      FUN_4a0015f0(iVar8,iVar19);
      if (extraout_r1 == iVar19 + -1) {
        iVar18 = iVar18 + *(int *)(iVar1 + 0xbc);
        puVar17 = puVar21;
      }
      else {
        puVar17 = puVar17 + *(int *)(iVar1 + 0xb8);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(iVar1 + 0xac));
  }
  uVar2 = (**(code **)(*piStack_28 + 0x74))(piStack_28);
  uVar10 = (**(code **)(*piStack_28 + 0x78))(piStack_28);
  uVar11 = (**(code **)(*piStack_28 + 0x70))(piStack_28);
  (**(code **)(*piStack_28 + 0x6c))(piStack_28);
  (**(code **)(*piStack_28 + 0x20))(piStack_28,puVar20,iVar3,iStack_44);
  FUN_4a09f3a4(iVar7,piStack_28);
  iVar8 = 0;
  *(undefined4 *)(iVar1 + 0xa0) = 0;
  if (0 < *(int *)(iVar1 + 0xac)) {
    puVar12 = puVar20 + iStack_44;
    puVar17 = puVar21;
    do {
      if (*(char *)(iVar1 + 0x7c) == '\0') {
        if ((iVar3 - *(int *)(iVar1 + 0xbc) < iVar15) &&
           (iVar15 < *(int *)(iVar1 + 0xbc) + iStack_48 + iVar3)) {
LAB_4a0d2798:
          FUN_4a0d0004(iVar1,piStack_28,0,iVar8);
        }
      }
      else {
        puVar13 = puVar17 + *(int *)(iVar1 + 0xb8);
        bVar23 = SBORROW4((int)puVar13,(int)puVar20);
        iVar9 = (int)puVar13 - (int)puVar20;
        bVar22 = puVar13 == puVar20;
        if ((int)puVar20 < (int)puVar13) {
          bVar23 = SBORROW4((int)puVar12,(int)puVar17);
          iVar9 = (int)puVar12 - (int)puVar17;
          bVar22 = puVar12 == puVar17;
        }
        if (!bVar22 && iVar9 < 0 == bVar23) goto LAB_4a0d2798;
      }
      iVar9 = *(int *)(iVar1 + 0xb0);
      FUN_4a0015f0(iVar8,iVar9);
      if (extraout_r1_00 == iVar9 + -1) {
        iVar15 = iVar15 + *(int *)(iVar1 + 0xbc);
        puVar17 = puVar21;
      }
      else {
        puVar17 = puVar17 + *(int *)(iVar1 + 0xb8);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(iVar1 + 0xac));
  }
  (**(code **)(*piStack_28 + 0x9c))(piStack_28,uVar2,uVar10,uVar11);
  if (*(char *)(iVar1 + 0x7c) != '\0') {
    return;
  }
  uVar2 = FUN_4a171fac(*(undefined4 *)(iVar1 + 0x8c));
  uVar10 = FUN_4a171fac(*(int *)(iVar1 + 0x80) + *(int *)(iVar1 + 0x88));
  FUN_4a1725c0(uVar10,0x41200000);
  uVar10 = FUN_4a17295c(uVar2,0xffffffff);
  uVar11 = FUN_4a171fac(*(undefined4 *)(iVar1 + 0x84));
  FUN_4a171a94(uVar11,uVar10);
  FUN_4a171fac(*(int *)(iVar1 + 0xb4) * *(int *)(iVar1 + 0xbc));
  uVar16 = *(uint *)(iVar1 + 0x44);
  FUN_4a171e1c();
  uVar2 = FUN_4a171e1c(uVar2);
  uVar10 = FUN_4a171e1c(uVar16 ^ 0x80000000);
  FUN_4a08c638(iVar1,iVar7,uVar10,uVar2);
  piVar14 = piStack_28;
  if (*(int *)(iVar6 + 0x1e8) == 0) {
    uVar2 = FUN_4a171fac(*(undefined4 *)(iVar6 + 0x1e0));
    uVar10 = FUN_4a171fac(*(undefined4 *)(iVar6 + 0x1e4));
    uVar10 = FUN_4a171bb8(uVar10,uVar2);
    FUN_4a0b529c(*(undefined4 *)(iVar6 + 0x1c0),uVar2,uVar10,0xc2c80000);
  }
  else {
    uVar2 = FUN_4a171fac(*(undefined4 *)(iVar6 + 0x1e0));
    uVar10 = FUN_4a171fac(*(undefined4 *)(iVar6 + 0x1e4));
    uVar10 = FUN_4a171bb8(uVar10,uVar2);
    FUN_4a0b529c(*(undefined4 *)(iVar6 + 0x1c0),uVar2,uVar10,0xc3480000);
  }
  FUN_4a0af110(*(undefined4 *)(iVar6 + 0x1c0),0x42b40000,0);
  uVar2 = (**(code **)(*piVar14 + 0x74))(piVar14);
  uVar10 = (**(code **)(*piVar14 + 0x78))(piVar14);
  uVar11 = (**(code **)(*piVar14 + 0x70))(piVar14);
  (**(code **)(*piVar14 + 0x6c))(piVar14);
  piVar4 = (int *)thunk_FUN_4a0b3908();
  FUN_4a0a83a4(piVar4,piVar14);
  (**(code **)(*piVar4 + 0x20))
            (piVar4,*(undefined4 *)(iVar6 + 0x1d8),*(undefined4 *)(iVar6 + 0x1dc),
             *(undefined4 *)(iVar6 + 0x1e0));
  FUN_4a0a8b14(piVar4,*(undefined4 *)(iVar6 + 0x1b8));
  (**(code **)(*piVar4 + 0x30))(piVar4);
  (**(code **)(*piVar14 + 0x9c))(piVar14,uVar2,uVar10,uVar11);
  iVar3 = *(int *)(*(int *)(iVar6 + 0x1bc) + 0xdc);
  if (iVar3 != 0) {
    for (iVar3 = *(int *)(iVar3 + 0x10); 0 < iVar3; iVar3 = *(int *)(iVar3 + 0x10)) {
      FUN_4a0b4ac8(*(int *)(iVar6 + 0x1bc),
                   **(undefined4 **)(*(int *)(*(int *)(iVar6 + 0x1bc) + 0xdc) + 0x14));
      iVar3 = *(int *)(*(int *)(iVar6 + 0x1bc) + 0xdc);
      if (iVar3 == 0) break;
    }
  }
  puVar5 = (undefined4 *)FUN_4a0c6bc0(&puStack_34);
  *puVar5 = PTR_PTR_4a09f65c;
  puVar5[2] = *(undefined4 *)(iVar6 + 0x198);
  piVar14 = *(int **)(iVar6 + 0x19c);
  puVar5[3] = piVar14;
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0xc))();
  }
  iVar3 = local_2c;
  puStack_34 = PTR_PTR_4a09f660;
  iVar1 = 0;
  *puVar5 = PTR_PTR_4a09f660;
  if (0 < (int)puVar5[2]) {
    do {
      if (puVar5[3] == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(puVar5[3] + 8);
      }
      *(undefined2 *)(iVar7 + iVar1 * 2) = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)puVar5[2]);
  }
  iVar1 = FUN_4a0bcc84(&puStack_34);
  if (iVar1 != 0) {
    iVar7 = 0;
    if (0 < iVar3) {
      do {
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar3);
      if (iVar1 == 0) goto LAB_4a09f638;
    }
    FUN_4a14f21c();
  }
LAB_4a09f638:
  FUN_4a0c6bf4(&puStack_34);
  *(undefined4 *)(iVar6 + 0x1ec) = 0xc2480000;
  *(undefined4 *)(iVar6 + 0x1f0) = 0;
  return;
}



// Address: 4a0887c4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0887c4(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  
  iVar2 = FUN_4a0ff494();
  iVar15 = iVar2 + 0x128;
  uVar16 = *(undefined4 *)(iVar2 + 0x51c);
  uVar3 = *(undefined4 *)(iVar2 + 0x520);
  uVar4 = FUN_4a143db0(uVar3,*(undefined4 *)(param_1 + 0x9c));
  iVar5 = FUN_4a145524(uVar3,uVar4);
  uVar6 = FUN_4a09f974(iVar15,0x7e);
  FUN_4a171bb8(0x43480000,uVar6);
  uVar6 = FUN_4a09f974(iVar15,0x7f);
  FUN_4a171bb8(0x43480000,uVar6);
  iVar19 = param_3 + 0xd2;
  iVar20 = ((param_3 + param_5) - iVar19) + -10;
  iVar18 = param_4 + 0x19;
  iVar17 = ((param_6 + param_4) - iVar18) + -10;
  uVar6 = FUN_4a171fac(param_4 + 10);
  uVar7 = FUN_4a171fac(param_3 + 0x19);
  FUN_4a09f664(iVar15,0xb4,uVar7,uVar6);
  uVar6 = FUN_4a171fac(iVar18);
  uVar7 = FUN_4a171fac(param_3 + 100);
  FUN_4a09f664(iVar15,0x7f,uVar7,uVar6);
  FUN_4a171fac(iVar17);
  FUN_4a171fac(iVar20);
  FUN_4a171fac(iVar19);
  FUN_4a09ff60(iVar15,0xe9,0xea,0xeb);
  iVar8 = FUN_4a145524(uVar3,uVar4);
  uVar6 = FUN_4a144940(uVar3,uVar4,0);
  iVar9 = FUN_4a143130(uVar3,uVar6);
  FUN_4a09f9c8(iVar15,(int)*(short *)(iVar9 + 0xc));
  iVar9 = FUN_4a171e1c();
  uVar6 = FUN_4a144940(uVar3,uVar4,0);
  iVar10 = FUN_4a143130(uVar3,uVar6);
  FUN_4a09f974(iVar15,(int)*(short *)(iVar10 + 0xc));
  iVar10 = FUN_4a171e1c();
  if (iVar8 < 5) {
    iVar11 = 0;
  }
  else {
    iVar11 = iVar10 >> 1;
  }
  iVar11 = (iVar19 + (iVar20 >> 1)) - iVar11;
  iVar19 = iVar8;
  if (4 < iVar8) {
    iVar19 = 4;
  }
  iVar20 = ((iVar18 + (iVar17 >> 1)) - (iVar9 * iVar19 >> 1)) + (iVar9 >> 1);
  iVar19 = 0;
  iVar17 = iVar20;
  if (0 < iVar8) {
    do {
      uVar6 = FUN_4a144940(uVar3,uVar4,iVar19);
      iVar12 = FUN_4a143130(uVar3,uVar6);
      sVar1 = *(short *)(iVar12 + 0xc);
      FUN_4a140338(uVar16,uVar6);
      uVar6 = FUN_4a171fac(iVar17);
      uVar13 = FUN_4a171fac(iVar11);
      FUN_4a09f664(iVar15,(int)sVar1,uVar13,uVar6);
      if (iVar19 == 3) {
        iVar11 = iVar11 + iVar10;
        iVar17 = iVar20;
      }
      else {
        iVar17 = iVar17 + iVar9;
      }
      iVar19 = iVar19 + 1;
    } while (iVar19 < iVar8);
  }
  iVar8 = 0;
  if (0 < iVar5) {
    uVar6 = FUN_4a171fac(param_3 + 0x19);
    while( true ) {
      uVar13 = FUN_4a171fac(iVar18 + 10);
      FUN_4a09f664(iVar15,0x87,uVar6,uVar13);
      uVar14 = FUN_4a144940(uVar3,uVar4,iVar8);
      iVar9 = FUN_4a140338(uVar16,uVar14);
      if (0 < iVar9) {
        FUN_4a09f664(iVar15,0x86,uVar6,uVar13);
      }
      iVar8 = iVar8 + 1;
      iVar18 = iVar18 + 0x14;
      if (iVar5 <= iVar8) break;
      if (0 < iVar8) {
        uVar13 = FUN_4a171fac(iVar18);
        FUN_4a09f664(iVar15,0x7e,uVar7,uVar13);
      }
    }
  }
  FUN_4a09f3a4(iVar15,param_2);
  FUN_4a06b074(iVar2 + 0x278,param_2,0x916,4);
  iVar8 = 0;
  if (0 < iVar5) {
    do {
      uVar6 = FUN_4a144940(uVar3,uVar4,iVar8);
      iVar9 = FUN_4a143130(uVar3,uVar6);
      FUN_4a06b074(iVar2 + 0x278,param_2,*(undefined4 *)(iVar9 + 8),3);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar5);
    return;
  }
  return;
}



// Address: 4a088ca4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a088ca4(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined1 auStack_50 [20];
  undefined4 local_3c;
  undefined4 local_38;
  int iStack_34;
  undefined4 local_30;
  int iStack_2c;
  int iStack_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  iStack_2c = param_3;
  iStack_28 = param_4;
  iVar3 = FUN_4a0ff494();
  iVar17 = iVar3 + 0x278;
  iVar18 = iVar3 + 0x128;
  iVar20 = *(int *)(iVar3 + 0x51c);
  iVar4 = FUN_4a13fa14(iVar20,0);
  iVar3 = iVar4;
  if (iVar4 != -1) {
    iVar3 = FUN_4a13fac4(iVar20,iVar4);
  }
  iVar5 = *(int *)(param_1 + 0x9c);
  if (*(int *)(iVar20 + 0x434) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(iVar20 + 0x434) + 8);
  }
  sVar1 = *(short *)(iVar6 + iVar5 * 2);
  if (*(int *)(iVar20 + 0x498) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(iVar20 + 0x498) + 8);
  }
  iVar6 = (int)*(char *)(iVar6 + iVar5);
  if (iVar6 < 0) {
    iVar7 = -1;
  }
  else {
    if (*(int *)(iVar20 + 0x420) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(*(int *)(iVar20 + 0x420) + 8);
    }
    iVar7 = (int)*(short *)(iVar7 + iVar6 * 2);
  }
  iVar8 = FUN_4a13fa14(iVar20,iVar5);
  uVar9 = FUN_4a140710(iVar20,iVar8);
  FUN_4a13f968(iVar20,iVar5);
  puVar10 = (undefined4 *)FUN_4a0c6bc0(auStack_50);
  *puVar10 = PTR_PTR_4a089428;
  puVar10[2] = *(undefined4 *)(param_1 + 0x7c);
  piVar11 = *(int **)(param_1 + 0x80);
  puVar10[3] = piVar11;
  if (piVar11 != (int *)0x0) {
    (**(code **)(*piVar11 + 0xc))();
  }
  *puVar10 = PTR_PTR_4a08942c;
  FUN_4a0dcb74(iVar20,iVar5,puVar10);
  FUN_4a16bef4(auStack_50);
  if ((iVar4 == -1) || (iVar8 != iVar4)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  iVar4 = param_5 >> 1;
  iVar21 = param_3 + iVar4;
  iVar8 = param_3 + iVar21 >> 1;
  iVar12 = iVar8 + ((param_5 * 3 >> 2) - iVar4 >> 1);
  uVar13 = FUN_4a171fac(param_6);
  FUN_4a17211c(uVar13,0x3f400000);
  iVar14 = FUN_4a171e1c();
  FUN_4a06be4c(iVar17,3);
  FUN_4a06be4c(iVar17,3);
  iVar19 = param_4 + (param_6 >> 1) + 0x3c;
  uVar13 = FUN_4a09f974(iVar18,0x7e);
  uVar15 = FUN_4a171fac(iVar4);
  FUN_4a171bb8(uVar15,uVar13);
  uVar13 = FUN_4a171e1c();
  uVar15 = FUN_4a171fac(param_4 + -0x2a + (param_6 >> 2));
  uVar16 = FUN_4a171fac(iVar21 + 0x2a + (param_5 >> 2));
  FUN_4a09f664(iVar18,(int)sVar1,uVar16,uVar15);
  local_38 = FUN_4a171fac(iVar14 + -10);
  local_3c = FUN_4a171fac(iVar4 + -10);
  FUN_4a171fac(param_4 + 0x37);
  FUN_4a171fac(iVar21 + 5);
  FUN_4a09ff60(iVar18,0xe9,0xea,0xeb);
  FUN_4a171fac(uVar13);
  uVar13 = FUN_4a171fac(iVar19);
  uVar15 = FUN_4a171fac(param_3 + iVar21 >> 1);
  FUN_4a09f664(iVar18,0x7e,uVar15,uVar13);
  if (bVar2) {
    uVar13 = FUN_4a171fac(iVar19 + ((param_6 + param_4) - iVar19 >> 1));
    uVar15 = FUN_4a171fac(param_3 + 4);
    FUN_4a09f664(iVar18,0xb6,uVar15,uVar13);
  }
  FUN_4a086b6c(local_30,iVar18,iVar12,param_4 + 0x12);
  iVar14 = param_4 + 0x30;
  iVar4 = 0;
  do {
    if (*(int *)(param_1 + 0x80) == 0) {
      iVar19 = 0;
    }
    else {
      iVar19 = *(int *)(*(int *)(param_1 + 0x80) + 8);
    }
    if (*(int *)(iVar19 + iVar4 * 4) == -1) break;
    FUN_4a086b6c(local_30,iVar18,iVar8,iVar14);
    iVar4 = iVar4 + 2;
    iVar14 = iVar14 + 0x18;
  } while (iVar4 < 4);
  FUN_4a09f3a4(iVar18,local_30);
  FUN_4a086b6c(local_30,0,iVar12,param_4 + 0x12);
  param_4 = param_4 + 0x30;
  iVar4 = 0;
  do {
    if (*(int *)(param_1 + 0x80) == 0) {
      iVar18 = 0;
    }
    else {
      iVar18 = *(int *)(*(int *)(param_1 + 0x80) + 8);
    }
    if (*(int *)(iVar18 + iVar4 * 4) == -1) break;
    FUN_4a086b6c(local_30,0,iVar8,param_4);
    iVar4 = iVar4 + 2;
    param_4 = param_4 + 0x18;
  } while (iVar4 < 4);
  iVar4 = FUN_4a13fed0(iVar20,iVar5);
  FUN_4a06b074(iVar17,local_30,0xaae,3);
  iVar18 = 0;
  if (0 < iVar4) {
    do {
      uVar13 = FUN_4a13f97c(iVar20,iVar5,iVar18);
      uVar15 = FUN_4a1406a0(iVar20,uVar13);
      iVar8 = FUN_4a14044c(iVar20,iVar5,uVar13);
      if (iVar8 == 0) {
        uVar15 = 0xaaf;
      }
      FUN_4a06cd2c(iVar17,local_30,0,uVar15);
      iVar18 = iVar18 + 1;
    } while (iVar18 < iVar4);
  }
  FUN_4a06b074(iVar17,local_30,0xab6,3);
  FUN_4a06cd2c(iVar17,local_30,1,uVar9);
  if (iVar6 != -1) {
    FUN_4a06b074(iVar17,local_30,0xab2,3);
    FUN_4a06b074(iVar17,local_30,iVar7,3);
  }
  if (bVar2) {
    uVar9 = 0xab4;
    if (iVar3 == iVar5) {
      uVar9 = 0xab3;
    }
    FUN_4a06cd2c(iVar17,local_30,2,uVar9);
    return;
  }
  return;
}



// Address: 4a089430

void FUN_4a089430(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_4a0ff494();
  uVar1 = FUN_4a0fba7c();
  uVar2 = FUN_4a0cf540(uVar1,4);
  FUN_4a0d297c(uVar2,0xffffffff);
  uVar2 = FUN_4a0cf540(uVar1,6);
  FUN_4a0d297c(uVar2,0xffffffff);
  uVar1 = FUN_4a0cf540(uVar1,5);
  FUN_4a0d297c(uVar1,0xffffffff);
  FUN_4a08c62c(param_1,0);
  FUN_4a08c608(param_1,0);
  FUN_4a08c564(param_1,1);
  FUN_4a089b50(param_1,param_2);
  FUN_4a08c5fc(param_1,0xc4f78000,0,0x43a50000);
  uVar1 = FUN_4a171fac(param_2 * -0x14a);
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  return;
}



// Address: 4a0894f0

void FUN_4a0894f0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  
  FUN_4a134a98(param_1,1);
  iVar1 = FUN_4a0ff494();
  iVar11 = iVar1 + 0x128;
  iVar2 = FUN_4a13ca78();
  uVar3 = FUN_4a171fac(iVar2 >> 1);
  iVar2 = FUN_4a13caa0(iVar1);
  uVar4 = FUN_4a171fac(iVar2 >> 1);
  FUN_4a09f664(iVar11,0xaf,uVar3,uVar4,0x3f800000,0x3f800000,0x3f800000,0);
  if (*(uint *)(param_1 + 0xa4) < 7) {
    uVar5 = FUN_4a171fac();
    uVar5 = FUN_4a17295c(uVar5,5);
    uVar6 = FUN_4a1725c0(uVar3,0x42d80000);
    uVar5 = FUN_4a171a94(uVar6,uVar5);
    uVar6 = FUN_4a171a94(uVar4,0x43000000);
    FUN_4a09f664(iVar11,0xb1,uVar5,uVar6,0x3f800000,0x3f800000,0x3f800000,0);
  }
  FUN_4a1725c0(uVar3,0x434a0000);
  uVar5 = FUN_4a171e1c();
  uVar6 = FUN_4a1725c0(uVar4,0x42be0000);
  uVar7 = FUN_4a171e1c();
  uVar8 = FUN_4a134aa8(param_1);
  uVar8 = FUN_4a0cb6c4(uVar8,0x80);
  FUN_4a0fa6e8(uVar8,iVar11,uVar5,uVar7,1);
  uVar5 = FUN_4a0d7160(*(undefined4 *)(iVar1 + 0x51c),0);
  FUN_4a171a94(uVar3,0x43450000);
  uVar7 = FUN_4a171e1c();
  FUN_4a1725c0(uVar4,0x42400000);
  uVar8 = FUN_4a171e1c();
  uVar9 = FUN_4a134aa8(param_1);
  uVar9 = FUN_4a0cb6c4(uVar9,0x100);
  FUN_4a0fa6e8(uVar9,iVar11,uVar7,uVar8,uVar5);
  FUN_4a0fba7c(iVar1);
  uVar10 = FUN_4a146ea4();
  FUN_4a171a94(uVar3,0x43400000);
  uVar5 = FUN_4a171e1c();
  FUN_4a171a94(uVar4,0x42000000);
  uVar7 = FUN_4a171e1c();
  uVar8 = FUN_4a134aa8(param_1);
  uVar8 = FUN_4a0cb6c4(uVar8,0x200);
  FUN_4a0fa6e8(uVar8,iVar11,uVar5,uVar7,uVar10 ^ 1);
  uVar5 = FUN_4a0fba7c(iVar1);
  iVar2 = FUN_4a146ea4();
  if ((iVar2 != 0) || (iVar2 = FUN_4a146d64(uVar5), uVar5 = 0, iVar2 != 0)) {
    uVar5 = 1;
  }
  FUN_4a171a94(uVar3,0x433a0000);
  uVar7 = FUN_4a171e1c();
  FUN_4a171a94(uVar4,0x429c0000);
  uVar8 = FUN_4a171e1c();
  uVar9 = FUN_4a134aa8(param_1);
  uVar9 = FUN_4a0cb6c4(uVar9,0x400);
  FUN_4a0fa6e8(uVar9,iVar11,uVar7,uVar8,uVar5);
  if (*(int *)(param_1 + 0x98) == -1) {
    iVar2 = FUN_4a08cce0(param_1);
    if (iVar2 != 0) {
      uVar5 = FUN_4a1725c0(uVar3,0x43390000);
      FUN_4a09f664(iVar11,0xb2,uVar5,uVar4,0x3f800000,0x3f800000,0x3f800000,0);
    }
    iVar2 = FUN_4a08c204(param_1);
    if (iVar2 != 0) {
      uVar5 = FUN_4a171a94(uVar3,0x43230000);
      FUN_4a09f664(iVar11,0xb3,uVar5,uVar4,0x3f800000,0x3f800000,0x3f800000,0);
    }
    if (*(int *)(param_1 + 0x98) == -1) goto LAB_4a0898d4;
  }
  uVar5 = FUN_4a1725c0(uVar3,0x433c0000);
  uVar7 = FUN_4a171a94(uVar4,0x41880000);
  FUN_4a09f664(iVar11,0xb0,uVar5,uVar7,0x3f800000,0x3f800000,0x3f800000,0);
  uVar7 = FUN_4a1725c0(uVar7,0x41800000);
  uVar8 = FUN_4a134aa8(param_1);
  uVar8 = FUN_4a0cb6c4(uVar8,0x100000);
  uVar7 = FUN_4a171e1c(uVar7);
  uVar5 = FUN_4a171e1c(uVar5);
  FUN_4a0fa6e8(uVar8,iVar11,uVar5,uVar7,1);
LAB_4a0898d4:
  FUN_4a09f3a4(iVar11,param_2);
  FUN_4a1725c0(uVar3,0x41700000);
  uVar5 = FUN_4a171e1c();
  FUN_4a1725c0(uVar4,0x42ec0000);
  uVar4 = FUN_4a171e1c();
  FUN_4a06b074(iVar1 + 0x278,param_2,*(undefined4 *)(param_1 + 0xa0),6,uVar5,uVar4,0x12);
  uVar3 = FUN_4a1725c0(uVar3,0x43250000);
  FUN_4a171a94(uVar3,0xc1300000);
  iVar1 = FUN_4a171e1c();
  FUN_4a171a94(uVar6,0x41600000);
  uVar3 = FUN_4a171e1c();
  uVar10 = *(uint *)(param_1 + 0x98);
  uVar14 = 0xfffffffe < uVar10;
  uVar13 = uVar10 == 0xffffffff;
  if ((bool)uVar13) {
    FUN_4a08c230(param_1,iVar1,uVar3,0x14a,0xbe);
    uVar4 = (**(code **)(*param_2 + 0x74))(param_2);
    uVar5 = (**(code **)(*param_2 + 0x78))(param_2);
    uVar6 = (**(code **)(*param_2 + 0x70))(param_2);
    uVar7 = (**(code **)(*param_2 + 0x6c))(param_2);
    (**(code **)(*param_2 + 0x9c))(param_2,iVar1,uVar3,0x14a,0xbe);
    iVar2 = FUN_4a171e1c(*(undefined4 *)(param_1 + 0x5c));
    iVar11 = iVar2 + *(int *)(param_1 + 0x8c) * 0x14a;
    FUN_4a088524(param_1,param_2,*(int *)(param_1 + 0x8c),iVar1 + iVar11,uVar3,0x14a,0xbe);
    uVar8 = FUN_4a08c744(param_1,*(undefined4 *)(param_1 + 0x5c));
    uVar9 = FUN_4a171fac(iVar2);
    FUN_4a171da0(uVar9,uVar8);
    if (!(bool)uVar13) {
      iVar2 = *(int *)(param_1 + 0x90);
      FUN_4a1720a0(uVar9,uVar8);
      iVar12 = -0x14a;
      if (!(bool)uVar14) {
        iVar2 = *(int *)(param_1 + 0x94);
        iVar12 = 0x14a;
      }
      if (iVar2 != -1) {
        FUN_4a088524(param_1,param_2,iVar2,iVar1 + iVar12 + iVar11,uVar3,0x14a,0xbe);
      }
    }
    (**(code **)(*param_2 + 0x9c))(param_2,uVar4,uVar5,uVar6,uVar7);
    return;
  }
  FUN_4a088524(param_1,param_2,uVar10,iVar1 + 0xf,uVar3,0x13b,0xbe);
  return;
}



// Address: 4a089b50

void FUN_4a089b50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  
  *(int *)(param_1 + 0x8c) = param_2;
  FUN_4a0ff494();
  iVar1 = *(int *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  iVar2 = iVar1;
  uVar3 = extraout_r1;
  if (iVar1 != -1) {
    uVar3 = 1;
    iVar2 = param_1;
  }
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  if (iVar1 != -1) {
    iVar2 = FUN_4a08c564(iVar2,uVar3);
  }
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  if (0 < param_2) {
    iVar2 = param_2 + -1;
  }
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  if (0 < param_2) {
    *(int *)(param_1 + 0x90) = iVar2;
  }
  if (param_2 < 6) {
    *(int *)(param_1 + 0x94) = param_2 + 1;
  }
  switch(param_2 + 1) {
  case 0:
    *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
    return;
  case 1:
    *(undefined4 *)(param_1 + 0xa4) = 0;
    uVar3 = 0x871;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0xa4) = 1;
    uVar3 = 0x870;
    break;
  case 3:
    *(undefined4 *)(param_1 + 0xa4) = 2;
    uVar3 = 0x872;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0xa4) = 3;
    uVar3 = 0x873;
    break;
  case 5:
    *(undefined4 *)(param_1 + 0xa4) = 4;
    uVar3 = 0x874;
    break;
  case 6:
    *(undefined4 *)(param_1 + 0xa4) = 5;
    uVar3 = 0x875;
    break;
  case 7:
    *(undefined4 *)(param_1 + 0xa4) = 6;
    *(undefined4 *)(param_1 + 0xa0) = 0x877;
    return;
  default:
    return;
  }
  *(undefined4 *)(param_1 + 0xa0) = uVar3;
  return;
}



// Address: 4a089c6c

int * FUN_4a089c6c(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  puVar2 = (undefined4 *)FUN_4a08cd00();
  puVar1 = PTR_PTR_4a089dac;
  *puVar2 = PTR_PTR_4a089dac;
  puVar2[4] = puVar1 + 100;
  puVar2[6] = puVar1 + 0x84;
  puVar2[7] = puVar1 + 0x94;
  puVar2[8] = puVar1 + 0xa4;
  puVar2[5] = puVar1 + 0x74;
  puVar2[3] = puVar1 + 0x54;
  puVar2[2] = puVar1 + 0x44;
  puVar2[9] = puVar1 + 0xb4;
  piVar3 = (int *)FUN_4a0c6bc0(puVar2 + 0x1d);
  puVar1 = PTR_PTR_4a089db0;
  piVar3[2] = 0;
  piVar3[3] = 0;
  *piVar3 = (int)puVar1;
  iVar4 = FUN_4a15e080(0x28);
  if (iVar4 == 0) {
    iVar4 = FUN_4a1669a8();
  }
  iVar5 = 0;
  do {
    *(undefined4 *)(iVar4 + iVar5 * 4) = 0;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 10);
  thunk_FUN_4a161570(0x18);
  puVar2 = (undefined4 *)FUN_4a0c0628();
  puVar2[3] = 4;
  puVar2[4] = 10;
  puVar1 = PTR_PTR_4a089db4;
  *puVar2 = PTR_PTR_4a089db4;
  puVar2[2] = iVar4;
  *(undefined1 *)(puVar2 + 5) = 1;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)(puVar1 + 0xc))(puVar2);
  }
  (**(code **)(*piVar3 + 0x1c))(piVar3);
  piVar3[2] = 10;
  piVar3[3] = (int)puVar2;
  piVar3[6] = -1;
  piVar3[5] = 0;
  piVar3[7] = -1;
  piVar3[8] = -1;
  piVar3[9] = -1;
  piVar3[10] = -1;
  piVar3[0xb] = -1;
  piVar3[0xc] = -1;
  piVar3[0xd] = 0;
  piVar3[0xe] = 0;
  piVar3[0xf] = 0;
  return piVar3 + -0x1d;
}



// Address: 4a089dd0

void FUN_4a089dd0(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_PTR_4a089e30;
  *param_1 = PTR_PTR_4a089e30;
  param_1[4] = puVar1 + 100;
  param_1[6] = puVar1 + 0x84;
  param_1[7] = puVar1 + 0x94;
  param_1[8] = puVar1 + 0xa4;
  param_1[5] = puVar1 + 0x74;
  param_1[3] = puVar1 + 0x54;
  param_1[2] = puVar1 + 0x44;
  param_1[9] = puVar1 + 0xb4;
  iVar2 = FUN_4a16bef4(param_1 + 0x1d);
  *(undefined **)(iVar2 + -0x74) = PTR_PTR_4a0c0674;
  *(undefined4 *)(iVar2 + -0x70) = 0xffffffff;
  return;
}



// Address: 4a089e34

/* WARNING: Removing unreachable block (ram,0x4a0faea0) */
/* WARNING: Removing unreachable block (ram,0x4a0fae9c) */
/* WARNING: Removing unreachable block (ram,0x4a0faebc) */
/* WARNING: Removing unreachable block (ram,0x4a0faf08) */

void FUN_4a089e34(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_4a0ff494();
  *(undefined4 *)(param_1 + 0x78) = 1;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = param_4;
  *(undefined4 *)(param_1 + 0x90) = param_3;
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  FUN_4a09f974(iVar1 + 0x128,0x60);
  uVar2 = FUN_4a171e1c();
  *(undefined4 *)(param_1 + 0xa4) = uVar2;
  *(undefined4 *)(param_1 + 0xa8) = 200;
  FUN_4a08a03c(param_1,param_2,0);
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 2;
  *(undefined4 *)(param_1 + 0x80) = 0;
                    /* WARNING: Could not recover jumptable at 0x4a0faeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_caseD_2_4a0faec8)();
  return;
}



// Address: 4a089eb4

/* WARNING: Removing unreachable block (ram,0x4a0faea0) */
/* WARNING: Removing unreachable block (ram,0x4a0fae9c) */
/* WARNING: Removing unreachable block (ram,0x4a0faebc) */
/* WARNING: Removing unreachable block (ram,0x4a0faf08) */

void FUN_4a089eb4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_4a0ff494();
  *(undefined4 *)(param_1 + 0x78) = 2;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = param_3;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = param_4;
  *(undefined4 *)(param_1 + 0xa0) = param_5;
  FUN_4a09f974(iVar1 + 0x128,0x60);
  uVar2 = FUN_4a171e1c();
  *(undefined4 *)(param_1 + 0xa4) = uVar2;
  *(undefined4 *)(param_1 + 0xa8) = 200;
  FUN_4a08a03c(param_1,param_2,0);
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 2;
  *(undefined4 *)(param_1 + 0x80) = 0;
                    /* WARNING: Could not recover jumptable at 0x4a0faeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_caseD_2_4a0faec8)();
  return;
}



// Address: 4a089f50

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

void FUN_4a089f50(int param_1,int *param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(int *)(param_1 + 0x94) != param_3) {
    *(int *)(param_1 + 0x94) = param_3;
    uVar3 = FUN_4a134aa8(param_1);
    uVar3 = FUN_4a0cd480(uVar3,param_3,*(undefined4 *)(param_1 + 0xa8),200);
    *(undefined4 *)(param_1 + 0xac) = uVar3;
    *(undefined4 *)(param_1 + 0xb0) = uVar3;
  }
  FUN_4a041910(1);
  FUN_4a134a98(param_1,1);
  iVar4 = FUN_4a0ff494();
  iVar5 = iVar4 + 0x128;
  iVar21 = 0;
  iVar6 = *(int *)(param_1 + 0x78);
  if (iVar6 == 1) {
    iVar21 = 0x46;
    iVar15 = 0x1e;
  }
  else if (iVar6 == 2) {
    iVar21 = 0x3c;
    iVar15 = 0x4b;
  }
  else if (iVar6 == 3) {
    iVar21 = 0x46;
    iVar15 = 0x13;
  }
  else {
    iVar15 = 0;
    if (iVar6 == 4) {
      iVar21 = 0x14;
      iVar15 = iVar21;
    }
  }
  uVar3 = FUN_4a171fac(*(undefined4 *)(param_1 + 0xa4));
  uVar7 = FUN_4a171fac(*(int *)(param_1 + 0xb0) + iVar21 + iVar15);
  iVar6 = FUN_4a13ca78(iVar4);
  uVar8 = FUN_4a171fac(iVar6 >> 1);
  uVar9 = FUN_4a1725c0(uVar3,0x41000000);
  uVar9 = FUN_4a17295c(uVar9,0xffffffff);
  uVar9 = FUN_4a1724e0(uVar9,uVar8);
  uVar10 = FUN_4a17295c(uVar7,0xffffffff);
  iVar6 = FUN_4a13caa0(iVar4);
  uVar11 = FUN_4a171fac(iVar6 >> 1);
  uVar11 = FUN_4a1725c0(uVar11,uVar10);
  if (*(int *)(param_1 + 0x74) == 0) {
    uVar12 = FUN_4a0fb068(param_1 + 0x7c);
    uVar13 = FUN_4a0faf98(param_1 + 0x7c);
    FUN_4a09fe78(iVar5,uVar12);
    uVar12 = FUN_4a171a94(uVar10,uVar11);
    uVar14 = FUN_4a17295c(uVar3,0xffffffff);
    uVar14 = FUN_4a171a94(uVar14,uVar9);
    FUN_4a09fe80(iVar5,uVar14,uVar12,uVar13);
  }
  iVar6 = *(int *)(param_1 + 0x78);
  if (iVar6 == 1) {
    FUN_4a09ff60(iVar5,0x57,0x58,0x59);
    uVar10 = FUN_4a171a94(uVar9,0x41200000);
    uVar12 = FUN_4a171a94(uVar11,0x41d00000);
    FUN_4a09f664(iVar5,99,uVar10,uVar12);
    uVar10 = FUN_4a1725c0(uVar10,0x40400000);
    uVar12 = FUN_4a1725c0(uVar12,0x40400000);
    uVar13 = FUN_4a134aa8(param_1);
    uVar13 = FUN_4a0cb6c4(uVar13,*(undefined4 *)(param_1 + 0x98));
    uVar12 = FUN_4a171e1c(uVar12);
    uVar10 = FUN_4a171e1c(uVar10);
    FUN_4a0fa6e8(uVar13,iVar5,uVar10,uVar12);
  }
  else if (iVar6 == 2) {
    uVar12 = FUN_4a17295c(uVar3,0xffffffff);
    uVar12 = FUN_4a171a94(uVar12,uVar9);
    FUN_4a171a94(uVar10,uVar11);
    FUN_4a0a086c(iVar5,0x60,0x61,0x62);
    FUN_4a1725c0(uVar12,0x42500000);
    uVar10 = FUN_4a171e1c();
    uVar13 = FUN_4a171a94(uVar11,uVar7);
    FUN_4a1725c0(uVar13,0x42100000);
    uVar13 = FUN_4a171e1c();
    uVar14 = FUN_4a134aa8(param_1);
    uVar14 = FUN_4a0cb6c4(uVar14,*(undefined4 *)(param_1 + 0x9c));
    FUN_4a0fa6e8(uVar14,iVar5,uVar10,uVar13);
    FUN_4a171a94(uVar12,0x42300000);
    uVar10 = FUN_4a171e1c();
    uVar12 = FUN_4a134aa8(param_1);
    uVar12 = FUN_4a0cb6c4(uVar12,*(undefined4 *)(param_1 + 0xa0));
    FUN_4a0fa6e8(uVar12,iVar5,uVar10,uVar13);
    uVar10 = FUN_4a171a94(uVar9,0x40e00000);
    uVar12 = FUN_4a171a94(uVar11,0x41300000);
    FUN_4a1725c0(uVar3,0x41b00000);
    FUN_4a09f9c8(iVar5,0x71);
    FUN_4a0a07ac(iVar5,0x71,uVar10,uVar12);
  }
  else if (iVar6 == 3) {
    FUN_4a171e1c(uVar7);
    uVar10 = FUN_4a171e1c(uVar3);
    uVar12 = FUN_4a171e1c(uVar11);
    uVar13 = FUN_4a171e1c(uVar9);
    FUN_4a08b18c(param_2,uVar13,uVar12,uVar10);
  }
  iVar6 = *(int *)(param_1 + 0xac);
  if (*(int *)(param_1 + 0xb0) < iVar6) {
    uVar10 = FUN_4a171fac();
    uVar12 = FUN_4a1725c0(uVar10,0x41200000);
    uVar13 = FUN_4a171a94(uVar9,uVar3);
    FUN_4a1725c0(uVar13,0x42000000);
    uVar12 = FUN_4a17295c(uVar12,0xffffffff);
    uVar13 = FUN_4a171fac(iVar21);
    uVar13 = FUN_4a171a94(uVar13,uVar11);
    FUN_4a171a94(uVar13,uVar12);
    FUN_4a171fac(iVar6);
    uVar18 = *(uint *)(param_1 + 0x44);
    FUN_4a171e1c();
    uVar10 = FUN_4a171e1c(uVar10);
    uVar12 = FUN_4a171e1c(uVar18 ^ 0x80000000);
    FUN_4a08c638(param_1,iVar5,uVar12,uVar10);
  }
  FUN_4a09f3a4(iVar5,param_2);
  FUN_4a09f960(iVar5);
  if (*(int *)(param_1 + 0x74) == 1) {
    if (*(int *)(param_1 + 0x78) == 1 || *(int *)(param_1 + 0x78) == 2) {
      FUN_4a171e1c(uVar8);
      uVar12 = *(undefined4 *)(param_1 + 0x90);
      uVar10 = FUN_4a171fac(iVar21);
      uVar10 = FUN_4a17295c(uVar10,0xffffffff);
      FUN_4a171a94(uVar10,uVar11);
      FUN_4a171e1c();
      FUN_4a06b074(iVar4 + 0x278,param_2,uVar12,6);
    }
    uVar10 = FUN_4a171fac(*(int *)(param_1 + 0xa8) >> 1);
    FUN_4a1724e0(uVar10,uVar8);
    iVar6 = FUN_4a171e1c();
    uVar10 = FUN_4a171fac(iVar21);
    uVar10 = FUN_4a171a94(uVar10,uVar11);
    iVar21 = FUN_4a171e1c();
    iVar19 = *(int *)(param_1 + 0x78);
    iVar22 = 0;
    iVar15 = 0;
    if (iVar19 == 3) {
      FUN_4a171a94(uVar9,0x425c0000);
      iVar6 = FUN_4a171e1c();
      FUN_4a171a94(uVar11,0x426c0000);
      iVar21 = FUN_4a171e1c();
      iVar15 = 8;
    }
    else if (iVar19 == 1 || iVar19 == 2) {
      iVar22 = 0xb;
      iVar15 = 0x12;
    }
    iVar20 = *(int *)(param_1 + 0xb0);
    iVar19 = iVar21 - iVar22;
    if (*(int *)(param_1 + 0x94) == -1) {
      uVar12 = (**(code **)(*param_2 + 0x74))(param_2);
      uVar13 = (**(code **)(*param_2 + 0x78))(param_2);
      uVar14 = (**(code **)(*param_2 + 0x70))(param_2);
      (**(code **)(*param_2 + 0x6c))(param_2);
      uVar25 = *(undefined4 *)(param_1 + 0x44);
      iVar23 = iVar6 + (*(int *)(param_1 + 0xa8) >> 1);
      uVar16 = FUN_4a171fac(iVar21);
      FUN_4a171a94(uVar16,uVar25);
      uVar16 = FUN_4a171e1c();
      (**(code **)(*param_2 + 0x9c))(param_2,uVar12,iVar19,uVar14);
      FUN_4a06c45c(iVar4 + 0x278,param_2,3,iVar23);
      puVar1 = PTR_DAT_4a08ad9c;
      if (*(int *)PTR_DAT_4a08ad9c != 0) {
        uVar25 = FUN_4a171fac(iVar19);
        uVar17 = FUN_4a171fac(iVar20 + iVar15 + iVar22);
        uVar24 = *(undefined4 *)(param_1 + 0x48);
        uVar16 = FUN_4a171fac(uVar16);
        uVar24 = FUN_4a1725c0(uVar16,uVar24);
        uVar24 = FUN_4a171a94(uVar24,uVar17);
        FUN_4a1725c0(uVar24,uVar25);
        uVar24 = FUN_4a171e1c();
        puVar2 = PTR_DAT_4a08ada0;
        FUN_4a1003b4(*(undefined4 *)PTR_DAT_4a08ada0,iVar23,uVar24,1);
        if (*(int *)puVar1 != 0) {
          uVar16 = FUN_4a1725c0(uVar16,*(undefined4 *)(param_1 + 0x48));
          uVar16 = FUN_4a171a94(uVar16,uVar17);
          FUN_4a1725c0(uVar16,uVar25);
          uVar16 = FUN_4a171e1c();
          FUN_4a1003b4(*(undefined4 *)puVar2,iVar23,uVar16,1);
        }
      }
      (**(code **)(*param_2 + 0x9c))(param_2,uVar12,uVar13,uVar14);
    }
    else {
      uVar12 = FUN_4a134aa8(param_1);
      FUN_4a0cb670(uVar12,param_2,*(undefined4 *)(param_1 + 0x94),iVar6);
    }
    FUN_4a08c230(param_1,iVar6,iVar19,*(undefined4 *)(param_1 + 0xa8));
    if (*(int *)(param_1 + 0x78) == 1) {
      uVar12 = FUN_4a17211c(uVar3,DAT_4a08ada4);
      uVar13 = FUN_4a09f9c8(iVar5,0x7f);
      uVar12 = FUN_4a17295c(uVar12,0xffffffff);
      uVar8 = FUN_4a1724e0(uVar12,uVar8);
      uVar10 = FUN_4a1725c0(uVar10,uVar13);
      uVar10 = FUN_4a1725c0(uVar10,0x40a00000);
      FUN_4a0a07ac(iVar5,0x7f,uVar8,uVar10);
      if (*(int *)(param_1 + 0xac) != *(int *)(param_1 + 0xb0)) {
        uVar8 = FUN_4a1725c0(uVar3,0x420c0000);
        uVar10 = FUN_4a09f9c8(iVar5,0x65);
        uVar8 = FUN_4a17295c(uVar8,0xffffffff);
        uVar3 = FUN_4a17295c(uVar3,0xffffffff);
        uVar3 = FUN_4a171a94(uVar3,uVar9);
        uVar3 = FUN_4a1725c0(uVar3,uVar8);
        uVar3 = FUN_4a1725c0(uVar3,0x41000000);
        uVar8 = FUN_4a17295c(uVar10,0xffffffff);
        uVar7 = FUN_4a171a94(uVar11,uVar7);
        uVar7 = FUN_4a1725c0(uVar7,uVar8);
        uVar7 = FUN_4a1725c0(uVar7,0x41a00000);
        FUN_4a0a07ac(iVar5,0x65,uVar3,uVar7);
      }
      FUN_4a09f3a4(iVar5,param_2);
    }
    else if (*(int *)(param_1 + 0x78) == 3) {
      FUN_4a171e1c(uVar7);
      uVar3 = FUN_4a171e1c(uVar3);
      uVar7 = FUN_4a171e1c(uVar11);
      uVar8 = FUN_4a171e1c(uVar9);
      FUN_4a08b3a0(param_2,uVar8,uVar7,uVar3);
    }
    puVar1 = PTR_DAT_4a041a9c;
    iVar4 = 0;
    if (*(int *)PTR_DAT_4a041a9c != 0) {
      iVar4 = *(int *)(PTR_DAT_4a041a9c + 4);
    }
    if (*(int *)PTR_DAT_4a041a9c == 0 || iVar4 == 0) {
      return;
    }
    *(undefined4 *)(PTR_DAT_4a041a9c + 0x28) = 0;
    iVar4 = *(int *)(PTR_DAT_4a041a9c + 0x38);
    if (*(int *)(PTR_DAT_4a041a9c + 0x1c) != 0) {
      *(int *)(puVar1 + 8) = *(int *)(PTR_DAT_4a041a9c + 0x34) + *(int *)(puVar1 + 0x3c);
      *(int *)(puVar1 + 0xc) = iVar4 + *(int *)(puVar1 + 0x40);
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
  return;
}



// Address: 4a089fa0

/* WARNING: Removing unreachable block (ram,0x4a0faea0) */
/* WARNING: Removing unreachable block (ram,0x4a0fae9c) */
/* WARNING: Removing unreachable block (ram,0x4a0faebc) */
/* WARNING: Removing unreachable block (ram,0x4a0faf08) */

void FUN_4a089fa0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_4a0ff494();
  *(int *)(param_1 + 0x78) = param_7;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = param_4;
  *(undefined4 *)(param_1 + 0x9c) = param_5;
  *(undefined4 *)(param_1 + 0xa0) = param_6;
  iVar1 = iVar1 + 0x128;
  if (param_7 == 3) {
    iVar1 = 0x1a0;
  }
  *(undefined4 *)(param_1 + 0x90) = param_3;
  if (param_7 == 3) {
    *(int *)(param_1 + 0xa4) = iVar1;
    iVar1 = iVar1 + -0x5a;
  }
  else {
    FUN_4a09f974(iVar1,0x60);
    uVar2 = FUN_4a171e1c();
    *(undefined4 *)(param_1 + 0xa4) = uVar2;
    iVar1 = 200;
  }
  *(int *)(param_1 + 0xa8) = iVar1;
  FUN_4a08a03c(param_1,param_2,0);
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 2;
  *(undefined4 *)(param_1 + 0x80) = 0;
                    /* WARNING: Could not recover jumptable at 0x4a0faeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_caseD_2_4a0faec8)();
  return;
}



// Address: 4a08a03c

void FUN_4a08a03c(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined8 uVar11;
  int local_120;
  char local_11c [256];
  
  *(int *)(param_1 + 0x8c) = param_2;
  iVar2 = FUN_4a0ff494();
  puVar1 = PTR_DAT_4a08a2d8;
  iVar2 = iVar2 + 0x278;
  *(undefined4 *)PTR_DAT_4a08a2d8 = 0;
  if (param_2 == 0x840) {
    FUN_4a001134(local_11c,PTR_DAT_4a08a2dc,0x100);
    host_s3eConfigGetString_arm(&DAT_4a08a2e8,s_Version_4a08a2e0,local_11c);
    host_s3eConfigGetInt_arm(&DAT_4a08a308,s_RemoveJambuildVersion_4a08a2f0,&local_120);
    if (local_120 != 0) {
      iVar9 = 0;
      pcVar3 = local_11c;
      while (local_11c[0] != '\0') {
        if (*pcVar3 == '.') {
          iVar9 = iVar9 + 1;
        }
        if (*pcVar3 == '.' && iVar9 == 3) {
          *pcVar3 = '\0';
          break;
        }
        pcVar3 = pcVar3 + 1;
        local_11c[0] = *pcVar3;
      }
    }
    uVar4 = thunk_FUN_4a161570(0x14);
    piVar5 = (int *)FUN_4a0c707c(uVar4,local_11c);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))();
    }
    FUN_4a06b6cc(iVar2,0xfffffff5,0x840,piVar5);
    FUN_4a06b330(iVar2,0xfffffff5,3,*(undefined4 *)(param_1 + 0xa8));
    uVar4 = thunk_FUN_4a161570(0x14);
    uVar4 = FUN_4a0c707c(uVar4,&DAT_4a08a310);
    iVar9 = FUN_4a0ff494();
    if (iVar9 != 0) {
      iVar9 = FUN_4a0ff494();
      uVar6 = FUN_4a06c1b0(iVar9 + 0x278);
      uVar7 = FUN_4a13e614(uVar6,uVar4);
      iVar9 = 1 - uVar7;
      if (1 < uVar7) {
        iVar9 = 0;
      }
      if ((*(int *)PTR_DAT_4a08a314 == 1) || ((*(int *)PTR_DAT_4a08a314 == 2 && (iVar9 != 0)))) {
        bVar10 = true;
      }
      else {
        bVar10 = false;
      }
      if (bVar10) {
        *(undefined4 *)puVar1 = 1;
      }
    }
    if ((piVar5 != (int *)0x0) && (iVar9 = (**(code **)(*piVar5 + 8))(piVar5), iVar9 != 0)) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
  }
  else {
    FUN_4a06b330(iVar2,param_2,3,*(undefined4 *)(param_1 + 0xa8));
  }
  iVar9 = FUN_4a06c7e8(iVar2);
  iVar2 = FUN_4a06be4c(iVar2,3);
  uVar7 = 0;
  if (*(int *)puVar1 != 0) {
    uVar7 = (uint)*(ushort *)(*(int *)(*(int *)PTR_DAT_4a08a318 + 4) + 0x22);
  }
  iVar2 = iVar9 * iVar2 + uVar7;
  *(int *)(param_1 + 0xac) = iVar2;
  uVar11 = FUN_4a0d4b74(iVar2,0x32,200);
  iVar9 = (int)((ulonglong)uVar11 >> 0x20);
  iVar8 = (int)uVar11;
  bVar10 = param_3 == 0;
  *(int *)(param_1 + 0xb0) = iVar8;
  iVar2 = 0;
  if (!bVar10) {
    iVar9 = *(int *)(param_1 + 0xac);
    iVar2 = iVar9 - iVar8;
  }
  if ((bVar10 || iVar9 == iVar8) || iVar2 < 0 != (!bVar10 && SBORROW4(iVar9,iVar8))) {
    FUN_4a08c608(param_1,0);
    uVar4 = FUN_4a171fac(*(int *)(param_1 + 0xb0) - *(int *)(param_1 + 0xac) >> 1);
    FUN_4a08c614(param_1,uVar4,uVar4);
  }
  else {
    FUN_4a08c608(param_1,1);
    uVar4 = FUN_4a171fac(*(int *)(param_1 + 0xb0) - *(int *)(param_1 + 0xac));
    FUN_4a08c614(param_1,uVar4,0);
    uVar4 = 0;
  }
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  *(undefined4 *)(param_1 + 0x54) = uVar4;
  return;
}



// Address: 4a08a31c

/* WARNING: Removing unreachable block (ram,0x4a0faea0) */
/* WARNING: Removing unreachable block (ram,0x4a0fae9c) */
/* WARNING: Removing unreachable block (ram,0x4a0faebc) */
/* WARNING: Removing unreachable block (ram,0x4a0faf08) */

void FUN_4a08a31c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_4a0ff494();
  *(undefined4 *)(param_1 + 0x78) = 1;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = param_4;
  *(undefined4 *)(param_1 + 0x90) = param_3;
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  FUN_4a09f974(iVar1 + 0x128,0x60);
  uVar2 = FUN_4a171e1c();
  *(undefined4 *)(param_1 + 0xa4) = uVar2;
  *(undefined4 *)(param_1 + 0xa8) = 200;
  FUN_4a08a03c(param_1,param_2,1);
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 2;
  *(undefined4 *)(param_1 + 0x80) = 0;
                    /* WARNING: Could not recover jumptable at 0x4a0faeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_caseD_2_4a0faec8)();
  return;
}



// Address: 4a08a39c

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

void FUN_4a08a39c(int param_1,int *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_4a041910(1);
  FUN_4a134a98(param_1,1);
  iVar3 = FUN_4a0ff494();
  iVar4 = iVar3 + 0x128;
  iVar21 = 0;
  iVar5 = *(int *)(param_1 + 0x78);
  if (iVar5 == 1) {
    iVar21 = 0x46;
    iVar15 = 0x1e;
  }
  else if (iVar5 == 2) {
    iVar21 = 0x3c;
    iVar15 = 0x4b;
  }
  else if (iVar5 == 3) {
    iVar21 = 0x46;
    iVar15 = 0x13;
  }
  else {
    iVar15 = 0;
    if (iVar5 == 4) {
      iVar21 = 0x14;
      iVar15 = iVar21;
    }
  }
  uVar6 = FUN_4a171fac(*(undefined4 *)(param_1 + 0xa4));
  uVar7 = FUN_4a171fac(*(int *)(param_1 + 0xb0) + iVar21 + iVar15);
  iVar5 = FUN_4a13ca78(iVar3);
  uVar8 = FUN_4a171fac(iVar5 >> 1);
  uVar9 = FUN_4a1725c0(uVar6,0x41000000);
  uVar9 = FUN_4a17295c(uVar9,0xffffffff);
  uVar9 = FUN_4a1724e0(uVar9,uVar8);
  uVar10 = FUN_4a17295c(uVar7,0xffffffff);
  iVar5 = FUN_4a13caa0(iVar3);
  uVar11 = FUN_4a171fac(iVar5 >> 1);
  uVar11 = FUN_4a1725c0(uVar11,uVar10);
  if (*(int *)(param_1 + 0x74) == 0) {
    uVar12 = FUN_4a0fb068(param_1 + 0x7c);
    uVar13 = FUN_4a0faf98(param_1 + 0x7c);
    FUN_4a09fe78(iVar4,uVar12);
    uVar12 = FUN_4a171a94(uVar10,uVar11);
    uVar14 = FUN_4a17295c(uVar6,0xffffffff);
    uVar14 = FUN_4a171a94(uVar14,uVar9);
    FUN_4a09fe80(iVar4,uVar14,uVar12,uVar13);
  }
  iVar5 = *(int *)(param_1 + 0x78);
  if (iVar5 == 1) {
    FUN_4a09ff60(iVar4,0x57,0x58,0x59);
    uVar10 = FUN_4a171a94(uVar9,0x41200000);
    uVar12 = FUN_4a171a94(uVar11,0x41d00000);
    FUN_4a09f664(iVar4,99,uVar10,uVar12);
    uVar10 = FUN_4a1725c0(uVar10,0x40400000);
    uVar12 = FUN_4a1725c0(uVar12,0x40400000);
    uVar13 = FUN_4a134aa8(param_1);
    uVar13 = FUN_4a0cb6c4(uVar13,*(undefined4 *)(param_1 + 0x98));
    uVar12 = FUN_4a171e1c(uVar12);
    uVar10 = FUN_4a171e1c(uVar10);
    FUN_4a0fa6e8(uVar13,iVar4,uVar10,uVar12);
  }
  else if (iVar5 == 2) {
    uVar12 = FUN_4a17295c(uVar6,0xffffffff);
    uVar12 = FUN_4a171a94(uVar12,uVar9);
    FUN_4a171a94(uVar10,uVar11);
    FUN_4a0a086c(iVar4,0x60,0x61,0x62);
    FUN_4a1725c0(uVar12,0x42500000);
    uVar10 = FUN_4a171e1c();
    uVar13 = FUN_4a171a94(uVar11,uVar7);
    FUN_4a1725c0(uVar13,0x42100000);
    uVar13 = FUN_4a171e1c();
    uVar14 = FUN_4a134aa8(param_1);
    uVar14 = FUN_4a0cb6c4(uVar14,*(undefined4 *)(param_1 + 0x9c));
    FUN_4a0fa6e8(uVar14,iVar4,uVar10,uVar13);
    FUN_4a171a94(uVar12,0x42300000);
    uVar10 = FUN_4a171e1c();
    uVar12 = FUN_4a134aa8(param_1);
    uVar12 = FUN_4a0cb6c4(uVar12,*(undefined4 *)(param_1 + 0xa0));
    FUN_4a0fa6e8(uVar12,iVar4,uVar10,uVar13);
    uVar10 = FUN_4a171a94(uVar9,0x40e00000);
    uVar12 = FUN_4a171a94(uVar11,0x41300000);
    FUN_4a1725c0(uVar6,0x41b00000);
    FUN_4a09f9c8(iVar4,0x71);
    FUN_4a0a07ac(iVar4,0x71,uVar10,uVar12);
  }
  else if (iVar5 == 3) {
    FUN_4a171e1c(uVar7);
    uVar10 = FUN_4a171e1c(uVar6);
    uVar12 = FUN_4a171e1c(uVar11);
    uVar13 = FUN_4a171e1c(uVar9);
    FUN_4a08b18c(param_2,uVar13,uVar12,uVar10);
  }
  iVar5 = *(int *)(param_1 + 0xac);
  if (*(int *)(param_1 + 0xb0) < iVar5) {
    uVar10 = FUN_4a171fac();
    uVar12 = FUN_4a1725c0(uVar10,0x41200000);
    uVar13 = FUN_4a171a94(uVar9,uVar6);
    FUN_4a1725c0(uVar13,0x42000000);
    uVar12 = FUN_4a17295c(uVar12,0xffffffff);
    uVar13 = FUN_4a171fac(iVar21);
    uVar13 = FUN_4a171a94(uVar13,uVar11);
    FUN_4a171a94(uVar13,uVar12);
    FUN_4a171fac(iVar5);
    uVar18 = *(uint *)(param_1 + 0x44);
    FUN_4a171e1c();
    uVar10 = FUN_4a171e1c(uVar10);
    uVar12 = FUN_4a171e1c(uVar18 ^ 0x80000000);
    FUN_4a08c638(param_1,iVar4,uVar12,uVar10);
  }
  FUN_4a09f3a4(iVar4,param_2);
  FUN_4a09f960(iVar4);
  if (*(int *)(param_1 + 0x74) != 1) {
    return;
  }
  if (*(int *)(param_1 + 0x78) == 1 || *(int *)(param_1 + 0x78) == 2) {
    FUN_4a171e1c(uVar8);
    uVar12 = *(undefined4 *)(param_1 + 0x90);
    uVar10 = FUN_4a171fac(iVar21);
    uVar10 = FUN_4a17295c(uVar10,0xffffffff);
    FUN_4a171a94(uVar10,uVar11);
    FUN_4a171e1c();
    FUN_4a06b074(iVar3 + 0x278,param_2,uVar12,6);
  }
  uVar10 = FUN_4a171fac(*(int *)(param_1 + 0xa8) >> 1);
  FUN_4a1724e0(uVar10,uVar8);
  iVar5 = FUN_4a171e1c();
  uVar10 = FUN_4a171fac(iVar21);
  uVar10 = FUN_4a171a94(uVar10,uVar11);
  iVar21 = FUN_4a171e1c();
  iVar19 = *(int *)(param_1 + 0x78);
  iVar22 = 0;
  iVar15 = 0;
  if (iVar19 == 3) {
    FUN_4a171a94(uVar9,0x425c0000);
    iVar5 = FUN_4a171e1c();
    FUN_4a171a94(uVar11,0x426c0000);
    iVar21 = FUN_4a171e1c();
    iVar15 = 8;
  }
  else if (iVar19 == 1 || iVar19 == 2) {
    iVar22 = 0xb;
    iVar15 = 0x12;
  }
  iVar20 = *(int *)(param_1 + 0xb0);
  iVar19 = iVar21 - iVar22;
  if (*(int *)(param_1 + 0x94) == -1) {
    uVar12 = (**(code **)(*param_2 + 0x74))(param_2);
    uVar13 = (**(code **)(*param_2 + 0x78))(param_2);
    uVar14 = (**(code **)(*param_2 + 0x70))(param_2);
    (**(code **)(*param_2 + 0x6c))(param_2);
    uVar25 = *(undefined4 *)(param_1 + 0x44);
    iVar23 = iVar5 + (*(int *)(param_1 + 0xa8) >> 1);
    uVar16 = FUN_4a171fac(iVar21);
    FUN_4a171a94(uVar16,uVar25);
    uVar16 = FUN_4a171e1c();
    (**(code **)(*param_2 + 0x9c))(param_2,uVar12,iVar19,uVar14);
    FUN_4a06c45c(iVar3 + 0x278,param_2,3,iVar23);
    puVar1 = PTR_DAT_4a08ad9c;
    if (*(int *)PTR_DAT_4a08ad9c != 0) {
      uVar25 = FUN_4a171fac(iVar19);
      uVar17 = FUN_4a171fac(iVar20 + iVar15 + iVar22);
      uVar24 = *(undefined4 *)(param_1 + 0x48);
      uVar16 = FUN_4a171fac(uVar16);
      uVar24 = FUN_4a1725c0(uVar16,uVar24);
      uVar24 = FUN_4a171a94(uVar24,uVar17);
      FUN_4a1725c0(uVar24,uVar25);
      uVar24 = FUN_4a171e1c();
      puVar2 = PTR_DAT_4a08ada0;
      FUN_4a1003b4(*(undefined4 *)PTR_DAT_4a08ada0,iVar23,uVar24,1);
      if (*(int *)puVar1 != 0) {
        uVar16 = FUN_4a1725c0(uVar16,*(undefined4 *)(param_1 + 0x48));
        uVar16 = FUN_4a171a94(uVar16,uVar17);
        FUN_4a1725c0(uVar16,uVar25);
        uVar16 = FUN_4a171e1c();
        FUN_4a1003b4(*(undefined4 *)puVar2,iVar23,uVar16,1);
      }
    }
    (**(code **)(*param_2 + 0x9c))(param_2,uVar12,uVar13,uVar14);
  }
  else {
    uVar12 = FUN_4a134aa8(param_1);
    FUN_4a0cb670(uVar12,param_2,*(undefined4 *)(param_1 + 0x94),iVar5);
  }
  FUN_4a08c230(param_1,iVar5,iVar19,*(undefined4 *)(param_1 + 0xa8));
  if (*(int *)(param_1 + 0x78) == 1) {
    uVar12 = FUN_4a17211c(uVar6,DAT_4a08ada4);
    uVar13 = FUN_4a09f9c8(iVar4,0x7f);
    uVar12 = FUN_4a17295c(uVar12,0xffffffff);
    uVar8 = FUN_4a1724e0(uVar12,uVar8);
    uVar10 = FUN_4a1725c0(uVar10,uVar13);
    uVar10 = FUN_4a1725c0(uVar10,0x40a00000);
    FUN_4a0a07ac(iVar4,0x7f,uVar8,uVar10);
    if (*(int *)(param_1 + 0xac) != *(int *)(param_1 + 0xb0)) {
      uVar8 = FUN_4a1725c0(uVar6,0x420c0000);
      uVar10 = FUN_4a09f9c8(iVar4,0x65);
      uVar8 = FUN_4a17295c(uVar8,0xffffffff);
      uVar6 = FUN_4a17295c(uVar6,0xffffffff);
      uVar6 = FUN_4a171a94(uVar6,uVar9);
      uVar6 = FUN_4a1725c0(uVar6,uVar8);
      uVar6 = FUN_4a1725c0(uVar6,0x41000000);
      uVar8 = FUN_4a17295c(uVar10,0xffffffff);
      uVar7 = FUN_4a171a94(uVar11,uVar7);
      uVar7 = FUN_4a1725c0(uVar7,uVar8);
      uVar7 = FUN_4a1725c0(uVar7,0x41a00000);
      FUN_4a0a07ac(iVar4,0x65,uVar6,uVar7);
    }
    FUN_4a09f3a4(iVar4,param_2);
  }
  else if (*(int *)(param_1 + 0x78) == 3) {
    FUN_4a171e1c(uVar7);
    uVar6 = FUN_4a171e1c(uVar6);
    uVar7 = FUN_4a171e1c(uVar11);
    uVar8 = FUN_4a171e1c(uVar9);
    FUN_4a08b3a0(param_2,uVar8,uVar7,uVar6);
  }
  puVar1 = PTR_DAT_4a041a9c;
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
    *(int *)(puVar1 + 8) = *(int *)(PTR_DAT_4a041a9c + 0x34) + *(int *)(puVar1 + 0x3c);
    *(int *)(puVar1 + 0xc) = iVar3 + *(int *)(puVar1 + 0x40);
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



// Address: 4a08ada8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a08ada8(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined1 uVar5;
  
  uVar3 = DAT_4a08ccd8;
  if (param_1[0x1d] == 0) {
    FUN_4a0faf18(param_1 + 0x1f);
    if ((param_1[0x22] & 2U) == 0) {
      param_1[0x1d] = 1;
    }
    return;
  }
  if (param_1[0x1d] != 1) {
    return;
  }
  uVar5 = param_1[0xb] == 0;
  if (!(bool)uVar5) {
    return;
  }
  FUN_4a171da0(param_1[0x17],param_1[0x1c]);
  if (!(bool)uVar5) {
    iVar1 = param_1[0x17];
    FUN_4a0d4898(iVar1,param_1[0x1c],param_2,uVar3);
    iVar2 = FUN_4a171fac();
    param_1[0x17] = iVar2;
    uVar3 = FUN_4a08c744(param_1,iVar1);
    uVar4 = FUN_4a08c744(param_1,iVar2);
    FUN_4a171da0(uVar3,uVar4);
    if (!(bool)uVar5) {
                    /* WARNING: Could not recover jumptable at 0x4a08cbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x38))(param_1);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a08cbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_4a171da0(param_1[0x11],param_1[0x15]);
  if (!(bool)uVar5) {
    FUN_4a0d4898(param_1[0x11],param_1[0x15],param_2,uVar3);
    iVar1 = FUN_4a171fac();
    param_1[0x11] = iVar1;
    return;
  }
  uVar5 = 1;
  if ((param_1[0x1a] & 0x7fffffffU) == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a08cc28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  iVar1 = FUN_4a08c744(param_1,param_1[0x17]);
  uVar3 = FUN_4a171fac(param_2);
  uVar3 = FUN_4a17211c(uVar3,DAT_4a08ccdc);
  uVar3 = FUN_4a17211c(uVar3,0x43c80000);
  FUN_4a172458(iVar1,param_1[0x17]);
  if ((bool)uVar5) {
    FUN_4a1720a0(iVar1,param_1[0x17]);
    if ((bool)uVar5) goto LAB_4a08ccc8;
    iVar2 = FUN_4a1725c0(param_1[0x17],uVar3);
    FUN_4a172458(iVar1,iVar2);
    if ((bool)uVar5) goto LAB_4a08cc8c;
  }
  else {
    iVar2 = FUN_4a171a94(param_1[0x17],uVar3);
    FUN_4a1720a0(iVar1,iVar2);
    if ((bool)uVar5) {
LAB_4a08cc8c:
      iVar1 = iVar2;
    }
  }
  param_1[0x17] = iVar1;
LAB_4a08ccc8:
  param_1[0x1c] = param_1[0x17];
  return;
}



// Address: 4a08adf4

void FUN_4a08adf4(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)FUN_4a08cd00();
  puVar1 = PTR_PTR_4a08ae94;
  *puVar2 = PTR_PTR_4a08ae94;
  puVar2[4] = puVar1 + 100;
  puVar2[6] = puVar1 + 0x84;
  puVar2[7] = puVar1 + 0x94;
  puVar2[8] = puVar1 + 0xa4;
  puVar2[5] = puVar1 + 0x74;
  puVar2[3] = puVar1 + 0x54;
  puVar2[2] = puVar1 + 0x44;
  puVar2[9] = puVar1 + 0xb4;
  puVar2[0x1d] = 1;
  puVar2[0x1e] = 0;
  iVar3 = FUN_4a0fb394(puVar2 + 0x1f);
  *(undefined4 *)(iVar3 + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x14) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x18) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x1c) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x20) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x24) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x28) = 0;
  *(undefined4 *)(iVar3 + 0x2c) = 0;
  *(undefined4 *)(iVar3 + 0x30) = 0;
  *(undefined4 *)(iVar3 + 0x34) = 0;
  return;
}



// Address: 4a08aec8

/* WARNING: Removing unreachable block (ram,0x4a0fae9c) */
/* WARNING: Removing unreachable block (ram,0x4a0faea0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a08aec8(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int unaff_r7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  code *UNRECOVERED_JUMPTABLE_00;
  
  iVar1 = FUN_4a0ff494();
  if (*(int *)(param_1 + 0x74) != 0) {
    return;
  }
  FUN_4a08c244(param_1,param_2,param_3);
  uVar2 = DAT_4a08b17c;
  iVar8 = 0;
  if (param_2 == 0) {
    iVar1 = *(int *)(param_3 + 0xc);
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iVar1 + 8);
      iVar8 = *(int *)(iVar1 + 8);
    }
    uVar10 = *(undefined4 *)(iVar6 + 4);
    iVar8 = *(int *)(iVar8 + 8);
    iVar1 = FUN_4a135720(param_1,uVar10,iVar8);
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a08af44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    iVar1 = FUN_4a135720(param_1,uVar10,iVar8);
    if (iVar1 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar9 = *(undefined4 *)(param_1 + 0x44);
      uVar10 = FUN_4a171fac(iVar8 - *(int *)(param_1 + 0xa8));
      uVar10 = FUN_4a1725c0(uVar10,uVar9);
      FUN_4a17211c(uVar10,uVar2);
      uVar2 = FUN_4a171e1c();
    }
    *(undefined4 *)(param_1 + 0xa0) = uVar2;
    return;
  }
  if (param_2 != 3) {
                    /* WARNING: Could not recover jumptable at 0x4a08af9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  iVar3 = *(int *)(param_3 + 0xc);
  iVar7 = iVar8;
  iVar6 = iVar8;
  if (iVar3 != 0) {
    iVar7 = *(int *)(iVar3 + 8);
    iVar6 = *(int *)(iVar3 + 8);
  }
  iVar3 = *(int *)(iVar6 + 4);
  iVar7 = *(int *)(iVar7 + 8);
  iVar6 = FUN_4a135720(param_1,iVar3,iVar7);
  if (iVar6 == 0) {
    iVar6 = -1;
  }
  else {
    uVar9 = *(undefined4 *)(param_1 + 0x44);
    uVar10 = FUN_4a171fac(iVar7 - *(int *)(param_1 + 0xa8));
    uVar10 = FUN_4a1725c0(uVar10,uVar9);
    FUN_4a17211c(uVar10,uVar2);
    iVar6 = FUN_4a171e1c();
  }
  if (iVar6 == -1) {
                    /* WARNING: Could not recover jumptable at 0x4a08b00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(int *)(param_1 + 0xa0) = iVar6;
  iVar7 = iVar8;
  if (*(int *)(param_1 + 0x84) != 0) {
    iVar7 = *(int *)(*(int *)(param_1 + 0x84) + 8);
  }
  iVar11 = *(int *)(iVar7 + (iVar6 + 5) * 4);
  iVar7 = FUN_4a0fd380(iVar1,iVar11);
  if (*(int *)(param_1 + 0x84) != 0) {
    iVar8 = *(int *)(*(int *)(param_1 + 0x84) + 8);
  }
  if (*(int *)(iVar8 + 4) == 1) {
    iVar8 = FUN_4a06c6c8(iVar1 + 0x278);
    if (iVar8 == iVar6) {
      iVar7 = 2;
    }
    else {
      iVar7 = 3;
    }
  }
  if (iVar7 == -1) {
    uVar2 = FUN_4a134aa8(param_1);
    FUN_4a0cf554(uVar2,0x15);
    uVar2 = 1;
  }
  else {
    if (iVar7 == 2 || iVar7 == 3) {
      uVar2 = FUN_4a134aa8(param_1);
      FUN_4a0cf554(uVar2,0x13);
      FUN_4a08b55c(param_1,4);
LAB_4a08b130:
      piVar4 = (int *)FUN_4a134aa8(param_1);
      FUN_4a16be24(&stack0xffffffe0,3);
      iVar1 = 0;
      if (unaff_r7 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(unaff_r7 + 8);
      }
      *(undefined4 *)(iVar8 + 4) = 0;
      if (unaff_r7 == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = *(undefined4 **)(unaff_r7 + 8);
      }
      *puVar5 = 0x80000000;
      if (unaff_r7 != 0) {
        iVar1 = *(int *)(unaff_r7 + 8);
      }
      *(int *)(iVar1 + 8) = iVar11;
      (**(code **)(*piVar4 + 0x20))(piVar4,0xb,&stack0xffffffe0);
      FUN_4a16bef4(&stack0xffffffe0);
      return;
    }
    uVar2 = FUN_4a171fac(*(undefined4 *)(param_1 + 0xa4));
    FUN_4a171a94(uVar2,0x42fa0000);
    iVar8 = FUN_4a171e1c();
    if (iVar8 < iVar3) {
      if (iVar7 != 1) {
        FUN_4a0fd564(iVar1,iVar11,1);
      }
      uVar2 = FUN_4a134aa8(param_1);
      FUN_4a0cf554(uVar2,0x13);
      uVar2 = 2;
    }
    else {
      if (iVar8 <= iVar3) {
                    /* WARNING: Could not recover jumptable at 0x4a08b118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
      if (iVar11 == 0x849) {
        if (iVar7 != 0) goto LAB_4a08b130;
      }
      else if (iVar7 != 0) {
        FUN_4a0fd564(iVar1,iVar11,0);
      }
      uVar2 = FUN_4a134aa8(param_1);
      FUN_4a0cf554(uVar2,0x13);
      uVar2 = 3;
    }
  }
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  switch(uVar2) {
  case 0:
    iVar1 = FUN_4a134aa8(param_1);
    if (*(int *)(iVar1 + 0x40) == param_1) {
      *(undefined4 *)(iVar1 + 0x40) = 0;
    }
    return;
  case 1:
    uVar2 = FUN_4a134aa8(param_1);
    FUN_4a0cd790(uVar2,param_1);
    uVar2 = 0;
    break;
  case 2:
  case 3:
    uVar2 = FUN_4a134aa8(param_1);
    FUN_4a0cd790(uVar2,param_1);
    uVar2 = 1;
    break;
  default:
    return;
  }
  *(undefined4 *)(param_1 + 0xac) = uVar2;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  switch(uVar2) {
  case 0:
    uVar2 = 400;
    break;
  case 1:
    uVar2 = 300;
    break;
  default:
    goto switchD_4a0faeb8_default;
  }
  *(undefined4 *)(param_1 + 0xb4) = uVar2;
switchD_4a0faeb8_default:
  *(undefined4 *)(param_1 + 0xb8) = 3;
  return;
}



// Address: 4a08b18c

void FUN_4a08b18c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined *puStack_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  
  iVar1 = FUN_4a0ff494();
  iVar10 = iVar1 + 0x128;
  local_28 = FUN_4a171fac(param_5);
  local_2c = FUN_4a171fac(param_4);
  local_30 = FUN_4a171fac(param_3);
  uVar2 = FUN_4a171fac(param_2);
  FUN_4a09ff60(iVar10,0x47,0x48,0x49,0x4a,0x4b,0x4c,0x4d,0x4e,0x4f,uVar2,local_30,local_2c,local_28,
               0x3f800000);
  if (param_6 != -1) {
    uVar3 = FUN_4a171a94(uVar2,0x41b80000);
    uVar4 = FUN_4a171a94(local_30,0x42040000);
    FUN_4a09f664(iVar10,0x50,uVar3,uVar4,0x3f800000,0x3f800000,0x3f800000,0);
    uVar3 = FUN_4a1725c0(uVar3,0x40a00000);
    uVar4 = FUN_4a1725c0(uVar4,0x40a00000);
    uVar5 = FUN_4a0ff400(iVar1);
    uVar5 = FUN_4a0cb6c4(uVar5,param_6);
    uVar4 = FUN_4a171e1c(uVar4);
    uVar3 = FUN_4a171e1c(uVar3);
    FUN_4a0fa6e8(uVar5,iVar10,uVar3,uVar4,1);
  }
  uVar2 = FUN_4a171a94(uVar2,0x425c0000);
  uVar3 = FUN_4a171a94(local_30,0x41b00000);
  uVar4 = FUN_4a1725c0(local_2c,0x42b40000);
  uVar5 = FUN_4a1725c0(local_28,0x42480000);
  FUN_4a09ff60(iVar10,0x66,0x67,0x68,0x69,0x6a,0x6b,0x6c,0x6d,0x6e,uVar2,uVar3,uVar4,uVar5,
               0x3f800000);
  if (*(int *)(iVar1 + 0x1e8) == 0) {
    uVar2 = FUN_4a171fac(*(undefined4 *)(iVar1 + 0x1e0));
    uVar3 = FUN_4a171fac(*(undefined4 *)(iVar1 + 0x1e4));
    uVar3 = FUN_4a171bb8(uVar3,uVar2);
    FUN_4a0b529c(*(undefined4 *)(iVar1 + 0x1c0),uVar2,uVar3,0xc2c80000,0x42c80000);
  }
  else {
    uVar2 = FUN_4a171fac(*(undefined4 *)(iVar1 + 0x1e0));
    uVar3 = FUN_4a171fac(*(undefined4 *)(iVar1 + 0x1e4));
    uVar3 = FUN_4a171bb8(uVar3,uVar2);
    FUN_4a0b529c(*(undefined4 *)(iVar1 + 0x1c0),uVar2,uVar3,0xc3480000,0x43480000);
  }
  FUN_4a0af110(*(undefined4 *)(iVar1 + 0x1c0),0x42b40000,0,0,0x3f800000);
  uVar2 = (**(code **)(*param_1 + 0x74))(param_1);
  uVar3 = (**(code **)(*param_1 + 0x78))(param_1);
  uVar4 = (**(code **)(*param_1 + 0x70))(param_1);
  uVar5 = (**(code **)(*param_1 + 0x6c))(param_1);
  piVar6 = (int *)thunk_FUN_4a0b3908();
  FUN_4a0a83a4(piVar6,param_1);
  (**(code **)(*piVar6 + 0x20))
            (piVar6,*(undefined4 *)(iVar1 + 0x1d8),*(undefined4 *)(iVar1 + 0x1dc),
             *(undefined4 *)(iVar1 + 0x1e0),*(undefined4 *)(iVar1 + 0x1e4));
  FUN_4a0a8b14(piVar6,*(undefined4 *)(iVar1 + 0x1b8));
  (**(code **)(*piVar6 + 0x30))(piVar6);
  (**(code **)(*param_1 + 0x9c))(param_1,uVar2,uVar3,uVar4,uVar5);
  iVar10 = *(int *)(*(int *)(iVar1 + 0x1bc) + 0xdc);
  if (iVar10 != 0) {
    for (iVar10 = *(int *)(iVar10 + 0x10); 0 < iVar10; iVar10 = *(int *)(iVar10 + 0x10)) {
      FUN_4a0b4ac8(*(int *)(iVar1 + 0x1bc),
                   **(undefined4 **)(*(int *)(*(int *)(iVar1 + 0x1bc) + 0xdc) + 0x14));
      iVar10 = *(int *)(*(int *)(iVar1 + 0x1bc) + 0xdc);
      if (iVar10 == 0) break;
    }
  }
  puVar7 = (undefined4 *)FUN_4a0c6bc0(&puStack_34);
  *puVar7 = PTR_PTR_4a09f65c;
  puVar7[2] = *(undefined4 *)(iVar1 + 0x198);
  piVar6 = *(int **)(iVar1 + 0x19c);
  puVar7[3] = piVar6;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))();
  }
  iVar10 = local_2c;
  puStack_34 = PTR_PTR_4a09f660;
  iVar8 = 0;
  *puVar7 = PTR_PTR_4a09f660;
  if (0 < (int)puVar7[2]) {
    do {
      if (puVar7[3] == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(puVar7[3] + 8);
      }
      *(undefined2 *)(iVar9 + iVar8 * 2) = 0;
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)puVar7[2]);
  }
  iVar8 = FUN_4a0bcc84(&puStack_34);
  if (iVar8 != 0) {
    iVar9 = 0;
    if (0 < iVar10) {
      do {
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar10);
      if (iVar8 == 0) goto LAB_4a09f638;
    }
    FUN_4a14f21c();
  }
LAB_4a09f638:
  FUN_4a0c6bf4(&puStack_34);
  *(undefined4 *)(iVar1 + 0x1ec) = 0xc2480000;
  *(undefined4 *)(iVar1 + 0x1f0) = 0;
  return;
}



// Address: 4a08b3a0

void FUN_4a08b3a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  
  iVar1 = FUN_4a0ff494();
  iVar10 = iVar1 + 0x128;
  uVar2 = FUN_4a171fac(param_2);
  uVar2 = FUN_4a171a94(uVar2,0x425c0000);
  uVar3 = FUN_4a171fac(param_3);
  uVar3 = FUN_4a171a94(uVar3,0x41b00000);
  uVar4 = FUN_4a171fac(param_4);
  uVar4 = FUN_4a1725c0(uVar4,0x42b40000);
  uVar5 = FUN_4a171fac(param_5);
  uVar5 = FUN_4a1725c0(uVar5,0x42480000);
  uVar6 = FUN_4a09f9c8(iVar10,0x71);
  FUN_4a0a07ac(iVar10,0x71,uVar2,uVar3,uVar4,uVar6,0x3f800000,0);
  uVar7 = FUN_4a1725c0(uVar4,0x41a00000);
  uVar8 = FUN_4a09f9c8(iVar10,0x70);
  uVar9 = FUN_4a1725c0(uVar4,uVar7);
  uVar9 = FUN_4a17295c(uVar9,0xffffffff);
  uVar9 = FUN_4a171a94(uVar9,uVar2);
  uVar5 = FUN_4a171a94(uVar3,uVar5);
  uVar5 = FUN_4a1725c0(uVar5,uVar8);
  FUN_4a0a07ac(iVar10,0x70,uVar9,uVar5,uVar7,uVar8,0x3f800000,0);
  FUN_4a09f3a4(iVar10,param_1);
  uVar4 = FUN_4a17295c(uVar4,0xffffffff);
  FUN_4a171a94(uVar4,uVar2);
  uVar2 = FUN_4a171e1c();
  uVar4 = FUN_4a17295c(uVar6,0xffffffff);
  uVar3 = FUN_4a171a94(uVar4,uVar3);
  FUN_4a1725c0(uVar3,0x40800000);
  uVar3 = FUN_4a171e1c();
  FUN_4a06b074(iVar1 + 0x278,param_1,param_6,6,uVar2,uVar3,0x12);
  return;
}



// Address: 4a08b55c

/* WARNING: Removing unreachable block (ram,0x4a0fae9c) */
/* WARNING: Removing unreachable block (ram,0x4a0faea0) */

void FUN_4a08b55c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x74) = param_2;
  switch(param_2) {
  case 0:
    iVar1 = FUN_4a134aa8(param_1);
    if (*(int *)(iVar1 + 0x40) == param_1) {
      *(undefined4 *)(iVar1 + 0x40) = 0;
    }
    return;
  case 1:
    uVar2 = FUN_4a134aa8(param_1);
    FUN_4a0cd790(uVar2,param_1);
    uVar2 = 0;
    break;
  case 2:
  case 3:
  case 4:
    uVar2 = FUN_4a134aa8(param_1);
    FUN_4a0cd790(uVar2,param_1);
    uVar2 = 1;
    break;
  default:
    return;
  }
  *(undefined4 *)(param_1 + 0xac) = uVar2;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  switch(uVar2) {
  case 0:
    uVar2 = 400;
    break;
  case 1:
    uVar2 = 300;
    break;
  default:
    goto switchD_4a0faeb8_default;
  }
  *(undefined4 *)(param_1 + 0xb4) = uVar2;
switchD_4a0faeb8_default:
  *(undefined4 *)(param_1 + 0xb8) = 3;
  return;
}



// Address: 4a08b5ec

void FUN_4a08b5ec(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  uint uVar19;
  int *piVar20;
  int iVar21;
  uint uVar22;
  undefined4 uVar23;
  uint uVar24;
  undefined4 uVar25;
  undefined1 uVar26;
  bool bVar27;
  
  FUN_4a134a98(param_1,1);
  iVar1 = FUN_4a0ff494();
  iVar2 = iVar1 + 0x128;
  FUN_4a13ca78(iVar1);
  uVar3 = FUN_4a171fac();
  uVar3 = FUN_4a1725c0(uVar3,0x43b40000);
  uVar3 = FUN_4a17295c(uVar3,0xffffffff);
  FUN_4a13caa0(iVar1);
  uVar4 = FUN_4a171fac();
  uVar4 = FUN_4a1725c0(uVar4,0x437a0000);
  uVar4 = FUN_4a17295c(uVar4,0xffffffff);
  uVar5 = FUN_4a171e1c();
  uVar6 = FUN_4a171e1c(uVar3);
  FUN_4a08b18c(param_2,uVar6,uVar5,0x168,0xfa,2);
  uVar3 = FUN_4a171a94(uVar3,0x425c0000);
  uVar4 = FUN_4a171a94(uVar4,0x41b00000);
  if (*(int *)(param_1 + 0x84) == 0) {
    puVar7 = (uint *)0x0;
  }
  else {
    puVar7 = *(uint **)(*(int *)(param_1 + 0x84) + 8);
  }
  uVar24 = *puVar7;
  uVar8 = FUN_4a171a94(uVar3,0x43070000);
  uVar9 = FUN_4a171a94(uVar8,0x42c80000);
  uVar10 = FUN_4a1725c0(uVar8,0x42c80000);
  uVar11 = FUN_4a171a94(uVar4,0x43480000);
  uVar11 = FUN_4a1725c0(uVar11,0x43230000);
  uVar12 = FUN_4a09f9c8(iVar2,0x7e);
  uVar13 = FUN_4a1725c0(uVar8,0x42f30000);
  iVar21 = 0;
  if (0 < (int)uVar24) {
    uVar14 = FUN_4a1725c0(uVar11,0x41bc0000);
    do {
      uVar26 = 1;
      iVar15 = 0;
      if (*(int *)(param_1 + 0x84) != 0) {
        iVar15 = *(int *)(*(int *)(param_1 + 0x84) + 8);
      }
      uVar23 = *(undefined4 *)(iVar15 + (iVar21 + 5) * 4);
      uVar16 = FUN_4a171fac(iVar21);
      uVar16 = FUN_4a17211c(uVar16,0x423c0000);
      uVar17 = FUN_4a171a94(*(undefined4 *)(param_1 + 0x44),uVar11);
      uVar16 = FUN_4a171a94(uVar17,uVar16);
      uVar16 = FUN_4a171a94(uVar16,0x41bc0000);
      FUN_4a172458(uVar14,uVar16);
      if ((bool)uVar26) {
        uVar17 = FUN_4a171a94(uVar11,0x43230000);
        uVar17 = FUN_4a171a94(uVar17,0x41bc0000);
        FUN_4a1720a0(uVar17,uVar16);
        if ((bool)uVar26) {
          iVar18 = FUN_4a0fd380(iVar1,uVar23);
          iVar15 = 0;
          if (*(int *)(param_1 + 0x84) != 0) {
            iVar15 = *(int *)(*(int *)(param_1 + 0x84) + 8);
          }
          if (*(int *)(iVar15 + 4) == 1) {
            iVar15 = FUN_4a06c6c8(iVar1 + 0x278);
            if (iVar15 == iVar21) {
              iVar18 = 2;
            }
            else {
              iVar18 = 3;
            }
LAB_4a08b858:
            uVar17 = 0x74;
            if (iVar18 == 1 || iVar18 == 2) {
              uVar17 = 0x72;
            }
            iVar15 = -1;
            if (iVar18 == 0) {
              iVar15 = 0x73;
            }
            else if (iVar18 == 1) {
              iVar15 = 0x75;
            }
            uVar23 = 0x3f800000;
            uVar25 = 0x3f800000;
            if (*(int *)(param_1 + 0xa0) == iVar21) {
              iVar18 = *(int *)(param_1 + 0x74);
              if (iVar18 == 2 || iVar18 == 4) {
                uVar23 = FUN_4a0fb0c0(param_1 + 0xac);
              }
              else if (iVar18 == 3) {
                uVar25 = FUN_4a0fb0c0(param_1 + 0xac);
              }
            }
            FUN_4a09f664(iVar2,uVar17,uVar9,uVar16,0x3f800000,uVar23,uVar23,0);
            if (iVar15 != -1) {
              FUN_4a09f664(iVar2,iVar15,uVar10,uVar16,0x3f800000,uVar25,uVar25,0);
            }
          }
          else if (iVar18 != -1) goto LAB_4a08b858;
          iVar15 = *(int *)(param_1 + 0xa0);
          bVar27 = iVar15 == iVar21;
          if (bVar27) {
            iVar15 = *(int *)(param_1 + 0x74);
          }
          if (bVar27 && iVar15 == 1) {
            FUN_4a0fb0c0(param_1 + 0xac);
          }
          uVar17 = FUN_4a17295c(uVar12,0xffffffff);
          uVar16 = FUN_4a171a94(uVar16,0x41bc0000);
          uVar16 = FUN_4a1725c0(uVar16,uVar17);
          FUN_4a0a07ac(iVar2,0x7e,uVar13,uVar16,0x43730000,uVar12,0x3f800000,0);
        }
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 < (int)uVar24);
  }
  uVar9 = (**(code **)(*param_2 + 0x74))(param_2);
  uVar10 = (**(code **)(*param_2 + 0x78))(param_2);
  uVar12 = (**(code **)(*param_2 + 0x70))(param_2);
  uVar13 = (**(code **)(*param_2 + 0x6c))(param_2);
  uVar14 = FUN_4a171e1c(uVar11);
  (**(code **)(*param_2 + 0x9c))(param_2,uVar9,uVar14,uVar12,0xa3);
  FUN_4a09f3a4(iVar2,param_2);
  uVar26 = 1;
  uVar22 = 0;
  if (0 < (int)uVar24) {
    uVar16 = FUN_4a1725c0(uVar11,0x41bc0000);
    do {
      uVar17 = FUN_4a171fac(uVar22);
      uVar17 = FUN_4a17211c(uVar17,0x423c0000);
      uVar23 = FUN_4a171a94(*(undefined4 *)(param_1 + 0x44),uVar11);
      uVar17 = FUN_4a171a94(uVar23,uVar17);
      uVar17 = FUN_4a171a94(uVar17,0x41bc0000);
      FUN_4a172458(uVar16,uVar17);
      if ((bool)uVar26) {
        uVar23 = FUN_4a171a94(uVar11,0x43230000);
        uVar23 = FUN_4a171a94(uVar23,0x41bc0000);
        FUN_4a1720a0(uVar23,uVar17);
        if ((bool)uVar26) {
          uVar19 = *(uint *)(param_1 + 0xa0);
          bVar27 = uVar19 != uVar22;
          if (!bVar27) {
            uVar19 = *(uint *)(param_1 + 0x74);
          }
          if ((bVar27 || uVar19 != 1) ||
             (iVar21 = FUN_4a0fb0c0(param_1 + 0xac), 0x3effffff < iVar21)) {
            if (*(int *)(param_1 + 0x94) == 0) {
              if (*(int *)(param_1 + 0x84) == 0) {
                iVar21 = 0;
              }
              else {
                iVar21 = *(int *)(*(int *)(param_1 + 0x84) + 8);
              }
              uVar25 = *(undefined4 *)(iVar21 + (uVar22 + 5) * 4);
              uVar17 = FUN_4a171e1c(uVar17);
              uVar23 = FUN_4a171e1c(uVar8);
              FUN_4a06b074(iVar1 + 0x278,param_2,uVar25,4,uVar23,uVar17,0x12);
            }
            else {
              if (*(int *)(param_1 + 0x98) == 0) {
                iVar21 = 0;
              }
              else {
                iVar21 = *(int *)(*(int *)(param_1 + 0x98) + 8);
              }
              piVar20 = *(int **)(iVar21 + uVar22 * 4);
              if (piVar20 != (int *)0x0) {
                (**(code **)(*piVar20 + 0xc))();
              }
              uVar17 = FUN_4a171e1c(uVar17);
              uVar23 = FUN_4a171e1c(uVar8);
              FUN_4a06b02c(iVar1 + 0x278,param_2,piVar20,4,uVar23,uVar17,0x12);
              if ((piVar20 != (int *)0x0) &&
                 (iVar21 = (**(code **)(*piVar20 + 8))(piVar20), iVar21 != 0)) {
                (**(code **)(*piVar20 + 4))(piVar20);
              }
            }
          }
        }
      }
      uVar22 = uVar22 + 1;
      uVar26 = uVar24 <= uVar22;
    } while ((int)uVar22 < (int)uVar24);
  }
  (**(code **)(*param_2 + 0x9c))(param_2,uVar9,uVar10,uVar12,uVar13);
  uVar8 = FUN_4a171a94(uVar3,0x43870000);
  uVar8 = FUN_4a1725c0(uVar8,0x41200000);
  uVar4 = FUN_4a171a94(uVar4,0x42140000);
  uVar4 = FUN_4a171a94(uVar4,0x41200000);
  uVar4 = FUN_4a171a94(uVar4,0x42850000);
  uVar9 = FUN_4a171fac(uVar24);
  FUN_4a17211c(uVar9,0x423c0000);
  uVar24 = *(uint *)(param_1 + 0x44);
  uVar9 = FUN_4a171e1c();
  uVar10 = FUN_4a171e1c(uVar24 ^ 0x80000000);
  FUN_4a08c638(param_1,iVar2,uVar10,0xa3,uVar9,uVar8,uVar4,0x43050000);
  FUN_4a09f3a4(iVar2,param_2);
  iVar1 = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x84) + 8);
  }
  FUN_4a08b3a0(param_2,uVar6,uVar5,0x168,0xfa,*(undefined4 *)(iVar1 + 4));
  piVar20 = (int *)0x0;
  if (*(int *)(param_1 + 0x84) != 0) {
    piVar20 = *(int **)(*(int *)(param_1 + 0x84) + 8);
  }
  uVar4 = FUN_4a171fac(-*piVar20);
  uVar4 = FUN_4a17211c(uVar4,0x423c0000);
  uVar4 = FUN_4a171a94(uVar4,0x43230000);
  FUN_4a08c614(param_1,uVar4,0);
  uVar3 = FUN_4a171e1c(uVar3);
  FUN_4a08c230(param_1,uVar3,uVar14,0x10e,0xa3);
  *(undefined4 *)(param_1 + 0xa4) = uVar3;
  *(undefined4 *)(param_1 + 0xa8) = uVar14;
  return;
}



// Address: 4a08bd80

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a08bd80(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_20 [12];
  int iStack_14;
  
  FUN_4a08cb50();
  switch(*(undefined4 *)(param_1 + 0x74)) {
  default:
    return;
  case 1:
  case 2:
  case 3:
  case 4:
    break;
  }
  FUN_4a0faf18(param_1 + 0xac,param_2);
  if ((*(uint *)(param_1 + 0xb8) & 2) != 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x84);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
  }
  iVar5 = 0;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 0xa0);
  iVar2 = -1;
  if (*(int *)(param_1 + 0x74) == 1) {
    if (*(int *)(param_1 + 0x84) != 0) {
      iVar5 = *(int *)(*(int *)(param_1 + 0x84) + 8);
    }
    iVar2 = *(int *)(iVar5 + (*(int *)(param_1 + 0xa0) + 5) * 4);
  }
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  FUN_4a08b55c(param_1,0);
  if (iVar2 != -1 && iVar2 != 0x849) {
    piVar3 = (int *)FUN_4a134aa8(param_1);
    FUN_4a16be24(auStack_20,3);
    iVar1 = 0;
    if (iStack_14 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iStack_14 + 8);
    }
    *(undefined4 *)(iVar5 + 4) = 0;
    if (iStack_14 == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = *(undefined4 **)(iStack_14 + 8);
    }
    *puVar4 = 0x80000000;
    if (iStack_14 != 0) {
      iVar1 = *(int *)(iStack_14 + 8);
    }
    *(int *)(iVar1 + 8) = iVar2;
    (**(code **)(*piVar3 + 0x20))(piVar3,0xb,auStack_20);
    FUN_4a16bef4(auStack_20);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a08be38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a08be58

void FUN_4a08be58(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_28 [8];
  undefined4 local_20;
  int *local_1c;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0(auStack_28);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = PTR_PTR_4a08bf4c;
  uVar3 = *(undefined4 *)(param_2 + 8);
  piVar2 = *(int **)(param_2 + 0xc);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))(piVar2);
  }
  (**(code **)(*(int *)(param_1 + 0x78) + 0x1c))((int *)(param_1 + 0x78));
  *(undefined4 *)(param_1 + 0x80) = uVar3;
  *(int **)(param_1 + 0x84) = piVar2;
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 0xc))(local_1c);
  }
  (**(code **)(*(int *)(param_1 + 0x8c) + 0x1c))((int *)(param_1 + 0x8c));
  *(undefined4 *)(param_1 + 0x94) = local_20;
  *(int **)(param_1 + 0x98) = local_1c;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  FUN_4a08c62c(param_1,0);
  FUN_4a08c608(param_1,1);
  FUN_4a08b55c(param_1,0);
  FUN_4a169628(auStack_28);
  return;
}



// Address: 4a08bf50

/* WARNING: Removing unreachable block (ram,0x4a08b570) */

void FUN_4a08bf50(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_2 + 8);
  piVar1 = *(int **)(param_2 + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  (**(code **)(*(int *)(param_1 + 0x78) + 0x1c))((int *)(param_1 + 0x78));
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  *(int **)(param_1 + 0x84) = piVar1;
  uVar2 = *(undefined4 *)(param_3 + 8);
  piVar1 = *(int **)(param_3 + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  (**(code **)(*(int *)(param_1 + 0x8c) + 0x1c))((int *)(param_1 + 0x8c));
  *(undefined4 *)(param_1 + 0x94) = uVar2;
  *(int **)(param_1 + 0x98) = piVar1;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  FUN_4a08c62c(param_1,0);
  FUN_4a08c608(param_1,1);
  *(undefined4 *)(param_1 + 0x74) = 0;
                    /* WARNING: Could not recover jumptable at 0x4a08b56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)switchD_4a08b56c::switchdataD_4a08b574)();
  return;
}



// Address: 4a08c014

int FUN_4a08c014(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)FUN_4a08cd00();
  puVar1 = PTR_PTR_4a08c0bc;
  *puVar2 = PTR_PTR_4a08c0bc;
  puVar2[4] = puVar1 + 100;
  puVar2[6] = puVar1 + 0x84;
  puVar2[7] = puVar1 + 0x94;
  puVar2[8] = puVar1 + 0xa4;
  puVar2[5] = puVar1 + 0x74;
  puVar2[3] = puVar1 + 0x54;
  puVar2[2] = puVar1 + 0x44;
  puVar2[9] = puVar1 + 0xb4;
  puVar2[0x1d] = 0;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(puVar2 + 0x1e);
  puVar1 = PTR_PTR_4a08c0c0;
  puVar2[2] = 0;
  *puVar2 = puVar1;
  puVar2[3] = 0;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(puVar2 + 5);
  puVar1 = PTR_PTR_4a08c0c4;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = puVar1;
  puVar2[5] = 0xffffffff;
  puVar2[6] = 0;
  puVar2[7] = 0;
  iVar3 = FUN_4a0fb394(puVar2 + 8);
  return iVar3 + -0xac;
}



// Address: 4a08c0e0

void FUN_4a08c0e0(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  puVar3 = PTR_PTR_4a08c1fc;
  *param_1 = PTR_PTR_4a08c1fc;
  param_1[4] = puVar3 + 100;
  param_1[6] = puVar3 + 0x84;
  param_1[7] = puVar3 + 0x94;
  param_1[8] = puVar3 + 0xa4;
  param_1[5] = puVar3 + 0x74;
  param_1[3] = puVar3 + 0x54;
  param_1[2] = puVar3 + 0x44;
  param_1[9] = puVar3 + 0xb4;
  iVar2 = FUN_4a169628(param_1 + 0x23);
  puVar3 = PTR_PTR_4a08c200;
  *(undefined4 *)(iVar2 + -0x14) = PTR_PTR_4a08c200;
  iVar5 = *(int *)(iVar2 + -0xc);
  piVar6 = *(int **)(iVar2 + -8);
  if (piVar6 != (int *)0x0) {
    iVar7 = piVar6[2];
    puVar3 = (undefined *)(uint)*(byte *)(piVar6 + 5);
  }
  else {
    iVar7 = 0;
  }
  *(undefined4 *)(iVar2 + -8) = 0;
  *(undefined4 *)(iVar2 + -0xc) = 0;
  if ((piVar6 == (int *)0x0) || (iVar4 = (**(code **)(*piVar6 + 8))(piVar6), iVar4 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar6 + 4))(piVar6);
    bVar1 = 1;
  }
  iVar4 = 0;
  if ((bool)(bVar1 & (piVar6 != (int *)0x0 && puVar3 != (undefined *)0x0))) {
    iVar4 = iVar7;
  }
  if (iVar4 != 0) {
    iVar7 = 0;
    if (0 < iVar5) {
      do {
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar5);
      if (iVar4 == 0) goto LAB_4a08c1e8;
    }
    FUN_4a14f21c();
  }
LAB_4a08c1e8:
  iVar2 = FUN_4a0c6bf4((undefined4 *)(iVar2 + -0x14));
  *(undefined **)(iVar2 + -0x78) = PTR_PTR_4a0c0674;
  *(undefined4 *)(iVar2 + -0x74) = 0xffffffff;
  return;
}



// Address: 4a08c204

bool FUN_4a08c204(int param_1)

{
  undefined1 in_CY;
  
  FUN_4a172458(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
  return !(bool)in_CY;
}



// Address: 4a08c230

void FUN_4a08c230(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x34) = param_3;
  *(undefined4 *)(param_1 + 0x38) = param_4;
  *(undefined4 *)(param_1 + 0x3c) = param_5;
  return;
}



// Address: 4a08c244

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a08c244(int *param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar12;
  bool bVar13;
  
  iVar10 = 0;
  if (param_2 == 0xb) {
    iVar2 = *(int *)(param_3 + 0xc);
    if (iVar2 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(iVar2 + 8);
    }
    if (0 < *(int *)(iVar7 + 4)) {
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + 8);
      }
      uVar8 = *(uint *)(iVar2 + 4);
      iVar2 = 0;
      if ((uVar8 & 0x8010) == 0) {
        if ((uVar8 & 0x10040) != 0) {
          iVar2 = 1;
        }
      }
      else {
        iVar2 = -1;
      }
      bVar13 = (uVar8 & 0x2004) != 0;
      uVar3 = (uint)bVar13;
      if ((!bVar13) && ((uVar8 & 0x4100) != 0)) {
        uVar3 = 0xffffffff;
      }
      if (iVar2 != 0 || uVar3 != 0) {
        uVar12 = 1;
        if ((char)param_1[0x10] != '\0') {
          uVar4 = FUN_4a171fac();
          uVar4 = FUN_4a17211c(uVar4,0x42480000);
          iVar10 = FUN_4a171a94(uVar4,param_1[0x11]);
          param_1[0x15] = iVar10;
          FUN_4a172458(iVar10,param_1[0x13]);
          if ((bool)uVar12) {
            FUN_4a172458(param_1[0x15],param_1[0x12]);
            if ((bool)uVar12) {
              iVar10 = param_1[0x12];
            }
            else {
              iVar10 = param_1[0x15];
            }
            param_1[0x15] = iVar10;
          }
          else {
            param_1[0x15] = param_1[0x13];
          }
        }
        uVar12 = 1;
        if ((char)param_1[0x16] != '\0') {
          uVar4 = FUN_4a171fac(iVar2);
          uVar4 = FUN_4a17211c(uVar4,param_1[0x1a]);
          iVar10 = FUN_4a1724e0(uVar4,param_1[0x17]);
          param_1[0x1c] = iVar10;
          FUN_4a172458(iVar10,param_1[0x19]);
          if ((bool)uVar12) {
            FUN_4a172458(param_1[0x1c],param_1[0x18]);
            if ((bool)uVar12) {
              iVar10 = param_1[0x18];
            }
            else {
              iVar10 = param_1[0x1c];
            }
            param_1[0x1c] = iVar10;
            return;
          }
          param_1[0x1c] = param_1[0x19];
                    /* WARNING: Could not recover jumptable at 0x4a08c380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
        return;
      }
    }
  }
  iVar2 = param_1[0xb];
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      if (param_2 != 5) {
        if (param_2 != 6) {
          return;
        }
        iVar10 = 0;
        goto code_r0x4a08cac0;
      }
      iVar2 = *(int *)(param_3 + 0xc);
      bVar13 = iVar2 != 0;
      if (bVar13) {
        iVar7 = *(int *)(iVar2 + 8);
      }
      else {
        iVar7 = 0;
      }
      if (bVar13) {
        iVar11 = *(int *)(iVar2 + 8);
      }
      else {
        iVar11 = 0;
      }
      if (bVar13) {
        iVar9 = *(int *)(iVar2 + 8);
        iVar10 = *(int *)(iVar2 + 8);
      }
      else {
        iVar9 = 0;
      }
      iVar2 = *(int *)(iVar7 + 4) - *(int *)(iVar9 + 0x14);
      iVar10 = *(int *)(iVar11 + 8) - *(int *)(iVar10 + 0x18);
      if (iVar2 == 0 && iVar10 == 0) {
        return;
      }
      if (iVar2 <= -iVar2) {
        iVar2 = -iVar2;
      }
      if (iVar10 <= -iVar10) {
        iVar10 = -iVar10;
      }
      if (iVar2 <= iVar10) {
        if ((char)param_1[0x10] == '\0') {
          return;
        }
        FUN_4a08cac0(param_1,2);
        goto LAB_4a08c528;
      }
      if ((char)param_1[0x16] == '\0') {
        return;
      }
      FUN_4a08cac0(param_1,3);
    }
    else {
      if (iVar2 == 2) {
LAB_4a08c528:
        iVar10 = DAT_4a08cabc;
        if (param_2 == 5) {
          iVar10 = *(int *)(param_3 + 0xc);
          iVar2 = 0;
          uVar12 = 1;
          if (iVar10 == 0) {
            iVar7 = 0;
            iVar10 = 0;
          }
          else {
            iVar7 = *(int *)(iVar10 + 8);
            iVar10 = *(int *)(iVar10 + 8);
          }
          uVar4 = FUN_4a171fac(*(int *)(iVar10 + 0x18) - *(int *)(iVar7 + 8));
          iVar10 = FUN_4a171a94(uVar4,param_1[0x11]);
          iVar7 = param_1[0x13];
          FUN_4a1720a0(iVar10,iVar7);
          if ((bool)uVar12) {
            iVar10 = iVar7;
          }
          iVar7 = param_1[0x12];
          FUN_4a172458(iVar10,iVar7);
          if ((bool)uVar12) {
            iVar10 = iVar7;
          }
          param_1[0x11] = iVar10;
          param_1[0x15] = iVar10;
          if (*(int *)(param_3 + 0xc) != 0) {
            iVar2 = *(int *)(*(int *)(param_3 + 0xc) + 8);
          }
          uVar5 = FUN_4a171fac(*(undefined4 *)(iVar2 + 0x24));
          iVar10 = FUN_4a171bb8(uVar4,uVar5);
          param_1[0x14] = iVar10;
          return;
        }
        bVar13 = 5 < param_2;
        if (param_2 == 6) {
          uVar8 = param_1[0x14];
          FUN_4a1720a0(uVar8 ^ 0x80000000,uVar8);
          if (bVar13) {
            uVar8 = uVar8 ^ 0x80000000;
          }
          if (iVar10 < (int)uVar8) {
            uVar4 = FUN_4a17211c(param_1[0x14],0x43160000);
            uVar4 = FUN_4a171a94(param_1[0x11],uVar4);
            iVar10 = FUN_4a0d4b38(uVar4,param_1[0x12],param_1[0x13]);
            param_1[0x15] = iVar10;
          }
          FUN_4a08cac0(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x4a08cab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x2c))(param_1);
          return;
        }
        return;
      }
      if (iVar2 != 3) {
        return;
      }
    }
    iVar10 = DAT_4a08c990;
    if (param_2 != 5) {
      bVar13 = 5 < param_2;
      if (param_2 == 6) {
        uVar8 = param_1[0x1b];
        FUN_4a1720a0(uVar8 ^ 0x80000000,uVar8);
        if (bVar13) {
          uVar8 = uVar8 ^ 0x80000000;
        }
        if (iVar10 < (int)uVar8) {
          uVar8 = FUN_4a17211c(param_1[0x1b],0x42340000);
          bVar13 = true;
          if (((int)uVar8 < 1) || (FUN_4a1720a0(uVar8,param_1[0x1a]), bVar13)) {
            bVar13 = 0x7fffffff < uVar8;
            if ((0x80000000 < uVar8) && (FUN_4a1720a0(param_1[0x1a] ^ 0x80000000,uVar8), !bVar13)) {
              uVar8 = param_1[0x1a] ^ 0x80000000;
            }
          }
          else {
            uVar8 = param_1[0x1a];
          }
          uVar4 = FUN_4a171a94(param_1[0x17],uVar8);
          iVar10 = FUN_4a08c744(param_1,uVar4);
          param_1[0x1c] = iVar10;
        }
        FUN_4a08cac0(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x4a08c98c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34))(param_1);
        return;
      }
      return;
    }
    iVar10 = *(int *)(param_3 + 0xc);
    iVar2 = 0;
    uVar12 = 1;
    if (iVar10 == 0) {
      iVar7 = 0;
      iVar10 = 0;
    }
    else {
      iVar7 = *(int *)(iVar10 + 8);
      iVar10 = *(int *)(iVar10 + 8);
    }
    iVar7 = *(int *)(iVar7 + 4);
    iVar10 = *(int *)(iVar10 + 0x14);
    iVar11 = param_1[0x17];
    uVar4 = FUN_4a171e1c(iVar11);
    uVar5 = FUN_4a171fac(iVar10 - iVar7);
    iVar10 = FUN_4a171a94(uVar5,iVar11);
    iVar7 = param_1[0x19];
    FUN_4a1720a0(iVar10,iVar7);
    if ((bool)uVar12) {
      iVar10 = iVar7;
    }
    iVar7 = param_1[0x18];
    FUN_4a172458(iVar10,iVar7);
    if ((bool)uVar12) {
      iVar10 = iVar7;
    }
    param_1[0x17] = iVar10;
    param_1[0x1c] = iVar10;
    uVar12 = *(int *)(param_3 + 0xc) == 0;
    if (!(bool)uVar12) {
      iVar2 = *(int *)(*(int *)(param_3 + 0xc) + 8);
    }
    uVar6 = FUN_4a171fac(*(undefined4 *)(iVar2 + 0x24));
    iVar2 = FUN_4a171bb8(uVar5,uVar6);
    param_1[0x1b] = iVar2;
    uVar4 = FUN_4a171fac(uVar4);
    uVar4 = FUN_4a08c744(param_1,uVar4);
    uVar5 = FUN_4a08c744(param_1,iVar10);
    FUN_4a171da0(uVar4,uVar5);
    if (!(bool)uVar12) {
                    /* WARNING: Could not recover jumptable at 0x4a08c8d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x38))(param_1);
      return;
    }
    return;
  }
  if (param_2 != 4) {
    return;
  }
  cVar1 = (char)param_1[0x10];
  bVar13 = cVar1 == '\0';
  if (bVar13) {
    cVar1 = (char)param_1[0x16];
  }
  if (bVar13 && cVar1 == '\0') {
    return;
  }
  iVar2 = *(int *)(param_3 + 0xc);
  if (iVar2 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(iVar2 + 8);
    iVar10 = *(int *)(iVar2 + 8);
  }
  iVar10 = FUN_4a134a60(*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar10 + 8),param_1[0xc],
                        param_1[0xd]);
  if (iVar10 == 0) {
    return;
  }
  iVar10 = 1;
code_r0x4a08cac0:
  param_1[0xb] = iVar10;
  if (iVar10 == 0) {
    iVar10 = FUN_4a134aa8(param_1);
    if (*(int **)(iVar10 + 0x40) == param_1) {
      *(undefined4 *)(iVar10 + 0x40) = 0;
    }
    return;
  }
  if (iVar10 == 1) {
    return;
  }
  if (iVar10 == 2) {
    uVar4 = FUN_4a134aa8(param_1);
    FUN_4a0cd790(uVar4,param_1);
                    /* WARNING: Could not recover jumptable at 0x4a08cb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1);
    return;
  }
  if (iVar10 == 3) {
    uVar4 = FUN_4a134aa8(param_1);
    FUN_4a0cd790(uVar4,param_1);
                    /* WARNING: Could not recover jumptable at 0x4a08cb14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))(param_1);
    return;
  }
  return;
}



// Address: 4a08c564

/* WARNING: Removing unreachable block (ram,0x4a08cb2c) */
/* WARNING: Removing unreachable block (ram,0x4a08caf4) */
/* WARNING: Removing unreachable block (ram,0x4a08cad4) */
/* WARNING: Removing unreachable block (ram,0x4a08cad8) */
/* WARNING: Removing unreachable block (ram,0x4a08cadc) */
/* WARNING: Removing unreachable block (ram,0x4a08cae0) */
/* WARNING: Removing unreachable block (ram,0x4a08cae8) */
/* WARNING: Removing unreachable block (ram,0x4a08caec) */
/* WARNING: Removing unreachable block (ram,0x4a08caf0) */

void FUN_4a08c564(int param_1,undefined1 param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x58) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  iVar1 = FUN_4a134aa8(param_1);
  if (*(int *)(iVar1 + 0x40) == param_1) {
    *(undefined4 *)(iVar1 + 0x40) = 0;
  }
  return;
}



// Address: 4a08c570

int FUN_4a08c570(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x68);
  uVar2 = FUN_4a17295c(uVar1,0xffffffff);
  if (param_2 < 1) {
    uVar2 = FUN_4a1724e0(uVar2,param_2);
    FUN_4a171bb8(uVar2,uVar1);
    iVar3 = FUN_4a171e1c();
  }
  else {
    uVar2 = FUN_4a171a94();
    FUN_4a171bb8(uVar2,uVar1);
    iVar3 = FUN_4a171e1c();
  }
  FUN_4a171bb8(*(undefined4 *)(param_1 + 0x60),uVar1);
  iVar4 = FUN_4a171e1c();
  FUN_4a171bb8(*(undefined4 *)(param_1 + 100),uVar1);
  iVar5 = FUN_4a171e1c();
  if (iVar5 < iVar3) {
    iVar3 = iVar5;
  }
  if (iVar3 < iVar4) {
    iVar3 = iVar4;
  }
  return iVar3;
}



// Address: 4a08c5fc

void FUN_4a08c5fc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x60) = param_2;
  *(undefined4 *)(param_1 + 100) = param_3;
  *(undefined4 *)(param_1 + 0x68) = param_4;
  return;
}



// Address: 4a08c608

/* WARNING: Removing unreachable block (ram,0x4a08cb2c) */
/* WARNING: Removing unreachable block (ram,0x4a08caf4) */
/* WARNING: Removing unreachable block (ram,0x4a08cad4) */
/* WARNING: Removing unreachable block (ram,0x4a08cad8) */
/* WARNING: Removing unreachable block (ram,0x4a08cadc) */
/* WARNING: Removing unreachable block (ram,0x4a08cae0) */
/* WARNING: Removing unreachable block (ram,0x4a08cae8) */
/* WARNING: Removing unreachable block (ram,0x4a08caec) */
/* WARNING: Removing unreachable block (ram,0x4a08caf0) */

void FUN_4a08c608(int param_1,undefined1 param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x40) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  iVar1 = FUN_4a134aa8(param_1);
  if (*(int *)(iVar1 + 0x40) == param_1) {
    *(undefined4 *)(iVar1 + 0x40) = 0;
  }
  return;
}



// Address: 4a08c614

void FUN_4a08c614(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  *(undefined4 *)(param_1 + 0x4c) = param_3;
  return;
}



// Address: 4a08c62c

void FUN_4a08c62c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x44) = param_2;
  *(undefined4 *)(param_1 + 0x54) = param_2;
  return;
}



// Address: 4a08c638

void FUN_4a08c638(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar3;
  
  uVar1 = FUN_4a171fac(param_5);
  iVar3 = param_5;
  if (param_4 < param_5) {
    iVar3 = param_4;
  }
  uVar2 = FUN_4a171fac(iVar3);
  uVar2 = FUN_4a17211c(uVar2,param_8);
  uVar1 = FUN_4a171bb8(uVar2,uVar1);
  uVar2 = FUN_4a17295c(param_8,0xffffffff);
  uVar4 = FUN_4a17295c(uVar1,0xffffffff);
  uVar5 = FUN_4a171fac(param_5 - param_4);
  uVar6 = FUN_4a171fac(param_3);
  uVar7 = FUN_4a1725c0(param_8,uVar1);
  uVar6 = FUN_4a17211c(uVar7,uVar6);
  uVar5 = FUN_4a171bb8(uVar6,uVar5);
  uVar5 = FUN_4a171a94(uVar5,param_7);
  uVar4 = FUN_4a171a94(uVar5,uVar4);
  uVar2 = FUN_4a1725c0(uVar4,uVar2);
  FUN_4a0a050c(param_2,0x80,0x81,0x82,param_6,param_7,param_8,0x3f800000);
  FUN_4a0a050c(param_2,0x83,0x84,0x85,param_6,uVar2,uVar1,0x3f800000);
  return;
}



// Address: 4a08c744

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

ulonglong FUN_4a08c744(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  
  uVar2 = *(undefined4 *)(param_1 + 0x68);
  uVar3 = FUN_4a17295c(uVar2,0xffffffff);
  if (param_2 < 1) {
    uVar3 = FUN_4a1724e0(uVar3,param_2);
    FUN_4a171bb8(uVar3,uVar2);
    uVar3 = FUN_4a171e1c();
  }
  else {
    uVar3 = FUN_4a171a94();
    FUN_4a171bb8(uVar3,uVar2);
    uVar3 = FUN_4a171e1c();
  }
  FUN_4a171bb8(*(undefined4 *)(param_1 + 0x60),uVar2);
  uVar4 = FUN_4a171e1c();
  FUN_4a171bb8(*(undefined4 *)(param_1 + 100),uVar2);
  uVar2 = FUN_4a171e1c();
  FUN_4a0d4b74(uVar3,uVar4,uVar2);
  uVar5 = FUN_4a171fac();
  uVar6 = *(uint *)(param_1 + 0x68);
  uVar7 = uVar5 >> 7 & 0xff0000;
  bVar10 = uVar7 == 0;
  if (!bVar10) {
    param_4 = uVar6 >> 7 & 0xff0000;
    bVar10 = param_4 == 0;
  }
  if (!bVar10) {
    bVar10 = uVar7 == 0xff0000;
  }
  if (!bVar10) {
    bVar10 = param_4 == 0xff0000;
  }
  if (bVar10) {
    if ((int)(uVar5 ^ uVar6) < 0) {
      uVar7 = uVar7 | 0x100;
    }
    uVar9 = uVar6 >> 7 & 0xff0000;
    if (uVar7 < 0xff0000 && uVar9 < 0xff0000) {
      return CONCAT44(uVar6,uVar5 ^ uVar6) & 0xffffffff80000000;
    }
    uVar5 = uVar5 * 2;
    if (uVar5 < 0xff000001) {
      uVar5 = uVar6 * 2;
    }
    if (0xff000000 < uVar5) {
      return CONCAT44(uVar6,DAT_4a171ba4);
    }
    if ((uVar7 & 0xff0000) == 0 || uVar9 == 0) {
      return CONCAT44(uVar6,DAT_4a172220);
    }
    return CONCAT44(uVar6,(uVar7 | 0xff) << 0x17);
  }
  if ((int)(uVar5 ^ uVar6) < 0) {
    uVar7 = uVar7 | 0x100;
  }
  uVar6 = uVar6 << 8;
  lVar1 = (ulonglong)(uVar6 | 0x80000000) * (ulonglong)(uVar5 << 8 | 0x80000000);
  uVar5 = (uint)((ulonglong)lVar1 >> 0x20);
  iVar8 = uVar7 + param_4 + -0x800000;
  if ((int)lVar1 != 0) {
    uVar5 = uVar5 | 1;
  }
  bVar10 = 0x7fffffff < uVar5;
  if (!bVar10) {
    uVar5 = uVar5 << 1;
  }
  uVar9 = iVar8 + (iVar8 >> 0x10) + (uint)bVar10;
  bVar10 = (bool)((byte)(uVar5 >> 7) & 1);
  uVar7 = uVar5 >> 8;
  if (bVar10) {
    uVar7 = uVar5 & 0x7f;
  }
  uVar5 = (uVar5 >> 8) + uVar9 * 0x800000 + (uint)bVar10;
  if (uVar7 != 0) {
    bVar10 = 0xfbffff < uVar9;
  }
  if (!bVar10) {
    return CONCAT44(uVar6,uVar5) | 0x8000000000000000;
  }
  if (uVar7 == 0 || uVar9 == 0xfc0000) {
    uVar5 = uVar5 & 0xfffffffe;
  }
  if (uVar9 < 0xfc0000) {
    return CONCAT44(uVar6,uVar5) | 0x8000000000000000;
  }
  if (-1 < (int)(uVar9 - 0xfc0000)) {
    if (-1 < (int)((uVar5 + 0x800000) * 2)) {
      if ((int)(uVar5 + 0xa0000000) < 0) {
        uVar2 = 0xff800000;
      }
      else {
        uVar2 = 0x7f800000;
      }
      return CONCAT44(uVar6,uVar2) | 0x8000000000000000;
    }
    return CONCAT44(uVar6,uVar5) | 0x8000000000000000;
  }
  if ((int)(uVar9 ^ 0xff) < -0xffff) {
    uVar5 = uVar5 + 0x60000000;
    if ((int)(uVar9 ^ 0xff) < -0xffff) {
      uVar5 = uVar5 & 0x80000000;
    }
    return CONCAT44(uVar6,uVar5) | 0x8000000000000000;
  }
  return CONCAT44(uVar6,uVar5) | 0x8000000000000000;
}



// Address: 4a08c7d8

void FUN_4a08c7d8(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  bool bVar10;
  
  iVar1 = DAT_4a08c990;
  if (param_2 != 5) {
    bVar10 = 5 < param_2;
    if (param_2 == 6) {
      uVar6 = param_1[0x1b];
      FUN_4a1720a0(uVar6 ^ 0x80000000,uVar6);
      if (bVar10) {
        uVar6 = uVar6 ^ 0x80000000;
      }
      if (iVar1 < (int)uVar6) {
        uVar6 = FUN_4a17211c(param_1[0x1b],0x42340000);
        bVar10 = true;
        if (((int)uVar6 < 1) || (FUN_4a1720a0(uVar6,param_1[0x1a]), bVar10)) {
          bVar10 = 0x7fffffff < uVar6;
          if ((0x80000000 < uVar6) && (FUN_4a1720a0(param_1[0x1a] ^ 0x80000000,uVar6), !bVar10)) {
            uVar6 = param_1[0x1a] ^ 0x80000000;
          }
        }
        else {
          uVar6 = param_1[0x1a];
        }
        uVar2 = FUN_4a171a94(param_1[0x17],uVar6);
        iVar1 = FUN_4a08c744(param_1,uVar2);
        param_1[0x1c] = iVar1;
      }
      FUN_4a08cac0(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x4a08c98c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34))(param_1);
      return;
    }
    return;
  }
  iVar1 = *(int *)(param_3 + 0xc);
  iVar7 = 0;
  uVar9 = 1;
  if (iVar1 == 0) {
    iVar5 = 0;
    iVar1 = 0;
  }
  else {
    iVar5 = *(int *)(iVar1 + 8);
    iVar1 = *(int *)(iVar1 + 8);
  }
  iVar5 = *(int *)(iVar5 + 4);
  iVar1 = *(int *)(iVar1 + 0x14);
  iVar8 = param_1[0x17];
  uVar2 = FUN_4a171e1c(iVar8);
  uVar3 = FUN_4a171fac(iVar1 - iVar5);
  iVar1 = FUN_4a171a94(uVar3,iVar8);
  iVar5 = param_1[0x19];
  FUN_4a1720a0(iVar1,iVar5);
  if ((bool)uVar9) {
    iVar1 = iVar5;
  }
  iVar5 = param_1[0x18];
  FUN_4a172458(iVar1,iVar5);
  if ((bool)uVar9) {
    iVar1 = iVar5;
  }
  param_1[0x17] = iVar1;
  param_1[0x1c] = iVar1;
  uVar9 = *(int *)(param_3 + 0xc) == 0;
  if (!(bool)uVar9) {
    iVar7 = *(int *)(*(int *)(param_3 + 0xc) + 8);
  }
  uVar4 = FUN_4a171fac(*(undefined4 *)(iVar7 + 0x24));
  iVar7 = FUN_4a171bb8(uVar3,uVar4);
  param_1[0x1b] = iVar7;
  uVar2 = FUN_4a171fac(uVar2);
  uVar2 = FUN_4a08c744(param_1,uVar2);
  uVar3 = FUN_4a08c744(param_1,iVar1);
  FUN_4a171da0(uVar2,uVar3);
  if (!(bool)uVar9) {
                    /* WARNING: Could not recover jumptable at 0x4a08c8d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x38))(param_1);
    return;
  }
  return;
}



// Address: 4a08cac0

void FUN_4a08cac0(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  param_1[0xb] = param_2;
  if (param_2 == 0) {
    iVar2 = FUN_4a134aa8(param_1);
    if (*(int **)(iVar2 + 0x40) == param_1) {
      *(undefined4 *)(iVar2 + 0x40) = 0;
    }
    return;
  }
  if (param_2 == 1) {
    return;
  }
  if (param_2 == 2) {
    uVar1 = FUN_4a134aa8(param_1);
    FUN_4a0cd790(uVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x4a08cb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1);
    return;
  }
  if (param_2 == 3) {
    uVar1 = FUN_4a134aa8(param_1);
    FUN_4a0cd790(uVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x4a08cb14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))(param_1);
    return;
  }
  return;
}



// Address: 4a08cb50

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a08cb50(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined1 uVar5;
  
  uVar3 = DAT_4a08ccd8;
  uVar5 = param_1[0xb] == 0;
  if (!(bool)uVar5) {
    return;
  }
  FUN_4a171da0(param_1[0x17],param_1[0x1c]);
  if (!(bool)uVar5) {
    iVar1 = param_1[0x17];
    FUN_4a0d4898(iVar1,param_1[0x1c],param_2,uVar3);
    iVar2 = FUN_4a171fac();
    param_1[0x17] = iVar2;
    uVar3 = FUN_4a08c744(param_1,iVar1);
    uVar4 = FUN_4a08c744(param_1,iVar2);
    FUN_4a171da0(uVar3,uVar4);
    if (!(bool)uVar5) {
                    /* WARNING: Could not recover jumptable at 0x4a08cbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x38))(param_1);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a08cbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_4a171da0(param_1[0x11],param_1[0x15]);
  if (!(bool)uVar5) {
    FUN_4a0d4898(param_1[0x11],param_1[0x15],param_2,uVar3);
    iVar1 = FUN_4a171fac();
    param_1[0x11] = iVar1;
    return;
  }
  uVar5 = 1;
  if ((param_1[0x1a] & 0x7fffffffU) == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a08cc28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  iVar1 = FUN_4a08c744(param_1,param_1[0x17]);
  uVar3 = FUN_4a171fac(param_2);
  uVar3 = FUN_4a17211c(uVar3,DAT_4a08ccdc);
  uVar3 = FUN_4a17211c(uVar3,0x43c80000);
  FUN_4a172458(iVar1,param_1[0x17]);
  if ((bool)uVar5) {
    FUN_4a1720a0(iVar1,param_1[0x17]);
    if ((bool)uVar5) goto LAB_4a08ccc8;
    iVar2 = FUN_4a1725c0(param_1[0x17],uVar3);
    FUN_4a172458(iVar1,iVar2);
    if ((bool)uVar5) goto LAB_4a08cc8c;
  }
  else {
    iVar2 = FUN_4a171a94(param_1[0x17],uVar3);
    FUN_4a1720a0(iVar1,iVar2);
    if ((bool)uVar5) {
LAB_4a08cc8c:
      iVar1 = iVar2;
    }
  }
  param_1[0x17] = iVar1;
LAB_4a08ccc8:
  param_1[0x1c] = param_1[0x17];
  return;
}



// Address: 4a08cce0

bool FUN_4a08cce0(int param_1)

{
  undefined1 in_CY;
  
  FUN_4a1720a0(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 100));
  return !(bool)in_CY;
}



// Address: 4a08cd00

void FUN_4a08cd00(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_4a134ac8();
  puVar1 = PTR_PTR_4a08cda4;
  *puVar2 = PTR_PTR_4a08cda4;
  puVar2[4] = puVar1 + 100;
  puVar2[6] = puVar1 + 0x84;
  puVar2[7] = puVar1 + 0x94;
  puVar2[8] = puVar1 + 0xa4;
  puVar2[5] = puVar1 + 0x74;
  puVar2[3] = puVar1 + 0x54;
  puVar2[2] = puVar1 + 0x44;
  puVar2[9] = puVar1 + 0xb4;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  *(undefined1 *)(puVar2 + 0x10) = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  puVar2[0x14] = 0;
  puVar2[0x15] = 0;
  *(undefined1 *)(puVar2 + 0x16) = 0;
  puVar2[0x17] = 0;
  puVar2[0x18] = 0;
  puVar2[0x19] = 0;
  puVar2[0x1a] = 0;
  puVar2[0x1b] = 0;
  puVar2[0x1c] = 0;
  return;
}



// Address: 4a08cdc0

void FUN_4a08cdc0(undefined4 *param_1)

{
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a08cdc4

void FUN_4a08cdc4(int param_1)

{
  FUN_4a03c12c(param_1,1,0x20,4);
  FUN_4a039a4c(param_1 + 0xc,1,0xf,2);
  FUN_4a039a4c(param_1 + 0xe,1,0xf,2);
  FUN_4a039a4c(param_1 + 0x10,1,0xf,2);
  FUN_4a039a4c(param_1 + 0x12,1,0xf,2);
  return;
}



// Address: 4a08ce18

undefined4 * FUN_4a08ce18(int *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  
  piVar1 = param_1 + 0x11;
  for (puVar8 = (undefined4 *)param_1[0x11]; puVar8 < (undefined4 *)(*piVar1 + param_1[0x12] * 4);
      puVar8 = puVar8 + 1) {
    if ((int *)*puVar8 == param_2) {
      iVar4 = (int)puVar8 - *piVar1 >> 2;
      iVar4 = FUN_4a16f73c(piVar1,iVar4,iVar4 + 1);
      puVar8 = (undefined4 *)(iVar4 * 4 + *piVar1);
      if ((param_1[0x12] == 0) && (-1 < *param_1 << 0x16)) {
        FUN_4a16f7ba(piVar1,0);
        FUN_4a16f710(piVar1,0);
      }
      break;
    }
  }
  if (param_2 != (int *)0x0) {
    FUN_4a1652c6(param_2,*(undefined4 *)(*param_2 + 4));
  }
  uVar2 = 0;
  do {
    if ((uint)param_1[0x16] <= uVar2) {
LAB_4a08cf2e:
      if ((int *)param_1[0x19] == param_2) {
        iVar4 = 0;
        if (param_1[0x12] != 0) {
          iVar4 = *(int *)(param_1[0x11] + (param_1[0x12] + -1) * 4);
        }
        param_1[0x19] = iVar4;
      }
      return puVar8;
    }
    if (*(int **)(param_1[0x15] + uVar2 * 4) == param_2) {
      FUN_4a0921b6(param_1 + 0x15,param_2);
      iVar4 = param_1[0x4b];
      if (iVar4 != 0) {
        while (iVar4 = iVar4 + -1, -1 < iVar4) {
          piVar3 = (int *)(param_1[0x4a] + iVar4 * 8);
          iVar5 = piVar3[1];
          iVar9 = *piVar3;
          iVar6 = param_1[0x12];
          if (iVar6 == iVar9) {
            FUN_4a16f79e(piVar1,iVar6 + 1);
            *(int *)(*piVar1 + param_1[0x12] * 4) = iVar5;
            param_1[0x12] = param_1[0x12] + 1;
          }
          else {
            FUN_4a16f79e(piVar1,iVar6 + 1);
            iVar6 = param_1[0x12] - iVar9;
            while (iVar6 = iVar6 + -1, -1 < iVar6) {
              iVar7 = (iVar9 + iVar6) * 4;
              *(undefined4 *)(*piVar1 + iVar7 + 4) = *(undefined4 *)(*piVar1 + iVar7);
            }
            param_1[0x12] = param_1[0x12] + 1;
            *(int *)(*piVar1 + iVar9 * 4) = iVar5;
          }
        }
        FUN_4a16f3b2(param_1 + 0x4a);
      }
      goto LAB_4a08cf2e;
    }
    uVar2 = uVar2 + 1;
  } while( true );
}



// Address: 4a08cf54

void FUN_4a08cf54(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined1 local_ac [160];
  
  local_ac[0] = 0;
  if (*(char *)(param_2 + 0x124) != '\0') {
    FUN_4a001538(local_ac,s_debug_patches__4a08cf90);
  }
  FUN_4a001538(local_ac,param_3);
  thunk_FUN_4a000f84(param_1,local_ac,0xa0);
  return;
}



// Address: 4a08cfa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_4a08cfa0(undefined4 param_1,char *param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_4a08cff8;
  PTR_DAT_4a08cff8[0x1f] = 0;
  if (*param_2 == '\0') {
    puVar1[-0x20] = 0;
  }
  else {
    FUN_4a000d18(PTR_DAT_4a08cff8 + -0x20,s_data__s_4a08cffc,param_2);
    if (puVar1[0x1f] != '\0') {
      FUN_4a008004(s_Prefixed_build_style_path_too_lo_4a08d004);
      iVar2 = host_s3eDebugIsDebuggerPresent_thumb();
      if (iVar2 == 0) {
        return;
      }
      _DAT_fffffff4 = 0;
      return;
    }
  }
  FUN_4a04d500(PTR_PTR_4a08d028);
  FUN_4a04c788(PTR_DAT_4a08cff8 + -0x20);
  FUN_4a04c77c(0);
  return;
}



// Address: 4a08d02c

void FUN_4a08d02c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 auStack_114 [256];
  
  FUN_4a00b9ea(param_2,auStack_114);
  FUN_4a0012bc(param_5,auStack_114);
  FUN_4a00ba22(param_2,auStack_114,0);
  FUN_4a0012bc(param_4,auStack_114);
  FUN_4a00b998(param_2,auStack_114);
  FUN_4a0012bc(param_3,auStack_114);
  return;
}



// Address: 4a08d072

void FUN_4a08d072(int param_1)

{
  FUN_4a06a130(*(undefined4 *)(param_1 + 100));
  return;
}



// Address: 4a08d080

void FUN_4a08d080(uint *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*param_1 & 0x7ffff) >> 0x11 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_4a135c66(param_1 + 0x11,*(undefined4 *)(param_2 + 4),0);
    if ((iVar1 != 0) && (FUN_4a0921e2(param_1 + 0x15,param_2,0), -1 < (int)(*param_1 << 0xc))) {
      *(undefined1 *)(param_1 + 0x49) = 1;
    }
    uVar2 = 1;
  }
  FUN_4a0921e2(param_1 + 0x11,param_2,uVar2);
  param_1[0x19] = param_2;
  return;
}



// Address: 4a08d0d0

uint FUN_4a08d0d0(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_c4 [160];
  uint *puStack_24;
  uint *puStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  puVar1 = PTR_DAT_4a08d198;
  uVar5 = *(uint *)(*(int *)(PTR_DAT_4a08d198 + 0xc) + 100);
  puStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  FUN_4a0012bc(param_1 + 0x1b,param_2);
  FUN_4a08cf54(auStack_c4,param_1,uStack_1c);
  FUN_4a001538(auStack_c4,&DAT_4a08d19c);
  FUN_4a0365c0(auStack_c4,uStack_18);
  if ((param_1[0x19] != uVar5) && (param_1[0x19] != 0)) {
    FUN_4a06a0fc(*(undefined4 *)(*(int *)(puVar1 + 0xc) + 100),1);
  }
  FUN_4a170028(param_1 + 0x1b,&DAT_4a08d1a4);
  if ((*param_1 & 0x7ffff) >> 0x11 != 0) {
    if (param_1[0x16] != 0) {
      puStack_24 = param_1 + 0x11;
      for (uVar3 = 0; uVar3 < param_1[0x16]; uVar3 = uVar3 + 1) {
        uVar4 = *(uint *)(param_1[0x15] + uVar3 * 4);
        piVar2 = (int *)FUN_4a135c66(puStack_24,*(undefined4 *)(uVar4 + 4),1);
        if (piVar2 != (int *)0x0) {
          if (param_1[0x19] == uVar4) {
            param_1[0x19] = (uint)piVar2;
          }
          FUN_4a1652c8(piVar2,uVar4,*(undefined4 *)(*piVar2 + 0x34));
          FUN_4a0921b6(puStack_24,uVar4);
        }
      }
      FUN_4a16f7ba(param_1 + 0x15,0);
    }
    *(undefined1 *)(param_1 + 0x49) = 0;
  }
  uVar3 = param_1[0x19];
  if (uVar3 == uVar5) {
    uVar3 = 0;
  }
  return uVar3;
}



// Address: 4a08d1a8

uint * FUN_4a08d1a8(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint *puVar5;
  char local_50 [64];
  
  pcVar4 = local_50;
  iVar2 = FUN_4a16eb70(param_1 + 4,0);
  iVar2 = thunk_FUN_4a092258(iVar2 + 0x18);
  iVar2 = thunk_FUN_4a092258(iVar2 + 0x18);
  iVar2 = thunk_FUN_4a092258(iVar2 + 0x10);
  iVar2 = thunk_FUN_4a092258(iVar2 + 0x10);
  *(undefined1 *)(iVar2 + 0x18) = 0;
  iVar2 = thunk_FUN_4a092258(iVar2 + 0xb8);
  iVar2 = FUN_4a16f3c4(iVar2 + 0x1c,0);
  iVar2 = FUN_4a16eb70(iVar2 + 0x10,0);
  puVar5 = (uint *)(iVar2 + -0x138);
  *(uint **)(PTR_DAT_4a08d304 + 0xc) = puVar5;
  *puVar5 = 0;
  *(undefined4 *)(iVar2 + -0xd4) = 0;
  *(undefined4 *)(iVar2 + -0xd0) = 0;
  *(undefined4 *)(iVar2 + -0x124) = 0;
  FUN_4a16eb34(iVar2 + -0x134,1);
  *(undefined4 *)(iVar2 + -0x10c) = 0x1000;
  *(undefined4 *)(iVar2 + -0x1c) = 0;
  uVar3 = host_s3eTimerGetMs_thumb();
  *(undefined4 *)(iVar2 + -0x18) = uVar3;
  *(undefined4 *)(iVar2 + -0x108) = 0;
  *(undefined1 *)(iVar2 + -0x14) = 0;
  *puVar5 = *puVar5 & 0xfffffffe;
  uVar3 = FUN_4a04126a();
  FUN_4a03ba98(s_CIwMaterial_4a08d30c,PTR_FUN_4a041244_1_4a08d308,uVar3);
  uVar3 = FUN_4a04126e();
  FUN_4a03ba98(s_CIwResGroup_4a08d31c,PTR_FUN_4a041256_1_4a08d318,uVar3);
  uVar3 = FUN_4a0405c2();
  FUN_4a03ba98(s_CIwTexture_4a08d32c,PTR_FUN_4a0405b0_1_4a08d328,uVar3);
  uVar3 = FUN_4a02b1e8(s_ResGroupMembers_4a08d338);
  FUN_4a0537ac(uVar3,PTR_FUN_4a050808_1_4a08d348);
  uVar3 = FUN_4a02b1e8(s_ResGroupBuildData_4a08d34c);
  FUN_4a0537ac(uVar3,PTR_FUN_4a05387c_1_4a08d360);
  uVar3 = FUN_4a02b1e8(s_ResGroupChildPaths_4a08d364);
  FUN_4a0537ac(uVar3,PTR_FUN_4a0548b8_1_4a08d378);
  uVar3 = FUN_4a02b1e8(s_ResGroupHST_4a08d37c);
  FUN_4a0537ac(uVar3,PTR_DAT_4a08d388);
  uVar3 = FUN_4a02b1e8(s_ResGroupDirectory_4a08d38c);
  FUN_4a0537ac(uVar3,PTR_FUN_4a053a2c_1_4a08d3a0);
  uVar3 = FUN_4a02b1e8(s_ResGroupResources_4a08d3a4);
  FUN_4a0537ac(uVar3,PTR_FUN_4a053a60_1_4a08d3b8);
  uVar3 = FUN_4a02b1e8(s_ResGroupResourcesOptimised_4a08d3bc);
  FUN_4a0537ac(uVar3,PTR_FUN_4a056a0c_1_4a08d3d8);
  puVar1 = PTR_DAT_4a08d3e0;
  *(undefined **)PTR_DAT_4a08d3e0 = PTR_FUN_4a056ea8_1_4a08d3dc;
  *(undefined **)(puVar1 + 4) = PTR_LAB_4a055ba0_1_4a08d3e4;
  thunk_FUN_4a00121c(local_50,0x40);
  iVar2 = host_s3eConfigGetString_thumb(s_RESMANAGER_4a08d3f8,s_ResBuildStyle_4a08d3e8,local_50);
  if (iVar2 != 0) {
    host_s3eConfigGetString_thumb(&DAT_4a08d404,s_ResBuildStyle_4a08d3e8,local_50);
  }
  if (local_50[0] == '\0') {
    if ((*(int **)PTR_DAT_4a08d408 == (int *)0x0) || (**(int **)PTR_DAT_4a08d408 << 0x1b < 0)) {
      pcVar4 = &DAT_4a08d40c;
    }
    else {
      pcVar4 = s_gles1_4a08d410;
    }
  }
  FUN_4a08cfa0(puVar5,pcVar4);
  return puVar5;
}



// Address: 4a08d418

int FUN_4a08d418(int param_1)

{
  int iVar1;
  uint uVar2;
  
  while (*(int *)(param_1 + 0x48) != 0) {
    *(undefined4 *)(**(int **)(param_1 + 0x44) + 0x30) = 0;
    FUN_4a08ce18(param_1);
  }
  FUN_4a0921f0(param_1 + 0x34);
  FUN_4a0921f0(param_1 + 0x10c);
  FUN_4a02b1e8(s_CIwMaterial_4a08d504);
  FUN_4a045708();
  FUN_4a02b1e8(s_CIwResGroup_4a08d510);
  FUN_4a045708();
  FUN_4a02b1e8(s_CIwTexture_4a08d51c);
  FUN_4a045708();
  FUN_4a02b1e8(s_ResGroupMembers_4a08d528);
  FUN_4a054f80();
  FUN_4a02b1e8(s_ResGroupDirectory_4a08d538);
  FUN_4a054f80();
  FUN_4a02b1e8(s_ResGroupResources_4a08d54c);
  FUN_4a054f80();
  FUN_4a02b1e8(s_ResGroupResourcesOptimised_4a08d560);
  FUN_4a054f80();
  FUN_4a02b1e8(s_ResGroupBuildData_4a08d57c);
  FUN_4a054f80();
  FUN_4a02b1e8(s_ResGroupChildPaths_4a08d590);
  FUN_4a054f80();
  FUN_4a02b1e8(s_ResGroupHST_4a08d5a4);
  FUN_4a054f80();
  *(undefined4 *)(PTR_DAT_4a08d5b0 + 0xc) = 0;
  iVar1 = FUN_4a16ebdc(param_1 + 0x138);
  for (uVar2 = 0; uVar2 < *(uint *)(iVar1 + -0xc); uVar2 = uVar2 + 1) {
  }
  if ((*(byte *)(iVar1 + -4) & 1) == 0) {
    FUN_4a0a6f48(*(undefined4 *)(iVar1 + -0x10),8);
    *(undefined4 *)(iVar1 + -0x10) = 0;
  }
  iVar1 = FUN_4a092278(iVar1 + -0x2c);
  iVar1 = FUN_4a092278(iVar1 + -0xb8);
  iVar1 = FUN_4a092278(iVar1 + -0x10);
  iVar1 = FUN_4a092278(iVar1 + -0x10);
  iVar1 = FUN_4a092278(iVar1 + -0x18);
  iVar1 = FUN_4a16ebdc(iVar1 + -0x18);
  return iVar1 + -4;
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



// Address: 4a08d5e4

uint FUN_4a08d5e4(void)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  uint in_r3;
  uint local_10;
  
  local_10 = in_r3;
  piVar1 = (int *)FUN_4a08d642();
  if (*piVar1 == 0) {
    pbVar3 = (byte *)piVar1[3];
    if (*pbVar3 != 0) {
      piVar1[3] = (int)(pbVar3 + 1);
      local_10 = (uint)*pbVar3;
      goto LAB_4a08d61c;
    }
  }
  else {
    iVar2 = host_s3eFileRead_thumb(&local_10,1);
    if ((iVar2 != 0) && (iVar2 != -1)) goto LAB_4a08d61c;
  }
  local_10 = 0;
LAB_4a08d61c:
  if ((char)local_10 == '\n') {
    piVar1[0x38] = piVar1[0x38] + 1;
    piVar1[0x39] = 0;
  }
  else {
    piVar1[0x39] = piVar1[0x39] + 1;
  }
  return local_10 & 0xff;
}



// Address: 4a08d642

int FUN_4a08d642(int param_1)

{
  return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x18) * 0xe8 + -0xe8;
}



// Address: 4a08d650

void FUN_4a08d650(int param_1,int param_2)

{
  char cVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  undefined *local_8c [2];
  int local_84;
  int *local_80;
  int local_78;
  int *local_74;
  int local_70;
  int *local_6c;
  undefined *local_68 [2];
  int local_60;
  int *local_5c;
  int local_54;
  int local_50;
  undefined1 auStack_4c [8];
  undefined4 local_44;
  int *local_40;
  undefined *local_38;
  undefined *local_34;
  undefined *local_30;
  int local_2c;
  int iStack_28;
  
  local_2c = param_1;
  iStack_28 = param_2;
  FUN_4a1679cc(auStack_4c);
  puVar2 = PTR_PTR_4a08db28;
  local_50 = param_2;
  if (param_2 <= *(int *)(local_2c + 0x38)) {
    local_50 = *(int *)(local_2c + 0x38);
  }
  local_54 = 0;
  if (0 < local_50) {
    local_30 = PTR_PTR_4a08db1c;
    local_34 = PTR_PTR_4a08db20;
    local_38 = PTR_PTR_4a08db24;
    do {
      if (local_54 < *(int *)(local_2c + 0x38)) {
        if (local_40 == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = local_40[2];
        }
        piVar9 = (int *)(iVar4 + local_54 * 0x14);
        if (*(int *)(local_2c + 0x3c) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(*(int *)(local_2c + 0x3c) + 8);
        }
        iVar4 = iVar4 + local_54 * 0x14;
        iVar11 = *(int *)(iVar4 + 8);
        piVar10 = *(int **)(iVar4 + 0xc);
        if (piVar10 != (int *)0x0) {
          (**(code **)(*piVar10 + 0xc))(piVar10);
        }
        (**(code **)(*piVar9 + 0x1c))(piVar9);
        piVar9[2] = iVar11;
        piVar9[3] = (int)piVar10;
      }
      else {
        if (local_40 == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = local_40[2];
        }
        local_6c = (int *)(iVar4 + local_54 * 0x14);
        local_70 = *(int *)(local_2c + 0x14);
        local_74 = (int *)FUN_4a0c6bc0(local_68);
        local_74[2] = 0;
        local_74[3] = 0;
        *local_74 = (int)local_38;
        if (0 < local_70) {
          iVar4 = FUN_4a15e080(local_70 * 0x14);
          if (iVar4 == 0) {
            iVar4 = FUN_4a1669a8();
          }
          iVar11 = 0;
          local_78 = iVar4;
          do {
            iVar4 = local_78 + iVar11 * 0x14;
            puVar5 = (undefined4 *)FUN_4a0c6bc0(local_8c);
            puVar5[2] = 0;
            *puVar5 = puVar2;
            puVar5[3] = 0;
            puVar6 = (undefined4 *)FUN_4a0c6bc0(iVar4);
            *puVar6 = local_30;
            puVar6[2] = puVar5[2];
            piVar9 = (int *)puVar5[3];
            puVar6[3] = piVar9;
            if (piVar9 != (int *)0x0) {
              (**(code **)(*piVar9 + 0xc))();
            }
            piVar9 = local_80;
            iVar4 = local_84;
            *puVar6 = puVar2;
            local_8c[0] = puVar2;
            bVar13 = local_80 != (int *)0x0;
            if (bVar13) {
              iVar12 = local_80[2];
              cVar1 = (char)local_80[5];
            }
            else {
              iVar12 = 0;
              cVar1 = '\0';
            }
            bVar14 = local_80 == (int *)0x0;
            local_80 = (int *)0x0;
            local_84 = 0;
            if ((bVar14) || (iVar7 = (**(code **)(*piVar9 + 8))(piVar9), iVar7 == 0)) {
              bVar3 = 0;
            }
            else {
              (**(code **)(*piVar9 + 4))(piVar9);
              bVar3 = 1;
            }
            if (!(bool)(bVar3 & (bVar13 && cVar1 != '\0'))) {
              iVar12 = 0;
            }
            if (iVar12 != 0) {
              iVar7 = 0;
              if (0 < iVar4) {
                do {
                  piVar9 = *(int **)(iVar12 + iVar7 * 4);
                  if ((piVar9 != (int *)0x0) &&
                     (iVar8 = (**(code **)(*piVar9 + 8))(piVar9), iVar8 != 0)) {
                    (**(code **)(*piVar9 + 4))(piVar9);
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 < iVar4);
                if (iVar12 == 0) goto LAB_4a08d8f8;
              }
              FUN_4a14f21c(iVar12);
            }
LAB_4a08d8f8:
            FUN_4a0c6bf4(local_8c);
            iVar11 = iVar11 + 1;
          } while (iVar11 < local_70);
          thunk_FUN_4a161570(0x18);
          puVar5 = (undefined4 *)FUN_4a0c0628();
          *puVar5 = local_34;
          puVar5[2] = local_78;
          puVar5[3] = 0x14;
          puVar5[4] = local_70;
          *(undefined1 *)(puVar5 + 5) = 1;
          if (puVar5 != (undefined4 *)0x0) {
            (**(code **)(local_34 + 0xc))(puVar5);
          }
          (**(code **)(*local_74 + 0x1c))(local_74);
          local_74[3] = (int)puVar5;
          local_74[2] = local_70;
        }
        iVar4 = local_74[2];
        piVar9 = (int *)local_74[3];
        if (piVar9 != (int *)0x0) {
          (**(code **)(*piVar9 + 0xc))(piVar9);
        }
        (**(code **)(*local_6c + 0x1c))(local_6c);
        piVar10 = local_5c;
        iVar11 = local_60;
        local_6c[3] = (int)piVar9;
        local_6c[2] = iVar4;
        local_68[0] = local_38;
        bVar13 = local_5c != (int *)0x0;
        if (bVar13) {
          iVar4 = local_5c[2];
          cVar1 = (char)local_5c[5];
        }
        else {
          iVar4 = 0;
          cVar1 = '\0';
        }
        bVar14 = local_5c == (int *)0x0;
        local_5c = (int *)0x0;
        local_60 = 0;
        if ((bVar14) || (iVar12 = (**(code **)(*piVar10 + 8))(piVar10), iVar12 == 0)) {
          bVar3 = 0;
        }
        else {
          (**(code **)(*piVar10 + 4))(piVar10);
          bVar3 = 1;
        }
        if (!(bool)(bVar3 & (bVar13 && cVar1 != '\0'))) {
          iVar4 = 0;
        }
        if (iVar4 != 0) {
          iVar12 = 0;
          if (0 < iVar11) {
            do {
              (*(code *)**(undefined4 **)(iVar4 + iVar12 * 0x14))();
              iVar12 = iVar12 + 1;
            } while (iVar12 < iVar11);
            if (iVar4 == 0) goto LAB_4a08daa0;
          }
          FUN_4a14f21c(iVar4);
        }
LAB_4a08daa0:
        FUN_4a0c6bf4(local_68);
      }
      local_54 = local_54 + 1;
    } while (local_54 < local_50);
  }
  iVar4 = local_2c;
  piVar9 = (int *)(local_2c + 0x30);
  if (local_40 != (int *)0x0) {
    (**(code **)(*local_40 + 0xc))(local_40);
  }
  (**(code **)(*piVar9 + 0x1c))(piVar9);
  *(undefined4 *)(iVar4 + 0x38) = local_44;
  *(int **)(iVar4 + 0x3c) = local_40;
  FUN_4a167c04(auStack_4c);
  return;
}



// Address: 4a08db2c

undefined4 FUN_4a08db2c(void)

{
  return *(undefined4 *)PTR_DAT_4a08db38;
}



// Address: 4a08db3c

void FUN_4a08db3c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  iVar1 = FUN_4a1357f8(param_1,param_4);
  if (*(int *)(param_1 + 0x38) <= param_2) {
    FUN_4a08d650(param_1,param_2 + 1);
  }
  iVar3 = 0;
  if (*(int *)(param_1 + 0x3c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x3c) + 8);
  }
  iVar2 = *(int *)(iVar2 + param_2 * 0x14 + 0xc);
  iVar6 = *(int *)(param_3 + 8);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 8);
  }
  piVar5 = *(int **)(param_3 + 0xc);
  piVar4 = (int *)(iVar3 + iVar1 * 0x14);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))(piVar5);
  }
  (**(code **)(*piVar4 + 0x1c))(piVar4);
  piVar4[2] = iVar6;
  piVar4[3] = (int)piVar5;
  return;
}



// Address: 4a08dbe4

void FUN_4a08dbe4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  bool bVar13;
  undefined1 auStack_64 [8];
  undefined4 local_5c;
  int *local_58;
  undefined *local_50 [2];
  int local_48;
  int *local_44;
  undefined1 auStack_3c [16];
  int *local_2c;
  undefined *local_28;
  
  uVar5 = FUN_4a1359a8(param_2,param_3,param_4);
  FUN_4a0bfc44(auStack_3c,uVar5);
  piVar6 = (int *)FUN_4a0c6bc0(local_50);
  puVar3 = PTR_PTR_4a08df68;
  local_28 = PTR_PTR_4a08df64;
  piVar6[2] = 0;
  piVar6[3] = 0;
  *piVar6 = (int)puVar3;
  iVar7 = FUN_4a15e080(0xd);
  if (iVar7 == 0) {
    iVar7 = FUN_4a1669a8();
  }
  iVar10 = 0;
  do {
    *(undefined1 *)(iVar7 + iVar10) = 0;
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0xd);
  thunk_FUN_4a161570(0x18);
  puVar8 = (undefined4 *)FUN_4a0c0628();
  puVar4 = PTR_PTR_4a08df6c;
  *puVar8 = PTR_PTR_4a08df6c;
  puVar8[3] = 1;
  puVar8[4] = 0xd;
  puVar8[2] = iVar7;
  *(undefined1 *)(puVar8 + 5) = 1;
  if (puVar8 != (undefined4 *)0x0) {
    (**(code **)(puVar4 + 0xc))(puVar8);
  }
  (**(code **)(*piVar6 + 0x1c))(piVar6);
  piVar6[2] = 0xd;
  piVar6[3] = (int)puVar8;
  FUN_4a0bfb60(auStack_3c,local_50);
  puVar4 = PTR_PTR_4a08df70;
  iVar7 = 0;
  if (0 < local_48) {
    do {
      if (local_44 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_44[2];
      }
      if (*(char *)(iVar10 + iVar7) != PTR_DAT_4a08df74[iVar7]) {
        puVar8 = (undefined4 *)FUN_4a0c6bc0(param_1);
        piVar6 = local_44;
        iVar7 = local_48;
        puVar8[2] = 0;
        puVar8[3] = 0;
        *puVar8 = puVar4;
        local_50[0] = puVar3;
        bVar13 = local_44 != (int *)0x0;
        if (bVar13) {
          iVar10 = local_44[2];
          cVar2 = (char)local_44[5];
        }
        else {
          iVar10 = 0;
          cVar2 = '\0';
        }
        local_44 = (int *)0x0;
        local_48 = 0;
        if ((piVar6 == (int *)0x0) || (iVar9 = (**(code **)(*piVar6 + 8))(piVar6), iVar9 == 0)) {
          bVar1 = 0;
        }
        else {
          (**(code **)(*piVar6 + 4))(piVar6);
          bVar1 = 1;
        }
        iVar9 = 0;
        if ((bool)(bVar1 & (bVar13 && cVar2 != '\0'))) {
          iVar9 = iVar10;
        }
        if (iVar9 == 0) goto LAB_4a08ddc4;
        iVar10 = 0;
        if (iVar7 < 1) goto LAB_4a08ddc0;
        do {
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar7);
        if (iVar9 != 0) {
LAB_4a08ddc0:
          FUN_4a14f21c();
        }
LAB_4a08ddc4:
        FUN_4a0c6bf4(local_50);
        FUN_4a0bfcf4(auStack_3c);
        return;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_48);
  }
  local_2c = (int *)FUN_4a0bf6a4(auStack_3c);
  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 0xc))();
  }
  iVar7 = FUN_4a0bf62c(auStack_3c);
  FUN_4a16951c(auStack_64,iVar7);
  iVar10 = 0;
  if (0 < iVar7) {
    do {
      piVar6 = (int *)FUN_4a0bf6a4(auStack_3c);
      if (local_58 == (int *)0x0) {
        iVar9 = 0;
      }
      else {
        iVar9 = local_58[2];
      }
      piVar11 = (int *)(iVar9 + iVar10 * 4);
      if ((int *)*piVar11 != piVar6) {
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 0xc))(piVar6);
        }
        piVar12 = (int *)*piVar11;
        if ((piVar12 != (int *)0x0) && (iVar9 = (**(code **)(*piVar12 + 8))(piVar12), iVar9 != 0)) {
          (**(code **)(*piVar12 + 4))(piVar12);
        }
        *piVar11 = (int)piVar6;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar7);
  }
  puVar8 = (undefined4 *)FUN_4a0c6bc0(param_1);
  *puVar8 = local_28;
  puVar8[2] = local_5c;
  puVar8[3] = local_58;
  if (local_58 != (int *)0x0) {
    (**(code **)(*local_58 + 0xc))();
  }
  *puVar8 = puVar4;
  FUN_4a169628(auStack_64);
  piVar6 = local_2c;
  if ((local_2c != (int *)0x0) && (iVar7 = (**(code **)(*local_2c + 8))(local_2c), iVar7 != 0)) {
    (**(code **)(*piVar6 + 4))(piVar6);
  }
  FUN_4a16bc4c(local_50);
  FUN_4a0bfcf4(auStack_3c);
  return;
}



// Address: 4a08df78

bool FUN_4a08df78(int param_1)

{
  return 1 < *(int *)(param_1 + 0x14);
}



// Address: 4a08df8c

void FUN_4a08df8c(int param_1,uint param_2)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x28) = param_2;
  iVar1 = (1 << (param_2 & 0xff)) + -1;
  *(int *)(param_1 + 0x2c) = iVar1;
  *(int *)(param_1 + 0x24) = 0x7fffffff - iVar1;
  return;
}



// Address: 4a08dfb0

void FUN_4a08dfb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  undefined2 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  undefined *local_54 [2];
  int local_4c;
  int *local_48;
  int local_40;
  int *local_3c;
  undefined *local_38;
  int local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_34 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  local_3c = (int *)FUN_4a1359a8(param_2,param_3,param_4);
  local_40 = (**(code **)(*local_3c + 0x44))(local_3c);
  puVar4 = (undefined2 *)thunk_FUN_4a161570();
  (**(code **)(*local_3c + 0x30))(local_3c,puVar4,local_40);
  local_34 = FUN_4a16951c(param_1,*puVar4);
  puVar3 = PTR_PTR_4a08e2d0;
  iVar15 = 2;
  iVar14 = 0;
  iVar13 = 2;
  if (2 < local_40) {
    local_38 = PTR_PTR_4a08e2cc;
    do {
      if (*(char *)((int)puVar4 + iVar13) == '\n') {
        iVar10 = iVar13 - iVar15;
        piVar5 = (int *)FUN_4a0c6bc0(local_54);
        piVar5[2] = 0;
        piVar5[3] = 0;
        *piVar5 = (int)puVar3;
        if (0 < iVar10) {
          iVar6 = FUN_4a15e080(iVar10);
          if (iVar6 == 0) {
            iVar6 = FUN_4a1669a8();
          }
          iVar7 = 0;
          do {
            *(undefined1 *)(iVar6 + iVar7) = 0;
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar10);
          thunk_FUN_4a161570(0x18);
          puVar8 = (undefined4 *)FUN_4a0c0628();
          *puVar8 = local_38;
          puVar8[3] = 1;
          puVar8[4] = iVar10;
          puVar8[2] = iVar6;
          *(undefined1 *)(puVar8 + 5) = 1;
          if (puVar8 != (undefined4 *)0x0) {
            (**(code **)(local_38 + 0xc))(puVar8);
          }
          (**(code **)(*piVar5 + 0x1c))(piVar5);
          piVar5[2] = iVar10;
          piVar5[3] = (int)puVar8;
        }
        if (local_48 == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = local_48[2];
        }
        FUN_4a000f84(iVar6,(int)puVar4 + iVar15,iVar10);
        uVar9 = thunk_FUN_4a161570(0x14);
        piVar5 = (int *)FUN_4a0c71e8(uVar9,local_54,s_UTF_8_4a08e2d4);
        iVar15 = 0;
        if (*(int *)(local_34 + 0xc) != 0) {
          iVar15 = *(int *)(*(int *)(local_34 + 0xc) + 8);
        }
        piVar11 = (int *)(iVar15 + iVar14 * 4);
        if ((int *)*piVar11 != piVar5) {
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 0xc))(piVar5);
          }
          piVar12 = (int *)*piVar11;
          if ((piVar12 != (int *)0x0) &&
             (iVar15 = (**(code **)(*piVar12 + 8))(piVar12), iVar15 != 0)) {
            (**(code **)(*piVar12 + 4))(piVar12);
          }
          *piVar11 = (int)piVar5;
        }
        piVar5 = local_48;
        iVar6 = local_4c;
        local_54[0] = puVar3;
        iVar15 = iVar13 + 1;
        bVar16 = local_48 != (int *)0x0;
        cVar1 = '\0';
        iVar10 = 0;
        if (bVar16) {
          iVar10 = local_48[2];
          cVar1 = (char)local_48[5];
        }
        iVar14 = iVar14 + 1;
        bVar17 = local_48 == (int *)0x0;
        local_48 = (int *)0x0;
        local_4c = 0;
        if ((bVar17) || (iVar7 = (**(code **)(*piVar5 + 8))(piVar5), iVar7 == 0)) {
          bVar2 = 0;
        }
        else {
          (**(code **)(*piVar5 + 4))(piVar5);
          bVar2 = 1;
        }
        iVar7 = 0;
        if ((bool)((bVar16 && cVar1 != '\0') & bVar2)) {
          iVar7 = iVar10;
        }
        if (iVar7 != 0) {
          iVar10 = 0;
          if (0 < iVar6) {
            do {
              iVar10 = iVar10 + 1;
            } while (iVar10 < iVar6);
            if (iVar7 == 0) goto LAB_4a08e280;
          }
          FUN_4a14f21c(iVar7);
        }
LAB_4a08e280:
        FUN_4a0c6bf4(local_54);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < local_40);
  }
  if (local_3c != (int *)0x0) {
    (**(code **)(*local_3c + 4))(local_3c);
  }
  iVar14 = FUN_4a057044();
  FUN_4a1652c6(puVar4,*(undefined4 *)(iVar14 + 8));
  return;
}



// Address: 4a08e2dc

void FUN_4a08e2dc(void)

{
  undefined4 uVar1;
  
  thunk_FUN_4a161570(0x44);
  uVar1 = FUN_4a08e3f4();
  *(undefined4 *)PTR_DAT_4a08e2fc = uVar1;
  return;
}



// Address: 4a08e300

void FUN_4a08e300(void)

{
  if (*(int **)PTR_DAT_4a08e31c == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a08e314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)PTR_DAT_4a08e31c + 4))();
  return;
}



// Address: 4a08e320

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a08e320(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))();
  }
  iVar1 = FUN_4a1357f8(param_1,param_2);
  if (iVar1 != -1) {
    *(int *)(param_1 + 0x20) = iVar1;
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 0xc))(param_2);
    }
    piVar2 = *(int **)(param_1 + 0x1c);
    if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    *(int **)(param_1 + 0x1c) = param_2;
  }
  if (param_2 != (int *)0x0) {
    iVar1 = (**(code **)(*param_2 + 8))(param_2);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a08e3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 4))(param_2);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a08e3dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a08e3f4

int FUN_4a08e3f4(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  *param_1 = PTR_PTR_4a08e7d0;
  puVar1 = (undefined4 *)FUN_4a0c6bc0(param_1 + 1);
  *puVar1 = PTR_PTR_4a08e7d4;
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
        iVar5 = iVar2 + 1;
        *(undefined4 *)(puVar1[5] + iVar2 * 4) = *(undefined4 *)(iVar2 * 4);
        iVar2 = iVar5;
      } while (iVar5 < (int)puVar1[4]);
    }
    thunk_FUN_4a161530(0);
  }
  iVar2 = puVar1[4];
  if ((int)puVar1[4] < (int)puVar1[3]) {
    do {
      iVar5 = iVar2 + 1;
      *(undefined4 *)(puVar1[5] + iVar2 * 4) = 0;
      iVar2 = iVar5;
    } while (iVar5 < (int)puVar1[3]);
  }
  puVar1[7] = 0xffffffff;
  puVar1[6] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  iVar2 = FUN_4a1679cc(puVar1 + 0xb,0);
  *(undefined4 *)(iVar2 + -8) = 0x10;
  *(undefined4 *)(iVar2 + -4) = 0xffff;
  *(undefined4 *)(iVar2 + -0xc) = 0x7fff0000;
  uVar3 = thunk_FUN_4a161570(0x10);
  host_s3eConfigGetString_arm(&DAT_4a08e7e4,s_Language_4a08e7d8,uVar3);
  iVar5 = FUN_4a00142c(uVar3,s_efigs_4a08e7ec);
  if (iVar5 == 0) {
    uVar4 = thunk_FUN_4a161570(0x14);
    uVar4 = FUN_4a0c707c(uVar4,&DAT_4a08e7f4);
    FUN_4a16dd14(iVar2 + -0x2c,uVar4);
    uVar4 = thunk_FUN_4a161570(0x14);
    uVar4 = FUN_4a0c707c(uVar4,s_fr_FR_4a08e7f8);
    FUN_4a16dd14(iVar2 + -0x2c,uVar4);
    uVar4 = thunk_FUN_4a161570(0x14);
    uVar4 = FUN_4a0c707c(uVar4,&DAT_4a08e800);
    FUN_4a16dd14(iVar2 + -0x2c,uVar4);
    uVar4 = thunk_FUN_4a161570(0x14);
    uVar4 = FUN_4a0c707c(uVar4,&DAT_4a08e804);
    FUN_4a16dd14(iVar2 + -0x2c,uVar4);
  }
  else {
    iVar5 = FUN_4a00142c(uVar3,s_all_lang_4a08e808);
    if (iVar5 == 0) {
      uVar4 = thunk_FUN_4a161570(0x14);
      uVar4 = FUN_4a0c707c(uVar4,&DAT_4a08e7f4);
      FUN_4a16dd14(iVar2 + -0x2c,uVar4);
      uVar4 = thunk_FUN_4a161570(0x14);
      uVar4 = FUN_4a0c707c(uVar4,s_fr_FR_4a08e7f8);
      FUN_4a16dd14(iVar2 + -0x2c,uVar4);
      uVar4 = thunk_FUN_4a161570(0x14);
      uVar4 = FUN_4a0c707c(uVar4,&DAT_4a08e800);
      FUN_4a16dd14(iVar2 + -0x2c,uVar4);
      uVar4 = thunk_FUN_4a161570(0x14);
      uVar4 = FUN_4a0c707c(uVar4,&DAT_4a08e804);
      FUN_4a16dd14(iVar2 + -0x2c,uVar4);
      uVar4 = thunk_FUN_4a161570(0x14);
      uVar4 = FUN_4a0c707c(uVar4,s_es_ES_4a08e814);
      FUN_4a16dd14(iVar2 + -0x2c,uVar4);
      uVar4 = thunk_FUN_4a161570(0x14);
      uVar4 = FUN_4a0c707c(uVar4,&DAT_4a08e81c);
      FUN_4a16dd14(iVar2 + -0x2c,uVar4);
      uVar4 = thunk_FUN_4a161570(0x14);
      uVar4 = FUN_4a0c707c(uVar4,&DAT_4a08e820);
      FUN_4a16dd14(iVar2 + -0x2c,uVar4);
      uVar4 = thunk_FUN_4a161570(0x14);
      uVar4 = FUN_4a0c707c(uVar4,s_zh_CN_4a08e824);
      FUN_4a16dd14(iVar2 + -0x2c,uVar4);
      uVar4 = thunk_FUN_4a161570(0x14);
      uVar4 = FUN_4a0c707c(uVar4,s_zh_HK_4a08e82c);
      FUN_4a16dd14(iVar2 + -0x2c,uVar4);
      goto LAB_4a08ebd4;
    }
    iVar5 = FUN_4a00142c(uVar3,s_ko_en_4a08e834);
    if (iVar5 == 0) {
      uVar4 = thunk_FUN_4a161570(0x14);
      uVar4 = FUN_4a0c707c(uVar4,&DAT_4a08e820);
      FUN_4a16dd14(iVar2 + -0x2c,uVar4);
LAB_4a08ebb8:
      uVar4 = thunk_FUN_4a161570(0x14);
      uVar4 = FUN_4a0c707c(uVar4,&DAT_4a08e7f4);
      FUN_4a16dd14(iVar2 + -0x2c,uVar4);
      goto LAB_4a08ebd4;
    }
    iVar5 = FUN_4a00142c(uVar3,s_all_lang_meego_4a08e83c);
    if (iVar5 == 0) {
      uVar4 = thunk_FUN_4a161570(0x14);
      uVar4 = FUN_4a0c707c(uVar4,&DAT_4a08e7f4);
      FUN_4a16dd14(iVar2 + -0x2c,uVar4);
      uVar4 = thunk_FUN_4a161570(0x14);
      uVar4 = FUN_4a0c707c(uVar4,s_fr_FR_4a08e7f8);
      FUN_4a16dd14(iVar2 + -0x2c,uVar4);
      uVar4 = thunk_FUN_4a161570(0x14);
      uVar4 = FUN_4a0c707c(uVar4,&DAT_4a08e800);
      FUN_4a16dd14(iVar2 + -0x2c,uVar4);
      uVar4 = thunk_FUN_4a161570(0x14);
      uVar4 = FUN_4a0c707c(uVar4,&DAT_4a08e804);
      FUN_4a16dd14(iVar2 + -0x2c,uVar4);
      uVar4 = thunk_FUN_4a161570(0x14);
      uVar4 = FUN_4a0c707c(uVar4,s_es_ES_4a08e814);
      FUN_4a16dd14(iVar2 + -0x2c,uVar4);
      uVar4 = thunk_FUN_4a161570(0x14);
      uVar4 = FUN_4a0c707c(uVar4,&DAT_4a08e820);
      FUN_4a16dd14(iVar2 + -0x2c,uVar4);
      uVar4 = thunk_FUN_4a161570(0x14);
      uVar4 = FUN_4a0c707c(uVar4,s_zh_CN_4a08e824);
      FUN_4a16dd14(iVar2 + -0x2c,uVar4);
      uVar4 = thunk_FUN_4a161570(0x14);
      uVar4 = FUN_4a0c707c(uVar4,s_zh_HK_4a08e82c);
      FUN_4a16dd14(iVar2 + -0x2c,uVar4);
      goto LAB_4a08ebd4;
    }
    iVar5 = FUN_4a00142c(uVar3,s_all_lang_ptBR_4a08eb7c);
    if (iVar5 == 0) {
      uVar4 = thunk_FUN_4a161570(0x14);
      uVar4 = FUN_4a0c707c(uVar4,&DAT_4a08e7f4);
      FUN_4a16dd14(iVar2 + -0x2c,uVar4);
      uVar4 = thunk_FUN_4a161570(0x14);
      uVar4 = FUN_4a0c707c(uVar4,s_fr_FR_4a08e7f8);
      FUN_4a16dd14(iVar2 + -0x2c,uVar4);
      uVar4 = thunk_FUN_4a161570(0x14);
      uVar4 = FUN_4a0c707c(uVar4,&DAT_4a08e800);
      FUN_4a16dd14(iVar2 + -0x2c,uVar4);
      uVar4 = thunk_FUN_4a161570(0x14);
      uVar4 = FUN_4a0c707c(uVar4,&DAT_4a08e804);
      FUN_4a16dd14(iVar2 + -0x2c,uVar4);
      uVar4 = thunk_FUN_4a161570(0x14);
      uVar4 = FUN_4a0c707c(uVar4,s_es_ES_4a08e814);
      FUN_4a16dd14(iVar2 + -0x2c,uVar4);
      uVar4 = thunk_FUN_4a161570(0x14);
      uVar4 = FUN_4a0c707c(uVar4,s_pt_BR_4a08eb8c);
      FUN_4a16dd14(iVar2 + -0x2c,uVar4);
      uVar4 = thunk_FUN_4a161570(0x14);
      uVar4 = FUN_4a0c707c(uVar4,&DAT_4a08e81c);
      FUN_4a16dd14(iVar2 + -0x2c,uVar4);
      uVar4 = thunk_FUN_4a161570(0x14);
      uVar4 = FUN_4a0c707c(uVar4,&DAT_4a08e820);
      FUN_4a16dd14(iVar2 + -0x2c,uVar4);
      uVar4 = thunk_FUN_4a161570(0x14);
      uVar4 = FUN_4a0c707c(uVar4,s_zh_CN_4a08e824);
      FUN_4a16dd14(iVar2 + -0x2c,uVar4);
      uVar4 = thunk_FUN_4a161570(0x14);
      uVar4 = FUN_4a0c707c(uVar4,s_zh_HK_4a08e82c);
      FUN_4a16dd14(iVar2 + -0x2c,uVar4);
      goto LAB_4a08ebd4;
    }
    iVar5 = FUN_4a00142c(uVar3,&DAT_4a08eb94);
    if (iVar5 != 0) {
      iVar5 = FUN_4a00142c(uVar3,&DAT_4a08eb98);
      if (iVar5 != 0) {
        iVar5 = FUN_4a00142c(uVar3,s_latam_4a08eb9c);
        if (iVar5 == 0) {
          uVar4 = thunk_FUN_4a161570(0x14);
          uVar4 = FUN_4a0c707c(uVar4,&DAT_4a08e7f4);
          FUN_4a16dd14(iVar2 + -0x2c,uVar4);
          uVar4 = thunk_FUN_4a161570(0x14);
          uVar4 = FUN_4a0c707c(uVar4,s_es_ES_4a08e814);
          FUN_4a16dd14(iVar2 + -0x2c,uVar4);
          uVar4 = thunk_FUN_4a161570(0x14);
          uVar4 = FUN_4a0c707c(uVar4,s_pt_BR_4a08eb8c);
          FUN_4a16dd14(iVar2 + -0x2c,uVar4);
          goto LAB_4a08ebd4;
        }
        iVar5 = FUN_4a00142c(uVar3,s_latam_fr_4a08eba4);
        if (iVar5 != 0) {
          iVar5 = FUN_4a00142c(uVar3,&DAT_4a08ebb0);
          if (iVar5 == 0) {
            uVar4 = thunk_FUN_4a161570(0x14);
            uVar4 = FUN_4a0c707c(uVar4,&DAT_4a08e7f4);
            FUN_4a16dd14(iVar2 + -0x2c,uVar4);
            uVar4 = thunk_FUN_4a161570(0x14);
            uVar4 = FUN_4a0c707c(uVar4,s_fr_FR_4a08e7f8);
            FUN_4a16dd14(iVar2 + -0x2c,uVar4);
            uVar4 = thunk_FUN_4a161570(0x14);
            uVar4 = FUN_4a0c707c(uVar4,&DAT_4a08e800);
            FUN_4a16dd14(iVar2 + -0x2c,uVar4);
            uVar4 = thunk_FUN_4a161570(0x14);
            uVar4 = FUN_4a0c707c(uVar4,&DAT_4a08e804);
            FUN_4a16dd14(iVar2 + -0x2c,uVar4);
            uVar4 = thunk_FUN_4a161570(0x14);
            uVar4 = FUN_4a0c707c(uVar4,s_es_ES_4a08e814);
            FUN_4a16dd14(iVar2 + -0x2c,uVar4);
            uVar4 = thunk_FUN_4a161570(0x14);
            uVar4 = FUN_4a0c707c(uVar4,&DAT_4a08e820);
            FUN_4a16dd14(iVar2 + -0x2c,uVar4);
            goto LAB_4a08ebd4;
          }
          goto LAB_4a08ebb8;
        }
        uVar4 = thunk_FUN_4a161570(0x14);
        uVar4 = FUN_4a0c707c(uVar4,&DAT_4a08e7f4);
        FUN_4a16dd14(iVar2 + -0x2c,uVar4);
        uVar4 = thunk_FUN_4a161570(0x14);
        uVar4 = FUN_4a0c707c(uVar4,s_es_ES_4a08e814);
        FUN_4a16dd14(iVar2 + -0x2c,uVar4);
        uVar4 = thunk_FUN_4a161570(0x14);
        uVar4 = FUN_4a0c707c(uVar4,s_pt_BR_4a08eb8c);
        FUN_4a16dd14(iVar2 + -0x2c,uVar4);
      }
      uVar4 = thunk_FUN_4a161570(0x14);
      uVar4 = FUN_4a0c707c(uVar4,s_fr_FR_4a08e7f8);
      FUN_4a16dd14(iVar2 + -0x2c,uVar4);
      goto LAB_4a08ebd4;
    }
  }
  uVar4 = thunk_FUN_4a161570(0x14);
  uVar4 = FUN_4a0c707c(uVar4,s_es_ES_4a08e814);
  FUN_4a16dd14(iVar2 + -0x2c,uVar4);
LAB_4a08ebd4:
  thunk_FUN_4a161530(uVar3);
  piVar7 = (int *)**(undefined4 **)(iVar2 + -0x18);
  piVar6 = (int *)0x0;
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0xc))(piVar7);
    piVar6 = piVar7;
  }
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))(piVar6);
  }
  iVar5 = FUN_4a1357f8(iVar2 + -0x30,piVar6);
  if (iVar5 != -1) {
    *(int *)(iVar2 + -0x10) = iVar5;
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0xc))(piVar6);
    }
    piVar7 = *(int **)(iVar2 + -0x14);
    if ((piVar7 != (int *)0x0) && (iVar5 = (**(code **)(*piVar7 + 8))(piVar7), iVar5 != 0)) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
    *(int **)(iVar2 + -0x14) = piVar6;
  }
  if ((piVar6 != (int *)0x0) && (iVar5 = (**(code **)(*piVar6 + 8))(piVar6), iVar5 != 0)) {
    (**(code **)(*piVar6 + 4))(piVar6);
  }
  if ((piVar6 != (int *)0x0) && (iVar5 = (**(code **)(*piVar6 + 8))(piVar6), iVar5 != 0)) {
    (**(code **)(*piVar6 + 4))(piVar6);
  }
  return iVar2 + -0x30;
}



// Address: 4a08ee08

int FUN_4a08ee08(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  *param_1 = PTR_PTR_4a08eef0;
  piVar3 = (int *)param_1[7];
  if ((piVar3 != (int *)0x0) && (iVar1 = (**(code **)(*piVar3 + 8))(piVar3), iVar1 != 0)) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  iVar1 = FUN_4a167c04(param_1 + 0xc);
  iVar4 = 0;
  *(undefined4 *)(iVar1 + -0x2c) = PTR_PTR_4a08eef4;
  if (0 < *(int *)(iVar1 + -0x1c)) {
    do {
      piVar3 = *(int **)(*(int *)(iVar1 + -0x18) + iVar4 * 4);
      *(undefined4 *)(*(int *)(iVar1 + -0x18) + iVar4 * 4) = 0;
      if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 8))(piVar3), iVar2 != 0)) {
        (**(code **)(*piVar3 + 4))(piVar3);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(iVar1 + -0x1c));
  }
  *(undefined4 *)(iVar1 + -0x1c) = 0;
  thunk_FUN_4a161530(*(undefined4 *)(iVar1 + -0x18));
  iVar1 = FUN_4a0c6bf4((undefined4 *)(iVar1 + -0x2c));
  return iVar1 + -4;
}



// Address: 4a08eef8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a08eef8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,int param_10)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (param_10 != 0) {
    iStack_34 = param_1;
    uStack_30 = param_2;
    uStack_2c = param_3;
    uStack_28 = param_4;
    uVar1 = thunk_FUN_4a161570(0x28);
    iStack_3c = param_10;
    uStack_48 = param_7;
    uStack_44 = param_8;
    uStack_40 = param_9;
    piVar2 = (int *)FUN_4a06e86c(uVar1,param_2,uStack_2c,uStack_28);
    (**(code **)(*piVar2 + 8))(piVar2);
    iStack_38 = *(int *)(param_1 + 8);
    iVar3 = *(int *)(*(int *)(param_1 + 8) + 4);
    while (iVar3 != 0) {
      iStack_3c = 0;
      if (*(uint *)(iVar3 + 0x10) < *(uint *)(param_1 + 4)) {
        iVar3 = *(int *)(iVar3 + 0xc);
      }
      else {
        iStack_38 = iVar3;
        iVar3 = *(int *)(iVar3 + 8);
      }
    }
    if ((*(int *)(param_1 + 8) == iStack_38) ||
       (iStack_3c = 0, *(uint *)(param_1 + 4) < *(uint *)(iStack_38 + 0x10))) {
      iStack_38 = *(int *)(param_1 + 8);
    }
    if (*(int *)(iStack_38 + 0x14) == 0) {
      FUN_4a1503d4(param_2,0x2800,&iStack_3c);
      FUN_4a1503d4(param_2,0x2801,&uStack_40);
      FUN_4a1503d4(param_2,0x2802,&uStack_44);
      FUN_4a1503d4(param_2,0x2803,&uStack_48);
      uVar1 = thunk_FUN_4a161570(0x20);
      uVar1 = FUN_4a090094(uVar1,iStack_3c,uStack_40,uStack_44);
      *(undefined4 *)(iStack_38 + 0x14) = uVar1;
    }
    FUN_4a08fe60(*(undefined4 *)(iStack_38 + 0x14),uStack_2c,piVar2);
    return;
  }
  return;
}



// Address: 4a08f068

void FUN_4a08f068(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  int local_84;
  int local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  uint local_6c;
  undefined4 uStack_68;
  uint local_64 [3];
  undefined1 local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int iStack_30;
  uint local_2c;
  uint local_28;
  
  local_3c = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 4);
  while (iVar2 != 0) {
    local_40 = 0;
    if (*(uint *)(iVar2 + 0x10) < param_3) {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    else {
      local_3c = iVar2;
      iVar2 = *(int *)(iVar2 + 8);
    }
  }
  if ((*(int *)(param_1 + 0x14) == local_3c) || (local_40 = 0, param_3 < *(uint *)(local_3c + 0x10))
     ) {
    local_3c = *(int *)(param_1 + 0x14);
  }
  local_34 = *(int *)(param_1 + 0x14);
  iStack_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  if (local_3c != local_34) {
    local_38 = *(uint *)(local_3c + 0x14);
    goto LAB_4a08f354;
  }
  piVar3 = (int *)(param_1 + 0x14);
  bVar4 = true;
  iVar2 = *(int *)(param_1 + 0x14);
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 4);
  while (iVar1 != 0) {
    local_84 = 0;
    bVar4 = param_3 < *(uint *)(iVar1 + 0x10);
    iVar2 = iVar1;
    if (bVar4) {
      iVar1 = *(int *)(iVar1 + 8);
    }
    else {
      iVar1 = *(int *)(iVar1 + 0xc);
    }
  }
  local_7c = iVar2;
  local_54 = param_3;
  local_50 = param_3;
  local_4c = param_3;
  local_48 = param_3;
  local_38 = param_3;
  if (bVar4) {
    local_80 = *(int *)(*piVar3 + 8);
    if (iVar2 != local_80) {
      local_7c = FUN_4a165b98();
      goto LAB_4a08f1cc;
    }
    FUN_4a167548(&local_84,piVar3,iVar2,iVar2,&local_4c,0);
    local_44 = local_84;
    local_40 = CONCAT31(local_40._1_3_,1);
  }
  else {
LAB_4a08f1cc:
    local_80 = 0;
    local_74 = 0;
    bVar4 = local_4c <= *(uint *)(local_7c + 0x10);
    if (bVar4) {
      local_78 = 0;
      local_44 = local_7c;
    }
    else {
      FUN_4a167548(&local_80,piVar3,0,iVar2,&local_4c,0);
      local_84 = 1;
      local_44 = local_80;
    }
    local_40 = CONCAT31(local_40._1_3_,!bVar4);
  }
  local_70 = 0;
  local_6c = local_28;
  uStack_68 = 0;
  local_64[0] = local_28;
  local_64[1] = 0;
  piVar3 = (int *)(param_1 + 8);
  bVar4 = true;
  iVar2 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 4);
  while (iVar1 != 0) {
    local_84 = 0;
    bVar4 = local_28 < *(uint *)(iVar1 + 0x10);
    iVar2 = iVar1;
    if (bVar4) {
      iVar1 = *(int *)(iVar1 + 8);
    }
    else {
      iVar1 = *(int *)(iVar1 + 0xc);
    }
  }
  local_7c = iVar2;
  if (bVar4) {
    local_80 = *(int *)(*piVar3 + 8);
    if (iVar2 != local_80) {
      local_7c = FUN_4a165b98();
      goto LAB_4a08f2f4;
    }
    FUN_4a1673e8(&local_84,piVar3,iVar2,iVar2,local_64,0);
    local_64[2] = local_84;
  }
  else {
LAB_4a08f2f4:
    local_80 = 0;
    local_74 = 0;
    if (local_64[0] <= *(uint *)(local_7c + 0x10)) {
      local_78 = 0;
      local_58 = 0;
      local_64[2] = local_7c;
      goto LAB_4a08f354;
    }
    FUN_4a1673e8(&local_80,piVar3,0,iVar2,local_64,0);
    local_84 = 1;
    local_64[2] = local_80;
  }
  local_58 = 1;
LAB_4a08f354:
  host_glBindTexture_arm(local_2c,local_38);
  *(uint *)(param_1 + 4) = local_28;
  return;
}



// Address: 4a08f374

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a08f374(int param_1,int param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  bool bStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  int iStack_40;
  bool bStack_3c;
  int iStack_38;
  uint local_34;
  int iStack_30;
  int local_2c;
  void *pvStack_28;
  
  local_34 = 0;
  iStack_30 = param_1;
  local_2c = param_2;
  pvStack_28 = param_3;
  host_glGenTextures_arm(param_2,param_3);
  iVar3 = 0;
  if (local_2c < 1) {
    return;
  }
  do {
    local_34 = *(uint *)((int)param_3 + iVar3 * 4);
    iStack_70 = *(int *)(param_1 + 0x14);
    iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 4);
    while (iVar2 != 0) {
      iStack_74 = 0;
      if (*(uint *)(iVar2 + 0x10) < local_34) {
        iVar2 = *(int *)(iVar2 + 0xc);
      }
      else {
        iStack_70 = iVar2;
        iVar2 = *(int *)(iVar2 + 8);
      }
    }
    if ((*(int *)(param_1 + 0x14) == iStack_70) ||
       (iStack_74 = 0, local_34 < *(uint *)(iStack_70 + 0x10))) {
      iStack_70 = *(int *)(param_1 + 0x14);
    }
    iStack_38 = *(int *)(param_1 + 0x14);
    if (iStack_70 != iStack_38) {
      do {
        host_glGenTextures_arm(1,&local_34);
        iStack_74 = *(int *)(param_1 + 0x14);
        iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 4);
        while (iVar2 != 0) {
          uStack_78 = 0;
          if (*(uint *)(iVar2 + 0x10) < local_34) {
            iVar2 = *(int *)(iVar2 + 0xc);
          }
          else {
            iStack_74 = iVar2;
            iVar2 = *(int *)(iVar2 + 8);
          }
        }
        if ((*(int *)(param_1 + 0x14) == iStack_74) ||
           (uStack_78 = 0, local_34 < *(uint *)(iStack_74 + 0x10))) {
          iStack_74 = *(int *)(param_1 + 0x14);
        }
        iStack_38 = *(int *)(param_1 + 0x14);
        iStack_70 = iStack_74;
      } while (iStack_74 != iStack_38);
    }
    piVar4 = (int *)(param_1 + 0x14);
    *(uint *)((int)param_3 + iVar3 * 4) = local_34;
    uStack_50 = local_34;
    uStack_4c = local_34;
    uStack_48 = local_34;
    uStack_44 = local_34;
    bVar5 = true;
    iVar2 = *(int *)(param_1 + 0x14);
    iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 4);
    while (iVar1 != 0) {
      iStack_84 = 0;
      bVar5 = local_34 < *(uint *)(iVar1 + 0x10);
      iVar2 = iVar1;
      if (bVar5) {
        iVar1 = *(int *)(iVar1 + 8);
      }
      else {
        iVar1 = *(int *)(iVar1 + 0xc);
      }
    }
    iStack_7c = iVar2;
    if (bVar5) {
      iStack_80 = *(int *)(*piVar4 + 8);
      if (iVar2 != iStack_80) {
        iStack_7c = FUN_4a165b98();
        goto LAB_4a08f598;
      }
      FUN_4a167548(&iStack_84,piVar4,iVar2,iVar2);
      iStack_40 = iStack_84;
      bStack_3c = true;
    }
    else {
LAB_4a08f598:
      iStack_80 = 0;
      iStack_74 = 0;
      bVar5 = uStack_48 <= *(uint *)(iStack_7c + 0x10);
      if (bVar5) {
        uStack_78 = 0;
        iStack_40 = iStack_7c;
      }
      else {
        FUN_4a167548(&iStack_80,piVar4,0,iVar2);
        iStack_84 = 1;
        iStack_40 = iStack_80;
      }
      bStack_3c = !bVar5;
    }
    uStack_6c = 0;
    uStack_68 = local_34;
    uStack_64 = 0;
    uStack_60 = local_34;
    uStack_5c = 0;
    piVar4 = (int *)(param_1 + 8);
    bVar5 = true;
    iVar2 = *(int *)(param_1 + 8);
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 4);
    while (iVar1 != 0) {
      iStack_84 = 0;
      bVar5 = local_34 < *(uint *)(iVar1 + 0x10);
      iVar2 = iVar1;
      if (bVar5) {
        iVar1 = *(int *)(iVar1 + 8);
      }
      else {
        iVar1 = *(int *)(iVar1 + 0xc);
      }
    }
    iStack_7c = iVar2;
    if (bVar5) {
      iStack_80 = *(int *)(*piVar4 + 8);
      if (iVar2 != iStack_80) {
        iStack_7c = FUN_4a165b98();
        goto LAB_4a08f6d8;
      }
      FUN_4a1673e8(&iStack_84,piVar4,iVar2,iVar2);
      iStack_58 = iStack_84;
      bStack_54 = true;
    }
    else {
LAB_4a08f6d8:
      iStack_80 = 0;
      iStack_74 = 0;
      bVar5 = uStack_60 <= *(uint *)(iStack_7c + 0x10);
      if (bVar5) {
        uStack_78 = 0;
        iStack_58 = iStack_7c;
      }
      else {
        FUN_4a1673e8(&iStack_80,piVar4,0,iVar2);
        iStack_84 = 1;
        iStack_58 = iStack_80;
      }
      bStack_54 = !bVar5;
    }
    iVar3 = iVar3 + 1;
    if (local_2c <= iVar3) {
      return;
    }
  } while( true );
}



// Address: 4a08f754

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a08f754(int param_1)

{
  undefined4 local_10;
  
  local_10 = *(int *)(*(int *)(param_1 + 0x14) + 8);
  if (local_10 != *(int *)(param_1 + 0x14)) {
    do {
      host_glDeleteTextures_arm(1,(void *)(local_10 + 0x14));
      local_10 = FUN_4a165c0c();
    } while (local_10 != *(int *)(param_1 + 0x14));
    return;
  }
  return;
}



// Address: 4a08f7c0

void FUN_4a08f7c0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = param_3 == 0x2800 || param_3 == 0x2801;
  if (param_3 != 0x2800 && param_3 != 0x2801) {
    bVar3 = param_3 == 0x2802;
  }
  if (!bVar3) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 4);
  while (iVar1 != 0) {
    if (*(uint *)(iVar1 + 0x10) < *(uint *)(param_1 + 4)) {
      iVar1 = *(int *)(iVar1 + 0xc);
    }
    else {
      iVar2 = iVar1;
      iVar1 = *(int *)(iVar1 + 8);
    }
  }
  if ((*(int *)(param_1 + 8) == iVar2) || (*(uint *)(param_1 + 4) < *(uint *)(iVar2 + 0x10))) {
    iVar2 = *(int *)(param_1 + 8);
  }
  bVar3 = iVar2 != *(int *)(param_1 + 8);
  if (bVar3) {
    iVar2 = *(int *)(iVar2 + 0x14);
  }
  if (!bVar3 || iVar2 == 0) {
    return;
  }
  if (param_3 == 0x2800) {
    *(undefined4 *)(iVar2 + 0x10) = param_4;
    return;
  }
  if (param_3 == 0x2801) {
    *(undefined4 *)(iVar2 + 0x14) = param_4;
    return;
  }
  if (param_3 == 0x2802) {
    *(undefined4 *)(iVar2 + 0x18) = param_4;
    return;
  }
  if (param_3 == 0x2803) {
    *(undefined4 *)(iVar2 + 0x1c) = param_4;
  }
  return;
}



// Address: 4a08f8c4

/* WARNING: Removing unreachable block (ram,0x4a08fa78) */

void FUN_4a08f8c4(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  iVar5 = 0;
  if (0 < param_2) {
    do {
      uVar3 = *(uint *)(param_3 + iVar5 * 4);
      iVar2 = *(int *)(param_1 + 0x14);
      iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 4);
      while (iVar1 != 0) {
        if (*(uint *)(iVar1 + 0x10) < uVar3) {
          iVar1 = *(int *)(iVar1 + 0xc);
        }
        else {
          iVar2 = iVar1;
          iVar1 = *(int *)(iVar1 + 8);
        }
      }
      if ((*(int *)(param_1 + 0x14) == iVar2) || (uVar3 < *(uint *)(iVar2 + 0x10))) {
        iVar2 = *(int *)(param_1 + 0x14);
      }
      if (iVar2 != *(int *)(param_1 + 0x14)) {
        host_glDeleteTextures_arm(1,(void *)(iVar2 + 0x14));
        iVar1 = *(int *)(param_1 + 0x14);
        iVar2 = FUN_4a165c70(iVar2,iVar1 + 4,iVar1 + 8,iVar1 + 0xc);
        if (iVar2 != 0) {
          FUN_4a14f21c();
        }
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
        iVar2 = *(int *)(param_1 + 8);
        iVar1 = *(int *)(*(int *)(param_1 + 8) + 4);
        while (iVar1 != 0) {
          if (*(uint *)(iVar1 + 0x10) < uVar3) {
            iVar1 = *(int *)(iVar1 + 0xc);
          }
          else {
            iVar2 = iVar1;
            iVar1 = *(int *)(iVar1 + 8);
          }
        }
        if ((*(int *)(param_1 + 8) == iVar2) || (uVar3 < *(uint *)(iVar2 + 0x10))) {
          iVar2 = *(int *)(param_1 + 8);
        }
        if (iVar2 != *(int *)(param_1 + 8)) {
          piVar6 = *(int **)(iVar2 + 0x14);
          if (piVar6 != (int *)0x0) {
            piVar4 = (int *)*piVar6;
            if ((int *)piVar6[1] != piVar4) {
              do {
                if ((int *)*piVar4 != (int *)0x0) {
                  (**(code **)(*(int *)*piVar4 + 4))();
                  *piVar4 = 0;
                }
                piVar4 = piVar4 + 1;
              } while ((int *)piVar6[1] != piVar4);
            }
            piVar6[1] = *piVar6;
            if (*piVar6 != 0) {
              FUN_4a14f21c();
            }
            thunk_FUN_4a161530(piVar6);
            *(undefined4 *)(iVar2 + 0x14) = 0;
          }
          iVar1 = *(int *)(param_1 + 8);
          iVar2 = FUN_4a165c70(iVar2,iVar1 + 4,iVar1 + 8,iVar1 + 0xc);
          if (iVar2 != 0) {
            FUN_4a14f21c();
          }
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2);
    return;
  }
  return;
}



// Address: 4a08fafc

void FUN_4a08fafc(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int local_30;
  uint local_2c;
  int local_28;
  
  local_2c = 0;
  local_30 = *(int *)(*(int *)(param_1 + 8) + 8);
  local_28 = *(int *)(param_1 + 8);
  if (local_30 != local_28) {
    do {
      host_glGenTextures_arm(1,&local_2c);
      piVar4 = *(int **)(local_30 + 0x14);
      if (piVar4 != (int *)0x0) {
        if (piVar4[1] - *piVar4 >> 2 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)*piVar4;
        }
        host_glBindTexture_arm(*(uint *)(iVar1 + 4),local_2c);
        uVar3 = 0;
        do {
          if (uVar3 < (uint)(piVar4[1] - *piVar4 >> 2)) {
            piVar5 = *(int **)(*piVar4 + uVar3 * 4);
          }
          else {
            piVar5 = (int *)0x0;
          }
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 8))(piVar5);
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 <= (uint)piVar4[3]);
        host_glTexParameterx_arm(piVar5[1],0x2800,piVar4[4]);
        host_glTexParameterx_arm(piVar5[1],0x2801,piVar4[5]);
        host_glTexParameterx_arm(piVar5[1],0x2802,piVar4[6]);
        host_glTexParameterx_arm(piVar5[1],0x2803,piVar4[7]);
        iVar1 = *(int *)(param_1 + 0x14);
        iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 4);
        while (iVar2 != 0) {
          if (*(uint *)(iVar2 + 0x10) < *(uint *)(local_30 + 0x10)) {
            iVar2 = *(int *)(iVar2 + 0xc);
          }
          else {
            iVar1 = iVar2;
            iVar2 = *(int *)(iVar2 + 8);
          }
        }
        if ((*(int *)(param_1 + 0x14) == iVar1) ||
           (*(uint *)(local_30 + 0x10) < *(uint *)(iVar1 + 0x10))) {
          iVar1 = *(int *)(param_1 + 0x14);
        }
        *(uint *)(iVar1 + 0x14) = local_2c;
      }
      local_30 = FUN_4a165c0c(local_30);
      local_28 = *(int *)(param_1 + 8);
    } while (local_30 != local_28);
  }
  FUN_4a08f068(param_1,0xde1,*(undefined4 *)(param_1 + 4));
  return;
}



// Address: 4a08fcac

void FUN_4a08fcac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  iStack_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  uVar1 = thunk_FUN_4a161570(0x24);
  local_48 = param_7;
  local_44 = param_8;
  local_40 = param_9;
  piVar2 = (int *)FUN_4a0a6de4(uVar1,param_2,local_2c,param_4,param_5,param_6);
  (**(code **)(*piVar2 + 8))(piVar2);
  local_38 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 4);
  while (iVar3 != 0) {
    local_3c = 0;
    if (*(uint *)(iVar3 + 0x10) < *(uint *)(param_1 + 4)) {
      iVar3 = *(int *)(iVar3 + 0xc);
    }
    else {
      local_38 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
  }
  if ((*(int *)(param_1 + 8) == local_38) ||
     (local_3c = 0, *(uint *)(param_1 + 4) < *(uint *)(local_38 + 0x10))) {
    local_38 = *(int *)(param_1 + 8);
  }
  if (*(int *)(local_38 + 0x14) == 0) {
    FUN_4a1503d4(param_2,0x2800,&local_3c);
    FUN_4a1503d4(param_2,0x2801,&local_40);
    FUN_4a1503d4(param_2,0x2802,&local_44);
    FUN_4a1503d4(param_2,0x2803,&local_48);
    uVar1 = thunk_FUN_4a161570(0x20);
    uVar1 = FUN_4a090094(uVar1,local_3c,local_40,local_44,local_48,8);
    *(undefined4 *)(local_38 + 0x14) = uVar1;
  }
  FUN_4a08fe60(*(undefined4 *)(local_38 + 0x14),local_2c,piVar2);
  return;
}



// Address: 4a08fe08

void FUN_4a08fe08(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_4a08fe38;
  if (*(int **)PTR_DAT_4a08fe38 != (int *)0x0) {
    (**(code **)(**(int **)PTR_DAT_4a08fe38 + 4))();
  }
  *(undefined4 *)puVar1 = 0;
  return;
}



// Address: 4a08fe3c

void FUN_4a08fe3c(void)

{
  undefined4 uVar1;
  
  thunk_FUN_4a161570(0x20);
  uVar1 = FUN_4a0901ec();
  *(undefined4 *)PTR_DAT_4a08fe5c = uVar1;
  return;
}



// Address: 4a08fe60

void FUN_4a08fe60(int *param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  int *piStack_30;
  uint uStack_2c;
  undefined4 local_28;
  
  uVar6 = param_1[1] - *param_1 >> 2;
  local_28 = param_3;
  uStack_2c = param_2;
  piStack_30 = param_1;
  if (param_2 < uVar6) {
    piVar1 = *(int **)(*param_1 + param_2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(*param_1 + param_2 * 4) = local_28;
  }
  else {
    for (; uVar6 <= param_2; uVar6 = uVar6 + 1) {
      if (uVar6 == param_2) {
        puVar8 = (undefined4 *)param_1[1];
        if (puVar8 == (undefined4 *)param_1[2]) {
          local_38 = 1;
          local_34 = 0;
          local_3c = param_1[1] - *param_1 >> 2;
          if (local_3c == 0) {
            piVar1 = &local_38;
          }
          else {
            piVar1 = &local_3c;
          }
          iVar7 = *piVar1 + local_3c;
          if (iVar7 == 0) {
            puVar2 = (undefined4 *)0x0;
          }
          else {
            puVar2 = (undefined4 *)FUN_4a15e080(iVar7 * 4);
            if (puVar2 == (undefined4 *)0x0) {
              puVar2 = (undefined4 *)FUN_4a1669a8();
            }
          }
          puVar5 = (undefined4 *)*param_1;
          iVar4 = local_38;
          puVar9 = puVar2;
          if (puVar8 != puVar5) {
            iVar3 = FUN_4a000ec8(puVar2);
            iVar4 = local_38;
            puVar9 = (undefined4 *)((int)puVar8 + (iVar3 - (int)puVar5));
          }
          do {
            iVar4 = iVar4 + -1;
            puVar8 = puVar9 + 1;
            *puVar9 = local_28;
            puVar9 = puVar8;
          } while (iVar4 != 0);
          local_40 = 0;
          iVar4 = *param_1;
joined_r0x4a09005c:
          if (iVar4 != 0) {
            FUN_4a14f21c();
          }
          param_1[2] = (int)(puVar2 + iVar7);
          *param_1 = (int)puVar2;
          param_1[1] = (int)puVar8;
        }
        else {
          *puVar8 = local_28;
          param_1[1] = param_1[1] + 4;
        }
      }
      else {
        local_34 = 0;
        puVar8 = (undefined4 *)param_1[1];
        if (puVar8 == (undefined4 *)param_1[2]) {
          local_3c = 1;
          local_38 = 0;
          local_40 = param_1[1] - *param_1 >> 2;
          if (local_40 == 0) {
            piVar1 = &local_3c;
          }
          else {
            piVar1 = &local_40;
          }
          iVar7 = *piVar1 + local_40;
          if (iVar7 == 0) {
            puVar2 = (undefined4 *)0x0;
          }
          else {
            puVar2 = (undefined4 *)FUN_4a15e080(iVar7 * 4);
            if (puVar2 == (undefined4 *)0x0) {
              puVar2 = (undefined4 *)FUN_4a1669a8();
            }
          }
          puVar5 = (undefined4 *)*param_1;
          iVar4 = local_3c;
          puVar9 = puVar2;
          if (puVar8 != puVar5) {
            iVar3 = FUN_4a000ec8(puVar2);
            iVar4 = local_3c;
            puVar9 = (undefined4 *)((int)puVar8 + (iVar3 - (int)puVar5));
          }
          do {
            iVar4 = iVar4 + -1;
            puVar8 = puVar9 + 1;
            *puVar9 = local_34;
            puVar9 = puVar8;
          } while (iVar4 != 0);
          iVar4 = *param_1;
          goto joined_r0x4a09005c;
        }
        *puVar8 = 0;
        param_1[1] = param_1[1] + 4;
      }
    }
  }
  if (param_2 <= (uint)param_1[3]) {
    param_2 = param_1[3];
  }
  param_1[3] = param_2;
  return;
}



// Address: 4a090094

int * FUN_4a090094(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int local_34;
  int local_30 [3];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  param_1[5] = param_3;
  param_1[6] = param_4;
  param_1[7] = param_5;
  if (param_6 != 0) {
    iVar1 = FUN_4a15e080(param_6 << 2);
    if (iVar1 == 0) {
      iVar1 = FUN_4a1669a8();
    }
    *param_1 = iVar1;
    param_1[1] = iVar1;
    param_1[2] = iVar1 + param_6 * 4;
  }
  iVar1 = 0;
  if (0 < param_6) {
    do {
      local_30[2] = 0;
      puVar8 = (undefined4 *)param_1[1];
      if (puVar8 == (undefined4 *)param_1[2]) {
        local_30[0] = 1;
        local_30[1] = 0;
        local_34 = param_1[1] - *param_1 >> 2;
        if (local_34 == 0) {
          piVar2 = local_30;
        }
        else {
          piVar2 = &local_34;
        }
        iVar7 = *piVar2 + local_34;
        if (iVar7 == 0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = (undefined4 *)FUN_4a15e080(iVar7 * 4);
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)FUN_4a1669a8();
          }
        }
        puVar6 = (undefined4 *)*param_1;
        iVar5 = local_30[0];
        puVar9 = puVar3;
        if (puVar8 != puVar6) {
          iVar4 = FUN_4a000ec8(puVar3);
          iVar5 = local_30[0];
          puVar9 = (undefined4 *)((int)puVar8 + (iVar4 - (int)puVar6));
        }
        do {
          iVar5 = iVar5 + -1;
          puVar8 = puVar9 + 1;
          *puVar9 = local_30[2];
          puVar9 = puVar8;
        } while (iVar5 != 0);
        if (*param_1 != 0) {
          FUN_4a14f21c();
        }
        param_1[2] = (int)(puVar3 + iVar7);
        *param_1 = (int)puVar3;
        param_1[1] = (int)puVar8;
      }
      else {
        *puVar8 = 0;
        param_1[1] = param_1[1] + 4;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_6);
  }
  return param_1;
}



// Address: 4a0901ec

undefined4 * FUN_4a0901ec(undefined4 *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int *piVar3;
  
  *param_1 = PTR_PTR_4a09029c;
  param_1[1] = 0;
  piVar2 = param_1 + 2;
  param_1[2] = 0;
  puVar1 = (undefined1 *)FUN_4a15e080(0x18);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)FUN_4a1669a8();
  }
  *piVar2 = (int)puVar1;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *puVar1 = 0;
  *(undefined4 *)(*piVar2 + 4) = 0;
  *(int *)(*piVar2 + 8) = *piVar2;
  piVar3 = param_1 + 5;
  *(int *)(*piVar2 + 0xc) = *piVar2;
  *piVar3 = 0;
  puVar1 = (undefined1 *)FUN_4a15e080(0x18);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)FUN_4a1669a8();
  }
  *piVar3 = (int)puVar1;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *puVar1 = 0;
  *(undefined4 *)(*piVar3 + 4) = 0;
  *(int *)(*piVar3 + 8) = *piVar3;
  *(int *)(*piVar3 + 0xc) = *piVar3;
  return param_1;
}



// Address: 4a0902b8

/* WARNING: Removing unreachable block (ram,0x4a09034c) */

undefined4 * FUN_4a0902b8(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int local_20;
  
  *param_1 = PTR_PTR_4a090548;
  local_20 = *(int *)(param_1[2] + 8);
  if (local_20 != param_1[2]) {
    do {
      piVar3 = *(int **)(local_20 + 0x14);
      if (piVar3 != (int *)0x0) {
        piVar2 = (int *)*piVar3;
        if ((int *)piVar3[1] != piVar2) {
          do {
            if ((int *)*piVar2 != (int *)0x0) {
              (**(code **)(*(int *)*piVar2 + 4))();
              *piVar2 = 0;
            }
            piVar2 = piVar2 + 1;
          } while ((int *)piVar3[1] != piVar2);
        }
        piVar3[1] = *piVar3;
        if (*piVar3 != 0) {
          FUN_4a14f21c();
        }
        thunk_FUN_4a161530(piVar3);
        *(undefined4 *)(local_20 + 0x14) = 0;
      }
      local_20 = FUN_4a165c0c(local_20);
    } while (local_20 != param_1[2]);
  }
  piVar3 = param_1 + 2;
  if (param_1[3] != 0) {
    iVar4 = *(int *)(*piVar3 + 4);
    while (iVar1 = iVar4, iVar1 != 0) {
      FUN_4a1673a8(piVar3,*(undefined4 *)(iVar1 + 0xc));
      iVar4 = *(int *)(iVar1 + 8);
      if (iVar1 != 0) {
        FUN_4a14f21c(iVar1);
      }
    }
    *(int *)(*piVar3 + 8) = *piVar3;
    *(undefined4 *)(*piVar3 + 4) = 0;
    *(int *)(*piVar3 + 0xc) = *piVar3;
    param_1[3] = 0;
  }
  piVar3 = param_1 + 5;
  if (param_1[6] != 0) {
    iVar4 = *(int *)(*piVar3 + 4);
    while (iVar1 = iVar4, iVar1 != 0) {
      FUN_4a167508(piVar3,*(undefined4 *)(iVar1 + 0xc));
      iVar4 = *(int *)(iVar1 + 8);
      if (iVar1 != 0) {
        FUN_4a14f21c(iVar1);
      }
    }
    *(int *)(*piVar3 + 8) = *piVar3;
    *(undefined4 *)(*piVar3 + 4) = 0;
    *(int *)(*piVar3 + 0xc) = *piVar3;
    param_1[6] = 0;
  }
  piVar3 = param_1 + 5;
  if (param_1[6] != 0) {
    iVar4 = *(int *)(*piVar3 + 4);
    while (iVar1 = iVar4, iVar1 != 0) {
      FUN_4a167508(piVar3,*(undefined4 *)(iVar1 + 0xc));
      iVar4 = *(int *)(iVar1 + 8);
      if (iVar1 != 0) {
        FUN_4a14f21c(iVar1);
      }
    }
    *(int *)(*piVar3 + 8) = *piVar3;
    *(undefined4 *)(*piVar3 + 4) = 0;
    *(int *)(*piVar3 + 0xc) = *piVar3;
    param_1[6] = 0;
  }
  if (*piVar3 != 0) {
    FUN_4a14f21c();
  }
  piVar3 = param_1 + 2;
  if (param_1[3] != 0) {
    iVar4 = *(int *)(*piVar3 + 4);
    while (iVar1 = iVar4, iVar1 != 0) {
      FUN_4a1673a8(piVar3,*(undefined4 *)(iVar1 + 0xc));
      iVar4 = *(int *)(iVar1 + 8);
      if (iVar1 != 0) {
        FUN_4a14f21c(iVar1);
      }
    }
    *(int *)(*piVar3 + 8) = *piVar3;
    *(undefined4 *)(*piVar3 + 4) = 0;
    *(int *)(*piVar3 + 0xc) = *piVar3;
    param_1[3] = 0;
  }
  if (*piVar3 != 0) {
    FUN_4a14f21c();
  }
  return param_1;
}



// Address: 4a09054c

void FUN_4a09054c(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x74) != 0) {
    *(undefined4 *)(param_1 + 0x74) = 0;
    iVar1 = FUN_4a134aa8(param_1);
    if (*(int *)(iVar1 + 0x40) == param_1) {
      *(undefined4 *)(iVar1 + 0x40) = 0;
    }
    return;
  }
  return;
}



// Address: 4a090580

/* WARNING: Removing unreachable block (ram,0x4a0faea0) */
/* WARNING: Removing unreachable block (ram,0x4a0fae9c) */
/* WARNING: Removing unreachable block (ram,0x4a0faebc) */
/* WARNING: Removing unreachable block (ram,0x4a0faf08) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a090580(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int extraout_r1;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(int *)(param_1 + 0x74) != 0) {
    return;
  }
  FUN_4a08c244(param_1,param_2,param_3);
  piVar8 = (int *)0x0;
  if (param_2 != 0) {
    if (param_2 != 3) {
                    /* WARNING: Could not recover jumptable at 0x4a090688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    piVar6 = piVar8;
    if (*(int *)(param_1 + 0x84) != 0) {
      piVar6 = *(int **)(*(int *)(param_1 + 0x84) + 8);
    }
    if (piVar6[2] == -1) {
      return;
    }
    if (*(int *)(param_1 + 0x98) != 0) {
      piVar8 = *(int **)(*(int *)(param_1 + 0x98) + 8);
    }
    uVar9 = 0x15;
    if (piVar8[piVar6[2] + 5] == -2) {
      uVar9 = 0x16;
    }
    uVar4 = FUN_4a134aa8(param_1);
    FUN_4a0cf554(uVar4,uVar9);
    *(undefined4 *)(param_1 + 0x74) = 1;
    uVar9 = FUN_4a134aa8(param_1);
    FUN_4a0cd790(uVar9,param_1);
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
                    /* WARNING: Could not recover jumptable at 0x4a0faeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)switchD_4a0faeb8::switchdataD_4a0faec0)();
    return;
  }
  iVar2 = *(int *)(param_3 + 0xc);
  if (iVar2 != 0) {
    iVar7 = *(int *)(iVar2 + 8);
    iVar3 = *(int *)(iVar2 + 8);
  }
  else {
    iVar3 = 0;
    iVar7 = extraout_r1;
  }
  uVar9 = *(undefined4 *)(iVar3 + 8);
  if (iVar2 == 0) {
    iVar7 = 0;
  }
  iVar2 = FUN_4a135720(param_1,*(undefined4 *)(iVar7 + 4));
  puVar1 = PTR_DAT_4a090704;
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0905f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  uVar4 = *(undefined4 *)(PTR_DAT_4a090704 + 0x1c);
  uVar5 = FUN_4a17295c(uVar4,0xffffffff);
  uVar10 = *(undefined4 *)(param_1 + 0x44);
  uVar9 = FUN_4a171fac(uVar9);
  uVar9 = FUN_4a1725c0(uVar9,*(undefined4 *)(puVar1 + 4));
  uVar9 = FUN_4a1725c0(uVar9,uVar10);
  uVar9 = FUN_4a171a94(uVar9,uVar5);
  FUN_4a171bb8(uVar9,uVar4);
  iVar2 = FUN_4a171e1c();
  if (iVar2 < 0) {
                    /* WARNING: Could not recover jumptable at 0x4a090648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  iVar7 = *(int *)(param_1 + 0x84);
  piVar6 = piVar8;
  if (iVar7 != 0) {
    piVar6 = *(int **)(iVar7 + 8);
  }
  if (*piVar6 <= iVar2) {
    return;
  }
  if (iVar7 != 0) {
    piVar8 = *(int **)(iVar7 + 8);
  }
  piVar8[2] = iVar2;
  return;
}



// Address: 4a090720

void FUN_4a090720(int param_1,int *param_2)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  undefined4 extraout_r1_05;
  undefined4 extraout_r1_06;
  undefined4 extraout_r1_07;
  undefined4 extraout_r1_08;
  undefined4 extraout_r1_09;
  undefined4 extraout_r1_10;
  undefined4 extraout_r1_11;
  undefined4 extraout_r1_12;
  undefined4 extraout_r1_13;
  int *piVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  undefined4 uVar26;
  undefined1 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined4 local_54;
  undefined4 local_50;
  
  FUN_4a02b86c();
  FUN_4a134a98(param_1,1);
  iVar3 = FUN_4a0ff494();
  puVar2 = PTR_DAT_4a0913c8;
  iVar4 = iVar3 + 0x278;
  iVar5 = iVar3 + 0x128;
  if (*(int *)(param_1 + 0x84) == 0) {
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = *(uint **)(*(int *)(param_1 + 0x84) + 8);
  }
  uVar24 = *puVar6;
  uVar7 = *(undefined4 *)(PTR_DAT_4a0913c8 + 8);
  uVar8 = FUN_4a17211c(uVar7,DAT_4a0913c4);
  uVar9 = FUN_4a17211c(uVar7,0xbf000000);
  uVar10 = FUN_4a17295c(uVar7,0xffffffff);
  uVar7 = FUN_4a17211c(uVar7,DAT_4a0913cc);
  local_50 = FUN_4a09f974(iVar5,0x129);
  piVar22 = *(int **)PTR_DAT_4a0913d0;
  if (*piVar22 == 0x3f800000) {
    local_50 = 0;
  }
  uVar11 = FUN_4a17295c(local_50,0xffffffff);
  bVar1 = false;
  iVar12 = FUN_4a0bc1f8(piVar22);
  if (iVar12 != 0x140) {
    uVar28 = FUN_4a0bc1f8(*(undefined4 *)PTR_DAT_4a0913d0);
    uVar29 = CONCAT44((int)((ulonglong)uVar28 >> 0x20),uVar11);
    if ((int)uVar28 != 400) goto LAB_4a090848;
  }
  local_50 = FUN_4a17295c(local_50,0xfffffffe);
  uVar29 = FUN_4a17295c(uVar11,0xfffffffe);
  bVar1 = true;
LAB_4a090848:
  uVar11 = (undefined4)((ulonglong)uVar29 >> 0x20);
  local_54 = (undefined4)uVar29;
  uVar27 = true;
  uVar23 = 0;
  if (0 < (int)uVar24) {
    do {
      uVar11 = FUN_4a171fac(uVar23,uVar11);
      uVar11 = FUN_4a17211c(uVar11,*(undefined4 *)(puVar2 + 0x1c));
      uVar13 = FUN_4a171a94(*(undefined4 *)(param_1 + 0x44),uVar11);
      FUN_4a1720a0(uVar13,uVar8);
      uVar11 = extraout_r1;
      if ((bool)uVar27) {
        FUN_4a172458(uVar13);
        uVar11 = extraout_r1_00;
      }
      if ((bool)uVar27) {
        uVar11 = 0x3f800000;
        FUN_4a172458(uVar13,uVar10);
        if ((bool)uVar27) {
          FUN_4a1720a0(uVar13,uVar9);
          if (!(bool)uVar27) {
            uVar11 = FUN_4a1725c0(uVar8,uVar9);
            uVar14 = FUN_4a1725c0(uVar13,uVar9);
            uVar11 = FUN_4a171bb8(uVar14,uVar11);
            uVar11 = FUN_4a1724e0(uVar11,0x3f800000);
          }
        }
        else {
          uVar11 = FUN_4a1725c0(uVar7,uVar10);
          uVar14 = FUN_4a1725c0(uVar13,uVar10);
          uVar11 = FUN_4a171bb8(uVar14,uVar11);
          uVar11 = FUN_4a1724e0(uVar11,0x3f800000);
        }
        FUN_4a171bb8(uVar13,*(undefined4 *)(puVar2 + 0x10));
        FUN_4a002c64();
        uVar14 = FUN_4a002d64();
        uVar14 = FUN_4a17211c(uVar14,*(undefined4 *)(puVar2 + 0x10));
        uVar15 = *(undefined4 *)(puVar2 + 0xc);
        uVar16 = FUN_4a17295c(uVar15,0xffffffff);
        uVar14 = FUN_4a171a94(*(undefined4 *)(puVar2 + 0x18),uVar14);
        uVar14 = FUN_4a171a94(uVar14,uVar16);
        uVar14 = FUN_4a171a94(uVar14,local_50);
        uVar13 = FUN_4a171a94(*(undefined4 *)(puVar2 + 4),uVar13);
        FUN_4a0a02bc(iVar5,0x11f,0x120,0x121,uVar14,uVar13,uVar15,uVar11,uVar11,0,0);
        uVar11 = extraout_r1_01;
      }
      uVar23 = uVar23 + 1;
      uVar27 = uVar24 <= uVar23;
    } while ((int)uVar23 < (int)uVar24);
  }
  uVar11 = FUN_4a1725c0(*(undefined4 *)puVar2,0x43320000);
  uVar13 = FUN_4a1725c0(*(undefined4 *)(puVar2 + 4),0x42c40000);
  FUN_4a09f664(iVar5,0x128,uVar11,uVar13,0x3f800000,0x3f800000,0x3f800000,0);
  uVar14 = FUN_4a171a94(uVar11,0x42ae0000);
  uVar14 = FUN_4a171a94(uVar14,local_54);
  uVar15 = FUN_4a1725c0(uVar13,0x41300000);
  if (bVar1) {
    uVar16 = 0x40100000;
  }
  else if (**(int **)PTR_DAT_4a0913d0 == 0x3f800000) {
    uVar16 = 0x40000000;
  }
  else {
    uVar16 = 0x40400000;
  }
  FUN_4a09f664(iVar5,0x129,uVar14,uVar15,0x3f800000,uVar16,0x3f800000,0);
  uVar14 = FUN_4a171a94(uVar11,0x43110000);
  uVar14 = FUN_4a171a94(uVar14,local_50);
  uVar15 = FUN_4a1725c0(uVar13,0x41000000);
  FUN_4a09f664(iVar5,0x12a,uVar14,uVar15,0x3f800000,0x3f800000,0x3f800000,0);
  uVar14 = FUN_4a171a94(uVar11,0x43340000);
  uVar14 = FUN_4a171a94(uVar14,local_50);
  uVar15 = FUN_4a171a94(uVar13,0x42b00000);
  FUN_4a09f664(iVar5,299,uVar14,uVar15,0x3f800000,0x3f800000,0x3f800000,0);
  uVar11 = FUN_4a1725c0(uVar11,0x3f800000);
  uVar13 = FUN_4a171a94(uVar13,0x40000000);
  uVar14 = FUN_4a134aa8(param_1);
  uVar14 = FUN_4a0cb6c4(uVar14,*(undefined4 *)(param_1 + 0xa0));
  uVar13 = FUN_4a171e1c(uVar13);
  uVar11 = FUN_4a171e1c(uVar11);
  FUN_4a0fa6e8(uVar14,iVar5,uVar11,uVar13,1);
  puVar2 = PTR_DAT_4a0913d8;
  uVar14 = FUN_4a17211c(*(undefined4 *)PTR_DAT_4a0913d8,DAT_4a0913d4);
  uVar11 = FUN_4a17211c(*(undefined4 *)puVar2,DAT_4a0913dc);
  uVar13 = *(undefined4 *)(param_1 + 0x4c);
  uVar23 = FUN_4a1725c0(uVar13,*(undefined4 *)(param_1 + 0x48));
  uVar13 = FUN_4a1725c0(uVar13,*(undefined4 *)(param_1 + 0x44));
  if ((uVar23 & 0x7fffffff) != 0) {
    uVar15 = FUN_4a17295c(uVar11,0xffffffff);
    uVar16 = FUN_4a17211c(uVar15,DAT_4a0913e0);
    uVar11 = FUN_4a1724e0(uVar16,uVar11);
    uVar11 = FUN_4a17211c(uVar11,uVar13);
    uVar11 = FUN_4a171bb8(uVar11,uVar23);
    uVar14 = FUN_4a171a94(uVar11,uVar14);
    uVar11 = uVar15;
  }
  puVar2 = PTR_DAT_4a0913c8;
  uVar13 = FUN_4a171a94(*(undefined4 *)(PTR_DAT_4a0913c8 + 0x18),0x41a00000);
  uVar13 = FUN_4a171a94(uVar13,local_50);
  uVar15 = FUN_4a1725c0(*(undefined4 *)(puVar2 + 4),0x40000000);
  uVar16 = FUN_4a1725c0(*(undefined4 *)(puVar2 + 0x10),0x41880000);
  uVar11 = FUN_4a17211c(uVar11,DAT_4a0913e4);
  uVar23 = 0;
  do {
    if (uVar23 == 0) {
      iVar12 = 0;
    }
    else if (uVar23 == 1) {
      iVar12 = 6;
    }
    else {
      iVar12 = uVar23 - 1;
    }
    uVar17 = FUN_4a171fac(iVar12);
    uVar17 = FUN_4a17211c(uVar17,uVar11);
    uVar17 = FUN_4a171a94(uVar17,uVar14);
    uVar18 = FUN_4a0d4984();
    uVar19 = FUN_4a002d64(uVar17);
    uVar19 = FUN_4a17211c(uVar19,uVar16);
    uVar17 = FUN_4a002f08(uVar17);
    uVar17 = FUN_4a17211c(uVar17,uVar16);
    uVar19 = FUN_4a171a94(uVar13,uVar19);
    uVar17 = FUN_4a171a94(uVar15,uVar17);
    uVar26 = 0x130;
    if (uVar23 < 2) {
      uVar26 = 0x12e;
    }
    FUN_4a09f664(iVar5,uVar26,uVar19,uVar17,0x3f800000,0x3f800000,0x3f800000,uVar18 ^ 0x80000000);
    puVar2 = PTR_DAT_4a0913c8;
    uVar23 = uVar23 + 1;
  } while ((int)uVar23 < 7);
  uVar11 = FUN_4a1725c0(*(undefined4 *)PTR_DAT_4a0913c8,0x40000000);
  FUN_4a171a94(uVar11,local_50);
  uVar11 = FUN_4a171e1c();
  FUN_4a1725c0(*(undefined4 *)(puVar2 + 4),0x3f800000);
  iVar12 = FUN_4a171e1c();
  FUN_4a09f9c8(iVar5,300);
  iVar20 = FUN_4a171e1c();
  uVar13 = FUN_4a171fac(iVar12 - (iVar20 >> 1));
  uVar11 = FUN_4a171fac(uVar11);
  FUN_4a09f664(iVar5,300,uVar11,uVar13,0x3f800000,0x3f800000,0xbf800000,0);
  uVar13 = FUN_4a171fac(iVar12 + (iVar20 >> 1) + -1);
  FUN_4a09f664(iVar5,0x12d,uVar11,uVar13,0x3f800000,0x3f800000,0x3f800000,0);
  uVar27 = true;
  uVar23 = 0;
  uVar11 = extraout_r1_02;
  if (0 < (int)uVar24) {
    do {
      uVar11 = FUN_4a171fac(uVar23,uVar11);
      uVar11 = FUN_4a17211c(uVar11,*(undefined4 *)(puVar2 + 0x1c));
      uVar13 = FUN_4a171a94(*(undefined4 *)(param_1 + 0x44),uVar11);
      FUN_4a1720a0(uVar13,uVar8);
      uVar11 = extraout_r1_03;
      if ((bool)uVar27) {
        FUN_4a172458(uVar13);
        uVar11 = extraout_r1_04;
      }
      if ((bool)uVar27) {
        uVar14 = 0x3f800000;
        FUN_4a172458(uVar13,uVar10);
        if ((bool)uVar27) {
          FUN_4a1720a0(uVar13,uVar9);
          if (!(bool)uVar27) {
            uVar11 = FUN_4a1725c0(uVar8,uVar9);
            uVar14 = FUN_4a1725c0(uVar13,uVar9);
            uVar11 = FUN_4a171bb8(uVar14,uVar11);
            uVar14 = FUN_4a1724e0(uVar11,0x3f800000);
          }
        }
        else {
          uVar11 = FUN_4a1725c0(uVar7,uVar10);
          uVar14 = FUN_4a1725c0(uVar13,uVar10);
          uVar11 = FUN_4a171bb8(uVar14,uVar11);
          uVar14 = FUN_4a1724e0(uVar11,0x3f800000);
        }
        FUN_4a171bb8(uVar13,*(undefined4 *)(puVar2 + 0x10));
        FUN_4a002c64();
        uVar11 = FUN_4a002d64();
        uVar11 = FUN_4a17211c(uVar11,*(undefined4 *)(puVar2 + 0x10));
        uVar15 = *(undefined4 *)(puVar2 + 0xc);
        uVar16 = FUN_4a17295c(uVar15,0xffffffff);
        uVar11 = FUN_4a171a94(*(undefined4 *)(puVar2 + 0x18),uVar11);
        uVar11 = FUN_4a171a94(uVar11,uVar16);
        uVar16 = FUN_4a171a94(uVar11,local_50);
        uVar13 = FUN_4a171a94(*(undefined4 *)(puVar2 + 4),uVar13);
        FUN_4a0a02bc(iVar5,0x122,0x123,0x124,uVar16,uVar13,uVar15,uVar14,uVar14,0,0);
        iVar12 = 0;
        if (*(int *)(param_1 + 0x84) != 0) {
          iVar12 = *(int *)(*(int *)(param_1 + 0x84) + 8);
        }
        uVar11 = extraout_r1_05;
        if (*(uint *)(iVar12 + 8) == uVar23) {
          uVar11 = 0x3f000000;
          if ((*(uint *)(param_1 + 0xb0) & 2) != 0) {
            uVar11 = FUN_4a0fb0c0(param_1 + 0xa4);
          }
          uVar11 = FUN_4a17211c(uVar11,uVar14);
          FUN_4a0a02bc(iVar5,0x125,0x126,0x127,uVar16,uVar13,*(undefined4 *)(puVar2 + 0xc),uVar11,
                       uVar14,0,0);
          uVar11 = extraout_r1_06;
        }
      }
      uVar23 = uVar23 + 1;
      uVar27 = uVar24 <= uVar23;
    } while ((int)uVar23 < (int)uVar24);
  }
  FUN_4a09f3a4(iVar5,param_2);
  puVar2 = PTR_DAT_4a0913c8;
  uVar11 = FUN_4a1725c0(*(undefined4 *)PTR_DAT_4a0913c8,0x42be0000);
  FUN_4a171a94(uVar11,local_54);
  uVar11 = FUN_4a171e1c();
  FUN_4a1725c0(*(undefined4 *)(puVar2 + 4),0x42d80000);
  uVar13 = FUN_4a171e1c();
  if (**(int **)PTR_DAT_4a0913d0 == 0x3f800000) {
    uVar14 = 0x6e;
  }
  else {
    uVar14 = 0x96;
  }
  iVar12 = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    iVar12 = *(int *)(*(int *)(param_1 + 0x84) + 8);
  }
  uVar15 = *(undefined4 *)(iVar12 + 4);
  FUN_4a0fba7c(iVar3);
  uVar28 = FUN_4a146e94();
  uVar29 = CONCAT44((int)((ulonglong)uVar28 >> 0x20),uVar15);
  iVar12 = (int)uVar28;
  if ((iVar12 == 0) || (uVar29 = FUN_4a1460f8(iVar12), *(int *)(iVar12 + 0x28) != 0)) {
    uVar15 = (undefined4)((ulonglong)uVar29 >> 0x20);
    if ((int)uVar29 != -1) {
      FUN_4a06c040(iVar4,0,(int)uVar29,4,uVar14);
      FUN_4a06cc34(iVar4,param_2,0,4,uVar11,uVar13,0x12);
      uVar15 = extraout_r1_09;
    }
  }
  else {
    piVar22 = (int *)FUN_4a145948(iVar3);
    if (piVar22 != (int *)0x0) {
      (**(code **)(*piVar22 + 0xc))();
    }
    FUN_4a06b02c(iVar4,param_2,piVar22,4,uVar11,uVar13,0x12);
    uVar15 = extraout_r1_07;
    if (piVar22 != (int *)0x0) {
      uVar29 = (**(code **)(*piVar22 + 8))(piVar22);
      uVar15 = (undefined4)((ulonglong)uVar29 >> 0x20);
      if ((int)uVar29 != 0) {
        (**(code **)(*piVar22 + 4))(piVar22);
        uVar15 = extraout_r1_08;
      }
    }
  }
  uVar27 = true;
  uVar23 = 0;
  if (0 < (int)uVar24) {
    do {
      uVar11 = FUN_4a171fac(uVar23,uVar15);
      puVar2 = PTR_DAT_4a0913c8;
      uVar11 = FUN_4a17211c(uVar11,*(undefined4 *)(PTR_DAT_4a0913c8 + 0x1c));
      uVar11 = FUN_4a171a94(*(undefined4 *)(param_1 + 0x44),uVar11);
      FUN_4a1720a0(uVar11,uVar8);
      uVar15 = extraout_r1_10;
      if ((bool)uVar27) {
        FUN_4a172458(uVar11);
        uVar15 = extraout_r1_11;
      }
      if ((bool)uVar27) {
        FUN_4a172458(uVar11,uVar10);
        if ((bool)uVar27) {
          FUN_4a1720a0(uVar11,uVar9);
          if (!(bool)uVar27) {
            uVar13 = FUN_4a1725c0(uVar8,uVar9);
            uVar14 = FUN_4a1725c0(uVar11,uVar9);
            uVar13 = FUN_4a171bb8(uVar14,uVar13);
            uVar29 = FUN_4a1724e0(uVar13,0x3f800000);
            goto LAB_4a091238;
          }
        }
        else {
          uVar13 = FUN_4a1725c0(uVar7,uVar10);
          uVar14 = FUN_4a1725c0(uVar11,uVar10);
          uVar13 = FUN_4a171bb8(uVar14,uVar13);
          uVar29 = FUN_4a1724e0(uVar13,0x3f800000);
LAB_4a091238:
          uVar15 = (undefined4)((ulonglong)uVar29 >> 0x20);
          if ((int)uVar29 < 0x3f000001) goto LAB_4a09134c;
        }
        FUN_4a171bb8(uVar11,*(undefined4 *)(puVar2 + 0x10));
        FUN_4a002c64();
        uVar13 = FUN_4a002d64();
        uVar13 = FUN_4a17211c(uVar13,*(undefined4 *)(puVar2 + 0x10));
        uVar13 = FUN_4a171a94(*(undefined4 *)(puVar2 + 0x18),uVar13);
        uVar13 = FUN_4a171a94(uVar13,local_50);
        uVar11 = FUN_4a171a94(*(undefined4 *)(puVar2 + 4),uVar11);
        iVar25 = uVar23 + 5;
        uVar14 = FUN_4a17295c(*(undefined4 *)(puVar2 + 0xc),0xffffffff);
        FUN_4a171a94(uVar14,uVar13);
        iVar20 = FUN_4a171e1c();
        iVar21 = FUN_4a171e1c(uVar11);
        iVar12 = 0;
        if (*(int *)(param_1 + 0x84) != 0) {
          iVar12 = *(int *)(*(int *)(param_1 + 0x84) + 8);
        }
        FUN_4a06b074(iVar4,param_2,*(undefined4 *)(iVar12 + iVar25 * 4),4,iVar20,iVar21,0x12);
        uVar15 = extraout_r1_12;
        if (iVar25 < *(int *)(param_1 + 0x94)) {
          iVar12 = 0;
          if (*(int *)(param_1 + 0x98) != 0) {
            iVar12 = *(int *)(*(int *)(param_1 + 0x98) + 8);
          }
          uVar29 = FUN_4a13fce4(*(undefined4 *)(iVar3 + 0x51c),*(undefined4 *)(iVar12 + iVar25 * 4))
          ;
          uVar15 = (undefined4)((ulonglong)uVar29 >> 0x20);
          if ((int)uVar29 != -1) {
            uVar11 = FUN_4a0642fc();
            uVar29 = FUN_4a063544(uVar11,(int)uVar29);
            uVar15 = (undefined4)((ulonglong)uVar29 >> 0x20);
            if ((int)uVar29 != 0) {
              (**(code **)(*param_2 + 0x34))(param_2,(int)uVar29,iVar20 + 0x5a,iVar21 + -10,0x12);
              uVar15 = extraout_r1_13;
            }
          }
        }
      }
LAB_4a09134c:
      uVar23 = uVar23 + 1;
      uVar27 = uVar24 <= uVar23;
    } while ((int)uVar23 < (int)uVar24);
  }
  FUN_4a09f3a4(iVar5,param_2);
  puVar2 = PTR_DAT_4a0913d0;
  iVar3 = FUN_4a0bc200(*(undefined4 *)PTR_DAT_4a0913d0);
  iVar4 = FUN_4a0bc200(*(undefined4 *)puVar2);
  FUN_4a171a94(*(undefined4 *)PTR_DAT_4a0913c8,0x42200000);
  uVar7 = FUN_4a171e1c();
  FUN_4a08c230(param_1,uVar7,0,0xf5,iVar4 - ((int)(iVar3 + ((uint)(iVar3 >> 0x1f) >> 0x1d)) >> 3));
  return;
}



// Address: 4a0913e8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0913e8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_20 [12];
  int iStack_14;
  
  FUN_4a08cb50();
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x74) == 1) {
    FUN_4a0faf18(param_1 + 0xa4,param_2);
    if ((*(uint *)(param_1 + 0xb0) & 2) == 0) {
      *(undefined4 *)(param_1 + 0x74) = 0;
      uVar1 = FUN_4a134aa8(param_1);
      FUN_4a0cdbe0(uVar1,param_1);
      piVar2 = (int *)FUN_4a134aa8(param_1);
      FUN_4a16be24(auStack_20,3);
      iVar5 = 0;
      if (iStack_14 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iStack_14 + 8);
      }
      *(undefined4 *)(iVar3 + 4) = 0;
      if (iStack_14 == 0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = *(undefined4 **)(iStack_14 + 8);
      }
      *puVar4 = 8;
      if (iStack_14 != 0) {
        iVar5 = *(int *)(iStack_14 + 8);
      }
      *(undefined4 *)(iVar5 + 8) = 0xffffffff;
      (**(code **)(*piVar2 + 0x20))(piVar2,0xb,auStack_20);
      FUN_4a16bef4(auStack_20);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a09142c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a09145c

void FUN_4a09145c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  
  uVar6 = *(undefined4 *)(param_2 + 8);
  piVar5 = *(int **)(param_2 + 0xc);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))(piVar5);
  }
  (**(code **)(*(int *)(param_1 + 0x78) + 0x1c))((int *)(param_1 + 0x78));
  *(undefined4 *)(param_1 + 0x80) = uVar6;
  *(int **)(param_1 + 0x84) = piVar5;
  uVar6 = *(undefined4 *)(param_3 + 8);
  piVar5 = *(int **)(param_3 + 0xc);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))(piVar5);
  }
  (**(code **)(*(int *)(param_1 + 0x8c) + 0x1c))((int *)(param_1 + 0x8c));
  *(undefined4 *)(param_1 + 0x94) = uVar6;
  *(int **)(param_1 + 0x98) = piVar5;
  *(undefined4 *)(param_1 + 0xa0) = param_4;
  if (*(int *)(param_1 + 0x84) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x84) + 8);
  }
  *(undefined4 *)(iVar2 + 8) = 0xffffffff;
  if (*(int *)(param_1 + 0x98) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x98) + 8);
  }
  *(undefined4 *)(iVar2 + 8) = 0xffffffff;
  uVar7 = 1;
  if (*(int *)(param_1 + 0x84) == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = *(int **)(*(int *)(param_1 + 0x84) + 8);
  }
  uVar6 = FUN_4a171fac(*piVar5 + -1);
  puVar1 = PTR_DAT_4a091600;
  uVar3 = FUN_4a17211c(uVar6,*(undefined4 *)(PTR_DAT_4a091600 + 0x1c));
  uVar6 = FUN_4a17211c(*(undefined4 *)(puVar1 + 8),0xbf000000);
  uVar4 = FUN_4a17211c(uVar3,0xbf000000);
  FUN_4a172458(uVar4,uVar6);
  if (!(bool)uVar7) {
    uVar6 = uVar4;
  }
  uVar4 = FUN_4a17295c(*(undefined4 *)(puVar1 + 8),0xffffffff);
  uVar3 = FUN_4a1725c0(uVar4,uVar3);
  FUN_4a1720a0(uVar3,uVar6);
  if ((bool)uVar7) {
    uVar3 = uVar6;
  }
  uVar4 = FUN_4a17211c(*(undefined4 *)(puVar1 + 8),0xbf000000);
  FUN_4a172458(uVar4,uVar6);
  if ((bool)uVar7) {
    uVar4 = uVar6;
  }
  FUN_4a08c62c(param_1,uVar6);
  FUN_4a08c614(param_1,uVar3,uVar4);
  FUN_4a08c608(param_1,1);
  *(undefined4 *)(param_1 + 0x74) = 0;
  iVar2 = FUN_4a134aa8(param_1);
  if (*(int *)(iVar2 + 0x40) == param_1) {
    *(undefined4 *)(iVar2 + 0x40) = 0;
  }
  return;
}



// Address: 4a091604

int FUN_4a091604(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)FUN_4a08cd00();
  puVar1 = PTR_PTR_4a0916a4;
  *puVar2 = PTR_PTR_4a0916a4;
  puVar2[4] = puVar1 + 100;
  puVar2[6] = puVar1 + 0x84;
  puVar2[7] = puVar1 + 0x94;
  puVar2[8] = puVar1 + 0xa4;
  puVar2[5] = puVar1 + 0x74;
  puVar2[3] = puVar1 + 0x54;
  puVar2[2] = puVar1 + 0x44;
  puVar2[9] = puVar1 + 0xb4;
  puVar2[0x1d] = 0;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(puVar2 + 0x1e);
  puVar1 = PTR_PTR_4a0916a8;
  puVar2[2] = 0;
  *puVar2 = puVar1;
  puVar2[3] = 0;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(puVar2 + 5);
  puVar2[2] = 0;
  *puVar2 = puVar1;
  puVar2[3] = 0;
  puVar2[5] = 0xffffffff;
  iVar3 = FUN_4a0fb394(puVar2 + 6);
  FUN_4a02b86c();
  return iVar3 + -0xa4;
}



// Address: 4a0916c4

void FUN_4a0916c4(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_PTR_4a09172c;
  *param_1 = PTR_PTR_4a09172c;
  param_1[4] = puVar1 + 100;
  param_1[6] = puVar1 + 0x84;
  param_1[7] = puVar1 + 0x94;
  param_1[8] = puVar1 + 0xa4;
  param_1[5] = puVar1 + 0x74;
  param_1[3] = puVar1 + 0x54;
  param_1[2] = puVar1 + 0x44;
  param_1[9] = puVar1 + 0xb4;
  iVar2 = FUN_4a16bef4(param_1 + 0x23);
  iVar2 = FUN_4a16bef4(iVar2 + -0x14);
  *(undefined **)(iVar2 + -0x78) = PTR_PTR_4a0c0674;
  *(undefined4 *)(iVar2 + -0x74) = 0xffffffff;
  return;
}



// Address: 4a091730

void FUN_4a091730(undefined4 param_1)

{
  undefined1 auStack_40c [1024];
  
  if (*(int *)(*(int *)PTR_DAT_4a09177c + 0x80) == 0) {
    FUN_4a0012bc(auStack_40c,param_1);
  }
  else {
    FUN_4a0012bc(auStack_40c);
    FUN_4a001538(auStack_40c,&DAT_4a091780);
    FUN_4a001538(auStack_40c,param_1);
  }
  host_s3eFileOpen_thumb(auStack_40c,&DAT_4a091784);
  return;
}



// Address: 4a091788

int FUN_4a091788(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_4a091828();
  if (iVar1 != 0) {
    FUN_4a05a298(*(undefined4 *)(param_1 + 0x84));
    FUN_4a05a298(*(undefined4 *)(param_1 + 0x78));
    FUN_4a05a298(*(undefined4 *)(param_1 + 0x7c));
    FUN_4a05a298(*(undefined4 *)(param_1 + 0x8c));
    host_s3eFileClose_thumb(*(undefined4 *)(param_1 + 0x9c));
  }
  return iVar1;
}



// Address: 4a0917c0

undefined4 FUN_4a0917c0(int param_1,int param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  ushort uVar4;
  ushort *puVar5;
  bool bVar6;
  
  puVar5 = *(ushort **)(param_1 + 0x8c);
  while (bVar6 = param_2 != 0, param_2 = param_2 + -1, bVar6) {
    do {
      uVar4 = *puVar5;
      puVar5 = puVar5 + 1;
    } while (uVar4 != DAT_4a091824);
  }
  uVar4 = *puVar5;
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    if (uVar4 == 0) {
      return 1;
    }
    if (param_3 == (char *)0x0) {
      return 0;
    }
  }
  if (uVar4 != 0) {
    pcVar2 = *(char **)(param_1 + 0x7c);
    while (uVar4 = uVar4 - 1, uVar4 != 0) {
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
    }
    iVar3 = thunk_FUN_4a162f7c();
    if (iVar3 == 0) {
      return 1;
    }
  }
  return 0;
}



// Address: 4a091828

int FUN_4a091828(int *param_1,undefined1 *param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined1 auStack_130 [252];
  ushort local_34 [2];
  int local_30;
  int local_2c;
  uint local_28;
  int *piStack_24;
  undefined1 *local_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  piVar4 = param_1 + 0x20;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  param_1[0x27] = 0;
  piStack_24 = param_1;
  local_20 = param_2;
  iStack_1c = param_3;
  uStack_18 = param_4;
  if (param_3 == 0) {
    *(undefined1 *)(param_1 + 0x1d) = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    *piVar4 = 0;
    param_1[0x26] = 0;
    FUN_4a057980(param_2,auStack_130);
    PTR_DAT_4a091a50[2] = 1;
    local_20 = auStack_130;
    iVar2 = host_s3eFileOpen_thumb(auStack_130,&DAT_4a091a54);
    param_1[0x27] = iVar2;
    PTR_DAT_4a091a50[2] = 0;
  }
  else {
    param_1[0x22] = (int)param_2;
    iVar2 = host_s3eFileOpenFromMemory_thumb(param_2,param_4);
    param_1[0x27] = iVar2;
  }
  if (param_1[0x27] != 0) {
    iVar2 = host_s3eFileRead_thumb(param_1 + 0x1a,9,1);
    if (iVar2 == 1) {
      if ((((char)param_1[0x1c] != '\0') ||
          (iVar2 = FUN_4a000e60(param_1 + 0x1a,&DAT_4a091a58,4), iVar2 != 0)) ||
         (*(short *)((int)param_1 + 0x6e) == 0)) {
        return 3;
      }
      local_28 = (uint)*(ushort *)(param_1 + 0x1b);
      iVar2 = 0;
      while (local_28 != 0) {
        iVar2 = iVar2 + 1;
        iVar3 = host_s3eFileGetChar_thumb(param_1[0x27]);
        if (iVar3 == 0) {
          local_28 = local_28 - 1;
        }
      }
      iVar3 = FUN_4a0013e0(local_20);
      iVar3 = FUN_4a00dbc4(iVar3 + 1);
      param_1[0x21] = iVar3;
      FUN_4a0012bc(iVar3,local_20);
      iVar3 = FUN_4a00dbc4(iVar2);
      param_1[0x1e] = iVar3;
      if (iVar3 == 0) {
        return 1;
      }
      host_s3eFileSeek_thumb(param_1[0x27],-iVar2,1);
      if ((iVar2 == 0) ||
         (iVar2 = host_s3eFileRead_thumb(param_1[0x1e],iVar2,1,param_1[0x27]), iVar2 == 1)) {
        local_2c = 0;
        iVar2 = *(ushort *)((int)param_1 + 0x6e) - 1;
        while (iVar2 != 0) {
          local_2c = local_2c + 1;
          iVar3 = host_s3eFileGetChar_thumb(param_1[0x27]);
          if (iVar3 == 0) {
            iVar2 = iVar2 + -1;
          }
        }
        if (local_2c != 0) {
          iVar2 = FUN_4a00dbc4(local_2c);
          param_1[0x1f] = iVar2;
          if (iVar2 == 0) {
            return 1;
          }
          host_s3eFileSeek_thumb(param_1[0x27],-local_2c,1);
          iVar2 = host_s3eFileRead_thumb(param_1[0x1f],local_2c,1,param_1[0x27]);
          if (iVar2 != 1) {
            return 2;
          }
        }
        uVar5 = (uint)*(ushort *)(param_1 + 0x1b);
        local_30 = 0;
        while (uVar5 != 0) {
          local_30 = local_30 + 1;
          cVar1 = host_s3eFileRead_thumb(local_34,2,1,param_1[0x27]);
          if (cVar1 != '\x01') {
            return 2;
          }
          if (local_34[0] == DAT_4a091a60) {
            uVar5 = uVar5 - 1;
          }
        }
        host_s3eFileSeek_thumb(param_1[0x27],local_30 * -2,1);
        iVar2 = local_30 << 1;
        iVar3 = FUN_4a00dbc4();
        param_1[0x23] = iVar3;
        if (iVar3 == 0) {
          return 1;
        }
        iVar2 = host_s3eFileRead_thumb(iVar3,iVar2,1,param_1[0x27]);
        if (iVar2 == 1) {
          iVar2 = FUN_4a0708e0(param_1 + 1,param_1 + 0x28);
          *param_1 = iVar2;
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = FUN_4a0708e0(param_1 + 1,(int)param_1 + DAT_4a091a64);
          *param_1 = iVar2;
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = FUN_4a0708e0(param_1 + 1,param_1 + 0x110);
          *param_1 = iVar2;
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = FUN_4a0708e0(param_1 + 1,(int)param_1 + DAT_4a091a64 + 0x48);
          *param_1 = iVar2;
          if (iVar2 == 0) {
            iVar2 = FUN_4a070994(param_1 + 1,param_1[0x27],PTR_FUN_4a091730_1_4a091a68);
            *param_1 = iVar2;
            if (iVar2 == 0) {
              iVar2 = FUN_4a0015a0(local_20,0x5c);
              if (iVar2 != 0) {
                iVar2 = iVar2 - (int)local_20;
                iVar3 = FUN_4a00dbc4(iVar2 + 1);
                *piVar4 = iVar3;
                thunk_FUN_4a001368(iVar3,local_20,iVar2);
                *(undefined1 *)(*piVar4 + iVar2) = 0;
              }
              *(undefined1 *)(param_1 + 0x1d) = 1;
              return 0;
            }
            return iVar2;
          }
          return iVar2;
        }
      }
    }
  }
  return 2;
}



// Address: 4a091a6c

undefined4 FUN_4a091a6c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((*(char *)(param_2 + 0x1c) != '\x02') && (*(char *)(param_2 + 0x1c) != '\x01')) {
    uVar1 = 0;
  }
  return uVar1;
}



// Address: 4a091a7c

undefined4 * FUN_4a091a7c(int param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  ushort *puVar9;
  uint uVar10;
  bool bVar11;
  char *local_128;
  char local_124 [256];
  int local_24;
  int local_20;
  char *pcStack_1c;
  undefined4 uStack_18;
  
  local_24 = param_1 + 0x60;
  if (*(char *)(param_1 + 0x74) != '\0') {
    pcVar7 = param_2;
    if (*param_2 == '\\') {
      pcVar7 = param_2 + 1;
    }
    local_20 = param_1;
    pcStack_1c = param_2;
    uStack_18 = param_3;
    iVar3 = thunk_FUN_4a00142c(param_3,&DAT_4a091b78);
    if ((iVar3 == 0) || (iVar3 = thunk_FUN_4a00142c(param_3,&DAT_4a091b7c), iVar3 == 0)) {
      pcVar8 = local_124;
      while( true ) {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        if (cVar1 == '/') {
          *pcVar8 = '\\';
        }
        pcVar8 = pcVar8 + 1;
      }
      puVar4 = (undefined1 *)FUN_4a0015a0(local_124,0x5c);
      iVar3 = local_20;
      pcVar7 = (char *)0x0;
      local_128 = local_124;
      if (puVar4 != (undefined1 *)0x0) {
        local_128 = puVar4 + 1;
        pcVar7 = local_124;
        *puVar4 = 0;
      }
      if (((*(int *)(local_20 + 0x80) == 0) && (pcVar7 != (char *)0x0)) && (*pcVar7 == '\0')) {
        pcVar7 = (char *)0x0;
      }
      uVar10 = 0;
      pcVar8 = *(char **)(local_20 + 0x78);
      while( true ) {
        iVar5 = thunk_FUN_4a162f7c(pcVar8,local_128);
        if ((iVar5 == 0) && (iVar5 = FUN_4a0917c0(local_20,uVar10,pcVar7), iVar5 != 0)) {
          puVar9 = *(ushort **)(iVar3 + 0x8c);
          while (bVar11 = uVar10 != 0, uVar10 = uVar10 - 1, bVar11) {
            do {
              uVar2 = *puVar9;
              puVar9 = puVar9 + 1;
            } while (uVar2 != DAT_4a091b80);
          }
          puVar6 = (undefined4 *)FUN_4a00dbc4(0x24);
          puVar6[8] = local_20;
          puVar6[2] = 0;
          *puVar6 = 0;
          puVar6[3] = puVar9 + 1;
          puVar6[1] = 0;
          *(undefined1 *)(puVar6 + 7) = 0;
          puVar6[4] = 0;
          puVar6[5] = 0;
          if (*(int *)(iVar3 + 0x98) == 0) {
            *(undefined4 **)(iVar3 + 0x98) = puVar6;
          }
          else {
            *(undefined4 **)(*(int *)(iVar3 + 0x94) + 8) = puVar6;
          }
          *(undefined4 **)(iVar3 + 0x94) = puVar6;
          return puVar6;
        }
        uVar10 = uVar10 + 1;
        if (*(ushort *)(local_24 + 0xc) == uVar10) break;
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
      }
    }
  }
  return (undefined4 *)0x0;
}



// Address: 4a091b84

int FUN_4a091b84(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  ushort *puVar9;
  int local_3c;
  
  iVar8 = param_4 * param_3;
  if (iVar8 == 0) {
    return 0;
  }
  if (*param_5 < 0) {
    uVar1 = 2;
LAB_4a091bf0:
    *(undefined1 *)(param_5 + 7) = uVar1;
    return 0;
  }
  puVar9 = (ushort *)param_5[3];
  while ((uVar2 = (uint)*puVar9, uVar2 != DAT_4a091cfc &&
         (iVar3 = thunk_FUN_4a0014ec(*(int *)(param_1 + 0xc) + uVar2 * 0x10 + 8),
         iVar3 + param_5[1] <= *param_5))) {
    if (puVar9[1] == DAT_4a091cfc) {
      uVar1 = 1;
      goto LAB_4a091bf0;
    }
    iVar3 = FUN_4a070b98(param_1 + 4,uVar2);
    puVar9 = puVar9 + 1;
    param_5[1] = iVar3 + param_5[1];
  }
  while (*param_5 < param_5[1]) {
    puVar9 = puVar9 + -1;
    iVar3 = FUN_4a070b98(param_1 + 4,*puVar9);
    param_5[1] = param_5[1] - iVar3;
  }
  piVar6 = param_5 + 6;
  piVar7 = param_5 + 4;
  iVar3 = iVar8;
  local_3c = param_2;
  if ((((param_5[4] == 0) || (*param_5 < param_5[5])) || ((ushort *)param_5[3] != puVar9)) ||
     (*(int **)(param_1 + 0x90) != param_5)) {
    iVar4 = FUN_4a0708f8(param_1 + 4,*puVar9);
    if ((iVar4 != 0) || (iVar4 = FUN_4a070bac(param_1 + 4,piVar7,piVar6), iVar4 != 0))
    goto LAB_4a091c52;
    *(int **)(param_1 + 0x90) = param_5;
    param_5[3] = (int)puVar9;
    param_5[5] = param_5[1];
  }
  do {
    do {
      iVar4 = param_5[6] - (*param_5 - param_5[5]);
      if (0 < iVar4) {
        if (iVar3 < iVar4) {
          iVar4 = iVar3;
        }
        thunk_FUN_4a000f84(local_3c,param_5[4] + (*param_5 - param_5[5]),iVar4);
        iVar3 = iVar3 - iVar4;
        local_3c = local_3c + iVar4;
        *param_5 = *param_5 + iVar4;
        if (iVar3 == 0) {
          return param_4;
        }
      }
      param_5[5] = param_5[5] + param_5[6];
      iVar4 = FUN_4a070bac(param_1 + 4,piVar7,piVar6);
      if (iVar4 != 0) goto LAB_4a091c52;
    } while (param_5[6] != 0);
    puVar5 = (undefined2 *)param_5[3];
    if ((ushort)puVar5[1] == DAT_4a091cfc) {
      uVar1 = 1;
      goto LAB_4a091cbe;
    }
    param_5[3] = (int)(puVar5 + 1);
    iVar4 = FUN_4a070b98(param_1 + 4,*puVar5);
    param_5[1] = iVar4 + param_5[1];
    iVar4 = FUN_4a0708f8(param_1 + 4,*(undefined2 *)param_5[3]);
  } while ((iVar4 == 0) && (iVar4 = FUN_4a070bac(param_1 + 4,piVar7,piVar6), iVar4 == 0));
LAB_4a091c52:
  uVar1 = 2;
LAB_4a091cbe:
  *(undefined1 *)(param_5 + 7) = uVar1;
  iVar8 = thunk_FUN_4a0066d8(iVar8 - iVar3,param_3);
  return iVar8;
}



// Address: 4a091d00

undefined4 FUN_4a091d00(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  
  if (param_4 == 0) {
    *param_2 = param_3;
  }
  else {
    if (param_4 == 1) {
      iVar3 = *param_2;
    }
    else {
      if (param_4 != 2) {
        return 1;
      }
      iVar3 = param_2[1];
      for (puVar2 = (ushort *)param_2[3]; *puVar2 != DAT_4a091d50; puVar2 = puVar2 + 1) {
        iVar1 = thunk_FUN_4a0014ec(*(int *)(param_1 + 0xc) + (uint)*puVar2 * 0x10 + 8);
        iVar3 = iVar1 + iVar3;
      }
    }
    *param_2 = iVar3 + param_3;
  }
  return 0;
}



// Address: 4a091d54

undefined4 FUN_4a091d54(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  
  uVar3 = 1;
  pcVar2 = *(char **)(param_1 + 0x7c);
  while( true ) {
    if (*(ushort *)(param_1 + 0x6e) <= uVar3) {
      return 0;
    }
    iVar1 = thunk_FUN_4a00142c(param_2,pcVar2);
    if (iVar1 == 0) break;
    for (; *pcVar2 != '\0'; pcVar2 = pcVar2 + 1) {
    }
    pcVar2 = pcVar2 + 1;
    uVar3 = uVar3 + 1;
  }
  return 1;
}



// Address: 4a091d8c

undefined4 FUN_4a091d8c(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)0x0;
  for (puVar2 = *(undefined4 **)(param_1 + 0x98);
      (puVar2 != (undefined4 *)0x0 && (puVar2 != param_2)); puVar2 = (undefined4 *)puVar2[2]) {
    puVar1 = puVar2;
  }
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = param_2[2];
  }
  if (*(undefined4 **)(param_1 + 0x94) == param_2) {
    *(undefined4 **)(param_1 + 0x94) = puVar1;
  }
  if (*(undefined4 **)(param_1 + 0x98) == param_2) {
    *(undefined4 *)(param_1 + 0x98) = param_2[2];
  }
  *param_2 = 0xffffffff;
  *(undefined1 *)(param_2 + 7) = 2;
  param_2[3] = 0;
  FUN_4a05a298();
  return 0;
}



// Address: 4a091ddc

int FUN_4a091ddc(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_4a070bba(param_1 + 4);
  *(undefined1 *)(iVar1 + 0x70) = 0;
  *(undefined4 *)(iVar1 + 0x74) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(undefined4 *)(iVar1 + 0x7c) = 0;
  *(undefined4 *)(iVar1 + 0x84) = 0;
  *(undefined4 *)(iVar1 + 0x88) = 0;
  *(undefined4 *)(iVar1 + 0x8c) = 0;
  *(undefined4 *)(iVar1 + 0x90) = 0;
  *(undefined4 *)(iVar1 + 0x94) = 0;
  iVar1 = thunk_FUN_4a084818(iVar1 + 0x9c);
  iVar1 = FUN_4a1052bc(iVar1 + -0xa0 + DAT_4a091e38);
  iVar1 = FUN_4a06f77e((iVar1 - DAT_4a091e38) + 0x440);
  iVar1 = FUN_4a06a7ea(iVar1 + DAT_4a091e38 + -0x3f8);
  return iVar1 + DAT_4a091e3c;
}



// Address: 4a091e40

int FUN_4a091e40(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x74) != '\0') {
    iVar1 = *(int *)(param_1 + 0x98);
    while (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 8);
      FUN_4a05a298();
    }
    FUN_4a05a298(*(undefined4 *)(param_1 + 0x78));
    FUN_4a05a298(*(undefined4 *)(param_1 + 0x7c));
    FUN_4a05a298(*(undefined4 *)(param_1 + 0x8c));
    FUN_4a05a298(*(undefined4 *)(param_1 + 0x80));
    FUN_4a05a298(*(undefined4 *)(param_1 + 0x84));
    *(undefined1 *)(param_1 + 0x74) = 0;
  }
  iVar1 = FUN_4a06a7fe(param_1 + DAT_4a091ec0);
  iVar1 = FUN_4a06f792((iVar1 - DAT_4a091ec0) + 0x440);
  iVar1 = FUN_4a1052f0(iVar1 + DAT_4a091ec0 + -0x488);
  iVar1 = thunk_FUN_4a08485c(iVar1 + DAT_4a091ec4 + 0xa0);
  iVar1 = FUN_4a070bc8(iVar1 + -0x9c);
  return iVar1 + -4;
}



// Address: 4a091ec8

undefined8 FUN_4a091ec8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  FUN_4a0978b4(&iStack_20);
  if (*(int *)(param_1 + 8) != 0) {
    FUN_4a161530();
    *(undefined4 *)(param_1 + 8) = 0;
  }
  FUN_4a0978e0(&iStack_20);
  return CONCAT44(uStack_1c,iStack_20);
}



// Address: 4a091eec

void FUN_4a091eec(undefined4 param_1,uint param_2)

{
  host_glDeleteShader_thumb(param_2);
  return;
}



// Address: 4a091efa

void FUN_4a091efa(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_3c [16];
  int local_2c;
  int local_28;
  int iStack_24;
  int local_20;
  int local_1c;
  int iStack_18;
  
  iStack_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  iStack_18 = param_4;
  FUN_4a0978b4(auStack_3c);
  FUN_4a091ec8(param_1);
  FUN_4a161530(*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = 0;
  iVar3 = local_20 << 2;
  local_28 = iVar3;
  for (iVar2 = 0; iVar2 < local_20; iVar2 = iVar2 + 1) {
    if (param_4 == 0) {
      iVar1 = FUN_4a0013e0(*(undefined4 *)(local_1c + iVar2 * 4));
    }
    else {
      iVar1 = *(int *)(param_4 + iVar2 * 4);
    }
    iVar3 = iVar1 + iVar3 + 1;
  }
  iVar2 = FUN_4a161570(iVar3);
  *(int *)(param_1 + 8) = iVar2;
  *(int *)(param_1 + 0xc) = local_20;
  iVar2 = iVar2 + local_28;
  for (iVar3 = 0; iVar3 < local_20; iVar3 = iVar3 + 1) {
    if (param_4 == 0) {
      iVar1 = FUN_4a0013e0(*(undefined4 *)(local_1c + iVar3 * 4));
    }
    else {
      iVar1 = *(int *)(param_4 + iVar3 * 4);
    }
    local_2c = iVar3 * 4;
    *(int *)(*(int *)(param_1 + 8) + local_2c) = iVar2;
    thunk_FUN_4a000f84(iVar2,*(undefined4 *)(local_1c + local_2c),iVar1);
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + local_2c) + iVar1) = 0;
    iVar2 = iVar2 + iVar1 + 1;
  }
  FUN_4a0978e0(auStack_3c);
  return;
}



// Address: 4a091fa8

void FUN_4a091fa8(int param_1)

{
  *(undefined1 *)(param_1 + 0x1c) = 1;
  return;
}



// Address: 4a091fae

void FUN_4a091fae(int param_1,uint *param_2)

{
  uint shader;
  
  shader = host_glCreateShader_thumb(*(uint *)(param_1 + 4));
  *param_2 = shader;
  if (*(void **)(param_1 + 0x14) == (void *)0x0) {
    if (*(void **)(param_1 + 8) != (void *)0x0) {
      host_glShaderSource_thumb(shader,*(int *)(param_1 + 0xc),*(void **)(param_1 + 8),(void *)0x0);
    }
  }
  else {
    host_glShaderBinary_thumb
              (1,param_2,*(uint *)(param_1 + 0x10),*(void **)(param_1 + 0x14),
               *(int *)(param_1 + 0x18));
  }
  if (*(char *)(param_1 + 0x1c) != '\0') {
    host_glCompileShader_thumb(*param_2);
  }
  return;
}



// Address: 4a091ff2

void FUN_4a091ff2(void)

{
  return;
}



// Address: 4a091ff4

void FUN_4a091ff4(uint param_1)

{
  host_glCreateShader_thumb(param_1);
  return;
}



// Address: 4a092000

int FUN_4a092000(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  uStack_c = param_4;
  FUN_4a0978b4(&iStack_18);
  FUN_4a091ec8(param_1);
  FUN_4a161530(*(undefined4 *)(param_1 + 0x14));
  FUN_4a0978e0(&iStack_18);
  return param_1;
}



// Address: 4a092028

void FUN_4a092028(int param_1)

{
  FUN_4a039b90(param_1,1,8,1);
  FUN_4a03c0b8(param_1 + 2,1,0x10,2);
  FUN_4a03c0b8(param_1 + 4,1,0x10,2);
  FUN_4a03c0b8(param_1 + 6,1,0x10,2);
  if (DAT_4a09207c <= *(uint *)PTR_DAT_4a092078) {
    FUN_4a039b90(param_1 + 1,1,8,1);
  }
  return;
}



// Address: 4a092080

void FUN_4a092080(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// Address: 4a09208c

void FUN_4a09208c(void)

{
  return;
}



// Address: 4a092090

undefined4 FUN_4a092090(undefined4 param_1)

{
  *(undefined4 *)PTR_DAT_4a0920a4 = param_1;
  FUN_4a03f570();
  return param_1;
}



// Address: 4a0920a8

void FUN_4a0920a8(void)

{
  *(undefined4 *)PTR_DAT_4a0920b0 = 0;
  return;
}



// Address: 4a0920b4

void FUN_4a0920b4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  local_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  uVar1 = FUN_4a14ffd4(DAT_4a092108);
  *param_1 = uVar1;
  uStack_1c = 0;
  local_20 = param_3;
  FUN_4a034f90(param_2,1,*param_1,&local_20);
  uVar1 = FUN_4a14ffd4(DAT_4a092108 + -1);
  param_1[1] = uVar1;
  local_20 = param_4;
  FUN_4a034f90(param_2,1,param_1[1],&local_20);
  uVar1 = FUN_4a02ca9c(0,*param_1,param_1[1]);
  param_1[2] = uVar1;
  return;
}



// Address: 4a09210c

void FUN_4a09210c(int param_1)

{
  FUN_4a150d34(*(undefined4 *)(param_1 + 8));
  return;
}



// Address: 4a09211a

void FUN_4a09211a(undefined4 *param_1)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



// Address: 4a092124

undefined4 * FUN_4a092124(undefined4 *param_1)

{
  FUN_4a1500e4(param_1[2],*param_1);
  FUN_4a1500e4(param_1[2],param_1[1]);
  FUN_4a15002c(param_1[2]);
  FUN_4a15005c(*param_1);
  FUN_4a15005c(param_1[1]);
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return param_1;
}



// Address: 4a09215a

undefined4 FUN_4a09215a(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  while( true ) {
    if ((uint)param_1[1] <= uVar2) {
      return 0;
    }
    if (*(int *)(*param_1 + uVar2 * 4) == param_2) break;
    uVar2 = uVar2 + 1;
  }
  uVar1 = param_1[1] - (uVar2 + 1);
  uVar3 = 1;
  if (uVar1 < 2) {
    uVar3 = uVar1;
  }
  for (uVar1 = 0; uVar1 < uVar3; uVar1 = uVar1 + 1) {
    *(undefined4 *)(*param_1 + (uVar2 + uVar1) * 4) =
         *(undefined4 *)(*param_1 + ((param_1[1] - uVar3) + uVar1) * 4);
  }
  uVar3 = param_1[1] - 1;
  for (uVar2 = uVar3; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
  }
  param_1[1] = uVar3;
  return 1;
}



// Address: 4a0921b6

undefined4 FUN_4a0921b6(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  while( true ) {
    if ((uint)param_1[1] <= uVar1) {
      return 0;
    }
    if (*(int *)(*param_1 + uVar1 * 4) == param_2) break;
    uVar1 = uVar1 + 1;
  }
  FUN_4a16f73c(param_1,uVar1,uVar1 + 1);
  return 1;
}



// Address: 4a0921e2

void FUN_4a0921e2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  FUN_4a16f7ca(param_1,&uStack_c,param_3,param_4,param_1);
  return;
}



// Address: 4a0921f0

void FUN_4a0921f0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  
  for (piVar3 = (int *)*param_1; piVar1 = (int *)FUN_4a135c90(param_1), piVar3 < piVar1;
      piVar3 = piVar3 + 1) {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      FUN_4a1652c6(piVar1,*(undefined4 *)(*piVar1 + 4));
    }
  }
  for (uVar2 = 0; uVar2 < (uint)param_1[1]; uVar2 = uVar2 + 1) {
  }
  param_1[1] = 0;
  return;
}



// Address: 4a092228

void FUN_4a092228(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((int)param_1[2] < param_2) {
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



// Address: 4a092258

void FUN_4a092258(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfc;
  param_1[1] = 0;
  return;
}



// Address: 4a092278

undefined4 * FUN_4a092278(undefined4 *param_1)

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



// Address: 4a0922a4

void FUN_4a0922a4(int param_1)

{
  undefined *puVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  undefined4 *puVar16;
  
  puVar1 = PTR_DAT_4a092814;
  puVar8 = *(uint **)PTR_DAT_4a092814;
  uVar3 = puVar8[0x12d];
  if (uVar3 == 0) {
    uVar3 = puVar8[300];
  }
  *(uint *)(param_1 + 0xc) = uVar3;
  *(int *)(param_1 + 0x120) = param_1 + 0x118;
  *(int *)(param_1 + 0x11c) = param_1 + 0x118;
  *(undefined4 *)(param_1 + 300) = 0;
  iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 0x54);
  if (iVar4 != 0) {
    FUN_4a0a57d4(iVar4,param_1);
  }
  uVar5 = *puVar8;
  *(uint *)(param_1 + 0x10) = uVar5;
  uVar3 = puVar8[0x105];
  *(uint *)(param_1 + 0x14) = uVar3;
  if (puVar8[0x105] == 3) {
    *(uint *)(param_1 + 0x10) = uVar5 & 0x7fffffff;
  }
  if (uVar3 == 3) {
    uVar2 = (undefined2)puVar8[0x106];
  }
  else {
    uVar2 = 0;
  }
  *(undefined2 *)(param_1 + 0x18) = uVar2;
  *(short *)(param_1 + 0x1a) = (short)puVar8[0xce];
  if ((*(int *)(*(int *)puVar1 + 0xc) == 3) ||
     (uVar3 = *(uint *)(param_1 + 0x10), (uVar3 & 0x100) != 0)) {
    FUN_4a0935e0(param_1,param_1 + 0x4c,puVar8 + 4,puVar8 + 0x4c);
    FUN_4a0935e0(param_1,param_1 + 0x7c,puVar8 + 0x10,puVar8 + 0x58);
    puVar1 = PTR_DAT_4a092818;
    uVar3 = puVar8[0x105];
    if (uVar3 == 0) {
      FUN_4a0935e0(param_1,param_1 + 0x1c,puVar8 + 0x1c,puVar8 + 100);
    }
    else if (uVar3 == 2) {
LAB_4a092390:
      uVar6 = *(undefined4 *)(PTR_DAT_4a092818 + 4);
      uVar7 = *(undefined4 *)(PTR_DAT_4a092818 + 8);
      uVar9 = *(undefined4 *)(PTR_DAT_4a092818 + 0xc);
      uVar10 = *(undefined4 *)(PTR_DAT_4a092818 + 0x10);
      uVar12 = *(undefined4 *)(PTR_DAT_4a092818 + 0x14);
      puVar16 = (undefined4 *)(PTR_DAT_4a092818 + 0x18);
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)PTR_DAT_4a092818;
      *(undefined4 *)(param_1 + 0x20) = uVar6;
      *(undefined4 *)(param_1 + 0x24) = uVar7;
      *(undefined4 *)(param_1 + 0x28) = uVar9;
      *(undefined4 *)(param_1 + 0x2c) = uVar10;
      *(undefined4 *)(param_1 + 0x30) = uVar12;
      uVar6 = *(undefined4 *)(puVar1 + 0x1c);
      uVar7 = *(undefined4 *)(puVar1 + 0x20);
      *(undefined4 *)(param_1 + 0x34) = *puVar16;
      *(undefined4 *)(param_1 + 0x38) = uVar6;
      *(undefined4 *)(param_1 + 0x3c) = uVar7;
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(puVar1 + 0x24);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(puVar1 + 0x28);
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(puVar1 + 0x2c);
      uVar6 = FUN_4a171fac(puVar8[0x97]);
      *(undefined4 *)(param_1 + 0x40) = uVar6;
      uVar6 = FUN_4a171fac(puVar8[0x98]);
      *(undefined4 *)(param_1 + 0x44) = uVar6;
      uVar6 = FUN_4a171fac(puVar8[0x99]);
      *(undefined4 *)(param_1 + 0x48) = uVar6;
    }
    else if (uVar3 == 3) {
      uVar6 = *(undefined4 *)(PTR_DAT_4a092818 + 4);
      uVar7 = *(undefined4 *)(PTR_DAT_4a092818 + 8);
      uVar9 = *(undefined4 *)(PTR_DAT_4a092818 + 0xc);
      uVar10 = *(undefined4 *)(PTR_DAT_4a092818 + 0x10);
      uVar12 = *(undefined4 *)(PTR_DAT_4a092818 + 0x14);
      puVar16 = (undefined4 *)(PTR_DAT_4a092818 + 0x18);
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)PTR_DAT_4a092818;
      *(undefined4 *)(param_1 + 0x20) = uVar6;
      *(undefined4 *)(param_1 + 0x24) = uVar7;
      *(undefined4 *)(param_1 + 0x28) = uVar9;
      *(undefined4 *)(param_1 + 0x2c) = uVar10;
      *(undefined4 *)(param_1 + 0x30) = uVar12;
      uVar6 = *(undefined4 *)(puVar1 + 0x1c);
      uVar7 = *(undefined4 *)(puVar1 + 0x20);
      *(undefined4 *)(param_1 + 0x34) = *puVar16;
      *(undefined4 *)(param_1 + 0x38) = uVar6;
      *(undefined4 *)(param_1 + 0x3c) = uVar7;
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(puVar1 + 0x24);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(puVar1 + 0x28);
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(puVar1 + 0x2c);
      uVar6 = FUN_4a171fac((int)(short)puVar8[0x96]);
      *(undefined4 *)(param_1 + 0x40) = uVar6;
      uVar6 = FUN_4a171fac((int)*(short *)((int)puVar8 + 0x25a));
      *(undefined4 *)(param_1 + 0x44) = uVar6;
    }
    else {
      if (uVar3 == 4) goto LAB_4a092390;
      uVar3 = *puVar8;
      bVar15 = (uVar3 & 0x100) == 0;
      if (bVar15) {
        uVar3 = puVar8[1];
      }
      if (bVar15 && (uVar3 & 0x10) == 0) {
        FUN_4a0935e0(param_1,param_1 + 0x1c,puVar8 + 0x28,puVar8 + 0x70);
      }
      else if ((*(uint *)(param_1 + 0x10) & 0x40000000) == 0) {
        uVar6 = FUN_4a171fac(puVar8[0x9a]);
        uVar3 = FUN_4a17295c(uVar6,0xffffffea);
        *(uint *)(param_1 + 0x1c) = uVar3;
        uVar6 = FUN_4a171fac(puVar8[0x9b]);
        uVar6 = FUN_4a17295c(uVar6,0xffffffea);
        *(undefined4 *)(param_1 + 0x20) = uVar6;
        uVar6 = FUN_4a171fac(puVar8[0x9c]);
        uVar6 = FUN_4a17295c(uVar6,0xffffffea);
        *(undefined4 *)(param_1 + 0x24) = uVar6;
        uVar6 = FUN_4a171fac(puVar8[0x9d]);
        uVar6 = FUN_4a17295c(uVar6,0xffffffea);
        *(undefined4 *)(param_1 + 0x28) = uVar6;
        uVar6 = FUN_4a171fac(puVar8[0x9e]);
        uVar6 = FUN_4a17295c(uVar6,0xffffffea);
        *(undefined4 *)(param_1 + 0x2c) = uVar6;
        uVar6 = FUN_4a171fac(puVar8[0x9f]);
        uVar6 = FUN_4a17295c(uVar6,0xffffffea);
        *(undefined4 *)(param_1 + 0x30) = uVar6;
        uVar6 = FUN_4a171fac(puVar8[0xa0]);
        uVar6 = FUN_4a17295c(uVar6,0xffffffea);
        *(undefined4 *)(param_1 + 0x34) = uVar6;
        uVar6 = FUN_4a171fac(puVar8[0xa1]);
        uVar6 = FUN_4a17295c(uVar6,0xffffffea);
        *(undefined4 *)(param_1 + 0x38) = uVar6;
        uVar6 = FUN_4a171fac(puVar8[0xa2]);
        uVar6 = FUN_4a17295c(uVar6,0xffffffea);
        *(undefined4 *)(param_1 + 0x3c) = uVar6;
        uVar6 = FUN_4a171fac(puVar8[0xa3]);
        uVar6 = FUN_4a17295c(uVar6,0xfffffff8);
        *(undefined4 *)(param_1 + 0x40) = uVar6;
        uVar6 = FUN_4a171fac(puVar8[0xa4]);
        uVar6 = FUN_4a17295c(uVar6,0xfffffff8);
        *(undefined4 *)(param_1 + 0x44) = uVar6;
        uVar6 = FUN_4a171fac(puVar8[0xa5]);
        uVar6 = FUN_4a17295c(uVar6,0xfffffff8);
        *(undefined4 *)(param_1 + 0x48) = uVar6;
      }
      else {
        uVar3 = puVar8[0x71];
        uVar5 = puVar8[0x72];
        uVar11 = puVar8[0x73];
        uVar13 = puVar8[0x74];
        uVar14 = puVar8[0x75];
        *(uint *)(param_1 + 0x1c) = puVar8[0x70];
        *(uint *)(param_1 + 0x20) = uVar3;
        *(uint *)(param_1 + 0x24) = uVar5;
        *(uint *)(param_1 + 0x28) = uVar11;
        *(uint *)(param_1 + 0x2c) = uVar13;
        *(uint *)(param_1 + 0x30) = uVar14;
        uVar3 = puVar8[0x77];
        uVar5 = puVar8[0x78];
        *(uint *)(param_1 + 0x34) = puVar8[0x76];
        *(uint *)(param_1 + 0x38) = uVar3;
        *(uint *)(param_1 + 0x3c) = uVar5;
        *(uint *)(param_1 + 0x40) = puVar8[0x79];
        *(uint *)(param_1 + 0x44) = puVar8[0x7a];
        *(uint *)(param_1 + 0x48) = puVar8[0x7b];
      }
    }
    uVar3 = puVar8[0xc1];
    uVar5 = puVar8[0xc2];
    uVar11 = puVar8[0xc3];
    *(uint *)(param_1 + 0x108) = puVar8[0xc0];
    *(uint *)(param_1 + 0x10c) = uVar3;
    *(uint *)(param_1 + 0x110) = uVar5;
    *(uint *)(param_1 + 0x114) = uVar11;
  }
  else {
    uVar5 = puVar8[0x105];
    if (uVar5 == 0) {
      if ((uVar3 & 0x40000000) == 0) {
        uVar3 = FUN_4a171fac(puVar8[0x4b]);
      }
      else {
        uVar3 = puVar8[0x6f];
      }
LAB_4a092618:
      *(uint *)(param_1 + 0x48) = uVar3;
    }
    else {
      if (uVar5 != 2) {
        if (uVar5 == 3) {
          *(undefined4 *)(param_1 + 0x48) = 0;
          goto LAB_4a09261c;
        }
        if (uVar5 != 4) {
          uVar5 = *puVar8;
          bVar15 = (uVar5 & 0x100) == 0;
          if (bVar15) {
            uVar5 = puVar8[1];
          }
          if (bVar15 && (uVar5 & 0x10) == 0) {
            if ((uVar3 & 0x40000000) == 0) {
              uVar3 = puVar8[0x33];
              goto LAB_4a09268c;
            }
          }
          else if ((uVar3 & 0x40000000) == 0) {
            uVar3 = puVar8[0xa5];
LAB_4a09268c:
            uVar3 = FUN_4a171fac(uVar3);
            goto LAB_4a092618;
          }
          uVar3 = puVar8[0x7b];
          goto LAB_4a092618;
        }
      }
      uVar6 = FUN_4a171fac(puVar8[0x99]);
      *(undefined4 *)(param_1 + 0x48) = uVar6;
    }
  }
LAB_4a09261c:
  if (puVar8[0x108] == 0) {
    if (puVar8[0x117] != 0) {
      *(uint *)(param_1 + 0x134) = puVar8[0x117];
      uVar3 = *(uint *)(param_1 + 300) & 0xfffffffd;
      goto LAB_4a09264c;
    }
    *(undefined4 *)(param_1 + 0x134) = 0;
    *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) & 0xfffffffd;
  }
  else {
    *(uint *)(param_1 + 0x134) = puVar8[0x108];
    uVar3 = *(uint *)(param_1 + 300) | 2;
LAB_4a09264c:
    *(uint *)(param_1 + 300) = uVar3;
  }
  if (puVar8[0x109] == 0) {
    if (puVar8[0x118] != 0) {
      *(uint *)(param_1 + 0x138) = puVar8[0x118];
      uVar3 = *(uint *)(param_1 + 300) & 0xfffffffb;
      goto LAB_4a0926d4;
    }
    *(undefined4 *)(param_1 + 0x138) = 0;
    *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) & 0xfffffffb;
  }
  else {
    *(uint *)(param_1 + 0x138) = puVar8[0x109];
    uVar3 = *(uint *)(param_1 + 300) | 4;
LAB_4a0926d4:
    *(uint *)(param_1 + 300) = uVar3;
  }
  if (puVar8[0x10a] == 0) {
    if (puVar8[0x119] == 0) {
      *(undefined4 *)(param_1 + 0x13c) = 0;
      *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) & 0xfffffff7;
      goto LAB_4a092734;
    }
    *(uint *)(param_1 + 0x13c) = puVar8[0x119];
    uVar3 = *(uint *)(param_1 + 300) & 0xfffffff7;
  }
  else {
    *(uint *)(param_1 + 0x13c) = puVar8[0x10a];
    uVar3 = *(uint *)(param_1 + 300) | 8;
  }
  *(uint *)(param_1 + 300) = uVar3;
LAB_4a092734:
  *(uint *)(param_1 + 0xb4) = puVar8[0x148];
  *(uint *)(param_1 + 0xb8) = puVar8[0x149];
  *(uint *)(param_1 + 0xbc) = puVar8[0x14a];
  *(uint *)(param_1 + 0xc0) = puVar8[0x157];
  *(uint *)(param_1 + 0xc4) = puVar8[0x158];
  *(uint *)(param_1 + 200) = puVar8[0x159];
  *(short *)(param_1 + 0xcc) = (short)puVar8[0x15a];
  *(undefined2 *)(param_1 + 0xce) = *(undefined2 *)((int)puVar8 + 0x56a);
  *(short *)(param_1 + 0xd0) = (short)puVar8[0x15b];
  *(short *)(param_1 + 0xd2) = (short)puVar8[0x94];
  *(undefined2 *)(param_1 + 0xd4) = *(undefined2 *)((int)puVar8 + 0x252);
  *(short *)(param_1 + 0xd6) = (short)puVar8[0x95];
  *(undefined2 *)(param_1 + 0xd8) = *(undefined2 *)((int)puVar8 + 0x256);
  *(undefined2 *)(param_1 + 0xdc) = *(undefined2 *)((int)puVar8 + 0x43e);
  *(uint *)(param_1 + 0xe0) = puVar8[0x110];
  *(uint *)(param_1 + 0xe4) = puVar8[0x113];
  *(uint *)(param_1 + 0xe8) = puVar8[0x114];
  *(short *)(param_1 + 0xf8) = (short)puVar8[0x144];
  *(uint *)(param_1 + 0xfc) = puVar8[0x145];
  *(uint *)(param_1 + 0xb0) = puVar8[0x115];
  *(short *)(param_1 + 0xf4) = (short)puVar8[299];
  *(undefined2 *)(param_1 + 0xf6) = *(undefined2 *)((int)puVar8 + 0x4ae);
  uVar3 = puVar8[0xbf];
  *(uint *)(param_1 + 0x100) = puVar8[0xbe];
  *(uint *)(param_1 + 0x104) = uVar3;
  return;
}



// Address: 4a09281c

undefined4 FUN_4a09281c(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort *puVar6;
  int iVar7;
  ushort *puVar8;
  ushort *puVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  
  switch(*(int *)(param_1 + 0xec)) {
  case 0:
    return 1;
  case 1:
  case 2:
  case 3:
  case 4:
    break;
  default:
    return 0;
  }
  puVar5 = *(ushort **)(param_1 + 0x144);
  if ((*(uint *)(param_1 + 300) & 0x20) != 0) {
    uVar1 = puVar5[2];
    bVar12 = uVar1 == 0;
    if (bVar12) {
      uVar1 = puVar5[3];
    }
    bVar13 = bVar12 && uVar1 == 0;
    if (bVar12 && uVar1 == 0) {
      bVar13 = *puVar5 == 0x803;
    }
    if (bVar13) {
      puVar5 = *(ushort **)(puVar5 + 6);
    }
    else {
      puVar5 = (ushort *)0x0;
    }
  }
  puVar6 = puVar5;
  if (puVar5 == (ushort *)0x0) {
    puVar6 = (ushort *)PTR_DAT_4a092a18;
  }
  uVar10 = 0;
  if (puVar5 == (ushort *)0x0) {
    puVar6 = *(ushort **)puVar6;
  }
  if (*(int *)(param_1 + 0xec) == 3) {
    iVar11 = (*(uint *)(param_1 + 0xf0) >> 2) << 1;
  }
  else {
    iVar11 = *(uint *)(param_1 + 0xf0) - 2;
  }
  iVar7 = *(int *)PTR_DAT_4a092a1c;
  puVar9 = *(ushort **)(iVar7 + 0x38c);
  *(ushort **)(iVar7 + 0x388) = puVar9;
  *(uint *)(iVar7 + 0x38c) = (iVar11 * 6 + 3U & 0xfffffffc) + (int)puVar9;
  *(ushort **)(param_1 + 0x144) = puVar9;
  *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) & 0xffffffdf;
  iVar7 = *(int *)(param_1 + 0xec);
  puVar8 = (ushort *)(uint)*puVar6;
  puVar5 = puVar9;
  do {
    if (iVar11 < 1) {
      *(int *)(param_1 + 0xf0) = (int)puVar5 - (int)puVar9 >> 1;
      *(undefined4 *)(param_1 + 0xec) = 0;
      return 1;
    }
    if (iVar7 == 3 || iVar7 == 4) {
      uVar1 = *puVar6;
      puVar8 = (ushort *)(uint)uVar1;
      bVar12 = *(int *)(param_1 + 0xec) != 3;
      if (bVar12) {
        uVar2 = puVar6[3];
      }
      else {
        uVar2 = puVar6[2];
      }
      uVar3 = puVar6[1];
      if (bVar12) {
        uVar4 = puVar6[2];
      }
      else {
        uVar4 = puVar6[3];
      }
      iVar11 = iVar11 + -2;
      if (puVar8 != (ushort *)(uint)uVar2 && uVar3 != uVar4) {
        *puVar5 = uVar1;
        puVar5[1] = uVar3;
        puVar5[2] = uVar2;
        puVar5[3] = uVar1;
        puVar5[4] = uVar2;
        puVar5 = puVar5 + 5;
        *puVar5 = uVar4;
LAB_4a0929a8:
        puVar5 = puVar5 + 1;
      }
    }
    else {
      bVar12 = *(int *)(param_1 + 0xec) != 2;
      if (bVar12) {
        puVar8 = puVar6 + uVar10;
      }
      uVar1 = puVar6[2];
      if (bVar12) {
        puVar8 = (ushort *)(uint)*puVar8;
      }
      uVar2 = puVar6[uVar10 ^ 1];
      iVar11 = iVar11 + -1;
      if ((puVar8 != (ushort *)(uint)uVar1 && puVar8 != (ushort *)(uint)uVar2) &&
          (ushort *)(uint)uVar2 != (ushort *)(uint)uVar1) {
        *puVar5 = (ushort)puVar8;
        puVar5[1] = uVar2;
        puVar5 = puVar5 + 2;
        *puVar5 = uVar1;
        goto LAB_4a0929a8;
      }
    }
    switch(*(undefined4 *)(param_1 + 0xec)) {
    case 0:
      puVar6 = puVar6 + 3;
      break;
    case 1:
      uVar10 = uVar10 ^ 1;
    case 2:
      puVar6 = puVar6 + 1;
      break;
    case 3:
      puVar6 = puVar6 + 4;
      break;
    case 4:
      puVar6 = puVar6 + 2;
    }
  } while( true );
}



// Address: 4a092a24

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a092a24(int param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  short *psVar9;
  undefined2 *puVar10;
  int unaff_r4;
  int unaff_r5;
  int iVar11;
  int *unaff_r6;
  int *piVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  int iVar16;
  ushort *puVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStack_40 [28];
  
  if ((**(uint **)PTR_DAT_4a093358 & 0x100) != 0) {
    psVar2 = *(short **)(param_1 + 0x130);
    if ((*(uint *)(param_1 + 300) & 1) != 0) {
      sVar1 = psVar2[2];
      bVar18 = sVar1 == 0;
      if (bVar18) {
        sVar1 = psVar2[3];
      }
      bVar19 = bVar18 && sVar1 == 0;
      if (bVar18 && sVar1 == 0) {
        bVar19 = *psVar2 == 0x1802;
      }
      if (bVar19) {
        psVar2 = *(short **)(psVar2 + 6);
      }
      else {
        psVar2 = (short *)0x0;
      }
    }
    if (psVar2 == (short *)0x0) {
      return;
    }
  }
  puVar15 = auStack_40;
  if ((*(uint *)(param_1 + 300) & 0x10) == 0) {
    piVar6 = *(int **)(param_1 + 0x140);
  }
  else {
    psVar2 = *(short **)(param_1 + 0x140);
    sVar1 = psVar2[2];
    bVar18 = sVar1 == 0;
    if (bVar18) {
      sVar1 = psVar2[3];
    }
    bVar19 = bVar18 && sVar1 == 0;
    if (bVar18 && sVar1 == 0) {
      bVar19 = *psVar2 == 0x2001;
    }
    if (bVar19) {
      piVar6 = *(int **)(psVar2 + 6);
    }
    else {
      piVar6 = (int *)0x0;
    }
  }
  if (piVar6 == (int *)0x0 && (**(uint **)PTR_DAT_4a093358 & 0x6000) == 0) {
    return;
  }
  iVar3 = 0;
  piVar12 = (int *)PTR_DAT_4a093358;
  if (piVar6 == (int *)0x0) {
LAB_4a092b50:
    iVar3 = FUN_4a09281c(param_1);
    if (iVar3 != 0) {
      iVar3 = *(int *)(param_1 + 0xf0);
      if ((*(uint *)(param_1 + 300) & 0x20) == 0) {
        iVar11 = *(int *)(param_1 + 0x144);
      }
      else {
        psVar2 = *(short **)(param_1 + 0x144);
        sVar1 = psVar2[2];
        bVar18 = sVar1 == 0;
        if (bVar18) {
          sVar1 = psVar2[3];
        }
        bVar19 = bVar18 && sVar1 == 0;
        if (bVar18 && sVar1 == 0) {
          bVar19 = *psVar2 == 0x803;
        }
        if (bVar19) {
          iVar11 = *(int *)(psVar2 + 6);
        }
        else {
          iVar11 = 0;
        }
      }
      if (iVar11 == 0) {
        uVar14 = *(uint *)(param_1 + 300);
      }
      else {
        *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)PTR_DAT_4a09335c;
        uVar14 = *(uint *)(param_1 + 300) & 0xffffffdf;
        *(uint *)(param_1 + 300) = uVar14;
      }
      if ((uVar14 & 1) == 0) {
        iVar16 = *(int *)(param_1 + 0x130);
      }
      else {
        psVar2 = *(short **)(param_1 + 0x130);
        sVar1 = psVar2[2];
        bVar18 = sVar1 == 0;
        if (bVar18) {
          sVar1 = psVar2[3];
        }
        bVar19 = bVar18 && sVar1 == 0;
        if (bVar18 && sVar1 == 0) {
          bVar19 = *psVar2 == 0x1802;
        }
        if (bVar19) {
          iVar16 = *(int *)(psVar2 + 6);
        }
        else {
          iVar16 = 0;
        }
      }
      if (iVar16 != 0) {
        if (*(int *)(param_1 + 0x14) == 3) {
          iVar7 = *piVar12;
          iVar4 = *(int *)(iVar7 + 0x38c);
          *(int *)(iVar7 + 0x388) = iVar4;
          *(int *)(iVar7 + 0x38c) = iVar3 * 4 + iVar4;
          *(int *)(param_1 + 0x130) = iVar4;
          *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) & 0xfffffffe;
        }
        else {
          iVar7 = *piVar12;
          iVar4 = *(int *)(iVar7 + 0x38c);
          *(int *)(iVar7 + 0x388) = iVar4;
          *(uint *)(iVar7 + 0x38c) = (iVar3 * 6 + 3U & 0xfffffffc) + iVar4;
          *(int *)(param_1 + 0x130) = iVar4;
          *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) & 0xfffffffe;
        }
      }
      iVar7 = *piVar12;
      iVar4 = *(int *)(iVar7 + 0x38c);
      iVar13 = *(int *)(param_1 + 0xac);
      uVar14 = iVar3 * 0x14 + iVar4;
      *(int *)(iVar7 + 0x388) = iVar4;
      *(uint *)(iVar7 + 0x38c) = uVar14;
      *(int *)(param_1 + 0xac) = iVar4;
      psVar2 = *(short **)(param_1 + 0x134);
      if (psVar2 != (short *)0x0) {
        uVar14 = *(uint *)(param_1 + 300);
      }
      if (psVar2 != (short *)0x0 && (uVar14 & 2) != 0) {
        sVar1 = psVar2[2];
        bVar18 = sVar1 == 0;
        if (bVar18) {
          sVar1 = psVar2[3];
        }
        bVar19 = bVar18 && sVar1 == 0;
        if (bVar18 && sVar1 == 0) {
          bVar19 = *psVar2 == 0x1802;
        }
        if (bVar19) {
          psVar2 = *(short **)(psVar2 + 6);
        }
        else {
          psVar2 = (short *)0x0;
        }
      }
      *(short **)(puVar15 + 0x14) = psVar2;
      iVar4 = 0;
      if (psVar2 != (short *)0x0) {
        iVar4 = *(int *)(iVar7 + 0x38c);
        *(int *)(iVar7 + 0x388) = iVar4;
        *(uint *)(iVar7 + 0x38c) = (iVar3 * 6 + 3U & 0xfffffffc) + iVar4;
      }
      *(int *)(param_1 + 0x134) = iVar4;
      uVar14 = *(uint *)(param_1 + 300);
      *(uint *)(param_1 + 300) = uVar14 & 0xfffffffd;
      psVar2 = *(short **)(param_1 + 0x138);
      if (psVar2 != (short *)0x0 && (uVar14 & 4) != 0) {
        sVar1 = psVar2[2];
        bVar18 = sVar1 == 0;
        if (bVar18) {
          sVar1 = psVar2[3];
        }
        bVar19 = bVar18 && sVar1 == 0;
        if (bVar18 && sVar1 == 0) {
          bVar19 = *psVar2 == 0x1802;
        }
        if (bVar19) {
          psVar2 = *(short **)(psVar2 + 6);
        }
        else {
          psVar2 = (short *)0x0;
        }
      }
      *(short **)(puVar15 + 0x10) = psVar2;
      iVar4 = 0;
      if (psVar2 != (short *)0x0) {
        iVar4 = *(int *)(iVar7 + 0x38c);
        *(int *)(iVar7 + 0x388) = iVar4;
        *(uint *)(iVar7 + 0x38c) = (iVar3 * 6 + 3U & 0xfffffffc) + iVar4;
      }
      *(int *)(param_1 + 0x138) = iVar4;
      uVar14 = *(uint *)(param_1 + 300);
      *(uint *)(param_1 + 300) = uVar14 & 0xfffffffb;
      psVar2 = *(short **)(param_1 + 0x13c);
      if (psVar2 != (short *)0x0 && (uVar14 & 8) != 0) {
        sVar1 = psVar2[2];
        bVar18 = sVar1 == 0;
        if (bVar18) {
          sVar1 = psVar2[3];
        }
        bVar19 = bVar18 && sVar1 == 0;
        if (bVar18 && sVar1 == 0) {
          bVar19 = *psVar2 == 0x1802;
        }
        if (bVar19) {
          psVar2 = *(short **)(psVar2 + 6);
        }
        else {
          psVar2 = (short *)0x0;
        }
      }
      *(short **)(puVar15 + 0xc) = psVar2;
      iVar4 = 0;
      if (psVar2 != (short *)0x0) {
        iVar4 = *(int *)(iVar7 + 0x38c);
        *(int *)(iVar7 + 0x388) = iVar4;
        *(uint *)(iVar7 + 0x38c) = (iVar3 * 6 + 3U & 0xfffffffc) + iVar4;
      }
      *(int *)(param_1 + 0x13c) = iVar4;
      uVar14 = *(uint *)(param_1 + 300);
      *(uint *)(param_1 + 300) = uVar14 & 0xfffffff7;
      psVar2 = *(short **)(param_1 + 0x140);
      if (psVar2 != (short *)0x0 && (uVar14 & 0x10) != 0) {
        sVar1 = psVar2[2];
        bVar18 = sVar1 == 0;
        if (bVar18) {
          sVar1 = psVar2[3];
        }
        bVar19 = bVar18 && sVar1 == 0;
        if (bVar18 && sVar1 == 0) {
          bVar19 = *psVar2 == 0x2001;
        }
        if (bVar19) {
          psVar2 = *(short **)(psVar2 + 6);
        }
        else {
          psVar2 = (short *)0x0;
        }
      }
      *(short **)(puVar15 + 8) = psVar2;
      iVar4 = 0;
      if (psVar2 != (short *)0x0) {
        iVar4 = *(int *)(iVar7 + 0x38c);
        *(int *)(iVar7 + 0x388) = iVar4;
        *(int *)(iVar7 + 0x38c) = iVar3 * 4 + iVar4;
      }
      *(int *)(param_1 + 0x140) = iVar4;
      *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) & 0xffffffef;
      uVar14 = 0;
      do {
        uVar8 = 0x40 << (uVar14 & 0xff);
        psVar2 = *(short **)(param_1 + uVar14 * 4 + 0x148);
        if ((*(uint *)(param_1 + 300) & uVar8) != 0) {
          sVar1 = psVar2[2];
          bVar18 = sVar1 == 0;
          if (bVar18) {
            sVar1 = psVar2[3];
          }
          bVar19 = bVar18 && sVar1 == 0;
          if (bVar18 && sVar1 == 0) {
            bVar19 = *psVar2 == 0x1002;
          }
          if (bVar19) {
            psVar2 = *(short **)(psVar2 + 6);
          }
          else {
            psVar2 = (short *)0x0;
          }
        }
        *(short **)(puVar15 + uVar14 * 4) = psVar2;
        if (psVar2 != (short *)0x0) {
          iVar4 = *(int *)(iVar7 + 0x38c);
          *(int *)(iVar7 + 0x388) = iVar4;
          *(int *)(iVar7 + 0x38c) = iVar3 * 4 + iVar4;
          *(int *)(param_1 + uVar14 * 4 + 0x148) = iVar4;
          *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) & ~uVar8;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < 2);
      iVar3 = 0;
      uVar14 = 0;
      *(undefined4 *)(puVar15 + 0x18) = 0;
      if (*(int *)(param_1 + 0xf0) != 0) {
        do {
          psVar2 = *(short **)(param_1 + 0x130);
          if (psVar2 != (short *)0x0) {
            uVar8 = *(uint *)(param_1 + 300) & 1;
            if (*(int *)(param_1 + 0x14) == 3) {
              if (uVar8 != 0) {
                sVar1 = psVar2[2];
                bVar18 = sVar1 == 0;
                if (bVar18) {
                  sVar1 = psVar2[3];
                }
                bVar19 = bVar18 && sVar1 == 0;
                if (bVar18 && sVar1 == 0) {
                  bVar19 = *psVar2 == 0x1802;
                }
                if (bVar19) {
                  psVar2 = *(short **)(psVar2 + 6);
                }
                else {
                  psVar2 = (short *)0x0;
                }
              }
              psVar9 = (short *)(iVar16 + (uint)*(ushort *)(iVar11 + uVar14 * 2) * 4);
              psVar2[uVar14 * 2] = *psVar9;
              (psVar2 + uVar14 * 2)[1] = psVar9[1];
            }
            else {
              if (uVar8 != 0) {
                sVar1 = psVar2[2];
                bVar18 = sVar1 == 0;
                if (bVar18) {
                  sVar1 = psVar2[3];
                }
                bVar19 = bVar18 && sVar1 == 0;
                if (bVar18 && sVar1 == 0) {
                  bVar19 = *psVar2 == 0x1802;
                }
                if (bVar19) {
                  psVar2 = *(short **)(psVar2 + 6);
                }
                else {
                  psVar2 = (short *)0x0;
                }
              }
              psVar2 = psVar2 + uVar14 * 3;
              psVar9 = (short *)(iVar16 + (uint)*(ushort *)(iVar11 + uVar14 * 2) * 6);
              *psVar2 = *psVar9;
              psVar2[1] = psVar9[1];
              psVar2[2] = psVar9[2];
            }
          }
          if (iVar13 != 0) {
            puVar10 = (undefined2 *)(*(int *)(param_1 + 0xac) + uVar14 * 0x14);
            puVar5 = (undefined2 *)(iVar13 + (uint)*(ushort *)(iVar11 + uVar14 * 2) * 0x14);
            *puVar10 = *puVar5;
            puVar10[1] = puVar5[1];
            *(undefined4 *)(puVar10 + 2) = *(undefined4 *)(puVar5 + 2);
            *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(puVar5 + 4);
            *(undefined4 *)(puVar10 + 6) = *(undefined4 *)(puVar5 + 6);
            puVar10[8] = puVar5[8];
            puVar10[9] = puVar5[9];
          }
          psVar2 = *(short **)(param_1 + 0x134);
          if (psVar2 != (short *)0x0) {
            if ((*(uint *)(param_1 + 300) & 2) != 0) {
              sVar1 = psVar2[2];
              bVar18 = sVar1 == 0;
              if (bVar18) {
                sVar1 = psVar2[3];
              }
              bVar19 = bVar18 && sVar1 == 0;
              if (bVar18 && sVar1 == 0) {
                bVar19 = *psVar2 == 0x1802;
              }
              if (bVar19) {
                psVar2 = *(short **)(psVar2 + 6);
              }
              else {
                psVar2 = (short *)0x0;
              }
            }
            psVar2 = psVar2 + uVar14 * 3;
            psVar9 = (short *)(*(int *)(puVar15 + 0x14) +
                              (uint)*(ushort *)
                                     (iVar11 + (uint)((ulonglong)uVar14 * (ulonglong)DAT_4a093360 >>
                                                     0x21) * 6 + 4) * 6);
            *psVar2 = *psVar9;
            psVar2[1] = psVar9[1];
            psVar2[2] = psVar9[2];
          }
          psVar2 = *(short **)(param_1 + 0x138);
          if (psVar2 != (short *)0x0) {
            if ((*(uint *)(param_1 + 300) & 4) != 0) {
              sVar1 = psVar2[2];
              bVar18 = sVar1 == 0;
              if (bVar18) {
                sVar1 = psVar2[3];
              }
              bVar19 = bVar18 && sVar1 == 0;
              if (bVar18 && sVar1 == 0) {
                bVar19 = *psVar2 == 0x1802;
              }
              if (bVar19) {
                psVar2 = *(short **)(psVar2 + 6);
              }
              else {
                psVar2 = (short *)0x0;
              }
            }
            psVar2 = psVar2 + uVar14 * 3;
            psVar9 = (short *)(*(int *)(puVar15 + 0x10) +
                              (uint)*(ushort *)
                                     (iVar11 + (uint)((ulonglong)uVar14 * (ulonglong)DAT_4a093360 >>
                                                     0x21) * 6 + 4) * 6);
            *psVar2 = *psVar9;
            psVar2[1] = psVar9[1];
            psVar2[2] = psVar9[2];
          }
          psVar2 = *(short **)(param_1 + 0x13c);
          if (psVar2 != (short *)0x0) {
            if ((*(uint *)(param_1 + 300) & 8) != 0) {
              sVar1 = psVar2[2];
              bVar18 = sVar1 == 0;
              if (bVar18) {
                sVar1 = psVar2[3];
              }
              bVar19 = bVar18 && sVar1 == 0;
              if (bVar18 && sVar1 == 0) {
                bVar19 = *psVar2 == 0x1802;
              }
              if (bVar19) {
                psVar2 = *(short **)(psVar2 + 6);
              }
              else {
                psVar2 = (short *)0x0;
              }
            }
            psVar2 = psVar2 + uVar14 * 3;
            psVar9 = (short *)(*(int *)(puVar15 + 0xc) +
                              (uint)*(ushort *)
                                     (iVar11 + (uint)((ulonglong)uVar14 * (ulonglong)DAT_4a093360 >>
                                                     0x21) * 6 + 4) * 6);
            *psVar2 = *psVar9;
            psVar2[1] = psVar9[1];
            psVar2[2] = psVar9[2];
          }
          uVar8 = 0;
          puVar17 = (ushort *)(iVar11 + uVar14 * 2);
          do {
            if (*(int *)(puVar15 + uVar8 * 4) != 0) {
              psVar2 = *(short **)(param_1 + uVar8 * 4 + 0x148);
              if ((*(uint *)(param_1 + 300) & 0x40 << (uVar8 & 0xff)) != 0) {
                sVar1 = psVar2[2];
                bVar18 = sVar1 == 0;
                if (bVar18) {
                  sVar1 = psVar2[3];
                }
                bVar19 = bVar18 && sVar1 == 0;
                if (bVar18 && sVar1 == 0) {
                  bVar19 = *psVar2 == 0x1002;
                }
                if (bVar19) {
                  psVar2 = *(short **)(psVar2 + 6);
                }
                else {
                  psVar2 = (short *)0x0;
                }
              }
              psVar9 = (short *)(*(int *)(puVar15 + uVar8 * 4) + (uint)*puVar17 * 4);
              psVar2[uVar14 * 2] = *psVar9;
              (psVar2 + uVar14 * 2)[1] = psVar9[1];
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < 2);
          uVar8 = *(uint *)(param_1 + 300);
          psVar2 = *(short **)(param_1 + 0x140);
          if ((uVar8 & 0x10) != 0) {
            sVar1 = psVar2[2];
            bVar18 = sVar1 == 0;
            if (bVar18) {
              sVar1 = psVar2[3];
            }
            bVar19 = bVar18 && sVar1 == 0;
            if (bVar18 && sVar1 == 0) {
              bVar19 = *psVar2 == 0x2001;
            }
            if (bVar19) {
              psVar2 = *(short **)(psVar2 + 6);
            }
            else {
              psVar2 = (short *)0x0;
            }
          }
          if (psVar2 != (short *)0x0) {
            if (iVar3 == 0) {
              *(undefined4 *)(puVar15 + 0x18) =
                   *(undefined4 *)(*(int *)(puVar15 + 8) + (uint)puVar17[2] * 4);
            }
            psVar2 = *(short **)(param_1 + 0x140);
            if ((uVar8 & 0x10) != 0) {
              sVar1 = psVar2[2];
              bVar18 = sVar1 == 0;
              if (bVar18) {
                sVar1 = psVar2[3];
              }
              bVar19 = bVar18 && sVar1 == 0;
              if (bVar18 && sVar1 == 0) {
                bVar19 = *psVar2 == 0x2001;
              }
              if (bVar19) {
                psVar2 = *(short **)(psVar2 + 6);
              }
              else {
                psVar2 = (short *)0x0;
              }
            }
            *(undefined4 *)(psVar2 + uVar14 * 2) = *(undefined4 *)(puVar15 + 0x18);
          }
          iVar3 = iVar3 + 1;
          if (iVar3 == 3) {
            iVar3 = 0;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < *(uint *)(param_1 + 0xf0));
      }
      *(undefined4 *)(param_1 + 0x144) = 0;
      *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) & 0xffffffdf;
      *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0xf0);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a092b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(puVar15 + 0x3c))();
    return;
  }
  uVar14 = *(uint *)(param_1 + 0xb0);
  iVar11 = 1;
  puVar15 = auStack_40;
  if (uVar14 == 0) {
    param_1 = unaff_r4;
    iVar11 = unaff_r5;
    piVar12 = unaff_r6;
    puVar15 = (undefined1 *)register0x00000054;
  }
  uVar8 = 0;
  if (uVar14 == 0) {
    return;
  }
  do {
    iVar16 = *piVar6;
    while( true ) {
      piVar6 = piVar6 + 1;
      iVar3 = iVar3 + 1;
      if (iVar3 == 3) {
        iVar3 = 0;
      }
      uVar8 = uVar8 + 1;
      if (uVar14 <= uVar8) {
        if (iVar11 != 0) {
          return;
        }
        goto LAB_4a092b50;
      }
      if (iVar3 == 0) break;
      if (*piVar6 != iVar16) goto LAB_4a092b50;
    }
  } while( true );
}



// Address: 4a093364

void FUN_4a093364(int param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined1 uVar10;
  bool bVar11;
  bool bVar12;
  
  puVar1 = PTR_DAT_4a0935dc;
  iVar7 = *(int *)PTR_DAT_4a0935dc;
  if ((*(int *)(*(int *)(param_1 + 0xc) + 0x30) != 0) && (*(int *)(param_1 + 0x14c) == 0)) {
    *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x148);
    *(uint *)(param_1 + 300) =
         *(uint *)(param_1 + 300) & 0xffffff7f | (*(uint *)(param_1 + 300) & 0x40) << 1;
  }
  if ((*(uint *)(*(int *)(param_1 + 0xc) + 0x10) & 0x1000) == 0) {
    iVar4 = *(int *)(iVar7 + 0x38c);
    *(int *)(iVar7 + 0x388) = iVar4;
    *(int *)(iVar7 + 0x38c) = iVar4 + 0x10;
    *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    FUN_4a0307d4(iVar7 + 0x4d0);
    *(uint *)(*(int *)(param_1 + 0xc) + 0x10) = *(uint *)(*(int *)(param_1 + 0xc) + 0x10) | 0x1000;
  }
  iVar5 = *(int *)(param_1 + 0xc);
  uVar6 = *(uint *)(iVar7 + 0x4c0);
  iVar8 = iVar7 + 0x4dc;
  piVar9 = (int *)(iVar5 + 0x3c);
  iVar4 = iVar8;
  if (*(int *)(param_1 + 0x14) == 3) {
    piVar9 = (int *)(iVar5 + 0x44);
    iVar4 = (int)*(short *)(param_1 + 0x1a);
    uVar2 = *(uint *)(iVar7 + 0x4cc);
    if (iVar4 < 0) {
      iVar4 = *(int *)(iVar7 + 0x4f8) + (iVar4 + *(int *)(iVar7 + 0x3b8)) * 0xc;
    }
    else {
      iVar4 = *(int *)(iVar7 + 0x4f4) + iVar4 * 0xc;
    }
  }
  else {
    uVar3 = (*(uint *)(iVar5 + 0x10) & 0x70000) >> 0x10;
    if ((uVar3 == 0 || uVar3 == 5) && ((*(uint *)(iVar5 + 0x10) & 0x1c00000) != 0x1400000)) {
      uVar2 = *(uint *)(iVar7 + 0x4c4);
      if (uVar3 == 5) {
        bVar12 = *(int *)(iVar5 + 0x2c) != 0;
        uVar3 = 0;
        if (bVar12) {
          uVar3 = *(uint *)(*(int *)(iVar5 + 0x2c) + 0x34);
        }
        bVar11 = (uVar3 & 8) != 0;
        if (bVar12 && bVar11) {
          uVar3 = *(uint *)(iVar7 + 0x5bc);
        }
        if ((bVar12 && bVar11) && (uVar3 & 0x1000) != 0) {
          iVar4 = iVar7 + 0x688;
        }
      }
    }
    else {
      uVar2 = *(uint *)(iVar7 + 0x4c8);
      piVar9 = (int *)(iVar5 + 0x40);
      iVar4 = iVar7 + 0x4e8;
    }
  }
  if (uVar6 != 3) {
    uVar2 = uVar6;
  }
  if (uVar6 != 3) {
    iVar4 = iVar8;
  }
  uVar3 = uVar2 & 0xffffff7f;
  uVar6 = (uVar2 & 0x80) >> 7;
  if (uVar3 == 0) {
    if (uVar6 == 0) {
      *(int *)(param_1 + 8) = iVar4;
      iVar7 = *(int *)(iVar4 + 4);
      *(int *)(param_1 + 4) = iVar7;
      *(int *)(iVar7 + 8) = param_1;
      *(int *)(iVar4 + 4) = param_1;
      return;
    }
  }
  else {
    if (uVar3 == 1) {
      if (*piVar9 == 0) {
        if (uVar6 == 0) {
          *(int *)(param_1 + 8) = iVar4;
          iVar7 = *(int *)(iVar4 + 4);
          *(int *)(param_1 + 4) = iVar7;
          *(int *)(iVar7 + 8) = param_1;
          *(int *)(iVar4 + 4) = param_1;
        }
        else {
          FUN_4a0307d4(iVar4,param_1);
        }
      }
      else {
        FUN_4a0307d4(*piVar9,param_1);
        if (uVar6 != 0) {
          return;
        }
      }
      *piVar9 = param_1;
      return;
    }
    if (uVar3 != 2) {
      return;
    }
    for (iVar7 = *(int *)(iVar4 + 8); iVar7 != iVar4; iVar7 = *(int *)(iVar7 + 8)) {
      uVar10 = 1;
      if (uVar6 == 0) {
        uVar10 = false;
        bVar12 = (**(uint **)puVar1 & 0x2000000) == 0;
        if (!bVar12) {
          FUN_4a172458(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(iVar7 + 0x48));
          goto joined_r0x4a0935b0;
        }
        FUN_4a172458(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(iVar7 + 0x48));
        if (!(bool)uVar10 || bVar12) break;
      }
      else {
        FUN_4a1720a0(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(iVar7 + 0x48));
joined_r0x4a0935b0:
        if (!(bool)uVar10) break;
      }
    }
    iVar4 = *(int *)(iVar7 + 4);
  }
  iVar7 = *(int *)(iVar4 + 8);
  *(int *)(param_1 + 8) = iVar7;
  *(int *)(param_1 + 4) = iVar4;
  *(int *)(iVar7 + 4) = param_1;
  *(int *)(iVar4 + 8) = param_1;
  return;
}



// Address: 4a0935e0

void FUN_4a0935e0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((*(uint *)(param_1 + 0x10) & 0x40000000) != 0) {
    uVar1 = param_4[1];
    uVar2 = param_4[2];
    uVar3 = param_4[3];
    uVar4 = param_4[4];
    uVar5 = param_4[5];
    uVar6 = param_4[6];
    *param_2 = *param_4;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
    param_2[4] = uVar4;
    param_2[5] = uVar5;
    param_2[6] = uVar6;
    uVar1 = param_4[8];
    param_2[7] = param_4[7];
    param_2[8] = uVar1;
    param_2[9] = param_4[9];
    param_2[10] = param_4[10];
    param_2[0xb] = param_4[0xb];
    return;
  }
  uVar1 = FUN_4a171fac(*param_3);
  uVar1 = FUN_4a17295c(uVar1,0xfffffff4);
  *param_2 = uVar1;
  uVar1 = FUN_4a171fac(param_3[1]);
  uVar1 = FUN_4a17295c(uVar1,0xfffffff4);
  param_2[1] = uVar1;
  uVar1 = FUN_4a171fac(param_3[2]);
  uVar1 = FUN_4a17295c(uVar1,0xfffffff4);
  param_2[2] = uVar1;
  uVar1 = FUN_4a171fac(param_3[3]);
  uVar1 = FUN_4a17295c(uVar1,0xfffffff4);
  param_2[3] = uVar1;
  uVar1 = FUN_4a171fac(param_3[4]);
  uVar1 = FUN_4a17295c(uVar1,0xfffffff4);
  param_2[4] = uVar1;
  uVar1 = FUN_4a171fac(param_3[5]);
  uVar1 = FUN_4a17295c(uVar1,0xfffffff4);
  param_2[5] = uVar1;
  uVar1 = FUN_4a171fac(param_3[6]);
  uVar1 = FUN_4a17295c(uVar1,0xfffffff4);
  param_2[6] = uVar1;
  uVar1 = FUN_4a171fac(param_3[7]);
  uVar1 = FUN_4a17295c(uVar1,0xfffffff4);
  param_2[7] = uVar1;
  uVar1 = FUN_4a171fac(param_3[8]);
  uVar1 = FUN_4a17295c(uVar1,0xfffffff4);
  param_2[8] = uVar1;
  uVar1 = FUN_4a171fac(param_3[9]);
  param_2[9] = uVar1;
  uVar1 = FUN_4a171fac(param_3[10]);
  param_2[10] = uVar1;
  uVar1 = FUN_4a171fac(param_3[0xb]);
  param_2[0xb] = uVar1;
  return;
}



// Address: 4a093710

void FUN_4a093710(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint local_28;
  uint local_24;
  ushort local_20;
  ushort local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined1 auStack_18 [8];
  
  *(undefined1 *)(param_1 + 0xd) = 0;
  if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x30)) {
    FUN_4a16e4a4();
    uVar1 = FUN_4a0a41ae(auStack_18,0,0,(int)*(short *)(param_1 + 0x18),
                         (int)*(short *)(param_1 + 0x1a));
    FUN_4a16e534(param_1 + 0x1c,uVar1);
    uVar3 = *(uint *)(param_1 + 0x30);
    for (uVar2 = 0; uVar2 < uVar3; uVar2 = uVar2 + 1) {
      thunk_FUN_4a000f84(&local_20,*(undefined4 *)(param_1 + 0x2c),8);
      FUN_4a16e4b0(param_1 + 0x2c,0);
      local_24 = (uint)local_20;
      local_28 = (uint)local_1e;
      FUN_4a093b78(param_1,local_1c,local_1a,&local_24,&local_28);
    }
  }
  return;
}



// Address: 4a09378a

void FUN_4a09378a(undefined4 *param_1,ushort *param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int local_2c;
  
  iVar1 = -1;
  if (param_2 != (ushort *)0x0) {
    iVar1 = (int)((uint)*param_2 << 0x10) >> 0x1f;
  }
  iVar6 = 0;
  local_2c = 0;
  if ((param_4 < 9) && (local_2c = 1, param_4 < 5)) {
    local_2c = 2;
  }
  local_2c = param_3[2] << local_2c;
  iVar2 = param_3[3];
  iVar8 = *param_3;
  if ((param_4 < 9) && (iVar6 = 1, param_4 < 5)) {
    iVar6 = 2;
  }
  iVar3 = param_3[1];
  if (param_5 != 0) {
    local_2c = local_2c + -1;
  }
  uVar4 = *param_1;
  iVar11 = param_1[1];
  for (uVar10 = 1; (local_2c >> (uVar10 & 0xff) != 0 && (iVar2 >> (uVar10 & 0xff) != 0));
      uVar10 = uVar10 + 1) {
    iVar9 = (int)*(short *)(param_1 + 6) >> (uVar10 - 1 & 0xff);
    iVar7 = iVar9 * ((int)*(short *)((int)param_1 + 0x1a) >> (uVar10 & 0xff));
    iVar5 = 4;
    if (3 < iVar7) {
      iVar5 = iVar7;
    }
    thunk_FUN_4a007b34(iVar8 << iVar6,iVar3,local_2c,iVar2,iVar1,uVar4,iVar11,
                       (int)*(short *)(param_1 + 6) << 1,iVar9,uVar10,param_2,param_4);
    iVar11 = iVar5 + iVar11;
  }
  return;
}



// Address: 4a09384e

void FUN_4a09384e(int *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint auStack_124 [63];
  uint local_28;
  int *piStack_24;
  int iStack_20;
  int local_1c;
  int local_18;
  
  local_18 = param_4;
  local_1c = param_3;
  iStack_20 = param_2;
  piStack_24 = param_1;
  if (param_2 != 0) {
    uVar1 = param_1[1];
    uVar3 = *param_1 + param_3 * param_4 * 2;
    local_28 = uVar3;
    if ((param_1[0xc] != 0) && (uVar3 != uVar1)) {
      uVar7 = 1;
      while( true ) {
        uVar2 = ((int)(short)param_1[6] >> (uVar7 - 1 & 0xff)) *
                ((int)*(short *)((int)param_1 + 0x1a) >> (uVar7 & 0xff));
        if (uVar2 == 0) break;
        auStack_124[uVar7 * 3 + 1] = uVar1;
        auStack_124[uVar7 * 3] = uVar3;
        auStack_124[uVar7 * 3 + 2] = uVar2;
        iVar6 = (local_1c >> (uVar7 - 1 & 0xff)) * (local_18 >> (uVar7 & 0xff));
        iVar4 = 4;
        if (3 < iVar6) {
          iVar4 = iVar6;
        }
        uVar3 = iVar4 + uVar3;
        uVar5 = 4;
        if (3 < uVar2) {
          uVar5 = uVar2;
        }
        uVar1 = uVar5 + uVar1;
        uVar7 = uVar7 + 1;
      }
      while (uVar7 = uVar7 - 1, uVar7 != 0) {
        thunk_FUN_4a00105c(auStack_124[uVar7 * 3],auStack_124[uVar7 * 3 + 1],
                           auStack_124[uVar7 * 3 + 2]);
      }
      *(short *)((int)param_1 + 0x1a) = (short)local_18;
      *(short *)(param_1 + 6) = (short)local_1c;
      param_1[1] = local_28;
      uVar3 = param_1[0x10];
      for (uVar1 = 0; uVar1 < uVar3; uVar1 = uVar1 + 1) {
        FUN_4a06213c(*(undefined4 *)(param_1[0xf] + uVar1 * 4));
      }
    }
    param_1[1] = local_28;
  }
  return;
}



// Address: 4a093908

void FUN_4a093908(int param_1,int *param_2,uint param_3,int param_4,int param_5,byte *param_6,
                 int param_7)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  byte *pbVar11;
  byte bVar12;
  undefined4 uVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int local_34;
  
  local_34 = param_2[2];
  if (param_4 < 9) {
    if (param_4 < 5) {
      local_34 = local_34 << 2;
    }
    else {
      local_34 = local_34 << 1;
    }
  }
  else {
    local_34 = local_34 >> (param_4 >> 5 & 0xffU);
  }
  iVar15 = param_2[3];
  iVar7 = *param_2;
  if (param_4 < 9) {
    if (param_4 < 5) {
      uVar8 = iVar7 << 2;
    }
    else {
      uVar8 = iVar7 << 1;
    }
  }
  else {
    uVar8 = iVar7 >> (param_4 >> 5 & 0xffU);
  }
  uVar3 = param_2[1];
  if (param_5 != 0) {
    local_34 = local_34 + -1;
  }
  iVar7 = *(int *)(param_1 + 4);
  for (uVar4 = 1; (int)uVar4 < (int)param_3; uVar4 = uVar4 + 1) {
    iVar16 = ((int)*(short *)(param_1 + 0x18) >> (uVar4 - 1 & 0xff)) *
             ((int)*(short *)(param_1 + 0x1a) >> (uVar4 & 0xff));
    iVar2 = 4;
    if (3 < iVar16) {
      iVar2 = iVar16;
    }
    iVar7 = iVar7 + iVar2;
  }
  iVar16 = (int)*(short *)(param_1 + 0x18) >> (param_3 - 1 & 0xff);
  uVar4 = -1 << (param_3 & 0xff);
  iVar2 = 1 << (param_3 & 0xff);
  for (uVar9 = uVar3 & uVar4; (int)uVar9 < (int)(uVar3 + iVar15); uVar9 = uVar9 + iVar2) {
    bVar10 = 0;
    pbVar5 = param_6 + param_7;
    for (uVar6 = uVar8 & uVar4; (int)uVar6 < (int)(uVar8 + local_34); uVar6 = uVar6 + iVar2) {
      if (param_4 == 4) {
        if ((bool)(bVar10 & 1)) {
          bVar14 = *param_6 >> 4;
          param_6 = param_6 + 1;
        }
        else {
          bVar14 = *param_6 & 0xf;
        }
        pbVar11 = (byte *)(iVar16 * ((int)uVar9 >> (param_3 & 0xff)) +
                          ((int)uVar6 >> (param_3 + 1 & 0xff)) + iVar7);
        bVar12 = *pbVar11;
        if (((int)uVar6 >> (param_3 & 0xff) & 1U) == 0) {
          bVar12 = bVar12 & 0xf0;
        }
        else {
          bVar14 = bVar14 << 4;
          bVar12 = bVar12 & 0xf;
        }
        *pbVar11 = bVar12 | bVar14;
      }
      else if (param_4 == 8) {
        bVar14 = *param_6;
        param_6 = param_6 + 1;
        *(byte *)(iVar16 * ((int)uVar9 >> (param_3 & 0xff)) +
                 ((int)uVar6 >> (param_3 & 0xff)) + iVar7) = bVar14;
      }
      else if (param_4 == 0x10) {
        uVar1 = *(undefined2 *)param_6;
        param_6 = param_6 + 2;
        *(undefined2 *)
         (iVar16 * ((int)uVar9 >> (param_3 & 0xff)) + ((int)uVar6 >> (param_3 - 1 & 0xff)) + iVar7)
             = uVar1;
      }
      else if (param_4 == 0x20) {
        if ((int)param_3 < 2) {
          uVar17 = uVar6 << (2 - param_3 & 0xff);
        }
        else {
          uVar17 = uVar6 >> (param_3 - 2 & 0xff);
        }
        uVar13 = *(undefined4 *)param_6;
        param_6 = param_6 + 4;
        *(undefined4 *)(iVar16 * ((int)uVar9 >> (param_3 & 0xff)) + uVar17 + iVar7) = uVar13;
      }
      bVar10 = bVar10 + 1;
    }
    param_6 = pbVar5;
  }
  return;
}



// Address: 4a093a88

undefined8
FUN_4a093a88(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,undefined2 *param_6,
            undefined2 *param_7)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  
  for (iVar4 = 0; puVar1 = param_6, puVar2 = param_7, iVar3 = param_3, iVar4 < param_2;
      iVar4 = iVar4 + 1) {
    for (; 0 < iVar3; iVar3 = iVar3 + -1) {
      *puVar2 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    param_7 = param_7 + param_4;
    param_6 = param_6 + param_5;
  }
  return CONCAT44(param_2,param_1);
}



// Address: 4a093ac2

int FUN_4a093ac2(int *param_1,int param_2)

{
  uint uVar1;
  int extraout_r1;
  
  uVar1 = *(uint *)(param_2 + 0xc);
  thunk_FUN_4a0015f0(uVar1 >> 0x10,(int)*(short *)((int)param_1 + 0x1a));
  return (short)param_1[6] * extraout_r1 * 2 + ((int)(short)param_1[6] - 1U & uVar1 & 0xffff) * 2 +
         *param_1;
}



// Address: 4a093af0

void FUN_4a093af0(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  FUN_4a093a88(param_1,param_5,param_4,(int)(short)param_1[6],param_7,param_6,
               (short)param_1[6] * param_3 * 2 + param_2 * 2 + *param_1);
  return;
}



// Address: 4a093b22

void FUN_4a093b22(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  iVar4 = ((int)(short)param_1[6] - 1U & *(uint *)(param_2 + 0xc) & 0xffff) * 2 +
          (*(uint *)(param_2 + 0xc) >> 0x10) * (int)(short)param_1[6] * 2 + *param_1;
  iVar2 = (uVar1 & 0xffff) * 2;
  for (iVar3 = 0; iVar3 < (int)(uVar1 >> 0x10); iVar3 = iVar3 + 1) {
    thunk_FUN_4a000f84(iVar4,param_3,iVar2);
    iVar4 = (short)param_1[6] * 2 + iVar4;
    param_3 = iVar2 + param_3;
  }
  return;
}



// Address: 4a093b78

bool FUN_4a093b78(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xd) != '\0') {
    FUN_4a093710(param_1);
  }
  iVar1 = FUN_4a093e04(param_1,param_2,param_3);
  if (iVar1 != -1) {
    FUN_4a093bbc(param_1,iVar1,param_2,param_3,param_4,param_5);
  }
  return iVar1 != -1;
}



// Address: 4a093bbc

void FUN_4a093bbc(int param_1,int param_2,uint param_3,uint param_4,undefined4 *param_5,
                 undefined4 *param_6)

{
  uint uVar1;
  undefined4 uVar2;
  int extraout_r1;
  uint extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  ushort *puVar3;
  int iVar4;
  int aiStack_44 [2];
  uint local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  int iStack_24;
  int local_20;
  uint local_1c;
  uint local_18;
  
  for (uVar1 = 0;
      ((param_3 << 1) >> (uVar1 + 1 & 0xff) != 0 && (param_4 >> (uVar1 + 1 & 0xff) != 0));
      uVar1 = uVar1 + 1) {
  }
  iVar4 = 1 << (uVar1 & 0xff);
  local_28 = param_2 * 8;
  puVar3 = (ushort *)(*(int *)(param_1 + 0x1c) + local_28);
  local_2c = (uint)*puVar3;
  iStack_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  thunk_FUN_4a0066d8(local_2c << 1,iVar4);
  thunk_FUN_4a0066d8(iVar4 - extraout_r1,iVar4);
  local_30 = (uint)puVar3[1];
  thunk_FUN_4a0066d8(local_30,iVar4);
  thunk_FUN_4a0066d8(iVar4 - extraout_r1_01,iVar4);
  uVar1 = extraout_r1_00 >> 1;
  local_38 = local_1c + uVar1;
  local_3c = local_18 + extraout_r1_02;
  local_34 = param_1 + 0x1c;
  if (uVar1 != 0) {
    uVar2 = FUN_4a0a41ae(aiStack_44,local_2c,local_30,uVar1,puVar3[3]);
    FUN_4a16e534(local_34,uVar2);
    puVar3 = (ushort *)(*(int *)(param_1 + 0x1c) + local_28);
    *puVar3 = *puVar3 + (short)uVar1;
    puVar3[2] = puVar3[2] - (short)uVar1;
    local_38 = local_1c;
  }
  if (extraout_r1_02 != 0) {
    uVar2 = FUN_4a0a41ae(aiStack_44,*puVar3,puVar3[1],puVar3[2],extraout_r1_02);
    FUN_4a16e534(local_34,uVar2);
    iVar4 = *(int *)(param_1 + 0x1c) + local_28;
    *(short *)(iVar4 + 2) = *(short *)(iVar4 + 2) + (short)extraout_r1_02;
    *(short *)(iVar4 + 6) = *(short *)(iVar4 + 6) - (short)extraout_r1_02;
    local_3c = local_18;
  }
  aiStack_44[0] = param_1;
  iVar4 = FUN_4a0a3fc6(*(int *)(param_1 + 0x1c) + local_28,local_38 & 0xffff,local_3c & 0xffff,
                       param_5,param_6);
  if (iVar4 != 0) {
    FUN_4a16e45a(local_34,local_20,local_20 + 1);
  }
  iVar4 = *(int *)(param_1 + 0x10);
  if (iVar4 != -1) {
    if (*(int *)(param_1 + 0x30) == iVar4) {
      *(int *)(param_1 + 0x10) = iVar4 + 1;
    }
    uVar2 = FUN_4a0a41ae(aiStack_44,*param_5,*param_6,local_38,local_3c);
    FUN_4a16e534(param_1 + 0x2c,uVar2);
  }
  return;
}



// Address: 4a093cee

undefined4
FUN_4a093cee(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  int *local_18;
  
  FUN_4a0a41ae(auStack_20,param_4,param_5,param_2,param_3);
  local_18 = param_1 + 7;
  if (param_1[4] != -1) {
    iVar1 = FUN_4a136368(auStack_20,param_1[0xb] + param_1[0xc] * 8 + -8);
    if (iVar1 == 1) {
      if (param_1[0xc] == param_1[4]) {
        param_1[4] = param_1[4] + -1;
      }
      FUN_4a16e524(param_1 + 0xb,param_1[0xc] + -1);
    }
    else {
      for (uVar4 = 0; uVar4 < (uint)param_1[0xc]; uVar4 = uVar4 + 1) {
        iVar1 = FUN_4a136368(param_1[0xb] + uVar4 * 8,auStack_20);
        if (iVar1 != 0) goto LAB_4a093d54;
      }
      uVar4 = 0xffffffff;
LAB_4a093d54:
      if (param_1[4] <= (int)uVar4) {
        uVar4 = param_1[4];
      }
      param_1[4] = uVar4;
      FUN_4a16e4b0(param_1 + 0xb);
    }
    *(undefined1 *)((int)param_1 + 0xd) = 1;
    if (param_1[0xc] == 0) {
      param_1[4] = 0;
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      FUN_4a16e4a4(local_18);
      uVar2 = FUN_4a0a41ae(auStack_28,0,0,0x80,0x100);
      FUN_4a16e534(local_18,uVar2);
      *(undefined2 *)(param_1 + 6) = 0x80;
      *(undefined2 *)((int)param_1 + 0x1a) = 0x100;
      param_1[5] = 1;
      if (param_1[1] != 0) {
        param_1[1] = *param_1 + 0x10000;
      }
      return 1;
    }
  }
  do {
    iVar1 = param_1[7];
    iVar5 = iVar1 + param_1[8] * 8;
    while( true ) {
      if (iVar1 == iVar5) {
        FUN_4a16e534(local_18,auStack_20);
        return 1;
      }
      iVar3 = FUN_4a0a414a(auStack_20,iVar1);
      if (iVar3 != 0) break;
      iVar1 = iVar1 + 8;
    }
    iVar1 = iVar1 - *local_18 >> 3;
    FUN_4a16e45a(local_18,iVar1,iVar1 + 1);
  } while( true );
}



// Address: 4a093e04

uint FUN_4a093e04(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int extraout_r1;
  uint extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  int local_2c;
  uint local_28;
  
  local_28 = 0xffffffff;
  local_2c = 0x7fffffff;
  for (uVar1 = 0;
      ((uint)(param_2 << 1) >> (uVar1 + 1 & 0xff) != 0 && (param_3 >> (uVar1 + 1 & 0xff) != 0));
      uVar1 = uVar1 + 1) {
  }
  iVar2 = 1 << (uVar1 & 0xff);
  uVar1 = *(uint *)(param_1 + 0x20);
  for (uVar3 = 0; uVar3 < uVar1; uVar3 = uVar3 + 1) {
    puVar4 = (ushort *)(*(int *)(param_1 + 0x1c) + uVar3 * 8);
    uVar5 = (uint)puVar4[2];
    if ((param_2 <= (int)uVar5) && (uVar6 = (uint)puVar4[3], (int)param_3 <= (int)uVar6)) {
      thunk_FUN_4a0066d8((uint)*puVar4 << 1,iVar2);
      thunk_FUN_4a0066d8(iVar2 - extraout_r1,iVar2);
      thunk_FUN_4a0066d8(puVar4[1],iVar2);
      thunk_FUN_4a0066d8(iVar2 - extraout_r1_01,iVar2);
      if ((param_2 + (extraout_r1_00 >> 1) <= uVar5) &&
         ((param_3 + extraout_r1_02 <= uVar6 && ((int)(uVar6 * uVar5) < local_2c)))) {
        local_2c = uVar6 * uVar5;
        local_28 = uVar3;
      }
    }
  }
  return local_28;
}



// Address: 4a093eae

undefined4 FUN_4a093eae(int param_1)

{
  short *psVar1;
  
  if ((((*(int *)(param_1 + 0x20) == 1) && (psVar1 = *(short **)(param_1 + 0x1c), *psVar1 == 0)) &&
      (psVar1[1] == 0)) &&
     (((psVar1[2] == 0x80 && (psVar1[3] == 0x100)) &&
      ((*(int *)(param_1 + 0x14) == 1 && (*(char *)(param_1 + 0xc) == '\0')))))) {
    return 1;
  }
  return 0;
}



// Address: 4a093eec

/* WARNING: Removing unreachable block (ram,0x4a093f24) */

int * FUN_4a093eec(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_24 [8];
  int local_1c;
  
  iVar2 = FUN_4a16e55e(param_1 + 0x1c,0);
  iVar2 = FUN_4a16e55e(iVar2 + 0x10,0);
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(byte *)(iVar2 + 0x1c) = *(byte *)(iVar2 + 0x1c) & 0xfc;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  puVar1 = PTR_DAT_4a093fcc;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  local_1c = iVar2 + -0x10;
  FUN_4a16e4ea(local_1c,*(undefined4 *)(*(int *)puVar1 + 0x50));
  FUN_4a16e4ea(iVar2,*(undefined4 *)(*(int *)puVar1 + 0x54));
  FUN_4a16f87a(iVar2 + 0x10,*(undefined4 *)(*(int *)puVar1 + 0x54));
  uVar3 = FUN_4a0a41ae(auStack_24,0,0,0x80,0x100);
  FUN_4a16e534(local_1c,uVar3);
  *(undefined2 *)(iVar2 + -0x14) = 0x80;
  *(undefined2 *)(iVar2 + -0x12) = 0x100;
  *(undefined4 *)(iVar2 + -0x18) = 1;
  *(undefined4 *)(iVar2 + -0x1c) = 0;
  if (*(int *)(*(int *)puVar1 + 0x54) == 0) {
    *(undefined4 *)(iVar2 + -0x1c) = 0xffffffff;
  }
  *(undefined1 *)(iVar2 + -0x1f) = 0;
  if (param_3 == 0) {
    iVar4 = DAT_4a093fd0;
    if (param_2 == 0) {
      iVar4 = 0x8000;
    }
    param_3 = thunk_FUN_4a161570(iVar4 << 1);
    *(undefined1 *)(iVar2 + -0x20) = 1;
  }
  else {
    *(undefined1 *)(iVar2 + -0x20) = 0;
  }
  *(int *)(iVar2 + -0x2c) = param_3;
  if (param_2 == 0) {
    *(undefined4 *)(iVar2 + -0x28) = 0;
  }
  else {
    *(int *)(iVar2 + -0x28) = param_3 + 0x10000;
  }
  return (int *)(iVar2 + -0x2c);
}



// Address: 4a093fd4

int FUN_4a093fd4(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_4a16e4a4(param_1 + 7);
  if (*(char *)(param_1 + 3) != '\0') {
    thunk_FUN_4a161530(*param_1);
  }
  for (uVar2 = 0; uVar2 < (uint)param_1[0x10]; uVar2 = uVar2 + 1) {
  }
  if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
    FUN_4a0a6f48(param_1[0xf],4);
    param_1[0xf] = 0;
  }
  iVar1 = FUN_4a16e5c6(param_1 + 0xb);
  iVar1 = FUN_4a16e5c6(iVar1 + -0x10);
  return iVar1 + -0x1c;
}



// Address: 4a09403c

void FUN_4a09403c(void)

{
  return;
}



// Address: 4a094040

void FUN_4a094040(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 == 2) {
    uVar2 = thunk_FUN_4a161570(0x14);
    piVar3 = (int *)FUN_4a0c707c(uVar2,PTR_s_TOWNMAP_4a0941dc);
    if (piVar3 == (int *)0x0) goto LAB_4a0941c8;
    (**(code **)(*piVar3 + 0xc))();
    iVar1 = (**(code **)(*piVar3 + 8))(piVar3);
  }
  else if (iVar1 == 1) {
    if (*(int *)(param_1 + 0x4c) == 4) {
      FUN_4a0941ec();
      uVar2 = thunk_FUN_4a161570(0x14);
      piVar3 = (int *)FUN_4a0c707c(uVar2,PTR_s_LAKESIDE_4a0941e4);
      if (piVar3 == (int *)0x0) goto LAB_4a0941c8;
      (**(code **)(*piVar3 + 0xc))();
      iVar1 = (**(code **)(*piVar3 + 8))(piVar3);
    }
    else {
      if (*(int *)(param_1 + 0x4c) != 0xb7) goto LAB_4a0941c8;
      FUN_4a0941ec();
      uVar2 = thunk_FUN_4a161570(0x14);
      piVar3 = (int *)FUN_4a0c707c(uVar2,PTR_s_STREETSIDE_4a0941e0);
      if (piVar3 == (int *)0x0) goto LAB_4a0941c8;
      (**(code **)(*piVar3 + 0xc))();
      iVar1 = (**(code **)(*piVar3 + 8))(piVar3);
    }
  }
  else {
    if (iVar1 != 0) goto LAB_4a0941c8;
    iVar1 = *(int *)(param_1 + 0x4c);
    uVar2 = thunk_FUN_4a161570(0x14);
    piVar3 = (int *)FUN_4a0c707c(uVar2,*(undefined4 *)(PTR_PTR_4a0941e8 + iVar1 * 4));
    if (piVar3 == (int *)0x0) goto LAB_4a0941c8;
    (**(code **)(*piVar3 + 0xc))();
    iVar1 = (**(code **)(*piVar3 + 8))(piVar3);
  }
  if (iVar1 != 0) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
LAB_4a0941c8:
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  return;
}



// Address: 4a0941ec

undefined * FUN_4a0941ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  if (((*(uint *)PTR_DAT_4a0942a8 & 1) == 0) &&
     (iVar3 = thunk_FUN_4a1491bc(PTR_DAT_4a0942a8), puVar2 = PTR_PTR_4a0942b0,
     puVar1 = PTR_DAT_4a0942ac, iVar3 != 0)) {
    *(undefined **)PTR_DAT_4a0942ac = PTR_PTR_4a0942b0;
    *(undefined **)(puVar1 + 4) = puVar2 + 0x10;
    *(undefined **)(puVar1 + 0xc) = puVar2 + 0x30;
    *(undefined **)(puVar1 + 0x10) = puVar2 + 0x40;
    *(undefined **)(puVar1 + 0x14) = puVar2 + 0x50;
    *(undefined **)(puVar1 + 8) = puVar2 + 0x20;
    *(undefined4 *)(puVar1 + 0x18) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x1c) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x20) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x24) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x28) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x30) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x34) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x38) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x3c) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x40) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x44) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x48) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x4c) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x50) = 0;
    thunk_FUN_4a1490b0(puVar1,PTR_FUN_4a0942b8,PTR_DAT_4a0942b4);
  }
  return PTR_DAT_4a0942ac;
}



// Address: 4a0942bc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0942bc(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = thunk_FUN_4a161570(0x14);
  piVar2 = (int *)FUN_4a0c707c(uVar1,*(undefined4 *)(PTR_PTR_4a09432c + param_2 * 4));
  if (piVar2 == (int *)0x0) {
    return;
  }
  (**(code **)(*piVar2 + 0xc))();
  iVar3 = (**(code **)(*piVar2 + 8))(piVar2);
  if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a094328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar2 + 4))(piVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a094314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a094330

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a094330(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  
  uVar1 = FUN_4a0ff494();
  uVar2 = FUN_4a0fba7c();
  iVar3 = FUN_4a146ea4();
  if (iVar3 == 0) {
    iVar3 = FUN_4a146d64(uVar2);
    if (iVar3 == 0) {
      iVar3 = FUN_4a146d54(uVar2);
      if (iVar3 == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x48) = 0;
      iVar3 = FUN_4a145960(uVar1);
      *(int *)(param_1 + 0x4c) = iVar3;
      uVar1 = thunk_FUN_4a161570(0x14);
      piVar4 = (int *)FUN_4a0c707c(uVar1,*(undefined4 *)(PTR_PTR_4a094538 + iVar3 * 4));
      if (piVar4 == (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4a0944f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
      (**(code **)(*piVar4 + 0xc))();
      iVar3 = (**(code **)(*piVar4 + 8))(piVar4);
      if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a094514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x48) = 1;
      iVar3 = FUN_4a145a38(uVar1);
      *(int *)(param_1 + 0x4c) = iVar3;
      if (iVar3 == 4) {
        FUN_4a0941ec();
        uVar1 = thunk_FUN_4a161570(0x14);
        piVar4 = (int *)FUN_4a0c707c(uVar1,PTR_s_LAKESIDE_4a094534);
        if (piVar4 == (int *)0x0) {
          return;
        }
        (**(code **)(*piVar4 + 0xc))();
        iVar3 = (**(code **)(*piVar4 + 8))(piVar4);
        if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a094494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)();
          return;
        }
      }
      else {
        if (iVar3 != 0xb7) {
          return;
        }
        FUN_4a0941ec();
        uVar1 = thunk_FUN_4a161570(0x14);
        piVar4 = (int *)FUN_4a0c707c(uVar1,PTR_s_STREETSIDE_4a094530);
        if (piVar4 == (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4a09441c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)();
          return;
        }
        (**(code **)(*piVar4 + 0xc))();
        iVar3 = (**(code **)(*piVar4 + 8))(piVar4);
        if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a09443c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)();
          return;
        }
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = 2;
    uVar1 = thunk_FUN_4a161570(0x14);
    piVar4 = (int *)FUN_4a0c707c(uVar1,PTR_s_TOWNMAP_4a09452c);
    if (piVar4 == (int *)0x0) {
      return;
    }
    (**(code **)(*piVar4 + 0xc))();
    iVar3 = (**(code **)(*piVar4 + 8))(piVar4);
    if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0943b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x4a094528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar4 + 4))(piVar4);
  return;
}



// Address: 4a09453c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a09453c(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_4a0ff494();
  piVar1 = (int *)FUN_4a145948();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))();
  }
  FUN_4a0ff494();
  FUN_4a145bfc();
  piVar2 = (int *)FUN_4a0c6fcc();
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))();
    iVar3 = (**(code **)(*piVar2 + 8))(piVar2);
    if (iVar3 != 0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
  }
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 8))(piVar1);
    if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0945f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 4))(piVar1);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a0945dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a0945f4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0945f4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_4a0ff494();
  piVar2 = (int *)FUN_4a0f1788(*(undefined4 *)(iVar1 + 0x520),param_2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))();
  }
  piVar3 = (int *)FUN_4a0c6fcc(param_3);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
    iVar1 = (**(code **)(*piVar3 + 8))(piVar3);
    if (iVar1 != 0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
  }
  if (piVar2 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar2 + 8))(piVar2);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0946b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 4))(piVar2);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a0946a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a0946b8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0946b8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = thunk_FUN_4a161570(0x14);
  piVar2 = (int *)FUN_4a0c707c(uVar1,*(undefined4 *)(PTR_PTR_4a094728 + param_2 * 4));
  if (piVar2 == (int *)0x0) {
    return;
  }
  (**(code **)(*piVar2 + 0xc))();
  iVar3 = (**(code **)(*piVar2 + 8))(piVar2);
  if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a094724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar2 + 4))(piVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a094710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a09472c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a09472c(void)

{
  int *piVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_4a0ff494();
  piVar1 = (int *)FUN_4a145948();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))();
  }
  host_s3eTimerGetMs_arm();
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 8))(piVar1);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a09478c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 4))(piVar1);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a094778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a0947f0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0947f0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = thunk_FUN_4a161570(0x14);
  piVar2 = (int *)FUN_4a0c707c(uVar1,*(undefined4 *)(PTR_PTR_4a094860 + param_2 * 4));
  if (piVar2 == (int *)0x0) {
    return;
  }
  (**(code **)(*piVar2 + 0xc))();
  iVar3 = (**(code **)(*piVar2 + 8))(piVar2);
  if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a09485c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar2 + 4))(piVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a094848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a094864

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a094864(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_4a0ff494();
  piVar2 = (int *)FUN_4a0f3464(*(undefined4 *)(iVar1 + 0x520),param_2);
  if (piVar2 == (int *)0x0) {
    return;
  }
  (**(code **)(*piVar2 + 0xc))();
  iVar1 = (**(code **)(*piVar2 + 8))(piVar2);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0948cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar2 + 4))(piVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a0948b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a0949d8

void FUN_4a0949d8(void)

{
  return;
}



// Address: 4a094aa4

void FUN_4a094aa4(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (*(int **)(param_1 + 0x50) != param_2) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 0xc))(param_2);
    }
    piVar2 = *(int **)(param_1 + 0x50);
    if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    *(int **)(param_1 + 0x50) = param_2;
    return;
  }
  return;
}



// Address: 4a094b24

void FUN_4a094b24(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_4a0ff494();
  uVar3 = *(undefined4 *)(iVar1 + 0x51c);
  uVar2 = FUN_4a140fd0(uVar3,0,2);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  uVar2 = FUN_4a140fd0(uVar3,0,3);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  uVar2 = FUN_4a140fd0(uVar3,0,0xb);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  uVar2 = FUN_4a140fd0(uVar3,0,0xc);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  uVar2 = FUN_4a140fd0(uVar3,0,5);
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  uVar2 = FUN_4a140fd0(uVar3,0,6);
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  uVar2 = FUN_4a140fd0(uVar3,0,7);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  uVar2 = FUN_4a140fd0(uVar3,0,8);
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  uVar2 = FUN_4a140fd0(uVar3,0,9);
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  uVar2 = FUN_4a140fd0(uVar3,0,10);
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  return;
}



// Address: 4a094c04

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a094c04(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  piVar1 = (int *)FUN_4a0c6fcc(param_2);
  if (piVar1 == (int *)0x0) {
    return;
  }
  (**(code **)(*piVar1 + 0xc))();
  iVar2 = (**(code **)(*piVar1 + 8))(piVar1);
  if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a094c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 4))(piVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a094c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a094c64

/* WARNING: Removing unreachable block (ram,0x4a094cc8) */
/* WARNING: Removing unreachable block (ram,0x4a094ce8) */
/* WARNING: Removing unreachable block (ram,0x4a094ce0) */

void FUN_4a094c64(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x50);
  if (piVar2 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar2 + 8))(piVar2);
    if (iVar1 != 0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}



// Address: 4a094d04

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a094d04(void)

{
  int *piVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_4a0ff494();
  piVar1 = (int *)FUN_4a145948();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))();
  }
  host_s3eTimerGetMs_arm();
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 8))(piVar1);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a094d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 4))(piVar1);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a094d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a094d68

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a094d68(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = thunk_FUN_4a161570(0x14);
  piVar2 = (int *)FUN_4a0c707c(uVar1,*(undefined4 *)(PTR_PTR_4a094dd8 + param_2 * 4));
  if (piVar2 == (int *)0x0) {
    return;
  }
  (**(code **)(*piVar2 + 0xc))();
  iVar3 = (**(code **)(*piVar2 + 8))(piVar2);
  if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a094dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar2 + 4))(piVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a094dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a094ddc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a094ddc(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  code *UNRECOVERED_JUMPTABLE_00;
  
  uVar1 = param_2 - 0x835;
  if ((1 < uVar1 && uVar1 != 3) && uVar1 != 4) {
    return;
  }
  uVar2 = thunk_FUN_4a161570(0x14);
  if (param_3 == 0) {
    puVar5 = &DAT_4a094e6c;
  }
  else {
    puVar5 = &DAT_4a094e70;
  }
  piVar3 = (int *)FUN_4a0c707c(uVar2,puVar5);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4a094e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  (**(code **)(*piVar3 + 0xc))();
  iVar4 = (**(code **)(*piVar3 + 8))(piVar3);
  if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a094e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar3 + 4))(piVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a094e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



// Address: 4a094e74

void FUN_4a094e74(void)

{
  return;
}



// Address: 4a094e78

void FUN_4a094e78(void)

{
  return;
}



// Address: 4a094edc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * FUN_4a094edc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  int *piVar12;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar2 = FUN_4a0ff494();
  uVar3 = *(undefined4 *)(iVar2 + 0x51c);
  FUN_4a0ff494();
  piVar4 = (int *)FUN_4a145948();
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))();
  }
  FUN_4a0ff494();
  FUN_4a145bfc();
  piVar5 = (int *)FUN_4a0c6fcc();
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))();
  }
  iVar2 = FUN_4a140fd0(uVar3,0);
  FUN_4a140fd0(uVar3,0,1);
  FUN_4a140fd0(uVar3,0,2);
  FUN_4a140fd0(uVar3,0,3);
  FUN_4a140fd0(uVar3,0,4);
  FUN_4a140fd0(uVar3,0,0xb);
  FUN_4a140fd0(uVar3,0,0xc);
  uVar6 = FUN_4a140fd0(uVar3,0,5);
  FUN_4a140fd0(uVar3,0,6,param_4,uVar6);
  FUN_4a140fd0(uVar3,0,7);
  FUN_4a140fd0(uVar3,0,8);
  FUN_4a140fd0(uVar3,0,9);
  FUN_4a140fd0(uVar3,0,10);
  if (param_2 == 0) {
    uVar6 = thunk_FUN_4a161570(0x14);
    if (iVar2 == 0) {
      pcVar11 = &DAT_4a095348;
    }
    else {
      pcVar11 = s_female_4a095340;
    }
    FUN_4a0c707c(uVar6,pcVar11);
    iVar2 = FUN_4a13f8d8(uVar3);
    uVar6 = thunk_FUN_4a161570(0x14);
    piVar7 = (int *)FUN_4a0c707c(uVar6,*(undefined4 *)(PTR_PTR_4a095350 + iVar2 * 4));
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0xc))();
    }
    iVar2 = FUN_4a13f97c(uVar3,0);
    uVar6 = thunk_FUN_4a161570(0x14);
    puVar1 = PTR_PTR_4a095354;
    piVar8 = (int *)FUN_4a0c707c(uVar6,*(undefined4 *)(PTR_PTR_4a095354 + iVar2 * 4));
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 0xc))();
    }
    iVar2 = FUN_4a13f97c(uVar3,0,1);
    uVar6 = thunk_FUN_4a161570(0x14);
    piVar9 = (int *)FUN_4a0c707c(uVar6,*(undefined4 *)(puVar1 + iVar2 * 4));
    piVar12 = piVar8;
    if (piVar8 != piVar9) {
      if (piVar9 != (int *)0x0) {
        (**(code **)(*piVar9 + 0xc))(piVar9);
      }
      piVar12 = piVar9;
      if ((piVar8 != (int *)0x0) && (iVar2 = (**(code **)(*piVar8 + 8))(piVar8), iVar2 != 0)) {
        (**(code **)(*piVar8 + 4))(piVar8);
      }
    }
    iVar2 = FUN_4a13f97c(uVar3,0,2);
    uVar6 = thunk_FUN_4a161570(0x14);
    piVar9 = (int *)FUN_4a0c707c(uVar6,*(undefined4 *)(puVar1 + iVar2 * 4));
    piVar8 = piVar12;
    if (piVar12 != piVar9) {
      if (piVar9 != (int *)0x0) {
        (**(code **)(*piVar9 + 0xc))(piVar9);
      }
      piVar8 = piVar9;
      if ((piVar12 != (int *)0x0) && (iVar2 = (**(code **)(*piVar12 + 8))(piVar12), iVar2 != 0)) {
        (**(code **)(*piVar12 + 4))(piVar12);
      }
    }
    iVar2 = FUN_4a13f97c(uVar3,0,3);
    uVar6 = thunk_FUN_4a161570(0x14);
    piVar9 = (int *)FUN_4a0c707c(uVar6,*(undefined4 *)(puVar1 + iVar2 * 4));
    piVar12 = piVar8;
    if (piVar8 != piVar9) {
      if (piVar9 != (int *)0x0) {
        (**(code **)(*piVar9 + 0xc))(piVar9);
      }
      piVar12 = piVar9;
      if ((piVar8 != (int *)0x0) && (iVar2 = (**(code **)(*piVar8 + 8))(piVar8), iVar2 != 0)) {
        (**(code **)(*piVar8 + 4))(piVar8);
      }
    }
    iVar2 = FUN_4a13f97c(uVar3,0,4);
    uVar3 = thunk_FUN_4a161570(0x14);
    piVar10 = (int *)FUN_4a0c707c(uVar3,*(undefined4 *)(puVar1 + iVar2 * 4));
    piVar8 = piVar10;
    piVar9 = piVar12;
    if (piVar12 != piVar10) {
      if (piVar10 != (int *)0x0) {
        piVar8 = (int *)(**(code **)(*piVar10 + 0xc))(piVar10);
      }
      piVar9 = piVar10;
      if (piVar12 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar12 + 8))(piVar12);
        piVar8 = (int *)0x0;
        if (iVar2 != 0) {
          piVar8 = (int *)(**(code **)(*piVar12 + 4))(piVar12);
        }
      }
    }
    if (piVar9 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar9 + 8))(piVar9);
      piVar8 = (int *)0x0;
      if (iVar2 != 0) {
        piVar8 = (int *)(**(code **)(*piVar9 + 4))(piVar9);
      }
    }
    if (piVar7 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar7 + 8))(piVar7);
      piVar8 = (int *)0x0;
      if (iVar2 != 0) {
        piVar8 = (int *)(**(code **)(*piVar7 + 4))(piVar7);
      }
    }
  }
  else {
    piVar8 = *(int **)(param_1 + 0x40);
  }
  if (piVar5 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar5 + 8))(piVar5);
    piVar8 = (int *)0x0;
    if (iVar2 != 0) {
      piVar8 = (int *)(**(code **)(*piVar5 + 4))(piVar5);
    }
  }
  if (piVar4 == (int *)0x0) {
    return piVar8;
  }
  iVar2 = (**(code **)(*piVar4 + 8))(piVar4);
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0953d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar4 = (int *)(*UNRECOVERED_JUMPTABLE)();
    return piVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x4a0953f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  piVar4 = (int *)(**(code **)(*piVar4 + 4))(piVar4);
  return piVar4;
}



// Address: 4a0953f4

undefined4 FUN_4a0953f4(void)

{
  return 0;
}



// Address: 4a095414

undefined4 * FUN_4a095414(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = PTR_PTR_4a095494;
  *param_1 = PTR_PTR_4a095494;
  param_1[1] = puVar1 + 0x10;
  param_1[3] = puVar1 + 0x30;
  param_1[4] = puVar1 + 0x40;
  param_1[5] = puVar1 + 0x50;
  param_1[2] = puVar1 + 0x20;
  piVar3 = (int *)param_1[0x14];
  if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 8))(piVar3), iVar2 != 0)) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  return param_1;
}



// Address: 4a09549c

undefined4
FUN_4a09549c(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6)

{
  char cVar1;
  undefined *puVar2;
  byte bVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  undefined4 uVar15;
  bool bVar16;
  bool bVar17;
  undefined *local_64 [2];
  int local_5c;
  int *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44 [2];
  undefined4 local_3c;
  int *local_38;
  undefined4 local_30;
  undefined *local_2c;
  int *local_28;
  
  local_30 = FUN_4a0ff494();
  if (*(int *)(param_1 + 0x40) == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = *(int *)(*(int *)(param_1 + 0x40) + 8);
  }
  iVar12 = iVar12 + param_2 * 0x14;
  puVar4 = (undefined4 *)FUN_4a0c6bc0(local_44);
  *puVar4 = PTR_PTR_4a095c20;
  puVar4[2] = *(undefined4 *)(iVar12 + 8);
  piVar13 = *(int **)(iVar12 + 0xc);
  puVar4[3] = piVar13;
  if (piVar13 != (int *)0x0) {
    (**(code **)(*piVar13 + 0xc))();
  }
  *puVar4 = PTR_PTR_4a095c24;
  if (param_2 == 0) {
    iVar12 = FUN_4a145bfc(local_30);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar14 = 0;
    }
    else {
      iVar14 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    iVar14 = iVar14 + iVar12 * 0x14;
    uVar15 = *(undefined4 *)(iVar14 + 8);
    piVar13 = *(int **)(iVar14 + 0xc);
    if (piVar13 != (int *)0x0) {
      (**(code **)(*piVar13 + 0xc))(piVar13);
    }
    (**(code **)(local_44[0] + 0x1c))(local_44);
    local_3c = uVar15;
    local_38 = piVar13;
  }
  if (local_38 == (int *)0x0) {
    iVar12 = 0;
  }
  else {
    iVar12 = local_38[2];
  }
  iVar12 = FUN_4a13e0a8(*(undefined4 *)(iVar12 + param_3 * 4),param_5);
  if (iVar12 != 0) {
    if (param_6 == 0) {
      if (local_38 == (int *)0x0) {
        iVar12 = 0;
      }
      else {
        iVar12 = local_38[2];
      }
      iVar12 = FUN_4a13e1b4(*(undefined4 *)(iVar12 + param_4 * 4));
      if (iVar12 != 0) goto LAB_4a095c08;
    }
    else {
      if (local_38 == (int *)0x0) {
        iVar12 = 0;
      }
      else {
        iVar12 = local_38[2];
      }
      iVar12 = FUN_4a13e0a8(*(undefined4 *)(iVar12 + param_4 * 4),param_6);
      if (iVar12 == 0) goto LAB_4a095c08;
    }
    FUN_4a0ff494();
    uVar15 = FUN_4a145bfc();
    FUN_4a0bedd4(&local_50);
    puVar2 = PTR_PTR_4a095c28;
    FUN_4a0beb58(&local_50,*(undefined4 *)(PTR_PTR_4a095c28 + 8));
    if (param_2 == 0) {
      FUN_4a0beb58(&local_50,*(undefined4 *)(puVar2 + 0xc));
      FUN_4a0bec48(&local_50,uVar15);
    }
    else {
      FUN_4a0bec48(&local_50,param_2);
    }
    uVar15 = FUN_4a0beb58(&local_50,*(undefined4 *)(puVar2 + 0x10));
    uVar15 = FUN_4a0bec48(uVar15,param_3);
    uVar15 = FUN_4a0beb58(uVar15,*(undefined4 *)(puVar2 + 0x10));
    FUN_4a0bec48(uVar15,param_4);
    piVar13 = (int *)FUN_4a13cff4(&local_50);
    FUN_4a0bee50(&local_50);
    if (piVar13 != (int *)0x0) {
      (**(code **)(*piVar13 + 0xc))();
    }
    piVar5 = (int *)FUN_4a0c3450();
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))();
    }
    uVar15 = thunk_FUN_4a161570(0xc);
    uVar6 = thunk_FUN_4a161570(0x14);
    uVar6 = FUN_4a0c707c(uVar6,*(undefined4 *)puVar2);
    piVar7 = (int *)FUN_4a0c4300(uVar15,piVar5,uVar6);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0xc))();
    }
    uVar15 = thunk_FUN_4a161570(0xc);
    piVar8 = (int *)FUN_4a0c44b0(uVar15,piVar7,piVar13);
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 0xc))();
    }
    iVar12 = FUN_4a0c4278(piVar8);
    if (iVar12 != 0) {
      uVar15 = thunk_FUN_4a161570(0x18);
      uVar6 = FUN_4a0c42f8(piVar8);
      piVar9 = (int *)FUN_4a0c2adc(uVar15,uVar6);
      if (piVar9 != (int *)0x0) {
        (**(code **)(*piVar9 + 0xc))();
        iVar12 = FUN_4a0c28bc(piVar9);
        if (iVar12 != 0) {
          uVar15 = thunk_FUN_4a161570(0x10);
          local_28 = (int *)FUN_4a0bfc44(uVar15,piVar9);
          if (local_28 != (int *)0x0) {
            (**(code **)(*local_28 + 0xc))();
          }
          local_4c = FUN_4a0bf62c(local_28);
          local_50 = FUN_4a0bf62c(local_28);
          iVar12 = FUN_4a0bf62c(local_28);
          piVar10 = (int *)FUN_4a0c6bc0(local_64);
          local_2c = PTR_PTR_4a095c2c;
          piVar10[2] = 0;
          piVar10[3] = 0;
          *piVar10 = (int)local_2c;
          if (0 < iVar12) {
            iVar14 = FUN_4a15e080(iVar12);
            if (iVar14 == 0) {
              iVar14 = FUN_4a1669a8();
            }
            iVar11 = 0;
            do {
              *(undefined1 *)(iVar14 + iVar11) = 0;
              iVar11 = iVar11 + 1;
            } while (iVar11 < iVar12);
            thunk_FUN_4a161570(0x18);
            puVar4 = (undefined4 *)FUN_4a0c0628();
            puVar2 = PTR_PTR_4a095c30;
            *puVar4 = PTR_PTR_4a095c30;
            puVar4[3] = 1;
            puVar4[4] = iVar12;
            puVar4[2] = iVar14;
            *(undefined1 *)(puVar4 + 5) = 1;
            if (puVar4 != (undefined4 *)0x0) {
              (**(code **)(puVar2 + 0xc))(puVar4);
            }
            (**(code **)(*piVar10 + 0x1c))(piVar10);
            piVar10[2] = iVar12;
            piVar10[3] = (int)puVar4;
          }
          FUN_4a0bfae4(local_28,local_64);
          (**(code **)(*piVar9 + 0x20))(piVar9);
          uVar15 = thunk_FUN_4a161570(0x4c);
          local_48 = FUN_4a0b6dd8(uVar15,0x7d,local_4c,local_50,local_64);
          piVar10 = local_58;
          iVar12 = local_5c;
          local_64[0] = local_2c;
          bVar16 = local_58 != (int *)0x0;
          if (bVar16) {
            iVar14 = local_58[2];
            cVar1 = (char)local_58[5];
          }
          else {
            iVar14 = 0;
            cVar1 = '\0';
          }
          bVar17 = local_58 == (int *)0x0;
          local_58 = (int *)0x0;
          local_5c = 0;
          if ((bVar17) || (iVar11 = (**(code **)(*piVar10 + 8))(piVar10), iVar11 == 0)) {
            bVar3 = 0;
          }
          else {
            (**(code **)(*piVar10 + 4))(piVar10);
            bVar3 = 1;
          }
          if (!(bool)(bVar3 & (bVar16 && cVar1 != '\0'))) {
            iVar14 = 0;
          }
          if (iVar14 != 0) {
            iVar11 = 0;
            if (0 < iVar12) {
              do {
                iVar11 = iVar11 + 1;
              } while (iVar11 < iVar12);
              if (iVar14 == 0) goto LAB_4a09597c;
            }
            FUN_4a14f21c(iVar14);
          }
LAB_4a09597c:
          FUN_4a0c6bf4(local_64);
          piVar10 = local_28;
          if ((local_28 != (int *)0x0) &&
             (iVar12 = (**(code **)(*local_28 + 8))(local_28), iVar12 != 0)) {
            (**(code **)(*piVar10 + 4))(piVar10);
          }
          if ((piVar9 != (int *)0x0) && (iVar12 = (**(code **)(*piVar9 + 8))(piVar9), iVar12 != 0))
          {
            (**(code **)(*piVar9 + 4))(piVar9);
          }
          if ((piVar8 != (int *)0x0) && (iVar12 = (**(code **)(*piVar8 + 8))(piVar8), iVar12 != 0))
          {
            (**(code **)(*piVar8 + 4))(piVar8);
          }
          if ((piVar7 != (int *)0x0) && (iVar12 = (**(code **)(*piVar7 + 8))(piVar7), iVar12 != 0))
          {
            (**(code **)(*piVar7 + 4))(piVar7);
          }
          if ((piVar5 != (int *)0x0) && (iVar12 = (**(code **)(*piVar5 + 8))(piVar5), iVar12 != 0))
          {
            (**(code **)(*piVar5 + 4))(piVar5);
          }
          if ((piVar13 != (int *)0x0) &&
             (iVar12 = (**(code **)(*piVar13 + 8))(piVar13), iVar12 != 0)) {
            (**(code **)(*piVar13 + 4))(piVar13);
          }
          FUN_4a169628(local_44);
          return local_48;
        }
      }
      if ((piVar9 != (int *)0x0) && (iVar12 = (**(code **)(*piVar9 + 8))(piVar9), iVar12 != 0)) {
        (**(code **)(*piVar9 + 4))(piVar9);
      }
    }
    if ((piVar8 != (int *)0x0) && (iVar12 = (**(code **)(*piVar8 + 8))(piVar8), iVar12 != 0)) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    if ((piVar7 != (int *)0x0) && (iVar12 = (**(code **)(*piVar7 + 8))(piVar7), iVar12 != 0)) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
    if ((piVar5 != (int *)0x0) && (iVar12 = (**(code **)(*piVar5 + 8))(piVar5), iVar12 != 0)) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    if ((piVar13 != (int *)0x0) && (iVar12 = (**(code **)(*piVar13 + 8))(piVar13), iVar12 != 0)) {
      (**(code **)(*piVar13 + 4))(piVar13);
    }
  }
LAB_4a095c08:
  FUN_4a169628(local_44);
  return 0;
}




/* AUTOMATED DECOMPILER OUTPUT. Not original source, not a buildable game.
 * Function boundaries, types, indirect calls, and data still require validation. */

// Address: 4a10f484

void FUN_4a10f484(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  
  if (*(int **)(param_1 + 0x2b4) == param_2) {
    *(undefined4 *)(param_1 + 0x2b4) = 0;
    FUN_4a115d8c(param_1,0);
  }
  if ((*(char *)(param_1 + 0x632) != '\0') && (*(int **)(param_1 + 0x674) == param_2)) {
    *(undefined1 *)(param_1 + 0x632) = 0;
    *(undefined1 *)(param_1 + 0x633) = 0;
    *(undefined2 *)(param_1 + 0x634) = 0xffff;
    *(undefined4 *)(param_1 + 0x674) = 0;
    *(undefined4 *)(param_1 + 0x2b4) = 0;
    FUN_4a115d8c(param_1,0);
  }
  iVar6 = -1;
  iVar1 = FUN_4a146b58(param_2,0x2000);
  if (iVar1 != 0) {
    iVar6 = FUN_4a146a9c(param_2);
  }
  FUN_4a106a9c(param_2,0);
  iVar1 = *(int *)(param_1 + 0x624);
  if ((*(int *)(param_1 + 0x628) == iVar1) &&
     (iVar2 = *(int *)(param_1 + 0x620) + iVar1, iVar1 < iVar2)) {
    *(int *)(param_1 + 0x624) = iVar2;
    iVar4 = *(int *)(param_1 + 0x62c);
    iVar1 = thunk_FUN_4a161570(iVar2 * 4);
    *(int *)(param_1 + 0x62c) = iVar1;
    if (iVar1 != 0) {
      iVar1 = 0;
      if (0 < *(int *)(param_1 + 0x628)) {
        do {
          iVar2 = iVar1 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x62c) + iVar1 * 4) =
               *(undefined4 *)(iVar4 + iVar1 * 4);
          iVar1 = iVar2;
        } while (iVar2 < *(int *)(param_1 + 0x628));
      }
      thunk_FUN_4a161530(iVar4);
    }
    iVar1 = *(int *)(param_1 + 0x628);
    if (*(int *)(param_1 + 0x628) < *(int *)(param_1 + 0x624)) {
      do {
        iVar2 = iVar1 + 1;
        *(undefined4 *)(*(int *)(param_1 + 0x62c) + iVar1 * 4) = 0;
        iVar1 = iVar2;
      } while (iVar2 < *(int *)(param_1 + 0x624));
    }
  }
  iVar1 = *(int *)(param_1 + 0x628);
  *(int *)(param_1 + 0x628) = iVar1 + 1;
  piVar5 = *(int **)(*(int *)(param_1 + 0x62c) + iVar1 * 4);
  piVar3 = param_2;
  if (param_2 != (int *)0x0) {
    piVar3 = (int *)(*(int *)(*param_2 + -0xc) + (int)param_2);
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
  }
  *(int **)(*(int *)(param_1 + 0x62c) + iVar1 * 4) = param_2;
  if (piVar5 != (int *)0x0) {
    piVar5 = (int *)((int)piVar5 + *(int *)(*piVar5 + -0xc));
  }
  if ((piVar5 != (int *)0x0) && (iVar1 = (**(code **)(*piVar5 + 8))(piVar5), iVar1 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  iVar2 = *(int *)(param_1 + 0x610);
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      if (*(int **)(*(int *)(param_1 + 0x614) + iVar1 * 4) == param_2) goto LAB_4a10f680;
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  iVar1 = -1;
LAB_4a10f680:
  if (iVar1 != -1) {
    iVar1 = iVar1 + 1;
    if (iVar1 < iVar2) {
      do {
        piVar5 = *(int **)(*(int *)(param_1 + 0x614) + iVar1 * 4);
        piVar7 = *(int **)(*(int *)(param_1 + 0x614) + (iVar1 + -1) * 4);
        piVar3 = piVar5;
        if (piVar5 != (int *)0x0) {
          piVar3 = (int *)(*(int *)(*piVar5 + -0xc) + (int)piVar5);
        }
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0xc))();
        }
        *(int **)(*(int *)(param_1 + 0x614) + (iVar1 + -1) * 4) = piVar5;
        if (piVar7 == (int *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          piVar7 = (int *)(*(int *)(*piVar7 + -0xc) + (int)piVar7);
        }
        if ((piVar7 != (int *)0x0) && (iVar2 = (**(code **)(*piVar7 + 8))(piVar7), iVar2 != 0)) {
          (**(code **)(*piVar7 + 4))(piVar7);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x610));
    }
    iVar1 = *(int *)(param_1 + 0x610) + -1;
    piVar3 = *(int **)(*(int *)(param_1 + 0x614) + iVar1 * 4);
    *(undefined4 *)(*(int *)(param_1 + 0x614) + iVar1 * 4) = 0;
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)(*(int *)(*piVar3 + -0xc) + (int)piVar3);
    }
    if ((piVar3 != (int *)0x0) && (iVar1 = (**(code **)(*piVar3 + 8))(piVar3), iVar1 != 0)) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *(int *)(param_1 + 0x610) = *(int *)(param_1 + 0x610) + -1;
  }
  *(undefined1 *)(param_1 + 0x630) = 1;
  if (iVar6 != -1) {
    *(undefined1 *)(param_1 + 0x631) = 1;
  }
  return;
}



// Address: 4a10f7b0

void FUN_4a10f7b0(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  undefined4 uStack_8c;
  undefined4 local_88;
  int local_80;
  undefined1 auStack_78 [12];
  int local_6c;
  int local_68;
  undefined1 auStack_64 [20];
  undefined4 local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int iStack_2c;
  undefined4 local_28;
  
  local_44 = *(int *)(param_1 + 0x20);
  local_48 = local_44 + 0x278;
  local_4c = local_44 + 0x128;
  local_50 = *(undefined4 *)(param_1 + 0x24);
  iStack_2c = param_1;
  local_28 = param_2;
  FUN_4a16bdcc(auStack_64,param_1 + 0x1ac);
  puVar1 = PTR_DAT_4a10fe68;
  if (*(int *)(param_1 + 0x1c0) == 7) {
    if ((*(char *)(param_1 + 0x632) == '\0') &&
       (iVar2 = *(int *)(param_1 + 0x69c),
       (((((iVar2 == 1 || iVar2 == 0xf) || iVar2 == 4) || iVar2 == 0xc) || iVar2 == 0x10) ||
       iVar2 == 0x11) || iVar2 == 0x12)) {
      bVar16 = iVar2 == 0x10;
      bVar17 = iVar2 == 0x11;
      bVar18 = iVar2 != 0x12;
      iVar14 = 0x86f;
      if ((bVar16 || bVar17) || !bVar18) {
        iVar2 = 0x20;
        iVar14 = 0x12;
      }
      local_68 = 0x80000;
      if ((bVar16 || bVar17) || !bVar18) {
        iVar14 = iVar14 + 0x800;
        local_68 = iVar2;
      }
      if ((!bVar16 && !bVar17) && bVar18) {
        if (iVar2 == 0xc) {
          iVar14 = 0x968;
        }
        else if (iVar2 == 4) {
          iVar14 = 0xb2b;
        }
      }
      iVar2 = FUN_4a0bbd68(*(undefined4 *)PTR_DAT_4a10fe68,0x20,2);
      iVar3 = FUN_4a0bbe00(*(undefined4 *)puVar1,0x20,2);
      iVar4 = FUN_4a06bf88(local_48,iVar14,4);
      iVar4 = iVar2 + (iVar4 + 0x3c >> 1);
      local_6c = iVar4 + 5;
      uStack_8c = 0;
      local_88 = 0;
      if (*(int *)PTR_DAT_4a10fe6c != 0) {
        uStack_8c = 0x40c00000;
        local_88 = 0x40400000;
      }
      local_30 = FUN_4a171fac();
      local_34 = FUN_4a171fac(iVar3 + 3);
      uVar5 = FUN_4a171fac(iVar4);
      FUN_4a0a02bc(local_4c,0x167,0x168,0x169,uVar5,local_34,local_30,0x3f800000,0x3f800000);
      uVar5 = FUN_4a171fac(iVar3);
      uVar6 = FUN_4a171fac(iVar2);
      FUN_4a09f664(local_4c,0x14a,uVar6,uVar5,0x3f800000,0x3f800000,0x3f800000,0);
      uVar5 = FUN_4a0cb6c4(param_1,local_68);
      iVar4 = 1 - (uint)*(byte *)(param_1 + 0x210);
      if (1 < *(byte *)(param_1 + 0x210)) {
        iVar4 = 0;
      }
      FUN_4a0fa6e8(uVar5,local_4c,iVar2,iVar3,iVar4);
      FUN_4a09f3a4(local_4c,local_28);
      FUN_4a06b074(local_48,local_28,iVar14,4,local_6c,iVar3 + 3,0x12);
    }
  }
  else {
    if ((*(uint *)(param_1 + 0xa64) & 1) != 0) {
      iVar2 = FUN_4a0bbd68(*(undefined4 *)PTR_DAT_4a10fe68,0x1b,2);
      uVar5 = FUN_4a0bbe00(*(undefined4 *)puVar1,0x1b,2);
      iVar14 = *(int *)(param_1 + 0x76c);
      FUN_4a16bdcc(auStack_78,param_1 + 0x770);
      puVar7 = (undefined4 *)FUN_4a0c6bc0(&uStack_8c);
      *puVar7 = PTR_PTR_4a10fe70;
      puVar7[2] = *(undefined4 *)(param_1 + 0x78c);
      piVar8 = *(int **)(param_1 + 0x790);
      puVar7[3] = piVar8;
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 0xc))();
      }
      *puVar7 = PTR_PTR_4a10fe74;
      iVar3 = 0;
      if (0 < iVar14) {
        local_38 = FUN_4a171fac(uVar5);
        do {
          iVar4 = 0;
          if (local_80 != 0) {
            iVar4 = *(int *)(local_80 + 8);
          }
          iVar15 = *(int *)(iVar4 + iVar3 * 4);
          iVar4 = 0x1fb;
          if (iVar15 != 0) {
            iVar9 = FUN_4a146b58(iVar15,0x2000);
            iVar10 = 0;
            if (iVar9 != 0) {
              iVar10 = *(int *)(param_1 + 0x1d8);
            }
            if (iVar9 != 0 && iVar10 != 2) {
              iVar4 = 0x1fc;
            }
            else {
              iVar15 = FUN_4a143ac8(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(iVar15 + 0x28));
              if (*(short *)(iVar15 + 0x10) != -1) {
                iVar4 = (int)*(short *)(iVar15 + 0x10);
              }
            }
          }
          uVar5 = FUN_4a171fac(iVar2);
          FUN_4a09f664(local_4c,0xae,uVar5,local_38,0x3f800000,0x3f800000,0x3f800000,0);
          FUN_4a09f664(local_4c,iVar4,uVar5,local_38,0x3f800000,0x3f800000,0x3f800000,0);
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 0x30;
        } while (iVar3 < iVar14);
      }
      FUN_4a09f3a4(local_4c,local_28);
      FUN_4a16a5f4(&uStack_8c);
      FUN_4a16bef4(auStack_78);
    }
    if ((*(uint *)(param_1 + 0xa64) & 2) != 0) {
      iVar2 = FUN_4a13ca78(local_44);
      puVar1 = PTR_DAT_4a10fe68;
      FUN_4a0bbd68(*(undefined4 *)PTR_DAT_4a10fe68,iVar2 + -0x30,2);
      uVar5 = FUN_4a171fac();
      FUN_4a0bbe00(*(undefined4 *)puVar1,0x10,2);
      uVar6 = FUN_4a171fac();
      FUN_4a09f664(local_4c,0x27,uVar5,uVar6,0x3f800000,0x3f800000,0x3f800000,0);
      FUN_4a09f3a4(local_4c,local_28);
      iVar2 = FUN_4a13f88c(local_50);
      uVar11 = FUN_4a13f938(local_50);
      uVar12 = FUN_4a06c410(local_48);
      FUN_4a06cbe8(local_48,*(undefined4 *)(PTR_DAT_4a10fe78 + iVar2 * 4));
      FUN_4a06ca88(local_48,&DAT_4a10fe7c);
      FUN_4a06cfb0(local_48,uVar11);
      uVar5 = FUN_4a171e1c(uVar5);
      iVar2 = FUN_4a171e1c(uVar6);
      FUN_4a06afd0(local_48,local_28,uVar12,3,uVar5,iVar2 + 1,0x12);
    }
    uVar13 = FUN_4a146cd0(*(undefined4 *)(param_1 + 0x5f8));
    bVar16 = uVar13 == 0;
    if (bVar16) {
      uVar13 = (uint)*(byte *)(param_1 + 0x632);
    }
    if ((bVar16 && uVar13 == 0) && ((*(uint *)(param_1 + 0xa64) & 0x400) != 0)) {
      FUN_4a09f9c8(local_4c,0x11f);
      iVar14 = FUN_4a171e1c();
      iVar3 = FUN_4a13ca78(local_44);
      puVar1 = PTR_DAT_4a10fe68;
      uVar5 = FUN_4a0bbe00(*(undefined4 *)PTR_DAT_4a10fe68,iVar14 >> 1,2);
      iVar4 = FUN_4a06bf88(local_48,0x84c,3);
      iVar2 = iVar4 + 0x28 >> 1;
      iVar15 = ((iVar3 >> 1) - (iVar4 + 0x46 >> 1)) + iVar2;
      local_3c = FUN_4a171fac();
      local_40 = FUN_4a171fac(uVar5);
      uVar6 = FUN_4a171fac(iVar3 >> 1);
      uStack_8c = 0;
      local_88 = 0;
      FUN_4a0a02bc(local_4c,0x11f,0x120,0x121,uVar6,local_40,local_3c,0x3f800000,0x3f800000);
      uVar6 = FUN_4a171fac(iVar4 + 0x28);
      uVar11 = FUN_4a171fac(iVar15);
      uStack_8c = 0;
      local_88 = 0;
      FUN_4a0a02bc(local_4c,0x122,0x123,0x124,uVar11,local_40,uVar6,0x3f800000,0x3f800000);
      FUN_4a09f3a4(local_4c,local_28);
      FUN_4a06b074(local_48,local_28,0x84c,3,iVar15,uVar5,0x12);
      FUN_4a0bbcb4(*(undefined4 *)puVar1);
      uVar5 = FUN_4a0bbcf0(*(undefined4 *)puVar1,0x46);
      uVar6 = FUN_4a0bbcf0(*(undefined4 *)puVar1,100);
      uVar11 = *(undefined4 *)puVar1;
      local_68 = FUN_4a0bc200(uVar11);
      local_6c = FUN_4a0bc1f8(uVar11);
      if (local_6c < local_68) {
        piVar8 = &local_6c;
      }
      else {
        piVar8 = &local_68;
      }
      iVar3 = *piVar8;
      iVar14 = FUN_4a0bbcf0(*(undefined4 *)puVar1,(iVar14 >> 1) + 0x23);
      FUN_4a098d50(*(undefined4 *)(param_1 + 0x228),local_28,iVar15 + iVar2 + -0x27,iVar3 - iVar14,
                   uVar6,uVar5);
      FUN_4a0bbb28(*(undefined4 *)puVar1);
    }
  }
  FUN_4a16bef4(auStack_64);
  return;
}



// Address: 4a10fe80

void FUN_4a10fe80(int param_1,int param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar5 = 0;
  *(undefined1 *)(param_1 + 0x632) = 0;
  *(undefined1 *)(param_1 + 0x633) = 0;
  *(undefined2 *)(param_1 + 0x634) = 0xffff;
  *(undefined4 *)(param_1 + 0x674) = 0;
  *(undefined4 *)(param_1 + 0x2b4) = 0;
  FUN_4a115d8c(param_1,0);
  *(int *)(param_1 + 0x6e4) = param_2;
  *(undefined4 *)(param_1 + 0x6e8) = param_3;
  if (param_2 == -1) {
    FUN_4a0cd7c0(param_1,0xa50,0xa9c);
  }
  else {
    if ((param_4 == 0) &&
       (iVar2 = FUN_4a140e04(*(undefined4 *)(param_1 + 0x24),param_2,param_3), iVar2 == 0)) {
      iVar6 = *(int *)(param_1 + 0x24);
      *(int *)(param_1 + 0x6e4) = param_2;
      *(undefined4 *)(param_1 + 0x6e8) = param_3;
      iVar2 = FUN_4a13fac4(iVar6,param_2);
      if (*(int *)(iVar6 + 0x420) != 0) {
        iVar5 = *(int *)(*(int *)(iVar6 + 0x420) + 8);
      }
      sVar1 = *(short *)(iVar5 + iVar2 * 2);
      uVar3 = FUN_4a140738(iVar6,param_2);
      FUN_4a0ce9a4(param_1,uVar3,(int)sVar1);
      uVar3 = 0xc;
      goto FUN_4a1161d0;
    }
    iVar5 = FUN_4a13fa14(*(undefined4 *)(param_1 + 0x24),0);
    if (iVar5 == -1) {
      uVar3 = 0xa9f;
    }
    else if (iVar5 == param_2) {
      uVar3 = 0xaa1;
    }
    else {
      uVar3 = 0xaa0;
    }
    FUN_4a0ce964(param_1,uVar3);
  }
  uVar3 = 10;
FUN_4a1161d0:
  uVar4 = *(undefined4 *)(param_1 + 0x1c0);
  iVar5 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x1c0) = uVar3;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined1 *)(param_1 + 0x1dc) = 1;
  host_s3eAccelerometerStop_arm();
  switch(uVar3) {
  default:
    return;
  case 2:
    if (*(int *)(param_1 + 0x1d0) == 0x61) {
      FUN_4a0fc560(*(undefined4 *)(param_1 + 0x20),0);
    }
    uVar3 = *(undefined4 *)(param_1 + 0x1d0);
    *(undefined4 *)(iVar5 + 0x460) = *(undefined4 *)(param_1 + 0x1cc);
    *(undefined4 *)(iVar5 + 0x464) = uVar3;
    return;
  case 4:
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x2b8) = 2;
    if ((*(int *)(param_1 + 0x2b4) == 0) ||
       (iVar5 = FUN_4a146b58(*(int *)(param_1 + 0x2b4),2), iVar5 == 0)) {
      *(undefined4 *)(param_1 + 0x2b4) = 0;
      FUN_4a115d8c(param_1,0);
    }
    *(undefined1 *)(param_1 + 0x1dc) = 0;
    return;
  }
  if (*(char *)(param_1 + 0x632) != '\0') {
    *(undefined1 *)(param_1 + 0x632) = 0;
    *(undefined1 *)(param_1 + 0x633) = 0;
    *(undefined2 *)(param_1 + 0x634) = 0xffff;
    *(undefined4 *)(param_1 + 0x674) = 0;
    *(undefined4 *)(param_1 + 0x2b4) = 0;
    FUN_4a115d8c(param_1,0);
  }
  if (*(int *)(param_1 + 0x1cc) != 2) goto FUN_4a0cd7a0;
  iVar5 = *(int *)(param_1 + 0x1d0);
  if (iVar5 != 0x61) {
    if (iVar5 == 0x62) {
      uVar4 = 0xc1b;
      goto FUN_4a0cd7a0;
    }
    if (iVar5 == 100) {
      iVar5 = FUN_4a145a38();
      if (iVar5 == 4) {
        uVar4 = 0xc1d;
      }
      else {
        uVar4 = 0xc1f;
      }
      goto FUN_4a0cd7a0;
    }
    iVar5 = FUN_4a145960(*(undefined4 *)(param_1 + 0x20));
    if (iVar5 != 0) {
      uVar4 = 0xc1e;
      goto FUN_4a0cd7a0;
    }
  }
  uVar4 = 0xc1c;
FUN_4a0cd7a0:
  FUN_4a089eb4(*(undefined4 *)(param_1 + 0x168),uVar4,0xc21,0x40,0x20,in_lr);
  return;
}



// Address: 4a10ffbc

/* WARNING: Removing unreachable block (ram,0x4a0faea0) */
/* WARNING: Removing unreachable block (ram,0x4a0fae9c) */
/* WARNING: Removing unreachable block (ram,0x4a0faebc) */
/* WARNING: Removing unreachable block (ram,0x4a0faf08) */

void FUN_4a10ffbc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined1 *)(param_1 + 0x6f2) = 1;
  iVar1 = 0;
  if (*(int *)(param_1 + 0x708) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x708) + 8);
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x10);
  *puVar2 = 3;
  puVar2[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x4a0faeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_caseD_3_4a0faecc)();
  return;
}



// Address: 4a10ffe0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a10ffe0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  
  FUN_4a0d58d0(*(undefined4 *)(param_1 + 0x24));
  FUN_4a0ff3f8(*(undefined4 *)(param_1 + 0x20),400);
  *(undefined4 *)(param_1 + 0x7e0) = param_2;
  FUN_4a1161d0(param_1,0x13);
  FUN_4a11be8c(param_1,1);
  uVar6 = 0;
  uVar8 = 0xd;
  switch(param_2) {
  case 0:
    uVar6 = 0x400;
    *(undefined4 *)(param_1 + 0x7e4) = 0xc;
    goto LAB_4a1100bc;
  case 1:
    uVar6 = 0x800;
    uVar8 = 0xe;
    break;
  case 2:
    uVar6 = 0x1000;
    break;
  case 3:
    uVar6 = 0x2000;
    break;
  case 4:
    uVar6 = 0x4000;
    goto LAB_4a1100b8;
  case 5:
    uVar6 = 0x8000;
    uVar8 = 0x10;
    break;
  case 6:
    uVar6 = 0x10000;
    goto LAB_4a1100ac;
  case 7:
    uVar6 = 0x20000;
LAB_4a1100ac:
    *(undefined4 *)(param_1 + 0x7e4) = 0xf;
    goto LAB_4a1100bc;
  case 8:
    uVar6 = 0x40000;
LAB_4a1100b8:
    *(undefined4 *)(param_1 + 0x7e4) = 0x11;
  default:
    goto LAB_4a1100bc;
  }
  *(undefined4 *)(param_1 + 0x7e4) = uVar8;
LAB_4a1100bc:
  iVar5 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(iVar5 + 0x490) = 0;
  iVar1 = *(int *)(iVar5 + 0x470) >> 1;
  iVar2 = *(int *)(iVar5 + 0x470) + *(int *)(iVar5 + 0x484) >> 1;
  uVar8 = *(undefined4 *)(iVar5 + 0x60);
  if (iVar2 < 1) {
    return;
  }
  do {
    iVar3 = *(int *)(iVar5 + 0x490);
    if (iVar3 < iVar1) {
      if (*(int *)(iVar5 + 0x474) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(iVar5 + 0x474) + 8);
      }
      if ((*(uint *)(iVar4 + (iVar3 * 2 + 1) * 4) & uVar6) != 0) {
        iVar3 = 1;
        while( true ) {
          if (*(int *)(iVar5 + 0x474) == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)(*(int *)(iVar5 + 0x474) + 8);
          }
          iVar4 = FUN_4a09ad94(uVar8,*(undefined4 *)(iVar4 + *(int *)(iVar5 + 0x490) * 8));
          if ((iVar4 != 0) || (1 < iVar3)) break;
          iVar3 = iVar3 + 1;
        }
        *(int *)(iVar5 + 0x490) = *(int *)(iVar5 + 0x490) + 1;
      }
    }
    else {
      iVar3 = iVar3 - iVar1;
      iVar4 = *(int *)(iVar5 + 0x488);
      if (iVar4 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(iVar4 + 8);
      }
      if ((*(uint *)(iVar7 + (iVar3 * 2 + 1) * 4) & uVar6) != 0) {
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(iVar4 + 8);
        }
        FUN_4a09f864(iVar5 + 0x128,*(undefined4 *)(iVar4 + iVar3 * 8));
      }
    }
    iVar3 = *(int *)(iVar5 + 0x490) + 1;
    *(int *)(iVar5 + 0x490) = iVar3;
  } while (iVar3 < iVar2);
  return;
}



// Address: 4a1100c8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1100c8(int param_1,int param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar15;
  bool bVar16;
  
  switch(*(undefined4 *)(param_1 + 700)) {
  case 0:
    goto switchD_4a1100dc_caseD_0;
  case 1:
    FUN_4a111968(param_1);
    if (*(char *)(param_1 + 0x2d8) == '\0') {
      FUN_4a11bfc8(param_1,param_2);
    }
    else {
      FUN_4a111968(param_1);
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x470) = *(undefined4 *)(param_1 + 0x2c0);
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x474) = *(undefined4 *)(param_1 + 0x2c4);
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x478) = *(undefined4 *)(param_1 + 0x2c8);
      *(undefined1 *)(param_1 + 0x2d8) = 1;
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
    if (*(int *)(param_1 + 0x7f4) == 2) goto switchD_4a1100dc_default;
    break;
  case 7:
    iVar8 = *(int *)(param_1 + 0x7f4);
    bVar16 = iVar8 != 1;
    if (!bVar16) {
      iVar8 = *(int *)(param_1 + 0x7ec);
    }
    if (bVar16 || iVar8 != 8) goto switchD_4a1100dc_default;
    FUN_4a11f284(param_1);
    break;
  case 8:
    FUN_4a11bfc8(param_1,param_2);
    if (*(char *)(param_1 + 0x2d8) != '\0') {
      FUN_4a11e2a0(param_1,0);
    }
    goto switchD_4a1100dc_default;
  case 9:
    iVar8 = *(int *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(iVar8 + 0x470);
    *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(iVar8 + 0x474);
    *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(iVar8 + 0x478);
    *(undefined4 *)(param_1 + 0x2d4) = 0x443b8000;
    *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(iVar8 + 0x484);
    *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(iVar8 + 0x488);
    break;
  default:
    goto switchD_4a1100dc_default;
  }
  FUN_4a11bfc8(param_1,param_2);
switchD_4a1100dc_default:
  iVar8 = *(int *)(param_1 + 0x28);
  uVar2 = FUN_4a0d4990(*(undefined4 *)(iVar8 + 0x488));
  iVar14 = 0;
  if (0 < *(int *)(iVar8 + 0x3d4)) {
    do {
      if (*(int *)(iVar8 + 0x3d8) == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(*(int *)(iVar8 + 0x3d8) + 8);
      }
      FUN_4a0baf80(*(undefined4 *)(iVar9 + iVar14 * 4),*(undefined4 *)(iVar8 + 0x470),
                   *(undefined4 *)(iVar8 + 0x478),uVar2,param_2);
      iVar14 = iVar14 + 1;
    } while (iVar14 < *(int *)(iVar8 + 0x3d4));
  }
  iVar9 = *(int *)(iVar8 + 0x3f0);
  iVar14 = 0;
  if (0 < iVar9) {
    do {
      FUN_4a0688f4(*(undefined4 *)(*(int *)(iVar8 + 0x3f4) + iVar14 * 4));
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar9);
  }
  uVar2 = *(undefined4 *)(iVar8 + 0x464);
  iVar14 = iVar8 + 0x20;
  if (*(int *)(iVar8 + 0x2c) == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = *(undefined4 **)(*(int *)(iVar8 + 0x2c) + 8);
  }
  *puVar3 = 0;
  if (*(int *)(iVar8 + 0x2c) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(int *)(iVar8 + 0x2c) + 8);
  }
  *(undefined4 *)(iVar9 + 4) = 0;
  if (*(int *)(iVar8 + 0x2c) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(int *)(iVar8 + 0x2c) + 8);
  }
  *(undefined4 *)(iVar9 + 8) = 0;
  if (*(int *)(iVar8 + 0x2c) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(int *)(iVar8 + 0x2c) + 8);
  }
  *(undefined4 *)(iVar9 + 0xc) = 0x3f800000;
  FUN_4a13c870(uVar2,iVar14);
  iVar9 = *(int *)(iVar8 + 0x2c);
  bVar16 = iVar9 == 0;
  if (bVar16) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = *(undefined4 **)(iVar9 + 8);
  }
  uVar10 = *puVar3;
  if (bVar16) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(iVar9 + 8);
  }
  uVar12 = *(undefined4 *)(iVar11 + 4);
  if (bVar16) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(iVar9 + 8);
  }
  uVar13 = *(undefined4 *)(iVar11 + 8);
  if (bVar16) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = *(undefined4 **)(iVar9 + 8);
  }
  *puVar3 = 0;
  if (*(int *)(iVar8 + 0x2c) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(int *)(iVar8 + 0x2c) + 8);
  }
  *(undefined4 *)(iVar9 + 4) = 0;
  if (*(int *)(iVar8 + 0x2c) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(int *)(iVar8 + 0x2c) + 8);
  }
  *(undefined4 *)(iVar9 + 8) = 0xbf800000;
  if (*(int *)(iVar8 + 0x2c) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(int *)(iVar8 + 0x2c) + 8);
  }
  *(undefined4 *)(iVar9 + 0xc) = 0x3f800000;
  FUN_4a13c870(uVar2,iVar14);
  iVar9 = *(int *)(iVar8 + 0x2c);
  if (iVar9 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = *(undefined4 **)(iVar9 + 8);
  }
  uVar4 = FUN_4a1725c0(*puVar3,uVar10);
  if (iVar9 == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(iVar9 + 8);
  }
  uVar5 = FUN_4a1725c0(*(undefined4 *)(iVar11 + 4),uVar12);
  if (iVar9 == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(iVar9 + 8);
  }
  uVar6 = FUN_4a1725c0(*(undefined4 *)(iVar11 + 8),uVar13);
  if (iVar9 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = *(undefined4 **)(iVar9 + 8);
  }
  *puVar3 = 0x3f800000;
  if (*(int *)(iVar8 + 0x2c) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(int *)(iVar8 + 0x2c) + 8);
  }
  *(undefined4 *)(iVar9 + 4) = 0;
  if (*(int *)(iVar8 + 0x2c) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(int *)(iVar8 + 0x2c) + 8);
  }
  *(undefined4 *)(iVar9 + 8) = 0;
  if (*(int *)(iVar8 + 0x2c) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(int *)(iVar8 + 0x2c) + 8);
  }
  *(undefined4 *)(iVar9 + 0xc) = 0x3f800000;
  FUN_4a13c870(uVar2,iVar14);
  iVar14 = *(int *)(iVar8 + 0x2c);
  if (iVar14 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = *(undefined4 **)(iVar14 + 8);
  }
  uVar2 = FUN_4a1725c0(*puVar3,uVar10);
  if (iVar14 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(iVar14 + 8);
  }
  uVar10 = FUN_4a1725c0(*(undefined4 *)(iVar9 + 4),uVar12);
  if (iVar14 == 0) {
    iVar14 = 0;
  }
  else {
    iVar14 = *(int *)(iVar14 + 8);
  }
  uVar12 = FUN_4a1725c0(*(undefined4 *)(iVar14 + 8),uVar13);
  FUN_4a08581c(*(undefined4 *)(*(int *)(iVar8 + 0x1c) + 0x260),*(undefined4 *)(iVar8 + 0x470),
               *(undefined4 *)(iVar8 + 0x474),*(undefined4 *)(iVar8 + 0x478),0,0,0,uVar4,uVar5,uVar6
               ,uVar2,uVar10,uVar12);
  iVar14 = FUN_4a0fba7c(*(undefined4 *)(iVar8 + 0x1c));
  bVar16 = *(int *)(iVar14 + 0x1c0) == 0x10;
  if (bVar16) {
    iVar14 = *(int *)(iVar14 + 0x7f4);
  }
  if (!bVar16 || iVar14 != 2) {
    iVar14 = FUN_4a0fba7c(*(undefined4 *)(iVar8 + 0x1c));
    bVar16 = *(int *)(iVar14 + 0x1c0) == 0x10;
    if (bVar16) {
      iVar14 = *(int *)(iVar14 + 0x7f4);
    }
    if (!bVar16 || iVar14 != 0) {
      uVar7 = *(int *)(iVar8 + 0x44c) - param_2;
      *(uint *)(iVar8 + 0x44c) = uVar7;
      if (-1 < (int)uVar7) {
        uVar7 = (uint)*(byte *)(iVar8 + 0x450);
      }
      if (uVar7 != 0) {
        *(undefined4 *)(iVar8 + 0x44c) = 0x2ee;
        uVar7 = FUN_4a0f1650(iVar8);
        bVar16 = uVar7 == 0;
        if (bVar16) {
          uVar7 = (uint)*(byte *)(iVar8 + 0x450);
        }
        if (!bVar16 || uVar7 != 0) {
          FUN_4a0f1b44(iVar8);
        }
        *(undefined1 *)(iVar8 + 0x450) = 0;
      }
    }
  }
  uVar2 = FUN_4a077b38();
  FUN_4a0816c8(uVar2,param_2);
  FUN_4a06f7a4(iVar8 + 0x420,param_2);
  FUN_4a0fba7c(*(undefined4 *)(iVar8 + 0x1c));
  iVar14 = FUN_4a146d64();
  if (iVar14 == 0) {
    return;
  }
  iVar8 = FUN_4a145a38(*(undefined4 *)(iVar8 + 0x1c));
  if (iVar8 != 4) {
                    /* WARNING: Could not recover jumptable at 0x4a0f1638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  iVar14 = FUN_4a077b38();
  iVar8 = *(int *)(iVar14 + 0xcc) + param_2;
  iVar9 = (int)((ulonglong)((longlong)DAT_4a0816b0 * (longlong)iVar8) >> 0x20);
  *(int *)(iVar14 + 0xcc) = iVar8 + ((iVar9 >> 0xf) - (iVar9 >> 0x1f)) * -90000;
  iVar8 = *(int *)(iVar14 + 0xd0) + param_2;
  iVar9 = (int)((ulonglong)((longlong)DAT_4a0816b4 * (longlong)iVar8) >> 0x20);
  *(int *)(iVar14 + 0xd0) = iVar8 + ((iVar9 >> 9) - (iVar9 >> 0x1f)) * -24000;
  param_2 = *(int *)(iVar14 + 0xd4) + param_2;
  lVar1 = (longlong)DAT_4a0816b8 * (longlong)param_2;
  iVar9 = (int)((ulonglong)lVar1 >> 0x20);
  iVar8 = iVar9 >> 0xb;
  *(int *)(iVar14 + 0xd4) = param_2 + (iVar8 - (iVar9 >> 0x1f)) * -32000;
  iVar9 = 0;
  if (*(int *)(iVar14 + 0x2c) == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(*(int *)(iVar14 + 0x2c) + 8);
  }
  iVar8 = FUN_4a136540(*(undefined4 *)(iVar11 + 0x54),0,iVar8,(int)lVar1);
  if (iVar8 != 0) {
    uVar2 = FUN_4a171fac(*(undefined4 *)(iVar14 + 0xcc));
    uVar2 = FUN_4a17295c(uVar2,1);
    uVar2 = FUN_4a17211c(uVar2,DAT_4a0816bc);
    FUN_4a0af1d4(iVar8,0,uVar2);
  }
  if (*(int *)(iVar14 + 0x2c) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(*(int *)(iVar14 + 0x2c) + 8);
  }
  iVar8 = FUN_4a136540(*(undefined4 *)(iVar8 + 0x58),0);
  if (iVar8 != 0) {
    uVar2 = FUN_4a171fac(*(undefined4 *)(iVar14 + 0xd0));
    uVar2 = FUN_4a17295c(uVar2,1);
    uVar2 = FUN_4a17211c(uVar2,DAT_4a0816c0);
    FUN_4a0af1d4(iVar8,uVar2,0);
  }
  if (*(int *)(iVar14 + 0x2c) != 0) {
    iVar9 = *(int *)(*(int *)(iVar14 + 0x2c) + 8);
  }
  iVar8 = FUN_4a136540(*(undefined4 *)(iVar9 + 0x5c),0);
  uVar15 = iVar8 == 0;
  if (!(bool)uVar15) {
    uVar2 = FUN_4a171fac(*(undefined4 *)(iVar14 + 0xd4));
    uVar2 = FUN_4a17295c(uVar2,1);
    uVar2 = FUN_4a17211c(uVar2,DAT_4a0816c4);
    FUN_4a171da0(*(undefined4 *)(iVar8 + 0x28));
    if ((bool)uVar15) {
      FUN_4a171da0(*(undefined4 *)(iVar8 + 0x2c),0);
    }
    if ((bool)uVar15) {
      FUN_4a171da0(*(undefined4 *)(iVar8 + 0x30),0);
    }
    if (!(bool)uVar15) {
      *(undefined4 *)(iVar8 + 0x28) = uVar2;
      *(undefined4 *)(iVar8 + 0x2c) = 0;
      *(undefined4 *)(iVar8 + 0x30) = 0;
      *(undefined1 *)(iVar8 + 200) = 0;
      return;
    }
    return;
  }
  return;
switchD_4a1100dc_caseD_0:
  FUN_4a11fc98(param_1,param_2);
  goto switchD_4a1100dc_default;
}



// Address: 4a110228

void FUN_4a110228(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x85c) = 0;
  *(undefined4 *)(param_1 + 0x7fc) = 0xffffffff;
  if (*(char *)(param_1 + 0x632) != '\0') {
    *(undefined1 *)(param_1 + 0x632) = 0;
    *(undefined1 *)(param_1 + 0x633) = 0;
    *(undefined2 *)(param_1 + 0x634) = 0xffff;
    *(undefined4 *)(param_1 + 0x674) = 0;
    *(undefined4 *)(param_1 + 0x2b4) = 0;
    FUN_4a115d8c(param_1,0);
  }
  FUN_4a0d58d0(*(undefined4 *)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 0x7f0) = param_3;
  *(int *)(param_1 + 0x7f4) = param_2;
  FUN_4a1161d0(param_1,0x10);
  FUN_4a120320(param_1,0);
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x854) = 0;
  if (param_2 == 0) {
    uVar2 = 0x14;
    FUN_4a11aa38(param_1);
  }
  else if (param_2 == 1) {
    uVar2 = 0x14;
    FUN_4a11acf0(param_1);
  }
  else if (param_2 == 2) {
    uVar2 = 0x14;
    FUN_4a11f158(param_1);
  }
  *(undefined4 *)(param_1 + 0x7c4) = uVar2;
  iVar1 = *(int *)(*(int *)(param_1 + 0x20) + 0x264);
  if (*(int *)(param_1 + 0x7f4) == 1) {
    if (*(char *)(iVar1 + 0xc) != '\0') goto LAB_4a110324;
    uVar2 = 3;
  }
  else {
    uVar2 = 2;
  }
  FUN_4a0d36d0(iVar1,uVar2);
LAB_4a110324:
  if (*(int *)(param_1 + 0x80c) == -1) {
    return;
  }
  uVar2 = FUN_4a0fe640(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x804),
                       *(undefined4 *)(param_1 + 0x808));
  *(undefined4 *)(param_1 + 0x800) = uVar2;
  return;
}



// Address: 4a110350

undefined4 FUN_4a110350(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  if (*(char *)(param_1 + 0x6f3) == '\0') {
    if (*(char *)(param_1 + 0x7d8) == '\0') {
      if (*(int *)(param_1 + 0x738) != -1) {
        FUN_4a1161d0(param_1,0xf);
        return 1;
      }
      iVar1 = FUN_4a0dbda4(uVar2);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x290) = 8;
        FUN_4a0cd7c0(param_1,0xb60,0xb58);
        FUN_4a1161d0(param_1,9);
        return 1;
      }
      if (*(char *)(param_1 + 0x6f1) == '\0') {
        iVar1 = FUN_4a0dd630(uVar2);
        if (iVar1 == 0) {
          iVar1 = FUN_4a0dd584(uVar2);
          if (iVar1 == -1) {
            if (*(char *)(param_1 + 0x6f2) != '\0') {
              *(undefined1 *)(param_1 + 0x6f2) = 0;
              iVar1 = FUN_4a141a98(uVar2);
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



// Address: 4a11063c

undefined4 FUN_4a11063c(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  
  if (param_2 != 0) {
    iVar5 = *(int *)(param_1 + 0x20);
    uVar6 = *(undefined4 *)(param_1 + 0x28);
    uVar8 = *(undefined4 *)(param_1 + 0x738);
    iVar7 = iVar5 + 0x278;
    iVar2 = FUN_4a143130(uVar6,uVar8);
    sVar1 = *(short *)(iVar2 + 0xc);
    iVar5 = iVar5 + 0x128;
    uVar3 = FUN_4a171fac(param_4 + 0x14);
    uVar4 = FUN_4a171fac(param_3 + 0xb);
    FUN_4a09f664(iVar5,(int)sVar1,uVar4,uVar3,0x3f800000,0x3f800000,0x3f800000,0);
    FUN_4a09f3a4(iVar5,param_2);
    uVar3 = FUN_4a06c410(iVar7);
    if (*(int *)(param_1 + 0x73c) != 1) {
      FUN_4a06c378(iVar7);
      FUN_4a06cbe8(iVar7,0xb00);
    }
    iVar2 = FUN_4a143130(uVar6,uVar8);
    FUN_4a06cbe8(iVar7,*(undefined4 *)(iVar2 + 8));
    FUN_4a06afd0(iVar7,param_2,uVar3,3,param_3 + 0x19,param_4 + 0x14,0x11);
    uVar3 = FUN_4a06c410(iVar7);
    uVar4 = FUN_4a140338(*(undefined4 *)(param_1 + 0x24),uVar8);
    FUN_4a06c378(iVar7,uVar4);
    FUN_4a06cbe8(iVar7,0x803);
    iVar2 = FUN_4a143130(uVar6,uVar8);
    FUN_4a06c378(iVar7,(int)*(char *)(iVar2 + 0x18));
    FUN_4a06afd0(iVar7,param_2,uVar3,3,param_3 + param_5 + -3,param_4 + 0x14,0x14);
  }
  return 0x28;
}



// Address: 4a1107d8

undefined4 FUN_4a1107d8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_24 [8];
  int local_1c;
  int local_18;
  
  FUN_4a10ca70(auStack_24,param_1);
  iVar2 = 0;
  if (0 < local_1c) {
    do {
      if (local_18 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(local_18 + 8);
      }
      uVar3 = *(undefined4 *)(iVar1 + iVar2 * 4);
      iVar1 = FUN_4a1460d4(uVar3);
      if ((iVar1 == 0xf) && (iVar1 = FUN_4a1461c0(uVar3,0x100000), iVar1 != 0)) {
        FUN_4a16a5f4(auStack_24);
        return uVar3;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_1c);
  }
  FUN_4a16a5f4(auStack_24);
  return 0;
}



// Address: 4a110878

int FUN_4a110878(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int extraout_r1;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auStack_64 [8];
  int local_5c;
  int local_58;
  undefined4 local_50;
  int local_4c;
  undefined1 auStack_48 [8];
  int local_40;
  int local_3c;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  
  local_34 = *(undefined4 *)(param_1 + 0x28);
  local_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  FUN_4a10ca70(auStack_48,param_1);
  local_4c = FUN_4a0fe640(*(undefined4 *)(local_30 + 0x20),0,local_40 + -1);
  iVar10 = 0;
  if (0 < local_40) {
    do {
      FUN_4a0015f0(local_4c + iVar10,local_40);
      if (local_3c == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(local_3c + 8);
      }
      iVar9 = *(int *)(iVar1 + extraout_r1 * 4);
      iVar1 = FUN_4a143ac8(local_34,*(undefined4 *)(iVar9 + 0x28));
      if (((*(ushort *)(iVar1 + 0x18) & 0x100) != 0) && (iVar1 = FUN_4a1465dc(iVar9), iVar1 != 0)) {
        if (local_28 == 0x84) {
          iVar1 = FUN_4a1460d4(iVar9);
          if (iVar1 != 0xd) {
            uVar7 = *(undefined4 *)(iVar9 + 0x4c);
            iVar1 = FUN_4a144cb0(local_34,*(undefined4 *)(iVar9 + 0x44));
            iVar2 = FUN_4a144cb8(local_34,uVar7);
            uVar7 = *(undefined4 *)(iVar9 + 0x50);
            iVar3 = FUN_4a107de8(1,0,uVar7);
            iVar3 = iVar3 + iVar1;
            iVar1 = FUN_4a107e20(1,0,uVar7);
            iVar1 = iVar1 + iVar2;
            local_50 = *(undefined4 *)(local_30 + 0x28);
            FUN_4a10ca70(auStack_64,local_30);
            iVar2 = 0;
            if (0 < local_5c) {
              do {
                if (local_58 == 0) {
                  iVar4 = 0;
                }
                else {
                  iVar4 = *(int *)(local_58 + 8);
                }
                iVar8 = *(int *)(iVar4 + iVar2 * 4);
                iVar4 = FUN_4a146b58(iVar8,0x80000);
                if (iVar4 != 0) {
                  iVar5 = FUN_4a144cb0(local_50,*(undefined4 *)(iVar8 + 0x44));
                  iVar6 = FUN_4a144cb8(local_50,*(undefined4 *)(iVar8 + 0x4c));
                  bVar13 = SBORROW4(iVar3,iVar5);
                  iVar4 = iVar3 - iVar5;
                  bVar12 = iVar3 == iVar5;
                  if (iVar3 <= iVar5) {
                    bVar13 = SBORROW4(iVar1,iVar6);
                    iVar4 = iVar1 - iVar6;
                    bVar12 = iVar1 == iVar6;
                  }
                  bVar11 = iVar4 < 0;
                  if (bVar12 || bVar11 != bVar13) {
                    iVar5 = iVar5 - *(char *)(iVar8 + 0x54);
                    bVar13 = SBORROW4(iVar5,iVar3);
                    bVar11 = iVar5 - iVar3 < 0;
                  }
                  if (bVar11 != bVar13) {
                    iVar6 = iVar6 - *(char *)(iVar8 + 0x55);
                    bVar13 = SBORROW4(iVar6,iVar1);
                    bVar11 = iVar6 - iVar1 < 0;
                  }
                  if (bVar11 != bVar13) {
                    FUN_4a16a5f4(auStack_64);
                    if ((iVar8 == 0) || (iVar1 = FUN_4a0f35f0(local_34,iVar3,iVar1), iVar1 != 0))
                    goto LAB_4a110a84;
                    goto LAB_4a110a38;
                  }
                }
                iVar2 = iVar2 + 1;
              } while (iVar2 < local_5c);
            }
            FUN_4a16a5f4(auStack_64);
          }
        }
        else {
LAB_4a110a38:
          iVar1 = FUN_4a135294(local_2c,iVar9,0);
          if (iVar1 != 0) {
            FUN_4a16a5f4(auStack_48);
            return iVar9;
          }
        }
      }
LAB_4a110a84:
      iVar10 = iVar10 + 1;
    } while (iVar10 < local_40);
  }
  FUN_4a16a5f4(auStack_48);
  return 0;
}



// Address: 4a110aac

void FUN_4a110aac(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined1 auStack_68 [20];
  int local_54 [2];
  int local_4c;
  int *local_48;
  undefined1 auStack_40 [8];
  uint local_38;
  int local_34;
  undefined4 local_2c;
  int iStack_28;
  
  puVar2 = PTR_PTR_4a110ec0;
  puVar1 = PTR_PTR_4a110ebc;
  local_2c = param_1;
  iStack_28 = param_2;
  if (*(char *)(param_2 + 0x631) != '\0') {
    *(undefined1 *)(param_2 + 0x631) = 0;
    FUN_4a10ca70(auStack_40,param_2);
    iVar7 = 0;
    if ((int)local_38 < 1) {
      uVar8 = 0;
    }
    else {
      uVar8 = local_38 & 1;
    }
    iVar9 = 0;
    if (uVar8 != 0) {
      do {
        if (local_34 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(local_34 + 8);
        }
        iVar3 = FUN_4a146b58(*(undefined4 *)(iVar3 + iVar9 * 4),0x2000);
        if (iVar3 != 0) {
          iVar7 = iVar7 + 1;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)uVar8);
    }
    if ((int)uVar8 < (int)local_38) {
      do {
        if (local_34 == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *(int *)(local_34 + 8);
        }
        iVar9 = FUN_4a146b58(*(undefined4 *)(iVar9 + uVar8 * 4),0x2000);
        if (iVar9 != 0) {
          iVar7 = iVar7 + 1;
        }
        if (local_34 == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *(int *)(local_34 + 8);
        }
        iVar9 = FUN_4a146b58(*(undefined4 *)(iVar9 + (uVar8 + 1) * 4),0x2000);
        if (iVar9 != 0) {
          iVar7 = iVar7 + 1;
        }
        uVar8 = uVar8 + 2;
      } while ((int)uVar8 < (int)local_38);
    }
    iVar9 = 0;
    if (0 < *(int *)(param_2 + 0x5ec)) {
      do {
        if (*(int *)(param_2 + 0x5f0) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(param_2 + 0x5f0) + 8);
        }
        piVar4 = *(int **)(iVar3 + iVar9 * 4);
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)(*(int *)(*piVar4 + -0xc) + (int)piVar4);
        }
        if ((piVar4 != (int *)0x0) && (iVar3 = (**(code **)(*piVar4 + 8))(piVar4), iVar3 != 0)) {
          (**(code **)(*piVar4 + 4))(piVar4);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(param_2 + 0x5ec));
    }
    puVar5 = (undefined4 *)FUN_4a0c6bc0(local_54);
    *puVar5 = puVar1;
    puVar5[2] = *(undefined4 *)(param_2 + 0x5ec);
    piVar4 = *(int **)(param_2 + 0x5f0);
    puVar5[3] = piVar4;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))();
    }
    *puVar5 = puVar2;
    if (local_48 == (int *)0x0) {
      iVar9 = 0;
    }
    else {
      iVar9 = local_48[2];
    }
    if ((iVar9 == 0) || (local_4c != iVar7)) {
      piVar4 = (int *)(param_2 + 0x5e4);
      iVar9 = FUN_4a16994c(auStack_68,0);
      uVar11 = *(undefined4 *)(iVar9 + 8);
      piVar10 = *(int **)(iVar9 + 0xc);
      if (piVar10 != (int *)0x0) {
        (**(code **)(*piVar10 + 0xc))(piVar10);
      }
      (**(code **)(*piVar4 + 0x1c))(piVar4);
      *(int **)(param_2 + 0x5f0) = piVar10;
      *(undefined4 *)(param_2 + 0x5ec) = uVar11;
      FUN_4a169a1c(auStack_68);
      iVar9 = FUN_4a16994c(auStack_68,0);
      uVar11 = *(undefined4 *)(iVar9 + 8);
      piVar10 = *(int **)(iVar9 + 0xc);
      if (piVar10 != (int *)0x0) {
        (**(code **)(*piVar10 + 0xc))(piVar10);
      }
      (**(code **)(local_54[0] + 0x1c))(local_54);
      local_4c = uVar11;
      local_48 = piVar10;
      FUN_4a169a1c(auStack_68);
      iVar7 = FUN_4a16994c(auStack_68,iVar7);
      iVar9 = *(int *)(iVar7 + 8);
      piVar10 = *(int **)(iVar7 + 0xc);
      if (piVar10 != (int *)0x0) {
        (**(code **)(*piVar10 + 0xc))(piVar10);
      }
      (**(code **)(local_54[0] + 0x1c))(local_54);
      local_4c = iVar9;
      local_48 = piVar10;
      FUN_4a169a1c(auStack_68);
      piVar10 = local_48;
      iVar7 = local_4c;
      if (local_48 != (int *)0x0) {
        (**(code **)(*local_48 + 0xc))(local_48);
      }
      (**(code **)(*piVar4 + 0x1c))(piVar4);
      *(int *)(param_2 + 0x5ec) = iVar7;
      *(int **)(param_2 + 0x5f0) = piVar10;
    }
    iVar9 = 0;
    iVar7 = 0;
    if (0 < (int)local_38) {
      do {
        if (local_34 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(local_34 + 8);
        }
        iVar3 = FUN_4a146b58(*(undefined4 *)(iVar3 + iVar7 * 4),0x2000);
        if (iVar3 != 0) {
          if (local_34 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(local_34 + 8);
          }
          if (local_48 == (int *)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = local_48[2];
          }
          *(undefined4 *)(iVar6 + iVar9 * 4) = *(undefined4 *)(iVar3 + iVar7 * 4);
          if (local_48 == (int *)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = local_48[2];
          }
          piVar4 = *(int **)(iVar3 + iVar9 * 4);
          if (piVar4 != (int *)0x0) {
            piVar4 = (int *)((int)piVar4 + *(int *)(*piVar4 + -0xc));
          }
          if (piVar4 != (int *)0x0) {
            (**(code **)(*piVar4 + 0xc))();
          }
          iVar9 = iVar9 + 1;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)local_38);
    }
    FUN_4a169a1c(local_54);
    FUN_4a16a5f4(auStack_40);
  }
  puVar5 = (undefined4 *)FUN_4a0c6bc0(local_2c);
  *puVar5 = puVar1;
  puVar5[2] = *(undefined4 *)(param_2 + 0x5ec);
  piVar4 = *(int **)(param_2 + 0x5f0);
  puVar5[3] = piVar4;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))();
  }
  *puVar5 = puVar2;
  return;
}



// Address: 4a110ec4

/* WARNING: Removing unreachable block (ram,0x4a116204) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a110ec4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  iVar1 = FUN_4a13fa70(uVar4);
  FUN_4a0d7034(uVar4,param_2);
  iVar2 = FUN_4a13fa70(uVar4,param_2);
  uVar3 = 0xb35;
  if (iVar1 != iVar2) {
    if (iVar2 == 5) {
      uVar3 = 0xb37;
    }
    else {
      uVar3 = 0xb36;
    }
    if (param_2 == 0) {
      FUN_4a0daefc(uVar4,7);
      if (iVar2 == 5) {
        FUN_4a0daefc(uVar4,0x48);
      }
    }
    else if (param_2 == 1) {
      FUN_4a0daefc(uVar4,8);
      if (iVar2 == 5) {
        FUN_4a0daefc(uVar4,0x46);
      }
    }
    else if ((param_2 == 2) && (FUN_4a0daefc(uVar4,9), iVar2 == 5)) {
      FUN_4a0daefc(uVar4,0x47);
    }
  }
  if ((iVar1 == iVar2) || (iVar2 != 5)) {
    if (iVar1 == 5) {
      return;
    }
    uVar4 = FUN_4a13fa58(uVar4,param_2);
    *(undefined4 *)(param_1 + 0x290) = 0;
    FUN_4a0cd7c0(param_1,uVar3,uVar4);
  }
  else {
    uVar3 = FUN_4a13fa58(uVar4,param_2);
    uVar4 = FUN_4a13fa58(uVar4,param_2);
    FUN_4a06bb54(*(int *)(param_1 + 0x20) + 0x278,0xfffffff5,0xb5a,uVar4);
    *(undefined4 *)(param_1 + 0x290) = 10;
    FUN_4a0cd7c0(param_1,0xfffffff5,uVar3);
  }
  *(undefined4 *)(param_1 + 0x1c0) = 9;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined1 *)(param_1 + 0x1dc) = 1;
  host_s3eAccelerometerStop_arm();
                    /* WARNING: Could not recover jumptable at 0x4a116200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_caseD_0_4a11622c)();
  return;
}



// Address: 4a111044

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a111044(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (*(char *)(param_1 + 0x2d8) == '\0') {
    return;
  }
  FUN_4a09f3a4(*(int *)(param_1 + 0x20) + 0x128,param_2,param_3,param_4);
  puVar1 = PTR_DAT_4a111210;
  iVar2 = FUN_4a0bc1f8(*(undefined4 *)PTR_DAT_4a111210);
  iVar3 = DAT_4a111214;
  if ((iVar2 != 400) && (iVar2 = FUN_4a0bc1f8(*(undefined4 *)puVar1), iVar2 != 0x140)) {
    iVar2 = *(int *)(param_1 + 0x29c);
    if (999 < iVar2) {
      iVar2 = 1000;
    }
    iVar3 = (int)((ulonglong)((longlong)iVar3 * (longlong)(*(int *)(param_1 + 0x1ec) * iVar2)) >>
                 0x20);
    (**(code **)(*param_2 + 0xa0))(param_2,0);
    (**(code **)(*param_2 + 0x58))
              (param_2,*(undefined4 *)(param_1 + 0x1e0),*(undefined4 *)(param_1 + 0x1e4),
               *(undefined4 *)(param_1 + 0x1e8));
    (**(code **)(*param_2 + 0x58))
              (param_2,*(undefined4 *)(param_1 + 0x1e0),
               (*(int *)(param_1 + 0x1e4) + *(int *)(param_1 + 0x1ec)) -
               (((iVar3 >> 6) - (iVar3 >> 0x1f) >> 1) + 1),*(undefined4 *)(param_1 + 0x1e8));
    return;
  }
  iVar2 = *(int *)(param_1 + 0x29c);
  if (999 < iVar2) {
    iVar2 = 1000;
  }
  iVar3 = (int)((ulonglong)((longlong)iVar3 * (longlong)(iVar2 * 0x168)) >> 0x20);
  FUN_4a150738();
  uVar4 = FUN_4a171fac((int)(-*(int *)(param_1 + 0x1ec) +
                            ((uint)(-*(int *)(param_1 + 0x1ec) >> 0x1f) >> 0x1e)) >> 2);
  uVar5 = FUN_4a171fac((int)(-*(int *)(param_1 + 0x1e8) +
                            ((uint)(-*(int *)(param_1 + 0x1e8) >> 0x1f) >> 0x1e)) >> 2);
  FUN_4a150bec(uVar5,uVar4,0);
  (**(code **)(*param_2 + 0xa0))(param_2,0);
  (**(code **)(*param_2 + 0x58))(param_2,0,0,800);
  (**(code **)(*param_2 + 0x58))(param_2,0,0x168 - (((iVar3 >> 6) - (iVar3 >> 0x1f) >> 1) + 1),800);
  FUN_4a156d94();
  return;
}



// Address: 4a111218

/* WARNING: Removing unreachable block (ram,0x4a118398) */
/* WARNING: Removing unreachable block (ram,0x4a11839c) */

void FUN_4a111218(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 0x420);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
  }
  iVar2 = (int)*(short *)(iVar2 + param_2 * 2);
  iVar1 = *(int *)(param_1 + 0x20) + 0x278;
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  *(int *)(param_1 + 0x2a0) = iVar2;
  *(undefined4 *)(param_1 + 0x2a4) = 0xa40;
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  iVar2 = FUN_4a06bf88(iVar1,iVar2,4);
  *(int *)(param_1 + 0x2b0) = iVar2 * 0x10000 + 0x50000;
  iVar2 = FUN_4a06bf88(iVar1,0xa40,4);
  *(int *)(param_1 + 0x2b0) = iVar2 * 0x10000 + 0x50000 + *(int *)(param_1 + 0x2b0);
  return;
}



// Address: 4a111238

/* WARNING: Removing unreachable block (ram,0x4a122af8) */

void FUN_4a111238(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x632) != '\0') {
    *(undefined1 *)(param_1 + 0x632) = 0;
    *(undefined1 *)(param_1 + 0x633) = 0;
    *(undefined2 *)(param_1 + 0x634) = 0xffff;
    *(undefined4 *)(param_1 + 0x674) = 0;
    *(undefined4 *)(param_1 + 0x2b4) = 0;
    FUN_4a115d8c(param_1,0);
  }
  *(undefined1 *)(param_1 + 0x67c) = 1;
  *(undefined4 *)(param_1 + 0x694) = 0;
                    /* WARNING: Could not recover jumptable at 0x4a122af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)switchD_4a122af4::switchdataD_4a122afc)(param_1,0,0x82e,param_4,unaff_r4,in_lr);
  return;
}



// Address: 4a111294

void FUN_4a111294(int param_1)

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
  FUN_4a085310(iVar7,0x2a);
  FUN_4a085310(iVar7,0x2b);
  FUN_4a085310(iVar7,0x2f);
  FUN_4a085310(iVar7,0x31);
  FUN_4a085310(iVar7,0x2e);
  FUN_4a085310(iVar7,0x32);
  FUN_4a085310(iVar7,0x30);
  FUN_4a085310(iVar7,0x33);
  FUN_4a085310(iVar7,0x34);
  FUN_4a085310(iVar7,0x38);
  FUN_4a085310(iVar7,0x3a);
  FUN_4a085310(iVar7,0x37);
  FUN_4a085310(iVar7,0x3b);
  FUN_4a085310(iVar7,0x39);
  FUN_4a085310(iVar7,0x18);
  FUN_4a085310(iVar7,0x19);
  FUN_4a085310(iVar7,0x1d);
  FUN_4a085310(iVar7,0x1f);
  FUN_4a085310(iVar7,0x1c);
  FUN_4a085310(iVar7,0x20);
  FUN_4a085310(iVar7,0x1e);
  FUN_4a085310(iVar7,0x21);
  FUN_4a085310(iVar7,0x22);
  FUN_4a085310(iVar7,0x26);
  FUN_4a085310(iVar7,0x28);
  FUN_4a085310(iVar7,0x25);
  FUN_4a085310(iVar7,0x29);
  if (*(int *)(iVar7 + 0x74) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(iVar7 + 0x74) + 8);
  }
  puVar3 = (undefined4 *)FUN_4a0c6bc0(apuStack_5c);
  *puVar3 = PTR_PTR_4a0855cc;
  puVar3[2] = *(undefined4 *)(iVar6 + 0x314);
  piVar5 = *(int **)(iVar6 + 0x318);
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
  (**(code **)(*(int *)(iVar6 + 0x30c) + 0x1c))((int *)(iVar6 + 0x30c));
  *(undefined4 *)(iVar6 + 0x314) = 0;
  *(undefined4 *)(iVar6 + 0x318) = 0;
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
  (**(code **)(*(int *)(iVar7 + 0x30c) + 0x1c))((int *)(iVar7 + 0x30c));
  *(undefined4 *)(iVar7 + 0x314) = 0;
  *(undefined4 *)(iVar7 + 0x318) = 0;
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



// Address: 4a1113f4

/* WARNING: Removing unreachable block (ram,0x4a071240) */
/* WARNING: Removing unreachable block (ram,0x4a120fec) */
/* WARNING: Removing unreachable block (ram,0x4a071244) */
/* WARNING: Removing unreachable block (ram,0x4a0fc35c) */
/* WARNING: Removing unreachable block (ram,0x4a0fc360) */
/* WARNING: Removing unreachable block (ram,0x4a0fc368) */
/* WARNING: Removing unreachable block (ram,0x4a0fc36c) */
/* WARNING: Removing unreachable block (ram,0x4a071cf8) */
/* WARNING: Removing unreachable block (ram,0x4a071d08) */
/* WARNING: Removing unreachable block (ram,0x4a0fc274) */
/* WARNING: Removing unreachable block (ram,0x4a0fc2b4) */
/* WARNING: Removing unreachable block (ram,0x4a0fc2ac) */
/* WARNING: Removing unreachable block (ram,0x4a0fc2e8) */
/* WARNING: Removing unreachable block (ram,0x4a0fc2f4) */
/* WARNING: Removing unreachable block (ram,0x4a0fc304) */
/* WARNING: Removing unreachable block (ram,0x4a0fc308) */
/* WARNING: Removing unreachable block (ram,0x4a0fc30c) */
/* WARNING: Removing unreachable block (ram,0x4a0fc320) */
/* WARNING: Removing unreachable block (ram,0x4a0fc328) */
/* WARNING: Removing unreachable block (ram,0x4a0fc378) */
/* WARNING: Removing unreachable block (ram,0x4a0fc2bc) */
/* WARNING: Removing unreachable block (ram,0x4a0fc338) */
/* WARNING: Removing unreachable block (ram,0x4a0fc348) */
/* WARNING: Removing unreachable block (ram,0x4a0fc34c) */
/* WARNING: Removing unreachable block (ram,0x4a0fc350) */
/* WARNING: Removing unreachable block (ram,0x4a0fc2c8) */
/* WARNING: Removing unreachable block (ram,0x4a0fc2d4) */
/* WARNING: Removing unreachable block (ram,0x4a0fc2d8) */
/* WARNING: Removing unreachable block (ram,0x4a0fc2dc) */
/* WARNING: Removing unreachable block (ram,0x4a0fc38c) */
/* WARNING: Removing unreachable block (ram,0x4a0fc2f0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1113f4(int param_1,int param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int unaff_r4;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar15;
  undefined4 auStack_40 [2];
  int iStack_38;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  bVar15 = *(char *)(param_1 + 0x2d8) != '\0';
  iVar4 = 0;
  if (bVar15) {
    iVar4 = *(int *)(param_1 + 0x294);
  }
  if (!bVar15 || iVar4 == 0) {
    return;
  }
  if (iVar4 != 1) {
    if (iVar4 == 2) {
      FUN_4a0d58d0(*(undefined4 *)(param_1 + 0x24));
      param_2 = *(int *)(param_1 + 0x29c) + param_2;
      *(int *)(param_1 + 0x29c) = param_2;
      if (param_2 < 0x5dc) {
                    /* WARNING: Could not recover jumptable at 0x4a111554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x28) + 0x450) = 1;
      *(undefined4 *)(param_1 + 0x294) = 3;
      *(undefined4 *)(param_1 + 0x29c) = 1000;
      return;
    }
    if (iVar4 != 3) {
      return;
    }
    FUN_4a0d58d0(*(undefined4 *)(param_1 + 0x24));
    if (*(int *)(param_1 + 0x29c) != 0) {
      param_2 = *(int *)(param_1 + 0x29c) - param_2;
      if (param_2 < 1) {
        param_2 = 0;
      }
      goto LAB_4a111524;
    }
    *(undefined4 *)(param_1 + 0x294) = 0;
    iVar4 = *(int *)(param_1 + 0x298);
    if (iVar4 == 9) {
      FUN_4a11a440(param_1,0xd);
      iVar4 = *(int *)(param_1 + 0x24);
code_r0x4a0d58d0:
      *(undefined4 *)(iVar4 + 0x984) = 0x9c4;
      return;
    }
    if (iVar4 == 0x95) {
      FUN_4a0d58d0(*(undefined4 *)(param_1 + 0x24));
      FUN_4a0ff3f8(*(undefined4 *)(param_1 + 0x20),400);
      *(undefined4 *)(param_1 + 0x7e0) = 5;
      FUN_4a1161d0(param_1,0x13);
      FUN_4a11be8c(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x4a110030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR_caseD_5_4a11004c)(0xd,0,0x11);
      return;
    }
    if (iVar4 != 0xaa) {
      iVar4 = *(int *)(param_1 + 0x24);
      goto code_r0x4a0d58d0;
    }
    iVar4 = FUN_4a0fb748(*(undefined4 *)(param_1 + 0x20));
    if (iVar4 < 5) {
      uVar5 = thunk_FUN_4a161570(0x14);
      uVar5 = FUN_4a0c707c(uVar5,PTR_s_career_4a1115bc);
      uVar6 = FUN_4a0941ec();
      FUN_4a094d04(uVar6,uVar5);
      uVar5 = FUN_4a140bbc(*(undefined4 *)(param_1 + 0x24));
      *(undefined4 *)(param_1 + 0x290) = 7;
      FUN_4a0cd7c0(param_1,uVar5,0xb61);
      uVar5 = 9;
    }
    else {
      FUN_4a0cf554(param_1,0x53);
      uVar5 = 0xb;
    }
code_r0x4a1161d0:
    iVar4 = *(int *)(param_1 + 0x1c0);
    iVar13 = *(int *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x1c0) = uVar5;
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    *(undefined1 *)(param_1 + 0x1dc) = 1;
    host_s3eAccelerometerStop_arm();
    switch(uVar5) {
    default:
      return;
    case 1:
      *(undefined4 *)(param_1 + 500) = 0;
      *(undefined1 *)(param_1 + 0x632) = 0;
      *(undefined1 *)(param_1 + 0x67c) = 0;
      if (*PTR_DAT_4a1164e4 == '\0') {
        iVar4 = *(int *)(*(int *)(param_1 + 0x20) + 0x264);
        *(undefined1 *)(iVar4 + 0xc) = 1;
        *(undefined4 *)(iVar4 + 0x28) = 1;
        *(undefined1 *)(iVar4 + 0x30) = 1;
        *(undefined4 *)(iVar4 + 0x2c) = 0xffffffff;
        *(undefined1 *)(iVar4 + 0x14) = 0;
        switch(*(undefined4 *)(iVar4 + 0x18)) {
        case 0:
          *(undefined4 *)(iVar4 + 0x18) = 5;
          return;
        case 1:
          goto switchD_4a0d3700_caseD_1;
        default:
          return;
        }
      }
      iVar4 = host_s3eAudioGetInt_arm(1);
      if (iVar4 != 0) {
        return;
      }
      return;
    case 2:
      if (*(int *)(param_1 + 0x1d0) == 0x61) {
        FUN_4a0fc560(*(undefined4 *)(param_1 + 0x20),0);
      }
      uVar5 = *(undefined4 *)(param_1 + 0x1d0);
      *(undefined4 *)(iVar13 + 0x460) = *(undefined4 *)(param_1 + 0x1cc);
      *(undefined4 *)(iVar13 + 0x464) = uVar5;
      return;
    case 3:
      if (*(char *)(param_1 + 0x632) != '\0') {
        *(undefined1 *)(param_1 + 0x632) = 0;
        *(undefined1 *)(param_1 + 0x633) = 0;
        *(undefined2 *)(param_1 + 0x634) = 0xffff;
        *(undefined4 *)(param_1 + 0x674) = 0;
        *(undefined4 *)(param_1 + 0x2b4) = 0;
        FUN_4a115d8c(param_1,0);
      }
      uVar5 = 0x82e;
      iVar4 = 0x83b;
      break;
    case 4:
      if (*(char *)(param_1 + 0x632) != '\0') {
        *(undefined1 *)(param_1 + 0x632) = 0;
        *(undefined1 *)(param_1 + 0x633) = 0;
        *(undefined2 *)(param_1 + 0x634) = 0xffff;
        *(undefined4 *)(param_1 + 0x674) = 0;
        *(undefined4 *)(param_1 + 0x2b4) = 0;
        FUN_4a115d8c(param_1,0);
      }
      if (*(int *)(param_1 + 0x1cc) == 2) {
        iVar4 = *(int *)(param_1 + 0x1d0);
        if (iVar4 == 0x61) {
LAB_4a1163a8:
          iVar4 = 0xc1c;
        }
        else if (iVar4 == 0x62) {
          iVar4 = 0xc1b;
        }
        else if (iVar4 == 100) {
          iVar4 = FUN_4a145a38();
          if (iVar4 == 4) {
            iVar4 = 0xc1d;
          }
          else {
            iVar4 = 0xc1f;
          }
        }
        else {
          iVar4 = FUN_4a145960(*(undefined4 *)(param_1 + 0x20));
          if (iVar4 == 0) goto LAB_4a1163a8;
          iVar4 = 0xc1e;
        }
      }
      uVar5 = 0xc21;
      break;
    case 5:
      *(undefined1 *)(iVar13 + 0x50) = 0;
      return;
    case 6:
      *(undefined4 *)(param_1 + 0x2b8) = 2;
      if ((*(int *)(param_1 + 0x2b4) == 0) ||
         (iVar4 = FUN_4a146b58(*(int *)(param_1 + 0x2b4),2), iVar4 == 0)) {
        *(undefined4 *)(param_1 + 0x2b4) = 0;
        FUN_4a115d8c(param_1,0);
      }
    case 7:
      *(undefined1 *)(param_1 + 0x1dc) = 0;
      return;
    case 0xb:
      uVar5 = FUN_4a0d7bf0(*(undefined4 *)(param_1 + 0x24));
      *(undefined4 *)(param_1 + 0x6ec) = uVar5;
      uVar6 = 0xaf1;
      uVar5 = 0xaf2;
      goto FUN_4a0ce9a4;
    case 0xf:
      uVar5 = *(undefined4 *)(param_1 + 0x744);
      uVar6 = *(undefined4 *)(param_1 + 0x740);
FUN_4a0ce9a4:
      FUN_4a089fa0(*(undefined4 *)(param_1 + 0x168),uVar5,uVar6,4);
      return;
    case 0x10:
      host_s3eAccelerometerStart_arm();
      *(undefined4 *)(param_1 + 0x810) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x814) = 0;
      return;
    case 0x14:
      uVar5 = 0x838;
      iVar4 = 0xc92;
      break;
    case 0x15:
      *(undefined1 *)(param_1 + 0x1dc) = 0;
      if (iVar4 == 9 || iVar4 == 0xe) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x4a120fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR_LAB_4a120ff0)();
      return;
    case 0x16:
      uVar5 = 0xc9e;
      iVar4 = 0xc9f;
    }
    FUN_4a089eb4(*(undefined4 *)(param_1 + 0x168),iVar4,uVar5,0x40);
    return;
  }
  FUN_4a0d58d0(*(undefined4 *)(param_1 + 0x24));
  if (*(int *)(param_1 + 0x29c) != 1000) {
    iVar4 = *(int *)(param_1 + 0x29c) + param_2;
    *(int *)(param_1 + 0x29c) = iVar4;
    param_2 = iVar4 + param_2;
    if (999 < param_2) {
      param_2 = 1000;
    }
LAB_4a111524:
    *(int *)(param_1 + 0x29c) = param_2;
    return;
  }
  *(undefined4 *)(param_1 + 0x294) = 2;
  iVar4 = *(int *)(param_1 + 0x298);
  if (iVar4 == 0x7f) {
LAB_4a117620:
    iVar4 = FUN_4a1353fc(*(undefined4 *)(param_1 + 0x5f8));
    iVar13 = *(int *)(param_1 + 0x24);
    iVar9 = *(int *)(iVar13 + 0x78c);
    switchD_4a11cc8c::default(iVar9 <= iVar4 + -0xf,s_Can_t_wake_up__before__we_go_to_s_4a0dbd14);
    iVar4 = *(int *)(iVar13 + 0x788) + ((iVar4 + -0xf) - iVar9) * 1000;
    *(int *)(iVar13 + 0x788) = iVar4;
    if (1000 < iVar4) {
      lVar1 = (longlong)DAT_4a0dbd3c;
      iVar9 = (int)((ulonglong)(lVar1 * iVar4) >> 0x20);
      iVar9 = (iVar9 >> 6) - (iVar9 >> 0x1f);
      *(int *)(iVar13 + 0x788) = iVar4 + iVar9 * -1000;
      iVar10 = *(int *)(iVar13 + 0x78c);
      *(int *)(iVar13 + 0x78c) = iVar10 + iVar9;
      uVar5 = FUN_4a0fba7c(*(undefined4 *)(iVar13 + 0x18),iVar9,iVar9 * -0x7d,(int)(lVar1 * iVar4));
      FUN_4a11c5b4(uVar5,iVar10,*(undefined4 *)(iVar13 + 0x78c));
    }
    FUN_4a0d9d54(iVar13,1,0x640000);
    FUN_4a0d9d54(iVar13,2,0xfff60000);
    iVar4 = FUN_4a13feec(iVar13,0);
    if (iVar4 == -1) {
      FUN_4a0d9d54(iVar13,0,0xffec0000);
    }
    iVar4 = FUN_4a13feec(iVar13,8);
    if (iVar4 == -1) {
      FUN_4a0d9d54(iVar13,3,0xfff10000);
    }
    *(undefined4 *)(iVar13 + 0x984) = 0x9c4;
    *(undefined1 *)(*(int *)(*(int *)(iVar13 + 0x18) + 0x520) + 0x450) = 1;
    return;
  }
  if (iVar4 < 0x80) {
    if (iVar4 != 9) {
      if (iVar4 != 0x7e) {
        return;
      }
      goto LAB_4a117620;
    }
    if ((*(int *)(param_1 + 0x1d8) == 0) &&
       (iVar4 = FUN_4a142ef4(*(undefined4 *)(param_1 + 0x28)), iVar4 == 0)) {
      FUN_4a10e58c(param_1,*(undefined4 *)(param_1 + 0x5f8));
      *(undefined4 *)(param_1 + 0x7c4) = 0x78;
      FUN_4a0d58d0(*(undefined4 *)(param_1 + 0x24));
      FUN_4a110aac(&iStack_28,param_1);
      iVar4 = 0;
      if (0 < iStack_20) {
        do {
          if (iStack_1c == 0) {
            iVar13 = 0;
          }
          else {
            iVar13 = *(int *)(iStack_1c + 8);
          }
          iVar13 = *(int *)(iVar13 + iVar4 * 4);
          if (*(int *)(param_1 + 0x5f8) != iVar13) {
            uVar5 = FUN_4a146a9c(iVar13);
            iVar9 = FUN_4a13f8f8(*(undefined4 *)(param_1 + 0x24),uVar5);
            if (iVar9 == 0) {
              FUN_4a07378c(iVar13,0);
            }
            else {
              FUN_4a109858(iVar13);
            }
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iStack_20);
      }
      FUN_4a169a1c(&iStack_28);
      return;
    }
    FUN_4a0fc560(*(undefined4 *)(param_1 + 0x20),0);
    *(undefined4 *)(param_1 + 0x1cc) = 2;
    *(undefined4 *)(param_1 + 0x1d0) = 0x60;
    uVar5 = 2;
    goto code_r0x4a1161d0;
  }
  if (iVar4 == 0x95) {
    FUN_4a1169cc(param_1);
    FUN_4a10ca70(&iStack_28,param_1);
    iVar4 = 0;
    if (0 < iStack_20) {
      do {
        if (iStack_1c == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = *(int *)(iStack_1c + 8);
        }
        FUN_4a109858(*(undefined4 *)(iVar13 + iVar4 * 4));
        iVar4 = iVar4 + 1;
      } while (iVar4 < iStack_20);
    }
    FUN_4a0f6d2c(*(undefined4 *)(param_1 + 0x28));
    FUN_4a0f28a4(*(undefined4 *)(param_1 + 0x28),0);
    FUN_4a16a5f4(&iStack_28);
    return;
  }
  if (iVar4 != 0xaa) {
    return;
  }
  uVar5 = FUN_4a1356f4(*(undefined4 *)(param_1 + 0x5f8));
  switchD_4a11cc8c::default(uVar5,PTR_s_sim_not_working__4a117810);
  FUN_4a0daa6c(*(undefined4 *)(param_1 + 0x24));
  if (*(int *)(param_1 + 0x2a0) == 0xaa7 || *(int *)(param_1 + 0x2a0) == 0xaa6) {
    *(undefined4 *)(param_1 + 0x2a0) = 0xffffffff;
  }
  piVar7 = *(int **)(param_1 + 0x5f8);
  iStack_28 = unaff_r4;
  iStack_24 = unaff_r5;
  iStack_20 = unaff_r6;
  uVar5 = FUN_4a145f8c();
  FUN_4a1460a4(piVar7);
  iVar4 = FUN_4a142ef4();
  iVar13 = FUN_4a1406f4(uVar5,piVar7[0x35]);
  uVar2 = FUN_4a146a9c(piVar7);
  iVar10 = 1 - uVar2;
  iVar9 = piVar7[0x37];
  iVar11 = piVar7[0x38];
  if (1 < uVar2) {
    iVar10 = 0;
  }
  if (iVar9 == 0x13) {
    if ((iVar10 != 0) && (FUN_4a0d8c28(uVar5,2,0), iVar4 != 0)) {
      FUN_4a0daefc(uVar5,0x27);
      FUN_4a0de344(uVar5,iVar4,4);
    }
  }
  else if (iVar9 < 0x14) {
    if (iVar9 == 8) {
LAB_4a07110c:
      piVar7[0x51] = -1;
      *(undefined1 *)(piVar7 + 0x52) = 0;
      piVar7[0x53] = -1;
      piVar7[0x54] = -1;
      *(undefined1 *)(piVar7 + 0x55) = 0;
      *(undefined1 *)((int)piVar7 + 0x149) = 1;
      uVar6 = FUN_4a1460b0(piVar7,0);
      FUN_4a060130(uVar6,0);
      if (iVar10 != 0) {
        iVar4 = piVar7[0x35];
        if (iVar4 == 0x9f) {
          FUN_4a0d8c28(uVar5,3,0);
        }
        else if (((iVar4 == 0x12 || iVar4 == 0x13) || iVar4 == 0x14) || iVar4 == 0x15) {
LAB_4a071410:
          FUN_4a0d8c28(uVar5,5,0);
        }
      }
    }
    else if (iVar9 < 9) {
      if (iVar9 == 1) {
        iVar4 = 1;
        if (iVar10 != 0) {
          iVar4 = *(int *)(piVar7[8] + 0x5fc);
        }
        if (iVar10 != 0 && iVar4 != 0) {
          FUN_4a108d64();
        }
      }
      else if (iVar9 == 6 || iVar9 == 7) goto LAB_4a07110c;
    }
    else if (iVar9 == 0xd) {
      iVar4 = FUN_4a1460d4(iVar11);
      switchD_4a11cc8c::default(iVar4 == 0x1b,s_cooking_at_non_stove__4a071460);
      FUN_4a109b9c(iVar11);
    }
    else if (iVar9 == 0x11) {
      if (iVar10 != 0) {
        FUN_4a0d8c28(uVar5,0);
      }
    }
    else if (iVar9 == 0x12) {
      if (iVar10 != 0) {
        FUN_4a0d8c28(uVar5,3,0);
      }
      if (iVar11 != 0) {
        iVar9 = FUN_4a1460d4(iVar11);
        if (iVar9 == 0x19) {
          if (iVar10 != 0 && iVar4 != 0) {
            FUN_4a0daefc(uVar5,0x26);
            FUN_4a0de344(uVar5,iVar4,8);
          }
        }
        else if (iVar9 == 4) {
          FUN_4a109998(iVar11);
        }
        else if (iVar9 == 5) {
          FUN_4a105a6c(iVar11);
        }
      }
    }
  }
  else if (iVar9 == 0x35) {
    if (iVar11 != 0) {
      FUN_4a108be0(iVar11);
    }
  }
  else if (iVar9 < 0x36) {
    if (iVar9 == 0x14 || iVar9 == 0x15) {
      if (iVar10 != 0) {
        FUN_4a0d8c28(uVar5,1,0);
        FUN_4a0d7614(uVar5,0);
        if ((piVar7[0x37] == 0x15) && (iVar4 != 0)) {
          FUN_4a0daefc(uVar5,0x25);
          uVar6 = FUN_4a1081c4(iVar11);
          FUN_4a0de344(uVar5,iVar4,uVar6);
        }
      }
      iVar4 = FUN_4a1461c0(piVar7,0x400);
      if (iVar4 != 0) {
        FUN_4a1071e0(piVar7,0x400);
        iVar4 = FUN_4a146ea4(piVar7[8]);
        if (iVar4 == 0) {
          iVar4 = FUN_4a107058(piVar7,1);
          FUN_4a0ca898(iVar4,0xb);
          FUN_4a06f95c(*(undefined4 *)(iVar4 + 0x34),0xfa,0x14);
        }
      }
    }
    else if ((iVar9 == 0x1a) && (iVar10 != 0)) goto LAB_4a071410;
  }
  else if (iVar9 == 0x36) {
    if (iVar10 != 0) {
      FUN_4a0d8c28(uVar5,2,0);
      FUN_4a0d8c28(uVar5,1,0);
    }
  }
  else if (iVar9 == 0x37) {
    if (iVar10 != 0) {
      FUN_4a0d8c28(uVar5,5,0);
    }
    FUN_4a109944(iVar11);
  }
  piVar7[0x37] = 0;
  iStack_1c = iStack_28;
  iVar4 = iStack_24;
  iVar9 = iStack_20;
  if (iVar13 + -1 <= piVar7[0x36]) goto code_r0x4a07171c;
  piVar7[0x36] = piVar7[0x36] + 1;
  iVar4 = FUN_4a13fb58(uVar5,piVar7[0x35]);
  iStack_1c = iStack_20;
  iStack_20 = iStack_24;
  iStack_24 = iStack_28;
  iStack_28 = piVar7[8];
  iStack_2c = FUN_4a145f8c(piVar7);
  piVar7[0x37] = iVar4;
  iVar13 = piVar7[0x38];
  iVar9 = piVar7[0x35];
  if ((iVar13 == 0) || (iVar10 = FUN_4a146b58(iVar13,0x2000), iVar10 == 0)) {
    iVar10 = 0;
  }
  else {
    iVar10 = piVar7[0x38];
  }
  iVar14 = piVar7[0x39];
  iVar11 = piVar7[0x3a];
  uVar2 = FUN_4a146a9c(piVar7);
  uVar8 = 1 - uVar2;
  if (1 < uVar2) {
    uVar8 = 0;
  }
  if (uVar8 != 0 && iVar10 != 0) {
    uVar5 = FUN_4a146a9c(iVar10);
    FUN_4a0d56bc(iStack_2c,uVar5);
  }
  if (((iVar13 != 0) && (iVar10 == 0)) && (iVar4 != 1)) {
    uVar5 = FUN_4a1461c0(piVar7,0x800);
    FUN_4a1071f0(iVar13,0x800,uVar5);
    uVar5 = FUN_4a1461c0(piVar7,0x1000);
    FUN_4a1071f0(iVar13,0x1000,uVar5);
  }
  uVar2 = 0;
  switch(iVar4) {
  case 0:
    iVar4 = piVar7[0x32];
    if (((((iVar4 == 9 || iVar4 == 0xb) || iVar4 == 0xd) || iVar4 == 0xc) || iVar4 == 0xe) ||
        iVar4 == 8) {
      piVar7[0x36] = piVar7[0x36] + -1;
      FUN_4a071e74(piVar7,0x1f);
    }
    else if (iVar4 == 4) {
      piVar7[0x36] = piVar7[0x36] + -1;
      FUN_4a071e74(piVar7,0x22);
    }
    else {
      FUN_4a074bac(piVar7,1);
    }
    break;
  case 1:
    FUN_4a076e50(piVar7,iVar13,iVar14);
    param_4 = iVar11;
    break;
  case 2:
  case 3:
    if (iVar13 == 0) {
      FUN_4a106248(piVar7,iVar14 - piVar7[0x11],iVar11 - piVar7[0x13]);
    }
    else {
      FUN_4a1077b8(piVar7,iVar13);
    }
    if (iVar4 == 3) {
LAB_4a0720fc:
      FUN_4a106238(piVar7,piVar7[0x14] + 2U & 3);
    }
    goto LAB_4a072bd8;
  case 4:
  case 5:
    FUN_4a106238(piVar7,*(undefined4 *)(iVar13 + 0x50));
    if (iVar4 == 5) goto LAB_4a0720fc;
    goto LAB_4a072bd8;
  case 6:
  case 7:
  case 8:
    FUN_4a075388(piVar7,iVar9,iVar4);
    goto LAB_4a072d2c;
  case 9:
    FUN_4a074bac(piVar7,5);
    break;
  case 10:
    FUN_4a074bac(piVar7,6);
    break;
  case 0xb:
    iVar4 = 0;
    if (piVar7[0x38] != 0) {
      iVar13 = FUN_4a146b58(piVar7[0x38],0x2000);
      iVar4 = 0;
      if (iVar13 != 0) {
        iVar4 = piVar7[0x38];
      }
    }
    FUN_4a076d54(iVar4);
    FUN_4a071478(piVar7);
    break;
  case 0xc:
    FUN_4a074bac(piVar7,7);
    break;
  case 0xd:
    switchD_4a11cc8c::default(uVar8,s_NPC_cooking__4a072608);
    iVar4 = FUN_4a0d5b78(iStack_2c,iVar14);
    if (iVar4 == 0) {
LAB_4a072c98:
      FUN_4a071ac4(piVar7,0);
    }
    else {
      FUN_4a110228(iStack_28,0,iVar13);
      iVar4 = FUN_4a1460d4(iVar13);
      switchD_4a11cc8c::default(iVar4 == 0x1b,s_cooking_at_non_stove__4a072618);
      FUN_4a105774(iVar13);
      piVar7[0x51] = 0x36;
      *(undefined1 *)(piVar7 + 0x52) = 1;
      piVar7[0x54] = -1;
      piVar7[0x53] = 1000;
      *(undefined1 *)(piVar7 + 0x55) = 0;
      *(undefined1 *)((int)piVar7 + 0x149) = 0;
      FUN_4a074bac(piVar7,4);
    }
    break;
  case 0xe:
    switchD_4a11cc8c::default(uVar8,s_NPC_fishing__4a072630);
    iVar4 = FUN_4a13fa98(iStack_2c);
    if (iVar4 == 0) goto LAB_4a072c98;
    iVar4 = *(int *)(iVar13 + 0x28);
    if (iVar4 == 8) {
      FUN_4a106238(piVar7,0);
    }
    else if (iVar4 == 9) {
      FUN_4a106238(piVar7,1);
    }
    else if (iVar4 == 7) {
      FUN_4a106238(piVar7,2);
    }
    else if (iVar4 == 6) {
      FUN_4a106238(piVar7,3);
    }
    FUN_4a110228(iStack_28,1,iVar13);
    piVar7[0x51] = 0x3e;
    *(undefined1 *)(piVar7 + 0x52) = 1;
    piVar7[0x54] = -1;
    piVar7[0x53] = 1000;
    *(undefined1 *)(piVar7 + 0x55) = 0;
    *(undefined1 *)((int)piVar7 + 0x149) = 0;
    FUN_4a074bac(piVar7,4);
    break;
  case 0xf:
    switchD_4a11cc8c::default(uVar8,s_NPC_repairing__4a072640);
    iVar4 = FUN_4a13fca8(iStack_2c);
    if (iVar4 == 0) goto LAB_4a072c98;
    FUN_4a110228(iStack_28,2,iVar13);
    piVar7[0x51] = 0x36;
    *(undefined1 *)(piVar7 + 0x52) = 1;
    piVar7[0x53] = 1000;
    piVar7[0x54] = -1;
    *(undefined1 *)(piVar7 + 0x55) = 0;
    *(undefined1 *)((int)piVar7 + 0x149) = 0;
    FUN_4a074bac(piVar7,4);
    break;
  case 0x11:
    iVar4 = 5000;
    if (uVar8 != 0) {
      uVar5 = 0x70000;
      if (iVar9 == 0x84) {
        uVar5 = FUN_4a1460a4(piVar7);
        uVar5 = FUN_4a144980(uVar5,iVar14);
      }
      FUN_4a0d8c28(iStack_2c,0,uVar5);
    }
    iVar13 = FUN_4a1460d4(iVar13);
    if (iVar13 == 0x11) {
      iVar4 = 0xdac;
    }
    iVar13 = 0x36;
    if (piVar7[0x32] == 1) {
      iVar13 = 0x22;
    }
    piVar7[0x51] = iVar13;
    *(undefined1 *)(piVar7 + 0x52) = 1;
    piVar7[0x54] = -1;
    piVar7[0x53] = iVar4;
    *(undefined1 *)(piVar7 + 0x55) = 0;
    *(undefined1 *)((int)piVar7 + 0x149) = 0;
    FUN_4a074bac(piVar7,4);
    uVar2 = 1;
    FUN_4a109e5c(piVar7,0x46);
    break;
  case 0x12:
    iVar4 = FUN_4a1460d4(iVar13);
    if (iVar4 == 0x19) {
      if (uVar8 != 0) {
        FUN_4a0d8c28(iStack_2c,3,0xa0000);
      }
      FUN_4a105cf4(iVar13);
      piVar7[0x51] = 0x61;
      *(undefined1 *)(piVar7 + 0x52) = 1;
      piVar7[0x53] = 5000;
      piVar7[0x54] = -1;
      *(undefined1 *)(piVar7 + 0x55) = 0;
      *(undefined1 *)((int)piVar7 + 0x149) = 0;
      FUN_4a074bac(piVar7,4);
    }
    else {
      if (iVar4 != 5) {
        if (iVar4 == 4) {
          if ((uVar8 != 0) && (iVar4 = FUN_4a1461c0(piVar7,0x400), iVar4 == 0)) {
            FUN_4a0d8c28(iStack_2c,3,0x70000);
          }
          FUN_4a105328(iVar13);
          piVar7[0x51] = 99;
          *(undefined1 *)(piVar7 + 0x52) = 1;
          piVar7[0x54] = -1;
          piVar7[0x53] = 0x960;
          *(undefined1 *)(piVar7 + 0x55) = 0;
          *(undefined1 *)((int)piVar7 + 0x149) = 0;
          FUN_4a074bac(piVar7,4);
        }
        else {
          switchD_4a11cc8c::default(0,s_what_are_we_washing_at___4a0729ac);
        }
        break;
      }
      FUN_4a1053a4(iVar13);
      if (uVar8 != 0) {
        uVar5 = FUN_4a145f8c(piVar7);
        FUN_4a0d8c28(uVar5,3,0xa0000);
      }
      piVar7[0x51] = 0x46;
      *(undefined1 *)(piVar7 + 0x52) = 1;
      piVar7[0x53] = 8000;
      piVar7[0x54] = -1;
      *(undefined1 *)(piVar7 + 0x55) = 0;
      *(undefined1 *)((int)piVar7 + 0x149) = 0;
      FUN_4a074bac(piVar7,4);
    }
    goto LAB_4a072d2c;
  case 0x13:
    if (uVar8 != 0) {
      FUN_4a0d8c28(iStack_2c,2,0x320000);
    }
    if (iVar9 == 0x7c) {
      iVar4 = 0x5b;
    }
    else {
      iVar4 = 0x2d;
    }
    piVar7[0x51] = iVar4;
    *(undefined1 *)(piVar7 + 0x52) = 1;
    piVar7[0x53] = 2000;
    piVar7[0x54] = -1;
    *(undefined1 *)(piVar7 + 0x55) = 0;
    *(undefined1 *)((int)piVar7 + 0x149) = 0;
    FUN_4a074bac(piVar7,4);
    break;
  case 0x14:
  case 0x15:
    uVar5 = FUN_4a145f8c(piVar7);
    iVar13 = FUN_4a13fb90();
    iVar10 = piVar7[0x35];
    uVar6 = FUN_4a146a9c(piVar7);
    iVar10 = FUN_4a0d6f44(uVar5,uVar6,iVar10 == 0x7f);
    if ((iVar4 == 0x14) && (iVar13 + 0x78 <= iVar10)) {
      iVar10 = iVar13 + 0x78;
    }
    iVar4 = FUN_4a146a9c(piVar7);
    if (iVar4 == 0) {
      FUN_4a0d7614(uVar5,1);
      FUN_4a0d8c28(uVar5,1,0x10000);
    }
    iVar13 = (iVar10 - iVar13) + iVar13;
    if ((piVar7[0x34] == 0) || (iVar4 = FUN_4a1460d4(), iVar4 != 0xd)) {
      iVar4 = FUN_4a1461c0(piVar7,0x80000);
      if (iVar4 == 0) {
        iVar4 = 0x1a;
      }
      else {
        iVar4 = 0x19;
      }
    }
    else {
      iVar4 = 0x51;
    }
    piVar7[0x51] = iVar4;
    *(char *)(piVar7 + 0x52) = (char)(iVar13 >> 0x1f) + '\x01';
    piVar7[0x54] = -1;
    piVar7[0x53] = iVar13;
    *(undefined1 *)(piVar7 + 0x55) = 0;
    *(undefined1 *)((int)piVar7 + 0x149) = 1;
    FUN_4a074bac(piVar7,4);
    uVar2 = 1;
    break;
  case 0x16:
    FUN_4a10913c(iVar13);
    FUN_4a071478(piVar7);
    goto LAB_4a072d2c;
  case 0x17:
    FUN_4a109944(iVar13);
    FUN_4a071478(piVar7);
    goto LAB_4a072d2c;
  case 0x18:
    if (piVar7[0x35] == 0x89) {
      FUN_4a107e90(iVar13);
    }
    else if (piVar7[0x35] == 0x88) {
      FUN_4a107ed8(iVar13);
    }
    iVar4 = FUN_4a114098(iStack_28,piVar7,iVar13);
    if (iVar4 == 0) {
      param_4 = 0;
      auStack_40[0] = 0;
      FUN_4a0737a4(piVar7,0x6f,iVar13);
    }
    else {
      uVar5 = 0x9b;
      iVar13 = FUN_4a1460d4(iVar4);
      if (iVar13 == 10) {
        uVar5 = 0x9c;
      }
      param_4 = 0;
      auStack_40[0] = 0;
      FUN_4a0737a4(piVar7,uVar5,iVar4);
    }
    goto LAB_4a072d2c;
  case 0x19:
    iVar4 = FUN_4a110878(iStack_28,piVar7,iVar9);
    if (iVar4 == 0) goto LAB_4a072c98;
    piVar7[0x38] = iVar4;
    FUN_4a071478(piVar7);
    break;
  case 0x1a:
    if (uVar8 != 0) {
      FUN_4a0d8c28(iStack_2c,5,0x30000);
    }
    piVar7[0x51] = 0x25;
    *(undefined1 *)(piVar7 + 0x52) = 1;
    piVar7[0x53] = 10000;
    piVar7[0x54] = -1;
    *(undefined1 *)(piVar7 + 0x55) = 0;
    *(undefined1 *)((int)piVar7 + 0x149) = 0;
    FUN_4a074bac(piVar7,4);
    break;
  case 0x1b:
    if (uVar8 == 0) {
      FUN_4a110aac(auStack_40,iStack_28);
      iVar4 = 0;
      if ((iStack_38 == 2) && (iVar13 = FUN_4a0e3c18(iStack_2c), iVar13 == 0)) {
        iVar13 = FUN_4a146a9c(piVar7);
        if (*(int *)(iStack_2c + 0x420) != 0) {
          iVar4 = *(int *)(*(int *)(iStack_2c + 0x420) + 8);
        }
        FUN_4a10ce2c(iStack_28,0xb3f,(int)*(short *)(iVar4 + iVar13 * 2));
      }
      FUN_4a074bac(piVar7,9);
      FUN_4a169a1c(auStack_40);
    }
    else {
      FUN_4a074bac(piVar7,8);
      FUN_4a113750(iStack_28);
    }
    break;
  case 0x1c:
    FUN_4a116b10(iStack_28,iVar9,iVar14);
    FUN_4a071478(piVar7);
    break;
  case 0x1d:
    switchD_4a11cc8c::default(uVar8,s_NPC_looking_for_work__4a0729c8);
    uVar5 = FUN_4a1419b4(iStack_2c,iVar13);
    uVar6 = FUN_4a140354(iStack_2c,uVar5);
    param_4 = 1;
    FUN_4a10fe80(iStack_28,uVar5,uVar6);
    FUN_4a071478(piVar7);
    break;
  case 0x1e:
    FUN_4a10ce2c(iStack_28,0xb3e);
    FUN_4a071478(piVar7);
    break;
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
    if (piVar7[0x38] == 0) {
      iVar13 = -1;
    }
    else {
      iVar13 = FUN_4a1460d4();
    }
    if (iVar4 == 0x20) {
      switchD_4a11cc8c::default(piVar7[0x38] != 0,PTR_s_can_t_auto_sit_without_a_chair_4a0729e0);
      if (iVar13 == 0xd) {
        FUN_4a106238(piVar7,piVar7[0x14] + 2U & 3);
      }
      else if (iVar13 == 6) {
LAB_4a072994:
        iVar4 = 3;
        goto LAB_4a072a5c;
      }
LAB_4a0729a4:
      iVar4 = 1;
    }
    else if (iVar4 == 0x1f) {
      iVar4 = 0;
    }
    else {
      if (iVar4 == 0x21) goto LAB_4a072994;
      if (iVar4 == 0x22) goto LAB_4a0729a4;
      if (iVar4 == 0x23) {
        iVar4 = 2;
      }
      else if (iVar4 == 0x24) {
        iVar4 = 4;
      }
      else if (iVar4 == 0x27) {
        iVar4 = 8;
      }
      else if (iVar4 == 0x25) {
        if (iVar13 == 0xd) {
          iVar4 = 5;
        }
        else {
          iVar4 = 6;
        }
      }
      else if (iVar4 == 0x26) {
        iVar4 = 7;
      }
      else if (iVar4 == 0x28) {
        iVar4 = 9;
      }
      else if (iVar4 == 0x2a) {
        iVar4 = 0xb;
      }
      else if (iVar4 == 0x2b) {
        iVar4 = 0xd;
      }
      else if (iVar4 == 0x2c) {
        iVar4 = 0xe;
      }
      else {
        iVar4 = 10;
      }
    }
LAB_4a072a5c:
    if (piVar7[0x32] == iVar4) goto LAB_4a072bd8;
    piVar7[0x33] = iVar4;
    FUN_4a074bac(piVar7,2);
    break;
  case 0x2d:
    if (uVar8 == 0) goto LAB_4a072bd8;
    iVar4 = FUN_4a146d54(piVar7[8]);
    if (iVar4 != 0) {
      FUN_4a1460a4(piVar7);
      iVar4 = FUN_4a142ef4();
      if ((iVar4 != 0) && (piVar7[0x35] == 0x83)) goto LAB_4a072bd8;
    }
    uVar5 = FUN_4a145f8c(piVar7);
    iVar4 = FUN_4a13fd20(uVar5,piVar7[0x35]);
    iVar13 = FUN_4a141aa4(uVar5);
    if (iVar13 < iVar4) goto LAB_4a072c98;
    param_4 = -iVar4;
    FUN_4a0d585c(uVar5);
    FUN_4a117598(piVar7[8],piVar7[0x11],piVar7[0x13]);
    FUN_4a071478(piVar7);
    break;
  case 0x2e:
    if (uVar8 == 0) goto LAB_4a072bd8;
    uVar5 = FUN_4a145f8c(piVar7);
    FUN_4a110aac(auStack_40,piVar7[8]);
    if (((iStack_38 < 2) && (iVar4 = FUN_4a13fa14(uVar5,0), iVar4 != 4)) &&
       (iVar4 = FUN_4a0e3c18(uVar5), iVar4 == 0)) {
      FUN_4a071ac4(piVar7,0);
    }
    else {
      FUN_4a071478(piVar7);
    }
    FUN_4a169a1c(auStack_40);
    break;
  case 0x2f:
    if (uVar8 != 0) {
      uVar5 = FUN_4a145f8c(piVar7);
      iVar4 = FUN_4a13feec(uVar5,0xc);
      if ((iVar4 != -1) || (iVar4 = FUN_4a13feec(uVar5,0xb), iVar4 != -1)) goto LAB_4a072c98;
    }
LAB_4a072bd8:
    FUN_4a071478(piVar7);
    break;
  case 0x30:
    FUN_4a127ce8(iStack_28,iVar13);
    FUN_4a071478(piVar7);
    break;
  case 0x31:
    uVar5 = FUN_4a145f8c(piVar7);
    iVar13 = piVar7[0x39];
    iVar4 = FUN_4a140338(uVar5,iVar13);
    if (iVar4 < 1) goto LAB_4a072c98;
    switchD_4a0de288::default(uVar5,iVar13,0xffffffff);
    FUN_4a109d38(piVar7[0x38],iVar13);
    FUN_4a071478(piVar7);
    break;
  case 0x32:
    uVar5 = FUN_4a145f8c(piVar7);
    iVar4 = FUN_4a140338(uVar5,2);
    if ((iVar4 < 1) || (iVar4 = FUN_4a140338(uVar5,3), iVar4 < 1)) goto LAB_4a072c98;
    switchD_4a0de288::default(uVar5,3,0xffffffff);
    FUN_4a109bbc(piVar7[0x38]);
    FUN_4a071478(piVar7);
    break;
  case 0x33:
    FUN_4a105ef8(iVar13);
    FUN_4a071478(piVar7);
    break;
  case 0x34:
    FUN_4a105c84(iVar13);
    FUN_4a071478(piVar7);
    break;
  case 0x35:
    iVar4 = FUN_4a1460d4(iVar13);
    switchD_4a11cc8c::default(iVar4 == 0xb,s_drinking_at_non_coffee_machine_4a072e64);
    FUN_4a108a94(iVar13);
    piVar7[0x51] = 1;
    *(undefined1 *)(piVar7 + 0x52) = 1;
    piVar7[0x54] = -1;
    piVar7[0x53] = 60000;
    *(undefined1 *)(piVar7 + 0x55) = 0;
    *(undefined1 *)((int)piVar7 + 0x149) = 0;
    FUN_4a074bac(piVar7,4);
LAB_4a072d2c:
    uVar2 = 1;
    break;
  case 0x36:
    if (uVar8 != 0) {
      FUN_4a0d8c28(iStack_2c,2,0xfffb0000);
      FUN_4a0d8c28(iStack_2c,1,0xa0000);
    }
    piVar7[0x51] = 0x54;
    *(undefined1 *)(piVar7 + 0x52) = 0;
    piVar7[0x53] = -1;
    piVar7[0x54] = -1;
    *(undefined1 *)(piVar7 + 0x55) = 0;
    *(undefined1 *)((int)piVar7 + 0x149) = 0;
    FUN_4a074bac(piVar7,4);
    break;
  case 0x37:
    if (uVar8 != 0) {
      FUN_4a0d8c28(iStack_2c,5,0x60000);
    }
    FUN_4a10913c(piVar7[0x38]);
    piVar7[0x51] = 0x59;
    *(undefined1 *)(piVar7 + 0x52) = 1;
    piVar7[0x53] = 15000;
    piVar7[0x54] = -1;
    *(undefined1 *)(piVar7 + 0x55) = 0;
    *(undefined1 *)((int)piVar7 + 0x149) = 0;
    FUN_4a074bac(piVar7,4);
  }
  FUN_4a1460a4(piVar7);
  iVar4 = FUN_4a142ef4();
  if (iVar4 == 0) {
    uVar2 = 0;
  }
  if (((uVar8 & uVar2) != 0) && (uVar2 = FUN_4a13fb44(iStack_2c,iVar9), (uVar2 & 0x200000) != 0)) {
    param_4 = piVar7[0x38];
    FUN_4a11186c(iStack_28,0x1a,piVar7);
  }
  iVar13 = FUN_4a1461c0(piVar7,2);
  iVar9 = iStack_1c;
  iVar4 = iStack_20;
  if (iVar13 == 0) {
    return;
  }
  iStack_1c = iStack_24;
  iStack_20 = param_4;
  FUN_4a1071e0(piVar7,4);
  iVar10 = -1;
  iVar13 = -1;
  switch(piVar7[0x37]) {
  case 1:
    iVar11 = FUN_4a146a9c(piVar7);
    if (iVar11 != 0) {
      iVar13 = 0x936;
    }
    break;
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xc:
  case 0x11:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x1a:
  case 0x1d:
  case 0x35:
  case 0x36:
    FUN_4a071090(piVar7,1);
    FUN_4a07171c(piVar7);
    break;
  case 0xd:
    iVar13 = 0xb4b;
    uVar5 = FUN_4a1460a4(piVar7);
    FUN_4a143170(uVar5,piVar7[0x39]);
    break;
  case 0xe:
    iVar13 = 0x974;
    break;
  case 0xf:
    iVar13 = 0x93b;
    break;
  case 0x10:
    iVar13 = 0x939;
    break;
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x37:
    FUN_4a071478(piVar7);
    break;
  case 0x19:
    if (piVar7[0x35] == 0x9d) {
      iVar13 = 0x95e;
    }
    else {
      iVar13 = 0x94e;
    }
    break;
  case 0x2d:
    iVar13 = 0x94c;
    break;
  case 0x2e:
    iVar13 = 0x966;
    break;
  case 0x2f:
    iVar13 = 0x931;
    iVar10 = 8;
    iVar11 = FUN_4a0fb748(piVar7[9]);
    if (iVar11 < 0x32) {
      iVar10 = 0x11;
    }
    break;
  case 0x31:
    iVar13 = 0x93d;
    break;
  case 0x32:
    iVar13 = 0x940;
  }
  iVar11 = FUN_4a146a9c(piVar7);
  if ((iVar11 == 0) && (*(int *)(piVar7[8] + 0x5fc) != 0)) {
    FUN_4a108d64();
  }
  if (iVar13 == -1) {
    return;
  }
  if (iVar10 != -1) {
    iStack_20 = 0;
    FUN_4a0737a4(piVar7,iVar10,0);
    return;
  }
code_r0x4a07171c:
  iStack_24 = iStack_1c;
  iStack_20 = iVar4;
  iStack_1c = iVar9;
  iVar4 = FUN_4a1461c0(piVar7,4);
  iStack_28 = FUN_4a145f8c(piVar7);
  FUN_4a107f20(piVar7,0xc);
  piVar3 = (int *)piVar7[0x38];
  iVar13 = piVar7[0x35];
  if ((piVar3 == (int *)0x0) || (iVar9 = FUN_4a146b58(piVar3,0x2000), iVar9 == 0)) {
    piVar12 = (int *)0x0;
  }
  else {
    piVar12 = (int *)piVar7[0x38];
  }
  uVar2 = FUN_4a146a9c(piVar7);
  iVar9 = 1 - uVar2;
  if (1 < uVar2) {
    iVar9 = 0;
  }
  iStack_30 = 0;
  FUN_4a0737a4(piVar7,0,0);
  uVar2 = FUN_4a13fb44(iStack_28,iVar13);
  if (iVar4 == 0) {
    if (piVar12 == (int *)0x0 || (uVar2 & 2) == 0) {
      if (iVar13 == 0x99) {
        FUN_4a10e9c8(piVar7[8]);
      }
      else if (iVar13 < 0x9a) {
        if (iVar13 == 0x76) {
LAB_4a0718dc:
          FUN_4a110ec4(piVar7[8],3);
        }
        else if (iVar13 < 0x77) {
          if (iVar13 == 4) {
            iVar10 = FUN_4a0fb748(piVar7[9]);
            if (iVar10 < 5) {
              iStack_30 = 0;
              FUN_4a0737a4(piVar7,10,0);
              return;
            }
          }
          else if (iVar13 == 0x70) {
            FUN_4a1278e8(piVar7[8],1);
          }
          else if (iVar13 == 0x74) goto LAB_4a0718dc;
        }
        else if ((iVar13 == 0x7e || iVar13 == 0x7f) || iVar13 == 0x80) {
          piVar7[0x3f] = piVar7[0x3f] & 0xfffffff7;
        }
      }
      else if (iVar13 == 0xa6) {
LAB_4a071940:
        FUN_4a116cf0(piVar7[8],piVar3);
      }
      else if (iVar13 < 0xa7) {
        if (iVar13 != 0x9e) {
          if (iVar13 == 0xa2) {
            if (iVar9 == 0) {
              piVar7[0x30] = 0;
              uVar5 = FUN_4a146a9c(piVar7);
              FUN_4a111218(piVar7[8],uVar5);
            }
          }
          else if (iVar13 == 0xa5) goto LAB_4a071940;
        }
      }
      else if (iVar13 == 0xa9) {
        FUN_4a0daefc(iStack_28,0x14);
        FUN_4a0d9d54(iStack_28,0,0x280000);
      }
      else if (iVar13 == 0xab) goto LAB_4a071940;
    }
    else {
      FUN_4a071490(piVar7,0);
      FUN_4a071490(piVar12,0);
      iVar10 = (**(code **)(*piVar12 + 0x1c))(piVar12,iVar13,piVar7);
      if (iVar10 != 0) {
        iVar10 = FUN_4a12785c(piVar7[8],piVar7[0x4e]);
        if (iVar10 != 0) {
          *(uint *)(iVar10 + 0xfc) = *(uint *)(iVar10 + 0xfc) & 0xffffffbf;
          *(undefined4 *)(iVar10 + 0x13c) = 0;
          *(undefined4 *)(iVar10 + 0x138) = 0xffffffff;
          *(undefined4 *)(iVar10 + 0x140) = 0;
        }
        piVar7[0x3f] = piVar7[0x3f] & 0xffffffbf;
        piVar7[0x4f] = 0;
        piVar7[0x4e] = -1;
        piVar7[0x50] = 0;
      }
      if (iVar9 != 0) {
        iStack_2c = FUN_4a146a9c(piVar12);
        if (iVar13 == 0x61) {
          FUN_4a0daefc(iStack_28,0x12);
          FUN_4a0dd6e4(iStack_28,iStack_2c,0x20);
          FUN_4a0dd6e4(iStack_28,iStack_2c,0x800);
          goto LAB_4a071a18;
        }
        if (iVar13 == 0x6e) {
          FUN_4a0dd6e4(iStack_28,iStack_2c,0x100);
          goto LAB_4a071a18;
        }
      }
    }
  }
  if (iVar13 == 0xa3) {
    FUN_4a107f20(piVar7,0x10);
    if (iVar4 == 0) {
      FUN_4a1071e0(piVar7,0x20);
    }
    else {
      piVar7[0x3c] = 0;
      piVar7[0x3b] = -1;
    }
  }
LAB_4a071a18:
  if (((piVar3 != (int *)0x0) && (piVar12 == (int *)0x0 && iVar4 == 0)) &&
     ((**(code **)(*piVar3 + 0x1c))(piVar3,iVar13,piVar7), iVar9 != 0)) {
    FUN_4a0dbd6c(iStack_28,piVar3[10]);
  }
  if (piVar7[0x3b] == -1) {
    return;
  }
  iVar4 = (**(code **)(*piVar7 + 0x10))(piVar7);
  if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a071a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  iStack_30 = piVar7[0x3e];
  iVar4 = piVar7[0x3b];
  iVar13 = piVar7[0x3c];
  piVar7[0x3c] = 0;
  piVar7[0x3b] = -1;
  FUN_4a0737a4(piVar7,iVar4,iVar13,piVar7[0x3d]);
  return;
switchD_4a0d3700_caseD_1:
  *(undefined4 *)(iVar4 + 0x18) = 2;
  uVar2 = *(uint *)(iVar4 + 0x24);
  if ((int)uVar2 < 0) {
    return;
  }
  iVar13 = *(int *)(*(int *)(iVar4 + 8) + 0x74);
  iVar4 = 0;
  if (iVar13 != 0) {
    iVar4 = *(int *)(iVar13 + 8);
  }
  iVar9 = 0;
  if (iVar13 == 0) {
    iVar4 = 0;
  }
  iVar4 = *(int *)(iVar4 + (uVar2 & 0xffff) * 0x14 + 0xc);
  if (iVar4 != 0) {
    iVar9 = *(int *)(iVar4 + 8);
  }
  piVar7 = *(int **)(iVar9 + (uVar2 >> 0x10) * 4);
  if (piVar7 == (int *)0x0) {
    return;
  }
  (**(code **)(*piVar7 + 0x40))(piVar7);
                    /* WARNING: Could not recover jumptable at 0x4a08673c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar7 + 0x38))(piVar7,*(code **)(*piVar7 + 0x38),0);
  return;
}



// Address: 4a111700

void FUN_4a111700(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x7c4) == 0) {
    iVar1 = FUN_4a13fb88(uVar5);
    iVar3 = param_2;
    if (iVar1 != 0) {
      iVar3 = param_2 << 4;
    }
    FUN_4a0debd0(uVar5,iVar3);
  }
  else {
    FUN_4a0debd0(uVar5,*(int *)(param_1 + 0x7c4) * 1000);
    *(undefined4 *)(param_1 + 0x7c4) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x28) + 0x450) = 1;
  }
  uVar2 = FUN_4a13f9c0(uVar5);
  uVar2 = FUN_4a0cd66c(*(undefined4 *)(param_1 + 0x7c0),uVar2,param_2,8);
  *(undefined4 *)(param_1 + 0x7c0) = uVar2;
  iVar3 = FUN_4a1356f4(*(undefined4 *)(param_1 + 0x5f8));
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x2a0) == 0xaa7 || *(int *)(param_1 + 0x2a0) == 0xaa6) {
      *(undefined4 *)(param_1 + 0x2a0) = 0xffffffff;
    }
    return;
  }
  uVar4 = FUN_4a0d6194(uVar5,0);
  if (((uVar4 & 1) != 0) && (*(int *)(param_1 + 0x2a0) == -1)) {
    *(undefined4 *)(param_1 + 0x2a4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2a8) = 0;
    *(undefined4 *)(param_1 + 0x2a0) = 0xaa6;
    *(undefined4 *)(param_1 + 0x2ac) = 0;
    iVar3 = FUN_4a06bf88(*(int *)(param_1 + 0x20) + 0x278,0xaa6,4);
    *(int *)(param_1 + 0x2b0) = iVar3 * 0x10000 + 0x50000;
    return;
  }
  if ((uVar4 & 2) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x2a0) == -1) {
    *(undefined4 *)(param_1 + 0x2a4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2a8) = 0;
    *(undefined4 *)(param_1 + 0x2a0) = 0xaa7;
    *(undefined4 *)(param_1 + 0x2ac) = 0;
    iVar3 = FUN_4a06bf88(*(int *)(param_1 + 0x20) + 0x278,0xaa7,4);
    *(int *)(param_1 + 0x2b0) = iVar3 * 0x10000 + 0x50000;
    return;
  }
  return;
}



// Address: 4a11186c

void FUN_4a11186c(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_4c [8];
  int local_44;
  int local_40;
  undefined4 local_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  local_38 = *(undefined4 *)(param_1 + 0x24);
  iStack_34 = param_1;
  local_30 = param_2;
  iStack_2c = param_3;
  iStack_28 = param_4;
  iVar1 = FUN_4a142ef4(*(undefined4 *)(param_1 + 0x28));
  FUN_4a110aac(auStack_4c,param_1);
  uVar2 = FUN_4a13fb44(local_38,local_30);
  if (local_30 == 0x1b) {
    FUN_4a0dd6e4(local_38,0,1);
  }
  iVar4 = 0;
  if (0 < local_44) {
    do {
      if (local_40 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(local_40 + 8);
      }
      iVar5 = *(int *)(iVar3 + iVar4 * 4);
      iVar3 = FUN_4a146a9c(iVar5);
    } while ((((iVar3 == 0 || iVar5 == param_4) || iVar5 == param_3) ||
             ((((uVar2 & 0x40000) != 0 && (iVar3 = FUN_4a13f8f8(local_38,iVar3), iVar3 != iVar1)) ||
              (iVar3 = FUN_4a073990(iVar5,local_30,param_3,param_4),
              iVar3 == 0 || (uVar2 & 0x800000) == 0)))) && (iVar4 = iVar4 + 1, iVar4 < local_44));
  }
  FUN_4a169a1c(auStack_4c);
  return;
}



// Address: 4a111968

void FUN_4a111968(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_4c [12];
  int local_40;
  undefined1 auStack_38 [20];
  
  iVar2 = *(int *)(param_1 + 0x28);
  uVar7 = *(undefined4 *)(iVar2 + 0x478);
  uVar9 = *(undefined4 *)(iVar2 + 0x48c);
  uVar6 = *(undefined4 *)(iVar2 + 0x470);
  uVar8 = *(undefined4 *)(iVar2 + 0x474);
  uVar10 = *(undefined4 *)(iVar2 + 0x484);
  uVar11 = *(undefined4 *)(iVar2 + 0x488);
  if (*(int *)(param_1 + 0x2f4) != 0) {
    FUN_4a16bdcc(auStack_4c,param_1 + 0x2c);
    iVar2 = 0;
    uVar6 = FUN_4a16bdcc(auStack_38,auStack_4c);
    FUN_4a145ed0(*(undefined4 *)(param_1 + 0x2f4),uVar6,0);
    FUN_4a16bef4(auStack_38);
    if (local_40 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = *(undefined4 **)(local_40 + 8);
    }
    uVar6 = FUN_4a171fac(*puVar3);
    puVar1 = PTR_DAT_4a111af8;
    uVar6 = FUN_4a17211c(uVar6,*(undefined4 *)PTR_DAT_4a111af8);
    if (local_40 != 0) {
      iVar2 = *(int *)(local_40 + 8);
    }
    uVar8 = 0x41800000;
    uVar7 = FUN_4a171fac(*(undefined4 *)(iVar2 + 8));
    uVar7 = FUN_4a17211c(uVar7,*(undefined4 *)puVar1);
    if (*(char *)(param_1 + 0x632) != '\0') {
      iVar2 = *(int *)(param_1 + 0x1d8);
      if (iVar2 == 2) {
        uVar9 = 1000;
      }
      else {
        uVar9 = 300;
      }
      uVar9 = FUN_4a171fac(uVar9);
      if (iVar2 == 2) {
        uVar12 = 0x5a;
      }
      else {
        uVar12 = 0x21;
      }
      FUN_4a171a94(uVar11,0x42b40000);
      uVar4 = FUN_4a0d4978();
      uVar12 = FUN_4a171fac(uVar12);
      uVar5 = FUN_4a002f08(uVar4);
      FUN_4a17211c(uVar5,uVar12);
      uVar5 = FUN_4a171e1c();
      uVar4 = FUN_4a002d64(uVar4);
      FUN_4a17211c(uVar4,uVar12);
      uVar12 = FUN_4a171e1c();
      uVar4 = FUN_4a171fac(uVar5);
      uVar6 = FUN_4a171a94(uVar4,uVar6);
      uVar12 = FUN_4a171fac(uVar12);
      uVar7 = FUN_4a171a94(uVar12,uVar7);
    }
    FUN_4a16bef4(auStack_4c);
  }
  *(undefined4 *)(param_1 + 0x2c0) = uVar6;
  *(undefined4 *)(param_1 + 0x2c4) = uVar8;
  *(undefined4 *)(param_1 + 0x2c8) = uVar7;
  *(undefined4 *)(param_1 + 0x2cc) = uVar10;
  *(undefined4 *)(param_1 + 0x2d0) = uVar11;
  *(undefined4 *)(param_1 + 0x2d4) = uVar9;
  return;
}



// Address: 4a111afc

void FUN_4a111afc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar8 = *(int *)(param_1 + 0x20);
  iVar9 = iVar8 + 0x278;
  iVar10 = iVar8 + 0x128;
  iVar1 = FUN_4a06bf88(iVar9,0xb55,3);
  iVar2 = FUN_4a06be4c(iVar9,3);
  iVar3 = FUN_4a13caa0(*(undefined4 *)(param_1 + 0x20));
  iVar3 = iVar3 - (iVar2 + 10);
  iVar4 = FUN_4a13caa0(iVar8);
  uVar5 = FUN_4a171fac(iVar4 >> 1);
  iVar4 = FUN_4a13ca78(iVar8);
  uVar6 = FUN_4a171fac(iVar4 >> 1);
  FUN_4a09f664(iVar10,param_3,uVar6,uVar5,0x3f800000,0x3f800000,0x3f800000,0);
  uVar5 = FUN_4a171fac(iVar2 + 10);
  uVar6 = FUN_4a171fac(iVar1 + 0x14);
  uVar7 = FUN_4a171fac(iVar3 + -5);
  FUN_4a09ff60(iVar10,0x154,0x155,0x156,0x157,0x158,0x159,0x15a,0x15b,0x15c,0x40c00000,uVar7,uVar6,
               uVar5,0x3f800000);
  FUN_4a09f3a4(iVar10,param_2);
  FUN_4a06b074(iVar9,param_2,0xb55,3,0x10,iVar3,9);
  return;
}



// Address: 4a111c50

void FUN_4a111c50(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined1 auStack_58 [12];
  int local_4c;
  undefined1 auStack_44 [12];
  int local_38;
  undefined1 auStack_30 [20];
  
  FUN_4a16be24(auStack_44,3);
  iVar6 = 0;
  FUN_4a16be24(auStack_58,3);
  uVar1 = FUN_4a16bdcc(auStack_30,auStack_44);
  FUN_4a13edec(*(undefined4 *)(param_1 + 0x940),uVar1,param_3,1);
  FUN_4a16bef4(auStack_30);
  bVar9 = local_38 != 0;
  if (bVar9) {
    iVar2 = *(int *)(local_38 + 8);
  }
  else {
    iVar2 = 0;
  }
  uVar1 = *(undefined4 *)(iVar2 + 8);
  if (bVar9) {
    iVar2 = *(int *)(local_38 + 8);
  }
  else {
    iVar2 = 0;
  }
  uVar7 = *(undefined4 *)(iVar2 + 4);
  if (bVar9) {
    puVar3 = *(undefined4 **)(local_38 + 8);
  }
  else {
    puVar3 = (undefined4 *)0x0;
  }
  uVar8 = *puVar3;
  uVar4 = FUN_4a16bdcc(auStack_30,auStack_58);
  FUN_4a0f2970(*(undefined4 *)(param_1 + 0x28),uVar4,uVar8,uVar7,uVar1);
  FUN_4a16bef4(auStack_30);
  if (local_4c != 0) {
    puVar3 = *(undefined4 **)(local_4c + 8);
  }
  else {
    puVar3 = (undefined4 *)0x0;
  }
  if (local_4c != 0) {
    iVar2 = *(int *)(local_4c + 8);
  }
  else {
    iVar2 = 0;
  }
  uVar1 = *(undefined4 *)(iVar2 + 4);
  if (*(int *)(param_2 + 0xc) == 0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = *(undefined4 **)(*(int *)(param_2 + 0xc) + 8);
  }
  *puVar5 = *puVar3;
  if (*(int *)(param_2 + 0xc) != 0) {
    iVar6 = *(int *)(*(int *)(param_2 + 0xc) + 8);
  }
  *(undefined4 *)(iVar6 + 4) = uVar1;
  FUN_4a16bef4(auStack_58);
  FUN_4a16bef4(auStack_44);
  return;
}



// Address: 4a111d74

void FUN_4a111d74(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  undefined1 auStack_78 [20];
  undefined1 auStack_64 [12];
  int local_58;
  int *local_50;
  undefined1 auStack_4c [20];
  undefined1 auStack_38 [20];
  
  uVar1 = thunk_FUN_4a161570(0x10);
  uVar2 = FUN_4a098414(0x35);
  local_50 = (int *)FUN_4a0bfc44(uVar1,uVar2);
  if (local_50 != (int *)0x0) {
    (**(code **)(*local_50 + 0xc))(local_50);
  }
  iVar3 = FUN_4a0bf920(local_50);
  iVar4 = FUN_4a16be24(auStack_38,iVar3);
  uVar1 = *(undefined4 *)(iVar4 + 8);
  piVar8 = *(int **)(iVar4 + 0xc);
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0xc))(piVar8);
  }
  (**(code **)(*(int *)(param_1 + 0x8dc) + 0x1c))((int *)(param_1 + 0x8dc));
  *(undefined4 *)(param_1 + 0x8e4) = uVar1;
  *(int **)(param_1 + 0x8e8) = piVar8;
  FUN_4a16bef4(auStack_38);
  iVar4 = FUN_4a168d38(auStack_4c,iVar3);
  uVar1 = *(undefined4 *)(iVar4 + 8);
  piVar8 = *(int **)(iVar4 + 0xc);
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0xc))(piVar8);
  }
  (**(code **)(*(int *)(param_1 + 0x8f0) + 0x1c))((int *)(param_1 + 0x8f0));
  *(undefined4 *)(param_1 + 0x8f8) = uVar1;
  *(int **)(param_1 + 0x8fc) = piVar8;
  FUN_4a168e44(auStack_4c);
  iVar4 = FUN_4a168d38(auStack_4c,iVar3);
  uVar1 = *(undefined4 *)(iVar4 + 8);
  piVar8 = *(int **)(iVar4 + 0xc);
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0xc))(piVar8);
  }
  (**(code **)(*(int *)(param_1 + 0x904) + 0x1c))((int *)(param_1 + 0x904));
  *(undefined4 *)(param_1 + 0x90c) = uVar1;
  *(int **)(param_1 + 0x910) = piVar8;
  FUN_4a168e44(auStack_4c);
  iVar4 = FUN_4a168d38(auStack_4c,iVar3);
  uVar1 = *(undefined4 *)(iVar4 + 8);
  piVar8 = *(int **)(iVar4 + 0xc);
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0xc))(piVar8);
  }
  (**(code **)(*(int *)(param_1 + 0x918) + 0x1c))((int *)(param_1 + 0x918));
  *(undefined4 *)(param_1 + 0x920) = uVar1;
  *(int **)(param_1 + 0x924) = piVar8;
  FUN_4a168e44(auStack_4c);
  FUN_4a16be24(auStack_64,6);
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      iVar5 = FUN_4a0bf62c(local_50);
      if (*(int *)(param_1 + 0x8e8) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(param_1 + 0x8e8) + 8);
      }
      *(int *)(iVar6 + iVar4 * 4) = iVar5;
      if (local_58 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(local_58 + 8);
      }
      piVar8 = (int *)(iVar6 + iVar5 * 4);
      *piVar8 = *piVar8 + 1;
      iVar5 = FUN_4a0bf920(local_50);
      if (*(int *)(param_1 + 0x8fc) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(param_1 + 0x8fc) + 8);
      }
      piVar8 = (int *)(iVar6 + iVar4 * 0x14);
      iVar6 = FUN_4a16be24(auStack_78,iVar5);
      iVar10 = *(int *)(iVar6 + 8);
      piVar9 = *(int **)(iVar6 + 0xc);
      if (piVar9 != (int *)0x0) {
        (**(code **)(*piVar9 + 0xc))(piVar9);
      }
      (**(code **)(*piVar8 + 0x1c))(piVar8);
      piVar8[2] = iVar10;
      piVar8[3] = (int)piVar9;
      FUN_4a16bef4(auStack_78);
      if (*(int *)(param_1 + 0x910) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(param_1 + 0x910) + 8);
      }
      piVar8 = (int *)(iVar6 + iVar4 * 0x14);
      iVar6 = FUN_4a16be24(auStack_78,iVar5);
      iVar10 = *(int *)(iVar6 + 8);
      piVar9 = *(int **)(iVar6 + 0xc);
      if (piVar9 != (int *)0x0) {
        (**(code **)(*piVar9 + 0xc))(piVar9);
      }
      (**(code **)(*piVar8 + 0x1c))(piVar8);
      piVar8[2] = iVar10;
      piVar8[3] = (int)piVar9;
      FUN_4a16bef4(auStack_78);
      iVar6 = 0;
      iVar10 = 1;
      if (1 < iVar5 + 1) {
        do {
          uVar1 = FUN_4a0bfbdc(local_50);
          if (*(int *)(param_1 + 0x8fc) == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(*(int *)(param_1 + 0x8fc) + 8);
          }
          iVar7 = *(int *)(iVar7 + iVar4 * 0x14 + 0xc);
          if (iVar7 == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(iVar7 + 8);
          }
          *(undefined4 *)(iVar7 + iVar6 * 4) = uVar1;
          uVar1 = FUN_4a0bfbdc(local_50);
          iVar10 = iVar10 + 1;
          if (*(int *)(param_1 + 0x910) == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(*(int *)(param_1 + 0x910) + 8);
          }
          iVar7 = *(int *)(iVar7 + iVar4 * 0x14 + 0xc);
          if (iVar7 == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(iVar7 + 8);
          }
          *(undefined4 *)(iVar7 + iVar6 * 4) = uVar1;
          iVar6 = iVar6 + 1;
        } while (iVar10 < iVar5 + 1);
      }
      iVar5 = FUN_4a0bf920(local_50);
      if (*(int *)(param_1 + 0x924) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(param_1 + 0x924) + 8);
      }
      piVar8 = (int *)(iVar6 + iVar4 * 0x14);
      iVar6 = FUN_4a16be24(auStack_78,iVar5);
      iVar10 = *(int *)(iVar6 + 8);
      piVar9 = *(int **)(iVar6 + 0xc);
      if (piVar9 != (int *)0x0) {
        (**(code **)(*piVar9 + 0xc))(piVar9);
      }
      (**(code **)(*piVar8 + 0x1c))(piVar8);
      piVar8[2] = iVar10;
      piVar8[3] = (int)piVar9;
      FUN_4a16bef4(auStack_78);
      iVar10 = 0;
      iVar6 = 1;
      if (1 < iVar5 + 1) {
        do {
          uVar1 = FUN_4a0bfbdc(local_50);
          iVar6 = iVar6 + 1;
          if (*(int *)(param_1 + 0x924) == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(*(int *)(param_1 + 0x924) + 8);
          }
          iVar7 = *(int *)(iVar7 + iVar4 * 0x14 + 0xc);
          if (iVar7 == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(iVar7 + 8);
          }
          *(undefined4 *)(iVar7 + iVar10 * 4) = uVar1;
          iVar10 = iVar10 + 1;
        } while (iVar6 < iVar5 + 1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  if ((local_50 != (int *)0x0) && (iVar4 = (**(code **)(*local_50 + 8))(local_50), iVar4 != 0)) {
    (**(code **)(*local_50 + 4))(local_50);
  }
  iVar4 = FUN_4a168d38(auStack_4c,6);
  uVar1 = *(undefined4 *)(iVar4 + 8);
  piVar8 = *(int **)(iVar4 + 0xc);
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0xc))(piVar8);
  }
  (**(code **)(*(int *)(param_1 + 0x92c) + 0x1c))((int *)(param_1 + 0x92c));
  *(undefined4 *)(param_1 + 0x934) = uVar1;
  *(int **)(param_1 + 0x938) = piVar8;
  FUN_4a168e44(auStack_4c);
  iVar5 = 0;
  iVar4 = 0;
  do {
    iVar6 = 0;
    if (local_58 != 0) {
      iVar6 = *(int *)(local_58 + 8);
    }
    iVar5 = iVar5 + *(int *)(iVar6 + iVar4 * 4);
    iVar6 = 0;
    if (*(int *)(param_1 + 0x938) != 0) {
      iVar6 = *(int *)(*(int *)(param_1 + 0x938) + 8);
    }
    piVar8 = (int *)(iVar6 + iVar4 * 0x14);
    iVar6 = FUN_4a16be24(auStack_78,iVar5);
    iVar10 = *(int *)(iVar6 + 8);
    piVar9 = *(int **)(iVar6 + 0xc);
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 0xc))(piVar9);
    }
    (**(code **)(*piVar8 + 0x1c))(piVar8);
    piVar8[2] = iVar10;
    piVar8[3] = (int)piVar9;
    FUN_4a16bef4(auStack_78);
    iVar10 = 0;
    iVar6 = 0;
    if (0 < iVar3) {
      do {
        if (*(int *)(param_1 + 0x8e8) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(*(int *)(param_1 + 0x8e8) + 8);
        }
        if (*(int *)(iVar7 + iVar6 * 4) <= iVar4) {
          if (*(int *)(param_1 + 0x938) == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(*(int *)(param_1 + 0x938) + 8);
          }
          iVar7 = *(int *)(iVar7 + iVar4 * 0x14 + 0xc);
          if (iVar7 == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(iVar7 + 8);
          }
          *(int *)(iVar7 + iVar10 * 4) = iVar4;
          iVar10 = iVar10 + 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar3);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  FUN_4a16bef4(auStack_64);
  return;
}



// Address: 4a11238c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a11238c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  
  if ((*(uint *)(param_1 + 0xa64) & 0x20) == 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x20);
  iVar4 = iVar3 + 0x128;
  iVar5 = *(int *)(param_1 + 0x24);
  bVar20 = *(char *)(param_1 + 0x21c) != '\0';
  iVar1 = 0;
  iVar6 = iVar5;
  if (bVar20) {
    iVar6 = *(int *)(param_1 + 0x220);
    iVar1 = DAT_4a1126c0;
  }
  iVar7 = FUN_4a146da8(param_1);
  puVar2 = PTR_DAT_4a1126c4;
  uVar8 = FUN_4a0bbd68(*(undefined4 *)PTR_DAT_4a1126c4,(iVar7 >> 1) + -6,2);
  uVar9 = FUN_4a0bbd68(*(undefined4 *)puVar2,0xb,2);
  FUN_4a09f9c8(iVar4,0x171);
  iVar10 = FUN_4a171e1c();
  uVar11 = FUN_4a09f9c8(*(int *)(param_1 + 0x20) + 0x128,0x172);
  FUN_4a17295c(uVar11,1);
  iVar12 = FUN_4a171e1c();
  iVar13 = FUN_4a0bbe00(*(undefined4 *)puVar2,0x32,2);
  iVar19 = iVar13 + 0x17;
  FUN_4a171fac(iVar7);
  iVar18 = iVar13 + (iVar12 >> 2);
  FUN_4a171fac(iVar18);
  FUN_4a171fac(uVar8);
  FUN_4a0a02bc(iVar4,0x172);
  FUN_4a171fac(iVar18 + (iVar12 >> 1));
  FUN_4a0a02bc(iVar4,0x172);
  iVar18 = 0;
  iVar12 = 0;
  do {
    iVar14 = FUN_4a141a80(*(undefined4 *)(param_1 + 0x24),iVar12);
    if (iVar14 != -1) {
      iVar18 = iVar18 + 1;
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 < 6);
  if (0 < iVar18) {
    uVar8 = FUN_4a0bbd68(*(undefined4 *)PTR_DAT_4a1126c4,iVar7 + -0x14,2);
    uVar11 = FUN_4a09f9c8(*(int *)(param_1 + 0x20) + 0x128,0x172);
    FUN_4a17295c(uVar11,1);
    iVar7 = FUN_4a171e1c();
    uVar11 = FUN_4a171fac(iVar13 + (iVar7 >> 1));
    uVar8 = FUN_4a171fac(uVar8);
    if (bVar20 && iVar1 < iVar6) {
      uVar17 = 0xb2;
    }
    else {
      uVar17 = 0xb3;
    }
    FUN_4a09f664(iVar4,uVar17,uVar8,uVar11);
  }
  FUN_4a09f3a4(iVar4,param_2);
  iVar7 = 0;
  do {
    iVar12 = FUN_4a141a80(iVar5,iVar7);
    if (iVar12 != -1) {
      uVar11 = FUN_4a140298(iVar5,iVar12);
      uVar15 = FUN_4a13f9ac(iVar5,iVar12);
      uVar8 = 0x171;
      if ((uVar15 & 1) != 0) {
        uVar8 = 0x170;
      }
      uVar17 = FUN_4a171fac(iVar19);
      uVar16 = FUN_4a171fac(uVar9);
      FUN_4a09f664(iVar4,uVar8,uVar16,uVar17);
      if (bVar20 && iVar1 < iVar6) {
        FUN_4a06b074(iVar3 + 0x278,param_2,uVar11,3);
      }
      iVar19 = iVar19 + iVar10 + -4;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 6);
  return;
}



// Address: 4a1126c8

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

void FUN_4a1126c8(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar14 = *(int *)(param_1 + 0x20);
  iVar2 = iVar14 + 0x278;
  iVar3 = iVar14 + 0x128;
  iVar4 = FUN_4a13ca78(iVar14);
  iVar5 = FUN_4a13caa0(iVar14);
  FUN_4a0ef16c(*(undefined4 *)(param_1 + 0x28),param_2);
  FUN_4a041910(1);
  FUN_4a0fe1e0(iVar14,param_2);
  FUN_4a0bbb28(*(undefined4 *)PTR_DAT_4a112d1c);
  puVar1 = PTR_DAT_4a0ce0d8;
  iVar6 = *(int *)(param_1 + 0x6e4);
  if (iVar6 == -1) {
    FUN_4a0bbb28(*(undefined4 *)PTR_DAT_4a0ce0d8);
    FUN_4a08a39c(*(undefined4 *)(param_1 + 0x168),param_2);
    iVar2 = *(int *)puVar1;
    *(undefined1 *)(*(int *)PTR_DAT_4a0bbce8 + 0xc) = 0;
    host_glMatrixMode_arm(0x1700);
    FUN_4a150724();
    *(undefined4 *)(iVar2 + 8) = 0x3f800000;
    return;
  }
  iVar5 = iVar5 + -0x122 >> 1;
  iVar4 = iVar4 + -0x180 >> 1;
  iVar7 = FUN_4a13ca78(iVar14);
  iVar8 = FUN_4a13caa0(iVar14);
  iVar9 = FUN_4a06be4c(iVar2,3);
  FUN_4a171fac(iVar8 >> 1);
  FUN_4a171fac((iVar7 >> 1) + 7);
  FUN_4a0a050c(iVar3,0x132);
  FUN_4a171fac(iVar5 + 0x48);
  FUN_4a171fac(iVar4 + 0x1d);
  FUN_4a09ff60(iVar3,0xe9,0xea,0xeb);
  iVar7 = FUN_4a13ca78(iVar14);
  iVar14 = FUN_4a13ca78(iVar14);
  uVar10 = FUN_4a0cb6c4(param_1,0x40);
  uVar11 = FUN_4a0cb6c4(param_1,0x20);
  FUN_4a0fa6e8(uVar10,iVar3,(iVar7 >> 1) + -0x30,iVar5 + 0x102);
  FUN_4a0fa6e8(uVar11,iVar3,(iVar14 >> 1) + 0x30,iVar5 + 0x102);
  uVar10 = FUN_4a13fad8(*(undefined4 *)(param_1 + 0x24),iVar6);
  uVar11 = FUN_4a171fac(iVar5 + 0x1c);
  uVar12 = FUN_4a171fac(iVar4 + 0x165);
  FUN_4a09f664(iVar3,uVar10,uVar12,uVar11);
  FUN_4a09f3a4(iVar3,param_2);
  uVar10 = *(undefined4 *)(param_1 + 0x6e8);
  uVar13 = FUN_4a14076c(*(undefined4 *)(param_1 + 0x24),iVar6,uVar10);
  uVar11 = FUN_4a06c410(iVar2);
  iVar4 = 0;
  iVar3 = 0;
  do {
    if ((*(uint *)(PTR_DAT_4a112d20 + iVar3 * 4) & uVar13) != 0) {
      if (0 < iVar4) {
        FUN_4a06ca88(iVar2,&DAT_4a112d24);
      }
      FUN_4a06cbe8(iVar2,*(undefined4 *)(PTR_DAT_4a112d28 + iVar3 * 4));
      iVar4 = iVar4 + 1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 7);
  FUN_4a06b694(iVar2,0xfffffff5,uVar11);
  FUN_4a06b074(iVar2,param_2,0xabc,3);
  FUN_4a06cd2c(iVar2,param_2,0,0xfffffff5);
  uVar11 = FUN_4a06c410(iVar2);
  uVar12 = FUN_4a141510(*(undefined4 *)(param_1 + 0x24),iVar6,uVar10);
  FUN_4a06cfb0(iVar2,uVar12);
  FUN_4a06cbe8(iVar2,0xac6);
  uVar12 = FUN_4a141090(*(undefined4 *)(param_1 + 0x24),iVar6,uVar10);
  FUN_4a06cfb0(iVar2,uVar12);
  FUN_4a06b074(iVar2,param_2,0xac5,3);
  FUN_4a06afd0(iVar2,param_2,uVar11,3);
  FUN_4a06b074(iVar2,param_2,0xa9d,6);
  FUN_4a06b074(iVar2,param_2,0xa9f,4);
  FUN_4a06b074(iVar2,param_2,0xab6,3);
  uVar11 = FUN_4a140710(*(undefined4 *)(param_1 + 0x24),iVar6);
  FUN_4a06cd2c(iVar2,param_2,0,uVar11);
  uVar11 = FUN_4a171fac(iVar9);
  uVar11 = FUN_4a17211c(uVar11,0x3fc00000);
  uVar12 = FUN_4a171fac(iVar5 + 0x48 + (iVar9 * -7 + 0x5a >> 1));
  FUN_4a171a94(uVar12,uVar11);
  FUN_4a171e1c();
  FUN_4a06b074(iVar2,param_2,0xab7,3);
  uVar11 = FUN_4a1414dc(*(undefined4 *)(param_1 + 0x24),iVar6,uVar10);
  FUN_4a06cd2c(iVar2,param_2,0,uVar11);
  uVar10 = FUN_4a140c1c(*(undefined4 *)(param_1 + 0x24),iVar6,uVar10);
  uVar11 = FUN_4a06c410(iVar2);
  FUN_4a06c86c(iVar2,uVar10);
  FUN_4a06b074(iVar2,param_2,0xab8,3);
  FUN_4a06afd0(iVar2,param_2,uVar11,3);
  uVar10 = FUN_4a1407a0(*(undefined4 *)(param_1 + 0x24),iVar6);
  FUN_4a06b074(iVar2,param_2,0xaba,3);
  iVar3 = FUN_4a143ac8(*(undefined4 *)(param_1 + 0x28),uVar10);
  FUN_4a06b074(iVar2,param_2,*(undefined4 *)(iVar3 + 0xc),3);
  iVar4 = FUN_4a13fac4(*(undefined4 *)(param_1 + 0x24),iVar6);
  FUN_4a06b074(iVar2,param_2,0xabb,3);
  iVar5 = *(int *)(*(int *)(param_1 + 0x24) + 0x420);
  iVar3 = 0;
  if (iVar5 != 0) {
    iVar3 = *(int *)(iVar5 + 8);
  }
  FUN_4a06b074(iVar2,param_2,(int)*(short *)(iVar3 + iVar4 * 2),3);
  FUN_4a0bbcb4(*(undefined4 *)PTR_DAT_4a112d1c);
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



// Address: 4a112db8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a112db8(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_4a0ef16c(*(undefined4 *)(param_1 + 0x28));
  if (*(int *)(param_1 + 0x7ec) == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x7f4);
  if (iVar2 == 0) {
    FUN_4a11d254(param_1,param_2);
    FUN_4a11db28(param_1,param_2);
  }
  else if (iVar2 == 1) {
    FUN_4a041910(1);
    FUN_4a11d254(param_1,param_2);
    FUN_4a11dcec(param_1,param_2);
    FUN_4a041910(0);
  }
  else if (iVar2 == 2) {
    FUN_4a11d254(param_1,param_2);
  }
  puVar1 = PTR_DAT_4a112ee8;
  if (*(char *)(param_1 + 0x67c) != '\0') {
    FUN_4a0bbb28(*(undefined4 *)PTR_DAT_4a112ee8);
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
    iVar2 = *(int *)puVar1;
    *(undefined1 *)(*(int *)PTR_DAT_4a0bbce8 + 0xc) = 0;
    host_glMatrixMode_arm(0x1700);
    FUN_4a150724();
    *(undefined4 *)(iVar2 + 8) = 0x3f800000;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a112e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a112eec

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a112eec(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
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
  int iVar17;
  undefined4 uVar18;
  int iVar19;
  undefined4 uVar20;
  int iVar21;
  undefined1 auStack_80 [12];
  int iStack_74;
  undefined1 auStack_6c [20];
  undefined1 auStack_58 [8];
  int iStack_50;
  int iStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  if (*(int *)(param_1 + 0x1d8) == 2) {
    iStack_38 = *(int *)(param_1 + 0x20) + 0x278;
    iStack_3c = *(int *)(param_1 + 0x20) + 0x128;
    uStack_40 = *(undefined4 *)(param_1 + 0x28);
    uStack_44 = *(undefined4 *)(param_1 + 0x24);
    iStack_2c = param_1;
    uStack_28 = param_2;
    FUN_4a10ca70(auStack_58,param_1);
    iVar17 = 0;
    if (0 < iStack_50) {
      do {
        iVar1 = 0;
        if (iStack_4c != 0) {
          iVar1 = *(int *)(iStack_4c + 8);
        }
        iVar19 = *(int *)(iVar1 + iVar17 * 4);
        uVar18 = *(undefined4 *)(iVar19 + 0x28);
        iVar1 = FUN_4a146b58(iVar19,0x80);
        if ((iVar1 != 0) && (iVar1 = FUN_4a1406b8(uStack_44,uVar18), iVar1 != 0)) {
          FUN_4a16bdcc(auStack_80,param_1 + 0x1ac);
          iVar1 = 0;
          uVar18 = FUN_4a16bdcc(auStack_6c,auStack_80);
          FUN_4a145ed0(iVar19,uVar18,0);
          FUN_4a16bef4(auStack_6c);
          if (iStack_74 != 0) {
            puVar2 = *(undefined4 **)(iStack_74 + 8);
          }
          else {
            puVar2 = (undefined4 *)0x0;
          }
          uVar18 = *puVar2;
          if (iStack_74 != 0) {
            iVar3 = *(int *)(iStack_74 + 8);
          }
          else {
            iVar3 = 0;
          }
          uVar20 = *(undefined4 *)(iVar3 + 4);
          uVar4 = FUN_4a16bdcc(auStack_6c,auStack_80);
          FUN_4a0f2970(uStack_40,uVar4,uVar18,uVar20);
          FUN_4a16bef4(auStack_6c);
          if (iStack_74 != 0) {
            piVar5 = *(int **)(iStack_74 + 8);
          }
          else {
            piVar5 = (int *)0x0;
          }
          iVar3 = *piVar5;
          if (iStack_74 != 0) {
            iVar1 = *(int *)(iStack_74 + 8);
          }
          iVar21 = *(int *)(iVar1 + 4);
          uVar18 = FUN_4a1460f8(iVar19);
          FUN_4a06c040(iStack_38,0x13,uVar18,3);
          iVar1 = FUN_4a06cf80(iStack_38,0x13);
          iVar19 = FUN_4a06be4c(iStack_38,3);
          iVar1 = iVar1 * iVar19 + 10;
          uVar18 = FUN_4a171fac(iVar3 + -0x6e);
          uVar4 = FUN_4a171fac(iVar21 - iVar1);
          uVar20 = FUN_4a171fac(iVar1);
          uVar6 = FUN_4a09f974(iStack_3c,0x89);
          uVar7 = FUN_4a09f974(iStack_3c,0x8c);
          uVar8 = FUN_4a09f974(iStack_3c,0x8f);
          uVar9 = FUN_4a09f974(iStack_3c,0x92);
          uVar10 = FUN_4a09f974(iStack_3c,0x95);
          uVar11 = FUN_4a09f9c8(iStack_3c,0x89);
          uVar12 = FUN_4a09f9c8(iStack_3c,0x8a);
          uVar13 = FUN_4a09f9c8(iStack_3c,0x8b);
          uVar14 = FUN_4a09f9c8(iStack_3c,0x91);
          uVar15 = FUN_4a17295c(uVar6,0xffffffff);
          uVar15 = FUN_4a171a94(uVar15,uVar18);
          uVar16 = FUN_4a1725c0(0x42dc0000,uVar6);
          uVar16 = FUN_4a1725c0(uVar16,uVar10);
          uVar16 = FUN_4a1725c0(uVar16,uVar8);
          uVar16 = FUN_4a17295c(uVar16,0xffffffff);
          uVar8 = FUN_4a17295c(uVar8,0xffffffff);
          uStack_30 = FUN_4a171a94(uVar18,uVar6);
          uVar6 = FUN_4a171a94(uStack_30,uVar16);
          uVar6 = FUN_4a171a94(uVar6,uVar8);
          uVar8 = FUN_4a17295c(uVar10,0xffffffff);
          uStack_34 = FUN_4a171a94(uVar18,0x42dc0000);
          uVar18 = FUN_4a1725c0(uStack_34,uVar8);
          FUN_4a171bb8(uVar16,uVar7);
          uVar7 = FUN_4a17295c(uVar16,0xffffffff);
          uVar8 = FUN_4a171a94(uStack_30,uVar7);
          FUN_4a171bb8(uVar16,uVar9);
          uVar9 = FUN_4a1725c0(uStack_34,uVar10);
          uVar7 = FUN_4a1725c0(uVar9,uVar7);
          uVar9 = FUN_4a17295c(uVar11,0xffffffff);
          uVar9 = FUN_4a171a94(uVar9,uVar4);
          uVar10 = FUN_4a1725c0(uVar20,uVar11);
          uVar10 = FUN_4a1725c0(uVar10,uVar13);
          uVar16 = FUN_4a17295c(uVar10,0xffffffff);
          uVar11 = FUN_4a171a94(uVar4,uVar11);
          uVar11 = FUN_4a171a94(uVar11,uVar16);
          FUN_4a171bb8(uVar10,uVar12);
          uVar10 = FUN_4a17295c(uVar13,0xffffffff);
          uVar4 = FUN_4a171a94(uVar4,uVar20);
          uVar4 = FUN_4a1725c0(uVar4,uVar10);
          uVar20 = FUN_4a09f9c8(iStack_3c,0x91);
          uVar20 = FUN_4a1725c0(uVar20,uVar13);
          uVar20 = FUN_4a17295c(uVar20,0xffffffff);
          uVar10 = FUN_4a171a94(uVar4,0x3f800000);
          uVar20 = FUN_4a171a94(uVar10,uVar20);
          uVar10 = FUN_4a171a94(uVar14,0x40000000);
          FUN_4a171bb8(uVar10,uVar14);
          FUN_4a09f664(iStack_3c,0x89,uVar15,uVar9);
          FUN_4a09f664(iStack_3c,0x8c,uVar8,uVar9);
          FUN_4a09f664(iStack_3c,0x8f,uVar6,uVar9);
          FUN_4a09f664(iStack_3c,0x92,uVar7,uVar9);
          FUN_4a09f664(iStack_3c,0x95,uVar18,uVar9);
          FUN_4a09f664(iStack_3c,0x8a,uVar15,uVar11);
          FUN_4a09f664(iStack_3c,0x8d,uVar8,uVar11);
          FUN_4a09f664(iStack_3c,0x90,uVar6,uVar11);
          FUN_4a09f664(iStack_3c,0x93,uVar7,uVar11);
          FUN_4a09f664(iStack_3c,0x96,uVar18,uVar11);
          FUN_4a09f664(iStack_3c,0x8b,uVar15,uVar4);
          FUN_4a09f664(iStack_3c,0x8e,uVar8,uVar4);
          FUN_4a09f664(iStack_3c,0x91,uVar6,uVar20);
          FUN_4a09f664(iStack_3c,0x94,uVar7,uVar4);
          FUN_4a09f664(iStack_3c,0x97,uVar18,uVar4);
          FUN_4a09f3a4(iStack_3c,uStack_28);
          FUN_4a06cc34(iStack_38,uStack_28,0x13,3);
          FUN_4a16bef4(auStack_80);
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 < iStack_50);
    }
    FUN_4a16a5f4(auStack_58);
    return;
  }
  return;
}



// Address: 4a113618

/* WARNING: Removing unreachable block (ram,0x4a08cadc) */
/* WARNING: Removing unreachable block (ram,0x4a086ecc) */
/* WARNING: Removing unreachable block (ram,0x4a08cad8) */
/* WARNING: Removing unreachable block (ram,0x4a08caf4) */
/* WARNING: Removing unreachable block (ram,0x4a086ec0) */
/* WARNING: Removing unreachable block (ram,0x4a086ec4) */
/* WARNING: Removing unreachable block (ram,0x4a086ec8) */
/* WARNING: Removing unreachable block (ram,0x4a086eec) */
/* WARNING: Removing unreachable block (ram,0x4a086ef0) */
/* WARNING: Removing unreachable block (ram,0x4a086ef4) */
/* WARNING: Removing unreachable block (ram,0x4a086ef8) */
/* WARNING: Removing unreachable block (ram,0x4a086efc) */
/* WARNING: Removing unreachable block (ram,0x4a08cad4) */
/* WARNING: Removing unreachable block (ram,0x4a08cae8) */
/* WARNING: Removing unreachable block (ram,0x4a08cb2c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a113618(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  FUN_4a1161d0(param_1,8);
  FUN_4a089430(*(undefined4 *)(param_1 + 0x6dc),param_2);
  if (param_2 != 0) {
    return;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  if ((*(char *)(param_1 + 0x1dc) == '\0') && (*(char *)(param_1 + 0x632) != '\0')) {
    if ((*(int *)(param_1 + 0x674) != 0) &&
       (iVar3 = FUN_4a146b58(*(int *)(param_1 + 0x674),0x2000), iVar3 != 0)) {
      iVar3 = FUN_4a146a9c(*(undefined4 *)(param_1 + 0x674));
      goto LAB_4a1136a8;
    }
  }
  else {
    iVar3 = FUN_4a141268(uVar5);
    if (iVar3 != 0) {
      iVar3 = FUN_4a13f8d0(uVar5);
      goto LAB_4a1136a8;
    }
  }
  iVar3 = -1;
LAB_4a1136a8:
  iVar4 = *(int *)(param_1 + 0x6dc);
  iVar1 = FUN_4a0ff494();
  iVar1 = *(int *)(iVar1 + 0x51c);
  *(undefined4 *)(iVar4 + 0x98) = 10;
  *(int *)(iVar4 + 0x9c) = iVar3;
  iVar2 = *(int *)(iVar1 + 0x420);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
  }
  *(int *)(iVar4 + 0xa0) = (int)*(short *)(iVar1 + iVar3 * 2);
  *(undefined1 *)(iVar4 + 0x58) = 0;
  *(undefined4 *)(iVar4 + 0x2c) = 0;
  iVar3 = FUN_4a134aa8(iVar4);
  if (*(int *)(iVar3 + 0x40) == iVar4) {
    *(undefined4 *)(iVar3 + 0x40) = 0;
  }
  return;
}



// Address: 4a1136bc

/* WARNING: Removing unreachable block (ram,0x4a116204) */

void FUN_4a1136bc(int param_1)

{
  *(undefined4 *)(param_1 + 0x290) = 0;
  FUN_4a0cd7c0(param_1);
  *(undefined4 *)(param_1 + 0x1c0) = 9;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined1 *)(param_1 + 0x1dc) = 1;
  host_s3eAccelerometerStop_arm();
                    /* WARNING: Could not recover jumptable at 0x4a116200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_caseD_0_4a11622c)();
  return;
}



// Address: 4a1136e4

/* WARNING: Removing unreachable block (ram,0x4a116204) */

void FUN_4a1136e4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x290) = param_4;
  FUN_4a0cd7c0();
  *(undefined4 *)(param_1 + 0x1c0) = 9;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined1 *)(param_1 + 0x1dc) = 1;
  host_s3eAccelerometerStop_arm();
                    /* WARNING: Could not recover jumptable at 0x4a116200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_caseD_0_4a11622c)();
  return;
}



// Address: 4a113750

void FUN_4a113750(int param_1)

{
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



// Address: 4a1137bc

/* WARNING: Removing unreachable block (ram,0x4a122af8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined * FUN_4a1137bc(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  
  *(int *)(*(int *)(param_1 + 0x20) + 0x350) = param_2 + *(int *)(*(int *)(param_1 + 0x20) + 0x350);
  FUN_4a15edcc(PTR_s__________________________________4a1138c8);
  puVar6 = *(undefined **)(param_1 + 0x20);
  if (*(int *)(puVar6 + 0x350) <= *(int *)(puVar6 + 0x354)) {
    return puVar6;
  }
  if (*(int *)(puVar6 + 0x38) != 0) {
    *(undefined4 *)(puVar6 + 0x350) = 0;
    FUN_4a111238(param_1);
    *(undefined4 *)(param_1 + 0x694) = 4;
                    /* WARNING: Could not recover jumptable at 0x4a122af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar6 = (undefined *)(*(code *)PTR_caseD_4_4a122b0c)(param_1,4,0x82e);
    return puVar6;
  }
  cVar1 = '\0';
  if (*(int *)(puVar6 + 0x44) != 0) {
    cVar1 = puVar6[0x48];
  }
  if (*(int *)(puVar6 + 0x44) == 0 || cVar1 == '\0') {
    cVar1 = '\0';
    if (*(int *)(puVar6 + 0x3c) != 0) {
      cVar1 = puVar6[0x40];
    }
    if (*(int *)(puVar6 + 0x3c) != 0 && cVar1 != '\0') {
      *(undefined4 *)(puVar6 + 0x350) = 0;
      FUN_4a02db3c(0);
      puVar6 = PTR_DAT_4a1138cc;
      *PTR_DAT_4a1138cc = 1;
      return puVar6;
    }
    return puVar6;
  }
  FUN_4a0941ec();
  FUN_4a09472c();
  *(undefined4 *)(param_1 + 0x1d0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1cc) = 1;
  FUN_4a1161d0(param_1,2);
  *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x350) = 0;
  FUN_4a0fd0dc(*(undefined4 *)(param_1 + 0x20));
  FUN_4a0fd02c(*(undefined4 *)(param_1 + 0x20));
  FUN_4a0fdf10(*(undefined4 *)(param_1 + 0x20));
  FUN_4a0fd058(*(undefined4 *)(param_1 + 0x20));
  FUN_4a0fca00(*(undefined4 *)(param_1 + 0x20));
  FUN_4a15edcc(s_TnbNative___tnbShow___d_4a0577fc,1);
  piVar2 = (int *)FUN_4a05be98();
  iVar3 = (**(code **)(*piVar2 + 0x18))(piVar2,s_com_cp_app_MainActivity_4a057818);
  if (iVar3 == 0) {
    FUN_4a15edcc(s_Unable_to_find_the_activity_clas_4a057830);
    return (undefined *)0x1;
  }
  iVar4 = (**(code **)(*piVar2 + 0x240))
                    (piVar2,iVar3,s_m_Activity_4a057854,s_Lcom_cp_app_MainActivity__4a057860);
  if (iVar4 != 0) {
    iVar3 = (**(code **)(*piVar2 + 0x244))(piVar2,iVar3,iVar4);
    if (iVar3 == 0) {
      FUN_4a15edcc(s_Sorry__I_can_t_use_MainWrapper_4a0578a0);
      return (undefined *)0x1;
    }
    uVar5 = (**(code **)(*piVar2 + 0x18))(piVar2,s_com_ea_tnb_WrapperActivity_4a0578c0);
    iVar4 = (**(code **)(*piVar2 + 0x1c4))
                      (piVar2,uVar5,&DAT_4a0578dc,s__Landroid_app_Activity_I_V_4a0578e4);
    if (iVar4 != 0) {
      FUN_4a0e4910(piVar2,uVar5,iVar4,iVar3);
      return (undefined *)0x0;
    }
    FUN_4a15edcc(s_Sorry__I_can_t_find_show_4a057900);
    return (undefined *)0x1;
  }
  FUN_4a15edcc(s_Sorry__I_can_t_find_MainWrapper_4a05787c);
  return (undefined *)0x1;
}



// Address: 4a1138d0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_4a1138d0(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_r5;
  int iVar8;
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar9;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x67c);
  bVar9 = uVar2 == 0;
  if (bVar9) {
    uVar2 = (uint)*(byte *)(param_1 + 0x210);
  }
  if (!bVar9 || uVar2 != 0) {
    return uVar2;
  }
  if ((*(int *)(param_1 + 0x7f4) != 1) ||
     (*(int *)(param_1 + 0x7ec) == 7 || *(int *)(param_1 + 0x7ec) == 8)) {
    (**(code **)(**(int **)(param_1 + 0x5f8) + 0x14))(*(int **)(param_1 + 0x5f8),param_2);
  }
  uVar3 = FUN_4a146be8(*(undefined4 *)(param_1 + 0x5f8),2);
  uStack_24 = 0;
  iStack_20 = 0;
  iStack_1c = 0;
  uStack_18 = 0;
  uStack_28 = 0;
  FUN_4a0caa9c(uVar3,param_2,1);
  piVar4 = *(int **)(param_1 + 0x7f0);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x14))(piVar4,param_2);
  }
  FUN_4a10ca70(&uStack_28,param_1);
  if (iStack_1c == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iStack_1c + 8);
  }
  iVar7 = 0;
  if (iVar5 != 0) {
    unaff_r5 = 0;
    iVar7 = iStack_20;
  }
  if ((iVar5 != 0 && iVar7 != 0) && -1 < iVar7) {
    do {
      if (iStack_1c == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(iStack_1c + 8);
      }
      piVar4 = *(int **)(iVar5 + unaff_r5 * 4);
      if (piVar4[10] == 10) {
        (**(code **)(*piVar4 + 0x14))(piVar4,param_2);
      }
      unaff_r5 = unaff_r5 + 1;
    } while (unaff_r5 < iStack_20);
  }
  FUN_4a16a5f4(&uStack_28);
  bVar9 = *(char *)(param_1 + 0x6f3) != '\0';
  cVar1 = '\0';
  if (bVar9) {
    cVar1 = *(char *)(param_1 + 0x2d8);
  }
  if (bVar9 && cVar1 != '\0') {
    FUN_4a110350(param_1);
  }
  if (*(int *)(param_1 + 0x7ec) == 0) {
    if (*(char *)(param_1 + 0x2d8) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x4a113a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE_00)();
      return uVar2;
    }
    if (*(int *)(param_1 + 0x7f4) == 1) {
      uVar3 = 7;
    }
    else {
      uVar3 = 1;
    }
    FUN_4a120320(param_1,uVar3);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x7f4);
    if (iVar5 == 0) {
      FUN_4a11e574(param_1,param_2);
    }
    else if (iVar5 == 1) {
      FUN_4a11ea70(param_1,param_2);
    }
    else if (iVar5 == 2) {
      FUN_4a06f7a4(*(undefined4 *)(param_1 + 0x96c),param_2);
      iVar5 = 0;
      if (0 < *(int *)(param_1 + 0x960)) {
        do {
          if (*(int *)(param_1 + 0x964) == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(*(int *)(param_1 + 0x964) + 8);
          }
          FUN_4a06f7a4(*(undefined4 *)(iVar7 + iVar5 * 4),param_2);
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(param_1 + 0x960));
      }
      if (*(int *)(param_1 + 0x7ec) == 0xb) {
        iVar5 = 0;
        if (0 < *(int *)(param_1 + 0x94c)) {
          do {
            if (*(int *)(param_1 + 0x950) == 0) {
              iVar7 = 0;
            }
            else {
              iVar7 = *(int *)(*(int *)(param_1 + 0x950) + 8);
            }
            FUN_4a06f7a4(*(undefined4 *)(iVar7 + iVar5 * 4),param_2);
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(param_1 + 0x94c));
        }
        iVar5 = *(int *)(param_1 + 0x970) - param_2;
        *(int *)(param_1 + 0x970) = iVar5;
        if (iVar5 < 1) {
          FUN_4a120320(param_1,2);
        }
      }
      else if (*(int *)(param_1 + 0x7ec) == 0xc) {
        FUN_4a120320(param_1,3);
      }
      else {
        iVar5 = *(int *)(param_1 + 0x854) + param_2;
        *(int *)(param_1 + 0x854) = iVar5;
        if (*(int *)(param_1 + 0x85c) < iVar5) {
          FUN_4a0ff3f8(*(undefined4 *)(param_1 + 0x20),400);
          FUN_4a120320(param_1,0xc);
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x7ec) == 1) {
    if (*(int *)(param_1 + 0x80c) == -1) {
      return 0xffffffff;
    }
    uVar2 = *(int *)(param_1 + 0x800) - param_2;
    *(uint *)(param_1 + 0x800) = uVar2;
    if ((int)uVar2 < 1) {
      uVar3 = FUN_4a0fe640(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x804),
                           *(undefined4 *)(param_1 + 0x808));
      *(undefined4 *)(param_1 + 0x800) = uVar3;
      uVar2 = *(uint *)(param_1 + 0x80c);
      iVar7 = *(int *)(*(int *)(param_1 + 0x20) + 0x260);
      iVar5 = FUN_4a085614(iVar7);
      if (iVar5 != 0) {
        FUN_4a0866c0(iVar7,uVar2);
      }
      if (*(int *)(iVar7 + 0x74) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(iVar7 + 0x74) + 8);
      }
      iVar5 = iVar5 + uVar2 * 0x14;
      iVar8 = *(int *)(iVar5 + 8);
      iVar7 = 0;
      if (0 < iVar8) {
        iVar5 = *(int *)(iVar5 + 0xc);
        do {
          if (iVar5 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(iVar5 + 8);
          }
          piVar4 = *(int **)(iVar6 + iVar7 * 4);
          if (piVar4[1] != 400) {
            (**(code **)(*piVar4 + 0x28))(piVar4);
            (**(code **)(*piVar4 + 0x30))(piVar4,0);
            (**(code **)(*piVar4 + 0x3c))(piVar4);
            return uVar2 | iVar7 << 0x10;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar8);
      }
      return 0xffffffff;
    }
    return uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x4a113ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE_00)();
  return uVar2;
}



// Address: 4a113f74

/* WARNING: Removing unreachable block (ram,0x4a071cf8) */
/* WARNING: Removing unreachable block (ram,0x4a071d08) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a113f74(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  code *UNRECOVERED_JUMPTABLE;
  
  piVar9 = (int *)0x0;
  *(undefined4 *)(param_1 + 0x768) = 0;
  FUN_4a073908(*(undefined4 *)(param_1 + 0x5f8));
  if (param_2 != 0) {
    iVar6 = *(int *)(param_1 + 0x76c) + -1;
    *(int *)(param_1 + 0x76c) = iVar6;
    if (param_2 < iVar6) {
      do {
        iVar6 = *(int *)(param_1 + 0x77c);
        if (iVar6 != 0) {
          iVar7 = *(int *)(iVar6 + 8);
        }
        else {
          iVar7 = 0;
        }
        if (iVar6 != 0) {
          iVar6 = *(int *)(iVar6 + 8);
        }
        else {
          iVar6 = 0;
        }
        *(undefined4 *)(iVar6 + param_2 * 4) = *(undefined4 *)(iVar7 + (param_2 + 1) * 4);
        iVar6 = *(int *)(param_1 + 0x790);
        if (iVar6 != 0) {
          iVar7 = *(int *)(iVar6 + 8);
        }
        else {
          iVar7 = 0;
        }
        if (iVar6 != 0) {
          iVar6 = *(int *)(iVar6 + 8);
        }
        else {
          iVar6 = 0;
        }
        *(undefined4 *)(iVar6 + param_2 * 4) = *(undefined4 *)(iVar7 + (param_2 + 1) * 4);
        iVar6 = *(int *)(param_1 + 0x7a4);
        if (iVar6 != 0) {
          iVar7 = *(int *)(iVar6 + 8);
        }
        else {
          iVar7 = 0;
        }
        if (iVar6 != 0) {
          iVar6 = *(int *)(iVar6 + 8);
        }
        else {
          iVar6 = 0;
        }
        *(undefined4 *)(iVar6 + param_2 * 4) = *(undefined4 *)(iVar7 + (param_2 + 1) * 4);
        iVar6 = *(int *)(param_1 + 0x7b8);
        if (iVar6 != 0) {
          iVar7 = *(int *)(iVar6 + 8);
        }
        else {
          iVar7 = 0;
        }
        if (iVar6 != 0) {
          iVar6 = *(int *)(iVar6 + 8);
        }
        else {
          iVar6 = 0;
        }
        *(undefined4 *)(iVar6 + param_2 * 4) = *(undefined4 *)(iVar7 + (param_2 + 1) * 4);
        param_2 = param_2 + 1;
      } while (param_2 < *(int *)(param_1 + 0x76c));
    }
    if (*(int *)(param_1 + 0x790) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(param_1 + 0x790) + 8);
    }
    *(undefined4 *)(iVar6 + *(int *)(param_1 + 0x76c) * 4) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x77c) != 0) {
    piVar9 = *(int **)(*(int *)(param_1 + 0x77c) + 8);
  }
  piVar8 = *(int **)(param_1 + 0x5f8);
  if (*piVar9 != piVar8[0x35]) {
    return;
  }
  FUN_4a1071e0(piVar8,2);
  uVar4 = FUN_4a145f8c(piVar8);
  uVar5 = FUN_4a13fb44(uVar4,piVar8[0x35]);
  if (((((uVar5 & 2) != 0) && ((uVar5 & 0x100000) == 0)) && (piVar8[0x38] != 0)) &&
     ((iVar6 = FUN_4a146b58(piVar8[0x38],0x2000), iVar6 != 0 && (piVar8[0x38] != 0)))) {
    iVar7 = FUN_4a146b58(piVar8[0x38],0x2000);
    iVar6 = 0;
    if (iVar7 != 0) {
      iVar6 = piVar8[0x38];
    }
    iVar6 = FUN_4a1461c0(iVar6,2);
    if (iVar6 == 0) {
      iVar6 = 0;
      if (piVar8[0x38] != 0) {
        iVar7 = FUN_4a146b58(piVar8[0x38],0x2000);
        iVar6 = 0;
        if (iVar7 != 0) {
          iVar6 = piVar8[0x38];
        }
      }
      FUN_4a076d54(iVar6);
    }
  }
  FUN_4a1071e0(piVar8,4);
  iVar7 = -1;
  iVar6 = -1;
  switch(piVar8[0x37]) {
  case 1:
    iVar3 = FUN_4a146a9c(piVar8);
    if (iVar3 != 0) {
      iVar6 = 0x936;
    }
    break;
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xc:
  case 0x11:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x1a:
  case 0x1d:
  case 0x35:
  case 0x36:
    FUN_4a071090(piVar8,1);
    FUN_4a07171c(piVar8);
    break;
  case 0xd:
    iVar6 = 0xb4b;
    uVar4 = FUN_4a1460a4(piVar8);
    FUN_4a143170(uVar4,piVar8[0x39]);
    break;
  case 0xe:
    iVar6 = 0x974;
    break;
  case 0xf:
    iVar6 = 0x93b;
    break;
  case 0x10:
    iVar6 = 0x939;
    break;
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x37:
    FUN_4a071478(piVar8);
    break;
  case 0x19:
    if (piVar8[0x35] == 0x9d) {
      iVar6 = 0x95e;
    }
    else {
      iVar6 = 0x94e;
    }
    break;
  case 0x2d:
    iVar6 = 0x94c;
    break;
  case 0x2e:
    iVar6 = 0x966;
    break;
  case 0x2f:
    iVar6 = 0x931;
    iVar7 = 8;
    iVar3 = FUN_4a0fb748(piVar8[9]);
    if (iVar3 < 0x32) {
      iVar7 = 0x11;
    }
    break;
  case 0x31:
    iVar6 = 0x93d;
    break;
  case 0x32:
    iVar6 = 0x940;
  }
  iVar3 = FUN_4a146a9c(piVar8);
  if ((iVar3 == 0) && (*(int *)(piVar8[8] + 0x5fc) != 0)) {
    FUN_4a108d64();
  }
  if (iVar6 == -1) {
    return;
  }
  if (iVar7 != -1) {
    FUN_4a0737a4(piVar8,iVar7,0);
    return;
  }
  iVar6 = FUN_4a1461c0(piVar8,4);
  uVar4 = FUN_4a145f8c(piVar8);
  FUN_4a107f20(piVar8,0xc);
  piVar9 = (int *)piVar8[0x38];
  iVar7 = piVar8[0x35];
  if ((piVar9 == (int *)0x0) || (iVar3 = FUN_4a146b58(piVar9,0x2000), iVar3 == 0)) {
    piVar10 = (int *)0x0;
  }
  else {
    piVar10 = (int *)piVar8[0x38];
  }
  uVar5 = FUN_4a146a9c(piVar8);
  iVar3 = 1 - uVar5;
  if (1 < uVar5) {
    iVar3 = 0;
  }
  FUN_4a0737a4(piVar8,0,0);
  uVar5 = FUN_4a13fb44(uVar4,iVar7);
  if (iVar6 == 0) {
    if (piVar10 == (int *)0x0 || (uVar5 & 2) == 0) {
      if (iVar7 == 0x99) {
        FUN_4a10e9c8(piVar8[8]);
      }
      else if (iVar7 < 0x9a) {
        if (iVar7 == 0x76) {
LAB_4a0718dc:
          FUN_4a110ec4(piVar8[8],3);
        }
        else if (iVar7 < 0x77) {
          if (iVar7 == 4) {
            iVar1 = FUN_4a0fb748(piVar8[9]);
            if (iVar1 < 5) {
              FUN_4a0737a4(piVar8,10,0);
              return;
            }
          }
          else if (iVar7 == 0x70) {
            FUN_4a1278e8(piVar8[8],1);
          }
          else if (iVar7 == 0x74) goto LAB_4a0718dc;
        }
        else if ((iVar7 == 0x7e || iVar7 == 0x7f) || iVar7 == 0x80) {
          piVar8[0x3f] = piVar8[0x3f] & 0xfffffff7;
        }
      }
      else if (iVar7 == 0xa6) {
LAB_4a071940:
        FUN_4a116cf0(piVar8[8],piVar9);
      }
      else if (iVar7 < 0xa7) {
        if (iVar7 != 0x9e) {
          if (iVar7 == 0xa2) {
            if (iVar3 == 0) {
              piVar8[0x30] = 0;
              uVar2 = FUN_4a146a9c(piVar8);
              FUN_4a111218(piVar8[8],uVar2);
            }
          }
          else if (iVar7 == 0xa5) goto LAB_4a071940;
        }
      }
      else if (iVar7 == 0xa9) {
        FUN_4a0daefc(uVar4,0x14);
        FUN_4a0d9d54(uVar4,0,0x280000);
      }
      else if (iVar7 == 0xab) goto LAB_4a071940;
    }
    else {
      FUN_4a071490(piVar8,0);
      FUN_4a071490(piVar10,0);
      iVar1 = (**(code **)(*piVar10 + 0x1c))(piVar10,iVar7,piVar8);
      if (iVar1 != 0) {
        iVar1 = FUN_4a12785c(piVar8[8],piVar8[0x4e]);
        if (iVar1 != 0) {
          *(uint *)(iVar1 + 0xfc) = *(uint *)(iVar1 + 0xfc) & 0xffffffbf;
          *(undefined4 *)(iVar1 + 0x13c) = 0;
          *(undefined4 *)(iVar1 + 0x138) = 0xffffffff;
          *(undefined4 *)(iVar1 + 0x140) = 0;
        }
        piVar8[0x3f] = piVar8[0x3f] & 0xffffffbf;
        piVar8[0x4f] = 0;
        piVar8[0x4e] = -1;
        piVar8[0x50] = 0;
      }
      if (iVar3 != 0) {
        uVar2 = FUN_4a146a9c(piVar10);
        if (iVar7 == 0x61) {
          FUN_4a0daefc(uVar4,0x12);
          FUN_4a0dd6e4(uVar4,uVar2,0x20);
          FUN_4a0dd6e4(uVar4,uVar2,0x800);
          goto LAB_4a071a18;
        }
        if (iVar7 == 0x6e) {
          FUN_4a0dd6e4(uVar4,uVar2,0x100);
          goto LAB_4a071a18;
        }
      }
    }
  }
  if (iVar7 == 0xa3) {
    FUN_4a107f20(piVar8,0x10);
    if (iVar6 == 0) {
      FUN_4a1071e0(piVar8,0x20);
    }
    else {
      piVar8[0x3c] = 0;
      piVar8[0x3b] = -1;
    }
  }
LAB_4a071a18:
  if (((piVar9 != (int *)0x0) && (piVar10 == (int *)0x0 && iVar6 == 0)) &&
     ((**(code **)(*piVar9 + 0x1c))(piVar9,iVar7,piVar8), iVar3 != 0)) {
    FUN_4a0dbd6c(uVar4,piVar9[10]);
  }
  if (piVar8[0x3b] != -1) {
    iVar6 = (**(code **)(*piVar8 + 0x10))(piVar8);
    if (iVar6 != 0) {
      iVar6 = piVar8[0x3b];
      iVar7 = piVar8[0x3c];
      piVar8[0x3c] = 0;
      piVar8[0x3b] = -1;
      FUN_4a0737a4(piVar8,iVar6,iVar7,piVar8[0x3d]);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a071a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a114098

int FUN_4a114098(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_48 [8];
  int local_40;
  int local_3c;
  undefined4 local_34;
  int iStack_30;
  int iStack_2c;
  undefined4 local_28;
  
  iStack_30 = param_1;
  iStack_2c = param_2;
  local_28 = param_3;
  iVar1 = FUN_4a146cd8(param_2);
  local_34 = *(undefined4 *)(param_1 + 0x28);
  iVar7 = 0;
  iVar8 = 0;
  FUN_4a10ca70(auStack_48,param_1);
  iVar2 = FUN_4a0fe640(*(undefined4 *)(param_1 + 0x20),0,local_40 + -1);
  iVar6 = 0;
  if (0 < local_40) {
    do {
      FUN_4a0015f0(iVar2 + iVar6,local_40);
      if (local_3c == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(local_3c + 8);
      }
      iVar5 = *(int *)(iVar3 + extraout_r1 * 4);
      iVar3 = FUN_4a143ac8(local_34,*(undefined4 *)(iVar5 + 0x28));
      if (((((*(ushort *)(iVar3 + 0x18) & 0x100) != 0) && (iVar3 = FUN_4a1465dc(iVar5), iVar3 != 0))
          && (iVar3 = FUN_4a146cd8(iVar5), iVar3 == iVar1)) &&
         (iVar3 = FUN_4a145f98(local_28,iVar5), iVar3 != 0)) {
        iVar3 = *(int *)(param_2 + 0x44) - *(int *)(iVar5 + 0x44);
        iVar4 = *(int *)(param_2 + 0x4c) - *(int *)(iVar5 + 0x4c);
        if (iVar3 <= -iVar3) {
          iVar3 = -iVar3;
        }
        if (iVar4 <= -iVar4) {
          iVar4 = -iVar4;
        }
        if ((iVar3 + iVar4 < iVar7) || (iVar7 == 0)) {
          iVar7 = iVar3 + iVar4;
          iVar8 = iVar5;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_40);
  }
  FUN_4a16a5f4(auStack_48);
  return iVar8;
}



// Address: 4a1141dc

void FUN_4a1141dc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [16];
  
  *(undefined4 *)(param_1 + 0x76c) = 0;
  if (*(int *)(param_1 + 0x77c) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x77c) + 8);
  }
  if (iVar1 == 0) {
    iVar1 = FUN_4a16be24(auStack_28,3);
    uVar6 = *(undefined4 *)(iVar1 + 8);
    piVar5 = *(int **)(iVar1 + 0xc);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
    }
    (**(code **)(*(int *)(param_1 + 0x770) + 0x1c))((int *)(param_1 + 0x770));
    *(undefined4 *)(param_1 + 0x778) = uVar6;
    *(int **)(param_1 + 0x77c) = piVar5;
    FUN_4a16bef4(auStack_28);
    iVar1 = FUN_4a16a524(auStack_3c,3);
    uVar6 = *(undefined4 *)(iVar1 + 8);
    piVar5 = *(int **)(iVar1 + 0xc);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
    }
    (**(code **)(*(int *)(param_1 + 0x784) + 0x1c))((int *)(param_1 + 0x784));
    *(undefined4 *)(param_1 + 0x78c) = uVar6;
    *(int **)(param_1 + 0x790) = piVar5;
    FUN_4a16a5f4(auStack_3c);
    iVar1 = FUN_4a16be24(auStack_28,3);
    uVar6 = *(undefined4 *)(iVar1 + 8);
    piVar5 = *(int **)(iVar1 + 0xc);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
    }
    (**(code **)(*(int *)(param_1 + 0x798) + 0x1c))((int *)(param_1 + 0x798));
    *(undefined4 *)(param_1 + 0x7a0) = uVar6;
    *(int **)(param_1 + 0x7a4) = piVar5;
    FUN_4a16bef4(auStack_28);
    iVar1 = FUN_4a16be24(auStack_28,3);
    uVar6 = *(undefined4 *)(iVar1 + 8);
    piVar5 = *(int **)(iVar1 + 0xc);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
    }
    (**(code **)(*(int *)(param_1 + 0x7ac) + 0x1c))((int *)(param_1 + 0x7ac));
    *(undefined4 *)(param_1 + 0x7b4) = uVar6;
    *(int **)(param_1 + 0x7b8) = piVar5;
    FUN_4a16bef4(auStack_28);
  }
  *(undefined4 *)(param_1 + 0x76c) = 0;
  iVar1 = FUN_4a16bdcc(auStack_24,param_1 + 0x770);
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 8)) {
    do {
      if (*(int *)(iVar1 + 0xc) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(iVar1 + 0xc) + 8);
      }
      *(undefined4 *)(iVar4 + iVar3 * 4) = 0xffffffff;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar1 + 8));
  }
  FUN_4a16bef4(auStack_24);
  puVar2 = (undefined4 *)FUN_4a0c6bc0(auStack_38);
  *puVar2 = PTR_PTR_4a116ab4;
  puVar2[2] = *(undefined4 *)(param_1 + 0x78c);
  piVar5 = *(int **)(param_1 + 0x790);
  puVar2[3] = piVar5;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))();
  }
  iVar1 = 0;
  *puVar2 = PTR_PTR_4a116ab8;
  if (0 < (int)puVar2[2]) {
    do {
      if (puVar2[3] == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(puVar2[3] + 8);
      }
      *(undefined4 *)(iVar3 + iVar1 * 4) = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)puVar2[2]);
  }
  FUN_4a16a5f4(auStack_38);
  return;
}



// Address: 4a114384

bool FUN_4a114384(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_2c [20];
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0(auStack_2c);
  *puVar1 = PTR_PTR_4a114498;
  puVar1[2] = *(undefined4 *)(param_1 + 0x78c);
  piVar2 = *(int **)(param_1 + 0x790);
  puVar1[3] = piVar2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))();
  }
  uVar6 = 0;
  *puVar1 = PTR_PTR_4a11449c;
  uVar5 = puVar1[2];
  if ((int)uVar5 < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = uVar5 & 1;
  }
  if (uVar7 != 0) {
    do {
      if (puVar1[3] == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(puVar1[3] + 8);
      }
      if (*(int *)(iVar4 + uVar6 * 4) == param_2) goto LAB_4a11447c;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)uVar7);
  }
  if ((int)uVar7 < (int)uVar5) {
    iVar4 = puVar1[3];
    do {
      if (iVar4 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar4 + 8);
      }
      uVar6 = uVar7;
      if (*(int *)(iVar3 + uVar7 * 4) == param_2) goto LAB_4a11447c;
      if (iVar4 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar4 + 8);
      }
      if (*(int *)(iVar3 + (uVar7 + 1) * 4) == param_2) {
        uVar6 = uVar7 + 1;
        goto LAB_4a11447c;
      }
      uVar7 = uVar7 + 2;
    } while ((int)uVar7 < (int)uVar5);
  }
  uVar6 = 0xffffffff;
LAB_4a11447c:
  FUN_4a16a5f4(auStack_2c);
  return uVar6 != 0xffffffff;
}



// Address: 4a1144f4

void FUN_4a1144f4(int param_1)

{
  if (*(int *)(param_1 + 0xa84) == 0) {
    FUN_4a0d32e4(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x264));
  }
  *(int *)(param_1 + 0xa84) = *(int *)(param_1 + 0xa84) + 1;
  return;
}



// Address: 4a1146e8

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

void FUN_4a1146e8(int param_1,undefined4 param_2)

{
  bool bVar1;
  short sVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined *puVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  code *UNRECOVERED_JUMPTABLE;
  int local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  undefined4 local_28;
  
  iVar14 = *(int *)(param_1 + 0x20);
  *(undefined4 *)PTR_DAT_4a114948 = *(undefined4 *)PTR_DAT_4a114944;
  puVar4 = PTR_DAT_4a10cedc;
  switch(*(undefined4 *)(param_1 + 0x69c)) {
  default:
    return;
  case 1:
  case 4:
  case 6:
  case 0xc:
  case 0xf:
    *(undefined4 *)PTR_DAT_4a10cedc = *(undefined4 *)PTR_DAT_4a10ced8;
    FUN_4a0ef16c(*(undefined4 *)(param_1 + 0x28));
    puVar5 = PTR_DAT_4a10cee0;
    FUN_4a0bbb28(*(undefined4 *)PTR_DAT_4a10cee0);
    *(undefined4 *)puVar4 = *(undefined4 *)PTR_DAT_4a10cee4;
    FUN_4a127ed0(param_1,param_2);
    iVar14 = *(int *)puVar5;
    *(undefined1 *)(*(int *)PTR_DAT_4a0bbce8 + 0xc) = 0;
    host_glMatrixMode_arm(0x1700);
    FUN_4a150724();
    *(undefined4 *)(iVar14 + 8) = 0x3f800000;
    return;
  case 2:
    FUN_4a11cee8(param_1,param_2);
    FUN_4a041910(1);
    FUN_4a11a2bc(param_1,param_2,1);
    break;
  case 3:
  case 7:
  case 8:
    FUN_4a11cee8(param_1,param_2);
    FUN_4a041910(1);
    FUN_4a0fe1e0(iVar14,param_2);
    FUN_4a0ce0a8(param_1,param_2);
    break;
  case 5:
  case 9:
    FUN_4a1246f0(param_1,param_2);
    FUN_4a041910(1);
    FUN_4a11a2bc(param_1,param_2,1);
    break;
  case 10:
  case 0xb:
    iVar15 = iVar14 + 0x278;
    FUN_4a0ce950(param_1,1,0xb43);
    FUN_4a0ce950(param_1,2,0xb48);
    uVar9 = FUN_4a06c410(iVar15);
    uVar12 = FUN_4a1448e0(*(undefined4 *)(param_1 + 0x28));
    FUN_4a06c86c(iVar15,uVar12);
    FUN_4a06b694(iVar15,0xfffffff7,uVar9);
    FUN_4a0ce950(param_1,3,0xfffffff7);
    FUN_4a10ce84(param_1,param_2);
    FUN_4a041910(1);
    FUN_4a0fe1e0(iVar14,param_2);
    FUN_4a0cdc50(param_1,param_2,2);
    break;
  case 0xd:
    iVar14 = *(int *)(param_1 + 0x20);
    local_38 = iVar14 + 0x278;
    local_3c = iVar14 + 0x128;
    iStack_2c = param_1;
    local_28 = param_2;
    FUN_4a10ce84(param_1,param_2);
    FUN_4a041910(1);
    FUN_4a0fe1e0(iVar14,local_28);
    puVar4 = PTR_DAT_4a1246e8;
    FUN_4a0bbb28(*(undefined4 *)PTR_DAT_4a1246e8);
    if (*(char *)(param_1 + 0x210) == '\0') {
      iVar15 = FUN_4a1448e0(*(undefined4 *)(param_1 + 0x28));
      bVar1 = 0 < iVar15;
      iVar15 = 0;
      if (bVar1) {
        iVar15 = 0x46;
      }
      iVar15 = iVar15 + 0x140;
      iVar16 = FUN_4a13ca78(iVar14);
      iVar16 = iVar16 - iVar15 >> 1;
      iVar14 = FUN_4a13caa0(iVar14);
      iVar14 = iVar14 + -0xf0 >> 1;
      local_30 = FUN_4a171fac(iVar15);
      iVar17 = FUN_4a171fac(iVar14);
      local_58 = FUN_4a171fac(iVar16);
      local_50 = local_30;
      local_4c = 0x43700000;
      local_48 = 0x3f800000;
      local_64 = 0x5d;
      local_60 = 0x5e;
      local_5c = 0x5f;
      local_54 = iVar17;
      FUN_4a09ff60(local_3c,0x57,0x58,0x59,0x5a,0x5b,0x5c);
      local_48 = FUN_4a0cb6c4(param_1,4);
      local_34 = FUN_4a171fac(iVar14 + 0x16);
      uVar9 = FUN_4a171fac(iVar16 + 9);
      local_64 = 0;
      FUN_4a09f664(local_3c,0x14a,uVar9,local_34,0x3f800000,0x3f800000,0x3f800000);
      FUN_4a0fa6e8(local_48,local_3c,iVar16 + 9,iVar14 + 0x16,1);
      iVar16 = iVar16 + (iVar15 >> 1);
      FUN_4a17211c(local_30,DAT_4a1246ec);
      uVar9 = FUN_4a171e1c();
      uVar12 = FUN_4a09f974(local_3c,0x7f);
      uVar9 = FUN_4a171fac(uVar9);
      FUN_4a171bb8(uVar9,uVar12);
      FUN_4a171e1c();
      uVar9 = FUN_4a171fac();
      uVar12 = FUN_4a171fac(iVar14 + 0x46);
      uVar13 = FUN_4a171fac(iVar16);
      local_64 = 0;
      FUN_4a09f664(local_3c,0x7f,uVar13,uVar12,0x3f800000,uVar9,0x3f800000);
      local_40 = iVar16 + 0x2d;
      iVar17 = iVar16 + 0x87;
      iVar15 = iVar16 + -0x2d;
      if (!bVar1) {
        iVar15 = local_40 + iVar16 + -0x2d >> 1;
        local_40 = local_40 + iVar17 >> 1;
      }
      local_44 = iVar15 + -0x5a;
      iVar18 = iVar14 + 0x78;
      uVar9 = FUN_4a0cb6c4(param_1,0x10000);
      FUN_4a0fa6e8(uVar9,local_3c,local_44,iVar18,1);
      uVar9 = FUN_4a0cb6c4(param_1,0x20000);
      FUN_4a0fa6e8(uVar9,local_3c,iVar15,iVar18,1);
      uVar9 = FUN_4a0cb6c4(param_1,0x8000);
      FUN_4a0fa6e8(uVar9,local_3c,local_40,iVar18,1);
      if (bVar1) {
        uVar9 = FUN_4a0cb6c4(param_1,0x40000);
        FUN_4a0fa6e8(uVar9,local_3c,iVar17,iVar18,1);
      }
      FUN_4a09f3a4(local_3c,local_28);
      FUN_4a06b074(local_38,local_28,0xb1e,6,iVar16,iVar14 + 0x28,0x12);
      local_60 = 0x12;
      iVar14 = iVar14 + 0xbe;
      local_64 = iVar14;
      FUN_4a06cd2c(local_38,local_28,0,0xb20,3,0x51,local_44);
      local_60 = 0x12;
      local_64 = iVar14;
      FUN_4a06cd2c(local_38,local_28,1,0xb21,3,0x51,iVar15);
      local_60 = 0x12;
      local_64 = iVar14;
      FUN_4a06cd2c(local_38,local_28,2,0xb1f,3,0x51,local_40);
      if (bVar1) {
        local_60 = 0x12;
        local_64 = iVar14;
        FUN_4a06cd2c(local_38,local_28,3,0xb22,3,0x51,iVar17);
      }
    }
    FUN_4a0bbcb4(*(undefined4 *)puVar4);
    break;
  case 0xe:
    iVar14 = *(int *)(param_1 + 0x20);
    local_50 = iVar14 + 0x278;
    local_54 = iVar14 + 0x128;
    iStack_2c = param_1;
    local_28 = param_2;
    FUN_4a10ce84(param_1,param_2);
    FUN_4a041910(1);
    FUN_4a0fe1e0(iVar14,local_28);
    puVar4 = PTR_DAT_4a121ce8;
    FUN_4a0bbb28(*(undefined4 *)PTR_DAT_4a121ce8);
    uVar9 = *(undefined4 *)puVar4;
    local_60 = FUN_4a0bc200(uVar9);
    local_64 = FUN_4a0bc1f8(uVar9);
    if (local_60 < local_64) {
      piVar6 = &local_64;
    }
    else {
      piVar6 = &local_60;
    }
    uVar9 = *(undefined4 *)puVar4;
    iVar14 = (*piVar6 + -0x1e0) / 2;
    local_60 = FUN_4a0bc200(uVar9);
    local_64 = FUN_4a0bc1f8(uVar9);
    if (local_64 < local_60) {
      piVar6 = &local_64;
    }
    else {
      piVar6 = &local_60;
    }
    iVar15 = (*piVar6 + -0x140) / 2;
    uVar9 = FUN_4a171fac(iVar15 + 5);
    uVar12 = FUN_4a171fac(iVar14 + 5);
    local_64 = 0x439e0000;
    local_60 = 0x3f800000;
    FUN_4a09ff60(local_54,0x141,0x142,0x143,0x144,0x145,0x146,0x147,0x148,0x149,uVar12,uVar9,
                 0x43eb0000);
    local_58 = iVar14 + 0x4d;
    iVar15 = iVar15 + 0x19;
    FUN_4a09f9c8(local_54,0x16b);
    iVar16 = FUN_4a171e1c();
    local_30 = iVar15 + (iVar16 >> 1);
    local_34 = FUN_4a171fac();
    uVar9 = FUN_4a171fac(local_58 + 0xa3);
    FUN_4a0a02bc(local_54,0x16a,0x16b,0x16c,uVar9,local_34,0x43a30000,0x3f800000,0x3f800000,0,0);
    uVar9 = *(undefined4 *)puVar4;
    local_60 = FUN_4a0bc200(uVar9);
    local_64 = FUN_4a0bc1f8(uVar9);
    if (local_60 < local_64) {
      piVar6 = &local_64;
    }
    else {
      piVar6 = &local_60;
    }
    iVar17 = (*piVar6 + -0x1e0) / 2 + 0x20;
    uVar9 = *(undefined4 *)PTR_DAT_4a121ce8;
    local_60 = FUN_4a0bc200(uVar9);
    local_64 = FUN_4a0bc1f8(uVar9);
    if (local_64 < local_60) {
      piVar6 = &local_64;
    }
    else {
      piVar6 = &local_60;
    }
    iVar18 = (*piVar6 + -0x140) / 2 + 0x22;
    local_5c = FUN_4a0cb6c4(param_1,2);
    local_38 = FUN_4a171fac(iVar18);
    uVar9 = FUN_4a171fac(iVar17);
    FUN_4a09f664(local_54,0x14a,uVar9,local_38,0x3f800000,0x3f800000,0x3f800000,0);
    FUN_4a0fa6e8(local_5c,local_54,iVar17,iVar18,1);
    iVar16 = iVar16 + iVar15;
    uVar9 = FUN_4a171fac(iVar16);
    uVar12 = FUN_4a171fac(iVar14 + 0x4d);
    local_64 = 0x43620000;
    local_60 = 0x3f800000;
    FUN_4a09ff60(local_54,0x14b,0x14c,0x14d,0x14e,0x14f,0x150,0x151,0x152,0x153,uVar12,uVar9,
                 0x43a30000);
    iVar15 = FUN_4a06be4c(local_50,3);
    uVar9 = FUN_4a09f974(local_54,0x135);
    FUN_4a171a94(uVar9,0x41700000);
    iVar17 = FUN_4a171e1c();
    FUN_4a09f974(local_54,0x135);
    iVar18 = FUN_4a171e1c();
    *(int *)(param_1 + 0x6bc) = iVar17 + 0x16;
    *(int *)(param_1 + 0x6c0) = iVar18 + iVar15 + 0x14;
    *(undefined4 *)(param_1 + 0x6d0) = 5;
    *(undefined4 *)(param_1 + 0x6cc) = 2;
    iVar16 = iVar16 + 9;
    iVar14 = iVar14 + 0x56;
    iVar15 = 0;
    *(int *)(param_1 + 0x6c4) = iVar14;
    *(int *)(param_1 + 0x6c8) = iVar16;
    do {
      if (*(int *)(param_1 + 0x6d4) == iVar15) {
        lVar3 = (longlong)DAT_4a121cec * (longlong)*(int *)(param_1 + 0x6d8);
        iVar10 = (int)((ulonglong)lVar3 >> 0x20);
        iVar11 = iVar10 >> 5;
        iVar10 = iVar11 - (iVar10 >> 0x1f);
        if (*(int *)(param_1 + 0x6d8) + iVar10 * -300 < 0x97) goto LAB_4a121a7c;
        local_3c = FUN_4a171fac(*(undefined4 *)(param_1 + 0x6c0),iVar10 * -0x4b,iVar11,(int)lVar3);
        uVar9 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x6bc));
        local_40 = FUN_4a171fac(iVar16);
        uVar12 = FUN_4a171fac(iVar14);
        local_64 = local_3c;
        local_60 = 0x3f800000;
        FUN_4a09ff60(local_54,0x15d,0x15e,0x15f,0x160,0x161,0x162,0x163,0x164,0x165,uVar12,local_40,
                     uVar9);
      }
      else {
LAB_4a121a7c:
        local_44 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x6c0));
        uVar9 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x6bc));
        local_48 = FUN_4a171fac(iVar16);
        uVar12 = FUN_4a171fac(iVar14);
        local_64 = local_44;
        local_60 = 0x3f800000;
        FUN_4a09ff60(local_54,0x154,0x155,0x156,0x157,0x158,0x159,0x15a,0x15b,0x15c,uVar12,local_48,
                     uVar9);
      }
      iVar11 = *(int *)(*(int *)(param_1 + 0x28) + 0x7c);
      if (iVar11 == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = *(int *)(iVar11 + 8);
      }
      sVar2 = *(short *)(iVar11 + iVar15 * 2);
      local_4c = FUN_4a171fac(iVar16 + (iVar18 >> 1) + 10);
      uVar9 = FUN_4a171fac(iVar14 + (iVar17 >> 1) + 0xb);
      FUN_4a09f664(local_54,(int)sVar2,uVar9,local_4c,0x3f800000,0x3f800000,0x3f800000,0);
      if (iVar15 == 2) {
        iVar14 = *(int *)(param_1 + 0x6c4);
        iVar16 = *(int *)(param_1 + 0x6c8) + *(int *)(param_1 + 0x6c0) + *(int *)(param_1 + 0x6d0);
      }
      else {
        iVar14 = iVar14 + *(int *)(param_1 + 0x6bc) + *(int *)(param_1 + 0x6cc);
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < 6);
    FUN_4a09f3a4(local_54,local_28);
    iVar15 = *(int *)(param_1 + 0x6c4);
    iVar16 = *(int *)(param_1 + 0x6c8);
    iVar14 = 0;
    do {
      iVar18 = iVar15 + (*(int *)(param_1 + 0x6bc) >> 1);
      iVar11 = *(int *)(param_1 + 0x6c0) + iVar16 + -5;
      iVar17 = *(int *)(*(int *)(param_1 + 0x28) + 0x68);
      if (iVar17 == 0) {
        iVar17 = 0;
      }
      else {
        iVar17 = *(int *)(iVar17 + 8);
      }
      iVar10 = (int)*(short *)(iVar17 + iVar14 * 2);
      iVar17 = FUN_4a06bf88(local_50,iVar10,3);
      if (*(int *)(param_1 + 0x6bc) < iVar17) {
        FUN_4a06b330(local_50,iVar10,3);
        FUN_4a06c45c(local_50,local_28,3,iVar18,iVar11,0x22);
      }
      else {
        FUN_4a06b074(local_50,local_28,iVar10,3,iVar18,iVar11,0x22);
      }
      if (iVar14 == 2) {
        iVar15 = *(int *)(param_1 + 0x6c4);
        iVar16 = *(int *)(param_1 + 0x6c8) + *(int *)(param_1 + 0x6c0) + *(int *)(param_1 + 0x6d0);
      }
      else {
        iVar15 = iVar15 + *(int *)(param_1 + 0x6bc) + *(int *)(param_1 + 0x6cc);
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < 6);
    FUN_4a06b074(local_50,local_28,0xb2b,6,local_58 + 0xa3,local_30 + -4,0x12);
    FUN_4a0bbcb4(*(undefined4 *)PTR_DAT_4a121ce8);
    break;
  case 0x10:
  case 0x11:
  case 0x12:
    iVar14 = *(int *)(param_1 + 0x20);
    local_34 = iVar14 + 0x128;
    iStack_2c = param_1;
    local_28 = param_2;
    FUN_4a10ce84(param_1,param_2);
    FUN_4a041910(1);
    puVar4 = PTR_DAT_4a1239d4;
    FUN_4a0bbb28(*(undefined4 *)PTR_DAT_4a1239d4);
    uVar9 = FUN_4a09f9c8(local_34,399);
    uVar9 = FUN_4a17295c(uVar9,1);
    uVar9 = FUN_4a17211c(uVar9,0x3fc00000);
    uVar12 = FUN_4a17295c(uVar9,0xffffffff);
    FUN_4a13caa0(iVar14);
    uVar13 = FUN_4a171fac();
    uVar12 = FUN_4a1725c0(uVar13,uVar12);
    FUN_4a1725c0(uVar12,0x40a00000);
    uVar12 = FUN_4a171e1c();
    FUN_4a0bbe00(*(undefined4 *)puVar4,uVar12,2);
    uVar12 = FUN_4a171fac();
    uVar9 = FUN_4a17295c(uVar9,0xfffffffe);
    local_38 = FUN_4a1724e0(uVar9,uVar12);
    local_3c = FUN_4a171a94(uVar9,uVar12);
    uVar9 = *(undefined4 *)puVar4;
    local_50 = FUN_4a0bc200(uVar9);
    local_54 = FUN_4a0bc1f8(uVar9);
    if (local_50 < local_54) {
      piVar6 = &local_54;
    }
    else {
      piVar6 = &local_50;
    }
    uVar9 = FUN_4a171fac((*piVar6 + -0x1b8) / 2);
    uVar13 = FUN_4a17295c(uVar9,1);
    FUN_4a13ca78(iVar14);
    uVar7 = FUN_4a171fac();
    uVar13 = FUN_4a1725c0(uVar7,uVar13);
    uVar7 = FUN_4a17295c(uVar13,0xfffffffe);
    uVar7 = FUN_4a171a94(uVar7,uVar9);
    uVar8 = FUN_4a17211c(uVar13,0x3f400000);
    local_40 = FUN_4a171a94(uVar8,uVar9);
    iVar15 = FUN_4a13ca78(iVar14);
    local_44 = iVar15 + -0x164 >> 1;
    FUN_4a1725c0(uVar12,0x41d80000);
    local_48 = FUN_4a171e1c();
    FUN_4a171a94(uVar9,0x41e00000);
    iVar15 = FUN_4a171e1c();
    iVar14 = FUN_4a13ca78(iVar14);
    local_4c = FUN_4a171e1c(uVar12);
    local_60 = FUN_4a17295c(uVar13,0xffffffff);
    local_5c = 0x3f800000;
    local_58 = 0x3fc00000;
    local_54 = 0;
    local_50 = 0;
    local_64 = local_38;
    local_30 = local_60;
    FUN_4a0a02bc(local_34,0x18d,0x18e,399,uVar7);
    local_5c = 0x3f800000;
    local_58 = 0xbfc00000;
    local_54 = 0;
    local_50 = 0;
    local_64 = local_3c;
    local_60 = local_30;
    FUN_4a0a02bc(local_34,0x18d,0x18e,399,uVar7);
    local_64 = local_38;
    local_60 = local_30;
    local_5c = 0x3f800000;
    local_58 = 0x3fc00000;
    FUN_4a0a0b5c(local_34,399,0x18e,0x18d,local_40);
    local_64 = local_3c;
    local_60 = local_30;
    local_5c = 0x3f800000;
    local_58 = -0x40400000;
    FUN_4a0a0b5c(local_34,399,0x18e,0x18d,local_40);
    uVar9 = FUN_4a171fac(local_4c);
    uVar12 = FUN_4a171fac(iVar15);
    local_64 = 0x3f800000;
    local_60 = 0x3f800000;
    local_5c = 0;
    FUN_4a09f664(local_34,0xb2,uVar12,uVar9,0x3f800000);
    uVar12 = FUN_4a171fac(iVar14 - iVar15);
    local_64 = 0x3f800000;
    local_60 = 0x3f800000;
    local_5c = 0;
    FUN_4a09f664(local_34,0xb3,uVar12,uVar9,0x3f800000);
    FUN_4a09f3a4(local_34,local_28);
    uVar9 = 0xffffffff;
    if (*(int *)(param_1 + 0x69c) == 0x10) {
      uVar9 = 10;
    }
    else if (*(int *)(param_1 + 0x69c) == 0x11) {
      uVar9 = 0xb;
    }
    uVar9 = FUN_4a0cf540(param_1,uVar9);
    local_64 = 1;
    FUN_4a0d22c4(uVar9,local_44,local_48,0x164,0x37);
    FUN_4a0d23c4(uVar9,local_28);
    FUN_4a0bbcb4(*(undefined4 *)puVar4);
    break;
  case 0x13:
  case 0x14:
    iVar16 = *(int *)(param_1 + 0x20);
    iVar14 = *(int *)(param_1 + 0x69c);
    uVar13 = 0xffffffff;
    iVar17 = iVar16 + 0x278;
    iVar15 = 0;
    uVar12 = 0xaf7;
    uVar9 = uVar12;
    if (iVar14 == 5) {
      uVar12 = *(undefined4 *)(param_1 + 0x6a0);
      iVar14 = FUN_4a143ac8(*(undefined4 *)(param_1 + 0x28),uVar12);
      iVar15 = (int)*(short *)(iVar14 + 0x1a);
      iVar14 = FUN_4a143ac8(*(undefined4 *)(param_1 + 0x28),uVar12);
      uVar13 = *(undefined4 *)(iVar14 + 0xc);
    }
    else if (iVar14 == 9) {
      uVar9 = *(undefined4 *)(*(int *)(param_1 + 0x6a4) + 0x28);
      iVar14 = FUN_4a143ac8(*(undefined4 *)(param_1 + 0x28),uVar9);
      iVar15 = (int)*(short *)(iVar14 + 0x1c);
      iVar14 = FUN_4a143ac8(*(undefined4 *)(param_1 + 0x28),uVar9);
      uVar13 = *(undefined4 *)(iVar14 + 0xc);
      uVar9 = 0xaf8;
    }
    else if (iVar14 == 0x13) {
      iVar15 = 0x32;
      uVar13 = 0xc23;
    }
    else {
      uVar9 = 0xffffffff;
      if (iVar14 == 0x14) {
        iVar15 = 0x32;
        uVar13 = 0xc4c;
        uVar9 = uVar12;
      }
    }
    FUN_4a0ce950(param_1,1,uVar13);
    FUN_4a0ce950(param_1,2,uVar9);
    uVar9 = FUN_4a06c410(iVar17);
    FUN_4a06c86c(iVar17,iVar15);
    FUN_4a06b694(iVar17,0xfffffff7,uVar9);
    FUN_4a0ce950(param_1,3,0xfffffff7);
    FUN_4a10ce84(param_1,param_2);
    FUN_4a041910(1);
    FUN_4a0fe1e0(iVar16,param_2);
    FUN_4a0cdc50(param_1,param_2,2);
    break;
  case 0x15:
  case 0x16:
    FUN_4a10ce84(param_1,param_2);
    FUN_4a041910(1);
    FUN_4a0fe1e0(iVar14,param_2);
    FUN_4a0ce0a8(param_1,param_2);
  }
  puVar4 = PTR_DAT_4a041a9c;
  iVar14 = 0;
  if (*(int *)PTR_DAT_4a041a9c != 0) {
    iVar14 = *(int *)(PTR_DAT_4a041a9c + 4);
  }
  if (*(int *)PTR_DAT_4a041a9c == 0 || iVar14 == 0) {
    return;
  }
  *(undefined4 *)(PTR_DAT_4a041a9c + 0x28) = 0;
  iVar14 = *(int *)(PTR_DAT_4a041a9c + 0x38);
  if (*(int *)(PTR_DAT_4a041a9c + 0x1c) != 0) {
    *(int *)(puVar4 + 8) = *(int *)(PTR_DAT_4a041a9c + 0x34) + *(int *)(puVar4 + 0x3c);
    *(int *)(puVar4 + 0xc) = iVar14 + *(int *)(puVar4 + 0x40);
    FUN_4a150d7c(-(*(int *)(puVar4 + 0x14) + *(int *)(puVar4 + 0x3c) / 2),
                 -(*(int *)(puVar4 + 0x40) / 2));
    thunk_FUN_4a150140(0xc11);
    *(undefined4 *)(puVar4 + 0x24) = 1;
    FUN_4a1507ec(0,0,*(undefined4 *)(puVar4 + 0x34),*(undefined4 *)(puVar4 + 0x38));
    *(undefined4 *)(puVar4 + 0x24) = 0;
  }
  if (*(int *)(puVar4 + 0x20) != 0) {
    *(int *)(puVar4 + 8) = *(int *)(puVar4 + 0x34) + *(int *)(puVar4 + 0x3c);
    *(int *)(puVar4 + 0xc) = *(int *)(puVar4 + 0x38) + *(int *)(puVar4 + 0x40);
    FUN_4a150d7c((*(int *)(puVar4 + 0x10) + *(int *)(puVar4 + 0x18)) - *(int *)(puVar4 + 0x3c) / 2,
                 -(*(int *)(puVar4 + 0x40) / 2));
    *(undefined4 *)(puVar4 + 0x24) = 1;
    thunk_FUN_4a150140(0xc11);
    FUN_4a1507ec(*(undefined4 *)(puVar4 + 0x34),0,*(undefined4 *)(puVar4 + 0x34),
                 *(undefined4 *)(puVar4 + 0x38));
    *(undefined4 *)(puVar4 + 0x24) = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a0419cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a11494c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a11494c(int param_1,int *param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar16;
  undefined8 uVar17;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int *piStack_28;
  
  uVar2 = *(uint *)(param_1 + 0xa64);
  bVar16 = (uVar2 & 0xc) != 0;
  if (bVar16) {
    uVar2 = *(uint *)(param_1 + 0x1c0);
  }
  if (!bVar16 || uVar2 == 7) {
    return;
  }
  iVar12 = *(int *)(param_1 + 0x20);
  iStack_34 = iVar12 + 0x278;
  iStack_38 = iVar12 + 0x128;
  uVar9 = *(undefined4 *)(param_1 + 0x24);
  iStack_2c = param_1;
  piStack_28 = param_2;
  uStack_3c = uVar9;
  if ((*(char *)(param_1 + 0x1dc) == '\0') && (*(char *)(param_1 + 0x632) != '\0')) {
    if ((*(int *)(param_1 + 0x674) != 0) &&
       (iVar3 = FUN_4a146b58(*(int *)(param_1 + 0x674),0x2000), iVar3 != 0)) {
      iStack_40 = FUN_4a146a9c(*(undefined4 *)(param_1 + 0x674));
      goto LAB_4a1149f0;
    }
  }
  else {
    iVar3 = FUN_4a141268(uVar9);
    if (iVar3 != 0) {
      iStack_40 = FUN_4a13f8d0(uVar9);
      goto LAB_4a1149f0;
    }
  }
  iStack_40 = -1;
LAB_4a1149f0:
  if (iStack_40 == 0) {
    iStack_40 = -1;
  }
  if (*(int *)(param_1 + 0x1c0) != 0x10 && *(int *)(param_1 + 0x1c0) != 7) {
    FUN_4a11238c(param_1,piStack_28);
  }
  puVar1 = PTR_DAT_4a1159cc;
  iStack_44 = FUN_4a0bbd68(*(undefined4 *)PTR_DAT_4a1159cc,0xf0,2);
  iVar3 = FUN_4a13caa0(iVar12);
  iStack_48 = FUN_4a0bbe00(*(undefined4 *)puVar1,iVar3 + -0x21,2);
  if (*(int *)(param_1 + 0x2a0) != -1) {
    uStack_64 = FUN_4a171fac(iStack_48 + -0x16);
    iStack_68 = 0x18;
    uStack_6c = 0;
    FUN_4a0bbe98(*(undefined4 *)puVar1,&iStack_68,&uStack_6c);
    uVar9 = FUN_4a171fac(iStack_68);
    uVar9 = FUN_4a171a94(uVar9,0x42300000);
    FUN_4a09f664(iStack_38,0x37,uVar9,uStack_64);
    iVar3 = FUN_4a13ca78(iVar12);
    uVar4 = FUN_4a171fac(iVar3 - iStack_68);
    uVar4 = FUN_4a1725c0(uVar4,0x42000000);
    FUN_4a09f664(iStack_38,0x39,uVar4,uStack_64);
    uVar4 = FUN_4a171fac(iStack_68);
    uVar4 = FUN_4a17295c(uVar4,1);
    FUN_4a13ca78(iVar12);
    uVar5 = FUN_4a171fac();
    uVar5 = FUN_4a1725c0(uVar5,0x42b00000);
    uVar5 = FUN_4a1725c0(uVar5,0x42800000);
    uVar4 = FUN_4a1725c0(uVar5,uVar4);
    uVar5 = FUN_4a17295c(uVar4,0xffffffff);
    uVar9 = FUN_4a171a94(uVar9,0x42300000);
    uVar9 = FUN_4a171a94(uVar9,uVar5);
    FUN_4a17295c(uVar4,0xfffffffe);
    FUN_4a09f664(iStack_38,0x38,uVar9,uStack_64);
    FUN_4a09f3a4(iStack_38,piStack_28);
    FUN_4a1724e0(uVar5,uVar9);
    uVar9 = FUN_4a171e1c();
    uVar4 = FUN_4a171e1c(uVar4);
    FUN_4a1725c0(uStack_64,0x41800000);
    FUN_4a171e1c();
    iStack_70 = (**(code **)(*piStack_28 + 0x74))(piStack_28);
    iStack_74 = (**(code **)(*piStack_28 + 0x78))(piStack_28);
    iStack_78 = (**(code **)(*piStack_28 + 0x70))(piStack_28);
    (**(code **)(*piStack_28 + 0x6c))(piStack_28);
    (**(code **)(*piStack_28 + 0x9c))(piStack_28,uVar9,iStack_74,uVar4);
    FUN_4a06b074(iStack_34,piStack_28,*(undefined4 *)(param_1 + 0x2a0),4);
    if (*(int *)(param_1 + 0x2a4) != -1) {
      FUN_4a06bf88(iStack_34,*(undefined4 *)(param_1 + 0x2a0),4);
      FUN_4a06b074(iStack_34,piStack_28,*(undefined4 *)(param_1 + 0x2a4),4);
    }
    (**(code **)(*piStack_28 + 0x9c))(piStack_28,iStack_70,iStack_74,iStack_78);
  }
  if (((*(int *)(param_1 + 0x1d8) == 0) &&
      (iVar3 = FUN_4a142ef4(*(undefined4 *)(param_1 + 0x28)), iVar3 == 0)) &&
     ((*(uint *)(param_1 + 0xa64) & 0x100) != 0)) {
    iVar10 = iStack_44 + -0xd0;
    iVar3 = FUN_4a0bc1f8(*(undefined4 *)puVar1);
    if ((iVar3 == 400) || (iVar3 = FUN_4a0bc1f8(*(undefined4 *)puVar1), iVar3 == 0x140)) {
      iVar10 = -0x20;
    }
    uVar9 = FUN_4a171fac(iStack_48 + -0x32);
    uVar4 = FUN_4a171fac(iVar10);
    FUN_4a09f664(iStack_38,0x29,uVar4,uVar9);
  }
  iStack_4c = iStack_44 + 0x39;
  iVar3 = FUN_4a0bc1f8(*(undefined4 *)puVar1);
  if (iVar3 == 400) {
    iStack_4c = iStack_4c + -0x82;
  }
  else {
    iVar3 = FUN_4a0bc1f8(*(undefined4 *)puVar1);
    if (iVar3 == 0x140) {
      iStack_4c = iStack_4c + -0xa0;
    }
  }
  iStack_50 = iStack_48 + -9;
  iStack_54 = iStack_48 + 0xc;
  uStack_58 = 0xffffffff;
  iStack_5c = -1;
  uStack_60 = 0;
  if (iStack_40 == -1) {
    if ((*(uint *)(param_1 + 0xa64) & 4) != 0) {
      FUN_4a09f974(iStack_38,0x24);
      iVar3 = FUN_4a171e1c();
      uVar9 = FUN_4a0bbd68(*(undefined4 *)puVar1,iVar3 >> 1,2);
      uVar4 = FUN_4a171fac(iStack_48);
      uVar9 = FUN_4a171fac(uVar9);
      FUN_4a09f664(iStack_38,0x24,uVar9,uVar4);
    }
    if ((*(uint *)(param_1 + 0xa64) & 8) != 0) {
      iVar3 = FUN_4a13ca78(iVar12);
      FUN_4a09f974(iStack_38,0x25);
      iVar10 = FUN_4a171e1c();
      uVar9 = FUN_4a0bbd68(*(undefined4 *)puVar1,iVar3 - (iVar10 >> 1),2);
      uVar4 = FUN_4a171fac(iStack_48);
      uVar9 = FUN_4a171fac(uVar9);
      FUN_4a09f664(iStack_38,0x25,uVar9,uVar4);
    }
    iVar3 = FUN_4a13ca78(iVar12);
    uVar9 = FUN_4a0bbd68(*(undefined4 *)puVar1,iVar3 + -0x21,2);
    iVar3 = FUN_4a13caa0(iVar12);
    FUN_4a0bbe00(*(undefined4 *)puVar1,iVar3 + -0x21,2);
    if ((*(uint *)(param_1 + 0xa64) & 0x40) == 0) {
      if ((*(uint *)(param_1 + 0xa64) & 8) != 0) {
        uVar4 = FUN_4a171fac();
        uVar9 = FUN_4a171fac(uVar9);
        FUN_4a09f664(iStack_38,0x176,uVar9,uVar4);
      }
    }
    else {
      uVar4 = FUN_4a171fac();
      uVar9 = FUN_4a171fac(uVar9);
      FUN_4a09f664(iStack_38,0x176,uVar9,uVar4);
    }
  }
  else {
    uStack_58 = FUN_4a13f968(uStack_3c,iStack_40);
    FUN_4a16bdcc(&iStack_74,param_1 + 0x1ac);
    FUN_4a0dcb74(uStack_3c,iStack_40);
    FUN_4a16bef4(&iStack_74);
    iVar3 = iStack_44;
    iVar10 = *(int *)(param_1 + 0x1b8);
    iVar6 = 0;
    if (iVar10 != 0) {
      piVar11 = *(int **)(iVar10 + 8);
    }
    else {
      piVar11 = (int *)0x0;
    }
    iStack_5c = *piVar11;
    if (iVar10 != 0) {
      iVar6 = *(int *)(iVar10 + 8);
    }
    uStack_60 = *(undefined4 *)(iVar6 + 4);
    iVar6 = iStack_44 + -0xa2;
    iVar10 = FUN_4a0bc1f8(*(undefined4 *)puVar1);
    if (iVar10 == 400) {
      iVar6 = iVar3 + -0x124;
    }
    else {
      iVar10 = FUN_4a0bc1f8(*(undefined4 *)puVar1);
      if (iVar10 == 0x140) {
        iVar6 = iVar3 + -0x142;
      }
    }
    uVar9 = FUN_4a171fac(iStack_48);
    uVar4 = FUN_4a171fac(iVar6);
    FUN_4a09f664(iStack_38,0x26,uVar4,uVar9);
    iVar3 = iStack_44;
    iVar6 = iStack_44 + -0x54;
    iVar10 = FUN_4a0bc1f8(*(undefined4 *)puVar1);
    if (iVar10 == 400) {
      iVar6 = iVar3 + -0xd6;
    }
    else {
      iVar10 = FUN_4a0bc1f8(*(undefined4 *)puVar1);
      if (iVar10 == 0x140) {
        iVar6 = iVar3 + -0xf4;
      }
    }
    uVar9 = *(undefined4 *)puVar1;
    iVar3 = iStack_48 + 1;
    iStack_78 = FUN_4a0bc200(uVar9);
    iStack_7c = FUN_4a0bc1f8(uVar9);
    if (iStack_78 < iStack_7c) {
      piVar11 = &iStack_7c;
    }
    else {
      piVar11 = &iStack_78;
    }
    iVar10 = FUN_4a0bc000(*(undefined4 *)puVar1,*piVar11 + -8);
    FUN_4a171fac(iVar10 + -0x96);
    FUN_4a171fac(iVar3);
    FUN_4a171fac(iVar6 + (iVar10 + -0x96 >> 1));
    iStack_7c = 0;
    iStack_78 = 0;
    FUN_4a0a02bc(iStack_38,0x116);
    FUN_4a086b6c(piStack_28,iStack_38,iStack_4c,iStack_50);
    if (iStack_5c != -1) {
      FUN_4a086b6c(piStack_28,iStack_38,iStack_4c,iStack_54);
    }
  }
  if ((*(uint *)(param_1 + 0xa64) & 0x800) != 0) {
    uVar9 = FUN_4a171fac(iStack_44);
    uVar4 = FUN_4a1725c0(uVar9,0x42e40000);
    iVar3 = FUN_4a0bc1f8(*(undefined4 *)puVar1);
    if (iVar3 == 400) {
      uVar4 = FUN_4a1725c0(uVar9,0x437a0000);
    }
    else {
      iVar3 = FUN_4a0bc1f8(*(undefined4 *)puVar1);
      if (iVar3 == 0x140) {
        uVar4 = FUN_4a1725c0(uVar9,0x438c0000);
      }
    }
    uVar9 = FUN_4a171fac(iStack_48);
    uVar9 = FUN_4a1725c0(uVar9,0x41300000);
    FUN_4a09f664(iStack_38,0x115,uVar4,uVar9);
  }
  uVar9 = FUN_4a0bbd68(*(undefined4 *)puVar1,0x21,2);
  iVar12 = FUN_4a13caa0(iVar12);
  FUN_4a0bbe00(*(undefined4 *)puVar1,iVar12 + -0x21,2);
  if ((*(uint *)(param_1 + 0xa64) & 0x80) == 0) {
    if ((*(uint *)(param_1 + 0xa64) & 4) != 0) {
      uVar4 = FUN_4a171fac();
      uVar9 = FUN_4a171fac(uVar9);
      FUN_4a09f664(iStack_38,0x17d,uVar9,uVar4);
    }
  }
  else {
    uVar4 = FUN_4a171fac();
    uVar9 = FUN_4a171fac(uVar9);
    FUN_4a09f664(iStack_38,0x17d,uVar9,uVar4);
  }
  if (*(int *)(param_1 + 0x2a0) != -1) {
    uVar9 = FUN_4a171fac(iStack_44 + -0xa2);
    iVar12 = FUN_4a0bc1f8(*(undefined4 *)puVar1);
    if (iVar12 == 400) {
      uVar9 = FUN_4a1725c0(uVar9,0x43020000);
    }
    else {
      iVar12 = FUN_4a0bc1f8(*(undefined4 *)puVar1);
      if (iVar12 == 0x140) {
        uVar9 = FUN_4a1725c0(uVar9,0x43200000);
      }
    }
    uVar4 = FUN_4a171fac(iStack_48 + -0x18);
    FUN_4a09f664(iStack_38,0x3a,uVar9,uVar4);
  }
  FUN_4a171fac(iStack_44 + -0x78);
  iVar12 = FUN_4a0bc1f8(*(undefined4 *)PTR_DAT_4a1159cc);
  if (iVar12 == 400) {
    uVar9 = FUN_4a171fac(iStack_44);
    FUN_4a1725c0(uVar9,DAT_4a1159d4);
  }
  else {
    iVar12 = FUN_4a0bc1f8(*(undefined4 *)PTR_DAT_4a1159cc);
    if (iVar12 == 0x140) {
      uVar9 = FUN_4a171fac(iStack_44);
      FUN_4a1725c0(uVar9,0x438c0000);
    }
  }
  FUN_4a171fac(iStack_48 + 0xd);
  iVar12 = *(int *)(param_1 + 0x7c0);
  iStack_7c = 0;
  iStack_78 = 0;
  FUN_4a0a02bc(iStack_38,0x2e,0x2f,0x30);
  FUN_4a09f3a4(iStack_38,piStack_28);
  (**(code **)(*piStack_28 + 0x74))(piStack_28);
  (**(code **)(*piStack_28 + 0x78))(piStack_28);
  (**(code **)(*piStack_28 + 0x70))(piStack_28);
  (**(code **)(*piStack_28 + 0x6c))(piStack_28);
  iStack_7c = 0;
  iStack_78 = 0;
  uVar4 = 0x31;
  uVar9 = 0x32;
  uVar5 = 0x33;
  if (iVar12 < 0) {
    uVar4 = 0x34;
    uVar9 = 0x35;
    uVar5 = 0x36;
  }
  FUN_4a0a02bc(iStack_38,uVar4,uVar9,uVar5);
  FUN_4a09f3a4(iStack_38,piStack_28);
  puVar1 = PTR_DAT_4a1159cc;
  if (iStack_40 == -1) {
    uVar9 = *(undefined4 *)PTR_DAT_4a1159cc;
    iStack_70 = FUN_4a0bc200(uVar9);
    iStack_74 = FUN_4a0bc1f8(uVar9);
    if (iStack_70 < iStack_74) {
      piVar11 = &iStack_74;
    }
    else {
      piVar11 = &iStack_70;
    }
    FUN_4a0bbd68(*(undefined4 *)puVar1,*piVar11 + -0x5f,2);
    uStack_64 = FUN_4a171fac();
    uStack_30 = FUN_4a171fac(iStack_48);
    uVar9 = FUN_4a171a94(uStack_30,0x41000000);
    uVar4 = *(undefined4 *)puVar1;
    iStack_70 = FUN_4a0bc200(uVar4);
    iStack_74 = FUN_4a0bc1f8(uVar4);
    puVar1 = PTR_DAT_4a1159cc;
    if (iStack_70 < iStack_74) {
      piVar11 = &iStack_74;
    }
    else {
      piVar11 = &iStack_70;
    }
    FUN_4a0bbd68(*(undefined4 *)PTR_DAT_4a1159cc,*piVar11 + -0xbb,2);
    iStack_68 = FUN_4a171fac();
    iVar12 = FUN_4a0bc1f8(*(undefined4 *)puVar1);
    if (iVar12 == 0x140) {
      iStack_68 = FUN_4a171a94(iStack_68,0x431e0000);
    }
    uVar4 = 0x41a00000;
    iVar12 = 0;
    uStack_6c = uVar9;
    do {
      uVar17 = CONCAT44(uVar4,iStack_68);
      iVar3 = 0;
      do {
        uVar4 = (undefined4)uVar17;
        if (iVar3 == 4) {
          iVar10 = FUN_4a141a98(uStack_3c,(int)((ulonglong)uVar17 >> 0x20));
          uVar5 = 0x3f800000;
          uVar13 = uVar9;
          uVar4 = uStack_64;
        }
        else {
          iVar10 = FUN_4a13f8e4(uStack_3c,iVar3);
          uVar5 = DAT_4a1159d8;
          uVar13 = uStack_6c;
        }
        iVar6 = 0;
        if (*(int *)(param_1 + 0x708) != 0) {
          iVar6 = *(int *)(*(int *)(param_1 + 0x708) + 8);
        }
        piVar11 = *(int **)(iVar6 + iVar3 * 4);
        if (((iVar10 != -1) && (iVar12 == 0)) || (((piVar11[3] & 2U) != 0 && (iVar12 == 1)))) {
          iStack_70 = 0x3f800000;
          if ((piVar11[3] & 2U) != 0) {
            uVar7 = FUN_4a0fb0c0(piVar11);
            FUN_4a17211c(uVar7,uVar5);
            if (*piVar11 == 4) {
              iStack_70 = FUN_4a0fb090(piVar11);
            }
          }
          FUN_4a09f664(iStack_38,0x28,uVar4,uVar13);
        }
        uVar17 = FUN_4a171a94(uVar4,0x41a00000);
        uVar4 = (undefined4)((ulonglong)uVar17 >> 0x20);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 5);
      iVar12 = iVar12 + 1;
    } while (iVar12 < 2);
    if (iStack_40 == -1) {
      uVar9 = FUN_4a171fac(iStack_44);
      iVar3 = FUN_4a1725c0(uVar9,0x42800000);
      puVar1 = PTR_DAT_4a1159cc;
      iVar12 = FUN_4a0bc1f8(*(undefined4 *)PTR_DAT_4a1159cc);
      if (iVar12 == 400) {
        iVar3 = FUN_4a1725c0(uVar9,0x43520000);
      }
      else {
        iVar12 = FUN_4a0bc1f8(*(undefined4 *)puVar1);
        if (iVar12 == 0x140) {
          iVar3 = FUN_4a1725c0(uVar9,0x43660000);
        }
      }
      uStack_64 = FUN_4a171a94(uStack_30,0x41400000);
      iVar12 = FUN_4a13fb98(uStack_3c);
      iVar6 = 0;
      iVar14 = 0;
      iVar15 = 0;
      iVar10 = 0;
      iStack_68 = iVar3;
      while( true ) {
        bVar16 = SBORROW4(iVar10,iVar12);
        iVar3 = iVar10 - iVar12;
        if (iVar10 < iVar12) {
          bVar16 = SBORROW4(iVar6,4);
          iVar3 = iVar6 + -4;
        }
        if (iVar3 < 0 == bVar16) break;
        iVar3 = FUN_4a13fba0(uStack_3c,iVar10);
        if (iVar3 < 0x230000) {
          uVar9 = FUN_4a13fde4(uStack_3c,iVar10);
          FUN_4a09f664(iStack_38,uVar9,iStack_68,uStack_64);
          iVar3 = *(int *)(param_1 + 0x730);
          if (iVar3 == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)(iVar3 + 8);
          }
          if (*(int *)(iVar8 + iVar10 * 4) != 0) {
            if (iVar3 == 0) {
              iVar8 = 0;
            }
            else {
              iVar8 = *(int *)(iVar3 + 8);
            }
            if (*(int *)(iVar8 + iVar10 * 4) != -1) {
              if (iVar3 == 0) {
                iVar3 = 0;
              }
              else {
                iVar3 = *(int *)(iVar3 + 8);
              }
              if (iVar12 + 1 <= *(int *)(iVar3 + iVar10 * 4)) goto LAB_4a115908;
            }
            if (*(int *)(param_1 + 0x71c) == 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = *(int *)(*(int *)(param_1 + 0x71c) + 8);
            }
            FUN_4a0fae94(*(undefined4 *)(iVar3 + iVar10 * 4),6,0x10);
          }
LAB_4a115908:
          if (*(int *)(param_1 + 0x730) == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(*(int *)(param_1 + 0x730) + 8);
          }
          *(int *)(iVar3 + iVar10 * 4) = iVar6 + iVar12 + 1;
          iVar3 = *(int *)(param_1 + 0x71c);
          if (iVar3 == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)(iVar3 + 8);
          }
          if ((*(uint *)(*(int *)(iVar8 + iVar10 * 4) + 0xc) & 2) != 0) {
            if (iVar3 == 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = *(int *)(iVar3 + 8);
            }
            uStack_6c = FUN_4a0fb0c0(*(undefined4 *)(iVar3 + iVar10 * 4));
            uVar9 = FUN_4a13fdfc(uStack_3c,iVar10);
            FUN_4a09f664(iStack_38,uVar9,iStack_68,uStack_64);
          }
          iStack_68 = FUN_4a171a94(iStack_68,0x41b00000);
          iVar6 = iVar6 + 1;
          iVar14 = iVar14 + 1;
        }
        iVar10 = iVar10 + 1;
      }
      iVar3 = 0;
      while( true ) {
        bVar16 = SBORROW4(iVar3,iVar12);
        iVar10 = iVar3 - iVar12;
        if (iVar3 < iVar12) {
          bVar16 = SBORROW4(iVar6,4);
          iVar10 = iVar6 + -4;
        }
        if (iVar10 < 0 == bVar16) break;
        iVar10 = FUN_4a13fba0(uStack_3c,iVar3);
        if (iVar10 < 0x410001) {
          iVar10 = FUN_4a13fba0(uStack_3c,iVar3);
          if (0x22ffff < iVar10) {
            if (*(int *)(param_1 + 0x730) == 0) {
              iVar10 = 0;
            }
            else {
              iVar10 = *(int *)(*(int *)(param_1 + 0x730) + 8);
            }
            *(undefined4 *)(iVar10 + iVar3 * 4) = 0xffffffff;
          }
        }
        else {
          uVar9 = FUN_4a140384();
          FUN_4a09f664(iStack_38,uVar9,iStack_68,uStack_64);
          iVar10 = *(int *)(param_1 + 0x730);
          if (iVar10 == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)(iVar10 + 8);
          }
          if (*(int *)(iVar8 + iVar3 * 4) != 0) {
            if (iVar10 == 0) {
              iVar8 = 0;
            }
            else {
              iVar8 = *(int *)(iVar10 + 8);
            }
            if (*(int *)(iVar8 + iVar3 * 4) != -1) {
              if (iVar10 == 0) {
                iVar10 = 0;
              }
              else {
                iVar10 = *(int *)(iVar10 + 8);
              }
              if (*(int *)(iVar10 + iVar3 * 4) < iVar12 + 1) goto LAB_4a115a94;
            }
            if (*(int *)(param_1 + 0x71c) == 0) {
              iVar10 = 0;
            }
            else {
              iVar10 = *(int *)(*(int *)(param_1 + 0x71c) + 8);
            }
            FUN_4a0fae94(*(undefined4 *)(iVar10 + iVar3 * 4),6,0x10);
          }
LAB_4a115a94:
          if (*(int *)(param_1 + 0x730) == 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = *(int *)(*(int *)(param_1 + 0x730) + 8);
          }
          *(int *)(iVar10 + iVar3 * 4) = iVar6 + 1;
          iVar10 = *(int *)(param_1 + 0x71c);
          if (iVar10 == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)(iVar10 + 8);
          }
          if ((*(uint *)(*(int *)(iVar8 + iVar3 * 4) + 0xc) & 2) != 0) {
            if (iVar10 == 0) {
              iVar10 = 0;
            }
            else {
              iVar10 = *(int *)(iVar10 + 8);
            }
            uStack_6c = FUN_4a0fb0c0(*(undefined4 *)(iVar10 + iVar3 * 4));
            uVar9 = FUN_4a13fdfc(uStack_3c,iVar3);
            FUN_4a09f664(iStack_38,uVar9,iStack_68,uStack_64);
          }
          iStack_68 = FUN_4a171a94(iStack_68,0x41b00000);
          iVar6 = iVar6 + 1;
          iVar15 = iVar15 + 1;
        }
        iVar3 = iVar3 + 1;
      }
      iVar12 = FUN_4a13f9c0(*(undefined4 *)(param_1 + 0x24));
      if ((iVar14 < 3) || (-0x50001 < iVar12)) {
        if (iVar15 < 3) {
          *(undefined1 *)(param_1 + 0xa80) = 1;
        }
        else if (*(char *)(param_1 + 0xa80) != '\0' && 0x50000 < iVar12) {
          FUN_4a11a440(param_1,0x15);
        }
      }
      else {
        FUN_4a11a440(param_1,0x16);
      }
    }
  }
  FUN_4a09f3a4(iStack_38,piStack_28);
  if ((*(uint *)(param_1 + 0xa64) & 0x800) != 0) {
    uVar9 = FUN_4a171fac(iStack_44);
    uVar4 = FUN_4a1725c0(uVar9,0x42e40000);
    puVar1 = PTR_DAT_4a1159cc;
    iVar12 = FUN_4a0bc1f8(*(undefined4 *)PTR_DAT_4a1159cc);
    if (iVar12 == 400) {
      uVar4 = FUN_4a1725c0(uVar9,0x437a0000);
    }
    else {
      iVar12 = FUN_4a0bc1f8(*(undefined4 *)puVar1);
      if (iVar12 == 0x140) {
        uVar4 = FUN_4a1725c0(uVar9,0x438c0000);
      }
    }
    uVar9 = FUN_4a171fac(iStack_48);
    uVar9 = FUN_4a1725c0(uVar9,0x41300000);
    uVar5 = FUN_4a06c410(iStack_34);
    FUN_4a06c86c(iStack_34,*(undefined4 *)(param_1 + 0x224));
    FUN_4a171e1c(uVar9);
    FUN_4a171e1c(uVar4);
    FUN_4a06afd0(iStack_34,piStack_28,uVar5,3);
  }
  if (iStack_40 != -1) {
    FUN_4a086b6c(piStack_28,0,iStack_4c,iStack_50);
    if (iStack_5c != -1) {
      FUN_4a086b6c(piStack_28,0,iStack_4c,iStack_54);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a115cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a115cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



// Address: 4a115d34

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a115d34(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (*(char *)(param_1 + 0x632) != '\0') {
    return;
  }
  *(undefined4 *)(param_1 + 0x2b4) = 0;
  iVar1 = FUN_4a115d8c(param_1,0);
  bVar6 = param_2 == 0;
  if (bVar6) {
    iVar1 = param_1;
  }
  *(int *)(param_1 + 0x2f4) = param_2;
  if (!bVar6) {
    iVar1 = param_1;
  }
  uVar2 = (uint)!bVar6;
  iVar5 = *(int *)(iVar1 + 700);
  *(uint *)(iVar1 + 700) = uVar2;
  switch(uVar2) {
  case 0:
    *(undefined1 *)(iVar1 + 0x2d8) = 1;
    *(undefined4 *)(iVar1 + 0x2f8) = 0;
    *(undefined4 *)(iVar1 + 0x2fc) = 0;
    *(undefined4 *)(iVar1 + 0x304) = 0;
    *(undefined4 *)(iVar1 + 0x300) = 0;
    *(undefined4 *)(iVar1 + 0x308) = 0;
    *(undefined4 *)(iVar1 + 0x30c) = 0;
    break;
  case 1:
    *(undefined1 *)(iVar1 + 0x2d8) = 0;
    FUN_4a111968(iVar1);
  }
  if (iVar5 != 0) {
    return;
  }
  if (uVar2 == 0) {
    return;
  }
  FUN_4a084b60(iVar1 + 0x318,*(undefined4 *)(*(int *)(iVar1 + 0x28) + 0x470));
  FUN_4a084b60(iVar1 + 0x38c,*(undefined4 *)(*(int *)(iVar1 + 0x28) + 0x474));
  FUN_4a084b60(iVar1 + 0x400,*(undefined4 *)(*(int *)(iVar1 + 0x28) + 0x478));
  FUN_4a084b60(iVar1 + 0x474,*(undefined4 *)(*(int *)(iVar1 + 0x28) + 0x48c));
  FUN_4a084b60(iVar1 + 0x4e8,*(undefined4 *)(*(int *)(iVar1 + 0x28) + 0x484));
  uVar3 = *(undefined4 *)(*(int *)(iVar1 + 0x28) + 0x488);
  iVar5 = 0;
  if (0 < *(int *)(iVar1 + 0x5b0)) {
    do {
      if (*(int *)(iVar1 + 0x594) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(iVar1 + 0x594) + 8);
      }
      *(undefined4 *)(iVar4 + iVar5 * 4) = uVar3;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(iVar1 + 0x5b0));
  }
  if (0 < *(int *)(iVar1 + 0x5b4)) {
    iVar5 = 0;
    do {
      if (*(int *)(iVar1 + 0x5a8) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(iVar1 + 0x5a8) + 8);
      }
      *(undefined4 *)(iVar4 + iVar5 * 4) = uVar3;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(iVar1 + 0x5b4));
  }
  *(undefined4 *)(iVar1 + 0x5cc) = uVar3;
  *(undefined4 *)(iVar1 + 0x5c4) = uVar3;
  *(undefined4 *)(iVar1 + 0x5c0) = uVar3;
  return;
}



// Address: 4a115d8c

void FUN_4a115d8c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(int *)(param_1 + 0x2f4) = param_2;
  if (param_2 == 0) {
    if (*(int *)(param_1 + 700) == 8) {
      return;
    }
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(iVar1 + 0x470);
    *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(iVar1 + 0x474);
    *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(iVar1 + 0x478);
    *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(iVar1 + 0x48c);
    *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(iVar1 + 0x484);
    *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(iVar1 + 0x488);
    iVar1 = 2;
  }
  iVar3 = *(int *)(param_1 + 700);
  *(int *)(param_1 + 700) = iVar1;
  switch(iVar1) {
  case 0:
    *(undefined1 *)(param_1 + 0x2d8) = 1;
    *(undefined4 *)(param_1 + 0x2f8) = 0;
    *(undefined4 *)(param_1 + 0x2fc) = 0;
    *(undefined4 *)(param_1 + 0x304) = 0;
    *(undefined4 *)(param_1 + 0x300) = 0;
    *(undefined4 *)(param_1 + 0x308) = 0;
    *(undefined4 *)(param_1 + 0x30c) = 0;
  }
  if (iVar3 == 0) {
    if (iVar1 != 0) {
      FUN_4a084b60(param_1 + 0x318,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x470));
      FUN_4a084b60(param_1 + 0x38c,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x474));
      FUN_4a084b60(param_1 + 0x400,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x478));
      FUN_4a084b60(param_1 + 0x474,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x48c));
      FUN_4a084b60(param_1 + 0x4e8,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x484));
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x488);
      iVar1 = 0;
      if (0 < *(int *)(param_1 + 0x5b0)) {
        do {
          if (*(int *)(param_1 + 0x594) == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(*(int *)(param_1 + 0x594) + 8);
          }
          *(undefined4 *)(iVar3 + iVar1 * 4) = uVar2;
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(param_1 + 0x5b0));
      }
      if (0 < *(int *)(param_1 + 0x5b4)) {
        iVar1 = 0;
        do {
          if (*(int *)(param_1 + 0x5a8) == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(*(int *)(param_1 + 0x5a8) + 8);
          }
          *(undefined4 *)(iVar3 + iVar1 * 4) = uVar2;
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(param_1 + 0x5b4));
      }
      *(undefined4 *)(param_1 + 0x5cc) = uVar2;
      *(undefined4 *)(param_1 + 0x5c4) = uVar2;
      *(undefined4 *)(param_1 + 0x5c0) = uVar2;
      return;
    }
    return;
  }
  return;
}



// Address: 4a115de8

void FUN_4a115de8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(int *)(param_1 + 0x2b4) = param_2;
  *(int *)(param_1 + 0x2f4) = param_2;
  if (param_2 == 0) {
    if (*(int *)(param_1 + 700) == 8) {
      return;
    }
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(iVar1 + 0x470);
    *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(iVar1 + 0x474);
    *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(iVar1 + 0x478);
    *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(iVar1 + 0x48c);
    *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(iVar1 + 0x484);
    *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(iVar1 + 0x488);
    iVar1 = 2;
  }
  iVar3 = *(int *)(param_1 + 700);
  *(int *)(param_1 + 700) = iVar1;
  switch(iVar1) {
  case 0:
    *(undefined1 *)(param_1 + 0x2d8) = 1;
    *(undefined4 *)(param_1 + 0x2f8) = 0;
    *(undefined4 *)(param_1 + 0x2fc) = 0;
    *(undefined4 *)(param_1 + 0x304) = 0;
    *(undefined4 *)(param_1 + 0x300) = 0;
    *(undefined4 *)(param_1 + 0x308) = 0;
    *(undefined4 *)(param_1 + 0x30c) = 0;
  }
  if (iVar3 == 0) {
    if (iVar1 != 0) {
      FUN_4a084b60(param_1 + 0x318,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x470));
      FUN_4a084b60(param_1 + 0x38c,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x474));
      FUN_4a084b60(param_1 + 0x400,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x478));
      FUN_4a084b60(param_1 + 0x474,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x48c));
      FUN_4a084b60(param_1 + 0x4e8,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x484));
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x488);
      iVar1 = 0;
      if (0 < *(int *)(param_1 + 0x5b0)) {
        do {
          if (*(int *)(param_1 + 0x594) == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(*(int *)(param_1 + 0x594) + 8);
          }
          *(undefined4 *)(iVar3 + iVar1 * 4) = uVar2;
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(param_1 + 0x5b0));
      }
      if (0 < *(int *)(param_1 + 0x5b4)) {
        iVar1 = 0;
        do {
          if (*(int *)(param_1 + 0x5a8) == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(*(int *)(param_1 + 0x5a8) + 8);
          }
          *(undefined4 *)(iVar3 + iVar1 * 4) = uVar2;
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(param_1 + 0x5b4));
      }
      *(undefined4 *)(param_1 + 0x5cc) = uVar2;
      *(undefined4 *)(param_1 + 0x5c4) = uVar2;
      *(undefined4 *)(param_1 + 0x5c0) = uVar2;
      return;
    }
    return;
  }
  return;
}



// Address: 4a115df0

void FUN_4a115df0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined1 auStack_cc [20];
  undefined1 auStack_b8 [20];
  undefined1 auStack_a4 [20];
  undefined1 auStack_90 [20];
  undefined1 auStack_7c [20];
  undefined1 auStack_68 [20];
  undefined1 auStack_54 [20];
  undefined1 auStack_40 [12];
  int local_34;
  int local_2c;
  int local_28;
  
  uVar12 = *(undefined4 *)(param_1 + 0x24);
  local_28 = param_1 + 0x638;
  FUN_4a16bdcc(auStack_40);
  local_2c = param_1 + 0x64c;
  iVar11 = 0;
  FUN_4a16bdcc(auStack_54);
  FUN_4a0d56bc(uVar12,0xffffffff);
  *(undefined1 *)(param_1 + 0x632) = 1;
  *(undefined1 *)(param_1 + 0x633) = 0;
  *(undefined2 *)(param_1 + 0x634) = 0xffff;
  *(int *)(param_1 + 0x674) = param_2;
  if (*(int *)(param_1 + 0x1c0) == 7) {
    uVar12 = FUN_4a16bdcc(auStack_68,auStack_40);
    FUN_4a108a9c(param_2,uVar12);
    FUN_4a16bef4(auStack_68);
    uVar12 = FUN_4a16bdcc(auStack_7c,auStack_40);
    uVar1 = FUN_4a16bdcc(auStack_68,auStack_54);
    FUN_4a0ff434(uVar1,uVar12);
    FUN_4a16bef4(auStack_68);
    puVar3 = auStack_7c;
  }
  else {
    puVar2 = (undefined4 *)FUN_4a0c6bc0(auStack_68);
    *puVar2 = PTR_PTR_4a1161c8;
    puVar2[2] = *(undefined4 *)(param_1 + 0x78c);
    piVar6 = *(int **)(param_1 + 0x790);
    puVar2[3] = piVar6;
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0xc))();
    }
    uVar10 = 0;
    *puVar2 = PTR_PTR_4a1161cc;
    uVar9 = puVar2[2];
    if ((int)uVar9 < 1) {
      uVar13 = 0;
    }
    else {
      uVar13 = uVar9 & 1;
    }
    if (uVar13 != 0) {
      do {
        if (puVar2[3] == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(puVar2[3] + 8);
        }
        if (*(int *)(iVar7 + uVar10 * 4) == param_2) goto LAB_4a115fa4;
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar13);
    }
    if ((int)uVar13 < (int)uVar9) {
      iVar7 = puVar2[3];
      do {
        if (iVar7 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(iVar7 + 8);
        }
        uVar10 = uVar13;
        if (*(int *)(iVar8 + uVar13 * 4) == param_2) goto LAB_4a115fa4;
        if (iVar7 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(iVar7 + 8);
        }
        if (*(int *)(iVar8 + (uVar13 + 1) * 4) == param_2) {
          uVar10 = uVar13 + 1;
          goto LAB_4a115fa4;
        }
        uVar13 = uVar13 + 2;
      } while ((int)uVar13 < (int)uVar9);
    }
    uVar10 = 0xffffffff;
LAB_4a115fa4:
    FUN_4a16a5f4(auStack_68);
    piVar6 = (int *)0x0;
    if (uVar10 == 0xffffffff) {
LAB_4a116188:
      uVar1 = FUN_4a16bdcc(auStack_b8,auStack_54);
      uVar4 = FUN_4a16bdcc(auStack_a4,auStack_40);
      FUN_4a0da1e0(uVar12,*(undefined4 *)(param_1 + 0x674),uVar4,uVar1);
      FUN_4a16bef4(auStack_a4);
      puVar3 = auStack_b8;
    }
    else {
      if (*(int *)(param_1 + 0x77c) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(*(int *)(param_1 + 0x77c) + 8);
      }
      if (*(int *)(iVar7 + uVar10 * 4) == 2) goto LAB_4a116188;
      iVar7 = FUN_4a146b58(*(undefined4 *)(param_1 + 0x674),0x2000);
      if (iVar7 == 0) {
        iVar7 = FUN_4a1460f8(*(undefined4 *)(param_1 + 0x674));
      }
      else {
        iVar8 = *(int *)(param_1 + 0x24);
        iVar7 = FUN_4a146a9c(*(undefined4 *)(param_1 + 0x674));
        iVar8 = *(int *)(iVar8 + 0x420);
        if (iVar8 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(iVar8 + 8);
        }
        iVar7 = (int)*(short *)(iVar8 + iVar7 * 2);
      }
      uVar1 = FUN_4a16bdcc(auStack_a4,auStack_40);
      FUN_4a0ff4b8(uVar1,iVar7);
      FUN_4a16bef4(auStack_a4);
      uVar1 = FUN_4a16bdcc(auStack_a4,auStack_54);
      FUN_4a0ff4b8(uVar1,iVar7);
      FUN_4a16bef4(auStack_a4);
      uVar1 = FUN_4a16bdcc(auStack_a4,auStack_40);
      FUN_4a0fc4b0(uVar1,0x86e);
      FUN_4a16bef4(auStack_a4);
      uVar1 = FUN_4a16bdcc(auStack_a4,auStack_54);
      FUN_4a0fc4b0(uVar1,0xfffffffd);
      puVar3 = auStack_a4;
    }
    FUN_4a16bef4(puVar3);
    uVar1 = FUN_4a16bdcc(auStack_90,auStack_54);
    uVar4 = FUN_4a16bdcc(auStack_7c,param_1 + 0x660);
    FUN_4a0ff434(uVar4,uVar1);
    FUN_4a16bef4(auStack_7c);
    FUN_4a16bef4(auStack_90);
    if (local_34 != 0) {
      piVar6 = *(int **)(local_34 + 8);
    }
    if (*piVar6 <= (int)*(short *)(param_1 + 0x1f0)) goto LAB_4a116138;
    uVar1 = FUN_4a16bdcc(auStack_cc,param_1 + 0x660);
    uVar4 = FUN_4a16bdcc(auStack_b8,auStack_54);
    uVar5 = FUN_4a16bdcc(auStack_a4,auStack_40);
    FUN_4a0dac94(uVar12,uVar5,uVar4,uVar1);
    FUN_4a16bef4(auStack_a4);
    FUN_4a16bef4(auStack_b8);
    puVar3 = auStack_cc;
  }
  FUN_4a16bef4(puVar3);
LAB_4a116138:
  if (local_34 != 0) {
    iVar11 = *(int *)(local_34 + 8);
  }
  *(int *)(iVar11 + 0x10) = (int)*(short *)(param_1 + 0x1f0);
  FUN_4a09145c(*(undefined4 *)(param_1 + 0x678),local_28,local_2c);
  FUN_4a16bef4(auStack_54);
  FUN_4a16bef4(auStack_40);
  return;
}



// Address: 4a1161d0

/* WARNING: Removing unreachable block (ram,0x4a120fec) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1161d0(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(param_1 + 0x1c0);
  iVar7 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x1c0) = param_2;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined1 *)(param_1 + 0x1dc) = 1;
  host_s3eAccelerometerStop_arm();
  switch(param_2) {
  default:
    return;
  case 1:
    *(undefined4 *)(param_1 + 500) = 0;
    *(undefined1 *)(param_1 + 0x632) = 0;
    *(undefined1 *)(param_1 + 0x67c) = 0;
    if (*PTR_DAT_4a1164e4 == '\0') {
      iVar6 = *(int *)(*(int *)(param_1 + 0x20) + 0x264);
      *(undefined1 *)(iVar6 + 0xc) = 1;
      *(undefined4 *)(iVar6 + 0x28) = 1;
      *(undefined1 *)(iVar6 + 0x30) = 1;
      *(undefined4 *)(iVar6 + 0x2c) = 0xffffffff;
      *(undefined1 *)(iVar6 + 0x14) = 0;
      switch(*(undefined4 *)(iVar6 + 0x18)) {
      case 0:
        *(undefined4 *)(iVar6 + 0x18) = 5;
        return;
      case 1:
        goto switchD_4a0d3700_caseD_1;
      default:
        return;
      }
    }
    iVar6 = host_s3eAudioGetInt_arm(1);
    if (iVar6 != 0) {
      return;
    }
    return;
  case 2:
    if (*(int *)(param_1 + 0x1d0) == 0x61) {
      FUN_4a0fc560(*(undefined4 *)(param_1 + 0x20),0);
    }
    uVar4 = *(undefined4 *)(param_1 + 0x1d0);
    *(undefined4 *)(iVar7 + 0x460) = *(undefined4 *)(param_1 + 0x1cc);
    *(undefined4 *)(iVar7 + 0x464) = uVar4;
    return;
  case 3:
    if (*(char *)(param_1 + 0x632) != '\0') {
      *(undefined1 *)(param_1 + 0x632) = 0;
      *(undefined1 *)(param_1 + 0x633) = 0;
      *(undefined2 *)(param_1 + 0x634) = 0xffff;
      *(undefined4 *)(param_1 + 0x674) = 0;
      *(undefined4 *)(param_1 + 0x2b4) = 0;
      FUN_4a115d8c(param_1,0);
    }
    uVar4 = 0x82e;
    iVar6 = 0x83b;
    break;
  case 4:
    if (*(char *)(param_1 + 0x632) != '\0') {
      *(undefined1 *)(param_1 + 0x632) = 0;
      *(undefined1 *)(param_1 + 0x633) = 0;
      *(undefined2 *)(param_1 + 0x634) = 0xffff;
      *(undefined4 *)(param_1 + 0x674) = 0;
      *(undefined4 *)(param_1 + 0x2b4) = 0;
      FUN_4a115d8c(param_1,0);
    }
    if (*(int *)(param_1 + 0x1cc) == 2) {
      iVar6 = *(int *)(param_1 + 0x1d0);
      if (iVar6 == 0x61) {
LAB_4a1163a8:
        iVar6 = 0xc1c;
      }
      else if (iVar6 == 0x62) {
        iVar6 = 0xc1b;
      }
      else if (iVar6 == 100) {
        iVar6 = FUN_4a145a38();
        if (iVar6 == 4) {
          iVar6 = 0xc1d;
        }
        else {
          iVar6 = 0xc1f;
        }
      }
      else {
        iVar6 = FUN_4a145960(*(undefined4 *)(param_1 + 0x20));
        if (iVar6 == 0) goto LAB_4a1163a8;
        iVar6 = 0xc1e;
      }
    }
    uVar4 = 0xc21;
    break;
  case 5:
    *(undefined1 *)(iVar7 + 0x50) = 0;
    return;
  case 6:
    *(undefined4 *)(param_1 + 0x2b8) = 2;
    if ((*(int *)(param_1 + 0x2b4) == 0) ||
       (iVar6 = FUN_4a146b58(*(int *)(param_1 + 0x2b4),2), iVar6 == 0)) {
      *(undefined4 *)(param_1 + 0x2b4) = 0;
      FUN_4a115d8c(param_1,0);
    }
  case 7:
    *(undefined1 *)(param_1 + 0x1dc) = 0;
    return;
  case 0xb:
    uVar4 = FUN_4a0d7bf0(*(undefined4 *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x6ec) = uVar4;
    uVar3 = 0xaf1;
    uVar4 = 0xaf2;
    goto FUN_4a0ce9a4;
  case 0xf:
    uVar4 = *(undefined4 *)(param_1 + 0x744);
    uVar3 = *(undefined4 *)(param_1 + 0x740);
FUN_4a0ce9a4:
    FUN_4a089fa0(*(undefined4 *)(param_1 + 0x168),uVar4,uVar3,4);
    return;
  case 0x10:
    host_s3eAccelerometerStart_arm();
    *(undefined4 *)(param_1 + 0x810) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x814) = 0;
    return;
  case 0x14:
    uVar4 = 0x838;
    iVar6 = 0xc92;
    break;
  case 0x15:
    *(undefined1 *)(param_1 + 0x1dc) = 0;
    if (iVar6 == 9 || iVar6 == 0xe) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a120fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_LAB_4a120ff0)();
    return;
  case 0x16:
    uVar4 = 0xc9e;
    iVar6 = 0xc9f;
  }
  FUN_4a089eb4(*(undefined4 *)(param_1 + 0x168),iVar6,uVar4,0x40);
  return;
switchD_4a0d3700_caseD_1:
  *(undefined4 *)(iVar6 + 0x18) = 2;
  uVar2 = *(uint *)(iVar6 + 0x24);
  if ((int)uVar2 < 0) {
    return;
  }
  iVar7 = *(int *)(*(int *)(iVar6 + 8) + 0x74);
  iVar6 = 0;
  if (iVar7 != 0) {
    iVar6 = *(int *)(iVar7 + 8);
  }
  iVar1 = 0;
  if (iVar7 == 0) {
    iVar6 = 0;
  }
  iVar6 = *(int *)(iVar6 + (uVar2 & 0xffff) * 0x14 + 0xc);
  if (iVar6 != 0) {
    iVar1 = *(int *)(iVar6 + 8);
  }
  piVar5 = *(int **)(iVar1 + (uVar2 >> 0x10) * 4);
  if (piVar5 == (int *)0x0) {
    return;
  }
  (**(code **)(*piVar5 + 0x40))(piVar5);
                    /* WARNING: Could not recover jumptable at 0x4a08673c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar5 + 0x38))(piVar5,*(code **)(*piVar5 + 0x38),0);
  return;
}



// Address: 4a1164e8

void FUN_4a1164e8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa84) + -1;
  *(int *)(param_1 + 0xa84) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x20) + 0x264);
  *(undefined1 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0xffffffff;
  iVar1 = host_s3eAudioGetInt_arm(1);
  if (iVar1 == 0) {
    return;
  }
  return;
}



// Address: 4a1166e0

void FUN_4a1166e0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined1 auStack_50 [8];
  int local_48;
  int local_44;
  undefined1 auStack_3c [12];
  int local_30;
  undefined1 auStack_28 [12];
  int local_1c;
  
  piVar10 = *(int **)(param_1 + 0x5f8);
  FUN_4a16bdcc(auStack_28,param_1 + 0x770);
  piVar9 = (int *)0x0;
  puVar1 = (undefined4 *)FUN_4a0c6bc0(auStack_3c);
  *puVar1 = PTR_PTR_4a1169c4;
  puVar1[2] = *(undefined4 *)(param_1 + 0x78c);
  piVar6 = *(int **)(param_1 + 0x790);
  puVar1[3] = piVar6;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))();
  }
  *puVar1 = PTR_PTR_4a1169c8;
  if (*(int *)(param_1 + 0x76c) < 1) {
    uVar5 = FUN_4a13fb44(*(undefined4 *)(param_1 + 0x24),piVar10[0x35]);
    if ((uVar5 & 0x80000) == 0) {
      if (local_1c == 0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = *(int **)(local_1c + 8);
      }
      *piVar6 = piVar10[0x35];
      if (local_30 != 0) {
        piVar9 = *(int **)(local_30 + 8);
      }
      *piVar9 = piVar10[0x38];
      *(undefined4 *)(param_1 + 0x76c) = 1;
    }
  }
  else {
    iVar2 = (**(code **)(*piVar10 + 0x10))(piVar10);
    if (iVar2 == 0) {
      iVar2 = piVar10[0x35];
      if (local_1c == 0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = *(int **)(local_1c + 8);
      }
      if ((*piVar6 != iVar2) &&
         (uVar5 = FUN_4a13fb44(*(undefined4 *)(param_1 + 0x24),iVar2), (uVar5 & 0x80000) == 0)) {
        if (local_1c == 0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = *(int **)(local_1c + 8);
        }
        *piVar6 = iVar2;
        if (local_30 != 0) {
          piVar9 = *(int **)(local_30 + 8);
        }
        *piVar9 = piVar10[0x38];
      }
    }
    else {
      *(int *)(param_1 + 0x76c) = *(int *)(param_1 + 0x76c) + -1;
      iVar2 = 0;
      do {
        if (local_1c != 0) {
          iVar7 = *(int *)(local_1c + 8);
        }
        else {
          iVar7 = 0;
        }
        if (local_1c != 0) {
          iVar8 = *(int *)(local_1c + 8);
        }
        else {
          iVar8 = 0;
        }
        *(undefined4 *)(iVar8 + iVar2 * 4) = *(undefined4 *)(iVar7 + (iVar2 + 1) * 4);
        if (local_30 != 0) {
          iVar7 = *(int *)(local_30 + 8);
        }
        else {
          iVar7 = 0;
        }
        if (local_30 != 0) {
          iVar8 = *(int *)(local_30 + 8);
        }
        else {
          iVar8 = 0;
        }
        *(undefined4 *)(iVar8 + iVar2 * 4) = *(undefined4 *)(iVar7 + (iVar2 + 1) * 4);
        iVar7 = *(int *)(param_1 + 0x7a4);
        if (iVar7 != 0) {
          iVar8 = *(int *)(iVar7 + 8);
        }
        else {
          iVar8 = 0;
        }
        if (iVar7 != 0) {
          iVar7 = *(int *)(iVar7 + 8);
        }
        else {
          iVar7 = 0;
        }
        *(undefined4 *)(iVar7 + iVar2 * 4) = *(undefined4 *)(iVar8 + (iVar2 + 1) * 4);
        iVar7 = *(int *)(param_1 + 0x7b8);
        if (iVar7 != 0) {
          iVar8 = *(int *)(iVar7 + 8);
        }
        else {
          iVar8 = 0;
        }
        if (iVar7 != 0) {
          iVar7 = *(int *)(iVar7 + 8);
        }
        else {
          iVar7 = 0;
        }
        *(undefined4 *)(iVar7 + iVar2 * 4) = *(undefined4 *)(iVar8 + (iVar2 + 1) * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 2);
      if (local_30 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(local_30 + 8);
      }
      *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x76c) * 4) = 0;
      if (0 < *(int *)(param_1 + 0x76c)) {
        iVar2 = *(int *)(param_1 + 0x5f8);
        if (local_1c == 0) {
          puVar1 = (undefined4 *)0x0;
        }
        else {
          puVar1 = *(undefined4 **)(local_1c + 8);
        }
        if (local_30 == 0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = *(undefined4 **)(local_30 + 8);
        }
        uVar11 = *puVar3;
        if (*(int *)(param_1 + 0x7a4) == 0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x7a4) + 8);
        }
        if (*(int *)(param_1 + 0x7b8) == 0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x7b8) + 8);
        }
        FUN_4a0737a4(iVar2,*puVar1,uVar11,*puVar3,*puVar4);
        FUN_4a110aac(auStack_50,param_1);
        iVar7 = 0;
        if (0 < local_48) {
          do {
            if (local_44 == 0) {
              iVar8 = 0;
            }
            else {
              iVar8 = *(int *)(local_44 + 8);
            }
            iVar8 = *(int *)(iVar8 + iVar7 * 4);
            if (iVar8 != iVar2) {
              FUN_4a071d48(iVar8,uVar11);
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < local_48);
        }
        FUN_4a169a1c(auStack_50);
      }
    }
  }
  FUN_4a16a5f4(auStack_3c);
  FUN_4a16bef4(auStack_28);
  return;
}



// Address: 4a1169cc

void FUN_4a1169cc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_38 [20];
  undefined1 auStack_24 [20];
  
  *(undefined4 *)(param_1 + 0x76c) = 0;
  iVar1 = FUN_4a16bdcc(auStack_24,param_1 + 0x770);
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 8)) {
    do {
      if (*(int *)(iVar1 + 0xc) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(iVar1 + 0xc) + 8);
      }
      *(undefined4 *)(iVar5 + iVar3 * 4) = 0xffffffff;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar1 + 8));
  }
  FUN_4a16bef4(auStack_24);
  puVar2 = (undefined4 *)FUN_4a0c6bc0(auStack_38);
  *puVar2 = PTR_PTR_4a116ab4;
  puVar2[2] = *(undefined4 *)(param_1 + 0x78c);
  piVar4 = *(int **)(param_1 + 0x790);
  puVar2[3] = piVar4;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))();
  }
  iVar1 = 0;
  *puVar2 = PTR_PTR_4a116ab8;
  if (0 < (int)puVar2[2]) {
    do {
      if (puVar2[3] == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(puVar2[3] + 8);
      }
      *(undefined4 *)(iVar3 + iVar1 * 4) = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)puVar2[2]);
  }
  FUN_4a16a5f4(auStack_38);
  return;
}



// Address: 4a116abc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a116abc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  iVar3 = FUN_4a10ea38(param_1,10,param_2,param_3,param_4,3);
  if (iVar3 == 0) {
    return;
  }
  *(uint *)(iVar3 + 0x38) = *(uint *)(iVar3 + 0x38) & 0xffffff7f;
  if ((*(uint *)(iVar3 + 0x38) & 0x80) == 0) {
    uVar4 = 0x10;
  }
  else {
    uVar4 = 0x14;
  }
  puVar5 = (undefined4 *)0x0;
  if (*(int *)(iVar3 + 0x8c) < 1) {
    puVar2 = (uint *)0x0;
  }
  else {
    if (*(int *)(iVar3 + 0x90) != 0) {
      puVar5 = *(undefined4 **)(*(int *)(iVar3 + 0x90) + 8);
    }
    puVar2 = (uint *)*puVar5;
  }
  uVar1 = uVar4 >> 4;
  bVar6 = uVar1 == 0;
  if (bVar6) {
    uVar1 = *puVar2;
  }
  if (bVar6 && uVar1 == param_5) {
    iVar3 = FUN_4a099c5c();
    if ((int)puVar2[1] < iVar3) {
      if ((int)puVar2[1] < 0) {
        iVar3 = FUN_4a099c5c(*puVar2);
        puVar2[1] = iVar3 - 1;
      }
    }
    else {
      puVar2[1] = 0;
    }
  }
  else {
    *puVar2 = param_5;
    if ((puVar2[3] & 8) == 0) {
      puVar2[1] = 0;
    }
    else {
      iVar3 = FUN_4a099c5c(param_5);
      puVar2[1] = iVar3 - 1;
    }
    puVar2[2] = 0;
  }
  puVar2[3] = uVar4 & 4 | 3;
  return;
}



// Address: 4a116b10

/* WARNING: Removing unreachable block (ram,0x4a0da040) */
/* WARNING: Removing unreachable block (ram,0x4a0da048) */
/* WARNING: Removing unreachable block (ram,0x4a0d9fcc) */
/* WARNING: Removing unreachable block (ram,0x4a0d9fd4) */
/* WARNING: Removing unreachable block (ram,0x4a0d9f58) */
/* WARNING: Removing unreachable block (ram,0x4a0d9f60) */
/* WARNING: Removing unreachable block (ram,0x4a0d9ee4) */
/* WARNING: Removing unreachable block (ram,0x4a0d9eec) */
/* WARNING: Removing unreachable block (ram,0x4a0d9e70) */
/* WARNING: Removing unreachable block (ram,0x4a0d9e78) */
/* WARNING: Removing unreachable block (ram,0x4a0d9dfc) */
/* WARNING: Removing unreachable block (ram,0x4a0d9e04) */
/* WARNING: Removing unreachable block (ram,0x4a116204) */
/* WARNING: Removing unreachable block (ram,0x4a0d9e38) */
/* WARNING: Removing unreachable block (ram,0x4a0d9e40) */
/* WARNING: Removing unreachable block (ram,0x4a0d9eac) */
/* WARNING: Removing unreachable block (ram,0x4a0d9eb4) */
/* WARNING: Removing unreachable block (ram,0x4a0d9f20) */
/* WARNING: Removing unreachable block (ram,0x4a0d9f28) */
/* WARNING: Removing unreachable block (ram,0x4a0d9f94) */
/* WARNING: Removing unreachable block (ram,0x4a0d9f9c) */
/* WARNING: Removing unreachable block (ram,0x4a0da008) */
/* WARNING: Removing unreachable block (ram,0x4a0da010) */
/* WARNING: Removing unreachable block (ram,0x4a0da07c) */
/* WARNING: Removing unreachable block (ram,0x4a0da084) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a116b10(int param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  int iVar5;
  int iVar6;
  undefined4 local_30;
  undefined4 uStack_2c;
  int local_28 [3];
  
  iVar6 = *(int *)(param_1 + 0x24);
  if (param_2 != 0x94) {
    if (param_2 != 0x93) {
      return;
    }
    iVar3 = FUN_4a12785c(param_1,param_3);
    if (iVar3 == 0) {
      iVar5 = 0xf0000;
      iVar3 = FUN_4a13fc4c(iVar6,0);
      if (iVar3 == -1) {
        iVar3 = FUN_4a13fc4c(iVar6,0,1);
        if (iVar3 != -1) {
          iVar5 = FUN_4a0d4b28(0xf0000,0xc000);
        }
      }
      else {
        iVar5 = FUN_4a0d4b28(0xf0000,0x14000);
      }
      FUN_4a13fc4c(iVar6,0,4);
      FUN_4a13fc4c(iVar6,0,5);
      FUN_4a13fc4c(iVar6,0,10);
      FUN_4a13fc4c(iVar6,0,0xb);
      FUN_4a13fc4c(iVar6,0,10);
      FUN_4a13fc4c(iVar6,0,0xb);
      FUN_4a13fc4c(iVar6,0,0xd);
      FUN_4a13fc4c(iVar6,0,0xc);
      FUN_4a13fc4c(iVar6,0,7);
      FUN_4a13fc4c(iVar6,0,6);
      FUN_4a13fc4c(iVar6,0,0xf);
      FUN_4a13fc4c(iVar6,0,0xe);
      iVar3 = FUN_4a13fc4c(iVar6,0,2);
      if ((iVar3 == -1) || (-1 < iVar5)) {
        iVar3 = FUN_4a13fc4c(iVar6,0,3);
        if ((iVar3 != -1) && (iVar5 < 0)) {
          iVar5 = FUN_4a0d4b28(iVar5,0xc000);
        }
      }
      else {
        iVar5 = FUN_4a0d4b28(iVar5,0x14000);
      }
      iVar3 = FUN_4a13fc4c(iVar6,0,9);
      if ((iVar3 == -1) || (-1 < iVar5)) {
        iVar3 = FUN_4a13fc4c(iVar6,0,8);
        if ((iVar3 != -1) && (iVar5 < 0)) {
          FUN_4a0d4b28(iVar5,0xc000);
        }
      }
      else {
        FUN_4a0d4b28(iVar5,0x14000);
      }
      FUN_4a16bdcc(local_28,iVar6 + 0x830);
      iVar6 = 0;
      if (unaff_r4 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(unaff_r4 + 8);
      }
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 0xf0000;
      if (unaff_r4 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(unaff_r4 + 8);
      }
      uVar4 = FUN_4a0d4b74(*(undefined4 *)(iVar3 + 0x10),0,0x640000);
      if (unaff_r4 != 0) {
        iVar6 = *(int *)(unaff_r4 + 8);
      }
      *(undefined4 *)(iVar6 + 0x10) = uVar4;
      FUN_4a16bef4(local_28);
      return;
    }
    *(undefined4 *)(param_1 + 0x290) = 0;
    FUN_4a0cd7c0(param_1,0xb3a,0x957);
    goto FUN_4a1161d0;
  }
  iVar3 = FUN_4a12785c(param_1,param_3);
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x290) = 0;
    FUN_4a0cd7c0(param_1,0xb3a,0x958);
    goto FUN_4a1161d0;
  }
  bVar2 = false;
  if (*(int *)(param_1 + 0x1d8) == 2) {
LAB_4a116bac:
    bVar1 = false;
  }
  else {
    FUN_4a110aac(&local_30,param_1);
    bVar2 = true;
    if (3 < local_28[0]) goto LAB_4a116bac;
    bVar1 = true;
  }
  if (bVar2) {
    FUN_4a169a1c(&local_30);
  }
  if ((bVar1) && (iVar6 = FUN_4a0d8c3c(iVar6,param_3), iVar6 != 0)) {
    iVar6 = FUN_4a11f758(param_1,4);
    switchD_4a11cc8c::default(iVar6 != 0,s_no_town_object__4a116ce0);
    local_30 = *(undefined4 *)(iVar6 + 0x4c);
    uStack_2c = *(undefined4 *)(iVar6 + 0x50);
    local_28[0] = param_3;
    uVar4 = FUN_4a10ea38(param_1,1,*(undefined4 *)(iVar6 + 0x44),*(undefined4 *)(iVar6 + 0x48));
    FUN_4a071480(uVar4,0x40);
    *(undefined4 *)(param_1 + 0x290) = 0;
    FUN_4a0cd7c0(param_1,0xb3b,0x958);
  }
  else {
    *(undefined4 *)(param_1 + 0x290) = 0;
    FUN_4a0cd7c0(param_1,0xb3c,0x958);
  }
FUN_4a1161d0:
  *(undefined4 *)(param_1 + 0x1c0) = 9;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined1 *)(param_1 + 0x1dc) = 1;
  host_s3eAccelerometerStop_arm();
                    /* WARNING: Could not recover jumptable at 0x4a116200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_caseD_0_4a11622c)();
  return;
}



// Address: 4a116cf0

/* WARNING: Removing unreachable block (ram,0x4a116204) */

void FUN_4a116cf0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x28) == 0x9d) {
    FUN_4a0fc570(*(undefined4 *)(param_1 + 0x20),0);
    FUN_4a0fd198(*(undefined4 *)(param_1 + 0x20),4);
    *(undefined4 *)(param_1 + 0x1cc) = 2;
    *(undefined4 *)(param_1 + 0x1d0) = 100;
  }
  else if (*(int *)(param_2 + 0x28) == 1) {
    FUN_4a0fc570(*(undefined4 *)(param_1 + 0x20),param_2);
    FUN_4a0fd198(*(undefined4 *)(param_1 + 0x20),0xb7);
    *(undefined4 *)(param_1 + 0x1cc) = 2;
    *(undefined4 *)(param_1 + 0x1d0) = 100;
  }
  else {
    uVar1 = FUN_4a1441e0(*(undefined4 *)(param_1 + 0x28));
    FUN_4a0fc560(*(undefined4 *)(param_1 + 0x20),uVar1);
    *(undefined4 *)(param_1 + 0x1d0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1cc) = 2;
  }
  *(undefined4 *)(param_1 + 0x1c0) = 4;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined1 *)(param_1 + 0x1dc) = 1;
  host_s3eAccelerometerStop_arm();
                    /* WARNING: Could not recover jumptable at 0x4a116200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_caseD_4_4a116218)();
  return;
}



// Address: 4a116fb0

/* WARNING: Removing unreachable block (ram,0x4a122af8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a116fb0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  ushort uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  undefined4 uVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  undefined1 auStack_38 [8];
  int iStack_30;
  int iStack_2c;
  
  iVar14 = 0;
  *(undefined4 *)(param_1 + 0x768) = 0;
  FUN_4a073908(*(undefined4 *)(param_1 + 0x5f8));
  if (param_2 == 0x8f) {
    iVar14 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_3 + 0x24) + 0x520),
                          *(undefined4 *)(param_3 + 0x28));
    cVar2 = *(char *)(iVar14 + 8);
    uVar11 = *(uint *)(param_3 + 0x38);
    if (cVar2 == '\x14' || cVar2 == '\x15') {
      uVar11 = uVar11 & 0xffdfffff;
      *(uint *)(param_3 + 0x38) = uVar11;
    }
    if (((uVar11 & 0x40) != 0) && (cVar2 == '\x1a')) {
      FUN_4a1164e8(*(undefined4 *)(param_3 + 0x20));
    }
    iVar14 = 0;
  }
  else if (param_2 == 0x8e) {
    iVar14 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_3 + 0x24) + 0x520),
                          *(undefined4 *)(param_3 + 0x28));
    cVar2 = *(char *)(iVar14 + 8);
    uVar11 = *(uint *)(param_3 + 0x38);
    if (cVar2 == '\x14' || cVar2 == '\x15') {
      uVar11 = uVar11 & 0xffdfffff;
      *(uint *)(param_3 + 0x38) = uVar11;
    }
    if ((uVar11 & 0x40) == 0 && cVar2 == '\x1a') {
      FUN_4a1144f4(*(undefined4 *)(param_3 + 0x20));
    }
    iVar14 = 1;
  }
  else {
    if (param_2 != 0x90) {
      if (param_2 == 0x8a) {
        iVar14 = *(int *)(*(int *)(param_1 + 0x20) + 0x264);
        if (*(int *)(iVar14 + 0x2c) == -1) {
          uVar5 = FUN_4a0ff494();
          iVar7 = FUN_4a0fe640(uVar5,0,5);
          uVar5 = *(undefined4 *)(PTR_DAT_4a0d34e0 + iVar7 * 4);
          *(undefined1 *)(iVar14 + 0xc) = 1;
          *(undefined4 *)(iVar14 + 0x28) = uVar5;
          *(undefined1 *)(iVar14 + 0x30) = 0;
          *(undefined4 *)(iVar14 + 0x2c) = 0xffffffff;
          *(undefined1 *)(iVar14 + 0x14) = 0;
          switch(*(undefined4 *)(iVar14 + 0x18)) {
          case 0:
            *(undefined4 *)(iVar14 + 0x18) = 5;
            break;
          case 1:
            *(undefined4 *)(iVar14 + 0x18) = 2;
            FUN_4a0866c0(*(undefined4 *)(iVar14 + 8),*(undefined4 *)(iVar14 + 0x24));
          }
          *(int *)(iVar14 + 0x2c) = iVar7;
          return;
        }
        if (*(int *)(iVar14 + 0x18) != 1) {
          return;
        }
        *(undefined4 *)(iVar14 + 0x18) = 2;
        uVar11 = *(uint *)(iVar14 + 0x24);
        if ((int)uVar11 < 0) {
          return;
        }
        iVar7 = *(int *)(*(int *)(iVar14 + 8) + 0x74);
        iVar14 = 0;
        if (iVar7 != 0) {
          iVar14 = *(int *)(iVar7 + 8);
        }
        iVar4 = 0;
        if (iVar7 == 0) {
          iVar14 = 0;
        }
        iVar14 = *(int *)(iVar14 + (uVar11 & 0xffff) * 0x14 + 0xc);
        if (iVar14 != 0) {
          iVar4 = *(int *)(iVar14 + 8);
        }
        piVar12 = *(int **)(iVar4 + (uVar11 >> 0x10) * 4);
        if (piVar12 == (int *)0x0) {
          return;
        }
        (**(code **)(*piVar12 + 0x40))(piVar12);
                    /* WARNING: Could not recover jumptable at 0x4a08673c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar12 + 0x38))(piVar12,*(code **)(*piVar12 + 0x38),0);
        return;
      }
      if (param_2 == 0x8b) {
        FUN_4a111238(param_1);
        *(undefined1 *)(param_1 + 0x67d) = 1;
        *(undefined4 *)(param_1 + 0x694) = 3;
                    /* WARNING: Could not recover jumptable at 0x4a122af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR_caseD_3_4a122b08)(param_1,3,0x82e);
        return;
      }
      iVar7 = (**(code **)(**(int **)(param_1 + 0x5f8) + 0x10))();
      if (iVar7 != 0) {
        iVar4 = *(int *)(param_1 + 0x5f8);
        uStack_40 = param_5;
        FUN_4a0737a4(iVar4,param_2,param_3,param_4);
        FUN_4a110aac(auStack_38,param_1);
        iVar7 = 0;
        if (0 < iStack_30) {
          do {
            iVar10 = iVar14;
            if (iStack_2c != 0) {
              iVar10 = *(int *)(iStack_2c + 8);
            }
            iVar10 = *(int *)(iVar10 + iVar7 * 4);
            if (iVar10 != iVar4) {
              FUN_4a071d48(iVar10,param_3);
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < iStack_30);
        }
        FUN_4a169a1c(auStack_38);
        return;
      }
      if (param_2 == 0x6f) {
        for (iVar7 = *(int *)(param_1 + 0x76c) + -1; -1 < iVar7; iVar7 = iVar7 + -2) {
          iVar4 = iVar14;
          if (*(int *)(param_1 + 0x77c) != 0) {
            iVar4 = *(int *)(*(int *)(param_1 + 0x77c) + 8);
          }
          if (*(int *)(iVar4 + iVar7 * 4) != 0x6f && iVar7 != 2) break;
          FUN_4a113f74(param_1,iVar7);
        }
      }
      iVar7 = *(int *)(param_1 + 0x76c);
      if (iVar7 != 3) {
        *(int *)(param_1 + 0x76c) = iVar7 + 1;
      }
      if (iVar7 == 3) {
        iVar7 = 2;
      }
      iVar4 = iVar14;
      if (*(int *)(param_1 + 0x77c) != 0) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x77c) + 8);
      }
      *(int *)(iVar4 + iVar7 * 4) = param_2;
      iVar4 = iVar14;
      if (*(int *)(param_1 + 0x790) != 0) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x790) + 8);
      }
      *(int *)(iVar4 + iVar7 * 4) = param_3;
      iVar4 = iVar14;
      if (*(int *)(param_1 + 0x7a4) != 0) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x7a4) + 8);
      }
      *(undefined4 *)(iVar4 + iVar7 * 4) = param_4;
      if (*(int *)(param_1 + 0x7b8) != 0) {
        iVar14 = *(int *)(*(int *)(param_1 + 0x7b8) + 8);
      }
      *(undefined4 *)(iVar14 + iVar7 * 4) = param_5;
      return;
    }
    FUN_4a1071e0(param_3,0x200000);
    if ((*(uint *)(param_3 + 0x38) & 0x200000) == 0) {
      return;
    }
    uVar13 = *(undefined4 *)(*(int *)(param_3 + 0x24) + 0x520);
    uVar5 = FUN_4a144cb0(uVar13,*(undefined4 *)(param_3 + 0x44));
    uVar6 = FUN_4a144cb8(uVar13,*(undefined4 *)(param_3 + 0x4c));
    uVar5 = FUN_4a1458ac(uVar13,uVar5,uVar6);
    iVar7 = FUN_4a0f7058(*(undefined4 *)(*(int *)(param_3 + 0x24) + 0x520),uVar5);
    iVar14 = 0;
    if (iVar7 != 0) {
      iVar14 = FUN_4a0baa8c();
    }
  }
  if (*(int *)(param_3 + 0xa0) < 1) {
    uVar5 = 0;
  }
  else {
    if (*(int *)(param_3 + 0xa4) == 0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8 = *(undefined4 **)(*(int *)(param_3 + 0xa4) + 8);
    }
    uVar5 = *puVar8;
  }
  iVar7 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_3 + 0x24) + 0x520),
                       *(undefined4 *)(param_3 + 0x28));
  cVar2 = *(char *)(iVar7 + 8);
  if (cVar2 == '\x15') {
LAB_4a10a00c:
    if (iVar14 == 0) {
      FUN_4a0ca3fc(uVar5,0x44d);
    }
    else {
      FUN_4a0ca3fc(uVar5,0x44c);
    }
    uVar13 = *(undefined4 *)(*(int *)(param_3 + 0x24) + 0x520);
    uVar5 = FUN_4a144cb0(uVar13,*(undefined4 *)(param_3 + 0x44));
    uVar6 = FUN_4a144cb8(uVar13,*(undefined4 *)(param_3 + 0x4c));
    uVar5 = FUN_4a1458ac(uVar13,uVar5,uVar6);
    iVar7 = FUN_4a0f7058(*(undefined4 *)(*(int *)(param_3 + 0x24) + 0x520),uVar5);
    if ((iVar7 == 0) || (cVar2 != '\x14')) goto LAB_4a10a05c;
    uVar11 = *(uint *)(param_3 + 0x38) & 0x40;
    if (iVar14 == 0) {
      if (uVar11 != 0) {
        FUN_4a0b8f24();
      }
      goto LAB_4a10a168;
    }
    if (uVar11 == 0) {
      FUN_4a0bb5a0();
    }
LAB_4a10a064:
    uVar11 = *(uint *)(param_3 + 0x38) | 0x40;
  }
  else {
    if (cVar2 < '\x16') {
      if (cVar2 == '\f') {
        if (iVar14 == 0) {
          uVar5 = 3;
        }
        else {
          uVar5 = 2;
        }
        FUN_4a1078e8(param_3,uVar5);
      }
      else if (cVar2 == '\x14') goto LAB_4a10a00c;
    }
    else {
      if (cVar2 == '\x1a') {
        uVar5 = 0xffffffff;
        if (iVar14 == 0) {
          FUN_4a1078a4(param_3,0xffffffff);
          goto LAB_4a10a168;
        }
        if (*(int *)(param_3 + 0x28) == 0x71) {
          uVar5 = 9;
        }
        else if (*(int *)(param_3 + 0x28) == 0x72) {
          uVar5 = 10;
        }
        *(uint *)(param_3 + 0x38) = *(uint *)(param_3 + 0x38) | 0x80;
        FUN_4a1078a4(param_3,uVar5);
        FUN_4a107e58(param_3,0x10a);
        goto LAB_4a10a064;
      }
      if (cVar2 == '\x1f') {
        if ((iVar14 != 0) && ((*(uint *)(param_3 + 0x38) & 0xc000) == 0)) {
          *(uint *)(param_3 + 0x38) = *(uint *)(param_3 + 0x38) | 0x8000;
        }
        FUN_4a1078e8(param_3,iVar14);
      }
    }
LAB_4a10a05c:
    if (iVar14 != 0) goto LAB_4a10a064;
LAB_4a10a168:
    uVar11 = *(uint *)(param_3 + 0x38) & 0xffffffbf;
  }
  *(uint *)(param_3 + 0x38) = uVar11;
  iVar14 = FUN_4a142ef4(*(undefined4 *)(*(int *)(param_3 + 0x24) + 0x520));
  if (iVar14 != 0) {
    return;
  }
  iVar14 = (*(ushort *)(param_3 + 0x58) + 0xf) * 0x10000;
  *(short *)(param_3 + 0x58) = (short)((uint)iVar14 >> 0x10);
  if ((300 < iVar14 >> 0x10) &&
     (*(undefined2 *)(param_3 + 0x58) = 0, (*(uint *)(param_3 + 0x34) & 0x2000000) != 0)) {
    FUN_4a105a84(param_3);
  }
  if (*(int *)(param_3 + 0x2c) == -1) {
    return;
  }
  iVar14 = *(int *)(*(int *)(param_3 + 0x24) + 0x51c);
  uVar5 = *(undefined4 *)(*(int *)(param_3 + 0x24) + 0x520);
  uVar11 = 0;
  if ((*(int *)(param_3 + 0x28) == 0x80 || *(int *)(param_3 + 0x28) == 0xc) ||
     (iVar7 = FUN_4a143ac8(uVar5), *(char *)(iVar7 + 8) == '\x17')) {
    uVar11 = *(uint *)(param_3 + 0x3c);
  }
  else {
    iVar7 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_3 + 0x24) + 0x520),
                         *(undefined4 *)(param_3 + 0x28));
    if (((*(char *)(iVar7 + 8) == '\x14') ||
        (iVar7 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_3 + 0x24) + 0x520),
                              *(undefined4 *)(param_3 + 0x28)), *(char *)(iVar7 + 8) == '\x15')) &&
       ((*(uint *)(param_3 + 0x38) & 0x200000) == 0)) {
      uVar11 = 0x20000000;
    }
  }
  uVar9 = *(uint *)(param_3 + 0x34);
  bVar15 = (uVar9 & 0x2000000) != 0;
  if (bVar15) {
    uVar9 = *(uint *)(param_3 + 0x38);
  }
  if (bVar15 && (uVar9 & 0x100) != 0) {
    uVar11 = uVar11 | 0x1000000;
  }
  iVar7 = FUN_4a142ef4(uVar5);
  if ((iVar7 == 0) && ((*(uint *)(param_3 + 0x34) & 0x2000000) != 0)) {
    uVar11 = uVar11 | (int)*(short *)(param_3 + 0x58);
  }
  uVar9 = *(uint *)(param_3 + 0x38);
  iVar7 = *(int *)(param_3 + 0x2c);
  if ((uVar9 & 0x8000) != 0) {
    uVar11 = uVar11 | 0x8000000;
  }
  if ((uVar9 & 0x4000) != 0) {
    uVar11 = uVar11 | 0x4000000;
  }
  if ((uVar9 & 0x10000) != 0) {
    uVar11 = uVar11 | 0x10000000;
  }
  sVar3 = FUN_4a142ef4(uVar5);
  switchD_4a11cc8c::default((iVar7 >> 0x1f) + 1,s_invalid_id_4a0d8628);
  iVar10 = iVar14 + 0x988;
  uVar1 = (ushort)iVar7 | sVar3 << 8;
  uVar5 = FUN_4a16c074(&iStack_30,iVar10);
  iVar4 = FUN_4a16ff5c((int)(short)uVar1,uVar5,0);
  FUN_4a16c1a0(&iStack_30);
  iVar7 = 0;
  if (uVar11 == 0) {
    if (iVar4 != -1) {
      uVar5 = FUN_4a16c074(auStack_44,iVar10);
      iVar4 = FUN_4a16ff5c((int)(short)uVar1,uVar5,0);
      FUN_4a16c1a0(auStack_44);
      if (iVar4 == -1) {
        return;
      }
      iVar10 = iVar7;
      if (*(int *)(iVar14 + 0x994) != 0) {
        iVar10 = *(int *)(*(int *)(iVar14 + 0x994) + 8);
      }
      *(undefined2 *)(iVar10 + iVar4 * 2) = 0xffff;
      iVar10 = iVar7;
      if (*(int *)(iVar14 + 0x9a8) != 0) {
        iVar10 = *(int *)(*(int *)(iVar14 + 0x9a8) + 8);
      }
      *(undefined4 *)(iVar10 + iVar4 * 4) = 0;
      if (*(int *)(iVar14 + 0x9bc) != 0) {
        iVar7 = *(int *)(*(int *)(iVar14 + 0x9bc) + 8);
      }
      *(undefined4 *)(iVar7 + iVar4 * 4) = 0;
      return;
    }
  }
  else if (iVar4 != -1) goto LAB_4a0d85dc;
  uVar5 = FUN_4a16c074(auStack_44,iVar10);
  iVar4 = FUN_4a16ff5c(0xffffffff,uVar5,0);
  FUN_4a16c1a0(auStack_44);
  switchD_4a11cc8c::default(iVar4 != -1,s_no_room_in_persistant_object_dat_4a0d8634);
LAB_4a0d85dc:
  if (*(int *)(iVar14 + 0x994) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(*(int *)(iVar14 + 0x994) + 8);
  }
  *(ushort *)(iVar10 + iVar4 * 2) = uVar1;
  if (*(int *)(iVar14 + 0x9a8) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(*(int *)(iVar14 + 0x9a8) + 8);
  }
  *(uint *)(iVar10 + iVar4 * 4) = uVar11;
  if (*(int *)(iVar14 + 0x9bc) != 0) {
    iVar7 = *(int *)(*(int *)(iVar14 + 0x9bc) + 8);
  }
  *(undefined4 *)(iVar7 + iVar4 * 4) = *(undefined4 *)(iVar14 + 0x78c);
  return;
}



// Address: 4a1171b8

void FUN_4a1171b8(int param_1,int *param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int extraout_r1;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar10 = *(int *)(param_1 + 0x20) + 0x128;
  piVar12 = &uStack_38;
  uVar4 = FUN_4a09f974(iVar10,0x17b);
  FUN_4a17295c(uVar4,1);
  uVar4 = FUN_4a171e1c();
  *(undefined4 *)(param_1 + 0x234) = uVar4;
  FUN_4a09f9c8(iVar10,0x17b);
  uVar4 = FUN_4a171e1c();
  *(undefined4 *)(param_1 + 0x238) = uVar4;
  iVar10 = FUN_4a13ca78(*(undefined4 *)(param_1 + 0x20));
  puVar2 = PTR_DAT_4a11748c;
  uVar4 = FUN_4a0bbd68(*(undefined4 *)PTR_DAT_4a11748c,iVar10 - *(int *)(param_1 + 0x234),2);
  *(undefined4 *)(param_1 + 0x22c) = uVar4;
  iVar10 = FUN_4a0bbe00(*(undefined4 *)puVar2,0x2d,2);
  *(int *)(param_1 + 0x230) = iVar10;
  *(int *)(param_1 + 0x23c) = iVar10 + 5;
  *(int *)(param_1 + 0x240) = *(int *)(param_1 + 0x238) + -10;
  if ((*(uint *)(param_1 + 0xa64) & 0x10) == 0) {
    return;
  }
  iVar11 = *(int *)(param_1 + 0x20) + 0x128;
  uVar4 = FUN_4a171fac(iVar10 + (*(int *)(param_1 + 0x238) >> 1));
  uVar5 = FUN_4a171fac(*(int *)(param_1 + 0x22c) + (*(int *)(param_1 + 0x234) >> 2));
  uStack_38 = 0x3f800000;
  uStack_34 = 0x3f800000;
  uStack_30 = 0x3f800000;
  uStack_2c = 0;
  FUN_4a09f664(iVar11,0x17b,uVar5,uVar4);
  uVar4 = FUN_4a171fac(*(int *)(param_1 + 0x230) + (*(int *)(param_1 + 0x238) >> 1));
  uVar5 = FUN_4a171fac((*(int *)(param_1 + 0x234) >> 1) + (*(int *)(param_1 + 0x234) >> 2) +
                       *(int *)(param_1 + 0x22c));
  uStack_34 = 0xbf800000;
  uStack_38 = 0x3f800000;
  uStack_30 = 0x3f800000;
  uStack_2c = 0;
  FUN_4a09f664(iVar11,0x17b,uVar5,uVar4);
  puVar3 = PTR_DAT_4a117494;
  puVar2 = PTR_DAT_4a117490;
  cVar1 = *(char *)(param_1 + 0x277);
  bVar13 = cVar1 == '\0';
  iVar10 = extraout_r1;
  if (!bVar13) {
    iVar10 = *(int *)PTR_DAT_4a117490;
  }
  bVar14 = iVar10 == 0;
  if (!bVar13 && !bVar14) {
    iVar10 = *(int *)PTR_DAT_4a117494;
  }
  bVar15 = iVar10 != 0;
  if ((!bVar13 && !bVar14) && bVar15) {
    iVar10 = *(int *)(param_1 + 0x28);
  }
  uVar5 = 0x43480000;
  if ((!bVar13 && !bVar14) && bVar15) {
    uVar4 = *(undefined4 *)(iVar10 + 0x490);
  }
  uVar6 = 0x443b8000;
  if (((bVar13 || bVar14) || !bVar15) &&
     (uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x48c), *(int *)(param_1 + 0x1d8) == 2)) {
    uVar5 = 0x44480000;
    uVar6 = 0x44e10000;
  }
  uStack_28 = FUN_4a1725c0(uVar6,uVar5);
  uVar4 = FUN_4a1725c0(uVar4,uVar5);
  uVar4 = FUN_4a171bb8(uVar4,uStack_28);
  iVar7 = *(int *)(param_1 + 0x22c);
  iVar9 = *(int *)(param_1 + 0x234);
  uVar5 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x240));
  uVar4 = FUN_4a17211c(uVar5,uVar4);
  uVar5 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x23c));
  FUN_4a171a94(uVar5,uVar4);
  iVar8 = FUN_4a171e1c();
  bVar13 = *(int *)puVar2 != 0;
  iVar10 = 0;
  if (bVar13) {
    iVar10 = *(int *)puVar3;
  }
  if ((!bVar13 || iVar10 == 0) || cVar1 == '\0') {
    uVar4 = FUN_4a171fac(iVar8);
    uVar5 = FUN_4a171fac(iVar7 + (iVar9 >> 1));
    uStack_38 = 0x3f800000;
    uStack_34 = 0x3f800000;
    uStack_30 = 0x3f800000;
    uStack_2c = 0;
    FUN_4a09f664(iVar11,0x17c,uVar5,uVar4);
  }
  FUN_4a09f3a4(iVar11,param_2);
  bVar13 = *(char *)(param_1 + 0x277) != '\0';
  iVar10 = 0;
  if (bVar13) {
    iVar10 = *(int *)puVar2;
  }
  bVar14 = iVar10 != 0;
  if (bVar13 && bVar14) {
    iVar10 = *(int *)puVar3;
  }
  bVar15 = iVar10 == 0;
  if ((!bVar13 || !bVar14) || bVar15) {
    piVar12 = (int *)&stack0xffffffdc;
  }
  if ((!bVar13 || !bVar14) || bVar15) {
    param_1 = *piVar12;
    iVar8 = piVar12[1];
    param_2 = (int *)piVar12[5];
    piVar12 = piVar12 + 9;
  }
  if ((bVar13 && bVar14) && !bVar15) {
    *piVar12 = 9;
    (**(code **)(*param_2 + 0x34))
              (param_2,*(undefined4 *)(param_1 + 0x28c),*(int *)(param_1 + 0x22c) + -8,iVar8 + -0x20
              );
    return;
  }
  return;
}



// Address: 4a117498

/* WARNING: Removing unreachable block (ram,0x4a0faea0) */
/* WARNING: Removing unreachable block (ram,0x4a0fae9c) */
/* WARNING: Removing unreachable block (ram,0x4a0faebc) */
/* WARNING: Removing unreachable block (ram,0x4a0faf08) */

void FUN_4a117498(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = FUN_4a1404ac(*(undefined4 *)(param_1 + 0x24));
  FUN_4a118354(param_1,0xa43,uVar1);
  iVar2 = 0;
  if (*(int *)(param_1 + 0x708) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x708) + 8);
  }
  puVar3 = *(undefined4 **)(iVar2 + 0x10);
  *puVar3 = 5;
  puVar3[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x4a0faeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_caseD_3_4a0faed4)();
  return;
}



// Address: 4a1174dc

/* WARNING: Removing unreachable block (ram,0x4a116204) */

void FUN_4a1174dc(int param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x6e4) = param_2;
  *(undefined4 *)(param_1 + 0x6e8) = param_3;
  iVar2 = FUN_4a13fac4(iVar5);
  iVar4 = 0;
  if (*(int *)(iVar5 + 0x420) != 0) {
    iVar4 = *(int *)(*(int *)(iVar5 + 0x420) + 8);
  }
  sVar1 = *(short *)(iVar4 + iVar2 * 2);
  uVar3 = FUN_4a140738(iVar5,param_2);
  FUN_4a0ce9a4(param_1,uVar3,(int)sVar1);
  *(undefined4 *)(param_1 + 0x1c0) = 0xc;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined1 *)(param_1 + 0x1dc) = 1;
  host_s3eAccelerometerStop_arm();
                    /* WARNING: Could not recover jumptable at 0x4a116200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_caseD_0_4a116238)();
  return;
}



// Address: 4a11753c

/* WARNING: Removing unreachable block (ram,0x4a06f9a0) */
/* WARNING: Removing unreachable block (ram,0x4a06fa48) */
/* WARNING: Removing unreachable block (ram,0x4a06fa58) */
/* WARNING: Removing unreachable block (ram,0x4a06fa60) */
/* WARNING: Removing unreachable block (ram,0x4a06fa64) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff0 : 0x4a06fa34 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_4a11753c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;
  
  iVar4 = FUN_4a10ea38(param_1,0xd,param_2,param_3,param_4,3);
  if (iVar4 == 0) {
    return 0;
  }
  *(uint *)(iVar4 + 0x38) = *(uint *)(iVar4 + 0x38) & 0xffffff7f;
  uVar2 = FUN_4a107058(iVar4,0);
  FUN_4a0ca898(uVar2,param_5);
  uVar7 = *(uint *)(iVar4 + 0x38);
  piVar9 = (int *)0x0;
  *(uint *)(iVar4 + 0x38) = uVar7 & 0xffbfffff;
  iVar10 = *(int *)(iVar4 + 0xa0);
  if (iVar10 < 1) {
    iVar4 = 0;
  }
  else {
    if (*(int *)(iVar4 + 0xa4) != 0) {
      piVar9 = *(int **)(*(int *)(iVar4 + 0xa4) + 8);
    }
    iVar4 = *piVar9;
  }
  iVar3 = *(int *)(iVar4 + 0x34);
  uVar8 = *(uint *)(iVar3 + 0x24);
  bVar11 = (uVar8 & 1) == 0;
  iVar4 = 0;
  if (!bVar11) {
    iVar10 = *(int *)(iVar3 + 8);
    iVar4 = *(int *)(iVar10 + 8);
  }
  if (bVar11 || iVar4 <= param_6) {
    return iVar3;
  }
  if (param_6 < 0) {
    return iVar3;
  }
  *(int *)(iVar3 + 0xc) = (int)(short)param_6;
  iVar4 = 0;
  if (*(int *)(iVar10 + 0xc) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(iVar10 + 0xc) + 8);
  }
  if (*(int *)(iVar10 + 0x20) != 0) {
    iVar4 = *(int *)(*(int *)(iVar10 + 0x20) + 8);
  }
  iVar10 = *(int *)(iVar3 + 0x10) * (int)*(short *)(iVar6 + param_6 * 2);
  iVar4 = (int)*(short *)(iVar4 + param_6 * 2) * *(int *)(iVar3 + 0x10);
  *(int *)(iVar3 + 0x18) = iVar10;
  *(int *)(iVar3 + 0x1c) = iVar4;
  if ((uVar8 & 8) == 0) {
    *(int *)(iVar3 + 0x14) = iVar10;
  }
  else {
    *(int *)(iVar3 + 0x14) = iVar4;
  }
  uVar5 = 3;
  if ((uVar7 & 0x80) != 0) {
    uVar5 = 7;
  }
  *(uint *)(iVar3 + 0x24) = uVar5 | uVar8 & 8;
  piVar9 = *(int **)(iVar3 + 0x28);
  if (piVar9 == (int *)0x0) {
    return iVar3;
  }
  uVar2 = *(undefined4 *)(iVar3 + 0x14);
  iVar10 = (**(code **)(*piVar9 + 0x30))(piVar9);
  iVar4 = 0;
  if (piVar9[2] != 0) {
    iVar4 = *(int *)(piVar9[2] + 0x10);
  }
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    iVar3 = *(int *)(*(int *)(piVar9[2] + 0x14) + iVar4 * 4);
    if ((*(uint *)(*(int *)(iVar3 + 0x2c) + 0x30) & 0x60000000) != 0) {
      uVar1 = FUN_4a1395b4(iVar3,uVar2);
      (**(code **)(*piVar9 + 0x1c))(piVar9,*(undefined4 *)(iVar3 + 0x30),uVar1);
    }
  }
  (**(code **)(*piVar9 + 0x24))(piVar9,uVar2);
  return iVar10;
}



// Address: 4a117598

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a117598(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  iVar3 = FUN_4a10ea38(param_1,0xb,param_2,0,param_3,3);
  if (iVar3 == 0) {
    return;
  }
  *(undefined4 *)(iVar3 + 0x6c) = param_4;
  if ((*(uint *)(iVar3 + 0x38) & 0x80) == 0) {
    uVar4 = 0x10;
  }
  else {
    uVar4 = 0x14;
  }
  puVar5 = (undefined4 *)0x0;
  if (*(int *)(iVar3 + 0x8c) < 1) {
    puVar2 = (uint *)0x0;
  }
  else {
    if (*(int *)(iVar3 + 0x90) != 0) {
      puVar5 = *(undefined4 **)(*(int *)(iVar3 + 0x90) + 8);
    }
    puVar2 = (uint *)*puVar5;
  }
  uVar1 = uVar4 >> 4;
  bVar6 = uVar1 == 0;
  if (bVar6) {
    uVar1 = *puVar2;
  }
  if (bVar6 && uVar1 == 9) {
    iVar3 = FUN_4a099c5c();
    if ((int)puVar2[1] < iVar3) {
      if ((int)puVar2[1] < 0) {
        iVar3 = FUN_4a099c5c(*puVar2);
        puVar2[1] = iVar3 - 1;
      }
    }
    else {
      puVar2[1] = 0;
    }
  }
  else {
    *puVar2 = 9;
    if ((puVar2[3] & 8) == 0) {
      puVar2[1] = 0;
    }
    else {
      iVar3 = FUN_4a099c5c(9);
      puVar2[1] = iVar3 - 1;
    }
    puVar2[2] = 0;
  }
  puVar2[3] = uVar4 & 4 | 3;
  return;
}



// Address: 4a117814

undefined4 FUN_4a117814(int param_1)

{
  return *(undefined4 *)(param_1 + 0x218);
}



// Address: 4a117dbc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a117dbc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar14;
  undefined1 auStack_54 [8];
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [20];
  
  iVar1 = *(int *)(param_2 + 0xc);
  puVar13 = (undefined4 *)0x0;
  if (iVar1 != 0) {
    param_2 = *(int *)(iVar1 + 8);
    iVar2 = *(int *)(iVar1 + 8);
  }
  else {
    iVar2 = 0;
  }
  uVar12 = *(undefined4 *)(iVar2 + 8);
  if (iVar1 == 0) {
    param_2 = 0;
  }
  uVar11 = *(undefined4 *)(param_2 + 4);
  if (((*(int *)(param_1 + 0x1c0) != 0x15) || (5 < *(int *)(param_1 + 0xa60))) &&
     (iVar1 = FUN_4a11b434(param_1,uVar11,uVar12,0), iVar1 != 0)) {
    return;
  }
  iVar1 = FUN_4a11b434(param_1,uVar11,uVar12,1);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a117e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  iVar1 = FUN_4a0f06e0(*(undefined4 *)(param_1 + 0x28),uVar11,uVar12);
  iVar2 = FUN_4a118a34(param_1,uVar11,uVar12,iVar1);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x1c0) == 7) {
      if (*(int *)(param_1 + 0x69c) != 0xf) {
                    /* WARNING: Could not recover jumptable at 0x4a117f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
      uVar5 = FUN_4a16bdcc(auStack_38,param_1 + 0x1ac);
      FUN_4a0f43e4(*(undefined4 *)(param_1 + 0x28),uVar5,uVar11,uVar12);
      FUN_4a16bef4(auStack_38);
      iVar2 = *(int *)(param_1 + 0x1b8);
      puVar6 = puVar13;
      if (iVar2 != 0) {
        puVar6 = *(undefined4 **)(iVar2 + 8);
      }
      uVar5 = *puVar6;
      puVar4 = puVar13;
      puVar6 = puVar13;
      if (iVar2 != 0) {
        puVar4 = *(undefined4 **)(iVar2 + 8);
        puVar6 = *(undefined4 **)(iVar2 + 8);
      }
      uVar9 = puVar6[2];
      iVar2 = puVar4[3];
      *(undefined4 *)(param_1 + 0x6b0) = uVar5;
      *(undefined4 *)(param_1 + 0x6b4) = uVar9;
      if ((iVar1 == 0) || (iVar2 < iVar1)) {
        uVar5 = FUN_4a144cb0(*(undefined4 *)(param_1 + 0x28),uVar5);
        uVar9 = FUN_4a144cb8(*(undefined4 *)(param_1 + 0x28),uVar9);
        iVar2 = FUN_4a1458ac(*(undefined4 *)(param_1 + 0x28),uVar5,uVar9);
        if (iVar2 != -1) {
          uVar5 = FUN_4a1457cc(*(undefined4 *)(param_1 + 0x28),uVar5);
          uVar9 = FUN_4a1457d8(*(undefined4 *)(param_1 + 0x28),uVar9);
          FUN_4a0cec90(param_1,uVar5,0,uVar9);
          FUN_4a0cf554(param_1,0x16);
          *(int *)(param_1 + 0x6a8) = iVar2;
          iVar2 = FUN_4a0f7058(*(undefined4 *)(param_1 + 0x28),iVar2);
          *(undefined4 *)(param_1 + 0x6ac) = *(undefined4 *)(iVar2 + 0x20);
          FUN_4a122618(param_1,0x10);
        }
      }
      else {
        iVar2 = FUN_4a0f4a18(*(undefined4 *)(param_1 + 0x28),uVar11,uVar12);
        if (iVar2 != -1) {
          FUN_4a0cca64(param_1,uVar11,uVar12);
          FUN_4a0cf554(param_1,0x16);
          *(int *)(param_1 + 0x6a8) = iVar2;
          iVar2 = FUN_4a0f7058(*(undefined4 *)(param_1 + 0x28),iVar2);
          *(undefined4 *)(param_1 + 0x6ac) = *(undefined4 *)(iVar2 + 0x24);
          FUN_4a122618(param_1,0x11);
        }
      }
    }
  }
  else if (*(int *)(param_1 + 0xa60) != 0xb) {
    iVar3 = *(int *)(param_1 + 0x1c0);
    bVar14 = iVar3 == 0x15;
    if (bVar14) {
      iVar3 = *(int *)(iVar2 + 0x28);
    }
    if (!bVar14 || iVar3 != 4) {
      uVar12 = FUN_4a16bdcc(auStack_38,param_1 + 0x1ac);
      FUN_4a145ed0(iVar2,uVar12,0);
      FUN_4a16bef4(auStack_38);
      iVar1 = *(int *)(param_1 + 0x1b8);
      bVar14 = iVar1 != 0;
      puVar6 = puVar13;
      if (bVar14) {
        puVar6 = *(undefined4 **)(iVar1 + 8);
      }
      if (bVar14) {
        puVar4 = *(undefined4 **)(iVar1 + 8);
        puVar8 = *(undefined4 **)(iVar1 + 8);
      }
      else {
        puVar4 = (undefined4 *)0x0;
        puVar8 = puVar13;
      }
      if (!bVar14) {
        puVar4 = puVar13;
      }
      FUN_4a0cec90(param_1,*puVar4,puVar8[1],puVar6[2]);
      *(int *)(param_1 + 0x2b4) = iVar2;
      FUN_4a115d8c(param_1,iVar2);
      if (*(int *)(param_1 + 700) == 1) {
        *(undefined4 *)(param_1 + 0x2f4) = 0;
      }
      else if (*(int *)(param_1 + 700) != 5) goto LAB_4a117f2c;
      FUN_4a11e2a0(param_1,0);
LAB_4a117f2c:
      iVar1 = *(int *)(param_1 + 0x2b4);
      if (iVar1 != 0) {
        FUN_4a0cf554(param_1,0x16);
        FUN_4a115df0(param_1,iVar1);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x4a117f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    goto LAB_4a11810c;
  }
  if (*(int *)(param_1 + 0x1c0) != 6 && *(int *)(param_1 + 0x1c0) != 0x15) {
                    /* WARNING: Could not recover jumptable at 0x4a118108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_4a11810c:
  uVar5 = FUN_4a16bdcc(auStack_38,param_1 + 0x1ac);
  FUN_4a0f43e4(*(undefined4 *)(param_1 + 0x28),uVar5,uVar11,uVar12);
  FUN_4a16bef4(auStack_38);
  iVar2 = *(int *)(param_1 + 0x1b8);
  puVar6 = puVar13;
  if (iVar2 != 0) {
    puVar6 = *(undefined4 **)(iVar2 + 8);
  }
  uStack_3c = *puVar6;
  puVar4 = puVar13;
  puVar6 = puVar13;
  if (iVar2 != 0) {
    puVar4 = *(undefined4 **)(iVar2 + 8);
    puVar6 = *(undefined4 **)(iVar2 + 8);
  }
  uVar12 = puVar6[2];
  if ((iVar1 != 0) && (iVar1 <= (int)puVar4[3])) {
                    /* WARNING: Could not recover jumptable at 0x4a118180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  iVar1 = FUN_4a144a5c(*(undefined4 *)(param_1 + 0x28),uStack_3c,uVar12);
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a1181a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack_40 = *(undefined4 *)(param_1 + 0x28);
  iVar1 = FUN_4a144cb0(uStack_40,uStack_3c);
  iVar2 = FUN_4a144cb8(uStack_40,uVar12);
  FUN_4a10ca70(auStack_54,param_1);
  iVar3 = 0;
  if (0 < iStack_4c) {
    do {
      puVar6 = puVar13;
      if (iStack_48 != 0) {
        puVar6 = *(undefined4 **)(iStack_48 + 8);
      }
      iVar10 = puVar6[iVar3];
      iVar7 = FUN_4a146b58(iVar10,0x2000);
      if (iVar7 != 0) {
        iVar7 = FUN_4a144cb0(uStack_40,*(undefined4 *)(iVar10 + 0x44));
        iVar10 = FUN_4a144cb8(uStack_40,*(undefined4 *)(iVar10 + 0x4c));
        if (iVar7 == iVar1 && iVar10 == iVar2) {
          FUN_4a16a5f4(auStack_54);
          return;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iStack_4c);
  }
  FUN_4a16a5f4(auStack_54);
  uVar11 = FUN_4a144cb0(*(undefined4 *)(param_1 + 0x28),uStack_3c);
  uVar12 = FUN_4a144cb8(*(undefined4 *)(param_1 + 0x28),uVar12);
  uVar11 = FUN_4a1457cc(*(undefined4 *)(param_1 + 0x28),uVar11);
  uVar12 = FUN_4a1457d8(*(undefined4 *)(param_1 + 0x28),uVar12);
  FUN_4a0cec90(param_1,uVar11,0,uVar12);
  FUN_4a0cf554(param_1,0x15);
  FUN_4a116fb0(param_1,0x6f,0,uStack_3c);
  return;
}



// Address: 4a1182e0

uint FUN_4a1182e0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  uVar1 = FUN_4a1404ac(*(undefined4 *)(param_1 + 0x24));
  FUN_4a118354(param_1,0xa44,uVar1);
  FUN_4a073914(*(undefined4 *)(param_1 + 0x5f8),0xc,0,0,0);
  if (param_3 != -1) {
    iVar2 = 0;
    if (*(int *)(param_1 + 0x708) != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x708) + 8);
    }
    FUN_4a0fae94(*(undefined4 *)(iVar2 + param_3 * 4),4,0x10);
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x20) + 0x260);
  iVar2 = FUN_4a085614(iVar5);
  if (iVar2 != 0) {
    FUN_4a0866c0(iVar5,0x17);
  }
  if (*(int *)(iVar5 + 0x74) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar5 + 0x74) + 8);
  }
  iVar5 = 0;
  if (0 < *(int *)(iVar2 + 0x1d4)) {
    do {
      if (*(int *)(iVar2 + 0x1d8) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar2 + 0x1d8) + 8);
      }
      piVar4 = *(int **)(iVar3 + iVar5 * 4);
      if (piVar4[1] != 400) {
        (**(code **)(*piVar4 + 0x28))(piVar4);
        (**(code **)(*piVar4 + 0x30))(piVar4,0);
        (**(code **)(*piVar4 + 0x3c))(piVar4);
        return iVar5 << 0x10 | 0x17;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(iVar2 + 0x1d4));
  }
  return 0xffffffff;
}



// Address: 4a118354

void FUN_4a118354(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x20) + 0x278;
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x2a0) = param_2;
  *(int *)(param_1 + 0x2a4) = param_3;
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  iVar1 = FUN_4a06bf88(iVar2,param_2,4);
  *(int *)(param_1 + 0x2b0) = iVar1 * 0x10000 + 0x50000;
  if (param_3 != -1) {
    iVar1 = FUN_4a06bf88(iVar2,param_3,4);
    *(int *)(param_1 + 0x2b0) = iVar1 * 0x10000 + 0x50000 + *(int *)(param_1 + 0x2b0);
    return;
  }
  return;
}



// Address: 4a1183c8

void FUN_4a1183c8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_28 [8];
  int local_20;
  int local_1c;
  
  iVar3 = *(int *)(param_1 + 0x5f8);
  FUN_4a0737a4(iVar3,param_2,param_3,param_4,param_5);
  FUN_4a110aac(auStack_28,param_1);
  iVar2 = 0;
  if (0 < local_20) {
    do {
      if (local_1c == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(local_1c + 8);
      }
      iVar1 = *(int *)(iVar1 + iVar2 * 4);
      if (iVar1 != iVar3) {
        FUN_4a071d48(iVar1,param_3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_20);
  }
  FUN_4a169a1c(auStack_28);
  return;
}



// Address: 4a118458

/* WARNING: Removing unreachable block (ram,0x4a0fae9c) */
/* WARNING: Removing unreachable block (ram,0x4a11bf60) */
/* WARNING: Removing unreachable block (ram,0x4a11bf74) */
/* WARNING: Removing unreachable block (ram,0x4a11bf7c) */
/* WARNING: Removing unreachable block (ram,0x4a11bf80) */
/* WARNING: Removing unreachable block (ram,0x4a11bf88) */
/* WARNING: Removing unreachable block (ram,0x4a11bf94) */
/* WARNING: Removing unreachable block (ram,0x4a11bf98) */
/* WARNING: Removing unreachable block (ram,0x4a11bf9c) */
/* WARNING: Removing unreachable block (ram,0x4a11bfa0) */
/* WARNING: Removing unreachable block (ram,0x4a1161d0) */
/* WARNING: Removing unreachable block (ram,0x4a116200) */
/* WARNING: Removing unreachable block (ram,0x4a0cd7a0) */
/* WARNING: Removing unreachable block (ram,0x4a089e34) */
/* WARNING: Removing unreachable block (ram,0x4a0faea0) */
/* WARNING: Removing unreachable block (ram,0x4a0faea4) */
/* WARNING: Removing unreachable block (ram,0x4a0faea8) */
/* WARNING: Removing unreachable block (ram,0x4a0faeb8) */
/* WARNING: Removing unreachable block (ram,0x4a0faebc) */
/* WARNING: Removing unreachable block (ram,0x4a0faf08) */
/* WARNING: Removing unreachable block (ram,0x4a11bef8) */
/* WARNING: Removing unreachable block (ram,0x4a11bf58) */
/* WARNING: Removing unreachable block (ram,0x4a11bf5c) */
/* WARNING: Removing unreachable block (ram,0x4a116204) */

void FUN_4a118458(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x7cc) = param_3;
  *(undefined4 *)(param_1 + 0x7c8) = param_2;
  FUN_4a1161d0(param_1,0x12);
  *(undefined4 *)(param_1 + 2000) = 2;
                    /* WARNING: Could not recover jumptable at 0x4a11bef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_caseD_2_4a11bf04)();
  return;
}



// Address: 4a118480

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a118480(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  int extraout_r1;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_60 [8];
  int local_58;
  int local_54;
  undefined1 auStack_4c [8];
  int local_44;
  int local_40;
  int local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  int local_28;
  
  local_30 = *(int *)(param_1 + 0x20);
  local_34 = *(int *)(param_1 + 0x24);
  iVar12 = 3000;
  *(int *)(param_1 + 0x748) = param_2 + *(int *)(param_1 + 0x748);
  iStack_2c = param_1;
  local_28 = param_2;
  iVar3 = FUN_4a13fb88(local_34);
  if (iVar3 != 0) {
    iVar12 = 0x5dc;
  }
  if (iVar12 < *(int *)(param_1 + 0x748)) {
    *(undefined4 *)(param_1 + 0x748) = 0;
    iVar12 = FUN_4a142ef4(*(undefined4 *)(param_1 + 0x28));
    iVar3 = 1;
    local_38 = *(int *)(local_34 + 0x410);
    if (1 < local_38) {
      do {
        uVar4 = FUN_4a0d6194(local_34,iVar3);
        FUN_4a110aac(auStack_60,param_1);
        iVar6 = local_58;
        iVar13 = 0;
        if (0 < local_58) {
          do {
            if (local_54 == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = *(int *)(local_54 + 8);
            }
            iVar15 = *(int *)(iVar5 + iVar13 * 4);
            iVar5 = FUN_4a146a9c(iVar15);
            if (iVar5 == iVar3) {
              FUN_4a169a1c(auStack_60);
              goto LAB_4a118570;
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 < iVar6);
        }
        FUN_4a169a1c(auStack_60);
        iVar15 = 0;
LAB_4a118570:
        if (iVar15 == 0) {
          if (((uVar4 & 8) == 0) || (iVar6 = FUN_4a13f8f8(local_34,iVar3), iVar6 != iVar12))
          goto LAB_4a118750;
          bVar2 = false;
          if (*(int *)(param_1 + 0x1d8) == 2) {
LAB_4a118608:
            bVar1 = false;
          }
          else {
            FUN_4a110aac(auStack_60,param_1);
            bVar2 = true;
            if (3 < local_58) goto LAB_4a118608;
            bVar1 = true;
          }
          if (bVar2) {
            FUN_4a169a1c(auStack_60);
          }
          if (bVar1) {
            FUN_4a10ca70(auStack_60,param_1);
            iVar6 = FUN_4a0fe640(*(undefined4 *)(param_1 + 0x20),0,local_58 + -1);
            iVar13 = 0;
            if (0 < local_58) {
              do {
                FUN_4a0015f0(iVar6 + iVar13,local_58);
                if (local_54 == 0) {
                  iVar5 = 0;
                }
                else {
                  iVar5 = *(int *)(local_54 + 8);
                }
                iVar5 = *(int *)(iVar5 + extraout_r1 * 4);
                if (*(int *)(iVar5 + 0x28) == 4) {
                  FUN_4a16a5f4(auStack_60);
                  goto LAB_4a1186ac;
                }
                iVar13 = iVar13 + 1;
              } while (iVar13 < local_58);
            }
            FUN_4a16a5f4(auStack_60);
            iVar5 = 0;
LAB_4a1186ac:
            switchD_4a11cc8c::default(iVar5 != 0,s_no_town_object__4a118944);
            iVar15 = FUN_4a125d70(param_1,1,iVar5,iVar3);
            iVar6 = FUN_4a0fb748(local_30);
            if (iVar6 < 0x32) {
              uVar4 = 4;
            }
            else {
              uVar4 = 0;
            }
            iVar6 = FUN_4a0fb748(local_30);
            if (iVar6 < 0x32) {
              uVar7 = 0x10;
            }
            else {
              uVar7 = 0;
            }
            iVar6 = FUN_4a0fb748(local_30);
            if (iVar6 < 0x32) {
              uVar8 = 0x80;
            }
            else {
              uVar8 = 0;
            }
            iVar6 = FUN_4a0fb748(local_30);
            if (iVar6 < 0x32) {
              uVar9 = 0x40;
            }
            else {
              uVar9 = 0;
            }
            iVar6 = FUN_4a0fb748(local_30);
            if (iVar6 < 0x32) {
              uVar11 = 0x20;
            }
            else {
              uVar11 = 0;
            }
            uVar11 = uVar4 | uVar7 | uVar8 | uVar9 | uVar11;
LAB_4a11874c:
            FUN_4a071480(iVar15,uVar11);
          }
        }
        else {
          if ((uVar4 & 7) != 0) {
            FUN_4a071480(iVar15,2);
          }
          if ((uVar4 & 0x10) != 0) {
            iVar6 = FUN_4a13f8f8(local_34,iVar3);
            if (iVar6 == iVar12) {
              uVar11 = 8;
              goto LAB_4a11874c;
            }
            FUN_4a071480(iVar15,0x200);
          }
        }
LAB_4a118750:
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_38);
    }
    FUN_4a110aac(auStack_4c,param_1);
    iVar3 = 0;
    if (0 < local_44) {
      do {
        iVar6 = FUN_4a0fe640(local_30,0,local_44 + -1);
        if (local_40 == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = *(int *)(local_40 + 8);
        }
        piVar14 = *(int **)(iVar13 + iVar6 * 4);
        iVar6 = (**(code **)(*piVar14 + 0x10))(piVar14);
        if (iVar6 != 0) {
          iVar13 = FUN_4a14621c(piVar14);
          iVar6 = 0;
          if (iVar13 != 0) {
            iVar6 = piVar14[10];
          }
          if (iVar13 != 0 && iVar6 != 0) {
            iVar6 = FUN_4a0fb748(local_30);
            if (iVar6 < 0x32) {
              uVar4 = 4;
            }
            else {
              uVar4 = 0;
            }
            iVar6 = FUN_4a0fb748(local_30);
            if (iVar6 < 0x19) {
              uVar7 = 0x10;
            }
            else {
              uVar7 = 0;
            }
            iVar6 = FUN_4a0fb748(local_30);
            if (iVar6 < 0x32) {
              uVar8 = 0x80;
            }
            else {
              uVar8 = 0;
            }
            iVar6 = FUN_4a0fb748(local_30);
            if (iVar6 < 0x19) {
              uVar9 = 0x20;
            }
            else {
              uVar9 = 0;
            }
            uVar9 = uVar4 | uVar7 | uVar8 | uVar9;
            iVar6 = FUN_4a0fb748(local_30);
            if (iVar6 < 0x3c) {
              uVar4 = 0x40;
            }
            else {
              uVar4 = 0;
            }
            uVar10 = FUN_4a146a9c(piVar14);
            iVar6 = FUN_4a13f8f8(local_34,uVar10);
            if (iVar6 != iVar12) {
              uVar9 = uVar7 | uVar8;
            }
            FUN_4a071480(piVar14,uVar9 | uVar4);
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_44);
    }
    FUN_4a169a1c(auStack_4c);
  }
  piVar14 = *(int **)(param_1 + 0x5f8);
  if (*(char *)(local_30 + 0x497) == '\0') {
    piVar14[0x3f] = 0;
    return;
  }
  if (20000 < *(int *)(param_1 + 0x768)) {
    iVar12 = (**(code **)(*piVar14 + 0x10))(piVar14);
    if (iVar12 != 0) {
      uVar4 = FUN_4a1405d4(local_34);
      iVar12 = FUN_4a142ef4(*(undefined4 *)(param_1 + 0x28));
      if ((iVar12 != 0) && (iVar12 = FUN_4a141248(local_34,0,1), iVar12 == 0)) {
        uVar4 = uVar4 | 0x40;
      }
      piVar14[0x3f] = uVar4 | piVar14[0x3f];
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a1188f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  *(int *)(param_1 + 0x768) = *(int *)(param_1 + 0x768) + local_28;
  return;
}



// Address: 4a118954

undefined4 FUN_4a118954(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x24);
    iVar2 = *(int *)(param_1 + 0x20) + 0x128;
    uVar1 = FUN_4a141a98(uVar3);
    uVar1 = FUN_4a1404ac(uVar3,uVar1);
    FUN_4a06cd2c(*(int *)(param_1 + 0x20) + 0x278,param_2,0x13,uVar1,3,param_5 + -0x1e,
                 (param_5 + param_3) - (param_5 + -0x1e),param_4 + 0x11,0x11);
    uVar1 = FUN_4a171fac(param_4 + 0x11);
    uVar3 = FUN_4a171fac(param_3 + 10);
    FUN_4a09f664(iVar2,0x28,uVar3,uVar1,0x3f800000,0x3f800000,0x3f800000,0);
    FUN_4a09f3a4(iVar2,param_2);
  }
  return 0x25;
}



// Address: 4a118a34

undefined4 FUN_4a118a34(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  bool bVar14;
  undefined1 auStack_8c [20];
  int local_78;
  undefined1 auStack_74 [12];
  int local_68;
  undefined1 auStack_60 [12];
  int local_54;
  undefined1 auStack_4c [8];
  int local_44;
  int local_40;
  int local_38;
  int iStack_34;
  int local_30;
  int local_2c;
  int iStack_28;
  
  local_30 = *(int *)PTR_DAT_4a118cb8;
  local_2c = *(int *)PTR_DAT_4a118cbc;
  iStack_34 = param_1;
  iStack_28 = param_4;
  if (*(int *)(param_1 + 0x1d8) == 2) {
    uVar1 = 0x42b40000;
  }
  else {
    uVar1 = FUN_4a1724e0(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x48c),0x443bc000);
    uVar1 = FUN_4a17211c(uVar1,0x428c0000);
    uVar1 = FUN_4a17211c(uVar1,DAT_4a118cc0);
    uVar1 = FUN_4a171a94(uVar1,0x42480000);
  }
  local_38 = FUN_4a171e1c(uVar1);
  uVar1 = 0;
  iVar12 = *(int *)PTR_DAT_4a118cc4;
  FUN_4a10ca70(auStack_4c,param_1);
  FUN_4a16bdcc(auStack_60,param_1 + 0x2c);
  FUN_4a16bdcc(auStack_74,param_1 + 0x1ac);
  local_78 = 0;
  if (0 < local_44) {
    do {
      if (local_40 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(local_40 + 8);
      }
      uVar13 = *(undefined4 *)(iVar2 + local_78 * 4);
      iVar2 = FUN_4a146b58(uVar13,*(undefined4 *)(param_1 + 0x2b8));
      if ((iVar2 != 0) && (iVar2 = FUN_4a146cd0(uVar13), iVar2 != 0)) {
        iVar2 = FUN_4a1461d0(uVar13);
        iVar11 = 0;
        if (0 < iVar2) {
          do {
            uVar3 = FUN_4a16bdcc(auStack_8c,auStack_60);
            FUN_4a145ed0(uVar13,uVar3,iVar11);
            FUN_4a16bef4(auStack_8c);
            bVar14 = local_54 != 0;
            if (bVar14) {
              iVar4 = *(int *)(local_54 + 8);
            }
            else {
              iVar4 = 0;
            }
            uVar3 = *(undefined4 *)(iVar4 + 8);
            if (bVar14) {
              iVar4 = *(int *)(local_54 + 8);
            }
            else {
              iVar4 = 0;
            }
            uVar5 = *(undefined4 *)(iVar4 + 4);
            if (bVar14) {
              puVar6 = *(undefined4 **)(local_54 + 8);
            }
            else {
              puVar6 = (undefined4 *)0x0;
            }
            uVar7 = *puVar6;
            uVar8 = FUN_4a16bdcc(auStack_8c,auStack_74);
            FUN_4a0f2970(*(undefined4 *)(param_1 + 0x28),uVar8,uVar7,uVar5,uVar3);
            FUN_4a16bef4(auStack_8c);
            if (local_68 == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = *(int *)(local_68 + 8);
            }
            iVar4 = *(int *)(iVar4 + 8);
            if (-1 < iVar4) {
              bVar14 = param_4 != 0;
              iVar10 = 0;
              if (bVar14) {
                iVar10 = iVar4 - param_4;
              }
              if ((!bVar14 || iVar4 == param_4) || iVar10 < 0 != (bVar14 && SBORROW4(iVar4,param_4))
                 ) {
                if (local_68 == 0) {
                  piVar9 = (int *)0x0;
                }
                else {
                  piVar9 = *(int **)(local_68 + 8);
                }
                iVar10 = 0;
                iVar4 = *piVar9 - local_30;
                if (iVar4 <= -iVar4) {
                  iVar4 = -iVar4;
                }
                if (local_68 != 0) {
                  iVar10 = *(int *)(local_68 + 8);
                }
                iVar10 = *(int *)(iVar10 + 4) - local_2c;
                if (iVar10 <= -iVar10) {
                  iVar10 = -iVar10;
                }
                iVar4 = iVar4 + iVar10;
                iVar10 = local_38;
                if (iVar4 < local_38) {
                  iVar10 = iVar12;
                }
                if (iVar4 < iVar10) {
                  iVar12 = iVar4;
                  uVar1 = uVar13;
                }
              }
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < iVar2);
        }
      }
      local_78 = local_78 + 1;
    } while (local_78 < local_44);
  }
  FUN_4a16bef4(auStack_74);
  FUN_4a16bef4(auStack_60);
  FUN_4a16a5f4(auStack_4c);
  return uVar1;
}



// Address: 4a119184

void FUN_4a119184(int param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined *local_40 [2];
  int local_38;
  int local_34;
  int iStack_2c;
  undefined4 local_28;
  
  uVar9 = *(undefined4 *)(param_1 + 0x24);
  iVar10 = *(int *)(param_1 + 0x20) + 0x278;
  iStack_2c = param_1;
  local_28 = param_2;
  FUN_4a1418e4(local_40,uVar9,*(undefined4 *)(param_1 + 0x6e4),*(undefined4 *)(param_1 + 0x6e8));
  iVar7 = 0;
  bVar12 = local_34 == 0;
  if (bVar12) {
    pcVar3 = (char *)0x0;
  }
  else {
    pcVar3 = *(char **)(local_34 + 8);
  }
  iVar11 = (int)*pcVar3;
  if (bVar12) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_34 + 8);
  }
  uVar8 = 0;
  cVar1 = *(char *)(iVar4 + 1);
  if (bVar12) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_34 + 8);
  }
  iVar4 = (int)*(char *)(iVar4 + 2);
  if (!bVar12) {
    iVar7 = *(int *)(local_34 + 8);
  }
  cVar2 = *(char *)(iVar7 + 3);
  if (iVar11 != -1) {
    uVar8 = 2;
    uVar5 = FUN_4a13fe28(uVar9,iVar11);
    FUN_4a0ce950(param_1,2,uVar5);
    uVar5 = FUN_4a06c410(iVar10);
    uVar6 = FUN_4a140a6c(uVar9,iVar11);
    FUN_4a06c378(iVar10,uVar6);
    FUN_4a06cbe8(iVar10,0x803);
    FUN_4a06c378(iVar10,(int)cVar1);
    FUN_4a06b694(iVar10,0xfffffff7,uVar5);
    FUN_4a0ce950(param_1,3,0xfffffff7);
  }
  if (iVar4 != -1) {
    uVar8 = 3;
    uVar5 = FUN_4a13fe28(uVar9,iVar4);
    FUN_4a0ce950(param_1,4,uVar5);
    uVar5 = FUN_4a06c410(iVar10);
    uVar9 = FUN_4a140a6c(uVar9,iVar4);
    FUN_4a06c378(iVar10,uVar9);
    FUN_4a06cbe8(iVar10,0x803);
    FUN_4a06c378(iVar10,(int)cVar2);
    FUN_4a06b694(iVar10,0xfffffff8,uVar5);
    FUN_4a0ce950(param_1,5,0xfffffff8);
  }
  FUN_4a10ce84(param_1,local_28);
  FUN_4a041910(1);
  FUN_4a0fe1e0(*(undefined4 *)(param_1 + 0x20),local_28);
  FUN_4a0cdc50(param_1,local_28,uVar8);
  FUN_4a041910(0);
  local_40[0] = PTR_PTR_4a119398;
  iVar7 = FUN_4a0bcc84(local_40);
  if (iVar7 != 0) {
    iVar10 = 0;
    if (0 < local_38) {
      do {
        iVar10 = iVar10 + 1;
      } while (iVar10 < local_38);
      if (iVar7 == 0) goto LAB_4a119384;
    }
    FUN_4a14f21c(iVar7);
  }
LAB_4a119384:
  FUN_4a0c6bf4(local_40);
  return;
}



// Address: 4a11939c

char * FUN_4a11939c(int param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined4 local_50;
  undefined1 auStack_4c [8];
  int local_44;
  int local_40;
  int local_3c;
  undefined1 auStack_38 [4];
  int local_34;
  int *local_30;
  undefined4 local_28;
  
  FUN_4a0fb644();
  iVar12 = *(int *)(param_1 + 0x20);
  switch(*(undefined4 *)(param_1 + 500)) {
  case 0:
    *(undefined4 *)(param_1 + 500) = 1;
    *(undefined4 *)(param_1 + 0x1f8) = 10;
    break;
  case 1:
    local_50 = *(undefined4 *)(param_1 + 0x1ec);
    FUN_4a0ef260(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1e0),
                 *(undefined4 *)(param_1 + 0x1e4),*(undefined4 *)(param_1 + 0x1e8));
    *(undefined1 *)(param_1 + 0x630) = 1;
    *(undefined1 *)(param_1 + 0x631) = 1;
    bVar13 = true;
    if (*(int *)(param_1 + 0x1d8) == 2) {
      *(undefined4 *)(param_1 + 0x1f8) = 0x32;
      FUN_4a0fb644();
      bVar13 = *(int *)(param_1 + 0x1d4) == 99;
      if (bVar13) {
        *(undefined4 *)(param_1 + 0x1d4) = 6;
      }
      FUN_4a0f527c(*(undefined4 *)(param_1 + 0x28),bVar13,0);
      switchD_4a1193c4::default(PTR_s_initMacroMap_4a119a58);
LAB_4a1195cc:
      FUN_4a115d8c(param_1,*(undefined4 *)(param_1 + 0x5f8));
      FUN_4a111968(param_1);
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x470) = *(undefined4 *)(param_1 + 0x2c0);
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x474) = *(undefined4 *)(param_1 + 0x2c4);
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x478) = *(undefined4 *)(param_1 + 0x2c8);
      *(undefined1 *)(param_1 + 0x2d8) = 1;
      FUN_4a115d8c(param_1,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x1f8) = 0x32;
      if (*(int *)(param_1 + 0x1d8) == 1) {
        FUN_4a0fb644();
        uVar11 = FUN_4a145a38(*(undefined4 *)(param_1 + 0x20));
        FUN_4a0f3fa0(*(undefined4 *)(param_1 + 0x28),uVar11);
        FUN_4a110aac(auStack_4c,param_1);
        iVar9 = 0;
        uVar11 = extraout_r1;
        if (0 < local_44) {
          do {
            if (local_40 == 0) {
              iVar10 = 0;
            }
            else {
              iVar10 = *(int *)(local_40 + 8);
            }
            uVar5 = *(undefined4 *)(iVar10 + iVar9 * 4);
            uVar14 = FUN_4a146a9c(uVar5,uVar11);
            uVar11 = (undefined4)((ulonglong)uVar14 >> 0x20);
            if ((int)uVar14 != 0) {
              FUN_4a071480(uVar5);
              uVar11 = extraout_r1_00;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < local_44);
        }
        switchD_4a1193c4::default(PTR_s_initZoomMap_4a119a5c);
        FUN_4a169a1c(auStack_4c);
        FUN_4a110aac(auStack_38,param_1);
        bVar1 = (int)local_30 < 2;
        FUN_4a169a1c(auStack_38);
        if (bVar1) goto LAB_4a1195c4;
      }
      else {
        bVar13 = *(int *)(param_1 + 0x1d4) != 0x60;
        FUN_4a0fb644();
        uVar11 = FUN_4a145960(*(undefined4 *)(param_1 + 0x20));
        FUN_4a0f28a4(*(undefined4 *)(param_1 + 0x28),uVar11);
        if (*(int *)(param_1 + 0x1d4) == 0x60) {
          *(undefined4 *)(param_1 + 0x1d4) = 6;
          FUN_4a10e58c(param_1,*(undefined4 *)(param_1 + 0x5f8));
          *(undefined4 *)(param_1 + 0x7c4) = 0x78;
          FUN_4a0d58d0(*(undefined4 *)(param_1 + 0x24));
          if (*(char *)(param_1 + 0x632) != '\0') {
            *(undefined1 *)(param_1 + 0x632) = 0;
            *(undefined1 *)(param_1 + 0x633) = 0;
            *(undefined2 *)(param_1 + 0x634) = 0xffff;
            *(undefined4 *)(param_1 + 0x674) = 0;
            *(undefined4 *)(param_1 + 0x2b4) = 0;
            FUN_4a115d8c(param_1,0);
          }
          *(undefined4 *)(param_1 + 0x29c) = 1000;
          *(undefined4 *)(param_1 + 0x298) = 9;
          *(undefined4 *)(param_1 + 0x294) = 2;
        }
        switchD_4a1193c4::default(PTR_s_initHouseMap_4a119a60);
LAB_4a1195c4:
        if (bVar13) goto LAB_4a1195cc;
      }
    }
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x474) = 0x42000000;
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x488) = 0x42340000;
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x484) = 0x42340000;
    iVar9 = *(int *)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x1d8) == 2) {
      uVar11 = 1000;
    }
    else {
      uVar11 = 300;
    }
    uVar11 = FUN_4a171fac(uVar11);
    *(undefined4 *)(iVar9 + 0x48c) = uVar11;
    switchD_4a1100dc::default(*(undefined4 *)(param_1 + 0x28),0);
    FUN_4a11e2a0(param_1,0);
    if (*(int *)(param_1 + 700) == 1) {
      *(undefined4 *)(param_1 + 0x2f4) = 0;
LAB_4a119680:
      FUN_4a11e2a0(param_1,0);
    }
    else if (*(int *)(param_1 + 700) == 5) goto LAB_4a119680;
    FUN_4a111968(param_1);
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x470) = *(undefined4 *)(param_1 + 0x2c0);
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x474) = *(undefined4 *)(param_1 + 0x2c4);
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x478) = *(undefined4 *)(param_1 + 0x2c8);
    *(undefined1 *)(param_1 + 0x2d8) = 1;
    iVar9 = *(int *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(iVar9 + 0x470);
    *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(iVar9 + 0x474);
    *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(iVar9 + 0x478);
    *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(iVar9 + 0x48c);
    *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(iVar9 + 0x484);
    *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(iVar9 + 0x488);
    *(int *)(param_1 + 500) = *(int *)(param_1 + 500) + 1;
    *(undefined4 *)(param_1 + 0x1f8) = 0x3c;
    FUN_4a0fc758(iVar12);
    break;
  case 2:
    host_s3eDeviceYield_arm(0);
    iVar9 = *(int *)(param_1 + 0x1d8);
    iVar10 = 8;
    if (iVar9 == 0) {
LAB_4a119748:
      iVar10 = 0x18;
    }
    else if (iVar9 == 1) {
      iVar9 = FUN_4a145a38(iVar12);
      if (iVar9 == 4) {
        iVar10 = 0x108;
      }
      else {
        iVar9 = FUN_4a145a38(iVar12);
        if (iVar9 == 0xb7) {
          iVar10 = 0x208;
        }
      }
    }
    else {
      if (iVar9 != 2) {
        switchD_4a11cc8c::default(0,s_invalid_map_mode_4a119a64);
        goto LAB_4a119748;
      }
      iVar10 = 0x28;
    }
    iVar12 = FUN_4a0fc394(iVar12,iVar10);
    if (iVar12 != 0) {
      *(undefined4 *)(param_1 + 0x1f8) = 0x50;
      *(int *)(param_1 + 500) = *(int *)(param_1 + 500) + 1;
      if (iVar10 != 0) {
        piVar7 = *(int **)(param_1 + 0x27c);
        uVar11 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x60);
        if ((piVar7 != (int *)0x0) && (iVar12 = (**(code **)(*piVar7 + 8))(piVar7), iVar12 != 0)) {
          (**(code **)(*piVar7 + 4))(piVar7);
        }
        piVar7 = *(int **)(param_1 + 0x280);
        if ((piVar7 != (int *)0x0) && (iVar12 = (**(code **)(*piVar7 + 8))(piVar7), iVar12 != 0)) {
          (**(code **)(*piVar7 + 4))(piVar7);
        }
        uVar5 = FUN_4a135e3c(uVar11,PTR_DAT_4a119a78,0);
        *(undefined4 *)(param_1 + 0x27c) = uVar5;
        uVar5 = FUN_4a135e3c(uVar11,PTR_DAT_4a119a7c,0);
        *(undefined4 *)(param_1 + 0x280) = uVar5;
        if (*(int **)(param_1 + 0x27c) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 0x27c) + 0xc))();
        }
        if (*(int **)(param_1 + 0x280) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 0x280) + 0xc))();
        }
        FUN_4a0be380(*(undefined4 *)(param_1 + 0x27c));
        FUN_4a0be380(*(undefined4 *)(param_1 + 0x280));
        if (*(int *)PTR_DAT_4a119a80 != 0) {
          piVar7 = *(int **)(param_1 + 0x284);
          if ((piVar7 != (int *)0x0) && (iVar12 = (**(code **)(*piVar7 + 8))(piVar7), iVar12 != 0))
          {
            (**(code **)(*piVar7 + 4))(piVar7);
          }
          piVar7 = *(int **)(param_1 + 0x288);
          if ((piVar7 != (int *)0x0) && (iVar12 = (**(code **)(*piVar7 + 8))(piVar7), iVar12 != 0))
          {
            (**(code **)(*piVar7 + 4))(piVar7);
          }
          piVar7 = *(int **)(param_1 + 0x28c);
          if ((piVar7 != (int *)0x0) && (iVar12 = (**(code **)(*piVar7 + 8))(piVar7), iVar12 != 0))
          {
            (**(code **)(*piVar7 + 4))(piVar7);
          }
          uVar5 = FUN_4a135e3c(uVar11,PTR_DAT_4a119a84,0);
          *(undefined4 *)(param_1 + 0x284) = uVar5;
          uVar5 = FUN_4a135e3c(uVar11,PTR_DAT_4a119a88,0);
          *(undefined4 *)(param_1 + 0x288) = uVar5;
          uVar11 = FUN_4a135e3c(uVar11,PTR_DAT_4a119a8c,0);
          *(undefined4 *)(param_1 + 0x28c) = uVar11;
          if (*(int **)(param_1 + 0x284) != (int *)0x0) {
            (**(code **)(**(int **)(param_1 + 0x284) + 0xc))();
          }
          if (*(int **)(param_1 + 0x288) != (int *)0x0) {
            (**(code **)(**(int **)(param_1 + 0x288) + 0xc))();
          }
          if (*(int **)(param_1 + 0x28c) != (int *)0x0) {
            (**(code **)(**(int **)(param_1 + 0x28c) + 0xc))();
          }
          FUN_4a0be380(*(undefined4 *)(param_1 + 0x284));
          FUN_4a0be380(*(undefined4 *)(param_1 + 0x288));
          FUN_4a0be380(*(undefined4 *)(param_1 + 0x28c));
        }
      }
      break;
    }
    iVar12 = *(int *)(param_1 + 0x1f8) + 10;
    goto LAB_4a119a50;
  case 3:
    uVar11 = 2;
    if (*(int *)(param_1 + 0x1d8) == 2) {
      uVar11 = 4;
    }
    else if (*(int *)(param_1 + 0x1d8) == 1) {
      uVar11 = 5;
    }
    else {
      iVar12 = FUN_4a142ef4(*(undefined4 *)(param_1 + 0x28));
      if (iVar12 == 0) {
        uVar11 = 3;
      }
    }
    FUN_4a098b50(*(undefined4 *)(param_1 + 0x228),0);
    uVar5 = FUN_4a077b38();
    FUN_4a078bb0(uVar5,uVar11);
    *(int *)(param_1 + 500) = *(int *)(param_1 + 500) + 1;
    iVar12 = 0x5a;
LAB_4a119a50:
    *(int *)(param_1 + 0x1f8) = iVar12;
    break;
  case 4:
    local_28 = *(undefined4 *)(iVar12 + 0x260);
    puVar6 = (undefined4 *)FUN_4a0c6bc0(&local_3c);
    puVar2 = PTR_PTR_4a119f58;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *puVar6 = puVar2;
    puVar3 = PTR_PTR_4a119f5c;
    if (*(int *)(param_1 + 0x1d8) == 2) {
      piVar7 = (int *)FUN_4a0c6bc0(&local_50);
      piVar7[2] = 0;
      piVar7[3] = 0;
      *piVar7 = (int)puVar2;
      thunk_FUN_4a161570(0x18);
      piVar8 = (int *)FUN_4a0c0628();
      piVar8[2] = (int)PTR_DAT_4a119f60;
      piVar8[3] = 2;
      piVar8[4] = 4;
      *piVar8 = (int)puVar3;
      *(undefined1 *)(piVar8 + 5) = 0;
      if (piVar8 != (int *)0x0) {
        (**(code **)(puVar3 + 0xc))(piVar8);
      }
      (**(code **)(*piVar7 + 0x1c))(piVar7);
      piVar7[3] = (int)piVar8;
      piVar7[2] = 4;
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 0xc))(piVar8);
      }
      (**(code **)(local_3c + 0x1c))(&local_3c);
      local_34 = 4;
      local_30 = piVar8;
      FUN_4a16c1a0(&local_50);
      uVar11 = 3000;
    }
    else {
      iVar9 = FUN_4a145a38(iVar12);
      puVar4 = PTR_DAT_4a119f64;
      if (iVar9 == 4) {
        piVar8 = (int *)FUN_4a0c6bc0(&local_50);
        piVar8[2] = 0;
        piVar8[3] = 0;
        *piVar8 = (int)puVar2;
        thunk_FUN_4a161570(0x18);
        piVar7 = (int *)FUN_4a0c0628();
        piVar7[2] = (int)puVar4;
        piVar7[3] = 2;
        *piVar7 = (int)puVar3;
        piVar7[4] = 2;
        *(undefined1 *)(piVar7 + 5) = 0;
        if (piVar7 != (int *)0x0) {
          (**(code **)(puVar3 + 0xc))(piVar7);
        }
        (**(code **)(*piVar8 + 0x1c))(piVar8);
        piVar8[3] = (int)piVar7;
        piVar8[2] = 2;
joined_r0x4a119d40:
        if (piVar7 != (int *)0x0) {
          (**(code **)(*piVar7 + 0xc))(piVar7);
        }
        (**(code **)(local_3c + 0x1c))(&local_3c);
        local_34 = 2;
        local_30 = piVar7;
        FUN_4a16c1a0(&local_50);
        uVar11 = 8000;
      }
      else {
        iVar12 = FUN_4a145a38(iVar12);
        if (iVar12 != 0xb7) {
          piVar8 = (int *)FUN_4a0c6bc0(&local_50);
          piVar8[2] = 0;
          piVar8[3] = 0;
          *piVar8 = (int)puVar2;
          thunk_FUN_4a161570(0x18);
          piVar7 = (int *)FUN_4a0c0628();
          piVar7[2] = (int)puVar4;
          piVar7[3] = 2;
          *piVar7 = (int)puVar3;
          piVar7[4] = 2;
          *(undefined1 *)(piVar7 + 5) = 0;
          if (piVar7 != (int *)0x0) {
            (**(code **)(puVar3 + 0xc))(piVar7);
          }
          (**(code **)(*piVar8 + 0x1c))(piVar8);
          piVar8[3] = (int)piVar7;
          piVar8[2] = 2;
          goto joined_r0x4a119d40;
        }
        piVar7 = (int *)FUN_4a0c6bc0(&local_50);
        piVar7[2] = 0;
        piVar7[3] = 0;
        *piVar7 = (int)puVar2;
        thunk_FUN_4a161570(0x18);
        piVar8 = (int *)FUN_4a0c0628();
        piVar8[2] = (int)PTR_DAT_4a119f60;
        piVar8[3] = 2;
        piVar8[4] = 4;
        *piVar8 = (int)puVar3;
        *(undefined1 *)(piVar8 + 5) = 0;
        if (piVar8 != (int *)0x0) {
          (**(code **)(puVar3 + 0xc))(piVar8);
        }
        (**(code **)(*piVar7 + 0x1c))(piVar7);
        piVar7[3] = (int)piVar8;
        piVar7[2] = 4;
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 0xc))(piVar8);
        }
        (**(code **)(local_3c + 0x1c))(&local_3c);
        local_34 = 4;
        local_30 = piVar8;
        FUN_4a16c1a0(&local_50);
        uVar11 = 10000;
      }
      FUN_4a10d33c(param_1);
    }
    FUN_4a127938(param_1);
    iVar12 = 0;
    if (0 < local_34) {
      do {
        if (local_30 == (int *)0x0) {
          iVar9 = 0;
        }
        else {
          iVar9 = local_30[2];
        }
        FUN_4a086318(local_28,(int)*(short *)(iVar9 + iVar12 * 2));
        iVar12 = iVar12 + 1;
      } while (iVar12 < local_34);
    }
    piVar7 = local_30;
    iVar12 = local_34;
    if (local_30 != (int *)0x0) {
      (**(code **)(*local_30 + 0xc))(local_30);
    }
    (**(code **)(*(int *)(param_1 + 0x750) + 0x1c))((int *)(param_1 + 0x750));
    *(int *)(param_1 + 0x758) = iVar12;
    *(int **)(param_1 + 0x75c) = piVar7;
    *(undefined4 *)(param_1 + 0x764) = uVar11;
    *(int *)(param_1 + 500) = *(int *)(param_1 + 500) + 1;
    *(undefined4 *)(param_1 + 0x1f8) = 100;
    FUN_4a0ed11c(*(undefined4 *)(param_1 + 0x28));
    iVar12 = *(int *)(param_1 + 0x20) + 0x128;
    uVar11 = FUN_4a09f974(iVar12,0x17b);
    FUN_4a17295c(uVar11,1);
    uVar11 = FUN_4a171e1c();
    *(undefined4 *)(param_1 + 0x234) = uVar11;
    FUN_4a09f9c8(iVar12,0x17b);
    uVar11 = FUN_4a171e1c();
    *(undefined4 *)(param_1 + 0x238) = uVar11;
    iVar12 = FUN_4a13ca78(*(undefined4 *)(param_1 + 0x20));
    puVar2 = PTR_DAT_4a119f68;
    uVar11 = FUN_4a0bbd68(*(undefined4 *)PTR_DAT_4a119f68,iVar12 - *(int *)(param_1 + 0x234),2);
    *(undefined4 *)(param_1 + 0x22c) = uVar11;
    iVar12 = FUN_4a0bbe00(*(undefined4 *)puVar2,0x2d,2);
    *(int *)(param_1 + 0x230) = iVar12;
    *(int *)(param_1 + 0x23c) = iVar12 + 5;
    *(int *)(param_1 + 0x240) = *(int *)(param_1 + 0x238) + -10;
    *(undefined1 *)(param_1 + 0x274) = 0;
    iVar12 = FUN_4a13ca78(*(undefined4 *)(param_1 + 0x20));
    uVar11 = FUN_4a0bbd68(*(undefined4 *)puVar2,iVar12 + -0x46,2);
    *(undefined4 *)(param_1 + 0x25c) = uVar11;
    iVar12 = FUN_4a13caa0(*(undefined4 *)(param_1 + 0x20));
    uVar11 = FUN_4a0bbe00(*(undefined4 *)puVar2,iVar12 + -0x55,2);
    *(undefined4 *)(param_1 + 0x260) = uVar11;
    *(undefined4 *)(param_1 + 0x264) = 0x1e;
    iVar12 = FUN_4a13ca78(*(undefined4 *)(param_1 + 0x20));
    uVar11 = FUN_4a0bbd68(*(undefined4 *)puVar2,iVar12 + -0x46,2);
    *(undefined4 *)(param_1 + 0x268) = uVar11;
    iVar12 = FUN_4a13caa0(*(undefined4 *)(param_1 + 0x20));
    uVar11 = FUN_4a0bbe00(*(undefined4 *)puVar2,iVar12 + -0x7d,2);
    *(undefined4 *)(param_1 + 0x26c) = uVar11;
    *(undefined4 *)(param_1 + 0x270) = 0x1e;
    *(undefined1 *)(param_1 + 0x276) = 0;
    FUN_4a111d74(param_1);
    FUN_4a16c1a0(&local_3c);
  }
  host_s3eDeviceYield_arm(0);
  return s_SceneGame__updateLoadingState_4a119f6c;
}



// Address: 4a119f8c

void FUN_4a119f8c(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  undefined1 *puVar12;
  undefined1 auStack_30 [20];
  
  iVar8 = 0;
  *(undefined4 *)(param_1 + 0x768) = 0;
  iVar2 = FUN_4a073908(*(undefined4 *)(param_1 + 0x5f8));
  bVar10 = param_2 != 0;
  iVar3 = 0;
  if (bVar10) {
    iVar3 = *(int *)(param_1 + 0x76c);
    iVar2 = iVar3;
  }
  bVar1 = iVar3 < 0;
  bVar11 = iVar2 == 0;
  puVar12 = auStack_30;
  if ((!bVar10 || bVar11) || bVar1) {
    puVar12 = &stack0xffffffe4;
  }
  if ((!bVar10 || bVar11) || bVar1) {
    param_2 = *(int *)(puVar12 + 4);
    param_1 = *(int *)(puVar12 + 8);
    iVar8 = *(int *)(puVar12 + 0xc);
    puVar12 = puVar12 + 0x1c;
  }
  if ((!bVar10 || bVar11) || bVar1) {
    return;
  }
  puVar4 = (undefined4 *)FUN_4a0c6bc0(puVar12);
  *puVar4 = PTR_PTR_4a11a0cc;
  puVar4[2] = *(undefined4 *)(param_1 + 0x78c);
  piVar5 = *(int **)(param_1 + 0x790);
  puVar4[3] = piVar5;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))();
  }
  uVar7 = 0;
  *puVar4 = PTR_PTR_4a11a0d0;
  uVar6 = puVar4[2];
  if ((int)uVar6 < 1) {
    uVar9 = 0;
  }
  else {
    uVar9 = uVar6 & 1;
  }
  if (uVar9 != 0) {
    do {
      iVar3 = iVar8;
      if (puVar4[3] != 0) {
        iVar3 = *(int *)(puVar4[3] + 8);
      }
      if (*(int *)(iVar3 + uVar7 * 4) == param_2) goto LAB_4a11a0a8;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)uVar9);
  }
  if ((int)uVar9 < (int)uVar6) {
    iVar3 = puVar4[3];
    do {
      iVar2 = iVar8;
      if (iVar3 != 0) {
        iVar2 = *(int *)(iVar3 + 8);
      }
      uVar7 = uVar9;
      if (*(int *)(iVar2 + uVar9 * 4) == param_2) goto LAB_4a11a0a8;
      iVar2 = iVar8;
      if (iVar3 != 0) {
        iVar2 = *(int *)(iVar3 + 8);
      }
      if (*(int *)(iVar2 + (uVar9 + 1) * 4) == param_2) {
        uVar7 = uVar9 + 1;
        goto LAB_4a11a0a8;
      }
      uVar9 = uVar9 + 2;
    } while ((int)uVar9 < (int)uVar6);
  }
  uVar7 = 0xffffffff;
LAB_4a11a0a8:
  FUN_4a16a5f4(puVar12);
  if (uVar7 != 0xffffffff) {
    FUN_4a113f74(param_1,uVar7);
  }
  return;
}



// Address: 4a11a2bc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a11a2bc(int param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = PTR_DAT_4a11a3e0;
  if (param_3 != 0) {
    FUN_4a0bbb28(*(undefined4 *)PTR_DAT_4a11a3e0);
  }
  iVar5 = *(int *)(param_1 + 0x20) + 0x278;
  iVar6 = *(int *)(param_1 + 0x20) + 0x128;
  iVar2 = FUN_4a13caa0();
  if (param_3 == 0) {
    uVar3 = 0x3c;
  }
  else {
    uVar3 = FUN_4a0bbd68(*(undefined4 *)puVar1,0x3c,2);
    FUN_4a0bbe00(*(undefined4 *)puVar1,iVar2 + -0x14,2);
  }
  uVar4 = FUN_4a171fac();
  uVar3 = FUN_4a171fac(uVar3);
  FUN_4a09f664(iVar6,0x166,uVar3,uVar4);
  FUN_4a09f3a4(iVar6,param_2);
  uVar3 = FUN_4a06c410(iVar5);
  uVar4 = FUN_4a141aa4(*(undefined4 *)(param_1 + 0x24));
  FUN_4a06c86c(iVar5,uVar4);
  FUN_4a06afd0(iVar5,param_2,uVar3,3);
  if (param_3 == 0) {
    return;
  }
  iVar2 = *(int *)puVar1;
  *(undefined1 *)(*(int *)PTR_DAT_4a0bbce8 + 0xc) = 0;
  host_glMatrixMode_arm(0x1700);
  FUN_4a150724();
  *(undefined4 *)(iVar2 + 8) = 0x3f800000;
  return;
}



// Address: 4a11a440

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a11a440(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar3 = *(int *)(param_1 + 0x20);
  iVar1 = FUN_4a145d3c(iVar3);
  if (iVar1 != 0) {
    return;
  }
  FUN_4a0fe54c(iVar3,param_2);
  if (*(char *)(iVar3 + 0x495) != '\0') {
    switch(param_2) {
    case 1:
      *(undefined4 *)(param_1 + 0x6f4) = 0x853;
      uVar2 = 0x854;
      break;
    case 2:
      *(undefined4 *)(param_1 + 0x6f4) = 0xc84;
      uVar2 = 0xc85;
      break;
    default:
      switchD_4a11cc8c::default(0,s_Invalid_message_ID_4a11a7fc);
    case 0:
      *(undefined4 *)(param_1 + 0x6f4) = 0x84d;
      uVar2 = 0x84e;
      break;
    case 5:
      *(undefined4 *)(param_1 + 0x6f4) = 0x855;
      iVar1 = host_s3eAccelerometerGetInt_arm(0);
      if (iVar1 == 0) {
        uVar2 = 0xcd5;
      }
      else {
        uVar2 = 0x856;
      }
      break;
    case 6:
      *(undefined4 *)(param_1 + 0x6f4) = 0x857;
      iVar1 = host_s3eAccelerometerGetInt_arm(0);
      if (iVar1 == 0) {
        uVar2 = 0xcd4;
      }
      else {
        uVar2 = 0x858;
      }
      break;
    case 7:
      *(undefined4 *)(param_1 + 0x6f4) = 0x859;
      uVar2 = 0x85a;
      break;
    case 8:
      *(undefined4 *)(param_1 + 0x6f4) = 0x85b;
      uVar2 = 0x85c;
      break;
    case 9:
      *(undefined4 *)(param_1 + 0x6f4) = 0xa1b;
      uVar2 = 0x85d;
      break;
    case 10:
      *(undefined4 *)(param_1 + 0x6f4) = 0xa29;
      uVar2 = 0x861;
      break;
    case 0xb:
      *(undefined4 *)(param_1 + 0x6f4) = 0xa22;
      uVar2 = 0x85e;
      break;
    case 0xd:
      *(undefined4 *)(param_1 + 0x6f4) = 0x9bb;
      uVar2 = 0x865;
      break;
    case 0xe:
      *(undefined4 *)(param_1 + 0x6f4) = 0x9b7;
      uVar2 = 0x862;
      break;
    case 0xf:
      *(undefined4 *)(param_1 + 0x6f4) = 0x9ba;
      uVar2 = 0x863;
      break;
    case 0x10:
      *(undefined4 *)(param_1 + 0x6f4) = 0x9bb;
      uVar2 = 0x864;
      break;
    case 0x11:
      *(undefined4 *)(param_1 + 0x6f4) = 0x9c0;
      uVar2 = 0x866;
      break;
    case 0x12:
      *(undefined4 *)(param_1 + 0x6f4) = 0x9bf;
      uVar2 = 0x867;
      break;
    case 0x13:
      *(undefined4 *)(param_1 + 0x6f4) = 0x9c1;
      uVar2 = 0x868;
      break;
    case 0x14:
      *(undefined4 *)(param_1 + 0x6f4) = 0x9c2;
      uVar2 = 0xc12;
      break;
    case 0x15:
      *(undefined4 *)(param_1 + 0x6f4) = 0xc17;
      uVar2 = 0xc14;
      break;
    case 0x16:
      *(undefined4 *)(param_1 + 0x6f4) = 0xc18;
      uVar2 = 0xc13;
      break;
    case 0x17:
      *(undefined4 *)(param_1 + 0x6f4) = 0xc19;
      uVar2 = 0xc16;
      break;
    case 0x18:
      *(undefined4 *)(param_1 + 0x6f4) = 0xc1a;
      uVar2 = 0xc15;
      break;
    case 0x19:
      *(undefined4 *)(param_1 + 0x6f4) = 0xc86;
      uVar2 = 0xc87;
      break;
    case 0x1a:
      *(undefined4 *)(param_1 + 0x6f4) = 0xc86;
      uVar2 = 0xc88;
      break;
    case 0x1b:
      *(undefined4 *)(param_1 + 0x6f4) = 0xc86;
      uVar2 = 0xc89;
      break;
    case 0x1c:
      *(undefined4 *)(param_1 + 0x6f4) = 0xc86;
      uVar2 = 0xc8a;
      break;
    case 0x1d:
      *(undefined4 *)(param_1 + 0x6f4) = 0xc8e;
      uVar2 = 0xc8f;
      break;
    case 0x1e:
      *(undefined4 *)(param_1 + 0x6f4) = 0xc90;
      uVar2 = 0xc91;
      break;
    case 0x20:
      *(undefined4 *)(param_1 + 0x6f4) = 0xc86;
      uVar2 = 0xc8b;
      break;
    case 0x21:
      *(undefined4 *)(param_1 + 0x6f4) = 0x869;
      uVar2 = 0x86a;
      break;
    case 0x22:
      *(undefined4 *)(param_1 + 0x6f4) = 0x869;
      uVar2 = 0x86b;
      break;
    case 0x23:
      *(undefined4 *)(param_1 + 0x6f4) = 0x84f;
      uVar2 = 0x850;
    }
    *(undefined4 *)(param_1 + 0x6f8) = uVar2;
    *(undefined1 *)(param_1 + 0x6f3) = 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a11a47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a11a810

/* WARNING: Removing unreachable block (ram,0x4a115dac) */
/* WARNING: Removing unreachable block (ram,0x4a11e2dc) */
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

void FUN_4a11a810(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x2b4) = param_2;
  FUN_4a115d8c();
  FUN_4a111968(param_1);
  *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x470) = *(undefined4 *)(param_1 + 0x2c0);
  *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x474) = *(undefined4 *)(param_1 + 0x2c4);
  *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x478) = *(undefined4 *)(param_1 + 0x2c8);
  *(undefined1 *)(param_1 + 0x2d8) = 1;
  *(undefined4 *)(param_1 + 0x2b4) = 0;
  *(undefined4 *)(param_1 + 0x2f4) = 0;
  if (*(int *)(param_1 + 700) == 8) {
    return;
  }
  iVar1 = *(int *)(param_1 + 700);
  *(undefined4 *)(param_1 + 700) = 0;
  switch((uint)switchD_4a11e2d8::switchdataD_4a11e2e0 & 0xfffffffe) {
  case 0x4a11e304:
    *(undefined1 *)(param_1 + 0x2d8) = 1;
    *(undefined4 *)(param_1 + 0x2f8) = 0;
    *(undefined4 *)(param_1 + 0x2fc) = 0;
    *(undefined4 *)(param_1 + 0x304) = 0;
    *(undefined4 *)(param_1 + 0x300) = 0;
    *(undefined4 *)(param_1 + 0x308) = 0;
    *(undefined4 *)(param_1 + 0x30c) = 0;
  }
  if (iVar1 != 0) {
    return;
  }
  return;
}



// Address: 4a11a86c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a11a86c(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_30 [8];
  int iStack_28;
  int iStack_24;
  
  param_2 = *(int *)(param_1 + 0x748) + param_2;
  *(int *)(param_1 + 0x748) = param_2;
  if (param_2 < 0x1389) {
    return;
  }
  iVar7 = 0;
  *(undefined4 *)(param_1 + 0x748) = 0;
  iVar5 = *(int *)(param_1 + 0x24);
  uVar8 = *(undefined4 *)(param_1 + 0x28);
  uVar1 = FUN_4a0fe640(*(undefined4 *)(param_1 + 0x20),1,*(int *)(iVar5 + 0x410) + -1);
  piVar2 = (int *)FUN_4a12785c(param_1,uVar1);
  if (piVar2 == (int *)0x0) {
    uVar1 = FUN_4a13f8f8(iVar5,uVar1);
    uVar1 = FUN_4a1448c8(uVar8,uVar1);
    uVar1 = FUN_4a11f758(param_1,uVar1);
    piVar2 = (int *)FUN_4a125d70(param_1,1,uVar1);
  }
  iVar5 = (**(code **)(*piVar2 + 0x10))(piVar2);
  if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a11a934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_4a10ca70(auStack_30,param_1);
  switchD_4a11cc8c::default(iStack_28 < 0x102,PTR_s_LGC_isn_t_big_enough_for_destina_4a11aa30);
  iVar3 = FUN_4a0fe640(*(undefined4 *)(param_1 + 0x20),0,iStack_28 + -1);
  iVar5 = DAT_4a11aa34;
  iVar6 = 0;
  if (0 < iStack_28) {
    do {
      iVar4 = iVar7;
      if (iStack_24 != 0) {
        iVar4 = *(int *)(iStack_24 + 8);
      }
      iVar9 = *(int *)(iVar4 + iVar3 * 4);
      iVar4 = FUN_4a146b58(iVar9,0x400);
      if (iVar4 != 0) {
        FUN_4a16a5f4(auStack_30);
        iVar7 = iVar9;
        goto FUN_4a07378c;
      }
      do {
        iVar3 = iVar3 * 0x607 + 0xdf3;
        iVar4 = (int)((ulonglong)((longlong)iVar5 * (longlong)iVar3) >> 0x20);
        iVar3 = ((iVar4 >> 7) - (iVar4 >> 0x1f)) * -0x101 + iVar3;
      } while (iStack_28 <= iVar3);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iStack_28);
  }
  FUN_4a16a5f4(auStack_30);
FUN_4a07378c:
  FUN_4a0737a4(piVar2,0x6f,iVar7);
  return;
}



// Address: 4a11aa38

void FUN_4a11aa38(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  uVar2 = FUN_4a13fa70(*(undefined4 *)(param_1 + 0x24),0,param_3,param_4,param_4);
  uVar6 = 2;
  uVar4 = 30000;
  switch(uVar2) {
  case 1:
    break;
  case 2:
  case 3:
    uVar6 = 3;
    break;
  case 4:
  case 5:
    uVar6 = 4;
    uVar4 = 40000;
    break;
  default:
    switchD_4a11cc8c::default(0,s_invalid_skill_rank_4a11acdc);
  case 0:
    uVar4 = 20000;
  }
  *(undefined4 *)(param_1 + 0x85c) = uVar4;
  *(undefined4 *)(param_1 + 0x860) = uVar6;
  *(undefined4 *)(param_1 + 0x864) = 0;
  *(undefined4 *)(param_1 + 0x854) = 0;
  iVar8 = *(int *)(param_1 + 0x20);
  FUN_4a0d36d0(*(undefined4 *)(iVar8 + 0x264),2);
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x860)) {
    do {
      uVar2 = FUN_4a0fe640(iVar8,0x190000,0x4b0000);
      if (*(int *)(param_1 + 0x874) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x874) + 8);
      }
      *(undefined4 *)(iVar5 + iVar7 * 4) = uVar2;
      if (*(int *)(param_1 + 0x888) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x888) + 8);
      }
      *(undefined4 *)(iVar5 + iVar7 * 4) = uVar2;
      uVar1 = FUN_4a0fe640(iVar8,0,3);
      if (*(int *)(param_1 + 0x89c) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x89c) + 8);
      }
      *(undefined1 *)(iVar5 + iVar7) = uVar1;
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x860));
  }
  FUN_4a108d64(*(undefined4 *)(param_1 + 0x5f8));
  uVar2 = FUN_4a146c0c(*(undefined4 *)(param_1 + 0x7f0));
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x860)) {
    do {
      uVar4 = FUN_4a077b38();
      piVar3 = (int *)FUN_4a082464(uVar4,0x19,1);
      FUN_4a11bc14(param_1,piVar3);
      if (iVar7 < 2) {
        FUN_4a0af110(piVar3,0xc2700000,0,0x3f800000,0);
      }
      else {
        FUN_4a0af110(piVar3,0x42700000,0,0x3f800000,0);
      }
      iVar8 = param_1 + iVar7 * 4;
      FUN_4a06f8f0(*(undefined4 *)(iVar8 + 0x818),piVar3);
      FUN_4a06f95c(*(undefined4 *)(iVar8 + 0x818),0xdf,0x14);
      uVar4 = FUN_4a0fe640(*(undefined4 *)(param_1 + 0x20),0,1000);
      FUN_4a06f7a4(*(undefined4 *)(iVar8 + 0x818),uVar4);
      FUN_4a13eaec(uVar2,iVar7 + 3000);
      uVar4 = FUN_4a165910();
      FUN_4a0b4c10(uVar4,piVar3);
      if ((piVar3 != (int *)0x0) && (iVar5 = (**(code **)(*piVar3 + 8))(piVar3), iVar5 != 0)) {
        (**(code **)(*piVar3 + 4))(piVar3);
      }
      FUN_4a0fe640(*(undefined4 *)(param_1 + 0x20),0x20000,0x70000);
      uVar4 = FUN_4a171fac();
      uVar4 = FUN_4a17295c(uVar4,0xfffffff0);
      *(undefined4 *)(iVar8 + 0x828) = 0;
      *(undefined4 *)(iVar8 + 0x838) = uVar4;
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x860));
  }
  *(undefined4 *)(param_1 + 0x84c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x848) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7fc) = 0xc0d;
  *(undefined4 *)(param_1 + 0x804) = 3000;
  *(undefined4 *)(param_1 + 0x808) = 4000;
  *(undefined4 *)(param_1 + 0x80c) = 0x4a;
  *(undefined4 *)(param_1 + 0x850) = 0;
  return;
}



// Address: 4a11acf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_4a11acf0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  
  uVar9 = *(undefined4 *)(param_1 + 0x20);
  switchD_4a11cc8c::default(1,s_fishy_fish_4a11b0a4,param_3,param_4,param_4);
  switchD_4a11cc8c::default(1,s_fishy_fish_4a11b0a4);
  switchD_4a11cc8c::default(1,s_fishy_fish_4a11b0a4);
  switchD_4a11cc8c::default(1,s_fishy_fish_4a11b0a4);
  FUN_4a108d64(*(undefined4 *)(param_1 + 0x7f0));
  *(undefined4 *)(param_1 + 0x814) = 0;
  iVar8 = 0x1d;
  iVar2 = FUN_4a13fa70(*(undefined4 *)(param_1 + 0x24),1);
  switch(iVar2) {
  case 0:
    break;
  case 1:
    iVar8 = FUN_4a0fe640(uVar9,0x1d,0x1e);
    break;
  case 2:
    iVar8 = FUN_4a0fe640(uVar9,0x1d,0x1f);
    break;
  case 3:
    iVar8 = FUN_4a0fe640(uVar9,0x1d,0x20);
    break;
  case 4:
  case 5:
    iVar8 = FUN_4a0fe640(uVar9,0x1d,0x21);
    if ((iVar2 == 5) && (iVar8 < 0x1e)) {
      iVar8 = FUN_4a0fe640(uVar9,0x1d,0x21);
    }
    break;
  default:
    switchD_4a11cc8c::default(0,s_invalid_skill_rank_4a11b0b0);
  }
  uVar9 = _DAT_4a11b0c4;
  uVar3 = iVar8 - 0x1d;
  uVar10 = 4 < uVar3;
  *(int *)(param_1 + 0x8c8) = iVar8;
                    /* WARNING: Could not recover jumptable at 0x4a11ae14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (!(bool)uVar10) {
    (*(code *)(&PTR_LAB_4a11ae1c)[uVar3])(uVar3,uVar9);
    return;
  }
  switchD_4a11cc8c::default(0,s_L>invalid_fish_type_4a11b0c6 + 2);
  *(undefined4 *)(param_1 + 0x8c0) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x8c4) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x8bc) = 0;
  FUN_4a0fe640(*(undefined4 *)(param_1 + 0x20),0,0x10000);
  uVar9 = FUN_4a171fac();
  uVar4 = FUN_4a17295c(uVar9,0xfffffff0);
  *(undefined4 *)(param_1 + 0x8a8) = uVar4;
  uVar9 = FUN_4a1725c0(0x40000000,uVar4);
  FUN_4a172458(uVar4,uVar9);
  if (!(bool)uVar10) {
    uVar9 = uVar4;
  }
  uVar9 = FUN_4a171e1c(uVar9);
  uVar5 = FUN_4a171e1c(*(undefined4 *)(param_1 + 0x8c4));
  FUN_4a0fe640(*(undefined4 *)(param_1 + 0x20),uVar5,uVar9);
  uVar3 = FUN_4a171fac();
  uVar9 = FUN_4a1725c0(0x40000000,uVar3);
  FUN_4a1720a0(uVar9,uVar4);
  if ((!(bool)uVar10) ||
     ((FUN_4a1720a0(uVar4,uVar3), (bool)uVar10 &&
      (iVar2 = FUN_4a0fb748(*(undefined4 *)(param_1 + 0x20)), iVar2 < 0x32)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar3 = uVar3 ^ 0x80000000;
  }
  *(undefined4 *)(param_1 + 0x8b4) = uVar4;
  uVar9 = FUN_4a171a94(uVar3,uVar4);
  *(undefined4 *)(param_1 + 0x8b8) = uVar9;
  uVar9 = FUN_4a106fe0(*(undefined4 *)(*(int *)(param_1 + 0x5f8) + 0x50));
  uVar4 = FUN_4a077b38();
  piVar6 = (int *)FUN_4a082464(uVar4,0x32,1);
  iVar2 = *(int *)(param_1 + 0x5f8);
  uVar4 = FUN_4a171fac(*(undefined4 *)(iVar2 + 0x4c));
  uVar4 = FUN_4a17295c(uVar4,0xfffffff0);
  uVar5 = FUN_4a171fac(*(undefined4 *)(iVar2 + 0x48));
  uVar5 = FUN_4a17295c(uVar5,0xfffffff0);
  uVar7 = FUN_4a171fac(*(undefined4 *)(iVar2 + 0x44));
  uVar7 = FUN_4a17295c(uVar7,0xfffffff0);
  FUN_4a0af1d4(piVar6,uVar7,uVar5,uVar4);
  uVar9 = FUN_4a171fac(uVar9);
  uVar9 = FUN_4a17295c(uVar9,0xfffffff0);
  FUN_4a0af110(piVar6,uVar9,0,0x3f800000,0);
  FUN_4a07a584(piVar6,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x454));
  FUN_4a06f8f0(*(undefined4 *)(param_1 + 0x8cc),piVar6);
  FUN_4a06f95c(*(undefined4 *)(param_1 + 0x8cc),0xe9,0x14);
  if ((piVar6 != (int *)0x0) && (iVar2 = (**(code **)(*piVar6 + 8))(piVar6), iVar2 != 0)) {
    (**(code **)(*piVar6 + 4))(piVar6);
  }
  uVar4 = FUN_4a077b38();
  piVar6 = (int *)FUN_4a082464(uVar4,0x30,1);
  iVar2 = *(int *)(param_1 + 0x5f8);
  uVar4 = FUN_4a171fac(*(undefined4 *)(iVar2 + 0x4c));
  uVar4 = FUN_4a17295c(uVar4,0xfffffff0);
  uVar5 = FUN_4a171fac(*(undefined4 *)(iVar2 + 0x48));
  uVar5 = FUN_4a17295c(uVar5,0xfffffff0);
  uVar7 = FUN_4a171fac(*(undefined4 *)(iVar2 + 0x44));
  uVar7 = FUN_4a17295c(uVar7,0xfffffff0);
  FUN_4a0af1d4(piVar6,uVar7,uVar5,uVar4);
  FUN_4a0af110(piVar6,uVar9,0,0x3f800000,0);
  FUN_4a07a584(piVar6,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x454));
  FUN_4a06f8f0(*(undefined4 *)(param_1 + 0x8d0),piVar6);
  FUN_4a06f95c(*(undefined4 *)(param_1 + 0x8d0),0xe4,0x10);
  if ((piVar6 != (int *)0x0) && (iVar2 = (**(code **)(*piVar6 + 8))(piVar6), iVar2 != 0)) {
    (**(code **)(*piVar6 + 4))(piVar6);
  }
  iVar2 = host_s3eAccelerometerGetInt_arm(0);
  if (iVar2 == 0) {
    uVar9 = 0xcd3;
  }
  else {
    uVar9 = 0xc0a;
  }
  *(undefined4 *)(param_1 + 0x7fc) = uVar9;
  *(undefined4 *)(param_1 + 0x804) = 4000;
  *(undefined4 *)(param_1 + 0x808) = 7000;
  *(undefined4 *)(param_1 + 0x80c) = 0x4b;
  return;
}



// Address: 4a11b1d8

int FUN_4a11b1d8(int param_1,uint param_2)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_30 [8];
  int local_28;
  int local_24;
  
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  FUN_4a10ca70(auStack_30,param_1);
  iVar1 = FUN_4a0fe640(*(undefined4 *)(param_1 + 0x20),0,local_28 + -1);
  iVar3 = 0;
  if (0 < local_28) {
    do {
      FUN_4a0015f0(iVar1 + iVar3,local_28);
      if (local_24 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(local_24 + 8);
      }
      iVar4 = *(int *)(iVar2 + extraout_r1 * 4);
      iVar2 = FUN_4a143ac8(uVar5,*(undefined4 *)(iVar4 + 0x28));
      if (((((int)*(short *)(iVar2 + 0x18) & param_2) != 0) &&
          (iVar2 = FUN_4a1465dc(iVar4), iVar2 != 0)) &&
         (iVar2 = FUN_4a1461c0(iVar4,0x300), iVar2 == 0)) {
        FUN_4a16a5f4(auStack_30);
        return iVar4;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_28);
  }
  FUN_4a16a5f4(auStack_30);
  return 0;
}



// Address: 4a11b434

undefined4 FUN_4a11b434(int param_1,int param_2,int param_3,int param_4)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  bool bVar16;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int *piVar11;
  
  puVar1 = PTR_DAT_4a11bc0c;
  piVar5 = &local_40;
  piVar6 = &local_40;
  piVar7 = &local_40;
  piVar8 = &local_40;
  piVar11 = &local_40;
  local_28 = *(int *)PTR_DAT_4a11bc04;
  local_2c = *(int *)PTR_DAT_4a11bc08;
  FUN_4a0bbe98(*(undefined4 *)PTR_DAT_4a11bc0c,&local_28,&local_2c);
  iVar3 = *(int *)(param_1 + 0x264);
  iVar14 = *(int *)(param_1 + 0x270);
  if (param_4 != 0) {
    uVar4 = FUN_4a171fac();
    FUN_4a17211c(uVar4,0x3f400000);
    iVar3 = FUN_4a171e1c();
  }
  iVar13 = *(int *)(param_1 + 0x1c0);
  if ((iVar13 == 6 || iVar13 == 0x15) || iVar13 == 7) {
    local_40 = iVar3;
    iVar3 = FUN_4a134a10(local_28,local_2c,*(undefined4 *)(param_1 + 0x25c),
                         *(undefined4 *)(param_1 + 0x260));
    if ((iVar3 != 0) && ((*(uint *)(param_1 + 0xa64) & 0x2000) != 0 || param_4 != 0)) {
      cVar2 = '\x01' - *(byte *)(param_1 + 0x276);
      if (1 < *(byte *)(param_1 + 0x276)) {
        cVar2 = '\0';
      }
      *(char *)(param_1 + 0x276) = cVar2;
      return 1;
    }
    iVar3 = *(int *)(param_1 + 0x1c0);
    if ((((iVar3 == 6 || iVar3 == 0x15) || iVar3 == 7) &&
        (local_40 = iVar14,
        iVar3 = FUN_4a134a10(local_28,local_2c,*(undefined4 *)(param_1 + 0x268),
                             *(undefined4 *)(param_1 + 0x26c)), iVar3 != 0)) &&
       ((*(uint *)(param_1 + 0xa64) & 0x2000) != 0 || param_4 != 0)) {
      cVar2 = '\x01' - *(byte *)(param_1 + 0x277);
      if (1 < *(byte *)(param_1 + 0x277)) {
        cVar2 = '\0';
      }
      *(char *)(param_1 + 0x277) = cVar2;
      return 1;
    }
  }
  if (param_4 != 0) {
    return 0;
  }
  iVar14 = FUN_4a0bbcf0(*(undefined4 *)puVar1,*(int *)(param_1 + 0x76c) * 0x30 + 3);
  iVar13 = FUN_4a0bbcf0(*(undefined4 *)puVar1,0x33);
  bVar16 = SBORROW4(param_2,iVar14);
  iVar3 = param_2 - iVar14;
  if (param_2 < iVar14) {
    bVar16 = SBORROW4(param_3,iVar13);
    iVar3 = param_3 - iVar13;
  }
  if (iVar3 < 0 != bVar16) {
    FUN_4a0cf554(param_1,0x14);
    if (param_2 + -3 < 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)((ulonglong)((longlong)DAT_4a11bc10 * (longlong)(param_2 + -3)) >> 0x20);
      iVar3 = (iVar3 >> 3) - (iVar3 >> 0x1f);
    }
    FUN_4a113f74(param_1,iVar3);
    return 1;
  }
  iVar3 = FUN_4a0bbd68(*(undefined4 *)puVar1,0x22,2);
  uVar4 = *(undefined4 *)puVar1;
  local_3c = FUN_4a0bc200(uVar4);
  local_40 = FUN_4a0bc1f8(uVar4);
  if (local_3c <= local_40) {
    piVar5 = &local_3c;
  }
  iVar14 = FUN_4a0bbe00(*(undefined4 *)puVar1,*piVar5 + -0x22,2);
  iVar13 = FUN_4a0bbcf0(*(undefined4 *)puVar1,0x18);
  if (((*(int *)(param_1 + 0x1c0) == 6) && (local_28 < iVar3 + iVar13)) &&
     ((iVar14 - iVar13 < local_2c && ((*(uint *)(param_1 + 0xa64) & 0x80) != 0)))) {
    FUN_4a0cf554(param_1,0x15);
    FUN_4a0cca64(param_1,iVar3,iVar14);
    FUN_4a111238(param_1);
    return 1;
  }
  if (((*(int *)(param_1 + 0x1d8) == 0) &&
      (iVar3 = FUN_4a142ef4(*(undefined4 *)(param_1 + 0x28)), iVar3 == 0)) &&
     (((*(uint *)(param_1 + 0xa64) & 0x100) != 0 && (*(int *)(param_1 + 0x1c0) == 6)))) {
    uVar4 = FUN_4a0bbd68(*(undefined4 *)puVar1,0x21,2);
    uVar15 = *(undefined4 *)puVar1;
    local_3c = FUN_4a0bc200(uVar15);
    local_40 = FUN_4a0bc1f8(uVar15);
    if (local_3c <= local_40) {
      piVar6 = &local_3c;
    }
    uVar15 = FUN_4a0bbe00(*(undefined4 *)puVar1,*piVar6 + -0x58,2);
    local_40 = FUN_4a0bbcf0(*(undefined4 *)puVar1,0x18);
    iVar3 = FUN_4a134a10(local_28,local_2c,uVar4,uVar15);
    if (iVar3 != 0) {
      FUN_4a0cf554(param_1,0x15);
      FUN_4a0cca64(param_1,uVar4,uVar15);
      FUN_4a1161d0(param_1,7);
      FUN_4a122618(param_1,0xd);
      FUN_4a11a440(param_1,0x19);
      return 1;
    }
  }
  uVar4 = *(undefined4 *)puVar1;
  local_3c = FUN_4a0bc200(uVar4);
  local_40 = FUN_4a0bc1f8(uVar4);
  if (local_40 <= local_3c) {
    piVar7 = &local_3c;
  }
  local_30 = FUN_4a0bbd68(*(undefined4 *)puVar1,*piVar7 + -0x23,2);
  uVar4 = *(undefined4 *)puVar1;
  local_3c = FUN_4a0bc200(uVar4);
  local_40 = FUN_4a0bc1f8(uVar4);
  if (local_3c <= local_40) {
    piVar8 = &local_3c;
  }
  local_34 = FUN_4a0bbe00(*(undefined4 *)puVar1,*piVar8 + -0x22,2);
  iVar3 = FUN_4a0bbcf0(*(undefined4 *)puVar1,0x18);
  iVar14 = FUN_4a0bc1f8(*(undefined4 *)puVar1);
  if ((iVar14 == 400) || (iVar14 = FUN_4a0bc1f8(*(undefined4 *)puVar1), iVar14 == 0x140)) {
    iVar3 = iVar3 + 0x14;
  }
  if (*(int *)(param_1 + 0x1c0) == 6 || *(int *)(param_1 + 0x1c0) == 0x15) {
    local_40 = iVar3;
    iVar3 = FUN_4a134a10(local_28,local_2c,local_30,local_34);
    uVar9 = 0;
    if (iVar3 != 0) {
      uVar9 = *(uint *)(param_1 + 0xa64);
    }
    if (iVar3 != 0 && (uVar9 & 0x40) != 0) {
      FUN_4a0cf554(param_1,0x15);
      FUN_4a0cca64(param_1,local_30,local_34);
      if (*(int *)(param_1 + 0x1c0) == 0x15) {
        FUN_4a089430(*(undefined4 *)(param_1 + 0x6dc),3);
        *(undefined4 *)(param_1 + 0x290) = 6;
        FUN_4a0cd7c0(param_1,0xc8d);
        FUN_4a1161d0(param_1,9);
        FUN_4a0d58d0(*(undefined4 *)(param_1 + 0x24));
        return 1;
      }
      uVar4 = *(undefined4 *)(param_1 + 0x24);
      if ((*(char *)(param_1 + 0x1dc) == '\0') && (*(char *)(param_1 + 0x632) != '\0')) {
        if ((*(int *)(param_1 + 0x674) == 0) ||
           (iVar3 = FUN_4a146b58(*(int *)(param_1 + 0x674),0x2000), iVar3 == 0)) goto LAB_4a11b964;
        iVar3 = FUN_4a146a9c(*(undefined4 *)(param_1 + 0x674));
      }
      else {
        iVar3 = FUN_4a141268(uVar4);
        if (iVar3 == 0) goto LAB_4a11b964;
        iVar3 = FUN_4a13f8d0(uVar4);
      }
      if (iVar3 != -1) {
        FUN_4a113618(param_1,0);
        return 1;
      }
      goto LAB_4a11b964;
    }
  }
  iVar3 = FUN_4a0bbcf0(*(undefined4 *)puVar1,0x40);
  iVar14 = FUN_4a0bbcf0(*(undefined4 *)puVar1,0x104);
  iVar13 = FUN_4a0bbcf0(*(undefined4 *)puVar1,0xdc);
  uVar4 = *(undefined4 *)puVar1;
  local_3c = FUN_4a0bc200(uVar4);
  local_40 = FUN_4a0bc1f8(uVar4);
  if (local_40 <= local_3c) {
    piVar11 = &local_3c;
  }
  iVar10 = *piVar11;
  local_38 = FUN_4a13caa0(*(undefined4 *)(param_1 + 0x20));
  local_38 = local_38 - iVar3;
  if ((*(int *)(param_1 + 0x1c0) != 6) ||
     ((local_40 = iVar14, local_3c = iVar3, iVar12 = FUN_4a134a60(param_2,param_3,0,local_38),
      iVar12 == 0 &&
      (local_40 = iVar13, local_3c = iVar3,
      iVar3 = FUN_4a134a60(param_2,param_3,iVar10 - iVar13,local_38), iVar3 == 0)))) {
    uVar4 = FUN_4a0bbe00(*(undefined4 *)puVar1,0x32,2);
    if (*(int *)(param_1 + 0x1c0) == 6) {
      uVar15 = FUN_4a09f9c8(*(int *)(param_1 + 0x20) + 0x128,0x172);
      FUN_4a17295c(uVar15,1);
      iVar3 = FUN_4a171e1c();
      local_40 = FUN_4a146da8(param_1);
      local_3c = iVar3;
      iVar3 = FUN_4a134a60(param_2,local_2c,0,uVar4);
      if (iVar3 != 0) {
        iVar14 = 0;
        iVar3 = 0;
        do {
          iVar13 = FUN_4a141a80(*(undefined4 *)(param_1 + 0x24),iVar3);
          if (iVar13 != -1) {
            iVar14 = iVar14 + 1;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 6);
        if (0 < iVar14) {
          cVar2 = '\x01' - *(byte *)(param_1 + 0x21c);
          if (1 < *(byte *)(param_1 + 0x21c)) {
            cVar2 = '\0';
          }
          *(char *)(param_1 + 0x21c) = cVar2;
          return 1;
        }
      }
    }
    iVar3 = FUN_4a0bbcf0(*(undefined4 *)puVar1,0x96);
    iVar14 = FUN_4a0bbcf0(*(undefined4 *)puVar1,0x32);
    if (*(int *)(param_1 + 0x1c0) == 6 || *(int *)(param_1 + 0x1c0) == 0x15) {
      iVar13 = FUN_4a13ca78(*(undefined4 *)(param_1 + 0x20));
      local_40 = iVar3;
      local_3c = iVar14;
      iVar3 = FUN_4a134a60(param_2,param_3,(iVar13 >> 1) - (iVar3 >> 1),0);
      if (iVar3 != 0) {
        uVar9 = FUN_4a146cd0(*(undefined4 *)(param_1 + 0x5f8));
        bVar16 = uVar9 == 0;
        if (bVar16) {
          uVar9 = (uint)*(byte *)(param_1 + 0x632);
        }
        if ((bVar16 && uVar9 == 0) && (*(int *)(param_1 + 0x5f8) != *(int *)(param_1 + 0x2f4))) {
          *(int *)(param_1 + 0x2f4) = *(int *)(param_1 + 0x5f8);
          iVar3 = *(int *)(param_1 + 0x28);
          *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(iVar3 + 0x470);
          *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(iVar3 + 0x474);
          *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(iVar3 + 0x478);
          *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(iVar3 + 0x48c);
          *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(iVar3 + 0x484);
          *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(iVar3 + 0x488);
          FUN_4a11e2a0(param_1,3);
          return 1;
        }
      }
    }
    return 0;
  }
  FUN_4a0cf554(param_1,0x15);
  FUN_4a0cca64(param_1,local_30,local_34);
  if (local_28 < iVar10 - iVar13) {
    if (iVar14 < local_28) {
      return 1;
    }
    FUN_4a113618(param_1,4);
    return 1;
  }
LAB_4a11b964:
  FUN_4a113618(param_1,3);
  return 1;
}



// Address: 4a11bc14

void FUN_4a11bc14(int param_1,undefined4 param_2)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  
  iVar1 = FUN_4a0fe640(*(undefined4 *)(param_1 + 0x20),0,3);
  FUN_4a0b74b0(param_2,0xbc2);
  uVar2 = FUN_4a16588c();
  FUN_4a0b74b0(param_2,0xbc3);
  uVar3 = FUN_4a16588c();
  FUN_4a0b74b0(param_2,0xbc4);
  uVar4 = FUN_4a16588c();
  FUN_4a0b74b0(param_2,0xbc5);
  uVar5 = FUN_4a16588c();
  FUN_4a0b74b0(param_2,0xbcc);
  uVar6 = FUN_4a16588c();
  FUN_4a0b74b0(param_2,0xbcd);
  uVar7 = FUN_4a16588c();
  FUN_4a0b74b0(param_2,0xbce);
  uVar8 = FUN_4a16588c();
  FUN_4a0b74b0(param_2,0xbcf);
  uVar9 = FUN_4a16588c();
  FUN_4a0b74b0(param_2,0xbd6);
  uVar10 = FUN_4a16588c();
  FUN_4a0b74b0(param_2,0xbd7);
  uVar11 = FUN_4a16588c();
  FUN_4a0b74b0(param_2,0xbd8);
  uVar12 = FUN_4a16588c();
  FUN_4a0b74b0(param_2,0xbd9);
  uVar13 = FUN_4a16588c();
  FUN_4a0b4608(uVar2,0);
  FUN_4a0b4608(uVar3,0);
  FUN_4a0b4608(uVar4,0);
  FUN_4a0b4608(uVar5,0);
  FUN_4a0b4608(uVar6,0);
  FUN_4a0b4608(uVar7,0);
  FUN_4a0b4608(uVar8,0);
  FUN_4a0b4608(uVar9,0);
  FUN_4a0b4608(uVar10,0);
  FUN_4a0b4608(uVar11,0);
  FUN_4a0b4608(uVar12,0);
  FUN_4a0b4608(uVar13,0);
  if (iVar1 == 0) {
    unaff_r6 = 0xbd6;
    unaff_r4 = 0xbc2;
    unaff_r5 = 0xbcc;
  }
  else if (iVar1 == 1) {
    unaff_r5 = 0xbcd;
    unaff_r6 = 0xbd7;
    unaff_r4 = 0xbc3;
  }
  else if (iVar1 == 2) {
    unaff_r5 = 0xbce;
    unaff_r6 = 0xbd8;
    unaff_r4 = 0xbc4;
  }
  else if (iVar1 == 3) {
    unaff_r5 = 0xbcf;
    unaff_r6 = 0xbd9;
    unaff_r4 = 0xbc5;
  }
  FUN_4a0b74b0(param_2,unaff_r4);
  uVar2 = FUN_4a16588c();
  FUN_4a0b74b0(param_2,unaff_r5);
  uVar3 = FUN_4a16588c();
  FUN_4a0b74b0(param_2,unaff_r6);
  iVar1 = FUN_4a16588c();
  FUN_4a0b4608(uVar2,1);
  FUN_4a0b4608(uVar3,1);
  *(undefined1 *)(iVar1 + 0xd0) = 1;
  return;
}



// Address: 4a11be8c

/* WARNING: Removing unreachable block (ram,0x4a116204) */

undefined4 * FUN_4a11be8c(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
code_r0x4a11be8c:
  param_1[0x1f7] = param_2;
  param_1[0x71] = 0;
  switch(param_2) {
  default:
    return param_1;
  case 1:
    iVar1 = param_1[0x17e];
    param_1[0xad] = iVar1;
    param_1[0xbd] = iVar1;
    if (iVar1 == 0) {
      if (param_1[0xaf] == 8) {
        return param_1;
      }
      iVar1 = 0;
    }
    else {
      iVar1 = param_1[10];
      param_1[0xb7] = *(undefined4 *)(iVar1 + 0x470);
      param_1[0xb8] = *(undefined4 *)(iVar1 + 0x474);
      param_1[0xb9] = *(undefined4 *)(iVar1 + 0x478);
      param_1[0xbc] = *(undefined4 *)(iVar1 + 0x48c);
      param_1[0xba] = *(undefined4 *)(iVar1 + 0x484);
      param_1[0xbb] = *(undefined4 *)(iVar1 + 0x488);
      iVar1 = 2;
    }
    iVar8 = param_1[0xaf];
    param_1[0xaf] = iVar1;
    switch(iVar1) {
    case 0:
      *(undefined1 *)(param_1 + 0xb6) = 1;
      param_1[0xbe] = 0;
      param_1[0xbf] = 0;
      param_1[0xc1] = 0;
      param_1[0xc0] = 0;
      param_1[0xc2] = 0;
      param_1[0xc3] = 0;
    }
    if (iVar8 == 0) {
      if (iVar1 != 0) {
        FUN_4a084b60(param_1 + 0xc6,*(undefined4 *)(param_1[10] + 0x470));
        FUN_4a084b60(param_1 + 0xe3,*(undefined4 *)(param_1[10] + 0x474));
        FUN_4a084b60(param_1 + 0x100,*(undefined4 *)(param_1[10] + 0x478));
        FUN_4a084b60(param_1 + 0x11d,*(undefined4 *)(param_1[10] + 0x48c));
        FUN_4a084b60(param_1 + 0x13a,*(undefined4 *)(param_1[10] + 0x484));
        uVar4 = *(undefined4 *)(param_1[10] + 0x488);
        iVar1 = 0;
        if (0 < (int)param_1[0x16c]) {
          do {
            if (param_1[0x165] == 0) {
              iVar8 = 0;
            }
            else {
              iVar8 = *(int *)(param_1[0x165] + 8);
            }
            *(undefined4 *)(iVar8 + iVar1 * 4) = uVar4;
            iVar1 = iVar1 + 1;
          } while (iVar1 < (int)param_1[0x16c]);
        }
        if (0 < (int)param_1[0x16d]) {
          iVar1 = 0;
          do {
            if (param_1[0x16a] == 0) {
              iVar8 = 0;
            }
            else {
              iVar8 = *(int *)(param_1[0x16a] + 8);
            }
            *(undefined4 *)(iVar8 + iVar1 * 4) = uVar4;
            iVar1 = iVar1 + 1;
          } while (iVar1 < (int)param_1[0x16d]);
        }
        param_1[0x173] = uVar4;
        param_1[0x171] = uVar4;
        param_1[0x170] = uVar4;
        return param_1 + 0x157;
      }
      return (undefined4 *)0x0;
    }
    return (undefined4 *)0x0;
  case 3:
    uVar5 = param_1[0x1f9];
    iVar8 = *(int *)(param_1[8] + 0x260);
    iVar1 = FUN_4a085614(iVar8);
    if (iVar1 != 0) {
      FUN_4a0866c0(iVar8,uVar5);
    }
    if (*(int *)(iVar8 + 0x74) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(iVar8 + 0x74) + 8);
    }
    iVar1 = iVar1 + uVar5 * 0x14;
    iVar9 = *(int *)(iVar1 + 8);
    iVar8 = 0;
    if (0 < iVar9) {
      iVar1 = *(int *)(iVar1 + 0xc);
      do {
        if (iVar1 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(iVar1 + 8);
        }
        piVar7 = *(int **)(iVar6 + iVar8 * 4);
        if (piVar7[1] != 400) {
          (**(code **)(*piVar7 + 0x28))(piVar7);
          (**(code **)(*piVar7 + 0x30))(piVar7,0);
          (**(code **)(*piVar7 + 0x3c))(piVar7);
          return (undefined4 *)(uVar5 | iVar8 << 0x10);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar9);
    }
    return (undefined4 *)0xffffffff;
  case 5:
    break;
  }
  uVar4 = 0x7fc00;
  if (param_1[0x76] == 2) {
    uVar4 = 0x77c00;
  }
  FUN_4a0fcc1c(param_1[8],uVar4,0xffffffff);
  iVar1 = param_1[0x1f8];
  if (iVar1 == 0) {
    iVar1 = param_1[8];
    puVar3 = (undefined4 *)(iVar1 + 0x460);
    *puVar3 = 1;
    *(undefined4 *)(iVar1 + 0x464) = 0xffffffff;
    return puVar3;
  }
  if (iVar1 != 2) {
    if (iVar1 == 3) {
      param_1[0x1f1] = 0x1e;
      iVar1 = FUN_4a0d7508(param_1[9]);
      if (iVar1 != 0) {
        uVar4 = thunk_FUN_4a161570(0x14);
        uVar4 = FUN_4a0c707c(uVar4,PTR_s_woohoo_4a10d338);
        uVar2 = FUN_4a0941ec();
        FUN_4a094d04(uVar2,uVar4);
        param_1[0xa4] = 7;
        FUN_4a0cd7c0(param_1,0xb65);
        FUN_4a1161d0(param_1,9);
        param_2 = 2;
        goto code_r0x4a11be8c;
      }
    }
    else if ((iVar1 == 5) && (iVar1 = FUN_4a142f18(param_1[10]), iVar1 != 0)) {
      FUN_4a0daefc(param_1[9],0x3e);
    }
  }
  param_1[0x70] = 6;
  param_1[0x71] = 0;
  *(undefined1 *)(param_1 + 0x77) = 1;
  host_s3eAccelerometerStop_arm();
                    /* WARNING: Could not recover jumptable at 0x4a116200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar3 = (undefined4 *)(*(code *)PTR_caseD_6_4a116220)();
  return puVar3;
}



// Address: 4a11bed4

/* WARNING: Removing unreachable block (ram,0x4a0faea0) */
/* WARNING: Removing unreachable block (ram,0x4a0fae9c) */
/* WARNING: Removing unreachable block (ram,0x4a116204) */
/* WARNING: Removing unreachable block (ram,0x4a0faebc) */
/* WARNING: Removing unreachable block (ram,0x4a0faf08) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a11bed4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 2000) = param_2;
  uVar4 = *(undefined4 *)(param_1 + 0x7c8);
  iVar2 = -1;
  bVar5 = false;
  switch(param_2) {
  case 0:
    iVar2 = FUN_4a1418cc(iVar6,uVar4);
    bVar5 = true;
    break;
  case 1:
    iVar2 = FUN_4a141918(iVar6,uVar4,*(undefined4 *)(param_1 + 0x7d4));
    break;
  case 2:
    iVar2 = FUN_4a140dec(iVar6,uVar4);
    break;
  case 3:
    iVar2 = FUN_4a140fa0(iVar6,uVar4);
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x1c0) = 6;
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    *(undefined1 *)(param_1 + 0x1dc) = 1;
    host_s3eAccelerometerStop_arm();
                    /* WARNING: Could not recover jumptable at 0x4a116200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_caseD_6_4a116220)();
    return;
  }
  if (iVar2 == -1) {
    return;
  }
  iVar3 = 0xb71;
  if (*(int *)(param_1 + 0x7cc) != -1) {
    iVar3 = 0;
    if (*(int *)(iVar6 + 0x420) != 0) {
      iVar3 = *(int *)(*(int *)(iVar6 + 0x420) + 8);
    }
    iVar3 = (int)*(short *)(iVar3 + *(int *)(param_1 + 0x7cc) * 2);
  }
  if (!bVar5) {
    iVar1 = *(int *)(param_1 + 0x168);
    iVar6 = FUN_4a0ff494();
    *(undefined4 *)(iVar1 + 0x78) = 1;
    *(undefined4 *)(iVar1 + 0x94) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x98) = 4;
    *(int *)(iVar1 + 0x90) = iVar3;
    *(undefined4 *)(iVar1 + 0x9c) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0xa0) = 0xffffffff;
    FUN_4a09f974(iVar6 + 0x128,0x60);
    uVar4 = FUN_4a171e1c();
    *(undefined4 *)(iVar1 + 0xa4) = uVar4;
    *(undefined4 *)(iVar1 + 0xa8) = 200;
    FUN_4a08a03c(iVar1,iVar2,0);
    *(undefined4 *)(iVar1 + 0x74) = 0;
    *(undefined4 *)(iVar1 + 0x7c) = 2;
    *(undefined4 *)(iVar1 + 0x80) = 0;
                    /* WARNING: Could not recover jumptable at 0x4a0faeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_caseD_2_4a0faec8)();
    return;
  }
  FUN_4a089eb4(*(undefined4 *)(param_1 + 0x168),iVar2,iVar3,0x40);
  return;
}



// Address: 4a11bfb4

void FUN_4a11bfb4(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 0x7d8) = 1;
  *(undefined4 *)(param_1 + 0x7cc) = param_3;
  *(undefined4 *)(param_1 + 0x7c8) = param_2;
  return;
}



// Address: 4a11bfc8

/* WARNING: Removing unreachable block (ram,0x4a115dac) */
/* WARNING: Removing unreachable block (ram,0x4a11e2dc) */
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

void FUN_4a11bfc8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined1 in_CY;
  
  FUN_4a084bdc(param_1 + 0x318,*(undefined4 *)(param_1 + 0x2c0));
  FUN_4a084bdc(param_1 + 0x38c,*(undefined4 *)(param_1 + 0x2c4));
  FUN_4a084bdc(param_1 + 0x400,*(undefined4 *)(param_1 + 0x2c8));
  iVar1 = param_1 + 0x474;
  FUN_4a084bdc(iVar1,*(undefined4 *)(param_1 + 0x2d4));
  iVar2 = param_1 + 0x4e8;
  FUN_4a084bdc(iVar2,*(undefined4 *)(param_1 + 0x2cc));
  iVar3 = param_1 + 0x55c;
  FUN_4a084bdc(iVar3,*(undefined4 *)(param_1 + 0x2d0));
  FUN_4a084dd8(param_1 + 0x318,param_2);
  FUN_4a084dd8(param_1 + 0x38c,param_2);
  FUN_4a084dd8(param_1 + 0x400,param_2);
  FUN_4a084dd8(iVar1,param_2);
  FUN_4a084dd8(iVar2,param_2);
  FUN_4a084dd8(iVar3,param_2);
  iVar11 = *(int *)(param_1 + 0x28);
  uVar4 = FUN_4a084be4(param_1 + 0x318);
  *(undefined4 *)(iVar11 + 0x470) = uVar4;
  iVar11 = *(int *)(param_1 + 0x28);
  uVar4 = FUN_4a084be4(param_1 + 0x38c);
  *(undefined4 *)(iVar11 + 0x474) = uVar4;
  iVar11 = *(int *)(param_1 + 0x28);
  uVar4 = FUN_4a084be4(param_1 + 0x400);
  *(undefined4 *)(iVar11 + 0x478) = uVar4;
  iVar11 = *(int *)(param_1 + 0x28);
  uVar4 = FUN_4a084be4(iVar1);
  *(undefined4 *)(iVar11 + 0x48c) = uVar4;
  iVar11 = *(int *)(param_1 + 0x28);
  uVar4 = FUN_4a084be4(iVar2);
  *(undefined4 *)(iVar11 + 0x484) = uVar4;
  iVar11 = *(int *)(param_1 + 0x28);
  uVar4 = FUN_4a084be4(iVar3);
  *(undefined4 *)(iVar11 + 0x488) = uVar4;
  uVar12 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x470);
  uVar4 = FUN_4a084b58(param_1 + 0x318);
  uVar5 = FUN_4a1725c0(uVar4,uVar12);
  FUN_4a1720a0(uVar5 ^ 0x80000000,uVar5);
  if ((bool)in_CY) {
    uVar5 = uVar5 ^ 0x80000000;
  }
  uVar12 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x474);
  uVar4 = FUN_4a084b58(param_1 + 0x38c);
  uVar6 = FUN_4a1725c0(uVar4,uVar12);
  FUN_4a1720a0(uVar6 ^ 0x80000000,uVar6);
  if ((bool)in_CY) {
    uVar6 = uVar6 ^ 0x80000000;
  }
  uVar12 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x478);
  uVar4 = FUN_4a084b58(param_1 + 0x400);
  uVar7 = FUN_4a1725c0(uVar4,uVar12);
  FUN_4a1720a0(uVar7 ^ 0x80000000,uVar7);
  if ((bool)in_CY) {
    uVar7 = uVar7 ^ 0x80000000;
  }
  uVar12 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x488);
  uVar4 = FUN_4a084b58(iVar3);
  uVar8 = FUN_4a1725c0(uVar4,uVar12);
  FUN_4a1720a0(uVar8 ^ 0x80000000,uVar8);
  if ((bool)in_CY) {
    uVar8 = uVar8 ^ 0x80000000;
  }
  uVar12 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x484);
  uVar4 = FUN_4a084b58(iVar2);
  uVar9 = FUN_4a1725c0(uVar4,uVar12);
  FUN_4a1720a0(uVar9 ^ 0x80000000,uVar9);
  if ((bool)in_CY) {
    uVar9 = uVar9 ^ 0x80000000;
  }
  uVar12 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x48c);
  uVar4 = FUN_4a084b58(iVar1);
  uVar10 = FUN_4a1725c0(uVar4,uVar12);
  FUN_4a1720a0(uVar10 ^ 0x80000000,uVar10);
  if ((bool)in_CY) {
    uVar10 = uVar10 ^ 0x80000000;
  }
  uVar4 = FUN_4a171a94(uVar5,uVar6);
  uVar4 = FUN_4a171a94(uVar4,uVar7);
  uVar4 = FUN_4a171a94(uVar4,uVar8);
  uVar4 = FUN_4a171a94(uVar4,uVar9);
  iVar1 = FUN_4a171a94(uVar4,uVar10);
  *(bool *)(param_1 + 0x2d8) = iVar1 < 0x3f800000;
  if (iVar1 >= 0x3f800000) {
    return;
  }
  iVar1 = *(int *)(param_1 + 700);
  if ((iVar1 == 3 || iVar1 == 9) || (*(char *)(param_1 + 0x314) != '\0')) {
    if (*(char *)(param_1 + 0x632) == '\0') {
      *(undefined4 *)(param_1 + 0x2b4) = 0;
      FUN_4a115d8c(param_1,0);
      *(undefined4 *)(param_1 + 0x2f4) = 0;
      FUN_4a11e2a0(param_1,0);
    }
    *(undefined1 *)(param_1 + 0x314) = 0;
    return;
  }
  if (iVar1 != 4) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2f4) = 0;
  if (*(int *)(param_1 + 700) == 8) {
    return;
  }
  iVar1 = *(int *)(param_1 + 700);
  *(undefined4 *)(param_1 + 700) = 0;
  switch((uint)switchD_4a11e2d8::switchdataD_4a11e2e0 & 0xfffffffe) {
  case 0x4a11e304:
    *(undefined1 *)(param_1 + 0x2d8) = 1;
    *(undefined4 *)(param_1 + 0x2f8) = 0;
    *(undefined4 *)(param_1 + 0x2fc) = 0;
    *(undefined4 *)(param_1 + 0x304) = 0;
    *(undefined4 *)(param_1 + 0x300) = 0;
    *(undefined4 *)(param_1 + 0x308) = 0;
    *(undefined4 *)(param_1 + 0x30c) = 0;
  }
  if (iVar1 == 0) {
    return;
  }
  return;
}



// Address: 4a11c2b4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a11c2b4(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int extraout_r1;
  undefined4 uVar7;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined1 auStack_5c [8];
  int iStack_54;
  int iStack_50;
  int iStack_48;
  int iStack_44;
  undefined1 auStack_40 [8];
  int iStack_38;
  int iStack_34;
  int local_2c;
  undefined4 local_28;
  
  local_28 = *(undefined4 *)(param_1 + 0x20);
  local_2c = *(int *)(param_1 + 0x24);
  iVar8 = 5000;
  *(int *)(param_1 + 0x748) = *(int *)(param_1 + 0x748) + param_2;
  iVar4 = FUN_4a13fb88(local_2c);
  if (iVar4 != 0) {
    iVar8 = 0x9c4;
  }
  if (*(int *)(param_1 + 0x748) <= iVar8) {
    return;
  }
  *(undefined4 *)(param_1 + 0x748) = 0;
  FUN_4a110aac(auStack_40,param_1);
  iStack_44 = 0x32;
  bVar1 = false;
  if (1 < iStack_38) {
    iStack_44 = 5;
  }
  iVar8 = 0;
  iStack_48 = *(int *)(local_2c + 0x410);
  do {
    iVar5 = FUN_4a0fe640(local_28,1,iStack_48 + -1);
    FUN_4a110aac(auStack_5c,param_1);
    iVar4 = iStack_54;
    iVar9 = 0;
    if (0 < iStack_54) {
      do {
        if (iStack_50 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(iStack_50 + 8);
        }
        iVar10 = *(int *)(iVar6 + iVar9 * 4);
        iVar6 = FUN_4a146a9c(iVar10);
        if (iVar6 == iVar5) {
          FUN_4a169a1c(auStack_5c);
          goto LAB_4a11c3c4;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar4);
    }
    FUN_4a169a1c(auStack_5c);
    iVar10 = 0;
LAB_4a11c3c4:
    uVar11 = FUN_4a0d6194(local_2c,iVar5);
    iVar4 = (int)(uVar11 >> 0x20);
    if (iVar10 == 0) {
      uVar12 = FUN_4a145a38(local_28);
      iVar4 = (int)((ulonglong)uVar12 >> 0x20);
      if (((int)uVar12 == 0xb7 || (uVar11 & 8) == 0) || ((uVar11 & 0x10) != 0)) goto LAB_4a11c538;
      bVar3 = false;
      iVar4 = *(int *)(param_1 + 0x1d8);
      if (*(int *)(param_1 + 0x1d8) == 2) {
LAB_4a11c44c:
        bVar2 = false;
      }
      else {
        FUN_4a110aac(auStack_5c,param_1);
        bVar3 = true;
        iVar4 = iStack_54;
        if (3 < iStack_54) goto LAB_4a11c44c;
        bVar2 = true;
      }
      if (bVar3) {
        FUN_4a169a1c(auStack_5c);
        iVar4 = extraout_r1_00;
      }
      if ((bVar2) && (!bVar1)) {
        bVar1 = true;
        iVar9 = FUN_4a0fb748(local_28);
        iVar4 = iStack_44;
        if (iVar9 < iStack_44) {
          FUN_4a10ca70(auStack_5c,param_1);
          iVar4 = FUN_4a0fe640(*(undefined4 *)(param_1 + 0x20),0,iStack_54 + -1);
          iVar9 = 0;
          if (0 < iStack_54) {
            do {
              FUN_4a0015f0(iVar4 + iVar9,iStack_54);
              if (iStack_50 == 0) {
                iVar6 = 0;
              }
              else {
                iVar6 = *(int *)(iStack_50 + 8);
              }
              iVar6 = *(int *)(iVar6 + extraout_r1_01 * 4);
              if (*(int *)(iVar6 + 0x28) == 4) {
                FUN_4a16a5f4(auStack_5c);
                goto LAB_4a11c50c;
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 < iStack_54);
          }
          FUN_4a16a5f4(auStack_5c);
          iVar6 = 0;
LAB_4a11c50c:
          switchD_4a11cc8c::default(iVar6 != 0,s_no_town_object__4a11c5a4);
          iVar10 = FUN_4a125d70(param_1,1,iVar6,iVar5);
          uVar7 = 0x40;
          goto LAB_4a11c534;
        }
      }
    }
    else {
      if ((uVar11 & 7) != 0) {
        FUN_4a071480(iVar10,2);
        iVar4 = extraout_r1;
      }
      if ((uVar11 & 0x10) != 0) {
        uVar7 = 0x200;
LAB_4a11c534:
        FUN_4a071480(iVar10,uVar7);
        iVar4 = extraout_r1_02;
      }
    }
LAB_4a11c538:
    iVar8 = iVar8 + 1;
    if (3 < iVar8) {
      iVar8 = 0;
      if (0 < iStack_38) {
        do {
          if (iStack_34 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(iStack_34 + 8);
          }
          uVar7 = *(undefined4 *)(iVar5 + iVar8 * 4);
          uVar12 = FUN_4a146a9c(uVar7,iVar4);
          iVar4 = (int)((ulonglong)uVar12 >> 0x20);
          if ((int)uVar12 != 0) {
            FUN_4a071480(uVar7);
            iVar4 = extraout_r1_03;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iStack_38);
      }
      FUN_4a169a1c(auStack_40);
      return;
    }
  } while( true );
}



// Address: 4a11c5b4

/* WARNING: Removing unreachable block (ram,0x4a116204) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a11c5b4(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar6;
  
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  iVar1 = FUN_4a1356f4(*(undefined4 *)(param_1 + 0x5f8));
  if (iVar1 != 0) {
    return;
  }
  iVar2 = FUN_4a13fa14(uVar5,0);
  bVar6 = SCARRY4(iVar2,1);
  iVar1 = iVar2 + 1;
  if (iVar2 != -1) {
    bVar6 = SBORROW4(param_2,param_3);
    iVar1 = param_2 - param_3;
  }
  if (iVar1 < 0 != bVar6) {
    do {
      uVar3 = FUN_4a0d619c(uVar5,0,param_2);
      uVar4 = FUN_4a0d619c(uVar5,0,param_2 + 1);
      if ((uVar3 & 2) != 0 && (uVar4 & 4) != 0) {
        FUN_4a0d7bc4(uVar5);
        if (*(int *)(param_1 + 0x2a0) == 0xaa7 || *(int *)(param_1 + 0x2a0) == 0xaa6) {
          *(undefined4 *)(param_1 + 0x2a0) = 0xffffffff;
        }
        iVar1 = FUN_4a13fa14(uVar5,0);
        *(undefined4 *)(param_1 + 0x290) = 2;
        if (iVar1 == -1) {
          FUN_4a0cd7c0(param_1,0xaab);
        }
        else {
          FUN_4a0cd7c0(param_1,0xaa9);
        }
        *(undefined4 *)(param_1 + 0x1c0) = 9;
        *(undefined4 *)(param_1 + 0x1c4) = 0;
        *(undefined1 *)(param_1 + 0x1dc) = 1;
        host_s3eAccelerometerStop_arm();
                    /* WARNING: Could not recover jumptable at 0x4a116200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR_caseD_0_4a11622c)();
        return;
      }
      param_2 = param_2 + 1;
    } while (param_2 < param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a11c5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a11cee8

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

void FUN_4a11cee8(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar8 = *(int *)(param_1 + 0x20);
  iVar9 = iVar8 + 0x128;
  FUN_4a10ce84(param_1,param_2);
  FUN_4a041910(1);
  FUN_4a0fe1e0(iVar8,param_2);
  puVar1 = PTR_DAT_4a11d250;
  FUN_4a0bbb28(*(undefined4 *)PTR_DAT_4a11d250);
  iVar2 = FUN_4a13ca78(iVar8);
  iVar2 = iVar2 + -0x1cc >> 1;
  iVar3 = FUN_4a13caa0(iVar8);
  iVar3 = iVar3 + -300 >> 1;
  uVar4 = FUN_4a171fac(iVar3);
  uVar5 = FUN_4a171fac(iVar2);
  FUN_4a09ff60(iVar9,0x141,0x142,0x143,0x144,0x145,0x146,0x147,0x148,0x149,uVar5,uVar4,0x43e60000,
               0x43960000,0x3f800000);
  uVar4 = FUN_4a0cb6c4(param_1,2);
  uVar5 = FUN_4a171fac(iVar3 + 0x20);
  uVar6 = FUN_4a171fac(iVar2 + 0x20);
  FUN_4a09f664(iVar9,0x14a,uVar6,uVar5,0x3f800000,0x3f800000,0x3f800000,0);
  FUN_4a0fa6e8(uVar4,iVar9,iVar2 + 0x20,iVar3 + 0x20,1);
  uVar4 = FUN_4a171fac(iVar3 + 0x28);
  uVar5 = FUN_4a171fac(iVar2 + 0xe6);
  FUN_4a0a02bc(iVar9,0x16a,0x16b,0x16c,uVar5,uVar4,0x43aa0000,0x3f800000,0x3f800000,0,0);
  uVar4 = FUN_4a171fac(iVar3 + 0x3a);
  uVar5 = FUN_4a171fac(iVar2 + 0x41);
  FUN_4a09ff60(iVar9,0x14b,0x14c,0x14d,0x14e,0x14f,0x150,0x151,0x152,0x153,uVar5,uVar4,0x43a50000,
               0x43570000,0x3f800000);
  uVar4 = FUN_4a0cf540(param_1,8);
  iVar7 = FUN_4a08cce0();
  if (iVar7 != 0) {
    uVar5 = FUN_4a171fac(iVar3 + 0xa5);
    uVar6 = FUN_4a171fac(iVar2 + 0x37);
    FUN_4a09f664(iVar9,0xb2,uVar6,uVar5,0x3f800000,0x3f800000,0x3f800000,0);
  }
  iVar7 = FUN_4a08c204(uVar4);
  if (iVar7 != 0) {
    uVar5 = FUN_4a171fac(iVar3 + 0xa5);
    uVar6 = FUN_4a171fac(iVar2 + 0x195);
    FUN_4a09f664(iVar9,0xb3,uVar6,uVar5,0x3f800000,0x3f800000,0x3f800000,0);
  }
  FUN_4a09f3a4(iVar9,param_2);
  FUN_4a0d22c4(uVar4,iVar2 + 0x4b,iVar3 + 0x44,0x136,0xc3,1);
  FUN_4a0d23c4(uVar4,param_2);
  if (*(int *)(param_1 + 0x69c) == 2) {
    iVar9 = *(int *)(*(int *)(param_1 + 0x28) + 0x68);
    iVar7 = 0;
    if (iVar9 != 0) {
      iVar7 = *(int *)(iVar9 + 8);
    }
    FUN_4a06b074(iVar8 + 0x278,param_2,(int)*(short *)(iVar7 + *(int *)(param_1 + 0x6d4) * 2),6,
                 iVar2 + 0xe6,iVar3 + 0x23,0x12);
  }
  FUN_4a0bbcb4(*(undefined4 *)puVar1);
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




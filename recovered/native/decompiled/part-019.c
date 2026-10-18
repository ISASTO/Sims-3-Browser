/* AUTOMATED DECOMPILER OUTPUT. Not original source, not a buildable game.
 * Function boundaries, types, indirect calls, and data still require validation. */

// Address: 4a108be8

/* WARNING: Removing unreachable block (ram,0x4a106f70) */
/* WARNING: Removing unreachable block (ram,0x4a106b98) */
/* WARNING: Removing unreachable block (ram,0x4a106b8c) */
/* WARNING: Removing unreachable block (ram,0x4a106b64) */
/* WARNING: Removing unreachable block (ram,0x4a106b30) */
/* WARNING: Removing unreachable block (ram,0x4a106b6c) */
/* WARNING: Removing unreachable block (ram,0x4a106f6c) */
/* WARNING: Removing unreachable block (ram,0x4a106f74) */
/* WARNING: Removing unreachable block (ram,0x4a06f994) */
/* WARNING: Removing unreachable block (ram,0x4a06f9a0) */
/* WARNING: Removing unreachable block (ram,0x4a06fa48) */
/* WARNING: Removing unreachable block (ram,0x4a06fa58) */
/* WARNING: Removing unreachable block (ram,0x4a06fa60) */
/* WARNING: Removing unreachable block (ram,0x4a06fa64) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff0 : 0x4a06fa34 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_4a108be8(int *param_1,int param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar18;
  undefined *apuStack_4c [2];
  int iStack_44;
  int iStack_40;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined *puStack_28;
  
  switchD_4a11cc8c::default(1,PTR_s_idle_state_for_trashcan_must_be_0_4a108d5c);
  iVar12 = param_1[0x14];
  if (iVar12 == 0) {
    iVar3 = 0x600000;
  }
  else if (iVar12 == 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = -0x600000;
    if (iVar12 != 2) {
      iVar3 = 0;
    }
  }
  if (iVar12 == 0) {
LAB_4a108c5c:
    iVar13 = 0;
  }
  else if (iVar12 == 1) {
    iVar13 = 0x600000;
  }
  else {
    iVar13 = 0;
    if ((iVar12 != 2) && (iVar13 = -0x600000, iVar12 != 3)) goto LAB_4a108c5c;
  }
  param_1[0xe] = param_1[0xe] & 0xffffff7f;
  if (param_2 == 0) {
LAB_4a108c9c:
    FUN_4a109ed4(param_1,0xfb);
    FUN_4a1061f0(param_1);
    if (param_1[0xf] != 1) {
                    /* WARNING: Could not recover jumptable at 0x4a108cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar12 = (*UNRECOVERED_JUMPTABLE)();
      return iVar12;
    }
    FUN_4a106a9c(param_1,0);
    FUN_4a105624(param_1,param_1[0x11] - iVar3,param_1[0x12],param_1[0x13] - iVar13);
  }
  else {
    if (param_2 != 1) {
      if (param_2 == 2) {
        uVar15 = param_1[0xe];
        piVar17 = (int *)0x0;
        param_1[0xe] = uVar15 & 0xffbfffff;
        iVar12 = param_1[0x28];
        if (iVar12 < 1) {
          iVar3 = 0;
        }
        else {
          if (param_1[0x29] != 0) {
            piVar17 = *(int **)(param_1[0x29] + 8);
          }
          iVar3 = *piVar17;
        }
        iVar13 = *(int *)(iVar3 + 0x34);
        uVar16 = *(uint *)(iVar13 + 0x24);
        bVar18 = (uVar16 & 1) != 0;
        iVar3 = 0;
        if (bVar18) {
          iVar12 = *(int *)(iVar13 + 8);
          iVar3 = *(int *)(iVar12 + 8);
        }
        if (bVar18 && 0xfc < iVar3) {
          *(undefined4 *)(iVar13 + 0xc) = 0xfc;
          iVar3 = 0;
          if (*(int *)(iVar12 + 0xc) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(*(int *)(iVar12 + 0xc) + 8);
          }
          if (*(int *)(iVar12 + 0x20) != 0) {
            iVar3 = *(int *)(*(int *)(iVar12 + 0x20) + 8);
          }
          iVar12 = *(int *)(iVar13 + 0x10) * (int)*(short *)(iVar5 + 0x1f8);
          iVar3 = (int)*(short *)(iVar3 + 0x1f8) * *(int *)(iVar13 + 0x10);
          *(int *)(iVar13 + 0x18) = iVar12;
          *(int *)(iVar13 + 0x1c) = iVar3;
          if ((uVar16 & 8) == 0) {
            *(int *)(iVar13 + 0x14) = iVar12;
          }
          else {
            *(int *)(iVar13 + 0x14) = iVar3;
          }
          uVar14 = 3;
          if ((uVar15 & 0x80) != 0) {
            uVar14 = 7;
          }
          *(uint *)(iVar13 + 0x24) = uVar14 | uVar16 & 8;
          piVar17 = *(int **)(iVar13 + 0x28);
          if (piVar17 != (int *)0x0) {
            uVar10 = *(undefined4 *)(iVar13 + 0x14);
            iVar3 = (**(code **)(*piVar17 + 0x30))(piVar17);
            iVar12 = 0;
            if (piVar17[2] != 0) {
              iVar12 = *(int *)(piVar17[2] + 0x10);
            }
            while (iVar12 = iVar12 + -1, -1 < iVar12) {
              iVar13 = *(int *)(*(int *)(piVar17[2] + 0x14) + iVar12 * 4);
              if ((*(uint *)(*(int *)(iVar13 + 0x2c) + 0x30) & 0x60000000) != 0) {
                uVar11 = FUN_4a1395b4(iVar13,uVar10);
                (**(code **)(*piVar17 + 0x1c))(piVar17,*(undefined4 *)(iVar13 + 0x30),uVar11);
              }
            }
            (**(code **)(*piVar17 + 0x24))(piVar17,uVar10);
            return iVar3;
          }
          return iVar13;
        }
        return iVar13;
      }
      switchD_4a11cc8c::default(0,PTR_s_invalid_state_for_trashcan_4a108d60);
      goto LAB_4a108c9c;
    }
    FUN_4a109ed4(param_1,0xfd);
    FUN_4a1061f0(param_1);
    FUN_4a106a9c(param_1,0);
    FUN_4a105624(param_1,param_1[0x11] + iVar3,param_1[0x12],param_1[0x13] + iVar13);
  }
  uStack_2c = *(undefined4 *)(param_1[9] + 0x520);
  iVar12 = FUN_4a143ac8(uStack_2c,param_1[10]);
  iVar12 = (int)*(char *)(iVar12 + 0x1e);
  iVar3 = FUN_4a143ac8(uStack_2c,param_1[10]);
  iStack_30 = (int)*(char *)(iVar3 + 0x1f);
  iVar13 = iStack_30;
  iVar3 = iVar12;
  if (param_1[0x14] == 1 || param_1[0x14] == 3) {
    iVar13 = iVar12;
    iVar3 = iStack_30;
  }
  *(char *)(param_1 + 0x15) = (char)iVar3;
  *(char *)((int)param_1 + 0x55) = (char)iVar13;
  piVar17 = (int *)0x0;
  if ((param_1[0xd] & 0x100010U) != 0) goto LAB_4a106dd0;
  if ((param_1[0xd] & 8U) == 0) {
    FUN_4a143ac8(*(undefined4 *)(param_1[9] + 0x520),param_1[10]);
  }
  iStack_34 = FUN_4a144cb0(uStack_2c,param_1[0x11]);
  iStack_38 = FUN_4a144cb8(uStack_2c,param_1[0x13]);
  FUN_4a0f10a8(uStack_2c,(iStack_34 - iVar3) + 1,(iStack_38 - iVar13) + 1,iVar3);
  piVar4 = (int *)FUN_4a0c6bc0(apuStack_4c);
  puStack_28 = PTR_PTR_4a106fc8;
  piVar4[2] = 0;
  piVar4[3] = 0;
  *piVar4 = (int)puStack_28;
  iVar5 = FUN_4a15e080(4);
  if (iVar5 == 0) {
    iVar5 = FUN_4a1669a8();
  }
  iVar6 = 0;
  do {
    *(undefined1 *)(iVar5 + iVar6) = 0;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  thunk_FUN_4a161570(0x18,4);
  puVar7 = (undefined4 *)FUN_4a0c0628();
  puVar2 = PTR_PTR_4a106fcc;
  *puVar7 = PTR_PTR_4a106fcc;
  puVar7[3] = 1;
  puVar7[4] = 4;
  puVar7[2] = iVar5;
  *(undefined1 *)(puVar7 + 5) = 1;
  if (puVar7 != (undefined4 *)0x0) {
    (**(code **)(puVar2 + 0xc))(puVar7);
  }
  (**(code **)(*piVar4 + 0x1c))(piVar4);
  piVar4[2] = 4;
  piVar4[3] = (int)puVar7;
  iVar5 = 0;
  FUN_4a143244(uStack_2c,iStack_34,iStack_38,iVar3);
  if (param_1[0x28] < 1) {
    iVar6 = 0;
  }
  else {
    if (param_1[0x29] == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = *(int **)(param_1[0x29] + 8);
    }
    iVar6 = *piVar4;
  }
  if (iVar6 != 0) {
    if (iStack_40 == 0) {
      puVar8 = (undefined1 *)0x0;
    }
    else {
      puVar8 = *(undefined1 **)(iStack_40 + 8);
    }
    FUN_4a0cb0f4(iVar6,0x7d1,*puVar8);
    if (iStack_40 == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(iStack_40 + 8);
    }
    FUN_4a0cb0f4(iVar6,0x7d2,*(undefined1 *)(iVar9 + 2));
    if (iStack_40 == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(iStack_40 + 8);
    }
    FUN_4a0cb0f4(iVar6,0x7d3,*(undefined1 *)(iVar9 + 1));
    if (iStack_40 != 0) {
      iVar5 = *(int *)(iStack_40 + 8);
    }
    FUN_4a0cb0f4(iVar6,0x7d4,*(undefined1 *)(iVar5 + 3));
  }
  apuStack_4c[0] = puStack_28;
  iVar5 = FUN_4a0bcc84(apuStack_4c);
  if (iVar5 != 0) {
    iVar6 = 0;
    if (0 < iStack_44) {
      do {
        iVar6 = iVar6 + 1;
      } while (iVar6 < iStack_44);
      if (iVar5 == 0) goto LAB_4a106dc8;
    }
    FUN_4a14f21c(iVar5);
  }
LAB_4a106dc8:
  FUN_4a0c6bf4(apuStack_4c);
LAB_4a106dd0:
  if ((param_1[0xd] & 0x200000U) != 0) {
    if (param_1[0x28] < 1) {
      iVar5 = 0;
    }
    else {
      if (param_1[0x29] != 0) {
        piVar17 = *(int **)(param_1[0x29] + 8);
      }
      iVar5 = *piVar17;
    }
    if (iVar5 != 0) {
      iStack_34 = *(int *)(param_1[9] + 0x520);
      iVar6 = FUN_4a143ac8(iStack_34,param_1[10]);
      iStack_38 = (int)*(char *)(iVar6 + 0x1e);
      FUN_4a143ac8(iStack_34,param_1[10]);
      uVar10 = FUN_4a144cb0(iStack_34,param_1[0x11]);
      uVar11 = FUN_4a144cb8(iStack_34,param_1[0x13]);
      iVar6 = FUN_4a143330(iStack_34,uVar10,uVar11,iStack_38);
      if (iVar6 == 0) {
        iVar6 = FUN_4a143ac8(*(undefined4 *)(param_1[9] + 0x520),param_1[10]);
        if ((*(char *)(iVar6 + 8) == '\x14') ||
           (iVar6 = FUN_4a143ac8(*(undefined4 *)(param_1[9] + 0x520),param_1[10]),
           *(char *)(iVar6 + 8) == '\x15')) {
          iVar6 = FUN_4a143ac8(*(undefined4 *)(param_1[9] + 0x520),param_1[10]);
          cVar1 = *(char *)(iVar6 + 8);
          uVar15 = param_1[0xe];
          if (cVar1 == '\x14' || cVar1 == '\x15') {
            uVar15 = uVar15 & 0xffdfffff;
            param_1[0xe] = uVar15;
          }
          if (((uVar15 & 0x40) != 0) && (cVar1 == '\x1a')) {
            FUN_4a1164e8(param_1[8]);
          }
          FUN_4a109fa8(param_1,0);
        }
        FUN_4a0ca3fc(iVar5,0x453);
      }
      else {
        iVar6 = FUN_4a143ac8(*(undefined4 *)(param_1[9] + 0x520),param_1[10]);
        if ((*(char *)(iVar6 + 8) == '\x14') ||
           (iVar6 = FUN_4a143ac8(*(undefined4 *)(param_1[9] + 0x520),param_1[10]),
           *(char *)(iVar6 + 8) == '\x15')) {
          if ((param_1[0xe] & 0x40U) == 0) {
            uVar10 = 0x44d;
          }
          else {
            uVar10 = 0x44c;
          }
          FUN_4a0ca3fc(iVar5,uVar10);
        }
        else {
          FUN_4a0ca3fc(iVar5,0x454);
        }
      }
    }
  }
  if (iVar12 < 2) {
    iVar12 = iStack_30;
  }
  if (1 < iVar12) {
    param_1[0x2b] = -((iVar3 + -1) * 0x200000 >> 1);
    param_1[0x2c] = -((iVar13 + -1) * 0x200000 >> 1);
  }
                    /* WARNING: Could not recover jumptable at 0x4a106fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar12 = (**(code **)(*param_1 + 0x28))(param_1);
  return iVar12;
}



// Address: 4a108d64

void FUN_4a108d64(int param_1)

{
  if ((*(uint *)(param_1 + 0x38) & 0x100) != 0) {
    FUN_4a106084(param_1);
  }
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x2000;
  return;
}



// Address: 4a108d90

/* WARNING: Removing unreachable block (ram,0x4a06f994) */
/* WARNING: Removing unreachable block (ram,0x4a06f9a0) */
/* WARNING: Removing unreachable block (ram,0x4a06fa48) */
/* WARNING: Removing unreachable block (ram,0x4a06fa58) */
/* WARNING: Removing unreachable block (ram,0x4a06fa60) */
/* WARNING: Removing unreachable block (ram,0x4a06fa64) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff0 : 0x4a06fa34 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_4a108d90(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 int param_6,undefined4 param_7)

{
  ushort uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  bool bVar18;
  undefined1 auStack_44 [20];
  undefined1 auStack_30 [8];
  undefined4 local_28;
  
  iVar16 = *(int *)(*(int *)(param_1 + 0x24) + 0x51c);
  local_28 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
  if ((param_2 == 0x1e || param_2 == 0x1f) || ((param_2 == 0xe || param_2 == 0xf && (param_4 == 0)))
     ) {
    param_4 = 0x9999;
  }
  *(undefined4 *)(param_1 + 0x2c) = param_7;
  *(int *)(param_1 + 0x28) = param_2;
  if (param_2 == 4) {
    param_4 = param_4 + 0x10000;
  }
  iVar4 = FUN_4a143ac8(local_28,param_2);
  cVar2 = *(char *)(iVar4 + 8);
  *(int *)(param_1 + 0x48) = param_4;
  *(undefined4 *)(param_1 + 0x4c) = param_5;
  *(undefined4 *)(param_1 + 0x44) = param_3;
  if (*(int *)(param_1 + 0x50) != param_6) {
    *(int *)(param_1 + 0x50) = param_6;
  }
  iVar4 = FUN_4a143ac8(local_28,param_2);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar4 + 0x14);
  *(undefined4 *)(param_1 + 0x38) = 0;
  iVar4 = FUN_4a143ac8(local_28,param_2);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar4 + 0xc);
  if (param_2 == 1) {
    iVar4 = *(int *)(iVar16 + 0x420);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar4 + 8);
    }
    *(int *)(param_1 + 0x30) = (int)*(short *)(iVar4 + *(int *)(param_1 + 0x2c) * 2);
  }
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x80;
  *(undefined4 *)(param_1 + 100) = 0;
  iVar4 = FUN_4a143ac8(local_28,param_2);
  iVar4 = (int)*(short *)(iVar4 + 0x20);
  if (param_2 == 0x20) {
    iVar5 = FUN_4a142ef4(local_28);
    if (iVar5 == 0) {
      iVar4 = 0x17;
    }
    else {
LAB_4a108ed0:
      if (iVar4 == -1) goto LAB_4a108f10;
    }
    if ((*(uint *)(param_1 + 0x34) & 0x2040) == 0) {
      uVar6 = FUN_4a107058(param_1,0);
      FUN_4a0ca898(uVar6,iVar4);
      if (iVar4 == 0x17) {
        *(int *)(param_1 + 0x48) = param_4 + 0x10000;
        *(undefined4 *)(param_1 + 0x4c) = param_5;
        *(undefined4 *)(param_1 + 0x44) = param_3;
      }
    }
  }
  else if ((param_2 != 0xb && param_2 != 2) && param_2 != 3) goto LAB_4a108ed0;
LAB_4a108f10:
  iVar4 = *(int *)(param_1 + 0x2c);
  if ((iVar4 == -1) || ((*(uint *)(param_1 + 0x34) & 0x2000) != 0)) {
    uVar7 = 0;
  }
  else {
    uVar14 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x51c);
    uVar6 = FUN_4a142ef4(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520));
    uVar7 = FUN_4a13fbb4(uVar14,uVar6,iVar4);
  }
  uVar15 = 0;
  if (param_2 == 0xc) {
LAB_4a108fd8:
    uVar15 = uVar7 & 0xffffff;
  }
  else if (cVar2 == '\x1e') {
    uVar15 = uVar7 & 0xffffff;
    if ((uVar15 != 0) && (iVar4 = FUN_4a142ef4(local_28), iVar4 != 0)) {
      iVar16 = FUN_4a13fb90(iVar16);
      iVar4 = *(int *)(param_1 + 0x2c);
      if (iVar4 == -1) {
        iVar4 = -1;
      }
      else {
        uVar14 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x51c);
        uVar6 = FUN_4a142ef4(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520));
        iVar4 = FUN_4a14053c(uVar14,uVar6,iVar4);
      }
      bVar18 = SCARRY4(iVar4,1);
      iVar5 = iVar4 + 1;
      bVar17 = iVar4 != -1;
      if (bVar17) {
        iVar4 = iVar16 - iVar4;
        bVar18 = SBORROW4(iVar4,0x5a0);
        iVar5 = iVar4 + -0x5a0;
      }
      if ((bVar17 && iVar4 != 0x5a0) && iVar5 < 0 == bVar18) {
        uVar15 = 0;
      }
    }
  }
  else {
    if (cVar2 == '\x17') goto LAB_4a108fd8;
    if (cVar2 == '\x14' || cVar2 == '\x15') {
      if ((~(uVar7 >> 0x1d) & 1) == 0) {
        uVar11 = *(uint *)(param_1 + 0x38) & 0xffdfffff;
      }
      else {
        uVar11 = *(uint *)(param_1 + 0x38) | 0x200000;
      }
      *(uint *)(param_1 + 0x38) = uVar11;
    }
  }
  FUN_4a1078e8(param_1,uVar15);
  if ((uVar7 & 0x1000000) != 0) {
    FUN_4a105a84(param_1);
  }
  uVar15 = *(uint *)(param_1 + 0x34);
  if (((uVar15 & 0x2000000) != 0) && (uVar15 = *(uint *)(param_1 + 0x38), (uVar15 & 0x300) == 0)) {
    uVar15 = (uint)(short)uVar7;
    *(short *)(param_1 + 0x58) = (short)uVar7;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    if (uVar15 == 0) {
      uVar15 = FUN_4a0fe640(*(undefined4 *)(param_1 + 0x24),0,100);
      *(short *)(param_1 + 0x58) = (short)uVar15;
    }
  }
  if (cVar2 == '\x13') {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x80;
    iVar16 = 0x10b;
FUN_4a109ed4:
    uVar7 = *(uint *)(param_1 + 0x38);
    piVar12 = (int *)0x0;
    *(uint *)(param_1 + 0x38) = uVar7 & 0xffbfffff;
    iVar4 = *(int *)(param_1 + 0xa0);
    if (iVar4 < 1) {
      iVar5 = 0;
    }
    else {
      if (*(int *)(param_1 + 0xa4) != 0) {
        piVar12 = *(int **)(*(int *)(param_1 + 0xa4) + 8);
      }
      iVar5 = *piVar12;
    }
    uVar15 = *(uint *)(iVar5 + 0x34);
    uVar11 = *(uint *)(uVar15 + 0x24);
    bVar18 = (uVar11 & 1) != 0;
    iVar5 = 0;
    if (bVar18) {
      iVar4 = *(int *)(uVar15 + 8);
      iVar5 = *(int *)(iVar4 + 8);
    }
    if (!bVar18 || iVar5 <= iVar16) {
      return uVar15;
    }
    *(int *)(uVar15 + 0xc) = (int)(short)iVar16;
    iVar5 = 0;
    if (*(int *)(iVar4 + 0xc) == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = *(int *)(*(int *)(iVar4 + 0xc) + 8);
    }
    if (*(int *)(iVar4 + 0x20) != 0) {
      iVar5 = *(int *)(*(int *)(iVar4 + 0x20) + 8);
    }
    iVar4 = *(int *)(uVar15 + 0x10) * (int)*(short *)(iVar10 + iVar16 * 2);
    iVar16 = (int)*(short *)(iVar5 + iVar16 * 2) * *(int *)(uVar15 + 0x10);
    *(int *)(uVar15 + 0x18) = iVar4;
    *(int *)(uVar15 + 0x1c) = iVar16;
    if ((uVar11 & 8) == 0) {
      *(int *)(uVar15 + 0x14) = iVar4;
    }
    else {
      *(int *)(uVar15 + 0x14) = iVar16;
    }
    uVar9 = 3;
    if ((uVar7 & 0x80) != 0) {
      uVar9 = 7;
    }
    *(uint *)(uVar15 + 0x24) = uVar9 | uVar11 & 8;
    piVar12 = *(int **)(uVar15 + 0x28);
    if (piVar12 == (int *)0x0) {
      return uVar15;
    }
    uVar6 = *(undefined4 *)(uVar15 + 0x14);
    uVar7 = (**(code **)(*piVar12 + 0x30))(piVar12);
    iVar16 = 0;
    if (piVar12[2] != 0) {
      iVar16 = *(int *)(piVar12[2] + 0x10);
    }
    while (iVar16 = iVar16 + -1, -1 < iVar16) {
      iVar4 = *(int *)(*(int *)(piVar12[2] + 0x14) + iVar16 * 4);
      if ((*(uint *)(*(int *)(iVar4 + 0x2c) + 0x30) & 0x60000000) != 0) {
        uVar14 = FUN_4a1395b4(iVar4,uVar6);
        (**(code **)(*piVar12 + 0x1c))(piVar12,*(undefined4 *)(iVar4 + 0x30),uVar14);
      }
    }
    (**(code **)(*piVar12 + 0x24))(piVar12,uVar6);
    return uVar7;
  }
  if (cVar2 == '\t') {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x80;
    iVar16 = 0x10d;
    goto FUN_4a109ed4;
  }
  if (cVar2 != '\x14' && cVar2 != '\x15') {
    return uVar15;
  }
  if ((*(uint *)(param_1 + 0x38) & 0x200000) == 0) {
    return *(uint *)(param_1 + 0x38);
  }
  uVar13 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
  uVar6 = FUN_4a144cb0(uVar13,*(undefined4 *)(param_1 + 0x44));
  uVar14 = FUN_4a144cb8(uVar13,*(undefined4 *)(param_1 + 0x4c));
  uVar6 = FUN_4a1458ac(uVar13,uVar6,uVar14);
  iVar16 = FUN_4a0f7058(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),uVar6);
  iVar4 = 0;
  if (iVar16 != 0) {
    iVar4 = FUN_4a0baa8c();
  }
  if (*(int *)(param_1 + 0xa0) < 1) {
    uVar6 = 0;
  }
  else {
    if (*(int *)(param_1 + 0xa4) == 0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8 = *(undefined4 **)(*(int *)(param_1 + 0xa4) + 8);
    }
    uVar6 = *puVar8;
  }
  iVar16 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                        *(undefined4 *)(param_1 + 0x28));
  cVar2 = *(char *)(iVar16 + 8);
  if (cVar2 == '\x15') {
LAB_4a10a00c:
    if (iVar4 == 0) {
      FUN_4a0ca3fc(uVar6,0x44d);
    }
    else {
      FUN_4a0ca3fc(uVar6,0x44c);
    }
    uVar13 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
    uVar6 = FUN_4a144cb0(uVar13,*(undefined4 *)(param_1 + 0x44));
    uVar14 = FUN_4a144cb8(uVar13,*(undefined4 *)(param_1 + 0x4c));
    uVar6 = FUN_4a1458ac(uVar13,uVar6,uVar14);
    iVar16 = FUN_4a0f7058(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),uVar6);
    if ((iVar16 == 0) || (cVar2 != '\x14')) goto LAB_4a10a05c;
    uVar7 = *(uint *)(param_1 + 0x38) & 0x40;
    if (iVar4 != 0) {
      if (uVar7 == 0) {
        FUN_4a0bb5a0();
      }
      goto LAB_4a10a064;
    }
    if (uVar7 != 0) {
      FUN_4a0b8f24();
    }
LAB_4a10a168:
    uVar7 = *(uint *)(param_1 + 0x38) & 0xffffffbf;
  }
  else {
    if (cVar2 < '\x16') {
      if (cVar2 == '\f') {
        if (iVar4 == 0) {
          uVar6 = 3;
        }
        else {
          uVar6 = 2;
        }
        FUN_4a1078e8(param_1,uVar6);
      }
      else if (cVar2 == '\x14') goto LAB_4a10a00c;
    }
    else {
      if (cVar2 == '\x1a') {
        uVar6 = 0xffffffff;
        if (iVar4 != 0) {
          if (*(int *)(param_1 + 0x28) == 0x71) {
            uVar6 = 9;
          }
          else if (*(int *)(param_1 + 0x28) == 0x72) {
            uVar6 = 10;
          }
          *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x80;
          FUN_4a1078a4(param_1,uVar6);
          FUN_4a107e58(param_1,0x10a);
          goto LAB_4a10a064;
        }
        FUN_4a1078a4(param_1,0xffffffff);
        goto LAB_4a10a168;
      }
      if (cVar2 == '\x1f') {
        if ((iVar4 != 0) && ((*(uint *)(param_1 + 0x38) & 0xc000) == 0)) {
          *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x8000;
        }
        FUN_4a1078e8(param_1,iVar4);
      }
    }
LAB_4a10a05c:
    if (iVar4 == 0) goto LAB_4a10a168;
LAB_4a10a064:
    uVar7 = *(uint *)(param_1 + 0x38) | 0x40;
  }
  *(uint *)(param_1 + 0x38) = uVar7;
  uVar7 = FUN_4a142ef4(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520));
  if (uVar7 != 0) {
    return uVar7;
  }
  iVar16 = (*(ushort *)(param_1 + 0x58) + 0xf) * 0x10000;
  *(short *)(param_1 + 0x58) = (short)((uint)iVar16 >> 0x10);
  if ((300 < iVar16 >> 0x10) &&
     (*(undefined2 *)(param_1 + 0x58) = 0, (*(uint *)(param_1 + 0x34) & 0x2000000) != 0)) {
    FUN_4a105a84(param_1);
  }
  if (*(int *)(param_1 + 0x2c) == -1) {
    return 0xffffffff;
  }
  iVar16 = *(int *)(*(int *)(param_1 + 0x24) + 0x51c);
  uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
  uVar7 = 0;
  if ((*(int *)(param_1 + 0x28) == 0x80 || *(int *)(param_1 + 0x28) == 0xc) ||
     (iVar4 = FUN_4a143ac8(uVar6), *(char *)(iVar4 + 8) == '\x17')) {
    uVar7 = *(uint *)(param_1 + 0x3c);
  }
  else {
    iVar4 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                         *(undefined4 *)(param_1 + 0x28));
    if (((*(char *)(iVar4 + 8) == '\x14') ||
        (iVar4 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                              *(undefined4 *)(param_1 + 0x28)), *(char *)(iVar4 + 8) == '\x15')) &&
       ((*(uint *)(param_1 + 0x38) & 0x200000) == 0)) {
      uVar7 = 0x20000000;
    }
  }
  uVar15 = *(uint *)(param_1 + 0x34);
  bVar18 = (uVar15 & 0x2000000) != 0;
  if (bVar18) {
    uVar15 = *(uint *)(param_1 + 0x38);
  }
  if (bVar18 && (uVar15 & 0x100) != 0) {
    uVar7 = uVar7 | 0x1000000;
  }
  iVar4 = FUN_4a142ef4(uVar6);
  if ((iVar4 == 0) && ((*(uint *)(param_1 + 0x34) & 0x2000000) != 0)) {
    uVar7 = uVar7 | (int)*(short *)(param_1 + 0x58);
  }
  uVar15 = *(uint *)(param_1 + 0x38);
  iVar4 = *(int *)(param_1 + 0x2c);
  if ((uVar15 & 0x8000) != 0) {
    uVar7 = uVar7 | 0x8000000;
  }
  if ((uVar15 & 0x4000) != 0) {
    uVar7 = uVar7 | 0x4000000;
  }
  if ((uVar15 & 0x10000) != 0) {
    uVar7 = uVar7 | 0x10000000;
  }
  sVar3 = FUN_4a142ef4(uVar6);
  switchD_4a11cc8c::default((iVar4 >> 0x1f) + 1,s_invalid_id_4a0d8628);
  iVar5 = iVar16 + 0x988;
  uVar1 = (ushort)iVar4 | sVar3 << 8;
  uVar6 = FUN_4a16c074(auStack_30,iVar5);
  iVar4 = FUN_4a16ff5c((int)(short)uVar1,uVar6,0);
  FUN_4a16c1a0(auStack_30);
  uVar15 = 0;
  if (uVar7 == 0) {
    if (iVar4 != -1) {
      uVar6 = FUN_4a16c074(auStack_44,iVar5);
      iVar4 = FUN_4a16ff5c((int)(short)uVar1,uVar6,0);
      uVar7 = FUN_4a16c1a0(auStack_44);
      if (iVar4 != -1) {
        uVar7 = uVar15;
        if (*(int *)(iVar16 + 0x994) != 0) {
          uVar7 = *(uint *)(*(int *)(iVar16 + 0x994) + 8);
        }
        *(undefined2 *)(uVar7 + iVar4 * 2) = 0xffff;
        uVar7 = uVar15;
        if (*(int *)(iVar16 + 0x9a8) != 0) {
          uVar7 = *(uint *)(*(int *)(iVar16 + 0x9a8) + 8);
        }
        *(undefined4 *)(uVar7 + iVar4 * 4) = 0;
        if (*(int *)(iVar16 + 0x9bc) != 0) {
          uVar15 = *(uint *)(*(int *)(iVar16 + 0x9bc) + 8);
        }
        *(undefined4 *)(uVar15 + iVar4 * 4) = 0;
        return uVar15;
      }
      return uVar7;
    }
  }
  else if (iVar4 != -1) goto LAB_4a0d85dc;
  uVar6 = FUN_4a16c074(auStack_44,iVar5);
  iVar4 = FUN_4a16ff5c(0xffffffff,uVar6,0);
  FUN_4a16c1a0(auStack_44);
  switchD_4a11cc8c::default(iVar4 != -1,s_no_room_in_persistant_object_dat_4a0d8634);
LAB_4a0d85dc:
  if (*(int *)(iVar16 + 0x994) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(iVar16 + 0x994) + 8);
  }
  *(ushort *)(iVar5 + iVar4 * 2) = uVar1;
  if (*(int *)(iVar16 + 0x9a8) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(iVar16 + 0x9a8) + 8);
  }
  *(uint *)(iVar5 + iVar4 * 4) = uVar7;
  uVar7 = *(uint *)(iVar16 + 0x9bc);
  if (uVar7 != 0) {
    uVar15 = *(uint *)(uVar7 + 8);
  }
  *(undefined4 *)(uVar15 + iVar4 * 4) = *(undefined4 *)(iVar16 + 0x78c);
  return uVar7;
}



// Address: 4a109130

void FUN_4a109130(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x44) = param_2;
  *(undefined4 *)(param_1 + 0x48) = param_3;
  *(undefined4 *)(param_1 + 0x4c) = param_4;
  return;
}



// Address: 4a10913c

/* WARNING: Removing unreachable block (ram,0x4a10a088) */
/* WARNING: Removing unreachable block (ram,0x4a10a108) */
/* WARNING: Removing unreachable block (ram,0x4a10a10c) */
/* WARNING: Removing unreachable block (ram,0x4a10a110) */
/* WARNING: Removing unreachable block (ram,0x4a10a074) */
/* WARNING: Removing unreachable block (ram,0x4a10a160) */
/* WARNING: Removing unreachable block (ram,0x4a10a168) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a10913c(int param_1)

{
  ushort uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  undefined1 auStack_44 [20];
  undefined1 auStack_30 [16];
  
  iVar5 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                       *(undefined4 *)(param_1 + 0x28));
  cVar2 = *(char *)(iVar5 + 8);
  uVar11 = *(uint *)(param_1 + 0x38);
  if (cVar2 == '\x14' || cVar2 == '\x15') {
    uVar11 = uVar11 & 0xffdfffff;
    *(uint *)(param_1 + 0x38) = uVar11;
  }
  if ((uVar11 & 0x40) == 0 && cVar2 == '\x1a') {
    FUN_4a1144f4(*(undefined4 *)(param_1 + 0x20));
  }
  if (*(int *)(param_1 + 0xa0) < 1) {
    uVar12 = 0;
  }
  else {
    if (*(int *)(param_1 + 0xa4) == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = *(undefined4 **)(*(int *)(param_1 + 0xa4) + 8);
    }
    uVar12 = *puVar6;
  }
  iVar5 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                       *(undefined4 *)(param_1 + 0x28));
  cVar2 = *(char *)(iVar5 + 8);
  if (cVar2 == '\x15') {
code_r0x4a10a014:
    FUN_4a0ca3fc(uVar12,0x44c);
    uVar13 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
    uVar12 = FUN_4a144cb0(uVar13,*(undefined4 *)(param_1 + 0x44));
    uVar7 = FUN_4a144cb8(uVar13,*(undefined4 *)(param_1 + 0x4c));
    uVar12 = FUN_4a1458ac(uVar13,uVar12,uVar7);
    iVar5 = FUN_4a0f7058(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),uVar12);
    if (((iVar5 != 0) && (cVar2 == '\x14')) && ((*(uint *)(param_1 + 0x38) & 0x40) == 0)) {
      FUN_4a0bb5a0();
    }
  }
  else if (cVar2 < '\x16') {
    if (cVar2 == '\f') {
      FUN_4a1078e8(param_1,2);
    }
    else if (cVar2 == '\x14') goto code_r0x4a10a014;
  }
  else if (cVar2 == '\x1a') {
    uVar12 = 0xffffffff;
    if (*(int *)(param_1 + 0x28) == 0x71) {
      uVar12 = 9;
    }
    else if (*(int *)(param_1 + 0x28) == 0x72) {
      uVar12 = 10;
    }
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x80;
    FUN_4a1078a4(param_1,uVar12);
    FUN_4a107e58(param_1,0x10a);
  }
  else if (cVar2 == '\x1f') {
    if ((*(uint *)(param_1 + 0x38) & 0xc000) == 0) {
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x8000;
    }
    FUN_4a1078e8(param_1,1);
  }
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x40;
  iVar5 = FUN_4a142ef4(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520));
  if (iVar5 != 0) {
    return;
  }
  iVar5 = (*(ushort *)(param_1 + 0x58) + 0xf) * 0x10000;
  *(short *)(param_1 + 0x58) = (short)((uint)iVar5 >> 0x10);
  if ((300 < iVar5 >> 0x10) &&
     (*(undefined2 *)(param_1 + 0x58) = 0, (*(uint *)(param_1 + 0x34) & 0x2000000) != 0)) {
    FUN_4a105a84(param_1);
  }
  if (*(int *)(param_1 + 0x2c) == -1) {
    return;
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x24) + 0x51c);
  uVar12 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
  uVar11 = 0;
  if ((*(int *)(param_1 + 0x28) == 0x80 || *(int *)(param_1 + 0x28) == 0xc) ||
     (iVar8 = FUN_4a143ac8(uVar12), *(char *)(iVar8 + 8) == '\x17')) {
    uVar11 = *(uint *)(param_1 + 0x3c);
  }
  else {
    iVar8 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                         *(undefined4 *)(param_1 + 0x28));
    if (((*(char *)(iVar8 + 8) == '\x14') ||
        (iVar8 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                              *(undefined4 *)(param_1 + 0x28)), *(char *)(iVar8 + 8) == '\x15')) &&
       ((*(uint *)(param_1 + 0x38) & 0x200000) == 0)) {
      uVar11 = 0x20000000;
    }
  }
  uVar9 = *(uint *)(param_1 + 0x34);
  bVar14 = (uVar9 & 0x2000000) != 0;
  if (bVar14) {
    uVar9 = *(uint *)(param_1 + 0x38);
  }
  if (bVar14 && (uVar9 & 0x100) != 0) {
    uVar11 = uVar11 | 0x1000000;
  }
  iVar8 = FUN_4a142ef4(uVar12);
  if ((iVar8 == 0) && ((*(uint *)(param_1 + 0x34) & 0x2000000) != 0)) {
    uVar11 = uVar11 | (int)*(short *)(param_1 + 0x58);
  }
  uVar9 = *(uint *)(param_1 + 0x38);
  iVar8 = *(int *)(param_1 + 0x2c);
  if ((uVar9 & 0x8000) != 0) {
    uVar11 = uVar11 | 0x8000000;
  }
  if ((uVar9 & 0x4000) != 0) {
    uVar11 = uVar11 | 0x4000000;
  }
  if ((uVar9 & 0x10000) != 0) {
    uVar11 = uVar11 | 0x10000000;
  }
  sVar3 = FUN_4a142ef4(uVar12);
  switchD_4a11cc8c::default((iVar8 >> 0x1f) + 1,s_invalid_id_4a0d8628);
  iVar10 = iVar5 + 0x988;
  uVar1 = (ushort)iVar8 | sVar3 << 8;
  uVar12 = FUN_4a16c074(auStack_30,iVar10);
  iVar4 = FUN_4a16ff5c((int)(short)uVar1,uVar12,0);
  FUN_4a16c1a0(auStack_30);
  iVar8 = 0;
  if (uVar11 == 0) {
    if (iVar4 != -1) {
      uVar12 = FUN_4a16c074(auStack_44,iVar10);
      iVar4 = FUN_4a16ff5c((int)(short)uVar1,uVar12,0);
      FUN_4a16c1a0(auStack_44);
      if (iVar4 != -1) {
        iVar10 = iVar8;
        if (*(int *)(iVar5 + 0x994) != 0) {
          iVar10 = *(int *)(*(int *)(iVar5 + 0x994) + 8);
        }
        *(undefined2 *)(iVar10 + iVar4 * 2) = 0xffff;
        iVar10 = iVar8;
        if (*(int *)(iVar5 + 0x9a8) != 0) {
          iVar10 = *(int *)(*(int *)(iVar5 + 0x9a8) + 8);
        }
        *(undefined4 *)(iVar10 + iVar4 * 4) = 0;
        if (*(int *)(iVar5 + 0x9bc) != 0) {
          iVar8 = *(int *)(*(int *)(iVar5 + 0x9bc) + 8);
        }
        *(undefined4 *)(iVar8 + iVar4 * 4) = 0;
        return;
      }
      return;
    }
  }
  else if (iVar4 != -1) goto LAB_4a0d85dc;
  uVar12 = FUN_4a16c074(auStack_44,iVar10);
  iVar4 = FUN_4a16ff5c(0xffffffff,uVar12,0);
  FUN_4a16c1a0(auStack_44);
  switchD_4a11cc8c::default(iVar4 != -1,s_no_room_in_persistant_object_dat_4a0d8634);
LAB_4a0d85dc:
  if (*(int *)(iVar5 + 0x994) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(*(int *)(iVar5 + 0x994) + 8);
  }
  *(ushort *)(iVar10 + iVar4 * 2) = uVar1;
  if (*(int *)(iVar5 + 0x9a8) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(*(int *)(iVar5 + 0x9a8) + 8);
  }
  *(uint *)(iVar10 + iVar4 * 4) = uVar11;
  if (*(int *)(iVar5 + 0x9bc) != 0) {
    iVar8 = *(int *)(*(int *)(iVar5 + 0x9bc) + 8);
  }
  *(undefined4 *)(iVar8 + iVar4 * 4) = *(undefined4 *)(iVar5 + 0x78c);
  return;
}



// Address: 4a10918c

void FUN_4a10918c(int param_1)

{
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffdfff;
  return;
}



// Address: 4a10919c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a10919c(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  bool bVar15;
  
  param_1[0x10] = param_1[0x10] + param_2;
  piVar11 = (int *)0x0;
  if (0 < param_1[0x28]) {
    iVar1 = param_1[0x29];
    puVar7 = (undefined4 *)0x0;
    if (iVar1 == 0) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = *(int **)(iVar1 + 8);
    }
    if (*piVar9 != 0) {
      if (iVar1 != 0) {
        puVar7 = *(undefined4 **)(iVar1 + 8);
      }
      FUN_4a0cb070(*puVar7);
    }
  }
  uVar2 = param_1[0xd];
  bVar15 = (uVar2 & 0x2000000) != 0;
  if (bVar15) {
    uVar2 = *(uint *)(param_1[8] + 0x1c0);
  }
  if (bVar15 && uVar2 != 0x15) {
    if ((param_1[0xe] & 0x300U) == 0) {
      iVar1 = param_1[0x17] + param_2;
      param_1[0x17] = iVar1;
      if (8000 < iVar1) {
        param_1[0x17] = iVar1 + -8000;
        iVar1 = FUN_4a142ef4(*(undefined4 *)(param_1[9] + 0x520));
        if (iVar1 == 0) {
          iVar1 = (*(ushort *)(param_1 + 0x16) + 1) * 0x10000;
          *(short *)(param_1 + 0x16) = (short)((uint)iVar1 >> 0x10);
          if ((300 < iVar1 >> 0x10) &&
             (*(undefined2 *)(param_1 + 0x16) = 0, (param_1[0xd] & 0x2000000U) != 0)) {
            FUN_4a105a84(param_1);
          }
          FUN_4a146240(param_1);
        }
      }
    }
    else {
      FUN_4a10577c(param_1,param_2);
    }
  }
  if ((param_1[0xe] & 1U) != 0) {
    param_2 = FUN_4a117814(param_1[8]);
  }
  iVar8 = param_1[10];
  iVar1 = FUN_4a143ac8(*(undefined4 *)(param_1[9] + 0x520));
  switch(*(undefined1 *)(iVar1 + 8)) {
  case 2:
    (**(code **)(*param_1 + 0x18))(param_1,param_2);
    piVar9 = (int *)0x0;
    if (param_1[0x28] < 1) {
      iVar1 = 0;
    }
    else {
      if (param_1[0x29] != 0) {
        piVar9 = *(int **)(param_1[0x29] + 8);
      }
      iVar1 = *piVar9;
    }
    if ((*(uint *)(*(int *)(iVar1 + 0x34) + 0x24) & 2) == 0) {
      FUN_4a109858(param_1);
    }
    break;
  case 3:
    (**(code **)(*param_1 + 0x18))(param_1,param_2);
    if (param_1[0xf] == 1) break;
    piVar9 = (int *)0x0;
    if (param_1[0x28] < 1) {
      iVar1 = 0;
    }
    else {
      if (param_1[0x29] != 0) {
        piVar9 = *(int **)(param_1[0x29] + 8);
      }
      iVar1 = *piVar9;
    }
    uVar2 = *(uint *)(*(int *)(iVar1 + 0x34) + 0x24);
    goto joined_r0x4a109750;
  case 4:
  case 9:
  case 0x13:
  case 0x19:
    goto switchD_4a1092c8_caseD_4;
  case 5:
    (**(code **)(*param_1 + 0x18))(param_1,param_2);
    piVar9 = (int *)0x0;
    if (param_1[0x28] < 1) {
      iVar1 = 0;
    }
    else {
      if (param_1[0x29] != 0) {
        piVar9 = *(int **)(param_1[0x29] + 8);
      }
      iVar1 = *piVar9;
    }
    if ((*(uint *)(*(int *)(iVar1 + 0x40) + 0x24) & 2) != 0) break;
    iVar1 = param_1[0xf];
    goto joined_r0x4a1095e4;
  default:
    FUN_4a10577c(param_1,param_2);
    break;
  case 0xb:
  case 0xc:
    break;
  case 0xf:
    if (param_1[0xf] == 2) {
      (**(code **)(*param_1 + 0x18))(param_1,param_2 * 3);
      piVar9 = (int *)0x0;
      if (param_1[0x28] < 1) {
        iVar1 = 0;
      }
      else {
        if (param_1[0x29] != 0) {
          piVar9 = *(int **)(param_1[0x29] + 8);
        }
        iVar1 = *piVar9;
      }
      uVar2 = *(uint *)(*(int *)(iVar1 + 0x34) + 0x24);
      goto joined_r0x4a109750;
    }
    if (param_1[0xf] != 3) break;
    (**(code **)(*param_1 + 0x18))(param_1,param_2 * 3);
    piVar9 = (int *)0x0;
    if (param_1[0x28] < 1) {
      iVar1 = 0;
    }
    else {
      if (param_1[0x29] != 0) {
        piVar9 = *(int **)(param_1[0x29] + 8);
      }
      iVar1 = *piVar9;
    }
    if ((*(uint *)(*(int *)(iVar1 + 0x34) + 0x24) & 2) != 0) break;
    goto LAB_4a1095f0;
  case 0x11:
    (**(code **)(*param_1 + 0x18))(param_1,param_2);
    piVar9 = (int *)0x0;
    if (param_1[0x28] < 1) {
      iVar1 = 0;
    }
    else {
      if (param_1[0x29] != 0) {
        piVar9 = *(int **)(param_1[0x29] + 8);
      }
      iVar1 = *piVar9;
    }
    if ((*(uint *)(*(int *)(iVar1 + 0x34) + 0x24) & 2) != 0) break;
    iVar1 = param_1[0xf];
    goto joined_r0x4a1095e4;
  case 0x16:
    (**(code **)(*param_1 + 0x18))(param_1,param_2);
    piVar9 = (int *)0x0;
    if (param_1[0x28] < 1) {
      iVar1 = 0;
    }
    else {
      if (param_1[0x29] != 0) {
        piVar9 = *(int **)(param_1[0x29] + 8);
      }
      iVar1 = *piVar9;
    }
    if ((*(uint *)(*(int *)(iVar1 + 0x34) + 0x24) & 2) != 0) break;
    iVar1 = param_1[0xf];
joined_r0x4a1095e4:
    if (iVar1 == 2) {
LAB_4a109754:
      FUN_4a1078e8(param_1,1);
    }
    else if (iVar1 == 3) {
LAB_4a1095f0:
      FUN_4a1078e8(param_1,0);
    }
    break;
  case 0x17:
    (**(code **)(*param_1 + 0x18))(param_1,param_2);
    if (param_1[0x24] == 0) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = *(int **)(param_1[0x24] + 8);
    }
    if (((*(uint *)(*piVar9 + 0xc) & 2) != 0) && (iVar1 = FUN_4a10577c(param_1,param_2), iVar1 != 0)
       ) {
      if (param_1[0x23] < 1) {
        iVar1 = 0;
      }
      else {
        if (param_1[0x24] == 0) {
          piVar9 = (int *)0x0;
        }
        else {
          piVar9 = *(int **)(param_1[0x24] + 8);
        }
        iVar1 = *piVar9;
      }
      if (0 < *(int *)(iVar1 + 4)) {
        FUN_4a1073fc(param_1,*(int *)(iVar1 + 4) + -1);
      }
    }
    iVar1 = 0;
    if (0 < param_1[0x1e]) {
      do {
        if (param_1[0x1f] == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = *(int *)(param_1[0x1f] + 8);
        }
        iVar13 = *(int *)(iVar13 + iVar1 * 4);
        if (iVar13 != 0) {
          FUN_4a06f7a4(*(undefined4 *)(iVar13 + 0x34),param_2);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_1[0x1e]);
    }
    break;
  case 0x1a:
    if ((param_1[0xe] & 0x40U) == 0) break;
    goto switchD_4a1092c8_caseD_4;
  case 0x1e:
    (**(code **)(*param_1 + 0x18))(param_1,param_2);
    if (param_1[0xf] != 2) break;
    piVar9 = (int *)0x0;
    if (param_1[0x28] < 1) {
      iVar1 = 0;
    }
    else {
      if (param_1[0x29] != 0) {
        piVar9 = *(int **)(param_1[0x29] + 8);
      }
      iVar1 = *piVar9;
    }
    uVar2 = *(uint *)(*(int *)(iVar1 + 0x34) + 0x24);
joined_r0x4a109750:
    if ((uVar2 & 2) != 0) break;
    goto LAB_4a109754;
  case 0x1f:
    if (param_1[0xf] == 1) {
      FUN_4a10577c(param_1,param_2);
      puVar7 = (undefined4 *)0x0;
      if (param_1[0x23] < 1) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        if (param_1[0x24] == 0) {
          piVar9 = (int *)0x0;
        }
        else {
          piVar9 = *(int **)(param_1[0x24] + 8);
        }
        puVar3 = (undefined4 *)*piVar9;
      }
      FUN_4a09a3b4(PTR_DAT_4a109854,*puVar3,puVar3[1],0);
      if (*(int *)(PTR_DAT_4a109854 + 0xc) != 0) {
        puVar7 = *(undefined4 **)(*(int *)(PTR_DAT_4a109854 + 0xc) + 8);
      }
      uVar2 = param_1[0xe];
      uVar5 = *puVar7;
      uVar4 = FUN_4a077b38();
      FUN_4a0779c0(uVar4,uVar5,(uVar2 & 0x8000) != 0);
    }
  }
switchD_4a1092c8_caseD_b:
  if (iVar8 == 10) {
    if (param_1[0x24] != 0) {
      piVar11 = *(int **)(param_1[0x24] + 8);
    }
    if ((*(uint *)(*piVar11 + 0xc) & 2) != 0) {
      return;
    }
  }
  else {
    if (iVar8 != 0xb) {
      return;
    }
    if (param_1[0x10] < 0x5dd) {
      return;
    }
  }
  if ((param_1[0xe] & 0x100U) != 0) {
    FUN_4a106084(param_1);
  }
  iVar1 = FUN_4a143ac8(*(undefined4 *)(param_1[9] + 0x520),param_1[10]);
  if ((*(char *)(iVar1 + 8) == '\x14') && ((param_1[0xe] & 0x40U) != 0)) {
    uVar10 = *(undefined4 *)(param_1[9] + 0x520);
    uVar4 = FUN_4a144cb0(uVar10,param_1[0x11]);
    uVar5 = FUN_4a144cb8(uVar10,param_1[0x13]);
    uVar4 = FUN_4a1458ac(uVar10,uVar4,uVar5);
    iVar1 = FUN_4a0f7058(*(undefined4 *)(param_1[9] + 0x520),uVar4);
    if (iVar1 != 0) {
      FUN_4a0b8f24();
    }
  }
  FUN_4a106848(param_1);
  iVar1 = param_1[8];
  if (*(int **)(iVar1 + 0x2b4) == param_1) {
    *(undefined4 *)(iVar1 + 0x2b4) = 0;
    FUN_4a115d8c(iVar1,0);
  }
  if ((*(char *)(iVar1 + 0x632) != '\0') && (*(int **)(iVar1 + 0x674) == param_1)) {
    *(undefined1 *)(iVar1 + 0x632) = 0;
    *(undefined1 *)(iVar1 + 0x633) = 0;
    *(undefined2 *)(iVar1 + 0x634) = 0xffff;
    *(undefined4 *)(iVar1 + 0x674) = 0;
    *(undefined4 *)(iVar1 + 0x2b4) = 0;
    FUN_4a115d8c(iVar1,0);
  }
  iVar13 = -1;
  iVar8 = FUN_4a146b58(param_1,0x2000);
  if (iVar8 != 0) {
    iVar13 = FUN_4a146a9c(param_1);
  }
  FUN_4a106a9c(param_1,0);
  iVar8 = *(int *)(iVar1 + 0x624);
  if ((*(int *)(iVar1 + 0x628) == iVar8) && (iVar6 = *(int *)(iVar1 + 0x620) + iVar8, iVar8 < iVar6)
     ) {
    *(int *)(iVar1 + 0x624) = iVar6;
    iVar12 = *(int *)(iVar1 + 0x62c);
    iVar8 = thunk_FUN_4a161570(iVar6 * 4);
    *(int *)(iVar1 + 0x62c) = iVar8;
    if (iVar8 != 0) {
      iVar8 = 0;
      if (0 < *(int *)(iVar1 + 0x628)) {
        do {
          iVar6 = iVar8 + 1;
          *(undefined4 *)(*(int *)(iVar1 + 0x62c) + iVar8 * 4) = *(undefined4 *)(iVar12 + iVar8 * 4)
          ;
          iVar8 = iVar6;
        } while (iVar6 < *(int *)(iVar1 + 0x628));
      }
      thunk_FUN_4a161530(iVar12);
    }
    iVar8 = *(int *)(iVar1 + 0x628);
    if (*(int *)(iVar1 + 0x628) < *(int *)(iVar1 + 0x624)) {
      do {
        iVar6 = iVar8 + 1;
        *(undefined4 *)(*(int *)(iVar1 + 0x62c) + iVar8 * 4) = 0;
        iVar8 = iVar6;
      } while (iVar6 < *(int *)(iVar1 + 0x624));
    }
  }
  iVar8 = *(int *)(iVar1 + 0x628);
  *(int *)(iVar1 + 0x628) = iVar8 + 1;
  piVar9 = *(int **)(*(int *)(iVar1 + 0x62c) + iVar8 * 4);
  piVar11 = param_1;
  if (param_1 != (int *)0x0) {
    piVar11 = (int *)(*(int *)(*param_1 + -0xc) + (int)param_1);
  }
  if (piVar11 != (int *)0x0) {
    (**(code **)(*piVar11 + 0xc))();
  }
  *(int **)(*(int *)(iVar1 + 0x62c) + iVar8 * 4) = param_1;
  if (piVar9 != (int *)0x0) {
    piVar9 = (int *)((int)piVar9 + *(int *)(*piVar9 + -0xc));
  }
  if ((piVar9 != (int *)0x0) && (iVar8 = (**(code **)(*piVar9 + 8))(piVar9), iVar8 != 0)) {
    (**(code **)(*piVar9 + 4))(piVar9);
  }
  iVar6 = *(int *)(iVar1 + 0x610);
  iVar8 = 0;
  if (0 < iVar6) {
    do {
      if (*(int **)(*(int *)(iVar1 + 0x614) + iVar8 * 4) == param_1) goto LAB_4a10f680;
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar6);
  }
  iVar8 = -1;
LAB_4a10f680:
  if (iVar8 != -1) {
    iVar8 = iVar8 + 1;
    if (iVar8 < iVar6) {
      do {
        piVar9 = *(int **)(*(int *)(iVar1 + 0x614) + iVar8 * 4);
        piVar14 = *(int **)(*(int *)(iVar1 + 0x614) + (iVar8 + -1) * 4);
        piVar11 = piVar9;
        if (piVar9 != (int *)0x0) {
          piVar11 = (int *)(*(int *)(*piVar9 + -0xc) + (int)piVar9);
        }
        if (piVar11 != (int *)0x0) {
          (**(code **)(*piVar11 + 0xc))();
        }
        *(int **)(*(int *)(iVar1 + 0x614) + (iVar8 + -1) * 4) = piVar9;
        if (piVar14 == (int *)0x0) {
          piVar14 = (int *)0x0;
        }
        else {
          piVar14 = (int *)(*(int *)(*piVar14 + -0xc) + (int)piVar14);
        }
        if ((piVar14 != (int *)0x0) && (iVar6 = (**(code **)(*piVar14 + 8))(piVar14), iVar6 != 0)) {
          (**(code **)(*piVar14 + 4))(piVar14);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(iVar1 + 0x610));
    }
    iVar8 = *(int *)(iVar1 + 0x610) + -1;
    piVar11 = *(int **)(*(int *)(iVar1 + 0x614) + iVar8 * 4);
    *(undefined4 *)(*(int *)(iVar1 + 0x614) + iVar8 * 4) = 0;
    if (piVar11 == (int *)0x0) {
      piVar11 = (int *)0x0;
    }
    else {
      piVar11 = (int *)(*(int *)(*piVar11 + -0xc) + (int)piVar11);
    }
    if ((piVar11 != (int *)0x0) && (iVar8 = (**(code **)(*piVar11 + 8))(piVar11), iVar8 != 0)) {
      (**(code **)(*piVar11 + 4))(piVar11);
    }
    *(int *)(iVar1 + 0x610) = *(int *)(iVar1 + 0x610) + -1;
  }
  *(undefined1 *)(iVar1 + 0x630) = 1;
  if (iVar13 != -1) {
    *(undefined1 *)(iVar1 + 0x631) = 1;
  }
  return;
switchD_4a1092c8_caseD_4:
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  goto switchD_4a1092c8_caseD_b;
}



// Address: 4a109858

void FUN_4a109858(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  
  if ((param_1[0xe] & 0x100U) != 0) {
    FUN_4a106084(param_1);
  }
  iVar1 = FUN_4a143ac8(*(undefined4 *)(param_1[9] + 0x520),param_1[10]);
  if ((*(char *)(iVar1 + 8) == '\x14') && ((param_1[0xe] & 0x40U) != 0)) {
    uVar7 = *(undefined4 *)(param_1[9] + 0x520);
    uVar2 = FUN_4a144cb0(uVar7,param_1[0x11]);
    uVar3 = FUN_4a144cb8(uVar7,param_1[0x13]);
    uVar2 = FUN_4a1458ac(uVar7,uVar2,uVar3);
    iVar1 = FUN_4a0f7058(*(undefined4 *)(param_1[9] + 0x520),uVar2);
    if (iVar1 != 0) {
      FUN_4a0b8f24();
    }
  }
  FUN_4a106848(param_1);
  iVar1 = param_1[8];
  if (*(int **)(iVar1 + 0x2b4) == param_1) {
    *(undefined4 *)(iVar1 + 0x2b4) = 0;
    FUN_4a115d8c(iVar1,0);
  }
  if ((*(char *)(iVar1 + 0x632) != '\0') && (*(int **)(iVar1 + 0x674) == param_1)) {
    *(undefined1 *)(iVar1 + 0x632) = 0;
    *(undefined1 *)(iVar1 + 0x633) = 0;
    *(undefined2 *)(iVar1 + 0x634) = 0xffff;
    *(undefined4 *)(iVar1 + 0x674) = 0;
    *(undefined4 *)(iVar1 + 0x2b4) = 0;
    FUN_4a115d8c(iVar1,0);
  }
  iVar10 = -1;
  iVar4 = FUN_4a146b58(param_1,0x2000);
  if (iVar4 != 0) {
    iVar10 = FUN_4a146a9c(param_1);
  }
  FUN_4a106a9c(param_1,0);
  iVar4 = *(int *)(iVar1 + 0x624);
  if ((*(int *)(iVar1 + 0x628) == iVar4) && (iVar5 = *(int *)(iVar1 + 0x620) + iVar4, iVar4 < iVar5)
     ) {
    *(int *)(iVar1 + 0x624) = iVar5;
    iVar8 = *(int *)(iVar1 + 0x62c);
    iVar4 = thunk_FUN_4a161570(iVar5 * 4);
    *(int *)(iVar1 + 0x62c) = iVar4;
    if (iVar4 != 0) {
      iVar4 = 0;
      if (0 < *(int *)(iVar1 + 0x628)) {
        do {
          iVar5 = iVar4 + 1;
          *(undefined4 *)(*(int *)(iVar1 + 0x62c) + iVar4 * 4) = *(undefined4 *)(iVar8 + iVar4 * 4);
          iVar4 = iVar5;
        } while (iVar5 < *(int *)(iVar1 + 0x628));
      }
      thunk_FUN_4a161530(iVar8);
    }
    iVar4 = *(int *)(iVar1 + 0x628);
    if (*(int *)(iVar1 + 0x628) < *(int *)(iVar1 + 0x624)) {
      do {
        iVar5 = iVar4 + 1;
        *(undefined4 *)(*(int *)(iVar1 + 0x62c) + iVar4 * 4) = 0;
        iVar4 = iVar5;
      } while (iVar5 < *(int *)(iVar1 + 0x624));
    }
  }
  iVar4 = *(int *)(iVar1 + 0x628);
  *(int *)(iVar1 + 0x628) = iVar4 + 1;
  piVar9 = *(int **)(*(int *)(iVar1 + 0x62c) + iVar4 * 4);
  piVar6 = param_1;
  if (param_1 != (int *)0x0) {
    piVar6 = (int *)(*(int *)(*param_1 + -0xc) + (int)param_1);
  }
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))();
  }
  *(int **)(*(int *)(iVar1 + 0x62c) + iVar4 * 4) = param_1;
  if (piVar9 != (int *)0x0) {
    piVar9 = (int *)((int)piVar9 + *(int *)(*piVar9 + -0xc));
  }
  if ((piVar9 != (int *)0x0) && (iVar4 = (**(code **)(*piVar9 + 8))(piVar9), iVar4 != 0)) {
    (**(code **)(*piVar9 + 4))(piVar9);
  }
  iVar5 = *(int *)(iVar1 + 0x610);
  iVar4 = 0;
  if (0 < iVar5) {
    do {
      if (*(int **)(*(int *)(iVar1 + 0x614) + iVar4 * 4) == param_1) goto LAB_4a10f680;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar5);
  }
  iVar4 = -1;
LAB_4a10f680:
  if (iVar4 != -1) {
    iVar4 = iVar4 + 1;
    if (iVar4 < iVar5) {
      do {
        piVar9 = *(int **)(*(int *)(iVar1 + 0x614) + iVar4 * 4);
        piVar11 = *(int **)(*(int *)(iVar1 + 0x614) + (iVar4 + -1) * 4);
        piVar6 = piVar9;
        if (piVar9 != (int *)0x0) {
          piVar6 = (int *)(*(int *)(*piVar9 + -0xc) + (int)piVar9);
        }
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 0xc))();
        }
        *(int **)(*(int *)(iVar1 + 0x614) + (iVar4 + -1) * 4) = piVar9;
        if (piVar11 == (int *)0x0) {
          piVar11 = (int *)0x0;
        }
        else {
          piVar11 = (int *)(*(int *)(*piVar11 + -0xc) + (int)piVar11);
        }
        if ((piVar11 != (int *)0x0) && (iVar5 = (**(code **)(*piVar11 + 8))(piVar11), iVar5 != 0)) {
          (**(code **)(*piVar11 + 4))(piVar11);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(iVar1 + 0x610));
    }
    iVar4 = *(int *)(iVar1 + 0x610) + -1;
    piVar6 = *(int **)(*(int *)(iVar1 + 0x614) + iVar4 * 4);
    *(undefined4 *)(*(int *)(iVar1 + 0x614) + iVar4 * 4) = 0;
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)(*(int *)(*piVar6 + -0xc) + (int)piVar6);
    }
    if ((piVar6 != (int *)0x0) && (iVar4 = (**(code **)(*piVar6 + 8))(piVar6), iVar4 != 0)) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    *(int *)(iVar1 + 0x610) = *(int *)(iVar1 + 0x610) + -1;
  }
  *(undefined1 *)(iVar1 + 0x630) = 1;
  if (iVar10 != -1) {
    *(undefined1 *)(iVar1 + 0x631) = 1;
  }
  return;
}



// Address: 4a1098fc

void FUN_4a1098fc(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  if ((*(uint *)(param_1 + 0x38) & 0x80) == 0) {
    uVar4 = 0x10;
  }
  else {
    uVar4 = 0x14;
  }
  puVar5 = (undefined4 *)0x0;
  if (*(int *)(param_1 + 0x8c) < 1) {
    puVar3 = (uint *)0x0;
  }
  else {
    if (*(int *)(param_1 + 0x90) != 0) {
      puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x90) + 8);
    }
    puVar3 = (uint *)*puVar5;
  }
  uVar1 = uVar4 >> 4;
  bVar6 = uVar1 == 0;
  if (bVar6) {
    uVar1 = *puVar3;
  }
  if (bVar6 && uVar1 == param_2) {
    iVar2 = FUN_4a099c5c();
    if ((int)puVar3[1] < iVar2) {
      if ((int)puVar3[1] < 0) {
        iVar2 = FUN_4a099c5c(*puVar3);
        puVar3[1] = iVar2 - 1;
      }
    }
    else {
      puVar3[1] = 0;
    }
  }
  else {
    *puVar3 = param_2;
    if ((puVar3[3] & 8) == 0) {
      puVar3[1] = 0;
    }
    else {
      iVar2 = FUN_4a099c5c(param_2);
      puVar3[1] = iVar2 - 1;
    }
    puVar3[2] = 0;
  }
  puVar3[3] = uVar4 & 4 | 3;
  return;
}



// Address: 4a109934

void FUN_4a109934(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x34) = param_2 | *(uint *)(param_1 + 0x34);
  return;
}



// Address: 4a109944

/* WARNING: Removing unreachable block (ram,0x4a10a014) */
/* WARNING: Removing unreachable block (ram,0x4a10a040) */
/* WARNING: Removing unreachable block (ram,0x4a10a048) */
/* WARNING: Removing unreachable block (ram,0x4a10a04c) */
/* WARNING: Removing unreachable block (ram,0x4a10a078) */
/* WARNING: Removing unreachable block (ram,0x4a10a120) */
/* WARNING: Removing unreachable block (ram,0x4a10a128) */
/* WARNING: Removing unreachable block (ram,0x4a10a12c) */
/* WARNING: Removing unreachable block (ram,0x4a10a130) */
/* WARNING: Removing unreachable block (ram,0x4a10a134) */
/* WARNING: Removing unreachable block (ram,0x4a10a138) */
/* WARNING: Removing unreachable block (ram,0x4a10a0fc) */
/* WARNING: Removing unreachable block (ram,0x4a10a100) */
/* WARNING: Removing unreachable block (ram,0x4a10a064) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a109944(int param_1)

{
  ushort uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  undefined1 auStack_44 [20];
  undefined1 auStack_30 [16];
  
  iVar5 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                       *(undefined4 *)(param_1 + 0x28));
  cVar2 = *(char *)(iVar5 + 8);
  uVar11 = *(uint *)(param_1 + 0x38);
  if (cVar2 == '\x14' || cVar2 == '\x15') {
    uVar11 = uVar11 & 0xffdfffff;
    *(uint *)(param_1 + 0x38) = uVar11;
  }
  if (((uVar11 & 0x40) != 0) && (cVar2 == '\x1a')) {
    FUN_4a1164e8(*(undefined4 *)(param_1 + 0x20));
  }
  if (*(int *)(param_1 + 0xa0) < 1) {
    uVar12 = 0;
  }
  else {
    if (*(int *)(param_1 + 0xa4) == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = *(undefined4 **)(*(int *)(param_1 + 0xa4) + 8);
    }
    uVar12 = *puVar6;
  }
  iVar5 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                       *(undefined4 *)(param_1 + 0x28));
  cVar2 = *(char *)(iVar5 + 8);
  if (cVar2 == '\x15') {
LAB_4a10a088:
    FUN_4a0ca3fc(uVar12,0x44d);
    uVar13 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
    uVar12 = FUN_4a144cb0(uVar13,*(undefined4 *)(param_1 + 0x44));
    uVar7 = FUN_4a144cb8(uVar13,*(undefined4 *)(param_1 + 0x4c));
    uVar12 = FUN_4a1458ac(uVar13,uVar12,uVar7);
    iVar5 = FUN_4a0f7058(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),uVar12);
    if (((iVar5 != 0) && (cVar2 == '\x14')) && ((*(uint *)(param_1 + 0x38) & 0x40) != 0)) {
      FUN_4a0b8f24();
    }
  }
  else if (cVar2 < '\x16') {
    if (cVar2 == '\f') {
      FUN_4a1078e8(param_1,3);
    }
    else if (cVar2 == '\x14') goto LAB_4a10a088;
  }
  else if (cVar2 == '\x1a') {
    FUN_4a1078a4(param_1,0xffffffff);
  }
  else if (cVar2 == '\x1f') {
    FUN_4a1078e8(param_1,0);
  }
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffffbf;
  iVar5 = FUN_4a142ef4(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520));
  if (iVar5 != 0) {
    return;
  }
  iVar5 = (*(ushort *)(param_1 + 0x58) + 0xf) * 0x10000;
  *(short *)(param_1 + 0x58) = (short)((uint)iVar5 >> 0x10);
  if ((300 < iVar5 >> 0x10) &&
     (*(undefined2 *)(param_1 + 0x58) = 0, (*(uint *)(param_1 + 0x34) & 0x2000000) != 0)) {
    FUN_4a105a84(param_1);
  }
  if (*(int *)(param_1 + 0x2c) == -1) {
    return;
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x24) + 0x51c);
  uVar12 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
  uVar11 = 0;
  if ((*(int *)(param_1 + 0x28) == 0x80 || *(int *)(param_1 + 0x28) == 0xc) ||
     (iVar8 = FUN_4a143ac8(uVar12), *(char *)(iVar8 + 8) == '\x17')) {
    uVar11 = *(uint *)(param_1 + 0x3c);
  }
  else {
    iVar8 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                         *(undefined4 *)(param_1 + 0x28));
    if (((*(char *)(iVar8 + 8) == '\x14') ||
        (iVar8 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                              *(undefined4 *)(param_1 + 0x28)), *(char *)(iVar8 + 8) == '\x15')) &&
       ((*(uint *)(param_1 + 0x38) & 0x200000) == 0)) {
      uVar11 = 0x20000000;
    }
  }
  uVar9 = *(uint *)(param_1 + 0x34);
  bVar14 = (uVar9 & 0x2000000) != 0;
  if (bVar14) {
    uVar9 = *(uint *)(param_1 + 0x38);
  }
  if (bVar14 && (uVar9 & 0x100) != 0) {
    uVar11 = uVar11 | 0x1000000;
  }
  iVar8 = FUN_4a142ef4(uVar12);
  if ((iVar8 == 0) && ((*(uint *)(param_1 + 0x34) & 0x2000000) != 0)) {
    uVar11 = uVar11 | (int)*(short *)(param_1 + 0x58);
  }
  uVar9 = *(uint *)(param_1 + 0x38);
  iVar8 = *(int *)(param_1 + 0x2c);
  if ((uVar9 & 0x8000) != 0) {
    uVar11 = uVar11 | 0x8000000;
  }
  if ((uVar9 & 0x4000) != 0) {
    uVar11 = uVar11 | 0x4000000;
  }
  if ((uVar9 & 0x10000) != 0) {
    uVar11 = uVar11 | 0x10000000;
  }
  sVar3 = FUN_4a142ef4(uVar12);
  switchD_4a11cc8c::default((iVar8 >> 0x1f) + 1,s_invalid_id_4a0d8628);
  iVar10 = iVar5 + 0x988;
  uVar1 = (ushort)iVar8 | sVar3 << 8;
  uVar12 = FUN_4a16c074(auStack_30,iVar10);
  iVar4 = FUN_4a16ff5c((int)(short)uVar1,uVar12,0);
  FUN_4a16c1a0(auStack_30);
  iVar8 = 0;
  if (uVar11 == 0) {
    if (iVar4 != -1) {
      uVar12 = FUN_4a16c074(auStack_44,iVar10);
      iVar4 = FUN_4a16ff5c((int)(short)uVar1,uVar12,0);
      FUN_4a16c1a0(auStack_44);
      if (iVar4 == -1) {
        return;
      }
      iVar10 = iVar8;
      if (*(int *)(iVar5 + 0x994) != 0) {
        iVar10 = *(int *)(*(int *)(iVar5 + 0x994) + 8);
      }
      *(undefined2 *)(iVar10 + iVar4 * 2) = 0xffff;
      iVar10 = iVar8;
      if (*(int *)(iVar5 + 0x9a8) != 0) {
        iVar10 = *(int *)(*(int *)(iVar5 + 0x9a8) + 8);
      }
      *(undefined4 *)(iVar10 + iVar4 * 4) = 0;
      if (*(int *)(iVar5 + 0x9bc) != 0) {
        iVar8 = *(int *)(*(int *)(iVar5 + 0x9bc) + 8);
      }
      *(undefined4 *)(iVar8 + iVar4 * 4) = 0;
      return;
    }
  }
  else if (iVar4 != -1) goto LAB_4a0d85dc;
  uVar12 = FUN_4a16c074(auStack_44,iVar10);
  iVar4 = FUN_4a16ff5c(0xffffffff,uVar12,0);
  FUN_4a16c1a0(auStack_44);
  switchD_4a11cc8c::default(iVar4 != -1,s_no_room_in_persistant_object_dat_4a0d8634);
LAB_4a0d85dc:
  if (*(int *)(iVar5 + 0x994) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(*(int *)(iVar5 + 0x994) + 8);
  }
  *(ushort *)(iVar10 + iVar4 * 2) = uVar1;
  if (*(int *)(iVar5 + 0x9a8) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(*(int *)(iVar5 + 0x9a8) + 8);
  }
  *(uint *)(iVar10 + iVar4 * 4) = uVar11;
  if (*(int *)(iVar5 + 0x9bc) != 0) {
    iVar8 = *(int *)(*(int *)(iVar5 + 0x9bc) + 8);
  }
  *(undefined4 *)(iVar8 + iVar4 * 4) = *(undefined4 *)(iVar5 + 0x78c);
  return;
}



// Address: 4a109998

/* WARNING: Removing unreachable block (ram,0x4a107b08) */
/* WARNING: Removing unreachable block (ram,0x4a107af4) */
/* WARNING: Removing unreachable block (ram,0x4a107afc) */
/* WARNING: Removing unreachable block (ram,0x4a107b44) */
/* WARNING: Removing unreachable block (ram,0x4a107b04) */
/* WARNING: Removing unreachable block (ram,0x4a107b0c) */
/* WARNING: Removing unreachable block (ram,0x4a107b10) */
/* WARNING: Removing unreachable block (ram,0x4a107a10) */
/* WARNING: Removing unreachable block (ram,0x4a107a18) */
/* WARNING: Removing unreachable block (ram,0x4a107c2c) */
/* WARNING: Removing unreachable block (ram,0x4a107bd8) */
/* WARNING: Removing unreachable block (ram,0x4a107be0) */
/* WARNING: Removing unreachable block (ram,0x4a107be8) */
/* WARNING: Removing unreachable block (ram,0x4a107bec) */
/* WARNING: Removing unreachable block (ram,0x4a107bf0) */
/* WARNING: Removing unreachable block (ram,0x4a107bf4) */
/* WARNING: Removing unreachable block (ram,0x4a107bf8) */
/* WARNING: Removing unreachable block (ram,0x4a107c14) */
/* WARNING: Removing unreachable block (ram,0x4a107c8c) */
/* WARNING: Removing unreachable block (ram,0x4a107c44) */
/* WARNING: Removing unreachable block (ram,0x4a107c4c) */
/* WARNING: Removing unreachable block (ram,0x4a1079f8) */
/* WARNING: Removing unreachable block (ram,0x4a1079fc) */
/* WARNING: Removing unreachable block (ram,0x4a107a00) */
/* WARNING: Removing unreachable block (ram,0x4a107a04) */
/* WARNING: Removing unreachable block (ram,0x4a107a54) */
/* WARNING: Removing unreachable block (ram,0x4a107944) */
/* WARNING: Removing unreachable block (ram,0x4a10794c) */
/* WARNING: Removing unreachable block (ram,0x4a107954) */
/* WARNING: Removing unreachable block (ram,0x4a10795c) */
/* WARNING: Removing unreachable block (ram,0x4a107aac) */
/* WARNING: Removing unreachable block (ram,0x4a107a80) */
/* WARNING: Removing unreachable block (ram,0x4a107b2c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a109998(int param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined1 auStack_44 [20];
  undefined1 auStack_30 [16];
  
  iVar4 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                       *(undefined4 *)(param_1 + 0x28));
  iVar4 = (int)*(char *)(iVar4 + 8);
  if (iVar4 == 0x11) {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
    FUN_4a109ed4(param_1,0x105);
    FUN_4a1061f0(param_1);
    puVar10 = (undefined4 *)0x0;
    if (*(int *)(param_1 + 0xa0) < 1) {
      uVar11 = 0;
    }
    else {
      if (*(int *)(param_1 + 0xa4) != 0) {
        puVar10 = *(undefined4 **)(*(int *)(param_1 + 0xa4) + 8);
      }
      uVar11 = *puVar10;
    }
    uVar5 = FUN_4a13eaec(uVar11,0x450);
    uVar11 = FUN_4a13eaec(uVar11,0x451);
    FUN_4a0b4608(uVar5,0);
    FUN_4a0b4608(uVar11,0);
  }
  else if (iVar4 < 0x12) {
    if (iVar4 != 0xb) {
      if (iVar4 < 0xc) {
        if (iVar4 == 3) {
          *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
          FUN_4a109ed4(param_1,0xf8);
        }
        else {
          if (iVar4 == 4) {
            if (*(int *)(param_1 + 0xa0) < 2) {
              iVar4 = 0;
            }
            else {
              if (*(int *)(param_1 + 0xa4) == 0) {
                iVar4 = 0;
              }
              else {
                iVar4 = *(int *)(*(int *)(param_1 + 0xa4) + 8);
              }
              iVar4 = *(int *)(iVar4 + 4);
            }
            goto joined_r0x4a107c80;
          }
          if (iVar4 == 5) {
            *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
            FUN_4a1078a4(param_1,0xffffffff);
          }
        }
      }
      else if ((iVar4 != 0xc) && (iVar4 == 0xf)) {
        FUN_4a108314(param_1,0);
      }
    }
  }
  else {
    switch(iVar4) {
    case 0x16:
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
      FUN_4a109ed4(param_1,0xff);
      FUN_4a1061f0(param_1);
      break;
    case 0x17:
      FUN_4a108858(param_1,0);
      break;
    case 0x19:
      if (*(int *)(param_1 + 0xa0) < 2) {
        iVar4 = 0;
      }
      else {
        if (*(int *)(param_1 + 0xa4) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(*(int *)(param_1 + 0xa4) + 8);
        }
        iVar4 = *(int *)(iVar4 + 4);
      }
joined_r0x4a107c80:
      if (iVar4 != 0) {
        FUN_4a0cb1ec();
      }
      break;
    case 0x1e:
      FUN_4a108be8(param_1,0);
      break;
    case 0x1f:
      FUN_4a107f78(param_1,0);
    }
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  iVar4 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                       *(undefined4 *)(param_1 + 0x28));
  uVar6 = (uint)*(byte *)(iVar4 + 8);
  bVar12 = uVar6 != 0x1e;
  if (bVar12) {
    uVar6 = *(uint *)(param_1 + 0x28);
  }
  if (bVar12 && uVar6 != 0xc) {
    return;
  }
  if (*(int *)(param_1 + 0x2c) == -1) {
    return;
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x24) + 0x51c);
  uVar11 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
  uVar6 = 0;
  if ((*(int *)(param_1 + 0x28) == 0x80 || *(int *)(param_1 + 0x28) == 0xc) ||
     (iVar7 = FUN_4a143ac8(uVar11), *(char *)(iVar7 + 8) == '\x17')) {
    uVar6 = *(uint *)(param_1 + 0x3c);
  }
  else {
    iVar7 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                         *(undefined4 *)(param_1 + 0x28));
    if (((*(char *)(iVar7 + 8) == '\x14') ||
        (iVar7 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                              *(undefined4 *)(param_1 + 0x28)), *(char *)(iVar7 + 8) == '\x15')) &&
       ((*(uint *)(param_1 + 0x38) & 0x200000) == 0)) {
      uVar6 = 0x20000000;
    }
  }
  uVar8 = *(uint *)(param_1 + 0x34);
  bVar12 = (uVar8 & 0x2000000) != 0;
  if (bVar12) {
    uVar8 = *(uint *)(param_1 + 0x38);
  }
  if (bVar12 && (uVar8 & 0x100) != 0) {
    uVar6 = uVar6 | 0x1000000;
  }
  iVar7 = FUN_4a142ef4(uVar11);
  if ((iVar7 == 0) && ((*(uint *)(param_1 + 0x34) & 0x2000000) != 0)) {
    uVar6 = uVar6 | (int)*(short *)(param_1 + 0x58);
  }
  uVar8 = *(uint *)(param_1 + 0x38);
  iVar7 = *(int *)(param_1 + 0x2c);
  if ((uVar8 & 0x8000) != 0) {
    uVar6 = uVar6 | 0x8000000;
  }
  if ((uVar8 & 0x4000) != 0) {
    uVar6 = uVar6 | 0x4000000;
  }
  if ((uVar8 & 0x10000) != 0) {
    uVar6 = uVar6 | 0x10000000;
  }
  sVar2 = FUN_4a142ef4(uVar11);
  switchD_4a11cc8c::default((iVar7 >> 0x1f) + 1,s_invalid_id_4a0d8628);
  iVar9 = iVar4 + 0x988;
  uVar1 = (ushort)iVar7 | sVar2 << 8;
  uVar11 = FUN_4a16c074(auStack_30,iVar9);
  iVar3 = FUN_4a16ff5c((int)(short)uVar1,uVar11,0);
  FUN_4a16c1a0(auStack_30);
  iVar7 = 0;
  if (uVar6 == 0) {
    if (iVar3 != -1) {
      uVar11 = FUN_4a16c074(auStack_44,iVar9);
      iVar3 = FUN_4a16ff5c((int)(short)uVar1,uVar11,0);
      FUN_4a16c1a0(auStack_44);
      if (iVar3 == -1) {
        return;
      }
      iVar9 = iVar7;
      if (*(int *)(iVar4 + 0x994) != 0) {
        iVar9 = *(int *)(*(int *)(iVar4 + 0x994) + 8);
      }
      *(undefined2 *)(iVar9 + iVar3 * 2) = 0xffff;
      iVar9 = iVar7;
      if (*(int *)(iVar4 + 0x9a8) != 0) {
        iVar9 = *(int *)(*(int *)(iVar4 + 0x9a8) + 8);
      }
      *(undefined4 *)(iVar9 + iVar3 * 4) = 0;
      if (*(int *)(iVar4 + 0x9bc) != 0) {
        iVar7 = *(int *)(*(int *)(iVar4 + 0x9bc) + 8);
      }
      *(undefined4 *)(iVar7 + iVar3 * 4) = 0;
      return;
    }
  }
  else if (iVar3 != -1) goto LAB_4a0d85dc;
  uVar11 = FUN_4a16c074(auStack_44,iVar9);
  iVar3 = FUN_4a16ff5c(0xffffffff,uVar11,0);
  FUN_4a16c1a0(auStack_44);
  switchD_4a11cc8c::default(iVar3 != -1,s_no_room_in_persistant_object_dat_4a0d8634);
LAB_4a0d85dc:
  if (*(int *)(iVar4 + 0x994) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(int *)(iVar4 + 0x994) + 8);
  }
  *(ushort *)(iVar9 + iVar3 * 2) = uVar1;
  if (*(int *)(iVar4 + 0x9a8) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(int *)(iVar4 + 0x9a8) + 8);
  }
  *(uint *)(iVar9 + iVar3 * 4) = uVar6;
  if (*(int *)(iVar4 + 0x9bc) != 0) {
    iVar7 = *(int *)(*(int *)(iVar4 + 0x9bc) + 8);
  }
  *(undefined4 *)(iVar7 + iVar3 * 4) = *(undefined4 *)(iVar4 + 0x78c);
  return;
}



// Address: 4a1099a0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1099a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined1 auStack_4c [8];
  int iStack_44;
  int iStack_40;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  if (*(int *)(param_1 + 0x3c) != 1 && *(int *)(param_1 + 0x3c) != 2) {
    FUN_4a1078e8(param_1,2);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    return;
  }
  iVar1 = FUN_4a142ef4(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520));
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a1099ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  iVar1 = FUN_4a141248(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x51c),0,1);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    iStack_30 = 0x1b;
    uStack_38 = *(undefined4 *)(iVar1 + 0x24);
    iStack_34 = iVar1;
    iStack_2c = param_2;
    iStack_28 = param_1;
    iVar2 = FUN_4a142ef4(*(undefined4 *)(iVar1 + 0x28));
    FUN_4a110aac(auStack_4c,iVar1);
    uVar3 = FUN_4a13fb44(uStack_38,iStack_30);
    if (iStack_30 == 0x1b) {
      FUN_4a0dd6e4(uStack_38,0,1);
    }
    iVar1 = 0;
    if (0 < iStack_44) {
      do {
        if (iStack_40 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(iStack_40 + 8);
        }
        iVar5 = *(int *)(iVar4 + iVar1 * 4);
        iVar4 = FUN_4a146a9c(iVar5);
      } while ((((iVar4 == 0 || iVar5 == param_1) || iVar5 == param_2) ||
               ((((uVar3 & 0x40000) != 0 && (iVar4 = FUN_4a13f8f8(uStack_38,iVar4), iVar4 != iVar2))
                || (iVar4 = FUN_4a073990(iVar5,iStack_30,param_2,param_1),
                   iVar4 == 0 || (uVar3 & 0x800000) == 0)))) &&
              (iVar1 = iVar1 + 1, iVar1 < iStack_44));
    }
    FUN_4a169a1c(auStack_4c);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a109a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



// Address: 4a109a28

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a109a28(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_34 [20];
  
  iVar2 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                       *(undefined4 *)(param_1 + 0x28));
  puVar1 = PTR_DAT_4a109b98;
  if (*(char *)(iVar2 + 8) != '\x01') {
    return;
  }
  uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
  iVar2 = *(int *)(param_1 + 0x48);
  puVar7 = *(undefined4 **)(param_1 + 0x44);
  if (*(int *)(param_1 + 0x28) == 0xb) {
    uVar3 = FUN_4a0d4830(0,0x5dc,*(undefined4 *)(param_1 + 0x40));
    iVar4 = FUN_4a0d4b28(uVar3,0x1e0000);
    iVar2 = iVar2 + iVar4 + 0x280000;
  }
  uVar3 = FUN_4a16bdcc(auStack_34,puVar1);
  FUN_4a0f2970(uVar6,uVar3,puVar7,iVar2);
  FUN_4a16bef4(auStack_34);
  iVar2 = *(int *)(puVar1 + 0xc);
  puVar5 = (undefined4 *)0x0;
  if (iVar2 != 0) {
    puVar7 = *(undefined4 **)(iVar2 + 8);
    iVar4 = *(int *)(iVar2 + 8);
  }
  else {
    iVar4 = 0;
  }
  if (iVar2 == 0) {
    puVar7 = (undefined4 *)0x0;
  }
  if (*(int *)(param_1 + 0x28) != 0xb) {
    if (*(int *)(param_1 + 0x28) == 10) {
      if (*(int *)(param_1 + 0x8c) < 1) {
        uVar6 = 0;
      }
      else {
        if (*(int *)(param_1 + 0x90) != 0) {
          puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x90) + 8);
        }
        uVar6 = *puVar5;
      }
      FUN_4a06015c(uVar6,param_2,*puVar7,*(undefined4 *)(iVar4 + 4));
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a109b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  iVar2 = *(int *)(param_1 + 0x24) + 0x278;
  uVar6 = FUN_4a06c410(iVar2);
  FUN_4a06c86c(iVar2,*(undefined4 *)(param_1 + 0x6c));
  FUN_4a06afd0(iVar2,param_2,uVar6,5);
  return;
}



// Address: 4a109b9c

/* WARNING: Removing unreachable block (ram,0x4a107b08) */
/* WARNING: Removing unreachable block (ram,0x4a107af4) */
/* WARNING: Removing unreachable block (ram,0x4a107afc) */
/* WARNING: Removing unreachable block (ram,0x4a107b44) */
/* WARNING: Removing unreachable block (ram,0x4a107b04) */
/* WARNING: Removing unreachable block (ram,0x4a107b0c) */
/* WARNING: Removing unreachable block (ram,0x4a107b10) */
/* WARNING: Removing unreachable block (ram,0x4a107a10) */
/* WARNING: Removing unreachable block (ram,0x4a107a18) */
/* WARNING: Removing unreachable block (ram,0x4a107c2c) */
/* WARNING: Removing unreachable block (ram,0x4a107bd8) */
/* WARNING: Removing unreachable block (ram,0x4a107be0) */
/* WARNING: Removing unreachable block (ram,0x4a107be8) */
/* WARNING: Removing unreachable block (ram,0x4a107bec) */
/* WARNING: Removing unreachable block (ram,0x4a107bf0) */
/* WARNING: Removing unreachable block (ram,0x4a107bf4) */
/* WARNING: Removing unreachable block (ram,0x4a107bf8) */
/* WARNING: Removing unreachable block (ram,0x4a107c14) */
/* WARNING: Removing unreachable block (ram,0x4a107c8c) */
/* WARNING: Removing unreachable block (ram,0x4a107c44) */
/* WARNING: Removing unreachable block (ram,0x4a107c4c) */
/* WARNING: Removing unreachable block (ram,0x4a1079f8) */
/* WARNING: Removing unreachable block (ram,0x4a1079fc) */
/* WARNING: Removing unreachable block (ram,0x4a107a00) */
/* WARNING: Removing unreachable block (ram,0x4a107a04) */
/* WARNING: Removing unreachable block (ram,0x4a107a54) */
/* WARNING: Removing unreachable block (ram,0x4a107944) */
/* WARNING: Removing unreachable block (ram,0x4a10794c) */
/* WARNING: Removing unreachable block (ram,0x4a107954) */
/* WARNING: Removing unreachable block (ram,0x4a10795c) */
/* WARNING: Removing unreachable block (ram,0x4a107aac) */
/* WARNING: Removing unreachable block (ram,0x4a107a80) */
/* WARNING: Removing unreachable block (ram,0x4a107b2c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a109b9c(int param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined1 auStack_44 [20];
  undefined1 auStack_30 [16];
  
  iVar4 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                       *(undefined4 *)(param_1 + 0x28));
  iVar4 = (int)*(char *)(iVar4 + 8);
  if (iVar4 == 0x11) {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
    FUN_4a109ed4(param_1,0x105);
    FUN_4a1061f0(param_1);
    puVar10 = (undefined4 *)0x0;
    if (*(int *)(param_1 + 0xa0) < 1) {
      uVar11 = 0;
    }
    else {
      if (*(int *)(param_1 + 0xa4) != 0) {
        puVar10 = *(undefined4 **)(*(int *)(param_1 + 0xa4) + 8);
      }
      uVar11 = *puVar10;
    }
    uVar5 = FUN_4a13eaec(uVar11,0x450);
    uVar11 = FUN_4a13eaec(uVar11,0x451);
    FUN_4a0b4608(uVar5,0);
    FUN_4a0b4608(uVar11,0);
  }
  else if (iVar4 < 0x12) {
    if (iVar4 != 0xb) {
      if (iVar4 < 0xc) {
        if (iVar4 == 3) {
          *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
          FUN_4a109ed4(param_1,0xf8);
        }
        else {
          if (iVar4 == 4) {
            if (*(int *)(param_1 + 0xa0) < 2) {
              iVar4 = 0;
            }
            else {
              if (*(int *)(param_1 + 0xa4) == 0) {
                iVar4 = 0;
              }
              else {
                iVar4 = *(int *)(*(int *)(param_1 + 0xa4) + 8);
              }
              iVar4 = *(int *)(iVar4 + 4);
            }
            goto joined_r0x4a107c80;
          }
          if (iVar4 == 5) {
            *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
            FUN_4a1078a4(param_1,0xffffffff);
          }
        }
      }
      else if ((iVar4 != 0xc) && (iVar4 == 0xf)) {
        FUN_4a108314(param_1,0);
      }
    }
  }
  else {
    switch(iVar4) {
    case 0x16:
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
      FUN_4a109ed4(param_1,0xff);
      FUN_4a1061f0(param_1);
      break;
    case 0x17:
      FUN_4a108858(param_1,0);
      break;
    case 0x19:
      if (*(int *)(param_1 + 0xa0) < 2) {
        iVar4 = 0;
      }
      else {
        if (*(int *)(param_1 + 0xa4) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(*(int *)(param_1 + 0xa4) + 8);
        }
        iVar4 = *(int *)(iVar4 + 4);
      }
joined_r0x4a107c80:
      if (iVar4 != 0) {
        FUN_4a0cb1ec();
      }
      break;
    case 0x1e:
      FUN_4a108be8(param_1,0);
      break;
    case 0x1f:
      FUN_4a107f78(param_1,0);
    }
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  iVar4 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                       *(undefined4 *)(param_1 + 0x28));
  uVar6 = (uint)*(byte *)(iVar4 + 8);
  bVar12 = uVar6 != 0x1e;
  if (bVar12) {
    uVar6 = *(uint *)(param_1 + 0x28);
  }
  if (bVar12 && uVar6 != 0xc) {
    return;
  }
  if (*(int *)(param_1 + 0x2c) == -1) {
    return;
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x24) + 0x51c);
  uVar11 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
  uVar6 = 0;
  if ((*(int *)(param_1 + 0x28) == 0x80 || *(int *)(param_1 + 0x28) == 0xc) ||
     (iVar7 = FUN_4a143ac8(uVar11), *(char *)(iVar7 + 8) == '\x17')) {
    uVar6 = *(uint *)(param_1 + 0x3c);
  }
  else {
    iVar7 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                         *(undefined4 *)(param_1 + 0x28));
    if (((*(char *)(iVar7 + 8) == '\x14') ||
        (iVar7 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                              *(undefined4 *)(param_1 + 0x28)), *(char *)(iVar7 + 8) == '\x15')) &&
       ((*(uint *)(param_1 + 0x38) & 0x200000) == 0)) {
      uVar6 = 0x20000000;
    }
  }
  uVar8 = *(uint *)(param_1 + 0x34);
  bVar12 = (uVar8 & 0x2000000) != 0;
  if (bVar12) {
    uVar8 = *(uint *)(param_1 + 0x38);
  }
  if (bVar12 && (uVar8 & 0x100) != 0) {
    uVar6 = uVar6 | 0x1000000;
  }
  iVar7 = FUN_4a142ef4(uVar11);
  if ((iVar7 == 0) && ((*(uint *)(param_1 + 0x34) & 0x2000000) != 0)) {
    uVar6 = uVar6 | (int)*(short *)(param_1 + 0x58);
  }
  uVar8 = *(uint *)(param_1 + 0x38);
  iVar7 = *(int *)(param_1 + 0x2c);
  if ((uVar8 & 0x8000) != 0) {
    uVar6 = uVar6 | 0x8000000;
  }
  if ((uVar8 & 0x4000) != 0) {
    uVar6 = uVar6 | 0x4000000;
  }
  if ((uVar8 & 0x10000) != 0) {
    uVar6 = uVar6 | 0x10000000;
  }
  sVar2 = FUN_4a142ef4(uVar11);
  switchD_4a11cc8c::default((iVar7 >> 0x1f) + 1,s_invalid_id_4a0d8628);
  iVar9 = iVar4 + 0x988;
  uVar1 = (ushort)iVar7 | sVar2 << 8;
  uVar11 = FUN_4a16c074(auStack_30,iVar9);
  iVar3 = FUN_4a16ff5c((int)(short)uVar1,uVar11,0);
  FUN_4a16c1a0(auStack_30);
  iVar7 = 0;
  if (uVar6 == 0) {
    if (iVar3 != -1) {
      uVar11 = FUN_4a16c074(auStack_44,iVar9);
      iVar3 = FUN_4a16ff5c((int)(short)uVar1,uVar11,0);
      FUN_4a16c1a0(auStack_44);
      if (iVar3 == -1) {
        return;
      }
      iVar9 = iVar7;
      if (*(int *)(iVar4 + 0x994) != 0) {
        iVar9 = *(int *)(*(int *)(iVar4 + 0x994) + 8);
      }
      *(undefined2 *)(iVar9 + iVar3 * 2) = 0xffff;
      iVar9 = iVar7;
      if (*(int *)(iVar4 + 0x9a8) != 0) {
        iVar9 = *(int *)(*(int *)(iVar4 + 0x9a8) + 8);
      }
      *(undefined4 *)(iVar9 + iVar3 * 4) = 0;
      if (*(int *)(iVar4 + 0x9bc) != 0) {
        iVar7 = *(int *)(*(int *)(iVar4 + 0x9bc) + 8);
      }
      *(undefined4 *)(iVar7 + iVar3 * 4) = 0;
      return;
    }
  }
  else if (iVar3 != -1) goto LAB_4a0d85dc;
  uVar11 = FUN_4a16c074(auStack_44,iVar9);
  iVar3 = FUN_4a16ff5c(0xffffffff,uVar11,0);
  FUN_4a16c1a0(auStack_44);
  switchD_4a11cc8c::default(iVar3 != -1,s_no_room_in_persistant_object_dat_4a0d8634);
LAB_4a0d85dc:
  if (*(int *)(iVar4 + 0x994) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(int *)(iVar4 + 0x994) + 8);
  }
  *(ushort *)(iVar9 + iVar3 * 2) = uVar1;
  if (*(int *)(iVar4 + 0x9a8) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(int *)(iVar4 + 0x9a8) + 8);
  }
  *(uint *)(iVar9 + iVar3 * 4) = uVar6;
  if (*(int *)(iVar4 + 0x9bc) != 0) {
    iVar7 = *(int *)(*(int *)(iVar4 + 0x9bc) + 8);
  }
  *(undefined4 *)(iVar7 + iVar3 * 4) = *(undefined4 *)(iVar4 + 0x78c);
  return;
}



// Address: 4a109ba4

/* WARNING: Removing unreachable block (ram,0x4a107a54) */
/* WARNING: Removing unreachable block (ram,0x4a107c2c) */
/* WARNING: Removing unreachable block (ram,0x4a107bfc) */
/* WARNING: Removing unreachable block (ram,0x4a107b44) */
/* WARNING: Removing unreachable block (ram,0x4a107b2c) */
/* WARNING: Removing unreachable block (ram,0x4a107c14) */
/* WARNING: Removing unreachable block (ram,0x4a1079fc) */
/* WARNING: Removing unreachable block (ram,0x4a107c8c) */
/* WARNING: Removing unreachable block (ram,0x4a107a80) */
/* WARNING: Removing unreachable block (ram,0x4a10795c) */
/* WARNING: Removing unreachable block (ram,0x4a107968) */
/* WARNING: Removing unreachable block (ram,0x4a107b14) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a109ba4(int param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined1 auStack_44 [20];
  undefined1 auStack_30 [16];
  
  if (*(int *)(param_1 + 0x3c) == 0 || *(int *)(param_1 + 0x3c) == 3) {
    return;
  }
  iVar4 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                       *(undefined4 *)(param_1 + 0x28));
  iVar4 = (int)*(char *)(iVar4 + 8);
  if (iVar4 == 0x11) {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
    FUN_4a109ed4(param_1,0x105);
    puVar10 = (undefined4 *)0x0;
    if (*(int *)(param_1 + 0xa0) < 1) {
      uVar11 = 0;
    }
    else {
      if (*(int *)(param_1 + 0xa4) != 0) {
        puVar10 = *(undefined4 **)(*(int *)(param_1 + 0xa4) + 8);
      }
      uVar11 = *puVar10;
    }
    uVar5 = FUN_4a13eaec(uVar11,0x450);
    uVar11 = FUN_4a13eaec(uVar11,0x451);
    FUN_4a0b4608(uVar5,1);
    FUN_4a0b4608(uVar11,1);
  }
  else if (iVar4 < 0x12) {
    if (iVar4 != 0xb) {
      if (iVar4 < 0xc) {
        if (iVar4 == 3) {
          *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
          FUN_4a109ed4(param_1,0xf8);
        }
        else {
          if (iVar4 == 4) {
            switchD_4a11cc8c::default(0,PTR_s_invalid_state_for_basin_4a107d14);
            if (*(int *)(param_1 + 0xa0) < 2) {
              iVar4 = 0;
            }
            else {
              if (*(int *)(param_1 + 0xa4) == 0) {
                iVar4 = 0;
              }
              else {
                iVar4 = *(int *)(*(int *)(param_1 + 0xa4) + 8);
              }
              iVar4 = *(int *)(iVar4 + 4);
            }
            goto joined_r0x4a107c80;
          }
          if (iVar4 == 5) {
            *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
            FUN_4a1078a4(param_1,6);
            FUN_4a107e58(param_1,0x103);
          }
        }
      }
      else if ((iVar4 != 0xc) && (iVar4 == 0xf)) {
        FUN_4a108314(param_1,3);
      }
    }
  }
  else {
    switch(iVar4) {
    case 0x16:
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
      FUN_4a109ed4(param_1,0xff);
      break;
    case 0x17:
      FUN_4a108858(param_1,3);
      break;
    case 0x19:
      switchD_4a11cc8c::default(0,PTR_s_invalid_state_for_shower_4a107d18);
      if (*(int *)(param_1 + 0xa0) < 2) {
        iVar4 = 0;
      }
      else {
        if (*(int *)(param_1 + 0xa4) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(*(int *)(param_1 + 0xa4) + 8);
        }
        iVar4 = *(int *)(iVar4 + 4);
      }
joined_r0x4a107c80:
      if (iVar4 != 0) {
        FUN_4a0cb1ec();
      }
      break;
    case 0x1e:
      FUN_4a108be8(param_1,3);
      break;
    case 0x1f:
      FUN_4a107f78(param_1,3);
    }
  }
  *(undefined4 *)(param_1 + 0x3c) = 3;
  *(undefined4 *)(param_1 + 0x40) = 0;
  iVar4 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                       *(undefined4 *)(param_1 + 0x28));
  uVar6 = (uint)*(byte *)(iVar4 + 8);
  bVar12 = uVar6 != 0x1e;
  if (bVar12) {
    uVar6 = *(uint *)(param_1 + 0x28);
  }
  if (bVar12 && uVar6 != 0xc) {
    return;
  }
  if (*(int *)(param_1 + 0x2c) == -1) {
    return;
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x24) + 0x51c);
  uVar11 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
  uVar6 = 0;
  if ((*(int *)(param_1 + 0x28) == 0x80 || *(int *)(param_1 + 0x28) == 0xc) ||
     (iVar7 = FUN_4a143ac8(uVar11), *(char *)(iVar7 + 8) == '\x17')) {
    uVar6 = *(uint *)(param_1 + 0x3c);
  }
  else {
    iVar7 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                         *(undefined4 *)(param_1 + 0x28));
    if (((*(char *)(iVar7 + 8) == '\x14') ||
        (iVar7 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                              *(undefined4 *)(param_1 + 0x28)), *(char *)(iVar7 + 8) == '\x15')) &&
       ((*(uint *)(param_1 + 0x38) & 0x200000) == 0)) {
      uVar6 = 0x20000000;
    }
  }
  uVar8 = *(uint *)(param_1 + 0x34);
  bVar12 = (uVar8 & 0x2000000) != 0;
  if (bVar12) {
    uVar8 = *(uint *)(param_1 + 0x38);
  }
  if (bVar12 && (uVar8 & 0x100) != 0) {
    uVar6 = uVar6 | 0x1000000;
  }
  iVar7 = FUN_4a142ef4(uVar11);
  if ((iVar7 == 0) && ((*(uint *)(param_1 + 0x34) & 0x2000000) != 0)) {
    uVar6 = uVar6 | (int)*(short *)(param_1 + 0x58);
  }
  uVar8 = *(uint *)(param_1 + 0x38);
  iVar7 = *(int *)(param_1 + 0x2c);
  if ((uVar8 & 0x8000) != 0) {
    uVar6 = uVar6 | 0x8000000;
  }
  if ((uVar8 & 0x4000) != 0) {
    uVar6 = uVar6 | 0x4000000;
  }
  if ((uVar8 & 0x10000) != 0) {
    uVar6 = uVar6 | 0x10000000;
  }
  sVar2 = FUN_4a142ef4(uVar11);
  switchD_4a11cc8c::default((iVar7 >> 0x1f) + 1,s_invalid_id_4a0d8628);
  iVar9 = iVar4 + 0x988;
  uVar1 = (ushort)iVar7 | sVar2 << 8;
  uVar11 = FUN_4a16c074(auStack_30,iVar9);
  iVar3 = FUN_4a16ff5c((int)(short)uVar1,uVar11,0);
  FUN_4a16c1a0(auStack_30);
  iVar7 = 0;
  if (uVar6 == 0) {
    if (iVar3 != -1) {
      uVar11 = FUN_4a16c074(auStack_44,iVar9);
      iVar3 = FUN_4a16ff5c((int)(short)uVar1,uVar11,0);
      FUN_4a16c1a0(auStack_44);
      if (iVar3 != -1) {
        iVar9 = iVar7;
        if (*(int *)(iVar4 + 0x994) != 0) {
          iVar9 = *(int *)(*(int *)(iVar4 + 0x994) + 8);
        }
        *(undefined2 *)(iVar9 + iVar3 * 2) = 0xffff;
        iVar9 = iVar7;
        if (*(int *)(iVar4 + 0x9a8) != 0) {
          iVar9 = *(int *)(*(int *)(iVar4 + 0x9a8) + 8);
        }
        *(undefined4 *)(iVar9 + iVar3 * 4) = 0;
        if (*(int *)(iVar4 + 0x9bc) != 0) {
          iVar7 = *(int *)(*(int *)(iVar4 + 0x9bc) + 8);
        }
        *(undefined4 *)(iVar7 + iVar3 * 4) = 0;
        return;
      }
      return;
    }
  }
  else if (iVar3 != -1) goto LAB_4a0d85dc;
  uVar11 = FUN_4a16c074(auStack_44,iVar9);
  iVar3 = FUN_4a16ff5c(0xffffffff,uVar11,0);
  FUN_4a16c1a0(auStack_44);
  switchD_4a11cc8c::default(iVar3 != -1,s_no_room_in_persistant_object_dat_4a0d8634);
LAB_4a0d85dc:
  if (*(int *)(iVar4 + 0x994) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(int *)(iVar4 + 0x994) + 8);
  }
  *(ushort *)(iVar9 + iVar3 * 2) = uVar1;
  if (*(int *)(iVar4 + 0x9a8) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(int *)(iVar4 + 0x9a8) + 8);
  }
  *(uint *)(iVar9 + iVar3 * 4) = uVar6;
  if (*(int *)(iVar4 + 0x9bc) != 0) {
    iVar7 = *(int *)(*(int *)(iVar4 + 0x9bc) + 8);
  }
  *(undefined4 *)(iVar7 + iVar3 * 4) = *(undefined4 *)(iVar4 + 0x78c);
  return;
}



// Address: 4a109bbc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a109bbc(int param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_44 [20];
  undefined1 auStack_30 [24];
  
  if (*(int *)(param_1 + 0x3c) == 2) {
LAB_4a109be8:
    iVar4 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                         *(undefined4 *)(param_1 + 0x28));
    if ((*(uint *)(iVar4 + 0x14) & 0x20000) != 0) {
      *(undefined4 *)(param_1 + 0x3c) = 1;
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
      FUN_4a1098fc(param_1,10);
      FUN_4a1078a4(param_1,0x11);
      FUN_4a107e58(param_1,0xf2);
      FUN_4a107f30(param_1);
      goto LAB_4a109cb4;
    }
    *(undefined4 *)(param_1 + 0x3c) = 3;
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
    FUN_4a1078a4(param_1,0x12);
    FUN_4a107e58(param_1,0xf0);
  }
  else {
    if (*(int *)(param_1 + 0x3c) != 3) {
      switchD_4a11cc8c::default(0,s_invalid_state_for_plant_growth_4a109d18);
      goto LAB_4a109be8;
    }
    *(undefined4 *)(param_1 + 0x3c) = 1;
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
    FUN_4a1098fc(param_1,10);
    FUN_4a1078a4(param_1,0x12);
    FUN_4a107e58(param_1,0xf0);
    FUN_4a107f30(param_1);
LAB_4a109cb4:
    uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x51c);
    FUN_4a0daefc(uVar8,0x1f);
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 == 0x1c) {
      FUN_4a0daefc(uVar8,0x20);
    }
    else if (iVar4 == 0x1a) {
      FUN_4a0daefc(uVar8,0x21);
    }
    else if (iVar4 == 0x1b) {
      FUN_4a0daefc(uVar8,0x22);
    }
  }
  if (*(int *)(param_1 + 0x2c) == -1) {
    return;
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x24) + 0x51c);
  uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
  uVar9 = 0;
  if ((*(int *)(param_1 + 0x28) == 0x80 || *(int *)(param_1 + 0x28) == 0xc) ||
     (iVar5 = FUN_4a143ac8(uVar8), *(char *)(iVar5 + 8) == '\x17')) {
    uVar9 = *(uint *)(param_1 + 0x3c);
  }
  else {
    iVar5 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                         *(undefined4 *)(param_1 + 0x28));
    if (((*(char *)(iVar5 + 8) == '\x14') ||
        (iVar5 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                              *(undefined4 *)(param_1 + 0x28)), *(char *)(iVar5 + 8) == '\x15')) &&
       ((*(uint *)(param_1 + 0x38) & 0x200000) == 0)) {
      uVar9 = 0x20000000;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x34);
  bVar10 = (uVar6 & 0x2000000) != 0;
  if (bVar10) {
    uVar6 = *(uint *)(param_1 + 0x38);
  }
  if (bVar10 && (uVar6 & 0x100) != 0) {
    uVar9 = uVar9 | 0x1000000;
  }
  iVar5 = FUN_4a142ef4(uVar8);
  if ((iVar5 == 0) && ((*(uint *)(param_1 + 0x34) & 0x2000000) != 0)) {
    uVar9 = uVar9 | (int)*(short *)(param_1 + 0x58);
  }
  uVar6 = *(uint *)(param_1 + 0x38);
  iVar5 = *(int *)(param_1 + 0x2c);
  if ((uVar6 & 0x8000) != 0) {
    uVar9 = uVar9 | 0x8000000;
  }
  if ((uVar6 & 0x4000) != 0) {
    uVar9 = uVar9 | 0x4000000;
  }
  if ((uVar6 & 0x10000) != 0) {
    uVar9 = uVar9 | 0x10000000;
  }
  sVar2 = FUN_4a142ef4(uVar8);
  switchD_4a11cc8c::default((iVar5 >> 0x1f) + 1,s_invalid_id_4a0d8628);
  iVar7 = iVar4 + 0x988;
  uVar1 = (ushort)iVar5 | sVar2 << 8;
  uVar8 = FUN_4a16c074(auStack_30,iVar7);
  iVar3 = FUN_4a16ff5c((int)(short)uVar1,uVar8,0);
  FUN_4a16c1a0(auStack_30);
  iVar5 = 0;
  if (uVar9 == 0) {
    if (iVar3 != -1) {
      uVar8 = FUN_4a16c074(auStack_44,iVar7);
      iVar3 = FUN_4a16ff5c((int)(short)uVar1,uVar8,0);
      FUN_4a16c1a0(auStack_44);
      if (iVar3 != -1) {
        iVar7 = iVar5;
        if (*(int *)(iVar4 + 0x994) != 0) {
          iVar7 = *(int *)(*(int *)(iVar4 + 0x994) + 8);
        }
        *(undefined2 *)(iVar7 + iVar3 * 2) = 0xffff;
        iVar7 = iVar5;
        if (*(int *)(iVar4 + 0x9a8) != 0) {
          iVar7 = *(int *)(*(int *)(iVar4 + 0x9a8) + 8);
        }
        *(undefined4 *)(iVar7 + iVar3 * 4) = 0;
        if (*(int *)(iVar4 + 0x9bc) != 0) {
          iVar5 = *(int *)(*(int *)(iVar4 + 0x9bc) + 8);
        }
        *(undefined4 *)(iVar5 + iVar3 * 4) = 0;
        return;
      }
      return;
    }
  }
  else if (iVar3 != -1) goto LAB_4a0d85dc;
  uVar8 = FUN_4a16c074(auStack_44,iVar7);
  iVar3 = FUN_4a16ff5c(0xffffffff,uVar8,0);
  FUN_4a16c1a0(auStack_44);
  switchD_4a11cc8c::default(iVar3 != -1,s_no_room_in_persistant_object_dat_4a0d8634);
LAB_4a0d85dc:
  if (*(int *)(iVar4 + 0x994) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(*(int *)(iVar4 + 0x994) + 8);
  }
  *(ushort *)(iVar7 + iVar3 * 2) = uVar1;
  if (*(int *)(iVar4 + 0x9a8) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(*(int *)(iVar4 + 0x9a8) + 8);
  }
  *(uint *)(iVar7 + iVar3 * 4) = uVar9;
  if (*(int *)(iVar4 + 0x9bc) != 0) {
    iVar5 = *(int *)(*(int *)(iVar4 + 0x9bc) + 8);
  }
  *(undefined4 *)(iVar5 + iVar3 * 4) = *(undefined4 *)(iVar4 + 0x78c);
  return;
}



// Address: 4a109d38

/* WARNING: Removing unreachable block (ram,0x4a06f994) */
/* WARNING: Removing unreachable block (ram,0x4a06f9a0) */
/* WARNING: Removing unreachable block (ram,0x4a06fa48) */
/* WARNING: Removing unreachable block (ram,0x4a06fa58) */
/* WARNING: Removing unreachable block (ram,0x4a06fa60) */
/* WARNING: Removing unreachable block (ram,0x4a06fa64) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff0 : 0x4a06fa34 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_4a109d38(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int in_r12;
  bool bVar12;
  
  uVar11 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
  switch(param_2) {
  case 4:
    uVar10 = 0x19;
    break;
  case 5:
    uVar10 = 0x1c;
    break;
  case 6:
    uVar10 = 0x1a;
    break;
  case 7:
    uVar10 = 0x1d;
    break;
  case 8:
    uVar10 = 0x1b;
    break;
  default:
    switchD_4a11cc8c::default(0,PTR_s_invalid_seed_type_4a109e58);
    uVar10 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x28) = uVar10;
  FUN_4a0ef614(uVar11,*(undefined4 *)(param_1 + 0x2c),uVar10);
  iVar3 = FUN_4a143ac8(uVar11,uVar10);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar3 + 0xc);
  *(undefined4 *)(param_1 + 0x3c) = 2;
  FUN_4a146240(param_1);
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
  iVar3 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                       *(undefined4 *)(param_1 + 0x28));
  if ((*(uint *)(iVar3 + 0x14) & 0x20000) == 0) {
    FUN_4a1078a4(param_1,0x12);
    iVar3 = 0xef;
  }
  else {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
    FUN_4a1098fc(param_1,10);
    FUN_4a1078a4(param_1,0x11);
    iVar3 = 0xf1;
  }
  puVar9 = (undefined4 *)0x0;
  if (0 < *(int *)(param_1 + 0xa0)) {
    if (*(int *)(param_1 + 0xa4) != 0) {
      puVar9 = *(undefined4 **)(*(int *)(param_1 + 0xa4) + 8);
    }
    puVar9 = (undefined4 *)*puVar9;
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  iVar2 = puVar9[0x10];
  uVar8 = *(uint *)(iVar2 + 0x24);
  bVar12 = (uVar8 & 1) != 0;
  iVar5 = 0;
  if (bVar12) {
    in_r12 = *(int *)(iVar2 + 8);
    iVar5 = *(int *)(in_r12 + 8);
  }
  if (bVar12 && iVar3 < iVar5) {
    *(int *)(iVar2 + 0xc) = (int)(short)iVar3;
    iVar5 = 0;
    if (*(int *)(in_r12 + 0xc) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(in_r12 + 0xc) + 8);
    }
    if (*(int *)(in_r12 + 0x20) != 0) {
      iVar5 = *(int *)(*(int *)(in_r12 + 0x20) + 8);
    }
    iVar6 = *(int *)(iVar2 + 0x10) * (int)*(short *)(iVar6 + iVar3 * 2);
    iVar3 = (int)*(short *)(iVar5 + iVar3 * 2) * *(int *)(iVar2 + 0x10);
    *(int *)(iVar2 + 0x18) = iVar6;
    *(int *)(iVar2 + 0x1c) = iVar3;
    if ((uVar8 & 8) == 0) {
      *(int *)(iVar2 + 0x14) = iVar6;
    }
    else {
      *(int *)(iVar2 + 0x14) = iVar3;
    }
    uVar4 = 3;
    if ((uVar1 & 0x80) != 0) {
      uVar4 = 7;
    }
    *(uint *)(iVar2 + 0x24) = uVar4 | uVar8 & 8;
    piVar7 = *(int **)(iVar2 + 0x28);
    if (piVar7 == (int *)0x0) {
      return iVar2;
    }
    uVar11 = *(undefined4 *)(iVar2 + 0x14);
    iVar5 = (**(code **)(*piVar7 + 0x30))(piVar7);
    iVar3 = 0;
    if (piVar7[2] != 0) {
      iVar3 = *(int *)(piVar7[2] + 0x10);
    }
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      iVar2 = *(int *)(*(int *)(piVar7[2] + 0x14) + iVar3 * 4);
      if ((*(uint *)(*(int *)(iVar2 + 0x2c) + 0x30) & 0x60000000) != 0) {
        uVar10 = FUN_4a1395b4(iVar2,uVar11);
        (**(code **)(*piVar7 + 0x1c))(piVar7,*(undefined4 *)(iVar2 + 0x30),uVar10);
      }
    }
    (**(code **)(*piVar7 + 0x24))(piVar7,uVar11);
    return iVar5;
  }
  return iVar2;
}



// Address: 4a109e5c

void FUN_4a109e5c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_4a0ff494();
  uVar5 = *(undefined4 *)(iVar1 + 0x260);
  uVar2 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x44));
  uVar2 = FUN_4a17295c(uVar2,0xfffffff0);
  uVar3 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x48));
  uVar3 = FUN_4a17295c(uVar3,0xfffffff0);
  uVar4 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x4c));
  uVar4 = FUN_4a17295c(uVar4,0xfffffff0);
  FUN_4a0851b4(uVar5,param_2,uVar2,uVar3,uVar4,0x3f800000);
  return;
}



// Address: 4a109ed4

/* WARNING: Removing unreachable block (ram,0x4a06f9a0) */
/* WARNING: Removing unreachable block (ram,0x4a06fa48) */
/* WARNING: Removing unreachable block (ram,0x4a06fa58) */
/* WARNING: Removing unreachable block (ram,0x4a06fa60) */
/* WARNING: Removing unreachable block (ram,0x4a06fa64) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff0 : 0x4a06fa34 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_4a109ed4(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;
  
  uVar7 = *(uint *)(param_1 + 0x38);
  piVar9 = (int *)0x0;
  *(uint *)(param_1 + 0x38) = uVar7 & 0xffbfffff;
  iVar10 = *(int *)(param_1 + 0xa0);
  if (iVar10 < 1) {
    iVar2 = 0;
  }
  else {
    if (*(int *)(param_1 + 0xa4) != 0) {
      piVar9 = *(int **)(*(int *)(param_1 + 0xa4) + 8);
    }
    iVar2 = *piVar9;
  }
  iVar3 = *(int *)(iVar2 + 0x34);
  uVar8 = *(uint *)(iVar3 + 0x24);
  bVar11 = (uVar8 & 1) == 0;
  iVar2 = 0;
  if (!bVar11) {
    iVar10 = *(int *)(iVar3 + 8);
    iVar2 = *(int *)(iVar10 + 8);
  }
  if (bVar11 || iVar2 <= param_2) {
    return iVar3;
  }
  if (param_2 < 0) {
    return iVar3;
  }
  *(int *)(iVar3 + 0xc) = (int)(short)param_2;
  iVar2 = 0;
  if (*(int *)(iVar10 + 0xc) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(iVar10 + 0xc) + 8);
  }
  if (*(int *)(iVar10 + 0x20) != 0) {
    iVar2 = *(int *)(*(int *)(iVar10 + 0x20) + 8);
  }
  iVar10 = *(int *)(iVar3 + 0x10) * (int)*(short *)(iVar6 + param_2 * 2);
  iVar2 = (int)*(short *)(iVar2 + param_2 * 2) * *(int *)(iVar3 + 0x10);
  *(int *)(iVar3 + 0x18) = iVar10;
  *(int *)(iVar3 + 0x1c) = iVar2;
  if ((uVar8 & 8) == 0) {
    *(int *)(iVar3 + 0x14) = iVar10;
  }
  else {
    *(int *)(iVar3 + 0x14) = iVar2;
  }
  uVar4 = 3;
  if ((uVar7 & 0x80) != 0) {
    uVar4 = 7;
  }
  *(uint *)(iVar3 + 0x24) = uVar4 | uVar8 & 8;
  piVar9 = *(int **)(iVar3 + 0x28);
  if (piVar9 == (int *)0x0) {
    return iVar3;
  }
  uVar5 = *(undefined4 *)(iVar3 + 0x14);
  iVar2 = (**(code **)(*piVar9 + 0x30))(piVar9);
  iVar10 = 0;
  if (piVar9[2] != 0) {
    iVar10 = *(int *)(piVar9[2] + 0x10);
  }
  while (iVar10 = iVar10 + -1, -1 < iVar10) {
    iVar3 = *(int *)(*(int *)(piVar9[2] + 0x14) + iVar10 * 4);
    if ((*(uint *)(*(int *)(iVar3 + 0x2c) + 0x30) & 0x60000000) != 0) {
      uVar1 = FUN_4a1395b4(iVar3,uVar5);
      (**(code **)(*piVar9 + 0x1c))(piVar9,*(undefined4 *)(iVar3 + 0x30),uVar1);
    }
  }
  (**(code **)(*piVar9 + 0x24))(piVar9,uVar5);
  return iVar2;
}



// Address: 4a109f18

void FUN_4a109f18(int param_1,byte param_2)

{
  *(byte *)(param_1 + 0x56) = param_2 | (*(uint *)(param_1 + 0x34) & 0x10000) != 0;
  return;
}



// Address: 4a109f30

void FUN_4a109f30(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  iVar2 = FUN_4a142ef4(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520));
  if (iVar2 == 0) {
    iVar2 = (*(ushort *)(param_1 + 0x58) + 0xf) * 0x10000;
    *(short *)(param_1 + 0x58) = (short)((uint)iVar2 >> 0x10);
    if ((300 < iVar2 >> 0x10) &&
       (*(undefined2 *)(param_1 + 0x58) = 0, (*(uint *)(param_1 + 0x34) & 0x2000000) != 0)) {
      FUN_4a105a84(param_1);
    }
    FUN_4a146240(param_1);
  }
  FUN_4a1078e8(param_1,0);
  iVar2 = FUN_4a0ff494();
  uVar4 = *(uint *)(param_1 + 0x68);
  if (-1 < (int)uVar4) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x260) + 0x74);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 8);
    }
    iVar3 = 0;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    iVar2 = *(int *)(iVar2 + (uVar4 & 0xffff) * 0x14 + 0xc);
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 8);
    }
    piVar5 = *(int **)(iVar3 + (uVar4 >> 0x10) * 4);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0x40))(piVar5);
                    /* WARNING: Could not recover jumptable at 0x4a08673c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar5 + 0x38))(piVar5,*(code **)(*piVar5 + 0x38),0);
      return;
    }
    return;
  }
  return;
}



// Address: 4a109fa8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a109fa8(int param_1,int param_2)

{
  ushort uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  undefined1 auStack_44 [20];
  undefined1 auStack_30 [16];
  
  if (*(int *)(param_1 + 0xa0) < 1) {
    uVar12 = 0;
  }
  else {
    if (*(int *)(param_1 + 0xa4) == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = *(undefined4 **)(*(int *)(param_1 + 0xa4) + 8);
    }
    uVar12 = *puVar5;
  }
  iVar6 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                       *(undefined4 *)(param_1 + 0x28));
  cVar2 = *(char *)(iVar6 + 8);
  if (cVar2 == '\x15') {
LAB_4a10a00c:
    if (param_2 == 0) {
      FUN_4a0ca3fc(uVar12,0x44d);
    }
    else {
      FUN_4a0ca3fc(uVar12,0x44c);
    }
    uVar13 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
    uVar12 = FUN_4a144cb0(uVar13,*(undefined4 *)(param_1 + 0x44));
    uVar7 = FUN_4a144cb8(uVar13,*(undefined4 *)(param_1 + 0x4c));
    uVar12 = FUN_4a1458ac(uVar13,uVar12,uVar7);
    iVar6 = FUN_4a0f7058(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),uVar12);
    if ((iVar6 == 0) || (cVar2 != '\x14')) goto LAB_4a10a05c;
    uVar11 = *(uint *)(param_1 + 0x38) & 0x40;
    if (param_2 != 0) {
      if (uVar11 == 0) {
        FUN_4a0bb5a0();
      }
      goto LAB_4a10a064;
    }
    if (uVar11 != 0) {
      FUN_4a0b8f24();
    }
LAB_4a10a168:
    uVar11 = *(uint *)(param_1 + 0x38) & 0xffffffbf;
  }
  else {
    if (cVar2 < '\x16') {
      if (cVar2 == '\f') {
        if (param_2 == 0) {
          uVar12 = 3;
        }
        else {
          uVar12 = 2;
        }
        FUN_4a1078e8(param_1,uVar12);
      }
      else if (cVar2 == '\x14') goto LAB_4a10a00c;
    }
    else {
      if (cVar2 == '\x1a') {
        uVar12 = 0xffffffff;
        if (param_2 != 0) {
          if (*(int *)(param_1 + 0x28) == 0x71) {
            uVar12 = 9;
          }
          else if (*(int *)(param_1 + 0x28) == 0x72) {
            uVar12 = 10;
          }
          *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x80;
          FUN_4a1078a4(param_1,uVar12);
          FUN_4a107e58(param_1,0x10a);
          goto LAB_4a10a064;
        }
        FUN_4a1078a4(param_1,0xffffffff);
        goto LAB_4a10a168;
      }
      if (cVar2 == '\x1f') {
        if ((param_2 != 0) && ((*(uint *)(param_1 + 0x38) & 0xc000) == 0)) {
          *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x8000;
        }
        FUN_4a1078e8(param_1,param_2);
      }
    }
LAB_4a10a05c:
    if (param_2 == 0) goto LAB_4a10a168;
LAB_4a10a064:
    uVar11 = *(uint *)(param_1 + 0x38) | 0x40;
  }
  *(uint *)(param_1 + 0x38) = uVar11;
  iVar6 = FUN_4a142ef4(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520));
  if (iVar6 != 0) {
    return;
  }
  iVar6 = (*(ushort *)(param_1 + 0x58) + 0xf) * 0x10000;
  *(short *)(param_1 + 0x58) = (short)((uint)iVar6 >> 0x10);
  if ((300 < iVar6 >> 0x10) &&
     (*(undefined2 *)(param_1 + 0x58) = 0, (*(uint *)(param_1 + 0x34) & 0x2000000) != 0)) {
    FUN_4a105a84(param_1);
  }
  if (*(int *)(param_1 + 0x2c) == -1) {
    return;
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x24) + 0x51c);
  uVar12 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
  uVar11 = 0;
  if ((*(int *)(param_1 + 0x28) == 0x80 || *(int *)(param_1 + 0x28) == 0xc) ||
     (iVar8 = FUN_4a143ac8(uVar12), *(char *)(iVar8 + 8) == '\x17')) {
    uVar11 = *(uint *)(param_1 + 0x3c);
  }
  else {
    iVar8 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                         *(undefined4 *)(param_1 + 0x28));
    if (((*(char *)(iVar8 + 8) == '\x14') ||
        (iVar8 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                              *(undefined4 *)(param_1 + 0x28)), *(char *)(iVar8 + 8) == '\x15')) &&
       ((*(uint *)(param_1 + 0x38) & 0x200000) == 0)) {
      uVar11 = 0x20000000;
    }
  }
  uVar9 = *(uint *)(param_1 + 0x34);
  bVar14 = (uVar9 & 0x2000000) != 0;
  if (bVar14) {
    uVar9 = *(uint *)(param_1 + 0x38);
  }
  if (bVar14 && (uVar9 & 0x100) != 0) {
    uVar11 = uVar11 | 0x1000000;
  }
  iVar8 = FUN_4a142ef4(uVar12);
  if ((iVar8 == 0) && ((*(uint *)(param_1 + 0x34) & 0x2000000) != 0)) {
    uVar11 = uVar11 | (int)*(short *)(param_1 + 0x58);
  }
  uVar9 = *(uint *)(param_1 + 0x38);
  iVar8 = *(int *)(param_1 + 0x2c);
  if ((uVar9 & 0x8000) != 0) {
    uVar11 = uVar11 | 0x8000000;
  }
  if ((uVar9 & 0x4000) != 0) {
    uVar11 = uVar11 | 0x4000000;
  }
  if ((uVar9 & 0x10000) != 0) {
    uVar11 = uVar11 | 0x10000000;
  }
  sVar3 = FUN_4a142ef4(uVar12);
  switchD_4a11cc8c::default((iVar8 >> 0x1f) + 1,s_invalid_id_4a0d8628);
  iVar10 = iVar6 + 0x988;
  uVar1 = (ushort)iVar8 | sVar3 << 8;
  uVar12 = FUN_4a16c074(auStack_30,iVar10);
  iVar4 = FUN_4a16ff5c((int)(short)uVar1,uVar12,0);
  FUN_4a16c1a0(auStack_30);
  iVar8 = 0;
  if (uVar11 == 0) {
    if (iVar4 != -1) {
      uVar12 = FUN_4a16c074(auStack_44,iVar10);
      iVar4 = FUN_4a16ff5c((int)(short)uVar1,uVar12,0);
      FUN_4a16c1a0(auStack_44);
      if (iVar4 != -1) {
        iVar10 = iVar8;
        if (*(int *)(iVar6 + 0x994) != 0) {
          iVar10 = *(int *)(*(int *)(iVar6 + 0x994) + 8);
        }
        *(undefined2 *)(iVar10 + iVar4 * 2) = 0xffff;
        iVar10 = iVar8;
        if (*(int *)(iVar6 + 0x9a8) != 0) {
          iVar10 = *(int *)(*(int *)(iVar6 + 0x9a8) + 8);
        }
        *(undefined4 *)(iVar10 + iVar4 * 4) = 0;
        if (*(int *)(iVar6 + 0x9bc) != 0) {
          iVar8 = *(int *)(*(int *)(iVar6 + 0x9bc) + 8);
        }
        *(undefined4 *)(iVar8 + iVar4 * 4) = 0;
        return;
      }
      return;
    }
  }
  else if (iVar4 != -1) goto LAB_4a0d85dc;
  uVar12 = FUN_4a16c074(auStack_44,iVar10);
  iVar4 = FUN_4a16ff5c(0xffffffff,uVar12,0);
  FUN_4a16c1a0(auStack_44);
  switchD_4a11cc8c::default(iVar4 != -1,s_no_room_in_persistant_object_dat_4a0d8634);
LAB_4a0d85dc:
  if (*(int *)(iVar6 + 0x994) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(*(int *)(iVar6 + 0x994) + 8);
  }
  *(ushort *)(iVar10 + iVar4 * 2) = uVar1;
  if (*(int *)(iVar6 + 0x9a8) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(*(int *)(iVar6 + 0x9a8) + 8);
  }
  *(uint *)(iVar10 + iVar4 * 4) = uVar11;
  if (*(int *)(iVar6 + 0x9bc) != 0) {
    iVar8 = *(int *)(*(int *)(iVar6 + 0x9bc) + 8);
  }
  *(undefined4 *)(iVar8 + iVar4 * 4) = *(undefined4 *)(iVar6 + 0x78c);
  return;
}



// Address: 4a10a1c8

/* WARNING: Removing unreachable block (ram,0x4a10a1e0) */

int FUN_4a10a1c8(undefined4 *param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar1 = PTR_PTR_4a10a3b4;
  *param_1 = *(undefined4 *)PTR_PTR_4a10a3b4;
  iVar2 = FUN_4a0c6bc0(param_1 + 0x2d);
  iVar3 = *(int *)puVar1;
  *(int *)(iVar2 + -0xb4) = iVar3;
  *(undefined4 *)(iVar2 + -0xb4 + *(int *)(iVar3 + -0xc)) = *(undefined4 *)(puVar1 + 4);
  puVar1 = PTR_PTR_4a10a3b8;
  *(undefined **)(iVar2 + -0xac) = PTR_PTR_4a10a3b8;
  *(undefined **)(iVar2 + -0xa4) = puVar1 + 0x20;
  *(undefined **)(iVar2 + -0xa0) = puVar1 + 0x30;
  *(undefined **)(iVar2 + -0x9c) = puVar1 + 0x40;
  *(undefined **)(iVar2 + -0xa8) = puVar1 + 0x10;
  *(undefined **)(iVar2 + -0xb0) = puVar1 + -0x10;
  *(undefined **)(iVar2 + -0x98) = puVar1 + 0x50;
  *(undefined4 *)(iVar2 + -0x94) = param_2;
  uVar4 = FUN_4a0ff494();
  puVar7 = (undefined4 *)0x0;
  *(undefined4 *)(iVar2 + -0x90) = uVar4;
  *(undefined4 *)(iVar2 + -0x8c) = 0;
  *(undefined4 *)(iVar2 + -0x88) = 0;
  *(undefined4 *)(iVar2 + -0x84) = 0;
  *(undefined4 *)(iVar2 + -0x80) = 0;
  *(undefined4 *)(iVar2 + -0x7c) = 0;
  *(undefined4 *)(iVar2 + -0x78) = 0;
  *(undefined4 *)(iVar2 + -0x74) = 0;
  *(undefined4 *)(iVar2 + -0x70) = 0;
  *(undefined4 *)(iVar2 + -0x6c) = 0;
  *(undefined4 *)(iVar2 + -0x68) = 0;
  *(undefined4 *)(iVar2 + -100) = 0;
  *(undefined1 *)(iVar2 + -0x60) = 0;
  *(undefined1 *)(iVar2 + -0x5f) = 0;
  *(undefined1 *)(iVar2 + -0x5e) = 0;
  *(undefined2 *)(iVar2 + -0x5c) = 0;
  *(undefined4 *)(iVar2 + -0x58) = 0;
  *(undefined4 *)(iVar2 + -0x54) = 0;
  *(undefined4 *)(iVar2 + -0x4c) = 0xffffffff;
  *(undefined4 *)(iVar2 + -0x50) = 0;
  *(undefined4 *)(iVar2 + -0x48) = 0;
  iVar2 = FUN_4a169e14(iVar2 + -0x44,0);
  piVar5 = (int *)FUN_4a0c6bc0(iVar2 + 0x14);
  puVar1 = PTR_PTR_4a10a3bc;
  piVar5[2] = 0;
  piVar5[3] = 0;
  *piVar5 = (int)puVar1;
  iVar2 = FUN_4a15e080(4);
  if (iVar2 == 0) {
    iVar2 = FUN_4a1669a8();
  }
  iVar3 = 0;
  do {
    *(undefined4 *)(iVar2 + iVar3 * 4) = 0;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 1);
  thunk_FUN_4a161570(0x18);
  puVar6 = (undefined4 *)FUN_4a0c0628();
  puVar1 = PTR_PTR_4a10a3c0;
  *puVar6 = PTR_PTR_4a10a3c0;
  puVar6[3] = 4;
  puVar6[4] = 1;
  puVar6[2] = iVar2;
  *(undefined1 *)(puVar6 + 5) = 1;
  if (puVar6 != (undefined4 *)0x0) {
    (**(code **)(puVar1 + 0xc))(puVar6);
  }
  (**(code **)(*piVar5 + 0x1c))(piVar5);
  piVar5[2] = 1;
  piVar5[3] = (int)puVar6;
  iVar2 = FUN_4a169e14(piVar5 + 5,0);
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  thunk_FUN_4a161570(0x10);
  uVar4 = FUN_4a060224();
  if (*(int *)(iVar2 + -8) != 0) {
    puVar7 = *(undefined4 **)(*(int *)(iVar2 + -8) + 8);
  }
  *puVar7 = uVar4;
  return iVar2 + -0x98;
}



// Address: 4a10a1d4

int FUN_4a10a1d4(int *param_1,int *param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  puVar1 = PTR_PTR_4a10a3b4;
  if (param_2 == (int *)0x0) {
    *param_1 = *(int *)PTR_PTR_4a10a3b4;
    iVar2 = FUN_4a0c6bc0(param_1 + 0x2d);
    param_1 = (int *)(iVar2 + -0xb4);
    param_2 = (int *)puVar1;
  }
  iVar2 = *param_2;
  *param_1 = iVar2;
  *(int *)((int)param_1 + *(int *)(iVar2 + -0xc)) = param_2[1];
  puVar1 = PTR_PTR_4a10a3b8;
  param_1[2] = (int)PTR_PTR_4a10a3b8;
  param_1[4] = (int)(puVar1 + 0x20);
  param_1[5] = (int)(puVar1 + 0x30);
  param_1[6] = (int)(puVar1 + 0x40);
  param_1[3] = (int)(puVar1 + 0x10);
  param_1[1] = (int)(puVar1 + -0x10);
  param_1[7] = (int)(puVar1 + 0x50);
  param_1[8] = param_3;
  iVar2 = FUN_4a0ff494();
  puVar7 = (undefined4 *)0x0;
  param_1[9] = iVar2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((int)param_1 + 0x55) = 0;
  *(undefined1 *)((int)param_1 + 0x56) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = -1;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  iVar2 = FUN_4a169e14(param_1 + 0x1c,0);
  piVar3 = (int *)FUN_4a0c6bc0(iVar2 + 0x14);
  puVar1 = PTR_PTR_4a10a3bc;
  piVar3[2] = 0;
  piVar3[3] = 0;
  *piVar3 = (int)puVar1;
  iVar2 = FUN_4a15e080(4);
  if (iVar2 == 0) {
    iVar2 = FUN_4a1669a8();
  }
  iVar6 = 0;
  do {
    *(undefined4 *)(iVar2 + iVar6 * 4) = 0;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 1);
  thunk_FUN_4a161570(0x18);
  puVar4 = (undefined4 *)FUN_4a0c0628();
  puVar1 = PTR_PTR_4a10a3c0;
  *puVar4 = PTR_PTR_4a10a3c0;
  puVar4[3] = 4;
  puVar4[4] = 1;
  puVar4[2] = iVar2;
  *(undefined1 *)(puVar4 + 5) = 1;
  if (puVar4 != (undefined4 *)0x0) {
    (**(code **)(puVar1 + 0xc))(puVar4);
  }
  (**(code **)(*piVar3 + 0x1c))(piVar3);
  piVar3[2] = 1;
  piVar3[3] = (int)puVar4;
  iVar2 = FUN_4a169e14(piVar3 + 5,0);
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  thunk_FUN_4a161570(0x10);
  uVar5 = FUN_4a060224();
  if (*(int *)(iVar2 + -8) != 0) {
    puVar7 = *(undefined4 **)(*(int *)(iVar2 + -8) + 8);
  }
  *puVar7 = uVar5;
  return iVar2 + -0x98;
}



// Address: 4a10a3f0

/* WARNING: Removing unreachable block (ram,0x4a10a404) */
/* WARNING: Removing unreachable block (ram,0x4a10a5a0) */

int FUN_4a10a3f0(int *param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  iVar2 = *param_2;
  *param_1 = iVar2;
  *(int *)((int)param_1 + *(int *)(iVar2 + -0xc)) = param_2[1];
  puVar1 = PTR_PTR_4a10a5b8;
  param_1[2] = (int)PTR_PTR_4a10a5b8;
  param_1[4] = (int)(puVar1 + 0x20);
  param_1[5] = (int)(puVar1 + 0x30);
  param_1[6] = (int)(puVar1 + 0x40);
  param_1[3] = (int)(puVar1 + 0x10);
  param_1[1] = (int)(puVar1 + -0x10);
  param_1[7] = (int)(puVar1 + 0x50);
  FUN_4a106848(param_1);
  uVar6 = param_1[0x23] - 1;
  if (-1 < (int)uVar6) {
    do {
      iVar2 = param_1[0x24];
      if (iVar2 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar2 + 8);
      }
      if (*(int *)(iVar3 + uVar6 * 4) != 0) {
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(iVar2 + 8);
        }
        thunk_FUN_4a161530(*(undefined4 *)(iVar2 + uVar6 * 4));
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 < 0x80000000);
  }
  puVar1 = PTR_PTR_4a10a5bc;
  piVar7 = param_1 + 0x26;
  *piVar7 = (int)PTR_PTR_4a10a5bc;
  iVar3 = param_1[0x28];
  iVar2 = FUN_4a0bcc84(piVar7);
  if (iVar2 != 0) {
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
      if (iVar2 == 0) goto LAB_4a10a4f4;
    }
    FUN_4a14f21c();
  }
LAB_4a10a4f4:
  iVar2 = FUN_4a0c6bf4(piVar7);
  puVar8 = (undefined4 *)(iVar2 + -0x14);
  *puVar8 = PTR_PTR_4a10a5c0;
  iVar3 = *(int *)(iVar2 + -0xc);
  iVar2 = FUN_4a0bcc84(puVar8);
  if (iVar2 != 0) {
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
      if (iVar2 == 0) goto LAB_4a10a540;
    }
    FUN_4a14f21c();
  }
LAB_4a10a540:
  iVar2 = FUN_4a0c6bf4(puVar8);
  *(undefined **)(iVar2 + -0x14) = puVar1;
  iVar4 = *(int *)(iVar2 + -0xc);
  iVar3 = FUN_4a0bcc84(iVar2 + -0x14);
  if (iVar3 != 0) {
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
      if (iVar3 == 0) goto LAB_4a10a588;
    }
    FUN_4a14f21c();
  }
LAB_4a10a588:
  iVar2 = FUN_4a0c6bf4(iVar2 + -0x14);
  return iVar2 + -0x70;
}



// Address: 4a10a3fc

int FUN_4a10a3fc(int *param_1,int param_2,int *param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  if (param_2 != 0) {
    param_3 = (int *)PTR_PTR_4a10a5b4;
  }
  iVar2 = *param_3;
  *param_1 = iVar2;
  *(int *)((int)param_1 + *(int *)(iVar2 + -0xc)) = param_3[1];
  puVar1 = PTR_PTR_4a10a5b8;
  param_1[2] = (int)PTR_PTR_4a10a5b8;
  param_1[4] = (int)(puVar1 + 0x20);
  param_1[5] = (int)(puVar1 + 0x30);
  param_1[6] = (int)(puVar1 + 0x40);
  param_1[3] = (int)(puVar1 + 0x10);
  param_1[1] = (int)(puVar1 + -0x10);
  param_1[7] = (int)(puVar1 + 0x50);
  FUN_4a106848(param_1);
  uVar6 = param_1[0x23] - 1;
  if (-1 < (int)uVar6) {
    do {
      iVar2 = param_1[0x24];
      if (iVar2 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar2 + 8);
      }
      if (*(int *)(iVar3 + uVar6 * 4) != 0) {
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(iVar2 + 8);
        }
        thunk_FUN_4a161530(*(undefined4 *)(iVar2 + uVar6 * 4));
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 < 0x80000000);
  }
  puVar1 = PTR_PTR_4a10a5bc;
  piVar7 = param_1 + 0x26;
  *piVar7 = (int)PTR_PTR_4a10a5bc;
  iVar3 = param_1[0x28];
  iVar2 = FUN_4a0bcc84(piVar7);
  if (iVar2 != 0) {
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
      if (iVar2 == 0) goto LAB_4a10a4f4;
    }
    FUN_4a14f21c();
  }
LAB_4a10a4f4:
  iVar2 = FUN_4a0c6bf4(piVar7);
  puVar8 = (undefined4 *)(iVar2 + -0x14);
  *puVar8 = PTR_PTR_4a10a5c0;
  iVar3 = *(int *)(iVar2 + -0xc);
  iVar2 = FUN_4a0bcc84(puVar8);
  if (iVar2 != 0) {
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
      if (iVar2 == 0) goto LAB_4a10a540;
    }
    FUN_4a14f21c();
  }
LAB_4a10a540:
  iVar2 = FUN_4a0c6bf4(puVar8);
  *(undefined **)(iVar2 + -0x14) = puVar1;
  iVar4 = *(int *)(iVar2 + -0xc);
  iVar3 = FUN_4a0bcc84(iVar2 + -0x14);
  if (iVar3 != 0) {
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
      if (iVar3 == 0) goto LAB_4a10a588;
    }
    FUN_4a14f21c();
  }
LAB_4a10a588:
  iVar2 = FUN_4a0c6bf4(iVar2 + -0x14);
  if (param_2 == 0) {
    return iVar2 + -0x70;
  }
  iVar2 = FUN_4a0c6bf4(iVar2 + 0x44);
  return iVar2 + -0xb4;
}



// Address: 4a10a5c4

int FUN_4a10a5c4(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0x19) = 1;
  cVar1 = *(char *)(param_1 + 0x18);
  while (cVar1 != '\0') {
    FUN_4a0c74d4();
    cVar1 = *(char *)(param_1 + 0x18);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_4a0fe5f4();
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)((int)piVar2 + *(int *)(*piVar2 + -0xc));
    }
    if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 8))(piVar2), iVar3 != 0)) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  piVar2 = *(int **)(param_1 + 0x14);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x30))(piVar2,0);
    piVar2 = *(int **)(param_1 + 0x14);
    if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 8))(piVar2), iVar3 != 0)) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return param_1;
}



// Address: 4a10a6c4

int * FUN_4a10a6c4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  *(undefined1 *)(param_1 + 0x18) = 1;
  uVar1 = thunk_FUN_4a161570(0x38);
  piVar2 = (int *)FUN_4a0c8aa0(uVar1,param_2,0,param_3,0,0);
  piVar3 = piVar2;
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)(*(int *)(*piVar2 + -0xc) + (int)piVar2);
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
  }
  piVar4 = (int *)FUN_4a0c74dc(*(undefined4 *)(param_1 + 0x14));
  piVar3 = piVar4;
  if (piVar4 != (int *)0x0) {
    piVar3 = (int *)(*(int *)(*piVar4 + -0xc) + (int)piVar4);
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
  }
  FUN_4a0c8980(piVar2,*(undefined4 *)(param_1 + 0x14));
  while ((*(char *)(param_1 + 0x19) == '\0' && (iVar5 = FUN_4a13e734(piVar2), iVar5 == 0))) {
    FUN_4a0c74d4();
  }
  piVar3 = piVar4;
  if (*(char *)(param_1 + 0x19) != '\0') {
    piVar3 = (int *)0x0;
  }
  (**(code **)(**(int **)(param_1 + 0x14) + 0x30))(*(int **)(param_1 + 0x14),piVar3);
  if (piVar4 != (int *)0x0) {
    piVar4 = (int *)((int)piVar4 + *(int *)(*piVar4 + -0xc));
  }
  if ((piVar4 != (int *)0x0) && (iVar5 = (**(code **)(*piVar4 + 8))(piVar4), iVar5 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  piVar3 = (int *)FUN_4a13e734(piVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
  }
  if (piVar2 != (int *)0x0) {
    piVar2 = (int *)((int)piVar2 + *(int *)(*piVar2 + -0xc));
  }
  if ((piVar2 != (int *)0x0) && (iVar5 = (**(code **)(*piVar2 + 8))(piVar2), iVar5 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return piVar3;
}



// Address: 4a10a898

void FUN_4a10a898(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x10);
  piVar1 = (int *)thunk_FUN_4a0c6b08();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  piVar3 = *(int **)(param_1 + 0x14);
  if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 8))(piVar3), iVar2 != 0)) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  *(int **)(param_1 + 0x14) = piVar1;
  (**(code **)(*piVar4 + 100))(piVar4,1);
  (**(code **)(*piVar4 + 100))(piVar4,1);
  if (*(char *)(param_1 + 0xc) == '\0') {
    FUN_4a0fe7c0(piVar4);
    *(undefined1 *)(param_1 + 0xc) = 1;
    FUN_4a0fb794(piVar4);
  }
  iVar2 = FUN_4a0ff42c(piVar4);
  if (iVar2 != 0) {
    FUN_4a0fb4b0(piVar4);
    FUN_4a0fb794(piVar4);
  }
  iVar2 = FUN_4a0c74dc(*(undefined4 *)(param_1 + 0x14));
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a10a9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x14) + 0x30))(*(int **)(param_1 + 0x14),piVar4);
    return;
  }
  return;
}



// Address: 4a10aaa0

void FUN_4a10aaa0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = PTR_PTR_4a10ab84;
  if (param_1[4] != 0) {
    FUN_4a0fe5f4();
    piVar1 = (int *)param_1[4];
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)((int)piVar1 + *(int *)(*piVar1 + -0xc));
    }
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 8))(piVar1), iVar2 != 0)) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    param_1[4] = 0;
  }
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x30))(piVar1,0);
    piVar1 = (int *)param_1[5];
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 8))(piVar1), iVar2 != 0)) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    param_1[5] = 0;
  }
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a10ab88

void FUN_4a10ab88(int param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_60 [8];
  undefined4 local_58;
  int *local_54;
  undefined1 auStack_4c [8];
  undefined4 local_44;
  int *local_40;
  undefined1 auStack_38 [8];
  undefined4 local_30;
  int *local_2c;
  int *local_24;
  
  *(undefined2 *)(param_1 + 4) = 0xffff;
  *(undefined2 *)(param_1 + 6) = param_3;
  uVar3 = FUN_4a0bf920(param_2);
  *(undefined1 *)(param_1 + 8) = uVar3;
  uVar3 = FUN_4a0bf920(param_2);
  *(undefined1 *)(param_1 + 9) = uVar3;
  uVar5 = FUN_4a0f0e84(param_2);
  *(undefined4 *)(param_1 + 0xc) = uVar5;
  uVar4 = FUN_4a0f0e84(param_2);
  *(undefined2 *)(param_1 + 0x10) = uVar4;
  uVar5 = FUN_4a0bf62c(param_2);
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  uVar4 = FUN_4a0bfbdc(param_2);
  *(undefined2 *)(param_1 + 0x18) = uVar4;
  uVar4 = FUN_4a0bfbdc(param_2);
  *(undefined2 *)(param_1 + 0x1a) = uVar4;
  uVar4 = FUN_4a0bfbdc(param_2);
  *(undefined2 *)(param_1 + 0x1c) = uVar4;
  uVar3 = FUN_4a0bf920(param_2);
  *(undefined1 *)(param_1 + 0x1e) = uVar3;
  uVar3 = FUN_4a0bf920(param_2);
  *(undefined1 *)(param_1 + 0x1f) = uVar3;
  uVar4 = FUN_4a0f0e84(param_2);
  *(undefined2 *)(param_1 + 0x20) = uVar4;
  local_24 = (int *)0x0;
  piVar9 = *(int **)(param_1 + 0x24);
  if (piVar9 != (int *)0x0) {
    iVar6 = (**(code **)(*piVar9 + 8))(piVar9);
    if (iVar6 != 0) {
      (**(code **)(*piVar9 + 4))(piVar9);
    }
    *(int **)(param_1 + 0x24) = local_24;
  }
  piVar9 = local_24;
  if ((local_24 != (int *)0x0) && (iVar6 = (**(code **)(*local_24 + 8))(local_24), iVar6 != 0)) {
    (**(code **)(*piVar9 + 4))(piVar9);
  }
  iVar6 = FUN_4a0bf920(param_2);
  FUN_4a16b5f8(auStack_38,iVar6);
  FUN_4a16b5f8(auStack_4c,iVar6);
  iVar10 = 0;
  iVar11 = 1;
  if (1 < iVar6 + 1) {
    do {
      uVar3 = FUN_4a0bf920(param_2);
      if (local_2c == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = local_2c[2];
      }
      *(undefined1 *)(iVar8 + iVar10) = uVar3;
      uVar3 = FUN_4a0bf920(param_2);
      iVar11 = iVar11 + 1;
      if (local_40 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = local_40[2];
      }
      *(undefined1 *)(iVar8 + iVar10) = uVar3;
      iVar10 = iVar10 + 1;
    } while (iVar11 < iVar6 + 1);
  }
  iVar6 = FUN_4a0bf920(param_2);
  piVar9 = (int *)FUN_4a0c6bc0(auStack_60);
  puVar2 = PTR_PTR_4a10af2c;
  piVar9[2] = 0;
  piVar9[3] = 0;
  *piVar9 = (int)puVar2;
  if (0 < iVar6) {
    iVar10 = FUN_4a15e080(iVar6 << 1);
    if (iVar10 == 0) {
      iVar10 = FUN_4a1669a8();
    }
    iVar11 = 0;
    do {
      iVar8 = iVar11 * 2;
      iVar11 = iVar11 + 1;
      *(undefined2 *)(iVar10 + iVar8) = 0;
    } while (iVar11 < iVar6);
    thunk_FUN_4a161570(0x18);
    puVar7 = (undefined4 *)FUN_4a0c0628();
    puVar7[3] = 2;
    puVar7[4] = iVar6;
    puVar2 = PTR_PTR_4a10af30;
    *puVar7 = PTR_PTR_4a10af30;
    puVar7[2] = iVar10;
    *(undefined1 *)(puVar7 + 5) = 1;
    if (puVar7 != (undefined4 *)0x0) {
      (**(code **)(puVar2 + 0xc))(puVar7);
    }
    (**(code **)(*piVar9 + 0x1c))(piVar9);
    piVar9[2] = iVar6;
    piVar9[3] = (int)puVar7;
  }
  iVar11 = 0;
  iVar10 = 1;
  if (1 < iVar6 + 1) {
    do {
      uVar4 = FUN_4a0bfbdc(param_2);
      iVar10 = iVar10 + 1;
      if (local_54 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = local_54[2];
      }
      iVar1 = iVar11 * 2;
      iVar11 = iVar11 + 1;
      *(undefined2 *)(iVar8 + iVar1) = uVar4;
    } while (iVar10 < iVar6 + 1);
  }
  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 0xc))(local_2c);
  }
  (**(code **)(*(int *)(param_1 + 0x28) + 0x1c))((int *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x30) = local_30;
  *(int **)(param_1 + 0x34) = local_2c;
  if (local_40 != (int *)0x0) {
    (**(code **)(*local_40 + 0xc))(local_40);
  }
  (**(code **)(*(int *)(param_1 + 0x3c) + 0x1c))((int *)(param_1 + 0x3c));
  *(undefined4 *)(param_1 + 0x44) = local_44;
  *(int **)(param_1 + 0x48) = local_40;
  if (local_54 != (int *)0x0) {
    (**(code **)(*local_54 + 0xc))(local_54);
  }
  (**(code **)(*(int *)(param_1 + 0x50) + 0x1c))((int *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x58) = local_58;
  *(int **)(param_1 + 0x5c) = local_54;
  FUN_4a16c1a0(auStack_60);
  FUN_4a16b6c0(auStack_4c);
  FUN_4a16b6c0(auStack_38);
  return;
}



// Address: 4a10af34

undefined4 FUN_4a10af34(undefined4 param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_2c [12];
  int local_20;
  
  iVar2 = FUN_4a0bf920();
  FUN_4a16b5f8(auStack_2c,iVar2);
  iVar6 = 0;
  iVar5 = 1;
  if (1 < iVar2 + 1) {
    do {
      uVar1 = FUN_4a0bf920(param_1);
      iVar5 = iVar5 + 1;
      if (local_20 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(local_20 + 8);
      }
      *(undefined1 *)(iVar4 + iVar6) = uVar1;
      iVar6 = iVar6 + 1;
    } while (iVar5 < iVar2 + 1);
  }
  uVar3 = thunk_FUN_4a161570(0x14);
  uVar3 = FUN_4a0c7184(uVar3,auStack_2c);
  FUN_4a16b6c0(auStack_2c);
  return uVar3;
}



// Address: 4a10afc4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a10afc4(int param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4,int param_5,
                 undefined4 param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined1 uVar3;
  short sVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_80 [12];
  int local_74;
  undefined4 local_70;
  undefined1 auStack_6c [8];
  undefined4 local_64;
  int *local_60;
  undefined1 auStack_58 [8];
  undefined4 local_50;
  int *local_4c;
  undefined1 auStack_44 [8];
  undefined4 local_3c;
  int *local_38;
  undefined1 auStack_30 [12];
  int *local_24;
  
  *(undefined2 *)(param_1 + 4) = param_3;
  *(undefined2 *)(param_1 + 6) = param_4;
  uVar3 = FUN_4a0bf920(param_2);
  *(undefined1 *)(param_1 + 8) = uVar3;
  uVar3 = FUN_4a0bf920(param_2);
  *(undefined1 *)(param_1 + 9) = uVar3;
  uVar6 = FUN_4a0bfbdc(param_2);
  *(uint *)(param_1 + 0xc) = uVar6 | param_5 << 0xb;
  sVar4 = FUN_4a0bfbdc(param_2);
  *(short *)(param_1 + 0x10) = sVar4 + 0xb;
  uVar7 = FUN_4a0bf62c(param_2);
  *(undefined4 *)(param_1 + 0x14) = uVar7;
  uVar5 = FUN_4a0bfbdc(param_2);
  *(undefined2 *)(param_1 + 0x18) = uVar5;
  uVar5 = FUN_4a0bfbdc(param_2);
  *(undefined2 *)(param_1 + 0x1a) = uVar5;
  uVar5 = FUN_4a0bfbdc(param_2);
  *(undefined2 *)(param_1 + 0x1c) = uVar5;
  uVar3 = FUN_4a0bf920(param_2);
  *(undefined1 *)(param_1 + 0x1e) = uVar3;
  uVar3 = FUN_4a0bf920(param_2);
  *(undefined1 *)(param_1 + 0x1f) = uVar3;
  *(undefined2 *)(param_1 + 0x20) = 0xffff;
  iVar8 = FUN_4a0bf920(param_2);
  FUN_4a16b5f8(auStack_80,iVar8);
  iVar13 = 0;
  iVar12 = 1;
  if (1 < iVar8 + 1) {
    do {
      uVar3 = FUN_4a0bf920(param_2);
      iVar12 = iVar12 + 1;
      if (local_74 == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = *(int *)(local_74 + 8);
      }
      *(undefined1 *)(iVar11 + iVar13) = uVar3;
      iVar13 = iVar13 + 1;
    } while (iVar12 < iVar8 + 1);
  }
  uVar7 = thunk_FUN_4a161570(0x14);
  piVar9 = (int *)FUN_4a0c7184(uVar7,auStack_80);
  FUN_4a16b6c0(auStack_80);
  local_24 = piVar9;
  if (piVar9 != (int *)0x0) {
    (**(code **)(*piVar9 + 0xc))();
  }
  FUN_4a0bed04(auStack_30,param_6);
  FUN_4a0bec10(auStack_30,*PTR_DAT_4a10b468);
  FUN_4a0bebec(auStack_30,&local_24);
  piVar14 = (int *)(param_1 + 0x24);
  piVar9 = (int *)FUN_4a13cff4(auStack_30);
  if ((int *)*piVar14 != piVar9) {
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 0xc))(piVar9);
    }
    piVar15 = (int *)*piVar14;
    if ((piVar15 != (int *)0x0) && (iVar8 = (**(code **)(*piVar15 + 8))(piVar15), iVar8 != 0)) {
      (**(code **)(*piVar15 + 4))(piVar15);
    }
    *piVar14 = (int)piVar9;
  }
  iVar8 = FUN_4a0bf920(param_2);
  FUN_4a16b5f8(auStack_44,iVar8);
  FUN_4a16b5f8(auStack_58,iVar8);
  iVar12 = 0;
  iVar13 = 1;
  if (1 < iVar8 + 1) {
    do {
      uVar3 = FUN_4a0bf920(param_2);
      if (local_38 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_38[2];
      }
      *(undefined1 *)(iVar11 + iVar12) = uVar3;
      uVar3 = FUN_4a0bf920(param_2);
      iVar13 = iVar13 + 1;
      if (local_4c == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_4c[2];
      }
      *(undefined1 *)(iVar11 + iVar12) = uVar3;
      iVar12 = iVar12 + 1;
    } while (iVar13 < iVar8 + 1);
  }
  iVar8 = FUN_4a0bf920(param_2);
  piVar9 = (int *)FUN_4a0c6bc0(auStack_6c);
  puVar2 = PTR_PTR_4a10b46c;
  piVar9[2] = 0;
  piVar9[3] = 0;
  *piVar9 = (int)puVar2;
  if (0 < iVar8) {
    iVar12 = FUN_4a15e080(iVar8 << 1);
    if (iVar12 == 0) {
      iVar12 = FUN_4a1669a8();
    }
    iVar13 = 0;
    do {
      iVar11 = iVar13 * 2;
      iVar13 = iVar13 + 1;
      local_70 = 0;
      *(undefined2 *)(iVar12 + iVar11) = 0;
    } while (iVar13 < iVar8);
    thunk_FUN_4a161570(0x18);
    puVar10 = (undefined4 *)FUN_4a0c0628();
    puVar10[3] = 2;
    puVar10[4] = iVar8;
    puVar2 = PTR_PTR_4a10b470;
    *puVar10 = PTR_PTR_4a10b470;
    puVar10[2] = iVar12;
    *(undefined1 *)(puVar10 + 5) = 1;
    if (puVar10 != (undefined4 *)0x0) {
      (**(code **)(puVar2 + 0xc))(puVar10);
    }
    (**(code **)(*piVar9 + 0x1c))(piVar9);
    piVar9[2] = iVar8;
    piVar9[3] = (int)puVar10;
  }
  iVar13 = 0;
  iVar12 = 1;
  if (1 < iVar8 + 1) {
    do {
      uVar5 = FUN_4a0bfbdc(param_2);
      iVar12 = iVar12 + 1;
      if (local_60 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_60[2];
      }
      iVar1 = iVar13 * 2;
      iVar13 = iVar13 + 1;
      *(undefined2 *)(iVar11 + iVar1) = uVar5;
    } while (iVar12 < iVar8 + 1);
  }
  if (local_38 != (int *)0x0) {
    (**(code **)(*local_38 + 0xc))(local_38);
  }
  (**(code **)(*(int *)(param_1 + 0x28) + 0x1c))((int *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x30) = local_3c;
  *(int **)(param_1 + 0x34) = local_38;
  if (local_4c != (int *)0x0) {
    (**(code **)(*local_4c + 0xc))(local_4c);
  }
  (**(code **)(*(int *)(param_1 + 0x3c) + 0x1c))((int *)(param_1 + 0x3c));
  *(undefined4 *)(param_1 + 0x44) = local_50;
  *(int **)(param_1 + 0x48) = local_4c;
  if (local_60 != (int *)0x0) {
    (**(code **)(*local_60 + 0xc))(local_60);
  }
  (**(code **)(*(int *)(param_1 + 0x50) + 0x1c))((int *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x58) = local_64;
  *(int **)(param_1 + 0x5c) = local_60;
  FUN_4a16c1a0(auStack_6c);
  FUN_4a16b6c0(auStack_58);
  FUN_4a16b6c0(auStack_44);
  FUN_4a0bee50(auStack_30);
  piVar9 = local_24;
  if (local_24 != (int *)0x0) {
    iVar8 = (**(code **)(*local_24 + 8))(local_24);
    if (iVar8 != 0) {
      (**(code **)(*piVar9 + 4))(piVar9);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a10b444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a10b474

undefined4 * FUN_4a10b474(undefined4 *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  *param_1 = PTR_PTR_4a10b5cc;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 4);
  *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)(param_2 + 6);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[3] = *(undefined4 *)(param_2 + 0xc);
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 0x10);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 0x18);
  *(undefined2 *)((int)param_1 + 0x1a) = *(undefined2 *)(param_2 + 0x1a);
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 0x1c);
  *(undefined1 *)((int)param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x1e);
  *(undefined1 *)((int)param_1 + 0x1f) = *(undefined1 *)(param_2 + 0x1f);
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 0x20);
  piVar3 = *(int **)(param_2 + 0x24);
  param_1[9] = piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
  }
  puVar4 = (undefined4 *)FUN_4a0c6bc0(param_1 + 10);
  puVar1 = PTR_PTR_4a10b5d0;
  *puVar4 = PTR_PTR_4a10b5d0;
  puVar4[2] = *(undefined4 *)(param_2 + 0x30);
  piVar3 = *(int **)(param_2 + 0x34);
  puVar4[3] = piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
  }
  puVar2 = PTR_PTR_4a10b5d4;
  *puVar4 = PTR_PTR_4a10b5d4;
  puVar4 = (undefined4 *)FUN_4a0c6bc0(puVar4 + 5);
  *puVar4 = puVar1;
  puVar4[2] = *(undefined4 *)(param_2 + 0x44);
  piVar3 = *(int **)(param_2 + 0x48);
  puVar4[3] = piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
  }
  *puVar4 = puVar2;
  puVar4 = (undefined4 *)FUN_4a0c6bc0(puVar4 + 5);
  *puVar4 = puVar1;
  puVar4[2] = *(undefined4 *)(param_2 + 0x58);
  piVar3 = *(int **)(param_2 + 0x5c);
  puVar4[3] = piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
  }
  *puVar4 = PTR_PTR_4a10b5d8;
  return puVar4 + -0x14;
}



// Address: 4a10b5dc

int FUN_4a10b5dc(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = PTR_PTR_4a10b658;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  *(undefined2 *)((int)param_1 + 6) = 0xffff;
  *(undefined1 *)(param_1 + 2) = 0xff;
  *(undefined1 *)((int)param_1 + 9) = 0xff;
  param_1[3] = 0xffffffff;
  *(undefined2 *)(param_1 + 4) = 0xffff;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x1a) = 0xffff;
  *(undefined2 *)(param_1 + 7) = 0xffff;
  *(undefined1 *)((int)param_1 + 0x1e) = 0xff;
  *(undefined1 *)((int)param_1 + 0x1f) = 0xff;
  *(undefined2 *)(param_1 + 8) = 0xffff;
  param_1[9] = 0;
  iVar1 = FUN_4a16b5f8(param_1 + 10,0);
  iVar1 = FUN_4a16b5f8(iVar1 + 0x14,0);
  iVar1 = FUN_4a16c0cc(iVar1 + 0x14,0);
  return iVar1 + -0x50;
}



// Address: 4a10b6d4

int FUN_4a10b6d4(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  *param_1 = PTR_PTR_4a10b740;
  iVar1 = FUN_4a16c1a0(param_1 + 0x14);
  iVar1 = FUN_4a16b6c0(iVar1 + -0x14);
  iVar1 = FUN_4a16b6c0(iVar1 + -0x14);
  piVar3 = *(int **)(iVar1 + -4);
  if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 8))(piVar3), iVar2 != 0)) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  return iVar1 + -0x28;
}



// Address: 4a10b760

void FUN_4a10b760(int param_1,int param_2)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  undefined1 auStack_ec [16];
  undefined4 local_dc;
  undefined1 auStack_d8 [8];
  int local_d0;
  int local_cc;
  undefined1 auStack_c4 [8];
  int local_bc;
  int local_b8;
  undefined1 auStack_b0 [12];
  int local_a4;
  undefined4 local_9c;
  int *local_98;
  int *local_94;
  int *local_90;
  int *local_8c;
  int *local_88;
  int *local_84;
  int *local_80;
  undefined *local_7c [2];
  int *local_74;
  undefined *local_68 [2];
  int local_60;
  undefined1 auStack_54 [20];
  undefined1 auStack_40 [20];
  undefined *local_2c;
  undefined *local_28;
  
  uVar3 = FUN_4a077b38();
  local_80 = (int *)FUN_4a082464(uVar3,0x2c,1);
  uVar3 = FUN_4a077b38();
  local_84 = (int *)FUN_4a082464(uVar3,0x2b,1);
  uVar3 = FUN_4a077b38();
  local_88 = (int *)FUN_4a082464(uVar3,0x2f,1);
  uVar3 = FUN_4a077b38();
  local_8c = (int *)FUN_4a082464(uVar3,0x2e,1);
  uVar3 = FUN_4a077b38();
  local_90 = (int *)FUN_4a082464(uVar3,0x1b,1);
  uVar3 = FUN_4a077b38();
  local_94 = (int *)FUN_4a082464(uVar3,0x1a,1);
  uVar3 = FUN_4a077b38();
  local_98 = (int *)FUN_4a082464(uVar3,0x2d,1);
  local_9c = FUN_4a165910(*(undefined4 *)(*(int *)(param_1 + 0x940) + 0x30));
  FUN_4a0b74b0(local_9c,0x1004);
  uVar3 = FUN_4a16588c();
  FUN_4a0b4608(uVar3,0);
  FUN_4a0b74b0(local_9c,0x1005);
  uVar3 = FUN_4a16588c();
  FUN_4a0b4608(uVar3,0);
  FUN_4a0b74b0(local_9c,0x1006);
  uVar3 = FUN_4a16588c();
  FUN_4a0b4608(uVar3,0);
  FUN_4a0b74b0(local_9c,0x1007);
  uVar3 = FUN_4a16588c();
  FUN_4a0b4608(uVar3,0);
  FUN_4a0b74b0(local_9c,0x1008);
  uVar3 = FUN_4a16588c();
  FUN_4a0b4608(uVar3,0);
  FUN_4a0b74b0(local_9c,0x1009);
  uVar3 = FUN_4a16588c();
  FUN_4a0b4608(uVar3,0);
  FUN_4a0b74b0(local_9c,0x100a);
  uVar3 = FUN_4a16588c();
  FUN_4a0b4608(uVar3,0);
  FUN_4a0b74b0(local_9c,0x100b);
  uVar3 = FUN_4a16588c();
  FUN_4a0b4608(uVar3,0);
  FUN_4a0b74b0(local_9c,0x100c);
  uVar3 = FUN_4a16588c();
  FUN_4a0b4608(uVar3,0);
  FUN_4a0b74b0(local_9c,0x100d);
  uVar3 = FUN_4a16588c();
  FUN_4a0b4608(uVar3,0);
  FUN_4a0b74b0(local_9c,0x100e);
  uVar3 = FUN_4a16588c();
  FUN_4a0b4608(uVar3,0);
  FUN_4a0b74b0(local_9c,0x100f);
  uVar3 = FUN_4a16588c();
  FUN_4a0b4608(uVar3,0);
  FUN_4a0b74b0(local_9c,0x1010);
  uVar3 = FUN_4a16588c();
  FUN_4a0b4608(uVar3,0);
  FUN_4a0b74b0(local_9c,0x1011);
  uVar3 = FUN_4a16588c();
  FUN_4a0b4608(uVar3,0);
  if (*(int *)(param_1 + 0x8fc) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x8fc) + 8);
  }
  FUN_4a16bdcc(auStack_b0,iVar4 + param_2 * 0x14);
  if (*(int *)(param_1 + 0x910) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x910) + 8);
  }
  FUN_4a16bdcc(auStack_c4,iVar4 + param_2 * 0x14);
  if (*(int *)(param_1 + 0x924) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x924) + 8);
  }
  FUN_4a16bdcc(auStack_d8,iVar4 + param_2 * 0x14);
  *(int *)(param_1 + 0x9ec) = local_bc + 3;
  iVar4 = FUN_4a16be24(auStack_40);
  uVar3 = *(undefined4 *)(iVar4 + 8);
  piVar10 = *(int **)(iVar4 + 0xc);
  if (piVar10 != (int *)0x0) {
    (**(code **)(*piVar10 + 0xc))(piVar10);
  }
  (**(code **)(*(int *)(param_1 + 0x974) + 0x1c))((int *)(param_1 + 0x974));
  *(undefined4 *)(param_1 + 0x97c) = uVar3;
  *(int **)(param_1 + 0x980) = piVar10;
  FUN_4a16bef4(auStack_40);
  iVar4 = FUN_4a16be24(auStack_40,*(undefined4 *)(param_1 + 0x9ec));
  uVar3 = *(undefined4 *)(iVar4 + 8);
  piVar10 = *(int **)(iVar4 + 0xc);
  if (piVar10 != (int *)0x0) {
    (**(code **)(*piVar10 + 0xc))(piVar10);
  }
  (**(code **)(*(int *)(param_1 + 0x988) + 0x1c))((int *)(param_1 + 0x988));
  *(undefined4 *)(param_1 + 0x990) = uVar3;
  *(int **)(param_1 + 0x994) = piVar10;
  FUN_4a16bef4(auStack_40);
  puVar1 = PTR_DAT_4a10ca60;
  iVar4 = 0;
  if (0 < local_bc) {
    do {
      if (local_b8 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(local_b8 + 8);
      }
      if (*(int *)(param_1 + 0x980) == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(*(int *)(param_1 + 0x980) + 8);
      }
      *(undefined4 *)(iVar9 + iVar4 * 4) = *(undefined4 *)(puVar1 + *(int *)(iVar8 + iVar4 * 4) * 4)
      ;
      if (*(int *)(param_1 + 0x994) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(*(int *)(param_1 + 0x994) + 8);
      }
      *(undefined4 *)(iVar8 + iVar4 * 4) = 2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_bc);
  }
  if (*(int *)(param_1 + 0x980) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x980) + 8);
  }
  *(undefined4 *)(iVar4 + local_bc * 4) = 1;
  if (*(int *)(param_1 + 0x994) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x994) + 8);
  }
  *(undefined4 *)(iVar4 + local_bc * 4) = 1;
  if (*(int *)(param_1 + 0x980) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x980) + 8);
  }
  *(undefined4 *)(iVar4 + (local_bc + 1) * 4) = 2;
  if (*(int *)(param_1 + 0x994) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x994) + 8);
  }
  *(undefined4 *)(iVar4 + (local_bc + 1) * 4) = 1;
  if (*(int *)(param_1 + 0x980) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x980) + 8);
  }
  *(undefined4 *)(iVar4 + (local_bc + 2) * 4) = 3;
  if (*(int *)(param_1 + 0x994) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x994) + 8);
  }
  *(undefined4 *)(iVar4 + (local_bc + 2) * 4) = 1;
  *(int *)(param_1 + 0x9f0) = local_bc;
  iVar4 = FUN_4a168d38(auStack_54,*(undefined4 *)(param_1 + 0x9ec));
  uVar3 = *(undefined4 *)(iVar4 + 8);
  piVar10 = *(int **)(iVar4 + 0xc);
  if (piVar10 != (int *)0x0) {
    (**(code **)(*piVar10 + 0xc))(piVar10);
  }
  (**(code **)(*(int *)(param_1 + 0x99c) + 0x1c))((int *)(param_1 + 0x99c));
  *(undefined4 *)(param_1 + 0x9a4) = uVar3;
  *(int **)(param_1 + 0x9a8) = piVar10;
  FUN_4a168e44(auStack_54);
  iVar4 = FUN_4a16acfc(local_68,*(undefined4 *)(param_1 + 0x9ec));
  uVar3 = *(undefined4 *)(iVar4 + 8);
  piVar10 = *(int **)(iVar4 + 0xc);
  if (piVar10 != (int *)0x0) {
    (**(code **)(*piVar10 + 0xc))(piVar10);
  }
  (**(code **)(*(int *)(param_1 + 0x9b0) + 0x1c))((int *)(param_1 + 0x9b0));
  iVar4 = local_60;
  *(undefined4 *)(param_1 + 0x9b8) = uVar3;
  *(int **)(param_1 + 0x9bc) = piVar10;
  puVar1 = PTR_PTR_4a10ca64;
  local_68[0] = PTR_PTR_4a10ca64;
  iVar8 = FUN_4a0bcc84(local_68);
  if (iVar8 != 0) {
    iVar9 = 0;
    if (0 < iVar4) {
      do {
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar4);
      if (iVar8 == 0) goto LAB_4a10bc9c;
    }
    FUN_4a14f21c(iVar8);
  }
LAB_4a10bc9c:
  FUN_4a0c6bf4(local_68);
  iVar4 = FUN_4a16be24(auStack_40,*(undefined4 *)(param_1 + 0x9ec));
  uVar3 = *(undefined4 *)(iVar4 + 8);
  piVar10 = *(int **)(iVar4 + 0xc);
  if (piVar10 != (int *)0x0) {
    (**(code **)(*piVar10 + 0xc))(piVar10);
  }
  (**(code **)(*(int *)(param_1 + 0x9c4) + 0x1c))((int *)(param_1 + 0x9c4));
  *(undefined4 *)(param_1 + 0x9cc) = uVar3;
  *(int **)(param_1 + 0x9d0) = piVar10;
  FUN_4a16bef4(auStack_40);
  iVar4 = FUN_4a16acfc(local_68,*(undefined4 *)(param_1 + 0x9ec));
  uVar3 = *(undefined4 *)(iVar4 + 8);
  piVar10 = *(int **)(iVar4 + 0xc);
  if (piVar10 != (int *)0x0) {
    (**(code **)(*piVar10 + 0xc))(piVar10);
  }
  (**(code **)(*(int *)(param_1 + 0x9d8) + 0x1c))((int *)(param_1 + 0x9d8));
  *(undefined4 *)(param_1 + 0x9e0) = uVar3;
  *(int **)(param_1 + 0x9e4) = piVar10;
  local_68[0] = puVar1;
  iVar4 = FUN_4a0bcc84(local_68);
  if (iVar4 != 0) {
    iVar8 = 0;
    if (0 < local_60) {
      do {
        iVar8 = iVar8 + 1;
      } while (iVar8 < local_60);
      if (iVar4 == 0) goto LAB_4a10bd98;
    }
    FUN_4a14f21c(iVar4);
  }
LAB_4a10bd98:
  FUN_4a0c6bf4(local_68);
  iVar4 = *(int *)(param_1 + 0x9f0);
  piVar10 = (int *)FUN_4a0c6bc0(local_7c);
  local_28 = PTR_PTR_4a10ca68;
  piVar10[2] = 0;
  piVar10[3] = 0;
  *piVar10 = (int)local_28;
  local_2c = PTR_PTR_4a10ca6c;
  if (0 < iVar4) {
    iVar8 = FUN_4a15e080(iVar4 << 2);
    if (iVar8 == 0) {
      iVar8 = FUN_4a1669a8();
    }
    iVar9 = 0;
    do {
      local_dc = 0;
      *(undefined4 *)(iVar8 + iVar9 * 4) = 0;
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar4);
    thunk_FUN_4a161570(0x18);
    puVar5 = (undefined4 *)FUN_4a0c0628();
    puVar5[3] = 4;
    puVar5[4] = iVar4;
    *puVar5 = local_2c;
    puVar5[2] = iVar8;
    *(undefined1 *)(puVar5 + 5) = 1;
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)(local_2c + 0xc))(puVar5);
    }
    (**(code **)(*piVar10 + 0x1c))(piVar10);
    piVar10[2] = iVar4;
    piVar10[3] = (int)puVar5;
  }
  piVar11 = piVar10 + 2;
  iVar4 = *piVar11;
  piVar10 = (int *)piVar10[3];
  if (piVar10 != (int *)0x0) {
    (**(code **)(*piVar10 + 0xc))(piVar10);
  }
  (**(code **)(*(int *)(param_1 + 0x958) + 0x1c))((int *)(param_1 + 0x958));
  piVar2 = local_74;
  *(int *)(param_1 + 0x960) = iVar4;
  *(int **)(param_1 + 0x964) = piVar10;
  local_7c[0] = local_28;
  iVar4 = FUN_4a0bcc84(local_7c);
  if (iVar4 != 0) {
    iVar8 = 0;
    if (0 < (int)piVar2) {
      do {
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)piVar2);
      if (iVar4 == 0) goto LAB_4a10bef4;
    }
    FUN_4a14f21c(iVar4);
  }
LAB_4a10bef4:
  FUN_4a0c6bf4(local_7c);
  iVar4 = 0;
  if (0 < local_bc) {
    do {
      if (local_a4 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(local_a4 + 8);
      }
      uVar3 = *(undefined4 *)(PTR_DAT_4a10ca60 + *(int *)(iVar8 + iVar4 * 4) * 4);
      if (local_b8 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(local_b8 + 8);
      }
      iVar8 = *(int *)(PTR_DAT_4a10ca60 + *(int *)(iVar8 + iVar4 * 4) * 4);
      FUN_4a0b74b0(local_9c,uVar3);
      uVar6 = FUN_4a165910();
      if (*(int *)(param_1 + 0x9d0) == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(*(int *)(param_1 + 0x9d0) + 8);
      }
      *(undefined4 *)(iVar9 + iVar4 * 4) = uVar3;
      if (*(int *)(param_1 + 0x9e4) == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(*(int *)(param_1 + 0x9e4) + 8);
      }
      *(undefined4 *)(iVar9 + iVar4 * 4) = uVar6;
      piVar10 = local_88;
      if (((iVar8 != 1) && (piVar10 = local_80, iVar8 != 2)) && (piVar10 = piVar11, iVar8 == 3)) {
        piVar10 = local_90;
      }
      uVar7 = FUN_4a0b75a8(piVar10);
      if (*(int *)(param_1 + 0x9bc) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(*(int *)(param_1 + 0x9bc) + 8);
      }
      *(undefined4 *)(iVar8 + iVar4 * 4) = uVar7;
      if (*(int *)(param_1 + 0x9bc) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(*(int *)(param_1 + 0x9bc) + 8);
      }
      piVar10 = *(int **)(iVar8 + iVar4 * 4);
      if (piVar10 != (int *)0x0) {
        (**(code **)(*piVar10 + 0xc))();
      }
      if (*(int *)(param_1 + 0x9bc) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(*(int *)(param_1 + 0x9bc) + 8);
      }
      FUN_4a0b4c10(uVar6,*(undefined4 *)(iVar8 + iVar4 * 4));
      if (*(int *)(param_1 + 0x9a8) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(*(int *)(param_1 + 0x9a8) + 8);
      }
      piVar10 = (int *)(iVar8 + iVar4 * 0x14);
      iVar8 = FUN_4a16be24(auStack_ec,2);
      iVar9 = *(int *)(iVar8 + 8);
      piVar11 = *(int **)(iVar8 + 0xc);
      if (piVar11 != (int *)0x0) {
        (**(code **)(*piVar11 + 0xc))(piVar11);
      }
      (**(code **)(*piVar10 + 0x1c))(piVar10);
      piVar10[3] = (int)piVar11;
      piVar10[2] = iVar9;
      FUN_4a16bef4(auStack_ec);
      if (*(int *)(param_1 + 0x9a8) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(*(int *)(param_1 + 0x9a8) + 8);
      }
      uVar7 = FUN_4a16bdcc(auStack_ec,iVar8 + iVar4 * 0x14);
      FUN_4a111c50(param_1,uVar7,uVar3);
      FUN_4a16bef4(auStack_ec);
      uVar3 = thunk_FUN_4a161570(0x2c);
      uVar3 = FUN_4a06fa68(uVar3,*(int *)(param_1 + 0x20) + 0x1f8);
      if (*(int *)(param_1 + 0x964) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(*(int *)(param_1 + 0x964) + 8);
      }
      *(undefined4 *)(iVar8 + iVar4 * 4) = uVar3;
      uVar3 = FUN_4a0b75a8(local_98);
      if (*(int *)(param_1 + 0x964) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(*(int *)(param_1 + 0x964) + 8);
      }
      FUN_4a06f8f0(*(undefined4 *)(iVar8 + iVar4 * 4),uVar3);
      if (*(int *)(param_1 + 0x964) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(*(int *)(param_1 + 0x964) + 8);
      }
      FUN_4a06f95c(*(undefined4 *)(iVar8 + iVar4 * 4),0xed,0x14);
      if (*(int *)(param_1 + 0x964) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(*(int *)(param_1 + 0x964) + 8);
      }
      FUN_4a0b4c10(uVar6,*(undefined4 *)(*(int *)(iVar8 + iVar4 * 4) + 0x28));
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_bc);
  }
  FUN_4a0b74b0(local_9c,0xfa8);
  uVar3 = FUN_4a165910();
  uVar6 = FUN_4a0b75a8(local_8c);
  if (*(int *)(param_1 + 0x9bc) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x9bc) + 8);
  }
  *(undefined4 *)(iVar4 + local_bc * 4) = uVar6;
  if (*(int *)(param_1 + 0x9bc) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x9bc) + 8);
  }
  piVar10 = *(int **)(iVar4 + local_bc * 4);
  if (piVar10 != (int *)0x0) {
    (**(code **)(*piVar10 + 0xc))();
  }
  if (*(int *)(param_1 + 0x9d0) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x9d0) + 8);
  }
  *(undefined4 *)(iVar4 + local_bc * 4) = 0xfa8;
  if (*(int *)(param_1 + 0x9e4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x9e4) + 8);
  }
  *(undefined4 *)(iVar4 + local_bc * 4) = uVar3;
  if (*(int *)(param_1 + 0x9bc) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x9bc) + 8);
  }
  FUN_4a0b4c10(uVar3,*(undefined4 *)(iVar4 + local_bc * 4));
  if (*(int *)(param_1 + 0x9a8) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x9a8) + 8);
  }
  piVar10 = (int *)(iVar4 + local_bc * 0x14);
  iVar4 = FUN_4a16be24(auStack_ec,2);
  iVar8 = *(int *)(iVar4 + 8);
  piVar11 = *(int **)(iVar4 + 0xc);
  if (piVar11 != (int *)0x0) {
    (**(code **)(*piVar11 + 0xc))(piVar11);
  }
  (**(code **)(*piVar10 + 0x1c))(piVar10);
  piVar10[2] = iVar8;
  piVar10[3] = (int)piVar11;
  FUN_4a16bef4(auStack_ec);
  if (*(int *)(param_1 + 0x9a8) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x9a8) + 8);
  }
  uVar3 = FUN_4a16bdcc(auStack_ec,iVar4 + local_bc * 0x14);
  FUN_4a111c50(param_1,uVar3,0xfa8);
  FUN_4a16bef4(auStack_ec);
  FUN_4a0b74b0(local_9c,0xfa9);
  uVar3 = FUN_4a165910();
  uVar6 = FUN_4a0b75a8(local_84);
  if (*(int *)(param_1 + 0x9bc) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x9bc) + 8);
  }
  *(undefined4 *)(iVar4 + (local_bc + 1) * 4) = uVar6;
  if (*(int *)(param_1 + 0x9bc) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x9bc) + 8);
  }
  piVar10 = *(int **)(iVar4 + (local_bc + 1) * 4);
  if (piVar10 != (int *)0x0) {
    (**(code **)(*piVar10 + 0xc))();
  }
  if (*(int *)(param_1 + 0x9d0) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x9d0) + 8);
  }
  *(undefined4 *)(iVar4 + (local_bc + 1) * 4) = 0xfa9;
  if (*(int *)(param_1 + 0x9e4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x9e4) + 8);
  }
  *(undefined4 *)(iVar4 + (local_bc + 1) * 4) = uVar3;
  if (*(int *)(param_1 + 0x9bc) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x9bc) + 8);
  }
  FUN_4a0b4c10(uVar3,*(undefined4 *)(iVar4 + (local_bc + 1) * 4));
  if (*(int *)(param_1 + 0x9a8) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x9a8) + 8);
  }
  piVar10 = (int *)(iVar4 + (local_bc + 1) * 0x14);
  iVar4 = FUN_4a16be24(auStack_ec,2);
  iVar8 = *(int *)(iVar4 + 8);
  piVar11 = *(int **)(iVar4 + 0xc);
  if (piVar11 != (int *)0x0) {
    (**(code **)(*piVar11 + 0xc))(piVar11);
  }
  (**(code **)(*piVar10 + 0x1c))(piVar10);
  piVar10[2] = iVar8;
  piVar10[3] = (int)piVar11;
  FUN_4a16bef4(auStack_ec);
  if (*(int *)(param_1 + 0x9a8) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x9a8) + 8);
  }
  uVar3 = FUN_4a16bdcc(auStack_ec,iVar4 + (local_bc + 1) * 0x14);
  FUN_4a111c50(param_1,uVar3,0xfa9);
  FUN_4a16bef4(auStack_ec);
  FUN_4a0b74b0(local_9c,0xfaa);
  uVar3 = FUN_4a165910();
  uVar6 = FUN_4a0b75a8(local_94);
  if (*(int *)(param_1 + 0x9bc) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x9bc) + 8);
  }
  *(undefined4 *)(iVar4 + (local_bc + 2) * 4) = uVar6;
  if (*(int *)(param_1 + 0x9bc) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x9bc) + 8);
  }
  piVar10 = *(int **)(iVar4 + (local_bc + 2) * 4);
  if (piVar10 != (int *)0x0) {
    (**(code **)(*piVar10 + 0xc))();
  }
  if (*(int *)(param_1 + 0x9d0) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x9d0) + 8);
  }
  *(undefined4 *)(iVar4 + (local_bc + 2) * 4) = 0xfaa;
  if (*(int *)(param_1 + 0x9e4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x9e4) + 8);
  }
  *(undefined4 *)(iVar4 + (local_bc + 2) * 4) = uVar3;
  if (*(int *)(param_1 + 0x9bc) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x9bc) + 8);
  }
  FUN_4a0b4c10(uVar3,*(undefined4 *)(iVar4 + (local_bc + 2) * 4));
  if (*(int *)(param_1 + 0x9a8) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x9a8) + 8);
  }
  piVar10 = (int *)(iVar4 + (local_bc + 2) * 0x14);
  iVar4 = FUN_4a16be24(auStack_ec,2);
  iVar8 = *(int *)(iVar4 + 8);
  piVar11 = *(int **)(iVar4 + 0xc);
  if (piVar11 != (int *)0x0) {
    (**(code **)(*piVar11 + 0xc))(piVar11);
  }
  (**(code **)(*piVar10 + 0x1c))(piVar10);
  piVar10[2] = iVar8;
  piVar10[3] = (int)piVar11;
  FUN_4a16bef4(auStack_ec);
  if (*(int *)(param_1 + 0x9a8) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x9a8) + 8);
  }
  uVar3 = FUN_4a16bdcc(auStack_ec,iVar4 + (local_bc + 2) * 0x14);
  FUN_4a111c50(param_1,uVar3,0xfaa);
  FUN_4a16bef4(auStack_ec);
  piVar10 = (int *)FUN_4a0c6bc0(local_7c);
  piVar10[2] = 0;
  piVar10[3] = 0;
  *piVar10 = (int)local_28;
  if (0 < local_d0) {
    iVar4 = FUN_4a15e080(local_d0 << 2);
    if (iVar4 == 0) {
      iVar4 = FUN_4a1669a8();
    }
    iVar8 = 0;
    do {
      local_dc = 0;
      *(undefined4 *)(iVar4 + iVar8 * 4) = 0;
      iVar8 = iVar8 + 1;
    } while (iVar8 < local_d0);
    thunk_FUN_4a161570(0x18);
    puVar5 = (undefined4 *)FUN_4a0c0628();
    puVar5[3] = 4;
    puVar5[4] = local_d0;
    *puVar5 = local_2c;
    puVar5[2] = iVar4;
    *(undefined1 *)(puVar5 + 5) = 1;
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)(local_2c + 0xc))(puVar5);
    }
    (**(code **)(*piVar10 + 0x1c))(piVar10);
    piVar10[2] = local_d0;
    piVar10[3] = (int)puVar5;
  }
  iVar4 = piVar10[2];
  piVar10 = (int *)piVar10[3];
  if (piVar10 != (int *)0x0) {
    (**(code **)(*piVar10 + 0xc))(piVar10);
  }
  (**(code **)(*(int *)(param_1 + 0x944) + 0x1c))((int *)(param_1 + 0x944));
  *(int *)(param_1 + 0x94c) = iVar4;
  *(int **)(param_1 + 0x950) = piVar10;
  local_7c[0] = local_28;
  iVar4 = FUN_4a0bcc84(local_7c);
  if (iVar4 != 0) {
    iVar8 = 0;
    if (0 < (int)local_74) {
      do {
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)local_74);
      if (iVar4 == 0) goto LAB_4a10c684;
    }
    FUN_4a14f21c(iVar4);
  }
LAB_4a10c684:
  FUN_4a0c6bf4(local_7c);
  puVar1 = PTR_DAT_4a10ca60;
  iVar4 = 0;
  piVar10 = local_74;
  if (0 < local_d0) {
    do {
      if (local_cc == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(local_cc + 8);
      }
      uVar6 = *(undefined4 *)(puVar1 + *(int *)(iVar8 + iVar4 * 4) * 4);
      FUN_4a0b74b0(local_9c,uVar6);
      uVar3 = FUN_4a16588c();
      FUN_4a0b4608(uVar3,1);
      switch(uVar6) {
      case 0x1004:
        piVar10 = (int *)0x1d;
        break;
      case 0x1005:
        piVar10 = (int *)&LAB_0000001e;
        break;
      case 0x1006:
        piVar10 = (int *)0x1f;
        break;
      case 0x1007:
        piVar10 = (int *)&DAT_00000020;
        break;
      case 0x1008:
        piVar10 = (int *)0x21;
        break;
      case 0x1009:
        piVar10 = (int *)0x22;
        break;
      case 0x100a:
        piVar10 = (int *)&DAT_00000023;
        break;
      case 0x100b:
        piVar10 = (int *)&DAT_00000024;
        break;
      case 0x100c:
        piVar10 = (int *)&DAT_00000025;
        break;
      case 0x100d:
        piVar10 = (int *)0x26;
        break;
      case 0x100e:
        piVar10 = (int *)0x27;
        break;
      case 0x100f:
        piVar10 = (int *)&DAT_00000028;
        break;
      case 0x1010:
        piVar10 = (int *)0x29;
        break;
      case 0x1011:
        piVar10 = (int *)0x2a;
      }
      uVar3 = FUN_4a077b38();
      piVar10 = (int *)FUN_4a082464(uVar3,piVar10,1);
      uVar3 = FUN_4a165910();
      iVar8 = *(int *)(param_1 + 0x28);
      FUN_4a0af1d4(uVar3,*(undefined4 *)(iVar8 + 0x470),*(undefined4 *)(iVar8 + 0x474),
                   *(undefined4 *)(iVar8 + 0x478));
      FUN_4a0b4608(uVar3,0);
      FUN_4a0efadc(*(undefined4 *)(param_1 + 0x28),uVar3);
      uVar6 = thunk_FUN_4a161570(0x2c);
      uVar6 = FUN_4a06fa68(uVar6,*(int *)(param_1 + 0x20) + 0x1f8);
      if (*(int *)(param_1 + 0x950) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(*(int *)(param_1 + 0x950) + 8);
      }
      *(undefined4 *)(iVar8 + iVar4 * 4) = uVar6;
      if (*(int *)(param_1 + 0x950) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(*(int *)(param_1 + 0x950) + 8);
      }
      FUN_4a06f8f0(*(undefined4 *)(iVar8 + iVar4 * 4),uVar3);
      if ((piVar10 != (int *)0x0) && (iVar8 = (**(code **)(*piVar10 + 8))(piVar10), iVar8 != 0)) {
        (**(code **)(*piVar10 + 4))(piVar10);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_d0);
  }
  if ((local_80 != (int *)0x0) && (iVar4 = (**(code **)(*local_80 + 8))(local_80), iVar4 != 0)) {
    (**(code **)(*local_80 + 4))(local_80);
  }
  if ((local_84 != (int *)0x0) && (iVar4 = (**(code **)(*local_84 + 8))(local_84), iVar4 != 0)) {
    (**(code **)(*local_84 + 4))(local_84);
  }
  if ((local_88 != (int *)0x0) && (iVar4 = (**(code **)(*local_88 + 8))(local_88), iVar4 != 0)) {
    (**(code **)(*local_88 + 4))(local_88);
  }
  if ((local_8c != (int *)0x0) && (iVar4 = (**(code **)(*local_8c + 8))(local_8c), iVar4 != 0)) {
    (**(code **)(*local_8c + 4))(local_8c);
  }
  if ((local_90 != (int *)0x0) && (iVar4 = (**(code **)(*local_90 + 8))(local_90), iVar4 != 0)) {
    (**(code **)(*local_90 + 4))(local_90);
  }
  if ((local_94 != (int *)0x0) && (iVar4 = (**(code **)(*local_94 + 8))(local_94), iVar4 != 0)) {
    (**(code **)(*local_94 + 4))(local_94);
  }
  if ((local_98 != (int *)0x0) && (iVar4 = (**(code **)(*local_98 + 8))(local_98), iVar4 != 0)) {
    (**(code **)(*local_98 + 4))(local_98);
  }
  FUN_4a16bef4(auStack_d8);
  FUN_4a16bef4(auStack_c4);
  FUN_4a16bef4(auStack_b0);
  return;
}



// Address: 4a10ca70

void FUN_4a10ca70(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_30 [20];
  
  if (*(char *)(param_2 + 0x630) != '\0') {
    *(undefined1 *)(param_2 + 0x630) = 0;
    iVar5 = 0;
    if (0 < *(int *)(param_2 + 0x5d8)) {
      do {
        if (*(int *)(param_2 + 0x5dc) == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(*(int *)(param_2 + 0x5dc) + 8);
        }
        piVar2 = *(int **)(iVar1 + iVar5 * 4);
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)0x0;
        }
        else {
          piVar2 = (int *)(*(int *)(*piVar2 + -0xc) + (int)piVar2);
        }
        if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
          (**(code **)(*piVar2 + 4))(piVar2);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_2 + 0x5d8));
    }
    if (*(int *)(param_2 + 0x5dc) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_2 + 0x5dc) + 8);
    }
    if ((iVar5 == 0) || (*(int *)(param_2 + 0x610) != *(int *)(param_2 + 0x5d8))) {
      iVar5 = FUN_4a16a524(auStack_30,*(undefined4 *)(param_2 + 0x610));
      uVar6 = *(undefined4 *)(iVar5 + 8);
      piVar2 = *(int **)(iVar5 + 0xc);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xc))(piVar2);
      }
      (**(code **)(*(int *)(param_2 + 0x5d0) + 0x1c))((int *)(param_2 + 0x5d0));
      *(undefined4 *)(param_2 + 0x5d8) = uVar6;
      *(int **)(param_2 + 0x5dc) = piVar2;
      FUN_4a16a5f4(auStack_30);
    }
    iVar5 = *(int *)(param_2 + 0x610);
    if (*(int *)(param_2 + 0x5d8) < *(int *)(param_2 + 0x610)) {
      iVar5 = *(int *)(param_2 + 0x5d8);
    }
    iVar1 = 0;
    if (0 < iVar5) {
      do {
        if (*(int *)(param_2 + 0x5dc) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(*(int *)(param_2 + 0x5dc) + 8);
        }
        *(undefined4 *)(iVar4 + iVar1 * 4) = *(undefined4 *)(*(int *)(param_2 + 0x614) + iVar1 * 4);
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar5);
    }
    iVar5 = 0;
    if (0 < *(int *)(param_2 + 0x5d8)) {
      do {
        if (*(int *)(param_2 + 0x5dc) == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(*(int *)(param_2 + 0x5dc) + 8);
        }
        piVar2 = *(int **)(iVar1 + iVar5 * 4);
        if (piVar2 != (int *)0x0) {
          piVar2 = (int *)((int)piVar2 + *(int *)(*piVar2 + -0xc));
        }
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0xc))();
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_2 + 0x5d8));
    }
  }
  puVar3 = (undefined4 *)FUN_4a0c6bc0(param_1);
  *puVar3 = PTR_PTR_4a10cc7c;
  puVar3[2] = *(undefined4 *)(param_2 + 0x5d8);
  piVar2 = *(int **)(param_2 + 0x5dc);
  puVar3[3] = piVar2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))();
  }
  *puVar3 = PTR_PTR_4a10cc80;
  return;
}



// Address: 4a10cc8c

undefined4 FUN_4a10cc8c(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x208) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x208) + 8);
  }
  iVar1 = *(int *)(iVar1 + param_2 * 0x14 + 0xc);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 8);
  }
  iVar1 = *(int *)(iVar1 + param_3 * 0x14 + 0xc);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 8);
  }
  iVar1 = FUN_4a0fe640(*(undefined4 *)(param_1 + 0x20),0,*(int *)(iVar1 + param_4 * 0x14 + 8) + -1);
  if (*(int *)(param_1 + 0x208) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x208) + 8);
  }
  iVar2 = *(int *)(iVar2 + param_2 * 0x14 + 0xc);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 8);
  }
  iVar2 = *(int *)(iVar2 + param_3 * 0x14 + 0xc);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 8);
  }
  iVar2 = *(int *)(iVar2 + param_4 * 0x14 + 0xc);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 8);
  }
  return *(undefined4 *)(iVar3 + iVar1 * 4);
}



// Address: 4a10cd48

undefined4 FUN_4a10cd48(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_38 [8];
  int local_30;
  int local_2c;
  
  uVar6 = *(undefined4 *)(param_1 + 0x28);
  iVar1 = FUN_4a144cb0(uVar6,param_3);
  iVar2 = FUN_4a144cb8(uVar6,param_4);
  FUN_4a10ca70(auStack_38,param_1);
  iVar4 = 0;
  if (0 < local_30) {
    do {
      if (local_2c == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(local_2c + 8);
      }
      iVar5 = *(int *)(iVar3 + iVar4 * 4);
      iVar3 = FUN_4a1460d4(iVar5);
      if (iVar3 == param_2) {
        iVar3 = FUN_4a144cb0(uVar6,*(undefined4 *)(iVar5 + 0x44));
        iVar5 = FUN_4a144cb8(uVar6,*(undefined4 *)(iVar5 + 0x4c));
        if (iVar3 == iVar1 && iVar5 == iVar2) {
          FUN_4a16a5f4(auStack_38);
          return 1;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_30);
  }
  FUN_4a16a5f4(auStack_38);
  return 0;
}



// Address: 4a10ce2c

/* WARNING: Removing unreachable block (ram,0x4a116204) */

void FUN_4a10ce2c(int param_1)

{
  *(undefined4 *)(param_1 + 0x290) = 1;
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



// Address: 4a10ce54

/* WARNING: Removing unreachable block (ram,0x4a116204) */

void FUN_4a10ce54(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x290) = 7;
  FUN_4a0cd7c0(param_1,param_2,0xb61);
  *(undefined4 *)(param_1 + 0x1c0) = 9;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined1 *)(param_1 + 0x1dc) = 1;
  host_s3eAccelerometerStop_arm();
                    /* WARNING: Could not recover jumptable at 0x4a116200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_caseD_0_4a11622c)();
  return;
}



// Address: 4a10ce84

void FUN_4a10ce84(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_4a10cedc;
  *(undefined4 *)PTR_DAT_4a10cedc = *(undefined4 *)PTR_DAT_4a10ced8;
  FUN_4a0ef16c(*(undefined4 *)(param_1 + 0x28));
  puVar2 = PTR_DAT_4a10cee0;
  FUN_4a0bbb28(*(undefined4 *)PTR_DAT_4a10cee0);
  *(undefined4 *)puVar1 = *(undefined4 *)PTR_DAT_4a10cee4;
  FUN_4a127ed0(param_1,param_2);
  iVar3 = *(int *)puVar2;
  *(undefined1 *)(*(int *)PTR_DAT_4a0bbce8 + 0xc) = 0;
  host_glMatrixMode_arm(0x1700);
  FUN_4a150724();
  *(undefined4 *)(iVar3 + 8) = 0x3f800000;
  return;
}



// Address: 4a10cee8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a10cee8(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  undefined4 uVar13;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar14;
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
  
  cVar1 = *(char *)(param_1 + 0x67c);
  bVar14 = cVar1 == '\0';
  if (bVar14) {
    cVar1 = *(char *)(param_1 + 0x210);
  }
  if (!bVar14 || cVar1 != '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x1c0) != 6 && *(int *)(param_1 + 0x1c0) != 0x15) {
    return;
  }
  iVar9 = *(int *)(param_1 + 0x24);
  if ((((*(int *)(param_1 + 0x294) == 0) ||
       (FUN_4a1113f4(param_1,param_2), *(char *)(param_1 + 0x210) == '\0')) &&
      (iVar3 = FUN_4a141aac(iVar9), iVar3 == 0)) && (iVar3 = FUN_4a110350(param_1), iVar3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x4a10cf78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (((*(int *)(param_1 + 0x1d8) == 0) && (0 < *(int *)(param_1 + 0x214))) &&
     (*(int *)(param_1 + 0x1c0) != 0x15)) {
    *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) - param_2;
  }
  if ((*(int *)(param_1 + 0x2a0) != -1) &&
     (iVar3 = *(int *)(param_1 + 0x2a8) + param_2, *(int *)(param_1 + 0x2a8) = iVar3, 2000 < iVar3))
  {
    if (*(int *)(param_1 + 0x2b0) < *(int *)(param_1 + 0x2ac)) {
      *(undefined4 *)(param_1 + 0x2a0) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x2a4) = 0xffffffff;
    }
    else {
      *(int *)(param_1 + 0x2ac) = *(int *)(param_1 + 0x2ac) + param_2 * 0xccc;
    }
  }
  *(int *)(param_1 + 0x218) = param_2;
  iVar4 = FUN_4a13fb88(iVar9);
  iVar3 = param_2;
  if (iVar4 != 0) {
    iVar3 = param_2 << 2;
  }
  iVar4 = FUN_4a077b38();
  iVar12 = 0;
  *(undefined1 *)(iVar4 + 0xd9) = 0;
  *(undefined1 *)(iVar4 + 0xd8) = 0;
  FUN_4a10ca70(auStack_2c,param_1);
  if (iStack_20 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iStack_20 + 8);
  }
  iVar2 = 0;
  if (iVar4 != 0) {
    iVar9 = 0;
    iVar2 = iStack_24;
  }
  if ((iVar4 != 0 && iVar2 != 0) && -1 < iVar2) {
    do {
      if (iStack_20 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iStack_20 + 8);
      }
      piVar5 = *(int **)(iVar4 + iVar9 * 4);
      (**(code **)(*piVar5 + 0x14))(piVar5,iVar3);
      iVar9 = iVar9 + 1;
    } while (iVar9 < iStack_24);
  }
  FUN_4a16d53c(param_1 + 0x618);
  FUN_4a16a5f4(auStack_2c);
  FUN_4a1100c8(param_1,param_2);
  (**(code **)(**(int **)(param_1 + 0x228) + 0x20))(*(int **)(param_1 + 0x228),param_2);
  if (*(int *)(param_1 + 0x294) != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a10d0cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  iVar9 = FUN_4a0ff408(*(undefined4 *)(param_1 + 0x20));
  if (iVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a10d0e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_4a111700(param_1,param_2);
  if (*(int *)(param_1 + 0x1d8) == 2) {
    FUN_4a11a86c(param_1,param_2);
  }
  else if (*(int *)(param_1 + 0x1d8) == 0) {
    FUN_4a118480();
  }
  else {
    FUN_4a11c2b4(param_1,param_2);
  }
  iVar9 = iVar12;
  if (*(int *)(param_1 + 0x75c) != 0) {
    iVar9 = *(int *)(*(int *)(param_1 + 0x75c) + 8);
  }
  if (iVar9 != 0) {
    iVar9 = *(int *)(param_1 + 0x764);
    puVar6 = (undefined4 *)FUN_4a0c6bc0(auStack_2c);
    *puVar6 = PTR_PTR_4a10d234;
    puVar6[2] = *(undefined4 *)(param_1 + 0x758);
    piVar5 = *(int **)(param_1 + 0x75c);
    puVar6[3] = piVar5;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))();
    }
    *puVar6 = PTR_PTR_4a10d238;
    iVar3 = *(int *)(param_1 + 0x74c) + param_2;
    *(int *)(param_1 + 0x74c) = iVar3;
    if (iVar9 < iVar3) {
      *(undefined4 *)(param_1 + 0x74c) = 0;
      iVar9 = FUN_4a0fe640(*(undefined4 *)(param_1 + 0x20),0,puVar6[2] + -1);
      if (puVar6[3] != 0) {
        iVar12 = *(int *)(puVar6[3] + 8);
      }
      FUN_4a086608(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x260),
                   (int)*(short *)(iVar12 + iVar9 * 2),0x3f800000);
    }
    FUN_4a16c1a0(auStack_2c);
  }
  uVar7 = *(uint *)(param_1 + 0x20);
  if (*(int *)(uVar7 + 0x38) == 0) {
    bVar14 = *(int *)(uVar7 + 0x44) != 0;
    cVar1 = '\0';
    if (bVar14) {
      cVar1 = *(char *)(uVar7 + 0x48);
    }
    if (!bVar14 || cVar1 == '\0') {
      bVar14 = *(int *)(uVar7 + 0x3c) == 0;
      if (!bVar14) {
        uVar7 = (uint)*(byte *)(uVar7 + 0x40);
      }
      if (bVar14 || uVar7 == 0) goto LAB_4a10d224;
    }
  }
  FUN_4a1137bc(param_1,param_2);
LAB_4a10d224:
  piVar11 = *(int **)(param_1 + 0x5f8);
  FUN_4a16bdcc(auStack_28,param_1 + 0x770);
  piVar10 = (int *)0x0;
  puVar6 = (undefined4 *)FUN_4a0c6bc0(auStack_3c);
  *puVar6 = PTR_PTR_4a1169c4;
  puVar6[2] = *(undefined4 *)(param_1 + 0x78c);
  piVar5 = *(int **)(param_1 + 0x790);
  puVar6[3] = piVar5;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))();
  }
  *puVar6 = PTR_PTR_4a1169c8;
  if (*(int *)(param_1 + 0x76c) < 1) {
    uVar7 = FUN_4a13fb44(*(undefined4 *)(param_1 + 0x24),piVar11[0x35]);
    if ((uVar7 & 0x80000) == 0) {
      if (iStack_1c == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = *(int **)(iStack_1c + 8);
      }
      *piVar5 = piVar11[0x35];
      if (iStack_30 != 0) {
        piVar10 = *(int **)(iStack_30 + 8);
      }
      *piVar10 = piVar11[0x38];
      *(undefined4 *)(param_1 + 0x76c) = 1;
    }
  }
  else {
    iVar9 = (**(code **)(*piVar11 + 0x10))(piVar11);
    if (iVar9 == 0) {
      iVar9 = piVar11[0x35];
      if (iStack_1c == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = *(int **)(iStack_1c + 8);
      }
      if ((*piVar5 != iVar9) &&
         (uVar7 = FUN_4a13fb44(*(undefined4 *)(param_1 + 0x24),iVar9), (uVar7 & 0x80000) == 0)) {
        if (iStack_1c == 0) {
          piVar5 = (int *)0x0;
        }
        else {
          piVar5 = *(int **)(iStack_1c + 8);
        }
        *piVar5 = iVar9;
        if (iStack_30 != 0) {
          piVar10 = *(int **)(iStack_30 + 8);
        }
        *piVar10 = piVar11[0x38];
      }
    }
    else {
      *(int *)(param_1 + 0x76c) = *(int *)(param_1 + 0x76c) + -1;
      iVar9 = 0;
      do {
        if (iStack_1c != 0) {
          iVar3 = *(int *)(iStack_1c + 8);
        }
        else {
          iVar3 = 0;
        }
        if (iStack_1c != 0) {
          iVar4 = *(int *)(iStack_1c + 8);
        }
        else {
          iVar4 = 0;
        }
        *(undefined4 *)(iVar4 + iVar9 * 4) = *(undefined4 *)(iVar3 + (iVar9 + 1) * 4);
        if (iStack_30 != 0) {
          iVar3 = *(int *)(iStack_30 + 8);
        }
        else {
          iVar3 = 0;
        }
        if (iStack_30 != 0) {
          iVar4 = *(int *)(iStack_30 + 8);
        }
        else {
          iVar4 = 0;
        }
        *(undefined4 *)(iVar4 + iVar9 * 4) = *(undefined4 *)(iVar3 + (iVar9 + 1) * 4);
        iVar3 = *(int *)(param_1 + 0x7a4);
        if (iVar3 != 0) {
          iVar4 = *(int *)(iVar3 + 8);
        }
        else {
          iVar4 = 0;
        }
        if (iVar3 != 0) {
          iVar3 = *(int *)(iVar3 + 8);
        }
        else {
          iVar3 = 0;
        }
        *(undefined4 *)(iVar3 + iVar9 * 4) = *(undefined4 *)(iVar4 + (iVar9 + 1) * 4);
        iVar3 = *(int *)(param_1 + 0x7b8);
        if (iVar3 != 0) {
          iVar4 = *(int *)(iVar3 + 8);
        }
        else {
          iVar4 = 0;
        }
        if (iVar3 != 0) {
          iVar3 = *(int *)(iVar3 + 8);
        }
        else {
          iVar3 = 0;
        }
        *(undefined4 *)(iVar3 + iVar9 * 4) = *(undefined4 *)(iVar4 + (iVar9 + 1) * 4);
        iVar9 = iVar9 + 1;
      } while (iVar9 < 2);
      if (iStack_30 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(iStack_30 + 8);
      }
      *(undefined4 *)(iVar9 + *(int *)(param_1 + 0x76c) * 4) = 0;
      if (0 < *(int *)(param_1 + 0x76c)) {
        iVar9 = *(int *)(param_1 + 0x5f8);
        if (iStack_1c == 0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = *(undefined4 **)(iStack_1c + 8);
        }
        if (iStack_30 == 0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          puVar8 = *(undefined4 **)(iStack_30 + 8);
        }
        uVar13 = *puVar8;
        if (*(int *)(param_1 + 0x7a4) == 0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          puVar8 = *(undefined4 **)(*(int *)(param_1 + 0x7a4) + 8);
        }
        FUN_4a0737a4(iVar9,*puVar6,uVar13,*puVar8);
        FUN_4a110aac(auStack_50,param_1);
        iVar3 = 0;
        if (0 < iStack_48) {
          do {
            if (iStack_44 == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = *(int *)(iStack_44 + 8);
            }
            iVar4 = *(int *)(iVar4 + iVar3 * 4);
            if (iVar4 != iVar9) {
              FUN_4a071d48(iVar4,uVar13);
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < iStack_48);
        }
        FUN_4a169a1c(auStack_50);
      }
    }
  }
  FUN_4a16a5f4(auStack_3c);
  FUN_4a16bef4(auStack_28);
  return;
}



// Address: 4a10d33c

void FUN_4a10d33c(int param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  undefined1 auStack_bc [20];
  undefined1 auStack_a8 [20];
  undefined1 auStack_94 [20];
  undefined *local_80 [2];
  int local_78;
  int *local_6c;
  int local_68;
  undefined4 local_64;
  undefined1 auStack_60 [12];
  int local_54;
  undefined *local_4c [2];
  int local_44;
  undefined *local_38;
  undefined *local_34;
  undefined *local_30;
  undefined *local_2c;
  undefined *local_28;
  
  uVar9 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x260);
  FUN_4a086318(uVar9,0x2a);
  FUN_4a086318(uVar9,0x2b);
  FUN_4a086318(uVar9,0x2c);
  FUN_4a086318(uVar9,0x2d);
  FUN_4a086318(uVar9,0x2f);
  FUN_4a086318(uVar9,0x31);
  FUN_4a086318(uVar9,0x2e);
  FUN_4a086318(uVar9,0x32);
  FUN_4a086318(uVar9,0x30);
  FUN_4a086318(uVar9,0x33);
  FUN_4a086318(uVar9,0x34);
  FUN_4a086318(uVar9,0x35);
  FUN_4a086318(uVar9,0x36);
  FUN_4a086318(uVar9,0x38);
  FUN_4a086318(uVar9,0x3a);
  FUN_4a086318(uVar9,0x37);
  FUN_4a086318(uVar9,0x3b);
  FUN_4a086318(uVar9,0x39);
  FUN_4a086318(uVar9,0x18);
  FUN_4a086318(uVar9,0x19);
  FUN_4a086318(uVar9,0x1a);
  FUN_4a086318(uVar9,0x1b);
  FUN_4a086318(uVar9,0x1d);
  FUN_4a086318(uVar9,0x1f);
  FUN_4a086318(uVar9,0x1c);
  FUN_4a086318(uVar9,0x20);
  FUN_4a086318(uVar9,0x1e);
  FUN_4a086318(uVar9,0x21);
  FUN_4a086318(uVar9,0x22);
  FUN_4a086318(uVar9,0x23);
  FUN_4a086318(uVar9,0x24);
  FUN_4a086318(uVar9,0x26);
  FUN_4a086318(uVar9,0x28);
  FUN_4a086318(uVar9,0x25);
  FUN_4a086318(uVar9,0x29);
  FUN_4a086318(uVar9,0x27);
  FUN_4a16be24(auStack_60,7);
  if (local_54 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(local_54 + 8);
  }
  *puVar2 = 1;
  if (local_54 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_54 + 8);
  }
  *(undefined4 *)(iVar3 + 4) = 3;
  if (local_54 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_54 + 8);
  }
  *(undefined4 *)(iVar3 + 8) = 1;
  if (local_54 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_54 + 8);
  }
  *(undefined4 *)(iVar3 + 0xc) = 1;
  if (local_54 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_54 + 8);
  }
  *(undefined4 *)(iVar3 + 0x10) = 1;
  if (local_54 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_54 + 8);
  }
  *(undefined4 *)(iVar3 + 0x14) = 1;
  if (local_54 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_54 + 8);
  }
  *(undefined4 *)(iVar3 + 0x18) = 1;
  local_6c = (int *)(param_1 + 0x1fc);
  piVar4 = (int *)FUN_4a0c6bc0(local_4c);
  local_2c = PTR_PTR_4a10e55c;
  local_28 = PTR_PTR_4a10e558;
  piVar4[2] = 0;
  piVar4[3] = 0;
  *piVar4 = (int)local_2c;
  iVar3 = FUN_4a15e080(0x8c);
  if (iVar3 == 0) {
    iVar3 = FUN_4a1669a8();
  }
  iVar12 = 0;
  local_30 = PTR_PTR_4a10e560;
  do {
    puVar2 = (undefined4 *)FUN_4a0c6bc0(local_80);
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = local_30;
    puVar5 = (undefined4 *)FUN_4a0c6bc0(iVar3 + iVar12 * 0x14);
    *puVar5 = local_28;
    puVar5[2] = puVar2[2];
    piVar6 = (int *)puVar2[3];
    puVar5[3] = piVar6;
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0xc))();
    }
    iVar11 = local_78;
    *puVar5 = local_30;
    local_80[0] = local_30;
    iVar7 = FUN_4a0bcc84(local_80);
    if (iVar7 != 0) {
      iVar10 = 0;
      if (0 < iVar11) {
        do {
          (*(code *)**(undefined4 **)(iVar7 + iVar10 * 0x14))();
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar11);
        if (iVar7 == 0) goto LAB_4a10d6cc;
      }
      FUN_4a14f21c(iVar7);
    }
LAB_4a10d6cc:
    FUN_4a0c6bf4(local_80);
    iVar12 = iVar12 + 1;
  } while (iVar12 < 7);
  thunk_FUN_4a161570(0x18);
  piVar6 = (int *)FUN_4a0c0628();
  puVar1 = PTR_PTR_4a10e564;
  local_34 = PTR_PTR_4a10e564;
  *piVar6 = (int)PTR_PTR_4a10e564;
  piVar6[4] = 7;
  piVar6[3] = 0x14;
  piVar6[2] = iVar3;
  *(undefined1 *)(piVar6 + 5) = 1;
  if (piVar6 != (int *)0x0) {
    (**(code **)(puVar1 + 0xc))(piVar6);
  }
  (**(code **)(*piVar4 + 0x1c))(piVar4);
  piVar4[2] = 7;
  piVar4[3] = (int)piVar6;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))(piVar6);
  }
  (**(code **)(*local_6c + 0x1c))(local_6c);
  local_6c[3] = (int)piVar6;
  local_6c[2] = 7;
  local_4c[0] = local_2c;
  iVar3 = FUN_4a0bcc84(local_4c);
  if (iVar3 != 0) {
    iVar12 = 0;
    if (0 < local_44) {
      do {
        (*(code *)**(undefined4 **)(iVar3 + iVar12 * 0x14))();
        iVar12 = iVar12 + 1;
      } while (iVar12 < local_44);
      if (iVar3 == 0) goto LAB_4a10d7e8;
    }
    FUN_4a14f21c(iVar3);
  }
LAB_4a10d7e8:
  FUN_4a0c6bf4(local_4c);
  local_38 = PTR_PTR_4a10e568;
  local_6c = (int *)0x0;
  do {
    piVar4 = local_6c;
    iVar3 = 0;
    if (local_54 != 0) {
      iVar3 = *(int *)(local_54 + 8);
    }
    local_64 = *(undefined4 *)(iVar3 + (int)local_6c * 4);
    iVar3 = 0;
    if (*(int *)(param_1 + 0x208) != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
    }
    piVar13 = (int *)(iVar3 + (int)local_6c * 0x14);
    piVar6 = (int *)FUN_4a0c6bc0(local_80);
    piVar6[2] = 0;
    piVar6[3] = 0;
    *piVar6 = (int)local_30;
    iVar3 = FUN_4a15e080(0x28);
    if (iVar3 == 0) {
      iVar3 = FUN_4a1669a8();
    }
    iVar12 = 0;
    do {
      puVar2 = (undefined4 *)FUN_4a0c6bc0(auStack_bc);
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = local_38;
      puVar5 = (undefined4 *)FUN_4a0c6bc0(iVar3 + iVar12 * 0x14);
      *puVar5 = local_28;
      puVar5[2] = puVar2[2];
      piVar8 = (int *)puVar2[3];
      puVar5[3] = piVar8;
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 0xc))();
      }
      *puVar5 = local_38;
      FUN_4a168e44(auStack_bc);
      iVar12 = iVar12 + 1;
    } while (iVar12 < 2);
    thunk_FUN_4a161570(0x18);
    piVar8 = (int *)FUN_4a0c0628();
    piVar8[3] = 0x14;
    piVar8[4] = 2;
    *piVar8 = (int)local_34;
    piVar8[2] = iVar3;
    *(undefined1 *)(piVar8 + 5) = 1;
    if (piVar8 != (int *)0x0) {
      (**(code **)(local_34 + 0xc))(piVar8);
    }
    (**(code **)(*piVar6 + 0x1c))(piVar6);
    piVar6[2] = 2;
    piVar6[3] = (int)piVar8;
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 0xc))(piVar8);
    }
    (**(code **)(*piVar13 + 0x1c))(piVar13);
    iVar3 = local_78;
    piVar13[2] = 2;
    piVar13[3] = (int)piVar8;
    local_80[0] = local_30;
    iVar12 = FUN_4a0bcc84(local_80);
    if (iVar12 != 0) {
      iVar11 = 0;
      if (0 < iVar3) {
        do {
          (*(code *)**(undefined4 **)(iVar12 + iVar11 * 0x14))();
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar3);
        if (iVar12 == 0) goto LAB_4a10d9e8;
      }
      FUN_4a14f21c(iVar12);
    }
LAB_4a10d9e8:
    FUN_4a0c6bf4(local_80);
    local_68 = 0;
    do {
      iVar3 = local_68;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      iVar12 = *(int *)(iVar12 + (int)piVar4 * 0x14 + 0xc);
      if (iVar12 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)(iVar12 + 8);
      }
      piVar6 = (int *)(iVar12 + local_68 * 0x14);
      iVar12 = FUN_4a168d38(auStack_94,2);
      iVar11 = *(int *)(iVar12 + 8);
      piVar13 = *(int **)(iVar12 + 0xc);
      if (piVar13 != (int *)0x0) {
        (**(code **)(*piVar13 + 0xc))(piVar13);
      }
      (**(code **)(*piVar6 + 0x1c))(piVar6);
      piVar6[2] = iVar11;
      piVar6[3] = (int)piVar13;
      FUN_4a168e44(auStack_94);
      iVar12 = 0;
      do {
        if (*(int *)(param_1 + 0x208) == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = *(int *)(*(int *)(param_1 + 0x208) + 8);
        }
        iVar11 = *(int *)(iVar11 + (int)piVar4 * 0x14 + 0xc);
        if (iVar11 == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = *(int *)(iVar11 + 8);
        }
        iVar11 = *(int *)(iVar11 + iVar3 * 0x14 + 0xc);
        if (iVar11 == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = *(int *)(iVar11 + 8);
        }
        piVar6 = (int *)(iVar11 + iVar12 * 0x14);
        iVar11 = FUN_4a16be24(auStack_a8,local_64);
        iVar7 = *(int *)(iVar11 + 8);
        piVar13 = *(int **)(iVar11 + 0xc);
        if (piVar13 != (int *)0x0) {
          (**(code **)(*piVar13 + 0xc))(piVar13);
        }
        (**(code **)(*piVar6 + 0x1c))(piVar6);
        piVar6[2] = iVar7;
        piVar6[3] = (int)piVar13;
        FUN_4a16bef4(auStack_a8);
        iVar12 = iVar12 + 1;
      } while (iVar12 < 2);
      local_68 = local_68 + 1;
    } while (local_68 < 2);
    local_6c = (int *)((int)local_6c + 1);
    if (6 < (int)local_6c) {
      iVar3 = 0;
      if (*(int *)(param_1 + 0x208) != 0) {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      puVar2 = (undefined4 *)0x0;
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = *(undefined4 **)(*(int *)(iVar3 + 0xc) + 8);
      }
      *puVar5 = 0x2a;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = *(undefined4 **)(*(int *)(iVar3 + 0x20) + 8);
      }
      *puVar5 = 0x18;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = *(undefined4 **)(*(int *)(iVar3 + 0xc) + 8);
      }
      *puVar5 = 0x33;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = *(undefined4 **)(*(int *)(iVar3 + 0x20) + 8);
      }
      *puVar5 = 0x21;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = *(undefined4 **)(*(int *)(iVar3 + 0xc) + 8);
      }
      *puVar5 = 0x2b;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + 8);
      }
      *(undefined4 *)(iVar3 + 4) = 0x2c;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + 8);
      }
      *(undefined4 *)(iVar3 + 8) = 0x2d;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = *(undefined4 **)(*(int *)(iVar3 + 0x20) + 8);
      }
      *puVar5 = 0x19;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      }
      *(undefined4 *)(iVar3 + 4) = 0x1a;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      }
      *(undefined4 *)(iVar3 + 8) = 0x1a;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = *(undefined4 **)(*(int *)(iVar3 + 0xc) + 8);
      }
      *puVar5 = 0x34;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + 8);
      }
      *(undefined4 *)(iVar3 + 4) = 0x35;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + 8);
      }
      *(undefined4 *)(iVar3 + 8) = 0x36;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = *(undefined4 **)(*(int *)(iVar3 + 0x20) + 8);
      }
      *puVar5 = 0x22;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      }
      *(undefined4 *)(iVar3 + 4) = 0x23;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      }
      *(undefined4 *)(iVar3 + 8) = 0x24;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0x34) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x34) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = *(undefined4 **)(*(int *)(iVar3 + 0xc) + 8);
      }
      *puVar5 = 0x2e;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0x34) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x34) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = *(undefined4 **)(*(int *)(iVar3 + 0x20) + 8);
      }
      *puVar5 = 0x1c;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0x34) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x34) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = *(undefined4 **)(*(int *)(iVar3 + 0xc) + 8);
      }
      *puVar5 = 0x37;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0x34) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x34) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = *(undefined4 **)(*(int *)(iVar3 + 0x20) + 8);
      }
      *puVar5 = 0x25;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0x48) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x48) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = *(undefined4 **)(*(int *)(iVar3 + 0xc) + 8);
      }
      *puVar5 = 0x2f;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0x48) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x48) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = *(undefined4 **)(*(int *)(iVar3 + 0x20) + 8);
      }
      *puVar5 = 0x1d;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0x48) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x48) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = *(undefined4 **)(*(int *)(iVar3 + 0xc) + 8);
      }
      *puVar5 = 0x38;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0x48) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x48) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = *(undefined4 **)(*(int *)(iVar3 + 0x20) + 8);
      }
      *puVar5 = 0x26;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0x5c) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = *(undefined4 **)(*(int *)(iVar3 + 0xc) + 8);
      }
      *puVar5 = 0x30;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0x5c) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = *(undefined4 **)(*(int *)(iVar3 + 0x20) + 8);
      }
      *puVar5 = 0x1e;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0x5c) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = *(undefined4 **)(*(int *)(iVar3 + 0xc) + 8);
      }
      *puVar5 = 0x39;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0x5c) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = *(undefined4 **)(*(int *)(iVar3 + 0x20) + 8);
      }
      *puVar5 = 0x27;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0x70) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x70) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = *(undefined4 **)(*(int *)(iVar3 + 0xc) + 8);
      }
      *puVar5 = 0x31;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0x70) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x70) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = *(undefined4 **)(*(int *)(iVar3 + 0x20) + 8);
      }
      *puVar5 = 0x1f;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0x70) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x70) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = *(undefined4 **)(*(int *)(iVar3 + 0xc) + 8);
      }
      *puVar5 = 0x3a;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0x70) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x70) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = *(undefined4 **)(*(int *)(iVar3 + 0x20) + 8);
      }
      *puVar5 = 0x28;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0x84) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x84) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = *(undefined4 **)(*(int *)(iVar3 + 0xc) + 8);
      }
      *puVar5 = 0x32;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0x84) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x84) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = *(undefined4 **)(*(int *)(iVar3 + 0x20) + 8);
      }
      *puVar5 = 0x20;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0x84) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x84) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = *(undefined4 **)(*(int *)(iVar3 + 0xc) + 8);
      }
      *puVar5 = 0x3b;
      if (*(int *)(param_1 + 0x208) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x208) + 8);
      }
      if (*(int *)(iVar3 + 0x84) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x84) + 8);
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
      }
      if (*(int *)(iVar3 + 0x20) != 0) {
        puVar2 = *(undefined4 **)(*(int *)(iVar3 + 0x20) + 8);
      }
      *puVar2 = 0x29;
      FUN_4a16bef4(auStack_60);
      return;
    }
  } while( true );
}



// Address: 4a10e58c

void FUN_4a10e58c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_30 [8];
  int local_28;
  int local_24;
  
  FUN_4a10ca70(auStack_30,param_1);
  iVar4 = 0;
  iVar3 = 0;
  if (local_28 < 1) {
LAB_4a10e638:
    iVar1 = iVar4;
    if (iVar4 == 0) {
      iVar4 = FUN_4a146a9c(param_2);
      if (iVar4 == 0) {
        FUN_4a07378c(param_2,6,0);
      }
      goto LAB_4a10e670;
    }
  }
  else {
    do {
      if (local_24 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(local_24 + 8);
      }
      iVar1 = *(int *)(iVar1 + iVar3 * 4);
      iVar2 = FUN_4a1460d4(iVar1);
      if (iVar2 == 6) {
        iVar2 = FUN_4a071490(param_2,iVar1);
        if (iVar2 != 0) break;
      }
      else {
        iVar2 = FUN_4a1460d4(iVar1);
        if ((iVar2 == 0xd) && (iVar2 = FUN_4a14621c(iVar1), iVar2 != 0)) {
          iVar4 = iVar1;
        }
      }
      iVar3 = iVar3 + 1;
      iVar1 = 0;
    } while (iVar3 < local_28);
    if (iVar1 == 0) goto LAB_4a10e638;
  }
  FUN_4a076ba0(param_2,iVar1);
LAB_4a10e670:
  FUN_4a16a5f4(auStack_30);
  return;
}



// Address: 4a10e684

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

void FUN_4a10e684(int param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar8 = *(undefined4 *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x7dc);
  if (iVar3 == 1) {
    FUN_4a10ce84(param_1,param_2);
  }
  else if ((iVar3 == 2 || iVar3 == 3) || iVar3 == 4) {
    FUN_4a10ce84(param_1,param_2);
    FUN_4a041910(1);
    uVar4 = FUN_4a13caa0(uVar8);
    uVar5 = FUN_4a13ca78(uVar8);
    FUN_4a0fb45c(uVar8,param_2,0x40,DAT_4a10e970,0,0,uVar5,uVar4);
    puVar2 = PTR_DAT_4a10e974;
    iVar3 = FUN_4a0bc1f8(*(undefined4 *)PTR_DAT_4a10e974);
    if ((iVar3 == 400) || (iVar3 = FUN_4a0bc1f8(*(undefined4 *)puVar2), iVar3 == 0x140)) {
      FUN_4a0bbb28(*(undefined4 *)puVar2);
    }
    switch(*(undefined4 *)(param_1 + 0x7e0)) {
    case 0:
      FUN_4a111afc(param_1,param_2,1);
      break;
    case 1:
      FUN_4a111afc(param_1,param_2,9);
      break;
    case 2:
      FUN_4a111afc(param_1,param_2,7);
      break;
    case 3:
      FUN_4a111afc(param_1,param_2,0x11);
      break;
    case 4:
      FUN_4a111afc(param_1,param_2,0xf);
      break;
    case 5:
      FUN_4a111afc(param_1,param_2,5);
      break;
    case 6:
      FUN_4a111afc(param_1,param_2,3);
      break;
    case 7:
      FUN_4a111afc(param_1,param_2,0xd);
      break;
    case 8:
      FUN_4a111afc(param_1,param_2,0xb);
    }
    iVar3 = FUN_4a0bc1f8(*(undefined4 *)puVar2);
    if ((iVar3 == 400) || (iVar3 = FUN_4a0bc1f8(*(undefined4 *)puVar2), iVar3 == 0x140)) {
      FUN_4a0bbcb4(*(undefined4 *)puVar2);
    }
    FUN_4a041910(0);
  }
  FUN_4a041910(1);
  if (*(int *)(param_1 + 0x7dc) == 2) {
    iVar3 = *(int *)(param_1 + 0x1c4) * 0xff;
    uVar4 = 0x1f20c;
    if (iVar3 < 0x1f20c) {
      lVar1 = (longlong)DAT_4a10e978 * (longlong)iVar3;
      uVar4 = (undefined4)lVar1;
      iVar3 = (int)((ulonglong)lVar1 >> 0x20);
      iVar3 = (iVar3 >> 5) - (iVar3 >> 0x1f);
    }
    else {
      iVar3 = 0xff;
    }
    uVar6 = 0xff - iVar3;
    uVar7 = uVar6 * 0x10000 | uVar6 * 0x100;
    uVar4 = FUN_4a13caa0(uVar8,uVar7,uVar4);
    uVar5 = FUN_4a13ca78(uVar8);
    FUN_4a0fb45c(uVar8,param_2,0x41,uVar6 | uVar7 | 0xff000000,0,0,uVar5,uVar4);
  }
  else if (*(int *)(param_1 + 0x7dc) == 4) {
    iVar3 = *(int *)(param_1 + 0x1c4) * 0xff;
    uVar4 = 0x3e418;
    if (iVar3 < 0x3e418) {
      lVar1 = (longlong)DAT_4a10e978 * (longlong)iVar3;
      uVar4 = (undefined4)lVar1;
      iVar3 = (int)((ulonglong)lVar1 >> 0x20);
      iVar3 = (iVar3 >> 6) - (iVar3 >> 0x1f);
    }
    else {
      iVar3 = 0xff;
    }
    uVar6 = 0xff - iVar3;
    uVar7 = uVar6 * 0x10000 | uVar6 * 0x100;
    uVar4 = FUN_4a13caa0(uVar8,uVar7,uVar4);
    uVar5 = FUN_4a13ca78(uVar8);
    FUN_4a0fb45c(uVar8,param_2,0x42,uVar6 | uVar7 | 0xff000000,0,0,uVar5,uVar4);
  }
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



// Address: 4a10e97c

void FUN_4a10e97c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x740) = param_4;
  *(undefined4 *)(param_1 + 0x73c) = param_3;
  *(undefined4 *)(param_1 + 0x738) = param_2;
  iVar1 = FUN_4a140338(*(undefined4 *)(param_1 + 0x24));
  iVar2 = FUN_4a143130(*(undefined4 *)(param_1 + 0x28),param_2);
  if (iVar1 == *(char *)(iVar2 + 0x18)) {
    param_5 = 0xaff;
  }
  *(undefined4 *)(param_1 + 0x744) = param_5;
  return;
}



// Address: 4a10e9c8

/* WARNING: Removing unreachable block (ram,0x4a116204) */

void FUN_4a10e9c8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined1 *)(param_1 + 0x6f0) = 0;
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  uVar1 = FUN_4a14039c(uVar3,0);
  uVar2 = FUN_4a13fa14(uVar3,0);
  uVar1 = FUN_4a1414dc(uVar3,uVar2,uVar1);
  FUN_4a0cd7a0(param_1,0xaf3,uVar1);
  *(undefined4 *)(param_1 + 0x1c0) = 0xd;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined1 *)(param_1 + 0x1dc) = 1;
  host_s3eAccelerometerStop_arm();
                    /* WARNING: Could not recover jumptable at 0x4a116200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_caseD_0_4a11623c)();
  return;
}



// Address: 4a10ea2c

void FUN_4a10ea2c(int param_1)

{
  *(undefined1 *)(param_1 + 0x6f1) = 1;
  return;
}



// Address: 4a10ea38

int * FUN_4a10ea38(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_4a143ac8(*(undefined4 *)(param_1 + 0x28));
  uVar2 = *(uint *)(iVar1 + 0x14);
  if ((*(int *)(param_1 + 0x1d8) == 1) && (param_2 == 2 || param_2 == 3)) {
    uVar2 = uVar2 | 0x1000;
  }
  if ((uVar2 & 0x2000) == 0) {
    if ((uVar2 & 0x1000) == 0) {
      return (int *)0x0;
    }
    uVar3 = thunk_FUN_4a161570(0xbc);
    piVar4 = (int *)FUN_4a10a1c8(uVar3,param_1);
  }
  else {
    uVar3 = thunk_FUN_4a161570(0x164);
    piVar4 = (int *)FUN_4a077780(uVar3,param_1);
    if (param_2 == 0) {
      *(int **)(param_1 + 0x5f8) = piVar4;
      uVar5 = *(undefined4 *)(param_1 + 0x28);
      uVar3 = FUN_4a1457cc(uVar5,0);
      uVar5 = FUN_4a1457d8(uVar5,0);
      uVar3 = FUN_4a10ea38(param_1,5,uVar3,0,uVar5,0,0xffffffff);
      *(undefined4 *)(param_1 + 0x5fc) = uVar3;
      FUN_4a108d64();
    }
  }
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))(piVar4,param_2,param_3,param_4,param_5,param_6,param_7);
    FUN_4a127d64(param_1,piVar4);
    (**(code **)(*piVar4 + 0x24))(piVar4);
  }
  return piVar4;
}



// Address: 4a10eb68

/* WARNING: Removing unreachable block (ram,0x4a0fd5fc) */
/* WARNING: Removing unreachable block (ram,0x4a0fd570) */
/* WARNING: Removing unreachable block (ram,0x4a0fd588) */
/* WARNING: Removing unreachable block (ram,0x4a0fd5ac) */
/* WARNING: Removing unreachable block (ram,0x4a0fd618) */
/* WARNING: Removing unreachable block (ram,0x4a06013c) */
/* WARNING: Removing unreachable block (ram,0x4a0faea0) */
/* WARNING: Removing unreachable block (ram,0x4a0fae9c) */
/* WARNING: Removing unreachable block (ram,0x4a0d7760) */
/* WARNING: Removing unreachable block (ram,0x4a0d775c) */
/* WARNING: Removing unreachable block (ram,0x4a120358) */
/* WARNING: Removing unreachable block (ram,0x4a120c6c) */
/* WARNING: Removing unreachable block (ram,0x4a120c70) */
/* WARNING: Removing unreachable block (ram,0x4a120c74) */
/* WARNING: Removing unreachable block (ram,0x4a120c7c) */
/* WARNING: Removing unreachable block (ram,0x4a120c80) */
/* WARNING: Removing unreachable block (ram,0x4a120c84) */
/* WARNING: Removing unreachable block (ram,0x4a120c88) */
/* WARNING: Removing unreachable block (ram,0x4a120c8c) */
/* WARNING: Removing unreachable block (ram,0x4a120c90) */
/* WARNING: Removing unreachable block (ram,0x4a120c94) */
/* WARNING: Removing unreachable block (ram,0x4a120c98) */
/* WARNING: Removing unreachable block (ram,0x4a120c9c) */
/* WARNING: Removing unreachable block (ram,0x4a120ca0) */
/* WARNING: Removing unreachable block (ram,0x4a122650) */
/* WARNING: Removing unreachable block (ram,0x4a122634) */
/* WARNING: Removing unreachable block (ram,0x4a11bea0) */
/* WARNING: Removing unreachable block (ram,0x4a0fd634) */
/* WARNING: Removing unreachable block (ram,0x4a0fd630) */
/* WARNING: Removing unreachable block (ram,0x4a0fd638) */
/* WARNING: Removing unreachable block (ram,0x4a0fd63c) */
/* WARNING: Removing unreachable block (ram,0x4a0fd5f8) */
/* WARNING: Removing unreachable block (ram,0x4a0fd600) */
/* WARNING: Removing unreachable block (ram,0x4a0fd604) */
/* WARNING: Removing unreachable block (ram,0x4a0fd5a4) */
/* WARNING: Removing unreachable block (ram,0x4a0fd5b0) */
/* WARNING: Removing unreachable block (ram,0x4a0fd5b4) */
/* WARNING: Removing unreachable block (ram,0x4a0fd5c4) */
/* WARNING: Removing unreachable block (ram,0x4a0fd5cc) */
/* WARNING: Removing unreachable block (ram,0x4a0fd5d0) */
/* WARNING: Removing unreachable block (ram,0x4a0fd5d4) */
/* WARNING: Removing unreachable block (ram,0x4a0fd5e8) */
/* WARNING: Removing unreachable block (ram,0x4a0fd5e0) */
/* WARNING: Removing unreachable block (ram,0x4a0fd614) */
/* WARNING: Removing unreachable block (ram,0x4a0fd61c) */
/* WARNING: Removing unreachable block (ram,0x4a0fd620) */
/* WARNING: Removing unreachable block (ram,0x4a0fd64c) */
/* WARNING: Removing unreachable block (ram,0x4a0fd65c) */
/* WARNING: Removing unreachable block (ram,0x4a0fd660) */
/* WARNING: Removing unreachable block (ram,0x4a0fd664) */
/* WARNING: Removing unreachable block (ram,0x4a0fd668) */
/* WARNING: Removing unreachable block (ram,0x4a0fd69c) */
/* WARNING: Removing unreachable block (ram,0x4a0fd6b0) */
/* WARNING: Removing unreachable block (ram,0x4a0fd6b8) */
/* WARNING: Removing unreachable block (ram,0x4a0fd67c) */
/* WARNING: Removing unreachable block (ram,0x4a0fd694) */
/* WARNING: Removing unreachable block (ram,0x4a0fd68c) */
/* WARNING: Removing unreachable block (ram,0x4a0fd6bc) */
/* WARNING: Removing unreachable block (ram,0x4a0fd6cc) */
/* WARNING: Removing unreachable block (ram,0x4a0fd6d0) */
/* WARNING: Removing unreachable block (ram,0x4a0fd6d4) */
/* WARNING: Removing unreachable block (ram,0x4a0fd6d8) */
/* WARNING: Removing unreachable block (ram,0x4a0fd6f0) */
/* WARNING: Removing unreachable block (ram,0x4a0faebc) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffb0 : 0x4a124f68 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * FUN_4a10eb68(int *param_1,uint param_2,int *param_3)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  char cVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  char *pcVar12;
  undefined4 uVar13;
  int *piVar14;
  uint *puVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  int iVar21;
  undefined4 uVar22;
  int *piVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  uint uVar27;
  uint uVar28;
  int **ppiVar29;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  int iVar30;
  uint uVar31;
  int iVar32;
  int *piVar33;
  uint uVar34;
  int iVar35;
  uint *puVar36;
  int unaff_r4;
  int unaff_r5;
  int iVar37;
  undefined4 uVar38;
  uint uVar39;
  int *piVar40;
  char *pcVar41;
  int iVar42;
  undefined4 uVar43;
  uint uVar44;
  int iVar45;
  uint uVar46;
  int *piVar47;
  uint *puVar48;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar49;
  undefined1 uVar50;
  bool bVar51;
  undefined8 uVar52;
  undefined1 auStack_120 [176];
  int iStack_70;
  undefined1 auStack_6c [12];
  undefined4 uStack_60;
  undefined1 auStack_5c [4];
  uint uStack_58;
  int aiStack_54 [3];
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  int *piStack_34;
  int *piStack_30;
  uint uStack_2c;
  int *piStack_28;
  uint uStack_24;
  uint *puVar20;
  
  FUN_4a0cb8a0();
  if (param_1[0x70] == 1) {
    return (int *)0x1;
  }
  if ((param_1[0xa5] != 0 && param_1[0xa5] != 2) && ((char)param_1[0x19f] == '\0')) {
    return (int *)0x0;
  }
  iVar42 = param_1[8];
  uVar52 = FUN_4a0fd024(iVar42);
  iVar30 = (int)((ulonglong)uVar52 >> 0x20);
  bVar49 = (int)uVar52 != 0;
  if (bVar49) {
    iVar30 = param_1[0x72];
  }
  iVar37 = 0;
  if (bVar49 && iVar30 != 0) {
    FUN_4a1161d0(param_1);
    piVar14 = (int *)FUN_4a0fb778(iVar42);
    param_1[0x72] = 0;
switchD_4a10ed50_caseD_2:
    return piVar14;
  }
  iVar30 = FUN_4a0ff408(iVar42);
  puVar7 = PTR_DAT_4a11bc0c;
  puVar6 = PTR_DAT_4a11a2a8;
  puVar5 = PTR_DAT_4a11a2a4;
  if (iVar30 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a10ebf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
    return piVar14;
  }
  if ((char)param_1[0x19f] == '\0') {
    if (((char)param_1[0x77] == '\0') && (*(char *)((int)param_1 + 0x632) != '\0')) {
      iVar30 = FUN_4a0cb850(param_2,param_3,2);
      if (iVar30 == 0) {
        iVar30 = FUN_4a0cb850(param_2,param_3,0x10);
        if (iVar30 != 0) {
          if (*(char *)((int)param_1 + 0x632) != '\0') {
            *(undefined1 *)((int)param_1 + 0x632) = 0;
            *(undefined1 *)((int)param_1 + 0x633) = 0;
            *(undefined2 *)(param_1 + 0x18d) = 0xffff;
            param_1[0x19d] = 0;
            param_1[0xad] = 0;
            FUN_4a115d8c(param_1,0);
          }
          uVar31 = 5;
          goto code_r0x4a11e2a0;
        }
        iVar30 = FUN_4a0cb850(param_2,param_3,8);
        if (iVar30 == 0) {
          return (int *)0x0;
        }
        iVar30 = param_1[0x191];
        iVar42 = 0;
        if (iVar30 == 0) {
          iVar37 = 0;
        }
        else {
          iVar37 = *(int *)(iVar30 + 8);
        }
        iVar37 = *(int *)(iVar37 + 8) + 5;
        if (param_1[0x70] == 7) {
          if (iVar30 != 0) {
            iVar42 = *(int *)(iVar30 + 8);
          }
          iVar30 = *(int *)(iVar42 + iVar37 * 4);
          goto LAB_4a118cc8;
        }
        if (param_1[0x196] == 0) {
          iVar35 = 0;
        }
        else {
          iVar35 = *(int *)(param_1[0x196] + 8);
        }
        iVar35 = *(int *)(iVar35 + iVar37 * 4);
        if (iVar35 != -4) {
          if (iVar35 == -5 || iVar35 == -6) goto LAB_4a11f80c;
          if (iVar35 != -3) {
            if (iVar35 == -2) {
              iVar35 = iVar42;
              if (iVar30 != 0) {
                iVar35 = *(int *)(iVar30 + 8);
              }
              *(short *)(param_1 + 0x18d) = (short)*(undefined4 *)(iVar35 + 8);
              *(undefined1 *)((int)param_1 + 0x633) = 1;
              iVar35 = iVar42;
              if (iVar30 != 0) {
                iVar35 = *(int *)(iVar30 + 8);
              }
              uVar43 = *(undefined4 *)(iVar35 + iVar37 * 4);
              uVar38 = FUN_4a16bdcc(auStack_5c,param_1 + 0x198);
              uVar13 = FUN_4a16bdcc(&uStack_48);
              uVar22 = FUN_4a16bdcc(&piStack_34);
              uStack_60 = uVar43;
              FUN_4a0da2a4(param_1[9],uVar22,uVar13,uVar38);
              FUN_4a16bef4(&piStack_34);
              FUN_4a16bef4(&uStack_48);
              FUN_4a16bef4(auStack_5c);
              if (param_1[0x191] != 0) {
                iVar42 = *(int *)(param_1[0x191] + 8);
              }
              *(int *)(iVar42 + 0x10) = (int)(short)param_1[0x7c];
              piVar14 = (int *)FUN_4a09145c(param_1[0x19e],param_1 + 0x18e,param_1 + 0x193);
              return piVar14;
            }
            if (iVar35 == 0x94 || iVar35 == 0x93) {
              iVar30 = param_1[0x191];
              if (iVar30 == 0) {
                iVar42 = 0;
              }
              else {
                iVar42 = *(int *)(iVar30 + 8);
              }
              if (param_1[0x196] == 0) {
                iVar37 = 0;
              }
              else {
                iVar37 = *(int *)(param_1[0x196] + 8);
              }
              iVar42 = *(int *)(iVar42 + 8) + 5;
              uVar38 = *(undefined4 *)(iVar37 + iVar42 * 4);
              if (iVar30 == 0) {
                iVar37 = 0;
              }
              else {
                iVar37 = *(int *)(iVar30 + 8);
              }
              iVar37 = *(int *)(iVar37 + iVar42 * 4);
              iVar42 = 0;
              if (iVar37 != 0x958) {
                iVar42 = iVar37 + -0x900;
              }
              if (iVar37 != 0x958 && iVar42 != 0x57) {
                iVar30 = param_1[0xad];
                if (*(char *)((int)param_1 + 0x632) != '\0') {
                  *(undefined1 *)((int)param_1 + 0x632) = 0;
                  *(undefined1 *)((int)param_1 + 0x633) = 0;
                  *(undefined2 *)(param_1 + 0x18d) = 0xffff;
                  param_1[0x19d] = 0;
                  param_1[0xad] = 0;
                  FUN_4a115d8c(param_1,0);
                }
                FUN_4a11e2a0(param_1,5);
                uVar13 = FUN_4a13f9c8(param_1[9],iVar37);
                aiStack_54[1] = 0;
                piVar14 = (int *)FUN_4a116fb0(param_1,uVar38,iVar30,uVar13);
                return piVar14;
              }
              if (iVar30 == 0) {
                iVar30 = 0;
              }
              else {
                iVar30 = *(int *)(iVar30 + 8);
              }
              *(short *)(param_1 + 0x18d) = (short)*(undefined4 *)(iVar30 + 8);
              *(undefined1 *)((int)param_1 + 0x633) = 1;
              uVar13 = FUN_4a16bdcc(aiStack_54 + 2);
              uVar22 = FUN_4a16bdcc(&uStack_38);
              FUN_4a0dc8f4(param_1[9],uVar22,uVar13,uVar38);
              FUN_4a16bef4(&uStack_38);
              FUN_4a16bef4(aiStack_54 + 2);
              if (param_1[0x191] == 0) {
                iVar30 = 0;
              }
              else {
                iVar30 = *(int *)(param_1[0x191] + 8);
              }
              *(int *)(iVar30 + 0x10) = (int)(short)param_1[0x7c];
              if (param_1[0x191] == 0) {
                piVar14 = (int *)0x0;
              }
              else {
                piVar14 = *(int **)(param_1[0x191] + 8);
              }
              if (*piVar14 != 0) {
                piVar14 = (int *)FUN_4a09145c(param_1[0x19e],param_1 + 0x18e,param_1 + 0x193);
                return piVar14;
              }
              if (*(char *)((int)param_1 + 0x632) != '\0') {
                *(undefined1 *)((int)param_1 + 0x632) = 0;
                *(undefined1 *)((int)param_1 + 0x633) = 0;
                *(undefined2 *)(param_1 + 0x18d) = 0xffff;
                param_1[0x19d] = 0;
                param_1[0xad] = 0;
                FUN_4a115d8c(param_1,0);
              }
              FUN_4a11e2a0(param_1,5);
              param_1[0xa4] = 0;
              FUN_4a0cd7c0(param_1,0xb39);
              piVar14 = (int *)FUN_4a1161d0(param_1,9);
              return piVar14;
            }
            if (iVar35 == 0x74) {
              iVar30 = param_1[0x191];
              if (iVar30 == 0) {
                iVar42 = 0;
              }
              else {
                iVar42 = *(int *)(iVar30 + 8);
              }
              if (param_1[0x196] == 0) {
                iVar37 = 0;
              }
              else {
                iVar37 = *(int *)(param_1[0x196] + 8);
              }
              iVar42 = *(int *)(iVar42 + 8) + 5;
              uVar38 = *(undefined4 *)(iVar37 + iVar42 * 4);
              if (iVar30 == 0) {
                iVar37 = 0;
              }
              else {
                iVar37 = *(int *)(iVar30 + 8);
              }
              iVar42 = *(int *)(iVar37 + iVar42 * 4);
              if (iVar42 != 0x93c) {
                iVar30 = param_1[0xad];
                if (*(char *)((int)param_1 + 0x632) != '\0') {
                  *(undefined1 *)((int)param_1 + 0x632) = 0;
                  *(undefined1 *)((int)param_1 + 0x633) = 0;
                  *(undefined2 *)(param_1 + 0x18d) = 0xffff;
                  param_1[0x19d] = 0;
                  param_1[0xad] = 0;
                  FUN_4a115d8c(param_1,0);
                }
                FUN_4a11e2a0(param_1,5);
                uVar13 = FUN_4a142fa0(param_1[10],iVar42);
                aiStack_54[1] = 0;
                piVar14 = (int *)FUN_4a116fb0(param_1,uVar38,iVar30,uVar13);
                return piVar14;
              }
              if (iVar30 == 0) {
                iVar30 = 0;
              }
              else {
                iVar30 = *(int *)(iVar30 + 8);
              }
              *(short *)(param_1 + 0x18d) = (short)*(undefined4 *)(iVar30 + 8);
              *(undefined1 *)((int)param_1 + 0x633) = 1;
              uVar13 = FUN_4a16bdcc(aiStack_54 + 2);
              uVar22 = FUN_4a16bdcc(&uStack_38);
              FUN_4a0dd464(param_1[9],uVar22,uVar13,uVar38);
              FUN_4a16bef4(&uStack_38);
              FUN_4a16bef4(aiStack_54 + 2);
              if (param_1[0x191] == 0) {
                iVar30 = 0;
              }
              else {
                iVar30 = *(int *)(param_1[0x191] + 8);
              }
              *(int *)(iVar30 + 0x10) = (int)(short)param_1[0x7c];
              if (param_1[0x191] == 0) {
                piVar14 = (int *)0x0;
              }
              else {
                piVar14 = *(int **)(param_1[0x191] + 8);
              }
              if (*piVar14 != 0) {
                piVar14 = (int *)FUN_4a09145c(param_1[0x19e],param_1 + 0x18e,param_1 + 0x193);
                return piVar14;
              }
              if (*(char *)((int)param_1 + 0x632) != '\0') {
                *(undefined1 *)((int)param_1 + 0x632) = 0;
                *(undefined1 *)((int)param_1 + 0x633) = 0;
                *(undefined2 *)(param_1 + 0x18d) = 0xffff;
                param_1[0x19d] = 0;
                param_1[0xad] = 0;
                FUN_4a115d8c(param_1,0);
              }
              FUN_4a11e2a0(param_1,5);
              param_1[0xa4] = 0;
              FUN_4a0cd7c0(param_1,0xb4f);
              piVar14 = (int *)FUN_4a1161d0(param_1,9);
              return piVar14;
            }
            if (iVar35 == 0x84) {
              iVar30 = param_1[0x191];
              if (iVar30 == 0) {
                iVar42 = 0;
              }
              else {
                iVar42 = *(int *)(iVar30 + 8);
              }
              if (param_1[0x196] == 0) {
                iVar37 = 0;
              }
              else {
                iVar37 = *(int *)(param_1[0x196] + 8);
              }
              iVar42 = *(int *)(iVar42 + 8) + 5;
              uVar38 = *(undefined4 *)(iVar37 + iVar42 * 4);
              if (iVar30 == 0) {
                iVar37 = 0;
              }
              else {
                iVar37 = *(int *)(iVar30 + 8);
              }
              iVar42 = *(int *)(iVar37 + iVar42 * 4);
              if (iVar42 != 0x94d) {
                iVar30 = param_1[0xad];
                if (*(char *)((int)param_1 + 0x632) != '\0') {
                  *(undefined1 *)((int)param_1 + 0x632) = 0;
                  *(undefined1 *)((int)param_1 + 0x633) = 0;
                  *(undefined2 *)(param_1 + 0x18d) = 0xffff;
                  param_1[0x19d] = 0;
                  param_1[0xad] = 0;
                  FUN_4a115d8c(param_1,0);
                }
                FUN_4a11e2a0(param_1,5);
                uVar13 = FUN_4a143b0c(param_1[10],iVar42);
                aiStack_54[1] = 0;
                piVar14 = (int *)FUN_4a116fb0(param_1,uVar38,iVar30,uVar13);
                return piVar14;
              }
              if (iVar30 == 0) {
                iVar30 = 0;
              }
              else {
                iVar30 = *(int *)(iVar30 + 8);
              }
              *(short *)(param_1 + 0x18d) = (short)*(undefined4 *)(iVar30 + 8);
              *(undefined1 *)((int)param_1 + 0x633) = 1;
              uVar13 = FUN_4a16bdcc(aiStack_54 + 2);
              uVar22 = FUN_4a16bdcc(&uStack_38);
              FUN_4a0dca54(param_1[9],uVar22,uVar13,uVar38);
              FUN_4a16bef4(&uStack_38);
              FUN_4a16bef4(aiStack_54 + 2);
              if (param_1[0x191] == 0) {
                iVar30 = 0;
              }
              else {
                iVar30 = *(int *)(param_1[0x191] + 8);
              }
              *(int *)(iVar30 + 0x10) = (int)(short)param_1[0x7c];
              if (param_1[0x191] == 0) {
                piVar14 = (int *)0x0;
              }
              else {
                piVar14 = *(int **)(param_1[0x191] + 8);
              }
              if (*piVar14 != 0) {
                piVar14 = (int *)FUN_4a09145c(param_1[0x19e],param_1 + 0x18e,param_1 + 0x193);
                return piVar14;
              }
              if (*(char *)((int)param_1 + 0x632) != '\0') {
                *(undefined1 *)((int)param_1 + 0x632) = 0;
                *(undefined1 *)((int)param_1 + 0x633) = 0;
                *(undefined2 *)(param_1 + 0x18d) = 0xffff;
                param_1[0x19d] = 0;
                param_1[0xad] = 0;
                FUN_4a115d8c(param_1,0);
              }
              FUN_4a11e2a0(param_1,5);
              param_1[0xa4] = 0;
              FUN_4a0cd7c0(param_1,0xb4d);
              piVar14 = (int *)FUN_4a1161d0(param_1,9);
              return piVar14;
            }
            if (iVar35 != 0xac) {
              iVar30 = param_1[0xad];
              if (*(char *)((int)param_1 + 0x632) != '\0') {
                *(undefined1 *)((int)param_1 + 0x632) = 0;
                *(undefined1 *)((int)param_1 + 0x633) = 0;
                *(undefined2 *)(param_1 + 0x18d) = 0xffff;
                param_1[0x19d] = 0;
                param_1[0xad] = 0;
                FUN_4a115d8c(param_1,0);
              }
              FUN_4a11e2a0(param_1,5);
              uStack_60 = 0;
              FUN_4a116fb0(param_1,iVar35,iVar30);
              iVar30 = param_1[0x70];
              bVar49 = iVar30 == 0x15;
              if (bVar49) {
                iVar30 = param_1[0x298];
              }
              if (bVar49 && iVar30 == 5) {
                param_1[0xa4] = 6;
                FUN_4a0cd7c0(param_1,0xc7c);
                FUN_4a1161d0(param_1,9);
                piVar14 = (int *)param_1[9];
                piVar14[0x261] = 0x9c4;
                return piVar14;
              }
                    /* WARNING: Could not recover jumptable at 0x4a1215e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
              return piVar14;
            }
            if (*(char *)((int)param_1 + 0x632) != '\0') {
              *(undefined1 *)((int)param_1 + 0x632) = 0;
              *(undefined1 *)((int)param_1 + 0x633) = 0;
              *(undefined2 *)(param_1 + 0x18d) = 0xffff;
              param_1[0x19d] = 0;
              param_1[0xad] = 0;
              FUN_4a115d8c(param_1,0);
            }
            uVar31 = 0x16;
            goto code_r0x4a1161d0;
          }
          FUN_4a119f8c(param_1,param_1[0x19d]);
        }
        *(undefined1 *)((int)param_1 + 0x632) = 0;
        *(undefined1 *)((int)param_1 + 0x633) = 0;
        *(undefined2 *)(param_1 + 0x18d) = 0xffff;
        param_1[0x19d] = 0;
        param_1[0xad] = 0;
        FUN_4a115d8c(param_1,0);
        uVar31 = 5;
      }
      else {
LAB_4a11f80c:
        iVar30 = 0;
        param_1[0x1da] = 0;
        FUN_4a073908(param_1[0x17e]);
        if (*(char *)((int)param_1 + 0x633) != '\0') {
          uVar38 = FUN_4a16bdcc(auStack_5c,param_1 + 0x198);
          uVar13 = FUN_4a16bdcc(&uStack_48);
          uVar22 = FUN_4a16bdcc(&piStack_34);
          FUN_4a0dac94(param_1[9],uVar22,uVar13,uVar38);
          FUN_4a16bef4(&piStack_34);
          FUN_4a16bef4(&uStack_48);
          FUN_4a16bef4(auStack_5c);
          if (param_1[0x191] == 0) {
            iVar42 = 0;
          }
          else {
            iVar42 = *(int *)(param_1[0x191] + 8);
          }
          *(int *)(iVar42 + 0x10) = (int)(short)param_1[0x7c];
          *(undefined1 *)((int)param_1 + 0x633) = 0;
          if (param_1[0x191] != 0) {
            iVar30 = *(int *)(param_1[0x191] + 8);
          }
          *(int *)(iVar30 + 8) = (int)(short)param_1[0x18d];
          FUN_4a16bdcc(auStack_5c,param_1 + 0x18e);
          FUN_4a0fb6c8();
          FUN_4a16bef4(auStack_5c);
          piVar14 = (int *)FUN_4a09145c(param_1[0x19e],param_1 + 0x18e,param_1 + 0x193);
          return piVar14;
        }
        *(undefined1 *)((int)param_1 + 0x632) = 0;
        *(undefined2 *)(param_1 + 0x18d) = 0xffff;
        param_1[0x19d] = 0;
        param_1[0xad] = 0;
        FUN_4a115d8c(param_1,0);
        uVar31 = 5;
      }
      goto code_r0x4a11e2a0;
    }
    if ((char)param_1[0x84] != '\0') {
      iVar30 = FUN_4a0cb850(param_2,param_3,0x84);
      if (iVar30 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a10ed00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
        return piVar14;
      }
      *(undefined1 *)(param_1 + 0x84) = 0;
      piVar14 = (int *)(*(int *)(param_1[0x5a] + 0x90) + -0xc8e);
      if (piVar14 != (int *)0x0) {
        return piVar14;
      }
      if (param_1[0x70] == 7) {
        FUN_4a122618(param_1,param_1[0x1a7]);
      }
      iVar30 = param_1[0x284];
code_r0x4a120ca8:
      iVar42 = param_1[0x284];
      param_1[0x284] = iVar30;
      iVar37 = param_1[8];
      piVar14 = (int *)(iVar37 + 0x128);
      switch(iVar30) {
      case 0:
        if (iVar42 == -1) {
          uVar38 = thunk_FUN_4a161570(0x14);
          uVar38 = FUN_4a0c707c(uVar38,*(undefined4 *)(PTR_PTR_4a120fd4 + param_1[0x297] * 4));
          uVar13 = FUN_4a0941ec();
          FUN_4a094aa4(uVar13,uVar38);
          uVar38 = FUN_4a143934(param_1[10],param_1[0x297]);
          iVar30 = FUN_4a16be24(&uStack_2c,uVar38);
          iVar42 = *(int *)(iVar30 + 8);
          piVar14 = *(int **)(iVar30 + 0xc);
          if (piVar14 != (int *)0x0) {
            (**(code **)(*piVar14 + 0xc))(piVar14);
          }
          (**(code **)(param_1[0x287] + 0x1c))(param_1 + 0x287);
          param_1[0x289] = iVar42;
          param_1[0x28a] = (int)piVar14;
          FUN_4a16bef4(&uStack_2c);
          iVar30 = FUN_4a16be24(&uStack_2c,param_1[0x289]);
          iVar42 = *(int *)(iVar30 + 8);
          piVar14 = *(int **)(iVar30 + 0xc);
          if (piVar14 != (int *)0x0) {
            (**(code **)(*piVar14 + 0xc))(piVar14);
          }
          (**(code **)(param_1[0x28c] + 0x1c))(param_1 + 0x28c);
          param_1[0x28e] = iVar42;
          param_1[0x28f] = (int)piVar14;
          FUN_4a16bef4(&uStack_2c);
          iVar30 = 0;
          if (0 < param_1[0x289]) {
            do {
              uVar38 = FUN_4a14367c(param_1[10],param_1[0x297],iVar30);
              uVar13 = FUN_4a140338(param_1[9],uVar38);
              if (param_1[0x28a] == 0) {
                iVar42 = 0;
              }
              else {
                iVar42 = *(int *)(param_1[0x28a] + 8);
              }
              *(undefined4 *)(iVar42 + iVar30 * 4) = uVar13;
              if (param_1[0x28f] == 0) {
                iVar42 = 0;
              }
              else {
                iVar42 = *(int *)(param_1[0x28f] + 8);
              }
              *(undefined4 *)(iVar42 + iVar30 * 4) = uVar38;
              iVar30 = iVar30 + 1;
            } while (iVar30 < param_1[0x289]);
          }
          param_1[0x291] = 0;
          uVar38 = FUN_4a0cf540(param_1,7);
          FUN_4a0d297c(uVar38,0xffffffff);
          FUN_4a0d21e4(uVar38,0);
          param_1[0x286] = 1000;
          param_1[0x285] = 1000;
          return (int *)0x3e8;
        }
        return piVar14;
      case 1:
        FUN_4a0cd7c0(param_1,0xbfe);
        FUN_4a11a440(param_1,0x1d);
        iVar30 = param_1[9];
        if (*(char *)((int)param_1 + 0x6f3) == '\0') {
          if ((char)param_1[0x1f6] == '\0') {
            if (param_1[0x1ce] != -1) {
              FUN_4a1161d0(param_1,0xf);
              return (int *)0x1;
            }
            iVar42 = FUN_4a0dbda4(iVar30);
            if (iVar42 != 0) {
              param_1[0xa4] = 8;
              FUN_4a0cd7c0(param_1,0xb60,0xb58);
              FUN_4a1161d0(param_1,9);
              return (int *)0x1;
            }
            if (*(char *)((int)param_1 + 0x6f1) == '\0') {
              iVar42 = FUN_4a0dd630(iVar30);
              if (iVar42 == 0) {
                iVar42 = FUN_4a0dd584(iVar30);
                if (iVar42 == -1) {
                  if (*(char *)((int)param_1 + 0x6f2) != '\0') {
                    *(undefined1 *)((int)param_1 + 0x6f2) = 0;
                    iVar30 = FUN_4a141a98(iVar30);
                    if (iVar30 != -1) {
                      if (((((iVar30 == 7 || iVar30 == 1) || iVar30 == 0x1e) || iVar30 == 0x1b) ||
                          iVar30 == 0x1d) || iVar30 == 0x1a) {
                        FUN_4a11a440(param_1,0x1e);
                      }
                      FUN_4a0ff3f8(param_1[8],400);
                      iVar30 = FUN_4a14155c(param_1[9]);
                      if (iVar30 == 0) {
                        FUN_4a0ce9a4(param_1,0xa48);
                      }
                      else {
                        FUN_4a0ce964(param_1,0xa47);
                      }
                      FUN_4a1161d0(param_1,0xe);
                      return (int *)0x1;
                    }
                  }
                  if ((param_1[0x85] < 0) && (iVar30 = FUN_4a145d3c(param_1[8],0x18), iVar30 == 0))
                  {
                    FUN_4a11a440(param_1,0x18);
                  }
                  else {
                    iVar30 = FUN_4a13fa14(param_1[9],0);
                    if ((iVar30 != -1) ||
                       ((iVar30 = FUN_4a145d3c(param_1[8],0x17), iVar30 != 0 ||
                        (iVar30 = FUN_4a13fb90(param_1[9]), iVar30 < 0x7bd)))) {
                      return (int *)0x0;
                    }
                    FUN_4a11a440(param_1,0x17);
                  }
                }
                else {
                  param_1[0xa4] = 0;
                  FUN_4a0cd7c0(param_1,iVar42,0xb43);
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
        return (int *)0x1;
      case 2:
        iVar30 = 0xbff;
        iVar42 = 0xc00;
        goto code_r0x4a089e34;
      case 3:
        FUN_4a09f974(piVar14,0x61);
        iVar30 = FUN_4a171e1c();
        FUN_4a06b330(iVar37 + 0x278,0xc01,3,iVar30 + -0x28);
        iVar42 = 0;
        iVar30 = 0;
        if (0 < param_1[0x289]) {
          do {
            if (param_1[0x28f] == 0) {
              iVar37 = 0;
            }
            else {
              iVar37 = *(int *)(param_1[0x28f] + 8);
            }
            if (param_1[0x28a] == 0) {
              iVar35 = 0;
            }
            else {
              iVar35 = *(int *)(param_1[0x28a] + 8);
            }
            iVar35 = *(int *)(iVar35 + iVar30 * 4);
            iVar37 = FUN_4a140338(param_1[9],*(undefined4 *)(iVar37 + iVar30 * 4));
            if (iVar35 != iVar37) {
              iVar42 = iVar42 + 1;
            }
            iVar30 = iVar30 + 1;
          } while (iVar30 < param_1[0x289]);
        }
        iVar30 = FUN_4a168d38(&uStack_3c,iVar42);
        iVar42 = *(int *)(iVar30 + 8);
        piVar14 = *(int **)(iVar30 + 0xc);
        if (piVar14 != (int *)0x0) {
          (**(code **)(*piVar14 + 0xc))(piVar14);
        }
        (**(code **)(param_1[0x292] + 0x1c))(param_1 + 0x292);
        param_1[0x294] = iVar42;
        param_1[0x295] = (int)piVar14;
        FUN_4a168e44(&uStack_3c);
        iVar42 = 0;
        iVar30 = 0;
        if (0 < param_1[0x289]) {
          do {
            iVar37 = 0;
            if (param_1[0x28f] != 0) {
              iVar37 = *(int *)(param_1[0x28f] + 8);
            }
            piStack_28 = *(int **)(iVar37 + iVar42 * 4);
            iVar37 = 0;
            if (param_1[0x28a] != 0) {
              iVar37 = *(int *)(param_1[0x28a] + 8);
            }
            iVar45 = *(int *)(iVar37 + iVar42 * 4);
            iVar35 = FUN_4a140338(param_1[9],piStack_28);
            iVar37 = iVar30;
            if (iVar45 != iVar35) {
              iVar37 = 0;
              if (param_1[0x295] != 0) {
                iVar37 = *(int *)(param_1[0x295] + 8);
              }
              piVar14 = (int *)(iVar37 + iVar30 * 0x14);
              iVar37 = FUN_4a16be24(aiStack_54 + 1,2);
              aiStack_54[0] = *(int *)(iVar37 + 8);
              piVar40 = *(int **)(iVar37 + 0xc);
              if (piVar40 != (int *)0x0) {
                (**(code **)(*piVar40 + 0xc))(piVar40);
              }
              (**(code **)(*piVar14 + 0x1c))(piVar14);
              piVar14[3] = (int)piVar40;
              piVar14[2] = aiStack_54[0];
              FUN_4a16bef4(aiStack_54 + 1);
              iVar32 = 0;
              if (param_1[0x295] == 0) {
                iVar37 = 0;
              }
              else {
                iVar37 = *(int *)(param_1[0x295] + 8);
              }
              iVar37 = *(int *)(iVar37 + iVar30 * 0x14 + 0xc);
              if (iVar37 == 0) {
                puVar10 = (undefined4 *)0x0;
              }
              else {
                puVar10 = *(undefined4 **)(iVar37 + 8);
              }
              *puVar10 = piStack_28;
              iVar37 = iVar30 + 1;
              if (param_1[0x295] == 0) {
                iVar21 = 0;
              }
              else {
                iVar21 = *(int *)(param_1[0x295] + 8);
              }
              iVar30 = *(int *)(iVar21 + iVar30 * 0x14 + 0xc);
              if (iVar30 != 0) {
                iVar32 = *(int *)(iVar30 + 8);
              }
              *(int *)(iVar32 + 4) = iVar45 - iVar35;
            }
            iVar42 = iVar42 + 1;
            iVar30 = iVar37;
          } while (iVar42 < param_1[0x289]);
        }
        uVar38 = FUN_4a0cf540(param_1,9);
        piVar14 = (int *)FUN_4a0d297c(uVar38,0xffffffff);
      default:
        return piVar14;
      case -1:
        if (iVar42 == 0) {
          FUN_4a0941ec();
          FUN_4a094c64();
        }
        uVar31 = 6;
      }
      goto code_r0x4a1161d0;
    }
    piVar14 = (int *)(param_1[0x70] + -3);
    switch(piVar14) {
    case (int *)0x0:
      iVar30 = FUN_4a0cb850(param_2,param_3,0x20);
      if (iVar30 == 0) {
        iVar30 = FUN_4a0cb850(param_2,param_3,0x40);
        if (iVar30 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a10ee08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
          return piVar14;
        }
        param_1[0x72] = 2;
        iVar30 = FUN_4a0fb654(param_1[8]);
        if (iVar30 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a10ee24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
          return piVar14;
        }
      }
      else {
        FUN_4a0fdf10(param_1[8]);
        FUN_4a0fca00(param_1[8]);
        param_1[0x72] = 2;
        iVar30 = FUN_4a0fb654(param_1[8]);
        if (iVar30 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a10ede8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
          return piVar14;
        }
      }
      goto LAB_4a10f474;
    case (int *)0x1:
      iVar30 = FUN_4a0cb850(param_2,param_3,0x20);
      if (iVar30 == 0) {
        iVar30 = FUN_4a0cb850(param_2,param_3,0x40);
        if (iVar30 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a10ee7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
          return piVar14;
        }
        break;
      }
      param_1[0x72] = 2;
      iVar30 = FUN_4a0fb654(param_1[8]);
      if (iVar30 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a10ee5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
        return piVar14;
      }
      goto LAB_4a10f474;
    default:
      goto switchD_4a10ed50_caseD_2;
    case (int *)0x3:
LAB_4a116f24:
      puVar36 = (uint *)0x0;
      if (param_2 != 3) {
        if (param_2 == 0xb) {
          if (param_3[3] != 0) {
            puVar36 = *(uint **)(param_3[3] + 8);
          }
          if ((*puVar36 & 0x20000000) == 0) {
            return param_1;
          }
          if ((char)param_1[0x19f] != '\0') {
            return param_1;
          }
          goto code_r0x4a111238;
        }
        piVar14 = (int *)param_1[0xaf];
        if ((piVar14 == (int *)0x2 || piVar14 == (int *)0x3) || piVar14 == (int *)&DAT_00000004) {
          return piVar14;
        }
        switch(param_2) {
        case 0:
          iVar30 = 0;
          if (param_3[3] != 0) {
            iVar30 = *(int *)(param_3[3] + 8);
          }
          uVar38 = *(undefined4 *)(iVar30 + 4);
          iVar30 = 0;
          if (param_3[3] != 0) {
            iVar30 = *(int *)(param_3[3] + 8);
          }
          uVar13 = *(undefined4 *)(iVar30 + 8);
          if (param_1[0x70] != 7) {
            FUN_4a0bbe98(*(undefined4 *)PTR_DAT_4a1253bc,&piStack_34,&uStack_38);
          }
          puVar5 = PTR_DAT_4a1253bc;
          FUN_4a0bbcf0(*(undefined4 *)PTR_DAT_4a1253bc,10);
          iVar30 = FUN_4a0bbcf0(*(undefined4 *)puVar5,10);
          piVar14 = (int *)FUN_4a134a60(uVar38,uVar13,param_1[0x8b],param_1[0x8c] - iVar30);
          if (piVar14 == (int *)0x0) {
            *(undefined1 *)(param_1 + 0x9d) = 0;
          }
          else {
            *(undefined1 *)(param_1 + 0x9d) = 1;
          }
          *(undefined1 *)(param_1 + 0x29b) = 1;
        default:
          return piVar14;
        case 2:
          *(undefined1 *)(param_1 + 0x29b) = 0;
          return (int *)0x0;
        case 3:
        case 7:
          if (piVar14 == (int *)0x1) {
LAB_4a124a4c:
            param_1[0xbd] = 0;
          }
          else if (piVar14 != (int *)0x5) {
            return piVar14;
          }
          break;
        case 4:
          if (piVar14 == (int *)0x1) goto LAB_4a124a4c;
          if (piVar14 != (int *)0x5) {
            return piVar14;
          }
          break;
        case 5:
          if ((char)param_1[0x9d] != '\0') {
            if (param_3[3] == 0) {
              iVar30 = 0;
            }
            else {
              iVar30 = *(int *)(param_3[3] + 8);
            }
            iVar42 = *(int *)(iVar30 + 0x18);
            bVar49 = *(char *)((int)param_1 + 0x277) != '\0';
            iVar30 = 0;
            if (bVar49) {
              iVar30 = *(int *)PTR_DAT_4a11a2a4;
            }
            bVar51 = iVar30 != 0;
            if (bVar49 && bVar51) {
              iVar30 = *(int *)PTR_DAT_4a11a2a8;
            }
            uVar50 = 1;
            if ((bVar49 && bVar51) && iVar30 != 0) {
              uVar38 = FUN_4a171fac(iVar42 + -0x32);
              uVar38 = FUN_4a17211c(uVar38,0x41f00000);
              FUN_4a17211c(uVar38,DAT_4a11a2ac);
              uVar31 = FUN_4a171e1c();
              puVar7 = PTR_DAT_4a11a2b0;
              uVar50 = true;
              *(uint *)PTR_DAT_4a11a2b0 = uVar31;
              if ((int)uVar31 < 0) {
                *(undefined4 *)puVar7 = 0;
              }
              else {
                uVar50 = 0x1d < uVar31;
                if (0x1e < (int)uVar31) {
                  *(undefined4 *)puVar7 = 0x1e;
                }
              }
              iVar30 = 0x1e - (*(uint *)puVar7 & 0xfffe);
              *(int *)puVar7 = iVar30;
              FUN_4a041aa0(iVar30,*(undefined4 *)PTR_DAT_4a11a2b4,0xbf800000);
            }
            FUN_4a0bbe98(*(undefined4 *)PTR_DAT_4a11a2b8,&stack0xffffffe0,&stack0xffffffe4);
            iVar30 = param_1[0x8f];
            uVar38 = FUN_4a171fac(param_1[0x90]);
            uVar13 = FUN_4a171fac(iVar42 - iVar30);
            uVar38 = FUN_4a171bb8(uVar13,uVar38);
            FUN_4a1720a0(0x3f800000,uVar38);
            if (!(bool)uVar50) {
              uVar38 = 0x3f800000;
            }
            FUN_4a172458(0,uVar38);
            if (!(bool)uVar50) {
              uVar38 = 0;
            }
            bVar49 = *(char *)((int)param_1 + 0x277) != '\0';
            iVar30 = 0;
            if (bVar49) {
              iVar30 = *(int *)puVar5;
            }
            bVar51 = iVar30 != 0;
            if (bVar49 && bVar51) {
              iVar30 = *(int *)puVar6;
            }
            if ((!bVar49 || !bVar51) || iVar30 == 0) {
              if (param_1[0x76] == 2) {
                iVar30 = 800;
                iVar42 = 0x708;
              }
              else {
                iVar42 = 0x2ee;
                iVar30 = 200;
              }
              uVar13 = FUN_4a171fac(iVar42 - iVar30);
              uVar38 = FUN_4a17211c(uVar13,uVar38);
              uVar13 = FUN_4a171fac(iVar30);
              uVar38 = FUN_4a171a94(uVar13,uVar38);
              *(undefined4 *)(param_1[10] + 0x48c) = uVar38;
              uVar31 = param_1[0x29a];
              param_1[0x29a] = (int)(uVar31 | 4);
              return (int *)(uVar31 | 4);
            }
            uVar38 = FUN_4a17211c(uVar38,0x44098000);
            piVar14 = (int *)FUN_4a171a94(uVar38,0x43480000);
            *(int **)(param_1[10] + 0x490) = piVar14;
            return piVar14;
          }
          if (*(char *)((int)param_1 + 0x275) != '\0') {
            iVar42 = param_1[0x91];
            uVar50 = 1;
            iVar30 = 0;
            if (param_3[3] != 0) {
              iVar30 = *(int *)(param_3[3] + 8);
            }
            iVar30 = *(int *)(iVar30 + 0x14);
            uVar38 = FUN_4a171fac(param_1[0x96]);
            uVar13 = FUN_4a171fac((iVar30 - iVar42) + -5);
            uVar38 = FUN_4a171bb8(uVar13,uVar38);
            FUN_4a1720a0(0x3f800000,uVar38);
            if (!(bool)uVar50) {
              uVar38 = 0x3f800000;
            }
            FUN_4a172458(0,uVar38);
            if (!(bool)uVar50) {
              uVar38 = 0;
            }
            uVar38 = FUN_4a17211c(uVar38,0x43b40000);
            *(undefined4 *)(param_1[10] + 0x488) = uVar38;
            uVar31 = param_1[0x29a];
            param_1[0x29a] = (int)(uVar31 | 2);
            return (int *)(uVar31 | 2);
          }
          if (*(char *)((int)param_1 + 0x276) != '\0') {
            iVar30 = param_3[3];
            iVar42 = 0;
            bVar49 = iVar30 != 0;
            if (bVar49) {
              iVar37 = *(int *)(iVar30 + 8);
            }
            else {
              iVar37 = 0;
            }
            iVar37 = *(int *)(iVar37 + 4);
            if (bVar49) {
              iVar35 = *(int *)(iVar30 + 8);
            }
            else {
              iVar35 = 0;
            }
            iVar35 = *(int *)(iVar35 + 8);
            if (bVar49) {
              iVar45 = *(int *)(iVar30 + 8);
              iVar42 = *(int *)(iVar30 + 8);
            }
            else {
              iVar45 = 0;
            }
            iVar45 = *(int *)(iVar45 + 0x14);
            iVar30 = *(int *)(iVar42 + 0x18);
            FUN_4a13ca78(param_1[8]);
            uVar38 = FUN_4a171fac();
            uVar13 = FUN_4a171fac(iVar45 - iVar37);
            uVar31 = FUN_4a171bb8(uVar13,uVar38);
            FUN_4a13caa0(param_1[8]);
            uVar38 = FUN_4a171fac();
            uVar13 = FUN_4a171fac(iVar30 - iVar35);
            uVar38 = FUN_4a171bb8(uVar13,uVar38);
            uVar13 = FUN_4a17211c(uVar31 ^ 0x80000000,0x43b40000);
            iVar30 = param_1[10];
            uVar31 = FUN_4a171a94(*(undefined4 *)(iVar30 + 0x488),uVar13);
            if (uVar31 < 0x80000001) {
              if (0x43b40000 < (int)uVar31) {
                uVar31 = FUN_4a1725c0(uVar31,0x43b40000);
              }
            }
            else {
              uVar31 = FUN_4a1725c0(0x43b40000,uVar31);
            }
            uVar38 = FUN_4a17211c(uVar38,0x42700000);
            iVar37 = FUN_4a171a94(*(undefined4 *)(iVar30 + 0x484),uVar38);
            iVar42 = 0x41700000;
            if ((iVar37 < 0x41700000) || (iVar42 = 0x42960000, 0x42960000 < iVar37)) {
              iVar37 = iVar42;
            }
            *(uint *)(iVar30 + 0x488) = uVar31;
            *(int *)(param_1[10] + 0x484) = iVar37;
            uVar31 = param_1[0x29a];
            param_1[0x29a] = (int)(uVar31 | 2);
            return (int *)(uVar31 | 2);
          }
          if (piVar14 == (int *)0x1) {
            param_1[0xbd] = 0;
LAB_4a124b80:
            FUN_4a11e2a0(param_1,0);
          }
          else if (piVar14 == (int *)0x5) goto LAB_4a124b80;
          *(undefined1 *)(param_1 + 0xb6) = 1;
          param_1[0xbe] = 0;
          param_1[0xbf] = 0;
          param_1[0xc1] = 0;
          param_1[0xc0] = 0;
          param_1[0xc2] = 0;
          param_1[0xc3] = 0;
          uVar38 = DAT_4a1253c0;
          iVar30 = param_3[3];
          iVar42 = param_1[10];
          bVar49 = iVar30 != 0;
          if (bVar49) {
            iVar37 = *(int *)(iVar30 + 8);
          }
          else {
            iVar37 = 0;
          }
          uVar13 = *(undefined4 *)(iVar37 + 0x24);
          if (bVar49) {
            iVar37 = *(int *)(iVar30 + 8);
          }
          else {
            iVar37 = 0;
          }
          iVar37 = *(int *)(iVar37 + 4);
          if (bVar49) {
            iVar35 = *(int *)(iVar30 + 8);
          }
          else {
            iVar35 = 0;
          }
          iVar45 = *(int *)(iVar35 + 8);
          if (bVar49) {
            iVar35 = *(int *)(iVar30 + 8);
            iVar30 = *(int *)(iVar30 + 8);
          }
          else {
            iVar30 = 0;
          }
          iVar30 = *(int *)(iVar30 + 0x18);
          if (!bVar49) {
            iVar35 = 0;
          }
          iVar35 = *(int *)(iVar35 + 0x14);
          uVar22 = *(undefined4 *)(iVar42 + 0x48c);
          if (param_1[0x76] != 2) {
            uVar43 = 0x3f000000;
          }
          else {
            uVar43 = 0x3fc00000;
          }
          if (param_1[0x76] != 2) {
            uVar24 = 200;
          }
          else {
            uVar24 = 800;
          }
          uVar24 = FUN_4a171fac(uVar24);
          uVar22 = FUN_4a1724e0(uVar24,uVar22);
          uVar38 = FUN_4a17211c(uVar22,uVar38);
          uVar38 = FUN_4a171a94(uVar38,uVar43);
          uVar22 = FUN_4a171fac(-(iVar35 - iVar37));
          uVar22 = FUN_4a17211c(uVar22,uVar38);
          uVar43 = FUN_4a171fac(-(iVar30 - iVar45));
          uVar38 = FUN_4a17211c(uVar43,uVar38);
          uVar43 = FUN_4a0d4978(*(undefined4 *)(iVar42 + 0x488));
          uVar24 = FUN_4a002d64();
          uVar43 = FUN_4a002f08(uVar43);
          uVar25 = FUN_4a17211c(uVar43,uVar38);
          uVar26 = FUN_4a17211c(uVar24,uVar22);
          uVar25 = FUN_4a171a94(uVar26,uVar25);
          uVar22 = FUN_4a17211c(uVar43,uVar22);
          uVar38 = FUN_4a17211c(uVar24,uVar38);
          uVar38 = FUN_4a1725c0(uVar38,uVar22);
          param_1[0xc1] = 0;
          param_1[0xc0] = 0;
          param_1[0xc2] = 0;
          puVar10 = (undefined4 *)FUN_4a0f6708(param_1[10],uVar25,uVar38);
          uVar22 = *puVar10;
          uVar43 = puVar10[1];
          uVar38 = FUN_4a171fac(uVar13);
          iVar30 = FUN_4a171bb8(uVar22,uVar38);
          param_1[0xbe] = iVar30;
          iVar30 = FUN_4a171bb8(uVar43,uVar38);
          param_1[0xbf] = iVar30;
          param_1[0xc3] = 700;
          iVar30 = param_1[10];
          uVar13 = *(undefined4 *)(iVar30 + 0x478);
          uVar38 = FUN_4a171a94(*(undefined4 *)(iVar30 + 0x470),uVar22);
          *(undefined4 *)(iVar30 + 0x470) = uVar38;
          iVar30 = param_1[10];
          uVar38 = FUN_4a171a94(uVar13,uVar43);
          *(undefined4 *)(iVar30 + 0x478) = uVar38;
          piVar14 = (int *)(param_1[0x29a] | 1);
LAB_4a1253ac:
          param_1[0x29a] = (int)piVar14;
          return piVar14;
        case 8:
          if (piVar14 == (int *)0x1) {
            param_1[0xbd] = 0;
          }
          else if (piVar14 != (int *)0x5) goto LAB_4a124d84;
          FUN_4a11e2a0(param_1,0);
LAB_4a124d84:
          *(undefined1 *)(param_1 + 0xb6) = 1;
          param_1[0xbe] = 0;
          param_1[0xbf] = 0;
          param_1[0xc1] = 0;
          param_1[0xc0] = 0;
          param_1[0xc2] = 0;
          param_1[0xc3] = 0;
          param_1[0xc4] = 0;
          return (int *)0x0;
        case 9:
          if (piVar14 == (int *)0x1) {
            param_1[0xbd] = 0;
LAB_4a124de8:
            FUN_4a11e2a0(param_1,0);
          }
          else if (piVar14 == (int *)0x5) goto LAB_4a124de8;
          iVar30 = param_3[3];
          bVar49 = iVar30 == 0;
          if (bVar49) {
            iVar42 = 0;
          }
          else {
            iVar42 = *(int *)(iVar30 + 8);
          }
          uVar38 = *(undefined4 *)(iVar42 + 0x24);
          if (bVar49) {
            iVar42 = 0;
          }
          else {
            iVar42 = *(int *)(iVar30 + 8);
          }
          uVar31 = *(uint *)(iVar42 + 4);
          if (bVar49) {
            iVar42 = 0;
          }
          else {
            iVar42 = *(int *)(iVar30 + 8);
          }
          uVar16 = *(uint *)(iVar42 + 8);
          if (bVar49) {
            iVar42 = 0;
          }
          else {
            iVar42 = *(int *)(iVar30 + 8);
          }
          uVar39 = *(uint *)(iVar42 + 0x14);
          if (bVar49) {
            iVar42 = 0;
          }
          else {
            iVar42 = *(int *)(iVar30 + 8);
          }
          uVar18 = *(uint *)(iVar42 + 0x18);
          if (bVar49) {
            iVar42 = 0;
          }
          else {
            iVar42 = *(int *)(iVar30 + 8);
          }
          uVar19 = *(uint *)(iVar42 + 0xc);
          if (bVar49) {
            iVar42 = 0;
          }
          else {
            iVar42 = *(int *)(iVar30 + 8);
          }
          uVar44 = *(uint *)(iVar42 + 0x10);
          if (bVar49) {
            iVar42 = 0;
          }
          else {
            iVar42 = *(int *)(iVar30 + 8);
          }
          uVar34 = *(uint *)(iVar42 + 0x1c);
          if (bVar49) {
            iVar30 = 0;
          }
          else {
            iVar30 = *(int *)(iVar30 + 8);
          }
          uVar46 = *(uint *)(iVar30 + 0x20);
          if ((uVar31 == uVar39 && uVar16 == uVar18) || (uVar19 == uVar34 && uVar44 == uVar46)) {
            uVar50 = uVar39 <= uVar31;
            bVar49 = uVar31 == uVar39;
            if (bVar49) {
              uVar50 = uVar18 <= uVar16;
            }
            bVar51 = bVar49 && uVar16 == uVar18;
            if (bVar49 && uVar16 == uVar18) {
              uVar50 = uVar34 <= uVar19;
              bVar51 = uVar19 == uVar34;
            }
            if (bVar51) {
              uVar50 = uVar46 <= uVar44;
            }
            if (bVar51 && uVar44 == uVar46) goto LAB_4a124fe8;
          }
          else {
            uVar28 = FUN_4a171fac((uVar31 - uVar34) * (uVar44 - uVar16) +
                                  (uVar19 - uVar31) * (uVar46 - uVar16));
            uVar27 = FUN_4a171fac((uVar31 - uVar39) * (uVar44 - uVar16) +
                                  (uVar19 - uVar31) * (uVar18 - uVar16));
            if ((((int)uVar28 < 1) || (uVar50 = 0x7fffffff < uVar27, uVar27 < 0x80000001)) &&
               ((uVar50 = 0x7fffffff < uVar28, uVar28 < 0x80000001 ||
                (uVar50 = true, (int)uVar27 < 1)))) {
LAB_4a124fe8:
              param_1[0xc1] = 0;
              goto LAB_4a124ff0;
            }
          }
          uVar13 = FUN_4a171fac(uVar19 - uVar31);
          uVar22 = FUN_4a171fac(uVar44 - uVar16);
          uVar43 = FUN_4a171fac(uVar34 - uVar39);
          uStack_44 = FUN_4a171fac(uVar46 - uVar18);
          uVar13 = FUN_4a002cf8(uVar22,uVar13);
          uVar22 = FUN_4a002cf8(uStack_44,uVar43);
          uVar13 = FUN_4a1725c0(uVar22,uVar13);
          uVar22 = FUN_4a171bb8(0x43340000,*(undefined4 *)PTR_DAT_4a1253c4);
          uVar13 = FUN_4a17211c(uVar22,uVar13);
          iVar30 = param_1[10];
          uVar22 = FUN_4a171a94(*(undefined4 *)(iVar30 + 0x488),uVar13);
          *(undefined4 *)(iVar30 + 0x488) = uVar22;
          uVar22 = FUN_4a171fac(uVar38);
          iVar30 = FUN_4a171bb8(uVar13,uVar22);
          param_1[0xc1] = iVar30;
          iVar30 = FUN_4a0d4b38(iVar30,0xbf000000,0x3f000000);
          param_1[0xc1] = iVar30;
          param_1[0x29a] = param_1[0x29a] | 2;
LAB_4a124ff0:
          uVar13 = FUN_4a171fac(uVar16 + uVar44);
          uVar13 = FUN_4a17295c(uVar13,0xffffffff);
          uVar22 = FUN_4a171fac(uVar18 + uVar46);
          uVar22 = FUN_4a17295c(uVar22,0xffffffff);
          uVar13 = FUN_4a1725c0(uVar22,uVar13);
          uVar22 = *(undefined4 *)(param_1[10] + 0x484);
          uVar13 = FUN_4a17211c(uVar13,DAT_4a1253c8);
          uStack_44 = FUN_4a171a94(uVar13,uVar22);
          FUN_4a172458(0x41700000,uStack_44);
          uVar28 = uStack_44;
          if (!(bool)uVar50) {
            uVar28 = 0x41700000;
          }
          FUN_4a1720a0(0x42960000,uVar28);
          if (!(bool)uVar50) {
            uVar28 = 0x42960000;
          }
          *(uint *)(param_1[10] + 0x484) = uVar28;
          uStack_44 = uVar28;
          uVar13 = FUN_4a171fac(uVar38);
          uVar38 = FUN_4a1725c0(uStack_44,uVar22);
          uVar38 = FUN_4a17295c(uVar38,0xffffffff);
          iVar30 = FUN_4a171bb8(uVar38,uVar13);
          param_1[0xc0] = iVar30;
          uVar38 = FUN_4a171fac(uVar44 - uVar16);
          uVar22 = FUN_4a171fac(uVar19 - uVar31);
          uVar38 = FUN_4a0d4b88(uVar22,uVar38);
          uVar22 = FUN_4a171fac(uVar46 - uVar18);
          uVar43 = FUN_4a171fac(uVar34 - uVar39);
          uVar22 = FUN_4a0d4b88(uVar43,uVar22);
          uVar22 = FUN_4a1725c0(uVar38,uVar22);
          uVar38 = DAT_4a1253cc;
          uVar43 = *(undefined4 *)(param_1[10] + 0x48c);
          uVar13 = FUN_4a17211c(uVar13,uVar22);
          uVar38 = FUN_4a17211c(uVar13,uVar38);
          uVar38 = FUN_4a171a94(uVar38,uVar43);
          uVar31 = param_1[0x76];
          if (uVar31 == 2) {
            uVar13 = 0x708;
          }
          else {
            uVar13 = 0x2ee;
          }
          uVar13 = FUN_4a172098(uVar13);
          uVar50 = 1 < uVar31;
          if (uVar31 == 2) {
            uVar22 = 800;
          }
          else {
            uVar22 = 200;
          }
          uVar22 = FUN_4a172098(uVar22);
          FUN_4a172458(uVar22,uVar38);
          if ((bool)uVar50) {
            uVar22 = uVar38;
          }
          FUN_4a1720a0(uVar13,uVar22);
          param_1[0xc3] = 700;
          return (int *)0x2bc;
        case 10:
          param_1[0xc4] = 0;
          param_1[0x21] = 0;
          param_1[0x22] = 0;
          param_1[0x23] = 0;
          param_1[0x24] = -1;
          param_1[0x25] = -1;
          iVar30 = param_1[8];
          iVar42 = *(int *)(iVar30 + 0x368);
          if (iVar42 == 0) {
            puVar10 = (undefined4 *)0x0;
          }
          else {
            puVar10 = *(undefined4 **)(iVar42 + 8);
          }
          *puVar10 = 0;
          iVar30 = *(int *)(iVar30 + 0x368);
          if (iVar30 == 0) {
            piVar14 = (int *)0x0;
          }
          else {
            piVar14 = *(int **)(iVar30 + 8);
          }
          piVar14[1] = 0;
          return piVar14;
        case 0xb:
          iVar42 = param_3[3];
          iVar30 = 0;
          if (iVar42 != 0) {
            iVar30 = *(int *)(iVar42 + 8);
          }
          if (*(int *)(iVar30 + 4) < 1) {
            *(undefined1 *)(param_1 + 0x9e) = 0;
            return (int *)0x0;
          }
          iVar30 = 0;
          if (iVar42 != 0) {
            iVar30 = *(int *)(iVar42 + 8);
          }
          uVar31 = *(uint *)(iVar30 + 4);
          if ((uVar31 & 0x1020) != 0) {
            piVar14 = (int *)(uint)*(byte *)(param_1 + 0x9e);
            if (piVar14 == (int *)0x0) {
              piVar14 = (int *)(1 - *(byte *)((int)param_1 + 0x276));
              if (1 < *(byte *)((int)param_1 + 0x276)) {
                piVar14 = (int *)0x0;
              }
              *(char *)((int)param_1 + 0x276) = (char)piVar14;
            }
            *(undefined1 *)(param_1 + 0x9e) = 1;
            return piVar14;
          }
          bVar49 = (uVar31 & 0x8010) != 0;
          iVar30 = 0;
          uVar16 = (uint)bVar49;
          *(undefined1 *)(param_1 + 0x9e) = 0;
          if ((!bVar49) && ((uVar31 & 0x10040) != 0)) {
            uVar16 = 0xffffffff;
          }
          bVar49 = (uVar31 & 0x2004) != 0;
          uVar39 = (uint)bVar49;
          if ((!bVar49) && ((uVar31 & 0x4100) != 0)) {
            uVar39 = 0xffffffff;
          }
          if (uVar16 == 0 && uVar39 == 0) {
            return (int *)0x0;
          }
          if (*(char *)((int)param_1 + 0x276) != '\0') {
            FUN_4a16be24(&uStack_44,10);
            iVar42 = iVar30;
            if (uStack_38 != 0) {
              iVar42 = *(int *)(uStack_38 + 8);
            }
            *(undefined4 *)(iVar42 + 4) = 0;
            iVar42 = iVar30;
            if (uStack_38 != 0) {
              iVar42 = *(int *)(uStack_38 + 8);
            }
            *(undefined4 *)(iVar42 + 8) = 0;
            iVar42 = iVar30;
            if (uStack_38 != 0) {
              iVar42 = *(int *)(uStack_38 + 8);
            }
            *(uint *)(iVar42 + 0x14) = uVar16 * 0x1e;
            iVar42 = iVar30;
            if (uStack_38 != 0) {
              iVar42 = *(int *)(uStack_38 + 8);
            }
            *(uint *)(iVar42 + 0x18) = uVar39 * 0x3c;
            if (uStack_38 != 0) {
              iVar30 = *(int *)(uStack_38 + 8);
            }
            *(undefined4 *)(iVar30 + 0x24) = 1;
            FUN_4a11f950(param_1,&uStack_44);
            piVar14 = (int *)FUN_4a16bef4(&uStack_44);
            return piVar14;
          }
          uVar50 = 1 < (uint)param_1[0x76];
          if (param_1[0x76] == 2) {
            uVar38 = 800;
            uVar13 = 0x708;
          }
          else {
            uVar13 = 0x2ee;
            uVar38 = 200;
          }
          uVar22 = FUN_4a171fac(uVar39);
          uVar22 = FUN_4a17211c(uVar22,0x40400000);
          uVar22 = FUN_4a17211c(uVar22,0x41f00000);
          uVar22 = FUN_4a1725c0(*(undefined4 *)(param_1[10] + 0x48c),uVar22);
          uVar13 = FUN_4a171fac(uVar13);
          FUN_4a1720a0(uVar13,uVar22);
          if ((bool)uVar50) {
            uVar13 = FUN_4a171fac(uVar38);
            FUN_4a172458(uVar13,uVar22);
            if (!(bool)uVar50) goto LAB_4a125398;
          }
          else {
LAB_4a125398:
            uVar22 = uVar13;
          }
          *(undefined4 *)(param_1[10] + 0x48c) = uVar22;
          piVar14 = (int *)(param_1[0x29a] | 4);
          goto LAB_4a1253ac;
        }
        uVar31 = 0;
code_r0x4a11e2a0:
        iVar30 = param_1[0xaf];
        param_1[0xaf] = uVar31;
                    /* WARNING: Could not recover jumptable at 0x4a11e2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        if (uVar31 < 9) {
          piVar14 = (int *)(*(code *)(&switchD_4a11e2d8::switchdataD_4a11e2e0)[uVar31])(0);
          return piVar14;
        }
        if (iVar30 == 0) {
          if (uVar31 != 0) {
            FUN_4a084b60(param_1 + 0xc6,*(undefined4 *)(param_1[10] + 0x470));
            FUN_4a084b60(param_1 + 0xe3,*(undefined4 *)(param_1[10] + 0x474));
            FUN_4a084b60(param_1 + 0x100,*(undefined4 *)(param_1[10] + 0x478));
            FUN_4a084b60(param_1 + 0x11d,*(undefined4 *)(param_1[10] + 0x48c));
            FUN_4a084b60(param_1 + 0x13a,*(undefined4 *)(param_1[10] + 0x484));
            iVar30 = *(int *)(param_1[10] + 0x488);
            iVar42 = 0;
            if (0 < param_1[0x16c]) {
              do {
                if (param_1[0x165] == 0) {
                  iVar37 = 0;
                }
                else {
                  iVar37 = *(int *)(param_1[0x165] + 8);
                }
                *(int *)(iVar37 + iVar42 * 4) = iVar30;
                iVar42 = iVar42 + 1;
              } while (iVar42 < param_1[0x16c]);
            }
            if (0 < param_1[0x16d]) {
              iVar42 = 0;
              do {
                if (param_1[0x16a] == 0) {
                  iVar37 = 0;
                }
                else {
                  iVar37 = *(int *)(param_1[0x16a] + 8);
                }
                *(int *)(iVar37 + iVar42 * 4) = iVar30;
                iVar42 = iVar42 + 1;
              } while (iVar42 < param_1[0x16d]);
            }
            param_1[0x173] = iVar30;
            param_1[0x171] = iVar30;
            param_1[0x170] = iVar30;
            return param_1 + 0x157;
          }
          return (int *)0x0;
        }
        return (int *)0x0;
      }
      if ((param_1[0x70] != 0x15) || (3 < param_1[0x298])) {
        iVar30 = param_3[3];
        puVar36 = (uint *)0x0;
        if (iVar30 != 0) {
          param_3 = *(int **)(iVar30 + 8);
          iVar42 = *(int *)(iVar30 + 8);
        }
        else {
          iVar42 = 0;
        }
        uVar38 = *(undefined4 *)(iVar42 + 8);
        if (iVar30 == 0) {
          param_3 = (int *)0x0;
        }
        iVar30 = param_3[1];
        if (((param_1[0x70] != 0x15) || (5 < param_1[0x298])) &&
           (piVar14 = (int *)FUN_4a11b434(param_1,iVar30,uVar38,0), piVar14 != (int *)0x0)) {
          return piVar14;
        }
        iVar42 = FUN_4a11b434(param_1,iVar30,uVar38,1);
        if (iVar42 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a117e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
          return piVar14;
        }
        iVar42 = FUN_4a0f06e0(param_1[10],iVar30,uVar38);
        iVar37 = FUN_4a118a34(param_1,iVar30,uVar38,iVar42);
        if (iVar37 == 0) {
          if (param_1[0x70] == 7) {
            if (param_1[0x1a7] != 0xf) {
                    /* WARNING: Could not recover jumptable at 0x4a117f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
              return piVar14;
            }
            uVar13 = FUN_4a16bdcc(&uStack_38,param_1 + 0x6b);
            FUN_4a0f43e4(param_1[10],uVar13,iVar30,uVar38);
            FUN_4a16bef4(&uStack_38);
            iVar37 = param_1[0x6e];
            puVar48 = puVar36;
            if (iVar37 != 0) {
              puVar48 = *(uint **)(iVar37 + 8);
            }
            uVar31 = *puVar48;
            puVar15 = puVar36;
            puVar48 = puVar36;
            if (iVar37 != 0) {
              puVar15 = *(uint **)(iVar37 + 8);
              puVar48 = *(uint **)(iVar37 + 8);
            }
            uVar39 = puVar48[2];
            uVar16 = puVar15[3];
            param_1[0x1ac] = uVar31;
            param_1[0x1ad] = uVar39;
            if ((iVar42 == 0) || ((int)uVar16 < iVar42)) {
              uVar13 = FUN_4a144cb0(param_1[10],uVar31);
              uVar22 = FUN_4a144cb8(param_1[10],uVar39);
              iVar37 = FUN_4a1458ac(param_1[10],uVar13,uVar22);
              if (iVar37 != -1) {
                uVar13 = FUN_4a1457cc(param_1[10],uVar13);
                uVar22 = FUN_4a1457d8(param_1[10],uVar22);
                FUN_4a0cec90(param_1,uVar13,0,uVar22);
                FUN_4a0cf554(param_1,0x16);
                param_1[0x1aa] = iVar37;
                iVar37 = FUN_4a0f7058(param_1[10],iVar37);
                param_1[0x1ab] = *(int *)(iVar37 + 0x20);
                FUN_4a122618(param_1,0x10);
              }
            }
            else {
              iVar37 = FUN_4a0f4a18(param_1[10],iVar30,uVar38);
              if (iVar37 != -1) {
                FUN_4a0cca64(param_1,iVar30,uVar38);
                FUN_4a0cf554(param_1,0x16);
                param_1[0x1aa] = iVar37;
                iVar37 = FUN_4a0f7058(param_1[10],iVar37);
                param_1[0x1ab] = *(int *)(iVar37 + 0x24);
                FUN_4a122618(param_1,0x11);
              }
            }
          }
        }
        else if (param_1[0x298] != 0xb) {
          iVar35 = param_1[0x70];
          bVar49 = iVar35 == 0x15;
          if (bVar49) {
            iVar35 = *(int *)(iVar37 + 0x28);
          }
          if (!bVar49 || iVar35 != 4) {
            uVar38 = FUN_4a16bdcc(&uStack_38,param_1 + 0x6b);
            FUN_4a145ed0(iVar37,uVar38,0);
            FUN_4a16bef4(&uStack_38);
            iVar30 = param_1[0x6e];
            bVar49 = iVar30 != 0;
            puVar48 = puVar36;
            if (bVar49) {
              puVar48 = *(uint **)(iVar30 + 8);
            }
            if (bVar49) {
              puVar15 = *(uint **)(iVar30 + 8);
              puVar17 = *(uint **)(iVar30 + 8);
            }
            else {
              puVar15 = (uint *)0x0;
              puVar17 = puVar36;
            }
            if (!bVar49) {
              puVar15 = puVar36;
            }
            FUN_4a0cec90(param_1,*puVar15,puVar17[1],puVar48[2]);
            param_1[0xad] = iVar37;
            FUN_4a115d8c(param_1,iVar37);
            if (param_1[0xaf] == 1) {
              param_1[0xbd] = 0;
            }
            else if (param_1[0xaf] != 5) goto LAB_4a117f2c;
            FUN_4a11e2a0(param_1,0);
LAB_4a117f2c:
            iVar30 = param_1[0xad];
            if (iVar30 != 0) {
              FUN_4a0cf554(param_1,0x16);
              piVar14 = (int *)FUN_4a115df0(param_1,iVar30);
              return piVar14;
            }
                    /* WARNING: Could not recover jumptable at 0x4a117f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
            return piVar14;
          }
          goto LAB_4a11810c;
        }
        if (param_1[0x70] != 6 && param_1[0x70] != 0x15) {
                    /* WARNING: Could not recover jumptable at 0x4a118108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
          return piVar14;
        }
LAB_4a11810c:
        uVar13 = FUN_4a16bdcc(&uStack_38,param_1 + 0x6b);
        FUN_4a0f43e4(param_1[10],uVar13,iVar30,uVar38);
        FUN_4a16bef4(&uStack_38);
        iVar30 = param_1[0x6e];
        puVar48 = puVar36;
        if (iVar30 != 0) {
          puVar48 = *(uint **)(iVar30 + 8);
        }
        uStack_3c = *puVar48;
        puVar15 = puVar36;
        puVar48 = puVar36;
        if (iVar30 != 0) {
          puVar15 = *(uint **)(iVar30 + 8);
          puVar48 = *(uint **)(iVar30 + 8);
        }
        uVar31 = puVar48[2];
        if ((iVar42 != 0) && (iVar42 <= (int)puVar15[3])) {
                    /* WARNING: Could not recover jumptable at 0x4a118180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
          return piVar14;
        }
        iVar30 = FUN_4a144a5c(param_1[10],uStack_3c,uVar31);
        if (iVar30 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a1181a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
          return piVar14;
        }
        uStack_40 = param_1[10];
        iVar30 = FUN_4a144cb0(uStack_40,uStack_3c);
        iVar42 = FUN_4a144cb8(uStack_40,uVar31);
        FUN_4a10ca70(aiStack_54,param_1);
        iVar37 = 0;
        if (0 < aiStack_54[2]) {
          do {
            puVar48 = puVar36;
            if (uStack_48 != 0) {
              puVar48 = *(uint **)(uStack_48 + 8);
            }
            uVar16 = puVar48[iVar37];
            iVar35 = FUN_4a146b58(uVar16,0x2000);
            if (iVar35 != 0) {
              iVar35 = FUN_4a144cb0(uStack_40,*(undefined4 *)(uVar16 + 0x44));
              iVar45 = FUN_4a144cb8(uStack_40,*(undefined4 *)(uVar16 + 0x4c));
              if (iVar35 == iVar30 && iVar45 == iVar42) {
                piVar14 = (int *)FUN_4a16a5f4(aiStack_54);
                return piVar14;
              }
            }
            iVar37 = iVar37 + 1;
          } while (iVar37 < aiStack_54[2]);
        }
        FUN_4a16a5f4(aiStack_54);
        uVar38 = FUN_4a144cb0(param_1[10],uStack_3c);
        uVar13 = FUN_4a144cb8(param_1[10],uVar31);
        uVar38 = FUN_4a1457cc(param_1[10],uVar38);
        uVar13 = FUN_4a1457d8(param_1[10],uVar13);
        FUN_4a0cec90(param_1,uVar38,0,uVar13);
        FUN_4a0cf554(param_1,0x15);
        uStack_58 = uVar31;
        piVar14 = (int *)FUN_4a116fb0(param_1,0x6f,0,uStack_3c);
        return piVar14;
      }
      iVar30 = param_3[3];
      if (iVar30 == 0) {
        iVar42 = 0;
      }
      else {
        iVar42 = *(int *)(iVar30 + 8);
        puVar36 = *(uint **)(iVar30 + 8);
      }
      iVar30 = *(int *)(iVar42 + 8);
      uVar31 = puVar36[1];
      bVar49 = true;
      goto code_r0x4a11b434;
    case (int *)0x4:
      FUN_4a16bdcc(&piStack_30,param_3);
      switch(param_1[0x1a7]) {
      case 1:
      case 0xf:
        iVar30 = FUN_4a0cb850(param_2,&piStack_30,0x80002);
        if (iVar30 == 0) {
          if (param_1[0x10] == 0) {
            if (param_2 == 3 || param_2 == 7) {
              FUN_4a117dbc(param_1,&piStack_30);
            }
            else {
              FUN_4a124918(param_1,param_2,&piStack_30);
            }
          }
          break;
        }
        goto LAB_4a11c9fc;
      case 2:
        FUN_4a1239d8(param_1,param_2,&piStack_30);
        break;
      case 3:
      case 7:
      case 8:
        iVar30 = FUN_4a0cb850(param_2,&piStack_30,6);
        if (iVar30 != 0) {
          FUN_4a122618(param_1,2);
        }
        break;
      case 4:
      case 0xc:
        FUN_4a122ddc(param_1,param_2,&piStack_30);
        if (param_2 == 3) {
          iVar30 = 0;
          if (uStack_24 != 0) {
            iVar30 = *(int *)(uStack_24 + 8);
          }
          if (uStack_24 != 0) {
            iVar42 = *(int *)(uStack_24 + 8);
          }
          else {
            iVar42 = 0;
          }
          FUN_4a11b434(param_1,*(undefined4 *)(iVar42 + 4),*(undefined4 *)(iVar30 + 8),1);
        }
        break;
      case 5:
        iVar30 = FUN_4a0cb850(param_2,&piStack_30,0x20);
        if (iVar30 == 0) {
          iVar30 = FUN_4a0cb850(param_2,&piStack_30,0x42);
          if (iVar30 != 0) {
            FUN_4a122618(param_1,4);
          }
        }
        else {
          FUN_4a125aa0(param_1,0);
        }
        break;
      case 9:
        FUN_4a125c38(param_1,param_2,&piStack_30);
        break;
      case 10:
      case 0xb:
        iVar30 = FUN_4a0cb850(param_2,&piStack_30,0x46);
        if (iVar30 == 0) {
          iVar30 = FUN_4a0cb850(param_2,&piStack_30,0x20);
          if (iVar30 != 0) {
            iVar30 = FUN_4a1448e0(param_1[10]);
            FUN_4a0d585c(param_1[9],-iVar30);
            FUN_4a0f384c(param_1[10]);
            FUN_4a0cf554(param_1,0x48);
            FUN_4a122618(param_1,0);
            if (*(char *)((int)param_1 + 0x632) != '\0') {
              *(undefined1 *)((int)param_1 + 0x632) = 0;
              *(undefined1 *)((int)param_1 + 0x633) = 0;
              *(undefined2 *)(param_1 + 0x18d) = 0xffff;
              param_1[0x19d] = 0;
              param_1[0xad] = 0;
              FUN_4a115d8c(param_1,0);
            }
            param_1[0xa6] = *(int *)(param_1[0x17e] + 0xd4);
            param_1[0xa5] = 1;
            FUN_4a0d58d0(param_1[9]);
            param_1[0xa7] = 0;
            param_1[0xa6] = 0x95;
          }
          break;
        }
        goto LAB_4a11cb40;
      case 0xd:
        iVar30 = FUN_4a0cb850(param_2,&piStack_30,0x84);
        if (iVar30 == 0) {
          iVar30 = FUN_4a0cb850(param_2,&piStack_30,0x10000);
          if (iVar30 == 0) {
            iVar30 = FUN_4a0cb850(param_2,&piStack_30,0x8000);
            if (iVar30 == 0) {
              iVar30 = FUN_4a0cb850(param_2,&piStack_30,0x20000);
              if (iVar30 == 0) {
                iVar30 = FUN_4a0cb850(param_2,&piStack_30,0x40000);
                if (iVar30 != 0) {
                  if (*(char *)((int)param_1 + 0x632) != '\0') {
                    *(undefined1 *)((int)param_1 + 0x632) = 0;
                    *(undefined1 *)((int)param_1 + 0x633) = 0;
                    *(undefined2 *)(param_1 + 0x18d) = 0xffff;
                    param_1[0x19d] = 0;
                    param_1[0xad] = 0;
                    FUN_4a115d8c(param_1,0);
                  }
                  iVar30 = FUN_4a1448e0(param_1[10]);
                  if (iVar30 == -1) {
                    param_1[0xa4] = 0;
                    FUN_4a0cd7c0(param_1,0xb47,0x959);
                    FUN_4a1161d0(param_1,9);
                  }
                  else if (iVar30 == 0) {
                    param_1[0xa4] = 0;
                    FUN_4a0cd7c0(param_1,0xb46,0x959);
                    FUN_4a1161d0(param_1,9);
                  }
                  else {
                    FUN_4a1161d0(param_1,7);
                    iVar30 = FUN_4a1448e0(param_1[10]);
                    iVar42 = FUN_4a141aa4(param_1[9]);
                    if (iVar42 < iVar30) {
                      FUN_4a122618(param_1,0xb);
                    }
                    else {
                      FUN_4a122618(param_1,10);
                    }
                  }
                }
              }
              else {
                FUN_4a122618(param_1,0xe);
              }
            }
            else {
              FUN_4a122618(param_1,0xf);
              FUN_4a11a440(param_1,0x20);
            }
          }
          else {
            FUN_4a122618(param_1,1);
            FUN_4a11a440(param_1,0x1a);
          }
          break;
        }
LAB_4a11cb40:
        FUN_4a122618(param_1,0);
        break;
      case 0xe:
        if (param_2 == 3) {
          iVar30 = 0;
          if (uStack_24 != 0) {
            iVar30 = *(int *)(uStack_24 + 8);
          }
          iVar42 = param_1[0x1b1];
          iVar37 = param_1[0x1b2];
          uVar38 = *(undefined4 *)(iVar30 + 4);
          if (uStack_24 != 0) {
            iVar30 = *(int *)(uStack_24 + 8);
          }
          else {
            iVar30 = 0;
          }
          iVar35 = 0;
          uVar13 = *(undefined4 *)(iVar30 + 8);
          do {
            piStack_34 = (int *)param_1[0x1b0];
            uStack_38 = param_1[0x1af];
            iVar30 = FUN_4a134a60(uVar38,uVar13,iVar42,iVar37);
            if (iVar30 != 0) {
              param_1[0x1b6] = 1000;
              param_1[0x1b5] = iVar35;
              FUN_4a0cf554(param_1,0x15);
              break;
            }
            if (iVar35 == 2) {
              iVar42 = param_1[0x1b1];
              iVar37 = param_1[0x1b2] + param_1[0x1b0] + param_1[0x1b4];
            }
            else {
              iVar42 = iVar42 + param_1[0x1af] + param_1[0x1b3];
            }
            iVar35 = iVar35 + 1;
          } while (iVar35 < 6);
          break;
        }
        iVar30 = FUN_4a0cb850(param_2,&piStack_30,2);
        if (iVar30 == 0) break;
LAB_4a11c9fc:
        FUN_4a122618(param_1,0xd);
        break;
      case 0x10:
      case 0x11:
      case 0x12:
        FUN_4a125930(param_1,param_2,&piStack_30);
        break;
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
        FUN_4a125f40(param_1,param_2,&piStack_30);
      }
      piVar14 = (int *)FUN_4a16bef4(&piStack_30);
      return piVar14;
    case (int *)0x5:
      iVar30 = FUN_4a0cb850(param_2,param_3,0x80);
      if (iVar30 == 0) {
        iVar30 = FUN_4a0cb850(param_2,param_3,0x400);
        if (iVar30 == 0) {
          iVar30 = FUN_4a0cb850(param_2,param_3,0x100);
          if (iVar30 != 0) {
            FUN_4a1161d0(param_1,6);
            if (param_1[0x76] == 2) {
              if (*(char *)((int)param_1 + 0x632) != '\0') {
                *(undefined1 *)((int)param_1 + 0x632) = 0;
                *(undefined1 *)((int)param_1 + 0x633) = 0;
                *(undefined2 *)(param_1 + 0x18d) = 0xffff;
                param_1[0x19d] = 0;
                param_1[0xad] = 0;
                FUN_4a115d8c(param_1,0);
              }
              uVar38 = FUN_4a13fa14(param_1[9],0);
              uVar38 = FUN_4a1407a0(param_1[9],uVar38);
              uVar38 = FUN_4a11f758(param_1,uVar38);
              iVar42 = param_1[0x17e];
              piStack_30 = (int *)0x0;
              FUN_4a0737a4(iVar42,0xaa,uVar38);
              FUN_4a110aac(&piStack_28,param_1);
              iVar30 = 0;
              if (0 < unaff_r4) {
                do {
                  if (unaff_r5 == 0) {
                    iVar37 = 0;
                  }
                  else {
                    iVar37 = *(int *)(unaff_r5 + 8);
                  }
                  iVar37 = *(int *)(iVar37 + iVar30 * 4);
                  if (iVar37 != iVar42) {
                    FUN_4a071d48(iVar37,uVar38);
                  }
                  iVar30 = iVar30 + 1;
                } while (iVar30 < unaff_r4);
              }
              piVar14 = (int *)FUN_4a169a1c(&piStack_28);
              return piVar14;
            }
            param_1[0x73] = 2;
            param_1[0x74] = 99;
            param_1[0x72] = 2;
            piVar14 = (int *)FUN_4a0fb654(param_1[8]);
            if (piVar14 != (int *)0x0) {
              return piVar14;
            }
            piVar14 = (int *)param_1[8];
            goto LAB_4a0fc244;
          }
          iVar30 = FUN_4a0cb850(param_2,param_3,0x200);
          if (iVar30 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a10f084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
            return piVar14;
          }
          FUN_4a1161d0(param_1,6);
          param_1[0x73] = 2;
          param_1[0x74] = 0x62;
          uVar31 = 4;
        }
        else {
          FUN_4a1161d0(param_1,6);
          param_1[0x73] = 2;
          param_1[0x74] = 0x61;
          uVar31 = 4;
        }
        goto code_r0x4a1161d0;
      }
      break;
    case (int *)0x6:
      iVar30 = FUN_4a0cb850(param_2,param_3,6);
      if (iVar30 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a11fabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
        return piVar14;
      }
      switch((int *)param_1[0xa4]) {
      case (int *)0x0:
        FUN_4a04188c(DAT_4a11fbdc);
        goto LAB_4a11fb4c;
      case (int *)0x1:
        param_1[0x73] = 2;
        param_1[0x74] = 0x62;
        param_1[0x72] = 2;
        piVar14 = (int *)FUN_4a0fb654(param_1[8]);
        if (piVar14 != (int *)0x0) {
          return piVar14;
        }
        piVar14 = (int *)param_1[8];
        goto LAB_4a0fc244;
      case (int *)0x2:
        if (*(int *)(param_1[0x17e] + 0xd4) == 0xaa) {
          FUN_4a076d54();
        }
LAB_4a11fb4c:
        uVar31 = 6;
        goto code_r0x4a1161d0;
      case (int *)0x3:
        iVar30 = 6;
        break;
      case (int *)0x4:
        iVar30 = 7;
        break;
      default:
        return (int *)param_1[0xa4];
      case (int *)0x6:
        FUN_4a1161d0(param_1,0x15);
        iVar30 = param_1[0x298];
        piVar14 = param_1;
        switch(iVar30 + 1) {
        case 0:
          FUN_4a0d6154(param_1[9]);
          param_1[0x299] = 0;
          param_1[0xa4] = 6;
          FUN_4a0cd7c0(param_1,0x84e);
          FUN_4a1161d0(param_1,9);
          piVar14 = (int *)FUN_4a0d58d0(param_1[9]);
          break;
        case 1:
          piVar14 = (int *)FUN_4a11e2a0(param_1,9);
          break;
        case 3:
          piVar14 = (int *)(param_1[0x299] ^ 0x1010);
          param_1[0x299] = (int)piVar14;
          break;
        case 4:
          param_1[0xa4] = 6;
          FUN_4a0cd7c0(param_1,0xc7a);
          FUN_4a1161d0(param_1,9);
          piVar14 = (int *)FUN_4a0d58d0(param_1[9]);
          break;
        case 5:
          param_1[0xae] = 2;
          if ((param_1[0xad] == 0) || (iVar42 = FUN_4a146b58(param_1[0xad],2), iVar42 == 0)) {
            param_1[0xad] = 0;
            FUN_4a115d8c(param_1,0);
          }
          piVar14 = (int *)0x0;
          *(undefined1 *)(param_1 + 0x77) = 0;
          break;
        case 6:
          piVar14 = (int *)(param_1[0x299] ^ 1);
          goto LAB_4a1211f8;
        case 7:
          param_1[0x299] = param_1[0x299] ^ 4;
          FUN_4a0d761c(param_1[9],0,0x22ffff);
          FUN_4a0d761c(param_1[9],2,0x4b0000);
          FUN_4a0d761c(param_1[9],1,0x640000);
          FUN_4a0d761c(param_1[9],5,0x4b0000);
          FUN_4a0d761c(param_1[9],3,0x4b0000);
          FUN_4a0d761c(param_1[9],4,0x4b0000);
          piVar14 = (int *)0xbb8;
          param_1[0x29c] = 3000;
          break;
        case 8:
          piVar14 = (int *)0x0;
          *(undefined1 *)(param_1 + 0x29d) = 0;
          break;
        case 9:
          param_1[0xa4] = 6;
          FUN_4a0cd7c0(param_1,0xc81);
          FUN_4a1161d0(param_1,9);
          piVar14 = (int *)FUN_4a0d58d0(param_1[9]);
          break;
        case 10:
          param_1[0x29c] = 5000;
          piVar14 = (int *)0x0;
          param_1[0x299] = param_1[0x299] ^ 8;
          *(undefined1 *)(param_1 + 0x29d) = 0;
          break;
        case 0xb:
          piVar14 = (int *)(param_1[0x299] ^ 0x40);
LAB_4a1211f8:
          param_1[0x299] = (int)piVar14;
          break;
        case 0xc:
          FUN_4a113618(param_1,3);
          param_1[0x299] = -1;
          piVar14 = (int *)param_1[8];
          *(undefined1 *)((int)piVar14 + 0x496) = 1;
        }
        param_1[0x298] = iVar30 + 1;
        return piVar14;
      case (int *)0x7:
        iVar30 = 0;
        break;
      case (int *)0x8:
        iVar30 = 8;
        break;
      case (int *)0x9:
        iVar30 = 1;
        break;
      case (int *)0xa:
        iVar30 = 4;
      }
      FUN_4a0d58d0(param_1[9]);
      FUN_4a0ff3f8(param_1[8],400);
      param_1[0x1f8] = iVar30;
      FUN_4a1161d0(param_1,0x13);
      FUN_4a11be8c(param_1,1);
      uVar31 = 0;
      iVar42 = 0xd;
      switch(iVar30) {
      case 0:
        uVar31 = 0x400;
        param_1[0x1f9] = 0xc;
        goto switchD_4a110030_default;
      case 1:
        uVar31 = 0x800;
        iVar42 = 0xe;
        break;
      case 2:
        uVar31 = 0x1000;
        break;
      case 3:
        uVar31 = 0x2000;
        break;
      case 4:
        uVar31 = 0x4000;
        goto LAB_4a1100b8;
      case 5:
        uVar31 = 0x8000;
        iVar42 = 0x10;
        break;
      case 6:
        uVar31 = 0x10000;
        goto LAB_4a1100ac;
      case 7:
        uVar31 = 0x20000;
LAB_4a1100ac:
        param_1[0x1f9] = 0xf;
        goto switchD_4a110030_default;
      case 8:
        uVar31 = 0x40000;
LAB_4a1100b8:
        param_1[0x1f9] = 0x11;
      default:
        goto switchD_4a110030_default;
      }
      param_1[0x1f9] = iVar42;
switchD_4a110030_default:
      iVar37 = param_1[8];
      *(undefined4 *)(iVar37 + 0x490) = 0;
      iVar30 = *(int *)(iVar37 + 0x470) >> 1;
      iVar42 = *(int *)(iVar37 + 0x470) + *(int *)(iVar37 + 0x484) >> 1;
      uVar38 = *(undefined4 *)(iVar37 + 0x60);
      piStack_28 = (int *)(iVar37 + 0x128);
      if (0 < iVar42) {
        do {
          iVar35 = *(int *)(iVar37 + 0x490);
          if (iVar35 < iVar30) {
            if (*(int *)(iVar37 + 0x474) == 0) {
              iVar45 = 0;
            }
            else {
              iVar45 = *(int *)(*(int *)(iVar37 + 0x474) + 8);
            }
            if ((*(uint *)(iVar45 + (iVar35 * 2 + 1) * 4) & uVar31) != 0) {
              iVar35 = 1;
              while( true ) {
                if (*(int *)(iVar37 + 0x474) == 0) {
                  iVar45 = 0;
                }
                else {
                  iVar45 = *(int *)(*(int *)(iVar37 + 0x474) + 8);
                }
                iVar45 = FUN_4a09ad94(uVar38,*(undefined4 *)(iVar45 + *(int *)(iVar37 + 0x490) * 8))
                ;
                if ((iVar45 != 0) || (1 < iVar35)) break;
                iVar35 = iVar35 + 1;
              }
              *(int *)(iVar37 + 0x490) = *(int *)(iVar37 + 0x490) + 1;
            }
          }
          else {
            iVar35 = iVar35 - iVar30;
            iVar45 = *(int *)(iVar37 + 0x488);
            if (iVar45 == 0) {
              iVar32 = 0;
            }
            else {
              iVar32 = *(int *)(iVar45 + 8);
            }
            if ((*(uint *)(iVar32 + (iVar35 * 2 + 1) * 4) & uVar31) != 0) {
              if (iVar45 == 0) {
                iVar45 = 0;
              }
              else {
                iVar45 = *(int *)(iVar45 + 8);
              }
              FUN_4a09f864(piStack_28,*(undefined4 *)(iVar45 + iVar35 * 8));
            }
          }
          piVar14 = (int *)(*(int *)(iVar37 + 0x490) + 1);
          *(int **)(iVar37 + 0x490) = piVar14;
        } while ((int)piVar14 < iVar42);
        return piVar14;
      }
      return piStack_28;
    case (int *)0x7:
      iVar30 = FUN_4a0cb850(param_2,param_3,0x44);
      if (iVar30 == 0) {
        iVar30 = FUN_4a0cb850(param_2,param_3,0x20);
        if (iVar30 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a10f0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
          return piVar14;
        }
        iVar45 = param_1[9];
        iVar30 = FUN_4a13fa14(iVar45,0);
        iVar42 = FUN_4a14039c(iVar45,0);
        iVar37 = param_1[0x1b9];
        iVar35 = param_1[0x1ba];
        FUN_4a0d7904(iVar45,iVar37,iVar35);
        if (iVar30 != iVar37 && iVar37 != -1) {
          FUN_4a0daefc(iVar45,0x13);
        }
        if ((iVar30 == iVar37) && (iVar42 < iVar35)) {
          FUN_4a0daefc(iVar45,0x35);
        }
        iVar30 = FUN_4a140750(iVar45,iVar37);
        if (iVar30 + -1 == iVar35) {
          FUN_4a0daefc(iVar45,0x36);
        }
        iVar30 = param_1[0x17e];
LAB_4a076dfc:
        iVar42 = FUN_4a146ea4(*(undefined4 *)(iVar30 + 0x20));
        if (iVar42 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a076e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
          return piVar14;
        }
        uVar38 = FUN_4a146a9c(iVar30);
        uVar13 = FUN_4a107058(iVar30,0);
        FUN_4a0caf08(uVar13,uVar38);
        piVar14 = *(int **)(iVar30 + 0xb4);
        *(undefined4 *)(iVar30 + 0xb4) = 0xffffffff;
        if (*(int **)(iVar30 + 0xb4) == piVar14) {
          return *(int **)(iVar30 + 0xb4);
        }
        *(int **)(iVar30 + 0xb4) = piVar14;
        uVar38 = FUN_4a146c0c(iVar30);
        if (piVar14 == (int *)0x2 || piVar14 == (int *)0x3) {
          uVar13 = FUN_4a13eaec(uVar38,0x456);
          FUN_4a0b4608(uVar13,piVar14 == (int *)0x3);
          uVar38 = FUN_4a13eaec(uVar38,0x455);
          FUN_4a0b4608(uVar38,piVar14 == (int *)0x2);
        }
        uVar13 = *(undefined4 *)(iVar30 + 0xb8);
        *(undefined4 *)(iVar30 + 0xb8) = 0xffffffff;
        uVar38 = FUN_4a1460a4();
        piVar14 = (int *)FUN_4a0f1a04(uVar38,uVar13);
        if (*(int **)(iVar30 + 0xb8) == piVar14) {
          return piVar14;
        }
        *(int **)(iVar30 + 0xb8) = piVar14;
        uVar38 = FUN_4a1460a4(iVar30);
        uVar38 = FUN_4a144e00(uVar38,*(undefined4 *)(iVar30 + 0xb4),piVar14);
        FUN_4a109ed4(iVar30,uVar38);
        uVar13 = 0;
        uVar38 = 0xffffffff;
        bVar49 = false;
        if (piVar14 == (int *)0x41) {
          uVar38 = 0xaf;
          uVar13 = 0xf7;
          goto LAB_4a07434c;
        }
        if ((int)piVar14 < 0x42) {
          if (piVar14 == (int *)0x26) {
            uVar38 = 0xae;
            uVar13 = 0xdb;
            goto LAB_4a07434c;
          }
          if ((int)piVar14 < 0x27) {
            if (piVar14 == (int *)0x22) {
              uVar38 = 0xab;
            }
            else if (piVar14 == (int *)&DAT_00000024) {
              uVar38 = 0xae;
              uVar13 = 0xd9;
            }
            else if (piVar14 == (int *)&DAT_00000025) {
              uVar38 = 0xae;
              uVar13 = 0xda;
            }
            goto LAB_4a07434c;
          }
          if (piVar14 != (int *)0x2d) {
            if (piVar14 == (int *)0x39) {
              uVar38 = 0xac;
              uVar13 = 0xdd;
            }
            goto LAB_4a07434c;
          }
        }
        else if (piVar14 != (int *)0x5a) {
          if ((int)piVar14 < 0x5b) {
            if (piVar14 == (int *)&DAT_0000004c) {
              uVar38 = 0xae;
              uVar13 = 0xdc;
            }
            else if (piVar14 == (int *)0x54) {
              uVar38 = 0xaa;
              uVar13 = 0xde;
            }
            goto LAB_4a07434c;
          }
          if (piVar14 != (int *)0x5b && piVar14 != (int *)0x5c) goto LAB_4a07434c;
        }
        bVar49 = true;
LAB_4a07434c:
        FUN_4a1078a4(iVar30,uVar38);
        FUN_4a107e58(iVar30,uVar13);
        if (bVar49) {
          piVar14 = (int *)FUN_4a1460b0(iVar30,0);
          if (*piVar14 == 0) {
            iVar30 = FUN_4a099c5c();
            if (piVar14[1] < iVar30) {
              if (piVar14[1] < 0) {
                iVar30 = FUN_4a099c5c(*piVar14);
                piVar14[1] = iVar30 + -1;
              }
            }
            else {
              piVar14[1] = 0;
            }
          }
          else {
            *piVar14 = 0;
            if ((piVar14[3] & 8U) == 0) {
              piVar14[1] = 0;
            }
            else {
              iVar30 = FUN_4a099c5c(0);
              piVar14[1] = iVar30 + -1;
            }
            piVar14[2] = 0;
          }
          piVar14[3] = 7;
          return (int *)&DAT_00000007;
        }
        piVar14 = (int *)FUN_4a1460b0(iVar30,0);
        if (*piVar14 == 0) {
          piVar14 = (int *)FUN_4a1460b0(iVar30,0);
          piVar14[3] = piVar14[3] & 0xfffffffd;
          return piVar14;
        }
                    /* WARNING: Could not recover jumptable at 0x4a074394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
        return piVar14;
      }
      break;
    case (int *)0x8:
      iVar30 = FUN_4a0cb850(param_2,param_3,6);
      if (iVar30 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a114544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
        return piVar14;
      }
      iVar42 = param_1[9];
      iVar30 = FUN_4a141000(iVar42);
      if (iVar30 != 0) {
        iVar30 = FUN_4a13fa14(iVar42,0);
        iVar42 = FUN_4a14039c(iVar42,0);
        iVar37 = 0;
        iVar42 = iVar42 + 1;
        *(undefined1 *)((int)param_1 + 0x632) = 0;
        *(undefined1 *)((int)param_1 + 0x633) = 0;
        *(undefined2 *)(param_1 + 0x18d) = 0xffff;
        param_1[0x19d] = 0;
        param_1[0xad] = 0;
        FUN_4a115d8c(param_1,0);
        param_1[0x1b9] = iVar30;
        param_1[0x1ba] = iVar42;
        if (iVar30 == -1) {
          FUN_4a0cd7c0(param_1,0xa50,0xa9c);
        }
        else {
          iVar35 = FUN_4a140e04(param_1[9],iVar30,iVar42);
          if (iVar35 == 0) {
            iVar35 = param_1[9];
            param_1[0x1b9] = iVar30;
            param_1[0x1ba] = iVar42;
            iVar42 = FUN_4a13fac4(iVar35,iVar30);
            if (*(int *)(iVar35 + 0x420) != 0) {
              iVar37 = *(int *)(*(int *)(iVar35 + 0x420) + 8);
            }
            sVar3 = *(short *)(iVar37 + iVar42 * 2);
            uVar38 = FUN_4a140738(iVar35,iVar30);
            FUN_4a0ce9a4(param_1,uVar38,(int)sVar3);
            uVar31 = 0xc;
            goto code_r0x4a1161d0;
          }
          iVar42 = FUN_4a13fa14(param_1[9],0);
          if (iVar42 == -1) {
            uVar38 = 0xa9f;
          }
          else if (iVar42 == iVar30) {
            uVar38 = 0xaa1;
          }
          else {
            uVar38 = 0xaa0;
          }
          FUN_4a0ce964(param_1,uVar38);
        }
        uVar31 = 10;
        goto code_r0x4a1161d0;
      }
      iVar30 = FUN_4a0fb748(param_1[8]);
      if (0xe < iVar30) {
        uVar31 = 6;
        goto code_r0x4a1161d0;
      }
      iVar30 = FUN_4a0dc778(param_1[9]);
      param_1[499] = -1;
      param_1[0x1f2] = iVar30;
      param_1[0x1f5] = -1;
      FUN_4a1161d0(param_1,0x12);
      iVar30 = 0;
      goto code_r0x4a11bed4;
    case (int *)0x9:
      iVar30 = FUN_4a0cb850(param_2,param_3,4);
      if (iVar30 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a10f1c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
        return piVar14;
      }
      break;
    case (int *)0xa:
      iVar30 = FUN_4a0cb850(param_2,param_3,0x46);
      if (iVar30 == 0) {
        iVar30 = FUN_4a0cb850(param_2,param_3,0x20);
        if (iVar30 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a10f1f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
          return piVar14;
        }
        FUN_4a0d7904(param_1[9],0xffffffff,0);
        *(undefined1 *)(param_1 + 0x1bc) = 1;
        FUN_4a0cd7c0(param_1,0xaf4,0x991);
        iVar30 = param_1[0x17e];
        goto LAB_4a076dfc;
      }
      break;
    case (int *)0xb:
      iVar30 = FUN_4a0cb850(param_2,param_3,0x46);
      if (iVar30 == 0) {
        iVar30 = FUN_4a0cb850(param_2,param_3,0x20);
        if (iVar30 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a10f274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
          return piVar14;
        }
        iVar30 = FUN_4a14155c(param_1[9]);
        if (iVar30 != 0) {
          FUN_4a0d71e4(param_1[9]);
        }
        iVar30 = param_1[0x298];
      }
      else {
        iVar30 = param_1[0x298];
      }
      if (iVar30 == 10) goto LAB_4a10f298;
      break;
    case (int *)0xc:
      iVar30 = FUN_4a0cb850(param_2,param_3,6);
      if (iVar30 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a10f2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
        return piVar14;
      }
      param_1[0x1ce] = -1;
      break;
    case (int *)0xd:
      iVar30 = FUN_4a0cb850(param_2,param_3,3);
      if (iVar30 == 0) {
        iVar30 = FUN_4a0cb850(param_2,param_3,0x80000);
        puVar8 = PTR_DAT_4a12592c;
        puVar7 = PTR_DAT_4a1242f0;
        puVar6 = PTR_DAT_4a1242ec;
        puVar5 = PTR_DAT_4a124160;
        if (iVar30 != 0) {
          FUN_4a0475bc(1,0x41700000,DAT_4a10f480);
          iVar30 = host_s3eAccelerometerGetInt_arm(0);
          *PTR_DAT_4a120740 = iVar30 != 0;
          param_1[0x1fb] = 4;
                    /* WARNING: Could not recover jumptable at 0x4a120354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          piVar14 = (int *)(*(code *)PTR_caseD_4_4a12036c)();
          return piVar14;
        }
        if (param_1[0x1fb] != 1) {
                    /* WARNING: Could not recover jumptable at 0x4a10f334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
          return piVar14;
        }
        piVar14 = (int *)param_1[0x1fd];
        if (piVar14 == (int *)0x0) {
          piVar14 = *(int **)PTR_DAT_4a124164;
          piVar40 = (int *)0x0;
          piStack_30 = param_1;
          uStack_2c = param_2;
          piStack_28 = param_3;
          if (*PTR_DAT_4a124160 != '\0') {
            if (param_2 == 3) {
              piVar47 = (int *)param_3[3];
              bVar49 = piVar47 == (int *)0x0;
              piVar33 = piVar40;
              if (!bVar49) {
                piVar33 = (int *)piVar47[2];
              }
              if (bVar49) {
                piVar47 = piVar40;
              }
              *(int *)(PTR_DAT_4a124160 + 0x20) = piVar33[1];
              puVar6 = PTR_DAT_4a124168;
              if (!bVar49) {
                piVar47 = (int *)piVar47[2];
              }
              *(int *)(puVar5 + 0x24) = piVar47[2];
              FUN_4a0bbf48(piVar14,puVar6 + -4,puVar6,1);
              FUN_4a16be24(&uStack_44,3);
              FUN_4a16be24(&uStack_58,3);
              iVar42 = -1;
              iVar37 = 0;
              iVar30 = 90000;
              if (0 < param_1[0x218]) {
                do {
                  FUN_4a0b74b0(*(undefined4 *)(param_1[iVar37 + 0x206] + 0x28),0xc1c);
                  uVar38 = FUN_4a16588c();
                  uVar13 = FUN_4a16bdcc(auStack_6c,&uStack_44);
                  uVar22 = FUN_4a146c0c(param_1[0x1fc]);
                  FUN_4a13ebfc(uVar22,uVar13,uVar38,1);
                  FUN_4a16bef4(auStack_6c);
                  bVar49 = uStack_38 != 0;
                  piVar14 = piVar40;
                  if (bVar49) {
                    piVar14 = *(int **)(uStack_38 + 8);
                  }
                  iVar35 = piVar14[2];
                  piVar14 = piVar40;
                  if (bVar49) {
                    piVar14 = *(int **)(uStack_38 + 8);
                  }
                  iVar45 = piVar14[1];
                  piVar14 = piVar40;
                  if (bVar49) {
                    piVar14 = *(int **)(uStack_38 + 8);
                  }
                  iVar32 = *piVar14;
                  uVar38 = FUN_4a16bdcc(auStack_6c,&uStack_58);
                  iStack_70 = iVar35;
                  FUN_4a0f2970(param_1[10],uVar38,iVar32,iVar45);
                  FUN_4a16bef4(auStack_6c);
                  bVar49 = aiStack_54[2] != 0;
                  piVar14 = piVar40;
                  if (bVar49) {
                    piVar14 = *(int **)(aiStack_54[2] + 8);
                  }
                  piVar47 = piVar40;
                  if (bVar49) {
                    piVar47 = *(int **)(aiStack_54[2] + 8);
                  }
                  piVar33 = piVar40;
                  if (bVar49) {
                    piVar33 = *(int **)(aiStack_54[2] + 8);
                  }
                  piVar23 = piVar40;
                  if (bVar49) {
                    piVar23 = *(int **)(aiStack_54[2] + 8);
                  }
                  iVar45 = (*(int *)(PTR_DAT_4a124160 + 0x24) - piVar33[1]) *
                           (*(int *)(PTR_DAT_4a124160 + 0x24) - piVar23[1]) +
                           (*(int *)(PTR_DAT_4a124160 + 0x20) - *piVar47) *
                           (*(int *)(PTR_DAT_4a124160 + 0x20) - *piVar14);
                  iVar35 = iVar30;
                  if (iVar45 < iVar30) {
                    iVar35 = iVar45;
                  }
                  if (iVar45 < iVar30) {
                    iVar42 = iVar37;
                  }
                  iVar37 = iVar37 + 1;
                  iVar30 = iVar35;
                } while (iVar37 < param_1[0x218]);
              }
              if ((param_1[0x218] <= iVar42) || (param_1[0x212] == iVar42)) {
                iVar42 = -1;
              }
              iVar30 = param_1[0x212];
              if (iVar30 == -1) {
                param_1[0x212] = iVar42;
                if (iVar42 != -1) {
                  FUN_4a06f95c(param_1[iVar42 + 0x206],0xe0,0x10);
                  param_1[0x214] = 1;
                }
              }
              else {
                param_1[0x213] = iVar30;
                FUN_4a06f95c(param_1[iVar30 + 0x206],0xe2,0x10);
                param_1[0x214] = 0;
                param_1[0x212] = iVar42;
              }
              param_1[0x205] = 0;
              FUN_4a16bef4(&uStack_58);
              piVar14 = (int *)FUN_4a16bef4(&uStack_44);
              return piVar14;
            }
            return piVar14;
          }
          if (param_2 == 0) {
            iVar30 = param_3[3];
            bVar49 = iVar30 == 0;
            if (bVar49) {
              iVar42 = 0;
            }
            else {
              iVar42 = *(int *)(iVar30 + 8);
            }
            if (bVar49) {
              iVar30 = 0;
            }
            *(undefined4 *)(PTR_DAT_4a124160 + 0x20) = *(undefined4 *)(iVar42 + 4);
            puVar5 = PTR_DAT_4a124160;
            if (!bVar49) {
              iVar30 = *(int *)(iVar30 + 8);
            }
            *(undefined4 *)(PTR_DAT_4a124160 + 0x24) = *(undefined4 *)(iVar30 + 8);
            FUN_4a0bbf48(piVar14,puVar5 + 0x20);
            FUN_4a16be24(&uStack_44,3);
            FUN_4a16be24(&uStack_58,3);
            iVar42 = -1;
            iVar37 = 0;
            iVar30 = 90000;
            if (0 < param_1[0x218]) {
              do {
                FUN_4a0b74b0(*(undefined4 *)(param_1[iVar37 + 0x206] + 0x28),0xc1c);
                uVar38 = FUN_4a16588c();
                uVar13 = FUN_4a16bdcc(auStack_6c,&uStack_44);
                uVar22 = FUN_4a146c0c(param_1[0x1fc]);
                FUN_4a13ebfc(uVar22,uVar13,uVar38,1);
                FUN_4a16bef4(auStack_6c);
                bVar49 = uStack_38 != 0;
                if (bVar49) {
                  iVar35 = *(int *)(uStack_38 + 8);
                }
                else {
                  iVar35 = 0;
                }
                iVar35 = *(int *)(iVar35 + 8);
                if (bVar49) {
                  iVar45 = *(int *)(uStack_38 + 8);
                }
                else {
                  iVar45 = 0;
                }
                uVar38 = *(undefined4 *)(iVar45 + 4);
                if (bVar49) {
                  puVar10 = *(undefined4 **)(uStack_38 + 8);
                }
                else {
                  puVar10 = (undefined4 *)0x0;
                }
                uVar22 = *puVar10;
                uVar13 = FUN_4a16bdcc(auStack_6c,&uStack_58);
                iStack_70 = iVar35;
                FUN_4a0f2970(param_1[10],uVar13,uVar22,uVar38);
                FUN_4a16bef4(auStack_6c);
                bVar49 = aiStack_54[2] == 0;
                if (bVar49) {
                  piVar14 = (int *)0x0;
                }
                else {
                  piVar14 = *(int **)(aiStack_54[2] + 8);
                }
                iVar35 = 0;
                if (bVar49) {
                  piVar47 = (int *)0x0;
                }
                else {
                  piVar47 = *(int **)(aiStack_54[2] + 8);
                }
                if (bVar49) {
                  iVar45 = 0;
                }
                else {
                  iVar45 = *(int *)(aiStack_54[2] + 8);
                }
                if (!bVar49) {
                  iVar35 = *(int *)(aiStack_54[2] + 8);
                }
                iVar45 = (*(int *)(PTR_DAT_4a124160 + 0x24) - *(int *)(iVar45 + 4)) *
                         (*(int *)(PTR_DAT_4a124160 + 0x24) - *(int *)(iVar35 + 4)) +
                         (*(int *)(PTR_DAT_4a124160 + 0x20) - *piVar14) *
                         (*(int *)(PTR_DAT_4a124160 + 0x20) - *piVar47);
                iVar35 = iVar30;
                if (iVar45 < iVar30) {
                  iVar35 = iVar45;
                }
                if (iVar45 < iVar30) {
                  iVar42 = iVar37;
                }
                iVar37 = iVar37 + 1;
                iVar30 = iVar35;
              } while (iVar37 < param_1[0x218]);
            }
            if ((param_1[0x218] <= iVar42) || (param_1[0x212] == iVar42)) {
              iVar42 = -1;
            }
            iVar30 = param_1[0x212];
            if (iVar30 == -1) {
              param_1[0x212] = iVar42;
              if (iVar42 != -1) {
                FUN_4a06f95c(param_1[iVar42 + 0x206],0xe0,0x10);
                param_1[0x214] = 1;
              }
            }
            else {
              param_1[0x213] = iVar30;
              FUN_4a06f95c(param_1[iVar30 + 0x206],0xe2,0x10);
              param_1[0x214] = 0;
              param_1[0x212] = iVar42;
            }
            *(undefined4 *)(PTR_DAT_4a124160 + 4) = 0;
            FUN_4a16bef4(&uStack_58);
            FUN_4a16bef4(&uStack_44);
          }
          if (uStack_2c == 1) {
            if (param_1[0x212] == -1) {
                    /* WARNING: Could not recover jumptable at 0x4a124034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
              return piVar14;
            }
            piVar14 = piVar40;
            if (piStack_28[3] != 0) {
              piVar14 = *(int **)(piStack_28[3] + 8);
            }
            piStack_34 = (int *)piVar14[1];
            if (piStack_28[3] != 0) {
              piVar40 = *(int **)(piStack_28[3] + 8);
            }
            uStack_38 = piVar40[2];
            FUN_4a0bbf48(*(undefined4 *)PTR_DAT_4a124164,&piStack_34,&uStack_38);
            piVar14 = piStack_34;
            uVar31 = uStack_38;
            puVar5 = PTR_DAT_4a124160;
            iVar30 = FUN_4a171fac((uStack_38 - *(int *)(PTR_DAT_4a124160 + 0x24)) *
                                  (uStack_38 - *(int *)(PTR_DAT_4a124160 + 0x24)) +
                                  ((int)piStack_34 - *(int *)(PTR_DAT_4a124160 + 0x20)) *
                                  ((int)piStack_34 - *(int *)(PTR_DAT_4a124160 + 0x20)));
            if (0x43800000 < iVar30) {
              if ((*(int *)(puVar5 + 4) == 0) ||
                 (iVar30 = *(int *)(puVar5 + 4) + 300, *(int *)(puVar5 + 4) = iVar30, 600 < iVar30))
              {
                *(undefined4 *)(puVar5 + 4) = 600;
              }
              *(int **)(puVar5 + 0x20) = piVar14;
              *(uint *)(puVar5 + 0x24) = uVar31;
              return (int *)(puVar5 + 0x20);
            }
                    /* WARNING: Could not recover jumptable at 0x4a1240c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
            return piVar14;
          }
          if (uStack_2c != 2) {
                    /* WARNING: Could not recover jumptable at 0x4a124110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
            return piVar14;
          }
          *(undefined4 *)(PTR_DAT_4a124160 + 4) = 0;
          iVar30 = param_1[0x212];
          if (iVar30 != -1) {
            param_1[0x213] = iVar30;
            piVar14 = (int *)FUN_4a06f95c(param_1[iVar30 + 0x206],0xe2,0x10);
            param_1[0x212] = -1;
            param_1[0x214] = 0;
            return piVar14;
          }
          return (int *)0xffffffff;
        }
        if (piVar14 == (int *)0x1) {
          piVar14 = (int *)(uint)(byte)*PTR_DAT_4a1242ec;
          bVar49 = piVar14 == (int *)0x0;
          if (bVar49) {
            piVar14 = (int *)param_1[0x1fb];
          }
          if (!bVar49 || piVar14 != (int *)0x1) {
            return piVar14;
          }
          iVar30 = 0;
          if (param_2 == 0) {
            if (param_3[3] == 0) {
              iVar42 = 0;
            }
            else {
              iVar42 = *(int *)(param_3[3] + 8);
            }
            uStack_24 = *(uint *)(iVar42 + 4);
            if (param_3[3] == 0) {
              iVar42 = 0;
            }
            else {
              iVar42 = *(int *)(param_3[3] + 8);
            }
            piStack_28 = *(int **)(iVar42 + 8);
            FUN_4a0bbf48(*(undefined4 *)PTR_DAT_4a1242f0,&uStack_24,&piStack_28);
            *(undefined4 *)(puVar6 + 0x10) = 0;
            *(undefined4 *)(puVar6 + 8) = 1;
            if (0x3f7fffff < param_1[0x22f]) {
              uVar38 = FUN_4a17211c(param_1[0x22a],0x42c80000);
              FUN_4a1724e0(uVar38,0x43c80000);
              iVar42 = FUN_4a171e1c();
              piVar40 = (int *)(iVar42 + -0x20);
              bVar49 = SBORROW4(uStack_24,(int)piVar40);
              piVar14 = (int *)(uStack_24 - (int)piVar40);
              if ((int)piVar40 <= (int)uStack_24) {
                bVar49 = SBORROW4((int)piStack_28,0x58);
                piVar14 = piStack_28 + -0x16;
                piVar40 = piStack_28;
              }
              if ((int)piVar14 < 0 == bVar49) {
                uVar31 = iVar42 + 0x20;
                bVar51 = SBORROW4(uStack_24,uVar31);
                piVar14 = (int *)(uStack_24 - uVar31);
                bVar49 = uStack_24 == uVar31;
                if ((int)uStack_24 <= (int)uVar31) {
                  bVar51 = SBORROW4((int)piVar40,0x98);
                  piVar14 = piVar40 + -0x26;
                  bVar49 = piVar40 == (int *)0x98;
                }
                if (bVar49 || (int)piVar14 < 0 != bVar51) {
                  *(undefined4 *)(puVar6 + 0x10) = 1;
                }
              }
            }
          }
          else {
            if (param_2 != 1) goto LAB_4a1242d0;
            if (*(int **)(PTR_DAT_4a1242ec + 8) != (int *)0x1) {
              return *(int **)(PTR_DAT_4a1242ec + 8);
            }
          }
          iVar42 = iVar30;
          if (param_3[3] != 0) {
            iVar42 = *(int *)(param_3[3] + 8);
          }
          uStack_24 = *(uint *)(iVar42 + 4);
          if (param_3[3] != 0) {
            iVar30 = *(int *)(param_3[3] + 8);
          }
          piStack_28 = *(int **)(iVar30 + 8);
          FUN_4a0bbf48(*(undefined4 *)puVar7,&uStack_24,&piStack_28);
          if ((int)uStack_24 < 200) {
            piVar14 = (int *)0x1;
          }
          else if ((int)uStack_24 < 0x259) {
            piVar14 = (int *)0x0;
          }
          else {
            piVar14 = (int *)0xffffffff;
          }
          *(int **)(puVar6 + 0xc) = piVar14;
LAB_4a1242d0:
          if (param_2 == 2) {
            *(undefined4 *)(puVar6 + 0xc) = 0;
            *(undefined4 *)(puVar6 + 8) = 0;
            *(undefined4 *)(puVar6 + 0x10) = 0;
          }
          return piVar14;
        }
        if (piVar14 != (int *)0x2) {
          return piVar14;
        }
        if ((int *)param_1[0x1fb] != (int *)0x1) {
          return (int *)param_1[0x1fb];
        }
        iVar30 = 0;
        if (param_2 == 0) {
          if (param_3[3] == 0) {
            iVar42 = 0;
          }
          else {
            iVar42 = *(int *)(param_3[3] + 8);
          }
          piStack_28 = *(int **)(iVar42 + 4);
          if (param_3[3] == 0) {
            iVar42 = 0;
          }
          else {
            iVar42 = *(int *)(param_3[3] + 8);
          }
          uStack_2c = *(uint *)(iVar42 + 8);
          FUN_4a0bbf48(*(undefined4 *)PTR_DAT_4a12592c,&piStack_28,&uStack_2c);
          piVar14 = (int *)FUN_4a11fbe0(param_1,piStack_28);
          if (piVar14 == (int *)0xffffffff) {
                    /* WARNING: Could not recover jumptable at 0x4a125524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
            return piVar14;
          }
          iVar37 = param_1[0x265];
          iVar42 = iVar30;
          if (iVar37 != 0) {
            iVar42 = *(int *)(iVar37 + 8);
          }
          if (*(int *)(iVar42 + (int)piVar14 * 4) != 0) {
            if (iVar37 != 0) {
              iVar30 = *(int *)(iVar37 + 8);
            }
            if (*(int *)(iVar30 + (int)piVar14 * 4) != 3) {
              param_1[0x27e] = (int)piVar14;
            }
            return piVar14;
          }
          return piVar14;
        }
        if (param_2 == 1) {
          if (param_3[3] == 0) {
            iVar42 = 0;
          }
          else {
            iVar42 = *(int *)(param_3[3] + 8);
          }
          piStack_28 = *(int **)(iVar42 + 4);
          if (param_3[3] != 0) {
            iVar30 = *(int *)(param_3[3] + 8);
          }
          uStack_2c = *(uint *)(iVar30 + 8);
          FUN_4a0bbf48(*(undefined4 *)PTR_DAT_4a12592c,&piStack_28,&uStack_2c);
          if (param_1[0x27e] != -1) {
            piVar14 = (int *)FUN_4a11ffe4(param_1,piStack_28,uStack_2c);
            return piVar14;
          }
                    /* WARNING: Could not recover jumptable at 0x4a1255c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
          return piVar14;
        }
        if (param_2 != 2) {
          return (int *)0x1;
        }
        iVar42 = iVar30;
        if (param_3[3] != 0) {
          iVar42 = *(int *)(param_3[3] + 8);
        }
        piStack_28 = *(int **)(iVar42 + 4);
        iVar42 = iVar30;
        if (param_3[3] != 0) {
          iVar42 = *(int *)(param_3[3] + 8);
        }
        uStack_2c = *(uint *)(iVar42 + 8);
        FUN_4a0bbf48(*(undefined4 *)PTR_DAT_4a12592c,&piStack_28);
        piVar14 = piStack_28;
        uVar31 = uStack_2c;
        iVar42 = param_1[0x27e];
        if (iVar42 == -1) {
                    /* WARNING: Could not recover jumptable at 0x4a125640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
          return piVar14;
        }
        iVar35 = param_1[0x265];
        iVar37 = iVar30;
        if (iVar35 != 0) {
          iVar37 = *(int *)(iVar35 + 8);
        }
        if (*(int *)(iVar37 + iVar42 * 4) == 2) {
          uVar38 = *(undefined4 *)puVar8;
          piStack_30 = (int *)FUN_4a0bc200(uVar38);
          piStack_34 = (int *)FUN_4a0bc1f8(uVar38);
          if ((int)piStack_30 < (int)piStack_34) {
            ppiVar29 = &piStack_34;
          }
          else {
            ppiVar29 = &piStack_30;
          }
          piVar40 = *ppiVar29;
          iVar42 = FUN_4a0bbcf0(*(undefined4 *)puVar8,100);
          uVar38 = *(undefined4 *)puVar8;
          piVar40 = (int *)((int)piVar40 - iVar42);
          piStack_30 = (int *)FUN_4a0bc200(uVar38);
          piStack_34 = (int *)FUN_4a0bc1f8(uVar38);
          if ((int)piStack_34 < (int)piStack_30) {
            ppiVar29 = &piStack_34;
          }
          else {
            ppiVar29 = &piStack_30;
          }
          piVar47 = *ppiVar29;
          iVar35 = FUN_4a0bbcf0(*(undefined4 *)puVar8,100);
          iVar37 = param_1[0x27e];
          bVar51 = SBORROW4((int)piVar14,(int)piVar40);
          iVar42 = (int)piVar14 - (int)piVar40;
          bVar49 = piVar14 == piVar40;
          uVar16 = (int)piVar47 - iVar35;
          if ((int)piVar40 < (int)piVar14) {
            bVar51 = SBORROW4(uVar31,uVar16);
            iVar42 = uVar31 - uVar16;
            bVar49 = uVar31 == uVar16;
          }
          if (!bVar49 && iVar42 < 0 == bVar51) {
            iVar42 = iVar30;
            if (param_1[0x279] != 0) {
              iVar42 = *(int *)(param_1[0x279] + 8);
            }
            uVar38 = *(undefined4 *)(iVar42 + iVar37 * 4);
            iVar42 = iVar30;
            if (param_1[0x26f] != 0) {
              iVar42 = *(int *)(param_1[0x26f] + 8);
            }
            FUN_4a0b4ac8(uVar38,*(undefined4 *)(iVar42 + iVar37 * 4));
            iVar42 = iVar30;
            if (param_1[0x259] != 0) {
              iVar42 = *(int *)(param_1[0x259] + 8);
            }
            FUN_4a0b4ac8(uVar38,*(undefined4 *)(*(int *)(iVar42 + param_1[0x27e] * 4) + 0x28));
            iVar42 = iVar30;
            if (param_1[0x265] != 0) {
              iVar42 = *(int *)(param_1[0x265] + 8);
            }
            *(undefined4 *)(iVar42 + param_1[0x27e] * 4) = 0;
            iVar42 = iVar30;
            if (param_1[0x26f] != 0) {
              iVar42 = *(int *)(param_1[0x26f] + 8);
            }
            *(undefined4 *)(iVar42 + param_1[0x27e] * 4) = 0;
            if (param_1[0x259] != 0) {
              iVar30 = *(int *)(param_1[0x259] + 8);
            }
            FUN_4a06f898(*(undefined4 *)(iVar30 + param_1[0x27e] * 4),0);
            piVar14 = (int *)0xc11;
            param_1[0x1ff] = 0xc11;
            goto LAB_4a12591c;
          }
          iVar42 = param_1[0x26f];
        }
        else {
          iVar37 = iVar30;
          if (iVar35 != 0) {
            iVar37 = *(int *)(iVar35 + 8);
          }
          piVar14 = *(int **)(iVar37 + iVar42 * 4);
          if (piVar14 != (int *)0x1) goto LAB_4a12591c;
          iVar37 = FUN_4a11fbe0(param_1,piStack_28,uStack_2c);
          iVar42 = iVar30;
          if (iVar37 != -1) {
            iVar35 = iVar30;
            if (param_1[0x265] != 0) {
              iVar35 = *(int *)(param_1[0x265] + 8);
            }
            if (*(int *)(iVar35 + iVar37 * 4) == 0) {
              if (param_1[0x260] != 0) {
                iVar42 = *(int *)(param_1[0x260] + 8);
              }
              iVar42 = *(int *)(iVar42 + iVar37 * 4);
            }
          }
          iVar37 = param_1[0x27e];
          iVar35 = iVar30;
          if (param_1[0x260] != 0) {
            iVar35 = *(int *)(param_1[0x260] + 8);
          }
          if (iVar42 == *(int *)(iVar35 + iVar37 * 4)) {
            iVar37 = FUN_4a11fbe0(param_1,piStack_28,uStack_2c);
            iVar42 = iVar30;
            if (param_1[0x26f] != 0) {
              iVar42 = *(int *)(param_1[0x26f] + 8);
            }
            iVar42 = FUN_4a0af1d4(*(undefined4 *)(iVar42 + param_1[0x27e] * 4),0,0);
            iVar35 = param_1[0x279];
            if (iVar35 != 0) {
              iVar42 = *(int *)(iVar35 + 8);
            }
            if (iVar35 == 0) {
              iVar42 = iVar30;
            }
            uVar38 = *(undefined4 *)(iVar42 + iVar37 * 4);
            iVar42 = iVar30;
            if (param_1[0x26f] != 0) {
              iVar42 = *(int *)(param_1[0x26f] + 8);
            }
            uVar13 = FUN_4a0b75a8(*(undefined4 *)(iVar42 + param_1[0x27e] * 4));
            FUN_4a0b4c10(uVar38,uVar13);
            if (param_1[0x265] != 0) {
              iVar30 = *(int *)(param_1[0x265] + 8);
            }
            *(undefined4 *)(iVar30 + iVar37 * 4) = 3;
            piVar14 = (int *)(param_1[0x27d] + 1);
            param_1[0x27d] = (int)piVar14;
            if (piVar14 == (int *)param_1[0x27c]) {
              piVar14 = (int *)FUN_4a120320(param_1,0xb);
            }
            goto LAB_4a12591c;
          }
          iVar42 = param_1[0x26f];
        }
        if (iVar42 != 0) {
          iVar30 = *(int *)(iVar42 + 8);
        }
        piVar14 = (int *)FUN_4a0af278(*(undefined4 *)(iVar30 + iVar37 * 4),0,0);
        param_1[0x27e] = -1;
LAB_4a12591c:
        param_1[0x27e] = -1;
        return piVar14;
      }
code_r0x4a111238:
      if (*(char *)((int)param_1 + 0x632) != '\0') {
        *(undefined1 *)((int)param_1 + 0x632) = 0;
        *(undefined1 *)((int)param_1 + 0x633) = 0;
        *(undefined2 *)(param_1 + 0x18d) = 0xffff;
        param_1[0x19d] = 0;
        param_1[0xad] = 0;
        FUN_4a115d8c(param_1,0);
      }
      *(undefined1 *)(param_1 + 0x19f) = 1;
      iVar42 = 0;
      goto FUN_4a122adc;
    case (int *)0xe:
      piVar14 = (int *)param_1[0x284];
      if (piVar14 == (int *)0x0) {
        iVar30 = 0;
        if (param_2 == 0) {
          iVar42 = param_3[3];
          if (iVar42 != 0) {
            iVar37 = *(int *)(iVar42 + 8);
            iVar35 = *(int *)(iVar42 + 8);
          }
          else {
            iVar35 = 0;
            iVar37 = 0;
          }
          uVar38 = *(undefined4 *)(iVar35 + 8);
          if (iVar42 == 0) {
            iVar37 = 0;
          }
          uVar13 = *(undefined4 *)(iVar37 + 4);
          piStack_28 = *(int **)(PTR_DAT_4a123620 + 0x14);
          uVar22 = *(undefined4 *)(PTR_DAT_4a123620 + 0x18);
          uStack_2c = *(uint *)(PTR_DAT_4a123620 + 0x1c);
          uVar31 = FUN_4a0bbcf0(*(undefined4 *)PTR_DAT_4a123624,0x19);
          iVar42 = FUN_4a0cf540(param_1,7);
          iVar35 = *(int *)(iVar42 + 0xa4);
          piStack_30 = (int *)FUN_4a14367c(param_1[10],param_1[0x297],iVar35);
          iVar42 = FUN_4a143130(param_1[10],piStack_30);
          iVar37 = (int)*(char *)(iVar42 + 0x18);
          uStack_40 = uVar31;
          iVar42 = FUN_4a134a10(uVar13,uVar38,uVar22,piStack_28);
          if (iVar42 == 0) {
            uStack_40 = uVar31;
            iVar42 = FUN_4a134a10(uVar13,uVar38,uStack_2c,piStack_28);
            if (iVar42 == 0) goto LAB_4a123398;
            param_1[0x285] = 0;
            if (param_1[0x28a] == 0) {
              iVar42 = 0;
            }
            else {
              iVar42 = *(int *)(param_1[0x28a] + 8);
            }
            if (*(int *)(iVar42 + iVar35 * 4) != iVar37) {
              FUN_4a0cf554(param_1,0x15);
              iVar42 = param_1[0x28a];
              if (iVar42 == 0) {
                iVar45 = 0;
              }
              else {
                iVar45 = *(int *)(iVar42 + 8);
              }
              iVar45 = *(int *)(iVar45 + iVar35 * 4) + 1;
              if (iVar37 <= iVar45) {
                iVar45 = iVar37;
              }
              if (iVar42 == 0) {
                iVar42 = 0;
              }
              else {
                iVar42 = *(int *)(iVar42 + 8);
              }
              *(int *)(iVar42 + iVar35 * 4) = iVar45;
              iVar42 = FUN_4a14367c(param_1[10],param_1[0x297],iVar35);
              iVar37 = FUN_4a0cf540(param_1,7);
              iVar45 = *(int *)(iVar37 + 0xac);
              iVar37 = FUN_4a143130(param_1[10],iVar42);
              bVar49 = (*(uint *)(iVar37 + 0x10) & 2) != 0;
              if (bVar49) {
                iVar42 = 0;
              }
              if (bVar49 && 0 < iVar45) {
                do {
                  if (iVar42 != iVar35) {
                    uVar38 = FUN_4a14367c(param_1[10],param_1[0x297],iVar35);
                    iVar37 = FUN_4a143130(param_1[10],uVar38);
                    if ((*(uint *)(iVar37 + 0x10) & 2) != 0) {
                      iVar37 = param_1[0x28a];
                      if (iVar37 == 0) {
                        iVar32 = 0;
                      }
                      else {
                        iVar32 = *(int *)(iVar37 + 8);
                      }
                      if (0 < *(int *)(iVar32 + iVar42 * 4)) {
                        if (iVar37 == 0) {
                          iVar37 = 0;
                        }
                        else {
                          iVar37 = *(int *)(iVar37 + 8);
                        }
                        *(undefined4 *)(iVar37 + iVar42 * 4) = 0;
                      }
                    }
                  }
                  iVar42 = iVar42 + 1;
                } while (iVar42 < iVar45);
              }
              goto LAB_4a123398;
            }
          }
          else {
            param_1[0x286] = 0;
            if (param_1[0x28a] == 0) {
              iVar42 = 0;
            }
            else {
              iVar42 = *(int *)(param_1[0x28a] + 8);
            }
            if (*(int *)(iVar42 + iVar35 * 4) != 0) {
              iVar42 = FUN_4a143130(param_1[10],piStack_30);
              if (*(short *)(iVar42 + 0x16) < 1) {
                iVar42 = FUN_4a140338(param_1[9],piStack_30);
                if (param_1[0x28a] == 0) {
                  iVar37 = 0;
                }
                else {
                  iVar37 = *(int *)(param_1[0x28a] + 8);
                }
                if (*(int *)(iVar37 + iVar35 * 4) <= iVar42) goto LAB_4a123258;
              }
              FUN_4a0cf554(param_1,0x15);
              iVar42 = param_1[0x28a];
              iVar37 = 0;
              if (iVar42 == 0) {
                iVar45 = 0;
              }
              else {
                iVar45 = *(int *)(iVar42 + 8);
              }
              iVar45 = *(int *)(iVar45 + iVar35 * 4) + -1;
              if (iVar45 < 0) {
                iVar45 = 0;
              }
              if (iVar42 != 0) {
                iVar37 = *(int *)(iVar42 + 8);
              }
              *(int *)(iVar37 + iVar35 * 4) = iVar45;
              goto LAB_4a123398;
            }
          }
LAB_4a123258:
          FUN_4a0cf554(param_1,0x14);
LAB_4a123398:
          param_1[0x291] = 0;
          iVar42 = 0;
          if (0 < param_1[0x289]) {
            do {
              iVar37 = iVar30;
              if (param_1[0x28f] != 0) {
                iVar37 = *(int *)(param_1[0x28f] + 8);
              }
              uVar38 = *(undefined4 *)(iVar37 + iVar42 * 4);
              iVar35 = FUN_4a140338(param_1[9],uVar38);
              iVar37 = iVar30;
              if (param_1[0x28a] != 0) {
                iVar37 = *(int *)(param_1[0x28a] + 8);
              }
              iVar37 = *(int *)(iVar37 + iVar42 * 4);
              if (iVar37 < iVar35) {
                iVar45 = FUN_4a143130(param_1[10],uVar38);
                sVar3 = *(short *)(iVar45 + 0x16);
              }
              else {
                iVar45 = FUN_4a143130(param_1[10],uVar38);
                sVar3 = *(short *)(iVar45 + 0x14);
              }
              param_1[0x291] = (iVar37 - iVar35) * (int)sVar3 + param_1[0x291];
              iVar42 = iVar42 + 1;
            } while (iVar42 < param_1[0x289]);
            return (int *)param_1[0x289];
          }
                    /* WARNING: Could not recover jumptable at 0x4a1233b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
          return piVar14;
        }
        if (param_2 != 0xb) {
          return param_1;
        }
        iVar42 = FUN_4a0cb850(0xb,param_3,0x80000);
        if (iVar42 == 0) {
          iVar42 = FUN_4a0cb850(0xb,param_3);
          if (iVar42 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a1230d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
            return piVar14;
          }
          iVar42 = FUN_4a141aa4(param_1[9]);
          if (iVar42 < param_1[0x291]) {
            iVar30 = 1;
          }
          else {
            iVar42 = 0;
            piStack_28 = (int *)0x0;
            if (0 < param_1[0x289]) {
              do {
                uVar38 = FUN_4a14367c(param_1[10],param_1[0x297],iVar42);
                iVar37 = iVar30;
                if (param_1[0x28a] != 0) {
                  iVar37 = *(int *)(param_1[0x28a] + 8);
                }
                iVar35 = *(int *)(iVar37 + iVar42 * 4);
                iVar37 = FUN_4a140338(param_1[9],uVar38);
                if (iVar35 != iVar37) {
                  piStack_28 = (int *)0x1;
                  break;
                }
                iVar42 = iVar42 + 1;
              } while (iVar42 < param_1[0x289]);
            }
            iVar35 = 0;
            iVar45 = 0;
            iVar42 = FUN_4a142f80(param_1[10]);
            iVar37 = 0;
            if (0 < iVar42) {
              do {
                iVar32 = FUN_4a143130(param_1[10],iVar37);
                if ((*(uint *)(iVar32 + 0x10) & 2) != 0) {
                  iVar32 = FUN_4a16bdcc(&uStack_3c,param_1 + 0x28c);
                  uVar16 = *(uint *)(iVar32 + 8);
                  uVar31 = 0;
                  if ((int)uVar16 < 1) {
                    uVar39 = 0;
                  }
                  else {
                    uVar39 = uVar16 & 1;
                  }
                  if (uVar39 != 0) {
                    do {
                      iVar21 = iVar30;
                      if (*(int *)(iVar32 + 0xc) != 0) {
                        iVar21 = *(int *)(*(int *)(iVar32 + 0xc) + 8);
                      }
                      if (*(int *)(iVar21 + uVar31 * 4) == iVar37) goto LAB_4a123578;
                      uVar31 = uVar31 + 1;
                    } while ((int)uVar31 < (int)uVar39);
                  }
                  if ((int)uVar39 < (int)uVar16) {
                    iVar32 = *(int *)(iVar32 + 0xc);
                    do {
                      iVar21 = iVar30;
                      if (iVar32 != 0) {
                        iVar21 = *(int *)(iVar32 + 8);
                      }
                      uVar31 = uVar39;
                      if (*(int *)(iVar21 + uVar39 * 4) == iVar37) goto LAB_4a123578;
                      iVar21 = iVar30;
                      if (iVar32 != 0) {
                        iVar21 = *(int *)(iVar32 + 8);
                      }
                      if (*(int *)(iVar21 + (uVar39 + 1) * 4) == iVar37) {
                        uVar31 = uVar39 + 1;
                        goto LAB_4a123578;
                      }
                      uVar39 = uVar39 + 2;
                    } while ((int)uVar39 < (int)uVar16);
                  }
                  uVar31 = 0xffffffff;
LAB_4a123578:
                  FUN_4a16bef4(&uStack_3c);
                  if (uVar31 == 0xffffffff) {
                    iVar32 = FUN_4a140338(param_1[9],iVar37);
                    if (0 < iVar32) {
                      iVar35 = iVar35 + 1;
                    }
                  }
                  else {
                    iVar32 = iVar30;
                    if (param_1[0x28a] != 0) {
                      iVar32 = *(int *)(param_1[0x28a] + 8);
                    }
                    if ((0 < *(int *)(iVar32 + uVar31 * 4)) &&
                       (iVar32 = FUN_4a140338(param_1[9],iVar37), iVar32 < 1)) {
                      iVar45 = iVar45 + 1;
                    }
                  }
                }
                iVar37 = iVar37 + 1;
              } while (iVar37 < iVar42);
            }
            if (iVar45 + iVar35 < 2) {
              if (piStack_28 == (int *)0x0) {
                return (int *)0x0;
              }
              iVar30 = 3;
            }
            else {
              iVar30 = 2;
            }
          }
        }
        else {
          iVar30 = -1;
        }
      }
      else {
        if (piVar14 == (int *)0x1 || piVar14 == (int *)0x2) {
          iVar30 = FUN_4a0cb850(param_2,param_3,4);
          if (iVar30 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a11b360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
            return piVar14;
          }
        }
        else {
          if (piVar14 != (int *)0x3) {
            return piVar14;
          }
          iVar30 = FUN_4a0cb850(param_2,param_3,0x20);
          if (iVar30 != 0) {
            FUN_4a0d585c(param_1[9],-param_1[0x291]);
            iVar30 = 0;
            if (0 < param_1[0x289]) {
              do {
                uVar38 = FUN_4a14367c(param_1[10],param_1[0x297],iVar30);
                iVar42 = FUN_4a140338(param_1[9],uVar38);
                if (param_1[0x28a] == 0) {
                  iVar37 = 0;
                }
                else {
                  iVar37 = *(int *)(param_1[0x28a] + 8);
                }
                iVar42 = *(int *)(iVar37 + iVar30 * 4) - iVar42;
                switchD_4a0de288::default(param_1[9],uVar38,iVar42);
                if (0 < iVar42) {
                  FUN_4a0d841c(param_1[9],uVar38);
                  uVar13 = FUN_4a0941ec();
                  FUN_4a0945f4(uVar13,uVar38,iVar42);
                }
                iVar30 = iVar30 + 1;
              } while (iVar30 < param_1[0x289]);
            }
            FUN_4a0cf554(param_1,0x48);
            FUN_4a120ca8(param_1,0xffffffff);
            iVar30 = param_1[0x17e];
            goto LAB_4a076dfc;
          }
          iVar30 = FUN_4a0cb850(param_2,param_3,0x40);
          if (iVar30 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a11b420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
            return piVar14;
          }
        }
        iVar30 = 0;
      }
      goto code_r0x4a120ca8;
    case (int *)0xf:
      iVar30 = param_1[9];
      piVar14 = (int *)param_1[500];
      if (piVar14 == (int *)0x0) {
        iVar42 = FUN_4a0cb850(param_2,param_3,0x20);
        if (iVar42 == 0) {
          iVar42 = FUN_4a0cb850(param_2,param_3,0x42);
          if (iVar42 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a117d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
            return piVar14;
          }
          iVar30 = FUN_4a0dc888(iVar30,param_1[0x1f2],0);
          param_1[0x1f5] = iVar30;
          iVar30 = 1;
        }
        else {
          iVar30 = FUN_4a0dc888(iVar30,param_1[0x1f2],1);
          param_1[0x1f5] = iVar30;
          iVar30 = 1;
        }
      }
      else {
        if (piVar14 == (int *)0x1) {
          iVar42 = FUN_4a0cb850(param_2,param_3,6);
          if (iVar42 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a117cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
            return piVar14;
          }
          FUN_4a11bed4(param_1,4);
          iVar37 = param_1[0x1f2];
          iVar35 = param_1[0x1f5];
          iVar42 = FUN_4a0fba7c(*(undefined4 *)(iVar30 + 0x18));
          pcVar41 = (char *)0x0;
          if (iVar35 == 0) {
LAB_4a0de19c:
            iVar35 = *(int *)(iVar30 + 0x668);
joined_r0x4a0de1c0:
            if (iVar35 != 0) {
              iVar35 = *(int *)(iVar35 + 8);
              goto LAB_4a0de1d8;
            }
          }
          else {
            if (iVar35 == 1) {
              iVar35 = *(int *)(iVar30 + 0x690);
              goto joined_r0x4a0de1c0;
            }
            if (iVar35 == 2) {
              iVar35 = *(int *)(iVar30 + 0x6b8);
            }
            else {
              if (iVar35 != 3) {
                switchD_4a11cc8c::default(0,s_invalid_outcome_4a0de330);
                goto LAB_4a0de19c;
              }
              iVar35 = *(int *)(iVar30 + 0x6e0);
            }
            if (iVar35 != 0) {
              iVar35 = *(int *)(iVar35 + 8);
              goto LAB_4a0de1d8;
            }
          }
          iVar35 = 0;
LAB_4a0de1d8:
          if (*(int *)(iVar30 + 0x4ac) == 0) {
            pcVar12 = (char *)0x0;
          }
          else {
            pcVar12 = *(char **)(*(int *)(iVar30 + 0x4ac) + 8);
          }
          pcVar12 = (char *)(int)*pcVar12;
          piVar14 = *(int **)(iVar30 + 0x4c0);
          if (piVar14 != (int *)0x0) {
            pcVar41 = (char *)piVar14[2];
          }
          cVar9 = *pcVar41;
          switch(*(undefined1 *)(iVar35 + iVar37)) {
          default:
            return piVar14;
          case 1:
            FUN_4a0daefc(iVar30,0x35);
            iVar42 = cVar9 + 1;
            break;
          case 2:
            iVar42 = cVar9 + -1;
            break;
          case 3:
            iVar42 = 0;
            pcVar12 = (char *)0xffffffff;
            break;
          case 4:
            uVar38 = 0xffffffff;
            switch(pcVar12) {
            case (char *)0x0:
              uVar38 = 0x14;
              break;
            case (char *)0x1:
              uVar38 = 9;
              break;
            case (char *)0x2:
              uVar38 = 0x15;
              break;
            case (char *)0x3:
              uVar38 = 0x1f;
              break;
            case (char *)0x4:
              uVar38 = 0x10;
            }
            iVar42 = FUN_4a143130(*(undefined4 *)(*(int *)(iVar30 + 0x18) + 0x520));
            cVar9 = *(char *)(iVar42 + 0x18);
            iVar42 = FUN_4a143130(*(undefined4 *)(*(int *)(iVar30 + 0x18) + 0x520),uVar38);
            iVar37 = *(short *)(iVar42 + 0x1a) + 1;
            iVar42 = (int)cVar9;
            if (iVar37 <= cVar9) {
              iVar42 = iVar37;
            }
            iVar37 = FUN_4a143130(*(undefined4 *)(*(int *)(iVar30 + 0x18) + 0x520),uVar38);
            *(short *)(iVar37 + 0x1a) = (short)(char)iVar42;
            iVar42 = FUN_4a143130(*(undefined4 *)(*(int *)(iVar30 + 0x18) + 0x520),uVar38);
            if (((uint)*(int **)(iVar42 + 0x10) & 4) == 0) {
              return *(int **)(iVar42 + 0x10);
            }
            iVar42 = 0x1a;
            do {
              piStack_28 = *(int **)(iVar30 + 0x18);
              uStack_2c = FUN_4a0fba7c();
              bVar49 = false;
              uVar38 = FUN_4a16b5a0(&uStack_40,iVar30 + 0x7e0);
              iVar37 = FUN_4a16fe9c((char)iVar42,uVar38,0);
              FUN_4a16b6c0(&uStack_40);
              if (iVar37 == -1) {
                if (*(char *)(iVar30 + 0x7d9) == iVar42) {
                  *(undefined1 *)(iVar30 + 0x7d9) = 0xff;
                  bVar49 = true;
                  iVar37 = 4;
                  *(undefined4 *)(iVar30 + 0x7dc) = 0;
                }
              }
              else {
                bVar49 = true;
                if (*(int *)(iVar30 + 0x7ec) == 0) {
                  iVar35 = 0;
                }
                else {
                  iVar35 = *(int *)(*(int *)(iVar30 + 0x7ec) + 8);
                }
                *(undefined1 *)(iVar35 + iVar37) = 0xff;
              }
              uVar31 = 0;
              if (iVar42 == 0) {
                uVar31 = 4;
              }
              else if (iVar42 == 1) {
                uVar31 = 8;
              }
              uVar16 = 0;
              *(uint *)(iVar30 + 0x7f8) = uVar31 | *(uint *)(iVar30 + 0x7f8);
              if (*(int *)(iVar30 + 400) == 0) {
                iVar35 = 0;
              }
              else {
                iVar35 = *(int *)(*(int *)(iVar30 + 400) + 8);
              }
              uVar2 = *(ushort *)(iVar35 + *(char *)(iVar30 + 0x7d8) * 2);
              uVar31 = 0;
              iVar35 = 0;
              if (0 < *(int *)(iVar30 + 0x1a0)) {
                do {
                  iVar45 = 0;
                  if (*(int *)(iVar30 + 0x1b8) != 0) {
                    iVar45 = *(int *)(*(int *)(iVar30 + 0x1b8) + 8);
                  }
                  if ((*(ushort *)(iVar45 + iVar35 * 2) & uVar2) != 0) {
                    uVar39 = 1 << (uVar16 & 0xff);
                    if (iVar42 == iVar35) {
                      if ((*(uint *)(iVar30 + 0x7f4) & uVar39) == 0) {
                        bVar49 = true;
                        *(uint *)(iVar30 + 0x7f4) = *(uint *)(iVar30 + 0x7f4) | uVar39;
                        goto LAB_4a0db034;
                      }
LAB_4a0db040:
                      uVar31 = uVar31 + 1;
                    }
                    else {
LAB_4a0db034:
                      if ((uVar39 & *(uint *)(iVar30 + 0x7f4)) != 0) goto LAB_4a0db040;
                    }
                    uVar16 = uVar16 + 1;
                  }
                  iVar35 = iVar35 + 1;
                } while (iVar35 < *(int *)(iVar30 + 0x1a0));
              }
              if (bVar49) {
                FUN_4a0fd124(piStack_28,iVar42);
                FUN_4a1182e0(uStack_2c,iVar42,iVar37);
                uVar38 = FUN_4a0941ec();
                FUN_4a094d68(uVar38,iVar42);
              }
              if (uVar31 == uVar16) {
                *(uint *)(iVar30 + 0x7f8) = *(uint *)(iVar30 + 0x7f8) | 1;
              }
              piVar14 = (int *)FUN_4a145968(piStack_28);
              if ((piVar14 == (int *)0x0) &&
                 (piVar40 = *(int **)(iVar30 + 0x1a0), piVar14 = (int *)FUN_4a145b3c(piStack_28),
                 piVar14 == piVar40)) {
                piVar14 = (int *)FUN_4a10ea2c(uStack_2c);
              }
              if (iVar42 != 0x15) {
                return piVar14;
              }
              iVar37 = (*(ushort *)(iVar30 + 0x810) + 1) * 0x10000;
              piVar14 = (int *)(iVar37 >> 0x10);
              if (0xf < (int)piVar14) {
                iVar42 = 0x2b;
              }
              *(short *)(iVar30 + 0x810) = (short)((uint)iVar37 >> 0x10);
              if ((int)piVar14 < 0x10) {
                return piVar14;
              }
            } while( true );
          case 5:
            iVar37 = *(int *)(iVar30 + 0x790) + 1000;
            if (DAT_4a0de340 <= iVar37) {
              iVar37 = DAT_4a0de340;
            }
            *(int *)(iVar30 + 0x790) = iVar37;
            if (999 < iVar37) {
              FUN_4a0daefc(iVar30,0x2a);
            }
            if (4999 < *(int *)(iVar30 + 0x790)) {
              FUN_4a0daefc(iVar30,0x3d);
            }
            iVar42 = *(int *)(*(int *)(iVar42 + 0x20) + 0x260);
            iVar30 = FUN_4a085614(iVar42);
            if (iVar30 != 0) {
              FUN_4a0866c0(iVar42,0x53);
            }
            if (*(int *)(iVar42 + 0x74) == 0) {
              iVar30 = 0;
            }
            else {
              iVar30 = *(int *)(*(int *)(iVar42 + 0x74) + 8);
            }
            iVar42 = 0;
            if (0 < *(int *)(iVar30 + 0x684)) {
              do {
                if (*(int *)(iVar30 + 0x688) == 0) {
                  iVar37 = 0;
                }
                else {
                  iVar37 = *(int *)(*(int *)(iVar30 + 0x688) + 8);
                }
                piVar14 = *(int **)(iVar37 + iVar42 * 4);
                if (piVar14[1] != 400) {
                  (**(code **)(*piVar14 + 0x28))(piVar14);
                  (**(code **)(*piVar14 + 0x30))(piVar14,0);
                  (**(code **)(*piVar14 + 0x3c))(piVar14);
                  return (int *)(iVar42 << 0x10 | 0x53);
                }
                iVar42 = iVar42 + 1;
              } while (iVar42 < *(int *)(iVar30 + 0x684));
            }
            return (int *)0xffffffff;
          }
          iVar37 = *(int *)(iVar30 + 0x4ac);
          pcVar41 = pcVar12;
          if (iVar37 != 0) {
            pcVar41 = *(char **)(iVar37 + 8);
          }
          iVar35 = 0;
          if (iVar37 == 0) {
            pcVar41 = (char *)0x0;
          }
          cVar9 = *pcVar41;
          if (*(int *)(iVar30 + 0x4c0) == 0) {
            pcVar41 = (char *)0x0;
          }
          else {
            pcVar41 = *(char **)(*(int *)(iVar30 + 0x4c0) + 8);
          }
          cVar1 = *pcVar41;
          if (iVar37 == 0) {
            puVar11 = (undefined1 *)0x0;
          }
          else {
            puVar11 = *(undefined1 **)(iVar37 + 8);
          }
          *puVar11 = (char)pcVar12;
          if (*(int *)(iVar30 + 0x4c0) == 0) {
            pcVar41 = (char *)0x0;
          }
          else {
            pcVar41 = *(char **)(*(int *)(iVar30 + 0x4c0) + 8);
          }
          *pcVar41 = (char)iVar42;
          if (pcVar12 != (char *)0xffffffff) {
            if (*(int *)(iVar30 + 0x7c8) == 0) {
              iVar37 = 0;
            }
            else {
              iVar37 = *(int *)(*(int *)(iVar30 + 0x7c8) + 8);
            }
            pcVar12[iVar37] = (char)iVar42;
          }
          *(undefined2 *)(iVar30 + 0x7b6) = 0;
          *(undefined2 *)(iVar30 + 0x7b8) = 0;
          iVar37 = DAT_4a0d7bb8;
          if (pcVar12 != (char *)0xffffffff) {
            if ((char *)(int)cVar9 != pcVar12) {
              iVar45 = (int)((longlong)(int)*(uint *)(iVar30 + 0x78c) * (longlong)DAT_4a0d7bb8 +
                             ((ulonglong)*(uint *)(iVar30 + 0x78c) << 0x20) >> 0x20);
              uVar31 = (iVar45 >> 10) - (iVar45 >> 0x1f);
              lVar4 = (longlong)(int)uVar31 * (longlong)DAT_4a0d7bbc + ((ulonglong)uVar31 << 0x20);
              *(char *)(iVar30 + 0x7b4) =
                   ((char)(int)(lVar4 >> 0x22) - (char)(lVar4 >> 0x3f)) * -7 + (char)uVar31;
            }
            iVar45 = *(int *)(iVar30 + 0x18);
            piStack_28 = (int *)FUN_4a0fba7c(iVar45);
            if ((char *)(int)cVar9 == pcVar12) {
              if (cVar1 < iVar42) {
                uStack_2c = 0xaa3;
              }
              else {
                uStack_2c = 0xaa5;
              }
            }
            else {
              uStack_2c = 0xaa2;
            }
            uVar31 = FUN_4a14085c(iVar30,0,*(undefined4 *)(iVar30 + 0x78c));
            iVar32 = (int)((longlong)(int)uVar31 * (longlong)iVar37 + ((ulonglong)uVar31 << 0x20) >>
                          0x20);
            uVar31 = (iVar32 >> 10) - (iVar32 >> 0x1f);
            iVar32 = (int)((longlong)(int)uVar31 * (longlong)DAT_4a0d7bbc +
                           ((ulonglong)uVar31 << 0x20) >> 0x20);
            iVar32 = uVar31 + ((iVar32 >> 2) - (iVar32 >> 0x1f)) * -7;
            uVar31 = *(int *)(iVar30 + 0x78c) + 0x5a0;
            iVar37 = (int)((longlong)(int)uVar31 * (longlong)iVar37 + ((ulonglong)uVar31 << 0x20) >>
                          0x20);
            uVar31 = (iVar37 >> 10) - (iVar37 >> 0x1f);
            iVar37 = (int)((longlong)(int)uVar31 * (longlong)DAT_4a0d7bbc +
                           ((ulonglong)uVar31 << 0x20) >> 0x20);
            if (((iVar37 >> 2) - (iVar37 >> 0x1f)) * -7 + uVar31 == iVar32) {
              uVar38 = 0xac4;
            }
            else {
              uVar38 = *(undefined4 *)(PTR_DAT_4a0d7bc0 + iVar32 * 4);
            }
            iVar45 = iVar45 + 0x278;
            piStack_30 = (int *)FUN_4a1351bc(iVar45,uVar38);
            piStack_34 = (int *)FUN_4a06c410(iVar45);
            if (*(int *)(iVar30 + 300) == 0) {
              iVar37 = 0;
            }
            else {
              iVar37 = *(int *)(*(int *)(iVar30 + 300) + 8);
            }
            iVar37 = *(int *)(iVar37 + (int)pcVar12 * 0x14 + 0xc);
            if (iVar37 == 0) {
              iVar37 = 0;
            }
            else {
              iVar37 = *(int *)(iVar37 + 8);
            }
            FUN_4a06cfb0(iVar45,(int)*(short *)(iVar37 + iVar42 * 2));
            if (*(int *)(iVar30 + 0x8c) == 0) {
              iVar37 = 0;
            }
            else {
              iVar37 = *(int *)(*(int *)(iVar30 + 0x8c) + 8);
            }
            iVar37 = FUN_4a143ac8(*(undefined4 *)(*(int *)(iVar30 + 0x18) + 0x520),
                                  (int)*(short *)(iVar37 + (int)pcVar12 * 2));
            uStack_38 = FUN_4a1351bc(iVar45,*(undefined4 *)(iVar37 + 0xc));
            uStack_40 = FUN_4a13cff4(piStack_34);
            uStack_3c = uStack_38;
            FUN_4a06b9c4(iVar45,0xfffffff5,uStack_2c,piStack_30);
            if (*(int *)(iVar30 + 0xf0) == 0) {
              iVar37 = 0;
            }
            else {
              iVar37 = *(int *)(*(int *)(iVar30 + 0xf0) + 8);
            }
            iVar37 = *(int *)(iVar37 + (int)pcVar12 * 0x14 + 0xc);
            if (iVar37 != 0) {
              iVar35 = *(int *)(iVar37 + 8);
            }
            FUN_4a1136e4(piStack_28,0xfffffff5,(int)*(short *)(iVar35 + iVar42 * 2));
          }
          FUN_4a0fe54c(*(undefined4 *)(iVar30 + 0x18),0x17);
          FUN_4a0941ec();
          iVar30 = FUN_4a0ff494();
          iVar30 = FUN_4a13fa14(*(undefined4 *)(iVar30 + 0x51c),0);
          if (iVar30 != -1) {
            uVar38 = thunk_FUN_4a161570(0x14);
            piVar14 = (int *)FUN_4a0c707c(uVar38,*(undefined4 *)(PTR_PTR_4a0949d4 + iVar30 * 4));
            if (piVar14 != (int *)0x0) {
              (**(code **)(*piVar14 + 0xc))();
            }
            iVar30 = FUN_4a0ff494();
            FUN_4a14039c(*(undefined4 *)(iVar30 + 0x51c),0);
            piVar47 = (int *)FUN_4a0c6fcc();
            piVar40 = (int *)0x0;
            if (piVar47 != (int *)0x0) {
              (**(code **)(*piVar47 + 0xc))();
              iVar30 = (**(code **)(*piVar47 + 8))(piVar47);
              piVar40 = (int *)0x0;
              if (iVar30 != 0) {
                piVar40 = (int *)(**(code **)(*piVar47 + 4))(piVar47);
              }
            }
            if (piVar14 != (int *)0x0) {
              iVar30 = (**(code **)(*piVar14 + 8))(piVar14);
              if (iVar30 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0949c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                piVar14 = (int *)(**(code **)(*piVar14 + 4))(piVar14);
                return piVar14;
              }
                    /* WARNING: Could not recover jumptable at 0x4a0949b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
              return piVar14;
            }
            return piVar40;
          }
          thunk_FUN_4a161570(0x14);
          piVar14 = (int *)FUN_4a0c6bc0();
          *piVar14 = (int)PTR_PTR_4a0c70cc;
          piVar14[2] = 0;
          *(undefined1 *)(piVar14 + 3) = 0;
          piVar14[4] = 0;
          iVar30 = FUN_4a04d4d0(0,s_unemployed_4a0949c8);
          piVar14[2] = iVar30;
          return piVar14;
        }
        if (piVar14 == (int *)0x2) {
          iVar42 = FUN_4a0cb850(param_2,param_3,4);
          if (iVar42 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a117d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
            return piVar14;
          }
          uVar31 = FUN_4a13faf0(iVar30,param_1[0x1f2]);
          if ((uVar31 & 2) == 0) {
            if ((uVar31 & 4) != 0) {
              FUN_4a11a440(param_1,10);
            }
          }
          else {
            FUN_4a11a440(param_1,9);
          }
        }
        else {
          if (piVar14 != (int *)0x3) {
            return piVar14;
          }
          iVar42 = FUN_4a0cb850(param_2,param_3,4);
          if (iVar42 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a117c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
            return piVar14;
          }
          FUN_4a0d739c(iVar30,param_1[0x1f2]);
        }
        iVar30 = 4;
      }
code_r0x4a11bed4:
      iVar35 = param_1[9];
      param_1[500] = iVar30;
      iVar37 = param_1[0x1f2];
      iVar42 = -1;
      bVar49 = false;
      switch(iVar30) {
      case 0:
        iVar42 = FUN_4a1418cc(iVar35,iVar37);
        bVar49 = true;
        break;
      case 1:
        iVar42 = FUN_4a141918(iVar35,iVar37,param_1[0x1f5]);
        break;
      case 2:
        iVar42 = FUN_4a140dec(iVar35,iVar37);
        break;
      case 3:
        iVar42 = FUN_4a140fa0(iVar35,iVar37);
        break;
      case 4:
        uVar31 = 6;
        goto code_r0x4a1161d0;
      }
      if (iVar42 == -1) {
        return (int *)0xffffffff;
      }
      iVar30 = 0xb71;
      if (param_1[499] != -1) {
        iVar30 = 0;
        if (*(int *)(iVar35 + 0x420) != 0) {
          iVar30 = *(int *)(*(int *)(iVar35 + 0x420) + 8);
        }
        iVar30 = (int)*(short *)(iVar30 + param_1[499] * 2);
      }
      if (!bVar49) {
code_r0x4a089e34:
        iVar35 = param_1[0x5a];
        iVar37 = FUN_4a0ff494();
        *(undefined4 *)(iVar35 + 0x78) = 1;
        *(undefined4 *)(iVar35 + 0x94) = 0xffffffff;
        *(undefined4 *)(iVar35 + 0x98) = 4;
        *(int *)(iVar35 + 0x90) = iVar30;
        *(undefined4 *)(iVar35 + 0x9c) = 0xffffffff;
        *(undefined4 *)(iVar35 + 0xa0) = 0xffffffff;
        FUN_4a09f974(iVar37 + 0x128,0x60);
        uVar38 = FUN_4a171e1c();
        *(undefined4 *)(iVar35 + 0xa4) = uVar38;
        *(undefined4 *)(iVar35 + 0xa8) = 200;
        FUN_4a08a03c(iVar35,iVar42,0);
        *(undefined4 *)(iVar35 + 0x74) = 0;
        *(undefined4 *)(iVar35 + 0x7c) = 2;
        *(undefined4 *)(iVar35 + 0x80) = 0;
                    /* WARNING: Could not recover jumptable at 0x4a0faeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        piVar14 = (int *)(*(code *)PTR_caseD_2_4a0faec8)();
        return piVar14;
      }
FUN_4a0cd7a0:
      piVar14 = (int *)FUN_4a089eb4(param_1[0x5a],iVar42,iVar30,0x40);
      return piVar14;
    case (int *)0x10:
      if ((int *)param_1[0x1f7] == (int *)0x3 && param_2 == 3) {
        iVar42 = param_3[3];
        iVar30 = iVar37;
        if (iVar42 != 0) {
          iVar37 = *(int *)(iVar42 + 8);
          iVar30 = *(int *)(iVar42 + 8);
        }
        FUN_4a0cca64(param_1,*(undefined4 *)(iVar30 + 4),*(undefined4 *)(iVar37 + 8));
        param_1[0x1f7] = 4;
        param_1[0x71] = 0;
                    /* WARNING: Could not recover jumptable at 0x4a11be9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        piVar14 = (int *)(*(code *)PTR_caseD_0_4a11beb4)();
        return piVar14;
      }
      return (int *)param_1[0x1f7];
    case (int *)0x11:
      iVar30 = FUN_4a0cb850(param_2,param_3,0x20);
      if (iVar30 == 0) {
        iVar30 = FUN_4a0cb850(param_2,param_3,0x42);
        if (iVar30 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a10eeb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
          return piVar14;
        }
        *(undefined1 *)(param_1[8] + 0x496) = 1;
        FUN_4a0d761c(param_1[9],0,0x4b0000);
        FUN_4a0d761c(param_1[9],2,0x4b0000);
        FUN_4a0d761c(param_1[9],1,0x640000);
        FUN_4a0d761c(param_1[9],5,0x4b0000);
        FUN_4a0d761c(param_1[9],3,0x4b0000);
        FUN_4a0d761c(param_1[9],4,0x4b0000);
        FUN_4a1161d0(param_1,6);
        uVar31 = 0x23;
        goto code_r0x4a11a440;
      }
LAB_4a10f298:
      uVar31 = 0x15;
      goto code_r0x4a1161d0;
    case (int *)0x12:
      if (param_1[0x298] == 0xb) {
        if (param_2 != 3) {
          return (int *)0xb;
        }
        iVar42 = param_3[3];
        bVar49 = false;
        iVar30 = iVar37;
        if (iVar42 != 0) {
          iVar37 = *(int *)(iVar42 + 8);
          iVar30 = *(int *)(iVar42 + 8);
        }
        uVar31 = *(uint *)(iVar30 + 4);
        iVar30 = *(int *)(iVar37 + 8);
      }
      else {
        if (2 < param_1[0x298]) goto LAB_4a116f24;
        iVar42 = param_3[3];
        bVar49 = true;
        iVar30 = iVar37;
        if (iVar42 != 0) {
          iVar37 = *(int *)(iVar42 + 8);
          iVar30 = *(int *)(iVar42 + 8);
        }
        iVar30 = *(int *)(iVar30 + 8);
        uVar31 = *(uint *)(iVar37 + 4);
      }
code_r0x4a11b434:
      puVar36 = &uStack_40;
      puVar48 = &uStack_40;
      puVar15 = &uStack_40;
      puVar17 = &uStack_40;
      puVar20 = &uStack_40;
      piStack_28 = *(int **)PTR_DAT_4a11bc04;
      uStack_2c = *(uint *)PTR_DAT_4a11bc08;
      FUN_4a0bbe98(*(undefined4 *)PTR_DAT_4a11bc0c,&piStack_28,&uStack_2c);
      uVar16 = param_1[0x99];
      uVar39 = param_1[0x9c];
      if (bVar49) {
        uVar38 = FUN_4a171fac();
        FUN_4a17211c(uVar38,0x3f400000);
        uVar16 = FUN_4a171e1c();
      }
      iVar42 = param_1[0x70];
      if ((iVar42 == 6 || iVar42 == 0x15) || iVar42 == 7) {
        uStack_40 = uVar16;
        iVar42 = FUN_4a134a10(piStack_28,uStack_2c,param_1[0x97],param_1[0x98]);
        if ((iVar42 != 0) && ((param_1[0x299] & 0x2000U) != 0 || bVar49)) {
          cVar9 = '\x01' - *(byte *)((int)param_1 + 0x276);
          if (1 < *(byte *)((int)param_1 + 0x276)) {
            cVar9 = '\0';
          }
          *(char *)((int)param_1 + 0x276) = cVar9;
          return (int *)0x1;
        }
        iVar42 = param_1[0x70];
        if ((((iVar42 == 6 || iVar42 == 0x15) || iVar42 == 7) &&
            (uStack_40 = uVar39,
            iVar42 = FUN_4a134a10(piStack_28,uStack_2c,param_1[0x9a],param_1[0x9b]), iVar42 != 0))
           && ((param_1[0x299] & 0x2000U) != 0 || bVar49)) {
          cVar9 = '\x01' - *(byte *)((int)param_1 + 0x277);
          if (1 < *(byte *)((int)param_1 + 0x277)) {
            cVar9 = '\0';
          }
          *(char *)((int)param_1 + 0x277) = cVar9;
          return (int *)0x1;
        }
      }
      if (bVar49) {
        return (int *)0x0;
      }
      iVar37 = FUN_4a0bbcf0(*(undefined4 *)puVar7,param_1[0x1db] * 0x30 + 3);
      iVar35 = FUN_4a0bbcf0(*(undefined4 *)puVar7,0x33);
      bVar49 = SBORROW4(uVar31,iVar37);
      iVar42 = uVar31 - iVar37;
      if ((int)uVar31 < iVar37) {
        bVar49 = SBORROW4(iVar30,iVar35);
        iVar42 = iVar30 - iVar35;
      }
      if (iVar42 < 0 != bVar49) {
        FUN_4a0cf554(param_1,0x14);
        if ((int)(uVar31 - 3) < 0) {
          iVar30 = 0;
        }
        else {
          iVar30 = (int)((ulonglong)((longlong)DAT_4a11bc10 * (longlong)(int)(uVar31 - 3)) >> 0x20);
          iVar30 = (iVar30 >> 3) - (iVar30 >> 0x1f);
        }
        FUN_4a113f74(param_1,iVar30);
        return (int *)0x1;
      }
      iVar42 = FUN_4a0bbd68(*(undefined4 *)puVar7,0x22,2);
      uVar38 = *(undefined4 *)puVar7;
      uStack_3c = FUN_4a0bc200(uVar38);
      uStack_40 = FUN_4a0bc1f8(uVar38);
      if ((int)uStack_3c <= (int)uStack_40) {
        puVar36 = &uStack_3c;
      }
      iVar37 = FUN_4a0bbe00(*(undefined4 *)puVar7,*puVar36 - 0x22,2);
      iVar35 = FUN_4a0bbcf0(*(undefined4 *)puVar7,0x18);
      if (((param_1[0x70] == 6) && ((int)piStack_28 < iVar42 + iVar35)) &&
         ((iVar37 - iVar35 < (int)uStack_2c && ((param_1[0x299] & 0x80U) != 0)))) {
        FUN_4a0cf554(param_1,0x15);
        FUN_4a0cca64(param_1,iVar42,iVar37);
        FUN_4a111238(param_1);
        return (int *)0x1;
      }
      if (((param_1[0x76] == 0) && (iVar42 = FUN_4a142ef4(param_1[10]), iVar42 == 0)) &&
         (((param_1[0x299] & 0x100U) != 0 && (param_1[0x70] == 6)))) {
        uVar38 = FUN_4a0bbd68(*(undefined4 *)puVar7,0x21,2);
        uVar13 = *(undefined4 *)puVar7;
        uStack_3c = FUN_4a0bc200(uVar13);
        uStack_40 = FUN_4a0bc1f8(uVar13);
        if ((int)uStack_3c <= (int)uStack_40) {
          puVar48 = &uStack_3c;
        }
        uVar13 = FUN_4a0bbe00(*(undefined4 *)puVar7,*puVar48 - 0x58,2);
        uStack_40 = FUN_4a0bbcf0(*(undefined4 *)puVar7,0x18);
        iVar42 = FUN_4a134a10(piStack_28,uStack_2c,uVar38,uVar13);
        if (iVar42 != 0) {
          FUN_4a0cf554(param_1,0x15);
          FUN_4a0cca64(param_1,uVar38,uVar13);
          FUN_4a1161d0(param_1,7);
          FUN_4a122618(param_1,0xd);
          FUN_4a11a440(param_1,0x19);
          return (int *)0x1;
        }
      }
      uVar38 = *(undefined4 *)puVar7;
      uStack_3c = FUN_4a0bc200(uVar38);
      uStack_40 = FUN_4a0bc1f8(uVar38);
      if ((int)uStack_40 <= (int)uStack_3c) {
        puVar15 = &uStack_3c;
      }
      piStack_30 = (int *)FUN_4a0bbd68(*(undefined4 *)puVar7,*puVar15 - 0x23,2);
      uVar38 = *(undefined4 *)puVar7;
      uStack_3c = FUN_4a0bc200(uVar38);
      uStack_40 = FUN_4a0bc1f8(uVar38);
      if ((int)uStack_3c <= (int)uStack_40) {
        puVar17 = &uStack_3c;
      }
      piStack_34 = (int *)FUN_4a0bbe00(*(undefined4 *)puVar7,*puVar17 - 0x22,2);
      uVar16 = FUN_4a0bbcf0(*(undefined4 *)puVar7,0x18);
      iVar42 = FUN_4a0bc1f8(*(undefined4 *)puVar7);
      if ((iVar42 == 400) || (iVar42 = FUN_4a0bc1f8(*(undefined4 *)puVar7), iVar42 == 0x140)) {
        uVar16 = uVar16 + 0x14;
      }
      if (param_1[0x70] == 6 || param_1[0x70] == 0x15) {
        uStack_40 = uVar16;
        iVar42 = FUN_4a134a10(piStack_28,uStack_2c,piStack_30,piStack_34);
        uVar16 = 0;
        if (iVar42 != 0) {
          uVar16 = param_1[0x299];
        }
        if (iVar42 != 0 && (uVar16 & 0x40) != 0) {
          FUN_4a0cf554(param_1,0x15);
          FUN_4a0cca64(param_1,piStack_30,piStack_34);
          if (param_1[0x70] == 0x15) {
            FUN_4a089430(param_1[0x1b7],3);
            param_1[0xa4] = 6;
            FUN_4a0cd7c0(param_1,0xc8d);
            FUN_4a1161d0(param_1,9);
            FUN_4a0d58d0(param_1[9]);
            return (int *)0x1;
          }
          iVar30 = param_1[9];
          if (((char)param_1[0x77] == '\0') && (*(char *)((int)param_1 + 0x632) != '\0')) {
            if ((param_1[0x19d] == 0) || (iVar30 = FUN_4a146b58(param_1[0x19d],0x2000), iVar30 == 0)
               ) goto LAB_4a11b964;
            iVar30 = FUN_4a146a9c(param_1[0x19d]);
          }
          else {
            iVar42 = FUN_4a141268(iVar30);
            if (iVar42 == 0) goto LAB_4a11b964;
            iVar30 = FUN_4a13f8d0(iVar30);
          }
          if (iVar30 != -1) {
            FUN_4a113618(param_1,0);
            return (int *)0x1;
          }
          goto LAB_4a11b964;
        }
      }
      uVar16 = FUN_4a0bbcf0(*(undefined4 *)puVar7,0x40);
      uVar39 = FUN_4a0bbcf0(*(undefined4 *)puVar7,0x104);
      uVar18 = FUN_4a0bbcf0(*(undefined4 *)puVar7,0xdc);
      uVar38 = *(undefined4 *)puVar7;
      uStack_3c = FUN_4a0bc200(uVar38);
      uStack_40 = FUN_4a0bc1f8(uVar38);
      if ((int)uStack_40 <= (int)uStack_3c) {
        puVar20 = &uStack_3c;
      }
      uVar19 = *puVar20;
      iVar42 = FUN_4a13caa0(param_1[8]);
      uStack_38 = iVar42 - uVar16;
      if ((param_1[0x70] != 6) ||
         ((uStack_40 = uVar39, uStack_3c = uVar16, iVar42 = FUN_4a134a60(uVar31,iVar30,0,uStack_38),
          iVar42 == 0 &&
          (uStack_40 = uVar18, uStack_3c = uVar16,
          iVar42 = FUN_4a134a60(uVar31,iVar30,uVar19 - uVar18,uStack_38), iVar42 == 0)))) {
        uVar38 = FUN_4a0bbe00(*(undefined4 *)puVar7,0x32,2);
        if (param_1[0x70] == 6) {
          uVar13 = FUN_4a09f9c8(param_1[8] + 0x128,0x172);
          FUN_4a17295c(uVar13,1);
          uVar16 = FUN_4a171e1c();
          uStack_40 = FUN_4a146da8(param_1);
          uStack_3c = uVar16;
          iVar42 = FUN_4a134a60(uVar31,uStack_2c,0,uVar38);
          if (iVar42 != 0) {
            iVar37 = 0;
            iVar42 = 0;
            do {
              iVar35 = FUN_4a141a80(param_1[9],iVar42);
              if (iVar35 != -1) {
                iVar37 = iVar37 + 1;
              }
              iVar42 = iVar42 + 1;
            } while (iVar42 < 6);
            if (0 < iVar37) {
              cVar9 = '\x01' - *(byte *)(param_1 + 0x87);
              if (1 < *(byte *)(param_1 + 0x87)) {
                cVar9 = '\0';
              }
              *(char *)(param_1 + 0x87) = cVar9;
              return (int *)0x1;
            }
          }
        }
        uVar16 = FUN_4a0bbcf0(*(undefined4 *)puVar7,0x96);
        uVar39 = FUN_4a0bbcf0(*(undefined4 *)puVar7,0x32);
        if (param_1[0x70] == 6 || param_1[0x70] == 0x15) {
          iVar42 = FUN_4a13ca78(param_1[8]);
          uStack_40 = uVar16;
          uStack_3c = uVar39;
          iVar30 = FUN_4a134a60(uVar31,iVar30,(iVar42 >> 1) - ((int)uVar16 >> 1),0);
          if (iVar30 != 0) {
            uVar31 = FUN_4a146cd0(param_1[0x17e]);
            bVar49 = uVar31 == 0;
            if (bVar49) {
              uVar31 = (uint)*(byte *)((int)param_1 + 0x632);
            }
            if ((bVar49 && uVar31 == 0) && (param_1[0x17e] != param_1[0xbd])) {
              param_1[0xbd] = param_1[0x17e];
              iVar30 = param_1[10];
              param_1[0xb7] = *(int *)(iVar30 + 0x470);
              param_1[0xb8] = *(int *)(iVar30 + 0x474);
              param_1[0xb9] = *(int *)(iVar30 + 0x478);
              param_1[0xbc] = *(int *)(iVar30 + 0x48c);
              param_1[0xba] = *(int *)(iVar30 + 0x484);
              param_1[0xbb] = *(int *)(iVar30 + 0x488);
              FUN_4a11e2a0(param_1,3);
              return (int *)0x1;
            }
          }
        }
        return (int *)0x0;
      }
      FUN_4a0cf554(param_1,0x15);
      FUN_4a0cca64(param_1,piStack_30,piStack_34);
      if ((int)piStack_28 < (int)(uVar19 - uVar18)) {
        if ((int)uVar39 < (int)piStack_28) {
          return (int *)0x1;
        }
        FUN_4a113618(param_1,4);
        return (int *)0x1;
      }
LAB_4a11b964:
      FUN_4a113618(param_1,3);
      return (int *)0x1;
    case (int *)0x13:
      iVar30 = FUN_4a0cb850(param_2,param_3,0x40);
      if (iVar30 != 0) break;
      iVar30 = FUN_4a0cb850(param_2,param_3,0x20);
      if (iVar30 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a10f444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
        return piVar14;
      }
      param_1[0x73] = 1;
      param_1[0x74] = 0x24;
      param_1[0x72] = 2;
      iVar30 = FUN_4a0fb654(param_1[8]);
      if (iVar30 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a10f470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
        return piVar14;
      }
LAB_4a10f474:
      piVar14 = (int *)param_1[8];
LAB_4a0fc244:
      piVar14[0x113] = 0xffffff;
      piVar14[0x114] = -1;
      *(undefined1 *)(piVar14 + 0x112) = 1;
      *(undefined1 *)(piVar14 + 0x116) = 0;
      return piVar14;
    }
    uVar31 = 6;
code_r0x4a1161d0:
    param_1[0x70] = uVar31;
    param_1[0x71] = 0;
    *(undefined1 *)(param_1 + 0x77) = 1;
    piVar14 = (int *)host_s3eAccelerometerStop_arm();
                    /* WARNING: Could not recover jumptable at 0x4a116200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    if (0x16 < uVar31) {
      return piVar14;
    }
    piVar14 = (int *)(*(code *)(&switchD_4a116200::switchdataD_4a116208)[uVar31])();
    return piVar14;
  }
  iVar42 = param_1[8];
  iVar30 = FUN_4a13ef1c();
  if (iVar30 == -1) {
    iVar30 = 0;
    switch((int *)param_1[0x1a5]) {
    case (int *)0x0:
      iVar42 = FUN_4a0cb850(param_2,param_3,2);
      if (iVar42 != 0) {
LAB_4a11ce60:
        *(undefined1 *)(param_1 + 0x19f) = 0;
        piVar14 = (int *)param_1[8];
FUN_4a0fb75c:
        if (piVar14[0x108] != 0) {
          piVar14[0x108] = 0;
        }
        if (piVar14[0x109] != 0) {
          piVar14[0x109] = 0;
        }
        return piVar14;
      }
      iVar42 = FUN_4a0cb850(param_2,param_3,0x80000000);
      if (iVar42 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a11cce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
        return piVar14;
      }
      if (param_3[3] != 0) {
        iVar30 = *(int *)(param_3[3] + 8);
      }
      iVar30 = *(int *)(iVar30 + 8);
LAB_4a118cc8:
      iVar42 = iVar30 + -0x932;
      if (iVar30 == 0x932) {
LAB_4a118f14:
        if (*(char *)((int)param_1 + 0x632) != '\0') {
          *(undefined1 *)((int)param_1 + 0x632) = 0;
          *(undefined1 *)((int)param_1 + 0x633) = 0;
          *(undefined2 *)(param_1 + 0x18d) = 0xffff;
          param_1[0x19d] = 0;
          param_1[0xad] = 0;
          FUN_4a115d8c(param_1,0);
        }
        uVar31 = 5;
        goto code_r0x4a11e2a0;
      }
      if (0x932 < iVar30) {
        if (iVar42 == 0x37) {
          iVar30 = param_1[0xad];
          if (*(char *)((int)param_1 + 0x632) != '\0') {
            *(undefined1 *)((int)param_1 + 0x632) = 0;
            *(undefined1 *)((int)param_1 + 0x633) = 0;
            *(undefined2 *)(param_1 + 0x18d) = 0xffff;
            param_1[0x19d] = 0;
            param_1[0xad] = 0;
            FUN_4a115d8c(param_1,0);
          }
          FUN_4a105bc0(iVar30);
          uVar38 = *(undefined4 *)(iVar30 + 0x50);
          iVar42 = FUN_4a146a9c(iVar30);
          iVar37 = param_1[10];
          iVar30 = FUN_4a0f0760(*(undefined4 *)(iVar37 + 0x318));
          if ((iVar30 == 0) && (*(int *)(iVar37 + 0x318) != 0)) {
            uVar13 = 0;
          }
          else {
            uVar13 = 1;
          }
          switchD_4a11cc8c::default(uVar13,s_rotating_at_non_home_house_4a0ef790);
          piVar14 = (int *)0x0;
          if (*(int *)(iVar37 + 0x368) != 0) {
            piVar14 = *(int **)(*(int *)(iVar37 + 0x368) + 8);
          }
          *(char *)((int)piVar14 + iVar42) = (char)uVar38;
          return piVar14;
        }
        if (iVar42 < 0x38) {
          if (iVar42 != 1) {
            if (iVar42 == 0x35) {
              param_1[0x1a9] = param_1[0xad];
              if (*(char *)((int)param_1 + 0x632) != '\0') {
                *(undefined1 *)((int)param_1 + 0x632) = 0;
                *(undefined1 *)((int)param_1 + 0x633) = 0;
                *(undefined2 *)(param_1 + 0x18d) = 0xffff;
                param_1[0x19d] = 0;
                param_1[0xad] = 0;
                FUN_4a115d8c(param_1,0);
              }
              param_1[0x71] = 0;
                    /* WARNING: Could not recover jumptable at 0x4a12264c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              piVar14 = (int *)(*(code *)PTR_caseD_9_4a122678)();
              return piVar14;
            }
            if (iVar42 == 0x36) {
              param_1[0x1a9] = param_1[0xad];
              if (*(char *)((int)param_1 + 0x632) != '\0') {
                *(undefined1 *)((int)param_1 + 0x632) = 0;
                *(undefined1 *)((int)param_1 + 0x633) = 0;
                *(undefined2 *)(param_1 + 0x18d) = 0xffff;
                param_1[0x19d] = 0;
                param_1[0xad] = 0;
                FUN_4a115d8c(param_1,0);
              }
              FUN_4a122618(param_1,0xc);
              uVar31 = 0x1b;
code_r0x4a11a440:
              iVar30 = param_1[8];
              piVar14 = (int *)FUN_4a145d3c(iVar30);
              if (piVar14 != (int *)0x0) {
                return piVar14;
              }
              FUN_4a0fe54c(iVar30,uVar31);
              if (*(char *)(iVar30 + 0x495) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x4a11a484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                if (0x23 < uVar31) {
                  switchD_4a11cc8c::default(0,s_Invalid_message_ID_4a11a7fc);
                  param_1[0x1bd] = 0x84d;
                  param_1[0x1be] = 0x84e;
                  *(undefined1 *)((int)param_1 + 0x6f3) = 1;
                  return (int *)0x1;
                }
                piVar14 = (int *)(*(code *)(&switchD_4a11a484::switchdataD_4a11a48c)[uVar31])();
                return piVar14;
              }
                    /* WARNING: Could not recover jumptable at 0x4a11a47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
              return piVar14;
            }
code_r0x4a0fe970:
            return (int *)0x0;
          }
          goto LAB_4a118f14;
        }
        if (iVar42 == 0x370) {
          iVar42 = 3;
        }
        else {
          if (iVar42 != 0x39f) {
            return (int *)0x0;
          }
          piVar14 = (int *)param_1[8];
          if (piVar14[0xe] == 0) {
            cVar9 = '\0';
            if (piVar14[0x11] != 0) {
              cVar9 = (char)piVar14[0x12];
            }
            if (piVar14[0x11] == 0 || cVar9 == '\0') {
              piVar40 = piVar14 + 0xf;
              if (*piVar40 != 0) {
                piVar14 = (int *)(uint)*(byte *)(piVar14 + 0x10);
              }
              if (*piVar40 == 0 || piVar14 == (int *)0x0) {
                return piVar14;
              }
            }
            iVar42 = 5;
          }
          else {
            iVar42 = 4;
          }
        }
        goto FUN_4a122adc;
      }
      if (iVar30 == 0x82d) {
        *(undefined1 *)(param_1 + 0x19f) = 0;
        piVar14 = (int *)param_1[8];
        goto FUN_4a0fb75c;
      }
      if (0x82d < iVar30) {
        if (iVar30 == 0x82f) {
          iVar42 = 1;
        }
        else {
          if (iVar30 != 0x831) {
            return (int *)0x0;
          }
          iVar42 = 2;
        }
        goto FUN_4a122adc;
      }
      if (iVar30 == 0x814) goto LAB_4a118f14;
      if (iVar30 == 0x826) {
        iVar30 = 1;
      }
      else {
        if (iVar30 != 0x827) {
          return (int *)0x0;
        }
        iVar30 = 3;
      }
      goto code_r0x4a0ce9dc;
    case (int *)0x1:
    case (int *)0x2:
      iVar30 = FUN_4a0cb850(param_2,param_3,0x20);
      if (iVar30 != 0) {
        FUN_4a0fdf10(iVar42);
        FUN_4a0fca00(iVar42);
        if (param_1[0x1a5] == 2) {
          FUN_4a0941ec();
          FUN_4a09472c();
          param_1[0x73] = 1;
          param_1[0x74] = -1;
          param_1[0x72] = 2;
          piVar14 = (int *)FUN_4a0fb654(param_1[8]);
          if (piVar14 != (int *)0x0) {
            return piVar14;
          }
          piVar14 = (int *)param_1[8];
          goto LAB_4a0fc244;
        }
        goto LAB_4a11ce60;
      }
      iVar30 = FUN_4a0cb850(param_2,param_3,0x42);
      if (iVar30 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a11ce98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
        return piVar14;
      }
      break;
    case (int *)0x3:
      return (int *)param_1[0x1a5];
    case (int *)0x4:
      iVar30 = FUN_4a0cb850(param_2,param_3,0x20);
      if (iVar30 != 0) {
        FUN_4a0c0924();
        iVar30 = host_s3eConfigGetString_arm(s_Telefonica_4a11cec8,&DAT_4a11cec4,auStack_120);
        if (iVar30 == 0) {
          FUN_4a161604(auStack_120,0);
        }
        piVar14 = (int *)host_s3eDeviceRequestQuit_arm();
        return piVar14;
      }
      piVar14 = (int *)FUN_4a0cb850(param_2,param_3,0x42);
      if (piVar14 == (int *)0x0) {
        return (int *)0x0;
      }
      return piVar14;
    case (int *)0x5:
      iVar30 = FUN_4a0cb850(param_2,param_3,0x20);
      if (iVar30 != 0) {
        host_s3eDeviceRequestQuit_arm();
        if (*(int *)(param_1[8] + 0x44) == 0 && *(int *)PTR_DAT_4a11ced4 == 0) {
          return (int *)0x0;
        }
        FUN_4a15edcc(s_TnbNative___kill__4a0575f8);
        piVar14 = (int *)FUN_4a05be98();
        iVar30 = (**(code **)(*piVar14 + 0x18))(piVar14,s_com_cp_app_MainActivity_4a05760c);
        if (iVar30 == 0) {
          FUN_4a15edcc(s_Unable_to_find_the_activity_clas_4a057624);
          return (int *)0x1;
        }
        iVar42 = (**(code **)(*piVar14 + 0x240))
                           (piVar14,iVar30,s_m_Activity_4a057648,
                            s_Lcom_cp_app_MainActivity__4a057654);
        if (iVar42 == 0) {
          FUN_4a15edcc(s_Sorry__I_can_t_find_MainWrapper_4a057670);
          return (int *)0x1;
        }
        iVar42 = (**(code **)(*piVar14 + 0x244))(piVar14,iVar30,iVar42);
        if (iVar42 != 0) {
          iVar42 = (**(code **)(*piVar14 + 0x1c4))(piVar14,iVar30,s_killMe_4a0576b4,&DAT_4a0576bc);
          if (iVar42 != 0) {
            (**(code **)(*piVar14 + 0x238))(piVar14,iVar30,iVar42,&stack0xfffffff4);
            return (int *)0x0;
          }
          FUN_4a15edcc(s_Sorry__I_can_t_find_killMe_4a0576c0);
          return (int *)0x1;
        }
        FUN_4a15edcc(s_Sorry__I_can_t_use_MainWrapper_4a057694);
        return (int *)0x1;
      }
      iVar30 = FUN_4a0cb850(param_2,param_3,0x42);
      if (iVar30 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a11cde0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
        return piVar14;
      }
      break;
    default:
      goto code_r0x4a0fe970;
    }
    iVar42 = 0;
FUN_4a122adc:
    iVar30 = 0x82e;
    param_1[0x1a5] = iVar42;
    switch(iVar42) {
    case 0:
      iVar30 = param_1[0x1a6];
      *(undefined1 *)(iVar30 + 0x31) = 1;
      iVar42 = param_1[0x1a2];
      piVar14 = (int *)param_1[0x1a3];
      if (piVar14 != (int *)0x0) {
        (**(code **)(*piVar14 + 0xc))(piVar14);
      }
      (**(code **)(*(int *)(iVar30 + 0x44) + 0x1c))((int *)(iVar30 + 0x44));
      *(int *)(iVar30 + 0x4c) = iVar42;
      *(int **)(iVar30 + 0x50) = piVar14;
      if (param_1[0x1a3] == 0) {
        iVar42 = 0;
      }
      else {
        iVar42 = *(int *)(param_1[0x1a3] + 8);
      }
      *(undefined4 *)(iVar42 + 8) = 0xffffffff;
      *(undefined4 *)(iVar30 + 0x2c) = 0;
      piVar14 = (int *)FUN_4a134aa8(iVar30);
      if (piVar14[0x10] == iVar30) {
        piVar14[0x10] = 0;
      }
      return piVar14;
    case 1:
      iVar42 = 0x830;
      break;
    case 2:
      iVar42 = 0x832;
      break;
    case 3:
      FUN_4a0ff4a4(param_1,iVar42,0x82e);
      thunk_FUN_4a0c6b08();
      return *(int **)(param_1[8] + 0x264);
    case 4:
      iVar30 = 0xcd9;
      iVar42 = 0xcda;
      break;
    case 5:
      iVar30 = 0xcd1;
      iVar42 = 0xcd0;
      break;
    default:
      return param_1;
    }
    goto FUN_4a0cd7a0;
  }
  piVar14 = (int *)param_1[8];
  puVar36 = (uint *)0x0;
  if (param_2 == 0xb) {
    if (param_3[3] == 0) {
      puVar48 = (uint *)0x0;
    }
    else {
      puVar48 = *(uint **)(param_3[3] + 8);
    }
    if ((*puVar48 & 6) == 0) goto LAB_4a0ce6d0;
    goto LAB_4a0ce940;
  }
LAB_4a0ce6d0:
  switch(param_1[0x3e]) {
  case 0:
  case 1:
  case 3:
  case 5:
    if (param_2 != 0xb) {
      return piVar14;
    }
    piVar14 = (int *)param_3[3];
    if (piVar14 == (int *)0x0) {
      puVar48 = (uint *)0x0;
    }
    else {
      puVar48 = (uint *)piVar14[2];
    }
    if ((*puVar48 & 0x80000000) == 0) {
      return piVar14;
    }
    if (piVar14 != (int *)0x0) {
      puVar36 = (uint *)piVar14[2];
    }
    uVar31 = puVar36[2];
    piVar14 = (int *)(uVar31 - 0x849);
    if (uVar31 == 0x849) {
      iVar30 = FUN_4a0fd380(param_1[8],0x849);
      if (iVar30 == 0) {
        iVar30 = param_1[8];
        uVar38 = FUN_4a0941ec();
        FUN_4a094ddc(uVar38,0x849);
        uVar38 = FUN_4a0941ec();
        FUN_4a09403c(uVar38,1);
        thunk_FUN_4a161570(0x24);
        uVar38 = FUN_4a0c2818();
        uVar13 = thunk_FUN_4a161570(0xc);
        piVar14 = (int *)FUN_4a0c0198(uVar13,uVar38);
        if (piVar14 != (int *)0x0) {
          (**(code **)(*piVar14 + 0xc))(piVar14);
        }
        FUN_4a0bfed4(piVar14,0x8b);
        FUN_4a0bfed4(piVar14,7);
        uVar13 = FUN_4a085684(*(undefined4 *)(iVar30 + 0x260));
        FUN_4a0bfd84(piVar14,uVar13);
        uVar13 = FUN_4a0855d8(*(undefined4 *)(iVar30 + 0x260));
        FUN_4a0bfd84(piVar14,uVar13);
        FUN_4a0bfe0c(piVar14,*(undefined1 *)(*(int *)(iVar30 + 0x264) + 0xd));
        FUN_4a0bfe0c(piVar14,*(undefined1 *)(iVar30 + 0x494));
        FUN_4a0bfe0c(piVar14,*(undefined1 *)(iVar30 + 0x495));
        FUN_4a0bfe0c(piVar14,*(undefined1 *)(iVar30 + 0x497));
        if (*(int *)PTR_DAT_4a0fe1d4 != 0) {
          FUN_4a0bfe0c(piVar14,*(undefined1 *)(iVar30 + 0x498));
        }
        FUN_4a0bfe0c(piVar14,*(undefined1 *)(iVar30 + 0x499));
        FUN_4a0941ec();
        uVar13 = FUN_4a0953f4();
        FUN_4a0bfe0c(piVar14,uVar13);
        FUN_4a0bfe0c(piVar14,*(undefined1 *)(iVar30 + 0x4c0));
        FUN_4a0bfe0c(piVar14,*(undefined1 *)(iVar30 + 0x4c1));
        FUN_4a0c011c(piVar14,extraout_r1,*(undefined4 *)(iVar30 + 0x4c8),
                     *(undefined4 *)(iVar30 + 0x4cc));
        FUN_4a0c011c(piVar14,extraout_r1_00,*(undefined4 *)(iVar30 + 0x4d0),
                     *(undefined4 *)(iVar30 + 0x4d4));
        FUN_4a0c011c(piVar14,extraout_r1_01,*(undefined4 *)(iVar30 + 0x4d8),
                     *(undefined4 *)(iVar30 + 0x4dc));
        FUN_4a0c011c(piVar14,extraout_r1_02,*(undefined4 *)(iVar30 + 0x4e0),
                     *(undefined4 *)(iVar30 + 0x4e4));
        FUN_4a0c0110(piVar14,*(uint *)(iVar30 + 0x49c) & 0xff);
        iVar42 = 0;
        do {
          if (*(int *)(iVar30 + 0x514) == 0) {
            iVar37 = 0;
          }
          else {
            iVar37 = *(int *)(*(int *)(iVar30 + 0x514) + 8);
          }
          FUN_4a0bff24(piVar14,*(undefined4 *)(iVar37 + iVar42 * 4));
          if (*(int *)(iVar30 + 0x4b0) == 0) {
            iVar37 = 0;
          }
          else {
            iVar37 = *(int *)(*(int *)(iVar30 + 0x4b0) + 8);
          }
          FUN_4a0bfe0c(piVar14,*(undefined1 *)(iVar37 + iVar42));
          iVar42 = iVar42 + 1;
        } while (iVar42 != 7);
        FUN_4a0bfed4(piVar14,0x8b);
        FUN_4a0c254c(&uStack_2c,uVar38);
        iVar42 = (**(code **)(*piVar14 + 0x2c))(piVar14);
        *(bool *)(iVar30 + 0x34) = iVar42 != 1 || *(char *)(iVar30 + 0x34) != '\0';
        if (*(int *)(iVar30 + 0x38) == 0) {
          uVar38 = FUN_4a16b5a0(&uStack_40,&uStack_2c);
          uVar13 = thunk_FUN_4a161570(0x14);
          uVar13 = FUN_4a0c707c(uVar13,PTR_s_sim3set_4a0fe1dc);
          FUN_4a0ff2ac(iVar30,uVar13,uVar38);
          FUN_4a16b6c0(&uStack_40);
        }
        else {
          uVar38 = FUN_4a16b5a0(&uStack_40,&uStack_2c);
          uVar13 = thunk_FUN_4a161570(0x14);
          uVar13 = FUN_4a0c707c(uVar13,PTR_s_sim3set_demo_4a0fe1d8);
          FUN_4a0ff2ac(iVar30,uVar13,uVar38);
          FUN_4a16b6c0(&uStack_40);
        }
        if ((piVar14 != (int *)0x0) && (iVar42 = (**(code **)(*piVar14 + 8))(piVar14), iVar42 != 0))
        {
          (**(code **)(*piVar14 + 4))(piVar14);
        }
        piVar14 = (int *)(1 - (uint)*(byte *)(iVar30 + 0x34));
        if (1 < *(byte *)(iVar30 + 0x34)) {
          piVar14 = (int *)0x0;
        }
        FUN_4a16b6c0(&uStack_2c);
        return piVar14;
      }
      iVar30 = 6;
    }
    else if ((int)uVar31 < 0x84a) {
      piVar14 = (int *)(uVar31 - 0x843);
      if (uVar31 == 0x843) {
        param_1[0x5b] = 0x844;
        iVar30 = 10;
      }
      else if ((int)uVar31 < 0x844) {
        if (uVar31 == 1) {
          iVar30 = 9;
        }
        else {
          piVar14 = (int *)(uVar31 - 0x828);
          if (piVar14 == (int *)0x0) {
            if ((param_1[0x3e] == 5) || (*(int *)PTR_DAT_4a0ce30c != 0)) {
              iVar42 = param_1[0x5a];
              uVar38 = 0x828;
              iVar30 = 0x840;
              goto LAB_4a0ce2e0;
            }
            iVar30 = 5;
          }
          else {
            if (piVar14 != (int *)0x14) {
              return piVar14;
            }
            iVar30 = 2;
          }
        }
      }
      else if (piVar14 == (int *)0x2) {
        param_1[0x5b] = 0x846;
        iVar30 = 10;
      }
      else {
        if (piVar14 != (int *)&DAT_00000004) {
          return piVar14;
        }
        param_1[0x5b] = 0x848;
        iVar30 = 10;
      }
    }
    else {
      if (piVar14 == (int *)&DAT_0000000e) {
        uVar52 = host_s3eAccelerometerGetInt_arm(0);
        iVar30 = (int)((ulonglong)uVar52 >> 0x20);
        bVar49 = (int)uVar52 != 0;
        if (bVar49) {
          iVar30 = 0x58;
        }
        iVar42 = param_1[0x5a];
        uVar38 = 0x857;
        if (bVar49) {
          iVar30 = iVar30 + 0x800;
        }
        else {
          iVar30 = 0xcd4;
        }
      }
      else if ((int)piVar14 < 0xf) {
        if (piVar14 == (int *)&DAT_00000004) {
          uVar38 = 0x84d;
          iVar42 = param_1[0x5a];
          iVar30 = 0x852;
        }
        else {
          if (piVar14 != (int *)0xc) {
            return piVar14;
          }
          uVar52 = host_s3eAccelerometerGetInt_arm(0);
          iVar30 = (int)((ulonglong)uVar52 >> 0x20);
          bVar49 = (int)uVar52 != 0;
          uVar38 = 0x855;
          if (bVar49) {
            iVar30 = 0x56;
          }
          iVar42 = param_1[0x5a];
          if (bVar49) {
            iVar30 = iVar30 + 0x800;
          }
          else {
            iVar30 = 0xcd5;
          }
        }
      }
      else if (piVar14 == (int *)&DAT_00000010) {
        uVar38 = 0x859;
        iVar42 = param_1[0x5a];
        iVar30 = 0x85a;
      }
      else {
        if (piVar14 != (int *)0x17) {
          return piVar14;
        }
        uVar38 = 0x860;
        iVar42 = param_1[0x5a];
        iVar30 = 0x861;
      }
LAB_4a0ce2e0:
      FUN_4a08a31c(iVar42,iVar30,uVar38,4);
      iVar30 = 4;
    }
    break;
  case 2:
    if (param_2 != 0xb) {
      return piVar14;
    }
    iVar30 = param_3[3];
    if (iVar30 == 0) {
      puVar48 = (uint *)0x0;
    }
    else {
      puVar48 = *(uint **)(iVar30 + 8);
    }
    if ((*puVar48 & 0x20) == 0) {
      if (iVar30 != 0) {
        puVar36 = *(uint **)(iVar30 + 8);
      }
      if ((*puVar36 & 0x40) == 0) {
        return (int *)0x0;
      }
    }
    else {
      FUN_4a0941ec();
      FUN_4a0949d8();
      FUN_4a0fd0dc(piVar14);
      FUN_4a0fd02c(piVar14);
      FUN_4a0fdf10(piVar14);
      FUN_4a0fd058(piVar14);
      FUN_4a0fca00(piVar14);
    }
    goto LAB_4a0ce940;
  case 6:
    if (param_2 != 0xb) {
      return piVar14;
    }
    iVar30 = param_3[3];
    if (iVar30 == 0) {
      puVar48 = (uint *)0x0;
    }
    else {
      puVar48 = *(uint **)(iVar30 + 8);
    }
    if ((*puVar48 & 0x20) == 0) {
      if (iVar30 != 0) {
        puVar36 = *(uint **)(iVar30 + 8);
      }
      if ((*puVar36 & 0x40) == 0) {
        return (int *)0x0;
      }
      iVar30 = 5;
    }
    else {
      FUN_4a0fd564(piVar14,0x849,0);
      iVar30 = 7;
    }
    break;
  case 10:
    if (param_2 != 0xb) {
      return piVar14;
    }
    iVar30 = param_3[3];
    if (iVar30 == 0) {
      puVar48 = (uint *)0x0;
    }
    else {
      puVar48 = *(uint **)(iVar30 + 8);
    }
    if ((*puVar48 & 0x20) != 0) {
      piVar14 = (int *)FUN_4a1351bc(piVar14 + 0x9e,param_1[0x5b]);
      if (piVar14 != (int *)0x0) {
        (**(code **)(*piVar14 + 0xc))();
      }
      FUN_4a0ce9dc(param_1,param_1[0x58]);
      FUN_4a0d36b8(*(undefined4 *)(param_1[8] + 0x264));
      FUN_4a0fc268(param_1[8]);
      FUN_4a0e485c(piVar14);
      if (piVar14 != (int *)0x0) {
        iVar30 = (**(code **)(*piVar14 + 8))(piVar14);
        if (iVar30 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0ce91c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          piVar14 = (int *)(**(code **)(*piVar14 + 4))(piVar14);
          return piVar14;
        }
                    /* WARNING: Could not recover jumptable at 0x4a0ce908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
        return piVar14;
      }
                    /* WARNING: Could not recover jumptable at 0x4a0ce8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar14 = (int *)(*UNRECOVERED_JUMPTABLE)();
      return piVar14;
    }
    if (iVar30 != 0) {
      puVar36 = *(uint **)(iVar30 + 8);
    }
    if ((*puVar36 & 0x40) == 0) {
      return (int *)0x0;
    }
LAB_4a0ce940:
    iVar30 = param_1[0x58];
    break;
  default:
    return piVar14;
  }
code_r0x4a0ce9dc:
  puVar10 = (undefined4 *)FUN_4a0c6bc0(&piStack_34);
  puVar5 = PTR_PTR_4a0cec8c;
  puVar10[2] = 0;
  *puVar10 = puVar5;
  puVar10[3] = 0;
  iVar42 = -1;
  switch(iVar30) {
  case 0:
    piVar14 = (int *)param_1[0x42];
    uVar31 = param_1[0x41];
    goto joined_r0x4a0cea88;
  case 1:
    piVar14 = (int *)param_1[0x47];
    uVar31 = param_1[0x46];
    goto joined_r0x4a0cea88;
  case 2:
    uStack_38 = 0x20;
    iVar42 = 0;
    FUN_4a089eb4(param_1[0x5a],0x83d,0x83c,0x40);
    break;
  case 3:
    piVar14 = (int *)param_1[0x4c];
    uVar31 = param_1[0x4b];
joined_r0x4a0cea88:
    if (piVar14 != (int *)0x0) {
      (**(code **)(*piVar14 + 0xc))(piVar14);
    }
    (*(code *)piStack_34[7])(&piStack_34);
    uStack_2c = uVar31;
    piStack_28 = piVar14;
LAB_4a0ceb4c:
    FUN_4a08be58(param_1[0x59],&piStack_34);
    break;
  case 4:
    iVar42 = 3;
    if (param_1[0x3e] == 5) {
      iVar42 = 5;
      goto LAB_4a0cebfc;
    }
    break;
  case 5:
    piVar14 = (int *)param_1[0x51];
    uVar31 = param_1[0x50];
    iVar42 = 3;
    if (piVar14 != (int *)0x0) {
      (**(code **)(*piVar14 + 0xc))(piVar14);
    }
    (*(code *)piStack_34[7])(&piStack_34);
    uStack_2c = uVar31;
    piStack_28 = piVar14;
    if (param_1[0x3e] == 6 || param_1[0x3e] == 7) goto LAB_4a0cebfc;
    goto LAB_4a0ceb4c;
  case 6:
    iVar35 = 0x849;
    iVar37 = param_1[0x5a];
    goto LAB_4a0cebc0;
  case 7:
    iVar42 = 5;
    FUN_4a089e34(param_1[0x5a],0x84b,0x849,4);
    break;
  case 10:
    iVar35 = 0x841;
    iVar37 = param_1[0x5a];
LAB_4a0cebc0:
    uStack_38 = 0x20;
    iVar42 = 5;
    FUN_4a089eb4(iVar37,iVar35 + 1,iVar35,0x40);
  }
  if (param_1[0x3e] == -1) {
    if (piStack_28 == (int *)0x0) {
      iVar37 = 0;
    }
    else {
      iVar37 = piStack_28[2];
    }
    if (iVar37 != 0) {
      if (piStack_28 == (int *)0x0) {
        iVar37 = 0;
      }
      else {
        iVar37 = piStack_28[2];
      }
      *(undefined4 *)(iVar37 + 8) = 0;
    }
  }
LAB_4a0cebfc:
  piVar14 = piStack_28;
  uVar31 = uStack_2c;
  if (piStack_28 != (int *)0x0) {
    (**(code **)(*piStack_28 + 0xc))(piStack_28);
  }
  (**(code **)(param_1[0x53] + 0x1c))(param_1 + 0x53);
  param_1[0x55] = uVar31;
  param_1[0x56] = (int)piVar14;
  param_1[0x58] = iVar42;
  param_1[0x21] = 0;
  param_1[0x3e] = iVar30;
  param_1[0x22] = 0;
  param_1[0x24] = -1;
  param_1[0x23] = 0;
  param_1[0x25] = -1;
  FUN_4a0fd714(param_1[8]);
  FUN_4a0fe374(param_1[8]);
  FUN_4a0fd00c(param_1[8]);
  piVar14 = (int *)FUN_4a16bef4(&piStack_34);
  return piVar14;
}




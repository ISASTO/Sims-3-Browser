/* AUTOMATED DECOMPILER OUTPUT. Not original source, not a buildable game.
 * Function boundaries, types, indirect calls, and data still require validation. */

// Address: 4a0fe970

void switchD_4a11cc8c::default(void)

{
  return;
}



// Address: 4a0fe974

void FUN_4a0fe974(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_1[0x118];
  if (0x87 < param_2) {
    param_2 = 0x87;
  }
  piVar3 = (int *)0x0;
  if (iVar4 != -1) {
    iVar5 = param_1[0x119];
    if ((int *)param_1[0x15] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x15] + 0x18))();
      if ((int *)param_1[0x15] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x15] + 4))();
      }
      param_1[0x15] = 0;
    }
    param_1[0x114] = -1;
    param_1[0x113] = 0xffffff;
    *(undefined1 *)(param_1 + 0x112) = 0;
    param_1[0x117] = iVar4;
    if (iVar4 == 1) {
      uVar2 = thunk_FUN_4a161570(0xe2c);
      piVar1 = (int *)FUN_4a133f6c(uVar2,param_1);
LAB_4a0fea14:
      param_1[0x15] = (int)piVar1;
    }
    else {
      if (iVar4 == 2) {
        uVar2 = thunk_FUN_4a161570(0xa88);
        piVar1 = (int *)FUN_4a12837c(uVar2,param_1);
        goto LAB_4a0fea14;
      }
      piVar1 = (int *)param_1[0x15];
    }
    (**(code **)(*piVar1 + 0xc))(piVar1,iVar5);
    param_1[0xfb] = 0;
    param_1[0xfc] = 0;
    (**(code **)(*param_1 + 0x58))(param_1);
    param_1[0x118] = -1;
    param_1[0x119] = -1;
  }
  if (param_1[0x15] == 0) {
    return;
  }
  if ((char)param_1[0x112] != '\0') {
    iVar5 = param_1[0x114];
    iVar4 = (param_2 >> 3) * iVar5 * param_1[0x115] + param_1[0x113];
    param_1[0x113] = iVar4;
    if (iVar5 < 1) {
      if ((-1 < iVar5) || (0 < iVar4)) goto LAB_4a0feacc;
      param_1[0x113] = 0;
    }
    else {
      if (iVar4 < 0xffffff) goto LAB_4a0feacc;
      param_1[0x113] = 0xffffff;
    }
    *(undefined1 *)(param_1 + 0x112) = 0;
  }
LAB_4a0feacc:
  FUN_4a0fe380(param_1);
  piVar1 = piVar3;
  if (param_1[0x106] != 0) {
    piVar1 = *(int **)(param_1[0x106] + 8);
  }
  piVar1[1] = param_1[0xfb];
  piVar1 = piVar3;
  if (param_1[0x106] != 0) {
    piVar1 = *(int **)(param_1[0x106] + 8);
  }
  *piVar1 = param_1[0xfc];
  if (param_1[0x106] != 0) {
    piVar3 = *(int **)(param_1[0x106] + 8);
  }
  piVar3[2] = -1;
  (**(code **)(*(int *)param_1[0x15] + 0x20))((int *)param_1[0x15],0xb,param_1 + 0x103);
                    /* WARNING: Could not recover jumptable at 0x4a0feb48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)param_1[0x15] + 0x24))((int *)param_1[0x15],param_2);
  return;
}



// Address: 4a0feb4c

int FUN_4a0feb4c(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = *(uint *)(param_2 + 8);
  if ((int)uVar7 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = uVar7 & 1;
  }
  iVar4 = 0;
  iVar2 = 0;
  if (uVar3 != 0) {
    do {
      if (*(int *)(param_2 + 0xc) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(param_2 + 0xc) + 8);
      }
      pcVar1 = (char *)(iVar6 + iVar4);
      iVar4 = iVar4 + 1;
      if (*pcVar1 == param_1) {
        iVar2 = iVar2 + 1;
      }
    } while (iVar4 < (int)uVar3);
  }
  if ((int)uVar7 <= (int)uVar3) {
    return iVar2;
  }
  iVar4 = *(int *)(param_2 + 0xc);
  do {
    iVar5 = uVar3 + 1;
    iVar6 = 0;
    if (iVar4 != 0) {
      iVar6 = *(int *)(iVar4 + 8);
    }
    pcVar1 = (char *)(iVar6 + uVar3);
    uVar3 = uVar3 + 2;
    if (*pcVar1 == param_1) {
      iVar2 = iVar2 + 1;
    }
    iVar6 = 0;
    if (iVar4 != 0) {
      iVar6 = *(int *)(iVar4 + 8);
    }
    if (*(char *)(iVar6 + iVar5) == param_1) {
      iVar2 = iVar2 + 1;
    }
  } while ((int)uVar3 < (int)uVar7);
  return iVar2;
}



// Address: 4a0febf8

int FUN_4a0febf8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = *(uint *)(param_2 + 8);
  if ((int)uVar7 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = uVar7 & 1;
  }
  iVar4 = 0;
  iVar2 = 0;
  if (uVar3 != 0) {
    do {
      if (*(int *)(param_2 + 0xc) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(param_2 + 0xc) + 8);
      }
      iVar5 = iVar4 * 2;
      iVar4 = iVar4 + 1;
      if (*(short *)(iVar6 + iVar5) == param_1) {
        iVar2 = iVar2 + 1;
      }
    } while (iVar4 < (int)uVar3);
  }
  if ((int)uVar7 <= (int)uVar3) {
    return iVar2;
  }
  iVar4 = *(int *)(param_2 + 0xc);
  do {
    iVar5 = uVar3 + 1;
    iVar6 = 0;
    if (iVar4 != 0) {
      iVar6 = *(int *)(iVar4 + 8);
    }
    iVar1 = uVar3 * 2;
    uVar3 = uVar3 + 2;
    if (*(short *)(iVar6 + iVar1) == param_1) {
      iVar2 = iVar2 + 1;
    }
    iVar6 = 0;
    if (iVar4 != 0) {
      iVar6 = *(int *)(iVar4 + 8);
    }
    if (*(short *)(iVar6 + iVar5 * 2) == param_1) {
      iVar2 = iVar2 + 1;
    }
  } while ((int)uVar3 < (int)uVar7);
  return iVar2;
}



// Address: 4a0fecbc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0fecbc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_8c [8];
  int local_84;
  int local_80;
  undefined1 auStack_78 [20];
  undefined1 auStack_64 [12];
  undefined4 local_58;
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [8];
  int local_3c;
  int local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_30 = param_1;
  uStack_2c = param_2;
  uStack_28 = param_3;
  uVar4 = thunk_FUN_4a161570(0x18);
  uVar5 = FUN_4a0c346c(param_3);
  piVar6 = (int *)FUN_4a0c2adc(uVar4,uVar5);
  puVar2 = PTR_PTR_4a0ff1cc;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))();
    puVar2 = PTR_PTR_4a0ff1cc;
    iVar7 = FUN_4a0c28bc(piVar6);
    if (iVar7 != 0) {
      iVar7 = (**(code **)(*piVar6 + 0x44))(piVar6);
      piVar8 = (int *)FUN_4a0c6bc0(auStack_44);
      piVar8[2] = 0;
      puVar3 = PTR_PTR_4a0ff1d0;
      piVar8[3] = 0;
      *piVar8 = (int)puVar2;
      if (0 < iVar7) {
        iVar9 = FUN_4a15e080(iVar7);
        if (iVar9 == 0) {
          iVar9 = FUN_4a1669a8();
        }
        iVar10 = 0;
        do {
          local_58 = 0;
          *(undefined1 *)(iVar9 + iVar10) = 0;
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar7);
        thunk_FUN_4a161570(0x18);
        puVar11 = (undefined4 *)FUN_4a0c0628();
        puVar11[3] = 1;
        puVar11[4] = iVar7;
        puVar11[2] = iVar9;
        *puVar11 = puVar3;
        *(undefined1 *)(puVar11 + 5) = 1;
        if (puVar11 != (undefined4 *)0x0) {
          (**(code **)(puVar3 + 0xc))(puVar11);
        }
        (**(code **)(*piVar8 + 0x1c))(piVar8);
        piVar8[2] = iVar7;
        piVar8[3] = (int)puVar11;
      }
      FUN_4a0bfc44(auStack_54,piVar6);
      FUN_4a0bfae4(auStack_54,auStack_44);
      FUN_4a0bf60c(auStack_54);
      (**(code **)(*piVar6 + 0x20))(piVar6);
      if (8 < local_3c) {
        uVar4 = thunk_FUN_4a161570(0x20);
        piVar8 = (int *)FUN_4a0c107c(uVar4,auStack_44);
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 0xc))();
        }
        FUN_4a0bfc44(auStack_64,piVar8);
        iVar9 = FUN_4a0bf62c(auStack_64);
        if (iVar9 != 0x8b) {
          FUN_4a16b5a0(local_30,auStack_44);
          FUN_4a0bfcf4(auStack_64);
          if ((piVar8 != (int *)0x0) && (iVar7 = (**(code **)(*piVar8 + 8))(piVar8), iVar7 != 0)) {
            (**(code **)(*piVar8 + 4))(piVar8);
          }
          FUN_4a0bfcf4(auStack_54);
          FUN_4a16b6c0(auStack_44);
          if (piVar6 == (int *)0x0) {
            return;
          }
          iVar7 = (**(code **)(*piVar6 + 8))(piVar6);
          if (iVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0feeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)();
            return;
          }
LAB_4a0ff0fc:
          (**(code **)(*piVar6 + 4))(piVar6);
          return;
        }
        FUN_4a0bf5dc(auStack_64,iVar7 + -8);
        iVar9 = FUN_4a0bf62c(auStack_64);
        iVar10 = FUN_4a16b5a0(auStack_78,auStack_44);
        iVar15 = 0;
        iVar12 = 4;
        if (4 < iVar7 + -0xc) {
          do {
            if (*(int *)(iVar10 + 0xc) == 0) {
              iVar14 = 0;
            }
            else {
              iVar14 = *(int *)(*(int *)(iVar10 + 0xc) + 8);
            }
            pcVar1 = (char *)(iVar14 + iVar12);
            iVar12 = iVar12 + 1;
            iVar15 = *pcVar1 + iVar15 + 0xdf3;
          } while (iVar12 < iVar7 + -0xc);
        }
        FUN_4a16b6c0(auStack_78);
        if (iVar15 == iVar9) {
          iVar7 = local_3c + -4;
          piVar13 = (int *)FUN_4a0c6bc0(auStack_8c);
          piVar13[2] = 0;
          piVar13[3] = 0;
          *piVar13 = (int)puVar2;
          if (0 < iVar7) {
            iVar9 = FUN_4a15e080(iVar7);
            if (iVar9 == 0) {
              iVar9 = FUN_4a1669a8();
            }
            iVar10 = 0;
            do {
              *(undefined1 *)(iVar9 + iVar10) = 0;
              iVar10 = iVar10 + 1;
            } while (iVar10 < iVar7);
            thunk_FUN_4a161570(0x18);
            puVar11 = (undefined4 *)FUN_4a0c0628();
            puVar11[3] = 1;
            puVar11[4] = iVar7;
            puVar11[2] = iVar9;
            *puVar11 = puVar3;
            *(undefined1 *)(puVar11 + 5) = 1;
            if (puVar11 != (undefined4 *)0x0) {
              (**(code **)(puVar3 + 0xc))(puVar11);
            }
            (**(code **)(*piVar13 + 0x1c))(piVar13);
            piVar13[2] = iVar7;
            piVar13[3] = (int)puVar11;
          }
          iVar7 = 0;
          if (0 < local_84) {
            do {
              iVar9 = 0;
              if (local_38 == 0) {
                iVar10 = 0;
              }
              else {
                iVar10 = *(int *)(local_38 + 8);
              }
              if (local_80 != 0) {
                iVar9 = *(int *)(local_80 + 8);
              }
              *(undefined1 *)(iVar9 + iVar7) = *(undefined1 *)(iVar10 + iVar7);
              iVar7 = iVar7 + 1;
            } while (iVar7 < local_84);
          }
          FUN_4a16b5a0(local_30,auStack_8c);
          FUN_4a16b6c0(auStack_8c);
          FUN_4a0bfcf4(auStack_64);
          if ((piVar8 != (int *)0x0) && (iVar7 = (**(code **)(*piVar8 + 8))(piVar8), iVar7 != 0)) {
            (**(code **)(*piVar8 + 4))(piVar8);
          }
          FUN_4a0bfcf4(auStack_54);
          FUN_4a16b6c0(auStack_44);
          if (piVar6 == (int *)0x0) {
            return;
          }
          iVar7 = (**(code **)(*piVar6 + 8))(piVar6);
          if (iVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0ff0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)();
            return;
          }
          goto LAB_4a0ff0fc;
        }
        FUN_4a0bfcf4(auStack_64);
        if ((piVar8 != (int *)0x0) && (iVar7 = (**(code **)(*piVar8 + 8))(piVar8), iVar7 != 0)) {
          (**(code **)(*piVar8 + 4))(piVar8);
        }
      }
      FUN_4a0bfcf4(auStack_54);
      FUN_4a16b6c0(auStack_44);
    }
  }
  puVar11 = (undefined4 *)FUN_4a0c6bc0(local_30);
  puVar11[2] = 0;
  *puVar11 = puVar2;
  puVar11[3] = 0;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar7 = (**(code **)(*piVar6 + 8))(piVar6);
  if (iVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0ff1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar6 + 4))(piVar6);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a0ff1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a0ff1d4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0ff1d4(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x4b0) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x4b0) + 8);
  }
  *(undefined1 *)(iVar2 + *(int *)(param_1 + 0x4a0)) = 1;
  *(undefined4 *)(param_1 + 0x4b8) = 0;
  *(undefined4 *)(param_1 + 0x4bc) = 0;
  FUN_4a0fdf10(param_1);
  FUN_4a0dee00(*(undefined4 *)(param_1 + 0x51c));
  FUN_4a0fca00(param_1);
  if (*(int *)(param_1 + 0x514) != 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x514) + 8);
  }
  uVar4 = *(undefined4 *)(iVar3 + *(int *)(param_1 + 0x4a0) * 4);
  FUN_4a0941ec();
  piVar1 = (int *)FUN_4a0c6fcc(*(undefined4 *)(param_1 + 0x4a0),*(undefined4 *)(param_1 + 0x4a0),
                               uVar4);
  if (piVar1 == (int *)0x0) {
    return;
  }
  (**(code **)(*piVar1 + 0xc))();
  iVar3 = (**(code **)(*piVar1 + 8))(piVar1);
  if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0947ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 4))(piVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a0947d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a0ff248

void FUN_4a0ff248(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_4a0fcd24();
  FUN_4a085880(*(undefined4 *)(param_1 + 0x260),param_2);
  FUN_4a0d34e8(*(undefined4 *)(param_1 + 0x264),param_2);
  if (*(int *)PTR_DAT_4a0ff2a8 != 0) {
    FUN_4a02da24(param_2);
  }
  FUN_4a0fe974(param_1,param_2);
  *(uint *)(param_1 + 0x3ec) = *(uint *)(param_1 + 0x3ec) & ~uVar1;
  return;
}



// Address: 4a0ff2ac

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0ff2ac(undefined4 param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [20];
  
  uVar2 = thunk_FUN_4a161570(0xc);
  uVar3 = FUN_4a0c346c(param_2);
  piVar4 = (int *)FUN_4a0c2d5c(uVar2,uVar3);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))();
    iVar5 = FUN_4a0c2ca4(piVar4);
    if (iVar5 != 0) {
      FUN_4a0c0198(auStack_30,piVar4);
      FUN_4a0bfea4(auStack_30,param_3);
      iVar5 = FUN_4a16b5a0(auStack_24,param_3);
      iVar9 = 0;
      iVar8 = *(int *)(param_3 + 8) + -8;
      iVar6 = 4;
      if (4 < iVar8) {
        do {
          if (*(int *)(iVar5 + 0xc) == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(*(int *)(iVar5 + 0xc) + 8);
          }
          pcVar1 = (char *)(iVar7 + iVar6);
          iVar6 = iVar6 + 1;
          iVar9 = *pcVar1 + iVar9 + 0xdf3;
        } while (iVar6 < iVar8);
      }
      FUN_4a16b6c0(auStack_24);
      FUN_4a0bfed4(auStack_30,iVar9);
      FUN_4a0bfe18(auStack_30);
      (**(code **)(*piVar4 + 0x2c))(piVar4);
      FUN_4a0c0264(auStack_30);
    }
  }
  if (piVar4 != (int *)0x0) {
    iVar5 = (**(code **)(*piVar4 + 8))(piVar4);
    if (iVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0ff3f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar4 + 4))(piVar4);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a0ff3dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a0ff3f8

void FUN_4a0ff3f8(void)

{
  return;
}



// Address: 4a0ff3fc

void FUN_4a0ff3fc(void)

{
  return;
}



// Address: 4a0ff400

undefined4 FUN_4a0ff400(int param_1)

{
  return *(undefined4 *)(param_1 + 0x54);
}



// Address: 4a0ff408

undefined4 FUN_4a0ff408(int param_1)

{
  if ((*(char *)(param_1 + 0x448) != '\0') && (*(char *)(param_1 + 0x458) == '\0')) {
    return 1;
  }
  return 0;
}



// Address: 4a0ff42c

undefined1 FUN_4a0ff42c(int param_1)

{
  return *(undefined1 *)(param_1 + 0x58);
}



// Address: 4a0ff434

void FUN_4a0ff434(undefined4 param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)0x0;
  if (*(int *)(param_2 + 0xc) != 0) {
    piVar1 = *(int **)(*(int *)(param_2 + 0xc) + 8);
  }
  FUN_4a0c740c(param_2,0,param_1,0,*piVar1 + 5);
  return;
}



// Address: 4a0ff470

void switchD_4a1193c4::default(void)

{
  return;
}



// Address: 4a0ff474

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0ff474(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  
  FUN_4a0fc764();
  *(undefined4 *)(param_1 + 0x524) = 0;
  iVar3 = FUN_4a0941ec();
  uVar4 = host_s3eTimerGetMs_arm();
  *(undefined8 *)(iVar3 + 0x18) = uVar4;
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
                    /* WARNING: Could not recover jumptable at 0x4a094aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 4))(piVar1);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a094a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a0ff494

undefined4 FUN_4a0ff494(void)

{
  return *(undefined4 *)PTR_DAT_4a0ff4a0;
}



// Address: 4a0ff4a4

undefined4 FUN_4a0ff4a4(void)

{
  return *(undefined4 *)(*(int *)PTR_DAT_4a0ff4b4 + 0x4c);
}



// Address: 4a0ff4b8

void FUN_4a0ff4b8(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_24 [20];
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0(auStack_24);
  *puVar1 = PTR_PTR_4a0ff588;
  puVar1[2] = *(undefined4 *)(param_1 + 8);
  piVar3 = *(int **)(param_1 + 0xc);
  puVar1[3] = piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
  }
  *puVar1 = PTR_PTR_4a0ff58c;
  if (puVar1[3] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(puVar1[3] + 8);
  }
  *(undefined4 *)(iVar2 + 4) = param_2;
  if (puVar1[3] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(puVar1[3] + 8);
  }
  *(undefined4 *)(iVar2 + 8) = 0;
  if (puVar1[3] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(puVar1[3] + 8);
  }
  *(undefined4 *)(iVar2 + 0xc) = 0;
  if (puVar1[3] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(puVar1[3] + 8);
  }
  *(undefined4 *)(iVar2 + 0x10) = 0xffffffff;
  if (puVar1[3] == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = *(undefined4 **)(puVar1[3] + 8);
  }
  *puVar1 = 0;
  FUN_4a16bef4(auStack_24);
  return;
}



// Address: 4a0ff590

void FUN_4a0ff590(int param_1)

{
  FUN_4a0d36cc(*(undefined4 *)(param_1 + 0x264));
  FUN_4a085878(*(undefined4 *)(param_1 + 0x260));
  *(undefined4 *)(param_1 + 0x3f0) = 0;
  *(undefined4 *)(param_1 + 0x3ec) = 0;
  if (*(int **)(param_1 + 0x54) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x54) + 0x10))();
  }
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}



// Address: 4a0ff5dc

/* WARNING: Removing unreachable block (ram,0x4a0ff954) */
/* WARNING: Removing unreachable block (ram,0x4a0ff970) */

int FUN_4a0ff5dc(undefined4 *param_1,int *param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  
  puVar1 = PTR_PTR_4a0ffc7c;
  if (param_2 == (int *)0x0) {
    *param_1 = *(undefined4 *)PTR_PTR_4a0ffc7c;
    iVar3 = FUN_4a0c6bc0(param_1 + 0x155);
    param_1 = (undefined4 *)(iVar3 + -0x554);
    param_2 = (int *)puVar1;
  }
  piVar4 = (int *)FUN_4a0c6a44(param_1,param_2 + 1);
  iVar3 = *param_2;
  *piVar4 = iVar3;
  *(int *)((int)piVar4 + *(int *)(iVar3 + -0xc)) = param_2[5];
  puVar1 = PTR_PTR_4a0ffc80;
  piVar4[7] = (int)PTR_PTR_4a0ffc80;
  piVar4[9] = (int)(puVar1 + 0x20);
  piVar4[10] = (int)(puVar1 + 0x30);
  piVar4[0xb] = (int)(puVar1 + 0x40);
  piVar4[8] = (int)(puVar1 + 0x10);
  piVar4[6] = (int)(puVar1 + -0x10);
  piVar4[5] = (int)(puVar1 + -0x20);
  piVar4[0xc] = (int)(puVar1 + 0x50);
  *(undefined1 *)(piVar4 + 0xd) = 0;
  *(undefined1 *)((int)piVar4 + 0x35) = 0;
  *(undefined1 *)((int)piVar4 + 0x36) = 0;
  piVar4[0x13] = param_3;
  *(undefined1 *)(piVar4 + 0x14) = 0;
  piVar4[0x15] = 0;
  *(undefined1 *)(piVar4 + 0x16) = 1;
  piVar4[0x17] = 0;
  piVar4[0x18] = 0;
  iVar3 = FUN_4a0a4aa8(piVar4 + 0x19);
  iVar3 = FUN_4a0a2414(iVar3 + 0xc4);
  iVar3 = FUN_4a0a3734(iVar3 + 0xd0);
  *(undefined4 *)(iVar3 + 0x68) = 0;
  *(undefined4 *)(iVar3 + 0x6c) = 0;
  iVar3 = FUN_4a0c99e8(iVar3 + 0x70);
  iVar3 = FUN_4a06e464(iVar3 + 0x10);
  *(undefined4 *)(iVar3 + 0xd4) = 0;
  *(undefined4 *)(iVar3 + 0xe0) = 0;
  iVar3 = FUN_4a16be24(iVar3 + 0xe4,2);
  FUN_4a16c470(iVar3 + 0x14,2,0x32);
  FUN_4a16c470(iVar3 + 0x28,2,0x32);
  FUN_4a16c470(iVar3 + 0x3c,2,0x32);
  FUN_4a16c470(iVar3 + 0x50,2,0x32);
  FUN_4a16c470(iVar3 + 100,2,0x32);
  iVar3 = FUN_4a16be24(iVar3 + 0x78,3);
  *(undefined4 *)(iVar3 + 0x18) = 0;
  *(undefined4 *)(iVar3 + 0x14) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x1c) = 0;
  iVar3 = FUN_4a16be24(iVar3 + 0x20,8);
  *(undefined4 *)(iVar3 + 0x14) = 0;
  iVar3 = FUN_4a16be24(iVar3 + 0x18,3);
  *(undefined4 *)(iVar3 + 0x14) = 0;
  *(undefined4 *)(iVar3 + 0x18) = 0;
  iVar3 = FUN_4a06a9b0(iVar3 + 0x1c);
  *(undefined1 *)(iVar3 + 0x20) = 0;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  *(undefined4 *)(iVar3 + 0x28) = 0;
  *(undefined4 *)(iVar3 + 0x2c) = 0;
  *(undefined1 *)(iVar3 + 0x30) = 0;
  *(undefined4 *)(iVar3 + 0x34) = 0;
  *(undefined4 *)(iVar3 + 0x38) = 0;
  *(undefined4 *)(iVar3 + 0x3c) = 0;
  puVar5 = (undefined4 *)FUN_4a0c6bc0(iVar3 + 0x40);
  puVar1 = PTR_PTR_4a0ffc84;
  puVar5[2] = 0;
  *puVar5 = puVar1;
  puVar5[3] = 0;
  puVar5 = (undefined4 *)FUN_4a0c6bc0(puVar5 + 5);
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = puVar1;
  puVar5[5] = 0;
  *(undefined1 *)(puVar5 + 6) = 0;
  *(undefined1 *)((int)puVar5 + 0x19) = 0;
  *(undefined1 *)((int)puVar5 + 0x1a) = 0;
  *(undefined1 *)((int)puVar5 + 0x1b) = 0;
  *(undefined1 *)(puVar5 + 7) = 1;
  *(undefined1 *)((int)puVar5 + 0x1d) = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  piVar4 = (int *)FUN_4a0c6bc0(puVar5 + 10);
  puVar1 = PTR_PTR_4a0ffc88;
  piVar4[2] = 0;
  piVar4[3] = 0;
  *piVar4 = (int)puVar1;
  iVar3 = FUN_4a15e080(7);
  if (iVar3 == 0) {
    iVar3 = FUN_4a1669a8();
  }
  iVar6 = 0;
  do {
    *(undefined1 *)(iVar3 + iVar6) = 0;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 7);
  thunk_FUN_4a161570(0x18);
  puVar5 = (undefined4 *)FUN_4a0c0628();
  puVar5[2] = iVar3;
  puVar5[3] = 1;
  puVar5[4] = 7;
  puVar1 = PTR_PTR_4a0ffc8c;
  *puVar5 = PTR_PTR_4a0ffc8c;
  *(undefined1 *)(puVar5 + 5) = 1;
  if (puVar5 != (undefined4 *)0x0) {
    (**(code **)(puVar1 + 0xc))(puVar5);
  }
  (**(code **)(*piVar4 + 0x1c))(piVar4);
  piVar4[3] = (int)puVar5;
  piVar4[2] = 7;
  piVar4[5] = 0;
  piVar4[6] = 0;
  *(undefined1 *)(piVar4 + 7) = 0;
  *(undefined1 *)((int)piVar4 + 0x1d) = 0;
  piVar4[9] = 0;
  piVar4[10] = 0;
  piVar4[0xb] = 0;
  piVar4[0xc] = 0;
  piVar4[0xd] = 0;
  piVar4[0xe] = 0;
  piVar4[0xf] = 0;
  piVar4[0x10] = 0;
  piVar4[0x11] = 0;
  piVar4[0x12] = 0;
  piVar4[0x13] = 0;
  piVar4[0x14] = 0;
  piVar4[0x15] = 0;
  piVar4[0x16] = 0;
  piVar4[0x17] = 0;
  piVar4[0x18] = 0;
  piVar4 = (int *)FUN_4a0c6bc0(piVar4 + 0x19);
  puVar2 = PTR_PTR_4a0ffc90;
  piVar4[2] = 0;
  piVar4[3] = 0;
  *piVar4 = (int)puVar2;
  iVar3 = FUN_4a15e080(0x1c);
  if (iVar3 == 0) {
    iVar3 = FUN_4a1669a8();
  }
  iVar6 = 0;
  do {
    *(undefined4 *)(iVar3 + iVar6 * 4) = 0;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 7);
  thunk_FUN_4a161570(0x18);
  puVar5 = (undefined4 *)FUN_4a0c0628();
  puVar5[2] = iVar3;
  puVar5[3] = 4;
  puVar5[4] = 7;
  *puVar5 = puVar1;
  *(undefined1 *)(puVar5 + 5) = 1;
  if (puVar5 != (undefined4 *)0x0) {
    (**(code **)(puVar1 + 0xc))(puVar5);
  }
  (**(code **)(*piVar4 + 0x1c))(piVar4);
  piVar4[3] = (int)puVar5;
  piVar4[2] = 7;
  piVar4[5] = 0;
  piVar4[6] = 0;
  piVar4[7] = 0;
  piVar4[8] = 0;
  iVar3 = FUN_4a168f18(piVar4 + 9,0);
  *(undefined4 *)(iVar3 + 0x14) = 0;
  *(undefined4 *)(iVar3 + 0x18) = 0;
  *(undefined4 *)(iVar3 + 0x1c) = 0;
  *(undefined4 *)(iVar3 + 0x20) = 0;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  iVar6 = iVar3 + -0x52c;
  thunk_FUN_4a161570(0xc);
  uVar7 = FUN_4a09874c();
  *(undefined4 *)(iVar3 + -0x4cc) = uVar7;
  thunk_FUN_4a161570(0xb0);
  uVar7 = FUN_4a086740();
  iVar9 = 0;
  *(undefined4 *)(iVar3 + -0x2cc) = uVar7;
  do {
    if (*(int *)(iVar3 + -0x18) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(*(int *)(iVar3 + -0x18) + 8);
    }
    puVar5 = (undefined4 *)(iVar8 + iVar9 * 4);
    piVar11 = (int *)*puVar5;
    if (piVar11 != (int *)0x0) {
      iVar8 = (**(code **)(*piVar11 + 8))(piVar11);
      if (iVar8 != 0) {
        (**(code **)(*piVar11 + 4))(piVar11);
      }
      *puVar5 = 0;
    }
    if ((piVar4 != (int *)0x0) && (iVar8 = (**(code **)(*piVar4 + 8))(piVar4), iVar8 != 0)) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 7);
  FUN_4a09a540(iVar3 + -0x4c8);
  FUN_4a099c28(iVar3 + -0x4c8,*(undefined4 *)(iVar3 + -0x4cc));
  FUN_4a0993ac(iVar3 + -0x4c8,*(undefined4 *)(iVar3 + -0x4cc));
  FUN_4a099ab4(iVar3 + -0x4c8,*(undefined4 *)(iVar3 + -0x4cc));
  uVar7 = thunk_FUN_4a0b3908();
  *(undefined4 *)(iVar3 + -0x4d0) = uVar7;
  FUN_4a0a2ddc(iVar3 + -0x334,*(undefined4 *)(iVar3 + -0x4cc));
  FUN_4a0a1140(iVar3 + -0x404,*(undefined4 *)(iVar3 + -0x4cc));
  uVar10 = *(undefined4 *)(iVar3 + -0x2cc);
  FUN_4a085884(uVar10,*(undefined4 *)(iVar3 + -0x4cc));
  uVar7 = thunk_FUN_4a161570(0x40);
  piVar4 = (int *)FUN_4a0d3730(uVar7,uVar10);
  *(int **)(iVar3 + -0x2c8) = piVar4;
  if (piVar4 != (int *)0x0) {
    piVar4 = (int *)((int)piVar4 + *(int *)(*piVar4 + -0xc));
  }
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))();
  }
  FUN_4a086318(uVar10,0x14);
  FUN_4a086318(uVar10,0x12);
  FUN_4a086318(uVar10,0x15);
  FUN_4a086318(uVar10,0x16);
  FUN_4a086318(uVar10,0x13);
  FUN_4a0fbc08(iVar6);
  uVar7 = thunk_FUN_4a161570(0x5b4);
  uVar7 = FUN_4a0f9a54(uVar7,iVar6);
  *(undefined4 *)(iVar3 + -0xc) = uVar7;
  uVar7 = thunk_FUN_4a161570(0x9c4);
  uVar7 = FUN_4a0e3cf0(uVar7,iVar6);
  *(undefined4 *)(iVar3 + -0x10) = uVar7;
  *(undefined4 *)(iVar3 + -8) = 0;
  *(undefined4 *)(iVar3 + -4) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x24) = 0xffffffff;
  FUN_4a0fd744(iVar6);
  FUN_4a06d070(iVar3 + -0x2b4);
  puVar5 = (undefined4 *)thunk_FUN_4a161570(0x2c);
  puVar1 = PTR_PTR_4a0ffc94;
  *puVar5 = *(undefined4 *)PTR_PTR_4a0ffc94;
  iVar9 = FUN_4a0c6bc0(puVar5 + 9);
  piVar4 = (int *)FUN_4a0be1cc(iVar9 + -0x24,puVar1 + 4);
  iVar9 = *(int *)puVar1;
  *piVar4 = iVar9;
  *(undefined4 *)((int)piVar4 + *(int *)(iVar9 + -0xc)) = *(undefined4 *)(puVar1 + 0xc);
  piVar4[7] = 0;
  *(int **)(iVar3 + -0x1e0) = piVar4;
  if (piVar4 != (int *)0x0) {
    piVar4 = (int *)((int)piVar4 + *(int *)(*piVar4 + -0xc));
  }
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))();
  }
  return iVar6;
}



// Address: 4a0ffcc4

int FUN_4a0ffcc4(int *param_1,int param_2,int *param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  puVar1 = PTR_PTR_4a100388;
  if (param_2 != 0) {
    param_3 = (int *)PTR_PTR_4a100384;
  }
  iVar2 = *param_3;
  *param_1 = iVar2;
  *(int *)((int)param_1 + *(int *)(iVar2 + -0xc)) = param_3[5];
  param_1[9] = (int)(puVar1 + 0x20);
  param_1[10] = (int)(puVar1 + 0x30);
  param_1[0xb] = (int)(puVar1 + 0x40);
  param_1[8] = (int)(puVar1 + 0x10);
  param_1[6] = (int)(puVar1 + -0x10);
  param_1[7] = (int)puVar1;
  param_1[5] = (int)(puVar1 + -0x20);
  param_1[0xc] = (int)(puVar1 + 0x50);
  if ((int *)param_1[0x15] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x15] + 4))();
  }
  param_1[0x15] = 0;
  if ((int *)param_1[0x18] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x18] + 4))();
  }
  param_1[0x18] = 0;
  param_1[0x13] = 0;
  piVar6 = (int *)param_1[0x17];
  if ((piVar6 != (int *)0x0) && (iVar2 = (**(code **)(*piVar6 + 8))(piVar6), iVar2 != 0)) {
    (**(code **)(*piVar6 + 4))(piVar6);
  }
  param_1[0x17] = 0;
  if ((int *)param_1[0x98] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x98] + 4))();
  }
  param_1[0x98] = 0;
  FUN_4a0d36b8(param_1[0x99]);
  piVar6 = (int *)param_1[0x99];
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)((int)piVar6 + *(int *)(*piVar6 + -0xc));
  }
  if ((piVar6 != (int *)0x0) && (iVar2 = (**(code **)(*piVar6 + 8))(piVar6), iVar2 != 0)) {
    (**(code **)(*piVar6 + 4))(piVar6);
  }
  param_1[0x99] = 0;
  piVar6 = (int *)param_1[0xd3];
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)((int)piVar6 + *(int *)(*piVar6 + -0xc));
  }
  if ((piVar6 != (int *)0x0) && (iVar2 = (**(code **)(*piVar6 + 8))(piVar6), iVar2 != 0)) {
    (**(code **)(*piVar6 + 4))(piVar6);
  }
  param_1[0xd3] = 0;
  piVar6 = (int *)param_1[0x17];
  if ((piVar6 != (int *)0x0) && (iVar2 = (**(code **)(*piVar6 + 8))(piVar6), iVar2 != 0)) {
    (**(code **)(*piVar6 + 4))(piVar6);
  }
  if ((int *)param_1[0x148] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x148] + 4))();
  }
  if ((int *)param_1[0x147] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x147] + 4))();
  }
  iVar2 = 0;
  if (0 < param_1[0x11c]) {
    do {
      iVar3 = param_1[0x11d];
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(iVar3 + 8);
      }
      if (*(int *)(iVar5 + (iVar2 * 2 + 1) * 4) != 0) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(iVar3 + 8);
        }
        uVar7 = *(undefined4 *)(iVar3 + iVar2 * 8);
        iVar3 = 0;
        do {
          FUN_4a0992b8(uVar7,iVar3);
          iVar3 = iVar3 + 1;
        } while (iVar3 < 1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 * 2 < param_1[0x11c]);
  }
  iVar2 = 0;
  if (0 < param_1[0x121]) {
    do {
      iVar3 = param_1[0x122];
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(iVar3 + 8);
      }
      if (*(int *)(iVar5 + (iVar2 + 1) * 4) != 0) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(iVar3 + 8);
        }
        FUN_4a09fa1c(param_1 + 0x4a,*(undefined4 *)(iVar3 + iVar2 * 4));
      }
      iVar2 = iVar2 + 2;
    } while (iVar2 < param_1[0x121]);
  }
  param_1[0x14b] = (int)PTR_PTR_4a10038c;
  iVar3 = param_1[0x14d];
  iVar2 = FUN_4a0bcc84(param_1 + 0x14b);
  if (iVar2 != 0) {
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar2 + iVar5 * 0x14))();
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
      if (iVar2 == 0) goto LAB_4a100018;
    }
    FUN_4a14f21c(iVar2);
  }
LAB_4a100018:
  iVar2 = FUN_4a0c6bf4(param_1 + 0x14b);
  puVar8 = (undefined4 *)(iVar2 + -0x24);
  *puVar8 = PTR_PTR_4a100390;
  iVar3 = *(int *)(iVar2 + -0x1c);
  iVar2 = FUN_4a0bcc84(puVar8);
  if (iVar2 != 0) {
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        piVar6 = *(int **)(iVar2 + iVar5 * 4);
        if ((piVar6 != (int *)0x0) && (iVar4 = (**(code **)(*piVar6 + 8))(piVar6), iVar4 != 0)) {
          (**(code **)(*piVar6 + 4))(piVar6);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
      if (iVar2 == 0) goto LAB_4a1000a4;
    }
    FUN_4a14f21c(iVar2);
  }
LAB_4a1000a4:
  iVar2 = FUN_4a0c6bf4(puVar8);
  puVar8 = (undefined4 *)(iVar2 + -100);
  *puVar8 = PTR_PTR_4a100394;
  iVar3 = *(int *)(iVar2 + -0x5c);
  iVar2 = FUN_4a0bcc84(puVar8);
  if (iVar2 != 0) {
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
      if (iVar2 == 0) goto LAB_4a1000f0;
    }
    FUN_4a14f21c();
  }
LAB_4a1000f0:
  iVar2 = FUN_4a0c6bf4(puVar8);
  iVar2 = FUN_4a16bef4(iVar2 + -0x28);
  iVar2 = FUN_4a16bef4(iVar2 + -0x14);
  iVar2 = FUN_4a06af6c(iVar2 + -0x40);
  iVar2 = FUN_4a16bef4(iVar2 + -0x1c);
  iVar2 = FUN_4a16bef4(iVar2 + -0x18);
  iVar2 = FUN_4a16bef4(iVar2 + -0x20);
  puVar1 = PTR_PTR_4a100398;
  *(undefined **)(iVar2 + -0x14) = PTR_PTR_4a100398;
  iVar5 = *(int *)(iVar2 + -0xc);
  iVar3 = FUN_4a0bcc84(iVar2 + -0x14);
  if (iVar3 != 0) {
    iVar4 = 0;
    if (0 < iVar5) {
      do {
        (*(code *)**(undefined4 **)(iVar3 + iVar4 * 0x14))();
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar5);
      if (iVar3 == 0) goto LAB_4a100188;
    }
    FUN_4a14f21c(iVar3);
  }
LAB_4a100188:
  iVar2 = FUN_4a0c6bf4(iVar2 + -0x14);
  *(undefined **)(iVar2 + -0x14) = puVar1;
  iVar5 = *(int *)(iVar2 + -0xc);
  iVar3 = FUN_4a0bcc84(iVar2 + -0x14);
  if (iVar3 != 0) {
    iVar4 = 0;
    if (0 < iVar5) {
      do {
        (*(code *)**(undefined4 **)(iVar3 + iVar4 * 0x14))();
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar5);
      if (iVar3 == 0) goto LAB_4a1001ec;
    }
    FUN_4a14f21c(iVar3);
  }
LAB_4a1001ec:
  iVar2 = FUN_4a0c6bf4(iVar2 + -0x14);
  *(undefined **)(iVar2 + -0x14) = puVar1;
  iVar5 = *(int *)(iVar2 + -0xc);
  iVar3 = FUN_4a0bcc84(iVar2 + -0x14);
  if (iVar3 != 0) {
    iVar4 = 0;
    if (0 < iVar5) {
      do {
        (*(code *)**(undefined4 **)(iVar3 + iVar4 * 0x14))();
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar5);
      if (iVar3 == 0) goto LAB_4a100250;
    }
    FUN_4a14f21c(iVar3);
  }
LAB_4a100250:
  iVar2 = FUN_4a0c6bf4(iVar2 + -0x14);
  *(undefined **)(iVar2 + -0x14) = puVar1;
  iVar5 = *(int *)(iVar2 + -0xc);
  iVar3 = FUN_4a0bcc84(iVar2 + -0x14);
  if (iVar3 != 0) {
    iVar4 = 0;
    if (0 < iVar5) {
      do {
        (*(code *)**(undefined4 **)(iVar3 + iVar4 * 0x14))();
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar5);
      if (iVar3 == 0) goto LAB_4a1002b4;
    }
    FUN_4a14f21c(iVar3);
  }
LAB_4a1002b4:
  iVar2 = FUN_4a0c6bf4(iVar2 + -0x14);
  *(undefined **)(iVar2 + -0x14) = puVar1;
  iVar5 = *(int *)(iVar2 + -0xc);
  iVar3 = FUN_4a0bcc84(iVar2 + -0x14);
  if (iVar3 != 0) {
    iVar4 = 0;
    if (0 < iVar5) {
      do {
        (*(code *)**(undefined4 **)(iVar3 + iVar4 * 0x14))();
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar5);
      if (iVar3 == 0) goto LAB_4a100318;
    }
    FUN_4a14f21c(iVar3);
  }
LAB_4a100318:
  iVar2 = FUN_4a0c6bf4(iVar2 + -0x14);
  iVar2 = FUN_4a16bef4(iVar2 + -0x14);
  iVar2 = FUN_4a06e694(iVar2 + -0xe4);
  iVar2 = thunk_FUN_4a0c6bf4(iVar2 + -0x10);
  iVar2 = FUN_4a0a384c(iVar2 + -0x70);
  iVar2 = FUN_4a0a2840(iVar2 + -0xd0);
  iVar2 = FUN_4a0a4c14(iVar2 + -0xc4);
  iVar2 = FUN_4a0c6a90(iVar2 + -100,param_3 + 1);
  if (param_2 == 0) {
    return iVar2;
  }
  iVar2 = FUN_4a0c6bf4(iVar2 + 0x554);
  return iVar2 + -0x554;
}



// Address: 4a10039c

undefined4 FUN_4a10039c(undefined4 param_1)

{
  FUN_4a00d2cc();
  return param_1;
}



// Address: 4a1003b4

void FUN_4a1003b4(int param_1,short param_2,int param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  short sVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int *piVar9;
  undefined2 *puVar10;
  undefined4 uVar11;
  int *piVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint uVar23;
  int iVar24;
  int local_140;
  int local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  uint local_11c [20];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined4 local_b0;
  uint local_ac [13];
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
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
  uint local_2c;
  undefined4 local_28;
  
  iVar8 = DAT_4a100bfc;
  iVar24 = (int)((ulonglong)((longlong)DAT_4a100bfc * (longlong)param_4) >> 0x20);
  uVar1 = *(ushort *)(*(int *)(param_1 + 4) + 0x20);
  uVar2 = *(ushort *)(*(int *)(param_1 + 4) + 0x22);
  iVar24 = (iVar24 - (iVar24 >> 0x1f)) * -3 + param_4;
  if (iVar24 == 0) {
    **(short **)(param_1 + 0x10) = param_2 - uVar1;
    *(ushort *)(*(int *)(param_1 + 0x10) + 4) = param_2 - uVar1;
    *(short *)(*(int *)(param_1 + 0x10) + 8) = param_2;
    *(short *)(*(int *)(param_1 + 0x10) + 0xc) = param_2;
  }
  else if (iVar24 == 1) {
    sVar4 = param_2 - uVar1 / 2;
    **(short **)(param_1 + 0x10) = sVar4;
    *(short *)(*(int *)(param_1 + 0x10) + 4) = sVar4;
    sVar4 = (uVar1 + param_2) - uVar1 / 2;
    *(short *)(*(int *)(param_1 + 0x10) + 8) = sVar4;
    *(short *)(*(int *)(param_1 + 0x10) + 0xc) = sVar4;
  }
  else if (iVar24 == 2) {
    **(short **)(param_1 + 0x10) = param_2;
    *(short *)(*(int *)(param_1 + 0x10) + 4) = param_2;
    *(ushort *)(*(int *)(param_1 + 0x10) + 8) = uVar1 + param_2;
    *(ushort *)(*(int *)(param_1 + 0x10) + 0xc) = uVar1 + param_2;
  }
  iVar24 = (int)((longlong)iVar8 * (longlong)param_4);
  iVar8 = (int)((ulonglong)((longlong)iVar8 * (longlong)param_4) >> 0x20);
  iVar8 = (iVar8 - (iVar8 >> 0x1f)) * 3;
  sVar4 = (short)param_3;
  if (iVar8 == 0) {
    *(short *)(*(int *)(param_1 + 0x10) + 2) = sVar4;
    *(ushort *)(*(int *)(param_1 + 0x10) + 6) = sVar4 + uVar2;
    iVar24 = *(int *)(param_1 + 0x10);
    *(ushort *)(iVar24 + 10) = sVar4 + uVar2;
    iVar8 = *(int *)(param_1 + 0x10);
    *(short *)(iVar8 + 0xe) = sVar4;
  }
  else if (iVar8 == 3) {
    uVar13 = uVar2 / 2;
    iVar8 = param_3 - uVar13;
    sVar4 = (sVar4 + uVar2) - (short)uVar13;
    *(short *)(*(int *)(param_1 + 0x10) + 2) = (short)iVar8;
    *(short *)(*(int *)(param_1 + 0x10) + 6) = sVar4;
    *(short *)(*(int *)(param_1 + 0x10) + 10) = sVar4;
    iVar24 = *(int *)(param_1 + 0x10);
    *(short *)(iVar24 + 0xe) = (short)iVar8;
  }
  else if (iVar8 == 6) {
    iVar8 = param_3 - (uint)uVar2;
    *(short *)(*(int *)(param_1 + 0x10) + 2) = (short)iVar8;
    *(short *)(*(int *)(param_1 + 0x10) + 6) = sVar4;
    *(short *)(*(int *)(param_1 + 0x10) + 10) = sVar4;
    iVar24 = *(int *)(param_1 + 0x10);
    *(short *)(iVar24 + 0xe) = (short)iVar8;
  }
  FUN_4a0bf06c(iVar8,iVar24);
  piVar9 = (int *)FUN_4a0bf07c();
  puVar6 = PTR_DAT_4a100c0c;
  puVar5 = PTR_DAT_4a100c04;
  if (*(int *)PTR_DAT_4a100c00 != 0) {
    puVar10 = *(undefined2 **)(param_1 + 0x10);
    uVar3 = puVar10[1];
    puVar10[1] = *puVar10;
    **(undefined2 **)(param_1 + 0x10) = uVar3;
    iVar8 = *(int *)(param_1 + 0x10);
    uVar3 = *(undefined2 *)(iVar8 + 6);
    *(undefined2 *)(iVar8 + 6) = *(undefined2 *)(iVar8 + 4);
    *(undefined2 *)(*(int *)(param_1 + 0x10) + 4) = uVar3;
    iVar8 = *(int *)(param_1 + 0x10);
    uVar3 = *(undefined2 *)(iVar8 + 10);
    *(undefined2 *)(iVar8 + 10) = *(undefined2 *)(iVar8 + 8);
    *(undefined2 *)(*(int *)(param_1 + 0x10) + 8) = uVar3;
    iVar8 = *(int *)(param_1 + 0x10);
    uVar3 = *(undefined2 *)(iVar8 + 0xe);
    *(undefined2 *)(iVar8 + 0xe) = *(undefined2 *)(iVar8 + 0xc);
    *(undefined2 *)(*(int *)(param_1 + 0x10) + 0xc) = uVar3;
    puVar7 = PTR_DAT_4a100c14;
    if (*(int *)(*(int *)puVar5 + 0xc) != 2) {
      if (*(int *)PTR_DAT_4a100c14 == 0) {
        uVar22 = FUN_4a135760(*(undefined4 *)PTR_DAT_4a100c18,s_textShader_4a100c34,
                              s_CIwGxShaderTechnique_4a100c1c,0);
        *(undefined4 *)puVar7 = uVar22;
        uVar22 = FUN_4a0a5a90();
        uVar22 = thunk_FUN_4a1503f0(uVar22,s_inPMVMat_4a100c40);
        *(undefined4 *)PTR_DAT_4a100c4c = uVar22;
        uVar22 = FUN_4a0a5a90(*(undefined4 *)puVar7);
        uVar22 = thunk_FUN_4a1503f0(uVar22,s_inUVScale_4a100c50);
        *(undefined4 *)PTR_DAT_4a100c5c = uVar22;
        uVar22 = FUN_4a0a5a90(*(undefined4 *)puVar7);
        uVar22 = thunk_FUN_4a1503f0(uVar22,s_inSampler0_4a100c60);
        *(undefined4 *)PTR_DAT_4a100c6c = uVar22;
        uVar22 = FUN_4a0a5a90(*(undefined4 *)puVar7);
        uVar22 = thunk_FUN_4a1503f0(uVar22,s_inCol_4a100c70);
        *(undefined4 *)PTR_DAT_4a100c78 = uVar22;
      }
      uVar22 = FUN_4a0a5a90(*(undefined4 *)puVar7);
      (**(code **)(*piVar9 + 0xdc))(piVar9,uVar22);
      local_ac[0] = *(uint *)PTR_DAT_4a100c7c;
      local_ac[1] = *(uint *)(PTR_DAT_4a100c7c + 4);
      local_ac[2] = *(uint *)(PTR_DAT_4a100c7c + 8);
      local_ac[3] = *(uint *)(PTR_DAT_4a100c7c + 0xc);
      local_ac[4] = *(uint *)(PTR_DAT_4a100c7c + 0x10);
      local_ac[5] = *(uint *)(PTR_DAT_4a100c7c + 0x14);
      local_ac[6] = *(uint *)(PTR_DAT_4a100c7c + 0x18);
      local_ac[7] = *(uint *)(PTR_DAT_4a100c7c + 0x1c);
      local_ac[8] = *(uint *)(PTR_DAT_4a100c7c + 0x20);
      local_ac[9] = *(uint *)(PTR_DAT_4a100c7c + 0x24);
      local_ac[10] = *(uint *)(PTR_DAT_4a100c7c + 0x28);
      local_ac[0xb] = *(uint *)(PTR_DAT_4a100c7c + 0x2c);
      uVar22 = *(undefined4 *)puVar6;
      local_13c = FUN_4a0bc200(uVar22);
      local_140 = FUN_4a0bc1f8(uVar22);
      if (local_140 < local_13c) {
        piVar12 = &local_140;
      }
      else {
        piVar12 = &local_13c;
      }
      uVar22 = FUN_4a171fac(*piVar12);
      local_ac[0] = FUN_4a171bb8(0x40000000,uVar22);
      uVar22 = *(undefined4 *)puVar6;
      local_13c = FUN_4a0bc200(uVar22);
      local_140 = FUN_4a0bc1f8(uVar22);
      if (local_13c < local_140) {
        piVar12 = &local_140;
      }
      else {
        piVar12 = &local_13c;
      }
      uVar22 = FUN_4a171fac(*piVar12);
      local_ac[4] = FUN_4a171bb8(0x40000000,uVar22);
      uVar22 = DAT_4a100c80;
      local_ac[9] = 0xbf800000;
      local_ac[10] = 0xbf800000;
      local_ac[8] = DAT_4a100c80;
      uVar11 = FUN_4a171fac(2 - *(int *)PTR_DAT_4a100c84);
      uVar11 = FUN_4a17211c(uVar11,DAT_4a100c88);
      local_b0 = 0;
      local_b4 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_c4 = 0;
      local_c8 = 0;
      local_11c[0x12] = 0;
      local_bc = 0x3f800000;
      local_11c[0x10] = FUN_4a002d64();
      local_cc = local_11c[0x10];
      local_28 = local_11c[0x10];
      local_11c[0x13] = FUN_4a002f08(uVar11);
      uVar23 = local_11c[0x13] ^ 0x80000000;
      local_11c[0x11] = uVar23;
      local_2c = local_11c[0x13];
      local_38 = FUN_4a17211c(0,local_ac[6]);
      local_34 = local_38;
      local_30 = local_38;
      local_3c = FUN_4a17211c(uVar23,local_ac[3]);
      uVar11 = FUN_4a17211c(local_11c[0x10],local_ac[0]);
      uVar11 = FUN_4a171a94(uVar11,local_3c);
      uVar13 = FUN_4a171a94(uVar11,local_38);
      local_48 = FUN_4a17211c(0,local_ac[7]);
      local_44 = local_48;
      local_40 = local_48;
      local_4c = FUN_4a17211c(uVar23,local_ac[4]);
      uVar11 = FUN_4a17211c(local_11c[0x10],local_ac[1]);
      uVar11 = FUN_4a171a94(uVar11,local_4c);
      uVar11 = FUN_4a171a94(uVar11,local_48);
      uVar14 = FUN_4a17211c(uVar23,local_ac[5]);
      uVar15 = FUN_4a17211c(local_11c[0x10],local_ac[2]);
      uVar14 = FUN_4a171a94(uVar15,uVar14);
      uVar14 = FUN_4a171a94(uVar14,0x80000000);
      uVar15 = FUN_4a17211c(local_28,local_ac[3]);
      uVar16 = FUN_4a17211c(local_2c,local_ac[0]);
      uVar15 = FUN_4a171a94(uVar16,uVar15);
      uVar15 = FUN_4a171a94(uVar15,local_34);
      uVar16 = FUN_4a17211c(local_28,local_ac[4]);
      uVar17 = FUN_4a17211c(local_2c,local_ac[1]);
      uVar16 = FUN_4a171a94(uVar17,uVar16);
      uVar16 = FUN_4a171a94(uVar16,local_44);
      local_50 = FUN_4a17211c(local_28,local_ac[5]);
      uVar17 = FUN_4a17211c(local_2c,local_ac[2]);
      uVar17 = FUN_4a171a94(uVar17,local_50);
      uVar17 = FUN_4a171a94(uVar17,0x80000000);
      local_54 = FUN_4a17211c(0x3f800000,local_ac[6]);
      uVar18 = FUN_4a17211c(0,local_ac[3]);
      uVar19 = FUN_4a17211c(0,local_ac[0]);
      local_58 = FUN_4a171a94(uVar19,uVar18);
      uVar18 = FUN_4a171a94(local_58,local_54);
      local_5c = FUN_4a17211c(local_bc,local_ac[7]);
      uVar19 = FUN_4a17211c(local_c0,local_ac[4]);
      uVar20 = FUN_4a17211c(local_c4,local_ac[1]);
      uVar19 = FUN_4a171a94(uVar20,uVar19);
      uVar20 = FUN_4a171a94(uVar19,local_5c);
      local_60 = FUN_4a17211c(local_c0,local_ac[5]);
      uVar21 = FUN_4a17211c(local_c4,local_ac[2]);
      local_64 = FUN_4a171a94(uVar21,local_60);
      uVar22 = FUN_4a171a94(local_64,uVar22);
      uVar21 = FUN_4a171a94(local_58,local_30);
      uVar21 = FUN_4a171a94(uVar21,local_ac[9]);
      uVar19 = FUN_4a171a94(uVar19,local_40);
      iVar8 = FUN_4a171a94(uVar19,local_ac[10]);
      uVar19 = FUN_4a171a94(local_64,0x80000000);
      local_13c = FUN_4a171a94(uVar19,local_ac[0xb]);
      local_140 = iVar8;
      local_ac[0] = uVar13;
      local_ac[1] = uVar11;
      local_ac[2] = uVar14;
      local_ac[3] = uVar15;
      local_ac[4] = uVar16;
      local_ac[5] = uVar17;
      local_ac[6] = uVar18;
      local_ac[7] = uVar20;
      local_ac[8] = uVar22;
      local_ac[9] = uVar21;
      local_ac[10] = iVar8;
      local_ac[0xb] = local_13c;
      uVar22 = FUN_4a17211c(local_11c[0x12],local_13c);
      uVar11 = FUN_4a17211c(local_11c[0x11],local_ac[10]);
      uVar14 = FUN_4a17211c(local_11c[0x10],local_ac[9]);
      uVar11 = FUN_4a171a94(uVar14,uVar11);
      uVar11 = FUN_4a171a94(uVar11,uVar22);
      local_68 = FUN_4a17211c(local_cc,local_ac[10]);
      uVar14 = FUN_4a17211c(local_11c[0x13],local_ac[9]);
      uVar14 = FUN_4a171a94(uVar14,local_68);
      iVar8 = FUN_4a171a94(uVar14,uVar22);
      local_6c = FUN_4a17211c(local_bc,local_ac[0xb]);
      local_70 = FUN_4a17211c(local_c0,local_ac[10]);
      uVar22 = FUN_4a17211c(local_c4,local_ac[9]);
      uVar22 = FUN_4a171a94(uVar22,local_70);
      local_74 = FUN_4a171a94(uVar22,local_6c);
      local_13c = local_74;
      local_140 = iVar8;
      local_ac[0xc] = uVar11;
      local_ac[9] = uVar11;
      local_ac[10] = iVar8;
      uVar13 = 0;
      local_ac[0xb] = local_74;
      local_78 = iVar8;
      do {
        uVar23 = 0;
        do {
          if (uVar13 < 3) {
            if (uVar23 < 3) {
              local_11c[uVar23 * 4 + uVar13] = local_ac[uVar13 * 3 + uVar23];
            }
            else {
              local_11c[uVar23 * 4 + uVar13] = local_ac[uVar13 + 9];
            }
          }
          else {
            local_11c[uVar23 * 4 + uVar13] = 0;
          }
          uVar23 = uVar23 + 1;
        } while (uVar23 < 4);
        uVar13 = uVar13 + 1;
      } while (uVar13 < 4);
      local_11c[0xf] = 0x3f800000;
      (**(code **)(*piVar9 + 0xd8))(piVar9,*(undefined4 *)PTR_DAT_4a100c4c,1,0,local_11c);
      uVar11 = FUN_4a172098(0);
      uVar22 = DAT_4a101124;
      local_12c = FUN_4a17211c(uVar11,DAT_4a101124);
      uVar11 = FUN_4a172098(0);
      local_128 = FUN_4a17211c(uVar11,uVar22);
      uVar11 = FUN_4a172098(0);
      local_124 = FUN_4a17211c(uVar11,uVar22);
      uVar11 = FUN_4a172098(0);
      local_120 = FUN_4a17211c(uVar11,uVar22);
      (**(code **)(*piVar9 + 0xd4))(piVar9,*(undefined4 *)PTR_DAT_4a100c78,1,&local_12c);
      (**(code **)(*piVar9 + 0xac))(piVar9,0);
      (**(code **)(*piVar9 + 0xac))(piVar9,1);
      (**(code **)(*piVar9 + 0x28))(piVar9,0xbe2);
      (**(code **)(*piVar9 + 0x90))(piVar9,0x302);
      thunk_FUN_4a150d48(1,2,0x1402,0,4,*(undefined4 *)(param_1 + 0xc));
      iVar8 = *(int *)(*(int *)(param_1 + 8) + 0x2c);
      local_130 = *(uint *)(iVar8 + 0xbc);
      uVar22 = FUN_4a172098(local_130 & 0xffff);
      uVar22 = FUN_4a17295c(uVar22,0xfffffff4);
      local_138 = FUN_4a17295c(uVar22,0xfffffff4);
      uVar22 = FUN_4a172098(local_130._2_2_);
      uVar22 = FUN_4a17295c(uVar22,0xfffffff4);
      local_134 = FUN_4a17295c(uVar22,0xfffffff4);
      (**(code **)(*piVar9 + 0xcc))(piVar9,*(undefined4 *)PTR_DAT_4a100c5c,1,&local_138);
      (**(code **)(*piVar9 + 0x10))(piVar9,0xde1,*(undefined4 *)(iVar8 + 0xb4));
      thunk_FUN_4a150d48(0,2,0x1402,0,4,*(undefined4 *)(param_1 + 0x10));
      (**(code **)(*piVar9 + 0xb4))(piVar9,*(undefined4 *)PTR_DAT_4a100c6c,0);
      host_glDrawArrays_arm(6,0,4);
      return;
    }
    (**(code **)(*piVar9 + 0xac))(piVar9,0x1701);
    FUN_4a1504dc();
    uVar22 = *(undefined4 *)puVar6;
    local_b8 = FUN_4a0bc200(uVar22);
    local_bc = FUN_4a0bc1f8(uVar22);
    uVar22 = *(undefined4 *)puVar6;
    if (local_bc < local_b8) {
      piVar12 = &local_bc;
    }
    else {
      piVar12 = &local_b8;
    }
    iVar8 = *piVar12;
    local_b8 = FUN_4a0bc200(uVar22);
    local_bc = FUN_4a0bc1f8(uVar22);
    if (local_b8 < local_bc) {
      piVar12 = &local_bc;
    }
    else {
      piVar12 = &local_b8;
    }
    uVar22 = FUN_4a171fac(*piVar12);
    uVar11 = FUN_4a171fac(iVar8);
    FUN_4a1506a8(uVar11,0,uVar22,0,&DAT_c0a00000,0x40a00000);
    (**(code **)(*piVar9 + 0xac))(piVar9,0x1700);
    FUN_4a1504dc();
    (**(code **)(*piVar9 + 0x28))(piVar9,0xde1);
    (**(code **)(*piVar9 + 0x24))(piVar9,0x8076);
    (**(code **)(*piVar9 + 0x2c))(piVar9,0x8078);
    thunk_FUN_4a14febc(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
    (**(code **)(*piVar9 + 0x28))(piVar9,0xbe2);
    (**(code **)(*piVar9 + 0x90))(piVar9,0x302);
    thunk_FUN_4a150a70(2,0x1402,4,*(undefined4 *)(param_1 + 0xc));
    iVar8 = *(int *)(*(int *)(param_1 + 8) + 0x2c);
    local_74 = *(undefined4 *)(iVar8 + 0xbc);
    (**(code **)(*piVar9 + 0xac))(piVar9,0x1702);
    local_b0 = *(undefined4 *)(PTR_DAT_4a100c10 + 4);
    local_ac[0] = *(uint *)(PTR_DAT_4a100c10 + 8);
    local_ac[1] = *(uint *)(PTR_DAT_4a100c10 + 0xc);
    local_ac[2] = *(uint *)(PTR_DAT_4a100c10 + 0x10);
    local_ac[4] = *(uint *)(PTR_DAT_4a100c10 + 0x18);
    local_ac[5] = *(uint *)(PTR_DAT_4a100c10 + 0x1c);
    local_ac[6] = *(uint *)(PTR_DAT_4a100c10 + 0x20);
    local_ac[7] = *(uint *)(PTR_DAT_4a100c10 + 0x24);
    local_ac[8] = *(uint *)(PTR_DAT_4a100c10 + 0x28);
    local_ac[9] = *(uint *)(PTR_DAT_4a100c10 + 0x2c);
    local_ac[10] = *(uint *)(PTR_DAT_4a100c10 + 0x30);
    local_ac[0xb] = *(uint *)(PTR_DAT_4a100c10 + 0x34);
    local_ac[0xc] = *(uint *)(PTR_DAT_4a100c10 + 0x38);
    local_78 = *(int *)(PTR_DAT_4a100c10 + 0x3c);
    local_b4 = (int)(short)local_74 >> 8;
    local_ac[3] = (int)local_74._2_2_ >> 8;
    FUN_4a1505bc(&local_b4);
    (**(code **)(*piVar9 + 0x10))(piVar9,0xde1,*(undefined4 *)(iVar8 + 0xb4));
    thunk_FUN_4a150d6c(2,0x1402,4,*(undefined4 *)(param_1 + 0x10));
    host_glDrawArrays_arm(6,0,4);
    return;
  }
  thunk_FUN_4a0361cc(*(undefined4 *)(param_1 + 8));
  puVar6 = PTR_DAT_4a100c08;
  (**(code **)(PTR_DAT_4a100c08 + 0x14))(*(undefined4 *)(param_1 + 0x10),4,3);
  FUN_4a0363b8(*(undefined4 *)(param_1 + 0xc),0);
  iVar8 = *(int *)puVar5;
  if ((*(uint *)(iVar8 + 4) & 0x800) == 0) {
    *(undefined1 *)(iVar8 + 0x680) = 1;
                    /* WARNING: Could not recover jumptable at 0x4a1004f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(puVar6 + 0x24))(3,0,4);
    return;
  }
  return;
}



// Address: 4a101168

undefined4 * FUN_4a101168(undefined4 *param_1)

{
  *param_1 = PTR_PTR_4a10119c;
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 4))();
  }
  return param_1;
}



// Address: 4a1011a0

void FUN_4a1011a0(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined2 *puVar14;
  undefined4 uVar15;
  int *piVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined8 uVar24;
  int local_100;
  int local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  uint local_dc [20];
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  uint local_6c [13];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_4a0360f8(0,0,0);
  (**(code **)(PTR_DAT_4a101af4 + 0x20))(3);
  puVar7 = PTR_DAT_4a101b00;
  puVar6 = PTR_PTR_4a101afc;
  if (((*(uint *)PTR_DAT_4a101af8 & 1) == 0) &&
     (iVar11 = thunk_FUN_4a1491bc(PTR_DAT_4a101af8), iVar11 != 0)) {
    *(undefined4 *)(puVar7 + 0x14) = 0;
    puVar9 = PTR_FUN_4a101b08;
    puVar8 = PTR_DAT_4a101b04;
    *(undefined **)puVar7 = puVar6;
    thunk_FUN_4a1490b0(puVar7,puVar9,puVar8);
  }
  puVar8 = PTR_DAT_4a101b0c;
  *(undefined **)PTR_DAT_4a101b0c = PTR_DAT_4a101b00;
  if (((*(uint *)PTR_DAT_4a101af8 & 1) == 0) &&
     (iVar11 = thunk_FUN_4a1491bc(PTR_DAT_4a101af8), iVar11 != 0)) {
    *(undefined4 *)(puVar7 + 0x14) = 0;
    puVar10 = PTR_FUN_4a101b08;
    puVar9 = PTR_DAT_4a101b04;
    *(undefined **)puVar7 = puVar6;
    thunk_FUN_4a1490b0(puVar7,puVar10,puVar9);
  }
  iVar11 = *(int *)puVar8;
  if (iVar11 != 0) {
    *(undefined4 *)puVar8 = *(undefined4 *)(iVar11 + 0x14);
  }
  iVar11 = *(int *)PTR_DAT_4a101b0c;
  while (iVar11 != 0) {
    if (((*(uint *)PTR_DAT_4a101af8 & 1) == 0) &&
       (iVar11 = thunk_FUN_4a1491bc(PTR_DAT_4a101af8), puVar7 = PTR_DAT_4a101b00, iVar11 != 0)) {
      *(undefined4 *)(PTR_DAT_4a101b00 + 0x14) = 0;
      puVar9 = PTR_FUN_4a101b08;
      puVar8 = PTR_DAT_4a101b04;
      *(undefined **)puVar7 = puVar6;
      thunk_FUN_4a1490b0(puVar7,puVar9,puVar8);
    }
    iVar11 = DAT_4a101b10;
    iVar20 = *(int *)PTR_DAT_4a101b0c;
    iVar21 = *(int *)(iVar20 + 4);
    uVar12 = *(undefined4 *)(iVar20 + 0xc);
    iVar23 = *(int *)(iVar20 + 0x10);
    iVar22 = (int)((ulonglong)((longlong)DAT_4a101b10 * (longlong)iVar23) >> 0x20);
    uVar1 = *(ushort *)(*(int *)(iVar21 + 4) + 0x20);
    uVar2 = *(ushort *)(*(int *)(iVar21 + 4) + 0x22);
    iVar22 = (iVar22 - (iVar22 >> 0x1f)) * -3 + iVar23;
    sVar5 = (short)*(undefined4 *)(iVar20 + 8);
    if (iVar22 == 0) {
      **(short **)(iVar21 + 0x10) = sVar5 - uVar1;
      *(ushort *)(*(int *)(iVar21 + 0x10) + 4) = sVar5 - uVar1;
      *(short *)(*(int *)(iVar21 + 0x10) + 8) = sVar5;
      *(short *)(*(int *)(iVar21 + 0x10) + 0xc) = sVar5;
    }
    else if (iVar22 == 1) {
      sVar4 = sVar5 - uVar1 / 2;
      **(short **)(iVar21 + 0x10) = sVar4;
      *(short *)(*(int *)(iVar21 + 0x10) + 4) = sVar4;
      sVar5 = (sVar5 + uVar1) - uVar1 / 2;
      *(short *)(*(int *)(iVar21 + 0x10) + 8) = sVar5;
      *(short *)(*(int *)(iVar21 + 0x10) + 0xc) = sVar5;
    }
    else if (iVar22 == 2) {
      **(short **)(iVar21 + 0x10) = sVar5;
      *(short *)(*(int *)(iVar21 + 0x10) + 4) = sVar5;
      *(ushort *)(*(int *)(iVar21 + 0x10) + 8) = uVar1 + sVar5;
      *(ushort *)(*(int *)(iVar21 + 0x10) + 0xc) = uVar1 + sVar5;
    }
    iVar11 = (int)((ulonglong)((longlong)iVar11 * (longlong)iVar23) >> 0x20);
    iVar11 = (iVar11 - (iVar11 >> 0x1f)) * 3;
    sVar5 = (short)uVar12;
    if (iVar11 == 0) {
      *(short *)(*(int *)(iVar21 + 0x10) + 2) = sVar5;
      *(ushort *)(*(int *)(iVar21 + 0x10) + 6) = uVar2 + sVar5;
      *(ushort *)(*(int *)(iVar21 + 0x10) + 10) = uVar2 + sVar5;
      *(short *)(*(int *)(iVar21 + 0x10) + 0xe) = sVar5;
    }
    else if (iVar11 == 3) {
      sVar4 = sVar5 - uVar2 / 2;
      *(short *)(*(int *)(iVar21 + 0x10) + 2) = sVar4;
      sVar5 = (sVar5 + uVar2) - uVar2 / 2;
      *(short *)(*(int *)(iVar21 + 0x10) + 6) = sVar5;
      *(short *)(*(int *)(iVar21 + 0x10) + 10) = sVar5;
      *(short *)(*(int *)(iVar21 + 0x10) + 0xe) = sVar4;
    }
    else if (iVar11 == 6) {
      *(ushort *)(*(int *)(iVar21 + 0x10) + 2) = sVar5 - uVar2;
      *(short *)(*(int *)(iVar21 + 0x10) + 6) = sVar5;
      *(short *)(*(int *)(iVar21 + 0x10) + 10) = sVar5;
      *(ushort *)(*(int *)(iVar21 + 0x10) + 0xe) = sVar5 - uVar2;
    }
    FUN_4a0bf06c();
    piVar13 = (int *)FUN_4a0bf07c();
    puVar7 = PTR_DAT_4a101b14;
    if (*(int *)(PTR_DAT_4a101b14 + 0x60) == 0) {
      thunk_FUN_4a0361cc(*(undefined4 *)(iVar21 + 8));
      puVar7 = PTR_DAT_4a101af4;
      (**(code **)(PTR_DAT_4a101af4 + 0x14))(*(undefined4 *)(iVar21 + 0x10),4,3);
      FUN_4a0363b8(*(undefined4 *)(iVar21 + 0xc),0);
      if ((*(uint *)(*(int *)PTR_DAT_4a101b18 + 4) & 0x800) == 0) {
        *(undefined1 *)(*(int *)PTR_DAT_4a101b18 + 0x680) = 1;
        (**(code **)(puVar7 + 0x24))(3,0,4);
      }
    }
    else {
      puVar14 = *(undefined2 **)(iVar21 + 0x10);
      uVar3 = puVar14[1];
      puVar14[1] = *puVar14;
      **(undefined2 **)(iVar21 + 0x10) = uVar3;
      iVar11 = *(int *)(iVar21 + 0x10);
      uVar3 = *(undefined2 *)(iVar11 + 6);
      *(undefined2 *)(iVar11 + 6) = *(undefined2 *)(iVar11 + 4);
      *(undefined2 *)(*(int *)(iVar21 + 0x10) + 4) = uVar3;
      iVar11 = *(int *)(iVar21 + 0x10);
      uVar3 = *(undefined2 *)(iVar11 + 10);
      *(undefined2 *)(iVar11 + 10) = *(undefined2 *)(iVar11 + 8);
      *(undefined2 *)(*(int *)(iVar21 + 0x10) + 8) = uVar3;
      iVar11 = *(int *)(iVar21 + 0x10);
      uVar3 = *(undefined2 *)(iVar11 + 0xe);
      *(undefined2 *)(iVar11 + 0xe) = *(undefined2 *)(iVar11 + 0xc);
      *(undefined2 *)(*(int *)(iVar21 + 0x10) + 0xc) = uVar3;
      puVar8 = PTR_DAT_4a101b24;
      if (*(int *)(*(int *)PTR_DAT_4a101b18 + 0xc) == 2) {
        (**(code **)(*piVar13 + 0xac))(piVar13,0x1701);
        FUN_4a1504dc();
        puVar7 = PTR_DAT_4a101b1c;
        uVar12 = *(undefined4 *)PTR_DAT_4a101b1c;
        local_78 = FUN_4a0bc200(uVar12);
        local_7c = FUN_4a0bc1f8(uVar12);
        uVar12 = *(undefined4 *)puVar7;
        if (local_7c < local_78) {
          piVar16 = &local_7c;
        }
        else {
          piVar16 = &local_78;
        }
        iVar11 = *piVar16;
        local_78 = FUN_4a0bc200(uVar12);
        local_7c = FUN_4a0bc1f8(uVar12);
        if (local_78 < local_7c) {
          piVar16 = &local_7c;
        }
        else {
          piVar16 = &local_78;
        }
        uVar12 = FUN_4a171fac(*piVar16);
        uVar15 = FUN_4a171fac(iVar11);
        FUN_4a1506a8(uVar15,0,uVar12,0,&DAT_c0a00000,0x40a00000);
        (**(code **)(*piVar13 + 0xac))(piVar13,0x1700);
        FUN_4a1504dc();
        (**(code **)(*piVar13 + 0x28))(piVar13,0xde1);
        (**(code **)(*piVar13 + 0x24))(piVar13,0x8076);
        (**(code **)(*piVar13 + 0x2c))(piVar13,0x8078);
        thunk_FUN_4a14febc(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
        (**(code **)(*piVar13 + 0x28))(piVar13,0xbe2);
        (**(code **)(*piVar13 + 0x90))(piVar13,0x302);
        thunk_FUN_4a150a70(2,0x1402,4,*(undefined4 *)(iVar21 + 0xc));
        iVar11 = *(int *)(*(int *)(iVar21 + 8) + 0x2c);
        local_34 = *(int *)(iVar11 + 0xbc);
        (**(code **)(*piVar13 + 0xac))(piVar13,0x1702);
        local_70 = *(undefined4 *)(PTR_DAT_4a101b20 + 4);
        local_6c[0] = *(uint *)(PTR_DAT_4a101b20 + 8);
        local_6c[1] = *(uint *)(PTR_DAT_4a101b20 + 0xc);
        local_6c[2] = *(uint *)(PTR_DAT_4a101b20 + 0x10);
        local_6c[4] = *(uint *)(PTR_DAT_4a101b20 + 0x18);
        local_6c[5] = *(uint *)(PTR_DAT_4a101b20 + 0x1c);
        local_6c[6] = *(uint *)(PTR_DAT_4a101b20 + 0x20);
        local_6c[7] = *(uint *)(PTR_DAT_4a101b20 + 0x24);
        local_6c[8] = *(uint *)(PTR_DAT_4a101b20 + 0x28);
        local_6c[9] = *(uint *)(PTR_DAT_4a101b20 + 0x2c);
        local_6c[10] = *(uint *)(PTR_DAT_4a101b20 + 0x30);
        local_6c[0xb] = *(uint *)(PTR_DAT_4a101b20 + 0x34);
        local_6c[0xc] = *(uint *)(PTR_DAT_4a101b20 + 0x38);
        local_38 = *(int *)(PTR_DAT_4a101b20 + 0x3c);
        local_74 = (int)(short)local_34 >> 8;
        local_6c[3] = (int)local_34._2_2_ >> 8;
        FUN_4a1505bc(&local_74);
        (**(code **)(*piVar13 + 0x10))(piVar13,0xde1,*(undefined4 *)(iVar11 + 0xb4));
        thunk_FUN_4a150d6c(2,0x1402,4,*(undefined4 *)(iVar21 + 0x10));
        host_glDrawArrays_arm(6,0,4);
      }
      else {
        if (*(int *)PTR_DAT_4a101b24 == 0) {
          uVar12 = FUN_4a135760(*(undefined4 *)PTR_DAT_4a101b28,s_textShader_4a101b44,
                                s_CIwGxShaderTechnique_4a101b2c,0);
          *(undefined4 *)puVar8 = uVar12;
          uVar12 = FUN_4a0a5a90();
          uVar12 = thunk_FUN_4a1503f0(uVar12,s_inPMVMat_4a101b50);
          *(undefined4 *)PTR_DAT_4a101b5c = uVar12;
          uVar12 = FUN_4a0a5a90(*(undefined4 *)puVar8);
          uVar12 = thunk_FUN_4a1503f0(uVar12,s_inUVScale_4a101b60);
          *(undefined4 *)PTR_DAT_4a101b6c = uVar12;
          uVar12 = FUN_4a0a5a90(*(undefined4 *)puVar8);
          uVar12 = thunk_FUN_4a1503f0(uVar12,s_inSampler0_4a101b70);
          *(undefined4 *)PTR_DAT_4a101b7c = uVar12;
          uVar12 = FUN_4a0a5a90(*(undefined4 *)puVar8);
          uVar12 = thunk_FUN_4a1503f0(uVar12,s_inCol_4a101b80);
          *(undefined4 *)PTR_DAT_4a101b88 = uVar12;
        }
        uVar12 = FUN_4a0a5a90(*(undefined4 *)puVar8);
        (**(code **)(*piVar13 + 0xdc))(piVar13,uVar12);
        puVar8 = PTR_DAT_4a101b1c;
        local_6c[0] = *(uint *)PTR_DAT_4a101b8c;
        local_6c[1] = *(uint *)(PTR_DAT_4a101b8c + 4);
        local_6c[2] = *(uint *)(PTR_DAT_4a101b8c + 8);
        local_6c[3] = *(uint *)(PTR_DAT_4a101b8c + 0xc);
        local_6c[4] = *(uint *)(PTR_DAT_4a101b8c + 0x10);
        local_6c[5] = *(uint *)(PTR_DAT_4a101b8c + 0x14);
        local_6c[6] = *(uint *)(PTR_DAT_4a101b8c + 0x18);
        local_6c[7] = *(uint *)(PTR_DAT_4a101b8c + 0x1c);
        local_6c[8] = *(uint *)(PTR_DAT_4a101b8c + 0x20);
        local_6c[9] = *(uint *)(PTR_DAT_4a101b8c + 0x24);
        local_6c[10] = *(uint *)(PTR_DAT_4a101b8c + 0x28);
        local_6c[0xb] = *(uint *)(PTR_DAT_4a101b8c + 0x2c);
        uVar12 = *(undefined4 *)PTR_DAT_4a101b1c;
        local_fc = FUN_4a0bc200(uVar12);
        local_100 = FUN_4a0bc1f8(uVar12);
        if (local_100 < local_fc) {
          piVar16 = &local_100;
        }
        else {
          piVar16 = &local_fc;
        }
        uVar12 = FUN_4a171fac(*piVar16);
        local_6c[0] = FUN_4a171bb8(0x40000000,uVar12);
        uVar12 = *(undefined4 *)puVar8;
        local_fc = FUN_4a0bc200(uVar12);
        local_100 = FUN_4a0bc1f8(uVar12);
        if (local_fc < local_100) {
          piVar16 = &local_100;
        }
        else {
          piVar16 = &local_fc;
        }
        uVar12 = FUN_4a171fac(*piVar16);
        local_6c[4] = FUN_4a171bb8(0x40000000,uVar12);
        local_6c[8] = DAT_4a101b90;
        local_6c[9] = 0xbf800000;
        local_6c[10] = 0xbf800000;
        uVar12 = FUN_4a171fac(2 - *(int *)(puVar7 + 0x4c));
        uVar12 = FUN_4a17211c(uVar12,DAT_4a101b94);
        local_70 = 0;
        local_74 = 0;
        local_80 = 0;
        local_7c = 0x3f800000;
        local_78 = 0;
        local_84 = 0;
        local_88 = 0;
        local_dc[0x12] = 0;
        local_dc[0x10] = FUN_4a002d64(uVar12);
        local_8c = local_dc[0x10];
        local_dc[0x13] = FUN_4a002f08(uVar12);
        local_dc[0x11] = local_dc[0x13] ^ 0x80000000;
        FUN_4a0d3a78(local_6c,local_dc + 0x10);
        uVar12 = FUN_4a17211c(local_dc[0x12],local_6c[0xb]);
        uVar15 = FUN_4a17211c(local_dc[0x11],local_6c[10]);
        uVar17 = FUN_4a17211c(local_dc[0x10],local_6c[9]);
        uVar15 = FUN_4a171a94(uVar17,uVar15);
        uVar12 = FUN_4a171a94(uVar15,uVar12);
        local_28 = FUN_4a17211c(local_88,local_6c[0xb]);
        uVar15 = FUN_4a17211c(local_8c,local_6c[10]);
        uVar17 = FUN_4a17211c(local_dc[0x13],local_6c[9]);
        uVar15 = FUN_4a171a94(uVar17,uVar15);
        iVar11 = FUN_4a171a94(uVar15,local_28);
        local_2c = FUN_4a17211c(local_7c,local_6c[0xb]);
        local_30 = FUN_4a17211c(local_80,local_6c[10]);
        uVar15 = FUN_4a17211c(local_84,local_6c[9]);
        uVar15 = FUN_4a171a94(uVar15,local_30);
        local_34 = FUN_4a171a94(uVar15,local_2c);
        local_fc = local_34;
        local_100 = iVar11;
        local_6c[0xc] = uVar12;
        local_6c[9] = uVar12;
        local_6c[10] = iVar11;
        uVar19 = 0;
        local_6c[0xb] = local_34;
        local_38 = iVar11;
        do {
          uVar18 = 0;
          do {
            if (uVar19 < 3) {
              if (uVar18 < 3) {
                local_dc[uVar18 * 4 + uVar19] = local_6c[uVar19 * 3 + uVar18];
              }
              else {
                local_dc[uVar18 * 4 + uVar19] = local_6c[uVar19 + 9];
              }
            }
            else {
              local_dc[uVar18 * 4 + uVar19] = 0;
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 < 4);
          uVar19 = uVar19 + 1;
        } while (uVar19 < 4);
        local_dc[0xf] = 0x3f800000;
        (**(code **)(*piVar13 + 0xd8))(piVar13,*(undefined4 *)PTR_DAT_4a101b5c,1,0,local_dc);
        uVar15 = FUN_4a172098(0);
        uVar12 = DAT_4a101e0c;
        local_ec = FUN_4a17211c(uVar15,DAT_4a101e0c);
        uVar15 = FUN_4a172098(0);
        local_e8 = FUN_4a17211c(uVar15,uVar12);
        uVar15 = FUN_4a172098(0);
        local_e4 = FUN_4a17211c(uVar15,uVar12);
        uVar15 = FUN_4a172098(0);
        local_e0 = FUN_4a17211c(uVar15,uVar12);
        (**(code **)(*piVar13 + 0xd4))(piVar13,*(undefined4 *)PTR_DAT_4a101b88,1,&local_ec);
        (**(code **)(*piVar13 + 0xac))(piVar13,0);
        (**(code **)(*piVar13 + 0xac))(piVar13,1);
        (**(code **)(*piVar13 + 0x28))(piVar13,0xbe2);
        (**(code **)(*piVar13 + 0x90))(piVar13,0x302);
        thunk_FUN_4a150d48(1,2,0x1402,0,4,*(undefined4 *)(iVar21 + 0xc));
        iVar11 = *(int *)(*(int *)(iVar21 + 8) + 0x2c);
        local_f0 = *(uint *)(iVar11 + 0xbc);
        uVar12 = FUN_4a172098(local_f0 & 0xffff);
        uVar12 = FUN_4a17295c(uVar12,0xfffffff4);
        local_f8 = FUN_4a17295c(uVar12,0xfffffff4);
        uVar12 = FUN_4a172098(local_f0._2_2_);
        uVar12 = FUN_4a17295c(uVar12,0xfffffff4);
        local_f4 = FUN_4a17295c(uVar12,0xfffffff4);
        (**(code **)(*piVar13 + 0xcc))(piVar13,*(undefined4 *)PTR_DAT_4a101b6c,1,&local_f8);
        (**(code **)(*piVar13 + 0x10))(piVar13,0xde1,*(undefined4 *)(iVar11 + 0xb4));
        thunk_FUN_4a150d48(0,2,0x1402,0,4,*(undefined4 *)(iVar21 + 0x10));
        (**(code **)(*piVar13 + 0xb4))(piVar13,*(undefined4 *)PTR_DAT_4a101b7c,0);
        host_glDrawArrays_arm(6,0,4);
      }
    }
    if (((*(uint *)PTR_DAT_4a101af8 & 1) == 0) &&
       (iVar11 = thunk_FUN_4a1491bc(PTR_DAT_4a101af8), puVar7 = PTR_DAT_4a101b00, iVar11 != 0)) {
      *(undefined4 *)(PTR_DAT_4a101b00 + 0x14) = 0;
      puVar9 = PTR_FUN_4a101b08;
      puVar8 = PTR_DAT_4a101b04;
      *(undefined **)puVar7 = puVar6;
      thunk_FUN_4a1490b0(puVar7,puVar9,puVar8);
    }
    if (*(int *)PTR_DAT_4a101b0c == 0) {
      iVar11 = *(int *)PTR_DAT_4a101b0c;
    }
    else {
      iVar11 = *(int *)(*(int *)PTR_DAT_4a101b0c + 0x14);
      *(int *)PTR_DAT_4a101b0c = iVar11;
    }
  }
  FUN_4a05a618();
  thunk_FUN_4a05a68c();
  FUN_4a0396fc();
  FUN_4a040d64();
  puVar6 = PTR_DAT_4a03649c;
  if ((**(uint **)PTR_DAT_4a03649c & 0x1000000) != 0) {
    FUN_4a03f5e4(0);
    FUN_4a037ce4();
  }
  (**(code **)(PTR_DAT_4a0364a0 + 0x2c))();
  iVar11 = *(int *)puVar6;
  uVar19 = *(int *)(iVar11 + 0x578) + 1;
  *(uint *)(iVar11 + 0x578) = uVar19;
  if (uVar19 + (uint)((ulonglong)uVar19 * (ulonglong)DAT_4a0364a4 >> 0x23) * -10 == 0) {
    uVar24 = host_s3eTimerGetMs_arm();
    iVar11 = *(int *)puVar6;
    uVar19 = (uint)uVar24 - *(uint *)(iVar11 + 0x580);
    uVar12 = FUN_4a0008f8(uVar19 * 0x1000,
                          ((int)((ulonglong)uVar24 >> 0x20) -
                          (*(int *)(iVar11 + 0x584) +
                          (uint)((uint)uVar24 < *(uint *)(iVar11 + 0x580)))) * 0x1000 |
                          uVar19 >> 0x14,10,0);
    *(undefined8 *)(iVar11 + 0x580) = uVar24;
    *(undefined4 *)(iVar11 + 0x588) = uVar12;
    return;
  }
  return;
}



// Address: 4a101e10

undefined4 *
FUN_4a101e10(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 *puVar6;
  
  *param_1 = PTR_PTR_4a101ff4;
  thunk_FUN_4a161570(0xc4);
  uVar4 = thunk_FUN_4a0633c4();
  param_1[1] = uVar4;
  host_s3eDebugOutputString_arm(param_2);
  FUN_4a0612e0(param_1[1],param_2);
  (**(code **)(*(int *)param_1[1] + 0x3c))();
  thunk_FUN_4a161570(0x58);
  iVar5 = thunk_FUN_4a069e28();
  param_1[2] = iVar5;
  *(undefined4 *)(iVar5 + 0x2c) = param_1[1];
  *(uint *)(param_1[2] + 0x10) = *(uint *)(param_1[2] + 0x10) & 0xfffffffc | 6;
  *(uint *)(param_1[2] + 0x10) = *(uint *)(param_1[2] + 0x10) & 0xfff8ffff | 0x40000;
  *(uint *)(param_1[2] + 0x10) = *(uint *)(param_1[2] + 0x10) & 0xffc7ffff;
  puVar6 = (undefined2 *)thunk_FUN_4a161570(0x10);
  param_1[3] = puVar6;
  FUN_4a17295c(param_3,0xc);
  uVar1 = FUN_4a171e1c();
  FUN_4a17295c(param_4,0xc);
  uVar2 = FUN_4a171e1c();
  *puVar6 = uVar1;
  puVar6[1] = uVar2;
  iVar5 = param_1[3];
  FUN_4a17295c(param_6,0xc);
  uVar3 = FUN_4a171e1c();
  *(undefined2 *)(iVar5 + 4) = uVar1;
  *(undefined2 *)(iVar5 + 6) = uVar3;
  iVar5 = param_1[3];
  FUN_4a17295c(param_5,0xc);
  uVar1 = FUN_4a171e1c();
  *(undefined2 *)(iVar5 + 8) = uVar1;
  *(undefined2 *)(iVar5 + 10) = uVar3;
  iVar5 = param_1[3];
  *(undefined2 *)(iVar5 + 0xc) = uVar1;
  *(undefined2 *)(iVar5 + 0xe) = uVar2;
  puVar6 = (undefined2 *)thunk_FUN_4a161570(0x10);
  param_1[4] = puVar6;
  *puVar6 = 0;
  *(undefined2 *)(param_1[4] + 2) = 0;
  *(undefined2 *)(param_1[4] + 4) = 0;
  *(undefined2 *)(param_1[4] + 6) = 1;
  *(undefined2 *)(param_1[4] + 8) = 1;
  *(undefined2 *)(param_1[4] + 10) = 1;
  *(undefined2 *)(param_1[4] + 0xc) = 1;
  *(undefined2 *)(param_1[4] + 0xe) = 0;
  return param_1;
}



// Address: 4a102060

undefined4 * FUN_4a102060(undefined4 *param_1)

{
  *param_1 = PTR_PTR_4a1020bc;
  thunk_FUN_4a161530(param_1[4]);
  thunk_FUN_4a161530(param_1[3]);
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  return param_1;
}



// Address: 4a1020c0

void FUN_4a1020c0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  if ((piVar1 != (int *)0x0) && (iVar3 = piVar1[1], piVar1[1] = iVar3 + -1, iVar3 + -1 == 0)) {
    (**(code **)(*piVar1 + 4))();
  }
  puVar2 = (undefined4 *)thunk_FUN_4a161570(0xc);
  *puVar2 = PTR_PTR_4a102118;
  puVar2[1] = 1;
  puVar2[2] = param_2;
  *param_1 = (int)puVar2;
  return;
}



// Address: 4a102120

void FUN_4a102120(int param_1)

{
  if (param_1 != 0) {
    FUN_4a0d383c();
  }
  return;
}



// Address: 4a102134

void FUN_4a102134(void)

{
  int *piVar1;
  int iVar2;
  
  if (((*(undefined4 **)PTR_DAT_4a102160)[0x12] == 0) ||
     (piVar1 = (int *)**(undefined4 **)PTR_DAT_4a102160,
     iVar2 = FUN_4a1652ca(piVar1,0,0x28,*(undefined4 *)(*piVar1 + 0xc)), iVar2 == 0)) {
    thunk_FUN_4a15e080(0x28);
  }
  return;
}



// Address: 4a102164

void FUN_4a102164(int param_1)

{
  FUN_4a039b90(param_1,1,8,1);
  FUN_4a039b90(param_1 + 1,1,8,1);
  FUN_4a039b90(param_1 + 2,1,8,1);
  FUN_4a039b90(param_1 + 3,1,8,1);
  return;
}



// Address: 4a10219c

undefined4 FUN_4a10219c(byte *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (int)(param_2 * (uint)*param_1) >> 0xc;
  if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  iVar3 = (int)(param_2 * (uint)param_1[1]) >> 0xc;
  if (0xff < iVar3) {
    iVar3 = 0xff;
  }
  iVar4 = (int)(param_2 * (uint)param_1[2]) >> 0xc;
  if (0xff < iVar4) {
    iVar4 = 0xff;
  }
  iVar1 = (int)((uint)param_1[3] * param_2) >> 0xc;
  if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  return CONCAT13((char)iVar1,CONCAT12((char)iVar4,CONCAT11((char)iVar3,(char)iVar2)));
}



// Address: 4a1021e4

undefined4 FUN_4a1021e4(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar2 = 0xff;
  bVar1 = 0xff;
  if ((uint)*param_1 + (uint)*param_2 < 0x100) {
    bVar1 = (byte)((uint)*param_1 + (uint)*param_2);
  }
  *param_1 = bVar1;
  bVar1 = 0xff;
  if ((uint)param_1[1] + (uint)param_2[1] < 0x100) {
    bVar1 = (byte)((uint)param_1[1] + (uint)param_2[1]);
  }
  param_1[1] = bVar1;
  bVar1 = 0xff;
  if ((uint)param_1[2] + (uint)param_2[2] < 0x100) {
    bVar1 = (byte)((uint)param_1[2] + (uint)param_2[2]);
  }
  param_1[2] = bVar1;
  if ((uint)param_1[3] + (uint)param_2[3] < 0x100) {
    bVar2 = (byte)((uint)param_1[3] + (uint)param_2[3]);
  }
  param_1[3] = bVar2;
  return *(undefined4 *)param_1;
}



// Address: 4a10222c

uint FUN_4a10222c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 local_18;
  int local_14;
  
  local_18 = param_3;
  local_14 = param_4;
  uVar1 = FUN_4a0483d0();
  FUN_4a1652cc(&local_18,uVar1,*(undefined4 *)(param_1 + 0x3c),param_2);
  uVar3 = DAT_4a102294;
  if (local_14 != 0) {
    FUN_4a16e2f2((int *)(param_1 + 0x44),*(int *)(param_1 + 0x48) + 1);
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x48) * 8);
    *puVar2 = local_18;
    puVar2[1] = local_14;
    uVar3 = *(uint *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = uVar3 + 1;
    uVar3 = uVar3 & 0xffff;
  }
  FUN_4a1652ca(*(int **)(param_1 + 0x40),param_2,uVar3,
               *(undefined4 *)(**(int **)(param_1 + 0x40) + 8));
  FUN_4a09208c(&local_18);
  return uVar3;
}



// Address: 4a102298

void FUN_4a102298(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  iVar1 = FUN_4a13578c(*(undefined4 *)PTR_DAT_4a102394,*(undefined4 *)(param_1 + 0x70),
                       s_CIwGxFont_4a102398,0,param_2,param_3,param_4);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(iVar1 + 0x12);
  FUN_4a16f576(param_1 + 0x20,*(undefined4 *)(iVar1 + 0x24));
  iVar2 = param_1 + 0x74;
  for (uVar7 = 0; uVar7 < *(uint *)(param_1 + 0x24); uVar7 = uVar7 + 1) {
    iVar5 = uVar7 * 0xc;
    uVar4 = FUN_4a045784(*(undefined4 *)(*(int *)(iVar1 + 0x20) + iVar5),iVar2);
    *(undefined4 *)(*(int *)(param_1 + 0x20) + iVar5) = uVar4;
    thunk_FUN_4a161570(0x58);
    iVar3 = FUN_4a069e28();
    *(int *)(*(int *)(param_1 + 0x20) + iVar5 + 4) = iVar3;
    FUN_4a0699a6(iVar3,*(undefined4 *)(*(int *)(iVar1 + 0x20) + iVar5 + 4));
    *(undefined4 *)(iVar3 + 0x2c) = *(undefined4 *)(*(int *)(param_1 + 0x20) + iVar5);
    *(undefined2 *)(*(int *)(param_1 + 0x20) + iVar5 + 10) =
         *(undefined2 *)(*(int *)(iVar1 + 0x20) + iVar5 + 10);
    *(undefined2 *)(*(int *)(param_1 + 0x20) + iVar5 + 8) =
         *(undefined2 *)(*(int *)(iVar1 + 0x20) + iVar5 + 8);
  }
  puVar6 = (undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar1 + 0x40);
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    FUN_4a16e30e(puVar6,0);
    FUN_4a16e284(puVar6,0);
  }
  *puVar6 = *(undefined4 *)(iVar1 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar1 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar1 + 0x4c);
  *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 1;
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(iVar1 + 0x14);
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(iVar1 + 0x1c);
  *(undefined2 *)(param_1 + 0x1e) = *(undefined2 *)(iVar1 + 0x1e);
  if (*(int *)(iVar1 + 0x54) != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(iVar1 + 0x54);
    uVar4 = FUN_4a045784(*(undefined4 *)(iVar1 + 0x58),iVar2);
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    thunk_FUN_4a161570(0x58);
    uVar4 = FUN_4a069e28();
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    FUN_4a0699a6(uVar4,*(undefined4 *)(iVar1 + 0x5c));
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x2c) = *(undefined4 *)(param_1 + 0x58);
  }
  return;
}



// Address: 4a1023a6

void FUN_4a1023a6(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// Address: 4a1023ae

void FUN_4a1023ae(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x30) + 0x10);
  if (iVar3 == 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x30) + 0x14);
    if (iVar3 == 0) goto LAB_4a1023e8;
    uVar2 = FUN_4a0483d0();
    uVar2 = FUN_4a1652d0(uVar2,iVar3,*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x18),
                         *(undefined4 *)(param_1 + 0x34));
  }
  else {
    piVar1 = (int *)FUN_4a0483d0();
    uVar2 = FUN_4a1652ca(piVar1,iVar3,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(*piVar1 + 8));
  }
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
LAB_4a1023e8:
  FUN_4a10241e(param_1);
  return;
}



// Address: 4a1023f4

void FUN_4a1023f4(int param_1)

{
  *(undefined2 *)(param_1 + 0x12) = 1;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0xffff;
  *(undefined2 *)(param_1 + 0x1e) = 0xffff;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  return;
}



// Address: 4a10241e

void FUN_4a10241e(int param_1)

{
  undefined2 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 local_10;
  undefined2 uStack_e;
  
  piVar2 = (int *)FUN_4a0483d0();
  thunk_FUN_4a161570(0x24);
  uVar3 = FUN_4a0a38c4();
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  uVar3 = FUN_4a1652c8(piVar2,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(*piVar2 + 0x14));
  iVar4 = FUN_4a1652c8(piVar2,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(*piVar2 + 0x18));
  uStack_e = (short)((uint)uVar3 >> 0x10);
  *(short *)(param_1 + 0x12) = uStack_e;
  *(undefined1 *)(param_1 + 0x14) = 4;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (iVar4 - uStack_e);
  uVar1 = FUN_4a10222c(param_1,0x20);
  *(undefined2 *)(param_1 + 0x1c) = uVar1;
  *(undefined2 *)(param_1 + 0x1e) = uVar1;
  FUN_4a10222c(param_1,10);
  uVar5 = thunk_FUN_4a161570(0x34);
  uVar5 = FUN_4a0a48f8(uVar5,param_1);
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  local_10 = (short)uVar3;
  FUN_4a0a474c(uVar5,(int)local_10,*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x28);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x2c);
  FUN_4a16f6c0(param_1 + 0x60,0x400);
  return;
}



// Address: 4a1024b0

void FUN_4a1024b0(int param_1)

{
  FUN_4a0605f4();
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_4a046740(param_1 + 0x30,s_CIwGxFontTTFont_4a1024d8,0);
    FUN_4a1023ae(param_1);
  }
  return;
}



// Address: 4a1024e8

void FUN_4a1024e8(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  short *psVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  undefined1 auStack_34 [4];
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  FUN_4a06067c();
  puVar1 = PTR_DAT_4a1028dc;
  local_18 = param_1 + 0x10;
  local_1c = param_1 + 0x11;
  local_20 = param_1 + 0x18;
  local_24 = param_1 + 0x60;
  if (DAT_4a1028e0 <= *(uint *)PTR_DAT_4a1028dc) {
    local_30 = (uint)(*(int *)(param_1 + 0x30) != 0);
    FUN_4a0365d4(&local_30,1,1,1);
    if ((char)local_30 != '\0') {
      FUN_4a048664(param_1 + 0x30);
      FUN_4a039aec(param_1 + 0x34,1,0x1f,4);
      FUN_4a039aec(param_1 + 0x38,1,0x1f,4);
      FUN_4a03669c(local_18,1,7,1);
      FUN_4a03669c(local_1c,1,7,1);
      FUN_4a039aec(local_20,1,0x1f,4);
      FUN_4a16f634(local_24);
      for (uVar8 = 0; uVar8 < *(uint *)(param_1 + 100); uVar8 = uVar8 + 1) {
        iVar9 = uVar8 * 6;
        FUN_4a03c0b8(*(int *)(param_1 + 0x60) + iVar9,1,0x10,2);
        FUN_4a03c0b8(*(int *)(param_1 + 0x60) + iVar9 + 2,1,0x10,2);
        FUN_4a039a4c(*(int *)(param_1 + 0x60) + iVar9 + 4,1,0xf,2);
      }
      return;
    }
  }
  if (DAT_4a1028e4 <= *(uint *)puVar1) {
    FUN_4a03c12c(param_1 + 0x70,1,0x20,4);
    FUN_4a039b90(param_1 + 0x74,1,8,1);
    FUN_4a039b90(param_1 + 0x75,1,8,1);
    FUN_4a039b90(param_1 + 0x76,1,8,1);
    FUN_4a039b90(param_1 + 0x77,1,8,1);
  }
  if (*(int *)(param_1 + 0x70) == 0) {
    local_28 = param_1 + 0x14;
    if (DAT_4a1028e4 + 0xfe <= *(uint *)puVar1) {
      FUN_4a039b90(local_28,1,8,1);
    }
    iVar9 = param_1 + 0x20;
    if (*(uint *)puVar1 < DAT_4a1028e8) {
      FUN_4a16f576(iVar9,1);
    }
    else if (PTR_DAT_4a1028dc[-0xc0] == '\0') {
      local_30 = *(uint *)(param_1 + 0x24);
      FUN_4a03c12c(&local_30,1,0x20,4);
    }
    else {
      FUN_4a03c12c(&local_30,1,0x20,4);
      uVar8 = local_30;
      if (*(uint *)(param_1 + 0x24) < local_30) {
        FUN_4a16f548(iVar9,local_30);
      }
      FUN_4a16f576(iVar9,uVar8);
      FUN_4a16f548(iVar9,*(undefined4 *)(param_1 + 0x24));
    }
    puVar2 = PTR_DAT_4a1028f4;
    if (*(uint *)puVar1 < DAT_4a1028e4) {
      *(int *)(PTR_DAT_4a1028ec + 4) = param_1;
      *(undefined **)puVar2 = PTR_FUN_4a054848_1_4a1028f0;
    }
    if (PTR_DAT_4a1028dc[-0xc0] == '\0') {
      for (uVar8 = 0; uVar8 < *(uint *)(param_1 + 0x24); uVar8 = uVar8 + 1) {
        piVar10 = *(int **)(*(int *)(param_1 + 0x20) + uVar8 * 0xc);
        FUN_4a1652c6(piVar10,*(undefined4 *)(*piVar10 + 0x14));
      }
    }
    else {
      for (uVar8 = 0; uVar8 < *(uint *)(param_1 + 0x24); uVar8 = uVar8 + 1) {
        thunk_FUN_4a161570(0xc4);
        piVar10 = (int *)FUN_4a0633c4();
        local_2c = uVar8 * 0xc;
        *(int **)(*(int *)(param_1 + 0x20) + local_2c) = piVar10;
        FUN_4a1652c6(piVar10,*(undefined4 *)(*piVar10 + 0x14));
        thunk_FUN_4a161570(0x58);
        local_30 = FUN_4a069e28();
        uVar7 = (*(byte *)(param_1 + 0x14) & 0xf) >> 3;
        if (*(uint *)puVar1 < DAT_4a1028e4 + 0xfe) {
          if (piVar10[6] == 0x16) {
            uVar7 = 1;
          }
          else {
            uVar7 = 0;
          }
        }
        if (*(uint *)puVar1 < DAT_4a1028e4) {
          if ((uVar7 == 0) && (piVar10[6] != 0x12)) {
            uVar7 = 0;
          }
          else {
            uVar7 = 1;
          }
        }
        FUN_4a04d50c(local_30,piVar10,uVar7 ^ 1);
        *(uint *)(*(int *)(param_1 + 0x20) + local_2c + 4) = local_30;
      }
    }
    uVar8 = DAT_4a1028e4;
    if (*(uint *)puVar1 < DAT_4a1028e4) {
      *(undefined4 *)PTR_DAT_4a1028f4 = 0;
    }
    FUN_4a03c0b8(param_1 + 0x12,1,0x10,2);
    if (*(uint *)puVar1 < uVar8) {
      FUN_4a03c0b8(&local_30,1,0x10,2);
    }
    for (uVar8 = 0; uVar8 < *(uint *)(param_1 + 0x24); uVar8 = uVar8 + 1) {
      FUN_4a03c0b8(*(int *)(param_1 + 0x20) + uVar8 * 0xc + 10,1,0x10,2);
      if ((DAT_4a1028e8 <= *(uint *)puVar1) || (DAT_4a1028e8 + 3 <= *(uint *)puVar1)) {
        FUN_4a03c0b8(*(int *)(param_1 + 0x20) + uVar8 * 0xc + 8,1,0x10,2);
      }
    }
    if (*(uint *)puVar1 < DAT_4a1028e4 + 0xfe) {
      FUN_4a039b90(local_28,1,8,1);
    }
  }
  FUN_4a03669c(local_18,1,7,1);
  if (DAT_4a1028f8 <= *(uint *)puVar1) {
    FUN_4a03669c(local_1c,1,7,1);
  }
  if (DAT_4a1028e4 <= *(uint *)puVar1) {
    FUN_4a039aec(local_20,1,0x1f,4);
  }
  piVar10 = (int *)(param_1 + 0x44);
  if (*(int *)(param_1 + 0x70) == 0) {
    if (*(uint *)puVar1 < DAT_4a1028e4) {
      FUN_4a03c0b8(param_1 + 0x1c,1,0x10,2);
      if (PTR_DAT_4a1028dc[-0xc0] == '\0') {
        piVar3 = *(int **)(param_1 + 0x40);
      }
      else {
        thunk_FUN_4a161570(0x14);
        piVar3 = (int *)FUN_4a09c1bc();
        *(int **)(param_1 + 0x40) = piVar3;
      }
      FUN_4a1652c6(piVar3,*(undefined4 *)(*piVar3 + 0x14));
    }
    else {
      FUN_4a03c0b8(param_1 + 0x1c,1,0x10,2);
      FUN_4a0a5710(param_1 + 0x40);
    }
    if (PTR_DAT_4a1028dc[-0xc0] == '\0') {
      local_30 = *(uint *)(param_1 + 0x48);
      FUN_4a03c12c(&local_30,1,0x20,4);
    }
    else {
      FUN_4a03c12c(&local_30,1,0x20,4);
      uVar8 = local_30;
      if (*(uint *)(param_1 + 0x48) < local_30) {
        FUN_4a16e284(piVar10,local_30);
      }
      FUN_4a16e2b0(piVar10,uVar8);
      FUN_4a16e284(piVar10,*(undefined4 *)(param_1 + 0x48));
    }
    for (uVar8 = 0; uVar8 < *(uint *)(param_1 + 0x48); uVar8 = uVar8 + 1) {
      FUN_4a092028(*(int *)(param_1 + 0x44) + uVar8 * 8);
    }
    if (*(uint *)puVar1 < DAT_4a1028e8) {
      *(short *)(*(int *)(param_1 + 0x20) + 8) = (short)*(undefined4 *)(param_1 + 0x48);
    }
    if (*(uint *)puVar1 < DAT_4a1028e4) {
      local_30 = 0;
      FUN_4a03c12c(&local_30,1,0x20,4);
      for (uVar8 = 0; uVar8 < local_30; uVar8 = uVar8 + 1) {
        FUN_4a03c0b8(auStack_34,1,0x10,2);
      }
    }
    if (DAT_4a102a14 <= *(uint *)puVar1) {
      local_30 = (uint)(*(int *)(param_1 + 0x54) != 0);
      FUN_4a0365d4(&local_30,1,1,1);
      if ((char)local_30 != '\0') {
        if (*PTR_DAT_4a102a18 == '\0') {
          uVar4 = *(undefined4 *)(param_1 + 0x54);
        }
        else {
          uVar4 = thunk_FUN_4a161570(0x34);
          uVar4 = FUN_4a0a48f8(uVar4,param_1);
          *(undefined4 *)(param_1 + 0x54) = uVar4;
        }
        FUN_4a0a4864(uVar4);
        *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x28);
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x2c);
      }
    }
    if (DAT_4a102a1c <= *(uint *)puVar1) {
      FUN_4a16f634(local_24);
      for (uVar8 = 0; uVar8 < *(uint *)(param_1 + 100); uVar8 = uVar8 + 1) {
        iVar9 = uVar8 * 6;
        FUN_4a03c0b8(*(int *)(param_1 + 0x60) + iVar9,1,0x10,2);
        FUN_4a03c0b8(*(int *)(param_1 + 0x60) + iVar9 + 2,1,0x10,2);
        FUN_4a039a4c(*(int *)(param_1 + 0x60) + iVar9 + 4,1,0xf,2);
      }
    }
  }
  if (*PTR_DAT_4a102a18 != '\0') {
    if (*(int *)(param_1 + 0x70) == 0) {
      FUN_4a16e2f2(piVar10,*(int *)(param_1 + 0x48) + 1);
      FUN_4a092080(*piVar10 + *(int *)(param_1 + 0x48) * 8);
      iVar9 = *(int *)(param_1 + 0x48) + 1;
      *(int *)(param_1 + 0x48) = iVar9;
      puVar5 = (undefined1 *)(*(int *)(param_1 + 0x44) + iVar9 * 8 + -8);
      *puVar5 = 0;
      *(undefined2 *)(puVar5 + 2) = 0;
      *(undefined2 *)(puVar5 + 6) = 0;
      *(undefined2 *)(puVar5 + 4) = 0;
      *(short *)(param_1 + 0x1e) = (short)*(undefined4 *)(param_1 + 0x48) + -1;
      if (*(int *)(param_1 + 0x24) != 0) {
        psVar6 = (short *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x24) * 0xc + -4);
        *psVar6 = *psVar6 + 1;
      }
    }
    else {
      FUN_4a102298(param_1);
    }
  }
  return;
}



// Address: 4a102a20

int FUN_4a102a20(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_4a06a6b8();
  *puVar1 = PTR_PTR_4a102a54;
  iVar2 = FUN_4a16f5d2(puVar1 + 8,0);
  iVar2 = FUN_4a16e332(iVar2 + 0x24,0);
  iVar2 = FUN_4a16f6dc(iVar2 + 0x1c,0);
  iVar2 = iVar2 + -0x60;
  FUN_4a1023f4(iVar2);
  return iVar2;
}



// Address: 4a102a58

void FUN_4a102a58(int param_1)

{
  if (param_1 != 0) {
    FUN_4a102a6c();
    thunk_FUN_4a161530();
  }
  return;
}



// Address: 4a102a6c

void FUN_4a102a6c(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  *param_1 = PTR_PTR_4a102b88;
  for (uVar3 = 0; uVar3 < (uint)param_1[9]; uVar3 = uVar3 + 1) {
    piVar1 = *(int **)(param_1[8] + uVar3 * 0xc + 4);
    if (piVar1 != (int *)0x0) {
      FUN_4a1652c6(piVar1,*(undefined4 *)(*piVar1 + 4));
    }
    piVar1 = *(int **)(param_1[8] + uVar3 * 0xc);
    if (piVar1 != (int *)0x0) {
      if ((short)piVar1[3] == 0) {
        FUN_4a1652c6(piVar1,*(undefined4 *)(*piVar1 + 4));
      }
      else {
        *(short *)(piVar1 + 3) = (short)piVar1[3] + -1;
      }
    }
  }
  if (param_1[0x1c] == 0) {
    if (param_1[0x15] != 0) {
      FUN_4a0a494c();
      thunk_FUN_4a161530();
    }
    piVar1 = (int *)param_1[0x10];
  }
  else {
    piVar1 = (int *)param_1[0x17];
    if (piVar1 != (int *)0x0) {
      FUN_4a1652c6(piVar1,*(undefined4 *)(*piVar1 + 4));
    }
    piVar1 = (int *)param_1[0x16];
  }
  if (piVar1 != (int *)0x0) {
    FUN_4a1652c6(piVar1,*(undefined4 *)(*piVar1 + 4));
  }
  iVar2 = *(int *)PTR_DAT_4a102b8c;
  if ((iVar2 != 0) && (*(undefined4 **)(iVar2 + 0x10) == param_1)) {
    *(undefined4 *)(iVar2 + 0x10) = 0;
  }
  if ((param_1[0xf] != 0) && (iVar2 = FUN_4a04d588(), iVar2 != 0)) {
    piVar1 = (int *)FUN_4a0483d0();
    FUN_4a1652c8(piVar1,param_1[0xf],*(undefined4 *)(*piVar1 + 0x10));
  }
  for (uVar3 = 0; uVar3 < (uint)param_1[0x19]; uVar3 = uVar3 + 1) {
  }
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    FUN_4a0a6f48(param_1[0x18],6);
    param_1[0x18] = 0;
  }
  piVar1 = param_1 + 0x11;
  for (uVar3 = 0; uVar3 < (uint)param_1[0x12]; uVar3 = uVar3 + 1) {
    FUN_4a09208c(*piVar1 + uVar3 * 8);
  }
  if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
    FUN_4a0a6f48(*piVar1,8);
    *piVar1 = 0;
  }
  for (uVar3 = 0; uVar3 < (uint)param_1[9]; uVar3 = uVar3 + 1) {
  }
  if ((*(byte *)(param_1 + 0xb) & 1) == 0) {
    FUN_4a0a6f48(param_1[8],0xc);
    param_1[8] = 0;
  }
  FUN_4a0606ec(param_1);
  return;
}



// Address: 4a102b94

undefined4 FUN_4a102b94(int param_1)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  
  thunk_FUN_4a007780(*(undefined4 *)(param_1 + 0x378));
  thunk_FUN_4a007174(auStack_38,*(undefined4 *)(param_1 + 0x378));
  return local_10;
}



// Address: 4a102bb6

void FUN_4a102bb6(undefined4 param_1,int param_2)

{
  thunk_FUN_4a007174(param_1,*(undefined4 *)(param_2 + 0x378));
  return;
}



// Address: 4a102bcc

void FUN_4a102bcc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_4a1043dc(param_1,0x60,0xc,param_2,param_3,param_4,param_5,0);
  return;
}



// Address: 4a102c10

void FUN_4a102c10(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 int param_6,int param_7,int param_8,int param_9)

{
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int iVar1;
  undefined4 uVar2;
  int in_lr;
  
  iVar1 = (param_5 - param_8) - param_9;
  if (param_6 == 0) {
    in_lr = param_3 + param_8;
    unaff_r4 = param_4 + -2;
    unaff_r5 = (param_5 + param_3) - param_9;
    unaff_r8 = 2;
    unaff_r6 = param_4;
    unaff_r7 = iVar1;
  }
  else if (param_6 == 2) {
    unaff_r4 = param_4 + param_8;
    unaff_r5 = param_3 + 2;
    unaff_r6 = (param_5 + param_4) - param_9;
    unaff_r7 = 2;
    unaff_r8 = iVar1;
    in_lr = param_3;
  }
  else if (param_6 == 3) {
    unaff_r5 = param_3 - param_8;
    unaff_r4 = param_4;
    unaff_r6 = param_4 + 2;
    unaff_r7 = iVar1;
    unaff_r8 = 2;
    in_lr = (param_3 - param_5) + param_9;
  }
  else if (param_6 == 5) {
    unaff_r4 = (param_4 - param_5) + param_9;
    unaff_r5 = param_3;
    unaff_r6 = param_4 - param_8;
    unaff_r7 = 2;
    unaff_r8 = iVar1;
    in_lr = param_3 + -2;
  }
  uVar2 = 0;
  if (*(int *)(param_7 + 0xc) != 0) {
    uVar2 = *(undefined4 *)(*(int *)(param_7 + 0xc) + 8);
  }
  FUN_4a103dd0(param_1,in_lr,unaff_r4,unaff_r5,unaff_r6,param_2,0,2,unaff_r7,unaff_r8,uVar2,0,0,0,0,
               0);
  return;
}



// Address: 4a102d34

undefined4 FUN_4a102d34(int param_1)

{
  longlong lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined **ppuVar17;
  undefined *local_cc [2];
  int local_c4;
  int local_c0;
  int local_b8;
  undefined *local_b4 [2];
  int local_ac;
  undefined *local_a0 [2];
  int local_98;
  undefined4 local_90;
  undefined *local_8c [2];
  int local_84;
  undefined1 auStack_78 [8];
  undefined4 local_70;
  int *local_6c;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined *local_58 [2];
  int local_50;
  int local_4c;
  undefined1 auStack_44 [20];
  undefined *local_30;
  undefined *local_2c;
  int local_28;
  
  iVar16 = *(int *)(param_1 + 8);
  local_28 = param_1;
  piVar5 = (int *)FUN_4a0c6bc0(local_58);
  local_2c = PTR_PTR_4a103328;
  piVar5[2] = 0;
  piVar5[3] = 0;
  puVar2 = PTR_PTR_4a103324;
  *piVar5 = (int)local_2c;
  if (0 < iVar16) {
    iVar6 = FUN_4a15e080(iVar16 << 2);
    if (iVar6 == 0) {
      iVar6 = FUN_4a1669a8();
    }
    iVar12 = 0;
    do {
      local_90 = 0;
      *(undefined4 *)(iVar6 + iVar12 * 4) = 0;
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar16);
    thunk_FUN_4a161570(0x18);
    puVar7 = (undefined4 *)FUN_4a0c0628();
    puVar7[3] = 4;
    puVar7[4] = iVar16;
    puVar3 = PTR_PTR_4a10332c;
    *puVar7 = PTR_PTR_4a10332c;
    puVar7[2] = iVar6;
    *(undefined1 *)(puVar7 + 5) = 1;
    if (puVar7 != (undefined4 *)0x0) {
      (**(code **)(puVar3 + 0xc))(puVar7);
    }
    (**(code **)(*piVar5 + 0x1c))(piVar5);
    piVar5[2] = iVar16;
    piVar5[3] = (int)puVar7;
  }
  iVar12 = 0;
  iVar6 = 0;
  if (0 < iVar16) {
    do {
      if (*(int *)(local_28 + 0xc) == 0) {
        iVar15 = 0;
      }
      else {
        iVar15 = *(int *)(*(int *)(local_28 + 0xc) + 8);
      }
      iVar15 = *(int *)(iVar15 + iVar6 * 4);
      if (iVar15 != 0) {
        iVar15 = (int)((ulonglong)((longlong)DAT_4a103330 * (longlong)*(int *)(iVar15 + 0x20)) >>
                      0x20);
        iVar12 = iVar12 + (iVar15 - (iVar15 >> 0x1f));
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar16);
  }
  uVar8 = thunk_FUN_4a161570(0x48);
  local_5c = FUN_4a0ad610(uVar8,iVar12,3,2);
  uVar8 = thunk_FUN_4a161570(0x48);
  local_60 = FUN_4a0ad610(uVar8,iVar12,2);
  uVar8 = thunk_FUN_4a161570(0x48);
  local_64 = FUN_4a0ad610(uVar8,iVar12,4,1);
  puVar4 = PTR_PTR_4a10333c;
  puVar3 = PTR_PTR_4a103338;
  iVar6 = 0;
  iVar12 = 0;
  if (0 < iVar16) {
    local_30 = PTR_PTR_4a103334;
    do {
      iVar15 = 0;
      if (*(int *)(local_28 + 0xc) != 0) {
        iVar15 = *(int *)(*(int *)(local_28 + 0xc) + 8);
      }
      iVar15 = *(int *)(iVar15 + iVar12 * 4);
      if (iVar15 != 0) {
        lVar1 = (longlong)DAT_4a103330 * (longlong)*(int *)(iVar15 + 0x20);
        local_b8 = (int)((ulonglong)lVar1 >> 0x20);
        local_b8 = local_b8 - (local_b8 >> 0x1f);
        puVar7 = (undefined4 *)FUN_4a0c6bc0(local_a0,DAT_4a103330,(int)lVar1);
        *puVar7 = puVar2;
        puVar7[2] = *(undefined4 *)(iVar15 + 0x20);
        piVar5 = *(int **)(iVar15 + 0x24);
        puVar7[3] = piVar5;
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 0xc))();
        }
        *puVar7 = puVar4;
        FUN_4a0ad258(local_5c,iVar6,local_b8,puVar7);
        iVar10 = local_98;
        ppuVar17 = local_a0;
        local_a0[0] = puVar4;
        iVar9 = FUN_4a0bcc84();
        if (iVar9 != 0) {
          iVar13 = 0;
          if (0 < iVar10) {
            do {
              iVar13 = iVar13 + 1;
            } while (iVar13 < iVar10);
            if (iVar9 == 0) goto LAB_4a102f88;
          }
          FUN_4a14f21c();
        }
LAB_4a102f88:
        FUN_4a0c6bf4(ppuVar17);
        puVar7 = (undefined4 *)FUN_4a0c6bc0(local_a0);
        *puVar7 = puVar2;
        puVar7[2] = *(undefined4 *)(iVar15 + 0x34);
        piVar5 = *(int **)(iVar15 + 0x38);
        puVar7[3] = piVar5;
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 0xc))();
        }
        *puVar7 = puVar4;
        FUN_4a0ad258(local_60,iVar6,local_b8,puVar7);
        iVar10 = local_98;
        ppuVar17 = local_a0;
        local_a0[0] = puVar4;
        iVar9 = FUN_4a0bcc84();
        if (iVar9 != 0) {
          iVar13 = 0;
          if (0 < iVar10) {
            do {
              iVar13 = iVar13 + 1;
            } while (iVar13 < iVar10);
            if (iVar9 == 0) goto LAB_4a10301c;
          }
          FUN_4a14f21c();
        }
LAB_4a10301c:
        FUN_4a0c6bf4(ppuVar17);
        puVar7 = (undefined4 *)FUN_4a0c6bc0(local_b4);
        *puVar7 = puVar2;
        puVar7[2] = *(undefined4 *)(iVar15 + 0x48);
        piVar5 = *(int **)(iVar15 + 0x4c);
        puVar7[3] = piVar5;
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 0xc))();
        }
        *puVar7 = puVar3;
        FUN_4a0ad06c(local_64,iVar6,local_b8,puVar7);
        iVar10 = local_ac;
        ppuVar17 = local_b4;
        local_b4[0] = puVar3;
        iVar9 = FUN_4a0bcc84();
        if (iVar9 != 0) {
          iVar13 = 0;
          if (0 < iVar10) {
            do {
              iVar13 = iVar13 + 1;
            } while (iVar13 < iVar10);
            if (iVar9 == 0) goto LAB_4a1030b0;
          }
          FUN_4a14f21c();
        }
LAB_4a1030b0:
        FUN_4a0c6bf4(ppuVar17);
        iVar9 = *(int *)(iVar15 + 0xc);
        FUN_4a16be24(local_cc,iVar9);
        iVar10 = 0;
        if (0 < iVar9) {
          do {
            if (*(int *)(iVar15 + 0x10) == 0) {
              iVar13 = 0;
            }
            else {
              iVar13 = *(int *)(*(int *)(iVar15 + 0x10) + 8);
            }
            if (local_c0 == 0) {
              iVar14 = 0;
            }
            else {
              iVar14 = *(int *)(local_c0 + 8);
            }
            *(int *)(iVar14 + iVar10 * 4) = *(int *)(iVar13 + iVar10 * 4) + iVar6;
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar9);
        }
        uVar8 = thunk_FUN_4a161570(0x60);
        iVar15 = (int)((ulonglong)((longlong)DAT_4a103330 * (longlong)iVar9) >> 0x20);
        uVar8 = FUN_4a0ab958(uVar8,8,iVar15 - (iVar15 >> 0x1f),local_cc);
        iVar10 = local_c4;
        iVar15 = 0;
        if (local_4c != 0) {
          iVar15 = *(int *)(local_4c + 8);
        }
        *(undefined4 *)(iVar15 + iVar12 * 4) = uVar8;
        iVar6 = iVar6 + local_b8;
        local_cc[0] = local_30;
        iVar15 = FUN_4a0bcc84(local_cc);
        if (iVar15 != 0) {
          iVar9 = 0;
          if (0 < iVar10) {
            do {
              iVar9 = iVar9 + 1;
            } while (iVar9 < iVar10);
            if (iVar15 == 0) goto LAB_4a103190;
          }
          FUN_4a14f21c(iVar15);
        }
LAB_4a103190:
        FUN_4a0c6bf4(local_cc);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar16);
  }
  thunk_FUN_4a161570(0x74);
  uVar8 = FUN_4a0ae56c();
  FUN_4a16b934(auStack_78,0);
  puVar7 = (undefined4 *)FUN_4a0c6bc0(auStack_44);
  *puVar7 = puVar2;
  puVar7[2] = local_70;
  puVar7[3] = local_6c;
  if (local_6c != (int *)0x0) {
    (**(code **)(*local_6c + 0xc))();
  }
  *puVar7 = PTR_PTR_4a103340;
  FUN_4a0adb1c(uVar8,local_5c,0x3f800000,puVar7);
  FUN_4a16ba04(auStack_44);
  FUN_4a0adcbc(uVar8,0,local_60,0x39000000,0);
  FUN_4a0ae4e8(uVar8,local_64);
  puVar7 = (undefined4 *)FUN_4a0c6bc0(local_8c);
  puVar2 = PTR_PTR_4a103344;
  puVar7[2] = 0;
  *puVar7 = puVar2;
  puVar7[3] = 0;
  uVar11 = thunk_FUN_4a161570(0x114);
  uVar8 = FUN_4a0b4124(uVar11,uVar8,local_58,local_8c);
  local_8c[0] = puVar2;
  iVar16 = FUN_4a0bcc84(local_8c);
  if (iVar16 != 0) {
    iVar6 = 0;
    if (0 < local_84) {
      do {
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_84);
      if (iVar16 == 0) goto LAB_4a1032b8;
    }
    FUN_4a14f21c();
  }
LAB_4a1032b8:
  FUN_4a0c6bf4(local_8c);
  FUN_4a16ba04(auStack_78);
  local_58[0] = local_2c;
  iVar16 = FUN_4a0bcc84(local_58);
  if (iVar16 != 0) {
    iVar6 = 0;
    if (0 < local_50) {
      do {
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_50);
      if (iVar16 == 0) goto LAB_4a10330c;
    }
    FUN_4a14f21c();
  }
LAB_4a10330c:
  FUN_4a0c6bf4(local_58);
  return uVar8;
}



// Address: 4a103348

undefined4 FUN_4a103348(int param_1)

{
  longlong lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined1 auStack_9c [20];
  undefined1 auStack_88 [8];
  undefined4 local_80;
  int *local_7c;
  undefined1 auStack_74 [20];
  undefined1 auStack_60 [20];
  undefined1 auStack_4c [20];
  undefined1 auStack_38 [20];
  
  iVar11 = DAT_4a103714;
  lVar1 = (longlong)DAT_4a103714 * (longlong)*(int *)(param_1 + 0x20);
  iVar4 = (int)((ulonglong)lVar1 >> 0x20);
  iVar4 = iVar4 - (iVar4 >> 0x1f);
  uVar5 = thunk_FUN_4a161570(0x48,(int)lVar1);
  uVar5 = FUN_4a0ad610(uVar5,iVar4,3,2);
  puVar6 = (undefined4 *)FUN_4a0c6bc0(auStack_9c);
  puVar2 = PTR_PTR_4a103718;
  *puVar6 = PTR_PTR_4a103718;
  puVar6[2] = *(undefined4 *)(param_1 + 0x20);
  piVar7 = *(int **)(param_1 + 0x24);
  puVar6[3] = piVar7;
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0xc))();
  }
  puVar3 = PTR_PTR_4a10371c;
  *puVar6 = PTR_PTR_4a10371c;
  FUN_4a0ad258(uVar5,0,iVar4,puVar6);
  FUN_4a16c1a0(auStack_9c);
  uVar8 = thunk_FUN_4a161570(0x48);
  uVar8 = FUN_4a0ad610(uVar8,iVar4,2);
  puVar6 = (undefined4 *)FUN_4a0c6bc0(auStack_38);
  *puVar6 = puVar2;
  puVar6[2] = *(undefined4 *)(param_1 + 0x34);
  piVar7 = *(int **)(param_1 + 0x38);
  puVar6[3] = piVar7;
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0xc))();
  }
  *puVar6 = puVar3;
  FUN_4a0ad258(uVar8,0,iVar4,puVar6);
  FUN_4a16c1a0(auStack_38);
  uVar9 = thunk_FUN_4a161570(0x48);
  uVar9 = FUN_4a0ad610(uVar9,iVar4,4,1);
  puVar6 = (undefined4 *)FUN_4a0c6bc0(auStack_4c);
  *puVar6 = puVar2;
  puVar6[2] = *(undefined4 *)(param_1 + 0x48);
  piVar7 = *(int **)(param_1 + 0x4c);
  puVar6[3] = piVar7;
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0xc))();
  }
  *puVar6 = PTR_PTR_4a103720;
  FUN_4a0ad06c(uVar9,0,iVar4,puVar6);
  FUN_4a16b6c0(auStack_4c);
  thunk_FUN_4a161570(0x74);
  uVar10 = FUN_4a0ae56c();
  FUN_4a16b934(auStack_88,0);
  puVar6 = (undefined4 *)FUN_4a0c6bc0(auStack_60);
  *puVar6 = puVar2;
  puVar6[2] = local_80;
  puVar6[3] = local_7c;
  if (local_7c != (int *)0x0) {
    (**(code **)(*local_7c + 0xc))();
  }
  *puVar6 = PTR_PTR_4a103724;
  FUN_4a0adb1c(uVar10,uVar5,0x3f800000,puVar6);
  FUN_4a16ba04(auStack_60);
  FUN_4a0adcbc(uVar10,0,uVar8,0x39000000,0);
  FUN_4a0ae4e8(uVar10,uVar9);
  uVar5 = thunk_FUN_4a161570(0x60);
  iVar11 = (int)((ulonglong)((longlong)iVar11 * (longlong)*(int *)(param_1 + 0xc)) >> 0x20);
  uVar5 = FUN_4a0ab958(uVar5,8,iVar11 - (iVar11 >> 0x1f),param_1 + 4);
  iVar11 = FUN_4a16be24(auStack_74,0);
  uVar8 = *(undefined4 *)(iVar11 + 8);
  piVar7 = *(int **)(iVar11 + 0xc);
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0xc))(piVar7);
  }
  (**(code **)(*(int *)(param_1 + 4) + 0x1c))((int *)(param_1 + 4));
  *(undefined4 *)(param_1 + 0xc) = uVar8;
  *(int **)(param_1 + 0x10) = piVar7;
  FUN_4a16bef4(auStack_74);
  iVar11 = FUN_4a16c0cc(auStack_38,0);
  uVar8 = *(undefined4 *)(iVar11 + 8);
  piVar7 = *(int **)(iVar11 + 0xc);
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0xc))(piVar7);
  }
  (**(code **)(*(int *)(param_1 + 0x18) + 0x1c))((int *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x20) = uVar8;
  *(int **)(param_1 + 0x24) = piVar7;
  FUN_4a16c1a0(auStack_38);
  iVar11 = FUN_4a16c0cc(auStack_38,0);
  uVar8 = *(undefined4 *)(iVar11 + 8);
  piVar7 = *(int **)(iVar11 + 0xc);
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0xc))(piVar7);
  }
  (**(code **)(*(int *)(param_1 + 0x2c) + 0x1c))((int *)(param_1 + 0x2c));
  *(undefined4 *)(param_1 + 0x34) = uVar8;
  *(int **)(param_1 + 0x38) = piVar7;
  FUN_4a16c1a0(auStack_38);
  iVar11 = FUN_4a16b5f8(auStack_4c,0);
  uVar8 = *(undefined4 *)(iVar11 + 8);
  piVar7 = *(int **)(iVar11 + 0xc);
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0xc))(piVar7);
  }
  (**(code **)(*(int *)(param_1 + 0x40) + 0x1c))((int *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x48) = uVar8;
  *(int **)(param_1 + 0x4c) = piVar7;
  FUN_4a16b6c0(auStack_4c);
  uVar8 = thunk_FUN_4a161570(0x114);
  uVar5 = FUN_4a0b3fec(uVar8,uVar10,uVar5,0);
  FUN_4a16ba04(auStack_88);
  return uVar5;
}



// Address: 4a103728

void FUN_4a103728(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int iStack_28;
  
  iVar2 = *(int *)(param_6 + 0xc);
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
  }
  else {
    iVar1 = 0;
  }
  if (iVar2 != 0) {
    puVar3 = *(undefined4 **)(iVar2 + 8);
  }
  else {
    puVar3 = (undefined4 *)0x0;
  }
  local_34 = *puVar3;
  if (*(int *)(param_6 + 0xc) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_6 + 0xc) + 8);
  }
  local_30 = *(undefined4 *)(iVar2 + 4);
  iVar2 = (int)((ulonglong)((longlong)DAT_4a1037ec * (longlong)(*(int *)(iVar1 + 0xc) << 4)) >> 0x20
               );
  if (*(int *)(param_6 + 0xc) != 0) {
    iVar4 = *(int *)(*(int *)(param_6 + 0xc) + 8);
  }
  iStack_28 = (iVar2 >> 4) - (iVar2 >> 0x1f);
  local_2c = *(undefined4 *)(iVar4 + 8);
  FUN_4a104a04(param_1,0x60,0x50,0x10,param_2,param_3,param_4,param_5,&local_34,param_7,param_8,
               param_9);
  return;
}



// Address: 4a1037f0

void FUN_4a1037f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_4a1043dc(param_1,0xc,0,param_2,param_3,param_4,param_5,8);
  return;
}



// Address: 4a103834

void FUN_4a103834(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int iStack_28;
  
  iVar2 = *(int *)(param_6 + 0xc);
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
  }
  else {
    iVar1 = 0;
  }
  if (iVar2 != 0) {
    puVar3 = *(undefined4 **)(iVar2 + 8);
  }
  else {
    puVar3 = (undefined4 *)0x0;
  }
  local_34 = *puVar3;
  if (*(int *)(param_6 + 0xc) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_6 + 0xc) + 8);
  }
  local_30 = *(undefined4 *)(iVar2 + 4);
  iVar2 = (int)((ulonglong)((longlong)DAT_4a103900 * (longlong)(*(int *)(iVar1 + 0xc) * 0x54)) >>
               0x20);
  if (*(int *)(param_6 + 0xc) != 0) {
    iVar4 = *(int *)(*(int *)(param_6 + 0xc) + 8);
  }
  iStack_28 = (iVar2 >> 4) - (iVar2 >> 0x1f);
  local_2c = *(undefined4 *)(iVar4 + 8);
  FUN_4a104a04(param_1,0x60,0xc,0x54,param_2,param_3,param_4,param_5,&local_34,param_7,param_8,
               param_9);
  return;
}



// Address: 4a103904

void FUN_4a103904(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8,uint param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  int iStack_28;
  
  iVar3 = *(int *)(param_6 + 0xc);
  iVar1 = 0;
  bVar5 = iVar3 != 0;
  if (bVar5) {
    iVar2 = *(int *)(iVar3 + 8);
  }
  else {
    iVar2 = 0;
  }
  puVar4 = (undefined4 *)0x0;
  if (bVar5) {
    puVar4 = *(undefined4 **)(iVar3 + 8);
  }
  iVar3 = (int)((ulonglong)((longlong)DAT_4a1039e4 * (longlong)(*(int *)(iVar2 + 0xc) * 0xc)) >>
               0x20);
  if (!bVar5) {
    puVar4 = (undefined4 *)0x0;
  }
  local_34 = *puVar4;
  iVar2 = *(int *)(param_6 + 0xc);
  iStack_28 = (iVar3 >> 4) - (iVar3 >> 0x1f);
  if (iVar2 == 0) {
    iVar3 = 0;
    iVar2 = 0;
  }
  else {
    iVar3 = *(int *)(iVar2 + 8);
    iVar2 = *(int *)(iVar2 + 8);
  }
  local_30 = (*(int *)(iVar2 + 0xc) + *(int *)(iVar3 + 4)) - iStack_28;
  if (*(int *)(param_6 + 0xc) != 0) {
    iVar1 = *(int *)(*(int *)(param_6 + 0xc) + 8);
  }
  local_2c = *(undefined4 *)(iVar1 + 8);
  FUN_4a104a04(param_1,0xc,0,0xc,param_2,param_3,param_4,param_5,&local_34,param_7,param_8,
               param_9 | 8);
  return;
}



// Address: 4a1039e8

int FUN_4a1039e8(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 8);
  }
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(param_1 + 0xc) >> 1) + 1;
  }
  return iVar1;
}



// Address: 4a103a14

void FUN_4a103a14(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar5 = DAT_4a103b8c;
  iVar1 = *(int *)(param_6 + 0xc);
  iVar6 = 0;
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 8);
  }
  else {
    iVar3 = 0;
  }
  if (iVar1 != 0) {
    puVar2 = *(undefined4 **)(iVar1 + 8);
  }
  else {
    puVar2 = (undefined4 *)0x0;
  }
  local_44 = *puVar2;
  if (*(int *)(param_6 + 0xc) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_6 + 0xc) + 8);
  }
  local_40 = *(undefined4 *)(iVar1 + 4);
  iVar1 = (int)((ulonglong)((longlong)DAT_4a103b8c * (longlong)(*(int *)(iVar3 + 0xc) << 4)) >> 0x20
               );
  if (*(int *)(param_6 + 0xc) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_6 + 0xc) + 8);
  }
  local_3c = *(undefined4 *)(iVar3 + 8);
  iStack_38 = (iVar1 >> 4) - (iVar1 >> 0x1f);
  uStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  FUN_4a104a04(param_1,0x60,0x50,0x10,param_2,param_3,param_4,param_5,&local_44,param_7,param_8,
               param_9);
  iVar1 = *(int *)(param_6 + 0xc);
  bVar7 = iVar1 != 0;
  if (bVar7) {
    iVar3 = *(int *)(iVar1 + 8);
  }
  else {
    iVar3 = 0;
  }
  if (bVar7) {
    iVar4 = *(int *)(iVar1 + 8);
  }
  else {
    iVar4 = 0;
  }
  iVar4 = (int)((ulonglong)((longlong)iVar5 * (longlong)(*(int *)(iVar4 + 0xc) * 0x3a)) >> 0x20);
  local_40 = *(int *)(iVar3 + 4) + ((iVar4 >> 4) - (iVar4 >> 0x1f));
  if (bVar7) {
    iVar3 = *(int *)(iVar1 + 8);
  }
  else {
    iVar3 = 0;
  }
  puVar2 = (undefined4 *)0x0;
  if (bVar7) {
    puVar2 = *(undefined4 **)(iVar1 + 8);
  }
  iVar5 = (int)((ulonglong)((longlong)iVar5 * (longlong)(*(int *)(iVar3 + 0xc) * 0x1a)) >> 0x20);
  if (!bVar7) {
    puVar2 = (undefined4 *)0x0;
  }
  local_44 = *puVar2;
  iStack_38 = (iVar5 >> 4) - (iVar5 >> 0x1f);
  if (*(int *)(param_6 + 0xc) != 0) {
    iVar6 = *(int *)(*(int *)(param_6 + 0xc) + 8);
  }
  local_3c = *(undefined4 *)(iVar6 + 8);
  FUN_4a104a04(param_1,0x26,0xc,0x1a,local_30,uStack_2c,uStack_28,param_5,&local_44,param_7,param_8,
               param_9);
  return;
}



// Address: 4a103b90

void FUN_4a103b90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  FUN_4a102c10(param_1,0x60,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



// Address: 4a103bd8

void FUN_4a103bd8(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  ushort local_68;
  ushort local_66;
  undefined4 local_64;
  undefined1 auStack_60 [12];
  int local_54;
  undefined4 local_4c;
  undefined1 auStack_48 [20];
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 local_28;
  
  iVar3 = *(int *)(param_2 + 0xc);
  bVar16 = iVar3 != 0;
  if (bVar16) {
    piVar9 = *(int **)(iVar3 + 8);
  }
  else {
    piVar9 = (int *)0x0;
  }
  iVar10 = *piVar9;
  if (bVar16) {
    iVar11 = *(int *)(iVar3 + 8);
  }
  else {
    iVar11 = 0;
  }
  iVar11 = 0x2000 - *(int *)(iVar11 + 4);
  uVar1 = iVar11 * 8;
  if (bVar16) {
    piVar9 = *(int **)(iVar3 + 8);
  }
  else {
    piVar9 = (int *)0x0;
  }
  if (bVar16) {
    iVar12 = *(int *)(iVar3 + 8);
  }
  else {
    iVar12 = 0;
  }
  iVar12 = *(int *)(iVar12 + 8) + *piVar9;
  uVar2 = iVar12 * 8;
  if (bVar16) {
    iVar13 = *(int *)(iVar3 + 8);
    iVar3 = *(int *)(iVar3 + 8);
  }
  else {
    iVar13 = 0;
    iVar3 = 0;
  }
  if (!bVar16) {
    iVar3 = 0;
  }
  piVar9 = (int *)(0x2000 - *(int *)(iVar13 + 4));
  iVar3 = (int)piVar9 - *(int *)(iVar3 + 0xc);
  iVar13 = *(int *)(param_3 + 0xc);
  if (iVar13 != 0) {
    piVar9 = *(int **)(iVar13 + 8);
    iVar4 = *(int *)(iVar13 + 8);
  }
  else {
    iVar4 = 0;
  }
  uVar5 = *(undefined4 *)(iVar4 + 4);
  if (iVar13 == 0) {
    piVar9 = (int *)0x0;
  }
  iVar4 = *piVar9;
  uStack_34 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  FUN_4a16b934(auStack_48,10);
  uVar6 = FUN_4a13b5e4(param_1);
  local_4c = FUN_4a1391d0(uVar6,0,auStack_48);
  iVar13 = FUN_4a13b5bc(param_1,local_28);
  iVar15 = *(int *)(iVar13 + 0x38);
  FUN_4a16be24(auStack_60,iVar15);
  FUN_4a1376d0(iVar13,auStack_60);
  iVar13 = 0;
  if (0 < iVar15) {
    do {
      iVar7 = 0;
      if (local_54 != 0) {
        iVar7 = *(int *)(local_54 + 8);
      }
      local_64 = *(undefined4 *)(iVar7 + iVar13 * 4);
      FUN_4a138c44(local_4c,local_64,1,&local_68);
      uVar8 = (uint)local_68;
      uVar14 = (uint)local_66;
      if (iVar10 * 8 <= (int)uVar8) {
        bVar17 = SBORROW4(uVar8,uVar2);
        iVar7 = uVar8 + iVar12 * -8;
        bVar16 = uVar8 == uVar2;
        if ((int)uVar8 <= (int)uVar2) {
          bVar17 = SBORROW4(uVar14,uVar1);
          iVar7 = uVar14 + iVar11 * -8;
          bVar16 = uVar14 == uVar1;
        }
        if ((bVar16 || iVar7 < 0 != bVar17) && (iVar3 * 8 <= (int)uVar14)) {
          local_68 = (local_68 - (short)(iVar10 * 8)) + (short)(iVar4 << 3);
          local_66 = (local_66 - (short)uVar1) + (short)uVar5 * -8;
          FUN_4a0ad424(local_4c,local_64,1,&local_68);
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar15);
  }
  FUN_4a16bef4(auStack_60);
  FUN_4a16ba04(auStack_48);
  return;
}



// Address: 4a103d88

void FUN_4a103d88(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  FUN_4a102c10(param_1,0xc,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



// Address: 4a103dd0

void FUN_4a103dd0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,short param_6,
                 int param_7,int param_8,undefined4 param_9,undefined4 param_10,int *param_11,
                 int param_12,int param_13,int param_14,int param_15,uint param_16)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined1 auStack_f0 [12];
  int local_e4;
  undefined1 auStack_dc [12];
  int local_d0;
  undefined1 auStack_c8 [12];
  int local_bc;
  undefined1 auStack_b4 [12];
  int local_a8;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  uint local_80;
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
  int local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int iStack_28;
  
  local_6c = (3 - param_7) - param_8;
  local_70 = *param_11 * 8 + 8;
  local_74 = (0x2000 - param_11[1]) * 8 + -8;
  local_78 = (*param_11 + param_11[2]) * 8 + -8;
  local_7c = ((0x2000 - param_11[1]) - param_11[3]) * 8 + 8;
  iVar7 = param_4 - param_2;
  param_5 = param_5 - param_3;
  local_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  iStack_28 = param_4;
  local_80 = FUN_4a0015f0(iVar7,param_9);
  if ((int)local_80 <= (int)-local_80) {
    local_80 = -local_80;
  }
  local_84 = FUN_4a0015f0(param_5,param_10);
  if (local_84 <= -local_84) {
    local_84 = -local_84;
  }
  local_88 = FUN_4a0015f0(iVar7,local_80);
  local_8c = FUN_4a0015f0(param_5,local_84);
  uVar6 = local_80;
  if (iVar7 < 1) {
    local_90 = -1;
  }
  else {
    local_90 = 1;
  }
  if (param_5 < 1) {
    local_94 = -1;
  }
  else {
    local_94 = 1;
  }
  iVar10 = local_80 + 1;
  local_98 = local_84 + 1;
  local_9c = iVar10 * local_98;
  local_a0 = local_80 * local_84 * 6;
  FUN_4a16be24(auStack_b4,local_a0);
  FUN_4a16c0cc(auStack_c8,local_9c * 3);
  local_38 = local_9c << 1;
  FUN_4a16c0cc(auStack_dc);
  local_3c = local_9c << 2;
  FUN_4a16b5f8(auStack_f0);
  iVar11 = 0;
  iVar12 = 0;
  iVar7 = 0;
  uVar13 = 0;
  if (0 < local_98) {
    local_40 = param_15 * local_94;
    local_44 = param_13 * local_90;
    local_48 = uVar6;
    local_4c = local_98 - 1;
    local_50 = (int)param_6;
    local_54 = (local_78 - local_70) * param_13;
    local_58 = param_12 * (local_78 - local_70);
    local_5c = (local_7c - local_74) * param_15;
    local_60 = param_14 * (local_7c - local_74);
    do {
      sVar8 = (short)uVar13 * (short)local_8c + (short)local_2c;
      if ((uVar13 & 1) == 0) {
        sVar9 = (short)local_74;
      }
      else {
        sVar9 = (short)local_7c;
      }
      if ((param_14 != 0) && (uVar13 == 0)) {
        sVar8 = (short)local_94 * (short)param_14 + sVar8;
        sVar1 = FUN_4a0015f0(local_60,param_10);
        sVar9 = sVar9 + sVar1;
      }
      if ((param_15 != 0) && (uVar13 == local_4c)) {
        sVar8 = sVar8 - (short)local_40;
        if ((uVar13 & 1) == 0) {
          sVar1 = 1;
        }
        else {
          sVar1 = -1;
        }
        sVar2 = FUN_4a0015f0(local_5c,param_10);
        sVar9 = sVar1 * sVar2 + sVar9;
      }
      uVar6 = 0;
      if (0 < iVar10) {
        local_64 = (int)sVar8;
        local_68 = (int)sVar9;
        do {
          sVar8 = (short)uVar6 * (short)local_88 + (short)local_30;
          if ((uVar6 & 1) == 0) {
            sVar9 = (short)local_70;
          }
          else {
            sVar9 = (short)local_78;
          }
          if ((param_12 != 0) && (uVar6 == 0)) {
            sVar8 = (short)local_90 * (short)param_12 + sVar8;
            sVar1 = FUN_4a0015f0(local_58,param_9);
            sVar9 = sVar9 + sVar1;
          }
          if ((param_13 != 0) && (uVar6 == local_48)) {
            sVar8 = sVar8 - (short)local_44;
            if ((uVar6 & 1) == 0) {
              sVar1 = 1;
            }
            else {
              sVar1 = -1;
            }
            sVar2 = FUN_4a0015f0(local_54,param_9);
            sVar9 = sVar1 * sVar2 + sVar9;
          }
          uVar5 = 0xff;
          iVar3 = 0;
          if (uVar6 != 0) {
            if (uVar6 == local_48) {
              iVar3 = 2;
            }
            else {
              iVar3 = 1;
            }
          }
          iVar4 = 0;
          if (uVar13 != 0) {
            if (uVar13 == local_4c) {
              iVar4 = 2;
            }
            else {
              iVar4 = 1;
            }
          }
          uVar6 = uVar6 + 1;
          if ((*(uint *)(PTR_DAT_4a1043d8 + (iVar3 + iVar4 * 3) * 4) & param_16) != 0) {
            uVar5 = 0xa0;
          }
          iVar3 = 0;
          if (local_bc != 0) {
            iVar3 = *(int *)(local_bc + 8);
          }
          *(short *)(iVar3 + (iVar11 + param_7) * 2) = sVar8;
          iVar3 = 0;
          if (local_bc != 0) {
            iVar3 = *(int *)(local_bc + 8);
          }
          *(short *)(iVar3 + (iVar11 + param_8) * 2) = (short)local_64;
          iVar4 = iVar11 + local_6c;
          iVar11 = iVar11 + 3;
          iVar3 = 0;
          if (local_bc != 0) {
            iVar3 = *(int *)(local_bc + 8);
          }
          *(short *)(iVar3 + iVar4 * 2) = (short)local_50;
          iVar4 = iVar12 + 1;
          iVar3 = 0;
          if (local_d0 != 0) {
            iVar3 = *(int *)(local_d0 + 8);
          }
          *(short *)(iVar3 + iVar12 * 2) = sVar9;
          iVar12 = iVar12 + 2;
          iVar3 = 0;
          if (local_d0 != 0) {
            iVar3 = *(int *)(local_d0 + 8);
          }
          *(short *)(iVar3 + iVar4 * 2) = (short)local_68;
          iVar3 = 0;
          if (local_e4 != 0) {
            iVar3 = *(int *)(local_e4 + 8);
          }
          *(undefined1 *)(iVar3 + iVar7) = uVar5;
          iVar3 = 0;
          if (local_e4 != 0) {
            iVar3 = *(int *)(local_e4 + 8);
          }
          *(undefined1 *)(iVar3 + iVar7 + 1) = uVar5;
          iVar3 = 0;
          if (local_e4 != 0) {
            iVar3 = *(int *)(local_e4 + 8);
          }
          *(undefined1 *)(iVar3 + iVar7 + 2) = uVar5;
          iVar4 = iVar7 + 3;
          iVar3 = 0;
          if (local_e4 != 0) {
            iVar3 = *(int *)(local_e4 + 8);
          }
          iVar7 = iVar7 + 4;
          *(undefined1 *)(iVar3 + iVar4) = 0xff;
        } while ((int)uVar6 < iVar10);
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < local_98);
  }
  iVar7 = 0;
  iVar11 = 0;
  if (0 < (int)local_80) {
    do {
      iVar12 = 0;
      if (0 < local_84) {
        do {
          iVar4 = (iVar12 + 1) * iVar10 + iVar11;
          iVar3 = iVar12 * iVar10 + iVar11 + 1;
          if (local_a8 == 0) {
            iVar14 = 0;
          }
          else {
            iVar14 = *(int *)(local_a8 + 8);
          }
          *(int *)(iVar14 + iVar7 * 4) = iVar12 * iVar10 + iVar11;
          if (local_a8 == 0) {
            iVar14 = 0;
          }
          else {
            iVar14 = *(int *)(local_a8 + 8);
          }
          *(int *)(iVar14 + (iVar7 + 1) * 4) = iVar4;
          if (local_a8 == 0) {
            iVar14 = 0;
          }
          else {
            iVar14 = *(int *)(local_a8 + 8);
          }
          *(int *)(iVar14 + (iVar7 + 2) * 4) = iVar3;
          if (local_a8 == 0) {
            iVar14 = 0;
          }
          else {
            iVar14 = *(int *)(local_a8 + 8);
          }
          *(int *)(iVar14 + (iVar7 + 3) * 4) = iVar3;
          if (local_a8 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(local_a8 + 8);
          }
          *(int *)(iVar3 + (iVar7 + 4) * 4) = iVar4;
          if (local_a8 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(local_a8 + 8);
          }
          *(int *)(iVar3 + (iVar7 + 5) * 4) = (iVar12 + 1) * iVar10 + iVar11 + 1;
          iVar12 = iVar12 + 1;
          iVar7 = iVar7 + 6;
        } while (iVar12 < local_84);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)local_80);
  }
  FUN_4a1044c4(local_34,auStack_b4,local_a0,auStack_c8,local_9c * 3,auStack_dc,local_38,auStack_f0,
               local_3c);
  FUN_4a16b6c0(auStack_f0);
  FUN_4a16c1a0(auStack_dc);
  FUN_4a16c1a0(auStack_c8);
  FUN_4a16bef4(auStack_b4);
  return;
}



// Address: 4a1043dc

void FUN_4a1043dc(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,undefined4 param_8)

{
  undefined4 unaff_r4;
  int unaff_r5;
  undefined4 uVar1;
  int iVar2;
  int in_lr;
  
  iVar2 = param_4;
  if (param_6 == 0) {
    unaff_r5 = param_5 + -2;
    unaff_r4 = 2;
    in_lr = param_5;
    goto LAB_4a104438;
  }
  if (param_6 == 2) {
    unaff_r5 = param_4 + 2;
  }
  else {
    if (param_6 == 3) {
      unaff_r5 = param_5 + 2;
      unaff_r4 = 2;
      in_lr = param_5;
      goto LAB_4a104438;
    }
    iVar2 = param_5;
    if (param_6 != 5) goto LAB_4a104438;
    unaff_r5 = param_4 + -2;
  }
  unaff_r4 = 0;
  iVar2 = param_5;
  in_lr = param_4;
LAB_4a104438:
  uVar1 = 0;
  if (*(int *)(param_7 + 0xc) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_7 + 0xc) + 8);
  }
  FUN_4a103dd0(param_1,unaff_r5,param_2,in_lr,param_3,iVar2,unaff_r4,1,2,param_2 - param_3,uVar1,0,0
               ,0,0,param_8);
  return;
}



// Address: 4a1044c4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1044c4(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,int param_7,int param_8,int param_9)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  int *piVar8;
  undefined4 uVar9;
  undefined1 auStack_84 [8];
  undefined4 local_7c;
  int *local_78;
  undefined1 auStack_70 [8];
  undefined4 local_68;
  int *local_64;
  undefined1 auStack_5c [8];
  undefined4 local_54;
  int *local_50;
  undefined1 auStack_48 [8];
  undefined4 local_40;
  int *local_3c;
  int iStack_34;
  undefined4 local_30;
  int iStack_2c;
  undefined4 local_28;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + 8);
  }
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  iStack_34 = param_1;
  local_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  if (iVar4 == 0) {
    iVar4 = FUN_4a16be24(auStack_48,param_3);
    uVar9 = *(undefined4 *)(iVar4 + 8);
    piVar8 = *(int **)(iVar4 + 0xc);
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 0xc))(piVar8);
    }
    (**(code **)(*(int *)(param_1 + 4) + 0x1c))((int *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0xc) = uVar9;
    *(int **)(param_1 + 0x10) = piVar8;
    FUN_4a16bef4(auStack_48);
    FUN_4a0c740c(local_30,0,param_1 + 4,0,param_3);
    iVar4 = FUN_4a16c0cc(auStack_5c,param_5);
    uVar9 = *(undefined4 *)(iVar4 + 8);
    piVar8 = *(int **)(iVar4 + 0xc);
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 0xc))(piVar8);
    }
    (**(code **)(*(int *)(param_1 + 0x18) + 0x1c))((int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x20) = uVar9;
    *(int **)(param_1 + 0x24) = piVar8;
    FUN_4a16c1a0(auStack_5c);
    FUN_4a0c746c(local_28,0,param_1 + 0x18,0,param_5);
    iVar4 = FUN_4a16c0cc(auStack_5c,param_7);
    uVar9 = *(undefined4 *)(iVar4 + 8);
    piVar8 = *(int **)(iVar4 + 0xc);
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 0xc))(piVar8);
    }
    (**(code **)(*(int *)(param_1 + 0x2c) + 0x1c))((int *)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x34) = uVar9;
    *(int **)(param_1 + 0x38) = piVar8;
    FUN_4a16c1a0(auStack_5c);
    FUN_4a0c746c(param_6,0,param_1 + 0x2c,0,param_7);
    iVar4 = FUN_4a16b5f8(auStack_70,param_9);
    uVar9 = *(undefined4 *)(iVar4 + 8);
    piVar8 = *(int **)(iVar4 + 0xc);
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 0xc))(piVar8);
    }
    (**(code **)(*(int *)(param_1 + 0x40) + 0x1c))((int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x48) = uVar9;
    *(int **)(param_1 + 0x4c) = piVar8;
    FUN_4a16b6c0(auStack_70);
    iVar4 = param_9;
    iVar3 = 0;
    if (param_9 < 1) {
      param_1 = unaff_r4;
      iVar4 = unaff_r5;
      param_8 = unaff_r6;
      iVar3 = unaff_r7;
    }
    iVar5 = 0;
    if (param_9 < 1) {
      return;
    }
    do {
      iVar6 = iVar3;
      if (*(int *)(param_8 + 0xc) != 0) {
        iVar6 = *(int *)(*(int *)(param_8 + 0xc) + 8);
      }
      iVar7 = iVar3;
      if (*(int *)(param_1 + 0x4c) != 0) {
        iVar7 = *(int *)(*(int *)(param_1 + 0x4c) + 8);
      }
      *(undefined1 *)(iVar7 + iVar5) = *(undefined1 *)(iVar6 + iVar5);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
    return;
  }
  iVar5 = *(int *)(param_1 + 0xc);
  lVar2 = (longlong)DAT_4a104a00 * (longlong)*(int *)(param_1 + 0x20);
  iVar4 = (int)((ulonglong)lVar2 >> 0x20);
  FUN_4a16be24(auStack_48,iVar5 + param_3,(int)lVar2);
  FUN_4a0c740c(param_1 + 4,0,auStack_48,0,*(undefined4 *)(param_1 + 0xc));
  FUN_4a0c740c(local_30,0,auStack_48,iVar5,param_3);
  iVar3 = 0;
  if (0 < param_3) {
    do {
      if (local_3c == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = local_3c[2];
      }
      piVar8 = (int *)(iVar6 + (iVar5 + iVar3) * 4);
      iVar3 = iVar3 + 1;
      *piVar8 = *piVar8 + (iVar4 - (iVar4 >> 0x1f));
    } while (iVar3 < param_3);
  }
  if (local_3c != (int *)0x0) {
    (**(code **)(*local_3c + 0xc))(local_3c);
  }
  (**(code **)(*(int *)(param_1 + 4) + 0x1c))((int *)(param_1 + 4));
  *(undefined4 *)(param_1 + 0xc) = local_40;
  *(int **)(param_1 + 0x10) = local_3c;
  FUN_4a16c0cc(auStack_5c,*(int *)(param_1 + 0x20) + param_5);
  FUN_4a0c746c(param_1 + 0x18,0,auStack_5c,0,*(undefined4 *)(param_1 + 0x20));
  FUN_4a0c746c(local_28,0,auStack_5c,*(undefined4 *)(param_1 + 0x20),param_5);
  if (local_50 != (int *)0x0) {
    (**(code **)(*local_50 + 0xc))(local_50);
  }
  (**(code **)(*(int *)(param_1 + 0x18) + 0x1c))((int *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x20) = local_54;
  *(int **)(param_1 + 0x24) = local_50;
  FUN_4a16c0cc(auStack_70,*(int *)(param_1 + 0x34) + param_7);
  FUN_4a0c746c(param_1 + 0x2c,0,auStack_70,0,*(undefined4 *)(param_1 + 0x34));
  FUN_4a0c746c(param_6,0,auStack_70,*(undefined4 *)(param_1 + 0x34),param_7);
  if (local_64 != (int *)0x0) {
    (**(code **)(*local_64 + 0xc))(local_64);
  }
  (**(code **)(*(int *)(param_1 + 0x2c) + 0x1c))((int *)(param_1 + 0x2c));
  *(undefined4 *)(param_1 + 0x34) = local_68;
  *(int **)(param_1 + 0x38) = local_64;
  FUN_4a16b5f8(auStack_84,*(int *)(param_1 + 0x48) + param_9);
  iVar3 = *(int *)(param_1 + 0x48);
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      iVar5 = 0;
      if (*(int *)(param_1 + 0x4c) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(param_1 + 0x4c) + 8);
      }
      if (local_78 != (int *)0x0) {
        iVar5 = local_78[2];
      }
      *(undefined1 *)(iVar5 + iVar4) = *(undefined1 *)(iVar6 + iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  iVar3 = *(int *)(param_1 + 0x48);
  iVar4 = 0;
  if (0 < param_9) {
    do {
      iVar5 = 0;
      if (*(int *)(param_8 + 0xc) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(param_8 + 0xc) + 8);
      }
      puVar1 = (undefined1 *)(iVar6 + iVar4);
      iVar6 = iVar3 + iVar4;
      if (local_78 != (int *)0x0) {
        iVar5 = local_78[2];
      }
      iVar4 = iVar4 + 1;
      *(undefined1 *)(iVar5 + iVar6) = *puVar1;
    } while (iVar4 < param_9);
  }
  if (local_78 != (int *)0x0) {
    (**(code **)(*local_78 + 0xc))(local_78);
  }
  (**(code **)(*(int *)(param_1 + 0x40) + 0x1c))((int *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x48) = local_7c;
  *(int **)(param_1 + 0x4c) = local_78;
  FUN_4a16b6c0(auStack_84);
  FUN_4a16c1a0(auStack_70);
  FUN_4a16c1a0(auStack_5c);
  FUN_4a16bef4(auStack_48);
  return;
}



// Address: 4a104a04

void FUN_4a104a04(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,int param_6,int param_7,int param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  undefined4 unaff_r4;
  int in_r12;
  
  if (param_8 == 0) {
    unaff_r4 = 0;
    param_7 = param_7 + param_5;
    in_r12 = param_5;
    goto LAB_4a104a80;
  }
  if (param_8 != 2) {
    if (param_8 == 3) {
      unaff_r4 = 0;
      param_7 = param_5 - param_7;
      in_r12 = param_5;
      goto LAB_4a104a80;
    }
    if (param_8 != 5) goto LAB_4a104a80;
    param_7 = -param_7;
  }
  param_7 = param_6 + param_7;
  unaff_r4 = 2;
  in_r12 = param_6;
  param_6 = param_5;
LAB_4a104a80:
  FUN_4a103dd0(param_1,in_r12,param_2,param_7,param_3,param_6,unaff_r4,1,0x20,param_4,param_9,
               param_10,param_11,0,0,param_12);
  return;
}



// Address: 4a104ae8

void FUN_4a104ae8(uint param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_48 [8];
  undefined4 local_40;
  int *local_3c;
  undefined1 auStack_34 [20];
  
  if (param_2 != 0) {
    iVar4 = FUN_4a13b5e4(param_2);
    iVar9 = *(int *)(iVar4 + 0x44);
    iVar8 = *(int *)(iVar9 + 0x28);
    FUN_4a16b5f8(auStack_48,iVar8 << 2);
    FUN_4a138d30(iVar9,0,iVar8,auStack_48);
    uVar1 = (ulonglong)DAT_4a104cec;
    uVar2 = (ulonglong)DAT_4a104cec;
    uVar3 = (ulonglong)DAT_4a104cec;
    iVar4 = 0;
    iVar6 = 0;
    if (0 < iVar8) {
      do {
        if (local_3c == (int *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = local_3c[2];
        }
        if ((*(byte *)(iVar7 + iVar4 + 2) & 1) == 0) {
          if (local_3c == (int *)0x0) {
            iVar7 = 0;
          }
          else {
            iVar7 = local_3c[2];
          }
          *(char *)(iVar7 + iVar4) =
               (char)(uint)((((param_1 & 0xff0000) >> 0x10) * 0xa0) * uVar1 >> 0x27);
          if (local_3c == (int *)0x0) {
            iVar7 = 0;
          }
          else {
            iVar7 = local_3c[2];
          }
          *(char *)(iVar7 + iVar4 + 1) =
               (char)(uint)((((param_1 & 0xff00) >> 8) * 0xa0) * uVar2 >> 0x27);
          if (local_3c == (int *)0x0) {
            iVar7 = 0;
          }
          else {
            iVar7 = local_3c[2];
          }
          *(byte *)(iVar7 + iVar4 + 2) =
               (byte)(uint)(((param_1 & 0xff) * 0xa0) * uVar3 >> 0x27) & 0xfe;
        }
        else {
          if (local_3c == (int *)0x0) {
            iVar7 = 0;
          }
          else {
            iVar7 = local_3c[2];
          }
          *(char *)(iVar7 + iVar4) = (char)((param_1 & 0xff0000) >> 0x10);
          if (local_3c == (int *)0x0) {
            iVar7 = 0;
          }
          else {
            iVar7 = local_3c[2];
          }
          *(char *)(iVar7 + iVar4 + 1) = (char)((param_1 & 0xff00) >> 8);
          if (local_3c == (int *)0x0) {
            iVar7 = 0;
          }
          else {
            iVar7 = local_3c[2];
          }
          *(byte *)(iVar7 + iVar4 + 2) = (byte)param_1 | 1;
        }
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar6 < iVar8);
    }
    puVar5 = (undefined4 *)FUN_4a0c6bc0(auStack_34);
    *puVar5 = PTR_PTR_4a104cf0;
    puVar5[2] = local_40;
    puVar5[3] = local_3c;
    if (local_3c != (int *)0x0) {
      (**(code **)(*local_3c + 0xc))();
    }
    *puVar5 = PTR_PTR_4a104cf4;
    FUN_4a0ad06c(iVar9,0,iVar8,puVar5);
    FUN_4a16b6c0(auStack_34);
    FUN_4a16b6c0(auStack_48);
    return;
  }
  return;
}



// Address: 4a104cf8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a104cf8(uint param_1,int param_2,undefined4 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_64 [8];
  int iStack_5c;
  int iStack_58;
  uint uStack_50;
  undefined1 auStack_4c [8];
  undefined4 uStack_44;
  int *piStack_40;
  undefined1 auStack_38 [20];
  
  if (param_2 == 0) {
    return;
  }
  iVar4 = FUN_4a13b5bc(param_2,param_3);
  if (iVar4 != 0) {
    iVar5 = FUN_4a13b5e4(param_2);
    iVar5 = *(int *)(iVar5 + 0x44);
    iVar9 = *(int *)(iVar5 + 0x28);
    FUN_4a16b5f8(auStack_4c,iVar9 << 2);
    FUN_4a138d30(iVar5,0,iVar9,auStack_4c);
    uStack_50 = param_1 & 0xff;
    uVar1 = (ulonglong)DAT_4a104f5c;
    uVar2 = (ulonglong)DAT_4a104f5c;
    lVar3 = (ulonglong)((param_1 & 0xff) * 0xa0) * (ulonglong)DAT_4a104f5c;
    FUN_4a16be24(auStack_64,*(undefined4 *)(iVar4 + 0x38),(int)lVar3);
    FUN_4a1376d0(iVar4,auStack_64);
    iVar4 = 0;
    if (0 < iStack_5c) {
      do {
        if (iStack_58 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(iStack_58 + 8);
        }
        iVar8 = 0;
        if (piStack_40 != (int *)0x0) {
          iVar8 = piStack_40[2];
        }
        iVar6 = *(int *)(iVar6 + iVar4 * 4) * 4;
        if (piStack_40 == (int *)0x0) {
          iVar8 = 0;
        }
        if ((*(byte *)(iVar8 + iVar6 + 2) & 1) == 0) {
          if (piStack_40 == (int *)0x0) {
            iVar8 = 0;
          }
          else {
            iVar8 = piStack_40[2];
          }
          *(char *)(iVar8 + iVar6) =
               (char)(uint)((((param_1 & 0xff0000) >> 0x10) * 0xa0) * uVar1 >> 0x27);
          if (piStack_40 == (int *)0x0) {
            iVar8 = 0;
          }
          else {
            iVar8 = piStack_40[2];
          }
          *(char *)(iVar8 + iVar6 + 1) =
               (char)(uint)((((param_1 & 0xff00) >> 8) * 0xa0) * uVar2 >> 0x27);
          if (piStack_40 == (int *)0x0) {
            iVar8 = 0;
          }
          else {
            iVar8 = piStack_40[2];
          }
          *(byte *)(iVar8 + iVar6 + 2) = (byte)(uint)((ulonglong)lVar3 >> 0x27) & 0xfe;
        }
        else {
          if (piStack_40 == (int *)0x0) {
            iVar8 = 0;
          }
          else {
            iVar8 = piStack_40[2];
          }
          *(char *)(iVar8 + iVar6) = (char)((param_1 & 0xff0000) >> 0x10);
          if (piStack_40 == (int *)0x0) {
            iVar8 = 0;
          }
          else {
            iVar8 = piStack_40[2];
          }
          *(char *)(iVar8 + iVar6 + 1) = (char)((param_1 & 0xff00) >> 8);
          if (piStack_40 == (int *)0x0) {
            iVar8 = 0;
          }
          else {
            iVar8 = piStack_40[2];
          }
          *(byte *)(iVar8 + iVar6 + 2) = (byte)uStack_50 | 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iStack_5c);
    }
    puVar7 = (undefined4 *)FUN_4a0c6bc0(auStack_38);
    *puVar7 = PTR_PTR_4a104f60;
    puVar7[2] = uStack_44;
    puVar7[3] = piStack_40;
    if (piStack_40 != (int *)0x0) {
      (**(code **)(*piStack_40 + 0xc))();
    }
    *puVar7 = PTR_PTR_4a104f64;
    FUN_4a0ad06c(iVar5,0,iVar9,puVar7);
    FUN_4a16b6c0(auStack_38);
    FUN_4a16bef4(auStack_64);
    FUN_4a16b6c0(auStack_4c);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a104d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a104f68

void FUN_4a104f68(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,
                 undefined4 param_11)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_6 + 0xc) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_6 + 0xc) + 8);
  }
  FUN_4a103dd0(param_1,param_2,param_3,param_4 + param_2,param_5 + param_3,0,0,2,0x20,0x20,uVar1,
               param_7,param_8,param_9,param_10,param_11);
  return;
}



// Address: 4a105010

int FUN_4a105010(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = PTR_PTR_4a105054;
  iVar1 = FUN_4a16be24(param_1 + 1,0);
  iVar1 = FUN_4a16c0cc(iVar1 + 0x14,0);
  iVar1 = FUN_4a16c0cc(iVar1 + 0x14,0);
  iVar1 = FUN_4a16b5f8(iVar1 + 0x14,0);
  return iVar1 + -0x40;
}



// Address: 4a105098

int FUN_4a105098(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = PTR_PTR_4a1050cc;
  iVar1 = FUN_4a16b6c0(param_1 + 0x10);
  iVar1 = FUN_4a16c1a0(iVar1 + -0x14);
  iVar1 = FUN_4a16c1a0(iVar1 + -0x14);
  iVar1 = FUN_4a16bef4(iVar1 + -0x14);
  return iVar1 + -4;
}



// Address: 4a1050d0

void FUN_4a1050d0(void)

{
  FUN_4a1050dc();
  return;
}



// Address: 4a1050dc

undefined4 FUN_4a1050dc(int param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_4a105184();
  *(undefined4 *)(PTR_DAT_4a105158 + 0x10) = DAT_4a105154;
  iVar3 = *(int *)(param_1 + 0x10);
  uVar2 = thunk_FUN_4a0014ec(*(int *)(iVar3 + 8) + param_2 * 0x10 + 8);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  iVar3 = FUN_4a070958(iVar3,param_2);
  if (iVar3 == 0) {
    FUN_4a1051b8(param_1);
  }
  else {
    uVar2 = thunk_FUN_4a0014ec(*(int *)(*(int *)(param_1 + 0x10) + 8) + param_2 * 0x10);
    host_s3eFileSeek_thumb(iVar3,uVar2,0);
    FUN_4a0333f4(0);
    uVar2 = host_s3eCompressionDecompInit_thumb(0,PTR_FUN_4a05a25a_1_4a10515c,iVar3);
    puVar1 = PTR_DAT_4a105158;
    *(int *)(PTR_DAT_4a105158 + 4) = param_1;
    *(undefined4 *)(puVar1 + 8) = uVar2;
    FUN_4a1051b8(param_1);
    if (*(int *)(puVar1 + 8) != 0) {
      return 0;
    }
  }
  return 2;
}



// Address: 4a105160

void FUN_4a105160(undefined4 *param_1)

{
  *param_1 = PTR_FUN_4a105274_1_4a105174;
  param_1[2] = PTR_FUN_4a1050d0_1_4a105178;
  param_1[1] = PTR_FUN_4a10521c_1_4a10517c;
  param_1[3] = PTR_LAB_4a105280_1_4a105180;
  return;
}



// Address: 4a105184

void FUN_4a105184(int param_1,undefined *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *local_10;
  undefined *local_c;
  undefined *local_8;
  
  *(int *)PTR_DAT_4a1051a8 = param_1;
  local_10 = param_2;
  local_c = (undefined *)param_3;
  local_8 = (undefined *)param_4;
  FUN_4a161586(param_1 + 0x20);
  local_10 = PTR_LAB_4a105288_1_4a1051ac;
  local_8 = PTR_LAB_4a105228_1_4a1051b0;
  local_c = PTR_LAB_4a1052b8_1_4a1051b4;
  FUN_4a1615a8(&local_10);
  return;
}



// Address: 4a1051b8

void FUN_4a1051b8(int param_1)

{
  FUN_4a1615a8(param_1 + 0x20);
  *(undefined4 *)PTR_DAT_4a1051cc = 0;
  return;
}



// Address: 4a1051d0

undefined4 FUN_4a1051d0(int param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x18) < iVar1) {
    *param_3 = *(int *)(param_1 + 0x18);
    iVar1 = *param_3;
  }
  else {
    *param_3 = iVar1;
  }
  if (iVar1 != 0) {
    iVar1 = host_s3eCompressionDecompRead_thumb
                      (*(undefined4 *)(PTR_DAT_4a105218 + 8),*(undefined4 *)(param_1 + 0x14),param_3
                      );
    if (iVar1 != 0) {
      return 2;
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) - *param_3;
    *param_2 = *(undefined4 *)(param_1 + 0x14);
  }
  return 0;
}



// Address: 4a10521c

void FUN_4a10521c(void)

{
  FUN_4a1051d0();
  return;
}



// Address: 4a105248

bool FUN_4a105248(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 0x400;
  if (0x400 < param_4) {
    *(int *)(param_1 + 0x18) = param_4;
  }
  iVar1 = FUN_4a00dbc4(*(undefined4 *)(param_1 + 0x18));
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x10) = param_2;
  }
  return iVar1 == 0;
}



// Address: 4a105274

void FUN_4a105274(void)

{
  FUN_4a105248();
  return;
}



// Address: 4a1052bc

int FUN_4a1052bc(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_DAT_4a1052e8;
  *(undefined4 *)(param_1 + 0x14) = 0;
  iVar2 = *(int *)(puVar1 + 0x14);
  *(int *)(puVar1 + 0x14) = iVar2 + 1;
  if (iVar2 + 1 == 1) {
    uVar3 = FUN_4a00dbc4(DAT_4a1052ec);
    *(undefined4 *)(puVar1 + 0xc) = uVar3;
  }
  FUN_4a105160(param_1);
  return param_1;
}



// Address: 4a1052f0

int FUN_4a1052f0(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  FUN_4a105184();
  FUN_4a0333f4(param_1);
  FUN_4a1051b8(param_1);
  FUN_4a05a298(*(undefined4 *)(param_1 + 0x14));
  puVar1 = PTR_DAT_4a105324;
  iVar2 = *(int *)(PTR_DAT_4a105324 + 0x14);
  *(int *)(PTR_DAT_4a105324 + 0x14) = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    FUN_4a05a298(*(undefined4 *)(puVar1 + 0xc));
  }
  return param_1;
}



// Address: 4a105328

void FUN_4a105328(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_4a1078e8(param_1,1);
  iVar1 = FUN_4a0ff494();
  uVar5 = *(undefined4 *)(iVar1 + 0x260);
  uVar2 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x44));
  uVar2 = FUN_4a17295c(uVar2,0xfffffff0);
  uVar3 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x48));
  uVar3 = FUN_4a17295c(uVar3,0xfffffff0);
  uVar4 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x4c));
  uVar4 = FUN_4a17295c(uVar4,0xfffffff0);
  FUN_4a0851b4(uVar5,0x4e,uVar2,uVar3,uVar4,0x3f800000);
  return;
}



// Address: 4a1053a4

/* WARNING: Removing unreachable block (ram,0x4a107aac) */
/* WARNING: Removing unreachable block (ram,0x4a107954) */
/* WARNING: Removing unreachable block (ram,0x4a10795c) */
/* WARNING: Removing unreachable block (ram,0x4a107968) */
/* WARNING: Removing unreachable block (ram,0x4a107c14) */
/* WARNING: Removing unreachable block (ram,0x4a107b04) */
/* WARNING: Removing unreachable block (ram,0x4a107b08) */
/* WARNING: Removing unreachable block (ram,0x4a107b10) */
/* WARNING: Removing unreachable block (ram,0x4a107b2c) */
/* WARNING: Removing unreachable block (ram,0x4a107bfc) */
/* WARNING: Removing unreachable block (ram,0x4a107bec) */
/* WARNING: Removing unreachable block (ram,0x4a107be8) */
/* WARNING: Removing unreachable block (ram,0x4a107bf8) */
/* WARNING: Removing unreachable block (ram,0x4a1079fc) */
/* WARNING: Removing unreachable block (ram,0x4a107c8c) */
/* WARNING: Removing unreachable block (ram,0x4a107a80) */
/* WARNING: Removing unreachable block (ram,0x4a107b14) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1053a4(int param_1)

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
  
  if (*(int *)(param_1 + 0x3c) != 0 && *(int *)(param_1 + 0x3c) != 3) {
    return;
  }
  iVar4 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                       *(undefined4 *)(param_1 + 0x28));
  iVar4 = (int)*(char *)(iVar4 + 8);
  if (iVar4 == 0x11) {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
    FUN_4a109ed4(param_1,0x104);
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
            FUN_4a107e58(param_1,0x102);
          }
        }
      }
      else if ((iVar4 != 0xc) && (iVar4 == 0xf)) {
        FUN_4a108314(param_1,2);
      }
    }
  }
  else {
    switch(iVar4) {
    case 0x16:
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
      FUN_4a109ed4(param_1,0xfe);
      break;
    case 0x17:
      FUN_4a108858(param_1,2);
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
      FUN_4a108be8(param_1,2);
      break;
    case 0x1f:
      FUN_4a107f78(param_1,2);
    }
  }
  *(undefined4 *)(param_1 + 0x3c) = 2;
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



// Address: 4a1053bc

undefined4 FUN_4a1053bc(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined *local_44 [2];
  int local_3c;
  int local_38;
  int local_30;
  int local_2c;
  uint local_28;
  
  if (*(int *)(param_1 + 100) != 0) {
    return 1;
  }
  if ((*(uint *)(param_1 + 0x34) & 0x80000) != 0) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
    uVar7 = *(undefined4 *)(param_1 + 0x28);
    iVar4 = FUN_4a143ac8(uVar3,uVar7);
    cVar1 = *(char *)(iVar4 + 0x1e);
    iVar4 = FUN_4a143ac8(uVar3,uVar7);
    uVar10 = (int)*(char *)(iVar4 + 0x1f);
    uVar2 = (int)cVar1;
    if (*(int *)(param_1 + 0x50) == 1 || *(int *)(param_1 + 0x50) == 3) {
      uVar10 = (int)cVar1;
      uVar2 = (int)*(char *)(iVar4 + 0x1f);
    }
    iVar4 = FUN_4a144cb0(uVar3,*(undefined4 *)(param_1 + 0x44));
    iVar5 = FUN_4a144cb8(uVar3,*(undefined4 *)(param_1 + 0x4c));
    iVar11 = 0;
    if (0 < (int)uVar2) {
      local_28 = uVar10 & 1;
      do {
        uVar8 = local_28;
        if ((int)uVar10 < 1) {
          uVar8 = 0;
        }
        iVar9 = 0;
        if (0 < (int)uVar8) {
          local_2c = iVar4 - iVar11;
          do {
            iVar6 = FUN_4a0f35f0(uVar3,local_2c,iVar5 - iVar9);
            if (iVar6 != 0) {
              return 1;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < (int)uVar8);
        }
        if ((int)uVar8 < (int)uVar10) {
          local_30 = iVar4 - iVar11;
          do {
            iVar9 = FUN_4a0f35f0(uVar3,local_30,iVar5 - uVar8);
            if (iVar9 != 0) {
              return 1;
            }
            iVar9 = FUN_4a0f35f0(uVar3,local_30,(iVar5 - uVar8) + -1);
            if (iVar9 != 0) {
              return 1;
            }
            uVar8 = uVar8 + 2;
          } while ((int)uVar8 < (int)uVar10);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < (int)uVar2);
    }
  }
  FUN_4a110aac(local_44,*(undefined4 *)(param_1 + 0x20));
  local_44[0] = PTR_PTR_4a10560c;
  iVar4 = 0;
  if (0 < local_3c) {
    do {
      if (local_38 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(local_38 + 8);
      }
      iVar5 = FUN_4a073f44(*(undefined4 *)(iVar5 + iVar4 * 4));
      if (iVar5 == param_1) {
        iVar4 = FUN_4a0bcc84(local_44);
        if (iVar4 == 0) goto LAB_4a10558c;
        iVar5 = 0;
        if (0 < local_3c) goto LAB_4a105574;
        goto LAB_4a105588;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_3c);
  }
  iVar4 = FUN_4a0bcc84(local_44);
  if (iVar4 != 0) {
    iVar5 = 0;
    if (0 < local_3c) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_3c);
      if (iVar4 == 0) goto LAB_4a1055f4;
    }
    FUN_4a14f21c();
  }
LAB_4a1055f4:
  FUN_4a0c6bf4(local_44);
  return 0;
LAB_4a105574:
  do {
    iVar5 = iVar5 + 1;
  } while (iVar5 < local_3c);
  if (iVar4 != 0) {
LAB_4a105588:
    FUN_4a14f21c();
  }
LAB_4a10558c:
  FUN_4a0c6bf4(local_44);
  return 1;
}



// Address: 4a105610

/* WARNING: Removing unreachable block (ram,0x4a107aac) */
/* WARNING: Removing unreachable block (ram,0x4a107954) */
/* WARNING: Removing unreachable block (ram,0x4a10795c) */
/* WARNING: Removing unreachable block (ram,0x4a107968) */
/* WARNING: Removing unreachable block (ram,0x4a107c14) */
/* WARNING: Removing unreachable block (ram,0x4a107b04) */
/* WARNING: Removing unreachable block (ram,0x4a107b08) */
/* WARNING: Removing unreachable block (ram,0x4a107b10) */
/* WARNING: Removing unreachable block (ram,0x4a107b2c) */
/* WARNING: Removing unreachable block (ram,0x4a107bfc) */
/* WARNING: Removing unreachable block (ram,0x4a107bec) */
/* WARNING: Removing unreachable block (ram,0x4a107be8) */
/* WARNING: Removing unreachable block (ram,0x4a107bf8) */
/* WARNING: Removing unreachable block (ram,0x4a1079fc) */
/* WARNING: Removing unreachable block (ram,0x4a107c8c) */
/* WARNING: Removing unreachable block (ram,0x4a107a80) */
/* WARNING: Removing unreachable block (ram,0x4a107b14) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a105610(int param_1)

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
  
  if (*(int *)(param_1 + 0x3c) == 1) {
    return;
  }
  iVar4 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                       *(undefined4 *)(param_1 + 0x28));
  iVar4 = (int)*(char *)(iVar4 + 8);
  if (iVar4 == 0x11) {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
    FUN_4a109ed4(param_1,0x104);
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
            FUN_4a107e58(param_1,0x102);
          }
        }
      }
      else if ((iVar4 != 0xc) && (iVar4 == 0xf)) {
        FUN_4a108314(param_1,2);
      }
    }
  }
  else {
    switch(iVar4) {
    case 0x16:
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
      FUN_4a109ed4(param_1,0xfe);
      break;
    case 0x17:
      FUN_4a108858(param_1,2);
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
      FUN_4a108be8(param_1,2);
      break;
    case 0x1f:
      FUN_4a107f78(param_1,2);
    }
  }
  *(undefined4 *)(param_1 + 0x3c) = 2;
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



// Address: 4a105624

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a105624(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = 0;
  iVar1 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                       *(undefined4 *)(param_1 + 0x28));
  if (*(char *)(iVar1 + 8) == '\x14') {
    uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
    uVar2 = FUN_4a144cb0(uVar5,*(undefined4 *)(param_1 + 0x44));
    uVar3 = FUN_4a144cb8(uVar5,*(undefined4 *)(param_1 + 0x4c));
    uVar2 = FUN_4a1458ac(uVar5,uVar2,uVar3);
    iVar4 = FUN_4a0f7058(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),uVar2);
  }
  if ((*(uint *)(param_1 + 0x38) & 0x100) != 0) {
    FUN_4a106084(param_1);
  }
  *(undefined4 *)(param_1 + 0x44) = param_2;
  *(undefined4 *)(param_1 + 0x48) = param_3;
  *(undefined4 *)(param_1 + 0x4c) = param_4;
  if (*(int *)(param_1 + 0x50) != param_5) {
    *(int *)(param_1 + 0x50) = param_5;
  }
  iVar1 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                       *(undefined4 *)(param_1 + 0x28));
  if (*(char *)(iVar1 + 8) != '\x14') {
    return;
  }
  if ((*(uint *)(param_1 + 0x38) & 0x40) == 0) {
    return;
  }
  if (iVar4 != 0) {
    FUN_4a0b8f24(iVar4);
  }
  uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
  uVar2 = FUN_4a144cb0(uVar5,*(undefined4 *)(param_1 + 0x44));
  uVar3 = FUN_4a144cb8(uVar5,*(undefined4 *)(param_1 + 0x4c));
  uVar2 = FUN_4a1458ac(uVar5,uVar2,uVar3);
  iVar1 = FUN_4a0f7058(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),uVar2);
  if (iVar1 == 0) {
    return;
  }
  iVar4 = *(int *)(iVar1 + 0x78) + 1;
  *(int *)(iVar1 + 0x78) = iVar4;
  if (iVar4 == 1) {
    iVar1 = FUN_4a0ff494();
    *(undefined1 *)(*(int *)(iVar1 + 0x520) + 0x450) = 1;
    return;
  }
  return;
}



// Address: 4a10575c

/* WARNING: Removing unreachable block (ram,0x4a06f994) */
/* WARNING: Removing unreachable block (ram,0x4a06f998) */
/* WARNING: Removing unreachable block (ram,0x4a06f9a0) */
/* WARNING: Removing unreachable block (ram,0x4a06fa48) */
/* WARNING: Removing unreachable block (ram,0x4a06fa58) */
/* WARNING: Removing unreachable block (ram,0x4a06fa60) */
/* WARNING: Removing unreachable block (ram,0x4a06fa64) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff0 : 0x4a06fa34 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_4a10575c(int param_1)

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
  
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
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
  bVar11 = (uVar8 & 1) != 0;
  iVar2 = 0;
  if (bVar11) {
    iVar10 = *(int *)(iVar3 + 8);
    iVar2 = *(int *)(iVar10 + 8);
  }
  if (bVar11 && 0x106 < iVar2) {
    *(undefined4 *)(iVar3 + 0xc) = 0x106;
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
    iVar10 = *(int *)(iVar3 + 0x10) * (int)*(short *)(iVar6 + 0x20c);
    iVar2 = (int)*(short *)(iVar2 + 0x20c) * *(int *)(iVar3 + 0x10);
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
  return iVar3;
}



// Address: 4a105774

/* WARNING: Removing unreachable block (ram,0x4a107bf4) */
/* WARNING: Removing unreachable block (ram,0x4a107bec) */
/* WARNING: Removing unreachable block (ram,0x4a107be0) */
/* WARNING: Removing unreachable block (ram,0x4a107be8) */
/* WARNING: Removing unreachable block (ram,0x4a107bf0) */
/* WARNING: Removing unreachable block (ram,0x4a107bf8) */
/* WARNING: Removing unreachable block (ram,0x4a107c2c) */
/* WARNING: Removing unreachable block (ram,0x4a107c4c) */
/* WARNING: Removing unreachable block (ram,0x4a107c58) */
/* WARNING: Removing unreachable block (ram,0x4a107c60) */
/* WARNING: Removing unreachable block (ram,0x4a107c64) */
/* WARNING: Removing unreachable block (ram,0x4a107c68) */
/* WARNING: Removing unreachable block (ram,0x4a107c70) */
/* WARNING: Removing unreachable block (ram,0x4a107c74) */
/* WARNING: Removing unreachable block (ram,0x4a107c78) */
/* WARNING: Removing unreachable block (ram,0x4a107c7c) */
/* WARNING: Removing unreachable block (ram,0x4a107b44) */
/* WARNING: Removing unreachable block (ram,0x4a107afc) */
/* WARNING: Removing unreachable block (ram,0x4a107b04) */
/* WARNING: Removing unreachable block (ram,0x4a107b08) */
/* WARNING: Removing unreachable block (ram,0x4a107b0c) */
/* WARNING: Removing unreachable block (ram,0x4a107b10) */
/* WARNING: Removing unreachable block (ram,0x4a107bfc) */
/* WARNING: Removing unreachable block (ram,0x4a107a18) */
/* WARNING: Removing unreachable block (ram,0x4a107a24) */
/* WARNING: Removing unreachable block (ram,0x4a107a2c) */
/* WARNING: Removing unreachable block (ram,0x4a107a30) */
/* WARNING: Removing unreachable block (ram,0x4a107a34) */
/* WARNING: Removing unreachable block (ram,0x4a107a3c) */
/* WARNING: Removing unreachable block (ram,0x4a107a40) */
/* WARNING: Removing unreachable block (ram,0x4a107a44) */
/* WARNING: Removing unreachable block (ram,0x4a107a48) */
/* WARNING: Removing unreachable block (ram,0x4a107a50) */
/* WARNING: Removing unreachable block (ram,0x4a107c84) */
/* WARNING: Removing unreachable block (ram,0x4a107aac) */
/* WARNING: Removing unreachable block (ram,0x4a10794c) */
/* WARNING: Removing unreachable block (ram,0x4a107954) */
/* WARNING: Removing unreachable block (ram,0x4a10795c) */
/* WARNING: Removing unreachable block (ram,0x4a107968) */
/* WARNING: Removing unreachable block (ram,0x4a107a54) */
/* WARNING: Removing unreachable block (ram,0x4a107b14) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a105774(int param_1)

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
    FUN_4a109ed4(param_1,0x104);
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
    FUN_4a0b4608(uVar5,1);
    FUN_4a0b4608(uVar11,1);
  }
  else if (iVar4 < 0x12) {
    if (iVar4 != 0xb) {
      if (iVar4 < 0xc) {
        if (iVar4 == 3) {
          *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
          FUN_4a109ed4(param_1,0xf8);
          FUN_4a1061f0(param_1);
        }
        else {
          if (iVar4 == 4) goto LAB_4a107c8c;
          if (iVar4 == 5) {
            *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x80;
            FUN_4a1078a4(param_1,6);
            FUN_4a107e58(param_1,0x101);
          }
        }
      }
      else if ((iVar4 != 0xc) && (iVar4 == 0xf)) {
        FUN_4a108314(param_1,1);
      }
    }
  }
  else {
    switch(iVar4) {
    case 0x16:
      uVar6 = *(uint *)(param_1 + 0x38) & 0xffffff7f;
      *(uint *)(param_1 + 0x38) = uVar6;
      *(uint *)(param_1 + 0x38) = uVar6 | 0x80;
      FUN_4a109ed4(param_1,0x100);
      break;
    case 0x17:
      FUN_4a108858(param_1,1);
      break;
    case 0x19:
LAB_4a107c8c:
      iVar4 = FUN_4a107058(param_1,1);
      FUN_4a0ca898(iVar4,8);
      FUN_4a06f95c(*(undefined4 *)(iVar4 + 0x34),0xf9,0x14);
      break;
    case 0x1e:
      FUN_4a108be8(param_1,1);
      break;
    case 0x1f:
      FUN_4a107f78(param_1,1);
    }
  }
  *(undefined4 *)(param_1 + 0x3c) = 1;
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



// Address: 4a10577c

int FUN_4a10577c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if ((*(uint *)(param_1 + 0x38) & 0x800) == 0) {
    if ((*(uint *)(param_1 + 0x38) & 0x1000) != 0) {
      param_2 = FUN_4a0d4b28(param_2 << 0x10,*(undefined4 *)PTR_DAT_4a105810);
      param_2 = param_2 >> 0x10;
    }
  }
  else {
    param_2 = FUN_4a0d4b28(param_2 << 0x10,*(undefined4 *)PTR_DAT_4a10580c);
    param_2 = param_2 >> 0x10;
  }
  iVar1 = 0;
  if (*(int *)(param_1 + 0x8c) < 1) {
    iVar2 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x90) == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = *(int **)(*(int *)(param_1 + 0x90) + 8);
    }
    iVar2 = *piVar3;
  }
  if (iVar2 != 0) {
    iVar1 = FUN_4a06000c(iVar2,param_2);
  }
  if (iVar1 != 0) {
    FUN_4a106378(param_1);
  }
  return iVar1;
}



// Address: 4a105814

void FUN_4a105814(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_34 [20];
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x24) + 0x520);
  uVar15 = *(uint *)(iVar2 + 0x454);
  iVar3 = FUN_4a143ac8(iVar2,*(undefined4 *)(param_1 + 0x28));
  puVar14 = (undefined4 *)0x0;
  if (*(char *)(iVar3 + 8) != ' ' && *(char *)(iVar3 + 8) != '\x0f') {
    uVar13 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
    uVar5 = FUN_4a144cb0(uVar13,*(undefined4 *)(param_1 + 0x44));
    uVar7 = FUN_4a144cb8(uVar13,*(undefined4 *)(param_1 + 0x4c));
    uVar5 = FUN_4a1458ac(uVar13,uVar5,uVar7);
    iVar2 = FUN_4a0f7058(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),uVar5);
    if (iVar2 != 0) {
      uVar15 = FUN_4a0b9110();
    }
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0xa0)) {
      do {
        if (iVar2 < *(int *)(param_1 + 0xa0)) {
          puVar8 = puVar14;
          if (*(int *)(param_1 + 0xa4) != 0) {
            puVar8 = *(undefined4 **)(*(int *)(param_1 + 0xa4) + 8);
          }
          iVar3 = puVar8[iVar2];
        }
        else {
          iVar3 = 0;
        }
        if (iVar3 != 0) {
          FUN_4a0cb3ec(iVar3,uVar15);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0xa0));
      return;
    }
    return;
  }
  iVar3 = FUN_4a144cb0(iVar2,*(undefined4 *)(param_1 + 0x44));
  iVar4 = FUN_4a144cb8(iVar2,*(undefined4 *)(param_1 + 0x4c));
  uVar5 = FUN_4a1458ac(iVar2,iVar3,iVar4);
  iVar6 = FUN_4a0f7058(iVar2,uVar5);
  if (iVar6 != 0) {
    FUN_4a0b9110();
  }
  iVar6 = *(int *)(param_1 + 0x50);
  iVar9 = 0;
  iVar11 = 0;
  if (iVar6 == 0) {
LAB_4a1059b4:
    iVar9 = -1;
  }
  else {
    if (iVar6 != 1) {
      if (iVar6 == 2) goto LAB_4a1059b4;
      if (iVar6 != 3) goto LAB_4a1058c8;
    }
    iVar11 = -1;
  }
LAB_4a1058c8:
  uVar5 = FUN_4a1458ac(iVar2,iVar9 + iVar3,iVar11 + iVar4);
  iVar2 = FUN_4a0f7058(iVar2,uVar5);
  if (iVar2 != 0) {
    uVar15 = FUN_4a0b9110();
  }
  if (*(int *)(param_1 + 0xa0) < 1) {
    uVar5 = 0;
  }
  else {
    if (*(int *)(param_1 + 0xa4) != 0) {
      puVar14 = *(undefined4 **)(*(int *)(param_1 + 0xa4) + 8);
    }
    uVar5 = *puVar14;
  }
  iVar2 = FUN_4a13eaec(uVar5,0x7d7);
  iVar3 = FUN_4a13eaec(uVar5,0x7d8);
  iVar4 = FUN_4a13eaec(uVar5,0x7d6);
  iVar6 = FUN_4a13eaec(uVar5,0x7d9);
  if (iVar4 != 0) {
    FUN_4a07a584();
  }
  if (iVar6 != 0) {
    FUN_4a07a584();
  }
  if (iVar2 != 0) {
    FUN_4a07a584();
  }
  if (iVar3 == 0) {
    return;
  }
  if (iVar3 == 0) {
    return;
  }
  iVar2 = FUN_4a165910();
  if (iVar2 != 0) {
    iVar6 = 0;
    iVar4 = 0;
    if (*(int *)(iVar2 + 0xdc) != 0) {
      iVar4 = *(int *)(*(int *)(iVar2 + 0xdc) + 0x10);
    }
    if (0 < iVar4) {
      do {
        FUN_4a07a584(*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0xdc) + 0x14) + iVar6 * 4),uVar15);
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
    }
  }
  iVar2 = FUN_4a165858(iVar3);
  if (iVar2 == 0) {
    return;
  }
  iVar4 = FUN_4a13b4a0(iVar2,0);
  iVar6 = *(int *)PTR_DAT_4a07a784;
  puVar14 = (undefined4 *)FUN_4a0c6bc0(auStack_34);
  *puVar14 = PTR_PTR_4a07a788;
  puVar14[2] = *(undefined4 *)(iVar6 + 0x28);
  piVar1 = *(int **)(iVar6 + 0x2c);
  puVar14[3] = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))();
  }
  uVar12 = 0;
  *puVar14 = PTR_PTR_4a07a78c;
  uVar10 = puVar14[2];
  if ((int)uVar10 < 1) {
    uVar16 = 0;
  }
  else {
    uVar16 = uVar10 & 1;
  }
  if (uVar16 != 0) {
    do {
      if (puVar14[3] == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(puVar14[3] + 8);
      }
      if (*(int *)(iVar6 + uVar12 * 4) == iVar4) goto LAB_4a07a6fc;
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)uVar16);
  }
  if ((int)uVar16 < (int)uVar10) {
    iVar6 = puVar14[3];
    do {
      if (iVar6 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(iVar6 + 8);
      }
      uVar12 = uVar16;
      if (*(int *)(iVar9 + uVar16 * 4) == iVar4) goto LAB_4a07a6fc;
      if (iVar6 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(iVar6 + 8);
      }
      if (*(int *)(iVar9 + (uVar16 + 1) * 4) == iVar4) {
        uVar12 = uVar16 + 1;
        goto LAB_4a07a6fc;
      }
      uVar16 = uVar16 + 2;
    } while ((int)uVar16 < (int)uVar10);
  }
  uVar12 = 0xffffffff;
LAB_4a07a6fc:
  FUN_4a16a898(auStack_34);
  if (((((((*(int *)(iVar4 + 0xc) != 0x6e && uVar12 != 0x29) && uVar12 != 0x30) && uVar12 != 0x31)
        && uVar12 != 0x32) && uVar12 != 0x28) && uVar12 != 0x19) &&
     ((((((uVar12 != 4 && uVar12 != 8) && uVar12 != 7) && uVar12 != 0x1c) && uVar12 != 0xd) &&
      uVar12 != 0x13) && uVar12 != 0x2a)) {
    iVar2 = FUN_4a13b5e4(iVar2);
    FUN_4a0ade00(iVar2,*(uint *)(iVar2 + 0x2c) & 0xff000000 | uVar15);
  }
  iVar2 = FUN_4a1657f4(iVar3);
  if (iVar2 != 0) {
    FUN_4a07a584(*(undefined4 *)(iVar2 + 0x114),uVar15);
  }
  return;
}



// Address: 4a105a6c

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

void FUN_4a105a6c(int param_1)

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
  
  if (*(int *)(param_1 + 0x3c) != 1 && *(int *)(param_1 + 0x3c) != 2) {
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



// Address: 4a105a84

void FUN_4a105a84(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x100;
  iVar2 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                       *(undefined4 *)(param_1 + 0x28));
  cVar1 = *(char *)(iVar2 + 8);
  uVar7 = *(uint *)(param_1 + 0x38);
  if (cVar1 == '\x14' || cVar1 == '\x15') {
    uVar7 = uVar7 & 0xffdfffff;
    *(uint *)(param_1 + 0x38) = uVar7;
  }
  if (((uVar7 & 0x40) != 0) && (cVar1 == '\x1a')) {
    FUN_4a1164e8(*(undefined4 *)(param_1 + 0x20));
  }
  FUN_4a109fa8(param_1,0);
  FUN_4a146240(param_1);
  piVar8 = (int *)0x0;
  if (*(int *)(param_1 + 0x8c) < 1) {
    iVar2 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x90) != 0) {
      piVar8 = *(int **)(*(int *)(param_1 + 0x90) + 8);
    }
    iVar2 = *piVar8;
  }
  FUN_4a060194(iVar2,0xb,0x14);
  iVar3 = FUN_4a060148(iVar2);
  uVar4 = FUN_4a0fe640(*(undefined4 *)(param_1 + 0x24),0,iVar3 + -1);
  *(undefined4 *)(iVar2 + 4) = uVar4;
  FUN_4a124844(*(undefined4 *)(param_1 + 0x20),param_1);
  FUN_4a11a440(*(undefined4 *)(param_1 + 0x20),0xb);
  iVar2 = FUN_4a0ff494();
  uVar9 = *(undefined4 *)(iVar2 + 0x260);
  uVar4 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x44));
  uVar4 = FUN_4a17295c(uVar4,0xfffffff0);
  uVar5 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x48));
  uVar5 = FUN_4a17295c(uVar5,0xfffffff0);
  uVar6 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x4c));
  uVar6 = FUN_4a17295c(uVar6,0xfffffff0);
  FUN_4a0851b4(uVar9,0x4d,uVar4,uVar5,uVar6,0x3f800000);
  return;
}



// Address: 4a105bc0

/* WARNING: Removing unreachable block (ram,0x4a106f70) */
/* WARNING: Removing unreachable block (ram,0x4a106b98) */
/* WARNING: Removing unreachable block (ram,0x4a106b8c) */
/* WARNING: Removing unreachable block (ram,0x4a106b64) */
/* WARNING: Removing unreachable block (ram,0x4a106b30) */
/* WARNING: Removing unreachable block (ram,0x4a106b6c) */
/* WARNING: Removing unreachable block (ram,0x4a106f6c) */
/* WARNING: Removing unreachable block (ram,0x4a106f74) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a105bc0(int *param_1)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  undefined *apuStack_4c [2];
  int iStack_44;
  int iStack_40;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined *puStack_28;
  
  FUN_4a108754();
  FUN_4a106a9c(param_1,0);
  FUN_4a105624(param_1,param_1[0x11],param_1[0x12],param_1[0x13]);
  uStack_2c = *(undefined4 *)(param_1[9] + 0x520);
  iVar3 = FUN_4a143ac8(uStack_2c,param_1[10]);
  iVar3 = (int)*(char *)(iVar3 + 0x1e);
  iVar4 = FUN_4a143ac8(uStack_2c,param_1[10]);
  iStack_30 = (int)*(char *)(iVar4 + 0x1f);
  iVar14 = iStack_30;
  iVar4 = iVar3;
  if (param_1[0x14] == 1 || param_1[0x14] == 3) {
    iVar14 = iVar3;
    iVar4 = iStack_30;
  }
  *(char *)(param_1 + 0x15) = (char)iVar4;
  *(char *)((int)param_1 + 0x55) = (char)iVar14;
  piVar15 = (int *)0x0;
  if ((param_1[0xd] & 0x100010U) != 0) goto LAB_4a106dd0;
  if ((param_1[0xd] & 8U) == 0) {
    FUN_4a143ac8(*(undefined4 *)(param_1[9] + 0x520),param_1[10]);
  }
  iStack_34 = FUN_4a144cb0(uStack_2c,param_1[0x11]);
  iStack_38 = FUN_4a144cb8(uStack_2c,param_1[0x13]);
  FUN_4a0f10a8(uStack_2c,(iStack_34 - iVar4) + 1,(iStack_38 - iVar14) + 1,iVar4);
  piVar5 = (int *)FUN_4a0c6bc0(apuStack_4c);
  puStack_28 = PTR_PTR_4a106fc8;
  piVar5[2] = 0;
  piVar5[3] = 0;
  *piVar5 = (int)puStack_28;
  iVar6 = FUN_4a15e080(4);
  if (iVar6 == 0) {
    iVar6 = FUN_4a1669a8();
  }
  iVar7 = 0;
  do {
    *(undefined1 *)(iVar6 + iVar7) = 0;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  thunk_FUN_4a161570(0x18,4);
  puVar8 = (undefined4 *)FUN_4a0c0628();
  puVar2 = PTR_PTR_4a106fcc;
  *puVar8 = PTR_PTR_4a106fcc;
  puVar8[3] = 1;
  puVar8[4] = 4;
  puVar8[2] = iVar6;
  *(undefined1 *)(puVar8 + 5) = 1;
  if (puVar8 != (undefined4 *)0x0) {
    (**(code **)(puVar2 + 0xc))(puVar8);
  }
  (**(code **)(*piVar5 + 0x1c))(piVar5);
  piVar5[2] = 4;
  piVar5[3] = (int)puVar8;
  iVar6 = 0;
  FUN_4a143244(uStack_2c,iStack_34,iStack_38,iVar4);
  if (param_1[0x28] < 1) {
    iVar7 = 0;
  }
  else {
    if (param_1[0x29] == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = *(int **)(param_1[0x29] + 8);
    }
    iVar7 = *piVar5;
  }
  if (iVar7 != 0) {
    if (iStack_40 == 0) {
      puVar9 = (undefined1 *)0x0;
    }
    else {
      puVar9 = *(undefined1 **)(iStack_40 + 8);
    }
    FUN_4a0cb0f4(iVar7,0x7d1,*puVar9);
    if (iStack_40 == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = *(int *)(iStack_40 + 8);
    }
    FUN_4a0cb0f4(iVar7,0x7d2,*(undefined1 *)(iVar10 + 2));
    if (iStack_40 == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = *(int *)(iStack_40 + 8);
    }
    FUN_4a0cb0f4(iVar7,0x7d3,*(undefined1 *)(iVar10 + 1));
    if (iStack_40 != 0) {
      iVar6 = *(int *)(iStack_40 + 8);
    }
    FUN_4a0cb0f4(iVar7,0x7d4,*(undefined1 *)(iVar6 + 3));
  }
  apuStack_4c[0] = puStack_28;
  iVar6 = FUN_4a0bcc84(apuStack_4c);
  if (iVar6 != 0) {
    iVar7 = 0;
    if (0 < iStack_44) {
      do {
        iVar7 = iVar7 + 1;
      } while (iVar7 < iStack_44);
      if (iVar6 == 0) goto LAB_4a106dc8;
    }
    FUN_4a14f21c(iVar6);
  }
LAB_4a106dc8:
  FUN_4a0c6bf4(apuStack_4c);
LAB_4a106dd0:
  if ((param_1[0xd] & 0x200000U) != 0) {
    if (param_1[0x28] < 1) {
      iVar6 = 0;
    }
    else {
      if (param_1[0x29] != 0) {
        piVar15 = *(int **)(param_1[0x29] + 8);
      }
      iVar6 = *piVar15;
    }
    if (iVar6 != 0) {
      iStack_34 = *(int *)(param_1[9] + 0x520);
      iVar7 = FUN_4a143ac8(iStack_34,param_1[10]);
      iStack_38 = (int)*(char *)(iVar7 + 0x1e);
      FUN_4a143ac8(iStack_34,param_1[10]);
      uVar11 = FUN_4a144cb0(iStack_34,param_1[0x11]);
      uVar12 = FUN_4a144cb8(iStack_34,param_1[0x13]);
      iVar7 = FUN_4a143330(iStack_34,uVar11,uVar12,iStack_38);
      if (iVar7 == 0) {
        iVar7 = FUN_4a143ac8(*(undefined4 *)(param_1[9] + 0x520),param_1[10]);
        if ((*(char *)(iVar7 + 8) == '\x14') ||
           (iVar7 = FUN_4a143ac8(*(undefined4 *)(param_1[9] + 0x520),param_1[10]),
           *(char *)(iVar7 + 8) == '\x15')) {
          iVar7 = FUN_4a143ac8(*(undefined4 *)(param_1[9] + 0x520),param_1[10]);
          cVar1 = *(char *)(iVar7 + 8);
          uVar13 = param_1[0xe];
          if (cVar1 == '\x14' || cVar1 == '\x15') {
            uVar13 = uVar13 & 0xffdfffff;
            param_1[0xe] = uVar13;
          }
          if (((uVar13 & 0x40) != 0) && (cVar1 == '\x1a')) {
            FUN_4a1164e8(param_1[8]);
          }
          FUN_4a109fa8(param_1,0);
        }
        FUN_4a0ca3fc(iVar6,0x453);
      }
      else {
        iVar7 = FUN_4a143ac8(*(undefined4 *)(param_1[9] + 0x520),param_1[10]);
        if ((*(char *)(iVar7 + 8) == '\x14') ||
           (iVar7 = FUN_4a143ac8(*(undefined4 *)(param_1[9] + 0x520),param_1[10]),
           *(char *)(iVar7 + 8) == '\x15')) {
          if ((param_1[0xe] & 0x40U) == 0) {
            uVar11 = 0x44d;
          }
          else {
            uVar11 = 0x44c;
          }
          FUN_4a0ca3fc(iVar6,uVar11);
        }
        else {
          FUN_4a0ca3fc(iVar6,0x454);
        }
      }
    }
  }
  if (iVar3 < 2) {
    iVar3 = iStack_30;
  }
  if (1 < iVar3) {
    param_1[0x2b] = -((iVar4 + -1) * 0x200000 >> 1);
    param_1[0x2c] = -((iVar14 + -1) * 0x200000 >> 1);
  }
                    /* WARNING: Could not recover jumptable at 0x4a106fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1);
  return;
}



// Address: 4a105c00

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a105c00(int param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_r4;
  uint uVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined1 auStack_44 [20];
  undefined1 auStack_30 [20];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_4a1078e8(param_1,3);
  }
  iVar4 = FUN_4a142ef4(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520));
  if (iVar4 != 0) {
    return;
  }
  iVar4 = (*(ushort *)(param_1 + 0x58) + 0xf) * 0x10000;
  *(short *)(param_1 + 0x58) = (short)((uint)iVar4 >> 0x10);
  if ((300 < iVar4 >> 0x10) &&
     (*(undefined2 *)(param_1 + 0x58) = 0, (*(uint *)(param_1 + 0x34) & 0x2000000) != 0)) {
    FUN_4a105a84(param_1);
  }
  if (*(int *)(param_1 + 0x2c) == -1) {
    return;
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x24) + 0x51c);
  uVar9 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
  uVar8 = 0;
  uStack_18 = unaff_r4;
  if ((*(int *)(param_1 + 0x28) == 0x80 || *(int *)(param_1 + 0x28) == 0xc) ||
     (iVar5 = FUN_4a143ac8(uVar9), *(char *)(iVar5 + 8) == '\x17')) {
    uVar8 = *(uint *)(param_1 + 0x3c);
  }
  else {
    iVar5 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                         *(undefined4 *)(param_1 + 0x28));
    if (((*(char *)(iVar5 + 8) == '\x14') ||
        (iVar5 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                              *(undefined4 *)(param_1 + 0x28)), *(char *)(iVar5 + 8) == '\x15')) &&
       ((*(uint *)(param_1 + 0x38) & 0x200000) == 0)) {
      uVar8 = 0x20000000;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x34);
  bVar10 = (uVar6 & 0x2000000) != 0;
  if (bVar10) {
    uVar6 = *(uint *)(param_1 + 0x38);
  }
  if (bVar10 && (uVar6 & 0x100) != 0) {
    uVar8 = uVar8 | 0x1000000;
  }
  iVar5 = FUN_4a142ef4(uVar9);
  if ((iVar5 == 0) && ((*(uint *)(param_1 + 0x34) & 0x2000000) != 0)) {
    uVar8 = uVar8 | (int)*(short *)(param_1 + 0x58);
  }
  uVar6 = *(uint *)(param_1 + 0x38);
  iVar5 = *(int *)(param_1 + 0x2c);
  if ((uVar6 & 0x8000) != 0) {
    uVar8 = uVar8 | 0x8000000;
  }
  if ((uVar6 & 0x4000) != 0) {
    uVar8 = uVar8 | 0x4000000;
  }
  if ((uVar6 & 0x10000) != 0) {
    uVar8 = uVar8 | 0x10000000;
  }
  sVar2 = FUN_4a142ef4(uVar9);
  uStack_1c = uStack_18;
  switchD_4a11cc8c::default((iVar5 >> 0x1f) + 1,s_invalid_id_4a0d8628);
  iVar7 = iVar4 + 0x988;
  uVar1 = (ushort)iVar5 | sVar2 << 8;
  uVar9 = FUN_4a16c074(auStack_30,iVar7);
  iVar3 = FUN_4a16ff5c((int)(short)uVar1,uVar9,0);
  FUN_4a16c1a0(auStack_30);
  iVar5 = 0;
  if (uVar8 == 0) {
    if (iVar3 != -1) {
      uVar9 = FUN_4a16c074(auStack_44,iVar7);
      iVar3 = FUN_4a16ff5c((int)(short)uVar1,uVar9,0);
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
  uVar9 = FUN_4a16c074(auStack_44,iVar7);
  iVar3 = FUN_4a16ff5c(0xffffffff,uVar9,0);
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
  *(uint *)(iVar7 + iVar3 * 4) = uVar8;
  if (*(int *)(iVar4 + 0x9bc) != 0) {
    iVar5 = *(int *)(*(int *)(iVar4 + 0x9bc) + 8);
  }
  *(undefined4 *)(iVar5 + iVar3 * 4) = *(undefined4 *)(iVar4 + 0x78c);
  return;
}



// Address: 4a105c74

/* WARNING: Removing unreachable block (ram,0x4a10795c) */
/* WARNING: Removing unreachable block (ram,0x4a107968) */
/* WARNING: Removing unreachable block (ram,0x4a107a80) */
/* WARNING: Removing unreachable block (ram,0x4a107c8c) */
/* WARNING: Removing unreachable block (ram,0x4a107a00) */
/* WARNING: Removing unreachable block (ram,0x4a1079fc) */
/* WARNING: Removing unreachable block (ram,0x4a107c14) */
/* WARNING: Removing unreachable block (ram,0x4a107b44) */
/* WARNING: Removing unreachable block (ram,0x4a107b2c) */
/* WARNING: Removing unreachable block (ram,0x4a107bfc) */
/* WARNING: Removing unreachable block (ram,0x4a107c2c) */
/* WARNING: Removing unreachable block (ram,0x4a107a54) */
/* WARNING: Removing unreachable block (ram,0x4a107b14) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a105c74(int param_1)

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



// Address: 4a105c7c

/* WARNING: Removing unreachable block (ram,0x4a107aac) */
/* WARNING: Removing unreachable block (ram,0x4a107954) */
/* WARNING: Removing unreachable block (ram,0x4a10795c) */
/* WARNING: Removing unreachable block (ram,0x4a107968) */
/* WARNING: Removing unreachable block (ram,0x4a107c14) */
/* WARNING: Removing unreachable block (ram,0x4a107b04) */
/* WARNING: Removing unreachable block (ram,0x4a107b08) */
/* WARNING: Removing unreachable block (ram,0x4a107b0c) */
/* WARNING: Removing unreachable block (ram,0x4a107b10) */
/* WARNING: Removing unreachable block (ram,0x4a107b2c) */
/* WARNING: Removing unreachable block (ram,0x4a107bfc) */
/* WARNING: Removing unreachable block (ram,0x4a107bf0) */
/* WARNING: Removing unreachable block (ram,0x4a107bec) */
/* WARNING: Removing unreachable block (ram,0x4a107be8) */
/* WARNING: Removing unreachable block (ram,0x4a107bf4) */
/* WARNING: Removing unreachable block (ram,0x4a107bf8) */
/* WARNING: Removing unreachable block (ram,0x4a107a00) */
/* WARNING: Removing unreachable block (ram,0x4a1079fc) */
/* WARNING: Removing unreachable block (ram,0x4a107c8c) */
/* WARNING: Removing unreachable block (ram,0x4a107a80) */
/* WARNING: Removing unreachable block (ram,0x4a107b14) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a105c7c(int param_1)

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
    FUN_4a109ed4(param_1,0x104);
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
            FUN_4a107e58(param_1,0x102);
          }
        }
      }
      else if ((iVar4 != 0xc) && (iVar4 == 0xf)) {
        FUN_4a108314(param_1,2);
      }
    }
  }
  else {
    switch(iVar4) {
    case 0x16:
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
      FUN_4a109ed4(param_1,0xfe);
      break;
    case 0x17:
      FUN_4a108858(param_1,2);
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
      FUN_4a108be8(param_1,2);
      break;
    case 0x1f:
      FUN_4a107f78(param_1,2);
    }
  }
  *(undefined4 *)(param_1 + 0x3c) = 2;
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



// Address: 4a105c84

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a105c84(int param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined1 auStack_44 [20];
  undefined1 auStack_30 [24];
  
  *(undefined4 *)(param_1 + 0x28) = 0x18;
  FUN_4a0ef614(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),*(undefined4 *)(param_1 + 0x2c),
               0x18);
  iVar4 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),0x18);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar4 + 0xc);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_4a107318(param_1);
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
  FUN_4a1078a4(param_1,0xffffffff);
  if (*(int *)(param_1 + 0x2c) == -1) {
    return;
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x24) + 0x51c);
  uVar9 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
  uVar8 = 0;
  if ((*(int *)(param_1 + 0x28) == 0x80 || *(int *)(param_1 + 0x28) == 0xc) ||
     (iVar5 = FUN_4a143ac8(uVar9), *(char *)(iVar5 + 8) == '\x17')) {
    uVar8 = *(uint *)(param_1 + 0x3c);
  }
  else {
    iVar5 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                         *(undefined4 *)(param_1 + 0x28));
    if (((*(char *)(iVar5 + 8) == '\x14') ||
        (iVar5 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                              *(undefined4 *)(param_1 + 0x28)), *(char *)(iVar5 + 8) == '\x15')) &&
       ((*(uint *)(param_1 + 0x38) & 0x200000) == 0)) {
      uVar8 = 0x20000000;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x34);
  bVar10 = (uVar6 & 0x2000000) != 0;
  if (bVar10) {
    uVar6 = *(uint *)(param_1 + 0x38);
  }
  if (bVar10 && (uVar6 & 0x100) != 0) {
    uVar8 = uVar8 | 0x1000000;
  }
  iVar5 = FUN_4a142ef4(uVar9);
  if ((iVar5 == 0) && ((*(uint *)(param_1 + 0x34) & 0x2000000) != 0)) {
    uVar8 = uVar8 | (int)*(short *)(param_1 + 0x58);
  }
  uVar6 = *(uint *)(param_1 + 0x38);
  iVar5 = *(int *)(param_1 + 0x2c);
  if ((uVar6 & 0x8000) != 0) {
    uVar8 = uVar8 | 0x8000000;
  }
  if ((uVar6 & 0x4000) != 0) {
    uVar8 = uVar8 | 0x4000000;
  }
  if ((uVar6 & 0x10000) != 0) {
    uVar8 = uVar8 | 0x10000000;
  }
  sVar2 = FUN_4a142ef4(uVar9);
  switchD_4a11cc8c::default((iVar5 >> 0x1f) + 1,s_invalid_id_4a0d8628);
  iVar7 = iVar4 + 0x988;
  uVar1 = (ushort)iVar5 | sVar2 << 8;
  uVar9 = FUN_4a16c074(auStack_30,iVar7);
  iVar3 = FUN_4a16ff5c((int)(short)uVar1,uVar9,0);
  FUN_4a16c1a0(auStack_30);
  iVar5 = 0;
  if (uVar8 == 0) {
    if (iVar3 != -1) {
      uVar9 = FUN_4a16c074(auStack_44,iVar7);
      iVar3 = FUN_4a16ff5c((int)(short)uVar1,uVar9,0);
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
  uVar9 = FUN_4a16c074(auStack_44,iVar7);
  iVar3 = FUN_4a16ff5c(0xffffffff,uVar9,0);
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
  *(uint *)(iVar7 + iVar3 * 4) = uVar8;
  if (*(int *)(iVar4 + 0x9bc) != 0) {
    iVar5 = *(int *)(*(int *)(iVar4 + 0x9bc) + 8);
  }
  *(undefined4 *)(iVar5 + iVar3 * 4) = *(undefined4 *)(iVar4 + 0x78c);
  return;
}



// Address: 4a105cf4

/* WARNING: Removing unreachable block (ram,0x4a06f994) */
/* WARNING: Removing unreachable block (ram,0x4a06f998) */
/* WARNING: Removing unreachable block (ram,0x4a06f9a0) */
/* WARNING: Removing unreachable block (ram,0x4a06fa48) */
/* WARNING: Removing unreachable block (ram,0x4a06fa58) */
/* WARNING: Removing unreachable block (ram,0x4a06fa60) */
/* WARNING: Removing unreachable block (ram,0x4a06fa64) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff0 : 0x4a06fa34 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_4a105cf4(int param_1)

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
  
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
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
  bVar11 = (uVar8 & 1) != 0;
  iVar2 = 0;
  if (bVar11) {
    iVar10 = *(int *)(iVar3 + 8);
    iVar2 = *(int *)(iVar10 + 8);
  }
  if (bVar11 && 0x107 < iVar2) {
    *(undefined4 *)(iVar3 + 0xc) = 0x107;
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
    iVar10 = *(int *)(iVar3 + 0x10) * (int)*(short *)(iVar6 + 0x20e);
    iVar2 = (int)*(short *)(iVar2 + 0x20e) * *(int *)(iVar3 + 0x10);
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
  return iVar3;
}



// Address: 4a105d0c

void FUN_4a105d0c(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  
  FUN_4a1078e8(param_1,1);
  iVar3 = FUN_4a0ff494();
  iVar3 = *(int *)(iVar3 + 0x260);
  uVar4 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x44));
  uVar4 = FUN_4a17295c(uVar4,0xfffffff0);
  uVar5 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x48));
  uVar5 = FUN_4a17295c(uVar5,0xfffffff0);
  uVar6 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x4c));
  uVar6 = FUN_4a17295c(uVar6,0xfffffff0);
  uVar7 = FUN_4a0851b4(iVar3,0x4e,uVar4,uVar5,uVar6,0x3f800000);
  *(uint *)(param_1 + 0x68) = uVar7;
  if ((int)uVar7 < 0) {
    return;
  }
  iVar1 = *(int *)(iVar3 + 0x74);
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 8);
  }
  iVar8 = 0;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  iVar3 = *(int *)(iVar3 + (uVar7 & 0xffff) * 0x14 + 0xc);
  if (iVar3 != 0) {
    iVar8 = *(int *)(iVar3 + 8);
  }
  piVar2 = *(int **)(iVar8 + (uVar7 >> 0x10) * 4);
  if (piVar2 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a085818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x30))(piVar2,0xffffffff);
  return;
}



// Address: 4a105d98

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a105d98(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  
  uVar1 = (**(code **)(*param_1 + 0x2c))(param_1);
  iVar2 = param_1[0x11];
  iVar7 = param_1[0x2b];
  iVar3 = param_1[0x12];
  iVar4 = param_1[0x13];
  iVar8 = param_1[0x2c];
  if (((param_1[0xe] & 0x2000U) == 0) && (*(char *)((int)param_1 + 0x56) != '\0')) {
    uVar11 = 1;
  }
  else {
    uVar11 = 0;
  }
  iVar9 = 0;
  if (0 < param_1[0x28]) {
    do {
      if (param_1[0x29] == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1[0x29] + 8);
      }
      iVar5 = *(int *)(iVar5 + iVar9 * 4);
      if (iVar5 != 0) {
        uVar6 = uVar1;
        if (iVar9 == 1) {
          FUN_4a17295c(*(undefined4 *)(*(int *)(param_1[9] + 0x520) + 0x488),0x10);
          uVar6 = FUN_4a171e1c();
        }
        uVar10 = *(undefined4 *)(iVar5 + 0x30);
        FUN_4a0af278(uVar10,iVar2 + iVar7,iVar3,iVar4 + iVar8);
        FUN_4a0af228(uVar10,uVar6,0,0x10000);
        FUN_4a0b4608(uVar10,uVar11);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < param_1[0x28]);
    return;
  }
  return;
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



// Address: 4a105ef8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a105ef8(int param_1)

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
  undefined4 uVar10;
  bool bVar11;
  undefined1 auStack_44 [20];
  undefined1 auStack_30 [24];
  
  switch(*(undefined4 *)(param_1 + 0x28)) {
  case 0x19:
    uVar8 = 10;
    break;
  case 0x1a:
    uVar8 = 0xc;
    break;
  case 0x1b:
    uVar8 = 0x12;
    break;
  case 0x1c:
    uVar8 = 0xb;
    break;
  case 0x1d:
    uVar8 = 0xe;
    break;
  default:
    switchD_4a11cc8c::default(0,PTR_s_invalid_plant_type_4a106080);
    uVar8 = 0xffffffff;
  }
  FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),*(undefined4 *)(param_1 + 0x28));
  uVar10 = 6;
  bVar11 = (*(uint *)(param_1 + 0x38) & 0x10000) != 0;
  if (bVar11) {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffeffff;
  }
  if (bVar11) {
    uVar10 = 8;
  }
  FUN_4a0d8474(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x51c),uVar10);
  switchD_4a0de288::default(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x51c),uVar8,uVar10);
  FUN_4a10e97c(*(undefined4 *)(param_1 + 0x20),uVar8,uVar10,0x941);
  iVar4 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                       *(undefined4 *)(param_1 + 0x28));
  if ((*(uint *)(iVar4 + 0x14) & 0x20000) == 0) {
    FUN_4a1078e8(param_1,3);
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 0x18;
    FUN_4a0ef614(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),*(undefined4 *)(param_1 + 0x2c),
                 0x18);
    iVar4 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),0x18);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar4 + 0xc);
    *(undefined4 *)(param_1 + 0x3c) = 0;
    FUN_4a107318(param_1);
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
    FUN_4a1078a4(param_1,0xffffffff);
    FUN_4a146240(param_1);
  }
  FUN_4a107318(param_1);
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
  bVar11 = (uVar6 & 0x2000000) != 0;
  if (bVar11) {
    uVar6 = *(uint *)(param_1 + 0x38);
  }
  if (bVar11 && (uVar6 & 0x100) != 0) {
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



// Address: 4a106084

void FUN_4a106084(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  undefined *local_30 [2];
  int local_28;
  int local_24;
  
  iVar2 = (int)*(char *)(param_1 + 0x54);
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  iVar3 = (int)*(char *)(param_1 + 0x55);
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  iVar7 = *(int *)(param_1 + 0x44) + (iVar2 + -1) * -0x200000 + -0x150000;
  iVar8 = *(int *)(param_1 + 0x44) + 0x150000;
  iVar3 = *(int *)(param_1 + 0x4c) + (iVar3 + -1) * -0x200000 + -0x150000;
  iVar9 = *(int *)(param_1 + 0x4c) + 0x150000;
  FUN_4a10ca70(local_30,*(undefined4 *)(param_1 + 0x20));
  iVar2 = 0;
  if (0 < local_28) {
    do {
      if (local_24 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(local_24 + 8);
      }
      iVar1 = *(int *)(iVar1 + iVar2 * 4);
      if (*(int *)(iVar1 + 0x28) == 0xd) {
        piVar5 = (int *)0x0;
        if (*(int *)(iVar1 + 0xa0) < 1) {
          iVar4 = 0;
        }
        else {
          if (*(int *)(iVar1 + 0xa4) != 0) {
            piVar5 = *(int **)(*(int *)(iVar1 + 0xa4) + 8);
          }
          iVar4 = *piVar5;
        }
        if ((iVar4 != 0) && (*(int *)(iVar4 + 0x2c) == 7)) {
          iVar4 = *(int *)(iVar1 + 0x44);
          iVar6 = *(int *)(iVar1 + 0x4c);
          bVar10 = SBORROW4(iVar4,iVar7);
          iVar1 = iVar4 - iVar7;
          if (iVar7 <= iVar4) {
            bVar10 = SBORROW4(iVar6,iVar3);
            iVar1 = iVar6 - iVar3;
          }
          if (iVar1 < 0 == bVar10) {
            bVar11 = SBORROW4(iVar4,iVar8);
            iVar1 = iVar4 - iVar8;
            bVar10 = iVar4 == iVar8;
            if (iVar4 <= iVar8) {
              bVar11 = SBORROW4(iVar6,iVar9);
              iVar1 = iVar6 - iVar9;
              bVar10 = iVar6 == iVar9;
            }
            if (bVar10 || iVar1 < 0 != bVar11) {
              FUN_4a109858();
            }
          }
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_28);
  }
  local_30[0] = PTR_PTR_4a1061dc;
  iVar2 = FUN_4a0bcc84(local_30);
  if (iVar2 != 0) {
    iVar3 = 0;
    if (0 < local_28) {
      do {
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_28);
      if (iVar2 == 0) goto LAB_4a1061c8;
    }
    FUN_4a14f21c();
  }
LAB_4a1061c8:
  FUN_4a0c6bf4(local_30);
  return;
}



// Address: 4a1061e0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1061e0(int param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_44 [20];
  undefined1 auStack_30 [24];
  
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffeff;
  if (*(int *)(param_1 + 0x2c) == -1) {
    return;
  }
  iVar9 = *(int *)(*(int *)(param_1 + 0x24) + 0x51c);
  uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
  uVar7 = 0;
  if ((*(int *)(param_1 + 0x28) == 0x80 || *(int *)(param_1 + 0x28) == 0xc) ||
     (iVar4 = FUN_4a143ac8(uVar8), *(char *)(iVar4 + 8) == '\x17')) {
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
  uVar5 = *(uint *)(param_1 + 0x34);
  bVar10 = (uVar5 & 0x2000000) != 0;
  if (bVar10) {
    uVar5 = *(uint *)(param_1 + 0x38);
  }
  if (bVar10 && (uVar5 & 0x100) != 0) {
    uVar7 = uVar7 | 0x1000000;
  }
  iVar4 = FUN_4a142ef4(uVar8);
  if ((iVar4 == 0) && ((*(uint *)(param_1 + 0x34) & 0x2000000) != 0)) {
    uVar7 = uVar7 | (int)*(short *)(param_1 + 0x58);
  }
  uVar5 = *(uint *)(param_1 + 0x38);
  iVar4 = *(int *)(param_1 + 0x2c);
  if ((uVar5 & 0x8000) != 0) {
    uVar7 = uVar7 | 0x8000000;
  }
  if ((uVar5 & 0x4000) != 0) {
    uVar7 = uVar7 | 0x4000000;
  }
  if ((uVar5 & 0x10000) != 0) {
    uVar7 = uVar7 | 0x10000000;
  }
  sVar2 = FUN_4a142ef4(uVar8);
  switchD_4a11cc8c::default((iVar4 >> 0x1f) + 1,s_invalid_id_4a0d8628);
  iVar6 = iVar9 + 0x988;
  uVar1 = (ushort)iVar4 | sVar2 << 8;
  uVar8 = FUN_4a16c074(auStack_30,iVar6);
  iVar3 = FUN_4a16ff5c((int)(short)uVar1,uVar8,0);
  FUN_4a16c1a0(auStack_30);
  iVar4 = 0;
  if (uVar7 == 0) {
    if (iVar3 != -1) {
      uVar8 = FUN_4a16c074(auStack_44,iVar6);
      iVar3 = FUN_4a16ff5c((int)(short)uVar1,uVar8,0);
      FUN_4a16c1a0(auStack_44);
      if (iVar3 != -1) {
        iVar6 = iVar4;
        if (*(int *)(iVar9 + 0x994) != 0) {
          iVar6 = *(int *)(*(int *)(iVar9 + 0x994) + 8);
        }
        *(undefined2 *)(iVar6 + iVar3 * 2) = 0xffff;
        iVar6 = iVar4;
        if (*(int *)(iVar9 + 0x9a8) != 0) {
          iVar6 = *(int *)(*(int *)(iVar9 + 0x9a8) + 8);
        }
        *(undefined4 *)(iVar6 + iVar3 * 4) = 0;
        if (*(int *)(iVar9 + 0x9bc) != 0) {
          iVar4 = *(int *)(*(int *)(iVar9 + 0x9bc) + 8);
        }
        *(undefined4 *)(iVar4 + iVar3 * 4) = 0;
        return;
      }
      return;
    }
  }
  else if (iVar3 != -1) goto LAB_4a0d85dc;
  uVar8 = FUN_4a16c074(auStack_44,iVar6);
  iVar3 = FUN_4a16ff5c(0xffffffff,uVar8,0);
  FUN_4a16c1a0(auStack_44);
  switchD_4a11cc8c::default(iVar3 != -1,s_no_room_in_persistant_object_dat_4a0d8634);
LAB_4a0d85dc:
  if (*(int *)(iVar9 + 0x994) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(iVar9 + 0x994) + 8);
  }
  *(ushort *)(iVar6 + iVar3 * 2) = uVar1;
  if (*(int *)(iVar9 + 0x9a8) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(iVar9 + 0x9a8) + 8);
  }
  *(uint *)(iVar6 + iVar3 * 4) = uVar7;
  if (*(int *)(iVar9 + 0x9bc) != 0) {
    iVar4 = *(int *)(*(int *)(iVar9 + 0x9bc) + 8);
  }
  *(undefined4 *)(iVar4 + iVar3 * 4) = *(undefined4 *)(iVar9 + 0x78c);
  return;
}



// Address: 4a1061f0

/* WARNING: Removing unreachable block (ram,0x4a06f8a4) */

void FUN_4a1061f0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  if (*(int *)(param_1 + 0xa0) < 1) {
    iVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 0xa4) != 0) {
      piVar2 = *(int **)(*(int *)(param_1 + 0xa4) + 8);
    }
    iVar1 = *piVar2;
  }
  iVar1 = *(int *)(iVar1 + 0x34);
  FUN_4a06f8dc(iVar1,*(undefined4 *)(iVar1 + 0x1c));
  *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) & 0xfffffffd;
  return;
}



// Address: 4a106238

void FUN_4a106238(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x50) != param_2) {
    *(int *)(param_1 + 0x50) = param_2;
  }
  return;
}



// Address: 4a106248

void FUN_4a106248(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = -param_2;
  iVar1 = -param_3;
  if ((*(uint *)(param_1 + 0x34) & 0x2000) == 0) {
    if ((int)uVar2 < (int)param_2) {
      uVar2 = param_2;
    }
    if (iVar1 < param_3) {
      iVar1 = param_3;
    }
    if (iVar1 < (int)uVar2) {
      iVar1 = (param_2 >> 0x1f) << 1;
    }
    else if (param_3 < 0) {
      iVar1 = 3;
    }
    else {
      iVar1 = 1;
    }
    if (*(int *)(param_1 + 0x50) == iVar1) {
      return;
    }
    goto LAB_4a106330;
  }
  if (param_3 == 0) {
    if (-1 < (int)param_2) goto LAB_4a1062e4;
    goto LAB_4a106304;
  }
  if (param_2 == 0) {
    if (param_3 < 0) {
LAB_4a1062d4:
      iVar1 = 3;
    }
    else {
LAB_4a106320:
      iVar1 = 1;
    }
    goto LAB_4a106324;
  }
  if ((int)param_2 < 0) {
    if (param_3 < 0) {
      if ((int)param_2 < param_3 * 2) {
LAB_4a106304:
        iVar1 = 2;
      }
      else {
        if (param_3 < (int)(param_2 * 2)) goto LAB_4a1062d4;
        iVar1 = 6;
      }
    }
    else {
      if (param_3 * -2 != param_2 && param_3 * 2 <= (int)uVar2) goto LAB_4a106304;
      if ((int)(param_2 * -2) < param_3) goto LAB_4a106320;
      iVar1 = 5;
    }
  }
  else if (param_3 < 0) {
    if (param_3 * -2 < (int)param_2) {
LAB_4a1062e4:
      iVar1 = 0;
    }
    else {
      if (param_2 * -2 != param_3 && (int)(param_2 * 2) <= iVar1) goto LAB_4a1062d4;
      iVar1 = 7;
    }
  }
  else {
    if (param_3 * 2 < (int)param_2) goto LAB_4a1062e4;
    if ((int)(param_2 * 2) < param_3) goto LAB_4a106320;
    iVar1 = 4;
  }
LAB_4a106324:
  if (*(int *)(param_1 + 0x50) == iVar1) {
    return;
  }
LAB_4a106330:
  *(int *)(param_1 + 0x50) = iVar1;
  return;
}



// Address: 4a106378

void FUN_4a106378(int param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined1 auStack_28 [20];
  
  puVar1 = PTR_DAT_4a1064c4;
  if ((*(uint *)(param_1 + 0x38) & 0x100) != 0) {
    puVar9 = (undefined4 *)0x0;
    if (*(int *)(param_1 + 0x8c) < 1) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      if (*(int *)(param_1 + 0x90) == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = *(int **)(*(int *)(param_1 + 0x90) + 8);
      }
      puVar2 = (undefined4 *)*piVar3;
    }
    FUN_4a09a3b4(PTR_DAT_4a1064c4,*puVar2,puVar2[1],0);
    uVar8 = 0xffffffff;
    if (*(int *)(puVar1 + 0xc) == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = *(int **)(*(int *)(puVar1 + 0xc) + 8);
    }
    iVar4 = *piVar3;
    if (iVar4 == 0) {
      uVar8 = 0x438;
    }
    else if (iVar4 == 1) {
      uVar8 = 0x439;
    }
    else if (iVar4 == 2) {
      uVar8 = 0x43a;
    }
    else if (iVar4 == 3) {
      uVar8 = 0x43b;
    }
    uVar5 = FUN_4a16bdcc(auStack_28,puVar1);
    if (*(int *)(param_1 + 0xa0) < 1) {
      uVar10 = 0;
    }
    else {
      if (*(int *)(param_1 + 0xa4) == 0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = *(undefined4 **)(*(int *)(param_1 + 0xa4) + 8);
      }
      uVar10 = *puVar2;
    }
    FUN_4a13edec(uVar10,uVar5,uVar8,1);
    FUN_4a16bef4(auStack_28);
    iVar4 = *(int *)(puVar1 + 0xc);
    if (iVar4 != 0) {
      iVar6 = *(int *)(iVar4 + 8);
    }
    else {
      iVar6 = 0;
    }
    if (iVar4 != 0) {
      iVar7 = *(int *)(iVar4 + 8);
      puVar9 = *(undefined4 **)(iVar4 + 8);
    }
    else {
      iVar7 = 0;
    }
    FUN_4a11753c(*(undefined4 *)(param_1 + 0x20),*puVar9,*(undefined4 *)(iVar7 + 4),
                 *(undefined4 *)(iVar6 + 8));
    return;
  }
  return;
}



// Address: 4a1064c8

/* WARNING: Removing unreachable block (ram,0x4a107aac) */
/* WARNING: Removing unreachable block (ram,0x4a107954) */
/* WARNING: Removing unreachable block (ram,0x4a10795c) */
/* WARNING: Removing unreachable block (ram,0x4a107968) */
/* WARNING: Removing unreachable block (ram,0x4a107c14) */
/* WARNING: Removing unreachable block (ram,0x4a107b04) */
/* WARNING: Removing unreachable block (ram,0x4a107b08) */
/* WARNING: Removing unreachable block (ram,0x4a107b0c) */
/* WARNING: Removing unreachable block (ram,0x4a107b10) */
/* WARNING: Removing unreachable block (ram,0x4a107b2c) */
/* WARNING: Removing unreachable block (ram,0x4a107bfc) */
/* WARNING: Removing unreachable block (ram,0x4a107bf0) */
/* WARNING: Removing unreachable block (ram,0x4a107bec) */
/* WARNING: Removing unreachable block (ram,0x4a107be8) */
/* WARNING: Removing unreachable block (ram,0x4a107bf4) */
/* WARNING: Removing unreachable block (ram,0x4a107bf8) */
/* WARNING: Removing unreachable block (ram,0x4a107a00) */
/* WARNING: Removing unreachable block (ram,0x4a1079fc) */
/* WARNING: Removing unreachable block (ram,0x4a107c8c) */
/* WARNING: Removing unreachable block (ram,0x4a107a80) */
/* WARNING: Removing unreachable block (ram,0x4a107b14) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1064c8(int param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStack_44 [20];
  undefined1 auStack_30 [16];
  
  FUN_4a11186c(*(undefined4 *)(param_1 + 0x20),0x19,param_2,param_1);
  iVar11 = (int)*(char *)(param_2 + 0x54);
  iVar13 = (int)*(char *)(param_2 + 0x55);
  if (iVar11 < 2) {
    iVar11 = 1;
  }
  iVar8 = *(int *)(param_2 + 0x44);
  iVar9 = *(int *)(param_2 + 0x4c);
  if (iVar13 < 2) {
    iVar13 = 1;
  }
  iVar10 = *(int *)(param_1 + 0x44);
  if (iVar10 < iVar8 - (iVar11 * 0x200000 + -0x100000)) {
    uVar3 = 1;
  }
  else if (iVar8 + 0x100000 < iVar10) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
  }
  iVar14 = *(int *)(param_1 + 0x4c);
  if (iVar14 < iVar9 - (iVar13 * 0x200000 + -0x100000)) {
    iVar6 = 1;
  }
  else if (iVar9 + 0x100000 < iVar14) {
    iVar6 = -1;
  }
  else {
    iVar6 = 0;
  }
  if (uVar3 == 0 && iVar6 == 0) {
    uVar3 = (iVar8 - (iVar11 * 0x200000 + -0x200000 >> 1)) - iVar10;
    iVar6 = (iVar9 - (iVar13 * 0x200000 + -0x200000 >> 1)) - iVar14;
  }
  uVar5 = -uVar3;
  if ((int)-uVar3 < (int)uVar3) {
    uVar5 = uVar3;
  }
  iVar11 = -iVar6;
  if (-iVar6 < iVar6) {
    iVar11 = iVar6;
  }
  if (iVar11 < (int)uVar5) {
    iVar11 = (uVar3 >> 0x1f) << 1;
  }
  else if (iVar6 < 0) {
    iVar11 = 3;
  }
  else {
    iVar11 = 1;
  }
  if (*(int *)(param_1 + 0x50) != iVar11) {
    *(int *)(param_1 + 0x50) = iVar11;
  }
  uVar3 = *(uint *)(param_1 + 0x50) + 2 & 3;
  if (*(uint *)(param_1 + 0x50) != uVar3) {
    *(uint *)(param_1 + 0x50) = uVar3;
  }
  iVar11 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                        *(undefined4 *)(param_1 + 0x28));
  iVar11 = (int)*(char *)(iVar11 + 8);
  if (iVar11 == 0x11) {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
    FUN_4a109ed4(param_1,0x104);
    puVar7 = (undefined4 *)0x0;
    if (*(int *)(param_1 + 0xa0) < 1) {
      uVar12 = 0;
    }
    else {
      if (*(int *)(param_1 + 0xa4) != 0) {
        puVar7 = *(undefined4 **)(*(int *)(param_1 + 0xa4) + 8);
      }
      uVar12 = *puVar7;
    }
    uVar4 = FUN_4a13eaec(uVar12,0x450);
    uVar12 = FUN_4a13eaec(uVar12,0x451);
    FUN_4a0b4608(uVar4,1);
    FUN_4a0b4608(uVar12,1);
  }
  else if (iVar11 < 0x12) {
    if (iVar11 != 0xb) {
      if (iVar11 < 0xc) {
        if (iVar11 == 3) {
          *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
          FUN_4a109ed4(param_1,0xf8);
        }
        else {
          if (iVar11 == 4) {
            switchD_4a11cc8c::default(0,PTR_s_invalid_state_for_basin_4a107d14);
            if (*(int *)(param_1 + 0xa0) < 2) {
              iVar11 = 0;
            }
            else {
              if (*(int *)(param_1 + 0xa4) == 0) {
                iVar11 = 0;
              }
              else {
                iVar11 = *(int *)(*(int *)(param_1 + 0xa4) + 8);
              }
              iVar11 = *(int *)(iVar11 + 4);
            }
            goto joined_r0x4a107c80;
          }
          if (iVar11 == 5) {
            *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
            FUN_4a1078a4(param_1,6);
            FUN_4a107e58(param_1,0x102);
          }
        }
      }
      else if ((iVar11 != 0xc) && (iVar11 == 0xf)) {
        FUN_4a108314(param_1,2);
      }
    }
  }
  else {
    switch(iVar11) {
    case 0x16:
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
      FUN_4a109ed4(param_1,0xfe);
      break;
    case 0x17:
      FUN_4a108858(param_1,2);
      break;
    case 0x19:
      switchD_4a11cc8c::default(0,PTR_s_invalid_state_for_shower_4a107d18);
      if (*(int *)(param_1 + 0xa0) < 2) {
        iVar11 = 0;
      }
      else {
        if (*(int *)(param_1 + 0xa4) == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = *(int *)(*(int *)(param_1 + 0xa4) + 8);
        }
        iVar11 = *(int *)(iVar11 + 4);
      }
joined_r0x4a107c80:
      if (iVar11 != 0) {
        FUN_4a0cb1ec();
      }
      break;
    case 0x1e:
      FUN_4a108be8(param_1,2);
      break;
    case 0x1f:
      FUN_4a107f78(param_1,2);
    }
  }
  *(undefined4 *)(param_1 + 0x3c) = 2;
  *(undefined4 *)(param_1 + 0x40) = 0;
  iVar11 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                        *(undefined4 *)(param_1 + 0x28));
  uVar3 = (uint)*(byte *)(iVar11 + 8);
  bVar15 = uVar3 != 0x1e;
  if (bVar15) {
    uVar3 = *(uint *)(param_1 + 0x28);
  }
  if (bVar15 && uVar3 != 0xc) {
    return;
  }
  if (*(int *)(param_1 + 0x2c) == -1) {
    return;
  }
  iVar11 = *(int *)(*(int *)(param_1 + 0x24) + 0x51c);
  uVar12 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
  uVar3 = 0;
  if ((*(int *)(param_1 + 0x28) == 0x80 || *(int *)(param_1 + 0x28) == 0xc) ||
     (iVar13 = FUN_4a143ac8(uVar12), *(char *)(iVar13 + 8) == '\x17')) {
    uVar3 = *(uint *)(param_1 + 0x3c);
  }
  else {
    iVar13 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                          *(undefined4 *)(param_1 + 0x28));
    if (((*(char *)(iVar13 + 8) == '\x14') ||
        (iVar13 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                               *(undefined4 *)(param_1 + 0x28)), *(char *)(iVar13 + 8) == '\x15'))
       && ((*(uint *)(param_1 + 0x38) & 0x200000) == 0)) {
      uVar3 = 0x20000000;
    }
  }
  uVar5 = *(uint *)(param_1 + 0x34);
  bVar15 = (uVar5 & 0x2000000) != 0;
  if (bVar15) {
    uVar5 = *(uint *)(param_1 + 0x38);
  }
  if (bVar15 && (uVar5 & 0x100) != 0) {
    uVar3 = uVar3 | 0x1000000;
  }
  iVar13 = FUN_4a142ef4(uVar12);
  if ((iVar13 == 0) && ((*(uint *)(param_1 + 0x34) & 0x2000000) != 0)) {
    uVar3 = uVar3 | (int)*(short *)(param_1 + 0x58);
  }
  uVar5 = *(uint *)(param_1 + 0x38);
  iVar13 = *(int *)(param_1 + 0x2c);
  if ((uVar5 & 0x8000) != 0) {
    uVar3 = uVar3 | 0x8000000;
  }
  if ((uVar5 & 0x4000) != 0) {
    uVar3 = uVar3 | 0x4000000;
  }
  if ((uVar5 & 0x10000) != 0) {
    uVar3 = uVar3 | 0x10000000;
  }
  sVar2 = FUN_4a142ef4(uVar12);
  switchD_4a11cc8c::default((iVar13 >> 0x1f) + 1,s_invalid_id_4a0d8628);
  iVar9 = iVar11 + 0x988;
  uVar1 = (ushort)iVar13 | sVar2 << 8;
  uVar12 = FUN_4a16c074(auStack_30,iVar9);
  iVar8 = FUN_4a16ff5c((int)(short)uVar1,uVar12,0);
  FUN_4a16c1a0(auStack_30);
  iVar13 = 0;
  if (uVar3 == 0) {
    if (iVar8 != -1) {
      uVar12 = FUN_4a16c074(auStack_44,iVar9);
      iVar8 = FUN_4a16ff5c((int)(short)uVar1,uVar12,0);
      FUN_4a16c1a0(auStack_44);
      if (iVar8 == -1) {
        return;
      }
      iVar9 = iVar13;
      if (*(int *)(iVar11 + 0x994) != 0) {
        iVar9 = *(int *)(*(int *)(iVar11 + 0x994) + 8);
      }
      *(undefined2 *)(iVar9 + iVar8 * 2) = 0xffff;
      iVar9 = iVar13;
      if (*(int *)(iVar11 + 0x9a8) != 0) {
        iVar9 = *(int *)(*(int *)(iVar11 + 0x9a8) + 8);
      }
      *(undefined4 *)(iVar9 + iVar8 * 4) = 0;
      if (*(int *)(iVar11 + 0x9bc) != 0) {
        iVar13 = *(int *)(*(int *)(iVar11 + 0x9bc) + 8);
      }
      *(undefined4 *)(iVar13 + iVar8 * 4) = 0;
      return;
    }
  }
  else if (iVar8 != -1) goto LAB_4a0d85dc;
  uVar12 = FUN_4a16c074(auStack_44,iVar9);
  iVar8 = FUN_4a16ff5c(0xffffffff,uVar12,0);
  FUN_4a16c1a0(auStack_44);
  switchD_4a11cc8c::default(iVar8 != -1,s_no_room_in_persistant_object_dat_4a0d8634);
LAB_4a0d85dc:
  if (*(int *)(iVar11 + 0x994) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(int *)(iVar11 + 0x994) + 8);
  }
  *(ushort *)(iVar9 + iVar8 * 2) = uVar1;
  if (*(int *)(iVar11 + 0x9a8) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(int *)(iVar11 + 0x9a8) + 8);
  }
  *(uint *)(iVar9 + iVar8 * 4) = uVar3;
  if (*(int *)(iVar11 + 0x9bc) != 0) {
    iVar13 = *(int *)(*(int *)(iVar11 + 0x9bc) + 8);
  }
  *(undefined4 *)(iVar13 + iVar8 * 4) = *(undefined4 *)(iVar11 + 0x78c);
  return;
}



// Address: 4a1065ec

void FUN_4a1065ec(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + 0x38) & 0x800) == 0) {
    if ((*(uint *)(param_1 + 0x38) & 0x1000) != 0) {
      param_2 = FUN_4a0d4b28(param_2 << 0x10,*(undefined4 *)PTR_DAT_4a1066ac);
      param_2 = param_2 >> 0x10;
    }
  }
  else {
    param_2 = FUN_4a0d4b28(param_2 << 0x10,*(undefined4 *)PTR_DAT_4a1066a8);
    param_2 = param_2 >> 0x10;
  }
  iVar1 = 0;
  if (*(int *)(param_1 + 0xa0) < 1) {
    return;
  }
  do {
    if (iVar1 < *(int *)(param_1 + 0xa0)) {
      if (*(int *)(param_1 + 0xa4) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(param_1 + 0xa4) + 8);
      }
      iVar2 = *(int *)(iVar2 + iVar1 * 4);
    }
    else {
      iVar2 = 0;
    }
    if (iVar2 != 0) {
      FUN_4a06f7a4(*(undefined4 *)(iVar2 + 0x34),param_2);
      FUN_4a06f7a4(*(undefined4 *)(iVar2 + 0x40),param_2);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < *(int *)(param_1 + 0xa0));
  return;
}



// Address: 4a1066b0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1066b0(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
  iVar2 = FUN_4a144cb0(uVar1,*(undefined4 *)(param_1 + 0x44));
  iVar3 = FUN_4a144cb8(uVar1,*(undefined4 *)(param_1 + 0x4c));
  if (((param_4 & 5) != 0) && (iVar7 = 0, 0 < param_2)) {
    do {
      iVar6 = 0;
      if (0 < param_3) {
        do {
          uVar4 = FUN_4a142f2c(uVar1,iVar2 - iVar7,iVar3 - iVar6);
          if ((uVar4 & 0x2000) == 0) {
            iVar5 = FUN_4a11febc(*(undefined4 *)(param_1 + 0x20),0xf,iVar2 - iVar7,0);
            *(int *)(iVar5 + 0x60) = param_1;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < param_3);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_2);
  }
  if ((param_4 & 10) != 0) {
    iVar7 = 0;
    if (0 < param_3) {
      do {
        iVar6 = 0;
        if (0 < param_2) {
          do {
            uVar4 = FUN_4a142f2c(uVar1,iVar2 - iVar7,iVar3 - iVar6);
            if ((uVar4 & 0x2000) == 0) {
              iVar5 = FUN_4a11febc(*(undefined4 *)(param_1 + 0x20),0xf,iVar2 - iVar7,0);
              *(int *)(iVar5 + 0x60) = param_1;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < param_2);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < param_3);
      return;
    }
    return;
  }
  return;
}



// Address: 4a106848

void FUN_4a106848(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined *local_2c [2];
  int local_24;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0xa0)) {
    do {
      iVar2 = *(int *)(param_1 + 0xa4);
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar2 + 8);
      }
      if (*(int *)(iVar4 + iVar5 * 4) != 0) {
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(iVar2 + 8);
        }
        FUN_4a0f1b30(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                     *(undefined4 *)(*(int *)(iVar2 + iVar5 * 4) + 0x30));
        if (*(int *)(param_1 + 0xa4) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(*(int *)(param_1 + 0xa4) + 8);
        }
        FUN_4a0cb1ec(*(undefined4 *)(iVar2 + iVar5 * 4));
        if (*(int *)(param_1 + 0xa4) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(*(int *)(param_1 + 0xa4) + 8);
        }
        piVar6 = *(int **)(iVar2 + iVar5 * 4);
        if ((piVar6 != (int *)0x0) && (iVar2 = (**(code **)(*piVar6 + 8))(piVar6), iVar2 != 0)) {
          (**(code **)(*piVar6 + 4))(piVar6);
        }
        if (*(int *)(param_1 + 0xa4) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(*(int *)(param_1 + 0xa4) + 8);
        }
        *(undefined4 *)(iVar2 + iVar5 * 4) = 0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0xa0));
  }
  puVar3 = (undefined4 *)FUN_4a0c6bc0(local_2c);
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar1 = PTR_PTR_4a1069c8;
  *puVar3 = PTR_PTR_4a1069c8;
  uVar7 = puVar3[2];
  uVar8 = puVar3[3];
  (**(code **)(*(int *)(param_1 + 0x98) + 0x1c))((int *)(param_1 + 0x98));
  *(undefined4 *)(param_1 + 0xa0) = uVar7;
  *(undefined4 *)(param_1 + 0xa4) = uVar8;
  local_2c[0] = puVar1;
  iVar5 = FUN_4a0bcc84(local_2c);
  if (iVar5 != 0) {
    iVar2 = 0;
    if (0 < local_24) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < local_24);
      if (iVar5 == 0) goto LAB_4a1069ac;
    }
    FUN_4a14f21c();
  }
LAB_4a1069ac:
  FUN_4a0c6bf4(local_2c);
  FUN_4a107318(param_1);
  return;
}



// Address: 4a1069cc

void FUN_4a1069cc(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
  iVar3 = FUN_4a143ac8(uVar6,*(undefined4 *)(param_1 + 0x28));
  cVar1 = *(char *)(iVar3 + 0x1e);
  iVar3 = FUN_4a143ac8(uVar6,*(undefined4 *)(param_1 + 0x28));
  cVar2 = *(char *)(iVar3 + 0x1f);
  uVar4 = FUN_4a144cb0(uVar6,*(undefined4 *)(param_1 + 0x44));
  uVar5 = FUN_4a144cb8(uVar6,*(undefined4 *)(param_1 + 0x4c));
  FUN_4a143330(uVar6,uVar4,uVar5,(int)cVar1,(int)cVar2,*(undefined4 *)(param_1 + 0x50));
  return;
}



// Address: 4a106a48

undefined4 FUN_4a106a48(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 unaff_r4;
  int iVar5;
  int iVar6;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  
  piVar4 = (int *)0x0;
  if (*(int *)(param_1 + 0xa0) < 1) {
    iVar5 = 0;
  }
  else {
    if (*(int *)(param_1 + 0xa4) != 0) {
      piVar4 = *(int **)(*(int *)(param_1 + 0xa4) + 8);
    }
    iVar5 = *piVar4;
  }
  FUN_4a06f8b0(*(undefined4 *)(iVar5 + 0x34));
  uVar2 = FUN_4a171fac();
  FUN_4a17211c(uVar2,param_2);
  iVar3 = FUN_4a171e1c();
  iVar5 = *(int *)(iVar5 + 0x34);
  iVar3 = iVar3 + *(int *)(iVar5 + 0x18);
  *(int *)(iVar5 + 0x14) = iVar3;
  piVar4 = *(int **)(iVar5 + 0x28);
  if (piVar4 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar4 + 0x30))(piVar4);
    iVar5 = 0;
    if (piVar4[2] != 0) {
      iVar5 = *(int *)(piVar4[2] + 0x10);
    }
    while (iVar5 = iVar5 + -1, -1 < iVar5) {
      iVar6 = *(int *)(*(int *)(piVar4[2] + 0x14) + iVar5 * 4);
      if ((*(uint *)(*(int *)(iVar6 + 0x2c) + 0x30) & 0x60000000) != 0) {
        uVar1 = FUN_4a1395b4(iVar6,iVar3);
        (**(code **)(*piVar4 + 0x1c))
                  (piVar4,*(undefined4 *)(iVar6 + 0x30),uVar1,*(code **)(*piVar4 + 0x1c),unaff_r4,
                   unaff_r5,unaff_r6);
      }
    }
    (**(code **)(*piVar4 + 0x24))(piVar4,iVar3);
    return uVar2;
  }
  return 0;
}



// Address: 4a106a9c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a106a9c(int *param_1,int param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  int *piVar15;
  undefined *local_4c [2];
  int local_44;
  int local_40;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined *local_28;
  
  local_2c = *(undefined4 *)(param_1[9] + 0x520);
  iVar3 = FUN_4a143ac8(local_2c,param_1[10]);
  iVar3 = (int)*(char *)(iVar3 + 0x1e);
  iVar4 = FUN_4a143ac8(local_2c,param_1[10]);
  local_30 = (int)*(char *)(iVar4 + 0x1f);
  iVar13 = local_30;
  iVar4 = iVar3;
  if (param_1[0x14] == 1 || param_1[0x14] == 3) {
    iVar13 = iVar3;
    iVar4 = local_30;
  }
  *(char *)(param_1 + 0x15) = (char)iVar4;
  *(char *)((int)param_1 + 0x55) = (char)iVar13;
  piVar15 = (int *)0x0;
  if ((param_1[0xd] & 0x100010U) != 0) goto LAB_4a106dd0;
  uVar12 = 0xffff;
  if ((param_1[0xd] & 8U) == 0) {
    iVar6 = FUN_4a143ac8(*(undefined4 *)(param_1[9] + 0x520),param_1[10]);
    if (*(char *)(iVar6 + 8) == '\x0f') {
      if (param_2 == 0) {
        uVar12 = 0xffff7fbf;
        goto LAB_4a106b6c;
      }
      uVar14 = 0x8040;
    }
    else if ((param_1[0xd] & 0x20U) == 0) {
      if (param_2 == 0) {
        uVar12 = 0xffffefff;
        goto LAB_4a106b6c;
      }
      uVar14 = 0x1000;
    }
    else if (param_2 == 0) {
      uVar12 = 0xffff7fff;
LAB_4a106b6c:
      uVar14 = 0;
    }
    else {
      uVar14 = 0x8000;
    }
  }
  else {
    if (param_2 == 0) {
      uVar12 = 0xffffdfff;
      goto LAB_4a106b6c;
    }
    uVar14 = 0x2000;
  }
  local_34 = FUN_4a144cb0(local_2c,param_1[0x11]);
  local_38 = FUN_4a144cb8(local_2c,param_1[0x13]);
  FUN_4a0f10a8(local_2c,(local_34 - iVar4) + 1,(local_38 - iVar13) + 1,iVar4,iVar13,uVar12,uVar14);
  piVar5 = (int *)FUN_4a0c6bc0(local_4c);
  local_28 = PTR_PTR_4a106fc8;
  piVar5[2] = 0;
  piVar5[3] = 0;
  *piVar5 = (int)local_28;
  iVar6 = FUN_4a15e080(4);
  if (iVar6 == 0) {
    iVar6 = FUN_4a1669a8();
  }
  iVar7 = 0;
  do {
    *(undefined1 *)(iVar6 + iVar7) = 0;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  thunk_FUN_4a161570(0x18,4);
  puVar8 = (undefined4 *)FUN_4a0c0628();
  puVar2 = PTR_PTR_4a106fcc;
  *puVar8 = PTR_PTR_4a106fcc;
  puVar8[3] = 1;
  puVar8[4] = 4;
  puVar8[2] = iVar6;
  *(undefined1 *)(puVar8 + 5) = 1;
  if (puVar8 != (undefined4 *)0x0) {
    (**(code **)(puVar2 + 0xc))(puVar8);
  }
  (**(code **)(*piVar5 + 0x1c))(piVar5);
  piVar5[2] = 4;
  piVar5[3] = (int)puVar8;
  iVar6 = 0;
  FUN_4a143244(local_2c,local_34,local_38,iVar4,iVar13,param_1[0x14],local_4c);
  if (param_1[0x28] < 1) {
    iVar7 = 0;
  }
  else {
    if (param_1[0x29] == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = *(int **)(param_1[0x29] + 8);
    }
    iVar7 = *piVar5;
  }
  if (iVar7 != 0) {
    if (local_40 == 0) {
      puVar9 = (undefined1 *)0x0;
    }
    else {
      puVar9 = *(undefined1 **)(local_40 + 8);
    }
    FUN_4a0cb0f4(iVar7,0x7d1,*puVar9);
    if (local_40 == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = *(int *)(local_40 + 8);
    }
    FUN_4a0cb0f4(iVar7,0x7d2,*(undefined1 *)(iVar10 + 2));
    if (local_40 == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = *(int *)(local_40 + 8);
    }
    FUN_4a0cb0f4(iVar7,0x7d3,*(undefined1 *)(iVar10 + 1));
    if (local_40 != 0) {
      iVar6 = *(int *)(local_40 + 8);
    }
    FUN_4a0cb0f4(iVar7,0x7d4,*(undefined1 *)(iVar6 + 3));
  }
  local_4c[0] = local_28;
  iVar6 = FUN_4a0bcc84(local_4c);
  if (iVar6 != 0) {
    iVar7 = 0;
    if (0 < local_44) {
      do {
        iVar7 = iVar7 + 1;
      } while (iVar7 < local_44);
      if (iVar6 == 0) goto LAB_4a106dc8;
    }
    FUN_4a14f21c(iVar6);
  }
LAB_4a106dc8:
  FUN_4a0c6bf4(local_4c);
LAB_4a106dd0:
  if ((param_1[0xd] & 0x200000U) != 0) {
    if (param_1[0x28] < 1) {
      iVar6 = 0;
    }
    else {
      if (param_1[0x29] != 0) {
        piVar15 = *(int **)(param_1[0x29] + 8);
      }
      iVar6 = *piVar15;
    }
    if (iVar6 != 0) {
      local_34 = *(int *)(param_1[9] + 0x520);
      iVar7 = FUN_4a143ac8(local_34,param_1[10]);
      local_38 = (int)*(char *)(iVar7 + 0x1e);
      iVar7 = FUN_4a143ac8(local_34,param_1[10]);
      cVar1 = *(char *)(iVar7 + 0x1f);
      uVar12 = FUN_4a144cb0(local_34,param_1[0x11]);
      uVar14 = FUN_4a144cb8(local_34,param_1[0x13]);
      iVar7 = FUN_4a143330(local_34,uVar12,uVar14,local_38,(int)cVar1,param_1[0x14]);
      if (iVar7 == 0) {
        iVar7 = FUN_4a143ac8(*(undefined4 *)(param_1[9] + 0x520),param_1[10]);
        if ((*(char *)(iVar7 + 8) == '\x14') ||
           (iVar7 = FUN_4a143ac8(*(undefined4 *)(param_1[9] + 0x520),param_1[10]),
           *(char *)(iVar7 + 8) == '\x15')) {
          iVar7 = FUN_4a143ac8(*(undefined4 *)(param_1[9] + 0x520),param_1[10]);
          cVar1 = *(char *)(iVar7 + 8);
          uVar11 = param_1[0xe];
          if (cVar1 == '\x14' || cVar1 == '\x15') {
            uVar11 = uVar11 & 0xffdfffff;
            param_1[0xe] = uVar11;
          }
          if (((uVar11 & 0x40) != 0) && (cVar1 == '\x1a')) {
            FUN_4a1164e8(param_1[8]);
          }
          FUN_4a109fa8(param_1,0);
        }
        FUN_4a0ca3fc(iVar6,0x453);
      }
      else {
        iVar7 = FUN_4a143ac8(*(undefined4 *)(param_1[9] + 0x520),param_1[10]);
        if ((*(char *)(iVar7 + 8) == '\x14') ||
           (iVar7 = FUN_4a143ac8(*(undefined4 *)(param_1[9] + 0x520),param_1[10]),
           *(char *)(iVar7 + 8) == '\x15')) {
          if ((param_1[0xe] & 0x40U) == 0) {
            uVar12 = 0x44d;
          }
          else {
            uVar12 = 0x44c;
          }
          FUN_4a0ca3fc(iVar6,uVar12);
        }
        else {
          FUN_4a0ca3fc(iVar6,0x454);
        }
      }
    }
  }
  if (param_2 != 0) {
    if (iVar3 < 2) {
      iVar3 = local_30;
    }
    if (1 < iVar3) {
      param_1[0x2b] = -((iVar4 + -1) * 0x200000 >> 1);
      param_1[0x2c] = -((iVar13 + -1) * 0x200000 >> 1);
    }
                    /* WARNING: Could not recover jumptable at 0x4a106fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1);
    return;
  }
  return;
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



// Address: 4a107058

undefined4 FUN_4a107058(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined *local_30 [2];
  int local_28;
  int *local_24;
  
  iVar7 = 0;
  if (param_2 < *(int *)(param_1 + 0xa0)) goto LAB_4a107158;
  FUN_4a169e14(local_30,param_2 + 1);
  iVar2 = local_28;
  iVar5 = *(int *)(param_1 + 0xa0);
  iVar1 = 0;
  if (0 < iVar5) {
    do {
      iVar6 = 0;
      if (*(int *)(param_1 + 0xa4) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(param_1 + 0xa4) + 8);
      }
      if (local_24 != (int *)0x0) {
        iVar6 = local_24[2];
      }
      *(undefined4 *)(iVar6 + iVar1 * 4) = *(undefined4 *)(iVar4 + iVar1 * 4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar5);
  }
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 0xc))(local_24);
  }
  (**(code **)(*(int *)(param_1 + 0x98) + 0x1c))((int *)(param_1 + 0x98));
  *(int *)(param_1 + 0xa0) = iVar2;
  *(int **)(param_1 + 0xa4) = local_24;
  local_30[0] = PTR_PTR_4a1071dc;
  iVar2 = FUN_4a0bcc84(local_30);
  if (iVar2 != 0) {
    iVar1 = 0;
    if (0 < local_28) {
      do {
        iVar1 = iVar1 + 1;
      } while (iVar1 < local_28);
      if (iVar2 == 0) goto LAB_4a107150;
    }
    FUN_4a14f21c();
  }
LAB_4a107150:
  FUN_4a0c6bf4(local_30);
LAB_4a107158:
  if (*(int *)(param_1 + 0xa4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0xa4) + 8);
  }
  if (*(int *)(iVar2 + param_2 * 4) == 0) {
    thunk_FUN_4a161570(0x8c);
    piVar3 = (int *)FUN_4a0cb3f4();
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0xc))(piVar3);
    }
    FUN_4a0efadc(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),piVar3[0xc]);
    if (*(int *)(param_1 + 0xa4) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0xa4) + 8);
    }
    *(int **)(iVar2 + param_2 * 4) = piVar3;
  }
  if (*(int *)(param_1 + 0xa4) != 0) {
    iVar7 = *(int *)(*(int *)(param_1 + 0xa4) + 8);
  }
  return *(undefined4 *)(iVar7 + param_2 * 4);
}



// Address: 4a1071e0

void FUN_4a1071e0(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x38) = param_2 | *(uint *)(param_1 + 0x38);
  return;
}



// Address: 4a1071f0

void FUN_4a1071f0(int param_1,uint param_2,int param_3)

{
  if (param_3 == 0) {
    param_2 = *(uint *)(param_1 + 0x38) & ~param_2;
  }
  else {
    param_2 = param_2 | *(uint *)(param_1 + 0x38);
  }
  *(uint *)(param_1 + 0x38) = param_2;
  return;
}



// Address: 4a107248

void FUN_4a107248(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  *(undefined4 *)(param_1 + 0x6c) = param_2;
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
  if (bVar6 && uVar1 == 9) {
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
    *puVar3 = 9;
    if ((puVar3[3] & 8) == 0) {
      puVar3[1] = 0;
    }
    else {
      iVar2 = FUN_4a099c5c(9);
      puVar3[1] = iVar2 - 1;
    }
    puVar3[2] = 0;
  }
  puVar3[3] = uVar4 & 4 | 3;
  return;
}



// Address: 4a107254

undefined4 FUN_4a107254(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((*(uint *)(param_1 + 0x34) & 0x800000) != 0) {
    return 1;
  }
  if ((*(uint *)(param_1 + 0x34) & 0x1000000) == 0) {
    if (*(int *)(param_1 + 100) == 0) {
      *(undefined4 *)(param_1 + 100) = 0xffffffff;
      return 1;
    }
  }
  else {
    uVar1 = 1 << (param_2 & 0xff);
    if ((*(uint *)(param_1 + 100) & uVar1) == 0) {
      *(uint *)(param_1 + 100) = uVar1 | *(uint *)(param_1 + 100);
      return 1;
    }
  }
  return 0;
}



// Address: 4a1072b0

void FUN_4a1072b0(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((*(uint *)(param_1 + 0x34) & 0x1000000) != 0) {
    uVar1 = 1 << (param_2 & 0xff);
    switchD_4a11cc8c::default
              ((*(uint *)(param_1 + 100) & uVar1) != 0,s_releasing_already_unoccupied_fla_4a1072f4);
    uVar1 = *(uint *)(param_1 + 100) & ~uVar1;
  }
  *(uint *)(param_1 + 100) = uVar1;
  return;
}



// Address: 4a107318

void FUN_4a107318(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x78) < 1) {
    return;
  }
  do {
    iVar1 = *(int *)(param_1 + 0x7c);
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar1 + 8);
    }
    if (*(int *)(iVar2 + iVar3 * 4) != 0) {
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(iVar1 + 8);
      }
      FUN_4a077998(*(undefined4 *)(*(int *)(iVar1 + iVar3 * 4) + 0x30));
      if (*(int *)(param_1 + 0x7c) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0x7c) + 8);
      }
      FUN_4a0cb1ec(*(undefined4 *)(iVar1 + iVar3 * 4));
      if (*(int *)(param_1 + 0x7c) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0x7c) + 8);
      }
      piVar4 = *(int **)(iVar1 + iVar3 * 4);
      if ((piVar4 != (int *)0x0) && (iVar1 = (**(code **)(*piVar4 + 8))(piVar4), iVar1 != 0)) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      if (*(int *)(param_1 + 0x7c) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0x7c) + 8);
      }
      *(undefined4 *)(iVar1 + iVar3 * 4) = 0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < *(int *)(param_1 + 0x78));
  return;
}



// Address: 4a1073fc

/* WARNING: Removing unreachable block (ram,0x4a06f994) */
/* WARNING: Removing unreachable block (ram,0x4a06fa48) */
/* WARNING: Removing unreachable block (ram,0x4a06fa58) */
/* WARNING: Removing unreachable block (ram,0x4a06fa60) */
/* WARNING: Removing unreachable block (ram,0x4a06fa64) */
/* WARNING: Removing unreachable block (ram,0x4a06f9a0) */
/* WARNING: Removing unreachable block (ram,0x4a06fa18) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff0 : 0x4a06fa34 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_4a1073fc(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int in_r12;
  bool bVar11;
  undefined *local_30 [2];
  int local_28;
  
  puVar9 = (undefined4 *)0x0;
  if (*(int *)(param_1 + 0x78) != 0) goto LAB_4a1074d4;
  FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),*(undefined4 *)(param_1 + 0x28));
  iVar2 = FUN_4a169e14(local_30,6);
  uVar10 = *(undefined4 *)(iVar2 + 8);
  piVar8 = *(int **)(iVar2 + 0xc);
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0xc))(piVar8);
  }
  (**(code **)(*(int *)(param_1 + 0x70) + 0x1c))((int *)(param_1 + 0x70));
  *(undefined4 *)(param_1 + 0x78) = uVar10;
  *(int **)(param_1 + 0x7c) = piVar8;
  local_30[0] = PTR_PTR_4a107640;
  iVar2 = FUN_4a0bcc84(local_30);
  if (iVar2 != 0) {
    iVar5 = 0;
    if (0 < local_28) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_28);
      if (iVar2 == 0) goto LAB_4a1074cc;
    }
    FUN_4a14f21c();
  }
LAB_4a1074cc:
  FUN_4a0c6bf4(local_30);
LAB_4a1074d4:
  if (*(int *)(param_1 + 0x78) <= param_2) {
    return *(int *)(param_1 + 0x78);
  }
  puVar3 = puVar9;
  if (*(int *)(param_1 + 0x7c) != 0) {
    puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x7c) + 8);
  }
  piVar8 = (int *)puVar3[param_2];
  if (piVar8 == (int *)0x0) {
    thunk_FUN_4a161570(0x8c);
    piVar8 = (int *)FUN_4a0cb3f4();
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 0xc))(piVar8);
    }
    puVar3 = puVar9;
    if (*(int *)(param_1 + 0x7c) != 0) {
      puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x7c) + 8);
    }
    puVar3[param_2] = piVar8;
    switch(*(undefined4 *)(param_1 + 0x28)) {
    case 0x19:
      uVar10 = 0xc;
      break;
    case 0x1a:
      uVar10 = 0xe;
      break;
    case 0x1b:
      uVar10 = 0x10;
      break;
    case 0x1c:
      uVar10 = 0xd;
      break;
    case 0x1d:
      uVar10 = 0xf;
      break;
    default:
      switchD_4a11cc8c::default(0,PTR_s_invalid_plant_type_4a107644);
      uVar10 = 0xffffffff;
    }
    FUN_4a0ca898(piVar8,uVar10);
    FUN_4a0cb3ec(piVar8,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x24) + 0x520) + 0x454));
    if (*(int *)(param_1 + 0xa0) < 1) {
      uVar10 = 0;
    }
    else {
      if (*(int *)(param_1 + 0xa4) != 0) {
        puVar9 = *(undefined4 **)(*(int *)(param_1 + 0xa4) + 8);
      }
      uVar10 = *puVar9;
    }
    FUN_4a13eaec(uVar10,*(undefined4 *)(PTR_DAT_4a107648 + param_2 * 4));
    uVar10 = FUN_4a165910();
    FUN_4a0b4c10(uVar10,piVar8[0xc]);
  }
  iVar5 = 0xf3;
  iVar2 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                       *(undefined4 *)(param_1 + 0x28));
  if ((*(uint *)(iVar2 + 0x14) & 0x20000) != 0) {
    if (*(int *)(param_1 + 0x3c) == 1) {
      iVar5 = 0xf6;
    }
    else {
      iVar5 = 0xf5;
    }
  }
  iVar4 = piVar8[0xd];
  uVar7 = *(uint *)(iVar4 + 0x24);
  bVar11 = (uVar7 & 1) != 0;
  iVar2 = 0;
  if (bVar11) {
    in_r12 = *(int *)(iVar4 + 8);
    iVar2 = *(int *)(in_r12 + 8);
  }
  if (!bVar11 || iVar2 <= iVar5) {
    return iVar4;
  }
  *(int *)(iVar4 + 0xc) = (int)(short)iVar5;
  iVar2 = 0;
  if (*(int *)(in_r12 + 0xc) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(in_r12 + 0xc) + 8);
  }
  if (*(int *)(in_r12 + 0x20) != 0) {
    iVar2 = *(int *)(*(int *)(in_r12 + 0x20) + 8);
  }
  iVar6 = *(int *)(iVar4 + 0x10) * (int)*(short *)(iVar6 + iVar5 * 2);
  iVar2 = (int)*(short *)(iVar2 + iVar5 * 2) * *(int *)(iVar4 + 0x10);
  *(int *)(iVar4 + 0x18) = iVar6;
  *(int *)(iVar4 + 0x1c) = iVar2;
  if ((uVar7 & 8) == 0) {
    *(int *)(iVar4 + 0x14) = iVar6;
  }
  else {
    *(int *)(iVar4 + 0x14) = iVar2;
  }
  *(uint *)(iVar4 + 0x24) = uVar7 & 8 | 3;
  piVar8 = *(int **)(iVar4 + 0x28);
  if (piVar8 != (int *)0x0) {
    uVar10 = *(undefined4 *)(iVar4 + 0x14);
    iVar5 = (**(code **)(*piVar8 + 0x30))(piVar8);
    iVar2 = 0;
    if (piVar8[2] != 0) {
      iVar2 = *(int *)(piVar8[2] + 0x10);
    }
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      iVar4 = *(int *)(*(int *)(piVar8[2] + 0x14) + iVar2 * 4);
      if ((*(uint *)(*(int *)(iVar4 + 0x2c) + 0x30) & 0x60000000) != 0) {
        uVar1 = FUN_4a1395b4(iVar4,uVar10);
        (**(code **)(*piVar8 + 0x1c))(piVar8,*(undefined4 *)(iVar4 + 0x30),uVar1);
      }
    }
    (**(code **)(*piVar8 + 0x24))(piVar8,uVar10);
    return iVar5;
  }
  return iVar4;
}



// Address: 4a10764c

undefined4 FUN_4a10764c(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                       *(undefined4 *)(param_1 + 0x28));
  if (*(char *)(iVar1 + 8) == '\x1e') {
    if (param_2 == 0x9f) {
      FUN_4a1078e8(param_1,0);
    }
  }
  else if (*(int *)(param_1 + 0x28) == 0xc) {
    if (param_2 == 0xa0) {
      if (*(int *)(param_1 + 0x2c) != -1) {
        FUN_4a0ee9f8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520));
      }
      FUN_4a109858(param_1);
    }
  }
  else {
    iVar1 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520));
    if (*(char *)(iVar1 + 8) == '\x0f') {
      if (param_2 == 0xa3 || param_2 == 0xa1) {
        if (*(int *)(param_1 + 0x3c) != 1 && *(int *)(param_1 + 0x3c) != 2) {
          FUN_4a1078e8(param_1,2);
        }
        if (*(int *)(param_3 + 0x2c) != 0) {
          return 0;
        }
        iVar1 = FUN_4a142ef4(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520));
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = FUN_4a141248(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x51c),0,1);
        if (iVar1 != 0) {
          return 0;
        }
        uVar2 = *(undefined4 *)(param_1 + 0x20);
        uVar3 = 0x1b;
      }
      else {
        iVar1 = 0xf;
        if (param_2 == 0xa2) {
          iVar1 = *(int *)(param_3 + 0x2c);
        }
        if (param_2 != 0xa2 || iVar1 != 0) {
          return 0;
        }
        uVar2 = *(undefined4 *)(param_1 + 0x20);
        uVar3 = 0x1c;
      }
      FUN_4a11186c(uVar2,uVar3,param_3,param_1);
    }
    else {
      iVar1 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                           *(undefined4 *)(param_1 + 0x28));
      if (*(char *)(iVar1 + 8) == '\x17' && param_2 == 0x75) {
        *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x10000;
        FUN_4a146240(param_1);
      }
    }
  }
  return 0;
}



// Address: 4a1077b8

void FUN_4a1077b8(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar5 = (int)*(char *)(param_2 + 0x54);
  iVar6 = (int)*(char *)(param_2 + 0x55);
  if (iVar5 < 2) {
    iVar5 = 1;
  }
  iVar3 = *(int *)(param_2 + 0x44);
  iVar7 = *(int *)(param_2 + 0x4c);
  if (iVar6 < 2) {
    iVar6 = 1;
  }
  iVar8 = *(int *)(param_1 + 0x44);
  if (iVar8 < iVar3 - (iVar5 * 0x200000 + -0x100000)) {
    uVar1 = 1;
  }
  else if (iVar3 + 0x100000 < iVar8) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  iVar9 = *(int *)(param_1 + 0x4c);
  if (iVar9 < iVar7 - (iVar6 * 0x200000 + -0x100000)) {
    iVar2 = 1;
  }
  else if (iVar7 + 0x100000 < iVar9) {
    iVar2 = -1;
  }
  else {
    iVar2 = 0;
  }
  if (uVar1 == 0 && iVar2 == 0) {
    uVar1 = (iVar3 - (iVar5 * 0x200000 + -0x200000 >> 1)) - iVar8;
    iVar2 = (iVar7 - (iVar6 * 0x200000 + -0x200000 >> 1)) - iVar9;
  }
  uVar4 = -uVar1;
  if ((int)-uVar1 < (int)uVar1) {
    uVar4 = uVar1;
  }
  iVar5 = -iVar2;
  if (-iVar2 < iVar2) {
    iVar5 = iVar2;
  }
  if (iVar5 < (int)uVar4) {
    iVar5 = (uVar1 >> 0x1f) << 1;
  }
  else if (iVar2 < 0) {
    iVar5 = 3;
  }
  else {
    iVar5 = 1;
  }
  if (*(int *)(param_1 + 0x50) != iVar5) {
    *(int *)(param_1 + 0x50) = iVar5;
  }
  return;
}



// Address: 4a1078a4

void FUN_4a1078a4(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)0x0;
  if (param_1[0x28] < 1) {
    uVar1 = 0;
  }
  else {
    if (param_1[0x29] != 0) {
      puVar2 = *(undefined4 **)(param_1[0x29] + 8);
    }
    uVar1 = *puVar2;
  }
  FUN_4a0ca9e0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x4a1078e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1);
  return;
}



// Address: 4a1078e8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1078e8(int param_1,int param_2)

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
  undefined4 uVar12;
  bool bVar13;
  undefined1 auStack_44 [20];
  undefined1 auStack_30 [16];
  
  iVar4 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                       *(undefined4 *)(param_1 + 0x28));
  iVar4 = (int)*(char *)(iVar4 + 8);
  if (iVar4 == 0x11) {
    uVar11 = 1;
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
    if (param_2 == 0) {
      uVar11 = 0;
      FUN_4a109ed4(param_1,0x105);
      FUN_4a1061f0(param_1);
    }
    else if (param_2 == 1) {
      FUN_4a109ed4(param_1,0x104);
      FUN_4a1061f0(param_1);
    }
    else if (param_2 == 2) {
      FUN_4a109ed4(param_1,0x104);
    }
    else if (param_2 == 3) {
      FUN_4a109ed4(param_1,0x105);
    }
    puVar10 = (undefined4 *)0x0;
    if (*(int *)(param_1 + 0xa0) < 1) {
      uVar12 = 0;
    }
    else {
      if (*(int *)(param_1 + 0xa4) != 0) {
        puVar10 = *(undefined4 **)(*(int *)(param_1 + 0xa4) + 8);
      }
      uVar12 = *puVar10;
    }
    uVar5 = FUN_4a13eaec(uVar12,0x450);
    uVar12 = FUN_4a13eaec(uVar12,0x451);
    FUN_4a0b4608(uVar5,uVar11);
    FUN_4a0b4608(uVar12,uVar11);
  }
  else if (iVar4 < 0x12) {
    if (iVar4 != 0xb) {
      if (iVar4 < 0xc) {
        if (iVar4 == 3) {
          *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
          FUN_4a109ed4(param_1,0xf8);
          if ((param_2 != 0) && (param_2 == 1)) {
            FUN_4a1061f0(param_1);
          }
        }
        else {
          if (iVar4 == 4) {
            if (param_2 != 0) {
              if (param_2 == 1) goto LAB_4a107c8c;
              switchD_4a11cc8c::default(0,PTR_s_invalid_state_for_basin_4a107d14);
            }
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
            if (param_2 == 0) {
LAB_4a107968:
              *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
              FUN_4a1078a4(param_1,0xffffffff);
            }
            else if (param_2 == 1) {
              *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x80;
              FUN_4a1078a4(param_1,6);
              FUN_4a107e58(param_1,0x101);
            }
            else if (param_2 == 2) {
              *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
              FUN_4a1078a4(param_1,6);
              FUN_4a107e58(param_1,0x102);
            }
            else {
              if (param_2 != 3) {
                switchD_4a11cc8c::default(0,PTR_s_invalid_state_for_bath_4a107d10);
                goto LAB_4a107968;
              }
              *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
              FUN_4a1078a4(param_1,6);
              FUN_4a107e58(param_1,0x103);
            }
          }
        }
      }
      else if ((iVar4 != 0xc) && (iVar4 == 0xf)) {
        FUN_4a108314(param_1,param_2);
      }
    }
  }
  else {
    switch(iVar4) {
    case 0x16:
      uVar6 = *(uint *)(param_1 + 0x38) & 0xffffff7f;
      *(uint *)(param_1 + 0x38) = uVar6;
      if (param_2 == 0) {
        FUN_4a109ed4(param_1,0xff);
        FUN_4a1061f0(param_1);
      }
      else if (param_2 == 1) {
        *(uint *)(param_1 + 0x38) = uVar6 | 0x80;
        FUN_4a109ed4(param_1,0x100);
      }
      else if (param_2 == 2) {
        FUN_4a109ed4(param_1,0xfe);
      }
      else if (param_2 == 3) {
        FUN_4a109ed4(param_1,0xff);
      }
      break;
    case 0x17:
      FUN_4a108858(param_1,param_2);
      break;
    case 0x19:
      if (param_2 != 0) {
        if (param_2 == 1) {
LAB_4a107c8c:
          iVar4 = FUN_4a107058(param_1,1);
          FUN_4a0ca898(iVar4,8);
          FUN_4a06f95c(*(undefined4 *)(iVar4 + 0x34),0xf9,0x14);
          break;
        }
        switchD_4a11cc8c::default(0,PTR_s_invalid_state_for_shower_4a107d18);
      }
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
      FUN_4a108be8(param_1,param_2);
      break;
    case 0x1f:
      FUN_4a107f78(param_1,param_2);
    }
  }
  *(int *)(param_1 + 0x3c) = param_2;
  *(undefined4 *)(param_1 + 0x40) = 0;
  iVar4 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                       *(undefined4 *)(param_1 + 0x28));
  uVar6 = (uint)*(byte *)(iVar4 + 8);
  bVar13 = uVar6 != 0x1e;
  if (bVar13) {
    uVar6 = *(uint *)(param_1 + 0x28);
  }
  if (bVar13 && uVar6 != 0xc) {
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
  bVar13 = (uVar8 & 0x2000000) != 0;
  if (bVar13) {
    uVar8 = *(uint *)(param_1 + 0x38);
  }
  if (bVar13 && (uVar8 & 0x100) != 0) {
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



// Address: 4a107d1c

undefined4 FUN_4a107d1c(int param_1,int param_2)

{
  if (param_2 == 0) {
    if (param_1 < 0) {
      return 2;
    }
  }
  else {
    if (param_1 == 0) {
      if (param_2 < 0) {
        return 3;
      }
      return 1;
    }
    if (param_1 < 0) {
      if (param_2 < 0) {
        if (param_2 * 2 <= param_1) {
          if (param_2 < param_1 * 2) {
            return 3;
          }
          return 6;
        }
      }
      else if (param_2 * -2 == param_1 || -param_1 < param_2 * 2) {
        if (param_1 * -2 < param_2) {
          return 1;
        }
        return 5;
      }
      return 2;
    }
    if (param_2 < 0) {
      if (param_1 <= param_2 * -2) {
        if (param_1 * -2 != param_2 && param_1 * 2 <= -param_2) {
          return 3;
        }
        return 7;
      }
    }
    else if (param_1 <= param_2 * 2) {
      if (param_1 * 2 < param_2) {
        return 1;
      }
      return 4;
    }
  }
  return 0;
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



// Address: 4a107e58

/* WARNING: Removing unreachable block (ram,0x4a06f9a0) */
/* WARNING: Removing unreachable block (ram,0x4a06fa48) */
/* WARNING: Removing unreachable block (ram,0x4a06fa58) */
/* WARNING: Removing unreachable block (ram,0x4a06fa60) */
/* WARNING: Removing unreachable block (ram,0x4a06fa64) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff0 : 0x4a06fa34 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_4a107e58(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  undefined4 *puVar10;
  int in_r12;
  bool bVar11;
  
  puVar10 = (undefined4 *)0x0;
  if (0 < *(int *)(param_1 + 0xa0)) {
    if (*(int *)(param_1 + 0xa4) != 0) {
      puVar10 = *(undefined4 **)(*(int *)(param_1 + 0xa4) + 8);
    }
    puVar10 = (undefined4 *)*puVar10;
  }
  uVar2 = *(uint *)(param_1 + 0x38);
  iVar3 = puVar10[0x10];
  uVar9 = *(uint *)(iVar3 + 0x24);
  bVar11 = (uVar9 & 1) == 0;
  iVar6 = 0;
  if (!bVar11) {
    in_r12 = *(int *)(iVar3 + 8);
    iVar6 = *(int *)(in_r12 + 8);
  }
  if (bVar11 || iVar6 <= param_2) {
    return iVar3;
  }
  if (param_2 < 0) {
    return iVar3;
  }
  *(int *)(iVar3 + 0xc) = (int)(short)param_2;
  iVar6 = 0;
  if (*(int *)(in_r12 + 0xc) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(*(int *)(in_r12 + 0xc) + 8);
  }
  if (*(int *)(in_r12 + 0x20) != 0) {
    iVar6 = *(int *)(*(int *)(in_r12 + 0x20) + 8);
  }
  iVar7 = *(int *)(iVar3 + 0x10) * (int)*(short *)(iVar7 + param_2 * 2);
  iVar6 = (int)*(short *)(iVar6 + param_2 * 2) * *(int *)(iVar3 + 0x10);
  *(int *)(iVar3 + 0x18) = iVar7;
  *(int *)(iVar3 + 0x1c) = iVar6;
  if ((uVar9 & 8) == 0) {
    *(int *)(iVar3 + 0x14) = iVar7;
  }
  else {
    *(int *)(iVar3 + 0x14) = iVar6;
  }
  uVar4 = 3;
  if ((uVar2 & 0x80) != 0) {
    uVar4 = 7;
  }
  *(uint *)(iVar3 + 0x24) = uVar4 | uVar9 & 8;
  piVar8 = *(int **)(iVar3 + 0x28);
  if (piVar8 == (int *)0x0) {
    return iVar3;
  }
  uVar5 = *(undefined4 *)(iVar3 + 0x14);
  iVar3 = (**(code **)(*piVar8 + 0x30))(piVar8);
  iVar6 = 0;
  if (piVar8[2] != 0) {
    iVar6 = *(int *)(piVar8[2] + 0x10);
  }
  while (iVar6 = iVar6 + -1, -1 < iVar6) {
    iVar7 = *(int *)(*(int *)(piVar8[2] + 0x14) + iVar6 * 4);
    if ((*(uint *)(*(int *)(iVar7 + 0x2c) + 0x30) & 0x60000000) != 0) {
      uVar1 = FUN_4a1395b4(iVar7,uVar5);
      (**(code **)(*piVar8 + 0x1c))(piVar8,*(undefined4 *)(iVar7 + 0x30),uVar1);
    }
  }
  (**(code **)(*piVar8 + 0x24))(piVar8,uVar5);
  return iVar3;
}



// Address: 4a107e90

/* WARNING: Removing unreachable block (ram,0x4a107bf4) */
/* WARNING: Removing unreachable block (ram,0x4a107bec) */
/* WARNING: Removing unreachable block (ram,0x4a107be0) */
/* WARNING: Removing unreachable block (ram,0x4a107be8) */
/* WARNING: Removing unreachable block (ram,0x4a107bf0) */
/* WARNING: Removing unreachable block (ram,0x4a107bf8) */
/* WARNING: Removing unreachable block (ram,0x4a107c2c) */
/* WARNING: Removing unreachable block (ram,0x4a107c4c) */
/* WARNING: Removing unreachable block (ram,0x4a107c58) */
/* WARNING: Removing unreachable block (ram,0x4a107c60) */
/* WARNING: Removing unreachable block (ram,0x4a107c64) */
/* WARNING: Removing unreachable block (ram,0x4a107c68) */
/* WARNING: Removing unreachable block (ram,0x4a107c70) */
/* WARNING: Removing unreachable block (ram,0x4a107c74) */
/* WARNING: Removing unreachable block (ram,0x4a107c78) */
/* WARNING: Removing unreachable block (ram,0x4a107c7c) */
/* WARNING: Removing unreachable block (ram,0x4a107b44) */
/* WARNING: Removing unreachable block (ram,0x4a107afc) */
/* WARNING: Removing unreachable block (ram,0x4a107b04) */
/* WARNING: Removing unreachable block (ram,0x4a107b08) */
/* WARNING: Removing unreachable block (ram,0x4a107b0c) */
/* WARNING: Removing unreachable block (ram,0x4a107b10) */
/* WARNING: Removing unreachable block (ram,0x4a107bfc) */
/* WARNING: Removing unreachable block (ram,0x4a107a18) */
/* WARNING: Removing unreachable block (ram,0x4a107a24) */
/* WARNING: Removing unreachable block (ram,0x4a107a2c) */
/* WARNING: Removing unreachable block (ram,0x4a107a30) */
/* WARNING: Removing unreachable block (ram,0x4a107a34) */
/* WARNING: Removing unreachable block (ram,0x4a107a3c) */
/* WARNING: Removing unreachable block (ram,0x4a107a40) */
/* WARNING: Removing unreachable block (ram,0x4a107a44) */
/* WARNING: Removing unreachable block (ram,0x4a107a48) */
/* WARNING: Removing unreachable block (ram,0x4a107a50) */
/* WARNING: Removing unreachable block (ram,0x4a107c84) */
/* WARNING: Removing unreachable block (ram,0x4a107aac) */
/* WARNING: Removing unreachable block (ram,0x4a10794c) */
/* WARNING: Removing unreachable block (ram,0x4a107954) */
/* WARNING: Removing unreachable block (ram,0x4a10795c) */
/* WARNING: Removing unreachable block (ram,0x4a107968) */
/* WARNING: Removing unreachable block (ram,0x4a107a54) */
/* WARNING: Removing unreachable block (ram,0x4a107b14) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a107e90(int param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined1 auStack_44 [20];
  undefined1 auStack_30 [16];
  
  iVar6 = FUN_4a0ff494();
  FUN_4a0866c0(*(undefined4 *)(iVar6 + 0x260),*(undefined4 *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffbfff | 0x8000;
  FUN_4a146240(param_1);
  iVar6 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                       *(undefined4 *)(param_1 + 0x28));
  iVar6 = (int)*(char *)(iVar6 + 8);
  if (iVar6 == 0x11) {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
    FUN_4a109ed4(param_1,0x104);
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
    uVar4 = FUN_4a13eaec(uVar11,0x450);
    uVar11 = FUN_4a13eaec(uVar11,0x451);
    FUN_4a0b4608(uVar4,1);
    FUN_4a0b4608(uVar11,1);
  }
  else if (iVar6 < 0x12) {
    if (iVar6 != 0xb) {
      if (iVar6 < 0xc) {
        if (iVar6 == 3) {
          *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
          FUN_4a109ed4(param_1,0xf8);
          FUN_4a1061f0(param_1);
        }
        else {
          if (iVar6 == 4) goto LAB_4a107c8c;
          if (iVar6 == 5) {
            *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x80;
            FUN_4a1078a4(param_1,6);
            FUN_4a107e58(param_1,0x101);
          }
        }
      }
      else if ((iVar6 != 0xc) && (iVar6 == 0xf)) {
        FUN_4a108314(param_1,1);
      }
    }
  }
  else {
    switch(iVar6) {
    case 0x16:
      uVar5 = *(uint *)(param_1 + 0x38) & 0xffffff7f;
      *(uint *)(param_1 + 0x38) = uVar5;
      *(uint *)(param_1 + 0x38) = uVar5 | 0x80;
      FUN_4a109ed4(param_1,0x100);
      break;
    case 0x17:
      FUN_4a108858(param_1,1);
      break;
    case 0x19:
LAB_4a107c8c:
      iVar6 = FUN_4a107058(param_1,1);
      FUN_4a0ca898(iVar6,8);
      FUN_4a06f95c(*(undefined4 *)(iVar6 + 0x34),0xf9,0x14);
      break;
    case 0x1e:
      FUN_4a108be8(param_1,1);
      break;
    case 0x1f:
      FUN_4a107f78(param_1,1);
    }
  }
  *(undefined4 *)(param_1 + 0x3c) = 1;
  *(undefined4 *)(param_1 + 0x40) = 0;
  iVar6 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                       *(undefined4 *)(param_1 + 0x28));
  uVar5 = (uint)*(byte *)(iVar6 + 8);
  bVar12 = uVar5 != 0x1e;
  if (bVar12) {
    uVar5 = *(uint *)(param_1 + 0x28);
  }
  if (bVar12 && uVar5 != 0xc) {
    return;
  }
  if (*(int *)(param_1 + 0x2c) == -1) {
    return;
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x24) + 0x51c);
  uVar11 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
  uVar5 = 0;
  if ((*(int *)(param_1 + 0x28) == 0x80 || *(int *)(param_1 + 0x28) == 0xc) ||
     (iVar7 = FUN_4a143ac8(uVar11), *(char *)(iVar7 + 8) == '\x17')) {
    uVar5 = *(uint *)(param_1 + 0x3c);
  }
  else {
    iVar7 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                         *(undefined4 *)(param_1 + 0x28));
    if (((*(char *)(iVar7 + 8) == '\x14') ||
        (iVar7 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                              *(undefined4 *)(param_1 + 0x28)), *(char *)(iVar7 + 8) == '\x15')) &&
       ((*(uint *)(param_1 + 0x38) & 0x200000) == 0)) {
      uVar5 = 0x20000000;
    }
  }
  uVar8 = *(uint *)(param_1 + 0x34);
  bVar12 = (uVar8 & 0x2000000) != 0;
  if (bVar12) {
    uVar8 = *(uint *)(param_1 + 0x38);
  }
  if (bVar12 && (uVar8 & 0x100) != 0) {
    uVar5 = uVar5 | 0x1000000;
  }
  iVar7 = FUN_4a142ef4(uVar11);
  if ((iVar7 == 0) && ((*(uint *)(param_1 + 0x34) & 0x2000000) != 0)) {
    uVar5 = uVar5 | (int)*(short *)(param_1 + 0x58);
  }
  uVar8 = *(uint *)(param_1 + 0x38);
  iVar7 = *(int *)(param_1 + 0x2c);
  if ((uVar8 & 0x8000) != 0) {
    uVar5 = uVar5 | 0x8000000;
  }
  if ((uVar8 & 0x4000) != 0) {
    uVar5 = uVar5 | 0x4000000;
  }
  if ((uVar8 & 0x10000) != 0) {
    uVar5 = uVar5 | 0x10000000;
  }
  sVar2 = FUN_4a142ef4(uVar11);
  switchD_4a11cc8c::default((iVar7 >> 0x1f) + 1,s_invalid_id_4a0d8628);
  iVar9 = iVar6 + 0x988;
  uVar1 = (ushort)iVar7 | sVar2 << 8;
  uVar11 = FUN_4a16c074(auStack_30,iVar9);
  iVar3 = FUN_4a16ff5c((int)(short)uVar1,uVar11,0);
  FUN_4a16c1a0(auStack_30);
  iVar7 = 0;
  if (uVar5 == 0) {
    if (iVar3 != -1) {
      uVar11 = FUN_4a16c074(auStack_44,iVar9);
      iVar3 = FUN_4a16ff5c((int)(short)uVar1,uVar11,0);
      FUN_4a16c1a0(auStack_44);
      if (iVar3 != -1) {
        iVar9 = iVar7;
        if (*(int *)(iVar6 + 0x994) != 0) {
          iVar9 = *(int *)(*(int *)(iVar6 + 0x994) + 8);
        }
        *(undefined2 *)(iVar9 + iVar3 * 2) = 0xffff;
        iVar9 = iVar7;
        if (*(int *)(iVar6 + 0x9a8) != 0) {
          iVar9 = *(int *)(*(int *)(iVar6 + 0x9a8) + 8);
        }
        *(undefined4 *)(iVar9 + iVar3 * 4) = 0;
        if (*(int *)(iVar6 + 0x9bc) != 0) {
          iVar7 = *(int *)(*(int *)(iVar6 + 0x9bc) + 8);
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
  if (*(int *)(iVar6 + 0x994) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(int *)(iVar6 + 0x994) + 8);
  }
  *(ushort *)(iVar9 + iVar3 * 2) = uVar1;
  if (*(int *)(iVar6 + 0x9a8) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(int *)(iVar6 + 0x9a8) + 8);
  }
  *(uint *)(iVar9 + iVar3 * 4) = uVar5;
  if (*(int *)(iVar6 + 0x9bc) != 0) {
    iVar7 = *(int *)(*(int *)(iVar6 + 0x9bc) + 8);
  }
  *(undefined4 *)(iVar7 + iVar3 * 4) = *(undefined4 *)(iVar6 + 0x78c);
  return;
}



// Address: 4a107ed8

/* WARNING: Removing unreachable block (ram,0x4a107bf4) */
/* WARNING: Removing unreachable block (ram,0x4a107bec) */
/* WARNING: Removing unreachable block (ram,0x4a107be0) */
/* WARNING: Removing unreachable block (ram,0x4a107be8) */
/* WARNING: Removing unreachable block (ram,0x4a107bf0) */
/* WARNING: Removing unreachable block (ram,0x4a107bf8) */
/* WARNING: Removing unreachable block (ram,0x4a107c2c) */
/* WARNING: Removing unreachable block (ram,0x4a107c4c) */
/* WARNING: Removing unreachable block (ram,0x4a107c58) */
/* WARNING: Removing unreachable block (ram,0x4a107c60) */
/* WARNING: Removing unreachable block (ram,0x4a107c64) */
/* WARNING: Removing unreachable block (ram,0x4a107c68) */
/* WARNING: Removing unreachable block (ram,0x4a107c70) */
/* WARNING: Removing unreachable block (ram,0x4a107c74) */
/* WARNING: Removing unreachable block (ram,0x4a107c78) */
/* WARNING: Removing unreachable block (ram,0x4a107c7c) */
/* WARNING: Removing unreachable block (ram,0x4a107b44) */
/* WARNING: Removing unreachable block (ram,0x4a107afc) */
/* WARNING: Removing unreachable block (ram,0x4a107b04) */
/* WARNING: Removing unreachable block (ram,0x4a107b08) */
/* WARNING: Removing unreachable block (ram,0x4a107b0c) */
/* WARNING: Removing unreachable block (ram,0x4a107b10) */
/* WARNING: Removing unreachable block (ram,0x4a107bfc) */
/* WARNING: Removing unreachable block (ram,0x4a107a18) */
/* WARNING: Removing unreachable block (ram,0x4a107a24) */
/* WARNING: Removing unreachable block (ram,0x4a107a2c) */
/* WARNING: Removing unreachable block (ram,0x4a107a30) */
/* WARNING: Removing unreachable block (ram,0x4a107a34) */
/* WARNING: Removing unreachable block (ram,0x4a107a3c) */
/* WARNING: Removing unreachable block (ram,0x4a107a40) */
/* WARNING: Removing unreachable block (ram,0x4a107a44) */
/* WARNING: Removing unreachable block (ram,0x4a107a48) */
/* WARNING: Removing unreachable block (ram,0x4a107a50) */
/* WARNING: Removing unreachable block (ram,0x4a107c84) */
/* WARNING: Removing unreachable block (ram,0x4a107aac) */
/* WARNING: Removing unreachable block (ram,0x4a10794c) */
/* WARNING: Removing unreachable block (ram,0x4a107954) */
/* WARNING: Removing unreachable block (ram,0x4a10795c) */
/* WARNING: Removing unreachable block (ram,0x4a107968) */
/* WARNING: Removing unreachable block (ram,0x4a107a54) */
/* WARNING: Removing unreachable block (ram,0x4a107b14) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a107ed8(int param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined1 auStack_44 [20];
  undefined1 auStack_30 [16];
  
  iVar6 = FUN_4a0ff494();
  FUN_4a0866c0(*(undefined4 *)(iVar6 + 0x260),*(undefined4 *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffff7fff | 0x4000;
  FUN_4a146240(param_1);
  iVar6 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                       *(undefined4 *)(param_1 + 0x28));
  iVar6 = (int)*(char *)(iVar6 + 8);
  if (iVar6 == 0x11) {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
    FUN_4a109ed4(param_1,0x104);
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
    uVar4 = FUN_4a13eaec(uVar11,0x450);
    uVar11 = FUN_4a13eaec(uVar11,0x451);
    FUN_4a0b4608(uVar4,1);
    FUN_4a0b4608(uVar11,1);
  }
  else if (iVar6 < 0x12) {
    if (iVar6 != 0xb) {
      if (iVar6 < 0xc) {
        if (iVar6 == 3) {
          *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
          FUN_4a109ed4(param_1,0xf8);
          FUN_4a1061f0(param_1);
        }
        else {
          if (iVar6 == 4) goto LAB_4a107c8c;
          if (iVar6 == 5) {
            *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x80;
            FUN_4a1078a4(param_1,6);
            FUN_4a107e58(param_1,0x101);
          }
        }
      }
      else if ((iVar6 != 0xc) && (iVar6 == 0xf)) {
        FUN_4a108314(param_1,1);
      }
    }
  }
  else {
    switch(iVar6) {
    case 0x16:
      uVar5 = *(uint *)(param_1 + 0x38) & 0xffffff7f;
      *(uint *)(param_1 + 0x38) = uVar5;
      *(uint *)(param_1 + 0x38) = uVar5 | 0x80;
      FUN_4a109ed4(param_1,0x100);
      break;
    case 0x17:
      FUN_4a108858(param_1,1);
      break;
    case 0x19:
LAB_4a107c8c:
      iVar6 = FUN_4a107058(param_1,1);
      FUN_4a0ca898(iVar6,8);
      FUN_4a06f95c(*(undefined4 *)(iVar6 + 0x34),0xf9,0x14);
      break;
    case 0x1e:
      FUN_4a108be8(param_1,1);
      break;
    case 0x1f:
      FUN_4a107f78(param_1,1);
    }
  }
  *(undefined4 *)(param_1 + 0x3c) = 1;
  *(undefined4 *)(param_1 + 0x40) = 0;
  iVar6 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                       *(undefined4 *)(param_1 + 0x28));
  uVar5 = (uint)*(byte *)(iVar6 + 8);
  bVar12 = uVar5 != 0x1e;
  if (bVar12) {
    uVar5 = *(uint *)(param_1 + 0x28);
  }
  if (bVar12 && uVar5 != 0xc) {
    return;
  }
  if (*(int *)(param_1 + 0x2c) == -1) {
    return;
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x24) + 0x51c);
  uVar11 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
  uVar5 = 0;
  if ((*(int *)(param_1 + 0x28) == 0x80 || *(int *)(param_1 + 0x28) == 0xc) ||
     (iVar7 = FUN_4a143ac8(uVar11), *(char *)(iVar7 + 8) == '\x17')) {
    uVar5 = *(uint *)(param_1 + 0x3c);
  }
  else {
    iVar7 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                         *(undefined4 *)(param_1 + 0x28));
    if (((*(char *)(iVar7 + 8) == '\x14') ||
        (iVar7 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                              *(undefined4 *)(param_1 + 0x28)), *(char *)(iVar7 + 8) == '\x15')) &&
       ((*(uint *)(param_1 + 0x38) & 0x200000) == 0)) {
      uVar5 = 0x20000000;
    }
  }
  uVar8 = *(uint *)(param_1 + 0x34);
  bVar12 = (uVar8 & 0x2000000) != 0;
  if (bVar12) {
    uVar8 = *(uint *)(param_1 + 0x38);
  }
  if (bVar12 && (uVar8 & 0x100) != 0) {
    uVar5 = uVar5 | 0x1000000;
  }
  iVar7 = FUN_4a142ef4(uVar11);
  if ((iVar7 == 0) && ((*(uint *)(param_1 + 0x34) & 0x2000000) != 0)) {
    uVar5 = uVar5 | (int)*(short *)(param_1 + 0x58);
  }
  uVar8 = *(uint *)(param_1 + 0x38);
  iVar7 = *(int *)(param_1 + 0x2c);
  if ((uVar8 & 0x8000) != 0) {
    uVar5 = uVar5 | 0x8000000;
  }
  if ((uVar8 & 0x4000) != 0) {
    uVar5 = uVar5 | 0x4000000;
  }
  if ((uVar8 & 0x10000) != 0) {
    uVar5 = uVar5 | 0x10000000;
  }
  sVar2 = FUN_4a142ef4(uVar11);
  switchD_4a11cc8c::default((iVar7 >> 0x1f) + 1,s_invalid_id_4a0d8628);
  iVar9 = iVar6 + 0x988;
  uVar1 = (ushort)iVar7 | sVar2 << 8;
  uVar11 = FUN_4a16c074(auStack_30,iVar9);
  iVar3 = FUN_4a16ff5c((int)(short)uVar1,uVar11,0);
  FUN_4a16c1a0(auStack_30);
  iVar7 = 0;
  if (uVar5 == 0) {
    if (iVar3 != -1) {
      uVar11 = FUN_4a16c074(auStack_44,iVar9);
      iVar3 = FUN_4a16ff5c((int)(short)uVar1,uVar11,0);
      FUN_4a16c1a0(auStack_44);
      if (iVar3 != -1) {
        iVar9 = iVar7;
        if (*(int *)(iVar6 + 0x994) != 0) {
          iVar9 = *(int *)(*(int *)(iVar6 + 0x994) + 8);
        }
        *(undefined2 *)(iVar9 + iVar3 * 2) = 0xffff;
        iVar9 = iVar7;
        if (*(int *)(iVar6 + 0x9a8) != 0) {
          iVar9 = *(int *)(*(int *)(iVar6 + 0x9a8) + 8);
        }
        *(undefined4 *)(iVar9 + iVar3 * 4) = 0;
        if (*(int *)(iVar6 + 0x9bc) != 0) {
          iVar7 = *(int *)(*(int *)(iVar6 + 0x9bc) + 8);
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
  if (*(int *)(iVar6 + 0x994) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(int *)(iVar6 + 0x994) + 8);
  }
  *(ushort *)(iVar9 + iVar3 * 2) = uVar1;
  if (*(int *)(iVar6 + 0x9a8) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(int *)(iVar6 + 0x9a8) + 8);
  }
  *(uint *)(iVar9 + iVar3 * 4) = uVar5;
  if (*(int *)(iVar6 + 0x9bc) != 0) {
    iVar7 = *(int *)(*(int *)(iVar6 + 0x9bc) + 8);
  }
  *(undefined4 *)(iVar7 + iVar3 * 4) = *(undefined4 *)(iVar6 + 0x78c);
  return;
}



// Address: 4a107f20

void FUN_4a107f20(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & ~param_2;
  return;
}



// Address: 4a107f30

/* WARNING: Removing unreachable block (ram,0x4a06f8a4) */

void FUN_4a107f30(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  if (*(int *)(param_1 + 0xa0) < 1) {
    iVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 0xa4) != 0) {
      piVar2 = *(int **)(*(int *)(param_1 + 0xa4) + 8);
    }
    iVar1 = *piVar2;
  }
  iVar1 = *(int *)(iVar1 + 0x40);
  FUN_4a06f8dc(iVar1,*(undefined4 *)(iVar1 + 0x1c));
  *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) & 0xfffffffd;
  return;
}



// Address: 4a107f78

void FUN_4a107f78(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  
  puVar7 = (undefined4 *)0x0;
  if (*(int *)(param_1 + 0xa0) < 1) {
    uVar8 = 0;
  }
  else {
    if (*(int *)(param_1 + 0xa4) != 0) {
      puVar7 = *(undefined4 **)(*(int *)(param_1 + 0xa4) + 8);
    }
    uVar8 = *puVar7;
  }
  uVar1 = FUN_4a13eaec(uVar8,0x44e);
  uVar2 = FUN_4a13eaec(uVar8,0x44f);
  uVar8 = FUN_4a13eaec(uVar8,0x44d);
  if (param_2 == 0) {
    FUN_4a0b4608(uVar8,1);
    FUN_4a0b4608(uVar1,0);
    FUN_4a0b4608(uVar2,0);
    if (*(int *)(param_1 + 0x68) == -1) {
      return;
    }
    iVar4 = FUN_4a0ff494();
    FUN_4a0866c0(*(undefined4 *)(iVar4 + 0x260),*(undefined4 *)(param_1 + 0x68));
    uVar8 = 0xffffffff;
  }
  else {
    if (param_2 != 1) {
      return;
    }
    FUN_4a0b4608(uVar8,0);
    FUN_4a0b4608(uVar1,(*(uint *)(param_1 + 0x38) & 0x8000) != 0);
    FUN_4a0b4608(uVar2,(*(uint *)(param_1 + 0x38) & 0x8000) == 0);
    uVar3 = *(uint *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x38) = uVar3 | 0x80;
    if ((uVar3 & 0x8000) == 0) {
      uVar8 = 0x11;
    }
    else {
      uVar8 = 0x10;
    }
    FUN_4a1098fc(param_1,uVar8);
    iVar4 = FUN_4a0ff494();
    uVar8 = *(undefined4 *)(iVar4 + 0x260);
    if ((*(uint *)(param_1 + 0x38) & 0x8000) == 0) {
      uVar1 = 0x52;
    }
    else {
      uVar1 = 0x51;
    }
    uVar2 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x44));
    uVar2 = FUN_4a17295c(uVar2,0xfffffff0);
    uVar5 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x48));
    uVar5 = FUN_4a17295c(uVar5,0xfffffff0);
    uVar6 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x4c));
    FUN_4a17295c(uVar6,0xfffffff0);
    uVar8 = FUN_4a0851b4(uVar8,uVar1,uVar2,uVar5);
  }
  *(undefined4 *)(param_1 + 0x68) = uVar8;
  return;
}



// Address: 4a108118

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a108118(int param_1)

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
  int iVar11;
  uint uVar12;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 uVar13;
  bool bVar14;
  undefined1 auStack_44 [20];
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if ((*(uint *)(param_1 + 0x38) & 0x200000) == 0) {
    return;
  }
  uVar13 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
  uVar5 = FUN_4a144cb0(uVar13,*(undefined4 *)(param_1 + 0x44));
  uVar6 = FUN_4a144cb8(uVar13,*(undefined4 *)(param_1 + 0x4c));
  uVar5 = FUN_4a1458ac(uVar13,uVar5,uVar6);
  iVar7 = FUN_4a0f7058(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),uVar5);
  iVar11 = 0;
  if (iVar7 != 0) {
    iVar11 = FUN_4a0baa8c();
  }
  if (*(int *)(param_1 + 0xa0) < 1) {
    uVar5 = 0;
  }
  else {
    if (*(int *)(param_1 + 0xa4) == 0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8 = *(undefined4 **)(*(int *)(param_1 + 0xa4) + 8);
    }
    uVar5 = *puVar8;
  }
  uStack_20 = unaff_r4;
  uStack_1c = unaff_r5;
  iVar7 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                       *(undefined4 *)(param_1 + 0x28));
  cVar2 = *(char *)(iVar7 + 8);
  if (cVar2 == '\x15') {
LAB_4a10a00c:
    if (iVar11 == 0) {
      FUN_4a0ca3fc(uVar5,0x44d);
    }
    else {
      FUN_4a0ca3fc(uVar5,0x44c);
    }
    uVar13 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
    uVar5 = FUN_4a144cb0(uVar13,*(undefined4 *)(param_1 + 0x44));
    uVar6 = FUN_4a144cb8(uVar13,*(undefined4 *)(param_1 + 0x4c));
    uVar5 = FUN_4a1458ac(uVar13,uVar5,uVar6);
    iVar7 = FUN_4a0f7058(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),uVar5);
    if ((iVar7 == 0) || (cVar2 != '\x14')) goto LAB_4a10a05c;
    uVar12 = *(uint *)(param_1 + 0x38) & 0x40;
    if (iVar11 != 0) {
      if (uVar12 == 0) {
        FUN_4a0bb5a0();
      }
      goto LAB_4a10a064;
    }
    if (uVar12 != 0) {
      FUN_4a0b8f24();
    }
LAB_4a10a168:
    uVar12 = *(uint *)(param_1 + 0x38) & 0xffffffbf;
  }
  else {
    if (cVar2 < '\x16') {
      if (cVar2 == '\f') {
        if (iVar11 == 0) {
          uVar5 = 3;
        }
        else {
          uVar5 = 2;
        }
        FUN_4a1078e8(param_1,uVar5);
      }
      else if (cVar2 == '\x14') goto LAB_4a10a00c;
    }
    else {
      if (cVar2 == '\x1a') {
        uVar5 = 0xffffffff;
        if (iVar11 != 0) {
          if (*(int *)(param_1 + 0x28) == 0x71) {
            uVar5 = 9;
          }
          else if (*(int *)(param_1 + 0x28) == 0x72) {
            uVar5 = 10;
          }
          *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x80;
          FUN_4a1078a4(param_1,uVar5);
          FUN_4a107e58(param_1,0x10a);
          goto LAB_4a10a064;
        }
        FUN_4a1078a4(param_1,0xffffffff);
        goto LAB_4a10a168;
      }
      if (cVar2 == '\x1f') {
        if ((iVar11 != 0) && ((*(uint *)(param_1 + 0x38) & 0xc000) == 0)) {
          *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x8000;
        }
        FUN_4a1078e8(param_1,iVar11);
      }
    }
LAB_4a10a05c:
    if (iVar11 == 0) goto LAB_4a10a168;
LAB_4a10a064:
    uVar12 = *(uint *)(param_1 + 0x38) | 0x40;
  }
  *(uint *)(param_1 + 0x38) = uVar12;
  iVar7 = FUN_4a142ef4(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520));
  if (iVar7 != 0) {
    return;
  }
  iVar7 = (*(ushort *)(param_1 + 0x58) + 0xf) * 0x10000;
  *(short *)(param_1 + 0x58) = (short)((uint)iVar7 >> 0x10);
  if ((300 < iVar7 >> 0x10) &&
     (*(undefined2 *)(param_1 + 0x58) = 0, (*(uint *)(param_1 + 0x34) & 0x2000000) != 0)) {
    FUN_4a105a84(param_1);
  }
  uVar5 = uStack_1c;
  uStack_18 = uStack_20;
  if (*(int *)(param_1 + 0x2c) == -1) {
    return;
  }
  iVar7 = *(int *)(*(int *)(param_1 + 0x24) + 0x51c);
  uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
  uVar12 = 0;
  if ((*(int *)(param_1 + 0x28) == 0x80 || *(int *)(param_1 + 0x28) == 0xc) ||
     (iVar11 = FUN_4a143ac8(uVar6), *(char *)(iVar11 + 8) == '\x17')) {
    uVar12 = *(uint *)(param_1 + 0x3c);
  }
  else {
    iVar11 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                          *(undefined4 *)(param_1 + 0x28));
    if (((*(char *)(iVar11 + 8) == '\x14') ||
        (iVar11 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                               *(undefined4 *)(param_1 + 0x28)), *(char *)(iVar11 + 8) == '\x15'))
       && ((*(uint *)(param_1 + 0x38) & 0x200000) == 0)) {
      uVar12 = 0x20000000;
    }
  }
  uVar9 = *(uint *)(param_1 + 0x34);
  bVar14 = (uVar9 & 0x2000000) != 0;
  if (bVar14) {
    uVar9 = *(uint *)(param_1 + 0x38);
  }
  if (bVar14 && (uVar9 & 0x100) != 0) {
    uVar12 = uVar12 | 0x1000000;
  }
  iVar11 = FUN_4a142ef4(uVar6);
  if ((iVar11 == 0) && ((*(uint *)(param_1 + 0x34) & 0x2000000) != 0)) {
    uVar12 = uVar12 | (int)*(short *)(param_1 + 0x58);
  }
  uVar9 = *(uint *)(param_1 + 0x38);
  iVar11 = *(int *)(param_1 + 0x2c);
  if ((uVar9 & 0x8000) != 0) {
    uVar12 = uVar12 | 0x8000000;
  }
  if ((uVar9 & 0x4000) != 0) {
    uVar12 = uVar12 | 0x4000000;
  }
  if ((uVar9 & 0x10000) != 0) {
    uVar12 = uVar12 | 0x10000000;
  }
  sVar3 = FUN_4a142ef4(uVar6);
  uStack_1c = uStack_18;
  uStack_18 = uVar5;
  switchD_4a11cc8c::default((iVar11 >> 0x1f) + 1,s_invalid_id_4a0d8628);
  iVar10 = iVar7 + 0x988;
  uVar1 = (ushort)iVar11 | sVar3 << 8;
  uVar5 = FUN_4a16c074(auStack_30,iVar10);
  iVar4 = FUN_4a16ff5c((int)(short)uVar1,uVar5,0);
  FUN_4a16c1a0(auStack_30);
  iVar11 = 0;
  if (uVar12 == 0) {
    if (iVar4 != -1) {
      uVar5 = FUN_4a16c074(auStack_44,iVar10);
      iVar4 = FUN_4a16ff5c((int)(short)uVar1,uVar5,0);
      FUN_4a16c1a0(auStack_44);
      if (iVar4 != -1) {
        iVar10 = iVar11;
        if (*(int *)(iVar7 + 0x994) != 0) {
          iVar10 = *(int *)(*(int *)(iVar7 + 0x994) + 8);
        }
        *(undefined2 *)(iVar10 + iVar4 * 2) = 0xffff;
        iVar10 = iVar11;
        if (*(int *)(iVar7 + 0x9a8) != 0) {
          iVar10 = *(int *)(*(int *)(iVar7 + 0x9a8) + 8);
        }
        *(undefined4 *)(iVar10 + iVar4 * 4) = 0;
        if (*(int *)(iVar7 + 0x9bc) != 0) {
          iVar11 = *(int *)(*(int *)(iVar7 + 0x9bc) + 8);
        }
        *(undefined4 *)(iVar11 + iVar4 * 4) = 0;
        return;
      }
      return;
    }
  }
  else if (iVar4 != -1) goto LAB_4a0d85dc;
  uVar5 = FUN_4a16c074(auStack_44,iVar10);
  iVar4 = FUN_4a16ff5c(0xffffffff,uVar5,0);
  FUN_4a16c1a0(auStack_44);
  switchD_4a11cc8c::default(iVar4 != -1,s_no_room_in_persistant_object_dat_4a0d8634);
LAB_4a0d85dc:
  if (*(int *)(iVar7 + 0x994) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(*(int *)(iVar7 + 0x994) + 8);
  }
  *(ushort *)(iVar10 + iVar4 * 2) = uVar1;
  if (*(int *)(iVar7 + 0x9a8) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(*(int *)(iVar7 + 0x9a8) + 8);
  }
  *(uint *)(iVar10 + iVar4 * 4) = uVar12;
  if (*(int *)(iVar7 + 0x9bc) != 0) {
    iVar11 = *(int *)(*(int *)(iVar7 + 0x9bc) + 8);
  }
  *(undefined4 *)(iVar11 + iVar4 * 4) = *(undefined4 *)(iVar7 + 0x78c);
  return;
}



// Address: 4a108194

void FUN_4a108194(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_4a107058(param_1,0);
  FUN_4a0cac40(uVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x4a1081c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x24))(param_1);
  return;
}



// Address: 4a1081c4

undefined4 FUN_4a1081c4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *local_30 [2];
  int local_28;
  int local_24;
  
  FUN_4a10ca70(local_30,*(undefined4 *)(param_1 + 0x20));
  local_30[0] = PTR_PTR_4a108310;
  iVar3 = 0;
  if (0 < local_28) {
    do {
      if (local_24 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(local_24 + 8);
      }
      iVar1 = *(int *)(iVar1 + iVar3 * 4);
    } while (((iVar1 == param_1) ||
             (iVar2 = FUN_4a143ac8(*(undefined4 *)(*(int *)(iVar1 + 0x24) + 0x520),
                                   *(undefined4 *)(iVar1 + 0x28)), *(char *)(iVar2 + 8) != '\x06'))
            && (iVar3 = iVar3 + 1, iVar1 = 0, iVar3 < local_28));
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x2c) < *(int *)(iVar1 + 0x2c)) {
        uVar4 = 0x200;
      }
      else {
        uVar4 = 0x400;
      }
      iVar3 = FUN_4a0bcc84(local_30);
      if (iVar3 != 0) {
        iVar1 = 0;
        if (0 < local_28) {
          do {
            iVar1 = iVar1 + 1;
          } while (iVar1 < local_28);
          if (iVar3 == 0) goto LAB_4a1082a0;
        }
        FUN_4a14f21c();
      }
LAB_4a1082a0:
      FUN_4a0c6bf4(local_30);
      return uVar4;
    }
  }
  iVar3 = FUN_4a0bcc84(local_30);
  if (iVar3 != 0) {
    iVar1 = 0;
    if (0 < local_28) {
      do {
        iVar1 = iVar1 + 1;
      } while (iVar1 < local_28);
      if (iVar3 == 0) goto LAB_4a1082f8;
    }
    FUN_4a14f21c();
  }
LAB_4a1082f8:
  FUN_4a0c6bf4(local_30);
  return 0x200;
}



// Address: 4a108314

/* WARNING: Removing unreachable block (ram,0x4a06f8a4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a108314(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar6 = *(uint *)(param_1 + 0x38);
  uVar7 = uVar6 & 0xffffff7f;
  *(uint *)(param_1 + 0x38) = uVar7;
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x38) = uVar6 & 0xffffff3f;
    FUN_4a109ed4(param_1,0x109);
  }
  else {
    if (param_2 != 1) {
      if (param_2 == 2) {
        FUN_4a109ed4(param_1,0x108);
        if ((*(uint *)(param_1 + 0x38) & 0x100000) != 0) {
          iVar1 = FUN_4a0ff494();
          uVar8 = *(undefined4 *)(iVar1 + 0x260);
          uVar2 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x44));
          uVar2 = FUN_4a17295c(uVar2,0xfffffff0);
          uVar3 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x48));
          uVar3 = FUN_4a17295c(uVar3,0xfffffff0);
          uVar4 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x4c));
          FUN_4a17295c(uVar4,0xfffffff0);
          FUN_4a0851b4(uVar8,0x43,uVar2,uVar3);
          return;
        }
        return;
      }
      if (param_2 == 3) {
        FUN_4a109ed4(param_1,0x109);
        if ((*(uint *)(param_1 + 0x38) & 0x100000) != 0) {
          iVar1 = FUN_4a0ff494();
          uVar8 = *(undefined4 *)(iVar1 + 0x260);
          uVar2 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x44));
          uVar2 = FUN_4a17295c(uVar2,0xfffffff0);
          uVar3 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x48));
          uVar3 = FUN_4a17295c(uVar3,0xfffffff0);
          uVar4 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x4c));
          FUN_4a17295c(uVar4,0xfffffff0);
          FUN_4a0851b4(uVar8,0x44,uVar2,uVar3);
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x4a108374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      return;
    }
    *(uint *)(param_1 + 0x38) = uVar7 | 0x40;
    FUN_4a109ed4(param_1,0x108);
  }
  piVar5 = (int *)0x0;
  if (*(int *)(param_1 + 0xa0) < 1) {
    iVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 0xa4) != 0) {
      piVar5 = *(int **)(*(int *)(param_1 + 0xa4) + 8);
    }
    iVar1 = *piVar5;
  }
  iVar1 = *(int *)(iVar1 + 0x34);
  FUN_4a06f8dc(iVar1,*(undefined4 *)(iVar1 + 0x1c));
  *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) & 0xfffffffd;
  return;
}



// Address: 4a1084ac

undefined4 FUN_4a1084ac(int param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined *local_38 [2];
  int local_30;
  int *local_2c;
  
  iVar11 = 0;
  if (param_2 < *(int *)(param_1 + 0x8c)) goto LAB_4a108654;
  iVar10 = param_2 + 1;
  piVar3 = (int *)FUN_4a0c6bc0(local_38);
  puVar1 = PTR_PTR_4a1086b4;
  piVar3[2] = 0;
  piVar3[3] = 0;
  *piVar3 = (int)puVar1;
  if (0 < iVar10) {
    iVar4 = FUN_4a15e080(iVar10 * 4);
    if (iVar4 == 0) {
      iVar4 = FUN_4a1669a8();
    }
    iVar5 = 0;
    do {
      *(undefined4 *)(iVar4 + iVar5 * 4) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar10);
    thunk_FUN_4a161570(0x18);
    puVar6 = (undefined4 *)FUN_4a0c0628();
    puVar6[3] = 4;
    puVar6[4] = iVar10;
    puVar2 = PTR_PTR_4a1086b8;
    *puVar6 = PTR_PTR_4a1086b8;
    puVar6[2] = iVar4;
    *(undefined1 *)(puVar6 + 5) = 1;
    if (puVar6 != (undefined4 *)0x0) {
      (**(code **)(puVar2 + 0xc))(puVar6);
    }
    (**(code **)(*piVar3 + 0x1c))(piVar3);
    piVar3[2] = iVar10;
    piVar3[3] = (int)puVar6;
  }
  iVar10 = local_30;
  iVar5 = *(int *)(param_1 + 0x8c);
  iVar4 = 0;
  if (0 < iVar5) {
    do {
      iVar9 = 0;
      if (*(int *)(param_1 + 0x90) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(*(int *)(param_1 + 0x90) + 8);
      }
      if (local_2c != (int *)0x0) {
        iVar9 = local_2c[2];
      }
      *(undefined4 *)(iVar9 + iVar4 * 4) = *(undefined4 *)(iVar8 + iVar4 * 4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar5);
  }
  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 0xc))(local_2c);
  }
  (**(code **)(*(int *)(param_1 + 0x84) + 0x1c))((int *)(param_1 + 0x84));
  *(int *)(param_1 + 0x8c) = iVar10;
  *(int **)(param_1 + 0x90) = local_2c;
  local_38[0] = puVar1;
  iVar10 = FUN_4a0bcc84(local_38);
  if (iVar10 != 0) {
    iVar4 = 0;
    if (0 < local_30) {
      do {
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_30);
      if (iVar10 == 0) goto LAB_4a10864c;
    }
    FUN_4a14f21c();
  }
LAB_4a10864c:
  FUN_4a0c6bf4(local_38);
LAB_4a108654:
  if (*(int *)(param_1 + 0x90) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(*(int *)(param_1 + 0x90) + 8);
  }
  if (*(int *)(iVar10 + param_2 * 4) == 0) {
    thunk_FUN_4a161570(0x10);
    uVar7 = FUN_4a060224();
    if (*(int *)(param_1 + 0x90) == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = *(int *)(*(int *)(param_1 + 0x90) + 8);
    }
    *(undefined4 *)(iVar10 + param_2 * 4) = uVar7;
    FUN_4a060130(uVar7,0);
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    iVar11 = *(int *)(*(int *)(param_1 + 0x90) + 8);
  }
  return *(undefined4 *)(iVar11 + param_2 * 4);
}



// Address: 4a1086bc

void FUN_4a1086bc(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x0;
  if (*(int *)(param_1 + 0xa0) < 1) {
    uVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 0xa4) != 0) {
      puVar4 = *(undefined4 **)(*(int *)(param_1 + 0xa4) + 8);
    }
    uVar1 = *puVar4;
  }
  iVar2 = FUN_4a13eaec(uVar1,0x7d5);
  if (iVar2 != 0) {
    FUN_4a0b4608(iVar2,0 < (int)param_2);
  }
  iVar2 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                       *(undefined4 *)(param_1 + 0x28));
  if (*(char *)(iVar2 + 8) == ' ') {
    iVar2 = 1 - param_2;
    if (1 < param_2) {
      iVar2 = 0;
    }
    if (iVar2 == 0) {
      uVar3 = *(uint *)(param_1 + 0x38) & 0xffffdfff;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x38) | 0x2000;
    }
    *(uint *)(param_1 + 0x38) = uVar3;
    return;
  }
  return;
}



// Address: 4a108754

int FUN_4a108754(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  uVar1 = (*(uint *)(param_1 + 0x34) & 0x100000) >> 0x14;
  uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
  if (uVar1 == 0) {
    FUN_4a106a9c(param_1,0);
  }
  iVar6 = *(int *)(param_1 + 0x50);
  uVar2 = FUN_4a144cb0(uVar7,*(undefined4 *)(param_1 + 0x44));
  uVar3 = FUN_4a144cb8(uVar7,*(undefined4 *)(param_1 + 0x4c));
  uVar4 = FUN_4a144f98(uVar7,*(undefined4 *)(param_1 + 0x28),uVar2,uVar3);
  iVar5 = (iVar6 + 1) % 4;
  if (((((*(uint *)(PTR_DAT_4a108854 + iVar5 * 4) & uVar4) != 0) ||
       (iVar5 = (iVar6 + 2) % 4, (*(uint *)(PTR_DAT_4a108854 + iVar5 * 4) & uVar4) != 0)) ||
      (iVar5 = (iVar6 + 3) % 4, (*(uint *)(PTR_DAT_4a108854 + iVar5 * 4) & uVar4) != 0)) ||
     (iVar5 = (iVar6 + 4) % 4, (uVar4 & *(uint *)(PTR_DAT_4a108854 + iVar5 * 4)) != 0)) {
    iVar6 = iVar5;
  }
  if (uVar1 == 0) {
    FUN_4a106a9c(param_1,1);
  }
  return iVar6;
}



// Address: 4a108858

/* WARNING: Removing unreachable block (ram,0x4a06f8a4) */

void FUN_4a108858(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  param_1[0xf] = param_2;
  param_1[0xe] = param_1[0xe] & 0xffffff7f;
  if (param_2 == 0) {
code_r0x4a1078a4:
    puVar5 = (undefined4 *)0x0;
    if (param_1[0x28] < 1) {
      uVar1 = 0;
    }
    else {
      if (param_1[0x29] != 0) {
        puVar5 = *(undefined4 **)(param_1[0x29] + 8);
      }
      uVar1 = *puVar5;
    }
    FUN_4a0ca9e0(uVar1,0xffffffff,puVar5,param_4,unaff_r4,in_lr);
                    /* WARNING: Could not recover jumptable at 0x4a1078e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1);
    return;
  }
  if (param_2 == 1) {
    iVar2 = FUN_4a143ac8(*(undefined4 *)(param_1[9] + 0x520),param_1[10]);
    if ((*(uint *)(iVar2 + 0x14) & 0x20000) == 0) {
      FUN_4a1078a4(param_1,0x12);
      FUN_4a107e58(param_1,0xf0);
    }
    else {
      FUN_4a1078a4(param_1,0x11);
      FUN_4a107e58(param_1,0xf2);
    }
    FUN_4a107f30(param_1);
    FUN_4a143ac8(*(undefined4 *)(param_1[9] + 0x520),param_1[10]);
    iVar2 = 0;
    do {
      FUN_4a1073fc(param_1,iVar2);
      if (param_1[0x1f] == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(param_1[0x1f] + 8);
      }
      iVar3 = *(int *)(*(int *)(iVar3 + iVar2 * 4) + 0x34);
      FUN_4a06f8dc(iVar3,*(undefined4 *)(iVar3 + 0x1c));
      FUN_4a06f898(iVar3,0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 6);
    return;
  }
  if (param_2 == 2) {
    iVar2 = FUN_4a143ac8(*(undefined4 *)(param_1[9] + 0x520),param_1[10]);
    if ((*(uint *)(iVar2 + 0x14) & 0x20000) != 0) {
      FUN_4a1078a4(param_1,0x11);
      FUN_4a107e58(param_1,0xf1);
      FUN_4a107f30(param_1);
      FUN_4a143ac8(*(undefined4 *)(param_1[9] + 0x520),param_1[10]);
      iVar2 = 0;
      do {
        FUN_4a1073fc(param_1,iVar2);
        if (param_1[0x1f] == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(param_1[0x1f] + 8);
        }
        iVar3 = *(int *)(*(int *)(iVar3 + iVar2 * 4) + 0x34);
        FUN_4a06f8dc(iVar3,*(undefined4 *)(iVar3 + 0x1c));
        FUN_4a06f898(iVar3,0);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 6);
      return;
    }
    FUN_4a1078a4(param_1,0x12);
    FUN_4a107e58(param_1,0xef);
  }
  else {
    if (param_2 != 3) {
      switchD_4a11cc8c::default(0,s_invalid_state_for_plant_4a108a7c);
      goto code_r0x4a1078a4;
    }
    FUN_4a1078a4(param_1,0x12);
    FUN_4a107e58(param_1,0xf0);
  }
  piVar4 = (int *)0x0;
  if (param_1[0x28] < 1) {
    iVar2 = 0;
  }
  else {
    if (param_1[0x29] != 0) {
      piVar4 = *(int **)(param_1[0x29] + 8);
    }
    iVar2 = *piVar4;
  }
  iVar2 = *(int *)(iVar2 + 0x40);
  FUN_4a06f8dc(iVar2,*(undefined4 *)(iVar2 + 0x1c),param_1[0x28],param_4,unaff_r4,in_lr);
  *(uint *)(iVar2 + 0x24) = *(uint *)(iVar2 + 0x24) & 0xfffffffd;
  return;
}



// Address: 4a108a94

/* WARNING: Removing unreachable block (ram,0x4a107aac) */
/* WARNING: Removing unreachable block (ram,0x4a107954) */
/* WARNING: Removing unreachable block (ram,0x4a10795c) */
/* WARNING: Removing unreachable block (ram,0x4a107968) */
/* WARNING: Removing unreachable block (ram,0x4a107c14) */
/* WARNING: Removing unreachable block (ram,0x4a107b04) */
/* WARNING: Removing unreachable block (ram,0x4a107b08) */
/* WARNING: Removing unreachable block (ram,0x4a107b0c) */
/* WARNING: Removing unreachable block (ram,0x4a107b10) */
/* WARNING: Removing unreachable block (ram,0x4a107b2c) */
/* WARNING: Removing unreachable block (ram,0x4a107bfc) */
/* WARNING: Removing unreachable block (ram,0x4a107bf0) */
/* WARNING: Removing unreachable block (ram,0x4a107bec) */
/* WARNING: Removing unreachable block (ram,0x4a107be8) */
/* WARNING: Removing unreachable block (ram,0x4a107bf4) */
/* WARNING: Removing unreachable block (ram,0x4a107bf8) */
/* WARNING: Removing unreachable block (ram,0x4a107a00) */
/* WARNING: Removing unreachable block (ram,0x4a1079fc) */
/* WARNING: Removing unreachable block (ram,0x4a107c8c) */
/* WARNING: Removing unreachable block (ram,0x4a107a80) */
/* WARNING: Removing unreachable block (ram,0x4a107b14) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a108a94(int param_1)

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
    FUN_4a109ed4(param_1,0x104);
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
            FUN_4a107e58(param_1,0x102);
          }
        }
      }
      else if ((iVar4 != 0xc) && (iVar4 == 0xf)) {
        FUN_4a108314(param_1,2);
      }
    }
  }
  else {
    switch(iVar4) {
    case 0x16:
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffff7f;
      FUN_4a109ed4(param_1,0xfe);
      break;
    case 0x17:
      FUN_4a108858(param_1,2);
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
      FUN_4a108be8(param_1,2);
      break;
    case 0x1f:
      FUN_4a107f78(param_1,2);
    }
  }
  *(undefined4 *)(param_1 + 0x3c) = 2;
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



// Address: 4a108a9c

void FUN_4a108a9c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_38 [20];
  undefined1 auStack_24 [20];
  
  uVar1 = FUN_4a16bdcc(auStack_24);
  FUN_4a0ff4b8(uVar1,*(undefined4 *)(param_1 + 0x30));
  FUN_4a16bef4(auStack_24);
  iVar2 = FUN_4a1053bc(param_1);
  if (iVar2 != 0) {
    uVar1 = FUN_4a16bdcc(auStack_38,param_2);
    FUN_4a0fc4b0(uVar1,0x933);
    FUN_4a16bef4(auStack_38);
    return;
  }
  iVar2 = FUN_4a108754(param_1);
  if (iVar2 != *(int *)(param_1 + 0x50)) {
    uVar1 = FUN_4a16bdcc(auStack_38,param_2);
    FUN_4a0fc4b0(uVar1,0x969);
    FUN_4a16bef4(auStack_38);
  }
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
  FUN_4a106a9c(param_1,0);
  iVar2 = FUN_4a0f21b4(uVar1,*(undefined4 *)(param_1 + 0x28),1);
  FUN_4a106a9c(param_1,1);
  if (0 < iVar2) {
    uVar1 = FUN_4a16bdcc(auStack_38,param_2);
    FUN_4a0fc4b0(uVar1,0x968);
    FUN_4a16bef4(auStack_38);
  }
  iVar2 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                       *(undefined4 *)(param_1 + 0x28));
  if (0 < *(short *)(iVar2 + 0x1c)) {
    uVar1 = FUN_4a16bdcc(auStack_38,param_2);
    FUN_4a0fc4b0(uVar1,0x967);
    FUN_4a16bef4(auStack_38);
    return;
  }
  return;
}



// Address: 4a108be0

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

void FUN_4a108be0(int param_1)

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




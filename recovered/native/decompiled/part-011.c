/* AUTOMATED DECOMPILER OUTPUT. Not original source, not a buildable game.
 * Function boundaries, types, indirect calls, and data still require validation. */

// Address: 4a095c34

undefined4 FUN_4a095c34(void)

{
  return *(undefined4 *)(PTR_PTR_4a095c40 + 0x14);
}



// Address: 4a095c44

int * FUN_4a095c44(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,int param_6,int param_7)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  
  iVar1 = FUN_4a0ff494();
  uVar6 = *(undefined4 *)(iVar1 + 0x60);
  piVar5 = (int *)0x0;
  if ((param_7 != 0) &&
     (piVar2 = (int *)FUN_4a09549c(param_1,param_2,param_3,param_5), piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0xc))(piVar2);
    goto LAB_4a095ebc;
  }
  FUN_4a0fb644();
  piVar2 = (int *)FUN_4a135e3c(uVar6,param_4,1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))(piVar2);
  }
  if (param_6 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_4a135e3c(uVar6,param_6,1);
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
  }
  switchD_4a1193c4::default(s_loading_images_4a095f3c);
  FUN_4a13daf8(piVar2);
  FUN_4a13db00(piVar2);
  if (piVar3 == (int *)0x0) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))(piVar2);
      piVar5 = piVar2;
      goto LAB_4a095db4;
    }
  }
  else {
    FUN_4a0fb644();
    piVar4 = (int *)thunk_FUN_4a0c3068(piVar2);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))(piVar4);
      piVar5 = piVar4;
    }
    (**(code **)(*piVar5 + 0x24))(piVar5,piVar3);
    switchD_4a1193c4::default(s_layer_images_4a095f4c);
    if (piVar2 != (int *)0x0) {
LAB_4a095db4:
      iVar1 = (**(code **)(*piVar2 + 8))(piVar2);
      if (iVar1 != 0) {
        (**(code **)(*piVar2 + 4))(piVar2);
      }
    }
    if ((piVar3 != (int *)0x0) && (iVar1 = (**(code **)(*piVar3 + 8))(piVar3), iVar1 != 0)) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
  }
  if (param_7 == 0) {
    uVar6 = thunk_FUN_4a161570(0x4c);
    piVar3 = (int *)FUN_4a0b6cfc(uVar6,0x65,piVar5);
  }
  else {
    uVar6 = thunk_FUN_4a161570(0x4c);
    piVar3 = (int *)FUN_4a0b6cfc(uVar6,0x65,piVar5);
  }
  piVar2 = (int *)0x0;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    piVar2 = piVar3;
  }
  if ((piVar5 != (int *)0x0) && (iVar1 = (**(code **)(*piVar5 + 8))(piVar5), iVar1 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  if (piVar2 == (int *)0x0) {
    return (int *)0x0;
  }
LAB_4a095ebc:
  uVar6 = thunk_FUN_4a161570(0xe8);
  piVar5 = (int *)FUN_4a0b7ad4(uVar6,piVar2);
  FUN_4a0b7a54(piVar5,0xd2,0xd1);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))(piVar5);
  }
  iVar1 = (**(code **)(*piVar2 + 8))(piVar2);
  if (iVar1 != 0) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  return piVar5;
}



// Address: 4a095f5c

void FUN_4a095f5c(void)

{
  undefined4 uVar1;
  
  thunk_FUN_4a161570(0x48);
  uVar1 = FUN_4a0966a8();
  *(undefined4 *)(PTR_PTR_4a095f7c + 0x14) = uVar1;
  return;
}



// Address: 4a095f80

/* WARNING: Removing unreachable block (ram,0x4a096040) */
/* WARNING: Removing unreachable block (ram,0x4a09605c) */
/* WARNING: Removing unreachable block (ram,0x4a09615c) */
/* WARNING: Removing unreachable block (ram,0x4a096178) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a095f80(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    do {
      if (*(int *)(param_1 + 0x2c) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
      }
      iVar3 = 0;
      if (0 < *(int *)(iVar1 + iVar7 * 0x14 + 8)) {
        do {
          if (*(int *)(param_1 + 0x2c) == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
          }
          iVar1 = *(int *)(iVar1 + iVar7 * 0x14 + 0xc);
          if (iVar1 == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = *(int *)(iVar1 + 8);
          }
          puVar4 = (undefined4 *)(iVar1 + iVar3 * 4);
          piVar5 = (int *)*puVar4;
          if (piVar5 != (int *)0x0) {
            iVar1 = (**(code **)(*piVar5 + 8))(piVar5);
            if (iVar1 != 0) {
              (**(code **)(*piVar5 + 4))(piVar5);
            }
            *puVar4 = 0;
          }
          iVar1 = 0;
          if (*(int *)(param_1 + 0x2c) != 0) {
            iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(iVar1 + iVar7 * 0x14 + 8));
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x28));
  }
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    do {
      iVar1 = iVar6;
      if (*(int *)(param_1 + 0x40) != 0) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 8);
      }
      iVar3 = 0;
      if (0 < *(int *)(iVar1 + iVar7 * 0x14 + 8)) {
        do {
          iVar1 = iVar6;
          if (*(int *)(param_1 + 0x40) != 0) {
            iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 8);
          }
          iVar2 = *(int *)(iVar1 + iVar7 * 0x14 + 0xc);
          iVar1 = iVar6;
          if (iVar2 != 0) {
            iVar1 = *(int *)(iVar2 + 8);
          }
          puVar4 = (undefined4 *)(iVar1 + iVar3 * 4);
          piVar5 = (int *)*puVar4;
          if (piVar5 != (int *)0x0) {
            iVar1 = (**(code **)(*piVar5 + 8))(piVar5);
            if (iVar1 != 0) {
              (**(code **)(*piVar5 + 4))(piVar5);
            }
            *puVar4 = 0;
          }
          iVar1 = iVar6;
          if (*(int *)(param_1 + 0x40) != 0) {
            iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 8);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(iVar1 + iVar7 * 0x14 + 8));
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x3c));
    return;
  }
  return;
}



// Address: 4a0961c8

void FUN_4a0961c8(void)

{
  if (*(int **)(PTR_PTR_4a0961e4 + 0x14) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a0961dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(PTR_PTR_4a0961e4 + 0x14) + 4))();
  return;
}



// Address: 4a0961e8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0961e8(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar2 = FUN_4a0ff494();
  iVar2 = *(int *)(*(int *)(iVar2 + 0x51c) + 0x410);
  piVar3 = (int *)FUN_4a0c3450();
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
  }
  uVar4 = thunk_FUN_4a161570(0xc);
  uVar5 = thunk_FUN_4a161570(0x14);
  puVar1 = PTR_PTR_4a0966a4;
  uVar5 = FUN_4a0c707c(uVar5,*(undefined4 *)PTR_PTR_4a0966a4);
  piVar6 = (int *)FUN_4a0c4300(uVar4,piVar3,uVar5);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))();
  }
  uVar4 = thunk_FUN_4a161570(0xc);
  uVar5 = thunk_FUN_4a161570(0x14);
  uVar5 = FUN_4a0c707c(uVar5,*(undefined4 *)(puVar1 + 4));
  piVar7 = (int *)FUN_4a0c44b0(uVar4,piVar6,uVar5);
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0xc))();
  }
  iVar8 = FUN_4a0c4278(piVar7);
  if (iVar8 != 0) {
    uVar4 = thunk_FUN_4a161570(0x18);
    uVar5 = FUN_4a0c42f8(piVar7);
    piVar9 = (int *)FUN_4a0c2adc(uVar4,uVar5);
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 0xc))();
    }
    uVar4 = thunk_FUN_4a161570(0x10);
    piVar10 = (int *)FUN_4a0bfc44(uVar4,piVar9);
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 0xc))();
    }
    iVar8 = FUN_4a0bf62c(piVar10);
    iVar11 = FUN_4a0bf62c(piVar10);
    if (iVar11 == iVar2 && iVar8 == 7) {
      iVar2 = 0;
      if (0 < *(int *)(param_1 + 0x28)) {
        do {
          if (*(int *)(param_1 + 0x2c) == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
          }
          iVar11 = 0;
          if (0 < *(int *)(iVar8 + iVar2 * 0x14 + 8)) {
            do {
              if (*(int *)(param_1 + 0x2c) == 0) {
                iVar8 = 0;
              }
              else {
                iVar8 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
              }
              iVar8 = *(int *)(iVar8 + iVar2 * 0x14 + 0xc);
              if (iVar8 == 0) {
                iVar8 = 0;
              }
              else {
                iVar8 = *(int *)(iVar8 + 8);
              }
              piVar13 = (int *)(iVar8 + iVar11 * 4);
              piVar12 = (int *)FUN_4a0bf6a4(piVar10);
              if ((int *)*piVar13 != piVar12) {
                if (piVar12 != (int *)0x0) {
                  (**(code **)(*piVar12 + 0xc))(piVar12);
                }
                piVar14 = (int *)*piVar13;
                if ((piVar14 != (int *)0x0) &&
                   (iVar8 = (**(code **)(*piVar14 + 8))(piVar14), iVar8 != 0)) {
                  (**(code **)(*piVar14 + 4))(piVar14);
                }
                *piVar13 = (int)piVar12;
              }
              iVar11 = iVar11 + 1;
              if (*(int *)(param_1 + 0x2c) == 0) {
                iVar8 = 0;
              }
              else {
                iVar8 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
              }
            } while (iVar11 < *(int *)(iVar8 + iVar2 * 0x14 + 8));
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(param_1 + 0x28));
      }
      iVar2 = 0;
      if (0 < *(int *)(param_1 + 0x3c)) {
        do {
          if (*(int *)(param_1 + 0x40) == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)(*(int *)(param_1 + 0x40) + 8);
          }
          iVar11 = 0;
          if (0 < *(int *)(iVar8 + iVar2 * 0x14 + 8)) {
            do {
              if (*(int *)(param_1 + 0x40) == 0) {
                iVar8 = 0;
              }
              else {
                iVar8 = *(int *)(*(int *)(param_1 + 0x40) + 8);
              }
              iVar8 = *(int *)(iVar8 + iVar2 * 0x14 + 0xc);
              if (iVar8 == 0) {
                iVar8 = 0;
              }
              else {
                iVar8 = *(int *)(iVar8 + 8);
              }
              piVar13 = (int *)(iVar8 + iVar11 * 4);
              piVar12 = (int *)FUN_4a0bf6a4(piVar10);
              if ((int *)*piVar13 != piVar12) {
                if (piVar12 != (int *)0x0) {
                  (**(code **)(*piVar12 + 0xc))(piVar12);
                }
                piVar14 = (int *)*piVar13;
                if ((piVar14 != (int *)0x0) &&
                   (iVar8 = (**(code **)(*piVar14 + 8))(piVar14), iVar8 != 0)) {
                  (**(code **)(*piVar14 + 4))(piVar14);
                }
                *piVar13 = (int)piVar12;
              }
              iVar11 = iVar11 + 1;
              if (*(int *)(param_1 + 0x40) == 0) {
                iVar8 = 0;
              }
              else {
                iVar8 = *(int *)(*(int *)(param_1 + 0x40) + 8);
              }
            } while (iVar11 < *(int *)(iVar8 + iVar2 * 0x14 + 8));
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(param_1 + 0x3c));
      }
    }
    (**(code **)(*piVar9 + 0x20))(piVar9);
    if ((piVar10 != (int *)0x0) && (iVar2 = (**(code **)(*piVar10 + 8))(piVar10), iVar2 != 0)) {
      (**(code **)(*piVar10 + 4))(piVar10);
    }
    if ((piVar9 != (int *)0x0) && (iVar2 = (**(code **)(*piVar9 + 8))(piVar9), iVar2 != 0)) {
      (**(code **)(*piVar9 + 4))(piVar9);
    }
  }
  if ((piVar7 != (int *)0x0) && (iVar2 = (**(code **)(*piVar7 + 8))(piVar7), iVar2 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  if ((piVar6 != (int *)0x0) && (iVar2 = (**(code **)(*piVar6 + 8))(piVar6), iVar2 != 0)) {
    (**(code **)(*piVar6 + 4))(piVar6);
  }
  if (piVar3 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar3 + 8))(piVar3);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0966a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar3 + 4))(piVar3);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a096688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a0966a8

/* WARNING: Removing unreachable block (ram,0x4a09680c) */
/* WARNING: Removing unreachable block (ram,0x4a096828) */
/* WARNING: Removing unreachable block (ram,0x4a096a8c) */
/* WARNING: Removing unreachable block (ram,0x4a096aa8) */

int * FUN_4a0966a8(undefined4 *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  undefined1 auStack_58 [20];
  int local_44;
  undefined1 auStack_40 [20];
  undefined *local_2c;
  undefined *local_28;
  
  puVar1 = PTR_PTR_4a096c48;
  *param_1 = PTR_PTR_4a096c48;
  param_1[2] = puVar1 + 0x20;
  param_1[4] = puVar1 + 0x40;
  param_1[5] = puVar1 + 0x50;
  param_1[6] = puVar1 + 0x60;
  param_1[3] = puVar1 + 0x30;
  param_1[1] = puVar1 + 0x10;
  param_1[7] = puVar1 + 0x70;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(param_1 + 8);
  puVar1 = PTR_PTR_4a096c4c;
  puVar2[2] = 0;
  *puVar2 = puVar1;
  puVar2[3] = 0;
  piVar3 = (int *)FUN_4a0c6bc0(puVar2 + 5);
  piVar3[2] = 0;
  *piVar3 = (int)puVar1;
  piVar3[3] = 0;
  iVar4 = FUN_4a0ff494();
  local_44 = *(int *)(*(int *)(iVar4 + 0x51c) + 0x410);
  iVar4 = FUN_4a1681e4(auStack_40,7);
  iVar9 = *(int *)(iVar4 + 8);
  piVar8 = *(int **)(iVar4 + 0xc);
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0xc))(piVar8);
  }
  (**(code **)(piVar3[-5] + 0x1c))(piVar3 + -5);
  piVar3[-3] = iVar9;
  piVar3[-2] = (int)piVar8;
  FUN_4a16832c(auStack_40);
  iVar4 = 0;
  local_28 = PTR_PTR_4a096c50;
  local_2c = PTR_PTR_4a096c54;
  do {
    iVar9 = 0;
    if (piVar3[-2] != 0) {
      iVar9 = *(int *)(piVar3[-2] + 8);
    }
    piVar10 = (int *)(iVar9 + iVar4 * 0x14);
    piVar8 = (int *)FUN_4a0c6bc0(auStack_58);
    piVar8[2] = 0;
    piVar8[3] = 0;
    *piVar8 = (int)local_28;
    iVar9 = FUN_4a15e080(0x2c);
    if (iVar9 == 0) {
      iVar9 = FUN_4a1669a8();
    }
    iVar7 = 0;
    do {
      *(undefined4 *)(iVar9 + iVar7 * 4) = 0;
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0xb);
    thunk_FUN_4a161570(0x18);
    piVar5 = (int *)FUN_4a0c0628();
    piVar5[3] = 4;
    piVar5[4] = 0xb;
    *piVar5 = (int)local_2c;
    piVar5[2] = iVar9;
    *(undefined1 *)(piVar5 + 5) = 1;
    if (piVar5 != (int *)0x0) {
      (**(code **)(local_2c + 0xc))(piVar5);
    }
    (**(code **)(*piVar8 + 0x1c))(piVar8);
    piVar8[2] = 0xb;
    piVar8[3] = (int)piVar5;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
    }
    (**(code **)(*piVar10 + 0x1c))(piVar10);
    piVar10[2] = 0xb;
    piVar10[3] = (int)piVar5;
    FUN_4a169628(auStack_58);
    iVar9 = 0;
    do {
      uVar6 = thunk_FUN_4a161570(0x14);
      piVar8 = (int *)FUN_4a0c707c(uVar6,&DAT_4a096c58);
      if (piVar3[-2] == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(piVar3[-2] + 8);
      }
      iVar7 = *(int *)(iVar7 + iVar4 * 0x14 + 0xc);
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(iVar7 + 8);
      }
      piVar10 = (int *)(iVar7 + iVar9 * 4);
      if ((int *)*piVar10 != piVar8) {
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 0xc))(piVar8);
        }
        piVar5 = (int *)*piVar10;
        if ((piVar5 != (int *)0x0) && (iVar7 = (**(code **)(*piVar5 + 8))(piVar5), iVar7 != 0)) {
          (**(code **)(*piVar5 + 4))(piVar5);
        }
        *piVar10 = (int)piVar8;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0xb);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 7);
  iVar4 = FUN_4a1681e4(auStack_40,local_44);
  iVar9 = *(int *)(iVar4 + 8);
  piVar8 = *(int **)(iVar4 + 0xc);
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0xc))(piVar8);
  }
  (**(code **)(*piVar3 + 0x1c))(piVar3);
  piVar3[2] = iVar9;
  piVar3[3] = (int)piVar8;
  FUN_4a16832c(auStack_40);
  iVar4 = 0;
  if (0 < local_44) {
    do {
      iVar9 = 0;
      if (piVar3[3] != 0) {
        iVar9 = *(int *)(piVar3[3] + 8);
      }
      piVar10 = (int *)(iVar9 + iVar4 * 0x14);
      piVar8 = (int *)FUN_4a0c6bc0(auStack_58);
      piVar8[2] = 0;
      piVar8[3] = 0;
      *piVar8 = (int)local_28;
      iVar9 = FUN_4a15e080(0x2c);
      if (iVar9 == 0) {
        iVar9 = FUN_4a1669a8();
      }
      iVar7 = 0;
      do {
        *(undefined4 *)(iVar9 + iVar7 * 4) = 0;
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0xb);
      thunk_FUN_4a161570(0x18);
      piVar5 = (int *)FUN_4a0c0628();
      piVar5[3] = 4;
      piVar5[4] = 0xb;
      *piVar5 = (int)local_2c;
      piVar5[2] = iVar9;
      *(undefined1 *)(piVar5 + 5) = 1;
      if (piVar5 != (int *)0x0) {
        (**(code **)(local_2c + 0xc))(piVar5);
      }
      (**(code **)(*piVar8 + 0x1c))(piVar8);
      piVar8[2] = 0xb;
      piVar8[3] = (int)piVar5;
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0xc))(piVar5);
      }
      (**(code **)(*piVar10 + 0x1c))(piVar10);
      piVar10[2] = 0xb;
      piVar10[3] = (int)piVar5;
      FUN_4a169628(auStack_58);
      iVar9 = 0;
      do {
        uVar6 = thunk_FUN_4a161570(0x14);
        piVar8 = (int *)FUN_4a0c707c(uVar6,&DAT_4a096c58);
        if (piVar3[3] == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(piVar3[3] + 8);
        }
        iVar7 = *(int *)(iVar7 + iVar4 * 0x14 + 0xc);
        if (iVar7 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(iVar7 + 8);
        }
        piVar10 = (int *)(iVar7 + iVar9 * 4);
        if ((int *)*piVar10 != piVar8) {
          if (piVar8 != (int *)0x0) {
            (**(code **)(*piVar8 + 0xc))(piVar8);
          }
          piVar5 = (int *)*piVar10;
          if ((piVar5 != (int *)0x0) && (iVar7 = (**(code **)(*piVar5 + 8))(piVar5), iVar7 != 0)) {
            (**(code **)(*piVar5 + 4))(piVar5);
          }
          *piVar10 = (int)piVar8;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 0xb);
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_44);
  }
  FUN_4a0961e8(piVar3 + -0xd);
  return piVar3 + -0xd;
}



// Address: 4a096c74

int FUN_4a096c74(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_PTR_4a096ce0;
  *param_1 = PTR_PTR_4a096ce0;
  param_1[2] = puVar1 + 0x20;
  param_1[4] = puVar1 + 0x40;
  param_1[5] = puVar1 + 0x50;
  param_1[6] = puVar1 + 0x60;
  param_1[3] = puVar1 + 0x30;
  param_1[1] = puVar1 + 0x10;
  param_1[7] = puVar1 + 0x70;
  FUN_4a095f80(param_1);
  iVar2 = FUN_4a16832c(param_1 + 0xd);
  iVar2 = FUN_4a16832c(iVar2 + -0x14);
  return iVar2 + -0x20;
}



// Address: 4a096ce4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a096ce4(int param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar8;
  undefined *local_38 [2];
  uint local_30;
  int *local_2c;
  
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))();
  }
  FUN_4a13e2e8(local_38,param_2,s_UTF_8_4a096ec0);
  uVar3 = local_30;
  uVar6 = 0;
  do {
    FUN_4a0c97bc(param_1 + 4,*(undefined4 *)(param_1 + 0x20),(uVar3 & 1 << (uVar6 & 0xff)) != 0);
    uVar6 = uVar6 + 1;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  } while ((int)uVar6 < 8);
  iVar7 = 0;
  if (0 < (int)uVar3) {
    do {
      uVar6 = 0;
      if (local_2c == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = local_2c[2];
      }
      cVar1 = *(char *)(iVar5 + iVar7);
      do {
        FUN_4a0c97bc(param_1 + 4,*(undefined4 *)(param_1 + 0x20),
                     ((int)cVar1 & 1 << (uVar6 & 0xff)) != 0);
        uVar6 = uVar6 + 1;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      } while ((int)uVar6 < 8);
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)uVar3);
  }
  piVar4 = local_2c;
  uVar3 = local_30;
  local_38[0] = PTR_PTR_4a096ec8;
  bVar8 = local_2c != (int *)0x0;
  if (bVar8) {
    iVar7 = local_2c[2];
    cVar1 = (char)local_2c[5];
  }
  else {
    iVar7 = 0;
    cVar1 = '\0';
  }
  local_2c = (int *)0x0;
  local_30 = 0;
  if ((piVar4 == (int *)0x0) || (iVar5 = (**(code **)(*piVar4 + 8))(piVar4), iVar5 == 0)) {
    bVar2 = 0;
  }
  else {
    (**(code **)(*piVar4 + 4))(piVar4);
    bVar2 = 1;
  }
  if (!(bool)(bVar2 & (bVar8 && cVar1 != '\0'))) {
    iVar7 = 0;
  }
  if (iVar7 != 0) {
    iVar5 = 0;
    if (0 < (int)uVar3) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)uVar3);
      if (iVar7 == 0) goto LAB_4a096e64;
    }
    FUN_4a14f21c(iVar7);
  }
LAB_4a096e64:
  FUN_4a0c6bf4(local_38);
  if (param_2 == (int *)0x0) {
    return;
  }
  iVar7 = (**(code **)(*param_2 + 8))(param_2);
  if (iVar7 != 0) {
    (**(code **)(*param_2 + 4))(param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a096e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a096ecc

void FUN_4a096ecc(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (0 < param_3) {
    do {
      FUN_4a0c97bc(param_1 + 4,*(undefined4 *)(param_1 + 0x20),(param_2 & 1 << (uVar1 & 0xff)) != 0)
      ;
      uVar1 = uVar1 + 1;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    } while ((int)uVar1 < param_3);
    return;
  }
  return;
}



// Address: 4a096f20

void FUN_4a096f20(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = PTR_PTR_4a096f44;
  iVar1 = FUN_4a0c98ac(param_1 + 1);
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  return;
}



// Address: 4a097040

int FUN_4a097040(undefined4 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  *param_1 = PTR_PTR_4a097124;
  param_1[1] = PTR_PTR_4a097128;
  puVar2 = PTR_PTR_4a09712c;
  param_1[3] = PTR_PTR_4a09712c;
  iVar4 = param_1[5];
  piVar5 = (int *)param_1[6];
  if (piVar5 != (int *)0x0) {
    iVar6 = piVar5[2];
    puVar2 = (undefined *)(uint)*(byte *)(piVar5 + 5);
  }
  else {
    iVar6 = 0;
  }
  param_1[6] = 0;
  param_1[5] = 0;
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
      if (iVar3 == 0) goto LAB_4a097108;
    }
    FUN_4a14f21c();
  }
LAB_4a097108:
  iVar4 = FUN_4a0c6bf4(param_1 + 3);
  iVar4 = FUN_4a0c6bf4(iVar4 + -8);
  return iVar4 + -4;
}



// Address: 4a097130

void FUN_4a097130(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 * 4 + 0x18;
    if (*(int *)(*param_2 + iVar1) != 0) {
      FUN_4a097130(param_1,iVar1 + *param_2);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  thunk_FUN_4a161530(*param_2);
  *param_2 = 0;
  return;
}



// Address: 4a097184

void FUN_4a097184(int param_1,undefined4 param_2)

{
  undefined4 local_8 [2];
  
  local_8[0] = 0;
  FUN_4a0974b0(param_1,*(undefined4 *)(param_1 + 4),param_2,local_8);
  return;
}



// Address: 4a0971a8

void FUN_4a0971a8(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x30) = param_2;
  if (param_2 < *(uint *)(param_1 + 0x2c)) {
    do {
      FUN_4a0971f0(param_1,*(undefined4 *)(param_1 + 0x34),param_1 + 0x2c,param_1 + 8);
    } while (*(uint *)(param_1 + 0x30) < *(uint *)(param_1 + 0x2c));
    return;
  }
  return;
}



// Address: 4a0971f0

void FUN_4a0971f0(undefined4 param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  do {
    param_2 = param_2 + -1;
    if (param_2 < 1) break;
  } while (*(int *)(param_4 + param_2 * 4) == 0);
  iVar4 = 0;
  puVar3 = *(undefined1 **)(param_4 + param_2 * 4);
  iVar5 = 0;
  iVar6 = 0;
  iVar7 = 0;
  iVar2 = 0;
  *(undefined4 *)(param_4 + param_2 * 4) = *(undefined4 *)(puVar3 + 0x38);
  do {
    iVar1 = *(int *)(puVar3 + iVar2 * 4 + 0x18);
    if (iVar1 != 0) {
      iVar4 = iVar4 + *(int *)(iVar1 + 4);
      iVar5 = iVar5 + *(int *)(iVar1 + 8);
      iVar6 = iVar6 + *(int *)(iVar1 + 0xc);
      *(int *)(puVar3 + 0x10) = *(int *)(iVar1 + 0x10) + *(int *)(puVar3 + 0x10);
      thunk_FUN_4a161530(*(undefined4 *)(puVar3 + iVar2 * 4 + 0x18));
      iVar7 = iVar7 + 1;
      *(undefined4 *)(puVar3 + iVar2 * 4 + 0x18) = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  *puVar3 = 1;
  *(int *)(puVar3 + 4) = iVar4;
  *(int *)(puVar3 + 8) = iVar5;
  *(int *)(puVar3 + 0xc) = iVar6;
  *param_3 = (*param_3 - iVar7) + 1;
  return;
}



// Address: 4a0972b8

void FUN_4a0972b8(undefined4 param_1,int *param_2,byte *param_3,byte *param_4,byte *param_5,
                 int param_6)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_2;
  if (pcVar3 == (char *)0x0) {
    return;
  }
  if (*pcVar3 != '\0') {
    bVar1 = FUN_4a0066d8(*(undefined4 *)(pcVar3 + 4),*(undefined4 *)(pcVar3 + 0x10));
    *param_3 = bVar1;
    bVar1 = FUN_4a0066d8(*(undefined4 *)(*param_2 + 8),*(undefined4 *)(*param_2 + 0x10));
    *param_4 = bVar1;
    bVar1 = FUN_4a0066d8(*(undefined4 *)(*param_2 + 0xc),*(undefined4 *)(*param_2 + 0x10));
    *param_5 = bVar1;
    return;
  }
  bVar1 = PTR_DAT_4a097398[param_6];
  uVar2 = 7 - param_6;
  FUN_4a0972b8(param_1,pcVar3 + ((uint)(byte)((*param_3 & bVar1) >> (uVar2 & 0xff)) << 2 |
                                 (uint)(byte)((*param_4 & bVar1) >> (uVar2 & 0xff)) << 1 |
                                (uint)(byte)((bVar1 & *param_5) >> (uVar2 & 0xff))) * 4 + 0x18,
               param_3,param_4,param_5,param_6 + 1);
  return;
}



// Address: 4a09739c

void FUN_4a09739c(undefined4 param_1,undefined4 *param_2,uint param_3,uint param_4,uint param_5,
                 int param_6)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  
  pcVar1 = (char *)*param_2;
  if (pcVar1 == (char *)0x0) {
    return;
  }
  if (*pcVar1 == '\0') {
    uVar2 = 7 - param_6;
    uVar3 = (uint)(byte)PTR_DAT_4a09743c[param_6];
    FUN_4a09739c(param_1,pcVar1 + (((uVar3 & param_3) >> (uVar2 & 0xff)) << 2 |
                                   ((uVar3 & param_4) >> (uVar2 & 0xff)) << 1 |
                                  (uVar3 & param_5) >> (uVar2 & 0xff)) * 4 + 0x18,param_3,param_4);
    return;
  }
  return;
}



// Address: 4a097440

void FUN_4a097440(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_4a0972b8(param_1,param_1 + 4,param_2,param_3,param_4,0);
  return;
}



// Address: 4a097474

void FUN_4a097474(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_4a09739c(param_1,param_1 + 4,param_2,param_3,param_4,0);
  return;
}



// Address: 4a0974a8

undefined4 FUN_4a0974a8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// Address: 4a0974b0

void FUN_4a0974b0(undefined4 param_1,char *param_2,int param_3,int *param_4)

{
  undefined1 uVar1;
  int iVar2;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  if (*param_2 != '\0') {
    uVar1 = FUN_4a0066d8(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 0x10));
    *(undefined1 *)(param_3 + *param_4 * 4) = uVar1;
    uVar1 = FUN_4a0066d8(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
    *(undefined1 *)(param_3 + *param_4 * 4 + 2) = uVar1;
    uVar1 = FUN_4a0066d8(*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10));
    *(undefined1 *)(param_3 + *param_4 * 4 + 1) = uVar1;
    *(undefined1 *)(param_3 + *param_4 * 4 + 3) = 0xff;
    *(int *)(param_2 + 0x14) = *param_4;
    *param_4 = *param_4 + 1;
    return;
  }
  iVar2 = 0;
  do {
    if (*(int *)(param_2 + iVar2 * 4 + 0x18) != 0) {
      FUN_4a0974b0(param_1,*(int *)(param_2 + iVar2 * 4 + 0x18),param_3,param_4);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  return;
}



// Address: 4a097580

void FUN_4a097580(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_4a09760c(param_1,param_1 + 4,param_2,param_3);
  if (*(uint *)(param_1 + 0x30) < *(uint *)(param_1 + 0x2c)) {
    do {
      FUN_4a0971f0(param_1,*(undefined4 *)(param_1 + 0x34),param_1 + 0x2c,param_1 + 8);
    } while (*(uint *)(param_1 + 0x30) < *(uint *)(param_1 + 0x2c));
    return;
  }
  return;
}



// Address: 4a09760c

void FUN_4a09760c(undefined4 param_1,int *param_2,uint param_3,uint param_4,uint param_5,int param_6
                 ,int param_7,int *param_8,int param_9)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  
  piVar5 = param_2;
  uVar6 = param_3;
  uVar7 = param_4;
  if (*param_2 == 0) {
    puVar1 = (undefined4 *)thunk_FUN_4a161570(0x3c);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    if (puVar1 != (undefined4 *)0x0) {
      *(bool *)puVar1 = param_7 == param_6;
      if (param_7 == param_6) {
        *param_8 = *param_8 + 1;
      }
      else {
        puVar1[0xe] = *(undefined4 *)(param_9 + param_7 * 4);
        *(undefined4 **)(param_9 + param_7 * 4) = puVar1;
      }
    }
    *param_2 = (int)puVar1;
  }
  pcVar4 = (char *)*param_2;
  if (*pcVar4 == '\0') {
    uVar2 = 7 - param_7;
    uVar3 = (uint)(byte)PTR_DAT_4a097758[param_7];
    FUN_4a09760c(param_1,pcVar4 + (((uVar3 & param_3) >> (uVar2 & 0xff)) << 2 |
                                   ((uVar3 & param_4) >> (uVar2 & 0xff)) << 1 |
                                  (uVar3 & param_5) >> (uVar2 & 0xff)) * 4 + 0x18,param_3,param_4,
                 param_5,param_6,param_7 + 1,param_8,param_9,param_1,piVar5,uVar6,uVar7);
    return;
  }
  *(int *)(pcVar4 + 0x10) = *(int *)(pcVar4 + 0x10) + 1;
  *(uint *)(*param_2 + 4) = *(int *)(*param_2 + 4) + param_3;
  *(uint *)(*param_2 + 8) = *(int *)(*param_2 + 8) + param_4;
  *(uint *)(*param_2 + 0xc) = *(int *)(*param_2 + 0xc) + param_5;
  return;
}



// Address: 4a09775c

void FUN_4a09775c(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (7 < param_3) {
    param_3 = 8;
  }
  *param_1 = PTR_PTR_4a0977d0;
  param_1[0xd] = param_3;
  if ((int)(param_3 + 1) < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = ~param_3 & 1;
  }
  param_1[1] = 0;
  param_1[0xb] = 0;
  if (uVar1 == 1) {
    param_1[2] = 0;
  }
  if ((int)uVar1 < (int)(param_3 + 1)) {
    do {
      param_1[uVar1 + 2] = 0;
      param_1[uVar1 + 3] = 0;
      uVar1 = uVar1 + 2;
    } while ((int)uVar1 < param_1[0xd] + 1);
  }
  param_1[0xc] = param_2;
  return;
}



// Address: 4a097848

undefined4 * FUN_4a097848(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = PTR_PTR_4a0978b0;
  if (param_1[1] != 0) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 * 4 + 0x18;
      if (*(int *)(param_1[1] + iVar1) != 0) {
        FUN_4a097130(param_1,iVar1 + param_1[1]);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
    thunk_FUN_4a161530(param_1[1]);
    param_1[1] = 0;
  }
  return param_1;
}



// Address: 4a0978b4

undefined4 * FUN_4a0978b4(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = host_s3eMemoryGetInt_thumb(0);
  *param_1 = uVar1;
  host_s3eMemorySetInt_thumb(0,6);
  FUN_4a161586(param_1 + 1);
  FUN_4a1615a8(PTR_DAT_4a0978dc);
  return param_1;
}



// Address: 4a0978e0

undefined4 * FUN_4a0978e0(undefined4 *param_1)

{
  host_s3eMemorySetInt_thumb(0,*param_1);
  FUN_4a1615a8(param_1 + 1);
  return param_1;
}



// Address: 4a0978fc

void FUN_4a0978fc(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *param_1 = 2;
  param_1[1] = 0;
  param_1[2] = 2;
  param_1[4] = 2;
  param_1[6] = 2;
  param_1[7] = 0;
  uVar1 = DAT_4a097998;
  uVar2 = 0x3f800000;
  param_1[9] = 0;
  param_1[5] = 0x3f800000;
  param_1[3] = uVar1;
  param_1[8] = 2;
  FUN_4a1655f0(param_1 + 10,0,0,0,0x3f800000);
  if (param_2 == 0) {
    FUN_4a1655f0(param_1 + 0xf,0,0,0,0x3f800000);
    uVar2 = 0;
  }
  else {
    FUN_4a1655f0(param_1 + 0xf,0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  }
  FUN_4a1655f0(param_1 + 0x14,uVar2,uVar2,uVar2,0);
  FUN_4a1655f0(param_1 + 0x19,0,0,0x3f800000,0);
  param_1[0x1e] = 2;
  uVar1 = DAT_4a09799c;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = uVar1;
  return;
}



// Address: 4a0979a0

void FUN_4a0979a0(int *param_1,int param_2)

{
  param_2 = param_2 + 0x4000;
  if (*param_1 == 1) {
    FUN_4a150494(param_2);
  }
  else {
    FUN_4a15047c(param_2,DAT_4a097ac0,param_1[1]);
  }
  if (param_1[2] == 1) {
    FUN_4a150494(param_2);
  }
  else {
    FUN_4a15047c(param_2,DAT_4a097ac0 + 1,param_1[3]);
  }
  if (param_1[4] == 1) {
    FUN_4a150494(param_2);
  }
  else {
    FUN_4a15047c(param_2,DAT_4a097ac0 + 2,param_1[5]);
  }
  if (param_1[6] == 1) {
    FUN_4a150494(param_2);
  }
  else {
    FUN_4a15047c(param_2,DAT_4a097ac0 + 3,param_1[7]);
  }
  if (param_1[8] == 1) {
    FUN_4a150494(param_2);
  }
  else {
    FUN_4a15047c(param_2,DAT_4a097ac0 + 4,param_1[9]);
  }
  if (param_1[10] == 1) {
    FUN_4a1504a8(param_2);
  }
  else {
    FUN_4a150488(param_2,0x1200,param_1 + 0xb);
  }
  if (param_1[0xf] == 1) {
    FUN_4a1504a8(param_2);
  }
  else {
    FUN_4a150488(param_2,DAT_4a097ac0 + -4,param_1 + 0x10);
  }
  if (param_1[0x14] == 1) {
    FUN_4a1504a8(param_2);
  }
  else {
    FUN_4a150488(param_2,DAT_4a097ac0 + -3,param_1 + 0x15);
  }
  if (param_1[0x19] == 1) {
    FUN_4a1504a8(param_2);
  }
  else {
    FUN_4a150488(param_2,DAT_4a097ac0 + -2,param_1 + 0x1a);
  }
  if (param_1[0x1e] == 1) {
    FUN_4a1504a8(param_2);
  }
  else {
    FUN_4a150488(param_2,DAT_4a097ac0 + -1,param_1 + 0x1f);
  }
  return;
}



// Address: 4a097ac4

int FUN_4a097ac4(void)

{
  int iVar1;
  
  iVar1 = FUN_4a09c884();
  iVar1 = FUN_4a09c884(iVar1 + 8);
  iVar1 = FUN_4a09c884(iVar1 + 8);
  iVar1 = FUN_4a09c884(iVar1 + 8);
  iVar1 = FUN_4a09c884(iVar1 + 8);
  iVar1 = FUN_4a165670(iVar1 + 8);
  iVar1 = FUN_4a165670(iVar1 + 0x14);
  iVar1 = FUN_4a165670(iVar1 + 0x14);
  iVar1 = FUN_4a165670(iVar1 + 0x14);
  iVar1 = FUN_4a16559e(iVar1 + 0x14);
  return iVar1 + -0x78;
}



// Address: 4a097b08

void FUN_4a097b08(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint index;
  undefined1 auStack_12c [4];
  undefined1 auStack_128 [4];
  undefined1 auStack_124 [4];
  undefined1 auStack_120 [256];
  undefined1 auStack_20 [16];
  
  FUN_4a0978b4(auStack_20);
  host_glGetProgramiv_thumb(param_2,DAT_4a097b8c,(void *)(param_1 + 0x4c));
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x4c);
  for (index = 0; (int)index < *(int *)(param_1 + 0x4c); index = index + 1) {
    host_glGetActiveUniform_thumb
              (param_2,index,0xff,auStack_12c,auStack_124,auStack_128,auStack_120);
    iVar1 = host_glGetUniformLocation_thumb(param_2,auStack_120);
    iVar3 = *(int *)(param_1 + 0x50);
    if (iVar3 <= iVar1 + 1) {
      iVar3 = host_glGetUniformLocation_thumb(param_2,auStack_120);
      iVar3 = iVar3 + 1;
    }
    *(int *)(param_1 + 0x50) = iVar3;
  }
  FUN_4a00191c(*(undefined4 *)(param_1 + 0x48),PTR_FUN_4a070350_1_4a097b90);
  uVar2 = FUN_4a149130(0xc,*(undefined4 *)(param_1 + 0x50),PTR_LAB_4a070346_1_4a097b94,0);
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  FUN_4a0978e0(auStack_20);
  return;
}



// Address: 4a097b98

void FUN_4a097b98(int param_1,int param_2,undefined4 param_3)

{
  undefined4 auStack_8 [2];
  
  auStack_8[0] = param_3;
  FUN_4a070218(*(int *)(param_1 + 0x48) + param_2 * 0xc,5,1,auStack_8,param_1,param_2);
  return;
}



// Address: 4a097bb2

void FUN_4a097bb2(int param_1,int param_2,undefined4 param_3)

{
  undefined4 auStack_8 [2];
  
  auStack_8[0] = param_3;
  FUN_4a070218(*(int *)(param_1 + 0x48) + param_2 * 0xc,6,1,auStack_8,param_1,param_2);
  return;
}



// Address: 4a097bcc

void FUN_4a097bcc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = param_3;
  uStack_c = param_4;
  FUN_4a070218(*(int *)(param_1 + 0x48) + param_2 * 0xc,9,1,&local_10);
  return;
}



// Address: 4a097bea

void FUN_4a097bea(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_10 = param_5;
  local_18 = param_3;
  uStack_14 = param_4;
  FUN_4a070218(*(int *)(param_1 + 0x48) + param_2 * 0xc,0xd,1,&local_18);
  return;
}



// Address: 4a097c0a

undefined8
FUN_4a097c0a(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  uStack_18 = param_5;
  local_14 = param_6;
  local_20 = param_3;
  uStack_1c = param_4;
  FUN_4a070218(*(int *)(param_1 + 0x48) + param_2 * 0xc,0x11,1,&local_20);
  return CONCAT44(uStack_1c,local_20);
}



// Address: 4a097c2e

void FUN_4a097c2e(undefined4 param_1,uint param_2)

{
  host_glDeleteProgram_thumb(param_2);
  return;
}



// Address: 4a097c3c

void FUN_4a097c3c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_4a070218(*(int *)(param_1 + 0x48) + param_2 * 0xc,5,param_3,param_4);
  return;
}



// Address: 4a097c56

void FUN_4a097c56(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_4a070218(*(int *)(param_1 + 0x48) + param_2 * 0xc,6,param_3,param_4);
  return;
}



// Address: 4a097c70

void FUN_4a097c70(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_4a070218(*(int *)(param_1 + 0x48) + param_2 * 0xc,9,param_3,param_4);
  return;
}



// Address: 4a097c8a

void FUN_4a097c8a(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_4a070218(*(int *)(param_1 + 0x48) + param_2 * 0xc,10,param_3,param_4);
  return;
}



// Address: 4a097ca4

void FUN_4a097ca4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_4a070218(*(int *)(param_1 + 0x48) + param_2 * 0xc,0xd,param_3,param_4);
  return;
}



// Address: 4a097cbe

void FUN_4a097cbe(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_4a070218(*(int *)(param_1 + 0x48) + param_2 * 0xc,0xe,param_3,param_4);
  return;
}



// Address: 4a097cd8

void FUN_4a097cd8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_4a070218(*(int *)(param_1 + 0x48) + param_2 * 0xc,0x11,param_3,param_4);
  return;
}



// Address: 4a097cf2

void FUN_4a097cf2(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_4a070218(*(int *)(param_1 + 0x48) + param_2 * 0xc,0x12,param_3,param_4);
  return;
}



// Address: 4a097d0c

undefined8 FUN_4a097d0c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iStack_20 = param_1;
  iStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  FUN_4a0978b4(&iStack_20);
  param_1 = param_2 * 4 + param_1;
  FUN_4a161530(*(undefined4 *)(param_1 + 8));
  iVar1 = FUN_4a0013e0(param_3);
  uVar2 = FUN_4a161570(iVar1 + 1);
  *(undefined4 *)(param_1 + 8) = uVar2;
  FUN_4a0012bc(uVar2,param_3);
  FUN_4a0978e0(&iStack_20);
  return CONCAT44(iStack_1c,iStack_20);
}



// Address: 4a097d44

void FUN_4a097d44(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  FUN_4a070218(*(int *)(param_1 + 0x48) + param_2 * 0xc,0xb,param_3,param_5);
  return;
}



// Address: 4a097d5e

void FUN_4a097d5e(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  FUN_4a070218(*(int *)(param_1 + 0x48) + param_2 * 0xc,0xf,param_3,param_5);
  return;
}



// Address: 4a097d78

void FUN_4a097d78(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  FUN_4a070218(*(int *)(param_1 + 0x48) + param_2 * 0xc,0x13,param_3,param_5);
  return;
}



// Address: 4a097d94

void FUN_4a097d94(int *param_1,int param_2)

{
  int *piVar1;
  
  if (*param_1 == 0) {
    *param_1 = param_2;
  }
  else {
    param_1[1] = param_2;
  }
  piVar1 = (int *)FUN_4a165486(PTR_DAT_4a097db4);
  *piVar1 = *piVar1 + 1;
  return;
}



// Address: 4a097db8

void FUN_4a097db8(int *param_1,int param_2)

{
  if (*param_1 == param_2) {
    *param_1 = 0;
  }
  else if (param_1[1] == param_2) {
    param_1[1] = 0;
  }
  FUN_4a03bc84(param_2);
  return;
}



// Address: 4a097ddc

void FUN_4a097ddc(int *param_1,uint *param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = host_glCreateProgram_thumb();
  *param_2 = uVar2;
  puVar1 = PTR_DAT_4a097e5c;
  if (*param_1 != 0) {
    host_glAttachShader_thumb(uVar2,*(uint *)(*(int *)PTR_DAT_4a097e5c + *param_1 * 8));
  }
  if (param_1[1] != 0) {
    host_glAttachShader_thumb(*param_2,*(uint *)(*(int *)puVar1 + param_1[1] * 8));
  }
  uVar2 = 0;
  do {
    if ((void *)param_1[uVar2 + 2] != (void *)0x0) {
      host_glBindAttribLocation_thumb(*param_2,uVar2,(void *)param_1[uVar2 + 2]);
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x10);
  if (param_1[0x12] != 0) {
    host_glLinkProgram_thumb(*param_2);
    host_glUseProgram_thumb(*param_2);
    for (iVar3 = 0; iVar3 < param_1[0x14]; iVar3 = iVar3 + 1) {
      FUN_4a070270(param_1[0x12] + iVar3 * 0xc,iVar3);
    }
  }
  return;
}



// Address: 4a097e60

void FUN_4a097e60(void)

{
  return;
}



// Address: 4a097e62

void FUN_4a097e62(void)

{
  host_glCreateProgram_thumb();
  return;
}



// Address: 4a097e70

int * FUN_4a097e70(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  piStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  FUN_4a0978b4(&piStack_20);
  if (*param_1 != 0) {
    FUN_4a03bc84();
  }
  if (param_1[1] != 0) {
    FUN_4a03bc84();
  }
  iVar1 = 0;
  do {
    FUN_4a161530(param_1[iVar1 + 2]);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  FUN_4a00191c(param_1[0x12],PTR_FUN_4a070350_1_4a097ec0);
  thunk_FUN_4a00121c(param_1,0x54);
  FUN_4a0978e0(&piStack_20);
  return param_1;
}



// Address: 4a097ec4

void FUN_4a097ec4(int param_1,int param_2,uint param_3,uint param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int local_18;
  uint local_14;
  uint local_10;
  
  local_18 = param_2;
  local_14 = param_3;
  local_10 = param_4;
  FUN_4a06067c();
  local_10 = (uint)(*(int *)(param_1 + 0x10) != 0);
  FUN_4a0365d4(&local_10,1,1,1);
  puVar1 = PTR_DAT_4a097f70;
  if ((char)local_10 != '\0') {
    iVar2 = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar2 = FUN_4a0013e0();
      iVar2 = iVar2 + 1;
    }
    local_18 = iVar2;
    FUN_4a039aec(&local_18,1,0x1f,4);
    if (*puVar1 == '\x01') {
      uVar3 = thunk_FUN_4a161570(local_18);
      *(undefined4 *)(param_1 + 0x10) = uVar3;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x10);
    }
    FUN_4a036638(uVar3,local_18,7,1);
  }
  local_14 = (uint)(*(int *)(param_1 + 0x14) != 0);
  FUN_4a0365d4(&local_14,1,1,1);
  if ((char)local_14 != '\0') {
    FUN_4a039aec(param_1 + 0x18,1,0x1f,4);
    if (*puVar1 == '\x01') {
      uVar3 = thunk_FUN_4a161570(*(undefined4 *)(param_1 + 0x18));
      *(undefined4 *)(param_1 + 0x14) = uVar3;
    }
    FUN_4a039b90(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),8,1);
  }
  return;
}



// Address: 4a097f74

void FUN_4a097f74(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a06a6b8();
  *puVar1 = PTR_PTR_4a097f8c;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// Address: 4a097f90

void FUN_4a097f90(int param_1)

{
  if (param_1 != 0) {
    FUN_4a097fa4();
    thunk_FUN_4a161530();
  }
  return;
}



// Address: 4a097fa4

void FUN_4a097fa4(undefined4 *param_1)

{
  *param_1 = PTR_PTR_4a097fc4;
  thunk_FUN_4a161530(param_1[4]);
  thunk_FUN_4a161530(param_1[5]);
  FUN_4a0606ec(param_1);
  return;
}



// Address: 4a097fc8

void FUN_4a097fc8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 auStack_1a8 [228];
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  int local_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [128];
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  
  iVar1 = FUN_4a0bc374();
  local_28 = (undefined1 *)0x0;
  local_24 = (undefined1 *)0x0;
  local_20 = (undefined1 *)0x0;
  local_b4 = *(int *)(iVar1 + 0xc);
  local_b0 = *(int *)(iVar1 + 0x10);
  uStack_ac = 0;
  iVar1 = (local_b0 - local_b4) + 1;
  local_b8 = 0;
  if (iVar1 == 0) {
    FUN_4a0bcbf4(PTR_s_basic_string_4a0981e8);
  }
  else {
    puVar2 = (undefined1 *)FUN_4a15e080(iVar1);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = (undefined1 *)FUN_4a1669a8();
    }
    local_20 = puVar2 + iVar1;
    local_28 = puVar2;
    local_24 = puVar2;
  }
  puVar2 = local_28;
  iVar7 = local_b0;
  iVar1 = local_b4;
  local_b8 = 0;
  local_c0 = 0;
  local_bc = 0;
  local_c4 = 0;
  local_c0 = FUN_4a166140();
  if (iVar7 != iVar1) {
    iVar7 = iVar7 - iVar1;
    iVar1 = FUN_4a000ec8(puVar2,iVar1,iVar7);
    puVar2 = (undefined1 *)(iVar1 + iVar7);
  }
  local_b8 = 0;
  *puVar2 = 0;
  local_24 = puVar2;
  FUN_4a13e59c(param_3,auStack_a8);
  iVar1 = thunk_FUN_4a001314(auStack_a8,&DAT_4a0981ec,4);
  if (iVar1 == 0) {
    uVar3 = thunk_FUN_4a0013e0(&DAT_4a0981f0);
    if ((uint)((int)local_24 - (int)local_28) < uVar3) {
      if (local_24 != local_28) {
        FUN_4a000eb8(local_28,&DAT_4a0981f0);
      }
      FUN_4a166340(&local_28,&DAT_4a0981f0 + ((int)local_24 - (int)local_28),&DAT_4a0981f0 + uVar3);
    }
    else {
      if (uVar3 != 0) {
        FUN_4a000eb8(local_28,&DAT_4a0981f0,uVar3);
      }
      puVar2 = local_24;
      puVar6 = local_28 + uVar3;
      if (puVar6 != local_24) {
        FUN_4a000ec8(puVar6,local_24,1);
        local_24 = local_24 + -((int)puVar2 - (int)puVar6);
      }
    }
  }
  iVar1 = thunk_FUN_4a0013e0(auStack_a8);
  FUN_4a166340(&local_28,auStack_a8,auStack_a8 + iVar1);
  uVar4 = thunk_FUN_4a161570(0x14);
  piVar5 = (int *)FUN_4a0c707c(uVar4,local_28);
  FUN_4a00121c(auStack_1a8,0x100);
  FUN_4a13e59c(piVar5,auStack_1a8);
  uVar4 = thunk_FUN_4a161570(0x14);
  FUN_4a0c707c(uVar4,auStack_1a8);
  uVar4 = FUN_4a0c49e0();
  FUN_4a0b53c4(param_1,uVar4);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  if (local_28 != (undefined1 *)0x0) {
    FUN_4a14f21c();
  }
  return;
}



// Address: 4a0981f4

int * FUN_4a0981f4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined1 auStack_28 [8];
  int local_20;
  int local_1c;
  
  FUN_4a097fc8(auStack_28,param_1,param_2);
  if (local_1c == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(local_1c + 8);
  }
  piVar5 = (int *)0x0;
  if (iVar1 != 0) {
    if (local_1c == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = *(undefined4 **)(local_1c + 8);
    }
    piVar5 = (int *)FUN_4a16588c(*puVar2);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
    }
  }
  uVar3 = local_20 - 1;
  if (-1 < (int)uVar3) {
    do {
      if (local_1c == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(local_1c + 8);
      }
      piVar4 = *(int **)(iVar1 + uVar3 * 4);
      if ((piVar4 != (int *)0x0) && (iVar1 = (**(code **)(*piVar4 + 8))(piVar4), iVar1 != 0)) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      uVar3 = uVar3 - 1;
    } while (uVar3 < 0x80000000);
  }
  FUN_4a16af4c(auStack_28);
  return piVar5;
}



// Address: 4a0982e0

int * FUN_4a0982e0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined1 auStack_2c [8];
  int local_24;
  int local_20;
  
  uVar1 = thunk_FUN_4a161570(0x14);
  piVar2 = (int *)FUN_4a0c707c(uVar1,PTR_s_bin_anim2d_bin_4a098410 + param_2 * 0x3b);
  FUN_4a097fc8(auStack_2c,param_1,piVar2);
  if (local_20 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_20 + 8);
  }
  piVar7 = (int *)0x0;
  if (iVar3 != 0) {
    if (local_20 == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = *(undefined4 **)(local_20 + 8);
    }
    piVar7 = (int *)FUN_4a16588c(*puVar4);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0xc))(piVar7);
    }
  }
  uVar5 = local_24 - 1;
  if (-1 < (int)uVar5) {
    do {
      if (local_20 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(local_20 + 8);
      }
      piVar6 = *(int **)(iVar3 + uVar5 * 4);
      if ((piVar6 != (int *)0x0) && (iVar3 = (**(code **)(*piVar6 + 8))(piVar6), iVar3 != 0)) {
        (**(code **)(*piVar6 + 4))(piVar6);
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 < 0x80000000);
  }
  FUN_4a16af4c(auStack_2c);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  return piVar7;
}



// Address: 4a098414

void FUN_4a098414(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_108 [256];
  
  FUN_4a00121c(auStack_108,0x100);
  thunk_FUN_4a001538(auStack_108,PTR_s_bin_anim2d_bin_4a098464 + param_1 * 0x3b);
  uVar1 = thunk_FUN_4a161570(0x14);
  FUN_4a0c707c(uVar1,auStack_108);
  FUN_4a0c49e0();
  return;
}



// Address: 4a098468

int * FUN_4a098468(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined1 auStack_2c [8];
  int local_24;
  int local_20;
  
  uVar1 = thunk_FUN_4a161570(0x14);
  piVar2 = (int *)FUN_4a0c707c(uVar1,PTR_s_bin_anim2d_bin_4a098594 + param_2 * 0x3b);
  piVar7 = (int *)0x0;
  FUN_4a097fc8(auStack_2c,param_1,piVar2);
  if (local_20 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = *(undefined4 **)(local_20 + 8);
  }
  iVar4 = FUN_4a165944(*puVar3);
  iVar5 = local_24;
  if (iVar4 != 0) {
    if (local_20 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = *(undefined4 **)(local_20 + 8);
    }
    piVar7 = (int *)*puVar3;
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0xc))(piVar7);
      iVar5 = local_24;
    }
  }
  while (iVar5 != 0) {
    iVar5 = iVar5 + -1;
    if (local_20 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(local_20 + 8);
    }
    piVar6 = *(int **)(iVar4 + iVar5 * 4);
    if ((piVar6 != (int *)0x0) && (iVar4 = (**(code **)(*piVar6 + 8))(piVar6), iVar4 != 0)) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
  }
  FUN_4a16af4c(auStack_2c);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  return piVar7;
}



// Address: 4a098598

int * FUN_4a098598(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined1 auStack_28 [8];
  int local_20;
  int local_1c;
  
  piVar6 = (int *)0x0;
  FUN_4a097fc8(auStack_28,param_1,param_2);
  if (local_1c == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = *(undefined4 **)(local_1c + 8);
  }
  iVar2 = FUN_4a165944(*puVar1);
  iVar4 = local_20;
  if (iVar2 != 0) {
    if (local_1c == 0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = *(undefined4 **)(local_1c + 8);
    }
    piVar6 = (int *)*puVar1;
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0xc))(piVar6);
      iVar4 = local_20;
    }
  }
  while (iVar4 != 0) {
    iVar4 = iVar4 + -1;
    if (local_1c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(local_1c + 8);
    }
    piVar5 = *(int **)(iVar2 + iVar4 * 4);
    if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
  }
  uVar3 = thunk_FUN_4a161570(0xe8);
  piVar5 = (int *)FUN_4a0b7ad4(uVar3,piVar6);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))(piVar5);
  }
  if ((piVar6 != (int *)0x0) && (iVar4 = (**(code **)(*piVar6 + 8))(piVar6), iVar4 != 0)) {
    (**(code **)(*piVar6 + 4))(piVar6);
  }
  FUN_4a16af4c(auStack_28);
  return piVar5;
}



// Address: 4a0986e4

undefined4 FUN_4a0986e4(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = thunk_FUN_4a161570(0x14);
  piVar2 = (int *)FUN_4a0c707c(uVar1,PTR_s_bin_anim2d_bin_4a098748 + param_2 * 0x3b);
  uVar1 = FUN_4a098598(param_1,piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  return uVar1;
}



// Address: 4a09874c

void FUN_4a09874c(undefined4 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_4a098768;
  *param_1 = PTR_PTR_4a098768;
  param_1[1] = puVar1 + 0x10;
  param_1[2] = puVar1 + 0x20;
  return;
}



// Address: 4a098798

void FUN_4a098798(int param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined1 uVar14;
  bool bVar15;
  undefined1 auStack_94 [8];
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [8];
  int iStack_44;
  int *piStack_40;
  undefined1 auStack_38 [20];
  
  iVar12 = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  if (*(int *)(param_1 + 0x38) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x38) = param_2;
  iVar4 = FUN_4a0ff494();
  iVar4 = FUN_4a143ac8(*(undefined4 *)(iVar4 + 0x520),param_2);
  FUN_4a0ca898(*(undefined4 *)(param_1 + 0x34),(int)*(short *)(iVar4 + 0x20));
  piVar5 = (int *)FUN_4a0c6bc0(auStack_4c);
  puVar2 = PTR_PTR_4a098b38;
  piVar5[2] = 0;
  piVar5[3] = 0;
  *piVar5 = (int)puVar2;
  puVar1 = PTR_PTR_4a098b34;
  iVar4 = FUN_4a15e080(0x18);
  if (iVar4 == 0) {
    iVar4 = FUN_4a1669a8();
  }
  iVar6 = 0;
  do {
    *(undefined4 *)(iVar4 + iVar6 * 4) = 0;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 6);
  thunk_FUN_4a161570(0x18);
  puVar7 = (undefined4 *)FUN_4a0c0628();
  puVar7[3] = 4;
  puVar7[4] = 6;
  puVar3 = PTR_PTR_4a098b3c;
  *puVar7 = PTR_PTR_4a098b3c;
  puVar7[2] = iVar4;
  *(undefined1 *)(puVar7 + 5) = 1;
  if (puVar7 != (undefined4 *)0x0) {
    (**(code **)(puVar3 + 0xc))(puVar7);
  }
  (**(code **)(*piVar5 + 0x1c))(piVar5);
  piVar5[2] = 6;
  piVar5[3] = (int)puVar7;
  uVar13 = *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x30);
  puVar7 = (undefined4 *)FUN_4a0c6bc0(auStack_38);
  *puVar7 = puVar1;
  puVar7[2] = iStack_44;
  puVar7[3] = piStack_40;
  if (piStack_40 != (int *)0x0) {
    (**(code **)(*piStack_40 + 0xc))();
  }
  *puVar7 = puVar2;
  FUN_4a07aa9c(puVar7,uVar13,0);
  FUN_4a16bef4(auStack_38);
  iVar4 = 0;
  if (0 < iStack_44) {
    do {
      iVar6 = iVar12;
      if (piStack_40 != (int *)0x0) {
        iVar6 = piStack_40[2];
      }
      piVar5 = (int *)(iVar6 + iVar4 * 4);
      iVar4 = iVar4 + 1;
      *piVar5 = *piVar5 >> 0x10;
    } while (iVar4 < iStack_44);
  }
  bVar15 = piStack_40 != (int *)0x0;
  iVar4 = iVar12;
  if (bVar15) {
    iVar4 = piStack_40[2];
  }
  iVar6 = iVar12;
  if (bVar15) {
    iVar6 = piStack_40[2];
  }
  iVar10 = iVar12;
  if (bVar15) {
    iVar10 = piStack_40[2];
  }
  iVar8 = iVar12;
  if (bVar15) {
    iVar8 = piStack_40[2];
  }
  FUN_4a171fac(*(int *)(iVar10 + 0x14) * 2 * *(int *)(iVar8 + 0x14) * 2 +
               *(int *)(iVar6 + 0xc) * 2 * *(int *)(iVar4 + 0xc) * 2);
  uVar13 = FUN_4a002b60();
  uVar14 = 1;
  iVar4 = iVar12;
  if (piStack_40 != (int *)0x0) {
    iVar4 = piStack_40[2];
  }
  uVar9 = FUN_4a171fac(*(undefined4 *)(iVar4 + 0x10));
  FUN_4a172458(uVar9,uVar13);
  if (!(bool)uVar14) {
    uVar13 = uVar9;
  }
  bVar15 = piStack_40 != (int *)0x0;
  iVar4 = iVar12;
  if (bVar15) {
    iVar4 = piStack_40[2];
  }
  iVar6 = iVar12;
  if (bVar15) {
    iVar6 = piStack_40[2];
  }
  iVar10 = iVar12;
  if (bVar15) {
    iVar10 = piStack_40[2];
  }
  uVar9 = FUN_4a171fac(*(int *)(iVar6 + 0xc) * 2 + *(int *)(iVar10 + 0x14) * 2 +
                       *(int *)(iVar4 + 0x10));
  uVar9 = FUN_4a17211c(uVar9,DAT_4a098b40);
  if (piStack_40 != (int *)0x0) {
    iVar12 = piStack_40[2];
  }
  uVar11 = FUN_4a171fac(*(int *)(iVar12 + 0x10) >> 1);
  uVar9 = FUN_4a1725c0(uVar13,uVar9);
  uVar9 = FUN_4a17211c(uVar9,DAT_4a098b44);
  uVar9 = FUN_4a171a94(uVar9,0x40400000);
  uVar13 = FUN_4a17211c(uVar13,uVar9);
  FUN_4a0b8a1c(auStack_94);
  uStack_8c = *(undefined4 *)PTR_DAT_4a098b48;
  uStack_88 = *(undefined4 *)(PTR_DAT_4a098b48 + 4);
  uStack_84 = *(undefined4 *)(PTR_DAT_4a098b48 + 8);
  uStack_80 = *(undefined4 *)(PTR_DAT_4a098b48 + 0xc);
  uStack_7c = *(undefined4 *)(PTR_DAT_4a098b48 + 0x10);
  uStack_78 = *(undefined4 *)(PTR_DAT_4a098b48 + 0x14);
  uStack_74 = *(undefined4 *)(PTR_DAT_4a098b48 + 0x18);
  uStack_70 = *(undefined4 *)(PTR_DAT_4a098b48 + 0x1c);
  uStack_6c = *(undefined4 *)(PTR_DAT_4a098b48 + 0x20);
  uStack_68 = *(undefined4 *)(PTR_DAT_4a098b48 + 0x24);
  uStack_64 = *(undefined4 *)(PTR_DAT_4a098b48 + 0x28);
  uStack_60 = *(undefined4 *)(PTR_DAT_4a098b48 + 0x2c);
  uStack_5c = *(undefined4 *)(PTR_DAT_4a098b48 + 0x30);
  uStack_58 = *(undefined4 *)(PTR_DAT_4a098b48 + 0x34);
  uStack_54 = *(undefined4 *)(PTR_DAT_4a098b48 + 0x38);
  uStack_50 = *(undefined4 *)(PTR_DAT_4a098b48 + 0x3c);
  FUN_4a0b7e44(auStack_94,0,uVar11,0);
  FUN_4a0b7cb0(auStack_94,0x42340000,0,0x3f800000);
  FUN_4a0b7cb0(auStack_94,0xc1a00000,0x3f800000);
  FUN_4a0b7e44(auStack_94,0,0,uVar13);
  FUN_4a0b7cb0(auStack_94,0x42b40000,0);
  FUN_4a0af058(*(undefined4 *)(param_1 + 0x30),auStack_94);
  FUN_4a0c6bf4(auStack_94);
  FUN_4a16bef4(auStack_4c);
  return;
}



// Address: 4a098b50

void FUN_4a098b50(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined1 auStack_54 [8];
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  *(undefined1 *)(param_1 + 0x3c) = 1;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  FUN_4a0ca898(*(undefined4 *)(param_1 + 0x34),0xa9);
  uVar1 = FUN_4a13eaec(*(undefined4 *)(param_1 + 0x34),0x2c1);
  FUN_4a0b4608(uVar1,param_2 ^ 1);
  FUN_4a0b8a1c(auStack_54);
  local_4c = *(undefined4 *)PTR_DAT_4a098c64;
  uStack_48 = *(undefined4 *)(PTR_DAT_4a098c64 + 4);
  uStack_44 = *(undefined4 *)(PTR_DAT_4a098c64 + 8);
  uStack_40 = *(undefined4 *)(PTR_DAT_4a098c64 + 0xc);
  local_3c = *(undefined4 *)(PTR_DAT_4a098c64 + 0x10);
  uStack_38 = *(undefined4 *)(PTR_DAT_4a098c64 + 0x14);
  uStack_34 = *(undefined4 *)(PTR_DAT_4a098c64 + 0x18);
  uStack_30 = *(undefined4 *)(PTR_DAT_4a098c64 + 0x1c);
  local_2c = *(undefined4 *)(PTR_DAT_4a098c64 + 0x20);
  uStack_28 = *(undefined4 *)(PTR_DAT_4a098c64 + 0x24);
  uStack_24 = *(undefined4 *)(PTR_DAT_4a098c64 + 0x28);
  uStack_20 = *(undefined4 *)(PTR_DAT_4a098c64 + 0x2c);
  local_1c = *(undefined4 *)(PTR_DAT_4a098c64 + 0x30);
  uStack_18 = *(undefined4 *)(PTR_DAT_4a098c64 + 0x34);
  uStack_14 = *(undefined4 *)(PTR_DAT_4a098c64 + 0x38);
  uStack_10 = *(undefined4 *)(PTR_DAT_4a098c64 + 0x3c);
  FUN_4a0b7e44(auStack_54,0,0);
  FUN_4a0b7cb0(auStack_54,0,0,0x3f800000,0);
  FUN_4a0b7cb0(auStack_54,0x80000000,0x3f800000,0,0);
  FUN_4a0b7e44(auStack_54,0,0,0x42a00000);
  FUN_4a0b7cb0(auStack_54,0x42b40000,0,0,0x3f800000);
  FUN_4a0af058(*(undefined4 *)(param_1 + 0x30),auStack_54);
  FUN_4a0c6bf4(auStack_54);
  return;
}



// Address: 4a098c68

void FUN_4a098c68(int param_1)

{
  undefined1 auStack_58 [8];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_4a0b8a1c(auStack_58);
  local_50 = *(undefined4 *)PTR_DAT_4a098d4c;
  uStack_4c = *(undefined4 *)(PTR_DAT_4a098d4c + 4);
  uStack_48 = *(undefined4 *)(PTR_DAT_4a098d4c + 8);
  uStack_44 = *(undefined4 *)(PTR_DAT_4a098d4c + 0xc);
  local_40 = *(undefined4 *)(PTR_DAT_4a098d4c + 0x10);
  uStack_3c = *(undefined4 *)(PTR_DAT_4a098d4c + 0x14);
  uStack_38 = *(undefined4 *)(PTR_DAT_4a098d4c + 0x18);
  uStack_34 = *(undefined4 *)(PTR_DAT_4a098d4c + 0x1c);
  local_30 = *(undefined4 *)(PTR_DAT_4a098d4c + 0x20);
  uStack_2c = *(undefined4 *)(PTR_DAT_4a098d4c + 0x24);
  uStack_28 = *(undefined4 *)(PTR_DAT_4a098d4c + 0x28);
  uStack_24 = *(undefined4 *)(PTR_DAT_4a098d4c + 0x2c);
  local_20 = *(undefined4 *)(PTR_DAT_4a098d4c + 0x30);
  uStack_1c = *(undefined4 *)(PTR_DAT_4a098d4c + 0x34);
  uStack_18 = *(undefined4 *)(PTR_DAT_4a098d4c + 0x38);
  uStack_14 = *(undefined4 *)(PTR_DAT_4a098d4c + 0x3c);
  FUN_4a0b7e44(auStack_58,0,0x42000000);
  FUN_4a0b7cb0(auStack_58,0x42340000,0,0x3f800000,0);
  FUN_4a0b7cb0(auStack_58,0xc1a00000,0x3f800000,0,0);
  FUN_4a0b7e44(auStack_58,0,0,0x43480000);
  FUN_4a0b7cb0(auStack_58,0x42b40000,0,0,0x3f800000);
  FUN_4a0af058(*(undefined4 *)(param_1 + 0x30),auStack_58);
  FUN_4a0c6bf4(auStack_58);
  return;
}



// Address: 4a098d50

void FUN_4a098d50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = param_5;
  local_24 = param_6;
  local_1c = param_4;
  local_18 = param_3;
  uVar1 = FUN_4a171fac();
  uVar2 = FUN_4a171fac(param_6);
  uVar1 = FUN_4a171bb8(uVar2,uVar1);
  FUN_4a0b52c4(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)PTR_DAT_4a098e8c,uVar1,
               *(undefined4 *)PTR_DAT_4a098e88,*(undefined4 *)PTR_DAT_4a098e84);
  FUN_4a0ff494();
  piVar3 = (int *)FUN_4a0fc26c();
  FUN_4a0a83a4(piVar3,param_2);
  FUN_4a136900(piVar3);
  FUN_4a136908(piVar3);
  FUN_4a136910(piVar3);
  FUN_4a136918(piVar3);
  FUN_4a0bbc30(*(undefined4 *)PTR_DAT_4a098e90,&local_18,&local_1c,&local_20,&local_24);
  (**(code **)(*piVar3 + 0x20))(piVar3,local_18,local_1c,local_20,local_24);
  FUN_4a0487d0(1,local_18,local_1c,local_20,local_24);
  FUN_4a0a8b14(piVar3,*(undefined4 *)(param_1 + 0x2c));
  FUN_4a041910(1);
  (**(code **)(*piVar3 + 0x30))(piVar3);
  return;
}



// Address: 4a098e94

void FUN_4a098e94(int param_1)

{
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_4a0cb1ec();
  }
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  return;
}



// Address: 4a098f10

void FUN_4a098f10(int param_1,int param_2)

{
  undefined1 auStack_60 [8];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x3d) = 1;
  if (*(int *)(param_1 + 0x38) != param_2) {
    *(int *)(param_1 + 0x38) = param_2;
    FUN_4a0caeb4(*(undefined4 *)(param_1 + 0x34));
    FUN_4a06f87c(*(undefined4 *)(*(int *)(param_1 + 0x34) + 0x34),0x16170);
    FUN_4a0b8a1c(auStack_60);
    uStack_58 = *(undefined4 *)PTR_DAT_4a09903c;
    uStack_54 = *(undefined4 *)(PTR_DAT_4a09903c + 4);
    uStack_50 = *(undefined4 *)(PTR_DAT_4a09903c + 8);
    uStack_4c = *(undefined4 *)(PTR_DAT_4a09903c + 0xc);
    uStack_48 = *(undefined4 *)(PTR_DAT_4a09903c + 0x10);
    uStack_44 = *(undefined4 *)(PTR_DAT_4a09903c + 0x14);
    uStack_40 = *(undefined4 *)(PTR_DAT_4a09903c + 0x18);
    uStack_3c = *(undefined4 *)(PTR_DAT_4a09903c + 0x1c);
    uStack_38 = *(undefined4 *)(PTR_DAT_4a09903c + 0x20);
    uStack_34 = *(undefined4 *)(PTR_DAT_4a09903c + 0x24);
    uStack_30 = *(undefined4 *)(PTR_DAT_4a09903c + 0x28);
    uStack_2c = *(undefined4 *)(PTR_DAT_4a09903c + 0x2c);
    uStack_28 = *(undefined4 *)(PTR_DAT_4a09903c + 0x30);
    uStack_24 = *(undefined4 *)(PTR_DAT_4a09903c + 0x34);
    uStack_20 = *(undefined4 *)(PTR_DAT_4a09903c + 0x38);
    uStack_1c = *(undefined4 *)(PTR_DAT_4a09903c + 0x3c);
    FUN_4a0b7e44(auStack_60,0,0x42000000,0);
    FUN_4a0b7cb0(auStack_60,0x41200000,0,0x3f800000);
    FUN_4a0b7cb0(auStack_60,0xc1a00000,0x3f800000);
    FUN_4a0b7e44(auStack_60,0,0,0x42b40000);
    FUN_4a0b7cb0(auStack_60,0x42b40000,0);
    FUN_4a0af058(*(undefined4 *)(param_1 + 0x30),auStack_60);
    FUN_4a0c6bf4(auStack_60);
    return;
  }
  return;
}



// Address: 4a099040

undefined4 * FUN_4a099040(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  
  puVar2 = (undefined4 *)FUN_4a134ac8();
  puVar1 = PTR_PTR_4a099184;
  *puVar2 = PTR_PTR_4a099184;
  puVar2[4] = puVar1 + 0x50;
  puVar2[6] = puVar1 + 0x70;
  puVar2[7] = puVar1 + 0x80;
  puVar2[8] = puVar1 + 0x90;
  puVar2[5] = puVar1 + 0x60;
  puVar2[3] = puVar1 + 0x40;
  puVar2[2] = puVar1 + 0x30;
  puVar2[9] = puVar1 + 0xa0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0xffffffff;
  *(undefined1 *)(puVar2 + 0xf) = 0;
  *(undefined1 *)((int)puVar2 + 0x3d) = 0;
  thunk_FUN_4a161570(0xe8);
  piVar3 = (int *)FUN_4a0b50dc();
  puVar2[0xb] = piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
  }
  thunk_FUN_4a161570(0x30);
  uVar4 = FUN_4a0a8358();
  FUN_4a0a8340(uVar4,0);
  FUN_4a0a8348(uVar4,1);
  FUN_4a0b5004(puVar2[0xb],uVar4);
  thunk_FUN_4a161570(0x13c);
  piVar3 = (int *)FUN_4a0b52ec();
  puVar2[0xc] = piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
  }
  FUN_4a0b4c10(puVar2[0xb],puVar2[0xc]);
  FUN_4a0b5070(puVar2[0xb],puVar2[0xc]);
  thunk_FUN_4a161570(0x8c);
  piVar3 = (int *)FUN_4a0cb3f4();
  puVar2[0xd] = piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
  }
  FUN_4a0b4c10(puVar2[0xb],*(undefined4 *)(puVar2[0xd] + 0x30));
  return puVar2;
}



// Address: 4a0991a0

void FUN_4a0991a0(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = PTR_PTR_4a0992b0;
  *param_1 = PTR_PTR_4a0992b0;
  param_1[4] = puVar1 + 0x50;
  param_1[6] = puVar1 + 0x70;
  param_1[7] = puVar1 + 0x80;
  param_1[8] = puVar1 + 0x90;
  param_1[5] = puVar1 + 0x60;
  param_1[3] = puVar1 + 0x40;
  param_1[2] = puVar1 + 0x30;
  param_1[9] = puVar1 + 0xa0;
  piVar3 = (int *)param_1[0xd];
  if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 8))(piVar3), iVar2 != 0)) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  piVar3 = (int *)param_1[0xb];
  if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 8))(piVar3), iVar2 != 0)) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  piVar3 = (int *)param_1[0xc];
  if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 8))(piVar3), iVar2 != 0)) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a0992b8

/* WARNING: Removing unreachable block (ram,0x4a0992dc) */
/* WARNING: Removing unreachable block (ram,0x4a0992e0) */
/* WARNING: Removing unreachable block (ram,0x4a0992f0) */
/* WARNING: Removing unreachable block (ram,0x4a0992f8) */
/* WARNING: Removing unreachable block (ram,0x4a0992fc) */
/* WARNING: Removing unreachable block (ram,0x4a099300) */
/* WARNING: Removing unreachable block (ram,0x4a099314) */
/* WARNING: Removing unreachable block (ram,0x4a099320) */
/* WARNING: Removing unreachable block (ram,0x4a099324) */
/* WARNING: Removing unreachable block (ram,0x4a099328) */
/* WARNING: Removing unreachable block (ram,0x4a099334) */
/* WARNING: Removing unreachable block (ram,0x4a099338) */
/* WARNING: Removing unreachable block (ram,0x4a09933c) */
/* WARNING: Removing unreachable block (ram,0x4a099340) */
/* WARNING: Removing unreachable block (ram,0x4a099344) */
/* WARNING: Removing unreachable block (ram,0x4a099348) */
/* WARNING: Removing unreachable block (ram,0x4a099358) */
/* WARNING: Removing unreachable block (ram,0x4a09935c) */
/* WARNING: Removing unreachable block (ram,0x4a099360) */
/* WARNING: Removing unreachable block (ram,0x4a09936c) */
/* WARNING: Removing unreachable block (ram,0x4a099388) */
/* WARNING: Removing unreachable block (ram,0x4a09939c) */

undefined4 FUN_4a0992b8(void)

{
  FUN_4a0ff494();
  return 0;
}



// Address: 4a0993ac

undefined4 FUN_4a0993ac(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_38;
  undefined1 auStack_34 [16];
  
  uVar3 = FUN_4a098414(3);
  FUN_4a0bfc44(auStack_34,uVar3);
  iVar10 = 0;
  iVar8 = 0;
  local_38 = 0;
  do {
    iVar4 = FUN_4a0bf578(auStack_34);
    if (*(int *)(param_1 + 0x34) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x34) + 8);
    }
    iVar11 = 0;
    *(char *)(local_38 + iVar5) = (char)iVar4;
    if (*(int *)(param_1 + 0x48) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x48) + 8);
    }
    *(short *)(iVar5 + local_38 * 2) = (short)iVar10;
    if (iVar4 != 0) {
      do {
        uVar2 = FUN_4a0bfbdc(auStack_34);
        if (*(int *)(param_1 + 0x5c) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0x5c) + 8);
        }
        *(undefined2 *)(iVar5 + iVar10 * 2) = uVar2;
        iVar5 = FUN_4a0bf578(auStack_34);
        iVar9 = 0;
        if (*(int *)(param_1 + 0x70) == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(*(int *)(param_1 + 0x70) + 8);
        }
        *(char *)(iVar6 + iVar10) = (char)iVar5;
        if (*(int *)(param_1 + 0x84) == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(*(int *)(param_1 + 0x84) + 8);
        }
        *(int *)(iVar6 + iVar10 * 4) = iVar8;
        iVar6 = iVar8;
        if (iVar5 != 0) {
          do {
            uVar3 = FUN_4a0bf578(auStack_34);
            if (*(int *)(param_1 + 0x98) == 0) {
              iVar7 = 0;
            }
            else {
              iVar7 = *(int *)(*(int *)(param_1 + 0x98) + 8);
            }
            iVar8 = iVar6 + 1;
            *(short *)(iVar7 + iVar6 * 2) = (short)uVar3;
            switch(uVar3) {
            case 0:
            case 0xb:
              uVar2 = FUN_4a0bfbdc(auStack_34);
              if (*(int *)(param_1 + 0x98) == 0) {
                iVar7 = 0;
              }
              else {
                iVar7 = *(int *)(*(int *)(param_1 + 0x98) + 8);
              }
              *(undefined2 *)(iVar7 + (iVar6 + 3) * 2) = uVar2;
              uVar2 = FUN_4a0bfbdc(auStack_34);
              if (*(int *)(param_1 + 0x98) == 0) {
                iVar7 = 0;
              }
              else {
                iVar7 = *(int *)(*(int *)(param_1 + 0x98) + 8);
              }
              *(undefined2 *)(iVar7 + iVar8 * 2) = uVar2;
              uVar2 = FUN_4a0bfbdc(auStack_34);
              if (*(int *)(param_1 + 0x98) == 0) {
                iVar7 = 0;
              }
              else {
                iVar7 = *(int *)(*(int *)(param_1 + 0x98) + 8);
              }
              iVar8 = iVar6 + 4;
              *(undefined2 *)(iVar7 + (iVar6 + 2) * 2) = uVar2;
              break;
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 8:
              iVar6 = 1;
              do {
                uVar2 = FUN_4a0bfbdc(auStack_34);
                iVar6 = iVar6 + 1;
                if (*(int *)(param_1 + 0x98) == 0) {
                  iVar7 = 0;
                }
                else {
                  iVar7 = *(int *)(*(int *)(param_1 + 0x98) + 8);
                }
                iVar1 = iVar8 * 2;
                iVar8 = iVar8 + 1;
                *(undefined2 *)(iVar7 + iVar1) = uVar2;
              } while (iVar6 < 5);
              break;
            case 7:
              uVar2 = FUN_4a0bfbdc(auStack_34);
              if (*(int *)(param_1 + 0x98) == 0) {
                iVar7 = 0;
              }
              else {
                iVar7 = *(int *)(*(int *)(param_1 + 0x98) + 8);
              }
              *(undefined2 *)(iVar7 + iVar8 * 2) = uVar2;
              uVar2 = FUN_4a0bfbdc(auStack_34);
              iVar8 = iVar6 + 3;
              if (*(int *)(param_1 + 0x98) == 0) {
                iVar7 = 0;
              }
              else {
                iVar7 = *(int *)(*(int *)(param_1 + 0x98) + 8);
              }
              *(undefined2 *)(iVar7 + (iVar6 + 2) * 2) = uVar2;
              break;
            case 10:
              uVar2 = FUN_4a0bf578(auStack_34);
              if (*(int *)(param_1 + 0x98) == 0) {
                iVar7 = 0;
              }
              else {
                iVar7 = *(int *)(*(int *)(param_1 + 0x98) + 8);
              }
              iVar1 = iVar8 * 2;
              iVar8 = iVar6 + 2;
              *(undefined2 *)(iVar7 + iVar1) = uVar2;
              break;
            case 0xc:
              iVar6 = 1;
              do {
                uVar2 = FUN_4a0bfbdc(auStack_34);
                iVar6 = iVar6 + 1;
                if (*(int *)(param_1 + 0x98) == 0) {
                  iVar7 = 0;
                }
                else {
                  iVar7 = *(int *)(*(int *)(param_1 + 0x98) + 8);
                }
                iVar1 = iVar8 * 2;
                iVar8 = iVar8 + 1;
                *(undefined2 *)(iVar7 + iVar1) = uVar2;
              } while (iVar6 < 5);
            }
            iVar9 = iVar9 + 1;
            iVar6 = iVar8;
          } while (iVar9 != iVar5);
        }
        iVar11 = iVar11 + 1;
        iVar10 = iVar10 + 1;
      } while (iVar11 != iVar4);
    }
    local_38 = local_38 + 1;
  } while (local_38 != 0x12);
  FUN_4a0bfcf4(auStack_34);
  return 1;
}



// Address: 4a0996cc

void FUN_4a0996cc(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  if ((int)param_2 < 0) {
    return;
  }
  if ((param_2 & 0x4000) == 0) {
    FUN_4a099c94();
    return;
  }
  FUN_4a099eb0(param_1,param_2 & 0xffffbfff,param_3,param_4);
  return;
}



// Address: 4a099718

undefined4 FUN_4a099718(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar2 = FUN_4a0ff494();
  switch(param_5) {
  case 1:
    iVar2 = *(int *)(iVar2 + 0xfc);
    bVar6 = iVar2 != 0;
    if (bVar6) {
      iVar3 = *(int *)(iVar2 + 8);
    }
    else {
      iVar3 = 0;
    }
    if (bVar6) {
      iVar4 = *(int *)(iVar2 + 8);
    }
    else {
      iVar4 = 0;
    }
    if (bVar6) {
      iVar5 = *(int *)(iVar2 + 8);
    }
    else {
      iVar5 = 0;
    }
    if (bVar6) {
      iVar2 = *(int *)(iVar2 + 8);
    }
    else {
      iVar2 = 0;
    }
    (**(code **)(*param_1 + 0x20))
              (param_1,*(short *)(iVar3 + (param_4 + 1) * 2) + param_2,
               *(short *)(iVar4 + (param_4 + 2) * 2) + param_3,
               (int)*(short *)(iVar5 + (param_4 + 3) * 2),(int)*(short *)(iVar2 + (param_4 + 4) * 2)
              );
    break;
  case 3:
  case 4:
  case 5:
  case 6:
    iVar2 = *(int *)(iVar2 + 0xfc);
    bVar6 = iVar2 != 0;
    if (bVar6) {
      iVar3 = *(int *)(iVar2 + 8);
    }
    else {
      iVar3 = 0;
    }
    param_2 = *(short *)(iVar3 + (param_4 + 1) * 2) + param_2;
    if (bVar6) {
      iVar3 = *(int *)(iVar2 + 8);
    }
    else {
      iVar3 = 0;
    }
    param_3 = *(short *)(iVar3 + (param_4 + 2) * 2) + param_3;
    if (bVar6) {
      iVar3 = *(int *)(iVar2 + 8);
    }
    else {
      iVar3 = 0;
    }
    iVar3 = (int)*(short *)(iVar3 + (param_4 + 3) * 2);
    if (bVar6) {
      iVar2 = *(int *)(iVar2 + 8);
    }
    else {
      iVar2 = 0;
    }
    iVar2 = (int)*(short *)(iVar2 + (param_4 + 4) * 2);
    if (param_5 == 3) {
      (**(code **)(*param_1 + 0x3c))(param_1,param_2,param_3,iVar3 + -1,iVar2 + -1);
    }
    else if (param_5 == 4) {
      (**(code **)(*param_1 + 0x58))(param_1,param_2,param_3,iVar3,iVar2);
    }
    else if (param_5 == 5) {
      (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3,iVar3,iVar2,0,0x168);
    }
    else if (param_5 == 6) {
      (**(code **)(*param_1 + 0x54))(param_1,param_2,param_3,iVar3,iVar2,0,0x168);
    }
    break;
  case 8:
    iVar2 = *(int *)(iVar2 + 0xfc);
    bVar6 = iVar2 != 0;
    if (bVar6) {
      iVar3 = *(int *)(iVar2 + 8);
    }
    else {
      iVar3 = 0;
    }
    if (bVar6) {
      iVar4 = *(int *)(iVar2 + 8);
    }
    else {
      iVar4 = 0;
    }
    if (bVar6) {
      iVar5 = *(int *)(iVar2 + 8);
    }
    else {
      iVar5 = 0;
    }
    if (bVar6) {
      iVar2 = *(int *)(iVar2 + 8);
    }
    else {
      iVar2 = 0;
    }
    (**(code **)(*param_1 + 0x38))
              (param_1,*(short *)(iVar3 + (param_4 + 1) * 2) + param_2,
               *(short *)(iVar4 + (param_4 + 2) * 2) + param_3,
               *(short *)(iVar5 + (param_4 + 3) * 2) + param_2,
               *(short *)(iVar2 + (param_4 + 4) * 2) + param_3);
    break;
  case 10:
    iVar3 = 0;
    if (*(int *)(iVar2 + 0xfc) != 0) {
      iVar3 = *(int *)(*(int *)(iVar2 + 0xfc) + 8);
    }
    sVar1 = *(short *)(iVar3 + (param_4 + 1) * 2);
    iVar2 = FUN_4a0ff494();
    iVar3 = *(int *)(iVar2 + 0x84);
    iVar2 = sVar1 * 3;
    bVar6 = iVar3 != 0;
    if (bVar6) {
      iVar4 = *(int *)(iVar3 + 8);
    }
    else {
      iVar4 = 0;
    }
    if (bVar6) {
      iVar5 = *(int *)(iVar3 + 8);
    }
    else {
      iVar5 = 0;
    }
    if (bVar6) {
      iVar3 = *(int *)(iVar3 + 8);
    }
    else {
      iVar3 = 0;
    }
    (**(code **)(*param_1 + 0xa4))
              (param_1,*(undefined1 *)(iVar4 + iVar2),*(undefined1 *)(iVar5 + iVar2 + 1),
               *(undefined1 *)(iVar3 + iVar2 + 2));
    break;
  case 0xc:
    iVar2 = *(int *)(iVar2 + 0xfc);
    bVar6 = iVar2 != 0;
    if (bVar6) {
      iVar3 = *(int *)(iVar2 + 8);
    }
    else {
      iVar3 = 0;
    }
    iVar3 = *(short *)(iVar3 + 2) + param_2;
    if (bVar6) {
      iVar4 = *(int *)(iVar2 + 8);
    }
    else {
      iVar4 = 0;
    }
    if (bVar6) {
      iVar5 = *(int *)(iVar2 + 8);
    }
    else {
      iVar5 = 0;
    }
    if (bVar6) {
      iVar2 = *(int *)(iVar2 + 8);
    }
    else {
      iVar2 = 0;
    }
    iVar2 = *(short *)(iVar2 + 8) + param_3;
    (**(code **)(*param_1 + 0x60))
              (param_1,iVar3,*(short *)(iVar4 + 4) + param_3,param_2 + *(short *)(iVar5 + 6),iVar2,
               iVar3,iVar2);
  }
  return 0;
}



// Address: 4a099ab4

undefined4 FUN_4a099ab4(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined *local_2c [2];
  int local_24;
  
  piVar1 = (int *)FUN_4a098414(5);
  iVar2 = FUN_4a16b5f8(local_2c,*(undefined4 *)(PTR_DAT_4a099bb8 + 0x14));
  uVar5 = *(undefined4 *)(iVar2 + 8);
  piVar4 = *(int **)(iVar2 + 0xc);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))(piVar4);
  }
  (**(code **)(*(int *)(param_1 + 0x14) + 0x1c))((int *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(int **)(param_1 + 0x20) = piVar4;
  local_2c[0] = PTR_PTR_4a099bbc;
  iVar2 = FUN_4a0bcc84(local_2c);
  if (iVar2 != 0) {
    iVar3 = 0;
    if (0 < local_24) {
      do {
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_24);
      if (iVar2 == 0) goto LAB_4a099b64;
    }
    FUN_4a14f21c();
  }
LAB_4a099b64:
  FUN_4a0c6bf4(local_2c);
  FUN_4a0be8a0(piVar1,param_1 + 0x14);
  (**(code **)(*piVar1 + 0x20))(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return 1;
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



// Address: 4a099c28

undefined4 FUN_4a099c28(void)

{
  undefined4 uVar1;
  undefined1 auStack_14 [20];
  
  uVar1 = FUN_4a098414(0x18);
  FUN_4a0bfc44(auStack_14,uVar1);
  FUN_4a0bfcf4(auStack_14);
  return 1;
}



// Address: 4a099c5c

int FUN_4a099c5c(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_4a0ff494();
  if ((param_1 & 0xffffbfff) < 0x12) {
    iVar2 = 0;
    if (*(int *)(iVar1 + 0x98) != 0) {
      iVar2 = *(int *)(*(int *)(iVar1 + 0x98) + 8);
    }
    return (int)*(char *)(iVar2 + (param_1 & 0xffffbfff));
  }
  return -1;
}



// Address: 4a099c94

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a099c94(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = FUN_4a0ff494();
  iVar9 = 0;
  if (*(int *)(iVar1 + 0xac) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar1 + 0xac) + 8);
  }
  iVar8 = 0;
  param_3 = *(short *)(iVar2 + param_2 * 2) + param_3;
  if (*(int *)(iVar1 + 0xe8) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar1 + 0xe8) + 8);
  }
  iVar2 = *(int *)(iVar2 + param_3 * 4);
  if (*(int *)(iVar1 + 0xd4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(iVar1 + 0xd4) + 8);
  }
  iVar3 = (int)*(char *)(iVar3 + param_3);
  if (iVar3 == 0) {
    return;
  }
  do {
    iVar4 = *(int *)(iVar1 + 0xfc);
    iVar7 = iVar9;
    if (iVar4 != 0) {
      iVar7 = *(int *)(iVar4 + 8);
    }
    iVar7 = (int)*(short *)(iVar7 + iVar2 * 2);
    if (iVar7 == 0 || iVar7 == 0xb) {
      iVar5 = iVar9;
      if (iVar4 != 0) {
        iVar5 = *(int *)(iVar4 + 8);
      }
      iVar5 = iVar1 + 100 + *(short *)(iVar5 + (iVar2 + 3) * 2) * 10;
      iVar4 = iVar9;
      if (*(int *)(iVar1 + 0x11c) != 0) {
        iVar4 = *(int *)(*(int *)(iVar1 + 0x11c) + 8);
      }
      iVar6 = *(int *)(iVar4 + *(int *)(iVar1 + 0x124) * 0x14 + 0xc);
      iVar4 = iVar9;
      if (iVar6 != 0) {
        iVar4 = *(int *)(iVar6 + 8);
      }
      (**(code **)(*param_1 + 0x40))
                (param_1,*(undefined4 *)(iVar4 + *(short *)(iVar5 + 0xa0) * 4),
                 (int)*(short *)(iVar5 + 0xa2),(int)*(short *)(iVar5 + 0xa4));
    }
    else if (iVar7 != 2 && iVar7 != 7) {
      FUN_4a099718(param_1,param_4,param_5,iVar2);
    }
    iVar7 = FUN_4a099bc0(iVar7);
    iVar8 = iVar8 + 1;
    iVar2 = iVar2 + iVar7;
  } while (iVar8 != iVar3);
  return;
}



// Address: 4a099e60

int FUN_4a099e60(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_4a0ff494();
  iVar3 = 0;
  if (*(int *)(iVar1 + 0xac) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar1 + 0xac) + 8);
  }
  if (*(int *)(iVar1 + 0xc0) != 0) {
    iVar3 = *(int *)(*(int *)(iVar1 + 0xc0) + 8);
  }
  return (int)*(short *)(iVar3 + (*(short *)(iVar2 + (param_1 & 0xffffbfff) * 2) + param_2) * 2);
}



// Address: 4a099eb0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a099eb0(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = FUN_4a0ff494();
  iVar9 = 0;
  if (*(int *)(iVar1 + 0xac) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar1 + 0xac) + 8);
  }
  iVar8 = 0;
  param_3 = *(short *)(iVar2 + param_2 * 2) + param_3;
  if (*(int *)(iVar1 + 0xe8) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar1 + 0xe8) + 8);
  }
  iVar2 = *(int *)(iVar2 + param_3 * 4);
  if (*(int *)(iVar1 + 0xd4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(iVar1 + 0xd4) + 8);
  }
  iVar3 = (int)*(char *)(iVar3 + param_3);
  if (iVar3 == 0) {
    return;
  }
  do {
    iVar4 = *(int *)(iVar1 + 0xfc);
    iVar7 = iVar9;
    if (iVar4 != 0) {
      iVar7 = *(int *)(iVar4 + 8);
    }
    iVar7 = (int)*(short *)(iVar7 + iVar2 * 2);
    if (iVar7 == 0 || iVar7 == 0xb) {
      iVar6 = iVar9;
      if (iVar4 != 0) {
        iVar6 = *(int *)(iVar4 + 8);
      }
      iVar6 = iVar1 + 100 + *(short *)(iVar6 + (iVar2 + 3) * 2) * 10;
      iVar4 = iVar9;
      if (*(int *)(iVar1 + 0x11c) != 0) {
        iVar4 = *(int *)(*(int *)(iVar1 + 0x11c) + 8);
      }
      iVar5 = *(int *)(iVar4 + *(int *)(iVar1 + 0x124) * 0x14 + 0xc);
      iVar4 = iVar9;
      if (iVar5 != 0) {
        iVar4 = *(int *)(iVar5 + 8);
      }
      (**(code **)(*param_1 + 0x40))
                (param_1,*(undefined4 *)(iVar4 + *(short *)(iVar6 + 0xa0) * 4),
                 (int)*(short *)(iVar6 + 0xa2),(int)*(short *)(iVar6 + 0xa4));
    }
    else if (iVar7 != 2 && iVar7 != 7) {
      FUN_4a09a098(param_1,param_4,param_5,iVar2);
    }
    iVar7 = FUN_4a099bc0(iVar7);
    iVar8 = iVar8 + 1;
    iVar2 = iVar2 + iVar7;
  } while (iVar8 != iVar3);
  return;
}



// Address: 4a09a098

undefined4 FUN_4a09a098(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar2 = FUN_4a0ff494();
  switch(param_5) {
  case 3:
  case 4:
  case 5:
  case 6:
    iVar2 = *(int *)(iVar2 + 0xfc);
    bVar6 = iVar2 != 0;
    if (bVar6) {
      iVar3 = *(int *)(iVar2 + 8);
    }
    else {
      iVar3 = 0;
    }
    iVar3 = (int)*(short *)(iVar3 + (param_4 + 3) * 2);
    if (bVar6) {
      iVar4 = *(int *)(iVar2 + 8);
    }
    else {
      iVar4 = 0;
    }
    iVar4 = (int)*(short *)(iVar4 + (param_4 + 4) * 2);
    if (bVar6) {
      iVar5 = *(int *)(iVar2 + 8);
    }
    else {
      iVar5 = 0;
    }
    if (bVar6) {
      iVar2 = *(int *)(iVar2 + 8);
    }
    else {
      iVar2 = 0;
    }
    param_2 = param_2 - (*(short *)(iVar5 + (param_4 + 1) * 2) + iVar3);
    param_3 = *(short *)(iVar2 + (param_4 + 2) * 2) + param_3;
    if (param_5 == 3) {
      (**(code **)(*param_1 + 0x3c))(param_1,param_2,param_3,iVar3 + -1,iVar4 + -1);
    }
    else if (param_5 == 4) {
      (**(code **)(*param_1 + 0x58))(param_1,param_2,param_3,iVar3,iVar4);
    }
    else if (param_5 == 5) {
      (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3,iVar3,iVar4,0,0x168);
    }
    else if (param_5 == 6) {
      (**(code **)(*param_1 + 0x54))(param_1,param_2,param_3,iVar3,iVar4,0,0x168);
    }
    break;
  case 8:
    iVar2 = *(int *)(iVar2 + 0xfc);
    bVar6 = iVar2 != 0;
    if (bVar6) {
      iVar3 = *(int *)(iVar2 + 8);
    }
    else {
      iVar3 = 0;
    }
    if (bVar6) {
      iVar4 = *(int *)(iVar2 + 8);
    }
    else {
      iVar4 = 0;
    }
    if (bVar6) {
      iVar5 = *(int *)(iVar2 + 8);
    }
    else {
      iVar5 = 0;
    }
    if (bVar6) {
      iVar2 = *(int *)(iVar2 + 8);
    }
    else {
      iVar2 = 0;
    }
    (**(code **)(*param_1 + 0x38))
              (param_1,param_2 - *(short *)(iVar3 + (param_4 + 1) * 2),
               *(short *)(iVar4 + (param_4 + 2) * 2) + param_3,
               param_2 - *(short *)(iVar5 + (param_4 + 3) * 2),
               *(short *)(iVar2 + (param_4 + 4) * 2) + param_3);
    break;
  case 10:
    iVar3 = 0;
    if (*(int *)(iVar2 + 0xfc) != 0) {
      iVar3 = *(int *)(*(int *)(iVar2 + 0xfc) + 8);
    }
    sVar1 = *(short *)(iVar3 + (param_4 + 1) * 2);
    iVar2 = FUN_4a0ff494();
    iVar3 = *(int *)(iVar2 + 0x84);
    iVar2 = sVar1 * 3;
    bVar6 = iVar3 != 0;
    if (bVar6) {
      iVar4 = *(int *)(iVar3 + 8);
    }
    else {
      iVar4 = 0;
    }
    if (bVar6) {
      iVar5 = *(int *)(iVar3 + 8);
    }
    else {
      iVar5 = 0;
    }
    if (bVar6) {
      iVar3 = *(int *)(iVar3 + 8);
    }
    else {
      iVar3 = 0;
    }
    (**(code **)(*param_1 + 0xa4))
              (param_1,*(undefined1 *)(iVar4 + iVar2),*(undefined1 *)(iVar5 + iVar2 + 1),
               *(undefined1 *)(iVar3 + iVar2 + 2));
    break;
  case 0xc:
    iVar2 = *(int *)(iVar2 + 0xfc);
    bVar6 = iVar2 != 0;
    if (bVar6) {
      iVar3 = *(int *)(iVar2 + 8);
    }
    else {
      iVar3 = 0;
    }
    iVar3 = *(short *)(iVar3 + 2) + param_2;
    if (bVar6) {
      iVar4 = *(int *)(iVar2 + 8);
    }
    else {
      iVar4 = 0;
    }
    if (bVar6) {
      iVar5 = *(int *)(iVar2 + 8);
    }
    else {
      iVar5 = 0;
    }
    if (bVar6) {
      iVar2 = *(int *)(iVar2 + 8);
    }
    else {
      iVar2 = 0;
    }
    iVar2 = *(short *)(iVar2 + 8) + param_3;
    (**(code **)(*param_1 + 0x60))
              (param_1,iVar3,*(short *)(iVar4 + 4) + param_3,param_2 + *(short *)(iVar5 + 6),iVar2,
               iVar3,iVar2);
  }
  return 0;
}



// Address: 4a09a3b4

undefined4 FUN_4a09a3b4(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  undefined8 uVar10;
  
  bVar9 = (param_2 & 0x4000) != 0;
  if (bVar9) {
    param_2 = param_2 & 0xffffbfff;
  }
  iVar1 = FUN_4a0ff494();
  iVar7 = iVar1 + 100;
  piVar8 = (int *)0x0;
  if (*(int *)(iVar1 + 0xac) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar1 + 0xac) + 8);
  }
  param_3 = *(short *)(iVar2 + param_2 * 2) + param_3;
  if (*(int *)(iVar1 + 0xe8) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar1 + 0xe8) + 8);
  }
  iVar2 = *(int *)(iVar2 + param_3 * 4);
  if (*(int *)(iVar1 + 0xd4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(iVar1 + 0xd4) + 8);
  }
  iVar6 = 1;
  iVar1 = *(char *)(iVar1 + param_3) + 1;
  if (1 < iVar1) {
    do {
      if (*(int *)(iVar7 + 0x98) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar7 + 0x98) + 8);
      }
      if (*(short *)(iVar3 + iVar2 * 2) == 7) {
        if (param_4 == 0) {
          if (*(int *)(iVar7 + 0x98) == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = *(int *)(*(int *)(iVar7 + 0x98) + 8);
          }
          if (*(int *)(param_1 + 0xc) == 0) {
            piVar4 = (int *)0x0;
          }
          else {
            piVar4 = *(int **)(*(int *)(param_1 + 0xc) + 8);
          }
          *piVar4 = (int)*(short *)(iVar1 + (iVar2 + 1) * 2);
          if (*(int *)(iVar7 + 0x98) == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = *(int *)(*(int *)(iVar7 + 0x98) + 8);
          }
          if (*(int *)(param_1 + 0xc) == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(*(int *)(param_1 + 0xc) + 8);
          }
          *(int *)(iVar7 + 4) = (int)*(short *)(iVar1 + (iVar2 + 2) * 2);
          if (bVar9) {
            iVar1 = *(int *)(param_1 + 0xc);
            if (iVar1 != 0) {
              piVar4 = *(int **)(iVar1 + 8);
            }
            else {
              piVar4 = (int *)0x0;
            }
            if (iVar1 != 0) {
              piVar8 = *(int **)(iVar1 + 8);
            }
            *piVar8 = -*piVar4;
          }
          return 1;
        }
        param_4 = param_4 + -1;
      }
      uVar10 = FUN_4a099bc0();
      iVar6 = iVar6 + 1;
      iVar2 = (int)((ulonglong)uVar10 >> 0x20) + (int)uVar10;
    } while (iVar6 < iVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = *(undefined4 **)(*(int *)(param_1 + 0xc) + 8);
  }
  *puVar5 = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 8);
  }
  *(undefined4 *)(iVar1 + 4) = 0;
  return 0;
}



// Address: 4a09a540

void FUN_4a09a540(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined *local_94;
  undefined *local_90;
  int local_8c;
  int local_88;
  int *local_80;
  undefined *local_7c [2];
  int local_74;
  undefined *local_68 [2];
  int local_60;
  undefined1 auStack_54 [20];
  undefined *local_40 [2];
  int local_38;
  undefined *local_2c;
  undefined *local_28;
  
  iVar13 = 0;
  iVar12 = 1;
  do {
    thunk_FUN_4a161570(0x10);
    uVar4 = FUN_4a060224();
    iVar12 = iVar12 + 1;
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)(*(int *)(param_1 + 0xc) + 8);
    }
    *(undefined4 *)(iVar11 + iVar13 * 4) = uVar4;
    iVar13 = iVar13 + 1;
  } while (iVar12 < 0x31);
  puVar5 = (undefined4 *)FUN_4a0c6bc0(local_40);
  puVar2 = PTR_PTR_4a09ad80;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = puVar2;
  puVar1 = PTR_PTR_4a09ad7c;
  (**(code **)(*(int *)(param_1 + 0x14) + 0x1c))((int *)(param_1 + 0x14));
  iVar12 = local_38;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  local_40[0] = puVar2;
  iVar13 = FUN_4a0bcc84(local_40);
  if (iVar13 != 0) {
    iVar11 = 0;
    if (0 < iVar12) {
      do {
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar12);
      if (iVar13 == 0) goto LAB_4a09a60c;
    }
    FUN_4a14f21c();
  }
LAB_4a09a60c:
  FUN_4a0c6bf4(local_40);
  piVar6 = (int *)FUN_4a0c6bc0(local_40);
  piVar6[2] = 0;
  piVar6[3] = 0;
  *piVar6 = (int)puVar2;
  iVar12 = FUN_4a15e080(0x12);
  if (iVar12 == 0) {
    iVar12 = FUN_4a1669a8();
  }
  iVar13 = 0;
  do {
    local_80 = (int *)0x0;
    *(undefined1 *)(iVar12 + iVar13) = 0;
    iVar13 = iVar13 + 1;
  } while (iVar13 < 0x12);
  thunk_FUN_4a161570(0x18);
  piVar7 = (int *)FUN_4a0c0628();
  puVar3 = PTR_PTR_4a09ad84;
  local_28 = PTR_PTR_4a09ad84;
  piVar7[2] = iVar12;
  *piVar7 = (int)puVar3;
  piVar7[3] = 1;
  piVar7[4] = 0x12;
  *(undefined1 *)(piVar7 + 5) = 1;
  if (piVar7 != (int *)0x0) {
    (**(code **)(puVar3 + 0xc))(piVar7);
  }
  (**(code **)(*piVar6 + 0x1c))(piVar6);
  piVar6[2] = 0x12;
  piVar6[3] = (int)piVar7;
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0xc))(piVar7);
  }
  (**(code **)(*(int *)(param_1 + 0x28) + 0x1c))((int *)(param_1 + 0x28));
  iVar12 = local_38;
  *(undefined4 *)(param_1 + 0x30) = 0x12;
  *(int **)(param_1 + 0x34) = piVar7;
  local_40[0] = puVar2;
  iVar13 = FUN_4a0bcc84(local_40);
  if (iVar13 != 0) {
    iVar11 = 0;
    if (0 < iVar12) {
      do {
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar12);
      if (iVar13 == 0) goto LAB_4a09a73c;
    }
    FUN_4a14f21c();
  }
LAB_4a09a73c:
  FUN_4a0c6bf4(local_40);
  iVar12 = FUN_4a16c0cc(auStack_54,0x12);
  uVar4 = *(undefined4 *)(iVar12 + 8);
  piVar6 = *(int **)(iVar12 + 0xc);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))(piVar6);
  }
  (**(code **)(*(int *)(param_1 + 0x3c) + 0x1c))((int *)(param_1 + 0x3c));
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  *(int **)(param_1 + 0x48) = piVar6;
  FUN_4a16c1a0(auStack_54);
  iVar12 = FUN_4a16c0cc(auStack_54,0xc9);
  uVar4 = *(undefined4 *)(iVar12 + 8);
  piVar6 = *(int **)(iVar12 + 0xc);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))(piVar6);
  }
  (**(code **)(*(int *)(param_1 + 0x50) + 0x1c))((int *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  *(int **)(param_1 + 0x5c) = piVar6;
  FUN_4a16c1a0(auStack_54);
  piVar6 = (int *)FUN_4a0c6bc0(local_40);
  piVar6[2] = 0;
  piVar6[3] = 0;
  *piVar6 = (int)puVar2;
  iVar12 = FUN_4a15e080(0xc9);
  if (iVar12 == 0) {
    iVar12 = FUN_4a1669a8();
  }
  iVar13 = 0;
  do {
    local_80 = (int *)0x0;
    *(undefined1 *)(iVar12 + iVar13) = 0;
    iVar13 = iVar13 + 1;
  } while (iVar13 < 0xc9);
  thunk_FUN_4a161570(0x18);
  piVar7 = (int *)FUN_4a0c0628();
  *piVar7 = (int)local_28;
  piVar7[3] = 1;
  piVar7[4] = 0xc9;
  piVar7[2] = iVar12;
  *(undefined1 *)(piVar7 + 5) = 1;
  if (piVar7 != (int *)0x0) {
    (**(code **)(local_28 + 0xc))(piVar7);
  }
  (**(code **)(*piVar6 + 0x1c))(piVar6);
  piVar6[2] = 0xc9;
  piVar6[3] = (int)piVar7;
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0xc))(piVar7);
  }
  (**(code **)(*(int *)(param_1 + 100) + 0x1c))((int *)(param_1 + 100));
  *(undefined4 *)(param_1 + 0x6c) = 0xc9;
  *(int **)(param_1 + 0x70) = piVar7;
  local_40[0] = puVar2;
  iVar12 = FUN_4a0bcc84(local_40);
  if (iVar12 != 0) {
    iVar13 = 0;
    if (0 < local_38) {
      do {
        iVar13 = iVar13 + 1;
      } while (iVar13 < local_38);
      if (iVar12 == 0) goto LAB_4a09a918;
    }
    FUN_4a14f21c();
  }
LAB_4a09a918:
  FUN_4a0c6bf4(local_40);
  piVar6 = (int *)FUN_4a0c6bc0(local_68);
  puVar2 = PTR_PTR_4a09ad88;
  piVar6[2] = 0;
  piVar6[3] = 0;
  *piVar6 = (int)puVar2;
  iVar12 = FUN_4a15e080(0x324);
  if (iVar12 == 0) {
    iVar12 = FUN_4a1669a8();
  }
  iVar13 = 0;
  do {
    local_80 = (int *)0x0;
    *(undefined4 *)(iVar12 + iVar13 * 4) = 0;
    iVar13 = iVar13 + 1;
  } while (iVar13 < 0xc9);
  thunk_FUN_4a161570(0x18);
  piVar7 = (int *)FUN_4a0c0628();
  piVar7[2] = iVar12;
  piVar7[3] = 4;
  piVar7[4] = 0xc9;
  *piVar7 = (int)local_28;
  *(undefined1 *)(piVar7 + 5) = 1;
  if (piVar7 != (int *)0x0) {
    (**(code **)(local_28 + 0xc))(piVar7);
  }
  (**(code **)(*piVar6 + 0x1c))(piVar6);
  piVar6[3] = (int)piVar7;
  piVar6[2] = 0xc9;
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0xc))(piVar7);
  }
  (**(code **)(*(int *)(param_1 + 0x78) + 0x1c))((int *)(param_1 + 0x78));
  *(undefined4 *)(param_1 + 0x80) = 0xc9;
  *(int **)(param_1 + 0x84) = piVar7;
  local_68[0] = puVar2;
  iVar12 = FUN_4a0bcc84(local_68);
  if (iVar12 != 0) {
    iVar13 = 0;
    if (0 < local_60) {
      do {
        iVar13 = iVar13 + 1;
      } while (iVar13 < local_60);
      if (iVar12 == 0) goto LAB_4a09aa54;
    }
    FUN_4a14f21c();
  }
LAB_4a09aa54:
  FUN_4a0c6bf4(local_68);
  iVar12 = FUN_4a16c0cc(auStack_54,0x21a);
  uVar4 = *(undefined4 *)(iVar12 + 8);
  piVar6 = *(int **)(iVar12 + 0xc);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))(piVar6);
  }
  (**(code **)(*(int *)(param_1 + 0x8c) + 0x1c))((int *)(param_1 + 0x8c));
  *(undefined4 *)(param_1 + 0x94) = uVar4;
  *(int **)(param_1 + 0x98) = piVar6;
  FUN_4a16c1a0(auStack_54);
  local_80 = (int *)(param_1 + 0xac);
  piVar6 = (int *)FUN_4a0c6bc0(local_7c);
  local_2c = PTR_PTR_4a09ad8c;
  piVar6[2] = 0;
  piVar6[3] = 0;
  *piVar6 = (int)local_2c;
  iVar12 = FUN_4a15e080(0x14);
  if (iVar12 == 0) {
    iVar12 = FUN_4a1669a8();
  }
  puVar2 = PTR_PTR_4a09ad90;
  iVar13 = 0;
  do {
    puVar5 = (undefined4 *)FUN_4a0c6bc0(&local_94);
    puVar5[2] = 0;
    puVar5[3] = 0;
    *puVar5 = puVar2;
    puVar8 = (undefined4 *)FUN_4a0c6bc0(iVar12 + iVar13 * 0x14);
    *puVar8 = puVar1;
    puVar8[2] = puVar5[2];
    piVar7 = (int *)puVar5[3];
    puVar8[3] = piVar7;
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0xc))();
    }
    iVar11 = local_8c;
    *puVar8 = puVar2;
    local_94 = puVar2;
    iVar9 = FUN_4a0bcc84(&local_94);
    if (iVar9 != 0) {
      iVar10 = 0;
      if (0 < iVar11) {
        do {
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar11);
        if (iVar9 == 0) goto LAB_4a09aba8;
      }
      FUN_4a14f21c(iVar9);
    }
LAB_4a09aba8:
    FUN_4a0c6bf4(&local_94);
    iVar13 = iVar13 + 1;
  } while (iVar13 < 1);
  thunk_FUN_4a161570(0x18);
  piVar7 = (int *)FUN_4a0c0628();
  *piVar7 = (int)local_28;
  piVar7[3] = 0x14;
  piVar7[4] = 1;
  piVar7[2] = iVar12;
  *(undefined1 *)(piVar7 + 5) = 1;
  if (piVar7 != (int *)0x0) {
    (**(code **)(local_28 + 0xc))(piVar7);
  }
  (**(code **)(*piVar6 + 0x1c))(piVar6);
  piVar6[2] = 1;
  piVar6[3] = (int)piVar7;
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0xc))(piVar7);
  }
  (**(code **)(*local_80 + 0x1c))(local_80);
  local_80[3] = (int)piVar7;
  local_80[2] = 1;
  local_7c[0] = local_2c;
  iVar12 = FUN_4a0bcc84(local_7c);
  if (iVar12 != 0) {
    iVar13 = 0;
    if (0 < local_74) {
      do {
        (*(code *)**(undefined4 **)(iVar12 + iVar13 * 0x14))();
        iVar13 = iVar13 + 1;
      } while (iVar13 < local_74);
      if (iVar12 == 0) goto LAB_4a09acbc;
    }
    FUN_4a14f21c(iVar12);
  }
LAB_4a09acbc:
  FUN_4a0c6bf4(local_7c);
  iVar12 = 0;
  do {
    if (*(int *)(param_1 + 0xb8) == 0) {
      iVar13 = 0;
    }
    else {
      iVar13 = *(int *)(*(int *)(param_1 + 0xb8) + 8);
    }
    piVar6 = (int *)(iVar13 + iVar12 * 0x14);
    puVar5 = (undefined4 *)FUN_4a0c6bc0(&local_90);
    puVar5[2] = 0;
    puVar5[3] = 0;
    *puVar5 = puVar2;
    (**(code **)(*piVar6 + 0x1c))(piVar6);
    iVar13 = local_88;
    piVar6[2] = 0;
    piVar6[3] = 0;
    local_90 = puVar2;
    iVar11 = FUN_4a0bcc84(&local_90);
    if (iVar11 != 0) {
      iVar9 = 0;
      if (0 < iVar13) {
        do {
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar13);
        if (iVar11 == 0) goto LAB_4a09ad5c;
      }
      FUN_4a14f21c();
    }
LAB_4a09ad5c:
    FUN_4a0c6bf4(&local_90);
    iVar12 = iVar12 + 1;
    if (0 < iVar12) {
      return;
    }
  } while( true );
}



// Address: 4a09ad94

/* WARNING: Removing unreachable block (ram,0x4a09add8) */
/* WARNING: Removing unreachable block (ram,0x4a09addc) */
/* WARNING: Removing unreachable block (ram,0x4a09adec) */
/* WARNING: Removing unreachable block (ram,0x4a09adf4) */
/* WARNING: Removing unreachable block (ram,0x4a09adf8) */
/* WARNING: Removing unreachable block (ram,0x4a09adfc) */
/* WARNING: Removing unreachable block (ram,0x4a09ae20) */
/* WARNING: Removing unreachable block (ram,0x4a09ae28) */
/* WARNING: Removing unreachable block (ram,0x4a09ae2c) */
/* WARNING: Removing unreachable block (ram,0x4a09ae30) */
/* WARNING: Removing unreachable block (ram,0x4a09ae38) */
/* WARNING: Removing unreachable block (ram,0x4a09ae3c) */
/* WARNING: Removing unreachable block (ram,0x4a09ae40) */
/* WARNING: Removing unreachable block (ram,0x4a09ae4c) */
/* WARNING: Removing unreachable block (ram,0x4a09ae58) */
/* WARNING: Removing unreachable block (ram,0x4a09ae6c) */
/* WARNING: Removing unreachable block (ram,0x4a09ae74) */
/* WARNING: Removing unreachable block (ram,0x4a09ae78) */
/* WARNING: Removing unreachable block (ram,0x4a09ae7c) */
/* WARNING: Removing unreachable block (ram,0x4a09ae84) */
/* WARNING: Removing unreachable block (ram,0x4a09ae88) */
/* WARNING: Removing unreachable block (ram,0x4a09ae8c) */

undefined4 FUN_4a09ad94(void)

{
  FUN_4a0ff494();
  FUN_4a0c7334(PTR_s_resID_not_used_in_anims___i_4a09ae9c);
  return 0;
}



// Address: 4a09aea0

void FUN_4a09aea0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  param_1[1] = 0;
  iVar2 = host_s3eGLGetInt_thumb(0);
  uVar3 = DAT_4a09b1d4;
  piVar5 = param_1;
  if (iVar2 < 0x200) {
    thunk_FUN_4a150348(DAT_4a09b1d8,param_1);
    iVar2 = host_s3eGLGetInt_thumb(0);
    if (iVar2 < 0x101) goto LAB_4a09aeda;
    uVar3 = DAT_4a09b1dc;
    piVar5 = param_1 + 1;
  }
  thunk_FUN_4a150348(uVar3,piVar5);
LAB_4a09aeda:
  iVar2 = 0x20;
  if (*param_1 < 0x20) {
    iVar2 = *param_1;
  }
  *param_1 = iVar2;
  iVar2 = 6;
  if (param_1[1] < 6) {
    iVar2 = param_1[1];
  }
  param_1[1] = iVar2;
  for (iVar2 = 0; iVar1 = DAT_4a09b1e0, iVar2 < *param_1; iVar2 = iVar2 + 1) {
    FUN_4a09c8bc(param_1 + iVar2 * 0x36 + 2);
  }
  iVar2 = 0;
  do {
    FUN_4a0978fc((int)param_1 + iVar1 + iVar2 * 0x88,iVar2 == 0);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  param_1[0x7d2] = DAT_4a09b1e4;
  puVar4 = (undefined4 *)((int)param_1 + DAT_4a09b1e8);
  *puVar4 = 2;
  puVar4[1] = 0;
  FUN_4a1655f0((int)param_1 + DAT_4a09b1e8 + 8,0,0,0,0);
  puVar4 = (undefined4 *)((int)param_1 + DAT_4a09b1e8 + 0x1c);
  *puVar4 = 2;
  puVar4[1] = 0x3f800000;
  FUN_4a1655f0((int)param_1 + DAT_4a09b1e8 + 0x24,0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  *(undefined1 *)(param_1 + 0x7e1) = 1;
  param_1[0x7e3] = 0x3f800000;
  param_1[0x7e2] = 0;
  param_1[0x7e4] = 0x800;
  puVar4 = (undefined4 *)((int)param_1 + DAT_4a09b1e8 + 0x48);
  *puVar4 = 2;
  puVar4[1] = 0x3f800000;
  puVar4 = (undefined4 *)((int)param_1 + DAT_4a09b1e8 + 0x50);
  *puVar4 = 2;
  puVar4[1] = 0;
  puVar4 = (undefined4 *)((int)param_1 + DAT_4a09b1e8 + 0x58);
  *puVar4 = 2;
  puVar4[1] = 0x3f800000;
  FUN_4a1655f0((int)param_1 + DAT_4a09b1e8 + 0x60,0,0,0,0);
  iVar2 = DAT_4a09b1d8 + -0x22;
  param_1[0x7f0] = iVar2;
  param_1[0x7f1] = iVar2;
  *(undefined1 *)((int)param_1 + 0x1fea) = 0;
  *(undefined1 *)((int)param_1 + 0x1fe9) = 0;
  *(undefined1 *)(param_1 + 0x7fa) = 0;
  *(undefined1 *)((int)param_1 + 0x1fe7) = 0;
  *(undefined1 *)((int)param_1 + 0x1fe6) = 0;
  *(undefined1 *)((int)param_1 + 0x1fe5) = 0;
  *(undefined1 *)(param_1 + 0x7f9) = 0;
  *(undefined1 *)((int)param_1 + 0x1fe3) = 0;
  *(undefined1 *)((int)param_1 + 0x1fe2) = 0;
  *(undefined1 *)((int)param_1 + 0x1fe1) = 0;
  *(undefined1 *)((int)param_1 + 0x1fdf) = 0;
  *(undefined1 *)((int)param_1 + 0x1fde) = 0;
  *(undefined1 *)((int)param_1 + 0x1fdd) = 0;
  *(undefined1 *)(param_1 + 0x7f7) = 0;
  *(undefined1 *)((int)param_1 + 0x1fdb) = 0;
  *(undefined1 *)((int)param_1 + 0x1fda) = 0;
  *(undefined1 *)((int)param_1 + 0x1fd9) = 0;
  *(undefined1 *)(param_1 + 0x7f6) = 0;
  *(undefined1 *)((int)param_1 + 0x1fd7) = 0;
  *(undefined1 *)((int)param_1 + 0x1fd6) = 0;
  *(undefined1 *)((int)param_1 + 0x1fd5) = 0;
  *(undefined1 *)((int)param_1 + 0x1fd3) = 0;
  *(undefined1 *)((int)param_1 + 0x1fd2) = 0;
  *(undefined1 *)((int)param_1 + 0x1fd1) = 0;
  *(undefined1 *)(param_1 + 0x7f4) = 0;
  *(undefined1 *)((int)param_1 + 0x1fcf) = 0;
  *(undefined1 *)((int)param_1 + 0x1fce) = 0;
  *(undefined1 *)((int)param_1 + 0x1fcd) = 0;
  *(undefined1 *)(param_1 + 0x7f3) = 0;
  *(undefined1 *)((int)param_1 + 0x1fcb) = 0;
  *(undefined1 *)((int)param_1 + 0x1fca) = 0;
  *(undefined1 *)((int)param_1 + 0x1fc9) = 0;
  *(undefined1 *)(param_1 + 0x7f2) = 0;
  *(undefined1 *)(param_1 + 0x7f8) = 1;
  *(undefined1 *)(param_1 + 0x7f5) = 1;
  *(undefined1 *)((int)param_1 + 0x1fee) = 0;
  *(undefined1 *)((int)param_1 + 0x1fed) = 0;
  *(undefined1 *)(param_1 + 0x7fb) = 0;
  iVar2 = 0;
  *(undefined1 *)((int)param_1 + 0x1feb) = 0;
  do {
    FUN_4a1655f0((int)param_1 + DAT_4a09b1e8 + 0xa4 + iVar2 * 0x14,0,0,0,0);
    iVar1 = DAT_4a09b1ec;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  *(undefined1 *)((int)param_1 + DAT_4a09b1ec + 0xb) = 1;
  *(undefined1 *)((int)param_1 + iVar1 + 10) = 1;
  *(undefined1 *)((int)param_1 + iVar1 + 9) = 1;
  *(undefined1 *)((int)param_1 + iVar1 + 8) = 1;
  param_1[0x81b] = DAT_4a09b1f0;
  param_1[0x81c] = DAT_4a09b1e4 + -6;
  *(undefined1 *)((int)param_1 + iVar1 + 0x14) = 1;
  uVar3 = DAT_4a09b1f4;
  puVar4 = (undefined4 *)((int)param_1 + DAT_4a09b1ec + 0x18);
  *puVar4 = 2;
  puVar4[1] = 0;
  FUN_4a1655f0(param_1 + 0x820,uVar3,uVar3,uVar3,0x3f800000);
  uVar3 = DAT_4a09b1f4;
  puVar4 = (undefined4 *)((int)param_1 + DAT_4a09b1ec + 0x34);
  *puVar4 = 2;
  puVar4[1] = 0;
  FUN_4a1655f0((int)param_1 + DAT_4a09b1ec + 0x3c,uVar3,uVar3,uVar3,0x3f800000);
  FUN_4a1655f0((int)param_1 + DAT_4a09b1ec + 0x50,DAT_4a09b1f8,DAT_4a09b1f8,DAT_4a09b1f8,0x3f800000)
  ;
  FUN_4a1655f0((int)param_1 + DAT_4a09b1ec + 100,0,0,0,0x3f800000);
  FUN_4a1655f0((int)param_1 + DAT_4a09b1ec + 0x78,0,0,0,0x3f800000);
  puVar4 = (undefined4 *)((int)param_1 + DAT_4a09b1ec + 0x8c);
  *puVar4 = 2;
  puVar4[1] = 0x3f800000;
  puVar4 = (undefined4 *)((int)param_1 + DAT_4a09b1ec + 0x94);
  *puVar4 = 2;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0x3f800000;
  param_1[0x841] = 0;
  param_1[0x844] = 1;
  param_1[0x842] = 0;
  param_1[0x846] = 0;
  param_1[0x845] = 0;
  param_1[0x847] = 0;
  param_1[0x848] = 0;
  param_1[0x843] = 1;
  iVar2 = FUN_4a00abc0(0);
  param_1[0x849] = iVar2;
  iVar2 = FUN_4a00abc0(1);
  param_1[0x84a] = iVar2;
  param_1[0x84b] = DAT_4a09b1fc;
  iVar2 = DAT_4a09b1e4;
  param_1[0x84d] = DAT_4a09b1e4;
  param_1[0x84f] = 0;
  param_1[0x84e] = 0;
  param_1[0x84c] = iVar2;
  piVar5 = param_1 + 0x850;
  param_1[0x851] = -1;
  *piVar5 = -1;
  param_1[0x853] = -1;
  param_1[0x85a] = 0;
  param_1[0x852] = -1;
  param_1[0x85b] = DAT_4a09b200;
  param_1[0x85c] = DAT_4a09b204;
  param_1[0x85d] = 4;
  param_1[0x85e] = 4;
  FUN_4a0294d4((int)param_1 + DAT_4a09b208);
  FUN_4a0294d4((int)param_1 + DAT_4a09b208 + 0x40);
  param_1[0x87f] = 0x1700;
  param_1[0x880] = 0;
  param_1[0x881] = 2;
  param_1[0x882] = 0;
  puVar4 = (undefined4 *)((int)param_1 + DAT_4a09b208 + 0x90);
  *puVar4 = 2;
  puVar4[1] = 0;
  param_1[0x889] = 0x1100;
  param_1[0x888] = 0x1100;
  param_1[0x887] = 0x1100;
  param_1[0x886] = 0x1100;
  param_1[0x885] = 0x1100;
  piVar5[9] = 0x1e00;
  piVar5[8] = 0x1e00;
  piVar5[7] = 0x1e00;
  piVar5[6] = 0x1e00;
  piVar5[5] = 0x1e00;
  piVar5[4] = 0x1e00;
  FUN_4a1655f0((int)param_1 + DAT_4a09b208 + 0xac,0,0,0,0);
  iVar2 = DAT_4a09b20c;
  param_1[0x88f] = DAT_4a09b20c;
  param_1[0x890] = iVar2;
  thunk_FUN_4a00121c((int)param_1 + DAT_4a09b208 + 200,0x20);
  iVar2 = DAT_4a09b208;
  param_1[0x899] = 0;
  param_1[0x89a] = 0;
  FUN_4a09bdf4((int)param_1 + iVar2 + 0xf0);
  FUN_4a09bdf4((int)param_1 + DAT_4a09b210);
  FUN_4a09bdf4((int)param_1 + DAT_4a09b210 + 0x18);
  thunk_FUN_4a00121c((int)param_1 + DAT_4a09b210 + 0x30,0x300);
  return;
}



// Address: 4a09b214

int FUN_4a09b214(int param_1)

{
  return *(int *)(param_1 + 0x1fc0) * 0xd8 + param_1 + DAT_4a09b228;
}



// Address: 4a09b22c

void FUN_4a09b22c(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x2200) == param_2) {
    *(int *)(param_1 + 0x2200) = 0;
  }
  return;
}



// Address: 4a09b240

void FUN_4a09b240(int *param_1)

{
  int iVar1;
  
  if ((*PTR_DAT_4a09b290 == '\0') && (0x100 < *(int *)PTR_DAT_4a09b294)) {
    for (iVar1 = 0; iVar1 < *param_1; iVar1 = iVar1 + 1) {
      FUN_4a09c944(param_1 + iVar1 * 0x36 + 2,iVar1);
    }
    FUN_4a15032c(DAT_4a09b29c,(int)param_1 + DAT_4a09b298);
    FUN_4a15032c(DAT_4a09b29c + 1,(int)param_1 + DAT_4a09b298 + 0x40);
  }
  return;
}



// Address: 4a09b2a0

void FUN_4a09b2a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  int local_28;
  undefined4 *local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar1 = host_s3eGLGetInt_thumb(0);
  local_3c = 0;
  uVar2 = DAT_4a09b6a8;
  if (iVar1 < 0x200) {
    uVar2 = DAT_4a09b6ac;
  }
  thunk_FUN_4a150348(uVar2,&local_3c);
  iVar1 = 0;
  while( true ) {
    iVar4 = 0x20;
    if (local_3c < 0x20) {
      iVar4 = local_3c;
    }
    if (iVar4 <= iVar1) break;
    FUN_4a09c968(iVar1 * 0xd8 + param_1 + 8,iVar1);
    iVar1 = iVar1 + 1;
  }
  local_18 = param_1 + 0x20c0;
  local_1c = param_1 + 8000;
  local_20 = param_1 + 0x2040;
  local_24 = (undefined4 *)(param_1 + 0x2140);
  local_28 = param_1 + 0x1f80;
  local_2c = (undefined4 *)(param_1 + 0x2200);
  if (*PTR_DAT_4a09b6b0 == '\0') {
    local_40 = 0;
    do {
      FUN_4a0979a0(local_40 * 0x88 + param_1 + DAT_4a09b6c4,local_40);
      local_40 = local_40 + 1;
    } while (local_40 < 8);
    if (*(int *)(local_1c + 0xc) == 1) {
      FUN_4a14fcec();
    }
    else {
      FUN_4a14fcd8(*(undefined4 *)(local_1c + 8),*(undefined4 *)(param_1 + DAT_4a09b6c8 + 4));
    }
    puVar3 = (undefined4 *)(param_1 + DAT_4a09b6c8 + 0x28);
    if (*(int *)(local_1c + 0x30) == 1) {
      FUN_4a14fed0();
    }
    else {
      FUN_4a14febc(*puVar3,puVar3[1],puVar3[2],puVar3[3]);
    }
    FUN_4a1501a4(DAT_4a09b6cc,*(undefined4 *)(local_28 + 0x10));
    if (*(int *)(local_28 + 0x14) == 1) {
      FUN_4a1501a4();
    }
    else {
      FUN_4a15017c(DAT_4a09b6cc + -3,*(undefined4 *)(param_1 + DAT_4a09b6c8 + 0x4c));
    }
    if (*(int *)(local_28 + 0x1c) == 1) {
      FUN_4a1501a4();
    }
    else {
      FUN_4a15017c(DAT_4a09b6cc + -2,*(undefined4 *)(param_1 + DAT_4a09b6c8 + 0x54));
    }
    if (*(int *)(local_28 + 0x24) == 1) {
      FUN_4a1501a4();
    }
    else {
      FUN_4a15017c(DAT_4a09b6cc + -1,*(undefined4 *)(param_1 + DAT_4a09b6c8 + 0x5c));
    }
    if (*(int *)(local_28 + 0x2c) == 1) {
      FUN_4a1501b8();
    }
    else {
      FUN_4a150190(DAT_4a09b6cc + 1,param_1 + DAT_4a09b6c8 + 100);
    }
    FUN_4a14fe90(*(undefined4 *)(param_1 + 0x1fc4));
    if (*(char *)(param_1 + 0x1fc8) == '\0') {
      FUN_4a1500f8(0xbc0);
    }
    else {
      FUN_4a150140();
    }
    if (*(char *)(param_1 + 0x1fca) == '\0') {
      FUN_4a1500f8(DAT_4a09b6cc + 0x8d);
    }
    else {
      FUN_4a150140();
    }
    if (0 < *(int *)(param_1 + 4)) {
      if (*(char *)(param_1 + 0x1fcb) == '\0') {
        FUN_4a1500f8(DAT_4a09b6d0);
      }
      else {
        FUN_4a150140();
      }
    }
    if (1 < *(int *)(param_1 + 4)) {
      if (*(char *)(param_1 + 0x1fcc) == '\0') {
        FUN_4a1500f8(DAT_4a09b6d0 + 1);
      }
      else {
        FUN_4a150140();
      }
    }
    if (2 < *(int *)(param_1 + 4)) {
      if (*(char *)(param_1 + 0x1fcd) == '\0') {
        FUN_4a1500f8(DAT_4a09b6d0 + 2);
      }
      else {
        FUN_4a150140();
      }
    }
    if (3 < *(int *)(param_1 + 4)) {
      if (*(char *)(param_1 + 0x1fce) == '\0') {
        FUN_4a1500f8(DAT_4a09b6d0 + 3);
      }
      else {
        FUN_4a150140();
      }
    }
    if (4 < *(int *)(param_1 + 4)) {
      if (*(char *)(param_1 + 0x1fcf) == '\0') {
        FUN_4a1500f8(DAT_4a09b6d0 + 4);
      }
      else {
        FUN_4a150140();
      }
    }
    if (5 < *(int *)(param_1 + 4)) {
      if (*(char *)(param_1 + 0x1fd0) == '\0') {
        FUN_4a1500f8(DAT_4a09b6d0 + 5);
      }
      else {
        FUN_4a150140();
      }
    }
    if (*(char *)(param_1 + 0x1fd1) == '\0') {
      FUN_4a1500f8(DAT_4a09b6cc + -0xe);
    }
    else {
      FUN_4a150140();
    }
    if (*(char *)(param_1 + 0x1fd5) == '\0') {
      FUN_4a1500f8(0xb60);
    }
    else {
      FUN_4a150140();
    }
    if (*(char *)(param_1 + 0x1fd6) == '\0') {
      FUN_4a1500f8(0x4000);
    }
    else {
      FUN_4a150140();
    }
    if (*(char *)(param_1 + 0x1fd7) == '\0') {
      FUN_4a1500f8(DAT_4a09b6d4);
    }
    else {
      FUN_4a150140();
    }
    if (*(char *)(param_1 + 0x1fd8) == '\0') {
      FUN_4a1500f8(DAT_4a09b6d4 + 1);
    }
    else {
      FUN_4a150140();
    }
    if (*(char *)(param_1 + 0x1fd9) == '\0') {
      FUN_4a1500f8(DAT_4a09b6d4 + 2);
    }
    else {
      FUN_4a150140();
    }
    if (*(char *)(param_1 + 0x1fda) == '\0') {
      FUN_4a1500f8(DAT_4a09b6d4 + 3);
    }
    else {
      FUN_4a150140();
    }
    if (*(char *)(param_1 + 0x1fdb) == '\0') {
      FUN_4a1500f8(DAT_4a09b6d4 + 4);
    }
    else {
      FUN_4a150140();
    }
    if (*(char *)(param_1 + 0x1fdc) == '\0') {
      FUN_4a1500f8(DAT_4a09b6d4 + 5);
    }
    else {
      FUN_4a150140();
    }
    if (*(char *)(param_1 + 0x1fdd) == '\0') {
      FUN_4a1500f8(DAT_4a09b6d4 + 6);
    }
    else {
      FUN_4a150140();
    }
    if (*(char *)(param_1 + 0x1fde) == '\0') {
      FUN_4a1500f8(0xb50);
    }
    else {
      FUN_4a150140();
    }
    if (*(char *)(param_1 + 0x1fdf) == '\0') {
      FUN_4a1500f8(0xb20);
    }
    else {
      FUN_4a150140();
    }
    if (*(char *)(param_1 + 0x1fe0) == '\0') {
      FUN_4a1500f8(DAT_4a09baf0);
    }
    else {
      FUN_4a150140();
    }
    if (*(char *)(param_1 + 0x1fe1) == '\0') {
      FUN_4a1500f8(DAT_4a09baf4);
    }
    else {
      FUN_4a150140();
    }
    if (*(char *)(param_1 + 0x1fe2) == '\0') {
      FUN_4a1500f8(0xb10);
    }
    else {
      FUN_4a150140();
    }
    if (*(char *)(param_1 + 0x1fe3) == '\0') {
      FUN_4a1500f8(DAT_4a09baf8);
    }
    else {
      FUN_4a150140();
    }
    if (*(char *)(param_1 + 0x1fe5) == '\0') {
      FUN_4a1500f8(DAT_4a09baf0 + -99);
    }
    else {
      FUN_4a150140();
    }
    if (*(char *)(param_1 + 0x1fe7) == '\0') {
      FUN_4a1500f8(DAT_4a09baf0 + 2);
    }
    else {
      FUN_4a150140();
    }
    if (*(char *)(param_1 + 0x1feb) == '\0') {
      FUN_4a15010c(DAT_4a09baf0 + -0x27);
    }
    else {
      FUN_4a150154();
    }
    if (*(char *)(param_1 + 0x1fec) == '\0') {
      FUN_4a15010c(DAT_4a09baf0 + -0x28);
    }
    else {
      FUN_4a150154();
    }
    if (*(char *)(param_1 + 0x1fee) == '\0') {
      FUN_4a15010c(DAT_4a09baf0 + -0x29);
    }
    else {
      FUN_4a150154();
    }
    for (local_44 = 0; local_44 < *(int *)(param_1 + 4); local_44 = local_44 + 1) {
      iVar1 = local_44 * 0x14 + param_1;
      if (*(int *)(iVar1 + 0x1ff0) == 1) {
        FUN_4a14fea8(local_44 + 0x3000,iVar1 + DAT_4a09bafc + 4);
      }
      else {
        FUN_4a14fe9c(local_44 + 0x3000,iVar1 + DAT_4a09bafc + 4);
      }
    }
    if (*(int *)(local_20 + 0x38) == 1) {
      FUN_4a15045c();
    }
    else {
      FUN_4a15043c(DAT_4a09baf4 + -0x4f,*(undefined4 *)(param_1 + DAT_4a09bafc + 0x8c));
    }
    local_38 = (int *)(param_1 + 0x2080);
    if (*local_38 == 1) {
      FUN_4a150470();
    }
    else {
      FUN_4a150448(DAT_4a09baf4 + -0x4e,param_1 + 0x2084);
    }
    if (local_38[5] == 1) {
      FUN_4a1505f4();
    }
    else {
      FUN_4a1505dc(DAT_4a09bb04,DAT_4a09bb00,*(undefined4 *)(param_1 + DAT_4a09bafc + 0xa8));
    }
    if (local_38[7] == 1) {
      FUN_4a150608();
    }
    else {
      FUN_4a1505e8(DAT_4a09bb04,0x1200,param_1 + DAT_4a09bafc + 0xb0);
    }
    if (local_38[0xc] == 1) {
      FUN_4a150608();
    }
    else {
      FUN_4a1505e8(DAT_4a09bb04,DAT_4a09bb08,param_1 + DAT_4a09bafc + 0xc4);
    }
    if (*(int *)(local_18 + 4) == 1) {
      FUN_4a150608();
    }
    else {
      FUN_4a1505e8(DAT_4a09bb04,DAT_4a09bb08 + 1,param_1 + DAT_4a09bafc + 0xd8);
    }
    if (*(int *)(local_18 + 0x18) == 1) {
      FUN_4a150608();
    }
    else {
      FUN_4a1505e8(DAT_4a09bb04,0x1600,param_1 + DAT_4a09bafc + 0xec);
    }
    puVar3 = (undefined4 *)(param_1 + DAT_4a09bb0c);
    if (*(int *)(local_18 + 0x34) == 1) {
      FUN_4a150690();
    }
    else {
      FUN_4a150684(*puVar3,puVar3[1],puVar3[2]);
    }
    FUN_4a1509f4(*(undefined4 *)(param_1 + 0x212c));
    FUN_4a1505d0(local_24[0xc]);
    thunk_FUN_4a150618(DAT_4a09bb10);
    thunk_FUN_4a150544(param_1 + DAT_4a09bb0c + 0xc4);
    thunk_FUN_4a150618(0x1700);
    thunk_FUN_4a150544(param_1 + DAT_4a09bb0c + 0x84);
    thunk_FUN_4a150618(*(undefined4 *)(param_1 + 0x21fc));
    FUN_4a150404(0xc50,local_2c[5]);
    FUN_4a150404(DAT_4a09baf4 + 0xb0,local_2c[6]);
    FUN_4a150404(DAT_4a09baf4 + 0xb1,local_2c[7]);
    FUN_4a150404(DAT_4a09baf4 + 0xb3,local_2c[8]);
    FUN_4a150a20(*(undefined4 *)(param_1 + 0x2130),*(undefined4 *)(param_1 + 0x2138),*local_24);
    FUN_4a150a38(local_24[2]);
    if (*(int *)PTR_DAT_4a09bb14 != 2) {
      FUN_4a150a50(local_24[4],local_24[6],local_24[8]);
    }
    FUN_4a09be48(param_1 + DAT_4a09bb1c,PTR_FUN_4a150d6c_1_4a09bb18);
    FUN_4a09be48(param_1 + DAT_4a09bb1c + 0x18,PTR_LAB_4a048320_1_4a09bb20);
    FUN_4a09be48(param_1 + DAT_4a09bb1c + 0x30,PTR_FUN_4a14fef8_1_4a09bb24);
  }
  else {
    FUN_4a150d34(*local_2c);
    puVar3 = (undefined4 *)(param_1 + DAT_4a09b6b4);
    FUN_4a14fd98(*puVar3,puVar3[1],puVar3[2],puVar3[3]);
    local_30 = (undefined4 *)(param_1 + 0x2240);
    FUN_4a14fda4(local_2c[0xf],*local_30);
    FUN_4a14fdc4(*(undefined4 *)(param_1 + 0x210c),*(undefined4 *)(param_1 + 0x2114),
                 *(undefined4 *)(param_1 + 0x2110),*(undefined4 *)(param_1 + 0x2118));
    local_44 = 0;
    thunk_FUN_4a150348(DAT_4a09b6b8,&local_44);
    if (0x20 < local_44) {
      local_44 = 0x20;
    }
    for (local_48 = 0; local_48 < local_44; local_48 = local_48 + 1) {
      FUN_4a09be04(local_48 * 0x18 + param_1 + DAT_4a09b6b4 + 0x88,local_48);
      if (*(char *)(param_1 + local_48 + 0x2244) == '\0') {
        FUN_4a150120(local_48);
      }
      else {
        FUN_4a150168();
      }
    }
    local_48 = 0;
    do {
      iVar1 = DAT_4a09b6bc;
      if (local_48 == 0) {
        iVar1 = DAT_4a09b6bc + -1;
      }
      iVar4 = local_48 * 4 + param_1;
      local_34 = (undefined4 *)(iVar4 + 0x2140);
      FUN_4a150a2c(iVar1,*(undefined4 *)(iVar4 + 0x2130),*(undefined4 *)(iVar4 + 0x2138),*local_34);
      FUN_4a150a44(iVar1,local_34[2]);
      FUN_4a150a5c(iVar1,local_34[4],local_34[6],local_34[8]);
      local_48 = local_48 + 1;
    } while (local_48 < 2);
    FUN_4a14fd2c(DAT_4a09b6c0,local_30[9]);
    FUN_4a14fd50(DAT_4a09b6c0 + 1,local_30[10]);
  }
  puVar3 = (undefined4 *)(param_1 + DAT_4a09bafc + -0x98);
  if (*(int *)(local_1c + 0x14) == 1) {
    FUN_4a14fe50();
  }
  else {
    FUN_4a14fe3c(*puVar3,puVar3[1],puVar3[2],puVar3[3]);
  }
  if (*(int *)(local_1c + 0x28) == 1) {
    FUN_4a14fe70();
  }
  else {
    FUN_4a14fe64(*(undefined4 *)(param_1 + DAT_4a09bafc + -0x84));
  }
  if (*(char *)(local_28 + 4) == '\0') {
    FUN_4a1500d8();
  }
  else {
    FUN_4a1500c4(*(undefined4 *)(local_28 + 8),*(undefined4 *)(local_28 + 0xc));
  }
  FUN_4a14fcc4(*(undefined4 *)(param_1 + 0x1fc0));
  if (*(char *)(param_1 + 0x1fc9) == '\0') {
    FUN_4a1500f8(DAT_4a09baf4 + 0x41);
  }
  else {
    FUN_4a150140();
  }
  if (*(char *)(param_1 + 0x1fd2) == '\0') {
    FUN_4a1500f8(DAT_4a09baf4 + -0x5d);
  }
  else {
    FUN_4a150140();
  }
  if (*(char *)(param_1 + 0x1fd3) == '\0') {
    FUN_4a1500f8(DAT_4a09baf4 + -0x30);
  }
  else {
    FUN_4a150140();
  }
  if (*(char *)(param_1 + 0x1fd4) == '\0') {
    FUN_4a1500f8(0xbd0);
  }
  else {
    FUN_4a150140();
  }
  if (*(char *)(param_1 + 0x1fe4) == '\0') {
    FUN_4a1500f8(DAT_4a09baf0 + -0x66);
  }
  else {
    FUN_4a150140();
  }
  if (*(char *)(param_1 + 0x1fe6) == '\0') {
    FUN_4a1500f8(DAT_4a09baf0 + 1);
  }
  else {
    FUN_4a150140();
  }
  if (*(char *)(param_1 + 0x1fe8) == '\0') {
    FUN_4a1500f8(DAT_4a09baf0 + 3);
  }
  else {
    FUN_4a150140();
  }
  if (*(char *)(param_1 + 0x1fe9) == '\0') {
    FUN_4a1500f8(DAT_4a09baf4 + 0x70);
  }
  else {
    FUN_4a150140();
  }
  if (*(char *)(param_1 + 0x1fea) == '\0') {
    FUN_4a1500f8(0xb90);
  }
  else {
    FUN_4a150140();
  }
  iVar1 = param_1 + DAT_4a09bafc + 0x70;
  FUN_4a14fee4(*(undefined1 *)(iVar1 + 8),*(undefined1 *)(iVar1 + 9),*(undefined1 *)(iVar1 + 10),
               *(undefined1 *)(iVar1 + 0xb));
  FUN_4a14ffe8(*(undefined4 *)(local_20 + 0x2c));
  FUN_4a15009c(*(undefined4 *)(local_20 + 0x30));
  FUN_4a1500b0(*(undefined1 *)(iVar1 + 0x14));
  if (*(int *)(local_18 + 0x2c) == 1) {
    FUN_4a1504c0();
  }
  else {
    FUN_4a1504b4(*(undefined4 *)(param_1 + DAT_4a09bb0c + -8));
  }
  FUN_4a14fd18(DAT_4a09baf8 + 0x31,*(undefined4 *)(param_1 + 0x2104));
  FUN_4a14fd18(DAT_4a09baf8 + 0x32,*(undefined4 *)(param_1 + 0x2108));
  FUN_4a14fdb8(*(undefined4 *)(param_1 + 0x210c),*(undefined4 *)(param_1 + 0x2114));
  thunk_FUN_4a1507ec(*(undefined4 *)(param_1 + 0x211c),*(undefined4 *)(param_1 + 0x2120),
                     *(undefined4 *)(param_1 + 0x2124),*(undefined4 *)(param_1 + 0x2128));
  FUN_4a14fe7c(local_24[10]);
  FUN_4a150234(local_24[0xb]);
  FUN_4a1506f8(DAT_4a09bb9c,local_24[0xd]);
  FUN_4a1506f8(DAT_4a09bb9c + -0x10,local_24[0xe]);
  if (local_2c[1] == 1) {
    FUN_4a150718();
  }
  else {
    FUN_4a15070c(*(undefined4 *)(param_1 + DAT_4a09bba0 + -4),
                 *(undefined4 *)(param_1 + DAT_4a09bba0 + 4));
  }
  iVar1 = host_s3eGLGetInt_thumb(0);
  if (0x100 < iVar1) {
    FUN_4a150404(DAT_4a09bba4,local_2c[9]);
  }
  return;
}



// Address: 4a09bba8

void FUN_4a09bba8(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_4a09bbc0;
  uVar1 = *PTR_DAT_4a09bbc0;
  *PTR_DAT_4a09bbc0 = 0;
  FUN_4a09b2a0();
  *puVar2 = uVar1;
  return;
}



// Address: 4a09bbc4

int FUN_4a09bbc4(int param_1,int param_2)

{
  return param_2 * 0x88 + param_1 + DAT_4a09bbd0;
}



// Address: 4a09bbd4

undefined8 FUN_4a09bbd4(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_24;
  
  for (iVar3 = 0; iVar2 = DAT_4a09bc58, iVar3 < param_2; iVar3 = iVar3 + 1) {
    local_24 = *(undefined4 *)(param_3 + iVar3 * 4);
    if (*PTR_DAT_4a09bc54 == '\0') {
      FUN_4a09be3c((int)param_1 + DAT_4a09bc58 + -0x48,local_24);
      FUN_4a09be3c((int)param_1 + DAT_4a09bc58 + -0x30,local_24);
      FUN_4a09be3c((int)param_1 + DAT_4a09bc58 + -0x18,local_24);
      for (iVar2 = 0; iVar2 < *param_1; iVar2 = iVar2 + 1) {
        FUN_4a09be3c(param_1 + iVar2 * 0x36 + 10,local_24);
      }
    }
    else {
      iVar1 = 0;
      do {
        FUN_4a09be3c((int)param_1 + iVar2 + iVar1 * 0x18,local_24);
        iVar1 = iVar1 + 1;
      } while (iVar1 < 0x20);
    }
  }
  return CONCAT44(param_1,local_24);
}



// Address: 4a09bc5c

int FUN_4a09bc5c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_4a1490e8(param_1 + 8,PTR_FUN_4a09cb2c_1_4a09bdcc,0xd8,0x20);
  iVar1 = FUN_4a1490e8(iVar1 + -8 + DAT_4a09bdd4,PTR_FUN_4a097ac4_1_4a09bdd0,0x88,8);
  iVar1 = FUN_4a09c884((iVar1 - DAT_4a09bdd4) + DAT_4a09bdd8);
  iVar1 = FUN_4a165670(iVar1 + 8);
  iVar1 = FUN_4a09c884(iVar1 + DAT_4a09bddc + DAT_4a09bdd8 + 0x1c);
  iVar1 = FUN_4a165670(iVar1 + DAT_4a09bddc + DAT_4a09bdd8 + 0x10);
  iVar1 = FUN_4a09c884(iVar1 + DAT_4a09bddc + DAT_4a09bdd8 + 0x2c);
  iVar1 = FUN_4a09c884(iVar1 + DAT_4a09bddc + DAT_4a09bdd8 + 0x10);
  iVar1 = FUN_4a09c884(iVar1 + DAT_4a09bddc + DAT_4a09bdd8 + 0x10);
  iVar1 = FUN_4a165670(iVar1 + DAT_4a09bddc + DAT_4a09bdd8 + 0x10);
  iVar1 = FUN_4a1490e8(iVar1 + DAT_4a09bddc + DAT_4a09bdd8 + 0x4c,PTR_FUN_4a165670_1_4a09bde0,0x14,6
                      );
  iVar1 = FUN_4a09c884(iVar1 + DAT_4a09bddc + -0x9c + DAT_4a09bde4);
  iVar1 = FUN_4a165670((iVar1 - DAT_4a09bde4) + 0x2080);
  iVar1 = FUN_4a09c884(iVar1 + DAT_4a09bde4 + -0x2064);
  iVar1 = FUN_4a165670(iVar1 + DAT_4a09bde8 + DAT_4a09bde4 + 0x24);
  iVar1 = FUN_4a165670(iVar1 + DAT_4a09bde8 + DAT_4a09bde4 + 0x30);
  iVar1 = FUN_4a165670(iVar1 + DAT_4a09bde8 + DAT_4a09bde4 + 0x30);
  iVar1 = FUN_4a165670(iVar1 + DAT_4a09bde8 + DAT_4a09bde4 + 0x30);
  iVar1 = FUN_4a09c884(iVar1 + DAT_4a09bde8 + DAT_4a09bde4 + 0x30);
  iVar1 = FUN_4a16559e(iVar1 + DAT_4a09bde8 + DAT_4a09bde4 + 0x24);
  iVar1 = FUN_4a09c884(iVar1 + DAT_4a09bde8 + -0x60 + DAT_4a09bdec);
  iVar1 = FUN_4a09c884(iVar1 + 8);
  iVar1 = FUN_4a165670(iVar1 + DAT_4a09bdf0 + DAT_4a09bdec + 0x24);
  return iVar1 + DAT_4a09bdf0 + -0x1c;
}



// Address: 4a09bdf4

void FUN_4a09bdf4(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



// Address: 4a09be04

void FUN_4a09be04(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1[2] != 0) {
    FUN_4a14fd18(DAT_4a09be38,*param_1,param_3,param_4,param_3,param_4);
    FUN_4a150168(param_2);
    FUN_4a150d48(param_2,param_1[1],param_1[2],*(undefined1 *)(param_1 + 3),param_1[4],param_1[5]);
  }
  return;
}



// Address: 4a09be3c

void FUN_4a09be3c(int *param_1,int param_2)

{
  if (*param_1 == param_2) {
    *param_1 = 0;
  }
  return;
}



// Address: 4a09be48

void FUN_4a09be48(undefined4 *param_1)

{
  if (param_1[2] != 0) {
    FUN_4a14fd18(DAT_4a09be70,*param_1);
    FUN_4a1652ce(param_1[1],param_1[2],param_1[4],param_1[5]);
  }
  return;
}



// Address: 4a09be74

void FUN_4a09be74(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 8) == 0) {
    FUN_4a16fb62(param_1 + 4,1,param_3,param_4,param_1,param_2);
    for (uVar3 = 0; uVar3 < *(uint *)(param_1 + 8); uVar3 = uVar3 + 1) {
      *(undefined4 *)(*(int *)(param_1 + 4) + uVar3 * 4) = 0;
    }
  }
  if (**(int **)(param_1 + 4) == 0) {
    thunk_FUN_4a161570(0x10);
    uVar1 = FUN_4a09c014();
    **(undefined4 **)(param_1 + 4) = uVar1;
  }
  puVar2 = (undefined2 *)FUN_4a170776(**(undefined4 **)(param_1 + 4),param_2 & 0xff);
  *puVar2 = (short)param_3;
  return;
}



// Address: 4a09bed6

int FUN_4a09bed6(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  
  thunk_FUN_4a161570(0x14);
  iVar1 = FUN_4a09c1bc();
  iVar4 = *(int *)(param_1 + 8);
  FUN_4a16fb62(iVar1 + 4);
  for (iVar7 = 0; iVar7 < iVar4; iVar7 = iVar7 + 1) {
    thunk_FUN_4a161570(0x10);
    piVar2 = (int *)FUN_4a09c014();
    *(int **)(*(int *)(iVar1 + 4) + iVar7 * 4) = piVar2;
    piVar6 = *(int **)(*(int *)(param_1 + 4) + iVar7 * 4);
    FUN_4a16fe36(piVar2);
    if (((uint)piVar6[1] < (uint)piVar2[2] >> 1) || ((uint)piVar2[2] < (uint)piVar6[1])) {
      FUN_4a16fe0a(piVar2);
    }
    for (uVar5 = 0; uVar5 < (uint)piVar6[1]; uVar5 = uVar5 + 1) {
      iVar3 = *piVar6;
      FUN_4a16fe80(piVar2,piVar2[1] + 1);
      *(undefined2 *)(*piVar2 + piVar2[1] * 2) = *(undefined2 *)(iVar3 + uVar5 * 2);
      piVar2[1] = piVar2[1] + 1;
    }
  }
  return iVar1;
}



// Address: 4a09bf74

void FUN_4a09bf74(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint local_34 [8];
  
  thunk_FUN_4a00121c(local_34,0x20);
  uVar1 = DAT_4a09c010;
  uVar2 = 0;
  if (*PTR_DAT_4a09c00c == '\0') {
    do {
      if (*(ushort *)(*param_1 + uVar2 * 2) != DAT_4a09c010) {
        local_34[(int)(((uint)((int)uVar2 >> 0x1f) >> 0x1b) + uVar2) >> 5] =
             local_34[(int)(((uint)((int)uVar2 >> 0x1f) >> 0x1b) + uVar2) >> 5] |
             1 << (uVar2 & 0x1f);
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 0x100);
  }
  FUN_4a03c12c(local_34,8,0x20,4);
  uVar2 = 0;
  do {
    if ((local_34[(int)(((uint)((int)uVar2 >> 0x1f) >> 0x1b) + uVar2) >> 5] & 1 << (uVar2 & 0x1f))
        == 0) {
      *(short *)(*param_1 + uVar2 * 2) = (short)uVar1;
    }
    else {
      FUN_4a03c0b8(*param_1 + uVar2 * 2,1,0x10,2);
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x100);
  return;
}



// Address: 4a09c014

int * FUN_4a09c014(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfc;
  FUN_4a16fe48(param_1,0);
  FUN_4a16fe36(param_1);
  if ((uint)param_1[1] < 0x100) {
    FUN_4a16fe0a(param_1,0x100);
  }
  FUN_4a16fe48(param_1,0x100);
  FUN_4a16fe0a(param_1,param_1[1]);
  uVar1 = DAT_4a09c078;
  iVar2 = 0;
  do {
    iVar3 = iVar2 * 2;
    iVar2 = iVar2 + 1;
    *(short *)(*param_1 + iVar3) = (short)uVar1;
  } while (iVar2 < 0x100);
  return param_1;
}



// Address: 4a09c07c

undefined4 * FUN_4a09c07c(undefined4 *param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < (uint)param_1[1]; uVar1 = uVar1 + 1) {
  }
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    FUN_4a0a6f48(*param_1,2);
    *param_1 = 0;
  }
  return param_1;
}



// Address: 4a09c0ac

void FUN_4a09c0ac(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint local_20;
  uint local_1c;
  undefined4 uStack_18;
  
  puVar1 = PTR_DAT_4a09c1b8;
  local_20 = param_2;
  local_1c = param_3;
  uStack_18 = param_4;
  if (*PTR_DAT_4a09c1b8 != '\0') {
    for (uVar4 = 0; uVar4 < *(uint *)(param_1 + 8); uVar4 = uVar4 + 1) {
      if (*(int *)(*(int *)(param_1 + 4) + uVar4 * 4) != 0) {
        FUN_4a09c07c();
        thunk_FUN_4a161530();
      }
    }
    FUN_4a16fb50(param_1 + 4);
  }
  iVar5 = param_1 + 4;
  if (*puVar1 == '\0') {
    local_20 = *(uint *)(param_1 + 8);
    FUN_4a03c12c(&local_20,1,0x20,4);
  }
  else {
    FUN_4a03c12c(&local_20,1,0x20,4);
    uVar4 = local_20;
    if (*(uint *)(param_1 + 8) < local_20) {
      FUN_4a16fb24(iVar5,local_20);
    }
    FUN_4a16fb62(iVar5,uVar4);
    FUN_4a16fb24(iVar5,*(undefined4 *)(param_1 + 8));
  }
  uVar4 = 0;
  local_1c = 0;
  do {
    if (*(uint *)(param_1 + 8) <= uVar4) {
      return;
    }
    if ((uVar4 & 0x1f) == 0) {
      if (*puVar1 == '\0') {
        local_1c = 0;
        uVar2 = 0;
        do {
          if (*(uint *)(param_1 + 8) <= uVar4 + uVar2) break;
          if (*(int *)(*(int *)(param_1 + 4) + (uVar4 + uVar2) * 4) != 0) {
            local_1c = 1 << (uVar2 & 0xff) | local_1c;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < 0x20);
      }
      FUN_4a03c12c(&local_1c,1,0x20,4);
    }
    if ((1 << (uVar4 & 0x1f) & local_1c) == 0) {
      *(undefined4 *)(*(int *)(param_1 + 4) + uVar4 * 4) = 0;
    }
    else {
      if (*puVar1 != '\0') {
        thunk_FUN_4a161570(0x10);
        uVar3 = FUN_4a09c014();
        *(undefined4 *)(*(int *)(param_1 + 4) + uVar4 * 4) = uVar3;
      }
      FUN_4a09bf74(*(undefined4 *)(*(int *)(param_1 + 4) + uVar4 * 4));
    }
    uVar4 = uVar4 + 1;
  } while( true );
}



// Address: 4a09c1bc

undefined4 * FUN_4a09c1bc(undefined4 *param_1)

{
  *param_1 = PTR_PTR_4a09c1f0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfc;
  FUN_4a16fb62(param_1 + 1,0);
  FUN_4a16fb50(param_1 + 1);
  return param_1;
}



// Address: 4a09c1f4

void FUN_4a09c1f4(int param_1)

{
  if (param_1 != 0) {
    FUN_4a09c208();
    thunk_FUN_4a161530();
  }
  return;
}



// Address: 4a09c208

undefined4 * FUN_4a09c208(undefined4 *param_1)

{
  uint uVar1;
  
  *param_1 = PTR_PTR_4a09c258;
  for (uVar1 = 0; uVar1 < (uint)param_1[2]; uVar1 = uVar1 + 1) {
    if (*(int *)(param_1[1] + uVar1 * 4) != 0) {
      FUN_4a09c07c();
      thunk_FUN_4a161530();
    }
  }
  for (uVar1 = 0; uVar1 < (uint)param_1[2]; uVar1 = uVar1 + 1) {
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    FUN_4a0a6f48(param_1[1],4);
    param_1[1] = 0;
  }
  return param_1;
}



// Address: 4a09c25c

void FUN_4a09c25c(int param_1)

{
  uint uVar1;
  int iVar2;
  
  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 4); uVar1 = uVar1 + 1) {
    iVar2 = uVar1 * 0xc + param_1;
    if (*(int *)(iVar2 + 0xc) != 0) {
      FUN_4a15005c();
      *(undefined4 *)(iVar2 + 0xc) = 0;
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// Address: 4a09c288

void FUN_4a09c288(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_4a161530();
  }
  return;
}



// Address: 4a09c29a

void FUN_4a09c29a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x18) * 0xe8 + -0xe8);
  if (*piVar2 == 0) {
    iVar1 = piVar2[3] - piVar2[2];
  }
  else {
    iVar1 = host_s3eFileTell_thumb();
  }
  FUN_4a09c2ec(param_1,param_2,param_3,param_4);
  if (*piVar2 == 0) {
    piVar2[3] = piVar2[2] + iVar1;
  }
  else {
    host_s3eFileSeek_thumb(*piVar2,iVar1,0);
  }
  return;
}



// Address: 4a09c2ec

void FUN_4a09c2ec(undefined4 param_1,undefined1 *param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint local_2c;
  
  if (param_3 != 0) {
    bVar1 = false;
    puVar5 = param_2 + param_3;
    bVar2 = false;
    local_2c = 0;
LAB_4a09c300:
    do {
      iVar3 = FUN_4a08d5e4(param_1,param_4);
      if (iVar3 == 0x5c) {
        if (!bVar1) {
          bVar1 = true;
          goto LAB_4a09c300;
        }
LAB_4a09c312:
        bVar1 = false;
      }
      else {
        if (iVar3 == 0x22) {
          if (bVar1) goto LAB_4a09c312;
          if (local_2c != 0) break;
          local_2c = 1;
          bVar2 = true;
          goto LAB_4a09c300;
        }
        uVar4 = FUN_4a08d5b4(param_1,iVar3);
        if ((uVar4 & ~local_2c) != 0) {
          if (bVar2) break;
          goto LAB_4a09c300;
        }
        bVar2 = true;
        if (bVar1) {
          if (param_2 < puVar5) {
            *param_2 = 0x5c;
            param_2 = param_2 + 1;
          }
          goto LAB_4a09c312;
        }
      }
      if (param_2 < puVar5) {
        *param_2 = (char)iVar3;
        param_2 = param_2 + 1;
      }
    } while (iVar3 != 0);
    if (puVar5 <= param_2) {
      param_2 = puVar5 + -1;
    }
    *param_2 = 0;
  }
  return;
}



// Address: 4a09c378

void FUN_4a09c378(int *param_1,int *param_2,char *param_3,char *param_4)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  char local_74 [80];
  int *piStack_24;
  int *piStack_20;
  char *local_1c;
  char *local_18;
  
  bVar3 = true;
  pcVar7 = (char *)0x0;
  piStack_24 = param_1;
  piStack_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  FUN_4a16ec52(param_2,10);
  do {
    cVar1 = *(char *)*param_1;
    pcVar4 = local_18;
    if (cVar1 == '\0') {
LAB_4a09c3a8:
      *param_1 = *param_1 + 1;
      return;
    }
    while (cVar2 = *pcVar4, pcVar6 = local_1c, cVar2 != '\0') {
      pcVar4 = pcVar4 + 1;
      if (cVar2 == cVar1) goto LAB_4a09c3a8;
    }
    do {
      cVar2 = *pcVar6;
      if (cVar2 == '\0') {
        bVar3 = false;
        pcVar7 = local_74;
        goto LAB_4a09c390;
      }
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != cVar1);
    *param_1 = (int)((char *)*param_1 + 1);
LAB_4a09c390:
  } while (bVar3);
  pcVar6 = (char *)*param_1;
  cVar1 = *pcVar6;
  bVar8 = cVar1 == '\0';
  pcVar4 = local_18;
  do {
    pcVar5 = local_1c;
    if ((bVar8) || (cVar2 = *pcVar4, cVar2 == '\0')) goto LAB_4a09c40e;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != cVar1);
  bVar8 = true;
LAB_4a09c40e:
  do {
    if (bVar8) break;
    cVar2 = *pcVar5;
    if (cVar2 == '\0') {
      *param_1 = (int)(pcVar6 + 1);
      *pcVar7 = *pcVar6;
      pcVar7 = pcVar7 + 1;
      goto LAB_4a09c390;
    }
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != cVar1);
  *pcVar7 = '\0';
  FUN_4a16ec06(param_2,param_2[1] + 1);
  FUN_4a0012bc(*param_2 + param_2[1] * 0x28 + -0x28,local_74);
  bVar3 = true;
  goto LAB_4a09c390;
}



// Address: 4a09c44c

void FUN_4a09c44c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 local_2c [4];
  char *local_28;
  int iStack_24;
  char *local_18;
  
  pcVar4 = (char *)(param_1 + 0x24);
  FUN_4a09c5e4(param_1,pcVar4,0x100);
  while( true ) {
    cVar1 = *pcVar4;
    local_18 = pcVar4;
    iVar2 = FUN_4a08d5ce(param_1,cVar1);
    if ((iVar2 == 0) && (cVar1 != '{')) break;
    pcVar4 = local_18 + 1;
  }
  FUN_4a16ec8e(&local_28,0);
  FUN_4a09c378(&local_18,&local_28,&DAT_4a09c4fc,&DAT_4a09c4f8);
  for (pcVar4 = local_28; pcVar4 != local_28 + iStack_24 * 0x28; pcVar4 = pcVar4 + 0x28) {
    pcVar3 = pcVar4;
    if (*pcVar4 == '\"') {
      pcVar3 = pcVar4 + 1;
    }
    if (param_4 == 5) {
      puVar5 = &DAT_4a09c500;
    }
    else {
      puVar5 = &DAT_4a09c504;
    }
    iVar2 = FUN_4a000df4(pcVar3,puVar5,local_2c);
    if (iVar2 == 1) {
      uVar6 = thunk_FUN_4a1652fc();
      param_4 = (int)uVar6 << 0x10;
      *(undefined1 *)((ulonglong)uVar6 >> 0x38) = local_2c[0];
    }
  }
  FUN_4a16ecc2(&local_28);
  return;
}



// Address: 4a09c508

void FUN_4a09c508(int param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int local_24;
  int iStack_20;
  char *local_14;
  
  pcVar4 = (char *)(param_1 + 0x24);
  FUN_4a09c5e4(param_1,pcVar4,0x100);
  while( true ) {
    cVar1 = *pcVar4;
    local_14 = pcVar4;
    iVar2 = FUN_4a08d5ce(param_1,cVar1);
    if ((iVar2 == 0) && (cVar1 != '{')) break;
    pcVar4 = local_14 + 1;
  }
  FUN_4a16ec8e(&local_24,0);
  FUN_4a09c378(&local_14,&local_24,&DAT_4a09c584,&DAT_4a09c580);
  for (iVar2 = local_24; iVar2 != local_24 + iStack_20 * 0x28; iVar2 = iVar2 + 0x28) {
    thunk_FUN_4a001944(iVar2);
    uVar3 = thunk_FUN_4a170798();
    *param_2 = uVar3;
    param_2 = param_2 + 1;
  }
  FUN_4a16ecc2(&local_24);
  return;
}



// Address: 4a09c588

undefined4 FUN_4a09c588(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_3;
  iVar1 = 0;
  while( true ) {
    *param_3 = iVar1;
    if (*param_2 == 0) {
      *param_3 = iVar2;
      return 0;
    }
    iVar1 = thunk_FUN_4a162f7c(param_1);
    if (iVar1 == 0) break;
    param_2 = param_2 + 1;
    iVar1 = *param_3 + 1;
  }
  return 1;
}



// Address: 4a09c5bc

void FUN_4a09c5bc(int param_1,undefined4 param_2)

{
  FUN_4a09c2ec(param_1,param_1 + 0x24,0x100,1);
  FUN_4a000df4(param_1 + 0x24,&DAT_4a09c5e0,param_2);
  return;
}



// Address: 4a09c5e4

/* WARNING: Removing unreachable block (ram,0x4a09c64a) */
/* WARNING: Removing unreachable block (ram,0x4a09c64e) */

void FUN_4a09c5e4(undefined4 param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 == 0) {
    return;
  }
  iVar4 = 0;
  iVar5 = 0;
  puVar1 = param_2 + param_3;
LAB_4a09c5f8:
  uVar2 = FUN_4a08d5e4(param_1,1);
  if ((uVar2 == 0x7b) || (uVar2 == 0x5b)) {
    iVar5 = 1;
    iVar4 = iVar4 + 1;
  }
  else if (((uVar2 == 0x7d) || (uVar2 == 0x5d)) &&
          ((iVar5 == 0 || (iVar4 = iVar4 + -1, iVar4 == 0)))) {
    if (param_2 < puVar1) {
      *param_2 = (char)uVar2;
      param_2 = param_2 + 1;
    }
LAB_4a09c666:
    if (puVar1 <= param_2) {
      param_2 = puVar1 + -1;
    }
    *param_2 = 0;
    return;
  }
  iVar3 = FUN_4a08d5b4(param_1,uVar2);
  if (iVar3 != 0) goto code_r0x4a09c63e;
  iVar5 = 1;
  goto LAB_4a09c65a;
code_r0x4a09c63e:
  if ((iVar5 - 1U & uVar2) == 0) {
    if (iVar4 == 0) goto LAB_4a09c666;
LAB_4a09c65a:
    if (param_2 < puVar1) {
      *param_2 = (char)uVar2;
      param_2 = param_2 + 1;
    }
  }
  goto LAB_4a09c5f8;
}



// Address: 4a09c67c

undefined4 FUN_4a09c67c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  if ((*(int *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x3c) * 0x28 + 0xc) == 0) &&
     (iVar1 = FUN_4a1652c8(*(int **)(param_1 + 0x38),param_2,
                           *(undefined4 *)(**(int **)(param_1 + 0x38) + 0x10)), iVar1 != 0)) {
    uVar2 = *(undefined4 *)(param_1 + 0x38);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1c);
    do {
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) {
        return 0;
      }
      piVar3 = *(int **)(*(int *)(param_1 + 0x18) + iVar1 * 4);
      iVar4 = FUN_4a1652c8(piVar3,param_2,*(undefined4 *)(*piVar3 + 0x10));
    } while (iVar4 == 0);
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar1 * 4);
  }
  return uVar2;
}



// Address: 4a09c6e0

/* WARNING: Removing unreachable block (ram,0x4a09c730) */
/* WARNING: Removing unreachable block (ram,0x4a09c750) */

undefined4 * FUN_4a09c6e0(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  *param_1 = PTR_PTR_4a09c7d8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfc;
  FUN_4a16f44c(param_1 + 2,0,param_1 + 2,param_4,param_4);
  for (uVar2 = 0; uVar2 < (uint)param_1[3]; uVar2 = uVar2 + 1) {
  }
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xfc;
  param_1[7] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xfc;
  param_1[0xb] = 0;
  param_1[0xb] = 0;
  puVar5 = param_1 + 2;
  if ((uint)param_1[3] < param_2) {
    FUN_4a16f41e(puVar5,param_2);
  }
  FUN_4a16f44c(puVar5,param_2);
  FUN_4a16f41e(puVar5,param_1[3]);
  if ((int)param_1[8] < (int)param_2) {
    FUN_4a16f8b4(param_1 + 6,param_2);
  }
  if ((int)param_1[0xc] < 0x14) {
    FUN_4a16fc1c(param_1 + 10,0x14);
  }
  puVar1 = PTR_DAT_4a09c7dc;
  iVar4 = *(int *)PTR_DAT_4a09c7dc;
  *(int *)(param_1[2] + 4) = iVar4;
  FUN_4a0012bc(param_1[2] + 0x14,*(undefined4 *)(iVar4 + 4));
  *(undefined4 *)param_1[2] = 0;
  *(undefined4 *)(param_1[2] + 8) = 0;
  *(undefined4 *)(param_1[2] + 0xc) = 0;
  *(undefined4 *)(param_1[2] + 0x10) = 0;
  FUN_4a16f8e0(param_1 + 6,param_1[2] + 4);
  uVar3 = *(undefined4 *)puVar1;
  param_1[0xf] = 0;
  param_1[0xe] = uVar3;
  return param_1;
}



// Address: 4a09c7e0

void FUN_4a09c7e0(int param_1)

{
  if (param_1 != 0) {
    FUN_4a09c7f4();
    thunk_FUN_4a161530();
  }
  return;
}



// Address: 4a09c7f4

undefined4 * FUN_4a09c7f4(undefined4 *param_1)

{
  uint uVar1;
  
  *param_1 = PTR_PTR_4a09c864;
  for (uVar1 = 0; uVar1 < (uint)param_1[0xb]; uVar1 = uVar1 + 1) {
  }
  if ((*(byte *)(param_1 + 0xd) & 1) == 0) {
    FUN_4a0a6f48(param_1[10],4);
    param_1[10] = 0;
  }
  for (uVar1 = 0; uVar1 < (uint)param_1[7]; uVar1 = uVar1 + 1) {
  }
  if ((*(byte *)(param_1 + 9) & 1) == 0) {
    FUN_4a0a6f48(param_1[6],4);
    param_1[6] = 0;
  }
  for (uVar1 = 0; uVar1 < (uint)param_1[3]; uVar1 = uVar1 + 1) {
  }
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    FUN_4a0a6f48(param_1[2],0x28);
    param_1[2] = 0;
  }
  return param_1;
}



// Address: 4a09c884

void FUN_4a09c884(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



// Address: 4a09c88c

undefined4 FUN_4a09c88c(int *param_1)

{
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = *param_1 == 2;
  if (((bool)cVar2) && (thunk_FUN_4a171da0(param_1[1]), cVar2 != '\0')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Address: 4a09c8a8

undefined4 FUN_4a09c8a8(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*param_1 == 1) && (param_1[1] == param_2)) {
    uVar1 = 1;
  }
  return uVar1;
}



// Address: 4a09c8bc

void FUN_4a09c8bc(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_4a1655f0(param_1 + 3,0,0,0,0x3f800000);
  FUN_4a09bdf4(param_1 + 8);
  param_1[0xe] = 0x2100;
  FUN_4a1655f0(param_1 + 0xf,0,0,0,0);
  param_1[0x14] = 0x2100;
  param_1[0x16] = 2;
  param_1[0x17] = 0x3f800000;
  param_1[0x19] = 0x3f800000;
  param_1[0x15] = 0x2100;
  param_1[0x18] = 2;
  param_1[0x1a] = 0x300;
  param_1[0x1b] = 0x300;
  param_1[0x1c] = 0x302;
  param_1[0x1d] = 0x302;
  param_1[0x1e] = 0x302;
  param_1[0x1f] = 0x302;
  iVar2 = DAT_4a09c940;
  uVar1 = DAT_4a09c93c;
  iVar3 = DAT_4a09c940 + -2;
  param_1[0x20] = DAT_4a09c93c;
  param_1[0x21] = iVar2;
  param_1[0x22] = iVar3;
  param_1[0x23] = uVar1;
  param_1[0x24] = iVar2;
  param_1[0x25] = iVar3;
  FUN_4a0294d4(param_1 + 0x26);
  return;
}



// Address: 4a09c944

void FUN_4a09c944(int param_1,int param_2)

{
  host_glActiveTexture_thumb(param_2 + DAT_4a09c960);
  FUN_4a15032c(DAT_4a09c964,param_1 + 0x98);
  return;
}



// Address: 4a09c968

void FUN_4a09c968(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  
  param_2 = param_2 + DAT_4a09cb10;
  FUN_4a14fcc4();
  iVar1 = DAT_4a09cb14;
  thunk_FUN_4a14fd70(DAT_4a09cb14,*param_1);
  puVar2 = PTR_DAT_4a09cb18;
  if ((*PTR_DAT_4a09cb18 == '\0') ||
     (thunk_FUN_4a14fd70(DAT_4a09cb10 + 0x53,param_1[1]), *puVar2 == '\0')) {
    if (*(char *)(param_1 + 2) == '\0') {
      FUN_4a1500f8(iVar1);
    }
    else {
      FUN_4a150140(iVar1);
    }
    FUN_4a14fe90(param_2);
    if (*(char *)((int)param_1 + 9) == '\0') {
      FUN_4a15010c(DAT_4a09cb1c);
    }
    else {
      FUN_4a150154();
    }
    if (param_1[3] == 1) {
      FUN_4a150670(param_2);
    }
    else {
      FUN_4a15065c(param_2,param_1[4],param_1[5],param_1[6],param_1[7]);
    }
    FUN_4a09be48(param_1 + 8,PTR_FUN_4a150a70_1_4a09cb20);
    FUN_4a150a94(0x2300,0x2200,param_1[0xe]);
    if (param_1[0xf] == 1) {
      FUN_4a150ab4(0x2300);
    }
    else {
      FUN_4a150a88(0x2300,DAT_4a09cb24,param_1 + 0x10);
    }
    FUN_4a150a94(0x2300,DAT_4a09cb10 + 0xb1,param_1[0x14]);
    FUN_4a150a94(0x2300,DAT_4a09cb10 + 0xb2,param_1[0x15]);
    if (param_1[0x16] == 1) {
      FUN_4a150aa8(0x2300);
    }
    else {
      FUN_4a150a7c(0x2300,DAT_4a09cb10 + 0xb3,param_1[0x17]);
    }
    if (param_1[0x18] == 1) {
      FUN_4a150aa8(0x2300);
    }
    else {
      FUN_4a150a7c(0x2300,DAT_4a09cb14 + -0xc5,param_1[0x19]);
    }
    FUN_4a150a94(0x2300,DAT_4a09cb10 + 0xd0,param_1[0x1a]);
    FUN_4a150a94(0x2300,DAT_4a09cb10 + 0xd1,param_1[0x1b]);
    FUN_4a150a94(0x2300,DAT_4a09cb10 + 0xd2,param_1[0x1c]);
    FUN_4a150a94(0x2300,DAT_4a09cb10 + 0xd8,param_1[0x1d]);
    FUN_4a150a94(0x2300,DAT_4a09cb10 + 0xd9,param_1[0x1e]);
    FUN_4a150a94(0x2300,DAT_4a09cb10 + 0xda,param_1[0x1f]);
    FUN_4a150a94(0x2300,DAT_4a09cb10 + 0xc0,param_1[0x20]);
    FUN_4a150a94(0x2300,DAT_4a09cb10 + 0xc1,param_1[0x21]);
    FUN_4a150a94(0x2300,DAT_4a09cb10 + 0xc2,param_1[0x22]);
    FUN_4a150a94(0x2300,DAT_4a09cb10 + 200,param_1[0x23]);
    FUN_4a150a94(0x2300,DAT_4a09cb10 + 0xc9,param_1[0x24]);
    FUN_4a150a94(0x2300,DAT_4a09cb10 + 0xca,param_1[0x25]);
    thunk_FUN_4a150618(DAT_4a09cb28);
    thunk_FUN_4a150544(param_1 + 0x26);
  }
  return;
}



// Address: 4a09cb2c

int FUN_4a09cb2c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_4a165670(param_1 + 0xc);
  iVar1 = FUN_4a165670(iVar1 + 0x30);
  iVar1 = FUN_4a09c884(iVar1 + 0x1c);
  iVar1 = FUN_4a09c884(iVar1 + 8);
  return iVar1 + -0x60;
}



// Address: 4a09cb4c

void FUN_4a09cb4c(int param_1,int param_2,int param_3)

{
  int iVar1;
  ushort *puVar2;
  undefined2 *puVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = FUN_4a16f4d6(param_1 + 4);
    iVar4 = *(int *)(iVar1 + 4);
    iVar1 = FUN_4a16f4d6(param_1 + 4);
    if (iVar4 + (uint)*(ushort *)(iVar1 + 2) == param_2) {
      iVar1 = FUN_4a16f4d6(param_1 + 4);
      iVar1 = *(int *)(iVar1 + 4);
      puVar2 = (ushort *)FUN_4a16f4d6(param_1 + 4);
      if ((param_2 - iVar1) + (uint)*puVar2 == param_3) {
        iVar1 = FUN_4a16f4d6(param_1 + 4);
        *(short *)(iVar1 + 2) = *(short *)(iVar1 + 2) + 1;
        return;
      }
    }
  }
  FUN_4a16f52c(param_1 + 4,*(int *)(param_1 + 8) + 1);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  puVar3 = (undefined2 *)FUN_4a16f4d6(param_1 + 4);
  *(int *)(puVar3 + 2) = param_2;
  puVar3[1] = 1;
  *puVar3 = (short)param_3;
  return;
}



// Address: 4a09cbc0

int FUN_4a09cbc0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  thunk_FUN_4a161570(0x1c);
  iVar1 = FUN_4a09cce0();
  piVar4 = (int *)(iVar1 + 4);
  FUN_4a16f4e2(piVar4);
  if ((*(uint *)(param_1 + 8) < *(uint *)(iVar1 + 0xc) >> 1) ||
     (*(uint *)(iVar1 + 0xc) < *(uint *)(param_1 + 8))) {
    FUN_4a16f4aa(piVar4);
  }
  for (uVar5 = 0; uVar5 < *(uint *)(param_1 + 8); uVar5 = uVar5 + 1) {
    puVar6 = (undefined4 *)(*(int *)(param_1 + 4) + uVar5 * 8);
    FUN_4a16f52c(piVar4,*(int *)(iVar1 + 8) + 1);
    puVar2 = (undefined4 *)(*piVar4 + *(int *)(iVar1 + 8) * 8);
    uVar3 = puVar6[1];
    *puVar2 = *puVar6;
    puVar2[1] = uVar3;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  return iVar1;
}



// Address: 4a09cc28

undefined4 FUN_4a09cc28(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(uint *)(param_1 + 4) <= param_2) &&
     (param_2 < *(uint *)(param_1 + 4) + (uint)*(ushort *)(param_1 + 2))) {
    uVar1 = 1;
  }
  return uVar1;
}



// Address: 4a09cc3e

void FUN_4a09cc3e(int param_1)

{
  FUN_4a03c0b8(param_1,1,0x10,2);
  FUN_4a03c0b8(param_1 + 2,1,0x10,2);
  FUN_4a03c12c(param_1 + 4,1,0x20,4);
  return;
}



// Address: 4a09cc70

void FUN_4a09cc70(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint local_18;
  
  iVar1 = param_1 + 4;
  if (*PTR_DAT_4a09ccdc == '\0') {
    local_18 = *(uint *)(param_1 + 8);
    FUN_4a03c12c(&local_18,1,0x20,4);
  }
  else {
    local_18 = param_4;
    FUN_4a03c12c(&local_18,1,0x20,4);
    uVar2 = local_18;
    if (*(uint *)(param_1 + 8) < local_18) {
      FUN_4a16f4aa(iVar1,local_18);
    }
    FUN_4a16f4f4(iVar1,uVar2);
    FUN_4a16f4aa(iVar1,*(undefined4 *)(param_1 + 8));
  }
  for (uVar2 = 0; uVar2 < *(uint *)(param_1 + 8); uVar2 = uVar2 + 1) {
    FUN_4a09cc3e(*(int *)(param_1 + 4) + uVar2 * 8);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



// Address: 4a09cce0

undefined4 * FUN_4a09cce0(undefined4 *param_1)

{
  *param_1 = PTR_PTR_4a09cd1c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfc;
  FUN_4a16f4f4(param_1 + 1,0);
  FUN_4a16f4e2(param_1 + 1);
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[5] = 0;
  return param_1;
}



// Address: 4a09cd20

void FUN_4a09cd20(int param_1)

{
  if (param_1 != 0) {
    FUN_4a09cd34();
    thunk_FUN_4a161530();
  }
  return;
}



// Address: 4a09cd34

undefined4 * FUN_4a09cd34(undefined4 *param_1)

{
  uint uVar1;
  
  *param_1 = PTR_PTR_4a09cd64;
  for (uVar1 = 0; uVar1 < (uint)param_1[2]; uVar1 = uVar1 + 1) {
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    FUN_4a0a6f48(param_1[1],8);
    param_1[1] = 0;
  }
  return param_1;
}



// Address: 4a09cd68

void FUN_4a09cd68(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  int *piVar6;
  int *extraout_r1;
  int *piVar7;
  int *piVar8;
  short *psVar9;
  int iVar10;
  undefined8 uVar11;
  int *local_2c;
  int *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  
  piVar8 = *(int **)PTR_DAT_4a09cf58;
  iVar1 = (int)(short)piVar8[6];
  uVar5 = piVar8[8];
  if ((uVar5 & 0xfff) == 0) {
    uVar5 = (int)uVar5 >> 0xc;
  }
  else {
    iVar1 = iVar1 << 0xc;
  }
  local_18 = (int *)thunk_FUN_4a0015f0(iVar1,uVar5);
  local_1c = *piVar8;
  local_20 = piVar8[4];
  piVar8 = (int *)*param_1;
  iVar1 = FUN_4a16e61c(piVar8);
  *(uint *)(*param_1 + 0x24) = (int)*(short *)(iVar1 + 6) + (uint)*(ushort *)(local_20 + 0x12);
  local_24 = 0;
  do {
    iVar1 = FUN_4a1364c6(*param_1);
    local_2c = (int *)FUN_4a1364d6(*param_1,iVar1 + -1);
    psVar9 = (short *)(*piVar8 + (int)local_2c * 8);
    local_28 = local_2c;
    do {
      iVar1 = FUN_4a05a600(*(undefined4 *)(param_1[8] + (int)local_2c * 4));
      piVar2 = local_28;
      if (((iVar1 != 0) && ((int)local_18 < (int)psVar9[2] + (int)psVar9[1])) ||
         (*psVar9 == (short)param_1[0xc])) break;
      psVar9 = psVar9 + 4;
      local_2c = (int *)((int)local_2c + 1);
    } while ((int *)piVar8[1] != local_2c);
    piVar7 = local_2c;
    piVar6 = (int *)piVar8[1];
    if (piVar6 == local_2c) goto LAB_4a09cee8;
    if (local_1c << 0x1c < 0) {
      iVar1 = *param_1;
      piVar7 = *(int **)(iVar1 + 4);
      piVar6 = (int *)((int)local_2c + 1);
      piVar2 = piVar6;
      if (piVar7 < piVar6) {
        iVar10 = (int)piVar6 - (int)piVar7;
        FUN_4a16e628(iVar1,(int)piVar7 + iVar10);
        for (iVar3 = 0; iVar3 < iVar10; iVar3 = iVar3 + 1) {
        }
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + iVar10;
        piVar6 = extraout_r1;
      }
      else {
        for (; piVar2 < piVar7; piVar2 = (int *)((int)piVar2 + 1)) {
        }
        *(int **)(iVar1 + 4) = piVar6;
      }
LAB_4a09cee8:
      iVar1 = FUN_4a16e61c(piVar8,piVar6);
      sVar4 = *(short *)(iVar1 + 4);
      iVar1 = FUN_4a16e61c(piVar8);
      iVar3 = *(int *)(*param_1 + 0x20);
      if (iVar3 <= (int)sVar4 + (int)*(short *)(iVar1 + 2)) {
        iVar1 = FUN_4a16e61c(piVar8);
        sVar4 = *(short *)(iVar1 + 4);
        iVar1 = FUN_4a16e61c(piVar8);
        iVar3 = (int)sVar4 + (int)*(short *)(iVar1 + 2);
      }
      sVar4 = 0;
      *(int *)(*param_1 + 0x20) = iVar3;
      if (local_24 == 0) {
        iVar1 = FUN_4a16e61c(piVar8);
        sVar4 = *(short *)(iVar1 + 4);
        iVar1 = FUN_4a16e61c(piVar8);
        sVar4 = sVar4 + *(short *)(iVar1 + 2);
      }
      *(short *)(*param_1 + 0x2c) = sVar4;
      *(short *)(*param_1 + 0x2e) =
           (short)*(undefined4 *)(*param_1 + 0x24) - *(short *)(local_20 + 0x12);
      return;
    }
    if (*(short *)(*piVar8 + (int)local_2c * 8) == (short)param_1[0xc]) {
      if ((int *)((int)piVar6 - 1U) == local_2c) {
        piVar6 = (int *)((uint)*(ushort *)(local_20 + 0x12) + *(int *)(*param_1 + 0x24));
        *(int **)(*param_1 + 0x24) = piVar6;
        local_24 = 1;
        goto LAB_4a09cee8;
      }
      piVar2 = (int *)((int)local_2c - 1);
      piVar7 = (int *)((int)local_2c + 1);
    }
    else {
      if (((local_1c << 0x17 < 0) || (local_28 != local_2c)) ||
         ((int)*(short *)(*piVar8 + (int)local_28 * 8 + 2) <= (int)local_18)) {
        uVar11 = FUN_4a09d2dc(param_1,param_1[8],&local_2c,&local_28,local_1c);
        piVar6 = (int *)((ulonglong)uVar11 >> 0x20);
        if ((int)uVar11 == 0) {
          iVar1 = *piVar8 + (int)piVar7 * 8;
          if (((int)*(short *)(iVar1 + 4) + (int)*(short *)(iVar1 + 2)) -
              (int)*(short *)(*piVar8 + (int)piVar2 * 8 + 4) < (int)local_18) {
            local_2c = (int *)((int)piVar2 - 1);
            piVar6 = local_18;
            local_28 = piVar2;
          }
          else {
            local_2c = (int *)((int)piVar7 - 1);
            local_28 = piVar7;
            piVar6 = &local_24;
          }
        }
      }
      else {
        piVar6 = (int *)((int)piVar6 - 1);
        if (piVar6 == local_28) goto LAB_4a09cee8;
        local_2c = local_28;
        local_28 = (int *)((int)local_28 + 1);
      }
      piVar2 = local_2c;
      piVar7 = local_28;
      if ((int *)piVar8[1] == local_28) goto LAB_4a09cee8;
    }
    FUN_4a09d5e4(param_1,piVar2,piVar7);
  } while( true );
}



// Address: 4a09cf5c

void FUN_4a09cf5c(undefined4 param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)PTR_DAT_4a09cf74 = 0xffffffff;
  FUN_4a09d414(param_1,param_2,param_3 << 1);
  return;
}



// Address: 4a09cf78

void FUN_4a09cf78(int *param_1)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint local_2c;
  uint local_28;
  int local_20;
  int *local_1c;
  int *local_18;
  
  local_1c = *(int **)PTR_DAT_4a09d114;
  local_20 = local_1c[4];
  *(undefined1 *)(param_1 + 7) = 0;
  iVar12 = local_1c[10];
  iVar8 = local_1c[0xb];
  local_2c = 0;
  bVar1 = false;
  local_28 = DAT_4a09d118;
  if (*local_1c << 0x1b < 0) {
    uVar3 = FUN_4a145d90(local_20,0x30,&local_20);
    if ((uVar3 & 0xffff) != DAT_4a09d118) {
      bVar1 = true;
      local_2c = (uint)*(byte *)(*(int *)(local_20 + 0x44) + (uVar3 & 0xffff) * 8);
    }
  }
  uVar4 = FUN_4a03bcf0(param_1[2],param_1[3]);
  iVar13 = *param_1;
  for (uVar3 = 0; uVar3 < *(uint *)(iVar13 + 4); uVar3 = uVar3 + 1) {
  }
  local_18 = param_1 + 8;
  *(undefined4 *)(iVar13 + 4) = 0;
  FUN_4a16fc48();
  FUN_4a16e628(iVar13,uVar4);
  FUN_4a16fc5a(local_18,uVar4);
LAB_4a09cffa:
  do {
    do {
      do {
        FUN_4a09d6c8(param_1);
        iVar5 = param_1[1];
        if (iVar5 == -1) {
          return;
        }
      } while (iVar5 == DAT_4a09d11c);
      if (DAT_4a09d11c <= iVar5) goto LAB_4a09d030;
      iVar9 = iVar5 - DAT_4a09d120;
    } while (iVar5 == DAT_4a09d120);
    if (DAT_4a09d120 <= iVar5) goto joined_r0x4a09d03c;
  } while ((iVar5 + DAT_4a09d124 == 0) || (iVar5 + DAT_4a09d124 == 1));
  goto LAB_4a09d042;
LAB_4a09d030:
  if ((iVar5 - DAT_4a09d11c != 1) && (iVar9 = (iVar5 - DAT_4a09d11c) + DAT_4a09d128, iVar9 != 0)) {
joined_r0x4a09d03c:
    if ((iVar9 != 1) && (iVar9 != 2)) {
LAB_4a09d042:
      FUN_4a16fc76(local_18,param_1 + 1);
      uVar2 = FUN_4a145d90(local_20,param_1[1]);
      uVar3 = (uint)uVar2;
      pbVar6 = (byte *)(*(int *)(local_20 + 0x44) + uVar3 * 8);
      if (local_28 != DAT_4a09d118) {
        uVar10 = local_28;
        uVar11 = uVar3;
        if (**(int **)PTR_DAT_4a09d114 << 0x18 < 0) {
          uVar10 = uVar3;
          uVar11 = local_28;
        }
        iVar5 = FUN_4a145e14(local_20,uVar10,uVar11);
        iVar12 = local_1c[0xc] + iVar5 + iVar12;
      }
      FUN_4a16e628(iVar13,*(int *)(iVar13 + 4) + 1);
      *(int *)(iVar13 + 4) = *(int *)(iVar13 + 4) + 1;
      puVar7 = (ushort *)FUN_4a16e61c(iVar13);
      iVar5 = param_1[1];
      if (((iVar5 == 10) || (iVar5 == DAT_4a09d120 + -2)) || (iVar5 == DAT_4a09d120 + -1)) {
        *(undefined1 *)(param_1 + 7) = 1;
        *puVar7 = *(ushort *)(param_1 + 0xc);
      }
      else {
        *puVar7 = uVar2;
      }
      puVar7[2] = (ushort)iVar12;
      puVar7[3] = (ushort)iVar8;
      puVar7[1] = (ushort)*pbVar6;
      local_28 = uVar3;
      if (((bVar1) && (0x30 < param_1[1])) && (param_1[1] < 0x3a)) {
        puVar7[2] = (ushort)iVar12 + (short)((int)(local_2c - *pbVar6) / 2);
        iVar12 = iVar12 + local_2c;
      }
      else {
        iVar12 = (uint)*pbVar6 + iVar12;
      }
    }
  }
  goto LAB_4a09cffa;
}



// Address: 4a09d12c

undefined4 FUN_4a09d12c(ushort *param_1,int *param_2,int *param_3)

{
  if ((*param_2 <= (int)(uint)*param_1) && ((int)(uint)*param_1 < *param_3)) {
    return 1;
  }
  return 0;
}



// Address: 4a09d142

void FUN_4a09d142(int param_1,int param_2,uint *param_3,uint *param_4,undefined2 *param_5)

{
  undefined2 uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x54) == 0) {
    if (param_2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x20) + (param_2 + -1) * 0xc + 8);
    }
    *param_3 = uVar2;
    *param_4 = (uint)*(ushort *)(*(int *)(param_1 + 0x20) + param_2 * 0xc + 8);
    uVar1 = *(undefined2 *)(*(int *)(param_1 + 0x20) + param_2 * 0xc + 10);
  }
  else {
    *param_3 = 0;
    *param_4 = *(uint *)(param_1 + 0x48);
    uVar1 = *(undefined2 *)(*(int *)(param_1 + 0x54) + 0x10);
  }
  *param_5 = uVar1;
  return;
}



// Address: 4a09d18c

void FUN_4a09d18c(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  short sVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  
  piVar10 = (int *)*param_1;
  if (param_6 == 3) {
    param_6 = ((**(uint **)PTR_DAT_4a09d2d8 & 0xff) >> 7) << 1;
  }
  if (param_6 != 0) {
    for (uVar11 = 0; uVar4 = FUN_4a1364c6(*param_1), uVar11 < uVar4; uVar11 = uVar11 + 1) {
      iVar5 = FUN_4a1364d6(*param_1,uVar11);
      iVar6 = FUN_4a1364ac(*param_1,uVar11);
      if (iVar5 <= iVar6) {
        iVar9 = param_2;
        if (uVar11 != 0) {
          iVar9 = (int)*(short *)(*piVar10 + iVar5 * 8 + 4);
        }
        iVar7 = *piVar10 + iVar6 * 8;
        iVar9 = param_4 - (((int)*(short *)(iVar7 + 4) + (int)*(short *)(iVar7 + 2)) - iVar9);
        if (param_6 == 1) {
          iVar9 = iVar9 / 2;
        }
        if (0 < iVar9) {
          for (; iVar5 <= iVar6; iVar5 = iVar5 + 1) {
            psVar8 = (short *)(*piVar10 + iVar5 * 8 + 4);
            *psVar8 = *psVar8 + (short)iVar9;
          }
        }
      }
    }
  }
  if (**(int **)PTR_DAT_4a09d2d8 << 0x18 < 0) {
    for (uVar11 = 0; uVar4 = FUN_4a1364c6(*param_1), uVar11 < uVar4; uVar11 = uVar11 + 1) {
      iVar5 = FUN_4a1364d6(*param_1,uVar11);
      iVar6 = FUN_4a1364ac(*param_1,uVar11);
      iVar9 = *piVar10 + iVar6 * 8;
      sVar1 = *(short *)(iVar9 + 4);
      sVar2 = *(short *)(iVar9 + 2);
      sVar3 = *(short *)(*piVar10 + iVar5 * 8 + 4);
      for (; iVar5 <= iVar6; iVar5 = iVar5 + 1) {
        iVar9 = *piVar10 + iVar5 * 8;
        *(short *)(iVar9 + 4) =
             ((short)(((int)sVar1 + (int)sVar2 + (int)sVar3) / 2) * 2 - *(short *)(iVar9 + 4)) -
             *(short *)(iVar9 + 2);
      }
    }
  }
  if (param_7 != 0) {
    param_5 = param_5 - (*(int *)(*param_1 + 0x24) - param_3);
    if (param_7 == 1) {
      param_5 = param_5 / 2;
    }
    for (uVar11 = 0; uVar11 < (uint)piVar10[1]; uVar11 = uVar11 + 1) {
      psVar8 = (short *)(*piVar10 + uVar11 * 8 + 6);
      *psVar8 = *psVar8 + (short)param_5;
    }
  }
  return;
}



// Address: 4a09d2dc

undefined4 FUN_4a09d2dc(undefined4 param_1,int param_2,int *param_3,int *param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = *param_4;
  iVar1 = *param_3;
  if (param_5 << 0x1e < 0) {
    *param_4 = iVar1 + 1;
    for (piVar2 = (int *)((iVar1 + 1) * 4 + param_2); *piVar2 != 10; piVar2 = piVar2 + 1) {
      if (*piVar2 == 0) {
        return 1;
      }
      *param_4 = *param_4 + 1;
    }
    iVar1 = *param_4;
  }
  else {
    if (-1 < param_5 << 0x1d) {
      puVar3 = (undefined4 *)(iVar1 * 4 + param_2);
      iVar1 = iVar1 - iVar4;
      while (((*param_4 = iVar1, -1 < iVar1 && (iVar1 = FUN_4a03d39c(*puVar3,puVar3[1]), iVar1 == 0)
              ) && ((*param_4 == *param_3 - iVar4 ||
                    ((iVar1 = FUN_4a0456d4(*puVar3), iVar1 == 0 &&
                     (iVar1 = FUN_4a00db34(*puVar3,puVar3[1]), iVar1 == 0))))))) {
        puVar3 = puVar3 + -1;
        iVar1 = *param_4 + -1;
      }
      if (*param_4 == -1) {
        if (-1 < param_5 << 0x17) {
          return 0;
        }
        iVar1 = *param_3;
        *param_3 = iVar1 + 1;
        for (piVar2 = (int *)((iVar1 + 1) * 4 + param_2); *piVar2 != 0; piVar2 = piVar2 + 1) {
          iVar1 = FUN_4a03d39c(*piVar2,piVar2[1]);
          if (((iVar1 != 0) || (iVar1 = FUN_4a0456d4(*piVar2), iVar1 != 0)) ||
             (iVar1 = FUN_4a00db34(*piVar2,piVar2[1]), iVar1 != 0)) {
            if (*piVar2 != 0) {
              iVar1 = *param_3;
              while( true ) {
                *param_4 = iVar1 + 1;
                iVar1 = piVar2[1];
                if (iVar1 == 0) {
                  return 1;
                }
                iVar1 = FUN_4a041114(iVar1,piVar2[2]);
                if (iVar1 == 0) break;
                iVar1 = *param_4;
                piVar2 = piVar2 + 1;
              }
              return 1;
            }
            break;
          }
          *param_3 = *param_3 + 1;
        }
        iVar1 = *param_3;
      }
      else {
        *param_3 = *param_4;
        *param_4 = *param_4 + 1;
        iVar1 = *param_3;
        while ((-1 < iVar1 && (iVar1 = FUN_4a041114(*puVar3,puVar3[1]), iVar1 != 0))) {
          puVar3 = puVar3 + -1;
          iVar1 = *param_3 + -1;
          *param_3 = iVar1;
        }
        *param_3 = *param_3 + iVar4;
        iVar1 = *param_4 + iVar4;
      }
      goto LAB_4a09d40c;
    }
    iVar1 = iVar1 + -1;
    *param_3 = iVar1;
  }
  iVar1 = iVar1 + 1;
LAB_4a09d40c:
  *param_4 = iVar1;
  return 1;
}



// Address: 4a09d414

void FUN_4a09d414(int *param_1,int param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint local_40;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int *piStack_20;
  int local_1c;
  uint uStack_18;
  
  puVar6 = *(uint **)PTR_DAT_4a09d594;
  local_24 = puVar6[4];
  local_28 = *puVar6;
  local_2c = (int)*(short *)((int)puVar6 + 0x1a);
  iVar7 = (int)(short)puVar6[6];
  local_30 = puVar6[2];
  local_34 = puVar6[3];
  param_1[0xe] = puVar6[0xe];
  param_1[0xd] = 0;
  local_40 = param_3;
  local_3c = param_2;
  piStack_20 = param_1;
  local_1c = param_2;
  uStack_18 = param_3;
  iVar2 = FUN_4a04c918(&local_3c,&local_40);
  if (((iVar2 == DAT_4a09d598) || (iVar2 == DAT_4a09d598 + 3)) || (iVar2 == DAT_4a09d598 + -0x1c)) {
    *puVar6 = *puVar6 | 0x80;
  }
  param_1[3] = param_3;
  param_1[2] = local_1c;
  iVar3 = FUN_4a1652c8(*(int **)(local_24 + 0x40),10,
                       *(undefined4 *)(**(int **)(local_24 + 0x40) + 0x10));
  iVar2 = DAT_4a09d59c;
  *(short *)(param_1 + 0xc) = (short)iVar3;
  if (iVar3 == iVar2) {
    *(undefined2 *)(param_1 + 0xc) = 0xfffe;
  }
  FUN_4a16fc48(*param_1 + 0x10);
  *(uint *)(*param_1 + 0x28) = local_24;
  *(undefined4 *)(*param_1 + 0x24) = 0;
  *(undefined4 *)(*param_1 + 0x20) = 0;
  iVar2 = *param_1;
  piVar4 = (int *)(iVar2 + 0x2c);
  *(short *)piVar4 = (short)puVar6[10];
  *(short *)(iVar2 + 0x2e) = (short)puVar6[0xb];
  local_3c = *piVar4;
  FUN_4a09cf78(param_1);
  local_38 = *param_1;
  if (*(int *)(local_38 + 4) != 0) {
    local_3c = 0;
    FUN_4a16fc76(param_1 + 8,&local_3c);
    iVar2 = FUN_4a16e61c(local_38);
    sVar1 = *(short *)(iVar2 + 4);
    iVar2 = FUN_4a16e61c(local_38);
    iVar2 = (int)sVar1 + (int)*(short *)(iVar2 + 2);
    if ((iVar7 < (int)(iVar2 * puVar6[8]) >> 0xc) || ((char)param_1[7] != '\0')) {
      FUN_4a09cd68(param_1);
    }
    else {
      *(int *)(*param_1 + 0x20) = iVar2;
      iVar3 = FUN_4a16e61c(local_38);
      *(uint *)(*param_1 + 0x24) = (int)*(short *)(iVar3 + 6) + (uint)*(ushort *)(local_24 + 0x12);
      *(short *)(*param_1 + 0x2c) = (short)iVar2;
      iVar2 = FUN_4a16e61c(local_38);
      *(undefined2 *)(*param_1 + 0x2e) = *(undefined2 *)(iVar2 + 6);
    }
    FUN_4a09d5a0(param_1);
    uVar5 = puVar6[8];
    if ((uVar5 != 0x1000) || (puVar6[9] != 0x1000)) {
      if ((uVar5 & 0xfff) == 0) {
        uVar5 = (int)uVar5 >> 0xc;
      }
      else {
        iVar7 = iVar7 << 0xc;
      }
      iVar7 = thunk_FUN_4a0015f0(iVar7,uVar5);
      uVar5 = puVar6[9];
      if ((uVar5 & 0xfff) == 0) {
        uVar5 = (int)uVar5 >> 0xc;
        iVar2 = local_2c;
      }
      else {
        iVar2 = local_2c << 0xc;
      }
      thunk_FUN_4a0015f0(iVar2,uVar5);
    }
    local_40 = local_34;
    FUN_4a09d18c(param_1,puVar6[10],puVar6[0xb],iVar7);
  }
  *puVar6 = local_28;
  return;
}



// Address: 4a09d5a0

void FUN_4a09d5a0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)*param_1;
  iVar4 = *(int *)(*(int *)PTR_DAT_4a09d5e0 + 0x10);
  for (uVar2 = 0; uVar2 < (uint)piVar3[1]; uVar2 = uVar2 + 1) {
    iVar1 = FUN_4a05a600(*(undefined4 *)(param_1[8] + uVar2 * 4));
    if (iVar1 == 0) {
      *(undefined2 *)(*piVar3 + uVar2 * 8 + 2) = 0;
      *(undefined2 *)(*piVar3 + uVar2 * 8) = *(undefined2 *)(iVar4 + 0x1e);
    }
  }
  return;
}



// Address: 4a09d5e4

void FUN_4a09d5e4(int *param_1,int param_2,uint param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined *puVar4;
  int iVar5;
  short *psVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  uint local_18;
  
  puVar4 = PTR_DAT_4a09d69c;
  iVar12 = *(int *)(*(int *)PTR_DAT_4a09d69c + 0x10);
  piVar11 = (int *)*param_1;
  local_18 = *(int *)(*param_1 + 4) - 1;
  if ((param_3 != 0xffffffff) && ((int)param_3 <= (int)local_18)) {
    local_18 = param_3;
  }
  iVar5 = param_2;
  if (local_18 - param_2 != 1) {
    while (iVar5 = iVar5 + 1, iVar5 < (int)local_18) {
      *(undefined2 *)(*(int *)*param_1 + iVar5 * 8) = *(undefined2 *)(iVar12 + 0x1e);
      *(undefined2 *)(*(int *)*param_1 + iVar5 * 8 + 2) = 0;
    }
  }
  sVar2 = *(short *)(*piVar11 + local_18 * 8 + 4);
  uVar9 = (uint)sVar2;
  sVar1 = *(short *)(iVar12 + 0x12);
  puVar7 = *(ushort **)(*(int *)puVar4 + 0x34);
  sVar3 = (short)puVar7;
  uVar10 = uVar9;
  for (uVar8 = local_18; uVar8 < (uint)piVar11[1]; uVar8 = uVar8 + 1) {
    psVar6 = (short *)(*piVar11 + uVar8 * 8 + 4);
    *psVar6 = *psVar6 - sVar2;
    puVar7 = (ushort *)(*piVar11 + uVar8 * 8 + 6);
    uVar10 = (uint)*puVar7;
    *puVar7 = *puVar7 + sVar1 + sVar3;
  }
  FUN_4a16fc76(*param_1 + 0x10,&local_18,puVar7,uVar10,param_1,param_2);
  iVar5 = FUN_4a16e61c(piVar11);
  *(uint *)(*param_1 + 0x24) = (int)*(short *)(iVar5 + 6) + (uint)*(ushort *)(iVar12 + 0x12);
  uVar8 = *(uint *)(*param_1 + 0x20);
  if ((int)uVar9 < (int)uVar8) {
    uVar9 = uVar8;
  }
  *(uint *)(*param_1 + 0x20) = uVar9;
  return;
}



// Address: 4a09d6a0

void FUN_4a09d6a0(int param_1,undefined4 param_2,byte param_3)

{
  FUN_4a16fc5a();
  *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) & 0xfd | (param_3 ^ 1) << 1;
  return;
}



// Address: 4a09d6c2

void FUN_4a09d6c2(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}



// Address: 4a09d6c8

void FUN_4a09d6c8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  byte *pbVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 local_10;
  
  local_10 = param_4;
  while( true ) {
    if (*(char **)(param_1 + 0x34) != (char *)0x0) {
      if (**(char **)(param_1 + 0x34) != '\0') {
        local_10 = 4;
        uVar1 = FUN_4a04c918(param_1 + 0x34,&local_10);
        goto LAB_4a09d70c;
      }
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    if (*(int *)(param_1 + 0xc) < 1) {
      uVar1 = 0xffffffff;
      goto LAB_4a09d70c;
    }
    uVar1 = FUN_4a04c918(param_1 + 8);
    if ((uVar1 != 0x7b) || (*(int *)(param_1 + 0x38) == 0)) goto LAB_4a09d70c;
    pcVar4 = *(char **)(param_1 + 8);
    if (*pcVar4 == '{') break;
    while ((0 < *(int *)(param_1 + 0xc) && (**(char **)(param_1 + 8) != '}'))) {
      *(char **)(param_1 + 8) = *(char **)(param_1 + 8) + 1;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    }
    uVar3 = FUN_4a1652ce(pcVar4,*(int *)(param_1 + 8) - (int)pcVar4,PTR_DAT_4a09d760);
    *(undefined4 *)(param_1 + 0x34) = uVar3;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  pbVar2 = *(byte **)(param_1 + 8);
  *(byte **)(param_1 + 8) = pbVar2 + 1;
  uVar1 = (uint)*pbVar2;
LAB_4a09d70c:
  *(uint *)(param_1 + 4) = uVar1;
  return;
}



// Address: 4a09d764

uint FUN_4a09d764(int *param_1,int param_2,int param_3,undefined4 param_4,int *param_5)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  undefined2 *puVar11;
  int iVar12;
  ushort local_48;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined4 local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int *local_24;
  int iStack_20;
  int local_1c;
  undefined4 uStack_18;
  
  local_30 = param_3 - param_2;
  iVar10 = *(int *)PTR_DAT_4a09d878;
  local_38 = *(int *)(iVar10 + 0x38c);
  piVar9 = (int *)(local_38 + local_30 * 0x10);
  *(int **)(iVar10 + 0x388) = piVar9;
  *(int **)(iVar10 + 0x38c) = piVar9 + local_30;
  *param_5 = (int)piVar9;
  local_3c = *(undefined4 *)(*param_1 + 0x28);
  local_34 = local_38;
  local_24 = param_1;
  iStack_20 = param_2;
  local_1c = param_3;
  uStack_18 = param_4;
  FUN_4a09d142(local_3c,param_4,auStack_40,auStack_44);
  uVar8 = 0;
  for (; param_2 < local_1c; param_2 = param_2 + 1) {
    puVar11 = (undefined2 *)(*(int *)*local_24 + param_2 * 8);
    iVar10 = FUN_4a09d12c(puVar11,auStack_40,auStack_44);
    if (iVar10 != 0) {
      iVar10 = FUN_4a145df8(local_3c,*puVar11);
      *piVar9 = param_2;
      piVar9 = piVar9 + 1;
      iVar3 = (int)*(short *)(iVar10 + 4);
      iVar12 = (int)*(short *)(iVar10 + 6);
      uVar1 = *(ushort *)(iVar10 + 2);
      uVar8 = uVar8 + 1;
      FUN_4a037764(&local_38,iVar3,iVar12);
      local_28 = (int)((iVar12 + (uint)local_48) * 0x10000) >> 0x10;
      FUN_4a037764(&local_38,iVar3);
      local_2c = (int)((iVar3 + (uint)uVar1) * 0x10000) >> 0x10;
      FUN_4a037764(&local_38,local_2c,local_28);
      FUN_4a037764(&local_38,local_2c,iVar12);
    }
  }
  if (uVar8 != local_30) {
    puVar6 = (undefined4 *)(uVar8 * 0x10 + local_34);
    puVar4 = (undefined4 *)*param_5;
    puVar2 = puVar6;
    for (uVar5 = 0; uVar5 < uVar8; uVar5 = uVar5 + 1) {
      uVar7 = *puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = uVar7;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 **)(*(int *)PTR_DAT_4a09d878 + 0x38c) = puVar2;
    *param_5 = (int)puVar6;
  }
  thunk_FUN_4a0363b8(local_34,0);
  return uVar8;
}



// Address: 4a09d87c

void FUN_4a09d87c(undefined4 *param_1)

{
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(byte *)(param_1 + 0xb) = (*(byte *)(param_1 + 0xb) >> 1 & 0x7e) << 1;
  param_1[9] = 0;
  FUN_4a16fc48(param_1 + 8);
  *param_1 = 0;
  return;
}



// Address: 4a09d8aa

int FUN_4a09d8aa(int param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 0x24); uVar1 = uVar1 + 1) {
  }
  if ((*(byte *)(param_1 + 0x2c) & 1) == 0) {
    FUN_4a0a6f48(*(undefined4 *)(param_1 + 0x20),4);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return param_1;
}



// Address: 4a09d8d8

int FUN_4a09d8d8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_4a0a3918();
  FUN_4a0a7134(iVar1 * 0x178 + param_1 + DAT_4a09d904,param_2,param_3,0x178,param_4);
  return iVar1;
}



// Address: 4a09d908

void FUN_4a09d908(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  uint uVar1;
  
  uVar1 = 0;
  while( true ) {
    if (*(uint *)(param_1 + 4) <= uVar1) {
      *param_3 = 0;
      return;
    }
    if (*(int *)(uVar1 * 0xc + param_1 + 8) == param_2) break;
    uVar1 = uVar1 + 1;
  }
  *param_3 = *(undefined4 *)(uVar1 * 0xc + param_1 + 0xc);
  *param_4 = uVar1 * 0x178 + param_1 + DAT_4a09d948;
  return;
}



// Address: 4a09d94c

void FUN_4a09d94c(int param_1)

{
  uint uVar1;
  int iVar2;
  
  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 4); uVar1 = uVar1 + 1) {
    iVar2 = uVar1 * 0xc + param_1;
    if (*(int *)(iVar2 + 0xc) != 0) {
      FUN_4a15002c();
      *(undefined4 *)(iVar2 + 0xc) = 0;
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// Address: 4a09d978

void FUN_4a09d978(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_4a161530();
  }
  return;
}



// Address: 4a09d98c

undefined4 FUN_4a09d98c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint local_e4;
  undefined1 auStack_e0 [204];
  
  thunk_FUN_4a001134(auStack_e0,PTR_DAT_4a09da3c,0xcc);
  uVar4 = 0;
  *(undefined4 *)(PTR_DAT_4a09da3c + 200) = 0;
  FUN_4a0366f8(param_2,param_3,0);
  puVar1 = PTR_DAT_4a09da3c;
  if ((*(int *)(PTR_DAT_4a09da3c + 8) != 0) && (iVar3 = FUN_4a04e90c(), iVar3 != 0)) {
    FUN_4a03c12c(param_1,1,0x20,4);
    iVar3 = param_1 + 4;
    if (*puVar1 == '\0') {
      local_e4 = *(uint *)(param_1 + 8);
      FUN_4a03c12c(&local_e4,1,0x20,4);
    }
    else {
      FUN_4a03c12c(&local_e4,1,0x20,4);
      uVar2 = local_e4;
      if (*(uint *)(param_1 + 8) < local_e4) {
        FUN_4a16fbaa(iVar3,local_e4);
      }
      FUN_4a16fbd4(iVar3,uVar2);
      FUN_4a16fbaa(iVar3,*(undefined4 *)(param_1 + 8));
    }
    FUN_4a039b90(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),8,1);
    FUN_4a03989e();
    uVar4 = 1;
  }
  thunk_FUN_4a001134(PTR_DAT_4a09da3c,auStack_e0,0xcc);
  return uVar4;
}



// Address: 4a09da40

void FUN_4a09da40(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_4a069f1c();
  FUN_4a040850(param_2,param_3,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x44),
               *(undefined4 *)(param_1 + 8));
  return;
}



// Address: 4a09da62

void FUN_4a09da62(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_4a161530();
  }
  return;
}



// Address: 4a09da74

int FUN_4a09da74(int param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  
  puVar2 = PTR_LAB_4a09dd28;
  iVar7 = param_2[1];
  uVar10 = *param_2;
  iVar3 = (int)((ulonglong)
                ((longlong)DAT_4a09dd2c * (longlong)(iVar7 - *(int *)(PTR_LAB_4a09dd28 + 4))) >>
               0x20);
  puVar5 = (ushort *)(*(int *)(PTR_LAB_4a09dd28 + 0x2c) + ((iVar3 >> 0xc) - (iVar3 >> 0x1f)) * 2);
  uVar1 = *puVar5;
  uVar8 = (uint)uVar1;
  uVar4 = 0;
  iVar3 = 1 - uVar8;
  if (1 < uVar8) {
    iVar3 = 0;
  }
  uVar8 = ~uVar8 & 0xffff;
  do {
    if ((uVar8 & 1) != 0) break;
    uVar4 = uVar4 + 1;
    uVar8 = uVar8 >> 1;
  } while ((int)uVar4 < 0x10);
  if (uVar4 == 0x10) {
    return 0;
  }
  switch(uVar10) {
  case 0:
    *puVar5 = uVar1 | (ushort)(1 << (uVar4 & 0xff));
    break;
  case 1:
    *puVar5 = uVar1 | (ushort)(3 << (uVar4 & 0xff));
    break;
  case 2:
    *puVar5 = uVar1 | (ushort)(0xf << (uVar4 & 0xff));
    break;
  case 3:
    *puVar5 = uVar1 | (ushort)(0xff << (uVar4 & 0xff));
    break;
  case 4:
    *puVar5 = uVar1 | (ushort)(-1 << (uVar4 & 0xff));
  }
  uVar1 = *puVar5;
  if (iVar3 == 0) {
    if (uVar1 == 0xffff) {
      iVar3 = *(int *)(param_1 + 0x18) + -1;
      if (-1 < iVar3) {
        iVar9 = *(int *)(puVar2 + 0x30);
        do {
          if (*(int *)(iVar9 + iVar3 * 8 + 4) == iVar7) {
            iVar6 = *(int *)(param_1 + 0x18) + -1;
            *(int *)(param_1 + 0x18) = iVar6;
            if (iVar3 < iVar6) {
              uVar8 = iVar6 - iVar3 & 1;
            }
            else {
              uVar8 = 0;
            }
            if (uVar8 == 1) {
              *(undefined4 *)(iVar9 + iVar3 * 8) = *(undefined4 *)(iVar9 + iVar3 * 8 + 8);
              iVar9 = *(int *)(puVar2 + 0x30) + iVar3 * 8;
              *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(iVar9 + 0xc);
            }
            iVar3 = iVar3 + uVar8;
            if (iVar3 < *(int *)(param_1 + 0x18)) {
              do {
                *(undefined4 *)(*(int *)(puVar2 + 0x30) + iVar3 * 8) =
                     *(undefined4 *)(*(int *)(puVar2 + 0x30) + iVar3 * 8 + 8);
                iVar9 = *(int *)(puVar2 + 0x30) + iVar3 * 8;
                iVar3 = iVar3 + 2;
                *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(iVar9 + 0xc);
                *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(iVar9 + 0x10);
                *(undefined4 *)(iVar9 + 0xc) = *(undefined4 *)(iVar9 + 0x14);
              } while (iVar3 < *(int *)(param_1 + 0x18));
            }
            break;
          }
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
      }
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x10) + -1;
    if (-1 < iVar3) {
      iVar9 = *(int *)(puVar2 + 0x20);
      do {
        if (*(int *)(iVar9 + iVar3 * 4) == iVar7) {
          iVar6 = *(int *)(param_1 + 0x10) + -1;
          *(int *)(param_1 + 0x10) = iVar6;
          if (0 < iVar6 - iVar3) {
            if (iVar3 < iVar6) {
              uVar8 = iVar6 - iVar3 & 1;
            }
            else {
              uVar8 = 0;
            }
            if (uVar8 == 1) {
              *(undefined4 *)(iVar9 + iVar3 * 4) = *(undefined4 *)(iVar9 + iVar3 * 4 + 4);
            }
            uVar11 = (uint)(uVar8 == 1);
            if ((int)uVar8 < *(int *)(param_1 + 0x10) - iVar3) {
              do {
                *(undefined4 *)(*(int *)(puVar2 + 0x20) + (iVar3 + uVar11) * 4) =
                     *(undefined4 *)(*(int *)(puVar2 + 0x20) + (iVar3 + uVar11) * 4 + 4);
                iVar9 = iVar3 + uVar11 + 1;
                uVar8 = uVar8 + 2;
                *(undefined4 *)(*(int *)(puVar2 + 0x20) + iVar9 * 4) =
                     *(undefined4 *)(*(int *)(puVar2 + 0x20) + iVar9 * 4 + 4);
                uVar11 = uVar11 + 2;
              } while ((int)uVar8 < *(int *)(param_1 + 0x10) - iVar3);
            }
          }
          if (uVar1 != 0xffff) {
            iVar3 = *(int *)(puVar2 + 0x30);
            *(int *)(iVar3 + *(int *)(param_1 + 0x18) * 8 + 4) = iVar7;
            *(undefined4 *)(iVar3 + *(int *)(param_1 + 0x18) * 8) = uVar10;
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
          }
          break;
        }
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
    }
  }
  return iVar7 + uVar4 * 0x420;
}



// Address: 4a09dd34

void FUN_4a09dd34(int param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  
  puVar3 = PTR_LAB_4a09f18c;
  iVar6 = *(int *)(param_2 + 4);
  if (iVar6 == 0) {
    return;
  }
  iVar4 = *(int *)(param_2 + 0x18);
  if (iVar4 == 5 || iVar4 == 7) {
    iVar4 = *(int *)(param_1 + 0x20);
    iVar10 = *(int *)(PTR_LAB_4a09dda8 + 0x28);
    *(int *)(param_1 + 0x20) = iVar4 + 1;
    *(int *)(iVar10 + iVar4 * 4) = iVar6;
    *(undefined4 *)(param_2 + 4) = 0;
    return;
  }
  if (iVar4 == 6) {
    iVar4 = *(int *)(param_1 + 0x24);
    iVar10 = *(int *)(PTR_LAB_4a09dda8 + 0x24);
    *(int *)(param_1 + 0x24) = iVar4 + 1;
    *(int *)(iVar10 + iVar4 * 4) = iVar6;
    *(undefined4 *)(param_2 + 4) = 0;
    return;
  }
  uVar8 = (uint)((ulonglong)(uint)(*(int *)(param_2 + 4) - *(int *)(PTR_LAB_4a09f18c + 4)) *
                 (ulonglong)DAT_4a09f190 >> 0x2c);
  uVar1 = (uint)((ulonglong)
                 (*(int *)(param_2 + 4) - (*(int *)(PTR_LAB_4a09f18c + 4) + uVar8 * 0x4200)) *
                 (ulonglong)DAT_4a09f190 >> 0x28);
  uVar9 = *(undefined4 *)(param_2 + 0x18);
  puVar5 = (ushort *)(*(int *)(PTR_LAB_4a09f18c + 0x2c) + uVar8 * 2);
  uVar2 = *puVar5;
  switch(uVar9) {
  case 0:
    *puVar5 = uVar2 & ~(ushort)(1 << (uVar1 & 0xff));
    break;
  case 1:
    *puVar5 = uVar2 & ~(ushort)(3 << (uVar1 & 0xff));
    break;
  case 2:
    *puVar5 = uVar2 & ~(ushort)(0xf << (uVar1 & 0xff));
    break;
  case 3:
    *puVar5 = uVar2 & ~(ushort)(0xff << (uVar1 & 0xff));
    break;
  case 4:
    *puVar5 = uVar2 & ~(ushort)(-1 << (uVar1 & 0xff));
  }
  iVar6 = 1 - (uint)*puVar5;
  if (1 < *puVar5) {
    iVar6 = 0;
  }
  if (iVar6 == 0) {
    if (uVar2 == 0xffff) {
      iVar6 = *(int *)(puVar3 + 0x30);
      *(uint *)(iVar6 + *(int *)(param_1 + 0x18) * 8 + 4) = *(int *)(puVar3 + 4) + uVar8 * 0x4200;
      *(undefined4 *)(iVar6 + *(int *)(param_1 + 0x18) * 8) = uVar9;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    }
  }
  else {
    iVar6 = *(int *)(puVar3 + 4) + uVar8 * 0x4200;
    if (uVar2 != 0xffff) {
      iVar4 = *(int *)(param_1 + 0x18) + -1;
      if (-1 < iVar4) {
        iVar10 = *(int *)(puVar3 + 0x30);
        do {
          if (*(int *)(iVar10 + iVar4 * 8 + 4) == iVar6) {
            iVar7 = *(int *)(param_1 + 0x18) + -1;
            *(int *)(param_1 + 0x18) = iVar7;
            if (iVar4 < iVar7) {
              uVar8 = iVar7 - iVar4 & 1;
            }
            else {
              uVar8 = 0;
            }
            if (uVar8 == 1) {
              *(undefined4 *)(iVar10 + iVar4 * 8) = *(undefined4 *)(iVar10 + iVar4 * 8 + 8);
              iVar10 = *(int *)(puVar3 + 0x30) + iVar4 * 8;
              *(undefined4 *)(iVar10 + 4) = *(undefined4 *)(iVar10 + 0xc);
            }
            iVar4 = iVar4 + uVar8;
            if (iVar4 < *(int *)(param_1 + 0x18)) {
              do {
                *(undefined4 *)(*(int *)(puVar3 + 0x30) + iVar4 * 8) =
                     *(undefined4 *)(*(int *)(puVar3 + 0x30) + iVar4 * 8 + 8);
                iVar10 = *(int *)(puVar3 + 0x30) + iVar4 * 8;
                iVar4 = iVar4 + 2;
                *(undefined4 *)(iVar10 + 4) = *(undefined4 *)(iVar10 + 0xc);
                *(undefined4 *)(iVar10 + 8) = *(undefined4 *)(iVar10 + 0x10);
                *(undefined4 *)(iVar10 + 0xc) = *(undefined4 *)(iVar10 + 0x14);
              } while (iVar4 < *(int *)(param_1 + 0x18));
            }
            break;
          }
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
      }
    }
    iVar4 = *(int *)(param_1 + 0x10);
    iVar10 = *(int *)(puVar3 + 0x20);
    *(int *)(param_1 + 0x10) = iVar4 + 1;
    *(int *)(iVar10 + iVar4 * 4) = iVar6;
  }
  *(undefined4 *)(param_2 + 4) = 0;
  return;
}



// Address: 4a09ddac

void FUN_4a09ddac(int *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  puVar1 = PTR_LAB_4a09de5c;
  uVar6 = param_1[2] - 1;
  if (uVar6 < 0x80000000) {
    do {
      iVar3 = *(int *)(*param_1 + uVar6 * 4);
      iVar2 = *(int *)(iVar3 + 0x18);
      if ((iVar2 == param_2) && (iVar4 = *(int *)(iVar3 + 4), iVar4 != 0)) {
        if (iVar2 == 5 || iVar2 == 7) {
          iVar2 = param_1[8];
          iVar5 = *(int *)(puVar1 + 0x28);
          param_1[8] = iVar2 + 1;
          *(int *)(iVar5 + iVar2 * 4) = iVar4;
          *(undefined4 *)(iVar3 + 4) = 0;
        }
        else if (iVar2 == 6) {
          iVar2 = param_1[9];
          iVar5 = *(int *)(puVar1 + 0x24);
          param_1[9] = iVar2 + 1;
          *(int *)(iVar5 + iVar2 * 4) = iVar4;
          *(undefined4 *)(iVar3 + 4) = 0;
        }
        else {
          FUN_4a09ef94(param_1);
        }
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 < 0x80000000);
    return;
  }
  return;
}



// Address: 4a09de60

void FUN_4a09de60(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  puVar1 = PTR_LAB_4a09df04;
  uVar6 = param_1[2] - 1;
  if (uVar6 < 0x80000000) {
    do {
      iVar3 = *(int *)(*param_1 + uVar6 * 4);
      iVar4 = *(int *)(iVar3 + 4);
      if (iVar4 != 0) {
        iVar2 = *(int *)(iVar3 + 0x18);
        if (iVar2 == 5 || iVar2 == 7) {
          iVar2 = param_1[8];
          iVar5 = *(int *)(puVar1 + 0x28);
          param_1[8] = iVar2 + 1;
          *(int *)(iVar5 + iVar2 * 4) = iVar4;
          *(undefined4 *)(iVar3 + 4) = 0;
        }
        else if (iVar2 == 6) {
          iVar2 = param_1[9];
          iVar5 = *(int *)(puVar1 + 0x24);
          param_1[9] = iVar2 + 1;
          *(int *)(iVar5 + iVar2 * 4) = iVar4;
          *(undefined4 *)(iVar3 + 4) = 0;
        }
        else {
          FUN_4a09ef94(param_1);
        }
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 < 0x80000000);
    return;
  }
  return;
}



// Address: 4a09df0c

int * FUN_4a09df0c(int *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [28];
  
  iVar9 = *(int *)(param_2 + 0x4c);
  piVar8 = (int *)0x0;
  iVar3 = 0;
  if (0 < param_1[2]) {
    do {
      if (**(int **)(*param_1 + iVar3 * 4) == iVar9) {
        piVar8 = *(int **)(*param_1 + iVar3 * 4);
        *(short *)(piVar8 + 4) = (short)piVar8[4] + 1;
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[2]);
    if (piVar8 != (int *)0x0) {
      return piVar8;
    }
  }
  puVar2 = PTR_LAB_4a09e0ec;
  if (param_1[1] == 0) {
    iVar3 = thunk_FUN_4a161570(0xaf0);
    iVar6 = 0;
    iVar5 = 0;
    do {
      *(int *)(*(int *)(puVar2 + 0x40) + iVar6 * 4) = iVar3 + iVar6 * 0x1c;
      iVar7 = iVar6 + 1;
      iVar5 = iVar5 + 2;
      iVar6 = iVar6 + 2;
      *(int *)(*(int *)(puVar2 + 0x40) + iVar7 * 4) = iVar3 + iVar7 * 0x1c;
    } while (iVar5 < 100);
    param_1[1] = param_1[1] + 100;
  }
  FUN_4a0ecbc4(auStack_40);
  FUN_4a0ecab0(auStack_40,*(undefined1 *)(param_2 + 0x40));
  uVar4 = FUN_4a0e6b6c(auStack_38);
  iVar3 = param_1[1];
  param_1[1] = iVar3 + -1;
  piVar8 = *(int **)(*(int *)(puVar2 + 0x40) + (iVar3 + -1) * 4);
  iVar3 = param_1[2];
  param_1[2] = iVar3 + 1;
  *(int **)(*param_1 + iVar3 * 4) = piVar8;
  *piVar8 = iVar9;
  cVar1 = *(char *)(param_2 + 0x40);
  if (cVar1 == '\x1d') {
    piVar8[6] = 3;
    *(undefined1 *)((int)piVar8 + 0x12) = 1;
  }
  else if (cVar1 == '\x1e') {
    piVar8[6] = 2;
    *(undefined1 *)((int)piVar8 + 0x12) = 2;
  }
  else if (cVar1 == '\x1f') {
    piVar8[6] = 1;
    *(undefined1 *)((int)piVar8 + 0x12) = 3;
  }
  else if (cVar1 == '$') {
    piVar8[6] = 7;
    *(undefined1 *)((int)piVar8 + 0x12) = 0;
  }
  else {
    if (param_3 != 0) {
      uVar4 = uVar4 | 0x100;
    }
    *(undefined1 *)((int)piVar8 + 0x12) = 0;
    if (uVar4 == 4) {
      piVar8[6] = 0;
    }
    else if (uVar4 == 8) {
      piVar8[6] = 4;
    }
    else {
      if (uVar4 == 0x104) {
        iVar3 = 5;
      }
      else {
        if (uVar4 != 0x108) {
          piVar8[6] = -1;
          goto LAB_4a09e0c4;
        }
        iVar3 = 6;
      }
      piVar8[6] = iVar3;
    }
  }
LAB_4a09e0c4:
  *(undefined2 *)(piVar8 + 4) = 1;
  piVar8[1] = 0;
  *(undefined2 *)((int)piVar8 + 10) = 0xffff;
  *(undefined1 *)((int)piVar8 + 0x13) = 0;
  FUN_4a0ecbf0(auStack_40);
  return piVar8;
}



// Address: 4a09e0f0

void FUN_4a09e0f0(undefined4 param_1,int *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined2 uVar10;
  short sVar11;
  int iVar12;
  byte *pbVar13;
  ushort *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  ushort *puVar20;
  ushort *puVar21;
  ushort *puVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  int local_50;
  uint local_4c [7];
  ushort *local_30;
  int *local_2c;
  byte *local_28;
  
  *(char *)((int)param_2 + 0x13) = *(char *)((int)param_2 + 0x13) + '\x01';
  *(undefined2 *)((int)param_2 + 10) = 0;
  iVar18 = param_2[6];
  bVar25 = param_2[5] != 0;
  pbVar13 = (byte *)0x0;
  if (bVar25) {
    pbVar13 = *(byte **)(param_2[5] + 0xa8);
  }
  pbVar1 = pbVar13;
  if (bVar25 && pbVar13 != (byte *)0x0) {
    pbVar1 = (byte *)(iVar18 + -5);
  }
  if ((int)pbVar1 < 0 == ((bVar25 && pbVar13 != (byte *)0x0) && SBORROW4(iVar18,5))) {
    switch(iVar18) {
    case 0:
      iVar17 = *(int *)PTR_LAB_4a04cc0c;
      puVar22 = (ushort *)*param_2;
      iVar18 = -1;
      iVar7 = iVar17 + 0x10000;
      iVar12 = 0;
      puVar21 = (ushort *)param_2[1];
      do {
        uVar9 = (uint)puVar22[iVar12];
        bVar25 = iVar12 == 0 && uVar9 == 0;
        if (iVar12 == 0 && uVar9 == 0) {
          bVar25 = iVar18 == -1;
        }
        if (bVar25) {
          iVar18 = iVar12;
        }
        iVar12 = iVar12 + 1;
        puVar20 = puVar21 + 1;
        *puVar21 = *(ushort *)(iVar17 + ((uVar9 & 0xffff7fff) >> 5) * 2) |
                   *(ushort *)(iVar7 + (uVar9 & 0x1f) * 2);
        puVar21 = puVar20;
      } while (iVar12 < 0x10);
      iVar12 = 1;
      do {
        iVar17 = iVar17 + 0x800;
        iVar7 = iVar7 + 0x40;
        iVar8 = 0x10;
        puVar21 = puVar22;
        puVar14 = puVar20;
        do {
          iVar8 = iVar8 + -1;
          *puVar14 = *(ushort *)(iVar17 + ((*puVar21 & 0xffff7fff) >> 5) * 2) |
                     *(ushort *)(iVar7 + (*puVar21 & 0x1f) * 2);
          puVar21 = puVar21 + 1;
          puVar14 = puVar14 + 1;
        } while (iVar8 != 0);
        iVar12 = iVar12 + 1;
        puVar20 = puVar20 + 0x10;
      } while (iVar12 < 0x20);
      if (iVar18 == -1) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0x50;
      }
      *(short *)(param_2 + 2) = (short)iVar18;
      *(undefined2 *)(param_2 + 3) = uVar10;
      if ((**(uint **)PTR_DAT_4a04cc10 & 0x10000) == 0) {
        uVar10 = 0x1f0;
      }
      else {
        uVar10 = 0x110;
      }
      *(undefined2 *)((int)param_2 + 0xe) = uVar10;
      return;
    case 1:
    case 2:
    case 3:
    case 4:
      goto switchD_4a09e128_caseD_1;
    case 5:
      iVar12 = *(int *)PTR_LAB_4a047cd4;
      iVar17 = *param_2;
      iVar18 = -1;
      if ((**(uint **)PTR_DAT_4a047cd8 & 0x10000) == 0) {
        iVar7 = 0x1f;
      }
      else {
        iVar7 = 0x11;
      }
      iVar8 = 0;
      puVar21 = (ushort *)param_2[1];
      do {
        uVar9 = (uint)*(ushort *)(iVar17 + iVar8 * 2);
        bVar25 = iVar8 == 0 && uVar9 == 0;
        if (iVar8 == 0 && uVar9 == 0) {
          bVar25 = iVar18 == -1;
        }
        if (bVar25) {
          iVar18 = iVar8;
        }
        iVar8 = iVar8 + 1;
        *puVar21 = *(ushort *)(iVar12 + iVar7 * 0x800 + ((uVar9 & 0xffff7fff) >> 5) * 2) |
                   *(ushort *)(iVar12 + iVar7 * 0x40 + 0x10000 + (uVar9 & 0x1f) * 2);
        puVar21 = puVar21 + 1;
      } while (iVar8 < 0x10);
      if (iVar18 == -1) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0x50;
      }
      *(short *)(param_2 + 2) = (short)iVar18;
      *(undefined2 *)(param_2 + 3) = uVar10;
      *(undefined2 *)((int)param_2 + 0xe) = 0;
      return;
    case 6:
      puVar21 = (ushort *)param_2[1];
      iVar17 = *param_2;
      iVar18 = -1;
      iVar12 = *(int *)PTR_LAB_4a04ccd8;
      if ((**(uint **)PTR_DAT_4a04ccdc & 0x10000) == 0) {
        iVar7 = 0x1f;
      }
      else {
        iVar7 = 0x11;
      }
      iVar8 = FUN_4a1458d4(param_2);
      iVar19 = 0;
      if (0 < iVar8) {
        do {
          uVar9 = (uint)*(ushort *)(iVar17 + iVar19 * 2);
          bVar25 = iVar19 == 0 && uVar9 == 0;
          if (iVar19 == 0 && uVar9 == 0) {
            bVar25 = iVar18 == -1;
          }
          if (bVar25) {
            iVar18 = iVar19;
          }
          iVar19 = iVar19 + 1;
          *puVar21 = *(ushort *)(iVar12 + iVar7 * 0x800 + ((uVar9 & 0xffff7fff) >> 5) * 2) |
                     *(ushort *)(iVar12 + iVar7 * 0x40 + 0x10000 + (uVar9 & 0x1f) * 2);
          puVar21 = puVar21 + 1;
        } while (iVar19 < iVar8);
      }
      if (iVar18 == -1) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0x50;
      }
      *(short *)(param_2 + 2) = (short)iVar18;
      *(undefined2 *)(param_2 + 3) = uVar10;
      *(undefined2 *)((int)param_2 + 0xe) = 0;
      return;
    case 7:
      FUN_4a000f84(param_2[1],*param_2,0x20);
      *(undefined2 *)(param_2 + 2) = 0xffff;
      *(undefined2 *)(param_2 + 3) = 0;
      *(undefined2 *)((int)param_2 + 0xe) = 0;
      return;
    default:
      return;
    }
  }
  local_30 = (ushort *)*param_2;
  puVar22 = (ushort *)param_2[1];
  local_2c = param_2;
  local_28 = pbVar13;
  uVar9 = FUN_4a1458d4(param_2);
  bVar2 = *pbVar13;
  bVar3 = pbVar13[1];
  bVar4 = pbVar13[2];
  iVar18 = -1;
  iVar12 = 0;
  puVar21 = puVar22;
  if (0 < (int)uVar9) {
    do {
      uVar15 = (uint)local_30[iVar12];
      bVar25 = iVar12 == 0 && uVar15 == 0;
      if (iVar12 == 0 && uVar15 == 0) {
        bVar25 = iVar18 == -1;
      }
      if (bVar25) {
        iVar18 = iVar12;
      }
      iVar12 = iVar12 + 1;
      puVar22 = puVar21 + 1;
      *puVar21 = (ushort)(((int)((uint)bVar2 * (uVar15 & 0x1f)) >> 8) << 0xb) |
                 (ushort)(((int)((uint)bVar3 * (uVar15 & 0x3e0)) >> 0xc) << 5) |
                 (ushort)((int)((uint)bVar4 * (uVar15 & 0x7c00)) >> 0x12);
      puVar21 = puVar22;
    } while (iVar12 < (int)uVar9);
  }
  iVar12 = 1;
  do {
    uVar24 = (uint)pbVar13[4];
    uVar15 = (uint)pbVar13[5];
    uVar23 = (uint)pbVar13[6];
    if (0 < (int)uVar9) {
      puVar21 = local_30 + -1;
      puVar20 = puVar22 + -1;
      if ((uVar9 & 1) != 0) {
        uVar16 = (uint)*local_30;
        *puVar22 = (ushort)(((int)(uVar24 * (uVar16 & 0x1f)) >> 8) << 0xb) |
                   (ushort)(((int)(uVar15 * (uVar16 & 0x3e0)) >> 0xc) << 5) |
                   (ushort)((int)(uVar23 * (uVar16 & 0x7c00)) >> 0x12);
        puVar21 = local_30;
        puVar20 = puVar22;
      }
      for (iVar17 = (int)uVar9 >> 1; iVar17 != 0; iVar17 = iVar17 + -1) {
        uVar16 = (uint)puVar21[1];
        puVar20[1] = (ushort)(((int)(uVar24 * (uVar16 & 0x1f)) >> 8) << 0xb) |
                     (ushort)(((int)(uVar15 * (uVar16 & 0x3e0)) >> 0xc) << 5) |
                     (ushort)((int)(uVar23 * (uVar16 & 0x7c00)) >> 0x12);
        puVar21 = puVar21 + 2;
        uVar16 = (uint)*puVar21;
        puVar20 = puVar20 + 2;
        *puVar20 = (ushort)(((int)(uVar24 * (uVar16 & 0x1f)) >> 8) << 0xb) |
                   (ushort)(((int)(uVar15 * (uVar16 & 0x3e0)) >> 0xc) << 5) |
                   (ushort)((int)(uVar23 * (uVar16 & 0x7c00)) >> 0x12);
      }
      puVar22 = puVar22 + uVar9;
    }
    iVar12 = iVar12 + 1;
    pbVar13 = pbVar13 + 4;
  } while (iVar12 < 0x20);
  *(short *)(local_2c + 2) = (short)iVar18;
  if (iVar18 == -1) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0x50;
  }
  *(undefined2 *)(local_2c + 3) = uVar10;
  *(short *)((int)local_2c + 0xe) = (short)uVar9 * 0x1f;
  return;
switchD_4a09e128_caseD_1:
  if (param_3 == 0) {
    puVar21 = (ushort *)param_2[1];
    puVar22 = (ushort *)*param_2;
    iVar18 = -1;
    iVar12 = *(int *)PTR_LAB_4a050d30;
    iVar17 = iVar12 + 0x10000;
    switch(param_2[6]) {
    case 0:
      puVar20 = puVar21 + 0x200;
      break;
    case 1:
      puVar20 = puVar21 + 0x400;
      break;
    case 2:
      puVar20 = puVar21 + 0x800;
      break;
    case 3:
      puVar20 = puVar21 + 0x1000;
      break;
    case 4:
      puVar20 = puVar21 + 0x2000;
      break;
    default:
      puVar20 = (ushort *)0x0;
    }
    iVar7 = FUN_4a1458d4(param_2);
    iVar8 = 0;
    puVar14 = puVar21;
    if (0 < iVar7) {
      do {
        uVar5 = puVar22[iVar8];
        uVar9 = (uint)uVar5;
        bVar25 = iVar8 == 0 && uVar9 == 0;
        *puVar20 = uVar5;
        if (iVar8 == 0 && uVar9 == 0) {
          bVar25 = iVar18 == -1;
        }
        if (bVar25) {
          iVar18 = iVar8;
        }
        iVar8 = iVar8 + 1;
        puVar21 = puVar14 + 1;
        *puVar14 = *(ushort *)(iVar12 + ((uVar9 & 0xffff7fff) >> 5) * 2) |
                   *(ushort *)(iVar17 + (uVar9 & 0x1f) * 2);
        puVar20 = puVar20 + 1;
        puVar14 = puVar21;
      } while (iVar8 < iVar7);
    }
    if (iVar18 == -1) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0x50;
    }
    *(short *)(param_2 + 2) = (short)iVar18;
    *(undefined2 *)(param_2 + 3) = uVar10;
    iVar18 = 1;
    if ((**(uint **)PTR_DAT_4a050d34 & 0x10000) == 0) {
      sVar11 = (short)iVar7 * 0x1f;
    }
    else {
      sVar11 = (short)iVar7 * 0x11;
    }
    *(short *)((int)param_2 + 0xe) = sVar11;
    do {
      iVar12 = iVar12 + 0x800;
      iVar17 = iVar17 + 0x40;
      iVar8 = iVar7;
      puVar20 = puVar22;
      puVar14 = puVar21;
      if (0 < iVar7) {
        do {
          iVar8 = iVar8 + -1;
          *puVar14 = *(ushort *)(iVar12 + ((*puVar20 & 0xffff7fff) >> 5) * 2) |
                     *(ushort *)(iVar17 + (*puVar20 & 0x1f) * 2);
          puVar20 = puVar20 + 1;
          puVar14 = puVar14 + 1;
        } while (iVar8 != 0);
        puVar21 = puVar21 + iVar7;
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < 0x20);
    return;
  }
  local_28 = (byte *)*param_2;
  puVar21 = (ushort *)param_2[1];
  iVar18 = -1;
  iVar12 = *(int *)PTR_LAB_4a056258;
  iVar17 = iVar12 + 0x10000;
  switch(param_2[6]) {
  case 0:
    puVar22 = puVar21 + 0x200;
    break;
  case 1:
    puVar22 = puVar21 + 0x400;
    break;
  case 2:
    puVar22 = puVar21 + 0x800;
    break;
  case 3:
    puVar22 = puVar21 + 0x1000;
    break;
  case 4:
    puVar22 = puVar21 + 0x2000;
    break;
  default:
    puVar22 = (ushort *)0x0;
  }
  uVar15 = 0;
  uVar9 = 1;
  iVar7 = FUN_4a1458d4(param_2);
  iVar8 = 0;
  if (0 < iVar7) {
    do {
      uVar5 = *(ushort *)((int)local_28 + iVar8 * 2);
      uVar23 = (uint)uVar5;
      bVar25 = iVar8 == 0 && uVar23 == 0;
      if (iVar8 == 0 && uVar23 == 0) {
        bVar25 = iVar18 == -1;
      }
      if (bVar25) {
        iVar18 = iVar8;
      }
      if (*puVar22 != uVar23) {
        *puVar22 = uVar5;
        uVar15 = uVar15 | uVar9;
        *puVar21 = *(ushort *)(iVar17 + (uVar23 & 0x1f) * 2) |
                   *(ushort *)(iVar12 + ((uVar23 & 0xffff7fff) >> 5) * 2);
      }
      uVar9 = uVar9 << 1;
      puVar21 = puVar21 + 1;
      if (uVar9 == 0) {
        local_4c[iVar8 >> 5] = uVar15;
        uVar15 = 0;
        uVar9 = 1;
      }
      iVar8 = iVar8 + 1;
      puVar22 = puVar22 + 1;
    } while (iVar8 < iVar7);
  }
  if (iVar18 == -1) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0x50;
  }
  *(short *)(param_2 + 2) = (short)iVar18;
  *(undefined2 *)(param_2 + 3) = uVar10;
  if ((**(uint **)PTR_DAT_4a05625c & 0x10000) == 0) {
    sVar11 = (short)iVar7 * 0x1f;
  }
  else {
    sVar11 = (short)iVar7 * 0x11;
  }
  *(short *)((int)param_2 + 0xe) = sVar11;
  local_50 = 1;
  do {
    iVar12 = iVar12 + 0x800;
    iVar17 = iVar17 + 0x40;
    switch(param_2[6]) {
    case 0:
      iVar18 = param_2[1] + 0x400;
      break;
    case 1:
      iVar18 = param_2[1] + 0x800;
      break;
    case 2:
      iVar18 = param_2[1] + 0x1000;
      break;
    case 3:
      iVar18 = param_2[1] + 0x2000;
      break;
    case 4:
      iVar18 = param_2[1] + 0x4000;
      break;
    default:
      iVar18 = 0;
    }
    iVar8 = 0;
    puVar6 = local_4c;
    uVar9 = local_4c[0];
    while( true ) {
      puVar6 = puVar6 + 1;
      iVar19 = iVar8;
      puVar22 = puVar21;
      for (; uVar9 != 0; uVar9 = uVar9 >> 4) {
        if ((uVar9 & 0xf) == 0) {
          puVar22 = puVar22 + 4;
          iVar19 = iVar19 + 4;
        }
        else {
          uVar15 = 1;
          do {
            if ((uVar9 & uVar15) != 0) {
              uVar23 = (uint)*(ushort *)(iVar18 + iVar19 * 2);
              *puVar22 = *(ushort *)(iVar17 + (uVar23 & 0x1f) * 2) |
                         *(ushort *)(iVar12 + ((uVar23 & 0xffff7fff) >> 5) * 2);
            }
            uVar15 = uVar15 * 2;
            puVar22 = puVar22 + 1;
            iVar19 = iVar19 + 1;
          } while (uVar15 != 0x10);
        }
      }
      iVar8 = iVar8 + 0x20;
      puVar21 = puVar21 + 0x20;
      if (iVar8 == iVar7) break;
      uVar9 = *puVar6;
    }
    local_50 = local_50 + 1;
  } while (local_50 < 0x20);
  return;
}



// Address: 4a09e170

/* WARNING: Removing unreachable block (ram,0x4a050bbc) */
/* WARNING: Removing unreachable block (ram,0x4a050be8) */
/* WARNING: Removing unreachable block (ram,0x4a050be4) */
/* WARNING: Removing unreachable block (ram,0x4a050c20) */
/* WARNING: Removing unreachable block (ram,0x4a050c18) */
/* WARNING: Removing unreachable block (ram,0x4a050c10) */
/* WARNING: Removing unreachable block (ram,0x4a050c08) */
/* WARNING: Removing unreachable block (ram,0x4a050c00) */
/* WARNING: Removing unreachable block (ram,0x4a050c2c) */
/* WARNING: Removing unreachable block (ram,0x4a050c40) */
/* WARNING: Removing unreachable block (ram,0x4a050c6c) */
/* WARNING: Removing unreachable block (ram,0x4a050c70) */
/* WARNING: Removing unreachable block (ram,0x4a050c74) */
/* WARNING: Removing unreachable block (ram,0x4a050c90) */
/* WARNING: Removing unreachable block (ram,0x4a050c94) */
/* WARNING: Removing unreachable block (ram,0x4a050c98) */
/* WARNING: Removing unreachable block (ram,0x4a050c9c) */
/* WARNING: Removing unreachable block (ram,0x4a050cb8) */
/* WARNING: Removing unreachable block (ram,0x4a050cbc) */
/* WARNING: Removing unreachable block (ram,0x4a050cc0) */
/* WARNING: Removing unreachable block (ram,0x4a050cc4) */
/* WARNING: Removing unreachable block (ram,0x4a050cd4) */
/* WARNING: Removing unreachable block (ram,0x4a050ce0) */
/* WARNING: Removing unreachable block (ram,0x4a050d18) */
/* WARNING: Removing unreachable block (ram,0x4a050d1c) */
/* WARNING: Removing unreachable block (ram,0x4a050d28) */
/* WARNING: Recovered jumptable eliminated as dead code */

void FUN_4a09e170(undefined4 param_1,int *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined2 uVar10;
  short sVar11;
  int iVar12;
  byte *pbVar13;
  ushort *puVar14;
  uint uVar15;
  ushort *puVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  ushort *puVar21;
  ushort *puVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  int iStack_50;
  uint auStack_4c [7];
  ushort *puStack_30;
  int *piStack_2c;
  byte *pbStack_28;
  
  if (param_2[1] == 0) {
    return;
  }
  *(char *)((int)param_2 + 0x13) = *(char *)((int)param_2 + 0x13) + '\x01';
  *(undefined2 *)((int)param_2 + 10) = 0;
  iVar19 = param_2[6];
  bVar25 = param_2[5] != 0;
  pbVar13 = (byte *)0x0;
  if (bVar25) {
    pbVar13 = *(byte **)(param_2[5] + 0xa8);
  }
  pbVar1 = pbVar13;
  if (bVar25 && pbVar13 != (byte *)0x0) {
    pbVar1 = (byte *)(iVar19 + -5);
  }
  if ((int)pbVar1 < 0 != ((bVar25 && pbVar13 != (byte *)0x0) && SBORROW4(iVar19,5))) {
    puStack_30 = (ushort *)*param_2;
    puVar22 = (ushort *)param_2[1];
    piStack_2c = param_2;
    pbStack_28 = pbVar13;
    uVar9 = FUN_4a1458d4(param_2);
    bVar2 = *pbVar13;
    bVar3 = pbVar13[1];
    bVar4 = pbVar13[2];
    iVar19 = -1;
    iVar12 = 0;
    puVar21 = puVar22;
    if (0 < (int)uVar9) {
      do {
        uVar15 = (uint)puStack_30[iVar12];
        bVar25 = iVar12 == 0 && uVar15 == 0;
        if (iVar12 == 0 && uVar15 == 0) {
          bVar25 = iVar19 == -1;
        }
        if (bVar25) {
          iVar19 = iVar12;
        }
        iVar12 = iVar12 + 1;
        puVar22 = puVar21 + 1;
        *puVar21 = (ushort)(((int)((uint)bVar2 * (uVar15 & 0x1f)) >> 8) << 0xb) |
                   (ushort)(((int)((uint)bVar3 * (uVar15 & 0x3e0)) >> 0xc) << 5) |
                   (ushort)((int)((uint)bVar4 * (uVar15 & 0x7c00)) >> 0x12);
        puVar21 = puVar22;
      } while (iVar12 < (int)uVar9);
    }
    iVar12 = 1;
    do {
      uVar24 = (uint)pbVar13[4];
      uVar15 = (uint)pbVar13[5];
      uVar23 = (uint)pbVar13[6];
      if (0 < (int)uVar9) {
        puVar21 = puStack_30 + -1;
        puVar16 = puVar22 + -1;
        if ((uVar9 & 1) != 0) {
          uVar17 = (uint)*puStack_30;
          *puVar22 = (ushort)(((int)(uVar24 * (uVar17 & 0x1f)) >> 8) << 0xb) |
                     (ushort)(((int)(uVar15 * (uVar17 & 0x3e0)) >> 0xc) << 5) |
                     (ushort)((int)(uVar23 * (uVar17 & 0x7c00)) >> 0x12);
          puVar21 = puStack_30;
          puVar16 = puVar22;
        }
        for (iVar18 = (int)uVar9 >> 1; iVar18 != 0; iVar18 = iVar18 + -1) {
          uVar17 = (uint)puVar21[1];
          puVar16[1] = (ushort)(((int)(uVar24 * (uVar17 & 0x1f)) >> 8) << 0xb) |
                       (ushort)(((int)(uVar15 * (uVar17 & 0x3e0)) >> 0xc) << 5) |
                       (ushort)((int)(uVar23 * (uVar17 & 0x7c00)) >> 0x12);
          puVar21 = puVar21 + 2;
          uVar17 = (uint)*puVar21;
          puVar16 = puVar16 + 2;
          *puVar16 = (ushort)(((int)(uVar24 * (uVar17 & 0x1f)) >> 8) << 0xb) |
                     (ushort)(((int)(uVar15 * (uVar17 & 0x3e0)) >> 0xc) << 5) |
                     (ushort)((int)(uVar23 * (uVar17 & 0x7c00)) >> 0x12);
        }
        puVar22 = puVar22 + uVar9;
      }
      iVar12 = iVar12 + 1;
      pbVar13 = pbVar13 + 4;
    } while (iVar12 < 0x20);
    *(short *)(piStack_2c + 2) = (short)iVar19;
    if (iVar19 == -1) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0x50;
    }
    *(undefined2 *)(piStack_2c + 3) = uVar10;
    *(short *)((int)piStack_2c + 0xe) = (short)uVar9 * 0x1f;
    return;
  }
  switch(iVar19) {
  case 0:
    iVar18 = *(int *)PTR_LAB_4a04cc0c;
    puVar22 = (ushort *)*param_2;
    iVar19 = -1;
    iVar7 = iVar18 + 0x10000;
    iVar12 = 0;
    puVar21 = (ushort *)param_2[1];
    do {
      uVar9 = (uint)puVar22[iVar12];
      bVar25 = iVar12 == 0 && uVar9 == 0;
      if (iVar12 == 0 && uVar9 == 0) {
        bVar25 = iVar19 == -1;
      }
      if (bVar25) {
        iVar19 = iVar12;
      }
      iVar12 = iVar12 + 1;
      puVar16 = puVar21 + 1;
      *puVar21 = *(ushort *)(iVar18 + ((uVar9 & 0xffff7fff) >> 5) * 2) |
                 *(ushort *)(iVar7 + (uVar9 & 0x1f) * 2);
      puVar21 = puVar16;
    } while (iVar12 < 0x10);
    iVar12 = 1;
    do {
      iVar18 = iVar18 + 0x800;
      iVar7 = iVar7 + 0x40;
      iVar8 = 0x10;
      puVar21 = puVar22;
      puVar14 = puVar16;
      do {
        iVar8 = iVar8 + -1;
        *puVar14 = *(ushort *)(iVar18 + ((*puVar21 & 0xffff7fff) >> 5) * 2) |
                   *(ushort *)(iVar7 + (*puVar21 & 0x1f) * 2);
        puVar21 = puVar21 + 1;
        puVar14 = puVar14 + 1;
      } while (iVar8 != 0);
      iVar12 = iVar12 + 1;
      puVar16 = puVar16 + 0x10;
    } while (iVar12 < 0x20);
    if (iVar19 == -1) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0x50;
    }
    *(short *)(param_2 + 2) = (short)iVar19;
    *(undefined2 *)(param_2 + 3) = uVar10;
    if ((**(uint **)PTR_DAT_4a04cc10 & 0x10000) == 0) {
      uVar10 = 0x1f0;
    }
    else {
      uVar10 = 0x110;
    }
    *(undefined2 *)((int)param_2 + 0xe) = uVar10;
    return;
  case 1:
  case 2:
  case 3:
  case 4:
    pbStack_28 = (byte *)*param_2;
    puVar21 = (ushort *)param_2[1];
    iVar19 = -1;
    iVar12 = *(int *)PTR_LAB_4a056258;
    iVar18 = iVar12 + 0x10000;
    switch(param_2[6]) {
    case 0:
      puVar22 = puVar21 + 0x200;
      break;
    case 1:
      puVar22 = puVar21 + 0x400;
      break;
    case 2:
      puVar22 = puVar21 + 0x800;
      break;
    case 3:
      puVar22 = puVar21 + 0x1000;
      break;
    case 4:
      puVar22 = puVar21 + 0x2000;
      break;
    default:
      puVar22 = (ushort *)0x0;
    }
    uVar15 = 0;
    uVar9 = 1;
    iVar7 = FUN_4a1458d4(param_2);
    iVar8 = 0;
    if (0 < iVar7) {
      do {
        uVar5 = *(ushort *)((int)pbStack_28 + iVar8 * 2);
        uVar23 = (uint)uVar5;
        bVar25 = iVar8 == 0 && uVar23 == 0;
        if (iVar8 == 0 && uVar23 == 0) {
          bVar25 = iVar19 == -1;
        }
        if (bVar25) {
          iVar19 = iVar8;
        }
        if (*puVar22 != uVar23) {
          *puVar22 = uVar5;
          uVar15 = uVar15 | uVar9;
          *puVar21 = *(ushort *)(iVar18 + (uVar23 & 0x1f) * 2) |
                     *(ushort *)(iVar12 + ((uVar23 & 0xffff7fff) >> 5) * 2);
        }
        uVar9 = uVar9 << 1;
        puVar21 = puVar21 + 1;
        if (uVar9 == 0) {
          auStack_4c[iVar8 >> 5] = uVar15;
          uVar15 = 0;
          uVar9 = 1;
        }
        iVar8 = iVar8 + 1;
        puVar22 = puVar22 + 1;
      } while (iVar8 < iVar7);
    }
    if (iVar19 == -1) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0x50;
    }
    *(short *)(param_2 + 2) = (short)iVar19;
    *(undefined2 *)(param_2 + 3) = uVar10;
    if ((**(uint **)PTR_DAT_4a05625c & 0x10000) == 0) {
      sVar11 = (short)iVar7 * 0x1f;
    }
    else {
      sVar11 = (short)iVar7 * 0x11;
    }
    *(short *)((int)param_2 + 0xe) = sVar11;
    iStack_50 = 1;
    break;
  case 5:
    iVar12 = *(int *)PTR_LAB_4a047cd4;
    iVar18 = *param_2;
    iVar19 = -1;
    if ((**(uint **)PTR_DAT_4a047cd8 & 0x10000) == 0) {
      iVar7 = 0x1f;
    }
    else {
      iVar7 = 0x11;
    }
    iVar8 = 0;
    puVar21 = (ushort *)param_2[1];
    do {
      uVar9 = (uint)*(ushort *)(iVar18 + iVar8 * 2);
      bVar25 = iVar8 == 0 && uVar9 == 0;
      if (iVar8 == 0 && uVar9 == 0) {
        bVar25 = iVar19 == -1;
      }
      if (bVar25) {
        iVar19 = iVar8;
      }
      iVar8 = iVar8 + 1;
      *puVar21 = *(ushort *)(iVar12 + iVar7 * 0x800 + ((uVar9 & 0xffff7fff) >> 5) * 2) |
                 *(ushort *)(iVar12 + iVar7 * 0x40 + 0x10000 + (uVar9 & 0x1f) * 2);
      puVar21 = puVar21 + 1;
    } while (iVar8 < 0x10);
    if (iVar19 == -1) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0x50;
    }
    *(short *)(param_2 + 2) = (short)iVar19;
    *(undefined2 *)(param_2 + 3) = uVar10;
    *(undefined2 *)((int)param_2 + 0xe) = 0;
    return;
  case 6:
    puVar21 = (ushort *)param_2[1];
    iVar18 = *param_2;
    iVar19 = -1;
    iVar12 = *(int *)PTR_LAB_4a04ccd8;
    if ((**(uint **)PTR_DAT_4a04ccdc & 0x10000) == 0) {
      iVar7 = 0x1f;
    }
    else {
      iVar7 = 0x11;
    }
    iVar8 = FUN_4a1458d4(param_2);
    iVar20 = 0;
    if (0 < iVar8) {
      do {
        uVar9 = (uint)*(ushort *)(iVar18 + iVar20 * 2);
        bVar25 = iVar20 == 0 && uVar9 == 0;
        if (iVar20 == 0 && uVar9 == 0) {
          bVar25 = iVar19 == -1;
        }
        if (bVar25) {
          iVar19 = iVar20;
        }
        iVar20 = iVar20 + 1;
        *puVar21 = *(ushort *)(iVar12 + iVar7 * 0x800 + ((uVar9 & 0xffff7fff) >> 5) * 2) |
                   *(ushort *)(iVar12 + iVar7 * 0x40 + 0x10000 + (uVar9 & 0x1f) * 2);
        puVar21 = puVar21 + 1;
      } while (iVar20 < iVar8);
    }
    if (iVar19 == -1) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0x50;
    }
    *(short *)(param_2 + 2) = (short)iVar19;
    *(undefined2 *)(param_2 + 3) = uVar10;
    *(undefined2 *)((int)param_2 + 0xe) = 0;
    return;
  case 7:
    FUN_4a000f84(param_2[1],*param_2,0x20);
    *(undefined2 *)(param_2 + 2) = 0xffff;
    *(undefined2 *)(param_2 + 3) = 0;
    *(undefined2 *)((int)param_2 + 0xe) = 0;
    return;
  default:
    return;
  }
  do {
    iVar12 = iVar12 + 0x800;
    iVar18 = iVar18 + 0x40;
    switch(param_2[6]) {
    case 0:
      iVar19 = param_2[1] + 0x400;
      break;
    case 1:
      iVar19 = param_2[1] + 0x800;
      break;
    case 2:
      iVar19 = param_2[1] + 0x1000;
      break;
    case 3:
      iVar19 = param_2[1] + 0x2000;
      break;
    case 4:
      iVar19 = param_2[1] + 0x4000;
      break;
    default:
      iVar19 = 0;
    }
    iVar8 = 0;
    puVar6 = auStack_4c;
    uVar9 = auStack_4c[0];
    while( true ) {
      puVar6 = puVar6 + 1;
      iVar20 = iVar8;
      puVar22 = puVar21;
      for (; uVar9 != 0; uVar9 = uVar9 >> 4) {
        if ((uVar9 & 0xf) == 0) {
          puVar22 = puVar22 + 4;
          iVar20 = iVar20 + 4;
        }
        else {
          uVar15 = 1;
          do {
            if ((uVar9 & uVar15) != 0) {
              uVar23 = (uint)*(ushort *)(iVar19 + iVar20 * 2);
              *puVar22 = *(ushort *)(iVar18 + (uVar23 & 0x1f) * 2) |
                         *(ushort *)(iVar12 + ((uVar23 & 0xffff7fff) >> 5) * 2);
            }
            uVar15 = uVar15 * 2;
            puVar22 = puVar22 + 1;
            iVar20 = iVar20 + 1;
          } while (uVar15 != 0x10);
        }
      }
      iVar8 = iVar8 + 0x20;
      puVar21 = puVar21 + 0x20;
      if (iVar8 == iVar7) break;
      uVar9 = *puVar6;
    }
    iStack_50 = iStack_50 + 1;
  } while (iStack_50 < 0x20);
  return;
}



// Address: 4a09e2b8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a09e2b8(int *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar2 = (*(ushort *)(param_2 + 0x10) - 1) * 0x10000;
  *(short *)(param_2 + 0x10) = (short)((uint)iVar2 >> 0x10);
  *(undefined4 *)(param_2 + 0x14) = 0;
  if (iVar2 >> 0x10 != 0) {
    return;
  }
  FUN_4a09dd34(param_1,param_2);
  iVar4 = param_1[2];
  iVar2 = 0;
  if (0 < iVar4) {
    iVar3 = *param_1;
    do {
      if (*(int *)(iVar3 + iVar2 * 4) == param_2) {
        if (iVar2 < iVar4 + -1) {
          uVar5 = ~(iVar4 - iVar2) & 1;
        }
        else {
          uVar5 = 0;
        }
        if (uVar5 == 1) {
          *(undefined4 *)(iVar3 + iVar2 * 4) = *(undefined4 *)(iVar3 + iVar2 * 4 + 4);
        }
        iVar2 = iVar2 + uVar5;
        if (iVar2 < param_1[2] + -1) {
          do {
            iVar3 = iVar2 * 4 + 4;
            *(undefined4 *)(*param_1 + iVar2 * 4) = *(undefined4 *)(*param_1 + iVar3);
            iVar4 = iVar2 * 4;
            iVar2 = iVar2 + 2;
            *(undefined4 *)(*param_1 + iVar3) = *(undefined4 *)(*param_1 + iVar4 + 8);
          } while (iVar2 < param_1[2] + -1);
        }
        break;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar4);
  }
  puVar1 = PTR_LAB_4a09e4a4;
  param_1[2] = param_1[2] + -1;
  iVar2 = param_1[1];
  iVar4 = *(int *)(puVar1 + 0x40);
  param_1[1] = iVar2 + 1;
  *(int *)(iVar4 + iVar2 * 4) = param_2;
  iVar4 = param_1[5];
  iVar2 = 0;
  if (iVar4 < 1) {
                    /* WARNING: Could not recover jumptable at 0x4a09e3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  iVar3 = *(int *)(puVar1 + 0x34);
  do {
    if (*(int *)(iVar3 + iVar2 * 4) == param_2) {
      if (0 < (int)((iVar4 - iVar2) - 1U)) {
        if (iVar2 < iVar4 + -1) {
          uVar5 = ~(iVar4 - iVar2) & 1;
        }
        else {
          uVar5 = 0;
        }
        if (uVar5 == 1) {
          *(undefined4 *)(iVar3 + iVar2 * 4) = *(undefined4 *)(iVar3 + iVar2 * 4 + 4);
        }
        uVar6 = (uint)(uVar5 == 1);
        if ((int)uVar5 < (param_1[5] - iVar2) + -1) {
          do {
            *(undefined4 *)(*(int *)(puVar1 + 0x34) + (iVar2 + uVar6) * 4) =
                 *(undefined4 *)(*(int *)(puVar1 + 0x34) + (iVar2 + uVar6) * 4 + 4);
            iVar4 = iVar2 + uVar6 + 1;
            uVar5 = uVar5 + 2;
            *(undefined4 *)(*(int *)(puVar1 + 0x34) + iVar4 * 4) =
                 *(undefined4 *)(*(int *)(puVar1 + 0x34) + iVar4 * 4 + 4);
            uVar6 = uVar6 + 2;
          } while ((int)uVar5 < (param_1[5] - iVar2) + -1);
        }
      }
      param_1[5] = param_1[5] + -1;
      return;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < iVar4);
  return;
}



// Address: 4a09e4a8

void FUN_4a09e4a8(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_LAB_4a09e4d8;
  if (*(int *)(PTR_LAB_4a09e4d8 + 0x1c) == 0) {
    thunk_FUN_4a161570(0x3c);
    uVar2 = FUN_4a09f194();
    *(undefined4 *)(puVar1 + 0x1c) = uVar2;
    return;
  }
  return;
}



// Address: 4a09e4dc

void FUN_4a09e4dc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_4a09e50c;
  if (*(int *)(PTR_LAB_4a09e50c + 0x1c) != 0) {
    FUN_4a09f2cc();
    thunk_FUN_4a161530();
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    return;
  }
  return;
}



// Address: 4a09e510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_4a09e510(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = host_s3eConfigGetInt_arm(&DAT_4a09e8a4,s_NumPaletteCacheBlocks_4a09e88c,param_1 + 0x1c);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x1c) < 1) {
      thunk_FUN_4a008004(s_Config_File_Error__NumPaletteCac_4a09e8a8);
      iVar2 = host_s3eDebugIsDebuggerPresent_arm();
      if (iVar2 != 0) {
        _DAT_fffffff4 = 0;
      }
      goto LAB_4a09e558;
    }
  }
  else {
LAB_4a09e558:
    *(undefined4 *)(param_1 + 0x1c) = 0x10;
  }
  iVar2 = host_s3eConfigGetInt_arm(&DAT_4a09e8a4,s_NumU16PaletteCacheBlocks_4a09e8e4,param_1 + 0x28)
  ;
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x28) < 1) {
      thunk_FUN_4a008004(s_Config_File_Error__NumU16Palette_4a09e900);
      iVar2 = host_s3eDebugIsDebuggerPresent_arm();
      if (iVar2 != 0) {
        _DAT_fffffff4 = 0;
      }
      goto LAB_4a09e598;
    }
  }
  else {
LAB_4a09e598:
    *(undefined4 *)(param_1 + 0x28) = 0x18;
  }
  iVar2 = host_s3eConfigGetInt_arm
                    (&DAT_4a09e8a4,s_NumU256PaletteCacheBlocks_4a09e940,param_1 + 0x2c);
  if (iVar2 == 0) {
    if (0 < *(int *)(param_1 + 0x2c)) goto LAB_4a09e5dc;
    thunk_FUN_4a008004(s_Config_File_Error__NumU256Palett_4a09e95c);
    iVar2 = host_s3eDebugIsDebuggerPresent_arm();
    if (iVar2 != 0) {
      _DAT_fffffff4 = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x2c) = 4;
LAB_4a09e5dc:
  FUN_4a09de60(param_1);
  puVar1 = PTR_LAB_4a09e99c;
  if (*(int *)(PTR_LAB_4a09e99c + 0x10) == 0) {
    iVar2 = FUN_4a15e080(*(int *)(param_1 + 0x1c) * 0x4200 + 0x1f);
    *(int *)(puVar1 + 0x10) = iVar2;
    *(uint *)(puVar1 + 4) = iVar2 + 0x1fU & 0xffffffe0;
  }
  if (*(int *)(puVar1 + 0x20) == 0) {
    uVar3 = thunk_FUN_4a161570(*(int *)(param_1 + 0x1c) << 2);
    *(undefined4 *)(puVar1 + 0x20) = uVar3;
  }
  if (*(int *)(puVar1 + 0x34) == 0) {
    uVar3 = thunk_FUN_4a161570((*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x2c) +
                               *(int *)(param_1 + 0x1c) * 0x10) * 4);
    *(undefined4 *)(puVar1 + 0x34) = uVar3;
  }
  if (*(int *)(puVar1 + 0x18) == 0) {
    iVar2 = FUN_4a15e080(*(int *)(param_1 + 0x28) * 0x20 + 0x1f);
    *(int *)(puVar1 + 0x18) = iVar2;
    *(uint *)(puVar1 + 0xc) = iVar2 + 0x1fU & 0xffffffe0;
  }
  if (*(int *)(puVar1 + 0x14) == 0) {
    iVar2 = FUN_4a15e080(*(int *)(param_1 + 0x2c) * 0x200 + 0x1f);
    *(int *)(puVar1 + 0x14) = iVar2;
    *(uint *)(puVar1 + 8) = iVar2 + 0x1fU & 0xffffffe0;
  }
  if (*(int *)(puVar1 + 0x28) == 0) {
    uVar3 = thunk_FUN_4a161570(*(int *)(param_1 + 0x28) << 2);
    *(undefined4 *)(puVar1 + 0x28) = uVar3;
  }
  if (*(int *)(puVar1 + 0x24) == 0) {
    uVar3 = thunk_FUN_4a161570(*(int *)(param_1 + 0x2c) << 2);
    *(undefined4 *)(puVar1 + 0x24) = uVar3;
  }
  if (*(int *)(puVar1 + 0x30) == 0) {
    uVar3 = thunk_FUN_4a161570(*(int *)(param_1 + 0x1c) << 3);
    *(undefined4 *)(puVar1 + 0x30) = uVar3;
  }
  if (*(int *)(puVar1 + 0x2c) == 0) {
    uVar3 = thunk_FUN_4a161570(*(int *)(param_1 + 0x1c) << 1);
    *(undefined4 *)(puVar1 + 0x2c) = uVar3;
  }
  if (0 < (int)*(uint *)(param_1 + 0x1c)) {
    uVar5 = *(uint *)(param_1 + 0x1c) & 1;
    if (uVar5 == 1) {
      **(undefined4 **)(puVar1 + 0x20) = *(undefined4 *)(puVar1 + 4);
    }
    uVar4 = (uint)(uVar5 == 1);
    if ((int)uVar5 < *(int *)(param_1 + 0x1c)) {
      do {
        *(uint *)(*(int *)(puVar1 + 0x20) + uVar4 * 4) = *(int *)(puVar1 + 4) + uVar4 * 0x4200;
        iVar2 = uVar4 + 1;
        uVar4 = uVar4 + 2;
        *(int *)(*(int *)(puVar1 + 0x20) + iVar2 * 4) = *(int *)(puVar1 + 4) + iVar2 * 0x4200;
        uVar5 = uVar5 + 2;
      } while ((int)uVar5 < *(int *)(param_1 + 0x1c));
    }
  }
  if (0 < (int)*(uint *)(param_1 + 0x28)) {
    uVar5 = *(uint *)(param_1 + 0x28) & 1;
    if (uVar5 == 1) {
      **(undefined4 **)(puVar1 + 0x28) = *(undefined4 *)(puVar1 + 0xc);
    }
    uVar4 = (uint)(uVar5 == 1);
    if ((int)uVar5 < *(int *)(param_1 + 0x28)) {
      do {
        iVar2 = uVar4 + 1;
        *(uint *)(*(int *)(puVar1 + 0x28) + uVar4 * 4) = *(int *)(puVar1 + 0xc) + uVar4 * 0x20;
        uVar4 = uVar4 + 2;
        *(int *)(*(int *)(puVar1 + 0x28) + iVar2 * 4) = *(int *)(puVar1 + 0xc) + iVar2 * 0x20;
        uVar5 = uVar5 + 2;
      } while ((int)uVar5 < *(int *)(param_1 + 0x28));
    }
  }
  if (0 < (int)*(uint *)(param_1 + 0x2c)) {
    uVar5 = *(uint *)(param_1 + 0x2c) & 1;
    if (uVar5 == 1) {
      **(undefined4 **)(puVar1 + 0x24) = *(undefined4 *)(puVar1 + 8);
    }
    uVar4 = (uint)(uVar5 == 1);
    if ((int)uVar5 < *(int *)(param_1 + 0x2c)) {
      do {
        iVar2 = uVar4 + 1;
        *(uint *)(*(int *)(puVar1 + 0x24) + uVar4 * 4) = *(int *)(puVar1 + 8) + uVar4 * 0x200;
        uVar4 = uVar4 + 2;
        *(int *)(*(int *)(puVar1 + 0x24) + iVar2 * 4) = *(int *)(puVar1 + 8) + iVar2 * 0x200;
        uVar5 = uVar5 + 2;
      } while ((int)uVar5 < *(int *)(param_1 + 0x2c));
    }
  }
  FUN_4a001274(*(undefined4 *)(puVar1 + 0x2c),*(int *)(param_1 + 0x1c) << 1);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x2c);
  return;
}



// Address: 4a09e9c8

undefined4 FUN_4a09e9c8(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  int local_80;
  int iStack_7c;
  int local_78 [16];
  int local_38;
  int local_34;
  int local_30;
  int *piStack_2c;
  int local_28;
  
  puVar3 = PTR_LAB_4a09ef8c;
  local_30 = *(int *)(param_2 + 0x18);
  if ((local_30 != 5 && local_30 != 6) && local_30 != 7) {
    param_4 = 0;
  }
  if ((local_30 == 5 || local_30 == 6) || local_30 == 7) {
    param_4 = 1;
  }
  piStack_2c = param_1;
  local_28 = param_2;
  if (param_4 == 0) {
    uVar5 = param_1[6];
    bVar15 = uVar5 != 0;
    uVar6 = uVar5;
    if (bVar15) {
      uVar6 = uVar5 - 1;
    }
    if ((bVar15 && uVar6 != 0xffffffff) && (int)uVar5 < 0 == (bVar15 && SCARRY4(uVar6,1))) {
      do {
        if (*(int *)(*(int *)(PTR_LAB_4a09ef8c + 0x30) + uVar6 * 8) == local_30) {
          uVar9 = FUN_4a09da74(param_1,*(int *)(PTR_LAB_4a09ef8c + 0x30) + uVar6 * 8);
          *(undefined4 *)(local_28 + 4) = uVar9;
          *(int *)(puVar3 + 0x54) = *(int *)(puVar3 + 0x54) + 1;
          return 0;
        }
        uVar6 = uVar6 - 1;
      } while (uVar6 < 0x80000000);
    }
    if (param_1[4] != 0) {
      local_34 = *(undefined4 *)(*(int *)(PTR_LAB_4a09ef8c + 0x20) + param_1[4] * 4 + -4);
      local_38 = local_30;
      uVar9 = FUN_4a09da74(param_1,&local_38);
      *(undefined4 *)(local_28 + 4) = uVar9;
      *(int *)(puVar3 + 0x54) = *(int *)(puVar3 + 0x54) + 1;
      return 0;
    }
LAB_4a09eb44:
    uVar6 = param_1[5] - 1;
    if (-1 < (int)uVar6) {
      iVar4 = *(int *)(PTR_LAB_4a09ef8c + 0x34);
      do {
        iVar12 = *(int *)(iVar4 + uVar6 * 4);
        if (((*(int *)(iVar12 + 0x18) == local_30) && (*(int *)(iVar12 + 4) != 0)) &&
           (*(short *)(iVar12 + 10) == -1)) {
          *(undefined4 *)(param_2 + 4) = *(undefined4 *)(*(int *)(iVar4 + uVar6 * 4) + 4);
          *(undefined4 *)(*(int *)(iVar4 + uVar6 * 4) + 4) = 0;
          *(int *)(puVar3 + 0x58) = *(int *)(puVar3 + 0x58) + 1;
          return 0;
        }
        uVar6 = uVar6 - 1;
      } while (uVar6 < 0x80000000);
    }
    if (param_4 == 0) {
      local_34 = 3;
      do {
        iVar14 = local_34;
        local_38 = param_1[5];
        iVar4 = 0;
        iVar12 = 0;
        uVar6 = DAT_4a09ef90;
joined_r0x4a09ebec:
        local_38 = local_38 + -1;
        DAT_4a09ef90 = uVar6;
        if (-1 < local_38) {
          iVar7 = *(int *)(*(int *)(PTR_LAB_4a09ef8c + 0x34) + local_38 * 4);
          if (((*(int *)(iVar7 + 0x18) == iVar14) && (*(int *)(iVar7 + 4) != 0)) &&
             (*(short *)(iVar7 + 10) == -1)) {
            iVar8 = *(int *)(PTR_LAB_4a09ef8c + 4);
            uVar5 = (uint)((ulonglong)(uint)(*(int *)(iVar7 + 4) - iVar8) * (ulonglong)uVar6 >> 0x2c
                          );
            if (iVar4 == 0) {
              iVar4 = iVar8 + uVar5 * 0x4200;
LAB_4a09ec58:
              if (iVar12 == 0 || iVar4 == 0) goto joined_r0x4a09ebec;
            }
            else if (iVar12 == 0) {
              iVar12 = iVar8 + uVar5 * 0x4200;
              goto LAB_4a09ec58;
            }
            if (iVar12 != iVar4) {
              iVar8 = 0;
              iVar7 = 0;
              if (0 < param_1[2]) {
                do {
                  iVar13 = *(int *)(*param_1 + iVar7 * 4);
                  if ((*(int *)(iVar13 + 0x18) == iVar14) && (*(int *)(iVar13 + 4) != 0)) {
                    lVar2 = (ulonglong)(uint)(*(int *)(iVar13 + 4) - *(int *)(PTR_LAB_4a09ef8c + 4))
                            * (ulonglong)uVar6;
                    uVar5 = (uint)((ulonglong)lVar2 >> 0x2c);
                    iVar10 = *(int *)(PTR_LAB_4a09ef8c + 4) + uVar5 * 0x4200;
                    if (iVar10 == iVar4) {
                      if (*(short *)(iVar13 + 10) == -1) {
LAB_4a09ed68:
                        FUN_4a09ef94(param_1,iVar13,uVar5 * 0x21,(int)lVar2);
                      }
                      else {
                        local_78[iVar8] = iVar13;
                        iVar8 = iVar8 + 1;
                      }
                    }
                    else {
                      bVar15 = iVar10 == iVar12;
                      if (bVar15) {
                        iVar10 = (int)*(short *)(iVar13 + 10);
                      }
                      if (bVar15 && iVar10 == -1) goto LAB_4a09ed68;
                    }
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 < param_1[2]);
              }
              iVar7 = 0;
              if (0 < iVar8) {
                do {
                  local_80 = iVar14;
                  iStack_7c = iVar12;
                  iVar13 = FUN_4a09da74(param_1,&local_80);
                  if (iVar13 == 0) break;
                  uVar9 = 0;
                  if (iVar14 == 0) {
                    uVar9 = 0x420;
                  }
                  else if (iVar14 == 1) {
                    uVar9 = 0x840;
                  }
                  else if (iVar14 == 2) {
                    uVar9 = 0x1080;
                  }
                  else if (iVar14 == 3) {
                    uVar9 = 0x2100;
                  }
                  FUN_4a000f84(iVar13,*(undefined4 *)(local_78[iVar7] + 4),uVar9);
                  FUN_4a09ef94(param_1,local_78[iVar7]);
                  piVar1 = local_78 + iVar7;
                  iVar7 = iVar7 + 1;
                  *(int *)(*piVar1 + 4) = iVar13;
                } while (iVar7 < iVar8);
              }
              if (iVar7 == iVar8) break;
            }
            iVar12 = 0;
            uVar6 = DAT_4a09ef90;
          }
          goto joined_r0x4a09ebec;
        }
        local_34 = local_34 + -1;
      } while (-1 < local_34);
      puVar3 = PTR_LAB_4a09ef8c;
      *(int *)(PTR_LAB_4a09ef8c + 0x60) = *(int *)(PTR_LAB_4a09ef8c + 0x60) + 1;
      if (param_1[4] != 0) {
        local_34 = *(undefined4 *)(*(int *)(puVar3 + 0x20) + param_1[4] * 4 + -4);
        local_38 = local_30;
        uVar9 = FUN_4a09da74(param_1,&local_38);
        *(undefined4 *)(local_28 + 4) = uVar9;
        *(int *)(puVar3 + 0x58) = *(int *)(puVar3 + 0x58) + 1;
        return 0;
      }
    }
    FUN_4a038b6c();
    uVar5 = DAT_4a09ef90;
    puVar3 = PTR_LAB_4a09ef8c;
    uVar6 = param_1[2];
    uVar11 = uVar6 - 1;
    if (-1 < (int)uVar11) {
      do {
        iVar4 = *(int *)(*param_1 + uVar11 * 4);
        if ((*(int *)(iVar4 + 0x18) == local_30) && (*(int *)(iVar4 + 4) != 0)) {
          *(undefined4 *)(local_28 + 4) = *(undefined4 *)(*(int *)(*param_1 + uVar11 * 4) + 4);
          *(undefined4 *)(*(int *)(*param_1 + uVar11 * 4) + 4) = 0;
          *(int *)(PTR_LAB_4a09ef8c + 0x5c) = *(int *)(PTR_LAB_4a09ef8c + 0x5c) + 1;
          return 1;
        }
        uVar11 = uVar11 - 1;
      } while (uVar11 < 0x80000000);
    }
    while( true ) {
      do {
        uVar6 = uVar6 - 1;
        if ((int)uVar6 < 0) {
          return 1;
        }
        iVar4 = *(int *)(*param_1 + uVar6 * 4);
        iVar12 = *(int *)(iVar4 + 0x18);
        if (iVar12 != local_30) {
          iVar4 = *(int *)(iVar4 + 4);
        }
      } while (iVar12 == local_30 || iVar4 == 0);
      iVar14 = *(int *)(puVar3 + 4);
      if (-1 < (int)uVar6) break;
LAB_4a09ef28:
      if (param_1[4] != 0) {
        local_34 = *(undefined4 *)(*(int *)(puVar3 + 0x20) + param_1[4] * 4 + -4);
        local_38 = local_30;
        uVar9 = FUN_4a09da74(param_1,&local_38);
        *(undefined4 *)(local_28 + 4) = uVar9;
        *(int *)(puVar3 + 0x58) = *(int *)(puVar3 + 0x58) + 1;
        return 1;
      }
    }
    do {
      iVar7 = *(int *)(*param_1 + uVar6 * 4);
      if ((*(int *)(iVar7 + 0x18) == iVar12) &&
         (lVar2 = (ulonglong)(uint)(*(int *)(iVar7 + 4) - *(int *)(puVar3 + 4)) * (ulonglong)uVar5,
         (uint)((ulonglong)lVar2 >> 0x2c) ==
         (uint)((ulonglong)(uint)(iVar4 - iVar14) * (ulonglong)uVar5 >> 0x2c))) {
        FUN_4a09ef94(param_1,iVar7,(int)lVar2);
      }
      do {
        uVar6 = uVar6 - 1;
        if (0x7fffffff < uVar6) goto LAB_4a09ef28;
      } while (*(int *)(*(int *)(*param_1 + uVar6 * 4) + 4) == 0);
    } while( true );
  }
  iVar4 = *(int *)(PTR_LAB_4a09ef8c + 0x54);
  if ((local_30 == 5 || local_30 == 7) && (param_1[8] != 0)) {
    iVar12 = param_1[8] + -1;
    param_1[8] = iVar12;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(*(int *)(puVar3 + 0x28) + iVar12 * 4);
  }
  else {
    if ((local_30 != 6) || (param_1[9] == 0)) goto LAB_4a09eb44;
    iVar12 = param_1[9] + -1;
    param_1[9] = iVar12;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(*(int *)(puVar3 + 0x24) + iVar12 * 4);
  }
  *(int *)(puVar3 + 0x54) = iVar4 + 1;
  return 0;
}



// Address: 4a09ef94

void FUN_4a09ef94(int param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  
  puVar3 = PTR_LAB_4a09f18c;
  uVar9 = (uint)((ulonglong)(uint)(*(int *)(param_2 + 4) - *(int *)(PTR_LAB_4a09f18c + 4)) *
                 (ulonglong)DAT_4a09f190 >> 0x2c);
  uVar1 = (uint)((ulonglong)
                 (*(int *)(param_2 + 4) - (*(int *)(PTR_LAB_4a09f18c + 4) + uVar9 * 0x4200)) *
                 (ulonglong)DAT_4a09f190 >> 0x28);
  uVar10 = *(undefined4 *)(param_2 + 0x18);
  puVar4 = (ushort *)(*(int *)(PTR_LAB_4a09f18c + 0x2c) + uVar9 * 2);
  uVar2 = *puVar4;
  switch(uVar10) {
  case 0:
    *puVar4 = uVar2 & ~(ushort)(1 << (uVar1 & 0xff));
    break;
  case 1:
    *puVar4 = uVar2 & ~(ushort)(3 << (uVar1 & 0xff));
    break;
  case 2:
    *puVar4 = uVar2 & ~(ushort)(0xf << (uVar1 & 0xff));
    break;
  case 3:
    *puVar4 = uVar2 & ~(ushort)(0xff << (uVar1 & 0xff));
    break;
  case 4:
    *puVar4 = uVar2 & ~(ushort)(-1 << (uVar1 & 0xff));
  }
  iVar5 = 1 - (uint)*puVar4;
  if (1 < *puVar4) {
    iVar5 = 0;
  }
  if (iVar5 == 0) {
    if (uVar2 == 0xffff) {
      iVar5 = *(int *)(puVar3 + 0x30);
      *(uint *)(iVar5 + *(int *)(param_1 + 0x18) * 8 + 4) = *(int *)(puVar3 + 4) + uVar9 * 0x4200;
      *(undefined4 *)(iVar5 + *(int *)(param_1 + 0x18) * 8) = uVar10;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    }
  }
  else {
    iVar5 = *(int *)(puVar3 + 4) + uVar9 * 0x4200;
    if (uVar2 != 0xffff) {
      iVar6 = *(int *)(param_1 + 0x18) + -1;
      if (-1 < iVar6) {
        iVar7 = *(int *)(puVar3 + 0x30);
        do {
          if (*(int *)(iVar7 + iVar6 * 8 + 4) == iVar5) {
            iVar8 = *(int *)(param_1 + 0x18) + -1;
            *(int *)(param_1 + 0x18) = iVar8;
            if (iVar6 < iVar8) {
              uVar9 = iVar8 - iVar6 & 1;
            }
            else {
              uVar9 = 0;
            }
            if (uVar9 == 1) {
              *(undefined4 *)(iVar7 + iVar6 * 8) = *(undefined4 *)(iVar7 + iVar6 * 8 + 8);
              iVar7 = *(int *)(puVar3 + 0x30) + iVar6 * 8;
              *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar7 + 0xc);
            }
            iVar6 = iVar6 + uVar9;
            if (iVar6 < *(int *)(param_1 + 0x18)) {
              do {
                *(undefined4 *)(*(int *)(puVar3 + 0x30) + iVar6 * 8) =
                     *(undefined4 *)(*(int *)(puVar3 + 0x30) + iVar6 * 8 + 8);
                iVar7 = *(int *)(puVar3 + 0x30) + iVar6 * 8;
                iVar6 = iVar6 + 2;
                *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar7 + 0xc);
                *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar7 + 0x10);
                *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(iVar7 + 0x14);
              } while (iVar6 < *(int *)(param_1 + 0x18));
            }
            break;
          }
          iVar6 = iVar6 + -1;
        } while (-1 < iVar6);
      }
    }
    iVar6 = *(int *)(param_1 + 0x10);
    iVar7 = *(int *)(puVar3 + 0x20);
    *(int *)(param_1 + 0x10) = iVar6 + 1;
    *(int *)(iVar7 + iVar6 * 4) = iVar5;
  }
  *(undefined4 *)(param_2 + 4) = 0;
  return;
}



// Address: 4a09f194

undefined4 * FUN_4a09f194(undefined4 *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  param_1[3] = 800;
  host_s3eConfigGetInt_arm(&DAT_4a09f2c4,s_PaletteCacheSize_4a09f2b0,param_1 + 3);
  uVar2 = thunk_FUN_4a161570(param_1[3] * 0x1c);
  puVar1 = PTR_LAB_4a09f2c8;
  *(undefined4 *)(PTR_LAB_4a09f2c8 + 0x38) = uVar2;
  uVar2 = thunk_FUN_4a161570((param_1[3] + 100) * 4);
  *(undefined4 *)(puVar1 + 0x3c) = uVar2;
  uVar2 = thunk_FUN_4a161570((param_1[3] + 100) * 4);
  *(undefined4 *)(puVar1 + 0x40) = uVar2;
  *param_1 = *(undefined4 *)(puVar1 + 0x3c);
  uVar4 = param_1[3];
  param_1[1] = uVar4;
  param_1[2] = 0;
  if (0 < (int)uVar4) {
    uVar4 = uVar4 & 1;
    if (uVar4 == 1) {
      **(undefined4 **)(puVar1 + 0x40) = *(undefined4 *)(puVar1 + 0x38);
    }
    uVar3 = (uint)(uVar4 == 1);
    if ((int)uVar4 < (int)param_1[3]) {
      do {
        *(uint *)(*(int *)(puVar1 + 0x40) + uVar3 * 4) = *(int *)(puVar1 + 0x38) + uVar3 * 0x1c;
        iVar5 = uVar3 + 1;
        uVar3 = uVar3 + 2;
        *(int *)(*(int *)(puVar1 + 0x40) + iVar5 * 4) = *(int *)(puVar1 + 0x38) + iVar5 * 0x1c;
        uVar4 = uVar4 + 2;
      } while ((int)uVar4 < (int)param_1[3]);
    }
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_4a09e510(param_1);
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  return param_1;
}



// Address: 4a09f2cc

undefined4 FUN_4a09f2cc(undefined4 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_4a09f384;
  thunk_FUN_4a161530(*(undefined4 *)(PTR_LAB_4a09f384 + 0x10));
  *(undefined4 *)(puVar1 + 0x10) = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  thunk_FUN_4a161530(*(undefined4 *)(puVar1 + 0x18));
  thunk_FUN_4a161530(*(undefined4 *)(puVar1 + 0x14));
  *(undefined4 *)(puVar1 + 0x14) = 0;
  *(undefined4 *)(puVar1 + 0x18) = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  thunk_FUN_4a161530(*(undefined4 *)(puVar1 + 0x20));
  *(undefined4 *)(puVar1 + 0x20) = 0;
  thunk_FUN_4a161530(*(undefined4 *)(puVar1 + 0x34));
  *(undefined4 *)(puVar1 + 0x34) = 0;
  thunk_FUN_4a161530(*(undefined4 *)(puVar1 + 0x28));
  thunk_FUN_4a161530(*(undefined4 *)(puVar1 + 0x24));
  *(undefined4 *)(puVar1 + 0x28) = 0;
  *(undefined4 *)(puVar1 + 0x24) = 0;
  thunk_FUN_4a161530(*(undefined4 *)(puVar1 + 0x30));
  *(undefined4 *)(puVar1 + 0x30) = 0;
  thunk_FUN_4a161530(*(undefined4 *)(puVar1 + 0x2c));
  *(undefined4 *)(puVar1 + 0x2c) = 0;
  thunk_FUN_4a161530(*(undefined4 *)(puVar1 + 0x38));
  *(undefined4 *)(puVar1 + 0x38) = 0;
  thunk_FUN_4a161530(*(undefined4 *)(puVar1 + 0x3c));
  *(undefined4 *)(puVar1 + 0x3c) = 0;
  thunk_FUN_4a161530(*(undefined4 *)(puVar1 + 0x40));
  *(undefined4 *)(puVar1 + 0x40) = 0;
  return param_1;
}



// Address: 4a09f3a4

void FUN_4a09f3a4(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined *local_34 [2];
  int local_2c;
  
  if (*(int *)(param_1 + 0xc0) == 0) {
    uVar1 = FUN_4a171fac(*(undefined4 *)(param_1 + 0xb8));
    uVar2 = FUN_4a171fac(*(undefined4 *)(param_1 + 0xbc));
    uVar2 = FUN_4a171bb8(uVar2,uVar1);
    FUN_4a0b529c(*(undefined4 *)(param_1 + 0x98),uVar1,uVar2,0xc2c80000,0x42c80000);
  }
  else {
    uVar1 = FUN_4a171fac(*(undefined4 *)(param_1 + 0xb8));
    uVar2 = FUN_4a171fac(*(undefined4 *)(param_1 + 0xbc));
    uVar2 = FUN_4a171bb8(uVar2,uVar1);
    FUN_4a0b529c(*(undefined4 *)(param_1 + 0x98),uVar1,uVar2,0xc3480000,0x43480000);
  }
  FUN_4a0af110(*(undefined4 *)(param_1 + 0x98),0x42b40000,0,0,0x3f800000);
  uVar1 = (**(code **)(*param_2 + 0x74))(param_2);
  uVar2 = (**(code **)(*param_2 + 0x78))(param_2);
  uVar3 = (**(code **)(*param_2 + 0x70))(param_2);
  uVar4 = (**(code **)(*param_2 + 0x6c))(param_2);
  piVar5 = (int *)thunk_FUN_4a0b3908();
  FUN_4a0a83a4(piVar5,param_2);
  (**(code **)(*piVar5 + 0x20))
            (piVar5,*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb4),
             *(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc));
  FUN_4a0a8b14(piVar5,*(undefined4 *)(param_1 + 0x90));
  (**(code **)(*piVar5 + 0x30))(piVar5);
  (**(code **)(*param_2 + 0x9c))(param_2,uVar1,uVar2,uVar3,uVar4);
  iVar6 = *(int *)(*(int *)(param_1 + 0x94) + 0xdc);
  if (iVar6 != 0) {
    for (iVar6 = *(int *)(iVar6 + 0x10); 0 < iVar6; iVar6 = *(int *)(iVar6 + 0x10)) {
      FUN_4a0b4ac8(*(int *)(param_1 + 0x94),
                   **(undefined4 **)(*(int *)(*(int *)(param_1 + 0x94) + 0xdc) + 0x14));
      iVar6 = *(int *)(*(int *)(param_1 + 0x94) + 0xdc);
      if (iVar6 == 0) break;
    }
  }
  puVar7 = (undefined4 *)FUN_4a0c6bc0(local_34);
  *puVar7 = PTR_PTR_4a09f65c;
  puVar7[2] = *(undefined4 *)(param_1 + 0x70);
  piVar5 = *(int **)(param_1 + 0x74);
  puVar7[3] = piVar5;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))();
  }
  local_34[0] = PTR_PTR_4a09f660;
  iVar6 = 0;
  *puVar7 = PTR_PTR_4a09f660;
  if (0 < (int)puVar7[2]) {
    do {
      if (puVar7[3] == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(puVar7[3] + 8);
      }
      *(undefined2 *)(iVar8 + iVar6 * 2) = 0;
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)puVar7[2]);
  }
  iVar6 = FUN_4a0bcc84(local_34);
  if (iVar6 != 0) {
    iVar8 = 0;
    if (0 < local_2c) {
      do {
        iVar8 = iVar8 + 1;
      } while (iVar8 < local_2c);
      if (iVar6 == 0) goto LAB_4a09f638;
    }
    FUN_4a14f21c();
  }
LAB_4a09f638:
  FUN_4a0c6bf4(local_34);
  *(undefined4 *)(param_1 + 0xc4) = 0xc2480000;
  *(undefined4 *)(param_1 + 200) = 0;
  return;
}



// Address: 4a09f664

void FUN_4a09f664(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  if (*(int *)(param_1 + 0x74) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x74) + 8);
  }
  sVar1 = *(short *)(iVar2 + param_2 * 2);
  iVar2 = (int)sVar1;
  if (*(int *)(param_1 + 0x60) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x60) + 8);
  }
  if (*(int *)(iVar3 + param_2 * 0x14 + 8) <= iVar2) {
    FUN_4a0a0d74(param_1,param_2,iVar2 + 1);
  }
  if (*(int *)(param_1 + 0x74) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x74) + 8);
  }
  *(short *)(iVar3 + param_2 * 2) = sVar1 + 1;
  uVar4 = FUN_4a171fac(*(undefined4 *)(param_1 + 0xb8));
  uVar4 = FUN_4a17295c(uVar4,0xffffffff);
  uVar5 = FUN_4a171fac(*(undefined4 *)(param_1 + 0xbc));
  uVar5 = FUN_4a17295c(uVar5,0xffffffff);
  if (*(int *)(param_1 + 0x60) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x60) + 8);
  }
  iVar3 = *(int *)(iVar3 + param_2 * 0x14 + 0xc);
  if (iVar3 != 0) {
    iVar7 = *(int *)(iVar3 + 8);
  }
  iVar7 = *(int *)(iVar7 + iVar2 * 4);
  uVar5 = FUN_4a1725c0(uVar5,param_4);
  uVar4 = FUN_4a1725c0(param_3,uVar4);
  FUN_4a0af1d4(iVar7,uVar4,uVar5,*(undefined4 *)(param_1 + 0xc4));
  FUN_4a0af110(iVar7,param_8,0,0,0x3f800000);
  FUN_4a0af650(iVar7,param_6,param_7,0x3f800000);
  uVar4 = FUN_4a17211c(*(undefined4 *)(param_1 + 0xcc),param_5);
  uVar5 = *(undefined4 *)(param_1 + 200);
  if (iVar7 != 0) {
    iVar2 = FUN_4a165910(iVar7);
    if (iVar2 != 0) {
      iVar6 = 0;
      iVar3 = 0;
      if (*(int *)(iVar2 + 0xdc) != 0) {
        iVar3 = *(int *)(*(int *)(iVar2 + 0xdc) + 0x10);
      }
      if (0 < iVar3) {
        do {
          FUN_4a0a0714(*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0xdc) + 0x14) + iVar6 * 4),uVar4,
                       uVar5);
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar3);
      }
    }
    iVar2 = FUN_4a165858(iVar7);
    if (iVar2 != 0) {
      FUN_4a0b45d8(iVar2,uVar4);
      uVar4 = FUN_4a13b4a0(iVar2,0);
      FUN_4a0afe78(uVar4,uVar5);
    }
  }
  FUN_4a0b4c10(*(undefined4 *)(param_1 + 0x94),iVar7);
  uVar4 = FUN_4a171a94(*(undefined4 *)(param_1 + 0xc4),DAT_4a09f860);
  *(undefined4 *)(param_1 + 0xc4) = uVar4;
  *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
  return;
}



// Address: 4a09f864

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a09f864(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  piVar3 = (int *)0x0;
  iVar2 = 0;
  if (*(int *)(param_1 + 0x48) < 1) {
    return;
  }
  do {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x24) != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 8);
    }
    if (*(short *)(iVar1 + iVar2 * 2) == param_2) {
      iVar1 = 0;
      if (*(int *)(param_1 + 0x4c) != 0) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x4c) + 8);
      }
      uVar4 = *(undefined4 *)(iVar1 + iVar2 * 4);
      iVar1 = FUN_4a136540(uVar4,0);
      if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a09f8d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      if (piVar3 == (int *)0x0) {
        iVar1 = FUN_4a0ff494();
        piVar3 = (int *)FUN_4a0986e4(*(undefined4 *)(iVar1 + 0x60),param_2);
        FUN_4a0b7a54(piVar3,0xd2,0xd1);
      }
      FUN_4a0a7c84(uVar4,0,piVar3);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < *(int *)(param_1 + 0x48));
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4a09f928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  iVar2 = (**(code **)(*piVar3 + 8))(piVar3);
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a09f948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a09f95c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 4))(piVar3);
  return;
}



// Address: 4a09f960

/* WARNING: Removing unreachable block (ram,0x4a0af070) */
/* WARNING: Removing unreachable block (ram,0x4a0af0a4) */
/* WARNING: Removing unreachable block (ram,0x4a0af078) */
/* WARNING: Removing unreachable block (ram,0x4a0af090) */
/* WARNING: Removing unreachable block (ram,0x4a0af094) */
/* WARNING: Removing unreachable block (ram,0x4a0af098) */
/* WARNING: Removing unreachable block (ram,0x4a0af09c) */
/* WARNING: Removing unreachable block (ram,0x4a0af0a0) */

void FUN_4a09f960(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  iVar1 = *(int *)(param_1 + 0x94);
  piVar3 = *(int **)(iVar1 + 0x7c);
  if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 8))(piVar3), iVar2 != 0)) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  *(undefined4 *)(iVar1 + 0x7c) = 0;
  *(undefined1 *)(iVar1 + 200) = 0;
  return;
}



// Address: 4a09f974

/* WARNING: Removing unreachable block (ram,0x4a1729d8) */
/* WARNING: Removing unreachable block (ram,0x4a1729ec) */
/* WARNING: Removing unreachable block (ram,0x4a1728bc) */
/* WARNING: Removing unreachable block (ram,0x4a1728ac) */
/* WARNING: Removing unreachable block (ram,0x4a1729e0) */
/* WARNING: Removing unreachable block (ram,0x4a17289c) */

ulonglong FUN_4a09f974(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  
  iVar1 = *(int *)(param_1 + 0x88);
  iVar6 = 0;
  if (iVar1 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(iVar1 + 8);
  }
  iVar9 = *(int *)(iVar9 + param_2 * 0x14 + 0xc);
  if (iVar9 == 0) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4 = *(uint **)(iVar9 + 8);
  }
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 8);
  }
  iVar1 = *(int *)(iVar1 + param_2 * 0x14 + 0xc);
  uVar5 = *puVar4;
  if (iVar1 != 0) {
    iVar6 = *(int *)(iVar1 + 8);
  }
  uVar2 = *(uint *)(iVar6 + 8);
  if (-1 < (int)(uVar2 ^ uVar5)) {
    if (uVar2 < uVar5) {
      uVar7 = uVar2 - uVar5 ^ 0x80000000;
      uVar2 = uVar2 - uVar7;
      uVar5 = uVar5 + uVar7;
    }
    uVar7 = uVar2 >> 0x17;
    uVar8 = uVar7 - (uVar5 >> 0x17);
    if ((uVar5 & 0x7f800000) != 0 && (uVar7 & 0xff) != 0xff) {
      uVar3 = uVar2 << 8 | 0x80000000;
      uVar5 = uVar5 << 8;
      uVar10 = uVar3 - ((uVar5 | 0x80000000) >> (uVar8 & 0xff));
      if ((int)uVar10 < 0) {
        bVar11 = (bool)((byte)(uVar10 >> 7) & 1);
        uVar2 = (uVar10 >> 8) + (uVar7 - 1) * 0x800000 + (uint)bVar11;
        if (!bVar11) {
          return CONCAT44(uVar5,uVar2) | 0x8000000000000000;
        }
        if ((uVar10 & 0x7f) != 0) {
          return CONCAT44(uVar5,uVar2) | 0x8000000000000000;
        }
      }
      else {
        bVar12 = (uVar7 & 0xfe) == 0;
        bVar11 = false;
        if (!bVar12) {
          uVar3 = uVar10 * 2;
          bVar11 = (int)uVar3 < 0;
          bVar12 = uVar3 == 0;
        }
        if (!bVar11) {
          if (bVar12) {
            if (uVar10 >> 7 != 0) {
              return CONCAT44(uVar5,(uVar2 >> 0x1f) << 0x1f) | 0x8000000000000000;
            }
            return (ulonglong)uVar5 << 0x20 | 0x8000000000000000;
          }
          if (uVar3 != 0) {
            uVar8 = uVar3;
            uVar10 = uVar7;
            if (uVar3 >> 0x17 == 0) {
              uVar8 = uVar3 << 8;
              uVar10 = uVar7 - 8;
              if ((uVar3 & 0xffffff) >> 0xf == 0) {
                uVar8 = uVar3 << 0x10;
                uVar10 = uVar7 - 0x10;
              }
            }
            if ((uVar8 & 0x78000000) != 0) {
              uVar8 = uVar8 >> 4;
              uVar10 = uVar10 + 4;
            }
            if ((uVar8 & 0x6000000) != 0) {
              uVar8 = uVar8 >> 2;
              uVar10 = uVar10 + 2;
            }
            uVar10 = uVar10 - ((uVar8 < 0x1000000) + 9);
            if (uVar8 >= 0x1000000) {
              uVar8 = uVar8 >> 1;
            }
            if ((uVar7 ^ uVar10) >> 8 != 0) {
              return CONCAT44(uVar5,(uVar2 >> 0x1f) << 0x1f) | 0x8000000000000000;
            }
            return CONCAT44(uVar5,uVar8 + uVar10 * 0x800000) | 0x8000000000000000;
          }
          return (ulonglong)uVar5 << 0x20 | 0x8000000000000000;
        }
        bVar11 = (bool)((byte)(uVar3 >> 7) & 1);
        uVar2 = ((int)uVar3 >> 8) + uVar7 * 0x800000 + (uint)bVar11;
        if (!bVar11) {
          return CONCAT44(uVar5,uVar2) | 0x8000000000000000;
        }
        if ((uVar10 & 0x3f) != 0) {
          return CONCAT44(uVar5,uVar2) | 0x8000000000000000;
        }
      }
      iVar1 = (uVar5 | 0x80000000) << (0x20 - uVar8 & 0xff);
      if (iVar1 == 0) {
        uVar2 = uVar2 & 0xfffffffe;
      }
      else {
        uVar2 = uVar2 - 1;
      }
      return CONCAT44(iVar1,uVar2);
    }
    if ((uVar7 & 0xff) != 0xff) {
      if ((uVar2 & 0x7f800000) == 0) {
        uVar2 = 0;
      }
      return CONCAT44(uVar5,uVar2);
    }
    uVar7 = uVar2 * 2;
    uVar8 = 0x4000002;
    if (uVar5 << 1 < 0xff000001 && uVar7 < 0xff000001) {
      if (uVar7 == uVar5 * 2) {
        if (-1 < (int)(uVar2 ^ uVar5)) {
          return CONCAT44(uVar5,DAT_4a172724);
        }
        return CONCAT44(uVar5,uVar2);
      }
      if (uVar7 != 0xff000000) {
        return CONCAT44(uVar5,uVar5) ^ 0x80000000;
      }
      return CONCAT44(uVar5,uVar2);
    }
LAB_4a171b9c:
    uVar8 = uVar8 & 0xf;
    if (uVar8 == 9) {
      return (ulonglong)uVar5 << 0x20;
    }
    if (uVar8 == 10) {
      return CONCAT44(uVar5,DAT_4a171ba4);
    }
    if (uVar8 != 8) {
      return CONCAT44(uVar5,DAT_4a171ba4);
    }
    return CONCAT44(uVar5,uVar5 & 0xff000000 | DAT_4a171ba4 >> 0x1d | (uVar5 & 0xffffff) << 3);
  }
  uVar5 = uVar5 ^ 0x80000000;
  iVar1 = uVar2 - uVar5;
  if (uVar2 < uVar5) {
    uVar2 = uVar2 - iVar1;
    uVar5 = uVar5 + iVar1;
  }
  uVar7 = uVar2 >> 0x17;
  uVar8 = uVar7 - (uVar5 >> 0x17);
  if ((uVar5 & 0x7f800000) == 0 || (uVar7 & 0xff) == 0xff) {
    if ((uVar7 & 0xff) != 0xff) {
      if ((uVar2 & 0x7f800000) == 0) {
        uVar2 = uVar2 & 0x80000000;
      }
      return CONCAT44(uVar5,uVar2);
    }
    uVar7 = uVar2 * 2;
    uVar8 = 0x4000001;
    if (uVar5 << 1 < 0xff000001 && uVar7 < 0xff000001) {
      if (uVar7 == uVar5 * 2) {
        if ((int)(uVar2 ^ uVar5) < 0) {
          return CONCAT44(uVar5,DAT_4a171b98);
        }
        return CONCAT44(uVar5,uVar2);
      }
      if (uVar7 != 0xff000000) {
        return CONCAT44(uVar5,uVar5);
      }
      return CONCAT44(uVar5,uVar2);
    }
    goto LAB_4a171b9c;
  }
  uVar3 = uVar2 << 8 | 0x80000000;
  uVar5 = uVar5 << 8;
  uVar2 = (uVar5 | 0x80000000) >> (uVar8 & 0xff);
  uVar10 = uVar3 + uVar2;
  if (CARRY4(uVar3,uVar2)) {
    uVar2 = uVar10 >> 1 | 0x80000000;
    bVar11 = (bool)((byte)(uVar2 >> 7) & 1);
    uVar2 = uVar2 >> 8;
    uVar7 = uVar2 + uVar7 * 0x800000 + (uint)bVar11;
    if (bVar11) {
      uVar2 = uVar10 & 0xff;
    }
    uVar3 = uVar7 * 2;
    if (uVar2 != 0) {
      if (uVar3 < 0xff000000) {
        return CONCAT44(uVar5,uVar7) | 0x8000000000000000;
      }
      goto LAB_4a171b0c;
    }
  }
  else {
    bVar11 = (bool)((byte)(uVar10 >> 7) & 1);
    uVar7 = (uVar10 >> 8) + (uVar7 - 1) * 0x800000 + (uint)bVar11;
    if (!bVar11) {
      return CONCAT44(uVar5,uVar7) | 0x8000000000000000;
    }
    uVar3 = uVar7 * 2;
    if ((uVar10 & 0x7f) != 0) {
      bVar11 = 0xfeffffff < uVar3;
    }
    if (!bVar11) {
      return CONCAT44(uVar5,uVar7) | 0x8000000000000000;
    }
  }
  iVar1 = (uVar5 | 0x80000000) << (0x20 - uVar8 & 0xff);
  if (iVar1 == 0) {
    uVar7 = uVar7 & 0xfffffffe;
  }
  if (uVar3 < 0xff000000) {
    return CONCAT44(iVar1,uVar7);
  }
LAB_4a171b0c:
  uVar5 = uVar7 + 0xa0000000 >> 0x17;
  return CONCAT44(uVar5,(uVar5 | 0xff) << 0x17) | 0xff00000000;
}



// Address: 4a09f9c8

/* WARNING: Removing unreachable block (ram,0x4a1729d8) */
/* WARNING: Removing unreachable block (ram,0x4a1729ec) */
/* WARNING: Removing unreachable block (ram,0x4a1728bc) */
/* WARNING: Removing unreachable block (ram,0x4a1728ac) */
/* WARNING: Removing unreachable block (ram,0x4a1729e0) */
/* WARNING: Removing unreachable block (ram,0x4a17289c) */

ulonglong FUN_4a09f9c8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  
  iVar1 = *(int *)(param_1 + 0x88);
  iVar5 = 0;
  if (iVar1 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(iVar1 + 8);
  }
  iVar8 = *(int *)(iVar8 + param_2 * 0x14 + 0xc);
  if (iVar8 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(iVar8 + 8);
  }
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 8);
  }
  iVar1 = *(int *)(iVar1 + param_2 * 0x14 + 0xc);
  uVar4 = *(uint *)(iVar8 + 4);
  if (iVar1 != 0) {
    iVar5 = *(int *)(iVar1 + 8);
  }
  uVar2 = *(uint *)(iVar5 + 0xc);
  if (-1 < (int)(uVar2 ^ uVar4)) {
    if (uVar2 < uVar4) {
      uVar6 = uVar2 - uVar4 ^ 0x80000000;
      uVar2 = uVar2 - uVar6;
      uVar4 = uVar4 + uVar6;
    }
    uVar6 = uVar2 >> 0x17;
    uVar7 = uVar6 - (uVar4 >> 0x17);
    if ((uVar4 & 0x7f800000) != 0 && (uVar6 & 0xff) != 0xff) {
      uVar3 = uVar2 << 8 | 0x80000000;
      uVar4 = uVar4 << 8;
      uVar9 = uVar3 - ((uVar4 | 0x80000000) >> (uVar7 & 0xff));
      if ((int)uVar9 < 0) {
        bVar10 = (bool)((byte)(uVar9 >> 7) & 1);
        uVar2 = (uVar9 >> 8) + (uVar6 - 1) * 0x800000 + (uint)bVar10;
        if (!bVar10) {
          return CONCAT44(uVar4,uVar2) | 0x8000000000000000;
        }
        if ((uVar9 & 0x7f) != 0) {
          return CONCAT44(uVar4,uVar2) | 0x8000000000000000;
        }
      }
      else {
        bVar11 = (uVar6 & 0xfe) == 0;
        bVar10 = false;
        if (!bVar11) {
          uVar3 = uVar9 * 2;
          bVar10 = (int)uVar3 < 0;
          bVar11 = uVar3 == 0;
        }
        if (!bVar10) {
          if (bVar11) {
            if (uVar9 >> 7 != 0) {
              return CONCAT44(uVar4,(uVar2 >> 0x1f) << 0x1f) | 0x8000000000000000;
            }
            return (ulonglong)uVar4 << 0x20 | 0x8000000000000000;
          }
          if (uVar3 != 0) {
            uVar7 = uVar3;
            uVar9 = uVar6;
            if (uVar3 >> 0x17 == 0) {
              uVar7 = uVar3 << 8;
              uVar9 = uVar6 - 8;
              if ((uVar3 & 0xffffff) >> 0xf == 0) {
                uVar7 = uVar3 << 0x10;
                uVar9 = uVar6 - 0x10;
              }
            }
            if ((uVar7 & 0x78000000) != 0) {
              uVar7 = uVar7 >> 4;
              uVar9 = uVar9 + 4;
            }
            if ((uVar7 & 0x6000000) != 0) {
              uVar7 = uVar7 >> 2;
              uVar9 = uVar9 + 2;
            }
            uVar9 = uVar9 - ((uVar7 < 0x1000000) + 9);
            if (uVar7 >= 0x1000000) {
              uVar7 = uVar7 >> 1;
            }
            if ((uVar6 ^ uVar9) >> 8 != 0) {
              return CONCAT44(uVar4,(uVar2 >> 0x1f) << 0x1f) | 0x8000000000000000;
            }
            return CONCAT44(uVar4,uVar7 + uVar9 * 0x800000) | 0x8000000000000000;
          }
          return (ulonglong)uVar4 << 0x20 | 0x8000000000000000;
        }
        bVar10 = (bool)((byte)(uVar3 >> 7) & 1);
        uVar2 = ((int)uVar3 >> 8) + uVar6 * 0x800000 + (uint)bVar10;
        if (!bVar10) {
          return CONCAT44(uVar4,uVar2) | 0x8000000000000000;
        }
        if ((uVar9 & 0x3f) != 0) {
          return CONCAT44(uVar4,uVar2) | 0x8000000000000000;
        }
      }
      iVar1 = (uVar4 | 0x80000000) << (0x20 - uVar7 & 0xff);
      if (iVar1 == 0) {
        uVar2 = uVar2 & 0xfffffffe;
      }
      else {
        uVar2 = uVar2 - 1;
      }
      return CONCAT44(iVar1,uVar2);
    }
    if ((uVar6 & 0xff) != 0xff) {
      if ((uVar2 & 0x7f800000) == 0) {
        uVar2 = 0;
      }
      return CONCAT44(uVar4,uVar2);
    }
    uVar6 = uVar2 * 2;
    uVar7 = 0x4000002;
    if (uVar4 << 1 < 0xff000001 && uVar6 < 0xff000001) {
      if (uVar6 == uVar4 * 2) {
        if (-1 < (int)(uVar2 ^ uVar4)) {
          return CONCAT44(uVar4,DAT_4a172724);
        }
        return CONCAT44(uVar4,uVar2);
      }
      if (uVar6 != 0xff000000) {
        return CONCAT44(uVar4,uVar4) ^ 0x80000000;
      }
      return CONCAT44(uVar4,uVar2);
    }
LAB_4a171b9c:
    uVar7 = uVar7 & 0xf;
    if (uVar7 == 9) {
      return (ulonglong)uVar4 << 0x20;
    }
    if (uVar7 == 10) {
      return CONCAT44(uVar4,DAT_4a171ba4);
    }
    if (uVar7 != 8) {
      return CONCAT44(uVar4,DAT_4a171ba4);
    }
    return CONCAT44(uVar4,uVar4 & 0xff000000 | DAT_4a171ba4 >> 0x1d | (uVar4 & 0xffffff) << 3);
  }
  uVar4 = uVar4 ^ 0x80000000;
  iVar1 = uVar2 - uVar4;
  if (uVar2 < uVar4) {
    uVar2 = uVar2 - iVar1;
    uVar4 = uVar4 + iVar1;
  }
  uVar6 = uVar2 >> 0x17;
  uVar7 = uVar6 - (uVar4 >> 0x17);
  if ((uVar4 & 0x7f800000) == 0 || (uVar6 & 0xff) == 0xff) {
    if ((uVar6 & 0xff) != 0xff) {
      if ((uVar2 & 0x7f800000) == 0) {
        uVar2 = uVar2 & 0x80000000;
      }
      return CONCAT44(uVar4,uVar2);
    }
    uVar6 = uVar2 * 2;
    uVar7 = 0x4000001;
    if (uVar4 << 1 < 0xff000001 && uVar6 < 0xff000001) {
      if (uVar6 == uVar4 * 2) {
        if ((int)(uVar2 ^ uVar4) < 0) {
          return CONCAT44(uVar4,DAT_4a171b98);
        }
        return CONCAT44(uVar4,uVar2);
      }
      if (uVar6 != 0xff000000) {
        return CONCAT44(uVar4,uVar4);
      }
      return CONCAT44(uVar4,uVar2);
    }
    goto LAB_4a171b9c;
  }
  uVar3 = uVar2 << 8 | 0x80000000;
  uVar4 = uVar4 << 8;
  uVar2 = (uVar4 | 0x80000000) >> (uVar7 & 0xff);
  uVar9 = uVar3 + uVar2;
  if (CARRY4(uVar3,uVar2)) {
    uVar2 = uVar9 >> 1 | 0x80000000;
    bVar10 = (bool)((byte)(uVar2 >> 7) & 1);
    uVar2 = uVar2 >> 8;
    uVar6 = uVar2 + uVar6 * 0x800000 + (uint)bVar10;
    if (bVar10) {
      uVar2 = uVar9 & 0xff;
    }
    uVar3 = uVar6 * 2;
    if (uVar2 != 0) {
      if (uVar3 < 0xff000000) {
        return CONCAT44(uVar4,uVar6) | 0x8000000000000000;
      }
      goto LAB_4a171b0c;
    }
  }
  else {
    bVar10 = (bool)((byte)(uVar9 >> 7) & 1);
    uVar6 = (uVar9 >> 8) + (uVar6 - 1) * 0x800000 + (uint)bVar10;
    if (!bVar10) {
      return CONCAT44(uVar4,uVar6) | 0x8000000000000000;
    }
    uVar3 = uVar6 * 2;
    if ((uVar9 & 0x7f) != 0) {
      bVar10 = 0xfeffffff < uVar3;
    }
    if (!bVar10) {
      return CONCAT44(uVar4,uVar6) | 0x8000000000000000;
    }
  }
  iVar1 = (uVar4 | 0x80000000) << (0x20 - uVar7 & 0xff);
  if (iVar1 == 0) {
    uVar6 = uVar6 & 0xfffffffe;
  }
  if (uVar3 < 0xff000000) {
    return CONCAT44(iVar1,uVar6);
  }
LAB_4a171b0c:
  uVar4 = uVar6 + 0xa0000000 >> 0x17;
  return CONCAT44(uVar4,(uVar4 | 0xff) << 0x17) | 0xff00000000;
}



// Address: 4a09fa1c

void FUN_4a09fa1c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x48) < 1) {
    return;
  }
  do {
    if (*(int *)(param_1 + 0x24) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 8);
    }
    if (*(short *)(iVar1 + iVar2 * 2) == param_2) {
      if (*(int *)(param_1 + 0x4c) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0x4c) + 8);
      }
      FUN_4a0a7c84(*(undefined4 *)(iVar1 + iVar2 * 4),0);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < *(int *)(param_1 + 0x48));
  return;
}



// Address: 4a09fa98

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a09fa98(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar19;
  undefined *apuStack_54 [2];
  int iStack_4c;
  int iStack_48;
  int iStack_40;
  undefined *apuStack_3c [2];
  int iStack_34;
  int iStack_30;
  int iStack_28;
  
  puVar14 = (undefined4 *)0x0;
  if (param_4 != 0) {
    if (*(int *)(param_2 + 0xc) == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = *(undefined4 **)(*(int *)(param_2 + 0xc) + 8);
    }
    *puVar2 = 0;
    if (*(int *)(param_2 + 0xc) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(param_2 + 0xc) + 8);
    }
    *(undefined4 *)(iVar3 + 4) = 0;
    if (*(int *)(param_2 + 0xc) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(param_2 + 0xc) + 8);
    }
    *(undefined4 *)(iVar3 + 8) = 0;
    if (*(int *)(param_2 + 0xc) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(param_2 + 0xc) + 8);
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  if (param_3 == 0) {
    return;
  }
  iVar3 = FUN_4a165910(param_3);
  if (iVar3 != 0) {
    iVar8 = 0;
    iVar11 = 0;
    if (*(int *)(iVar3 + 0xdc) != 0) {
      iVar11 = *(int *)(*(int *)(iVar3 + 0xdc) + 0x10);
    }
    if (0 < iVar11) {
      do {
        FUN_4a09fa98(param_1,param_2,
                     *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0xdc) + 0x14) + iVar8 * 4),0);
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar11);
    }
  }
  iVar3 = FUN_4a165858(param_3);
  if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a09fb7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  iVar3 = FUN_4a13b5e4();
  iStack_28 = *(int *)(iVar3 + 0x28);
  FUN_4a16b934(apuStack_3c,4);
  iVar3 = FUN_4a13912c(iVar3,apuStack_3c);
  iStack_40 = *(int *)(iVar3 + 0x2c);
  uVar15 = 0;
  uVar9 = 0;
  uVar17 = 0;
  uVar12 = 0;
  FUN_4a16b934(apuStack_54,iStack_40 * iStack_28);
  FUN_4a138e28(iVar3,0,iStack_28,apuStack_54);
  iVar3 = 0;
  bVar19 = iStack_30 != 0;
  if (bVar19) {
    puVar14 = *(undefined4 **)(iStack_30 + 8);
  }
  uVar4 = *puVar14;
  if (bVar19) {
    iVar11 = *(int *)(iStack_30 + 8);
  }
  else {
    iVar11 = 0;
  }
  uVar5 = *(undefined4 *)(iVar11 + 4);
  if (bVar19) {
    iVar11 = *(int *)(iStack_30 + 8);
  }
  else {
    iVar11 = 0;
  }
  uVar6 = *(undefined4 *)(iVar11 + 8);
  uVar10 = uVar9;
  uVar13 = uVar12;
  uVar16 = uVar15;
  uVar18 = uVar17;
  if (0 < iStack_28) {
    do {
      iVar8 = iVar3 * iStack_40;
      iVar11 = 0;
      if (iStack_48 != 0) {
        iVar11 = *(int *)(iStack_48 + 8);
      }
      uVar9 = FUN_4a17211c(uVar4,*(undefined4 *)(iVar11 + iVar8 * 4));
      uVar9 = FUN_4a171a94(uVar9,uVar5);
      iVar11 = 0;
      if (iStack_48 != 0) {
        iVar11 = *(int *)(iStack_48 + 8);
      }
      uVar12 = FUN_4a17211c(uVar4,*(undefined4 *)(iVar11 + (iVar8 + 1) * 4));
      uVar7 = FUN_4a171a94(uVar12,uVar6);
      bVar19 = true;
      uVar12 = uVar7;
      uVar15 = uVar9;
      uVar17 = uVar7;
      if (iVar3 != 0) {
        FUN_4a1720a0(uVar16,uVar9);
        if (bVar19) {
          uVar16 = uVar9;
        }
        FUN_4a1720a0(uVar18,uVar7);
        if (bVar19) {
          uVar18 = uVar7;
        }
        FUN_4a172458(uVar10,uVar9);
        if (bVar19) {
          uVar10 = uVar9;
        }
        FUN_4a172458(uVar13,uVar7);
        uVar9 = uVar10;
        uVar12 = uVar13;
        uVar15 = uVar16;
        uVar17 = uVar18;
        if (bVar19) {
          uVar12 = uVar7;
        }
      }
      iVar3 = iVar3 + 1;
      uVar10 = uVar9;
      uVar13 = uVar12;
      uVar16 = uVar15;
      uVar18 = uVar17;
    } while (iVar3 < iStack_28);
  }
  iVar3 = 0;
  bVar19 = true;
  puVar14 = (undefined4 *)0x0;
  if (*(int *)(param_2 + 0xc) != 0) {
    puVar14 = *(undefined4 **)(*(int *)(param_2 + 0xc) + 8);
  }
  uVar4 = *puVar14;
  FUN_4a1720a0(uVar4,uVar15);
  if (!bVar19) {
    uVar15 = uVar4;
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    puVar14 = (undefined4 *)0x0;
  }
  else {
    puVar14 = *(undefined4 **)(*(int *)(param_2 + 0xc) + 8);
  }
  *puVar14 = uVar15;
  bVar19 = true;
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(*(int *)(param_2 + 0xc) + 8);
  }
  uVar15 = *(undefined4 *)(iVar11 + 4);
  FUN_4a1720a0(uVar15,uVar17);
  if (!bVar19) {
    uVar17 = uVar15;
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(*(int *)(param_2 + 0xc) + 8);
  }
  *(undefined4 *)(iVar11 + 4) = uVar17;
  bVar19 = true;
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(*(int *)(param_2 + 0xc) + 8);
  }
  uVar15 = *(undefined4 *)(iVar11 + 8);
  FUN_4a172458(uVar15,uVar9);
  if (!bVar19) {
    uVar9 = uVar15;
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(*(int *)(param_2 + 0xc) + 8);
  }
  *(undefined4 *)(iVar11 + 8) = uVar9;
  bVar19 = true;
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(*(int *)(param_2 + 0xc) + 8);
  }
  uVar9 = *(undefined4 *)(iVar11 + 0xc);
  FUN_4a172458(uVar9,uVar12);
  puVar1 = PTR_PTR_4a09fe74;
  if (!bVar19) {
    uVar12 = uVar9;
  }
  if (*(int *)(param_2 + 0xc) != 0) {
    iVar3 = *(int *)(*(int *)(param_2 + 0xc) + 8);
  }
  *(undefined4 *)(iVar3 + 0xc) = uVar12;
  apuStack_54[0] = puVar1;
  iVar3 = FUN_4a0bcc84(apuStack_54);
  if (iVar3 != 0) {
    iVar11 = 0;
    if (0 < iStack_4c) {
      do {
        iVar11 = iVar11 + 1;
      } while (iVar11 < iStack_4c);
      if (iVar3 == 0) goto LAB_4a09fe18;
    }
    FUN_4a14f21c();
  }
LAB_4a09fe18:
  FUN_4a0c6bf4(apuStack_54);
  apuStack_3c[0] = puVar1;
  iVar3 = FUN_4a0bcc84(apuStack_3c);
  if (iVar3 != 0) {
    iVar11 = 0;
    if (0 < iStack_34) {
      do {
        iVar11 = iVar11 + 1;
      } while (iVar11 < iStack_34);
      if (iVar3 == 0) goto LAB_4a09fe60;
    }
    FUN_4a14f21c();
  }
LAB_4a09fe60:
  FUN_4a0c6bf4(apuStack_3c);
  return;
}



// Address: 4a09fe78

void FUN_4a09fe78(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xcc) = param_2;
  return;
}



// Address: 4a09fe80

void FUN_4a09fe80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_6c [72];
  
  uVar1 = FUN_4a171fac(*(undefined4 *)(param_1 + 0xb8));
  uVar1 = FUN_4a17295c(uVar1,0xffffffff);
  uVar2 = FUN_4a171fac(*(undefined4 *)(param_1 + 0xbc));
  uVar2 = FUN_4a17295c(uVar2,0xffffffff);
  FUN_4a0b8a1c(auStack_6c);
  uVar3 = FUN_4a1725c0(uVar2,param_3);
  uVar4 = FUN_4a1725c0(uVar1,param_2);
  FUN_4a0b7e44(auStack_6c,uVar4,uVar3,0);
  FUN_4a0b88fc(auStack_6c,param_4,param_5,0x3f800000);
  uVar2 = FUN_4a1725c0(param_3,uVar2);
  uVar1 = FUN_4a1725c0(param_2,uVar1);
  FUN_4a0b7e44(auStack_6c,uVar1,uVar2,0);
  FUN_4a0af058(*(undefined4 *)(param_1 + 0x94),auStack_6c);
  FUN_4a0c6bf4(auStack_6c);
  return;
}



// Address: 4a09ff60

void FUN_4a09ff60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar1 = FUN_4a09f974(param_1,param_2);
  uVar2 = FUN_4a09f974(param_1,param_3);
  uVar3 = FUN_4a09f974(param_1,param_4);
  uVar4 = FUN_4a09f9c8(param_1,param_2);
  uVar5 = FUN_4a09f9c8(param_1,param_5);
  uVar6 = FUN_4a09f9c8(param_1,param_8);
  uVar7 = FUN_4a17295c(uVar1,0xffffffff);
  uVar7 = FUN_4a171a94(uVar7,param_11);
  uVar8 = FUN_4a1725c0(param_13,uVar1);
  uVar8 = FUN_4a1725c0(uVar8,uVar3);
  uVar9 = FUN_4a17295c(uVar8,0xffffffff);
  uVar1 = FUN_4a171a94(param_11,uVar1);
  uVar1 = FUN_4a171a94(uVar1,uVar9);
  uVar2 = FUN_4a171bb8(uVar8,uVar2);
  uVar3 = FUN_4a17295c(uVar3,0xffffffff);
  uVar8 = FUN_4a171a94(param_11,param_13);
  uVar3 = FUN_4a1725c0(uVar8,uVar3);
  uVar8 = FUN_4a17295c(uVar4,0xffffffff);
  uVar8 = FUN_4a171a94(uVar8,param_12);
  uVar9 = FUN_4a1725c0(param_14,uVar4);
  uVar9 = FUN_4a1725c0(uVar9,uVar6);
  uVar10 = FUN_4a17295c(uVar9,0xffffffff);
  uVar4 = FUN_4a171a94(param_12,uVar4);
  uVar4 = FUN_4a171a94(uVar4,uVar10);
  uVar5 = FUN_4a171bb8(uVar9,uVar5);
  uVar6 = FUN_4a17295c(uVar6,0xffffffff);
  uVar9 = FUN_4a171a94(param_12,param_14);
  uVar6 = FUN_4a1725c0(uVar9,uVar6);
  if ((*(int *)PTR_DAT_4a0a02b4 == 0) || (*(int *)(param_1 + 0xc0) != 0)) {
    FUN_4a09f664(param_1,param_2,uVar7,uVar8,param_15,0x3f800000,0x3f800000,0);
  }
  else {
    FUN_4a09f664(param_1,param_2,uVar7,uVar8,param_15,DAT_4a0a02b8,0x3f800000,0);
  }
  FUN_4a09f664(param_1,param_3,uVar1,uVar8,param_15,uVar2,0x3f800000,0);
  FUN_4a09f664(param_1,param_4,uVar3,uVar8,param_15,0x3f800000,0x3f800000,0);
  FUN_4a09f664(param_1,param_5,uVar7,uVar4,param_15,0x3f800000,uVar5,0);
  FUN_4a09f664(param_1,param_6,uVar1,uVar4,param_15,uVar2,uVar5,0);
  FUN_4a09f664(param_1,param_7,uVar3,uVar4,param_15,0x3f800000,uVar5,0);
  FUN_4a09f664(param_1,param_8,uVar7,uVar6,param_15,0x3f800000,0x3f800000,0);
  FUN_4a09f664(param_1,param_9,uVar1,uVar6,param_15,uVar2,0x3f800000,0);
  FUN_4a09f664(param_1,param_10,uVar3,uVar6,param_15,0x3f800000,0x3f800000,0);
  return;
}



// Address: 4a0a02bc

void FUN_4a0a02bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = FUN_4a09f974(param_1,param_2);
  uVar2 = FUN_4a09f974(param_1,param_3);
  uVar3 = FUN_4a09f974(param_1,param_4);
  if (*(int *)PTR_DAT_4a0a0508 == 0) {
    uVar4 = FUN_4a1725c0(param_7,uVar1);
    iVar5 = FUN_4a1725c0(uVar4,uVar3);
  }
  else {
    uVar4 = FUN_4a1725c0(param_7,uVar1);
    uVar4 = FUN_4a1725c0(uVar4,uVar3);
    uVar4 = FUN_4a171a94(uVar4,param_10);
    iVar5 = FUN_4a171a94(uVar4,param_11);
  }
  if (0x3f7fffff < iVar5) {
    uVar4 = FUN_4a17295c(param_7,0xffffffff);
    uVar4 = FUN_4a1724e0(uVar4,param_5);
    uVar6 = FUN_4a17295c(uVar1,0xffffffff);
    uVar6 = FUN_4a171a94(uVar6,uVar4);
    uVar7 = FUN_4a17295c(iVar5,0xffffffff);
    uVar1 = FUN_4a171a94(uVar4,uVar1);
    uVar1 = FUN_4a171a94(uVar1,uVar7);
    uVar2 = FUN_4a171bb8(iVar5,uVar2);
    uVar3 = FUN_4a17295c(uVar3,0xffffffff);
    uVar4 = FUN_4a171a94(uVar4,param_7);
    uVar3 = FUN_4a1725c0(uVar4,uVar3);
    FUN_4a09f664(param_1,param_2,uVar6,param_6,param_8,0x3f800000,param_9,0);
    uVar1 = FUN_4a1725c0(uVar1,param_10);
    FUN_4a09f664(param_1,param_3,uVar1,param_6,param_8,uVar2,param_9,0);
    FUN_4a09f664(param_1,param_4,uVar3,param_6,param_8,0x3f800000,param_9,0);
    return;
  }
  uVar1 = FUN_4a17295c(uVar1,0xffffffff);
  uVar1 = FUN_4a1724e0(uVar1,param_5);
  uVar2 = FUN_4a17295c(uVar3,0xffffffff);
  uVar2 = FUN_4a171a94(uVar2,param_5);
  FUN_4a09f664(param_1,param_2,uVar1,param_6,param_8,0x3f800000,param_9,0);
  uVar1 = FUN_4a1725c0(uVar2,param_10);
  FUN_4a09f664(param_1,param_4,uVar1,param_6,param_8,0x3f800000,param_9,0);
  return;
}



// Address: 4a0a050c

void FUN_4a0a050c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = FUN_4a09f9c8();
  uVar2 = FUN_4a09f9c8(param_1,param_3);
  uVar3 = FUN_4a09f9c8(param_1,param_4);
  uVar4 = FUN_4a1725c0(param_7,uVar1);
  iVar5 = FUN_4a1725c0(uVar4,uVar3);
  if (0x3f7fffff < iVar5) {
    uVar4 = FUN_4a17295c(param_7,0xffffffff);
    uVar4 = FUN_4a1724e0(uVar4,param_6);
    uVar3 = FUN_4a17295c(uVar3,0xffffffff);
    uVar6 = FUN_4a171a94(uVar4,param_7);
    uVar3 = FUN_4a1725c0(uVar6,uVar3);
    uVar6 = FUN_4a17295c(iVar5,0xffffffff);
    uVar7 = FUN_4a171a94(uVar4,uVar1);
    uVar6 = FUN_4a171a94(uVar7,uVar6);
    uVar2 = FUN_4a171bb8(iVar5,uVar2);
    uVar1 = FUN_4a17295c(uVar1,0xffffffff);
    uVar1 = FUN_4a171a94(uVar1,uVar4);
    FUN_4a09f664(param_1,param_2,param_5,uVar1,param_8,0x3f800000,0x3f800000,0);
    FUN_4a09f664(param_1,param_3,param_5,uVar6,param_8,0x3f800000,uVar2,0);
    FUN_4a09f664(param_1,param_4,param_5,uVar3,param_8,0x3f800000,0x3f800000,0);
    return;
  }
  uVar1 = FUN_4a17295c(uVar1,0xffffffff);
  uVar1 = FUN_4a1724e0(uVar1,param_6);
  uVar2 = FUN_4a17295c(uVar3,0xffffffff);
  uVar2 = FUN_4a171a94(uVar2,param_6);
  FUN_4a09f664(param_1,param_2,param_5,uVar1,param_8,0x3f800000,0x3f800000,0);
  FUN_4a09f664(param_1,param_4,param_5,uVar2,param_8,0x3f800000,0x3f800000,0);
  return;
}



// Address: 4a0a0714

void FUN_4a0a0714(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = FUN_4a165910();
  if (iVar1 != 0) {
    iVar2 = 0;
    iVar3 = 0;
    if (*(int *)(iVar1 + 0xdc) != 0) {
      iVar3 = *(int *)(*(int *)(iVar1 + 0xdc) + 0x10);
    }
    if (0 < iVar3) {
      do {
        FUN_4a0a0714(*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0xdc) + 0x14) + iVar2 * 4),param_2,
                     param_3);
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
    }
  }
  iVar1 = FUN_4a165858(param_1);
  if (iVar1 != 0) {
    FUN_4a0b45d8(iVar1,param_2);
    iVar1 = FUN_4a13b4a0(iVar1,0);
    *(undefined4 *)(iVar1 + 0x28) = param_3;
    return;
  }
  return;
}



// Address: 4a0a07ac

void FUN_4a0a07ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_4a17295c(param_5,0xffffffff);
  uVar1 = FUN_4a171a94(uVar1,param_3);
  uVar2 = FUN_4a17295c(param_6,0xffffffff);
  uVar2 = FUN_4a171a94(uVar2,param_4);
  uVar3 = FUN_4a09f974(param_1,param_2);
  uVar4 = FUN_4a09f9c8(param_1,param_2);
  uVar3 = FUN_4a171bb8(param_5,uVar3);
  uVar4 = FUN_4a171bb8(param_6,uVar4);
  FUN_4a09f664(param_1,param_2,uVar1,uVar2,param_7,uVar3,uVar4,param_8);
  return;
}



// Address: 4a0a086c

void FUN_4a0a086c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = FUN_4a09f9c8(param_1,param_2);
  uVar2 = FUN_4a09f9c8(param_1,param_3);
  uVar3 = FUN_4a09f9c8(param_1,param_4);
  uVar4 = FUN_4a1725c0(param_7,uVar1);
  iVar5 = FUN_4a1725c0(uVar4,uVar3);
  if (0x3f7fffff < iVar5) {
    uVar4 = FUN_4a17295c(param_7,0xffffffff);
    uVar4 = FUN_4a1724e0(uVar4,param_6);
    uVar3 = FUN_4a17295c(uVar3,0xffffffff);
    uVar6 = FUN_4a171a94(uVar4,param_7);
    uVar3 = FUN_4a1725c0(uVar6,uVar3);
    uVar6 = FUN_4a17295c(iVar5,0xffffffff);
    uVar7 = FUN_4a171a94(uVar4,uVar1);
    uVar6 = FUN_4a171a94(uVar7,uVar6);
    uVar2 = FUN_4a171bb8(iVar5,uVar2);
    uVar1 = FUN_4a17295c(uVar1,0xffffffff);
    uVar1 = FUN_4a171a94(uVar1,uVar4);
    uVar4 = FUN_4a09f974(param_1,param_3);
    uVar4 = FUN_4a171bb8(param_8,uVar4);
    FUN_4a09f664(param_1,param_2,param_5,uVar1,param_9,uVar4,0x3f800000,0);
    uVar1 = FUN_4a09f974(param_1,param_3);
    uVar1 = FUN_4a171bb8(param_8,uVar1);
    FUN_4a09f664(param_1,param_3,param_5,uVar6,param_9,uVar1,uVar2,0);
    uVar1 = FUN_4a09f974(param_1,param_3);
    uVar1 = FUN_4a171bb8(param_8,uVar1);
    FUN_4a09f664(param_1,param_4,param_5,uVar3,param_9,uVar1,0x3f800000,0);
    return;
  }
  uVar1 = FUN_4a17295c(uVar1,0xffffffff);
  uVar1 = FUN_4a1724e0(uVar1,param_6);
  uVar2 = FUN_4a17295c(uVar3,0xffffffff);
  uVar2 = FUN_4a171a94(uVar2,param_6);
  FUN_4a09f664(param_1,param_2,param_5,uVar1,param_9,0x3f800000,0x3f800000,0);
  FUN_4a09f664(param_1,param_4,param_5,uVar2,param_9,0x3f800000,0x3f800000,0);
  return;
}



// Address: 4a0a0aac

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0a0aac(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = FUN_4a165910();
  if (iVar1 != 0) {
    iVar3 = 0;
    iVar4 = 0;
    if (*(int *)(iVar1 + 0xdc) != 0) {
      iVar4 = *(int *)(*(int *)(iVar1 + 0xdc) + 0x10);
    }
    if (0 < iVar4) {
      do {
        FUN_4a0a0aac(*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0xdc) + 0x14) + iVar3 * 4));
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
    }
  }
  iVar1 = FUN_4a165858(param_1);
  if (iVar1 != 0) {
    iVar4 = FUN_4a13b5dc(iVar1);
    iVar3 = 0;
    if (0 < iVar4) {
      do {
        FUN_4a13b4a0(iVar1,iVar3);
        uVar2 = FUN_4a0b75a8();
        FUN_4a0b3bc8(iVar1,iVar3,uVar2);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a0a0b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a0a0b5c

void FUN_4a0a0b5c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  
  uVar1 = FUN_4a09f974(param_1,param_2);
  uVar2 = FUN_4a09f974(param_1,param_3);
  uVar3 = FUN_4a09f974(param_1,param_4);
  uVar4 = FUN_4a1725c0(param_7,uVar1);
  iVar5 = FUN_4a1725c0(uVar4,uVar3);
  if (0x3f7fffff < iVar5) {
    uVar4 = FUN_4a17295c(param_7,0xffffffff);
    uVar4 = FUN_4a1724e0(uVar4,param_5);
    uVar6 = FUN_4a17295c(uVar1,0xffffffff);
    uVar6 = FUN_4a171a94(uVar6,uVar4);
    uVar7 = FUN_4a17295c(iVar5,0xffffffff);
    uVar1 = FUN_4a171a94(uVar4,uVar1);
    uVar1 = FUN_4a171a94(uVar1,uVar7);
    uVar8 = FUN_4a171bb8(iVar5,uVar2);
    uVar2 = FUN_4a17295c(uVar3,0xffffffff);
    uVar3 = FUN_4a171a94(uVar4,param_7);
    uVar2 = FUN_4a1725c0(uVar3,uVar2);
    FUN_4a09f664(param_1,param_2,uVar6,param_6,param_8,0xbf800000,param_9,0);
    FUN_4a09f664(param_1,param_3,uVar1,param_6,param_8,uVar8 ^ 0x80000000,param_9,0);
    FUN_4a09f664(param_1,param_4,uVar2,param_6,param_8,0xbf800000,param_9,0);
    return;
  }
  uVar1 = FUN_4a17295c(uVar1,0xffffffff);
  uVar1 = FUN_4a1724e0(uVar1,param_5);
  uVar2 = FUN_4a17295c(uVar3,0xffffffff);
  uVar2 = FUN_4a171a94(uVar2,param_5);
  FUN_4a09f664(param_1,param_2,uVar1,param_6,param_8,0xbf800000,param_9,0);
  FUN_4a09f664(param_1,param_4,uVar2,param_6,param_8,0xbf800000,param_9,0);
  return;
}



// Address: 4a0a0d74

void FUN_4a0a0d74(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined *apuStack_3c [2];
  int iStack_34;
  int *piStack_30;
  undefined *puStack_28;
  
  piVar9 = (int *)0x0;
  if (*(int *)(param_1 + 0x60) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x60) + 8);
  }
  if (*(int *)(iVar2 + param_2 * 0x14 + 8) == param_3) {
    return;
  }
  piVar3 = (int *)FUN_4a0c6bc0(apuStack_3c);
  puStack_28 = PTR_PTR_4a0a1138;
  piVar3[2] = 0;
  piVar3[3] = 0;
  *piVar3 = (int)puStack_28;
  if (0 < param_3) {
    iVar2 = FUN_4a15e080(param_3 << 2);
    if (iVar2 == 0) {
      iVar2 = FUN_4a1669a8();
    }
    iVar7 = 0;
    do {
      *(undefined4 *)(iVar2 + iVar7 * 4) = 0;
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_3);
    thunk_FUN_4a161570(0x18);
    puVar4 = (undefined4 *)FUN_4a0c0628();
    puVar4[3] = 4;
    puVar4[4] = param_3;
    puVar1 = PTR_PTR_4a0a113c;
    *puVar4 = PTR_PTR_4a0a113c;
    puVar4[2] = iVar2;
    *(undefined1 *)(puVar4 + 5) = 1;
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)(puVar1 + 0xc))(puVar4);
    }
    (**(code **)(*piVar3 + 0x1c))(piVar3);
    piVar3[2] = param_3;
    piVar3[3] = (int)puVar4;
  }
  iVar2 = 0;
  piVar3 = piVar9;
  if (*(int *)(param_1 + 0x60) != 0) {
    piVar3 = *(int **)(*(int *)(param_1 + 0x60) + 8);
  }
  if (0 < piVar3[param_2 * 5 + 2]) {
    do {
      piVar3 = piVar9;
      if (*(int *)(param_1 + 0x60) != 0) {
        piVar3 = *(int **)(*(int *)(param_1 + 0x60) + 8);
      }
      piVar8 = piVar9;
      if (piVar3[param_2 * 5 + 3] != 0) {
        piVar8 = *(int **)(piVar3[param_2 * 5 + 3] + 8);
      }
      piVar3 = piVar9;
      if (piStack_30 != (int *)0x0) {
        piVar3 = (int *)piStack_30[2];
      }
      piVar3[iVar2] = piVar8[iVar2];
      iVar2 = iVar2 + 1;
      piVar3 = piVar9;
      if (*(int *)(param_1 + 0x60) != 0) {
        piVar3 = *(int **)(*(int *)(param_1 + 0x60) + 8);
      }
    } while (iVar2 < piVar3[param_2 * 5 + 2]);
  }
  piVar3 = piVar9;
  if (*(int *)(param_1 + 0x60) != 0) {
    piVar3 = *(int **)(*(int *)(param_1 + 0x60) + 8);
  }
  if (piVar3[param_2 * 5 + 3] != 0) {
    piVar9 = *(int **)(piVar3[param_2 * 5 + 3] + 8);
  }
  piVar9 = (int *)*piVar9;
  if (piVar9 != (int *)0x0) {
    (**(code **)(*piVar9 + 0xc))(piVar9);
  }
  iVar2 = 0;
  if (*(int *)(param_1 + 0x60) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x60) + 8);
  }
  for (iVar2 = *(int *)(iVar2 + param_2 * 0x14 + 8); iVar2 < param_3; iVar2 = iVar2 + 1) {
    uVar5 = FUN_4a0b75a8(piVar9);
    iVar7 = 0;
    if (piStack_30 != (int *)0x0) {
      iVar7 = piStack_30[2];
    }
    *(undefined4 *)(iVar7 + iVar2 * 4) = uVar5;
    iVar7 = 0;
    if (piStack_30 != (int *)0x0) {
      iVar7 = piStack_30[2];
    }
    piVar3 = *(int **)(iVar7 + iVar2 * 4);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0xc))();
    }
    iVar7 = 0;
    if (piStack_30 != (int *)0x0) {
      iVar7 = piStack_30[2];
    }
    iVar7 = *(int *)(iVar7 + iVar2 * 4);
    if (iVar7 != 0) {
      iVar6 = FUN_4a165910(iVar7);
      if (iVar6 != 0) {
        iVar10 = 0;
        iVar11 = 0;
        if (*(int *)(iVar6 + 0xdc) != 0) {
          iVar11 = *(int *)(*(int *)(iVar6 + 0xdc) + 0x10);
        }
        if (0 < iVar11) {
          do {
            FUN_4a0a0aac(*(undefined4 *)(*(int *)(*(int *)(iVar6 + 0xdc) + 0x14) + iVar10 * 4));
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar11);
        }
      }
      iVar7 = FUN_4a165858(iVar7);
      if (iVar7 != 0) {
        iVar6 = FUN_4a13b5dc(iVar7);
        iVar11 = 0;
        if (0 < iVar6) {
          do {
            FUN_4a13b4a0(iVar7,iVar11);
            uVar5 = FUN_4a0b75a8();
            FUN_4a0b3bc8(iVar7,iVar11,uVar5);
            iVar11 = iVar11 + 1;
          } while (iVar11 < iVar6);
        }
      }
    }
  }
  if ((piVar9 != (int *)0x0) && (iVar2 = (**(code **)(*piVar9 + 8))(piVar9), iVar2 != 0)) {
    (**(code **)(*piVar9 + 4))(piVar9);
  }
  iVar7 = iStack_34;
  iVar2 = 0;
  if (*(int *)(param_1 + 0x60) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x60) + 8);
  }
  piVar9 = (int *)(iVar2 + param_2 * 0x14);
  if (piStack_30 != (int *)0x0) {
    (**(code **)(*piStack_30 + 0xc))(piStack_30);
  }
  (**(code **)(*piVar9 + 0x1c))(piVar9);
  piVar9[2] = iVar7;
  piVar9[3] = (int)piStack_30;
  apuStack_3c[0] = puStack_28;
  iVar2 = FUN_4a0bcc84(apuStack_3c);
  if (iVar2 != 0) {
    iVar7 = 0;
    if (0 < iStack_34) {
      do {
        iVar7 = iVar7 + 1;
      } while (iVar7 < iStack_34);
      if (iVar2 == 0) goto LAB_4a0a1124;
    }
    FUN_4a14f21c();
  }
LAB_4a0a1124:
  FUN_4a0c6bf4(apuStack_3c);
  return;
}



// Address: 4a0a1140

void FUN_4a0a1140(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  undefined *local_10c [2];
  undefined *local_104;
  undefined *local_100;
  int local_fc;
  undefined *local_f8 [2];
  int local_f0;
  int *local_ec;
  int *local_e8;
  int *local_e4;
  undefined *local_e0 [2];
  int local_d8;
  int local_d4;
  undefined *local_cc [2];
  int local_c4;
  int local_c0;
  int *local_b8;
  int *local_b4;
  undefined *local_b0 [2];
  int local_a8;
  undefined *local_9c [2];
  int local_94;
  undefined *local_88 [2];
  int local_80;
  undefined *local_74 [2];
  int local_6c;
  undefined *local_60 [2];
  int local_58;
  int local_4c;
  undefined *local_48;
  undefined *local_44;
  undefined *local_40;
  undefined *local_3c;
  undefined *local_38;
  undefined *local_34;
  undefined *local_30;
  int iStack_2c;
  undefined4 local_28;
  
  iStack_2c = param_1;
  local_28 = param_2;
  local_b4 = (int *)FUN_4a098414(0);
  if (local_b4 != (int *)0x0) {
    (**(code **)(*local_b4 + 0xc))(local_b4);
  }
  uVar6 = thunk_FUN_4a161570(0x10);
  local_b8 = (int *)FUN_4a0bfc44(uVar6,local_b4);
  if (local_b8 != (int *)0x0) {
    (**(code **)(*local_b8 + 0xc))(local_b8);
  }
  iVar7 = FUN_4a0bfbdc(local_b8);
  piVar8 = (int *)FUN_4a0c6bc0(local_cc);
  local_30 = PTR_PTR_4a0a2160;
  piVar8[2] = 0;
  piVar8[3] = 0;
  *piVar8 = (int)local_30;
  puVar2 = PTR_PTR_4a0a215c;
  local_34 = PTR_PTR_4a0a2164;
  if (0 < iVar7) {
    iVar9 = FUN_4a15e080(iVar7 << 2);
    if (iVar9 == 0) {
      iVar9 = FUN_4a1669a8();
    }
    iVar10 = 0;
    do {
      local_e8 = (int *)0x0;
      *(undefined4 *)(iVar9 + iVar10 * 4) = 0;
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar7);
    thunk_FUN_4a161570(0x18);
    puVar11 = (undefined4 *)FUN_4a0c0628();
    puVar11[3] = 4;
    puVar11[4] = iVar7;
    *puVar11 = local_34;
    puVar11[2] = iVar9;
    *(undefined1 *)(puVar11 + 5) = 1;
    if (puVar11 != (undefined4 *)0x0) {
      (**(code **)(local_34 + 0xc))(puVar11);
    }
    (**(code **)(*piVar8 + 0x1c))(piVar8);
    piVar8[2] = iVar7;
    piVar8[3] = (int)puVar11;
  }
  iVar10 = 0;
  iVar9 = 1;
  if (1 < iVar7 + 1) {
    do {
      uVar6 = FUN_4a0bf62c(local_b8);
      iVar9 = iVar9 + 1;
      if (local_c0 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)(local_c0 + 8);
      }
      *(undefined4 *)(iVar12 + iVar10 * 4) = uVar6;
      iVar10 = iVar10 + 1;
    } while (iVar9 < iVar7 + 1);
  }
  iVar9 = FUN_4a0bfbdc(local_b8);
  piVar8 = (int *)FUN_4a0c6bc0(local_e0);
  piVar8[2] = 0;
  piVar8[3] = 0;
  *piVar8 = (int)local_30;
  if (0 < iVar9) {
    iVar10 = FUN_4a15e080(iVar9 << 2);
    if (iVar10 == 0) {
      iVar10 = FUN_4a1669a8();
    }
    iVar12 = 0;
    do {
      local_e8 = (int *)0x0;
      *(undefined4 *)(iVar10 + iVar12 * 4) = 0;
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar9);
    thunk_FUN_4a161570(0x18);
    puVar11 = (undefined4 *)FUN_4a0c0628();
    puVar11[3] = 4;
    puVar11[4] = iVar9;
    *puVar11 = local_34;
    puVar11[2] = iVar10;
    *(undefined1 *)(puVar11 + 5) = 1;
    if (puVar11 != (undefined4 *)0x0) {
      (**(code **)(local_34 + 0xc))(puVar11);
    }
    (**(code **)(*piVar8 + 0x1c))(piVar8);
    piVar8[2] = iVar9;
    piVar8[3] = (int)puVar11;
  }
  piVar8 = (int *)FUN_4a0c6bc0(local_60);
  local_38 = PTR_PTR_4a0a2168;
  piVar8[2] = 0;
  piVar8[3] = 0;
  *piVar8 = (int)local_38;
  if (0 < iVar9) {
    iVar10 = FUN_4a15e080(iVar9 << 1);
    if (iVar10 == 0) {
      iVar10 = FUN_4a1669a8();
    }
    iVar12 = 0;
    do {
      iVar13 = iVar12 * 2;
      iVar12 = iVar12 + 1;
      local_e8 = (int *)0x0;
      *(undefined2 *)(iVar10 + iVar13) = 0;
    } while (iVar12 < iVar9);
    thunk_FUN_4a161570(0x18);
    puVar11 = (undefined4 *)FUN_4a0c0628();
    puVar11[3] = 2;
    puVar11[4] = iVar9;
    *puVar11 = local_34;
    puVar11[2] = iVar10;
    *(undefined1 *)(puVar11 + 5) = 1;
    if (puVar11 != (undefined4 *)0x0) {
      (**(code **)(local_34 + 0xc))(puVar11);
    }
    (**(code **)(*piVar8 + 0x1c))(piVar8);
    piVar8[2] = iVar9;
    piVar8[3] = (int)puVar11;
  }
  iVar10 = piVar8[2];
  piVar8 = (int *)piVar8[3];
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0xc))(piVar8);
  }
  (**(code **)(*(int *)(param_1 + 0x18) + 0x1c))((int *)(param_1 + 0x18));
  iVar12 = local_58;
  *(int *)(param_1 + 0x20) = iVar10;
  *(int **)(param_1 + 0x24) = piVar8;
  local_60[0] = local_38;
  iVar10 = FUN_4a0bcc84(local_60);
  if (iVar10 != 0) {
    iVar13 = 0;
    if (0 < iVar12) {
      do {
        iVar13 = iVar13 + 1;
      } while (iVar13 < iVar12);
      if (iVar10 == 0) goto LAB_4a0a14cc;
    }
    FUN_4a14f21c(iVar10);
  }
LAB_4a0a14cc:
  FUN_4a0c6bf4(local_60);
  piVar8 = (int *)FUN_4a0c6bc0(local_74);
  local_3c = PTR_PTR_4a0a216c;
  piVar8[2] = 0;
  piVar8[3] = 0;
  *piVar8 = (int)local_3c;
  if (0 < iVar9) {
    iVar10 = FUN_4a15e080(iVar9);
    if (iVar10 == 0) {
      iVar10 = FUN_4a1669a8();
    }
    iVar12 = 0;
    do {
      local_e8 = (int *)0x0;
      *(undefined1 *)(iVar10 + iVar12) = 0;
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar9);
    thunk_FUN_4a161570(0x18);
    puVar11 = (undefined4 *)FUN_4a0c0628();
    *puVar11 = local_34;
    puVar11[3] = 1;
    puVar11[4] = iVar9;
    puVar11[2] = iVar10;
    *(undefined1 *)(puVar11 + 5) = 1;
    if (puVar11 != (undefined4 *)0x0) {
      (**(code **)(local_34 + 0xc))(puVar11);
    }
    (**(code **)(*piVar8 + 0x1c))(piVar8);
    piVar8[2] = iVar9;
    piVar8[3] = (int)puVar11;
  }
  iVar10 = piVar8[2];
  piVar8 = (int *)piVar8[3];
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0xc))(piVar8);
  }
  (**(code **)(*(int *)(param_1 + 0x2c) + 0x1c))((int *)(param_1 + 0x2c));
  *(int *)(param_1 + 0x34) = iVar10;
  *(int **)(param_1 + 0x38) = piVar8;
  local_74[0] = local_3c;
  iVar10 = FUN_4a0bcc84(local_74);
  if (iVar10 != 0) {
    iVar12 = 0;
    if (0 < local_6c) {
      do {
        iVar12 = iVar12 + 1;
      } while (iVar12 < local_6c);
      if (iVar10 == 0) goto LAB_4a0a1618;
    }
    FUN_4a14f21c(iVar10);
  }
LAB_4a0a1618:
  FUN_4a0c6bf4(local_74);
  iVar10 = 0;
  iVar12 = 1;
  if (1 < iVar9 + 1) {
    do {
      uVar6 = FUN_4a0bf62c(local_b8);
      if (local_d4 == 0) {
        iVar13 = 0;
      }
      else {
        iVar13 = *(int *)(local_d4 + 8);
      }
      *(undefined4 *)(iVar13 + iVar10 * 4) = uVar6;
      iVar13 = FUN_4a0bfbdc(local_b8);
      if (*(int *)(param_1 + 0x24) == 0) {
        iVar14 = 0;
      }
      else {
        iVar14 = *(int *)(*(int *)(param_1 + 0x24) + 8);
      }
      *(undefined2 *)(iVar14 + iVar10 * 2) = *(undefined2 *)(PTR_DAT_4a0a2170 + iVar13 * 2);
      uVar5 = FUN_4a0bf920(local_b8);
      iVar12 = iVar12 + 1;
      if (*(int *)(param_1 + 0x38) == 0) {
        iVar13 = 0;
      }
      else {
        iVar13 = *(int *)(*(int *)(param_1 + 0x38) + 8);
      }
      *(undefined1 *)(iVar13 + iVar10) = uVar5;
      iVar10 = iVar10 + 1;
    } while (iVar12 < iVar9 + 1);
  }
  if ((local_b8 != (int *)0x0) && (iVar10 = (**(code **)(*local_b8 + 8))(local_b8), iVar10 != 0)) {
    (**(code **)(*local_b8 + 4))(local_b8);
  }
  if ((local_b4 != (int *)0x0) && (iVar10 = (**(code **)(*local_b4 + 8))(local_b4), iVar10 != 0)) {
    (**(code **)(*local_b4 + 4))(local_b4);
  }
  local_e4 = (int *)FUN_4a0982e0(local_28,1);
  piVar8 = (int *)FUN_4a0c6bc0(local_88);
  piVar8[2] = 0;
  piVar8[3] = 0;
  local_40 = PTR_PTR_4a0a2174;
  *piVar8 = (int)PTR_PTR_4a0a2174;
  if (0 < iVar9) {
    iVar10 = FUN_4a15e080(iVar9 << 2);
    if (iVar10 == 0) {
      iVar10 = FUN_4a1669a8();
    }
    iVar12 = 0;
    do {
      local_e8 = (int *)0x0;
      *(undefined4 *)(iVar10 + iVar12 * 4) = 0;
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar9);
    thunk_FUN_4a161570(0x18);
    puVar11 = (undefined4 *)FUN_4a0c0628();
    puVar11[3] = 4;
    puVar11[4] = iVar9;
    *puVar11 = local_34;
    puVar11[2] = iVar10;
    *(undefined1 *)(puVar11 + 5) = 1;
    if (puVar11 != (undefined4 *)0x0) {
      (**(code **)(local_34 + 0xc))(puVar11);
    }
    (**(code **)(*piVar8 + 0x1c))(piVar8);
    piVar8[2] = iVar9;
    piVar8[3] = (int)puVar11;
  }
  iVar10 = piVar8[2];
  piVar8 = (int *)piVar8[3];
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0xc))(piVar8);
  }
  (**(code **)(*(int *)(param_1 + 0x40) + 0x1c))((int *)(param_1 + 0x40));
  *(int *)(param_1 + 0x48) = iVar10;
  *(int **)(param_1 + 0x4c) = piVar8;
  local_88[0] = local_40;
  iVar10 = FUN_4a0bcc84(local_88);
  if (iVar10 != 0) {
    iVar12 = 0;
    if (0 < local_80) {
      do {
        iVar12 = iVar12 + 1;
      } while (iVar12 < local_80);
      if (iVar10 == 0) goto LAB_4a0a1898;
    }
    FUN_4a14f21c(iVar10);
  }
LAB_4a0a1898:
  FUN_4a0c6bf4(local_88);
  iVar10 = 0;
  if (0 < iVar9) {
    do {
      if (local_d4 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)(local_d4 + 8);
      }
      FUN_4a0b74b0(local_e4,*(undefined4 *)(iVar12 + iVar10 * 4));
      piVar8 = (int *)FUN_4a165794();
      if (*(int *)(param_1 + 0x4c) == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)(*(int *)(param_1 + 0x4c) + 8);
      }
      *(int **)(iVar12 + iVar10 * 4) = piVar8;
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 0xc))(piVar8);
      }
      if (*(int *)(param_1 + 0x38) == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)(*(int *)(param_1 + 0x38) + 8);
      }
      cVar1 = *(char *)(iVar12 + iVar10);
      if (cVar1 == '\0') {
        FUN_4a0afe0c(piVar8,*(undefined4 *)(param_1 + 0xa0));
        FUN_4a0afda0(piVar8,*(undefined4 *)(param_1 + 0x9c));
      }
      else if (cVar1 == '\x01') {
        FUN_4a0afe0c(piVar8,*(undefined4 *)(param_1 + 0xa4));
        FUN_4a0afda0(piVar8,*(undefined4 *)(param_1 + 0x9c));
      }
      else if (cVar1 == '\x02') {
        FUN_4a0afe0c(piVar8,*(undefined4 *)(param_1 + 0xa8));
        FUN_4a0afda0(piVar8,*(undefined4 *)(param_1 + 0x9c));
      }
      else if (cVar1 == '\x03') {
        FUN_4a0afe0c(piVar8,*(undefined4 *)(param_1 + 0xac));
        FUN_4a0afda0(piVar8,*(undefined4 *)(param_1 + 0x9c));
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar9);
  }
  local_e8 = (int *)(param_1 + 0x54);
  local_ec = (int *)FUN_4a0c6bc0(local_9c);
  local_ec[2] = 0;
  local_ec[3] = 0;
  puVar3 = PTR_PTR_4a0a217c;
  local_44 = PTR_PTR_4a0a2178;
  *local_ec = (int)PTR_PTR_4a0a2178;
  if (0 < iVar7) {
    iVar9 = FUN_4a15e080(iVar7 * 0x14);
    if (iVar9 == 0) {
      iVar9 = FUN_4a1669a8();
    }
    iVar10 = 0;
    do {
      puVar11 = (undefined4 *)FUN_4a0c6bc0(&local_100);
      puVar11[2] = 0;
      puVar11[3] = 0;
      *puVar11 = puVar3;
      puVar15 = (undefined4 *)FUN_4a0c6bc0(iVar9 + iVar10 * 0x14);
      *puVar15 = puVar2;
      puVar15[2] = puVar11[2];
      piVar8 = (int *)puVar11[3];
      puVar15[3] = piVar8;
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 0xc))();
      }
      puVar4 = local_f8[0];
      *puVar15 = puVar3;
      local_100 = puVar3;
      iVar12 = FUN_4a0bcc84(&local_100);
      if (iVar12 != 0) {
        iVar13 = 0;
        if (0 < (int)puVar4) {
          do {
            iVar13 = iVar13 + 1;
          } while (iVar13 < (int)puVar4);
          if (iVar12 == 0) goto LAB_4a0a1ab0;
        }
        FUN_4a14f21c(iVar12);
      }
LAB_4a0a1ab0:
      FUN_4a0c6bf4(&local_100);
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar7);
    thunk_FUN_4a161570(0x18);
    puVar11 = (undefined4 *)FUN_4a0c0628();
    puVar11[3] = 0x14;
    puVar11[4] = iVar7;
    *puVar11 = local_34;
    puVar11[2] = iVar9;
    *(undefined1 *)(puVar11 + 5) = 1;
    if (puVar11 != (undefined4 *)0x0) {
      (**(code **)(local_34 + 0xc))(puVar11);
    }
    (**(code **)(*local_ec + 0x1c))(local_ec);
    local_ec[3] = (int)puVar11;
    local_ec[2] = iVar7;
  }
  iVar9 = local_ec[2];
  piVar8 = (int *)local_ec[3];
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0xc))(piVar8);
  }
  (**(code **)(*local_e8 + 0x1c))(local_e8);
  local_e8[3] = (int)piVar8;
  local_e8[2] = iVar9;
  local_9c[0] = local_44;
  iVar9 = FUN_4a0bcc84(local_9c);
  if (iVar9 != 0) {
    iVar10 = 0;
    if (0 < local_94) {
      do {
        (*(code *)**(undefined4 **)(iVar9 + iVar10 * 0x14))();
        iVar10 = iVar10 + 1;
      } while (iVar10 < local_94);
      if (iVar9 == 0) goto LAB_4a0a1bdc;
    }
    FUN_4a14f21c(iVar9);
  }
LAB_4a0a1bdc:
  FUN_4a0c6bf4(local_9c);
  piVar8 = (int *)FUN_4a0c6bc0(local_60);
  piVar8[2] = 0;
  piVar8[3] = 0;
  *piVar8 = (int)local_38;
  if (0 < iVar7) {
    iVar9 = FUN_4a15e080(iVar7 << 1);
    if (iVar9 == 0) {
      iVar9 = FUN_4a1669a8();
    }
    iVar10 = 0;
    do {
      iVar12 = iVar10 * 2;
      iVar10 = iVar10 + 1;
      local_e8 = (int *)0x0;
      *(undefined2 *)(iVar9 + iVar12) = 0;
    } while (iVar10 < iVar7);
    thunk_FUN_4a161570(0x18);
    puVar11 = (undefined4 *)FUN_4a0c0628();
    puVar11[3] = 2;
    puVar11[4] = iVar7;
    *puVar11 = local_34;
    puVar11[2] = iVar9;
    *(undefined1 *)(puVar11 + 5) = 1;
    if (puVar11 != (undefined4 *)0x0) {
      (**(code **)(local_34 + 0xc))(puVar11);
    }
    (**(code **)(*piVar8 + 0x1c))(piVar8);
    piVar8[2] = iVar7;
    piVar8[3] = (int)puVar11;
  }
  iVar9 = piVar8[2];
  piVar8 = (int *)piVar8[3];
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0xc))(piVar8);
  }
  (**(code **)(*(int *)(param_1 + 0x68) + 0x1c))((int *)(param_1 + 0x68));
  *(int *)(param_1 + 0x70) = iVar9;
  *(int **)(param_1 + 0x74) = piVar8;
  local_60[0] = local_38;
  iVar9 = FUN_4a0bcc84(local_60);
  if (iVar9 != 0) {
    iVar10 = 0;
    if (0 < local_58) {
      do {
        iVar10 = iVar10 + 1;
      } while (iVar10 < local_58);
      if (iVar9 == 0) goto LAB_4a0a1d30;
    }
    FUN_4a14f21c(iVar9);
  }
LAB_4a0a1d30:
  FUN_4a0c6bf4(local_60);
  local_e8 = (int *)(param_1 + 0x7c);
  local_ec = (int *)FUN_4a0c6bc0(local_b0);
  local_ec[2] = 0;
  local_48 = PTR_PTR_4a0a2180;
  local_ec[3] = 0;
  puVar4 = PTR_PTR_4a0a2184;
  *local_ec = (int)local_48;
  if (0 < iVar7) {
    local_f0 = FUN_4a15e080(iVar7 * 0x14);
    if (local_f0 == 0) {
      local_f0 = FUN_4a1669a8();
    }
    iVar9 = 0;
    do {
      iVar10 = local_f0 + iVar9 * 0x14;
      puVar11 = (undefined4 *)FUN_4a0c6bc0(&local_104);
      puVar11[2] = 0;
      puVar11[3] = 0;
      *puVar11 = puVar4;
      puVar15 = (undefined4 *)FUN_4a0c6bc0(iVar10);
      *puVar15 = puVar2;
      puVar15[2] = puVar11[2];
      piVar8 = (int *)puVar11[3];
      puVar15[3] = piVar8;
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 0xc))();
      }
      iVar10 = local_fc;
      *puVar15 = puVar4;
      local_104 = puVar4;
      iVar12 = FUN_4a0bcc84(&local_104);
      if (iVar12 != 0) {
        iVar13 = 0;
        if (0 < iVar10) {
          do {
            iVar13 = iVar13 + 1;
          } while (iVar13 < iVar10);
          if (iVar12 == 0) goto LAB_4a0a1e38;
        }
        FUN_4a14f21c(iVar12);
      }
LAB_4a0a1e38:
      FUN_4a0c6bf4(&local_104);
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar7);
    thunk_FUN_4a161570(0x18);
    puVar11 = (undefined4 *)FUN_4a0c0628();
    *puVar11 = local_34;
    puVar11[2] = local_f0;
    puVar11[3] = 0x14;
    puVar11[4] = iVar7;
    *(undefined1 *)(puVar11 + 5) = 1;
    if (puVar11 != (undefined4 *)0x0) {
      (**(code **)(local_34 + 0xc))(puVar11);
    }
    (**(code **)(*local_ec + 0x1c))(local_ec);
    local_ec[3] = (int)puVar11;
    local_ec[2] = iVar7;
  }
  iVar9 = local_ec[2];
  piVar8 = (int *)local_ec[3];
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0xc))(piVar8);
  }
  (**(code **)(*local_e8 + 0x1c))(local_e8);
  local_e8[3] = (int)piVar8;
  local_e8[2] = iVar9;
  local_b0[0] = local_48;
  iVar9 = FUN_4a0bcc84(local_b0);
  if (iVar9 != 0) {
    iVar10 = 0;
    if (0 < local_a8) {
      do {
        (*(code *)**(undefined4 **)(iVar9 + iVar10 * 0x14))();
        iVar10 = iVar10 + 1;
      } while (iVar10 < local_a8);
      if (iVar9 == 0) goto LAB_4a0a1f68;
    }
    FUN_4a14f21c(iVar9);
  }
LAB_4a0a1f68:
  FUN_4a0c6bf4(local_b0);
  iVar9 = 0;
  if (0 < iVar7) {
    do {
      iVar10 = 0;
      if (local_c0 != 0) {
        iVar10 = *(int *)(local_c0 + 8);
      }
      piVar8 = (int *)FUN_4a0b74b0(local_e4,*(undefined4 *)(iVar10 + iVar9 * 4));
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 0xc))(piVar8);
      }
      FUN_4a0b4ac8(piVar8[0x33],piVar8);
      local_4c = iVar9 * 5;
      iVar10 = 0;
      if (*(int *)(param_1 + 0x60) != 0) {
        iVar10 = *(int *)(*(int *)(param_1 + 0x60) + 8);
      }
      piVar18 = (int *)(iVar10 + iVar9 * 0x14);
      piVar16 = (int *)FUN_4a0c6bc0(local_f8);
      piVar16[2] = 0;
      piVar16[3] = 0;
      *piVar16 = (int)puVar3;
      iVar10 = FUN_4a15e080(4);
      if (iVar10 == 0) {
        iVar10 = FUN_4a1669a8();
      }
      iVar12 = 0;
      do {
        *(undefined4 *)(iVar10 + iVar12 * 4) = 0;
        iVar12 = iVar12 + 1;
      } while (iVar12 < 1);
      thunk_FUN_4a161570(0x18,1);
      piVar17 = (int *)FUN_4a0c0628();
      piVar17[3] = 4;
      *piVar17 = (int)local_34;
      piVar17[4] = 1;
      piVar17[2] = iVar10;
      *(undefined1 *)(piVar17 + 5) = 1;
      if (piVar17 != (int *)0x0) {
        (**(code **)(local_34 + 0xc))(piVar17);
      }
      (**(code **)(*piVar16 + 0x1c))(piVar16);
      piVar16[2] = 1;
      piVar16[3] = (int)piVar17;
      if (piVar17 != (int *)0x0) {
        (**(code **)(*piVar17 + 0xc))(piVar17);
      }
      (**(code **)(*piVar18 + 0x1c))(piVar18);
      iVar10 = local_f0;
      piVar18[2] = 1;
      piVar18[3] = (int)piVar17;
      local_f8[0] = puVar3;
      iVar12 = FUN_4a0bcc84(local_f8);
      if (iVar12 != 0) {
        iVar13 = 0;
        if (0 < iVar10) {
          do {
            iVar13 = iVar13 + 1;
          } while (iVar13 < iVar10);
          if (iVar12 == 0) goto LAB_4a0a211c;
        }
        FUN_4a14f21c(iVar12);
      }
LAB_4a0a211c:
      FUN_4a0c6bf4(local_f8);
      if (*(int *)(param_1 + 0x60) == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(*(int *)(param_1 + 0x60) + 8);
      }
      iVar10 = *(int *)(iVar10 + local_4c * 4 + 0xc);
      if (iVar10 == 0) {
        piVar16 = (int *)0x0;
      }
      else {
        piVar16 = *(int **)(iVar10 + 8);
      }
      *piVar16 = (int)piVar8;
      if (*(int *)(param_1 + 0x74) == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(*(int *)(param_1 + 0x74) + 8);
      }
      *(undefined2 *)(iVar10 + iVar9 * 2) = 0;
      if (*(int *)(param_1 + 0x88) == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(*(int *)(param_1 + 0x88) + 8);
      }
      piVar18 = (int *)(iVar10 + local_4c * 4);
      piVar16 = (int *)FUN_4a0c6bc0(local_10c);
      piVar16[2] = 0;
      piVar16[3] = 0;
      *piVar16 = (int)puVar4;
      iVar10 = FUN_4a15e080(0x10);
      if (iVar10 == 0) {
        iVar10 = FUN_4a1669a8();
      }
      iVar12 = 0;
      do {
        *(undefined4 *)(iVar10 + iVar12 * 4) = 0;
        iVar12 = iVar12 + 1;
      } while (iVar12 < 4);
      thunk_FUN_4a161570(0x18,4);
      piVar17 = (int *)FUN_4a0c0628();
      *piVar17 = (int)local_34;
      piVar17[3] = 4;
      piVar17[2] = iVar10;
      piVar17[4] = 4;
      *(undefined1 *)(piVar17 + 5) = 1;
      if (piVar17 != (int *)0x0) {
        (**(code **)(local_34 + 0xc))(piVar17);
      }
      (**(code **)(*piVar16 + 0x1c))(piVar16);
      piVar16[2] = 4;
      piVar16[3] = (int)piVar17;
      if (piVar17 != (int *)0x0) {
        (**(code **)(*piVar17 + 0xc))(piVar17);
      }
      (**(code **)(*piVar18 + 0x1c))(piVar18);
      puVar2 = local_104;
      piVar18[2] = 4;
      piVar18[3] = (int)piVar17;
      local_10c[0] = puVar4;
      iVar10 = FUN_4a0bcc84(local_10c);
      if (iVar10 != 0) {
        iVar12 = 0;
        if (0 < (int)puVar2) {
          do {
            iVar12 = iVar12 + 1;
          } while (iVar12 < (int)puVar2);
          if (iVar10 == 0) goto LAB_4a0a22f0;
        }
        FUN_4a14f21c(iVar10);
      }
LAB_4a0a22f0:
      FUN_4a0c6bf4(local_10c);
      iVar10 = 0;
      if (*(int *)(param_1 + 0x88) != 0) {
        iVar10 = *(int *)(*(int *)(param_1 + 0x88) + 8);
      }
      FUN_4a09fa98(param_1,iVar10 + local_4c * 4,piVar8,1);
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar7);
  }
  if ((local_e4 != (int *)0x0) && (iVar7 = (**(code **)(*local_e4 + 8))(local_e4), iVar7 != 0)) {
    (**(code **)(*local_e4 + 4))(local_e4);
  }
  local_e0[0] = local_30;
  iVar7 = FUN_4a0bcc84(local_e0);
  if (iVar7 != 0) {
    iVar9 = 0;
    if (0 < local_d8) {
      do {
        iVar9 = iVar9 + 1;
      } while (iVar9 < local_d8);
      if (iVar7 == 0) goto LAB_4a0a23b4;
    }
    FUN_4a14f21c();
  }
LAB_4a0a23b4:
  FUN_4a0c6bf4(local_e0);
  local_cc[0] = local_30;
  iVar7 = FUN_4a0bcc84(local_cc);
  if (iVar7 != 0) {
    iVar9 = 0;
    if (0 < local_c4) {
      do {
        iVar9 = iVar9 + 1;
      } while (iVar9 < local_c4);
      if (iVar7 == 0) goto LAB_4a0a2400;
    }
    FUN_4a14f21c();
  }
LAB_4a0a2400:
  FUN_4a0c6bf4(local_cc);
  return;
}



// Address: 4a0a2414

undefined4 * FUN_4a0a2414(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int local_18;
  int local_14;
  
  piVar6 = &local_18;
  piVar5 = &local_18;
  *param_1 = PTR_PTR_4a0a27ec;
  iVar3 = FUN_4a16b934(param_1 + 1,4);
  puVar4 = (undefined4 *)FUN_4a0c6bc0(iVar3 + 0x14);
  puVar1 = PTR_PTR_4a0a27f0;
  puVar4[2] = 0;
  *puVar4 = puVar1;
  puVar4[3] = 0;
  puVar4 = (undefined4 *)FUN_4a0c6bc0(puVar4 + 5);
  puVar2 = PTR_PTR_4a0a27f4;
  puVar4[2] = 0;
  *puVar4 = puVar2;
  puVar4[3] = 0;
  puVar4 = (undefined4 *)FUN_4a0c6bc0(puVar4 + 5);
  puVar2 = PTR_PTR_4a0a27f8;
  puVar4[2] = 0;
  *puVar4 = puVar2;
  puVar4[3] = 0;
  puVar4 = (undefined4 *)FUN_4a0c6bc0(puVar4 + 5);
  puVar2 = PTR_PTR_4a0a27fc;
  puVar4[2] = 0;
  *puVar4 = puVar2;
  puVar4[3] = 0;
  puVar4 = (undefined4 *)FUN_4a0c6bc0(puVar4 + 5);
  puVar4[2] = 0;
  *puVar4 = puVar1;
  puVar4[3] = 0;
  puVar4 = (undefined4 *)FUN_4a0c6bc0(puVar4 + 5);
  puVar1 = PTR_PTR_4a0a2800;
  puVar4[2] = 0;
  *puVar4 = puVar1;
  puVar4[3] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  puVar4[0x12] = 0xc2480000;
  puVar4[0x13] = 0;
  puVar1 = PTR_DAT_4a0a2804;
  puVar4[0x14] = 0x3f800000;
  uVar7 = *(undefined4 *)puVar1;
  local_14 = FUN_4a0bc200(uVar7);
  local_18 = FUN_4a0bc1f8(uVar7);
  if (local_18 <= local_14) {
    piVar6 = &local_14;
  }
  puVar4[0xf] = *piVar6;
  uVar7 = *(undefined4 *)puVar1;
  local_14 = FUN_4a0bc200(uVar7);
  local_18 = FUN_4a0bc1f8(uVar7);
  if (local_14 <= local_18) {
    piVar5 = &local_14;
  }
  puVar4[0x10] = *piVar5;
  thunk_FUN_4a161570(0xe8);
  piVar6 = (int *)FUN_4a0b50dc();
  puVar4[5] = piVar6;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))();
  }
  thunk_FUN_4a161570(0xe0);
  uVar7 = FUN_4a0b4e14();
  puVar4[6] = uVar7;
  FUN_4a0b4c10(puVar4[5],uVar7);
  if ((int *)puVar4[6] != (int *)0x0) {
    (**(code **)(*(int *)puVar4[6] + 0xc))();
  }
  thunk_FUN_4a161570(0x13c);
  piVar6 = (int *)FUN_4a0b52ec();
  puVar4[7] = piVar6;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))();
  }
  FUN_4a0b4c10(puVar4[5],puVar4[7]);
  FUN_4a0b5070(puVar4[5],puVar4[7]);
  thunk_FUN_4a161570(0x30);
  uVar7 = FUN_4a0a8358();
  FUN_4a0a8340(uVar7,0);
  FUN_4a0a8348(uVar7,0);
  FUN_4a0b5004(puVar4[5],uVar7);
  thunk_FUN_4a161570(0x38);
  piVar6 = (int *)FUN_4a0abadc();
  puVar4[8] = piVar6;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))();
  }
  FUN_4a0aba64(puVar4[8],0xa2);
  thunk_FUN_4a161570(0x40);
  piVar6 = (int *)FUN_4a0b020c();
  puVar4[9] = piVar6;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))();
  }
  FUN_4a0b0180(puVar4[9],0x44);
  FUN_4a0b01c8(puVar4[9],0);
  FUN_4a0b01f4(puVar4[9],0);
  FUN_4a0b0204(puVar4[9],0);
  FUN_4a0b01ec(puVar4[9],0);
  thunk_FUN_4a161570(0x40);
  piVar6 = (int *)FUN_4a0b020c();
  puVar4[10] = piVar6;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))();
  }
  FUN_4a0b0180(puVar4[10],0x40);
  FUN_4a0b01c8(puVar4[10],0);
  FUN_4a0b01f4(puVar4[10],0);
  FUN_4a0b0204(puVar4[10],0);
  FUN_4a0b01ec(puVar4[10],0);
  thunk_FUN_4a161570(0x40);
  piVar6 = (int *)FUN_4a0b020c();
  puVar4[0xb] = piVar6;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))();
  }
  FUN_4a0b0180(puVar4[0xb],0x41);
  FUN_4a0b01c8(puVar4[0xb],0);
  FUN_4a0b01f4(puVar4[0xb],0);
  FUN_4a0b0204(puVar4[0xb],0);
  FUN_4a0b01ec(puVar4[0xb],0);
  thunk_FUN_4a161570(0x40);
  piVar6 = (int *)FUN_4a0b020c();
  puVar4[0xc] = piVar6;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))();
  }
  FUN_4a0b0180(puVar4[0xc],0x42);
  FUN_4a0b01c8(puVar4[0xc],0);
  FUN_4a0b01f4(puVar4[0xc],0);
  FUN_4a0b0204(puVar4[0xc],0);
  FUN_4a0b01ec(puVar4[0xc],0);
  host_s3eConfigGetInt_arm(&DAT_4a0a2820,s_enableUIDoubleScaling_4a0a2808,puVar4 + 0x11);
  return puVar4 + -0x1f;
}



// Address: 4a0a2840

int FUN_4a0a2840(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  
  *param_1 = PTR_PTR_4a0a2dc0;
  piVar5 = (int *)param_1[0x24];
  if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  piVar5 = (int *)param_1[0x25];
  if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  piVar5 = (int *)param_1[0x26];
  if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  piVar5 = (int *)param_1[0x27];
  if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  piVar5 = (int *)param_1[0x28];
  if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  piVar5 = (int *)param_1[0x29];
  if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  piVar5 = (int *)param_1[0x2a];
  if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  piVar5 = (int *)param_1[0x2b];
  if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  iVar2 = 0;
  if (0 < (int)param_1[0x17]) {
    do {
      if (param_1[0x18] == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(param_1[0x18] + 8);
      }
      iVar6 = 0;
      if (0 < *(int *)(iVar3 + iVar2 * 0x14 + 8)) {
        do {
          if (param_1[0x18] == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(param_1[0x18] + 8);
          }
          iVar3 = *(int *)(iVar3 + iVar2 * 0x14 + 0xc);
          if (iVar3 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(iVar3 + 8);
          }
          piVar5 = *(int **)(iVar3 + iVar6 * 4);
          if ((piVar5 != (int *)0x0) && (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 != 0)) {
            (**(code **)(*piVar5 + 4))(piVar5);
          }
          iVar6 = iVar6 + 1;
          if (param_1[0x18] == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(param_1[0x18] + 8);
          }
        } while (iVar6 < *(int *)(iVar3 + iVar2 * 0x14 + 8));
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[0x17]);
  }
  iVar2 = 0;
  if (0 < (int)param_1[0x12]) {
    do {
      if (param_1[0x13] == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(param_1[0x13] + 8);
      }
      piVar5 = *(int **)(iVar3 + iVar2 * 4);
      if ((piVar5 != (int *)0x0) && (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 != 0)) {
        (**(code **)(*piVar5 + 4))(piVar5);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[0x12]);
  }
  param_1[0x1f] = PTR_PTR_4a0a2dc4;
  iVar3 = param_1[0x21];
  iVar2 = FUN_4a0bcc84(param_1 + 0x1f);
  if (iVar2 != 0) {
    iVar6 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar2 + iVar6 * 0x14))();
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar3);
      if (iVar2 == 0) goto LAB_4a0a2bcc;
    }
    FUN_4a14f21c(iVar2);
  }
LAB_4a0a2bcc:
  iVar2 = FUN_4a0c6bf4(param_1 + 0x1f);
  puVar1 = PTR_PTR_4a0a2dc8;
  *(undefined **)(iVar2 + -0x14) = PTR_PTR_4a0a2dc8;
  iVar6 = *(int *)(iVar2 + -0xc);
  iVar3 = FUN_4a0bcc84(iVar2 + -0x14);
  if (iVar3 != 0) {
    iVar4 = 0;
    if (0 < iVar6) {
      do {
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar6);
      if (iVar3 == 0) goto LAB_4a0a2c18;
    }
    FUN_4a14f21c();
  }
LAB_4a0a2c18:
  iVar2 = FUN_4a0c6bf4(iVar2 + -0x14);
  puVar7 = (undefined4 *)(iVar2 + -0x14);
  *puVar7 = PTR_PTR_4a0a2dcc;
  iVar3 = *(int *)(iVar2 + -0xc);
  iVar2 = FUN_4a0bcc84(puVar7);
  if (iVar2 != 0) {
    iVar6 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar2 + iVar6 * 0x14))();
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar3);
      if (iVar2 == 0) goto LAB_4a0a2c80;
    }
    FUN_4a14f21c(iVar2);
  }
LAB_4a0a2c80:
  iVar2 = FUN_4a0c6bf4(puVar7);
  puVar7 = (undefined4 *)(iVar2 + -0x14);
  *puVar7 = PTR_PTR_4a0a2dd0;
  iVar3 = *(int *)(iVar2 + -0xc);
  iVar2 = FUN_4a0bcc84(puVar7);
  if (iVar2 != 0) {
    iVar6 = 0;
    if (0 < iVar3) {
      do {
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar3);
      if (iVar2 == 0) goto LAB_4a0a2ccc;
    }
    FUN_4a14f21c();
  }
LAB_4a0a2ccc:
  iVar2 = FUN_4a0c6bf4(puVar7);
  puVar7 = (undefined4 *)(iVar2 + -0x14);
  *puVar7 = PTR_PTR_4a0a2dd4;
  iVar3 = *(int *)(iVar2 + -0xc);
  iVar2 = FUN_4a0bcc84(puVar7);
  if (iVar2 != 0) {
    iVar6 = 0;
    if (0 < iVar3) {
      do {
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar3);
      if (iVar2 == 0) goto LAB_4a0a2d18;
    }
    FUN_4a14f21c();
  }
LAB_4a0a2d18:
  iVar2 = FUN_4a0c6bf4(puVar7);
  *(undefined **)(iVar2 + -0x14) = puVar1;
  iVar6 = *(int *)(iVar2 + -0xc);
  iVar3 = FUN_4a0bcc84(iVar2 + -0x14);
  if (iVar3 != 0) {
    iVar4 = 0;
    if (0 < iVar6) {
      do {
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar6);
      if (iVar3 == 0) goto LAB_4a0a2d60;
    }
    FUN_4a14f21c();
  }
LAB_4a0a2d60:
  iVar2 = FUN_4a0c6bf4(iVar2 + -0x14);
  puVar7 = (undefined4 *)(iVar2 + -0x14);
  *puVar7 = PTR_PTR_4a0a2dd8;
  iVar3 = *(int *)(iVar2 + -0xc);
  iVar2 = FUN_4a0bcc84(puVar7);
  if (iVar2 != 0) {
    iVar6 = 0;
    if (0 < iVar3) {
      do {
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar3);
      if (iVar2 == 0) goto LAB_4a0a2dac;
    }
    FUN_4a14f21c();
  }
LAB_4a0a2dac:
  iVar2 = FUN_4a0c6bf4(puVar7);
  return iVar2 + -4;
}



// Address: 4a0a2ddc

undefined4 FUN_4a0a2ddc(int *param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  bool bVar18;
  bool bVar19;
  undefined *local_ac [2];
  undefined *local_a4;
  int *local_a0;
  int local_9c;
  int *local_98 [2];
  int local_90;
  int *local_8c;
  int *local_88;
  int local_84;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [20];
  undefined1 auStack_5c [20];
  undefined1 auStack_48 [20];
  int local_34;
  undefined *local_30;
  undefined *local_2c;
  undefined *local_28;
  
  uVar7 = FUN_4a098414(2);
  FUN_4a0bfc44(auStack_80,uVar7);
  local_84 = FUN_4a0bfbdc(auStack_80);
  iVar8 = FUN_4a16c0cc(auStack_48,local_84);
  iVar15 = *(int *)(iVar8 + 8);
  piVar14 = *(int **)(iVar8 + 0xc);
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0xc))(piVar14);
  }
  (**(code **)(*param_1 + 0x1c))(param_1);
  param_1[3] = (int)piVar14;
  param_1[2] = iVar15;
  FUN_4a16c1a0(auStack_48);
  iVar8 = FUN_4a16c0cc(auStack_48,local_84);
  iVar15 = *(int *)(iVar8 + 8);
  piVar14 = *(int **)(iVar8 + 0xc);
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0xc))(piVar14);
  }
  (**(code **)(param_1[5] + 0x1c))(param_1 + 5);
  param_1[7] = iVar15;
  param_1[8] = (int)piVar14;
  FUN_4a16c1a0(auStack_48);
  iVar8 = FUN_4a168f18(auStack_5c,local_84);
  iVar15 = *(int *)(iVar8 + 8);
  piVar14 = *(int **)(iVar8 + 0xc);
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0xc))(piVar14);
  }
  (**(code **)(param_1[10] + 0x1c))(param_1 + 10);
  param_1[0xc] = iVar15;
  param_1[0xd] = (int)piVar14;
  FUN_4a169024(auStack_5c);
  iVar8 = FUN_4a168f18(auStack_5c,local_84);
  iVar15 = *(int *)(iVar8 + 8);
  piVar14 = *(int **)(iVar8 + 0xc);
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0xc))(piVar14);
  }
  (**(code **)(param_1[0xf] + 0x1c))(param_1 + 0xf);
  param_1[0x11] = iVar15;
  param_1[0x12] = (int)piVar14;
  FUN_4a169024(auStack_5c);
  local_88 = param_1 + 0x14;
  local_8c = (int *)FUN_4a0c6bc0(auStack_70);
  puVar3 = PTR_PTR_4a0a372c;
  local_28 = PTR_PTR_4a0a3720;
  local_8c[2] = 0;
  puVar2 = PTR_PTR_4a0a3724;
  local_8c[3] = 0;
  *local_8c = (int)puVar2;
  local_2c = PTR_PTR_4a0a3728;
  if (0 < local_84) {
    local_90 = FUN_4a15e080(local_84 * 0x14);
    if (local_90 == 0) {
      local_90 = FUN_4a1669a8();
    }
    iVar8 = 0;
    do {
      iVar15 = local_90 + iVar8 * 0x14;
      puVar9 = (undefined4 *)FUN_4a0c6bc0(&local_a4);
      puVar9[2] = 0;
      puVar9[3] = 0;
      *puVar9 = puVar3;
      puVar10 = (undefined4 *)FUN_4a0c6bc0(iVar15);
      *puVar10 = local_28;
      puVar10[2] = puVar9[2];
      piVar14 = (int *)puVar9[3];
      puVar10[3] = piVar14;
      if (piVar14 != (int *)0x0) {
        (**(code **)(*piVar14 + 0xc))();
      }
      piVar14 = local_98[0];
      iVar15 = local_9c;
      *puVar10 = puVar3;
      local_a4 = puVar3;
      bVar18 = local_98[0] != (int *)0x0;
      if (bVar18) {
        iVar16 = local_98[0][2];
        cVar1 = (char)local_98[0][5];
      }
      else {
        iVar16 = 0;
        cVar1 = '\0';
      }
      bVar19 = local_98[0] == (int *)0x0;
      local_98[0] = (int *)0x0;
      local_9c = 0;
      if ((bVar19) || (iVar11 = (**(code **)(*piVar14 + 8))(piVar14), iVar11 == 0)) {
        bVar4 = 0;
      }
      else {
        (**(code **)(*piVar14 + 4))(piVar14);
        bVar4 = 1;
      }
      if (!(bool)(bVar4 & (bVar18 && cVar1 != '\0'))) {
        iVar16 = 0;
      }
      if (iVar16 != 0) {
        iVar11 = 0;
        if (0 < iVar15) {
          do {
            iVar11 = iVar11 + 1;
          } while (iVar11 < iVar15);
          if (iVar16 == 0) goto LAB_4a0a30f0;
        }
        FUN_4a14f21c(iVar16);
      }
LAB_4a0a30f0:
      FUN_4a0c6bf4(&local_a4);
      iVar8 = iVar8 + 1;
    } while (iVar8 < local_84);
    thunk_FUN_4a161570(0x18);
    puVar9 = (undefined4 *)FUN_4a0c0628();
    *puVar9 = local_2c;
    puVar9[2] = local_90;
    puVar9[3] = 0x14;
    puVar9[4] = local_84;
    *(undefined1 *)(puVar9 + 5) = 1;
    if (puVar9 != (undefined4 *)0x0) {
      (**(code **)(local_2c + 0xc))(puVar9);
    }
    (**(code **)(*local_8c + 0x1c))(local_8c);
    local_8c[3] = (int)puVar9;
    local_8c[2] = local_84;
  }
  iVar8 = local_8c[2];
  piVar14 = (int *)local_8c[3];
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0xc))(piVar14);
  }
  (**(code **)(*local_88 + 0x1c))(local_88);
  local_88[3] = (int)piVar14;
  local_88[2] = iVar8;
  FUN_4a168b90(auStack_70);
  iVar8 = 0;
  if (0 < local_84) {
    local_30 = PTR_PTR_4a0a3730;
    do {
      uVar6 = FUN_4a0bfbdc(auStack_80);
      iVar15 = 0;
      if (param_1[3] != 0) {
        iVar15 = *(int *)(param_1[3] + 8);
      }
      *(undefined2 *)(iVar15 + iVar8 * 2) = uVar6;
      uVar6 = FUN_4a0bfbdc(auStack_80);
      iVar15 = 0;
      if (param_1[8] != 0) {
        iVar15 = *(int *)(param_1[8] + 8);
      }
      *(undefined2 *)(iVar15 + iVar8 * 2) = uVar6;
      iVar15 = FUN_4a0bfbdc(auStack_80);
      if (0 < iVar15) {
        iVar16 = 0;
        if (param_1[0xd] != 0) {
          iVar16 = *(int *)(param_1[0xd] + 8);
        }
        piVar17 = (int *)(iVar16 + iVar8 * 0x14);
        piVar14 = (int *)FUN_4a0c6bc0(local_98);
        piVar14[2] = 0;
        piVar14[3] = 0;
        local_34 = iVar15 * 2;
        *piVar14 = (int)local_30;
        iVar16 = FUN_4a15e080(local_34);
        if (iVar16 == 0) {
          iVar16 = FUN_4a1669a8();
        }
        iVar11 = 0;
        do {
          iVar13 = iVar11 * 2;
          iVar11 = iVar11 + 1;
          *(undefined2 *)(iVar16 + iVar13) = 0;
        } while (iVar11 < iVar15);
        thunk_FUN_4a161570(0x18);
        piVar12 = (int *)FUN_4a0c0628();
        piVar12[3] = 2;
        piVar12[4] = iVar15;
        *piVar12 = (int)local_2c;
        piVar12[2] = iVar16;
        *(undefined1 *)(piVar12 + 5) = 1;
        if (piVar12 != (int *)0x0) {
          (**(code **)(local_2c + 0xc))(piVar12);
        }
        (**(code **)(*piVar14 + 0x1c))(piVar14);
        piVar14[2] = iVar15;
        piVar14[3] = (int)piVar12;
        if (piVar12 != (int *)0x0) {
          (**(code **)(*piVar12 + 0xc))(piVar12);
        }
        (**(code **)(*piVar17 + 0x1c))(piVar17);
        piVar17[2] = iVar15;
        piVar17[3] = (int)piVar12;
        FUN_4a16c1a0(local_98);
        if (param_1[0x12] == 0) {
          iVar16 = 0;
        }
        else {
          iVar16 = *(int *)(param_1[0x12] + 8);
        }
        piVar17 = (int *)(iVar16 + iVar8 * 0x14);
        piVar14 = (int *)FUN_4a0c6bc0(local_98);
        piVar14[2] = 0;
        piVar14[3] = 0;
        *piVar14 = (int)local_30;
        if (0 < iVar15) {
          iVar16 = FUN_4a15e080(local_34);
          if (iVar16 == 0) {
            iVar16 = FUN_4a1669a8();
          }
          iVar11 = 0;
          do {
            iVar13 = iVar11 * 2;
            iVar11 = iVar11 + 1;
            *(undefined2 *)(iVar16 + iVar13) = 0;
          } while (iVar11 < iVar15);
          thunk_FUN_4a161570(0x18);
          puVar9 = (undefined4 *)FUN_4a0c0628();
          puVar9[3] = 2;
          puVar9[4] = iVar15;
          *puVar9 = local_2c;
          puVar9[2] = iVar16;
          *(undefined1 *)(puVar9 + 5) = 1;
          if (puVar9 != (undefined4 *)0x0) {
            (**(code **)(local_2c + 0xc))(puVar9);
          }
          (**(code **)(*piVar14 + 0x1c))(piVar14);
          piVar14[2] = iVar15;
          piVar14[3] = (int)puVar9;
        }
        iVar16 = piVar14[2];
        piVar14 = (int *)piVar14[3];
        if (piVar14 != (int *)0x0) {
          (**(code **)(*piVar14 + 0xc))(piVar14);
        }
        (**(code **)(*piVar17 + 0x1c))(piVar17);
        piVar17[2] = iVar16;
        piVar17[3] = (int)piVar14;
        FUN_4a16c1a0(local_98);
        if (param_1[0x17] == 0) {
          iVar16 = 0;
        }
        else {
          iVar16 = *(int *)(param_1[0x17] + 8);
        }
        piVar17 = (int *)(iVar16 + iVar8 * 0x14);
        piVar14 = (int *)FUN_4a0c6bc0(local_ac);
        piVar14[2] = 0;
        piVar14[3] = 0;
        *piVar14 = (int)puVar3;
        if (0 < iVar15) {
          iVar16 = FUN_4a15e080(iVar15);
          if (iVar16 == 0) {
            iVar16 = FUN_4a1669a8();
          }
          iVar11 = 0;
          do {
            *(undefined1 *)(iVar16 + iVar11) = 0;
            iVar11 = iVar11 + 1;
          } while (iVar11 < iVar15);
          thunk_FUN_4a161570(0x18);
          puVar9 = (undefined4 *)FUN_4a0c0628();
          *puVar9 = local_2c;
          puVar9[3] = 1;
          puVar9[4] = iVar15;
          puVar9[2] = iVar16;
          *(undefined1 *)(puVar9 + 5) = 1;
          if (puVar9 != (undefined4 *)0x0) {
            (**(code **)(local_2c + 0xc))(puVar9);
          }
          (**(code **)(*piVar14 + 0x1c))(piVar14);
          piVar14[2] = iVar15;
          piVar14[3] = (int)puVar9;
        }
        iVar16 = piVar14[2];
        piVar14 = (int *)piVar14[3];
        if (piVar14 != (int *)0x0) {
          (**(code **)(*piVar14 + 0xc))(piVar14);
        }
        (**(code **)(*piVar17 + 0x1c))(piVar17);
        piVar12 = local_a0;
        puVar2 = local_a4;
        piVar17[2] = iVar16;
        piVar17[3] = (int)piVar14;
        local_ac[0] = puVar3;
        bVar18 = local_a0 != (int *)0x0;
        cVar1 = '\0';
        iVar16 = 0;
        if (bVar18) {
          iVar16 = local_a0[2];
          cVar1 = (char)local_a0[5];
        }
        bVar19 = local_a0 == (int *)0x0;
        local_a0 = (int *)0x0;
        local_a4 = (undefined *)0x0;
        if ((bVar19) || (iVar11 = (**(code **)(*piVar12 + 8))(piVar12), iVar11 == 0)) {
          bVar4 = 0;
        }
        else {
          (**(code **)(*piVar12 + 4))(piVar12);
          bVar4 = 1;
        }
        iVar11 = 0;
        if ((bool)((bVar18 && cVar1 != '\0') & bVar4)) {
          iVar11 = iVar16;
        }
        if (iVar11 != 0) {
          iVar16 = 0;
          if (0 < (int)puVar2) {
            do {
              iVar16 = iVar16 + 1;
            } while (iVar16 < (int)puVar2);
            if (iVar11 == 0) goto LAB_4a0a3630;
          }
          FUN_4a14f21c(iVar11);
        }
LAB_4a0a3630:
        FUN_4a0c6bf4(local_ac);
        iVar16 = 0;
        iVar11 = 1;
        if (1 < iVar15 + 1) {
          do {
            uVar6 = FUN_4a0bfbdc(auStack_80);
            if (param_1[0xd] == 0) {
              iVar13 = 0;
            }
            else {
              iVar13 = *(int *)(param_1[0xd] + 8);
            }
            iVar13 = *(int *)(iVar13 + iVar8 * 0x14 + 0xc);
            if (iVar13 == 0) {
              iVar13 = 0;
            }
            else {
              iVar13 = *(int *)(iVar13 + 8);
            }
            *(undefined2 *)(iVar13 + iVar16 * 2) = uVar6;
            uVar6 = FUN_4a0bfbdc(auStack_80);
            if (param_1[0x12] == 0) {
              iVar13 = 0;
            }
            else {
              iVar13 = *(int *)(param_1[0x12] + 8);
            }
            iVar13 = *(int *)(iVar13 + iVar8 * 0x14 + 0xc);
            if (iVar13 == 0) {
              iVar13 = 0;
            }
            else {
              iVar13 = *(int *)(iVar13 + 8);
            }
            *(undefined2 *)(iVar13 + iVar16 * 2) = uVar6;
            uVar5 = FUN_4a0bf920(auStack_80);
            iVar11 = iVar11 + 1;
            if (param_1[0x17] == 0) {
              iVar13 = 0;
            }
            else {
              iVar13 = *(int *)(param_1[0x17] + 8);
            }
            iVar13 = *(int *)(iVar13 + iVar8 * 0x14 + 0xc);
            if (iVar13 == 0) {
              iVar13 = 0;
            }
            else {
              iVar13 = *(int *)(iVar13 + 8);
            }
            *(undefined1 *)(iVar13 + iVar16) = uVar5;
            iVar16 = iVar16 + 1;
          } while (iVar11 < iVar15 + 1);
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < local_84);
  }
  FUN_4a0bfcf4(auStack_80);
  return 1;
}



// Address: 4a0a3734

undefined4 * FUN_4a0a3734(void)

{
  int iVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  puVar3 = (undefined4 *)FUN_4a0c6bc0();
  puVar2 = PTR_PTR_4a0a3840;
  iVar7 = 0;
  puVar3[2] = 0;
  *puVar3 = puVar2;
  puVar3[3] = 0;
  puVar3 = (undefined4 *)FUN_4a0c6bc0(puVar3 + 5);
  puVar3[2] = 0;
  *puVar3 = puVar2;
  puVar3[3] = 0;
  puVar3 = (undefined4 *)FUN_4a0c6bc0(puVar3 + 5);
  puVar2 = PTR_PTR_4a0a3844;
  puVar3[2] = 0;
  *puVar3 = puVar2;
  puVar3[3] = 0;
  puVar3 = (undefined4 *)FUN_4a0c6bc0(puVar3 + 5);
  puVar3[2] = 0;
  *puVar3 = puVar2;
  puVar3[3] = 0;
  puVar3 = (undefined4 *)FUN_4a0c6bc0(puVar3 + 5);
  puVar2 = PTR_PTR_4a0a3848;
  puVar3[2] = 0;
  *puVar3 = puVar2;
  puVar3[3] = 0;
  puVar3[5] = 0;
  uVar4 = thunk_FUN_4a161570(0x4010);
  iVar8 = -1;
  puVar3[5] = uVar4;
  do {
    iVar1 = iVar7 * 0x40;
    iVar5 = FUN_4a0d4b28(iVar1,iVar1);
    iVar6 = FUN_4a0d4b28(iVar5,iVar1);
    *(int *)(puVar3[5] + (iVar8 + 1) * 4) = iVar5 * -3 + iVar6 * 2 + 0x10000;
    *(int *)(puVar3[5] + (iVar8 + 2) * 4) = iVar5 * 3 + iVar6 * -2;
    *(int *)(puVar3[5] + (iVar8 + 3) * 4) = iVar6 + iVar5 * -2 + iVar1;
    iVar8 = iVar8 + 4;
    iVar7 = iVar7 + 1;
    *(int *)(puVar3[5] + iVar8 * 4) = iVar6 - iVar5;
  } while (iVar7 < 0x401);
  return puVar3 + -0x14;
}



// Address: 4a0a384c

void FUN_4a0a384c(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 100) != 0) {
    thunk_FUN_4a161530();
    *(undefined4 *)(param_1 + 100) = 0;
  }
  iVar2 = FUN_4a168b90(param_1 + 0x50);
  iVar2 = FUN_4a169024(iVar2 + -0x14);
  iVar2 = FUN_4a169024(iVar2 + -0x14);
  iVar2 = FUN_4a16c1a0(iVar2 + -0x14);
  puVar3 = PTR_PTR_4a16c264;
  *(undefined4 *)(iVar2 + -0x14) = PTR_PTR_4a16c264;
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
      if (iVar4 == 0) goto FUN_4a0c0660;
    }
    FUN_4a14f21c();
  }
FUN_4a0c0660:
  *(undefined4 *)(iVar2 + -0x14) = PTR_PTR_4a0c0674;
  *(undefined4 *)(iVar2 + -0x10) = 0xffffffff;
  return;
}



// Address: 4a0a3898

void FUN_4a0a3898(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_c;
  int iStack_8;
  
  if (param_3 == DAT_4a0a38b4) {
    iVar1 = param_1 + 0x14;
  }
  else {
    iVar1 = param_1 + 4;
  }
  uStack_c = param_2;
  iStack_8 = param_3;
  FUN_4a16fd60(iVar1,&uStack_c,param_3,param_4,param_1);
  return;
}



// Address: 4a0a38c4

int FUN_4a0a38c4(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = PTR_PTR_4a0a38e0;
  iVar1 = FUN_4a16fd86(param_1 + 1,0);
  iVar1 = FUN_4a16fd86(iVar1 + 0x10,0);
  return iVar1 + -0x14;
}



// Address: 4a0a38e4

void FUN_4a0a38e4(int param_1)

{
  if (param_1 != 0) {
    FUN_4a0a38f8();
    thunk_FUN_4a161530();
  }
  return;
}



// Address: 4a0a38f8

int FUN_4a0a38f8(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = PTR_PTR_4a0a3914;
  iVar1 = FUN_4a16fde0(param_1 + 5);
  iVar1 = FUN_4a16fde0(iVar1 + -0x10);
  return iVar1 + -4;
}



// Address: 4a0a3918

uint FUN_4a0a3918(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  do {
    if (*(int *)(uVar1 * 0xc + param_1 + 0xc) == 0) {
      uVar2 = uVar1 + 1;
      if (uVar1 + 1 <= *(uint *)(param_1 + 4)) {
        uVar2 = *(uint *)(param_1 + 4);
      }
      *(uint *)(param_1 + 4) = uVar2;
      param_1 = uVar1 * 0xc + param_1;
      *(undefined4 *)(param_1 + 0xc) = param_3;
      *(undefined4 *)(param_1 + 8) = param_2;
      *(uint *)(param_1 + 0x10) = (uint)*(ushort *)(*(int *)PTR_DAT_4a0a395c + 0x574);
      return uVar1;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 200);
  return 0;
}



// Address: 4a0a3960

undefined4 * FUN_4a0a3960(undefined4 *param_1)

{
  *param_1 = PTR_PTR_4a0a3980;
  param_1[1] = 0;
  thunk_FUN_4a00121c(param_1 + 2,0x960);
  return param_1;
}



// Address: 4a0a3984

void FUN_4a0a3984(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_4a161530();
  }
  return;
}



// Address: 4a0a3996

undefined4 FUN_4a0a3996(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_6c [36];
  undefined1 auStack_48 [36];
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  int local_18;
  
  uStack_24 = param_1;
  iStack_20 = param_2;
  iStack_1c = param_3;
  local_18 = param_4;
  iVar1 = thunk_FUN_4a142724();
  if ((iVar1 == 0) || (iVar1 = thunk_FUN_4a1428ec(param_1), iVar1 < param_2)) {
LAB_4a0a39b2:
    uVar2 = 0;
  }
  else {
    thunk_FUN_4a0ecbc4(auStack_48);
    thunk_FUN_4a0ebe34(auStack_48,param_1);
    for (iVar1 = 1; iVar1 < param_2; iVar1 = iVar1 + 1) {
      iVar3 = thunk_FUN_4a1429c4(auStack_48,1);
      thunk_FUN_4a0ecbc4(auStack_6c);
      iVar4 = thunk_FUN_4a141bb0(auStack_48,auStack_6c,1,param_3,iVar3,local_18);
      if (iVar4 == 0) {
        thunk_FUN_4a0ecbf0(auStack_6c);
        thunk_FUN_4a0ecbf0(auStack_48);
        goto LAB_4a0a39b2;
      }
      if (local_18 != 0) {
        thunk_FUN_4a0eb424(auStack_6c,0x80,2);
      }
      param_3 = param_3 + iVar3;
      thunk_FUN_4a0ebe34(auStack_48,auStack_6c);
      thunk_FUN_4a0ecbf0(auStack_6c);
    }
    thunk_FUN_4a0ecbf0(auStack_48);
    uVar2 = 1;
  }
  return uVar2;
}



// Address: 4a0a3a32

int FUN_4a0a3a32(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = thunk_FUN_4a142724();
  if (iVar1 == 0) {
    *param_2 = -1;
    iVar2 = 0;
  }
  else {
    iVar1 = thunk_FUN_4a1428ec(param_1);
    iVar2 = *param_2;
    if (iVar2 == -1) {
      *param_2 = iVar1;
    }
    else {
      iVar4 = iVar1;
      if (iVar2 <= iVar1) {
        iVar4 = iVar2;
      }
      *param_2 = iVar4;
    }
    iVar2 = 0;
    for (iVar4 = 1; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      iVar3 = thunk_FUN_4a1429c4(param_1,iVar4);
      iVar2 = iVar3 + iVar2;
    }
  }
  return iVar2;
}



// Address: 4a0a3a82

int FUN_4a0a3a82(int param_1)

{
  int iVar1;
  
  iVar1 = (*(uint *)(param_1 + 4) & 3) + 1;
  if ((*(uint *)(param_1 + 4) & 0x3ffff) >> 2 == 3) {
    iVar1 = iVar1 * iVar1;
  }
  return iVar1;
}



// Address: 4a0a3a98

void FUN_4a0a3a98(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_4a135c30(param_2,*param_1);
  param_1[4] = uVar1;
  return;
}



// Address: 4a0a3aac

undefined4 FUN_4a0a3aac(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_1b4 [256];
  undefined1 local_b4 [160];
  
  local_b4[0] = 0;
  FUN_4a09c2ec(param_2,local_b4,0xa0,1);
  iVar1 = FUN_4a0013e0(local_b4);
  uVar2 = thunk_FUN_4a161570(iVar1 + 1);
  *param_1 = uVar2;
  FUN_4a0012bc(uVar2,local_b4);
  FUN_4a09c2ec(param_2,local_b4,0xa0,1);
  iVar1 = FUN_4a09c588(local_b4,PTR_PTR_4a0a3b84,param_1 + 1);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_4a09c5bc(param_2,param_1 + 2);
  iVar1 = FUN_4a0a3a82(param_1);
  uVar2 = FUN_4a161570(iVar1 * 4 * param_1[2]);
  param_1[3] = uVar2;
  FUN_4a09c29a(param_2,auStack_1b4,0xff,0);
  iVar3 = thunk_FUN_4a00142c(auStack_1b4,s_no_default_4a0a3b88);
  if (iVar3 == 0) {
    thunk_FUN_4a001274(param_1[3],param_1[2] * iVar1 * 4);
    FUN_4a09c2ec(param_2,auStack_1b4,0xff,0);
  }
  else {
    uVar4 = (param_1[1] & 0x3ffff) >> 2;
    if (uVar4 != 1) {
      if (uVar4 == 2) {
        FUN_4a09c44c(param_2,param_1[3],iVar1 * param_1[2],4);
        return 1;
      }
      if (uVar4 != 3) {
        return 0;
      }
    }
    FUN_4a09c508(param_2,param_1[3],iVar1 * param_1[2]);
  }
  return 1;
}



// Address: 4a0a3b94

void FUN_4a0a3b94(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int extraout_r1;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_134;
  undefined4 local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114 [60];
  int local_24;
  int local_20;
  int iStack_1c;
  int local_18;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if ((uVar1 & 1) == 0) {
    return;
  }
  uVar6 = *(uint *)(param_1 + 0xc);
  if (uVar6 == 0) {
    return;
  }
  local_20 = param_2 + 0x4c;
  iStack_1c = param_1;
  local_18 = param_2;
  if ((int)(uVar1 * 0x40000000) < 0) {
    local_118 = uVar6;
    for (local_11c = 0; (int)local_11c < *(int *)(param_1 + 8); local_11c = local_11c + 1) {
      local_24 = local_11c * 0xc;
      uVar1 = *(uint *)(local_118 + local_24);
      uVar6 = *(uint *)(local_24 + local_118 + 4);
      uVar7 = *(uint *)(local_24 + local_118 + 8);
      if (*(int *)(local_18 + 0x14) == 1) {
        uVar2 = thunk_FUN_4a1725c0(uVar1,*(undefined4 *)(local_18 + 0x70));
        uVar3 = thunk_FUN_4a1725c0(uVar6,*(undefined4 *)(local_18 + 0x74));
        local_12c = thunk_FUN_4a1725c0(uVar7,*(undefined4 *)(local_18 + 0x78));
        local_134 = uVar2;
        local_130 = uVar3;
        FUN_4a13f43a(&local_128,local_20,&local_134);
        uVar7 = local_120;
        uVar6 = local_124;
        uVar1 = local_128;
        FUN_4a13f604(&local_134,local_20);
        uVar2 = thunk_FUN_4a141af8(&local_134);
        uVar4 = thunk_FUN_4a1725c0(uVar2,0x3f800000);
        if (DAT_4a0a3ddc < (int)(uVar4 & 0x7fffffff)) {
          uVar2 = thunk_FUN_4a17211c(uVar2,uVar2);
          uVar1 = thunk_FUN_4a171bb8(uVar1,uVar2);
          uVar6 = thunk_FUN_4a171bb8(uVar6,uVar2);
LAB_4a0a3ca6:
          uVar7 = thunk_FUN_4a171bb8(uVar7,uVar2);
        }
      }
      else if (*(int *)(local_18 + 0x14) == 0) {
        FUN_4a13f604(&local_128,local_18 + 0x1c);
        uVar2 = thunk_FUN_4a141af8(&local_128);
        local_12c = thunk_FUN_4a17295c(uVar2,1);
        uVar4 = thunk_FUN_4a1725c0(local_12c,0x3f800000);
        if (DAT_4a0a3ddc < (int)(uVar4 & 0x7fffffff)) {
          local_130 = thunk_FUN_4a17211c(local_12c,local_12c);
          uVar1 = thunk_FUN_4a171bb8(uVar1,local_130);
          uVar6 = thunk_FUN_4a171bb8(uVar6,local_130);
          uVar2 = local_130;
          goto LAB_4a0a3ca6;
        }
      }
      *(uint *)((int)local_114 + local_24) = uVar1;
      iVar8 = local_24;
      *(uint *)((int)local_114 + local_24 + 4) = uVar6;
      *(uint *)((int)local_114 + iVar8 + 8) = uVar7;
    }
  }
  else {
    if (-1 < (int)(uVar1 << 0x1d)) {
      thunk_FUN_4a1652fc();
      param_1 = extraout_r1 >> 4;
      FUN_4a0a4a32(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 8),uVar6 | 0x20);
      goto LAB_4a0a3dba;
    }
    for (iVar8 = 0; iVar8 < *(int *)(param_1 + 8); iVar8 = iVar8 + 1) {
      iVar5 = iVar8 * 0xc + uVar6;
      local_120 = *(uint *)(uVar6 + iVar8 * 0xc);
      local_11c = *(uint *)(iVar5 + 4);
      local_118 = *(uint *)(iVar5 + 8);
      if (*(int *)(local_18 + 0x14) == 1) {
        FUN_4a13f43a(&local_12c,local_20,&local_120,&local_118);
        local_120 = local_12c;
        local_11c = local_128;
        local_118 = local_124;
        thunk_FUN_4a0e4cdc(&local_120);
      }
      local_114[iVar8 * 3] = local_120;
      local_114[iVar8 * 3 + 1] = local_11c;
      local_114[iVar8 * 3 + 2] = local_118;
    }
  }
  FUN_4a0a4a6a(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 8),local_114);
LAB_4a0a3dba:
  if ((*(uint *)(param_1 + 0x14) & 7) >> 1 == 0) {
    uVar1 = *(uint *)(param_1 + 0x14) & 0xfffffffe;
    *(uint *)(param_1 + 0x14) = uVar1;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x14);
  }
  if ((int)(uVar1 << 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}



// Address: 4a0a3de0

void FUN_4a0a3de0(int param_1)

{
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 1;
  return;
}



// Address: 4a0a3dec

void FUN_4a0a3dec(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_18;
  
  local_18 = 0;
  if (*param_1 != 0) {
    local_18 = param_4;
    local_18 = FUN_4a0013e0();
    local_18 = local_18 + 1;
  }
  FUN_4a039aec(&local_18,1,0x1f,4);
  puVar1 = PTR_DAT_4a0a3eb0;
  if (local_18 != 0) {
    if (*PTR_DAT_4a0a3eb0 == '\0') {
      iVar2 = *param_1;
    }
    else {
      iVar2 = thunk_FUN_4a161570();
      *param_1 = iVar2;
    }
    FUN_4a039b90(iVar2,local_18,8,1);
  }
  FUN_4a03c12c(param_1 + 1,1,0x20,4);
  FUN_4a039aec(param_1 + 2,1,0x1f,4);
  FUN_4a03c12c(param_1 + 5,1,0x20,4);
  if (-1 < param_1[5] << 0x1c) {
    iVar2 = FUN_4a0a3a82(param_1);
    if (*puVar1 != '\0') {
      iVar3 = FUN_4a161570(param_1[2] * iVar2 * 4);
      param_1[3] = iVar3;
    }
    uVar4 = param_1[1] & DAT_4a0a3eb4;
    if ((uVar4 == 4) || (uVar4 == 0xc)) {
      FUN_4a0399e0(param_1[3],iVar2 * param_1[2],0x20,4);
    }
    else if ((param_1[1] & 0x3ffffU) >> 2 == 2) {
      FUN_4a039aec(param_1[3],iVar2 * param_1[2],0x1f,4);
    }
  }
  return;
}



// Address: 4a0a3eb8

void FUN_4a0a3eb8(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 1;
  return;
}



// Address: 4a0a3ec8

undefined4 * FUN_4a0a3ec8(undefined4 *param_1)

{
  thunk_FUN_4a161530(*param_1);
  if (-1 < (int)(param_1[5] << 0x1c)) {
    FUN_4a161530(param_1[3]);
  }
  if (param_1[4] != 0) {
    FUN_4a0a4aa6();
    thunk_FUN_4a161530();
  }
  return param_1;
}



// Address: 4a0a3ef6

void FUN_4a0a3ef6(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)(param_1 + 0xc);
  FUN_4a060608();
  *(undefined2 *)(param_1 + 0xc) = uVar1;
  return;
}



// Address: 4a0a3f22

void FUN_4a0a3f22(int param_1)

{
  if (param_1 != 0) {
    FUN_4a070830();
    thunk_FUN_4a161530();
  }
  return;
}



// Address: 4a0a3f3c

void FUN_4a0a3f3c(void)

{
  host_s3eMemoryGetInt_thumb(1);
  return;
}



// Address: 4a0a3f4a

void FUN_4a0a3f4a(void)

{
  host_s3eMemoryGetInt_thumb(4);
  return;
}



// Address: 4a0a3f58

void FUN_4a0a3f58(undefined4 param_1,undefined4 param_2)

{
  host_s3eFreeBase_thumb(param_2);
  return;
}



// Address: 4a0a3f6a

void FUN_4a0a3f6a(void)

{
  host_s3eMemoryGetInt_thumb(2);
  return;
}



// Address: 4a0a3f78

void FUN_4a0a3f78(void)

{
  host_s3eMemoryGetInt_thumb(3);
  return;
}



// Address: 4a0a3f98

void FUN_4a0a3f98(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a070808();
  *puVar1 = PTR_PTR_4a0a3fac;
  puVar1[1] = PTR_s_System_4a0a3fb0;
  return;
}



// Address: 4a0a3fb4

void FUN_4a0a3fb4(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_4a161530();
  }
  return;
}



// Address: 4a0a3fc6

undefined4
FUN_4a0a3fc6(ushort *param_1,uint param_2,uint param_3,uint *param_4,uint *param_5,int param_6)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined1 local_30 [8];
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  
  if (param_1[2] == param_2) {
    *param_4 = (uint)*param_1;
    *param_5 = (uint)param_1[1];
    param_1[1] = param_1[1] + (short)param_3;
    param_3 = param_1[3] - param_3;
    param_1[3] = (ushort)param_3;
LAB_4a0a4010:
    if ((param_3 & 0xffff) != 0) {
      return 0;
    }
    return 1;
  }
  uVar1 = param_1[3];
  *param_4 = (uint)*param_1;
  if (uVar1 == param_3) {
    *param_5 = (uint)param_1[1];
    *param_1 = *param_1 + (short)param_2;
    param_3 = param_1[2] - param_2;
    param_1[2] = (ushort)param_3;
    goto LAB_4a0a4010;
  }
  local_24 = 0;
  *param_5 = (uint)param_1[1];
  local_18 = (uint)param_1[3];
  local_1c = local_18 - param_3;
  local_20 = local_1c * 4;
  uVar6 = 0;
  if (local_20 - param_2 != 0 && (int)param_2 <= local_20) {
    uVar6 = param_2;
  }
  uVar7 = (uint)param_1[2];
  uVar2 = uVar7 - param_2;
  uVar8 = 0;
  if ((int)uVar2 < (int)(local_18 * 4)) {
    uVar8 = uVar2;
  }
  local_28 = 0;
  if ((int)uVar2 < (int)(param_3 * 4)) {
    local_28 = uVar2;
  }
  uVar4 = 0;
  if ((int)uVar7 < local_20) {
    uVar4 = uVar7;
  }
  if (((uVar6 == 0 && uVar8 == 0) && local_28 == 0) && uVar4 == 0) {
    iVar5 = param_2 * local_1c;
    if ((int)(param_2 * local_1c) <= (int)(uVar2 * local_18)) {
      iVar5 = uVar2 * local_18;
    }
    iVar3 = local_1c * uVar7;
    if ((int)(local_1c * uVar7) < (int)(param_3 * uVar2)) {
      iVar3 = param_3 * uVar2;
    }
    if (iVar5 <= iVar3) goto LAB_4a0a40ac;
  }
  else {
    if ((int)uVar6 <= (int)uVar8) {
      uVar6 = uVar8;
    }
    uVar8 = local_28;
    if ((int)local_28 <= (int)uVar4) {
      uVar8 = uVar4;
    }
    if ((int)uVar6 <= (int)uVar8) goto LAB_4a0a40ac;
  }
  local_24 = 1;
LAB_4a0a40ac:
  FUN_4a0a41ae(local_30,0,0,0x80,0x100);
  FUN_4a0a41ae(&local_38,0,0,0x80,0x100);
  if (local_24 == 0) {
    FUN_4a0a41ae(&local_40,*param_1 + param_2,param_1[1],param_1[2] - param_2,param_3);
    uVar6 = param_1[3] - param_3;
    uVar8 = (uint)param_1[2];
    param_2 = (uint)*param_1;
    param_3 = param_1[1] + param_3;
  }
  else {
    FUN_4a0a41ae(&local_40,*param_1,param_1[1] + param_3,param_2,param_1[3] - param_3);
    uVar6 = (uint)param_1[3];
    param_3 = (uint)param_1[1];
    uVar8 = param_1[2] - param_2;
    param_2 = *param_1 + param_2;
  }
  FUN_4a0a41ae(&local_40,param_2,param_3,uVar8,uVar6);
  local_38 = local_40;
  uStack_34 = uStack_3c;
  thunk_FUN_4a000f84(param_1,local_30,8,local_30);
  FUN_4a16e534(param_6 + 0x1c,&local_38);
  return 0;
}




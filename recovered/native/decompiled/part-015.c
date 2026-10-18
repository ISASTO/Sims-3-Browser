/* AUTOMATED DECOMPILER OUTPUT. Not original source, not a buildable game.
 * Function boundaries, types, indirect calls, and data still require validation. */

// Address: 4a0d585c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0d585c(int param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar4 = *(int *)(param_1 + 0x790) + param_2;
  if (DAT_4a0d58cc <= iVar4) {
    iVar4 = DAT_4a0d58cc;
  }
  *(int *)(param_1 + 0x790) = iVar4;
  if (param_2 < 0) {
    *(int *)(param_1 + 0x794) = *(int *)(param_1 + 0x794) - param_2;
    return;
  }
  if (999 < iVar4) {
    FUN_4a0daefc(param_1,0x2a);
  }
  if (*(int *)(param_1 + 0x790) < 5000) {
    return;
  }
  iVar4 = 0x3d;
  do {
    uStack_28 = *(undefined4 *)(param_1 + 0x18);
    uStack_2c = FUN_4a0fba7c();
    bVar3 = false;
    uVar5 = FUN_4a16b5a0(auStack_40,param_1 + 0x7e0);
    iVar6 = FUN_4a16fe9c((char)iVar4,uVar5,0);
    FUN_4a16b6c0(auStack_40);
    if (iVar6 == -1) {
      if (*(char *)(param_1 + 0x7d9) == iVar4) {
        *(undefined1 *)(param_1 + 0x7d9) = 0xff;
        bVar3 = true;
        iVar6 = 4;
        *(undefined4 *)(param_1 + 0x7dc) = 0;
      }
    }
    else {
      bVar3 = true;
      if (*(int *)(param_1 + 0x7ec) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(*(int *)(param_1 + 0x7ec) + 8);
      }
      *(undefined1 *)(iVar7 + iVar6) = 0xff;
    }
    uVar8 = 0;
    if (iVar4 == 0) {
      uVar8 = 4;
    }
    else if (iVar4 == 1) {
      uVar8 = 8;
    }
    uVar10 = 0;
    *(uint *)(param_1 + 0x7f8) = uVar8 | *(uint *)(param_1 + 0x7f8);
    if (*(int *)(param_1 + 400) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(*(int *)(param_1 + 400) + 8);
    }
    uVar2 = *(ushort *)(iVar7 + *(char *)(param_1 + 0x7d8) * 2);
    uVar8 = 0;
    iVar7 = 0;
    if (0 < *(int *)(param_1 + 0x1a0)) {
      do {
        iVar9 = 0;
        if (*(int *)(param_1 + 0x1b8) != 0) {
          iVar9 = *(int *)(*(int *)(param_1 + 0x1b8) + 8);
        }
        if ((*(ushort *)(iVar9 + iVar7 * 2) & uVar2) != 0) {
          uVar1 = 1 << (uVar10 & 0xff);
          if (iVar4 == iVar7) {
            if ((*(uint *)(param_1 + 0x7f4) & uVar1) == 0) {
              bVar3 = true;
              *(uint *)(param_1 + 0x7f4) = *(uint *)(param_1 + 0x7f4) | uVar1;
              goto LAB_4a0db034;
            }
LAB_4a0db040:
            uVar8 = uVar8 + 1;
          }
          else {
LAB_4a0db034:
            if ((uVar1 & *(uint *)(param_1 + 0x7f4)) != 0) goto LAB_4a0db040;
          }
          uVar10 = uVar10 + 1;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_1 + 0x1a0));
    }
    if (bVar3) {
      FUN_4a0fd124(uStack_28,iVar4);
      FUN_4a1182e0(uStack_2c,iVar4,iVar6);
      uVar5 = FUN_4a0941ec();
      FUN_4a094d68(uVar5,iVar4);
    }
    if (uVar8 == uVar10) {
      *(uint *)(param_1 + 0x7f8) = *(uint *)(param_1 + 0x7f8) | 1;
    }
    iVar6 = FUN_4a145968(uStack_28);
    if ((iVar6 == 0) &&
       (iVar7 = *(int *)(param_1 + 0x1a0), iVar6 = FUN_4a145b3c(uStack_28), iVar6 == iVar7)) {
      FUN_4a10ea2c(uStack_2c);
    }
    if (iVar4 != 0x15) {
      return;
    }
    iVar6 = (*(ushort *)(param_1 + 0x810) + 1) * 0x10000;
    iVar7 = iVar6 >> 0x10;
    if (0xf < iVar7) {
      iVar4 = 0x2b;
    }
    *(short *)(param_1 + 0x810) = (short)((uint)iVar6 >> 0x10);
    if (iVar7 < 0x10) {
      return;
    }
  } while( true );
}



// Address: 4a0d58d0

void FUN_4a0d58d0(int param_1)

{
  *(undefined4 *)(param_1 + 0x984) = 0x9c4;
  return;
}



// Address: 4a0d58e0

/* WARNING: Removing unreachable block (ram,0x4a116204) */

void FUN_4a0d58e0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_4a0df248();
  *(undefined1 *)(param_1 + 0x7d9) = uVar1;
  *(undefined4 *)(param_1 + 0x7dc) = 0;
  iVar2 = FUN_4a0fba7c(*(undefined4 *)(param_1 + 0x18));
  FUN_4a0ff3f8(*(undefined4 *)(iVar2 + 0x20),400);
  iVar3 = FUN_4a14155c(*(undefined4 *)(iVar2 + 0x24));
  if (iVar3 == 0) {
    FUN_4a0ce9a4(iVar2,0xa48);
  }
  else {
    FUN_4a0ce964(iVar2,0xa47);
  }
  *(undefined4 *)(iVar2 + 0x1c0) = 0xe;
  *(undefined4 *)(iVar2 + 0x1c4) = 0;
  *(undefined1 *)(iVar2 + 0x1dc) = 1;
  host_s3eAccelerometerStop_arm();
                    /* WARNING: Could not recover jumptable at 0x4a116200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_caseD_0_4a116240)();
  return;
}



// Address: 4a0d5908

void FUN_4a0d5908(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined1 auStack_4c [20];
  undefined1 auStack_38 [20];
  
  if (*(int *)(param_1 + 0x83c) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x83c) + 8);
  }
  piVar5 = (int *)(param_1 + 0x844);
  piVar6 = (int *)(param_1 + 0x86c);
  piVar4 = (int *)(param_1 + 0x858);
  if (iVar1 == 0) {
    iVar1 = FUN_4a16be24(auStack_4c,*(undefined4 *)(param_1 + 0x1c0));
    uVar8 = *(undefined4 *)(iVar1 + 8);
    piVar7 = *(int **)(iVar1 + 0xc);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0xc))(piVar7);
    }
    (**(code **)(*(int *)(param_1 + 0x830) + 0x1c))((int *)(param_1 + 0x830));
    *(undefined4 *)(param_1 + 0x838) = uVar8;
    *(int **)(param_1 + 0x83c) = piVar7;
    FUN_4a16bef4(auStack_4c);
    iVar1 = FUN_4a16be24(auStack_4c,*(undefined4 *)(param_1 + 0x1c0));
    uVar8 = *(undefined4 *)(iVar1 + 8);
    piVar7 = *(int **)(iVar1 + 0xc);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0xc))(piVar7);
    }
    (**(code **)(*piVar5 + 0x1c))(piVar5);
    *(int **)(param_1 + 0x850) = piVar7;
    *(undefined4 *)(param_1 + 0x84c) = uVar8;
    FUN_4a16bef4(auStack_4c);
    iVar1 = FUN_4a16be24(auStack_4c,*(undefined4 *)(param_1 + 0x1c0));
    uVar8 = *(undefined4 *)(iVar1 + 8);
    piVar7 = *(int **)(iVar1 + 0xc);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0xc))(piVar7);
    }
    (**(code **)(*piVar6 + 0x1c))(piVar6);
    *(int **)(param_1 + 0x878) = piVar7;
    *(undefined4 *)(param_1 + 0x874) = uVar8;
    FUN_4a16bef4(auStack_4c);
    iVar1 = FUN_4a16be24(auStack_4c,*(undefined4 *)(param_1 + 0x1c0));
    uVar8 = *(undefined4 *)(iVar1 + 8);
    piVar7 = *(int **)(iVar1 + 0xc);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0xc))(piVar7);
    }
    (**(code **)(*piVar4 + 0x1c))(piVar4);
    *(int **)(param_1 + 0x864) = piVar7;
    *(undefined4 *)(param_1 + 0x860) = uVar8;
    FUN_4a16bef4(auStack_4c);
  }
  FUN_4a0c740c(param_1 + 0x1d8,0,param_1 + 0x830,0,*(undefined4 *)(param_1 + 0x1c0));
  FUN_4a0c740c(param_1 + 0x1ec,0,piVar5,0,*(undefined4 *)(param_1 + 0x1c0));
  iVar1 = FUN_4a16bdcc(auStack_38,piVar6);
  iVar2 = 0;
  if (0 < *(int *)(iVar1 + 8)) {
    do {
      if (*(int *)(iVar1 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar1 + 0xc) + 8);
      }
      *(undefined4 *)(iVar3 + iVar2 * 4) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar1 + 8));
  }
  FUN_4a16bef4(auStack_38);
  iVar1 = FUN_4a16bdcc(auStack_38,piVar4);
  iVar2 = 0;
  if (0 < *(int *)(iVar1 + 8)) {
    do {
      if (*(int *)(iVar1 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar1 + 0xc) + 8);
      }
      *(undefined4 *)(iVar3 + iVar2 * 4) = 0x10000;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar1 + 8));
  }
  FUN_4a16bef4(auStack_38);
  *(undefined4 *)(param_1 + 0x82c) = 0;
  return;
}



// Address: 4a0d5b78

undefined4 FUN_4a0d5b78(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520);
  iVar2 = FUN_4a145524(uVar7);
  iVar6 = 0;
  if (0 < iVar2) {
    do {
      uVar3 = FUN_4a144940(uVar7,param_2,iVar6);
      iVar4 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),uVar3);
      if (*(short *)(iVar4 + 0x1a) < 1) {
        return 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  iVar6 = 0;
  if (0 < iVar2) {
    do {
      uVar3 = FUN_4a144940(uVar7,param_2,iVar6);
      iVar4 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),uVar3);
      cVar1 = *(char *)(iVar4 + 0x18);
      iVar4 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),uVar3);
      iVar5 = *(short *)(iVar4 + 0x1a) + -1;
      iVar4 = (int)cVar1;
      if (iVar5 <= cVar1) {
        iVar4 = iVar5;
      }
      iVar5 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),uVar3);
      iVar6 = iVar6 + 1;
      *(short *)(iVar5 + 0x1a) = (short)(char)iVar4;
    } while (iVar6 < iVar2);
  }
  *(undefined4 *)(param_1 + 0x79c) = param_2;
  return 1;
}



// Address: 4a0d5c70

void FUN_4a0d5c70(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 auStack_9c [12];
  int local_90;
  undefined1 auStack_88 [12];
  int local_7c;
  undefined1 auStack_74 [12];
  int local_68;
  undefined1 auStack_60 [12];
  int local_54;
  undefined1 auStack_4c [12];
  int local_40;
  undefined1 auStack_38 [12];
  int local_2c;
  
  uVar10 = *(undefined4 *)(param_1 + 0x18);
  FUN_4a16c074(auStack_38,param_1 + 0x880);
  iVar9 = 0;
  FUN_4a16bdcc(auStack_4c,param_1 + 0x894);
  FUN_4a16b5a0(auStack_60,param_1 + 0x2cc);
  FUN_4a16bdcc(auStack_74,param_1 + 0x290);
  FUN_4a16b5a0(auStack_88,param_1 + 0x2a4);
  iVar8 = 0;
  do {
    if (local_2c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(local_2c + 8);
    }
    iVar1 = (int)*(short *)(iVar1 + iVar8 * 2);
    if (iVar1 != -1) {
      if (local_54 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(local_54 + 8);
      }
      if (((*(byte *)(iVar2 + iVar1) & 2) == 0) && (iVar2 = FUN_4a0de610(param_1,iVar1), iVar2 == 0)
         ) {
LAB_4a0d5de4:
        FUN_4a0d955c(param_1,iVar1);
      }
      else {
        if (local_68 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(local_68 + 8);
        }
        if (local_40 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(local_40 + 8);
        }
        piVar7 = (int *)(iVar6 + iVar8 * 4);
        iVar2 = *(int *)(iVar2 + iVar1 * 4);
        *piVar7 = *piVar7 + param_2;
        if (local_40 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(local_40 + 8);
        }
        iVar2 = iVar2 * 1000;
        if (iVar2 < *(int *)(iVar6 + iVar8 * 4)) {
          if (local_40 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(local_40 + 8);
          }
          *(int *)(iVar6 + iVar8 * 4) = iVar2;
          if (local_7c == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(local_7c + 8);
          }
          if (*(char *)(iVar2 + iVar1) == -1) {
            iVar2 = FUN_4a0de610(param_1,iVar1);
            if (iVar2 == 0) goto LAB_4a0d5de4;
            if (iVar1 == 2) {
              uVar3 = thunk_FUN_4a161570(0x14);
              uVar3 = FUN_4a0c707c(uVar3,s_starvation_4a0d60d8);
              uVar4 = FUN_4a0941ec();
              FUN_4a094d04(uVar4,uVar3);
              uVar10 = FUN_4a0fba7c(uVar10);
              FUN_4a10ce54(uVar10,0xb63);
              goto LAB_4a0d6074;
            }
            if (iVar1 == 5) {
              FUN_4a0fba7c(uVar10);
              FUN_4a127b24();
              *(undefined4 *)(param_1 + 0x984) = 0x9c4;
              FUN_4a0deea8(param_1,iVar8,4);
              goto LAB_4a0d60a4;
            }
            if (iVar1 == 10) {
              FUN_4a0d9d54(param_1,2,0x320000);
              FUN_4a0d955c(param_1,10);
              iVar8 = FUN_4a0fba7c(uVar10);
              iVar9 = FUN_4a146ea4();
              if (iVar9 == 0) {
                uVar10 = *(undefined4 *)(iVar8 + 0x5f8);
                iVar8 = FUN_4a135678(uVar10);
                if (iVar8 == 0) {
                  FUN_4a076d54(uVar10);
                }
                FUN_4a073914(uVar10,4,0,0,0);
              }
              goto LAB_4a0d6074;
            }
          }
          else {
            if (local_7c == 0) {
              iVar2 = 0;
            }
            else {
              iVar2 = *(int *)(local_7c + 8);
            }
            FUN_4a0deea8(param_1,iVar8,(int)*(char *)(iVar2 + iVar1));
          }
        }
      }
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 6);
  iVar1 = *(int *)(param_1 + 0x278);
  iVar8 = 0;
  if (0 < iVar1) {
    do {
      if (local_54 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(local_54 + 8);
      }
      if (((*(byte *)(iVar2 + iVar8) & 8) == 0) && (iVar2 = FUN_4a0de610(param_1,iVar8), iVar2 != 0)
         ) {
        iVar2 = iVar8;
        if (iVar8 == 3) {
          iVar6 = FUN_4a0fba7c(*(undefined4 *)(param_1 + 0x18));
          if (*(int *)(*(int *)(iVar6 + 0x5f8) + 0xdc) == 0x36) {
LAB_4a0d5f84:
            iVar2 = 6;
          }
          else {
            FUN_4a16c074(auStack_9c,param_1 + 0x880);
            iVar6 = 0;
            do {
              if (local_90 == 0) {
                iVar5 = 0;
              }
              else {
                iVar5 = *(int *)(local_90 + 8);
              }
              if (*(short *)(iVar5 + iVar6 * 2) == 6) {
                FUN_4a16c1a0(auStack_9c);
                if (iVar6 == -1) goto LAB_4a0d5f88;
                goto LAB_4a0d5f84;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < 6);
            FUN_4a16c1a0(auStack_9c);
          }
        }
LAB_4a0d5f88:
        FUN_4a16c074(auStack_9c,param_1 + 0x880);
        iVar6 = 0;
        do {
          if (local_90 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(local_90 + 8);
          }
          if (*(short *)(iVar5 + iVar6 * 2) == iVar2) {
            FUN_4a16c1a0(auStack_9c);
            goto LAB_4a0d5ff8;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < 6);
        FUN_4a16c1a0(auStack_9c);
        iVar6 = -1;
LAB_4a0d5ff8:
        if (iVar6 == -1) {
          if (*(int *)(param_1 + 0x2c4) == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)(*(int *)(param_1 + 0x2c4) + 8);
          }
          if (*(char *)(iVar8 + iVar2) != -1) {
            if (*(int *)(param_1 + 0x808) != 0) {
              iVar9 = *(int *)(*(int *)(param_1 + 0x808) + 8);
            }
            *(undefined4 *)(iVar9 + *(char *)(iVar8 + iVar2) * 4) = 0xffffffff;
          }
          uVar10 = FUN_4a16c074(auStack_9c,param_1 + 0x880);
          iVar8 = FUN_4a16ff5c(0xffffffff,uVar10,0);
          FUN_4a16c1a0(auStack_9c);
          switchD_4a11cc8c::default(iVar8 != -1,PTR_s_no_free_buff_slots_4a0d60e4);
          FUN_4a0deea8(param_1,iVar8,iVar2);
LAB_4a0d6074:
          *(undefined4 *)(param_1 + 0x984) = 0x9c4;
          break;
        }
        if (iVar2 == 6) {
          if (*(int *)(param_1 + 0x8a0) == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(*(int *)(param_1 + 0x8a0) + 8);
          }
          *(undefined4 *)(iVar2 + iVar6 * 4) = 0;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar1);
  }
LAB_4a0d60a4:
  FUN_4a16b6c0(auStack_88);
  FUN_4a16bef4(auStack_74);
  FUN_4a16b6c0(auStack_60);
  FUN_4a16bef4(auStack_4c);
  FUN_4a16c1a0(auStack_38);
  return;
}



// Address: 4a0d60e8

uint FUN_4a0d60e8(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar1 = FUN_4a0d8e58(param_1,param_3,param_4);
    iVar3 = 0;
    if (*(int *)(param_1 + 0x5a0) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0x5a0) + 8);
    }
    iVar2 = *(int *)(iVar2 + param_4 * 0x14 + 0xc);
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 8);
    }
    return ~(*(uint *)(iVar3 + iVar1 * 4) >> 0xe) & 1;
  }
  return 1;
}



// Address: 4a0d6154

void FUN_4a0d6154(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x838) < 1) {
    return;
  }
  do {
    if (*(int *)(param_1 + 0x83c) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0x83c) + 8);
    }
    *(undefined4 *)(iVar2 + iVar1 * 4) = 0x320000;
    iVar1 = iVar1 + 1;
  } while (iVar1 < *(int *)(param_1 + 0x838));
  return;
}



// Address: 4a0d6194

uint FUN_4a0d6194(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar5 = DAT_4a0d63fc;
  uVar6 = *(uint *)(param_1 + 0x78c);
  iVar2 = (int)((longlong)(int)uVar6 * (longlong)DAT_4a0d63fc + ((ulonglong)uVar6 << 0x20) >> 0x20);
  uVar4 = (iVar2 >> 10) - (iVar2 >> 0x1f);
  iVar2 = (int)((longlong)(int)uVar4 * (longlong)DAT_4a0d6400 + ((ulonglong)uVar4 << 0x20) >> 0x20);
  iVar9 = ((iVar2 >> 2) - (iVar2 >> 0x1f)) * -7 + uVar4;
  iVar2 = (int)((longlong)(int)uVar6 * (longlong)DAT_4a0d63fc + ((ulonglong)uVar6 << 0x20) >> 0x20);
  iVar8 = uVar6 + ((iVar2 >> 10) - (iVar2 >> 0x1f)) * -0x5a0;
  iVar10 = 0x1e0;
  iVar2 = FUN_4a13fc4c(param_1,param_2,10);
  if (iVar2 == -1) {
    iVar2 = FUN_4a13fc4c(param_1,param_2,0xb);
    if (iVar2 != -1) {
      iVar10 = 0x1a4;
    }
  }
  else {
    iVar10 = 0x21c;
  }
  iVar2 = iVar10 + -600;
  if (*(int *)(param_1 + 0x4ac) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x4ac) + 8);
  }
  iVar3 = (int)*(char *)(iVar3 + param_2);
  if (iVar3 == -1) {
    uVar4 = 8;
  }
  else {
    if (*(int *)(param_1 + 0x4c0) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0x4c0) + 8);
    }
    if (*(int *)(param_1 + 300) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(*(int *)(param_1 + 300) + 8);
    }
    iVar10 = *(int *)(iVar7 + iVar3 * 0x14 + 0xc);
    iVar2 = (int)*(char *)(iVar2 + param_2);
    if (iVar10 == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = *(int *)(iVar10 + 8);
    }
    if (param_2 == 0) {
      iVar7 = (int)*(char *)(param_1 + 0x7b4);
    }
    iVar10 = (int)*(short *)(iVar10 + iVar2 * 2);
    if (param_2 == 0 && iVar7 == iVar9) {
LAB_4a0d6364:
      uVar4 = 8;
    }
    else {
      if (param_2 == 0) {
        *(undefined1 *)(param_1 + 0x7b4) = 0xff;
      }
      if (*(int *)(param_1 + 0x118) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(*(int *)(param_1 + 0x118) + 8);
      }
      iVar7 = *(int *)(iVar7 + iVar3 * 0x14 + 0xc);
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(iVar7 + 8);
      }
      if (((int)*(short *)(iVar7 + iVar2 * 2) & *(uint *)(PTR_DAT_4a0d6404 + iVar9 * 4)) == 0)
      goto LAB_4a0d6364;
      if (*(int *)(param_1 + 0x140) == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(*(int *)(param_1 + 0x140) + 8);
      }
      iVar9 = *(int *)(iVar9 + iVar3 * 0x14 + 0xc);
      if (iVar9 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(iVar9 + 8);
      }
      if (iVar8 < iVar10 + -0x1e) goto LAB_4a0d6364;
      if (iVar8 < iVar10) {
        uVar4 = 1;
      }
      else if (iVar8 < iVar10 + 0x3c) {
        uVar4 = 2;
      }
      else {
        if (*(short *)(iVar9 + iVar2 * 2) <= iVar8) goto LAB_4a0d6364;
        uVar4 = 4;
      }
    }
    iVar2 = iVar10 + -0x294;
    iVar10 = iVar10 + -0x3c;
  }
  uVar6 = iVar2 + 0x5a0;
  iVar2 = (int)((longlong)(int)uVar6 * (longlong)iVar5 + ((ulonglong)uVar6 << 0x20) >> 0x20);
  iVar2 = uVar6 + ((iVar2 >> 10) - (iVar2 >> 0x1f)) * -0x5a0;
  uVar6 = iVar10 + 0x5a0;
  iVar5 = (int)((longlong)(int)uVar6 * (longlong)iVar5 + ((ulonglong)uVar6 << 0x20) >> 0x20);
  iVar5 = uVar6 + ((iVar5 >> 10) - (iVar5 >> 0x1f)) * -0x5a0;
  if (iVar2 < iVar5) {
    if (iVar2 <= iVar8) {
joined_r0x4a0d63dc:
      if (iVar8 <= iVar5) goto LAB_4a0d63e0;
    }
    bVar1 = false;
  }
  else {
    if (iVar8 < iVar2) goto joined_r0x4a0d63dc;
LAB_4a0d63e0:
    bVar1 = true;
  }
  if (bVar1) {
    uVar4 = uVar4 | 0x10;
  }
  return uVar4;
}



// Address: 4a0d619c

uint FUN_4a0d619c(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar5 = DAT_4a0d63fc;
  iVar2 = (int)((longlong)(int)param_3 * (longlong)DAT_4a0d63fc + ((ulonglong)param_3 << 0x20) >>
               0x20);
  uVar4 = (iVar2 >> 10) - (iVar2 >> 0x1f);
  iVar2 = (int)((longlong)(int)uVar4 * (longlong)DAT_4a0d6400 + ((ulonglong)uVar4 << 0x20) >> 0x20);
  iVar9 = ((iVar2 >> 2) - (iVar2 >> 0x1f)) * -7 + uVar4;
  iVar2 = (int)((longlong)(int)param_3 * (longlong)DAT_4a0d63fc + ((ulonglong)param_3 << 0x20) >>
               0x20);
  iVar8 = param_3 + ((iVar2 >> 10) - (iVar2 >> 0x1f)) * -0x5a0;
  iVar10 = 0x1e0;
  iVar2 = FUN_4a13fc4c(param_1,param_2,10);
  if (iVar2 == -1) {
    iVar2 = FUN_4a13fc4c(param_1,param_2,0xb);
    if (iVar2 != -1) {
      iVar10 = 0x1a4;
    }
  }
  else {
    iVar10 = 0x21c;
  }
  iVar2 = iVar10 + -600;
  if (*(int *)(param_1 + 0x4ac) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x4ac) + 8);
  }
  iVar3 = (int)*(char *)(iVar3 + param_2);
  if (iVar3 == -1) {
    uVar4 = 8;
  }
  else {
    if (*(int *)(param_1 + 0x4c0) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0x4c0) + 8);
    }
    if (*(int *)(param_1 + 300) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(*(int *)(param_1 + 300) + 8);
    }
    iVar10 = *(int *)(iVar7 + iVar3 * 0x14 + 0xc);
    iVar2 = (int)*(char *)(iVar2 + param_2);
    if (iVar10 == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = *(int *)(iVar10 + 8);
    }
    if (param_2 == 0) {
      iVar7 = (int)*(char *)(param_1 + 0x7b4);
    }
    iVar10 = (int)*(short *)(iVar10 + iVar2 * 2);
    if (param_2 == 0 && iVar7 == iVar9) {
LAB_4a0d6364:
      uVar4 = 8;
    }
    else {
      if (param_2 == 0) {
        *(undefined1 *)(param_1 + 0x7b4) = 0xff;
      }
      if (*(int *)(param_1 + 0x118) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(*(int *)(param_1 + 0x118) + 8);
      }
      iVar7 = *(int *)(iVar7 + iVar3 * 0x14 + 0xc);
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(iVar7 + 8);
      }
      if (((int)*(short *)(iVar7 + iVar2 * 2) & *(uint *)(PTR_DAT_4a0d6404 + iVar9 * 4)) == 0)
      goto LAB_4a0d6364;
      if (*(int *)(param_1 + 0x140) == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(*(int *)(param_1 + 0x140) + 8);
      }
      iVar9 = *(int *)(iVar9 + iVar3 * 0x14 + 0xc);
      if (iVar9 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(iVar9 + 8);
      }
      if (iVar8 < iVar10 + -0x1e) goto LAB_4a0d6364;
      if (iVar8 < iVar10) {
        uVar4 = 1;
      }
      else if (iVar8 < iVar10 + 0x3c) {
        uVar4 = 2;
      }
      else {
        if (*(short *)(iVar9 + iVar2 * 2) <= iVar8) goto LAB_4a0d6364;
        uVar4 = 4;
      }
    }
    iVar2 = iVar10 + -0x294;
    iVar10 = iVar10 + -0x3c;
  }
  uVar6 = iVar2 + 0x5a0;
  iVar2 = (int)((longlong)(int)uVar6 * (longlong)iVar5 + ((ulonglong)uVar6 << 0x20) >> 0x20);
  iVar2 = uVar6 + ((iVar2 >> 10) - (iVar2 >> 0x1f)) * -0x5a0;
  uVar6 = iVar10 + 0x5a0;
  iVar5 = (int)((longlong)(int)uVar6 * (longlong)iVar5 + ((ulonglong)uVar6 << 0x20) >> 0x20);
  iVar5 = uVar6 + ((iVar5 >> 10) - (iVar5 >> 0x1f)) * -0x5a0;
  if (iVar2 < iVar5) {
    if (iVar2 <= iVar8) {
joined_r0x4a0d63dc:
      if (iVar8 <= iVar5) goto LAB_4a0d63e0;
    }
    bVar1 = false;
  }
  else {
    if (iVar8 < iVar2) goto joined_r0x4a0d63dc;
LAB_4a0d63e0:
    bVar1 = true;
  }
  if (bVar1) {
    uVar4 = uVar4 | 0x10;
  }
  return uVar4;
}



// Address: 4a0d6408

void FUN_4a0d6408(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x53c) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x53c) + 8);
  }
  puVar2 = (uint *)(iVar1 + param_2 * 4);
  *puVar2 = *puVar2 & 0xf7ffffff;
  if (*(int *)(param_1 + 0x954) != 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x954) + 8);
  }
  *(undefined2 *)(iVar3 + param_2 * 2) = param_3;
  return;
}



// Address: 4a0d6448

void FUN_4a0d6448(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  
  param_2 = *(int *)(param_1 + 0x7dc) + param_2;
  *(int *)(param_1 + 0x7dc) = param_2;
  iVar8 = 0;
  if (*(char *)(param_1 + 0x7d9) == -1) {
    if (120000 < param_2) {
      uVar1 = FUN_4a0df248(param_1);
      *(undefined1 *)(param_1 + 0x7d9) = uVar1;
      *(undefined4 *)(param_1 + 0x7dc) = 0;
      FUN_4a0fba7c(*(undefined4 *)(param_1 + 0x18));
      FUN_4a10ffbc();
    }
  }
  else if (240000 < param_2) {
    uVar2 = FUN_4a0fba7c(*(undefined4 *)(param_1 + 0x18));
    FUN_4a117498(uVar2,(int)*(char *)(param_1 + 0x7d9));
    *(undefined1 *)(param_1 + 0x7d9) = 0xff;
    *(undefined4 *)(param_1 + 0x7dc) = 0;
  }
  iVar7 = *(int *)(param_1 + 0x78c);
  iVar6 = 0;
  if (*(int *)(param_1 + 0x804) < 1) {
    return;
  }
  do {
    iVar3 = *(int *)(param_1 + 0x808);
    iVar4 = iVar8;
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + 8);
    }
    iVar5 = *(int *)(iVar4 + iVar6 * 4);
    bVar10 = SCARRY4(iVar5,1);
    iVar4 = iVar5 + 1;
    bVar9 = iVar5 != -1;
    if (bVar9) {
      iVar5 = iVar7 - iVar5;
      bVar10 = SBORROW4(iVar5,0x10e0);
      iVar4 = iVar5 + -0x10e0;
    }
    if ((bVar9 && iVar5 != 0x10e0) && iVar4 < 0 == bVar10) {
      iVar4 = iVar8;
      if (iVar3 != 0) {
        iVar4 = *(int *)(iVar3 + 8);
      }
      *(int *)(iVar4 + iVar6 * 4) = iVar7;
      iVar4 = iVar8;
      if (*(int *)(param_1 + 0x270) != 0) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x270) + 8);
      }
      FUN_4a0daefc(param_1,(int)*(char *)(iVar4 + iVar6));
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < *(int *)(param_1 + 0x804));
  return;
}



// Address: 4a0d6554

/* WARNING: Type propagation algorithm not settling */

uint FUN_4a0d6554(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_2c [20];
  
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520);
  pbVar8 = (byte *)0x0;
  if (param_2 == 0xc) {
switchD_4a0d6588_caseD_b:
    if (param_2 == 0xb) {
      bVar7 = 0x10;
    }
    else if (param_2 == 0xc) {
      bVar7 = 4;
    }
    else {
      bVar7 = 8;
    }
    uVar9 = *(uint *)(param_1 + 0x410);
    iVar3 = 1;
    if ((int)uVar9 < 2) {
      uVar5 = 0;
    }
    else {
      uVar5 = ~uVar9 & 1;
    }
    if (1 < uVar5 + 1) {
      do {
        if (*(int *)(param_1 + 0x8d0) == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(*(int *)(param_1 + 0x8d0) + 8);
        }
        if (*(int *)(param_1 + 0x3a4) == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = *(int *)(*(int *)(param_1 + 0x3a4) + 8);
        }
        if ((*(byte *)(iVar10 + *(char *)(iVar6 + iVar3)) & bVar7) == 0) {
          return 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(uVar5 + 1));
    }
    iVar3 = uVar5 + 1;
    if ((int)uVar9 <= iVar3) {
      return 0;
    }
    iVar10 = *(int *)(param_1 + 0x3a4);
    iVar6 = *(int *)(param_1 + 0x8d0);
    while( true ) {
      if (iVar6 == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = *(int *)(iVar6 + 8);
      }
      if (iVar10 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)(iVar10 + 8);
      }
      if ((*(byte *)(iVar12 + *(char *)(iVar11 + iVar3)) & bVar7) == 0) break;
      if (iVar6 == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = *(int *)(iVar6 + 8);
      }
      if (iVar10 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)(iVar10 + 8);
      }
      if ((*(byte *)(iVar12 + *(char *)(iVar11 + iVar3 + 1)) & bVar7) == 0) {
        return 1;
      }
      iVar3 = iVar3 + 2;
      if ((int)uVar9 <= iVar3) {
        return 0;
      }
    }
    return 1;
  }
  if (0xc < param_2) {
    if (param_2 == 0x29) {
      iVar3 = FUN_4a144a94(uVar2,0x1f);
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = FUN_4a144194(uVar2,0x82);
      if (iVar3 == 0) {
        iVar3 = FUN_4a144194(uVar2,0x83);
        if (iVar3 == 0) {
          return 1;
        }
        return 0;
      }
      return 0;
    }
    if (param_2 < 0x2a) {
      if (param_2 != 0xd) {
        if (param_2 == 0x13) {
          if (*(int *)(param_1 + 0x4ac) != 0) {
            pbVar8 = *(byte **)(*(int *)(param_1 + 0x4ac) + 8);
          }
          if (*pbVar8 != 0xff) {
            return 0;
          }
          return 1;
        }
        if (param_2 == 0x1a) {
          uVar5 = FUN_4a142f80(uVar2);
          uVar9 = 0;
          if (0 < (int)uVar5) {
            uVar9 = uVar5 & 1;
          }
          iVar3 = 0;
          if (uVar9 != 0) {
            do {
              iVar6 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),iVar3);
              if ((*(short *)(iVar6 + 0x1a) == 0) &&
                 (iVar6 = FUN_4a143130(uVar2,iVar3), (*(uint *)(iVar6 + 0x10) & 4) != 0)) {
                return 1;
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < (int)uVar9);
          }
          while( true ) {
            if ((int)uVar5 <= (int)uVar9) {
              return 0;
            }
            iVar3 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),uVar9);
            if ((*(short *)(iVar3 + 0x1a) == 0) &&
               (iVar3 = FUN_4a143130(uVar2,uVar9), (*(uint *)(iVar3 + 0x10) & 4) != 0)) break;
            iVar3 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),uVar9 + 1);
            if ((*(short *)(iVar3 + 0x1a) == 0) &&
               (iVar3 = FUN_4a143130(uVar2,uVar9 + 1), (*(uint *)(iVar3 + 0x10) & 4) != 0)) {
              return 1;
            }
            uVar9 = uVar9 + 2;
          }
          return 1;
        }
        if (param_2 != 0x28) {
          return 1;
        }
        iVar3 = FUN_4a144a94(uVar2,0xd);
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = FUN_4a144194(uVar2,0x6f);
        if (iVar3 != 0) {
          return 0;
        }
        iVar3 = FUN_4a144194(uVar2,0x6e);
        if (iVar3 != 0) {
          return 0;
        }
        iVar3 = FUN_4a144194(uVar2,0x70);
        if (iVar3 != 0) {
          return 0;
        }
        iVar3 = FUN_4a144194(uVar2,0x6d);
        if (iVar3 != 0) {
          return 0;
        }
        return 1;
      }
      goto switchD_4a0d6588_caseD_b;
    }
    if (param_2 == 0x2a) {
      if (*(int *)(param_1 + 0x790) < 500) {
        return 1;
      }
      return 0;
    }
    if (param_2 != 0x31) {
      if (param_2 != 0x35 && param_2 != 0x36) {
        return 1;
      }
      if (*(int *)(param_1 + 0x4ac) == 0) {
        pcVar4 = (char *)0x0;
      }
      else {
        pcVar4 = *(char **)(*(int *)(param_1 + 0x4ac) + 8);
      }
      if (*pcVar4 == -1) {
        return 0;
      }
      iVar3 = FUN_4a14039c(param_1,0);
      if (*(int *)(param_1 + 0x4ac) == 0) {
        pcVar4 = (char *)0x0;
      }
      else {
        pcVar4 = *(char **)(*(int *)(param_1 + 0x4ac) + 8);
      }
      if (*(int *)(param_1 + 0xf0) != 0) {
        pbVar8 = *(byte **)(*(int *)(param_1 + 0xf0) + 8);
      }
      if (*(int *)(pbVar8 + *pcVar4 * 0x14 + 8) <= iVar3) {
        return 0;
      }
      return 1;
    }
switchD_4a0d6588_caseD_a:
    switchD_4a11cc8c::default(1,s_stranger_should_be_0_4a0d6a7c);
    if (*(int *)(param_1 + 0x8d0) != 0) {
      pbVar8 = *(byte **)(*(int *)(param_1 + 0x8d0) + 8);
    }
    iVar3 = 1 - (uint)*pbVar8;
    if (1 < *pbVar8) {
      iVar3 = 0;
    }
    switchD_4a11cc8c::default(iVar3,s_player_rel_state_should_be_stran_4a0d6a94);
    uVar2 = FUN_4a16b5a0(auStack_2c,param_1 + 0x8c4);
    iVar3 = FUN_4a0feb4c(0,uVar2);
    FUN_4a16b6c0(auStack_2c);
    return (uint)(1 < iVar3);
  }
  switch(param_2) {
  case 2:
    iVar3 = FUN_4a143130(uVar2,1);
    sVar1 = *(short *)(iVar3 + 0x1a);
    break;
  case 3:
    iVar3 = FUN_4a143130(uVar2,2);
    sVar1 = *(short *)(iVar3 + 0x1a);
    break;
  case 4:
    iVar3 = FUN_4a143130(uVar2,0);
    sVar1 = *(short *)(iVar3 + 0x1a);
    break;
  case 5:
    uVar9 = FUN_4a144a94(uVar2,0x1b);
    return uVar9 ^ 1;
  case 6:
    uVar9 = FUN_4a144a94(uVar2,5);
    return uVar9 ^ 1;
  case 7:
    if (*(int *)(param_1 + 0x7ac) != 0) {
      pbVar8 = *(byte **)(*(int *)(param_1 + 0x7ac) + 8);
    }
    if ((int)(*(int *)pbVar8 + ((uint)(*(int *)pbVar8 >> 0x1f) >> 0x10)) >> 0x10 < 5) {
      return 1;
    }
    return 0;
  case 8:
    if (*(int *)(param_1 + 0x7ac) != 0) {
      pbVar8 = *(byte **)(*(int *)(param_1 + 0x7ac) + 8);
    }
    iVar3 = *(int *)(pbVar8 + 4) + ((uint)(*(int *)(pbVar8 + 4) >> 0x1f) >> 0x10);
    goto joined_r0x4a0d67c4;
  case 9:
    if (*(int *)(param_1 + 0x7ac) != 0) {
      pbVar8 = *(byte **)(*(int *)(param_1 + 0x7ac) + 8);
    }
    iVar3 = *(int *)(pbVar8 + 8) + ((uint)(*(int *)(pbVar8 + 8) >> 0x1f) >> 0x10);
joined_r0x4a0d67c4:
    if (4 < iVar3 >> 0x10) {
      return 0;
    }
    return 1;
  case 10:
    goto switchD_4a0d6588_caseD_a;
  case 0xb:
    goto switchD_4a0d6588_caseD_b;
  default:
    goto switchD_4a0d6588_default;
  }
  if (sVar1 != 0) {
    return 0;
  }
switchD_4a0d6588_default:
  return 1;
}



// Address: 4a0d6ab8

void FUN_4a0d6ab8(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_38 [36];
  
  FUN_4a096f20(auStack_38);
  iVar5 = 0;
  FUN_4a096ecc(auStack_38,5,4);
  FUN_4a0c80f0();
  piVar1 = (int *)FUN_4a0bf4b4();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))();
  }
  FUN_4a096ce4(auStack_38,piVar1);
  if (*(int *)(param_2 + 0x45c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_2 + 0x45c) + 8);
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = *(undefined4 **)(*(int *)(iVar2 + 0xc) + 8);
  }
  FUN_4a096ecc(auStack_38,*puVar3,1);
  if (*(int *)(param_2 + 0x45c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_2 + 0x45c) + 8);
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar2 + 0xc) + 8);
  }
  FUN_4a096ecc(auStack_38,*(undefined4 *)(iVar2 + 4),0x10);
  if (*(int *)(param_2 + 0x45c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_2 + 0x45c) + 8);
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar2 + 0xc) + 8);
  }
  FUN_4a096ecc(auStack_38,*(undefined4 *)(iVar2 + 8),0x10);
  if (*(int *)(param_2 + 0x45c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_2 + 0x45c) + 8);
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar2 + 0xc) + 8);
  }
  FUN_4a096ecc(auStack_38,*(undefined4 *)(iVar2 + 0xc),3);
  if (*(int *)(param_2 + 0x45c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_2 + 0x45c) + 8);
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar2 + 0xc) + 8);
  }
  FUN_4a096ecc(auStack_38,*(undefined4 *)(iVar2 + 0x2c),0x10);
  if (*(int *)(param_2 + 0x45c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_2 + 0x45c) + 8);
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar2 + 0xc) + 8);
  }
  FUN_4a096ecc(auStack_38,*(undefined4 *)(iVar2 + 0x30),3);
  if (*(int *)(param_2 + 0x45c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_2 + 0x45c) + 8);
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar2 + 0xc) + 8);
  }
  FUN_4a096ecc(auStack_38,*(undefined4 *)(iVar2 + 0x10),0x10);
  if (*(int *)(param_2 + 0x45c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_2 + 0x45c) + 8);
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar2 + 0xc) + 8);
  }
  FUN_4a096ecc(auStack_38,*(undefined4 *)(iVar2 + 0x14),0x10);
  if (*(int *)(param_2 + 0x45c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_2 + 0x45c) + 8);
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar2 + 0xc) + 8);
  }
  FUN_4a096ecc(auStack_38,*(undefined4 *)(iVar2 + 0x18),3);
  if (*(int *)(param_2 + 0x45c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_2 + 0x45c) + 8);
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar2 + 0xc) + 8);
  }
  FUN_4a096ecc(auStack_38,*(undefined4 *)(iVar2 + 0x1c),0x10);
  if (*(int *)(param_2 + 0x45c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_2 + 0x45c) + 8);
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar2 + 0xc) + 8);
  }
  FUN_4a096ecc(auStack_38,*(undefined4 *)(iVar2 + 0x20),3);
  if (*(int *)(param_2 + 0x45c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_2 + 0x45c) + 8);
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar2 + 0xc) + 8);
  }
  FUN_4a096ecc(auStack_38,*(undefined4 *)(iVar2 + 0x24),0x10);
  if (*(int *)(param_2 + 0x45c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_2 + 0x45c) + 8);
  }
  if (*(int *)(iVar2 + 0xc) != 0) {
    iVar5 = *(int *)(*(int *)(iVar2 + 0xc) + 8);
  }
  FUN_4a096ecc(auStack_38,*(undefined4 *)(iVar5 + 0x28),3);
  piVar4 = (int *)FUN_4a145948(*(undefined4 *)(param_2 + 0x18));
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))();
  }
  FUN_4a096ce4(auStack_38,piVar4);
  FUN_4a135cc8(param_1,auStack_38);
  if ((piVar4 != (int *)0x0) && (iVar5 = (**(code **)(*piVar4 + 8))(piVar4), iVar5 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  if ((piVar1 != (int *)0x0) && (iVar5 = (**(code **)(*piVar1 + 8))(piVar1), iVar5 != 0)) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  FUN_4a097040(auStack_38);
  return;
}



// Address: 4a0d6e30

uint FUN_4a0d6e30(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_2 == 0) {
    uVar5 = 0xffffffff;
    uVar1 = FUN_4a142f80(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520));
    if ((int)uVar1 < 1) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar1 & 1;
    }
    uVar4 = 0;
    if (uVar3 != 0) {
      do {
        iVar2 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),uVar4);
        if ((0 < *(short *)(iVar2 + 0x1a)) &&
           (iVar2 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),uVar4),
           (*(uint *)(iVar2 + 0x10) & 2) != 0)) {
          uVar5 = uVar4;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)uVar3);
    }
    for (; (int)uVar3 < (int)uVar1; uVar3 = uVar3 + 2) {
      iVar2 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),uVar3);
      if ((0 < *(short *)(iVar2 + 0x1a)) &&
         (iVar2 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),uVar3),
         (*(uint *)(iVar2 + 0x10) & 2) != 0)) {
        uVar5 = uVar3;
      }
      iVar2 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),uVar3 + 1);
      if ((0 < *(short *)(iVar2 + 0x1a)) &&
         (iVar2 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),uVar3 + 1),
         (*(uint *)(iVar2 + 0x10) & 2) != 0)) {
        uVar5 = uVar3 + 1;
      }
    }
    return uVar5;
  }
  return 0x23;
}



// Address: 4a0d6f44

int FUN_4a0d6f44(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x78c);
  iVar5 = 0;
  if (param_2 == 0 && param_3 == 0) {
    if (*(int *)(param_1 + 0x83c) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(param_1 + 0x83c) + 8);
    }
    iVar3 = FUN_4a0d4b0c(*(undefined4 *)(iVar3 + 4),0x640000);
    iVar3 = FUN_4a0d4b28(0x10000 - iVar3,600);
    iVar3 = iVar3 + iVar4;
  }
  else {
    iVar3 = iVar4 + 600;
  }
  if ((param_2 == 10) && (iVar2 = FUN_4a145968(*(undefined4 *)(param_1 + 0x18)), iVar2 != 0)) {
    cVar1 = '\x04';
  }
  else {
    if (*(int *)(param_1 + 0x4ac) != 0) {
      iVar5 = *(int *)(*(int *)(param_1 + 0x4ac) + 8);
    }
    cVar1 = *(char *)(iVar5 + param_2);
  }
  iVar5 = iVar3;
  if (cVar1 != -1) {
    iVar2 = FUN_4a14085c(param_1,param_2,iVar4);
    iVar2 = iVar2 + -0x3c;
    if (((iVar4 < iVar2) && (iVar2 - iVar4 < 0x5a0)) && (iVar5 = iVar2, iVar3 <= iVar2)) {
      iVar5 = iVar3;
    }
  }
  switchD_4a11cc8c::default(iVar4 <= iVar5,s_can_t_wake_up_in_the_past__4a0d7018);
  return iVar5;
}



// Address: 4a0d7034

void FUN_4a0d7034(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_2c [12];
  int local_20;
  
  FUN_4a16bdcc(auStack_2c,param_1 + 0x7a0);
  iVar4 = 0;
  if (*(int *)(param_1 + 0x7ac) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x7ac) + 8);
  }
  iVar1 = *(int *)(iVar1 + param_2 * 4);
  iVar1 = (int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x10)) >> 0x10;
  if (iVar1 < 5) {
    if (*(int *)(param_1 + 0x3c) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0x3c) + 8);
    }
    iVar2 = *(int *)(iVar2 + param_2 * 0x14 + 0xc);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 8);
    }
    iVar5 = *(int *)(iVar2 + iVar1 * 4);
    iVar2 = FUN_4a13fc4c(param_1,0,0xe);
    if (iVar2 == -1) {
      iVar2 = FUN_4a13fc4c(param_1,0,0xf);
      if (iVar2 != -1) {
        iVar5 = FUN_4a0d4b28(iVar5,0xc000);
      }
    }
    else {
      iVar5 = FUN_4a0d4b28(iVar5,0x14000);
    }
    if (local_20 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(local_20 + 8);
    }
    piVar3 = (int *)(iVar2 + param_2 * 4);
    *piVar3 = *piVar3 + iVar5;
    if (local_20 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(local_20 + 8);
    }
    iVar2 = *(int *)(iVar2 + param_2 * 4);
    iVar1 = (iVar1 + 1) * 0x10000;
    if (iVar1 <= iVar2) {
      iVar2 = iVar1;
    }
    if (local_20 != 0) {
      iVar4 = *(int *)(local_20 + 8);
    }
    *(int *)(iVar4 + param_2 * 4) = iVar2;
  }
  FUN_4a16bef4(auStack_2c);
  return;
}



// Address: 4a0d7160

bool FUN_4a0d7160(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
LAB_4a0d71c8:
    uVar1 = FUN_4a0d619c(param_1,param_3,*(undefined4 *)(param_1 + 0x78c));
    return (uVar1 & 3) != 0;
  }
  iVar3 = 0;
  if (*(int *)(param_1 + 0x4ac) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x4ac) + 8);
  }
  if (*(char *)(iVar2 + param_3) != -1) {
    if (*(int *)(param_1 + 0x8c) != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x8c) + 8);
    }
    if (*(int *)(param_2 + 0x28) == (int)*(short *)(iVar3 + *(char *)(iVar2 + param_3) * 2))
    goto LAB_4a0d71c8;
  }
  return false;
}



// Address: 4a0d71e4

/* WARNING: Removing unreachable block (ram,0x4a0faea0) */
/* WARNING: Removing unreachable block (ram,0x4a0fae9c) */
/* WARNING: Removing unreachable block (ram,0x4a0faebc) */
/* WARNING: Removing unreachable block (ram,0x4a0faf08) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0d71e4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int extraout_r1;
  int iVar5;
  int unaff_r6;
  int iVar6;
  undefined1 auStack_2c [20];
  
  uVar1 = FUN_4a16b5a0(auStack_2c,param_1 + 0x7e0);
  iVar2 = FUN_4a16fe9c(0xffffffff,uVar1,0);
  FUN_4a16b6c0(auStack_2c);
  iVar5 = extraout_r1;
  if (iVar2 != -1) {
    unaff_r6 = param_1 + 0x700;
    iVar5 = (int)*(char *)(param_1 + 0x7d9);
  }
  iVar6 = 0;
  if (iVar2 != -1 && iVar5 != -1) {
    FUN_4a0fd4f0(*(undefined4 *)(param_1 + 0x18));
    if (*(int *)(param_1 + 0x7ec) != 0) {
      iVar6 = *(int *)(*(int *)(param_1 + 0x7ec) + 8);
    }
    *(undefined1 *)(iVar6 + iVar2) = *(undefined1 *)(unaff_r6 + 0xd9);
    *(undefined1 *)(param_1 + 0x7d9) = 0xff;
    *(undefined4 *)(param_1 + 0x7dc) = 0;
    iVar5 = FUN_4a0fba7c(*(undefined4 *)(param_1 + 0x18));
    iVar6 = 0;
    if (*(int *)(iVar5 + 0x708) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(iVar5 + 0x708) + 8);
    }
    FUN_4a0faf80(*(undefined4 *)(iVar3 + 0x10),0);
    if (*(int *)(iVar5 + 0x708) != 0) {
      iVar6 = *(int *)(*(int *)(iVar5 + 0x708) + 8);
    }
    puVar4 = *(undefined4 **)(iVar6 + iVar2 * 4);
    *puVar4 = 3;
    puVar4[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x4a0faeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_caseD_3_4a0faecc)();
    return;
  }
  return;
}



// Address: 4a0d727c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * FUN_4a0d727c(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  
  uVar9 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x60);
  iVar8 = *(int *)(*(int *)(param_1 + 0x18) + 0x520);
  if (param_2 == 0) {
    iVar4 = FUN_4a0d6e30(param_1,0);
    if (iVar4 == -1) {
      iVar8 = 0;
      if (*(int *)(param_1 + 0x4ac) == 0) {
        pcVar5 = (char *)0x0;
      }
      else {
        pcVar5 = *(char **)(*(int *)(param_1 + 0x4ac) + 8);
      }
      cVar1 = *pcVar5;
      if (cVar1 != -1) {
        iVar4 = FUN_4a14039c(param_1,0);
        if (*(int *)(param_1 + 0x118) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(*(int *)(param_1 + 0x118) + 8);
        }
        iVar7 = *(int *)(iVar7 + cVar1 * 0x14 + 0xc);
        if (iVar7 != 0) {
          iVar8 = *(int *)(iVar7 + 8);
        }
        if ((*(ushort *)(iVar8 + iVar4 * 2) & 1) != 0) {
          uVar6 = thunk_FUN_4a161570(0x14);
          iVar8 = FUN_4a135e24(uVar9,0x126);
          goto FUN_4a0c707c;
        }
      }
      uVar6 = thunk_FUN_4a161570(0x14);
      iVar8 = FUN_4a135e24(uVar9,0x127);
    }
    else {
      iVar7 = *(int *)(iVar8 + 0x154);
      if (iVar4 < iVar7) {
        iVar7 = 0;
        if (*(int *)(iVar8 + 0x158) != 0) {
          iVar7 = *(int *)(*(int *)(iVar8 + 0x158) + 8);
        }
        iVar7 = iVar7 + iVar4 * 0x1c;
      }
      else {
        uVar9 = FUN_4a0642fc();
        iVar7 = FUN_4a134d74(uVar9,iVar4 - iVar7);
      }
      sVar2 = *(short *)(iVar7 + 4);
      if (sVar2 != -1) {
        iVar8 = FUN_4a0642fc();
        return *(undefined4 **)(*(int *)(*(int *)(iVar8 + 0x3c) + sVar2 * 4) + 0x24);
      }
      if (iVar4 == 0x22) {
        uVar6 = thunk_FUN_4a161570(0x14);
        iVar8 = FUN_4a135e24(*(undefined4 *)(*(int *)(iVar8 + 0x1c) + 0x60),0x127);
      }
      else if (iVar4 == 0x23) {
        uVar6 = thunk_FUN_4a161570(0x14);
        iVar8 = FUN_4a135e24(*(undefined4 *)(*(int *)(iVar8 + 0x1c) + 0x60),0x125);
      }
      else if (iVar4 == 0x24) {
        uVar6 = thunk_FUN_4a161570(0x14);
        iVar8 = FUN_4a135e24(*(undefined4 *)(*(int *)(iVar8 + 0x1c) + 0x60),0x126);
      }
      else {
        if (iVar4 != 0x25) {
          return (undefined4 *)0x0;
        }
        uVar6 = thunk_FUN_4a161570(0x14);
        iVar8 = FUN_4a135e24(*(undefined4 *)(*(int *)(iVar8 + 0x1c) + 0x60),0x128);
      }
    }
  }
  else {
    uVar6 = thunk_FUN_4a161570(0x14);
    iVar8 = FUN_4a135e24(uVar9,0x125);
  }
FUN_4a0c707c:
  puVar3 = (undefined4 *)FUN_4a0c6bc0(uVar6);
  *puVar3 = PTR_PTR_4a0c70cc;
  puVar3[2] = 0;
  *(undefined1 *)(puVar3 + 3) = 0;
  puVar3[4] = 0;
  if (iVar8 != 0) {
    uVar9 = FUN_4a04d4d0(0,iVar8);
    puVar3[2] = uVar9;
  }
  return puVar3;
}



// Address: 4a0d739c

/* WARNING: Removing unreachable block (ram,0x4a0d775c) */
/* WARNING: Removing unreachable block (ram,0x4a0d7760) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0d739c(int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar12 = 0;
  if (*(int *)(param_1 + 0x76c) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(param_1 + 0x76c) + 8);
  }
  iVar6 = (int)*(short *)(iVar6 + param_2 * 2);
  if (iVar6 != 0) {
    iVar9 = *(int *)(param_1 + 0x790) + iVar6;
    if (DAT_4a0d74f4 <= iVar9) {
      iVar9 = DAT_4a0d74f4;
    }
    *(int *)(param_1 + 0x790) = iVar9;
    if (iVar6 < 0) {
      *(int *)(param_1 + 0x794) = *(int *)(param_1 + 0x794) - iVar6;
    }
    else {
      if (999 < iVar9) {
        FUN_4a0daefc(param_1,0x2a);
      }
      if (4999 < *(int *)(param_1 + 0x790)) {
        FUN_4a0daefc(param_1,0x3d);
      }
    }
    uVar7 = FUN_4a0fba7c(*(undefined4 *)(param_1 + 0x18));
    FUN_4a0cf554(uVar7,0x53);
  }
  if (*(int *)(param_1 + 0x758) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(param_1 + 0x758) + 8);
  }
  iVar6 = (int)*(short *)(iVar6 + param_2 * 2);
  if (iVar6 != -1) {
    iVar9 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),iVar6);
    switchD_4a11cc8c::default(0 < *(short *)(iVar9 + 0x1a),s_invalid_giving_4a0d74f8);
    switchD_4a0de288::default(param_1,iVar6,0xffffffff);
  }
  uVar5 = 0xff;
  if (*(int *)(param_1 + 0x708) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(param_1 + 0x708) + 8);
  }
  if ((*(byte *)(iVar6 + param_2) & 1) != 0) {
    uVar5 = 0xfe;
  }
  if (*(int *)(param_1 + 0x968) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(param_1 + 0x968) + 8);
  }
  *(undefined1 *)(iVar6 + param_2) = uVar5;
  if (*(int *)(param_1 + 0x97c) != 0) {
    iVar12 = *(int *)(*(int *)(param_1 + 0x97c) + 8);
  }
  *(undefined4 *)(iVar12 + param_2 * 4) = *(undefined4 *)(param_1 + 0x78c);
  if (param_2 != 0x15) {
    return;
  }
  iVar12 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520));
  cVar2 = *(char *)(iVar12 + 0x18);
  iVar12 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),0x33);
  iVar6 = *(short *)(iVar12 + 0x1a) + 1;
  iVar12 = (int)cVar2;
  if (iVar6 <= cVar2) {
    iVar12 = iVar6;
  }
  iVar6 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),0x33);
  *(short *)(iVar6 + 0x1a) = (short)(char)iVar12;
  iVar12 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),0x33);
  if ((*(uint *)(iVar12 + 0x10) & 4) == 0) {
    return;
  }
  iVar12 = 0x1a;
  do {
    uStack_28 = *(undefined4 *)(param_1 + 0x18);
    uStack_2c = FUN_4a0fba7c();
    bVar4 = false;
    uVar7 = FUN_4a16b5a0(auStack_40,param_1 + 0x7e0);
    iVar6 = FUN_4a16fe9c((char)iVar12,uVar7,0);
    FUN_4a16b6c0(auStack_40);
    if (iVar6 == -1) {
      if (*(char *)(param_1 + 0x7d9) == iVar12) {
        *(undefined1 *)(param_1 + 0x7d9) = 0xff;
        bVar4 = true;
        iVar6 = 4;
        *(undefined4 *)(param_1 + 0x7dc) = 0;
      }
    }
    else {
      bVar4 = true;
      if (*(int *)(param_1 + 0x7ec) == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(*(int *)(param_1 + 0x7ec) + 8);
      }
      *(undefined1 *)(iVar9 + iVar6) = 0xff;
    }
    uVar8 = 0;
    if (iVar12 == 0) {
      uVar8 = 4;
    }
    else if (iVar12 == 1) {
      uVar8 = 8;
    }
    uVar11 = 0;
    *(uint *)(param_1 + 0x7f8) = uVar8 | *(uint *)(param_1 + 0x7f8);
    if (*(int *)(param_1 + 400) == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(*(int *)(param_1 + 400) + 8);
    }
    uVar3 = *(ushort *)(iVar9 + *(char *)(param_1 + 0x7d8) * 2);
    uVar8 = 0;
    iVar9 = 0;
    if (0 < *(int *)(param_1 + 0x1a0)) {
      do {
        iVar10 = 0;
        if (*(int *)(param_1 + 0x1b8) != 0) {
          iVar10 = *(int *)(*(int *)(param_1 + 0x1b8) + 8);
        }
        if ((*(ushort *)(iVar10 + iVar9 * 2) & uVar3) != 0) {
          uVar1 = 1 << (uVar11 & 0xff);
          if (iVar12 == iVar9) {
            if ((*(uint *)(param_1 + 0x7f4) & uVar1) == 0) {
              bVar4 = true;
              *(uint *)(param_1 + 0x7f4) = *(uint *)(param_1 + 0x7f4) | uVar1;
              goto LAB_4a0db034;
            }
LAB_4a0db040:
            uVar8 = uVar8 + 1;
          }
          else {
LAB_4a0db034:
            if ((uVar1 & *(uint *)(param_1 + 0x7f4)) != 0) goto LAB_4a0db040;
          }
          uVar11 = uVar11 + 1;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(param_1 + 0x1a0));
    }
    if (bVar4) {
      FUN_4a0fd124(uStack_28,iVar12);
      FUN_4a1182e0(uStack_2c,iVar12,iVar6);
      uVar7 = FUN_4a0941ec();
      FUN_4a094d68(uVar7,iVar12);
    }
    if (uVar8 == uVar11) {
      *(uint *)(param_1 + 0x7f8) = *(uint *)(param_1 + 0x7f8) | 1;
    }
    iVar6 = FUN_4a145968(uStack_28);
    if ((iVar6 == 0) &&
       (iVar9 = *(int *)(param_1 + 0x1a0), iVar6 = FUN_4a145b3c(uStack_28), iVar6 == iVar9)) {
      FUN_4a10ea2c(uStack_2c);
    }
    if (iVar12 != 0x15) {
      return;
    }
    iVar6 = (*(ushort *)(param_1 + 0x810) + 1) * 0x10000;
    iVar9 = iVar6 >> 0x10;
    if (0xf < iVar9) {
      iVar12 = 0x2b;
    }
    *(short *)(param_1 + 0x810) = (short)((uint)iVar6 >> 0x10);
    if (iVar9 < 0x10) {
      return;
    }
  } while( true );
}



// Address: 4a0d7508

undefined4 FUN_4a0d7508(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_28 [12];
  int local_1c;
  
  FUN_4a16bdcc(auStack_28,param_1 + 0x814);
  iVar2 = *(int *)(param_1 + 0x78c);
  iVar6 = -1;
  iVar5 = 0;
  iVar1 = 0;
  iVar3 = 1;
  do {
    if (local_1c == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(local_1c + 8);
    }
    iVar4 = *(int *)(iVar4 + iVar1 * 4);
    if (iVar2 - iVar4 < 0x5a1) {
      if (iVar4 == -1) goto LAB_4a0d7580;
LAB_4a0d75a8:
      iVar5 = iVar5 + 1;
    }
    else {
      if (local_1c == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(local_1c + 8);
      }
      *(undefined4 *)(iVar4 + iVar1 * 4) = 0xffffffff;
LAB_4a0d7580:
      if (iVar6 == -1) {
        if (local_1c == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(local_1c + 8);
        }
        *(int *)(iVar6 + iVar1 * 4) = iVar2;
        iVar6 = iVar1;
        if (iVar2 != -1) goto LAB_4a0d75a8;
      }
    }
    iVar3 = iVar3 + 1;
    iVar1 = iVar1 + 1;
    if (10 < iVar3) {
      bVar7 = SCARRY4(iVar6,1);
      iVar1 = iVar6 + 1;
      if (iVar6 != -1) {
        bVar7 = SBORROW4(iVar5,10);
        iVar1 = iVar5 + -10;
      }
      if (iVar1 < 0 != bVar7) {
        if (7 < iVar5) {
          FUN_4a0daefc(param_1,0x3c);
        }
        FUN_4a0daefc(param_1,0x34);
        FUN_4a16bef4(auStack_28);
        return 0;
      }
      FUN_4a16bef4(auStack_28);
      return 1;
    }
  } while( true );
}



// Address: 4a0d7614

void FUN_4a0d7614(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x798) = param_2;
  return;
}



// Address: 4a0d761c

void FUN_4a0d761c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x83c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x83c) + 8);
  }
  *(undefined4 *)(iVar1 + param_2 * 4) = param_3;
  return;
}



// Address: 4a0d7630

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0d7630(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_4a13fc4c(param_1,0,param_2);
  if (iVar1 != -1) {
    return;
  }
  iVar1 = 0;
  if (*(int *)(param_1 + 0x378) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x378) + 8);
  }
  if ((*(short *)(iVar2 + param_2 * 2) != -1) && (iVar2 = FUN_4a13fc4c(param_1,0), iVar2 != -1)) {
    iVar4 = 0;
    if (*(int *)(param_1 + 0x4d4) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(param_1 + 0x4d4) + 8);
    }
    if (*(int *)(iVar3 + 0xc) != 0) {
      iVar4 = *(int *)(*(int *)(iVar3 + 0xc) + 8);
    }
    *(undefined1 *)(iVar2 + iVar4) = 0xff;
  }
  iVar2 = FUN_4a13fc4c(param_1,0,0xffffffff);
  if (iVar2 == -1) {
                    /* WARNING: Could not recover jumptable at 0x4a0d76d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  iVar4 = iVar1;
  if (*(int *)(param_1 + 0x4d4) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x4d4) + 8);
  }
  if (*(int *)(iVar4 + 0xc) != 0) {
    iVar1 = *(int *)(*(int *)(iVar4 + 0xc) + 8);
  }
  *(char *)(iVar1 + iVar2) = (char)param_2;
  return;
}



// Address: 4a0d76fc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void switchD_4a0de288::default(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar5 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520));
  cVar2 = *(char *)(iVar5 + 0x18);
  iVar5 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),param_2);
  iVar6 = *(short *)(iVar5 + 0x1a) + param_3;
  iVar5 = (int)cVar2;
  if (iVar6 <= cVar2) {
    iVar5 = iVar6;
  }
  iVar6 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),param_2);
  *(short *)(iVar6 + 0x1a) = (short)(char)iVar5;
  if (param_3 < 1) {
    return;
  }
  iVar5 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),param_2);
  if ((*(uint *)(iVar5 + 0x10) & 4) == 0) {
    return;
  }
  iVar5 = 0x1a;
  do {
    uStack_28 = *(undefined4 *)(param_1 + 0x18);
    uStack_2c = FUN_4a0fba7c();
    bVar4 = false;
    uVar7 = FUN_4a16b5a0(auStack_40,param_1 + 0x7e0);
    iVar6 = FUN_4a16fe9c((char)iVar5,uVar7,0);
    FUN_4a16b6c0(auStack_40);
    if (iVar6 == -1) {
      if (*(char *)(param_1 + 0x7d9) == iVar5) {
        *(undefined1 *)(param_1 + 0x7d9) = 0xff;
        bVar4 = true;
        iVar6 = 4;
        *(undefined4 *)(param_1 + 0x7dc) = 0;
      }
    }
    else {
      bVar4 = true;
      if (*(int *)(param_1 + 0x7ec) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(*(int *)(param_1 + 0x7ec) + 8);
      }
      *(undefined1 *)(iVar8 + iVar6) = 0xff;
    }
    uVar9 = 0;
    if (iVar5 == 0) {
      uVar9 = 4;
    }
    else if (iVar5 == 1) {
      uVar9 = 8;
    }
    uVar11 = 0;
    *(uint *)(param_1 + 0x7f8) = uVar9 | *(uint *)(param_1 + 0x7f8);
    if (*(int *)(param_1 + 400) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(*(int *)(param_1 + 400) + 8);
    }
    uVar3 = *(ushort *)(iVar8 + *(char *)(param_1 + 0x7d8) * 2);
    uVar9 = 0;
    iVar8 = 0;
    if (0 < *(int *)(param_1 + 0x1a0)) {
      do {
        iVar10 = 0;
        if (*(int *)(param_1 + 0x1b8) != 0) {
          iVar10 = *(int *)(*(int *)(param_1 + 0x1b8) + 8);
        }
        if ((*(ushort *)(iVar10 + iVar8 * 2) & uVar3) != 0) {
          uVar1 = 1 << (uVar11 & 0xff);
          if (iVar5 == iVar8) {
            if ((*(uint *)(param_1 + 0x7f4) & uVar1) == 0) {
              bVar4 = true;
              *(uint *)(param_1 + 0x7f4) = *(uint *)(param_1 + 0x7f4) | uVar1;
              goto LAB_4a0db034;
            }
LAB_4a0db040:
            uVar9 = uVar9 + 1;
          }
          else {
LAB_4a0db034:
            if ((uVar1 & *(uint *)(param_1 + 0x7f4)) != 0) goto LAB_4a0db040;
          }
          uVar11 = uVar11 + 1;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(param_1 + 0x1a0));
    }
    if (bVar4) {
      FUN_4a0fd124(uStack_28,iVar5);
      FUN_4a1182e0(uStack_2c,iVar5,iVar6);
      uVar7 = FUN_4a0941ec();
      FUN_4a094d68(uVar7,iVar5);
    }
    if (uVar9 == uVar11) {
      *(uint *)(param_1 + 0x7f8) = *(uint *)(param_1 + 0x7f8) | 1;
    }
    iVar6 = FUN_4a145968(uStack_28);
    if ((iVar6 == 0) &&
       (iVar8 = *(int *)(param_1 + 0x1a0), iVar6 = FUN_4a145b3c(uStack_28), iVar6 == iVar8)) {
      FUN_4a10ea2c(uStack_2c);
    }
    if (iVar5 != 0x15) {
      return;
    }
    iVar6 = (*(ushort *)(param_1 + 0x810) + 1) * 0x10000;
    iVar8 = iVar6 >> 0x10;
    if (0xf < iVar8) {
      iVar5 = 0x2b;
    }
    *(short *)(param_1 + 0x810) = (short)((uint)iVar6 >> 0x10);
    if (iVar8 < 0x10) {
      return;
    }
  } while( true );
}



// Address: 4a0d7794

void FUN_4a0d7794(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_28 [12];
  int local_1c;
  
  param_3 = param_3 * 0x10000;
  param_4 = param_4 * 0x10000;
  iVar1 = FUN_4a13fc4c(param_1,0);
  bVar6 = iVar1 == -1;
  iVar5 = iVar1 + 1;
  if (!bVar6) {
    iVar5 = param_3;
  }
  if ((bVar6 || param_3 == 0) || iVar5 < 0 != (bVar6 && SCARRY4(iVar1,1))) {
    iVar1 = FUN_4a13fc4c(param_1,0,1);
    bVar6 = iVar1 == -1;
    iVar5 = iVar1 + 1;
    if (!bVar6) {
      iVar5 = param_3;
    }
    if ((!bVar6 && param_3 != 0) && iVar5 < 0 == (bVar6 && SCARRY4(iVar1,1))) {
      param_3 = FUN_4a0d4b28(param_3,0x14000);
    }
  }
  else {
    param_3 = FUN_4a0d4b28(param_3,0xc000);
  }
  iVar1 = FUN_4a13fc4c(param_1,0,0xd);
  bVar6 = iVar1 == -1;
  iVar5 = iVar1 + 1;
  if (!bVar6) {
    iVar5 = param_4;
  }
  if ((bVar6 || param_4 == 0) || iVar5 < 0 != (bVar6 && SCARRY4(iVar1,1))) {
    iVar1 = FUN_4a13fc4c(param_1,0,0xc);
    bVar6 = iVar1 == -1;
    iVar5 = iVar1 + 1;
    if (!bVar6) {
      iVar5 = param_4;
    }
    if ((!bVar6 && param_4 != 0) && iVar5 < 0 == (bVar6 && SCARRY4(iVar1,1))) {
      param_4 = FUN_4a0d4b28(param_4,0xc000);
    }
  }
  else {
    param_4 = FUN_4a0d4b28(param_4,0x14000);
  }
  iVar5 = 0;
  if (*(int *)(param_1 + 0x8f8) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x8f8) + 8);
  }
  FUN_4a16bdcc(auStack_28,iVar1 + param_2 * 0x14);
  if (local_1c != 0) {
    iVar1 = *(int *)(local_1c + 8);
    piVar2 = *(int **)(local_1c + 8);
  }
  else {
    iVar1 = 0;
    piVar2 = (int *)0x0;
  }
  iVar1 = *(int *)(iVar1 + 4);
  if (local_1c == 0) {
    piVar2 = (int *)0x0;
  }
  uVar3 = FUN_4a0d4b74(*piVar2 + param_3,0xffe20000);
  if (local_1c == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = *(undefined4 **)(local_1c + 8);
  }
  *puVar4 = uVar3;
  uVar3 = FUN_4a0d4b74(param_4 + iVar1,0xfffb0000);
  if (local_1c != 0) {
    iVar5 = *(int *)(local_1c + 8);
  }
  *(undefined4 *)(iVar5 + 4) = uVar3;
  FUN_4a16bef4(auStack_28);
  return;
}



// Address: 4a0d7904

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * FUN_4a0d7904(int param_1,char *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  char *pcVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar7 = *(int *)(param_1 + 0x4ac);
  pcVar15 = param_2;
  if (iVar7 != 0) {
    pcVar15 = *(char **)(iVar7 + 8);
  }
  iVar18 = 0;
  if (iVar7 == 0) {
    pcVar15 = (char *)0x0;
  }
  cVar1 = *pcVar15;
  if (*(int *)(param_1 + 0x4c0) == 0) {
    pcVar15 = (char *)0x0;
  }
  else {
    pcVar15 = *(char **)(*(int *)(param_1 + 0x4c0) + 8);
  }
  cVar2 = *pcVar15;
  if (iVar7 == 0) {
    puVar8 = (undefined1 *)0x0;
  }
  else {
    puVar8 = *(undefined1 **)(iVar7 + 8);
  }
  *puVar8 = (char)param_2;
  if (*(int *)(param_1 + 0x4c0) == 0) {
    pcVar15 = (char *)0x0;
  }
  else {
    pcVar15 = *(char **)(*(int *)(param_1 + 0x4c0) + 8);
  }
  *pcVar15 = (char)param_3;
  if (param_2 != (char *)0xffffffff) {
    if (*(int *)(param_1 + 0x7c8) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(*(int *)(param_1 + 0x7c8) + 8);
    }
    param_2[iVar7] = (char)param_3;
  }
  *(undefined2 *)(param_1 + 0x7b6) = 0;
  *(undefined2 *)(param_1 + 0x7b8) = 0;
  iVar7 = DAT_4a0d7bb8;
  if (param_2 != (char *)0xffffffff) {
    if ((char *)(int)cVar1 != param_2) {
      iVar9 = (int)((longlong)(int)*(uint *)(param_1 + 0x78c) * (longlong)DAT_4a0d7bb8 +
                    ((ulonglong)*(uint *)(param_1 + 0x78c) << 0x20) >> 0x20);
      uVar16 = (iVar9 >> 10) - (iVar9 >> 0x1f);
      lVar3 = (longlong)(int)uVar16 * (longlong)DAT_4a0d7bbc + ((ulonglong)uVar16 << 0x20);
      *(char *)(param_1 + 0x7b4) =
           ((char)(int)(lVar3 >> 0x22) - (char)(lVar3 >> 0x3f)) * -7 + (char)uVar16;
    }
    iVar9 = *(int *)(param_1 + 0x18);
    uVar10 = FUN_4a0fba7c(iVar9);
    if ((char *)(int)cVar1 == param_2) {
      if (cVar2 < param_3) {
        uVar11 = 0xaa3;
      }
      else {
        uVar11 = 0xaa5;
      }
    }
    else {
      uVar11 = 0xaa2;
    }
    uVar16 = FUN_4a14085c(param_1,0,*(undefined4 *)(param_1 + 0x78c));
    iVar12 = (int)((longlong)(int)uVar16 * (longlong)iVar7 + ((ulonglong)uVar16 << 0x20) >> 0x20);
    uVar16 = (iVar12 >> 10) - (iVar12 >> 0x1f);
    iVar12 = (int)((longlong)(int)uVar16 * (longlong)DAT_4a0d7bbc + ((ulonglong)uVar16 << 0x20) >>
                  0x20);
    iVar12 = uVar16 + ((iVar12 >> 2) - (iVar12 >> 0x1f)) * -7;
    uVar16 = *(int *)(param_1 + 0x78c) + 0x5a0;
    iVar7 = (int)((longlong)(int)uVar16 * (longlong)iVar7 + ((ulonglong)uVar16 << 0x20) >> 0x20);
    uVar16 = (iVar7 >> 10) - (iVar7 >> 0x1f);
    iVar7 = (int)((longlong)(int)uVar16 * (longlong)DAT_4a0d7bbc + ((ulonglong)uVar16 << 0x20) >>
                 0x20);
    if (((iVar7 >> 2) - (iVar7 >> 0x1f)) * -7 + uVar16 == iVar12) {
      uVar17 = 0xac4;
    }
    else {
      uVar17 = *(undefined4 *)(PTR_DAT_4a0d7bc0 + iVar12 * 4);
    }
    iVar9 = iVar9 + 0x278;
    uVar17 = FUN_4a1351bc(iVar9,uVar17);
    uVar13 = FUN_4a06c410(iVar9);
    if (*(int *)(param_1 + 300) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(*(int *)(param_1 + 300) + 8);
    }
    iVar7 = *(int *)(iVar7 + (int)param_2 * 0x14 + 0xc);
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(iVar7 + 8);
    }
    FUN_4a06cfb0(iVar9,(int)*(short *)(iVar7 + param_3 * 2));
    if (*(int *)(param_1 + 0x8c) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(*(int *)(param_1 + 0x8c) + 8);
    }
    iVar7 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),
                         (int)*(short *)(iVar7 + (int)param_2 * 2));
    uVar14 = FUN_4a1351bc(iVar9,*(undefined4 *)(iVar7 + 0xc));
    uVar13 = FUN_4a13cff4(uVar13);
    FUN_4a06b9c4(iVar9,0xfffffff5,uVar11,uVar17,uVar13,uVar14);
    if (*(int *)(param_1 + 0xf0) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(*(int *)(param_1 + 0xf0) + 8);
    }
    iVar7 = *(int *)(iVar7 + (int)param_2 * 0x14 + 0xc);
    if (iVar7 != 0) {
      iVar18 = *(int *)(iVar7 + 8);
    }
    FUN_4a1136e4(uVar10,0xfffffff5,(int)*(short *)(iVar18 + param_3 * 2));
  }
  FUN_4a0fe54c(*(undefined4 *)(param_1 + 0x18),0x17);
  FUN_4a0941ec();
  iVar7 = FUN_4a0ff494();
  iVar7 = FUN_4a13fa14(*(undefined4 *)(iVar7 + 0x51c),0);
  if (iVar7 == -1) {
    thunk_FUN_4a161570(0x14);
    puVar6 = (undefined4 *)FUN_4a0c6bc0();
    *puVar6 = PTR_PTR_4a0c70cc;
    puVar6[2] = 0;
    *(undefined1 *)(puVar6 + 3) = 0;
    puVar6[4] = 0;
    uVar10 = FUN_4a04d4d0(0,s_unemployed_4a0949c8);
    puVar6[2] = uVar10;
    return puVar6;
  }
  uVar10 = thunk_FUN_4a161570(0x14);
  piVar4 = (int *)FUN_4a0c707c(uVar10,*(undefined4 *)(PTR_PTR_4a0949d4 + iVar7 * 4));
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))();
  }
  iVar7 = FUN_4a0ff494();
  FUN_4a14039c(*(undefined4 *)(iVar7 + 0x51c),0);
  piVar5 = (int *)FUN_4a0c6fcc();
  puVar6 = (undefined4 *)0x0;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))();
    iVar7 = (**(code **)(*piVar5 + 8))(piVar5);
    puVar6 = (undefined4 *)0x0;
    if (iVar7 != 0) {
      puVar6 = (undefined4 *)(**(code **)(*piVar5 + 4))(piVar5);
    }
  }
  if (piVar4 == (int *)0x0) {
    return puVar6;
  }
  iVar7 = (**(code **)(*piVar4 + 8))(piVar4);
  if (iVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0949b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar6 = (undefined4 *)(*UNRECOVERED_JUMPTABLE)();
    return puVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x4a0949c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar6 = (undefined4 *)(**(code **)(*piVar4 + 4))(piVar4);
  return puVar6;
}



// Address: 4a0d7bc4

/* WARNING: Removing unreachable block (ram,0x4a0d7978) */
/* WARNING: Removing unreachable block (ram,0x4a0d7980) */
/* WARNING: Removing unreachable block (ram,0x4a0d7984) */
/* WARNING: Removing unreachable block (ram,0x4a0d7988) */
/* WARNING: Removing unreachable block (ram,0x4a0d79a0) */
/* WARNING: Removing unreachable block (ram,0x4a0d79ac) */
/* WARNING: Removing unreachable block (ram,0x4a0d79e4) */
/* WARNING: Removing unreachable block (ram,0x4a0d79f8) */
/* WARNING: Removing unreachable block (ram,0x4a0d7a04) */
/* WARNING: Removing unreachable block (ram,0x4a0d7a08) */
/* WARNING: Removing unreachable block (ram,0x4a0d7a10) */
/* WARNING: Removing unreachable block (ram,0x4a0d7a18) */
/* WARNING: Removing unreachable block (ram,0x4a0d7a94) */
/* WARNING: Removing unreachable block (ram,0x4a0d7aa0) */
/* WARNING: Removing unreachable block (ram,0x4a0d7aa8) */
/* WARNING: Removing unreachable block (ram,0x4a0d7acc) */
/* WARNING: Removing unreachable block (ram,0x4a0d7ad0) */
/* WARNING: Removing unreachable block (ram,0x4a0d7ad4) */
/* WARNING: Removing unreachable block (ram,0x4a0d7ae0) */
/* WARNING: Removing unreachable block (ram,0x4a0d7ae4) */
/* WARNING: Removing unreachable block (ram,0x4a0d7ae8) */
/* WARNING: Removing unreachable block (ram,0x4a0d7b04) */
/* WARNING: Removing unreachable block (ram,0x4a0d7b08) */
/* WARNING: Removing unreachable block (ram,0x4a0d7b0c) */
/* WARNING: Removing unreachable block (ram,0x4a0d7b58) */
/* WARNING: Removing unreachable block (ram,0x4a0d7b64) */
/* WARNING: Removing unreachable block (ram,0x4a0d7b5c) */
/* WARNING: Removing unreachable block (ram,0x4a0d7b68) */
/* WARNING: Removing unreachable block (ram,0x4a0d7b74) */
/* WARNING: Removing unreachable block (ram,0x4a0d7b78) */
/* WARNING: Removing unreachable block (ram,0x4a0d7b7c) */
/* WARNING: Removing unreachable block (ram,0x4a0d7b88) */
/* WARNING: Removing unreachable block (ram,0x4a0d7b8c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * FUN_4a0d7bc4(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = (*(ushort *)(param_1 + 0x1ee) + 1) * 0x10000;
  *(short *)(param_1 + 0x1ee) = (short)((uint)iVar1 >> 0x10);
  if (iVar1 >> 0x10 < 3) {
    return param_1;
  }
  if (param_1[299] == 0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    puVar6 = *(undefined1 **)(param_1[299] + 8);
  }
  *puVar6 = 0xff;
  if (param_1[0x130] == 0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    puVar6 = *(undefined1 **)(param_1[0x130] + 8);
  }
  *puVar6 = 0;
  *(undefined2 *)((int)param_1 + 0x7b6) = 0;
  *(undefined2 *)(param_1 + 0x1ee) = 0;
  FUN_4a0fe54c(param_1[6],0x17);
  FUN_4a0941ec();
  iVar1 = FUN_4a0ff494();
  iVar1 = FUN_4a13fa14(*(undefined4 *)(iVar1 + 0x51c),0);
  if (iVar1 == -1) {
    thunk_FUN_4a161570(0x14);
    puVar4 = (undefined4 *)FUN_4a0c6bc0();
    *puVar4 = PTR_PTR_4a0c70cc;
    puVar4[2] = 0;
    *(undefined1 *)(puVar4 + 3) = 0;
    puVar4[4] = 0;
    uVar5 = FUN_4a04d4d0(0,s_unemployed_4a0949c8);
    puVar4[2] = uVar5;
    return puVar4;
  }
  uVar5 = thunk_FUN_4a161570(0x14);
  piVar2 = (int *)FUN_4a0c707c(uVar5,*(undefined4 *)(PTR_PTR_4a0949d4 + iVar1 * 4));
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))();
  }
  iVar1 = FUN_4a0ff494();
  FUN_4a14039c(*(undefined4 *)(iVar1 + 0x51c),0);
  piVar3 = (int *)FUN_4a0c6fcc();
  puVar4 = (undefined4 *)0x0;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
    iVar1 = (**(code **)(*piVar3 + 8))(piVar3);
    puVar4 = (undefined4 *)0x0;
    if (iVar1 != 0) {
      puVar4 = (undefined4 *)(**(code **)(*piVar3 + 4))(piVar3);
    }
  }
  if (piVar2 == (int *)0x0) {
    return puVar4;
  }
  iVar1 = (**(code **)(*piVar2 + 8))(piVar2);
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0949b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (undefined4 *)(*UNRECOVERED_JUMPTABLE)();
    return puVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x4a0949c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar4 = (undefined4 *)(**(code **)(*piVar2 + 4))(piVar2);
  return puVar4;
}



// Address: 4a0d7bf0

int FUN_4a0d7bf0(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  if (*(int *)(param_1 + 0x4ac) == 0) {
    pcVar2 = (char *)0x0;
  }
  else {
    pcVar2 = *(char **)(*(int *)(param_1 + 0x4ac) + 8);
  }
  cVar1 = *pcVar2;
  iVar3 = FUN_4a14039c(param_1,0);
  if (*(int *)(param_1 + 0x104) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x104) + 8);
  }
  iVar4 = *(int *)(iVar4 + cVar1 * 0x14 + 0xc);
  if (iVar4 != 0) {
    iVar6 = *(int *)(iVar4 + 8);
  }
  iVar3 = (int)*(short *)(iVar6 + iVar3 * 2);
  iVar6 = *(int *)(param_1 + 0x790) + iVar3;
  if (DAT_4a0d7cf0 <= iVar6) {
    iVar6 = DAT_4a0d7cf0;
  }
  *(int *)(param_1 + 0x790) = iVar6;
  if (iVar3 < 0) {
    *(int *)(param_1 + 0x794) = *(int *)(param_1 + 0x794) - iVar3;
  }
  else {
    if (999 < iVar6) {
      FUN_4a0daefc(param_1,0x2a);
    }
    if (4999 < *(int *)(param_1 + 0x790)) {
      FUN_4a0daefc(param_1,0x3d);
    }
  }
  iVar6 = (*(ushort *)(param_1 + 0x7b6) + 1) * 0x10000;
  iVar4 = iVar6 >> 0x10;
  iVar5 = (int)((ulonglong)((longlong)DAT_4a0d7cf4 * (longlong)iVar4) >> 0x20);
  *(short *)(param_1 + 0x7b6) = (short)((uint)iVar6 >> 0x10);
  if ((iVar4 + (iVar5 - (iVar5 >> 0x1f)) * -3 == 2) && (0 < *(short *)(param_1 + 0x7b8))) {
    *(short *)(param_1 + 0x7b8) = *(short *)(param_1 + 0x7b8) + -1;
  }
  return iVar3;
}



// Address: 4a0d7cf8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_4a0d7cf8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_4a0d6e30();
  if (iVar1 == -1) {
    return -1;
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x18) + 0x520);
  if (iVar1 != 0x22) {
    if (iVar1 == 0x23) {
      return 0xa0;
    }
    if (iVar1 == 0x24) {
      return 0xa1;
    }
    if (iVar1 == 0x25) {
      return 0xa2;
    }
    if (*(int *)(iVar3 + 0x154) <= iVar1) {
      uVar2 = FUN_4a0642fc();
      iVar1 = FUN_4a134da4(uVar2,iVar1 - *(int *)(iVar3 + 0x154));
      return iVar1 + *(int *)(iVar3 + 0x50);
    }
  }
  return 0x9f;
}



// Address: 4a0d7d28

void FUN_4a0d7d28(int param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_60 [8];
  int local_58;
  int local_54;
  undefined1 auStack_4c [8];
  int local_44;
  int local_40;
  undefined1 auStack_38 [12];
  int local_2c;
  
  iVar9 = 0;
  do {
    if (param_3 == 0x8a) {
      uVar3 = FUN_4a0bf920();
      uVar4 = FUN_4a141abc(param_1,0);
      switch(iVar9) {
      case 0:
      case 3:
      case 6:
      case 8:
      case 10:
      case 0xc:
        break;
      case 1:
      case 2:
      case 4:
      case 5:
      case 7:
      case 9:
      case 0xb:
        uVar4 = FUN_4a1415a0(param_1,uVar4,iVar9);
        uVar3 = FUN_4a144728(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),uVar4,uVar3);
        break;
      default:
        uVar3 = 0;
      }
      if (*(int *)(param_1 + 0x45c) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x45c) + 8);
      }
      iVar5 = *(int *)(iVar5 + 0xc);
    }
    else {
      uVar3 = FUN_4a0bf62c(param_2);
      if (*(int *)(param_1 + 0x45c) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x45c) + 8);
      }
      iVar5 = *(int *)(iVar5 + 0xc);
    }
    iVar8 = 0;
    if (iVar5 != 0) {
      iVar8 = *(int *)(iVar5 + 8);
    }
    *(undefined4 *)(iVar8 + iVar9 * 4) = uVar3;
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0xd);
  if (*(int *)(param_1 + 0x4d4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x4d4) + 8);
  }
  FUN_4a16b5a0(auStack_38,uVar3);
  iVar5 = 0;
  iVar9 = 1;
  do {
    uVar1 = FUN_4a0bf920(param_2);
    iVar9 = iVar9 + 1;
    if (local_2c == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(local_2c + 8);
    }
    *(undefined1 *)(iVar8 + iVar5) = uVar1;
    iVar5 = iVar5 + 1;
  } while (iVar9 < 6);
  uVar3 = FUN_4a0bf62c(param_2);
  *(undefined4 *)(param_1 + 0x788) = uVar3;
  uVar3 = FUN_4a0bf62c(param_2);
  *(undefined4 *)(param_1 + 0x78c) = uVar3;
  uVar3 = FUN_4a0bf62c(param_2);
  *(undefined4 *)(param_1 + 0x790) = uVar3;
  uVar3 = FUN_4a0bf62c(param_2);
  *(undefined4 *)(param_1 + 0x794) = uVar3;
  uVar1 = FUN_4a0bf920(param_2);
  *(undefined1 *)(param_1 + 0x799) = uVar1;
  uVar2 = FUN_4a0bfbdc(param_2);
  *(undefined2 *)(param_1 + 0x79a) = uVar2;
  iVar9 = FUN_4a142f80(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520));
  iVar5 = 0;
  if (0 < iVar9) {
    do {
      iVar8 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),iVar5);
      iVar5 = iVar5 + 1;
      *(undefined2 *)(iVar8 + 0x1a) = 0;
    } while (iVar5 < iVar9);
  }
  iVar9 = FUN_4a0bfbdc(param_2);
  iVar5 = 0;
  if (0 < iVar9) {
    do {
      uVar3 = FUN_4a0bfbdc(param_2);
      uVar2 = FUN_4a0bf920(param_2);
      iVar8 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),uVar3);
      iVar5 = iVar5 + 1;
      *(undefined2 *)(iVar8 + 0x1a) = uVar2;
    } while (iVar5 < iVar9);
  }
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x7a8)) {
    do {
      uVar3 = FUN_4a0bf62c(param_2);
      if (*(int *)(param_1 + 0x7ac) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x7ac) + 8);
      }
      *(undefined4 *)(iVar5 + iVar9 * 4) = uVar3;
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_1 + 0x7a8));
  }
  uVar1 = FUN_4a0bf920(param_2);
  if (*(int *)(param_1 + 0x4ac) == 0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    puVar6 = *(undefined1 **)(*(int *)(param_1 + 0x4ac) + 8);
  }
  *puVar6 = uVar1;
  uVar1 = FUN_4a0bf920(param_2);
  if (*(int *)(param_1 + 0x4c0) == 0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    puVar6 = *(undefined1 **)(*(int *)(param_1 + 0x4c0) + 8);
  }
  *puVar6 = uVar1;
  uVar1 = FUN_4a0bf920(param_2);
  *(undefined1 *)(param_1 + 0x7b4) = uVar1;
  uVar2 = FUN_4a0bfbdc(param_2);
  *(undefined2 *)(param_1 + 0x7b6) = uVar2;
  uVar2 = FUN_4a0bfbdc(param_2);
  *(undefined2 *)(param_1 + 0x7b8) = uVar2;
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x7c4)) {
    do {
      uVar1 = FUN_4a0bf920(param_2);
      if (*(int *)(param_1 + 0x7c8) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x7c8) + 8);
      }
      *(undefined1 *)(iVar5 + iVar9) = uVar1;
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_1 + 0x7c4));
  }
  uVar1 = FUN_4a0bf920(param_2);
  *(undefined1 *)(param_1 + 2000) = uVar1;
  uVar3 = FUN_4a0bf62c(param_2);
  *(undefined4 *)(param_1 + 0x7d4) = uVar3;
  uVar1 = FUN_4a0bf920(param_2);
  *(undefined1 *)(param_1 + 0x7d8) = uVar1;
  uVar1 = FUN_4a0bf920(param_2);
  *(undefined1 *)(param_1 + 0x7d9) = uVar1;
  uVar2 = FUN_4a0bfbdc(param_2);
  *(undefined2 *)(param_1 + 0x7da) = uVar2;
  uVar3 = FUN_4a0bf62c(param_2);
  *(undefined4 *)(param_1 + 0x7dc) = uVar3;
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x7e8)) {
    do {
      uVar1 = FUN_4a0bf920(param_2);
      if (*(int *)(param_1 + 0x7ec) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x7ec) + 8);
      }
      *(undefined1 *)(iVar5 + iVar9) = uVar1;
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_1 + 0x7e8));
  }
  uVar3 = FUN_4a0bf62c(param_2);
  *(undefined4 *)(param_1 + 0x7f4) = uVar3;
  uVar3 = FUN_4a0bf62c(param_2);
  *(undefined4 *)(param_1 + 0x7f8) = uVar3;
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x804)) {
    do {
      uVar3 = FUN_4a0bf62c(param_2);
      if (*(int *)(param_1 + 0x808) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x808) + 8);
      }
      *(undefined4 *)(iVar5 + iVar9 * 4) = uVar3;
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_1 + 0x804));
  }
  uVar2 = FUN_4a0bfbdc(param_2);
  *(undefined2 *)(param_1 + 0x810) = uVar2;
  uVar2 = FUN_4a0bfbdc(param_2);
  *(undefined2 *)(param_1 + 0x812) = uVar2;
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x81c)) {
    do {
      uVar3 = FUN_4a0bf62c(param_2);
      if (*(int *)(param_1 + 0x820) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x820) + 8);
      }
      *(undefined4 *)(iVar5 + iVar9 * 4) = uVar3;
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_1 + 0x81c));
  }
  uVar3 = FUN_4a0bf62c(param_2);
  *(undefined4 *)(param_1 + 0x828) = uVar3;
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x838)) {
    do {
      uVar3 = FUN_4a0bf62c(param_2);
      if (*(int *)(param_1 + 0x83c) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x83c) + 8);
      }
      *(undefined4 *)(iVar5 + iVar9 * 4) = uVar3;
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_1 + 0x838));
  }
  iVar9 = 0;
  iVar5 = 1;
  do {
    uVar2 = FUN_4a0bfbdc(param_2);
    if (*(int *)(param_1 + 0x88c) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(*(int *)(param_1 + 0x88c) + 8);
    }
    *(undefined2 *)(iVar8 + iVar9 * 2) = uVar2;
    uVar3 = FUN_4a0bf62c(param_2);
    iVar5 = iVar5 + 1;
    if (*(int *)(param_1 + 0x8a0) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(*(int *)(param_1 + 0x8a0) + 8);
    }
    *(undefined4 *)(iVar8 + iVar9 * 4) = uVar3;
    iVar9 = iVar9 + 1;
  } while (iVar5 < 7);
  FUN_4a0d8cac(param_1);
  iVar5 = *(int *)(param_1 + 0x410);
  iVar9 = 1;
  if (1 < iVar5) {
    do {
      uVar1 = FUN_4a0bf920(param_2);
      if (*(int *)(param_1 + 0x8d0) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(*(int *)(param_1 + 0x8d0) + 8);
      }
      *(undefined1 *)(iVar8 + iVar9) = uVar1;
      uVar2 = FUN_4a0bfbdc(param_2);
      if (*(int *)(param_1 + 0x8e4) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(*(int *)(param_1 + 0x8e4) + 8);
      }
      *(undefined2 *)(iVar8 + iVar9 * 2) = uVar2;
      if (*(int *)(param_1 + 0x8f8) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(*(int *)(param_1 + 0x8f8) + 8);
      }
      FUN_4a16bdcc(auStack_4c,iVar8 + iVar9 * 0x14);
      iVar8 = 0;
      if (0 < local_44) {
        do {
          uVar3 = FUN_4a0bf62c(param_2);
          if (local_40 == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(local_40 + 8);
          }
          *(undefined4 *)(iVar7 + iVar8 * 4) = uVar3;
          iVar8 = iVar8 + 1;
        } while (iVar8 < local_44);
      }
      if (*(int *)(param_1 + 0x934) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(*(int *)(param_1 + 0x934) + 8);
      }
      FUN_4a16b5a0(auStack_60,iVar8 + iVar9 * 0x14);
      iVar8 = 0;
      if (0 < local_58) {
        do {
          uVar1 = FUN_4a0bf920(param_2);
          if (local_54 == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(local_54 + 8);
          }
          *(undefined1 *)(iVar7 + iVar8) = uVar1;
          iVar8 = iVar8 + 1;
        } while (iVar8 < local_58);
      }
      FUN_4a16b6c0(auStack_60);
      FUN_4a16bef4(auStack_4c);
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar5);
  }
  iVar9 = 0;
  iVar5 = 1;
  do {
    uVar2 = FUN_4a0bfbdc(param_2);
    if (*(int *)(param_1 + 0x994) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(*(int *)(param_1 + 0x994) + 8);
    }
    *(undefined2 *)(iVar8 + iVar9 * 2) = uVar2;
    uVar3 = FUN_4a0bf62c(param_2);
    if (*(int *)(param_1 + 0x9a8) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(*(int *)(param_1 + 0x9a8) + 8);
    }
    *(undefined4 *)(iVar8 + iVar9 * 4) = uVar3;
    uVar3 = FUN_4a0bf62c(param_2);
    iVar5 = iVar5 + 1;
    if (*(int *)(param_1 + 0x9bc) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(*(int *)(param_1 + 0x9bc) + 8);
    }
    *(undefined4 *)(iVar8 + iVar9 * 4) = uVar3;
    iVar9 = iVar9 + 1;
  } while (iVar5 < 0x65);
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x964)) {
    do {
      uVar1 = FUN_4a0bf920(param_2);
      if (*(int *)(param_1 + 0x968) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x968) + 8);
      }
      *(undefined1 *)(iVar5 + iVar9) = uVar1;
      uVar3 = FUN_4a0bf62c(param_2);
      if (*(int *)(param_1 + 0x97c) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x97c) + 8);
      }
      *(undefined4 *)(iVar5 + iVar9 * 4) = uVar3;
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_1 + 0x964));
  }
  iVar9 = FUN_4a13feec(param_1,2);
  if (iVar9 != -1) {
    if (*(int *)(param_1 + 0x8a0) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x8a0) + 8);
    }
    *(undefined4 *)(iVar5 + iVar9 * 4) = 0;
  }
  FUN_4a16b6c0(auStack_38);
  return;
}



// Address: 4a0d841c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0d841c(int param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_4a0daefc(param_1,0x14);
  if (param_2 == 1) {
    iVar8 = 2;
  }
  else if (param_2 == 2) {
    iVar8 = 3;
  }
  else {
    if (param_2 != 0) {
      return;
    }
    iVar8 = 4;
  }
  do {
    uStack_28 = *(undefined4 *)(param_1 + 0x18);
    uStack_2c = FUN_4a0fba7c();
    bVar3 = false;
    uVar4 = FUN_4a16b5a0(auStack_40,param_1 + 0x7e0);
    iVar5 = FUN_4a16fe9c((char)iVar8,uVar4,0);
    FUN_4a16b6c0(auStack_40);
    if (iVar5 == -1) {
      if (*(char *)(param_1 + 0x7d9) == iVar8) {
        *(undefined1 *)(param_1 + 0x7d9) = 0xff;
        bVar3 = true;
        iVar5 = 4;
        *(undefined4 *)(param_1 + 0x7dc) = 0;
      }
    }
    else {
      bVar3 = true;
      if (*(int *)(param_1 + 0x7ec) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(param_1 + 0x7ec) + 8);
      }
      *(undefined1 *)(iVar6 + iVar5) = 0xff;
    }
    uVar7 = 0;
    if (iVar8 == 0) {
      uVar7 = 4;
    }
    else if (iVar8 == 1) {
      uVar7 = 8;
    }
    uVar10 = 0;
    *(uint *)(param_1 + 0x7f8) = uVar7 | *(uint *)(param_1 + 0x7f8);
    if (*(int *)(param_1 + 400) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(param_1 + 400) + 8);
    }
    uVar2 = *(ushort *)(iVar6 + *(char *)(param_1 + 0x7d8) * 2);
    uVar7 = 0;
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x1a0)) {
      do {
        iVar9 = 0;
        if (*(int *)(param_1 + 0x1b8) != 0) {
          iVar9 = *(int *)(*(int *)(param_1 + 0x1b8) + 8);
        }
        if ((*(ushort *)(iVar9 + iVar6 * 2) & uVar2) != 0) {
          uVar1 = 1 << (uVar10 & 0xff);
          if (iVar8 == iVar6) {
            if ((*(uint *)(param_1 + 0x7f4) & uVar1) == 0) {
              bVar3 = true;
              *(uint *)(param_1 + 0x7f4) = *(uint *)(param_1 + 0x7f4) | uVar1;
              goto LAB_4a0db034;
            }
LAB_4a0db040:
            uVar7 = uVar7 + 1;
          }
          else {
LAB_4a0db034:
            if ((uVar1 & *(uint *)(param_1 + 0x7f4)) != 0) goto LAB_4a0db040;
          }
          uVar10 = uVar10 + 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x1a0));
    }
    if (bVar3) {
      FUN_4a0fd124(uStack_28,iVar8);
      FUN_4a1182e0(uStack_2c,iVar8,iVar5);
      uVar4 = FUN_4a0941ec();
      FUN_4a094d68(uVar4,iVar8);
    }
    if (uVar7 == uVar10) {
      *(uint *)(param_1 + 0x7f8) = *(uint *)(param_1 + 0x7f8) | 1;
    }
    iVar5 = FUN_4a145968(uStack_28);
    if ((iVar5 == 0) &&
       (iVar6 = *(int *)(param_1 + 0x1a0), iVar5 = FUN_4a145b3c(uStack_28), iVar5 == iVar6)) {
      FUN_4a10ea2c(uStack_2c);
    }
    if (iVar8 != 0x15) {
      return;
    }
    iVar5 = (*(ushort *)(param_1 + 0x810) + 1) * 0x10000;
    iVar6 = iVar5 >> 0x10;
    if (0xf < iVar6) {
      iVar8 = 0x2b;
    }
    *(short *)(param_1 + 0x810) = (short)((uint)iVar5 >> 0x10);
    if (iVar6 < 0x10) {
      return;
    }
  } while( true );
}



// Address: 4a0d8474

void FUN_4a0d8474(int param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar8 = (param_2 + (uint)*(ushort *)(param_1 + 0x812)) * 0x10000;
  *(short *)(param_1 + 0x812) = (short)((uint)iVar8 >> 0x10);
  if (iVar8 >> 0x10 < 0x1f) {
    return;
  }
  iVar8 = 0x2c;
  do {
    uStack_28 = *(undefined4 *)(param_1 + 0x18);
    uStack_2c = FUN_4a0fba7c();
    bVar3 = false;
    uVar4 = FUN_4a16b5a0(auStack_40,param_1 + 0x7e0);
    iVar5 = FUN_4a16fe9c((char)iVar8,uVar4,0);
    FUN_4a16b6c0(auStack_40);
    if (iVar5 == -1) {
      if (*(char *)(param_1 + 0x7d9) == iVar8) {
        *(undefined1 *)(param_1 + 0x7d9) = 0xff;
        bVar3 = true;
        iVar5 = 4;
        *(undefined4 *)(param_1 + 0x7dc) = 0;
      }
    }
    else {
      bVar3 = true;
      if (*(int *)(param_1 + 0x7ec) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(param_1 + 0x7ec) + 8);
      }
      *(undefined1 *)(iVar6 + iVar5) = 0xff;
    }
    uVar7 = 0;
    if (iVar8 == 0) {
      uVar7 = 4;
    }
    else if (iVar8 == 1) {
      uVar7 = 8;
    }
    uVar10 = 0;
    *(uint *)(param_1 + 0x7f8) = uVar7 | *(uint *)(param_1 + 0x7f8);
    if (*(int *)(param_1 + 400) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(param_1 + 400) + 8);
    }
    uVar2 = *(ushort *)(iVar6 + *(char *)(param_1 + 0x7d8) * 2);
    uVar7 = 0;
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x1a0)) {
      do {
        iVar9 = 0;
        if (*(int *)(param_1 + 0x1b8) != 0) {
          iVar9 = *(int *)(*(int *)(param_1 + 0x1b8) + 8);
        }
        if ((*(ushort *)(iVar9 + iVar6 * 2) & uVar2) != 0) {
          uVar1 = 1 << (uVar10 & 0xff);
          if (iVar8 == iVar6) {
            if ((*(uint *)(param_1 + 0x7f4) & uVar1) == 0) {
              bVar3 = true;
              *(uint *)(param_1 + 0x7f4) = *(uint *)(param_1 + 0x7f4) | uVar1;
              goto LAB_4a0db034;
            }
LAB_4a0db040:
            uVar7 = uVar7 + 1;
          }
          else {
LAB_4a0db034:
            if ((uVar1 & *(uint *)(param_1 + 0x7f4)) != 0) goto LAB_4a0db040;
          }
          uVar10 = uVar10 + 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x1a0));
    }
    if (bVar3) {
      FUN_4a0fd124(uStack_28,iVar8);
      FUN_4a1182e0(uStack_2c,iVar8,iVar5);
      uVar4 = FUN_4a0941ec();
      FUN_4a094d68(uVar4,iVar8);
    }
    if (uVar7 == uVar10) {
      *(uint *)(param_1 + 0x7f8) = *(uint *)(param_1 + 0x7f8) | 1;
    }
    iVar5 = FUN_4a145968(uStack_28);
    if ((iVar5 == 0) &&
       (iVar6 = *(int *)(param_1 + 0x1a0), iVar5 = FUN_4a145b3c(uStack_28), iVar5 == iVar6)) {
      FUN_4a10ea2c(uStack_2c);
    }
    if (iVar8 != 0x15) {
      return;
    }
    iVar5 = (*(ushort *)(param_1 + 0x810) + 1) * 0x10000;
    iVar6 = iVar5 >> 0x10;
    if (0xf < iVar6) {
      iVar8 = 0x2b;
    }
    *(short *)(param_1 + 0x810) = (short)((uint)iVar5 >> 0x10);
    if (iVar6 < 0x10) {
      return;
    }
  } while( true );
}



// Address: 4a0d8658

void FUN_4a0d8658(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_5c [8];
  int local_54;
  int local_50;
  undefined1 auStack_48 [8];
  int local_40;
  int local_3c;
  undefined1 auStack_34 [12];
  int local_28;
  
  iVar5 = 0;
  do {
    iVar6 = 0;
    if (*(int *)(param_1 + 0x45c) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x45c) + 8);
    }
    if (*(int *)(iVar1 + 0xc) != 0) {
      iVar6 = *(int *)(*(int *)(iVar1 + 0xc) + 8);
    }
    FUN_4a0bfed4(param_2,*(undefined4 *)(iVar6 + iVar5 * 4));
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0xd);
  if (*(int *)(param_1 + 0x4d4) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x4d4) + 8);
  }
  FUN_4a16b5a0(auStack_34,uVar4);
  iVar5 = 0;
  do {
    if (local_28 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(local_28 + 8);
    }
    FUN_4a0c0110(param_2,*(undefined1 *)(iVar6 + iVar5));
    iVar5 = iVar5 + 1;
  } while (iVar5 < 5);
  FUN_4a0bfed4(param_2,*(undefined4 *)(param_1 + 0x788));
  FUN_4a0bfed4(param_2,*(undefined4 *)(param_1 + 0x78c));
  FUN_4a0bfed4(param_2,*(undefined4 *)(param_1 + 0x790));
  FUN_4a0bfed4(param_2,*(undefined4 *)(param_1 + 0x794));
  FUN_4a0c0110(param_2,*(undefined1 *)(param_1 + 0x799));
  FUN_4a0bfdc0(param_2,(int)*(short *)(param_1 + 0x79a));
  iVar5 = FUN_4a142f80(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520));
  FUN_4a0bfdc0(param_2,(int)(short)iVar5);
  iVar6 = 0;
  if (0 < iVar5) {
    do {
      FUN_4a0bfdc0(param_2,(int)(short)iVar6);
      iVar1 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),iVar6);
      FUN_4a0c0110(param_2,*(ushort *)(iVar1 + 0x1a) & 0xff);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5);
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x7a8)) {
    do {
      if (*(int *)(param_1 + 0x7ac) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(param_1 + 0x7ac) + 8);
      }
      FUN_4a0bfed4(param_2,*(undefined4 *)(iVar6 + iVar5 * 4));
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x7a8));
  }
  if (*(int *)(param_1 + 0x4ac) == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puVar2 = *(undefined1 **)(*(int *)(param_1 + 0x4ac) + 8);
  }
  FUN_4a0c0110(param_2,*puVar2);
  if (*(int *)(param_1 + 0x4c0) == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puVar2 = *(undefined1 **)(*(int *)(param_1 + 0x4c0) + 8);
  }
  FUN_4a0c0110(param_2,*puVar2);
  FUN_4a0c0110(param_2,*(undefined1 *)(param_1 + 0x7b4));
  FUN_4a0bfdc0(param_2,(int)*(short *)(param_1 + 0x7b6));
  FUN_4a0bfdc0(param_2,(int)*(short *)(param_1 + 0x7b8));
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x7c4)) {
    do {
      if (*(int *)(param_1 + 0x7c8) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(param_1 + 0x7c8) + 8);
      }
      FUN_4a0c0110(param_2,*(undefined1 *)(iVar6 + iVar5));
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x7c4));
  }
  FUN_4a0c0110(param_2,*(undefined1 *)(param_1 + 2000));
  FUN_4a0bfed4(param_2,*(undefined4 *)(param_1 + 0x7d4));
  FUN_4a0c0110(param_2,*(undefined1 *)(param_1 + 0x7d8));
  FUN_4a0c0110(param_2,*(undefined1 *)(param_1 + 0x7d9));
  FUN_4a0bfdc0(param_2,(int)*(short *)(param_1 + 0x7da));
  FUN_4a0bfed4(param_2,*(undefined4 *)(param_1 + 0x7dc));
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x7e8)) {
    do {
      if (*(int *)(param_1 + 0x7ec) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(param_1 + 0x7ec) + 8);
      }
      FUN_4a0c0110(param_2,*(undefined1 *)(iVar6 + iVar5));
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x7e8));
  }
  FUN_4a0bfed4(param_2,*(undefined4 *)(param_1 + 0x7f4));
  FUN_4a0bfed4(param_2,*(undefined4 *)(param_1 + 0x7f8));
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x804)) {
    do {
      if (*(int *)(param_1 + 0x808) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(param_1 + 0x808) + 8);
      }
      FUN_4a0bfed4(param_2,*(undefined4 *)(iVar6 + iVar5 * 4));
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x804));
  }
  FUN_4a0bfdc0(param_2,(int)*(short *)(param_1 + 0x810));
  FUN_4a0bfdc0(param_2,(int)*(short *)(param_1 + 0x812));
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x81c)) {
    do {
      if (*(int *)(param_1 + 0x820) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(param_1 + 0x820) + 8);
      }
      FUN_4a0bfed4(param_2,*(undefined4 *)(iVar6 + iVar5 * 4));
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x81c));
  }
  FUN_4a0bfed4(param_2,*(undefined4 *)(param_1 + 0x828));
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x838)) {
    do {
      if (*(int *)(param_1 + 0x83c) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(param_1 + 0x83c) + 8);
      }
      FUN_4a0bfed4(param_2,*(undefined4 *)(iVar6 + iVar5 * 4));
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x838));
  }
  iVar5 = 0;
  do {
    if (*(int *)(param_1 + 0x88c) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(param_1 + 0x88c) + 8);
    }
    FUN_4a0bfdc0(param_2,(int)*(short *)(iVar6 + iVar5 * 2));
    if (*(int *)(param_1 + 0x8a0) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(param_1 + 0x8a0) + 8);
    }
    FUN_4a0bfed4(param_2,*(undefined4 *)(iVar6 + iVar5 * 4));
    iVar5 = iVar5 + 1;
  } while (iVar5 < 6);
  iVar6 = *(int *)(param_1 + 0x410);
  iVar5 = 1;
  if (1 < iVar6) {
    do {
      if (*(int *)(param_1 + 0x8d0) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0x8d0) + 8);
      }
      FUN_4a0c0110(param_2,*(undefined1 *)(iVar1 + iVar5));
      if (*(int *)(param_1 + 0x8e4) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0x8e4) + 8);
      }
      FUN_4a0bfdc0(param_2,(int)*(short *)(iVar1 + iVar5 * 2));
      if (*(int *)(param_1 + 0x8f8) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0x8f8) + 8);
      }
      FUN_4a16bdcc(auStack_48,iVar1 + iVar5 * 0x14);
      iVar1 = 0;
      if (0 < local_40) {
        do {
          if (local_3c == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(local_3c + 8);
          }
          FUN_4a0bfed4(param_2,*(undefined4 *)(iVar3 + iVar1 * 4));
          iVar1 = iVar1 + 1;
        } while (iVar1 < local_40);
      }
      if (*(int *)(param_1 + 0x934) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0x934) + 8);
      }
      FUN_4a16b5a0(auStack_5c,iVar1 + iVar5 * 0x14);
      iVar1 = 0;
      if (0 < local_54) {
        do {
          if (local_50 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(local_50 + 8);
          }
          FUN_4a0c0110(param_2,*(undefined1 *)(iVar3 + iVar1));
          iVar1 = iVar1 + 1;
        } while (iVar1 < local_54);
      }
      FUN_4a16b6c0(auStack_5c);
      FUN_4a16bef4(auStack_48);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar6);
  }
  iVar5 = 0;
  do {
    if (*(int *)(param_1 + 0x994) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(param_1 + 0x994) + 8);
    }
    FUN_4a0bfdc0(param_2,(int)*(short *)(iVar6 + iVar5 * 2));
    if (*(int *)(param_1 + 0x9a8) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(param_1 + 0x9a8) + 8);
    }
    FUN_4a0bfed4(param_2,*(undefined4 *)(iVar6 + iVar5 * 4));
    if (*(int *)(param_1 + 0x9bc) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(param_1 + 0x9bc) + 8);
    }
    FUN_4a0bfed4(param_2,*(undefined4 *)(iVar6 + iVar5 * 4));
    iVar5 = iVar5 + 1;
  } while (iVar5 < 100);
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x964)) {
    do {
      if (*(int *)(param_1 + 0x968) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(param_1 + 0x968) + 8);
      }
      FUN_4a0c0110(param_2,*(undefined1 *)(iVar6 + iVar5));
      if (*(int *)(param_1 + 0x97c) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(param_1 + 0x97c) + 8);
      }
      FUN_4a0bfed4(param_2,*(undefined4 *)(iVar6 + iVar5 * 4));
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x964));
  }
  FUN_4a16b6c0(auStack_34);
  return;
}



// Address: 4a0d8c28

void FUN_4a0d8c28(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x878) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x878) + 8);
  }
  *(undefined4 *)(iVar1 + param_2 * 4) = param_3;
  return;
}



// Address: 4a0d8c3c

undefined4 FUN_4a0d8c3c(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x8d0) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x8d0) + 8);
  }
  cVar1 = *(char *)(iVar2 + param_2);
  if ((((cVar1 != '\x02' && cVar1 != '\x03') && cVar1 != '\x04') &&
      (uVar3 = FUN_4a0d619c(param_1,param_2,*(undefined4 *)(param_1 + 0x78c)), (uVar3 & 0x10) == 0))
     && (uVar3 = FUN_4a0d619c(param_1,param_2,*(undefined4 *)(param_1 + 0x78c)), (uVar3 & 8) != 0))
  {
    return 1;
  }
  return 0;
}



// Address: 4a0d8cac

void FUN_4a0d8cac(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_64 [12];
  int local_58;
  undefined1 auStack_50 [8];
  int local_48;
  int local_44;
  undefined1 auStack_3c [12];
  int local_30;
  undefined1 auStack_28 [20];
  
  FUN_4a16bdcc(auStack_3c,param_1 + 0x8a8);
  iVar2 = FUN_4a16bdcc(auStack_28,auStack_3c);
  iVar4 = 0;
  if (0 < *(int *)(iVar2 + 8)) {
    do {
      if (*(int *)(iVar2 + 0xc) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(*(int *)(iVar2 + 0xc) + 8);
      }
      *(undefined4 *)(iVar7 + iVar4 * 4) = 0;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(iVar2 + 8));
  }
  FUN_4a16bef4(auStack_28);
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + 0x88c) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1 + 0x88c) + 8);
    }
    iVar4 = (int)*(short *)(iVar4 + iVar2 * 2);
    if (iVar4 != -1) {
      if (*(int *)(param_1 + 0x314) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(*(int *)(param_1 + 0x314) + 8);
      }
      FUN_4a16b5a0(auStack_50,iVar7 + iVar4 * 0x14);
      if (*(int *)(param_1 + 0x328) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(*(int *)(param_1 + 0x328) + 8);
      }
      FUN_4a16b5a0(auStack_64,iVar7 + iVar4 * 0x14);
      iVar4 = 0;
      if (0 < local_48) {
        do {
          if (local_44 == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(local_44 + 8);
          }
          if (local_30 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(local_30 + 8);
          }
          piVar6 = (int *)(iVar5 + *(char *)(iVar7 + iVar4) * 4);
          if (local_58 == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(local_58 + 8);
          }
          pcVar1 = (char *)(iVar7 + iVar4);
          iVar4 = iVar4 + 1;
          *piVar6 = *piVar6 + *pcVar1 * 0x10000;
        } while (iVar4 < local_48);
      }
      FUN_4a16b6c0(auStack_64);
      FUN_4a16b6c0(auStack_50);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  iVar2 = 0;
  do {
    if (local_30 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(local_30 + 8);
    }
    uVar3 = FUN_4a0d4b74(*(undefined4 *)(iVar4 + iVar2 * 4),0xff9c0000,0x640000);
    if (local_30 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(local_30 + 8);
    }
    *(undefined4 *)(iVar4 + iVar2 * 4) = uVar3;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  FUN_4a0d56d4(param_1);
  FUN_4a16bef4(auStack_3c);
  return;
}



// Address: 4a0d8e58

uint FUN_4a0d8e58(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint extraout_r1;
  int iVar5;
  uint uVar6;
  uint extraout_r1_00;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int unaff_r10;
  undefined8 uVar11;
  undefined1 auStack_a0 [12];
  int local_94;
  undefined1 auStack_8c [12];
  int local_80;
  undefined1 auStack_78 [12];
  int local_6c;
  undefined1 auStack_64 [12];
  int local_58;
  undefined1 auStack_50 [8];
  int local_48;
  int local_44;
  uint local_3c;
  uint local_38;
  int local_34;
  int iStack_30;
  int local_2c;
  int iStack_28;
  
  iStack_30 = param_1;
  local_2c = param_2;
  iStack_28 = param_3;
  local_38 = FUN_4a140c50(param_1,param_2);
  if (*(int *)(param_1 + 0x8d0) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x8d0) + 8);
  }
  switch(*(undefined1 *)(iVar1 + local_2c)) {
  case 1:
    local_3c = 4;
    break;
  case 2:
    local_3c = 0x20;
    break;
  case 3:
    local_3c = 0x400;
    break;
  case 4:
    local_3c = 0x800;
    break;
  case 5:
    local_3c = 8;
    break;
  case 6:
    local_3c = 0x40;
    break;
  case 7:
    local_3c = 0x80;
    break;
  case 8:
    local_3c = 0x10;
    break;
  case 9:
    local_3c = 0x100;
    break;
  case 10:
    local_3c = 0x200;
    break;
  case 0xb:
    local_3c = 0x1000;
    break;
  case 0xc:
    local_3c = 0x2000;
    break;
  case 0xd:
    local_3c = 0x4000;
    break;
  case 0xe:
    local_3c = 0x8000;
    break;
  default:
    switchD_4a11cc8c::default(0,PTR_s_invalid_state_4a0d92d8);
  case 0:
    local_3c = 2;
  }
  if (*(int *)(param_1 + 0x564) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x564) + 8);
  }
  FUN_4a16b5a0(auStack_50,iVar1 + param_3 * 0x14);
  if (*(int *)(param_1 + 0x578) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x578) + 8);
  }
  FUN_4a16b5a0(auStack_64,iVar1 + param_3 * 0x14);
  if (*(int *)(param_1 + 0x58c) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x58c) + 8);
  }
  FUN_4a16bdcc(auStack_78,iVar1 + param_3 * 0x14);
  if (*(int *)(param_1 + 0x5a0) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x5a0) + 8);
  }
  FUN_4a16bdcc(auStack_8c,iVar1 + param_3 * 0x14);
  uVar10 = local_48 - 1;
  if (-1 < (int)uVar10) {
    local_34 = local_2c * 5;
    uVar6 = extraout_r1;
    do {
      if (local_80 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(local_80 + 8);
      }
      uVar8 = *(uint *)(iVar1 + uVar10 * 4);
      if (local_44 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(local_44 + 8);
      }
      uVar2 = (uint)*(char *)(iVar1 + uVar10);
      if (uVar2 != 0xffffffff) {
        uVar6 = local_38;
      }
      if (uVar2 == 0xffffffff || uVar2 == uVar6) {
        if (local_58 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(local_58 + 8);
        }
        iVar1 = (int)*(char *)(iVar1 + uVar10);
        if (iVar1 != -1) {
          if ((uVar8 & 0x1000) != 0) {
            uVar11 = FUN_4a13fc4c(param_1,0,iVar1);
            uVar6 = (uint)((ulonglong)uVar11 >> 0x20);
            if ((int)uVar11 == -1) goto LAB_4a0d929c;
            if ((uVar8 & 0x2000) == 0) goto LAB_4a0d9080;
          }
          uVar11 = FUN_4a13fc4c(param_1,local_2c,iVar1);
          uVar6 = (uint)((ulonglong)uVar11 >> 0x20);
          if ((int)uVar11 == -1) goto LAB_4a0d929c;
        }
LAB_4a0d9080:
        if (local_6c == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(local_6c + 8);
        }
        uVar2 = *(uint *)(iVar1 + uVar10 * 4);
        if ((uVar2 == 0) || (uVar6 = local_3c, (uVar2 & local_3c) != 0)) {
          if ((uVar8 & 7) == 0) {
LAB_4a0d9138:
            if ((uVar8 & 0x1d0) != 0) {
              if ((uVar8 & 0x10) == 0) {
                if ((uVar8 & 0x40) == 0) {
                  if ((uVar8 & 0x80) == 0) {
                    if ((uVar8 & 0x100) != 0) {
                      unaff_r10 = 3;
                    }
                  }
                  else {
                    unaff_r10 = 2;
                  }
                }
                else {
                  unaff_r10 = 1;
                }
              }
              else {
                unaff_r10 = 0;
              }
              if (*(int *)(param_1 + 0x7ac) == 0) {
                iVar1 = 0;
              }
              else {
                iVar1 = *(int *)(*(int *)(param_1 + 0x7ac) + 8);
              }
              uVar6 = *(uint *)(iVar1 + unaff_r10 * 4);
              if ((uVar8 & 0x200) == 0) {
                iVar1 = 0x10000;
              }
              else {
                iVar1 = 0x30000;
              }
              if ((int)uVar6 < iVar1) goto LAB_4a0d929c;
            }
            if ((uVar8 & 0xc00) != 0) {
              if ((uVar8 & 0x800) == 0) {
                uVar11 = FUN_4a0de610(param_1,1);
              }
              else {
                uVar11 = FUN_4a0de610(param_1,4);
              }
              uVar6 = (uint)((ulonglong)uVar11 >> 0x20);
              if ((int)uVar11 == 0) goto LAB_4a0d929c;
            }
            if (((param_3 != 0x68) || ((uVar8 & 8) == 0)) || ((uVar8 & 0x4000) != 0)) {
LAB_4a0d926c:
              FUN_4a16bef4(auStack_8c);
              FUN_4a16bef4(auStack_78);
              FUN_4a16b6c0(auStack_64);
              FUN_4a16b6c0(auStack_50);
              return uVar10;
            }
            iVar1 = 0;
            if (*(int *)(param_1 + 0x4ac) == 0) {
              pcVar4 = (char *)0x0;
            }
            else {
              pcVar4 = *(char **)(*(int *)(param_1 + 0x4ac) + 8);
            }
            uVar6 = (uint)*pcVar4;
            if (uVar6 != 0xffffffff) {
              if (*(int *)(param_1 + 0x4c0) == 0) {
                pcVar4 = (char *)0x0;
              }
              else {
                pcVar4 = *(char **)(*(int *)(param_1 + 0x4c0) + 8);
              }
              if (*(int *)(param_1 + 0xf0) != 0) {
                iVar1 = *(int *)(*(int *)(param_1 + 0xf0) + 8);
              }
              if ((int)*pcVar4 < *(int *)(iVar1 + uVar6 * 0x14 + 8) + -1) {
                uVar11 = FUN_4a140e04(param_1,uVar6,*pcVar4 + 1);
                uVar6 = (uint)((ulonglong)uVar11 >> 0x20);
                if ((int)uVar11 != 0) goto LAB_4a0d926c;
              }
            }
          }
          else {
            iVar9 = 3;
            iVar1 = 6;
            if ((uVar8 & 1) == 0) {
              if ((uVar8 & 4) != 0) {
                iVar9 = 6;
                iVar1 = 10;
              }
            }
            else {
              iVar9 = 2;
              iVar1 = 4;
            }
            if (*(int *)(param_1 + 0x920) == 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = *(int *)(*(int *)(param_1 + 0x920) + 8);
            }
            FUN_4a16c074(auStack_a0,iVar3 + local_34 * 4);
            iVar5 = 0;
            iVar3 = 0;
            if (iVar1 != 0) {
              do {
                if (local_94 == 0) {
                  iVar7 = 0;
                }
                else {
                  iVar7 = *(int *)(local_94 + 8);
                }
                if ((*(short *)(iVar7 + iVar3 * 2) == param_3) &&
                   (iVar5 = iVar5 + 1, iVar9 <= iVar5)) {
                  FUN_4a16c1a0(auStack_a0);
                  goto LAB_4a0d9138;
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < iVar1);
            }
            FUN_4a16c1a0(auStack_a0);
            uVar6 = extraout_r1_00;
          }
        }
      }
LAB_4a0d929c:
      uVar10 = uVar10 - 1;
    } while (uVar10 < 0x80000000);
  }
  FUN_4a16bef4(auStack_8c);
  FUN_4a16bef4(auStack_78);
  FUN_4a16b6c0(auStack_64);
  FUN_4a16b6c0(auStack_50);
  return 0xffffffff;
}



// Address: 4a0d92dc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * FUN_4a0d92dc(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x60);
  iVar6 = *(int *)(*(int *)(param_1 + 0x18) + 0x520);
  iVar2 = FUN_4a0d6e30(param_1,0);
  if (iVar2 == -1) {
    uVar3 = thunk_FUN_4a161570(0x14);
    iVar2 = FUN_4a135e24(uVar5,0xfe);
  }
  else {
    iVar4 = *(int *)(iVar6 + 0x154);
    if (iVar2 < iVar4) {
      iVar4 = 0;
      if (*(int *)(iVar6 + 0x158) != 0) {
        iVar4 = *(int *)(*(int *)(iVar6 + 0x158) + 8);
      }
      iVar4 = iVar4 + iVar2 * 0x1c;
    }
    else {
      uVar5 = FUN_4a0642fc();
      iVar4 = FUN_4a134d74(uVar5,iVar2 - iVar4);
    }
    if (*(short *)(iVar4 + 4) != -1) {
      return (undefined4 *)0x0;
    }
    if (iVar2 == 0x22) {
      uVar3 = thunk_FUN_4a161570(0x14);
      iVar2 = FUN_4a135e24(*(undefined4 *)(*(int *)(iVar6 + 0x1c) + 0x60),0xfe);
    }
    else if (iVar2 == 0x23) {
      uVar3 = thunk_FUN_4a161570(0x14);
      iVar2 = FUN_4a135e24(*(undefined4 *)(*(int *)(iVar6 + 0x1c) + 0x60),0xfb);
    }
    else if (iVar2 == 0x24) {
      uVar3 = thunk_FUN_4a161570(0x14);
      iVar2 = FUN_4a135e24(*(undefined4 *)(*(int *)(iVar6 + 0x1c) + 0x60),0xfd);
    }
    else {
      if (iVar2 != 0x25) {
        return (undefined4 *)0x0;
      }
      uVar3 = thunk_FUN_4a161570(0x14);
      iVar2 = FUN_4a135e24(*(undefined4 *)(*(int *)(iVar6 + 0x1c) + 0x60),0xfc);
    }
  }
  puVar1 = (undefined4 *)FUN_4a0c6bc0(uVar3);
  *puVar1 = PTR_PTR_4a0c70cc;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  if (iVar2 != 0) {
    uVar5 = FUN_4a04d4d0(0,iVar2);
    puVar1[2] = uVar5;
  }
  return puVar1;
}



// Address: 4a0d9338

void FUN_4a0d9338(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined1 auStack_70 [20];
  undefined1 auStack_5c [20];
  undefined1 auStack_48 [20];
  undefined1 auStack_34 [20];
  
  if (*(int *)(param_1 + 0x994) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x994) + 8);
  }
  piVar5 = (int *)(param_1 + 0x988);
  piVar4 = (int *)(param_1 + 0x99c);
  if (iVar1 == 0) {
    iVar1 = FUN_4a16c0cc(auStack_5c,100);
    uVar7 = *(undefined4 *)(iVar1 + 8);
    piVar6 = *(int **)(iVar1 + 0xc);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0xc))(piVar6);
    }
    (**(code **)(*piVar5 + 0x1c))(piVar5);
    *(int **)(param_1 + 0x994) = piVar6;
    *(undefined4 *)(param_1 + 0x990) = uVar7;
    FUN_4a16c1a0(auStack_5c);
    iVar1 = FUN_4a16be24(auStack_70,100);
    uVar7 = *(undefined4 *)(iVar1 + 8);
    piVar6 = *(int **)(iVar1 + 0xc);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0xc))(piVar6);
    }
    (**(code **)(*piVar4 + 0x1c))(piVar4);
    *(int **)(param_1 + 0x9a8) = piVar6;
    *(undefined4 *)(param_1 + 0x9a4) = uVar7;
    FUN_4a16bef4(auStack_70);
    iVar1 = FUN_4a16be24(auStack_70,100);
    uVar7 = *(undefined4 *)(iVar1 + 8);
    piVar6 = *(int **)(iVar1 + 0xc);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0xc))(piVar6);
    }
    (**(code **)(*(int *)(param_1 + 0x9b0) + 0x1c))((int *)(param_1 + 0x9b0));
    *(undefined4 *)(param_1 + 0x9b8) = uVar7;
    *(int **)(param_1 + 0x9bc) = piVar6;
    FUN_4a16bef4(auStack_70);
  }
  iVar1 = FUN_4a16c074(auStack_34,piVar5);
  iVar2 = 0;
  if (0 < *(int *)(iVar1 + 8)) {
    do {
      if (*(int *)(iVar1 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar1 + 0xc) + 8);
      }
      *(undefined2 *)(iVar3 + iVar2 * 2) = 0xffff;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar1 + 8));
  }
  FUN_4a16c1a0(auStack_34);
  iVar1 = FUN_4a16bdcc(auStack_48,piVar4);
  iVar2 = 0;
  if (0 < *(int *)(iVar1 + 8)) {
    do {
      if (*(int *)(iVar1 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar1 + 0xc) + 8);
      }
      *(undefined4 *)(iVar3 + iVar2 * 4) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar1 + 8));
  }
  FUN_4a16bef4(auStack_48);
  iVar1 = FUN_4a16bdcc(auStack_48,param_1 + 0x9b0);
  iVar2 = 0;
  if (0 < *(int *)(iVar1 + 8)) {
    do {
      if (*(int *)(iVar1 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar1 + 0xc) + 8);
      }
      *(undefined4 *)(iVar3 + iVar2 * 4) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar1 + 8));
  }
  FUN_4a16bef4(auStack_48);
  return;
}



// Address: 4a0d955c

void FUN_4a0d955c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_20 [20];
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x2c4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x2c4) + 8);
  }
  if (*(char *)(iVar1 + param_2) != -1) {
    if (*(int *)(param_1 + 0x808) != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x808) + 8);
    }
    *(undefined4 *)(iVar3 + *(char *)(iVar1 + param_2) * 4) = *(undefined4 *)(param_1 + 0x78c);
  }
  uVar2 = FUN_4a16c074(auStack_20,param_1 + 0x880);
  iVar3 = FUN_4a16ff5c((int)(short)param_2,uVar2,0);
  FUN_4a16c1a0(auStack_20);
  if (iVar3 != -1) {
    FUN_4a0deea8(param_1,iVar3,0xffffffff);
    return;
  }
  return;
}



// Address: 4a0d95f8

void FUN_4a0d95f8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined1 auStack_6c [20];
  undefined1 auStack_58 [20];
  undefined1 auStack_44 [20];
  undefined1 auStack_30 [20];
  
  *(undefined4 *)(param_1 + 0x78c) = 0x1e0;
  *(undefined4 *)(param_1 + 0x790) = 700;
  *(undefined4 *)(param_1 + 0x794) = 0;
  *(undefined1 *)(param_1 + 0x798) = 0;
  *(undefined1 *)(param_1 + 0x799) = 0;
  *(undefined2 *)(param_1 + 0x79a) = 0xffff;
  iVar1 = FUN_4a142f80(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520));
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),iVar3);
      iVar3 = iVar3 + 1;
      *(undefined2 *)(iVar2 + 0x1a) = 0;
    } while (iVar3 < iVar1);
  }
  if (*(int *)(param_1 + 0x7ac) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x7ac) + 8);
  }
  if (iVar1 == 0) {
    iVar1 = FUN_4a16be24(auStack_6c,*(undefined4 *)(param_1 + 0x24));
    uVar6 = *(undefined4 *)(iVar1 + 8);
    piVar5 = *(int **)(iVar1 + 0xc);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
    }
    (**(code **)(*(int *)(param_1 + 0x7a0) + 0x1c))((int *)(param_1 + 0x7a0));
    *(undefined4 *)(param_1 + 0x7a8) = uVar6;
    *(int **)(param_1 + 0x7ac) = piVar5;
    FUN_4a16bef4(auStack_6c);
  }
  iVar1 = FUN_4a16bdcc(auStack_58,param_1 + 0x7a0);
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 8)) {
    do {
      if (*(int *)(iVar1 + 0xc) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 8);
      }
      *(undefined4 *)(iVar2 + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar1 + 8));
  }
  FUN_4a16bef4(auStack_58);
  FUN_4a0d4ed0(param_1);
  *(undefined1 *)(param_1 + 0x7d8) = 0;
  if (*(int *)(param_1 + 0x4d4) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x4d4) + 8);
  }
  iVar1 = FUN_4a16b5a0(auStack_30,uVar6);
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 8)) {
    do {
      if (*(int *)(iVar1 + 0xc) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 8);
      }
      *(undefined1 *)(iVar2 + iVar3) = 0xff;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar1 + 8));
  }
  FUN_4a16b6c0(auStack_30);
  FUN_4a0d4ff4(param_1);
  FUN_4a0d5908(param_1);
  FUN_4a0e3a98(param_1);
  if (*(int *)(param_1 + 0x8b4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x8b4) + 8);
  }
  piVar5 = (int *)(param_1 + 0x8a8);
  if (iVar1 == 0) {
    iVar1 = FUN_4a16be24(auStack_6c,4);
    uVar6 = *(undefined4 *)(iVar1 + 8);
    piVar4 = *(int **)(iVar1 + 0xc);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))(piVar4);
    }
    (**(code **)(*piVar5 + 0x1c))(piVar5);
    *(int **)(param_1 + 0x8b4) = piVar4;
    *(undefined4 *)(param_1 + 0x8b0) = uVar6;
    FUN_4a16bef4(auStack_6c);
  }
  iVar1 = FUN_4a16bdcc(auStack_58,piVar5);
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 8)) {
    do {
      if (*(int *)(iVar1 + 0xc) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 8);
      }
      *(undefined4 *)(iVar2 + iVar3 * 4) = 0x190000;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar1 + 8));
  }
  FUN_4a16bef4(auStack_58);
  FUN_4a0d5260(param_1);
  iVar1 = *(int *)(param_1 + 0x4d4);
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar1 + 8);
  }
  if (*(int *)(iVar3 + 8) != 5) {
    if (iVar1 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = *(int **)(iVar1 + 8);
    }
    iVar1 = FUN_4a16b5f8(auStack_58,5);
    iVar3 = *(int *)(iVar1 + 8);
    piVar4 = *(int **)(iVar1 + 0xc);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))(piVar4);
    }
    (**(code **)(*piVar5 + 0x1c))(piVar5);
    piVar5[2] = iVar3;
    piVar5[3] = (int)piVar4;
    FUN_4a16b6c0(auStack_58);
    if (*(int *)(param_1 + 0x4d4) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x4d4) + 8);
    }
    iVar1 = FUN_4a16b5a0(auStack_58,uVar6);
    iVar3 = 0;
    if (0 < *(int *)(iVar1 + 8)) {
      do {
        if (*(int *)(iVar1 + 0xc) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 8);
        }
        *(undefined1 *)(iVar2 + iVar3) = 0xff;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(iVar1 + 8));
    }
    FUN_4a16b6c0(auStack_58);
  }
  FUN_4a0da3e4(param_1);
  FUN_4a0d9338(param_1);
  if (*(int *)(param_1 + 0x45c) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x45c) + 8);
  }
  iVar1 = FUN_4a16bdcc(auStack_44,uVar6);
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 8)) {
    do {
      if (*(int *)(iVar1 + 0xc) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 8);
      }
      *(undefined4 *)(iVar2 + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar1 + 8));
  }
  FUN_4a16bef4(auStack_44);
  return;
}



// Address: 4a0d99a4

undefined4 FUN_4a0d99a4(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_28 [12];
  int local_1c;
  
  iVar1 = *(int *)(param_1 + 0x934);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
  }
  iVar4 = 0;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  FUN_4a16b5a0(auStack_28,iVar2 + param_2 * 0x14);
  iVar2 = FUN_4a13fc4c(param_1,param_2,param_3);
  if (-1 < iVar2) {
    if (local_1c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(local_1c + 8);
    }
    if (*(char *)(iVar1 + iVar2) < '\x03') {
      if (local_1c == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(local_1c + 8);
      }
      *(char *)(iVar1 + iVar2) = *(char *)(iVar1 + iVar2) + '\x01';
      if (local_1c == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(local_1c + 8);
      }
      if (*(char *)(iVar1 + iVar2) == '\x03') {
        if (*(int *)(param_1 + 0x420) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(*(int *)(param_1 + 0x420) + 8);
        }
        if (*(int *)(param_1 + 0x364) != 0) {
          iVar4 = *(int *)(*(int *)(param_1 + 0x364) + 8);
        }
        FUN_4a06bc70(*(int *)(param_1 + 0x18) + 0x278,0xfffffff4,0x9c3,
                     (int)*(short *)(iVar2 + param_2 * 2),(int)*(short *)(iVar4 + param_3 * 2));
        uVar3 = FUN_4a0fba7c(*(undefined4 *)(param_1 + 0x18));
        FUN_4a118354(uVar3,0xfffffff4,0xffffffff);
        FUN_4a16b6c0(auStack_28);
        return 1;
      }
    }
  }
  FUN_4a16b6c0(auStack_28);
  return 0;
}



// Address: 4a0d9ad8

undefined4 FUN_4a0d9ad8(int param_1,int param_2,int param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  
  iVar2 = FUN_4a0fba7c(*(undefined4 *)(param_1 + 0x18));
  iVar7 = *(int *)(param_1 + 0x8d0);
  iVar3 = iVar2;
  if (iVar7 != 0) {
    iVar3 = *(int *)(iVar7 + 8);
  }
  iVar9 = 0;
  if (iVar7 == 0) {
    iVar3 = 0;
  }
  cVar1 = *(char *)(iVar3 + param_2);
  if (param_3 == 0x59) {
    switchD_4a11cc8c::default(cVar1 == '\n',s_non_partners_becoming_fiancees_4a0d9cd4);
    uVar8 = 0xb;
  }
  else if (param_3 == 0x5a) {
    switchD_4a11cc8c::default(cVar1 == '\v',s_non_fiancees_getting_married_4a0d9cf4);
    uVar8 = 0xc;
  }
  else if (param_3 == 0x65) {
    switchD_4a11cc8c::default(cVar1 == '\f',s_non_spouse_getting_divorced_4a0d9d14);
    uVar8 = 0xd;
  }
  else {
    if (param_3 != 100) {
      if (param_3 == 0x66) {
        FUN_4a0dd6e4(param_1,param_2,2);
        FUN_4a1136bc(iVar2,0xb41);
      }
      else if (param_3 == 0x67) {
        if (*(int *)(param_1 + 0x8e4) != 0) {
          iVar9 = *(int *)(*(int *)(param_1 + 0x8e4) + 8);
        }
        puVar4 = (ushort *)(iVar9 + param_2 * 2);
        *puVar4 = *puVar4 & 0xfffd;
        FUN_4a1136bc(iVar2,0xb42);
      }
      else if (param_3 == 0x68) {
        if ((param_4 & 0x4000) == 0) {
          if (*(int *)(param_1 + 0x4ac) == 0) {
            pcVar5 = (char *)0x0;
          }
          else {
            pcVar5 = *(char **)(*(int *)(param_1 + 0x4ac) + 8);
          }
          if (*(int *)(param_1 + 0x4c0) == 0) {
            pcVar6 = (char *)0x0;
          }
          else {
            pcVar6 = *(char **)(*(int *)(param_1 + 0x4c0) + 8);
          }
          if (*(int *)(param_1 + 0x118) != 0) {
            iVar9 = *(int *)(*(int *)(param_1 + 0x118) + 8);
          }
          if ((int)*pcVar6 < *(int *)(iVar9 + *pcVar5 * 0x14 + 8) + -1) {
            FUN_4a10fe80(iVar2,(int)*pcVar5,*pcVar6 + 1,0);
          }
        }
        else {
          if (*(int *)(param_1 + 0x420) != 0) {
            iVar9 = *(int *)(*(int *)(param_1 + 0x420) + 8);
          }
          FUN_4a1136bc(iVar2,0xaa4,(int)*(short *)(iVar9 + param_2 * 2));
        }
      }
      else if (param_3 == 0x69) {
        FUN_4a10e9c8(iVar2);
      }
      return 0;
    }
    if ((cVar1 == '\t' || cVar1 == '\n') || cVar1 == '\v') {
      iVar3 = 1;
    }
    if ((cVar1 != '\t' && cVar1 != '\n') && cVar1 != '\v') {
      iVar3 = 0;
    }
    switchD_4a11cc8c::default(iVar3,s_non_date_partner_fiancee_breakup_4a0d9d30);
    uVar8 = 0xe;
  }
  FUN_4a0de770(param_1,param_2,uVar8);
  return 1;
}



// Address: 4a0d9d54

void FUN_4a0d9d54(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_28 [12];
  int local_1c;
  
  iVar1 = FUN_4a13fc4c(param_1,0);
  if (((iVar1 == -1) || (param_2 != 4)) || (param_3 < 1)) {
    iVar2 = FUN_4a13fc4c(param_1,0,1);
    iVar1 = param_3;
    if (((iVar2 != -1) && (param_2 == 4)) && (0 < param_3)) {
      iVar1 = FUN_4a0d4b28(param_3,0xc000);
    }
  }
  else {
    iVar1 = FUN_4a0d4b28(param_3,0x14000);
  }
  iVar2 = FUN_4a13fc4c(param_1,0,4);
  if (((iVar2 == -1) || (param_2 != 5)) || (iVar1 < 1)) {
    iVar2 = FUN_4a13fc4c(param_1,0,5);
    if (((iVar2 != -1) && (param_2 == 5)) && (0 < iVar1)) {
      iVar1 = FUN_4a0d4b28(iVar1,0xc000);
    }
  }
  else {
    iVar1 = FUN_4a0d4b28(iVar1,0x14000);
  }
  iVar2 = FUN_4a13fc4c(param_1,0,10);
  if (((iVar2 == -1) || (param_2 != 0)) || (iVar1 < 1)) {
    iVar2 = FUN_4a13fc4c(param_1,0,0xb);
    if (((iVar2 != -1) && (param_2 == 0)) && (0 < iVar1)) {
      iVar1 = FUN_4a0d4b28(iVar1,0x14000);
    }
  }
  else {
    iVar1 = FUN_4a0d4b28(iVar1,0xc000);
  }
  iVar2 = FUN_4a13fc4c(param_1,0,10);
  if (((iVar2 == -1) || (param_2 != 2)) || (-1 < iVar1)) {
    iVar2 = FUN_4a13fc4c(param_1,0,0xb);
    if (((iVar2 != -1) && (param_2 == 2)) && (iVar1 < 0)) {
      iVar1 = FUN_4a0d4b28(iVar1,0x14000);
    }
  }
  else {
    iVar1 = FUN_4a0d4b28(iVar1,0xc000);
  }
  iVar2 = FUN_4a13fc4c(param_1,0,0xd);
  if (((iVar2 == -1) || (param_2 != 3)) || (iVar1 < 1)) {
    iVar2 = FUN_4a13fc4c(param_1,0,0xc);
    if (((iVar2 != -1) && (param_2 == 3)) && (0 < iVar1)) {
      iVar1 = FUN_4a0d4b28(iVar1,0x14000);
    }
  }
  else {
    iVar1 = FUN_4a0d4b28(iVar1,0xc000);
  }
  iVar2 = FUN_4a13fc4c(param_1,0,7);
  if (((iVar2 == -1) || (param_2 != 3)) || (iVar1 < 1)) {
    iVar2 = FUN_4a13fc4c(param_1,0,6);
    if (((iVar2 != -1) && (param_2 == 3)) && (0 < iVar1)) {
      iVar1 = FUN_4a0d4b28(iVar1,0x14000);
    }
  }
  else {
    iVar1 = FUN_4a0d4b28(iVar1,0xc000);
  }
  iVar2 = FUN_4a13fc4c(param_1,0,0xf);
  if (((iVar2 == -1) || (param_2 != 5)) || (iVar1 < 1)) {
    iVar2 = FUN_4a13fc4c(param_1,0,0xe);
    if (((iVar2 != -1) && (param_2 == 5)) && (0 < iVar1)) {
      iVar1 = FUN_4a0d4b28(iVar1,0xc000);
    }
  }
  else {
    iVar1 = FUN_4a0d4b28(iVar1,0x14000);
  }
  iVar2 = FUN_4a13fc4c(param_1,0,2);
  if (((iVar2 == -1) || (param_2 != 4)) || (-1 < iVar1)) {
    iVar2 = FUN_4a13fc4c(param_1,0,3);
    if (((iVar2 != -1) && (param_2 == 4)) && (iVar1 < 0)) {
      iVar1 = FUN_4a0d4b28(iVar1,0xc000);
    }
  }
  else {
    iVar1 = FUN_4a0d4b28(iVar1,0x14000);
  }
  iVar2 = FUN_4a13fc4c(param_1,0,9);
  if (((iVar2 == -1) || (param_2 != 4)) || (-1 < iVar1)) {
    iVar2 = FUN_4a13fc4c(param_1,0,8);
    if (((iVar2 != -1) && (param_2 == 4)) && (iVar1 < 0)) {
      FUN_4a0d4b28(iVar1,0xc000);
    }
  }
  else {
    FUN_4a0d4b28(iVar1,0x14000);
  }
  FUN_4a16bdcc(auStack_28,param_1 + 0x830);
  iVar1 = 0;
  if (local_1c == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(local_1c + 8);
  }
  piVar3 = (int *)(iVar2 + param_2 * 4);
  *piVar3 = *piVar3 + param_3;
  if (local_1c == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(local_1c + 8);
  }
  uVar4 = FUN_4a0d4b74(*(undefined4 *)(iVar2 + param_2 * 4),0,0x640000);
  if (local_1c != 0) {
    iVar1 = *(int *)(local_1c + 8);
  }
  *(undefined4 *)(iVar1 + param_2 * 4) = uVar4;
  FUN_4a16bef4(auStack_28);
  return;
}



// Address: 4a0da1e0

void FUN_4a0da1e0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_3c [20];
  undefined1 auStack_28 [20];
  
  iVar1 = FUN_4a146b58(param_2,0x2000);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_2 + 0x28);
  }
  if (iVar1 == 0 || iVar2 == 0) {
    uVar3 = FUN_4a16bdcc(auStack_3c,param_4);
    uVar4 = FUN_4a16bdcc(auStack_28,param_3);
    FUN_4a0dd8f8(param_1,param_2,uVar4,uVar3);
    FUN_4a16bef4(auStack_28);
    FUN_4a16bef4(auStack_3c);
    return;
  }
  uVar3 = FUN_4a16bdcc(auStack_3c,param_4);
  uVar4 = FUN_4a16bdcc(auStack_28,param_3);
  FUN_4a0dc07c(param_1,param_2,uVar4,uVar3);
  FUN_4a16bef4(auStack_28);
  FUN_4a16bef4(auStack_3c);
  return;
}



// Address: 4a0da2a4

void FUN_4a0da2a4(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_84 [20];
  undefined1 auStack_70 [12];
  int local_64;
  undefined1 auStack_5c [12];
  int local_50;
  undefined1 auStack_48 [20];
  int iStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  int iStack_28;
  
  iStack_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  iStack_28 = param_4;
  uVar2 = FUN_4a16bdcc(auStack_48);
  FUN_4a0ff4b8(uVar2,param_5);
  FUN_4a16bef4(auStack_48);
  uVar2 = FUN_4a16bdcc(auStack_48,local_2c);
  FUN_4a0ff4b8(uVar2,param_5);
  FUN_4a16bef4(auStack_48);
  FUN_4a16c074(auStack_5c,param_1 + 0x508);
  FUN_4a16c074(auStack_70,param_1 + 0x51c);
  iVar6 = 0;
  if (*(int *)(param_4 + 0xc) == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *(int **)(*(int *)(param_4 + 0xc) + 8);
  }
  iVar7 = *piVar3;
  if (0 < iVar7) {
    do {
      if (*(int *)(param_4 + 0xc) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(param_4 + 0xc) + 8);
      }
      iVar4 = *(int *)(iVar4 + (iVar6 + 5) * 4);
      if (local_64 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(local_64 + 8);
      }
      if (*(short *)(iVar5 + iVar4 * 2) == param_5) {
        if (local_50 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(local_50 + 8);
        }
        sVar1 = *(short *)(iVar5 + iVar4 * 2);
        uVar2 = FUN_4a16bdcc(auStack_84,param_2);
        FUN_4a0fc4b0(uVar2,(int)sVar1);
        FUN_4a16bef4(auStack_84);
        uVar2 = FUN_4a16bdcc(auStack_84,local_2c);
        FUN_4a0fc4b0(uVar2,iVar4);
        FUN_4a16bef4(auStack_84);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar7);
  }
  FUN_4a16c1a0(auStack_70);
  FUN_4a16c1a0(auStack_5c);
  return;
}



// Address: 4a0da3e4

void FUN_4a0da3e4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_d8 [20];
  undefined1 auStack_c4 [20];
  undefined1 auStack_b0 [20];
  undefined1 auStack_9c [8];
  undefined4 local_94;
  int *local_90;
  undefined1 auStack_88 [8];
  undefined4 local_80;
  int *local_7c;
  undefined1 auStack_74 [8];
  undefined4 local_6c;
  int *local_68;
  undefined1 auStack_60 [8];
  undefined4 local_58;
  int *local_54;
  undefined1 auStack_4c [8];
  undefined4 local_44;
  int *local_40;
  undefined1 auStack_38 [8];
  undefined4 local_30;
  int *local_2c;
  
  iVar6 = *(int *)(param_1 + 0x410);
  if (*(int *)(param_1 + 0x8d0) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x8d0) + 8);
  }
  if (iVar1 == 0) {
    FUN_4a16b5f8(auStack_38,iVar6);
    FUN_4a16c0cc(auStack_4c,iVar6);
    FUN_4a168d38(auStack_60,iVar6);
    FUN_4a168d38(auStack_74,iVar6);
    FUN_4a168f18(auStack_88,iVar6);
    FUN_4a168a84(auStack_9c,iVar6);
    iVar1 = 1;
    if (1 < iVar6) {
      do {
        if (local_54 == (int *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = local_54[2];
        }
        piVar4 = (int *)(iVar2 + iVar1 * 0x14);
        iVar2 = FUN_4a16be24(auStack_b0,*(undefined4 *)(param_1 + 0x380));
        iVar7 = *(int *)(iVar2 + 8);
        piVar5 = *(int **)(iVar2 + 0xc);
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 0xc))(piVar5);
        }
        (**(code **)(*piVar4 + 0x1c))(piVar4);
        piVar4[2] = iVar7;
        piVar4[3] = (int)piVar5;
        FUN_4a16bef4(auStack_b0);
        if (local_68 == (int *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = local_68[2];
        }
        piVar4 = (int *)(iVar2 + iVar1 * 0x14);
        iVar2 = FUN_4a16be24(auStack_b0,*(undefined4 *)(param_1 + 0x4f8));
        iVar7 = *(int *)(iVar2 + 8);
        piVar5 = *(int **)(iVar2 + 0xc);
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 0xc))(piVar5);
        }
        (**(code **)(*piVar4 + 0x1c))(piVar4);
        piVar4[2] = iVar7;
        piVar4[3] = (int)piVar5;
        FUN_4a16bef4(auStack_b0);
        if (local_7c == (int *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = local_7c[2];
        }
        piVar4 = (int *)(iVar2 + iVar1 * 0x14);
        iVar2 = FUN_4a16c0cc(auStack_c4,10);
        iVar7 = *(int *)(iVar2 + 8);
        piVar5 = *(int **)(iVar2 + 0xc);
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 0xc))(piVar5);
        }
        (**(code **)(*piVar4 + 0x1c))(piVar4);
        piVar4[2] = iVar7;
        piVar4[3] = (int)piVar5;
        FUN_4a16c1a0(auStack_c4);
        iVar2 = 0;
        if (local_90 == (int *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = local_90[2];
        }
        piVar4 = (int *)(iVar7 + iVar1 * 0x14);
        if (*(int *)(param_1 + 0x4d4) != 0) {
          iVar2 = *(int *)(*(int *)(param_1 + 0x4d4) + 8);
        }
        iVar2 = FUN_4a16b5f8(auStack_d8,*(undefined4 *)(iVar2 + iVar1 * 0x14 + 8));
        iVar7 = *(int *)(iVar2 + 8);
        piVar5 = *(int **)(iVar2 + 0xc);
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 0xc))(piVar5);
        }
        (**(code **)(*piVar4 + 0x1c))(piVar4);
        piVar4[2] = iVar7;
        piVar4[3] = (int)piVar5;
        FUN_4a16b6c0(auStack_d8);
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar6);
    }
    if (local_2c != (int *)0x0) {
      (**(code **)(*local_2c + 0xc))(local_2c);
    }
    (**(code **)(*(int *)(param_1 + 0x8c4) + 0x1c))((int *)(param_1 + 0x8c4));
    *(undefined4 *)(param_1 + 0x8cc) = local_30;
    *(int **)(param_1 + 0x8d0) = local_2c;
    if (local_40 != (int *)0x0) {
      (**(code **)(*local_40 + 0xc))(local_40);
    }
    (**(code **)(*(int *)(param_1 + 0x8d8) + 0x1c))((int *)(param_1 + 0x8d8));
    *(undefined4 *)(param_1 + 0x8e0) = local_44;
    *(int **)(param_1 + 0x8e4) = local_40;
    if (local_54 != (int *)0x0) {
      (**(code **)(*local_54 + 0xc))(local_54);
    }
    (**(code **)(*(int *)(param_1 + 0x8ec) + 0x1c))((int *)(param_1 + 0x8ec));
    *(undefined4 *)(param_1 + 0x8f4) = local_58;
    *(int **)(param_1 + 0x8f8) = local_54;
    if (local_68 != (int *)0x0) {
      (**(code **)(*local_68 + 0xc))(local_68);
    }
    (**(code **)(*(int *)(param_1 + 0x900) + 0x1c))((int *)(param_1 + 0x900));
    *(undefined4 *)(param_1 + 0x908) = local_6c;
    *(int **)(param_1 + 0x90c) = local_68;
    if (local_7c != (int *)0x0) {
      (**(code **)(*local_7c + 0xc))(local_7c);
    }
    (**(code **)(*(int *)(param_1 + 0x914) + 0x1c))((int *)(param_1 + 0x914));
    *(undefined4 *)(param_1 + 0x91c) = local_80;
    *(int **)(param_1 + 0x920) = local_7c;
    if (local_90 != (int *)0x0) {
      (**(code **)(*local_90 + 0xc))(local_90);
    }
    (**(code **)(*(int *)(param_1 + 0x928) + 0x1c))((int *)(param_1 + 0x928));
    *(undefined4 *)(param_1 + 0x930) = local_94;
    *(int **)(param_1 + 0x934) = local_90;
    FUN_4a168b90(auStack_9c);
    FUN_4a169024(auStack_88);
    FUN_4a168e44(auStack_74);
    FUN_4a168e44(auStack_60);
    FUN_4a16c1a0(auStack_4c);
    FUN_4a16b6c0(auStack_38);
  }
  iVar1 = 1;
  if (1 < iVar6) {
    do {
      if (*(int *)(param_1 + 0x8d0) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(param_1 + 0x8d0) + 8);
      }
      *(undefined1 *)(iVar2 + iVar1) = 0;
      if (*(int *)(param_1 + 0x8e4) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(param_1 + 0x8e4) + 8);
      }
      *(undefined2 *)(iVar2 + iVar1 * 2) = 0;
      if (*(int *)(param_1 + 0x8f8) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(param_1 + 0x8f8) + 8);
      }
      iVar2 = FUN_4a16bdcc(auStack_38,iVar2 + iVar1 * 0x14);
      iVar7 = 0;
      if (0 < *(int *)(iVar2 + 8)) {
        do {
          if (*(int *)(iVar2 + 0xc) == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(*(int *)(iVar2 + 0xc) + 8);
          }
          *(undefined4 *)(iVar3 + iVar7 * 4) = 0;
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar2 + 8));
      }
      FUN_4a16bef4(auStack_38);
      if (*(int *)(param_1 + 0x920) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(param_1 + 0x920) + 8);
      }
      iVar2 = FUN_4a16c074(auStack_4c,iVar2 + iVar1 * 0x14);
      iVar7 = 0;
      if (0 < *(int *)(iVar2 + 8)) {
        do {
          if (*(int *)(iVar2 + 0xc) == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(*(int *)(iVar2 + 0xc) + 8);
          }
          *(undefined2 *)(iVar3 + iVar7 * 2) = 0xffff;
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar2 + 8));
      }
      FUN_4a16c1a0(auStack_4c);
      if (*(int *)(param_1 + 0x934) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(param_1 + 0x934) + 8);
      }
      iVar2 = FUN_4a16b5a0(auStack_60,iVar2 + iVar1 * 0x14);
      iVar7 = 0;
      if (0 < *(int *)(iVar2 + 8)) {
        do {
          if (*(int *)(iVar2 + 0xc) == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(*(int *)(iVar2 + 0xc) + 8);
          }
          *(undefined1 *)(iVar3 + iVar7) = 0;
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar2 + 8));
      }
      FUN_4a16b6c0(auStack_60);
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar6);
  }
  *(undefined4 *)(param_1 + 0x940) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x93c) = 0;
  *(undefined4 *)(param_1 + 0x944) = 0;
  return;
}



// Address: 4a0daa18

void FUN_4a0daa18(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_4a13fc4c(param_1,0,param_2);
  if (iVar1 != -1) {
    iVar3 = 0;
    if (*(int *)(param_1 + 0x4d4) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0x4d4) + 8);
    }
    if (*(int *)(iVar2 + 0xc) != 0) {
      iVar3 = *(int *)(*(int *)(iVar2 + 0xc) + 8);
    }
    *(undefined1 *)(iVar1 + iVar3) = 0xff;
    return;
  }
  return;
}



// Address: 4a0daa6c

void FUN_4a0daa6c(int param_1)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  
  pcVar9 = (char *)0x0;
  if (*(int *)(param_1 + 0x4ac) == 0) {
    pcVar3 = (char *)0x0;
  }
  else {
    pcVar3 = *(char **)(*(int *)(param_1 + 0x4ac) + 8);
  }
  cVar1 = *pcVar3;
  iVar4 = FUN_4a14039c(param_1,0);
  if (*(int *)(param_1 + 0x140) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(param_1 + 0x140) + 8);
  }
  iVar6 = *(int *)(iVar6 + cVar1 * 0x14 + 0xc);
  uVar7 = *(uint *)(param_1 + 0x78c);
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(iVar6 + 8);
  }
  iVar6 = (int)*(short *)(iVar6 + iVar4 * 2);
  iVar4 = (int)((longlong)(int)uVar7 * (longlong)DAT_4a0dac64 + ((ulonglong)uVar7 << 0x20) >> 0x20);
  iVar4 = uVar7 + ((iVar4 >> 10) - (iVar4 >> 0x1f)) * -0x5a0;
  iVar8 = iVar6 - iVar4;
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0x5a0;
  }
  switchD_4a11cc8c::default(iVar4 <= iVar6,s_Can_t_knock_off__before__we_go_t_4a0dac68);
  iVar4 = *(int *)(param_1 + 0x788) + iVar8 * 1000;
  *(int *)(param_1 + 0x788) = iVar4;
  if (1000 < iVar4) {
    lVar2 = (longlong)DAT_4a0dac90;
    iVar6 = (int)((ulonglong)(lVar2 * iVar4) >> 0x20);
    iVar6 = (iVar6 >> 6) - (iVar6 >> 0x1f);
    *(int *)(param_1 + 0x788) = iVar4 + iVar6 * -1000;
    iVar8 = *(int *)(param_1 + 0x78c);
    *(int *)(param_1 + 0x78c) = iVar8 + iVar6;
    uVar5 = FUN_4a0fba7c(*(undefined4 *)(param_1 + 0x18),iVar6,iVar6 * -0x7d,(int)(lVar2 * iVar4));
    FUN_4a11c5b4(uVar5,iVar8,*(undefined4 *)(param_1 + 0x78c));
  }
  iVar4 = FUN_4a13feec(param_1,3);
  if (iVar4 == -1) {
    FUN_4a0d9d54(param_1,1,0xffd80000);
  }
  iVar4 = FUN_4a13feec(param_1,8);
  if (iVar4 == -1) {
    FUN_4a0d9d54(param_1,3,0xffec0000);
  }
  FUN_4a0d9d54(param_1,5,0xffe70000);
  FUN_4a0d9d54(param_1,2);
  if (*(int *)(param_1 + 0x4ac) != 0) {
    pcVar9 = *(char **)(*(int *)(param_1 + 0x4ac) + 8);
  }
  if ((*pcVar9 != '\0') && (iVar4 = FUN_4a13feec(param_1,0), iVar4 == -1)) {
    FUN_4a0d9d54(param_1,0,0xffec0000);
  }
  *(undefined4 *)(param_1 + 0x984) = 0x9c4;
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x520) + 0x450) = 1;
  return;
}



// Address: 4a0dac94

void FUN_4a0dac94(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  undefined1 auStack_b0 [20];
  undefined1 auStack_9c [12];
  int local_90;
  undefined1 auStack_88 [12];
  int local_7c;
  undefined1 auStack_74 [12];
  int local_68;
  undefined1 auStack_60 [12];
  int local_54;
  undefined1 auStack_4c [20];
  int local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  int iStack_28;
  
  if (*(int *)(param_4 + 0xc) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_4 + 0xc) + 8);
  }
  uVar15 = *(undefined4 *)(iVar4 + 4);
  iStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  iStack_28 = param_4;
  uVar5 = FUN_4a16bdcc(auStack_4c,param_2);
  FUN_4a0ff4b8(uVar5,uVar15);
  FUN_4a16bef4(auStack_4c);
  uVar5 = FUN_4a16bdcc(auStack_4c,local_2c);
  FUN_4a0ff4b8(uVar5,0x800);
  FUN_4a16bef4(auStack_4c);
  FUN_4a16c074(auStack_60,param_1 + 0x508);
  local_38 = param_1 + 0x51c;
  FUN_4a16c074(auStack_74);
  iVar4 = 0;
  if (*(int *)(param_4 + 0xc) == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = *(int **)(*(int *)(param_4 + 0xc) + 8);
  }
  iVar16 = *piVar6;
  if (0 < iVar16) {
    do {
      if (*(int *)(param_4 + 0xc) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(*(int *)(param_4 + 0xc) + 8);
      }
      iVar7 = *(int *)(iVar7 + (iVar4 + 5) * 4);
      bVar2 = false;
      if (local_68 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(local_68 + 8);
      }
      iVar8 = (int)*(short *)(iVar8 + iVar7 * 2);
      if (iVar8 == 0x800) {
LAB_4a0dae0c:
        bVar3 = false;
      }
      else {
        FUN_4a16bdcc(auStack_88,param_4);
        bVar2 = true;
        FUN_4a16c074(auStack_9c,local_38);
        iVar14 = 0;
        if (local_7c == 0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = *(int **)(local_7c + 8);
        }
        iVar9 = 0;
        if (0 < *piVar6) {
          do {
            iVar13 = iVar9 + 5;
            if (local_7c == 0) {
              iVar11 = 0;
            }
            else {
              iVar11 = *(int *)(local_7c + 8);
            }
            iVar9 = iVar9 + 1;
            if (local_90 == 0) {
              iVar12 = 0;
            }
            else {
              iVar12 = *(int *)(local_90 + 8);
            }
            if (*(short *)(iVar12 + *(int *)(iVar11 + iVar13 * 4) * 2) == iVar8) {
              iVar14 = iVar14 + 1;
            }
          } while (iVar9 < *piVar6);
        }
        FUN_4a16c1a0(auStack_9c);
        if (iVar14 < 2) goto LAB_4a0dae0c;
        bVar3 = true;
      }
      if (bVar2) {
        FUN_4a16bef4(auStack_88);
      }
      iVar14 = 0;
      if (bVar3) {
        uVar5 = FUN_4a16bdcc(auStack_9c,local_30);
        iVar7 = FUN_4a0fc150(uVar5,iVar8);
        FUN_4a16bef4(auStack_9c);
        if (iVar7 != 1) {
          uVar5 = FUN_4a16bdcc(auStack_b0,local_30);
          FUN_4a0fc4b0(uVar5,iVar8);
          FUN_4a16bef4(auStack_b0);
          uVar5 = FUN_4a16bdcc(auStack_b0,local_2c);
          FUN_4a0fc4b0(uVar5,0xfffffffe);
          puVar10 = auStack_b0;
          goto LAB_4a0daed0;
        }
      }
      else {
        if (local_54 != 0) {
          iVar14 = *(int *)(local_54 + 8);
        }
        sVar1 = *(short *)(iVar14 + iVar7 * 2);
        uVar5 = FUN_4a16bdcc(auStack_9c,local_30);
        FUN_4a0fc4b0(uVar5,(int)sVar1);
        FUN_4a16bef4(auStack_9c);
        uVar5 = FUN_4a16bdcc(auStack_9c,local_2c);
        FUN_4a0fc4b0(uVar5,iVar7);
        puVar10 = auStack_9c;
LAB_4a0daed0:
        FUN_4a16bef4(puVar10);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar16);
  }
  FUN_4a16c1a0(auStack_74);
  FUN_4a16c1a0(auStack_60);
  return;
}



// Address: 4a0daefc

void FUN_4a0daefc(int param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_40 [20];
  undefined4 local_2c;
  undefined4 local_28;
  
  do {
    local_28 = *(undefined4 *)(param_1 + 0x18);
    local_2c = FUN_4a0fba7c();
    bVar3 = false;
    uVar4 = FUN_4a16b5a0(auStack_40,param_1 + 0x7e0);
    iVar5 = FUN_4a16fe9c((int)(char)param_2,uVar4,0);
    FUN_4a16b6c0(auStack_40);
    if (iVar5 == -1) {
      if (*(char *)(param_1 + 0x7d9) == param_2) {
        *(undefined1 *)(param_1 + 0x7d9) = 0xff;
        bVar3 = true;
        iVar5 = 4;
        *(undefined4 *)(param_1 + 0x7dc) = 0;
      }
    }
    else {
      bVar3 = true;
      if (*(int *)(param_1 + 0x7ec) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(param_1 + 0x7ec) + 8);
      }
      *(undefined1 *)(iVar6 + iVar5) = 0xff;
    }
    uVar7 = 0;
    if (param_2 == 0) {
      uVar7 = 4;
    }
    else if (param_2 == 1) {
      uVar7 = 8;
    }
    uVar9 = 0;
    *(uint *)(param_1 + 0x7f8) = uVar7 | *(uint *)(param_1 + 0x7f8);
    if (*(int *)(param_1 + 400) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(param_1 + 400) + 8);
    }
    uVar2 = *(ushort *)(iVar6 + *(char *)(param_1 + 0x7d8) * 2);
    uVar7 = 0;
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x1a0)) {
      do {
        iVar8 = 0;
        if (*(int *)(param_1 + 0x1b8) != 0) {
          iVar8 = *(int *)(*(int *)(param_1 + 0x1b8) + 8);
        }
        if ((*(ushort *)(iVar8 + iVar6 * 2) & uVar2) != 0) {
          uVar1 = 1 << (uVar9 & 0xff);
          if (param_2 == iVar6) {
            if ((*(uint *)(param_1 + 0x7f4) & uVar1) == 0) {
              bVar3 = true;
              *(uint *)(param_1 + 0x7f4) = *(uint *)(param_1 + 0x7f4) | uVar1;
              goto LAB_4a0db034;
            }
LAB_4a0db040:
            uVar7 = uVar7 + 1;
          }
          else {
LAB_4a0db034:
            if ((uVar1 & *(uint *)(param_1 + 0x7f4)) != 0) goto LAB_4a0db040;
          }
          uVar9 = uVar9 + 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x1a0));
    }
    if (bVar3) {
      FUN_4a0fd124(local_28,param_2);
      FUN_4a1182e0(local_2c,param_2,iVar5);
      uVar4 = FUN_4a0941ec();
      FUN_4a094d68(uVar4,param_2);
    }
    if (uVar7 == uVar9) {
      *(uint *)(param_1 + 0x7f8) = *(uint *)(param_1 + 0x7f8) | 1;
    }
    iVar5 = FUN_4a145968(local_28);
    if ((iVar5 == 0) &&
       (iVar6 = *(int *)(param_1 + 0x1a0), iVar5 = FUN_4a145b3c(local_28), iVar5 == iVar6)) {
      FUN_4a10ea2c(local_2c);
    }
    if (param_2 != 0x15) {
      return;
    }
    iVar5 = (*(ushort *)(param_1 + 0x810) + 1) * 0x10000;
    iVar6 = iVar5 >> 0x10;
    if (0xf < iVar6) {
      param_2 = 0x2b;
    }
    *(short *)(param_1 + 0x810) = (short)((uint)iVar5 >> 0x10);
    if (iVar6 < 0x10) {
      return;
    }
  } while( true );
}



// Address: 4a0db0fc

void FUN_4a0db0fc(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_7c [20];
  undefined1 auStack_68 [20];
  undefined1 auStack_54 [8];
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  int local_38;
  int iStack_34;
  int local_30;
  int local_2c;
  int local_28;
  
  local_40 = *(int *)(param_1 + 0x78c);
  iVar2 = *(int *)(param_1 + 0x4e8);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 8);
  }
  iVar10 = 0;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  iStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  FUN_4a16b5a0(auStack_54,iVar3 + param_2 * 0x14);
  iVar3 = 0;
  if (0 < local_4c) {
    local_38 = (int)(short)local_2c;
    local_3c = param_1 + 0x95c;
    do {
      bVar12 = false;
      if (local_48 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(local_48 + 8);
      }
      iVar2 = (int)*(char *)(iVar2 + iVar3);
      if (*(int *)(param_1 + 0x97c) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(param_1 + 0x97c) + 8);
      }
      iVar9 = *(int *)(iVar4 + iVar2 * 4);
      iVar4 = *(int *)(param_1 + 0x968);
      if (iVar4 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(iVar4 + 8);
      }
      if (*(char *)(iVar6 + iVar2) == local_30) {
        if (*(int *)(param_1 + 0x744) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(*(int *)(param_1 + 0x744) + 8);
        }
        if (*(short *)(iVar4 + iVar2 * 2) == local_2c) {
          uVar5 = FUN_4a0fba7c(*(undefined4 *)(param_1 + 0x18));
          FUN_4a11bfb4(uVar5,iVar2,local_30);
          break;
        }
        if (0x59f < local_40 - iVar9) {
          bVar12 = true;
          goto LAB_4a0db21c;
        }
      }
      else {
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(iVar4 + 8);
        }
        if (*(char *)(iVar4 + iVar2) == -1) {
LAB_4a0db21c:
          if (local_28 != 0) {
            if (*(int *)(param_1 + 0x780) == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = *(int *)(*(int *)(param_1 + 0x780) + 8);
            }
            uVar5 = FUN_4a16c074(auStack_68,iVar4 + iVar2 * 0x14);
            iVar4 = FUN_4a16ff5c(local_38,uVar5,0);
            FUN_4a16c1a0(auStack_68);
            if (iVar4 != -1) {
              if (bVar12) {
LAB_4a0db364:
                if (*(int *)(param_1 + 0x97c) != 0) {
                  iVar10 = *(int *)(*(int *)(param_1 + 0x97c) + 8);
                }
                *(undefined4 *)(iVar10 + iVar2 * 4) = *(undefined4 *)(param_1 + 0x78c);
                FUN_4a0d546c(param_1,iVar2,local_30);
                break;
              }
              cVar1 = (char)local_30;
              iVar4 = FUN_4a16b5a0(auStack_7c,local_3c);
              uVar7 = *(uint *)(iVar4 + 8);
              uVar8 = 0;
              if ((int)uVar7 < 1) {
                uVar11 = 0;
              }
              else {
                uVar11 = uVar7 & 1;
              }
              if (uVar11 != 0) {
                do {
                  if (*(int *)(iVar4 + 0xc) == 0) {
                    iVar6 = 0;
                  }
                  else {
                    iVar6 = *(int *)(*(int *)(iVar4 + 0xc) + 8);
                  }
                  if (*(char *)(iVar6 + uVar8) == cVar1) goto LAB_4a0db330;
                  uVar8 = uVar8 + 1;
                } while ((int)uVar8 < (int)uVar11);
              }
              if ((int)uVar11 < (int)uVar7) {
                iVar4 = *(int *)(iVar4 + 0xc);
                do {
                  if (iVar4 == 0) {
                    iVar6 = 0;
                  }
                  else {
                    iVar6 = *(int *)(iVar4 + 8);
                  }
                  uVar8 = uVar11;
                  if (*(char *)(iVar6 + uVar11) == cVar1) goto LAB_4a0db330;
                  if (iVar4 == 0) {
                    iVar6 = 0;
                  }
                  else {
                    iVar6 = *(int *)(iVar4 + 8);
                  }
                  if (*(char *)(iVar6 + uVar11 + 1) == cVar1) {
                    uVar8 = uVar11 + 1;
                    goto LAB_4a0db330;
                  }
                  uVar11 = uVar11 + 2;
                } while ((int)uVar11 < (int)uVar7);
              }
              uVar8 = 0xffffffff;
LAB_4a0db330:
              FUN_4a16b6c0(auStack_7c);
              if (uVar8 == 0xffffffff) {
                bVar12 = SCARRY4(iVar9,1);
                iVar4 = iVar9 + 1;
                if (iVar9 != -1) {
                  bVar12 = SBORROW4(local_40 - iVar9,0x5a0);
                  iVar4 = (local_40 - iVar9) + -0x5a0;
                }
                if ((iVar4 < 0 == bVar12) &&
                   (iVar4 = FUN_4a0fb748(*(undefined4 *)(param_1 + 0x18)), iVar4 < 0x1f))
                goto LAB_4a0db364;
              }
            }
          }
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_4c);
  }
  FUN_4a16b6c0(auStack_54);
  return;
}



// Address: 4a0db3b0

void FUN_4a0db3b0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined2 *puVar6;
  ushort *puVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  undefined1 auStack_88 [8];
  int local_80;
  int local_7c;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined1 auStack_64 [12];
  int local_58;
  int local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int iStack_34;
  int local_30;
  int local_2c;
  int iStack_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  iStack_28 = param_4;
  local_40 = FUN_4a0fba7c(*(undefined4 *)(param_1 + 0x18));
  uVar16 = 0;
  iVar17 = -1;
  local_48 = 0;
  local_44 = -1;
  iVar3 = *(int *)(param_1 + 0x53c);
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + 8);
  }
  iVar18 = 0;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  local_4c = *(uint *)(iVar4 + param_5 * 4);
  bVar19 = false;
  if (param_4 == 0) {
    if ((local_4c & 0x100000) == 0) {
      if (param_5 == 0x17) {
        uVar16 = 0x23;
        iVar17 = 0xe;
      }
      else {
        uVar16 = 0x13;
        iVar17 = 0xd;
      }
    }
    FUN_4a0dd6e4(param_1,local_2c,1);
    FUN_4a0dd6e4(param_1,0,1);
    if (*(int *)(param_1 + 0x8d0) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1 + 0x8d0) + 8);
    }
    if (*(char *)(iVar4 + local_2c) == '\0') {
      if (*(int *)(param_1 + 0x8f8) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(param_1 + 0x8f8) + 8);
      }
      iVar4 = *(int *)(iVar4 + local_2c * 0x14 + 0xc);
      uVar14 = 1;
      if (iVar4 == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = *(int **)(iVar4 + 8);
      }
      if (*piVar5 < 0) {
        uVar14 = 2;
      }
      FUN_4a0de770(param_1,local_2c,uVar14);
      bVar19 = true;
    }
LAB_4a0dbb30:
    if (iVar17 != -1) {
LAB_4a0dbb38:
      iVar4 = param_4;
      if ((local_2c != 0) && (iVar4 = local_2c, param_4 != 0)) goto LAB_4a0dbba0;
      if (iVar4 != -1) {
        FUN_4a0d9d54(param_1,4,0x140000);
        *(int *)(param_1 + 0x940) = iVar4;
        *(undefined4 *)(param_1 + 0x944) = 0;
      }
    }
    if (local_2c != 0) goto LAB_4a0dbba0;
  }
  else {
    if (local_2c != 0) {
      if ((local_4c & 0x100000) != 0) goto LAB_4a0dbba0;
      uVar16 = 0x14;
      iVar17 = 0xd;
      goto LAB_4a0dbb38;
    }
    iVar4 = FUN_4a0d8e58(param_1,param_4,param_5);
    if (iVar4 != -1) {
      local_50 = 0;
      iVar17 = *(int *)(param_1 + 0x578);
      iVar3 = 0;
      if (iVar17 != 0) {
        iVar3 = *(int *)(iVar17 + 8);
      }
      local_38 = param_5 * 5;
      if (iVar17 == 0) {
        iVar3 = 0;
      }
      iVar3 = *(int *)(iVar3 + param_5 * 0x14 + 0xc);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar3 + 8);
      }
      if (*(char *)(iVar3 + iVar4) != -1) {
        local_50 = FUN_4a0d99a4(param_1,param_4);
      }
      local_3c = param_4 * 5;
      if (*(int *)(param_1 + 0x920) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x920) + 8);
      }
      FUN_4a16c074(auStack_64,iVar3 + param_4 * 0x14);
      iVar3 = 9;
      do {
        iVar17 = iVar3 + -1;
        if (local_58 != 0) {
          iVar12 = *(int *)(local_58 + 8);
        }
        else {
          iVar12 = 0;
        }
        if (local_58 != 0) {
          iVar13 = *(int *)(local_58 + 8);
        }
        else {
          iVar13 = 0;
        }
        iVar1 = iVar3 * 2;
        iVar3 = iVar3 + -1;
        *(undefined2 *)(iVar13 + iVar1) = *(undefined2 *)(iVar12 + iVar17 * 2);
      } while (0 < iVar3);
      if (local_58 == 0) {
        puVar6 = (undefined2 *)0x0;
      }
      else {
        puVar6 = *(undefined2 **)(local_58 + 8);
      }
      *puVar6 = (short)param_5;
      if ((local_4c & 0x20) == 0) {
        FUN_4a0dd6e4(param_1,param_4,1);
        FUN_4a0dd6e4(param_1,0,1);
      }
      else {
        if (*(int *)(param_1 + 0x8e4) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(param_1 + 0x8e4) + 8);
        }
        puVar7 = (ushort *)(iVar3 + param_4 * 2);
        *puVar7 = *puVar7 & 0xfffe;
      }
      if (*(int *)(param_1 + 0x604) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x604) + 8);
      }
      iVar3 = *(int *)(iVar3 + local_38 * 4 + 0xc);
      bVar15 = true;
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar3 + 8);
      }
      iVar17 = (int)*(short *)(iVar3 + iVar4 * 2);
      iVar3 = FUN_4a12785c(local_40,param_4);
      if (((iVar17 == -1) && (iVar3 != 0)) && (iVar3 = FUN_4a135264(), iVar3 != 0)) {
        bVar15 = false;
      }
      local_68 = 0;
      if (bVar15) {
        if (*(int *)(param_1 + 0x5b4) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(param_1 + 0x5b4) + 8);
        }
        iVar3 = *(int *)(iVar3 + local_38 * 4 + 0xc);
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(iVar3 + 8);
        }
        cVar2 = *(char *)(iVar3 + iVar4);
        if (*(int *)(param_1 + 0x5c8) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(param_1 + 0x5c8) + 8);
        }
        iVar3 = *(int *)(iVar3 + local_38 * 4 + 0xc);
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(iVar3 + 8);
        }
        local_6c = (int)*(char *)(iVar3 + iVar4);
        FUN_4a0d7794(param_1,param_4,(int)cVar2,local_6c);
        local_68 = local_6c + cVar2;
        if (0 < local_6c) {
          uVar16 = 0x40;
        }
        local_70 = FUN_4a140c50(param_1,param_4);
        if (*(int *)(param_1 + 0x5dc) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(param_1 + 0x5dc) + 8);
        }
        iVar3 = *(int *)(iVar3 + local_38 * 4 + 0xc);
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(iVar3 + 8);
        }
        iVar3 = (int)*(char *)(iVar3 + iVar4);
        if (*(int *)(param_1 + 0x5f0) == 0) {
          iVar12 = 0;
        }
        else {
          iVar12 = *(int *)(*(int *)(param_1 + 0x5f0) + 8);
        }
        iVar12 = *(int *)(iVar12 + local_38 * 4 + 0xc);
        if (iVar12 == 0) {
          iVar12 = 0;
        }
        else {
          iVar12 = *(int *)(iVar12 + 8);
        }
        local_74 = (int)*(char *)(iVar12 + iVar4);
        if (*(int *)(param_1 + 0x90c) == 0) {
          iVar12 = 0;
        }
        else {
          iVar12 = *(int *)(*(int *)(param_1 + 0x90c) + 8);
        }
        FUN_4a16bdcc(auStack_88,iVar12 + local_3c * 4);
        iVar12 = 0;
        if (0 < local_80) {
          do {
            if (iVar12 == iVar3) {
              if (local_7c == 0) {
                iVar13 = 0;
              }
              else {
                iVar13 = *(int *)(local_7c + 8);
              }
              piVar5 = (int *)(iVar13 + iVar3 * 4);
              *piVar5 = local_74 * 0x10000 + *piVar5;
              if (local_7c == 0) {
                iVar13 = 0;
              }
              else {
                iVar13 = *(int *)(local_7c + 8);
              }
              if (0xc80000 < *(int *)(iVar13 + iVar3 * 4)) {
                if (local_7c == 0) {
                  iVar13 = 0;
                }
                else {
                  iVar13 = *(int *)(local_7c + 8);
                }
                *(undefined4 *)(iVar13 + iVar3 * 4) = 0xc80000;
              }
            }
            else {
              if (local_7c == 0) {
                iVar13 = 0;
              }
              else {
                iVar13 = *(int *)(local_7c + 8);
              }
              piVar5 = (int *)(iVar13 + iVar12 * 4);
              *piVar5 = *piVar5 + -0xa0000;
              if (local_7c == 0) {
                iVar13 = 0;
              }
              else {
                iVar13 = *(int *)(local_7c + 8);
              }
              if (*(int *)(iVar13 + iVar12 * 4) < 0) {
                if (local_7c == 0) {
                  iVar13 = 0;
                }
                else {
                  iVar13 = *(int *)(local_7c + 8);
                }
                *(undefined4 *)(iVar13 + iVar12 * 4) = 0;
              }
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < local_80);
        }
        iVar3 = FUN_4a140c50(param_1,param_4);
        if ((iVar3 != local_70) && (local_50 == 0)) {
          if (*(int *)(param_1 + 0x4fc) == 0) {
            iVar12 = 0;
          }
          else {
            iVar12 = *(int *)(*(int *)(param_1 + 0x4fc) + 8);
          }
          if (*(int *)(param_1 + 0x420) == 0) {
            iVar13 = 0;
          }
          else {
            iVar13 = *(int *)(*(int *)(param_1 + 0x420) + 8);
          }
          FUN_4a06bb54(*(int *)(param_1 + 0x18) + 0x278,0xfffffff4,
                       (int)*(short *)(iVar12 + iVar3 * 2),(int)*(short *)(iVar13 + param_4 * 2));
          FUN_4a118354(local_40,0xfffffff4,0xffffffff);
          if ((iVar3 == 1 || iVar3 == 2) || iVar3 == 8) {
            FUN_4a0daefc(param_1,0xf);
            FUN_4a0dd6e4(param_1,param_4,0x4000);
            if (iVar3 == 2) {
              FUN_4a0daefc(param_1,0x10);
              FUN_4a0dd6e4(param_1,param_4,0x40);
            }
            else if (iVar3 == 1) {
              FUN_4a0daefc(param_1,0x11);
              FUN_4a0dd6e4(param_1,param_4,0x80);
            }
          }
        }
        FUN_4a16bef4(auStack_88);
      }
      if (*(int *)(param_1 + 0x5a0) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x5a0) + 8);
      }
      iVar3 = *(int *)(iVar3 + local_38 * 4 + 0xc);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar3 + 8);
      }
      local_48 = *(uint *)(iVar3 + iVar4 * 4);
      if ((local_48 & 8) == 0) {
        if (param_5 == 0x68) {
          iVar4 = 0;
          if (*(int *)(param_1 + 0x4ac) == 0) {
            pcVar8 = (char *)0x0;
          }
          else {
            pcVar8 = *(char **)(*(int *)(param_1 + 0x4ac) + 8);
          }
          if (*(int *)(param_1 + 0x4c0) == 0) {
            pcVar9 = (char *)0x0;
          }
          else {
            pcVar9 = *(char **)(*(int *)(param_1 + 0x4c0) + 8);
          }
          if (*(int *)(param_1 + 0x118) != 0) {
            iVar4 = *(int *)(*(int *)(param_1 + 0x118) + 8);
          }
          if ((int)*pcVar9 < *(int *)(iVar4 + *pcVar8 * 0x14 + 8) + -1) {
            FUN_4a1174dc(local_40,(int)*pcVar8,*pcVar9 + 1);
          }
        }
      }
      else {
        iVar4 = FUN_4a0d9ad8(param_1,param_4,param_5,local_48);
        bVar19 = iVar4 != 0;
      }
      iVar4 = FUN_4a0de454(param_1,param_4);
      if (iVar4 == 0) {
        if (((local_4c & 0x400000) == 0) && (param_5 != 0x6e)) {
          if (*(int *)(param_1 + 0x8d0) == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)(*(int *)(param_1 + 0x8d0) + 8);
          }
          if (*(char *)(iVar4 + param_4) == '\0') {
            if (*(int *)(param_1 + 0x8f8) == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = *(int *)(*(int *)(param_1 + 0x8f8) + 8);
            }
            iVar4 = *(int *)(iVar4 + local_3c * 4 + 0xc);
            uVar14 = 1;
            if (iVar4 == 0) {
              piVar5 = (int *)0x0;
            }
            else {
              piVar5 = *(int **)(iVar4 + 8);
            }
            if (*piVar5 < 0) {
              uVar14 = 2;
            }
            FUN_4a0de770(param_1,param_4,uVar14);
            goto LAB_4a0dba38;
          }
        }
        if (bVar19 != false) goto LAB_4a0dbac8;
      }
      else {
LAB_4a0dba38:
        bVar19 = true;
LAB_4a0dbac8:
        if (*(int *)(param_1 + 0x8d0) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(*(int *)(param_1 + 0x8d0) + 8);
        }
        if (*(int *)(param_1 + 0x3b8) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(param_1 + 0x3b8) + 8);
        }
        local_44 = (int)*(short *)(iVar3 + *(char *)(iVar4 + param_4) * 2);
      }
      if (local_44 == -1) {
        uVar10 = FUN_4a0d4b74(local_68 + 3,0,6);
        uVar16 = uVar10 | uVar16;
      }
      else {
        uVar16 = uVar16 | 3;
      }
      if ((int)uVar16 < 3) {
        uVar16 = uVar16 | 0x20;
      }
      else {
        uVar16 = uVar16 | 0x10;
      }
      FUN_4a16c1a0(auStack_64);
      goto LAB_4a0dbb30;
    }
  }
  if ((local_48 & 0x8000) != 0) {
    FUN_4a0db0fc(param_1,param_4,param_5,bVar19 ^ 1);
  }
LAB_4a0dbba0:
  if (*(int *)(local_30 + 0xc) == 0) {
    puVar11 = (uint *)0x0;
  }
  else {
    puVar11 = *(uint **)(*(int *)(local_30 + 0xc) + 8);
  }
  *puVar11 = uVar16;
  if (*(int *)(local_30 + 0xc) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(local_30 + 0xc) + 8);
  }
  *(int *)(iVar4 + 4) = iVar17;
  if (*(int *)(local_30 + 0xc) != 0) {
    iVar18 = *(int *)(*(int *)(local_30 + 0xc) + 8);
  }
  *(int *)(iVar18 + 8) = local_44;
  return;
}



// Address: 4a0dbd40

void FUN_4a0dbd40(int param_1)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = *(int *)(param_1 + 0x78c) - 0x1e0;
  lVar1 = (longlong)(int)uVar2 * (longlong)DAT_4a0dbd68 + ((ulonglong)uVar2 << 0x20);
  *(short *)(param_1 + 0x79a) = (short)(int)(lVar1 >> 0x2a) - (short)(lVar1 >> 0x3f);
  return;
}



// Address: 4a0dbd6c

void FUN_4a0dbd6c(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_4a144e8c(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520));
  if (uVar1 != 0xffffffff) {
    *(uint *)(param_1 + 0x828) = *(uint *)(param_1 + 0x828) | 1 << (uVar1 & 0xff);
    return;
  }
  return;
}



// Address: 4a0dbda4

undefined4 FUN_4a0dbda4(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x7f8);
  if (((uVar1 & 1) != 0) && ((uVar1 & 2) == 0)) {
    *(uint *)(param_1 + 0x7f8) = uVar1 | 2;
    return 1;
  }
  return 0;
}



// Address: 4a0dbdcc

void FUN_4a0dbdcc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_38 [8];
  int iStack_30;
  int iStack_2c;
  
  if (*(int *)(param_1 + 0x944) < 10000) {
    FUN_4a0fba7c(*(undefined4 *)(param_1 + 0x18));
    iVar1 = FUN_4a117814();
    iVar1 = iVar1 + *(int *)(param_1 + 0x944);
    *(int *)(param_1 + 0x944) = iVar1;
    if (9999 < iVar1) {
      *(undefined4 *)(param_1 + 0x940) = 0xffffffff;
    }
  }
  param_2 = *(int *)(param_1 + 0x93c) + param_2;
  iVar1 = 0;
  *(int *)(param_1 + 0x93c) = param_2;
  if (3000 < param_2) {
    *(undefined4 *)(param_1 + 0x93c) = 0;
  }
  iVar10 = *(int *)(param_1 + 0x410);
  iVar9 = 1;
  if (iVar10 < 2) {
    return;
  }
  do {
    FUN_4a0de454(param_1,iVar9);
    if (*(int *)(param_1 + 0x93c) == 0) {
      iVar8 = iVar1;
      if (*(int *)(param_1 + 0x90c) != 0) {
        iVar8 = *(int *)(*(int *)(param_1 + 0x90c) + 8);
      }
      FUN_4a16bdcc(auStack_38,iVar8 + iVar9 * 0x14);
      iVar5 = 0;
      iVar8 = 3;
      iVar7 = 0;
      if (0 < iStack_30) {
        do {
          iVar6 = iVar1;
          if (iStack_2c != 0) {
            iVar6 = *(int *)(iStack_2c + 8);
          }
          if (iVar5 < *(int *)(iVar6 + iVar7 * 4)) {
            iVar8 = iVar1;
            if (iStack_2c != 0) {
              iVar8 = *(int *)(iStack_2c + 8);
            }
            iVar5 = *(int *)(iVar8 + iVar7 * 4);
            iVar8 = iVar7;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iStack_30);
      }
      FUN_4a16bef4(auStack_38);
      iVar5 = iVar1;
      if (*(int *)(param_1 + 0x90c) != 0) {
        iVar5 = *(int *)(*(int *)(param_1 + 0x90c) + 8);
      }
      FUN_4a16bdcc(auStack_38,iVar5 + iVar9 * 0x14);
      iVar5 = 0;
      if (0 < iStack_30) {
        do {
          iVar7 = iVar1;
          if (iStack_2c != 0) {
            iVar7 = *(int *)(iStack_2c + 8);
          }
          piVar3 = (int *)(iVar7 + iVar5 * 4);
          *piVar3 = *piVar3 + -0x50000;
          iVar7 = iVar1;
          if (iStack_2c != 0) {
            iVar7 = *(int *)(iStack_2c + 8);
          }
          if (*(int *)(iVar7 + iVar5 * 4) < 0) {
            iVar7 = iVar1;
            if (iStack_2c != 0) {
              iVar7 = *(int *)(iStack_2c + 8);
            }
            *(undefined4 *)(iVar7 + iVar5 * 4) = 0;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iStack_30);
      }
      FUN_4a16bef4(auStack_38);
      iVar5 = iVar1;
      if (*(int *)(param_1 + 0x90c) != 0) {
        iVar5 = *(int *)(*(int *)(param_1 + 0x90c) + 8);
      }
      FUN_4a16bdcc(auStack_38,iVar5 + iVar9 * 0x14);
      iVar6 = 0;
      iVar5 = 3;
      iVar7 = 0;
      if (0 < iStack_30) {
        do {
          iVar4 = iVar1;
          if (iStack_2c != 0) {
            iVar4 = *(int *)(iStack_2c + 8);
          }
          if (iVar6 < *(int *)(iVar4 + iVar7 * 4)) {
            iVar5 = iVar1;
            if (iStack_2c != 0) {
              iVar5 = *(int *)(iStack_2c + 8);
            }
            iVar6 = *(int *)(iVar5 + iVar7 * 4);
            iVar5 = iVar7;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iStack_30);
      }
      FUN_4a16bef4(auStack_38);
      if (((*(int *)(param_1 + 0x940) == iVar9) && (*(int *)(param_1 + 0x944) < 10000)) &&
         (iVar8 != iVar5)) {
        iVar8 = iVar1;
        if (*(int *)(param_1 + 0x4fc) != 0) {
          iVar8 = *(int *)(*(int *)(param_1 + 0x4fc) + 8);
        }
        iVar7 = iVar1;
        if (*(int *)(param_1 + 0x420) != 0) {
          iVar7 = *(int *)(*(int *)(param_1 + 0x420) + 8);
        }
        FUN_4a06bb54(*(int *)(param_1 + 0x18) + 0x278,0xfffffff4,(int)*(short *)(iVar8 + iVar5 * 2),
                     (int)*(short *)(iVar7 + iVar9 * 2));
        uVar2 = FUN_4a0fba7c(*(undefined4 *)(param_1 + 0x18));
        FUN_4a118354(uVar2,0xfffffff4,0xffffffff);
      }
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < iVar10);
  return;
}



// Address: 4a0dc07c

void FUN_4a0dc07c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  undefined1 auStack_ac [20];
  undefined1 auStack_98 [20];
  undefined1 auStack_84 [12];
  int local_78;
  undefined1 auStack_70 [12];
  int local_64;
  int local_5c;
  undefined1 auStack_58 [20];
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_5c = *(int *)(param_1 + 0x504);
  iStack_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  FUN_4a16c074(auStack_70,param_1 + 0x508);
  iVar13 = 0;
  FUN_4a16bdcc(auStack_84,param_1 + 0x530);
  iVar4 = FUN_4a146a9c(param_2);
  iVar5 = FUN_4a135264(param_2);
  *(int *)(param_1 + 0x940) = iVar4;
  *(undefined4 *)(param_1 + 0x944) = 0;
  if (*(int *)(param_1 + 0x420) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(param_1 + 0x420) + 8);
  }
  iVar6 = (int)*(short *)(iVar6 + iVar4 * 2);
  uVar7 = FUN_4a16bdcc(auStack_58,local_2c);
  FUN_4a0ff4b8(uVar7,iVar6);
  FUN_4a16bef4(auStack_58);
  uVar7 = FUN_4a16bdcc(auStack_58,local_28);
  FUN_4a0ff4b8(uVar7,iVar6);
  FUN_4a16bef4(auStack_58);
  FUN_4a0fba7c(*(undefined4 *)(param_1 + 0x18));
  iVar6 = FUN_4a146ea4();
  if (iVar6 == 0) {
    iVar13 = 0;
    if (0 < local_5c) {
      local_38 = param_1 + 0x700;
      local_3c = param_1 + 0x738;
      local_40 = param_1 + 0x8d8;
      local_44 = param_1 + 0x8c4;
      do {
        if (local_78 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(local_78 + 8);
        }
        if ((*(uint *)(iVar6 + iVar13 * 4) & 2) != 0) {
          if (local_78 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(local_78 + 8);
          }
          if (((*(uint *)(iVar6 + iVar13 * 4) & 8) != 0) || (iVar5 == 0)) {
            if (local_78 == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(local_78 + 8);
            }
            if (((*(uint *)(iVar6 + iVar13 * 4) & 8) == 0) || (iVar5 != 0)) {
              if (local_64 == 0) {
                iVar6 = 0;
              }
              else {
                iVar6 = *(int *)(local_64 + 8);
              }
              if (*(short *)(iVar6 + iVar13 * 2) != 0x800) {
                uVar3 = 1;
                if (local_78 == 0) {
                  iVar6 = 0;
                }
                else {
                  iVar6 = *(int *)(local_78 + 8);
                }
                uVar14 = *(uint *)(iVar6 + iVar13 * 4);
                if ((uVar14 & 0x10) == 0) {
                  if ((uVar14 & 0x20) != 0) {
                    if (*(int *)(param_1 + 0x8e4) == 0) {
                      iVar6 = 0;
                    }
                    else {
                      iVar6 = *(int *)(*(int *)(param_1 + 0x8e4) + 8);
                    }
                    uVar1 = *(ushort *)(iVar6 + iVar4 * 2);
                    uVar3 = uVar1 & 1;
                    if ((uVar1 & 1) != 0) {
                      uVar3 = 1;
                    }
                  }
                }
                else {
                  if (*(int *)(param_1 + 0x8e4) == 0) {
                    iVar6 = 0;
                  }
                  else {
                    iVar6 = *(int *)(*(int *)(param_1 + 0x8e4) + 8);
                  }
                  uVar1 = *(ushort *)(iVar6 + iVar4 * 2);
                  uVar3 = uVar1 & 1;
                  if ((uVar1 & 1) != 0) {
                    uVar3 = 1;
                  }
                  uVar3 = uVar3 ^ 1;
                }
                if ((uVar14 & 0x2000000) != 0) {
                  if (*(char *)(local_38 + 0xd8) == '\x05') {
                    uVar8 = 0x2000000;
                  }
                  else {
                    uVar8 = 0;
                  }
                  uVar3 = 0;
                  if ((uVar8 & uVar14) != 0) {
                    uVar3 = 1;
                  }
                }
                if ((uVar3 != 0) && (iVar6 = FUN_4a0d8e58(param_1,iVar4), iVar6 != -1)) {
                  if (*(int *)(param_1 + 0x4ac) == 0) {
                    pcVar9 = (char *)0x0;
                  }
                  else {
                    pcVar9 = *(char **)(*(int *)(param_1 + 0x4ac) + 8);
                  }
                  iVar6 = (int)*pcVar9;
                  if ((uVar14 & 0x8000) == 0) {
LAB_4a0dc358:
                    if ((uVar14 & 0x10000) == 0) {
LAB_4a0dc3ac:
                      iVar6 = FUN_4a142ef4(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520));
                      iVar10 = *(int *)(param_1 + 0x8e4);
                      if (iVar10 == 0) {
                        iVar12 = 0;
                      }
                      else {
                        iVar12 = *(int *)(iVar10 + 8);
                      }
                      if ((*(ushort *)(iVar12 + iVar4 * 2) & 2) == 0) {
                        if (*(int *)(param_1 + 0x470) == 0) {
                          iVar12 = 0;
                        }
                        else {
                          iVar12 = *(int *)(*(int *)(param_1 + 0x470) + 8);
                        }
                        iVar12 = (int)*(short *)(iVar12 + iVar4 * 2);
                      }
                      else {
                        iVar12 = 0;
                      }
                      if ((~uVar14 & 0x60000) == 0) {
                        if (iVar10 == 0) {
                          iVar6 = 0;
                        }
                        else {
                          iVar6 = *(int *)(iVar10 + 8);
                        }
                        uVar1 = *(ushort *)(iVar6 + iVar4 * 2);
                        uVar3 = uVar1 & 2;
                        if ((uVar1 & 2) != 0) goto LAB_4a0dc454;
LAB_4a0dc460:
                        if (uVar3 == 0) goto LAB_4a0dc74c;
                      }
                      else {
                        if ((uVar14 & 0x20000) != 0) {
                          if ((iVar6 != 0) || (iVar12 == 0)) {
LAB_4a0dc45c:
                            uVar3 = 0;
                            goto LAB_4a0dc460;
                          }
LAB_4a0dc454:
                          uVar3 = 1;
                          goto LAB_4a0dc460;
                        }
                        if ((uVar14 & 0x40000) != 0) {
                          if ((iVar6 == 0) || (iVar12 != iVar6)) goto LAB_4a0dc45c;
                          goto LAB_4a0dc454;
                        }
                      }
                      if ((uVar14 & 0x1000000) != 0) {
                        uVar7 = FUN_4a16c074(auStack_ac,local_3c);
                        iVar6 = FUN_4a16ff5c((int)(short)iVar13,uVar7,0);
                        FUN_4a16c1a0(auStack_ac);
                        iVar10 = 0;
                        if (*(int *)(param_1 + 0x968) != 0) {
                          iVar10 = *(int *)(*(int *)(param_1 + 0x968) + 8);
                        }
                        if ((*(char *)(iVar10 + iVar6) == iVar4) &&
                           (iVar6 = FUN_4a14168c(param_1), iVar6 != 0)) {
                          bVar16 = true;
                        }
                        else {
                          bVar16 = false;
                        }
                        if (!bVar16) goto LAB_4a0dc74c;
                      }
                      if ((uVar14 & 0x10000000) == 0) {
                        if ((uVar14 & 0x20000000) != 0) {
                          puVar11 = (uint *)0x0;
                          if (*(int *)(param_1 + 0x45c) == 0) {
                            iVar6 = 0;
                          }
                          else {
                            iVar6 = *(int *)(*(int *)(param_1 + 0x45c) + 8);
                          }
                          if (*(int *)(iVar6 + 0xc) != 0) {
                            puVar11 = *(uint **)(*(int *)(iVar6 + 0xc) + 8);
                          }
                          uVar8 = 1 - *puVar11;
                          if (1 < *puVar11) {
                            uVar8 = 0;
                          }
                          uVar8 = uVar8 ^ 1;
                          goto LAB_4a0dc54c;
                        }
                      }
                      else {
                        puVar11 = (uint *)0x0;
                        if (*(int *)(param_1 + 0x45c) == 0) {
                          iVar6 = 0;
                        }
                        else {
                          iVar6 = *(int *)(*(int *)(param_1 + 0x45c) + 8);
                        }
                        if (*(int *)(iVar6 + 0xc) != 0) {
                          puVar11 = *(uint **)(*(int *)(iVar6 + 0xc) + 8);
                        }
                        uVar8 = 1 - *puVar11;
                        if (1 < *puVar11) {
                          uVar8 = 0;
                        }
LAB_4a0dc54c:
                        if (uVar8 == 0) goto LAB_4a0dc74c;
                      }
                      if ((~(uVar14 >> 0x1b) & 1) != 0) {
                        if (iVar13 == 0x59) {
                          iVar6 = FUN_4a16b5a0(auStack_ac,local_44);
                          uVar8 = *(uint *)(iVar6 + 8);
                          uVar14 = 0;
                          if ((int)uVar8 < 1) {
                            uVar15 = 0;
                          }
                          else {
                            uVar15 = uVar8 & 1;
                          }
                          if (uVar15 != 0) {
                            do {
                              if (*(int *)(iVar6 + 0xc) == 0) {
                                iVar10 = 0;
                              }
                              else {
                                iVar10 = *(int *)(*(int *)(iVar6 + 0xc) + 8);
                              }
                              if (*(char *)(iVar10 + uVar14) == '\f') goto LAB_4a0dc674;
                              uVar14 = uVar14 + 1;
                            } while ((int)uVar14 < (int)uVar15);
                          }
                          if ((int)uVar15 < (int)uVar8) {
                            iVar6 = *(int *)(iVar6 + 0xc);
                            while( true ) {
                              if (iVar6 == 0) {
                                iVar10 = 0;
                              }
                              else {
                                iVar10 = *(int *)(iVar6 + 8);
                              }
                              uVar14 = uVar15;
                              if (*(char *)(iVar10 + uVar15) == '\f') goto LAB_4a0dc674;
                              if (iVar6 == 0) {
                                iVar10 = 0;
                              }
                              else {
                                iVar10 = *(int *)(iVar6 + 8);
                              }
                              if (*(char *)(iVar10 + uVar15 + 1) == '\f') break;
                              uVar15 = uVar15 + 2;
                              if ((int)uVar8 <= (int)uVar15) goto LAB_4a0dc680;
                            }
                            uVar14 = uVar15 + 1;
LAB_4a0dc674:
                            if (uVar14 == 0xffffffff) goto LAB_4a0dc680;
                            bVar16 = false;
                          }
                          else {
LAB_4a0dc680:
                            bVar16 = true;
                          }
                          FUN_4a16b6c0(auStack_ac);
LAB_4a0dc6f4:
                          if (!bVar16) goto LAB_4a0dc74c;
                        }
                        else {
                          if (iVar13 == 99) {
                            iVar10 = FUN_4a0fba7c(*(undefined4 *)(param_1 + 0x18));
                            iVar6 = *(int *)(param_2 + 0x44) -
                                    *(int *)(*(int *)(iVar10 + 0x5f8) + 0x44);
                            if (iVar6 <= -iVar6) {
                              iVar6 = -iVar6;
                            }
                            iVar10 = *(int *)(param_2 + 0x4c) -
                                     *(int *)(*(int *)(iVar10 + 0x5f8) + 0x4c);
                            if (iVar10 <= -iVar10) {
                              iVar10 = -iVar10;
                            }
                            if (iVar6 + iVar10 < 0x800001) {
LAB_4a0dc6f0:
                              bVar16 = false;
                            }
                            else {
LAB_4a0dc6e8:
                              bVar16 = true;
                            }
                            goto LAB_4a0dc6f4;
                          }
                          if (iVar13 == 0x66) {
                            uVar7 = FUN_4a16c074(auStack_ac,local_40);
                            iVar6 = FUN_4a0fbaa4(2,uVar7);
                            bVar16 = iVar6 == -1;
                            FUN_4a16c1a0(auStack_ac);
                            goto LAB_4a0dc6f4;
                          }
                          if (iVar13 == 0x67) {
                            if (*(int *)(param_1 + 0x8d0) == 0) {
                              iVar6 = 0;
                            }
                            else {
                              iVar6 = *(int *)(*(int *)(param_1 + 0x8d0) + 8);
                            }
                            if (*(char *)(iVar6 + iVar4) == '\f') goto LAB_4a0dc6f0;
                            goto LAB_4a0dc6e8;
                          }
                        }
                        if (local_64 == 0) {
                          iVar6 = 0;
                        }
                        else {
                          iVar6 = *(int *)(local_64 + 8);
                        }
                        sVar2 = *(short *)(iVar6 + iVar13 * 2);
                        uVar7 = FUN_4a16bdcc(auStack_98,local_2c);
                        FUN_4a0fc4b0(uVar7,(int)sVar2);
                        FUN_4a16bef4(auStack_98);
                        uVar7 = FUN_4a16bdcc(auStack_98,local_28);
                        FUN_4a0fc4b0(uVar7,iVar13);
                        FUN_4a16bef4(auStack_98);
                      }
                    }
                    else if (iVar6 != -1) {
                      if ((iVar4 == 10) &&
                         (iVar10 = FUN_4a145968(*(undefined4 *)(param_1 + 0x18)), iVar10 != 0)) {
                        iVar10 = 4;
                      }
                      else {
                        if (*(int *)(param_1 + 0x4ac) == 0) {
                          iVar10 = 0;
                        }
                        else {
                          iVar10 = *(int *)(*(int *)(param_1 + 0x4ac) + 8);
                        }
                        iVar10 = (int)*(char *)(iVar10 + iVar4);
                      }
                      if (iVar10 == iVar6) goto LAB_4a0dc3ac;
                    }
                  }
                  else if (iVar6 != -1) {
                    if (*(int *)(param_1 + 0xa0) == 0) {
                      iVar10 = 0;
                    }
                    else {
                      iVar10 = *(int *)(*(int *)(param_1 + 0xa0) + 8);
                    }
                    if (*(char *)(iVar10 + iVar6) == iVar4) goto LAB_4a0dc358;
                  }
                }
              }
            }
          }
        }
LAB_4a0dc74c:
        iVar13 = iVar13 + 1;
      } while (iVar13 < local_5c);
    }
  }
  else {
    if (local_64 != 0) {
      iVar13 = *(int *)(local_64 + 8);
    }
    sVar2 = *(short *)(iVar13 + 0x14a);
    uVar7 = FUN_4a16bdcc(auStack_98,local_2c);
    FUN_4a0fc4b0(uVar7,(int)sVar2);
    FUN_4a16bef4(auStack_98);
    uVar7 = FUN_4a16bdcc(auStack_98,local_28);
    FUN_4a0fc4b0(uVar7,0xa5);
    FUN_4a16bef4(auStack_98);
  }
  FUN_4a16bef4(auStack_84);
  FUN_4a16c1a0(auStack_70);
  return;
}



// Address: 4a0dc778

int FUN_4a0dc778(int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  
LAB_4a0dc784:
  do {
    iVar5 = FUN_4a0fe640(*(undefined4 *)(param_1 + 0x18),0,*(int *)(param_1 + 0x628) + -1);
    if (*(int *)(param_1 + 0x6b8) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(param_1 + 0x6b8) + 8);
    }
    cVar1 = *(char *)(iVar6 + iVar5);
    if (*(int *)(param_1 + 0x6e0) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(param_1 + 0x6e0) + 8);
    }
    cVar2 = *(char *)(iVar6 + iVar5);
    if (*(int *)(param_1 + 0x668) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(param_1 + 0x668) + 8);
    }
    cVar3 = *(char *)(iVar6 + iVar5);
    if (*(int *)(param_1 + 0x690) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(param_1 + 0x690) + 8);
    }
    cVar4 = *(char *)(iVar6 + iVar5);
    if (*(int *)(param_1 + 0x4ac) == 0) {
      pcVar7 = (char *)0x0;
    }
    else {
      pcVar7 = *(char **)(*(int *)(param_1 + 0x4ac) + 8);
    }
    iVar9 = (int)*pcVar7;
    iVar6 = FUN_4a14039c(param_1,0);
    if (((cVar1 == '\x02' || cVar2 == '\x02') || cVar3 == '\x02') || cVar4 == '\x02') {
      if (iVar9 == -1) {
        return iVar5;
      }
      if (iVar6 == 0) goto LAB_4a0dc784;
    }
    else if (iVar9 == -1) {
      return iVar5;
    }
    if (*(int *)(param_1 + 0xf0) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(*(int *)(param_1 + 0xf0) + 8);
    }
    if (((cVar1 != '\x01' && cVar2 != '\x01') && cVar3 != '\x01') && cVar4 != '\x01') {
      return iVar5;
    }
    if (iVar6 != *(int *)(iVar8 + iVar9 * 0x14 + 8) + -1) {
      return iVar5;
    }
  } while( true );
}



// Address: 4a0dc888

bool FUN_4a0dc888(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_4a0fb748(*(undefined4 *)(param_1 + 0x18));
  iVar3 = 0;
  if (param_3 == 0) {
    if (*(int *)(param_1 + 0x654) != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x654) + 8);
    }
    if (iVar2 < *(char *)(iVar3 + param_2)) {
      uVar1 = 2;
    }
    else {
      uVar1 = 3;
    }
    return (bool)uVar1;
  }
  if (*(int *)(param_1 + 0x640) != 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x640) + 8);
  }
  return *(char *)(iVar3 + param_2) <= iVar2;
}



// Address: 4a0dc8f4

void FUN_4a0dc8f4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_4c [20];
  undefined1 auStack_38 [20];
  
  iVar6 = 0;
  if (*(int *)(param_1 + 0x514) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x514) + 8);
  }
  iVar2 = (int)*(short *)(iVar2 + param_4 * 2);
  uVar3 = FUN_4a16bdcc(auStack_38,param_2);
  FUN_4a0ff4b8(uVar3,iVar2);
  FUN_4a16bef4(auStack_38);
  uVar3 = FUN_4a16bdcc(auStack_38,param_3);
  FUN_4a0ff4b8(uVar3,iVar2);
  FUN_4a16bef4(auStack_38);
  iVar2 = FUN_4a142ef4(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520));
  iVar5 = 1;
  if (*(int *)(param_1 + 0x410) < 2) {
    return;
  }
  do {
    iVar4 = iVar6;
    if (*(int *)(param_1 + 0x8d0) != 0) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x8d0) + 8);
    }
    if (*(char *)(iVar4 + iVar5) != '\0') {
      iVar4 = iVar6;
      if (*(int *)(param_1 + 0x8e4) != 0) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x8e4) + 8);
      }
      if ((*(ushort *)(iVar4 + iVar5 * 2) & 2) == 0) {
        iVar4 = iVar6;
        if (*(int *)(param_1 + 0x470) != 0) {
          iVar4 = *(int *)(*(int *)(param_1 + 0x470) + 8);
        }
        iVar4 = (int)*(short *)(iVar4 + iVar5 * 2);
      }
      else {
        iVar4 = 0;
      }
      if (iVar4 != iVar2) {
        iVar4 = iVar6;
        if (*(int *)(param_1 + 0x420) != 0) {
          iVar4 = *(int *)(*(int *)(param_1 + 0x420) + 8);
        }
        sVar1 = *(short *)(iVar4 + iVar5 * 2);
        uVar3 = FUN_4a16bdcc(auStack_4c,param_2);
        FUN_4a0fc4b0(uVar3,(int)sVar1);
        FUN_4a16bef4(auStack_4c);
        uVar3 = FUN_4a16bdcc(auStack_4c,param_3);
        FUN_4a0fc4b0(uVar3,param_4);
        FUN_4a16bef4(auStack_4c);
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < *(int *)(param_1 + 0x410));
  return;
}



// Address: 4a0dca54

void FUN_4a0dca54(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_4c [20];
  undefined1 auStack_38 [20];
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0x514) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x514) + 8);
  }
  iVar4 = (int)*(short *)(iVar4 + param_4 * 2);
  uVar1 = FUN_4a16bdcc(auStack_38,param_2);
  FUN_4a0ff4b8(uVar1,iVar4);
  FUN_4a16bef4(auStack_38);
  uVar1 = FUN_4a16bdcc(auStack_38,param_3);
  FUN_4a0ff4b8(uVar1,iVar4);
  FUN_4a16bef4(auStack_38);
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520);
  iVar4 = FUN_4a142f80(uVar1);
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      iVar2 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),iVar5);
      if ((0 < *(short *)(iVar2 + 0x1a)) &&
         (iVar2 = FUN_4a143130(uVar1,iVar5), (*(uint *)(iVar2 + 0x10) & 4) != 0)) {
        iVar2 = FUN_4a143130(uVar1,iVar5);
        uVar6 = *(undefined4 *)(iVar2 + 8);
        uVar3 = FUN_4a16bdcc(auStack_4c,param_2);
        FUN_4a0fc4b0(uVar3,uVar6);
        FUN_4a16bef4(auStack_4c);
        uVar3 = FUN_4a16bdcc(auStack_4c,param_3);
        FUN_4a0fc4b0(uVar3,param_4);
        FUN_4a16bef4(auStack_4c);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
    return;
  }
  return;
}



// Address: 4a0dcb74

void FUN_4a0dcb74(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_68 [12];
  int local_5c;
  undefined1 auStack_54 [12];
  int local_48;
  undefined1 auStack_40 [8];
  int local_38;
  int local_34;
  undefined1 auStack_2c [12];
  int local_20;
  
  iVar8 = 0;
  if (*(int *)(param_1 + 0x8d0) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x8d0) + 8);
  }
  iVar1 = (int)*(char *)(iVar1 + param_2);
  if (*(int *)(param_1 + 0x8f8) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x8f8) + 8);
  }
  FUN_4a16bdcc(auStack_2c,iVar2 + param_2 * 0x14);
  if (*(int *)(param_1 + 0x3e0) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x3e0) + 8);
  }
  FUN_4a16b5a0(auStack_40,iVar2 + iVar1 * 0x14);
  if (*(int *)(param_1 + 0x3f4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x3f4) + 8);
  }
  FUN_4a16b5a0(auStack_54,iVar2 + iVar1 * 0x14);
  if (*(int *)(param_1 + 0x408) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x408) + 8);
  }
  FUN_4a16c074(auStack_68,iVar2 + iVar1 * 0x14);
  iVar2 = 0;
  iVar1 = 0;
  if (0 < local_38) {
    do {
      if (local_48 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(local_48 + 8);
      }
      if (local_5c == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(local_5c + 8);
      }
      iVar4 = (int)*(short *)(iVar4 + iVar1 * 2);
      if (local_20 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(local_20 + 8);
      }
      iVar3 = *(int *)(iVar5 + *(char *)(iVar3 + iVar1) * 4) >> 0x10;
      if (iVar4 < 1) {
        if (iVar4 < 0 && iVar3 < 0) goto LAB_4a0dcc88;
      }
      else if (0 < iVar3) {
LAB_4a0dcc88:
        if (local_34 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(local_34 + 8);
        }
        if (*(int *)(param_3 + 0xc) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(*(int *)(param_3 + 0xc) + 8);
        }
        *(int *)(iVar7 + iVar2 * 4) = (int)*(char *)(iVar5 + iVar1);
        uVar6 = FUN_4a0d4b0c(iVar3 << 0x10,iVar4 << 0x10);
        iVar3 = iVar2 + 1;
        if (*(int *)(param_3 + 0xc) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(*(int *)(param_3 + 0xc) + 8);
        }
        iVar2 = iVar2 + 2;
        *(undefined4 *)(iVar4 + iVar3 * 4) = uVar6;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_38);
  }
  if (*(int *)(param_3 + 0xc) != 0) {
    iVar8 = *(int *)(*(int *)(param_3 + 0xc) + 8);
  }
  *(undefined4 *)(iVar8 + iVar2 * 4) = 0xffffffff;
  FUN_4a16c1a0(auStack_68);
  FUN_4a16b6c0(auStack_54);
  FUN_4a16b6c0(auStack_40);
  FUN_4a16bef4(auStack_2c);
  return;
}



// Address: 4a0dcd24

void FUN_4a0dcd24(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 auStack_64 [8];
  int local_5c;
  int local_58;
  undefined1 auStack_50 [8];
  int local_48;
  int local_44;
  undefined4 local_3c;
  undefined1 auStack_38 [12];
  int local_2c;
  
  iVar9 = 0;
  uVar10 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520);
  do {
    uVar3 = FUN_4a0bf920(param_2);
    FUN_4a141abc(param_1,0);
    puVar5 = (undefined4 *)0x0;
    if (*(int *)(param_1 + 0x45c) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1 + 0x45c) + 8);
    }
    iVar9 = iVar9 + 1;
    if (*(int *)(iVar4 + 0xc) != 0) {
      puVar5 = *(undefined4 **)(*(int *)(iVar4 + 0xc) + 8);
    }
    *puVar5 = uVar3;
  } while (iVar9 < 0xb);
  if (*(int *)(param_1 + 0x45c) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(int *)(param_1 + 0x45c) + 8);
  }
  if (*(int *)(iVar9 + 0xc) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(int *)(iVar9 + 0xc) + 8);
  }
  *(undefined4 *)(iVar9 + 0x2c) = 0;
  if (*(int *)(param_1 + 0x45c) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(int *)(param_1 + 0x45c) + 8);
  }
  if (*(int *)(iVar9 + 0xc) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(int *)(iVar9 + 0xc) + 8);
  }
  *(undefined4 *)(iVar9 + 0x30) = 0;
  if (*(int *)(param_1 + 0x4d4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x4d4) + 8);
  }
  FUN_4a16b5a0(auStack_38,uVar3);
  iVar4 = 0;
  iVar9 = 1;
  do {
    uVar1 = FUN_4a0bf920(param_2);
    iVar9 = iVar9 + 1;
    if (local_2c == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(local_2c + 8);
    }
    *(undefined1 *)(iVar6 + iVar4) = uVar1;
    iVar4 = iVar4 + 1;
  } while (iVar9 < 6);
  uVar3 = FUN_4a0bf62c(param_2);
  *(undefined4 *)(param_1 + 0x788) = uVar3;
  uVar3 = FUN_4a0bf62c(param_2);
  *(undefined4 *)(param_1 + 0x78c) = uVar3;
  uVar3 = FUN_4a0bf62c(param_2);
  *(undefined4 *)(param_1 + 0x790) = uVar3;
  uVar3 = FUN_4a0bf62c(param_2);
  *(undefined4 *)(param_1 + 0x794) = uVar3;
  uVar1 = FUN_4a0bf920(param_2);
  *(undefined1 *)(param_1 + 0x799) = uVar1;
  uVar2 = FUN_4a0bfbdc(param_2);
  *(undefined2 *)(param_1 + 0x79a) = uVar2;
  iVar9 = FUN_4a142f80(uVar10);
  iVar4 = 0;
  if (0 < iVar9) {
    do {
      iVar6 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),iVar4);
      iVar4 = iVar4 + 1;
      *(undefined2 *)(iVar6 + 0x1a) = 0;
    } while (iVar4 < iVar9);
  }
  iVar9 = FUN_4a144404(uVar10);
  iVar4 = 0;
  if (0 < iVar9) {
    do {
      local_3c = FUN_4a1438c0(uVar10,iVar4);
      uVar2 = FUN_4a0bf920(param_2);
      iVar6 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),local_3c);
      iVar4 = iVar4 + 1;
      *(undefined2 *)(iVar6 + 0x1a) = uVar2;
    } while (iVar4 < iVar9);
  }
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x7a8)) {
    do {
      uVar10 = FUN_4a0bf62c(param_2);
      if (*(int *)(param_1 + 0x7ac) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(param_1 + 0x7ac) + 8);
      }
      *(undefined4 *)(iVar4 + iVar9 * 4) = uVar10;
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_1 + 0x7a8));
  }
  uVar1 = FUN_4a0bf920(param_2);
  if (*(int *)(param_1 + 0x4ac) == 0) {
    puVar7 = (undefined1 *)0x0;
  }
  else {
    puVar7 = *(undefined1 **)(*(int *)(param_1 + 0x4ac) + 8);
  }
  *puVar7 = uVar1;
  uVar1 = FUN_4a0bf920(param_2);
  if (*(int *)(param_1 + 0x4c0) == 0) {
    puVar7 = (undefined1 *)0x0;
  }
  else {
    puVar7 = *(undefined1 **)(*(int *)(param_1 + 0x4c0) + 8);
  }
  *puVar7 = uVar1;
  uVar1 = FUN_4a0bf920(param_2);
  *(undefined1 *)(param_1 + 0x7b4) = uVar1;
  uVar2 = FUN_4a0bfbdc(param_2);
  *(undefined2 *)(param_1 + 0x7b6) = uVar2;
  uVar2 = FUN_4a0bfbdc(param_2);
  *(undefined2 *)(param_1 + 0x7b8) = uVar2;
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x7c4)) {
    do {
      uVar1 = FUN_4a0bf920(param_2);
      if (*(int *)(param_1 + 0x7c8) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(param_1 + 0x7c8) + 8);
      }
      *(undefined1 *)(iVar4 + iVar9) = uVar1;
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_1 + 0x7c4));
  }
  uVar1 = FUN_4a0bf920(param_2);
  *(undefined1 *)(param_1 + 2000) = uVar1;
  uVar10 = FUN_4a0bf62c(param_2);
  *(undefined4 *)(param_1 + 0x7d4) = uVar10;
  uVar1 = FUN_4a0bf920(param_2);
  *(undefined1 *)(param_1 + 0x7d8) = uVar1;
  uVar1 = FUN_4a0bf920(param_2);
  *(undefined1 *)(param_1 + 0x7d9) = uVar1;
  uVar2 = FUN_4a0bfbdc(param_2);
  *(undefined2 *)(param_1 + 0x7da) = uVar2;
  uVar10 = FUN_4a0bf62c(param_2);
  *(undefined4 *)(param_1 + 0x7dc) = uVar10;
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x7e8)) {
    do {
      uVar1 = FUN_4a0bf920(param_2);
      if (*(int *)(param_1 + 0x7ec) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(param_1 + 0x7ec) + 8);
      }
      *(undefined1 *)(iVar4 + iVar9) = uVar1;
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_1 + 0x7e8));
  }
  uVar10 = FUN_4a0bf62c(param_2);
  *(undefined4 *)(param_1 + 0x7f4) = uVar10;
  uVar10 = FUN_4a0bf62c(param_2);
  *(undefined4 *)(param_1 + 0x7f8) = uVar10;
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x804)) {
    do {
      uVar10 = FUN_4a0bf62c(param_2);
      if (*(int *)(param_1 + 0x808) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(param_1 + 0x808) + 8);
      }
      *(undefined4 *)(iVar4 + iVar9 * 4) = uVar10;
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_1 + 0x804));
  }
  uVar2 = FUN_4a0bfbdc(param_2);
  *(undefined2 *)(param_1 + 0x810) = uVar2;
  uVar2 = FUN_4a0bfbdc(param_2);
  *(undefined2 *)(param_1 + 0x812) = uVar2;
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x81c)) {
    do {
      uVar10 = FUN_4a0bf62c(param_2);
      if (*(int *)(param_1 + 0x820) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(param_1 + 0x820) + 8);
      }
      *(undefined4 *)(iVar4 + iVar9 * 4) = uVar10;
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_1 + 0x81c));
  }
  uVar10 = FUN_4a0bf62c(param_2);
  *(undefined4 *)(param_1 + 0x828) = uVar10;
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x838)) {
    do {
      uVar10 = FUN_4a0bf62c(param_2);
      if (*(int *)(param_1 + 0x83c) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(param_1 + 0x83c) + 8);
      }
      *(undefined4 *)(iVar4 + iVar9 * 4) = uVar10;
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_1 + 0x838));
  }
  iVar9 = 0;
  iVar4 = 1;
  do {
    uVar2 = FUN_4a0bfbdc(param_2);
    if (*(int *)(param_1 + 0x88c) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(param_1 + 0x88c) + 8);
    }
    *(undefined2 *)(iVar6 + iVar9 * 2) = uVar2;
    uVar10 = FUN_4a0bf62c(param_2);
    iVar4 = iVar4 + 1;
    if (*(int *)(param_1 + 0x8a0) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(param_1 + 0x8a0) + 8);
    }
    *(undefined4 *)(iVar6 + iVar9 * 4) = uVar10;
    iVar9 = iVar9 + 1;
  } while (iVar4 < 7);
  FUN_4a0d8cac(param_1);
  iVar4 = *(int *)(param_1 + 0x410);
  iVar9 = 1;
  if (1 < iVar4) {
    do {
      uVar1 = FUN_4a0bf920(param_2);
      if (*(int *)(param_1 + 0x8d0) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(param_1 + 0x8d0) + 8);
      }
      *(undefined1 *)(iVar6 + iVar9) = uVar1;
      uVar2 = FUN_4a0bfbdc(param_2);
      if (*(int *)(param_1 + 0x8e4) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(param_1 + 0x8e4) + 8);
      }
      *(undefined2 *)(iVar6 + iVar9 * 2) = uVar2;
      if (*(int *)(param_1 + 0x8f8) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(param_1 + 0x8f8) + 8);
      }
      FUN_4a16bdcc(auStack_50,iVar6 + iVar9 * 0x14);
      iVar6 = 0;
      if (0 < local_48) {
        do {
          uVar10 = FUN_4a0bf62c(param_2);
          if (local_44 == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)(local_44 + 8);
          }
          *(undefined4 *)(iVar8 + iVar6 * 4) = uVar10;
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_48);
      }
      if (*(int *)(param_1 + 0x934) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(param_1 + 0x934) + 8);
      }
      FUN_4a16b5a0(auStack_64,iVar6 + iVar9 * 0x14);
      iVar6 = 0;
      if (0 < local_5c) {
        do {
          uVar1 = FUN_4a0bf920(param_2);
          if (local_58 == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)(local_58 + 8);
          }
          *(undefined1 *)(iVar8 + iVar6) = uVar1;
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_5c);
      }
      FUN_4a16b6c0(auStack_64);
      FUN_4a16bef4(auStack_50);
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar4);
  }
  iVar9 = 0;
  iVar4 = 1;
  do {
    uVar2 = FUN_4a0bfbdc(param_2);
    if (*(int *)(param_1 + 0x994) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(param_1 + 0x994) + 8);
    }
    *(undefined2 *)(iVar6 + iVar9 * 2) = uVar2;
    uVar10 = FUN_4a0bf62c(param_2);
    if (*(int *)(param_1 + 0x9a8) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(param_1 + 0x9a8) + 8);
    }
    *(undefined4 *)(iVar6 + iVar9 * 4) = uVar10;
    uVar10 = FUN_4a0bf62c(param_2);
    iVar4 = iVar4 + 1;
    if (*(int *)(param_1 + 0x9bc) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(param_1 + 0x9bc) + 8);
    }
    *(undefined4 *)(iVar6 + iVar9 * 4) = uVar10;
    iVar9 = iVar9 + 1;
  } while (iVar4 < 0x65);
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x964)) {
    do {
      uVar1 = FUN_4a0bf920(param_2);
      if (*(int *)(param_1 + 0x968) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(param_1 + 0x968) + 8);
      }
      *(undefined1 *)(iVar4 + iVar9) = uVar1;
      uVar10 = FUN_4a0bf62c(param_2);
      if (*(int *)(param_1 + 0x97c) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(param_1 + 0x97c) + 8);
      }
      *(undefined4 *)(iVar4 + iVar9 * 4) = uVar10;
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_1 + 0x964));
  }
  iVar9 = FUN_4a13feec(param_1,2);
  if (iVar9 != -1) {
    if (*(int *)(param_1 + 0x8a0) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1 + 0x8a0) + 8);
    }
    *(undefined4 *)(iVar4 + iVar9 * 4) = 0;
  }
  FUN_4a16b6c0(auStack_38);
  return;
}



// Address: 4a0dd3b8

void FUN_4a0dd3b8(int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar11 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520);
  iVar8 = FUN_4a143ac8(uVar11);
  cVar2 = *(char *)(iVar8 + 8);
  if (cVar2 == '\x05') {
    FUN_4a0daefc(param_1,6);
  }
  else if (cVar2 == '\r') {
    if (param_2 != 0x6c) {
      FUN_4a0daefc(param_1,0x28);
    }
  }
  else if (cVar2 == '\x1b') {
    FUN_4a0daefc(param_1,5);
  }
  else if ((cVar2 == '\x1f') && (param_2 != 0x81)) {
    FUN_4a0daefc(param_1,0x29);
  }
  iVar8 = FUN_4a143f7c(uVar11);
  if (iVar8 != 0) {
    FUN_4a0daefc(param_1,0x3f);
  }
  iVar8 = 0x14;
  do {
    uStack_28 = *(undefined4 *)(param_1 + 0x18);
    uStack_2c = FUN_4a0fba7c();
    bVar4 = false;
    uVar11 = FUN_4a16b5a0(auStack_40,param_1 + 0x7e0);
    iVar5 = FUN_4a16fe9c((char)iVar8,uVar11,0);
    FUN_4a16b6c0(auStack_40);
    if (iVar5 == -1) {
      if (*(char *)(param_1 + 0x7d9) == iVar8) {
        *(undefined1 *)(param_1 + 0x7d9) = 0xff;
        bVar4 = true;
        iVar5 = 4;
        *(undefined4 *)(param_1 + 0x7dc) = 0;
      }
    }
    else {
      bVar4 = true;
      if (*(int *)(param_1 + 0x7ec) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(param_1 + 0x7ec) + 8);
      }
      *(undefined1 *)(iVar6 + iVar5) = 0xff;
    }
    uVar7 = 0;
    if (iVar8 == 0) {
      uVar7 = 4;
    }
    else if (iVar8 == 1) {
      uVar7 = 8;
    }
    uVar10 = 0;
    *(uint *)(param_1 + 0x7f8) = uVar7 | *(uint *)(param_1 + 0x7f8);
    if (*(int *)(param_1 + 400) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(param_1 + 400) + 8);
    }
    uVar3 = *(ushort *)(iVar6 + *(char *)(param_1 + 0x7d8) * 2);
    uVar7 = 0;
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x1a0)) {
      do {
        iVar9 = 0;
        if (*(int *)(param_1 + 0x1b8) != 0) {
          iVar9 = *(int *)(*(int *)(param_1 + 0x1b8) + 8);
        }
        if ((*(ushort *)(iVar9 + iVar6 * 2) & uVar3) != 0) {
          uVar1 = 1 << (uVar10 & 0xff);
          if (iVar8 == iVar6) {
            if ((*(uint *)(param_1 + 0x7f4) & uVar1) == 0) {
              bVar4 = true;
              *(uint *)(param_1 + 0x7f4) = *(uint *)(param_1 + 0x7f4) | uVar1;
              goto LAB_4a0db034;
            }
LAB_4a0db040:
            uVar7 = uVar7 + 1;
          }
          else {
LAB_4a0db034:
            if ((uVar1 & *(uint *)(param_1 + 0x7f4)) != 0) goto LAB_4a0db040;
          }
          uVar10 = uVar10 + 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x1a0));
    }
    if (bVar4) {
      FUN_4a0fd124(uStack_28,iVar8);
      FUN_4a1182e0(uStack_2c,iVar8,iVar5);
      uVar11 = FUN_4a0941ec();
      FUN_4a094d68(uVar11,iVar8);
    }
    if (uVar7 == uVar10) {
      *(uint *)(param_1 + 0x7f8) = *(uint *)(param_1 + 0x7f8) | 1;
    }
    iVar5 = FUN_4a145968(uStack_28);
    if ((iVar5 == 0) &&
       (iVar6 = *(int *)(param_1 + 0x1a0), iVar5 = FUN_4a145b3c(uStack_28), iVar5 == iVar6)) {
      FUN_4a10ea2c(uStack_2c);
    }
    if (iVar8 != 0x15) {
      return;
    }
    iVar5 = (*(ushort *)(param_1 + 0x810) + 1) * 0x10000;
    iVar6 = iVar5 >> 0x10;
    if (0xf < iVar6) {
      iVar8 = 0x2b;
    }
    *(short *)(param_1 + 0x810) = (short)((uint)iVar5 >> 0x10);
    if (iVar6 < 0x10) {
      return;
    }
  } while( true );
}



// Address: 4a0dd464

void FUN_4a0dd464(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_4c [20];
  undefined1 auStack_38 [20];
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0x514) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x514) + 8);
  }
  iVar4 = (int)*(short *)(iVar4 + param_4 * 2);
  uVar1 = FUN_4a16bdcc(auStack_38,param_2);
  FUN_4a0ff4b8(uVar1,iVar4);
  FUN_4a16bef4(auStack_38);
  uVar1 = FUN_4a16bdcc(auStack_38,param_3);
  FUN_4a0ff4b8(uVar1,iVar4);
  FUN_4a16bef4(auStack_38);
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520);
  iVar4 = FUN_4a142f80(uVar1);
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      iVar2 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),iVar5);
      if ((0 < *(short *)(iVar2 + 0x1a)) &&
         (iVar2 = FUN_4a143130(uVar1,iVar5), (*(uint *)(iVar2 + 0x10) & 1) != 0)) {
        iVar2 = FUN_4a143130(uVar1,iVar5);
        uVar6 = *(undefined4 *)(iVar2 + 8);
        uVar3 = FUN_4a16bdcc(auStack_4c,param_2);
        FUN_4a0fc4b0(uVar3,uVar6);
        FUN_4a16bef4(auStack_4c);
        uVar3 = FUN_4a16bdcc(auStack_4c,param_3);
        FUN_4a0fc4b0(uVar3,param_4);
        FUN_4a16bef4(auStack_4c);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
    return;
  }
  return;
}



// Address: 4a0dd584

undefined4 FUN_4a0dd584(int param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  uVar2 = *(int *)(param_1 + 0x78c) - 0x1e0;
  lVar1 = (longlong)(int)uVar2 * (longlong)DAT_4a0dd62c + ((ulonglong)uVar2 << 0x20);
  iVar3 = (int)((ulonglong)lVar1 >> 0x20);
  iVar4 = iVar3 >> 10;
  iVar3 = iVar4 - (iVar3 >> 0x1f);
  iVar4 = FUN_4a144974(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),iVar4,(int)lVar1);
  if (iVar4 == 0) {
    bVar5 = iVar3 == 3;
    uVar2 = 0;
    if (2 < iVar3) {
      uVar2 = *(uint *)(param_1 + 0x7f8);
      bVar5 = (uVar2 & 0x10) == 0;
    }
    if (bVar5) {
      *(uint *)(param_1 + 0x7f8) = uVar2 | 0x10;
      return 0xb49;
    }
  }
  else if (iVar4 == 1) {
    uVar2 = iVar3 - *(short *)(param_1 + 0x79a);
    bVar5 = uVar2 == 5;
    if (4 < (int)uVar2) {
      uVar2 = *(uint *)(param_1 + 0x7f8);
      bVar5 = (uVar2 & 0x20) == 0;
    }
    if (bVar5) {
      *(uint *)(param_1 + 0x7f8) = uVar2 | 0x20;
      return 0xb4a;
    }
  }
  return 0xffffffff;
}



// Address: 4a0dd630

bool FUN_4a0dd630(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  
  cVar5 = '\0';
  uVar2 = *(int *)(param_1 + 0x78c) - 0x1e0;
  iVar3 = (int)((longlong)(int)uVar2 * (longlong)DAT_4a0dd6c8 + ((ulonglong)uVar2 << 0x20) >> 0x20);
  iVar6 = (iVar3 >> 10) - (iVar3 >> 0x1f);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    do {
      if (*(int *)(param_1 + 0x7ac) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(param_1 + 0x7ac) + 8);
      }
      iVar4 = *(int *)(iVar4 + iVar3 * 4);
      iVar3 = iVar3 + 1;
      iVar6 = iVar6 + ((int)(iVar4 + ((uint)(iVar4 >> 0x1f) >> 0x10)) >> 0x10);
    } while (iVar3 < *(int *)(param_1 + 0x24));
  }
  if (iVar6 < 0xf) {
    if (4 < iVar6) {
      cVar5 = '\x01';
    }
  }
  else {
    cVar5 = '\x02';
  }
  bVar1 = *(char *)(param_1 + 0x799) < cVar5;
  if (bVar1) {
    *(char *)(param_1 + 0x799) = cVar5;
  }
  return bVar1;
}



// Address: 4a0dd6cc

int FUN_4a0dd6cc(uint param_1)

{
  return (int)*(short *)(PTR_DAT_4a0dd6e0 + (param_1 & 0xf) * 2);
}



// Address: 4a0dd6e4

void FUN_4a0dd6e4(int param_1,int param_2,int param_3)

{
  int iVar1;
  ushort *puVar2;
  undefined4 uVar3;
  ushort *puVar4;
  undefined1 auStack_28 [20];
  
  puVar4 = (ushort *)0x0;
  if (*(int *)(param_1 + 0x8e4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x8e4) + 8);
  }
  puVar2 = (ushort *)(iVar1 + param_2 * 2);
  *puVar2 = *puVar2 | (ushort)param_3;
  uVar3 = FUN_4a16c074(auStack_28,param_1 + 0x8d8);
  iVar1 = FUN_4a0fb9c0(param_3,uVar3,0);
  FUN_4a16c1a0(auStack_28);
  if (param_3 == 0x20) {
    if (*(int *)(param_1 + 0x8e4) != 0) {
      puVar4 = *(ushort **)(*(int *)(param_1 + 0x8e4) + 8);
    }
    switchD_4a11cc8c::default((*puVar4 & 0x20) == 0,s_player_shouldn_t_have_slap_flag_4a0dd890);
    if (3 < iVar1) {
      FUN_4a0daefc(param_1,0x43);
    }
    return;
  }
  if (param_3 == 0x40) {
    if (*(int *)(param_1 + 0x8e4) != 0) {
      puVar4 = *(ushort **)(*(int *)(param_1 + 0x8e4) + 8);
    }
    switchD_4a11cc8c::default((*puVar4 & 0x40) == 0,s_player_shouldn_t_have_insulted_f_4a0dd8b0);
    if (4 < iVar1) {
      FUN_4a0daefc(param_1,0x44);
    }
    return;
  }
  if (param_3 == 0x80) {
    if (*(int *)(param_1 + 0x8e4) != 0) {
      puVar4 = *(ushort **)(*(int *)(param_1 + 0x8e4) + 8);
    }
    switchD_4a11cc8c::default((*puVar4 & 0x80) == 0,s_player_shouldn_t_have_creeped_fl_4a0dd8d4);
    if (4 < iVar1) {
      FUN_4a0daefc(param_1,0x39);
    }
    return;
  }
  if (param_3 == 0x100) {
    if (*(int *)(param_1 + 0x8e4) != 0) {
      puVar4 = *(ushort **)(*(int *)(param_1 + 0x8e4) + 8);
    }
    switchD_4a11cc8c::default((*puVar4 & 0x100) == 0,s_player_shouldn_t_have_watch_flag_4a0dd86c);
    if (2 < iVar1) {
      FUN_4a0daefc(param_1,0x3a);
    }
    return;
  }
  return;
}



// Address: 4a0dd8f8

void FUN_4a0dd8f8(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  ushort *puVar10;
  uint *puVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  undefined1 auStack_98 [20];
  int local_84;
  uint local_80;
  undefined4 local_7c;
  int local_78;
  undefined1 auStack_74 [12];
  int local_68;
  undefined1 auStack_60 [12];
  int local_54;
  undefined1 auStack_4c [20];
  int local_38;
  int iStack_34;
  int *piStack_30;
  int local_2c;
  undefined4 local_28;
  
  iStack_34 = param_1;
  piStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  iVar2 = FUN_4a0fba7c(*(undefined4 *)(param_1 + 0x18));
  iVar14 = *(int *)(iVar2 + 0x5f8);
  FUN_4a16c074(auStack_60,param_1 + 0x508);
  piVar13 = (int *)0x0;
  FUN_4a16bdcc(auStack_74,param_1 + 0x530);
  uVar3 = FUN_4a1460f8(param_2);
  uVar4 = FUN_4a16bdcc(auStack_4c,local_2c);
  FUN_4a0ff4b8(uVar4,uVar3);
  FUN_4a16bef4(auStack_4c);
  uVar4 = FUN_4a16bdcc(auStack_4c,local_28);
  FUN_4a0ff4b8(uVar4,uVar3);
  FUN_4a16bef4(auStack_4c);
  local_78 = param_2[10];
  local_7c = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520);
  iVar2 = FUN_4a143ac8(local_7c,local_78);
  iVar5 = FUN_4a143ac8(local_7c,local_78);
  local_80 = *(uint *)(iVar5 + 0x14);
  local_84 = *(int *)(iVar2 + 0x58);
  if (((local_80 & 0x2000000) != 0) && (iVar5 = FUN_4a1461c0(param_2,0x100), iVar5 != 0)) {
    if (local_54 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(local_54 + 8);
    }
    sVar1 = *(short *)(iVar5 + 0xe6);
    uVar3 = FUN_4a16bdcc(auStack_98,local_2c);
    FUN_4a0fc4b0(uVar3,(int)sVar1);
    FUN_4a16bef4(auStack_98);
    uVar3 = FUN_4a16bdcc(auStack_98,local_28);
    FUN_4a0fc4b0(uVar3,0x73);
    FUN_4a16bef4(auStack_98);
  }
  iVar5 = 0;
  if (0 < local_84) {
    local_38 = param_1 + 0x700;
    do {
      if (*(int *)(iVar2 + 0x5c) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(iVar2 + 0x5c) + 8);
      }
      iVar6 = (int)*(short *)(iVar6 + iVar5 * 2);
      if (local_54 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(local_54 + 8);
      }
      switchD_4a11cc8c::default(*(short *)(iVar7 + iVar6 * 2) != 0x800,s_invalid_action_4a0ddd48);
      if (local_68 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(local_68 + 8);
      }
      uVar12 = *(uint *)(iVar7 + iVar6 * 4);
      if ((((((uVar12 & 2) == 0) &&
            (((uVar12 & 0x40) == 0 || (iVar7 = FUN_4a1461c0(param_2,0x40), iVar7 != 0)))) &&
           (((uVar12 & 0x80) == 0 || (iVar7 = FUN_4a1461c0(param_2,0x40), iVar7 == 0)))) &&
          (((((uVar12 & 0x100) == 0 || (iVar7 = (**(code **)(*param_2 + 0x10))(param_2), iVar7 != 0)
             ) && (((uVar12 & 0x200) == 0 || (iVar7 = FUN_4a146c34(param_2), iVar7 != 0)))) &&
           (((uVar12 & 0x400) == 0 || (iVar7 = FUN_4a1461c0(param_2,0x100), iVar7 == 0)))))) &&
         (((uVar12 & 0x800) == 0 || (iVar7 = FUN_4a1461c0(param_2,0x200), iVar7 == 0)))) {
        if ((uVar12 & 0x2000) == 0) {
LAB_4a0ddb98:
          if ((uVar12 & 0x4000) == 0) {
LAB_4a0ddc14:
            if ((uVar12 & 0x1000) != 0) {
              iVar7 = 0;
              if (*(int *)(param_1 + 0x4ac) == 0) {
                pcVar8 = (char *)0x0;
              }
              else {
                pcVar8 = *(char **)(*(int *)(param_1 + 0x4ac) + 8);
              }
              if (*pcVar8 != -1 && param_2 != (int *)0x0) {
                if (*(int *)(param_1 + 0x8c) != 0) {
                  iVar7 = *(int *)(*(int *)(param_1 + 0x8c) + 8);
                }
                if (param_2[10] == (int)*(short *)(iVar7 + *pcVar8 * 2)) goto LAB_4a0ddfb8;
              }
            }
            if ((((uVar12 & 0x40000) == 0) || (iVar7 = FUN_4a142ef4(local_7c), iVar7 == 0)) &&
               (((uVar12 & 0x20000) == 0 || (iVar7 = FUN_4a142ef4(local_7c), iVar7 != 0)))) {
              if (iVar6 == 0x98) {
                if ((local_78 != 0x9b) ||
                   (iVar7 = FUN_4a145968(*(undefined4 *)(param_1 + 0x18)), iVar7 != 0)) {
LAB_4a0ddce4:
                  if ((uVar12 & 0x2000000) != 0) {
                    if (*(char *)(local_38 + 0xd8) == '\x05') {
                      uVar9 = 0x2000000;
                    }
                    else {
                      uVar9 = 0;
                    }
                    if ((uVar9 & uVar12) == 0) goto LAB_4a0ddfb8;
                  }
                  if (iVar6 == 0x88) {
                    iVar7 = FUN_4a1461c0(param_2,0x4000);
joined_r0x4a0ddd74:
                    if (iVar7 != 0) goto LAB_4a0ddfb8;
                  }
                  else {
                    if (iVar6 == 0x89) {
                      iVar7 = FUN_4a1461c0(param_2,0x8000);
                      goto joined_r0x4a0ddd74;
                    }
                    if (iVar6 == 0x90) {
                      iVar7 = FUN_4a1461c0(param_2,0x200000);
                      goto joined_r0x4a0ddd74;
                    }
                    if (((iVar6 == 0x7f) &&
                        (uVar9 = *(uint *)(param_1 + 0x78c),
                        iVar7 = (int)((longlong)(int)uVar9 * (longlong)DAT_4a0de098 +
                                      ((ulonglong)uVar9 << 0x20) >> 0x20),
                        (int)(uVar9 + ((iVar7 >> 10) - (iVar7 >> 0x1f)) * -0x5a0) < 0x528)) &&
                       (iVar7 = (int)((longlong)(int)uVar9 * (longlong)DAT_4a0de098 +
                                      ((ulonglong)uVar9 << 0x20) >> 0x20),
                       0x168 < (int)(uVar9 + ((iVar7 >> 10) - (iVar7 >> 0x1f)) * -0x5a0)))
                    goto LAB_4a0ddfb8;
                  }
                  if ((uVar12 & 0x10000000) != 0) {
                    puVar11 = (uint *)0x0;
                    if (*(int *)(param_1 + 0x45c) == 0) {
                      iVar7 = 0;
                    }
                    else {
                      iVar7 = *(int *)(*(int *)(param_1 + 0x45c) + 8);
                    }
                    if (*(int *)(iVar7 + 0xc) != 0) {
                      puVar11 = *(uint **)(*(int *)(iVar7 + 0xc) + 8);
                    }
                    iVar7 = 1 - *puVar11;
                    if (1 < *puVar11) {
                      iVar7 = 0;
                    }
                    if (iVar7 == 0) goto LAB_4a0ddfb8;
                  }
                  if ((uVar12 & 0x20000000) != 0) {
                    puVar11 = (uint *)0x0;
                    if (*(int *)(param_1 + 0x45c) == 0) {
                      iVar7 = 0;
                    }
                    else {
                      iVar7 = *(int *)(*(int *)(param_1 + 0x45c) + 8);
                    }
                    if (*(int *)(iVar7 + 0xc) != 0) {
                      puVar11 = *(uint **)(*(int *)(iVar7 + 0xc) + 8);
                    }
                    iVar7 = 1 - *puVar11;
                    if (1 < *puVar11) {
                      iVar7 = 0;
                    }
                    if (iVar7 != 0) goto LAB_4a0ddfb8;
                  }
                  iVar7 = FUN_4a146b58(param_2,0x200000);
                  if ((iVar7 == 0) || (iVar7 = FUN_4a1069cc(param_2), iVar7 != 0)) {
                    if (iVar6 == 0x87) {
                      iVar7 = FUN_4a070f7c(iVar14);
                      if (iVar7 == 1) {
                        FUN_4a073f44(iVar14);
                        iVar7 = FUN_4a1460d4();
                        if (iVar7 == 0xd) goto LAB_4a0ddfb8;
                      }
                    }
                    else if (iVar6 == 0xa1) {
                      if (*(int *)(param_1 + 0x8e4) == 0) {
                        puVar10 = (ushort *)0x0;
                      }
                      else {
                        puVar10 = *(ushort **)(*(int *)(param_1 + 0x8e4) + 8);
                      }
                      if ((*puVar10 & 1) == 0) {
                        uVar12 = FUN_4a142ef4(local_7c);
joined_r0x4a0ddf64:
                        if (uVar12 != 0) goto LAB_4a0ddfb8;
                      }
                    }
                    else if (iVar6 == 0xa3) {
                      if (*(int *)(param_1 + 0x8e4) == 0) {
                        puVar10 = (ushort *)0x0;
                      }
                      else {
                        puVar10 = *(ushort **)(*(int *)(param_1 + 0x8e4) + 8);
                      }
                      if (((*puVar10 & 1) != 0) || (iVar7 = FUN_4a142ef4(local_7c), iVar7 == 0))
                      goto LAB_4a0ddfb8;
                    }
                    else if (iVar6 == 0xa2) {
                      uVar3 = FUN_4a144cb0(local_7c,*(undefined4 *)(iVar14 + 0x44));
                      uVar4 = FUN_4a144cb8(local_7c,*(undefined4 *)(iVar14 + 0x4c));
                      uVar12 = FUN_4a142f2c(local_7c,uVar3,uVar4);
                      uVar12 = uVar12 & 0x10;
                      goto joined_r0x4a0ddf64;
                    }
                  }
                  else if (iVar6 != 0x6f) goto LAB_4a0ddfb8;
                  if (local_54 == 0) {
                    iVar7 = 0;
                  }
                  else {
                    iVar7 = *(int *)(local_54 + 8);
                  }
                  sVar1 = *(short *)(iVar7 + iVar6 * 2);
                  uVar3 = FUN_4a16bdcc(auStack_98,local_2c);
                  FUN_4a0fc4b0(uVar3,(int)sVar1);
                  FUN_4a16bef4(auStack_98);
                  uVar3 = FUN_4a16bdcc(auStack_98,local_28);
                  FUN_4a0fc4b0(uVar3,iVar6);
                  FUN_4a16bef4(auStack_98);
                }
              }
              else if ((iVar6 != 0x8b) && ((iVar6 != 0x8a || (*PTR_DAT_4a0ddd58 == '\0'))))
              goto LAB_4a0ddce4;
            }
          }
          else if (param_2 == (int *)0x0) {
LAB_4a0ddbf4:
            uVar9 = FUN_4a0d619c(param_1,0,*(undefined4 *)(param_1 + 0x78c));
            if ((uVar9 & 3) != 0) goto LAB_4a0ddc14;
          }
          else {
            iVar7 = 0;
            if (*(int *)(param_1 + 0x4ac) == 0) {
              pcVar8 = (char *)0x0;
            }
            else {
              pcVar8 = *(char **)(*(int *)(param_1 + 0x4ac) + 8);
            }
            if (*pcVar8 != -1) {
              if (*(int *)(param_1 + 0x8c) != 0) {
                iVar7 = *(int *)(*(int *)(param_1 + 0x8c) + 8);
              }
              if (param_2[10] == (int)*(short *)(iVar7 + *pcVar8 * 2)) goto LAB_4a0ddbf4;
            }
          }
        }
        else {
          iVar7 = 0;
          if (*(int *)(param_1 + 0x4ac) == 0) {
            pcVar8 = (char *)0x0;
          }
          else {
            pcVar8 = *(char **)(*(int *)(param_1 + 0x4ac) + 8);
          }
          if (*pcVar8 != -1 && param_2 != (int *)0x0) {
            if (*(int *)(param_1 + 0x8c) != 0) {
              iVar7 = *(int *)(*(int *)(param_1 + 0x8c) + 8);
            }
            if (param_2[10] == (int)*(short *)(iVar7 + *pcVar8 * 2)) goto LAB_4a0ddb98;
          }
        }
      }
LAB_4a0ddfb8:
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_84);
  }
  if ((local_80 & 0x800) != 0) {
    if (local_54 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(local_54 + 8);
    }
    sVar1 = *(short *)(iVar2 + 0xde);
    uVar3 = FUN_4a16bdcc(auStack_98,local_2c);
    FUN_4a0fc4b0(uVar3,(int)sVar1);
    FUN_4a16bef4(auStack_98);
    uVar3 = FUN_4a16bdcc(auStack_98,local_28);
    FUN_4a0fc4b0(uVar3,0x6f);
    FUN_4a16bef4(auStack_98);
  }
  if (*(int *)(local_2c + 0xc) != 0) {
    piVar13 = *(int **)(*(int *)(local_2c + 0xc) + 8);
  }
  if (*piVar13 == 0) {
    uVar3 = FUN_4a16bdcc(auStack_98,local_2c);
    FUN_4a0fc4b0(uVar3,0x932);
    FUN_4a16bef4(auStack_98);
    uVar3 = FUN_4a16bdcc(auStack_98,local_28);
    FUN_4a0fc4b0(uVar3,0xfffffffc);
    FUN_4a16bef4(auStack_98);
  }
  FUN_4a16bef4(auStack_74);
  FUN_4a16c1a0(auStack_60);
  return;
}



// Address: 4a0de09c

undefined4 FUN_4a0de09c(undefined4 param_1)

{
  switch(param_1) {
  case 2:
    return 3;
  default:
    return 0xffffffff;
  case 5:
    return 6;
  case 7:
    return 8;
  case 9:
    return 10;
  case 0xb:
    return 0xc;
  }
}



// Address: 4a0de104

undefined4 FUN_4a0de104(int param_1)

{
  if (param_1 == 8) {
    return 7;
  }
  if (param_1 < 9) {
    if (param_1 == 3) {
      return 2;
    }
    if (param_1 == 6) {
      return 5;
    }
  }
  else {
    if (param_1 == 10) {
      return 9;
    }
    if (param_1 == 0xc) {
      return 0xb;
    }
  }
  return 0xffffffff;
}



// Address: 4a0de344

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0de344(int param_1,int param_2,int param_3)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  ushort *puVar10;
  uint uVar11;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_40 [20];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar6 = 1;
  if (1 < *(int *)(param_1 + 0x410)) {
    do {
      if (*(int *)(param_1 + 0x470) == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(*(int *)(param_1 + 0x470) + 8);
      }
      if (*(short *)(iVar9 + iVar6 * 2) == param_2) {
        if (*(int *)(param_1 + 0x8e4) == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *(int *)(*(int *)(param_1 + 0x8e4) + 8);
        }
        puVar10 = (ushort *)(iVar9 + iVar6 * 2);
        *puVar10 = *puVar10 | (ushort)param_3;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x410));
  }
  iVar6 = FUN_4a141284(param_1,param_3);
  if (iVar6 == -1) {
    if (param_3 == 4) {
      iVar6 = 0x37;
      goto FUN_4a0daefc;
    }
    if (param_3 == 8) {
      iVar6 = 0x38;
      goto FUN_4a0daefc;
    }
    if (param_3 == 0x10) {
      iVar6 = 0x45;
      goto FUN_4a0daefc;
    }
  }
  if (param_3 != 0x200 && param_3 != 0x400) {
    return;
  }
  if (iVar6 != -1) {
    if (param_3 == 0x200) {
      uVar8 = 0x400;
    }
    else {
      uVar8 = 0x200;
    }
    iVar9 = FUN_4a141284(param_1,uVar8);
    if (iVar9 + iVar6 < 3) {
                    /* WARNING: Could not recover jumptable at 0x4a0de440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  iVar6 = 0x33;
FUN_4a0daefc:
  do {
    uStack_28 = *(undefined4 *)(param_1 + 0x18);
    uStack_2c = FUN_4a0fba7c();
    bVar3 = false;
    uVar8 = FUN_4a16b5a0(auStack_40,param_1 + 0x7e0);
    iVar9 = FUN_4a16fe9c((char)iVar6,uVar8,0);
    FUN_4a16b6c0(auStack_40);
    if (iVar9 == -1) {
      if (*(char *)(param_1 + 0x7d9) == iVar6) {
        *(undefined1 *)(param_1 + 0x7d9) = 0xff;
        bVar3 = true;
        iVar9 = 4;
        *(undefined4 *)(param_1 + 0x7dc) = 0;
      }
    }
    else {
      bVar3 = true;
      if (*(int *)(param_1 + 0x7ec) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(param_1 + 0x7ec) + 8);
      }
      *(undefined1 *)(iVar4 + iVar9) = 0xff;
    }
    uVar5 = 0;
    if (iVar6 == 0) {
      uVar5 = 4;
    }
    else if (iVar6 == 1) {
      uVar5 = 8;
    }
    uVar11 = 0;
    *(uint *)(param_1 + 0x7f8) = uVar5 | *(uint *)(param_1 + 0x7f8);
    if (*(int *)(param_1 + 400) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1 + 400) + 8);
    }
    uVar2 = *(ushort *)(iVar4 + *(char *)(param_1 + 0x7d8) * 2);
    uVar5 = 0;
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x1a0)) {
      do {
        iVar7 = 0;
        if (*(int *)(param_1 + 0x1b8) != 0) {
          iVar7 = *(int *)(*(int *)(param_1 + 0x1b8) + 8);
        }
        if ((*(ushort *)(iVar7 + iVar4 * 2) & uVar2) != 0) {
          uVar1 = 1 << (uVar11 & 0xff);
          if (iVar6 == iVar4) {
            if ((*(uint *)(param_1 + 0x7f4) & uVar1) == 0) {
              bVar3 = true;
              *(uint *)(param_1 + 0x7f4) = *(uint *)(param_1 + 0x7f4) | uVar1;
              goto LAB_4a0db034;
            }
LAB_4a0db040:
            uVar5 = uVar5 + 1;
          }
          else {
LAB_4a0db034:
            if ((uVar1 & *(uint *)(param_1 + 0x7f4)) != 0) goto LAB_4a0db040;
          }
          uVar11 = uVar11 + 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x1a0));
    }
    if (bVar3) {
      FUN_4a0fd124(uStack_28,iVar6);
      FUN_4a1182e0(uStack_2c,iVar6,iVar9);
      uVar8 = FUN_4a0941ec();
      FUN_4a094d68(uVar8,iVar6);
    }
    if (uVar5 == uVar11) {
      *(uint *)(param_1 + 0x7f8) = *(uint *)(param_1 + 0x7f8) | 1;
    }
    iVar9 = FUN_4a145968(uStack_28);
    if ((iVar9 == 0) &&
       (iVar4 = *(int *)(param_1 + 0x1a0), iVar9 = FUN_4a145b3c(uStack_28), iVar9 == iVar4)) {
      FUN_4a10ea2c(uStack_2c);
    }
    if (iVar6 != 0x15) {
      return;
    }
    iVar9 = (*(ushort *)(param_1 + 0x810) + 1) * 0x10000;
    iVar4 = iVar9 >> 0x10;
    if (0xf < iVar4) {
      iVar6 = 0x2b;
    }
    *(short *)(param_1 + 0x810) = (short)((uint)iVar9 >> 0x10);
    if (iVar4 < 0x10) {
      return;
    }
  } while( true );
}



// Address: 4a0de454

undefined4 FUN_4a0de454(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_64 [12];
  int local_58;
  undefined1 auStack_50 [12];
  int local_44;
  undefined1 auStack_3c [8];
  int local_34;
  int local_30;
  undefined1 auStack_28 [12];
  int local_1c;
  
  piVar5 = (int *)0x0;
  if (*(int *)(param_1 + 0x8d0) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x8d0) + 8);
  }
  iVar1 = (int)*(char *)(iVar1 + param_2);
  if (*(int *)(param_1 + 0x8f8) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x8f8) + 8);
  }
  FUN_4a16bdcc(auStack_28,iVar2 + param_2 * 0x14);
  if (*(int *)(param_1 + 0x3e0) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x3e0) + 8);
  }
  FUN_4a16b5a0(auStack_3c,iVar2 + iVar1 * 0x14);
  if (*(int *)(param_1 + 0x3f4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x3f4) + 8);
  }
  FUN_4a16b5a0(auStack_50,iVar2 + iVar1 * 0x14);
  if (*(int *)(param_1 + 0x408) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x408) + 8);
  }
  FUN_4a16c074(auStack_64,iVar2 + iVar1 * 0x14);
  iVar1 = 0;
  if (0 < local_34) {
    do {
      if (local_44 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(local_44 + 8);
      }
      if (local_58 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(local_58 + 8);
      }
      iVar3 = (int)*(short *)(iVar3 + iVar1 * 2);
      if (local_1c == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(local_1c + 8);
      }
      iVar4 = *(int *)(iVar4 + *(char *)(iVar2 + iVar1) * 4);
      iVar2 = iVar3 * 0x10000;
      if (iVar3 < 0) {
        if (iVar4 <= iVar2) {
LAB_4a0de5a0:
          if (local_30 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(local_30 + 8);
          }
          iVar1 = (int)*(char *)(iVar2 + iVar1);
          if (iVar1 == 1) {
            if (local_1c != 0) {
              piVar5 = *(int **)(local_1c + 8);
            }
            if (*piVar5 < 0) {
              iVar1 = 2;
            }
          }
          FUN_4a0de770(param_1,param_2,iVar1);
          FUN_4a16c1a0(auStack_64);
          FUN_4a16b6c0(auStack_50);
          FUN_4a16b6c0(auStack_3c);
          FUN_4a16bef4(auStack_28);
          return 1;
        }
      }
      else if (iVar2 <= iVar4) goto LAB_4a0de5a0;
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_34);
  }
  FUN_4a16c1a0(auStack_64);
  FUN_4a16b6c0(auStack_50);
  FUN_4a16b6c0(auStack_3c);
  FUN_4a16bef4(auStack_28);
  return 0;
}



// Address: 4a0de610

undefined4 FUN_4a0de610(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_4c [12];
  int iStack_40;
  undefined1 auStack_38 [8];
  int iStack_30;
  int iStack_2c;
  undefined1 auStack_24 [12];
  int iStack_18;
  
  iVar5 = 0;
  if (*(int *)(param_1 + 0x2b0) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x2b0) + 8);
  }
  if ((*(char *)(iVar1 + param_2) != -1) && (iVar1 = FUN_4a13feec(param_1), iVar1 != -1)) {
    return 0;
  }
  FUN_4a16bdcc(auStack_24,param_1 + 0x830);
  iVar1 = iVar5;
  if (*(int *)(param_1 + 0x2ec) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x2ec) + 8);
  }
  FUN_4a16b5a0(auStack_38,iVar1 + param_2 * 0x14);
  iVar1 = iVar5;
  if (*(int *)(param_1 + 0x300) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x300) + 8);
  }
  FUN_4a16bdcc(auStack_4c,iVar1 + param_2 * 0x14);
  if (iStack_30 != 0) {
    iVar1 = 0;
    if (0 < iStack_30) {
      do {
        iVar4 = iVar5;
        if (iStack_2c != 0) {
          iVar4 = *(int *)(iStack_2c + 8);
        }
        iVar2 = iVar5;
        if (iStack_40 != 0) {
          iVar2 = *(int *)(iStack_40 + 8);
        }
        iVar3 = 0;
        if (iStack_18 != 0) {
          iVar3 = *(int *)(iStack_18 + 8);
        }
        iVar2 = *(int *)(iVar2 + iVar1 * 4);
        if (iStack_18 == 0) {
          iVar3 = iVar5;
        }
        iVar4 = *(int *)(iVar3 + *(char *)(iVar4 + iVar1) * 4);
        bVar6 = iVar2 < 0;
        if (iVar2 < 1) {
          if (bVar6) {
            iVar2 = -iVar2;
          }
          if (bVar6 && iVar4 < iVar2) goto LAB_4a0de714;
        }
        else if (iVar2 < iVar4) goto LAB_4a0de714;
        iVar1 = iVar1 + 1;
      } while (iVar1 < iStack_30);
    }
    FUN_4a16bef4(auStack_4c);
    FUN_4a16b6c0(auStack_38);
    FUN_4a16bef4(auStack_24);
    return 0;
  }
LAB_4a0de714:
  FUN_4a16bef4(auStack_4c);
  FUN_4a16b6c0(auStack_38);
  FUN_4a16bef4(auStack_24);
  return 1;
}



// Address: 4a0de770

void FUN_4a0de770(int param_1,int param_2,int param_3)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_58 [8];
  int local_50;
  int local_4c;
  undefined1 auStack_44 [20];
  undefined1 auStack_30 [20];
  
  FUN_4a16b5a0(auStack_58,param_1 + 0x8c4);
  iVar10 = 0;
  if (local_4c != 0) {
    iVar4 = *(int *)(local_4c + 8);
  }
  else {
    iVar4 = 0;
  }
  iVar4 = (int)*(char *)(iVar4 + param_2);
  if (local_4c != 0) {
    iVar5 = *(int *)(local_4c + 8);
  }
  else {
    iVar5 = 0;
  }
  *(char *)(iVar5 + param_2) = (char)param_3;
  if (*(int *)(param_1 + 0x8f8) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(param_1 + 0x8f8) + 8);
  }
  iVar5 = FUN_4a16bdcc(auStack_30,iVar5 + param_2 * 0x14);
  iVar7 = 0;
  if (0 < *(int *)(iVar5 + 8)) {
    do {
      if (*(int *)(iVar5 + 0xc) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(*(int *)(iVar5 + 0xc) + 8);
      }
      *(undefined4 *)(iVar8 + iVar7 * 4) = 0;
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(iVar5 + 8));
  }
  FUN_4a16bef4(auStack_30);
  if (iVar4 == 0) {
    FUN_4a0daefc(param_1);
  }
  if (param_3 == 0xc) {
    FUN_4a0daefc(param_1);
  }
  iVar5 = *(int *)(param_1 + 0x3a4);
  if (iVar5 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(iVar5 + 8);
  }
  if ((*(byte *)(iVar7 + iVar4) & 0x10) == 0) {
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iVar5 + 8);
    }
    if ((*(byte *)(iVar5 + param_3) & 0x10) != 0) {
      FUN_4a0daefc(param_1);
    }
  }
  iVar5 = *(int *)(param_1 + 0x3a4);
  if (iVar5 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(iVar5 + 8);
  }
  if ((*(byte *)(iVar7 + iVar4) & 8) == 0) {
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iVar5 + 8);
    }
    if ((*(byte *)(iVar5 + param_3) & 8) != 0) {
      FUN_4a0daefc(param_1);
    }
  }
  iVar5 = *(int *)(param_1 + 0x3a4);
  if (iVar5 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(iVar5 + 8);
  }
  if ((*(byte *)(iVar7 + iVar4) & 4) == 0) {
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar5 + 8);
    }
    if ((*(byte *)(iVar4 + param_3) & 4) != 0) {
      FUN_4a0daefc(param_1,0xc);
    }
  }
  uVar6 = FUN_4a16b5a0(auStack_44,auStack_58);
  iVar4 = FUN_4a16fe9c(0,uVar6,1);
  FUN_4a16b6c0(auStack_44);
  if (iVar4 == -1) {
    FUN_4a0daefc(param_1,0x31);
  }
  bVar3 = true;
  iVar5 = 0;
  bVar2 = true;
  iVar4 = 1;
  if (1 < local_50) {
    iVar7 = *(int *)(param_1 + 0x3a4);
    do {
      if (local_4c == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(local_4c + 8);
      }
      iVar8 = (int)*(char *)(iVar8 + iVar4);
      if (bVar3) {
        if (iVar7 == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *(int *)(iVar7 + 8);
        }
        if ((*(byte *)(iVar9 + iVar8) & 1) == 0) goto LAB_4a0de984;
        bVar3 = true;
      }
      else {
LAB_4a0de984:
        bVar3 = false;
      }
      if (bVar2) {
        if (iVar7 == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *(int *)(iVar7 + 8);
        }
        if ((*(byte *)(iVar9 + iVar8) & 2) == 0) goto LAB_4a0de9ac;
        bVar2 = true;
      }
      else {
LAB_4a0de9ac:
        bVar2 = false;
      }
      if (iVar7 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(iVar7 + 8);
      }
      iVar4 = iVar4 + 1;
      if ((*(byte *)(iVar9 + iVar8) & 4) != 0) {
        iVar5 = iVar5 + 1;
      }
    } while (iVar4 < local_50);
    if (!bVar3) goto LAB_4a0de9ec;
  }
  FUN_4a0daefc(param_1,0x41);
LAB_4a0de9ec:
  if (bVar2) {
    FUN_4a0daefc(param_1,0x42);
  }
  if (2 < iVar5) {
    FUN_4a0daefc(param_1,0x3b);
  }
  if (param_3 == 0xc) {
    if (*(int *)(param_1 + 0x420) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1 + 0x420) + 8);
    }
    FUN_4a06bb54(*(int *)(param_1 + 0x18) + 0x278,0xfffffff5,0x9f1,
                 (int)*(short *)(iVar4 + param_2 * 2));
    if (*(int *)(param_1 + 0x390) != 0) {
      iVar10 = *(int *)(*(int *)(param_1 + 0x390) + 8);
    }
    sVar1 = *(short *)(iVar10 + 0x18);
    uVar6 = FUN_4a0fba7c(*(undefined4 *)(param_1 + 0x18));
    FUN_4a1136e4(uVar6,0xfffffff5,(int)sVar1,9);
  }
  else {
    if (*(int *)(param_1 + 0x3cc) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1 + 0x3cc) + 8);
    }
    if (*(int *)(param_1 + 0x420) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x420) + 8);
    }
    FUN_4a06bb54(*(int *)(param_1 + 0x18) + 0x278,0xfffffff5,(int)*(short *)(iVar4 + param_3 * 2),
                 (int)*(short *)(iVar5 + param_2 * 2));
    if (*(int *)(param_1 + 0x390) != 0) {
      iVar10 = *(int *)(*(int *)(param_1 + 0x390) + 8);
    }
    sVar1 = *(short *)(iVar10 + param_3 * 2);
    uVar6 = FUN_4a0fba7c(*(undefined4 *)(param_1 + 0x18));
    FUN_4a1136bc(uVar6,0xfffffff5,(int)sVar1);
  }
  FUN_4a16b6c0(auStack_58);
  return;
}



// Address: 4a0deaec

void FUN_4a0deaec(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x45c) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x45c) + 8);
  }
  if (*(int *)(iVar1 + 0xc) != 0) {
    iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 8);
  }
  *(undefined4 *)(iVar2 + param_2 * 4) = param_3;
  return;
}



// Address: 4a0deb14

void FUN_4a0deb14(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_4a141abc(param_1,0);
  switch(param_2) {
  case 0:
  case 3:
  case 6:
  case 8:
  case 10:
  case 0xc:
    break;
  case 1:
  case 2:
  case 4:
  case 5:
  case 7:
  case 9:
  case 0xb:
    uVar1 = FUN_4a1415a0(param_1,uVar1,param_2);
    param_3 = FUN_4a144728(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),uVar1,param_3);
    break;
  default:
    param_3 = 0;
  }
  iVar3 = 0;
  if (*(int *)(param_1 + 0x45c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x45c) + 8);
  }
  if (*(int *)(iVar2 + 0xc) != 0) {
    iVar3 = *(int *)(*(int *)(iVar2 + 0xc) + 8);
  }
  *(undefined4 *)(iVar3 + param_2 * 4) = param_3;
  return;
}



// Address: 4a0debd0

void FUN_4a0debd0(int param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_50 [12];
  int local_44;
  undefined1 auStack_3c [12];
  int local_30;
  undefined1 auStack_28 [12];
  int local_1c;
  
  iVar3 = *(int *)(param_1 + 0x788) + param_2;
  *(int *)(param_1 + 0x788) = iVar3;
  if (1000 < iVar3) {
    lVar1 = (longlong)DAT_4a0dedfc;
    iVar5 = (int)((ulonglong)(lVar1 * iVar3) >> 0x20);
    iVar5 = (iVar5 >> 6) - (iVar5 >> 0x1f);
    *(int *)(param_1 + 0x788) = iVar3 + iVar5 * -1000;
    iVar6 = *(int *)(param_1 + 0x78c);
    *(int *)(param_1 + 0x78c) = iVar6 + iVar5;
    uVar4 = FUN_4a0fba7c(*(undefined4 *)(param_1 + 0x18),iVar5,iVar5 * -0x7d,(int)(lVar1 * iVar3));
    FUN_4a11c5b4(uVar4,iVar6,*(undefined4 *)(param_1 + 0x78c));
  }
  iVar3 = *(int *)(param_1 + 0x7d4) + param_2;
  *(int *)(param_1 + 0x7d4) = iVar3;
  if (0x15f900 < iVar3) {
    *(undefined4 *)(param_1 + 0x7d4) = 0;
    iVar5 = *(int *)(param_1 + 0x60);
    iVar3 = FUN_4a145968(*(undefined4 *)(param_1 + 0x18));
    if (iVar3 == 0) {
      iVar5 = iVar5 + -1;
    }
    cVar2 = FUN_4a0fe640(*(undefined4 *)(param_1 + 0x18),0,iVar5);
    *(char *)(param_1 + 2000) = cVar2 + -1;
  }
  iVar3 = FUN_4a0fba7c(*(undefined4 *)(param_1 + 0x18));
  if (*(int *)(iVar3 + 0x1c0) != 0x15) {
    if (*(int *)(param_1 + 0x984) != 0) goto LAB_4a0deddc;
    iVar3 = *(int *)(param_1 + 0x82c) + param_2;
    *(int *)(param_1 + 0x82c) = iVar3;
    if (500 < iVar3) {
      *(int *)(param_1 + 0x82c) = iVar3 + -500;
      FUN_4a16bdcc(auStack_28,param_1 + 0x844);
      FUN_4a16bdcc(auStack_3c,param_1 + 0x858);
      FUN_4a16bdcc(auStack_50,param_1 + 0x86c);
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0x1c0)) {
        do {
          if (local_1c == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(local_1c + 8);
          }
          if (local_30 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(local_30 + 8);
          }
          iVar5 = FUN_4a0d4b28(*(undefined4 *)(iVar6 + iVar3 * 4),*(undefined4 *)(iVar5 + iVar3 * 4)
                              );
          if (local_44 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(local_44 + 8);
          }
          FUN_4a0d9d54(param_1,iVar3,iVar5 + *(int *)(iVar6 + iVar3 * 4) >> 1);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_1 + 0x1c0));
      }
      FUN_4a16bef4(auStack_50);
      FUN_4a16bef4(auStack_3c);
      FUN_4a16bef4(auStack_28);
      if (*(int *)(param_1 + 0x984) != 0) goto LAB_4a0deddc;
    }
    FUN_4a0d5c70(param_1,param_2);
    if ((*(int *)(param_1 + 0x984) != 0) ||
       (FUN_4a0dbdcc(param_1,param_2), *(int *)(param_1 + 0x984) != 0)) goto LAB_4a0deddc;
    FUN_4a0d6448(param_1,param_2);
  }
  if (*(int *)(param_1 + 0x984) == 0) {
    return;
  }
LAB_4a0deddc:
  param_2 = *(int *)(param_1 + 0x984) - param_2;
  if (param_2 < 1) {
    param_2 = 0;
  }
  *(int *)(param_1 + 0x984) = param_2;
  return;
}



// Address: 4a0dee00

void FUN_4a0dee00(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x1a0);
  if (*(int *)(param_1 + 400) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 400) + 8);
  }
  uVar1 = *(ushort *)(iVar2 + *(char *)(param_1 + 0x7d8) * 2);
  iVar2 = 0;
  if (0 < iVar5) {
    do {
      if (*(int *)(param_1 + 0x1b8) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x1b8) + 8);
      }
      if ((*(ushort *)(iVar3 + iVar2 * 2) & uVar1) != 0) {
        FUN_4a0fd4f0(*(undefined4 *)(param_1 + 0x18),iVar2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar5);
  }
  uVar4 = FUN_4a144e8c(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),0x8c);
  if (uVar4 != 0xffffffff) {
    *(uint *)(param_1 + 0x828) = *(uint *)(param_1 + 0x828) | 1 << (uVar4 & 0xff);
    return;
  }
  return;
}



// Address: 4a0deea8

void FUN_4a0deea8(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 auStack_58 [12];
  int local_4c;
  undefined1 auStack_44 [12];
  int local_38;
  undefined1 auStack_30 [12];
  int local_24;
  
  iVar2 = *(int *)(param_1 + 0x88c);
  if (iVar2 != 0) {
    iVar7 = *(int *)(iVar2 + 8);
    iVar3 = *(int *)(iVar2 + 8);
  }
  else {
    iVar7 = 0;
    iVar3 = 0;
  }
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  iVar2 = (int)*(short *)(iVar7 + param_2 * 2);
  *(short *)(iVar3 + param_2 * 2) = (short)param_3;
  if (*(int *)(param_1 + 0x8a0) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x8a0) + 8);
  }
  *(undefined4 *)(iVar3 + param_2 * 4) = 0;
  iVar3 = FUN_4a0fba7c(*(undefined4 *)(param_1 + 0x18));
  uVar9 = *(undefined4 *)(iVar3 + 0x5f8);
  FUN_4a076628(uVar9,iVar2);
  FUN_4a0776dc(uVar9,param_3);
  puVar4 = (undefined4 *)FUN_4a0c6bc0(auStack_30);
  puVar1 = PTR_PTR_4a0df23c;
  *puVar4 = PTR_PTR_4a0df23c;
  puVar4[2] = *(undefined4 *)(param_1 + 0x338);
  piVar5 = *(int **)(param_1 + 0x33c);
  puVar4[3] = piVar5;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))();
  }
  *puVar4 = PTR_PTR_4a0df240;
  puVar4 = (undefined4 *)FUN_4a0c6bc0(auStack_44);
  *puVar4 = puVar1;
  puVar4[2] = *(undefined4 *)(param_1 + 0x34c);
  piVar5 = *(int **)(param_1 + 0x350);
  puVar4[3] = piVar5;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))();
  }
  *puVar4 = PTR_PTR_4a0df244;
  FUN_4a16bdcc(auStack_58,param_1 + 0x858);
  if (iVar2 != -1) {
    iVar3 = 0;
    if (local_24 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(local_24 + 8);
    }
    if (0 < *(int *)(iVar7 + iVar2 * 0x14 + 8)) {
      do {
        if (local_24 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(local_24 + 8);
        }
        iVar7 = *(int *)(iVar7 + iVar2 * 0x14 + 0xc);
        if (iVar7 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(iVar7 + 8);
        }
        if (local_4c == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(local_4c + 8);
        }
        piVar5 = (int *)(iVar8 + *(char *)(iVar7 + iVar3) * 4);
        if (local_38 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(local_38 + 8);
        }
        iVar7 = *(int *)(iVar7 + iVar2 * 0x14 + 0xc);
        if (iVar7 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(iVar7 + 8);
        }
        iVar8 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        *piVar5 = *(int *)(iVar7 + iVar8) + *piVar5;
        if (local_24 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(local_24 + 8);
        }
      } while (iVar3 < *(int *)(iVar7 + iVar2 * 0x14 + 8));
    }
  }
  if (param_3 != -1) {
    iVar2 = 0;
    if (local_24 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(local_24 + 8);
    }
    if (0 < *(int *)(iVar3 + param_3 * 0x14 + 8)) {
      do {
        if (local_24 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(local_24 + 8);
        }
        iVar3 = *(int *)(iVar3 + param_3 * 0x14 + 0xc);
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(iVar3 + 8);
        }
        if (local_4c == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(local_4c + 8);
        }
        piVar5 = (int *)(iVar7 + *(char *)(iVar3 + iVar2) * 4);
        if (local_38 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(local_38 + 8);
        }
        iVar3 = *(int *)(iVar3 + param_3 * 0x14 + 0xc);
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(iVar3 + 8);
        }
        iVar7 = iVar2 * 4;
        iVar2 = iVar2 + 1;
        *piVar5 = *piVar5 - *(int *)(iVar3 + iVar7);
        if (local_24 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(local_24 + 8);
        }
      } while (iVar2 < *(int *)(iVar3 + param_3 * 0x14 + 8));
    }
    if (param_3 == 9) {
      FUN_4a0d955c(param_1,8);
    }
    else if (param_3 == 6) {
      FUN_4a0d955c(param_1,3);
      FUN_4a0d955c(param_1,7);
    }
    else if (param_3 == 3) {
      FUN_4a0d955c(param_1,6);
      FUN_4a0d955c(param_1,7);
    }
    uVar9 = FUN_4a0fba7c(*(undefined4 *)(param_1 + 0x18));
    if (param_3 == 2) {
      FUN_4a1136bc(uVar9,0xb62,0x9b8);
    }
    else {
      if (param_3 == 1) {
        uVar6 = 0xe;
      }
      else if (param_3 == 4) {
        uVar6 = 0xf;
      }
      else if (param_3 == 5) {
        uVar6 = 0x10;
      }
      else if (param_3 == 10) {
        uVar6 = 0x11;
      }
      else if (param_3 == 9) {
        uVar6 = 0x12;
      }
      else {
        if (param_3 != 0xb) {
          if (param_3 == 0xc) {
            FUN_4a11a440(uVar9,0x14);
          }
          goto LAB_4a0df210;
        }
        uVar6 = 0x13;
      }
      FUN_4a11a440(uVar9,uVar6);
    }
  }
LAB_4a0df210:
  FUN_4a0d8cac(param_1);
  FUN_4a16bef4(auStack_58);
  FUN_4a168e44(auStack_44);
  FUN_4a168b90(auStack_30);
  return;
}



// Address: 4a0df248

int FUN_4a0df248(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_50 [20];
  undefined1 auStack_3c [20];
  int local_28;
  
  iVar7 = *(int *)(param_1 + 0x7ec);
  iVar1 = 0;
  iVar10 = 0;
  do {
    if (iVar7 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar7 + 8);
    }
    if (*(char *)(iVar3 + iVar1) != -1) {
      if (*(int *)(param_1 + 0x1b8) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(*(int *)(param_1 + 0x1b8) + 8);
      }
      param_4 = (int)*(short *)(iVar8 + *(char *)(iVar3 + iVar1) * 2) & 2;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  iVar8 = *(int *)(param_1 + 0x1b4);
  switchD_4a11cc8c::default
            (iVar8 < 0x102,s_LGC_isn_t_big_enough_for_dreams_l_4a0df4b4,iVar7,param_4);
  iVar1 = DAT_4a0df4dc;
  local_28 = param_1 + 0x700;
  iVar3 = (int)*(short *)(param_1 + 0x7da);
  iVar7 = -1;
  iVar9 = 0;
  if (0 < iVar8) {
    do {
      do {
        iVar3 = iVar3 * 0x607 + 0xdf3;
        iVar4 = (int)((ulonglong)((longlong)iVar1 * (longlong)iVar3) >> 0x20);
        iVar3 = ((iVar4 >> 7) - (iVar4 >> 0x1f)) * -0x101 + iVar3;
      } while (iVar8 <= iVar3);
      uVar2 = FUN_4a16b5a0(auStack_50,param_1 + 0x7e0);
      iVar4 = FUN_4a16fe9c(iVar3 * 0x1000000 >> 0x18,uVar2,0);
      FUN_4a16b6c0(auStack_50);
      iVar5 = 0;
      if (iVar4 == -1) {
        if (*(int *)(param_1 + 0x1b8) != 0) {
          iVar5 = *(int *)(*(int *)(param_1 + 0x1b8) + 8);
        }
        if ((((*(ushort *)(iVar5 + iVar3 * 2) & 8) == 0) &&
            (iVar4 = FUN_4a0d6554(param_1,iVar3), iVar4 != 0)) &&
           ((iVar4 = FUN_4a145970(*(undefined4 *)(param_1 + 0x18),iVar3), iVar4 == 0 ||
            (iVar4 = FUN_4a0fb748(*(undefined4 *)(param_1 + 0x18)), 0x45 < iVar4)))) {
          *(short *)(local_28 + 0xda) = (short)iVar3;
          iVar7 = iVar3;
          break;
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar8);
  }
  if (iVar7 == 0x2b) {
    *(undefined2 *)(param_1 + 0x810) = 0;
  }
  else if (iVar7 == 0x2c) {
    *(undefined2 *)(param_1 + 0x812) = 0;
  }
  else if ((iVar7 == 0x33) && (iVar1 = 1, 1 < *(int *)(param_1 + 0x410))) {
    do {
      if (*(int *)(param_1 + 0x8e4) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x8e4) + 8);
      }
      puVar6 = (ushort *)(iVar3 + iVar1 * 2);
      iVar1 = iVar1 + 1;
      *puVar6 = *puVar6 & 63999;
    } while (iVar1 < *(int *)(param_1 + 0x410));
  }
  uVar2 = FUN_4a16b5a0(auStack_3c,param_1 + 0x264);
  iVar1 = FUN_4a16fe9c((int)(char)iVar7,uVar2,0);
  FUN_4a16b6c0(auStack_3c);
  if (iVar1 != -1) {
    iVar3 = *(int *)(param_1 + 0x808);
    if (iVar3 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(iVar3 + 8);
    }
    if (*(int *)(iVar8 + iVar1 * 4) != -1) {
      if (iVar3 != 0) {
        iVar10 = *(int *)(iVar3 + 8);
      }
      *(undefined4 *)(iVar10 + iVar1 * 4) = *(undefined4 *)(param_1 + 0x78c);
    }
  }
  switchD_4a11cc8c::default(iVar7 != -1,s_couldn_t_find_a_new_dream_4a0df4e0);
  FUN_4a0fd4f0(*(undefined4 *)(param_1 + 0x18),iVar7);
  return iVar7;
}



// Address: 4a0df4fc

void FUN_4a0df4fc(int param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  int *piVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 *puVar14;
  uint uVar15;
  uint uVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  int *piVar20;
  int *piVar21;
  int iVar22;
  undefined1 auStack_894 [20];
  int local_880 [2];
  int local_878;
  int *local_874;
  undefined1 auStack_86c [8];
  int local_864;
  int *local_860;
  undefined1 auStack_858 [8];
  int local_850;
  int *local_84c;
  undefined1 auStack_844 [8];
  int local_83c;
  int *local_838;
  undefined1 auStack_830 [8];
  int local_828;
  int *local_824;
  undefined1 auStack_81c [8];
  int local_814;
  int *local_810;
  undefined1 auStack_808 [8];
  int local_800;
  int *local_7fc;
  undefined1 auStack_7f4 [8];
  int local_7ec;
  int *local_7e8;
  undefined1 auStack_7e0 [8];
  int local_7d8;
  int *local_7d4;
  undefined1 auStack_7cc [8];
  int local_7c4;
  int *local_7c0;
  undefined1 auStack_7b8 [8];
  undefined4 local_7b0;
  int *local_7ac;
  undefined1 auStack_7a4 [8];
  undefined4 local_79c;
  int *local_798;
  undefined1 auStack_790 [8];
  undefined4 local_788;
  int *local_784;
  undefined1 auStack_77c [8];
  undefined4 local_774;
  int *local_770;
  undefined1 auStack_768 [8];
  undefined4 local_760;
  int *local_75c;
  undefined1 auStack_754 [8];
  undefined4 local_74c;
  int *local_748;
  undefined1 auStack_740 [8];
  undefined4 local_738;
  int *local_734;
  undefined1 auStack_72c [8];
  undefined4 local_724;
  int *local_720;
  undefined1 auStack_718 [8];
  undefined4 local_710;
  int *local_70c;
  undefined1 auStack_704 [8];
  undefined4 local_6fc;
  int *local_6f8;
  undefined1 auStack_6f0 [8];
  undefined4 local_6e8;
  int *local_6e4;
  undefined1 auStack_6dc [8];
  undefined4 local_6d4;
  int *local_6d0;
  undefined1 auStack_6c8 [8];
  undefined4 local_6c0;
  int *local_6bc;
  undefined1 auStack_6b4 [8];
  undefined4 local_6ac;
  int *local_6a8;
  undefined1 auStack_6a0 [8];
  undefined4 local_698;
  int *local_694;
  undefined1 auStack_68c [8];
  undefined4 local_684;
  int *local_680;
  undefined1 auStack_678 [8];
  undefined4 local_670;
  int *local_66c;
  undefined1 auStack_664 [8];
  undefined4 local_65c;
  int *local_658;
  undefined1 auStack_650 [8];
  undefined4 local_648;
  int *local_644;
  undefined1 auStack_63c [8];
  undefined4 local_634;
  int *local_630;
  undefined1 auStack_628 [8];
  undefined4 local_620;
  int *local_61c;
  undefined1 auStack_614 [8];
  undefined4 local_60c;
  int *local_608;
  undefined1 auStack_600 [8];
  undefined4 local_5f8;
  int *local_5f4;
  undefined1 auStack_5ec [8];
  undefined4 local_5e4;
  int *local_5e0;
  undefined1 auStack_5d8 [8];
  undefined4 local_5d0;
  int *local_5cc;
  undefined1 auStack_5c4 [8];
  undefined4 local_5bc;
  int *local_5b8;
  undefined1 auStack_5b0 [8];
  undefined4 local_5a8;
  int *local_5a4;
  undefined1 auStack_59c [8];
  undefined4 local_594;
  int *local_590;
  undefined1 auStack_588 [8];
  undefined4 local_580;
  int *local_57c;
  undefined1 auStack_574 [8];
  undefined4 local_56c;
  int *local_568;
  undefined1 auStack_560 [8];
  undefined4 local_558;
  int *local_554;
  undefined1 auStack_54c [8];
  undefined4 local_544;
  int *local_540;
  int local_538;
  undefined1 auStack_534 [8];
  undefined4 local_52c;
  int *local_528;
  undefined1 auStack_520 [8];
  undefined4 local_518;
  int *local_514;
  undefined1 auStack_50c [8];
  undefined4 local_504;
  int *local_500;
  undefined1 auStack_4f8 [8];
  undefined4 local_4f0;
  int *local_4ec;
  undefined1 auStack_4e4 [8];
  undefined4 local_4dc;
  int *local_4d8;
  undefined1 auStack_4d0 [8];
  undefined4 local_4c8;
  int *local_4c4;
  undefined1 auStack_4bc [8];
  undefined4 local_4b4;
  int *local_4b0;
  undefined1 auStack_4a8 [8];
  undefined4 local_4a0;
  int *local_49c;
  undefined1 auStack_494 [8];
  undefined4 local_48c;
  int *local_488;
  undefined1 auStack_480 [8];
  undefined4 local_478;
  int *local_474;
  undefined1 auStack_46c [8];
  undefined4 local_464;
  int *local_460;
  undefined1 auStack_458 [8];
  undefined4 local_450;
  int *local_44c;
  int local_444;
  undefined1 auStack_440 [8];
  undefined4 local_438;
  int *local_434;
  undefined1 auStack_42c [8];
  undefined4 local_424;
  int *local_420;
  undefined1 auStack_418 [8];
  undefined4 local_410;
  int *local_40c;
  undefined1 auStack_404 [8];
  undefined4 local_3fc;
  int *local_3f8;
  undefined1 auStack_3f0 [8];
  undefined4 local_3e8;
  int *local_3e4;
  undefined1 auStack_3dc [8];
  undefined4 local_3d4;
  int *local_3d0;
  undefined1 auStack_3c8 [8];
  undefined4 local_3c0;
  int *local_3bc;
  undefined4 local_3b4;
  undefined1 auStack_3b0 [8];
  undefined4 local_3a8;
  int *local_3a4;
  undefined1 auStack_39c [8];
  undefined4 local_394;
  int *local_390;
  undefined1 auStack_388 [8];
  undefined4 local_380;
  int *local_37c;
  undefined1 auStack_374 [8];
  undefined4 local_36c;
  int *local_368;
  undefined1 auStack_360 [8];
  undefined4 local_358;
  int *local_354;
  undefined1 auStack_34c [8];
  undefined4 local_344;
  int *local_340;
  undefined1 auStack_338 [8];
  undefined4 local_330;
  int *local_32c;
  undefined1 auStack_324 [8];
  undefined4 local_31c;
  int *local_318;
  undefined1 auStack_310 [8];
  undefined4 local_308;
  int *local_304;
  undefined1 auStack_2fc [8];
  undefined4 local_2f4;
  int *local_2f0;
  undefined1 auStack_2e8 [8];
  undefined4 local_2e0;
  int *local_2dc;
  undefined1 auStack_2d4 [8];
  undefined4 local_2cc;
  int *local_2c8;
  undefined1 auStack_2c0 [8];
  undefined4 local_2b8;
  int *local_2b4;
  int local_2ac;
  undefined1 auStack_2a8 [8];
  undefined4 local_2a0;
  int *local_29c;
  undefined1 auStack_294 [8];
  undefined4 local_28c;
  int *local_288;
  undefined1 auStack_280 [8];
  undefined4 local_278;
  int *local_274;
  undefined1 auStack_26c [8];
  undefined4 local_264;
  int *local_260;
  undefined1 auStack_258 [8];
  undefined4 local_250;
  int *local_24c;
  undefined1 auStack_244 [8];
  undefined4 local_23c;
  int *local_238;
  undefined1 auStack_230 [8];
  undefined4 local_228;
  int *local_224;
  undefined1 auStack_21c [8];
  undefined4 local_214;
  int *local_210;
  undefined1 auStack_208 [8];
  undefined4 local_200;
  int *local_1fc;
  int local_1f4;
  undefined1 auStack_1f0 [8];
  undefined4 local_1e8;
  int *local_1e4;
  undefined1 auStack_1dc [8];
  undefined4 local_1d4;
  int *local_1d0;
  undefined1 auStack_1c8 [8];
  undefined4 local_1c0;
  int *local_1bc;
  undefined1 auStack_1b4 [8];
  undefined4 local_1ac;
  int *local_1a8;
  undefined1 auStack_1a0 [8];
  undefined4 local_198;
  int *local_194;
  undefined *local_18c [2];
  int local_184;
  int *local_180;
  undefined1 auStack_178 [8];
  undefined4 local_170;
  int *local_16c;
  undefined1 auStack_164 [8];
  undefined4 local_15c;
  int *local_158;
  undefined1 auStack_150 [8];
  undefined4 local_148;
  int *local_144;
  undefined1 auStack_13c [8];
  undefined4 local_134;
  int *local_130;
  undefined1 auStack_128 [8];
  undefined4 local_120;
  int *local_11c;
  undefined1 auStack_114 [8];
  undefined4 local_10c;
  int *local_108;
  undefined1 auStack_100 [8];
  undefined4 local_f8;
  int *local_f4;
  undefined1 auStack_ec [8];
  undefined4 local_e4;
  int *local_e0;
  undefined1 auStack_d8 [8];
  undefined4 local_d0;
  int *local_cc;
  undefined1 auStack_c4 [8];
  undefined4 local_bc;
  int *local_b8;
  undefined1 auStack_b0 [8];
  undefined4 local_a8;
  int *local_a4;
  undefined1 auStack_9c [8];
  undefined4 local_94;
  int *local_90;
  int local_88;
  undefined1 auStack_84 [8];
  undefined4 local_7c;
  int *local_78;
  undefined1 auStack_70 [8];
  undefined4 local_68;
  int *local_64;
  undefined1 auStack_5c [8];
  undefined4 local_54;
  int *local_50;
  int local_48;
  int *local_44;
  undefined1 auStack_40 [20];
  undefined *local_2c;
  
  uVar8 = thunk_FUN_4a161570(0x10);
  uVar9 = FUN_4a098414(0xb2);
  local_44 = (int *)FUN_4a0bfc44(uVar8,uVar9);
  if (local_44 != (int *)0x0) {
    (**(code **)(*local_44 + 0xc))(local_44);
  }
  local_48 = FUN_4a0bf920(local_44);
  FUN_4a16c0cc(auStack_5c,local_48);
  FUN_4a168d38(auStack_70,local_48);
  FUN_4a168f18(auStack_84,local_48);
  puVar4 = PTR_DAT_4a0df980;
  iVar19 = 0;
  if (0 < local_48) {
    do {
      iVar10 = FUN_4a0bfbdc(local_44);
      iVar11 = 0;
      if (local_50 != (int *)0x0) {
        iVar11 = local_50[2];
      }
      *(undefined2 *)(iVar11 + iVar19 * 2) = *(undefined2 *)(puVar4 + iVar10 * 2);
      switchD_4a11cc8c::default(1,s_invalid_SKILL_NUM_RANKS_4a0df984);
      FUN_4a16be24(auStack_7cc,5);
      iVar11 = 0;
      iVar22 = 0;
      iVar10 = 1;
      do {
        uVar8 = FUN_4a0bf62c(local_44);
        piVar20 = local_7c0;
        iVar13 = local_7c4;
        iVar10 = iVar10 + 1;
        if (local_7c0 == (int *)0x0) {
          iVar18 = 0;
        }
        else {
          iVar18 = local_7c0[2];
        }
        *(undefined4 *)(iVar18 + iVar22 * 4) = uVar8;
        iVar22 = iVar22 + 1;
      } while (iVar10 < 6);
      if (local_64 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_64[2];
      }
      piVar21 = (int *)(iVar10 + iVar19 * 0x14);
      if (local_7c0 != (int *)0x0) {
        (**(code **)(*local_7c0 + 0xc))(local_7c0);
      }
      (**(code **)(*piVar21 + 0x1c))(piVar21);
      piVar21[2] = iVar13;
      piVar21[3] = (int)piVar20;
      FUN_4a16c0cc(auStack_7e0,6);
      iVar22 = 0;
      iVar10 = 1;
      do {
        iVar18 = FUN_4a0bfbdc(local_44);
        piVar20 = local_7d4;
        iVar13 = local_7d8;
        iVar10 = iVar10 + 1;
        if (local_7d4 == (int *)0x0) {
          iVar12 = 0;
        }
        else {
          iVar12 = local_7d4[2];
        }
        iVar1 = iVar22 * 2;
        iVar22 = iVar22 + 1;
        *(undefined2 *)(iVar12 + iVar1) = *(undefined2 *)(puVar4 + iVar18 * 2);
      } while (iVar10 < 7);
      if (local_78 != (int *)0x0) {
        iVar11 = local_78[2];
      }
      piVar21 = (int *)(iVar11 + iVar19 * 0x14);
      if (local_7d4 != (int *)0x0) {
        (**(code **)(*local_7d4 + 0xc))(local_7d4);
      }
      (**(code **)(*piVar21 + 0x1c))(piVar21);
      piVar21[2] = iVar13;
      piVar21[3] = (int)piVar20;
      FUN_4a16c1a0(auStack_7e0);
      FUN_4a16bef4(auStack_7cc);
      iVar19 = iVar19 + 1;
    } while (iVar19 < local_48);
  }
  local_88 = FUN_4a0bf920(local_44);
  FUN_4a16c0cc(auStack_9c,local_88);
  FUN_4a16c0cc(auStack_b0,local_88);
  FUN_4a16c0cc(auStack_c4,local_88);
  FUN_4a16b5f8(auStack_d8,local_88);
  FUN_4a16c0cc(auStack_ec,local_88);
  FUN_4a16c0cc(auStack_100,local_88);
  FUN_4a16c0cc(auStack_114,local_88);
  FUN_4a168f18(auStack_128,local_88);
  FUN_4a168f18(auStack_13c,local_88);
  FUN_4a168f18(auStack_150,local_88);
  FUN_4a168f18(auStack_164,local_88);
  FUN_4a168f18(auStack_178,local_88);
  FUN_4a167cd8(local_18c,local_88);
  iVar19 = 0;
  if (0 < local_88) {
    do {
      iVar11 = FUN_4a0bfbdc(local_44);
      puVar4 = PTR_DAT_4a0df980;
      if (local_90 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_90[2];
      }
      *(undefined2 *)(iVar10 + iVar19 * 2) = *(undefined2 *)(PTR_DAT_4a0df980 + iVar11 * 2);
      iVar11 = FUN_4a0bfbdc(local_44);
      if (local_a4 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_a4[2];
      }
      *(undefined2 *)(iVar10 + iVar19 * 2) = *(undefined2 *)(puVar4 + iVar11 * 2);
      iVar11 = FUN_4a0bfbdc(local_44);
      if (local_b8 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_b8[2];
      }
      *(undefined2 *)(iVar10 + iVar19 * 2) = *(undefined2 *)(puVar4 + iVar11 * 2);
      uVar6 = FUN_4a0bf920(local_44);
      if (local_cc == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_cc[2];
      }
      *(undefined1 *)(iVar11 + iVar19) = uVar6;
      iVar11 = FUN_4a0bfbdc(local_44);
      if (local_e0 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_e0[2];
      }
      *(undefined2 *)(iVar10 + iVar19 * 2) = *(undefined2 *)(puVar4 + iVar11 * 2);
      iVar11 = FUN_4a0bfbdc(local_44);
      if (local_f4 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_f4[2];
      }
      *(undefined2 *)(iVar10 + iVar19 * 2) = *(undefined2 *)(puVar4 + iVar11 * 2);
      iVar11 = FUN_4a0bfbdc(local_44);
      if (local_108 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_108[2];
      }
      *(undefined2 *)(iVar10 + iVar19 * 2) = *(undefined2 *)(puVar4 + iVar11 * 2);
      iVar11 = FUN_4a0bf920(local_44);
      FUN_4a16c0cc(auStack_7cc,iVar11);
      FUN_4a16c0cc(auStack_7e0,iVar11);
      FUN_4a16c0cc(auStack_7f4,iVar11);
      FUN_4a16c0cc(auStack_808,iVar11);
      FUN_4a16c0cc(auStack_81c,iVar11);
      FUN_4a168a84(auStack_830,iVar11);
      iVar10 = 0;
      if (0 < iVar11) {
        do {
          iVar22 = FUN_4a0bfbdc(local_44);
          if (local_7c0 == (int *)0x0) {
            iVar13 = 0;
          }
          else {
            iVar13 = local_7c0[2];
          }
          *(undefined2 *)(iVar13 + iVar10 * 2) = *(undefined2 *)(PTR_DAT_4a0df980 + iVar22 * 2);
          uVar7 = FUN_4a0bfbdc(local_44);
          if (local_7d4 == (int *)0x0) {
            iVar22 = 0;
          }
          else {
            iVar22 = local_7d4[2];
          }
          *(undefined2 *)(iVar22 + iVar10 * 2) = uVar7;
          uVar7 = FUN_4a0bfbdc(local_44);
          if (local_7e8 == (int *)0x0) {
            iVar22 = 0;
          }
          else {
            iVar22 = local_7e8[2];
          }
          *(undefined2 *)(iVar22 + iVar10 * 2) = uVar7;
          iVar22 = FUN_4a0bfbdc(local_44);
          iVar13 = FUN_4a0bfbdc(local_44);
          lVar2 = (longlong)DAT_4a0e09cc;
          lVar3 = (longlong)DAT_4a0e09cc;
          if (local_7fc == (int *)0x0) {
            iVar18 = 0;
          }
          else {
            iVar18 = local_7fc[2];
          }
          *(short *)(iVar18 + iVar10 * 2) =
               (short)iVar22 +
               ((short)(int)((longlong)DAT_4a0e09cc * (longlong)iVar22 >> 0x25) -
               (short)((longlong)DAT_4a0e09cc * (longlong)iVar22 >> 0x3f)) * -100 +
               ((short)(int)((longlong)DAT_4a0e09cc * (longlong)iVar22 >> 0x25) -
               (short)((longlong)DAT_4a0e09cc * (longlong)iVar22 >> 0x3f)) * 0x3c;
          if (local_810 == (int *)0x0) {
            iVar22 = 0;
          }
          else {
            iVar22 = local_810[2];
          }
          *(short *)(iVar22 + iVar10 * 2) =
               (short)iVar13 +
               ((short)(int)(lVar2 * iVar13 >> 0x25) - (short)(lVar2 * iVar13 >> 0x3f)) * -100 +
               ((short)(int)(lVar3 * iVar13 >> 0x25) - (short)(lVar3 * iVar13 >> 0x3f)) * 0x3c;
          FUN_4a16b5f8(auStack_844,4);
          uVar6 = FUN_4a0bf920(local_44);
          if (local_838 == (int *)0x0) {
            puVar14 = (undefined1 *)0x0;
          }
          else {
            puVar14 = (undefined1 *)local_838[2];
          }
          *puVar14 = uVar6;
          uVar6 = FUN_4a0bf920(local_44);
          if (local_838 == (int *)0x0) {
            iVar22 = 0;
          }
          else {
            iVar22 = local_838[2];
          }
          *(undefined1 *)(iVar22 + 1) = uVar6;
          uVar6 = FUN_4a0bf920(local_44);
          if (local_838 == (int *)0x0) {
            iVar22 = 0;
          }
          else {
            iVar22 = local_838[2];
          }
          *(undefined1 *)(iVar22 + 2) = uVar6;
          uVar6 = FUN_4a0bf920(local_44);
          piVar20 = local_838;
          iVar22 = local_83c;
          if (local_838 == (int *)0x0) {
            iVar13 = 0;
          }
          else {
            iVar13 = local_838[2];
          }
          *(undefined1 *)(iVar13 + 3) = uVar6;
          if (local_824 == (int *)0x0) {
            iVar13 = 0;
          }
          else {
            iVar13 = local_824[2];
          }
          piVar21 = (int *)(iVar13 + iVar10 * 0x14);
          if (local_838 != (int *)0x0) {
            (**(code **)(*local_838 + 0xc))(local_838);
          }
          (**(code **)(*piVar21 + 0x1c))(piVar21);
          piVar21[2] = iVar22;
          piVar21[3] = (int)piVar20;
          FUN_4a16b6c0(auStack_844);
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar11);
      }
      piVar20 = local_7c0;
      iVar11 = local_7c4;
      if (local_11c == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_11c[2];
      }
      piVar21 = (int *)(iVar10 + iVar19 * 0x14);
      if (local_7c0 != (int *)0x0) {
        (**(code **)(*local_7c0 + 0xc))(local_7c0);
      }
      (**(code **)(*piVar21 + 0x1c))(piVar21);
      piVar5 = local_7d4;
      iVar10 = local_7d8;
      piVar21[2] = iVar11;
      piVar21[3] = (int)piVar20;
      if (local_130 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_130[2];
      }
      piVar20 = (int *)(iVar11 + iVar19 * 0x14);
      if (local_7d4 != (int *)0x0) {
        (**(code **)(*local_7d4 + 0xc))(local_7d4);
      }
      (**(code **)(*piVar20 + 0x1c))(piVar20);
      piVar21 = local_7e8;
      iVar11 = local_7ec;
      piVar20[2] = iVar10;
      piVar20[3] = (int)piVar5;
      if (local_144 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_144[2];
      }
      piVar20 = (int *)(iVar10 + iVar19 * 0x14);
      if (local_7e8 != (int *)0x0) {
        (**(code **)(*local_7e8 + 0xc))(local_7e8);
      }
      (**(code **)(*piVar20 + 0x1c))(piVar20);
      piVar5 = local_7fc;
      iVar10 = local_800;
      piVar20[2] = iVar11;
      piVar20[3] = (int)piVar21;
      if (local_158 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_158[2];
      }
      piVar20 = (int *)(iVar11 + iVar19 * 0x14);
      if (local_7fc != (int *)0x0) {
        (**(code **)(*local_7fc + 0xc))(local_7fc);
      }
      (**(code **)(*piVar20 + 0x1c))(piVar20);
      piVar21 = local_810;
      iVar11 = local_814;
      piVar20[2] = iVar10;
      piVar20[3] = (int)piVar5;
      if (local_16c == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_16c[2];
      }
      piVar20 = (int *)(iVar10 + iVar19 * 0x14);
      if (local_810 != (int *)0x0) {
        (**(code **)(*local_810 + 0xc))(local_810);
      }
      (**(code **)(*piVar20 + 0x1c))(piVar20);
      piVar5 = local_824;
      iVar10 = local_828;
      piVar20[2] = iVar11;
      piVar20[3] = (int)piVar21;
      if (local_180 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_180[2];
      }
      piVar20 = (int *)(iVar11 + iVar19 * 0x14);
      if (local_824 != (int *)0x0) {
        (**(code **)(*local_824 + 0xc))(local_824);
      }
      (**(code **)(*piVar20 + 0x1c))(piVar20);
      piVar20[2] = iVar10;
      piVar20[3] = (int)piVar5;
      FUN_4a168b90(auStack_830);
      FUN_4a16c1a0(auStack_81c);
      FUN_4a16c1a0(auStack_808);
      FUN_4a16c1a0(auStack_7f4);
      FUN_4a16c1a0(auStack_7e0);
      FUN_4a16c1a0(auStack_7cc);
      iVar19 = iVar19 + 1;
    } while (iVar19 < local_88);
  }
  iVar19 = FUN_4a0bf920(local_44);
  FUN_4a16c0cc(auStack_1a0,iVar19);
  FUN_4a16c0cc(auStack_1b4,iVar19);
  FUN_4a16c0cc(auStack_1c8,iVar19);
  puVar4 = PTR_DAT_4a0df980;
  iVar11 = 0;
  iVar10 = 1;
  if (1 < iVar19 + 1) {
    do {
      iVar22 = FUN_4a0bfbdc(local_44);
      if (local_194 == (int *)0x0) {
        iVar13 = 0;
      }
      else {
        iVar13 = local_194[2];
      }
      *(undefined2 *)(iVar13 + iVar11 * 2) = *(undefined2 *)(puVar4 + iVar22 * 2);
      iVar22 = FUN_4a0bfbdc(local_44);
      if (local_1a8 == (int *)0x0) {
        iVar13 = 0;
      }
      else {
        iVar13 = local_1a8[2];
      }
      *(undefined2 *)(iVar13 + iVar11 * 2) = *(undefined2 *)(puVar4 + iVar22 * 2);
      uVar7 = FUN_4a0bfbdc(local_44);
      iVar10 = iVar10 + 1;
      if (local_1bc == (int *)0x0) {
        iVar22 = 0;
      }
      else {
        iVar22 = local_1bc[2];
      }
      iVar13 = iVar11 * 2;
      iVar11 = iVar11 + 1;
      *(undefined2 *)(iVar22 + iVar13) = uVar7;
    } while (iVar10 < iVar19 + 1);
  }
  iVar19 = FUN_4a0bf920(local_44);
  FUN_4a16c0cc(auStack_1dc,iVar19);
  FUN_4a16c0cc(auStack_1f0,iVar19);
  puVar4 = PTR_DAT_4a0df980;
  iVar11 = 0;
  iVar10 = 1;
  if (1 < iVar19 + 1) {
    do {
      iVar22 = FUN_4a0bfbdc(local_44);
      if (local_1d0 == (int *)0x0) {
        iVar13 = 0;
      }
      else {
        iVar13 = local_1d0[2];
      }
      *(undefined2 *)(iVar13 + iVar11 * 2) = *(undefined2 *)(puVar4 + iVar22 * 2);
      uVar7 = FUN_4a0bfbdc(local_44);
      iVar10 = iVar10 + 1;
      if (local_1e4 == (int *)0x0) {
        iVar22 = 0;
      }
      else {
        iVar22 = local_1e4[2];
      }
      iVar13 = iVar11 * 2;
      iVar11 = iVar11 + 1;
      *(undefined2 *)(iVar22 + iVar13) = uVar7;
    } while (iVar10 < iVar19 + 1);
  }
  local_1f4 = FUN_4a0bf920(local_44);
  FUN_4a16c0cc(auStack_208,local_1f4);
  FUN_4a16be24(auStack_21c,local_1f4);
  FUN_4a16be24(auStack_230,local_1f4);
  FUN_4a16c0cc(auStack_244,local_1f4);
  FUN_4a16be24(auStack_258,local_1f4);
  FUN_4a16c0cc(auStack_26c,local_1f4);
  FUN_4a16c0cc(auStack_280,local_1f4);
  FUN_4a16c0cc(auStack_294,local_1f4);
  puVar4 = PTR_DAT_4a0df980;
  iVar19 = 0;
  iVar10 = local_1f4 + 1;
  iVar11 = 1;
  if (1 < iVar10) {
    do {
      iVar22 = FUN_4a0bfbdc(local_44);
      if (local_1fc == (int *)0x0) {
        iVar13 = 0;
      }
      else {
        iVar13 = local_1fc[2];
      }
      *(undefined2 *)(iVar13 + iVar19 * 2) = *(undefined2 *)(puVar4 + iVar22 * 2);
      uVar8 = FUN_4a0bf62c(local_44);
      if (local_210 == (int *)0x0) {
        iVar22 = 0;
      }
      else {
        iVar22 = local_210[2];
      }
      *(undefined4 *)(iVar22 + iVar19 * 4) = uVar8;
      uVar8 = FUN_4a0bf62c(local_44);
      if (local_224 == (int *)0x0) {
        iVar22 = 0;
      }
      else {
        iVar22 = local_224[2];
      }
      *(undefined4 *)(iVar22 + iVar19 * 4) = uVar8;
      uVar7 = FUN_4a0bfbdc(local_44);
      if (local_238 == (int *)0x0) {
        iVar22 = 0;
      }
      else {
        iVar22 = local_238[2];
      }
      *(undefined2 *)(iVar22 + iVar19 * 2) = uVar7;
      uVar8 = FUN_4a0bf62c(local_44);
      if (local_24c == (int *)0x0) {
        iVar22 = 0;
      }
      else {
        iVar22 = local_24c[2];
      }
      *(undefined4 *)(iVar22 + iVar19 * 4) = uVar8;
      iVar22 = FUN_4a0bfbdc(local_44);
      if (local_260 == (int *)0x0) {
        iVar13 = 0;
      }
      else {
        iVar13 = local_260[2];
      }
      *(undefined2 *)(iVar13 + iVar19 * 2) = *(undefined2 *)(puVar4 + iVar22 * 2);
      iVar22 = FUN_4a0bfbdc(local_44);
      if (local_274 == (int *)0x0) {
        iVar13 = 0;
      }
      else {
        iVar13 = local_274[2];
      }
      *(undefined2 *)(iVar13 + iVar19 * 2) = *(undefined2 *)(puVar4 + iVar22 * 2);
      iVar22 = FUN_4a0bfbdc(local_44);
      iVar11 = iVar11 + 1;
      if (local_288 == (int *)0x0) {
        iVar13 = 0;
      }
      else {
        iVar13 = local_288[2];
      }
      iVar18 = iVar19 * 2;
      iVar19 = iVar19 + 1;
      *(undefined2 *)(iVar13 + iVar18) = *(undefined2 *)(puVar4 + iVar22 * 2);
    } while (iVar11 < iVar10);
  }
  uVar8 = FUN_4a0bf920(local_44);
  FUN_4a16b5f8(auStack_2a8,uVar8);
  FUN_4a0bfae4(local_44,auStack_2a8);
  local_2ac = FUN_4a0bf920(local_44);
  FUN_4a16c0cc(auStack_2c0,local_2ac);
  FUN_4a16be24(auStack_2d4,local_2ac);
  FUN_4a16b5f8(auStack_2e8,local_2ac);
  FUN_4a16b5f8(auStack_2fc,local_2ac);
  FUN_4a16b5f8(auStack_310,local_2ac);
  FUN_4a168a84(auStack_324,local_2ac);
  FUN_4a168d38(auStack_338,local_2ac);
  FUN_4a168a84(auStack_34c,local_2ac);
  FUN_4a168a84(auStack_360,local_2ac);
  FUN_4a168a84(auStack_374,local_2ac);
  FUN_4a168d38(auStack_388,local_2ac);
  iVar19 = 0;
  if (0 < local_2ac) {
    do {
      iVar11 = FUN_4a0bfbdc(local_44);
      puVar4 = PTR_DAT_4a0df980;
      if (local_2b4 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_2b4[2];
      }
      *(undefined2 *)(iVar10 + iVar19 * 2) = *(undefined2 *)(PTR_DAT_4a0df980 + iVar11 * 2);
      uVar8 = FUN_4a0bf62c(local_44);
      if (local_2c8 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_2c8[2];
      }
      *(undefined4 *)(iVar11 + iVar19 * 4) = uVar8;
      uVar6 = FUN_4a0bf920(local_44);
      if (local_2dc == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_2dc[2];
      }
      *(undefined1 *)(iVar11 + iVar19) = uVar6;
      uVar6 = FUN_4a0bf920(local_44);
      if (local_2f0 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_2f0[2];
      }
      *(undefined1 *)(iVar11 + iVar19) = uVar6;
      uVar6 = FUN_4a0bf920(local_44);
      if (local_304 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_304[2];
      }
      *(undefined1 *)(iVar11 + iVar19) = uVar6;
      iVar11 = FUN_4a0bf920(local_44);
      FUN_4a16b5f8(auStack_7cc,iVar11);
      FUN_4a16be24(auStack_7e0,iVar11);
      iVar10 = 0;
      iVar22 = 1;
      if (1 < iVar11 + 1) {
        do {
          uVar6 = FUN_4a0bf920(local_44);
          if (local_7c0 == (int *)0x0) {
            iVar13 = 0;
          }
          else {
            iVar13 = local_7c0[2];
          }
          *(undefined1 *)(iVar13 + iVar10) = uVar6;
          uVar8 = FUN_4a0bf62c(local_44);
          iVar22 = iVar22 + 1;
          if (local_7d4 == (int *)0x0) {
            iVar13 = 0;
          }
          else {
            iVar13 = local_7d4[2];
          }
          *(undefined4 *)(iVar13 + iVar10 * 4) = uVar8;
          iVar10 = iVar10 + 1;
        } while (iVar22 < iVar11 + 1);
      }
      piVar20 = local_7c0;
      iVar11 = local_7c4;
      if (local_318 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_318[2];
      }
      piVar21 = (int *)(iVar10 + iVar19 * 0x14);
      if (local_7c0 != (int *)0x0) {
        (**(code **)(*local_7c0 + 0xc))(local_7c0);
      }
      (**(code **)(*piVar21 + 0x1c))(piVar21);
      piVar5 = local_7d4;
      iVar10 = local_7d8;
      piVar21[2] = iVar11;
      piVar21[3] = (int)piVar20;
      if (local_32c == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_32c[2];
      }
      piVar20 = (int *)(iVar11 + iVar19 * 0x14);
      if (local_7d4 != (int *)0x0) {
        (**(code **)(*local_7d4 + 0xc))(local_7d4);
      }
      (**(code **)(*piVar20 + 0x1c))(piVar20);
      piVar20[2] = iVar10;
      piVar20[3] = (int)piVar5;
      FUN_4a16bef4(auStack_7e0);
      FUN_4a16b6c0(auStack_7cc);
      iVar11 = FUN_4a0bf920(local_44);
      FUN_4a16b5f8(auStack_7cc,iVar11);
      FUN_4a16b5f8(auStack_7e0,iVar11);
      iVar10 = 0;
      iVar22 = 1;
      if (1 < iVar11 + 1) {
        do {
          iVar13 = FUN_4a0bfbdc(local_44);
          if (local_7c0 == (int *)0x0) {
            iVar18 = 0;
          }
          else {
            iVar18 = local_7c0[2];
          }
          *(char *)(iVar18 + iVar10) = (char)*(undefined2 *)(puVar4 + iVar13 * 2);
          uVar6 = FUN_4a0bf920(local_44);
          iVar22 = iVar22 + 1;
          if (local_7d4 == (int *)0x0) {
            iVar13 = 0;
          }
          else {
            iVar13 = local_7d4[2];
          }
          *(undefined1 *)(iVar13 + iVar10) = uVar6;
          iVar10 = iVar10 + 1;
        } while (iVar22 < iVar11 + 1);
      }
      piVar20 = local_7c0;
      iVar11 = local_7c4;
      if (local_340 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_340[2];
      }
      piVar21 = (int *)(iVar10 + iVar19 * 0x14);
      if (local_7c0 != (int *)0x0) {
        (**(code **)(*local_7c0 + 0xc))(local_7c0);
      }
      (**(code **)(*piVar21 + 0x1c))(piVar21);
      piVar5 = local_7d4;
      iVar10 = local_7d8;
      piVar21[2] = iVar11;
      piVar21[3] = (int)piVar20;
      if (local_354 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_354[2];
      }
      piVar20 = (int *)(iVar11 + iVar19 * 0x14);
      if (local_7d4 != (int *)0x0) {
        (**(code **)(*local_7d4 + 0xc))(local_7d4);
      }
      (**(code **)(*piVar20 + 0x1c))(piVar20);
      piVar20[2] = iVar10;
      piVar20[3] = (int)piVar5;
      FUN_4a16b6c0(auStack_7e0);
      FUN_4a16b6c0(auStack_7cc);
      iVar11 = FUN_4a0bf920(local_44);
      FUN_4a16b5f8(auStack_7cc,iVar11);
      iVar13 = 0;
      FUN_4a16be24(auStack_7e0,iVar11);
      iVar10 = 0;
      iVar22 = 1;
      if (1 < iVar11 + 1) {
        do {
          uVar6 = FUN_4a0bf920(local_44);
          if (local_7c0 == (int *)0x0) {
            iVar18 = 0;
          }
          else {
            iVar18 = local_7c0[2];
          }
          *(undefined1 *)(iVar18 + iVar10) = uVar6;
          uVar8 = FUN_4a0bf62c(local_44);
          iVar22 = iVar22 + 1;
          if (local_7d4 == (int *)0x0) {
            iVar18 = 0;
          }
          else {
            iVar18 = local_7d4[2];
          }
          *(undefined4 *)(iVar18 + iVar10 * 4) = uVar8;
          iVar10 = iVar10 + 1;
        } while (iVar22 < iVar11 + 1);
      }
      piVar20 = local_7c0;
      iVar11 = local_7c4;
      if (local_368 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_368[2];
      }
      piVar21 = (int *)(iVar10 + iVar19 * 0x14);
      if (local_7c0 != (int *)0x0) {
        (**(code **)(*local_7c0 + 0xc))(local_7c0);
      }
      (**(code **)(*piVar21 + 0x1c))(piVar21);
      piVar5 = local_7d4;
      iVar10 = local_7d8;
      piVar21[2] = iVar11;
      piVar21[3] = (int)piVar20;
      if (local_37c != (int *)0x0) {
        iVar13 = local_37c[2];
      }
      piVar20 = (int *)(iVar13 + iVar19 * 0x14);
      if (local_7d4 != (int *)0x0) {
        (**(code **)(*local_7d4 + 0xc))(local_7d4);
      }
      (**(code **)(*piVar20 + 0x1c))(piVar20);
      piVar20[2] = iVar10;
      piVar20[3] = (int)piVar5;
      FUN_4a16bef4(auStack_7e0);
      FUN_4a16b6c0(auStack_7cc);
      iVar19 = iVar19 + 1;
    } while (iVar19 < local_2ac);
  }
  iVar19 = FUN_4a0bf920(local_44);
  FUN_4a16c0cc(auStack_39c,iVar19);
  FUN_4a16c0cc(auStack_3b0,iVar19);
  puVar4 = PTR_DAT_4a0df980;
  iVar11 = 0;
  iVar10 = 1;
  if (1 < iVar19 + 1) {
    do {
      iVar22 = FUN_4a0bfbdc(local_44);
      if (local_390 == (int *)0x0) {
        iVar13 = 0;
      }
      else {
        iVar13 = local_390[2];
      }
      *(undefined2 *)(iVar13 + iVar11 * 2) = *(undefined2 *)(puVar4 + iVar22 * 2);
      uVar7 = FUN_4a0bf920(local_44);
      iVar10 = iVar10 + 1;
      if (local_3a4 == (int *)0x0) {
        iVar22 = 0;
      }
      else {
        iVar22 = local_3a4[2];
      }
      iVar13 = iVar11 * 2;
      iVar11 = iVar11 + 1;
      *(undefined2 *)(iVar22 + iVar13) = uVar7;
    } while (iVar10 < iVar19 + 1);
  }
  local_3b4 = FUN_4a0bf920(local_44);
  iVar19 = FUN_4a0bf920(local_44);
  FUN_4a16c0cc(auStack_3c8,iVar19);
  FUN_4a16b5f8(auStack_3dc,iVar19);
  FUN_4a16c0cc(auStack_3f0,iVar19);
  FUN_4a16c0cc(auStack_404,iVar19);
  FUN_4a168a84(auStack_418,iVar19);
  FUN_4a168a84(auStack_42c,iVar19);
  FUN_4a168f18(auStack_440,iVar19);
  iVar11 = 0;
  if (0 < iVar19) {
    do {
      iVar10 = FUN_4a0bfbdc(local_44);
      puVar4 = PTR_DAT_4a0df980;
      if (local_3bc == (int *)0x0) {
        iVar22 = 0;
      }
      else {
        iVar22 = local_3bc[2];
      }
      *(undefined2 *)(iVar22 + iVar11 * 2) = *(undefined2 *)(PTR_DAT_4a0df980 + iVar10 * 2);
      uVar6 = FUN_4a0bf920(local_44);
      if (local_3d0 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_3d0[2];
      }
      *(undefined1 *)(iVar10 + iVar11) = uVar6;
      iVar10 = FUN_4a0bfbdc(local_44);
      if (local_3e4 == (int *)0x0) {
        iVar22 = 0;
      }
      else {
        iVar22 = local_3e4[2];
      }
      *(undefined2 *)(iVar22 + iVar11 * 2) = *(undefined2 *)(puVar4 + iVar10 * 2);
      iVar10 = FUN_4a0bfbdc(local_44);
      if (local_3f8 == (int *)0x0) {
        iVar22 = 0;
      }
      else {
        iVar22 = local_3f8[2];
      }
      *(undefined2 *)(iVar22 + iVar11 * 2) = *(undefined2 *)(puVar4 + iVar10 * 2);
      iVar10 = FUN_4a0bf578(local_44);
      FUN_4a16b5f8(auStack_7cc,iVar10);
      FUN_4a16b5f8(auStack_7e0,iVar10);
      FUN_4a16c0cc(auStack_7f4,iVar10);
      iVar22 = 0;
      iVar13 = 1;
      if (1 < iVar10 + 1) {
        do {
          uVar6 = FUN_4a0bf920(local_44);
          if (local_7c0 == (int *)0x0) {
            iVar18 = 0;
          }
          else {
            iVar18 = local_7c0[2];
          }
          *(undefined1 *)(iVar18 + iVar22) = uVar6;
          uVar6 = FUN_4a0bf920(local_44);
          if (local_7d4 == (int *)0x0) {
            iVar18 = 0;
          }
          else {
            iVar18 = local_7d4[2];
          }
          *(undefined1 *)(iVar18 + iVar22) = uVar6;
          uVar7 = FUN_4a0bfbdc(local_44);
          iVar13 = iVar13 + 1;
          if (local_7e8 == (int *)0x0) {
            iVar18 = 0;
          }
          else {
            iVar18 = local_7e8[2];
          }
          iVar12 = iVar22 * 2;
          iVar22 = iVar22 + 1;
          *(undefined2 *)(iVar18 + iVar12) = uVar7;
        } while (iVar13 < iVar10 + 1);
      }
      piVar20 = local_7c0;
      iVar10 = local_7c4;
      if (local_40c == (int *)0x0) {
        iVar22 = 0;
      }
      else {
        iVar22 = local_40c[2];
      }
      piVar21 = (int *)(iVar22 + iVar11 * 0x14);
      if (local_7c0 != (int *)0x0) {
        (**(code **)(*local_7c0 + 0xc))(local_7c0);
      }
      (**(code **)(*piVar21 + 0x1c))(piVar21);
      piVar5 = local_7d4;
      iVar22 = local_7d8;
      piVar21[2] = iVar10;
      piVar21[3] = (int)piVar20;
      if (local_420 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_420[2];
      }
      piVar20 = (int *)(iVar10 + iVar11 * 0x14);
      if (local_7d4 != (int *)0x0) {
        (**(code **)(*local_7d4 + 0xc))(local_7d4);
      }
      (**(code **)(*piVar20 + 0x1c))(piVar20);
      piVar21 = local_7e8;
      iVar10 = local_7ec;
      piVar20[2] = iVar22;
      piVar20[3] = (int)piVar5;
      if (local_434 == (int *)0x0) {
        iVar22 = 0;
      }
      else {
        iVar22 = local_434[2];
      }
      piVar20 = (int *)(iVar22 + iVar11 * 0x14);
      if (local_7e8 != (int *)0x0) {
        (**(code **)(*local_7e8 + 0xc))(local_7e8);
      }
      (**(code **)(*piVar20 + 0x1c))(piVar20);
      piVar20[2] = iVar10;
      piVar20[3] = (int)piVar21;
      FUN_4a16c1a0(auStack_7f4);
      FUN_4a16b6c0(auStack_7e0);
      FUN_4a16b6c0(auStack_7cc);
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar19);
  }
  local_444 = FUN_4a0bf920(local_44);
  FUN_4a16c0cc(auStack_458,local_444);
  FUN_4a16c0cc(auStack_46c,local_444);
  FUN_4a16b5f8(auStack_480,local_444);
  FUN_4a168d38(auStack_494,local_444);
  FUN_4a16c0cc(auStack_4a8,local_444);
  FUN_4a16b5f8(auStack_4bc,local_444);
  FUN_4a16b5f8(auStack_4d0,local_444);
  FUN_4a16b5f8(auStack_4e4,local_444);
  FUN_4a16b5f8(auStack_4f8,local_444);
  FUN_4a168a84(auStack_50c,local_444);
  FUN_4a168a84(auStack_520,local_444);
  iVar19 = 0;
  if (0 < local_444) {
    do {
      iVar11 = FUN_4a0bfbdc(local_44);
      puVar4 = PTR_DAT_4a0e1594;
      if (local_44c == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_44c[2];
      }
      *(undefined2 *)(iVar10 + iVar19 * 2) = *(undefined2 *)(PTR_DAT_4a0e1594 + iVar11 * 2);
      iVar11 = FUN_4a0bfbdc(local_44);
      if (local_460 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_460[2];
      }
      *(undefined2 *)(iVar10 + iVar19 * 2) = *(undefined2 *)(puVar4 + iVar11 * 2);
      uVar6 = FUN_4a0bf920(local_44);
      if (local_474 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_474[2];
      }
      *(undefined1 *)(iVar11 + iVar19) = uVar6;
      FUN_4a16be24(auStack_7cc,0xd);
      iVar11 = 0;
      iVar10 = 1;
      do {
        uVar8 = 0;
        if (iVar11 < 0xb) {
          uVar8 = FUN_4a0bf920();
        }
        piVar20 = local_7c0;
        iVar22 = local_7c4;
        iVar10 = iVar10 + 1;
        if (local_7c0 == (int *)0x0) {
          iVar13 = 0;
        }
        else {
          iVar13 = local_7c0[2];
        }
        *(undefined4 *)(iVar13 + iVar11 * 4) = uVar8;
        iVar11 = iVar11 + 1;
      } while (iVar10 < 0xe);
      if (local_488 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_488[2];
      }
      piVar21 = (int *)(iVar11 + iVar19 * 0x14);
      if (local_7c0 != (int *)0x0) {
        (**(code **)(*local_7c0 + 0xc))(local_7c0);
      }
      (**(code **)(*piVar21 + 0x1c))(piVar21);
      piVar21[2] = iVar22;
      piVar21[3] = (int)piVar20;
      iVar11 = FUN_4a0bfbdc(local_44);
      if (local_49c == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_49c[2];
      }
      *(undefined2 *)(iVar10 + iVar19 * 2) = *(undefined2 *)(puVar4 + iVar11 * 2);
      uVar6 = FUN_4a0bf920(local_44);
      if (local_4b0 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_4b0[2];
      }
      *(undefined1 *)(iVar11 + iVar19) = uVar6;
      uVar6 = FUN_4a0bf920(local_44);
      if (local_4c4 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_4c4[2];
      }
      *(undefined1 *)(iVar11 + iVar19) = uVar6;
      uVar6 = FUN_4a0bf920(local_44);
      if (local_4d8 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_4d8[2];
      }
      *(undefined1 *)(iVar11 + iVar19) = uVar6;
      uVar6 = FUN_4a0bf920(local_44);
      if (local_4ec == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_4ec[2];
      }
      *(undefined1 *)(iVar11 + iVar19) = uVar6;
      uVar8 = FUN_4a0bf920(local_44);
      FUN_4a16b5f8(auStack_7e0,uVar8);
      FUN_4a0bfae4(local_44,auStack_7e0);
      piVar20 = local_7d4;
      iVar11 = local_7d8;
      if (local_500 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_500[2];
      }
      piVar21 = (int *)(iVar10 + iVar19 * 0x14);
      if (local_7d4 != (int *)0x0) {
        (**(code **)(*local_7d4 + 0xc))(local_7d4);
      }
      (**(code **)(*piVar21 + 0x1c))(piVar21);
      piVar21[2] = iVar11;
      piVar21[3] = (int)piVar20;
      uVar8 = FUN_4a0bf920(local_44);
      FUN_4a16b5f8(auStack_7f4,uVar8);
      iVar10 = 0;
      FUN_4a0bfae4(local_44,auStack_7f4);
      piVar20 = local_7e8;
      iVar11 = local_7ec;
      if (local_514 != (int *)0x0) {
        iVar10 = local_514[2];
      }
      piVar21 = (int *)(iVar10 + iVar19 * 0x14);
      if (local_7e8 != (int *)0x0) {
        (**(code **)(*local_7e8 + 0xc))(local_7e8);
      }
      (**(code **)(*piVar21 + 0x1c))(piVar21);
      piVar21[2] = iVar11;
      piVar21[3] = (int)piVar20;
      FUN_4a16b6c0(auStack_7f4);
      FUN_4a16b6c0(auStack_7e0);
      FUN_4a16bef4(auStack_7cc);
      iVar19 = iVar19 + 1;
    } while (iVar19 < local_444);
  }
  iVar19 = FUN_4a0bf920(local_44);
  FUN_4a16c0cc(auStack_534,iVar19);
  puVar4 = PTR_DAT_4a0e1594;
  iVar10 = 0;
  iVar11 = 1;
  if (1 < iVar19 + 1) {
    do {
      iVar22 = FUN_4a0bfbdc(local_44);
      iVar11 = iVar11 + 1;
      if (local_528 == (int *)0x0) {
        iVar13 = 0;
      }
      else {
        iVar13 = local_528[2];
      }
      iVar18 = iVar10 * 2;
      iVar10 = iVar10 + 1;
      *(undefined2 *)(iVar13 + iVar18) = *(undefined2 *)(puVar4 + iVar22 * 2);
    } while (iVar11 < iVar19 + 1);
  }
  local_538 = FUN_4a0bfbdc(local_44);
  iVar19 = FUN_4a16c0cc(auStack_40,local_538);
  uVar8 = *(undefined4 *)(iVar19 + 8);
  piVar20 = *(int **)(iVar19 + 0xc);
  if (piVar20 != (int *)0x0) {
    (**(code **)(*piVar20 + 0xc))(piVar20);
  }
  (**(code **)(*(int *)(param_1 + 0x948) + 0x1c))((int *)(param_1 + 0x948));
  *(undefined4 *)(param_1 + 0x950) = uVar8;
  *(int **)(param_1 + 0x954) = piVar20;
  FUN_4a16c1a0(auStack_40);
  FUN_4a16c0cc(auStack_54c,local_538);
  FUN_4a16c0cc(auStack_560,local_538);
  FUN_4a16be24(auStack_574,local_538);
  FUN_4a16c0cc(auStack_588,local_538);
  FUN_4a168a84(auStack_59c,local_538);
  FUN_4a168a84(auStack_5b0,local_538);
  FUN_4a168a84(auStack_5c4,local_538);
  FUN_4a168d38(auStack_5d8,local_538);
  FUN_4a168d38(auStack_5ec,local_538);
  FUN_4a168a84(auStack_600,local_538);
  FUN_4a168a84(auStack_614,local_538);
  FUN_4a168a84(auStack_628,local_538);
  FUN_4a168a84(auStack_63c,local_538);
  FUN_4a168f18(auStack_650,local_538);
  iVar19 = 0;
  if (0 < local_538) {
    local_2c = PTR_PTR_4a0e1598;
    do {
      if (*(int *)(param_1 + 0x954) == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = *(int *)(*(int *)(param_1 + 0x954) + 8);
      }
      *(undefined2 *)(iVar11 + iVar19 * 2) = 0xffff;
      iVar11 = FUN_4a0bfbdc(local_44);
      puVar4 = PTR_DAT_4a0e1594;
      if (local_540 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_540[2];
      }
      *(undefined2 *)(iVar10 + iVar19 * 2) = *(undefined2 *)(PTR_DAT_4a0e1594 + iVar11 * 2);
      iVar11 = FUN_4a0bfbdc(local_44);
      if (local_554 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_554[2];
      }
      *(undefined2 *)(iVar10 + iVar19 * 2) = *(undefined2 *)(puVar4 + iVar11 * 2);
      uVar15 = FUN_4a0bf62c(local_44);
      if (local_568 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_568[2];
      }
      *(uint *)(iVar11 + iVar19 * 4) = uVar15;
      iVar11 = FUN_4a0bfbdc(local_44);
      if (local_57c == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_57c[2];
      }
      *(undefined2 *)(iVar10 + iVar19 * 2) = *(undefined2 *)(puVar4 + iVar11 * 2);
      iVar11 = FUN_4a0bf920(local_44);
      FUN_4a16b5f8(auStack_7cc,iVar11);
      FUN_4a16b5f8(auStack_7e0,iVar11);
      FUN_4a16be24(auStack_7f4,iVar11);
      FUN_4a16be24(auStack_808,iVar11);
      FUN_4a16b5f8(auStack_81c,iVar11);
      FUN_4a16b5f8(auStack_830,iVar11);
      FUN_4a16b5f8(auStack_844,iVar11);
      FUN_4a16b5f8(auStack_858,iVar11);
      FUN_4a16c0cc(auStack_86c,iVar11);
      iVar10 = 0;
      iVar22 = 1;
      if (1 < iVar11 + 1) {
        do {
          uVar6 = FUN_4a0bf920(local_44);
          if (local_7c0 == (int *)0x0) {
            iVar13 = 0;
          }
          else {
            iVar13 = local_7c0[2];
          }
          *(undefined1 *)(iVar13 + iVar10) = uVar6;
          uVar6 = FUN_4a0bf920(local_44);
          if (local_7d4 == (int *)0x0) {
            iVar13 = 0;
          }
          else {
            iVar13 = local_7d4[2];
          }
          *(undefined1 *)(iVar13 + iVar10) = uVar6;
          uVar16 = FUN_4a0bf62c(local_44);
          uVar8 = FUN_4a0bf62c(local_44);
          if (local_7fc == (int *)0x0) {
            iVar13 = 0;
          }
          else {
            iVar13 = local_7fc[2];
          }
          *(undefined4 *)(iVar13 + iVar10 * 4) = uVar8;
          uVar6 = FUN_4a0bf920(local_44);
          if (local_810 == (int *)0x0) {
            iVar13 = 0;
          }
          else {
            iVar13 = local_810[2];
          }
          *(undefined1 *)(iVar13 + iVar10) = uVar6;
          uVar6 = FUN_4a0bf920(local_44);
          if (local_824 == (int *)0x0) {
            iVar13 = 0;
          }
          else {
            iVar13 = local_824[2];
          }
          *(undefined1 *)(iVar13 + iVar10) = uVar6;
          uVar6 = FUN_4a0bf920(local_44);
          if (local_838 == (int *)0x0) {
            iVar13 = 0;
          }
          else {
            iVar13 = local_838[2];
          }
          *(undefined1 *)(iVar13 + iVar10) = uVar6;
          uVar6 = FUN_4a0bf920(local_44);
          if (local_84c == (int *)0x0) {
            iVar13 = 0;
          }
          else {
            iVar13 = local_84c[2];
          }
          *(undefined1 *)(iVar13 + iVar10) = uVar6;
          uVar7 = FUN_4a0bfbdc(local_44);
          iVar22 = iVar22 + 1;
          if (local_860 == (int *)0x0) {
            iVar13 = 0;
          }
          else {
            iVar13 = local_860[2];
          }
          *(undefined2 *)(iVar13 + iVar10 * 2) = uVar7;
          if ((uVar16 & 1) != 0) {
            uVar16 = ~uVar16;
          }
          if (local_7e8 == (int *)0x0) {
            iVar13 = 0;
          }
          else {
            iVar13 = local_7e8[2];
          }
          *(uint *)(iVar13 + iVar10 * 4) = uVar16;
          iVar10 = iVar10 + 1;
        } while (iVar22 < iVar11 + 1);
      }
      iVar11 = FUN_4a0bf920(local_44);
      puVar17 = (undefined4 *)FUN_4a0c6bc0(local_880);
      puVar17[2] = 0;
      puVar17[3] = 0;
      *puVar17 = local_2c;
      if ((uVar15 & 0x4000000) == 0) {
        iVar11 = FUN_4a16b5f8(auStack_894,iVar11);
        iVar10 = *(int *)(iVar11 + 8);
        piVar20 = *(int **)(iVar11 + 0xc);
        if (piVar20 != (int *)0x0) {
          (**(code **)(*piVar20 + 0xc))(piVar20);
        }
        (**(code **)(local_880[0] + 0x1c))(local_880);
        local_878 = iVar10;
        local_874 = piVar20;
        FUN_4a16b6c0(auStack_894);
        FUN_4a0bfae4(local_44,local_880);
      }
      else {
        iVar10 = 0;
        if (local_590 == (int *)0x0) {
          iVar22 = 0;
        }
        else {
          iVar22 = local_590[2];
        }
        if (*(int *)(iVar22 + 0x264) == 0) {
          iVar22 = 0;
        }
        else {
          iVar22 = *(int *)(*(int *)(iVar22 + 0x264) + 8);
        }
        if ((iVar22 == 0) || (iVar11 != 0)) {
          uVar8 = 0;
        }
        else {
          uVar8 = 1;
        }
        switchD_4a11cc8c::default(uVar8,s_invalid_generic_talk_4a0e159c);
        if (local_590 != (int *)0x0) {
          iVar10 = local_590[2];
        }
        piVar20 = *(int **)(iVar10 + 0x264);
        iVar11 = *(int *)(iVar10 + 0x260);
        if (piVar20 != (int *)0x0) {
          (**(code **)(*piVar20 + 0xc))(piVar20);
        }
        (**(code **)(local_880[0] + 0x1c))(local_880);
        local_878 = iVar11;
        local_874 = piVar20;
      }
      piVar20 = local_7c0;
      iVar11 = local_7c4;
      if (local_5a4 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_5a4[2];
      }
      piVar21 = (int *)(iVar10 + iVar19 * 0x14);
      if (local_7c0 != (int *)0x0) {
        (**(code **)(*local_7c0 + 0xc))(local_7c0);
      }
      (**(code **)(*piVar21 + 0x1c))(piVar21);
      piVar5 = local_7d4;
      iVar10 = local_7d8;
      piVar21[2] = iVar11;
      piVar21[3] = (int)piVar20;
      if (local_5b8 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_5b8[2];
      }
      piVar20 = (int *)(iVar11 + iVar19 * 0x14);
      if (local_7d4 != (int *)0x0) {
        (**(code **)(*local_7d4 + 0xc))(local_7d4);
      }
      (**(code **)(*piVar20 + 0x1c))(piVar20);
      piVar21 = local_7e8;
      iVar11 = local_7ec;
      piVar20[2] = iVar10;
      piVar20[3] = (int)piVar5;
      if (local_5cc == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_5cc[2];
      }
      piVar20 = (int *)(iVar10 + iVar19 * 0x14);
      if (local_7e8 != (int *)0x0) {
        (**(code **)(*local_7e8 + 0xc))(local_7e8);
      }
      (**(code **)(*piVar20 + 0x1c))(piVar20);
      piVar5 = local_7fc;
      iVar10 = local_800;
      piVar20[2] = iVar11;
      piVar20[3] = (int)piVar21;
      if (local_5e0 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_5e0[2];
      }
      piVar20 = (int *)(iVar11 + iVar19 * 0x14);
      if (local_7fc != (int *)0x0) {
        (**(code **)(*local_7fc + 0xc))(local_7fc);
      }
      (**(code **)(*piVar20 + 0x1c))(piVar20);
      piVar21 = local_810;
      iVar11 = local_814;
      piVar20[2] = iVar10;
      piVar20[3] = (int)piVar5;
      if (local_5f4 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_5f4[2];
      }
      piVar20 = (int *)(iVar10 + iVar19 * 0x14);
      if (local_810 != (int *)0x0) {
        (**(code **)(*local_810 + 0xc))(local_810);
      }
      (**(code **)(*piVar20 + 0x1c))(piVar20);
      piVar5 = local_824;
      iVar10 = local_828;
      piVar20[2] = iVar11;
      piVar20[3] = (int)piVar21;
      if (local_608 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_608[2];
      }
      piVar20 = (int *)(iVar11 + iVar19 * 0x14);
      if (local_824 != (int *)0x0) {
        (**(code **)(*local_824 + 0xc))(local_824);
      }
      (**(code **)(*piVar20 + 0x1c))(piVar20);
      piVar21 = local_838;
      iVar11 = local_83c;
      piVar20[2] = iVar10;
      piVar20[3] = (int)piVar5;
      if (local_61c == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_61c[2];
      }
      piVar20 = (int *)(iVar10 + iVar19 * 0x14);
      if (local_838 != (int *)0x0) {
        (**(code **)(*local_838 + 0xc))(local_838);
      }
      (**(code **)(*piVar20 + 0x1c))(piVar20);
      piVar5 = local_84c;
      iVar10 = local_850;
      piVar20[2] = iVar11;
      piVar20[3] = (int)piVar21;
      if (local_630 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_630[2];
      }
      piVar20 = (int *)(iVar11 + iVar19 * 0x14);
      if (local_84c != (int *)0x0) {
        (**(code **)(*local_84c + 0xc))(local_84c);
      }
      (**(code **)(*piVar20 + 0x1c))(piVar20);
      piVar21 = local_860;
      iVar11 = local_864;
      piVar20[2] = iVar10;
      piVar20[3] = (int)piVar5;
      if (local_644 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_644[2];
      }
      piVar20 = (int *)(iVar10 + iVar19 * 0x14);
      if (local_860 != (int *)0x0) {
        (**(code **)(*local_860 + 0xc))(local_860);
      }
      (**(code **)(*piVar20 + 0x1c))(piVar20);
      piVar5 = local_874;
      iVar10 = local_878;
      piVar20[2] = iVar11;
      piVar20[3] = (int)piVar21;
      if (local_590 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_590[2];
      }
      piVar20 = (int *)(iVar11 + iVar19 * 0x14);
      if (local_874 != (int *)0x0) {
        (**(code **)(*local_874 + 0xc))(local_874);
      }
      (**(code **)(*piVar20 + 0x1c))(piVar20);
      piVar20[2] = iVar10;
      piVar20[3] = (int)piVar5;
      FUN_4a16b6c0(local_880);
      FUN_4a16c1a0(auStack_86c);
      FUN_4a16b6c0(auStack_858);
      FUN_4a16b6c0(auStack_844);
      FUN_4a16b6c0(auStack_830);
      FUN_4a16b6c0(auStack_81c);
      FUN_4a16bef4(auStack_808);
      FUN_4a16bef4(auStack_7f4);
      FUN_4a16b6c0(auStack_7e0);
      FUN_4a16b6c0(auStack_7cc);
      iVar19 = iVar19 + 1;
    } while (iVar19 < local_538);
  }
  iVar19 = FUN_4a0bf920(local_44);
  FUN_4a16c0cc(auStack_664,iVar19);
  FUN_4a16b5f8(auStack_678,iVar19);
  FUN_4a16b5f8(auStack_68c,iVar19);
  FUN_4a16b5f8(auStack_6a0,iVar19);
  FUN_4a16c0cc(auStack_6b4,iVar19);
  FUN_4a16b5f8(auStack_6c8,iVar19);
  FUN_4a16c0cc(auStack_6dc,iVar19);
  FUN_4a16b5f8(auStack_6f0,iVar19);
  FUN_4a16c0cc(auStack_704,iVar19);
  FUN_4a16b5f8(auStack_718,iVar19);
  FUN_4a16c0cc(auStack_72c,iVar19);
  puVar4 = PTR_DAT_4a0e1594;
  iVar11 = 0;
  iVar10 = 1;
  if (1 < iVar19 + 1) {
    do {
      iVar22 = FUN_4a0bfbdc(local_44);
      if (local_658 == (int *)0x0) {
        iVar13 = 0;
      }
      else {
        iVar13 = local_658[2];
      }
      *(undefined2 *)(iVar13 + iVar11 * 2) = *(undefined2 *)(puVar4 + iVar22 * 2);
      uVar6 = FUN_4a0bf920(local_44);
      if (local_66c == (int *)0x0) {
        iVar22 = 0;
      }
      else {
        iVar22 = local_66c[2];
      }
      *(undefined1 *)(iVar22 + iVar11) = uVar6;
      uVar6 = FUN_4a0bf920(local_44);
      if (local_680 == (int *)0x0) {
        iVar22 = 0;
      }
      else {
        iVar22 = local_680[2];
      }
      *(undefined1 *)(iVar22 + iVar11) = uVar6;
      uVar6 = FUN_4a0bf920(local_44);
      if (local_694 == (int *)0x0) {
        iVar22 = 0;
      }
      else {
        iVar22 = local_694[2];
      }
      *(undefined1 *)(iVar22 + iVar11) = uVar6;
      iVar22 = FUN_4a0bfbdc(local_44);
      if (local_6a8 == (int *)0x0) {
        iVar13 = 0;
      }
      else {
        iVar13 = local_6a8[2];
      }
      *(undefined2 *)(iVar13 + iVar11 * 2) = *(undefined2 *)(puVar4 + iVar22 * 2);
      uVar6 = FUN_4a0bf920(local_44);
      if (local_6bc == (int *)0x0) {
        iVar22 = 0;
      }
      else {
        iVar22 = local_6bc[2];
      }
      *(undefined1 *)(iVar22 + iVar11) = uVar6;
      iVar22 = FUN_4a0bfbdc(local_44);
      if (local_6d0 == (int *)0x0) {
        iVar13 = 0;
      }
      else {
        iVar13 = local_6d0[2];
      }
      *(undefined2 *)(iVar13 + iVar11 * 2) = *(undefined2 *)(puVar4 + iVar22 * 2);
      uVar6 = FUN_4a0bf920(local_44);
      if (local_6e4 == (int *)0x0) {
        iVar22 = 0;
      }
      else {
        iVar22 = local_6e4[2];
      }
      *(undefined1 *)(iVar22 + iVar11) = uVar6;
      iVar22 = FUN_4a0bfbdc(local_44);
      if (local_6f8 == (int *)0x0) {
        iVar13 = 0;
      }
      else {
        iVar13 = local_6f8[2];
      }
      *(undefined2 *)(iVar13 + iVar11 * 2) = *(undefined2 *)(puVar4 + iVar22 * 2);
      uVar6 = FUN_4a0bf920(local_44);
      if (local_70c == (int *)0x0) {
        iVar22 = 0;
      }
      else {
        iVar22 = local_70c[2];
      }
      *(undefined1 *)(iVar22 + iVar11) = uVar6;
      iVar22 = FUN_4a0bfbdc(local_44);
      iVar10 = iVar10 + 1;
      if (local_720 == (int *)0x0) {
        iVar13 = 0;
      }
      else {
        iVar13 = local_720[2];
      }
      iVar18 = iVar11 * 2;
      iVar11 = iVar11 + 1;
      *(undefined2 *)(iVar13 + iVar18) = *(undefined2 *)(puVar4 + iVar22 * 2);
    } while (iVar10 < iVar19 + 1);
  }
  iVar19 = FUN_4a0bf920(local_44);
  FUN_4a16b5f8(auStack_740,iVar19);
  FUN_4a16c0cc(auStack_754,iVar19);
  FUN_4a16c0cc(auStack_768,iVar19);
  FUN_4a16c0cc(auStack_77c,iVar19);
  FUN_4a16c0cc(auStack_790,iVar19);
  FUN_4a16c0cc(auStack_7a4,iVar19);
  FUN_4a168f18(auStack_7b8,iVar19);
  iVar11 = 0;
  if (0 < iVar19) {
    do {
      uVar6 = FUN_4a0bf920(local_44);
      if (local_734 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_734[2];
      }
      *(undefined1 *)(iVar10 + iVar11) = uVar6;
      iVar10 = FUN_4a0bfbdc(local_44);
      puVar4 = PTR_DAT_4a0e1594;
      if (local_748 == (int *)0x0) {
        iVar22 = 0;
      }
      else {
        iVar22 = local_748[2];
      }
      *(undefined2 *)(iVar22 + iVar11 * 2) = *(undefined2 *)(PTR_DAT_4a0e1594 + iVar10 * 2);
      iVar10 = FUN_4a0bfbdc(local_44);
      if (local_75c == (int *)0x0) {
        iVar22 = 0;
      }
      else {
        iVar22 = local_75c[2];
      }
      *(undefined2 *)(iVar22 + iVar11 * 2) = *(undefined2 *)(puVar4 + iVar10 * 2);
      uVar7 = FUN_4a0bfbdc(local_44);
      if (local_770 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_770[2];
      }
      *(undefined2 *)(iVar10 + iVar11 * 2) = uVar7;
      iVar10 = FUN_4a0bfbdc(local_44);
      if (local_784 == (int *)0x0) {
        iVar22 = 0;
      }
      else {
        iVar22 = local_784[2];
      }
      *(undefined2 *)(iVar22 + iVar11 * 2) = *(undefined2 *)(puVar4 + iVar10 * 2);
      uVar7 = FUN_4a0bfbdc(local_44);
      if (local_798 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_798[2];
      }
      *(undefined2 *)(iVar10 + iVar11 * 2) = uVar7;
      iVar10 = FUN_4a0bf920(local_44);
      FUN_4a16c0cc(auStack_7cc,iVar10);
      iVar13 = 0;
      iVar22 = 1;
      if (1 < iVar10 + 1) {
        do {
          uVar7 = FUN_4a0bfbdc(local_44);
          iVar22 = iVar22 + 1;
          if (local_7c0 == (int *)0x0) {
            iVar18 = 0;
          }
          else {
            iVar18 = local_7c0[2];
          }
          iVar12 = iVar13 * 2;
          iVar13 = iVar13 + 1;
          *(undefined2 *)(iVar18 + iVar12) = uVar7;
        } while (iVar22 < iVar10 + 1);
      }
      piVar20 = local_7c0;
      iVar10 = local_7c4;
      if (local_7ac == (int *)0x0) {
        iVar22 = 0;
      }
      else {
        iVar22 = local_7ac[2];
      }
      piVar21 = (int *)(iVar22 + iVar11 * 0x14);
      if (local_7c0 != (int *)0x0) {
        (**(code **)(*local_7c0 + 0xc))(local_7c0);
      }
      (**(code **)(*piVar21 + 0x1c))(piVar21);
      piVar21[2] = iVar10;
      piVar21[3] = (int)piVar20;
      FUN_4a16c1a0(auStack_7cc);
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar19);
  }
  FUN_4a0f8338(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),local_44);
  FUN_4a0ed374(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),local_44);
  (**(code **)(*local_44 + 0x20))(local_44);
  if ((local_44 != (int *)0x0) && (iVar19 = (**(code **)(*local_44 + 8))(local_44), iVar19 != 0)) {
    (**(code **)(*local_44 + 4))(local_44);
  }
  if (local_50 != (int *)0x0) {
    (**(code **)(*local_50 + 0xc))(local_50);
  }
  (**(code **)(*(int *)(param_1 + 0x1c) + 0x1c))((int *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x24) = local_54;
  *(int **)(param_1 + 0x28) = local_50;
  if (local_64 != (int *)0x0) {
    (**(code **)(*local_64 + 0xc))(local_64);
  }
  (**(code **)(*(int *)(param_1 + 0x30) + 0x1c))((int *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x38) = local_68;
  *(int **)(param_1 + 0x3c) = local_64;
  if (local_78 != (int *)0x0) {
    (**(code **)(*local_78 + 0xc))(local_78);
  }
  (**(code **)(*(int *)(param_1 + 0x44) + 0x1c))((int *)(param_1 + 0x44));
  *(undefined4 *)(param_1 + 0x4c) = local_7c;
  *(int **)(param_1 + 0x50) = local_78;
  if (local_90 != (int *)0x0) {
    (**(code **)(*local_90 + 0xc))(local_90);
  }
  (**(code **)(*(int *)(param_1 + 0x58) + 0x1c))((int *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x60) = local_94;
  *(int **)(param_1 + 100) = local_90;
  if (local_a4 != (int *)0x0) {
    (**(code **)(*local_a4 + 0xc))(local_a4);
  }
  (**(code **)(*(int *)(param_1 + 0x6c) + 0x1c))((int *)(param_1 + 0x6c));
  *(undefined4 *)(param_1 + 0x74) = local_a8;
  *(int **)(param_1 + 0x78) = local_a4;
  if (local_b8 != (int *)0x0) {
    (**(code **)(*local_b8 + 0xc))(local_b8);
  }
  (**(code **)(*(int *)(param_1 + 0x80) + 0x1c))((int *)(param_1 + 0x80));
  *(undefined4 *)(param_1 + 0x88) = local_bc;
  *(int **)(param_1 + 0x8c) = local_b8;
  if (local_cc != (int *)0x0) {
    (**(code **)(*local_cc + 0xc))(local_cc);
  }
  (**(code **)(*(int *)(param_1 + 0x94) + 0x1c))((int *)(param_1 + 0x94));
  *(undefined4 *)(param_1 + 0x9c) = local_d0;
  *(int **)(param_1 + 0xa0) = local_cc;
  if (local_e0 != (int *)0x0) {
    (**(code **)(*local_e0 + 0xc))(local_e0);
  }
  (**(code **)(*(int *)(param_1 + 0xa8) + 0x1c))((int *)(param_1 + 0xa8));
  *(undefined4 *)(param_1 + 0xb0) = local_e4;
  *(int **)(param_1 + 0xb4) = local_e0;
  if (local_f4 != (int *)0x0) {
    (**(code **)(*local_f4 + 0xc))(local_f4);
  }
  (**(code **)(*(int *)(param_1 + 0xbc) + 0x1c))((int *)(param_1 + 0xbc));
  *(undefined4 *)(param_1 + 0xc4) = local_f8;
  *(int **)(param_1 + 200) = local_f4;
  if (local_108 != (int *)0x0) {
    (**(code **)(*local_108 + 0xc))(local_108);
  }
  (**(code **)(*(int *)(param_1 + 0xd0) + 0x1c))((int *)(param_1 + 0xd0));
  *(undefined4 *)(param_1 + 0xd8) = local_10c;
  *(int **)(param_1 + 0xdc) = local_108;
  if (local_11c != (int *)0x0) {
    (**(code **)(*local_11c + 0xc))(local_11c);
  }
  (**(code **)(*(int *)(param_1 + 0xe4) + 0x1c))((int *)(param_1 + 0xe4));
  *(undefined4 *)(param_1 + 0xec) = local_120;
  *(int **)(param_1 + 0xf0) = local_11c;
  if (local_130 != (int *)0x0) {
    (**(code **)(*local_130 + 0xc))(local_130);
  }
  (**(code **)(*(int *)(param_1 + 0xf8) + 0x1c))((int *)(param_1 + 0xf8));
  *(undefined4 *)(param_1 + 0x100) = local_134;
  *(int **)(param_1 + 0x104) = local_130;
  if (local_144 != (int *)0x0) {
    (**(code **)(*local_144 + 0xc))(local_144);
  }
  (**(code **)(*(int *)(param_1 + 0x10c) + 0x1c))((int *)(param_1 + 0x10c));
  *(undefined4 *)(param_1 + 0x114) = local_148;
  *(int **)(param_1 + 0x118) = local_144;
  if (local_158 != (int *)0x0) {
    (**(code **)(*local_158 + 0xc))(local_158);
  }
  (**(code **)(*(int *)(param_1 + 0x120) + 0x1c))((int *)(param_1 + 0x120));
  *(undefined4 *)(param_1 + 0x128) = local_15c;
  *(int **)(param_1 + 300) = local_158;
  if (local_16c != (int *)0x0) {
    (**(code **)(*local_16c + 0xc))(local_16c);
  }
  (**(code **)(*(int *)(param_1 + 0x134) + 0x1c))((int *)(param_1 + 0x134));
  iVar19 = local_184;
  *(undefined4 *)(param_1 + 0x13c) = local_170;
  *(int **)(param_1 + 0x140) = local_16c;
  if (local_180 != (int *)0x0) {
    (**(code **)(*local_180 + 0xc))(local_180);
  }
  (**(code **)(*(int *)(param_1 + 0x148) + 0x1c))((int *)(param_1 + 0x148));
  *(int *)(param_1 + 0x150) = iVar19;
  *(int **)(param_1 + 0x154) = local_180;
  if (local_194 != (int *)0x0) {
    (**(code **)(*local_194 + 0xc))(local_194);
  }
  (**(code **)(*(int *)(param_1 + 0x15c) + 0x1c))((int *)(param_1 + 0x15c));
  *(undefined4 *)(param_1 + 0x164) = local_198;
  *(int **)(param_1 + 0x168) = local_194;
  if (local_1a8 != (int *)0x0) {
    (**(code **)(*local_1a8 + 0xc))(local_1a8);
  }
  (**(code **)(*(int *)(param_1 + 0x170) + 0x1c))((int *)(param_1 + 0x170));
  *(undefined4 *)(param_1 + 0x178) = local_1ac;
  *(int **)(param_1 + 0x17c) = local_1a8;
  if (local_1bc != (int *)0x0) {
    (**(code **)(*local_1bc + 0xc))(local_1bc);
  }
  (**(code **)(*(int *)(param_1 + 0x184) + 0x1c))((int *)(param_1 + 0x184));
  *(undefined4 *)(param_1 + 0x18c) = local_1c0;
  *(int **)(param_1 + 400) = local_1bc;
  if (local_1d0 != (int *)0x0) {
    (**(code **)(*local_1d0 + 0xc))(local_1d0);
  }
  (**(code **)(*(int *)(param_1 + 0x198) + 0x1c))((int *)(param_1 + 0x198));
  *(undefined4 *)(param_1 + 0x1a0) = local_1d4;
  *(int **)(param_1 + 0x1a4) = local_1d0;
  if (local_1e4 != (int *)0x0) {
    (**(code **)(*local_1e4 + 0xc))(local_1e4);
  }
  (**(code **)(*(int *)(param_1 + 0x1ac) + 0x1c))((int *)(param_1 + 0x1ac));
  *(undefined4 *)(param_1 + 0x1b4) = local_1e8;
  *(int **)(param_1 + 0x1b8) = local_1e4;
  *(int *)(param_1 + 0x1c0) = local_1f4;
  if (local_1fc != (int *)0x0) {
    (**(code **)(*local_1fc + 0xc))(local_1fc);
  }
  (**(code **)(*(int *)(param_1 + 0x1c4) + 0x1c))((int *)(param_1 + 0x1c4));
  *(undefined4 *)(param_1 + 0x1cc) = local_200;
  *(int **)(param_1 + 0x1d0) = local_1fc;
  if (local_210 != (int *)0x0) {
    (**(code **)(*local_210 + 0xc))(local_210);
  }
  (**(code **)(*(int *)(param_1 + 0x1d8) + 0x1c))((int *)(param_1 + 0x1d8));
  *(undefined4 *)(param_1 + 0x1e0) = local_214;
  *(int **)(param_1 + 0x1e4) = local_210;
  if (local_224 != (int *)0x0) {
    (**(code **)(*local_224 + 0xc))(local_224);
  }
  (**(code **)(*(int *)(param_1 + 0x1ec) + 0x1c))((int *)(param_1 + 0x1ec));
  *(undefined4 *)(param_1 + 500) = local_228;
  *(int **)(param_1 + 0x1f8) = local_224;
  if (local_238 != (int *)0x0) {
    (**(code **)(*local_238 + 0xc))(local_238);
  }
  (**(code **)(*(int *)(param_1 + 0x200) + 0x1c))((int *)(param_1 + 0x200));
  *(undefined4 *)(param_1 + 0x208) = local_23c;
  *(int **)(param_1 + 0x20c) = local_238;
  if (local_24c != (int *)0x0) {
    (**(code **)(*local_24c + 0xc))(local_24c);
  }
  (**(code **)(*(int *)(param_1 + 0x214) + 0x1c))((int *)(param_1 + 0x214));
  *(undefined4 *)(param_1 + 0x21c) = local_250;
  *(int **)(param_1 + 0x220) = local_24c;
  if (local_260 != (int *)0x0) {
    (**(code **)(*local_260 + 0xc))(local_260);
  }
  (**(code **)(*(int *)(param_1 + 0x228) + 0x1c))((int *)(param_1 + 0x228));
  *(undefined4 *)(param_1 + 0x230) = local_264;
  *(int **)(param_1 + 0x234) = local_260;
  if (local_274 != (int *)0x0) {
    (**(code **)(*local_274 + 0xc))(local_274);
  }
  (**(code **)(*(int *)(param_1 + 0x23c) + 0x1c))((int *)(param_1 + 0x23c));
  *(undefined4 *)(param_1 + 0x244) = local_278;
  *(int **)(param_1 + 0x248) = local_274;
  if (local_288 != (int *)0x0) {
    (**(code **)(*local_288 + 0xc))(local_288);
  }
  (**(code **)(*(int *)(param_1 + 0x250) + 0x1c))((int *)(param_1 + 0x250));
  *(undefined4 *)(param_1 + 600) = local_28c;
  *(int **)(param_1 + 0x25c) = local_288;
  if (local_29c != (int *)0x0) {
    (**(code **)(*local_29c + 0xc))(local_29c);
  }
  (**(code **)(*(int *)(param_1 + 0x264) + 0x1c))((int *)(param_1 + 0x264));
  *(undefined4 *)(param_1 + 0x26c) = local_2a0;
  *(int **)(param_1 + 0x270) = local_29c;
  *(int *)(param_1 + 0x278) = local_2ac;
  if (local_2b4 != (int *)0x0) {
    (**(code **)(*local_2b4 + 0xc))(local_2b4);
  }
  (**(code **)(*(int *)(param_1 + 0x27c) + 0x1c))((int *)(param_1 + 0x27c));
  *(undefined4 *)(param_1 + 0x284) = local_2b8;
  *(int **)(param_1 + 0x288) = local_2b4;
  if (local_2c8 != (int *)0x0) {
    (**(code **)(*local_2c8 + 0xc))(local_2c8);
  }
  (**(code **)(*(int *)(param_1 + 0x290) + 0x1c))((int *)(param_1 + 0x290));
  *(undefined4 *)(param_1 + 0x298) = local_2cc;
  *(int **)(param_1 + 0x29c) = local_2c8;
  if (local_2dc != (int *)0x0) {
    (**(code **)(*local_2dc + 0xc))(local_2dc);
  }
  (**(code **)(*(int *)(param_1 + 0x2a4) + 0x1c))((int *)(param_1 + 0x2a4));
  *(undefined4 *)(param_1 + 0x2ac) = local_2e0;
  *(int **)(param_1 + 0x2b0) = local_2dc;
  if (local_2f0 != (int *)0x0) {
    (**(code **)(*local_2f0 + 0xc))(local_2f0);
  }
  (**(code **)(*(int *)(param_1 + 0x2b8) + 0x1c))((int *)(param_1 + 0x2b8));
  *(undefined4 *)(param_1 + 0x2c0) = local_2f4;
  *(int **)(param_1 + 0x2c4) = local_2f0;
  if (local_304 != (int *)0x0) {
    (**(code **)(*local_304 + 0xc))(local_304);
  }
  (**(code **)(*(int *)(param_1 + 0x2cc) + 0x1c))((int *)(param_1 + 0x2cc));
  *(undefined4 *)(param_1 + 0x2d4) = local_308;
  *(int **)(param_1 + 0x2d8) = local_304;
  if (local_318 != (int *)0x0) {
    (**(code **)(*local_318 + 0xc))(local_318);
  }
  (**(code **)(*(int *)(param_1 + 0x2e0) + 0x1c))((int *)(param_1 + 0x2e0));
  *(undefined4 *)(param_1 + 0x2e8) = local_31c;
  *(int **)(param_1 + 0x2ec) = local_318;
  if (local_32c != (int *)0x0) {
    (**(code **)(*local_32c + 0xc))(local_32c);
  }
  (**(code **)(*(int *)(param_1 + 0x2f4) + 0x1c))((int *)(param_1 + 0x2f4));
  *(undefined4 *)(param_1 + 0x2fc) = local_330;
  *(int **)(param_1 + 0x300) = local_32c;
  if (local_340 != (int *)0x0) {
    (**(code **)(*local_340 + 0xc))(local_340);
  }
  (**(code **)(*(int *)(param_1 + 0x308) + 0x1c))((int *)(param_1 + 0x308));
  *(undefined4 *)(param_1 + 0x310) = local_344;
  *(int **)(param_1 + 0x314) = local_340;
  if (local_354 != (int *)0x0) {
    (**(code **)(*local_354 + 0xc))(local_354);
  }
  (**(code **)(*(int *)(param_1 + 0x31c) + 0x1c))((int *)(param_1 + 0x31c));
  *(undefined4 *)(param_1 + 0x324) = local_358;
  *(int **)(param_1 + 0x328) = local_354;
  if (local_368 != (int *)0x0) {
    (**(code **)(*local_368 + 0xc))(local_368);
  }
  (**(code **)(*(int *)(param_1 + 0x330) + 0x1c))((int *)(param_1 + 0x330));
  *(undefined4 *)(param_1 + 0x338) = local_36c;
  *(int **)(param_1 + 0x33c) = local_368;
  if (local_37c != (int *)0x0) {
    (**(code **)(*local_37c + 0xc))(local_37c);
  }
  (**(code **)(*(int *)(param_1 + 0x344) + 0x1c))((int *)(param_1 + 0x344));
  *(undefined4 *)(param_1 + 0x34c) = local_380;
  *(int **)(param_1 + 0x350) = local_37c;
  if (local_390 != (int *)0x0) {
    (**(code **)(*local_390 + 0xc))(local_390);
  }
  (**(code **)(*(int *)(param_1 + 0x358) + 0x1c))((int *)(param_1 + 0x358));
  *(undefined4 *)(param_1 + 0x360) = local_394;
  *(int **)(param_1 + 0x364) = local_390;
  if (local_3a4 != (int *)0x0) {
    (**(code **)(*local_3a4 + 0xc))(local_3a4);
  }
  (**(code **)(*(int *)(param_1 + 0x36c) + 0x1c))((int *)(param_1 + 0x36c));
  *(undefined4 *)(param_1 + 0x374) = local_3a8;
  *(int **)(param_1 + 0x378) = local_3a4;
  *(undefined4 *)(param_1 + 0x380) = local_3b4;
  if (local_3bc != (int *)0x0) {
    (**(code **)(*local_3bc + 0xc))(local_3bc);
  }
  (**(code **)(*(int *)(param_1 + 900) + 0x1c))((int *)(param_1 + 900));
  *(undefined4 *)(param_1 + 0x38c) = local_3c0;
  *(int **)(param_1 + 0x390) = local_3bc;
  if (local_3d0 != (int *)0x0) {
    (**(code **)(*local_3d0 + 0xc))(local_3d0);
  }
  (**(code **)(*(int *)(param_1 + 0x398) + 0x1c))((int *)(param_1 + 0x398));
  *(undefined4 *)(param_1 + 0x3a0) = local_3d4;
  *(int **)(param_1 + 0x3a4) = local_3d0;
  if (local_3e4 != (int *)0x0) {
    (**(code **)(*local_3e4 + 0xc))(local_3e4);
  }
  (**(code **)(*(int *)(param_1 + 0x3ac) + 0x1c))((int *)(param_1 + 0x3ac));
  *(undefined4 *)(param_1 + 0x3b4) = local_3e8;
  *(int **)(param_1 + 0x3b8) = local_3e4;
  if (local_3f8 != (int *)0x0) {
    (**(code **)(*local_3f8 + 0xc))(local_3f8);
  }
  (**(code **)(*(int *)(param_1 + 0x3c0) + 0x1c))((int *)(param_1 + 0x3c0));
  *(undefined4 *)(param_1 + 0x3c8) = local_3fc;
  *(int **)(param_1 + 0x3cc) = local_3f8;
  if (local_40c != (int *)0x0) {
    (**(code **)(*local_40c + 0xc))(local_40c);
  }
  (**(code **)(*(int *)(param_1 + 0x3d4) + 0x1c))((int *)(param_1 + 0x3d4));
  *(undefined4 *)(param_1 + 0x3dc) = local_410;
  *(int **)(param_1 + 0x3e0) = local_40c;
  if (local_420 != (int *)0x0) {
    (**(code **)(*local_420 + 0xc))(local_420);
  }
  (**(code **)(*(int *)(param_1 + 1000) + 0x1c))((int *)(param_1 + 1000));
  *(undefined4 *)(param_1 + 0x3f0) = local_424;
  *(int **)(param_1 + 0x3f4) = local_420;
  if (local_434 != (int *)0x0) {
    (**(code **)(*local_434 + 0xc))(local_434);
  }
  (**(code **)(*(int *)(param_1 + 0x3fc) + 0x1c))((int *)(param_1 + 0x3fc));
  *(undefined4 *)(param_1 + 0x404) = local_438;
  *(int **)(param_1 + 0x408) = local_434;
  *(int *)(param_1 + 0x410) = local_444;
  if (local_44c != (int *)0x0) {
    (**(code **)(*local_44c + 0xc))(local_44c);
  }
  (**(code **)(*(int *)(param_1 + 0x414) + 0x1c))((int *)(param_1 + 0x414));
  *(undefined4 *)(param_1 + 0x41c) = local_450;
  *(int **)(param_1 + 0x420) = local_44c;
  if (local_460 != (int *)0x0) {
    (**(code **)(*local_460 + 0xc))(local_460);
  }
  (**(code **)(*(int *)(param_1 + 0x428) + 0x1c))((int *)(param_1 + 0x428));
  *(undefined4 *)(param_1 + 0x430) = local_464;
  *(int **)(param_1 + 0x434) = local_460;
  if (local_474 != (int *)0x0) {
    (**(code **)(*local_474 + 0xc))(local_474);
  }
  (**(code **)(*(int *)(param_1 + 0x43c) + 0x1c))((int *)(param_1 + 0x43c));
  *(undefined4 *)(param_1 + 0x444) = local_478;
  *(int **)(param_1 + 0x448) = local_474;
  if (local_488 != (int *)0x0) {
    (**(code **)(*local_488 + 0xc))(local_488);
  }
  (**(code **)(*(int *)(param_1 + 0x450) + 0x1c))((int *)(param_1 + 0x450));
  *(undefined4 *)(param_1 + 0x458) = local_48c;
  *(int **)(param_1 + 0x45c) = local_488;
  if (local_49c != (int *)0x0) {
    (**(code **)(*local_49c + 0xc))(local_49c);
  }
  (**(code **)(*(int *)(param_1 + 0x464) + 0x1c))((int *)(param_1 + 0x464));
  *(undefined4 *)(param_1 + 0x46c) = local_4a0;
  *(int **)(param_1 + 0x470) = local_49c;
  if (local_4b0 != (int *)0x0) {
    (**(code **)(*local_4b0 + 0xc))(local_4b0);
  }
  (**(code **)(*(int *)(param_1 + 0x478) + 0x1c))((int *)(param_1 + 0x478));
  *(undefined4 *)(param_1 + 0x480) = local_4b4;
  *(int **)(param_1 + 0x484) = local_4b0;
  if (local_4c4 != (int *)0x0) {
    (**(code **)(*local_4c4 + 0xc))(local_4c4);
  }
  (**(code **)(*(int *)(param_1 + 0x48c) + 0x1c))((int *)(param_1 + 0x48c));
  *(undefined4 *)(param_1 + 0x494) = local_4c8;
  *(int **)(param_1 + 0x498) = local_4c4;
  if (local_4d8 != (int *)0x0) {
    (**(code **)(*local_4d8 + 0xc))(local_4d8);
  }
  (**(code **)(*(int *)(param_1 + 0x4a0) + 0x1c))((int *)(param_1 + 0x4a0));
  *(undefined4 *)(param_1 + 0x4a8) = local_4dc;
  *(int **)(param_1 + 0x4ac) = local_4d8;
  if (local_4ec != (int *)0x0) {
    (**(code **)(*local_4ec + 0xc))(local_4ec);
  }
  (**(code **)(*(int *)(param_1 + 0x4b4) + 0x1c))((int *)(param_1 + 0x4b4));
  *(undefined4 *)(param_1 + 0x4bc) = local_4f0;
  *(int **)(param_1 + 0x4c0) = local_4ec;
  if (local_500 != (int *)0x0) {
    (**(code **)(*local_500 + 0xc))(local_500);
  }
  (**(code **)(*(int *)(param_1 + 0x4c8) + 0x1c))((int *)(param_1 + 0x4c8));
  *(undefined4 *)(param_1 + 0x4d0) = local_504;
  *(int **)(param_1 + 0x4d4) = local_500;
  if (local_514 != (int *)0x0) {
    (**(code **)(*local_514 + 0xc))(local_514);
  }
  (**(code **)(*(int *)(param_1 + 0x4dc) + 0x1c))((int *)(param_1 + 0x4dc));
  *(undefined4 *)(param_1 + 0x4e4) = local_518;
  *(int **)(param_1 + 0x4e8) = local_514;
  if (local_528 != (int *)0x0) {
    (**(code **)(*local_528 + 0xc))(local_528);
  }
  (**(code **)(*(int *)(param_1 + 0x4f0) + 0x1c))((int *)(param_1 + 0x4f0));
  *(undefined4 *)(param_1 + 0x4f8) = local_52c;
  *(int **)(param_1 + 0x4fc) = local_528;
  *(int *)(param_1 + 0x504) = local_538;
  if (local_540 != (int *)0x0) {
    (**(code **)(*local_540 + 0xc))(local_540);
  }
  (**(code **)(*(int *)(param_1 + 0x508) + 0x1c))((int *)(param_1 + 0x508));
  *(undefined4 *)(param_1 + 0x510) = local_544;
  *(int **)(param_1 + 0x514) = local_540;
  if (local_554 != (int *)0x0) {
    (**(code **)(*local_554 + 0xc))(local_554);
  }
  (**(code **)(*(int *)(param_1 + 0x51c) + 0x1c))((int *)(param_1 + 0x51c));
  *(undefined4 *)(param_1 + 0x524) = local_558;
  *(int **)(param_1 + 0x528) = local_554;
  if (local_568 != (int *)0x0) {
    (**(code **)(*local_568 + 0xc))(local_568);
  }
  (**(code **)(*(int *)(param_1 + 0x530) + 0x1c))((int *)(param_1 + 0x530));
  *(undefined4 *)(param_1 + 0x538) = local_56c;
  *(int **)(param_1 + 0x53c) = local_568;
  if (local_57c != (int *)0x0) {
    (**(code **)(*local_57c + 0xc))(local_57c);
  }
  (**(code **)(*(int *)(param_1 + 0x544) + 0x1c))((int *)(param_1 + 0x544));
  *(undefined4 *)(param_1 + 0x54c) = local_580;
  *(int **)(param_1 + 0x550) = local_57c;
  if (local_5a4 != (int *)0x0) {
    (**(code **)(*local_5a4 + 0xc))(local_5a4);
  }
  (**(code **)(*(int *)(param_1 + 0x558) + 0x1c))((int *)(param_1 + 0x558));
  *(undefined4 *)(param_1 + 0x560) = local_5a8;
  *(int **)(param_1 + 0x564) = local_5a4;
  if (local_5b8 != (int *)0x0) {
    (**(code **)(*local_5b8 + 0xc))(local_5b8);
  }
  (**(code **)(*(int *)(param_1 + 0x56c) + 0x1c))((int *)(param_1 + 0x56c));
  *(undefined4 *)(param_1 + 0x574) = local_5bc;
  *(int **)(param_1 + 0x578) = local_5b8;
  if (local_5cc != (int *)0x0) {
    (**(code **)(*local_5cc + 0xc))(local_5cc);
  }
  (**(code **)(*(int *)(param_1 + 0x580) + 0x1c))((int *)(param_1 + 0x580));
  *(undefined4 *)(param_1 + 0x588) = local_5d0;
  *(int **)(param_1 + 0x58c) = local_5cc;
  if (local_5e0 != (int *)0x0) {
    (**(code **)(*local_5e0 + 0xc))(local_5e0);
  }
  (**(code **)(*(int *)(param_1 + 0x594) + 0x1c))((int *)(param_1 + 0x594));
  *(undefined4 *)(param_1 + 0x59c) = local_5e4;
  *(int **)(param_1 + 0x5a0) = local_5e0;
  if (local_5f4 != (int *)0x0) {
    (**(code **)(*local_5f4 + 0xc))(local_5f4);
  }
  (**(code **)(*(int *)(param_1 + 0x5a8) + 0x1c))((int *)(param_1 + 0x5a8));
  *(undefined4 *)(param_1 + 0x5b0) = local_5f8;
  *(int **)(param_1 + 0x5b4) = local_5f4;
  if (local_608 != (int *)0x0) {
    (**(code **)(*local_608 + 0xc))(local_608);
  }
  (**(code **)(*(int *)(param_1 + 0x5bc) + 0x1c))((int *)(param_1 + 0x5bc));
  *(undefined4 *)(param_1 + 0x5c4) = local_60c;
  *(int **)(param_1 + 0x5c8) = local_608;
  if (local_61c != (int *)0x0) {
    (**(code **)(*local_61c + 0xc))(local_61c);
  }
  (**(code **)(*(int *)(param_1 + 0x5d0) + 0x1c))((int *)(param_1 + 0x5d0));
  *(undefined4 *)(param_1 + 0x5d8) = local_620;
  *(int **)(param_1 + 0x5dc) = local_61c;
  if (local_630 != (int *)0x0) {
    (**(code **)(*local_630 + 0xc))(local_630);
  }
  (**(code **)(*(int *)(param_1 + 0x5e4) + 0x1c))((int *)(param_1 + 0x5e4));
  *(undefined4 *)(param_1 + 0x5ec) = local_634;
  *(int **)(param_1 + 0x5f0) = local_630;
  if (local_644 != (int *)0x0) {
    (**(code **)(*local_644 + 0xc))(local_644);
  }
  (**(code **)(*(int *)(param_1 + 0x5f8) + 0x1c))((int *)(param_1 + 0x5f8));
  *(undefined4 *)(param_1 + 0x600) = local_648;
  *(int **)(param_1 + 0x604) = local_644;
  if (local_590 != (int *)0x0) {
    (**(code **)(*local_590 + 0xc))(local_590);
  }
  (**(code **)(*(int *)(param_1 + 0x60c) + 0x1c))((int *)(param_1 + 0x60c));
  *(undefined4 *)(param_1 + 0x614) = local_594;
  *(int **)(param_1 + 0x618) = local_590;
  if (local_658 != (int *)0x0) {
    (**(code **)(*local_658 + 0xc))(local_658);
  }
  (**(code **)(*(int *)(param_1 + 0x620) + 0x1c))((int *)(param_1 + 0x620));
  *(undefined4 *)(param_1 + 0x628) = local_65c;
  *(int **)(param_1 + 0x62c) = local_658;
  if (local_66c != (int *)0x0) {
    (**(code **)(*local_66c + 0xc))(local_66c);
  }
  (**(code **)(*(int *)(param_1 + 0x634) + 0x1c))((int *)(param_1 + 0x634));
  *(undefined4 *)(param_1 + 0x63c) = local_670;
  *(int **)(param_1 + 0x640) = local_66c;
  if (local_680 != (int *)0x0) {
    (**(code **)(*local_680 + 0xc))(local_680);
  }
  (**(code **)(*(int *)(param_1 + 0x648) + 0x1c))((int *)(param_1 + 0x648));
  *(undefined4 *)(param_1 + 0x650) = local_684;
  *(int **)(param_1 + 0x654) = local_680;
  if (local_694 != (int *)0x0) {
    (**(code **)(*local_694 + 0xc))(local_694);
  }
  (**(code **)(*(int *)(param_1 + 0x65c) + 0x1c))((int *)(param_1 + 0x65c));
  *(undefined4 *)(param_1 + 0x664) = local_698;
  *(int **)(param_1 + 0x668) = local_694;
  if (local_6a8 != (int *)0x0) {
    (**(code **)(*local_6a8 + 0xc))(local_6a8);
  }
  (**(code **)(*(int *)(param_1 + 0x670) + 0x1c))((int *)(param_1 + 0x670));
  *(undefined4 *)(param_1 + 0x678) = local_6ac;
  *(int **)(param_1 + 0x67c) = local_6a8;
  if (local_6bc != (int *)0x0) {
    (**(code **)(*local_6bc + 0xc))(local_6bc);
  }
  (**(code **)(*(int *)(param_1 + 0x684) + 0x1c))((int *)(param_1 + 0x684));
  *(undefined4 *)(param_1 + 0x68c) = local_6c0;
  *(int **)(param_1 + 0x690) = local_6bc;
  if (local_6d0 != (int *)0x0) {
    (**(code **)(*local_6d0 + 0xc))(local_6d0);
  }
  (**(code **)(*(int *)(param_1 + 0x698) + 0x1c))((int *)(param_1 + 0x698));
  *(undefined4 *)(param_1 + 0x6a0) = local_6d4;
  *(int **)(param_1 + 0x6a4) = local_6d0;
  if (local_6e4 != (int *)0x0) {
    (**(code **)(*local_6e4 + 0xc))(local_6e4);
  }
  (**(code **)(*(int *)(param_1 + 0x6ac) + 0x1c))((int *)(param_1 + 0x6ac));
  *(undefined4 *)(param_1 + 0x6b4) = local_6e8;
  *(int **)(param_1 + 0x6b8) = local_6e4;
  if (local_6f8 != (int *)0x0) {
    (**(code **)(*local_6f8 + 0xc))(local_6f8);
  }
  (**(code **)(*(int *)(param_1 + 0x6c0) + 0x1c))((int *)(param_1 + 0x6c0));
  *(undefined4 *)(param_1 + 0x6c8) = local_6fc;
  *(int **)(param_1 + 0x6cc) = local_6f8;
  if (local_70c != (int *)0x0) {
    (**(code **)(*local_70c + 0xc))(local_70c);
  }
  (**(code **)(*(int *)(param_1 + 0x6d4) + 0x1c))((int *)(param_1 + 0x6d4));
  *(undefined4 *)(param_1 + 0x6dc) = local_710;
  *(int **)(param_1 + 0x6e0) = local_70c;
  if (local_720 != (int *)0x0) {
    (**(code **)(*local_720 + 0xc))(local_720);
  }
  (**(code **)(*(int *)(param_1 + 0x6e8) + 0x1c))((int *)(param_1 + 0x6e8));
  *(undefined4 *)(param_1 + 0x6f0) = local_724;
  *(int **)(param_1 + 0x6f4) = local_720;
  if (local_734 != (int *)0x0) {
    (**(code **)(*local_734 + 0xc))(local_734);
  }
  (**(code **)(*(int *)(param_1 + 0x6fc) + 0x1c))((int *)(param_1 + 0x6fc));
  *(undefined4 *)(param_1 + 0x704) = local_738;
  *(int **)(param_1 + 0x708) = local_734;
  if (local_748 != (int *)0x0) {
    (**(code **)(*local_748 + 0xc))(local_748);
  }
  (**(code **)(*(int *)(param_1 + 0x710) + 0x1c))((int *)(param_1 + 0x710));
  *(undefined4 *)(param_1 + 0x718) = local_74c;
  *(int **)(param_1 + 0x71c) = local_748;
  if (local_75c != (int *)0x0) {
    (**(code **)(*local_75c + 0xc))(local_75c);
  }
  (**(code **)(*(int *)(param_1 + 0x724) + 0x1c))((int *)(param_1 + 0x724));
  *(undefined4 *)(param_1 + 0x72c) = local_760;
  *(int **)(param_1 + 0x730) = local_75c;
  if (local_770 != (int *)0x0) {
    (**(code **)(*local_770 + 0xc))(local_770);
  }
  (**(code **)(*(int *)(param_1 + 0x738) + 0x1c))((int *)(param_1 + 0x738));
  *(undefined4 *)(param_1 + 0x740) = local_774;
  *(int **)(param_1 + 0x744) = local_770;
  if (local_784 != (int *)0x0) {
    (**(code **)(*local_784 + 0xc))(local_784);
  }
  (**(code **)(*(int *)(param_1 + 0x74c) + 0x1c))((int *)(param_1 + 0x74c));
  *(undefined4 *)(param_1 + 0x754) = local_788;
  *(int **)(param_1 + 0x758) = local_784;
  if (local_798 != (int *)0x0) {
    (**(code **)(*local_798 + 0xc))(local_798);
  }
  (**(code **)(*(int *)(param_1 + 0x760) + 0x1c))((int *)(param_1 + 0x760));
  *(undefined4 *)(param_1 + 0x768) = local_79c;
  *(int **)(param_1 + 0x76c) = local_798;
  if (local_7ac != (int *)0x0) {
    (**(code **)(*local_7ac + 0xc))(local_7ac);
  }
  (**(code **)(*(int *)(param_1 + 0x774) + 0x1c))((int *)(param_1 + 0x774));
  *(undefined4 *)(param_1 + 0x77c) = local_7b0;
  *(int **)(param_1 + 0x780) = local_7ac;
  FUN_4a169024(auStack_7b8);
  FUN_4a16c1a0(auStack_7a4);
  FUN_4a16c1a0(auStack_790);
  FUN_4a16c1a0(auStack_77c);
  FUN_4a16c1a0(auStack_768);
  FUN_4a16c1a0(auStack_754);
  FUN_4a16b6c0(auStack_740);
  FUN_4a16c1a0(auStack_72c);
  FUN_4a16b6c0(auStack_718);
  FUN_4a16c1a0(auStack_704);
  FUN_4a16b6c0(auStack_6f0);
  FUN_4a16c1a0(auStack_6dc);
  FUN_4a16b6c0(auStack_6c8);
  FUN_4a16c1a0(auStack_6b4);
  FUN_4a16b6c0(auStack_6a0);
  FUN_4a16b6c0(auStack_68c);
  FUN_4a16b6c0(auStack_678);
  FUN_4a16c1a0(auStack_664);
  FUN_4a169024(auStack_650);
  FUN_4a168b90(auStack_63c);
  FUN_4a168b90(auStack_628);
  FUN_4a168b90(auStack_614);
  FUN_4a168b90(auStack_600);
  FUN_4a168e44(auStack_5ec);
  FUN_4a168e44(auStack_5d8);
  FUN_4a168b90(auStack_5c4);
  FUN_4a168b90(auStack_5b0);
  FUN_4a168b90(auStack_59c);
  FUN_4a16c1a0(auStack_588);
  FUN_4a16bef4(auStack_574);
  FUN_4a16c1a0(auStack_560);
  FUN_4a16c1a0(auStack_54c);
  FUN_4a16c1a0(auStack_534);
  FUN_4a168b90(auStack_520);
  FUN_4a168b90(auStack_50c);
  FUN_4a16b6c0(auStack_4f8);
  FUN_4a16b6c0(auStack_4e4);
  FUN_4a16b6c0(auStack_4d0);
  FUN_4a16b6c0(auStack_4bc);
  FUN_4a16c1a0(auStack_4a8);
  FUN_4a168e44(auStack_494);
  FUN_4a16b6c0(auStack_480);
  FUN_4a16c1a0(auStack_46c);
  FUN_4a16c1a0(auStack_458);
  FUN_4a169024(auStack_440);
  FUN_4a168b90(auStack_42c);
  FUN_4a168b90(auStack_418);
  FUN_4a16c1a0(auStack_404);
  FUN_4a16c1a0(auStack_3f0);
  FUN_4a16b6c0(auStack_3dc);
  FUN_4a16c1a0(auStack_3c8);
  FUN_4a16c1a0(auStack_3b0);
  FUN_4a16c1a0(auStack_39c);
  FUN_4a168e44(auStack_388);
  FUN_4a168b90(auStack_374);
  FUN_4a168b90(auStack_360);
  FUN_4a168b90(auStack_34c);
  FUN_4a168e44(auStack_338);
  FUN_4a168b90(auStack_324);
  FUN_4a16b6c0(auStack_310);
  FUN_4a16b6c0(auStack_2fc);
  FUN_4a16b6c0(auStack_2e8);
  FUN_4a16bef4(auStack_2d4);
  FUN_4a16c1a0(auStack_2c0);
  FUN_4a16b6c0(auStack_2a8);
  FUN_4a16c1a0(auStack_294);
  FUN_4a16c1a0(auStack_280);
  FUN_4a16c1a0(auStack_26c);
  FUN_4a16bef4(auStack_258);
  FUN_4a16c1a0(auStack_244);
  FUN_4a16bef4(auStack_230);
  FUN_4a16bef4(auStack_21c);
  FUN_4a16c1a0(auStack_208);
  FUN_4a16c1a0(auStack_1f0);
  FUN_4a16c1a0(auStack_1dc);
  FUN_4a16c1a0(auStack_1c8);
  FUN_4a16c1a0(auStack_1b4);
  FUN_4a16c1a0(auStack_1a0);
  local_18c[0] = PTR_PTR_4a0e3900;
  iVar19 = FUN_4a0bcc84();
  if (iVar19 != 0) {
    iVar11 = 0;
    if (0 < local_184) {
      do {
        (*(code *)**(undefined4 **)(iVar19 + iVar11 * 0x14))();
        iVar11 = iVar11 + 1;
      } while (iVar11 < local_184);
      if (iVar19 == 0) goto LAB_4a0e3844;
    }
    FUN_4a14f21c(iVar19);
  }
LAB_4a0e3844:
  FUN_4a0c6bf4(local_18c);
  FUN_4a169024(auStack_178);
  FUN_4a169024(auStack_164);
  FUN_4a169024(auStack_150);
  FUN_4a169024(auStack_13c);
  FUN_4a169024(auStack_128);
  FUN_4a16c1a0(auStack_114);
  FUN_4a16c1a0(auStack_100);
  FUN_4a16c1a0(auStack_ec);
  FUN_4a16b6c0(auStack_d8);
  FUN_4a16c1a0(auStack_c4);
  FUN_4a16c1a0(auStack_b0);
  FUN_4a16c1a0(auStack_9c);
  FUN_4a169024(auStack_84);
  FUN_4a168e44(auStack_70);
  FUN_4a16c1a0(auStack_5c);
  return;
}



// Address: 4a0e3904

void FUN_4a0e3904(int param_1)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  undefined1 auStack_54 [20];
  undefined1 auStack_40 [20];
  undefined1 auStack_2c [20];
  
  puVar6 = (ushort *)0x0;
  *(undefined1 *)(param_1 + 0x798) = 0;
  *(undefined4 *)(param_1 + 0x944) = 0;
  *(undefined4 *)(param_1 + 0x940) = 0xffffffff;
  iVar1 = FUN_4a16bdcc(auStack_2c,param_1 + 0x86c);
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 8)) {
    do {
      if (*(int *)(iVar1 + 0xc) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(iVar1 + 0xc) + 8);
      }
      *(undefined4 *)(iVar4 + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar1 + 8));
  }
  FUN_4a16bef4(auStack_2c);
  iVar1 = 1;
  if (1 < *(int *)(param_1 + 0x410)) {
    do {
      if (*(int *)(param_1 + 0x8e4) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x8e4) + 8);
      }
      puVar2 = (ushort *)(iVar3 + iVar1 * 2);
      *puVar2 = *puVar2 & 0xfffe;
      if (*(int *)(param_1 + 0x90c) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x90c) + 8);
      }
      iVar3 = FUN_4a16bdcc(auStack_40,iVar3 + iVar1 * 0x14);
      iVar4 = 0;
      if (0 < *(int *)(iVar3 + 8)) {
        do {
          if (*(int *)(iVar3 + 0xc) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(*(int *)(iVar3 + 0xc) + 8);
          }
          *(undefined4 *)(iVar5 + iVar4 * 4) = 0;
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(iVar3 + 8));
      }
      FUN_4a16bef4(auStack_40);
      if (*(int *)(param_1 + 0x920) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x920) + 8);
      }
      iVar3 = FUN_4a16c074(auStack_54,iVar3 + iVar1 * 0x14);
      iVar4 = 0;
      if (0 < *(int *)(iVar3 + 8)) {
        do {
          if (*(int *)(iVar3 + 0xc) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(*(int *)(iVar3 + 0xc) + 8);
          }
          *(undefined2 *)(iVar5 + iVar4 * 2) = 0xffff;
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(iVar3 + 8));
      }
      FUN_4a16c1a0(auStack_54);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x410));
  }
  if (*(int *)(param_1 + 0x8e4) != 0) {
    puVar6 = *(ushort **)(*(int *)(param_1 + 0x8e4) + 8);
  }
  *puVar6 = *puVar6 & 0xfffe;
  *(undefined4 *)(param_1 + 0x984) = 0x9c4;
  return;
}



// Address: 4a0e3a98

void FUN_4a0e3a98(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined1 auStack_6c [20];
  undefined1 auStack_58 [20];
  undefined1 auStack_44 [20];
  undefined1 auStack_30 [20];
  
  if (*(int *)(param_1 + 0x88c) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x88c) + 8);
  }
  piVar4 = (int *)(param_1 + 0x894);
  if (iVar1 == 0) {
    iVar1 = FUN_4a16c0cc(auStack_58,6);
    uVar6 = *(undefined4 *)(iVar1 + 8);
    piVar5 = *(int **)(iVar1 + 0xc);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
    }
    (**(code **)(*(int *)(param_1 + 0x880) + 0x1c))((int *)(param_1 + 0x880));
    *(undefined4 *)(param_1 + 0x888) = uVar6;
    *(int **)(param_1 + 0x88c) = piVar5;
    FUN_4a16c1a0(auStack_58);
    iVar1 = FUN_4a16be24(auStack_6c,6);
    uVar6 = *(undefined4 *)(iVar1 + 8);
    piVar5 = *(int **)(iVar1 + 0xc);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
    }
    (**(code **)(*piVar4 + 0x1c))(piVar4);
    *(int **)(param_1 + 0x8a0) = piVar5;
    *(undefined4 *)(param_1 + 0x89c) = uVar6;
    FUN_4a16bef4(auStack_6c);
  }
  iVar1 = FUN_4a16c074(auStack_30,param_1 + 0x880);
  iVar2 = 0;
  if (0 < *(int *)(iVar1 + 8)) {
    do {
      if (*(int *)(iVar1 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar1 + 0xc) + 8);
      }
      *(undefined2 *)(iVar3 + iVar2 * 2) = 0xffff;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar1 + 8));
  }
  FUN_4a16c1a0(auStack_30);
  iVar1 = FUN_4a16bdcc(auStack_44,piVar4);
  iVar2 = 0;
  if (0 < *(int *)(iVar1 + 8)) {
    do {
      if (*(int *)(iVar1 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar1 + 0xc) + 8);
      }
      *(undefined4 *)(iVar3 + iVar2 * 4) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar1 + 8));
  }
  FUN_4a16bef4(auStack_44);
  return;
}



// Address: 4a0e3c18

undefined4 FUN_4a0e3c18(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_4a0fba7c(*(undefined4 *)(param_1 + 0x18));
  iVar1 = FUN_4a146d54();
  if (iVar1 != 0) {
    iVar1 = FUN_4a142ef4(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520));
    iVar2 = 1;
    if (1 < *(int *)(param_1 + 0x410)) {
      do {
        if (*(int *)(param_1 + 0x8e4) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(param_1 + 0x8e4) + 8);
        }
        if ((*(ushort *)(iVar3 + iVar2 * 2) & 2) == 0) {
          if (*(int *)(param_1 + 0x470) == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(*(int *)(param_1 + 0x470) + 8);
          }
          iVar3 = (int)*(short *)(iVar3 + iVar2 * 2);
        }
        else {
          iVar3 = 0;
        }
        if (iVar3 == iVar1) {
          if (*(int *)(param_1 + 0x8d0) == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(*(int *)(param_1 + 0x8d0) + 8);
          }
          if (*(int *)(param_1 + 0x3a4) == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)(*(int *)(param_1 + 0x3a4) + 8);
          }
          if ((*(byte *)(iVar4 + *(char *)(iVar3 + iVar2)) & 0x20) != 0) {
            return 1;
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x410));
    }
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}




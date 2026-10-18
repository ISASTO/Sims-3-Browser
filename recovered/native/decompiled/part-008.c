/* AUTOMATED DECOMPILER OUTPUT. Not original source, not a buildable game.
 * Function boundaries, types, indirect calls, and data still require validation. */

// Address: 4a06bb54

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a06bb54(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar5 = 0;
  if (param_3 < -2) {
    if (*(int *)(param_1 + 0x40) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 8);
    }
    piVar2 = *(int **)(iVar1 + (param_3 + 0xc) * 4);
  }
  else {
    uVar3 = FUN_4a08db2c();
    piVar2 = (int *)FUN_4a135b4c(uVar3,param_3,0);
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))();
  }
  if (param_4 < -2) {
    if (*(int *)(param_1 + 0x40) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 8);
    }
    uVar3 = *(undefined4 *)(iVar1 + (param_4 + 0xc) * 4);
  }
  else {
    uVar3 = FUN_4a08db2c();
    uVar3 = FUN_4a135b4c(uVar3,param_4,0);
  }
  if (*(int *)(param_1 + 0x54) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x54) + 8);
  }
  FUN_4a167668(uVar4,uVar3);
  uVar3 = FUN_4a06d33c(param_1,piVar2,param_1 + 0x48);
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 8);
  }
  FUN_4a167668(iVar5 + (param_2 + 0xc) * 4,uVar3);
  if (piVar2 != (int *)0x0) {
    iVar5 = (**(code **)(*piVar2 + 8))(piVar2);
    if (iVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a06bc6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 4))(piVar2);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a06bc58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a06bc70

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a06bc70(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_34 [12];
  int local_28;
  
  iVar7 = 0;
  if (param_3 < -2) {
    if (*(int *)(param_1 + 0x40) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 8);
    }
    piVar2 = *(int **)(iVar1 + (param_3 + 0xc) * 4);
  }
  else {
    uVar4 = FUN_4a08db2c();
    piVar2 = (int *)FUN_4a135b4c(uVar4,param_3,0);
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))();
  }
  puVar3 = (undefined4 *)FUN_4a0c6bc0(auStack_34);
  *puVar3 = PTR_PTR_4a06be44;
  puVar3[2] = *(undefined4 *)(param_1 + 0x50);
  piVar6 = *(int **)(param_1 + 0x54);
  puVar3[3] = piVar6;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))();
  }
  *puVar3 = PTR_PTR_4a06be48;
  if (param_4 < -2) {
    if (*(int *)(param_1 + 0x40) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 8);
    }
    uVar4 = *(undefined4 *)(iVar1 + (param_4 + 0xc) * 4);
  }
  else {
    uVar4 = FUN_4a08db2c();
    uVar4 = FUN_4a135b4c(uVar4,param_4,0);
  }
  if (local_28 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(local_28 + 8);
  }
  FUN_4a167668(uVar5,uVar4);
  if (param_5 < -2) {
    if (*(int *)(param_1 + 0x40) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 8);
    }
    uVar4 = *(undefined4 *)(iVar1 + (param_5 + 0xc) * 4);
  }
  else {
    uVar4 = FUN_4a08db2c();
    uVar4 = FUN_4a135b4c(uVar4,param_5,0);
  }
  if (local_28 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(local_28 + 8);
  }
  FUN_4a167668(iVar1 + 4,uVar4);
  uVar4 = FUN_4a06d33c(param_1,piVar2,auStack_34);
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar7 = *(int *)(*(int *)(param_1 + 0x40) + 8);
  }
  FUN_4a167668(iVar7 + (param_2 + 0xc) * 4,uVar4);
  FUN_4a169628(auStack_34);
  if (piVar2 != (int *)0x0) {
    iVar7 = (**(code **)(*piVar2 + 8))(piVar2);
    if (iVar7 != 0) {
      (**(code **)(*piVar2 + 4))(piVar2);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a06be20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a06be4c

void FUN_4a06be4c(int param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x4a06be5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(param_1 + 0x30) + param_2 * 4) + 0x34))();
  return;
}



// Address: 4a06be60

undefined4 FUN_4a06be60(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if ((*(int *)(param_1 + 0x14) == iVar2) &&
     (iVar1 = *(int *)(param_1 + 0xc) + iVar2, iVar2 < iVar1)) {
    *(int *)(param_1 + 0x10) = iVar1;
    iVar3 = *(int *)(param_1 + 0x18);
    iVar2 = thunk_FUN_4a161570(iVar1 * 4);
    *(int *)(param_1 + 0x18) = iVar2;
    if (iVar2 != 0) {
      iVar2 = 0;
      if (0 < *(int *)(param_1 + 0x14)) {
        do {
          iVar1 = iVar2 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4) = *(undefined4 *)(iVar3 + iVar2 * 4)
          ;
          iVar2 = iVar1;
        } while (iVar1 < *(int *)(param_1 + 0x14));
      }
      thunk_FUN_4a161530(iVar3);
    }
    iVar2 = *(int *)(param_1 + 0x14);
    if (iVar2 < *(int *)(param_1 + 0x10)) {
      do {
        iVar1 = iVar2 + 1;
        *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4) = 0;
        iVar2 = iVar1;
      } while (iVar1 < *(int *)(param_1 + 0x10));
    }
  }
  iVar2 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar2 + 1;
  piVar4 = *(int **)(*(int *)(param_1 + 0x18) + iVar2 * 4);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))();
  }
  *(int **)(*(int *)(param_1 + 0x18) + iVar2 * 4) = param_2;
  if ((piVar4 != (int *)0x0) && (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  return *(undefined4 *)(param_1 + 0x14);
}



// Address: 4a06bf88

undefined4 FUN_4a06bf88(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(*(int *)(param_1 + 0x30) + param_3 * 4);
  iVar3 = 0;
  if (param_2 < -2) {
    if (*(int *)(param_1 + 0x40) != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 8);
    }
    piVar1 = *(int **)(iVar3 + (param_2 + 0xc) * 4);
  }
  else {
    uVar2 = FUN_4a08db2c();
    piVar1 = (int *)FUN_4a135b4c(uVar2,param_2,0);
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))();
  }
  uVar2 = (**(code **)(*piVar4 + 0x38))(piVar4,piVar1);
  if ((piVar1 != (int *)0x0) && (iVar3 = (**(code **)(*piVar1 + 8))(piVar1), iVar3 != 0)) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return uVar2;
}



// Address: 4a06c040

undefined4 FUN_4a06c040(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  iVar5 = 0;
  if (*(int *)(param_1 + 0xc4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0xc4) + 8);
  }
  *(int *)(iVar1 + param_2 * 4) = param_3;
  if (param_3 != -1) {
    if (param_3 < -2) {
      iVar1 = iVar5;
      if (*(int *)(param_1 + 0x40) != 0) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 8);
      }
      piVar2 = *(int **)(iVar1 + (param_3 + 0xc) * 4);
    }
    else {
      uVar3 = FUN_4a08db2c(iVar1,param_2,param_3,param_4);
      piVar2 = (int *)FUN_4a135b4c(uVar3,param_3,0);
    }
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))();
    }
    if (*(int *)(param_1 + 0xb0) != 0) {
      iVar5 = *(int *)(*(int *)(param_1 + 0xb0) + 8);
    }
    piVar4 = (int *)(iVar5 + param_2 * 4);
    if ((int *)*piVar4 != piVar2) {
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xc))();
      }
      piVar6 = (int *)*piVar4;
      if ((piVar6 != (int *)0x0) && (iVar5 = (**(code **)(*piVar6 + 8))(piVar6), iVar5 != 0)) {
        (**(code **)(*piVar6 + 4))(piVar6);
      }
      *piVar4 = (int)piVar2;
    }
    uVar3 = FUN_4a06b0fc(param_1,piVar2,param_4,param_5);
    if ((piVar2 != (int *)0x0) && (iVar5 = (**(code **)(*piVar2 + 8))(piVar2), iVar5 != 0)) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    return uVar3;
  }
  return 0;
}



// Address: 4a06c1b0

undefined4 FUN_4a06c1b0(void)

{
  int iVar1;
  
  iVar1 = FUN_4a08db2c();
  return *(undefined4 *)(iVar1 + 0x1c);
}



// Address: 4a06c1c0

undefined4 FUN_4a06c1c0(void)

{
  undefined4 uVar1;
  undefined1 auStack_1c [8];
  undefined4 local_14;
  
  uVar1 = FUN_4a08db2c();
  FUN_4a1358e0(auStack_1c,uVar1);
  FUN_4a169628(auStack_1c);
  return local_14;
}



// Address: 4a06c1f4

void FUN_4a06c1f4(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_70 [20];
  undefined1 auStack_5c [8];
  undefined4 local_54;
  int *local_50;
  undefined4 local_48;
  undefined1 auStack_44 [20];
  undefined4 local_30;
  int iStack_2c;
  undefined4 local_28;
  
  iStack_2c = param_1;
  local_28 = param_2;
  local_30 = FUN_4a08db2c();
  FUN_4a1358e0(auStack_44,local_30);
  iVar3 = FUN_4a06c6c8(param_1);
  if (-1 < iVar3) {
    local_48 = FUN_4a08db2c();
    FUN_4a16951c(auStack_5c,0);
    puVar2 = PTR_PTR_4a06c374;
    puVar1 = PTR_PTR_4a06c370;
    iVar7 = *(int *)(param_1 + 0x14);
    iVar3 = 0;
    if (0 < iVar7) {
      do {
        piVar4 = *(int **)(*(int *)(param_1 + 0x18) + iVar3 * 4);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0xc))();
        }
        puVar5 = (undefined4 *)FUN_4a0c6bc0(auStack_70);
        *puVar5 = puVar1;
        puVar5[2] = local_54;
        puVar5[3] = local_50;
        if (local_50 != (int *)0x0) {
          (**(code **)(*local_50 + 0xc))();
        }
        *puVar5 = puVar2;
        FUN_4a08db3c(local_48,iVar3 + 1,puVar5,0);
        FUN_4a169628(auStack_70);
        if ((piVar4 != (int *)0x0) && (iVar6 = (**(code **)(*piVar4 + 8))(piVar4), iVar6 != 0)) {
          (**(code **)(*piVar4 + 4))(piVar4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar7);
    }
    FUN_4a169628(auStack_5c);
  }
  FUN_4a08e320(local_30,local_28);
  FUN_4a06b454(param_1);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xc0)) {
    do {
      if (*(int *)(param_1 + 0xc4) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(*(int *)(param_1 + 0xc4) + 8);
      }
      *(undefined4 *)(iVar7 + iVar3 * 4) = 0xffffffff;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xc0));
  }
  FUN_4a169628(auStack_44);
  return;
}



// Address: 4a06c378

int FUN_4a06c378(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x5c);
  if (param_2 != 0) {
    if (param_2 < 0) {
      FUN_4a0bec10(iVar7,0x2d);
      param_2 = -param_2;
    }
    iVar2 = DAT_4a06c40c;
    bVar1 = false;
    iVar6 = DAT_4a06c408;
    do {
      iVar3 = FUN_4a0015f0(param_2,iVar6);
      if (iVar3 != 0 || bVar1) {
        bVar1 = true;
        FUN_4a0bec80(iVar7,iVar3 + 0x30U & 0xffff);
      }
      iVar4 = (int)((ulonglong)((longlong)iVar2 * (longlong)iVar6) >> 0x20);
      param_2 = param_2 - iVar3 * iVar6;
      iVar6 = (iVar4 >> 2) - (iVar4 >> 0x1f);
    } while (0 < iVar6);
    return iVar4;
  }
  uVar5 = FUN_4a056efc(&DAT_4a0bec44);
  FUN_4a041b9c(iVar7 + 8,0,uVar5,0x30);
  return iVar7;
}



// Address: 4a06c410

undefined4 FUN_4a06c410(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x74) + 1;
  *(int *)(param_1 + 0x74) = iVar1;
  if (0x18 < iVar1) {
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x6c) + 8);
  }
  uVar2 = *(undefined4 *)(iVar3 + *(int *)(param_1 + 0x74) * 4);
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  FUN_4a0becb8(uVar2,0);
  return *(undefined4 *)(param_1 + 0x5c);
}



// Address: 4a06c45c

void FUN_4a06c45c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  short *psVar1;
  
  psVar1 = (short *)0x0;
  if (*(int *)(param_1 + 0x84) != 0) {
    psVar1 = *(short **)(*(int *)(param_1 + 0x84) + 8);
  }
  FUN_4a06cdb8(param_1,param_2,*(undefined4 *)(param_1 + 0x8c),param_1 + 0x78,param_3,param_4,
               param_5,param_6,0,(int)*psVar1);
  return;
}



// Address: 4a06c4cc

/* WARNING: Removing unreachable block (ram,0x4a06c534) */
/* WARNING: Removing unreachable block (ram,0x4a06c550) */

void FUN_4a06c4cc(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined1 auStack_38 [20];
  
  piVar2 = (int *)FUN_4a0c6bc0(auStack_38);
  puVar1 = PTR_PTR_4a06c6c0;
  piVar2[2] = 0;
  piVar2[3] = 0;
  *piVar2 = (int)puVar1;
  iVar3 = FUN_4a15e080(100);
  if (iVar3 == 0) {
    iVar3 = FUN_4a1669a8();
  }
  iVar6 = 0;
  do {
    *(undefined4 *)(iVar3 + iVar6 * 4) = 0;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x19);
  thunk_FUN_4a161570(0x18);
  piVar4 = (int *)FUN_4a0c0628();
  piVar4[3] = 4;
  piVar4[4] = 0x19;
  puVar1 = PTR_PTR_4a06c6c4;
  *piVar4 = (int)PTR_PTR_4a06c6c4;
  piVar4[2] = iVar3;
  *(undefined1 *)(piVar4 + 5) = 1;
  if (piVar4 != (int *)0x0) {
    (**(code **)(puVar1 + 0xc))(piVar4);
  }
  (**(code **)(*piVar2 + 0x1c))(piVar2);
  piVar2[2] = 0x19;
  piVar2[3] = (int)piVar4;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))(piVar4);
  }
  (**(code **)(*(int *)(param_1 + 0x60) + 0x1c))((int *)(param_1 + 0x60));
  *(undefined4 *)(param_1 + 0x68) = 0x19;
  *(int **)(param_1 + 0x6c) = piVar4;
  FUN_4a169390(auStack_38);
  iVar3 = 0;
  do {
    uVar5 = thunk_FUN_4a161570(0xc);
    piVar2 = (int *)FUN_4a0bed9c(uVar5,100);
    if (*(int *)(param_1 + 0x6c) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(param_1 + 0x6c) + 8);
    }
    piVar4 = (int *)(iVar6 + iVar3 * 4);
    if ((int *)*piVar4 != piVar2) {
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xc))(piVar2);
      }
      piVar7 = (int *)*piVar4;
      if ((piVar7 != (int *)0x0) && (iVar6 = (**(code **)(*piVar7 + 8))(piVar7), iVar6 != 0)) {
        (**(code **)(*piVar7 + 4))(piVar7);
      }
      *piVar4 = (int)piVar2;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x19);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  return;
}



// Address: 4a06c6c8

int FUN_4a06c6c8(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_24 [8];
  int local_1c;
  int local_18;
  
  uVar1 = FUN_4a08db2c();
  FUN_4a1358e0(auStack_24,uVar1);
  piVar2 = (int *)FUN_4a135b44(uVar1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))();
  }
  iVar4 = 0;
  if (0 < local_1c) {
    do {
      if (local_18 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(local_18 + 8);
      }
      iVar3 = FUN_4a13e0a8(piVar2,*(undefined4 *)(iVar3 + iVar4 * 4));
      if (iVar3 != 0) {
        if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 8))(piVar2), iVar3 != 0)) {
          (**(code **)(*piVar2 + 4))(piVar2);
        }
        FUN_4a169628(auStack_24);
        return iVar4;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_1c);
  }
  if ((piVar2 != (int *)0x0) && (iVar4 = (**(code **)(*piVar2 + 8))(piVar2), iVar4 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  FUN_4a169628(auStack_24);
  return -1;
}



// Address: 4a06c7e8

int FUN_4a06c7e8(int param_1)

{
  short *psVar1;
  
  psVar1 = (short *)0x0;
  if (*(int *)(param_1 + 0x84) != 0) {
    psVar1 = *(short **)(*(int *)(param_1 + 0x84) + 8);
  }
  return (int)*psVar1;
}



// Address: 4a06c800

void FUN_4a06c800(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [12];
  int iStack_14;
  
  iVar1 = FUN_4a06c6c8();
  if (iVar1 != param_2) {
    if (param_2 < 0) {
      param_2 = 0;
    }
    uVar2 = FUN_4a08db2c();
    FUN_4a1358e0(auStack_20,uVar2);
    iVar1 = 0;
    if (iStack_14 != 0) {
      iVar1 = *(int *)(iStack_14 + 8);
    }
    FUN_4a06c1f4(param_1,*(undefined4 *)(iVar1 + param_2 * 4));
    FUN_4a169628(auStack_20);
    return;
  }
  return;
}



// Address: 4a06c86c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a06c86c(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar11;
  int *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  
  local_28 = *(int *)(param_1 + 0x74);
  local_2c = *(undefined4 *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x74) = local_28 + 1;
  if (0x18 < local_28 + 1) {
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  iVar4 = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x6c) + 8);
  }
  uVar5 = *(undefined4 *)(iVar4 + *(int *)(param_1 + 0x74) * 4);
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  FUN_4a0becb8(uVar5,0);
  uVar5 = *(undefined4 *)(param_1 + 0x5c);
  iVar4 = -param_2;
  if (-param_2 < param_2) {
    iVar4 = param_2;
  }
  local_30 = uVar5;
  if (iVar4 == 0) {
    FUN_4a0bec10(uVar5,0x30);
  }
  else {
    if (iVar4 < 0) {
      FUN_4a0bec10(uVar5,0x2d);
      iVar4 = -iVar4;
    }
    iVar2 = DAT_4a06ca7c;
    bVar1 = false;
    iVar10 = DAT_4a06ca7c;
    do {
      iVar6 = FUN_4a0015f0(iVar4,iVar10);
      if (iVar6 != 0 || bVar1) {
        bVar1 = true;
        FUN_4a0bec80(uVar5,iVar6 + 0x30U & 0xffff);
        bVar11 = iVar10 == iVar2 || iVar10 == 1000000;
        if (iVar10 != iVar2 && iVar10 != 1000000) {
          bVar11 = iVar10 == 1000;
        }
        if (bVar11) {
          uVar8 = FUN_4a08db2c();
          uVar8 = FUN_4a135b4c(uVar8,0x80a,0);
          FUN_4a0beb78(uVar5,uVar8);
        }
      }
      iVar7 = (int)((ulonglong)((longlong)DAT_4a06ca80 * (longlong)iVar10) >> 0x20);
      iVar4 = iVar4 - iVar6 * iVar10;
      iVar10 = (iVar7 >> 2) - (iVar7 >> 0x1f);
    } while (0 < iVar10);
  }
  uVar5 = FUN_4a08db2c();
  uVar8 = FUN_4a135b4c(uVar5,0x806,0);
  uVar9 = FUN_4a13cff4(local_30);
  uVar5 = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x54) + 8);
  }
  FUN_4a167668(uVar5,uVar9);
  local_34 = (int *)FUN_4a06d33c(param_1,uVar8,param_1 + 0x48);
  if (local_34 != (int *)0x0) {
    (**(code **)(*local_34 + 0xc))();
  }
  if (param_2 < 0) {
    FUN_4a0beb58(local_2c,&DAT_4a06ca84);
  }
  FUN_4a0bebec(local_2c,&local_34);
  piVar3 = local_34;
  *(undefined4 *)(param_1 + 0x5c) = local_2c;
  *(int *)(param_1 + 0x74) = local_28;
  if (local_34 != (int *)0x0) {
    iVar4 = (**(code **)(*local_34 + 8))(local_34);
    if (iVar4 != 0) {
      (**(code **)(*piVar3 + 4))(piVar3);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a06ca58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a06ca88

int FUN_4a06ca88(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  FUN_4a04764c(iVar1 + 8,param_2,0);
  return iVar1;
}



// Address: 4a06ca90

void FUN_4a06ca90(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  FUN_4a08db2c();
  uVar2 = FUN_4a135b44();
  iVar5 = 1;
  uVar3 = thunk_FUN_4a161570(0x14);
  uVar3 = FUN_4a0c707c(uVar3,PTR_DAT_4a06cbc8);
  iVar4 = FUN_4a13dd58(uVar2,uVar3);
  if (iVar4 == 0) {
    uVar3 = thunk_FUN_4a161570(0x14);
    uVar3 = FUN_4a0c707c(uVar3,PTR_DAT_4a06cbcc);
    iVar4 = FUN_4a13dd58(uVar2,uVar3);
    if (iVar4 == 0) {
      uVar3 = thunk_FUN_4a161570(0x14);
      uVar3 = FUN_4a0c707c(uVar3,PTR_DAT_4a06cbd0);
      iVar4 = FUN_4a13dd58(uVar2,uVar3);
      if (iVar4 != 0) {
        iVar5 = 4;
      }
    }
    else {
      iVar5 = 3;
    }
  }
  else {
    iVar5 = 2;
  }
  puVar1 = PTR_DAT_4a06cbd4;
  if (*(int *)(param_1 + 0xd0) != iVar5) {
    if (*(int *)(param_1 + 0xcc) != 0) {
      thunk_FUN_4a08ce18(*(undefined4 *)PTR_DAT_4a06cbd4);
    }
    if (iVar5 == 1) {
      uVar2 = FUN_4a08d0d0(*(undefined4 *)puVar1,PTR_s_fonts_fonts_group_4a06cbdc,0);
      *(undefined4 *)(param_1 + 0xcc) = uVar2;
    }
    else if (iVar5 == 2) {
      uVar2 = FUN_4a08d0d0(*(undefined4 *)puVar1,PTR_s_fonts_fonts_chinese_group_4a06cbe0,0);
      *(undefined4 *)(param_1 + 0xcc) = uVar2;
    }
    else if (iVar5 == 3) {
      uVar2 = FUN_4a08d0d0(*(undefined4 *)puVar1,PTR_s_fonts_fonts_korean_group_4a06cbe4,0);
      *(undefined4 *)(param_1 + 0xcc) = uVar2;
    }
    else if (iVar5 == 4) {
      uVar2 = FUN_4a08d0d0(*(undefined4 *)puVar1,PTR_s_fonts_fonts_japan_group_4a06cbd8,0);
      *(undefined4 *)(param_1 + 0xcc) = uVar2;
    }
    *(int *)(param_1 + 0xd0) = iVar5;
    return;
  }
  return;
}



// Address: 4a06cbe8

int FUN_4a06cbe8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_2 < -2) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x40) != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 8);
    }
    piVar2 = *(int **)(iVar1 + (param_2 + 0xc) * 4);
  }
  else {
    uVar3 = FUN_4a08db2c();
    piVar2 = (int *)FUN_4a135b4c(uVar3,param_2,0);
  }
  iVar1 = *(int *)(param_1 + 0x5c);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))();
  }
  FUN_4a0331ec(iVar1 + 8,piVar2[2]);
  if ((piVar2 != (int *)0x0) && (iVar4 = (**(code **)(*piVar2 + 8))(piVar2), iVar4 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  return iVar1;
}



// Address: 4a06cc34

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a06cc34(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  code *UNRECOVERED_JUMPTABLE;
  
  psVar5 = (short *)0x0;
  if (*(int *)(param_1 + 0xb0) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0xb0) + 8);
  }
  piVar2 = *(int **)(iVar1 + param_3 * 4);
  iVar1 = param_3;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))();
  }
  iVar3 = *(int *)(param_1 + 0x9c);
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 8);
    iVar4 = *(int *)(iVar3 + 8);
  }
  else {
    iVar4 = 0;
  }
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  iVar3 = *(int *)(iVar4 + param_3 * 0x14 + 0xc);
  if (iVar3 != 0) {
    psVar5 = *(short **)(iVar3 + 8);
  }
  FUN_4a06cdb8(param_1,param_2,piVar2,iVar1 + param_3 * 0x14,param_4,param_5,param_6,param_7,0,
               (int)*psVar5);
  if (piVar2 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar2 + 8))(piVar2);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a06cd28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 4))(piVar2);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a06cd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a06cd2c

void FUN_4a06cd2c(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0xc4);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
  }
  iVar3 = 0;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  iVar1 = param_1;
  iVar4 = param_3;
  iVar5 = param_4;
  if (*(int *)(iVar2 + param_3 * 4) != param_4) {
    FUN_4a06c040(param_1,param_3,param_4,param_5,param_6);
    if (*(int *)(param_1 + 0xc4) != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0xc4) + 8);
    }
    *(int *)(iVar3 + param_3 * 4) = param_4;
  }
  FUN_4a06cc34(param_1,param_2,param_3,param_5,param_7,param_8,param_9,iVar1,param_2,iVar4,iVar5);
  return;
}



// Address: 4a06cdb8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a06cdb8(int param_1,int *param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6,int param_7,uint param_8,int param_9,int param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  bool bVar10;
  undefined8 uVar11;
  
  piVar8 = *(int **)(*(int *)(param_1 + 0x30) + param_5 * 4);
  iVar1 = (**(code **)(*param_2 + 0x78))(param_2);
  iVar2 = (**(code **)(*param_2 + 0x6c))(param_2);
  iVar3 = (**(code **)(*piVar8 + 0x34))(piVar8);
  iVar9 = param_9 + param_10 + 1;
  if ((param_8 & 0x10) == 0) {
    if ((param_8 & 0x20) == 0) goto LAB_4a06ce90;
    param_10 = param_10 * iVar3;
  }
  else {
    param_10 = param_10 * iVar3 >> 1;
  }
  param_7 = param_7 - param_10;
LAB_4a06ce90:
  if (param_9 < iVar9) {
    do {
      iVar4 = *(int *)(param_4 + 0xc);
      bVar10 = iVar4 != 0;
      if (bVar10) {
        iVar6 = *(int *)(iVar4 + 8);
      }
      else {
        iVar6 = 0;
      }
      iVar6 = (int)*(short *)(iVar6 + (param_9 + 1) * 2);
      if (bVar10) {
        iVar7 = *(int *)(iVar4 + 8);
      }
      else {
        iVar7 = 0;
      }
      if (bVar10) {
        iVar4 = *(int *)(iVar4 + 8);
      }
      else {
        iVar4 = 0;
      }
      iVar7 = *(short *)(iVar7 + (param_9 + 2) * 2) - iVar6;
      uVar11 = FUN_4a13dfe4(param_3,*(short *)(iVar4 + (param_9 + 2) * 2) + -1);
      iVar4 = (int)uVar11;
      if ((iVar4 == 10 || iVar4 == 0x7c) || iVar4 == 0x20) {
        iVar7 = iVar7 + -1;
      }
      bVar10 = iVar7 == 0;
      iVar4 = iVar7;
      if (0 < iVar7) {
        iVar5 = param_7 + iVar3;
        uVar11 = CONCAT44(iVar1,iVar5);
        iVar4 = iVar5 - iVar1;
        bVar10 = iVar5 == iVar1;
      }
      if ((!bVar10 &&
           iVar4 < 0 == (0 < iVar7 && SBORROW4((int)uVar11,(int)((ulonglong)uVar11 >> 0x20)))) &&
         (param_7 < iVar1 + iVar2)) {
        piVar8 = *(int **)(*(int *)(param_1 + 0x30) + param_5 * 4);
        (**(code **)(*piVar8 + 0x24))(piVar8,param_2,param_3,iVar6);
      }
      param_9 = param_9 + 1;
      param_7 = param_7 + iVar3;
    } while (param_9 < iVar9);
    return;
  }
  return;
}



// Address: 4a06cf80

int FUN_4a06cf80(int param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  
  psVar2 = (short *)0x0;
  if (*(int *)(param_1 + 0x9c) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x9c) + 8);
  }
  iVar1 = *(int *)(iVar1 + param_2 * 0x14 + 0xc);
  if (iVar1 != 0) {
    psVar2 = *(short **)(iVar1 + 8);
  }
  return (int)*psVar2;
}



// Address: 4a06cfb0

int FUN_4a06cfb0(int param_1,uint param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar4;
  undefined4 unaff_r6;
  int iVar5;
  undefined4 in_lr;
  
  iVar3 = (int)((longlong)(int)param_2 * (longlong)DAT_4a06d068 + ((ulonglong)param_2 << 0x20) >>
               0x20);
  iVar3 = (iVar3 >> 5) - (iVar3 >> 0x1f);
  iVar4 = param_2 + iVar3 * -0x3c;
  iVar5 = *(int *)(param_1 + 0x5c);
  uVar2 = 0x30;
  if (iVar3 < 0x14) {
    if (9 < iVar3) {
      uVar2 = 0x31;
      iVar3 = iVar3 + -10;
    }
  }
  else {
    uVar2 = 0x32;
    iVar3 = iVar3 + -0x14;
  }
  FUN_4a0bec80(iVar5,uVar2);
  FUN_4a0bec80(iVar5,iVar3 + 0x30U & 0xffff);
  FUN_4a0bec10(iVar5,0x3a);
  lVar1 = (longlong)DAT_4a06d06c * (longlong)iVar4;
  iVar3 = (int)((ulonglong)lVar1 >> 0x20);
  iVar3 = (iVar3 >> 2) - (iVar3 >> 0x1f);
  FUN_4a0bec80(iVar5,iVar3 + 0x30U & 0xffff,(int)lVar1);
  uVar2 = FUN_4a056efc(&DAT_4a0becb4);
  FUN_4a041b9c(iVar5 + 8,0,uVar2,iVar4 + iVar3 * -10 + 0x30U & 0xffff,unaff_r4,unaff_r5,unaff_r6,
               in_lr);
  return iVar5;
}



// Address: 4a06d070

void FUN_4a06d070(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined1 auStack_64 [8];
  undefined4 local_5c;
  int *local_58;
  undefined1 auStack_50 [20];
  undefined1 auStack_3c [8];
  int local_34;
  int local_30;
  undefined4 local_28;
  
  local_28 = FUN_4a08db2c();
  FUN_4a08df8c(local_28,0xb);
  FUN_4a1358e0(auStack_3c,local_28);
  uVar3 = thunk_FUN_4a161570(0x14);
  piVar4 = (int *)FUN_4a0c707c(uVar3,s_strings_hdr_bin_4a06d310);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))();
  }
  puVar2 = PTR_PTR_4a06d324;
  puVar1 = PTR_PTR_4a06d320;
  iVar8 = 0;
  if (0 < local_34) {
    do {
      if (local_30 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(local_30 + 8);
      }
      FUN_4a08dbe4(auStack_64,local_28,piVar4,*(undefined4 *)(iVar5 + iVar8 * 4));
      iVar5 = 0;
      if (local_30 != 0) {
        iVar5 = *(int *)(local_30 + 8);
      }
      uVar3 = *(undefined4 *)(iVar5 + iVar8 * 4);
      puVar6 = (undefined4 *)FUN_4a0c6bc0(auStack_50);
      *puVar6 = puVar1;
      puVar6[2] = local_5c;
      puVar6[3] = local_58;
      if (local_58 != (int *)0x0) {
        (**(code **)(*local_58 + 0xc))();
      }
      *puVar6 = puVar2;
      FUN_4a08db3c(local_28,0,puVar6,uVar3);
      FUN_4a169628(auStack_50);
      FUN_4a169628(auStack_64);
      iVar8 = iVar8 + 1;
    } while (iVar8 < local_34);
  }
  uVar3 = thunk_FUN_4a161570(0x14);
  piVar7 = (int *)FUN_4a0c707c(uVar3,s_strings_generic_bin_4a06d328);
  iVar8 = *(int *)(param_1 + 0x10);
  if ((*(int *)(param_1 + 0x14) == iVar8) &&
     (iVar5 = *(int *)(param_1 + 0xc) + iVar8, iVar8 < iVar5)) {
    *(int *)(param_1 + 0x10) = iVar5;
    iVar9 = *(int *)(param_1 + 0x18);
    iVar8 = thunk_FUN_4a161570(iVar5 * 4);
    *(int *)(param_1 + 0x18) = iVar8;
    if (iVar8 != 0) {
      iVar8 = 0;
      if (0 < *(int *)(param_1 + 0x14)) {
        do {
          iVar5 = iVar8 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar8 * 4) = *(undefined4 *)(iVar9 + iVar8 * 4)
          ;
          iVar8 = iVar5;
        } while (iVar5 < *(int *)(param_1 + 0x14));
      }
      thunk_FUN_4a161530(iVar9);
    }
    iVar8 = *(int *)(param_1 + 0x14);
    if (*(int *)(param_1 + 0x14) < *(int *)(param_1 + 0x10)) {
      do {
        iVar5 = iVar8 + 1;
        *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar8 * 4) = 0;
        iVar8 = iVar5;
      } while (iVar5 < *(int *)(param_1 + 0x10));
    }
  }
  iVar8 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar8 + 1;
  piVar10 = *(int **)(*(int *)(param_1 + 0x18) + iVar8 * 4);
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0xc))();
  }
  *(int **)(*(int *)(param_1 + 0x18) + iVar8 * 4) = piVar7;
  if ((piVar10 != (int *)0x0) && (iVar8 = (**(code **)(*piVar10 + 8))(piVar10), iVar8 != 0)) {
    (**(code **)(*piVar10 + 4))(piVar10);
  }
  FUN_4a06ca90(param_1);
  FUN_4a06b454(param_1);
  FUN_4a06dd78(param_1);
  FUN_4a06c4cc(param_1);
  FUN_4a06d464(param_1);
  if ((piVar4 != (int *)0x0) && (iVar8 = (**(code **)(*piVar4 + 8))(piVar4), iVar8 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  FUN_4a169628(auStack_3c);
  return;
}



// Address: 4a06d33c

undefined4 FUN_4a06d33c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar11 = param_3;
  iVar3 = FUN_4a13e1b4(param_2);
  iVar4 = thunk_FUN_4a161570((iVar3 + 0x100) * 2);
  bVar1 = false;
  iVar8 = 0;
  iVar10 = 0;
  if (0 < iVar3) {
    do {
      iVar5 = FUN_4a13dfe4(param_2,iVar10);
      if (bVar1) {
        if (iVar5 == 0x5c) {
          iVar5 = iVar8 * 2;
          iVar8 = iVar8 + 1;
          *(undefined2 *)(iVar4 + iVar5) = 0x5c;
        }
        else {
          iVar9 = 0;
          if (*(int *)(param_3 + 0xc) == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(*(int *)(param_3 + 0xc) + 8);
          }
          uVar7 = *(undefined4 *)(iVar6 + (iVar5 + -0x30) * 4);
          iVar5 = FUN_4a13e1b4(uVar7);
          if (0 < iVar5) {
            do {
              uVar2 = FUN_4a13dfe4(uVar7,iVar9);
              *(undefined2 *)(iVar4 + iVar8 * 2) = uVar2;
              iVar8 = iVar8 + 1;
              iVar9 = iVar9 + 1;
              iVar5 = FUN_4a13e1b4(uVar7);
            } while (iVar9 < iVar5);
          }
        }
        bVar1 = false;
      }
      else if (iVar5 == 0x5c) {
        bVar1 = true;
      }
      else {
        iVar9 = iVar8 * 2;
        iVar8 = iVar8 + 1;
        *(short *)(iVar4 + iVar9) = (short)iVar5;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar3);
  }
  *(undefined2 *)(iVar4 + iVar8 * 2) = 0;
  uVar7 = thunk_FUN_4a161570(0x14);
  uVar7 = FUN_4a0c7120(uVar7,iVar4,iVar8 + 1,param_4,param_1,param_2,iVar11);
  thunk_FUN_4a161530(iVar4);
  return uVar7;
}



// Address: 4a06d464

void FUN_4a06d464(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *local_28;
  
  local_28 = param_4;
  uVar1 = thunk_FUN_4a161570(0x14);
  local_28 = (int *)FUN_4a0c707c(uVar1,s_font_9_4a06d814);
  if (local_28 != (int *)0x0) {
    (**(code **)(*local_28 + 0xc))();
  }
  uVar1 = FUN_4a0c48cc(&local_28,0x41100000);
  piVar4 = local_28;
  if ((local_28 != (int *)0x0) && (iVar2 = (**(code **)(*local_28 + 8))(local_28), iVar2 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  uVar3 = thunk_FUN_4a161570(0x2c);
  piVar4 = (int *)FUN_4a0a7828(uVar3,uVar1);
  (**(code **)(*piVar4 + 0x44))(piVar4,1);
  piVar4[8] = -0x1000000;
  (**(code **)(*piVar4 + 0x48))(piVar4,0);
  (**(code **)(*piVar4 + 0x4c))(piVar4,0,0);
  (**(code **)(*piVar4 + 0x50))(piVar4,0xff000000);
  piVar4[3] = 0xffffff;
  uVar1 = thunk_FUN_4a161570(0x2c);
  uVar1 = FUN_4a0a5198(uVar1,piVar4,5);
  FUN_4a16d2f0(param_1 + 0x1c,uVar1);
  uVar1 = thunk_FUN_4a161570(0x14);
  local_28 = (int *)FUN_4a0c707c(uVar1,s_font_12_4a06d81c);
  if (local_28 != (int *)0x0) {
    (**(code **)(*local_28 + 0xc))();
  }
  uVar1 = FUN_4a0c48cc(&local_28,0x41400000);
  piVar4 = local_28;
  if ((local_28 != (int *)0x0) && (iVar2 = (**(code **)(*local_28 + 8))(local_28), iVar2 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  uVar3 = thunk_FUN_4a161570(0x2c);
  piVar4 = (int *)FUN_4a0a7828(uVar3,uVar1);
  (**(code **)(*piVar4 + 0x44))(piVar4,1);
  piVar4[8] = -0x1000000;
  (**(code **)(*piVar4 + 0x48))(piVar4,0);
  (**(code **)(*piVar4 + 0x4c))(piVar4,0,0);
  (**(code **)(*piVar4 + 0x50))(piVar4,0xff000000);
  piVar4[3] = 0xffffff;
  uVar1 = thunk_FUN_4a161570(0x2c);
  uVar1 = FUN_4a0a5198(uVar1,piVar4,0x14);
  FUN_4a16d2f0(param_1 + 0x1c,uVar1);
  uVar1 = thunk_FUN_4a161570(0x14);
  local_28 = (int *)FUN_4a0c707c(uVar1,s_font_12_4a06d81c);
  if (local_28 != (int *)0x0) {
    (**(code **)(*local_28 + 0xc))();
  }
  uVar1 = FUN_4a0c48cc(&local_28,0x41400000);
  piVar4 = local_28;
  if ((local_28 != (int *)0x0) && (iVar2 = (**(code **)(*local_28 + 8))(local_28), iVar2 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  uVar3 = thunk_FUN_4a161570(0x2c);
  piVar4 = (int *)FUN_4a0a7828(uVar3,uVar1);
  (**(code **)(*piVar4 + 0x44))(piVar4,1);
  piVar4[8] = -0x1000000;
  (**(code **)(*piVar4 + 0x48))(piVar4,0);
  (**(code **)(*piVar4 + 0x4c))(piVar4,0,0);
  (**(code **)(*piVar4 + 0x50))(piVar4,0xff000000);
  piVar4[3] = -0x1000000;
  uVar1 = thunk_FUN_4a161570(0x2c);
  uVar1 = FUN_4a0a5198(uVar1,piVar4,0x14);
  FUN_4a16d2f0(param_1 + 0x1c,uVar1);
  uVar1 = thunk_FUN_4a161570(0x14);
  local_28 = (int *)FUN_4a0c707c(uVar1,s_font_12_4a06d81c);
  if (local_28 != (int *)0x0) {
    (**(code **)(*local_28 + 0xc))();
  }
  uVar1 = FUN_4a0c48cc(&local_28,0x41400000);
  piVar4 = local_28;
  if ((local_28 != (int *)0x0) && (iVar2 = (**(code **)(*local_28 + 8))(local_28), iVar2 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  uVar3 = thunk_FUN_4a161570(0x2c);
  piVar4 = (int *)FUN_4a0a7828(uVar3,uVar1);
  (**(code **)(*piVar4 + 0x44))(piVar4,1);
  piVar4[8] = -0x1000000;
  (**(code **)(*piVar4 + 0x48))(piVar4,0);
  (**(code **)(*piVar4 + 0x4c))(piVar4,0,0);
  (**(code **)(*piVar4 + 0x50))(piVar4,0xff000000);
  piVar4[3] = -0x1000000;
  uVar1 = thunk_FUN_4a161570(0x2c);
  uVar1 = FUN_4a0a5198(uVar1,piVar4,0x1e);
  FUN_4a16d2f0(param_1 + 0x1c,uVar1);
  uVar1 = thunk_FUN_4a161570(0x14);
  local_28 = (int *)FUN_4a0c707c(uVar1,s_font_12_4a06d81c);
  if (local_28 != (int *)0x0) {
    (**(code **)(*local_28 + 0xc))();
  }
  uVar1 = FUN_4a0c48cc(&local_28,0x41400000);
  piVar4 = local_28;
  if ((local_28 != (int *)0x0) && (iVar2 = (**(code **)(*local_28 + 8))(local_28), iVar2 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  uVar3 = thunk_FUN_4a161570(0x2c);
  piVar4 = (int *)FUN_4a0a7828(uVar3,uVar1);
  (**(code **)(*piVar4 + 0x44))(piVar4,1);
  piVar4[8] = -0x1000000;
  (**(code **)(*piVar4 + 0x48))(piVar4,0);
  (**(code **)(*piVar4 + 0x4c))(piVar4,0,0);
  (**(code **)(*piVar4 + 0x50))(piVar4,0xff000000);
  iVar2 = DAT_4a06dd6c;
  piVar4[3] = DAT_4a06dd6c;
  uVar1 = thunk_FUN_4a161570(0x2c);
  uVar1 = FUN_4a0a5198(uVar1,piVar4,0x1e);
  FUN_4a16d2f0(param_1 + 0x1c,uVar1);
  uVar1 = thunk_FUN_4a161570(0x14);
  local_28 = (int *)FUN_4a0c707c(uVar1,s_font_12_4a06d81c);
  if (local_28 != (int *)0x0) {
    (**(code **)(*local_28 + 0xc))();
  }
  uVar1 = FUN_4a0c48cc(&local_28,0x41400000);
  piVar4 = local_28;
  if ((local_28 != (int *)0x0) && (iVar5 = (**(code **)(*local_28 + 8))(local_28), iVar5 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  uVar3 = thunk_FUN_4a161570(0x2c);
  piVar4 = (int *)FUN_4a0a7828(uVar3,uVar1);
  (**(code **)(*piVar4 + 0x44))(piVar4,1);
  piVar4[8] = -0x1000000;
  (**(code **)(*piVar4 + 0x48))(piVar4,1);
  (**(code **)(*piVar4 + 0x4c))(piVar4,2,2,6);
  (**(code **)(*piVar4 + 0x50))(piVar4,0xff000000);
  piVar4[3] = 0xffffff;
  uVar1 = thunk_FUN_4a161570(0x2c);
  uVar1 = FUN_4a0a5198(uVar1,piVar4,5);
  FUN_4a16d2f0(param_1 + 0x1c,uVar1);
  uVar1 = thunk_FUN_4a161570(0x14);
  local_28 = (int *)FUN_4a0c707c(uVar1,s_font_15_4a06dd70);
  if (local_28 != (int *)0x0) {
    (**(code **)(*local_28 + 0xc))();
  }
  uVar1 = FUN_4a0c48cc(&local_28,0x41700000);
  piVar4 = local_28;
  if ((local_28 != (int *)0x0) && (iVar5 = (**(code **)(*local_28 + 8))(local_28), iVar5 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  uVar3 = thunk_FUN_4a161570(0x2c);
  piVar4 = (int *)FUN_4a0a7828(uVar3,uVar1);
  (**(code **)(*piVar4 + 0x44))(piVar4,1);
  piVar4[8] = -0x1000000;
  (**(code **)(*piVar4 + 0x48))(piVar4,0);
  (**(code **)(*piVar4 + 0x4c))(piVar4,0,0);
  (**(code **)(*piVar4 + 0x50))(piVar4,0xff000000);
  piVar4[3] = iVar2;
  uVar1 = thunk_FUN_4a161570(0x2c);
  uVar1 = FUN_4a0a5198(uVar1,piVar4,5);
  FUN_4a16d2f0(param_1 + 0x1c,uVar1);
  uVar1 = thunk_FUN_4a161570(0x14);
  local_28 = (int *)FUN_4a0c707c(uVar1,s_font_15_4a06dd70);
  if (local_28 != (int *)0x0) {
    (**(code **)(*local_28 + 0xc))();
  }
  uVar1 = FUN_4a0c48cc(&local_28,0x41700000);
  piVar4 = local_28;
  if ((local_28 != (int *)0x0) && (iVar2 = (**(code **)(*local_28 + 8))(local_28), iVar2 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  uVar3 = thunk_FUN_4a161570(0x2c);
  piVar4 = (int *)FUN_4a0a7828(uVar3,uVar1);
  (**(code **)(*piVar4 + 0x44))(piVar4,1);
  piVar4[8] = -0x1000000;
  (**(code **)(*piVar4 + 0x48))(piVar4,0);
  (**(code **)(*piVar4 + 0x4c))(piVar4,0,0);
  (**(code **)(*piVar4 + 0x50))(piVar4,0xff000000);
  piVar4[3] = 0;
  uVar1 = thunk_FUN_4a161570(0x2c);
  uVar1 = FUN_4a0a5198(uVar1,piVar4,5);
  FUN_4a16d2f0(param_1 + 0x1c,uVar1);
  return;
}



// Address: 4a06dd78

void FUN_4a06dd78(int param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined2 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  bool bVar16;
  undefined *local_a4;
  undefined4 local_a0;
  undefined *local_9c;
  int *local_98;
  int local_94;
  int *local_90;
  int *local_8c;
  int *local_88;
  int *local_84;
  undefined1 auStack_80 [20];
  undefined1 auStack_6c [20];
  undefined1 auStack_58 [8];
  int local_50;
  int *local_4c;
  undefined1 auStack_44 [20];
  undefined *local_30;
  undefined *local_2c;
  int local_28;
  
  local_28 = param_1;
  piVar5 = (int *)FUN_4a0c6bc0(auStack_44);
  puVar2 = PTR_PTR_4a06e454;
  local_2c = PTR_PTR_4a06e450;
  piVar5[2] = 0;
  piVar5[3] = 0;
  *piVar5 = (int)puVar2;
  iVar6 = FUN_4a15e080();
  if (iVar6 == 0) {
    iVar6 = FUN_4a1669a8();
  }
  iVar14 = 0;
  do {
    iVar11 = iVar14 * 2;
    iVar14 = iVar14 + 1;
    local_84 = (int *)0x0;
    *(undefined2 *)(iVar6 + iVar11) = 0;
  } while (iVar14 < 0xff);
  thunk_FUN_4a161570(0x18);
  piVar7 = (int *)FUN_4a0c0628();
  puVar3 = PTR_PTR_4a06e458;
  local_30 = PTR_PTR_4a06e458;
  piVar7[3] = 2;
  piVar7[4] = 0xff;
  *piVar7 = (int)puVar3;
  piVar7[2] = iVar6;
  *(undefined1 *)(piVar7 + 5) = 1;
  if (piVar7 != (int *)0x0) {
    (**(code **)(puVar3 + 0xc))(piVar7);
  }
  (**(code **)(*piVar5 + 0x1c))(piVar5);
  piVar5[2] = 0xff;
  piVar5[3] = (int)piVar7;
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0xc))(piVar7);
  }
  (**(code **)(*(int *)(param_1 + 0x78) + 0x1c))((int *)(param_1 + 0x78));
  *(undefined4 *)(param_1 + 0x80) = 0xff;
  *(int **)(param_1 + 0x84) = piVar7;
  FUN_4a16c1a0(auStack_44);
  if (*(int *)(local_28 + 0x84) == 0) {
    puVar8 = (undefined2 *)0x0;
  }
  else {
    puVar8 = *(undefined2 **)(*(int *)(local_28 + 0x84) + 8);
  }
  *puVar8 = 0;
  local_84 = (int *)(local_28 + 0x90);
  local_8c = (int *)FUN_4a0c6bc0(auStack_58);
  local_8c[2] = 0;
  puVar3 = PTR_PTR_4a06e45c;
  local_8c[3] = 0;
  *local_8c = (int)puVar3;
  local_90 = (int *)FUN_4a15e080(400);
  if (local_90 == (int *)0x0) {
    local_90 = (int *)FUN_4a1669a8();
  }
  iVar6 = 0;
  do {
    piVar5 = local_90 + iVar6 * 5;
    puVar9 = (undefined4 *)FUN_4a0c6bc0(&local_a4);
    puVar9[2] = 0;
    *puVar9 = puVar2;
    puVar9[3] = 0;
    puVar10 = (undefined4 *)FUN_4a0c6bc0(piVar5);
    *puVar10 = local_2c;
    puVar10[2] = puVar9[2];
    piVar5 = (int *)puVar9[3];
    puVar10[3] = piVar5;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))();
    }
    piVar5 = local_98;
    puVar3 = local_9c;
    *puVar10 = puVar2;
    local_a4 = puVar2;
    bVar16 = local_98 != (int *)0x0;
    if (bVar16) {
      iVar14 = local_98[2];
      cVar1 = (char)local_98[5];
    }
    else {
      iVar14 = 0;
      cVar1 = '\0';
    }
    local_98 = (int *)0x0;
    local_9c = (undefined *)0x0;
    if ((piVar5 == (int *)0x0) || (iVar11 = (**(code **)(*piVar5 + 8))(piVar5), iVar11 == 0)) {
      bVar4 = 0;
    }
    else {
      (**(code **)(*piVar5 + 4))(piVar5);
      bVar4 = 1;
    }
    if (!(bool)(bVar4 & (bVar16 && cVar1 != '\0'))) {
      iVar14 = 0;
    }
    if (iVar14 != 0) {
      iVar11 = 0;
      if (0 < (int)puVar3) {
        do {
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)puVar3);
        if (iVar14 == 0) goto LAB_4a06e000;
      }
      FUN_4a14f21c();
    }
LAB_4a06e000:
    FUN_4a0c6bf4(&local_a4);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x14);
  thunk_FUN_4a161570(0x18);
  puVar9 = (undefined4 *)FUN_4a0c0628();
  *puVar9 = local_30;
  puVar9[2] = local_90;
  puVar9[3] = 0x14;
  puVar9[4] = 0x14;
  *(undefined1 *)(puVar9 + 5) = 1;
  if (puVar9 != (undefined4 *)0x0) {
    (**(code **)(local_30 + 0xc))(puVar9);
  }
  (**(code **)(*local_8c + 0x1c))(local_8c);
  iVar6 = 0;
  local_8c[3] = (int)puVar9;
  local_8c[2] = 0x14;
  local_88 = local_8c;
  do {
    if (local_88[3] == 0) {
      iVar14 = 0;
    }
    else {
      iVar14 = *(int *)(local_88[3] + 8);
    }
    piVar7 = (int *)(iVar14 + iVar6 * 0x14);
    piVar5 = (int *)FUN_4a0c6bc0(&local_9c);
    piVar5[2] = 0;
    piVar5[3] = 0;
    *piVar5 = (int)puVar2;
    iVar14 = FUN_4a15e080(0x28);
    if (iVar14 == 0) {
      iVar14 = FUN_4a1669a8();
    }
    iVar11 = 0;
    do {
      iVar13 = iVar11 * 2;
      iVar11 = iVar11 + 1;
      local_a0 = 0;
      *(undefined2 *)(iVar14 + iVar13) = 0;
    } while (iVar11 < 0x14);
    thunk_FUN_4a161570(0x18);
    piVar12 = (int *)FUN_4a0c0628();
    piVar12[3] = 2;
    piVar12[4] = 0x14;
    *piVar12 = (int)local_30;
    piVar12[2] = iVar14;
    *(undefined1 *)(piVar12 + 5) = 1;
    if (piVar12 != (int *)0x0) {
      (**(code **)(local_30 + 0xc))(piVar12);
    }
    (**(code **)(*piVar5 + 0x1c))(piVar5);
    piVar5[2] = 0x14;
    piVar5[3] = (int)piVar12;
    if (piVar12 != (int *)0x0) {
      (**(code **)(*piVar12 + 0xc))(piVar12);
    }
    (**(code **)(*piVar7 + 0x1c))(piVar7);
    piVar5 = local_90;
    iVar14 = local_94;
    piVar7[2] = 0x14;
    piVar7[3] = (int)piVar12;
    local_9c = puVar2;
    bVar16 = local_90 != (int *)0x0;
    if (bVar16) {
      iVar11 = local_90[2];
      cVar1 = (char)local_90[5];
    }
    else {
      iVar11 = 0;
      cVar1 = '\0';
    }
    local_90 = (int *)0x0;
    local_94 = 0;
    if ((piVar5 == (int *)0x0) || (iVar13 = (**(code **)(*piVar5 + 8))(piVar5), iVar13 == 0)) {
      bVar4 = 0;
    }
    else {
      (**(code **)(*piVar5 + 4))(piVar5);
      bVar4 = 1;
    }
    if (!(bool)(bVar4 & (bVar16 && cVar1 != '\0'))) {
      iVar11 = 0;
    }
    if (iVar11 != 0) {
      iVar13 = 0;
      if (0 < iVar14) {
        do {
          iVar13 = iVar13 + 1;
        } while (iVar13 < iVar14);
        if (iVar11 == 0) goto LAB_4a06e240;
      }
      FUN_4a14f21c(iVar11);
    }
LAB_4a06e240:
    FUN_4a0c6bf4(&local_9c);
    iVar6 = iVar6 + 1;
    if (0x13 < iVar6) {
      if (local_4c != (int *)0x0) {
        (**(code **)(*local_4c + 0xc))(local_4c);
      }
      (**(code **)(*local_84 + 0x1c))(local_84);
      local_84[3] = (int)local_4c;
      local_84[2] = local_50;
      FUN_4a169024(auStack_58);
      iVar6 = local_28;
      iVar11 = 0;
      iVar14 = 1;
      do {
        iVar14 = iVar14 + 1;
        if (*(int *)(local_28 + 0x9c) == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = *(int *)(*(int *)(local_28 + 0x9c) + 8);
        }
        iVar13 = *(int *)(iVar13 + iVar11 * 0x14 + 0xc);
        iVar11 = iVar11 + 1;
        if (iVar13 == 0) {
          puVar8 = (undefined2 *)0x0;
        }
        else {
          puVar8 = *(undefined2 **)(iVar13 + 8);
        }
        *puVar8 = 0;
      } while (iVar14 < 0x15);
      piVar5 = (int *)(local_28 + 0xa4);
      iVar14 = FUN_4a16951c(auStack_6c,0x14);
      uVar15 = *(undefined4 *)(iVar14 + 8);
      piVar7 = *(int **)(iVar14 + 0xc);
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0xc))(piVar7);
      }
      (**(code **)(*piVar5 + 0x1c))(piVar5);
      *(undefined4 *)(iVar6 + 0xac) = uVar15;
      *(int **)(iVar6 + 0xb0) = piVar7;
      FUN_4a169628(auStack_6c);
      iVar6 = local_28;
      piVar7 = (int *)(local_28 + 0xb8);
      piVar5 = (int *)FUN_4a0c6bc0(auStack_80);
      puVar2 = PTR_PTR_4a06e460;
      piVar5[2] = 0;
      piVar5[3] = 0;
      *piVar5 = (int)puVar2;
      iVar14 = FUN_4a15e080(0x50);
      if (iVar14 == 0) {
        iVar14 = FUN_4a1669a8();
      }
      iVar11 = 0;
      do {
        local_84 = (int *)0x0;
        *(undefined4 *)(iVar14 + iVar11 * 4) = 0;
        iVar11 = iVar11 + 1;
      } while (iVar11 < 0x14);
      thunk_FUN_4a161570(0x18);
      piVar12 = (int *)FUN_4a0c0628();
      piVar12[3] = 4;
      piVar12[4] = 0x14;
      *piVar12 = (int)local_30;
      piVar12[2] = iVar14;
      *(undefined1 *)(piVar12 + 5) = 1;
      if (piVar12 != (int *)0x0) {
        (**(code **)(local_30 + 0xc))(piVar12);
      }
      (**(code **)(*piVar5 + 0x1c))(piVar5);
      piVar5[2] = 0x14;
      piVar5[3] = (int)piVar12;
      if (piVar12 != (int *)0x0) {
        (**(code **)(*piVar12 + 0xc))(piVar12);
      }
      (**(code **)(*piVar7 + 0x1c))(piVar7);
      *(undefined4 *)(iVar6 + 0xc0) = 0x14;
      *(int **)(iVar6 + 0xc4) = piVar12;
      FUN_4a16bef4(auStack_80);
      return;
    }
  } while( true );
}



// Address: 4a06e464

void FUN_4a06e464(undefined4 *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  *param_1 = PTR_PTR_4a06e65c;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(param_1 + 1);
  *puVar2 = PTR_PTR_4a06e660;
  puVar2[4] = 0;
  puVar2[2] = 10;
  puVar2[3] = 10;
  puVar2[5] = 0;
  iVar3 = thunk_FUN_4a161570(0x28);
  puVar2[5] = iVar3;
  if (iVar3 != 0) {
    iVar3 = 0;
    if (0 < (int)puVar2[4]) {
      do {
        iVar4 = iVar3 + 1;
        *(undefined4 *)(puVar2[5] + iVar3 * 4) = *(undefined4 *)(iVar3 * 4);
        iVar3 = iVar4;
      } while (iVar4 < (int)puVar2[4]);
    }
    thunk_FUN_4a161530(0);
  }
  iVar3 = puVar2[4];
  if ((int)puVar2[4] < (int)puVar2[3]) {
    do {
      iVar4 = iVar3 + 1;
      *(undefined4 *)(puVar2[5] + iVar3 * 4) = 0;
      iVar3 = iVar4;
    } while (iVar4 < (int)puVar2[3]);
  }
  puVar2 = (undefined4 *)FUN_4a0c6bc0(puVar2 + 6);
  *puVar2 = PTR_PTR_4a06e664;
  puVar2[4] = 0;
  puVar2[2] = 10;
  puVar2[3] = 10;
  puVar2[5] = 0;
  iVar3 = thunk_FUN_4a161570(0x28);
  puVar2[5] = iVar3;
  if (iVar3 != 0) {
    iVar3 = 0;
    if (0 < (int)puVar2[4]) {
      do {
        iVar4 = iVar3 + 1;
        *(undefined4 *)(puVar2[5] + iVar3 * 4) = *(undefined4 *)(iVar3 * 4);
        iVar3 = iVar4;
      } while (iVar4 < (int)puVar2[4]);
    }
    thunk_FUN_4a161530(0);
  }
  iVar3 = puVar2[4];
  if ((int)puVar2[4] < (int)puVar2[3]) {
    do {
      iVar4 = iVar3 + 1;
      *(undefined4 *)(puVar2[5] + iVar3 * 4) = 0;
      iVar3 = iVar4;
    } while (iVar4 < (int)puVar2[3]);
  }
  iVar3 = FUN_4a16951c(puVar2 + 6,10);
  iVar3 = FUN_4a16951c(iVar3 + 0x14,3);
  *(undefined4 *)(iVar3 + 0x14) = 0;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(iVar3 + 0x18);
  puVar1 = PTR_PTR_4a06e668;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = puVar1;
  puVar2[5] = 0;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(puVar2 + 6);
  puVar1 = PTR_PTR_4a06e66c;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = puVar1;
  puVar2[5] = 0;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(puVar2 + 6);
  puVar1 = PTR_PTR_4a06e670;
  puVar2[2] = 0;
  *puVar2 = puVar1;
  puVar2[3] = 0;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(puVar2 + 5);
  puVar1 = PTR_PTR_4a06e674;
  puVar2[2] = 0;
  *puVar2 = puVar1;
  puVar2[3] = 0;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(puVar2 + 5);
  puVar1 = PTR_PTR_4a06e678;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = puVar1;
  puVar2[5] = 0;
  puVar2[6] = 0;
  return;
}



// Address: 4a06e694

int FUN_4a06e694(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  *param_1 = PTR_PTR_4a06e82c;
  iVar1 = FUN_4a16bef4(param_1 + 0x2e);
  iVar1 = FUN_4a169628(iVar1 + -0x14);
  iVar1 = FUN_4a169024(iVar1 + -0x14);
  piVar4 = *(int **)(iVar1 + -4);
  if ((piVar4 != (int *)0x0) && (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  iVar1 = FUN_4a16c1a0(iVar1 + -0x18);
  iVar1 = FUN_4a169390(iVar1 + -0x18);
  iVar1 = FUN_4a169628(iVar1 + -0x18);
  iVar1 = FUN_4a169628(iVar1 + -0x14);
  iVar2 = 0;
  *(undefined4 *)(iVar1 + -0x18) = PTR_PTR_4a06e830;
  if (0 < *(int *)(iVar1 + -8)) {
    do {
      piVar4 = *(int **)(*(int *)(iVar1 + -4) + iVar2 * 4);
      *(undefined4 *)(*(int *)(iVar1 + -4) + iVar2 * 4) = 0;
      if ((piVar4 != (int *)0x0) && (iVar3 = (**(code **)(*piVar4 + 8))(piVar4), iVar3 != 0)) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar1 + -8));
  }
  *(undefined4 *)(iVar1 + -8) = 0;
  thunk_FUN_4a161530(*(undefined4 *)(iVar1 + -4));
  iVar1 = FUN_4a0c6bf4((undefined4 *)(iVar1 + -0x18));
  iVar2 = 0;
  *(undefined4 *)(iVar1 + -0x18) = PTR_PTR_4a06e834;
  if (0 < *(int *)(iVar1 + -8)) {
    do {
      piVar4 = *(int **)(*(int *)(iVar1 + -4) + iVar2 * 4);
      *(undefined4 *)(*(int *)(iVar1 + -4) + iVar2 * 4) = 0;
      if ((piVar4 != (int *)0x0) && (iVar3 = (**(code **)(*piVar4 + 8))(piVar4), iVar3 != 0)) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar1 + -8));
  }
  *(undefined4 *)(iVar1 + -8) = 0;
  thunk_FUN_4a161530(*(undefined4 *)(iVar1 + -4));
  iVar1 = FUN_4a0c6bf4((undefined4 *)(iVar1 + -0x18));
  return iVar1 + -4;
}



// Address: 4a06e86c

undefined4 *
FUN_4a06e86c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,int param_9,
            undefined4 param_10)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)FUN_4a0a41c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  *puVar1 = PTR_PTR_4a06e96c;
  puVar1[7] = param_8;
  puVar1[8] = param_9;
  puVar1[9] = 0;
  if (param_8 == 0x1907) {
    if (param_9 == 0x1401) {
      iVar2 = 3;
      goto LAB_4a06e934;
    }
    if (param_9 == 0x8363) {
LAB_4a06e914:
      iVar2 = 2;
      goto LAB_4a06e934;
    }
  }
  else if (param_8 == 0x1908) {
    if (param_9 == 0x1401) {
      iVar2 = 4;
      goto LAB_4a06e934;
    }
    if (param_9 == 0x8033) goto LAB_4a06e914;
  }
  else if (param_8 == 0x1906 && param_9 == 0x1401) {
    iVar2 = 1;
    goto LAB_4a06e934;
  }
  iVar2 = 0;
LAB_4a06e934:
  iVar2 = iVar2 * puVar1[5] * puVar1[4];
  uVar3 = thunk_FUN_4a161570(iVar2);
  puVar1[9] = uVar3;
  FUN_4a000f84(uVar3,param_10,iVar2);
  return puVar1;
}



// Address: 4a06e9b4

undefined4 * FUN_4a06e9b4(undefined4 *param_1)

{
  *param_1 = PTR_PTR_4a06e9e8;
  if (param_1[9] != 0) {
    thunk_FUN_4a161530();
    param_1[9] = 0;
  }
  return param_1;
}



// Address: 4a06e9ec

/* WARNING: Removing unreachable block (ram,0x4a0faea0) */
/* WARNING: Removing unreachable block (ram,0x4a0fae9c) */
/* WARNING: Removing unreachable block (ram,0x4a0faebc) */
/* WARNING: Removing unreachable block (ram,0x4a0faf08) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a06e9ec(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar9;
  
  puVar2 = PTR_DAT_4a06ec00;
  if (*(char *)(param_1 + 0x30) == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    return;
  }
  iVar8 = 0;
  if (param_2 != 0) {
    if (param_2 == 4) {
      if (*(int *)(param_1 + 0x50) != 0) {
        iVar8 = *(int *)(*(int *)(param_1 + 0x50) + 8);
      }
      *(undefined4 *)(iVar8 + 8) = 0xffffffff;
      return;
    }
    if (param_2 != 3) {
      return;
    }
    iVar6 = *(int *)(param_3 + 0xc);
    if (iVar6 != 0) {
      iVar3 = *(int *)(iVar6 + 8);
      iVar7 = *(int *)(iVar6 + 8);
    }
    else {
      iVar3 = 0;
      iVar7 = iVar8;
    }
    iVar7 = *(int *)(iVar7 + 8);
    if (iVar6 == 0) {
      iVar3 = iVar8;
    }
    iVar6 = FUN_4a134a60(*(undefined4 *)(iVar3 + 4),iVar7,*(undefined4 *)(param_1 + 0x34),
                         *(undefined4 *)(param_1 + 0x38));
    if (iVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a06eb6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    iVar6 = FUN_4a0ff494();
    if (*(int *)(iVar6 + 0x44) != 0) {
      iVar6 = FUN_4a0ff494();
      bVar9 = *(char *)(iVar6 + 0x48) != '\0';
      cVar1 = '\0';
      if (bVar9) {
        cVar1 = *puVar2;
      }
      uVar5 = 0x42280000;
      if (bVar9 && cVar1 != '\0') goto LAB_4a06eb9c;
    }
    uVar5 = 0x423c0000;
LAB_4a06eb9c:
    uVar4 = FUN_4a171fac(iVar7 - *(int *)(param_1 + 0x38));
    FUN_4a171bb8(uVar4,uVar5);
    uVar5 = FUN_4a171e1c();
    if (*(int *)(param_1 + 0x50) != 0) {
      iVar8 = *(int *)(*(int *)(param_1 + 0x50) + 8);
    }
    *(undefined4 *)(iVar8 + 8) = uVar5;
    uVar5 = FUN_4a134aa8(param_1);
    FUN_4a0cf554(uVar5,0x15);
    *(undefined4 *)(param_1 + 0x2c) = 1;
    uVar5 = FUN_4a134aa8(param_1);
    FUN_4a0cd790(uVar5,param_1);
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
                    /* WARNING: Could not recover jumptable at 0x4a0faeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)switchD_4a0faeb8::switchdataD_4a0faec0)();
    return;
  }
  iVar6 = *(int *)(param_3 + 0xc);
  if (iVar6 != 0) {
    iVar3 = *(int *)(iVar6 + 8);
    iVar7 = *(int *)(iVar6 + 8);
  }
  else {
    iVar7 = 0;
    iVar3 = 0;
  }
  iVar7 = *(int *)(iVar7 + 8);
  if (iVar6 == 0) {
    iVar3 = 0;
  }
  iVar6 = FUN_4a134a60(*(undefined4 *)(iVar3 + 4),iVar7,*(undefined4 *)(param_1 + 0x34),
                       *(undefined4 *)(param_1 + 0x38));
  if (iVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a06ea88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  iVar6 = FUN_4a0ff494();
  if (*(int *)(iVar6 + 0x44) != 0) {
    iVar6 = FUN_4a0ff494();
    bVar9 = *(char *)(iVar6 + 0x48) != '\0';
    cVar1 = '\0';
    if (bVar9) {
      cVar1 = *puVar2;
    }
    uVar5 = 0x42280000;
    if (bVar9 && cVar1 != '\0') goto LAB_4a06eab8;
  }
  uVar5 = 0x423c0000;
LAB_4a06eab8:
  uVar4 = FUN_4a171fac(iVar7 - *(int *)(param_1 + 0x38));
  FUN_4a171bb8(uVar4,uVar5);
  uVar5 = FUN_4a171e1c();
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar8 = *(int *)(*(int *)(param_1 + 0x50) + 8);
  }
  *(undefined4 *)(iVar8 + 8) = uVar5;
  return;
}



// Address: 4a06ec04

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

void FUN_4a06ec04(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar15;
  bool bVar16;
  undefined8 uVar17;
  int local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  int local_50;
  int *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int iStack_34;
  undefined4 local_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  iStack_2c = param_3;
  uStack_28 = param_4;
  FUN_4a041910(1);
  FUN_4a134a98(param_1,1);
  *(char *)(param_1 + 0x30) = (char)param_4;
  FUN_4a0ff494();
  local_4c = (int *)FUN_4a0ff400();
  iVar3 = (**(code **)(*local_4c + 8))(local_4c);
  uVar17 = FUN_4a0ff494();
  uVar11 = (undefined4)((ulonglong)uVar17 >> 0x20);
  iVar4 = (int)uVar17;
  local_50 = iVar4 + 0x278;
  local_54 = iVar4 + 0x128;
  if (param_3 == 0) {
    uVar11 = 0x428c0000;
  }
  *PTR_DAT_4a06f3a8 = (char)param_3;
  if (param_3 != 0) {
    bVar15 = *(int *)(iVar4 + 0x44) != 0;
    cVar1 = '\0';
    if (bVar15) {
      cVar1 = *(char *)(iVar4 + 0x48);
    }
    uVar11 = 0x41200000;
    if (!bVar15 || cVar1 == '\0') {
      uVar11 = 0x42200000;
    }
  }
  local_58 = FUN_4a1725c0(0x43a00000,uVar11);
  FUN_4a13ca78(iVar4);
  uVar11 = FUN_4a171fac();
  uVar11 = FUN_4a1725c0(uVar11,0x43c80000);
  uVar11 = FUN_4a17295c(uVar11,0xffffffff);
  FUN_4a13caa0(iVar4);
  uVar5 = FUN_4a171fac();
  uVar5 = FUN_4a1725c0(uVar5,local_58);
  uVar5 = FUN_4a17295c(uVar5,0xffffffff);
  uVar5 = FUN_4a171a94(uVar5,0x41200000);
  local_68 = DAT_4a06f3ac;
  if (iVar3 != 1) {
    local_68 = 0x3f800000;
  }
  local_6c = local_58;
  FUN_4a09ff60(local_54,0x47,0x48,0x49,0x4a,0x4b,0x4c,0x4d,0x4e,0x4f,uVar11,uVar5,0x43c80000);
  if (*(char *)(param_1 + 0x31) != '\0') {
    uVar6 = FUN_4a171a94(uVar11,0x41b80000);
    local_68 = FUN_4a171a94(uVar5,0x42040000);
    FUN_4a09f664(local_54,0x50,uVar6,local_68,0x3f800000,0x3f800000,0x3f800000,0);
    uVar6 = FUN_4a1725c0(uVar6,0x40a00000);
    local_6c = FUN_4a1725c0(local_68,0x40a00000);
    uVar7 = FUN_4a134aa8(param_1);
    uVar7 = FUN_4a0cb6c4(uVar7,2);
    local_38 = FUN_4a171e1c(local_6c);
    uVar6 = FUN_4a171e1c(uVar6);
    FUN_4a0fa6e8(uVar7,local_54,uVar6,local_38,1);
  }
  uVar6 = FUN_4a171a94(uVar11,0x43c80000);
  if (param_3 == 0) {
    uVar7 = 0xc1900000;
  }
  else {
    uVar7 = 0xc1b80000;
  }
  uVar6 = FUN_4a171a94(uVar6,uVar7);
  uVar7 = FUN_4a171a94(uVar5,0x41e00000);
  FUN_4a09f664(local_54,0x211,uVar6,uVar7,0x3f800000,0x3f800000,0x3f800000,0);
  FUN_4a1725c0(uVar6,0x421c0000);
  uVar8 = FUN_4a171e1c();
  local_5c = FUN_4a171e1c(uVar7);
  uVar6 = DAT_4a06f3b0;
  uVar7 = FUN_4a0cdbf4(local_4c);
  local_3c = FUN_4a171fac(local_5c);
  uVar8 = FUN_4a171fac(uVar8);
  FUN_4a09f664(local_54,uVar7,uVar8,local_3c,0x3f800000,uVar6,uVar6,0);
  if (*(int *)(param_1 + 0x50) == 0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = *(int **)(*(int *)(param_1 + 0x50) + 8);
  }
  iVar3 = *piVar9;
  local_40 = FUN_4a171a94(uVar11,0x43480000);
  uVar11 = 0;
  if (param_3 != 0) {
    uVar11 = 0xc25c0000;
  }
  local_60 = FUN_4a171a94(local_40,uVar11);
  iVar14 = 0x40800000;
  uVar11 = FUN_4a171fac(iVar3 + -1);
  bVar15 = *(int *)(iVar4 + 0x44) == 0;
  uVar12 = 0;
  if (!bVar15) {
    uVar12 = (uint)*(byte *)(iVar4 + 0x48);
  }
  bVar16 = uVar12 == 0;
  if ((!bVar15 && !bVar16) && param_3 != 0) {
    uVar12 = 0x42280000;
  }
  if ((bVar15 || bVar16) || param_3 == 0) {
    uVar12 = 0x423c0000;
  }
  uVar11 = FUN_4a17211c(uVar11,uVar12);
  uVar11 = FUN_4a1724e0(uVar11,local_58);
  uVar11 = FUN_4a17295c(uVar11,0xffffffff);
  uVar5 = FUN_4a1725c0(uVar5,0x40800000);
  local_64 = FUN_4a171a94(uVar5,uVar11);
  iVar13 = 0;
  if (0 < iVar3) {
    do {
      bVar15 = *(int *)(iVar4 + 0x44) == 0;
      cVar1 = '\0';
      if (!bVar15) {
        cVar1 = *(char *)(iVar4 + 0x48);
      }
      if ((!bVar15 && cVar1 != '\0') && param_3 != 0) {
        iVar14 = 0x42280000;
      }
      if ((bVar15 || cVar1 == '\0') || param_3 == 0) {
        iVar14 = 0x423c0000;
      }
      uVar11 = FUN_4a171fac(iVar13);
      uVar11 = FUN_4a17211c(uVar11,iVar14);
      iVar14 = FUN_4a171a94(uVar11,local_64);
      FUN_4a0a02bc(local_54,0x51,0x52,0x53,local_60,iVar14,0x437a0000,0x3f800000,0x3f800000,0,0);
      iVar10 = 0;
      if (*(int *)(param_1 + 0x50) != 0) {
        iVar10 = *(int *)(*(int *)(param_1 + 0x50) + 8);
      }
      if (*(int *)(iVar10 + 8) == iVar13) {
        uVar11 = 0x3f000000;
        if (*(int *)(param_1 + 0x2c) == 1) {
          uVar11 = FUN_4a0fb0c0();
        }
        FUN_4a0a02bc(local_54,0x54,0x55,0x56,local_60,iVar14,0x437a0000,uVar11,0x3f800000,0,0);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar3);
  }
  if (param_3 == 0) {
    FUN_4a09f3a4(local_54,local_30);
  }
  else {
    uVar11 = FUN_4a171a94(local_40,0x42ec0000);
    uVar5 = *(undefined4 *)PTR_DAT_4a06f3b4;
    local_68 = FUN_4a0bc200(uVar5);
    local_6c = FUN_4a0bc1f8(uVar5);
    if (local_6c < local_68) {
      piVar9 = &local_6c;
    }
    else {
      piVar9 = &local_68;
    }
    iVar14 = FUN_4a171fac(*piVar9 / 2);
    uVar5 = FUN_4a0cb6c4(local_4c,0x200000);
    uVar6 = FUN_4a171e1c(iVar14);
    uVar11 = FUN_4a171e1c(uVar11);
    FUN_4a0fa6e8(uVar5,local_54,uVar11,uVar6,*(undefined1 *)(param_1 + 0x30));
    FUN_4a09f3a4(local_54,local_30);
    FUN_4a171a94(iVar14,0x42280000);
    uVar5 = FUN_4a171e1c();
    FUN_4a06b074(local_50,local_30,0x81c,5,uVar11,uVar5,0x12);
  }
  iVar13 = 0;
  if (0 < iVar3) {
    local_44 = FUN_4a171e1c(local_60);
    do {
      bVar15 = *(int *)(iVar4 + 0x44) == 0;
      cVar1 = '\0';
      if (!bVar15) {
        cVar1 = *(char *)(iVar4 + 0x48);
      }
      if ((!bVar15 && cVar1 != '\0') && param_3 != 0) {
        iVar14 = 0x42280000;
      }
      if ((bVar15 || cVar1 == '\0') || param_3 == 0) {
        iVar14 = 0x423c0000;
      }
      uVar11 = FUN_4a171fac(iVar13);
      uVar11 = FUN_4a17211c(uVar11,iVar14);
      FUN_4a171a94(uVar11,local_64);
      iVar14 = FUN_4a171e1c();
      iVar10 = 0;
      if (*(int *)(param_1 + 0x50) != 0) {
        iVar10 = *(int *)(*(int *)(param_1 + 0x50) + 8);
      }
      iVar10 = *(int *)(iVar10 + (iVar13 + 5) * 4);
      FUN_4a06b074(local_50,local_30,iVar10,4,local_44,iVar14,0x12);
      if (iVar10 == 0x829) {
        local_48 = FUN_4a171fac(iVar14 + -2);
        iVar14 = 0x420c0000;
        uVar11 = FUN_4a171a94(local_60,0x420c0000);
        uVar11 = FUN_4a1725c0(uVar11,0x42fa0000);
        FUN_4a09f664(local_54,0xa4,uVar11,local_48,0x3f800000,0x3f800000,0x3f800000,0);
        uVar11 = FUN_4a1725c0(local_60,0x420c0000);
        uVar11 = FUN_4a171a94(uVar11,0x42fa0000);
        FUN_4a09f664(local_54,0xa4,uVar11,local_48,0x3f800000,0x3f800000,0x3f800000,0);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar3);
  }
  FUN_4a1725c0(local_60,0x43160000);
  uVar11 = FUN_4a171e1c();
  *(undefined4 *)(param_1 + 0x34) = uVar11;
  bVar15 = *(int *)(iVar4 + 0x44) == 0;
  uVar12 = 0;
  if (!bVar15) {
    uVar12 = (uint)*(byte *)(iVar4 + 0x48);
  }
  bVar16 = uVar12 == 0;
  if ((!bVar15 && !bVar16) && param_3 != 0) {
    uVar12 = 0x42280000;
  }
  if ((bVar15 || bVar16) || param_3 == 0) {
    uVar12 = 0x423c0000;
  }
  uVar11 = FUN_4a17295c(uVar12,0xffffffff);
  FUN_4a1724e0(uVar11,local_64);
  uVar11 = FUN_4a171e1c();
  *(undefined4 *)(param_1 + 0x38) = uVar11;
  *(undefined4 *)(param_1 + 0x3c) = 300;
  bVar15 = *(int *)(iVar4 + 0x44) == 0;
  uVar12 = 0;
  if (!bVar15) {
    uVar12 = (uint)*(byte *)(iVar4 + 0x48);
  }
  bVar16 = uVar12 == 0;
  if ((!bVar15 && !bVar16) && param_3 != 0) {
    uVar12 = 0x42280000;
  }
  if ((bVar15 || bVar16) || param_3 == 0) {
    uVar12 = 0x423c0000;
  }
  FUN_4a17211c(uVar12,0x423c0000);
  uVar11 = FUN_4a171e1c();
  *(undefined4 *)(param_1 + 0x40) = uVar11;
  FUN_4a09f3a4(local_54,local_30);
  puVar2 = PTR_DAT_4a041a9c;
  iVar3 = 0;
  if (*(int *)PTR_DAT_4a041a9c != 0) {
    iVar3 = *(int *)(PTR_DAT_4a041a9c + 4);
  }
  if (*(int *)PTR_DAT_4a041a9c != 0 && iVar3 != 0) {
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
    if (*(int *)(puVar2 + 0x20) != 0) {
      *(int *)(puVar2 + 8) = *(int *)(puVar2 + 0x34) + *(int *)(puVar2 + 0x3c);
      *(int *)(puVar2 + 0xc) = *(int *)(puVar2 + 0x38) + *(int *)(puVar2 + 0x40);
      FUN_4a150d7c((*(int *)(puVar2 + 0x10) + *(int *)(puVar2 + 0x18)) - *(int *)(puVar2 + 0x3c) / 2
                   ,-(*(int *)(puVar2 + 0x40) / 2));
      *(undefined4 *)(puVar2 + 0x24) = 1;
      thunk_FUN_4a150140(0xc11);
      FUN_4a1507ec(*(undefined4 *)(puVar2 + 0x34),0,*(undefined4 *)(puVar2 + 0x34),
                   *(undefined4 *)(puVar2 + 0x38));
      *(undefined4 *)(puVar2 + 0x24) = 0;
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a0419cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a06f3b8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a06f3b8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar8;
  undefined1 auStack_20 [12];
  int iStack_14;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    return;
  }
  param_2 = *(int *)(param_1 + 0x68) + param_2;
  *(int *)(param_1 + 0x68) = param_2;
  if (7999 < param_2) {
    *(int *)(param_1 + 0x68) = param_2 + -8000;
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x2c) != 1) {
    return;
  }
  FUN_4a0faf18(param_1 + 0x58);
  if ((*(uint *)(param_1 + 100) & 2) == 0) {
    iVar1 = *(int *)(param_1 + 0x50);
    bVar8 = iVar1 != 0;
    if (bVar8) {
      iVar5 = *(int *)(iVar1 + 8);
    }
    else {
      iVar5 = 0;
    }
    if (bVar8) {
      iVar6 = *(int *)(iVar1 + 8);
    }
    else {
      iVar6 = 0;
    }
    uVar7 = *(undefined4 *)(iVar6 + (*(int *)(iVar5 + 8) + 5) * 4);
    if (bVar8) {
      iVar1 = *(int *)(iVar1 + 8);
    }
    else {
      iVar1 = 0;
    }
    *(undefined4 *)(iVar1 + 8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    uVar2 = FUN_4a134aa8(param_1);
    FUN_4a0cdbe0(uVar2,param_1);
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
    *(undefined4 *)(iVar1 + 8) = uVar7;
    (**(code **)(*piVar3 + 0x20))(piVar3,0xb,auStack_20);
    FUN_4a16bef4(auStack_20);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a06f418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a06f47c

void FUN_4a06f47c(int param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  *(undefined1 *)(param_1 + 0x31) = param_3;
  uVar3 = *(undefined4 *)(param_2 + 8);
  piVar2 = *(int **)(param_2 + 0xc);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))(piVar2);
  }
  (**(code **)(*(int *)(param_1 + 0x44) + 0x1c))((int *)(param_1 + 0x44));
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  *(int **)(param_1 + 0x50) = piVar2;
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_2 + 0xc) + 8);
  }
  *(undefined4 *)(iVar1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  iVar1 = FUN_4a134aa8(param_1);
  if (*(int *)(iVar1 + 0x40) == param_1) {
    *(undefined4 *)(iVar1 + 0x40) = 0;
  }
  return;
}



// Address: 4a06f504

void FUN_4a06f504(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)FUN_4a134ac8();
  puVar1 = PTR_PTR_4a06f5a4;
  *puVar2 = PTR_PTR_4a06f5a4;
  puVar2[4] = puVar1 + 0x50;
  puVar2[6] = puVar1 + 0x70;
  puVar2[7] = puVar1 + 0x80;
  puVar2[8] = puVar1 + 0x90;
  puVar2[5] = puVar1 + 0x60;
  puVar2[3] = puVar1 + 0x40;
  puVar2[2] = puVar1 + 0x30;
  puVar2[9] = puVar1 + 0xa0;
  puVar2[0xb] = 0;
  *(undefined1 *)(puVar2 + 0xc) = 1;
  *(undefined1 *)((int)puVar2 + 0x31) = 1;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(puVar2 + 0x11);
  puVar1 = PTR_PTR_4a06f5a8;
  puVar2[2] = 0;
  *puVar2 = puVar1;
  puVar2[3] = 0;
  iVar3 = FUN_4a0fb394(puVar2 + 5);
  *(undefined4 *)(iVar3 + 0x10) = 0;
  return;
}



// Address: 4a06f5c4

void FUN_4a06f5c4(undefined4 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  puVar2 = PTR_PTR_4a06f6d8;
  *param_1 = PTR_PTR_4a06f6d8;
  param_1[4] = puVar2 + 0x50;
  param_1[6] = puVar2 + 0x70;
  param_1[7] = puVar2 + 0x80;
  param_1[8] = puVar2 + 0x90;
  param_1[5] = puVar2 + 0x60;
  param_1[3] = puVar2 + 0x40;
  param_1[2] = puVar2 + 0x30;
  param_1[9] = puVar2 + 0xa0;
  puVar2 = PTR_PTR_4a06f6dc;
  param_1[0x11] = PTR_PTR_4a06f6dc;
  iVar4 = param_1[0x13];
  piVar5 = (int *)param_1[0x14];
  if (piVar5 != (int *)0x0) {
    iVar6 = piVar5[2];
    puVar2 = (undefined *)(uint)*(byte *)(piVar5 + 5);
  }
  else {
    iVar6 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x13] = 0;
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
      if (iVar3 == 0) goto LAB_4a06f6c4;
    }
    FUN_4a14f21c();
  }
LAB_4a06f6c4:
  iVar4 = FUN_4a0c6bf4(param_1 + 0x11);
  *(undefined **)(iVar4 + -0x44) = PTR_PTR_4a0c0674;
  *(undefined4 *)(iVar4 + -0x40) = 0xffffffff;
  return;
}



// Address: 4a06f6e0

void FUN_4a06f6e0(void)

{
  FUN_4a06f6ec();
  return;
}



// Address: 4a06f6ec

undefined4 FUN_4a06f6ec(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_4a0014ec(*(int *)(*(int *)(param_1 + 0x10) + 8) + param_2 * 0x10 + 8);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return 0;
}



// Address: 4a06f708

void FUN_4a06f708(undefined4 *param_1)

{
  *param_1 = PTR_FUN_4a06f76e_1_4a06f71c;
  param_1[2] = PTR_FUN_4a06f6e0_1_4a06f720;
  param_1[1] = PTR_FUN_4a06f746_1_4a06f724;
  param_1[3] = PTR_LAB_4a06f77a_1_4a06f728;
  return;
}



// Address: 4a06f72c

undefined4 FUN_4a06f72c(int param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (0x80 < iVar1) {
    iVar1 = 0x80;
  }
  *param_3 = iVar1;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - *param_3;
  *param_2 = *(undefined4 *)(param_1 + 0x18);
  return 0;
}



// Address: 4a06f746

void FUN_4a06f746(void)

{
  FUN_4a06f72c();
  return;
}



// Address: 4a06f750

undefined4 FUN_4a06f750(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_4a00dbc4(0x80);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  FUN_4a05a24a(uVar1,0x80);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return 0;
}



// Address: 4a06f76e

void FUN_4a06f76e(void)

{
  FUN_4a06f750();
  return;
}



// Address: 4a06f77e

int FUN_4a06f77e(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_4a06f708(param_1);
  return param_1;
}



// Address: 4a06f792

int FUN_4a06f792(int param_1)

{
  FUN_4a05a298(*(undefined4 *)(param_1 + 0x18));
  return param_1;
}



// Address: 4a06f7a4

int FUN_4a06f7a4(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  uVar6 = *(uint *)(param_1 + 0x24);
  if ((uVar6 & 1) == 0 || (uVar6 & 2) == 0) {
    return param_1;
  }
  iVar8 = *(int *)(param_1 + 0x18);
  iVar7 = *(int *)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x20) * param_2 >> 7;
  if ((uVar6 & 8) == 0) {
    iVar4 = *(int *)(param_1 + 0x14) + iVar2;
    iVar5 = iVar4;
    if (iVar4 <= iVar7) goto LAB_4a06f840;
    iVar5 = iVar7;
    if ((uVar6 & 4) == 0) goto LAB_4a06f83c;
    if (iVar7 - iVar8 <= iVar2) goto LAB_4a06f840;
    iVar4 = iVar4 - iVar7;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x14) - iVar2;
    iVar5 = iVar4;
    if (iVar8 <= iVar4) goto LAB_4a06f840;
    iVar5 = iVar8;
    if ((uVar6 & 4) == 0) {
LAB_4a06f83c:
      uVar6 = uVar6 & 0xfffffffd;
      goto LAB_4a06f840;
    }
    iVar5 = iVar7;
    if (iVar7 - iVar8 <= iVar2) goto LAB_4a06f840;
    iVar4 = iVar4 + iVar7;
  }
  iVar5 = iVar4 + iVar8;
LAB_4a06f840:
  *(int *)(param_1 + 0x14) = iVar5;
  *(uint *)(param_1 + 0x24) = uVar6;
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    iVar7 = (**(code **)(*piVar1 + 0x30))(piVar1);
    iVar2 = 0;
    if (piVar1[2] != 0) {
      iVar2 = *(int *)(piVar1[2] + 0x10);
    }
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      iVar8 = *(int *)(*(int *)(piVar1[2] + 0x14) + iVar2 * 4);
      if ((*(uint *)(*(int *)(iVar8 + 0x2c) + 0x30) & 0x60000000) != 0) {
        uVar3 = FUN_4a1395b4(iVar8,iVar5);
        (**(code **)(*piVar1 + 0x1c))(piVar1,*(undefined4 *)(iVar8 + 0x30),uVar3);
      }
    }
    (**(code **)(*piVar1 + 0x24))(piVar1,iVar5);
    return iVar7;
  }
  return 0;
}



// Address: 4a06f860

int FUN_4a06f860(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x24) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18);
  }
  return iVar1;
}



// Address: 4a06f87c

undefined4 FUN_4a06f87c(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  param_2 = param_2 + *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x14) = param_2;
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x30))(piVar1);
    iVar3 = 0;
    if (piVar1[2] != 0) {
      iVar3 = *(int *)(piVar1[2] + 0x10);
    }
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      iVar5 = *(int *)(*(int *)(piVar1[2] + 0x14) + iVar3 * 4);
      if ((*(uint *)(*(int *)(iVar5 + 0x2c) + 0x30) & 0x60000000) != 0) {
        uVar4 = FUN_4a1395b4(iVar5,param_2);
        (**(code **)(*piVar1 + 0x1c))(piVar1,*(undefined4 *)(iVar5 + 0x30),uVar4);
      }
    }
    (**(code **)(*piVar1 + 0x24))(piVar1,param_2);
    return uVar2;
  }
  return 0;
}



// Address: 4a06f898

void FUN_4a06f898(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x24) & 0xfffffffd;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x24) | 2;
  }
  *(uint *)(param_1 + 0x24) = uVar1;
  return;
}



// Address: 4a06f8b0

longlong FUN_4a06f8b0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  
  if ((*(uint *)(param_1 + 0x24) & 1) == 0) {
    return (ulonglong)*(uint *)(param_1 + 0x24) << 0x20;
  }
  uVar2 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  uVar1 = uVar2 * 0x80;
  uVar3 = *(uint *)(param_1 + 0x20);
  if ((int)(uVar1 | uVar3) < 0) {
    uVar5 = uVar3 & 0x80000000;
    if ((int)uVar5 < 0) {
      uVar3 = -uVar3;
    }
    uVar6 = uVar5 ^ (int)uVar1 >> 0x20;
    if (SUB41(uVar1 >> 0x1f,0)) {
      uVar1 = uVar2 * -0x80;
    }
    uVar2 = uVar3;
    if (uVar1 >> 4 < uVar3) goto LAB_4a0017bc;
    if (uVar1 >> 8 < uVar3) goto LAB_4a00178c;
    uVar2 = uVar3 << 6;
    uVar5 = 0xfc000000;
    if (uVar1 >> 8 < uVar2) goto LAB_4a00178c;
    uVar2 = uVar3 << 0xc;
    uVar5 = 0xfff00000;
    if (uVar1 >> 8 < uVar2) goto LAB_4a00178c;
    uVar2 = uVar3 << 0x12;
    uVar5 = 0xffffc000;
    if (uVar2 <= uVar1 >> 8) {
      uVar2 = uVar3 << 0x18;
      uVar5 = 0xffffff00;
    }
    bVar7 = uVar2 == 0;
    if (!bVar7) {
      do {
        if (bVar7) {
          uVar2 = uVar2 >> 6;
        }
LAB_4a00178c:
        bVar7 = uVar2 <= uVar1 >> 7;
        if (bVar7) {
          uVar1 = uVar1 + uVar2 * -0x80;
        }
        bVar8 = uVar2 <= uVar1 >> 6;
        if (bVar8) {
          uVar1 = uVar1 + uVar2 * -0x40;
        }
        bVar9 = uVar2 <= uVar1 >> 5;
        if (bVar9) {
          uVar1 = uVar1 + uVar2 * -0x20;
        }
        bVar10 = uVar2 <= uVar1 >> 4;
        if (bVar10) {
          uVar1 = uVar1 + uVar2 * -0x10;
        }
        uVar5 = (((uVar5 * 2 + (uint)bVar7) * 2 + (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10
        ;
LAB_4a0017bc:
        bVar7 = uVar2 <= uVar1 >> 3;
        if (bVar7) {
          uVar1 = uVar1 + uVar2 * -8;
        }
        uVar3 = uVar5 * 2 + (uint)bVar7;
        bVar8 = uVar2 <= uVar1 >> 2;
        if (bVar8) {
          uVar1 = uVar1 + uVar2 * -4;
        }
        uVar5 = uVar3 * 2 + (uint)bVar8;
        bVar7 = true;
      } while (CARRY4(uVar3,uVar3) || CARRY4(uVar3 * 2,(uint)bVar8));
      bVar7 = uVar2 <= uVar1 >> 1;
      if (bVar7) {
        uVar1 = uVar1 + uVar2 * -2;
      }
      uVar3 = uVar1 - uVar2;
      if (uVar2 > uVar1) {
        uVar3 = uVar1;
      }
      iVar4 = (uVar5 * 2 + (uint)bVar7) * 2 + (uint)(uVar2 <= uVar1);
      if ((int)uVar6 >> 0x1f < 0) {
        iVar4 = -iVar4;
      }
      if ((bool)((byte)(uVar6 >> 0x1e) & 1)) {
        uVar3 = -uVar3;
      }
      return CONCAT44(uVar3,iVar4);
    }
LAB_4a004788:
    FUN_4a0063f0(2);
    return 0;
  }
  if ((uVar2 & 0x1ffffff) << 6 < uVar3) {
    if (uVar1 < uVar3) {
      return (ulonglong)uVar1 << 0x20;
    }
    return CONCAT44(uVar1 - uVar3,1);
  }
  iVar4 = 0;
  uVar5 = uVar3;
  if (uVar3 <= (uVar2 & 0x1ffffff) << 3) {
    if (uVar3 <= (uVar2 & 0x1ffffff) >> 1) {
      if ((uVar2 & 0x1ffffff) >> 5 < uVar3) goto LAB_4a00167c;
      if ((uVar2 & 0x1ffffff) >> 9 < uVar3) goto LAB_4a00164c;
      uVar5 = uVar3 << 8;
      iVar4 = -0x1000000;
      if (uVar5 <= (uVar2 & 0x1ffffff) >> 9) {
        iVar4 = -0x10000;
        uVar5 = uVar3 << 0x10;
      }
      if ((uVar2 & 0x1ffffff) >> 5 < uVar5) goto LAB_4a00167c;
      bVar7 = false;
      if (uVar5 == 0) goto LAB_4a004788;
      do {
        if (bVar7) {
          uVar5 = uVar5 >> 8;
        }
LAB_4a00164c:
        bVar7 = uVar5 <= uVar1 >> 0xf;
        if (bVar7) {
          uVar1 = uVar1 + uVar5 * -0x8000;
        }
        bVar8 = uVar5 <= uVar1 >> 0xe;
        if (bVar8) {
          uVar1 = uVar1 + uVar5 * -0x4000;
        }
        bVar9 = uVar5 <= uVar1 >> 0xd;
        if (bVar9) {
          uVar1 = uVar1 + uVar5 * -0x2000;
        }
        bVar10 = uVar5 <= uVar1 >> 0xc;
        if (bVar10) {
          uVar1 = uVar1 + uVar5 * -0x1000;
        }
        iVar4 = (((iVar4 * 2 + (uint)bVar7) * 2 + (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10
        ;
LAB_4a00167c:
        bVar7 = uVar5 <= uVar1 >> 0xb;
        if (bVar7) {
          uVar1 = uVar1 + uVar5 * -0x800;
        }
        bVar8 = uVar5 <= uVar1 >> 10;
        if (bVar8) {
          uVar1 = uVar1 + uVar5 * -0x400;
        }
        bVar9 = uVar5 <= uVar1 >> 9;
        if (bVar9) {
          uVar1 = uVar1 + uVar5 * -0x200;
        }
        uVar3 = ((iVar4 * 2 + (uint)bVar7) * 2 + (uint)bVar8) * 2 + (uint)bVar9;
        bVar8 = uVar5 <= uVar1 >> 8;
        if (bVar8) {
          uVar1 = uVar1 + uVar5 * -0x100;
        }
        iVar4 = uVar3 * 2 + (uint)bVar8;
        bVar7 = true;
      } while (CARRY4(uVar3,uVar3) || CARRY4(uVar3 * 2,(uint)bVar8));
    }
    bVar7 = uVar5 <= uVar1 >> 7;
    if (bVar7) {
      uVar1 = uVar1 + uVar5 * -0x80;
    }
    bVar8 = uVar5 <= uVar1 >> 6;
    if (bVar8) {
      uVar1 = uVar1 + uVar5 * -0x40;
    }
    bVar9 = uVar5 <= uVar1 >> 5;
    if (bVar9) {
      uVar1 = uVar1 + uVar5 * -0x20;
    }
    bVar10 = uVar5 <= uVar1 >> 4;
    if (bVar10) {
      uVar1 = uVar1 + uVar5 * -0x10;
    }
    iVar4 = (((iVar4 * 2 + (uint)bVar7) * 2 + (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10;
  }
  bVar7 = uVar5 <= uVar1 >> 3;
  if (bVar7) {
    uVar1 = uVar1 + uVar5 * -8;
  }
  bVar8 = uVar5 <= uVar1 >> 2;
  if (bVar8) {
    uVar1 = uVar1 + uVar5 * -4;
  }
  bVar9 = uVar5 <= uVar1 >> 1;
  if (bVar9) {
    uVar1 = uVar1 + uVar5 * -2;
  }
  uVar3 = uVar1 - uVar5;
  if (uVar5 > uVar1) {
    uVar3 = uVar1;
  }
  return CONCAT44(uVar3,(((iVar4 * 2 + (uint)bVar7) * 2 + (uint)bVar8) * 2 + (uint)bVar9) * 2 +
                        (uint)(uVar5 <= uVar1));
}



// Address: 4a06f8dc

undefined4 FUN_4a06f8dc(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  *(undefined4 *)(param_1 + 0x14) = param_2;
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x30))(piVar1);
    iVar3 = 0;
    if (piVar1[2] != 0) {
      iVar3 = *(int *)(piVar1[2] + 0x10);
    }
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      iVar5 = *(int *)(*(int *)(piVar1[2] + 0x14) + iVar3 * 4);
      if ((*(uint *)(*(int *)(iVar5 + 0x2c) + 0x30) & 0x60000000) != 0) {
        uVar4 = FUN_4a1395b4(iVar5,param_2);
        (**(code **)(*piVar1 + 0x1c))(piVar1,*(undefined4 *)(iVar5 + 0x30),uVar4);
      }
    }
    (**(code **)(*piVar1 + 0x24))(piVar1,param_2);
    return uVar2;
  }
  return 0;
}



// Address: 4a06f8f0

void FUN_4a06f8f0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  piVar2 = *(int **)(param_1 + 0x28);
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  *(int **)(param_1 + 0x28) = param_2;
  return;
}



// Address: 4a06f95c

/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff0 : 0x4a06fa34 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_4a06f95c(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int in_r12;
  bool bVar9;
  
  uVar6 = *(uint *)(param_1 + 0x24);
  bVar9 = (uVar6 & 1) == 0;
  iVar4 = 0;
  if (!bVar9) {
    in_r12 = *(int *)(param_1 + 8);
    iVar4 = *(int *)(in_r12 + 8);
  }
  if (bVar9 || iVar4 <= param_2) {
    return param_1;
  }
  if (param_2 < 0) {
    return param_1;
  }
  bVar9 = (param_3 & 0x10) == 0;
  if (bVar9) {
    iVar4 = *(int *)(param_1 + 0xc);
  }
  if (bVar9 && iVar4 == param_2) {
    iVar4 = *(int *)(param_1 + 0x14);
    iVar7 = *(int *)(param_1 + 0x1c);
    if (iVar4 <= iVar7) {
      if (iVar4 <= *(int *)(param_1 + 0x18)) {
        iVar4 = *(int *)(param_1 + 0x18);
      }
      goto LAB_4a06fa0c;
    }
  }
  else {
    *(int *)(param_1 + 0xc) = (int)(short)param_2;
    iVar7 = 0;
    if (*(int *)(in_r12 + 0xc) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(in_r12 + 0xc) + 8);
    }
    if (*(int *)(in_r12 + 0x20) != 0) {
      iVar7 = *(int *)(*(int *)(in_r12 + 0x20) + 8);
    }
    iVar4 = *(int *)(param_1 + 0x10) * (int)*(short *)(iVar4 + param_2 * 2);
    iVar7 = (int)*(short *)(iVar7 + param_2 * 2) * *(int *)(param_1 + 0x10);
    *(int *)(param_1 + 0x18) = iVar4;
    *(int *)(param_1 + 0x1c) = iVar7;
    if ((uVar6 & 8) == 0) {
LAB_4a06fa0c:
      *(int *)(param_1 + 0x14) = iVar4;
      goto LAB_4a06fa10;
    }
  }
  *(int *)(param_1 + 0x14) = iVar7;
LAB_4a06fa10:
  uVar2 = 3;
  if ((param_3 & 4) != 0) {
    uVar2 = 7;
  }
  *(uint *)(param_1 + 0x24) = uVar2 | uVar6 & 8;
  piVar5 = *(int **)(param_1 + 0x28);
  if (piVar5 == (int *)0x0) {
    return param_1;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  iVar7 = (**(code **)(*piVar5 + 0x30))(piVar5);
  iVar4 = 0;
  if (piVar5[2] != 0) {
    iVar4 = *(int *)(piVar5[2] + 0x10);
  }
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    iVar8 = *(int *)(*(int *)(piVar5[2] + 0x14) + iVar4 * 4);
    if ((*(uint *)(*(int *)(iVar8 + 0x2c) + 0x30) & 0x60000000) != 0) {
      uVar1 = FUN_4a1395b4(iVar8,uVar3);
      (**(code **)(*piVar5 + 0x1c))(piVar5,*(undefined4 *)(iVar8 + 0x30),uVar1);
    }
  }
  (**(code **)(*piVar5 + 0x24))(piVar5,uVar3);
  return iVar7;
}



// Address: 4a06fa68

void FUN_4a06fa68(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a06fabc;
  puVar1[3] = 0xffffffff;
  puVar1[4] = 0x28;
  puVar1[5] = 0;
  puVar1[2] = param_2;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0x80;
  puVar1[10] = 0;
  puVar1[9] = 1;
  return;
}



// Address: 4a06fb30

void FUN_4a06fb30(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = PTR_PTR_4a06fb90;
  piVar2 = (int *)param_1[10];
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  param_1[10] = 0;
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a06fbb0

void FUN_4a06fbb0(int param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x1c);
      *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x20) * 0x30 != iVar1; iVar1 = iVar1 + 0x30) {
    FUN_4a0e4994(iVar1,param_1 + 0x18);
  }
  return;
}



// Address: 4a06fbdc

/* WARNING: Removing unreachable block (ram,0x4a06fc0e) */

void FUN_4a06fbdc(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_44 [32];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  local_18 = *(int *)(*(int *)PTR_DAT_4a06fcac + 100);
  local_1c = 0;
  puVar1 = (undefined4 *)thunk_FUN_4a161570(0x10);
  *puVar1 = 0;
  puVar1[2] = 0;
  *(byte *)(puVar1 + 3) = *(byte *)(puVar1 + 3) & 0xfc;
  puVar1[1] = 0;
  puVar1[1] = 0;
  *(undefined4 **)(param_1 + 0x14) = puVar1;
  for (iVar5 = *(int *)(param_1 + 0x1c);
      *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x20) * 0x30 != iVar5; iVar5 = iVar5 + 0x30) {
    local_20 = 0;
    for (iVar4 = *(int *)(iVar5 + 0x20);
        *(int *)(iVar5 + 0x20) + *(int *)(iVar5 + 0x24) * 0x18 != iVar4; iVar4 = iVar4 + 0x18) {
      for (local_24 = *(int *)(iVar4 + 8);
          *(int *)(iVar4 + 8) + *(int *)(iVar4 + 0xc) * 0x18 != local_24; local_24 = local_24 + 0x18
          ) {
        FUN_4a000d18(auStack_44,s_G_xB_dP_dM0_4a06fcb0,*(undefined4 *)(local_18 + 4),local_1c,
                     local_20);
        uVar2 = FUN_4a02b1e8(auStack_44);
        *(undefined4 *)(local_24 + 8) = uVar2;
        piVar3 = *(int **)(param_1 + 0x14);
        FUN_4a16f922(piVar3,piVar3[1] + 1);
        *(int *)(*piVar3 + piVar3[1] * 4) = local_24;
        piVar3[1] = piVar3[1] + 1;
      }
      local_20 = local_20 + 1;
    }
    local_1c = local_1c + 1;
  }
  return;
}



// Address: 4a06fcbc

void FUN_4a06fcbc(int param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = *(int *)(*(int *)(*(int *)PTR_DAT_4a06fd74 + 0x30) + 0xd8);
  if (*(int *)(iVar2 + 0x20) != 0) {
    uVar3 = *(uint *)(*(int *)(iVar2 + 0x1c) + 0x18);
    for (iVar8 = *(int *)(param_1 + 0x1c);
        *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x20) * 0x30 != iVar8; iVar8 = iVar8 + 0x30) {
      for (iVar6 = *(int *)(iVar8 + 0x20);
          *(int *)(iVar8 + 0x20) + *(int *)(iVar8 + 0x24) * 0x18 != iVar6; iVar6 = iVar6 + 0x18) {
        for (iVar7 = *(int *)(iVar6 + 8);
            *(int *)(iVar6 + 8) + *(int *)(iVar6 + 0xc) * 0x18 != iVar7; iVar7 = iVar7 + 0x18) {
          iVar5 = *(int *)(iVar7 + 4);
          if ((uVar3 & 7) >> 2 == 0) {
            *(undefined1 *)(iVar5 + 0x41) = 0;
            if (*(int *)(iVar5 + 0x34) << 0x13 < 0) {
              FUN_4a061c94(iVar5);
              puVar1 = PTR_DAT_4a06fd7c;
              if (*(int *)PTR_DAT_4a06fd7c != 0) {
                *(undefined1 *)(*(int *)PTR_DAT_4a06fd7c + 0x41) = 0;
                *(undefined4 *)puVar1 = 0;
              }
            }
          }
          else if ((-1 < *(int *)(iVar5 + 0x34) << 8) &&
                  (iVar4 = FUN_4a170752(iVar2 + 4,iVar5 + 4), iVar4 == -1)) {
            *(uint *)(iVar5 + 0x34) =
                 (*(uint *)(iVar5 + 0x34) | DAT_4a06fd78) & ~((int)DAT_4a06fd78 >> 0xd);
          }
        }
      }
    }
  }
  return;
}



// Address: 4a06fd80

void FUN_4a06fd80(void)

{
  return;
}



// Address: 4a06fd84

undefined4 FUN_4a06fd84(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  uint local_a8;
  uint local_a4;
  undefined1 auStack_84 [32];
  uint local_64;
  uint local_60;
  uint local_5c;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int *local_1c;
  int local_18;
  
  local_2c = *(int *)(*(int *)PTR_DAT_4a06ff9c + 100);
  local_30 = (uint)*(ushort *)(param_1 + 0x18);
  local_34 = (uint)*(ushort *)(param_1 + 0x1a);
  uVar1 = thunk_FUN_4a161570(0x10);
  local_38 = FUN_4a16f7f0(uVar1,0);
  for (local_5c = 0; local_5c < *(uint *)(param_1 + 0x20); local_5c = local_5c + 1) {
    local_18 = local_5c * 0x30;
    iVar10 = *(int *)(param_1 + 0x1c) + local_18;
    piVar11 = (int *)(iVar10 + 0x20);
    for (local_60 = 0; local_60 < *(uint *)(iVar10 + 0x24); local_60 = local_60 + 1) {
      iVar9 = local_60 * 0x18;
      piVar8 = *(int **)(*piVar11 + iVar9 + 4);
      if (piVar8 == (int *)0x0) {
        thunk_FUN_4a161570(0xc4);
        piVar8 = (int *)FUN_4a0633c4();
        thunk_FUN_4a0ecbc4(auStack_84);
        thunk_FUN_4a0ecbc4(&local_a8);
        uVar1 = FUN_4a0e4a6a(*(int *)(param_1 + 0x1c) + local_18);
        thunk_FUN_4a0ecab0(auStack_84,uVar1);
        if ((*(uint *)(*(int *)(param_1 + 0x1c) + local_18 + 0x18) & 1) != 0) {
          piVar8[0xd] = piVar8[0xd] | 8;
        }
        thunk_FUN_4a0ebe9c(auStack_84,(int)((int)*(short *)(*piVar11 + iVar9) * local_30) >> 0xc);
        thunk_FUN_4a0ecb88(auStack_84,(int)((int)*(short *)(*piVar11 + iVar9 + 2) * local_34) >> 0xc
                          );
        FUN_4a062e34(piVar8,auStack_84);
        FUN_4a06157c(piVar8,0);
        FUN_4a062ef8(piVar8,&local_a8);
        piVar8[0xd] = piVar8[0xd] | 1;
        thunk_FUN_4a0ecbf0(&local_a8);
        thunk_FUN_4a0ecbf0(auStack_84);
      }
      local_1c = piVar8 + 0x28;
      local_20 = (int)(short)piVar8[0x2f];
      local_24 = (uint)*(short *)(*piVar11 + iVar9);
      if ((local_24 & 0xfff) == 0) {
        iVar3 = local_20;
        uVar7 = (int)local_24 >> 0xc;
      }
      else {
        iVar3 = local_20 << 0xc;
        uVar7 = local_24;
      }
      iVar2 = thunk_FUN_4a0015f0(iVar3,uVar7);
      iVar3 = DAT_4a06ffa0;
      if (iVar2 <= DAT_4a06ffa0) {
        if ((local_24 & 0xfff) == 0) {
          iVar3 = local_20;
          uVar7 = (int)local_24 >> 0xc;
        }
        else {
          iVar3 = local_20 << 0xc;
          uVar7 = local_24;
        }
        iVar3 = thunk_FUN_4a0015f0(iVar3,uVar7);
      }
      *(short *)(local_1c + 7) = (short)iVar3;
      local_28 = (int)*(short *)((int)local_1c + 0x1e);
      uVar5 = (uint)*(short *)(*piVar11 + iVar9 + 2);
      uVar7 = (int)uVar5 >> 0xc;
      iVar9 = local_28;
      uVar6 = uVar7;
      if ((uVar5 & 0xfff) != 0) {
        iVar9 = local_28 << 0xc;
        uVar6 = uVar5;
      }
      iVar3 = thunk_FUN_4a0015f0(iVar9,uVar6);
      iVar9 = DAT_4a06ffa0;
      if (iVar3 <= DAT_4a06ffa0) {
        iVar9 = local_28;
        if ((uVar5 & 0xfff) != 0) {
          iVar9 = local_28 << 0xc;
          uVar7 = uVar5;
        }
        iVar9 = thunk_FUN_4a0015f0(iVar9,uVar7);
      }
      *(short *)((int)local_1c + 0x1e) = (short)iVar9;
      local_a8 = local_60;
      FUN_4a000d18(auStack_58,s_G_xB_dP_d_4a06ffa4,*(undefined4 *)(local_2c + 4),local_5c);
      FUN_4a1652c8(piVar8,auStack_58,*(undefined4 *)(*piVar8 + 0x24));
      for (local_64 = 0; local_64 < *(uint *)(*(int *)(param_1 + 0x1c) + local_18 + 8);
          local_64 = local_64 + 1) {
        thunk_FUN_4a161570(0x58);
        piVar4 = (int *)FUN_4a069e28();
        local_a4 = local_64;
        local_a8 = local_60;
        FUN_4a000d18(auStack_58,s_G_xB_dP_dM_d_4a06ffb0,*(undefined4 *)(local_2c + 4),local_5c);
        FUN_4a0699a6(piVar4,*(int *)(*(int *)(param_1 + 0x1c) + local_18 + 4) + local_64 * 0x58);
        FUN_4a1652c8(piVar4,auStack_58,*(undefined4 *)(*piVar4 + 0x24));
        piVar4[0xb] = (int)piVar8;
        piVar4[4] = piVar4[4] | 0x200;
        FUN_4a0921e2(local_38,piVar4,0);
      }
    }
  }
  return local_38;
}



// Address: 4a06ffc0

void FUN_4a06ffc0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint local_18;
  
  puVar1 = PTR_DAT_4a070088;
  local_18 = param_4;
  if (*PTR_DAT_4a070088 == '\0') {
    FUN_4a06fbb0(param_1);
  }
  thunk_FUN_4a0ecd30(param_1 + 0x18);
  if (DAT_4a07008c < *(uint *)(PTR_DAT_4a070088 + 0xc0)) {
    FUN_4a16fcc8(param_1 + 4);
    if (*(int *)(param_1 + 8) != 0) {
      FUN_4a03c12c(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 8),0x20,4);
    }
  }
  iVar3 = param_1 + 0x1c;
  if (*puVar1 == '\0') {
    local_18 = *(uint *)(param_1 + 0x20);
    FUN_4a03c12c(&local_18,1,0x20,4);
  }
  else {
    FUN_4a03c12c(&local_18,1,0x20,4);
    uVar2 = local_18;
    if (*(uint *)(param_1 + 0x20) < local_18) {
      FUN_4a16e918(iVar3,local_18);
    }
    if (*(uint *)(param_1 + 0x20) < uVar2) {
      FUN_4a16e946(iVar3,uVar2 - *(uint *)(param_1 + 0x20));
    }
    else {
      FUN_4a16eab4(iVar3,uVar2);
    }
    FUN_4a16e918(iVar3,*(undefined4 *)(param_1 + 0x20));
  }
  iVar4 = 0;
  for (iVar3 = *(int *)(param_1 + 0x1c);
      *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x20) * 0x30 != iVar3; iVar3 = iVar3 + 0x30) {
    *(int *)(iVar3 + 0x14) = iVar4;
    iVar4 = iVar4 + 1;
    FUN_4a0e4a94(iVar3);
  }
  if (*puVar1 == '\0') {
    FUN_4a06fcbc(param_1);
  }
  return;
}



// Address: 4a070090

int * FUN_4a070090(int *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  if (*param_1 != 0) {
    FUN_4a092278();
    thunk_FUN_4a161530();
  }
  puVar3 = (undefined4 *)param_1[5];
  if (puVar3 != (undefined4 *)0x0) {
    for (uVar1 = 0; uVar1 < (uint)puVar3[1]; uVar1 = uVar1 + 1) {
    }
    if ((*(byte *)(puVar3 + 3) & 1) == 0) {
      FUN_4a0a6f48(*puVar3,4);
      *puVar3 = 0;
    }
    thunk_FUN_4a161530(puVar3);
  }
  piVar2 = param_1 + 7;
  for (uVar1 = 0; uVar1 < (uint)param_1[8]; uVar1 = uVar1 + 1) {
    FUN_4a0e4c44(*piVar2 + uVar1 * 0x30);
  }
  if ((*(byte *)(param_1 + 10) & 1) == 0) {
    FUN_4a0a6f48(*piVar2,0x30);
    *piVar2 = 0;
  }
  for (uVar1 = 0; uVar1 < (uint)param_1[2]; uVar1 = uVar1 + 1) {
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    FUN_4a0a6f48(param_1[1],4);
    param_1[1] = 0;
  }
  return param_1;
}



// Address: 4a07011c

undefined4 * FUN_4a07011c(undefined4 *param_1)

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



// Address: 4a070146

undefined4 * FUN_4a070146(undefined4 *param_1)

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



// Address: 4a070170

undefined4 * FUN_4a070170(undefined4 *param_1)

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



// Address: 4a07019a

undefined4 * FUN_4a07019a(undefined4 *param_1)

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



// Address: 4a0701c4

undefined4 * FUN_4a0701c4(undefined4 *param_1)

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



// Address: 4a0701ee

undefined4 * FUN_4a0701ee(undefined4 *param_1)

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



// Address: 4a070218

void FUN_4a070218(byte *param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_28 [20];
  
  FUN_4a0978b4(auStack_28);
  if ((*param_1 != param_2) || ((int)(uint)*(ushort *)(param_1 + 2) < param_3)) {
    FUN_4a161530(*(undefined4 *)(param_1 + 8));
    *param_1 = (byte)param_2;
    iVar1 = FUN_4a0571d0(param_2);
    uVar2 = FUN_4a161570(param_3 * iVar1);
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  *(short *)(param_1 + 2) = (short)param_3;
  iVar1 = FUN_4a0571d0(param_2);
  thunk_FUN_4a000f84(*(undefined4 *)(param_1 + 8),param_4,param_3 * iVar1);
  FUN_4a0978e0(auStack_28);
  return;
}



// Address: 4a070270

void FUN_4a070270(byte *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *param_1;
  bVar2 = bVar1 & 3;
  if (bVar2 == 1) {
    bVar1 = bVar1 >> 2;
    if (bVar1 == 1) {
      host_glUniform1fv_thumb(param_2,(uint)*(ushort *)(param_1 + 2),*(void **)(param_1 + 8));
    }
    else if (bVar1 == 2) {
      host_glUniform2fv_thumb(param_2,(uint)*(ushort *)(param_1 + 2),*(void **)(param_1 + 8));
    }
    else if (bVar1 == 3) {
      host_glUniform3fv_thumb(param_2,(uint)*(ushort *)(param_1 + 2),*(void **)(param_1 + 8));
    }
    else if (bVar1 == 4) {
      host_glUniform4fv_thumb(param_2,(uint)*(ushort *)(param_1 + 2),*(void **)(param_1 + 8));
    }
  }
  else if (bVar2 == 2) {
    bVar1 = bVar1 >> 2;
    if (bVar1 == 1) {
      host_glUniform1iv_thumb(param_2,(uint)*(ushort *)(param_1 + 2),*(void **)(param_1 + 8));
    }
    else if (bVar1 == 2) {
      host_glUniform2iv_thumb(param_2,(uint)*(ushort *)(param_1 + 2),*(void **)(param_1 + 8));
    }
    else if (bVar1 == 3) {
      host_glUniform3iv_thumb(param_2,(uint)*(ushort *)(param_1 + 2),*(void **)(param_1 + 8));
    }
    else if (bVar1 == 4) {
      host_glUniform4iv_thumb(param_2,(uint)*(ushort *)(param_1 + 2),*(void **)(param_1 + 8));
    }
  }
  else if (bVar2 == 3) {
    bVar1 = bVar1 >> 2;
    if (bVar1 == 2) {
      host_glUniformMatrix2fv_thumb
                (param_2,(uint)*(ushort *)(param_1 + 2),'\0',*(void **)(param_1 + 8));
    }
    else if (bVar1 == 3) {
      host_glUniformMatrix3fv_thumb
                (param_2,(uint)*(ushort *)(param_1 + 2),'\0',*(void **)(param_1 + 8));
    }
    else if (bVar1 == 4) {
      host_glUniformMatrix4fv_thumb
                (param_2,(uint)*(ushort *)(param_1 + 2),'\0',*(void **)(param_1 + 8));
    }
  }
  return;
}



// Address: 4a070350

int FUN_4a070350(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  FUN_4a161530(*(undefined4 *)(param_1 + 8));
  FUN_4a0978e0(&iStack_18);
  return param_1;
}



// Address: 4a070370

void FUN_4a070370(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int local_144;
  undefined1 auStack_140 [20];
  ushort local_12c;
  int local_128;
  undefined1 auStack_11c [256];
  int *local_1c;
  int *local_18;
  
  uVar1 = 1;
  do {
    uVar1 = uVar1 + 1;
  } while (uVar1 < 6);
  thunk_FUN_4a161570(0xc4);
  local_1c = (int *)FUN_4a0633c4();
  FUN_4a00ba22(*(undefined4 *)(*(int *)(param_2 + 0x14) + *(int *)(param_2 + 0x18) * 0xe8 + -0xe4),
               auStack_11c,0);
  FUN_4a1652c8(local_1c,auStack_11c,*(undefined4 *)(*local_1c + 0x24));
  local_1c[0xd] = local_1c[0xd] | 0x20000000;
  FUN_4a062c6c(local_1c);
  thunk_FUN_4a0ecbc4(auStack_140);
  thunk_FUN_4a0ecab0(auStack_140,param_1[6]);
  thunk_FUN_4a0ebe9c(auStack_140,(short)param_1[8]);
  thunk_FUN_4a0ecb88(auStack_140,(uint)*(ushort *)((int)param_1 + 0x22) * 6);
  thunk_FUN_4a0e4d6c(auStack_140,0,0,0,0);
  local_144 = local_128;
  uVar1 = (uint)local_12c;
  uVar3 = 0;
  do {
    local_18 = param_1 + uVar3 * 9;
    iVar4 = local_18[10];
    for (uVar2 = 0; uVar2 < *(ushort *)((int)local_18 + 0x22); uVar2 = uVar2 + 1) {
      thunk_FUN_4a000f84(local_144,iVar4,uVar1);
      local_144 = local_144 + uVar1;
      iVar4 = iVar4 + uVar1;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 6);
  FUN_4a062e34(local_1c,auStack_140);
  FUN_4a08d072(*(undefined4 *)PTR_DAT_4a070464,s_CIwTexture_4a070468,local_1c);
  if (param_1 != (int *)0x0) {
    FUN_4a1652c6(param_1,*(undefined4 *)(*param_1 + 4));
  }
  thunk_FUN_4a0ecbf0(auStack_140);
  return;
}



// Address: 4a070474

undefined4 FUN_4a070474(int param_1,int param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auStack_220 [256];
  undefined1 auStack_120 [256];
  int iStack_20;
  int iStack_1c;
  undefined4 local_18;
  
  puVar1 = PTR_PTR_4a070508;
  uVar4 = 0;
  iStack_20 = param_1;
  iStack_1c = param_2;
  local_18 = param_3;
  do {
    iVar2 = thunk_FUN_4a00142c(*(undefined4 *)(puVar1 + uVar4 * 4),local_18);
    if (iVar2 == 0) {
      FUN_4a09c2ec(param_2,auStack_120,0x100,1);
      iVar2 = FUN_4a03bb10(auStack_120);
      if (iVar2 == 0) {
        FUN_4a0012bc(auStack_220,
                     *(undefined4 *)
                      (*(int *)(param_2 + 0x14) + *(int *)(param_2 + 0x18) * 0xe8 + -0xe4));
        FUN_4a00b998(auStack_220,auStack_220);
        FUN_4a001538(auStack_220,&DAT_4a07050c);
        FUN_4a001538(auStack_220,auStack_120);
        FUN_4a0012bc(auStack_120,auStack_220);
      }
      thunk_FUN_4a0e5978(uVar4 * 0x24 + param_1 + 0x10,auStack_120);
      return 1;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 6);
  uVar3 = FUN_4a060598(param_1,param_2,local_18);
  return uVar3;
}



// Address: 4a070510

void FUN_4a070510(int param_1)

{
  if (param_1 != 0) {
    FUN_4a070524();
    thunk_FUN_4a161530();
  }
  return;
}



// Address: 4a070524

void FUN_4a070524(undefined4 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_FUN_4a07054c;
  *param_1 = PTR_PTR_4a070548;
  FUN_4a1491e4(param_1 + 4,6,0x24,puVar1);
  FUN_4a0606ec(param_1);
  return;
}



// Address: 4a070550

void FUN_4a070550(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (**(int **)PTR_DAT_4a070594 << 0x15 < 0) {
    piVar1 = (int *)(((int)*(uint *)(param_1 + 0x1c) >> 1) + param_1);
    if ((*(uint *)(param_1 + 0x1c) & 1) == 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
    }
    else {
      uVar2 = *(undefined4 *)(*piVar1 + (*(uint *)(param_1 + 0x18) & 0xfffffffc));
    }
    FUN_4a1652c6(piVar1,uVar2);
  }
  else {
    FUN_4a0706cc(param_1);
  }
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 2;
  return;
}



// Address: 4a070598

void FUN_4a070598(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  short *psVar5;
  int iVar6;
  undefined4 uVar7;
  
  if ((int)(*(uint *)(param_1 + 0x3c) << 0x1e) < 0) {
    FUN_4a070684(param_1);
  }
  else if ((*(uint *)(param_1 + 0x3c) & 1) == 0) {
    return;
  }
  thunk_FUN_4a05a618();
  puVar1 = PTR_DAT_4a070680;
  iVar6 = *(int *)PTR_DAT_4a070680;
  iVar2 = *(int *)(iVar6 + 0x67c);
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xfffffffb;
    FUN_4a070550(*(undefined4 *)(iVar6 + 0x67c));
  }
  if (**(int **)puVar1 << 0x15 < 0) {
    piVar3 = (int *)(((int)*(uint *)(param_1 + 0x2c) >> 1) + param_1);
    if ((*(uint *)(param_1 + 0x2c) & 1) == 0) {
      uVar7 = *(undefined4 *)(param_1 + 0x28);
    }
    else {
      uVar7 = *(undefined4 *)(*piVar3 + (*(uint *)(param_1 + 0x28) & 0xfffffffc));
    }
    FUN_4a1652c6(piVar3,uVar7);
  }
  else {
    FUN_4a07070a(param_1);
  }
  piVar4 = *(int **)puVar1;
  piVar4[0xd5] = 0;
  piVar3 = (int *)(param_1 + 0x44);
  if (*piVar4 * 0x200000 < 0) {
    piVar4[1] = piVar4[1] | 0x200;
    piVar3 = (int *)(param_1 + 100);
  }
  FUN_4a04a244(piVar3);
  if (*(int *)(param_1 + 0x40) << 0xd < 0) {
    piVar3 = (int *)(param_1 + 100);
    if (-1 < **(int **)puVar1 << 0x15) {
      piVar3 = (int *)(param_1 + 0x44);
    }
    psVar5 = (short *)(param_1 + 0x78);
    if (-1 < **(int **)puVar1 << 0x15) {
      psVar5 = (short *)(param_1 + 0x58);
    }
    thunk_FUN_4a03b0f4(0,0,(int)*psVar5 * *piVar3 >> 0xc,(int)psVar5[1] * piVar3[1] >> 0xc);
  }
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 4;
  *(int *)(*(int *)puVar1 + 0x67c) = param_1;
  return;
}



// Address: 4a070684

void FUN_4a070684(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (**(int **)PTR_DAT_4a0706c8 << 0x15 < 0) {
    piVar1 = (int *)(((int)*(uint *)(param_1 + 0x24) >> 1) + param_1);
    if ((*(uint *)(param_1 + 0x24) & 1) == 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x20);
    }
    else {
      uVar2 = *(undefined4 *)(*piVar1 + (*(uint *)(param_1 + 0x20) & 0xfffffffc));
    }
    FUN_4a1652c6(piVar1,uVar2);
  }
  else {
    FUN_4a070730(param_1);
  }
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffffffd;
  return;
}



// Address: 4a0706cc

void FUN_4a0706cc(int param_1)

{
  FUN_4a061d1c(*(undefined4 *)(param_1 + 0x38),param_1 + 0x44);
  *(short *)(*(int *)(param_1 + 0x5c) + 0x18) = (short)(*(int *)(param_1 + 0x4c) >> 1);
  *(short *)(*(int *)(param_1 + 0x5c) + 0x1a) = (short)*(undefined4 *)(param_1 + 0x48);
  if (*(int *)(*(int *)(param_1 + 0x38) + 0x58) == 0) {
    FUN_4a0708ae(*(int *)(param_1 + 0x38) + 0x44,*(undefined4 *)(param_1 + 0x5c));
  }
  *(uint *)(*(int *)(param_1 + 0x38) + 0x34) =
       *(uint *)(*(int *)(param_1 + 0x38) + 0x34) & 0xfffffeff;
  return;
}



// Address: 4a07070a

void FUN_4a07070a(void)

{
  return;
}



// Address: 4a07070c

uint FUN_4a07070c(int param_1)

{
  if (-1 < **(int **)PTR_DAT_4a07072c << 0x15) {
    return 0;
  }
  return (*(uint *)(param_1 + 0x40) & 3) >> 1;
}



// Address: 4a070730

void FUN_4a070730(int param_1)

{
  FUN_4a06255a(*(undefined4 *)(param_1 + 0x38));
  return;
}



// Address: 4a070740

void FUN_4a070740(void)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_24 [20];
  
  thunk_FUN_4a05a618();
  puVar1 = PTR_DAT_4a0707c8;
  iVar6 = *(int *)(*(int *)PTR_DAT_4a0707c8 + 0x67c);
  if ((iVar6 != 0) && (*(int *)(iVar6 + 0x3c) << 0x1d < 0)) {
    *(undefined4 *)(iVar6 + 0x3c) = 1;
    FUN_4a070550(iVar6);
    piVar2 = *(int **)puVar1;
    if (*piVar2 << 0x15 < 0) {
      iVar3 = piVar2[0x19f];
      uVar4 = *(uint *)(iVar3 + 0x30);
      uVar5 = *(uint *)(iVar3 + 0x34);
      piVar2 = (int *)(((int)uVar5 >> 1) + iVar6);
      if ((uVar5 & 1) != 0) {
        uVar4 = *(uint *)(*piVar2 + (uVar4 & 0xfffffffc));
      }
      FUN_4a1652c6(piVar2,uVar4);
    }
    else {
      FUN_4a0707cc(iVar6);
    }
    iVar6 = *(int *)puVar1;
    *(undefined4 *)(iVar6 + 0x67c) = 0;
    *(uint *)(iVar6 + 4) = *(uint *)(iVar6 + 4) & 0xfffffdff;
    *(undefined4 *)(iVar6 + 0x354) = *(undefined4 *)(iVar6 + 0x358);
    FUN_4a03be0c(auStack_24);
    FUN_4a04a244(auStack_24);
  }
  return;
}



// Address: 4a0707cc

void FUN_4a0707cc(void)

{
  return;
}



// Address: 4a070802

void FUN_4a070802(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}



// Address: 4a070808

void FUN_4a070808(undefined4 *param_1)

{
  *param_1 = PTR_PTR_4a070814;
  param_1[1] = 0;
  return;
}



// Address: 4a070818

void FUN_4a070818(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_4a161530();
  }
  return;
}



// Address: 4a070830

void FUN_4a070830(void)

{
  return;
}



// Address: 4a070832

void FUN_4a070832(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 != 0) {
    for (uVar1 = 0; uVar1 < *(uint *)(iVar2 + 0x40); uVar1 = uVar1 + 1) {
      if (*(int *)(*(int *)(iVar2 + 0x3c) + uVar1 * 4) == param_1 + -0x44) goto LAB_4a070862;
    }
  }
LAB_4a070882:
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
LAB_4a070862:
  for (; uVar1 < *(uint *)(iVar2 + 0x40) - 1; uVar1 = uVar1 + 1) {
    iVar4 = *(int *)(iVar2 + 0x3c);
    *(undefined4 *)(iVar4 + uVar1 * 4) = *(undefined4 *)(iVar4 + (uVar1 + 1) * 4);
  }
  uVar3 = *(int *)(iVar2 + 0x40) - 1;
  for (uVar1 = uVar3; uVar1 < *(uint *)(iVar2 + 0x40); uVar1 = uVar1 + 1) {
  }
  *(uint *)(iVar2 + 0x40) = uVar3;
  goto LAB_4a070882;
}



// Address: 4a07088a

uint FUN_4a07088a(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x10) & 0xffff;
  if (*(char *)(param_1 + 0x1c) == ' ') {
    uVar2 = uVar2 >> 1;
  }
  else {
    uVar1 = thunk_FUN_4a0066d8(0x10);
    uVar2 = uVar2 << (uVar1 >> 1 & 0xff);
  }
  return uVar2;
}



// Address: 4a0708ae

void FUN_4a0708ae(int param_1,int param_2)

{
  FUN_4a16f87a((int *)(param_2 + 0x3c),*(int *)(param_2 + 0x40) + 1);
  *(int *)(*(int *)(param_2 + 0x3c) + *(int *)(param_2 + 0x40) * 4) = param_1 + -0x44;
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  *(int *)(param_1 + 0x14) = param_2;
  return;
}



// Address: 4a0708e0

undefined4 FUN_4a0708e0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  if (0xf < iVar1) {
    return 3;
  }
  *(int *)(param_1 + 0x5c) = iVar1 + 1;
  *(undefined4 *)(iVar1 * 4 + param_1 + 0x1c) = param_2;
  return 0;
}



// Address: 4a0708f8

int FUN_4a0708f8(int param_1,uint param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = 0;
  uVar5 = param_4;
  while( true ) {
    if (*(int *)(param_1 + 0x5c) <= iVar4) {
      return 3;
    }
    iVar2 = *(int *)(iVar4 * 4 + param_1 + 0x1c);
    uVar1 = FUN_4a1652c6(iVar2,*(undefined4 *)(iVar2 + 0xc),param_3,param_4,uVar5);
    puVar3 = (ushort *)(*(int *)(param_1 + 8) + param_2 * 0x10 + 0xc);
    param_3 = (uint)*(byte *)((int)puVar3 + 1);
    param_4 = (uint)(byte)*puVar3;
    if ((uVar1 & *puVar3) != 0) break;
    iVar4 = iVar4 + 1;
  }
  iVar2 = iVar4 * 4 + param_1;
  iVar4 = *(int *)(iVar2 + 0x1c);
  iVar4 = FUN_4a1652c8(iVar4,param_2 & 0xffff,*(undefined4 *)(iVar4 + 8));
  *(int *)(param_1 + 0x60) = iVar4;
  if (iVar4 != 0) {
    return iVar4;
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar2 + 0x1c);
  return 0;
}



// Address: 4a070958

int FUN_4a070958(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = (uint)*(ushort *)(*(int *)(param_1 + 8) + param_2 * 0x10 + 0xe) * 4;
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + iVar3);
  if (iVar1 == 0) {
    iVar1 = FUN_4a070b54(param_1);
    if (iVar1 != 0) {
      uVar2 = FUN_4a1652c6(iVar1,*(undefined4 *)(param_1 + 0x18));
      *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar3) = uVar2;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x10) + iVar3);
  }
  return iVar1;
}



// Address: 4a070994

int FUN_4a070994(ushort *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int local_28;
  uint local_24;
  ushort *puStack_20;
  int local_1c;
  int iStack_18;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    *(int *)(param_1 + 0xc) = param_3;
    puStack_20 = param_1;
    local_1c = param_2;
    iStack_18 = param_3;
    iVar1 = host_s3eFileRead_thumb(param_1,4,1,param_2);
    if (iVar1 == 1) {
      iVar1 = FUN_4a070b8a(param_1);
      *(int *)(param_1 + 0x30) = iVar1;
      if (iVar1 != 0) {
        return iVar1;
      }
      uVar2 = FUN_4a00dbc4((uint)param_1[1] << 4);
      *(undefined4 *)(param_1 + 4) = uVar2;
      uVar3 = host_s3eFileRead_thumb(uVar2,0x10,param_1[1],local_1c);
      if (uVar3 == param_1[1]) {
        uVar2 = FUN_4a00dbc4((uint)*param_1 << 2);
        *(undefined4 *)(param_1 + 8) = uVar2;
        uVar2 = FUN_4a00dbc4((uint)*param_1 << 2);
        *(undefined4 *)(param_1 + 10) = uVar2;
        uVar3 = *param_1 - 1;
        iVar1 = 0;
        while (uVar3 != 0) {
          iVar1 = iVar1 + 1;
          iVar4 = host_s3eFileGetChar_thumb(local_1c);
          if (iVar4 == 0) {
            uVar3 = uVar3 - 1;
          }
        }
        if (iVar1 == 0) {
          param_1[6] = 0;
          param_1[7] = 0;
        }
        else {
          iVar4 = FUN_4a00dbc4(iVar1);
          *(int *)(param_1 + 6) = iVar4;
          if (((*(int *)(param_1 + 8) == 0) || (iVar4 == 0)) || (*(int *)(param_1 + 10) == 0)) {
            return 1;
          }
          host_s3eFileSeek_thumb(local_1c,-iVar1,1);
        }
        for (iVar4 = 0; iVar4 < (int)(uint)*param_1; iVar4 = iVar4 + 1) {
          *(undefined4 *)(*(int *)(param_1 + 8) + iVar4 * 4) = 0;
        }
        **(int **)(param_1 + 8) = local_1c;
        if ((iVar1 < 1) ||
           (iVar1 = host_s3eFileRead_thumb(*(undefined4 *)(param_1 + 6),iVar1,1,local_1c),
           iVar1 == 1)) {
          local_24 = uVar3;
          host_s3eConfigGetInt_thumb(s_derbh_4a070b44,s_MinBufSize_4a070b38,&local_24);
          for (iVar1 = 0; iVar1 < (int)(uint)param_1[1]; iVar1 = iVar1 + 1) {
            if (((int)((uint)*(ushort *)(*(int *)(param_1 + 4) + iVar1 * 0x10 + 0xc) << 0x15) < 0)
               && (uVar3 = thunk_FUN_4a0014ec(*(int *)(param_1 + 4) + iVar1 * 0x10 + 8),
                  local_24 < uVar3)) {
              local_24 = uVar3;
            }
          }
          uVar3 = 0;
          for (iVar1 = 0; iVar1 < (int)(uint)param_1[1]; iVar1 = iVar1 + 1) {
            uVar3 = uVar3 | *(ushort *)(*(int *)(param_1 + 4) + iVar1 * 0x10 + 0xc);
          }
          uVar3 = uVar3 & DAT_4a070b4c;
          while( true ) {
            local_28 = 0;
            uVar6 = DAT_4a070b50;
            for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x2e); iVar1 = iVar1 + 1) {
              uVar5 = FUN_4a1652c6(*(int *)(param_1 + iVar1 * 2 + 0xe),
                                   *(undefined4 *)(*(int *)(param_1 + iVar1 * 2 + 0xe) + 0xc));
              if (((int)uVar5 < (int)uVar6) && ((uVar5 & uVar3) != 0)) {
                uVar6 = uVar5;
                local_28 = iVar1;
              }
            }
            if (uVar6 == DAT_4a070b50) break;
            iVar1 = FUN_4a1652d2(*(undefined4 *)(param_1 + local_28 * 2 + 0xe),param_1,local_1c,
                                 local_24);
            *(int *)(param_1 + 0x30) = iVar1;
            if (iVar1 != 0) {
              return *(int *)(param_1 + 0x30);
            }
            uVar6 = FUN_4a1652c6(*(int *)(param_1 + local_28 * 2 + 0xe),
                                 *(undefined4 *)(*(int *)(param_1 + local_28 * 2 + 0xe) + 0xc));
            uVar3 = uVar3 & ~uVar6;
          }
          if (uVar3 != 0) {
            return 3;
          }
          return 0;
        }
      }
    }
  }
  return 2;
}



// Address: 4a070b54

char * FUN_4a070b54(ushort *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = 0;
  pcVar2 = *(char **)(param_1 + 6);
  while( true ) {
    if ((int)(uint)*param_1 <= iVar3) {
      return (char *)0x0;
    }
    if (iVar3 == *(ushort *)(*(int *)(param_1 + 4) + param_2 * 0x10 + 0xe) - 1) break;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar3 = iVar3 + 1;
  }
  return pcVar2;
}



// Address: 4a070b8a

undefined4 FUN_4a070b8a(int param_1)

{
  if (*(short *)(param_1 + 2) == 0) {
    return 3;
  }
  return 0;
}



// Address: 4a070b98

void FUN_4a070b98(int param_1,int param_2)

{
  thunk_FUN_4a0014ec(*(int *)(param_1 + 8) + param_2 * 0x10 + 8);
  return;
}



// Address: 4a070bac

undefined4 FUN_4a070bac(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 5;
  }
                    /* WARNING: Could not recover jumptable at 0x4a070bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(int *)(param_1 + 4) + 4))();
  return uVar1;
}



// Address: 4a070bba

void FUN_4a070bba(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return;
}



// Address: 4a070bc8

ushort * FUN_4a070bc8(ushort *param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    for (iVar1 = 0; iVar1 < (int)(uint)*param_1; iVar1 = iVar1 + 1) {
      if (*(int *)(*(int *)(param_1 + 8) + iVar1 * 4) != 0) {
        host_s3eFileClose_thumb();
      }
    }
    FUN_4a05a298(*(undefined4 *)(param_1 + 4));
    FUN_4a05a298(*(undefined4 *)(param_1 + 8));
    FUN_4a05a298(*(undefined4 *)(param_1 + 6));
    if (*(int *)(param_1 + 10) != 0) {
      FUN_4a05a298();
      param_1[10] = 0;
      param_1[0xb] = 0;
    }
  }
  return param_1;
}



// Address: 4a070f7c

undefined4 FUN_4a070f7c(int param_1)

{
  return *(undefined4 *)(param_1 + 200);
}



// Address: 4a070f84

void FUN_4a070f84(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_4a146cd8();
  FUN_4a105624(param_1,param_2,param_3,param_4,param_5);
  iVar2 = FUN_4a146cd8(param_1);
  if (iVar1 != iVar2) {
    uVar3 = FUN_4a1460a4(param_1);
    if (iVar1 != -1) {
      FUN_4a0f7058(uVar3,iVar1);
      FUN_4a0bb5d8();
    }
    if (iVar2 != -1) {
      FUN_4a0f7058(uVar3,iVar2);
      FUN_4a0bb4e4();
    }
                    /* WARNING: Could not recover jumptable at 0x4a071024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1);
    return;
  }
  return;
}



// Address: 4a071028

void FUN_4a071028(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_4a105814();
  iVar2 = FUN_4a146ea4(*(undefined4 *)(param_1 + 0x20));
  if (iVar2 != 0) {
    iVar2 = FUN_4a1460a4(param_1);
    uVar1 = *(undefined1 *)(iVar2 + 0x45c);
    uVar3 = FUN_4a146c0c(param_1);
    uVar4 = FUN_4a13eaec(uVar3,0x13ba);
    FUN_4a0b4608(uVar4,uVar1);
    iVar2 = FUN_4a13eaec(uVar3,0x13bb);
    *(undefined1 *)(iVar2 + 0xd0) = uVar1;
    return;
  }
  return;
}



// Address: 4a071090

/* WARNING: Removing unreachable block (ram,0x4a071cf8) */
/* WARNING: Removing unreachable block (ram,0x4a071d08) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a071090(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 auStack_40 [2];
  int iStack_38;
  int iStack_30;
  int iStack_2c;
  
  uVar1 = FUN_4a145f8c();
  FUN_4a1460a4(param_1);
  iVar2 = FUN_4a142ef4();
  iVar3 = FUN_4a1406f4(uVar1,param_1[0x35]);
  uVar4 = FUN_4a146a9c(param_1);
  iVar8 = 1 - uVar4;
  iVar5 = param_1[0x37];
  iVar10 = param_1[0x38];
  if (1 < uVar4) {
    iVar8 = 0;
  }
  if (iVar5 == 0x13) {
    if ((iVar8 != 0) && (FUN_4a0d8c28(uVar1,2,0), iVar2 != 0)) {
      FUN_4a0daefc(uVar1,0x27);
      FUN_4a0de344(uVar1,iVar2,4);
    }
  }
  else if (iVar5 < 0x14) {
    if (iVar5 == 8) {
LAB_4a07110c:
      param_1[0x51] = -1;
      *(undefined1 *)(param_1 + 0x52) = 0;
      param_1[0x53] = -1;
      param_1[0x54] = -1;
      *(undefined1 *)(param_1 + 0x55) = 0;
      *(undefined1 *)((int)param_1 + 0x149) = 1;
      uVar6 = FUN_4a1460b0(param_1,0);
      FUN_4a060130(uVar6,0);
      if (iVar8 != 0) {
        iVar2 = param_1[0x35];
        if (iVar2 == 0x9f) {
          FUN_4a0d8c28(uVar1,3,0);
        }
        else if (((iVar2 == 0x12 || iVar2 == 0x13) || iVar2 == 0x14) || iVar2 == 0x15) {
LAB_4a071410:
          FUN_4a0d8c28(uVar1,5,0);
        }
      }
    }
    else if (iVar5 < 9) {
      if (iVar5 == 1) {
        iVar2 = 1;
        if (iVar8 != 0) {
          iVar2 = *(int *)(param_1[8] + 0x5fc);
        }
        if (iVar8 != 0 && iVar2 != 0) {
          FUN_4a108d64();
        }
      }
      else if (iVar5 == 6 || iVar5 == 7) goto LAB_4a07110c;
    }
    else if (iVar5 == 0xd) {
      iVar2 = FUN_4a1460d4(iVar10);
      switchD_4a11cc8c::default(iVar2 == 0x1b,s_cooking_at_non_stove__4a071460);
      FUN_4a109b9c(iVar10);
    }
    else if (iVar5 == 0x11) {
      if (iVar8 != 0) {
        FUN_4a0d8c28(uVar1,0);
      }
    }
    else if (iVar5 == 0x12) {
      if (iVar8 != 0) {
        FUN_4a0d8c28(uVar1,3,0);
      }
      if (iVar10 != 0) {
        iVar5 = FUN_4a1460d4(iVar10);
        if (iVar5 == 0x19) {
          if (iVar8 != 0 && iVar2 != 0) {
            FUN_4a0daefc(uVar1,0x26);
            FUN_4a0de344(uVar1,iVar2,8);
          }
        }
        else if (iVar5 == 4) {
          FUN_4a109998(iVar10);
        }
        else if (iVar5 == 5) {
          FUN_4a105a6c(iVar10);
        }
      }
    }
  }
  else if (iVar5 == 0x35) {
    if (iVar10 != 0) {
      FUN_4a108be0(iVar10);
    }
  }
  else if (iVar5 < 0x36) {
    if (iVar5 == 0x14 || iVar5 == 0x15) {
      if (iVar8 != 0) {
        FUN_4a0d8c28(uVar1,1,0);
        FUN_4a0d7614(uVar1,0);
        if ((param_1[0x37] == 0x15) && (iVar2 != 0)) {
          FUN_4a0daefc(uVar1,0x25);
          uVar6 = FUN_4a1081c4(iVar10);
          FUN_4a0de344(uVar1,iVar2,uVar6);
        }
      }
      iVar2 = FUN_4a1461c0(param_1,0x400);
      if (iVar2 != 0) {
        FUN_4a1071e0(param_1,0x400);
        iVar2 = FUN_4a146ea4(param_1[8]);
        if (iVar2 == 0) {
          iVar2 = FUN_4a107058(param_1,1);
          FUN_4a0ca898(iVar2,0xb);
          FUN_4a06f95c(*(undefined4 *)(iVar2 + 0x34),0xfa,0x14);
        }
      }
    }
    else if ((iVar5 == 0x1a) && (iVar8 != 0)) goto LAB_4a071410;
  }
  else if (iVar5 == 0x36) {
    if (iVar8 != 0) {
      FUN_4a0d8c28(uVar1,2,0);
      FUN_4a0d8c28(uVar1,1,0);
    }
  }
  else if (iVar5 == 0x37) {
    if (iVar8 != 0) {
      FUN_4a0d8c28(uVar1,5,0);
    }
    FUN_4a109944(iVar10);
  }
  param_1[0x37] = 0;
  if (param_2 != 0) {
    return;
  }
  if (iVar3 + -1 <= param_1[0x36]) goto code_r0x4a07171c;
  param_1[0x36] = param_1[0x36] + 1;
  iVar2 = FUN_4a13fb58(uVar1,param_1[0x35]);
  iVar3 = param_1[8];
  iStack_2c = FUN_4a145f8c(param_1);
  param_1[0x37] = iVar2;
  iVar5 = param_1[0x38];
  iVar8 = param_1[0x35];
  if ((iVar5 == 0) || (iVar10 = FUN_4a146b58(iVar5,0x2000), iVar10 == 0)) {
    iVar10 = 0;
  }
  else {
    iVar10 = param_1[0x38];
  }
  iVar12 = param_1[0x39];
  iVar13 = param_1[0x3a];
  uVar4 = FUN_4a146a9c(param_1);
  uVar9 = 1 - uVar4;
  if (1 < uVar4) {
    uVar9 = 0;
  }
  if (uVar9 != 0 && iVar10 != 0) {
    uVar1 = FUN_4a146a9c(iVar10);
    FUN_4a0d56bc(iStack_2c,uVar1);
  }
  if (((iVar5 != 0) && (iVar10 == 0)) && (iVar2 != 1)) {
    uVar1 = FUN_4a1461c0(param_1,0x800);
    FUN_4a1071f0(iVar5,0x800,uVar1);
    uVar1 = FUN_4a1461c0(param_1,0x1000);
    FUN_4a1071f0(iVar5,0x1000,uVar1);
  }
  uVar4 = 0;
  switch(iVar2) {
  case 0:
    iVar2 = param_1[0x32];
    if (((((iVar2 == 9 || iVar2 == 0xb) || iVar2 == 0xd) || iVar2 == 0xc) || iVar2 == 0xe) ||
        iVar2 == 8) {
      param_1[0x36] = param_1[0x36] + -1;
      FUN_4a071e74(param_1,0x1f);
    }
    else if (iVar2 == 4) {
      param_1[0x36] = param_1[0x36] + -1;
      FUN_4a071e74(param_1,0x22);
    }
    else {
      FUN_4a074bac(param_1,1);
    }
    break;
  case 1:
    FUN_4a076e50(param_1,iVar5,iVar12);
    break;
  case 2:
  case 3:
    if (iVar5 == 0) {
      FUN_4a106248(param_1,iVar12 - param_1[0x11],iVar13 - param_1[0x13]);
    }
    else {
      FUN_4a1077b8(param_1,iVar5);
    }
    if (iVar2 == 3) {
LAB_4a0720fc:
      FUN_4a106238(param_1,param_1[0x14] + 2U & 3);
    }
    goto LAB_4a072bd8;
  case 4:
  case 5:
    FUN_4a106238(param_1,*(undefined4 *)(iVar5 + 0x50));
    if (iVar2 == 5) goto LAB_4a0720fc;
    goto LAB_4a072bd8;
  case 6:
  case 7:
  case 8:
    FUN_4a075388(param_1,iVar8,iVar2);
    goto LAB_4a072d2c;
  case 9:
    FUN_4a074bac(param_1,5);
    break;
  case 10:
    FUN_4a074bac(param_1,6);
    break;
  case 0xb:
    iVar2 = 0;
    if (param_1[0x38] != 0) {
      iVar5 = FUN_4a146b58(param_1[0x38],0x2000);
      iVar2 = 0;
      if (iVar5 != 0) {
        iVar2 = param_1[0x38];
      }
    }
    FUN_4a076d54(iVar2);
    FUN_4a071478(param_1);
    break;
  case 0xc:
    FUN_4a074bac(param_1,7);
    break;
  case 0xd:
    switchD_4a11cc8c::default(uVar9,s_NPC_cooking__4a072608);
    iVar2 = FUN_4a0d5b78(iStack_2c,iVar12);
    if (iVar2 == 0) {
LAB_4a072c98:
      FUN_4a071ac4(param_1,0);
    }
    else {
      FUN_4a110228(iVar3,0,iVar5);
      iVar2 = FUN_4a1460d4(iVar5);
      switchD_4a11cc8c::default(iVar2 == 0x1b,s_cooking_at_non_stove__4a072618);
      FUN_4a105774(iVar5);
      param_1[0x51] = 0x36;
      *(undefined1 *)(param_1 + 0x52) = 1;
      param_1[0x54] = -1;
      param_1[0x53] = 1000;
      *(undefined1 *)(param_1 + 0x55) = 0;
      *(undefined1 *)((int)param_1 + 0x149) = 0;
      FUN_4a074bac(param_1,4);
    }
    break;
  case 0xe:
    switchD_4a11cc8c::default(uVar9,s_NPC_fishing__4a072630);
    iVar2 = FUN_4a13fa98(iStack_2c);
    if (iVar2 == 0) goto LAB_4a072c98;
    iVar2 = *(int *)(iVar5 + 0x28);
    if (iVar2 == 8) {
      FUN_4a106238(param_1,0);
    }
    else if (iVar2 == 9) {
      FUN_4a106238(param_1,1);
    }
    else if (iVar2 == 7) {
      FUN_4a106238(param_1,2);
    }
    else if (iVar2 == 6) {
      FUN_4a106238(param_1,3);
    }
    FUN_4a110228(iVar3,1,iVar5);
    param_1[0x51] = 0x3e;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x54] = -1;
    param_1[0x53] = 1000;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    break;
  case 0xf:
    switchD_4a11cc8c::default(uVar9,s_NPC_repairing__4a072640);
    iVar2 = FUN_4a13fca8(iStack_2c);
    if (iVar2 == 0) goto LAB_4a072c98;
    FUN_4a110228(iVar3,2,iVar5);
    param_1[0x51] = 0x36;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x53] = 1000;
    param_1[0x54] = -1;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    break;
  case 0x11:
    iVar2 = 5000;
    if (uVar9 != 0) {
      uVar1 = 0x70000;
      if (iVar8 == 0x84) {
        uVar1 = FUN_4a1460a4(param_1);
        uVar1 = FUN_4a144980(uVar1,iVar12);
      }
      FUN_4a0d8c28(iStack_2c,0,uVar1);
    }
    iVar5 = FUN_4a1460d4(iVar5);
    if (iVar5 == 0x11) {
      iVar2 = 0xdac;
    }
    iVar5 = 0x36;
    if (param_1[0x32] == 1) {
      iVar5 = 0x22;
    }
    param_1[0x51] = iVar5;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x54] = -1;
    param_1[0x53] = iVar2;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    uVar4 = 1;
    FUN_4a109e5c(param_1,0x46);
    break;
  case 0x12:
    iVar2 = FUN_4a1460d4(iVar5);
    if (iVar2 == 0x19) {
      if (uVar9 != 0) {
        FUN_4a0d8c28(iStack_2c,3,0xa0000);
      }
      FUN_4a105cf4(iVar5);
      param_1[0x51] = 0x61;
      *(undefined1 *)(param_1 + 0x52) = 1;
      param_1[0x53] = 5000;
      param_1[0x54] = -1;
      *(undefined1 *)(param_1 + 0x55) = 0;
      *(undefined1 *)((int)param_1 + 0x149) = 0;
      FUN_4a074bac(param_1,4);
    }
    else {
      if (iVar2 != 5) {
        if (iVar2 == 4) {
          if ((uVar9 != 0) && (iVar2 = FUN_4a1461c0(param_1,0x400), iVar2 == 0)) {
            FUN_4a0d8c28(iStack_2c,3,0x70000);
          }
          FUN_4a105328(iVar5);
          param_1[0x51] = 99;
          *(undefined1 *)(param_1 + 0x52) = 1;
          param_1[0x54] = -1;
          param_1[0x53] = 0x960;
          *(undefined1 *)(param_1 + 0x55) = 0;
          *(undefined1 *)((int)param_1 + 0x149) = 0;
          FUN_4a074bac(param_1,4);
        }
        else {
          switchD_4a11cc8c::default(0,s_what_are_we_washing_at___4a0729ac);
        }
        break;
      }
      FUN_4a1053a4(iVar5);
      if (uVar9 != 0) {
        uVar1 = FUN_4a145f8c(param_1);
        FUN_4a0d8c28(uVar1,3,0xa0000);
      }
      param_1[0x51] = 0x46;
      *(undefined1 *)(param_1 + 0x52) = 1;
      param_1[0x53] = 8000;
      param_1[0x54] = -1;
      *(undefined1 *)(param_1 + 0x55) = 0;
      *(undefined1 *)((int)param_1 + 0x149) = 0;
      FUN_4a074bac(param_1,4);
    }
    goto LAB_4a072d2c;
  case 0x13:
    if (uVar9 != 0) {
      FUN_4a0d8c28(iStack_2c,2,0x320000);
    }
    if (iVar8 == 0x7c) {
      iVar2 = 0x5b;
    }
    else {
      iVar2 = 0x2d;
    }
    param_1[0x51] = iVar2;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x53] = 2000;
    param_1[0x54] = -1;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    break;
  case 0x14:
  case 0x15:
    uVar1 = FUN_4a145f8c(param_1);
    iVar5 = FUN_4a13fb90();
    iVar10 = param_1[0x35];
    uVar6 = FUN_4a146a9c(param_1);
    iVar10 = FUN_4a0d6f44(uVar1,uVar6,iVar10 == 0x7f);
    if ((iVar2 == 0x14) && (iVar5 + 0x78 <= iVar10)) {
      iVar10 = iVar5 + 0x78;
    }
    iVar2 = FUN_4a146a9c(param_1);
    if (iVar2 == 0) {
      FUN_4a0d7614(uVar1,1);
      FUN_4a0d8c28(uVar1,1,0x10000);
    }
    iVar5 = (iVar10 - iVar5) + iVar5;
    if ((param_1[0x34] == 0) || (iVar2 = FUN_4a1460d4(), iVar2 != 0xd)) {
      iVar2 = FUN_4a1461c0(param_1,0x80000);
      if (iVar2 == 0) {
        iVar2 = 0x1a;
      }
      else {
        iVar2 = 0x19;
      }
    }
    else {
      iVar2 = 0x51;
    }
    param_1[0x51] = iVar2;
    *(char *)(param_1 + 0x52) = (char)(iVar5 >> 0x1f) + '\x01';
    param_1[0x54] = -1;
    param_1[0x53] = iVar5;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 1;
    FUN_4a074bac(param_1,4);
    uVar4 = 1;
    break;
  case 0x16:
    FUN_4a10913c(iVar5);
    FUN_4a071478(param_1);
    goto LAB_4a072d2c;
  case 0x17:
    FUN_4a109944(iVar5);
    FUN_4a071478(param_1);
    goto LAB_4a072d2c;
  case 0x18:
    if (param_1[0x35] == 0x89) {
      FUN_4a107e90(iVar5);
    }
    else if (param_1[0x35] == 0x88) {
      FUN_4a107ed8(iVar5);
    }
    iVar2 = FUN_4a114098(iVar3,param_1,iVar5);
    if (iVar2 == 0) {
      auStack_40[0] = 0;
      FUN_4a0737a4(param_1,0x6f,iVar5);
    }
    else {
      uVar1 = 0x9b;
      iVar5 = FUN_4a1460d4(iVar2);
      if (iVar5 == 10) {
        uVar1 = 0x9c;
      }
      auStack_40[0] = 0;
      FUN_4a0737a4(param_1,uVar1,iVar2);
    }
    goto LAB_4a072d2c;
  case 0x19:
    iVar2 = FUN_4a110878(iVar3,param_1,iVar8);
    if (iVar2 == 0) goto LAB_4a072c98;
    param_1[0x38] = iVar2;
    FUN_4a071478(param_1);
    break;
  case 0x1a:
    if (uVar9 != 0) {
      FUN_4a0d8c28(iStack_2c,5,0x30000);
    }
    param_1[0x51] = 0x25;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x53] = 10000;
    param_1[0x54] = -1;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    break;
  case 0x1b:
    if (uVar9 == 0) {
      FUN_4a110aac(auStack_40,iVar3);
      iVar2 = 0;
      if ((iStack_38 == 2) && (iVar5 = FUN_4a0e3c18(iStack_2c), iVar5 == 0)) {
        iVar5 = FUN_4a146a9c(param_1);
        if (*(int *)(iStack_2c + 0x420) != 0) {
          iVar2 = *(int *)(*(int *)(iStack_2c + 0x420) + 8);
        }
        FUN_4a10ce2c(iVar3,0xb3f,(int)*(short *)(iVar2 + iVar5 * 2));
      }
      FUN_4a074bac(param_1,9);
      FUN_4a169a1c(auStack_40);
    }
    else {
      FUN_4a074bac(param_1,8);
      FUN_4a113750(iVar3);
    }
    break;
  case 0x1c:
    FUN_4a116b10(iVar3,iVar8,iVar12);
    FUN_4a071478(param_1);
    break;
  case 0x1d:
    switchD_4a11cc8c::default(uVar9,s_NPC_looking_for_work__4a0729c8);
    uVar1 = FUN_4a1419b4(iStack_2c,iVar5);
    uVar6 = FUN_4a140354(iStack_2c,uVar1);
    FUN_4a10fe80(iVar3,uVar1,uVar6);
    FUN_4a071478(param_1);
    break;
  case 0x1e:
    FUN_4a10ce2c(iVar3,0xb3e);
    FUN_4a071478(param_1);
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
    if (param_1[0x38] == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = FUN_4a1460d4();
    }
    if (iVar2 == 0x20) {
      switchD_4a11cc8c::default(param_1[0x38] != 0,PTR_s_can_t_auto_sit_without_a_chair_4a0729e0);
      if (iVar5 == 0xd) {
        FUN_4a106238(param_1,param_1[0x14] + 2U & 3);
      }
      else if (iVar5 == 6) {
LAB_4a072994:
        iVar2 = 3;
        goto LAB_4a072a5c;
      }
LAB_4a0729a4:
      iVar2 = 1;
    }
    else if (iVar2 == 0x1f) {
      iVar2 = 0;
    }
    else {
      if (iVar2 == 0x21) goto LAB_4a072994;
      if (iVar2 == 0x22) goto LAB_4a0729a4;
      if (iVar2 == 0x23) {
        iVar2 = 2;
      }
      else if (iVar2 == 0x24) {
        iVar2 = 4;
      }
      else if (iVar2 == 0x27) {
        iVar2 = 8;
      }
      else if (iVar2 == 0x25) {
        if (iVar5 == 0xd) {
          iVar2 = 5;
        }
        else {
          iVar2 = 6;
        }
      }
      else if (iVar2 == 0x26) {
        iVar2 = 7;
      }
      else if (iVar2 == 0x28) {
        iVar2 = 9;
      }
      else if (iVar2 == 0x2a) {
        iVar2 = 0xb;
      }
      else if (iVar2 == 0x2b) {
        iVar2 = 0xd;
      }
      else if (iVar2 == 0x2c) {
        iVar2 = 0xe;
      }
      else {
        iVar2 = 10;
      }
    }
LAB_4a072a5c:
    if (param_1[0x32] == iVar2) goto LAB_4a072bd8;
    param_1[0x33] = iVar2;
    FUN_4a074bac(param_1,2);
    break;
  case 0x2d:
    if (uVar9 == 0) goto LAB_4a072bd8;
    iVar2 = FUN_4a146d54(param_1[8]);
    if (iVar2 != 0) {
      FUN_4a1460a4(param_1);
      iVar2 = FUN_4a142ef4();
      if ((iVar2 != 0) && (param_1[0x35] == 0x83)) goto LAB_4a072bd8;
    }
    uVar1 = FUN_4a145f8c(param_1);
    iVar2 = FUN_4a13fd20(uVar1,param_1[0x35]);
    iVar5 = FUN_4a141aa4(uVar1);
    if (iVar5 < iVar2) goto LAB_4a072c98;
    FUN_4a0d585c(uVar1);
    FUN_4a117598(param_1[8],param_1[0x11],param_1[0x13]);
    FUN_4a071478(param_1);
    break;
  case 0x2e:
    if (uVar9 == 0) goto LAB_4a072bd8;
    uVar1 = FUN_4a145f8c(param_1);
    FUN_4a110aac(auStack_40,param_1[8]);
    if (((iStack_38 < 2) && (iVar2 = FUN_4a13fa14(uVar1,0), iVar2 != 4)) &&
       (iVar2 = FUN_4a0e3c18(uVar1), iVar2 == 0)) {
      FUN_4a071ac4(param_1,0);
    }
    else {
      FUN_4a071478(param_1);
    }
    FUN_4a169a1c(auStack_40);
    break;
  case 0x2f:
    if (uVar9 != 0) {
      uVar1 = FUN_4a145f8c(param_1);
      iVar2 = FUN_4a13feec(uVar1,0xc);
      if ((iVar2 != -1) || (iVar2 = FUN_4a13feec(uVar1,0xb), iVar2 != -1)) goto LAB_4a072c98;
    }
LAB_4a072bd8:
    FUN_4a071478(param_1);
    break;
  case 0x30:
    FUN_4a127ce8(iVar3,iVar5);
    FUN_4a071478(param_1);
    break;
  case 0x31:
    uVar1 = FUN_4a145f8c(param_1);
    iVar5 = param_1[0x39];
    iVar2 = FUN_4a140338(uVar1,iVar5);
    if (iVar2 < 1) goto LAB_4a072c98;
    switchD_4a0de288::default(uVar1,iVar5,0xffffffff);
    FUN_4a109d38(param_1[0x38],iVar5);
    FUN_4a071478(param_1);
    break;
  case 0x32:
    uVar1 = FUN_4a145f8c(param_1);
    iVar2 = FUN_4a140338(uVar1,2);
    if ((iVar2 < 1) || (iVar2 = FUN_4a140338(uVar1,3), iVar2 < 1)) goto LAB_4a072c98;
    switchD_4a0de288::default(uVar1,3,0xffffffff);
    FUN_4a109bbc(param_1[0x38]);
    FUN_4a071478(param_1);
    break;
  case 0x33:
    FUN_4a105ef8(iVar5);
    FUN_4a071478(param_1);
    break;
  case 0x34:
    FUN_4a105c84(iVar5);
    FUN_4a071478(param_1);
    break;
  case 0x35:
    iVar2 = FUN_4a1460d4(iVar5);
    switchD_4a11cc8c::default(iVar2 == 0xb,s_drinking_at_non_coffee_machine_4a072e64);
    FUN_4a108a94(iVar5);
    param_1[0x51] = 1;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x54] = -1;
    param_1[0x53] = 60000;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
LAB_4a072d2c:
    uVar4 = 1;
    break;
  case 0x36:
    if (uVar9 != 0) {
      FUN_4a0d8c28(iStack_2c,2,0xfffb0000);
      FUN_4a0d8c28(iStack_2c,1,0xa0000);
    }
    param_1[0x51] = 0x54;
    *(undefined1 *)(param_1 + 0x52) = 0;
    param_1[0x53] = -1;
    param_1[0x54] = -1;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    break;
  case 0x37:
    if (uVar9 != 0) {
      FUN_4a0d8c28(iStack_2c,5,0x60000);
    }
    FUN_4a10913c(param_1[0x38]);
    param_1[0x51] = 0x59;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x53] = 15000;
    param_1[0x54] = -1;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
  }
  FUN_4a1460a4(param_1);
  iVar2 = FUN_4a142ef4();
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  if (((uVar9 & uVar4) != 0) && (uVar4 = FUN_4a13fb44(iStack_2c,iVar8), (uVar4 & 0x200000) != 0)) {
    FUN_4a11186c(iVar3,0x1a,param_1);
  }
  iVar2 = FUN_4a1461c0(param_1,2);
  if (iVar2 == 0) {
    return;
  }
  FUN_4a1071e0(param_1,4);
  iVar3 = -1;
  iVar2 = -1;
  switch(param_1[0x37]) {
  case 1:
    iVar5 = FUN_4a146a9c(param_1);
    if (iVar5 != 0) {
      iVar2 = 0x936;
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
    FUN_4a071090(param_1,1);
    FUN_4a07171c(param_1);
    break;
  case 0xd:
    iVar2 = 0xb4b;
    uVar1 = FUN_4a1460a4(param_1);
    FUN_4a143170(uVar1,param_1[0x39]);
    break;
  case 0xe:
    iVar2 = 0x974;
    break;
  case 0xf:
    iVar2 = 0x93b;
    break;
  case 0x10:
    iVar2 = 0x939;
    break;
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x37:
    FUN_4a071478(param_1);
    break;
  case 0x19:
    if (param_1[0x35] == 0x9d) {
      iVar2 = 0x95e;
    }
    else {
      iVar2 = 0x94e;
    }
    break;
  case 0x2d:
    iVar2 = 0x94c;
    break;
  case 0x2e:
    iVar2 = 0x966;
    break;
  case 0x2f:
    iVar2 = 0x931;
    iVar3 = 8;
    iVar5 = FUN_4a0fb748(param_1[9]);
    if (iVar5 < 0x32) {
      iVar3 = 0x11;
    }
    break;
  case 0x31:
    iVar2 = 0x93d;
    break;
  case 0x32:
    iVar2 = 0x940;
  }
  iVar5 = FUN_4a146a9c(param_1);
  if ((iVar5 == 0) && (*(int *)(param_1[8] + 0x5fc) != 0)) {
    FUN_4a108d64();
  }
  if (iVar2 == -1) {
    return;
  }
  if (iVar3 != -1) {
    FUN_4a0737a4(param_1,iVar3,0);
    return;
  }
code_r0x4a07171c:
  iVar2 = FUN_4a1461c0(param_1,4);
  uVar1 = FUN_4a145f8c(param_1);
  FUN_4a107f20(param_1,0xc);
  piVar7 = (int *)param_1[0x38];
  iVar3 = param_1[0x35];
  if ((piVar7 == (int *)0x0) || (iVar5 = FUN_4a146b58(piVar7,0x2000), iVar5 == 0)) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = (int *)param_1[0x38];
  }
  uVar4 = FUN_4a146a9c(param_1);
  iVar5 = 1 - uVar4;
  if (1 < uVar4) {
    iVar5 = 0;
  }
  iStack_30 = 0;
  FUN_4a0737a4(param_1,0,0);
  uVar4 = FUN_4a13fb44(uVar1,iVar3);
  if (iVar2 == 0) {
    if (piVar11 == (int *)0x0 || (uVar4 & 2) == 0) {
      if (iVar3 == 0x99) {
        FUN_4a10e9c8(param_1[8]);
      }
      else if (iVar3 < 0x9a) {
        if (iVar3 == 0x76) {
LAB_4a0718dc:
          FUN_4a110ec4(param_1[8],3);
        }
        else if (iVar3 < 0x77) {
          if (iVar3 == 4) {
            iVar8 = FUN_4a0fb748(param_1[9]);
            if (iVar8 < 5) {
              iStack_30 = 0;
              FUN_4a0737a4(param_1,10,0);
              return;
            }
          }
          else if (iVar3 == 0x70) {
            FUN_4a1278e8(param_1[8],1);
          }
          else if (iVar3 == 0x74) goto LAB_4a0718dc;
        }
        else if ((iVar3 == 0x7e || iVar3 == 0x7f) || iVar3 == 0x80) {
          param_1[0x3f] = param_1[0x3f] & 0xfffffff7;
        }
      }
      else if (iVar3 == 0xa6) {
LAB_4a071940:
        FUN_4a116cf0(param_1[8],piVar7);
      }
      else if (iVar3 < 0xa7) {
        if (iVar3 != 0x9e) {
          if (iVar3 == 0xa2) {
            if (iVar5 == 0) {
              param_1[0x30] = 0;
              uVar6 = FUN_4a146a9c(param_1);
              FUN_4a111218(param_1[8],uVar6);
            }
          }
          else if (iVar3 == 0xa5) goto LAB_4a071940;
        }
      }
      else if (iVar3 == 0xa9) {
        FUN_4a0daefc(uVar1,0x14);
        FUN_4a0d9d54(uVar1,0,0x280000);
      }
      else if (iVar3 == 0xab) goto LAB_4a071940;
    }
    else {
      FUN_4a071490(param_1,0);
      FUN_4a071490(piVar11,0);
      iVar8 = (**(code **)(*piVar11 + 0x1c))(piVar11,iVar3,param_1);
      if (iVar8 != 0) {
        iVar8 = FUN_4a12785c(param_1[8],param_1[0x4e]);
        if (iVar8 != 0) {
          *(uint *)(iVar8 + 0xfc) = *(uint *)(iVar8 + 0xfc) & 0xffffffbf;
          *(undefined4 *)(iVar8 + 0x13c) = 0;
          *(undefined4 *)(iVar8 + 0x138) = 0xffffffff;
          *(undefined4 *)(iVar8 + 0x140) = 0;
        }
        param_1[0x3f] = param_1[0x3f] & 0xffffffbf;
        param_1[0x4f] = 0;
        param_1[0x4e] = -1;
        param_1[0x50] = 0;
      }
      if (iVar5 != 0) {
        iStack_2c = FUN_4a146a9c(piVar11);
        if (iVar3 == 0x61) {
          FUN_4a0daefc(uVar1,0x12);
          FUN_4a0dd6e4(uVar1,iStack_2c,0x20);
          FUN_4a0dd6e4(uVar1,iStack_2c,0x800);
          goto LAB_4a071a18;
        }
        if (iVar3 == 0x6e) {
          FUN_4a0dd6e4(uVar1,iStack_2c,0x100);
          goto LAB_4a071a18;
        }
      }
    }
  }
  if (iVar3 == 0xa3) {
    FUN_4a107f20(param_1,0x10);
    if (iVar2 == 0) {
      FUN_4a1071e0(param_1,0x20);
    }
    else {
      param_1[0x3c] = 0;
      param_1[0x3b] = -1;
    }
  }
LAB_4a071a18:
  if (((piVar7 != (int *)0x0) && (piVar11 == (int *)0x0 && iVar2 == 0)) &&
     ((**(code **)(*piVar7 + 0x1c))(piVar7,iVar3,param_1), iVar5 != 0)) {
    FUN_4a0dbd6c(uVar1,piVar7[10]);
  }
  if (param_1[0x3b] != -1) {
    iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
    if (iVar2 != 0) {
      iStack_30 = param_1[0x3e];
      iVar2 = param_1[0x3b];
      iVar3 = param_1[0x3c];
      param_1[0x3c] = 0;
      param_1[0x3b] = -1;
      FUN_4a0737a4(param_1,iVar2,iVar3,param_1[0x3d]);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a071a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a071478

/* WARNING: Removing unreachable block (ram,0x4a071240) */
/* WARNING: Removing unreachable block (ram,0x4a071244) */
/* WARNING: Removing unreachable block (ram,0x4a071cf8) */
/* WARNING: Removing unreachable block (ram,0x4a071d08) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a071478(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 auStack_40 [2];
  int iStack_38;
  int iStack_30;
  int iStack_2c;
  
  uVar1 = FUN_4a145f8c();
  FUN_4a1460a4(param_1);
  iVar2 = FUN_4a142ef4();
  iVar3 = FUN_4a1406f4(uVar1,param_1[0x35]);
  uVar4 = FUN_4a146a9c(param_1);
  iVar8 = 1 - uVar4;
  iVar5 = param_1[0x37];
  iVar10 = param_1[0x38];
  if (1 < uVar4) {
    iVar8 = 0;
  }
  if (iVar5 == 0x13) {
    if ((iVar8 != 0) && (FUN_4a0d8c28(uVar1,2,0), iVar2 != 0)) {
      FUN_4a0daefc(uVar1,0x27);
      FUN_4a0de344(uVar1,iVar2,4);
    }
  }
  else if (iVar5 < 0x14) {
    if (iVar5 == 8) {
LAB_4a07110c:
      param_1[0x51] = -1;
      *(undefined1 *)(param_1 + 0x52) = 0;
      param_1[0x53] = -1;
      param_1[0x54] = -1;
      *(undefined1 *)(param_1 + 0x55) = 0;
      *(undefined1 *)((int)param_1 + 0x149) = 1;
      uVar6 = FUN_4a1460b0(param_1,0);
      FUN_4a060130(uVar6,0);
      if (iVar8 != 0) {
        iVar2 = param_1[0x35];
        if (iVar2 == 0x9f) {
          FUN_4a0d8c28(uVar1,3,0);
        }
        else if (((iVar2 == 0x12 || iVar2 == 0x13) || iVar2 == 0x14) || iVar2 == 0x15) {
LAB_4a071410:
          FUN_4a0d8c28(uVar1,5,0);
        }
      }
    }
    else if (iVar5 < 9) {
      if (iVar5 == 1) {
        iVar2 = 1;
        if (iVar8 != 0) {
          iVar2 = *(int *)(param_1[8] + 0x5fc);
        }
        if (iVar8 != 0 && iVar2 != 0) {
          FUN_4a108d64();
        }
      }
      else if (iVar5 == 6 || iVar5 == 7) goto LAB_4a07110c;
    }
    else if (iVar5 == 0xd) {
      iVar2 = FUN_4a1460d4(iVar10);
      switchD_4a11cc8c::default(iVar2 == 0x1b,s_cooking_at_non_stove__4a071460);
      FUN_4a109b9c(iVar10);
    }
    else if (iVar5 == 0x11) {
      if (iVar8 != 0) {
        FUN_4a0d8c28(uVar1,0);
      }
    }
    else if (iVar5 == 0x12) {
      if (iVar8 != 0) {
        FUN_4a0d8c28(uVar1,3,0);
      }
      if (iVar10 != 0) {
        iVar5 = FUN_4a1460d4(iVar10);
        if (iVar5 == 0x19) {
          if (iVar8 != 0 && iVar2 != 0) {
            FUN_4a0daefc(uVar1,0x26);
            FUN_4a0de344(uVar1,iVar2,8);
          }
        }
        else if (iVar5 == 4) {
          FUN_4a109998(iVar10);
        }
        else if (iVar5 == 5) {
          FUN_4a105a6c(iVar10);
        }
      }
    }
  }
  else if (iVar5 == 0x35) {
    if (iVar10 != 0) {
      FUN_4a108be0(iVar10);
    }
  }
  else if (iVar5 < 0x36) {
    if (iVar5 == 0x14 || iVar5 == 0x15) {
      if (iVar8 != 0) {
        FUN_4a0d8c28(uVar1,1,0);
        FUN_4a0d7614(uVar1,0);
        if ((param_1[0x37] == 0x15) && (iVar2 != 0)) {
          FUN_4a0daefc(uVar1,0x25);
          uVar6 = FUN_4a1081c4(iVar10);
          FUN_4a0de344(uVar1,iVar2,uVar6);
        }
      }
      iVar2 = FUN_4a1461c0(param_1,0x400);
      if (iVar2 != 0) {
        FUN_4a1071e0(param_1,0x400);
        iVar2 = FUN_4a146ea4(param_1[8]);
        if (iVar2 == 0) {
          iVar2 = FUN_4a107058(param_1,1);
          FUN_4a0ca898(iVar2,0xb);
          FUN_4a06f95c(*(undefined4 *)(iVar2 + 0x34),0xfa,0x14);
        }
      }
    }
    else if ((iVar5 == 0x1a) && (iVar8 != 0)) goto LAB_4a071410;
  }
  else if (iVar5 == 0x36) {
    if (iVar8 != 0) {
      FUN_4a0d8c28(uVar1,2,0);
      FUN_4a0d8c28(uVar1,1,0);
    }
  }
  else if (iVar5 == 0x37) {
    if (iVar8 != 0) {
      FUN_4a0d8c28(uVar1,5,0);
    }
    FUN_4a109944(iVar10);
  }
  param_1[0x37] = 0;
  if (iVar3 + -1 <= param_1[0x36]) goto code_r0x4a07171c;
  param_1[0x36] = param_1[0x36] + 1;
  iVar2 = FUN_4a13fb58(uVar1,param_1[0x35]);
  iVar3 = param_1[8];
  iStack_2c = FUN_4a145f8c(param_1);
  param_1[0x37] = iVar2;
  iVar5 = param_1[0x38];
  iVar8 = param_1[0x35];
  if ((iVar5 == 0) || (iVar10 = FUN_4a146b58(iVar5,0x2000), iVar10 == 0)) {
    iVar10 = 0;
  }
  else {
    iVar10 = param_1[0x38];
  }
  iVar12 = param_1[0x39];
  iVar13 = param_1[0x3a];
  uVar4 = FUN_4a146a9c(param_1);
  uVar9 = 1 - uVar4;
  if (1 < uVar4) {
    uVar9 = 0;
  }
  if (uVar9 != 0 && iVar10 != 0) {
    uVar1 = FUN_4a146a9c(iVar10);
    FUN_4a0d56bc(iStack_2c,uVar1);
  }
  if (((iVar5 != 0) && (iVar10 == 0)) && (iVar2 != 1)) {
    uVar1 = FUN_4a1461c0(param_1,0x800);
    FUN_4a1071f0(iVar5,0x800,uVar1);
    uVar1 = FUN_4a1461c0(param_1,0x1000);
    FUN_4a1071f0(iVar5,0x1000,uVar1);
  }
  uVar4 = 0;
  switch(iVar2) {
  case 0:
    iVar2 = param_1[0x32];
    if (((((iVar2 == 9 || iVar2 == 0xb) || iVar2 == 0xd) || iVar2 == 0xc) || iVar2 == 0xe) ||
        iVar2 == 8) {
      param_1[0x36] = param_1[0x36] + -1;
      FUN_4a071e74(param_1,0x1f);
    }
    else if (iVar2 == 4) {
      param_1[0x36] = param_1[0x36] + -1;
      FUN_4a071e74(param_1,0x22);
    }
    else {
      FUN_4a074bac(param_1,1);
    }
    break;
  case 1:
    FUN_4a076e50(param_1,iVar5,iVar12);
    break;
  case 2:
  case 3:
    if (iVar5 == 0) {
      FUN_4a106248(param_1,iVar12 - param_1[0x11],iVar13 - param_1[0x13]);
    }
    else {
      FUN_4a1077b8(param_1,iVar5);
    }
    if (iVar2 == 3) {
LAB_4a0720fc:
      FUN_4a106238(param_1,param_1[0x14] + 2U & 3);
    }
    goto LAB_4a072bd8;
  case 4:
  case 5:
    FUN_4a106238(param_1,*(undefined4 *)(iVar5 + 0x50));
    if (iVar2 == 5) goto LAB_4a0720fc;
    goto LAB_4a072bd8;
  case 6:
  case 7:
  case 8:
    FUN_4a075388(param_1,iVar8,iVar2);
    goto LAB_4a072d2c;
  case 9:
    FUN_4a074bac(param_1,5);
    break;
  case 10:
    FUN_4a074bac(param_1,6);
    break;
  case 0xb:
    iVar2 = 0;
    if (param_1[0x38] != 0) {
      iVar5 = FUN_4a146b58(param_1[0x38],0x2000);
      iVar2 = 0;
      if (iVar5 != 0) {
        iVar2 = param_1[0x38];
      }
    }
    FUN_4a076d54(iVar2);
    FUN_4a071478(param_1);
    break;
  case 0xc:
    FUN_4a074bac(param_1,7);
    break;
  case 0xd:
    switchD_4a11cc8c::default(uVar9,s_NPC_cooking__4a072608);
    iVar2 = FUN_4a0d5b78(iStack_2c,iVar12);
    if (iVar2 == 0) {
LAB_4a072c98:
      FUN_4a071ac4(param_1,0);
    }
    else {
      FUN_4a110228(iVar3,0,iVar5);
      iVar2 = FUN_4a1460d4(iVar5);
      switchD_4a11cc8c::default(iVar2 == 0x1b,s_cooking_at_non_stove__4a072618);
      FUN_4a105774(iVar5);
      param_1[0x51] = 0x36;
      *(undefined1 *)(param_1 + 0x52) = 1;
      param_1[0x54] = -1;
      param_1[0x53] = 1000;
      *(undefined1 *)(param_1 + 0x55) = 0;
      *(undefined1 *)((int)param_1 + 0x149) = 0;
      FUN_4a074bac(param_1,4);
    }
    break;
  case 0xe:
    switchD_4a11cc8c::default(uVar9,s_NPC_fishing__4a072630);
    iVar2 = FUN_4a13fa98(iStack_2c);
    if (iVar2 == 0) goto LAB_4a072c98;
    iVar2 = *(int *)(iVar5 + 0x28);
    if (iVar2 == 8) {
      FUN_4a106238(param_1,0);
    }
    else if (iVar2 == 9) {
      FUN_4a106238(param_1,1);
    }
    else if (iVar2 == 7) {
      FUN_4a106238(param_1,2);
    }
    else if (iVar2 == 6) {
      FUN_4a106238(param_1,3);
    }
    FUN_4a110228(iVar3,1,iVar5);
    param_1[0x51] = 0x3e;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x54] = -1;
    param_1[0x53] = 1000;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    break;
  case 0xf:
    switchD_4a11cc8c::default(uVar9,s_NPC_repairing__4a072640);
    iVar2 = FUN_4a13fca8(iStack_2c);
    if (iVar2 == 0) goto LAB_4a072c98;
    FUN_4a110228(iVar3,2,iVar5);
    param_1[0x51] = 0x36;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x53] = 1000;
    param_1[0x54] = -1;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    break;
  case 0x11:
    iVar2 = 5000;
    if (uVar9 != 0) {
      uVar1 = 0x70000;
      if (iVar8 == 0x84) {
        uVar1 = FUN_4a1460a4(param_1);
        uVar1 = FUN_4a144980(uVar1,iVar12);
      }
      FUN_4a0d8c28(iStack_2c,0,uVar1);
    }
    iVar5 = FUN_4a1460d4(iVar5);
    if (iVar5 == 0x11) {
      iVar2 = 0xdac;
    }
    iVar5 = 0x36;
    if (param_1[0x32] == 1) {
      iVar5 = 0x22;
    }
    param_1[0x51] = iVar5;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x54] = -1;
    param_1[0x53] = iVar2;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    uVar4 = 1;
    FUN_4a109e5c(param_1,0x46);
    break;
  case 0x12:
    iVar2 = FUN_4a1460d4(iVar5);
    if (iVar2 == 0x19) {
      if (uVar9 != 0) {
        FUN_4a0d8c28(iStack_2c,3,0xa0000);
      }
      FUN_4a105cf4(iVar5);
      param_1[0x51] = 0x61;
      *(undefined1 *)(param_1 + 0x52) = 1;
      param_1[0x53] = 5000;
      param_1[0x54] = -1;
      *(undefined1 *)(param_1 + 0x55) = 0;
      *(undefined1 *)((int)param_1 + 0x149) = 0;
      FUN_4a074bac(param_1,4);
    }
    else {
      if (iVar2 != 5) {
        if (iVar2 == 4) {
          if ((uVar9 != 0) && (iVar2 = FUN_4a1461c0(param_1,0x400), iVar2 == 0)) {
            FUN_4a0d8c28(iStack_2c,3,0x70000);
          }
          FUN_4a105328(iVar5);
          param_1[0x51] = 99;
          *(undefined1 *)(param_1 + 0x52) = 1;
          param_1[0x54] = -1;
          param_1[0x53] = 0x960;
          *(undefined1 *)(param_1 + 0x55) = 0;
          *(undefined1 *)((int)param_1 + 0x149) = 0;
          FUN_4a074bac(param_1,4);
        }
        else {
          switchD_4a11cc8c::default(0,s_what_are_we_washing_at___4a0729ac);
        }
        break;
      }
      FUN_4a1053a4(iVar5);
      if (uVar9 != 0) {
        uVar1 = FUN_4a145f8c(param_1);
        FUN_4a0d8c28(uVar1,3,0xa0000);
      }
      param_1[0x51] = 0x46;
      *(undefined1 *)(param_1 + 0x52) = 1;
      param_1[0x53] = 8000;
      param_1[0x54] = -1;
      *(undefined1 *)(param_1 + 0x55) = 0;
      *(undefined1 *)((int)param_1 + 0x149) = 0;
      FUN_4a074bac(param_1,4);
    }
    goto LAB_4a072d2c;
  case 0x13:
    if (uVar9 != 0) {
      FUN_4a0d8c28(iStack_2c,2,0x320000);
    }
    if (iVar8 == 0x7c) {
      iVar2 = 0x5b;
    }
    else {
      iVar2 = 0x2d;
    }
    param_1[0x51] = iVar2;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x53] = 2000;
    param_1[0x54] = -1;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    break;
  case 0x14:
  case 0x15:
    uVar1 = FUN_4a145f8c(param_1);
    iVar5 = FUN_4a13fb90();
    iVar10 = param_1[0x35];
    uVar6 = FUN_4a146a9c(param_1);
    iVar10 = FUN_4a0d6f44(uVar1,uVar6,iVar10 == 0x7f);
    if ((iVar2 == 0x14) && (iVar5 + 0x78 <= iVar10)) {
      iVar10 = iVar5 + 0x78;
    }
    iVar2 = FUN_4a146a9c(param_1);
    if (iVar2 == 0) {
      FUN_4a0d7614(uVar1,1);
      FUN_4a0d8c28(uVar1,1,0x10000);
    }
    iVar5 = (iVar10 - iVar5) + iVar5;
    if ((param_1[0x34] == 0) || (iVar2 = FUN_4a1460d4(), iVar2 != 0xd)) {
      iVar2 = FUN_4a1461c0(param_1,0x80000);
      if (iVar2 == 0) {
        iVar2 = 0x1a;
      }
      else {
        iVar2 = 0x19;
      }
    }
    else {
      iVar2 = 0x51;
    }
    param_1[0x51] = iVar2;
    *(char *)(param_1 + 0x52) = (char)(iVar5 >> 0x1f) + '\x01';
    param_1[0x54] = -1;
    param_1[0x53] = iVar5;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 1;
    FUN_4a074bac(param_1,4);
    uVar4 = 1;
    break;
  case 0x16:
    FUN_4a10913c(iVar5);
    FUN_4a071478(param_1);
    goto LAB_4a072d2c;
  case 0x17:
    FUN_4a109944(iVar5);
    FUN_4a071478(param_1);
    goto LAB_4a072d2c;
  case 0x18:
    if (param_1[0x35] == 0x89) {
      FUN_4a107e90(iVar5);
    }
    else if (param_1[0x35] == 0x88) {
      FUN_4a107ed8(iVar5);
    }
    iVar2 = FUN_4a114098(iVar3,param_1,iVar5);
    if (iVar2 == 0) {
      auStack_40[0] = 0;
      FUN_4a0737a4(param_1,0x6f,iVar5);
    }
    else {
      uVar1 = 0x9b;
      iVar5 = FUN_4a1460d4(iVar2);
      if (iVar5 == 10) {
        uVar1 = 0x9c;
      }
      auStack_40[0] = 0;
      FUN_4a0737a4(param_1,uVar1,iVar2);
    }
    goto LAB_4a072d2c;
  case 0x19:
    iVar2 = FUN_4a110878(iVar3,param_1,iVar8);
    if (iVar2 == 0) goto LAB_4a072c98;
    param_1[0x38] = iVar2;
    FUN_4a071478(param_1);
    break;
  case 0x1a:
    if (uVar9 != 0) {
      FUN_4a0d8c28(iStack_2c,5,0x30000);
    }
    param_1[0x51] = 0x25;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x53] = 10000;
    param_1[0x54] = -1;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    break;
  case 0x1b:
    if (uVar9 == 0) {
      FUN_4a110aac(auStack_40,iVar3);
      iVar2 = 0;
      if ((iStack_38 == 2) && (iVar5 = FUN_4a0e3c18(iStack_2c), iVar5 == 0)) {
        iVar5 = FUN_4a146a9c(param_1);
        if (*(int *)(iStack_2c + 0x420) != 0) {
          iVar2 = *(int *)(*(int *)(iStack_2c + 0x420) + 8);
        }
        FUN_4a10ce2c(iVar3,0xb3f,(int)*(short *)(iVar2 + iVar5 * 2));
      }
      FUN_4a074bac(param_1,9);
      FUN_4a169a1c(auStack_40);
    }
    else {
      FUN_4a074bac(param_1,8);
      FUN_4a113750(iVar3);
    }
    break;
  case 0x1c:
    FUN_4a116b10(iVar3,iVar8,iVar12);
    FUN_4a071478(param_1);
    break;
  case 0x1d:
    switchD_4a11cc8c::default(uVar9,s_NPC_looking_for_work__4a0729c8);
    uVar1 = FUN_4a1419b4(iStack_2c,iVar5);
    uVar6 = FUN_4a140354(iStack_2c,uVar1);
    FUN_4a10fe80(iVar3,uVar1,uVar6);
    FUN_4a071478(param_1);
    break;
  case 0x1e:
    FUN_4a10ce2c(iVar3,0xb3e);
    FUN_4a071478(param_1);
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
    if (param_1[0x38] == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = FUN_4a1460d4();
    }
    if (iVar2 == 0x20) {
      switchD_4a11cc8c::default(param_1[0x38] != 0,PTR_s_can_t_auto_sit_without_a_chair_4a0729e0);
      if (iVar5 == 0xd) {
        FUN_4a106238(param_1,param_1[0x14] + 2U & 3);
      }
      else if (iVar5 == 6) {
LAB_4a072994:
        iVar2 = 3;
        goto LAB_4a072a5c;
      }
LAB_4a0729a4:
      iVar2 = 1;
    }
    else if (iVar2 == 0x1f) {
      iVar2 = 0;
    }
    else {
      if (iVar2 == 0x21) goto LAB_4a072994;
      if (iVar2 == 0x22) goto LAB_4a0729a4;
      if (iVar2 == 0x23) {
        iVar2 = 2;
      }
      else if (iVar2 == 0x24) {
        iVar2 = 4;
      }
      else if (iVar2 == 0x27) {
        iVar2 = 8;
      }
      else if (iVar2 == 0x25) {
        if (iVar5 == 0xd) {
          iVar2 = 5;
        }
        else {
          iVar2 = 6;
        }
      }
      else if (iVar2 == 0x26) {
        iVar2 = 7;
      }
      else if (iVar2 == 0x28) {
        iVar2 = 9;
      }
      else if (iVar2 == 0x2a) {
        iVar2 = 0xb;
      }
      else if (iVar2 == 0x2b) {
        iVar2 = 0xd;
      }
      else if (iVar2 == 0x2c) {
        iVar2 = 0xe;
      }
      else {
        iVar2 = 10;
      }
    }
LAB_4a072a5c:
    if (param_1[0x32] == iVar2) goto LAB_4a072bd8;
    param_1[0x33] = iVar2;
    FUN_4a074bac(param_1,2);
    break;
  case 0x2d:
    if (uVar9 == 0) goto LAB_4a072bd8;
    iVar2 = FUN_4a146d54(param_1[8]);
    if (iVar2 != 0) {
      FUN_4a1460a4(param_1);
      iVar2 = FUN_4a142ef4();
      if ((iVar2 != 0) && (param_1[0x35] == 0x83)) goto LAB_4a072bd8;
    }
    uVar1 = FUN_4a145f8c(param_1);
    iVar2 = FUN_4a13fd20(uVar1,param_1[0x35]);
    iVar5 = FUN_4a141aa4(uVar1);
    if (iVar5 < iVar2) goto LAB_4a072c98;
    FUN_4a0d585c(uVar1);
    FUN_4a117598(param_1[8],param_1[0x11],param_1[0x13]);
    FUN_4a071478(param_1);
    break;
  case 0x2e:
    if (uVar9 == 0) goto LAB_4a072bd8;
    uVar1 = FUN_4a145f8c(param_1);
    FUN_4a110aac(auStack_40,param_1[8]);
    if (((iStack_38 < 2) && (iVar2 = FUN_4a13fa14(uVar1,0), iVar2 != 4)) &&
       (iVar2 = FUN_4a0e3c18(uVar1), iVar2 == 0)) {
      FUN_4a071ac4(param_1,0);
    }
    else {
      FUN_4a071478(param_1);
    }
    FUN_4a169a1c(auStack_40);
    break;
  case 0x2f:
    if (uVar9 != 0) {
      uVar1 = FUN_4a145f8c(param_1);
      iVar2 = FUN_4a13feec(uVar1,0xc);
      if ((iVar2 != -1) || (iVar2 = FUN_4a13feec(uVar1,0xb), iVar2 != -1)) goto LAB_4a072c98;
    }
LAB_4a072bd8:
    FUN_4a071478(param_1);
    break;
  case 0x30:
    FUN_4a127ce8(iVar3,iVar5);
    FUN_4a071478(param_1);
    break;
  case 0x31:
    uVar1 = FUN_4a145f8c(param_1);
    iVar5 = param_1[0x39];
    iVar2 = FUN_4a140338(uVar1,iVar5);
    if (iVar2 < 1) goto LAB_4a072c98;
    switchD_4a0de288::default(uVar1,iVar5,0xffffffff);
    FUN_4a109d38(param_1[0x38],iVar5);
    FUN_4a071478(param_1);
    break;
  case 0x32:
    uVar1 = FUN_4a145f8c(param_1);
    iVar2 = FUN_4a140338(uVar1,2);
    if ((iVar2 < 1) || (iVar2 = FUN_4a140338(uVar1,3), iVar2 < 1)) goto LAB_4a072c98;
    switchD_4a0de288::default(uVar1,3,0xffffffff);
    FUN_4a109bbc(param_1[0x38]);
    FUN_4a071478(param_1);
    break;
  case 0x33:
    FUN_4a105ef8(iVar5);
    FUN_4a071478(param_1);
    break;
  case 0x34:
    FUN_4a105c84(iVar5);
    FUN_4a071478(param_1);
    break;
  case 0x35:
    iVar2 = FUN_4a1460d4(iVar5);
    switchD_4a11cc8c::default(iVar2 == 0xb,s_drinking_at_non_coffee_machine_4a072e64);
    FUN_4a108a94(iVar5);
    param_1[0x51] = 1;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x54] = -1;
    param_1[0x53] = 60000;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
LAB_4a072d2c:
    uVar4 = 1;
    break;
  case 0x36:
    if (uVar9 != 0) {
      FUN_4a0d8c28(iStack_2c,2,0xfffb0000);
      FUN_4a0d8c28(iStack_2c,1,0xa0000);
    }
    param_1[0x51] = 0x54;
    *(undefined1 *)(param_1 + 0x52) = 0;
    param_1[0x53] = -1;
    param_1[0x54] = -1;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    break;
  case 0x37:
    if (uVar9 != 0) {
      FUN_4a0d8c28(iStack_2c,5,0x60000);
    }
    FUN_4a10913c(param_1[0x38]);
    param_1[0x51] = 0x59;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x53] = 15000;
    param_1[0x54] = -1;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
  }
  FUN_4a1460a4(param_1);
  iVar2 = FUN_4a142ef4();
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  if (((uVar9 & uVar4) != 0) && (uVar4 = FUN_4a13fb44(iStack_2c,iVar8), (uVar4 & 0x200000) != 0)) {
    FUN_4a11186c(iVar3,0x1a,param_1);
  }
  iVar2 = FUN_4a1461c0(param_1,2);
  if (iVar2 == 0) {
    return;
  }
  FUN_4a1071e0(param_1,4);
  iVar3 = -1;
  iVar2 = -1;
  switch(param_1[0x37]) {
  case 1:
    iVar5 = FUN_4a146a9c(param_1);
    if (iVar5 != 0) {
      iVar2 = 0x936;
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
    FUN_4a071090(param_1,1);
    FUN_4a07171c(param_1);
    break;
  case 0xd:
    iVar2 = 0xb4b;
    uVar1 = FUN_4a1460a4(param_1);
    FUN_4a143170(uVar1,param_1[0x39]);
    break;
  case 0xe:
    iVar2 = 0x974;
    break;
  case 0xf:
    iVar2 = 0x93b;
    break;
  case 0x10:
    iVar2 = 0x939;
    break;
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x37:
    FUN_4a071478(param_1);
    break;
  case 0x19:
    if (param_1[0x35] == 0x9d) {
      iVar2 = 0x95e;
    }
    else {
      iVar2 = 0x94e;
    }
    break;
  case 0x2d:
    iVar2 = 0x94c;
    break;
  case 0x2e:
    iVar2 = 0x966;
    break;
  case 0x2f:
    iVar2 = 0x931;
    iVar3 = 8;
    iVar5 = FUN_4a0fb748(param_1[9]);
    if (iVar5 < 0x32) {
      iVar3 = 0x11;
    }
    break;
  case 0x31:
    iVar2 = 0x93d;
    break;
  case 0x32:
    iVar2 = 0x940;
  }
  iVar5 = FUN_4a146a9c(param_1);
  if ((iVar5 == 0) && (*(int *)(param_1[8] + 0x5fc) != 0)) {
    FUN_4a108d64();
  }
  if (iVar2 == -1) {
    return;
  }
  if (iVar3 != -1) {
    FUN_4a0737a4(param_1,iVar3,0);
    return;
  }
code_r0x4a07171c:
  iVar2 = FUN_4a1461c0(param_1,4);
  uVar1 = FUN_4a145f8c(param_1);
  FUN_4a107f20(param_1,0xc);
  piVar7 = (int *)param_1[0x38];
  iVar3 = param_1[0x35];
  if ((piVar7 == (int *)0x0) || (iVar5 = FUN_4a146b58(piVar7,0x2000), iVar5 == 0)) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = (int *)param_1[0x38];
  }
  uVar4 = FUN_4a146a9c(param_1);
  iVar5 = 1 - uVar4;
  if (1 < uVar4) {
    iVar5 = 0;
  }
  iStack_30 = 0;
  FUN_4a0737a4(param_1,0,0);
  uVar4 = FUN_4a13fb44(uVar1,iVar3);
  if (iVar2 == 0) {
    if (piVar11 == (int *)0x0 || (uVar4 & 2) == 0) {
      if (iVar3 == 0x99) {
        FUN_4a10e9c8(param_1[8]);
      }
      else if (iVar3 < 0x9a) {
        if (iVar3 == 0x76) {
LAB_4a0718dc:
          FUN_4a110ec4(param_1[8],3);
        }
        else if (iVar3 < 0x77) {
          if (iVar3 == 4) {
            iVar8 = FUN_4a0fb748(param_1[9]);
            if (iVar8 < 5) {
              iStack_30 = 0;
              FUN_4a0737a4(param_1,10,0);
              return;
            }
          }
          else if (iVar3 == 0x70) {
            FUN_4a1278e8(param_1[8],1);
          }
          else if (iVar3 == 0x74) goto LAB_4a0718dc;
        }
        else if ((iVar3 == 0x7e || iVar3 == 0x7f) || iVar3 == 0x80) {
          param_1[0x3f] = param_1[0x3f] & 0xfffffff7;
        }
      }
      else if (iVar3 == 0xa6) {
LAB_4a071940:
        FUN_4a116cf0(param_1[8],piVar7);
      }
      else if (iVar3 < 0xa7) {
        if (iVar3 != 0x9e) {
          if (iVar3 == 0xa2) {
            if (iVar5 == 0) {
              param_1[0x30] = 0;
              uVar6 = FUN_4a146a9c(param_1);
              FUN_4a111218(param_1[8],uVar6);
            }
          }
          else if (iVar3 == 0xa5) goto LAB_4a071940;
        }
      }
      else if (iVar3 == 0xa9) {
        FUN_4a0daefc(uVar1,0x14);
        FUN_4a0d9d54(uVar1,0,0x280000);
      }
      else if (iVar3 == 0xab) goto LAB_4a071940;
    }
    else {
      FUN_4a071490(param_1,0);
      FUN_4a071490(piVar11,0);
      iVar8 = (**(code **)(*piVar11 + 0x1c))(piVar11,iVar3,param_1);
      if (iVar8 != 0) {
        iVar8 = FUN_4a12785c(param_1[8],param_1[0x4e]);
        if (iVar8 != 0) {
          *(uint *)(iVar8 + 0xfc) = *(uint *)(iVar8 + 0xfc) & 0xffffffbf;
          *(undefined4 *)(iVar8 + 0x13c) = 0;
          *(undefined4 *)(iVar8 + 0x138) = 0xffffffff;
          *(undefined4 *)(iVar8 + 0x140) = 0;
        }
        param_1[0x3f] = param_1[0x3f] & 0xffffffbf;
        param_1[0x4f] = 0;
        param_1[0x4e] = -1;
        param_1[0x50] = 0;
      }
      if (iVar5 != 0) {
        iStack_2c = FUN_4a146a9c(piVar11);
        if (iVar3 == 0x61) {
          FUN_4a0daefc(uVar1,0x12);
          FUN_4a0dd6e4(uVar1,iStack_2c,0x20);
          FUN_4a0dd6e4(uVar1,iStack_2c,0x800);
          goto LAB_4a071a18;
        }
        if (iVar3 == 0x6e) {
          FUN_4a0dd6e4(uVar1,iStack_2c,0x100);
          goto LAB_4a071a18;
        }
      }
    }
  }
  if (iVar3 == 0xa3) {
    FUN_4a107f20(param_1,0x10);
    if (iVar2 == 0) {
      FUN_4a1071e0(param_1,0x20);
    }
    else {
      param_1[0x3c] = 0;
      param_1[0x3b] = -1;
    }
  }
LAB_4a071a18:
  if (((piVar7 != (int *)0x0) && (piVar11 == (int *)0x0 && iVar2 == 0)) &&
     ((**(code **)(*piVar7 + 0x1c))(piVar7,iVar3,param_1), iVar5 != 0)) {
    FUN_4a0dbd6c(uVar1,piVar7[10]);
  }
  if (param_1[0x3b] != -1) {
    iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
    if (iVar2 != 0) {
      iStack_30 = param_1[0x3e];
      iVar2 = param_1[0x3b];
      iVar3 = param_1[0x3c];
      param_1[0x3c] = 0;
      param_1[0x3b] = -1;
      FUN_4a0737a4(param_1,iVar2,iVar3,param_1[0x3d]);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a071a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a071480

void FUN_4a071480(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xfc) = param_2 | *(uint *)(param_1 + 0xfc);
  return;
}



// Address: 4a071490

undefined4 FUN_4a071490(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  switchD_4a11cc8c::default
            (param_2 != param_1,s_attempting_to_get_occupied_flag_o_4a0715bc,param_3,param_4,param_4
            );
  iVar1 = *(int *)(param_1 + 0x104);
  if (iVar1 != param_2) {
    if (iVar1 != 0) {
      FUN_4a1072b0(iVar1,*(undefined4 *)(param_1 + 0x108));
      *(undefined4 *)(param_1 + 0x104) = 0;
      *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
    }
    if (param_2 != 0) {
      iVar1 = FUN_4a1465dc(param_2);
      if (iVar1 != 0) {
        iVar1 = FUN_4a1460d4(param_2);
        if ((iVar1 == 0xf) && (iVar1 = FUN_4a1461c0(param_2,0x100000), iVar1 != 0)) {
          uVar2 = FUN_4a1460a4(param_1);
          uVar3 = FUN_4a144cb0(uVar2,*(undefined4 *)(param_1 + 0x44));
          uVar4 = FUN_4a144cb8(uVar2,*(undefined4 *)(param_1 + 0x4c));
          uVar5 = FUN_4a142f2c(uVar2,uVar3,uVar4);
          uVar5 = (uint)((uVar5 & 0x10) == 0);
        }
        else {
          uVar5 = FUN_4a146640(param_2,*(undefined4 *)(param_1 + 0x44),
                               *(undefined4 *)(param_1 + 0x4c),1,param_1);
          if (uVar5 == 0xffffffff) {
            return 0;
          }
        }
        iVar1 = FUN_4a107254(param_2,uVar5,param_1);
        if (iVar1 != 0) {
          *(int *)(param_1 + 0x104) = param_2;
          *(uint *)(param_1 + 0x108) = uVar5;
          return 1;
        }
      }
      return 0;
    }
  }
  return 1;
}



// Address: 4a0715e4

void FUN_4a0715e4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_4a105d98();
  host_s3eDeviceYield_arm(0);
  iVar1 = FUN_4a146a9c(param_1);
  if (iVar1 != 0) {
    return;
  }
  uVar2 = FUN_4a146be8(param_1,0);
  iVar1 = FUN_4a146ea4(*(undefined4 *)(param_1 + 0x20));
  iVar6 = 0;
  if (iVar1 == 0) {
    uVar3 = FUN_4a16bdcc(&uStack_34,PTR_DAT_4a071718);
    FUN_4a13edec(uVar2,uVar3,0x2be,0);
    FUN_4a16bef4(&uStack_34);
  }
  else {
    uVar3 = FUN_4a16bdcc(&uStack_34,PTR_DAT_4a071718);
    FUN_4a13e9e8(uVar2,uVar3,0);
    FUN_4a16bef4(&uStack_34);
  }
  iVar1 = *(int *)(PTR_DAT_4a071718 + 0xc);
  if (iVar1 != 0) {
    puVar5 = *(undefined4 **)(iVar1 + 8);
  }
  else {
    puVar5 = (undefined4 *)0x0;
  }
  uVar2 = *puVar5;
  if (iVar1 != 0) {
    iVar6 = *(int *)(iVar1 + 8);
  }
  uVar8 = *(undefined4 *)(iVar6 + 8);
  uVar3 = FUN_4a171fac(*(undefined4 *)(param_1 + 0xc4));
  uVar3 = FUN_4a17295c(uVar3,0xfffffff0);
  iVar1 = FUN_4a1460a4(param_1);
  uVar7 = *(undefined4 *)(iVar1 + 0x488);
  iVar1 = FUN_4a1460a4(param_1);
  uVar9 = *(undefined4 *)(iVar1 + 0x484);
  uVar4 = FUN_4a146be8(param_1,2);
  uStack_34 = uVar8;
  uStack_30 = uVar3;
  uStack_2c = uVar7;
  uStack_28 = uVar9;
  FUN_4a0caa9c(uVar4,0,0,uVar2);
  return;
}



// Address: 4a07171c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a07171c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_4a1461c0(param_1,4);
  uVar2 = FUN_4a145f8c(param_1);
  FUN_4a107f20(param_1,0xc);
  piVar3 = (int *)param_1[0x38];
  iVar8 = param_1[0x35];
  if ((piVar3 == (int *)0x0) || (iVar4 = FUN_4a146b58(piVar3,0x2000), iVar4 == 0)) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = (int *)param_1[0x38];
  }
  uVar5 = FUN_4a146a9c(param_1);
  iVar4 = 1 - uVar5;
  if (1 < uVar5) {
    iVar4 = 0;
  }
  FUN_4a0737a4(param_1,0,0);
  uVar5 = FUN_4a13fb44(uVar2,iVar8);
  if (iVar1 == 0) {
    if (piVar9 == (int *)0x0 || (uVar5 & 2) == 0) {
      if (iVar8 == 0x99) {
        FUN_4a10e9c8(param_1[8]);
      }
      else if (iVar8 < 0x9a) {
        if (iVar8 == 0x76) {
LAB_4a0718dc:
          FUN_4a110ec4(param_1[8],3);
        }
        else if (iVar8 < 0x77) {
          if (iVar8 == 4) {
            iVar6 = FUN_4a0fb748(param_1[9]);
            if (iVar6 < 5) {
              FUN_4a0737a4(param_1,10,0);
              return;
            }
          }
          else if (iVar8 == 0x70) {
            FUN_4a1278e8(param_1[8],1);
          }
          else if (iVar8 == 0x74) goto LAB_4a0718dc;
        }
        else if ((iVar8 == 0x7e || iVar8 == 0x7f) || iVar8 == 0x80) {
          param_1[0x3f] = param_1[0x3f] & 0xfffffff7;
        }
      }
      else if (iVar8 == 0xa6) {
LAB_4a071940:
        FUN_4a116cf0(param_1[8],piVar3);
      }
      else if (iVar8 < 0xa7) {
        if (iVar8 != 0x9e) {
          if (iVar8 == 0xa2) {
            if (iVar4 == 0) {
              param_1[0x30] = 0;
              uVar7 = FUN_4a146a9c(param_1);
              FUN_4a111218(param_1[8],uVar7);
            }
          }
          else if (iVar8 == 0xa5) goto LAB_4a071940;
        }
      }
      else if (iVar8 == 0xa9) {
        FUN_4a0daefc(uVar2,0x14);
        FUN_4a0d9d54(uVar2,0,0x280000);
      }
      else if (iVar8 == 0xab) goto LAB_4a071940;
    }
    else {
      FUN_4a071490(param_1,0);
      FUN_4a071490(piVar9,0);
      iVar6 = (**(code **)(*piVar9 + 0x1c))(piVar9,iVar8,param_1);
      if (iVar6 != 0) {
        iVar6 = FUN_4a12785c(param_1[8],param_1[0x4e]);
        if (iVar6 != 0) {
          *(uint *)(iVar6 + 0xfc) = *(uint *)(iVar6 + 0xfc) & 0xffffffbf;
          *(undefined4 *)(iVar6 + 0x13c) = 0;
          *(undefined4 *)(iVar6 + 0x138) = 0xffffffff;
          *(undefined4 *)(iVar6 + 0x140) = 0;
        }
        param_1[0x3f] = param_1[0x3f] & 0xffffffbf;
        param_1[0x4f] = 0;
        param_1[0x4e] = -1;
        param_1[0x50] = 0;
      }
      if (iVar4 != 0) {
        uVar7 = FUN_4a146a9c(piVar9);
        if (iVar8 == 0x61) {
          FUN_4a0daefc(uVar2,0x12);
          FUN_4a0dd6e4(uVar2,uVar7,0x20);
          FUN_4a0dd6e4(uVar2,uVar7,0x800);
          goto LAB_4a071a18;
        }
        if (iVar8 == 0x6e) {
          FUN_4a0dd6e4(uVar2,uVar7,0x100);
          goto LAB_4a071a18;
        }
      }
    }
  }
  if (iVar8 == 0xa3) {
    FUN_4a107f20(param_1,0x10);
    if (iVar1 == 0) {
      FUN_4a1071e0(param_1,0x20);
    }
    else {
      param_1[0x3c] = 0;
      param_1[0x3b] = -1;
    }
  }
LAB_4a071a18:
  if (((piVar3 != (int *)0x0) && (piVar9 == (int *)0x0 && iVar1 == 0)) &&
     ((**(code **)(*piVar3 + 0x1c))(piVar3,iVar8,param_1), iVar4 != 0)) {
    FUN_4a0dbd6c(uVar2,piVar3[10]);
  }
  if (param_1[0x3b] == -1) {
    return;
  }
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1);
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a071a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  iVar1 = param_1[0x3b];
  iVar8 = param_1[0x3c];
  param_1[0x3c] = 0;
  param_1[0x3b] = -1;
  FUN_4a0737a4(param_1,iVar1,iVar8,param_1[0x3d]);
  return;
}



// Address: 4a071ac4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a071ac4(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_4a1071e0(param_1,4);
  iVar7 = -1;
  iVar6 = -1;
  uVar9 = 0x930;
  switch(param_1[0x37]) {
  case 1:
    if ((param_2 == 0) || (iVar5 = FUN_4a146a9c(param_1), iVar5 != 0)) {
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
    FUN_4a071090(param_1,1);
    FUN_4a07171c(param_1);
    break;
  case 0xd:
    iVar6 = 0xb4b;
    uVar9 = FUN_4a1460a4(param_1);
    uVar9 = FUN_4a143170(uVar9,param_1[0x39]);
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
    FUN_4a071478(param_1);
    break;
  case 0x19:
    if (param_1[0x35] == 0x9d) {
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
    iVar5 = FUN_4a0fb748(param_1[9]);
    if (iVar5 < 0x32) {
      iVar7 = 0x11;
    }
    break;
  case 0x31:
    iVar6 = 0x93d;
    break;
  case 0x32:
    iVar6 = 0x940;
  }
  iVar5 = FUN_4a146a9c(param_1);
  if ((iVar5 == 0) && (*(int *)(param_1[8] + 0x5fc) != 0)) {
    FUN_4a108d64();
  }
  if (iVar6 == -1) {
    return;
  }
  if ((param_2 == 0) && (iVar5 = FUN_4a146a9c(param_1), iVar5 == 0)) {
    FUN_4a1136bc(param_1[8],iVar6,uVar9);
  }
  if (iVar7 != -1) {
    FUN_4a0737a4(param_1,iVar7,0);
    return;
  }
  iVar6 = FUN_4a1461c0(param_1,4);
  uVar9 = FUN_4a145f8c(param_1);
  FUN_4a107f20(param_1,0xc);
  piVar1 = (int *)param_1[0x38];
  iVar7 = param_1[0x35];
  if ((piVar1 == (int *)0x0) || (iVar5 = FUN_4a146b58(piVar1,0x2000), iVar5 == 0)) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = (int *)param_1[0x38];
  }
  uVar2 = FUN_4a146a9c(param_1);
  iVar5 = 1 - uVar2;
  if (1 < uVar2) {
    iVar5 = 0;
  }
  FUN_4a0737a4(param_1,0,0);
  uVar2 = FUN_4a13fb44(uVar9,iVar7);
  if (iVar6 == 0) {
    if (piVar8 == (int *)0x0 || (uVar2 & 2) == 0) {
      if (iVar7 == 0x99) {
        FUN_4a10e9c8(param_1[8]);
      }
      else if (iVar7 < 0x9a) {
        if (iVar7 == 0x76) {
LAB_4a0718dc:
          FUN_4a110ec4(param_1[8],3);
        }
        else if (iVar7 < 0x77) {
          if (iVar7 == 4) {
            iVar3 = FUN_4a0fb748(param_1[9]);
            if (iVar3 < 5) {
              FUN_4a0737a4(param_1,10,0);
              return;
            }
          }
          else if (iVar7 == 0x70) {
            FUN_4a1278e8(param_1[8],1);
          }
          else if (iVar7 == 0x74) goto LAB_4a0718dc;
        }
        else if ((iVar7 == 0x7e || iVar7 == 0x7f) || iVar7 == 0x80) {
          param_1[0x3f] = param_1[0x3f] & 0xfffffff7;
        }
      }
      else if (iVar7 == 0xa6) {
LAB_4a071940:
        FUN_4a116cf0(param_1[8],piVar1);
      }
      else if (iVar7 < 0xa7) {
        if (iVar7 != 0x9e) {
          if (iVar7 == 0xa2) {
            if (iVar5 == 0) {
              param_1[0x30] = 0;
              uVar4 = FUN_4a146a9c(param_1);
              FUN_4a111218(param_1[8],uVar4);
            }
          }
          else if (iVar7 == 0xa5) goto LAB_4a071940;
        }
      }
      else if (iVar7 == 0xa9) {
        FUN_4a0daefc(uVar9,0x14);
        FUN_4a0d9d54(uVar9,0,0x280000);
      }
      else if (iVar7 == 0xab) goto LAB_4a071940;
    }
    else {
      FUN_4a071490(param_1,0);
      FUN_4a071490(piVar8,0);
      iVar3 = (**(code **)(*piVar8 + 0x1c))(piVar8,iVar7,param_1);
      if (iVar3 != 0) {
        iVar3 = FUN_4a12785c(param_1[8],param_1[0x4e]);
        if (iVar3 != 0) {
          *(uint *)(iVar3 + 0xfc) = *(uint *)(iVar3 + 0xfc) & 0xffffffbf;
          *(undefined4 *)(iVar3 + 0x13c) = 0;
          *(undefined4 *)(iVar3 + 0x138) = 0xffffffff;
          *(undefined4 *)(iVar3 + 0x140) = 0;
        }
        param_1[0x3f] = param_1[0x3f] & 0xffffffbf;
        param_1[0x4f] = 0;
        param_1[0x4e] = -1;
        param_1[0x50] = 0;
      }
      if (iVar5 != 0) {
        uVar4 = FUN_4a146a9c(piVar8);
        if (iVar7 == 0x61) {
          FUN_4a0daefc(uVar9,0x12);
          FUN_4a0dd6e4(uVar9,uVar4,0x20);
          FUN_4a0dd6e4(uVar9,uVar4,0x800);
          goto LAB_4a071a18;
        }
        if (iVar7 == 0x6e) {
          FUN_4a0dd6e4(uVar9,uVar4,0x100);
          goto LAB_4a071a18;
        }
      }
    }
  }
  if (iVar7 == 0xa3) {
    FUN_4a107f20(param_1,0x10);
    if (iVar6 == 0) {
      FUN_4a1071e0(param_1,0x20);
    }
    else {
      param_1[0x3c] = 0;
      param_1[0x3b] = -1;
    }
  }
LAB_4a071a18:
  if (((piVar1 != (int *)0x0) && (piVar8 == (int *)0x0 && iVar6 == 0)) &&
     ((**(code **)(*piVar1 + 0x1c))(piVar1,iVar7,param_1), iVar5 != 0)) {
    FUN_4a0dbd6c(uVar9,piVar1[10]);
  }
  if (param_1[0x3b] == -1) {
    return;
  }
  iVar6 = (**(code **)(*param_1 + 0x10))(param_1);
  if (iVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a071a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  iVar6 = param_1[0x3b];
  iVar7 = param_1[0x3c];
  param_1[0x3c] = 0;
  param_1[0x3b] = -1;
  FUN_4a0737a4(param_1,iVar6,iVar7,param_1[0x3d]);
  return;
}



// Address: 4a071d48

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a071d48(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  
  if (param_2 == param_1) {
    return;
  }
  if ((*(uint *)(param_1 + 0xfc) & 0x40) == 0) {
    return;
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x20) + 0x5f8);
  iVar1 = *(int *)(iVar3 + 0xe0);
  iVar2 = 0;
  if ((iVar1 != 0) && (iVar1 = FUN_4a146b58(iVar1,0x2000), iVar2 = 0, iVar1 != 0)) {
    iVar2 = *(int *)(iVar3 + 0xe0);
  }
  if (*(int *)(param_1 + 0x138) != 0) {
    if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a071da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    iVar2 = FUN_4a146a9c();
    if (iVar2 != *(int *)(param_1 + 0x138)) {
                    /* WARNING: Could not recover jumptable at 0x4a071db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  iVar2 = FUN_4a12785c(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x138));
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x13c) = 0;
    *(undefined4 *)(iVar2 + 0x138) = 0xffffffff;
    *(uint *)(iVar2 + 0xfc) = *(uint *)(iVar2 + 0xfc) & 0xffffffbf;
    *(undefined4 *)(iVar2 + 0x140) = 0;
  }
  *(uint *)(param_1 + 0xfc) = *(uint *)(param_1 + 0xfc) & 0xffffffbf;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x140) = 0;
  return;
}



// Address: 4a071e0c

void FUN_4a071e0c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_4a1065ec();
  iVar1 = FUN_4a146a9c(param_1);
  if (iVar1 == 0) {
    uVar2 = FUN_4a146be8(param_1,2);
    FUN_4a0caa9c(uVar2,param_2,1);
    return;
  }
  return;
}



// Address: 4a071e74

/* WARNING: Removing unreachable block (ram,0x4a071cf8) */
/* WARNING: Removing unreachable block (ram,0x4a071d08) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a071e74(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 local_40 [2];
  int local_38;
  int iStack_30;
  int local_2c;
  int local_28;
  
  local_28 = param_1[8];
  local_2c = FUN_4a145f8c(param_1);
  param_1[0x37] = param_2;
  iVar2 = param_1[0x38];
  iVar9 = param_1[0x35];
  if ((iVar2 == 0) || (iVar3 = FUN_4a146b58(iVar2,0x2000), iVar3 == 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_1[0x38];
  }
  iVar10 = param_1[0x39];
  iVar11 = param_1[0x3a];
  uVar4 = FUN_4a146a9c(param_1);
  uVar7 = 1 - uVar4;
  if (1 < uVar4) {
    uVar7 = 0;
  }
  if (uVar7 != 0 && iVar3 != 0) {
    uVar5 = FUN_4a146a9c(iVar3);
    FUN_4a0d56bc(local_2c,uVar5);
  }
  if (((iVar2 != 0) && (iVar3 == 0)) && (param_2 != 1)) {
    uVar5 = FUN_4a1461c0(param_1,0x800);
    FUN_4a1071f0(iVar2,0x800,uVar5);
    uVar5 = FUN_4a1461c0(param_1,0x1000);
    FUN_4a1071f0(iVar2,0x1000,uVar5);
  }
  uVar4 = 0;
  switch(param_2) {
  case 0:
    iVar2 = param_1[0x32];
    if (((((iVar2 == 9 || iVar2 == 0xb) || iVar2 == 0xd) || iVar2 == 0xc) || iVar2 == 0xe) ||
        iVar2 == 8) {
      param_1[0x36] = param_1[0x36] + -1;
      FUN_4a071e74(param_1,0x1f);
    }
    else if (iVar2 == 4) {
      param_1[0x36] = param_1[0x36] + -1;
      FUN_4a071e74(param_1,0x22);
    }
    else {
      FUN_4a074bac(param_1,1);
    }
    break;
  case 1:
    FUN_4a076e50(param_1,iVar2,iVar10);
    break;
  case 2:
  case 3:
    if (iVar2 == 0) {
      FUN_4a106248(param_1,iVar10 - param_1[0x11],iVar11 - param_1[0x13]);
    }
    else {
      FUN_4a1077b8(param_1,iVar2);
    }
    if (param_2 == 3) {
LAB_4a0720fc:
      FUN_4a106238(param_1,param_1[0x14] + 2U & 3);
    }
    goto LAB_4a072bd8;
  case 4:
  case 5:
    FUN_4a106238(param_1,*(undefined4 *)(iVar2 + 0x50));
    if (param_2 == 5) goto LAB_4a0720fc;
    goto LAB_4a072bd8;
  case 6:
  case 7:
  case 8:
    FUN_4a075388(param_1,iVar9,param_2);
    goto LAB_4a072d2c;
  case 9:
    FUN_4a074bac(param_1,5);
    break;
  case 10:
    FUN_4a074bac(param_1,6);
    break;
  case 0xb:
    iVar2 = 0;
    if (param_1[0x38] != 0) {
      iVar3 = FUN_4a146b58(param_1[0x38],0x2000);
      iVar2 = 0;
      if (iVar3 != 0) {
        iVar2 = param_1[0x38];
      }
    }
    FUN_4a076d54(iVar2);
    FUN_4a071478(param_1);
    break;
  case 0xc:
    FUN_4a074bac(param_1,7);
    break;
  case 0xd:
    switchD_4a11cc8c::default(uVar7,s_NPC_cooking__4a072608);
    iVar3 = FUN_4a0d5b78(local_2c,iVar10);
    if (iVar3 == 0) {
LAB_4a072c98:
      FUN_4a071ac4(param_1,0);
    }
    else {
      FUN_4a110228(local_28,0,iVar2);
      iVar3 = FUN_4a1460d4(iVar2);
      switchD_4a11cc8c::default(iVar3 == 0x1b,s_cooking_at_non_stove__4a072618);
      FUN_4a105774(iVar2);
      param_1[0x51] = 0x36;
      *(undefined1 *)(param_1 + 0x52) = 1;
      param_1[0x54] = -1;
      param_1[0x53] = 1000;
      *(undefined1 *)(param_1 + 0x55) = 0;
      *(undefined1 *)((int)param_1 + 0x149) = 0;
      FUN_4a074bac(param_1,4);
    }
    break;
  case 0xe:
    switchD_4a11cc8c::default(uVar7,s_NPC_fishing__4a072630);
    iVar3 = FUN_4a13fa98(local_2c);
    if (iVar3 == 0) goto LAB_4a072c98;
    iVar3 = *(int *)(iVar2 + 0x28);
    if (iVar3 == 8) {
      FUN_4a106238(param_1,0);
    }
    else if (iVar3 == 9) {
      FUN_4a106238(param_1,1);
    }
    else if (iVar3 == 7) {
      FUN_4a106238(param_1,2);
    }
    else if (iVar3 == 6) {
      FUN_4a106238(param_1,3);
    }
    FUN_4a110228(local_28,1,iVar2);
    param_1[0x51] = 0x3e;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x54] = -1;
    param_1[0x53] = 1000;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    break;
  case 0xf:
    switchD_4a11cc8c::default(uVar7,s_NPC_repairing__4a072640);
    iVar3 = FUN_4a13fca8(local_2c);
    if (iVar3 == 0) goto LAB_4a072c98;
    FUN_4a110228(local_28,2,iVar2);
    param_1[0x51] = 0x36;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x53] = 1000;
    param_1[0x54] = -1;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    break;
  case 0x11:
    iVar3 = 5000;
    if (uVar7 != 0) {
      uVar5 = 0x70000;
      if (iVar9 == 0x84) {
        uVar5 = FUN_4a1460a4(param_1);
        uVar5 = FUN_4a144980(uVar5,iVar10);
      }
      FUN_4a0d8c28(local_2c,0,uVar5);
    }
    iVar2 = FUN_4a1460d4(iVar2);
    if (iVar2 == 0x11) {
      iVar3 = 0xdac;
    }
    iVar2 = 0x36;
    if (param_1[0x32] == 1) {
      iVar2 = 0x22;
    }
    param_1[0x51] = iVar2;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x54] = -1;
    param_1[0x53] = iVar3;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    uVar4 = 1;
    FUN_4a109e5c(param_1,0x46);
    break;
  case 0x12:
    iVar3 = FUN_4a1460d4(iVar2);
    if (iVar3 == 0x19) {
      if (uVar7 != 0) {
        FUN_4a0d8c28(local_2c,3,0xa0000);
      }
      FUN_4a105cf4(iVar2);
      param_1[0x51] = 0x61;
      *(undefined1 *)(param_1 + 0x52) = 1;
      param_1[0x53] = 5000;
      param_1[0x54] = -1;
      *(undefined1 *)(param_1 + 0x55) = 0;
      *(undefined1 *)((int)param_1 + 0x149) = 0;
      FUN_4a074bac(param_1,4);
    }
    else {
      if (iVar3 != 5) {
        if (iVar3 == 4) {
          if ((uVar7 != 0) && (iVar3 = FUN_4a1461c0(param_1,0x400), iVar3 == 0)) {
            FUN_4a0d8c28(local_2c,3,0x70000);
          }
          FUN_4a105328(iVar2);
          param_1[0x51] = 99;
          *(undefined1 *)(param_1 + 0x52) = 1;
          param_1[0x54] = -1;
          param_1[0x53] = 0x960;
          *(undefined1 *)(param_1 + 0x55) = 0;
          *(undefined1 *)((int)param_1 + 0x149) = 0;
          FUN_4a074bac(param_1,4);
        }
        else {
          switchD_4a11cc8c::default(0,s_what_are_we_washing_at___4a0729ac);
        }
        break;
      }
      FUN_4a1053a4(iVar2);
      if (uVar7 != 0) {
        uVar5 = FUN_4a145f8c(param_1);
        FUN_4a0d8c28(uVar5,3,0xa0000);
      }
      param_1[0x51] = 0x46;
      *(undefined1 *)(param_1 + 0x52) = 1;
      param_1[0x53] = 8000;
      param_1[0x54] = -1;
      *(undefined1 *)(param_1 + 0x55) = 0;
      *(undefined1 *)((int)param_1 + 0x149) = 0;
      FUN_4a074bac(param_1,4);
    }
    goto LAB_4a072d2c;
  case 0x13:
    if (uVar7 != 0) {
      FUN_4a0d8c28(local_2c,2,0x320000);
    }
    if (iVar9 == 0x7c) {
      iVar2 = 0x5b;
    }
    else {
      iVar2 = 0x2d;
    }
    param_1[0x51] = iVar2;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x53] = 2000;
    param_1[0x54] = -1;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    break;
  case 0x14:
  case 0x15:
    uVar5 = FUN_4a145f8c(param_1);
    iVar2 = FUN_4a13fb90();
    iVar3 = param_1[0x35];
    uVar6 = FUN_4a146a9c(param_1);
    iVar3 = FUN_4a0d6f44(uVar5,uVar6,iVar3 == 0x7f);
    if ((param_2 == 0x14) && (iVar2 + 0x78 <= iVar3)) {
      iVar3 = iVar2 + 0x78;
    }
    iVar10 = FUN_4a146a9c(param_1);
    if (iVar10 == 0) {
      FUN_4a0d7614(uVar5,1);
      FUN_4a0d8c28(uVar5,1,0x10000);
    }
    iVar2 = (iVar3 - iVar2) + iVar2;
    if ((param_1[0x34] == 0) || (iVar3 = FUN_4a1460d4(), iVar3 != 0xd)) {
      iVar3 = FUN_4a1461c0(param_1,0x80000);
      if (iVar3 == 0) {
        iVar3 = 0x1a;
      }
      else {
        iVar3 = 0x19;
      }
    }
    else {
      iVar3 = 0x51;
    }
    param_1[0x51] = iVar3;
    *(char *)(param_1 + 0x52) = (char)(iVar2 >> 0x1f) + '\x01';
    param_1[0x54] = -1;
    param_1[0x53] = iVar2;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 1;
    FUN_4a074bac(param_1,4);
    uVar4 = 1;
    break;
  case 0x16:
    FUN_4a10913c(iVar2);
    FUN_4a071478(param_1);
    goto LAB_4a072d2c;
  case 0x17:
    FUN_4a109944(iVar2);
    FUN_4a071478(param_1);
    goto LAB_4a072d2c;
  case 0x18:
    if (param_1[0x35] == 0x89) {
      FUN_4a107e90(iVar2);
    }
    else if (param_1[0x35] == 0x88) {
      FUN_4a107ed8(iVar2);
    }
    iVar3 = FUN_4a114098(local_28,param_1,iVar2);
    if (iVar3 == 0) {
      local_40[0] = 0;
      FUN_4a0737a4(param_1,0x6f,iVar2);
    }
    else {
      uVar5 = 0x9b;
      iVar2 = FUN_4a1460d4(iVar3);
      if (iVar2 == 10) {
        uVar5 = 0x9c;
      }
      local_40[0] = 0;
      FUN_4a0737a4(param_1,uVar5,iVar3);
    }
    goto LAB_4a072d2c;
  case 0x19:
    iVar2 = FUN_4a110878(local_28,param_1,iVar9);
    if (iVar2 == 0) goto LAB_4a072c98;
    param_1[0x38] = iVar2;
    FUN_4a071478(param_1);
    break;
  case 0x1a:
    if (uVar7 != 0) {
      FUN_4a0d8c28(local_2c,5,0x30000);
    }
    param_1[0x51] = 0x25;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x53] = 10000;
    param_1[0x54] = -1;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    break;
  case 0x1b:
    if (uVar7 == 0) {
      FUN_4a110aac(local_40,local_28);
      iVar2 = 0;
      if ((local_38 == 2) && (iVar3 = FUN_4a0e3c18(local_2c), iVar3 == 0)) {
        iVar3 = FUN_4a146a9c(param_1);
        if (*(int *)(local_2c + 0x420) != 0) {
          iVar2 = *(int *)(*(int *)(local_2c + 0x420) + 8);
        }
        FUN_4a10ce2c(local_28,0xb3f,(int)*(short *)(iVar2 + iVar3 * 2));
      }
      FUN_4a074bac(param_1,9);
      FUN_4a169a1c(local_40);
    }
    else {
      FUN_4a074bac(param_1,8);
      FUN_4a113750(local_28);
    }
    break;
  case 0x1c:
    FUN_4a116b10(local_28,iVar9,iVar10);
    FUN_4a071478(param_1);
    break;
  case 0x1d:
    switchD_4a11cc8c::default(uVar7,s_NPC_looking_for_work__4a0729c8);
    uVar5 = FUN_4a1419b4(local_2c,iVar2);
    uVar6 = FUN_4a140354(local_2c,uVar5);
    FUN_4a10fe80(local_28,uVar5,uVar6);
    FUN_4a071478(param_1);
    break;
  case 0x1e:
    FUN_4a10ce2c(local_28,0xb3e);
    FUN_4a071478(param_1);
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
    if (param_1[0x38] == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = FUN_4a1460d4();
    }
    if (param_2 == 0x20) {
      switchD_4a11cc8c::default(param_1[0x38] != 0,PTR_s_can_t_auto_sit_without_a_chair_4a0729e0);
      if (iVar2 == 0xd) {
        FUN_4a106238(param_1,param_1[0x14] + 2U & 3);
      }
      else if (iVar2 == 6) {
LAB_4a072994:
        iVar2 = 3;
        goto LAB_4a072a5c;
      }
LAB_4a0729a4:
      iVar2 = 1;
    }
    else if (param_2 == 0x1f) {
      iVar2 = 0;
    }
    else {
      if (param_2 == 0x21) goto LAB_4a072994;
      if (param_2 == 0x22) goto LAB_4a0729a4;
      if (param_2 == 0x23) {
        iVar2 = 2;
      }
      else if (param_2 == 0x24) {
        iVar2 = 4;
      }
      else if (param_2 == 0x27) {
        iVar2 = 8;
      }
      else if (param_2 == 0x25) {
        if (iVar2 == 0xd) {
          iVar2 = 5;
        }
        else {
          iVar2 = 6;
        }
      }
      else if (param_2 == 0x26) {
        iVar2 = 7;
      }
      else if (param_2 == 0x28) {
        iVar2 = 9;
      }
      else if (param_2 == 0x2a) {
        iVar2 = 0xb;
      }
      else if (param_2 == 0x2b) {
        iVar2 = 0xd;
      }
      else if (param_2 == 0x2c) {
        iVar2 = 0xe;
      }
      else {
        iVar2 = 10;
      }
    }
LAB_4a072a5c:
    if (param_1[0x32] == iVar2) goto LAB_4a072bd8;
    param_1[0x33] = iVar2;
    FUN_4a074bac(param_1,2);
    break;
  case 0x2d:
    if (uVar7 == 0) goto LAB_4a072bd8;
    iVar2 = FUN_4a146d54(param_1[8]);
    if (iVar2 != 0) {
      FUN_4a1460a4(param_1);
      iVar2 = FUN_4a142ef4();
      if ((iVar2 != 0) && (param_1[0x35] == 0x83)) goto LAB_4a072bd8;
    }
    uVar5 = FUN_4a145f8c(param_1);
    iVar2 = FUN_4a13fd20(uVar5,param_1[0x35]);
    iVar3 = FUN_4a141aa4(uVar5);
    if (iVar3 < iVar2) goto LAB_4a072c98;
    FUN_4a0d585c(uVar5);
    FUN_4a117598(param_1[8],param_1[0x11],param_1[0x13]);
    FUN_4a071478(param_1);
    break;
  case 0x2e:
    if (uVar7 == 0) goto LAB_4a072bd8;
    uVar5 = FUN_4a145f8c(param_1);
    FUN_4a110aac(local_40,param_1[8]);
    if (((local_38 < 2) && (iVar2 = FUN_4a13fa14(uVar5,0), iVar2 != 4)) &&
       (iVar2 = FUN_4a0e3c18(uVar5), iVar2 == 0)) {
      FUN_4a071ac4(param_1,0);
    }
    else {
      FUN_4a071478(param_1);
    }
    FUN_4a169a1c(local_40);
    break;
  case 0x2f:
    if (uVar7 != 0) {
      uVar5 = FUN_4a145f8c(param_1);
      iVar2 = FUN_4a13feec(uVar5,0xc);
      if ((iVar2 != -1) || (iVar2 = FUN_4a13feec(uVar5,0xb), iVar2 != -1)) goto LAB_4a072c98;
    }
LAB_4a072bd8:
    FUN_4a071478(param_1);
    break;
  case 0x30:
    FUN_4a127ce8(local_28,iVar2);
    FUN_4a071478(param_1);
    break;
  case 0x31:
    uVar5 = FUN_4a145f8c(param_1);
    iVar3 = param_1[0x39];
    iVar2 = FUN_4a140338(uVar5,iVar3);
    if (iVar2 < 1) goto LAB_4a072c98;
    switchD_4a0de288::default(uVar5,iVar3,0xffffffff);
    FUN_4a109d38(param_1[0x38],iVar3);
    FUN_4a071478(param_1);
    break;
  case 0x32:
    uVar5 = FUN_4a145f8c(param_1);
    iVar2 = FUN_4a140338(uVar5,2);
    if ((iVar2 < 1) || (iVar2 = FUN_4a140338(uVar5,3), iVar2 < 1)) goto LAB_4a072c98;
    switchD_4a0de288::default(uVar5,3,0xffffffff);
    FUN_4a109bbc(param_1[0x38]);
    FUN_4a071478(param_1);
    break;
  case 0x33:
    FUN_4a105ef8(iVar2);
    FUN_4a071478(param_1);
    break;
  case 0x34:
    FUN_4a105c84(iVar2);
    FUN_4a071478(param_1);
    break;
  case 0x35:
    iVar3 = FUN_4a1460d4(iVar2);
    switchD_4a11cc8c::default(iVar3 == 0xb,s_drinking_at_non_coffee_machine_4a072e64);
    FUN_4a108a94(iVar2);
    param_1[0x51] = 1;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x54] = -1;
    param_1[0x53] = 60000;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
LAB_4a072d2c:
    uVar4 = 1;
    break;
  case 0x36:
    if (uVar7 != 0) {
      FUN_4a0d8c28(local_2c,2,0xfffb0000);
      FUN_4a0d8c28(local_2c,1,0xa0000);
    }
    param_1[0x51] = 0x54;
    *(undefined1 *)(param_1 + 0x52) = 0;
    param_1[0x53] = -1;
    param_1[0x54] = -1;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    break;
  case 0x37:
    if (uVar7 != 0) {
      FUN_4a0d8c28(local_2c,5,0x60000);
    }
    FUN_4a10913c(param_1[0x38]);
    param_1[0x51] = 0x59;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x53] = 15000;
    param_1[0x54] = -1;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
  }
  FUN_4a1460a4(param_1);
  iVar2 = FUN_4a142ef4();
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  if (((uVar7 & uVar4) != 0) && (uVar4 = FUN_4a13fb44(local_2c,iVar9), (uVar4 & 0x200000) != 0)) {
    FUN_4a11186c(local_28,0x1a,param_1);
  }
  iVar2 = FUN_4a1461c0(param_1,2);
  if (iVar2 == 0) {
    return;
  }
  FUN_4a1071e0(param_1,4);
  iVar9 = -1;
  iVar2 = -1;
  switch(param_1[0x37]) {
  case 1:
    iVar3 = FUN_4a146a9c(param_1);
    if (iVar3 != 0) {
      iVar2 = 0x936;
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
    FUN_4a071090(param_1,1);
    FUN_4a07171c(param_1);
    break;
  case 0xd:
    iVar2 = 0xb4b;
    uVar5 = FUN_4a1460a4(param_1);
    FUN_4a143170(uVar5,param_1[0x39]);
    break;
  case 0xe:
    iVar2 = 0x974;
    break;
  case 0xf:
    iVar2 = 0x93b;
    break;
  case 0x10:
    iVar2 = 0x939;
    break;
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x37:
    FUN_4a071478(param_1);
    break;
  case 0x19:
    if (param_1[0x35] == 0x9d) {
      iVar2 = 0x95e;
    }
    else {
      iVar2 = 0x94e;
    }
    break;
  case 0x2d:
    iVar2 = 0x94c;
    break;
  case 0x2e:
    iVar2 = 0x966;
    break;
  case 0x2f:
    iVar2 = 0x931;
    iVar9 = 8;
    iVar3 = FUN_4a0fb748(param_1[9]);
    if (iVar3 < 0x32) {
      iVar9 = 0x11;
    }
    break;
  case 0x31:
    iVar2 = 0x93d;
    break;
  case 0x32:
    iVar2 = 0x940;
  }
  iVar3 = FUN_4a146a9c(param_1);
  if ((iVar3 == 0) && (*(int *)(param_1[8] + 0x5fc) != 0)) {
    FUN_4a108d64();
  }
  if (iVar2 == -1) {
    return;
  }
  if (iVar9 != -1) {
    FUN_4a0737a4(param_1,iVar9,0);
    return;
  }
  iVar2 = FUN_4a1461c0(param_1,4);
  local_28 = FUN_4a145f8c(param_1);
  FUN_4a107f20(param_1,0xc);
  piVar1 = (int *)param_1[0x38];
  iVar9 = param_1[0x35];
  if ((piVar1 == (int *)0x0) || (iVar3 = FUN_4a146b58(piVar1,0x2000), iVar3 == 0)) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = (int *)param_1[0x38];
  }
  uVar4 = FUN_4a146a9c(param_1);
  iVar3 = 1 - uVar4;
  if (1 < uVar4) {
    iVar3 = 0;
  }
  iStack_30 = 0;
  FUN_4a0737a4(param_1,0,0);
  uVar4 = FUN_4a13fb44(local_28,iVar9);
  if (iVar2 == 0) {
    if (piVar8 == (int *)0x0 || (uVar4 & 2) == 0) {
      if (iVar9 == 0x99) {
        FUN_4a10e9c8(param_1[8]);
      }
      else if (iVar9 < 0x9a) {
        if (iVar9 == 0x76) {
LAB_4a0718dc:
          FUN_4a110ec4(param_1[8],3);
        }
        else if (iVar9 < 0x77) {
          if (iVar9 == 4) {
            iVar10 = FUN_4a0fb748(param_1[9]);
            if (iVar10 < 5) {
              iStack_30 = 0;
              FUN_4a0737a4(param_1,10,0);
              return;
            }
          }
          else if (iVar9 == 0x70) {
            FUN_4a1278e8(param_1[8],1);
          }
          else if (iVar9 == 0x74) goto LAB_4a0718dc;
        }
        else if ((iVar9 == 0x7e || iVar9 == 0x7f) || iVar9 == 0x80) {
          param_1[0x3f] = param_1[0x3f] & 0xfffffff7;
        }
      }
      else if (iVar9 == 0xa6) {
LAB_4a071940:
        FUN_4a116cf0(param_1[8],piVar1);
      }
      else if (iVar9 < 0xa7) {
        if (iVar9 != 0x9e) {
          if (iVar9 == 0xa2) {
            if (iVar3 == 0) {
              param_1[0x30] = 0;
              uVar5 = FUN_4a146a9c(param_1);
              FUN_4a111218(param_1[8],uVar5);
            }
          }
          else if (iVar9 == 0xa5) goto LAB_4a071940;
        }
      }
      else if (iVar9 == 0xa9) {
        FUN_4a0daefc(local_28,0x14);
        FUN_4a0d9d54(local_28,0,0x280000);
      }
      else if (iVar9 == 0xab) goto LAB_4a071940;
    }
    else {
      FUN_4a071490(param_1,0);
      FUN_4a071490(piVar8,0);
      iVar10 = (**(code **)(*piVar8 + 0x1c))(piVar8,iVar9,param_1);
      if (iVar10 != 0) {
        iVar10 = FUN_4a12785c(param_1[8],param_1[0x4e]);
        if (iVar10 != 0) {
          *(uint *)(iVar10 + 0xfc) = *(uint *)(iVar10 + 0xfc) & 0xffffffbf;
          *(undefined4 *)(iVar10 + 0x13c) = 0;
          *(undefined4 *)(iVar10 + 0x138) = 0xffffffff;
          *(undefined4 *)(iVar10 + 0x140) = 0;
        }
        param_1[0x3f] = param_1[0x3f] & 0xffffffbf;
        param_1[0x4f] = 0;
        param_1[0x4e] = -1;
        param_1[0x50] = 0;
      }
      if (iVar3 != 0) {
        local_2c = FUN_4a146a9c(piVar8);
        if (iVar9 == 0x61) {
          FUN_4a0daefc(local_28,0x12);
          FUN_4a0dd6e4(local_28,local_2c,0x20);
          FUN_4a0dd6e4(local_28,local_2c,0x800);
          goto LAB_4a071a18;
        }
        if (iVar9 == 0x6e) {
          FUN_4a0dd6e4(local_28,local_2c,0x100);
          goto LAB_4a071a18;
        }
      }
    }
  }
  if (iVar9 == 0xa3) {
    FUN_4a107f20(param_1,0x10);
    if (iVar2 == 0) {
      FUN_4a1071e0(param_1,0x20);
    }
    else {
      param_1[0x3c] = 0;
      param_1[0x3b] = -1;
    }
  }
LAB_4a071a18:
  if (((piVar1 != (int *)0x0) && (piVar8 == (int *)0x0 && iVar2 == 0)) &&
     ((**(code **)(*piVar1 + 0x1c))(piVar1,iVar9,param_1), iVar3 != 0)) {
    FUN_4a0dbd6c(local_28,piVar1[10]);
  }
  if (param_1[0x3b] != -1) {
    iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
    if (iVar2 != 0) {
      iStack_30 = param_1[0x3e];
      iVar2 = param_1[0x3b];
      iVar9 = param_1[0x3c];
      param_1[0x3c] = 0;
      param_1[0x3b] = -1;
      FUN_4a0737a4(param_1,iVar2,iVar9,param_1[0x3d]);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a071a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a072e84

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a072e84(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_4c [8];
  int iStack_44;
  int iStack_40;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  uVar1 = FUN_4a1460a4();
  uVar2 = FUN_4a144cb0(uVar1,*(undefined4 *)(param_1 + 0x44));
  uVar3 = FUN_4a144cb8(uVar1,*(undefined4 *)(param_1 + 0x4c));
  uVar4 = FUN_4a142f2c(uVar1,uVar2,uVar3);
  uVar2 = FUN_4a144cb0(uVar1,*(undefined4 *)(param_1 + 0x10c));
  uVar3 = FUN_4a144cb8(uVar1,*(undefined4 *)(param_1 + 0x110));
  uVar5 = FUN_4a142f2c(uVar1,uVar2,uVar3);
  if ((uVar4 & 0x20) == 0) {
    return;
  }
  if ((uVar4 & 0x10) != 0) {
    return;
  }
  if ((uVar5 & 0x10) == 0) {
    return;
  }
  iVar6 = FUN_4a1253d0(*(undefined4 *)(param_1 + 0x20),0xf,*(undefined4 *)(param_1 + 0x44),
                       *(undefined4 *)(param_1 + 0x4c));
  if (iVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a072f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  iVar7 = FUN_4a1461c0(iVar6,0x40);
  if (iVar7 != 0) {
    return;
  }
  if (*(int *)(iVar6 + 0x3c) != 1 && *(int *)(iVar6 + 0x3c) != 2) {
    FUN_4a1078e8(iVar6,2);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    return;
  }
  iVar7 = FUN_4a142ef4(*(undefined4 *)(*(int *)(iVar6 + 0x24) + 0x520));
  if (iVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a1099ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  iVar7 = FUN_4a141248(*(undefined4 *)(*(int *)(iVar6 + 0x24) + 0x51c),0,1);
  if (iVar7 == 0) {
    iVar7 = *(int *)(iVar6 + 0x20);
    iStack_30 = 0x1b;
    uStack_38 = *(undefined4 *)(iVar7 + 0x24);
    iStack_34 = iVar7;
    iStack_2c = param_1;
    iStack_28 = iVar6;
    iVar8 = FUN_4a142ef4(*(undefined4 *)(iVar7 + 0x28));
    FUN_4a110aac(auStack_4c,iVar7);
    uVar4 = FUN_4a13fb44(uStack_38,iStack_30);
    if (iStack_30 == 0x1b) {
      FUN_4a0dd6e4(uStack_38,0,1);
    }
    iVar7 = 0;
    if (0 < iStack_44) {
      do {
        if (iStack_40 == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *(int *)(iStack_40 + 8);
        }
        iVar10 = *(int *)(iVar9 + iVar7 * 4);
        iVar9 = FUN_4a146a9c(iVar10);
      } while ((((iVar9 == 0 || iVar10 == iVar6) || iVar10 == param_1) ||
               ((((uVar4 & 0x40000) != 0 && (iVar9 = FUN_4a13f8f8(uStack_38,iVar9), iVar9 != iVar8))
                || (iVar9 = FUN_4a073990(iVar10,iStack_30,param_1,iVar6),
                   iVar9 == 0 || (uVar4 & 0x800000) == 0)))) &&
              (iVar7 = iVar7 + 1, iVar7 < iStack_44));
    }
    FUN_4a169a1c(auStack_4c);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a109a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a072f58

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_4a072f58(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int extraout_r1;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_3c [8];
  int local_34;
  int local_30;
  int local_28;
  
  local_28 = *(int *)(param_1 + 0x24);
  uVar2 = FUN_4a145f8c(param_1);
  iVar10 = 0;
  if (*(int *)(param_1 + 0x138) != -1) {
    iVar10 = FUN_4a12785c(*(undefined4 *)(param_1 + 0x20));
    if ((*(int *)(param_1 + 0x138) == 0) && (iVar10 != 0)) {
      iVar3 = *(int *)(iVar10 + 0xe0);
      bVar11 = iVar3 == param_1;
      if (!bVar11) {
        iVar3 = *(int *)(iVar10 + 0xf0);
      }
      if (bVar11 || iVar3 == param_1) {
        return 1;
      }
      iVar3 = FUN_4a114384(*(undefined4 *)(param_1 + 0x20),param_1);
      if (iVar3 != 0) {
        return 1;
      }
    }
    iVar3 = FUN_4a135404(param_1,iVar10);
    if (iVar3 == 0) {
      iVar10 = 0;
    }
  }
  iVar3 = FUN_4a146a9c(param_1);
  FUN_4a1460a4(param_1);
  iVar4 = FUN_4a142ef4();
  iVar5 = FUN_4a13f8f8(uVar2,iVar3);
  if ((iVar5 != iVar4) && (iVar4 = FUN_4a141248(uVar2,iVar3,1), iVar4 == 0)) {
    cVar1 = '\0';
    if (iVar3 == 0) {
      cVar1 = *(char *)(local_28 + 0x497);
    }
    if (iVar3 != 0 || cVar1 != '\0') {
      uVar6 = *(uint *)(param_1 + 0xfc);
      if ((uVar6 & 0x400) != 0) {
        if (iVar3 == 0) {
          uVar6 = uVar6 & 0xfffffbff;
        }
        else {
          if (*(int *)(param_1 + 0xc0) < 0x7531) {
            return 1;
          }
          uVar6 = uVar6 | 0x200;
        }
        *(uint *)(param_1 + 0xfc) = uVar6;
        return 1;
      }
      iVar3 = FUN_4a1107d8(*(undefined4 *)(param_1 + 0x20));
      if (iVar3 != 0) {
        FUN_4a0737a4(param_1,0xa2,iVar3);
        *(uint *)(param_1 + 0xfc) = *(uint *)(param_1 + 0xfc) | 0x400;
        return 1;
      }
      goto LAB_4a0730c8;
    }
  }
  *(uint *)(param_1 + 0xfc) = *(uint *)(param_1 + 0xfc) & 0xfffffbff;
LAB_4a0730c8:
  iVar3 = iVar10;
  if (iVar10 == 0) {
    FUN_4a110aac(auStack_3c,*(undefined4 *)(param_1 + 0x20));
    iVar4 = local_34;
    iVar5 = FUN_4a0fe640(local_28,0,local_34 + -1);
    iVar9 = 0;
    if (0 < iVar4) {
      do {
        if (local_30 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(local_30 + 8);
        }
        iVar3 = *(int *)(iVar3 + iVar5 * 4);
        FUN_4a0015f0(iVar5 + 1,local_34);
        if ((((((iVar3 != param_1 && iVar3 != 0) &&
               (iVar5 = FUN_4a146e94(*(undefined4 *)(param_1 + 0x20)), iVar3 != iVar5)) &&
              ((iVar7 = FUN_4a146a9c(iVar3), iVar7 != 0 || (iVar5 == 0)))) &&
             ((iVar5 = *(int *)(iVar3 + 0xd4), (iVar5 != 0x80 && iVar5 != 0x7f) && iVar5 != 0x7e ||
              (*(int *)(iVar3 + 200) != 6 && *(int *)(iVar3 + 200) != 5)))) &&
            ((*(int *)(iVar3 + 0x138) == -1 ||
             (iVar5 = FUN_4a146a9c(param_1), iVar5 == *(int *)(iVar3 + 0x138))))) &&
           (iVar5 = FUN_4a1461c0(iVar3,8), iVar5 == 0)) {
          iVar5 = FUN_4a1461c0(iVar3,0x400);
          if (iVar5 == 0) break;
          uVar2 = FUN_4a146a9c(param_1);
          uVar8 = FUN_4a145f8c(param_1);
          iVar5 = FUN_4a13fc4c(uVar8,uVar2,0xc);
          if (iVar5 != -1) break;
        }
        iVar9 = iVar9 + 1;
        iVar5 = extraout_r1;
        iVar3 = iVar10;
      } while (iVar9 < iVar4);
    }
    FUN_4a169a1c(auStack_3c);
    if (iVar3 == 0) {
      return 0;
    }
  }
  iVar10 = FUN_4a0fb748(local_28);
  if (iVar10 < 0x1e) {
    uVar2 = 0x42;
  }
  else if (iVar10 < 0x46) {
    uVar2 = 0x5e;
  }
  else {
    uVar2 = 0x4e;
  }
  FUN_4a0737a4(param_1,uVar2,iVar3);
  return 1;
}



// Address: 4a073264

undefined4 FUN_4a073264(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  uVar2 = FUN_4a1460a4();
  iVar3 = FUN_4a144cb0(uVar2,*(undefined4 *)(param_1 + 0x44));
  iVar4 = FUN_4a144cb8(uVar2,*(undefined4 *)(param_1 + 0x4c));
  param_5 = param_3 - param_5;
  if (param_2 - param_4 < iVar3) {
    bVar5 = SBORROW4(iVar3,param_2);
    iVar1 = iVar3 - param_2;
    if (iVar3 <= param_2) {
      bVar5 = SBORROW4(param_5,iVar4);
      iVar1 = param_5 - iVar4;
    }
    if ((iVar1 < 0 != bVar5) && (iVar4 <= param_3)) {
      return 1;
    }
  }
  if (*(int *)(param_1 + 0xbc) == 3) {
    iVar3 = FUN_4a144cb0(uVar2,*(undefined4 *)(param_1 + 0x10c));
    iVar4 = FUN_4a144cb8(uVar2,*(undefined4 *)(param_1 + 0x110));
    if (param_2 - param_4 < iVar3) {
      bVar5 = SBORROW4(iVar3,param_2);
      iVar1 = iVar3 - param_2;
      if (iVar3 <= param_2) {
        bVar5 = SBORROW4(param_5,iVar4);
        iVar1 = param_5 - iVar4;
      }
      if ((iVar1 < 0 != bVar5) && (iVar4 <= param_3)) {
        return 1;
      }
    }
  }
  return 0;
}



// Address: 4a07331c

/* WARNING: Removing unreachable block (ram,0x4a06013c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a07331c(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(int *)(param_1 + 0xb4) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xb4) = param_2;
  uVar2 = FUN_4a146c0c(param_1);
  if (param_2 == 2 || param_2 == 3) {
    uVar3 = FUN_4a13eaec(uVar2,0x456);
    FUN_4a0b4608(uVar3,param_2 == 3);
    uVar2 = FUN_4a13eaec(uVar2,0x455);
    FUN_4a0b4608(uVar2,param_2 == 2);
  }
  uVar3 = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
  uVar2 = FUN_4a1460a4();
  iVar4 = FUN_4a0f1a04(uVar2,uVar3);
  if (*(int *)(param_1 + 0xb8) == iVar4) {
    return;
  }
  *(int *)(param_1 + 0xb8) = iVar4;
  uVar2 = FUN_4a1460a4(param_1);
  uVar2 = FUN_4a144e00(uVar2,*(undefined4 *)(param_1 + 0xb4),iVar4);
  FUN_4a109ed4(param_1,uVar2);
  uVar3 = 0;
  uVar2 = 0xffffffff;
  bVar1 = false;
  if (iVar4 == 0x41) {
    uVar2 = 0xaf;
    uVar3 = 0xf7;
    goto LAB_4a07434c;
  }
  if (iVar4 < 0x42) {
    if (iVar4 == 0x26) {
      uVar2 = 0xae;
      uVar3 = 0xdb;
      goto LAB_4a07434c;
    }
    if (iVar4 < 0x27) {
      if (iVar4 == 0x22) {
        uVar2 = 0xab;
      }
      else if (iVar4 == 0x24) {
        uVar2 = 0xae;
        uVar3 = 0xd9;
      }
      else if (iVar4 == 0x25) {
        uVar2 = 0xae;
        uVar3 = 0xda;
      }
      goto LAB_4a07434c;
    }
    if (iVar4 != 0x2d) {
      if (iVar4 == 0x39) {
        uVar2 = 0xac;
        uVar3 = 0xdd;
      }
      goto LAB_4a07434c;
    }
  }
  else if (iVar4 != 0x5a) {
    if (iVar4 < 0x5b) {
      if (iVar4 == 0x4c) {
        uVar2 = 0xae;
        uVar3 = 0xdc;
      }
      else if (iVar4 == 0x54) {
        uVar2 = 0xaa;
        uVar3 = 0xde;
      }
      goto LAB_4a07434c;
    }
    if (iVar4 != 0x5b && iVar4 != 0x5c) goto LAB_4a07434c;
  }
  bVar1 = true;
LAB_4a07434c:
  FUN_4a1078a4(param_1,uVar2);
  FUN_4a107e58(param_1,uVar3);
  if (bVar1) {
    piVar5 = (int *)FUN_4a1460b0(param_1,0);
    if (*piVar5 == 0) {
      iVar4 = FUN_4a099c5c();
      if (piVar5[1] < iVar4) {
        if (piVar5[1] < 0) {
          iVar4 = FUN_4a099c5c(*piVar5);
          piVar5[1] = iVar4 + -1;
        }
      }
      else {
        piVar5[1] = 0;
      }
    }
    else {
      *piVar5 = 0;
      if ((piVar5[3] & 8U) == 0) {
        piVar5[1] = 0;
      }
      else {
        iVar4 = FUN_4a099c5c(0);
        piVar5[1] = iVar4 + -1;
      }
      piVar5[2] = 0;
    }
    piVar5[3] = 7;
    return;
  }
  piVar5 = (int *)FUN_4a1460b0(param_1,0);
  if (*piVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a074394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  iVar4 = FUN_4a1460b0(param_1,0);
  *(uint *)(iVar4 + 0xc) = *(uint *)(iVar4 + 0xc) & 0xfffffffd;
  return;
}



// Address: 4a07378c

void FUN_4a07378c(void)

{
  FUN_4a0737a4();
  return;
}



// Address: 4a0737a4

/* WARNING: Removing unreachable block (ram,0x4a071cf8) */
/* WARNING: Removing unreachable block (ram,0x4a071d08) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0737a4(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 auStack_40 [2];
  int iStack_38;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  uVar3 = FUN_4a145f8c();
  iVar4 = FUN_4a146a9c(param_1);
  if ((iVar4 == 0) && (uVar5 = FUN_4a13fb44(uVar3,param_2), (uVar5 & 1) != 0)) {
    uVar6 = FUN_4a0941ec();
    FUN_4a0942bc(uVar6,param_2);
  }
  if (param_1[0x37] != 0) {
    FUN_4a071090(param_1,1);
  }
  iVar4 = FUN_4a107f20(param_1,0x40002);
  if (param_2 == 0x7c) {
    iVar4 = param_1[0x2d];
  }
  if ((param_2 == 0x7c && iVar4 == 0) && (iVar4 = FUN_4a0fb748(param_1[9]), iVar4 < 0x32)) {
    param_2 = 0x7d;
  }
  param_1[0x38] = param_3;
  param_1[0x39] = param_4;
  param_1[0x35] = param_2;
  param_1[0x3a] = param_5;
  if ((param_3 != 0) || (param_2 == 0x6f)) {
    FUN_4a071490(param_1,param_3);
  }
  if ((param_1[0x38] == 0) || (iVar4 = FUN_4a146b58(param_1[0x38],0x2000), iVar4 == 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = param_1[0x38];
  }
  if ((iVar4 != 0) && (uVar5 = FUN_4a13fb44(uVar3,param_2), (uVar5 & 2) != 0)) {
    iVar7 = FUN_4a146a9c(iVar4);
    param_1[0x4e] = iVar7;
    param_1[0x50] = -1;
    param_1[0x3f] = param_1[0x3f] | 0x40;
    uVar6 = FUN_4a146a9c(param_1);
    *(undefined4 *)(iVar4 + 0x138) = uVar6;
    *(undefined4 *)(iVar4 + 0x140) = 0xffffffff;
    *(uint *)(iVar4 + 0xfc) = *(uint *)(iVar4 + 0xfc) | 0x40;
  }
  iVar7 = FUN_4a13fb58(uVar3,param_2,0);
  param_1[0x36] = 0;
  iStack_28 = param_1[8];
  iStack_2c = FUN_4a145f8c(param_1);
  param_1[0x37] = iVar7;
  iVar4 = param_1[0x38];
  iVar10 = param_1[0x35];
  if ((iVar4 == 0) || (iVar2 = FUN_4a146b58(iVar4,0x2000), iVar2 == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_1[0x38];
  }
  iVar11 = param_1[0x39];
  iVar12 = param_1[0x3a];
  uVar5 = FUN_4a146a9c(param_1);
  uVar8 = 1 - uVar5;
  if (1 < uVar5) {
    uVar8 = 0;
  }
  if (uVar8 != 0 && iVar2 != 0) {
    uVar3 = FUN_4a146a9c(iVar2);
    FUN_4a0d56bc(iStack_2c,uVar3);
  }
  if (((iVar4 != 0) && (iVar2 == 0)) && (iVar7 != 1)) {
    uVar3 = FUN_4a1461c0(param_1,0x800);
    FUN_4a1071f0(iVar4,0x800,uVar3);
    uVar3 = FUN_4a1461c0(param_1,0x1000);
    FUN_4a1071f0(iVar4,0x1000,uVar3);
  }
  uVar5 = 0;
  switch(iVar7) {
  case 0:
    iVar4 = param_1[0x32];
    if (((((iVar4 == 9 || iVar4 == 0xb) || iVar4 == 0xd) || iVar4 == 0xc) || iVar4 == 0xe) ||
        iVar4 == 8) {
      param_1[0x36] = param_1[0x36] + -1;
      FUN_4a071e74(param_1,0x1f);
    }
    else if (iVar4 == 4) {
      param_1[0x36] = param_1[0x36] + -1;
      FUN_4a071e74(param_1,0x22);
    }
    else {
      FUN_4a074bac(param_1,1);
    }
    break;
  case 1:
    FUN_4a076e50(param_1,iVar4,iVar11);
    break;
  case 2:
  case 3:
    if (iVar4 == 0) {
      FUN_4a106248(param_1,iVar11 - param_1[0x11],iVar12 - param_1[0x13]);
    }
    else {
      FUN_4a1077b8(param_1,iVar4);
    }
    if (iVar7 == 3) {
LAB_4a0720fc:
      FUN_4a106238(param_1,param_1[0x14] + 2U & 3);
    }
    goto LAB_4a072bd8;
  case 4:
  case 5:
    FUN_4a106238(param_1,*(undefined4 *)(iVar4 + 0x50));
    if (iVar7 == 5) goto LAB_4a0720fc;
    goto LAB_4a072bd8;
  case 6:
  case 7:
  case 8:
    FUN_4a075388(param_1,iVar10,iVar7);
    goto LAB_4a072d2c;
  case 9:
    FUN_4a074bac(param_1,5);
    break;
  case 10:
    FUN_4a074bac(param_1,6);
    break;
  case 0xb:
    iVar4 = 0;
    if (param_1[0x38] != 0) {
      iVar7 = FUN_4a146b58(param_1[0x38],0x2000);
      iVar4 = 0;
      if (iVar7 != 0) {
        iVar4 = param_1[0x38];
      }
    }
    FUN_4a076d54(iVar4);
    FUN_4a071478(param_1);
    break;
  case 0xc:
    FUN_4a074bac(param_1,7);
    break;
  case 0xd:
    switchD_4a11cc8c::default(uVar8,s_NPC_cooking__4a072608);
    iVar7 = FUN_4a0d5b78(iStack_2c,iVar11);
    if (iVar7 == 0) {
LAB_4a072c98:
      FUN_4a071ac4(param_1,0);
    }
    else {
      FUN_4a110228(iStack_28,0,iVar4);
      iVar7 = FUN_4a1460d4(iVar4);
      switchD_4a11cc8c::default(iVar7 == 0x1b,s_cooking_at_non_stove__4a072618);
      FUN_4a105774(iVar4);
      param_1[0x51] = 0x36;
      *(undefined1 *)(param_1 + 0x52) = 1;
      param_1[0x54] = -1;
      param_1[0x53] = 1000;
      *(undefined1 *)(param_1 + 0x55) = 0;
      *(undefined1 *)((int)param_1 + 0x149) = 0;
      FUN_4a074bac(param_1,4);
    }
    break;
  case 0xe:
    switchD_4a11cc8c::default(uVar8,s_NPC_fishing__4a072630);
    iVar7 = FUN_4a13fa98(iStack_2c);
    if (iVar7 == 0) goto LAB_4a072c98;
    iVar7 = *(int *)(iVar4 + 0x28);
    if (iVar7 == 8) {
      FUN_4a106238(param_1,0);
    }
    else if (iVar7 == 9) {
      FUN_4a106238(param_1,1);
    }
    else if (iVar7 == 7) {
      FUN_4a106238(param_1,2);
    }
    else if (iVar7 == 6) {
      FUN_4a106238(param_1,3);
    }
    FUN_4a110228(iStack_28,1,iVar4);
    param_1[0x51] = 0x3e;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x54] = -1;
    param_1[0x53] = 1000;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    break;
  case 0xf:
    switchD_4a11cc8c::default(uVar8,s_NPC_repairing__4a072640);
    iVar7 = FUN_4a13fca8(iStack_2c);
    if (iVar7 == 0) goto LAB_4a072c98;
    FUN_4a110228(iStack_28,2,iVar4);
    param_1[0x51] = 0x36;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x53] = 1000;
    param_1[0x54] = -1;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    break;
  case 0x11:
    iVar7 = 5000;
    if (uVar8 != 0) {
      uVar3 = 0x70000;
      if (iVar10 == 0x84) {
        uVar3 = FUN_4a1460a4(param_1);
        uVar3 = FUN_4a144980(uVar3,iVar11);
      }
      FUN_4a0d8c28(iStack_2c,0,uVar3);
    }
    iVar4 = FUN_4a1460d4(iVar4);
    if (iVar4 == 0x11) {
      iVar7 = 0xdac;
    }
    iVar4 = 0x36;
    if (param_1[0x32] == 1) {
      iVar4 = 0x22;
    }
    param_1[0x51] = iVar4;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x54] = -1;
    param_1[0x53] = iVar7;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    uVar5 = 1;
    FUN_4a109e5c(param_1,0x46);
    break;
  case 0x12:
    iVar7 = FUN_4a1460d4(iVar4);
    if (iVar7 == 0x19) {
      if (uVar8 != 0) {
        FUN_4a0d8c28(iStack_2c,3,0xa0000);
      }
      FUN_4a105cf4(iVar4);
      param_1[0x51] = 0x61;
      *(undefined1 *)(param_1 + 0x52) = 1;
      param_1[0x53] = 5000;
      param_1[0x54] = -1;
      *(undefined1 *)(param_1 + 0x55) = 0;
      *(undefined1 *)((int)param_1 + 0x149) = 0;
      FUN_4a074bac(param_1,4);
    }
    else {
      if (iVar7 != 5) {
        if (iVar7 == 4) {
          if ((uVar8 != 0) && (iVar7 = FUN_4a1461c0(param_1,0x400), iVar7 == 0)) {
            FUN_4a0d8c28(iStack_2c,3,0x70000);
          }
          FUN_4a105328(iVar4);
          param_1[0x51] = 99;
          *(undefined1 *)(param_1 + 0x52) = 1;
          param_1[0x54] = -1;
          param_1[0x53] = 0x960;
          *(undefined1 *)(param_1 + 0x55) = 0;
          *(undefined1 *)((int)param_1 + 0x149) = 0;
          FUN_4a074bac(param_1,4);
        }
        else {
          switchD_4a11cc8c::default(0,s_what_are_we_washing_at___4a0729ac);
        }
        break;
      }
      FUN_4a1053a4(iVar4);
      if (uVar8 != 0) {
        uVar3 = FUN_4a145f8c(param_1);
        FUN_4a0d8c28(uVar3,3,0xa0000);
      }
      param_1[0x51] = 0x46;
      *(undefined1 *)(param_1 + 0x52) = 1;
      param_1[0x53] = 8000;
      param_1[0x54] = -1;
      *(undefined1 *)(param_1 + 0x55) = 0;
      *(undefined1 *)((int)param_1 + 0x149) = 0;
      FUN_4a074bac(param_1,4);
    }
    goto LAB_4a072d2c;
  case 0x13:
    if (uVar8 != 0) {
      FUN_4a0d8c28(iStack_2c,2,0x320000);
    }
    if (iVar10 == 0x7c) {
      iVar4 = 0x5b;
    }
    else {
      iVar4 = 0x2d;
    }
    param_1[0x51] = iVar4;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x53] = 2000;
    param_1[0x54] = -1;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    break;
  case 0x14:
  case 0x15:
    uVar3 = FUN_4a145f8c(param_1);
    iVar4 = FUN_4a13fb90();
    iVar2 = param_1[0x35];
    uVar6 = FUN_4a146a9c(param_1);
    iVar2 = FUN_4a0d6f44(uVar3,uVar6,iVar2 == 0x7f);
    if ((iVar7 == 0x14) && (iVar4 + 0x78 <= iVar2)) {
      iVar2 = iVar4 + 0x78;
    }
    iVar7 = FUN_4a146a9c(param_1);
    if (iVar7 == 0) {
      FUN_4a0d7614(uVar3,1);
      FUN_4a0d8c28(uVar3,1,0x10000);
    }
    iVar4 = (iVar2 - iVar4) + iVar4;
    if ((param_1[0x34] == 0) || (iVar7 = FUN_4a1460d4(), iVar7 != 0xd)) {
      iVar7 = FUN_4a1461c0(param_1,0x80000);
      if (iVar7 == 0) {
        iVar7 = 0x1a;
      }
      else {
        iVar7 = 0x19;
      }
    }
    else {
      iVar7 = 0x51;
    }
    param_1[0x51] = iVar7;
    *(char *)(param_1 + 0x52) = (char)(iVar4 >> 0x1f) + '\x01';
    param_1[0x54] = -1;
    param_1[0x53] = iVar4;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 1;
    FUN_4a074bac(param_1,4);
    uVar5 = 1;
    break;
  case 0x16:
    FUN_4a10913c(iVar4);
    FUN_4a071478(param_1);
    goto LAB_4a072d2c;
  case 0x17:
    FUN_4a109944(iVar4);
    FUN_4a071478(param_1);
    goto LAB_4a072d2c;
  case 0x18:
    if (param_1[0x35] == 0x89) {
      FUN_4a107e90(iVar4);
    }
    else if (param_1[0x35] == 0x88) {
      FUN_4a107ed8(iVar4);
    }
    iVar7 = FUN_4a114098(iStack_28,param_1,iVar4);
    if (iVar7 == 0) {
      auStack_40[0] = 0;
      FUN_4a0737a4(param_1,0x6f,iVar4);
    }
    else {
      uVar3 = 0x9b;
      iVar4 = FUN_4a1460d4(iVar7);
      if (iVar4 == 10) {
        uVar3 = 0x9c;
      }
      auStack_40[0] = 0;
      FUN_4a0737a4(param_1,uVar3,iVar7);
    }
    goto LAB_4a072d2c;
  case 0x19:
    iVar4 = FUN_4a110878(iStack_28,param_1,iVar10);
    if (iVar4 == 0) goto LAB_4a072c98;
    param_1[0x38] = iVar4;
    FUN_4a071478(param_1);
    break;
  case 0x1a:
    if (uVar8 != 0) {
      FUN_4a0d8c28(iStack_2c,5,0x30000);
    }
    param_1[0x51] = 0x25;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x53] = 10000;
    param_1[0x54] = -1;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    break;
  case 0x1b:
    if (uVar8 == 0) {
      FUN_4a110aac(auStack_40,iStack_28);
      iVar4 = 0;
      if ((iStack_38 == 2) && (iVar7 = FUN_4a0e3c18(iStack_2c), iVar7 == 0)) {
        iVar7 = FUN_4a146a9c(param_1);
        if (*(int *)(iStack_2c + 0x420) != 0) {
          iVar4 = *(int *)(*(int *)(iStack_2c + 0x420) + 8);
        }
        FUN_4a10ce2c(iStack_28,0xb3f,(int)*(short *)(iVar4 + iVar7 * 2));
      }
      FUN_4a074bac(param_1,9);
      FUN_4a169a1c(auStack_40);
    }
    else {
      FUN_4a074bac(param_1,8);
      FUN_4a113750(iStack_28);
    }
    break;
  case 0x1c:
    FUN_4a116b10(iStack_28,iVar10,iVar11);
    FUN_4a071478(param_1);
    break;
  case 0x1d:
    switchD_4a11cc8c::default(uVar8,s_NPC_looking_for_work__4a0729c8);
    uVar3 = FUN_4a1419b4(iStack_2c,iVar4);
    uVar6 = FUN_4a140354(iStack_2c,uVar3);
    FUN_4a10fe80(iStack_28,uVar3,uVar6);
    FUN_4a071478(param_1);
    break;
  case 0x1e:
    FUN_4a10ce2c(iStack_28,0xb3e);
    FUN_4a071478(param_1);
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
    if (param_1[0x38] == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = FUN_4a1460d4();
    }
    if (iVar7 == 0x20) {
      switchD_4a11cc8c::default(param_1[0x38] != 0,PTR_s_can_t_auto_sit_without_a_chair_4a0729e0);
      if (iVar4 == 0xd) {
        FUN_4a106238(param_1,param_1[0x14] + 2U & 3);
      }
      else if (iVar4 == 6) {
LAB_4a072994:
        iVar4 = 3;
        goto LAB_4a072a5c;
      }
LAB_4a0729a4:
      iVar4 = 1;
    }
    else if (iVar7 == 0x1f) {
      iVar4 = 0;
    }
    else {
      if (iVar7 == 0x21) goto LAB_4a072994;
      if (iVar7 == 0x22) goto LAB_4a0729a4;
      if (iVar7 == 0x23) {
        iVar4 = 2;
      }
      else if (iVar7 == 0x24) {
        iVar4 = 4;
      }
      else if (iVar7 == 0x27) {
        iVar4 = 8;
      }
      else if (iVar7 == 0x25) {
        if (iVar4 == 0xd) {
          iVar4 = 5;
        }
        else {
          iVar4 = 6;
        }
      }
      else if (iVar7 == 0x26) {
        iVar4 = 7;
      }
      else if (iVar7 == 0x28) {
        iVar4 = 9;
      }
      else if (iVar7 == 0x2a) {
        iVar4 = 0xb;
      }
      else if (iVar7 == 0x2b) {
        iVar4 = 0xd;
      }
      else if (iVar7 == 0x2c) {
        iVar4 = 0xe;
      }
      else {
        iVar4 = 10;
      }
    }
LAB_4a072a5c:
    if (param_1[0x32] == iVar4) goto LAB_4a072bd8;
    param_1[0x33] = iVar4;
    FUN_4a074bac(param_1,2);
    break;
  case 0x2d:
    if (uVar8 == 0) goto LAB_4a072bd8;
    iVar4 = FUN_4a146d54(param_1[8]);
    if (iVar4 != 0) {
      FUN_4a1460a4(param_1);
      iVar4 = FUN_4a142ef4();
      if ((iVar4 != 0) && (param_1[0x35] == 0x83)) goto LAB_4a072bd8;
    }
    uVar3 = FUN_4a145f8c(param_1);
    iVar4 = FUN_4a13fd20(uVar3,param_1[0x35]);
    iVar7 = FUN_4a141aa4(uVar3);
    if (iVar7 < iVar4) goto LAB_4a072c98;
    FUN_4a0d585c(uVar3);
    FUN_4a117598(param_1[8],param_1[0x11],param_1[0x13]);
    FUN_4a071478(param_1);
    break;
  case 0x2e:
    if (uVar8 == 0) goto LAB_4a072bd8;
    uVar3 = FUN_4a145f8c(param_1);
    FUN_4a110aac(auStack_40,param_1[8]);
    if (((iStack_38 < 2) && (iVar4 = FUN_4a13fa14(uVar3,0), iVar4 != 4)) &&
       (iVar4 = FUN_4a0e3c18(uVar3), iVar4 == 0)) {
      FUN_4a071ac4(param_1,0);
    }
    else {
      FUN_4a071478(param_1);
    }
    FUN_4a169a1c(auStack_40);
    break;
  case 0x2f:
    if (uVar8 != 0) {
      uVar3 = FUN_4a145f8c(param_1);
      iVar4 = FUN_4a13feec(uVar3,0xc);
      if ((iVar4 != -1) || (iVar4 = FUN_4a13feec(uVar3,0xb), iVar4 != -1)) goto LAB_4a072c98;
    }
LAB_4a072bd8:
    FUN_4a071478(param_1);
    break;
  case 0x30:
    FUN_4a127ce8(iStack_28,iVar4);
    FUN_4a071478(param_1);
    break;
  case 0x31:
    uVar3 = FUN_4a145f8c(param_1);
    iVar7 = param_1[0x39];
    iVar4 = FUN_4a140338(uVar3,iVar7);
    if (iVar4 < 1) goto LAB_4a072c98;
    switchD_4a0de288::default(uVar3,iVar7,0xffffffff);
    FUN_4a109d38(param_1[0x38],iVar7);
    FUN_4a071478(param_1);
    break;
  case 0x32:
    uVar3 = FUN_4a145f8c(param_1);
    iVar4 = FUN_4a140338(uVar3,2);
    if ((iVar4 < 1) || (iVar4 = FUN_4a140338(uVar3,3), iVar4 < 1)) goto LAB_4a072c98;
    switchD_4a0de288::default(uVar3,3,0xffffffff);
    FUN_4a109bbc(param_1[0x38]);
    FUN_4a071478(param_1);
    break;
  case 0x33:
    FUN_4a105ef8(iVar4);
    FUN_4a071478(param_1);
    break;
  case 0x34:
    FUN_4a105c84(iVar4);
    FUN_4a071478(param_1);
    break;
  case 0x35:
    iVar7 = FUN_4a1460d4(iVar4);
    switchD_4a11cc8c::default(iVar7 == 0xb,s_drinking_at_non_coffee_machine_4a072e64);
    FUN_4a108a94(iVar4);
    param_1[0x51] = 1;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x54] = -1;
    param_1[0x53] = 60000;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
LAB_4a072d2c:
    uVar5 = 1;
    break;
  case 0x36:
    if (uVar8 != 0) {
      FUN_4a0d8c28(iStack_2c,2,0xfffb0000);
      FUN_4a0d8c28(iStack_2c,1,0xa0000);
    }
    param_1[0x51] = 0x54;
    *(undefined1 *)(param_1 + 0x52) = 0;
    param_1[0x53] = -1;
    param_1[0x54] = -1;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    break;
  case 0x37:
    if (uVar8 != 0) {
      FUN_4a0d8c28(iStack_2c,5,0x60000);
    }
    FUN_4a10913c(param_1[0x38]);
    param_1[0x51] = 0x59;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x53] = 15000;
    param_1[0x54] = -1;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
  }
  FUN_4a1460a4(param_1);
  iVar4 = FUN_4a142ef4();
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  if (((uVar8 & uVar5) != 0) && (uVar5 = FUN_4a13fb44(iStack_2c,iVar10), (uVar5 & 0x200000) != 0)) {
    FUN_4a11186c(iStack_28,0x1a,param_1);
  }
  iVar4 = FUN_4a1461c0(param_1,2);
  if (iVar4 == 0) {
    return;
  }
  FUN_4a1071e0(param_1,4);
  iVar7 = -1;
  iVar4 = -1;
  switch(param_1[0x37]) {
  case 1:
    iVar10 = FUN_4a146a9c(param_1);
    if (iVar10 != 0) {
      iVar4 = 0x936;
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
    FUN_4a071090(param_1,1);
    FUN_4a07171c(param_1);
    break;
  case 0xd:
    iVar4 = 0xb4b;
    uVar3 = FUN_4a1460a4(param_1);
    FUN_4a143170(uVar3,param_1[0x39]);
    break;
  case 0xe:
    iVar4 = 0x974;
    break;
  case 0xf:
    iVar4 = 0x93b;
    break;
  case 0x10:
    iVar4 = 0x939;
    break;
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x37:
    FUN_4a071478(param_1);
    break;
  case 0x19:
    if (param_1[0x35] == 0x9d) {
      iVar4 = 0x95e;
    }
    else {
      iVar4 = 0x94e;
    }
    break;
  case 0x2d:
    iVar4 = 0x94c;
    break;
  case 0x2e:
    iVar4 = 0x966;
    break;
  case 0x2f:
    iVar4 = 0x931;
    iVar7 = 8;
    iVar10 = FUN_4a0fb748(param_1[9]);
    if (iVar10 < 0x32) {
      iVar7 = 0x11;
    }
    break;
  case 0x31:
    iVar4 = 0x93d;
    break;
  case 0x32:
    iVar4 = 0x940;
  }
  iVar10 = FUN_4a146a9c(param_1);
  if ((iVar10 == 0) && (*(int *)(param_1[8] + 0x5fc) != 0)) {
    FUN_4a108d64();
  }
  if (iVar4 == -1) {
    return;
  }
  if (iVar7 != -1) {
    FUN_4a0737a4(param_1,iVar7,0);
    return;
  }
  iVar4 = FUN_4a1461c0(param_1,4);
  iStack_28 = FUN_4a145f8c(param_1);
  FUN_4a107f20(param_1,0xc);
  piVar1 = (int *)param_1[0x38];
  iVar7 = param_1[0x35];
  if ((piVar1 == (int *)0x0) || (iVar10 = FUN_4a146b58(piVar1,0x2000), iVar10 == 0)) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = (int *)param_1[0x38];
  }
  uVar5 = FUN_4a146a9c(param_1);
  iVar10 = 1 - uVar5;
  if (1 < uVar5) {
    iVar10 = 0;
  }
  iStack_30 = 0;
  FUN_4a0737a4(param_1,0,0);
  uVar5 = FUN_4a13fb44(iStack_28,iVar7);
  if (iVar4 == 0) {
    if (piVar9 == (int *)0x0 || (uVar5 & 2) == 0) {
      if (iVar7 == 0x99) {
        FUN_4a10e9c8(param_1[8]);
      }
      else if (iVar7 < 0x9a) {
        if (iVar7 == 0x76) {
LAB_4a0718dc:
          FUN_4a110ec4(param_1[8],3);
        }
        else if (iVar7 < 0x77) {
          if (iVar7 == 4) {
            iVar2 = FUN_4a0fb748(param_1[9]);
            if (iVar2 < 5) {
              iStack_30 = 0;
              FUN_4a0737a4(param_1,10,0);
              return;
            }
          }
          else if (iVar7 == 0x70) {
            FUN_4a1278e8(param_1[8],1);
          }
          else if (iVar7 == 0x74) goto LAB_4a0718dc;
        }
        else if ((iVar7 == 0x7e || iVar7 == 0x7f) || iVar7 == 0x80) {
          param_1[0x3f] = param_1[0x3f] & 0xfffffff7;
        }
      }
      else if (iVar7 == 0xa6) {
LAB_4a071940:
        FUN_4a116cf0(param_1[8],piVar1);
      }
      else if (iVar7 < 0xa7) {
        if (iVar7 != 0x9e) {
          if (iVar7 == 0xa2) {
            if (iVar10 == 0) {
              param_1[0x30] = 0;
              uVar3 = FUN_4a146a9c(param_1);
              FUN_4a111218(param_1[8],uVar3);
            }
          }
          else if (iVar7 == 0xa5) goto LAB_4a071940;
        }
      }
      else if (iVar7 == 0xa9) {
        FUN_4a0daefc(iStack_28,0x14);
        FUN_4a0d9d54(iStack_28,0,0x280000);
      }
      else if (iVar7 == 0xab) goto LAB_4a071940;
    }
    else {
      FUN_4a071490(param_1,0);
      FUN_4a071490(piVar9,0);
      iVar2 = (**(code **)(*piVar9 + 0x1c))(piVar9,iVar7,param_1);
      if (iVar2 != 0) {
        iVar2 = FUN_4a12785c(param_1[8],param_1[0x4e]);
        if (iVar2 != 0) {
          *(uint *)(iVar2 + 0xfc) = *(uint *)(iVar2 + 0xfc) & 0xffffffbf;
          *(undefined4 *)(iVar2 + 0x13c) = 0;
          *(undefined4 *)(iVar2 + 0x138) = 0xffffffff;
          *(undefined4 *)(iVar2 + 0x140) = 0;
        }
        param_1[0x3f] = param_1[0x3f] & 0xffffffbf;
        param_1[0x4f] = 0;
        param_1[0x4e] = -1;
        param_1[0x50] = 0;
      }
      if (iVar10 != 0) {
        iStack_2c = FUN_4a146a9c(piVar9);
        if (iVar7 == 0x61) {
          FUN_4a0daefc(iStack_28,0x12);
          FUN_4a0dd6e4(iStack_28,iStack_2c,0x20);
          FUN_4a0dd6e4(iStack_28,iStack_2c,0x800);
          goto LAB_4a071a18;
        }
        if (iVar7 == 0x6e) {
          FUN_4a0dd6e4(iStack_28,iStack_2c,0x100);
          goto LAB_4a071a18;
        }
      }
    }
  }
  if (iVar7 == 0xa3) {
    FUN_4a107f20(param_1,0x10);
    if (iVar4 == 0) {
      FUN_4a1071e0(param_1,0x20);
    }
    else {
      param_1[0x3c] = 0;
      param_1[0x3b] = -1;
    }
  }
LAB_4a071a18:
  if (((piVar1 != (int *)0x0) && (piVar9 == (int *)0x0 && iVar4 == 0)) &&
     ((**(code **)(*piVar1 + 0x1c))(piVar1,iVar7,param_1), iVar10 != 0)) {
    FUN_4a0dbd6c(iStack_28,piVar1[10]);
  }
  if (param_1[0x3b] != -1) {
    iVar4 = (**(code **)(*param_1 + 0x10))(param_1);
    if (iVar4 != 0) {
      iStack_30 = param_1[0x3e];
      iVar4 = param_1[0x3b];
      iVar7 = param_1[0x3c];
      param_1[0x3c] = 0;
      param_1[0x3b] = -1;
      FUN_4a0737a4(param_1,iVar4,iVar7,param_1[0x3d]);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a071a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a073908

void FUN_4a073908(int param_1)

{
  *(undefined4 *)(param_1 + 0xfc) = 0;
  return;
}



// Address: 4a073914

void FUN_4a073914(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1);
  if ((iVar1 == 0) && (iVar1 = param_1[0x37], (iVar1 != 9 && iVar1 != 10) && iVar1 != 1)) {
    param_1[0x3b] = param_2;
    param_1[0x3c] = param_3;
    param_1[0x3d] = param_4;
    param_1[0x3e] = param_5;
    return;
  }
  FUN_4a0737a4(param_1,param_2,param_3,param_4,param_5);
  return;
}



// Address: 4a073990

undefined4 FUN_4a073990(int *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  undefined1 auStack_4c [12];
  int local_40;
  undefined1 auStack_38 [20];
  
  iVar2 = FUN_4a145f8c();
  iVar3 = param_1[0x35];
  if (((iVar3 == 0x80 || iVar3 == 0x7f) || iVar3 == 0x7e) &&
     (param_1[0x32] == 6 || param_1[0x32] == 5)) {
    if (param_2 != 0x1b) {
      return 0;
    }
  }
  else if (param_2 == 0x1d) {
    uVar4 = FUN_4a146b58(param_4,0x2000);
    switchD_4a11cc8c::default(uVar4,s_wtf__romancing_a_non_sim__4a073b9c);
    iVar3 = FUN_4a146a9c(param_1);
    if (*(int *)(iVar2 + 0x498) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(*(int *)(iVar2 + 0x498) + 8);
    }
    cVar1 = *(char *)(iVar7 + iVar3);
    iVar3 = FUN_4a146a9c(param_4);
    if (iVar3 != cVar1) {
      return 0;
    }
  }
  FUN_4a16bdcc(auStack_4c,PTR_DAT_4a073bb8);
  uVar4 = FUN_4a146a9c(param_1);
  uVar5 = FUN_4a146a9c(param_3);
  uVar6 = FUN_4a16bdcc(auStack_38,auStack_4c);
  FUN_4a0db3b0(iVar2,uVar6,uVar5,uVar4,param_2);
  FUN_4a16bef4(auStack_38);
  if (local_40 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_40 + 8);
  }
  iVar3 = *(int *)(iVar3 + 4);
  if (iVar3 == -1) {
    FUN_4a16bef4(auStack_4c);
    return 0;
  }
  if ((iVar3 == 0x18) && (iVar7 = FUN_4a146d54(param_1[8]), iVar7 == 0)) {
    iVar3 = 0x17;
  }
  if (local_40 == 0) {
    puVar8 = (uint *)0x0;
  }
  else {
    puVar8 = *(uint **)(local_40 + 8);
  }
  if ((*puVar8 & 0x10000) == 0) {
    param_4 = param_3;
  }
  FUN_4a076d54(param_1);
  iVar7 = (**(code **)(*param_1 + 0x10))(param_1);
  if ((iVar7 == 0) && (iVar7 = param_1[0x37], (iVar7 != 9 && iVar7 != 10) && iVar7 != 1)) {
    param_1[0x3b] = iVar3;
    param_1[0x3c] = param_4;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
  }
  else {
    FUN_4a0737a4(param_1,iVar3,param_4,0,0);
  }
  if ((param_2 == 0x1d) && (iVar3 = FUN_4a146a9c(param_3), iVar3 == 0)) {
    FUN_4a0daefc(iVar2,0x32);
  }
  FUN_4a1071e0(param_1,8);
  FUN_4a16bef4(auStack_4c);
  return 1;
}



// Address: 4a073bbc

uint FUN_4a073bbc(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_50 [12];
  int local_44;
  undefined4 local_3c;
  undefined1 auStack_38 [20];
  
  local_3c = FUN_4a145f8c();
  iVar1 = FUN_4a146a9c(param_3);
  uVar2 = FUN_4a146a9c(param_1);
  FUN_4a16bdcc(auStack_50,PTR_DAT_4a073d74);
  iVar8 = 0;
  uVar3 = FUN_4a16bdcc(auStack_38,auStack_50);
  FUN_4a0db3b0(local_3c,uVar3,iVar1,uVar2,param_2);
  FUN_4a16bef4(auStack_38);
  bVar9 = local_44 == 0;
  if (bVar9) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4 = *(uint **)(local_44 + 8);
  }
  uVar7 = *puVar4;
  if (bVar9) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(local_44 + 8);
  }
  iVar5 = *(int *)(iVar5 + 4);
  if (!bVar9) {
    iVar8 = *(int *)(local_44 + 8);
  }
  iVar8 = *(int *)(iVar8 + 8);
  if ((uVar7 & 0x40) != 0) {
    FUN_4a11186c(*(undefined4 *)(param_1 + 0x20),0x1d,param_3,param_1);
  }
  if (param_2 == 0x6c || param_2 == 0x67) {
    FUN_4a0737a4(param_1,0,0,0,0);
    *(uint *)(param_1 + 0xfc) = *(uint *)(param_1 + 0xfc) | 0x200;
  }
  else if (iVar5 != -1) {
    uVar6 = FUN_4a13fb44(local_3c,iVar5);
    if (((uVar6 & 2) == 0) && (iVar5 != 0x6f)) {
      param_3 = 0;
    }
    if (iVar1 == 0) {
      if (iVar5 == 0x10) {
        FUN_4a0daefc(local_3c,0xe);
        FUN_4a0dd6e4(local_3c,uVar2,0x2000);
      }
      else if (iVar5 == 0x56) {
        FUN_4a0dd6e4(local_3c,uVar2,0x10000);
      }
    }
    FUN_4a0737a4(param_1,iVar5,param_3,uVar7,0);
    if (iVar8 != -1) {
      FUN_4a116abc(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x44),0x460000,
                   *(undefined4 *)(param_1 + 0x4c),iVar8);
    }
  }
  FUN_4a16bef4(auStack_50);
  return (uVar7 & 0x20) >> 5;
}



// Address: 4a073f44

undefined4 FUN_4a073f44(int param_1)

{
  return *(undefined4 *)(param_1 + 0xd0);
}



// Address: 4a073f4c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a073f4c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar2 = FUN_4a0ff494();
  uVar3 = FUN_4a146a9c(param_1);
  uVar4 = FUN_4a145f8c(param_1);
  uVar5 = FUN_4a141abc(uVar4,uVar3);
  iVar6 = FUN_4a145f8c(param_1);
  iVar7 = FUN_4a146a9c(param_1);
  iVar9 = -1;
  iVar8 = 0;
  if (*(int *)(iVar6 + 0x448) != 0) {
    iVar8 = *(int *)(*(int *)(iVar6 + 0x448) + 8);
  }
  cVar1 = *(char *)(iVar8 + iVar7);
  if (param_2 == 0x4f) {
switchD_4a07406c_caseD_43:
    iVar9 = 2;
    goto LAB_4a0741e0;
  }
  if (param_2 < 0x50) {
    if (param_2 != 0x42) {
      if (0x42 < param_2) {
        switch(param_2) {
        case 0x43:
          goto switchD_4a07406c_caseD_43;
        default:
          goto switchD_4a07406c_caseD_44;
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
          goto switchD_4a07406c_caseD_45;
        case 0x4a:
        case 0x4b:
        case 0x4c:
        case 0x4d:
          goto switchD_4a07406c_caseD_4a;
        case 0x4e:
          iVar9 = 4;
          goto LAB_4a0741e0;
        }
      }
      if (param_2 != 0x1e) {
        if (param_2 < 0x1f) {
          if (param_2 != 0x16) {
            if (0x16 < param_2) {
              if (param_2 != 0x17) {
                if (param_2 != 0x18) {
                  return;
                }
                goto switchD_4a0740b8_caseD_60;
              }
              goto switchD_4a0740b8_caseD_5e;
            }
            if (param_2 == 0xd) {
              iVar8 = FUN_4a0fe640(iVar2,0,99);
              if (0x3b < iVar8) {
                iVar9 = FUN_4a0fe640(iVar2,0,6);
                goto switchD_4a07406c_caseD_44;
              }
              goto switchD_4a07406c_caseD_45;
            }
            if (param_2 != 0x10) {
              return;
            }
          }
          iVar9 = 5;
        }
        else {
          if (param_2 != 0x3f) {
            if (0x3f < param_2) {
              if (param_2 != 0x40 && param_2 != 0x41) {
                return;
              }
              goto switchD_4a07406c_caseD_45;
            }
            if (param_2 == 0x1f) goto switchD_4a07406c_caseD_4a;
            if (param_2 != 0x3e) {
              return;
            }
          }
switchD_4a0740b8_caseD_5e:
          iVar9 = 0;
        }
        goto LAB_4a0741e0;
      }
switchD_4a07406c_caseD_4a:
      iVar9 = 3;
      goto LAB_4a0741e0;
    }
  }
  else if (param_2 != 99) {
    if (param_2 < 100) {
      switch(param_2) {
      case 0x50:
      case 0x56:
      case 0x59:
      case 0x5c:
        goto switchD_4a07406c_caseD_4a;
      default:
switchD_4a07406c_caseD_44:
        if (iVar9 == -1) {
          return;
        }
        goto LAB_4a0741e0;
      case 0x53:
      case 0x54:
      case 0x5b:
      case 0x5d:
        goto switchD_4a07406c_caseD_43;
      case 0x5e:
      case 0x5f:
        goto switchD_4a0740b8_caseD_5e;
      case 0x60:
switchD_4a0740b8_caseD_60:
        iVar9 = 6;
        goto LAB_4a0741e0;
      }
    }
    if (param_2 != 0x6a) {
      if (param_2 < 0x6b) {
        switch(param_2) {
        case 100:
        case 0x65:
          goto switchD_4a0740b8_caseD_60;
        case 0x66:
          goto switchD_4a07406c_caseD_43;
        case 0x67:
          goto switchD_4a0740b8_caseD_5e;
        case 0x68:
          goto switchD_4a07406c_caseD_45;
        default:
          goto switchD_4a07406c_caseD_44;
        }
      }
      if (param_2 == 0x71) goto switchD_4a07406c_caseD_4a;
      if (param_2 < 0x72) {
        if (param_2 == 0x6b) goto switchD_4a0740b8_caseD_5e;
        if (param_2 != 0x6c) {
          return;
        }
      }
      else if (param_2 != 0x93 && param_2 != 0x94) {
        return;
      }
    }
  }
switchD_4a07406c_caseD_45:
  iVar9 = 1;
LAB_4a0741e0:
  uVar3 = FUN_4a0fba7c(iVar2);
  iVar8 = FUN_4a10cc8c(uVar3,iVar9,(int)cVar1 % 2,uVar5 ^ 1);
  if (iVar8 != -1) {
    FUN_4a0851b4(*(undefined4 *)(iVar2 + 0x260),iVar8,param_3,param_4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a074214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a074248

/* WARNING: Removing unreachable block (ram,0x4a06013c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a074248(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = FUN_4a1460a4();
  iVar3 = FUN_4a0f1a04(uVar2,param_2);
  if (*(int *)(param_1 + 0xb8) == iVar3) {
    return;
  }
  *(int *)(param_1 + 0xb8) = iVar3;
  uVar2 = FUN_4a1460a4(param_1);
  uVar2 = FUN_4a144e00(uVar2,*(undefined4 *)(param_1 + 0xb4),iVar3);
  FUN_4a109ed4(param_1,uVar2);
  uVar5 = 0;
  uVar2 = 0xffffffff;
  bVar1 = false;
  if (iVar3 == 0x41) {
    uVar2 = 0xaf;
    uVar5 = 0xf7;
    goto LAB_4a07434c;
  }
  if (iVar3 < 0x42) {
    if (iVar3 == 0x26) {
      uVar2 = 0xae;
      uVar5 = 0xdb;
      goto LAB_4a07434c;
    }
    if (iVar3 < 0x27) {
      if (iVar3 == 0x22) {
        uVar2 = 0xab;
      }
      else if (iVar3 == 0x24) {
        uVar2 = 0xae;
        uVar5 = 0xd9;
      }
      else if (iVar3 == 0x25) {
        uVar2 = 0xae;
        uVar5 = 0xda;
      }
      goto LAB_4a07434c;
    }
    if (iVar3 != 0x2d) {
      if (iVar3 == 0x39) {
        uVar2 = 0xac;
        uVar5 = 0xdd;
      }
      goto LAB_4a07434c;
    }
  }
  else if (iVar3 != 0x5a) {
    if (iVar3 < 0x5b) {
      if (iVar3 == 0x4c) {
        uVar2 = 0xae;
        uVar5 = 0xdc;
      }
      else if (iVar3 == 0x54) {
        uVar2 = 0xaa;
        uVar5 = 0xde;
      }
      goto LAB_4a07434c;
    }
    if (iVar3 != 0x5b && iVar3 != 0x5c) goto LAB_4a07434c;
  }
  bVar1 = true;
LAB_4a07434c:
  FUN_4a1078a4(param_1,uVar2);
  FUN_4a107e58(param_1,uVar5);
  if (bVar1) {
    piVar4 = (int *)FUN_4a1460b0(param_1,0);
    if (*piVar4 == 0) {
      iVar3 = FUN_4a099c5c();
      if (piVar4[1] < iVar3) {
        if (piVar4[1] < 0) {
          iVar3 = FUN_4a099c5c(*piVar4);
          piVar4[1] = iVar3 + -1;
        }
      }
      else {
        piVar4[1] = 0;
      }
    }
    else {
      *piVar4 = 0;
      if ((piVar4[3] & 8U) == 0) {
        piVar4[1] = 0;
      }
      else {
        iVar3 = FUN_4a099c5c(0);
        piVar4[1] = iVar3 + -1;
      }
      piVar4[2] = 0;
    }
    piVar4[3] = 7;
    return;
  }
  piVar4 = (int *)FUN_4a1460b0(param_1,0);
  if (*piVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a074394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  iVar3 = FUN_4a1460b0(param_1,0);
  *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) & 0xfffffffd;
  return;
}



// Address: 4a074bac

/* WARNING: Removing unreachable block (ram,0x4a06013c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a074bac(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar21;
  
  iVar13 = param_1[8];
  iVar1 = param_1[0x2f];
  if (iVar1 == 2) {
    if ((param_1[0x34] != 0) && (param_1[0x32] == 0)) {
      param_1[0x34] = 0;
    }
  }
  else if (iVar1 == 3) {
    if ((param_2 != 3) && (iVar1 = FUN_4a146ea4(iVar13), iVar1 != 0)) {
      FUN_4a07331c(param_1,2);
      piVar2 = (int *)FUN_4a146d74(iVar13);
      if (piVar2 == param_1) {
        FUN_4a115d34(iVar13,0);
      }
    }
  }
  else if (iVar1 == 8) {
    FUN_4a107f20(param_1,0x2000);
  }
  FUN_4a1071e0(param_1,0x80);
  iVar1 = param_1[0x2f];
  param_1[0x2f] = param_2;
  param_1[0x30] = 0;
  switch(param_2) {
  default:
    return;
  case 1:
    iVar1 = param_1[0x32];
    if (iVar1 == 6) {
      iVar1 = FUN_4a1461c0(param_1,0x80000);
      if (iVar1 == 0) {
        iVar13 = 0x1a;
      }
      else {
        iVar13 = 0x19;
      }
    }
    else if (iVar1 == 5) {
      iVar13 = 0x51;
    }
    else if (iVar1 == 7) {
      iVar13 = 0x28;
    }
    else if (iVar1 == 3) {
      iVar13 = 0x16;
    }
    else if (iVar1 == 1) {
      iVar13 = 0x1f;
    }
    else if (iVar1 == 2) {
      iVar13 = 0x5b;
    }
    else if (iVar1 == 4) {
      iVar13 = 0x25;
    }
    else if (iVar1 == 8) {
      iVar13 = 0x2b;
    }
    else if (iVar1 == 9) {
      iVar13 = 0x30;
    }
    else if (iVar1 == 10) {
      iVar13 = 0x34;
    }
    else if (iVar1 == 0xb) {
LAB_4a074d40:
      iVar13 = 1;
    }
    else if (iVar1 == 0xd) {
      iVar13 = 0x46;
    }
    else {
      if (iVar1 != 0xe) goto LAB_4a074d40;
      iVar13 = 0x61;
    }
    break;
  case 2:
    uVar9 = FUN_4a1460a4();
    iVar1 = param_1[0x32];
    iVar18 = param_1[0x38];
    iVar13 = -1;
    switch(iVar1) {
    case 1:
      iVar18 = param_1[0x33];
      if (iVar18 == 4) {
        iVar13 = 0x24;
        iVar1 = 4;
      }
      else {
        if (iVar18 == 7 || iVar18 == 5) {
          iVar13 = 0x27;
          goto LAB_4a075c60;
        }
        if (iVar18 == 0) {
          iVar11 = param_1[0x34];
          iVar1 = 0;
          iVar18 = FUN_4a1460d4(iVar11);
          if (iVar18 != 0xd) {
            iVar20 = *(int *)(iVar11 + 0x50);
            iVar18 = FUN_4a107de8(0,0x200000,iVar20);
            iVar14 = FUN_4a107e20(0,0x200000,iVar20);
            iVar4 = FUN_4a107de8(0,0xffe00000,iVar20);
            iVar5 = FUN_4a107e20(0,0xffe00000,iVar20);
            iVar6 = FUN_4a107de8(0x200000,0,iVar20);
            iVar7 = FUN_4a107e20(0x200000,0,iVar20);
            iVar16 = *(int *)(iVar11 + 0x44);
            iVar17 = *(int *)(iVar11 + 0x4c);
            iVar8 = FUN_4a1460d4(iVar11);
            if (iVar8 == 0xc) {
              if (iVar20 == 0) {
                iVar16 = iVar16 + -0x200000;
              }
              else if (iVar20 == 1) {
                iVar17 = iVar17 + -0x200000;
              }
            }
            iVar11 = FUN_4a1460d4(iVar11);
            if ((iVar11 == 0xc) ||
               (iVar11 = FUN_4a145588(uVar9,iVar16 + iVar6,iVar17 + iVar7,iVar16,iVar17),
               iVar11 == 0)) {
              iVar11 = FUN_4a145588(uVar9,iVar16 + iVar18,iVar17 + iVar14,iVar16,iVar17);
              if (iVar11 == 0) {
                iVar18 = FUN_4a145588(uVar9,iVar16 + iVar4,iVar17 + iVar5,iVar16,iVar17);
                if (iVar18 != 0) {
                  iVar13 = 0x58;
                  FUN_4a070f84(param_1,iVar16 + iVar4,param_1[0x12],iVar17 + iVar5,iVar20 + 1U & 3);
                  iVar18 = FUN_4a106fe0(param_1[0x14]);
                  param_1[0x31] = iVar18;
                }
              }
              else {
                iVar13 = 0x57;
                FUN_4a070f84(param_1,iVar16 + iVar18,param_1[0x12],iVar17 + iVar14,iVar20 + 3U & 3);
                iVar18 = FUN_4a106fe0(param_1[0x14]);
                param_1[0x31] = iVar18;
              }
              break;
            }
          }
          iVar13 = 0x23;
        }
      }
      break;
    case 2:
      iVar13 = 0x5c;
      iVar1 = 0;
      break;
    case 3:
      if (param_1[0x33] == 0) {
        iVar13 = 0x1d;
        goto LAB_4a075f90;
      }
      if (param_1[0x33] == 6) {
        FUN_4a1071f0(param_1,0x80000);
        iVar1 = FUN_4a1461c0(param_1,0x80000);
        if (iVar1 == 0) {
          iVar13 = 0x18;
        }
        else {
          iVar13 = 0x17;
        }
        iVar1 = 6;
        iVar18 = FUN_4a146b68(param_1);
        if (iVar18 != 0) {
          FUN_4a0bb5d8();
        }
      }
      break;
    case 4:
      iVar13 = 0x26;
LAB_4a075ed0:
      iVar1 = 1;
      break;
    case 5:
      iVar13 = 0x52;
LAB_4a075c60:
      iVar1 = 7;
      break;
    case 6:
      iVar1 = FUN_4a1461c0(param_1,0x80000);
      if (iVar1 == 0) {
        iVar13 = 0x1c;
      }
      else {
        iVar13 = 0x1b;
      }
      iVar1 = 3;
      iVar18 = FUN_4a146b68(param_1);
      if (iVar18 != 0) {
        FUN_4a0bb4e4();
      }
      break;
    case 7:
      if (param_1[0x33] != 5) {
        iVar13 = 0x29;
        goto LAB_4a075ed0;
      }
      iVar13 = 0x50;
      iVar1 = 5;
      break;
    case 8:
      iVar13 = 0x2c;
      goto LAB_4a075f90;
    case 9:
      iVar13 = 0x2f;
      iVar1 = 0;
      FUN_4a105c74(param_1[0x34]);
      break;
    case 10:
      iVar13 = 0x35;
LAB_4a075f90:
      iVar1 = 0;
      break;
    case 0xb:
      iVar13 = 0x4e;
      iVar1 = 0;
      FUN_4a105c00(param_1[0x34]);
      break;
    case 0xc:
      if (param_1[0x33] == 0xd) {
        iVar13 = 0x45;
        iVar1 = 0xd;
        param_1[0x34] = iVar18;
        FUN_4a1053a4(iVar18);
      }
      else {
        if (param_1[0x33] != 0xe) {
          iVar13 = 0x5d;
          goto LAB_4a075f90;
        }
        iVar13 = 0x5e;
        iVar1 = 0xe;
        param_1[0x34] = iVar18;
        FUN_4a10575c(iVar18);
        FUN_4a1071e0(param_1,0x800000);
      }
      break;
    case 0xd:
      iVar13 = 0x47;
      iVar1 = 0xc;
      FUN_4a105a6c(param_1[0x34]);
      break;
    case 0xe:
      iVar13 = 0x61;
      FUN_4a1071e0(param_1,0x800000);
      FUN_4a10575c(param_1[0x34]);
      goto LAB_4a075aec;
    default:
      switchD_4a11cc8c::default(0,s_invalid_current_posture_4a075dd8);
    case 0:
      iVar11 = param_1[0x33];
      if (iVar11 == 10) {
        iVar13 = 0x33;
        iVar1 = 10;
      }
      else if (iVar11 == 9) {
        iVar13 = 0x2e;
        iVar1 = 9;
        param_1[0x34] = iVar18;
        FUN_4a105c7c(iVar18);
      }
      else if (iVar11 == 0xb) {
        iVar13 = 0x4d;
        iVar1 = 0xb;
        param_1[0x34] = iVar18;
        FUN_4a105610(iVar18);
      }
      else if (iVar11 == 0xd || iVar11 == 0xe) {
        iVar13 = 0x5d;
LAB_4a075aec:
        iVar1 = 0xc;
      }
      else if (iVar11 == 2) {
        iVar13 = 0x5a;
        iVar1 = 2;
      }
      else if (iVar11 == 3 || iVar11 == 6) {
        iVar13 = 0x15;
        iVar1 = 3;
        param_1[0x34] = iVar18;
      }
      else if (iVar11 == 8) {
        iVar13 = 0x2a;
        iVar1 = 8;
      }
      else if (((iVar11 == 1 || iVar11 == 7) || iVar11 == 5) || iVar11 == 4) {
        switchD_4a11cc8c::default(iVar18 != 0,s_sitting_without_a_chair_4a075df0);
        iVar13 = 0x1e;
        iVar1 = 1;
        param_1[0x34] = iVar18;
        iVar11 = FUN_4a1460d4(iVar18);
        if (iVar11 == 0xd) {
          FUN_4a106238(param_1,*(undefined4 *)(iVar18 + 0x50));
        }
        else {
          uVar3 = (*(int *)(iVar18 + 0x50) - param_1[0x14]) + 4U & 3;
          if (uVar3 != 0) {
            if (uVar3 == 1) {
              iVar13 = 0x56;
            }
            else if (uVar3 == 2) {
              FUN_4a106238(param_1,param_1[0x14] + 2U & 3);
            }
            else if (uVar3 == 3) {
              iVar13 = 0x55;
            }
          }
        }
      }
    }
    switchD_4a11cc8c::default(param_1[0x32] != iVar1,s_invalid_posture_change_4a075fdc);
    switchD_4a11cc8c::default(iVar13 != -1,s_invalid_posture_transition_appea_4a075ff4);
    param_1[0x32] = iVar1;
    FUN_4a107f20(param_1,0x80);
    break;
  case 3:
    iVar18 = 1 - param_1[0x32];
    if (1 < (uint)param_1[0x32]) {
      iVar18 = 0;
    }
    switchD_4a11cc8c::default(iVar18,s_not_standing_but_trying_to_walk__4a075034);
    FUN_4a074248(param_1,0);
    iVar18 = FUN_4a146a9c(param_1);
    if (iVar18 != 0) {
      return;
    }
    iVar18 = FUN_4a146ea4(iVar13);
    if (iVar18 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a074da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    iVar18 = FUN_4a146cd0(param_1);
    if (iVar18 == 0) {
      if (iVar1 == 3) {
        return;
      }
      if (*(char *)(iVar13 + 0x632) == '\0') {
        *(undefined4 *)(iVar13 + 0x2b4) = 0;
        iVar1 = FUN_4a115d8c(iVar13,0);
        bVar21 = param_1 == (int *)0x0;
        if (bVar21) {
          iVar1 = iVar13;
        }
        *(int **)(iVar13 + 0x2f4) = param_1;
        if (!bVar21) {
          iVar1 = iVar13;
        }
        uVar3 = (uint)!bVar21;
        iVar13 = *(int *)(iVar1 + 700);
        *(uint *)(iVar1 + 700) = uVar3;
        switch(uVar3) {
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
        if (iVar13 == 0) {
          if (uVar3 != 0) {
            FUN_4a084b60(iVar1 + 0x318,*(undefined4 *)(*(int *)(iVar1 + 0x28) + 0x470));
            FUN_4a084b60(iVar1 + 0x38c,*(undefined4 *)(*(int *)(iVar1 + 0x28) + 0x474));
            FUN_4a084b60(iVar1 + 0x400,*(undefined4 *)(*(int *)(iVar1 + 0x28) + 0x478));
            FUN_4a084b60(iVar1 + 0x474,*(undefined4 *)(*(int *)(iVar1 + 0x28) + 0x48c));
            FUN_4a084b60(iVar1 + 0x4e8,*(undefined4 *)(*(int *)(iVar1 + 0x28) + 0x484));
            uVar9 = *(undefined4 *)(*(int *)(iVar1 + 0x28) + 0x488);
            iVar13 = 0;
            if (0 < *(int *)(iVar1 + 0x5b0)) {
              do {
                if (*(int *)(iVar1 + 0x594) == 0) {
                  iVar18 = 0;
                }
                else {
                  iVar18 = *(int *)(*(int *)(iVar1 + 0x594) + 8);
                }
                *(undefined4 *)(iVar18 + iVar13 * 4) = uVar9;
                iVar13 = iVar13 + 1;
              } while (iVar13 < *(int *)(iVar1 + 0x5b0));
            }
            if (0 < *(int *)(iVar1 + 0x5b4)) {
              iVar13 = 0;
              do {
                if (*(int *)(iVar1 + 0x5a8) == 0) {
                  iVar18 = 0;
                }
                else {
                  iVar18 = *(int *)(*(int *)(iVar1 + 0x5a8) + 8);
                }
                *(undefined4 *)(iVar18 + iVar13 * 4) = uVar9;
                iVar13 = iVar13 + 1;
              } while (iVar13 < *(int *)(iVar1 + 0x5b4));
            }
            *(undefined4 *)(iVar1 + 0x5cc) = uVar9;
            *(undefined4 *)(iVar1 + 0x5c4) = uVar9;
            *(undefined4 *)(iVar1 + 0x5c0) = uVar9;
            return;
          }
          return;
        }
        return;
      }
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a074db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  case 4:
    uVar9 = FUN_4a145f8c(param_1);
    if (param_1[0x54] == -1) {
      uVar10 = FUN_4a1460b0(param_1,0);
      FUN_4a060130(uVar10,0);
    }
    else {
      uVar10 = FUN_4a1460b0(param_1,0);
      FUN_4a060194(uVar10,param_1[0x54],0x10);
      if (param_1[0x37] == 6) {
        iVar1 = FUN_4a13ff68(uVar9,param_1[0x35]);
        param_1[0x56] = iVar1;
      }
    }
    if (param_1[0x51] == -1) {
      iVar1 = FUN_4a140280(uVar9,param_1[0x35]);
      param_1[0x51] = iVar1;
    }
    if ((param_1[0x38] == 0) || (iVar1 = FUN_4a146b58(param_1[0x38],0x2000), iVar1 == 0)) {
      iVar1 = 0;
    }
    else {
      iVar1 = param_1[0x38];
    }
    iVar18 = param_1[0x35];
    if ((iVar18 == 0x56 || iVar18 == 0x57) || iVar18 == 0x58) {
      uVar10 = FUN_4a146a9c(iVar1);
      uVar12 = FUN_4a146a9c(param_1);
      iVar18 = FUN_4a0d60e8(uVar9,uVar12,uVar10,param_1[0x35]);
      if (iVar18 == 0) {
        FUN_4a107f20(iVar1,0x80);
        FUN_4a074248(iVar1,0x13);
        param_1[0x51] = 0x12;
      }
      else {
        FUN_4a107f20(iVar1,0x80);
        if (param_1[0x35] == 0x56) {
          FUN_4a074248(iVar1,0x11);
          iVar1 = 0x14;
        }
        else {
          FUN_4a074248(iVar1,0x44);
          iVar1 = 0x44;
        }
        param_1[0x51] = iVar1;
        if (param_1[0x35] == 0x58) {
          FUN_4a10ffe0(iVar13,3);
        }
      }
    }
    else if (iVar18 == 0x61) {
      FUN_4a107f20(iVar1,0x80);
      FUN_4a074248(iVar1,0x10);
    }
    else if (iVar18 == 0x62) {
      FUN_4a107f20(iVar1,0x80);
      FUN_4a074248(iVar1,0x66);
    }
    else if (iVar18 == 0x52) {
      FUN_4a107f20(iVar1,0x80);
      FUN_4a074248(iVar1,0x67);
    }
    if ((char)param_1[0x52] == '\0') {
      FUN_4a107f20(param_1,0x80);
    }
    iVar13 = param_1[0x51];
    break;
  case 5:
  case 6:
    iVar13 = 1;
    break;
  case 7:
    FUN_4a1077b8(param_1,param_1[0x38]);
    iVar13 = -5;
    iVar1 = 0;
    if (param_1[0x38] != 0) {
      iVar18 = FUN_4a146b58(param_1[0x38],0x2000);
      iVar1 = 0;
      if (iVar18 != 0) {
        iVar1 = param_1[0x38];
      }
    }
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xd4) == 0x56 || *(int *)(iVar1 + 0xd4) == 0x57)) {
      iVar13 = 1;
    }
    break;
  case 8:
    param_1[0xe] = param_1[0xe] | 0x2000;
    return;
  case 9:
    if ((param_1[0xe] & 0x100U) != 0) {
      FUN_4a106084(param_1);
    }
    iVar1 = FUN_4a143ac8(*(undefined4 *)(param_1[9] + 0x520),param_1[10]);
    if ((*(char *)(iVar1 + 8) == '\x14') && ((param_1[0xe] & 0x40U) != 0)) {
      uVar12 = *(undefined4 *)(param_1[9] + 0x520);
      uVar9 = FUN_4a144cb0(uVar12,param_1[0x11]);
      uVar10 = FUN_4a144cb8(uVar12,param_1[0x13]);
      uVar9 = FUN_4a1458ac(uVar12,uVar9,uVar10);
      iVar1 = FUN_4a0f7058(*(undefined4 *)(param_1[9] + 0x520),uVar9);
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
    iVar18 = -1;
    iVar13 = FUN_4a146b58(param_1,0x2000);
    if (iVar13 != 0) {
      iVar18 = FUN_4a146a9c(param_1);
    }
    FUN_4a106a9c(param_1,0);
    iVar13 = *(int *)(iVar1 + 0x624);
    if ((*(int *)(iVar1 + 0x628) == iVar13) &&
       (iVar11 = *(int *)(iVar1 + 0x620) + iVar13, iVar13 < iVar11)) {
      *(int *)(iVar1 + 0x624) = iVar11;
      iVar14 = *(int *)(iVar1 + 0x62c);
      iVar13 = thunk_FUN_4a161570(iVar11 * 4);
      *(int *)(iVar1 + 0x62c) = iVar13;
      if (iVar13 != 0) {
        iVar13 = 0;
        if (0 < *(int *)(iVar1 + 0x628)) {
          do {
            iVar11 = iVar13 + 1;
            *(undefined4 *)(*(int *)(iVar1 + 0x62c) + iVar13 * 4) =
                 *(undefined4 *)(iVar14 + iVar13 * 4);
            iVar13 = iVar11;
          } while (iVar11 < *(int *)(iVar1 + 0x628));
        }
        thunk_FUN_4a161530(iVar14);
      }
      iVar13 = *(int *)(iVar1 + 0x628);
      if (*(int *)(iVar1 + 0x628) < *(int *)(iVar1 + 0x624)) {
        do {
          iVar11 = iVar13 + 1;
          *(undefined4 *)(*(int *)(iVar1 + 0x62c) + iVar13 * 4) = 0;
          iVar13 = iVar11;
        } while (iVar11 < *(int *)(iVar1 + 0x624));
      }
    }
    iVar13 = *(int *)(iVar1 + 0x628);
    *(int *)(iVar1 + 0x628) = iVar13 + 1;
    piVar15 = *(int **)(*(int *)(iVar1 + 0x62c) + iVar13 * 4);
    piVar2 = param_1;
    if (param_1 != (int *)0x0) {
      piVar2 = (int *)(*(int *)(*param_1 + -0xc) + (int)param_1);
    }
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))();
    }
    *(int **)(*(int *)(iVar1 + 0x62c) + iVar13 * 4) = param_1;
    if (piVar15 != (int *)0x0) {
      piVar15 = (int *)((int)piVar15 + *(int *)(*piVar15 + -0xc));
    }
    if ((piVar15 != (int *)0x0) && (iVar13 = (**(code **)(*piVar15 + 8))(piVar15), iVar13 != 0)) {
      (**(code **)(*piVar15 + 4))(piVar15);
    }
    iVar11 = *(int *)(iVar1 + 0x610);
    iVar13 = 0;
    if (0 < iVar11) {
      do {
        if (*(int **)(*(int *)(iVar1 + 0x614) + iVar13 * 4) == param_1) goto LAB_4a10f680;
        iVar13 = iVar13 + 1;
      } while (iVar13 < iVar11);
    }
    iVar13 = -1;
LAB_4a10f680:
    if (iVar13 != -1) {
      iVar13 = iVar13 + 1;
      if (iVar13 < iVar11) {
        do {
          piVar15 = *(int **)(*(int *)(iVar1 + 0x614) + iVar13 * 4);
          piVar19 = *(int **)(*(int *)(iVar1 + 0x614) + (iVar13 + -1) * 4);
          piVar2 = piVar15;
          if (piVar15 != (int *)0x0) {
            piVar2 = (int *)(*(int *)(*piVar15 + -0xc) + (int)piVar15);
          }
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 0xc))();
          }
          *(int **)(*(int *)(iVar1 + 0x614) + (iVar13 + -1) * 4) = piVar15;
          if (piVar19 == (int *)0x0) {
            piVar19 = (int *)0x0;
          }
          else {
            piVar19 = (int *)(*(int *)(*piVar19 + -0xc) + (int)piVar19);
          }
          if ((piVar19 != (int *)0x0) &&
             (iVar11 = (**(code **)(*piVar19 + 8))(piVar19), iVar11 != 0)) {
            (**(code **)(*piVar19 + 4))(piVar19);
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < *(int *)(iVar1 + 0x610));
      }
      iVar13 = *(int *)(iVar1 + 0x610) + -1;
      piVar2 = *(int **)(*(int *)(iVar1 + 0x614) + iVar13 * 4);
      *(undefined4 *)(*(int *)(iVar1 + 0x614) + iVar13 * 4) = 0;
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)(*(int *)(*piVar2 + -0xc) + (int)piVar2);
      }
      if ((piVar2 != (int *)0x0) && (iVar13 = (**(code **)(*piVar2 + 8))(piVar2), iVar13 != 0)) {
        (**(code **)(*piVar2 + 4))(piVar2);
      }
      *(int *)(iVar1 + 0x610) = *(int *)(iVar1 + 0x610) + -1;
    }
    *(undefined1 *)(iVar1 + 0x630) = 1;
    if (iVar18 != -1) {
      *(undefined1 *)(iVar1 + 0x631) = 1;
    }
    return;
  }
  uVar9 = FUN_4a1460a4();
  iVar1 = FUN_4a0f1a04(uVar9,iVar13);
  if (param_1[0x2e] == iVar1) {
    return;
  }
  param_1[0x2e] = iVar1;
  uVar9 = FUN_4a1460a4(param_1);
  uVar9 = FUN_4a144e00(uVar9,param_1[0x2d],iVar1);
  FUN_4a109ed4(param_1,uVar9);
  uVar10 = 0;
  uVar9 = 0xffffffff;
  bVar21 = false;
  if (iVar1 == 0x41) {
    uVar9 = 0xaf;
    uVar10 = 0xf7;
    goto LAB_4a07434c;
  }
  if (iVar1 < 0x42) {
    if (iVar1 == 0x26) {
      uVar9 = 0xae;
      uVar10 = 0xdb;
      goto LAB_4a07434c;
    }
    if (iVar1 < 0x27) {
      if (iVar1 == 0x22) {
        uVar9 = 0xab;
      }
      else if (iVar1 == 0x24) {
        uVar9 = 0xae;
        uVar10 = 0xd9;
      }
      else if (iVar1 == 0x25) {
        uVar9 = 0xae;
        uVar10 = 0xda;
      }
      goto LAB_4a07434c;
    }
    if (iVar1 != 0x2d) {
      if (iVar1 == 0x39) {
        uVar9 = 0xac;
        uVar10 = 0xdd;
      }
      goto LAB_4a07434c;
    }
  }
  else if (iVar1 != 0x5a) {
    if (iVar1 < 0x5b) {
      if (iVar1 == 0x4c) {
        uVar9 = 0xae;
        uVar10 = 0xdc;
      }
      else if (iVar1 == 0x54) {
        uVar9 = 0xaa;
        uVar10 = 0xde;
      }
      goto LAB_4a07434c;
    }
    if (iVar1 != 0x5b && iVar1 != 0x5c) goto LAB_4a07434c;
  }
  bVar21 = true;
LAB_4a07434c:
  FUN_4a1078a4(param_1,uVar9);
  FUN_4a107e58(param_1,uVar10);
  if (bVar21) {
    piVar2 = (int *)FUN_4a1460b0(param_1,0);
    if (*piVar2 == 0) {
      iVar1 = FUN_4a099c5c();
      if (piVar2[1] < iVar1) {
        if (piVar2[1] < 0) {
          iVar1 = FUN_4a099c5c(*piVar2);
          piVar2[1] = iVar1 + -1;
        }
      }
      else {
        piVar2[1] = 0;
      }
    }
    else {
      *piVar2 = 0;
      if ((piVar2[3] & 8U) == 0) {
        piVar2[1] = 0;
      }
      else {
        iVar1 = FUN_4a099c5c(0);
        piVar2[1] = iVar1 + -1;
      }
      piVar2[2] = 0;
    }
    piVar2[3] = 7;
    return;
  }
  piVar2 = (int *)FUN_4a1460b0(param_1,0);
  if (*piVar2 == 0) {
    iVar1 = FUN_4a1460b0(param_1,0);
    *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) & 0xfffffffd;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a074394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a075058

/* WARNING: Removing unreachable block (ram,0x4a0fc274) */
/* WARNING: Removing unreachable block (ram,0x4a0fc2ac) */
/* WARNING: Removing unreachable block (ram,0x4a0fc2b0) */
/* WARNING: Removing unreachable block (ram,0x4a0fc2b4) */
/* WARNING: Removing unreachable block (ram,0x4a0fc2bc) */
/* WARNING: Removing unreachable block (ram,0x4a0fc338) */
/* WARNING: Removing unreachable block (ram,0x4a0fc348) */
/* WARNING: Removing unreachable block (ram,0x4a0fc34c) */
/* WARNING: Removing unreachable block (ram,0x4a0fc350) */
/* WARNING: Removing unreachable block (ram,0x4a0fc35c) */
/* WARNING: Removing unreachable block (ram,0x4a0fc360) */
/* WARNING: Removing unreachable block (ram,0x4a0fc364) */
/* WARNING: Removing unreachable block (ram,0x4a0fc368) */
/* WARNING: Removing unreachable block (ram,0x4a0fc36c) */
/* WARNING: Removing unreachable block (ram,0x4a0fc2c8) */
/* WARNING: Removing unreachable block (ram,0x4a0fc2d4) */
/* WARNING: Removing unreachable block (ram,0x4a0fc2d8) */
/* WARNING: Removing unreachable block (ram,0x4a0fc2dc) */
/* WARNING: Removing unreachable block (ram,0x4a0fc2e8) */
/* WARNING: Removing unreachable block (ram,0x4a0fc2f4) */
/* WARNING: Removing unreachable block (ram,0x4a0fc304) */
/* WARNING: Removing unreachable block (ram,0x4a0fc308) */
/* WARNING: Removing unreachable block (ram,0x4a0fc30c) */
/* WARNING: Removing unreachable block (ram,0x4a0fc320) */
/* WARNING: Removing unreachable block (ram,0x4a0fc328) */
/* WARNING: Removing unreachable block (ram,0x4a0fc2f0) */
/* WARNING: Removing unreachable block (ram,0x4a0fc378) */
/* WARNING: Removing unreachable block (ram,0x4a0fc38c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a075058(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar8;
  
  iVar1 = FUN_4a146be8(param_1,0);
  iVar6 = *(int *)(param_1 + 0xd4);
  uVar2 = *(undefined4 *)(iVar1 + 0x34);
  if (iVar6 == 0x62) {
    if (*(int *)(param_1 + 0xb8) != 0x65) {
      return;
    }
    iVar6 = FUN_4a06f860(uVar2);
    if (iVar6 < 800) {
                    /* WARNING: Could not recover jumptable at 0x4a0752b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    iVar6 = FUN_4a1461c0(param_1,0x400000);
    if (iVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0752cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    FUN_4a1071e0(param_1,0x400000);
    uVar2 = 0x54;
    iVar6 = FUN_4a146a9c(param_1);
    if ((iVar6 == 0) && (iVar6 = FUN_4a0fb748(*(undefined4 *)(param_1 + 0x24)), iVar6 < 0x19)) {
      uVar2 = 0x55;
      uVar3 = FUN_4a145f8c(param_1);
      FUN_4a0d9d54(uVar3,3,0xff9c0000);
    }
  }
  else if (iVar6 < 99) {
    if (iVar6 == 0x52) {
      if (*(int *)(param_1 + 0xb8) != 0x68) {
        return;
      }
      iVar6 = FUN_4a06f860(uVar2);
      if (iVar6 < 0x5aa) {
                    /* WARNING: Could not recover jumptable at 0x4a075350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
      iVar6 = FUN_4a1461c0(param_1,0x400000);
      if (iVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a075368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
      FUN_4a1071e0(param_1,0x400000);
      uVar2 = 0x56;
    }
    else {
      if (iVar6 == 0x57) {
        if (*(int *)(param_1 + 0xb8) != 0x44) {
          return;
        }
        iVar6 = FUN_4a06f860(uVar2);
        if (iVar6 < 0x5dc) {
                    /* WARNING: Could not recover jumptable at 0x4a075168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)();
          return;
        }
        iVar6 = FUN_4a1461c0(param_1,0x400000);
        if (iVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a075180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)();
          return;
        }
        if (*(int *)(param_1 + 0xe0) == 0) {
          return;
        }
        iVar6 = FUN_4a146b58(*(int *)(param_1 + 0xe0),0x2000);
        if (iVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0751a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)();
          return;
        }
        if (*(int *)(param_1 + 0xe0) == 0) {
          return;
        }
        iVar6 = FUN_4a146b58(*(int *)(param_1 + 0xe0),0x2000);
        uVar2 = 0;
        if (iVar6 != 0) {
          uVar2 = *(undefined4 *)(param_1 + 0xe0);
        }
        uVar2 = FUN_4a146a9c(uVar2);
        uVar3 = FUN_4a145f8c(param_1);
        iVar6 = FUN_4a141248(uVar3,uVar2,0x8000);
        if (iVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0751ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)();
          return;
        }
        FUN_4a1071e0(param_1,0x400000);
        uVar2 = 0;
        if (*(int *)(param_1 + 0xe0) != 0) {
          iVar6 = FUN_4a146b58(*(int *)(param_1 + 0xe0),0x2000);
          uVar2 = 0;
          if (iVar6 != 0) {
            uVar2 = *(undefined4 *)(param_1 + 0xe0);
          }
        }
        uVar2 = FUN_4a146a9c(uVar2);
        uVar3 = FUN_4a145f8c(param_1);
        FUN_4a0dd6e4(uVar3,uVar2,0x8000);
        iVar6 = *(int *)(param_1 + 0x20);
        FUN_4a0d58d0(*(undefined4 *)(iVar6 + 0x24));
        FUN_4a0ff3f8(*(undefined4 *)(iVar6 + 0x20),400);
        *(undefined4 *)(iVar6 + 0x7e0) = 2;
        FUN_4a1161d0(iVar6,0x13);
        FUN_4a11be8c(iVar6,1);
                    /* WARNING: Could not recover jumptable at 0x4a110030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR_caseD_2_4a110040)(0xd,0,0x11);
        return;
      }
      bVar8 = iVar6 == 0x61;
      if (bVar8) {
        iVar6 = *(int *)(param_1 + 0xb8);
      }
      if (!bVar8 || iVar6 != 0xf) {
        return;
      }
      iVar6 = FUN_4a06f860(uVar2);
      if (iVar6 < 800) {
                    /* WARNING: Could not recover jumptable at 0x4a0750ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
      iVar6 = FUN_4a1461c0(param_1,0x400000);
      if (iVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0750c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
      FUN_4a1071e0(param_1,0x400000);
      uVar2 = 0x42;
    }
  }
  else if (iVar6 == 0x9e) {
    if (*(int *)(param_1 + 0xb8) != 0x37) {
      return;
    }
    iVar6 = FUN_4a06f860(uVar2);
    if (iVar6 < 900) {
                    /* WARNING: Could not recover jumptable at 0x4a075260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    iVar6 = FUN_4a1461c0(param_1,0x400000);
    if (iVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a075278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    FUN_4a1071e0(param_1,0x400000);
    uVar2 = 0x47;
  }
  else {
    bVar8 = iVar6 == 0xa2;
    if (bVar8) {
      iVar6 = *(int *)(param_1 + 0xb8);
    }
    if (!bVar8 || iVar6 != 0x3a) {
      return;
    }
    iVar6 = FUN_4a06f860(uVar2);
    if (iVar6 < 500) {
                    /* WARNING: Could not recover jumptable at 0x4a07510c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    iVar6 = FUN_4a1461c0(param_1,0x400000);
    if (iVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a075124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    FUN_4a1071e0(param_1,0x400000);
    uVar2 = 0x45;
  }
  iVar6 = FUN_4a0ff494();
  uVar7 = *(undefined4 *)(iVar6 + 0x260);
  uVar3 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x44));
  uVar3 = FUN_4a17295c(uVar3,0xfffffff0);
  uVar4 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x48));
  uVar4 = FUN_4a17295c(uVar4,0xfffffff0);
  uVar5 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x4c));
  FUN_4a17295c(uVar5,0xfffffff0);
  FUN_4a0851b4(uVar7,uVar2,uVar3,uVar4);
  return;
}



// Address: 4a075388

/* WARNING: Removing unreachable block (ram,0x4a071240) */
/* WARNING: Removing unreachable block (ram,0x4a071244) */
/* WARNING: Removing unreachable block (ram,0x4a071cf8) */
/* WARNING: Removing unreachable block (ram,0x4a071d08) */
/* WARNING: Removing unreachable block (ram,0x4a0de3d0) */
/* WARNING: Removing unreachable block (ram,0x4a0de3d4) */
/* WARNING: Removing unreachable block (ram,0x4a0de3d8) */
/* WARNING: Removing unreachable block (ram,0x4a0de428) */
/* WARNING: Removing unreachable block (ram,0x4a0de418) */
/* WARNING: Removing unreachable block (ram,0x4a0de420) */
/* WARNING: Removing unreachable block (ram,0x4a0de424) */
/* WARNING: Removing unreachable block (ram,0x4a0de42c) */
/* WARNING: Removing unreachable block (ram,0x4a0de43c) */
/* WARNING: Removing unreachable block (ram,0x4a0de444) */
/* WARNING: Removing unreachable block (ram,0x4a0de3f8) */
/* WARNING: Removing unreachable block (ram,0x4a0de3e4) */
/* WARNING: Removing unreachable block (ram,0x4a0daefc) */
/* WARNING: Removing unreachable block (ram,0x4a0daf0c) */
/* WARNING: Removing unreachable block (ram,0x4a0daf7c) */
/* WARNING: Removing unreachable block (ram,0x4a0daf88) */
/* WARNING: Removing unreachable block (ram,0x4a0daf60) */
/* WARNING: Removing unreachable block (ram,0x4a0daf6c) */
/* WARNING: Removing unreachable block (ram,0x4a0daf70) */
/* WARNING: Removing unreachable block (ram,0x4a0daf74) */
/* WARNING: Removing unreachable block (ram,0x4a0daf98) */
/* WARNING: Removing unreachable block (ram,0x4a0dafa0) */
/* WARNING: Removing unreachable block (ram,0x4a0dafa8) */
/* WARNING: Removing unreachable block (ram,0x4a0dafac) */
/* WARNING: Removing unreachable block (ram,0x4a0dafb0) */
/* WARNING: Removing unreachable block (ram,0x4a0dafcc) */
/* WARNING: Removing unreachable block (ram,0x4a0dafd0) */
/* WARNING: Removing unreachable block (ram,0x4a0dafd4) */
/* WARNING: Removing unreachable block (ram,0x4a0daff4) */
/* WARNING: Removing unreachable block (ram,0x4a0daff8) */
/* WARNING: Removing unreachable block (ram,0x4a0daffc) */
/* WARNING: Removing unreachable block (ram,0x4a0db000) */
/* WARNING: Removing unreachable block (ram,0x4a0db010) */
/* WARNING: Removing unreachable block (ram,0x4a0db01c) */
/* WARNING: Removing unreachable block (ram,0x4a0db028) */
/* WARNING: Removing unreachable block (ram,0x4a0db034) */
/* WARNING: Removing unreachable block (ram,0x4a0db040) */
/* WARNING: Removing unreachable block (ram,0x4a0db044) */
/* WARNING: Removing unreachable block (ram,0x4a0db048) */
/* WARNING: Removing unreachable block (ram,0x4a0db054) */
/* WARNING: Removing unreachable block (ram,0x4a0db05c) */
/* WARNING: Removing unreachable block (ram,0x4a0db084) */
/* WARNING: Removing unreachable block (ram,0x4a0db088) */
/* WARNING: Removing unreachable block (ram,0x4a0db094) */
/* WARNING: Removing unreachable block (ram,0x4a0db0a4) */
/* WARNING: Removing unreachable block (ram,0x4a0db0b4) */
/* WARNING: Removing unreachable block (ram,0x4a0db0bc) */
/* WARNING: Removing unreachable block (ram,0x4a0db0c0) */
/* WARNING: Removing unreachable block (ram,0x4a0db0cc) */
/* WARNING: Removing unreachable block (ram,0x4a0db0e4) */
/* WARNING: Removing unreachable block (ram,0x4a0db0e8) */
/* WARNING: Removing unreachable block (ram,0x4a0db0f0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a075388(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  ushort *puVar10;
  int unaff_r4;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  undefined4 auStack_40 [2];
  int iStack_38;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  iVar3 = FUN_4a145f8c();
  iVar8 = iVar3;
  if (param_2 != 0xa2) {
LAB_4a0753cc:
    iVar4 = -1;
    if (param_3 == 6) {
      iVar4 = 0xf;
LAB_4a0753e8:
      uVar5 = FUN_4a171fac(param_1[0x11]);
      uVar5 = FUN_4a17295c(uVar5,0xfffffff0);
      uVar6 = FUN_4a171fac(param_1[0x12]);
      uVar6 = FUN_4a17295c(uVar6,0xfffffff0);
      uVar7 = FUN_4a171fac(param_1[0x13]);
      iStack_30 = FUN_4a17295c(uVar7,0xfffffff0);
      iVar8 = FUN_4a073f4c(param_1,param_2,uVar5,uVar6);
    }
    else if (param_3 == 7 || param_3 == 8) goto LAB_4a0753e8;
    bVar15 = param_2 != 0x93;
    bVar16 = param_2 != 0x94;
    bVar17 = param_2 != 0x74;
    if ((bVar15 && bVar16) && bVar17) {
      iVar8 = param_1[0x39];
    }
    if (((bVar15 && bVar16) && bVar17) && iVar8 != 0) {
      iVar4 = FUN_4a0dd6cc();
    }
    if (param_3 == 8 || param_3 == 6) {
      iVar9 = -1;
    }
    else {
      iVar9 = 2000;
    }
    if (param_2 == 0x15) {
      iVar9 = 0x388;
    }
    param_1[0x51] = -1;
    if (param_2 == 0x15) {
      iVar9 = iVar9 + 0x1000;
    }
    *(char *)(param_1 + 0x52) = (char)(iVar9 >> 0x1f) + '\x01';
    param_1[0x53] = iVar9;
    param_1[0x54] = iVar4;
    *(bool *)(param_1 + 0x55) = ((bVar15 && bVar16) && bVar17) && iVar8 != 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    iVar8 = FUN_4a146a9c(param_1);
    if (iVar8 == 0) {
      if (param_2 == 0x9f) {
        uVar5 = 0xffec0000;
        iVar8 = 3;
code_r0x4a0d8c28:
        iVar4 = 0;
        if (*(int *)(iVar3 + 0x878) != 0) {
          iVar4 = *(int *)(*(int *)(iVar3 + 0x878) + 8);
        }
        *(undefined4 *)(iVar4 + iVar8 * 4) = uVar5;
        return;
      }
      if ((param_2 == 0x12 || param_2 == 0x13) || param_2 == 0x14) {
        FUN_4a0d8c28(iVar3,5,0x30000);
      }
      else if (param_2 == 0x15) {
        uVar5 = 0x30000;
        iVar8 = 5;
        goto code_r0x4a0d8c28;
      }
    }
    if (param_2 == 0x9e) {
      FUN_4a1064c8(param_1[0x38],param_1);
      iVar8 = FUN_4a146a9c(param_1);
      if (iVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a075550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
      FUN_4a0daefc(iVar3,0x24);
      FUN_4a1460a4(param_1);
      uVar5 = FUN_4a142ef4();
      FUN_4a0de344(iVar3,uVar5,0x10);
      FUN_4a1460a4(param_1);
      iVar8 = FUN_4a142ef4();
      iVar4 = 1;
      if (1 < *(int *)(iVar3 + 0x410)) {
        do {
          if (*(int *)(iVar3 + 0x470) == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = *(int *)(*(int *)(iVar3 + 0x470) + 8);
          }
          if (*(short *)(iVar9 + iVar4 * 2) == iVar8) {
            if (*(int *)(iVar3 + 0x8e4) == 0) {
              iVar9 = 0;
            }
            else {
              iVar9 = *(int *)(*(int *)(iVar3 + 0x8e4) + 8);
            }
            puVar10 = (ushort *)(iVar9 + iVar4 * 2);
            *puVar10 = *puVar10 | 0x1000;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(iVar3 + 0x410));
      }
      FUN_4a141284(iVar3,0x1000);
      return;
    }
    if (param_2 == 4) {
      iVar8 = FUN_4a146a9c(param_1);
      if (iVar8 == 0) {
        FUN_4a0d9d54(iVar3,3,0xff9c0000);
      }
      iVar8 = FUN_4a10cd48(param_1[8],3,param_1[0x11],param_1[0x13]);
      if (iVar8 == 0) {
        uVar5 = 0xffffffff;
        FUN_4a1460a4(param_1);
        iVar8 = FUN_4a142ef4();
        if (iVar8 == 0) {
          iVar8 = param_1[0x14];
          iVar3 = param_1[0x13];
          iVar4 = param_1[0x11];
          uVar5 = FUN_4a1460a4(param_1);
          iStack_30 = iVar8;
          uVar5 = FUN_4a0f953c(uVar5,0xc,iVar4,iVar3);
        }
        iStack_30 = param_1[0x13];
        iStack_2c = param_1[0x14];
        iStack_28 = uVar5;
        FUN_4a10ea38(param_1[8],0xc,param_1[0x11],param_1[0x12]);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x4a0755f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a0755ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  iVar4 = FUN_4a1461c0(param_1[0x38],0x40);
  iVar8 = 0;
  if (iVar4 == 0) goto LAB_4a0753cc;
  iStack_28 = unaff_r4;
  uVar5 = FUN_4a145f8c();
  FUN_4a1460a4(param_1);
  iVar8 = FUN_4a142ef4();
  iVar3 = FUN_4a1406f4(uVar5,param_1[0x35]);
  uVar1 = FUN_4a146a9c(param_1);
  iVar9 = 1 - uVar1;
  iVar4 = param_1[0x37];
  iVar12 = param_1[0x38];
  if (1 < uVar1) {
    iVar9 = 0;
  }
  if (iVar4 == 0x13) {
    if ((iVar9 != 0) && (FUN_4a0d8c28(uVar5,2,0), iVar8 != 0)) {
      FUN_4a0daefc(uVar5,0x27);
      FUN_4a0de344(uVar5,iVar8,4);
    }
  }
  else if (iVar4 < 0x14) {
    if (iVar4 == 8) {
LAB_4a07110c:
      param_1[0x51] = -1;
      *(undefined1 *)(param_1 + 0x52) = 0;
      param_1[0x53] = -1;
      param_1[0x54] = -1;
      *(undefined1 *)(param_1 + 0x55) = 0;
      *(undefined1 *)((int)param_1 + 0x149) = 1;
      uVar6 = FUN_4a1460b0(param_1,0);
      FUN_4a060130(uVar6,0);
      if (iVar9 != 0) {
        iVar8 = param_1[0x35];
        if (iVar8 == 0x9f) {
          FUN_4a0d8c28(uVar5,3,0);
        }
        else if (((iVar8 == 0x12 || iVar8 == 0x13) || iVar8 == 0x14) || iVar8 == 0x15) {
LAB_4a071410:
          FUN_4a0d8c28(uVar5,5,0);
        }
      }
    }
    else if (iVar4 < 9) {
      if (iVar4 == 1) {
        iVar8 = 1;
        if (iVar9 != 0) {
          iVar8 = *(int *)(param_1[8] + 0x5fc);
        }
        if (iVar9 != 0 && iVar8 != 0) {
          FUN_4a108d64();
        }
      }
      else if (iVar4 == 6 || iVar4 == 7) goto LAB_4a07110c;
    }
    else if (iVar4 == 0xd) {
      iVar8 = FUN_4a1460d4(iVar12);
      switchD_4a11cc8c::default(iVar8 == 0x1b,s_cooking_at_non_stove__4a071460);
      FUN_4a109b9c(iVar12);
    }
    else if (iVar4 == 0x11) {
      if (iVar9 != 0) {
        FUN_4a0d8c28(uVar5,0);
      }
    }
    else if (iVar4 == 0x12) {
      if (iVar9 != 0) {
        FUN_4a0d8c28(uVar5,3,0);
      }
      if (iVar12 != 0) {
        iVar4 = FUN_4a1460d4(iVar12);
        if (iVar4 == 0x19) {
          if (iVar9 != 0 && iVar8 != 0) {
            FUN_4a0daefc(uVar5,0x26);
            FUN_4a0de344(uVar5,iVar8,8);
          }
        }
        else if (iVar4 == 4) {
          FUN_4a109998(iVar12);
        }
        else if (iVar4 == 5) {
          FUN_4a105a6c(iVar12);
        }
      }
    }
  }
  else if (iVar4 == 0x35) {
    if (iVar12 != 0) {
      FUN_4a108be0(iVar12);
    }
  }
  else if (iVar4 < 0x36) {
    if (iVar4 == 0x14 || iVar4 == 0x15) {
      if (iVar9 != 0) {
        FUN_4a0d8c28(uVar5,1,0);
        FUN_4a0d7614(uVar5,0);
        if ((param_1[0x37] == 0x15) && (iVar8 != 0)) {
          FUN_4a0daefc(uVar5,0x25);
          uVar6 = FUN_4a1081c4(iVar12);
          FUN_4a0de344(uVar5,iVar8,uVar6);
        }
      }
      iVar8 = FUN_4a1461c0(param_1,0x400);
      if (iVar8 != 0) {
        FUN_4a1071e0(param_1,0x400);
        iVar8 = FUN_4a146ea4(param_1[8]);
        if (iVar8 == 0) {
          iVar8 = FUN_4a107058(param_1,1);
          FUN_4a0ca898(iVar8,0xb);
          FUN_4a06f95c(*(undefined4 *)(iVar8 + 0x34),0xfa,0x14);
        }
      }
    }
    else if ((iVar4 == 0x1a) && (iVar9 != 0)) goto LAB_4a071410;
  }
  else if (iVar4 == 0x36) {
    if (iVar9 != 0) {
      FUN_4a0d8c28(uVar5,2,0);
      FUN_4a0d8c28(uVar5,1,0);
    }
  }
  else if (iVar4 == 0x37) {
    if (iVar9 != 0) {
      FUN_4a0d8c28(uVar5,5,0);
    }
    FUN_4a109944(iVar12);
  }
  param_1[0x37] = 0;
  iVar8 = iStack_28;
  if (iVar3 + -1 <= param_1[0x36]) goto code_r0x4a07171c;
  param_1[0x36] = param_1[0x36] + 1;
  iVar8 = FUN_4a13fb58(uVar5,param_1[0x35]);
  iStack_24 = iStack_28;
  iStack_28 = param_1[8];
  iStack_2c = FUN_4a145f8c(param_1);
  param_1[0x37] = iVar8;
  iVar3 = param_1[0x38];
  iVar4 = param_1[0x35];
  if ((iVar3 == 0) || (iVar9 = FUN_4a146b58(iVar3,0x2000), iVar9 == 0)) {
    iVar9 = 0;
  }
  else {
    iVar9 = param_1[0x38];
  }
  iVar12 = param_1[0x39];
  iVar14 = param_1[0x3a];
  uVar1 = FUN_4a146a9c(param_1);
  uVar11 = 1 - uVar1;
  if (1 < uVar1) {
    uVar11 = 0;
  }
  if (uVar11 != 0 && iVar9 != 0) {
    uVar5 = FUN_4a146a9c(iVar9);
    FUN_4a0d56bc(iStack_2c,uVar5);
  }
  if (((iVar3 != 0) && (iVar9 == 0)) && (iVar8 != 1)) {
    uVar5 = FUN_4a1461c0(param_1,0x800);
    FUN_4a1071f0(iVar3,0x800,uVar5);
    uVar5 = FUN_4a1461c0(param_1,0x1000);
    FUN_4a1071f0(iVar3,0x1000,uVar5);
  }
  uVar1 = 0;
  switch(iVar8) {
  case 0:
    iVar8 = param_1[0x32];
    if (((((iVar8 == 9 || iVar8 == 0xb) || iVar8 == 0xd) || iVar8 == 0xc) || iVar8 == 0xe) ||
        iVar8 == 8) {
      param_1[0x36] = param_1[0x36] + -1;
      FUN_4a071e74(param_1,0x1f);
    }
    else if (iVar8 == 4) {
      param_1[0x36] = param_1[0x36] + -1;
      FUN_4a071e74(param_1,0x22);
    }
    else {
      FUN_4a074bac(param_1,1);
    }
    break;
  case 1:
    FUN_4a076e50(param_1,iVar3,iVar12);
    break;
  case 2:
  case 3:
    if (iVar3 == 0) {
      FUN_4a106248(param_1,iVar12 - param_1[0x11],iVar14 - param_1[0x13]);
    }
    else {
      FUN_4a1077b8(param_1,iVar3);
    }
    if (iVar8 == 3) {
LAB_4a0720fc:
      FUN_4a106238(param_1,param_1[0x14] + 2U & 3);
    }
    goto LAB_4a072bd8;
  case 4:
  case 5:
    FUN_4a106238(param_1,*(undefined4 *)(iVar3 + 0x50));
    if (iVar8 == 5) goto LAB_4a0720fc;
    goto LAB_4a072bd8;
  case 6:
  case 7:
  case 8:
    FUN_4a075388(param_1,iVar4,iVar8);
    goto LAB_4a072d2c;
  case 9:
    FUN_4a074bac(param_1,5);
    break;
  case 10:
    FUN_4a074bac(param_1,6);
    break;
  case 0xb:
    iVar8 = 0;
    if (param_1[0x38] != 0) {
      iVar3 = FUN_4a146b58(param_1[0x38],0x2000);
      iVar8 = 0;
      if (iVar3 != 0) {
        iVar8 = param_1[0x38];
      }
    }
    FUN_4a076d54(iVar8);
    FUN_4a071478(param_1);
    break;
  case 0xc:
    FUN_4a074bac(param_1,7);
    break;
  case 0xd:
    switchD_4a11cc8c::default(uVar11,s_NPC_cooking__4a072608);
    iVar8 = FUN_4a0d5b78(iStack_2c,iVar12);
    if (iVar8 == 0) {
LAB_4a072c98:
      FUN_4a071ac4(param_1,0);
    }
    else {
      FUN_4a110228(iStack_28,0,iVar3);
      iVar8 = FUN_4a1460d4(iVar3);
      switchD_4a11cc8c::default(iVar8 == 0x1b,s_cooking_at_non_stove__4a072618);
      FUN_4a105774(iVar3);
      param_1[0x51] = 0x36;
      *(undefined1 *)(param_1 + 0x52) = 1;
      param_1[0x54] = -1;
      param_1[0x53] = 1000;
      *(undefined1 *)(param_1 + 0x55) = 0;
      *(undefined1 *)((int)param_1 + 0x149) = 0;
      FUN_4a074bac(param_1,4);
    }
    break;
  case 0xe:
    switchD_4a11cc8c::default(uVar11,s_NPC_fishing__4a072630);
    iVar8 = FUN_4a13fa98(iStack_2c);
    if (iVar8 == 0) goto LAB_4a072c98;
    iVar8 = *(int *)(iVar3 + 0x28);
    if (iVar8 == 8) {
      FUN_4a106238(param_1,0);
    }
    else if (iVar8 == 9) {
      FUN_4a106238(param_1,1);
    }
    else if (iVar8 == 7) {
      FUN_4a106238(param_1,2);
    }
    else if (iVar8 == 6) {
      FUN_4a106238(param_1,3);
    }
    FUN_4a110228(iStack_28,1,iVar3);
    param_1[0x51] = 0x3e;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x54] = -1;
    param_1[0x53] = 1000;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    break;
  case 0xf:
    switchD_4a11cc8c::default(uVar11,s_NPC_repairing__4a072640);
    iVar8 = FUN_4a13fca8(iStack_2c);
    if (iVar8 == 0) goto LAB_4a072c98;
    FUN_4a110228(iStack_28,2,iVar3);
    param_1[0x51] = 0x36;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x53] = 1000;
    param_1[0x54] = -1;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    break;
  case 0x11:
    iVar8 = 5000;
    if (uVar11 != 0) {
      uVar5 = 0x70000;
      if (iVar4 == 0x84) {
        uVar5 = FUN_4a1460a4(param_1);
        uVar5 = FUN_4a144980(uVar5,iVar12);
      }
      FUN_4a0d8c28(iStack_2c,0,uVar5);
    }
    iVar3 = FUN_4a1460d4(iVar3);
    if (iVar3 == 0x11) {
      iVar8 = 0xdac;
    }
    iVar3 = 0x36;
    if (param_1[0x32] == 1) {
      iVar3 = 0x22;
    }
    param_1[0x51] = iVar3;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x54] = -1;
    param_1[0x53] = iVar8;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    uVar1 = 1;
    FUN_4a109e5c(param_1,0x46);
    break;
  case 0x12:
    iVar8 = FUN_4a1460d4(iVar3);
    if (iVar8 == 0x19) {
      if (uVar11 != 0) {
        FUN_4a0d8c28(iStack_2c,3,0xa0000);
      }
      FUN_4a105cf4(iVar3);
      param_1[0x51] = 0x61;
      *(undefined1 *)(param_1 + 0x52) = 1;
      param_1[0x53] = 5000;
      param_1[0x54] = -1;
      *(undefined1 *)(param_1 + 0x55) = 0;
      *(undefined1 *)((int)param_1 + 0x149) = 0;
      FUN_4a074bac(param_1,4);
    }
    else {
      if (iVar8 != 5) {
        if (iVar8 == 4) {
          if ((uVar11 != 0) && (iVar8 = FUN_4a1461c0(param_1,0x400), iVar8 == 0)) {
            FUN_4a0d8c28(iStack_2c,3,0x70000);
          }
          FUN_4a105328(iVar3);
          param_1[0x51] = 99;
          *(undefined1 *)(param_1 + 0x52) = 1;
          param_1[0x54] = -1;
          param_1[0x53] = 0x960;
          *(undefined1 *)(param_1 + 0x55) = 0;
          *(undefined1 *)((int)param_1 + 0x149) = 0;
          FUN_4a074bac(param_1,4);
        }
        else {
          switchD_4a11cc8c::default(0,s_what_are_we_washing_at___4a0729ac);
        }
        break;
      }
      FUN_4a1053a4(iVar3);
      if (uVar11 != 0) {
        uVar5 = FUN_4a145f8c(param_1);
        FUN_4a0d8c28(uVar5,3,0xa0000);
      }
      param_1[0x51] = 0x46;
      *(undefined1 *)(param_1 + 0x52) = 1;
      param_1[0x53] = 8000;
      param_1[0x54] = -1;
      *(undefined1 *)(param_1 + 0x55) = 0;
      *(undefined1 *)((int)param_1 + 0x149) = 0;
      FUN_4a074bac(param_1,4);
    }
    goto LAB_4a072d2c;
  case 0x13:
    if (uVar11 != 0) {
      FUN_4a0d8c28(iStack_2c,2,0x320000);
    }
    if (iVar4 == 0x7c) {
      iVar8 = 0x5b;
    }
    else {
      iVar8 = 0x2d;
    }
    param_1[0x51] = iVar8;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x53] = 2000;
    param_1[0x54] = -1;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    break;
  case 0x14:
  case 0x15:
    uVar5 = FUN_4a145f8c(param_1);
    iVar3 = FUN_4a13fb90();
    iVar9 = param_1[0x35];
    uVar6 = FUN_4a146a9c(param_1);
    iVar9 = FUN_4a0d6f44(uVar5,uVar6,iVar9 == 0x7f);
    if ((iVar8 == 0x14) && (iVar3 + 0x78 <= iVar9)) {
      iVar9 = iVar3 + 0x78;
    }
    iVar8 = FUN_4a146a9c(param_1);
    if (iVar8 == 0) {
      FUN_4a0d7614(uVar5,1);
      FUN_4a0d8c28(uVar5,1,0x10000);
    }
    iVar3 = (iVar9 - iVar3) + iVar3;
    if ((param_1[0x34] == 0) || (iVar8 = FUN_4a1460d4(), iVar8 != 0xd)) {
      iVar8 = FUN_4a1461c0(param_1,0x80000);
      if (iVar8 == 0) {
        iVar8 = 0x1a;
      }
      else {
        iVar8 = 0x19;
      }
    }
    else {
      iVar8 = 0x51;
    }
    param_1[0x51] = iVar8;
    *(char *)(param_1 + 0x52) = (char)(iVar3 >> 0x1f) + '\x01';
    param_1[0x54] = -1;
    param_1[0x53] = iVar3;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 1;
    FUN_4a074bac(param_1,4);
    uVar1 = 1;
    break;
  case 0x16:
    FUN_4a10913c(iVar3);
    FUN_4a071478(param_1);
    goto LAB_4a072d2c;
  case 0x17:
    FUN_4a109944(iVar3);
    FUN_4a071478(param_1);
    goto LAB_4a072d2c;
  case 0x18:
    if (param_1[0x35] == 0x89) {
      FUN_4a107e90(iVar3);
    }
    else if (param_1[0x35] == 0x88) {
      FUN_4a107ed8(iVar3);
    }
    iVar8 = FUN_4a114098(iStack_28,param_1,iVar3);
    if (iVar8 == 0) {
      auStack_40[0] = 0;
      FUN_4a0737a4(param_1,0x6f,iVar3);
    }
    else {
      uVar5 = 0x9b;
      iVar3 = FUN_4a1460d4(iVar8);
      if (iVar3 == 10) {
        uVar5 = 0x9c;
      }
      auStack_40[0] = 0;
      FUN_4a0737a4(param_1,uVar5,iVar8);
    }
    goto LAB_4a072d2c;
  case 0x19:
    iVar8 = FUN_4a110878(iStack_28,param_1,iVar4);
    if (iVar8 == 0) goto LAB_4a072c98;
    param_1[0x38] = iVar8;
    FUN_4a071478(param_1);
    break;
  case 0x1a:
    if (uVar11 != 0) {
      FUN_4a0d8c28(iStack_2c,5,0x30000);
    }
    param_1[0x51] = 0x25;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x53] = 10000;
    param_1[0x54] = -1;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    break;
  case 0x1b:
    if (uVar11 == 0) {
      FUN_4a110aac(auStack_40,iStack_28);
      iVar8 = 0;
      if ((iStack_38 == 2) && (iVar3 = FUN_4a0e3c18(iStack_2c), iVar3 == 0)) {
        iVar3 = FUN_4a146a9c(param_1);
        if (*(int *)(iStack_2c + 0x420) != 0) {
          iVar8 = *(int *)(*(int *)(iStack_2c + 0x420) + 8);
        }
        FUN_4a10ce2c(iStack_28,0xb3f,(int)*(short *)(iVar8 + iVar3 * 2));
      }
      FUN_4a074bac(param_1,9);
      FUN_4a169a1c(auStack_40);
    }
    else {
      FUN_4a074bac(param_1,8);
      FUN_4a113750(iStack_28);
    }
    break;
  case 0x1c:
    FUN_4a116b10(iStack_28,iVar4,iVar12);
    FUN_4a071478(param_1);
    break;
  case 0x1d:
    switchD_4a11cc8c::default(uVar11,s_NPC_looking_for_work__4a0729c8);
    uVar5 = FUN_4a1419b4(iStack_2c,iVar3);
    uVar6 = FUN_4a140354(iStack_2c,uVar5);
    FUN_4a10fe80(iStack_28,uVar5,uVar6);
    FUN_4a071478(param_1);
    break;
  case 0x1e:
    FUN_4a10ce2c(iStack_28,0xb3e);
    FUN_4a071478(param_1);
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
    if (param_1[0x38] == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = FUN_4a1460d4();
    }
    if (iVar8 == 0x20) {
      switchD_4a11cc8c::default(param_1[0x38] != 0,PTR_s_can_t_auto_sit_without_a_chair_4a0729e0);
      if (iVar3 == 0xd) {
        FUN_4a106238(param_1,param_1[0x14] + 2U & 3);
      }
      else if (iVar3 == 6) {
LAB_4a072994:
        iVar8 = 3;
        goto LAB_4a072a5c;
      }
LAB_4a0729a4:
      iVar8 = 1;
    }
    else if (iVar8 == 0x1f) {
      iVar8 = 0;
    }
    else {
      if (iVar8 == 0x21) goto LAB_4a072994;
      if (iVar8 == 0x22) goto LAB_4a0729a4;
      if (iVar8 == 0x23) {
        iVar8 = 2;
      }
      else if (iVar8 == 0x24) {
        iVar8 = 4;
      }
      else if (iVar8 == 0x27) {
        iVar8 = 8;
      }
      else if (iVar8 == 0x25) {
        if (iVar3 == 0xd) {
          iVar8 = 5;
        }
        else {
          iVar8 = 6;
        }
      }
      else if (iVar8 == 0x26) {
        iVar8 = 7;
      }
      else if (iVar8 == 0x28) {
        iVar8 = 9;
      }
      else if (iVar8 == 0x2a) {
        iVar8 = 0xb;
      }
      else if (iVar8 == 0x2b) {
        iVar8 = 0xd;
      }
      else if (iVar8 == 0x2c) {
        iVar8 = 0xe;
      }
      else {
        iVar8 = 10;
      }
    }
LAB_4a072a5c:
    if (param_1[0x32] == iVar8) goto LAB_4a072bd8;
    param_1[0x33] = iVar8;
    FUN_4a074bac(param_1,2);
    break;
  case 0x2d:
    if (uVar11 == 0) goto LAB_4a072bd8;
    iVar8 = FUN_4a146d54(param_1[8]);
    if (iVar8 != 0) {
      FUN_4a1460a4(param_1);
      iVar8 = FUN_4a142ef4();
      if ((iVar8 != 0) && (param_1[0x35] == 0x83)) goto LAB_4a072bd8;
    }
    uVar5 = FUN_4a145f8c(param_1);
    iVar8 = FUN_4a13fd20(uVar5,param_1[0x35]);
    iVar3 = FUN_4a141aa4(uVar5);
    if (iVar3 < iVar8) goto LAB_4a072c98;
    FUN_4a0d585c(uVar5);
    FUN_4a117598(param_1[8],param_1[0x11],param_1[0x13]);
    FUN_4a071478(param_1);
    break;
  case 0x2e:
    if (uVar11 == 0) goto LAB_4a072bd8;
    uVar5 = FUN_4a145f8c(param_1);
    FUN_4a110aac(auStack_40,param_1[8]);
    if (((iStack_38 < 2) && (iVar8 = FUN_4a13fa14(uVar5,0), iVar8 != 4)) &&
       (iVar8 = FUN_4a0e3c18(uVar5), iVar8 == 0)) {
      FUN_4a071ac4(param_1,0);
    }
    else {
      FUN_4a071478(param_1);
    }
    FUN_4a169a1c(auStack_40);
    break;
  case 0x2f:
    if (uVar11 != 0) {
      uVar5 = FUN_4a145f8c(param_1);
      iVar8 = FUN_4a13feec(uVar5,0xc);
      if ((iVar8 != -1) || (iVar8 = FUN_4a13feec(uVar5,0xb), iVar8 != -1)) goto LAB_4a072c98;
    }
LAB_4a072bd8:
    FUN_4a071478(param_1);
    break;
  case 0x30:
    FUN_4a127ce8(iStack_28,iVar3);
    FUN_4a071478(param_1);
    break;
  case 0x31:
    uVar5 = FUN_4a145f8c(param_1);
    iVar3 = param_1[0x39];
    iVar8 = FUN_4a140338(uVar5,iVar3);
    if (iVar8 < 1) goto LAB_4a072c98;
    switchD_4a0de288::default(uVar5,iVar3,0xffffffff);
    FUN_4a109d38(param_1[0x38],iVar3);
    FUN_4a071478(param_1);
    break;
  case 0x32:
    uVar5 = FUN_4a145f8c(param_1);
    iVar8 = FUN_4a140338(uVar5,2);
    if ((iVar8 < 1) || (iVar8 = FUN_4a140338(uVar5,3), iVar8 < 1)) goto LAB_4a072c98;
    switchD_4a0de288::default(uVar5,3,0xffffffff);
    FUN_4a109bbc(param_1[0x38]);
    FUN_4a071478(param_1);
    break;
  case 0x33:
    FUN_4a105ef8(iVar3);
    FUN_4a071478(param_1);
    break;
  case 0x34:
    FUN_4a105c84(iVar3);
    FUN_4a071478(param_1);
    break;
  case 0x35:
    iVar8 = FUN_4a1460d4(iVar3);
    switchD_4a11cc8c::default(iVar8 == 0xb,s_drinking_at_non_coffee_machine_4a072e64);
    FUN_4a108a94(iVar3);
    param_1[0x51] = 1;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x54] = -1;
    param_1[0x53] = 60000;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
LAB_4a072d2c:
    uVar1 = 1;
    break;
  case 0x36:
    if (uVar11 != 0) {
      FUN_4a0d8c28(iStack_2c,2,0xfffb0000);
      FUN_4a0d8c28(iStack_2c,1,0xa0000);
    }
    param_1[0x51] = 0x54;
    *(undefined1 *)(param_1 + 0x52) = 0;
    param_1[0x53] = -1;
    param_1[0x54] = -1;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    break;
  case 0x37:
    if (uVar11 != 0) {
      FUN_4a0d8c28(iStack_2c,5,0x60000);
    }
    FUN_4a10913c(param_1[0x38]);
    param_1[0x51] = 0x59;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x53] = 15000;
    param_1[0x54] = -1;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
  }
  FUN_4a1460a4(param_1);
  iVar8 = FUN_4a142ef4();
  if (iVar8 == 0) {
    uVar1 = 0;
  }
  if (((uVar11 & uVar1) != 0) && (uVar1 = FUN_4a13fb44(iStack_2c,iVar4), (uVar1 & 0x200000) != 0)) {
    FUN_4a11186c(iStack_28,0x1a,param_1);
  }
  iVar3 = FUN_4a1461c0(param_1,2);
  iVar8 = iStack_24;
  if (iVar3 == 0) {
    return;
  }
  FUN_4a1071e0(param_1,4);
  iVar4 = -1;
  iVar3 = -1;
  switch(param_1[0x37]) {
  case 1:
    iVar9 = FUN_4a146a9c(param_1);
    if (iVar9 != 0) {
      iVar3 = 0x936;
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
    FUN_4a071090(param_1,1);
    FUN_4a07171c(param_1);
    break;
  case 0xd:
    iVar3 = 0xb4b;
    uVar5 = FUN_4a1460a4(param_1);
    FUN_4a143170(uVar5,param_1[0x39]);
    break;
  case 0xe:
    iVar3 = 0x974;
    break;
  case 0xf:
    iVar3 = 0x93b;
    break;
  case 0x10:
    iVar3 = 0x939;
    break;
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x37:
    FUN_4a071478(param_1);
    break;
  case 0x19:
    if (param_1[0x35] == 0x9d) {
      iVar3 = 0x95e;
    }
    else {
      iVar3 = 0x94e;
    }
    break;
  case 0x2d:
    iVar3 = 0x94c;
    break;
  case 0x2e:
    iVar3 = 0x966;
    break;
  case 0x2f:
    iVar3 = 0x931;
    iVar4 = 8;
    iVar9 = FUN_4a0fb748(param_1[9]);
    if (iVar9 < 0x32) {
      iVar4 = 0x11;
    }
    break;
  case 0x31:
    iVar3 = 0x93d;
    break;
  case 0x32:
    iVar3 = 0x940;
  }
  iVar9 = FUN_4a146a9c(param_1);
  if ((iVar9 == 0) && (*(int *)(param_1[8] + 0x5fc) != 0)) {
    FUN_4a108d64();
  }
  if (iVar3 == -1) {
    return;
  }
  if (iVar4 != -1) {
    FUN_4a0737a4(param_1,iVar4,0);
    return;
  }
code_r0x4a07171c:
  iStack_24 = iVar8;
  iVar8 = FUN_4a1461c0(param_1,4);
  iStack_28 = FUN_4a145f8c(param_1);
  FUN_4a107f20(param_1,0xc);
  piVar2 = (int *)param_1[0x38];
  iVar3 = param_1[0x35];
  if ((piVar2 == (int *)0x0) || (iVar4 = FUN_4a146b58(piVar2,0x2000), iVar4 == 0)) {
    piVar13 = (int *)0x0;
  }
  else {
    piVar13 = (int *)param_1[0x38];
  }
  uVar1 = FUN_4a146a9c(param_1);
  iVar4 = 1 - uVar1;
  if (1 < uVar1) {
    iVar4 = 0;
  }
  iStack_30 = 0;
  FUN_4a0737a4(param_1,0,0);
  uVar1 = FUN_4a13fb44(iStack_28,iVar3);
  if (iVar8 == 0) {
    if (piVar13 == (int *)0x0 || (uVar1 & 2) == 0) {
      if (iVar3 == 0x99) {
        FUN_4a10e9c8(param_1[8]);
      }
      else if (iVar3 < 0x9a) {
        if (iVar3 == 0x76) {
LAB_4a0718dc:
          FUN_4a110ec4(param_1[8],3);
        }
        else if (iVar3 < 0x77) {
          if (iVar3 == 4) {
            iVar9 = FUN_4a0fb748(param_1[9]);
            if (iVar9 < 5) {
              iStack_30 = 0;
              FUN_4a0737a4(param_1,10,0);
              return;
            }
          }
          else if (iVar3 == 0x70) {
            FUN_4a1278e8(param_1[8],1);
          }
          else if (iVar3 == 0x74) goto LAB_4a0718dc;
        }
        else if ((iVar3 == 0x7e || iVar3 == 0x7f) || iVar3 == 0x80) {
          param_1[0x3f] = param_1[0x3f] & 0xfffffff7;
        }
      }
      else if (iVar3 == 0xa6) {
LAB_4a071940:
        FUN_4a116cf0(param_1[8],piVar2);
      }
      else if (iVar3 < 0xa7) {
        if (iVar3 != 0x9e) {
          if (iVar3 == 0xa2) {
            if (iVar4 == 0) {
              param_1[0x30] = 0;
              uVar5 = FUN_4a146a9c(param_1);
              FUN_4a111218(param_1[8],uVar5);
            }
          }
          else if (iVar3 == 0xa5) goto LAB_4a071940;
        }
      }
      else if (iVar3 == 0xa9) {
        FUN_4a0daefc(iStack_28,0x14);
        FUN_4a0d9d54(iStack_28,0,0x280000);
      }
      else if (iVar3 == 0xab) goto LAB_4a071940;
    }
    else {
      FUN_4a071490(param_1,0);
      FUN_4a071490(piVar13,0);
      iVar9 = (**(code **)(*piVar13 + 0x1c))(piVar13,iVar3,param_1);
      if (iVar9 != 0) {
        iVar9 = FUN_4a12785c(param_1[8],param_1[0x4e]);
        if (iVar9 != 0) {
          *(uint *)(iVar9 + 0xfc) = *(uint *)(iVar9 + 0xfc) & 0xffffffbf;
          *(undefined4 *)(iVar9 + 0x13c) = 0;
          *(undefined4 *)(iVar9 + 0x138) = 0xffffffff;
          *(undefined4 *)(iVar9 + 0x140) = 0;
        }
        param_1[0x3f] = param_1[0x3f] & 0xffffffbf;
        param_1[0x4f] = 0;
        param_1[0x4e] = -1;
        param_1[0x50] = 0;
      }
      if (iVar4 != 0) {
        iStack_2c = FUN_4a146a9c(piVar13);
        if (iVar3 == 0x61) {
          FUN_4a0daefc(iStack_28,0x12);
          FUN_4a0dd6e4(iStack_28,iStack_2c,0x20);
          FUN_4a0dd6e4(iStack_28,iStack_2c,0x800);
          goto LAB_4a071a18;
        }
        if (iVar3 == 0x6e) {
          FUN_4a0dd6e4(iStack_28,iStack_2c,0x100);
          goto LAB_4a071a18;
        }
      }
    }
  }
  if (iVar3 == 0xa3) {
    FUN_4a107f20(param_1,0x10);
    if (iVar8 == 0) {
      FUN_4a1071e0(param_1,0x20);
    }
    else {
      param_1[0x3c] = 0;
      param_1[0x3b] = -1;
    }
  }
LAB_4a071a18:
  if (((piVar2 != (int *)0x0) && (piVar13 == (int *)0x0 && iVar8 == 0)) &&
     ((**(code **)(*piVar2 + 0x1c))(piVar2,iVar3,param_1), iVar4 != 0)) {
    FUN_4a0dbd6c(iStack_28,piVar2[10]);
  }
  if (param_1[0x3b] != -1) {
    iVar8 = (**(code **)(*param_1 + 0x10))(param_1);
    if (iVar8 != 0) {
      iStack_30 = param_1[0x3e];
      iVar8 = param_1[0x3b];
      iVar3 = param_1[0x3c];
      param_1[0x3c] = 0;
      param_1[0x3b] = -1;
      FUN_4a0737a4(param_1,iVar8,iVar3,param_1[0x3d]);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a071a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  return;
}



// Address: 4a076020

void FUN_4a076020(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_34 [20];
  
  FUN_4a108d90(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  iVar1 = FUN_4a106fe0(param_6);
  param_1[0x31] = iVar1;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = -1;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = -1;
  param_1[0x43] = param_1[0x11];
  param_1[0x44] = param_1[0x13];
  iVar1 = FUN_4a16be24(auStack_34,0);
  iVar5 = *(int *)(iVar1 + 8);
  piVar4 = *(int **)(iVar1 + 0xc);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))(piVar4);
  }
  (**(code **)(param_1[0x45] + 0x1c))(param_1 + 0x45);
  param_1[0x47] = iVar5;
  param_1[0x48] = (int)piVar4;
  FUN_4a16bef4(auStack_34);
  param_1[0x4a] = 0;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = -1;
  param_1[0x4f] = 0;
  param_1[0x50] = -1;
  param_1[0x51] = -1;
  *(undefined1 *)(param_1 + 0x52) = 1;
  param_1[0x53] = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  param_1[0x56] = -1;
  FUN_4a1084ac(param_1,0);
  param_1[0x2e] = 1;
  param_1[0x2d] = -1;
  uVar2 = FUN_4a145f8c(param_1);
  iVar1 = FUN_4a146ea4(param_1[8]);
  if (iVar1 == 0) {
    uVar3 = FUN_4a107058(param_1,0);
    FUN_4a0caeb4(uVar3,param_7);
    iVar1 = FUN_4a141abc(uVar2,param_7);
    if (iVar1 == 0) {
      FUN_4a07331c(param_1,1);
    }
    else {
      FUN_4a07331c(param_1,0);
    }
  }
  else {
    uVar3 = FUN_4a107058(param_1,0);
    FUN_4a0caf08(uVar3,param_7);
    FUN_4a07331c(param_1,2);
  }
  if (param_7 == 0) {
    uVar3 = FUN_4a107058(param_1,2);
    FUN_4a0ca898(uVar3,0xa9);
    iVar1 = 0;
    do {
      iVar5 = FUN_4a141a80(uVar2,iVar1);
      if (iVar5 != -1) {
        switch(iVar5) {
        case 4:
        case 5:
        case 7:
          FUN_4a1071e0(param_1,0x1000);
          break;
        case 6:
          FUN_4a1071e0(param_1,0x800);
          break;
        case 9:
          FUN_4a1071e0(param_1,0x400);
          iVar5 = FUN_4a146ea4(param_1[8]);
          if (iVar5 == 0) {
            iVar5 = FUN_4a107058(param_1,1);
            FUN_4a0ca898(iVar5,0xb);
            FUN_4a06f95c(*(undefined4 *)(iVar5 + 0x34),0xfa,0x14);
          }
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 6);
    iVar1 = FUN_4a146d54(param_1[8]);
    if (iVar1 != 0) {
      FUN_4a1460a4(param_1);
      iVar1 = FUN_4a142ef4();
      if (iVar1 == 0) {
        FUN_4a109934(param_1,2);
      }
    }
  }
  iVar1 = FUN_4a146cd8(param_1);
  if (iVar1 != -1) {
    uVar2 = FUN_4a1460a4(param_1);
    FUN_4a0f7058(uVar2,iVar1);
    FUN_4a0bb4e4();
    (**(code **)(*param_1 + 0x28))(param_1);
  }
  FUN_4a074bac(param_1,1);
  return;
}



// Address: 4a076320

/* WARNING: Removing unreachable block (ram,0x4a074c60) */
/* WARNING: Removing unreachable block (ram,0x4a06f998) */
/* WARNING: Removing unreachable block (ram,0x4a06f994) */
/* WARNING: Removing unreachable block (ram,0x4a06013c) */
/* WARNING: Removing unreachable block (ram,0x4a07753c) */
/* WARNING: Removing unreachable block (ram,0x4a071240) */
/* WARNING: Removing unreachable block (ram,0x4a06f9a0) */
/* WARNING: Removing unreachable block (ram,0x4a06fa48) */
/* WARNING: Removing unreachable block (ram,0x4a06fa58) */
/* WARNING: Removing unreachable block (ram,0x4a06fa60) */
/* WARNING: Removing unreachable block (ram,0x4a06fa64) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff0 : 0x4a06fa34 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * FUN_4a076320(int *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int *piVar20;
  short *psVar21;
  undefined4 uVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar26;
  bool bVar27;
  ulonglong uVar28;
  int iStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  int *piStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined4 local_60;
  int iStack_5c;
  int *piStack_58;
  int iStack_54;
  int iStack_50;
  int local_4c;
  int local_48;
  int *local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  int *piStack_2c;
  
  if (param_1[0x30] < 3000000) {
    param_1[0x30] = param_1[0x30] + param_2;
  }
  if (param_1[0x4e] == -1) {
    iVar6 = param_1[0x50];
    bVar26 = -1 < iVar6;
    bVar27 = iVar6 == 0;
    if (bVar26) {
      iVar6 = iVar6 + param_2;
      param_1[0x50] = iVar6;
      bVar27 = iVar6 == 20000;
    }
    if (!bVar27 && (bVar26 && 19999 < iVar6)) {
      param_1[0x50] = -1;
    }
  }
  else {
    iVar6 = param_1[0x4f];
    param_1[0x4f] = iVar6 + param_2;
    if (20000 < iVar6 + param_2) {
      iVar6 = FUN_4a12785c(param_1[8]);
      if (iVar6 != 0) {
        *(undefined4 *)(iVar6 + 0x13c) = 0;
        *(uint *)(iVar6 + 0xfc) = *(uint *)(iVar6 + 0xfc) & 0xffffffbf;
        *(undefined4 *)(iVar6 + 0x138) = 0xffffffff;
        *(undefined4 *)(iVar6 + 0x140) = 0;
      }
      param_1[0x3f] = param_1[0x3f] & 0xffffffbf;
      param_1[0x4f] = 0;
      param_1[0x4e] = -1;
      param_1[0x50] = 0;
    }
  }
  iVar6 = param_1[0x31];
  iVar7 = FUN_4a106fe0(param_1[0x14]);
  iVar8 = FUN_4a1461c0(param_1,0x1000000);
  if (iVar8 == 0) {
    uVar22 = 0xf0000;
  }
  else {
    uVar22 = 0x230000;
  }
  iVar9 = FUN_4a0d4aa0(iVar6,iVar7);
  iVar8 = -iVar9;
  iVar11 = iVar9;
  if (iVar9 <= iVar8) {
    iVar11 = iVar8;
  }
  if (iVar9 != iVar8 && iVar9 * 2 < 0 == SBORROW4(iVar9,iVar8)) {
    iVar11 = iVar9;
  }
  uVar10 = FUN_4a0d4b28(iVar11,0xa666);
  uVar22 = FUN_4a0d4b28(uVar22,uVar10);
  iVar8 = FUN_4a0d4b28(uVar22,param_2 << 6);
  if ((iVar7 < -0x5a0000) && (0x5a0000 < iVar6)) {
LAB_4a076468:
    iVar6 = FUN_4a0d4a38(iVar8 + iVar6);
  }
  else if ((iVar7 < 0x5a0001) || (-0x5a0001 < iVar6)) {
    if (0 < iVar9) goto LAB_4a076468;
    if (iVar9 < 0) goto LAB_4a07647c;
  }
  else {
LAB_4a07647c:
    iVar6 = FUN_4a0d4a38(iVar6 - iVar8);
  }
  uVar22 = FUN_4a0d4aa0(iVar6,iVar7);
  iVar8 = FUN_4a0d4bb8(iVar9);
  iVar11 = FUN_4a0d4bb8(uVar22);
  if (iVar8 != iVar11) {
    iVar6 = iVar7;
  }
  param_1[0x31] = iVar6;
  uVar22 = FUN_4a1460b0(param_1,0);
  FUN_4a06000c(uVar22,param_2);
  switch((int *)param_1[0x2f]) {
  default:
    return (int *)param_1[0x2f];
  case (int *)0x1:
    (**(code **)(*param_1 + 0x18))(param_1);
    param_1[0x40] = param_1[0x40] + param_2;
    if (param_1[0x3b] != -1) {
      FUN_4a0737a4(param_1,param_1[0x3b],param_1[0x3c],param_1[0x3d]);
      param_1[0x3b] = -1;
      param_1[0x3c] = 0;
      return (int *)0xffffffff;
    }
    if (param_1[10] == 0) {
      if (3000 < param_1[0x30]) {
        uVar22 = FUN_4a145f8c(param_1);
        iVar6 = FUN_4a13feec(uVar22,10);
        if (iVar6 != -1) {
          piVar12 = (int *)FUN_4a0737a4(param_1,3,0);
          return piVar12;
        }
      }
      if ((0xdac < param_1[0x30]) && (param_1[0x32] == 0)) {
        FUN_4a145f8c(param_1);
        iVar7 = FUN_4a13f9c0();
        iVar8 = FUN_4a0fb748(param_1[9]);
        uVar22 = FUN_4a145f8c(param_1);
        iVar11 = FUN_4a13feec(uVar22,1);
        bVar27 = SCARRY4(iVar11,1);
        iVar6 = iVar11 + 1;
        if (iVar11 != -1) {
          bVar27 = SBORROW4(iVar8,0x1e);
          iVar6 = iVar8 + -0x1e;
        }
        if (iVar6 < 0 == bVar27) {
          uVar22 = FUN_4a145f8c(param_1);
          iVar11 = FUN_4a13feec(uVar22,2);
          bVar27 = SCARRY4(iVar11,1);
          iVar6 = iVar11 + 1;
          if (iVar11 != -1) {
            bVar27 = SBORROW4(iVar8,0x3c);
            iVar6 = iVar8 + -0x3c;
          }
          if (iVar6 < 0 == bVar27) {
            if (0x4b0000 < iVar7) {
              uVar22 = 5;
              goto LAB_4a073500;
            }
            if (iVar7 < -0x320000) {
              uVar22 = 6;
              goto LAB_4a073500;
            }
            goto LAB_4a07351c;
          }
        }
        uVar22 = 7;
LAB_4a073500:
        piVar12 = (int *)FUN_4a0737a4(param_1,uVar22,0);
        return piVar12;
      }
    }
LAB_4a07351c:
    if (1000 < param_1[0x30]) {
      uVar3 = param_1[0x32];
      iVar7 = param_1[0x34];
      iVar6 = 1 - uVar3;
      if (1 < uVar3) {
        iVar6 = 0;
      }
      iVar8 = FUN_4a124860(param_1[8],0x1f);
      if ((iVar8 != 0) && (iVar11 = FUN_4a1461c0(iVar8,0x40), iVar11 != 0)) {
        iVar11 = FUN_4a146cd8(iVar8);
        iVar9 = FUN_4a146cd8(param_1);
        if ((iVar11 == iVar9) &&
           (((uVar3 == 1 && iVar7 != 0 && (iVar7 = FUN_4a145f98(iVar8,iVar7), iVar7 != 0)) ||
            ((iVar6 != 0 && (iVar6 = FUN_4a145f98(iVar8,param_1), iVar6 != 0)))))) {
          iVar6 = FUN_4a146a9c(param_1);
          if (iVar6 == 0) {
            uVar22 = FUN_4a145f8c(param_1);
            FUN_4a0daefc(uVar22,0x23);
            iVar6 = (**(code **)(*param_1 + 0x10))(param_1);
            if (iVar6 == 0) {
              return (int *)0x0;
            }
          }
          uVar22 = 0x12;
          if (uVar3 == 1) {
            uVar22 = 0x14;
            iVar6 = FUN_4a1461c0(iVar8,0x8000);
            if (iVar6 != 0) {
              uVar22 = 0x13;
            }
          }
          piVar12 = (int *)FUN_4a0737a4(param_1,uVar22,iVar8);
          return piVar12;
        }
      }
    }
    if ((((param_1[0x32] == 0) && (5000 < param_1[0x30])) &&
        (iVar6 = FUN_4a124860(param_1[8],0x1a), iVar6 != 0)) &&
       (iVar7 = FUN_4a1461c0(iVar6,0x40), iVar7 != 0)) {
      uVar22 = FUN_4a1460a4(param_1);
      iVar8 = FUN_4a144cb0(uVar22,*(undefined4 *)(iVar6 + 0x44));
      iVar11 = FUN_4a144cb8(uVar22,*(undefined4 *)(iVar6 + 0x4c));
      iVar9 = FUN_4a1458ac(uVar22,iVar8,iVar11);
      iVar6 = FUN_4a144cb0(uVar22,param_1[0x11]);
      iVar7 = FUN_4a144cb8(uVar22,param_1[0x13]);
      iVar23 = FUN_4a1458ac(uVar22,iVar6,iVar7);
      if (iVar9 == iVar23) {
        iVar6 = iVar6 - iVar8;
        if (iVar6 <= -iVar6) {
          iVar6 = -iVar6;
        }
        iVar7 = iVar7 - iVar11;
        if (iVar7 <= -iVar7) {
          iVar7 = -iVar7;
        }
        if (iVar6 + iVar7 < 5) {
          piVar12 = (int *)FUN_4a0737a4(param_1,0x15,0);
          return piVar12;
        }
      }
    }
    if (param_1[0x40] < 0x9c5) {
      return (int *)param_1[0x40];
    }
    iVar6 = FUN_4a14621c(param_1);
    if (iVar6 == 0) {
      return (int *)0x0;
    }
    param_1[0x40] = 0;
    iVar6 = param_1[9];
    uVar3 = param_1[0x3f];
    if ((uVar3 & 0x202) != 0) {
      uVar22 = FUN_4a11f758(param_1[8],4);
      iStack_50 = 0;
      piVar12 = (int *)FUN_4a0737a4(param_1,0xaa,uVar22);
      return piVar12;
    }
    piVar12 = (int *)FUN_4a146e94(param_1[8]);
    if (piVar12 == param_1) {
                    /* WARNING: Could not recover jumptable at 0x4a070c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar12 = (int *)(*UNRECOVERED_JUMPTABLE_00)();
      return piVar12;
    }
    if ((param_1[10] == 0) && (iVar7 = FUN_4a146e94(param_1[8]), iVar7 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x4a070c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar12 = (int *)(*UNRECOVERED_JUMPTABLE_00)();
      return piVar12;
    }
    piVar12 = (int *)param_1[0x50];
    if ((piVar12 != (int *)0xffffffff) ||
       (piVar12 = (int *)param_1[0x3f], ((uint)piVar12 & 0x40) == 0)) goto LAB_4a070d14;
    iVar7 = FUN_4a146a9c(param_1);
    if (iVar7 == 0) {
      piVar12 = (int *)0x0;
      if (*(char *)(iVar6 + 0x497) == '\0') goto LAB_4a070d14;
      iVar7 = FUN_4a146d8c(param_1[8]);
      piVar12 = (int *)0x0;
      if (iVar7 == 0) goto LAB_4a070d14;
    }
    iVar7 = FUN_4a146a9c(param_1);
    piVar12 = (int *)0x0;
    if (iVar7 != 0) {
      piVar12 = (int *)param_1[0x3f];
    }
    if (iVar7 == 0 || ((uint)piVar12 & 8) == 0) {
      iVar7 = FUN_4a072f58(param_1);
      piVar12 = (int *)0x0;
      if (iVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a070d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        piVar12 = (int *)(*UNRECOVERED_JUMPTABLE_00)();
        return piVar12;
      }
    }
LAB_4a070d14:
    if ((uVar3 & 0xbc) == 0) {
      return piVar12;
    }
    uVar16 = FUN_4a0fe640(iVar6,0,4);
    puVar1 = PTR_DAT_4a070f6c;
    psVar21 = (short *)0x0;
    if ((uVar3 & 8) != 0) {
      piVar12 = (int *)FUN_4a0c6bc0(&local_4c);
      puVar2 = PTR_PTR_4a070f70;
      piVar12[2] = 0;
      piVar12[3] = 0;
      *piVar12 = (int)puVar2;
      thunk_FUN_4a161570(0x18);
      puVar13 = (undefined4 *)FUN_4a0c0628();
      puVar2 = PTR_PTR_4a070f74;
      *puVar13 = PTR_PTR_4a070f74;
      puVar13[3] = 4;
      puVar13[4] = 5;
      puVar13[2] = puVar1;
      *(undefined1 *)(puVar13 + 5) = 0;
      if (puVar13 != (undefined4 *)0x0) {
        (**(code **)(puVar2 + 0xc))(puVar13);
      }
      (**(code **)(*piVar12 + 0x1c))(piVar12);
      piVar12[2] = 5;
      piVar12[3] = (int)puVar13;
      iVar6 = FUN_4a16bdcc(&local_38,&local_4c);
      uVar17 = *(uint *)(iVar6 + 8);
      uVar16 = 0;
      if ((int)uVar17 < 1) {
        uVar25 = 0;
      }
      else {
        uVar25 = uVar17 & 1;
      }
      if (uVar25 != 0) {
        do {
          if (*(int *)(iVar6 + 0xc) == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(*(int *)(iVar6 + 0xc) + 8);
          }
          if (*(int *)(iVar7 + uVar16 * 4) == 8) goto LAB_4a070e70;
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)uVar25);
      }
      if ((int)uVar25 < (int)uVar17) {
        iVar6 = *(int *)(iVar6 + 0xc);
        do {
          if (iVar6 == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(iVar6 + 8);
          }
          uVar16 = uVar25;
          if (*(int *)(iVar7 + uVar25 * 4) == 8) goto LAB_4a070e70;
          if (iVar6 == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(iVar6 + 8);
          }
          if (*(int *)(iVar7 + (uVar25 + 1) * 4) == 8) {
            uVar16 = uVar25 + 1;
            goto LAB_4a070e70;
          }
          uVar25 = uVar25 + 2;
        } while ((int)uVar25 < (int)uVar17);
      }
      uVar16 = 0xffffffff;
LAB_4a070e70:
      FUN_4a16bef4(&local_38);
      FUN_4a16bef4(&local_4c);
    }
    iVar6 = DAT_4a070f78;
    iVar7 = 0;
    do {
      uVar17 = *(uint *)(puVar1 + uVar16 * 4);
      if ((uVar17 == 4) && (iVar8 = FUN_4a146a9c(param_1), iVar8 == 0)) {
        FUN_4a145f8c(param_1);
        piVar12 = (int *)FUN_4a141aa4();
        if (9 < (int)piVar12) goto LAB_4a070eb8;
      }
      else {
LAB_4a070eb8:
        if (((uVar3 & uVar17) != 0) && (iVar8 = FUN_4a11b1d8(param_1[8],uVar17), iVar8 != 0)) {
          uVar22 = FUN_4a1460a4(param_1);
          uVar10 = *(undefined4 *)(iVar8 + 0x28);
          iVar6 = FUN_4a143ac8(uVar22,uVar10);
          if (*(int *)(iVar6 + 0x5c) != 0) {
            psVar21 = *(short **)(*(int *)(iVar6 + 0x5c) + 8);
          }
          iStack_50 = 0;
          FUN_4a0737a4(param_1,(int)*psVar21,iVar8);
          iVar6 = FUN_4a143ac8(uVar22,uVar10);
          piVar12 = (int *)(param_1[0x3f] & ~(int)*(short *)(iVar6 + 0x18));
          param_1[0x3f] = (int)piVar12;
          return piVar12;
        }
        piVar12 = (int *)(uVar16 + 1);
        iVar8 = (int)((ulonglong)((longlong)iVar6 * (longlong)(int)piVar12) >> 0x20);
        uVar16 = ((iVar8 >> 1) - (iVar8 >> 0x1f)) * -5 + (int)piVar12;
      }
      iVar7 = iVar7 + 1;
      if (4 < iVar7) {
        return piVar12;
      }
    } while( true );
  case (int *)0x2:
    (**(code **)(*param_1 + 0x18))(param_1,param_2);
    iVar6 = FUN_4a146c0c(param_1);
    iVar7 = FUN_4a06f860(*(undefined4 *)(iVar6 + 0x34));
    if (((param_1[0x2e] == 0x5d) && (iVar8 = FUN_4a1461c0(param_1,0x400000), iVar8 == 0)) &&
       (999 < iVar7)) {
      FUN_4a1071e0(param_1,0x400000);
      uVar22 = *(undefined4 *)(*(int *)(iVar6 + 0x34) + 0xc);
      if (param_1[0x32] == 0xc) {
        uVar10 = FUN_4a146a9c(param_1);
        FUN_4a0cb118(iVar6,uVar10);
      }
      else {
        uVar10 = FUN_4a146a9c(param_1);
        FUN_4a0caeb4(iVar6,uVar10);
      }
      FUN_4a06f95c(*(undefined4 *)(iVar6 + 0x34),uVar22,0x10);
      FUN_4a06f87c(*(undefined4 *)(iVar6 + 0x34),iVar7);
      (**(code **)(*param_1 + 0x28))(param_1);
    }
    if (((param_1[0x2e] == 0x61) && (iVar6 = FUN_4a1461c0(param_1,0x800000), iVar6 != 0)) &&
       (iVar6 = FUN_4a14610c(param_1[0x34]), iVar6 == 0)) {
      FUN_4a109f30(param_1[0x34]);
      FUN_4a107f20(param_1,0x80);
      FUN_4a074248(param_1,0x62);
      param_1[0x32] = 0xc;
      return (int *)0xc;
    }
    piVar12 = (int *)FUN_4a14610c(param_1);
    if (piVar12 != (int *)0x0) {
      return piVar12;
    }
    if (param_1[0x32] == 1) {
      iVar6 = *(int *)(param_1[0x34] + 0x50);
      uVar17 = 0;
      uVar16 = (iVar6 - param_1[0x14]) + 4U & 3;
      uVar3 = 0;
      if (uVar16 != 0) {
        uVar17 = (uint)(uVar16 == 1);
        if (uVar16 == 1) {
          uVar3 = 0xffffffff;
        }
        else if ((uVar16 != 2) && (uVar16 == 3)) {
          uVar17 = 1;
          uVar3 = uVar17;
        }
      }
      iVar7 = FUN_4a107de8(uVar17,uVar3,iVar6);
      FUN_4a107e20(uVar17,uVar3,iVar6);
      FUN_4a070f84(param_1,param_1[0x11] + iVar7 * 0x200000,param_1[0x12]);
      iVar6 = FUN_4a106fe0(param_1[0x14]);
      param_1[0x31] = iVar6;
    }
    iVar6 = FUN_4a1461c0(param_1,0x800000);
    if (iVar6 != 0) {
      if (param_1[0x32] == 0xe) {
        FUN_4a107f20(param_1,0x800080);
        FUN_4a105d0c(param_1[0x38]);
        uVar22 = FUN_4a1460a4();
        piVar12 = (int *)FUN_4a0f1a04(uVar22,0x60);
        if ((int *)param_1[0x2e] == piVar12) {
          return piVar12;
        }
        param_1[0x2e] = (int)piVar12;
        uVar22 = FUN_4a1460a4(param_1);
        uVar22 = FUN_4a144e00(uVar22,param_1[0x2d],piVar12);
        FUN_4a109ed4(param_1,uVar22);
        uVar10 = 0;
        uVar22 = 0xffffffff;
        bVar27 = false;
        if (piVar12 == (int *)0x41) {
          uVar22 = 0xaf;
          uVar10 = 0xf7;
          goto LAB_4a07434c;
        }
        if ((int)piVar12 < 0x42) {
          if (piVar12 == (int *)0x26) {
            uVar22 = 0xae;
            uVar10 = 0xdb;
            goto LAB_4a07434c;
          }
          if ((int)piVar12 < 0x27) {
            if (piVar12 == (int *)0x22) {
              uVar22 = 0xab;
            }
            else if (piVar12 == (int *)&DAT_00000024) {
              uVar22 = 0xae;
              uVar10 = 0xd9;
            }
            else if (piVar12 == (int *)&DAT_00000025) {
              uVar22 = 0xae;
              uVar10 = 0xda;
            }
            goto LAB_4a07434c;
          }
          if (piVar12 != (int *)0x2d) {
            if (piVar12 == (int *)0x39) {
              uVar22 = 0xac;
              uVar10 = 0xdd;
            }
            goto LAB_4a07434c;
          }
        }
        else if (piVar12 != (int *)0x5a) {
          if ((int)piVar12 < 0x5b) {
            if (piVar12 == (int *)&DAT_0000004c) {
              uVar22 = 0xae;
              uVar10 = 0xdc;
            }
            else if (piVar12 == (int *)0x54) {
              uVar22 = 0xaa;
              uVar10 = 0xde;
            }
            goto LAB_4a07434c;
          }
          if (piVar12 != (int *)0x5b && piVar12 != (int *)0x5c) goto LAB_4a07434c;
        }
        bVar27 = true;
LAB_4a07434c:
        FUN_4a1078a4(param_1,uVar22);
        FUN_4a107e58(param_1,uVar10);
        if (bVar27) {
          piVar12 = (int *)FUN_4a1460b0(param_1,0);
          if (*piVar12 == 0) {
            iVar6 = FUN_4a099c5c();
            if (piVar12[1] < iVar6) {
              if (piVar12[1] < 0) {
                iVar6 = FUN_4a099c5c(*piVar12);
                piVar12[1] = iVar6 + -1;
              }
            }
            else {
              piVar12[1] = 0;
            }
          }
          else {
            *piVar12 = 0;
            if ((piVar12[3] & 8U) == 0) {
              piVar12[1] = 0;
            }
            else {
              iVar6 = FUN_4a099c5c(0);
              piVar12[1] = iVar6 + -1;
            }
            piVar12[2] = 0;
          }
          piVar12[3] = 7;
          return (int *)&DAT_00000007;
        }
        piVar12 = (int *)FUN_4a1460b0(param_1,0);
        if (*piVar12 == 0) {
          piVar12 = (int *)FUN_4a1460b0(param_1,0);
          piVar12[3] = piVar12[3] & 0xfffffffd;
          return piVar12;
        }
                    /* WARNING: Could not recover jumptable at 0x4a074394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        piVar12 = (int *)(*UNRECOVERED_JUMPTABLE_00)();
        return piVar12;
      }
      if (param_1[0x32] == 0xc) {
        FUN_4a107f20(param_1,0x800080);
        FUN_4a074248(param_1,0x5f);
        iVar7 = param_1[0x34];
        *(uint *)(iVar7 + 0x38) = *(uint *)(iVar7 + 0x38) & 0xffffff7f;
        uVar3 = *(uint *)(iVar7 + 0x38);
        piVar12 = (int *)0x0;
        *(uint *)(iVar7 + 0x38) = uVar3 & 0xffbfffff;
        iVar6 = *(int *)(iVar7 + 0xa0);
        if (iVar6 < 1) {
          iVar7 = 0;
        }
        else {
          if (*(int *)(iVar7 + 0xa4) != 0) {
            piVar12 = *(int **)(*(int *)(iVar7 + 0xa4) + 8);
          }
          iVar7 = *piVar12;
        }
        piVar12 = *(int **)(iVar7 + 0x34);
        uVar16 = piVar12[9];
        bVar27 = (uVar16 & 1) != 0;
        iVar7 = 0;
        if (bVar27) {
          iVar6 = piVar12[2];
          iVar7 = *(int *)(iVar6 + 8);
        }
        if (!bVar27 || iVar7 < 0x108) {
          return piVar12;
        }
        piVar12[3] = 0x107;
        iVar7 = 0;
        if (*(int *)(iVar6 + 0xc) == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(*(int *)(iVar6 + 0xc) + 8);
        }
        if (*(int *)(iVar6 + 0x20) != 0) {
          iVar7 = *(int *)(*(int *)(iVar6 + 0x20) + 8);
        }
        iVar6 = piVar12[4] * (int)*(short *)(iVar8 + 0x20e);
        iVar7 = (int)*(short *)(iVar7 + 0x20e) * piVar12[4];
        piVar12[6] = iVar6;
        piVar12[7] = iVar7;
        if ((uVar16 & 8) == 0) {
          piVar12[5] = iVar6;
        }
        else {
          piVar12[5] = iVar7;
        }
        uVar17 = 3;
        if ((uVar3 & 0x80) != 0) {
          uVar17 = 7;
        }
        piVar12[9] = uVar17 | uVar16 & 8;
        piVar20 = (int *)piVar12[10];
        if (piVar20 == (int *)0x0) {
          return piVar12;
        }
        iVar7 = piVar12[5];
        piVar12 = (int *)(**(code **)(*piVar20 + 0x30))(piVar20);
        iVar6 = 0;
        if (piVar20[2] != 0) {
          iVar6 = *(int *)(piVar20[2] + 0x10);
        }
        while (iVar6 = iVar6 + -1, -1 < iVar6) {
          iVar8 = *(int *)(*(int *)(piVar20[2] + 0x14) + iVar6 * 4);
          if ((*(uint *)(*(int *)(iVar8 + 0x2c) + 0x30) & 0x60000000) != 0) {
            uVar22 = FUN_4a1395b4(iVar8,iVar7);
            (**(code **)(*piVar20 + 0x1c))(piVar20,*(undefined4 *)(iVar8 + 0x30),uVar22);
          }
        }
        (**(code **)(*piVar20 + 0x24))(piVar20,iVar7);
        return piVar12;
      }
    }
    if (param_1[0x32] != param_1[0x33]) {
      iVar7 = param_1[8];
      iVar6 = param_1[0x2f];
      if (iVar6 == 2) {
        if ((param_1[0x34] != 0) && (param_1[0x32] == 0)) {
          param_1[0x34] = 0;
        }
      }
      else if (iVar6 == 3) {
        iVar6 = FUN_4a146ea4(iVar7);
        if (iVar6 != 0) {
          FUN_4a07331c(param_1,2);
          piVar12 = (int *)FUN_4a146d74(iVar7);
          if (piVar12 == param_1) {
            FUN_4a115d34(iVar7,0);
          }
        }
      }
      else if (iVar6 == 8) {
        FUN_4a107f20(param_1,0x2000);
      }
      FUN_4a1071e0(param_1,0x80);
      param_1[0x2f] = 2;
      param_1[0x30] = 0;
                    /* WARNING: Could not recover jumptable at 0x4a074c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar12 = (int *)(*(code *)PTR_caseD_2_4a074c6c)();
      return piVar12;
    }
    break;
  case (int *)0x3:
    piStack_2c = param_1;
    local_30 = FUN_4a1460a4();
    iVar23 = param_1[0x11];
    iVar11 = param_1[0x43];
    iVar9 = param_1[0x44];
    iVar6 = param_1[0x13];
    local_34 = FUN_4a144cb0(local_30,iVar23);
    local_38 = FUN_4a144cb8(local_30,iVar6);
    local_3c = FUN_4a142f2c(local_30,local_34,local_38);
    iVar7 = FUN_4a0d4bb8(iVar11 - iVar23);
    iVar8 = FUN_4a0d4bb8(iVar9 - iVar6);
    local_40 = iVar7 << 0x10;
    local_44 = (int *)(iVar8 << 0x10);
    if (iVar7 != 0 && iVar8 != 0) {
      local_40 = FUN_4a0d4b28(local_40,0xb505);
      local_44 = (int *)FUN_4a0d4b28(local_44,0xb505);
    }
    iVar24 = *(int *)PTR_DAT_4a074980;
    local_48 = *(int *)PTR_DAT_4a074984;
    iVar4 = FUN_4a1461c0(param_1,0x800);
    if (iVar4 == 0) {
      iVar4 = FUN_4a1461c0(param_1,0x1000);
      if (iVar4 != 0) {
        iVar24 = *(int *)PTR_DAT_4a074990;
        local_48 = *(int *)PTR_DAT_4a074994;
      }
    }
    else {
      iVar24 = *(int *)PTR_DAT_4a074988;
      local_48 = *(int *)PTR_DAT_4a07498c;
    }
    iVar5 = FUN_4a146ea4(param_1[8]);
    iVar4 = local_48;
    if (iVar5 != 0) {
      iVar24 = FUN_4a1461c0(param_1,0x1000000);
      if ((iVar24 != 0) && (uVar3 = FUN_4a142f2c(local_30,local_34,local_38), (uVar3 & 0x40) != 0))
      {
        if (iVar8 == 0) {
          iVar24 = FUN_4a1457cc(local_30,local_34);
          if (iVar7 < 0) {
            if (iVar24 < iVar23) {
LAB_4a074558:
              uVar3 = FUN_4a142f2c(local_30,local_34 - iVar7,local_38);
              goto LAB_4a0745c4;
            }
          }
          else if ((iVar7 < 1) || (iVar23 < iVar24)) goto LAB_4a074558;
          uVar3 = FUN_4a142f2c(local_30,local_34 + iVar7,local_38);
        }
        else {
          iVar24 = FUN_4a1457d8(local_30,local_38);
          if (iVar8 < 0) {
            if (iVar24 < iVar6) {
LAB_4a0745b0:
              uVar3 = FUN_4a142f2c(local_30,local_34,local_38 - iVar8);
              goto LAB_4a0745c4;
            }
          }
          else if (iVar6 < iVar24) goto LAB_4a0745b0;
          uVar3 = FUN_4a142f2c(local_30,local_34,local_38 + iVar8);
        }
LAB_4a0745c4:
        if ((uVar3 & 0x40) != 0) {
          iVar24 = *(int *)PTR_DAT_4a074998;
          FUN_4a07331c(param_1,3);
          goto LAB_4a0745f4;
        }
      }
      FUN_4a07331c(param_1,2);
      iVar24 = iVar4;
    }
LAB_4a0745f4:
    local_4c = iVar24 * param_2;
    iVar24 = FUN_4a0d4b28(local_40,local_4c);
    iVar24 = iVar24 + iVar23;
    iVar23 = FUN_4a0d4b28(local_44,local_4c);
    iVar6 = iVar6 + iVar23;
    if (iVar7 < 1) {
      if (iVar7 < 0 && iVar24 < iVar11) goto LAB_4a07463c;
    }
    else if (iVar11 < iVar24) {
LAB_4a07463c:
      iVar24 = iVar11;
    }
    if (iVar8 < 1) {
      if (iVar8 < 0 && iVar6 < iVar9) goto LAB_4a07465c;
    }
    else if (iVar9 < iVar6) {
LAB_4a07465c:
      iVar6 = iVar9;
    }
    local_60 = FUN_4a107d1c(iVar7,iVar8);
    FUN_4a070f84(param_1,iVar24,param_1[0x12]);
    iVar7 = FUN_4a146ea4(param_1[8]);
    if (iVar7 == 0) {
      uVar22 = FUN_4a144cb0(local_30,iVar24);
      uVar10 = FUN_4a144cb8(local_30,iVar6);
      uVar3 = FUN_4a142f2c(local_30,uVar22,uVar10);
      if ((local_3c & 0x20) != (uVar3 & 0x20)) {
        bVar27 = false;
        bVar26 = (local_3c & 0x20) != 0;
        if ((!bVar26) && ((uVar3 & 0x10) != 0)) {
          bVar27 = true;
        }
        iVar7 = FUN_4a1253d0(param_1[8],0xf,param_1[0x11]);
        if (iVar7 != 0) {
          if ((bVar27) && (iVar8 = FUN_4a1461c0(iVar7,0x40), iVar8 == 0)) {
            FUN_4a1099a0(iVar7,param_1);
          }
          if ((bVar26) && (iVar8 = FUN_4a1461c0(iVar7,0x40), iVar8 != 0)) {
            FUN_4a109ba4(iVar7);
          }
        }
      }
    }
    (**(code **)(*param_1 + 0x18))(param_1,param_2);
    if (iVar24 != iVar11 || iVar6 != iVar9) {
                    /* WARNING: Could not recover jumptable at 0x4a07477c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar12 = (int *)(*UNRECOVERED_JUMPTABLE_00)();
      return piVar12;
    }
    iVar6 = FUN_4a1461c0(param_1,2);
    if (iVar6 == 0) {
      iVar6 = FUN_4a14621c();
      if ((iVar6 == 0) && (param_1[10] != 0)) {
        bVar27 = true;
        goto code_r0x4a071ac4;
      }
      iVar6 = param_1[0x38];
      if (iVar6 == 0) {
LAB_4a074808:
        uVar3 = FUN_4a071490(param_1);
        uVar3 = uVar3 ^ 1;
        iVar6 = param_1[0x4b];
        FUN_4a16bdcc(&local_60,param_1 + 0x45);
        iVar7 = 0;
        if (iStack_54 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(iStack_54 + 8);
        }
        if (iVar8 == 0) {
          uVar16 = 0xffffffff;
        }
        else {
          uVar16 = ((int)piStack_58 >> 1) - param_1[0x4a];
        }
        if ((char)iVar6 == '\0' && uVar3 == 0) {
          iVar6 = 1;
        }
        else {
          iVar6 = 2;
        }
        if (iVar6 < (int)uVar16) {
          iVar6 = FUN_4a1461c0(param_1,0x3000000);
          if (((iVar6 == 0) && (param_1[0x38] != 0)) && (((uVar16 & 3) == 0 || ((int)uVar16 < 4))))
          {
            if (uVar3 == 0) {
              FUN_4a071490(param_1,0);
              FUN_4a071490(param_1,param_1[0x38]);
            }
            FUN_4a076e50(param_1,param_1[0x38],0);
          }
          else {
            iVar6 = param_1[0x4a] + 1;
            param_1[0x4a] = iVar6;
            if (iStack_54 == 0) {
              iVar8 = 0;
            }
            else {
              iVar8 = *(int *)(iStack_54 + 8);
            }
            param_1[0x43] = *(int *)(iVar8 + iVar6 * 8);
            if (iStack_54 != 0) {
              iVar7 = *(int *)(iStack_54 + 8);
            }
            param_1[0x44] = *(int *)(iVar7 + (iVar6 * 2 + 1) * 4);
            FUN_4a072e84(param_1);
          }
        }
        else if (uVar3 == 0) {
          iVar6 = FUN_4a1461c0(param_1,0x2000000);
          if (iVar6 == 0) {
            FUN_4a071090(param_1,0);
          }
          else {
            FUN_4a076e50(param_1,param_1[0x38],param_1[0x39],param_1[0x3a]);
          }
        }
        else {
          FUN_4a071e74(param_1,10);
        }
        piVar12 = (int *)FUN_4a16bef4(&local_60);
        return piVar12;
      }
      iVar8 = *(int *)(iVar6 + 0x44);
      iVar7 = param_1[0x4c];
      bVar27 = iVar8 == iVar7;
      if (bVar27) {
        iVar8 = *(int *)(iVar6 + 0x4c);
        iVar7 = param_1[0x4d];
      }
      if (bVar27 && iVar8 == iVar7) goto LAB_4a074808;
      uVar10 = 0;
      uVar18 = 0;
      uVar22 = FUN_4a1460a4();
      piStack_2c = (int *)param_1[0x11];
      local_30 = param_1[0x13];
      local_34 = 0;
      if (iVar6 == 0) {
        iVar6 = FUN_4a146a9c(param_1);
        if (iVar6 == 0) {
          uVar19 = *(undefined4 *)(param_1[8] + 0x5fc);
          uVar15 = FUN_4a144cb0(uVar22,0);
          uVar14 = FUN_4a144cb8(uVar22,0);
          uVar15 = FUN_4a1457cc(uVar22,uVar15);
          uVar14 = FUN_4a1457d8(uVar22,uVar14);
          FUN_4a109130(uVar19,uVar15,0,uVar14);
          FUN_4a10918c(uVar19);
        }
      }
      else {
        local_34 = FUN_4a071490(param_1,iVar6);
        local_34 = local_34 ^ 1;
        iVar7 = param_1[0x42];
        if ((iVar7 == -1) && (iVar7 = FUN_4a146640(iVar6,param_1[0x11],param_1[0x13]), iVar7 == -1))
        {
          iVar6 = FUN_4a146a9c(param_1);
          piVar12 = (int *)FUN_4a071ac4(param_1,iVar6 != 0);
          return piVar12;
        }
        FUN_4a16bdcc(&uStack_78,PTR_DAT_4a0776d4);
        iVar8 = 0;
        uVar10 = FUN_4a16bdcc(&iStack_64,&uStack_78);
        FUN_4a14637c(iVar6,uVar10,iVar7);
        FUN_4a16bef4(&iStack_64);
        if (iStack_6c != 0) {
          puVar13 = *(undefined4 **)(iStack_6c + 8);
        }
        else {
          puVar13 = (undefined4 *)0x0;
        }
        uVar10 = *puVar13;
        if (iStack_6c != 0) {
          iVar8 = *(int *)(iStack_6c + 8);
        }
        uVar18 = *(undefined4 *)(iVar8 + 4);
        param_1[0x4c] = *(int *)(iVar6 + 0x44);
        param_1[0x4d] = *(int *)(iVar6 + 0x4c);
        FUN_4a16bef4(&uStack_78);
      }
      uVar10 = FUN_4a144cb0(uVar22,uVar10);
      iVar7 = FUN_4a1457cc(uVar22,uVar10);
      uVar10 = FUN_4a144cb8(uVar22,uVar18);
      iVar8 = FUN_4a1457d8(uVar22,uVar10);
      iVar6 = iVar8;
      if (param_1[0x11] == iVar7) {
        iVar6 = param_1[0x13];
      }
      if ((param_1[0x11] != iVar7 || iVar6 != iVar8) && (param_1[0x32] != 0)) {
        param_1[0x36] = param_1[0x36] + -1;
        piVar12 = (int *)FUN_4a071e74(param_1,0x1f);
        return piVar12;
      }
      iVar6 = FUN_4a146d54(param_1[8]);
      if ((((iVar6 != 0) && (iVar6 = FUN_4a142ef4(uVar22), iVar6 != 0)) &&
          (iVar6 = FUN_4a146a9c(param_1), iVar6 == 0)) &&
         ((param_1[0x35] != 0xa3 && (iVar6 = FUN_4a1461c0(param_1,0x20), iVar6 == 0)))) {
        uVar10 = FUN_4a145f8c(param_1);
        iVar6 = FUN_4a141248(uVar10,0,1);
        if (iVar6 == 0) {
          iVar6 = FUN_4a144cb0(uVar22,param_1[0x11]);
          uVar10 = FUN_4a144cb8(uVar22,param_1[0x13]);
          uVar18 = FUN_4a144cb0(uVar22,iVar7);
          uVar15 = FUN_4a144cb8(uVar22,iVar8);
          uVar3 = FUN_4a142f2c(uVar22,iVar6,uVar10);
          if ((uVar3 & 0x10) == 0) {
            uVar28 = FUN_4a142f2c(uVar22,uVar18,uVar15);
            iVar11 = (int)(uVar28 >> 0x20);
            if ((uVar28 & 0x10) != 0) {
              bVar27 = param_1[0x35] == 0x6f;
              if (bVar27) {
                iVar11 = param_1[0x38];
              }
              param_1[0x3b] = param_1[0x35];
              param_1[0x3c] = param_1[0x38];
              if (!bVar27 || iVar11 != 0) {
                iVar6 = 0;
              }
              param_1[0x3d] = param_1[0x39];
              if (bVar27 && iVar11 == 0) {
                iVar6 = 1;
              }
              param_1[0x3e] = param_1[0x3a];
              FUN_4a1071e0(param_1,0x10);
              uVar22 = FUN_4a1107d8(param_1[8]);
              FUN_4a0737a4(param_1,0xa3,uVar22);
              if ((int *)param_1[0x35] == (int *)0xa3) {
                piVar12 = (int *)0xa3;
                if (iVar6 != 0) {
                  piVar12 = (int *)FUN_4a10918c(*(undefined4 *)(param_1[8] + 0x5fc));
                }
                return piVar12;
              }
              return (int *)param_1[0x35];
            }
          }
        }
      }
      FUN_4a107f20(param_1,0x20);
      local_38 = 0;
      iVar6 = FUN_4a146ea4(param_1[8]);
      if (iVar6 == 0) {
        uVar10 = 0x10;
        FUN_4a110aac(&iStack_64,param_1[8]);
        if (1 < iStack_5c) {
          FUN_4a0f3f94(uVar22);
          iVar6 = 0;
          if (0 < iStack_5c) {
            do {
              iVar11 = 0;
              if (piStack_58 != (int *)0x0) {
                iVar11 = piStack_58[2];
              }
              piVar12 = *(int **)(iVar11 + iVar6 * 4);
              if (piVar12 != param_1) {
                uVar10 = FUN_4a144cb0(uVar22,piVar12[0x11]);
                uVar18 = FUN_4a144cb8(uVar22,piVar12[0x13]);
                FUN_4a0f1aa4(uVar22,uVar10,uVar18);
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < iStack_5c);
          }
          uVar10 = 0x11;
        }
        FUN_4a169a1c(&iStack_64);
      }
      else {
        iVar6 = FUN_4a1461c0(param_1,0x2000000);
        if (iVar6 == 0) {
          iVar6 = FUN_4a1354f4(param_1);
          if (iVar6 == 0) {
LAB_4a077244:
            local_38 = 0;
            bVar27 = false;
          }
          else {
            iVar6 = (int)piStack_2c - iVar7;
            if (iVar6 <= -iVar6) {
              iVar6 = -iVar6;
            }
            iVar11 = local_30 - iVar8;
            if (iVar11 <= -iVar11) {
              iVar11 = -iVar11;
            }
            if (iVar11 + iVar6 < 0x1000001) goto LAB_4a077244;
            local_38 = 1;
            bVar27 = true;
          }
          if (bVar27) {
            uVar10 = 2;
          }
          else {
            uVar10 = 8;
          }
        }
        else {
          uVar10 = 6;
        }
      }
      local_3c = FUN_4a1461c0(param_1,0x2000000);
      FUN_4a107f20(param_1,0x3000000);
      puVar13 = (undefined4 *)FUN_4a0c6bc0(&iStack_50);
      puVar1 = PTR_PTR_4a0776d8;
      puVar13[2] = 0;
      puVar13[3] = 0;
      *puVar13 = puVar1;
      iStack_7c = iVar8;
      uStack_78 = uVar10;
      if ((local_38 & ~local_3c) == 0) {
        FUN_4a0f7080(&iStack_64,uVar22,piStack_2c,local_30);
        if (piStack_58 != (int *)0x0) {
          (**(code **)(*piStack_58 + 0xc))(piStack_58);
        }
        (**(code **)(iStack_50 + 0x1c))(&iStack_50);
        piVar12 = &iStack_64;
        local_44 = piStack_58;
        local_48 = iStack_5c;
LAB_4a077508:
        FUN_4a16bef4(piVar12);
      }
      else {
        FUN_4a0f7080(&iStack_64,uVar22,piStack_2c,local_30);
        if (piStack_58 != (int *)0x0) {
          (**(code **)(*piStack_58 + 0xc))(piStack_58);
        }
        (**(code **)(iStack_50 + 0x1c))(&iStack_50);
        local_44 = piStack_58;
        local_48 = iStack_5c;
        FUN_4a16bef4(&iStack_64);
        iVar11 = 0;
        iVar6 = local_48 >> 1;
        iStack_68 = -1;
        if (0 < iVar6) {
          do {
            if (local_44 == (int *)0x0) {
              iVar9 = 0;
            }
            else {
              iVar9 = local_44[2];
            }
            uVar10 = FUN_4a144cb0(uVar22,*(undefined4 *)(iVar9 + iVar11 * 8));
            if (local_44 == (int *)0x0) {
              iVar9 = 0;
            }
            else {
              iVar9 = local_44[2];
            }
            uVar18 = FUN_4a144cb8(uVar22,*(undefined4 *)(iVar9 + (iVar11 * 2 + 1) * 4));
            uVar3 = FUN_4a142f2c(uVar22,uVar10,uVar18);
            iVar9 = iVar11;
          } while (((uVar3 & 0x40) == 0) && (iVar11 = iVar11 + 1, iVar9 = iStack_68, iVar11 < iVar6)
                  );
          iStack_68 = iVar9;
          if (iStack_68 != -1) {
            FUN_4a16be24(&iStack_7c,(iStack_68 + 1) * 2);
            FUN_4a0c740c(&iStack_50,0,&iStack_7c);
            if (piStack_70 != (int *)0x0) {
              (**(code **)(*piStack_70 + 0xc))(piStack_70);
            }
            (**(code **)(iStack_50 + 0x1c))(&iStack_50);
            local_44 = piStack_70;
            local_48 = iStack_74;
            FUN_4a1071e0(param_1,0x2000000);
            piVar12 = &iStack_7c;
            goto LAB_4a077508;
          }
        }
      }
      piVar12 = local_44;
      if ((local_34 != 0) && (local_48 == 2)) {
        FUN_4a071e74(param_1,10);
        goto LAB_4a0776c0;
      }
      if (local_48 < 2) {
        iVar6 = (int)piStack_2c - iVar7;
        iVar11 = local_30 - iVar8;
        if (iVar6 <= -iVar6) {
          iVar6 = -iVar6;
        }
        if (iVar11 <= -iVar11) {
          iVar11 = -iVar11;
        }
        iVar9 = FUN_4a144a5c(uVar22,iVar7,iVar8);
        if ((iVar9 == 0) || (0x200000 < iVar6 + iVar11)) {
          FUN_4a071ac4(param_1,0);
          goto LAB_4a0776c0;
        }
        if (iVar6 + iVar11 == 0) {
          FUN_4a071478(param_1);
          goto LAB_4a0776c0;
        }
        if (local_44 != (int *)0x0) {
          (**(code **)(*local_44 + 0xc))(local_44);
        }
        (**(code **)(param_1[0x45] + 0x1c))(param_1 + 0x45);
        param_1[0x47] = local_48;
        param_1[0x48] = (int)local_44;
        param_1[0x4a] = 0;
        *(undefined1 *)(param_1 + 0x4b) = 0;
        param_1[0x44] = iVar8;
        param_1[0x43] = iVar7;
      }
      else {
        if (local_44 != (int *)0x0) {
          (**(code **)(*local_44 + 0xc))(local_44);
        }
        (**(code **)(param_1[0x45] + 0x1c))(param_1 + 0x45);
        param_1[0x47] = local_48;
        param_1[0x48] = (int)piVar12;
        param_1[0x4a] = 0;
        *(undefined1 *)(param_1 + 0x4b) = 0;
        iVar6 = 0;
        if (local_44 == (int *)0x0) {
          piVar12 = (int *)0x0;
        }
        else {
          piVar12 = (int *)local_44[2];
        }
        param_1[0x43] = *piVar12;
        if (local_44 != (int *)0x0) {
          iVar6 = local_44[2];
        }
        param_1[0x44] = *(int *)(iVar6 + 4);
        FUN_4a072e84(param_1);
        if (local_3c != 0) {
          FUN_4a1071e0(param_1,0x1000000);
        }
      }
      FUN_4a074bac(param_1,3);
LAB_4a0776c0:
      piVar12 = (int *)FUN_4a16bef4(&iStack_50);
      return piVar12;
    }
    goto code_r0x4a07171c;
  case (int *)0x4:
    uVar3 = FUN_4a14610c();
    (**(code **)(*param_1 + 0x18))(param_1,param_2);
    iVar6 = FUN_4a146be8(param_1,0);
    iVar6 = *(int *)(iVar6 + 0x34);
    FUN_4a075058(param_1);
    if ((char)param_1[0x52] == '\0') {
      uVar16 = ~(*(uint *)(iVar6 + 0x24) >> 1) & 1;
    }
    else {
      if (*(char *)((int)param_1 + 0x149) == '\0') {
        iVar7 = FUN_4a146d40(param_1[8]);
        iVar6 = param_1[0x53];
        if (iVar7 == 0) {
          iVar6 = iVar6 - param_2;
          param_1[0x53] = iVar6;
        }
        if (0 < iVar6) goto LAB_4a074a48;
      }
      else {
        FUN_4a145f8c(param_1);
        iVar6 = FUN_4a13fb90();
        if (iVar6 < param_1[0x53]) {
LAB_4a074a48:
          uVar16 = 0;
          goto LAB_4a074a4c;
        }
      }
      uVar16 = 1;
    }
LAB_4a074a4c:
    if ((param_1[0x37] == 0x35) && (iVar6 = FUN_4a1465b8(param_1[0x38]), iVar6 != 0)) {
      FUN_4a071090(param_1,0);
    }
    if (param_1[0x35] == 9) {
      if ((uVar16 & uVar3) != 0) {
        FUN_4a113750(param_1[8]);
      }
LAB_4a074b18:
      piVar12 = (int *)FUN_4a146a9c(param_1);
      bVar27 = piVar12 == (int *)0x0;
      if (bVar27) {
        piVar12 = (int *)param_1[0x37];
      }
      if (!bVar27 || piVar12 != (int *)&DAT_00000015) {
        return piVar12;
      }
      if (param_1[0x30] < 0xfa1) {
        return (int *)param_1[0x30];
      }
      if (*(char *)((int)param_1 + 0x149) != '\0') {
        FUN_4a145f8c(param_1);
        iVar6 = FUN_4a13fb90();
        if (param_1[0x53] - iVar6 < 0x3d) {
                    /* WARNING: Could not recover jumptable at 0x4a074b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          piVar12 = (int *)(*UNRECOVERED_JUMPTABLE_00)();
          return piVar12;
        }
        iVar6 = FUN_4a14621c(param_1);
        if (iVar6 != 0) {
          piVar12 = (int *)FUN_4a146d7c(param_1[8]);
          if (piVar12 != (int *)0x0) {
            return piVar12;
          }
          iVar6 = param_1[8];
          if (*(char *)(iVar6 + 0x632) != '\0') {
            *(undefined1 *)(iVar6 + 0x632) = 0;
            *(undefined1 *)(iVar6 + 0x633) = 0;
            *(undefined2 *)(iVar6 + 0x634) = 0xffff;
            *(undefined4 *)(iVar6 + 0x674) = 0;
            *(undefined4 *)(iVar6 + 0x2b4) = 0;
            FUN_4a115d8c(iVar6,0);
          }
          *(undefined4 *)(iVar6 + 0x298) = *(undefined4 *)(*(int *)(iVar6 + 0x5f8) + 0xd4);
          *(undefined4 *)(iVar6 + 0x294) = 1;
          piVar12 = (int *)FUN_4a0d58d0(*(undefined4 *)(iVar6 + 0x24));
          *(undefined4 *)(iVar6 + 0x29c) = 0;
          return piVar12;
        }
                    /* WARNING: Could not recover jumptable at 0x4a074b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        piVar12 = (int *)(*UNRECOVERED_JUMPTABLE_00)();
        return piVar12;
      }
      return (int *)0x0;
    }
    if (param_1[0x35] == 10) {
      if (((uVar16 & uVar3) != 0) && (iVar6 = FUN_4a1461c0(param_1,0x400000), iVar6 == 0)) {
        FUN_4a1071e0(param_1,0x400000);
        uVar22 = thunk_FUN_4a161570(0x14);
        uVar22 = FUN_4a0c707c(uVar22,PTR_s_bladder_4a074ba8);
        uVar10 = FUN_4a0941ec();
        FUN_4a094d04(uVar10,uVar22);
        FUN_4a10ce54(param_1[8],0xb64);
      }
      goto LAB_4a074b18;
    }
    if (uVar16 == 0) goto LAB_4a074b18;
    param_1[0x51] = -1;
    param_1[0x53] = -1;
    *(undefined1 *)(param_1 + 0x52) = 1;
    break;
  case (int *)0x5:
    (**(code **)(*param_1 + 0x18))(param_1,param_2);
    if ((param_1[0x38] == 0) || (iVar6 = FUN_4a146b58(param_1[0x38],0x2000), iVar6 == 0)) {
      piVar12 = (int *)0x0;
    }
    else {
      piVar12 = (int *)param_1[0x38];
    }
    if (param_1[0x35] == 99) {
LAB_4a0756f4:
      if (param_1[0x30] < 0xfa1) {
        iVar6 = (**(code **)(*piVar12 + 0x10))(piVar12);
        if (iVar6 != 0) {
          FUN_4a0737a4(piVar12,2,param_1);
        }
        if ((int *)piVar12[0x2f] != (int *)&DAT_00000007) {
          return (int *)piVar12[0x2f];
        }
        piVar20 = (int *)0x0;
        if (piVar12[0x38] != 0) {
          iVar6 = FUN_4a146b58(piVar12[0x38],0x2000);
          piVar20 = (int *)0x0;
          if (iVar6 != 0) {
            piVar20 = (int *)piVar12[0x38];
          }
        }
        if (piVar20 != param_1) {
          return piVar20;
        }
        break;
      }
    }
    else {
      iVar6 = piVar12[0x11] - param_1[0x11];
      iVar7 = piVar12[0x13] - param_1[0x13];
      if (iVar6 <= -iVar6) {
        iVar6 = -iVar6;
      }
      if (iVar7 <= -iVar7) {
        iVar7 = -iVar7;
      }
      if (iVar6 + iVar7 < 0x200001) goto LAB_4a0756f4;
    }
    bVar27 = false;
    goto code_r0x4a071ac4;
  case (int *)0x6:
    (**(code **)(*param_1 + 0x18))(param_1,param_2);
    if (4000 < param_1[0x30]) {
      bVar27 = false;
      goto code_r0x4a071ac4;
    }
    iVar6 = FUN_4a071490(param_1,param_1[0x38]);
    if (iVar6 == 0) {
      return (int *)0x0;
    }
    iVar6 = 1;
    goto code_r0x4a071e74;
  case (int *)0x7:
    (**(code **)(*param_1 + 0x18))(param_1,param_2);
    if ((param_1[0x38] == 0) || (iVar6 = FUN_4a146b58(param_1[0x38],0x2000), iVar6 == 0)) {
      piVar12 = (int *)0x0;
    }
    else {
      piVar12 = (int *)param_1[0x38];
    }
    if ((piVar12 != (int *)0x0) && (iVar6 = (**(code **)(*piVar12 + 0x10))(piVar12), iVar6 == 0)) {
      iVar6 = FUN_4a1461c0(piVar12,0x400);
      if (iVar6 == 0) {
        return (int *)0x0;
      }
      uVar22 = FUN_4a145f8c(param_1);
      uVar10 = FUN_4a146a9c(param_1);
      iVar6 = FUN_4a13fc4c(uVar22,uVar10,0xc);
      if (iVar6 != -1) {
        iVar6 = FUN_4a1461c0(param_1,0x40000);
        if (iVar6 == 0) {
          uVar10 = FUN_4a146a9c(param_1);
          FUN_4a0d99a4(uVar22,uVar10,0xc);
          param_1[0xe] = param_1[0xe] | 0x40000;
          return param_1;
        }
                    /* WARNING: Could not recover jumptable at 0x4a073e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        piVar12 = (int *)(*UNRECOVERED_JUMPTABLE_00)();
        return piVar12;
      }
      FUN_4a076d54(piVar12);
      iVar6 = FUN_4a12785c(param_1[8],param_1[0x4e]);
      if (iVar6 != 0) {
        *(undefined4 *)(iVar6 + 0x13c) = 0;
        *(undefined4 *)(iVar6 + 0x138) = 0xffffffff;
        *(uint *)(iVar6 + 0xfc) = *(uint *)(iVar6 + 0xfc) & 0xffffffbf;
        *(undefined4 *)(iVar6 + 0x140) = 0;
      }
      uVar18 = 0;
      param_1[0x3f] = param_1[0x3f] & 0xffffffbf;
      param_1[0x4f] = 0;
      param_1[0x4e] = -1;
      param_1[0x50] = 0;
      uVar10 = FUN_4a146a9c(param_1);
      iVar6 = FUN_4a13fc4c(uVar22,uVar10,0xd);
      if (iVar6 != -1) {
        uVar18 = 0x22;
        uVar10 = FUN_4a146a9c(param_1);
        FUN_4a0d99a4(uVar22,uVar10,0xd);
        uVar10 = FUN_4a146a9c(param_1);
        FUN_4a0d7794(uVar22,uVar10,0xffffffff);
      }
      piVar12 = (int *)FUN_4a0737a4(param_1,0x11,piVar12,uVar18);
      return piVar12;
    }
    break;
  case (int *)0x8:
    if (param_1[0x35] == 0xaa) {
      return (int *)0xaa;
    }
    if (*(char *)((int)param_1 + 0x149) == '\0') {
      piVar12 = (int *)param_1[0x53];
      if ((int)piVar12 < 1) {
        return piVar12;
      }
      piVar12 = (int *)((int)piVar12 - param_2);
      param_1[0x53] = (int)piVar12;
      if (0 < (int)piVar12) {
        return piVar12;
      }
    }
    else {
      FUN_4a145f8c(param_1);
      iVar6 = FUN_4a13fb90();
      if (iVar6 < param_1[0x53]) {
                    /* WARNING: Could not recover jumptable at 0x4a0765ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        piVar12 = (int *)(*UNRECOVERED_JUMPTABLE_00)();
        return piVar12;
      }
    }
  }
  uVar22 = FUN_4a145f8c();
  FUN_4a1460a4(param_1);
  iVar6 = FUN_4a142ef4();
  iVar7 = FUN_4a1406f4(uVar22,param_1[0x35]);
  uVar3 = FUN_4a146a9c(param_1);
  iVar11 = 1 - uVar3;
  iVar8 = param_1[0x37];
  iVar9 = param_1[0x38];
  if (1 < uVar3) {
    iVar11 = 0;
  }
  if (iVar8 == 0x13) {
    if ((iVar11 != 0) && (FUN_4a0d8c28(uVar22,2,0), iVar6 != 0)) {
      FUN_4a0daefc(uVar22,0x27);
      FUN_4a0de344(uVar22,iVar6,4);
    }
  }
  else if (iVar8 < 0x14) {
    if (iVar8 == 8) {
LAB_4a07110c:
      param_1[0x51] = -1;
      *(undefined1 *)(param_1 + 0x52) = 0;
      param_1[0x53] = -1;
      param_1[0x54] = -1;
      *(undefined1 *)(param_1 + 0x55) = 0;
      *(undefined1 *)((int)param_1 + 0x149) = 1;
      uVar10 = FUN_4a1460b0(param_1,0);
      FUN_4a060130(uVar10,0);
      if (iVar11 != 0) {
        iVar6 = param_1[0x35];
        if (iVar6 == 0x9f) {
          FUN_4a0d8c28(uVar22,3,0);
        }
        else if (((iVar6 == 0x12 || iVar6 == 0x13) || iVar6 == 0x14) || iVar6 == 0x15) {
LAB_4a071410:
          FUN_4a0d8c28(uVar22,5,0);
        }
      }
    }
    else if (iVar8 < 9) {
      if (iVar8 == 1) {
        iVar6 = 1;
        if (iVar11 != 0) {
          iVar6 = *(int *)(param_1[8] + 0x5fc);
        }
        if (iVar11 != 0 && iVar6 != 0) {
          FUN_4a108d64();
        }
      }
      else if (iVar8 == 6 || iVar8 == 7) goto LAB_4a07110c;
    }
    else if (iVar8 == 0xd) {
      iVar6 = FUN_4a1460d4(iVar9);
      switchD_4a11cc8c::default(iVar6 == 0x1b,s_cooking_at_non_stove__4a071460);
      FUN_4a109b9c(iVar9);
    }
    else if (iVar8 == 0x11) {
      if (iVar11 != 0) {
        FUN_4a0d8c28(uVar22,0);
      }
    }
    else if (iVar8 == 0x12) {
      if (iVar11 != 0) {
        FUN_4a0d8c28(uVar22,3,0);
      }
      if (iVar9 != 0) {
        iVar8 = FUN_4a1460d4(iVar9);
        if (iVar8 == 0x19) {
          if (iVar11 != 0 && iVar6 != 0) {
            FUN_4a0daefc(uVar22,0x26);
            FUN_4a0de344(uVar22,iVar6,8);
          }
        }
        else if (iVar8 == 4) {
          FUN_4a109998(iVar9);
        }
        else if (iVar8 == 5) {
          FUN_4a105a6c(iVar9);
        }
      }
    }
  }
  else if (iVar8 == 0x35) {
    if (iVar9 != 0) {
      FUN_4a108be0(iVar9);
    }
  }
  else if (iVar8 < 0x36) {
    if (iVar8 == 0x14 || iVar8 == 0x15) {
      if (iVar11 != 0) {
        FUN_4a0d8c28(uVar22,1,0);
        FUN_4a0d7614(uVar22,0);
        if ((param_1[0x37] == 0x15) && (iVar6 != 0)) {
          FUN_4a0daefc(uVar22,0x25);
          uVar10 = FUN_4a1081c4(iVar9);
          FUN_4a0de344(uVar22,iVar6,uVar10);
        }
      }
      iVar6 = FUN_4a1461c0(param_1,0x400);
      if (iVar6 != 0) {
        FUN_4a1071e0(param_1,0x400);
        iVar6 = FUN_4a146ea4(param_1[8]);
        if (iVar6 == 0) {
          iVar6 = FUN_4a107058(param_1,1);
          FUN_4a0ca898(iVar6,0xb);
          FUN_4a06f95c(*(undefined4 *)(iVar6 + 0x34),0xfa,0x14);
        }
      }
    }
    else if ((iVar8 == 0x1a) && (iVar11 != 0)) goto LAB_4a071410;
  }
  else if (iVar8 == 0x36) {
    if (iVar11 != 0) {
      FUN_4a0d8c28(uVar22,2,0);
      FUN_4a0d8c28(uVar22,1,0);
    }
  }
  else if (iVar8 == 0x37) {
    if (iVar11 != 0) {
      FUN_4a0d8c28(uVar22,5,0);
    }
    FUN_4a109944(iVar9);
  }
  param_1[0x37] = 0;
  if (iVar7 + -1 <= param_1[0x36]) goto code_r0x4a07171c;
  param_1[0x36] = param_1[0x36] + 1;
  iVar6 = FUN_4a13fb58(uVar22,param_1[0x35]);
code_r0x4a071e74:
  iVar7 = param_1[8];
  piStack_2c = (int *)FUN_4a145f8c(param_1);
  param_1[0x37] = iVar6;
  iVar8 = param_1[0x38];
  iVar11 = param_1[0x35];
  if ((iVar8 == 0) || (iVar9 = FUN_4a146b58(iVar8,0x2000), iVar9 == 0)) {
    iVar9 = 0;
  }
  else {
    iVar9 = param_1[0x38];
  }
  iVar23 = param_1[0x39];
  iVar24 = param_1[0x3a];
  uVar3 = FUN_4a146a9c(param_1);
  uVar16 = 1 - uVar3;
  if (1 < uVar3) {
    uVar16 = 0;
  }
  if (uVar16 != 0 && iVar9 != 0) {
    uVar22 = FUN_4a146a9c(iVar9);
    FUN_4a0d56bc(piStack_2c,uVar22);
  }
  if (((iVar8 != 0) && (iVar9 == 0)) && (iVar6 != 1)) {
    uVar22 = FUN_4a1461c0(param_1,0x800);
    FUN_4a1071f0(iVar8,0x800,uVar22);
    uVar22 = FUN_4a1461c0(param_1,0x1000);
    FUN_4a1071f0(iVar8,0x1000,uVar22);
  }
  uVar3 = 0;
  switch(iVar6) {
  case 0:
    iVar6 = param_1[0x32];
    if (((((iVar6 == 9 || iVar6 == 0xb) || iVar6 == 0xd) || iVar6 == 0xc) || iVar6 == 0xe) ||
        iVar6 == 8) {
      param_1[0x36] = param_1[0x36] + -1;
      FUN_4a071e74(param_1,0x1f);
    }
    else if (iVar6 == 4) {
      param_1[0x36] = param_1[0x36] + -1;
      FUN_4a071e74(param_1,0x22);
    }
    else {
      FUN_4a074bac(param_1,1);
    }
    break;
  case 1:
    FUN_4a076e50(param_1,iVar8,iVar23);
    break;
  case 2:
  case 3:
    if (iVar8 == 0) {
      FUN_4a106248(param_1,iVar23 - param_1[0x11],iVar24 - param_1[0x13]);
    }
    else {
      FUN_4a1077b8(param_1,iVar8);
    }
    if (iVar6 == 3) {
LAB_4a0720fc:
      FUN_4a106238(param_1,param_1[0x14] + 2U & 3);
    }
    goto LAB_4a072bd8;
  case 4:
  case 5:
    FUN_4a106238(param_1,*(undefined4 *)(iVar8 + 0x50));
    if (iVar6 == 5) goto LAB_4a0720fc;
    goto LAB_4a072bd8;
  case 6:
  case 7:
  case 8:
    FUN_4a075388(param_1,iVar11,iVar6);
    goto LAB_4a072d2c;
  case 9:
    FUN_4a074bac(param_1,5);
    break;
  case 10:
    FUN_4a074bac(param_1,6);
    break;
  case 0xb:
    iVar6 = 0;
    if (param_1[0x38] != 0) {
      iVar8 = FUN_4a146b58(param_1[0x38],0x2000);
      iVar6 = 0;
      if (iVar8 != 0) {
        iVar6 = param_1[0x38];
      }
    }
    FUN_4a076d54(iVar6);
    FUN_4a071478(param_1);
    break;
  case 0xc:
    FUN_4a074bac(param_1,7);
    break;
  case 0xd:
    switchD_4a11cc8c::default(uVar16,s_NPC_cooking__4a072608);
    iVar6 = FUN_4a0d5b78(piStack_2c,iVar23);
    if (iVar6 == 0) {
LAB_4a072c98:
      FUN_4a071ac4(param_1,0);
    }
    else {
      FUN_4a110228(iVar7,0,iVar8);
      iVar6 = FUN_4a1460d4(iVar8);
      switchD_4a11cc8c::default(iVar6 == 0x1b,s_cooking_at_non_stove__4a072618);
      FUN_4a105774(iVar8);
      param_1[0x51] = 0x36;
      *(undefined1 *)(param_1 + 0x52) = 1;
      param_1[0x54] = -1;
      param_1[0x53] = 1000;
      *(undefined1 *)(param_1 + 0x55) = 0;
      *(undefined1 *)((int)param_1 + 0x149) = 0;
      FUN_4a074bac(param_1,4);
    }
    break;
  case 0xe:
    switchD_4a11cc8c::default(uVar16,s_NPC_fishing__4a072630);
    iVar6 = FUN_4a13fa98(piStack_2c);
    if (iVar6 == 0) goto LAB_4a072c98;
    iVar6 = *(int *)(iVar8 + 0x28);
    if (iVar6 == 8) {
      FUN_4a106238(param_1,0);
    }
    else if (iVar6 == 9) {
      FUN_4a106238(param_1,1);
    }
    else if (iVar6 == 7) {
      FUN_4a106238(param_1,2);
    }
    else if (iVar6 == 6) {
      FUN_4a106238(param_1,3);
    }
    FUN_4a110228(iVar7,1,iVar8);
    param_1[0x51] = 0x3e;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x54] = -1;
    param_1[0x53] = 1000;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    break;
  case 0xf:
    switchD_4a11cc8c::default(uVar16,s_NPC_repairing__4a072640);
    iVar6 = FUN_4a13fca8(piStack_2c);
    if (iVar6 == 0) goto LAB_4a072c98;
    FUN_4a110228(iVar7,2,iVar8);
    param_1[0x51] = 0x36;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x53] = 1000;
    param_1[0x54] = -1;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    break;
  case 0x11:
    iVar6 = 5000;
    if (uVar16 != 0) {
      uVar22 = 0x70000;
      if (iVar11 == 0x84) {
        uVar22 = FUN_4a1460a4(param_1);
        uVar22 = FUN_4a144980(uVar22,iVar23);
      }
      FUN_4a0d8c28(piStack_2c,0,uVar22);
    }
    iVar8 = FUN_4a1460d4(iVar8);
    if (iVar8 == 0x11) {
      iVar6 = 0xdac;
    }
    iVar8 = 0x36;
    if (param_1[0x32] == 1) {
      iVar8 = 0x22;
    }
    param_1[0x51] = iVar8;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x54] = -1;
    param_1[0x53] = iVar6;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    uVar3 = 1;
    FUN_4a109e5c(param_1,0x46);
    break;
  case 0x12:
    iVar6 = FUN_4a1460d4(iVar8);
    if (iVar6 == 0x19) {
      if (uVar16 != 0) {
        FUN_4a0d8c28(piStack_2c,3,0xa0000);
      }
      FUN_4a105cf4(iVar8);
      param_1[0x51] = 0x61;
      *(undefined1 *)(param_1 + 0x52) = 1;
      param_1[0x53] = 5000;
      param_1[0x54] = -1;
      *(undefined1 *)(param_1 + 0x55) = 0;
      *(undefined1 *)((int)param_1 + 0x149) = 0;
      FUN_4a074bac(param_1,4);
    }
    else {
      if (iVar6 != 5) {
        if (iVar6 == 4) {
          if ((uVar16 != 0) && (iVar6 = FUN_4a1461c0(param_1,0x400), iVar6 == 0)) {
            FUN_4a0d8c28(piStack_2c,3,0x70000);
          }
          FUN_4a105328(iVar8);
          param_1[0x51] = 99;
          *(undefined1 *)(param_1 + 0x52) = 1;
          param_1[0x54] = -1;
          param_1[0x53] = 0x960;
          *(undefined1 *)(param_1 + 0x55) = 0;
          *(undefined1 *)((int)param_1 + 0x149) = 0;
          FUN_4a074bac(param_1,4);
        }
        else {
          switchD_4a11cc8c::default(0,s_what_are_we_washing_at___4a0729ac);
        }
        break;
      }
      FUN_4a1053a4(iVar8);
      if (uVar16 != 0) {
        uVar22 = FUN_4a145f8c(param_1);
        FUN_4a0d8c28(uVar22,3,0xa0000);
      }
      param_1[0x51] = 0x46;
      *(undefined1 *)(param_1 + 0x52) = 1;
      param_1[0x53] = 8000;
      param_1[0x54] = -1;
      *(undefined1 *)(param_1 + 0x55) = 0;
      *(undefined1 *)((int)param_1 + 0x149) = 0;
      FUN_4a074bac(param_1,4);
    }
    goto LAB_4a072d2c;
  case 0x13:
    if (uVar16 != 0) {
      FUN_4a0d8c28(piStack_2c,2,0x320000);
    }
    if (iVar11 == 0x7c) {
      iVar6 = 0x5b;
    }
    else {
      iVar6 = 0x2d;
    }
    param_1[0x51] = iVar6;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x53] = 2000;
    param_1[0x54] = -1;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    break;
  case 0x14:
  case 0x15:
    uVar22 = FUN_4a145f8c(param_1);
    iVar8 = FUN_4a13fb90();
    iVar9 = param_1[0x35];
    uVar10 = FUN_4a146a9c(param_1);
    iVar9 = FUN_4a0d6f44(uVar22,uVar10,iVar9 == 0x7f);
    if ((iVar6 == 0x14) && (iVar8 + 0x78 <= iVar9)) {
      iVar9 = iVar8 + 0x78;
    }
    iVar6 = FUN_4a146a9c(param_1);
    if (iVar6 == 0) {
      FUN_4a0d7614(uVar22,1);
      FUN_4a0d8c28(uVar22,1,0x10000);
    }
    iVar8 = (iVar9 - iVar8) + iVar8;
    if ((param_1[0x34] == 0) || (iVar6 = FUN_4a1460d4(), iVar6 != 0xd)) {
      iVar6 = FUN_4a1461c0(param_1,0x80000);
      if (iVar6 == 0) {
        iVar6 = 0x1a;
      }
      else {
        iVar6 = 0x19;
      }
    }
    else {
      iVar6 = 0x51;
    }
    param_1[0x51] = iVar6;
    *(char *)(param_1 + 0x52) = (char)(iVar8 >> 0x1f) + '\x01';
    param_1[0x54] = -1;
    param_1[0x53] = iVar8;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 1;
    FUN_4a074bac(param_1,4);
    uVar3 = 1;
    break;
  case 0x16:
    FUN_4a10913c(iVar8);
    FUN_4a071478(param_1);
    goto LAB_4a072d2c;
  case 0x17:
    FUN_4a109944(iVar8);
    FUN_4a071478(param_1);
    goto LAB_4a072d2c;
  case 0x18:
    if (param_1[0x35] == 0x89) {
      FUN_4a107e90(iVar8);
    }
    else if (param_1[0x35] == 0x88) {
      FUN_4a107ed8(iVar8);
    }
    iVar6 = FUN_4a114098(iVar7,param_1,iVar8);
    if (iVar6 == 0) {
      local_40 = 0;
      FUN_4a0737a4(param_1,0x6f,iVar8);
    }
    else {
      uVar22 = 0x9b;
      iVar8 = FUN_4a1460d4(iVar6);
      if (iVar8 == 10) {
        uVar22 = 0x9c;
      }
      local_40 = 0;
      FUN_4a0737a4(param_1,uVar22,iVar6);
    }
    goto LAB_4a072d2c;
  case 0x19:
    iVar6 = FUN_4a110878(iVar7,param_1,iVar11);
    if (iVar6 == 0) goto LAB_4a072c98;
    param_1[0x38] = iVar6;
    FUN_4a071478(param_1);
    break;
  case 0x1a:
    if (uVar16 != 0) {
      FUN_4a0d8c28(piStack_2c,5,0x30000);
    }
    param_1[0x51] = 0x25;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x53] = 10000;
    param_1[0x54] = -1;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    break;
  case 0x1b:
    if (uVar16 == 0) {
      FUN_4a110aac(&local_40,iVar7);
      iVar6 = 0;
      if ((local_38 == 2) && (iVar8 = FUN_4a0e3c18(piStack_2c), iVar8 == 0)) {
        iVar8 = FUN_4a146a9c(param_1);
        if (piStack_2c[0x108] != 0) {
          iVar6 = *(int *)(piStack_2c[0x108] + 8);
        }
        FUN_4a10ce2c(iVar7,0xb3f,(int)*(short *)(iVar6 + iVar8 * 2));
      }
      FUN_4a074bac(param_1,9);
      FUN_4a169a1c(&local_40);
    }
    else {
      FUN_4a074bac(param_1,8);
      FUN_4a113750(iVar7);
    }
    break;
  case 0x1c:
    FUN_4a116b10(iVar7,iVar11,iVar23);
    FUN_4a071478(param_1);
    break;
  case 0x1d:
    switchD_4a11cc8c::default(uVar16,s_NPC_looking_for_work__4a0729c8);
    uVar22 = FUN_4a1419b4(piStack_2c,iVar8);
    uVar10 = FUN_4a140354(piStack_2c,uVar22);
    FUN_4a10fe80(iVar7,uVar22,uVar10);
    FUN_4a071478(param_1);
    break;
  case 0x1e:
    FUN_4a10ce2c(iVar7,0xb3e);
    FUN_4a071478(param_1);
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
    if (param_1[0x38] == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = FUN_4a1460d4();
    }
    if (iVar6 == 0x20) {
      switchD_4a11cc8c::default(param_1[0x38] != 0,PTR_s_can_t_auto_sit_without_a_chair_4a0729e0);
      if (iVar8 == 0xd) {
        FUN_4a106238(param_1,param_1[0x14] + 2U & 3);
      }
      else if (iVar8 == 6) {
LAB_4a072994:
        iVar6 = 3;
        goto LAB_4a072a5c;
      }
LAB_4a0729a4:
      iVar6 = 1;
    }
    else if (iVar6 == 0x1f) {
      iVar6 = 0;
    }
    else {
      if (iVar6 == 0x21) goto LAB_4a072994;
      if (iVar6 == 0x22) goto LAB_4a0729a4;
      if (iVar6 == 0x23) {
        iVar6 = 2;
      }
      else if (iVar6 == 0x24) {
        iVar6 = 4;
      }
      else if (iVar6 == 0x27) {
        iVar6 = 8;
      }
      else if (iVar6 == 0x25) {
        if (iVar8 == 0xd) {
          iVar6 = 5;
        }
        else {
          iVar6 = 6;
        }
      }
      else if (iVar6 == 0x26) {
        iVar6 = 7;
      }
      else if (iVar6 == 0x28) {
        iVar6 = 9;
      }
      else if (iVar6 == 0x2a) {
        iVar6 = 0xb;
      }
      else if (iVar6 == 0x2b) {
        iVar6 = 0xd;
      }
      else if (iVar6 == 0x2c) {
        iVar6 = 0xe;
      }
      else {
        iVar6 = 10;
      }
    }
LAB_4a072a5c:
    if (param_1[0x32] == iVar6) goto LAB_4a072bd8;
    param_1[0x33] = iVar6;
    FUN_4a074bac(param_1,2);
    break;
  case 0x2d:
    if (uVar16 == 0) goto LAB_4a072bd8;
    iVar6 = FUN_4a146d54(param_1[8]);
    if (iVar6 != 0) {
      FUN_4a1460a4(param_1);
      iVar6 = FUN_4a142ef4();
      if ((iVar6 != 0) && (param_1[0x35] == 0x83)) goto LAB_4a072bd8;
    }
    uVar22 = FUN_4a145f8c(param_1);
    iVar6 = FUN_4a13fd20(uVar22,param_1[0x35]);
    iVar8 = FUN_4a141aa4(uVar22);
    if (iVar8 < iVar6) goto LAB_4a072c98;
    FUN_4a0d585c(uVar22);
    FUN_4a117598(param_1[8],param_1[0x11],param_1[0x13]);
    FUN_4a071478(param_1);
    break;
  case 0x2e:
    if (uVar16 == 0) goto LAB_4a072bd8;
    uVar22 = FUN_4a145f8c(param_1);
    FUN_4a110aac(&local_40,param_1[8]);
    if ((((int)local_38 < 2) && (iVar6 = FUN_4a13fa14(uVar22,0), iVar6 != 4)) &&
       (iVar6 = FUN_4a0e3c18(uVar22), iVar6 == 0)) {
      FUN_4a071ac4(param_1,0);
    }
    else {
      FUN_4a071478(param_1);
    }
    FUN_4a169a1c(&local_40);
    break;
  case 0x2f:
    if (uVar16 != 0) {
      uVar22 = FUN_4a145f8c(param_1);
      iVar6 = FUN_4a13feec(uVar22,0xc);
      if ((iVar6 != -1) || (iVar6 = FUN_4a13feec(uVar22,0xb), iVar6 != -1)) goto LAB_4a072c98;
    }
LAB_4a072bd8:
    FUN_4a071478(param_1);
    break;
  case 0x30:
    FUN_4a127ce8(iVar7,iVar8);
    FUN_4a071478(param_1);
    break;
  case 0x31:
    uVar22 = FUN_4a145f8c(param_1);
    iVar8 = param_1[0x39];
    iVar6 = FUN_4a140338(uVar22,iVar8);
    if (iVar6 < 1) goto LAB_4a072c98;
    switchD_4a0de288::default(uVar22,iVar8,0xffffffff);
    FUN_4a109d38(param_1[0x38],iVar8);
    FUN_4a071478(param_1);
    break;
  case 0x32:
    uVar22 = FUN_4a145f8c(param_1);
    iVar6 = FUN_4a140338(uVar22,2);
    if ((iVar6 < 1) || (iVar6 = FUN_4a140338(uVar22,3), iVar6 < 1)) goto LAB_4a072c98;
    switchD_4a0de288::default(uVar22,3,0xffffffff);
    FUN_4a109bbc(param_1[0x38]);
    FUN_4a071478(param_1);
    break;
  case 0x33:
    FUN_4a105ef8(iVar8);
    FUN_4a071478(param_1);
    break;
  case 0x34:
    FUN_4a105c84(iVar8);
    FUN_4a071478(param_1);
    break;
  case 0x35:
    iVar6 = FUN_4a1460d4(iVar8);
    switchD_4a11cc8c::default(iVar6 == 0xb,s_drinking_at_non_coffee_machine_4a072e64);
    FUN_4a108a94(iVar8);
    param_1[0x51] = 1;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x54] = -1;
    param_1[0x53] = 60000;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
LAB_4a072d2c:
    uVar3 = 1;
    break;
  case 0x36:
    if (uVar16 != 0) {
      FUN_4a0d8c28(piStack_2c,2,0xfffb0000);
      FUN_4a0d8c28(piStack_2c,1,0xa0000);
    }
    param_1[0x51] = 0x54;
    *(undefined1 *)(param_1 + 0x52) = 0;
    param_1[0x53] = -1;
    param_1[0x54] = -1;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
    break;
  case 0x37:
    if (uVar16 != 0) {
      FUN_4a0d8c28(piStack_2c,5,0x60000);
    }
    FUN_4a10913c(param_1[0x38]);
    param_1[0x51] = 0x59;
    *(undefined1 *)(param_1 + 0x52) = 1;
    param_1[0x53] = 15000;
    param_1[0x54] = -1;
    *(undefined1 *)(param_1 + 0x55) = 0;
    *(undefined1 *)((int)param_1 + 0x149) = 0;
    FUN_4a074bac(param_1,4);
  }
  FUN_4a1460a4(param_1);
  iVar6 = FUN_4a142ef4();
  if (iVar6 == 0) {
    uVar3 = 0;
  }
  if (((uVar16 & uVar3) != 0) && (uVar3 = FUN_4a13fb44(piStack_2c,iVar11), (uVar3 & 0x200000) != 0))
  {
    FUN_4a11186c(iVar7,0x1a,param_1);
  }
  iVar6 = FUN_4a1461c0(param_1,2);
  if (iVar6 == 0) {
    return (int *)0x0;
  }
  bVar27 = true;
code_r0x4a071ac4:
  FUN_4a1071e0(param_1,4);
  iVar7 = -1;
  iVar6 = -1;
  uVar22 = 0x930;
  switch(param_1[0x37]) {
  case 1:
    if ((!bVar27) || (iVar8 = FUN_4a146a9c(param_1), iVar8 != 0)) {
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
    FUN_4a071090(param_1,1);
    FUN_4a07171c(param_1);
    break;
  case 0xd:
    iVar6 = 0xb4b;
    uVar22 = FUN_4a1460a4(param_1);
    uVar22 = FUN_4a143170(uVar22,param_1[0x39]);
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
    FUN_4a071478(param_1);
    break;
  case 0x19:
    if (param_1[0x35] == 0x9d) {
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
    iVar8 = FUN_4a0fb748(param_1[9]);
    if (iVar8 < 0x32) {
      iVar7 = 0x11;
    }
    break;
  case 0x31:
    iVar6 = 0x93d;
    break;
  case 0x32:
    iVar6 = 0x940;
  }
  piVar12 = (int *)FUN_4a146a9c(param_1);
  if ((piVar12 == (int *)0x0) && (piVar12 = (int *)0x0, *(int *)(param_1[8] + 0x5fc) != 0)) {
    piVar12 = (int *)FUN_4a108d64();
  }
  if (iVar6 == -1) {
    return piVar12;
  }
  if ((!bVar27) && (iVar8 = FUN_4a146a9c(param_1), iVar8 == 0)) {
    FUN_4a1136bc(param_1[8],iVar6,uVar22);
  }
  if (iVar7 != -1) {
    piVar12 = (int *)FUN_4a0737a4(param_1,iVar7,0);
    return piVar12;
  }
code_r0x4a07171c:
  iVar6 = FUN_4a1461c0(param_1,4);
  uVar22 = FUN_4a145f8c(param_1);
  FUN_4a107f20(param_1,0xc);
  piVar12 = (int *)param_1[0x38];
  iVar7 = param_1[0x35];
  if ((piVar12 == (int *)0x0) || (iVar8 = FUN_4a146b58(piVar12,0x2000), iVar8 == 0)) {
    piVar20 = (int *)0x0;
  }
  else {
    piVar20 = (int *)param_1[0x38];
  }
  uVar3 = FUN_4a146a9c(param_1);
  iVar8 = 1 - uVar3;
  if (1 < uVar3) {
    iVar8 = 0;
  }
  local_30 = 0;
  FUN_4a0737a4(param_1,0,0);
  uVar3 = FUN_4a13fb44(uVar22,iVar7);
  if (iVar6 == 0) {
    if (piVar20 == (int *)0x0 || (uVar3 & 2) == 0) {
      if (iVar7 == 0x99) {
        FUN_4a10e9c8(param_1[8]);
      }
      else if (iVar7 < 0x9a) {
        if (iVar7 == 0x76) {
LAB_4a0718dc:
          FUN_4a110ec4(param_1[8],3);
        }
        else if (iVar7 < 0x77) {
          if (iVar7 == 4) {
            iVar11 = FUN_4a0fb748(param_1[9]);
            if (iVar11 < 5) {
              local_30 = 0;
              piVar12 = (int *)FUN_4a0737a4(param_1,10,0);
              return piVar12;
            }
          }
          else if (iVar7 == 0x70) {
            FUN_4a1278e8(param_1[8],1);
          }
          else if (iVar7 == 0x74) goto LAB_4a0718dc;
        }
        else if ((iVar7 == 0x7e || iVar7 == 0x7f) || iVar7 == 0x80) {
          param_1[0x3f] = param_1[0x3f] & 0xfffffff7;
        }
      }
      else if (iVar7 == 0xa6) {
LAB_4a071940:
        FUN_4a116cf0(param_1[8],piVar12);
      }
      else if (iVar7 < 0xa7) {
        if (iVar7 != 0x9e) {
          if (iVar7 == 0xa2) {
            if (iVar8 == 0) {
              param_1[0x30] = 0;
              uVar10 = FUN_4a146a9c(param_1);
              FUN_4a111218(param_1[8],uVar10);
            }
          }
          else if (iVar7 == 0xa5) goto LAB_4a071940;
        }
      }
      else if (iVar7 == 0xa9) {
        FUN_4a0daefc(uVar22,0x14);
        FUN_4a0d9d54(uVar22,0,0x280000);
      }
      else if (iVar7 == 0xab) goto LAB_4a071940;
    }
    else {
      FUN_4a071490(param_1,0);
      FUN_4a071490(piVar20,0);
      iVar11 = (**(code **)(*piVar20 + 0x1c))(piVar20,iVar7,param_1);
      if (iVar11 != 0) {
        iVar11 = FUN_4a12785c(param_1[8],param_1[0x4e]);
        if (iVar11 != 0) {
          *(uint *)(iVar11 + 0xfc) = *(uint *)(iVar11 + 0xfc) & 0xffffffbf;
          *(undefined4 *)(iVar11 + 0x13c) = 0;
          *(undefined4 *)(iVar11 + 0x138) = 0xffffffff;
          *(undefined4 *)(iVar11 + 0x140) = 0;
        }
        param_1[0x3f] = param_1[0x3f] & 0xffffffbf;
        param_1[0x4f] = 0;
        param_1[0x4e] = -1;
        param_1[0x50] = 0;
      }
      if (iVar8 != 0) {
        piStack_2c = (int *)FUN_4a146a9c(piVar20);
        if (iVar7 == 0x61) {
          FUN_4a0daefc(uVar22,0x12);
          FUN_4a0dd6e4(uVar22,piStack_2c,0x20);
          FUN_4a0dd6e4(uVar22,piStack_2c,0x800);
          goto LAB_4a071a18;
        }
        if (iVar7 == 0x6e) {
          FUN_4a0dd6e4(uVar22,piStack_2c,0x100);
          goto LAB_4a071a18;
        }
      }
    }
  }
  if (iVar7 == 0xa3) {
    FUN_4a107f20(param_1,0x10);
    if (iVar6 == 0) {
      FUN_4a1071e0(param_1,0x20);
    }
    else {
      param_1[0x3c] = 0;
      param_1[0x3b] = -1;
    }
  }
LAB_4a071a18:
  if (((piVar12 != (int *)0x0) && (piVar20 == (int *)0x0 && iVar6 == 0)) &&
     ((**(code **)(*piVar12 + 0x1c))(piVar12,iVar7,param_1), iVar8 != 0)) {
    FUN_4a0dbd6c(uVar22,piVar12[10]);
  }
  if (param_1[0x3b] != -1) {
    iVar6 = (**(code **)(*param_1 + 0x10))(param_1);
    if (iVar6 != 0) {
      local_30 = param_1[0x3e];
      iVar6 = param_1[0x3b];
      iVar7 = param_1[0x3c];
      param_1[0x3c] = 0;
      param_1[0x3b] = -1;
      piVar12 = (int *)FUN_4a0737a4(param_1,iVar6,iVar7,param_1[0x3d]);
      return piVar12;
    }
                    /* WARNING: Could not recover jumptable at 0x4a071a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar12 = (int *)(*UNRECOVERED_JUMPTABLE_00)();
    return piVar12;
  }
  return (int *)0xffffffff;
}




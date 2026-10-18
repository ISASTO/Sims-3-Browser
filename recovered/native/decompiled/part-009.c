/* AUTOMATED DECOMPILER OUTPUT. Not original source, not a buildable game.
 * Function boundaries, types, indirect calls, and data still require validation. */

// Address: 4a076628

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a076628(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  undefined1 auStack_2c [24];
  
  switch(param_2) {
  case 4:
  case 5:
  case 7:
    uVar4 = 0x1000;
    break;
  case 6:
    uVar4 = 0x800;
    break;
  default:
    return;
  case 9:
    FUN_4a107f20(param_1,0x400);
    iVar1 = FUN_4a146ea4(*(undefined4 *)(param_1 + 0x20));
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_4a146be8(param_1,1);
    if (iVar1 == 0) {
      return;
    }
    FUN_4a06f8f0(*(undefined4 *)(iVar1 + 0x34),0);
    FUN_4a06f8f0(*(undefined4 *)(iVar1 + 0x40),0);
    piVar5 = *(int **)(iVar1 + 0x3c);
    if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(undefined4 *)(iVar1 + 0x38) = 0xffffffff;
    iVar2 = *(int *)(*(int *)(iVar1 + 0x30) + 0xdc);
    if (iVar2 != 0) {
      for (iVar2 = *(int *)(iVar2 + 0x10); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x10)) {
        FUN_4a0b4ac8(*(int *)(iVar1 + 0x30),
                     **(undefined4 **)(*(int *)(*(int *)(iVar1 + 0x30) + 0xdc) + 0x14));
        iVar2 = *(int *)(*(int *)(iVar1 + 0x30) + 0xdc);
        if (iVar2 == 0) break;
      }
    }
    *(undefined4 *)(iVar1 + 0x88) = 0;
    if ((*(int *)(iVar1 + 0x28) == 2) && (*(int *)(iVar1 + 0x2c) != -1)) {
      uVar3 = FUN_4a077b38();
      FUN_4a07ce40(uVar3,*(undefined4 *)(iVar1 + 0x2c));
    }
    *(undefined4 *)(iVar1 + 0x2c) = 0xffffffff;
    iVar2 = FUN_4a16acfc(auStack_2c,0);
    uVar3 = *(undefined4 *)(iVar2 + 8);
    piVar5 = *(int **)(iVar2 + 0xc);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
    }
    (**(code **)(*(int *)(iVar1 + 0x4c) + 0x1c))((int *)(iVar1 + 0x4c));
    *(undefined4 *)(iVar1 + 0x54) = uVar3;
    *(int **)(iVar1 + 0x58) = piVar5;
    FUN_4a16adcc(auStack_2c);
    iVar2 = FUN_4a16acfc(auStack_2c,0);
    uVar3 = *(undefined4 *)(iVar2 + 8);
    piVar5 = *(int **)(iVar2 + 0xc);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
    }
    (**(code **)(*(int *)(iVar1 + 0x60) + 0x1c))((int *)(iVar1 + 0x60));
    *(undefined4 *)(iVar1 + 0x68) = uVar3;
    *(int **)(iVar1 + 0x6c) = piVar5;
    FUN_4a16adcc(auStack_2c);
    iVar2 = FUN_4a16acfc(auStack_2c,0);
    uVar3 = *(undefined4 *)(iVar2 + 8);
    piVar5 = *(int **)(iVar2 + 0xc);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
    }
    (**(code **)(*(int *)(iVar1 + 0x74) + 0x1c))((int *)(iVar1 + 0x74));
    *(undefined4 *)(iVar1 + 0x7c) = uVar3;
    *(int **)(iVar1 + 0x80) = piVar5;
    FUN_4a16adcc(auStack_2c);
    *(undefined4 *)(iVar1 + 0x28) = 0;
    return;
  }
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & ~uVar4;
  return;
}



// Address: 4a0766b8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0766b8(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  undefined4 uVar13;
  bool bVar14;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_5c [20];
  int iStack_48;
  undefined1 auStack_44 [12];
  int iStack_38;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  iStack_2c = param_1;
  uStack_28 = param_2;
  piVar1 = (int *)FUN_4a1460b0(param_1,0);
  iVar12 = *piVar1;
  if ((piVar1[3] & 2U) == 0 || iVar12 == 9) {
    return;
  }
  iVar2 = FUN_4a1460a4(param_1);
  FUN_4a16bdcc(auStack_44,PTR_DAT_4a076b9c);
  piVar11 = (int *)0x0;
  iStack_48 = *(int *)(param_1 + 0x24) + 0x128;
  uVar3 = FUN_4a171bb8(0x3f800000,*(undefined4 *)(iVar2 + 0x48c));
  uVar3 = FUN_4a17211c(uVar3,0x43c80000);
  if (iVar12 == 0) {
    uVar4 = FUN_4a146c0c(param_1);
    uVar5 = FUN_4a16bdcc(auStack_5c,auStack_44);
    FUN_4a13edec(uVar4,uVar5,0x41b,1);
    FUN_4a16bef4(auStack_5c);
    bVar14 = iStack_38 != 0;
    if (bVar14) {
      puVar6 = *(undefined4 **)(iStack_38 + 8);
    }
    else {
      puVar6 = (undefined4 *)0x0;
    }
    uVar4 = *puVar6;
    if (bVar14) {
      iVar12 = *(int *)(iStack_38 + 8);
    }
    else {
      iVar12 = 0;
    }
    uVar5 = *(undefined4 *)(iVar12 + 4);
    if (bVar14) {
      iVar12 = *(int *)(iStack_38 + 8);
    }
    else {
      iVar12 = 0;
    }
    uVar13 = *(undefined4 *)(iVar12 + 8);
    uVar7 = FUN_4a16bdcc(auStack_5c,auStack_44);
    uStack_78 = uVar13;
    FUN_4a0f2970(iVar2,uVar7,uVar4,uVar5);
    FUN_4a16bef4(auStack_5c);
    if (iStack_38 != 0) {
      puVar6 = *(undefined4 **)(iStack_38 + 8);
    }
    else {
      puVar6 = (undefined4 *)0x0;
    }
    uVar4 = *puVar6;
    if (iStack_38 != 0) {
      iVar12 = *(int *)(iStack_38 + 8);
    }
    else {
      iVar12 = 0;
    }
    uVar5 = 0xffffffff;
    uVar7 = *(undefined4 *)(iVar12 + 4);
    FUN_4a09a3b4(auStack_44,*piVar1,piVar1[1],0);
    if (iStack_38 != 0) {
      piVar11 = *(int **)(iStack_38 + 8);
    }
    iVar12 = *piVar11;
    if (iVar12 == 0) {
      uVar5 = 0x1d;
    }
    else if (iVar12 == 1) {
      uVar5 = 0x1e;
    }
    else if (iVar12 == 2) {
      uVar5 = 0x1f;
    }
    else if (iVar12 == 3) {
      uVar5 = 0x20;
    }
    uVar7 = FUN_4a171fac(uVar7);
    uVar4 = FUN_4a171fac(uVar4);
    uStack_78 = 0x3f800000;
    uStack_6c = 0;
    uStack_74 = uVar3;
    uStack_70 = uVar3;
    FUN_4a09f664(iStack_48,uVar5,uVar4,uVar7);
    goto LAB_4a076b7c;
  }
  iVar10 = 0x190000;
  if (*(char *)(param_1 + 0x154) != '\0') {
    iVar10 = FUN_4a0d4830(1000,2000,*(undefined4 *)(param_1 + 0x14c));
    iVar10 = FUN_4a0d4b28(0x10000 - iVar10,0xa0000);
    iVar10 = iVar10 + 0x190000;
  }
  uVar4 = FUN_4a146c0c(param_1);
  iVar8 = FUN_4a146ea4(*(undefined4 *)(param_1 + 0x20));
  if (iVar8 == 0) {
    uVar5 = FUN_4a16bdcc(&uStack_78,auStack_44);
    FUN_4a13edec(uVar4,uVar5,0x2be,1);
    FUN_4a16bef4(&uStack_78);
  }
  else {
    uVar5 = FUN_4a16bdcc(&uStack_78,auStack_44);
    FUN_4a13e9e8(uVar4,uVar5,0,1);
    FUN_4a16bef4(&uStack_78);
  }
  bVar14 = iStack_38 != 0;
  if (bVar14) {
    puVar6 = *(undefined4 **)(iStack_38 + 8);
  }
  else {
    puVar6 = (undefined4 *)0x0;
  }
  uStack_60 = *puVar6;
  if (bVar14) {
    iVar8 = *(int *)(iStack_38 + 8);
  }
  else {
    iVar8 = 0;
  }
  iVar8 = *(int *)(iVar8 + 4);
  if (bVar14) {
    iVar9 = *(int *)(iStack_38 + 8);
  }
  else {
    iVar9 = 0;
  }
  uVar5 = *(undefined4 *)(iVar9 + 8);
  uVar4 = FUN_4a16bdcc(auStack_5c,auStack_44);
  uStack_78 = uVar5;
  FUN_4a0f2970(iVar2,uVar4,uStack_60,iVar10 + iVar8);
  FUN_4a16bef4(auStack_5c);
  iVar2 = 1;
  if (iStack_38 != 0) {
    puVar6 = *(undefined4 **)(iStack_38 + 8);
  }
  else {
    puVar6 = (undefined4 *)0x0;
  }
  uStack_64 = *puVar6;
  if (iStack_38 != 0) {
    piVar11 = *(int **)(iStack_38 + 8);
  }
  iVar10 = piVar11[1];
  uVar4 = 0xffffffff;
  switch(iVar12) {
  default:
    goto LAB_4a076a60;
  case 3:
    iVar2 = 2;
  case 2:
    iVar2 = iVar2 + 1;
  case 1:
    uVar4 = 0xf2;
    break;
  case 6:
    iVar2 = 2;
  case 5:
    iVar2 = iVar2 + 1;
  case 4:
    uVar4 = 0xf3;
    break;
  case 0xc:
  case 0xd:
    iVar2 = 4;
    uVar4 = 0xf3;
    break;
  case 0xe:
    iVar2 = 4;
    uVar4 = 0xf2;
    break;
  case 0xf:
    iVar10 = iVar10 + -0xf;
    uVar4 = 0x179;
    goto LAB_4a076a60;
  }
  if ((piVar1[1] & 1U) == 0) {
LAB_4a076a60:
    uVar5 = FUN_4a09f974(iStack_48,uVar4);
    uStack_68 = FUN_4a17211c(uVar5,uVar3);
    uVar5 = FUN_4a171fac(iVar2 + -1);
    uVar5 = FUN_4a17211c(uVar5,uStack_68);
    uVar5 = FUN_4a17295c(uVar5,0xffffffff);
    uVar7 = FUN_4a171fac(uStack_64);
    uVar5 = FUN_4a1725c0(uVar7,uVar5);
    iVar8 = 0;
    if (iVar2 != 0) {
      uStack_30 = FUN_4a171fac(iVar10);
      do {
        uVar7 = FUN_4a171fac(iVar8);
        uVar7 = FUN_4a17211c(uVar7,uStack_68);
        uVar7 = FUN_4a171a94(uVar7,uVar5);
        uStack_78 = 0x3f800000;
        uStack_6c = 0;
        uStack_74 = uVar3;
        uStack_70 = uVar3;
        FUN_4a09f664(iStack_48,uVar4,uVar7,uStack_30);
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar2);
    }
  }
  if ((*(int *)(param_1 + 0xdc) == 6 && iVar12 == 0xf) &&
     (iVar12 = *(int *)(param_1 + 0x158), iVar12 != -1)) {
    uVar4 = FUN_4a17211c(uVar3,0xc1000000);
    uVar5 = FUN_4a171fac(iVar10);
    uVar4 = FUN_4a171a94(uVar5,uVar4);
    uVar5 = FUN_4a171fac(uStack_64);
    uStack_78 = 0x3f800000;
    uStack_6c = 0;
    uStack_74 = uVar3;
    uStack_70 = uVar3;
    FUN_4a09f664(iStack_48,iVar12,uVar5,uVar4);
  }
LAB_4a076b7c:
  FUN_4a09f3a4(iStack_48,uStack_28);
  FUN_4a16bef4(auStack_44);
  return;
}



// Address: 4a076ba0

void FUN_4a076ba0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_38 [12];
  int local_2c;
  undefined1 auStack_24 [20];
  
  switchD_4a11cc8c::default(param_2 != 0,s_can_t_sleep_on_null_4a076d18);
  uVar1 = FUN_4a071490(param_1,param_2);
  switchD_4a11cc8c::default(uVar1,s_couldn_t_get_occupied_flag_for_b_4a076d2c);
  FUN_4a16bdcc(auStack_38,PTR_DAT_4a076d50);
  puVar3 = (undefined4 *)0x0;
  uVar1 = FUN_4a16bdcc(auStack_24,auStack_38);
  FUN_4a14637c(param_2,uVar1,*(undefined4 *)(param_1 + 0x108));
  FUN_4a16bef4(auStack_24);
  if (local_2c != 0) {
    iVar2 = *(int *)(local_2c + 8);
  }
  else {
    iVar2 = 0;
  }
  if (local_2c != 0) {
    puVar3 = *(undefined4 **)(local_2c + 8);
  }
  FUN_4a070f84(param_1,*puVar3,*(undefined4 *)(param_2 + 0x48),*(undefined4 *)(iVar2 + 4),
               *(undefined4 *)(param_1 + 0x50));
  FUN_4a1077b8(param_1,param_2);
  FUN_4a106238(param_1,(*(int *)(param_1 + 0x50) + 2) % 4);
  *(undefined4 *)(param_1 + 200) = 6;
  *(int *)(param_1 + 0xd0) = param_2;
  *(undefined4 *)(param_1 + 0xcc) = 6;
  iVar2 = FUN_4a1460d4(param_2);
  if (iVar2 == 0xd) {
    *(undefined4 *)(param_1 + 200) = 5;
    *(undefined4 *)(param_1 + 0xcc) = 5;
  }
  else {
    FUN_4a1071f0(param_1,0x80000);
    iVar2 = FUN_4a146b68(param_1);
    if (iVar2 != 0) {
      FUN_4a0bb5d8();
    }
  }
  iVar2 = FUN_4a146a9c(param_1);
  if (iVar2 == 0) {
    FUN_4a11a810(*(undefined4 *)(param_1 + 0x20),param_2);
  }
  FUN_4a0737a4(param_1,0x80,param_2,0,0);
  FUN_4a16bef4(auStack_38);
  return;
}



// Address: 4a076d54

/* WARNING: Removing unreachable block (ram,0x4a071cf8) */
/* WARNING: Removing unreachable block (ram,0x4a071d08) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a076d54(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_4a1071e0(param_1,2);
  uVar5 = FUN_4a145f8c(param_1);
  uVar6 = FUN_4a13fb44(uVar5,param_1[0x35]);
  if (((((uVar6 & 2) != 0) && ((uVar6 & 0x100000) == 0)) && (param_1[0x38] != 0)) &&
     ((iVar7 = FUN_4a146b58(param_1[0x38],0x2000), iVar7 != 0 && (param_1[0x38] != 0)))) {
    iVar8 = FUN_4a146b58(param_1[0x38],0x2000);
    iVar7 = 0;
    if (iVar8 != 0) {
      iVar7 = param_1[0x38];
    }
    iVar7 = FUN_4a1461c0(iVar7,2);
    if (iVar7 == 0) {
      iVar7 = 0;
      if (param_1[0x38] != 0) {
        iVar8 = FUN_4a146b58(param_1[0x38],0x2000);
        iVar7 = 0;
        if (iVar8 != 0) {
          iVar7 = param_1[0x38];
        }
      }
      FUN_4a076d54(iVar7);
    }
  }
  FUN_4a1071e0(param_1,4);
  iVar8 = -1;
  iVar7 = -1;
  switch(param_1[0x37]) {
  case 1:
    iVar4 = FUN_4a146a9c(param_1);
    if (iVar4 != 0) {
      iVar7 = 0x936;
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
    iVar7 = 0xb4b;
    uVar5 = FUN_4a1460a4(param_1);
    FUN_4a143170(uVar5,param_1[0x39]);
    break;
  case 0xe:
    iVar7 = 0x974;
    break;
  case 0xf:
    iVar7 = 0x93b;
    break;
  case 0x10:
    iVar7 = 0x939;
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
      iVar7 = 0x95e;
    }
    else {
      iVar7 = 0x94e;
    }
    break;
  case 0x2d:
    iVar7 = 0x94c;
    break;
  case 0x2e:
    iVar7 = 0x966;
    break;
  case 0x2f:
    iVar7 = 0x931;
    iVar8 = 8;
    iVar4 = FUN_4a0fb748(param_1[9]);
    if (iVar4 < 0x32) {
      iVar8 = 0x11;
    }
    break;
  case 0x31:
    iVar7 = 0x93d;
    break;
  case 0x32:
    iVar7 = 0x940;
  }
  iVar4 = FUN_4a146a9c(param_1);
  if ((iVar4 == 0) && (*(int *)(param_1[8] + 0x5fc) != 0)) {
    FUN_4a108d64();
  }
  if (iVar7 == -1) {
    return;
  }
  if (iVar8 != -1) {
    FUN_4a0737a4(param_1,iVar8,0);
    return;
  }
  iVar7 = FUN_4a1461c0(param_1,4);
  uVar5 = FUN_4a145f8c(param_1);
  FUN_4a107f20(param_1,0xc);
  piVar1 = (int *)param_1[0x38];
  iVar8 = param_1[0x35];
  if ((piVar1 == (int *)0x0) || (iVar4 = FUN_4a146b58(piVar1,0x2000), iVar4 == 0)) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = (int *)param_1[0x38];
  }
  uVar6 = FUN_4a146a9c(param_1);
  iVar4 = 1 - uVar6;
  if (1 < uVar6) {
    iVar4 = 0;
  }
  FUN_4a0737a4(param_1,0,0);
  uVar6 = FUN_4a13fb44(uVar5,iVar8);
  if (iVar7 == 0) {
    if (piVar9 == (int *)0x0 || (uVar6 & 2) == 0) {
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
            iVar2 = FUN_4a0fb748(param_1[9]);
            if (iVar2 < 5) {
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
        FUN_4a116cf0(param_1[8],piVar1);
      }
      else if (iVar8 < 0xa7) {
        if (iVar8 != 0x9e) {
          if (iVar8 == 0xa2) {
            if (iVar4 == 0) {
              param_1[0x30] = 0;
              uVar3 = FUN_4a146a9c(param_1);
              FUN_4a111218(param_1[8],uVar3);
            }
          }
          else if (iVar8 == 0xa5) goto LAB_4a071940;
        }
      }
      else if (iVar8 == 0xa9) {
        FUN_4a0daefc(uVar5,0x14);
        FUN_4a0d9d54(uVar5,0,0x280000);
      }
      else if (iVar8 == 0xab) goto LAB_4a071940;
    }
    else {
      FUN_4a071490(param_1,0);
      FUN_4a071490(piVar9,0);
      iVar2 = (**(code **)(*piVar9 + 0x1c))(piVar9,iVar8,param_1);
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
      if (iVar4 != 0) {
        uVar3 = FUN_4a146a9c(piVar9);
        if (iVar8 == 0x61) {
          FUN_4a0daefc(uVar5,0x12);
          FUN_4a0dd6e4(uVar5,uVar3,0x20);
          FUN_4a0dd6e4(uVar5,uVar3,0x800);
          goto LAB_4a071a18;
        }
        if (iVar8 == 0x6e) {
          FUN_4a0dd6e4(uVar5,uVar3,0x100);
          goto LAB_4a071a18;
        }
      }
    }
  }
  if (iVar8 == 0xa3) {
    FUN_4a107f20(param_1,0x10);
    if (iVar7 == 0) {
      FUN_4a1071e0(param_1,0x20);
    }
    else {
      param_1[0x3c] = 0;
      param_1[0x3b] = -1;
    }
  }
LAB_4a071a18:
  if (((piVar1 != (int *)0x0) && (piVar9 == (int *)0x0 && iVar7 == 0)) &&
     ((**(code **)(*piVar1 + 0x1c))(piVar1,iVar8,param_1), iVar4 != 0)) {
    FUN_4a0dbd6c(uVar5,piVar1[10]);
  }
  if (param_1[0x3b] != -1) {
    iVar7 = (**(code **)(*param_1 + 0x10))(param_1);
    if (iVar7 != 0) {
      iVar7 = param_1[0x3b];
      iVar8 = param_1[0x3c];
      param_1[0x3c] = 0;
      param_1[0x3b] = -1;
      FUN_4a0737a4(param_1,iVar7,iVar8,param_1[0x3d]);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a071a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a076e50

/* WARNING: Removing unreachable block (ram,0x4a07753c) */

void FUN_4a076e50(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  ulonglong uVar15;
  int iStack_7c;
  undefined4 uStack_78;
  int local_74;
  int *local_70;
  int local_6c;
  int local_68;
  int aiStack_64 [2];
  int local_5c;
  int *local_58;
  int local_50 [2];
  int local_48;
  int *local_44;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  
  local_28 = FUN_4a1460a4();
  local_2c = *(int *)(param_1 + 0x44);
  local_30 = *(int *)(param_1 + 0x4c);
  local_34 = 0;
  if (param_2 == 0) {
    iVar12 = FUN_4a146a9c(param_1);
    if (iVar12 == 0) {
      uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x5fc);
      uVar2 = FUN_4a144cb0(local_28,param_3);
      uVar5 = FUN_4a144cb8(local_28,param_4);
      uVar2 = FUN_4a1457cc(local_28,uVar2);
      uVar5 = FUN_4a1457d8(local_28,uVar5);
      FUN_4a109130(uVar6,uVar2,0,uVar5);
      FUN_4a10918c(uVar6);
    }
  }
  else {
    local_34 = FUN_4a071490(param_1,param_2);
    local_34 = local_34 ^ 1;
    iVar12 = *(int *)(param_1 + 0x108);
    if ((iVar12 == -1) &&
       (iVar12 = FUN_4a146640(param_2,*(undefined4 *)(param_1 + 0x44),
                              *(undefined4 *)(param_1 + 0x4c),0,0), iVar12 == -1)) {
      iVar12 = FUN_4a146a9c(param_1);
      FUN_4a071ac4(param_1,iVar12 != 0);
      return;
    }
    FUN_4a16bdcc(&uStack_78,PTR_DAT_4a0776d4);
    iVar13 = 0;
    uVar2 = FUN_4a16bdcc(aiStack_64,&uStack_78);
    FUN_4a14637c(param_2,uVar2,iVar12);
    FUN_4a16bef4(aiStack_64);
    if (local_6c != 0) {
      puVar3 = *(undefined4 **)(local_6c + 8);
    }
    else {
      puVar3 = (undefined4 *)0x0;
    }
    param_3 = *puVar3;
    if (local_6c != 0) {
      iVar13 = *(int *)(local_6c + 8);
    }
    param_4 = *(undefined4 *)(iVar13 + 4);
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x4c);
    FUN_4a16bef4(&uStack_78);
  }
  uVar2 = FUN_4a144cb0(local_28,param_3);
  iVar13 = FUN_4a1457cc(local_28,uVar2);
  uVar2 = FUN_4a144cb8(local_28,param_4);
  iVar4 = FUN_4a1457d8(local_28,uVar2);
  bVar14 = *(int *)(param_1 + 0x44) == iVar13;
  iVar12 = iVar4;
  if (bVar14) {
    iVar12 = *(int *)(param_1 + 0x4c);
  }
  if ((!bVar14 || iVar12 != iVar4) && (*(int *)(param_1 + 200) != 0)) {
    *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + -1;
    FUN_4a071e74(param_1,0x1f);
    return;
  }
  iVar12 = FUN_4a146d54(*(undefined4 *)(param_1 + 0x20));
  if ((((iVar12 != 0) && (iVar12 = FUN_4a142ef4(local_28), iVar12 != 0)) &&
      (iVar12 = FUN_4a146a9c(param_1), iVar12 == 0)) &&
     ((*(int *)(param_1 + 0xd4) != 0xa3 && (iVar12 = FUN_4a1461c0(param_1,0x20), iVar12 == 0)))) {
    uVar2 = FUN_4a145f8c(param_1);
    iVar12 = FUN_4a141248(uVar2,0,1);
    if (iVar12 == 0) {
      iVar12 = FUN_4a144cb0(local_28,*(undefined4 *)(param_1 + 0x44));
      uVar2 = FUN_4a144cb8(local_28,*(undefined4 *)(param_1 + 0x4c));
      uVar5 = FUN_4a144cb0(local_28,iVar13);
      uVar6 = FUN_4a144cb8(local_28,iVar4);
      uVar7 = FUN_4a142f2c(local_28,iVar12,uVar2);
      if ((uVar7 & 0x10) == 0) {
        uVar15 = FUN_4a142f2c(local_28,uVar5,uVar6);
        iVar11 = (int)(uVar15 >> 0x20);
        if ((uVar15 & 0x10) != 0) {
          bVar14 = *(int *)(param_1 + 0xd4) == 0x6f;
          if (bVar14) {
            iVar11 = *(int *)(param_1 + 0xe0);
          }
          *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xd4);
          *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0xe0);
          if (!bVar14 || iVar11 != 0) {
            iVar12 = 0;
          }
          *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0xe4);
          if (bVar14 && iVar11 == 0) {
            iVar12 = 1;
          }
          *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0xe8);
          FUN_4a1071e0(param_1,0x10);
          uVar2 = FUN_4a1107d8(*(undefined4 *)(param_1 + 0x20));
          FUN_4a0737a4(param_1,0xa3,uVar2,0,0);
          if (*(int *)(param_1 + 0xd4) == 0xa3) {
            if (iVar12 != 0) {
              FUN_4a10918c(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x5fc));
            }
            return;
          }
          return;
        }
      }
    }
  }
  FUN_4a107f20(param_1,0x20);
  local_38 = 0;
  iVar12 = FUN_4a146ea4(*(undefined4 *)(param_1 + 0x20));
  if (iVar12 == 0) {
    uVar2 = 0x10;
    FUN_4a110aac(aiStack_64,*(undefined4 *)(param_1 + 0x20));
    if (1 < local_5c) {
      FUN_4a0f3f94(local_28);
      iVar12 = 0;
      if (0 < local_5c) {
        do {
          iVar11 = 0;
          if (local_58 != (int *)0x0) {
            iVar11 = local_58[2];
          }
          iVar11 = *(int *)(iVar11 + iVar12 * 4);
          if (iVar11 != param_1) {
            uVar2 = FUN_4a144cb0(local_28,*(undefined4 *)(iVar11 + 0x44));
            uVar5 = FUN_4a144cb8(local_28,*(undefined4 *)(iVar11 + 0x4c));
            FUN_4a0f1aa4(local_28,uVar2,uVar5);
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < local_5c);
      }
      uVar2 = 0x11;
    }
    FUN_4a169a1c(aiStack_64);
  }
  else {
    iVar12 = FUN_4a1461c0(param_1,0x2000000);
    if (iVar12 == 0) {
      iVar12 = FUN_4a1354f4(param_1);
      if (iVar12 == 0) {
LAB_4a077244:
        local_38 = 0;
      }
      else {
        iVar12 = local_2c - iVar13;
        if (iVar12 <= -iVar12) {
          iVar12 = -iVar12;
        }
        iVar11 = local_30 - iVar4;
        if (iVar11 <= -iVar11) {
          iVar11 = -iVar11;
        }
        if (iVar11 + iVar12 < 0x1000001) goto LAB_4a077244;
        local_38 = 1;
      }
      if (local_38 == 0) {
        uVar2 = 8;
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 6;
    }
  }
  local_3c = FUN_4a1461c0(param_1,0x2000000);
  FUN_4a107f20(param_1,0x3000000);
  puVar3 = (undefined4 *)FUN_4a0c6bc0(local_50);
  puVar1 = PTR_PTR_4a0776d8;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = puVar1;
  iStack_7c = iVar4;
  uStack_78 = uVar2;
  if ((local_38 & ~local_3c) == 0) {
    FUN_4a0f7080(aiStack_64,local_28,local_2c,local_30,iVar13);
    if (local_58 != (int *)0x0) {
      (**(code **)(*local_58 + 0xc))(local_58);
    }
    (**(code **)(local_50[0] + 0x1c))(local_50);
    piVar9 = aiStack_64;
    local_44 = local_58;
    local_48 = local_5c;
LAB_4a077508:
    FUN_4a16bef4(piVar9);
  }
  else {
    FUN_4a0f7080(aiStack_64,local_28,local_2c,local_30,iVar13);
    if (local_58 != (int *)0x0) {
      (**(code **)(*local_58 + 0xc))(local_58);
    }
    (**(code **)(local_50[0] + 0x1c))(local_50);
    local_44 = local_58;
    local_48 = local_5c;
    FUN_4a16bef4(aiStack_64);
    iVar11 = 0;
    iVar12 = local_48 >> 1;
    local_68 = -1;
    if (0 < iVar12) {
      do {
        if (local_44 == (int *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = local_44[2];
        }
        uVar2 = FUN_4a144cb0(local_28,*(undefined4 *)(iVar8 + iVar11 * 8));
        if (local_44 == (int *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = local_44[2];
        }
        uVar5 = FUN_4a144cb8(local_28,*(undefined4 *)(iVar8 + (iVar11 * 2 + 1) * 4));
        uVar7 = FUN_4a142f2c(local_28,uVar2,uVar5);
        iVar8 = iVar11;
      } while (((uVar7 & 0x40) == 0) && (iVar11 = iVar11 + 1, iVar8 = local_68, iVar11 < iVar12));
      local_68 = iVar8;
      if (local_68 != -1) {
        FUN_4a16be24(&iStack_7c,(local_68 + 1) * 2);
        FUN_4a0c740c(local_50,0,&iStack_7c,0,local_74);
        if (local_70 != (int *)0x0) {
          (**(code **)(*local_70 + 0xc))(local_70);
        }
        (**(code **)(local_50[0] + 0x1c))(local_50);
        local_44 = local_70;
        local_48 = local_74;
        FUN_4a1071e0(param_1,0x2000000);
        piVar9 = &iStack_7c;
        goto LAB_4a077508;
      }
    }
  }
  piVar9 = local_44;
  iVar12 = local_48;
  if ((local_34 != 0) && (local_48 == 2)) {
    FUN_4a071e74(param_1,10);
    goto LAB_4a0776c0;
  }
  if (local_48 < 2) {
    iVar12 = local_2c - iVar13;
    iVar11 = local_30 - iVar4;
    if (iVar12 <= -iVar12) {
      iVar12 = -iVar12;
    }
    if (iVar11 <= -iVar11) {
      iVar11 = -iVar11;
    }
    iVar10 = FUN_4a144a5c(local_28,iVar13,iVar4);
    piVar9 = local_44;
    iVar8 = local_48;
    if ((iVar10 == 0) || (0x200000 < iVar12 + iVar11)) {
      FUN_4a071ac4(param_1,0);
      goto LAB_4a0776c0;
    }
    if (iVar12 + iVar11 == 0) {
      FUN_4a071478(param_1);
      goto LAB_4a0776c0;
    }
    if (local_44 != (int *)0x0) {
      (**(code **)(*local_44 + 0xc))(local_44);
    }
    (**(code **)(*(int *)(param_1 + 0x114) + 0x1c))((int *)(param_1 + 0x114));
    *(int *)(param_1 + 0x11c) = iVar8;
    *(int **)(param_1 + 0x120) = piVar9;
    *(undefined4 *)(param_1 + 0x128) = 0;
    *(undefined1 *)(param_1 + 300) = 0;
    *(int *)(param_1 + 0x110) = iVar4;
    *(int *)(param_1 + 0x10c) = iVar13;
  }
  else {
    if (local_44 != (int *)0x0) {
      (**(code **)(*local_44 + 0xc))(local_44);
    }
    (**(code **)(*(int *)(param_1 + 0x114) + 0x1c))((int *)(param_1 + 0x114));
    *(int *)(param_1 + 0x11c) = iVar12;
    *(int **)(param_1 + 0x120) = piVar9;
    *(undefined4 *)(param_1 + 0x128) = 0;
    *(undefined1 *)(param_1 + 300) = 0;
    iVar12 = 0;
    if (local_44 == (int *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)local_44[2];
    }
    *(undefined4 *)(param_1 + 0x10c) = *puVar3;
    if (local_44 != (int *)0x0) {
      iVar12 = local_44[2];
    }
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(iVar12 + 4);
    FUN_4a072e84(param_1);
    if (local_3c != 0) {
      FUN_4a1071e0(param_1,0x1000000);
    }
  }
  FUN_4a074bac(param_1,3);
LAB_4a0776c0:
  FUN_4a16bef4(local_50);
  return;
}



// Address: 4a0776dc

/* WARNING: Removing unreachable block (ram,0x4a06f994) */
/* WARNING: Removing unreachable block (ram,0x4a06f998) */
/* WARNING: Removing unreachable block (ram,0x4a06f9a0) */
/* WARNING: Removing unreachable block (ram,0x4a06fa48) */
/* WARNING: Removing unreachable block (ram,0x4a06fa58) */
/* WARNING: Removing unreachable block (ram,0x4a06fa60) */
/* WARNING: Removing unreachable block (ram,0x4a06fa64) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff0 : 0x4a06fa34 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_4a0776dc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int in_r12;
  bool bVar8;
  
  switch(param_2 + -4) {
  case 0:
  case 1:
  case 3:
    uVar7 = 0x1000;
    break;
  case 2:
    uVar7 = 0x800;
    break;
  default:
    return param_2 + -4;
  case 5:
    FUN_4a1071e0(param_1,0x400);
    iVar1 = FUN_4a146ea4(*(undefined4 *)(param_1 + 0x20));
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_4a107058(param_1,1);
    FUN_4a0ca898(iVar1,0xb);
    iVar2 = *(int *)(iVar1 + 0x34);
    uVar7 = *(uint *)(iVar2 + 0x24);
    bVar8 = (uVar7 & 1) != 0;
    iVar1 = 0;
    if (bVar8) {
      in_r12 = *(int *)(iVar2 + 8);
      iVar1 = *(int *)(in_r12 + 8);
    }
    if (bVar8 && 0xfa < iVar1) {
      *(undefined4 *)(iVar2 + 0xc) = 0xfa;
      iVar1 = 0;
      if (*(int *)(in_r12 + 0xc) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(in_r12 + 0xc) + 8);
      }
      if (*(int *)(in_r12 + 0x20) != 0) {
        iVar1 = *(int *)(*(int *)(in_r12 + 0x20) + 8);
      }
      iVar5 = *(int *)(iVar2 + 0x10) * (int)*(short *)(iVar5 + 500);
      iVar1 = (int)*(short *)(iVar1 + 500) * *(int *)(iVar2 + 0x10);
      *(int *)(iVar2 + 0x18) = iVar5;
      *(int *)(iVar2 + 0x1c) = iVar1;
      if ((uVar7 & 8) == 0) {
        *(int *)(iVar2 + 0x14) = iVar5;
      }
      else {
        *(int *)(iVar2 + 0x14) = iVar1;
      }
      *(uint *)(iVar2 + 0x24) = uVar7 & 8 | 7;
      piVar6 = *(int **)(iVar2 + 0x28);
      if (piVar6 == (int *)0x0) {
        return iVar2;
      }
      uVar4 = *(undefined4 *)(iVar2 + 0x14);
      iVar2 = (**(code **)(*piVar6 + 0x30))(piVar6);
      iVar1 = 0;
      if (piVar6[2] != 0) {
        iVar1 = *(int *)(piVar6[2] + 0x10);
      }
      while (iVar1 = iVar1 + -1, -1 < iVar1) {
        iVar5 = *(int *)(*(int *)(piVar6[2] + 0x14) + iVar1 * 4);
        if ((*(uint *)(*(int *)(iVar5 + 0x2c) + 0x30) & 0x60000000) != 0) {
          uVar3 = FUN_4a1395b4(iVar5,uVar4);
          (**(code **)(*piVar6 + 0x1c))(piVar6,*(undefined4 *)(iVar5 + 0x30),uVar3);
        }
      }
      (**(code **)(*piVar6 + 0x24))(piVar6,uVar4);
      return iVar2;
    }
    return iVar2;
  }
  *(uint *)(param_1 + 0x38) = uVar7 | *(uint *)(param_1 + 0x38);
  return param_1;
}



// Address: 4a077780

/* WARNING: Removing unreachable block (ram,0x4a077794) */

void FUN_4a077780(undefined4 *param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = PTR_PTR_4a0778cc;
  *param_1 = *(undefined4 *)PTR_PTR_4a0778cc;
  iVar2 = FUN_4a0c6bc0(param_1 + 0x57);
  piVar3 = (int *)FUN_4a10a1d4(iVar2 + -0x15c,puVar1 + 4,param_2);
  iVar2 = *(int *)puVar1;
  *piVar3 = iVar2;
  *(undefined4 *)((int)piVar3 + *(int *)(iVar2 + -0xc)) = *(undefined4 *)(puVar1 + 0xc);
  puVar1 = PTR_PTR_4a0778d0;
  piVar3[2] = (int)PTR_PTR_4a0778d0;
  piVar3[4] = (int)(puVar1 + 0x20);
  piVar3[5] = (int)(puVar1 + 0x30);
  piVar3[6] = (int)(puVar1 + 0x40);
  piVar3[3] = (int)(puVar1 + 0x10);
  piVar3[1] = (int)(puVar1 + -0x10);
  piVar3[7] = (int)(puVar1 + 0x50);
  piVar3[0x2d] = 0;
  piVar3[0x2e] = 0;
  piVar3[0x2f] = 0;
  piVar3[0x30] = 0;
  piVar3[0x31] = 0;
  piVar3[0x32] = 0;
  piVar3[0x33] = 0;
  piVar3[0x34] = 0;
  piVar3[0x35] = 0;
  piVar3[0x36] = 0;
  piVar3[0x37] = 0;
  piVar3[0x38] = 0;
  piVar3[0x39] = 0;
  piVar3[0x3a] = 0;
  piVar3[0x3b] = 0;
  piVar3[0x3c] = 0;
  piVar3[0x3d] = 0;
  piVar3[0x3e] = 0;
  piVar3[0x3f] = 0;
  piVar3[0x40] = 0;
  piVar3[0x41] = 0;
  piVar3[0x42] = 0;
  piVar3[0x43] = 0;
  piVar3[0x44] = 0;
  iVar2 = FUN_4a16be24(piVar3 + 0x45,0);
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined1 *)(iVar2 + 0x18) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(undefined1 *)(iVar2 + 0x34) = 0;
  *(undefined1 *)(iVar2 + 0x35) = 0;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  *(undefined1 *)(iVar2 + 0x40) = 0;
  *(undefined4 *)(iVar2 + 0x44) = 0xffffffff;
  return;
}



// Address: 4a077900

int FUN_4a077900(int *param_1,int param_2,int *param_3)

{
  undefined *puVar1;
  int iVar2;
  
  if (param_2 != 0) {
    param_3 = (int *)PTR_PTR_4a077990;
  }
  iVar2 = *param_3;
  *param_1 = iVar2;
  *(int *)((int)param_1 + *(int *)(iVar2 + -0xc)) = param_3[3];
  puVar1 = PTR_PTR_4a077994;
  param_1[2] = (int)PTR_PTR_4a077994;
  param_1[4] = (int)(puVar1 + 0x20);
  param_1[5] = (int)(puVar1 + 0x30);
  param_1[6] = (int)(puVar1 + 0x40);
  param_1[3] = (int)(puVar1 + 0x10);
  param_1[1] = (int)(puVar1 + -0x10);
  param_1[7] = (int)(puVar1 + 0x50);
  iVar2 = FUN_4a16bef4(param_1 + 0x45);
  iVar2 = FUN_4a10a3f0(iVar2 + -0x114,param_3 + 1);
  if (param_2 != 0) {
    iVar2 = FUN_4a0c6bf4(iVar2 + 0x15c);
    return iVar2 + -0x15c;
  }
  return iVar2;
}



// Address: 4a077998

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a077998(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  if (*(int *)(param_1 + 0xcc) == 0) {
    return;
  }
  iVar1 = FUN_4a165910();
  FUN_4a0b470c(param_1,0);
  iVar1 = *(int *)(iVar1 + 0xdc);
  if (iVar1 == 0) {
    return;
  }
  iVar3 = *(int *)(iVar1 + 0x10);
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      if (*(int *)(*(int *)(iVar1 + 0x14) + iVar2 * 4) == param_1) goto LAB_4a0b4b20;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  iVar2 = -1;
LAB_4a0b4b20:
  if (iVar2 != -1) {
    iVar2 = iVar2 + 1;
    if (iVar2 < iVar3) {
      do {
        piVar5 = *(int **)(*(int *)(iVar1 + 0x14) + iVar2 * 4);
        piVar4 = *(int **)(*(int *)(iVar1 + 0x14) + (iVar2 + -1) * 4);
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 0xc))();
        }
        *(int **)(*(int *)(iVar1 + 0x14) + (iVar2 + -1) * 4) = piVar5;
        if ((piVar4 != (int *)0x0) && (iVar3 = (**(code **)(*piVar4 + 8))(piVar4), iVar3 != 0)) {
          (**(code **)(*piVar4 + 4))(piVar4);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(iVar1 + 0x10));
    }
    iVar2 = *(int *)(iVar1 + 0x10) + -1;
    piVar4 = *(int **)(*(int *)(iVar1 + 0x14) + iVar2 * 4);
    *(undefined4 *)(*(int *)(iVar1 + 0x14) + iVar2 * 4) = 0;
    if ((piVar4 != (int *)0x0) && (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 != 0)) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + -1;
    return;
  }
  return;
}



// Address: 4a0779c0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0779c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar6;
  
  if (param_3 == 0) {
    if (*(char *)(param_1 + 0xd9) != '\0') {
      return;
    }
    iVar4 = 0x32;
  }
  else {
    if (*(char *)(param_1 + 0xd8) != '\0') {
      return;
    }
    iVar4 = 0x31;
  }
  iVar5 = 0;
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  if (iVar1 == 0) {
    FUN_4a07ea80(param_1);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  iVar4 = FUN_4a136540(*(undefined4 *)(iVar5 + iVar4 * 4),0);
  if (iVar4 != 0) {
    uVar6 = param_3 == 0;
    if ((bool)uVar6) {
      *(undefined1 *)(param_1 + 0xd9) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0xd8) = 1;
    }
    uVar2 = FUN_4a171fac(param_2 % 4);
    uVar2 = FUN_4a17295c(uVar2,0xfffffffe);
    uVar3 = FUN_4a171fac((int)(param_2 + ((uint)(param_2 >> 0x1f) >> 0x1e)) >> 2);
    uVar3 = FUN_4a17295c(uVar3,0xfffffffd);
    uVar3 = FUN_4a1725c0(0x3f800000,uVar3);
    FUN_4a171da0(*(undefined4 *)(iVar4 + 0x28));
    if ((bool)uVar6) {
      FUN_4a171da0(*(undefined4 *)(iVar4 + 0x2c),uVar3);
    }
    if ((bool)uVar6) {
      FUN_4a171da0(*(undefined4 *)(iVar4 + 0x30),0);
    }
    if (!(bool)uVar6) {
      *(undefined4 *)(iVar4 + 0x28) = uVar2;
      *(undefined4 *)(iVar4 + 0x2c) = uVar3;
      *(undefined4 *)(iVar4 + 0x30) = 0;
      *(undefined1 *)(iVar4 + 200) = 0;
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a077a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a077aa8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a077aa8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    return;
  }
  do {
    iVar1 = FUN_4a165910();
    if (iVar1 != 0) {
      iVar2 = 0;
      iVar3 = 0;
      if (*(int *)(iVar1 + 0xdc) != 0) {
        iVar3 = *(int *)(*(int *)(iVar1 + 0xdc) + 0x10);
      }
      if (0 < iVar3) {
        do {
          FUN_4a077aa8(*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0xdc) + 0x14) + iVar2 * 4));
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar3);
      }
    }
    iVar1 = FUN_4a165858(param_1);
    if (iVar1 == 0) {
      return;
    }
    FUN_4a0b3e84();
    iVar1 = FUN_4a1657f4(param_1);
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a077b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    param_1 = *(int *)(iVar1 + 0x114);
  } while (param_1 != 0);
  return;
}



// Address: 4a077b38

undefined4 FUN_4a077b38(void)

{
  return *(undefined4 *)PTR_DAT_4a077b44;
}



// Address: 4a077b48

int * FUN_4a077b48(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  code *pcVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int *piVar18;
  int *piVar19;
  undefined *local_ac [2];
  int local_a4;
  int local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  int local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  uint local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined *local_38;
  int iStack_34;
  int local_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  iStack_28 = param_4;
  iVar2 = FUN_4a0ff494();
  local_3c = *(undefined4 *)(iVar2 + 0x60);
  iVar2 = FUN_4a0ff494();
  uVar15 = *(undefined4 *)(iVar2 + 0x51c);
  iVar2 = FUN_4a0ff494();
  uVar17 = *(undefined4 *)(iVar2 + 0x520);
  if (*(int *)(param_1 + 0xac) == 0) {
    iVar2 = FUN_4a0ff494();
    uVar16 = *(undefined4 *)(iVar2 + 0x60);
    FUN_4a0fb644();
    uVar3 = FUN_4a0982e0(uVar16,0xb5);
    *(undefined4 *)(param_1 + 0xac) = uVar3;
    switchD_4a1193c4::default(PTR_s_preloadSimAssets_male_4a0785c0);
    FUN_4a0fb644();
    uVar3 = FUN_4a0982e0(uVar16,0xb4);
    *(undefined4 *)(param_1 + 0xb4) = uVar3;
    switchD_4a1193c4::default(PTR_s_preloadSimAssets_female_4a17f147_1_4a0785c4);
    iVar2 = FUN_4a0b74b0(*(undefined4 *)(param_1 + 0xac),200);
    piVar4 = (int *)FUN_4a0b75a8(*(undefined4 *)(iVar2 + 0x114));
    *(int **)(param_1 + 0xb0) = piVar4;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))();
    }
    FUN_4a0788cc(param_1,*(undefined4 *)(param_1 + 0xb0));
    iVar2 = FUN_4a0b74b0(*(undefined4 *)(param_1 + 0xb4),0xfa);
    piVar4 = (int *)FUN_4a0b75a8(*(undefined4 *)(iVar2 + 0x114));
    *(int **)(param_1 + 0xb8) = piVar4;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))();
    }
    FUN_4a0788cc(param_1,*(undefined4 *)(param_1 + 0xb8));
  }
  FUN_4a0fb644();
  uVar3 = FUN_4a140fd0(uVar15,local_30,2);
  local_40 = FUN_4a140fd0(uVar15,local_30,0xb);
  uVar16 = FUN_4a140fd0(uVar15,local_30,5);
  local_44 = FUN_4a140fd0(uVar15,local_30,7);
  local_48 = FUN_4a140fd0(uVar15,local_30,9);
  local_4c = FUN_4a141668(uVar15,local_30,2);
  local_50 = FUN_4a141668(uVar15,local_30,0xb);
  local_54 = FUN_4a141668(uVar15,local_30,0xe);
  local_58 = FUN_4a141668(uVar15,local_30,5);
  uVar5 = FUN_4a141668(uVar15,local_30,7);
  uVar6 = FUN_4a141668(uVar15,local_30,9);
  local_5c = FUN_4a143e8c(uVar17,local_4c,uVar3);
  local_60 = FUN_4a1446c0(uVar17,local_4c,uVar3);
  local_64 = FUN_4a143c90(uVar17,local_50,local_40);
  local_68 = FUN_4a143e8c(uVar17,local_50,local_40);
  local_6c = FUN_4a1446c0(uVar17,local_50,local_40);
  local_70 = FUN_4a143e8c(uVar17,local_58,uVar16);
  local_74 = FUN_4a1446c0(uVar17,local_58,uVar16);
  local_78 = FUN_4a143e8c(uVar17,uVar5,local_44);
  local_7c = FUN_4a1446c0(uVar17,uVar5,local_44);
  local_80 = FUN_4a143e8c(uVar17,uVar6,local_48);
  local_84 = FUN_4a1446c0(uVar17,uVar6,local_48);
  if (param_4 != 0) {
    uVar3 = FUN_4a141668(uVar15,local_30,1);
    local_70 = FUN_4a143e8c(uVar17,uVar3,1);
    local_74 = 0;
    local_78 = FUN_4a143e8c(uVar17,uVar3,2);
    local_7c = 0;
    local_80 = FUN_4a143e8c(uVar17,uVar3,3);
    local_84 = 0;
  }
  iVar2 = FUN_4a141abc(uVar15,local_30);
  if (iVar2 == 0) {
    piVar4 = *(int **)(param_1 + 0xb4);
    uVar15 = *(undefined4 *)(param_1 + 0xb8);
  }
  else {
    piVar4 = *(int **)(param_1 + 0xac);
    uVar15 = *(undefined4 *)(param_1 + 0xb0);
  }
  local_88 = FUN_4a0b75a8(uVar15);
  if (local_6c == 0) {
    piVar7 = piVar4;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))(piVar4);
    }
  }
  else {
    piVar7 = (int *)FUN_4a0981f4(local_3c,local_6c);
  }
  piVar8 = piVar4;
  if ((local_74 == 0) || (iVar2 = FUN_4a13e0a8(local_74,local_6c), piVar8 = piVar7, iVar2 != 0)) {
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 0xc))(piVar8);
    }
  }
  else {
    piVar8 = (int *)FUN_4a0981f4(local_3c,local_74);
  }
  piVar9 = piVar4;
  if (((local_7c == 0) || (iVar2 = FUN_4a13e0a8(local_7c,local_6c), piVar9 = piVar7, iVar2 != 0)) ||
     (iVar2 = FUN_4a13e0a8(local_7c,local_74), piVar9 = piVar8, iVar2 != 0)) {
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 0xc))(piVar9);
    }
  }
  else {
    piVar9 = (int *)FUN_4a0981f4(local_3c,local_7c);
  }
  piVar10 = piVar4;
  if (((local_84 == 0) || (iVar2 = FUN_4a13e0a8(local_84,local_6c), piVar10 = piVar7, iVar2 != 0))
     || ((iVar2 = FUN_4a13e0a8(local_84,local_74), piVar10 = piVar8, iVar2 != 0 ||
         (iVar2 = FUN_4a13e0a8(local_84,local_7c), piVar10 = piVar9, iVar2 != 0)))) {
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 0xc))(piVar10);
    }
  }
  else {
    piVar10 = (int *)FUN_4a0981f4(local_3c,local_84);
  }
  piVar19 = (int *)0x0;
  if ((local_64 & 2) != 0) {
    uVar15 = FUN_4a143e8c(uVar17,local_54,local_40);
    iVar2 = FUN_4a0b74b0(piVar7,uVar15);
    piVar19 = (int *)FUN_4a0b75a8(*(undefined4 *)(iVar2 + 0xcc));
    if (piVar19 != (int *)0x0) {
      (**(code **)(*piVar19 + 0xc))(piVar19);
    }
  }
  piVar18 = (int *)0x0;
  if ((local_64 & 1) == 0) {
    if (local_60 == 0) {
      iVar2 = FUN_4a0b74b0(piVar4,local_5c);
      piVar4 = (int *)FUN_4a0b75a8(*(undefined4 *)(iVar2 + 0xcc));
      piVar18 = piVar4;
      if (piVar4 != (int *)0x0) {
        pcVar13 = *(code **)(*piVar4 + 0xc);
        goto LAB_4a0781cc;
      }
    }
    else {
      iVar2 = FUN_4a13e0a8(local_60,local_6c);
      piVar4 = piVar7;
      if (((iVar2 == 0) && (iVar2 = FUN_4a13e0a8(local_60,local_74), piVar4 = piVar8, iVar2 == 0))
         && ((iVar2 = FUN_4a13e0a8(local_60,local_7c), piVar4 = piVar9, iVar2 == 0 &&
             (iVar2 = FUN_4a13e0a8(local_60,local_84), piVar4 = piVar10, iVar2 == 0)))) {
        piVar4 = (int *)FUN_4a0981f4(local_3c,local_60);
      }
      else if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0xc))(piVar4);
      }
      iVar2 = FUN_4a0b74b0(piVar4,local_5c);
      piVar18 = *(int **)(iVar2 + 0xcc);
      if (piVar18 != (int *)0x0) {
        (**(code **)(*piVar18 + 0xc))(piVar18);
      }
      if ((piVar4 != (int *)0x0) && (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 != 0)) {
        pcVar13 = *(code **)(*piVar4 + 4);
LAB_4a0781cc:
        (*pcVar13)(piVar4);
      }
    }
  }
  FUN_4a0fb644();
  FUN_4a0b74b0(piVar7,local_68);
  local_8c = FUN_4a1657f4();
  FUN_4a0b74b0(piVar8,local_70);
  local_90 = FUN_4a1657f4();
  FUN_4a0b74b0(piVar9,local_78);
  local_94 = FUN_4a1657f4();
  FUN_4a0b74b0(piVar10,local_80);
  local_98 = FUN_4a1657f4();
  switchD_4a1193c4::default(s_getSimModel_gather_4a0785c8);
  piVar4 = (int *)FUN_4a0c6bc0(local_ac);
  piVar4[2] = 0;
  piVar4[3] = 0;
  local_38 = PTR_PTR_4a0785dc;
  *piVar4 = (int)PTR_PTR_4a0785dc;
  iVar2 = FUN_4a15e080(0x10);
  if (iVar2 == 0) {
    iVar2 = FUN_4a1669a8();
  }
  iVar11 = 0;
  do {
    *(undefined4 *)(iVar2 + iVar11 * 4) = 0;
    iVar11 = iVar11 + 1;
  } while (iVar11 < 4);
  thunk_FUN_4a161570(0x18,4);
  puVar12 = (undefined4 *)FUN_4a0c0628();
  puVar1 = PTR_PTR_4a0785e0;
  *puVar12 = PTR_PTR_4a0785e0;
  puVar12[3] = 4;
  puVar12[2] = iVar2;
  puVar12[4] = 4;
  *(undefined1 *)(puVar12 + 5) = 1;
  if (puVar12 != (undefined4 *)0x0) {
    (**(code **)(puVar1 + 0xc))(puVar12);
  }
  (**(code **)(*piVar4 + 0x1c))(piVar4);
  piVar4[3] = (int)puVar12;
  piVar4[2] = 4;
  uVar15 = FUN_4a0b75a8(local_8c);
  if (local_a0 == 0) {
    puVar12 = (undefined4 *)0x0;
  }
  else {
    puVar12 = *(undefined4 **)(local_a0 + 8);
  }
  *puVar12 = uVar15;
  if (local_a0 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *(int **)(local_a0 + 8);
  }
  if ((int *)*piVar4 != (int *)0x0) {
    (**(code **)(*(int *)*piVar4 + 0xc))();
  }
  uVar15 = FUN_4a0b75a8(local_90);
  iVar2 = 0;
  if (local_a0 != 0) {
    iVar2 = *(int *)(local_a0 + 8);
  }
  *(undefined4 *)(iVar2 + 4) = uVar15;
  iVar2 = 0;
  if (local_a0 != 0) {
    iVar2 = *(int *)(local_a0 + 8);
  }
  if (*(int **)(iVar2 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(iVar2 + 4) + 0xc))();
  }
  uVar15 = FUN_4a0b75a8(local_94);
  iVar2 = 0;
  if (local_a0 != 0) {
    iVar2 = *(int *)(local_a0 + 8);
  }
  *(undefined4 *)(iVar2 + 8) = uVar15;
  iVar2 = 0;
  if (local_a0 != 0) {
    iVar2 = *(int *)(local_a0 + 8);
  }
  if (*(int **)(iVar2 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(iVar2 + 8) + 0xc))();
  }
  uVar15 = FUN_4a0b75a8(local_98);
  iVar2 = 0;
  if (local_a0 != 0) {
    iVar2 = *(int *)(local_a0 + 8);
  }
  *(undefined4 *)(iVar2 + 0xc) = uVar15;
  iVar2 = 0;
  if (local_a0 != 0) {
    iVar2 = *(int *)(local_a0 + 8);
  }
  if (*(int **)(iVar2 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(iVar2 + 0xc) + 0xc))();
  }
  FUN_4a0fb644();
  iVar2 = 0;
  if (0 < local_a4) {
    do {
      iVar11 = 0;
      if (local_a0 != 0) {
        iVar11 = *(int *)(local_a0 + 8);
      }
      FUN_4a0788cc(param_1,*(undefined4 *)(*(int *)(iVar11 + iVar2 * 4) + 0x114));
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_a4);
  }
  switchD_4a1193c4::default(s_getSimModel_cull_hair_4a0785e4);
  piVar4 = (int *)FUN_4a07db54(local_ac,local_88);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))(piVar4);
  }
  if ((piVar7 != (int *)0x0) && (iVar2 = (**(code **)(*piVar7 + 8))(piVar7), iVar2 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  if ((piVar8 != (int *)0x0) && (iVar2 = (**(code **)(*piVar8 + 8))(piVar8), iVar2 != 0)) {
    (**(code **)(*piVar8 + 4))(piVar8);
  }
  if ((piVar9 != (int *)0x0) && (iVar2 = (**(code **)(*piVar9 + 8))(piVar9), iVar2 != 0)) {
    (**(code **)(*piVar9 + 4))(piVar9);
  }
  if ((piVar10 != (int *)0x0) && (iVar2 = (**(code **)(*piVar10 + 8))(piVar10), iVar2 != 0)) {
    (**(code **)(*piVar10 + 4))(piVar10);
  }
  iVar2 = 0;
  puVar12 = (undefined4 *)0x0;
  if (local_a0 != 0) {
    puVar12 = *(undefined4 **)(local_a0 + 8);
  }
  piVar7 = (int *)*puVar12;
  if ((piVar7 != (int *)0x0) && (iVar11 = (**(code **)(*piVar7 + 8))(piVar7), iVar11 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  if (local_a0 == 0) {
    puVar12 = (undefined4 *)0x0;
  }
  else {
    puVar12 = *(undefined4 **)(local_a0 + 8);
  }
  *puVar12 = 0;
  if (local_a0 == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(local_a0 + 8);
  }
  piVar7 = *(int **)(iVar11 + 4);
  if ((piVar7 != (int *)0x0) && (iVar11 = (**(code **)(*piVar7 + 8))(piVar7), iVar11 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  if (local_a0 == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(local_a0 + 8);
  }
  *(undefined4 *)(iVar11 + 4) = 0;
  if (local_a0 == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(local_a0 + 8);
  }
  piVar7 = *(int **)(iVar11 + 8);
  if ((piVar7 != (int *)0x0) && (iVar11 = (**(code **)(*piVar7 + 8))(piVar7), iVar11 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  if (local_a0 == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(local_a0 + 8);
  }
  *(undefined4 *)(iVar11 + 8) = 0;
  if (local_a0 == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(local_a0 + 8);
  }
  piVar7 = *(int **)(iVar11 + 0xc);
  if ((piVar7 != (int *)0x0) && (iVar11 = (**(code **)(*piVar7 + 8))(piVar7), iVar11 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  if (local_a0 == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(local_a0 + 8);
  }
  *(undefined4 *)(iVar11 + 0xc) = 0;
  FUN_4a0fb644();
  if (piVar18 != (int *)0x0 || piVar19 != (int *)0x0) {
    uVar15 = FUN_4a0b74b0(piVar4,0x2be);
    if (piVar18 != (int *)0x0) {
      FUN_4a0b4c10(uVar15,piVar18);
      iVar11 = (**(code **)(*piVar18 + 8))(piVar18);
      if (iVar11 != 0) {
        (**(code **)(*piVar18 + 4))(piVar18);
      }
    }
    if (piVar19 != (int *)0x0) {
      FUN_4a0b4c10(uVar15,piVar19);
      iVar11 = (**(code **)(*piVar19 + 8))(piVar19);
      if (iVar11 != 0) {
        (**(code **)(*piVar19 + 4))(piVar19);
      }
    }
  }
  switchD_4a1193c4::default(s_getSimModel_add_hair_4a078884);
  FUN_4a0fb644();
  FUN_4a07c63c(param_1,piVar4,local_30);
  switchD_4a1193c4::default(s_getSimModel_apps_4a07889c);
  iVar11 = FUN_4a0b74b0(piVar4,700);
  if (iVar11 != 0) {
    if (*(int *)(param_1 + 0x40) == 0) {
      iVar14 = 0;
    }
    else {
      iVar14 = *(int *)(*(int *)(param_1 + 0x40) + 8);
    }
    iVar14 = *(int *)(iVar14 + local_30 * 0x14 + 0xc);
    if (iVar14 != 0) {
      iVar2 = *(int *)(iVar14 + 8);
    }
    FUN_4a07b778(iVar11,*(undefined4 *)(iVar2 + 0xc));
  }
  switchD_4a1193c4::default(s_getSimModel_4a0788b0);
  local_ac[0] = local_38;
  iVar2 = FUN_4a0bcc84(local_ac);
  if (iVar2 != 0) {
    iVar11 = 0;
    if (0 < local_a4) {
      do {
        iVar11 = iVar11 + 1;
      } while (iVar11 < local_a4);
      if (iVar2 == 0) goto LAB_4a07886c;
    }
    FUN_4a14f21c();
  }
LAB_4a07886c:
  FUN_4a0c6bf4(local_ac);
  return piVar4;
}



// Address: 4a0788bc

void FUN_4a0788bc(int param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 0x84) + 0x38) = param_2;
  return;
}



// Address: 4a0788c4

void FUN_4a0788c4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x84);
  *(undefined4 *)(iVar1 + 0x30) = param_2;
  *(undefined4 *)(iVar1 + 0x34) = param_3;
  return;
}



// Address: 4a0788cc

void FUN_4a0788cc(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  undefined1 auStack_38 [8];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0(auStack_38);
  *puVar1 = PTR_PTR_4a078b68;
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
        iVar7 = iVar2 + 1;
        *(undefined4 *)(puVar1[5] + iVar2 * 4) = *(undefined4 *)(iVar2 * 4);
        iVar2 = iVar7;
      } while (iVar7 < (int)puVar1[4]);
    }
    thunk_FUN_4a161530(0);
  }
  iVar2 = puVar1[4];
  if ((int)puVar1[4] < (int)puVar1[3]) {
    do {
      iVar7 = iVar2 + 1;
      *(undefined4 *)(puVar1[5] + iVar2 * 4) = 0;
      iVar2 = iVar7;
    } while (iVar7 < (int)puVar1[3]);
  }
  iVar7 = FUN_4a0b74b0(param_2,0x2be);
  iVar9 = 0;
  iVar2 = 0;
  if (*(int *)(iVar7 + 0xdc) != 0) {
    iVar2 = *(int *)(*(int *)(iVar7 + 0xdc) + 0x10);
  }
  if (0 < iVar2) {
    do {
      piVar10 = *(int **)(*(int *)(*(int *)(iVar7 + 0xdc) + 0x14) + iVar9 * 4);
      iVar3 = FUN_4a165910(piVar10);
      iVar5 = local_24;
      if (piVar10[3] == 0) {
        iVar4 = 0;
        if (iVar3 != 0) {
          iVar4 = *(int *)(iVar3 + 0xdc);
        }
        if (((iVar3 != 0 && iVar4 != 0) && (*(int *)(iVar4 + 0x10) == 1)) &&
           (*(int *)(**(int **)(iVar4 + 0x14) + 0xc) != 0)) {
          if ((local_28 == local_2c) && (iVar3 = local_2c + local_30, local_2c < iVar3)) {
            local_2c = iVar3;
            local_24 = thunk_FUN_4a161570(iVar3 * 4);
            iVar3 = local_28;
            if (local_24 != 0) {
              iVar3 = 0;
              if (0 < local_28) {
                do {
                  *(undefined4 *)(local_24 + iVar3 * 4) = *(undefined4 *)(iVar5 + iVar3 * 4);
                  iVar3 = iVar3 + 1;
                } while (iVar3 < local_28);
              }
              thunk_FUN_4a161530(iVar5);
              iVar3 = local_28;
            }
            for (; iVar3 < local_2c; iVar3 = iVar3 + 1) {
              *(undefined4 *)(local_24 + iVar3 * 4) = 0;
            }
          }
          iVar5 = local_28;
          iVar3 = local_28 + 1;
          piVar8 = *(int **)(local_24 + local_28 * 4);
          local_28 = iVar3;
          if (piVar10 != (int *)0x0) {
            (**(code **)(*piVar10 + 0xc))();
          }
          *(int **)(local_24 + iVar5 * 4) = piVar10;
          if ((piVar8 != (int *)0x0) && (iVar5 = (**(code **)(*piVar8 + 8))(piVar8), iVar5 != 0)) {
            (**(code **)(*piVar8 + 4))(piVar8);
          }
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar2);
  }
  iVar2 = 0;
  if (0 < local_28) {
    do {
      iVar7 = *(int *)(local_24 + iVar2 * 4);
      if (*(int *)(iVar7 + 0xcc) != 0) {
        uVar6 = FUN_4a165910();
        FUN_4a0b4ac8(uVar6,iVar7);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_28);
  }
  FUN_4a16d7b4(auStack_38);
  return;
}



// Address: 4a078b6c

undefined4 FUN_4a078b6c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  if (iVar1 == 0) {
    FUN_4a07ea80(param_1);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  return *(undefined4 *)(iVar2 + param_2 * 4);
}



// Address: 4a078bb0

void FUN_4a078bb0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  code *pcVar12;
  int *piVar13;
  undefined4 uVar14;
  
  iVar1 = FUN_4a0ff494();
  uVar2 = *(undefined4 *)(iVar1 + 0x60);
  uVar3 = FUN_4a0642fc();
  iVar1 = 0;
  if (param_2 == 2) {
LAB_4a078eb8:
    if (*(int *)(param_1 + 0xbc) == 3) {
      iVar5 = 0;
      if (0 < *(int *)(param_1 + 100)) {
        do {
          if (*(int *)(param_1 + 0x68) == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(*(int *)(param_1 + 0x68) + 8);
          }
          iVar6 = *(int *)(iVar6 + iVar5 * 0x14 + 0xc);
          if (iVar6 == 0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            puVar4 = *(undefined4 **)(iVar6 + 8);
          }
          FUN_4a0a7c84(*puVar4,0);
          if (*(int *)(param_1 + 0x68) == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(*(int *)(param_1 + 0x68) + 8);
          }
          iVar6 = *(int *)(iVar6 + iVar5 * 0x14 + 0xc);
          if (iVar6 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(iVar6 + 8);
          }
          FUN_4a0a7c84(*(undefined4 *)(iVar6 + 8),0);
          if (*(int *)(param_1 + 0x68) == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(*(int *)(param_1 + 0x68) + 8);
          }
          iVar6 = *(int *)(iVar6 + iVar5 * 0x14 + 0xc);
          if (iVar6 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(iVar6 + 8);
          }
          FUN_4a0a7c84(*(undefined4 *)(iVar6 + 0x10),0);
          if (*(int *)(param_1 + 0x68) == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(*(int *)(param_1 + 0x68) + 8);
          }
          iVar6 = *(int *)(iVar6 + iVar5 * 0x14 + 0xc);
          if (iVar6 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(iVar6 + 8);
          }
          FUN_4a0a7c84(*(undefined4 *)(iVar6 + 0x14),0);
          if (*(int *)(param_1 + 0x68) == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(*(int *)(param_1 + 0x68) + 8);
          }
          iVar6 = *(int *)(iVar6 + iVar5 * 0x14 + 0xc);
          if (iVar6 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(iVar6 + 8);
          }
          FUN_4a0a7c84(*(undefined4 *)(iVar6 + 0xc),0);
          if (*(int *)(param_1 + 0x68) == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(*(int *)(param_1 + 0x68) + 8);
          }
          iVar6 = *(int *)(iVar6 + iVar5 * 0x14 + 0xc);
          if (iVar6 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(iVar6 + 8);
          }
          FUN_4a0a7c84(*(undefined4 *)(iVar6 + 4),0);
          if (*(int *)(param_1 + 0x68) == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(*(int *)(param_1 + 0x68) + 8);
          }
          iVar6 = *(int *)(iVar6 + iVar5 * 0x14 + 0xc);
          if (iVar6 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(iVar6 + 8);
          }
          FUN_4a0a7c84(*(undefined4 *)(iVar6 + 0x24),0);
          if (*(int *)(param_1 + 0x68) == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(*(int *)(param_1 + 0x68) + 8);
          }
          iVar6 = *(int *)(iVar6 + iVar5 * 0x14 + 0xc);
          if (iVar6 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(iVar6 + 8);
          }
          FUN_4a0a7c84(*(undefined4 *)(iVar6 + 0x28),0);
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(param_1 + 100));
      }
      if (*(int *)(param_1 + 0x2c) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
      }
      FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0xe0),0);
      if (*(int *)(param_1 + 0x2c) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
      }
      FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0xdc),0);
    }
    if (param_2 == 2 || param_2 == 3) goto LAB_4a07911c;
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0xc4),0);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 200),0);
    if (param_2 != 5) goto LAB_4a07911c;
LAB_4a079224:
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x2c),0);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x30),0);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x34),0);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x38),0);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x3c),0);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0xa8),0);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0xd0),0);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0xd4),0);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0xd8),0);
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 100)) {
      do {
        if (*(int *)(param_1 + 0x68) == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(*(int *)(param_1 + 0x68) + 8);
        }
        iVar6 = *(int *)(iVar6 + iVar5 * 0x14 + 0xc);
        if (iVar6 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(iVar6 + 8);
        }
        FUN_4a0a7c84(*(undefined4 *)(iVar6 + 0x18),0);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_1 + 100));
    }
    if (param_2 != 1) goto LAB_4a0793a4;
LAB_4a07a36c:
    if (*(int *)(param_1 + 0xbc) == 1) goto LAB_4a07a56c;
    piVar13 = (int *)FUN_4a0986e4(uVar2,0xf6);
    FUN_4a0b7a54(piVar13,0xd2,0xd1);
    FUN_4a0b7a40(piVar13,0xe3);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x7c),0,piVar13);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x8c),0,piVar13);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x84),0,piVar13);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x80),0,piVar13);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x90),0,piVar13);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x88),0,piVar13);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x9c),0,piVar13);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x94),0,piVar13);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x98),0,piVar13);
    if ((piVar13 != (int *)0x0) && (iVar5 = (**(code **)(*piVar13 + 8))(piVar13), iVar5 != 0)) {
      (**(code **)(*piVar13 + 4))(piVar13);
    }
    piVar13 = (int *)FUN_4a0986e4(uVar2,0x121);
    FUN_4a0b7a54(piVar13,0xd2,0xd1);
    if (*(int *)(param_1 + 0x2c) != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar1 + 0xcc),0,piVar13);
    if ((piVar13 == (int *)0x0) || (iVar1 = (**(code **)(*piVar13 + 8))(piVar13), iVar1 == 0))
    goto LAB_4a07a56c;
    pcVar12 = *(code **)(*piVar13 + 4);
  }
  else {
    if (param_2 != 3) {
      if (param_2 != 5) {
        if (*(int *)(param_1 + 0x2c) == 0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x2c) + 8);
        }
        FUN_4a0a7c84(*puVar4,0);
        if (*(int *)(param_1 + 0x2c) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
        }
        FUN_4a0a7c84(*(undefined4 *)(iVar5 + 4),0);
        if (*(int *)(param_1 + 0x2c) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
        }
        FUN_4a0a7c84(*(undefined4 *)(iVar5 + 8),0);
        if (*(int *)(param_1 + 0x2c) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
        }
        FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0xb4),0);
        if (*(int *)(param_1 + 0x2c) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
        }
        FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0xac),0);
        if (*(int *)(param_1 + 0x2c) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
        }
        FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0xb0),0);
        if (*(int *)(param_1 + 0x2c) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
        }
        FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0xb8),0);
        if (*(int *)(param_1 + 0x2c) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
        }
        FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0xbc),0);
        if (*(int *)(param_1 + 0x2c) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
        }
        FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0xc),0);
        if (*(int *)(param_1 + 0x2c) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
        }
        FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x10),0);
        if (*(int *)(param_1 + 0x2c) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
        }
        FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x14),0);
        if (*(int *)(param_1 + 0x2c) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
        }
        FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x18),0);
        if (*(int *)(param_1 + 0x2c) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
        }
        FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x1c),0);
        if (*(int *)(param_1 + 0x2c) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
        }
        FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x20),0);
        if (*(int *)(param_1 + 0x2c) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
        }
        FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x6c),0);
        if (*(int *)(param_1 + 0x2c) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
        }
        FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x70),0);
        if (*(int *)(param_1 + 0x2c) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
        }
        FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x74),0);
        if (*(int *)(param_1 + 0x2c) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
        }
        FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x78),0);
        iVar5 = 0;
        if (0 < *(int *)(param_1 + 0xa0)) {
          do {
            if (*(int *)(param_1 + 0xa4) == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(*(int *)(param_1 + 0xa4) + 8);
            }
            piVar13 = *(int **)(iVar6 + iVar5 * 4);
            if ((piVar13 != (int *)0x0) &&
               (iVar6 = (**(code **)(*piVar13 + 8))(piVar13), iVar6 != 0)) {
              (**(code **)(*piVar13 + 4))(piVar13);
            }
            if (*(int *)(param_1 + 0xa4) == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(*(int *)(param_1 + 0xa4) + 8);
            }
            *(undefined4 *)(iVar6 + iVar5 * 4) = 0;
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(param_1 + 0xa0));
          if (param_2 == 3) goto LAB_4a07911c;
        }
      }
      goto LAB_4a078eb8;
    }
LAB_4a07911c:
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x40),0);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x44),0);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x48),0);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x4c),0);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x50),0);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x54),0);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x58),0);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x5c),0);
    if (param_2 != 4) goto LAB_4a079224;
LAB_4a0793a4:
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x8c),0);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x7c),0);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x84),0);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x90),0);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x80),0);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x88),0);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x9c),0);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x94),0);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x98),0);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0xcc),0);
    if (((param_2 == 2 || param_2 == 3) || param_2 == 5) &&
       (iVar5 = *(int *)(param_1 + 0xbc), (iVar5 != 2 && iVar5 != 3) && iVar5 != 5)) {
      piVar13 = (int *)FUN_4a0986e4(uVar2,0x120);
      FUN_4a0b7a54(piVar13,0xd2,0xd1);
      if (*(int *)(param_1 + 0x2c) == 0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x2c) + 8);
      }
      FUN_4a0a7c84(*puVar4,0,piVar13);
      if (*(int *)(param_1 + 0x2c) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
      }
      FUN_4a0a7c84(*(undefined4 *)(iVar5 + 4),0,piVar13);
      if (*(int *)(param_1 + 0x2c) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
      }
      FUN_4a0a7c84(*(undefined4 *)(iVar5 + 8),0,piVar13);
      if (*(int *)(param_1 + 0x2c) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
      }
      FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0xb4),0,piVar13);
      if (*(int *)(param_1 + 0x2c) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
      }
      FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0xac),0,piVar13);
      if (*(int *)(param_1 + 0x2c) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
      }
      FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0xb0),0,piVar13);
      if (*(int *)(param_1 + 0x2c) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
      }
      FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0xb8),0,piVar13);
      if (*(int *)(param_1 + 0x2c) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
      }
      FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0xbc),0,piVar13);
      if ((piVar13 != (int *)0x0) && (iVar5 = (**(code **)(*piVar13 + 8))(piVar13), iVar5 != 0)) {
        (**(code **)(*piVar13 + 4))(piVar13);
      }
      piVar13 = (int *)FUN_4a0986e4(uVar2,0xfa);
      FUN_4a0b7a54(piVar13,0xd2,0xd1);
      if (*(int *)(param_1 + 0x2c) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
      }
      FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0xc),0,piVar13);
      if (*(int *)(param_1 + 0x2c) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
      }
      FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x10),0,piVar13);
      if (*(int *)(param_1 + 0x2c) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
      }
      FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x14),0,piVar13);
      if (*(int *)(param_1 + 0x2c) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
      }
      FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x18),0,piVar13);
      if (*(int *)(param_1 + 0x2c) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
      }
      FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x1c),0,piVar13);
      if (*(int *)(param_1 + 0x2c) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
      }
      FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x20),0,piVar13);
      if ((piVar13 != (int *)0x0) && (iVar5 = (**(code **)(*piVar13 + 8))(piVar13), iVar5 != 0)) {
        (**(code **)(*piVar13 + 4))(piVar13);
      }
      piVar13 = (int *)FUN_4a0986e4(uVar2,0xf9);
      FUN_4a0b7a54(piVar13,0xd2,0xd1);
      if (*(int *)(param_1 + 0x2c) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
      }
      FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x6c),0,piVar13);
      if (*(int *)(param_1 + 0x2c) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
      }
      FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x70),0,piVar13);
      if (*(int *)(param_1 + 0x2c) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
      }
      FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x74),0,piVar13);
      if (*(int *)(param_1 + 0x2c) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
      }
      FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x78),0,piVar13);
      if ((piVar13 != (int *)0x0) && (iVar5 = (**(code **)(*piVar13 + 8))(piVar13), iVar5 != 0)) {
        (**(code **)(*piVar13 + 4))(piVar13);
      }
    }
    if (param_2 == 3) {
      if (*(int *)(param_1 + 0xbc) == 3) goto LAB_4a07a56c;
      iVar5 = 0;
      if (0 < *(int *)(param_1 + 100)) {
        do {
          piVar13 = (int *)FUN_4a0652a4(uVar3,iVar5);
          if (piVar13 != (int *)0x0) {
            (**(code **)(*piVar13 + 0xc))(piVar13);
            piVar7 = (int *)FUN_4a098598(uVar2,piVar13);
            FUN_4a0b7a54(piVar7,0xd2,0xd1);
            if (*(int *)(param_1 + 0x68) == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(*(int *)(param_1 + 0x68) + 8);
            }
            iVar6 = *(int *)(iVar6 + iVar5 * 0x14 + 0xc);
            if (iVar6 == 0) {
              puVar4 = (undefined4 *)0x0;
            }
            else {
              puVar4 = *(undefined4 **)(iVar6 + 8);
            }
            FUN_4a0a7c84(*puVar4,0,piVar7);
            if (*(int *)(param_1 + 0x68) == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(*(int *)(param_1 + 0x68) + 8);
            }
            iVar6 = *(int *)(iVar6 + iVar5 * 0x14 + 0xc);
            if (iVar6 == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(iVar6 + 8);
            }
            FUN_4a0a7c84(*(undefined4 *)(iVar6 + 8),0,piVar7);
            if (*(int *)(param_1 + 0x68) == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(*(int *)(param_1 + 0x68) + 8);
            }
            iVar6 = *(int *)(iVar6 + iVar5 * 0x14 + 0xc);
            if (iVar6 == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(iVar6 + 8);
            }
            FUN_4a0a7c84(*(undefined4 *)(iVar6 + 0x10),0,piVar7);
            if (*(int *)(param_1 + 0x68) == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(*(int *)(param_1 + 0x68) + 8);
            }
            iVar6 = *(int *)(iVar6 + iVar5 * 0x14 + 0xc);
            if (iVar6 == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(iVar6 + 8);
            }
            FUN_4a0a7c84(*(undefined4 *)(iVar6 + 0x14),0,piVar7);
            if (*(int *)(param_1 + 0x68) == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(*(int *)(param_1 + 0x68) + 8);
            }
            iVar6 = *(int *)(iVar6 + iVar5 * 0x14 + 0xc);
            if (iVar6 == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(iVar6 + 8);
            }
            FUN_4a0a7c84(*(undefined4 *)(iVar6 + 0xc),0,piVar7);
            if (*(int *)(param_1 + 0x68) == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(*(int *)(param_1 + 0x68) + 8);
            }
            iVar6 = *(int *)(iVar6 + iVar5 * 0x14 + 0xc);
            if (iVar6 == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(iVar6 + 8);
            }
            FUN_4a0a7c84(*(undefined4 *)(iVar6 + 4),0,piVar7);
            if (*(int *)(param_1 + 0x68) == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(*(int *)(param_1 + 0x68) + 8);
            }
            iVar6 = *(int *)(iVar6 + iVar5 * 0x14 + 0xc);
            if (iVar6 == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(iVar6 + 8);
            }
            FUN_4a0a7c84(*(undefined4 *)(iVar6 + 0x24),0,piVar7);
            if (*(int *)(param_1 + 0x68) == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(*(int *)(param_1 + 0x68) + 8);
            }
            iVar6 = *(int *)(iVar6 + iVar5 * 0x14 + 0xc);
            if (iVar6 == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(iVar6 + 8);
            }
            FUN_4a0a7c84(*(undefined4 *)(iVar6 + 0x28),0,piVar7);
            if ((piVar7 != (int *)0x0) && (iVar6 = (**(code **)(*piVar7 + 8))(piVar7), iVar6 != 0))
            {
              (**(code **)(*piVar7 + 4))(piVar7);
            }
          }
          piVar8 = (int *)FUN_4a065390(uVar3,iVar5);
          piVar7 = piVar13;
          if (piVar13 != piVar8) {
            if (piVar8 != (int *)0x0) {
              (**(code **)(*piVar8 + 0xc))(piVar8);
            }
            piVar7 = piVar8;
            if ((piVar13 != (int *)0x0) &&
               (iVar6 = (**(code **)(*piVar13 + 8))(piVar13), iVar6 != 0)) {
              (**(code **)(*piVar13 + 4))(piVar13);
            }
          }
          if (piVar7 != (int *)0x0) {
            piVar13 = (int *)FUN_4a098598(uVar2,piVar7);
            FUN_4a0b7a54(piVar13,0xd2,0xd1);
            if (*(int *)(param_1 + 0x68) == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(*(int *)(param_1 + 0x68) + 8);
            }
            iVar6 = *(int *)(iVar6 + iVar5 * 0x14 + 0xc);
            if (iVar6 == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(iVar6 + 8);
            }
            FUN_4a0a7c84(*(undefined4 *)(iVar6 + 0x1c),0,piVar13);
            if (*(int *)(param_1 + 0x68) == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(*(int *)(param_1 + 0x68) + 8);
            }
            iVar6 = *(int *)(iVar6 + iVar5 * 0x14 + 0xc);
            if (iVar6 == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(iVar6 + 8);
            }
            FUN_4a0a7c84(*(undefined4 *)(iVar6 + 0x20),0,piVar13);
            if ((piVar13 != (int *)0x0) &&
               (iVar6 = (**(code **)(*piVar13 + 8))(piVar13), iVar6 != 0)) {
              (**(code **)(*piVar13 + 4))(piVar13);
            }
          }
          if ((piVar7 != (int *)0x0) && (iVar6 = (**(code **)(*piVar7 + 8))(piVar7), iVar6 != 0)) {
            (**(code **)(*piVar7 + 4))(piVar7);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(param_1 + 100));
      }
      iVar5 = FUN_4a0ff494();
      piVar13 = (int *)FUN_4a0d92dc(*(undefined4 *)(iVar5 + 0x51c));
      if (piVar13 != (int *)0x0) {
        (**(code **)(*piVar13 + 0xc))();
      }
      iVar5 = 0;
      if (piVar13 != (int *)0x0) {
        piVar7 = (int *)FUN_4a098598(uVar2,piVar13);
        FUN_4a0b7a54(piVar7,0xd2,0xd1);
        if (*(int *)(param_1 + 0x2c) == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
        }
        FUN_4a0a7c84(*(undefined4 *)(iVar6 + 0xe0),0,piVar7);
        if (*(int *)(param_1 + 0x2c) != 0) {
          iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
        }
        FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0xdc),0,piVar7);
        if ((piVar7 != (int *)0x0) && (iVar5 = (**(code **)(*piVar7 + 8))(piVar7), iVar5 != 0)) {
          (**(code **)(*piVar7 + 4))(piVar7);
        }
      }
      if ((piVar13 != (int *)0x0) && (iVar5 = (**(code **)(*piVar13 + 8))(piVar13), iVar5 != 0)) {
        (**(code **)(*piVar13 + 4))(piVar13);
      }
    }
    if ((param_2 == 2 || param_2 == 3) &&
       (*(int *)(param_1 + 0xbc) != 2 && *(int *)(param_1 + 0xbc) != 3)) {
      piVar13 = (int *)FUN_4a0986e4(uVar2,0xf7);
      FUN_4a0b7a54(piVar13,0xd2,0xd1);
      if (*(int *)(param_1 + 0x2c) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
      }
      FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0xc4),0,piVar13);
      uVar9 = FUN_4a0b75a8(piVar13);
      if (*(int *)(param_1 + 0x2c) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
      }
      FUN_4a0a7c84(*(undefined4 *)(iVar5 + 200),0,uVar9);
      if ((piVar13 != (int *)0x0) && (iVar5 = (**(code **)(*piVar13 + 8))(piVar13), iVar5 != 0)) {
        (**(code **)(*piVar13 + 4))(piVar13);
      }
    }
    if (param_2 != 5) {
      if (param_2 == 4) {
        iVar5 = FUN_4a0ff494();
        uVar14 = *(undefined4 *)(iVar5 + 0x520);
        uVar9 = FUN_4a145778(uVar14);
        iVar5 = FUN_4a1458a4(uVar14);
        iVar6 = FUN_4a14589c(uVar14);
        piVar13 = (int *)FUN_4a0986e4(uVar2,uVar9);
        FUN_4a0b7a54(piVar13,0xd2,0xd1);
        piVar7 = (int *)FUN_4a0986e4(uVar2,0x123);
        FUN_4a0b7a54(piVar7,0xd2,0xd1);
        uVar9 = 0;
        if (iVar5 != -1) {
          uVar9 = FUN_4a0986e4(uVar2,iVar5);
          FUN_4a0b7a54(uVar9,0xd2,0xd1);
        }
        uVar14 = 0;
        if (iVar6 != -1) {
          uVar14 = FUN_4a0986e4(uVar2,iVar6);
        }
        if (*(int *)(param_1 + 0x2c) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
        }
        FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x2c),0,piVar13);
        if (*(int *)(param_1 + 0x2c) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
        }
        FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x30),0,piVar13);
        if (*(int *)(param_1 + 0x2c) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
        }
        FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x34),0,piVar13);
        if (*(int *)(param_1 + 0x2c) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
        }
        FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x38),0,piVar13);
        if (*(int *)(param_1 + 0x2c) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
        }
        FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0xd0),0,uVar9);
        if (*(int *)(param_1 + 0x2c) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
        }
        FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0xd4),0,uVar9);
        if (*(int *)(param_1 + 0x2c) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
        }
        FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0xd8),0,uVar14);
        if (*(int *)(param_1 + 0x2c) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
        }
        FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x3c),0,piVar7);
        if (*(int *)(param_1 + 0x2c) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
        }
        FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0xa8),0,piVar7);
        if ((piVar13 != (int *)0x0) && (iVar5 = (**(code **)(*piVar13 + 8))(piVar13), iVar5 != 0)) {
          (**(code **)(*piVar13 + 4))(piVar13);
        }
        if ((piVar7 != (int *)0x0) && (iVar5 = (**(code **)(*piVar7 + 8))(piVar7), iVar5 != 0)) {
          (**(code **)(*piVar7 + 4))(piVar7);
        }
        iVar5 = 0;
        if (*(int *)(param_1 + 100) < 1) goto LAB_4a07a56c;
        do {
          piVar13 = (int *)FUN_4a065370(uVar3,iVar5);
          if (piVar13 != (int *)0x0) {
            (**(code **)(*piVar13 + 0xc))();
          }
          iVar6 = 0;
          if (piVar13 != (int *)0x0) {
            piVar7 = (int *)FUN_4a098598(uVar2,piVar13);
            if (*(int *)(param_1 + 0x68) == 0) {
              iVar11 = 0;
            }
            else {
              iVar11 = *(int *)(*(int *)(param_1 + 0x68) + 8);
            }
            iVar11 = *(int *)(iVar11 + iVar5 * 0x14 + 0xc);
            if (iVar11 != 0) {
              iVar6 = *(int *)(iVar11 + 8);
            }
            FUN_4a0a7c84(*(undefined4 *)(iVar6 + 0x18),0,piVar7);
            if ((piVar7 != (int *)0x0) && (iVar6 = (**(code **)(*piVar7 + 8))(piVar7), iVar6 != 0))
            {
              (**(code **)(*piVar7 + 4))(piVar7);
            }
          }
          if ((piVar13 != (int *)0x0) && (iVar6 = (**(code **)(*piVar13 + 8))(piVar13), iVar6 != 0))
          {
            (**(code **)(*piVar13 + 4))(piVar13);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(param_1 + 100));
      }
      if (param_2 != 1) goto LAB_4a07a56c;
      goto LAB_4a07a36c;
    }
    if (*(int *)(param_1 + 0xbc) == 5) goto LAB_4a07a56c;
    piVar7 = (int *)FUN_4a0986e4(uVar2,0xf0);
    FUN_4a0b7a54(piVar7,0xd2,0xd1);
    piVar8 = (int *)FUN_4a0986e4(uVar2,0xf1);
    FUN_4a0b7a54(piVar8,0xd2,0xd1);
    piVar10 = (int *)FUN_4a0986e4(uVar2,0xf2);
    FUN_4a0b7a54(piVar8,0xd2,0xd1);
    piVar13 = (int *)FUN_4a0986e4(uVar2,0xf3);
    FUN_4a0b7a54(piVar13,0xd2,0xd1);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x40),0,piVar7);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x44),0,piVar7);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x48),0,piVar7);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x4c),0,piVar7);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x50),0,piVar7);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x54),0,piVar8);
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar5 + 0x58),0,piVar10);
    if (*(int *)(param_1 + 0x2c) != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar1 + 0x5c),0,piVar13);
    if ((piVar7 != (int *)0x0) && (iVar1 = (**(code **)(*piVar7 + 8))(piVar7), iVar1 != 0)) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
    if ((piVar8 != (int *)0x0) && (iVar1 = (**(code **)(*piVar8 + 8))(piVar8), iVar1 != 0)) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    if ((piVar10 != (int *)0x0) && (iVar1 = (**(code **)(*piVar10 + 8))(piVar10), iVar1 != 0)) {
      (**(code **)(*piVar10 + 4))(piVar10);
    }
    if ((piVar13 == (int *)0x0) || (iVar1 = (**(code **)(*piVar13 + 8))(piVar13), iVar1 == 0))
    goto LAB_4a07a56c;
    pcVar12 = *(code **)(*piVar13 + 4);
  }
  (*pcVar12)(piVar13);
LAB_4a07a56c:
  host_s3eDeviceYield_arm(0);
  *(int *)(param_1 + 0xbc) = param_2;
  return;
}



// Address: 4a07a584

void FUN_4a07a584(int param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_34 [20];
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = FUN_4a165910();
  if (iVar1 != 0) {
    iVar6 = 0;
    iVar8 = 0;
    if (*(int *)(iVar1 + 0xdc) != 0) {
      iVar8 = *(int *)(*(int *)(iVar1 + 0xdc) + 0x10);
    }
    if (0 < iVar8) {
      do {
        FUN_4a07a584(*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0xdc) + 0x14) + iVar6 * 4),param_2);
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar8);
    }
  }
  iVar1 = FUN_4a165858(param_1);
  if (iVar1 == 0) {
    return;
  }
  iVar8 = FUN_4a13b4a0(iVar1,0);
  iVar6 = *(int *)PTR_DAT_4a07a784;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(auStack_34);
  *puVar2 = PTR_PTR_4a07a788;
  puVar2[2] = *(undefined4 *)(iVar6 + 0x28);
  piVar3 = *(int **)(iVar6 + 0x2c);
  puVar2[3] = piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
  }
  uVar7 = 0;
  *puVar2 = PTR_PTR_4a07a78c;
  uVar5 = puVar2[2];
  if ((int)uVar5 < 1) {
    uVar9 = 0;
  }
  else {
    uVar9 = uVar5 & 1;
  }
  if (uVar9 != 0) {
    do {
      if (puVar2[3] == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(puVar2[3] + 8);
      }
      if (*(int *)(iVar6 + uVar7 * 4) == iVar8) goto LAB_4a07a6fc;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)uVar9);
  }
  if ((int)uVar9 < (int)uVar5) {
    iVar6 = puVar2[3];
    do {
      if (iVar6 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar6 + 8);
      }
      uVar7 = uVar9;
      if (*(int *)(iVar4 + uVar9 * 4) == iVar8) goto LAB_4a07a6fc;
      if (iVar6 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar6 + 8);
      }
      if (*(int *)(iVar4 + (uVar9 + 1) * 4) == iVar8) {
        uVar7 = uVar9 + 1;
        goto LAB_4a07a6fc;
      }
      uVar9 = uVar9 + 2;
    } while ((int)uVar9 < (int)uVar5);
  }
  uVar7 = 0xffffffff;
LAB_4a07a6fc:
  FUN_4a16a898(auStack_34);
  if (((((((*(int *)(iVar8 + 0xc) != 0x6e && uVar7 != 0x29) && uVar7 != 0x30) && uVar7 != 0x31) &&
        uVar7 != 0x32) && uVar7 != 0x28) && uVar7 != 0x19) &&
     ((((((uVar7 != 4 && uVar7 != 8) && uVar7 != 7) && uVar7 != 0x1c) && uVar7 != 0xd) &&
      uVar7 != 0x13) && uVar7 != 0x2a)) {
    iVar1 = FUN_4a13b5e4(iVar1);
    FUN_4a0ade00(iVar1,*(uint *)(iVar1 + 0x2c) & 0xff000000 | param_2);
  }
  iVar1 = FUN_4a1657f4(param_1);
  if (iVar1 != 0) {
    FUN_4a07a584(*(undefined4 *)(iVar1 + 0x114),param_2);
  }
  return;
}



// Address: 4a07a790

void FUN_4a07a790(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
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
  undefined4 uVar19;
  bool bVar20;
  undefined1 auStack_64 [12];
  int local_58;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined1 auStack_44 [12];
  int local_38;
  int local_30;
  int local_2c;
  undefined4 uStack_28;
  
  local_2c = param_1;
  uStack_28 = param_2;
  iVar3 = FUN_4a13b5e4(param_2);
  local_30 = *(int *)(iVar3 + 0x28);
  FUN_4a16b934(auStack_44,4);
  iVar3 = FUN_4a13912c(iVar3,auStack_44);
  local_48 = *(int *)(iVar3 + 0x2c);
  uVar18 = 0;
  uVar11 = 0;
  uVar13 = 0;
  uVar15 = 0;
  local_4c = 0;
  local_50 = 0;
  FUN_4a16b934(auStack_64,local_30 * local_48);
  FUN_4a138e28(iVar3,0,local_30,auStack_64);
  bVar20 = local_38 != 0;
  if (bVar20) {
    puVar4 = *(undefined4 **)(local_38 + 8);
  }
  else {
    puVar4 = (undefined4 *)0x0;
  }
  uVar5 = *puVar4;
  iVar3 = 0;
  if (bVar20) {
    iVar6 = *(int *)(local_38 + 8);
  }
  else {
    iVar6 = 0;
  }
  uVar7 = *(undefined4 *)(iVar6 + 4);
  if (bVar20) {
    iVar6 = *(int *)(local_38 + 8);
  }
  else {
    iVar6 = 0;
  }
  uVar8 = *(undefined4 *)(iVar6 + 8);
  if (bVar20) {
    iVar6 = *(int *)(local_38 + 8);
  }
  else {
    iVar6 = 0;
  }
  uVar9 = *(undefined4 *)(iVar6 + 0xc);
  uVar12 = uVar11;
  uVar14 = uVar13;
  uVar16 = uVar15;
  uVar19 = uVar18;
  if (0 < local_30) {
    do {
      iVar17 = iVar3 * local_48;
      iVar6 = 0;
      if (local_58 != 0) {
        iVar6 = *(int *)(local_58 + 8);
      }
      uVar11 = FUN_4a17211c(uVar5,*(undefined4 *)(iVar6 + iVar17 * 4));
      uVar11 = FUN_4a171a94(uVar11,uVar7);
      iVar6 = 0;
      if (local_58 != 0) {
        iVar6 = *(int *)(local_58 + 8);
      }
      uVar13 = FUN_4a17211c(uVar5,*(undefined4 *)(iVar6 + (iVar17 + 1) * 4));
      uVar13 = FUN_4a171a94(uVar13,uVar8);
      iVar6 = 0;
      if (local_58 != 0) {
        iVar6 = *(int *)(local_58 + 8);
      }
      uVar15 = FUN_4a17211c(uVar5,*(undefined4 *)(iVar6 + (iVar17 + 2) * 4));
      uVar10 = FUN_4a171a94(uVar15,uVar9);
      bVar20 = true;
      uVar15 = uVar10;
      uVar18 = uVar11;
      uVar1 = uVar10;
      uVar2 = uVar13;
      if (iVar3 != 0) {
        FUN_4a1720a0(uVar19,uVar11);
        if (bVar20) {
          uVar19 = uVar11;
        }
        FUN_4a1720a0(local_4c,uVar13);
        if (bVar20) {
          local_4c = uVar13;
        }
        FUN_4a1720a0(local_50,uVar10);
        if (bVar20) {
          local_50 = uVar10;
        }
        FUN_4a172458(uVar12,uVar11);
        if (bVar20) {
          uVar12 = uVar11;
        }
        FUN_4a172458(uVar14,uVar13);
        if (bVar20) {
          uVar14 = uVar13;
        }
        FUN_4a172458(uVar16,uVar10);
        uVar11 = uVar12;
        uVar13 = uVar14;
        uVar15 = uVar16;
        uVar18 = uVar19;
        uVar1 = local_50;
        uVar2 = local_4c;
        if (bVar20) {
          uVar15 = uVar10;
        }
      }
      local_4c = uVar2;
      local_50 = uVar1;
      iVar3 = iVar3 + 1;
      uVar12 = uVar11;
      uVar14 = uVar13;
      uVar16 = uVar15;
      uVar19 = uVar18;
    } while (iVar3 < local_30);
  }
  FUN_4a17295c(uVar18,0x10);
  uVar18 = FUN_4a171e1c();
  iVar3 = 0;
  puVar4 = (undefined4 *)0x0;
  if (*(int *)(local_2c + 0xc) != 0) {
    puVar4 = *(undefined4 **)(*(int *)(local_2c + 0xc) + 8);
  }
  *puVar4 = uVar18;
  FUN_4a17295c(local_4c,0x10);
  uVar18 = FUN_4a171e1c();
  if (*(int *)(local_2c + 0xc) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(local_2c + 0xc) + 8);
  }
  *(undefined4 *)(iVar6 + 4) = uVar18;
  FUN_4a17295c(local_50,0x10);
  uVar18 = FUN_4a171e1c();
  if (*(int *)(local_2c + 0xc) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(local_2c + 0xc) + 8);
  }
  *(undefined4 *)(iVar6 + 8) = uVar18;
  FUN_4a17295c(uVar11,0x10);
  uVar11 = FUN_4a171e1c();
  if (*(int *)(local_2c + 0xc) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(local_2c + 0xc) + 8);
  }
  *(undefined4 *)(iVar6 + 0xc) = uVar11;
  FUN_4a17295c(uVar13,0x10);
  uVar11 = FUN_4a171e1c();
  if (*(int *)(local_2c + 0xc) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(local_2c + 0xc) + 8);
  }
  *(undefined4 *)(iVar6 + 0x10) = uVar11;
  FUN_4a17295c(uVar15,0x10);
  uVar11 = FUN_4a171e1c();
  if (*(int *)(local_2c + 0xc) != 0) {
    iVar3 = *(int *)(*(int *)(local_2c + 0xc) + 8);
  }
  *(undefined4 *)(iVar3 + 0x14) = uVar11;
  FUN_4a16ba04(auStack_64);
  FUN_4a16ba04(auStack_44);
  return;
}



// Address: 4a07aa9c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a07aa9c(int param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined **ppuVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined1 auStack_b4 [8];
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 auStack_6c [12];
  int iStack_60;
  undefined *apuStack_58 [2];
  undefined4 uStack_50;
  int *piStack_4c;
  undefined *local_44 [2];
  int local_3c;
  int iStack_30;
  undefined4 local_2c;
  int local_28;
  
  puVar2 = PTR_PTR_4a07afd4;
  puVar1 = PTR_PTR_4a07afd0;
  iStack_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  if (param_3 == 0) {
    puVar3 = (undefined4 *)FUN_4a0c6bc0(local_44);
    *puVar3 = puVar1;
    puVar3[2] = *(undefined4 *)(param_1 + 8);
    piVar9 = *(int **)(param_1 + 0xc);
    puVar3[3] = piVar9;
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 0xc))();
    }
    *puVar3 = puVar2;
    iVar10 = 0;
    if (0 < (int)puVar3[2]) {
      do {
        if (puVar3[3] == 0) {
          iVar12 = 0;
        }
        else {
          iVar12 = *(int *)(puVar3[3] + 8);
        }
        *(undefined4 *)(iVar12 + iVar10 * 4) = 0;
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)puVar3[2]);
    }
    FUN_4a16bef4(local_44);
    puVar3 = (undefined4 *)FUN_4a0c6bc0(local_44);
    *puVar3 = puVar1;
    puVar3[2] = *(undefined4 *)(param_1 + 8);
    piVar9 = *(int **)(param_1 + 0xc);
    puVar3[3] = piVar9;
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 0xc))();
    }
    *puVar3 = puVar2;
    FUN_4a07aa9c(puVar3,local_2c);
    ppuVar8 = local_44;
  }
  else {
    iVar10 = FUN_4a165910(param_2);
    if (iVar10 != 0) {
      iVar13 = 0;
      iVar12 = 0;
      if (*(int *)(iVar10 + 0xdc) != 0) {
        iVar12 = *(int *)(*(int *)(iVar10 + 0xdc) + 0x10);
      }
      if (0 < iVar12) {
        do {
          uVar14 = *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0xdc) + 0x14) + iVar13 * 4);
          puVar3 = (undefined4 *)FUN_4a0c6bc0(local_44);
          *puVar3 = puVar1;
          puVar3[2] = *(undefined4 *)(param_1 + 8);
          piVar9 = *(int **)(param_1 + 0xc);
          puVar3[3] = piVar9;
          if (piVar9 != (int *)0x0) {
            (**(code **)(*piVar9 + 0xc))();
          }
          *puVar3 = puVar2;
          FUN_4a07aa9c(puVar3,uVar14,local_28);
          iVar7 = local_3c;
          local_44[0] = puVar2;
          iVar4 = FUN_4a0bcc84(local_44);
          if (iVar4 != 0) {
            iVar5 = 0;
            if (0 < iVar7) {
              do {
                iVar5 = iVar5 + 1;
              } while (iVar5 < iVar7);
              if (iVar4 == 0) goto LAB_4a07ac44;
            }
            FUN_4a14f21c(iVar4);
          }
LAB_4a07ac44:
          FUN_4a0c6bf4(local_44);
          iVar13 = iVar13 + 1;
        } while (iVar13 < iVar12);
      }
    }
    iVar10 = FUN_4a165858(local_2c);
    if (iVar10 == 0) {
      return;
    }
    FUN_4a16be24(apuStack_58,6);
    iVar12 = 0;
    puVar3 = (undefined4 *)FUN_4a0c6bc0(local_44);
    *puVar3 = puVar1;
    puVar3[2] = uStack_50;
    puVar3[3] = piStack_4c;
    if (piStack_4c != (int *)0x0) {
      (**(code **)(*piStack_4c + 0xc))();
    }
    *puVar3 = puVar2;
    FUN_4a07a790(puVar3,iVar10);
    FUN_4a16bef4(local_44);
    FUN_4a16be24(auStack_6c,8);
    FUN_4a0b8a1c(auStack_b4);
    uStack_ac = *(undefined4 *)PTR_DAT_4a07afd8;
    uStack_a8 = *(undefined4 *)(PTR_DAT_4a07afd8 + 4);
    uStack_a4 = *(undefined4 *)(PTR_DAT_4a07afd8 + 8);
    uStack_a0 = *(undefined4 *)(PTR_DAT_4a07afd8 + 0xc);
    uStack_9c = *(undefined4 *)(PTR_DAT_4a07afd8 + 0x10);
    uStack_98 = *(undefined4 *)(PTR_DAT_4a07afd8 + 0x14);
    uStack_94 = *(undefined4 *)(PTR_DAT_4a07afd8 + 0x18);
    uStack_90 = *(undefined4 *)(PTR_DAT_4a07afd8 + 0x1c);
    uStack_8c = *(undefined4 *)(PTR_DAT_4a07afd8 + 0x20);
    uStack_88 = *(undefined4 *)(PTR_DAT_4a07afd8 + 0x24);
    uStack_84 = *(undefined4 *)(PTR_DAT_4a07afd8 + 0x28);
    uStack_80 = *(undefined4 *)(PTR_DAT_4a07afd8 + 0x2c);
    uStack_7c = *(undefined4 *)(PTR_DAT_4a07afd8 + 0x30);
    uStack_78 = *(undefined4 *)(PTR_DAT_4a07afd8 + 0x34);
    uStack_74 = *(undefined4 *)(PTR_DAT_4a07afd8 + 0x38);
    uStack_70 = *(undefined4 *)(PTR_DAT_4a07afd8 + 0x3c);
    FUN_4a13b6a8(iVar10,local_28,auStack_b4);
    if (piStack_4c == (int *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)piStack_4c[2];
    }
    if (iStack_60 == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = *(undefined4 **)(iStack_60 + 8);
    }
    *puVar6 = *puVar3;
    if (piStack_4c == (int *)0x0) {
      iVar10 = 0;
    }
    else {
      iVar10 = piStack_4c[2];
    }
    if (iStack_60 == 0) {
      iVar13 = 0;
    }
    else {
      iVar13 = *(int *)(iStack_60 + 8);
    }
    *(undefined4 *)(iVar13 + 4) = *(undefined4 *)(iVar10 + 4);
    if (piStack_4c == (int *)0x0) {
      iVar10 = 0;
    }
    else {
      iVar10 = piStack_4c[2];
    }
    if (iStack_60 == 0) {
      iVar13 = 0;
    }
    else {
      iVar13 = *(int *)(iStack_60 + 8);
    }
    *(undefined4 *)(iVar13 + 8) = *(undefined4 *)(iVar10 + 8);
    if (iStack_60 == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = *(int *)(iStack_60 + 8);
    }
    *(undefined4 *)(iVar10 + 0xc) = 0x10000;
    if (piStack_4c == (int *)0x0) {
      iVar10 = 0;
    }
    else {
      iVar10 = piStack_4c[2];
    }
    if (iStack_60 == 0) {
      iVar13 = 0;
    }
    else {
      iVar13 = *(int *)(iStack_60 + 8);
    }
    *(undefined4 *)(iVar13 + 0x10) = *(undefined4 *)(iVar10 + 0xc);
    if (piStack_4c == (int *)0x0) {
      iVar10 = 0;
    }
    else {
      iVar10 = piStack_4c[2];
    }
    if (iStack_60 == 0) {
      iVar13 = 0;
    }
    else {
      iVar13 = *(int *)(iStack_60 + 8);
    }
    *(undefined4 *)(iVar13 + 0x14) = *(undefined4 *)(iVar10 + 0x10);
    if (piStack_4c == (int *)0x0) {
      iVar10 = 0;
    }
    else {
      iVar10 = piStack_4c[2];
    }
    if (iStack_60 == 0) {
      iVar13 = 0;
    }
    else {
      iVar13 = *(int *)(iStack_60 + 8);
    }
    *(undefined4 *)(iVar13 + 0x18) = *(undefined4 *)(iVar10 + 0x14);
    if (iStack_60 == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = *(int *)(iStack_60 + 8);
    }
    *(undefined4 *)(iVar10 + 0x1c) = 0x10000;
    FUN_4a13c368(auStack_b4,auStack_6c);
    iVar10 = *(int *)(param_1 + 0xc);
    if (iVar10 == 0) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = *(int **)(iVar10 + 8);
    }
    if (iStack_60 == 0) {
      piVar11 = (int *)0x0;
    }
    else {
      piVar11 = *(int **)(iStack_60 + 8);
    }
    iVar13 = *piVar9;
    if (*piVar11 <= *piVar9) {
      iVar13 = *piVar11;
    }
    if (iVar10 == 0) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = *(int **)(iVar10 + 8);
    }
    *piVar9 = iVar13;
    iVar10 = *(int *)(param_1 + 0xc);
    if (iVar10 == 0) {
      iVar13 = 0;
    }
    else {
      iVar13 = *(int *)(iVar10 + 8);
    }
    if (iStack_60 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(iStack_60 + 8);
    }
    iVar4 = *(int *)(iVar7 + 4);
    if (*(int *)(iVar13 + 4) < *(int *)(iVar7 + 4)) {
      iVar4 = *(int *)(iVar13 + 4);
    }
    if (iVar10 == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = *(int *)(iVar10 + 8);
    }
    *(int *)(iVar10 + 4) = iVar4;
    iVar10 = *(int *)(param_1 + 0xc);
    if (iVar10 == 0) {
      iVar13 = 0;
    }
    else {
      iVar13 = *(int *)(iVar10 + 8);
    }
    if (iStack_60 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(iStack_60 + 8);
    }
    iVar4 = *(int *)(iVar13 + 8);
    if (*(int *)(iVar7 + 8) <= *(int *)(iVar13 + 8)) {
      iVar4 = *(int *)(iVar7 + 8);
    }
    if (iVar10 == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = *(int *)(iVar10 + 8);
    }
    *(int *)(iVar10 + 8) = iVar4;
    iVar10 = *(int *)(param_1 + 0xc);
    if (iVar10 == 0) {
      iVar13 = 0;
    }
    else {
      iVar13 = *(int *)(iVar10 + 8);
    }
    if (iStack_60 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(iStack_60 + 8);
    }
    iVar4 = *(int *)(iVar7 + 0x10);
    if (*(int *)(iVar7 + 0x10) < *(int *)(iVar13 + 0xc)) {
      iVar4 = *(int *)(iVar13 + 0xc);
    }
    if (iVar10 == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = *(int *)(iVar10 + 8);
    }
    *(int *)(iVar10 + 0xc) = iVar4;
    iVar10 = *(int *)(param_1 + 0xc);
    if (iVar10 == 0) {
      iVar13 = 0;
    }
    else {
      iVar13 = *(int *)(iVar10 + 8);
    }
    if (iStack_60 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(iStack_60 + 8);
    }
    iVar4 = *(int *)(iVar13 + 0x10);
    if (*(int *)(iVar13 + 0x10) <= *(int *)(iVar7 + 0x14)) {
      iVar4 = *(int *)(iVar7 + 0x14);
    }
    if (iVar10 == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = *(int *)(iVar10 + 8);
    }
    *(int *)(iVar10 + 0x10) = iVar4;
    iVar10 = *(int *)(param_1 + 0xc);
    if (iVar10 == 0) {
      iVar13 = 0;
    }
    else {
      iVar13 = *(int *)(iVar10 + 8);
    }
    if (iStack_60 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(iStack_60 + 8);
    }
    iVar4 = *(int *)(iVar13 + 0x14);
    if (*(int *)(iVar13 + 0x14) <= *(int *)(iVar7 + 0x18)) {
      iVar4 = *(int *)(iVar7 + 0x18);
    }
    if (iVar10 != 0) {
      iVar12 = *(int *)(iVar10 + 8);
    }
    *(int *)(iVar12 + 0x14) = iVar4;
    FUN_4a0c6bf4(auStack_b4);
    FUN_4a16bef4(auStack_6c);
    ppuVar8 = apuStack_58;
  }
  FUN_4a16bef4(ppuVar8);
  return;
}



// Address: 4a07afdc

void FUN_4a07afdc(int param_1,int param_2,int param_3,int *param_4,int param_5,int *param_6,
                 undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined *local_48 [2];
  int local_40;
  int local_3c;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int *piStack_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  iStack_2c = param_3;
  piStack_28 = param_4;
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 0xc))(param_4);
  }
  if (param_6 != (int *)0x0) {
    (**(code **)(*param_6 + 0xc))(param_6);
  }
  iVar4 = *(int *)(param_1 + 0x54);
  iVar5 = 0;
  if (iVar4 != 0) {
    iVar5 = *(int *)(iVar4 + 8);
  }
  iVar7 = 0;
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  iVar5 = iVar5 + local_30 * 0x14;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(local_48);
  *puVar2 = PTR_PTR_4a07b3d0;
  puVar2[2] = *(undefined4 *)(iVar5 + 8);
  piVar6 = *(int **)(iVar5 + 0xc);
  puVar2[3] = piVar6;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))();
  }
  puVar1 = PTR_PTR_4a07b3d4;
  *puVar2 = PTR_PTR_4a07b3d4;
  if (local_3c == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(local_3c + 8);
  }
  if (*(int *)(iVar5 + param_3 * 4) == 0) {
LAB_4a07b10c:
    uVar3 = FUN_4a095c34();
    piVar6 = (int *)FUN_4a095c44(uVar3,local_30,param_3,param_4,param_5,param_6,param_9);
    if (piVar6 != (int *)0x0) {
      FUN_4a0b7a54(piVar6,0xd2,0xd1);
      FUN_4a0af650(piVar6,0x3f800000,0xbf800000);
      uVar3 = FUN_4a07cb70(param_1,param_7,local_30);
      FUN_4a0a7c84(uVar3,0,piVar6);
      uVar3 = FUN_4a07cb70(param_1,param_8,local_30);
      FUN_4a0a7c84(uVar3,0,piVar6);
      iVar5 = (**(code **)(*piVar6 + 8))(piVar6);
      if (iVar5 != 0) {
        (**(code **)(*piVar6 + 4))(piVar6);
      }
      if (local_3c == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(local_3c + 8);
      }
      piVar6 = *(int **)(iVar5 + param_3 * 4);
      if ((piVar6 != (int *)0x0) && (iVar5 = (**(code **)(*piVar6 + 8))(piVar6), iVar5 != 0)) {
        (**(code **)(*piVar6 + 4))(piVar6);
      }
      uVar3 = thunk_FUN_4a161570(0x14);
      uVar3 = FUN_4a0c70d0(uVar3,param_4);
      if (local_3c == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(local_3c + 8);
      }
      *(undefined4 *)(iVar5 + param_3 * 4) = uVar3;
      if (local_3c == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(local_3c + 8);
      }
      piVar6 = *(int **)(iVar5 + param_3 * 4);
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0xc))();
      }
      if (local_3c == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(local_3c + 8);
      }
      piVar6 = *(int **)(iVar5 + param_5 * 4);
      if ((piVar6 != (int *)0x0) && (iVar5 = (**(code **)(*piVar6 + 8))(piVar6), iVar5 != 0)) {
        (**(code **)(*piVar6 + 4))(piVar6);
      }
      if (param_6 == (int *)0x0) {
        if (local_3c == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(local_3c + 8);
        }
        *(undefined4 *)(iVar5 + param_5 * 4) = 0;
      }
      else {
        uVar3 = thunk_FUN_4a161570(0x14);
        uVar3 = FUN_4a0c70d0(uVar3,param_6);
        if (local_3c == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(local_3c + 8);
        }
        *(undefined4 *)(iVar5 + param_5 * 4) = uVar3;
        if (local_3c != 0) {
          iVar7 = *(int *)(local_3c + 8);
        }
        piVar6 = *(int **)(iVar7 + param_5 * 4);
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 0xc))();
        }
      }
    }
  }
  else {
    if (local_3c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(local_3c + 8);
    }
    iVar5 = FUN_4a13e0a8(*(undefined4 *)(iVar5 + param_3 * 4),param_4);
    if (iVar5 == 0) goto LAB_4a07b10c;
    if (local_3c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(local_3c + 8);
    }
    if (*(int *)(iVar5 + param_5 * 4) == 0) goto LAB_4a07b10c;
    if (local_3c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(local_3c + 8);
    }
    iVar5 = FUN_4a13e0a8(*(undefined4 *)(iVar5 + param_5 * 4),param_6);
    if (iVar5 == 0) goto LAB_4a07b10c;
  }
  if ((param_4 != (int *)0x0) && (iVar5 = (**(code **)(*param_4 + 8))(param_4), iVar5 != 0)) {
    (**(code **)(*param_4 + 4))(param_4);
  }
  if ((param_6 != (int *)0x0) && (iVar5 = (**(code **)(*param_6 + 8))(param_6), iVar5 != 0)) {
    (**(code **)(*param_6 + 4))(param_6);
  }
  local_48[0] = puVar1;
  iVar5 = FUN_4a0bcc84(local_48);
  if (iVar5 != 0) {
    iVar4 = 0;
    if (0 < local_40) {
      do {
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_40);
      if (iVar5 == 0) goto LAB_4a07b3bc;
    }
    FUN_4a14f21c();
  }
LAB_4a07b3bc:
  FUN_4a0c6bf4(local_48);
  return;
}



// Address: 4a07b3d8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a07b3d8(int param_1,int param_2,int param_3,int *param_4,int param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 0xc))(param_4);
  }
  iVar1 = FUN_4a0ff494();
  uVar6 = *(undefined4 *)(iVar1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x54);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
  }
  iVar8 = 0;
  if (iVar2 == 0) {
    iVar1 = 0;
  }
  iVar1 = *(int *)(iVar1 + param_2 * 0x14 + 0xc);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 8);
  }
  piVar7 = *(int **)(iVar1 + param_3 * 4);
  if ((piVar7 == (int *)0x0) || (iVar1 = FUN_4a13e0a8(piVar7,param_4), iVar1 == 0)) {
    uVar3 = thunk_FUN_4a161570(0x14);
    uVar3 = FUN_4a0c707c(uVar3,&DAT_4a07b748);
    iVar1 = FUN_4a13e1c4(param_4,uVar3);
    if (iVar1 == 0) {
      FUN_4a0fb644();
      piVar5 = (int *)FUN_4a098598(uVar6,param_4);
      switchD_4a1193c4::default(s_loading_M3G_texture_4a07b764);
    }
    else {
      FUN_4a0fb644();
      piVar4 = (int *)FUN_4a135e3c(uVar6,param_4,1);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0xc))();
      }
      uVar6 = thunk_FUN_4a161570(0x4c);
      uVar6 = FUN_4a0b6cfc(uVar6,100,piVar4);
      uVar3 = thunk_FUN_4a161570(0xe8);
      piVar5 = (int *)FUN_4a0b7ad4(uVar3,uVar6);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0xc))(piVar5);
      }
      switchD_4a1193c4::default(s_loading_PNG_texture_4a07b750);
      if ((piVar4 != (int *)0x0) && (iVar1 = (**(code **)(*piVar4 + 8))(piVar4), iVar1 != 0)) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
    }
    FUN_4a0b7a54(piVar5,0xd2,0xd1);
    uVar6 = FUN_4a07cb70(param_1,param_5,param_2);
    FUN_4a0a7c84(uVar6,0,piVar5);
    uVar6 = FUN_4a07cb70(param_1,param_6,param_2);
    FUN_4a0a7c84(uVar6,0,piVar5);
    if (param_5 == 4) {
      uVar6 = FUN_4a07cb70(param_1,5,param_2);
      FUN_4a0a7c84(uVar6,0,piVar5);
      uVar6 = FUN_4a07cb70(param_1,0xf,param_2);
      FUN_4a0a7c84(uVar6,0,piVar5);
    }
    else if (param_5 == 0) {
      uVar6 = FUN_4a07cb70(param_1,1,param_2);
      FUN_4a0a7c84(uVar6,0,piVar5);
      uVar6 = FUN_4a07cb70(param_1,0xb,param_2);
      FUN_4a0a7c84(uVar6,0,piVar5);
    }
    if ((piVar5 != (int *)0x0) && (iVar1 = (**(code **)(*piVar5 + 8))(piVar5), iVar1 != 0)) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    if ((piVar7 != (int *)0x0) && (iVar1 = (**(code **)(*piVar7 + 8))(piVar7), iVar1 != 0)) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
    uVar6 = thunk_FUN_4a161570(0x14);
    uVar6 = FUN_4a0c70d0(uVar6,param_4);
    if (*(int *)(param_1 + 0x54) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x54) + 8);
    }
    iVar1 = *(int *)(iVar1 + param_2 * 0x14 + 0xc);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 8);
    }
    *(undefined4 *)(iVar1 + param_3 * 4) = uVar6;
    if (*(int *)(param_1 + 0x54) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x54) + 8);
    }
    iVar1 = *(int *)(iVar1 + param_2 * 0x14 + 0xc);
    if (iVar1 != 0) {
      iVar8 = *(int *)(iVar1 + 8);
    }
    piVar7 = *(int **)(iVar8 + param_3 * 4);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0xc))();
    }
  }
  if (param_4 != (int *)0x0) {
    iVar1 = (**(code **)(*param_4 + 8))(param_4);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a07b744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_4 + 4))(param_4);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a07b72c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a07b778

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a07b778(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    return;
  }
  while( true ) {
    iVar1 = FUN_4a165910();
    if (iVar1 != 0) {
      iVar2 = 0;
      iVar3 = 0;
      if (*(int *)(iVar1 + 0xdc) != 0) {
        iVar3 = *(int *)(*(int *)(iVar1 + 0xdc) + 0x10);
      }
      if (0 < iVar3) {
        do {
          FUN_4a07b778(*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0xdc) + 0x14) + iVar2 * 4),param_2)
          ;
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar3);
      }
    }
    iVar1 = FUN_4a165858(param_1);
    if (iVar1 == 0) {
      return;
    }
    iVar2 = 0;
    iVar3 = FUN_4a13b5dc(iVar1);
    if (0 < iVar3) {
      do {
        FUN_4a0b3bc8(iVar1,iVar2,param_2);
        iVar2 = iVar2 + 1;
        iVar3 = FUN_4a13b5dc(iVar1);
      } while (iVar2 < iVar3);
    }
    iVar1 = FUN_4a1657f4(param_1);
    if (iVar1 == 0) break;
    param_1 = *(int *)(iVar1 + 0x114);
    if (param_1 == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x4a07b82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a07b848

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a07b848(int param_1,int param_2,uint param_3,uint param_4)

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
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int *piVar21;
  int *piVar22;
  int *piVar23;
  int *piVar24;
  int *piVar25;
  int *piVar26;
  int *piVar27;
  uint uVar28;
  int *piVar29;
  int iVar30;
  int *piVar31;
  undefined4 uVar32;
  int *piVar33;
  code *UNRECOVERED_JUMPTABLE;
  int local_b0;
  int *local_ac;
  int *local_a8;
  int *local_a4;
  
  FUN_4a0fb644();
  iVar1 = FUN_4a0ff494();
  uVar32 = *(undefined4 *)(iVar1 + 0x51c);
  iVar1 = FUN_4a0ff494();
  uVar2 = *(undefined4 *)(iVar1 + 0x520);
  uVar3 = FUN_4a140fd0(uVar32,param_2,1);
  uVar4 = FUN_4a140fd0(uVar32,param_2,2);
  uVar5 = FUN_4a140fd0(uVar32,param_2,3);
  uVar6 = FUN_4a140fd0(uVar32,param_2,0xb);
  uVar7 = FUN_4a140fd0(uVar32,param_2,0xc);
  uVar8 = FUN_4a140fd0(uVar32,param_2,4);
  uVar9 = FUN_4a140fd0(uVar32,param_2,5);
  uVar10 = FUN_4a140fd0(uVar32,param_2,6);
  uVar11 = FUN_4a140fd0(uVar32,param_2,7);
  uVar12 = FUN_4a140fd0(uVar32,param_2,8);
  uVar13 = FUN_4a140fd0(uVar32,param_2,9);
  uVar14 = FUN_4a140fd0(uVar32,param_2,10);
  FUN_4a141abc(uVar32,param_2);
  uVar15 = FUN_4a141668(uVar32,param_2,1);
  uVar16 = FUN_4a141668(uVar32,param_2,2);
  uVar17 = FUN_4a141668(uVar32,param_2,0xb);
  uVar18 = FUN_4a141668(uVar32,param_2,0xe);
  uVar19 = FUN_4a141668(uVar32,param_2,5);
  uVar20 = FUN_4a141668(uVar32,param_2,7);
  uVar32 = FUN_4a141668(uVar32,param_2,9);
  piVar21 = (int *)FUN_4a144b6c(uVar2,uVar16,uVar4,uVar5);
  if (piVar21 != (int *)0x0) {
    (**(code **)(*piVar21 + 0xc))();
  }
  piVar22 = (int *)FUN_4a144b6c(uVar2,0,0,uVar8);
  if (piVar22 != (int *)0x0) {
    (**(code **)(*piVar22 + 0xc))();
  }
  local_a4 = (int *)FUN_4a144b6c(uVar2,uVar15,0,uVar3);
  if (local_a4 != (int *)0x0) {
    (**(code **)(*local_a4 + 0xc))();
  }
  piVar23 = (int *)FUN_4a144b6c(uVar2,uVar17,uVar6,uVar7);
  if (piVar23 != (int *)0x0) {
    (**(code **)(*piVar23 + 0xc))();
  }
  local_a8 = (int *)FUN_4a144b6c(uVar2,uVar15,1,uVar3);
  if (local_a8 != (int *)0x0) {
    (**(code **)(*local_a8 + 0xc))();
  }
  piVar24 = (int *)FUN_4a144b6c(uVar2,uVar19,uVar9,uVar10);
  if (piVar24 != (int *)0x0) {
    (**(code **)(*piVar24 + 0xc))();
  }
  local_ac = (int *)FUN_4a144b6c(uVar2,uVar15,2,uVar3);
  if (local_ac != (int *)0x0) {
    (**(code **)(*local_ac + 0xc))();
  }
  piVar25 = (int *)FUN_4a144b6c(uVar2,uVar20,uVar11,uVar12);
  if (piVar25 != (int *)0x0) {
    (**(code **)(*piVar25 + 0xc))();
  }
  piVar26 = (int *)FUN_4a144b6c(uVar2,uVar15,3,uVar3);
  if (piVar26 != (int *)0x0) {
    (**(code **)(*piVar26 + 0xc))(piVar26);
  }
  piVar27 = (int *)FUN_4a144b6c(uVar2,uVar32,uVar13,uVar14);
  if (piVar27 != (int *)0x0) {
    (**(code **)(*piVar27 + 0xc))();
  }
  local_b0 = 0;
  uVar28 = FUN_4a143c90(uVar2,uVar17,uVar6);
  if ((uVar28 & 2) != 0) {
    local_b0 = FUN_4a144b6c(uVar2,uVar18,uVar6,uVar7);
  }
  iVar1 = FUN_4a144838(uVar2,uVar17,uVar6,uVar15);
  piVar33 = piVar26;
  if (iVar1 != -1) {
    piVar29 = (int *)FUN_4a144b6c(uVar2,uVar15,0,iVar1);
    piVar31 = local_a4;
    if (local_a4 != piVar29) {
      if (piVar29 != (int *)0x0) {
        (**(code **)(*piVar29 + 0xc))(piVar29);
      }
      piVar31 = piVar29;
      if ((local_a4 != (int *)0x0) && (iVar30 = (**(code **)(*local_a4 + 8))(local_a4), iVar30 != 0)
         ) {
        (**(code **)(*local_a4 + 4))(local_a4);
      }
    }
    local_a4 = piVar31;
    piVar29 = (int *)FUN_4a144b6c(uVar2,uVar15,1,iVar1);
    piVar31 = local_a8;
    if (local_a8 != piVar29) {
      if (piVar29 != (int *)0x0) {
        (**(code **)(*piVar29 + 0xc))(piVar29);
      }
      piVar31 = piVar29;
      if ((local_a8 != (int *)0x0) && (iVar30 = (**(code **)(*local_a8 + 8))(local_a8), iVar30 != 0)
         ) {
        (**(code **)(*local_a8 + 4))(local_a8);
      }
    }
    local_a8 = piVar31;
    piVar29 = (int *)FUN_4a144b6c(uVar2,uVar15,2,iVar1);
    piVar31 = local_ac;
    if (local_ac != piVar29) {
      if (piVar29 != (int *)0x0) {
        (**(code **)(*piVar29 + 0xc))(piVar29);
      }
      piVar31 = piVar29;
      if ((local_ac != (int *)0x0) && (iVar30 = (**(code **)(*local_ac + 8))(local_ac), iVar30 != 0)
         ) {
        (**(code **)(*local_ac + 4))(local_ac);
      }
    }
    local_ac = piVar31;
    piVar31 = (int *)FUN_4a144b6c(uVar2,uVar15,3,iVar1);
    if (piVar26 != piVar31) {
      if (piVar31 != (int *)0x0) {
        (**(code **)(*piVar31 + 0xc))(piVar31);
      }
      piVar33 = piVar31;
      if ((piVar26 != (int *)0x0) && (iVar1 = (**(code **)(*piVar26 + 8))(piVar26), iVar1 != 0)) {
        (**(code **)(*piVar26 + 4))(piVar26);
      }
    }
  }
  iVar1 = FUN_4a144838(uVar2,0,uVar8,0);
  piVar26 = (int *)0x0;
  if ((iVar1 != -1) && (piVar31 = (int *)FUN_4a144b6c(uVar2,0,0,iVar1), piVar31 != (int *)0x0)) {
    (**(code **)(*piVar31 + 0xc))(piVar31);
    piVar26 = piVar31;
  }
  FUN_4a07b3d8(param_1,param_2,1,piVar21,4,0xe);
  FUN_4a07b3d8(param_1,param_2,0,piVar22,2,0xc);
  if (local_b0 != 0) {
    FUN_4a07b3d8(param_1,param_2,10,local_b0,9,0x13);
  }
  if (piVar26 == (int *)0x0) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x40) != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 8);
    }
    iVar30 = *(int *)(iVar1 + param_2 * 0x14 + 0xc);
    iVar1 = 0;
    if (iVar30 != 0) {
      iVar1 = *(int *)(iVar30 + 8);
    }
    piVar31 = (int *)FUN_4a136540(*(undefined4 *)(iVar1 + 8),0);
    if (piVar31 != (int *)0x0) {
      (**(code **)(*piVar31 + 0xc))();
    }
    iVar1 = 0;
    if (*(int *)(param_1 + 0x40) != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 8);
    }
    iVar30 = *(int *)(iVar1 + param_2 * 0x14 + 0xc);
    iVar1 = 0;
    if (iVar30 != 0) {
      iVar1 = *(int *)(iVar30 + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar1 + 0xc),0,piVar31);
    iVar1 = 0;
    if (*(int *)(param_1 + 0x40) != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 8);
    }
    iVar30 = *(int *)(iVar1 + param_2 * 0x14 + 0xc);
    iVar1 = 0;
    if (iVar30 != 0) {
      iVar1 = *(int *)(iVar30 + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar1 + 0x34),0,piVar31);
    if (piVar31 == (int *)0x0) goto LAB_4a07c060;
    iVar1 = (**(code **)(*piVar31 + 8))(piVar31);
  }
  else {
    iVar1 = FUN_4a0ff494();
    piVar31 = (int *)FUN_4a098598(*(undefined4 *)(iVar1 + 0x60),piVar26);
    if (piVar31 != (int *)0x0) {
      (**(code **)(*piVar31 + 0xc))();
    }
    iVar1 = 0;
    if (*(int *)(param_1 + 0x40) != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 8);
    }
    iVar30 = *(int *)(iVar1 + param_2 * 0x14 + 0xc);
    iVar1 = 0;
    if (iVar30 != 0) {
      iVar1 = *(int *)(iVar30 + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar1 + 0xc),0,piVar31);
    iVar1 = 0;
    if (*(int *)(param_1 + 0x40) != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 8);
    }
    iVar30 = *(int *)(iVar1 + param_2 * 0x14 + 0xc);
    iVar1 = 0;
    if (iVar30 != 0) {
      iVar1 = *(int *)(iVar30 + 8);
    }
    FUN_4a0a7c84(*(undefined4 *)(iVar1 + 0x34),0,piVar31);
    if (piVar31 == (int *)0x0) goto LAB_4a07c060;
    iVar1 = (**(code **)(*piVar31 + 8))(piVar31);
  }
  if (iVar1 != 0) {
    (**(code **)(*piVar31 + 4))(piVar31);
  }
LAB_4a07c060:
  uVar28 = (param_3 | param_4) ^ 1;
  FUN_4a07afdc(param_1,param_2,2,local_a4,3,piVar23,0,10,uVar28);
  if (param_4 == 0) {
    piVar31 = piVar24;
    if (piVar24 != (int *)0x0) {
      (**(code **)(*piVar24 + 0xc))();
    }
  }
  else {
    piVar31 = (int *)0x0;
  }
  FUN_4a07afdc(param_1,param_2,4,local_a8,5,piVar31,6,0x10,uVar28);
  if ((piVar31 != (int *)0x0) && (iVar1 = (**(code **)(*piVar31 + 8))(piVar31), iVar1 != 0)) {
    (**(code **)(*piVar31 + 4))(piVar31);
  }
  if (param_4 == 0) {
    piVar31 = piVar25;
    if (piVar25 != (int *)0x0) {
      (**(code **)(*piVar25 + 0xc))();
    }
  }
  else {
    piVar31 = (int *)0x0;
  }
  FUN_4a07afdc(param_1,param_2,6,local_ac,7,piVar31,8,0x12,uVar28);
  if ((piVar31 != (int *)0x0) && (iVar1 = (**(code **)(*piVar31 + 8))(piVar31), iVar1 != 0)) {
    (**(code **)(*piVar31 + 4))(piVar31);
  }
  piVar31 = (int *)0x0;
  if ((param_4 == 0) && (piVar31 = piVar27, piVar27 != (int *)0x0)) {
    (**(code **)(*piVar27 + 0xc))();
  }
  FUN_4a07afdc(param_1,param_2,8,piVar33,9,piVar31,7,0x11,uVar28);
  if ((piVar31 != (int *)0x0) && (iVar1 = (**(code **)(*piVar31 + 8))(piVar31), iVar1 != 0)) {
    (**(code **)(*piVar31 + 4))(piVar31);
  }
  switchD_4a1193c4::default(s_loadSimTextures_4a07c4f4);
  if ((piVar26 != (int *)0x0) && (iVar1 = (**(code **)(*piVar26 + 8))(piVar26), iVar1 != 0)) {
    (**(code **)(*piVar26 + 4))(piVar26);
  }
  if ((piVar27 != (int *)0x0) && (iVar1 = (**(code **)(*piVar27 + 8))(piVar27), iVar1 != 0)) {
    (**(code **)(*piVar27 + 4))(piVar27);
  }
  if ((piVar33 != (int *)0x0) && (iVar1 = (**(code **)(*piVar33 + 8))(piVar33), iVar1 != 0)) {
    (**(code **)(*piVar33 + 4))(piVar33);
  }
  if ((piVar25 != (int *)0x0) && (iVar1 = (**(code **)(*piVar25 + 8))(piVar25), iVar1 != 0)) {
    (**(code **)(*piVar25 + 4))(piVar25);
  }
  if ((local_ac != (int *)0x0) && (iVar1 = (**(code **)(*local_ac + 8))(local_ac), iVar1 != 0)) {
    (**(code **)(*local_ac + 4))(local_ac);
  }
  if ((piVar24 != (int *)0x0) && (iVar1 = (**(code **)(*piVar24 + 8))(piVar24), iVar1 != 0)) {
    (**(code **)(*piVar24 + 4))(piVar24);
  }
  if ((local_a8 != (int *)0x0) && (iVar1 = (**(code **)(*local_a8 + 8))(local_a8), iVar1 != 0)) {
    (**(code **)(*local_a8 + 4))(local_a8);
  }
  if ((piVar23 != (int *)0x0) && (iVar1 = (**(code **)(*piVar23 + 8))(piVar23), iVar1 != 0)) {
    (**(code **)(*piVar23 + 4))(piVar23);
  }
  if ((local_a4 != (int *)0x0) && (iVar1 = (**(code **)(*local_a4 + 8))(local_a4), iVar1 != 0)) {
    (**(code **)(*local_a4 + 4))(local_a4);
  }
  if ((piVar22 != (int *)0x0) && (iVar1 = (**(code **)(*piVar22 + 8))(piVar22), iVar1 != 0)) {
    (**(code **)(*piVar22 + 4))(piVar22);
  }
  if (piVar21 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar21 + 8))(piVar21);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a07c4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar21 + 4))(piVar21);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a07c4d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a07c504

int * FUN_4a07c504(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    iVar1 = FUN_4a0ff494();
    uVar4 = *(undefined4 *)(iVar1 + 0x60);
    uVar2 = FUN_4a098468(uVar4,0xf4);
    *(undefined4 *)(param_1 + 0x90) = uVar2;
    uVar2 = FUN_4a098468(uVar4,0xf5);
    *(undefined4 *)(param_1 + 0x94) = uVar2;
    if (*(char *)(param_1 + 0x88) == '\0') {
      uVar2 = *(undefined4 *)(param_1 + 0x90);
    }
    *(undefined4 *)(param_1 + 0x8c) = uVar2;
  }
  uVar4 = *(undefined4 *)(param_1 + 0x8c);
  uVar2 = thunk_FUN_4a161570(0xe8);
  piVar3 = (int *)FUN_4a0b7ad4(uVar2,uVar4);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
  }
  FUN_4a0b7a54(piVar3,0xd2,0xd1);
  FUN_4a0b7a40(piVar3,0xe0);
  FUN_4a081c80(param_2,piVar3);
  iVar1 = FUN_4a13d4fc(piVar3);
  if (iVar1 < 2) {
    if ((piVar3 != (int *)0x0) && (iVar1 = (**(code **)(*piVar3 + 8))(piVar3), iVar1 != 0)) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    return (int *)0x0;
  }
  if ((piVar3 != (int *)0x0) && (iVar1 = (**(code **)(*piVar3 + 8))(piVar3), iVar1 != 0)) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  return piVar3;
}



// Address: 4a07c63c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a07c63c(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 == 0) {
    return;
  }
  do {
    iVar2 = FUN_4a165910(param_2);
    if (iVar2 != 0) {
      iVar6 = 0;
      iVar8 = 0;
      if (*(int *)(iVar2 + 0xdc) != 0) {
        iVar8 = *(int *)(*(int *)(iVar2 + 0xdc) + 0x10);
      }
      if (0 < iVar8) {
        do {
          FUN_4a07c63c(param_1,*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0xdc) + 0x14) + iVar6 * 4),
                       param_3);
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar8);
      }
    }
    iVar2 = FUN_4a165858(param_2);
    if (iVar2 == 0) {
      return;
    }
    iVar6 = 0;
    iVar8 = FUN_4a13b5dc(iVar2);
    if (0 < iVar8) {
      do {
        iVar8 = FUN_4a13b4a0(iVar2,iVar6);
        bVar5 = false;
        if (iVar8 == 0) {
switchD_4a07c6f8_caseD_1e:
          bVar1 = false;
          iVar7 = 3;
          goto LAB_4a07ca70;
        }
        bVar1 = false;
        switch(*(undefined4 *)(iVar8 + 0xc)) {
        case 0x1d:
          iVar7 = 4;
          break;
        default:
          goto switchD_4a07c6f8_caseD_1e;
        case 0x1f:
          iVar7 = 5;
          break;
        case 0x20:
          iVar7 = 7;
          break;
        case 0x21:
          iVar7 = 6;
          break;
        case 0x22:
          iVar7 = 8;
          break;
        case 0x23:
          iVar7 = 0x19;
          break;
        case 0x24:
          iVar7 = 0x1b;
          break;
        case 0x25:
          iVar7 = 0x1c;
          break;
        case 0x26:
          iVar7 = 0x1d;
          break;
        case 0x27:
          iVar7 = 0x1e;
          break;
        case 0x28:
          iVar7 = 0;
          goto LAB_4a07c94c;
        case 0x29:
          iVar7 = 2;
          goto LAB_4a07c94c;
        case 0x2a:
          iVar7 = 4;
          goto LAB_4a07c94c;
        case 0x2b:
          iVar7 = 5;
          goto LAB_4a07c94c;
        case 0x2c:
          iVar7 = 6;
          goto LAB_4a07c94c;
        case 0x2d:
          iVar7 = 7;
          goto LAB_4a07c94c;
        case 0x2e:
          iVar7 = 8;
          goto LAB_4a07c94c;
        case 0x2f:
          iVar7 = 1;
          goto LAB_4a07c94c;
        case 0x30:
          iVar7 = 9;
          goto LAB_4a07c94c;
        case 0x31:
          iVar7 = 3;
LAB_4a07c94c:
          bVar5 = true;
          break;
        case 0x33:
          iVar7 = 0x2b;
          break;
        case 0x34:
          iVar7 = 0x2d;
          break;
        case 0x35:
          iVar7 = 0x30;
          break;
        case 0x36:
          iVar7 = 0x31;
          break;
        case 0x37:
          iVar7 = 0x2e;
          break;
        case 0x38:
          iVar7 = 0x2f;
          break;
        case 0x39:
          iVar7 = 0x2c;
          break;
        case 0x3a:
          iVar7 = 0x32;
          break;
        case 0x3c:
          iVar7 = 0xb;
          break;
        case 0x3d:
          iVar7 = 0xc;
          break;
        case 0x3e:
          iVar7 = 0xd;
          break;
        case 0x3f:
          iVar7 = 0xe;
          break;
        case 0x40:
          iVar7 = 0xf;
          break;
        case 0x41:
          iVar7 = 0x2a;
          break;
        case 0x42:
          iVar7 = 0x34;
          break;
        case 0x43:
          iVar7 = 0x35;
          break;
        case 0x44:
          iVar7 = 0x36;
          break;
        case 0x47:
          iVar7 = 0x10;
          break;
        case 0x48:
          iVar7 = 0x12;
          break;
        case 0x49:
          iVar7 = 0x13;
          break;
        case 0x4a:
          iVar7 = 0x11;
          break;
        case 0x4b:
          iVar7 = 0x14;
          break;
        case 0x4c:
          iVar7 = 0x15;
          break;
        case 0x4d:
          iVar7 = 0x16;
          break;
        case 0x4e:
          iVar7 = 0x17;
          break;
        case 0x50:
          iVar7 = 0x23;
          break;
        case 0x51:
          iVar7 = 0x1f;
          break;
        case 0x52:
          iVar7 = 0x21;
          break;
        case 0x53:
          iVar7 = 0x27;
          break;
        case 0x54:
          iVar7 = 0x25;
          break;
        case 0x55:
          iVar7 = 0x26;
          break;
        case 0x56:
          iVar7 = 0x33;
          break;
        case 0x5a:
          iVar7 = 0x28;
          break;
        case 0x5b:
          iVar7 = 0x29;
          break;
        case 0x5c:
          iVar7 = 0x37;
          break;
        case 0x5d:
          iVar7 = 0x38;
          break;
        case 100:
          iVar7 = 0;
          goto LAB_4a07ca60;
        case 0x65:
          iVar7 = 1;
          goto LAB_4a07ca60;
        case 0x66:
          iVar7 = 2;
          goto LAB_4a07ca60;
        case 0x67:
          iVar7 = 4;
          goto LAB_4a07ca60;
        case 0x68:
          iVar7 = 3;
          goto LAB_4a07ca60;
        case 0x69:
          iVar7 = 5;
          goto LAB_4a07ca60;
        case 0x6a:
          iVar7 = 6;
          goto LAB_4a07ca60;
        case 0x6b:
          iVar7 = 7;
          goto LAB_4a07ca60;
        case 0x6c:
          iVar7 = 8;
          goto LAB_4a07ca60;
        case 0x6d:
          iVar7 = 9;
LAB_4a07ca60:
          bVar1 = true;
          break;
        case 0x6e:
          iVar7 = 10;
          bVar1 = true;
        }
LAB_4a07ca70:
        if (bVar5) {
          iVar7 = FUN_4a07cb70(param_1,iVar7,param_3);
        }
        else {
          iVar3 = *(int *)(param_1 + 0x2c);
          if (bVar1) {
            if (iVar3 == 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = *(int *)(iVar3 + 8);
            }
            if (iVar3 == 0) {
              FUN_4a07ea80(param_1);
            }
            if (*(int *)(param_1 + 0x68) == 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = *(int *)(*(int *)(param_1 + 0x68) + 8);
            }
            iVar3 = *(int *)(iVar3 + param_3 * 0x14 + 0xc);
          }
          else {
            if (iVar3 == 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = *(int *)(iVar3 + 8);
            }
            if (iVar3 == 0) {
              FUN_4a07ea80(param_1);
            }
            iVar3 = *(int *)(param_1 + 0x2c);
          }
          iVar4 = 0;
          if (iVar3 != 0) {
            iVar4 = *(int *)(iVar3 + 8);
          }
          iVar7 = *(int *)(iVar4 + iVar7 * 4);
        }
        if (iVar8 != 0 && iVar7 != 0) {
          *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(iVar8 + 0xc);
        }
        FUN_4a0b3bc8(iVar2,iVar6,iVar7);
        iVar6 = iVar6 + 1;
        iVar8 = FUN_4a13b5dc(iVar2);
      } while (iVar6 < iVar8);
    }
    iVar2 = FUN_4a1657f4(iVar2);
    if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a07cb1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    param_2 = *(int *)(iVar2 + 0x114);
    if (param_2 == 0) {
      return;
    }
  } while( true );
}



// Address: 4a07cb70

undefined4 FUN_4a07cb70(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  if (iVar1 == 0) {
    FUN_4a07ea80(param_1);
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 8);
  }
  iVar1 = *(int *)(iVar1 + param_3 * 0x14 + 0xc);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
  }
  return *(undefined4 *)(iVar2 + param_2 * 4);
}



// Address: 4a07cbd0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a07cbd0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  undefined1 auStack_38 [8];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  if (*(int *)(param_1 + 0xac) == 0) {
    iVar5 = FUN_4a0ff494();
    uVar11 = *(undefined4 *)(iVar5 + 0x60);
    FUN_4a0fb644();
    uVar6 = FUN_4a0982e0(uVar11,0xb5);
    *(undefined4 *)(param_1 + 0xac) = uVar6;
    switchD_4a1193c4::default(PTR_s_preloadSimAssets_male_4a07cc9c);
    FUN_4a0fb644();
    uVar6 = FUN_4a0982e0(uVar11,0xb4);
    *(undefined4 *)(param_1 + 0xb4) = uVar6;
    switchD_4a1193c4::default(PTR_s_preloadSimAssets_female_4a17f147_1_4a07cca0);
    iVar5 = FUN_4a0b74b0(*(undefined4 *)(param_1 + 0xac),200);
    piVar7 = (int *)FUN_4a0b75a8(*(undefined4 *)(iVar5 + 0x114));
    *(int **)(param_1 + 0xb0) = piVar7;
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0xc))();
    }
    FUN_4a0788cc(param_1,*(undefined4 *)(param_1 + 0xb0));
    iVar5 = FUN_4a0b74b0(*(undefined4 *)(param_1 + 0xb4),0xfa);
    piVar7 = (int *)FUN_4a0b75a8(*(undefined4 *)(iVar5 + 0x114));
    *(int **)(param_1 + 0xb8) = piVar7;
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0xc))();
    }
    uVar6 = *(undefined4 *)(param_1 + 0xb8);
    puVar1 = (undefined4 *)FUN_4a0c6bc0(auStack_38);
    *puVar1 = PTR_PTR_4a078b68;
    puVar1[2] = 10;
    puVar1[4] = 0;
    puVar1[3] = 10;
    puVar1[5] = 0;
    iVar5 = thunk_FUN_4a161570(0x28);
    puVar1[5] = iVar5;
    if (iVar5 != 0) {
      iVar5 = 0;
      if (0 < (int)puVar1[4]) {
        do {
          iVar8 = iVar5 + 1;
          *(undefined4 *)(puVar1[5] + iVar5 * 4) = *(undefined4 *)(iVar5 * 4);
          iVar5 = iVar8;
        } while (iVar8 < (int)puVar1[4]);
      }
      thunk_FUN_4a161530(0);
    }
    iVar5 = puVar1[4];
    if ((int)puVar1[4] < (int)puVar1[3]) {
      do {
        iVar8 = iVar5 + 1;
        *(undefined4 *)(puVar1[5] + iVar5 * 4) = 0;
        iVar5 = iVar8;
      } while (iVar8 < (int)puVar1[3]);
    }
    iVar8 = FUN_4a0b74b0(uVar6,0x2be);
    iVar10 = 0;
    iVar5 = 0;
    if (*(int *)(iVar8 + 0xdc) != 0) {
      iVar5 = *(int *)(*(int *)(iVar8 + 0xdc) + 0x10);
    }
    if (0 < iVar5) {
      do {
        piVar7 = *(int **)(*(int *)(*(int *)(iVar8 + 0xdc) + 0x14) + iVar10 * 4);
        iVar2 = FUN_4a165910(piVar7);
        iVar4 = iStack_24;
        if (piVar7[3] == 0) {
          iVar3 = 0;
          if (iVar2 != 0) {
            iVar3 = *(int *)(iVar2 + 0xdc);
          }
          if (((iVar2 != 0 && iVar3 != 0) && (*(int *)(iVar3 + 0x10) == 1)) &&
             (*(int *)(**(int **)(iVar3 + 0x14) + 0xc) != 0)) {
            if ((iStack_28 == iStack_2c) && (iVar2 = iStack_2c + iStack_30, iStack_2c < iVar2)) {
              iStack_2c = iVar2;
              iStack_24 = thunk_FUN_4a161570(iVar2 * 4);
              iVar2 = iStack_28;
              if (iStack_24 != 0) {
                iVar2 = 0;
                if (0 < iStack_28) {
                  do {
                    *(undefined4 *)(iStack_24 + iVar2 * 4) = *(undefined4 *)(iVar4 + iVar2 * 4);
                    iVar2 = iVar2 + 1;
                  } while (iVar2 < iStack_28);
                }
                thunk_FUN_4a161530(iVar4);
                iVar2 = iStack_28;
              }
              for (; iVar2 < iStack_2c; iVar2 = iVar2 + 1) {
                *(undefined4 *)(iStack_24 + iVar2 * 4) = 0;
              }
            }
            iVar4 = iStack_28;
            iVar2 = iStack_28 + 1;
            piVar9 = *(int **)(iStack_24 + iStack_28 * 4);
            iStack_28 = iVar2;
            if (piVar7 != (int *)0x0) {
              (**(code **)(*piVar7 + 0xc))();
            }
            *(int **)(iStack_24 + iVar4 * 4) = piVar7;
            if ((piVar9 != (int *)0x0) && (iVar4 = (**(code **)(*piVar9 + 8))(piVar9), iVar4 != 0))
            {
              (**(code **)(*piVar9 + 4))(piVar9);
            }
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar5);
    }
    iVar5 = 0;
    if (0 < iStack_28) {
      do {
        iVar8 = *(int *)(iStack_24 + iVar5 * 4);
        if (*(int *)(iVar8 + 0xcc) != 0) {
          uVar6 = FUN_4a165910();
          FUN_4a0b4ac8(uVar6,iVar8);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iStack_28);
    }
    FUN_4a16d7b4(auStack_38);
    return;
  }
  return;
}



// Address: 4a07cca4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a07cca4(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  if (*(byte *)(param_1 + 0x88) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x88) = (char)param_2;
  if (*(int *)(param_1 + 0x8c) == 0) {
    iVar1 = FUN_4a0ff494();
    uVar4 = *(undefined4 *)(iVar1 + 0x60);
    uVar2 = FUN_4a098468(uVar4,0xf4);
    *(undefined4 *)(param_1 + 0x90) = uVar2;
    uVar2 = FUN_4a098468(uVar4,0xf5);
    *(undefined4 *)(param_1 + 0x94) = uVar2;
    if (*(char *)(param_1 + 0x88) == '\0') {
      uVar2 = *(undefined4 *)(param_1 + 0x90);
    }
    *(undefined4 *)(param_1 + 0x8c) = uVar2;
  }
  piVar8 = *(int **)(param_1 + 0x8c);
  iVar1 = FUN_4a0642fc();
  iVar6 = *(int *)(iVar1 + 0x40);
  iVar1 = 0;
  iVar7 = 0;
  if (0 < iVar6) {
    do {
      if (*(int *)(param_1 + 0x68) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x68) + 8);
      }
      iVar3 = *(int *)(iVar3 + iVar1 * 0x14 + 0xc);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar3 + 8);
      }
      iVar3 = FUN_4a136540(*(undefined4 *)(iVar3 + 0x24),1);
      if (iVar3 != 0) {
        FUN_4a0b7a68(iVar3,piVar8);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar6);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar7 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  iVar1 = FUN_4a136540(*(undefined4 *)(iVar7 + 0xdc),1);
  if (iVar1 == 0) {
    return;
  }
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0xc))(piVar8);
  }
  piVar5 = *(int **)(iVar1 + 0xcc);
  if ((piVar5 != (int *)0x0) && (iVar6 = (**(code **)(*piVar5 + 8))(piVar5), iVar6 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  *(int **)(iVar1 + 0xcc) = piVar8;
  return;
}



// Address: 4a07cd9c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a07cd9c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    return;
  }
  do {
    iVar1 = FUN_4a165910();
    if (iVar1 != 0) {
      iVar3 = 0;
      iVar4 = 0;
      if (*(int *)(iVar1 + 0xdc) != 0) {
        iVar4 = *(int *)(*(int *)(iVar1 + 0xdc) + 0x10);
      }
      if (0 < iVar4) {
        do {
          FUN_4a07cd9c(*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0xdc) + 0x14) + iVar3 * 4),param_2)
          ;
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar4);
      }
    }
    iVar1 = FUN_4a165858(param_1);
    if (iVar1 == 0) {
      return;
    }
    uVar2 = FUN_4a13b5e4();
    FUN_4a0ade00(uVar2,param_2);
    iVar1 = FUN_4a1657f4(param_1);
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a07ce24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    param_1 = *(int *)(iVar1 + 0x114);
  } while (param_1 != 0);
  return;
}



// Address: 4a07ce40

void FUN_4a07ce40(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  uVar1 = FUN_4a07cb70(param_1,4,param_2);
  FUN_4a0a7c84(uVar1,0);
  uVar1 = FUN_4a07cb70(param_1,0xe,param_2);
  FUN_4a0a7c84(uVar1,0);
  uVar1 = FUN_4a07cb70(param_1,5,param_2);
  FUN_4a0a7c84(uVar1,0);
  uVar1 = FUN_4a07cb70(param_1,0xf,param_2);
  FUN_4a0a7c84(uVar1,0);
  uVar1 = FUN_4a07cb70(param_1,9,param_2);
  FUN_4a0a7c84(uVar1,0);
  uVar1 = FUN_4a07cb70(param_1,0x13,param_2);
  FUN_4a0a7c84(uVar1,0);
  uVar1 = FUN_4a07cb70(param_1,2,param_2);
  FUN_4a0a7c84(uVar1,0);
  uVar1 = FUN_4a07cb70(param_1,0xc,param_2);
  FUN_4a0a7c84(uVar1,0);
  uVar1 = FUN_4a07cb70(param_1,3,param_2);
  FUN_4a0a7c84(uVar1,0);
  uVar1 = FUN_4a07cb70(param_1,0xd,param_2);
  FUN_4a0a7c84(uVar1,0);
  uVar1 = FUN_4a07cb70(param_1,0,param_2);
  FUN_4a0a7c84(uVar1,0);
  uVar1 = FUN_4a07cb70(param_1,10,param_2);
  FUN_4a0a7c84(uVar1,0);
  uVar1 = FUN_4a07cb70(param_1,1,param_2);
  FUN_4a0a7c84(uVar1,0);
  uVar1 = FUN_4a07cb70(param_1,0xb,param_2);
  FUN_4a0a7c84(uVar1,0);
  uVar1 = FUN_4a07cb70(param_1,6,param_2);
  FUN_4a0a7c84(uVar1,0);
  uVar1 = FUN_4a07cb70(param_1,0x10,param_2);
  FUN_4a0a7c84(uVar1,0);
  uVar1 = FUN_4a07cb70(param_1,6,param_2);
  FUN_4a0a7c84(uVar1,1,0);
  uVar1 = FUN_4a07cb70(param_1,0x10,param_2);
  FUN_4a0a7c84(uVar1,1,0);
  uVar1 = FUN_4a07cb70(param_1,8,param_2);
  FUN_4a0a7c84(uVar1,0);
  uVar1 = FUN_4a07cb70(param_1,0x12,param_2);
  FUN_4a0a7c84(uVar1,0);
  uVar1 = FUN_4a07cb70(param_1,8,param_2);
  FUN_4a0a7c84(uVar1,1,0);
  uVar1 = FUN_4a07cb70(param_1,0x12,param_2);
  FUN_4a0a7c84(uVar1,1,0);
  uVar1 = FUN_4a07cb70(param_1,7,param_2);
  FUN_4a0a7c84(uVar1,0);
  uVar1 = FUN_4a07cb70(param_1,0x11,param_2);
  FUN_4a0a7c84(uVar1,0);
  uVar1 = FUN_4a07cb70(param_1,7,param_2);
  FUN_4a0a7c84(uVar1,1,0);
  uVar1 = FUN_4a07cb70(param_1,0x11,param_2);
  FUN_4a0a7c84(uVar1,1,0);
  iVar2 = *(int *)(param_1 + 0x54);
  iVar4 = 0;
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 8);
  }
  iVar6 = 0;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  if (*(int *)(iVar3 + param_2 * 0x14 + 8) < 1) {
    return;
  }
  do {
    iVar3 = iVar6;
    if (*(int *)(param_1 + 0x54) != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x54) + 8);
    }
    iVar2 = *(int *)(iVar3 + param_2 * 0x14 + 0xc);
    iVar3 = iVar6;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 8);
    }
    piVar5 = *(int **)(iVar3 + iVar4 * 4);
    if ((piVar5 != (int *)0x0) && (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 != 0)) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    iVar3 = iVar6;
    if (*(int *)(param_1 + 0x54) != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x54) + 8);
    }
    iVar2 = *(int *)(iVar3 + param_2 * 0x14 + 0xc);
    iVar3 = iVar6;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 8);
    }
    *(undefined4 *)(iVar3 + iVar4 * 4) = 0;
    iVar4 = iVar4 + 1;
    iVar3 = iVar6;
    if (*(int *)(param_1 + 0x54) != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x54) + 8);
    }
  } while (iVar4 < *(int *)(iVar3 + param_2 * 0x14 + 8));
  return;
}



// Address: 4a07d204

void FUN_4a07d204(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 auStack_d8 [12];
  int local_cc;
  undefined1 auStack_c4 [72];
  undefined1 auStack_7c [72];
  int iStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  int iStack_28;
  
  iStack_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  iStack_28 = param_4;
  FUN_4a0b8a1c(auStack_7c);
  iVar9 = 0;
  FUN_4a0b89d4(auStack_c4,local_2c);
  FUN_4a0b8640(auStack_c4);
  FUN_4a13bd60(param_2,auStack_7c);
  FUN_4a0b7d00(auStack_7c,auStack_c4);
  FUN_4a16b934(auStack_d8,4);
  if (local_cc == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = *(undefined4 **)(local_cc + 8);
  }
  *puVar1 = param_6;
  if (local_cc == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(local_cc + 8);
  }
  *(undefined4 *)(iVar2 + 4) = param_7;
  if (local_cc == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(local_cc + 8);
  }
  *(undefined4 *)(iVar2 + 8) = param_8;
  if (local_cc == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(local_cc + 8);
  }
  *(undefined4 *)(iVar2 + 0xc) = 0x3f800000;
  FUN_4a13c870(auStack_7c,auStack_d8);
  if (local_cc == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(local_cc + 8);
  }
  uVar3 = FUN_4a171bb8(0x3f800000,*(undefined4 *)(iVar2 + 0xc));
  if (local_cc == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = *(undefined4 **)(local_cc + 8);
  }
  uVar4 = FUN_4a17211c(*puVar1,uVar3);
  if (local_cc == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(local_cc + 8);
  }
  uVar5 = FUN_4a17211c(*(undefined4 *)(iVar2 + 4),uVar3);
  if (local_cc == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(local_cc + 8);
  }
  uVar3 = FUN_4a17211c(*(undefined4 *)(iVar2 + 8),uVar3);
  uVar6 = FUN_4a171fac(param_4);
  uVar6 = FUN_4a17211c(uVar6,uVar5 ^ 0x80000000);
  uVar6 = FUN_4a17295c(uVar6,0xffffffff);
  uVar7 = FUN_4a171fac(param_4 >> 1);
  uVar6 = FUN_4a171a94(uVar7,uVar6);
  uVar7 = FUN_4a171fac(param_5);
  uVar7 = FUN_4a17211c(uVar7,uVar4 ^ 0x80000000);
  uVar7 = FUN_4a17295c(uVar7,0xffffffff);
  uVar8 = FUN_4a171fac(param_5 >> 1);
  uVar7 = FUN_4a171a94(uVar8,uVar7);
  if (*(int *)(param_1 + 0xc) == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 0xc) + 8);
  }
  *puVar1 = uVar6;
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 8);
  }
  *(undefined4 *)(iVar2 + 4) = uVar7;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar9 = *(int *)(*(int *)(param_1 + 0xc) + 8);
  }
  *(undefined4 *)(iVar9 + 8) = uVar3;
  FUN_4a16ba04(auStack_d8);
  FUN_4a0c6bf4(auStack_c4);
  FUN_4a0c6bf4(auStack_7c);
  return;
}



// Address: 4a07d410

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a07d410(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 *puVar12;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined *apuStack_68 [2];
  int iStack_60;
  int iStack_54;
  undefined1 auStack_50 [20];
  undefined *apuStack_3c [2];
  int iStack_34;
  undefined *puStack_28;
  
  if (*(int *)(param_1 + 0x28) < 1) {
    return;
  }
  iVar2 = FUN_4a0642fc();
  iStack_54 = *(int *)(iVar2 + 0x40);
  if (*(int *)(param_1 + 100) == iStack_54) {
                    /* WARNING: Could not recover jumptable at 0x4a07d44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  iVar2 = 0;
  puVar12 = (undefined4 *)0x0;
  if (0 < *(int *)(param_1 + 100)) {
    do {
      if (*(int *)(param_1 + 0x68) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x68) + 8);
      }
      iVar8 = 0;
      if (0 < *(int *)(iVar3 + iVar2 * 0x14 + 8)) {
        do {
          if (*(int *)(param_1 + 0x68) == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(*(int *)(param_1 + 0x68) + 8);
          }
          iVar3 = *(int *)(iVar3 + iVar2 * 0x14 + 0xc);
          if (iVar3 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(iVar3 + 8);
          }
          piVar9 = *(int **)(iVar3 + iVar8 * 4);
          if ((piVar9 != (int *)0x0) && (iVar3 = (**(code **)(*piVar9 + 8))(piVar9), iVar3 != 0)) {
            (**(code **)(*piVar9 + 4))(piVar9);
          }
          iVar8 = iVar8 + 1;
          if (*(int *)(param_1 + 0x68) == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(*(int *)(param_1 + 0x68) + 8);
          }
        } while (iVar8 < *(int *)(iVar3 + iVar2 * 0x14 + 8));
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 100));
  }
  iVar2 = FUN_4a1684d4(apuStack_3c,iStack_54);
  uVar10 = *(undefined4 *)(iVar2 + 8);
  piVar9 = *(int **)(iVar2 + 0xc);
  if (piVar9 != (int *)0x0) {
    (**(code **)(*piVar9 + 0xc))(piVar9);
  }
  (**(code **)(*(int *)(param_1 + 0x5c) + 0x1c))((int *)(param_1 + 0x5c));
  *(undefined4 *)(param_1 + 100) = uVar10;
  apuStack_3c[0] = PTR_PTR_4a07db48;
  *(int **)(param_1 + 0x68) = piVar9;
  iVar2 = FUN_4a0bcc84(apuStack_3c);
  if (iVar2 != 0) {
    iVar3 = 0;
    if (0 < iStack_34) {
      do {
        (*(code *)**(undefined4 **)(iVar2 + iVar3 * 0x14))();
        iVar3 = iVar3 + 1;
      } while (iVar3 < iStack_34);
      if (iVar2 == 0) goto LAB_4a07d5cc;
    }
    FUN_4a14f21c(iVar2);
  }
LAB_4a07d5cc:
  FUN_4a0c6bf4(apuStack_3c);
  iVar2 = FUN_4a16be24(auStack_50,iStack_54);
  uVar10 = *(undefined4 *)(iVar2 + 8);
  piVar9 = *(int **)(iVar2 + 0xc);
  if (piVar9 != (int *)0x0) {
    (**(code **)(*piVar9 + 0xc))(piVar9);
  }
  (**(code **)(*(int *)(param_1 + 0x70) + 0x1c))((int *)(param_1 + 0x70));
  *(undefined4 *)(param_1 + 0x78) = uVar10;
  *(int **)(param_1 + 0x7c) = piVar9;
  FUN_4a16bef4(auStack_50);
  puVar1 = PTR_PTR_4a07db50;
  iVar2 = 0;
  if (iStack_54 < 1) {
                    /* WARNING: Could not recover jumptable at 0x4a07d640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  puStack_28 = PTR_PTR_4a07db4c;
  do {
    puVar7 = puVar12;
    if (*(int *)(param_1 + 0x7c) != 0) {
      puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x7c) + 8);
    }
    puVar7[iVar2] = 0;
    puVar7 = puVar12;
    if (*(int *)(param_1 + 0x68) != 0) {
      puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x68) + 8);
    }
    piVar11 = puVar7 + iVar2 * 5;
    piVar9 = (int *)FUN_4a0c6bc0(apuStack_68);
    piVar9[2] = 0;
    piVar9[3] = 0;
    *piVar9 = (int)puVar1;
    iVar3 = FUN_4a15e080(0x2c);
    if (iVar3 == 0) {
      iVar3 = FUN_4a1669a8();
    }
    iVar8 = 0;
    do {
      *(undefined4 *)(iVar3 + iVar8 * 4) = 0;
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0xb);
    thunk_FUN_4a161570(0x18,0xb);
    piVar4 = (int *)FUN_4a0c0628();
    piVar4[3] = 4;
    piVar4[4] = 0xb;
    *piVar4 = (int)puStack_28;
    piVar4[2] = iVar3;
    *(undefined1 *)(piVar4 + 5) = 1;
    if (piVar4 != (int *)0x0) {
      (**(code **)(puStack_28 + 0xc))(piVar4);
    }
    (**(code **)(*piVar9 + 0x1c))(piVar9);
    piVar9[2] = 0xb;
    piVar9[3] = (int)piVar4;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))(piVar4);
    }
    (**(code **)(*piVar11 + 0x1c))(piVar11);
    iVar3 = iStack_60;
    piVar11[2] = 0xb;
    piVar11[3] = (int)piVar4;
    apuStack_68[0] = puVar1;
    iVar8 = FUN_4a0bcc84(apuStack_68);
    if (iVar8 != 0) {
      iVar5 = 0;
      if (0 < iVar3) {
        do {
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar3);
        if (iVar8 == 0) goto LAB_4a07d7b0;
      }
      FUN_4a14f21c(iVar8);
    }
LAB_4a07d7b0:
    FUN_4a0c6bf4(apuStack_68);
    puVar7 = puVar12;
    if (*(int *)(param_1 + 0x2c) != 0) {
      puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x2c) + 8);
    }
    uVar10 = FUN_4a0b75a8(puVar7[3]);
    puVar7 = puVar12;
    if (*(int *)(param_1 + 0x68) != 0) {
      puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x68) + 8);
    }
    puVar6 = puVar12;
    if (puVar7[iVar2 * 5 + 3] != 0) {
      puVar6 = *(undefined4 **)(puVar7[iVar2 * 5 + 3] + 8);
    }
    *puVar6 = uVar10;
    puVar7 = puVar12;
    if (*(int *)(param_1 + 0x2c) != 0) {
      puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x2c) + 8);
    }
    uVar10 = FUN_4a0b75a8(puVar7[5]);
    puVar7 = puVar12;
    if (*(int *)(param_1 + 0x68) != 0) {
      puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x68) + 8);
    }
    puVar6 = puVar12;
    if (puVar7[iVar2 * 5 + 3] != 0) {
      puVar6 = *(undefined4 **)(puVar7[iVar2 * 5 + 3] + 8);
    }
    puVar6[2] = uVar10;
    puVar7 = puVar12;
    if (*(int *)(param_1 + 0x2c) != 0) {
      puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x2c) + 8);
    }
    uVar10 = FUN_4a0b75a8(puVar7[7]);
    puVar7 = puVar12;
    if (*(int *)(param_1 + 0x68) != 0) {
      puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x68) + 8);
    }
    puVar6 = puVar12;
    if (puVar7[iVar2 * 5 + 3] != 0) {
      puVar6 = *(undefined4 **)(puVar7[iVar2 * 5 + 3] + 8);
    }
    puVar6[4] = uVar10;
    puVar7 = puVar12;
    if (*(int *)(param_1 + 0x2c) != 0) {
      puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x2c) + 8);
    }
    uVar10 = FUN_4a0b75a8(puVar7[8]);
    puVar7 = puVar12;
    if (*(int *)(param_1 + 0x68) != 0) {
      puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x68) + 8);
    }
    puVar6 = puVar12;
    if (puVar7[iVar2 * 5 + 3] != 0) {
      puVar6 = *(undefined4 **)(puVar7[iVar2 * 5 + 3] + 8);
    }
    puVar6[5] = uVar10;
    puVar7 = puVar12;
    if (*(int *)(param_1 + 0x2c) != 0) {
      puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x2c) + 8);
    }
    uVar10 = FUN_4a0b75a8(puVar7[6]);
    puVar7 = puVar12;
    if (*(int *)(param_1 + 0x68) != 0) {
      puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x68) + 8);
    }
    puVar6 = puVar12;
    if (puVar7[iVar2 * 5 + 3] != 0) {
      puVar6 = *(undefined4 **)(puVar7[iVar2 * 5 + 3] + 8);
    }
    puVar6[3] = uVar10;
    puVar7 = puVar12;
    if (*(int *)(param_1 + 0x2c) != 0) {
      puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x2c) + 8);
    }
    uVar10 = FUN_4a0b75a8(puVar7[4]);
    puVar7 = puVar12;
    if (*(int *)(param_1 + 0x68) != 0) {
      puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x68) + 8);
    }
    puVar6 = puVar12;
    if (puVar7[iVar2 * 5 + 3] != 0) {
      puVar6 = *(undefined4 **)(puVar7[iVar2 * 5 + 3] + 8);
    }
    puVar6[1] = uVar10;
    puVar7 = puVar12;
    if (*(int *)(param_1 + 0x2c) != 0) {
      puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x2c) + 8);
    }
    uVar10 = FUN_4a0b75a8(puVar7[3]);
    puVar7 = puVar12;
    if (*(int *)(param_1 + 0x68) != 0) {
      puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x68) + 8);
    }
    puVar6 = puVar12;
    if (puVar7[iVar2 * 5 + 3] != 0) {
      puVar6 = *(undefined4 **)(puVar7[iVar2 * 5 + 3] + 8);
    }
    puVar6[6] = uVar10;
    puVar7 = puVar12;
    if (*(int *)(param_1 + 0x2c) != 0) {
      puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x2c) + 8);
    }
    uVar10 = FUN_4a0b75a8(puVar7[6]);
    puVar7 = puVar12;
    if (*(int *)(param_1 + 0x68) != 0) {
      puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x68) + 8);
    }
    puVar6 = puVar12;
    if (puVar7[iVar2 * 5 + 3] != 0) {
      puVar6 = *(undefined4 **)(puVar7[iVar2 * 5 + 3] + 8);
    }
    puVar6[7] = uVar10;
    puVar7 = puVar12;
    if (*(int *)(param_1 + 0x68) != 0) {
      puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x68) + 8);
    }
    puVar6 = puVar12;
    if (puVar7[iVar2 * 5 + 3] != 0) {
      puVar6 = *(undefined4 **)(puVar7[iVar2 * 5 + 3] + 8);
    }
    FUN_4a0afe78(puVar6[7],6);
    puVar7 = puVar12;
    if (*(int *)(param_1 + 0x2c) != 0) {
      puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x2c) + 8);
    }
    uVar10 = FUN_4a0b75a8(puVar7[7]);
    puVar7 = puVar12;
    if (*(int *)(param_1 + 0x68) != 0) {
      puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x68) + 8);
    }
    puVar6 = puVar12;
    if (puVar7[iVar2 * 5 + 3] != 0) {
      puVar6 = *(undefined4 **)(puVar7[iVar2 * 5 + 3] + 8);
    }
    puVar6[8] = uVar10;
    puVar7 = puVar12;
    if (*(int *)(param_1 + 0x2c) != 0) {
      puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x2c) + 8);
    }
    uVar10 = FUN_4a0b75a8(puVar7[3]);
    puVar7 = puVar12;
    if (*(int *)(param_1 + 0x68) != 0) {
      puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x68) + 8);
    }
    puVar6 = puVar12;
    if (puVar7[iVar2 * 5 + 3] != 0) {
      puVar6 = *(undefined4 **)(puVar7[iVar2 * 5 + 3] + 8);
    }
    puVar6[9] = uVar10;
    puVar7 = puVar12;
    if (*(int *)(param_1 + 0x2c) != 0) {
      puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x2c) + 8);
    }
    uVar10 = FUN_4a0b75a8(puVar7[5]);
    iVar3 = 0;
    puVar7 = puVar12;
    if (*(int *)(param_1 + 0x68) != 0) {
      puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x68) + 8);
    }
    puVar6 = puVar12;
    if (puVar7[iVar2 * 5 + 3] != 0) {
      puVar6 = *(undefined4 **)(puVar7[iVar2 * 5 + 3] + 8);
    }
    puVar6[10] = uVar10;
    puVar7 = puVar12;
    if (*(int *)(param_1 + 0x68) != 0) {
      puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x68) + 8);
    }
    if (0 < (int)puVar7[iVar2 * 5 + 2]) {
      do {
        puVar7 = puVar12;
        if (*(int *)(param_1 + 0x68) != 0) {
          puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x68) + 8);
        }
        puVar6 = puVar12;
        if (puVar7[iVar2 * 5 + 3] != 0) {
          puVar6 = *(undefined4 **)(puVar7[iVar2 * 5 + 3] + 8);
        }
        if ((int *)puVar6[iVar3] != (int *)0x0) {
          (**(code **)(*(int *)puVar6[iVar3] + 0xc))();
        }
        iVar3 = iVar3 + 1;
        puVar7 = puVar12;
        if (*(int *)(param_1 + 0x68) != 0) {
          puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x68) + 8);
        }
      } while (iVar3 < (int)puVar7[iVar2 * 5 + 2]);
    }
    iVar2 = iVar2 + 1;
    if (iStack_54 <= iVar2) {
      return;
    }
  } while( true );
}



// Address: 4a07db54

undefined4 FUN_4a07db54(int param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined *local_12c [3];
  undefined *local_120;
  int local_11c;
  undefined *local_118;
  undefined *local_114;
  int local_110;
  undefined *local_10c;
  int local_108;
  undefined *local_104;
  undefined *local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  undefined1 auStack_e4 [16];
  int local_d4;
  int local_d0;
  undefined4 local_cc;
  undefined1 auStack_c8 [8];
  undefined4 local_c0;
  int *local_bc;
  undefined1 auStack_b4 [8];
  undefined4 local_ac;
  int *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 auStack_94 [12];
  int local_88;
  undefined1 auStack_80 [12];
  int local_74;
  undefined1 auStack_6c [12];
  int local_60;
  undefined *local_58 [2];
  int local_50;
  int local_4c;
  int local_44;
  int local_40;
  undefined *local_3c;
  undefined *local_38;
  undefined *local_34;
  undefined *local_30;
  int local_2c;
  int local_28;
  
  local_2c = param_1;
  local_28 = param_2;
  FUN_4a0fb644();
  local_44 = *(int *)(local_2c + 8);
  piVar3 = (int *)FUN_4a0c6bc0(local_58);
  local_34 = PTR_PTR_4a07e8d8;
  local_30 = PTR_PTR_4a07e8d4;
  piVar3[2] = 0;
  piVar3[3] = 0;
  *piVar3 = (int)local_34;
  if (0 < local_44) {
    iVar4 = FUN_4a15e080(local_44 << 2);
    if (iVar4 == 0) {
      iVar4 = FUN_4a1669a8();
    }
    iVar10 = 0;
    do {
      local_e8 = 0;
      *(undefined4 *)(iVar4 + iVar10 * 4) = 0;
      iVar10 = iVar10 + 1;
    } while (iVar10 < local_44);
    thunk_FUN_4a161570(0x18);
    puVar5 = (undefined4 *)FUN_4a0c0628();
    puVar1 = PTR_PTR_4a07e8dc;
    *puVar5 = PTR_PTR_4a07e8dc;
    puVar5[3] = 4;
    puVar5[2] = iVar4;
    puVar5[4] = local_44;
    *(undefined1 *)(puVar5 + 5) = 1;
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)(puVar1 + 0xc))(puVar5);
    }
    (**(code **)(*piVar3 + 0x1c))(piVar3);
    piVar3[3] = (int)puVar5;
    piVar3[2] = local_44;
  }
  FUN_4a16a7c8(auStack_6c,local_44);
  FUN_4a16be24(auStack_80,local_44);
  iVar12 = 0;
  iVar4 = 0;
  iVar10 = 0;
  FUN_4a16b934(auStack_94,4);
  iVar11 = 0;
  if (0 < local_44) {
    do {
      if (local_74 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(local_74 + 8);
      }
      *(int *)(iVar6 + iVar11 * 4) = iVar12;
      if (*(int *)(local_2c + 0xc) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(local_2c + 0xc) + 8);
      }
      iVar6 = FUN_4a13b5e4(*(undefined4 *)(iVar6 + iVar11 * 4));
      iVar12 = iVar12 + *(int *)(iVar6 + 0x28);
      iVar7 = FUN_4a13912c(iVar6,auStack_94);
      if (iVar4 < *(int *)(iVar7 + 0x2c)) {
        iVar4 = *(int *)(iVar7 + 0x2c);
      }
      iVar6 = FUN_4a1391d0(iVar6,0,auStack_94);
      iVar11 = iVar11 + 1;
      if (iVar10 < *(int *)(iVar6 + 0x2c)) {
        iVar10 = *(int *)(iVar6 + 0x2c);
      }
    } while (iVar11 < local_44);
  }
  thunk_FUN_4a161570(0x74);
  local_98 = FUN_4a0ae56c();
  uVar8 = thunk_FUN_4a161570(0x48);
  local_9c = FUN_4a0ad610(uVar8,iVar12,iVar4,4);
  uVar8 = thunk_FUN_4a161570(0x48);
  local_a0 = FUN_4a0ad610(uVar8,iVar12,iVar10,4);
  FUN_4a0adc00(local_98,local_9c,0x3f800000,0);
  FUN_4a0adcbc(local_98,0,local_a0,0x3f800000,0);
  FUN_4a16b934(auStack_b4,iVar4);
  FUN_4a16b934(auStack_c8,iVar10);
  puVar1 = PTR_PTR_4a07e8e4;
  local_e8 = 0;
  local_38 = PTR_PTR_4a07e8e0;
  if (0 < local_44) {
    do {
      iVar4 = 0;
      if (*(int *)(local_2c + 0xc) != 0) {
        iVar4 = *(int *)(*(int *)(local_2c + 0xc) + 8);
      }
      local_ec = *(int *)(iVar4 + local_e8 * 4);
      local_f0 = FUN_4a13b5e4();
      iVar10 = *(int *)(local_f0 + 0x28);
      iVar4 = 0;
      if (local_74 != 0) {
        iVar4 = *(int *)(local_74 + 8);
      }
      iVar4 = *(int *)(iVar4 + local_e8 * 4);
      local_f4 = FUN_4a13912c(local_f0,auStack_94);
      puVar5 = (undefined4 *)0x0;
      if (local_88 != 0) {
        puVar5 = *(undefined4 **)(local_88 + 8);
      }
      local_f8 = *puVar5;
      if (local_88 != 0) {
        iVar11 = *(int *)(local_88 + 8);
      }
      else {
        iVar11 = 0;
      }
      iVar12 = *(int *)(local_f4 + 0x2c);
      if (*(int *)(local_f4 + 0x30) == 2) {
        FUN_4a16b934(&local_10c,iVar12);
        iVar6 = 0;
        if (0 < iVar10) {
          do {
            FUN_4a138e28(local_f4,iVar6,1,&local_10c);
            iVar7 = 0;
            if (0 < iVar12) {
              do {
                if (local_100 == (undefined *)0x0) {
                  iVar9 = 0;
                }
                else {
                  iVar9 = *(int *)(local_100 + 8);
                }
                uVar8 = FUN_4a17211c(*(undefined4 *)(iVar9 + iVar7 * 4),local_f8);
                uVar8 = FUN_4a171a94(uVar8,*(undefined4 *)(iVar11 + 4 + iVar7 * 4));
                if (local_a8 == (int *)0x0) {
                  iVar9 = 0;
                }
                else {
                  iVar9 = local_a8[2];
                }
                *(undefined4 *)(iVar9 + iVar7 * 4) = uVar8;
                iVar7 = iVar7 + 1;
              } while (iVar7 < iVar12);
            }
            puVar5 = (undefined4 *)FUN_4a0c6bc0(&local_120);
            *puVar5 = local_30;
            puVar5[2] = local_ac;
            puVar5[3] = local_a8;
            if (local_a8 != (int *)0x0) {
              (**(code **)(*local_a8 + 0xc))();
            }
            *puVar5 = puVar1;
            FUN_4a0ad110(local_9c,iVar6 + iVar4,1,puVar5);
            puVar2 = local_118;
            local_120 = puVar1;
            iVar7 = FUN_4a0bcc84(&local_120);
            if (iVar7 != 0) {
              iVar9 = 0;
              if (0 < (int)puVar2) {
                do {
                  iVar9 = iVar9 + 1;
                } while (iVar9 < (int)puVar2);
                if (iVar7 == 0) goto LAB_4a07df50;
              }
              FUN_4a14f21c(iVar7);
            }
LAB_4a07df50:
            FUN_4a0c6bf4(&local_120);
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar10);
        }
        puVar2 = local_104;
        local_10c = puVar1;
        iVar11 = FUN_4a0bcc84(&local_10c);
        if (iVar11 != 0) {
          iVar12 = 0;
          if (0 < (int)puVar2) {
            do {
              iVar12 = iVar12 + 1;
            } while (iVar12 < (int)puVar2);
            if (iVar11 == 0) goto LAB_4a07dfa4;
          }
          FUN_4a14f21c();
        }
LAB_4a07dfa4:
        FUN_4a0c6bf4(&local_10c);
      }
      local_f4 = FUN_4a1391d0(local_f0,0,auStack_94);
      piVar3 = (int *)0x0;
      if (local_88 != 0) {
        piVar3 = *(int **)(local_88 + 8);
      }
      local_f8 = *piVar3;
      if (local_88 != 0) {
        iVar11 = *(int *)(local_88 + 8);
      }
      else {
        iVar11 = 0;
      }
      iVar12 = *(int *)(local_f4 + 0x2c);
      if (*(int *)(local_f4 + 0x30) == 2) {
        FUN_4a16b934(&local_10c,iVar12);
        iVar6 = 0;
        if (0 < iVar10) {
          do {
            FUN_4a138e28(local_f4,iVar6,1,&local_10c);
            iVar7 = 0;
            if (0 < iVar12) {
              do {
                if (local_100 == (undefined *)0x0) {
                  iVar9 = 0;
                }
                else {
                  iVar9 = *(int *)(local_100 + 8);
                }
                uVar8 = FUN_4a17211c(*(undefined4 *)(iVar9 + iVar7 * 4),local_f8);
                uVar8 = FUN_4a171a94(uVar8,*(undefined4 *)(iVar11 + 4 + iVar7 * 4));
                if (local_bc == (int *)0x0) {
                  iVar9 = 0;
                }
                else {
                  iVar9 = local_bc[2];
                }
                *(undefined4 *)(iVar9 + iVar7 * 4) = uVar8;
                iVar7 = iVar7 + 1;
              } while (iVar7 < iVar12);
            }
            puVar5 = (undefined4 *)FUN_4a0c6bc0(&local_120);
            *puVar5 = local_30;
            puVar5[2] = local_c0;
            puVar5[3] = local_bc;
            if (local_bc != (int *)0x0) {
              (**(code **)(*local_bc + 0xc))();
            }
            *puVar5 = puVar1;
            FUN_4a0ad110(local_a0,iVar6 + iVar4,1,puVar5);
            puVar2 = local_118;
            local_120 = puVar1;
            iVar7 = FUN_4a0bcc84(&local_120);
            if (iVar7 != 0) {
              iVar9 = 0;
              if (0 < (int)puVar2) {
                do {
                  iVar9 = iVar9 + 1;
                } while (iVar9 < (int)puVar2);
                if (iVar7 == 0) goto LAB_4a07e110;
              }
              FUN_4a14f21c(iVar7);
            }
LAB_4a07e110:
            FUN_4a0c6bf4(&local_120);
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar10);
        }
        puVar2 = local_104;
        local_10c = puVar1;
        iVar10 = FUN_4a0bcc84(&local_10c);
        if (iVar10 != 0) {
          iVar11 = 0;
          if (0 < (int)puVar2) {
            do {
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)puVar2);
            if (iVar10 == 0) goto LAB_4a07e164;
          }
          FUN_4a14f21c();
        }
LAB_4a07e164:
        FUN_4a0c6bf4(&local_10c);
      }
      iVar10 = FUN_4a13b5bc(local_ec,0);
      if (*(int *)(iVar10 + 0x28) < 0) {
        iVar6 = *(int *)(iVar10 + 0x38);
        FUN_4a16be24(&local_104,iVar6);
        iVar12 = 0;
        iVar11 = 0;
        if (0 < iVar6) {
          do {
            if (*(int *)(iVar10 + 0x3c) == 0) {
              iVar7 = 0;
            }
            else {
              iVar7 = *(int *)(*(int *)(iVar10 + 0x3c) + 8);
            }
            if (local_f8 == 0) {
              iVar9 = 0;
            }
            else {
              iVar9 = *(int *)(local_f8 + 8);
            }
            *(uint *)(iVar9 + iVar11 * 4) = (uint)*(ushort *)(iVar7 + iVar11 * 2) + iVar4;
            iVar11 = iVar11 + 1;
          } while (iVar11 < iVar6);
        }
        iVar4 = *(int *)(iVar10 + 0x4c);
        if (0 < iVar4) {
          FUN_4a16be24(&local_118,iVar4);
          iVar11 = 0;
          if (0 < iVar4) {
            do {
              if (*(int *)(iVar10 + 0x50) == 0) {
                iVar6 = 0;
              }
              else {
                iVar6 = *(int *)(*(int *)(iVar10 + 0x50) + 8);
              }
              if (local_10c == (undefined *)0x0) {
                iVar7 = 0;
              }
              else {
                iVar7 = *(int *)(local_10c + 8);
              }
              *(uint *)(iVar7 + iVar11 * 4) = (uint)*(ushort *)(iVar6 + iVar11 * 2);
              iVar11 = iVar11 + 1;
            } while (iVar11 < iVar4);
          }
          uVar8 = thunk_FUN_4a161570(0x60);
          uVar8 = FUN_4a0ab840(uVar8,8,&local_118,&local_104);
          iVar4 = local_110;
          if (local_4c != 0) {
            iVar12 = *(int *)(local_4c + 8);
          }
          *(undefined4 *)(iVar12 + local_e8 * 4) = uVar8;
          local_118 = local_38;
          iVar10 = FUN_4a0bcc84(&local_118);
          if (iVar10 != 0) {
            iVar11 = 0;
            if (0 < iVar4) {
              do {
                iVar11 = iVar11 + 1;
              } while (iVar11 < iVar4);
              if (iVar10 == 0) goto LAB_4a07e474;
            }
            FUN_4a14f21c();
          }
LAB_4a07e474:
          FUN_4a0c6bf4(&local_118);
        }
        iVar4 = local_fc;
        local_104 = local_38;
        iVar10 = FUN_4a0bcc84(&local_104);
        if (iVar10 != 0) {
          iVar11 = 0;
          if (0 < iVar4) {
            do {
              iVar11 = iVar11 + 1;
            } while (iVar11 < iVar4);
joined_r0x4a07e4b8:
            if (iVar10 == 0) goto LAB_4a07e25c;
          }
LAB_4a07e4bc:
          FUN_4a14f21c();
        }
LAB_4a07e25c:
        FUN_4a0c6bf4(&local_104);
      }
      else {
        iVar11 = *(int *)(iVar10 + 0x4c);
        if (0 < iVar11) {
          FUN_4a16be24(&local_104,iVar11);
          iVar6 = 0;
          iVar12 = 0;
          if (0 < iVar11) {
            do {
              if (*(int *)(iVar10 + 0x50) == 0) {
                iVar7 = 0;
              }
              else {
                iVar7 = *(int *)(*(int *)(iVar10 + 0x50) + 8);
              }
              if (local_f8 == 0) {
                iVar9 = 0;
              }
              else {
                iVar9 = *(int *)(local_f8 + 8);
              }
              *(uint *)(iVar9 + iVar12 * 4) = (uint)*(ushort *)(iVar7 + iVar12 * 2);
              iVar12 = iVar12 + 1;
            } while (iVar12 < iVar11);
          }
          uVar8 = thunk_FUN_4a161570(0x60);
          uVar8 = FUN_4a0ab8cc(uVar8,8,&local_104,*(int *)(iVar10 + 0x28) + iVar4);
          iVar4 = local_fc;
          if (local_4c != 0) {
            iVar6 = *(int *)(local_4c + 8);
          }
          *(undefined4 *)(iVar6 + local_e8 * 4) = uVar8;
          local_104 = local_38;
          iVar10 = FUN_4a0bcc84(&local_104);
          if (iVar10 != 0) {
            iVar11 = 0;
            if (0 < iVar4) {
              do {
                iVar11 = iVar11 + 1;
              } while (iVar11 < iVar4);
              goto joined_r0x4a07e4b8;
            }
            goto LAB_4a07e4bc;
          }
          goto LAB_4a07e25c;
        }
      }
      uVar8 = FUN_4a13b4a0(local_ec,0);
      iVar4 = 0;
      if (local_60 != 0) {
        iVar4 = *(int *)(local_60 + 8);
      }
      *(undefined4 *)(iVar4 + local_e8 * 4) = uVar8;
      local_e8 = local_e8 + 1;
    } while (local_e8 < local_44);
  }
  iVar4 = local_28;
  if (local_28 == 0) {
    piVar3 = (int *)0x0;
    if (*(int *)(local_2c + 0xc) != 0) {
      piVar3 = *(int **)(*(int *)(local_2c + 0xc) + 8);
    }
    iVar4 = FUN_4a0b75a8(*(undefined4 *)(*piVar3 + 0x114));
  }
  uVar8 = thunk_FUN_4a161570(0x170);
  local_cc = FUN_4a0acd18(uVar8,local_98,local_58,auStack_6c,iVar4);
  puVar5 = (undefined4 *)FUN_4a0c6bc0(auStack_e4);
  local_3c = PTR_PTR_4a07e8e8;
  *puVar5 = PTR_PTR_4a07e8e8;
  puVar5[4] = 0;
  puVar5[2] = 10;
  puVar5[5] = 0;
  puVar5[3] = 10;
  iVar10 = thunk_FUN_4a161570(0x28);
  puVar5[5] = iVar10;
  if (iVar10 != 0) {
    iVar10 = 0;
    if (0 < (int)puVar5[4]) {
      do {
        iVar11 = iVar10 + 1;
        *(undefined4 *)(puVar5[5] + iVar10 * 4) = *(undefined4 *)(iVar10 * 4);
        iVar10 = iVar11;
      } while (iVar11 < (int)puVar5[4]);
    }
    thunk_FUN_4a161530(0);
  }
  iVar10 = puVar5[4];
  if ((int)puVar5[4] < (int)puVar5[3]) {
    do {
      iVar11 = iVar10 + 1;
      *(undefined4 *)(puVar5[5] + iVar10 * 4) = 0;
      iVar10 = iVar11;
    } while (iVar11 < (int)puVar5[3]);
  }
  FUN_4a02d8b0(iVar4,auStack_e4);
  local_e8 = 0;
  if (0 < local_44) {
    local_40 = local_d4 << 2;
    do {
      if (*(int *)(local_2c + 0xc) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(local_2c + 0xc) + 8);
      }
      local_ec = *(int *)(iVar4 + local_e8 * 4);
      if (local_74 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(local_74 + 8);
      }
      iVar10 = *(int *)(iVar4 + local_e8 * 4);
      iVar4 = FUN_4a13b5e4(local_ec);
      uVar8 = *(undefined4 *)(iVar4 + 0x28);
      FUN_4a16be24(&local_100,uVar8);
      FUN_4a16b934(&local_114,uVar8);
      puVar5 = (undefined4 *)FUN_4a0c6bc0(local_12c);
      *puVar5 = local_3c;
      puVar5[2] = 10;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      if (0 < local_d4) {
        puVar5[3] = local_d4;
        iVar4 = thunk_FUN_4a161570(local_40);
        puVar5[5] = iVar4;
        if (iVar4 != 0) {
          iVar4 = 0;
          if (0 < (int)puVar5[4]) {
            do {
              iVar11 = iVar4 + 1;
              *(undefined4 *)(puVar5[5] + iVar4 * 4) = *(undefined4 *)(iVar4 * 4);
              iVar4 = iVar11;
            } while (iVar11 < (int)puVar5[4]);
          }
          thunk_FUN_4a161530(0);
        }
        iVar4 = puVar5[4];
        if ((int)puVar5[4] < (int)puVar5[3]) {
          do {
            iVar11 = iVar4 + 1;
            *(undefined4 *)(puVar5[5] + iVar4 * 4) = 0;
            iVar4 = iVar11;
          } while (iVar11 < (int)puVar5[3]);
        }
      }
      FUN_4a02d8b0(*(undefined4 *)(local_ec + 0x114),local_12c);
      iVar4 = 0;
      if (0 < local_d4) {
        do {
          uVar8 = *(undefined4 *)(local_d0 + iVar4 * 4);
          iVar11 = FUN_4a137e54(local_ec,*(undefined4 *)(local_118 + iVar4 * 4),&local_100,
                                &local_114);
          if (0 < iVar11) {
            iVar12 = 0;
            do {
              if (local_108 == 0) {
                iVar6 = 0;
              }
              else {
                iVar6 = *(int *)(local_108 + 8);
              }
              FUN_4a17295c(*(undefined4 *)(iVar6 + iVar12 * 4),9);
              iVar6 = FUN_4a171e1c();
              if (iVar6 != 0) {
                if (local_f4 == 0) {
                  iVar7 = 0;
                }
                else {
                  iVar7 = *(int *)(local_f4 + 8);
                }
                FUN_4a0abc4c(local_cc,uVar8,iVar6,*(int *)(iVar7 + iVar12 * 4) + iVar10,1);
              }
              iVar12 = iVar12 + 1;
            } while (iVar12 < iVar11);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < local_d4);
      }
      local_12c[0] = local_3c;
      iVar4 = 0;
      if (0 < local_11c) {
        do {
          piVar3 = *(int **)(local_118 + iVar4 * 4);
          *(undefined4 *)(local_118 + iVar4 * 4) = 0;
          if ((piVar3 != (int *)0x0) && (iVar10 = (**(code **)(*piVar3 + 8))(piVar3), iVar10 != 0))
          {
            (**(code **)(*piVar3 + 4))(piVar3);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < local_11c);
      }
      local_11c = 0;
      thunk_FUN_4a161530(local_118);
      FUN_4a0c6bf4(local_12c);
      puVar2 = local_10c;
      local_114 = puVar1;
      iVar4 = FUN_4a0bcc84(&local_114);
      if (iVar4 != 0) {
        iVar10 = 0;
        if (0 < (int)puVar2) {
          do {
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)puVar2);
          if (iVar4 == 0) goto LAB_4a07e7d0;
        }
        FUN_4a14f21c();
      }
LAB_4a07e7d0:
      FUN_4a0c6bf4(&local_114);
      iVar4 = local_f8;
      local_100 = local_38;
      iVar10 = FUN_4a0bcc84(&local_100);
      if (iVar10 != 0) {
        iVar11 = 0;
        if (0 < iVar4) {
          do {
            iVar11 = iVar11 + 1;
          } while (iVar11 < iVar4);
          if (iVar10 == 0) goto LAB_4a07e81c;
        }
        FUN_4a14f21c();
      }
LAB_4a07e81c:
      FUN_4a0c6bf4(&local_100);
      local_e8 = local_e8 + 1;
    } while (local_e8 < local_44);
  }
  switchD_4a1193c4::default(s_mergeSkinnedMeshes_4a07e8ec);
  uVar8 = local_cc;
  FUN_4a16d7b4(auStack_e4);
  FUN_4a16ba04(auStack_c8);
  FUN_4a16ba04(auStack_b4);
  FUN_4a16ba04(auStack_94);
  FUN_4a16bef4(auStack_80);
  FUN_4a16a898(auStack_6c);
  local_58[0] = local_34;
  iVar4 = FUN_4a0bcc84(local_58);
  if (iVar4 != 0) {
    iVar10 = 0;
    if (0 < local_50) {
      do {
        iVar10 = iVar10 + 1;
      } while (iVar10 < local_50);
      if (iVar4 == 0) goto LAB_4a07e8bc;
    }
    FUN_4a14f21c();
  }
LAB_4a07e8bc:
  FUN_4a0c6bf4(local_58);
  return uVar8;
}



// Address: 4a07e900

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a07e900(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 == 0) {
    return;
  }
  while( true ) {
    iVar1 = FUN_4a165910(param_2);
    if (iVar1 != 0) {
      iVar3 = 0;
      iVar4 = 0;
      if (*(int *)(iVar1 + 0xdc) != 0) {
        iVar4 = *(int *)(*(int *)(iVar1 + 0xdc) + 0x10);
      }
      if (0 < iVar4) {
        do {
          FUN_4a07e900(param_1,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0xdc) + 0x14) + iVar3 * 4),
                       param_3,param_4);
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar4);
      }
    }
    iVar1 = FUN_4a165858(param_2);
    if (iVar1 == 0) {
      return;
    }
    iVar4 = FUN_4a13b5dc(iVar1);
    iVar3 = 0;
    if (0 < iVar4) {
      do {
        iVar2 = FUN_4a13b4a0(iVar1,iVar3);
        if (*(int *)(iVar2 + 0xc) == param_3) {
          FUN_4a0b3bc8(iVar1,iVar3,param_4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
    }
    iVar1 = FUN_4a1657f4(param_2);
    if (iVar1 == 0) break;
    param_2 = *(int *)(iVar1 + 0x114);
    if (param_2 == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x4a07e9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a07e9fc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a07e9fc(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar5 = 0;
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  if (iVar2 == 0) {
    FUN_4a07ea80(param_1);
  }
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 == 0) {
    iVar3 = 0;
    iVar2 = 0;
  }
  else {
    iVar3 = *(int *)(iVar2 + 8);
    iVar2 = *(int *)(iVar2 + 8);
  }
  uVar6 = *(undefined4 *)(iVar3 + param_4 * 4);
  if (iVar2 == 0) {
    FUN_4a07ea80(param_1);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  iVar5 = *(int *)(*(int *)(iVar5 + param_3 * 4) + 0xc);
  if (param_2 == 0) {
    return;
  }
  while( true ) {
    iVar2 = FUN_4a165910(param_2);
    if (iVar2 != 0) {
      iVar4 = 0;
      iVar3 = 0;
      if (*(int *)(iVar2 + 0xdc) != 0) {
        iVar3 = *(int *)(*(int *)(iVar2 + 0xdc) + 0x10);
      }
      if (0 < iVar3) {
        do {
          FUN_4a07e900(param_1,*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0xdc) + 0x14) + iVar4 * 4),
                       iVar5,uVar6);
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar3);
      }
    }
    iVar2 = FUN_4a165858(param_2);
    if (iVar2 == 0) break;
    iVar3 = FUN_4a13b5dc(iVar2);
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        iVar1 = FUN_4a13b4a0(iVar2,iVar4);
        if (*(int *)(iVar1 + 0xc) == iVar5) {
          FUN_4a0b3bc8(iVar2,iVar4,uVar6);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
    iVar2 = FUN_4a1657f4(param_2);
    if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a07e9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    param_2 = *(int *)(iVar2 + 0x114);
    if (param_2 == 0) {
      return;
    }
  }
  return;
}



// Address: 4a07ea80

void FUN_4a07ea80(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  undefined4 uVar15;
  int iVar16;
  int *piVar17;
  undefined *puStack_a8;
  undefined4 uStack_a4;
  undefined *apuStack_a0 [2];
  int iStack_98;
  int *piStack_94;
  int *piStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined *apuStack_68 [2];
  int iStack_60;
  undefined *apuStack_54 [2];
  int iStack_4c;
  undefined1 auStack_40 [20];
  undefined *puStack_2c;
  undefined *puStack_28;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    return;
  }
  iVar4 = FUN_4a0ff494();
  uStack_6c = *(undefined4 *)(iVar4 + 0x60);
  iVar4 = FUN_4a16a7c8(auStack_40,0x39);
  uVar15 = *(undefined4 *)(iVar4 + 8);
  piVar14 = *(int **)(iVar4 + 0xc);
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0xc))(piVar14);
  }
  (**(code **)(*(int *)(param_1 + 0x20) + 0x1c))((int *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x28) = uVar15;
  *(int **)(param_1 + 0x2c) = piVar14;
  FUN_4a16a898(auStack_40);
  iVar4 = FUN_4a0ff494();
  iVar16 = *(int *)(*(int *)(iVar4 + 0x51c) + 0x410);
  iVar4 = FUN_4a1684d4(apuStack_54,iVar16);
  uVar15 = *(undefined4 *)(iVar4 + 8);
  piVar14 = *(int **)(iVar4 + 0xc);
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0xc))(piVar14);
  }
  (**(code **)(*(int *)(param_1 + 0x34) + 0x1c))((int *)(param_1 + 0x34));
  *(undefined4 *)(param_1 + 0x3c) = uVar15;
  apuStack_54[0] = PTR_PTR_4a07fb00;
  *(int **)(param_1 + 0x40) = piVar14;
  iVar4 = FUN_4a0bcc84(apuStack_54);
  if (iVar4 != 0) {
    iVar13 = 0;
    if (0 < iStack_4c) {
      do {
        (*(code *)**(undefined4 **)(iVar4 + iVar13 * 0x14))();
        iVar13 = iVar13 + 1;
      } while (iVar13 < iStack_4c);
      if (iVar4 == 0) goto LAB_4a07ebc4;
    }
    FUN_4a14f21c(iVar4);
  }
LAB_4a07ebc4:
  FUN_4a0c6bf4(apuStack_54);
  piStack_90 = (int *)(param_1 + 0x48);
  piStack_94 = (int *)FUN_4a0c6bc0(apuStack_68);
  piStack_94[2] = 0;
  puStack_28 = PTR_PTR_4a07fb08;
  piStack_94[3] = 0;
  *piStack_94 = (int)puStack_28;
  puVar2 = PTR_PTR_4a07fb10;
  puVar1 = PTR_PTR_4a07fb04;
  puStack_2c = PTR_PTR_4a07fb0c;
  if (0 < iVar16) {
    iVar4 = FUN_4a15e080(iVar16 * 0x14);
    if (iVar4 == 0) {
      iVar4 = FUN_4a1669a8();
    }
    iVar13 = 0;
    do {
      puVar5 = (undefined4 *)FUN_4a0c6bc0(&puStack_a8);
      puVar5[2] = 0;
      puVar5[3] = 0;
      *puVar5 = puVar2;
      puVar6 = (undefined4 *)FUN_4a0c6bc0(iVar4 + iVar13 * 0x14);
      *puVar6 = puVar1;
      puVar6[2] = puVar5[2];
      piVar14 = (int *)puVar5[3];
      puVar6[3] = piVar14;
      if (piVar14 != (int *)0x0) {
        (**(code **)(*piVar14 + 0xc))();
      }
      puVar3 = apuStack_a0[0];
      *puVar6 = puVar2;
      puStack_a8 = puVar2;
      iVar7 = FUN_4a0bcc84(&puStack_a8);
      if (iVar7 != 0) {
        iVar8 = 0;
        if (0 < (int)puVar3) {
          do {
            iVar8 = iVar8 + 1;
          } while (iVar8 < (int)puVar3);
          if (iVar7 == 0) goto LAB_4a07ecd4;
        }
        FUN_4a14f21c(iVar7);
      }
LAB_4a07ecd4:
      FUN_4a0c6bf4(&puStack_a8);
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar16);
    thunk_FUN_4a161570(0x18);
    puVar5 = (undefined4 *)FUN_4a0c0628();
    puVar5[3] = 0x14;
    puVar5[4] = iVar16;
    *puVar5 = puStack_2c;
    puVar5[2] = iVar4;
    *(undefined1 *)(puVar5 + 5) = 1;
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)(puStack_2c + 0xc))(puVar5);
    }
    (**(code **)(*piStack_94 + 0x1c))(piStack_94);
    piStack_94[3] = (int)puVar5;
    piStack_94[2] = iVar16;
  }
  iVar4 = piStack_94[2];
  piVar14 = (int *)piStack_94[3];
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0xc))(piVar14);
  }
  (**(code **)(*piStack_90 + 0x1c))(piStack_90);
  piStack_90[3] = (int)piVar14;
  piStack_90[2] = iVar4;
  apuStack_68[0] = puStack_28;
  iVar4 = FUN_4a0bcc84(apuStack_68);
  if (iVar4 != 0) {
    iVar13 = 0;
    if (0 < iStack_60) {
      do {
        (*(code *)**(undefined4 **)(iVar4 + iVar13 * 0x14))();
        iVar13 = iVar13 + 1;
      } while (iVar13 < iStack_60);
      if (iVar4 == 0) goto LAB_4a07ee00;
    }
    FUN_4a14f21c(iVar4);
  }
LAB_4a07ee00:
  FUN_4a0c6bf4(apuStack_68);
  iVar4 = 0;
  if (0 < iVar16) {
    do {
      iVar13 = 0;
      if (*(int *)(param_1 + 0x54) != 0) {
        iVar13 = *(int *)(*(int *)(param_1 + 0x54) + 8);
      }
      piVar17 = (int *)(iVar13 + iVar4 * 0x14);
      piVar14 = (int *)FUN_4a0c6bc0(apuStack_a0);
      piVar14[2] = 0;
      piVar14[3] = 0;
      *piVar14 = (int)puVar2;
      iVar13 = FUN_4a15e080(0x2c);
      if (iVar13 == 0) {
        iVar13 = FUN_4a1669a8();
      }
      iVar7 = 0;
      do {
        uStack_a4 = 0;
        *(undefined4 *)(iVar13 + iVar7 * 4) = 0;
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0xb);
      thunk_FUN_4a161570(0x18,0xb);
      piVar9 = (int *)FUN_4a0c0628();
      piVar9[3] = 4;
      piVar9[4] = 0xb;
      *piVar9 = (int)puStack_2c;
      piVar9[2] = iVar13;
      *(undefined1 *)(piVar9 + 5) = 1;
      if (piVar9 != (int *)0x0) {
        (**(code **)(puStack_2c + 0xc))(piVar9);
      }
      (**(code **)(*piVar14 + 0x1c))(piVar14);
      piVar14[2] = 0xb;
      piVar14[3] = (int)piVar9;
      if (piVar9 != (int *)0x0) {
        (**(code **)(*piVar9 + 0xc))(piVar9);
      }
      (**(code **)(*piVar17 + 0x1c))(piVar17);
      iVar13 = iStack_98;
      piVar17[2] = 0xb;
      piVar17[3] = (int)piVar9;
      apuStack_a0[0] = puVar2;
      iVar7 = FUN_4a0bcc84(apuStack_a0);
      if (iVar7 != 0) {
        iVar8 = 0;
        if (0 < iVar13) {
          do {
            iVar8 = iVar8 + 1;
          } while (iVar8 < iVar13);
          if (iVar7 == 0) goto LAB_4a07ef64;
        }
        FUN_4a14f21c();
      }
LAB_4a07ef64:
      FUN_4a0c6bf4(apuStack_a0);
      iVar7 = 0;
      iVar13 = 1;
      do {
        iVar13 = iVar13 + 1;
        if (*(int *)(param_1 + 0x54) == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(*(int *)(param_1 + 0x54) + 8);
        }
        iVar8 = *(int *)(iVar8 + iVar4 * 0x14 + 0xc);
        if (iVar8 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(iVar8 + 8);
        }
        *(undefined4 *)(iVar8 + iVar7 * 4) = 0;
        iVar7 = iVar7 + 1;
      } while (iVar13 < 0xc);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar16);
  }
  thunk_FUN_4a161570(0x40);
  uStack_70 = FUN_4a0b020c();
  FUN_4a0b01ec(uStack_70,1);
  FUN_4a0b0204(uStack_70,1);
  FUN_4a0b01f4(uStack_70,1);
  FUN_4a0b01fc(uStack_70,1);
  FUN_4a0b01c8(uStack_70,0);
  FUN_4a0b0180(uStack_70,0x44);
  thunk_FUN_4a161570(0x40);
  uStack_74 = FUN_4a0b020c();
  FUN_4a0b01ec(uStack_74,1);
  FUN_4a0b0204(uStack_74,1);
  FUN_4a0b01f4(uStack_74,1);
  FUN_4a0b01fc(uStack_74,1);
  FUN_4a0b01c8(uStack_74,0);
  FUN_4a0b0180(uStack_74,0x40);
  thunk_FUN_4a161570(0x40);
  uVar15 = FUN_4a0b020c();
  FUN_4a0b01ec(uVar15,1);
  FUN_4a0b0204(uVar15,0);
  FUN_4a0b01f4(uVar15,1);
  FUN_4a0b01fc(uVar15,1);
  FUN_4a0b01c8(uVar15,0);
  FUN_4a0b0180(uVar15,0x40);
  thunk_FUN_4a161570(0x40);
  uStack_78 = FUN_4a0b020c();
  FUN_4a0b01ec(uStack_78,1);
  FUN_4a0b0204(uStack_78,1);
  FUN_4a0b01f4(uStack_78,1);
  FUN_4a0b01fc(uStack_78,1);
  FUN_4a0b01c8(uStack_78,0x3f400000);
  FUN_4a0b0180(uStack_78,0x40);
  thunk_FUN_4a161570(0x40);
  uStack_7c = FUN_4a0b020c();
  FUN_4a0b01ec(uStack_7c,1);
  FUN_4a0b0204(uStack_7c,0);
  FUN_4a0b01f4(uStack_7c,1);
  FUN_4a0b01fc(uStack_7c,1);
  FUN_4a0b01c8(uStack_7c,0);
  FUN_4a0b0180(uStack_7c,0x41);
  thunk_FUN_4a161570(0x40);
  uVar10 = FUN_4a0b020c();
  FUN_4a0b01ec(uVar10,1);
  FUN_4a0b0204(uVar10,0);
  FUN_4a0b01f4(uVar10,0);
  FUN_4a0b01fc(uVar10,1);
  FUN_4a0b01c8(uVar10,0);
  FUN_4a0b0180(uVar10,0x42);
  thunk_FUN_4a161570(0x40);
  uStack_80 = FUN_4a0b020c();
  FUN_4a0b01ec(uStack_80,1);
  FUN_4a0b0204(uStack_80,1);
  FUN_4a0b01f4(uStack_80,0);
  FUN_4a0b01fc(uStack_80,0);
  FUN_4a0b01c8(uStack_80,0);
  FUN_4a0b0180(uStack_80,0x44);
  thunk_FUN_4a161570(0x40);
  uStack_84 = FUN_4a0b020c();
  FUN_4a0b01ec(uStack_84,0);
  FUN_4a0b0204(uStack_84,0);
  FUN_4a0b01f4(uStack_84,1);
  FUN_4a0b01fc(uStack_84,1);
  FUN_4a0b01c8(uStack_84,0);
  FUN_4a0b0180(uStack_84,0x44);
  thunk_FUN_4a161570(0x40);
  uVar11 = FUN_4a0b020c();
  FUN_4a0b01ec(uVar11,0);
  FUN_4a0b0204(uVar11,0);
  FUN_4a0b01f4(uVar11,0);
  FUN_4a0b01fc(uVar11,1);
  FUN_4a0b01c8(uVar11,0);
  FUN_4a0b0180(uVar11,0x40);
  thunk_FUN_4a161570(0x38);
  uStack_88 = FUN_4a0abadc();
  FUN_4a0aba64(uStack_88,0xa1);
  thunk_FUN_4a161570(0x38);
  uStack_8c = FUN_4a0abadc();
  FUN_4a0aba64(uStack_8c,0xa2);
  thunk_FUN_4a161570(0x5c);
  piVar14 = (int *)FUN_4a0a7fc8();
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0xc))(piVar14);
  }
  FUN_4a0afe0c(piVar14,uStack_70);
  FUN_4a0afe78(piVar14,0);
  iVar4 = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar4 + 0xc) = piVar14;
  piVar14 = (int *)FUN_4a0b75a8(piVar14);
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0xc))(piVar14);
  }
  iVar4 = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar4 + 0x10) = piVar14;
  thunk_FUN_4a161570(0x5c);
  piVar14 = (int *)FUN_4a0a7fc8();
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0xc))(piVar14);
  }
  FUN_4a0afe0c(piVar14,uStack_74);
  FUN_4a0afda0(piVar14,uStack_8c);
  FUN_4a0afe78(piVar14,7);
  iVar4 = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar4 + 0x14) = piVar14;
  thunk_FUN_4a161570(0x5c);
  piVar14 = (int *)FUN_4a0a7fc8();
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0xc))(piVar14);
  }
  FUN_4a0afe0c(piVar14,uStack_78);
  FUN_4a0afda0(piVar14,uStack_8c);
  FUN_4a0afe78(piVar14,7);
  iVar4 = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar4 + 0x18) = piVar14;
  thunk_FUN_4a161570(0x5c);
  piVar14 = (int *)FUN_4a0a7fc8();
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0xc))(piVar14);
  }
  FUN_4a0afe0c(piVar14,uStack_7c);
  FUN_4a0afda0(piVar14,uStack_8c);
  FUN_4a0afe78(piVar14,9);
  iVar4 = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar4 + 0x1c) = piVar14;
  thunk_FUN_4a161570(0x5c);
  piVar14 = (int *)FUN_4a0a7fc8();
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0xc))(piVar14);
  }
  FUN_4a0afe0c(piVar14,uVar10);
  FUN_4a0afda0(piVar14,uStack_8c);
  FUN_4a0afe78(piVar14,2);
  iVar4 = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar4 + 0x20) = piVar14;
  piVar14 = (int *)FUN_4a0986e4(uStack_6c,0x11a);
  FUN_4a0b7a54(piVar14,0xd2,0xd1);
  thunk_FUN_4a161570(0x5c);
  piVar17 = (int *)FUN_4a0a7fc8();
  if (piVar17 != (int *)0x0) {
    (**(code **)(*piVar17 + 0xc))(piVar17);
  }
  FUN_4a0a7c84(piVar17,0,piVar14);
  FUN_4a0afe0c(piVar17,uVar15);
  FUN_4a0afe78(piVar17,2);
  iVar4 = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar4 + 100) = piVar17;
  piVar17 = (int *)FUN_4a0b75a8(piVar17);
  if (piVar17 != (int *)0x0) {
    (**(code **)(*piVar17 + 0xc))(piVar17);
  }
  FUN_4a0afda0(piVar17,uStack_8c);
  FUN_4a0afe78(piVar17,3);
  iVar4 = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar4 + 0x68) = piVar17;
  if ((piVar14 != (int *)0x0) && (iVar4 = (**(code **)(*piVar14 + 8))(piVar14), iVar4 != 0)) {
    (**(code **)(*piVar14 + 4))(piVar14);
  }
  thunk_FUN_4a161570(0x5c);
  piVar14 = (int *)FUN_4a0a7fc8();
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0xc))(piVar14);
  }
  FUN_4a0afe0c(piVar14,uStack_70);
  FUN_4a0afe78(piVar14,0);
  iVar4 = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar4 + 0xe0) = piVar14;
  uVar15 = FUN_4a0b75a8(piVar14);
  iVar4 = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(undefined4 *)(iVar4 + 0xdc) = uVar15;
  iVar4 = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  if (*(int **)(iVar4 + 0xdc) != (int *)0x0) {
    (**(code **)(**(int **)(iVar4 + 0xdc) + 0xc))();
  }
  thunk_FUN_4a161570(0x3c);
  piVar14 = (int *)FUN_4a0b396c();
  FUN_4a0b3958(piVar14,DAT_4a07fb14);
  FUN_4a0b3960(piVar14,*(undefined4 *)PTR_DAT_4a07fb1c,*(undefined4 *)PTR_DAT_4a07fb18);
  *(int **)(param_1 + 0x84) = piVar14;
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0xc))();
  }
  thunk_FUN_4a161570(0x5c);
  piVar17 = (int *)FUN_4a0a7fc8();
  if (piVar17 != (int *)0x0) {
    (**(code **)(*piVar17 + 0xc))(piVar17);
  }
  FUN_4a0afe0c(piVar17,uStack_70);
  FUN_4a0a7f5c(piVar17,piVar14);
  iVar4 = 0;
  piVar9 = (int *)0x0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    piVar9 = *(int **)(*(int *)(param_1 + 0x2c) + 8);
  }
  *piVar9 = (int)piVar17;
  piVar17 = (int *)FUN_4a0b75a8(piVar17);
  if (piVar17 != (int *)0x0) {
    (**(code **)(*piVar17 + 0xc))(piVar17);
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar13 + 4) = piVar17;
  piVar17 = (int *)FUN_4a0b75a8(piVar17);
  if (piVar17 != (int *)0x0) {
    (**(code **)(*piVar17 + 0xc))(piVar17);
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar13 + 0xb4) = piVar17;
  piVar17 = (int *)FUN_4a0b75a8(piVar17);
  if (piVar17 != (int *)0x0) {
    (**(code **)(*piVar17 + 0xc))(piVar17);
  }
  FUN_4a0afe0c(piVar17,uStack_74);
  FUN_4a0afe78(piVar17,4);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar13 + 8) = piVar17;
  piVar17 = (int *)FUN_4a0b75a8(piVar17);
  if (piVar17 != (int *)0x0) {
    (**(code **)(*piVar17 + 0xc))(piVar17);
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar13 + 0xac) = piVar17;
  piVar17 = (int *)FUN_4a0b75a8(piVar17);
  if (piVar17 != (int *)0x0) {
    (**(code **)(*piVar17 + 0xc))(piVar17);
  }
  FUN_4a0afe78(piVar17,1);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar13 + 0xb0) = piVar17;
  thunk_FUN_4a161570(0x5c);
  piVar17 = (int *)FUN_4a0a7fc8();
  if (piVar17 != (int *)0x0) {
    (**(code **)(*piVar17 + 0xc))(piVar17);
  }
  FUN_4a0afe0c(piVar17,uStack_7c);
  FUN_4a0afda0(piVar17,uStack_8c);
  FUN_4a0afe78(piVar17,9);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar13 + 0xb8) = piVar17;
  thunk_FUN_4a161570(0x5c);
  piVar17 = (int *)FUN_4a0a7fc8();
  if (piVar17 != (int *)0x0) {
    (**(code **)(*piVar17 + 0xc))(piVar17);
  }
  FUN_4a0afe0c(piVar17,uStack_78);
  FUN_4a0afda0(piVar17,uStack_8c);
  FUN_4a0afe78(piVar17,9);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar13 + 0xbc) = piVar17;
  thunk_FUN_4a161570(0x5c);
  piVar17 = (int *)FUN_4a0a7fc8();
  if (piVar17 != (int *)0x0) {
    (**(code **)(*piVar17 + 0xc))(piVar17);
  }
  FUN_4a0a7f5c(piVar17,piVar14);
  FUN_4a0afe0c(piVar17,uStack_70);
  FUN_4a0afe78(piVar17,0);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar13 + 0x2c) = piVar17;
  thunk_FUN_4a161570(0x5c);
  piVar17 = (int *)FUN_4a0a7fc8();
  if (piVar17 != (int *)0x0) {
    (**(code **)(*piVar17 + 0xc))(piVar17);
  }
  FUN_4a0a7f5c(piVar17,piVar14);
  FUN_4a0afe0c(piVar17,uStack_74);
  FUN_4a0afda0(piVar17,uStack_8c);
  FUN_4a0afe78(piVar17,7);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar13 + 0x30) = piVar17;
  thunk_FUN_4a161570(0x5c);
  piVar17 = (int *)FUN_4a0a7fc8();
  if (piVar17 != (int *)0x0) {
    (**(code **)(*piVar17 + 0xc))(piVar17);
  }
  FUN_4a0afe0c(piVar17,uStack_7c);
  FUN_4a0afda0(piVar17,uStack_8c);
  FUN_4a0afe78(piVar17,9);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar13 + 0x34) = piVar17;
  thunk_FUN_4a161570(0x5c);
  piVar17 = (int *)FUN_4a0a7fc8();
  if (piVar17 != (int *)0x0) {
    (**(code **)(*piVar17 + 0xc))(piVar17);
  }
  FUN_4a0a7f5c(piVar17,piVar14);
  FUN_4a0afe0c(piVar17,uStack_78);
  FUN_4a0afda0(piVar17,uStack_8c);
  FUN_4a0afe78(piVar17,7);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar13 + 0x38) = piVar17;
  thunk_FUN_4a161570(0x5c);
  piVar17 = (int *)FUN_4a0a7fc8();
  if (piVar17 != (int *)0x0) {
    (**(code **)(*piVar17 + 0xc))(piVar17);
  }
  FUN_4a0a7f5c(piVar17,piVar14);
  FUN_4a0afe0c(piVar17,uStack_74);
  FUN_4a0afda0(piVar17,uStack_8c);
  FUN_4a0afe78(piVar17,7);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar13 + 0x3c) = piVar17;
  thunk_FUN_4a161570(0x5c);
  piVar17 = (int *)FUN_4a0a7fc8();
  if (piVar17 != (int *)0x0) {
    (**(code **)(*piVar17 + 0xc))(piVar17);
  }
  FUN_4a0afe0c(piVar17,uStack_7c);
  FUN_4a0afda0(piVar17,uStack_8c);
  FUN_4a0afe78(piVar17,9);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar13 + 0xa8) = piVar17;
  thunk_FUN_4a161570(0x5c);
  piVar17 = (int *)FUN_4a0a7fc8();
  if (piVar17 != (int *)0x0) {
    (**(code **)(*piVar17 + 0xc))(piVar17);
  }
  FUN_4a0afe0c(piVar17,uStack_7c);
  FUN_4a0afda0(piVar17,uStack_8c);
  FUN_4a0afe78(piVar17,9);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar13 + 0xd0) = piVar17;
  thunk_FUN_4a161570(0x5c);
  piVar17 = (int *)FUN_4a0a7fc8();
  if (piVar17 != (int *)0x0) {
    (**(code **)(*piVar17 + 0xc))(piVar17);
  }
  FUN_4a0a7f5c(piVar17,piVar14);
  FUN_4a0afe0c(piVar17,uStack_70);
  FUN_4a0afe78(piVar17,0);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar13 + 0xd4) = piVar17;
  thunk_FUN_4a161570(0x5c);
  piVar17 = (int *)FUN_4a0a7fc8();
  if (piVar17 != (int *)0x0) {
    (**(code **)(*piVar17 + 0xc))(piVar17);
  }
  FUN_4a0a7f5c(piVar17,piVar14);
  FUN_4a0afe0c(piVar17,uStack_74);
  FUN_4a0afda0(piVar17,uStack_8c);
  FUN_4a0afe78(piVar17,8);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar13 + 0xd8) = piVar17;
  thunk_FUN_4a161570(0x5c);
  piVar17 = (int *)FUN_4a0a7fc8();
  if (piVar17 != (int *)0x0) {
    (**(code **)(*piVar17 + 0xc))(piVar17);
  }
  FUN_4a0a7f5c(piVar17,piVar14);
  FUN_4a0afe0c(piVar17,uStack_70);
  FUN_4a0afe78(piVar17,0);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar13 + 0x40) = piVar17;
  thunk_FUN_4a161570(0x5c);
  piVar17 = (int *)FUN_4a0a7fc8();
  if (piVar17 != (int *)0x0) {
    (**(code **)(*piVar17 + 0xc))(piVar17);
  }
  FUN_4a0a7f5c(piVar17,piVar14);
  FUN_4a0afe0c(piVar17,uStack_74);
  FUN_4a0afda0(piVar17,uStack_8c);
  FUN_4a0afe78(piVar17,7);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar13 + 0x44) = piVar17;
  thunk_FUN_4a161570(0x5c);
  piVar17 = (int *)FUN_4a0a7fc8();
  if (piVar17 != (int *)0x0) {
    (**(code **)(*piVar17 + 0xc))(piVar17);
  }
  FUN_4a0a7f5c(piVar17,piVar14);
  FUN_4a0afe0c(piVar17,uStack_78);
  FUN_4a0afda0(piVar17,uStack_8c);
  FUN_4a0afe78(piVar17,7);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar13 + 0x48) = piVar17;
  thunk_FUN_4a161570(0x5c);
  piVar17 = (int *)FUN_4a0a7fc8();
  if (piVar17 != (int *)0x0) {
    (**(code **)(*piVar17 + 0xc))(piVar17);
  }
  FUN_4a0a7f5c(piVar17,piVar14);
  FUN_4a0afe0c(piVar17,uStack_7c);
  FUN_4a0afda0(piVar17,uStack_8c);
  FUN_4a0afe78(piVar17,9);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar13 + 0x4c) = piVar17;
  thunk_FUN_4a161570(0x5c);
  piVar17 = (int *)FUN_4a0a7fc8();
  if (piVar17 != (int *)0x0) {
    (**(code **)(*piVar17 + 0xc))(piVar17);
  }
  FUN_4a0a7f5c(piVar17,piVar14);
  FUN_4a0afe0c(piVar17,uStack_70);
  FUN_4a0afe78(piVar17,0xfffffffc);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar13 + 0x50) = piVar17;
  thunk_FUN_4a161570(0x5c);
  piVar17 = (int *)FUN_4a0a7fc8();
  if (piVar17 != (int *)0x0) {
    (**(code **)(*piVar17 + 0xc))(piVar17);
  }
  FUN_4a0a7f5c(piVar17,piVar14);
  FUN_4a0afe0c(piVar17,uVar11);
  FUN_4a0afda0(piVar17,uStack_8c);
  FUN_4a0afe78(piVar17,0xfffffffd);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar13 + 0x54) = piVar17;
  thunk_FUN_4a161570(0x5c);
  piVar17 = (int *)FUN_4a0a7fc8();
  if (piVar17 != (int *)0x0) {
    (**(code **)(*piVar17 + 0xc))(piVar17);
  }
  FUN_4a0a7f5c(piVar17,piVar14);
  FUN_4a0afe0c(piVar17,uVar11);
  FUN_4a0afda0(piVar17,uStack_8c);
  FUN_4a0afe78(piVar17,0xfffffffe);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar13 + 0x58) = piVar17;
  thunk_FUN_4a161570(0x5c);
  piVar17 = (int *)FUN_4a0a7fc8();
  if (piVar17 != (int *)0x0) {
    (**(code **)(*piVar17 + 0xc))(piVar17);
  }
  FUN_4a0a7f5c(piVar17,piVar14);
  FUN_4a0afe0c(piVar17,uVar11);
  FUN_4a0afda0(piVar17,uStack_8c);
  FUN_4a0afe78(piVar17,0xffffffff);
  iVar13 = 0;
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar7 + 0x5c) = piVar17;
  puVar1 = PTR_PTR_4a080f94;
  if (0 < iVar16) {
    do {
      piVar14 = (int *)FUN_4a0c6bc0(apuStack_a0);
      piVar14[2] = 0;
      piVar14[3] = 0;
      *piVar14 = (int)puVar1;
      iVar7 = FUN_4a15e080(0x50);
      if (iVar7 == 0) {
        iVar7 = FUN_4a1669a8();
      }
      iVar8 = 0;
      do {
        uStack_a4 = 0;
        *(undefined4 *)(iVar7 + iVar8 * 4) = 0;
        iVar8 = iVar8 + 1;
      } while (iVar8 < 0x14);
      thunk_FUN_4a161570(0x18);
      puVar5 = (undefined4 *)FUN_4a0c0628();
      puVar5[3] = 4;
      puVar5[4] = 0x14;
      *puVar5 = puStack_2c;
      puVar5[2] = iVar7;
      *(undefined1 *)(puVar5 + 5) = 1;
      if (puVar5 != (undefined4 *)0x0) {
        (**(code **)(puStack_2c + 0xc))(puVar5);
      }
      (**(code **)(*piVar14 + 0x1c))(piVar14);
      piVar17 = piStack_94;
      iVar7 = iStack_98;
      piVar14[2] = 0x14;
      piVar14[3] = (int)puVar5;
      if (*(int *)(param_1 + 0x40) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(*(int *)(param_1 + 0x40) + 8);
      }
      piVar14 = (int *)(iVar8 + iVar13 * 0x14);
      if (piStack_94 != (int *)0x0) {
        (**(code **)(*piStack_94 + 0xc))(piStack_94);
      }
      (**(code **)(*piVar14 + 0x1c))(piVar14);
      piVar14[2] = iVar7;
      piVar14[3] = (int)piVar17;
      thunk_FUN_4a161570(0x5c);
      piVar14 = (int *)FUN_4a0a7fc8();
      if (piVar14 != (int *)0x0) {
        (**(code **)(*piVar14 + 0xc))(piVar14);
      }
      FUN_4a0afe0c(piVar14,uStack_70);
      FUN_4a0afe78(piVar14,0);
      iVar7 = 0;
      if (piStack_94 == (int *)0x0) {
        piVar17 = (int *)0x0;
      }
      else {
        piVar17 = (int *)piStack_94[2];
      }
      *piVar17 = (int)piVar14;
      piVar14 = (int *)FUN_4a0b75a8(piVar14);
      if (piVar14 != (int *)0x0) {
        (**(code **)(*piVar14 + 0xc))(piVar14);
      }
      FUN_4a0afda0(piVar14,uStack_88);
      if (piStack_94 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = piStack_94[2];
      }
      *(int **)(iVar8 + 0x28) = piVar14;
      thunk_FUN_4a161570(0x5c);
      piVar14 = (int *)FUN_4a0a7fc8();
      if (piVar14 != (int *)0x0) {
        (**(code **)(*piVar14 + 0xc))(piVar14);
      }
      FUN_4a0afe0c(piVar14,uStack_78);
      FUN_4a0afe78(piVar14,7);
      if (piStack_94 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = piStack_94[2];
      }
      *(int **)(iVar8 + 4) = piVar14;
      piVar14 = (int *)FUN_4a0b75a8(piVar14);
      if (piVar14 != (int *)0x0) {
        (**(code **)(*piVar14 + 0xc))(piVar14);
      }
      FUN_4a0afda0(piVar14,uStack_88);
      if (piStack_94 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = piStack_94[2];
      }
      *(int **)(iVar8 + 0x2c) = piVar14;
      thunk_FUN_4a161570(0x5c);
      piVar14 = (int *)FUN_4a0a7fc8();
      if (piVar14 != (int *)0x0) {
        (**(code **)(*piVar14 + 0xc))(piVar14);
      }
      FUN_4a0afe0c(piVar14,uStack_70);
      FUN_4a0afe78(piVar14,0);
      if (piStack_94 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = piStack_94[2];
      }
      *(int **)(iVar8 + 8) = piVar14;
      piVar14 = (int *)FUN_4a0b75a8(piVar14);
      if (piVar14 != (int *)0x0) {
        (**(code **)(*piVar14 + 0xc))(piVar14);
      }
      FUN_4a0afda0(piVar14,uStack_88);
      if (piStack_94 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = piStack_94[2];
      }
      *(int **)(iVar8 + 0x30) = piVar14;
      if (piStack_94 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = piStack_94[2];
      }
      uVar15 = FUN_4a0b75a8(*(undefined4 *)(iVar8 + 8));
      if (piStack_94 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = piStack_94[2];
      }
      *(undefined4 *)(iVar8 + 0xc) = uVar15;
      if (piStack_94 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = piStack_94[2];
      }
      if (*(int **)(iVar8 + 0xc) != (int *)0x0) {
        (**(code **)(**(int **)(iVar8 + 0xc) + 0xc))();
      }
      if (piStack_94 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = piStack_94[2];
      }
      *(undefined4 *)(*(int *)(iVar8 + 0xc) + 0xc) = 0x31;
      if (piStack_94 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = piStack_94[2];
      }
      uVar15 = FUN_4a0b75a8(*(undefined4 *)(iVar8 + 0x30));
      if (piStack_94 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = piStack_94[2];
      }
      *(undefined4 *)(iVar8 + 0x34) = uVar15;
      if (piStack_94 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = piStack_94[2];
      }
      if (*(int **)(iVar8 + 0x34) != (int *)0x0) {
        (**(code **)(**(int **)(iVar8 + 0x34) + 0xc))();
      }
      thunk_FUN_4a161570(0x5c);
      piVar14 = (int *)FUN_4a0a7fc8();
      if (piVar14 != (int *)0x0) {
        (**(code **)(*piVar14 + 0xc))(piVar14);
      }
      FUN_4a0afe0c(piVar14,uStack_74);
      FUN_4a0afda0(piVar14,uStack_8c);
      FUN_4a0afe78(piVar14,5);
      if (piStack_94 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = piStack_94[2];
      }
      *(int **)(iVar8 + 0x10) = piVar14;
      piVar14 = (int *)FUN_4a0b75a8(piVar14);
      if (piVar14 != (int *)0x0) {
        (**(code **)(*piVar14 + 0xc))(piVar14);
      }
      FUN_4a0afe78(piVar14,3);
      if (piStack_94 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = piStack_94[2];
      }
      *(int **)(iVar8 + 0x38) = piVar14;
      thunk_FUN_4a161570(0x5c);
      piVar14 = (int *)FUN_4a0a7fc8();
      if (piVar14 != (int *)0x0) {
        (**(code **)(*piVar14 + 0xc))(piVar14);
      }
      FUN_4a0afe0c(piVar14,uStack_78);
      FUN_4a0afe78(piVar14,5);
      FUN_4a0afda0(piVar14,uStack_8c);
      if (piStack_94 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = piStack_94[2];
      }
      *(int **)(iVar8 + 0x14) = piVar14;
      piVar14 = (int *)FUN_4a0b75a8(piVar14);
      if (piVar14 != (int *)0x0) {
        (**(code **)(*piVar14 + 0xc))(piVar14);
      }
      FUN_4a0afda0(piVar14,uStack_8c);
      FUN_4a0afe78(piVar14,3);
      if (piStack_94 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = piStack_94[2];
      }
      *(int **)(iVar8 + 0x3c) = piVar14;
      thunk_FUN_4a161570(0x5c);
      piVar14 = (int *)FUN_4a0a7fc8();
      if (piVar14 != (int *)0x0) {
        (**(code **)(*piVar14 + 0xc))(piVar14);
      }
      FUN_4a0afe0c(piVar14,uStack_70);
      FUN_4a0afe78(piVar14,0);
      if (piStack_94 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = piStack_94[2];
      }
      *(int **)(iVar8 + 0x18) = piVar14;
      piVar14 = (int *)FUN_4a0b75a8(piVar14);
      if (piVar14 != (int *)0x0) {
        (**(code **)(*piVar14 + 0xc))(piVar14);
      }
      FUN_4a0afda0(piVar14,uStack_88);
      if (piStack_94 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = piStack_94[2];
      }
      *(int **)(iVar8 + 0x40) = piVar14;
      thunk_FUN_4a161570(0x5c);
      piVar14 = (int *)FUN_4a0a7fc8();
      if (piVar14 != (int *)0x0) {
        (**(code **)(*piVar14 + 0xc))(piVar14);
      }
      FUN_4a0afe0c(piVar14,uStack_70);
      FUN_4a0afe78(piVar14,0);
      if (piStack_94 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = piStack_94[2];
      }
      *(int **)(iVar8 + 0x1c) = piVar14;
      FUN_4a0b75a8(piVar14);
      piVar14 = (int *)FUN_4a165794();
      if (piVar14 != (int *)0x0) {
        (**(code **)(*piVar14 + 0xc))(piVar14);
      }
      FUN_4a0afda0(piVar14,uStack_88);
      if (piStack_94 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = piStack_94[2];
      }
      *(int **)(iVar8 + 0x44) = piVar14;
      thunk_FUN_4a161570(0x5c);
      piVar14 = (int *)FUN_4a0a7fc8();
      if (piVar14 != (int *)0x0) {
        (**(code **)(*piVar14 + 0xc))(piVar14);
      }
      FUN_4a0afe0c(piVar14,uStack_70);
      FUN_4a0afe78(piVar14,0);
      if (piStack_94 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = piStack_94[2];
      }
      *(int **)(iVar8 + 0x20) = piVar14;
      FUN_4a0b75a8(piVar14);
      piVar14 = (int *)FUN_4a165794();
      if (piVar14 != (int *)0x0) {
        (**(code **)(*piVar14 + 0xc))(piVar14);
      }
      FUN_4a0afda0(piVar14,uStack_88);
      if (piStack_94 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = piStack_94[2];
      }
      *(int **)(iVar8 + 0x48) = piVar14;
      thunk_FUN_4a161570(0x5c);
      piVar14 = (int *)FUN_4a0a7fc8();
      if (piVar14 != (int *)0x0) {
        (**(code **)(*piVar14 + 0xc))(piVar14);
      }
      FUN_4a0afe0c(piVar14,uStack_78);
      FUN_4a0afe78(piVar14,5);
      FUN_4a0afda0(piVar14,uStack_8c);
      if (piStack_94 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = piStack_94[2];
      }
      *(int **)(iVar8 + 0x24) = piVar14;
      piVar14 = (int *)FUN_4a0b75a8(piVar14);
      if (piVar14 != (int *)0x0) {
        (**(code **)(*piVar14 + 0xc))(piVar14);
      }
      FUN_4a0afda0(piVar14,uStack_8c);
      FUN_4a0afe78(piVar14,3);
      iVar8 = iStack_98;
      if (piStack_94 != (int *)0x0) {
        iVar7 = piStack_94[2];
      }
      *(int **)(iVar7 + 0x4c) = piVar14;
      apuStack_a0[0] = puVar1;
      iVar7 = FUN_4a0bcc84(apuStack_a0);
      if (iVar7 != 0) {
        iVar12 = 0;
        if (0 < iVar8) {
          do {
            iVar12 = iVar12 + 1;
          } while (iVar12 < iVar8);
          if (iVar7 == 0) goto LAB_4a0807b8;
        }
        FUN_4a14f21c();
      }
LAB_4a0807b8:
      FUN_4a0c6bf4(apuStack_a0);
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar16);
  }
  piVar14 = (int *)FUN_4a0986e4(uStack_6c,0xff);
  FUN_4a0b7a54(piVar14,0xd0,0xd1);
  thunk_FUN_4a161570(0x5c);
  piVar17 = (int *)FUN_4a0a7fc8();
  if (piVar17 != (int *)0x0) {
    (**(code **)(*piVar17 + 0xc))(piVar17);
  }
  FUN_4a0a7c84(piVar17,0,piVar14);
  FUN_4a0afe0c(piVar17,uStack_70);
  FUN_4a0afe78(piVar17,0);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar16 = 0;
  }
  else {
    iVar16 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar16 + 0xa0) = piVar17;
  piVar17 = (int *)FUN_4a0b75a8(piVar14);
  if (piVar17 != (int *)0x0) {
    (**(code **)(*piVar17 + 0xc))(piVar17);
  }
  FUN_4a0b7a54(piVar17,0xd0,0xd1);
  thunk_FUN_4a161570(0x5c);
  piVar9 = (int *)FUN_4a0a7fc8();
  if (piVar9 != (int *)0x0) {
    (**(code **)(*piVar9 + 0xc))(piVar9);
  }
  FUN_4a0a7c84(piVar9,0,piVar17);
  FUN_4a0afe0c(piVar9,uStack_7c);
  FUN_4a0afe78(piVar9,9);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar16 = 0;
  }
  else {
    iVar16 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar16 + 0xa4) = piVar9;
  if ((piVar14 != (int *)0x0) && (iVar16 = (**(code **)(*piVar14 + 8))(piVar14), iVar16 != 0)) {
    (**(code **)(*piVar14 + 4))(piVar14);
  }
  if ((piVar17 != (int *)0x0) && (iVar16 = (**(code **)(*piVar17 + 8))(piVar17), iVar16 != 0)) {
    (**(code **)(*piVar17 + 4))(piVar17);
  }
  thunk_FUN_4a161570(0x5c);
  piVar14 = (int *)FUN_4a0a7fc8();
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0xc))(piVar14);
  }
  FUN_4a0afe0c(piVar14,uStack_7c);
  FUN_4a0afe78(piVar14,9);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar16 = 0;
  }
  else {
    iVar16 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar16 + 0xc0) = piVar14;
  piVar14 = (int *)FUN_4a0986e4(uStack_6c,0xf8);
  FUN_4a0b7a54(piVar14,0xd2,0xd1);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar16 = 0;
  }
  else {
    iVar16 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  FUN_4a0a7c84(*(undefined4 *)(iVar16 + 0xc0),0,piVar14);
  if ((piVar14 != (int *)0x0) && (iVar16 = (**(code **)(*piVar14 + 8))(piVar14), iVar16 != 0)) {
    (**(code **)(*piVar14 + 4))(piVar14);
  }
  thunk_FUN_4a161570(0x5c);
  piVar14 = (int *)FUN_4a0a7fc8();
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0xc))(piVar14);
  }
  FUN_4a0afe0c(piVar14,uStack_70);
  FUN_4a0afe78(piVar14,0);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar16 = 0;
  }
  else {
    iVar16 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar16 + 0xc4) = piVar14;
  thunk_FUN_4a161570(0x5c);
  piVar14 = (int *)FUN_4a0a7fc8();
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0xc))(piVar14);
  }
  FUN_4a0afe0c(piVar14,uStack_70);
  FUN_4a0afe78(piVar14,0);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar16 = 0;
  }
  else {
    iVar16 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar16 + 200) = piVar14;
  thunk_FUN_4a161570(0x5c);
  piVar14 = (int *)FUN_4a0a7fc8();
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0xc))(piVar14);
  }
  FUN_4a0afe0c(piVar14,uStack_70);
  FUN_4a0afe78(piVar14,0);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar16 = 0;
  }
  else {
    iVar16 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar16 + 0x6c) = piVar14;
  thunk_FUN_4a161570(0x5c);
  piVar14 = (int *)FUN_4a0a7fc8();
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0xc))(piVar14);
  }
  FUN_4a0afe0c(piVar14,uStack_7c);
  FUN_4a0afda0(piVar14,uStack_8c);
  FUN_4a0afe78(piVar14,9);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar16 = 0;
  }
  else {
    iVar16 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar16 + 0x70) = piVar14;
  thunk_FUN_4a161570(0x5c);
  piVar14 = (int *)FUN_4a0a7fc8();
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0xc))(piVar14);
  }
  FUN_4a0afe0c(piVar14,uStack_78);
  FUN_4a0afe78(piVar14,7);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar16 = 0;
  }
  else {
    iVar16 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar16 + 0x74) = piVar14;
  thunk_FUN_4a161570(0x5c);
  piVar14 = (int *)FUN_4a0a7fc8();
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0xc))(piVar14);
  }
  FUN_4a0afe0c(piVar14,uStack_74);
  FUN_4a0afe78(piVar14,7);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar16 = 0;
  }
  else {
    iVar16 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar16 + 0x78) = piVar14;
  thunk_FUN_4a161570(0x5c);
  piVar14 = (int *)FUN_4a0a7fc8();
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0xc))(piVar14);
  }
  FUN_4a0afe0c(piVar14,uStack_74);
  FUN_4a0afe78(piVar14,7);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar16 = 0;
  }
  else {
    iVar16 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar16 + 0x7c) = piVar14;
  thunk_FUN_4a161570(0x5c);
  piVar14 = (int *)FUN_4a0a7fc8();
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0xc))(piVar14);
  }
  FUN_4a0afe0c(piVar14,uStack_74);
  FUN_4a0afda0(piVar14,uStack_88);
  FUN_4a0afe78(piVar14,3);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar16 = 0;
  }
  else {
    iVar16 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar16 + 0x80) = piVar14;
  thunk_FUN_4a161570(0x5c);
  piVar14 = (int *)FUN_4a0a7fc8();
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0xc))(piVar14);
  }
  FUN_4a0afe0c(piVar14,uStack_74);
  FUN_4a0afe78(piVar14,7);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar16 = 0;
  }
  else {
    iVar16 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar16 + 0x84) = piVar14;
  thunk_FUN_4a161570(0x5c);
  piVar14 = (int *)FUN_4a0a7fc8();
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0xc))(piVar14);
  }
  FUN_4a0afe0c(piVar14,uStack_74);
  FUN_4a0afda0(piVar14,uStack_88);
  FUN_4a0afe78(piVar14,3);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar16 = 0;
  }
  else {
    iVar16 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar16 + 0x88) = piVar14;
  thunk_FUN_4a161570(0x5c);
  piVar14 = (int *)FUN_4a0a7fc8();
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0xc))(piVar14);
  }
  FUN_4a0afe0c(piVar14,uStack_70);
  FUN_4a0afe78(piVar14,0);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar16 = 0;
  }
  else {
    iVar16 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar16 + 0x8c) = piVar14;
  thunk_FUN_4a161570(0x5c);
  piVar14 = (int *)FUN_4a0a7fc8();
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0xc))(piVar14);
  }
  FUN_4a0afe0c(piVar14,uStack_70);
  FUN_4a0afda0(piVar14,uStack_88);
  FUN_4a0afe78(piVar14,0);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar16 = 0;
  }
  else {
    iVar16 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar16 + 0x90) = piVar14;
  thunk_FUN_4a161570(0x5c);
  piVar14 = (int *)FUN_4a0a7fc8();
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0xc))(piVar14);
  }
  FUN_4a0afe0c(piVar14,uStack_84);
  FUN_4a0afe78(piVar14,0xfffffffe);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar16 = 0;
  }
  else {
    iVar16 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar16 + 0x94) = piVar14;
  thunk_FUN_4a161570(0x5c);
  piVar14 = (int *)FUN_4a0a7fc8();
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0xc))(piVar14);
  }
  FUN_4a0afe0c(piVar14,uStack_74);
  FUN_4a0afe78(piVar14,10);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar16 = 0;
  }
  else {
    iVar16 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar16 + 0x98) = piVar14;
  thunk_FUN_4a161570(0x5c);
  piVar14 = (int *)FUN_4a0a7fc8();
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0xc))(piVar14);
  }
  FUN_4a0afe0c(piVar14,uStack_80);
  FUN_4a0afe78(piVar14,0xffffffff);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar16 = 0;
  }
  else {
    iVar16 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar16 + 0x9c) = piVar14;
  thunk_FUN_4a161570(0x5c);
  piVar14 = (int *)FUN_4a0a7fc8();
  if (piVar14 != (int *)0x0) {
    (**(code **)(*piVar14 + 0xc))(piVar14);
  }
  FUN_4a0afe0c(piVar14,uStack_70);
  FUN_4a0afe78(piVar14,0);
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(int **)(iVar4 + 0xcc) = piVar14;
  return;
}



// Address: 4a080f98

void FUN_4a080f98(undefined4 param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined1 in_CY;
  undefined1 auStack_5c [12];
  int local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  iVar10 = DAT_4a0813e8;
  local_34 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  local_3c = FUN_4a1725c0(param_2,param_5);
  local_40 = FUN_4a1725c0(param_3,param_6);
  uVar1 = FUN_4a1725c0(param_4,param_7);
  local_38 = FUN_4a17211c(uVar1,uVar1);
  uVar2 = FUN_4a17211c(local_40);
  uVar3 = FUN_4a17211c(local_3c);
  uVar2 = FUN_4a171a94(uVar3,uVar2);
  FUN_4a171a94(uVar2,local_38);
  uVar2 = FUN_4a002b60();
  uVar2 = FUN_4a171bb8(0x3f800000,uVar2);
  local_3c = FUN_4a17211c(local_3c,uVar2);
  local_40 = FUN_4a17211c(local_40,uVar2);
  local_44 = FUN_4a17211c(uVar1,uVar2);
  uVar1 = FUN_4a17211c(param_10,param_10);
  uVar2 = FUN_4a17211c(param_9);
  uVar3 = FUN_4a17211c(param_8,param_8);
  uVar2 = FUN_4a171a94(uVar3,uVar2);
  uVar1 = FUN_4a171a94(uVar2,uVar1);
  uVar4 = FUN_4a1725c0(uVar1,0x3f800000);
  FUN_4a1720a0(uVar4 ^ 0x80000000,uVar4);
  if ((bool)in_CY) {
    uVar4 = uVar4 ^ 0x80000000;
  }
  uVar1 = FUN_4a17211c(param_10,local_40);
  uVar2 = FUN_4a17211c(param_9,local_44);
  uVar1 = FUN_4a1725c0(uVar2,uVar1);
  uVar2 = FUN_4a17211c(param_8,local_44);
  uVar3 = FUN_4a17211c(param_10,local_3c);
  uVar2 = FUN_4a1725c0(uVar3,uVar2);
  uVar3 = FUN_4a17211c(param_9,local_3c);
  uVar5 = FUN_4a17211c(param_8,local_40);
  uVar3 = FUN_4a1725c0(uVar5,uVar3);
  if (iVar10 <= (int)uVar4) {
    uVar5 = FUN_4a17211c(uVar3,uVar3);
    uVar6 = FUN_4a17211c(uVar2,uVar2);
    uVar7 = FUN_4a17211c(uVar1,uVar1);
    uVar6 = FUN_4a171a94(uVar7,uVar6);
    FUN_4a171a94(uVar6,uVar5);
    uVar5 = FUN_4a002b60();
    FUN_4a171bb8(0x3f800000,uVar5);
    FUN_4a171e1c();
    uVar5 = FUN_4a171fac();
    uVar1 = FUN_4a17211c(uVar5,uVar1);
    uVar2 = FUN_4a17211c(uVar5,uVar2);
    uVar3 = FUN_4a17211c(uVar5,uVar3);
  }
  uVar5 = FUN_4a17211c(local_44,uVar2);
  uVar6 = FUN_4a17211c(local_40,uVar3);
  uVar5 = FUN_4a1725c0(uVar6,uVar5);
  uVar6 = FUN_4a17211c(local_3c,uVar3);
  uVar7 = FUN_4a17211c(local_44,uVar1);
  local_48 = FUN_4a1725c0(uVar7,uVar6);
  uVar6 = FUN_4a17211c(local_40,uVar1);
  uVar7 = FUN_4a17211c(local_3c,uVar2);
  uVar6 = FUN_4a1725c0(uVar7,uVar6);
  FUN_4a16b934(auStack_5c,0x10);
  iVar10 = 0;
  if (local_50 == 0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8 = *(undefined4 **)(local_50 + 8);
  }
  *puVar8 = uVar1;
  if (local_50 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(local_50 + 8);
  }
  *(undefined4 *)(iVar9 + 4) = uVar2;
  if (local_50 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(local_50 + 8);
  }
  *(undefined4 *)(iVar9 + 8) = uVar3;
  if (local_50 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(local_50 + 8);
  }
  *(undefined4 *)(iVar9 + 0xc) = 0;
  if (local_50 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(local_50 + 8);
  }
  *(undefined4 *)(iVar9 + 0x10) = uVar5;
  if (local_50 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(local_50 + 8);
  }
  *(undefined4 *)(iVar9 + 0x14) = local_48;
  if (local_50 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(local_50 + 8);
  }
  *(undefined4 *)(iVar9 + 0x18) = uVar6;
  if (local_50 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(local_50 + 8);
  }
  *(undefined4 *)(iVar9 + 0x1c) = 0;
  if (local_50 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(local_50 + 8);
  }
  *(undefined4 *)(iVar9 + 0x20) = local_3c;
  if (local_50 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(local_50 + 8);
  }
  *(undefined4 *)(iVar9 + 0x24) = local_40;
  if (local_50 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(local_50 + 8);
  }
  *(undefined4 *)(iVar9 + 0x28) = local_44;
  if (local_50 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(local_50 + 8);
  }
  *(undefined4 *)(iVar9 + 0x2c) = 0;
  if (local_50 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(local_50 + 8);
  }
  *(undefined4 *)(iVar9 + 0x30) = 0;
  if (local_50 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(local_50 + 8);
  }
  *(undefined4 *)(iVar9 + 0x34) = 0;
  if (local_50 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(local_50 + 8);
  }
  *(undefined4 *)(iVar9 + 0x38) = 0;
  if (local_50 != 0) {
    iVar10 = *(int *)(local_50 + 8);
  }
  *(undefined4 *)(iVar10 + 0x3c) = 0x3f800000;
  FUN_4a0b8600(local_34,auStack_5c);
  FUN_4a0b7e44(local_34,param_2 ^ 0x80000000,param_3 ^ 0x80000000,param_4 ^ 0x80000000);
  FUN_4a0b8640(local_34);
  FUN_4a16ba04(auStack_5c);
  return;
}



// Address: 4a0813ec

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0813ec(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar3 = FUN_4a07cb70(param_1,param_4,param_5);
  iVar4 = FUN_4a07cb70(param_1,param_3,param_5);
  iVar4 = *(int *)(iVar4 + 0xc);
  if (iVar4 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  while( true ) {
    iVar1 = FUN_4a165910(param_2);
    if (iVar1 != 0) {
      iVar5 = 0;
      iVar6 = 0;
      if (*(int *)(iVar1 + 0xdc) != 0) {
        iVar6 = *(int *)(*(int *)(iVar1 + 0xdc) + 0x10);
      }
      if (0 < iVar6) {
        do {
          FUN_4a07e900(param_1,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0xdc) + 0x14) + iVar5 * 4),
                       iVar4,uVar3);
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar6);
      }
    }
    iVar1 = FUN_4a165858(param_2);
    if (iVar1 == 0) {
      return;
    }
    iVar6 = FUN_4a13b5dc(iVar1);
    iVar5 = 0;
    if (0 < iVar6) {
      do {
        iVar2 = FUN_4a13b4a0(iVar1,iVar5);
        if (*(int *)(iVar2 + 0xc) == iVar4) {
          FUN_4a0b3bc8(iVar1,iVar5,uVar3);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar6);
    }
    iVar1 = FUN_4a1657f4(param_2);
    if (iVar1 == 0) break;
    param_2 = *(int *)(iVar1 + 0x114);
    if (param_2 == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x4a07e9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a081444

void FUN_4a081444(undefined4 param_1)

{
  undefined1 auStack_58 [20];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  FUN_4a0b89d4(auStack_58);
  FUN_4a0b88fc(auStack_58,0x3f000000,0x3f000000,0x3f000000,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  uStack_44 = 0x3f000000;
  uStack_40 = uStack_30;
  local_3c = uStack_2c;
  local_38 = local_28;
  uStack_34 = 0x3f000000;
  uStack_30 = 0;
  uStack_2c = 0;
  local_28 = 0;
  uStack_24 = 0;
  FUN_4a0af058(param_1,auStack_58);
  FUN_4a0c6bf4(auStack_58);
  return;
}



// Address: 4a08152c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a08152c(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 uVar6;
  
  iVar2 = *(int *)(param_1 + 0xcc) + param_2;
  iVar5 = (int)((ulonglong)((longlong)DAT_4a0816b0 * (longlong)iVar2) >> 0x20);
  *(int *)(param_1 + 0xcc) = iVar2 + ((iVar5 >> 0xf) - (iVar5 >> 0x1f)) * -90000;
  iVar2 = *(int *)(param_1 + 0xd0) + param_2;
  iVar5 = (int)((ulonglong)((longlong)DAT_4a0816b4 * (longlong)iVar2) >> 0x20);
  *(int *)(param_1 + 0xd0) = iVar2 + ((iVar5 >> 9) - (iVar5 >> 0x1f)) * -24000;
  param_2 = *(int *)(param_1 + 0xd4) + param_2;
  lVar1 = (longlong)DAT_4a0816b8 * (longlong)param_2;
  iVar5 = (int)((ulonglong)lVar1 >> 0x20);
  iVar2 = iVar5 >> 0xb;
  *(int *)(param_1 + 0xd4) = param_2 + (iVar2 - (iVar5 >> 0x1f)) * -32000;
  iVar5 = 0;
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  iVar2 = FUN_4a136540(*(undefined4 *)(iVar3 + 0x54),0,iVar2,(int)lVar1);
  if (iVar2 != 0) {
    uVar4 = FUN_4a171fac(*(undefined4 *)(param_1 + 0xcc));
    uVar4 = FUN_4a17295c(uVar4,1);
    uVar4 = FUN_4a17211c(uVar4,DAT_4a0816bc);
    FUN_4a0af1d4(iVar2,0,uVar4);
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  iVar2 = FUN_4a136540(*(undefined4 *)(iVar2 + 0x58),0);
  if (iVar2 != 0) {
    uVar4 = FUN_4a171fac(*(undefined4 *)(param_1 + 0xd0));
    uVar4 = FUN_4a17295c(uVar4,1);
    uVar4 = FUN_4a17211c(uVar4,DAT_4a0816c0);
    FUN_4a0af1d4(iVar2,uVar4,0);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  iVar2 = FUN_4a136540(*(undefined4 *)(iVar5 + 0x5c),0);
  uVar6 = iVar2 == 0;
  if ((bool)uVar6) {
    return;
  }
  uVar4 = FUN_4a171fac(*(undefined4 *)(param_1 + 0xd4));
  uVar4 = FUN_4a17295c(uVar4,1);
  uVar4 = FUN_4a17211c(uVar4,DAT_4a0816c4);
  FUN_4a171da0(*(undefined4 *)(iVar2 + 0x28));
  if ((bool)uVar6) {
    FUN_4a171da0(*(undefined4 *)(iVar2 + 0x2c),0);
  }
  if ((bool)uVar6) {
    FUN_4a171da0(*(undefined4 *)(iVar2 + 0x30),0);
  }
  if (!(bool)uVar6) {
    *(undefined4 *)(iVar2 + 0x28) = uVar4;
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    *(undefined4 *)(iVar2 + 0x30) = 0;
    *(undefined1 *)(iVar2 + 200) = 0;
    return;
  }
  return;
}



// Address: 4a0816c8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0816c8(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 extraout_r1;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 uVar13;
  
  iVar2 = FUN_4a0642fc();
  iVar12 = *(int *)(iVar2 + 0x40);
  iVar9 = 0;
  iVar11 = 0;
  if (0 < iVar12) {
    do {
      iVar3 = FUN_4a065380(iVar2,iVar9);
      if (iVar3 != 0) {
        iVar10 = *(int *)(param_1 + 0x7c);
        iVar6 = -iVar3;
        if (-iVar3 < iVar3) {
          iVar6 = iVar3;
        }
        if (iVar10 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(iVar10 + 8);
        }
        FUN_4a0015f0(*(int *)(iVar4 + iVar9 * 4) + param_2,iVar6);
        if (iVar10 == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = *(int *)(iVar10 + 8);
        }
        *(undefined4 *)(iVar10 + iVar9 * 4) = extraout_r1;
        uVar5 = FUN_4a171fac(iVar6);
        if (*(int *)(param_1 + 0x7c) == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(*(int *)(param_1 + 0x7c) + 8);
        }
        uVar7 = FUN_4a171fac(*(undefined4 *)(iVar6 + iVar9 * 4));
        uVar7 = FUN_4a17295c(uVar7,1);
        uVar5 = FUN_4a171bb8(uVar7,uVar5);
        if (*(int *)(param_1 + 0x68) == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(*(int *)(param_1 + 0x68) + 8);
        }
        iVar6 = *(int *)(iVar6 + iVar9 * 0x14 + 0xc);
        if (iVar6 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(iVar6 + 8);
        }
        iVar6 = FUN_4a136540(*(undefined4 *)(iVar6 + 0x1c),0);
        if (iVar6 != 0) {
          if (iVar3 < 0) {
            uVar5 = 0;
          }
          FUN_4a0af1d4(iVar6,uVar5);
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar12);
  }
  iVar9 = *(int *)(param_1 + 0xc0) + param_2;
  lVar1 = (longlong)DAT_4a0818e0 * (longlong)iVar9;
  iVar12 = (int)((ulonglong)lVar1 >> 0x20);
  iVar2 = iVar12 >> 8;
  *(int *)(param_1 + 0xc0) = iVar9 + (iVar2 - (iVar12 >> 0x1f)) * -4000;
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  iVar2 = FUN_4a136540(*(undefined4 *)(iVar9 + 0xd0),0,iVar2,(int)lVar1);
  if (iVar2 != 0) {
    uVar5 = FUN_4a171fac(*(undefined4 *)(param_1 + 0xc0));
    uVar5 = FUN_4a17295c(uVar5,1);
    uVar8 = FUN_4a17211c(uVar5,DAT_4a0818e4);
    FUN_4a0af1d4(iVar2,uVar8 ^ 0x80000000,0);
  }
  param_2 = *(int *)(param_1 + 0xc4) + param_2;
  lVar1 = (longlong)DAT_4a0818e8 * (longlong)param_2;
  iVar9 = (int)((ulonglong)lVar1 >> 0x20);
  iVar2 = iVar9 >> 0xe;
  *(int *)(param_1 + 0xc4) = param_2 + (iVar2 - (iVar9 >> 0x1f)) * -60000;
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar11 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  iVar2 = FUN_4a136540(*(undefined4 *)(iVar11 + 0xd8),0,iVar2,(int)lVar1);
  uVar13 = iVar2 == 0;
  if ((bool)uVar13) {
    return;
  }
  uVar5 = FUN_4a171fac(*(undefined4 *)(param_1 + 0xc4));
  uVar5 = FUN_4a17295c(uVar5,1);
  uVar5 = FUN_4a17211c(uVar5,DAT_4a0818ec);
  FUN_4a171da0(*(undefined4 *)(iVar2 + 0x28));
  if ((bool)uVar13) {
    FUN_4a171da0(*(undefined4 *)(iVar2 + 0x2c),uVar5);
  }
  if ((bool)uVar13) {
    FUN_4a171da0(*(undefined4 *)(iVar2 + 0x30),0);
  }
  if ((bool)uVar13) {
    return;
  }
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = uVar5;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(undefined1 *)(iVar2 + 200) = 0;
  return;
}



// Address: 4a0818f0

void FUN_4a0818f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 in_CY;
  undefined1 auStack_48 [12];
  int local_3c;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  iVar7 = DAT_4a081c7c;
  uStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  uVar1 = FUN_4a17211c(param_4,param_4);
  uVar2 = FUN_4a17211c(local_2c);
  uVar3 = FUN_4a17211c(local_30);
  uVar2 = FUN_4a171a94(uVar3,uVar2);
  uVar1 = FUN_4a171a94(uVar2,uVar1);
  uVar4 = FUN_4a1725c0(uVar1,0x3f800000);
  FUN_4a1720a0(uVar4 ^ 0x80000000,uVar4);
  if ((bool)in_CY) {
    uVar4 = uVar4 ^ 0x80000000;
  }
  if (iVar7 < (int)uVar4) {
    uVar1 = FUN_4a002b60(uVar1);
    uVar1 = FUN_4a171bb8(0x3f800000,uVar1);
    local_30 = FUN_4a17211c(local_30,uVar1);
    local_2c = FUN_4a17211c(local_2c,uVar1);
    param_4 = FUN_4a17211c(param_4,uVar1);
  }
  uVar1 = FUN_4a17211c(param_4,param_7);
  uVar2 = FUN_4a17211c(local_2c,param_6);
  uVar3 = FUN_4a17211c(local_30,param_5);
  uVar2 = FUN_4a171a94(uVar3,uVar2);
  uVar1 = FUN_4a171a94(uVar2,uVar1);
  FUN_4a16b934(auStack_48,0x10);
  iVar7 = 0;
  uVar2 = FUN_4a17295c(local_30,1);
  uVar2 = FUN_4a17211c(uVar2,local_30);
  uVar2 = FUN_4a1724e0(uVar2,0x3f800000);
  if (local_3c == 0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = *(undefined4 **)(local_3c + 8);
  }
  *puVar6 = uVar2;
  uVar2 = FUN_4a17211c(local_30,0xc0000000);
  uVar3 = FUN_4a17211c(uVar2,local_2c);
  if (local_3c == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(local_3c + 8);
  }
  *(undefined4 *)(iVar5 + 4) = uVar3;
  uVar2 = FUN_4a17211c(uVar2,param_4);
  if (local_3c == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(local_3c + 8);
  }
  *(undefined4 *)(iVar5 + 8) = uVar2;
  uVar1 = FUN_4a17295c(uVar1,1);
  uVar2 = FUN_4a17211c(uVar1,local_30);
  if (local_3c == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(local_3c + 8);
  }
  *(undefined4 *)(iVar5 + 0xc) = uVar2;
  uVar2 = FUN_4a17211c(local_2c,0xc0000000);
  uVar3 = FUN_4a17211c(uVar2,local_30);
  if (local_3c == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(local_3c + 8);
  }
  *(undefined4 *)(iVar5 + 0x10) = uVar3;
  uVar3 = FUN_4a17295c(local_2c,1);
  uVar3 = FUN_4a17211c(uVar3,local_2c);
  uVar3 = FUN_4a1724e0(uVar3,0x3f800000);
  if (local_3c == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(local_3c + 8);
  }
  *(undefined4 *)(iVar5 + 0x14) = uVar3;
  uVar2 = FUN_4a17211c(uVar2,param_4);
  if (local_3c == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(local_3c + 8);
  }
  *(undefined4 *)(iVar5 + 0x18) = uVar2;
  uVar2 = FUN_4a17211c(uVar1,local_2c);
  if (local_3c == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(local_3c + 8);
  }
  *(undefined4 *)(iVar5 + 0x1c) = uVar2;
  uVar2 = FUN_4a17211c(param_4,0xc0000000);
  uVar3 = FUN_4a17211c(uVar2,local_30);
  if (local_3c == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(local_3c + 8);
  }
  *(undefined4 *)(iVar5 + 0x20) = uVar3;
  uVar2 = FUN_4a17211c(uVar2,local_2c);
  if (local_3c == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(local_3c + 8);
  }
  *(undefined4 *)(iVar5 + 0x24) = uVar2;
  uVar2 = FUN_4a17295c(param_4,1);
  uVar2 = FUN_4a17211c(uVar2,param_4);
  uVar2 = FUN_4a1724e0(uVar2,0x3f800000);
  if (local_3c == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(local_3c + 8);
  }
  *(undefined4 *)(iVar5 + 0x28) = uVar2;
  uVar1 = FUN_4a17211c(uVar1,param_4);
  if (local_3c == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(local_3c + 8);
  }
  *(undefined4 *)(iVar5 + 0x2c) = uVar1;
  if (local_3c == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(local_3c + 8);
  }
  *(undefined4 *)(iVar5 + 0x30) = 0;
  if (local_3c == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(local_3c + 8);
  }
  *(undefined4 *)(iVar5 + 0x34) = 0;
  if (local_3c == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(local_3c + 8);
  }
  *(undefined4 *)(iVar5 + 0x38) = 0;
  if (local_3c != 0) {
    iVar7 = *(int *)(local_3c + 8);
  }
  *(undefined4 *)(iVar7 + 0x3c) = 0x3f800000;
  FUN_4a0b8600(param_1,auStack_48);
  FUN_4a16ba04(auStack_48);
  return;
}



// Address: 4a081c80

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a081c80(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    return;
  }
  iVar2 = FUN_4a165858();
  iVar3 = FUN_4a165910(param_1);
  if (iVar2 == 0) {
    if (iVar3 == 0) {
      return;
    }
    iVar5 = 0;
    iVar2 = 0;
    if (*(int *)(iVar3 + 0xdc) != 0) {
      iVar2 = *(int *)(*(int *)(iVar3 + 0xdc) + 0x10);
    }
    if (0 < iVar2) {
      do {
        FUN_4a081c80(*(undefined4 *)(*(int *)(*(int *)(iVar3 + 0xdc) + 0x14) + iVar5 * 4),param_2);
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar2);
      return;
    }
    return;
  }
  bVar1 = false;
  iVar3 = FUN_4a13b5dc(iVar2);
  iVar5 = 0;
  if (iVar3 < 1) {
    return;
  }
  do {
    iVar4 = FUN_4a13b4a0(iVar2,iVar5);
    if (*(int *)(iVar4 + 0xc) == 0x6d || *(int *)(iVar4 + 0xc) == 0x5c) {
      FUN_4a0a7c84(iVar4,1,param_2);
      bVar1 = true;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < iVar3);
  if (bVar1) {
    iVar2 = FUN_4a13b5e4(iVar2);
    if (*(int *)(*(int *)(iVar2 + 0x48) + 0x30) == 1) {
      FUN_4a0adcbc(iVar2,1,*(int *)(iVar2 + 0x48),DAT_4a081dd0);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a081d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a081dd4

void FUN_4a081dd4(void)

{
  undefined4 uVar1;
  
  thunk_FUN_4a161570(0xdc);
  uVar1 = FUN_4a082694();
  *(undefined4 *)PTR_DAT_4a081df4 = uVar1;
  return;
}



// Address: 4a081df8

void FUN_4a081df8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar3 = 0;
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    do {
      if (*(int *)(param_1 + 0x2c) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
      }
      piVar5 = *(int **)(iVar1 + iVar3 * 4);
      if ((piVar5 != (int *)0x0) && (iVar1 = (**(code **)(*piVar5 + 8))(piVar5), iVar1 != 0)) {
        (**(code **)(*piVar5 + 4))(piVar5);
      }
      if (*(int *)(param_1 + 0x2c) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
      }
      *(undefined4 *)(iVar1 + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x28));
  }
  piVar5 = *(int **)(param_1 + 0x90);
  if ((piVar5 != (int *)0x0) && (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  piVar5 = *(int **)(param_1 + 0x94);
  if ((piVar5 != (int *)0x0) && (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  *(undefined4 *)(param_1 + 0x94) = 0;
  piVar5 = *(int **)(param_1 + 0x84);
  if ((piVar5 != (int *)0x0) && (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  *(undefined4 *)(param_1 + 0x84) = 0;
  piVar5 = *(int **)(param_1 + 0xb0);
  if ((piVar5 != (int *)0x0) && (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  piVar5 = *(int **)(param_1 + 0xac);
  if ((piVar5 != (int *)0x0) && (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  *(undefined4 *)(param_1 + 0xac) = 0;
  piVar5 = *(int **)(param_1 + 0xb8);
  if ((piVar5 != (int *)0x0) && (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  piVar5 = *(int **)(param_1 + 0xb4);
  if ((piVar5 != (int *)0x0) && (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  *(undefined4 *)(param_1 + 0xb4) = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xa0)) {
    do {
      if (*(int *)(param_1 + 0xa4) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0xa4) + 8);
      }
      piVar5 = *(int **)(iVar1 + iVar3 * 4);
      if ((piVar5 != (int *)0x0) && (iVar1 = (**(code **)(*piVar5 + 8))(piVar5), iVar1 != 0)) {
        (**(code **)(*piVar5 + 4))(piVar5);
      }
      if (*(int *)(param_1 + 0xa4) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0xa4) + 8);
      }
      *(undefined4 *)(iVar1 + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xa0));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x50)) {
    do {
      if (*(int *)(param_1 + 0x54) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0x54) + 8);
      }
      iVar4 = 0;
      if (0 < *(int *)(iVar1 + iVar3 * 0x14 + 8)) {
        do {
          if (*(int *)(param_1 + 0x54) == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = *(int *)(*(int *)(param_1 + 0x54) + 8);
          }
          iVar1 = *(int *)(iVar1 + iVar3 * 0x14 + 0xc);
          if (iVar1 == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = *(int *)(iVar1 + 8);
          }
          piVar5 = *(int **)(iVar1 + iVar4 * 4);
          if ((piVar5 != (int *)0x0) && (iVar1 = (**(code **)(*piVar5 + 8))(piVar5), iVar1 != 0)) {
            (**(code **)(*piVar5 + 4))(piVar5);
          }
          iVar1 = 0;
          if (*(int *)(param_1 + 0x54) == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(*(int *)(param_1 + 0x54) + 8);
          }
          iVar2 = *(int *)(iVar2 + iVar3 * 0x14 + 0xc);
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(iVar2 + 8);
          }
          *(undefined4 *)(iVar2 + iVar4 * 4) = 0;
          iVar4 = iVar4 + 1;
          if (*(int *)(param_1 + 0x54) != 0) {
            iVar1 = *(int *)(*(int *)(param_1 + 0x54) + 8);
          }
        } while (iVar4 < *(int *)(iVar1 + iVar3 * 0x14 + 8));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x50));
  }
  iVar3 = 0;
  if (*(int *)(param_1 + 0x3c) < 1) {
    return;
  }
  do {
    iVar1 = iVar6;
    if (*(int *)(param_1 + 0x40) != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 8);
    }
    iVar4 = 0;
    if (0 < *(int *)(iVar1 + iVar3 * 0x14 + 8)) {
      do {
        iVar1 = iVar6;
        if (*(int *)(param_1 + 0x40) != 0) {
          iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 8);
        }
        iVar2 = *(int *)(iVar1 + iVar3 * 0x14 + 0xc);
        iVar1 = iVar6;
        if (iVar2 != 0) {
          iVar1 = *(int *)(iVar2 + 8);
        }
        piVar5 = *(int **)(iVar1 + iVar4 * 4);
        if ((piVar5 != (int *)0x0) && (iVar1 = (**(code **)(*piVar5 + 8))(piVar5), iVar1 != 0)) {
          (**(code **)(*piVar5 + 4))(piVar5);
        }
        iVar1 = iVar6;
        if (*(int *)(param_1 + 0x40) != 0) {
          iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 8);
        }
        iVar2 = *(int *)(iVar1 + iVar3 * 0x14 + 0xc);
        iVar1 = iVar6;
        if (iVar2 != 0) {
          iVar1 = *(int *)(iVar2 + 8);
        }
        *(undefined4 *)(iVar1 + iVar4 * 4) = 0;
        iVar4 = iVar4 + 1;
        iVar1 = iVar6;
        if (*(int *)(param_1 + 0x40) != 0) {
          iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 8);
        }
      } while (iVar4 < *(int *)(iVar1 + iVar3 * 0x14 + 8));
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < *(int *)(param_1 + 0x3c));
  return;
}



// Address: 4a0822b8

void FUN_4a0822b8(void)

{
  if (*(int **)PTR_DAT_4a0822d4 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a0822cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)PTR_DAT_4a0822d4 + 4))();
  return;
}



// Address: 4a0822d8

int FUN_4a0822d8(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = -1;
  iVar1 = FUN_4a0642fc();
  iVar5 = *(int *)(iVar1 + 0x40);
  iVar4 = 0;
  if (0 < iVar5) {
    do {
      piVar2 = (int *)FUN_4a065294(iVar1,iVar4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xc))();
        iVar3 = FUN_4a13e0a8(piVar2,param_2);
        if (iVar3 != 0) {
          iVar1 = (**(code **)(*piVar2 + 8))(piVar2);
          iVar6 = iVar4;
          if (iVar1 != 0) {
            (**(code **)(*piVar2 + 4))(piVar2);
          }
          break;
        }
      }
      if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 8))(piVar2), iVar3 != 0)) {
        (**(code **)(*piVar2 + 4))(piVar2);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar5);
  }
  iVar1 = FUN_4a0ff494();
  iVar1 = FUN_4a0981f4(*(undefined4 *)(iVar1 + 0x60),param_2);
  FUN_4a07c63c(param_1,iVar1,iVar6);
  if (param_3 != 0 && iVar1 != 0) {
    iVar6 = FUN_4a165910(iVar1);
    if (iVar6 != 0) {
      iVar5 = 0;
      iVar4 = 0;
      if (*(int *)(iVar6 + 0xdc) != 0) {
        iVar4 = *(int *)(*(int *)(iVar6 + 0xdc) + 0x10);
      }
      if (0 < iVar4) {
        do {
          FUN_4a077aa8(*(undefined4 *)(*(int *)(*(int *)(iVar6 + 0xdc) + 0x14) + iVar5 * 4));
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar4);
      }
    }
    iVar6 = FUN_4a165858(iVar1);
    if (iVar6 != 0) {
      FUN_4a0b3e84();
      iVar6 = FUN_4a1657f4(iVar1);
      if (iVar6 != 0) {
        FUN_4a077aa8(*(undefined4 *)(iVar6 + 0x114));
      }
    }
  }
  return iVar1;
}



// Address: 4a082464

int * FUN_4a082464(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  
  if (param_2 == 7) {
    iVar6 = 0;
  }
  else {
    if (param_2 != 0x7f) {
      iVar6 = FUN_4a0ff494();
      uVar7 = *(undefined4 *)(iVar6 + 0x60);
      uVar2 = 0xffffffff;
      piVar3 = (int *)0x0;
      if ((param_2 & 0x4000) == 0) {
        uVar5 = thunk_FUN_4a161570(0x14);
        uVar7 = FUN_4a135e24(uVar7,param_2);
        piVar4 = (int *)FUN_4a0c707c(uVar5,uVar7);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0xc))(piVar4);
          piVar3 = piVar4;
        }
      }
      else {
        uVar2 = FUN_4a0642fc();
        piVar4 = (int *)FUN_4a064cf0(uVar2,param_2);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0xc))(piVar4);
          piVar3 = piVar4;
        }
        uVar2 = FUN_4a06479c(uVar2,param_2);
      }
      iVar6 = FUN_4a0ff494();
      piVar4 = (int *)FUN_4a0981f4(*(undefined4 *)(iVar6 + 0x60),piVar3);
      FUN_4a07c63c(param_1,piVar4,uVar2);
      if (param_3 != 0 && piVar4 != (int *)0x0) {
        iVar6 = FUN_4a165910(piVar4);
        if (iVar6 != 0) {
          iVar1 = 0;
          iVar8 = 0;
          if (*(int *)(iVar6 + 0xdc) != 0) {
            iVar8 = *(int *)(*(int *)(iVar6 + 0xdc) + 0x10);
          }
          if (0 < iVar8) {
            do {
              FUN_4a077aa8(*(undefined4 *)(*(int *)(*(int *)(iVar6 + 0xdc) + 0x14) + iVar1 * 4));
              iVar1 = iVar1 + 1;
            } while (iVar1 < iVar8);
          }
        }
        iVar6 = FUN_4a165858(piVar4);
        if (iVar6 != 0) {
          FUN_4a0b3e84();
          iVar6 = FUN_4a1657f4(piVar4);
          if (iVar6 != 0) {
            FUN_4a077aa8(*(undefined4 *)(iVar6 + 0x114));
          }
        }
      }
      if ((piVar3 != (int *)0x0) && (iVar6 = (**(code **)(*piVar3 + 8))(piVar3), iVar6 != 0)) {
        (**(code **)(*piVar3 + 4))(piVar3);
      }
      return piVar4;
    }
    iVar6 = 1;
  }
  iVar8 = 0;
  if (*(int *)(param_1 + 0xa4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0xa4) + 8);
  }
  if (*(int *)(iVar1 + iVar6 * 4) == 0) {
    uVar2 = FUN_4a082504(param_1);
    if (*(int *)(param_1 + 0xa4) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0xa4) + 8);
    }
    *(undefined4 *)(iVar1 + iVar6 * 4) = uVar2;
  }
  if (*(int *)(param_1 + 0xa4) != 0) {
    iVar8 = *(int *)(*(int *)(param_1 + 0xa4) + 8);
  }
  piVar3 = (int *)FUN_4a0b75a8(*(undefined4 *)(iVar8 + iVar6 * 4));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
  }
  return piVar3;
}



// Address: 4a082504

int FUN_4a082504(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  
  iVar1 = FUN_4a0ff494();
  uVar5 = *(undefined4 *)(iVar1 + 0x60);
  uVar9 = 0xffffffff;
  piVar8 = (int *)0x0;
  if ((param_2 & 0x4000) == 0) {
    uVar3 = thunk_FUN_4a161570(0x14);
    uVar5 = FUN_4a135e24(uVar5,param_2);
    piVar2 = (int *)FUN_4a0c707c(uVar3,uVar5);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))(piVar2);
      piVar8 = piVar2;
    }
  }
  else {
    uVar9 = FUN_4a0642fc();
    piVar2 = (int *)FUN_4a064cf0(uVar9,param_2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))(piVar2);
      piVar8 = piVar2;
    }
    uVar9 = FUN_4a06479c(uVar9,param_2);
  }
  iVar1 = FUN_4a0ff494();
  iVar1 = FUN_4a0981f4(*(undefined4 *)(iVar1 + 0x60),piVar8);
  FUN_4a07c63c(param_1,iVar1,uVar9);
  if (param_3 != 0 && iVar1 != 0) {
    iVar4 = FUN_4a165910(iVar1);
    if (iVar4 != 0) {
      iVar6 = 0;
      iVar7 = 0;
      if (*(int *)(iVar4 + 0xdc) != 0) {
        iVar7 = *(int *)(*(int *)(iVar4 + 0xdc) + 0x10);
      }
      if (0 < iVar7) {
        do {
          FUN_4a077aa8(*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0xdc) + 0x14) + iVar6 * 4));
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar7);
      }
    }
    iVar4 = FUN_4a165858(iVar1);
    if (iVar4 != 0) {
      FUN_4a0b3e84();
      iVar4 = FUN_4a1657f4(iVar1);
      if (iVar4 != 0) {
        FUN_4a077aa8(*(undefined4 *)(iVar4 + 0x114));
      }
    }
  }
  if ((piVar8 != (int *)0x0) && (iVar4 = (**(code **)(*piVar8 + 8))(piVar8), iVar4 != 0)) {
    (**(code **)(*piVar8 + 4))(piVar8);
  }
  return iVar1;
}



// Address: 4a082694

int * FUN_4a082694(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = PTR_PTR_4a082844;
  *param_1 = PTR_PTR_4a082844;
  param_1[2] = puVar1 + 0x20;
  param_1[4] = puVar1 + 0x40;
  param_1[5] = puVar1 + 0x50;
  param_1[6] = puVar1 + 0x60;
  param_1[3] = puVar1 + 0x30;
  param_1[1] = puVar1 + 0x10;
  param_1[7] = puVar1 + 0x70;
  puVar3 = (undefined4 *)FUN_4a0c6bc0(param_1 + 8);
  puVar1 = PTR_PTR_4a082848;
  puVar3[2] = 0;
  *puVar3 = puVar1;
  puVar3[3] = 0;
  puVar3 = (undefined4 *)FUN_4a0c6bc0(puVar3 + 5);
  puVar1 = PTR_PTR_4a08284c;
  puVar3[2] = 0;
  *puVar3 = puVar1;
  puVar3[3] = 0;
  puVar3 = (undefined4 *)FUN_4a0c6bc0(puVar3 + 5);
  puVar2 = PTR_PTR_4a082850;
  puVar3[2] = 0;
  *puVar3 = puVar2;
  puVar3[3] = 0;
  puVar3 = (undefined4 *)FUN_4a0c6bc0(puVar3 + 5);
  puVar3[2] = 0;
  *puVar3 = puVar1;
  puVar3[3] = 0;
  puVar3 = (undefined4 *)FUN_4a0c6bc0(puVar3 + 5);
  puVar1 = PTR_PTR_4a082854;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = puVar1;
  puVar3[5] = 0;
  *(undefined1 *)(puVar3 + 6) = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  piVar4 = (int *)FUN_4a0c6bc0(puVar3 + 10);
  puVar1 = PTR_PTR_4a082858;
  piVar4[2] = 0;
  piVar4[3] = 0;
  *piVar4 = (int)puVar1;
  iVar5 = FUN_4a15e080(8);
  if (iVar5 == 0) {
    iVar5 = FUN_4a1669a8();
  }
  iVar6 = 0;
  do {
    *(undefined4 *)(iVar5 + iVar6 * 4) = 0;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 2);
  thunk_FUN_4a161570(0x18);
  puVar3 = (undefined4 *)FUN_4a0c0628();
  puVar3[3] = 4;
  puVar3[4] = 2;
  puVar1 = PTR_PTR_4a08285c;
  *puVar3 = PTR_PTR_4a08285c;
  puVar3[2] = iVar5;
  *(undefined1 *)(puVar3 + 5) = 1;
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)(puVar1 + 0xc))(puVar3);
  }
  (**(code **)(*piVar4 + 0x1c))(piVar4);
  piVar4[2] = 2;
  piVar4[3] = (int)puVar3;
  piVar4[5] = 0;
  piVar4[6] = 0;
  piVar4[7] = 0;
  piVar4[8] = 0;
  piVar4[9] = 0;
  piVar4[10] = 0;
  piVar4[0xb] = 0;
  piVar4[0xc] = 0;
  piVar4[0xd] = 0;
  piVar4[0xe] = 0;
  piVar4[0xf] = 0;
  *(undefined1 *)(piVar4 + 0x10) = 0;
  *(undefined1 *)((int)piVar4 + 0x41) = 0;
  return piVar4 + -0x26;
}



// Address: 4a082878

int FUN_4a082878(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar1 = PTR_PTR_4a082a64;
  *param_1 = PTR_PTR_4a082a64;
  param_1[2] = puVar1 + 0x20;
  param_1[4] = puVar1 + 0x40;
  param_1[5] = puVar1 + 0x50;
  param_1[6] = puVar1 + 0x60;
  param_1[3] = puVar1 + 0x30;
  param_1[1] = puVar1 + 0x10;
  param_1[7] = puVar1 + 0x70;
  FUN_4a081df8(param_1);
  param_1[0x26] = PTR_PTR_4a082a68;
  iVar4 = param_1[0x28];
  iVar2 = FUN_4a0bcc84(param_1 + 0x26);
  if (iVar2 != 0) {
    iVar3 = 0;
    if (0 < iVar4) {
      do {
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
      if (iVar2 == 0) goto LAB_4a08290c;
    }
    FUN_4a14f21c();
  }
LAB_4a08290c:
  iVar2 = FUN_4a0c6bf4(param_1 + 0x26);
  iVar2 = FUN_4a16bef4(iVar2 + -0x28);
  puVar1 = PTR_PTR_4a082a6c;
  *(undefined **)(iVar2 + -0x14) = PTR_PTR_4a082a6c;
  iVar3 = *(int *)(iVar2 + -0xc);
  iVar4 = FUN_4a0bcc84(iVar2 + -0x14);
  if (iVar4 != 0) {
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar4 + iVar5 * 0x14))();
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
      if (iVar4 == 0) goto LAB_4a08297c;
    }
    FUN_4a14f21c(iVar4);
  }
LAB_4a08297c:
  iVar2 = FUN_4a0c6bf4(iVar2 + -0x14);
  puVar6 = (undefined4 *)(iVar2 + -0x14);
  *puVar6 = PTR_PTR_4a082a70;
  iVar4 = *(int *)(iVar2 + -0xc);
  iVar2 = FUN_4a0bcc84(puVar6);
  if (iVar2 != 0) {
    iVar3 = 0;
    if (0 < iVar4) {
      do {
        (*(code *)**(undefined4 **)(iVar2 + iVar3 * 0x14))();
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
      if (iVar2 == 0) goto LAB_4a0829e4;
    }
    FUN_4a14f21c(iVar2);
  }
LAB_4a0829e4:
  iVar2 = FUN_4a0c6bf4(puVar6);
  *(undefined **)(iVar2 + -0x14) = puVar1;
  iVar3 = *(int *)(iVar2 + -0xc);
  iVar4 = FUN_4a0bcc84(iVar2 + -0x14);
  if (iVar4 != 0) {
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)**(undefined4 **)(iVar4 + iVar5 * 0x14))();
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
      if (iVar4 == 0) goto LAB_4a082a48;
    }
    FUN_4a14f21c(iVar4);
  }
LAB_4a082a48:
  iVar2 = FUN_4a0c6bf4(iVar2 + -0x14);
  iVar2 = FUN_4a16a898(iVar2 + -0x14);
  return iVar2 + -0x20;
}



// Address: 4a082a78

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_4a082a78(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = thunk_FUN_4a070958(*(undefined4 *)(param_1 + 0x1c));
  if (iVar1 == 0) {
    return 2;
  }
  uVar2 = *(uint *)(*(int *)(param_1 + 0x1c) + 8);
  puVar6 = (uint *)(uVar2 + param_2 * 0x10 & 0xfffffffc);
  uVar2 = uVar2 & 3;
  host_s3eFileSeek_arm(iVar1,*puVar6 >> uVar2 * 8 | puVar6[1] << (uVar2 * -8 + 0x20 & 0xff),0);
  iVar3 = FUN_4a0836ac(param_1,param_2);
  *(int *)(param_1 + 0x10) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(short *)(param_1 + 0x2e) = (short)param_2;
    FUN_4a082b48(param_1,param_1 + 0x48,iVar1);
    puVar5 = (undefined1 *)(param_1 + 0x32b);
    iVar1 = 8;
    do {
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      iVar1 = iVar1 + -1;
      puVar5 = puVar5 + 4;
      *puVar5 = 0;
      uVar4 = DAT_4a082b44;
    } while (iVar1 != 0);
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x40) = uVar4;
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x4a082ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*UNRECOVERED_JUMPTABLE)();
  return uVar4;
}



// Address: 4a082b48

void FUN_4a082b48(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0xffffffff;
  param_2[4] = 0;
  param_2[5] = param_3;
  uVar1 = host_s3eFileGetChar_arm(param_3);
  param_2[1] = uVar1 & 0xff | param_2[1] << 8;
  uVar1 = host_s3eFileGetChar_arm(param_2[5]);
  param_2[1] = uVar1 & 0xff | param_2[1] << 8;
  uVar1 = host_s3eFileGetChar_arm(param_2[5]);
  param_2[1] = uVar1 & 0xff | param_2[1] << 8;
  uVar1 = host_s3eFileGetChar_arm(param_2[5]);
  param_2[1] = uVar1 & 0xff | param_2[1] << 8;
  return;
}



// Address: 4a082bd8

int FUN_4a082bd8(undefined4 param_1,uint *param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  uVar8 = param_2[1];
  uVar9 = *param_2;
  iVar5 = param_3[1];
  iVar2 = FUN_4a0066d8(param_2[2]);
  uVar3 = FUN_4a0066d8(uVar8 - uVar9,iVar2);
  uVar10 = param_3[0xb];
  iVar13 = *param_3;
  iVar12 = 0;
  if (param_3[4] != 0) {
    iVar12 = param_3[2];
  }
  uVar6 = 0;
  uVar4 = uVar3;
  if (uVar10 != 0) {
    do {
      puVar7 = (ushort *)(iVar13 + uVar6 * 2);
      uVar1 = *puVar7;
      if (uVar4 < uVar1) {
        uVar6 = uVar6 * 2 + 1;
        *puVar7 = uVar1 + (short)iVar12;
      }
      else {
        uVar4 = uVar4 - uVar1;
        uVar6 = uVar6 * 2 + 2;
      }
    } while (uVar6 < uVar10);
  }
  iVar11 = uVar6 - param_3[0xc];
  if (iVar11 < 0) {
    iVar11 = iVar11 + param_3[0xd];
  }
  uVar9 = (uVar3 - uVar4) * iVar2 + uVar9;
  puVar7 = (ushort *)(iVar13 + uVar6 * 2);
  uVar1 = *puVar7;
  uVar3 = (uint)uVar1 * iVar2;
  *puVar7 = uVar1 + (short)iVar12;
  uVar10 = iVar5 + iVar12;
  if ((uint)param_3[3] < uVar10) {
    uVar10 = FUN_4a0843a4(param_1,param_3,0);
  }
  param_3[1] = uVar10;
  param_3[5] = 1;
  do {
    if (0xffffff < (uVar9 + uVar3 ^ uVar9)) {
      if (0xffff < uVar3) {
        *param_2 = uVar9;
        param_2[1] = uVar8;
        param_2[2] = uVar3;
        return iVar11;
      }
      uVar3 = uVar9 * -0x10000 >> 0x10;
    }
    uVar10 = host_s3eFileGetChar_arm(param_2[5]);
    uVar8 = uVar10 & 0xff | uVar8 << 8;
    uVar3 = uVar3 << 8;
    uVar9 = uVar9 << 8;
  } while( true );
}



// Address: 4a082d18

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_4a082d18(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  iVar2 = thunk_FUN_4a070958(*(undefined4 *)(param_1 + 0x1c),*(undefined2 *)(param_1 + 0x2e));
  if (iVar2 == 0) {
    return 2;
  }
  iVar10 = *(int *)(param_1 + 0x3c);
  if (*(int *)(param_1 + 0x44) < iVar10) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    do {
      iVar3 = FUN_4a082bd8(param_1,param_1 + 0x48,param_1 + 0x7c);
      if (iVar3 < 0x100) {
        *(char *)(*(int *)(param_1 + 0x78) + *(int *)(param_1 + 0x44)) = (char)iVar3;
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
      }
      else {
        if (iVar3 + -0xfe < 0x103) {
          iVar3 = FUN_4a083360(param_1,param_1 + 0x48,param_1 + 0x7c,param_1 + 0x350);
          *(int *)(param_1 + 0x10) = iVar3;
        }
        else {
          if (iVar3 == 0x201) {
            *(undefined4 *)(param_1 + 0x34) = 2;
            return 0;
          }
          uVar9 = 0;
          uVar1 = 1 << (*(byte *)(param_1 + 0x29) - 1 & 0xff);
          uVar4 = iVar3 - 0x202;
          uVar8 = 0;
          iVar3 = 0;
          while ((uVar4 & uVar1) != 0) {
            uVar9 = uVar9 | (uVar4 & ~uVar1) << (uVar8 & 0xff);
            uVar8 = (uint)*(byte *)(param_1 + 0x29) + (uVar8 - 1);
            uVar4 = FUN_4a082bd8(param_1,param_1 + 0x48,*(int *)(param_1 + 0xe4) + iVar3 * 0x48);
            if (iVar3 + 1 < (int)(uint)*(byte *)(param_1 + 0x2a)) {
              iVar3 = iVar3 + 1;
            }
          }
          *(uint *)(param_1 + 0x14) = (uVar9 | uVar4 << (uVar8 & 0xff)) + 0xf;
          iVar3 = FUN_4a082bd8(param_1,param_1 + 0x48,param_1 + 0x134);
          iVar5 = FUN_4a082bd8(param_1,param_1 + 0x48,param_1 + 0xec);
          iVar7 = 0;
          uVar4 = 0;
          uVar1 = 1 << (*(byte *)(param_1 + 0x2b) - 1 & 0xff);
          uVar8 = 0;
          while (uVar9 = FUN_4a082bd8(param_1,param_1 + 0x48,*(int *)(param_1 + 0xe8) + iVar7 * 0x48
                                     ), (uVar9 & uVar1) != 0) {
            uVar4 = uVar4 | (uVar9 & ~uVar1) << (uVar8 & 0xff);
            uVar8 = (uint)*(byte *)(param_1 + 0x2b) + (uVar8 - 1);
            if (iVar7 + 1 < (int)(uint)*(byte *)(param_1 + 0x2c)) {
              iVar7 = iVar7 + 1;
            }
          }
          *(int *)(param_1 + 0x34c) = iVar3;
          iVar3 = *(int *)(param_1 + iVar3 * 4 + 0x32c);
          uVar4 = uVar4 | uVar9 << (uVar8 & 0xff);
          if (iVar5 != 0) {
            uVar4 = -(uVar4 + 1);
          }
          uVar6 = host_s3eFileTell_arm(iVar2);
          *(undefined4 *)(param_1 + 0x38) = uVar6;
          iVar3 = FUN_4a083090(param_1,iVar3 + (uVar4 - 3));
          *(int *)(param_1 + 0x10) = iVar3;
          if (iVar3 != 0) goto LAB_4a082f3c;
          iVar3 = FUN_4a083cd8(param_1);
          *(int *)(param_1 + 0x10) = iVar3;
        }
        if (iVar3 != 0) {
LAB_4a082f3c:
          return *(undefined4 *)(param_1 + 0x10);
        }
      }
    } while (*(int *)(param_1 + 0x44) < iVar10);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x44);
  }
  return 0;
}



// Address: 4a082f8c

bool FUN_4a082f8c(int param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  bVar4 = *(short *)(param_1 + 0x32) == -1;
  if (bVar4) {
    *(undefined2 *)(param_1 + 0x32) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x20);
  if (param_2 < *(int *)(iVar3 + (uint)*(ushort *)(param_1 + 0x32) * 4)) {
    do {
      bVar4 = true;
      uVar1 = *(short *)(param_1 + 0x30) - 1;
      *(ushort *)(param_1 + 0x30) = uVar1;
      if ((*(ushort *)((uint)uVar1 * 0x10 + 0xc + *(int *)(*(int *)(param_1 + 0x1c) + 8)) & 1) != 0)
      {
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -1;
      }
    } while (param_2 < *(int *)(iVar3 + (uint)*(ushort *)(param_1 + 0x32) * 4));
  }
  if (*(int *)(iVar3 + (uint)*(ushort *)(param_1 + 0x32) * 4 + 4) <= param_2) {
    do {
      bVar4 = true;
      uVar2 = *(ushort *)(param_1 + 0x30) + 1 & 0xfffeffff;
      *(short *)(param_1 + 0x30) = (short)uVar2;
      if ((*(ushort *)(uVar2 * 0x10 + 0xc + *(int *)(*(int *)(param_1 + 0x1c) + 8)) & 1) != 0) {
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 1;
      }
    } while (*(int *)(iVar3 + (uint)*(ushort *)(param_1 + 0x32) * 4 + 4) <= param_2);
  }
  return bVar4;
}



// Address: 4a083090

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_4a083090(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar2 = FUN_4a082f8c();
  uVar3 = thunk_FUN_4a070958(*(undefined4 *)(param_1 + 0x1c),*(undefined2 *)(param_1 + 0x30));
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 400) = 1;
    iVar2 = 0;
    if (*(char *)(param_1 + 0x28) != '\0') {
      do {
        bVar1 = *(byte *)(param_1 + 0x27);
        if (bVar1 != 0) {
          uVar7 = bVar1 & 3;
          puVar4 = (undefined4 *)(*(int *)(param_1 + iVar2 * 4 + 0x1c4) + -0x34);
          if ((bVar1 & 3) != 0) {
            do {
              uVar7 = uVar7 - 1;
              puVar4 = puVar4 + 0x12;
              *puVar4 = 1;
            } while (uVar7 != 0);
          }
          for (uVar7 = (uint)(*(byte *)(param_1 + 0x27) >> 2); uVar7 != 0; uVar7 = uVar7 - 1) {
            puVar4[0x12] = 1;
            puVar4[0x24] = 1;
            puVar4[0x36] = 1;
            puVar4 = puVar4 + 0x48;
            *puVar4 = 1;
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(uint)*(byte *)(param_1 + 0x28));
    }
  }
  if (*(int *)(param_1 + 0x370) == 0) {
    iVar2 = FUN_4a0839dc(param_1,*(undefined2 *)(param_1 + 0x30),0);
    *(int *)(param_1 + 0x10) = iVar2;
    if (iVar2 != 0) {
      return iVar2;
    }
    uVar7 = *(uint *)(*(int *)(param_1 + 0x1c) + 8);
    puVar5 = (uint *)(uVar7 + (uint)*(ushort *)(param_1 + 0x30) * 0x10 & 0xfffffffc);
    uVar7 = uVar7 & 3;
    host_s3eFileSeek_arm
              (uVar3,(param_2 -
                     *(int *)(*(int *)(param_1 + 0x20) + (uint)*(ushort *)(param_1 + 0x32) * 4)) +
                     (*puVar5 >> uVar7 * 8 | puVar5[1] << (uVar7 * -8 + 0x20 & 0xff)) +
                     *(int *)(param_1 + 0x370),0);
    puVar4 = (undefined4 *)0x0;
  }
  else {
    iVar2 = 0;
    do {
      uVar7 = *(uint *)(param_1 + iVar2 * 4 + 0x31c);
      if (uVar7 == 0xffffffff) {
        iVar8 = FUN_4a083900(param_1,param_1 + iVar2 * 0x68 + 0x1e4);
        *(int *)(param_1 + 0x10) = iVar8;
        if (iVar8 != 0) {
          return iVar8;
        }
        *(int *)(param_1 + 0x328) = iVar2;
        break;
      }
      if (uVar7 == *(ushort *)(param_1 + 0x30)) {
        uVar7 = *(uint *)(*(int *)(param_1 + 0x1c) + 8);
        puVar5 = (uint *)(uVar7 + (uint)*(ushort *)(param_1 + 0x30) * 0x10 & 0xfffffffc);
        uVar7 = uVar7 & 3;
        host_s3eFileSeek_arm
                  (uVar3,(param_2 -
                         *(int *)(*(int *)(param_1 + 0x20) + (uint)*(ushort *)(param_1 + 0x32) * 4))
                         + (*puVar5 >> uVar7 * 8 | puVar5[1] << (uVar7 * -8 + 0x20 & 0xff)) +
                           *(int *)(param_1 + 0x370),0);
        puVar4 = (undefined4 *)(param_1 + iVar2 * 0x68 + 0x1e4);
        goto FUN_4a0841dc;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    *(uint *)(param_1 + *(int *)(param_1 + 0x328) * 4 + 0x31c) = (uint)*(ushort *)(param_1 + 0x30);
    iVar8 = FUN_4a0839dc(param_1,*(undefined2 *)(param_1 + 0x30),
                         param_1 + *(int *)(param_1 + 0x328) * 0x68 + 0x1e4);
    *(int *)(param_1 + 0x10) = iVar8;
    if (iVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0832c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (*UNRECOVERED_JUMPTABLE)();
      return iVar2;
    }
    iVar8 = *(int *)(param_1 + 0x328) + 1;
    iVar6 = (int)((ulonglong)((longlong)DAT_4a08335c * (longlong)iVar8) >> 0x20);
    *(int *)(param_1 + 0x328) = iVar8 + (iVar6 - (iVar6 >> 0x1f)) * -3;
    uVar7 = *(uint *)(*(int *)(param_1 + 0x1c) + 8);
    puVar5 = (uint *)(uVar7 + (uint)*(ushort *)(param_1 + 0x30) * 0x10 & 0xfffffffc);
    uVar7 = uVar7 & 3;
    host_s3eFileSeek_arm
              (uVar3,(param_2 -
                     *(int *)(*(int *)(param_1 + 0x20) + (uint)*(ushort *)(param_1 + 0x32) * 4)) +
                     (*puVar5 >> uVar7 * 8 | puVar5[1] << (uVar7 * -8 + 0x20 & 0xff)) +
                     *(int *)(param_1 + 0x370),0);
    puVar4 = (undefined4 *)(param_1 + iVar2 * 0x68 + 0x1e4);
  }
FUN_4a0841dc:
  if (puVar4 == (undefined4 *)0x0) {
    return 3;
  }
  if (*(int *)(param_1 + 400) != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x17c);
    FUN_4a001134((undefined4 *)(param_1 + 0x17c),puVar4,0x48);
    *(undefined4 *)(param_1 + 0x17c) = uVar3;
    FUN_4a000f84(uVar3,*puVar4,(puVar4[0xd] * 2 + -1) * 2);
  }
  iVar2 = 0;
  if (*(char *)(param_1 + 0x28) != '\0') {
    do {
      iVar8 = 0;
      if (*(char *)(param_1 + 0x27) != '\0') {
        do {
          iVar6 = *(int *)(param_1 + iVar2 * 4 + 0x1c4);
          if (*(int *)(iVar6 + iVar8 * 0x48 + 0x14) != 0) {
            puVar9 = (undefined4 *)(iVar6 + iVar8 * 0x48);
            uVar3 = *puVar9;
            puVar10 = (undefined4 *)(puVar4[iVar2 + 0x12] + iVar8 * 0x48);
            FUN_4a001134(puVar9,puVar10,0x48);
            *puVar9 = uVar3;
            FUN_4a000f84(uVar3,*puVar10,(puVar10[0xd] * 2 + -1) * 2);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)(uint)*(byte *)(param_1 + 0x27));
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(byte *)(param_1 + 0x28));
  }
  return 0;
}



// Address: 4a083360

undefined4
FUN_4a083360(int param_1,undefined4 param_2,int param_3,int *param_4,int param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = 1 << (*(byte *)(param_1 + 0x26) - 1 & 0xff);
  iVar4 = 0;
  if (param_6 + -2 < (int)(uint)*(byte *)(param_1 + 0x28)) {
    param_6 = param_6 + -2;
  }
  else {
    param_6 = *(byte *)(param_1 + 0x28) - 1;
  }
  uVar6 = 0;
  uVar5 = 0;
  while (uVar1 = FUN_4a082bd8(param_1,param_2,*(int *)(param_3 + param_6 * 4 + 0x48) + iVar4 * 0x48)
        , (uVar1 & uVar7) != 0) {
    uVar6 = uVar6 | (uVar1 & ~uVar7) << (uVar5 & 0xff);
    uVar5 = (uint)*(byte *)(param_1 + 0x26) + (uVar5 - 1);
    if (iVar4 + 1 < (int)(uint)*(byte *)(param_1 + 0x27)) {
      iVar4 = iVar4 + 1;
    }
  }
  uVar6 = uVar6 | uVar1 << (uVar5 & 0xff);
  if ((int)uVar6 < 4) {
    iVar4 = *param_4;
    *param_4 = param_4[uVar6];
    param_4[uVar6] = iVar4;
    iVar4 = *param_4;
  }
  else {
    FUN_4a001198(param_4 + 1,param_4,0xc);
    iVar4 = uVar6 - 3;
    *param_4 = iVar4;
  }
  iVar3 = *(int *)(param_1 + 0x44);
  iVar2 = *(int *)(param_1 + 0x78);
  iVar8 = iVar3 - iVar4;
  if (iVar8 < 0) {
    if (param_5 + iVar8 < 1) {
      if (param_5 < 1) {
        uVar7 = 0;
      }
      else {
        uVar7 = ~(param_5 - 1U) & 1;
      }
      if (uVar7 == 1) {
        *(undefined1 *)(iVar2 + iVar3) =
             *(undefined1 *)(iVar2 + ((*(int *)(param_1 + 0x40) + iVar3) - iVar4));
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
      }
      uVar7 = (param_5 - 1U) - uVar7;
      if (-1 < (int)uVar7) {
        do {
          uVar7 = uVar7 - 2;
          *(undefined1 *)(iVar2 + *(int *)(param_1 + 0x44)) =
               *(undefined1 *)
                (iVar2 + ((*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x44)) - iVar4));
          iVar3 = *(int *)(param_1 + 0x44) + 1;
          *(int *)(param_1 + 0x44) = iVar3;
          *(undefined1 *)(iVar2 + iVar3) =
               *(undefined1 *)(iVar2 + ((*(int *)(param_1 + 0x40) + iVar3) - iVar4));
          *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
        } while (uVar7 < 0x80000000);
      }
    }
    else {
      iVar8 = iVar4 - iVar3;
      if (iVar8 < 1) {
        uVar7 = 0;
      }
      else {
        uVar7 = ~(iVar8 - 1U) & 1;
      }
      if (uVar7 == 1) {
        *(undefined1 *)(iVar2 + iVar3) =
             *(undefined1 *)(iVar2 + ((*(int *)(param_1 + 0x40) + iVar3) - iVar4));
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
      }
      uVar7 = (iVar8 - 1U) - uVar7;
      if (-1 < (int)uVar7) {
        do {
          uVar7 = uVar7 - 2;
          *(undefined1 *)(iVar2 + *(int *)(param_1 + 0x44)) =
               *(undefined1 *)
                (iVar2 + ((*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x44)) - iVar4));
          iVar3 = *(int *)(param_1 + 0x44) + 1;
          *(int *)(param_1 + 0x44) = iVar3;
          *(undefined1 *)(iVar2 + iVar3) =
               *(undefined1 *)(iVar2 + ((*(int *)(param_1 + 0x40) + iVar3) - iVar4));
          *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
        } while (uVar7 < 0x80000000);
      }
      uVar7 = (param_5 - iVar8) - 1;
      if (param_5 - iVar8 < 1) {
        uVar6 = 0;
      }
      else {
        uVar6 = ~uVar7 & 1;
      }
      if (uVar6 == 1) {
        *(undefined1 *)(iVar2 + *(int *)(param_1 + 0x44)) =
             *(undefined1 *)(iVar2 + (*(int *)(param_1 + 0x44) - iVar4));
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
      }
      uVar7 = uVar7 - uVar6;
      if (-1 < (int)uVar7) {
        do {
          uVar7 = uVar7 - 2;
          *(undefined1 *)(iVar2 + *(int *)(param_1 + 0x44)) =
               *(undefined1 *)(iVar2 + (*(int *)(param_1 + 0x44) - iVar4));
          iVar3 = *(int *)(param_1 + 0x44) + 1;
          *(int *)(param_1 + 0x44) = iVar3;
          *(undefined1 *)(iVar2 + iVar3) = *(undefined1 *)(iVar2 + (iVar3 - iVar4));
          *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
        } while (uVar7 < 0x80000000);
      }
    }
  }
  else {
    if (param_5 < 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = ~(param_5 - 1U) & 1;
    }
    if (uVar7 == 1) {
      *(undefined1 *)(iVar2 + iVar3) = *(undefined1 *)(iVar2 + iVar8);
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
    }
    uVar7 = (param_5 - 1U) - uVar7;
    if (-1 < (int)uVar7) {
      do {
        uVar7 = uVar7 - 2;
        *(undefined1 *)(iVar2 + *(int *)(param_1 + 0x44)) =
             *(undefined1 *)(iVar2 + (*(int *)(param_1 + 0x44) - iVar4));
        iVar3 = *(int *)(param_1 + 0x44) + 1;
        *(int *)(param_1 + 0x44) = iVar3;
        *(undefined1 *)(iVar2 + iVar3) = *(undefined1 *)(iVar2 + (iVar3 - iVar4));
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
      } while (uVar7 < 0x80000000);
    }
  }
  return 0;
}



// Address: 4a0836ac

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_4a0836ac(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar6;
  
  if ((*(byte *)(param_1 + 0x25) & 2) != 0) {
    return 3;
  }
  uVar1 = (uint)*(ushort *)(param_1 + 0x30);
  bVar6 = uVar1 != 0xffff;
  if (bVar6) {
    uVar1 = (uint)*(byte *)(param_1 + 0x29);
  }
  iVar5 = 0x202;
  if (bVar6) {
    iVar5 = (1 << (uVar1 & 0xff)) + 0x202;
  }
  iVar5 = FUN_4a084660(param_1,param_1 + 0x7c,iVar5,*(undefined4 *)(param_1 + 0x7c));
  *(int *)(param_1 + 0x10) = iVar5;
  if (iVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a08372c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE_00)();
    return uVar2;
  }
  iVar5 = 0;
  if (*(char *)(param_1 + 0x28) != '\0') {
    do {
      iVar4 = 0;
      if (*(char *)(param_1 + 0x27) != '\0') {
        do {
          iVar3 = *(int *)(param_1 + iVar5 * 4 + 0xc4);
          iVar3 = FUN_4a084660(param_1,iVar3 + iVar4 * 0x48,1 << *(sbyte *)(param_1 + 0x26),
                               *(undefined4 *)(iVar3 + iVar4 * 0x48));
          *(int *)(param_1 + 0x10) = iVar3;
          if (iVar3 != 0) goto LAB_4a083868;
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)(uint)*(byte *)(param_1 + 0x27));
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(uint)*(byte *)(param_1 + 0x28));
  }
  iVar5 = 0;
  if (*(char *)(param_1 + 0x2c) != '\0') {
    do {
      iVar4 = FUN_4a084660(param_1,*(int *)(param_1 + 0xe8) + iVar5 * 0x48,
                           1 << *(sbyte *)(param_1 + 0x2b),
                           *(undefined4 *)(*(int *)(param_1 + 0xe8) + iVar5 * 0x48));
      *(int *)(param_1 + 0x10) = iVar4;
      if (iVar4 != 0) goto LAB_4a083868;
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(uint)*(byte *)(param_1 + 0x2c));
  }
  iVar5 = 0;
  if (*(char *)(param_1 + 0x2a) != '\0') {
    do {
      iVar4 = FUN_4a084660(param_1,*(int *)(param_1 + 0xe4) + iVar5 * 0x48,
                           1 << *(sbyte *)(param_1 + 0x29),
                           *(undefined4 *)(*(int *)(param_1 + 0xe4) + iVar5 * 0x48));
      *(int *)(param_1 + 0x10) = iVar4;
      if (iVar4 != 0) {
LAB_4a083868:
        return *(undefined4 *)(param_1 + 0x10);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(uint)*(byte *)(param_1 + 0x2a));
  }
  iVar5 = FUN_4a084660(param_1,param_1 + 0xec,2,*(undefined4 *)(param_1 + 0xec));
  *(int *)(param_1 + 0x10) = iVar5;
  if (iVar5 == 0) {
    uVar2 = FUN_4a084660(param_1,param_1 + 0x134,8,*(undefined4 *)(param_1 + 0x134));
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    return uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x4a0838c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE_00)();
  return uVar2;
}



// Address: 4a083900

undefined4 FUN_4a083900(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = thunk_FUN_4a00dbc4(0x806);
  *param_2 = uVar1;
  iVar3 = 0;
  if (*(char *)(param_1 + 0x28) != '\0') {
    do {
      uVar1 = thunk_FUN_4a00dbc4((uint)*(byte *)(param_1 + 0x27) * 0x48);
      param_2[iVar3 + 0x12] = uVar1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(byte *)(param_1 + 0x28));
  }
  iVar3 = 0;
  if (*(char *)(param_1 + 0x28) != '\0') {
    do {
      iVar4 = 0;
      if (*(char *)(param_1 + 0x27) != '\0') {
        do {
          iVar2 = thunk_FUN_4a00dbc4(((1 << *(sbyte *)(param_1 + 0x26)) * 2 + -1) * 2);
          *(int *)(param_2[iVar3 + 0x12] + iVar4 * 0x48) = iVar2;
          if (iVar2 == 0) {
            return 1;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)(uint)*(byte *)(param_1 + 0x27));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(byte *)(param_1 + 0x28));
  }
  return 0;
}



// Address: 4a0839dc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_4a0839dc(int param_1,int param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  uint *puVar10;
  ushort *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  byte *pbVar9;
  
  iVar5 = thunk_FUN_4a070958(*(undefined4 *)(param_1 + 0x1c));
  if (iVar5 != 0) {
    uVar6 = *(uint *)(*(int *)(param_1 + 0x1c) + 8);
    iVar14 = 0x202;
    puVar10 = (uint *)(uVar6 + param_2 * 0x10 & 0xfffffffc);
    uVar6 = uVar6 & 3;
    host_s3eFileSeek_arm(iVar5,*puVar10 >> uVar6 * 8 | puVar10[1] << (uVar6 * -8 + 0x20 & 0xff),0);
    if (*(int *)(param_1 + 0x370) == 0) {
      return 0;
    }
    iVar7 = thunk_FUN_4a00dbc4();
    if (iVar7 == 0) {
      thunk_FUN_4a008004(s_out_of_memory___4a083c58);
      iVar5 = host_s3eDebugIsDebuggerPresent_arm();
      if (iVar5 != 0) {
        _DAT_fffffff4 = 0;
      }
      return 1;
    }
    iVar5 = host_s3eFileRead_arm(iVar7,*(undefined4 *)(param_1 + 0x370),1,iVar5);
    if (iVar5 == 1) {
      iVar5 = 2;
      puVar11 = (ushort *)(*param_3 + -2);
      pbVar8 = (byte *)(iVar7 + -1);
      do {
        pbVar9 = pbVar8;
        pbVar8 = pbVar9 + 1;
        iVar5 = iVar5 + -1;
        puVar11 = puVar11 + 1;
        *puVar11 = (ushort)*pbVar8;
      } while (iVar5 != 0);
      bVar1 = pbVar9[2];
      bVar2 = pbVar9[3];
      iVar5 = 0x80;
      do {
        bVar3 = pbVar8[3];
        puVar11[1] = (ushort)bVar1;
        bVar4 = pbVar8[4];
        puVar11[2] = (ushort)bVar2;
        bVar1 = pbVar8[5];
        puVar11[3] = (ushort)bVar3;
        bVar2 = pbVar8[6];
        iVar5 = iVar5 + -1;
        puVar11 = puVar11 + 4;
        *puVar11 = (ushort)bVar4;
        pbVar8 = pbVar8 + 4;
      } while (iVar5 != 0);
      FUN_4a084660(param_1,param_3,0x202,*param_3);
      if (*(char *)(param_1 + 0x28) != '\0') {
        iVar5 = 0;
        do {
          iVar13 = 0;
          if (*(char *)(param_1 + 0x27) != '\0') {
            do {
              uVar6 = 1 << *(sbyte *)(param_1 + 0x26);
              if (0 < (int)uVar6) {
                pbVar8 = (byte *)(iVar7 + iVar14 + -1);
                puVar11 = (ushort *)(*(int *)(param_3[iVar5 + 0x12] + iVar13 * 0x48) + -2);
                for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                  pbVar8 = pbVar8 + 1;
                  puVar11 = puVar11 + 1;
                  *puVar11 = (ushort)*pbVar8;
                }
                bVar1 = pbVar8[1];
                bVar2 = pbVar8[2];
                for (iVar12 = (1 << *(sbyte *)(param_1 + 0x26)) >> 2; iVar12 != 0;
                    iVar12 = iVar12 + -1) {
                  bVar3 = pbVar8[3];
                  puVar11[1] = (ushort)bVar1;
                  bVar4 = pbVar8[4];
                  puVar11[2] = (ushort)bVar2;
                  bVar1 = pbVar8[5];
                  puVar11[3] = (ushort)bVar3;
                  bVar2 = pbVar8[6];
                  puVar11 = puVar11 + 4;
                  *puVar11 = (ushort)bVar4;
                  pbVar8 = pbVar8 + 4;
                }
                iVar14 = iVar14 + (1 << *(sbyte *)(param_1 + 0x26));
              }
              FUN_4a084660(param_1,param_3[iVar5 + 0x12] + iVar13 * 0x48,
                           1 << *(sbyte *)(param_1 + 0x26),
                           *(undefined4 *)(param_3[iVar5 + 0x12] + iVar13 * 0x48));
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)(uint)*(byte *)(param_1 + 0x27));
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)(uint)*(byte *)(param_1 + 0x28));
      }
      thunk_FUN_4a05a298(iVar7);
      return 0;
    }
  }
  return 2;
}



// Address: 4a083c68

uint FUN_4a083c68(undefined4 param_1,int *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 < (uint)param_2[0xb]) {
    iVar1 = FUN_4a083c68(param_1,param_2,param_3 * 2 + 1);
    iVar2 = FUN_4a083c68(param_1,param_2,param_3 * 2 + 2);
    *(short *)(*param_2 + param_3 * 2) = (short)iVar1;
    return iVar2 + iVar1;
  }
  return (uint)*(ushort *)(*param_2 + param_3 * 2);
}



// Address: 4a083cd8

undefined4 FUN_4a083cd8(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  
  uVar2 = thunk_FUN_4a070958(*(undefined4 *)(param_1 + 0x1c),*(undefined2 *)(param_1 + 0x30));
  iVar7 = *(int *)(param_1 + 0x3c);
  if (*(int *)(param_1 + 0x34) != 1) {
    FUN_4a082b48(param_1,param_1 + 0x60,uVar2);
    *(undefined4 *)(param_1 + 0x34) = 1;
  }
  do {
    iVar3 = FUN_4a082bd8(param_1,param_1 + 0x60,param_1 + 0x17c);
    if (iVar3 < 0x100) {
      *(char *)(*(int *)(param_1 + 0x78) + *(int *)(param_1 + 0x44)) = (char)iVar3;
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
      iVar3 = *(int *)(param_1 + 0x14) + -1;
LAB_4a083dbc:
      *(int *)(param_1 + 0x14) = iVar3;
    }
    else {
      iVar6 = iVar3 + -0xfe;
      if (iVar6 < 0x103) {
        iVar3 = *(int *)(param_1 + 0x14);
        if (iVar6 <= *(int *)(param_1 + 0x14)) {
          iVar3 = iVar6;
        }
        iVar6 = FUN_4a083360(param_1,param_1 + 0x60,param_1 + 0x17c,param_1 + 0x360,iVar3,iVar6);
        *(int *)(param_1 + 0x10) = iVar6;
        if (iVar6 != 0) {
          return *(undefined4 *)(param_1 + 0x10);
        }
        iVar3 = *(int *)(param_1 + 0x14) - iVar3;
        goto LAB_4a083dbc;
      }
      if (iVar3 == 0x201) {
        uVar10 = *(uint *)(param_1 + 0x60);
        uVar9 = uVar10 + (*(uint *)(param_1 + 0x68) >> 1);
        uVar8 = (*(uint *)(param_1 + 0x68) + uVar10) - 1;
        uVar4 = uVar9 & 0xff000000;
        bVar12 = uVar4 != (uVar10 & 0xff000000);
        bVar13 = uVar4 != (uVar8 & 0xff000000);
        bVar1 = !bVar12 || !bVar13;
        uVar4 = 0xff000000;
        iVar3 = -3;
        while (bVar1) {
          uVar4 = uVar4 >> 8;
          uVar11 = uVar9 & uVar4;
          bVar12 = (bool)(bVar12 | uVar11 != (uVar10 & uVar4));
          bVar13 = (bool)(bVar13 | uVar11 != (uVar8 & uVar4));
          bVar1 = !(bool)(bVar12 & bVar13);
          iVar3 = iVar3 + 1;
        }
        host_s3eFileSeek_arm(*(undefined4 *)(param_1 + 0x74),iVar3,1);
        FUN_4a082b48(param_1,param_1 + 0x60,uVar2);
        uVar4 = (uint)*(ushort *)(param_1 + 0x30);
        if (*(uint *)(param_1 + 0x31c) == uVar4) {
          FUN_4a0841dc(param_1,param_1 + 0x1e4);
        }
        else if (*(uint *)(param_1 + 800) == uVar4) {
          FUN_4a0841dc(param_1,param_1 + 0x24c);
        }
        else if (*(uint *)(param_1 + 0x324) == uVar4) {
          FUN_4a0841dc(param_1,param_1 + 0x2b4);
        }
      }
    }
    if (iVar7 <= *(int *)(param_1 + 0x44)) {
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x44);
        return 0;
      }
      goto LAB_4a083ed8;
    }
    if (*(int *)(param_1 + 0x14) == 0) {
LAB_4a083ed8:
      *(undefined4 *)(param_1 + 0x34) = 0;
      iVar7 = host_s3eFileTell_arm(uVar2);
      uVar4 = *(uint *)(*(int *)(param_1 + 0x1c) + 8);
      puVar5 = (uint *)(uVar4 + (uint)*(ushort *)(param_1 + 0x30) * 0x10 & 0xfffffffc);
      uVar4 = uVar4 & 3;
      *(uint *)(param_1 + *(int *)(param_1 + 0x34c) * 4 + 0x32c) =
           ((*(int *)(*(int *)(param_1 + 0x20) + (uint)*(ushort *)(param_1 + 0x32) * 4) + iVar7) -
           (*puVar5 >> uVar4 * 8 | puVar5[1] << (uVar4 * -8 + 0x20 & 0xff))) -
           *(int *)(param_1 + 0x370);
      host_s3eFileSeek_arm(uVar2,*(undefined4 *)(param_1 + 0x38),0);
      return 0;
    }
  } while( true );
}



// Address: 4a083f5c

undefined4 FUN_4a083f5c(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  thunk_FUN_4a05a298(*param_2);
  iVar2 = 0;
  if (*(char *)(param_1 + 0x28) != '\0') {
    do {
      iVar1 = 0;
      if (*(char *)(param_1 + 0x27) != '\0') {
        do {
          thunk_FUN_4a05a298(*(undefined4 *)(param_2[iVar2 + 0x12] + iVar1 * 0x48));
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)(uint)*(byte *)(param_1 + 0x27));
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(byte *)(param_1 + 0x28));
  }
  iVar2 = 0;
  if (*(char *)(param_1 + 0x28) != '\0') {
    do {
      thunk_FUN_4a05a298(param_2[iVar2 + 0x12]);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(byte *)(param_1 + 0x28));
  }
  return 0;
}



// Address: 4a083ffc

undefined4 FUN_4a083ffc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = 0x202;
  if (*(short *)(param_1 + 0x30) != -1) {
    iVar1 = (1 << *(sbyte *)(param_1 + 0x29)) + 0x202;
  }
  uVar2 = thunk_FUN_4a00dbc4((iVar1 * 2 + -1) * 2);
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  iVar1 = 0;
  if (*(char *)(param_1 + 0x28) != '\0') {
    do {
      iVar3 = thunk_FUN_4a00dbc4((uint)*(byte *)(param_1 + 0x27) * 0x48);
      *(int *)(param_1 + iVar1 * 4 + 0xc4) = iVar3;
      if (iVar3 == 0) {
        return 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)*(byte *)(param_1 + 0x28));
  }
  iVar1 = 0;
  if (*(char *)(param_1 + 0x28) != '\0') {
    do {
      iVar3 = 0;
      if (*(char *)(param_1 + 0x27) != '\0') {
        do {
          uVar2 = thunk_FUN_4a00dbc4(((1 << *(sbyte *)(param_1 + 0x26)) * 2 + -1) * 2);
          *(undefined4 *)(*(int *)(param_1 + iVar1 * 4 + 0xc4) + iVar3 * 0x48) = uVar2;
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)(uint)*(byte *)(param_1 + 0x27));
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)*(byte *)(param_1 + 0x28));
  }
  uVar2 = thunk_FUN_4a00dbc4((uint)*(byte *)(param_1 + 0x2a) * 0x48);
  *(undefined4 *)(param_1 + 0xe4) = uVar2;
  iVar1 = 0;
  if (*(char *)(param_1 + 0x2a) != '\0') {
    do {
      iVar3 = thunk_FUN_4a00dbc4(((1 << *(sbyte *)(param_1 + 0x29)) * 2 + -1) * 2);
      *(int *)(*(int *)(param_1 + 0xe4) + iVar1 * 0x48) = iVar3;
      if (iVar3 == 0) {
        return 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)*(byte *)(param_1 + 0x2a));
  }
  uVar2 = thunk_FUN_4a00dbc4((uint)*(byte *)(param_1 + 0x2c) * 0x48);
  *(undefined4 *)(param_1 + 0xe8) = uVar2;
  iVar1 = 0;
  if (*(char *)(param_1 + 0x2c) != '\0') {
    do {
      iVar3 = thunk_FUN_4a00dbc4(((1 << *(sbyte *)(param_1 + 0x2b)) * 2 + -1) * 2);
      *(int *)(*(int *)(param_1 + 0xe8) + iVar1 * 0x48) = iVar3;
      if (iVar3 == 0) {
        return 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)*(byte *)(param_1 + 0x2c));
  }
  uVar2 = thunk_FUN_4a00dbc4(6);
  *(undefined4 *)(param_1 + 0xec) = uVar2;
  uVar2 = thunk_FUN_4a00dbc4(0x1e);
  *(undefined4 *)(param_1 + 0x134) = uVar2;
  uVar2 = FUN_4a083900(param_1,param_1 + 0x17c);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  return uVar2;
}



// Address: 4a0841dc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_4a0841dc(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if (param_2 != (undefined4 *)0x0) {
    if (*(int *)(param_1 + 400) != 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x17c);
      FUN_4a001134((undefined4 *)(param_1 + 0x17c),param_2,0x48);
      *(undefined4 *)(param_1 + 0x17c) = uVar3;
      FUN_4a000f84(uVar3,*param_2,(param_2[0xd] * 2 + -1) * 2);
    }
    iVar6 = 0;
    if (*(char *)(param_1 + 0x28) != '\0') {
      do {
        iVar2 = 0;
        if (*(char *)(param_1 + 0x27) != '\0') {
          do {
            iVar1 = *(int *)(param_1 + iVar6 * 4 + 0x1c4);
            if (*(int *)(iVar1 + iVar2 * 0x48 + 0x14) != 0) {
              puVar4 = (undefined4 *)(iVar1 + iVar2 * 0x48);
              uVar3 = *puVar4;
              puVar5 = (undefined4 *)(param_2[iVar6 + 0x12] + iVar2 * 0x48);
              FUN_4a001134(puVar4,puVar5,0x48);
              *puVar4 = uVar3;
              FUN_4a000f84(uVar3,*puVar5,(puVar5[0xd] * 2 + -1) * 2);
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < (int)(uint)*(byte *)(param_1 + 0x27));
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)(uint)*(byte *)(param_1 + 0x28));
    }
    return 0;
  }
  return 3;
}



// Address: 4a084300

int FUN_4a084300(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    iVar1 = FUN_4a082d18(param_1);
    *(int *)(param_1 + 0x10) = iVar1;
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  else {
    if (*(int *)(param_1 + 0x34) != 1) {
      *param_3 = 0;
      *param_2 = *(undefined4 *)(param_1 + 0x78);
      return 0;
    }
    iVar1 = FUN_4a083cd8(param_1);
    *(int *)(param_1 + 0x10) = iVar1;
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_4a082d18(param_1);
    *(int *)(param_1 + 0x10) = iVar1;
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  *param_2 = *(undefined4 *)(param_1 + 0x78);
  *param_3 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x44) = 0;
  return 0;
}



// Address: 4a0843a4

uint FUN_4a0843a4(undefined4 param_1,int *param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  
  if ((uint)param_2[0xb] <= param_3) {
    puVar4 = (ushort *)(*param_2 + param_3 * 2);
    uVar1 = *puVar4;
    uVar1 = uVar1 - (uVar1 >> 1);
    *puVar4 = uVar1;
    return (uint)uVar1;
  }
  iVar2 = FUN_4a0843a4(param_1,param_2,param_3 * 2 + 1);
  iVar3 = FUN_4a0843a4(param_1,param_2,param_3 * 2 + 2);
  *(short *)(*param_2 + param_3 * 2) = (short)iVar2;
  return iVar3 + iVar2;
}



// Address: 4a084428

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a084428(int param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar7;
  bool bVar8;
  
  *(int *)(param_1 + 0x1c) = param_2;
  iVar2 = host_s3eFileRead_arm(param_1 + 0x24,10,1,param_3);
  if (iVar2 != 1) {
    return;
  }
  uVar4 = (uint)*(byte *)(param_1 + 0x24);
  bVar8 = 0x1d < uVar4;
  bVar7 = uVar4 == 0x1e;
  if (uVar4 < 0x1f) {
    bVar8 = 2 < *(byte *)(param_1 + 0x25);
    bVar7 = *(byte *)(param_1 + 0x25) == 3;
  }
  if (!bVar8 || bVar7) {
    bVar8 = 7 < *(byte *)(param_1 + 0x28);
    bVar7 = *(byte *)(param_1 + 0x28) == 8;
  }
  if (!bVar8 || bVar7) {
    iVar2 = 0;
  }
  else {
    iVar2 = 3;
  }
  *(int *)(param_1 + 0x10) = iVar2;
  if (iVar2 != 0) {
    return;
  }
  iVar2 = 1 << uVar4;
  if (1 << uVar4 < param_4) {
    iVar2 = param_4;
  }
  *(int *)(param_1 + 0x3c) = param_4;
  *(int *)(param_1 + 0x3c) = iVar2;
  iVar2 = thunk_FUN_4a00dbc4(iVar2 + 0x102);
  *(int *)(param_1 + 0x78) = iVar2;
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0844c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(1);
    return;
  }
  iVar2 = 0;
  uVar4 = 0;
  if (*(ushort *)(param_2 + 2) != 0) {
    do {
      iVar6 = uVar4 * 0x10;
      uVar4 = uVar4 + 1 & 0xfffeffff;
      if ((*(ushort *)(iVar6 + 0xc + *(int *)(param_2 + 8)) & 1) != 0) {
        iVar2 = iVar2 + 1;
      }
    } while (uVar4 < *(ushort *)(param_2 + 2));
  }
  if ((*(byte *)(param_1 + 0x25) & 1) == 0) {
    *(undefined4 *)(param_1 + 0x370) = 0;
  }
  else {
    *(uint *)(param_1 + 0x370) =
         ((uint)*(byte *)(param_1 + 0x27) << *(sbyte *)(param_1 + 0x26)) *
         (uint)*(byte *)(param_1 + 0x28) + 0x202;
  }
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x29) = 0;
    *(undefined1 *)(param_1 + 0x2b) = 0;
    *(undefined2 *)(param_1 + 0x30) = 0xffff;
  }
  else {
    uVar3 = thunk_FUN_4a00dbc4((iVar2 + 1) * 4);
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    *(undefined2 *)(param_1 + 0x30) = 0;
    iVar2 = 0;
    iVar6 = 0;
    uVar4 = 0;
    if (*(short *)(param_2 + 2) != 0) {
      do {
        if ((*(byte *)(*(int *)(param_2 + 8) + (uVar4 & 0xffff) * 0x10 + 0xc) & 1) != 0) {
          if (*(short *)(param_1 + 0x30) == 0) {
            *(short *)(param_1 + 0x30) = (short)uVar4;
          }
          *(int *)(*(int *)(param_1 + 0x20) + iVar2 * 4) = iVar6;
          iVar2 = iVar2 + 1;
          puVar5 = (uint *)((uVar4 & 0xffff) * 0x10 + 4 + *(uint *)(param_2 + 8) & 0xfffffffc);
          uVar1 = *(uint *)(param_2 + 8) & 3;
          iVar6 = ((*puVar5 >> uVar1 * 8 | puVar5[1] << (uVar1 * -8 + 0x20 & 0xff)) + iVar6) -
                  *(int *)(param_1 + 0x370);
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)(uint)*(ushort *)(param_2 + 2));
    }
    *(int *)(*(int *)(param_1 + 0x20) + iVar2 * 4) = iVar6;
  }
  *(undefined2 *)(param_1 + 0x32) = 0xffff;
  *(undefined4 *)(param_1 + 0x31c) = 0xffffffff;
  *(undefined4 *)(param_1 + 800) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x324) = 0xffffffff;
  iVar2 = FUN_4a083ffc(param_1);
  *(int *)(param_1 + 0x10) = iVar2;
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return;
}



// Address: 4a084660

undefined4
FUN_4a084660(undefined4 param_1,int *param_2,uint param_3,ushort *param_4,ushort *param_5,
            int param_6,int param_7,int param_8)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  param_2[3] = param_7;
  param_2[4] = param_8;
  param_2[1] = 0;
  param_2[2] = param_6;
  param_2[0xd] = param_3;
  *param_2 = (int)param_4;
  param_2[5] = 0;
  if (param_5 == (ushort *)0x0) {
    if (param_3 != 0) {
      uVar2 = param_3 & 1;
      if (uVar2 == 1) {
        *param_4 = 1;
        param_2[1] = param_2[1] + 1;
      }
      for (; uVar2 < param_3; uVar2 = uVar2 + 2) {
        param_4[uVar2] = 1;
        param_2[1] = param_2[1] + 1;
        (param_4 + uVar2)[1] = 1;
        param_2[1] = param_2[1] + 1;
      }
    }
  }
  else if (param_3 != 0) {
    uVar2 = param_3 & 1;
    if (uVar2 == 1) {
      uVar1 = *param_5;
      *param_4 = uVar1;
      param_2[1] = (uint)uVar1 + param_2[1];
    }
    for (; uVar2 < param_3; uVar2 = uVar2 + 2) {
      uVar1 = param_5[uVar2];
      param_4[uVar2] = uVar1;
      param_2[1] = (uint)uVar1 + param_2[1];
      uVar1 = (param_5 + uVar2)[1];
      (param_4 + uVar2)[1] = uVar1;
      param_2[1] = param_2[1] + (uint)uVar1;
    }
  }
  uVar2 = param_3 * 2 - 1;
  iVar4 = uVar2 - param_3;
  iVar3 = 0;
  if (1 < uVar2) {
    do {
      iVar3 = iVar3 * 2 + 1;
    } while (iVar3 * 2 + 1U < uVar2);
  }
  param_2[0xc] = iVar3;
  iVar5 = param_3 - (iVar3 - iVar4);
  FUN_4a00105c(*param_2 + iVar3 * 2,param_4,iVar5 * 2);
  FUN_4a00105c(*param_2 + iVar4 * 2,param_4 + iVar5,(iVar3 - iVar4) * 2);
  param_2[0xb] = iVar4;
  uVar2 = FUN_4a083c68(param_1,param_2,0);
  if (uVar2 == param_2[1]) {
    uVar2 = param_2[3];
    if ((uint)param_2[3] < 0x10001) {
      uVar2 = param_2[1];
    }
    if (uVar2 < 0x10001) {
      return 0;
    }
  }
  return 5;
}



// Address: 4a084818

void FUN_4a084818(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  *param_1 = PTR_LAB_4a084848;
  param_1[2] = PTR_DAT_4a08484c;
  param_1[1] = PTR_LAB_4a084850;
  param_1[3] = PTR_LAB_4a084854;
  return;
}



// Address: 4a08485c

int FUN_4a08485c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    thunk_FUN_4a05a298(*(undefined4 *)(param_1 + 0x20));
    thunk_FUN_4a05a298(*(undefined4 *)(param_1 + 0x78));
    FUN_4a083f5c(param_1,param_1 + 0x7c);
    iVar2 = 0;
    if (*(char *)(param_1 + 0x2a) != '\0') {
      do {
        thunk_FUN_4a05a298(*(undefined4 *)(*(int *)(param_1 + 0xe4) + iVar2 * 0x48));
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(uint)*(byte *)(param_1 + 0x2a));
    }
    thunk_FUN_4a05a298(*(undefined4 *)(param_1 + 0xe4));
    iVar2 = 0;
    if (*(char *)(param_1 + 0x2c) != '\0') {
      do {
        thunk_FUN_4a05a298(*(undefined4 *)(*(int *)(param_1 + 0xe8) + iVar2 * 0x48));
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(uint)*(byte *)(param_1 + 0x2c));
    }
    thunk_FUN_4a05a298(*(undefined4 *)(param_1 + 0xe8));
    thunk_FUN_4a05a298(*(undefined4 *)(param_1 + 0xec));
    thunk_FUN_4a05a298(*(undefined4 *)(param_1 + 0x134));
    FUN_4a083f5c(param_1,param_1 + 0x17c);
    iVar2 = 0;
    do {
      if (*(int *)(param_1 + iVar2 * 4 + 0x31c) != -1) {
        iVar1 = param_1 + iVar2 * 0x68;
        iVar4 = iVar1 + 0x1e4;
        thunk_FUN_4a05a298(*(undefined4 *)(iVar1 + 0x1e4));
        iVar1 = 0;
        if (*(char *)(param_1 + 0x28) != '\0') {
          do {
            iVar3 = 0;
            if (*(char *)(param_1 + 0x27) != '\0') {
              do {
                thunk_FUN_4a05a298(*(undefined4 *)
                                    (*(int *)(iVar4 + iVar1 * 4 + 0x48) + iVar3 * 0x48));
                iVar3 = iVar3 + 1;
              } while (iVar3 < (int)(uint)*(byte *)(param_1 + 0x27));
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < (int)(uint)*(byte *)(param_1 + 0x28));
        }
        iVar1 = 0;
        if (*(char *)(param_1 + 0x28) != '\0') {
          do {
            thunk_FUN_4a05a298(*(undefined4 *)(iVar4 + iVar1 * 4 + 0x48));
            iVar1 = iVar1 + 1;
          } while (iVar1 < (int)(uint)*(byte *)(param_1 + 0x28));
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
  }
  return param_1;
}



// Address: 4a0849e0

void FUN_4a0849e0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_28 [20];
  
  iVar1 = FUN_4a16b934(auStack_28,*(undefined4 *)(param_1 + 0x54));
  uVar3 = *(undefined4 *)(iVar1 + 8);
  piVar2 = *(int **)(iVar1 + 0xc);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))(piVar2);
  }
  (**(code **)(*(int *)(param_1 + 0x18) + 0x1c))((int *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(int **)(param_1 + 0x24) = piVar2;
  FUN_4a16ba04(auStack_28);
  iVar1 = FUN_4a16b934(auStack_28,*(undefined4 *)(param_1 + 0x54));
  uVar3 = *(undefined4 *)(iVar1 + 8);
  piVar2 = *(int **)(iVar1 + 0xc);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))(piVar2);
  }
  (**(code **)(*(int *)(param_1 + 0x2c) + 0x1c))((int *)(param_1 + 0x2c));
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  *(int **)(param_1 + 0x38) = piVar2;
  FUN_4a16ba04(auStack_28);
  iVar1 = FUN_4a16b934(auStack_28,*(undefined4 *)(param_1 + 0x58));
  uVar3 = *(undefined4 *)(iVar1 + 8);
  piVar2 = *(int **)(iVar1 + 0xc);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))(piVar2);
  }
  (**(code **)(*(int *)(param_1 + 4) + 0x1c))((int *)(param_1 + 4));
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  *(int **)(param_1 + 0x10) = piVar2;
  FUN_4a16ba04(auStack_28);
  iVar1 = FUN_4a16b934(auStack_28,*(undefined4 *)(param_1 + 0x58));
  uVar3 = *(undefined4 *)(iVar1 + 8);
  piVar2 = *(int **)(iVar1 + 0xc);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))(piVar2);
  }
  (**(code **)(*(int *)(param_1 + 0x40) + 0x1c))((int *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  *(int **)(param_1 + 0x4c) = piVar2;
  FUN_4a16ba04(auStack_28);
  return;
}



// Address: 4a084b58

undefined4 FUN_4a084b58(int param_1)

{
  return *(undefined4 *)(param_1 + 0x70);
}



// Address: 4a084b60

void FUN_4a084b60(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x54)) {
    do {
      if (*(int *)(param_1 + 0x38) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(param_1 + 0x38) + 8);
      }
      *(undefined4 *)(iVar2 + iVar1 * 4) = param_2;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x54));
  }
  if (0 < *(int *)(param_1 + 0x58)) {
    iVar1 = 0;
    do {
      if (*(int *)(param_1 + 0x4c) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(param_1 + 0x4c) + 8);
      }
      *(undefined4 *)(iVar2 + iVar1 * 4) = param_2;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x58));
  }
  *(undefined4 *)(param_1 + 0x70) = param_2;
  *(undefined4 *)(param_1 + 0x68) = param_2;
  *(undefined4 *)(param_1 + 100) = param_2;
  return;
}



// Address: 4a084bdc

void FUN_4a084bdc(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x70) = param_2;
  return;
}



// Address: 4a084be4

/* WARNING: Removing unreachable block (ram,0x4a1729d8) */
/* WARNING: Removing unreachable block (ram,0x4a1729ec) */
/* WARNING: Removing unreachable block (ram,0x4a1728bc) */
/* WARNING: Removing unreachable block (ram,0x4a1728ac) */
/* WARNING: Removing unreachable block (ram,0x4a1729e0) */
/* WARNING: Removing unreachable block (ram,0x4a17289c) */

ulonglong FUN_4a084be4(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  
  uVar1 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x6c));
  uVar1 = FUN_4a17211c(uVar1,DAT_4a084c30);
  uVar2 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x68),uVar1);
  uVar1 = FUN_4a1725c0(0x3f800000,uVar1);
  uVar3 = FUN_4a17211c(uVar1,*(undefined4 *)(param_1 + 100));
  if ((int)(uVar3 ^ uVar2) < 0) {
    uVar2 = uVar2 ^ 0x80000000;
    if (uVar3 < uVar2) {
      uVar5 = uVar3 - uVar2 ^ 0x80000000;
      uVar3 = uVar3 - uVar5;
      uVar2 = uVar2 + uVar5;
    }
    uVar5 = uVar3 >> 0x17;
    uVar7 = uVar5 - (uVar2 >> 0x17);
    if ((uVar2 & 0x7f800000) != 0 && (uVar5 & 0xff) != 0xff) {
      uVar4 = uVar3 << 8 | 0x80000000;
      uVar2 = uVar2 << 8;
      uVar8 = uVar4 - ((uVar2 | 0x80000000) >> (uVar7 & 0xff));
      if ((int)uVar8 < 0) {
        bVar10 = (bool)((byte)(uVar8 >> 7) & 1);
        uVar3 = (uVar8 >> 8) + (uVar5 - 1) * 0x800000 + (uint)bVar10;
        if (!bVar10) {
          return CONCAT44(uVar2,uVar3) | 0x8000000000000000;
        }
        if ((uVar8 & 0x7f) != 0) {
          return CONCAT44(uVar2,uVar3) | 0x8000000000000000;
        }
      }
      else {
        bVar9 = (uVar5 & 0xfe) == 0;
        bVar10 = false;
        if (!bVar9) {
          uVar4 = uVar8 * 2;
          bVar10 = (int)uVar4 < 0;
          bVar9 = uVar4 == 0;
        }
        if (!bVar10) {
          if (bVar9) {
            if (uVar8 >> 7 == 0) {
              return (ulonglong)uVar2 << 0x20 | 0x8000000000000000;
            }
            return CONCAT44(uVar2,(uVar3 >> 0x1f) << 0x1f) | 0x8000000000000000;
          }
          if (uVar4 == 0) {
            return (ulonglong)uVar2 << 0x20 | 0x8000000000000000;
          }
          uVar7 = uVar4;
          uVar8 = uVar5;
          if (uVar4 >> 0x17 == 0) {
            uVar7 = uVar4 << 8;
            uVar8 = uVar5 - 8;
            if ((uVar4 & 0xffffff) >> 0xf == 0) {
              uVar7 = uVar4 << 0x10;
              uVar8 = uVar5 - 0x10;
            }
          }
          if ((uVar7 & 0x78000000) != 0) {
            uVar7 = uVar7 >> 4;
            uVar8 = uVar8 + 4;
          }
          if ((uVar7 & 0x6000000) != 0) {
            uVar7 = uVar7 >> 2;
            uVar8 = uVar8 + 2;
          }
          uVar8 = uVar8 - ((uVar7 < 0x1000000) + 9);
          if (uVar7 >= 0x1000000) {
            uVar7 = uVar7 >> 1;
          }
          if ((uVar5 ^ uVar8) >> 8 == 0) {
            return CONCAT44(uVar2,uVar7 + uVar8 * 0x800000) | 0x8000000000000000;
          }
          return CONCAT44(uVar2,(uVar3 >> 0x1f) << 0x1f) | 0x8000000000000000;
        }
        bVar10 = (bool)((byte)(uVar4 >> 7) & 1);
        uVar3 = ((int)uVar4 >> 8) + uVar5 * 0x800000 + (uint)bVar10;
        if (!bVar10) {
          return CONCAT44(uVar2,uVar3) | 0x8000000000000000;
        }
        if ((uVar8 & 0x3f) != 0) {
          return CONCAT44(uVar2,uVar3) | 0x8000000000000000;
        }
      }
      iVar6 = (uVar2 | 0x80000000) << (0x20 - uVar7 & 0xff);
      if (iVar6 == 0) {
        uVar3 = uVar3 & 0xfffffffe;
      }
      else {
        uVar3 = uVar3 - 1;
      }
      return CONCAT44(iVar6,uVar3);
    }
    if ((uVar5 & 0xff) != 0xff) {
      if ((uVar3 & 0x7f800000) == 0) {
        uVar3 = 0;
      }
      return CONCAT44(uVar2,uVar3);
    }
    uVar5 = uVar3 * 2;
    uVar7 = 0x4000002;
    if (uVar2 << 1 < 0xff000001 && uVar5 < 0xff000001) {
      if (uVar5 == uVar2 * 2) {
        if ((int)(uVar3 ^ uVar2) < 0) {
          return CONCAT44(uVar2,uVar3);
        }
        return CONCAT44(uVar2,DAT_4a172724);
      }
      if (uVar5 == 0xff000000) {
        return CONCAT44(uVar2,uVar3);
      }
      return CONCAT44(uVar2,uVar2) ^ 0x80000000;
    }
LAB_4a171b9c:
    uVar7 = uVar7 & 0xf;
    if (uVar7 == 9) {
      return (ulonglong)uVar2 << 0x20;
    }
    if (uVar7 != 10) {
      if (uVar7 == 8) {
        return CONCAT44(uVar2,uVar2 & 0xff000000 | DAT_4a171ba4 >> 0x1d | (uVar2 & 0xffffff) << 3);
      }
      return CONCAT44(uVar2,DAT_4a171ba4);
    }
    return CONCAT44(uVar2,DAT_4a171ba4);
  }
  iVar6 = uVar3 - uVar2;
  if (uVar3 < uVar2) {
    uVar3 = uVar3 - iVar6;
    uVar2 = uVar2 + iVar6;
  }
  uVar5 = uVar3 >> 0x17;
  uVar7 = uVar5 - (uVar2 >> 0x17);
  if ((uVar2 & 0x7f800000) == 0 || (uVar5 & 0xff) == 0xff) {
    if ((uVar5 & 0xff) != 0xff) {
      if ((uVar3 & 0x7f800000) == 0) {
        uVar3 = uVar3 & 0x80000000;
      }
      return CONCAT44(uVar2,uVar3);
    }
    uVar5 = uVar3 * 2;
    uVar7 = 0x4000001;
    if (uVar2 << 1 < 0xff000001 && uVar5 < 0xff000001) {
      if (uVar5 == uVar2 * 2) {
        if (-1 < (int)(uVar3 ^ uVar2)) {
          return CONCAT44(uVar2,uVar3);
        }
        return CONCAT44(uVar2,DAT_4a171b98);
      }
      if (uVar5 == 0xff000000) {
        return CONCAT44(uVar2,uVar3);
      }
      return CONCAT44(uVar2,uVar2);
    }
    goto LAB_4a171b9c;
  }
  uVar4 = uVar3 << 8 | 0x80000000;
  uVar2 = uVar2 << 8;
  uVar3 = (uVar2 | 0x80000000) >> (uVar7 & 0xff);
  uVar8 = uVar4 + uVar3;
  if (CARRY4(uVar4,uVar3)) {
    uVar3 = uVar8 >> 1 | 0x80000000;
    bVar10 = (bool)((byte)(uVar3 >> 7) & 1);
    uVar3 = uVar3 >> 8;
    uVar5 = uVar3 + uVar5 * 0x800000 + (uint)bVar10;
    if (bVar10) {
      uVar3 = uVar8 & 0xff;
    }
    uVar4 = uVar5 * 2;
    if (uVar3 != 0) {
      if (uVar4 < 0xff000000) {
        return CONCAT44(uVar2,uVar5) | 0x8000000000000000;
      }
      goto LAB_4a171b0c;
    }
  }
  else {
    bVar10 = (bool)((byte)(uVar8 >> 7) & 1);
    uVar5 = (uVar8 >> 8) + (uVar5 - 1) * 0x800000 + (uint)bVar10;
    if (!bVar10) {
      return CONCAT44(uVar2,uVar5) | 0x8000000000000000;
    }
    uVar4 = uVar5 * 2;
    if ((uVar8 & 0x7f) != 0) {
      bVar10 = 0xfeffffff < uVar4;
    }
    if (!bVar10) {
      return CONCAT44(uVar2,uVar5) | 0x8000000000000000;
    }
  }
  iVar6 = (uVar2 | 0x80000000) << (0x20 - uVar7 & 0xff);
  if (iVar6 == 0) {
    uVar5 = uVar5 & 0xfffffffe;
  }
  if (uVar4 < 0xff000000) {
    return CONCAT44(iVar6,uVar5);
  }
LAB_4a171b0c:
  uVar2 = uVar5 + 0xa0000000 >> 0x17;
  return CONCAT44(uVar2,(uVar2 | 0xff) << 0x17) | 0xff00000000;
}



// Address: 4a084c34

void FUN_4a084c34(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar8 = DAT_4a084dd4;
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_4a17211c(param_2,uVar8);
  uVar1 = FUN_4a171e1c();
  *(uint *)(param_1 + 0x54) = uVar1;
  if ((int)uVar1 < 4) {
    uVar1 = 3;
  }
  *(uint *)(param_1 + 0x54) = uVar1;
  if ((uVar1 & 0x80000001) == 1) {
    *(uint *)(param_1 + 0x54) = uVar1 + 1;
  }
  FUN_4a0849e0(param_1);
  uVar8 = 0;
  for (iVar7 = 0; iVar7 < *(int *)(param_1 + 0x54) / 2; iVar7 = iVar7 + 1) {
    uVar6 = FUN_4a171fac();
    uVar6 = FUN_4a171bb8(0x40000000,uVar6);
    uVar2 = FUN_4a171fac(iVar7);
    uVar6 = FUN_4a17211c(uVar2,uVar6);
    uVar2 = FUN_4a17211c(uVar6,0x40400000);
    uVar2 = FUN_4a17211c(uVar2,uVar6);
    uVar3 = FUN_4a17211c(uVar6,0xc0000000);
    uVar3 = FUN_4a17211c(uVar3,uVar6);
    uVar4 = FUN_4a17211c(uVar3,uVar6);
    uVar4 = FUN_4a171a94(uVar4,uVar2);
    if (*(int *)(param_1 + 0x24) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x24) + 8);
    }
    *(undefined4 *)(iVar5 + iVar7 * 4) = uVar4;
    uVar6 = FUN_4a17211c(uVar3,uVar6);
    uVar6 = FUN_4a171a94(uVar6,uVar2);
    if (*(int *)(param_1 + 0x24) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x24) + 8);
    }
    *(undefined4 *)(iVar5 + ((*(int *)(param_1 + 0x54) - iVar7) + -1) * 4) = uVar6;
    if (*(int *)(param_1 + 0x24) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x24) + 8);
    }
    uVar6 = FUN_4a17295c(*(undefined4 *)(iVar5 + iVar7 * 4),1);
    uVar8 = FUN_4a171a94(uVar6,uVar8);
  }
  iVar7 = 0;
  if (*(int *)(param_1 + 0x54) < 1) {
                    /* WARNING: Could not recover jumptable at 0x4a084d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  do {
    iVar5 = 0;
    if (*(int *)(param_1 + 0x24) != 0) {
      iVar5 = *(int *)(*(int *)(param_1 + 0x24) + 8);
    }
    puVar9 = (undefined4 *)(iVar5 + iVar7 * 4);
    uVar6 = FUN_4a171bb8(*puVar9,uVar8);
    *puVar9 = uVar6;
    iVar7 = iVar7 + 1;
  } while (iVar7 < *(int *)(param_1 + 0x54));
  return;
}



// Address: 4a084dd8

void FUN_4a084dd8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_r1;
  int extraout_r1_00;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  param_2 = *(int *)(param_1 + 0x6c) + param_2;
  *(int *)(param_1 + 0x6c) = param_2;
  if (param_2 < 0x1e) {
    return;
  }
  do {
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (*(int *)(param_1 + 0x38) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x38) + 8);
    }
    iVar6 = 0;
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x5c) * 4) = *(undefined4 *)(param_1 + 0x70);
    iVar1 = *(int *)(param_1 + 0x54);
    if (0 < iVar1) {
      iVar7 = *(int *)(param_1 + 0x24);
      iVar8 = *(int *)(param_1 + 0x38);
      iVar9 = *(int *)(param_1 + 0x5c);
      do {
        FUN_4a0015f0(iVar9 + iVar6,iVar1);
        if (iVar7 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(iVar7 + 8);
        }
        if (iVar8 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(iVar8 + 8);
        }
        uVar4 = FUN_4a17211c(*(undefined4 *)(iVar3 + extraout_r1 * 4),
                             *(undefined4 *)(iVar2 + iVar6 * 4));
        uVar4 = FUN_4a171a94(uVar4,*(undefined4 *)(param_1 + 0x68));
        iVar6 = iVar6 + 1;
        *(undefined4 *)(param_1 + 0x68) = uVar4;
      } while (iVar6 < iVar1);
    }
    iVar6 = *(int *)(param_1 + 0x5c) + -1;
    *(int *)(param_1 + 0x5c) = iVar6;
    if (iVar6 < 0) {
      *(int *)(param_1 + 0x5c) = iVar6 + iVar1;
    }
    iVar1 = *(int *)(param_1 + 0x58);
    if (0 < iVar1) {
      iVar7 = *(int *)(param_1 + 0x4c);
      iVar8 = *(int *)(param_1 + 0x60);
      iVar9 = *(int *)(param_1 + 0x10);
      iVar6 = 0;
      iVar2 = 0;
      do {
        FUN_4a0015f0(iVar8 + iVar6,iVar1);
        if (iVar9 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(iVar9 + 8);
        }
        if (iVar7 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(iVar7 + 8);
        }
        uVar4 = FUN_4a17211c(*(undefined4 *)(iVar5 + extraout_r1_00 * 4),
                             *(undefined4 *)(iVar3 + iVar6 * 4));
        uVar4 = FUN_4a1724e0(uVar4,*(undefined4 *)(param_1 + 0x68));
        iVar6 = iVar6 + 1;
        *(undefined4 *)(param_1 + 0x68) = uVar4;
      } while (iVar6 < iVar1);
      if (iVar7 != 0) {
        iVar2 = *(int *)(iVar7 + 8);
      }
      *(undefined4 *)(iVar2 + iVar8 * 4) = *(undefined4 *)(param_1 + 0x68);
      iVar1 = *(int *)(param_1 + 0x60) + -1;
      *(int *)(param_1 + 0x60) = iVar1;
      if (iVar1 < 0) {
        *(int *)(param_1 + 0x60) = iVar1 + *(int *)(param_1 + 0x58);
      }
    }
    iVar1 = *(int *)(param_1 + 0x6c) + -0x1e;
    *(int *)(param_1 + 0x6c) = iVar1;
  } while (0x1d < iVar1);
  return;
}



// Address: 4a084f54

int * FUN_4a084f54(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  
  *param_1 = param_2;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(param_1 + 1);
  puVar1 = PTR_PTR_4a08517c;
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
  puVar2 = (undefined4 *)FUN_4a0c6bc0(puVar2 + 5);
  puVar2[2] = 0;
  *puVar2 = puVar1;
  piVar9 = puVar2 + -0x10;
  puVar2[3] = 0;
  puVar2[5] = 0xffffffff;
  puVar2[6] = 0xffffffff;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  uVar3 = DAT_4a085180;
  iVar7 = *piVar9;
  if (iVar7 == 0) {
    FUN_4a084c34(piVar9,param_3);
  }
  else if (iVar7 == 1) {
    puVar2[5] = 1;
    puVar2[6] = 1;
    FUN_4a0849e0(piVar9);
    uVar3 = FUN_4a002ec0(uVar3);
    uVar3 = FUN_4a17211c(uVar3,0x41f00000);
    FUN_4a171bb8(uVar3,param_3);
    uVar4 = FUN_4a002e40();
    if (puVar2[-0xc] == 0) {
      puVar5 = (uint *)0x0;
    }
    else {
      puVar5 = *(uint **)(puVar2[-0xc] + 8);
    }
    *puVar5 = uVar4 ^ 0x80000000;
    if (puVar2[-0xc] == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = *(undefined4 **)(puVar2[-0xc] + 8);
    }
    uVar3 = FUN_4a171a94(*puVar6,0x3f800000);
    if (puVar2[-7] == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = *(undefined4 **)(puVar2[-7] + 8);
    }
    *puVar6 = uVar3;
  }
  else if (iVar7 == 2) {
    puVar2[5] = 2;
    puVar2[6] = 1;
    FUN_4a0849e0(piVar9);
    uVar3 = FUN_4a002ec0(uVar3);
    uVar3 = FUN_4a17211c(uVar3,0x41f00000);
    FUN_4a171bb8(uVar3,param_3);
    uVar4 = FUN_4a002e40();
    if (puVar2[-0xc] == 0) {
      puVar5 = (uint *)0x0;
    }
    else {
      puVar5 = *(uint **)(puVar2[-0xc] + 8);
    }
    *puVar5 = uVar4 ^ 0x80000000;
    iVar7 = 0;
    if (puVar2[-7] == 0) {
      puVar5 = (uint *)0x0;
    }
    else {
      puVar5 = *(uint **)(puVar2[-7] + 8);
    }
    *puVar5 = uVar4;
    if (puVar2[-7] != 0) {
      iVar7 = *(int *)(puVar2[-7] + 8);
    }
    *(uint *)(iVar7 + 4) = uVar4 ^ 0x80000000;
  }
  puVar2[0xc] = param_4;
  iVar7 = 0;
  if (0 < (int)puVar2[5]) {
    do {
      if (puVar2[-2] == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(puVar2[-2] + 8);
      }
      *(undefined4 *)(iVar8 + iVar7 * 4) = param_4;
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)puVar2[5]);
  }
  if (0 < (int)puVar2[6]) {
    iVar7 = 0;
    do {
      if (puVar2[3] == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(puVar2[3] + 8);
      }
      *(undefined4 *)(iVar8 + iVar7 * 4) = param_4;
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)puVar2[6]);
  }
  puVar2[0xc] = param_4;
  puVar2[10] = param_4;
  puVar2[9] = param_4;
  return piVar9;
}



// Address: 4a085184

int FUN_4a085184(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_4a16ba04(param_1 + 0x40);
  iVar1 = FUN_4a16ba04(iVar1 + -0x14);
  iVar1 = FUN_4a16ba04(iVar1 + -0x14);
  iVar1 = FUN_4a16ba04(iVar1 + -0x14);
  return iVar1 + -4;
}



// Address: 4a0851b4

uint FUN_4a0851b4(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x74);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
  }
  iVar4 = 0;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  iVar2 = iVar2 + param_2 * 0x14;
  iVar6 = *(int *)(iVar2 + 8);
  iVar1 = 0;
  if (0 < iVar6) {
    iVar2 = *(int *)(iVar2 + 0xc);
    do {
      if (iVar2 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar2 + 8);
      }
      piVar5 = *(int **)(iVar3 + iVar1 * 4);
      if (piVar5[1] != 400) {
        param_2 = param_2 | iVar1 << 0x10;
        (**(code **)(*piVar5 + 0x28))(piVar5);
        (**(code **)(*piVar5 + 0x30))(piVar5,0);
        (**(code **)(*piVar5 + 0x3c))(piVar5);
        goto LAB_4a08526c;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar6);
  }
  param_2 = 0xffffffff;
LAB_4a08526c:
  if (param_2 != 0xffffffff) {
    iVar1 = *(int *)(param_1 + 0x74);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 8);
    }
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    iVar2 = *(int *)(iVar2 + (param_2 & 0xffff) * 0x14 + 0xc);
    if (iVar2 != 0) {
      iVar4 = *(int *)(iVar2 + 8);
    }
    piVar5 = *(int **)(iVar4 + (param_2 >> 0x10) * 4);
    piVar5 = (int *)(**(code **)(*piVar5 + 8))(piVar5,*(undefined4 *)(param_1 + 0xa8));
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))(piVar5,param_3,param_4,param_5);
      (**(code **)(*piVar5 + 0x10))(piVar5,0,0);
    }
  }
  return param_2;
}



// Address: 4a085310

void FUN_4a085310(int param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined *local_5c [2];
  int local_54;
  int local_50;
  undefined *local_48 [2];
  int local_40;
  undefined *local_34 [2];
  int local_2c;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(param_1 + 0x74) + 8);
  }
  iVar6 = iVar6 + param_2 * 0x14;
  puVar3 = (undefined4 *)FUN_4a0c6bc0(local_5c);
  *puVar3 = PTR_PTR_4a0855cc;
  puVar3[2] = *(undefined4 *)(iVar6 + 8);
  piVar5 = *(int **)(iVar6 + 0xc);
  puVar3[3] = piVar5;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))();
  }
  puVar1 = PTR_PTR_4a0855d0;
  iVar6 = 0;
  *puVar3 = PTR_PTR_4a0855d0;
  if (0 < local_54) {
    do {
      if (local_50 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(local_50 + 8);
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
    } while (iVar6 < local_54);
  }
  if (*(int *)(param_1 + 0x74) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(param_1 + 0x74) + 8);
  }
  piVar5 = (int *)(iVar6 + param_2 * 0x14);
  puVar3 = (undefined4 *)FUN_4a0c6bc0(local_34);
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = puVar1;
  (**(code **)(*piVar5 + 0x1c))(piVar5);
  piVar5[2] = 0;
  piVar5[3] = 0;
  local_34[0] = puVar1;
  iVar6 = FUN_4a0bcc84(local_34);
  if (iVar6 != 0) {
    iVar4 = 0;
    if (0 < local_2c) {
      do {
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_2c);
      if (iVar6 == 0) goto LAB_4a0854d8;
    }
    FUN_4a14f21c();
  }
LAB_4a0854d8:
  FUN_4a0c6bf4(local_34);
  if (*(int *)(param_1 + 0x88) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(param_1 + 0x88) + 8);
  }
  piVar5 = (int *)(iVar6 + param_2 * 0x14);
  puVar3 = (undefined4 *)FUN_4a0c6bc0(local_48);
  puVar2 = PTR_PTR_4a0855d4;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = puVar2;
  (**(code **)(*piVar5 + 0x1c))(piVar5);
  piVar5[2] = 0;
  piVar5[3] = 0;
  local_48[0] = puVar2;
  iVar6 = FUN_4a0bcc84(local_48);
  if (iVar6 != 0) {
    iVar4 = 0;
    if (0 < local_40) {
      do {
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_40);
      if (iVar6 == 0) goto LAB_4a085570;
    }
    FUN_4a14f21c();
  }
LAB_4a085570:
  FUN_4a0c6bf4(local_48);
  local_5c[0] = puVar1;
  iVar6 = FUN_4a0bcc84(local_5c);
  if (iVar6 != 0) {
    iVar4 = 0;
    if (0 < local_54) {
      do {
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_54);
      if (iVar6 == 0) goto LAB_4a0855b8;
    }
    FUN_4a14f21c();
  }
LAB_4a0855b8:
  FUN_4a0c6bf4(local_5c);
  return;
}



// Address: 4a0855d8

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

ulonglong FUN_4a0855d8(void)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint in_r3;
  uint uVar7;
  bool bVar8;
  
  FUN_4a0c2f68();
  uVar2 = FUN_4a171fac();
  uVar4 = uVar2 >> 7 & 0xff0000;
  bVar8 = uVar4 == 0;
  if (!bVar8) {
    in_r3 = DAT_4a0855f0 >> 7 & 0xff0000;
    bVar8 = in_r3 == 0;
  }
  if (!bVar8) {
    bVar8 = uVar4 == 0xff0000;
  }
  if (!bVar8) {
    bVar8 = in_r3 == 0xff0000;
  }
  if (bVar8) {
    if ((int)(uVar2 ^ DAT_4a0855f0) < 0) {
      uVar4 = uVar4 | 0x100;
    }
    uVar7 = DAT_4a0855f0 >> 7 & 0xff0000;
    if (uVar4 < 0xff0000 && uVar7 < 0xff0000) {
      return CONCAT44(DAT_4a0855f0,uVar2 ^ DAT_4a0855f0) & 0xffffffff80000000;
    }
    uVar2 = uVar2 * 2;
    if (uVar2 < 0xff000001) {
      uVar2 = DAT_4a0855f0 * 2;
    }
    if (0xff000000 < uVar2) {
      return CONCAT44(DAT_4a0855f0,DAT_4a171ba4);
    }
    if ((uVar4 & 0xff0000) == 0 || uVar7 == 0) {
      return CONCAT44(DAT_4a0855f0,DAT_4a172220);
    }
    return CONCAT44(DAT_4a0855f0,(uVar4 | 0xff) << 0x17);
  }
  if ((int)(uVar2 ^ DAT_4a0855f0) < 0) {
    uVar4 = uVar4 | 0x100;
  }
  uVar7 = DAT_4a0855f0 << 8;
  lVar1 = (ulonglong)(uVar7 | 0x80000000) * (ulonglong)(uVar2 << 8 | 0x80000000);
  uVar2 = (uint)((ulonglong)lVar1 >> 0x20);
  iVar5 = uVar4 + in_r3 + -0x800000;
  if ((int)lVar1 != 0) {
    uVar2 = uVar2 | 1;
  }
  bVar8 = 0x7fffffff < uVar2;
  if (!bVar8) {
    uVar2 = uVar2 << 1;
  }
  uVar6 = iVar5 + (iVar5 >> 0x10) + (uint)bVar8;
  bVar8 = (bool)((byte)(uVar2 >> 7) & 1);
  uVar4 = uVar2 >> 8;
  if (bVar8) {
    uVar4 = uVar2 & 0x7f;
  }
  uVar2 = (uVar2 >> 8) + uVar6 * 0x800000 + (uint)bVar8;
  if (uVar4 != 0) {
    bVar8 = 0xfbffff < uVar6;
  }
  if (!bVar8) {
    return CONCAT44(uVar7,uVar2) | 0x8000000000000000;
  }
  if (uVar4 == 0 || uVar6 == 0xfc0000) {
    uVar2 = uVar2 & 0xfffffffe;
  }
  if (uVar6 < 0xfc0000) {
    return CONCAT44(uVar7,uVar2) | 0x8000000000000000;
  }
  if (-1 < (int)(uVar6 - 0xfc0000)) {
    if (-1 < (int)((uVar2 + 0x800000) * 2)) {
      if ((int)(uVar2 + 0xa0000000) < 0) {
        uVar3 = 0xff800000;
      }
      else {
        uVar3 = 0x7f800000;
      }
      return CONCAT44(uVar7,uVar3) | 0x8000000000000000;
    }
    return CONCAT44(uVar7,uVar2) | 0x8000000000000000;
  }
  if ((int)(uVar6 ^ 0xff) < -0xffff) {
    uVar2 = uVar2 + 0x60000000;
    if ((int)(uVar6 ^ 0xff) < -0xffff) {
      uVar2 = uVar2 & 0x80000000;
    }
    return CONCAT44(uVar7,uVar2) | 0x8000000000000000;
  }
  return CONCAT44(uVar7,uVar2) | 0x8000000000000000;
}



// Address: 4a0855f4

void FUN_4a0855f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined4 unaff_r4;
  int iVar3;
  
  FUN_4a17211c(param_2,0x42c80000);
  iVar2 = FUN_4a171e1c();
  puVar1 = PTR_DAT_4a0c3048;
  if (iVar2 == 0) {
    iVar2 = host_s3eSoundGetInt_arm(0);
    if (iVar2 != 0) {
      *(int *)(puVar1 + 4) = iVar2;
      iVar3 = 0;
      iVar2 = host_s3eSoundGetInt_arm(3);
      if (0 < iVar2) {
        do {
          host_s3eSoundChannelSetInt_arm(iVar3,3,0,param_4,unaff_r4);
          iVar3 = iVar3 + 1;
          iVar2 = host_s3eSoundGetInt_arm(3);
        } while (iVar3 < iVar2);
      }
    }
    *puVar1 = 1;
    return;
  }
  if (*(int *)(PTR_DAT_4a0c3048 + 4) != 0) {
    iVar3 = 0;
    iVar2 = host_s3eSoundGetInt_arm(3);
    if (0 < iVar2) {
      do {
        host_s3eSoundChannelSetInt_arm(iVar3,3,*(undefined4 *)(puVar1 + 4));
        iVar3 = iVar3 + 1;
        iVar2 = host_s3eSoundGetInt_arm(3);
      } while (iVar3 < iVar2);
    }
    *(undefined4 *)(puVar1 + 4) = 0;
  }
  *puVar1 = 0;
  return;
}



// Address: 4a085614

undefined4 FUN_4a085614(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x74) + 8);
  }
  iVar1 = iVar1 + param_2 * 0x14;
  iVar4 = *(int *)(iVar1 + 8);
  iVar2 = 0;
  if (0 < iVar4) {
    iVar1 = *(int *)(iVar1 + 0xc);
    do {
      if (iVar1 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar1 + 8);
      }
      if (*(int *)(*(int *)(iVar3 + iVar2 * 4) + 4) == 400) {
        if (iVar2 == -1) {
          return 0;
        }
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar4);
  }
  return 0;
}



// Address: 4a085684

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

ulonglong FUN_4a085684(void)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint in_r3;
  uint uVar7;
  bool bVar8;
  
  FUN_4a0c2ea4();
  uVar2 = FUN_4a171fac();
  uVar4 = uVar2 >> 7 & 0xff0000;
  bVar8 = uVar4 == 0;
  if (!bVar8) {
    in_r3 = DAT_4a08569c >> 7 & 0xff0000;
    bVar8 = in_r3 == 0;
  }
  if (!bVar8) {
    bVar8 = uVar4 == 0xff0000;
  }
  if (!bVar8) {
    bVar8 = in_r3 == 0xff0000;
  }
  if (bVar8) {
    if ((int)(uVar2 ^ DAT_4a08569c) < 0) {
      uVar4 = uVar4 | 0x100;
    }
    uVar7 = DAT_4a08569c >> 7 & 0xff0000;
    if (uVar4 < 0xff0000 && uVar7 < 0xff0000) {
      return CONCAT44(DAT_4a08569c,uVar2 ^ DAT_4a08569c) & 0xffffffff80000000;
    }
    uVar2 = uVar2 * 2;
    if (uVar2 < 0xff000001) {
      uVar2 = DAT_4a08569c * 2;
    }
    if (0xff000000 < uVar2) {
      return CONCAT44(DAT_4a08569c,DAT_4a171ba4);
    }
    if ((uVar4 & 0xff0000) == 0 || uVar7 == 0) {
      return CONCAT44(DAT_4a08569c,DAT_4a172220);
    }
    return CONCAT44(DAT_4a08569c,(uVar4 | 0xff) << 0x17);
  }
  if ((int)(uVar2 ^ DAT_4a08569c) < 0) {
    uVar4 = uVar4 | 0x100;
  }
  uVar7 = DAT_4a08569c << 8;
  lVar1 = (ulonglong)(uVar7 | 0x80000000) * (ulonglong)(uVar2 << 8 | 0x80000000);
  uVar2 = (uint)((ulonglong)lVar1 >> 0x20);
  iVar5 = uVar4 + in_r3 + -0x800000;
  if ((int)lVar1 != 0) {
    uVar2 = uVar2 | 1;
  }
  bVar8 = 0x7fffffff < uVar2;
  if (!bVar8) {
    uVar2 = uVar2 << 1;
  }
  uVar6 = iVar5 + (iVar5 >> 0x10) + (uint)bVar8;
  bVar8 = (bool)((byte)(uVar2 >> 7) & 1);
  uVar4 = uVar2 >> 8;
  if (bVar8) {
    uVar4 = uVar2 & 0x7f;
  }
  uVar2 = (uVar2 >> 8) + uVar6 * 0x800000 + (uint)bVar8;
  if (uVar4 != 0) {
    bVar8 = 0xfbffff < uVar6;
  }
  if (!bVar8) {
    return CONCAT44(uVar7,uVar2) | 0x8000000000000000;
  }
  if (uVar4 == 0 || uVar6 == 0xfc0000) {
    uVar2 = uVar2 & 0xfffffffe;
  }
  if (uVar6 < 0xfc0000) {
    return CONCAT44(uVar7,uVar2) | 0x8000000000000000;
  }
  if (-1 < (int)(uVar6 - 0xfc0000)) {
    if (-1 < (int)((uVar2 + 0x800000) * 2)) {
      if ((int)(uVar2 + 0xa0000000) < 0) {
        uVar3 = 0xff800000;
      }
      else {
        uVar3 = 0x7f800000;
      }
      return CONCAT44(uVar7,uVar3) | 0x8000000000000000;
    }
    return CONCAT44(uVar7,uVar2) | 0x8000000000000000;
  }
  if ((int)(uVar6 ^ 0xff) < -0xffff) {
    uVar2 = uVar2 + 0x60000000;
    if ((int)(uVar6 ^ 0xff) < -0xffff) {
      uVar2 = uVar2 & 0x80000000;
    }
    return CONCAT44(uVar7,uVar2) | 0x8000000000000000;
  }
  return CONCAT44(uVar7,uVar2) | 0x8000000000000000;
}



// Address: 4a0856a0

longlong FUN_4a0856a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_4a17211c(param_2,0x42c80000);
  iVar1 = FUN_4a171e1c();
  iVar1 = (int)((ulonglong)((longlong)DAT_4a0c2eec * (longlong)(iVar1 << 8)) >> 0x20);
  return (ulonglong)(uint)((iVar1 >> 5) - (iVar1 >> 0x1f)) << 0x20;
}



// Address: 4a0856c0

void FUN_4a0856c0(int param_1,int param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined *local_28 [2];
  int local_20;
  int local_1c;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(param_1 + 0x74) + 8);
  }
  iVar5 = iVar5 + param_2 * 0x14;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(local_28);
  *puVar2 = PTR_PTR_4a0857bc;
  puVar2[2] = *(undefined4 *)(iVar5 + 8);
  piVar4 = *(int **)(iVar5 + 0xc);
  puVar2[3] = piVar4;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))();
  }
  puVar1 = PTR_PTR_4a0857c0;
  *puVar2 = PTR_PTR_4a0857c0;
  iVar5 = 0;
  if (0 < local_20) {
    do {
      if (local_1c == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(local_1c + 8);
      }
      FUN_4a0c6e80(*(undefined4 *)(iVar3 + iVar5 * 4),param_3);
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_20);
  }
  local_28[0] = puVar1;
  iVar5 = FUN_4a0bcc84(local_28);
  if (iVar5 != 0) {
    iVar3 = 0;
    if (0 < local_20) {
      do {
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_20);
      if (iVar5 == 0) goto LAB_4a0857a8;
    }
    FUN_4a14f21c();
  }
LAB_4a0857a8:
  FUN_4a0c6bf4(local_28);
  return;
}



// Address: 4a08581c

void FUN_4a08581c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13)

{
  FUN_4a0c8098(param_2,param_3,param_4);
  FUN_4a0c809c(param_5,param_6,param_7);
  FUN_4a0c80ec(param_8,param_9,param_10,param_11,param_12,param_13);
  return;
}



// Address: 4a085878

void FUN_4a085878(void)

{
  return;
}



// Address: 4a08587c

void FUN_4a08587c(void)

{
  return;
}



// Address: 4a085880

void FUN_4a085880(void)

{
  return;
}



// Address: 4a085884

void FUN_4a085884(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined *local_fc [2];
  int local_f4;
  int local_e8;
  int *local_e4;
  int *local_e0;
  undefined1 auStack_dc [8];
  undefined4 local_d4;
  int *local_d0;
  undefined1 auStack_c8 [8];
  undefined4 local_c0;
  int *local_bc;
  undefined1 auStack_b4 [8];
  undefined4 local_ac;
  int *local_a8;
  undefined *local_a0 [2];
  int local_98;
  int *local_94;
  undefined1 auStack_8c [8];
  undefined4 local_84;
  int *local_80;
  int local_78;
  int *local_74;
  undefined *local_70 [2];
  int local_68;
  undefined *local_5c [2];
  int local_54;
  undefined *local_48 [2];
  int local_40;
  undefined *local_34;
  undefined *local_30;
  undefined *local_2c;
  undefined *local_28;
  
  uVar4 = thunk_FUN_4a161570(0x10);
  uVar5 = FUN_4a098414(0xb6);
  local_74 = (int *)FUN_4a0bfc44(uVar4,uVar5);
  if (local_74 != (int *)0x0) {
    (**(code **)(*local_74 + 0xc))(local_74);
  }
  local_78 = FUN_4a0bf920(local_74);
  FUN_4a16bb84(auStack_8c,local_78);
  iVar14 = local_78 + 1;
  iVar13 = 0;
  iVar12 = 1;
  if (1 < iVar14) {
    do {
      uVar3 = FUN_4a0bf920(local_74);
      iVar12 = iVar12 + 1;
      if (local_80 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = local_80[2];
      }
      *(undefined1 *)(iVar6 + iVar13) = uVar3;
      iVar13 = iVar13 + 1;
    } while (iVar12 < iVar14);
  }
  iVar12 = FUN_4a0bfbdc(local_74);
  piVar7 = (int *)FUN_4a0c6bc0(local_a0);
  local_28 = PTR_PTR_4a0862fc;
  piVar7[2] = 0;
  piVar7[3] = 0;
  *piVar7 = (int)local_28;
  puVar1 = PTR_PTR_4a0862f8;
  local_2c = PTR_PTR_4a086300;
  if (0 < iVar12) {
    iVar13 = FUN_4a15e080(iVar12 << 1);
    if (iVar13 == 0) {
      iVar13 = FUN_4a1669a8();
    }
    iVar6 = 0;
    do {
      iVar9 = iVar6 * 2;
      iVar6 = iVar6 + 1;
      local_e0 = (int *)0x0;
      *(undefined2 *)(iVar13 + iVar9) = 0;
    } while (iVar6 < iVar12);
    thunk_FUN_4a161570(0x18);
    puVar8 = (undefined4 *)FUN_4a0c0628();
    puVar8[3] = 2;
    puVar8[4] = iVar12;
    *puVar8 = local_2c;
    puVar8[2] = iVar13;
    *(undefined1 *)(puVar8 + 5) = 1;
    if (puVar8 != (undefined4 *)0x0) {
      (**(code **)(local_2c + 0xc))(puVar8);
    }
    (**(code **)(*piVar7 + 0x1c))(piVar7);
    piVar7[2] = iVar12;
    piVar7[3] = (int)puVar8;
  }
  FUN_4a16bb84(auStack_b4,iVar12);
  FUN_4a16bb84(auStack_c8,iVar12);
  FUN_4a16bb84(auStack_dc,iVar12);
  iVar13 = 0;
  iVar6 = 1;
  if (1 < iVar12 + 1) {
    do {
      iVar9 = FUN_4a0bfbdc(local_74);
      if (local_94 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_94[2];
      }
      *(short *)(iVar10 + iVar13 * 2) = (short)*(undefined4 *)(PTR_DAT_4a086304 + iVar9 * 4);
      uVar3 = FUN_4a0bf920(local_74);
      if (local_a8 == (int *)0x0) {
        iVar9 = 0;
      }
      else {
        iVar9 = local_a8[2];
      }
      *(undefined1 *)(iVar9 + iVar13) = uVar3;
      uVar3 = FUN_4a0bf920(local_74);
      if (local_bc == (int *)0x0) {
        iVar9 = 0;
      }
      else {
        iVar9 = local_bc[2];
      }
      *(undefined1 *)(iVar9 + iVar13) = uVar3;
      uVar3 = FUN_4a0bf920(local_74);
      iVar6 = iVar6 + 1;
      if (local_d0 == (int *)0x0) {
        iVar9 = 0;
      }
      else {
        iVar9 = local_d0[2];
      }
      *(undefined1 *)(iVar9 + iVar13) = uVar3;
      iVar13 = iVar13 + 1;
    } while (iVar6 < iVar12 + 1);
  }
  if ((local_74 != (int *)0x0) && (iVar13 = (**(code **)(*local_74 + 8))(local_74), iVar13 != 0)) {
    (**(code **)(*local_74 + 4))(local_74);
  }
  if (local_80 != (int *)0x0) {
    (**(code **)(*local_80 + 0xc))(local_80);
  }
  (**(code **)(*(int *)(param_1 + 4) + 0x1c))((int *)(param_1 + 4));
  iVar13 = local_98;
  *(undefined4 *)(param_1 + 0xc) = local_84;
  *(int **)(param_1 + 0x10) = local_80;
  if (local_94 != (int *)0x0) {
    (**(code **)(*local_94 + 0xc))(local_94);
  }
  (**(code **)(*(int *)(param_1 + 0x18) + 0x1c))((int *)(param_1 + 0x18));
  *(int *)(param_1 + 0x20) = iVar13;
  *(int **)(param_1 + 0x24) = local_94;
  if (local_a8 != (int *)0x0) {
    (**(code **)(*local_a8 + 0xc))(local_a8);
  }
  (**(code **)(*(int *)(param_1 + 0x2c) + 0x1c))((int *)(param_1 + 0x2c));
  *(undefined4 *)(param_1 + 0x34) = local_ac;
  *(int **)(param_1 + 0x38) = local_a8;
  if (local_bc != (int *)0x0) {
    (**(code **)(*local_bc + 0xc))(local_bc);
  }
  (**(code **)(*(int *)(param_1 + 0x40) + 0x1c))((int *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x48) = local_c0;
  *(int **)(param_1 + 0x4c) = local_bc;
  if (local_d0 != (int *)0x0) {
    (**(code **)(*local_d0 + 0xc))(local_d0);
  }
  (**(code **)(*(int *)(param_1 + 0x54) + 0x1c))((int *)(param_1 + 0x54));
  *(undefined4 *)(param_1 + 0x5c) = local_d4;
  local_e0 = (int *)(param_1 + 0x68);
  *(int **)(param_1 + 0x60) = local_d0;
  local_e4 = (int *)FUN_4a0c6bc0(local_48);
  local_e4[2] = 0;
  local_e4[3] = 0;
  local_30 = PTR_PTR_4a086308;
  *local_e4 = (int)PTR_PTR_4a086308;
  if (0 < iVar12) {
    local_e8 = FUN_4a15e080(iVar12 * 0x14);
    if (local_e8 == 0) {
      local_e8 = FUN_4a1669a8();
    }
    puVar2 = PTR_PTR_4a08630c;
    iVar13 = 0;
    do {
      iVar6 = local_e8 + iVar13 * 0x14;
      puVar8 = (undefined4 *)FUN_4a0c6bc0(local_fc);
      puVar8[2] = 0;
      puVar8[3] = 0;
      *puVar8 = puVar2;
      puVar11 = (undefined4 *)FUN_4a0c6bc0(iVar6);
      *puVar11 = puVar1;
      puVar11[2] = puVar8[2];
      piVar7 = (int *)puVar8[3];
      puVar11[3] = piVar7;
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0xc))();
      }
      iVar6 = local_f4;
      *puVar11 = puVar2;
      local_fc[0] = puVar2;
      iVar9 = FUN_4a0bcc84(local_fc);
      if (iVar9 != 0) {
        iVar10 = 0;
        if (0 < iVar6) {
          do {
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar6);
          if (iVar9 == 0) goto LAB_4a085d7c;
        }
        FUN_4a14f21c(iVar9);
      }
LAB_4a085d7c:
      FUN_4a0c6bf4(local_fc);
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar12);
    thunk_FUN_4a161570(0x18);
    puVar8 = (undefined4 *)FUN_4a0c0628();
    *puVar8 = local_2c;
    puVar8[2] = local_e8;
    puVar8[3] = 0x14;
    puVar8[4] = iVar12;
    *(undefined1 *)(puVar8 + 5) = 1;
    if (puVar8 != (undefined4 *)0x0) {
      (**(code **)(local_2c + 0xc))(puVar8);
    }
    (**(code **)(*local_e4 + 0x1c))(local_e4);
    local_e4[3] = (int)puVar8;
    local_e4[2] = iVar12;
  }
  iVar13 = local_e4[2];
  piVar7 = (int *)local_e4[3];
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0xc))(piVar7);
  }
  (**(code **)(*local_e0 + 0x1c))(local_e0);
  local_e0[3] = (int)piVar7;
  local_e0[2] = iVar13;
  local_48[0] = local_30;
  iVar13 = FUN_4a0bcc84(local_48);
  if (iVar13 != 0) {
    iVar6 = 0;
    if (0 < local_40) {
      do {
        (*(code *)**(undefined4 **)(iVar13 + iVar6 * 0x14))();
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_40);
      if (iVar13 == 0) goto LAB_4a085eac;
    }
    FUN_4a14f21c(iVar13);
  }
LAB_4a085eac:
  FUN_4a0c6bf4(local_48);
  local_e0 = (int *)(param_1 + 0x7c);
  local_e4 = (int *)FUN_4a0c6bc0(local_5c);
  local_e4[2] = 0;
  local_34 = PTR_PTR_4a086310;
  local_e4[3] = 0;
  puVar2 = PTR_PTR_4a086314;
  *local_e4 = (int)local_34;
  if (0 < iVar12) {
    iVar13 = FUN_4a15e080(iVar12 * 0x14);
    if (iVar13 == 0) {
      iVar13 = FUN_4a1669a8();
    }
    iVar6 = 0;
    local_e8 = iVar13;
    do {
      iVar13 = local_e8 + iVar6 * 0x14;
      puVar8 = (undefined4 *)FUN_4a0c6bc0(local_fc);
      puVar8[2] = 0;
      puVar8[3] = 0;
      *puVar8 = puVar2;
      puVar11 = (undefined4 *)FUN_4a0c6bc0(iVar13);
      *puVar11 = puVar1;
      puVar11[2] = puVar8[2];
      piVar7 = (int *)puVar8[3];
      puVar11[3] = piVar7;
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0xc))();
      }
      iVar13 = local_f4;
      *puVar11 = puVar2;
      local_fc[0] = puVar2;
      iVar9 = FUN_4a0bcc84(local_fc);
      if (iVar9 != 0) {
        iVar10 = 0;
        if (0 < iVar13) {
          do {
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar13);
          if (iVar9 == 0) goto LAB_4a085fb4;
        }
        FUN_4a14f21c(iVar9);
      }
LAB_4a085fb4:
      FUN_4a0c6bf4(local_fc);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar12);
    thunk_FUN_4a161570(0x18);
    puVar8 = (undefined4 *)FUN_4a0c0628();
    *puVar8 = local_2c;
    puVar8[2] = local_e8;
    puVar8[3] = 0x14;
    puVar8[4] = iVar12;
    *(undefined1 *)(puVar8 + 5) = 1;
    if (puVar8 != (undefined4 *)0x0) {
      (**(code **)(local_2c + 0xc))(puVar8);
    }
    (**(code **)(*local_e4 + 0x1c))(local_e4);
    local_e4[3] = (int)puVar8;
    local_e4[2] = iVar12;
  }
  iVar12 = local_e4[2];
  piVar7 = (int *)local_e4[3];
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0xc))(piVar7);
  }
  (**(code **)(*local_e0 + 0x1c))(local_e0);
  local_e0[3] = (int)piVar7;
  local_e0[2] = iVar12;
  local_5c[0] = local_34;
  iVar12 = FUN_4a0bcc84(local_5c);
  if (iVar12 != 0) {
    iVar13 = 0;
    if (0 < local_54) {
      do {
        (*(code *)**(undefined4 **)(iVar12 + iVar13 * 0x14))();
        iVar13 = iVar13 + 1;
      } while (iVar13 < local_54);
      if (iVar12 == 0) goto LAB_4a0860e4;
    }
    FUN_4a14f21c(iVar12);
  }
LAB_4a0860e4:
  FUN_4a0c6bf4(local_5c);
  piVar7 = (int *)FUN_4a0c6bc0(local_70);
  piVar7[2] = 0;
  piVar7[3] = 0;
  *piVar7 = (int)puVar2;
  if (0 < local_78) {
    iVar12 = FUN_4a15e080(local_78 << 2);
    if (iVar12 == 0) {
      iVar12 = FUN_4a1669a8();
    }
    iVar13 = 0;
    do {
      local_e0 = (int *)0x0;
      *(undefined4 *)(iVar12 + iVar13 * 4) = 0;
      iVar13 = iVar13 + 1;
    } while (iVar13 < local_78);
    thunk_FUN_4a161570(0x18);
    puVar8 = (undefined4 *)FUN_4a0c0628();
    *puVar8 = local_2c;
    puVar8[3] = 4;
    puVar8[2] = iVar12;
    puVar8[4] = local_78;
    *(undefined1 *)(puVar8 + 5) = 1;
    if (puVar8 != (undefined4 *)0x0) {
      (**(code **)(local_2c + 0xc))(puVar8);
    }
    (**(code **)(*piVar7 + 0x1c))(piVar7);
    piVar7[3] = (int)puVar8;
    piVar7[2] = local_78;
  }
  iVar12 = piVar7[2];
  piVar7 = (int *)piVar7[3];
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0xc))(piVar7);
  }
  (**(code **)(*(int *)(param_1 + 0x90) + 0x1c))((int *)(param_1 + 0x90));
  *(int *)(param_1 + 0x98) = iVar12;
  *(int **)(param_1 + 0x9c) = piVar7;
  local_70[0] = puVar2;
  iVar12 = FUN_4a0bcc84(local_70);
  if (iVar12 != 0) {
    iVar13 = 0;
    if (0 < local_68) {
      do {
        iVar13 = iVar13 + 1;
      } while (iVar13 < local_68);
      if (iVar12 == 0) goto LAB_4a08623c;
    }
    FUN_4a14f21c(iVar12);
  }
LAB_4a08623c:
  FUN_4a0c6bf4(local_70);
  iVar13 = 0;
  iVar12 = 1;
  if (1 < iVar14) {
    do {
      iVar12 = iVar12 + 1;
      if (*(int *)(param_1 + 0x9c) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(param_1 + 0x9c) + 8);
      }
      *(undefined4 *)(iVar6 + iVar13 * 4) = 0x3f800000;
      iVar13 = iVar13 + 1;
    } while (iVar12 < iVar14);
  }
  FUN_4a16bc4c(auStack_dc);
  FUN_4a16bc4c(auStack_c8);
  FUN_4a16bc4c(auStack_b4);
  local_a0[0] = local_28;
  iVar12 = FUN_4a0bcc84(local_a0);
  if (iVar12 != 0) {
    iVar13 = 0;
    if (0 < local_98) {
      do {
        iVar13 = iVar13 + 1;
      } while (iVar13 < local_98);
      if (iVar12 == 0) goto LAB_4a0862dc;
    }
    FUN_4a14f21c(iVar12);
  }
LAB_4a0862dc:
  FUN_4a0c6bf4(local_a0);
  FUN_4a16bc4c(auStack_8c);
  return;
}




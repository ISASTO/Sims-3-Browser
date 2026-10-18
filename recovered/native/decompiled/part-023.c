/* AUTOMATED DECOMPILER OUTPUT. Not original source, not a buildable game.
 * Function boundaries, types, indirect calls, and data still require validation. */

// Address: 4a139c90

void FUN_4a139c90(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar7 = DAT_4a13a3fc;
  if (param_2 == 0) {
    return;
  }
  iVar6 = *(int *)(param_2 + 0x34);
  if (*(int *)(param_1 + 0x19c) == iVar6) goto LAB_4a13a0b0;
  if (iVar6 == 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x20))(*(int **)(param_1 + 8),0xbc0);
    (**(code **)(**(int **)(param_1 + 8) + 0x20))(*(int **)(param_1 + 8),0x8037);
    (**(code **)(**(int **)(param_1 + 8) + 0x28))(*(int **)(param_1 + 8),0xb71);
    (**(code **)(**(int **)(param_1 + 8) + 0x94))(*(int **)(param_1 + 8),1);
    (**(code **)(**(int **)(param_1 + 8) + 0x98))(*(int **)(param_1 + 8),1,1,1,1);
    (**(code **)(**(int **)(param_1 + 8) + 0x20))(*(int **)(param_1 + 8),0xbe2);
    goto LAB_4a13a0ac;
  }
  iVar1 = FUN_4a139840(iVar6);
  piVar2 = *(int **)(param_1 + 8);
  if (iVar1 < iVar7) {
    (**(code **)(*piVar2 + 0x20))(piVar2,0xbc0);
  }
  else {
    (**(code **)(*piVar2 + 0xb0))(piVar2,0x206,iVar1);
    (**(code **)(**(int **)(param_1 + 8) + 0x28))(*(int **)(param_1 + 8),0xbc0);
  }
  bVar11 = *(char *)(iVar6 + 0x36) != '\0';
  (**(code **)(**(int **)(param_1 + 8) + 0x98))
            (*(int **)(param_1 + 8),bVar11,bVar11,bVar11,*(char *)(iVar6 + 0x37) != '\0');
  uVar3 = FUN_4a139878(iVar6);
  uVar4 = FUN_4a139858(iVar6);
  piVar2 = *(int **)(param_1 + 8);
  if ((uVar3 & 0x7fffffff) == 0 && (uVar4 & 0x7fffffff) == 0) {
    (**(code **)(*piVar2 + 0x20))(piVar2,0x8037);
  }
  else {
    (**(code **)(*piVar2 + 0xa4))(piVar2,uVar3);
    (**(code **)(**(int **)(param_1 + 8) + 0x28))(*(int **)(param_1 + 8),0x8037);
  }
  piVar2 = *(int **)(param_1 + 8);
  if (*(char *)(iVar6 + 0x34) == '\0') {
    (**(code **)(*piVar2 + 0x20))(piVar2,0xb71);
  }
  else {
    (**(code **)(*piVar2 + 0x28))(piVar2,0xb71);
  }
  (**(code **)(**(int **)(param_1 + 8) + 0x94))
            (*(int **)(param_1 + 8),*(char *)(iVar6 + 0x35) != '\0');
  uVar8 = 0x203;
  switch(*(undefined4 *)(iVar6 + 0x28)) {
  case 0x40:
    (**(code **)(**(int **)(param_1 + 8) + 0x90))();
    (**(code **)(**(int **)(param_1 + 8) + 0x28))(*(int **)(param_1 + 8),0xbe2);
    goto LAB_4a139eac;
  case 0x41:
    (**(code **)(**(int **)(param_1 + 8) + 0x90))(*(int **)(param_1 + 8),0x302,1);
    (**(code **)(**(int **)(param_1 + 8) + 0x28))(*(int **)(param_1 + 8),0xbe2);
    FUN_4a150094(0x203);
    break;
  case 0x42:
    (**(code **)(**(int **)(param_1 + 8) + 0x90))(*(int **)(param_1 + 8),0x306,0);
    (**(code **)(**(int **)(param_1 + 8) + 0x28))(*(int **)(param_1 + 8),0xbe2);
    FUN_4a150094(0x203);
    break;
  case 0x43:
    (**(code **)(**(int **)(param_1 + 8) + 0x90))(*(int **)(param_1 + 8),0x306,0x300);
    (**(code **)(**(int **)(param_1 + 8) + 0x28))(*(int **)(param_1 + 8),0xbe2);
    FUN_4a150094(0x203);
    break;
  default:
    (**(code **)(**(int **)(param_1 + 8) + 0x20))(*(int **)(param_1 + 8),0xbe2);
    uVar8 = 0x201;
LAB_4a139eac:
    FUN_4a150094(uVar8);
    break;
  case 0x45:
    (**(code **)(**(int **)(param_1 + 8) + 0x90))(*(int **)(param_1 + 8),1);
    (**(code **)(**(int **)(param_1 + 8) + 0x28))(*(int **)(param_1 + 8),0xbe2);
    FUN_4a150094(0x203);
    break;
  case 0x47:
    (**(code **)(**(int **)(param_1 + 8) + 0x90))(*(int **)(param_1 + 8),1);
    (**(code **)(**(int **)(param_1 + 8) + 0x28))(*(int **)(param_1 + 8),0xbe2);
    FUN_4a150094(0x203);
  }
LAB_4a13a0ac:
  *(int *)(param_1 + 0x19c) = iVar6;
LAB_4a13a0b0:
  iVar6 = *(int *)(param_2 + 0x30);
  if (*(int *)(param_1 + 0x1a0) == iVar6) goto LAB_4a13a20c;
  uVar8 = 0xb44;
  uVar9 = 0x1d01;
  uVar10 = 0x901;
  if (iVar6 == 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x28))();
    (**(code **)(**(int **)(param_1 + 8) + 0x9c))(*(int **)(param_1 + 8),0x405);
    (**(code **)(**(int **)(param_1 + 8) + 0xb4))(*(int **)(param_1 + 8),0x1d01);
    (**(code **)(**(int **)(param_1 + 8) + 0xa0))(*(int **)(param_1 + 8),0x901);
  }
  else {
    if (*(int *)(iVar6 + 0x28) == 0xa1) {
      (**(code **)(**(int **)(param_1 + 8) + 0x28))();
      piVar2 = *(int **)(param_1 + 8);
      pcVar5 = *(code **)(*piVar2 + 0x9c);
      uVar8 = 0x404;
LAB_4a13a104:
      (*pcVar5)(piVar2,uVar8);
    }
    else {
      piVar2 = *(int **)(param_1 + 8);
      if (*(int *)(iVar6 + 0x28) == 0xa2) {
        pcVar5 = *(code **)(*piVar2 + 0x20);
        goto LAB_4a13a104;
      }
      (**(code **)(*piVar2 + 0x28))();
      (**(code **)(**(int **)(param_1 + 8) + 0x9c))(*(int **)(param_1 + 8),0x405);
    }
    if (*(int *)(iVar6 + 0x30) == 0xa4) {
      uVar9 = 0x1d00;
    }
    (**(code **)(**(int **)(param_1 + 8) + 0xb4))(*(int **)(param_1 + 8),uVar9);
    if (*(int *)(iVar6 + 0x2c) == 0xa9) {
      uVar10 = 0x900;
    }
    (**(code **)(**(int **)(param_1 + 8) + 0xa0))(*(int **)(param_1 + 8),uVar10);
  }
  *(int *)(param_1 + 0x1a0) = iVar6;
LAB_4a13a20c:
  iVar6 = *(int *)(param_2 + 0x58);
  if (iVar6 == 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x20))(*(int **)(param_1 + 8),0xb60);
  }
  else {
    if (*(int *)(param_1 + 0x198) != iVar6) {
      iVar1 = FUN_4a13b490(iVar6);
      if (iVar1 == 0x51) {
        uVar8 = 0x2601;
      }
      else {
        uVar8 = 0x800;
      }
      thunk_FUN_4a1501a4(0xb65,uVar8);
      uVar3 = FUN_4a13b498(iVar6);
      uVar8 = FUN_4a172098((uVar3 & 0xff0000) >> 0x10);
      local_34 = FUN_4a17211c(uVar8,iVar7);
      uVar8 = FUN_4a172098((uVar3 & 0xff00) >> 8);
      local_30 = FUN_4a17211c(uVar8,iVar7);
      uVar8 = FUN_4a172098(uVar3 & 0xff);
      local_2c = FUN_4a17211c(uVar8,iVar7);
      uVar8 = FUN_4a172098(uVar3 >> 0x18);
      local_28 = FUN_4a17211c(uVar8,iVar7);
      thunk_FUN_4a150190(0xb66,&local_34);
      uVar8 = FUN_4a13b480(iVar6);
      thunk_FUN_4a15017c(0xb63,uVar8);
      uVar8 = FUN_4a13b478(iVar6);
      thunk_FUN_4a15017c(0xb64,uVar8);
      uVar8 = FUN_4a13b470(iVar6);
      thunk_FUN_4a15017c(0xb62,uVar8);
      *(int *)(param_1 + 0x198) = iVar6;
    }
    (**(code **)(**(int **)(param_1 + 8) + 0x28))(*(int **)(param_1 + 8),0xb60);
  }
  iVar7 = *(int *)(param_1 + 0x18c) + -1;
  if (-1 < iVar7) {
    do {
      iVar6 = FUN_4a136540(param_2,iVar7);
      (**(code **)(**(int **)(param_1 + 8) + 0xc))(*(int **)(param_1 + 8),iVar7 + 0x84c0);
      if (iVar6 == 0) {
        (**(code **)(**(int **)(param_1 + 8) + 0x20))(*(int **)(param_1 + 8),0xde1);
      }
      else {
        if (*(int *)(*(int *)(param_1 + 0x1a4) + iVar7 * 4) != iVar6) {
          FUN_4a139a2c(param_1,iVar6,iVar7);
          *(int *)(*(int *)(param_1 + 0x1a4) + iVar7 * 4) = iVar6;
        }
        (**(code **)(**(int **)(param_1 + 8) + 0x28))(*(int **)(param_1 + 8),0xde1);
      }
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
    return;
  }
  return;
}



// Address: 4a13a400

undefined8 FUN_4a13a400(undefined4 param_1,int param_2)

{
  bool bVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint count;
  uint mode;
  uint uVar9;
  
  iVar7 = *(int *)(param_2 + 0x4c);
  uVar5 = *(uint *)(param_2 + 0x28);
  bVar1 = 0 < iVar7;
  iVar3 = *(int *)(param_2 + 0x5c);
  mode = 0;
  iVar2 = 0;
  if (iVar3 == 8) {
    if (bVar1) {
      mode = 5;
      goto LAB_4a13a480;
    }
    mode = 4;
  }
  else if (iVar3 == 9) {
    if (bVar1) {
      mode = 3;
LAB_4a13a480:
      iVar3 = *(int *)(param_2 + 0x50);
      if (iVar3 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(iVar3 + 8);
      }
      if (uVar5 < 0x80000000) {
        iVar2 = 0;
        if (0 < iVar7) {
          do {
            count = (uint)*(ushort *)(iVar8 + iVar2 * 2);
            uVar9 = mode;
            host_glDrawArrays_arm(mode,uVar5,count);
            iVar2 = iVar2 + 1;
            uVar5 = uVar5 + count;
          } while (iVar2 < iVar7);
          return CONCAT44(extraout_r1_00,uVar9);
        }
        return CONCAT44(param_2,iVar3);
      }
      iVar3 = *(int *)(param_2 + 0x3c);
      iVar6 = 0;
      if (iVar3 != 0) {
        iVar2 = *(int *)(iVar3 + 8);
      }
      iVar4 = 0;
      if (0 < iVar7) {
        do {
          uVar9 = (uint)*(ushort *)(iVar8 + iVar4 * 2);
          uVar5 = mode;
          host_glDrawElements_arm(mode,uVar9,0x1403,(void *)(iVar2 + iVar6 * 2));
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + uVar9;
        } while (iVar4 < iVar7);
        return CONCAT44(extraout_r1,uVar5);
      }
      return CONCAT44(param_2,iVar3);
    }
    mode = 1;
  }
  else if (bVar1) goto LAB_4a13a480;
  iVar2 = *(int *)(param_2 + 0x2c);
  if (iVar3 == 8) {
    iVar2 = iVar2 * 3;
  }
  else if (iVar3 == 9) {
    iVar2 = iVar2 << 1;
  }
  if (uVar5 < 0x80000000) {
    return CONCAT44(uVar5,mode);
  }
  return CONCAT44(iVar2,mode);
}



// Address: 4a13a580

void FUN_4a13a580(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_34 [16];
  
  iVar1 = FUN_4a1390fc(param_2,auStack_34);
  uVar7 = 0x140c;
  uVar8 = 0x1406;
  if ((*(char *)(param_1 + 0x1a8) == '\0') ||
     (*(int *)(*(int *)(param_1 + 0x1b4) + 8) <= *(int *)(param_1 + 0x1b8))) {
    iVar5 = *(int *)(iVar1 + 0x30);
    if (iVar5 == 1) {
      uVar6 = 0x1400;
    }
    else {
      uVar6 = 0x1402;
      if ((iVar5 != 2) && (uVar6 = uVar8, iVar5 == 3)) {
        uVar6 = uVar7;
      }
    }
    uVar3 = FUN_4a139030(iVar1);
    thunk_FUN_4a150d6c(*(undefined4 *)(iVar1 + 0x2c),uVar6,*(undefined4 *)(iVar1 + 0x40),uVar3);
  }
  else {
    FUN_4a13a790(param_1,iVar1,auStack_34);
  }
  iVar1 = *(int *)(param_2 + 0x44);
  piVar2 = *(int **)(param_1 + 8);
  if (iVar1 == 0) {
    (**(code **)(*piVar2 + 0x24))(piVar2,0x8076);
  }
  else {
    iVar5 = *(int *)(iVar1 + 0x30);
    if (iVar5 == 1) {
      uVar6 = 0x1401;
    }
    else {
      uVar6 = uVar8;
      if ((iVar5 != 2) && (iVar5 == 3)) {
        uVar6 = uVar7;
      }
    }
    (**(code **)(*piVar2 + 0x2c))();
    uVar3 = FUN_4a139030(iVar1);
    thunk_FUN_4a14fef8(*(undefined4 *)(iVar1 + 0x2c),uVar6,*(undefined4 *)(iVar1 + 0x40),uVar3);
  }
  iVar1 = *(int *)(param_1 + 0x18c) + -1;
  if (iVar1 < 0) {
    return;
  }
  do {
    (**(code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),iVar1 + 0x84c0);
    iVar5 = FUN_4a13916c(param_2,iVar1,0);
    if (iVar5 == 0) {
      (**(code **)(**(int **)(param_1 + 8) + 0x24))(*(int **)(param_1 + 8),0x8078);
    }
    else {
      iVar4 = *(int *)(iVar5 + 0x30);
      if (iVar4 == 1) {
        uVar6 = 0x1400;
      }
      else {
        uVar6 = 0x1402;
        if ((iVar4 != 2) && (uVar6 = uVar8, iVar4 == 3)) {
          uVar6 = uVar7;
        }
      }
      (**(code **)(**(int **)(param_1 + 8) + 0x2c))(*(int **)(param_1 + 8),0x8078);
      uVar3 = FUN_4a139030(iVar5);
      thunk_FUN_4a150a70(*(undefined4 *)(iVar5 + 0x2c),uVar6,*(undefined4 *)(iVar5 + 0x40),uVar3);
    }
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return;
}



// Address: 4a13a790

void FUN_4a13a790(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  short *psVar13;
  int local_94;
  short asStack_90 [2];
  int local_8c;
  undefined4 local_88;
  int local_84;
  undefined4 local_80;
  short local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  uint local_58 [4];
  byte local_48 [4];
  int local_44;
  int local_40;
  int *local_3c;
  int local_38;
  uint *local_34;
  int iStack_30;
  int local_2c;
  undefined4 *puStack_28;
  
  local_34 = *(uint **)(param_2 + 0x28);
  local_38 = *(int *)(param_2 + 0x2c);
  iVar10 = (int)local_34 * local_38;
  iVar11 = *(int *)(param_2 + 0x30);
  piVar8 = *(int **)(param_1 + 0x1bc);
  iStack_30 = param_1;
  local_2c = param_2;
  puStack_28 = param_3;
  if ((piVar8 == (int *)0x0) || (piVar8[2] < iVar10)) {
    if ((piVar8 != (int *)0x0) && (iVar1 = (**(code **)(*piVar8 + 8))(piVar8), iVar1 != 0)) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    piVar8 = (int *)FUN_4a0b8a80(iVar10 * 4);
    piVar8[6] = *(int *)PTR_PTR_4a13b008;
    piVar8 = (int *)(**(code **)(*piVar8 + 0x20))();
    *(int **)(param_1 + 0x1bc) = piVar8;
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 0xc))();
    }
  }
  local_3c = *(int **)(param_1 + 0x1bc);
  FUN_4a0b8eac(local_3c,iVar10);
  FUN_4a0b8eb4(local_3c);
  local_40 = *(int *)(param_1 + 0x1ac);
  local_44 = *(int *)(param_1 + 0x1b0);
  iVar1 = *(int *)(*(int *)(param_1 + 0x1b4) + 0xc);
  iVar9 = *(int *)(local_40 + 0x2c);
  if (iVar1 != 0) {
    iVar10 = *(int *)(iVar1 + 8);
  }
  iVar2 = *(int *)(local_44 + 0x30);
  if (iVar1 == 0) {
    iVar10 = 0;
  }
  puVar6 = local_58;
  if (iVar11 == 2) {
    if (iVar2 == 2) {
      local_8c = 0;
      if (0 < (int)local_34) {
        do {
          FUN_4a1386ac(local_40,local_8c,1,local_48);
          FUN_4a138c44(local_44,local_8c,1,&local_88);
          if (0 < iVar9) {
            puVar6 = local_58;
            iVar11 = iVar9;
            psVar13 = (short *)&local_88;
            do {
              if (*psVar13 == 0) {
                *puVar6 = 0;
              }
              else {
                uVar3 = FUN_4a171fac();
                uVar12 = FUN_4a17211c(uVar3,0x37800080);
                *puVar6 = uVar12;
              }
              iVar11 = iVar11 + -1;
              puVar6 = puVar6 + 1;
              psVar13 = psVar13 + 1;
            } while (iVar11 != 0);
          }
          FUN_4a138c44(local_2c,local_8c,1,&local_80);
          uVar5 = *param_3;
          uVar3 = FUN_4a171fac((int)(short)local_80);
          uVar3 = FUN_4a17211c(uVar3,uVar5);
          uVar3 = FUN_4a171a94(uVar3,param_3[1]);
          uVar4 = FUN_4a171fac((int)local_80._2_2_);
          uVar4 = FUN_4a17211c(uVar4,uVar5);
          uVar4 = FUN_4a171a94(uVar4,param_3[2]);
          uVar7 = FUN_4a171fac((int)local_7c);
          uVar7 = FUN_4a17211c(uVar7,uVar5);
          uVar7 = FUN_4a171a94(uVar7,param_3[3]);
          iVar11 = 0;
          local_68 = 0;
          local_64 = 0;
          local_60 = 0;
          if (0 < iVar9) {
            do {
              uVar12 = local_58[iVar11];
              if ((uVar12 & 0x7fffffff) == 0) break;
              local_6c = 0x3f800000;
              local_78 = uVar3;
              local_74 = uVar4;
              local_70 = uVar7;
              FUN_4a13c6b8(*(undefined4 *)(iVar10 + (uint)local_48[iVar11] * 4),&local_78,4);
              uVar5 = FUN_4a17211c(uVar12,local_78);
              local_68 = FUN_4a171a94(uVar5,local_68);
              uVar5 = FUN_4a17211c(uVar12,local_74);
              local_64 = FUN_4a171a94(uVar5,local_64);
              uVar5 = FUN_4a17211c(uVar12,local_70);
              local_60 = FUN_4a171a94(uVar5,local_60);
              iVar11 = iVar11 + 1;
            } while (iVar11 < iVar9);
          }
          (**(code **)(*local_3c + 0x2c))(local_3c,&local_68,0,local_38);
          local_8c = local_8c + 1;
          puVar6 = local_34;
        } while (local_8c < (int)local_34);
      }
    }
    else if ((iVar2 == 4) && (local_84 = 0, 0 < (int)local_34)) {
      do {
        FUN_4a1386ac(local_40,local_84,1,local_48);
        FUN_4a138794(local_44,local_84,1,local_58);
        FUN_4a138c44(local_2c,local_84,1,&local_80);
        uVar5 = *param_3;
        uVar3 = FUN_4a171fac((int)(short)local_80);
        uVar3 = FUN_4a17211c(uVar3,uVar5);
        uVar3 = FUN_4a171a94(uVar3,param_3[1]);
        uVar4 = FUN_4a171fac((int)local_80._2_2_);
        uVar4 = FUN_4a17211c(uVar4,uVar5);
        uVar4 = FUN_4a171a94(uVar4,param_3[2]);
        uVar7 = FUN_4a171fac((int)local_7c);
        uVar7 = FUN_4a17211c(uVar7,uVar5);
        uVar7 = FUN_4a171a94(uVar7,param_3[3]);
        iVar11 = 0;
        local_68 = 0;
        local_64 = 0;
        local_60 = 0;
        if (0 < iVar9) {
          do {
            uVar12 = local_58[iVar11];
            if ((uVar12 & 0x7fffffff) == 0) break;
            local_6c = 0x3f800000;
            local_78 = uVar3;
            local_74 = uVar4;
            local_70 = uVar7;
            FUN_4a13c6b8(*(undefined4 *)(iVar10 + (uint)local_48[iVar11] * 4),&local_78,4);
            uVar5 = FUN_4a17211c(uVar12,local_78);
            local_68 = FUN_4a171a94(uVar5,local_68);
            uVar5 = FUN_4a17211c(uVar12,local_74);
            local_64 = FUN_4a171a94(uVar5,local_64);
            uVar5 = FUN_4a17211c(uVar12,local_70);
            local_60 = FUN_4a171a94(uVar5,local_60);
            iVar11 = iVar11 + 1;
          } while (iVar11 < iVar9);
        }
        (**(code **)(*local_3c + 0x2c))(local_3c,&local_68,0,local_38);
        local_84 = local_84 + 1;
        puVar6 = local_34;
      } while (local_84 < (int)local_34);
    }
  }
  else if (iVar11 == 4) {
    if (iVar2 == 2) {
      local_94 = 0;
      if (0 < (int)local_34) {
        do {
          FUN_4a1386ac(local_40,local_94,1,local_48);
          FUN_4a138c44(local_44,local_94,1,asStack_90);
          if (0 < iVar9) {
            puVar6 = local_58;
            iVar11 = iVar9;
            psVar13 = asStack_90;
            do {
              if (*psVar13 == 0) {
                *puVar6 = 0;
              }
              else {
                uVar3 = FUN_4a171fac();
                uVar12 = FUN_4a17211c(uVar3,0x37800080);
                *puVar6 = uVar12;
              }
              iVar11 = iVar11 + -1;
              puVar6 = puVar6 + 1;
              psVar13 = psVar13 + 1;
            } while (iVar11 != 0);
          }
          FUN_4a138794(local_2c,local_94,1,&local_88);
          uVar7 = *param_3;
          uVar3 = FUN_4a17211c(local_88,uVar7);
          uVar3 = FUN_4a171a94(uVar3,param_3[1]);
          uVar4 = FUN_4a17211c(local_84,uVar7);
          uVar4 = FUN_4a171a94(uVar4,param_3[2]);
          uVar7 = FUN_4a17211c(local_80,uVar7);
          uVar7 = FUN_4a171a94(uVar7,param_3[3]);
          iVar11 = 0;
          local_68 = 0;
          local_64 = 0;
          local_60 = 0;
          if (0 < iVar9) {
            do {
              uVar12 = local_58[iVar11];
              if ((uVar12 & 0x7fffffff) == 0) break;
              local_6c = 0x3f800000;
              local_78 = uVar3;
              local_74 = uVar4;
              local_70 = uVar7;
              FUN_4a13c6b8(*(undefined4 *)(iVar10 + (uint)local_48[iVar11] * 4),&local_78,4);
              uVar5 = FUN_4a17211c(uVar12,local_78);
              local_68 = FUN_4a171a94(uVar5,local_68);
              uVar5 = FUN_4a17211c(uVar12,local_74);
              local_64 = FUN_4a171a94(uVar5,local_64);
              uVar5 = FUN_4a17211c(uVar12,local_70);
              local_60 = FUN_4a171a94(uVar5,local_60);
              iVar11 = iVar11 + 1;
            } while (iVar11 < iVar9);
          }
          (**(code **)(*local_3c + 0x2c))(local_3c,&local_68,0,local_38);
          local_94 = local_94 + 1;
          puVar6 = local_34;
        } while (local_94 < (int)local_34);
      }
    }
    else if ((iVar2 == 4) && (local_8c = 0, 0 < (int)local_34)) {
      do {
        FUN_4a1386ac(local_40,local_8c,1,local_48);
        FUN_4a138794(local_44,local_8c,1,local_58);
        FUN_4a138794(local_2c,local_8c,1,&local_88);
        uVar7 = *param_3;
        uVar3 = FUN_4a17211c(local_88,uVar7);
        uVar3 = FUN_4a171a94(uVar3,param_3[1]);
        uVar4 = FUN_4a17211c(local_84,uVar7);
        uVar4 = FUN_4a171a94(uVar4,param_3[2]);
        uVar7 = FUN_4a17211c(local_80,uVar7);
        uVar7 = FUN_4a171a94(uVar7,param_3[3]);
        iVar11 = 0;
        local_68 = 0;
        local_64 = 0;
        local_60 = 0;
        if (0 < iVar9) {
          do {
            uVar12 = local_58[iVar11];
            if ((uVar12 & 0x7fffffff) == 0) break;
            local_6c = 0x3f800000;
            local_78 = uVar3;
            local_74 = uVar4;
            local_70 = uVar7;
            FUN_4a13c6b8(*(undefined4 *)(iVar10 + (uint)local_48[iVar11] * 4),&local_78,4);
            uVar5 = FUN_4a17211c(uVar12,local_78);
            local_68 = FUN_4a171a94(uVar5,local_68);
            uVar5 = FUN_4a17211c(uVar12,local_74);
            local_64 = FUN_4a171a94(uVar5,local_64);
            uVar5 = FUN_4a17211c(uVar12,local_70);
            local_60 = FUN_4a171a94(uVar5,local_60);
            iVar11 = iVar11 + 1;
          } while (iVar11 < iVar9);
        }
        (**(code **)(*local_3c + 0x2c))(local_3c,&local_68,0,local_38);
        local_8c = local_8c + 1;
        puVar6 = local_34;
      } while (local_8c < (int)local_34);
    }
  }
  FUN_4a0b8eb4(local_3c,puVar6);
  uVar3 = (**(code **)(*local_3c + 0x30))(local_3c);
  thunk_FUN_4a150d6c(local_38,0x1406,0,uVar3);
  (**(code **)(*local_3c + 0x34))(local_3c);
  return;
}



// Address: 4a13b00c

undefined4 FUN_4a13b00c(int param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  ushort *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int unaff_r10;
  bool bVar15;
  bool bVar16;
  int iStack_5c;
  int iStack_58;
  int local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  undefined *local_44 [2];
  int local_3c;
  int *local_38;
  int local_30;
  int local_2c;
  undefined4 local_28;
  
  iVar9 = *(int *)(param_1 + 0x50);
  iVar14 = *(int *)(param_1 + 0x4c);
  if (iVar9 != 0) {
    unaff_r10 = *(int *)(iVar9 + 8);
  }
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  iVar12 = *(int *)(param_1 + 0x28);
  if (iVar9 == 0) {
    unaff_r10 = 0;
  }
  if (iVar12 == -1) {
    iVar12 = 0;
    iVar9 = 0;
    if (*(int *)(param_1 + 0x3c) != 0) {
      iVar9 = *(int *)(*(int *)(param_1 + 0x3c) + 8);
    }
    iVar13 = 0;
    if (0 < iVar14) {
      do {
        uVar11 = (uint)*(ushort *)(unaff_r10 + iVar13 * 2);
        uVar10 = 2;
        if (2 < uVar11) {
          do {
            puVar5 = (ushort *)(iVar9 + iVar12 * 2 + uVar10 * 2);
            local_48 = (uint)puVar5[-2];
            local_4c = (uint)puVar5[-1];
            local_50 = (uint)*puVar5;
            if ((local_48 != local_4c && local_4c != local_50) && local_48 != local_50) {
              FUN_4a1672a4(&local_30,&local_48);
              if ((uVar10 & 1) == 0) {
                FUN_4a1672a4(&local_30,&local_4c);
                FUN_4a1672a4(&local_30,&local_50);
              }
              else {
                FUN_4a1672a4(&local_30,&local_50);
                FUN_4a1672a4(&local_30,&local_4c);
              }
            }
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < (int)uVar11);
        }
        iVar13 = iVar13 + 1;
        iVar12 = iVar12 + uVar11;
      } while (iVar13 < iVar14);
    }
  }
  else {
    iVar9 = 0;
    if (0 < iVar14) {
      do {
        uVar11 = (uint)*(ushort *)(unaff_r10 + iVar9 * 2);
        uVar10 = 2;
        if (2 < uVar11) {
          do {
            iStack_5c = iVar12 + uVar10;
            local_54 = iStack_5c + -2;
            iStack_58 = iStack_5c + -1;
            FUN_4a1672a4(&local_30,&local_54);
            if ((uVar10 & 1) == 0) {
              FUN_4a1672a4(&local_30,&iStack_58);
              FUN_4a1672a4(&local_30,&iStack_5c);
            }
            else {
              FUN_4a1672a4(&local_30,&iStack_5c);
              FUN_4a1672a4(&local_30,&iStack_58);
            }
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < (int)uVar11);
        }
        iVar9 = iVar9 + 1;
        iVar12 = iVar12 + uVar11;
      } while (iVar9 < iVar14);
    }
  }
  iVar9 = local_2c - local_30 >> 2;
  piVar6 = (int *)FUN_4a0c6bc0(local_44);
  puVar2 = PTR_PTR_4a13b3c0;
  piVar6[2] = 0;
  piVar6[3] = 0;
  *piVar6 = (int)puVar2;
  if (0 < iVar9) {
    iVar14 = FUN_4a15e080(iVar9 << 2);
    if (iVar14 == 0) {
      iVar14 = FUN_4a1669a8();
    }
    iVar12 = 0;
    do {
      *(undefined4 *)(iVar14 + iVar12 * 4) = 0;
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar9);
    thunk_FUN_4a161570(0x18);
    puVar7 = (undefined4 *)FUN_4a0c0628();
    puVar7[3] = 4;
    puVar7[4] = iVar9;
    puVar3 = PTR_PTR_4a13b3c4;
    *puVar7 = PTR_PTR_4a13b3c4;
    puVar7[2] = iVar14;
    *(undefined1 *)(puVar7 + 5) = 1;
    if (puVar7 != (undefined4 *)0x0) {
      (**(code **)(puVar3 + 0xc))(puVar7);
    }
    (**(code **)(*piVar6 + 0x1c))(piVar6);
    piVar6[2] = iVar9;
    piVar6[3] = (int)puVar7;
  }
  iVar9 = 0;
  if (0 < local_3c) {
    do {
      if (local_38 == (int *)0x0) {
        iVar14 = 0;
      }
      else {
        iVar14 = local_38[2];
      }
      *(undefined4 *)(iVar14 + iVar9 * 4) = *(undefined4 *)(local_30 + iVar9 * 4);
      iVar9 = iVar9 + 1;
    } while (iVar9 < local_3c);
  }
  iVar9 = (int)((ulonglong)((longlong)DAT_4a13b3c8 * (longlong)local_3c) >> 0x20);
  uVar8 = thunk_FUN_4a161570(0x60,DAT_4a13b3c8,(int)((longlong)DAT_4a13b3c8 * (longlong)local_3c));
  uVar8 = FUN_4a0ab958(uVar8,8,iVar9 - (iVar9 >> 0x1f),local_44);
  piVar6 = local_38;
  iVar9 = local_3c;
  local_44[0] = puVar2;
  bVar15 = local_38 != (int *)0x0;
  if (bVar15) {
    iVar14 = local_38[2];
    cVar1 = (char)local_38[5];
  }
  else {
    iVar14 = 0;
    cVar1 = '\0';
  }
  bVar16 = local_38 == (int *)0x0;
  local_38 = (int *)0x0;
  local_3c = 0;
  if ((bVar16) || (iVar12 = (**(code **)(*piVar6 + 8))(piVar6), iVar12 == 0)) {
    bVar4 = 0;
  }
  else {
    (**(code **)(*piVar6 + 4))(piVar6);
    bVar4 = 1;
  }
  if (!(bool)(bVar4 & (bVar15 && cVar1 != '\0'))) {
    iVar14 = 0;
  }
  if (iVar14 != 0) {
    iVar12 = 0;
    if (0 < iVar9) {
      do {
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar9);
      if (iVar14 == 0) goto LAB_4a13b390;
    }
    FUN_4a14f21c();
  }
LAB_4a13b390:
  FUN_4a0c6bf4(local_44);
  if (local_30 != 0) {
    FUN_4a14f21c(local_30);
  }
  return uVar8;
}



// Address: 4a13b3dc

void FUN_4a13b3dc(void)

{
  undefined4 *puVar1;
  
  thunk_FUN_4a161570(0x40);
  puVar1 = (undefined4 *)FUN_4a0b7654();
  *puVar1 = PTR_PTR_4a13b42c;
  puVar1[10] = 0x44;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined1 *)(puVar1 + 0xd) = 1;
  *(undefined1 *)((int)puVar1 + 0x35) = 1;
  *(undefined1 *)((int)puVar1 + 0x36) = 1;
  *(undefined1 *)((int)puVar1 + 0x37) = 1;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  return;
}



// Address: 4a13b430

undefined4 * FUN_4a13b430(void)

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
  uVar2 = FUN_4a04d4d0(0,s_javax_microedition_m3g_Compositi_4a13b448,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a13b470

undefined4 FUN_4a13b470(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// Address: 4a13b478

undefined4 FUN_4a13b478(int param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}



// Address: 4a13b480

undefined4 FUN_4a13b480(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



// Address: 4a13b490

undefined4 FUN_4a13b490(int param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



// Address: 4a13b498

undefined4 FUN_4a13b498(int param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



// Address: 4a13b4a0

int FUN_4a13b4a0(int param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = -1 < param_2;
  bVar2 = param_2 == 0;
  if (bVar1) {
    param_3 = *(int *)(param_1 + 0xf0);
    bVar2 = param_3 == param_2;
  }
  if (bVar2 || (!bVar1 || param_3 < param_2)) {
    param_1 = 0;
  }
  if (!bVar2 && (bVar1 && param_2 <= param_3)) {
    return *(int *)(*(int *)(param_1 + 0x10c) + param_2 * 4);
  }
  return param_1;
}



// Address: 4a13b4c0

void FUN_4a13b4c0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_4a13c094();
  if ((*(int *)(param_1 + 0xdc) != 0) && (param_2[1] == 0)) {
    uVar1 = FUN_4a0b74b0(*(int *)(param_1 + 0xdc),*param_2);
    param_2[1] = uVar1;
  }
  iVar4 = *(int *)(param_1 + 0xf0);
  iVar3 = 0;
  if (0 < iVar4) {
    do {
      if (iVar3 < *(int *)(param_1 + 0xf0)) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x10c) + iVar3 * 4);
        goto LAB_4a13b528;
      }
      do {
        iVar2 = 0;
LAB_4a13b528:
        if ((iVar2 != 0) && (param_2[1] == 0)) {
          uVar1 = FUN_4a0b74b0(iVar2,*param_2);
          param_2[1] = uVar1;
        }
        iVar3 = iVar3 + 1;
        if (iVar4 <= iVar3) goto LAB_4a13b554;
      } while (iVar3 < 0);
    } while( true );
  }
LAB_4a13b554:
  iVar3 = 0;
  if (iVar4 < 1) {
    return;
  }
  do {
    if (iVar3 < *(int *)(param_1 + 0xf0)) {
      iVar2 = *(int *)(*(int *)(param_1 + 0xf4) + iVar3 * 4);
      goto LAB_4a13b588;
    }
    do {
      iVar2 = 0;
LAB_4a13b588:
      if ((iVar2 != 0) && (param_2[1] == 0)) {
        uVar1 = FUN_4a0b74b0(iVar2,*param_2);
        param_2[1] = uVar1;
      }
      iVar3 = iVar3 + 1;
      if (iVar4 <= iVar3) {
        return;
      }
    } while (iVar3 < 0);
  } while( true );
}



// Address: 4a13b5bc

int FUN_4a13b5bc(int param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = -1 < param_2;
  bVar2 = param_2 == 0;
  if (bVar1) {
    param_3 = *(int *)(param_1 + 0xf0);
    bVar2 = param_3 == param_2;
  }
  if (bVar2 || (!bVar1 || param_3 < param_2)) {
    param_1 = 0;
  }
  if (!bVar2 && (bVar1 && param_2 <= param_3)) {
    return *(int *)(*(int *)(param_1 + 0xf4) + param_2 * 4);
  }
  return param_1;
}



// Address: 4a13b5dc

undefined4 FUN_4a13b5dc(int param_1)

{
  return *(undefined4 *)(param_1 + 0xf0);
}



// Address: 4a13b5e4

undefined4 FUN_4a13b5e4(int param_1)

{
  return *(undefined4 *)(param_1 + 0xdc);
}



// Address: 4a13b5ec

int FUN_4a13b5ec(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar1 = *(int *)PTR_DAT_4a13b654;
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
  iVar2 = FUN_4a0b74f4(*(undefined4 *)(param_1 + 0xdc),param_2);
  if (iVar1 <= iVar2) {
    iVar2 = iVar1;
  }
  return iVar2;
}



// Address: 4a13b660

void FUN_4a13b660(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a13b68c;
  return;
}



// Address: 4a13b690

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

undefined8 FUN_4a13b690(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  char in_OV;
  bool bVar3;
  bool bVar4;
  
  uVar1 = FUN_4a171fac(*(undefined4 *)(param_1 + 0xd4));
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



// Address: 4a13b6a8

undefined4 FUN_4a13b6a8(int *param_1,int *param_2,int param_3)

{
  char cVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  int *piVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0xc))(param_1);
  }
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))();
  }
  puVar4 = PTR_DAT_4a13bba4;
  cVar1 = *PTR_DAT_4a13bba4;
  puVar2 = PTR_DAT_4a13bba4;
  while (PTR_DAT_4a13bba4 = puVar2, cVar1 != '\0') {
    FUN_4a0c74d4();
    puVar2 = PTR_DAT_4a13bba4;
    cVar1 = *puVar4;
  }
  *puVar2 = 1;
  iVar9 = *(int *)(puVar2 + 4);
  piVar11 = param_1;
  if (param_1 != param_2) {
    do {
      iVar5 = *(int *)(iVar9 + 0xc);
      if ((*(int *)(iVar9 + 0x10) == iVar5) && (iVar6 = *(int *)(iVar9 + 8) + iVar5, iVar5 < iVar6))
      {
        *(int *)(iVar9 + 0xc) = iVar6;
        iVar13 = *(int *)(iVar9 + 0x14);
        iVar5 = thunk_FUN_4a161570(iVar6 * 4);
        *(int *)(iVar9 + 0x14) = iVar5;
        if (iVar5 != 0) {
          iVar5 = 0;
          if (0 < *(int *)(iVar9 + 0x10)) {
            do {
              iVar6 = iVar5 + 1;
              *(undefined4 *)(*(int *)(iVar9 + 0x14) + iVar5 * 4) =
                   *(undefined4 *)(iVar13 + iVar5 * 4);
              iVar5 = iVar6;
            } while (iVar6 < *(int *)(iVar9 + 0x10));
          }
          thunk_FUN_4a161530(iVar13);
        }
        iVar5 = *(int *)(iVar9 + 0x10);
        if (*(int *)(iVar9 + 0x10) < *(int *)(iVar9 + 0xc)) {
          do {
            iVar6 = iVar5 + 1;
            *(undefined4 *)(*(int *)(iVar9 + 0x14) + iVar5 * 4) = 0;
            iVar5 = iVar6;
          } while (iVar6 < *(int *)(iVar9 + 0xc));
        }
      }
      iVar5 = *(int *)(iVar9 + 0x10);
      *(int *)(iVar9 + 0x10) = iVar5 + 1;
      piVar15 = *(int **)(*(int *)(iVar9 + 0x14) + iVar5 * 4);
      if (piVar11 != (int *)0x0) {
        (**(code **)(*piVar11 + 0xc))();
      }
      *(int **)(*(int *)(iVar9 + 0x14) + iVar5 * 4) = piVar11;
      if ((piVar15 != (int *)0x0) && (iVar5 = (**(code **)(*piVar15 + 8))(piVar15), iVar5 != 0)) {
        (**(code **)(*piVar15 + 4))(piVar15);
      }
      piVar15 = (int *)piVar11[0x33];
      if (piVar15 != (int *)0x0) {
        piVar11 = piVar15;
      }
    } while (piVar15 != (int *)0x0 && piVar15 != param_2);
  }
  if (piVar11 != param_2) {
    iVar5 = 0;
    if (0 < *(int *)(iVar9 + 0x10)) {
      do {
        piVar15 = *(int **)(*(int *)(iVar9 + 0x14) + iVar5 * 4);
        *(undefined4 *)(*(int *)(iVar9 + 0x14) + iVar5 * 4) = 0;
        if ((piVar15 != (int *)0x0) && (iVar6 = (**(code **)(*piVar15 + 8))(piVar15), iVar6 != 0)) {
          (**(code **)(*piVar15 + 4))(piVar15);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(iVar9 + 0x10));
    }
    *(undefined4 *)(iVar9 + 0x10) = 0;
    piVar15 = param_2;
    do {
      piVar3 = piVar15;
      if (piVar3 == param_1) break;
      iVar5 = *(int *)(iVar9 + 0xc);
      if ((*(int *)(iVar9 + 0x10) == iVar5) && (iVar6 = *(int *)(iVar9 + 8) + iVar5, iVar5 < iVar6))
      {
        *(int *)(iVar9 + 0xc) = iVar6;
        iVar13 = *(int *)(iVar9 + 0x14);
        iVar5 = thunk_FUN_4a161570(iVar6 * 4);
        *(int *)(iVar9 + 0x14) = iVar5;
        if (iVar5 != 0) {
          iVar5 = 0;
          if (0 < *(int *)(iVar9 + 0x10)) {
            do {
              iVar6 = iVar5 + 1;
              *(undefined4 *)(*(int *)(iVar9 + 0x14) + iVar5 * 4) =
                   *(undefined4 *)(iVar13 + iVar5 * 4);
              iVar5 = iVar6;
            } while (iVar6 < *(int *)(iVar9 + 0x10));
          }
          thunk_FUN_4a161530(iVar13);
        }
        iVar5 = *(int *)(iVar9 + 0x10);
        if (*(int *)(iVar9 + 0x10) < *(int *)(iVar9 + 0xc)) {
          do {
            iVar6 = iVar5 + 1;
            *(undefined4 *)(*(int *)(iVar9 + 0x14) + iVar5 * 4) = 0;
            iVar5 = iVar6;
          } while (iVar6 < *(int *)(iVar9 + 0xc));
        }
      }
      iVar5 = *(int *)(iVar9 + 0x10);
      *(int *)(iVar9 + 0x10) = iVar5 + 1;
      piVar15 = *(int **)(*(int *)(iVar9 + 0x14) + iVar5 * 4);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0xc))();
      }
      *(int **)(*(int *)(iVar9 + 0x14) + iVar5 * 4) = piVar3;
      if ((piVar15 != (int *)0x0) && (iVar5 = (**(code **)(*piVar15 + 8))(piVar15), iVar5 != 0)) {
        (**(code **)(*piVar15 + 4))(piVar15);
      }
      piVar15 = (int *)piVar3[0x33];
    } while ((int *)piVar3[0x33] != (int *)0x0);
    if (piVar3 != param_1) {
      iVar5 = 0;
      if (0 < *(int *)(iVar9 + 0x10)) {
        do {
          piVar11 = *(int **)(*(int *)(iVar9 + 0x14) + iVar5 * 4);
          *(undefined4 *)(*(int *)(iVar9 + 0x14) + iVar5 * 4) = 0;
          if ((piVar11 != (int *)0x0) && (iVar6 = (**(code **)(*piVar11 + 8))(piVar11), iVar6 != 0))
          {
            (**(code **)(*piVar11 + 4))(piVar11);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(iVar9 + 0x10));
      }
      puVar4 = PTR_DAT_4a13bba4;
      *(undefined4 *)(iVar9 + 0x10) = 0;
      *puVar4 = 0;
      if (param_2 != (int *)0x0) {
        (**(code **)(*param_2 + 8))();
      }
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))();
      }
      return 0;
    }
  }
  puVar4 = PTR_DAT_4a13bba8;
  uVar7 = *(undefined4 *)(PTR_DAT_4a13bba8 + 4);
  uVar8 = *(undefined4 *)(PTR_DAT_4a13bba8 + 8);
  uVar10 = *(undefined4 *)(PTR_DAT_4a13bba8 + 0xc);
  uVar12 = *(undefined4 *)(PTR_DAT_4a13bba8 + 0x10);
  uVar14 = *(undefined4 *)(PTR_DAT_4a13bba8 + 0x14);
  uVar16 = *(undefined4 *)(PTR_DAT_4a13bba8 + 0x18);
  puVar17 = (undefined4 *)(PTR_DAT_4a13bba8 + 0x1c);
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)PTR_DAT_4a13bba8;
  *(undefined4 *)(param_3 + 0xc) = uVar7;
  *(undefined4 *)(param_3 + 0x10) = uVar8;
  *(undefined4 *)(param_3 + 0x14) = uVar10;
  *(undefined4 *)(param_3 + 0x18) = uVar12;
  *(undefined4 *)(param_3 + 0x1c) = uVar14;
  *(undefined4 *)(param_3 + 0x20) = uVar16;
  uVar7 = *(undefined4 *)(puVar4 + 0x20);
  uVar8 = *(undefined4 *)(puVar4 + 0x24);
  uVar10 = *(undefined4 *)(puVar4 + 0x28);
  uVar12 = *(undefined4 *)(puVar4 + 0x2c);
  uVar14 = *(undefined4 *)(puVar4 + 0x30);
  uVar16 = *(undefined4 *)(puVar4 + 0x34);
  *(undefined4 *)(param_3 + 0x24) = *puVar17;
  *(undefined4 *)(param_3 + 0x28) = uVar7;
  *(undefined4 *)(param_3 + 0x2c) = uVar8;
  *(undefined4 *)(param_3 + 0x30) = uVar10;
  *(undefined4 *)(param_3 + 0x34) = uVar12;
  *(undefined4 *)(param_3 + 0x38) = uVar14;
  *(undefined4 *)(param_3 + 0x3c) = uVar16;
  uVar7 = *(undefined4 *)(puVar4 + 0x3c);
  *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(puVar4 + 0x38);
  *(undefined4 *)(param_3 + 0x44) = uVar7;
  iVar5 = *(int *)(iVar9 + 0x10);
  while (iVar5 = iVar5 + -1, -1 < iVar5) {
    FUN_4a139528(*(undefined4 *)(*(int *)(iVar9 + 0x14) + iVar5 * 4),param_3);
  }
  if (piVar11 != param_2) {
    FUN_4a0b8640(param_3);
  }
  iVar5 = 0;
  if (0 < *(int *)(iVar9 + 0x10)) {
    do {
      piVar11 = *(int **)(*(int *)(iVar9 + 0x14) + iVar5 * 4);
      *(undefined4 *)(*(int *)(iVar9 + 0x14) + iVar5 * 4) = 0;
      if ((piVar11 != (int *)0x0) && (iVar6 = (**(code **)(*piVar11 + 8))(piVar11), iVar6 != 0)) {
        (**(code **)(*piVar11 + 4))(piVar11);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(iVar9 + 0x10));
  }
  puVar4 = PTR_DAT_4a13bba4;
  *(undefined4 *)(iVar9 + 0x10) = 0;
  *puVar4 = 0;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  return 1;
}



// Address: 4a13bbac

void FUN_4a13bbac(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_4a13c094();
  iVar1 = 0;
  if (*(int *)(param_1 + 0xdc) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xdc) + 0x10);
  }
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0xdc) + 0x14) + iVar1 * 4);
      if ((iVar2 != 0) && (param_2[1] == 0)) {
        uVar3 = FUN_4a0b74b0(iVar2,*param_2);
        param_2[1] = uVar3;
      }
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
    return;
  }
  return;
}



// Address: 4a13bc10

int FUN_4a13bc10(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = 0;
  iVar4 = *(int *)PTR_DAT_4a13bcb4;
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x10);
  }
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    iVar2 = FUN_4a0b74f4(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + iVar1 * 4),param_2
                        );
    if (iVar2 < iVar4) {
      iVar4 = iVar2;
    }
  }
  iVar2 = 1;
  iVar1 = 0;
  if (*(int *)(param_1 + 0xdc) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xdc) + 0x10);
  }
  iVar5 = iVar1 + 1;
  if (1 < iVar5) {
    do {
      iVar1 = iVar1 + -1;
      iVar3 = FUN_4a0b74f4(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xdc) + 0x14) + iVar1 * 4),
                           param_2);
      if (iVar3 < iVar4) {
        iVar4 = iVar3;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar5);
  }
  return iVar4;
}



// Address: 4a13bccc

undefined4 FUN_4a13bccc(int param_1)

{
  return *(undefined4 *)(param_1 + 0xe0);
}



// Address: 4a13bcd4

undefined4 FUN_4a13bcd4(int param_1)

{
  return *(undefined4 *)(param_1 + 0xe4);
}



// Address: 4a13bce4

undefined4 FUN_4a13bce4(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_2 + 0xc);
  iVar3 = 0;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar1 + 8);
  }
  if (iVar4 != 0) {
    puVar2 = (undefined4 *)0x0;
    if (iVar1 != 0) {
      puVar2 = *(undefined4 **)(iVar1 + 8);
    }
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    *puVar2 = *(undefined4 *)(param_1 + 0xe0);
    if (*(int *)(param_2 + 0xc) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_2 + 0xc) + 8);
    }
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0xe4);
    if (*(int *)(param_2 + 0xc) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_2 + 0xc) + 8);
    }
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 0xe8);
    if (*(int *)(param_2 + 0xc) != 0) {
      iVar3 = *(int *)(*(int *)(param_2 + 0xc) + 8);
    }
    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_1 + 0xec);
  }
  return *(undefined4 *)(param_1 + 0xdc);
}



// Address: 4a13bd60

undefined4 FUN_4a13bd60(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_2 != 0) {
    FUN_4a13bdac(param_1);
    uVar1 = *(undefined4 *)(param_1 + 0xfc);
    uVar2 = *(undefined4 *)(param_1 + 0x100);
    uVar3 = *(undefined4 *)(param_1 + 0x104);
    uVar4 = *(undefined4 *)(param_1 + 0x108);
    uVar5 = *(undefined4 *)(param_1 + 0x10c);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0xf8);
    *(undefined4 *)(param_2 + 0xc) = uVar1;
    *(undefined4 *)(param_2 + 0x10) = uVar2;
    *(undefined4 *)(param_2 + 0x14) = uVar3;
    *(undefined4 *)(param_2 + 0x18) = uVar4;
    *(undefined4 *)(param_2 + 0x1c) = uVar5;
    uVar1 = *(undefined4 *)(param_1 + 0x114);
    uVar2 = *(undefined4 *)(param_1 + 0x118);
    uVar3 = *(undefined4 *)(param_1 + 0x11c);
    uVar4 = *(undefined4 *)(param_1 + 0x120);
    uVar5 = *(undefined4 *)(param_1 + 0x124);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x110);
    *(undefined4 *)(param_2 + 0x24) = uVar1;
    *(undefined4 *)(param_2 + 0x28) = uVar2;
    *(undefined4 *)(param_2 + 0x2c) = uVar3;
    *(undefined4 *)(param_2 + 0x30) = uVar4;
    *(undefined4 *)(param_2 + 0x34) = uVar5;
    uVar1 = *(undefined4 *)(param_1 + 300);
    uVar2 = *(undefined4 *)(param_1 + 0x130);
    uVar3 = *(undefined4 *)(param_1 + 0x134);
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_1 + 0x128);
    *(undefined4 *)(param_2 + 0x3c) = uVar1;
    *(undefined4 *)(param_2 + 0x40) = uVar2;
    *(undefined4 *)(param_2 + 0x44) = uVar3;
  }
  return *(undefined4 *)(param_1 + 0xdc);
}



// Address: 4a13bdac

void FUN_4a13bdac(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
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
  
  iVar1 = *(int *)(param_1 + 0xdc);
  if (iVar1 != 0x30) {
    if (iVar1 == 0x31) {
      uVar4 = *(undefined4 *)(param_1 + 0xe0);
      uVar2 = FUN_4a17211c(*(undefined4 *)(param_1 + 0xe4),uVar4);
      uVar3 = FUN_4a1725c0(*(undefined4 *)(param_1 + 0xec),*(undefined4 *)(param_1 + 0xe8));
      uVar7 = *(undefined4 *)(PTR_DAT_4a13bf74 + 4);
      uVar10 = *(undefined4 *)(PTR_DAT_4a13bf74 + 8);
      uVar12 = *(undefined4 *)(PTR_DAT_4a13bf74 + 0xc);
      uVar15 = *(undefined4 *)(PTR_DAT_4a13bf74 + 0x10);
      uVar17 = *(undefined4 *)(PTR_DAT_4a13bf74 + 0x18);
      uVar13 = *(undefined4 *)(PTR_DAT_4a13bf74 + 0x1c);
      uVar8 = *(undefined4 *)(PTR_DAT_4a13bf74 + 0x20);
      uVar11 = *(undefined4 *)(PTR_DAT_4a13bf74 + 0x24);
      uVar16 = *(undefined4 *)(PTR_DAT_4a13bf74 + 0x30);
      uVar18 = *(undefined4 *)(PTR_DAT_4a13bf74 + 0x34);
      uVar14 = *(undefined4 *)(PTR_DAT_4a13bf74 + 0x38);
      uVar9 = *(undefined4 *)(PTR_DAT_4a13bf74 + 0x3c);
      uVar2 = FUN_4a171bb8(0x40000000,uVar2);
      uVar4 = FUN_4a171bb8(0x40000000,uVar4);
      uVar6 = FUN_4a171bb8(0xc0000000,uVar3);
      uVar5 = FUN_4a171a94(*(undefined4 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xec));
      uVar3 = FUN_4a171bb8(uVar5 ^ 0x80000000,uVar3);
      *(undefined4 *)(param_1 + 0xf8) = uVar2;
      *(undefined4 *)(param_1 + 0xfc) = uVar7;
      *(undefined4 *)(param_1 + 0x100) = uVar10;
      *(undefined4 *)(param_1 + 0x104) = uVar12;
      *(undefined4 *)(param_1 + 0x108) = uVar15;
      *(undefined4 *)(param_1 + 0x10c) = uVar4;
      *(undefined4 *)(param_1 + 0x110) = uVar17;
      *(undefined4 *)(param_1 + 0x114) = uVar13;
      *(undefined4 *)(param_1 + 0x118) = uVar8;
      *(undefined4 *)(param_1 + 0x11c) = uVar11;
      *(undefined4 *)(param_1 + 0x120) = uVar6;
      *(undefined4 *)(param_1 + 0x124) = uVar3;
      *(undefined4 *)(param_1 + 0x128) = uVar16;
      *(undefined4 *)(param_1 + 300) = uVar18;
      *(undefined4 *)(param_1 + 0x130) = uVar14;
      *(undefined4 *)(param_1 + 0x134) = uVar9;
    }
    else if (iVar1 == 0x32) {
      FUN_4a17211c(*(undefined4 *)(param_1 + 0xe0),DAT_4a13bf6c);
      uVar2 = FUN_4a002fe0();
      uVar3 = FUN_4a17211c(*(undefined4 *)(param_1 + 0xe4),uVar2);
      uVar13 = *(undefined4 *)(param_1 + 0xe8);
      uVar14 = *(undefined4 *)(param_1 + 0xec);
      uVar4 = FUN_4a1725c0(uVar14,uVar13);
      uVar3 = FUN_4a171bb8(0x3f800000,uVar3);
      uVar2 = FUN_4a171bb8(0x3f800000,uVar2);
      uVar5 = FUN_4a171a94(uVar13,uVar14);
      uVar6 = FUN_4a171bb8(uVar5 ^ 0x80000000,uVar4);
      uVar13 = FUN_4a17211c(uVar13,0xc0000000);
      uVar13 = FUN_4a17211c(uVar13,uVar14);
      uVar4 = FUN_4a171bb8(uVar13,uVar4);
      uVar7 = *(undefined4 *)(PTR_DAT_4a13bf70 + 4);
      uVar10 = *(undefined4 *)(PTR_DAT_4a13bf70 + 8);
      uVar15 = *(undefined4 *)(PTR_DAT_4a13bf70 + 0xc);
      uVar18 = *(undefined4 *)(PTR_DAT_4a13bf70 + 0x10);
      uVar13 = *(undefined4 *)(PTR_DAT_4a13bf70 + 0x18);
      uVar8 = *(undefined4 *)(PTR_DAT_4a13bf70 + 0x1c);
      uVar11 = *(undefined4 *)(PTR_DAT_4a13bf70 + 0x20);
      uVar16 = *(undefined4 *)(PTR_DAT_4a13bf70 + 0x24);
      uVar14 = *(undefined4 *)(PTR_DAT_4a13bf70 + 0x30);
      uVar9 = *(undefined4 *)(PTR_DAT_4a13bf70 + 0x34);
      uVar12 = *(undefined4 *)(PTR_DAT_4a13bf70 + 0x38);
      uVar17 = *(undefined4 *)(PTR_DAT_4a13bf70 + 0x3c);
      *(undefined4 *)(param_1 + 0xf8) = uVar3;
      *(undefined4 *)(param_1 + 0xfc) = uVar7;
      *(undefined4 *)(param_1 + 0x100) = uVar10;
      *(undefined4 *)(param_1 + 0x104) = uVar15;
      *(undefined4 *)(param_1 + 0x108) = uVar18;
      *(undefined4 *)(param_1 + 0x10c) = uVar2;
      *(undefined4 *)(param_1 + 0x110) = uVar13;
      *(undefined4 *)(param_1 + 0x114) = uVar8;
      *(undefined4 *)(param_1 + 0x118) = uVar11;
      *(undefined4 *)(param_1 + 0x11c) = uVar16;
      *(undefined4 *)(param_1 + 0x120) = uVar6;
      *(undefined4 *)(param_1 + 0x124) = uVar4;
      *(undefined4 *)(param_1 + 0x128) = uVar14;
      *(undefined4 *)(param_1 + 300) = uVar9;
      *(undefined4 *)(param_1 + 0x130) = uVar12;
      *(undefined4 *)(param_1 + 0x134) = uVar17;
    }
  }
  *(undefined1 *)(param_1 + 0x138) = 1;
  return;
}



// Address: 4a13bf78

undefined4 FUN_4a13bf78(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x48) <= param_2) {
    param_2 = *(int *)(param_1 + 0x48) + -1;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x44) + param_2 * 4);
}



// Address: 4a13bf90

int FUN_4a13bf90(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30) >> (param_2 & 0xff);
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  return iVar1;
}



// Address: 4a13bfa0

int FUN_4a13bfa0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34) >> (param_2 & 0xff);
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  return iVar1;
}



// Address: 4a13bfb0

int FUN_4a13bfb0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x48) <= (int)param_2) {
    param_2 = *(int *)(param_1 + 0x48) - 1;
  }
  iVar1 = *(int *)(param_1 + 0x30) >> (param_2 & 0xff);
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  iVar2 = *(int *)(param_1 + 0x34) >> (param_2 & 0xff);
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x3c) * iVar2 * iVar1 + 7;
  iVar1 = (int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1d)) >> 3;
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 0x78:
    if (iVar1 < 8) {
      iVar1 = 8;
    }
    break;
  case 0x79:
    if (iVar1 < 0x10) {
      iVar1 = 0x10;
    }
    return iVar1;
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
    if (iVar1 < 0x20) {
      iVar1 = 0x20;
    }
    return iVar1;
  default:
    return iVar1;
  }
  return iVar1;
}



// Address: 4a13c044

undefined4 FUN_4a13c044(int param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// Address: 4a13c054

void FUN_4a13c054(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a13c080;
  return;
}



// Address: 4a13c084

undefined4 FUN_4a13c084(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// Address: 4a13c08c

undefined1 FUN_4a13c08c(int param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



// Address: 4a13c094

void FUN_4a13c094(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iStack_1c;
  int *piStack_18;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x10);
  }
  uVar3 = iVar1 - 1;
  if (0x7fffffff < uVar3) {
    return;
  }
  do {
    piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 8) + 0x14) + uVar3 * 4);
    if ((piVar2 != (int *)0x0) && (param_2[1] == 0)) {
      iStack_1c = *param_2;
      piStack_18 = piVar2;
      if (piVar2[3] != iStack_1c) {
        piStack_18 = (int *)0x0;
        (**(code **)(*piVar2 + 0x2c))(piVar2,&iStack_1c);
      }
      param_2[1] = (int)piStack_18;
    }
    uVar3 = uVar3 - 1;
  } while (uVar3 < 0x80000000);
  return;
}



// Address: 4a13c130

int FUN_4a13c130(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  
  iVar2 = 0;
  iVar1 = *(int *)PTR_DAT_4a13c220;
  if (*(int *)(param_1 + 8) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x10);
  }
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    piVar7 = *(int **)(*(int *)(*(int *)(param_1 + 8) + 0x14) + iVar2 * 4);
    iVar3 = (**(code **)(*piVar7 + 0x30))(piVar7,param_2);
    iVar4 = 0;
    if (piVar7[2] != 0) {
      iVar4 = *(int *)(piVar7[2] + 0x10);
    }
    while (iVar4 = iVar4 + -1, -1 < iVar4) {
      iVar6 = *(int *)(*(int *)(piVar7[2] + 0x14) + iVar4 * 4);
      if ((*(uint *)(*(int *)(iVar6 + 0x2c) + 0x30) & 0x60000000) != 0) {
        uVar5 = FUN_4a1395b4(iVar6,param_2);
        (**(code **)(*piVar7 + 0x1c))(piVar7,*(undefined4 *)(iVar6 + 0x30),uVar5);
      }
    }
    (**(code **)(*piVar7 + 0x24))(piVar7,param_2);
    if (iVar3 < iVar1) {
      iVar1 = iVar3;
    }
  }
  return iVar1;
}



// Address: 4a13c224

void FUN_4a13c224(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a13c250;
  return;
}



// Address: 4a13c254

void FUN_4a13c254(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a13c280;
  return;
}



// Address: 4a13c284

void FUN_4a13c284(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  thunk_FUN_4a161570(0x114);
  puVar1 = (undefined4 *)FUN_4a0b4714();
  *puVar1 = PTR_PTR_4a13c2c8;
  puVar1[0x37] = 0;
  iVar2 = FUN_4a16dbc8(puVar1 + 0x38);
  iVar2 = FUN_4a16dbc8(iVar2 + 0x18);
  *(undefined1 *)(iVar2 + 0x18) = 1;
  return;
}



// Address: 4a13c2cc

undefined4 * FUN_4a13c2cc(void)

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
  uVar2 = FUN_4a04d4d0(0,s_javax_microedition_m3g_Mesh_4a13c2e4,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a13c300

undefined4 FUN_4a13c300(int param_1)

{
  return *(undefined4 *)(param_1 + 0xd4);
}



// Address: 4a13c308

undefined4 FUN_4a13c308(int param_1)

{
  return *(undefined4 *)(param_1 + 0xe0);
}



// Address: 4a13c310

undefined4 FUN_4a13c310(int param_1)

{
  return *(undefined4 *)(param_1 + 0xe4);
}



// Address: 4a13c318

undefined4 FUN_4a13c318(int param_1)

{
  return *(undefined4 *)(param_1 + 0xd8);
}



// Address: 4a13c320

undefined4 FUN_4a13c320(int param_1)

{
  return *(undefined4 *)(param_1 + 0xdc);
}



// Address: 4a13c330

void FUN_4a13c330(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a13c35c;
  return;
}



// Address: 4a13c360

undefined4 FUN_4a13c360(int param_1)

{
  return *(undefined4 *)(param_1 + 0xcc);
}



// Address: 4a13c368

void FUN_4a13c368(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined *local_38 [2];
  int local_30;
  int *local_2c;
  
  iVar10 = *(int *)(param_2 + 8);
  piVar5 = (int *)FUN_4a0c6bc0(local_38);
  puVar2 = PTR_PTR_4a13c5c0;
  piVar5[2] = 0;
  piVar5[3] = 0;
  *piVar5 = (int)puVar2;
  if (0 < iVar10) {
    iVar6 = FUN_4a15e080(iVar10 << 2);
    if (iVar6 == 0) {
      iVar6 = FUN_4a1669a8();
    }
    iVar9 = 0;
    do {
      *(undefined4 *)(iVar6 + iVar9 * 4) = 0;
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar10);
    thunk_FUN_4a161570(0x18);
    puVar7 = (undefined4 *)FUN_4a0c0628();
    puVar7[3] = 4;
    puVar7[4] = iVar10;
    puVar3 = PTR_PTR_4a13c5c4;
    *puVar7 = PTR_PTR_4a13c5c4;
    puVar7[2] = iVar6;
    *(undefined1 *)(puVar7 + 5) = 1;
    if (puVar7 != (undefined4 *)0x0) {
      (**(code **)(puVar3 + 0xc))(puVar7);
    }
    (**(code **)(*piVar5 + 0x1c))(piVar5);
    piVar5[2] = iVar10;
    piVar5[3] = (int)puVar7;
  }
  iVar10 = 0;
  if (0 < *(int *)(param_2 + 8)) {
    do {
      if (*(int *)(param_2 + 0xc) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(param_2 + 0xc) + 8);
      }
      uVar8 = FUN_4a171fac(*(undefined4 *)(iVar6 + iVar10 * 4));
      uVar8 = FUN_4a17295c(uVar8,0xfffffff0);
      if (local_2c == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = local_2c[2];
      }
      *(undefined4 *)(iVar6 + iVar10 * 4) = uVar8;
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(param_2 + 8));
  }
  if (local_2c == (int *)0x0) {
    iVar10 = 0;
  }
  else {
    iVar10 = local_2c[2];
  }
  FUN_4a13c6b8(param_1,iVar10,local_30);
  iVar10 = 0;
  if (0 < *(int *)(param_2 + 8)) {
    do {
      if (local_2c == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = local_2c[2];
      }
      uVar8 = FUN_4a17295c(*(undefined4 *)(iVar6 + iVar10 * 4),0x10);
      FUN_4a171a94(uVar8,0x3f000000);
      uVar8 = FUN_4a171e1c();
      if (*(int *)(param_2 + 0xc) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(param_2 + 0xc) + 8);
      }
      *(undefined4 *)(iVar6 + iVar10 * 4) = uVar8;
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(param_2 + 8));
  }
  piVar5 = local_2c;
  iVar10 = local_30;
  local_38[0] = puVar2;
  bVar11 = local_2c != (int *)0x0;
  if (bVar11) {
    iVar6 = local_2c[2];
    cVar1 = (char)local_2c[5];
  }
  else {
    iVar6 = 0;
    cVar1 = '\0';
  }
  local_2c = (int *)0x0;
  local_30 = 0;
  if ((piVar5 == (int *)0x0) || (iVar9 = (**(code **)(*piVar5 + 8))(piVar5), iVar9 == 0)) {
    bVar4 = 0;
  }
  else {
    (**(code **)(*piVar5 + 4))(piVar5);
    bVar4 = 1;
  }
  if (!(bool)(bVar4 & (bVar11 && cVar1 != '\0'))) {
    iVar6 = 0;
  }
  if (iVar6 != 0) {
    iVar9 = 0;
    if (0 < iVar10) {
      do {
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar10);
      if (iVar6 == 0) goto LAB_4a13c5ac;
    }
    FUN_4a14f21c();
  }
LAB_4a13c5ac:
  FUN_4a0c6bf4(local_38);
  return;
}



// Address: 4a13c5c8

/* WARNING: Removing unreachable block (ram,0x4a1729d8) */
/* WARNING: Removing unreachable block (ram,0x4a1729ec) */
/* WARNING: Removing unreachable block (ram,0x4a1728bc) */
/* WARNING: Removing unreachable block (ram,0x4a1728ac) */
/* WARNING: Removing unreachable block (ram,0x4a1729e0) */
/* WARNING: Removing unreachable block (ram,0x4a17289c) */

ulonglong FUN_4a13c5c8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  
  uVar14 = *(undefined4 *)(param_1 + 0x18);
  uVar9 = *(undefined4 *)(param_1 + 0x1c);
  uVar13 = *(undefined4 *)(param_1 + 0x28);
  uVar12 = *(undefined4 *)(param_1 + 0x2c);
  uVar1 = FUN_4a17211c(uVar9,uVar13);
  uVar2 = FUN_4a17211c(uVar14,uVar12);
  uVar1 = FUN_4a1725c0(uVar2,uVar1);
  uVar3 = FUN_4a17211c(uVar1,*(undefined4 *)(param_1 + 0x10));
  uVar11 = *(undefined4 *)(param_1 + 0x30);
  uVar10 = *(undefined4 *)(param_1 + 0x20);
  uVar1 = FUN_4a17211c(uVar14,uVar11);
  uVar2 = FUN_4a17211c(uVar10,uVar13);
  uVar1 = FUN_4a1725c0(uVar2,uVar1);
  uVar1 = FUN_4a17211c(uVar1,*(undefined4 *)(param_1 + 0xc));
  uVar2 = FUN_4a17211c(uVar10,uVar12);
  uVar9 = FUN_4a17211c(uVar9,uVar11);
  uVar2 = FUN_4a1725c0(uVar9,uVar2);
  uVar2 = FUN_4a17211c(uVar2,*(undefined4 *)(param_1 + 8));
  uVar4 = FUN_4a171a94(uVar2,uVar1);
  if ((int)(uVar4 ^ uVar3) < 0) {
    uVar3 = uVar3 ^ 0x80000000;
    if (uVar4 < uVar3) {
      uVar6 = uVar4 - uVar3 ^ 0x80000000;
      uVar4 = uVar4 - uVar6;
      uVar3 = uVar3 + uVar6;
    }
    uVar6 = uVar4 >> 0x17;
    uVar8 = uVar6 - (uVar3 >> 0x17);
    if ((uVar3 & 0x7f800000) != 0 && (uVar6 & 0xff) != 0xff) {
      uVar5 = uVar4 << 8 | 0x80000000;
      uVar3 = uVar3 << 8;
      uVar15 = uVar5 - ((uVar3 | 0x80000000) >> (uVar8 & 0xff));
      if ((int)uVar15 < 0) {
        bVar17 = (bool)((byte)(uVar15 >> 7) & 1);
        uVar4 = (uVar15 >> 8) + (uVar6 - 1) * 0x800000 + (uint)bVar17;
        if (!bVar17) {
          return CONCAT44(uVar3,uVar4) | 0x8000000000000000;
        }
        if ((uVar15 & 0x7f) != 0) {
          return CONCAT44(uVar3,uVar4) | 0x8000000000000000;
        }
      }
      else {
        bVar16 = (uVar6 & 0xfe) == 0;
        bVar17 = false;
        if (!bVar16) {
          uVar5 = uVar15 * 2;
          bVar17 = (int)uVar5 < 0;
          bVar16 = uVar5 == 0;
        }
        if (!bVar17) {
          if (bVar16) {
            if (uVar15 >> 7 == 0) {
              return (ulonglong)uVar3 << 0x20 | 0x8000000000000000;
            }
            return CONCAT44(uVar3,(uVar4 >> 0x1f) << 0x1f) | 0x8000000000000000;
          }
          if (uVar5 == 0) {
            return (ulonglong)uVar3 << 0x20 | 0x8000000000000000;
          }
          uVar8 = uVar5;
          uVar15 = uVar6;
          if (uVar5 >> 0x17 == 0) {
            uVar8 = uVar5 << 8;
            uVar15 = uVar6 - 8;
            if ((uVar5 & 0xffffff) >> 0xf == 0) {
              uVar8 = uVar5 << 0x10;
              uVar15 = uVar6 - 0x10;
            }
          }
          if ((uVar8 & 0x78000000) != 0) {
            uVar8 = uVar8 >> 4;
            uVar15 = uVar15 + 4;
          }
          if ((uVar8 & 0x6000000) != 0) {
            uVar8 = uVar8 >> 2;
            uVar15 = uVar15 + 2;
          }
          uVar15 = uVar15 - ((uVar8 < 0x1000000) + 9);
          if (uVar8 >= 0x1000000) {
            uVar8 = uVar8 >> 1;
          }
          if ((uVar6 ^ uVar15) >> 8 == 0) {
            return CONCAT44(uVar3,uVar8 + uVar15 * 0x800000) | 0x8000000000000000;
          }
          return CONCAT44(uVar3,(uVar4 >> 0x1f) << 0x1f) | 0x8000000000000000;
        }
        bVar17 = (bool)((byte)(uVar5 >> 7) & 1);
        uVar4 = ((int)uVar5 >> 8) + uVar6 * 0x800000 + (uint)bVar17;
        if (!bVar17) {
          return CONCAT44(uVar3,uVar4) | 0x8000000000000000;
        }
        if ((uVar15 & 0x3f) != 0) {
          return CONCAT44(uVar3,uVar4) | 0x8000000000000000;
        }
      }
      iVar7 = (uVar3 | 0x80000000) << (0x20 - uVar8 & 0xff);
      if (iVar7 == 0) {
        uVar4 = uVar4 & 0xfffffffe;
      }
      else {
        uVar4 = uVar4 - 1;
      }
      return CONCAT44(iVar7,uVar4);
    }
    if ((uVar6 & 0xff) != 0xff) {
      if ((uVar4 & 0x7f800000) == 0) {
        uVar4 = 0;
      }
      return CONCAT44(uVar3,uVar4);
    }
    uVar6 = uVar4 * 2;
    uVar8 = 0x4000002;
    if (uVar3 << 1 < 0xff000001 && uVar6 < 0xff000001) {
      if (uVar6 == uVar3 * 2) {
        if ((int)(uVar4 ^ uVar3) < 0) {
          return CONCAT44(uVar3,uVar4);
        }
        return CONCAT44(uVar3,DAT_4a172724);
      }
      if (uVar6 == 0xff000000) {
        return CONCAT44(uVar3,uVar4);
      }
      return CONCAT44(uVar3,uVar3) ^ 0x80000000;
    }
LAB_4a171b9c:
    uVar8 = uVar8 & 0xf;
    if (uVar8 == 9) {
      return (ulonglong)uVar3 << 0x20;
    }
    if (uVar8 != 10) {
      if (uVar8 == 8) {
        return CONCAT44(uVar3,uVar3 & 0xff000000 | DAT_4a171ba4 >> 0x1d | (uVar3 & 0xffffff) << 3);
      }
      return CONCAT44(uVar3,DAT_4a171ba4);
    }
    return CONCAT44(uVar3,DAT_4a171ba4);
  }
  iVar7 = uVar4 - uVar3;
  if (uVar4 < uVar3) {
    uVar4 = uVar4 - iVar7;
    uVar3 = uVar3 + iVar7;
  }
  uVar6 = uVar4 >> 0x17;
  uVar8 = uVar6 - (uVar3 >> 0x17);
  if ((uVar3 & 0x7f800000) == 0 || (uVar6 & 0xff) == 0xff) {
    if ((uVar6 & 0xff) != 0xff) {
      if ((uVar4 & 0x7f800000) == 0) {
        uVar4 = uVar4 & 0x80000000;
      }
      return CONCAT44(uVar3,uVar4);
    }
    uVar6 = uVar4 * 2;
    uVar8 = 0x4000001;
    if (uVar3 << 1 < 0xff000001 && uVar6 < 0xff000001) {
      if (uVar6 == uVar3 * 2) {
        if (-1 < (int)(uVar4 ^ uVar3)) {
          return CONCAT44(uVar3,uVar4);
        }
        return CONCAT44(uVar3,DAT_4a171b98);
      }
      if (uVar6 == 0xff000000) {
        return CONCAT44(uVar3,uVar4);
      }
      return CONCAT44(uVar3,uVar3);
    }
    goto LAB_4a171b9c;
  }
  uVar5 = uVar4 << 8 | 0x80000000;
  uVar3 = uVar3 << 8;
  uVar4 = (uVar3 | 0x80000000) >> (uVar8 & 0xff);
  uVar15 = uVar5 + uVar4;
  if (CARRY4(uVar5,uVar4)) {
    uVar4 = uVar15 >> 1 | 0x80000000;
    bVar17 = (bool)((byte)(uVar4 >> 7) & 1);
    uVar4 = uVar4 >> 8;
    uVar6 = uVar4 + uVar6 * 0x800000 + (uint)bVar17;
    if (bVar17) {
      uVar4 = uVar15 & 0xff;
    }
    uVar5 = uVar6 * 2;
    if (uVar4 != 0) {
      if (uVar5 < 0xff000000) {
        return CONCAT44(uVar3,uVar6) | 0x8000000000000000;
      }
      goto LAB_4a171b0c;
    }
  }
  else {
    bVar17 = (bool)((byte)(uVar15 >> 7) & 1);
    uVar6 = (uVar15 >> 8) + (uVar6 - 1) * 0x800000 + (uint)bVar17;
    if (!bVar17) {
      return CONCAT44(uVar3,uVar6) | 0x8000000000000000;
    }
    uVar5 = uVar6 * 2;
    if ((uVar15 & 0x7f) != 0) {
      bVar17 = 0xfeffffff < uVar5;
    }
    if (!bVar17) {
      return CONCAT44(uVar3,uVar6) | 0x8000000000000000;
    }
  }
  iVar7 = (uVar3 | 0x80000000) << (0x20 - uVar8 & 0xff);
  if (iVar7 == 0) {
    uVar6 = uVar6 & 0xfffffffe;
  }
  if (uVar5 < 0xff000000) {
    return CONCAT44(iVar7,uVar6);
  }
LAB_4a171b0c:
  uVar3 = uVar6 + 0xa0000000 >> 0x17;
  return CONCAT44(uVar3,(uVar3 | 0xff) << 0x17) | 0xff00000000;
}



// Address: 4a13c688

void FUN_4a13c688(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a13c6b4;
  return;
}



// Address: 4a13c6b8

void FUN_4a13c6b8(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  iVar8 = 0;
  if (0 < param_3) {
    do {
      puVar7 = (undefined4 *)(param_2 + iVar8 * 4);
      uVar1 = *puVar7;
      uVar2 = puVar7[3];
      uVar9 = puVar7[1];
      uVar10 = puVar7[2];
      uVar3 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x14),uVar2);
      uVar4 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x10),uVar10);
      uVar5 = FUN_4a17211c(*(undefined4 *)(param_1 + 0xc),uVar9);
      uVar6 = FUN_4a17211c(*(undefined4 *)(param_1 + 8),uVar1);
      uVar5 = FUN_4a171a94(uVar6,uVar5);
      uVar4 = FUN_4a171a94(uVar5,uVar4);
      uVar3 = FUN_4a171a94(uVar4,uVar3);
      *puVar7 = uVar3;
      uVar3 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x24),uVar2);
      uVar4 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x20),uVar10);
      uVar5 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x1c),uVar9);
      uVar6 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x18),uVar1);
      uVar5 = FUN_4a171a94(uVar6,uVar5);
      uVar4 = FUN_4a171a94(uVar5,uVar4);
      uVar3 = FUN_4a171a94(uVar4,uVar3);
      puVar7[1] = uVar3;
      uVar3 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x34),uVar2);
      uVar4 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x30),uVar10);
      uVar5 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x2c),uVar9);
      uVar6 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x28),uVar1);
      uVar5 = FUN_4a171a94(uVar6,uVar5);
      uVar4 = FUN_4a171a94(uVar5,uVar4);
      uVar3 = FUN_4a171a94(uVar4,uVar3);
      puVar7[2] = uVar3;
      uVar2 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x44),uVar2);
      uVar3 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x40),uVar10);
      uVar4 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x3c),uVar9);
      uVar1 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x38),uVar1);
      uVar1 = FUN_4a171a94(uVar1,uVar4);
      uVar1 = FUN_4a171a94(uVar1,uVar3);
      uVar1 = FUN_4a171a94(uVar1,uVar2);
      iVar8 = iVar8 + 4;
      puVar7[3] = uVar1;
    } while (iVar8 < param_3);
    return;
  }
  return;
}



// Address: 4a13c870

void FUN_4a13c870(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  iVar8 = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    iVar8 = *(int *)(*(int *)(param_2 + 0xc) + 8);
  }
  iVar7 = *(int *)(param_2 + 8);
  iVar10 = 0;
  if (0 < iVar7) {
    do {
      puVar9 = (undefined4 *)(iVar8 + iVar10 * 4);
      uVar1 = *puVar9;
      uVar2 = puVar9[3];
      uVar11 = puVar9[1];
      uVar12 = puVar9[2];
      uVar3 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x14),uVar2);
      uVar4 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x10),uVar12);
      uVar5 = FUN_4a17211c(*(undefined4 *)(param_1 + 0xc),uVar11);
      uVar6 = FUN_4a17211c(*(undefined4 *)(param_1 + 8),uVar1);
      uVar5 = FUN_4a171a94(uVar6,uVar5);
      uVar4 = FUN_4a171a94(uVar5,uVar4);
      uVar3 = FUN_4a171a94(uVar4,uVar3);
      *puVar9 = uVar3;
      uVar3 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x24),uVar2);
      uVar4 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x20),uVar12);
      uVar5 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x1c),uVar11);
      uVar6 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x18),uVar1);
      uVar5 = FUN_4a171a94(uVar6,uVar5);
      uVar4 = FUN_4a171a94(uVar5,uVar4);
      uVar3 = FUN_4a171a94(uVar4,uVar3);
      puVar9[1] = uVar3;
      uVar3 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x34),uVar2);
      uVar4 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x30),uVar12);
      uVar5 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x2c),uVar11);
      uVar6 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x28),uVar1);
      uVar5 = FUN_4a171a94(uVar6,uVar5);
      uVar4 = FUN_4a171a94(uVar5,uVar4);
      uVar3 = FUN_4a171a94(uVar4,uVar3);
      puVar9[2] = uVar3;
      uVar2 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x44),uVar2);
      uVar3 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x40),uVar12);
      uVar4 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x3c),uVar11);
      uVar1 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x38),uVar1);
      uVar1 = FUN_4a171a94(uVar1,uVar4);
      uVar1 = FUN_4a171a94(uVar1,uVar3);
      uVar1 = FUN_4a171a94(uVar1,uVar2);
      iVar10 = iVar10 + 4;
      puVar9[3] = uVar1;
    } while (iVar10 < iVar7);
    return;
  }
  return;
}



// Address: 4a13c920

void FUN_4a13c920(void)

{
  return;
}



// Address: 4a13c92c

void FUN_4a13c92c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a13c958;
  return;
}



// Address: 4a13c964

undefined4 * FUN_4a13c964(void)

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
  uVar2 = FUN_4a04d4d0(0,&DAT_4a13c97c,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a13c988

undefined4 * FUN_4a13c988(void)

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
  uVar2 = FUN_4a04d4d0(0,s_javax_microedition_lcdui_Image_4a13c9a0,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a13c9c0

void FUN_4a13c9c0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a13c9ec;
  return;
}



// Address: 4a13c9f8

undefined4 * FUN_4a13c9f8(void)

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
  uVar2 = FUN_4a04d4d0(0,s_javax_microedition_lcdui_Canvas_4a13ca10,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a13ca30

undefined4 FUN_4a13ca30(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



// Address: 4a13ca48

void FUN_4a13ca48(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a13ca74;
  return;
}



// Address: 4a13ca78

undefined4 FUN_4a13ca78(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((1 < uVar1) && (uVar1 == 2 || uVar1 == 3)) {
    return *(undefined4 *)(param_1 + 0xc);
  }
  return *(undefined4 *)(param_1 + 8);
}



// Address: 4a13caa0

undefined4 FUN_4a13caa0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((1 < uVar1) && (uVar1 == 2 || uVar1 == 3)) {
    return *(undefined4 *)(param_1 + 8);
  }
  return *(undefined4 *)(param_1 + 0xc);
}



// Address: 4a13cac8

void FUN_4a13cac8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (*(char *)(param_1 + 0x34) != '\0') {
    uVar1 = FUN_4a13db00(param_1);
    uVar2 = FUN_4a13daf8(param_1);
    FUN_4a13cc90(param_1,0,0,uVar2,uVar1);
    *(undefined1 *)(param_1 + 0x34) = 0;
  }
  FUN_4a0bf06c();
  piVar3 = (int *)FUN_4a0bf07c();
                    /* WARNING: Could not recover jumptable at 0x4a13cb34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0x10))(piVar3,0xde1,*(undefined4 *)(param_1 + 0x20));
  return;
}



// Address: 4a13cb40

undefined4 FUN_4a13cb40(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// Address: 4a13cb48

undefined4 FUN_4a13cb48(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



// Address: 4a13cb50

undefined4 FUN_4a13cb50(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



// Address: 4a13cb58

undefined4 FUN_4a13cb58(int param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



// Address: 4a13cb60

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a13cb60(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  
  iVar1 = FUN_4a13daf8(param_1);
  iVar6 = param_6;
  if (param_6 + param_8 <= param_6) {
    return;
  }
  do {
    if (0 < param_7) {
      pbVar2 = (byte *)(iVar6 * iVar1 * 4 + *(int *)(param_1 + 0x1c) + param_5 * 4);
      pbVar3 = pbVar2 + 1;
      pbVar4 = pbVar2 + 2;
      pbVar5 = pbVar2 + 3;
      puVar7 = (uint *)(param_2 + ((iVar6 - param_6) * param_4 + param_3) * 4);
      iVar8 = param_7;
      do {
        iVar8 = iVar8 + -1;
        *puVar7 = (uint)*pbVar5 << 0x18 | (uint)*pbVar2 << 0x10 | (uint)*pbVar3 << 8 | (uint)*pbVar4
        ;
        pbVar2 = pbVar2 + 4;
        pbVar3 = pbVar3 + 4;
        pbVar4 = pbVar4 + 4;
        pbVar5 = pbVar5 + 4;
        puVar7 = puVar7 + 1;
      } while (iVar8 != 0);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < param_6 + param_8);
  return;
}



// Address: 4a13cc30

void FUN_4a13cc30(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_2 + 0xc) + 8);
  }
  (**(code **)(*param_1 + 0x20))(param_1,uVar1,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



// Address: 4a13cc90

void FUN_4a13cc90(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  bVar6 = *(int *)(param_1 + 0x20) == 0;
  if (bVar6) {
    FUN_4a0bf06c();
    piVar1 = (int *)FUN_4a0bf07c();
    (**(code **)(*piVar1 + 0x18))(piVar1,1,param_1 + 0x20);
  }
  FUN_4a0bf06c();
  piVar1 = (int *)FUN_4a0bf07c();
  (**(code **)(*piVar1 + 0x10))(piVar1,0xde1,*(undefined4 *)(param_1 + 0x20));
  iVar2 = FUN_4a13daf8(param_1);
  iVar3 = FUN_4a13db00(param_1);
  iVar5 = iVar3;
  if (bVar6) {
    uVar4 = 0;
    do {
      if (iVar2 <= 1 << (uVar4 & 0xff)) {
        iVar2 = 1 << (uVar4 & 0xff);
        break;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 0xc);
    uVar4 = 0;
    do {
      if (iVar3 <= 1 << (uVar4 & 0xff)) {
        iVar5 = 1 << (uVar4 & 0xff);
        break;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 0xc);
    FUN_4a0bf06c();
    piVar1 = (int *)FUN_4a0bf07c();
    (**(code **)(*piVar1 + 0x40))
              (piVar1,0xde1,0,0x1908,iVar2,iVar5,0,0x1908,0x1401,*(undefined4 *)(param_1 + 0x1c));
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(int *)(param_1 + 0x28) = iVar3;
  *(int *)(param_1 + 0x2c) = iVar2;
  *(int *)(param_1 + 0x30) = -iVar5;
  return;
}



// Address: 4a13cde4

void FUN_4a13cde4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a13ce10;
  return;
}



// Address: 4a13ce24

undefined4 * FUN_4a13ce24(void)

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
  uVar2 = FUN_4a04d4d0(0,s_javax_microedition_midlet_MIDlet_4a13ce3c,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a13ce68

undefined4 * FUN_4a13ce68(void)

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
  uVar2 = FUN_4a04d4d0(0,s_javax_microedition_media_Player_4a13ce80,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a13cea0

void FUN_4a13cea0(void)

{
  undefined4 *puVar1;
  
  thunk_FUN_4a161570(0x14);
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a13ced0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  return;
}



// Address: 4a13ced4

undefined4 * FUN_4a13ced4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  thunk_FUN_4a161570(0x14);
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a13cf38;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  uVar2 = FUN_4a04d4d0(0,s_java_lang_String_4a13cf24,0);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a13cf4c

undefined4 * FUN_4a13cf4c(void)

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
  uVar2 = FUN_4a04d4d0(0,s_javax_microedition_lcdui_Display_4a13cf64,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a13cf88

void FUN_4a13cf88(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a13cfb4;
  return;
}



// Address: 4a13cfc0

undefined4 * FUN_4a13cfc0(void)

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
  uVar2 = FUN_4a04d4d0(0,s_java_lang_Runtime_4a13cfd8,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a13cff4

undefined4 * FUN_4a13cff4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_r4;
  
  iVar3 = FUN_4a03b640(*(undefined4 *)(param_1 + 8));
  if (iVar3 < 1) {
    thunk_FUN_4a161570(0x14);
    puVar1 = (undefined4 *)FUN_4a0c6bc0();
    *puVar1 = PTR_PTR_4a0c70cc;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = 0;
    uVar2 = FUN_4a04d4d0(0,&DAT_4a13d030,0,param_4,unaff_r4);
    puVar1[2] = uVar2;
    return puVar1;
  }
  thunk_FUN_4a161570(0x14);
  iVar3 = *(int *)(param_1 + 8);
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0c7078;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  if (iVar3 != 0) {
    uVar2 = FUN_4a03ecb0(0);
    puVar1[2] = uVar2;
  }
  return puVar1;
}



// Address: 4a13d03c

undefined4 * FUN_4a13d03c(void)

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
  uVar2 = FUN_4a04d4d0(0,s_javax_microedition_lcdui_Graphic_4a13d054,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a13d098

void FUN_4a13d098(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a13d0c4;
  return;
}



// Address: 4a13d0d8

void FUN_4a13d0d8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a13d104;
  return;
}



// Address: 4a13d118

void FUN_4a13d118(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a13d144;
  return;
}



// Address: 4a13d150

undefined4 * FUN_4a13d150(void)

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
  uVar2 = FUN_4a04d4d0(0,s_javax_microedition_lcdui_Display_4a13d168,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a13d190

undefined4 FUN_4a13d190(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x28) < param_4) {
    thunk_FUN_4a161530(*(undefined4 *)(param_1 + 0x24));
    *(int *)(param_1 + 0x28) = param_4;
    uVar1 = thunk_FUN_4a161570(param_4 << 2);
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  return 0;
}



// Address: 4a13d1d4

undefined4 FUN_4a13d1d4(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_54;
  uint local_50;
  byte local_48;
  undefined4 local_44;
  uint local_40;
  byte local_38;
  undefined4 local_34;
  int *local_24;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  int local_18;
  
  local_24 = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))();
  }
  local_18 = param_2[2];
  if (local_18 == 0) {
    if ((param_2 != (int *)0x0) && (iVar1 = (**(code **)(*param_2 + 8))(param_2), iVar1 != 0)) {
      (**(code **)(*param_2 + 4))(param_2);
    }
    return 0;
  }
  iVar4 = *(int *)(param_1 + 8);
  iVar1 = *(int *)PTR_DAT_4a13d390;
  *(int *)(iVar1 + 0x10) = iVar4;
  *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar4 + 0x18);
  *(int *)(iVar1 + 0x30) = (int)*(char *)(iVar4 + 0x11);
  local_1c = 10000;
  local_20 = 0;
  local_1e = 0;
  local_1a = 1000;
  *(undefined2 *)(iVar1 + 0x14) = 0;
  *(undefined2 *)(iVar1 + 0x16) = 0;
  *(undefined2 *)(iVar1 + 0x18) = 10000;
  *(undefined2 *)(iVar1 + 0x1a) = 1000;
  FUN_4a0a60b0(&local_54);
  local_18 = param_2[2];
  uVar2 = FUN_4a145d70(&local_18);
  FUN_4a040c7c(&local_54,uVar2,0xffffffff);
  for (uVar3 = 0; uVar3 < local_40; uVar3 = uVar3 + 1) {
  }
  if ((local_38 & 1) == 0) {
    thunk_FUN_4a0a6f48(local_44,4);
    local_44 = 0;
  }
  for (uVar3 = 0; uVar3 < local_50; uVar3 = uVar3 + 1) {
  }
  if ((local_48 & 1) == 0) {
    thunk_FUN_4a0a6f48(local_54,8);
    local_54 = 0;
  }
  if ((param_2 != (int *)0x0) && (iVar1 = (**(code **)(*param_2 + 8))(param_2), iVar1 != 0)) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return local_34;
}



// Address: 4a13d3a4

int FUN_4a13d3a4(int param_1,undefined2 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  short local_58 [4];
  undefined4 local_50;
  uint local_4c;
  byte local_44;
  undefined4 local_40;
  uint local_3c;
  byte local_34;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 uStack_16;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  _local_18 = CONCAT22(param_2,param_2);
  local_1c = 10000;
  local_1a = 10000;
  local_20 = 0;
  local_1e = 0;
  iVar3 = *(int *)PTR_DAT_4a13d4bc;
  *(undefined2 *)(iVar3 + 0x14) = 0;
  *(undefined2 *)(iVar3 + 0x16) = 0;
  *(undefined2 *)(iVar3 + 0x18) = 10000;
  *(undefined2 *)(iVar3 + 0x1a) = 10000;
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(iVar3 + 0x10) = iVar1;
  *(undefined4 *)(iVar3 + 0x34) = *(undefined4 *)(iVar1 + 0x18);
  *(int *)(iVar3 + 0x30) = (int)*(char *)(iVar1 + 0x11);
  FUN_4a0a60b0(&local_50);
  FUN_4a040c7c(&local_50,&local_18,0xffffffff);
  FUN_4a1364ec(local_58,&local_50,1);
  for (uVar2 = 0; uVar2 < local_3c; uVar2 = uVar2 + 1) {
  }
  if ((local_34 & 1) == 0) {
    thunk_FUN_4a0a6f48(local_40,4);
    local_40 = 0;
  }
  for (uVar2 = 0; uVar2 < local_4c; uVar2 = uVar2 + 1) {
  }
  if ((local_44 & 1) == 0) {
    thunk_FUN_4a0a6f48(local_50,8);
  }
  return (int)local_58[0];
}



// Address: 4a13d4d0

undefined4 * FUN_4a13d4d0(void)

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
  uVar2 = FUN_4a04d4d0(0,s_java_io_InputStream_4a13d4e8,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a13d4fc

undefined4 FUN_4a13d4fc(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



// Address: 4a13d50c

undefined4 * FUN_4a13d50c(void)

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
  uVar2 = FUN_4a04d4d0(0,s_java_io_OutputStream_4a13d524,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a13d544

undefined4 * FUN_4a13d544(void)

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
  uVar2 = FUN_4a04d4d0(0,s_javax_iwcf_PlayerAirplayClass_4a13d55c,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a13d584

void FUN_4a13d584(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a13d5b0;
  return;
}



// Address: 4a13d5cc

undefined4 * FUN_4a13d5cc(void)

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
  uVar2 = FUN_4a04d4d0(0,s_java_io_DataInputStream_4a13d5e4,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a13d60c

void FUN_4a13d60c(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint local_2c;
  uint uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  (**(code **)(**(int **)(param_1 + 0x28) + 0xc))(*(int **)(param_1 + 0x28),0x84c0);
  (**(code **)(**(int **)(param_1 + 0x28) + 0x14))(*(int **)(param_1 + 0x28),0x84c0);
  (**(code **)(**(int **)(param_1 + 0x28) + 0x28))(*(int **)(param_1 + 0x28),0xde1);
  (**(code **)(**(int **)(param_1 + 0x28) + 0x90))(*(int **)(param_1 + 0x28),0x302);
  if ((*(int **)(param_1 + 0x2c) != param_2) || (iVar1 = FUN_4a0be5f0(param_2), iVar1 != 0)) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 0xc))(param_2);
    }
    piVar8 = *(int **)(param_1 + 0x2c);
    if ((piVar8 != (int *)0x0) && (iVar1 = (**(code **)(*piVar8 + 8))(piVar8), iVar1 != 0)) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    *(int **)(param_1 + 0x2c) = param_2;
    FUN_4a13cac8(param_2);
    thunk_FUN_4a150aa8(0x2300,0x2200,0x1e01);
    FUN_4a150b58(0xde1,0x2800,0x2601);
    FUN_4a150b58(0xde1,0x2801,0x2601);
    FUN_4a150b58(0xde1,0x2802,0x812f);
    FUN_4a150b58(0xde1,0x2803,0x812f);
    FUN_4a13cb40(param_2);
    uVar2 = FUN_4a171fac();
    FUN_4a13cb48(param_2);
    uVar3 = FUN_4a171fac();
    uVar4 = FUN_4a171bb8(0x3f800000,uVar2);
    uVar5 = FUN_4a171bb8(0x3f800000,uVar3);
    FUN_4a13cb50(param_2);
    uVar6 = FUN_4a171fac();
    uVar7 = FUN_4a171bb8(uVar6,uVar2);
    FUN_4a13cb58(param_2);
    uVar2 = FUN_4a171fac();
    uStack_28 = FUN_4a171bb8(uVar2,uVar3);
    uStack_28 = uStack_28 ^ 0x80000000;
    uStack_58 = *(undefined4 *)(PTR_DAT_4a13d870 + 4);
    uStack_54 = *(undefined4 *)(PTR_DAT_4a13d870 + 8);
    uStack_50 = *(undefined4 *)(PTR_DAT_4a13d870 + 0xc);
    uStack_4c = *(undefined4 *)(PTR_DAT_4a13d870 + 0x10);
    uStack_44 = *(undefined4 *)(PTR_DAT_4a13d870 + 0x18);
    uStack_40 = *(undefined4 *)(PTR_DAT_4a13d870 + 0x1c);
    uStack_3c = *(undefined4 *)(PTR_DAT_4a13d870 + 0x20);
    uStack_38 = *(undefined4 *)(PTR_DAT_4a13d870 + 0x24);
    uStack_34 = *(undefined4 *)(PTR_DAT_4a13d870 + 0x28);
    uStack_30 = *(undefined4 *)(PTR_DAT_4a13d870 + 0x2c);
    uStack_24 = *(undefined4 *)(PTR_DAT_4a13d870 + 0x38);
    uStack_20 = *(undefined4 *)(PTR_DAT_4a13d870 + 0x3c);
    local_5c = uVar4;
    local_48 = uVar5;
    local_2c = uVar7 ^ 0x80000000;
    (**(code **)(**(int **)(param_1 + 0x28) + 0xac))(*(int **)(param_1 + 0x28),0x1702);
    FUN_4a150544(&local_5c);
    (**(code **)(**(int **)(param_1 + 0x28) + 0xac))(*(int **)(param_1 + 0x28),0x1700);
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



// Address: 4a13d884

void FUN_4a13d884(int param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    uVar1 = 1;
    do {
      (**(code **)(**(int **)(param_1 + 0x28) + 0xc))();
      (**(code **)(**(int **)(param_1 + 0x28) + 0x14))(*(int **)(param_1 + 0x28),uVar1 + 0x84c0);
      (**(code **)(**(int **)(param_1 + 0x28) + 0x24))(*(int **)(param_1 + 0x28),0x8078);
      (**(code **)(**(int **)(param_1 + 0x28) + 0x20))(*(int **)(param_1 + 0x28),0xde1);
      uVar1 = uVar1 - 1;
    } while (uVar1 < 0x80000000);
    *(undefined1 *)(param_1 + 0x30) = 0;
    return;
  }
  return;
}



// Address: 4a13d948

void FUN_4a13d948(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a13d974;
  return;
}



// Address: 4a13d980

undefined4 * FUN_4a13d980(void)

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
  uVar2 = FUN_4a04d4d0(0,s_java_io_DataOutputStream_4a13d998,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a13d9c4

int FUN_4a13d9c4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_4a14f43c(*(undefined4 *)(param_1 + 8));
  return *(int *)(param_1 + 0x10) - iVar1;
}



// Address: 4a13d9ec

undefined4 * FUN_4a13d9ec(void)

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
  uVar2 = FUN_4a04d4d0(0,s_java_io_ByteArrayInputStream_4a13da04,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a13da2c

undefined4 * FUN_4a13da2c(void)

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
  uVar2 = FUN_4a04d4d0(0,s_java_io_ByteArrayOutputStream_4a13da44,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a13da64

void FUN_4a13da64(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a13da90;
  return;
}



// Address: 4a13da94

void FUN_4a13da94(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a13dac0;
  return;
}



// Address: 4a13dac8

void FUN_4a13dac8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a13daf4;
  return;
}



// Address: 4a13daf8

undefined4 FUN_4a13daf8(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// Address: 4a13db00

undefined4 FUN_4a13db00(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// Address: 4a13dc78

void FUN_4a13dc78(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a13dca4;
  return;
}



// Address: 4a13dca8

void FUN_4a13dca8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a13dcd4;
  return;
}



// Address: 4a13dd28

void FUN_4a13dd28(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a13dd54;
  return;
}



// Address: 4a13dd58

int FUN_4a13dd58(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))();
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_4a03b640();
  }
  iVar5 = param_2[2];
  if (iVar5 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_4a03b640(iVar5);
  }
  if ((iVar3 <= iVar2) && (0 < iVar2)) {
    FUN_4a01d598(&local_20,0,iVar3);
    uVar4 = FUN_4a04e384(iVar1,iVar5,local_20,uStack_1c,0);
    iVar1 = 1 - uVar4;
    if (1 < uVar4) {
      iVar1 = 0;
    }
    if ((param_2 != (int *)0x0) && (iVar2 = (**(code **)(*param_2 + 8))(param_2), iVar2 != 0)) {
      (**(code **)(*param_2 + 4))(param_2);
    }
    return iVar1;
  }
  if ((param_2 != (int *)0x0) && (iVar1 = (**(code **)(*param_2 + 8))(param_2), iVar1 != 0)) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return 0;
}



// Address: 4a13de84

uint FUN_4a13de84(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 8) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_4a03b640();
  }
  if (*(int *)(param_1 + 8) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_4a03b640();
  }
  uVar4 = iVar1 - 1U;
  if ((int)(iVar2 - 1U) < (int)(iVar1 - 1U)) {
    uVar4 = iVar2 - 1U;
  }
  if ((int)(uVar4 + 1) < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = ~uVar4 & 1;
  }
  uVar3 = uVar4 - uVar3;
  for (; (int)uVar3 < (int)uVar4; uVar4 = uVar4 - 1) {
    iVar1 = FUN_4a050970(*(undefined4 *)(param_1 + 8),uVar4);
    if (iVar1 == param_2) {
      return uVar4;
    }
  }
  if (-1 < (int)uVar3) {
    do {
      iVar1 = FUN_4a050970(*(undefined4 *)(param_1 + 8),uVar3);
      if (iVar1 == param_2) {
        return uVar3;
      }
      iVar1 = FUN_4a050970(*(undefined4 *)(param_1 + 8),uVar3 - 1);
      if (iVar1 == param_2) {
        return uVar3 - 1;
      }
      uVar3 = uVar3 - 2;
    } while (uVar3 < 0x80000000);
  }
  return 0xffffffff;
}



// Address: 4a13df60

int FUN_4a13df60(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_18;
  
  local_18 = *(undefined4 *)(param_1 + 8);
  uVar1 = FUN_4a145d70(&local_18);
  uVar2 = FUN_4a13e1b4(param_1);
  iVar3 = FUN_4a039d70(uVar1,uVar2,0);
  if (param_2 == 0) {
    param_2 = thunk_FUN_4a161570(iVar3 + 1);
  }
  uVar2 = FUN_4a13e1b4(param_1);
  iVar3 = FUN_4a039d70(uVar1,uVar2,param_2,iVar3 + 1);
  *(undefined1 *)(param_2 + iVar3) = 0;
  return param_2;
}



// Address: 4a13dfe4

undefined2 FUN_4a13dfe4(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 8) != 0) && (iVar1 = *(int *)(*(int *)(param_1 + 8) + 8), iVar1 != 0)) {
    return *(undefined2 *)(iVar1 + param_2 * 2);
  }
  return 0;
}



// Address: 4a13dfec

int FUN_4a13dfec(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_4a035a1c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 8),0);
  iVar2 = 1 - uVar1;
  if (1 < uVar1) {
    iVar2 = 0;
  }
  return iVar2;
}



// Address: 4a13e010

undefined4 FUN_4a13e010(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = FUN_4a054c34(0,param_2,1);
  iVar2 = *(int *)(param_1 + 8);
  uVar5 = 0;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_4a03b640();
  }
  iVar4 = 0;
  if (iVar1 != 0) {
    iVar4 = FUN_4a03b640();
  }
  if (iVar3 == iVar4) {
    if (iVar4 != 0 || iVar3 != 0) {
      iVar2 = FUN_4a035a1c(iVar2,iVar1,0);
      uVar5 = 0;
      if (iVar2 != 0) goto LAB_4a13e094;
    }
    uVar5 = 1;
  }
LAB_4a13e094:
  FUN_4a05a26c(iVar1);
  return uVar5;
}



// Address: 4a13e0a8

int FUN_4a13e0a8(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))();
  }
  iVar4 = 0;
  if (param_2 == (int *)0x0) {
    return 0;
  }
  if (param_1 == param_2) {
    iVar4 = (**(code **)(*param_2 + 8))(param_2);
    if (iVar4 != 0) {
      (**(code **)(*param_2 + 4))(param_2);
    }
    return 1;
  }
  iVar1 = param_1[2];
  iVar5 = param_2[2];
  iVar2 = iVar4;
  if (iVar1 != 0) {
    iVar2 = FUN_4a03b640();
  }
  iVar3 = 0;
  if (iVar5 != 0) {
    iVar3 = FUN_4a03b640();
  }
  if (iVar2 == iVar3) {
    if ((iVar3 == 0 && iVar2 == 0) || (iVar4 = FUN_4a035a1c(iVar1,iVar5,0), iVar4 == 0)) {
      iVar4 = 1;
    }
    else {
      iVar4 = 0;
    }
  }
  iVar2 = (**(code **)(*param_2 + 8))(param_2);
  if (iVar2 != 0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return iVar4;
}



// Address: 4a13e1b4

int FUN_4a13e1b4(int param_1)

{
  short *psVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    return 0;
  }
  if ((iVar2 != 0) && (psVar1 = *(short **)(iVar2 + 8), psVar1 != (short *)0x0)) {
    iVar2 = 0;
    for (; *psVar1 != 0; psVar1 = psVar1 + 1) {
      iVar2 = iVar2 + 1;
    }
    return iVar2;
  }
  return 0;
}



// Address: 4a13e1c4

int FUN_4a13e1c4(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))();
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_4a03b640();
  }
  iVar5 = param_2[2];
  if (iVar5 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_4a03b640(iVar5);
  }
  if (iVar3 <= iVar2) {
    FUN_4a01d598(&local_20,iVar2 - iVar3,iVar3);
    uVar4 = FUN_4a04e384(iVar1,iVar5,local_20,uStack_1c,0);
    iVar1 = 1 - uVar4;
    if (1 < uVar4) {
      iVar1 = 0;
    }
    if ((param_2 != (int *)0x0) && (iVar2 = (**(code **)(*param_2 + 8))(param_2), iVar2 != 0)) {
      (**(code **)(*param_2 + 4))(param_2);
    }
    return iVar1;
  }
  if ((param_2 != (int *)0x0) && (iVar1 = (**(code **)(*param_2 + 8))(param_2), iVar1 != 0)) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return 0;
}



// Address: 4a13e2e8

void FUN_4a13e2e8(undefined4 param_1,int param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined1 auStack_248 [8];
  undefined4 local_240;
  int *local_23c;
  int local_234;
  undefined1 *local_230;
  undefined4 local_22c;
  undefined4 uStack_228;
  undefined1 local_224 [512];
  
  puVar2 = PTR_PTR_4a13e4f0;
  puVar1 = PTR_PTR_4a13e4ec;
  if ((*(int *)(param_2 + 8) != 0) && (iVar4 = FUN_4a03b640(), 0 < iVar4)) {
    iVar4 = *(int *)(param_2 + 8);
    if (iVar4 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_4a03b640(iVar4);
    }
    FUN_4a01d598(&local_22c,0,uVar6);
    uVar6 = 1;
    if ((param_3 != 0) && (iVar7 = FUN_4a00142c(param_3,s_UTF_8_4a13e4f4), iVar7 == 0)) {
      uVar6 = 0;
    }
    local_230 = local_224;
    FUN_4a038b70(iVar4,local_22c,uStack_228,uVar6,0,0,&local_230,0x200,&local_234);
    iVar4 = local_234;
    piVar8 = (int *)FUN_4a0c6bc0(auStack_248);
    piVar8[2] = 0;
    piVar8[3] = 0;
    *piVar8 = (int)puVar2;
    if (0 < iVar4) {
      iVar7 = FUN_4a15e080(iVar4);
      if (iVar7 == 0) {
        iVar7 = FUN_4a1669a8();
      }
      iVar9 = 0;
      do {
        *(undefined1 *)(iVar7 + iVar9) = 0;
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar4);
      thunk_FUN_4a161570(0x18);
      puVar5 = (undefined4 *)FUN_4a0c0628();
      puVar3 = PTR_PTR_4a13e4fc;
      *puVar5 = PTR_PTR_4a13e4fc;
      puVar5[3] = 1;
      puVar5[4] = iVar4;
      puVar5[2] = iVar7;
      *(undefined1 *)(puVar5 + 5) = 1;
      if (puVar5 != (undefined4 *)0x0) {
        (**(code **)(puVar3 + 0xc))(puVar5);
      }
      (**(code **)(*piVar8 + 0x1c))(piVar8);
      piVar8[2] = iVar4;
      piVar8[3] = (int)puVar5;
    }
    iVar4 = 0;
    if (0 < local_234) {
      do {
        if (local_23c == (int *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = local_23c[2];
        }
        *(undefined1 *)(iVar7 + iVar4) = local_224[iVar4];
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_234);
    }
    puVar5 = (undefined4 *)FUN_4a0c6bc0(param_1);
    *puVar5 = puVar1;
    puVar5[2] = local_240;
    puVar5[3] = local_23c;
    if (local_23c != (int *)0x0) {
      (**(code **)(*local_23c + 0xc))();
    }
    *puVar5 = puVar2;
    FUN_4a16b6c0(auStack_248);
    return;
  }
  puVar5 = (undefined4 *)FUN_4a0c6bc0(param_1);
  puVar5[2] = 0;
  *puVar5 = puVar2;
  puVar5[3] = 0;
  return;
}



// Address: 4a13e500

void FUN_4a13e500(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a13e52c;
  return;
}



// Address: 4a13e530

undefined4 FUN_4a13e530(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    iVar4 = 0;
    iVar3 = 1;
    iVar1 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      iVar1 = FUN_4a03b640();
    }
    uVar2 = iVar1 - 1;
    if (-1 < (int)uVar2) {
      do {
        iVar1 = FUN_4a050970(*(undefined4 *)(param_1 + 8),uVar2);
        iVar4 = iVar1 * iVar3 + iVar4;
        uVar2 = uVar2 - 1;
        iVar3 = iVar3 * 0x1f;
      } while (uVar2 < 0x80000000);
    }
    *(int *)(param_1 + 0x10) = iVar4;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  return *(undefined4 *)(param_1 + 0x10);
}



// Address: 4a13e59c

int FUN_4a13e59c(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar2 = FUN_4a13e1b4(param_1);
    param_2 = thunk_FUN_4a161570(iVar2 + 1);
  }
  iVar3 = 0;
  iVar2 = FUN_4a13e1b4(param_1);
  if (0 < iVar2) {
    do {
      uVar1 = FUN_4a13dfe4(param_1,iVar3);
      *(undefined1 *)(param_2 + iVar3) = uVar1;
      iVar3 = iVar3 + 1;
      iVar2 = FUN_4a13e1b4(param_1);
    } while (iVar3 < iVar2);
  }
  iVar2 = FUN_4a13e1b4(param_1);
  *(undefined1 *)(param_2 + iVar2) = 0;
  return param_2;
}



// Address: 4a13e614

undefined4 FUN_4a13e614(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_2 + 8);
  iVar1 = *(int *)(param_1 + 8);
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 8);
  }
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar4 = *(int *)(iVar2 + 8);
  }
  if ((iVar3 != iVar4) &&
     ((((iVar1 == 0 || (*(int *)(iVar1 + 8) == 0 || iVar2 == 0)) || (*(int *)(iVar2 + 8) == 0)) ||
      (iVar3 = FUN_4a000ef4(), iVar3 != 0)))) {
    return 0xffffffff;
  }
  return 0;
}



// Address: 4a13e624

undefined4 * FUN_4a13e624(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  thunk_FUN_4a161570(0x14);
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a13e6b0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  if (*(int *)(param_1 + 8) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_4a03b640();
  }
  if (param_2 < iVar2) {
    FUN_4a01d598(&uStack_1c,param_2,param_3 - param_2);
    uVar3 = FUN_4a050934(0,*(undefined4 *)(param_1 + 8),uStack_1c,uStack_18);
    puVar1[2] = uVar3;
  }
  return puVar1;
}



// Address: 4a13e6b4

undefined4 FUN_4a13e6b4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// Address: 4a13e6bc

void FUN_4a13e6bc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a13e6e8;
  return;
}



// Address: 4a13e6ec

undefined4 FUN_4a13e6ec(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// Address: 4a13e6f4

undefined4 FUN_4a13e6f4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// Address: 4a13e6fc

void FUN_4a13e6fc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a13e728;
  return;
}



// Address: 4a13e734

undefined4 FUN_4a13e734(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// Address: 4a13e76c

void FUN_4a13e76c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a13e798;
  return;
}



// Address: 4a13e7c8

undefined4 * FUN_4a13e7c8(void)

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
  uVar2 = FUN_4a04d4d0(0,s_java_io_File_4a13e7e0,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a13e7f8

undefined4 * FUN_4a13e7f8(void)

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
  uVar2 = FUN_4a04d4d0(0,s_javax_microedition_lcdui_Font_4a13e810,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a13e830

undefined4 * FUN_4a13e830(void)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  
  thunk_FUN_4a161570(0x10);
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a13e88c;
  puVar1[2] = 0;
  puVar1[3] = 0;
  uVar2 = host_s3eTimerGetMs_arm();
  puVar1[3] = (uint)((uVar2 ^ 0x5deece66d) >> 0x20) & 0xffff;
  puVar1[2] = (int)(uVar2 ^ 0x5deece66d);
  return puVar1;
}



// Address: 4a13e890

undefined4 * FUN_4a13e890(void)

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
  uVar2 = FUN_4a04d4d0(0,s_java_util_Random_4a13e8a8,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a13e8e4

int FUN_4a13e8e4(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  thunk_FUN_4a161570(0x1c);
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a13e910;
  iVar2 = FUN_4a16be24(puVar1 + 2,1);
  return iVar2 + -8;
}



// Address: 4a13e914

undefined4 * FUN_4a13e914(void)

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
  uVar2 = FUN_4a04d4d0(0,s_java_util_BitSet_4a13e92c,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a13e940

bool FUN_4a13e940(int param_1,uint param_2)

{
  int iVar1;
  
  if ((int)param_2 >> 5 < *(int *)(param_1 + 0x10)) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 8);
    }
    return (*(uint *)(iVar1 + ((int)param_2 >> 5) * 4) & 1 << (param_2 & 0x1f)) != 0;
  }
  return false;
}



// Address: 4a13e978

void FUN_4a13e978(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a13e9a4;
  return;
}



// Address: 4a13e9b0

void FUN_4a13e9b0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a13e9dc;
  return;
}



// Address: 4a13e9e8

void FUN_4a13e9e8(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined1 auStack_34 [20];
  
  puVar2 = PTR_PTR_4a13eae8;
  puVar1 = PTR_PTR_4a13eae4;
  iVar4 = 0;
  if (*(int *)(param_1 + 0x68) <= param_3) {
    puVar3 = (undefined4 *)FUN_4a0c6bc0(auStack_34);
    *puVar3 = puVar1;
    puVar3[2] = *(undefined4 *)(param_2 + 8);
    piVar5 = *(int **)(param_2 + 0xc);
    puVar3[3] = piVar5;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))();
    }
    *puVar3 = puVar2;
    FUN_4a13ebfc(param_1,puVar3,*(undefined4 *)(param_1 + 0x30),1);
    FUN_4a16bef4(auStack_34);
    return;
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x6c) + 8);
  }
  uVar6 = *(undefined4 *)(iVar4 + param_3 * 4);
  puVar3 = (undefined4 *)FUN_4a0c6bc0(auStack_34);
  *puVar3 = puVar1;
  puVar3[2] = *(undefined4 *)(param_2 + 8);
  piVar5 = *(int **)(param_2 + 0xc);
  puVar3[3] = piVar5;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))();
  }
  *puVar3 = puVar2;
  FUN_4a13ebfc(param_1,puVar3,uVar6,param_4);
  FUN_4a16bef4(auStack_34);
  return;
}



// Address: 4a13eaec

int * FUN_4a13eaec(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x54)) {
    do {
      if (*(int *)(PTR_DAT_4a13eb64 + iVar2 * 4) == param_2) {
        if (*(int *)(param_1 + 0x58) != 0) {
          iVar3 = *(int *)(*(int *)(param_1 + 0x58) + 8);
        }
        return *(int **)(iVar3 + iVar2 * 4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x54));
  }
  iVar2 = *(int *)(param_1 + 0x88);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x30);
  }
  piVar1 = (int *)FUN_4a0b74b0(iVar2);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x34))(piVar1);
    if ((((((iVar2 == 5 || iVar2 == 9) || iVar2 == 0x16) || iVar2 == 0xc) || iVar2 == 0xe) ||
        iVar2 == 0x10) || iVar2 == 0x12) {
      return piVar1;
    }
    return (int *)0x0;
  }
  return (int *)0x0;
}



// Address: 4a13eb68

void FUN_4a13eb68(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_28 [20];
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x80) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x80) + 8);
  }
  uVar4 = *(undefined4 *)(iVar2 + param_3 * 4);
  puVar1 = (undefined4 *)FUN_4a0c6bc0(auStack_28);
  *puVar1 = PTR_PTR_4a13ebf4;
  puVar1[2] = *(undefined4 *)(param_2 + 8);
  piVar3 = *(int **)(param_2 + 0xc);
  puVar1[3] = piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
  }
  *puVar1 = PTR_PTR_4a13ebf8;
  FUN_4a13ebfc(param_1,puVar1,uVar4,1);
  FUN_4a16bef4(auStack_28);
  return;
}



// Address: 4a13ebfc

void FUN_4a13ebfc(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_80 [72];
  undefined1 auStack_38 [12];
  int local_2c;
  
  piVar2 = (int *)FUN_4a0c6bc0(auStack_38);
  puVar1 = PTR_PTR_4a13ede4;
  iVar8 = 0;
  piVar2[2] = 0;
  piVar2[3] = 0;
  *piVar2 = (int)puVar1;
  iVar3 = FUN_4a15e080(0x10);
  if (iVar3 == 0) {
    iVar3 = FUN_4a1669a8();
  }
  iVar4 = 0;
  do {
    *(undefined4 *)(iVar3 + iVar4 * 4) = 0;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  thunk_FUN_4a161570(0x18);
  puVar5 = (undefined4 *)FUN_4a0c0628();
  puVar1 = PTR_PTR_4a13ede8;
  puVar5[2] = iVar3;
  *puVar5 = puVar1;
  puVar5[3] = 4;
  puVar5[4] = 4;
  *(undefined1 *)(puVar5 + 5) = 1;
  if (puVar5 != (undefined4 *)0x0) {
    (**(code **)(puVar1 + 0xc))(puVar5);
  }
  (**(code **)(*piVar2 + 0x1c))(piVar2);
  piVar2[2] = 4;
  piVar2[3] = (int)puVar5;
  if (param_4 != 0) {
    piVar2 = (int *)(*(int **)(param_1 + 0x30))[0x33];
  }
  piVar7 = *(int **)(param_1 + 0x30);
  if (param_4 != 0 && piVar2 != (int *)0x0) {
    piVar7 = piVar2;
  }
  FUN_4a0b8a1c(auStack_80);
  FUN_4a13b6a8(param_3,piVar7,auStack_80);
  if (local_2c == 0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = *(undefined4 **)(local_2c + 8);
  }
  *puVar5 = 0;
  if (local_2c == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_2c + 8);
  }
  *(undefined4 *)(iVar3 + 4) = 0;
  if (local_2c == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_2c + 8);
  }
  *(undefined4 *)(iVar3 + 8) = 0;
  if (local_2c == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_2c + 8);
  }
  *(undefined4 *)(iVar3 + 0xc) = 0x10000;
  FUN_4a13c368(auStack_80,auStack_38);
  if (local_2c == 0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = *(undefined4 **)(local_2c + 8);
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = *(undefined4 **)(*(int *)(param_2 + 0xc) + 8);
  }
  *puVar6 = *puVar5;
  if (local_2c == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_2c + 8);
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_2 + 0xc) + 8);
  }
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar3 + 4);
  if (local_2c == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_2c + 8);
  }
  if (*(int *)(param_2 + 0xc) != 0) {
    iVar8 = *(int *)(*(int *)(param_2 + 0xc) + 8);
  }
  *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar3 + 8);
  FUN_4a0c6bf4(auStack_80);
  FUN_4a16bef4(auStack_38);
  return;
}



// Address: 4a13edec

void FUN_4a13edec(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined1 auStack_2c [20];
  
  iVar1 = FUN_4a0b74b0(*(undefined4 *)(param_1 + 0x30),param_3);
  if ((iVar1 != 0) && (iVar1 = FUN_4a16588c(), iVar1 != 0)) {
    puVar2 = (undefined4 *)FUN_4a0c6bc0(auStack_2c);
    *puVar2 = PTR_PTR_4a13eed4;
    puVar2[2] = *(undefined4 *)(param_2 + 8);
    piVar3 = *(int **)(param_2 + 0xc);
    puVar2[3] = piVar3;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0xc))();
    }
    *puVar2 = PTR_PTR_4a13eed8;
    FUN_4a13ebfc(param_1,puVar2,iVar1,param_4);
    FUN_4a16bef4(auStack_2c);
    return;
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(*(int *)(param_2 + 0xc) + 8);
  }
  *puVar2 = 0;
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_2 + 0xc) + 8);
  }
  *(undefined4 *)(iVar1 + 4) = 0;
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_2 + 0xc) + 8);
  }
  *(undefined4 *)(iVar1 + 8) = 0;
  return;
}



// Address: 4a13eedc

undefined4 FUN_4a13eedc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}



// Address: 4a13eeec

void FUN_4a13eeec(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a13ef18;
  return;
}



// Address: 4a13ef1c

undefined4 FUN_4a13ef1c(int param_1)

{
  return *(undefined4 *)(param_1 + 0xf8);
}



// Address: 4a13ef24

int FUN_4a13ef24(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_28 [8];
  int iStack_20;
  int iStack_1c;
  
  iVar4 = 0;
  if (param_2 != 0xd) {
    if (param_2 == 0x12) {
      iVar4 = 1;
    }
    else if (param_2 == 0x13) {
      FUN_4a0fb3b0(auStack_28,*(undefined4 *)(param_1 + 0x20),param_3);
      iVar4 = 0;
      iVar3 = 0;
      if (0 < iStack_20) {
        do {
          if (iStack_1c != 0) {
            iVar1 = *(int *)(iStack_1c + 8);
          }
          else {
            iVar1 = 0;
          }
          if (iStack_1c != 0) {
            iVar2 = *(int *)(iStack_1c + 8);
          }
          else {
            iVar2 = 0;
          }
          iVar1 = FUN_4a13ef24(param_1,(int)*(short *)(iVar1 + iVar3 * 2),
                               (int)*(short *)(iVar2 + (iVar3 + 1) * 2));
          iVar4 = iVar4 + iVar1;
          iVar3 = iVar3 + 2;
        } while (iVar3 < iStack_20);
      }
      FUN_4a16c1a0(auStack_28);
    }
    return iVar4;
  }
  return param_3;
}



// Address: 4a13efe8

void FUN_4a13efe8(int *param_1,int *param_2,int *param_3)

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
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  
  iVar3 = *param_2;
  iVar60 = param_3[1];
  iVar7 = param_2[1];
  iVar14 = param_3[4];
  iVar8 = param_2[2];
  iVar15 = param_3[7];
  iVar61 = *param_2;
  iVar9 = param_3[2];
  iVar16 = param_2[1];
  iVar26 = param_3[5];
  iVar17 = param_2[2];
  iVar27 = param_3[8];
  iVar10 = param_2[3];
  iVar18 = *param_3;
  iVar28 = param_2[4];
  iVar45 = param_3[3];
  iVar29 = param_2[5];
  iVar46 = param_3[6];
  iVar19 = param_2[3];
  iVar30 = param_3[1];
  iVar47 = param_3[4];
  iVar31 = param_2[4];
  iVar32 = param_2[5];
  iVar48 = param_3[7];
  iVar20 = param_2[3];
  iVar33 = param_3[2];
  iVar49 = param_3[5];
  iVar34 = param_2[4];
  iVar11 = param_2[5];
  iVar35 = param_3[8];
  iVar12 = param_2[6];
  iVar21 = *param_3;
  iVar36 = param_2[7];
  iVar50 = param_3[3];
  iVar37 = param_2[8];
  iVar51 = param_3[6];
  iVar22 = param_2[6];
  iVar38 = param_3[1];
  iVar52 = param_3[4];
  iVar39 = param_2[7];
  iVar4 = param_3[7];
  iVar40 = param_2[8];
  iVar5 = param_2[6];
  iVar23 = param_3[2];
  iVar41 = param_3[5];
  iVar24 = param_2[7];
  iVar13 = param_2[8];
  iVar62 = param_3[8];
  iVar53 = *param_3;
  iVar6 = param_2[9];
  iVar63 = param_2[10];
  iVar42 = param_3[3];
  iVar25 = param_3[6];
  iVar1 = param_2[0xb];
  iVar54 = param_3[4];
  iVar43 = param_3[9];
  iVar57 = param_3[7];
  iVar44 = param_3[1];
  iVar59 = param_3[8];
  iVar55 = param_3[10];
  iVar58 = param_3[5];
  iVar56 = param_3[2];
  iVar2 = param_3[0xb];
  *param_1 = param_2[2] * param_3[6] + param_2[1] * param_3[3] + *param_3 * *param_2 >> 0xc;
  param_1[1] = iVar8 * iVar15 + iVar7 * iVar14 + iVar3 * iVar60 >> 0xc;
  param_1[2] = iVar17 * iVar27 + iVar16 * iVar26 + iVar61 * iVar9 >> 0xc;
  param_1[3] = iVar29 * iVar46 + iVar28 * iVar45 + iVar10 * iVar18 >> 0xc;
  param_1[4] = iVar32 * iVar48 + iVar31 * iVar47 + iVar30 * iVar19 >> 0xc;
  param_1[5] = iVar35 * iVar11 + iVar34 * iVar49 + iVar33 * iVar20 >> 0xc;
  param_1[6] = iVar37 * iVar51 + iVar36 * iVar50 + iVar12 * iVar21 >> 0xc;
  param_1[7] = iVar40 * iVar4 + iVar39 * iVar52 + iVar38 * iVar22 >> 0xc;
  param_1[8] = iVar13 * iVar62 + iVar24 * iVar41 + iVar23 * iVar5 >> 0xc;
  param_1[9] = iVar43 + (iVar1 * iVar25 + iVar63 * iVar42 + iVar6 * iVar53 >> 0xc);
  param_1[10] = iVar55 + (iVar57 * iVar1 + iVar54 * iVar63 + iVar6 * iVar44 >> 0xc);
  param_1[0xb] = iVar2 + (iVar59 * iVar1 + iVar58 * iVar63 + iVar56 * iVar6 >> 0xc);
  return;
}



// Address: 4a13f250

int FUN_4a13f250(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  
  iVar1 = FUN_4a135720();
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0x7c) == '\0') {
      uVar2 = FUN_4a171fac(*(undefined4 *)(param_1 + 0xbc));
      uVar6 = *(undefined4 *)(param_1 + 0x44);
      uVar3 = FUN_4a171fac(param_3 - *(int *)(param_1 + 0x84));
      uVar3 = FUN_4a1725c0(uVar3,uVar6);
      FUN_4a171bb8(uVar3,uVar2);
      iVar4 = FUN_4a171e1c();
      bVar8 = SCARRY4(iVar4,1);
      iVar1 = iVar4 + 1;
      bVar7 = iVar4 == -1;
      if (-2 < iVar4) {
        iVar5 = *(int *)(param_1 + 0xac);
        bVar8 = SBORROW4(iVar5,iVar4);
        iVar1 = iVar5 - iVar4;
        bVar7 = iVar5 == iVar4;
      }
      if (!bVar7 && iVar1 < 0 == bVar8) {
        return iVar4;
      }
    }
    else {
      uVar2 = FUN_4a171fac(*(undefined4 *)(param_1 + 0xb8));
      uVar6 = *(undefined4 *)(param_1 + 0x5c);
      uVar3 = FUN_4a171fac(param_2 - *(int *)(param_1 + 0x80));
      uVar3 = FUN_4a1725c0(uVar3,uVar6);
      FUN_4a171bb8(uVar3,uVar2);
      iVar4 = FUN_4a171e1c();
      bVar8 = SCARRY4(iVar4,1);
      iVar1 = iVar4 + 1;
      bVar7 = iVar4 == -1;
      if (-2 < iVar4) {
        iVar5 = *(int *)(param_1 + 0xac);
        bVar8 = SBORROW4(iVar5,iVar4);
        iVar1 = iVar5 - iVar4;
        bVar7 = iVar5 == iVar4;
      }
      if (!bVar7 && iVar1 < 0 == bVar8) {
        return iVar4;
      }
    }
  }
  return -1;
}



// Address: 4a13f310

void FUN_4a13f310(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a13f33c;
  return;
}



// Address: 4a13f340

void FUN_4a13f340(undefined4 param_1,undefined4 *param_2)

{
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_40 = *param_2;
  local_34 = param_2[1];
  local_28 = param_2[2];
  local_3c = param_2[3];
  local_30 = param_2[4];
  local_24 = param_2[5];
  local_38 = param_2[6];
  local_2c = param_2[7];
  local_20 = param_2[8];
  local_8 = 0;
  local_10 = 0;
  local_c = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  thunk_FUN_4a001134(param_1,&local_40,0x30);
  return;
}



// Address: 4a13f384

undefined8 FUN_4a13f384(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  
  uVar4 = param_3[2];
  local_20 = param_1;
  puStack_1c = param_2;
  puStack_18 = param_3;
  local_24 = thunk_FUN_4a17211c(param_2[6],uVar4);
  local_28 = param_3[1];
  uVar1 = thunk_FUN_4a17211c(param_2[3],local_28);
  local_2c = *param_3;
  uVar2 = thunk_FUN_4a17211c(*param_2,local_2c);
  uVar1 = thunk_FUN_4a171a94(uVar2,uVar1);
  uVar1 = thunk_FUN_4a171a94(uVar1,local_24);
  uVar1 = thunk_FUN_4a171a94(uVar1,param_2[9]);
  local_30 = thunk_FUN_4a17211c(param_2[7],uVar4);
  uVar2 = thunk_FUN_4a17211c(param_2[4],local_28);
  uVar3 = thunk_FUN_4a17211c(param_2[1],local_2c);
  uVar2 = thunk_FUN_4a171a94(uVar3,uVar2);
  uVar2 = thunk_FUN_4a171a94(uVar2,local_30);
  uVar2 = thunk_FUN_4a171a94(uVar2,param_2[10]);
  local_34 = thunk_FUN_4a17211c(param_2[8],uVar4);
  uVar3 = thunk_FUN_4a17211c(param_2[5],local_28);
  uVar4 = thunk_FUN_4a17211c(param_2[2],local_2c);
  uVar3 = thunk_FUN_4a171a94(uVar4,uVar3);
  uVar3 = thunk_FUN_4a171a94(uVar3,local_34);
  uVar3 = thunk_FUN_4a171a94(uVar3,param_2[0xb]);
  *local_20 = uVar1;
  local_20[1] = uVar2;
  local_20[2] = uVar3;
  return CONCAT44(&local_34,local_20 + 3);
}



// Address: 4a13f43a

undefined8 FUN_4a13f43a(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  
  local_24 = param_3[2];
  local_20 = param_1;
  puStack_1c = param_2;
  puStack_18 = param_3;
  local_28 = thunk_FUN_4a17211c(param_2[2],local_24);
  uVar4 = param_3[1];
  uVar1 = thunk_FUN_4a17211c(param_2[1],uVar4);
  local_2c = *param_3;
  uVar2 = thunk_FUN_4a17211c(*param_2,local_2c);
  uVar1 = thunk_FUN_4a171a94(uVar2,uVar1);
  uVar1 = thunk_FUN_4a171a94(uVar1,local_28);
  local_30 = thunk_FUN_4a17211c(param_2[5],local_24);
  uVar2 = thunk_FUN_4a17211c(param_2[4],uVar4);
  uVar3 = thunk_FUN_4a17211c(param_2[3],local_2c);
  uVar2 = thunk_FUN_4a171a94(uVar3,uVar2);
  uVar2 = thunk_FUN_4a171a94(uVar2,local_30);
  local_34 = thunk_FUN_4a17211c(param_2[8],local_24);
  uVar3 = thunk_FUN_4a17211c(param_2[7],uVar4);
  uVar4 = thunk_FUN_4a17211c(param_2[6],local_2c);
  uVar3 = thunk_FUN_4a171a94(uVar4,uVar3);
  uVar3 = thunk_FUN_4a171a94(uVar3,local_34);
  *local_20 = uVar1;
  local_20[1] = uVar2;
  local_20[2] = uVar3;
  return CONCAT44(&local_34,local_20 + 3);
}



// Address: 4a13f4e0

void FUN_4a13f4e0(undefined2 *param_1,undefined4 *param_2,short *param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar4 = FUN_4a171fac((int)param_3[2]);
  uVar5 = FUN_4a17211c(uVar4,param_2[2]);
  uVar6 = FUN_4a171fac((int)param_3[1]);
  uVar7 = FUN_4a17211c(uVar6,param_2[1]);
  uVar8 = FUN_4a171fac((int)*param_3);
  uVar9 = FUN_4a17211c(uVar8,*param_2);
  uVar7 = FUN_4a171a94(uVar9,uVar7);
  FUN_4a171a94(uVar7,uVar5);
  uVar1 = FUN_4a171e1c();
  uVar5 = FUN_4a17211c(uVar4,param_2[5]);
  uVar7 = FUN_4a17211c(uVar6,param_2[4]);
  uVar9 = FUN_4a17211c(uVar8,param_2[3]);
  uVar7 = FUN_4a171a94(uVar9,uVar7);
  FUN_4a171a94(uVar7,uVar5);
  uVar2 = FUN_4a171e1c();
  uVar4 = FUN_4a17211c(uVar4,param_2[8]);
  uVar5 = FUN_4a17211c(uVar6,param_2[7]);
  uVar6 = FUN_4a17211c(uVar8,param_2[6]);
  uVar5 = FUN_4a171a94(uVar6,uVar5);
  FUN_4a171a94(uVar5,uVar4);
  uVar3 = FUN_4a171e1c();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return;
}



// Address: 4a13f604

undefined4 * FUN_4a13f604(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  return param_1 + 3;
}



// Address: 4a13f61c

undefined8 FUN_4a13f61c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  
  local_24 = param_3[2];
  local_20 = param_1;
  puStack_1c = param_2;
  puStack_18 = param_3;
  local_28 = thunk_FUN_4a17211c(param_2[6],local_24);
  uVar4 = param_3[1];
  uVar1 = thunk_FUN_4a17211c(param_2[3],uVar4);
  local_2c = *param_3;
  uVar2 = thunk_FUN_4a17211c(*param_2,local_2c);
  uVar1 = thunk_FUN_4a171a94(uVar2,uVar1);
  uVar1 = thunk_FUN_4a171a94(uVar1,local_28);
  local_30 = thunk_FUN_4a17211c(param_2[7],local_24);
  uVar2 = thunk_FUN_4a17211c(param_2[4],uVar4);
  uVar3 = thunk_FUN_4a17211c(param_2[1],local_2c);
  uVar2 = thunk_FUN_4a171a94(uVar3,uVar2);
  uVar2 = thunk_FUN_4a171a94(uVar2,local_30);
  local_34 = thunk_FUN_4a17211c(param_2[8],local_24);
  uVar3 = thunk_FUN_4a17211c(param_2[5],uVar4);
  uVar4 = thunk_FUN_4a17211c(param_2[2],local_2c);
  uVar3 = thunk_FUN_4a171a94(uVar4,uVar3);
  uVar3 = thunk_FUN_4a171a94(uVar3,local_34);
  *local_20 = uVar1;
  local_20[1] = uVar2;
  local_20[2] = uVar3;
  return CONCAT44(&local_34,local_20 + 3);
}



// Address: 4a13f6c0

void FUN_4a13f6c0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
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
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  
  local_20 = param_1;
  puStack_1c = param_2;
  puStack_18 = param_3;
  uVar1 = thunk_FUN_4a17211c(param_2[2],param_3[6]);
  uVar2 = thunk_FUN_4a17211c(param_2[1],param_3[3]);
  uVar3 = thunk_FUN_4a17211c(*param_2,*param_3);
  uVar2 = thunk_FUN_4a171a94(uVar3,uVar2);
  local_8c = thunk_FUN_4a171a94(uVar2,uVar1);
  local_24 = param_3 + 1;
  uVar1 = thunk_FUN_4a17211c(param_2[2],param_3[7]);
  uVar2 = thunk_FUN_4a17211c(param_2[1],local_24[3]);
  uVar3 = thunk_FUN_4a17211c(*param_2,param_3[1]);
  uVar2 = thunk_FUN_4a171a94(uVar3,uVar2);
  local_88 = thunk_FUN_4a171a94(uVar2,uVar1);
  uVar1 = thunk_FUN_4a17211c(param_2[2],param_3[8]);
  local_28 = thunk_FUN_4a17211c(param_2[1],param_3[5]);
  uVar2 = thunk_FUN_4a17211c(*param_2,param_3[2]);
  uVar2 = thunk_FUN_4a171a94(uVar2,local_28);
  local_84 = thunk_FUN_4a171a94(uVar2,uVar1);
  local_2c = thunk_FUN_4a17211c(param_2[5],param_3[6]);
  local_30 = thunk_FUN_4a17211c(param_2[4],param_3[3]);
  uVar1 = thunk_FUN_4a17211c(param_2[3],*param_3);
  uVar1 = thunk_FUN_4a171a94(uVar1,local_30);
  local_80 = thunk_FUN_4a171a94(uVar1,local_2c);
  local_34 = thunk_FUN_4a17211c(param_2[5],local_24[6]);
  local_38 = thunk_FUN_4a17211c(param_2[4],local_24[3]);
  uVar1 = thunk_FUN_4a17211c(param_2[3],param_3[1]);
  uVar1 = thunk_FUN_4a171a94(uVar1,local_38);
  local_7c = thunk_FUN_4a171a94(uVar1,local_34);
  local_3c = thunk_FUN_4a17211c(param_2[5],param_3[8]);
  uVar1 = thunk_FUN_4a17211c(param_2[4],param_3[5]);
  uVar2 = thunk_FUN_4a17211c(param_2[3],param_3[2]);
  uVar1 = thunk_FUN_4a171a94(uVar2,uVar1);
  local_78 = thunk_FUN_4a171a94(uVar1,local_3c);
  local_40 = thunk_FUN_4a17211c(param_2[8],param_3[6]);
  local_44 = thunk_FUN_4a17211c(param_2[7],param_3[3]);
  uVar1 = thunk_FUN_4a17211c(param_2[6],*param_3);
  uVar1 = thunk_FUN_4a171a94(uVar1,local_44);
  local_74 = thunk_FUN_4a171a94(uVar1,local_40);
  local_48 = thunk_FUN_4a17211c(param_2[8],param_3[7]);
  local_4c = thunk_FUN_4a17211c(param_2[7],local_24[3]);
  uVar1 = thunk_FUN_4a17211c(param_2[6],param_3[1]);
  uVar1 = thunk_FUN_4a171a94(uVar1,local_4c);
  local_70 = thunk_FUN_4a171a94(uVar1,local_48);
  local_50 = thunk_FUN_4a17211c(param_2[8],param_3[8]);
  uVar1 = thunk_FUN_4a17211c(param_2[7],param_3[5]);
  uVar2 = thunk_FUN_4a17211c(param_2[6],param_3[2]);
  uVar1 = thunk_FUN_4a171a94(uVar2,uVar1);
  local_6c = thunk_FUN_4a171a94(uVar1,local_50);
  FUN_4a13f384(&local_5c,param_3,param_2 + 9);
  local_68 = local_5c;
  local_64 = local_58;
  local_60 = local_54;
  thunk_FUN_4a001134(local_20,&local_8c,0x30);
  return;
}



// Address: 4a13f88c

int FUN_4a13f88c(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)((longlong)(int)*(uint *)(param_1 + 0x78c) * (longlong)DAT_4a13f8c8 +
                ((ulonglong)*(uint *)(param_1 + 0x78c) << 0x20) >> 0x20);
  uVar2 = (iVar1 >> 10) - (iVar1 >> 0x1f);
  iVar1 = (int)((longlong)(int)uVar2 * (longlong)DAT_4a13f8cc + ((ulonglong)uVar2 << 0x20) >> 0x20);
  return ((iVar1 >> 2) - (iVar1 >> 0x1f)) * -7 + uVar2;
}



// Address: 4a13f8d0

undefined4 FUN_4a13f8d0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x940);
}



// Address: 4a13f8d8

int FUN_4a13f8d8(int param_1)

{
  return (int)*(char *)(param_1 + 0x7d8);
}



// Address: 4a13f8e4

int FUN_4a13f8e4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x7ec) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x7ec) + 8);
  }
  return (int)*(char *)(iVar1 + param_2);
}



// Address: 4a13f8f8

int FUN_4a13f8f8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x8e4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x8e4) + 8);
  }
  if ((*(ushort *)(iVar1 + param_2 * 2) & 2) == 0) {
    if (*(int *)(param_1 + 0x470) != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x470) + 8);
    }
    return (int)*(short *)(iVar2 + param_2 * 2);
  }
  return 0;
}



// Address: 4a13f938

int FUN_4a13f938(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x78c);
  iVar1 = (int)((longlong)(int)uVar2 * (longlong)DAT_4a13f964 + ((ulonglong)uVar2 << 0x20) >> 0x20);
  return uVar2 + ((iVar1 >> 10) - (iVar1 >> 0x1f)) * -0x5a0;
}



// Address: 4a13f968

int FUN_4a13f968(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x8d0) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x8d0) + 8);
  }
  return (int)*(char *)(iVar1 + param_2);
}



// Address: 4a13f97c

int FUN_4a13f97c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x4d4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x4d4) + 8);
  }
  iVar1 = *(int *)(iVar1 + param_2 * 0x14 + 0xc);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
  }
  return (int)*(char *)(iVar2 + param_3);
}



// Address: 4a13f9ac

int FUN_4a13f9ac(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x2d8) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x2d8) + 8);
  }
  return (int)*(char *)(iVar1 + param_2);
}



// Address: 4a13f9c0

undefined4 FUN_4a13f9c0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x8c0);
}



// Address: 4a13f9c8

undefined4 FUN_4a13f9c8(int param_1,short param_2)

{
  undefined4 uVar1;
  undefined1 auStack_1c [20];
  
  uVar1 = FUN_4a16c074(auStack_1c,param_1 + 0x414);
  uVar1 = FUN_4a16ff5c((int)param_2,uVar1,1);
  FUN_4a16c1a0(auStack_1c);
  return uVar1;
}



// Address: 4a13fa14

int FUN_4a13fa14(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 == 10) && (iVar1 = FUN_4a145968(*(undefined4 *)(param_1 + 0x18)), iVar1 != 0)) {
    return 4;
  }
  iVar1 = 0;
  if (*(int *)(param_1 + 0x4ac) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x4ac) + 8);
  }
  return (int)*(char *)(iVar1 + param_2);
}



// Address: 4a13fa58

int FUN_4a13fa58(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x28) + 8);
  }
  return (int)*(short *)(iVar1 + param_2 * 2);
}



// Address: 4a13fa70

int FUN_4a13fa70(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x7ac) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x7ac) + 8);
  }
  iVar1 = *(int *)(iVar1 + param_2 * 4);
  return (int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x10)) >> 0x10;
}



// Address: 4a13fa90

undefined4 FUN_4a13fa90(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1a0);
}



// Address: 4a13fa98

bool FUN_4a13fa98(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),1);
  return 0 < *(short *)(iVar1 + 0x1a);
}



// Address: 4a13fac4

int FUN_4a13fac4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0xa0) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xa0) + 8);
  }
  return (int)*(char *)(iVar1 + param_2);
}



// Address: 4a13fad8

int FUN_4a13fad8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x78) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x78) + 8);
  }
  return (int)*(short *)(iVar1 + param_2 * 2);
}



// Address: 4a13faf0

int FUN_4a13faf0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x708) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x708) + 8);
  }
  return (int)*(char *)(iVar1 + param_2);
}



// Address: 4a13fb04

undefined4 FUN_4a13fb04(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



// Address: 4a13fb0c

undefined4 FUN_4a13fb0c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x7ac) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x7ac) + 8);
  }
  return *(undefined4 *)(iVar1 + param_2 * 4);
}



// Address: 4a13fb20

undefined4 FUN_4a13fb20(void)

{
  return 0x11;
}



// Address: 4a13fb44

undefined4 FUN_4a13fb44(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x53c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x53c) + 8);
  }
  return *(undefined4 *)(iVar1 + param_2 * 4);
}



// Address: 4a13fb58

int FUN_4a13fb58(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x618) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x618) + 8);
  }
  iVar1 = *(int *)(iVar1 + param_2 * 0x14 + 0xc);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
  }
  return (int)*(char *)(iVar2 + param_3);
}



// Address: 4a13fb88

undefined1 FUN_4a13fb88(int param_1)

{
  return *(undefined1 *)(param_1 + 0x798);
}



// Address: 4a13fb90

undefined4 FUN_4a13fb90(int param_1)

{
  return *(undefined4 *)(param_1 + 0x78c);
}



// Address: 4a13fb98

undefined4 FUN_4a13fb98(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c0);
}



// Address: 4a13fba0

undefined4 FUN_4a13fba0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x83c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x83c) + 8);
  }
  return *(undefined4 *)(iVar1 + param_2 * 4);
}



// Address: 4a13fbb4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_4a13fbb4(int param_1,short param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int unaff_r4;
  int iVar4;
  int unaff_r5;
  undefined1 auStack_24 [20];
  
  switchD_4a11cc8c::default((param_3 >> 0x1f) + 1,s_invalid_id_4a13fc40);
  uVar1 = FUN_4a16c074(auStack_24,param_1 + 0x988);
  iVar2 = FUN_4a16ff5c((int)(short)((ushort)param_3 | param_2 << 8),uVar1,0);
  FUN_4a16c1a0(auStack_24);
  iVar4 = iVar2;
  if (iVar2 == -1) {
    iVar4 = unaff_r4;
    param_1 = unaff_r5;
  }
  iVar3 = 0;
  if (iVar2 != -1) {
    if (*(int *)(param_1 + 0x9a8) != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x9a8) + 8);
    }
    return *(undefined4 *)(iVar3 + iVar4 * 4);
  }
  return 0;
}



// Address: 4a13fc4c

undefined4 FUN_4a13fc4c(int param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_1c [20];
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x4d4) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x4d4) + 8);
  }
  uVar1 = FUN_4a16b5a0(auStack_1c,iVar2 + param_2 * 0x14);
  uVar1 = FUN_4a16fe9c((int)param_3,uVar1,0);
  FUN_4a16b6c0(auStack_1c);
  return uVar1;
}



// Address: 4a13fca8

bool FUN_4a13fca8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),0);
  return 0 < *(short *)(iVar1 + 0x1a);
}



// Address: 4a13fcd4

bool FUN_4a13fcd4(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0x7f8) & param_2) != 0;
}



// Address: 4a13fce4

int FUN_4a13fce4(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  bVar2 = -1 < param_2;
  bVar3 = param_2 == 0;
  if (bVar2) {
    param_3 = *(int *)(param_1 + 0x950);
    bVar3 = param_3 == param_2;
  }
  if (bVar3 || (!bVar2 || param_3 < param_2)) {
    param_1 = -1;
  }
  if (!bVar3 && (bVar2 && param_2 <= param_3)) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x954) != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x954) + 8);
    }
    return (int)*(short *)(iVar1 + param_2 * 2);
  }
  return param_1;
}



// Address: 4a13fd10

undefined4 FUN_4a13fd10(int param_1)

{
  return *(undefined4 *)(param_1 + 0x79c);
}



// Address: 4a13fd18

undefined4 FUN_4a13fd18(int param_1)

{
  return *(undefined4 *)(param_1 + 0x164);
}



// Address: 4a13fd20

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_4a13fd20(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 == 0x83) {
    return 10;
  }
  if (param_2 == 0xa9) {
    iVar6 = 0;
    if (*(int *)(param_1 + 0x4ac) == 0) {
      pcVar2 = (char *)0x0;
    }
    else {
      pcVar2 = *(char **)(*(int *)(param_1 + 0x4ac) + 8);
    }
    cVar1 = *pcVar2;
    if (cVar1 != -1) {
      iVar3 = FUN_4a14039c(param_1,0);
      if (*(int *)(param_1 + 0x118) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x118) + 8);
      }
      iVar5 = *(int *)(iVar5 + cVar1 * 0x14 + 0xc);
      if (iVar5 != 0) {
        iVar6 = *(int *)(iVar5 + 8);
      }
      if ((*(ushort *)(iVar6 + iVar3 * 2) & 2) != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a13fda4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*UNRECOVERED_JUMPTABLE)(0xf);
        return uVar4;
      }
    }
    return 0x1e;
  }
  switchD_4a11cc8c::default(0,s_unknown_cost_for_action_4a13fdcc);
  return 0;
}



// Address: 4a13fde4

int FUN_4a13fde4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x25c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x25c) + 8);
  }
  return (int)*(short *)(iVar1 + param_2 * 2);
}



// Address: 4a13fdfc

int FUN_4a13fdfc(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x248) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x248) + 8);
  }
  return (int)*(short *)(iVar1 + param_2 * 2);
}



// Address: 4a13fe14

int FUN_4a13fe14(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x3a4) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x3a4) + 8);
  }
  return (int)*(char *)(iVar1 + param_2);
}



// Address: 4a13fe28

undefined4 FUN_4a13fe28(undefined4 param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    break;
  case 1:
    return 0xa1b;
  case 2:
    return 0xaf6;
  case 3:
    return 0xaf5;
  case 4:
    return 0xa29;
  case 5:
    return 0xa22;
  default:
    switchD_4a11cc8c::default(0,s_invalid_requirement_4a13febc);
  }
  return 0xa0d;
}



// Address: 4a13fed0

undefined4 FUN_4a13fed0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x4d4) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x4d4) + 8);
  }
  return *(undefined4 *)(iVar1 + param_2 * 0x14 + 8);
}



// Address: 4a13feec

int FUN_4a13feec(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_20 [12];
  int local_14;
  
  FUN_4a16c074(auStack_20,param_1 + 0x880);
  iVar2 = 0;
  while( true ) {
    if (local_14 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(local_14 + 8);
    }
    if (*(short *)(iVar1 + iVar2 * 2) == param_2) break;
    iVar2 = iVar2 + 1;
    if (5 < iVar2) {
      FUN_4a16c1a0(auStack_20);
      return -1;
    }
  }
  FUN_4a16c1a0(auStack_20);
  return iVar2;
}



// Address: 4a13ff68

int FUN_4a13ff68(int param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined *puVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  
  switch(param_2) {
  default:
    switchD_4a11cc8c::default(0,s_unknown_action_with_talk_phase_4a14025c);
  case 0x17:
  case 0x18:
  case 0x20:
  case 0x5e:
  case 0x5f:
  case 0x60:
    uVar7 = 0x10;
    break;
  case 0x1e:
  case 0x1f:
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
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x53:
  case 0x54:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x93:
  case 0x94:
  case 0x96:
    uVar7 = 1;
    break;
  case 0x3e:
  case 0x46:
  case 0x4a:
    uVar7 = 4;
    break;
  case 0x3f:
    uVar7 = 0x40;
    break;
  case 0x47:
  case 0x4b:
    uVar7 = 0x80;
    break;
  case 0x48:
  case 0x4c:
    uVar7 = 0x200;
    break;
  case 0x4d:
  case 0x95:
    uVar7 = 0x100;
    break;
  case 0x4e:
  case 0x4f:
  case 0x50:
    uVar7 = 0x20;
    break;
  case 99:
    uVar7 = 8;
    break;
  case 0x75:
    uVar7 = 0xffff;
  }
  puVar2 = PTR_DAT_4a14027c;
  iVar5 = 0;
  puVar3 = (ushort *)(PTR_DAT_4a14027c + 2);
  iVar4 = 0x39;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 2;
    if ((uVar1 & uVar7) != 0) {
      iVar5 = iVar5 + 1;
    }
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = FUN_4a0fe640(*(undefined4 *)(param_1 + 0x18),0,iVar5 + -1);
  iVar6 = 0;
  iVar5 = 0;
  do {
    if ((*(ushort *)(puVar2 + iVar5 * 2 + 2) & uVar7) != 0) {
      if (iVar6 == iVar4) {
        return (int)*(short *)(puVar2 + iVar5 * 2);
      }
      iVar6 = iVar6 + 1;
    }
    iVar5 = iVar5 + 2;
  } while (iVar5 < 0x72);
  return 9;
}



// Address: 4a140280

int FUN_4a140280(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x550) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x550) + 8);
  }
  return (int)*(short *)(iVar1 + param_2 * 2);
}



// Address: 4a140298

int FUN_4a140298(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x288) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x288) + 8);
  }
  return (int)*(short *)(iVar1 + param_2 * 2);
}



// Address: 4a1402b0

undefined1 FUN_4a1402b0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(int *)(param_1 + 0x78c) - 0x1e0;
  iVar2 = (int)((longlong)(int)uVar1 * (longlong)DAT_4a140334 + ((ulonglong)uVar1 << 0x20) >> 0x20);
  iVar4 = (iVar2 >> 10) - (iVar2 >> 0x1f);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    do {
      if (*(int *)(param_1 + 0x7ac) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x7ac) + 8);
      }
      iVar3 = *(int *)(iVar3 + iVar2 * 4);
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + ((int)(iVar3 + ((uint)(iVar3 >> 0x1f) >> 0x10)) >> 0x10);
    } while (iVar2 < *(int *)(param_1 + 0x24));
  }
  if (iVar4 < 0xf) {
    return 4 < iVar4;
  }
  return 2;
}



// Address: 4a140338

int FUN_4a140338(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520));
  return (int)*(short *)(iVar1 + 0x1a);
}



// Address: 4a140354

int FUN_4a140354(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != -1) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x7c8) != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x7c8) + 8);
    }
    iVar1 = *(char *)(iVar1 + param_2) + -1;
    if (0 < iVar1) {
      return iVar1;
    }
  }
  return 0;
}



// Address: 4a140384

int FUN_4a140384(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x234) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x234) + 8);
  }
  return (int)*(short *)(iVar1 + param_2 * 2);
}



// Address: 4a14039c

int FUN_4a14039c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((param_2 == 10) && (iVar1 = FUN_4a145968(*(undefined4 *)(param_1 + 0x18)), iVar1 != 0)) {
    if (*(int *)(param_1 + 0xf0) != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0xf0) + 8);
    }
    return *(int *)(iVar2 + 0x58) + -1;
  }
  if (*(int *)(param_1 + 0x4c0) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x4c0) + 8);
  }
  return (int)*(char *)(iVar2 + param_2);
}



// Address: 4a1403f8

int FUN_4a1403f8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x50) + 8);
  }
  if (*(int *)(param_1 + 0x7ac) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x7ac) + 8);
  }
  iVar1 = *(int *)(iVar1 + param_2 * 4);
  iVar2 = *(int *)(iVar2 + param_2 * 0x14 + 0xc);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 8);
  }
  return (int)*(short *)(iVar3 + ((int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x10)) >> 0x10) * 2);
}



// Address: 4a14044c

undefined4 FUN_4a14044c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_4a13fc4c();
  if (iVar1 != -1) {
    iVar3 = 0;
    if (*(int *)(param_1 + 0x934) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0x934) + 8);
    }
    iVar2 = *(int *)(iVar2 + param_2 * 0x14 + 0xc);
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 8);
    }
    if ('\x02' < *(char *)(iVar3 + iVar1)) {
      return 1;
    }
  }
  return 0;
}



// Address: 4a1404ac

int FUN_4a1404ac(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  bVar2 = -1 < param_2;
  bVar3 = param_2 == 0;
  if (bVar2) {
    param_3 = *(int *)(param_1 + 0x1a0);
    bVar3 = param_3 == param_2;
  }
  if (bVar3 || (!bVar2 || param_3 < param_2)) {
    param_1 = 0x24c;
  }
  if (bVar3 || (!bVar2 || param_3 < param_2)) {
    param_1 = param_1 + 0x800;
  }
  if (!bVar3 && (bVar2 && param_2 <= param_3)) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x1a4) != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1a4) + 8);
    }
    return (int)*(short *)(iVar1 + param_2 * 2);
  }
  return param_1;
}



// Address: 4a1404dc

int FUN_4a1404dc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_30 [8];
  int local_28;
  undefined1 auStack_1c [20];
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x4d4) != 0) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x4d4) + 8);
  }
  FUN_4a16b5a0(auStack_30,uVar2);
  uVar2 = FUN_4a16b5a0(auStack_1c,auStack_30);
  iVar1 = FUN_4a0feb4c(0xffffffff,uVar2);
  FUN_4a16b6c0(auStack_1c);
  FUN_4a16b6c0(auStack_30);
  return local_28 - iVar1;
}



// Address: 4a14053c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_4a14053c(int param_1,short param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int unaff_r4;
  int iVar4;
  int unaff_r5;
  undefined1 auStack_24 [20];
  
  switchD_4a11cc8c::default((param_3 >> 0x1f) + 1,s_invalid_id_4a1405c8);
  uVar1 = FUN_4a16c074(auStack_24,param_1 + 0x988);
  iVar2 = FUN_4a16ff5c((int)(short)((ushort)param_3 | param_2 << 8),uVar1,0);
  FUN_4a16c1a0(auStack_24);
  iVar4 = iVar2;
  if (iVar2 == -1) {
    iVar4 = unaff_r4;
    param_1 = unaff_r5;
  }
  iVar3 = 0;
  if (iVar2 != -1) {
    if (*(int *)(param_1 + 0x9bc) != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x9bc) + 8);
    }
    return *(undefined4 *)(iVar3 + iVar4 * 4);
  }
  return 0xffffffff;
}



// Address: 4a1405d4

uint FUN_4a1405d4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_4c [12];
  int local_40;
  undefined1 auStack_38 [12];
  int local_2c;
  undefined1 auStack_24 [8];
  int local_1c;
  int local_18;
  
  uVar4 = 0;
  FUN_4a16bdcc(auStack_24,param_1 + 0x830);
  FUN_4a16c074(auStack_38,param_1 + 0x200);
  FUN_4a16bdcc(auStack_4c,param_1 + 0x214);
  iVar1 = 0;
  if (0 < local_1c) {
    do {
      if (local_18 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(local_18 + 8);
      }
      if (local_40 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(local_40 + 8);
      }
      if (*(int *)(iVar2 + iVar1 * 4) < *(int *)(iVar3 + iVar1 * 4)) {
        if (local_2c == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(local_2c + 8);
        }
        uVar4 = uVar4 | (int)*(short *)(iVar2 + iVar1 * 2);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_1c);
  }
  FUN_4a16bef4(auStack_4c);
  FUN_4a16c1a0(auStack_38);
  FUN_4a16bef4(auStack_24);
  return uVar4;
}



// Address: 4a1406a0

int FUN_4a1406a0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x364) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x364) + 8);
  }
  return (int)*(short *)(iVar1 + param_2 * 2);
}



// Address: 4a1406b8

bool FUN_4a1406b8(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_4a144e8c(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520));
  if (uVar1 != 0xffffffff) {
    return (*(uint *)(param_1 + 0x828) & 1 << (uVar1 & 0xff)) != 0;
  }
  return false;
}



// Address: 4a1406f4

undefined4 FUN_4a1406f4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x618) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x618) + 8);
  }
  return *(undefined4 *)(iVar1 + param_2 * 0x14 + 8);
}



// Address: 4a140710

int FUN_4a140710(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != -1) {
    iVar1 = 0;
    if (*(int *)(param_1 + 100) != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 100) + 8);
    }
    return (int)*(short *)(iVar1 + param_2 * 2);
  }
  return 0xacb;
}



// Address: 4a140738

int FUN_4a140738(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0xdc) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xdc) + 8);
  }
  return (int)*(short *)(iVar1 + param_2 * 2);
}



// Address: 4a140750

undefined4 FUN_4a140750(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0xf0) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xf0) + 8);
  }
  return *(undefined4 *)(iVar1 + param_2 * 0x14 + 8);
}



// Address: 4a14076c

int FUN_4a14076c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x118) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x118) + 8);
  }
  iVar1 = *(int *)(iVar1 + param_2 * 0x14 + 0xc);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
  }
  return (int)*(short *)(iVar2 + param_3 * 2);
}



// Address: 4a1407a0

int FUN_4a1407a0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x8c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x8c) + 8);
  }
  return (int)*(short *)(iVar1 + param_2 * 2);
}



// Address: 4a1407b8

int FUN_4a1407b8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar1 = FUN_4a142f80(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520));
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),iVar4);
      if (*(short *)(iVar2 + 0x1a) != 0) {
        if (iVar3 == param_2) {
          return iVar4;
        }
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return -1;
}



// Address: 4a14082c

int FUN_4a14082c(int param_1)

{
  return (int)*(short *)(PTR_DAT_4a140840 + *(int *)(param_1 + 0x8bc) * 2);
}



// Address: 4a140844

int FUN_4a140844(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x1d0) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1d0) + 8);
  }
  return (int)*(short *)(iVar1 + param_2 * 2);
}



// Address: 4a14085c

int FUN_4a14085c(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  if ((param_2 == 10) && (iVar1 = FUN_4a145968(*(undefined4 *)(param_1 + 0x18)), iVar1 != 0)) {
    iVar1 = 4;
  }
  else {
    if (*(int *)(param_1 + 0x4ac) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x4ac) + 8);
    }
    iVar1 = (int)*(char *)(iVar1 + param_2);
  }
  switchD_4a11cc8c::default(iVar1 != -1,s_Can_t_get_the_start_time_for_a_s_4a140a38);
  iVar2 = FUN_4a14039c(param_1,param_2);
  if (*(int *)(param_1 + 0x118) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(param_1 + 0x118) + 8);
  }
  iVar5 = *(int *)(iVar5 + iVar1 * 0x14 + 0xc);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iVar5 + 8);
  }
  if (*(int *)(param_1 + 300) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(param_1 + 300) + 8);
  }
  iVar1 = *(int *)(iVar6 + iVar1 * 0x14 + 0xc);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 8);
  }
  iVar9 = (int)*(short *)(iVar1 + iVar2 * 2);
  iVar1 = (int)((longlong)(int)param_3 * (longlong)DAT_4a140a60 + ((ulonglong)param_3 << 0x20) >>
               0x20);
  iVar6 = (int)((longlong)(int)param_3 * (longlong)DAT_4a140a60 + ((ulonglong)param_3 << 0x20) >>
               0x20);
  uVar7 = (iVar6 >> 10) - (iVar6 >> 0x1f);
  iVar6 = (int)((longlong)(int)uVar7 * (longlong)DAT_4a140a64 + ((ulonglong)uVar7 << 0x20) >> 0x20);
  uVar7 = ((iVar6 >> 2) - (iVar6 >> 0x1f)) * -7 + uVar7;
  iVar6 = 0;
  do {
    uVar8 = uVar7 + iVar6;
    iVar3 = (int)((longlong)(int)uVar8 * (longlong)DAT_4a140a64 + ((ulonglong)uVar8 << 0x20) >> 0x20
                 );
    uVar8 = uVar8 + ((iVar3 >> 2) - (iVar3 >> 0x1f)) * -7;
    uVar4 = *(uint *)(PTR_DAT_4a140a68 + uVar8 * 4);
    if ((uVar4 & (int)*(short *)(iVar5 + iVar2 * 2)) != 0) {
      if (param_2 == 0) {
        uVar4 = (uint)*(char *)(param_1 + 0x7b4);
      }
      if ((param_2 != 0 || uVar4 != uVar8) &&
         ((uVar8 != uVar7 || ((int)(param_3 + ((iVar1 >> 10) - (iVar1 >> 0x1f)) * -0x5a0) < iVar9)))
         ) break;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 7);
  iVar1 = (int)((longlong)(int)*(uint *)(param_1 + 0x78c) * (longlong)DAT_4a140a60 +
                ((ulonglong)*(uint *)(param_1 + 0x78c) << 0x20) >> 0x20);
  iVar9 = ((iVar1 >> 10) - (iVar1 >> 0x1f)) * 0x5a0 + iVar9;
  if (uVar8 != uVar7) {
    uVar7 = (uVar8 - uVar7) + 7;
    iVar1 = (int)((longlong)(int)uVar7 * (longlong)DAT_4a140a64 + ((ulonglong)uVar7 << 0x20) >> 0x20
                 );
    return iVar9 + (((iVar1 >> 2) - (iVar1 >> 0x1f)) * -7 + uVar7) * 0x5a0;
  }
  return iVar9;
}



// Address: 4a140a6c

int FUN_4a140a6c(int param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int *unaff_r4;
  int *piVar4;
  int unaff_r5;
  int iVar5;
  int iVar6;
  int unaff_r6;
  int *piVar7;
  
  piVar4 = (int *)0x0;
  switch(param_2) {
  case 1:
    if (*(int *)(param_1 + 0x7ac) != 0) {
      piVar4 = *(int **)(*(int *)(param_1 + 0x7ac) + 8);
    }
    return (int)(piVar4[1] + ((uint)(piVar4[1] >> 0x1f) >> 0x10)) >> 0x10;
  case 2:
    return (int)*(short *)(param_1 + 0x7b6);
  case 3:
    break;
  case 4:
    if (*(int *)(param_1 + 0x7ac) != 0) {
      piVar4 = *(int **)(*(int *)(param_1 + 0x7ac) + 8);
    }
    return (int)(piVar4[3] + ((uint)(piVar4[3] >> 0x1f) >> 0x10)) >> 0x10;
  case 5:
    if (*(int *)(param_1 + 0x7ac) != 0) {
      piVar4 = *(int **)(*(int *)(param_1 + 0x7ac) + 8);
    }
    return (int)(piVar4[2] + ((uint)(piVar4[2] >> 0x1f) >> 0x10)) >> 0x10;
  default:
    switchD_4a11cc8c::default(0,s_invalid_requirement_4a140ba8);
  case 0:
    if (*(int *)(param_1 + 0x7ac) != 0) {
      piVar4 = *(int **)(*(int *)(param_1 + 0x7ac) + 8);
    }
    return (int)(*piVar4 + ((uint)(*piVar4 >> 0x1f) >> 0x10)) >> 0x10;
  }
  iVar5 = *(int *)(param_1 + 0x410);
  iVar2 = 0;
  iVar6 = iVar5;
  if (iVar5 < 2) {
    piVar4 = unaff_r4;
    iVar6 = unaff_r5;
    param_1 = unaff_r6;
  }
  iVar3 = 1;
  if (iVar5 < 2) {
    return 0;
  }
  do {
    piVar7 = piVar4;
    if (*(int *)(param_1 + 0x8d0) != 0) {
      piVar7 = *(int **)(*(int *)(param_1 + 0x8d0) + 8);
    }
    pcVar1 = (char *)((int)piVar7 + iVar3);
    piVar7 = piVar4;
    if (*(int *)(param_1 + 0x3a4) != 0) {
      piVar7 = *(int **)(*(int *)(param_1 + 0x3a4) + 8);
    }
    iVar3 = iVar3 + 1;
    if ((*(byte *)((int)piVar7 + (int)*pcVar1) & 0x10) != 0) {
      iVar2 = iVar2 + 1;
    }
  } while (iVar3 < iVar6);
  return iVar2;
}



// Address: 4a140bbc

int FUN_4a140bbc(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0x4ac) == 0) {
    pcVar2 = (char *)0x0;
  }
  else {
    pcVar2 = *(char **)(*(int *)(param_1 + 0x4ac) + 8);
  }
  cVar1 = *pcVar2;
  iVar3 = FUN_4a0fb748(*(undefined4 *)(param_1 + 0x18));
  if (iVar3 < 0x32) {
    iVar3 = *(int *)(param_1 + 0xb4);
  }
  else {
    iVar3 = *(int *)(param_1 + 200);
  }
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + 8);
  }
  return (int)*(short *)(iVar4 + cVar1 * 2);
}



// Address: 4a140c1c

int FUN_4a140c1c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x104) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x104) + 8);
  }
  iVar1 = *(int *)(iVar1 + param_2 * 0x14 + 0xc);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
  }
  return (int)*(short *)(iVar2 + param_3 * 2);
}



// Address: 4a140c50

int FUN_4a140c50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_20 [8];
  int local_18;
  int local_14;
  
  if (*(int *)(param_1 + 0x90c) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x90c) + 8);
  }
  FUN_4a16bdcc(auStack_20,iVar1 + param_2 * 0x14);
  iVar4 = 0;
  iVar1 = 3;
  iVar2 = 0;
  if (0 < local_18) {
    do {
      if (local_14 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(local_14 + 8);
      }
      if (iVar4 < *(int *)(iVar3 + iVar2 * 4)) {
        if (local_14 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(local_14 + 8);
        }
        iVar4 = *(int *)(iVar1 + iVar2 * 4);
        iVar1 = iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_18);
  }
  FUN_4a16bef4(auStack_20);
  return iVar1;
}



// Address: 4a140cec

int FUN_4a140cec(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = 0;
  uVar1 = FUN_4a142f80(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520));
  if ((int)uVar1 < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = uVar1 & 1;
  }
  iVar5 = 0;
  if (uVar4 != 0) {
    do {
      iVar2 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),iVar5);
      iVar5 = iVar5 + 1;
      if (*(short *)(iVar2 + 0x1a) != 0) {
        iVar3 = iVar3 + 1;
      }
    } while (iVar5 < (int)uVar4);
  }
  while ((int)uVar4 < (int)uVar1) {
    iVar5 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),uVar4);
    if (*(short *)(iVar5 + 0x1a) != 0) {
      iVar3 = iVar3 + 1;
    }
    iVar5 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),uVar4 + 1);
    uVar4 = uVar4 + 2;
    if (*(short *)(iVar5 + 0x1a) != 0) {
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}



// Address: 4a140d9c

int FUN_4a140d9c(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 == 1) && (iVar1 = FUN_4a141abc(param_1,0), iVar1 == 0)) {
    return 0xa3d;
  }
  iVar1 = 0;
  if (*(int *)(param_1 + 0x168) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x168) + 8);
  }
  return (int)*(short *)(iVar1 + param_2 * 2);
}



// Address: 4a140dec

int FUN_4a140dec(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x71c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x71c) + 8);
  }
  return (int)*(short *)(iVar1 + param_2 * 2);
}



// Address: 4a140e04

undefined4 FUN_4a140e04(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined1 auStack_28 [12];
  int local_1c;
  
  iVar2 = *(int *)(param_1 + 0x154);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 8);
  }
  iVar5 = 0;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  iVar3 = *(int *)(iVar3 + param_2 * 0x14 + 0xc);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar3 + 8);
  }
  FUN_4a16b5a0(auStack_28,iVar3 + param_3 * 0x14);
  if (local_1c != 0) {
    pcVar4 = *(char **)(local_1c + 8);
  }
  else {
    pcVar4 = (char *)0x0;
  }
  if (local_1c != 0) {
    iVar3 = *(int *)(local_1c + 8);
  }
  else {
    iVar3 = 0;
  }
  cVar1 = *(char *)(iVar3 + 1);
  if ((*pcVar4 == -1) || (iVar3 = FUN_4a140a6c(param_1), cVar1 <= iVar3)) {
    if (local_1c != 0) {
      iVar3 = *(int *)(local_1c + 8);
    }
    else {
      iVar3 = 0;
    }
    if (local_1c != 0) {
      iVar2 = *(int *)(local_1c + 8);
    }
    else {
      iVar2 = 0;
    }
    cVar1 = *(char *)(iVar2 + 3);
    if ((*(char *)(iVar3 + 2) == -1) || (iVar3 = FUN_4a140a6c(param_1), cVar1 <= iVar3)) {
      if (*(int *)(param_1 + 0xa0) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0xa0) + 8);
      }
      if (*(int *)(param_1 + 0x8d0) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(param_1 + 0x8d0) + 8);
      }
      if (*(int *)(param_1 + 0x3a4) != 0) {
        iVar5 = *(int *)(*(int *)(param_1 + 0x3a4) + 8);
      }
      if ((*(byte *)(iVar5 + *(char *)(iVar2 + *(char *)(iVar3 + param_2))) & 2) == 0) {
        FUN_4a16b6c0(auStack_28);
        return 1;
      }
    }
  }
  FUN_4a16b6c0(auStack_28);
  return 0;
}



// Address: 4a140f38

undefined4 FUN_4a140f38(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_20 [20];
  
  iVar3 = 0;
  if (*(int *)(param_1 + 400) != 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 400) + 8);
  }
  sVar1 = *(short *)(iVar3 + *(char *)(param_1 + 0x7d8) * 2);
  uVar2 = FUN_4a16c074(auStack_20,param_1 + 0x1ac);
  uVar2 = FUN_4a0fe57c(param_2,uVar2,(int)sVar1);
  FUN_4a16c1a0(auStack_20);
  return uVar2;
}



// Address: 4a140fa0

int FUN_4a140fa0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x730) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x730) + 8);
  }
  return (int)*(short *)(iVar1 + param_2 * 2);
}



// Address: 4a140fb8

int FUN_4a140fb8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x390) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x390) + 8);
  }
  return (int)*(short *)(iVar1 + param_2 * 2);
}



// Address: 4a140fd0

undefined4 FUN_4a140fd0(int param_1,int param_2,int param_3)

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
  iVar1 = *(int *)(iVar1 + param_2 * 0x14 + 0xc);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
  }
  return *(undefined4 *)(iVar2 + param_3 * 4);
}



// Address: 4a141000

undefined4 FUN_4a141000(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0x4ac) == 0) {
    pcVar2 = (char *)0x0;
  }
  else {
    pcVar2 = *(char **)(*(int *)(param_1 + 0x4ac) + 8);
  }
  cVar1 = *pcVar2;
  iVar3 = FUN_4a14039c(param_1,0);
  if (*(int *)(param_1 + 0xf0) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0xf0) + 8);
  }
  if (((iVar3 < *(int *)(iVar4 + cVar1 * 0x14 + 8) + -1) &&
      (iVar4 = FUN_4a140e04(param_1,(int)cVar1,iVar3 + 1), iVar4 != 0)) &&
     (9 < *(short *)(param_1 + 0x7b6))) {
    return 1;
  }
  return 0;
}



// Address: 4a141090

int FUN_4a141090(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x140) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x140) + 8);
  }
  iVar1 = *(int *)(iVar1 + param_2 * 0x14 + 0xc);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
  }
  return (int)*(short *)(iVar2 + param_3 * 2);
}



// Address: 4a1410c4

undefined4 FUN_4a1410c4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_1c [20];
  
  uVar1 = FUN_4a16c074(auStack_1c,param_1 + 0x1ac);
  iVar2 = 0;
  if (*(int *)(param_1 + 400) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 400) + 8);
  }
  uVar1 = FUN_4a0fb860((int)*(short *)(iVar2 + *(char *)(param_1 + 0x7d8) * 2),uVar1);
  FUN_4a16c1a0(auStack_1c);
  return uVar1;
}



// Address: 4a141128

undefined4 FUN_4a141128(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_1c [20];
  
  uVar1 = FUN_4a16b5a0(auStack_1c,param_1 + 0x8c4);
  uVar1 = FUN_4a0fd488(param_2,uVar1,0);
  FUN_4a16b6c0(auStack_1c);
  return uVar1;
}



// Address: 4a141170

int FUN_4a141170(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_4a141abc(param_1,0);
  iVar3 = 0;
  if (*(int *)(param_1 + 0x45c) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x45c) + 8);
  }
  iVar1 = *(int *)(iVar1 + param_2 * 0x14 + 0xc);
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 8);
  }
  iVar3 = *(int *)(iVar3 + param_3 * 4);
  switch(param_3) {
  case 0:
  case 3:
  case 6:
  case 8:
  case 10:
  case 0xc:
    return iVar3;
  case 1:
  case 2:
  case 4:
  case 5:
  case 7:
  case 9:
  case 0xb:
    uVar2 = FUN_4a141abc(param_1,0);
    uVar2 = FUN_4a1415a0(param_1,uVar2,param_3);
    iVar3 = FUN_4a144350(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),uVar2,iVar3);
    if (iVar3 != -1) {
      return iVar3;
    }
  }
  return -1;
}



// Address: 4a141248

bool FUN_4a141248(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x8e4) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x8e4) + 8);
  }
  return ((int)*(short *)(iVar1 + param_2 * 2) & param_3) != 0;
}



// Address: 4a141268

bool FUN_4a141268(int param_1)

{
  return *(int *)(param_1 + 0x944) < 10000;
}



// Address: 4a141284

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_4a141284(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  bool bVar6;
  int iVar7;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar8;
  undefined1 auStack_38 [20];
  
  iVar4 = *(int *)(param_1 + 0x410) + -1;
  bVar6 = true;
  iVar7 = 0;
  if (0 < iVar4) {
    do {
      iVar1 = *(int *)(param_1 + 0x8e4);
      if (iVar1 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar1 + 8);
      }
      if ((*(ushort *)(iVar3 + iVar4 * 2) & 2) == 0) {
        if (*(int *)(param_1 + 0x470) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(param_1 + 0x470) + 8);
        }
        sVar5 = *(short *)(iVar3 + iVar4 * 2);
      }
      else {
        sVar5 = 0;
      }
      if (sVar5 != 0) {
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(iVar1 + 8);
        }
        bVar8 = ((int)*(short *)(iVar1 + iVar4 * 2) & param_2) != 0;
        bVar6 = (bool)(bVar6 & bVar8);
        if (bVar8) {
          uVar2 = FUN_4a16c074(auStack_38,param_1 + 0x464);
          iVar1 = FUN_4a16ff5c((int)sVar5,uVar2,iVar4 + 1);
          FUN_4a16c1a0(auStack_38);
          if (iVar1 == -1) {
            iVar7 = iVar7 + 1;
          }
        }
      }
      iVar4 = iVar4 + -1;
    } while (0 < iVar4);
    if (!bVar6) {
                    /* WARNING: Could not recover jumptable at 0x4a14137c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(iVar7);
      return uVar2;
    }
  }
  return 0xffffffff;
}



// Address: 4a141390

int FUN_4a141390(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  undefined1 auStack_1c [20];
  
  switchD_4a11cc8c::default(1,s_stranger_should_be_0_4a141408);
  pbVar3 = (byte *)0x0;
  if (*(int *)(param_1 + 0x8d0) != 0) {
    pbVar3 = *(byte **)(*(int *)(param_1 + 0x8d0) + 8);
  }
  iVar1 = 1 - (uint)*pbVar3;
  if (1 < *pbVar3) {
    iVar1 = 0;
  }
  switchD_4a11cc8c::default(iVar1,s_player_rel_state_should_be_stran_4a141420);
  uVar2 = FUN_4a16b5a0(auStack_1c,param_1 + 0x8c4);
  iVar1 = FUN_4a0feb4c(0,uVar2);
  iVar4 = *(int *)(param_1 + 0x8cc);
  FUN_4a16b6c0(auStack_1c);
  return iVar4 - iVar1;
}



// Address: 4a141444

bool FUN_4a141444(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0x7f4) & 1 << (param_2 & 0xff)) != 0;
}



// Address: 4a141458

uint FUN_4a141458(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 unaff_r4;
  int iVar6;
  
  switch(param_3) {
  case 0:
  case 3:
  case 6:
  case 8:
  case 10:
  case 0xc:
    return param_4;
  case 1:
  case 2:
  case 4:
  case 5:
  case 7:
  case 9:
  case 0xb:
    break;
  default:
    return 0;
  }
  iVar1 = FUN_4a1415a0(param_1);
  iVar6 = *(int *)(*(int *)(param_1 + 0x18) + 0x520);
  uVar2 = FUN_4a0642fc();
  switch(iVar1) {
  case 0:
  case 1:
  case 8:
    iVar3 = *(int *)(iVar6 + 0xcc);
    iVar6 = 0;
    if (iVar3 != 0) {
      iVar6 = *(int *)(iVar3 + 8);
    }
    iVar3 = *(int *)(iVar6 + iVar1 * 0x14 + 0xc);
    iVar6 = 0;
    if (iVar3 != 0) {
      iVar6 = *(int *)(iVar3 + 8);
    }
    iVar6 = *(int *)(iVar6 + 8);
    break;
  case 2:
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
  case 10:
  case 0xc:
  case 0xd:
  case 0xe:
    iVar3 = *(int *)(iVar6 + 0xa4);
    iVar6 = 0;
    if (iVar3 != 0) {
      iVar6 = *(int *)(iVar3 + 8);
    }
    iVar6 = *(int *)(iVar6 + iVar1 * 0x14 + 8);
    break;
  default:
    return 0;
  }
  if ((int)param_4 < iVar6) {
    return param_4;
  }
  uVar4 = FUN_4a064d0c(uVar2,iVar1,param_4 - iVar6,0,unaff_r4);
  iVar3 = FUN_4a064e04(uVar2,uVar4);
  uVar5 = FUN_4a064d0c(uVar2,iVar1,param_4 - iVar6,1);
  return uVar5 | iVar3 << 8;
}



// Address: 4a1414dc

int FUN_4a1414dc(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0xf0) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0xf0) + 8);
  }
  iVar1 = *(int *)(iVar1 + param_2 * 0x14 + 0xc);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
  }
  return (int)*(short *)(iVar2 + param_3 * 2);
}



// Address: 4a141510

int FUN_4a141510(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 300) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 300) + 8);
  }
  iVar1 = *(int *)(iVar1 + param_2 * 0x14 + 0xc);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
  }
  return (int)*(short *)(iVar2 + param_3 * 2);
}



// Address: 4a141544

int FUN_4a141544(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x17c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x17c) + 8);
  }
  return (int)*(short *)(iVar1 + param_2 * 2);
}



// Address: 4a14155c

bool FUN_4a14155c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_1c [20];
  
  uVar1 = FUN_4a16b5a0(auStack_1c,param_1 + 0x7e0);
  iVar2 = FUN_4a16fe9c(0xffffffff,uVar1,0);
  FUN_4a16b6c0(auStack_1c);
  return iVar2 != -1;
}



// Address: 4a1415a0

undefined4 FUN_4a1415a0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  switch(param_3) {
  default:
    return 0xffffffff;
  case 1:
    if (param_2 == 0) {
      uVar1 = 8;
    }
    else {
      uVar1 = 1;
    }
    return uVar1;
  case 2:
    if (param_2 == 0) {
      uVar1 = 9;
    }
    else {
      uVar1 = 2;
    }
    return uVar1;
  case 4:
    return 0;
  case 5:
    if (param_2 == 0) {
      uVar1 = 0xc;
    }
    else {
      uVar1 = 5;
    }
    break;
  case 7:
    if (param_2 == 0) {
      uVar1 = 0xd;
    }
    else {
      uVar1 = 6;
    }
    return uVar1;
  case 9:
    if (param_2 == 0) {
      uVar1 = 0xe;
    }
    else {
      uVar1 = 7;
    }
    return uVar1;
  case 0xb:
    if (param_2 == 0) {
      uVar1 = 10;
    }
    else {
      uVar1 = 3;
    }
    return uVar1;
  case 0xe:
    if (param_2 == 0) {
      uVar1 = 0xb;
    }
    else {
      uVar1 = 4;
    }
    return uVar1;
  }
  return uVar1;
}



// Address: 4a141668

undefined4 FUN_4a141668(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_4a141abc();
  switch(param_3) {
  default:
    return 0xffffffff;
  case 1:
    if (iVar2 == 0) {
      uVar1 = 8;
    }
    else {
      uVar1 = 1;
    }
    return uVar1;
  case 2:
    if (iVar2 == 0) {
      uVar1 = 9;
    }
    else {
      uVar1 = 2;
    }
    return uVar1;
  case 4:
    return 0;
  case 5:
    if (iVar2 == 0) {
      uVar1 = 0xc;
    }
    else {
      uVar1 = 5;
    }
    break;
  case 7:
    if (iVar2 == 0) {
      uVar1 = 0xd;
    }
    else {
      uVar1 = 6;
    }
    return uVar1;
  case 9:
    if (iVar2 == 0) {
      uVar1 = 0xe;
    }
    else {
      uVar1 = 7;
    }
    return uVar1;
  case 0xb:
    if (iVar2 == 0) {
      uVar1 = 10;
    }
    else {
      uVar1 = 3;
    }
    return uVar1;
  case 0xe:
    if (iVar2 == 0) {
      uVar1 = 0xb;
    }
    else {
      uVar1 = 4;
    }
    return uVar1;
  }
  return uVar1;
}



// Address: 4a14168c

uint FUN_4a14168c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_24 [12];
  int local_18;
  
  FUN_4a16c074(auStack_24,param_1 + 0x8d8);
  iVar3 = 0;
  if (param_2 == 0x10) {
    if (local_18 != 0) {
      iVar3 = *(int *)(local_18 + 8);
    }
    uVar2 = (*(ushort *)(iVar3 + 8) & 0x4000) >> 0xe;
    goto LAB_4a1418a0;
  }
  if (param_2 < 0x11) {
    if (param_2 == 4) {
      if (local_18 != 0) {
        iVar3 = *(int *)(local_18 + 8);
      }
      uVar2 = (*(ushort *)(iVar3 + 4) & 0x2000) >> 0xd;
      goto LAB_4a1418a0;
    }
    if (param_2 < 5) {
      if (param_2 == 0) {
        if (local_18 != 0) {
          iVar3 = *(int *)(local_18 + 8);
        }
        uVar2 = (*(ushort *)(iVar3 + 2) & 0x1000) >> 0xc;
        goto LAB_4a1418a0;
      }
      if (param_2 == 1) {
        if (local_18 != 0) {
          iVar3 = *(int *)(local_18 + 8);
        }
        uVar2 = (*(ushort *)(iVar3 + 2) & 0x800) >> 0xb;
        goto LAB_4a1418a0;
      }
    }
    else {
      if (param_2 == 8) {
        if (local_18 != 0) {
          iVar3 = *(int *)(local_18 + 8);
        }
        uVar2 = (*(ushort *)(iVar3 + 0x1a) & 0x1000) >> 0xc;
        goto LAB_4a1418a0;
      }
      if (param_2 == 0xf) {
        if (local_18 != 0) {
          iVar3 = *(int *)(local_18 + 8);
        }
        uVar2 = (*(ushort *)(iVar3 + 8) & 0x1000) >> 0xc;
        goto LAB_4a1418a0;
      }
    }
  }
  else {
    if (param_2 == 0x13) {
      if (local_18 != 0) {
        iVar3 = *(int *)(local_18 + 8);
      }
      uVar2 = (*(ushort *)(iVar3 + 4) & 0x4000) >> 0xe;
      goto LAB_4a1418a0;
    }
    if (param_2 < 0x14) {
      if (param_2 == 0x11) {
        if (local_18 != 0) {
          iVar3 = *(int *)(local_18 + 8);
        }
        uVar2 = (*(ushort *)(iVar3 + 8) & 0x800) >> 0xb;
        goto LAB_4a1418a0;
      }
      if (param_2 == 0x12) {
        if (local_18 != 0) {
          iVar3 = *(int *)(local_18 + 8);
        }
        uVar2 = (*(ushort *)(iVar3 + 4) & 0x1000) >> 0xc;
        goto LAB_4a1418a0;
      }
    }
    else {
      if (param_2 == 0x14) {
        if (local_18 != 0) {
          iVar3 = *(int *)(local_18 + 8);
        }
        uVar2 = (*(ushort *)(iVar3 + 4) & 0x800) >> 0xb;
        goto LAB_4a1418a0;
      }
      if (param_2 == 0x1c) {
        if (local_18 != 0) {
          iVar3 = *(int *)(local_18 + 8);
        }
        uVar2 = (*(ushort *)(iVar3 + 0xe) & 0x1000) >> 0xc;
        goto LAB_4a1418a0;
      }
    }
  }
  if (*(int *)(param_1 + 0x758) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x758) + 8);
  }
  switchD_4a11cc8c::default(*(short *)(iVar1 + param_2 * 2) != -1,s_invalid_quest_items_4a1418b8);
  if (*(int *)(param_1 + 0x758) != 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x758) + 8);
  }
  iVar3 = FUN_4a143130(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x520),
                       (int)*(short *)(iVar3 + param_2 * 2));
  if (*(short *)(iVar3 + 0x1a) < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
LAB_4a1418a0:
  FUN_4a16c1a0(auStack_24);
  return uVar2;
}



// Address: 4a1418cc

int FUN_4a1418cc(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x62c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x62c) + 8);
  }
  return (int)*(short *)(iVar1 + param_2 * 2);
}



// Address: 4a1418e4

undefined4 * FUN_4a1418e4(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)(param_2 + 0x154) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_2 + 0x154) + 8);
  }
  iVar2 = *(int *)(iVar2 + param_3 * 0x14 + 0xc);
  if (iVar2 != 0) {
    iVar4 = *(int *)(iVar2 + 8);
  }
  iVar4 = iVar4 + param_4 * 0x14;
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a16b5f0;
  puVar1[2] = *(undefined4 *)(iVar4 + 8);
  piVar3 = *(int **)(iVar4 + 0xc);
  puVar1[3] = piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
  }
  *puVar1 = PTR_PTR_4a16b5f4;
  return puVar1;
}



// Address: 4a141918

int FUN_4a141918(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_3 != 0) {
    if (param_3 == 1) {
      iVar1 = *(int *)(param_1 + 0x6a4);
      goto joined_r0x4a141970;
    }
    if (param_3 == 2) {
      iVar1 = *(int *)(param_1 + 0x6cc);
      goto joined_r0x4a141970;
    }
    if (param_3 == 3) {
      iVar1 = *(int *)(param_1 + 0x6f4);
      goto joined_r0x4a141970;
    }
    switchD_4a11cc8c::default(0,s_invalid_outcome_4a1419a4);
  }
  iVar1 = *(int *)(param_1 + 0x67c);
joined_r0x4a141970:
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
  }
  return (int)*(short *)(iVar2 + param_2 * 2);
}



// Address: 4a1419b4

int FUN_4a1419b4(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_20 [20];
  
  if (*(int *)(param_1 + 0x4ac) == 0) {
    pcVar2 = (char *)0x0;
  }
  else {
    pcVar2 = *(char **)(*(int *)(param_1 + 0x4ac) + 8);
  }
  cVar1 = *pcVar2;
  if (param_2 != 0) {
    pcVar2 = *(char **)(param_2 + 0x28);
  }
  if (param_2 != 0 && pcVar2 != (char *)0x84) {
    uVar4 = FUN_4a16c074(auStack_20,param_1 + 0x80);
    iVar5 = FUN_4a16ff5c((int)(short)*(undefined4 *)(param_2 + 0x28),uVar4,0);
    FUN_4a16c1a0(auStack_20);
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x78c);
    iVar3 = (int)((longlong)(int)uVar6 * (longlong)DAT_4a141a7c + ((ulonglong)uVar6 << 0x20) >> 0x20
                 );
    iVar5 = -1;
    if (((uVar6 + ((iVar3 >> 10) - (iVar3 >> 0x1f)) * -0x5a0) - 0x1c2 < 0x295) &&
       ((int)*(char *)(param_1 + 2000) != (int)cVar1)) {
      iVar5 = (int)*(char *)(param_1 + 2000);
    }
  }
  return iVar5;
}



// Address: 4a141a80

int FUN_4a141a80(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x88c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x88c) + 8);
  }
  return (int)*(short *)(iVar1 + param_2 * 2);
}



// Address: 4a141a98

int FUN_4a141a98(int param_1)

{
  return (int)*(char *)(param_1 + 0x7d9);
}



// Address: 4a141aa4

undefined4 FUN_4a141aa4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x790);
}



// Address: 4a141aac

bool FUN_4a141aac(int param_1)

{
  return *(int *)(param_1 + 0x984) != 0;
}



// Address: 4a141abc

int FUN_4a141abc(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  
  puVar2 = (uint *)0x0;
  if (*(int *)(param_1 + 0x45c) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x45c) + 8);
  }
  iVar1 = *(int *)(iVar1 + param_2 * 0x14 + 0xc);
  if (iVar1 != 0) {
    puVar2 = *(uint **)(iVar1 + 8);
  }
  iVar1 = 1 - *puVar2;
  if (1 < *puVar2) {
    iVar1 = 0;
  }
  return iVar1;
}



// Address: 4a141af8

ulonglong FUN_4a141af8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  ulonglong uVar9;
  
  uVar1 = FUN_4a17211c(param_1[2],param_1[2]);
  uVar2 = FUN_4a17211c(param_1[1],param_1[1]);
  uVar3 = FUN_4a17211c(*param_1,*param_1);
  uVar2 = FUN_4a171a94(uVar3,uVar2);
  FUN_4a171a94(uVar2,uVar1);
  FUN_4a171a2c();
  uVar9 = FUN_4a002ae4();
  uVar5 = (uint)(uVar9 >> 0x20);
  uVar4 = (uint)uVar9;
  uVar7 = uVar5 & 0x7fffffff ^ uVar5 << 1;
  if ((uVar7 & 0x7f000000) != 0 || (uVar7 & 0xe00000) != 0) {
    iVar6 = (uVar5 & 0x7fffffff) + 0xc8000000;
    if (iVar6 < 0x100000) {
      return CONCAT44(iVar6,uVar5) & 0xffffffff80000000;
    }
    bVar8 = (bool)((byte)(uVar9 >> 0x18) >> 4 & 1);
    if ((bVar8 && (uVar9 & 0xfffffff) != 0) ||
       ((bVar8 && (-1 < (int)((uVar4 & 0x20000000) * 4 + -0x40000000))))) {
      bVar8 = 0xdfffffff < uVar4;
      uVar4 = uVar4 + 0x20000000;
      iVar6 = iVar6 + (uint)bVar8;
    }
    if (0xfefffff < iVar6) {
      return CONCAT44(iVar6,uVar5) & 0xffffffff80000000 | 0x7f800000;
    }
    return CONCAT44(iVar6,uVar5 & 0x80000000 | iVar6 << 3 | uVar4 >> 0x1d);
  }
  if ((uVar9 & 0x10000000000000) == 0) {
    return CONCAT44(uVar5,uVar5) & 0x7fffffff80000000;
  }
  if (uVar4 == 0 && (uVar9 & 0xfffff00000000) == 0) {
    return CONCAT44(uVar5,uVar5) & 0xffffffffff8fffff;
  }
  uVar1 = 0;
  uVar4 = DAT_4a170840 & 0xf;
  if (uVar4 != 9) {
    if (uVar4 == 10) {
      if ((DAT_4a170840 & 0x40) != 0) {
        uVar1 = 0x80000000;
      }
      return CONCAT44(DAT_4a170a38,uVar1);
    }
    if (uVar4 != 8) {
      return 0;
    }
    if ((DAT_4a170840 & 0x40) != 0) {
      return 0;
    }
    if ((DAT_4a170840 & 0x10) == 0) {
      return CONCAT44(DAT_4a170a38,DAT_4a170a38 & 0xff000000 | (DAT_4a170a38 & 0xffffff) << 3);
    }
    return 0;
  }
  if ((DAT_4a170840 & 0x100000) == 0) {
    return 0;
  }
  if ((DAT_4a170840 & 0x70000) == 0) {
    return CONCAT44(DAT_4a170a38,0x30000000);
  }
  return 8;
}



// Address: 4a141b4c

uint FUN_4a141b4c(undefined4 param_1,byte *param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = (uint)*param_2;
  if (1 < param_3) {
    uVar1 = (uint)CONCAT11(param_2[1],*param_2);
  }
  if (2 < param_3) {
    uVar1 = uVar1 | (uint)param_2[2] << 0x10;
  }
  if (3 < param_3) {
    uVar1 = uVar1 | (uint)param_2[3] << 0x18;
  }
  return uVar1;
}



// Address: 4a141b78

void FUN_4a141b78(undefined1 param_1,undefined4 param_2,undefined1 *param_3,int param_4)

{
  if (1 < param_4) {
    param_1 = (undefined1)((uint)param_2 >> 8);
  }
  *param_3 = (char)param_2;
  if (1 < param_4) {
    param_3[1] = param_1;
  }
  if (2 < param_4) {
    param_3[2] = (char)((uint)param_2 >> 0x10);
  }
  if (3 < param_4) {
    param_3[3] = (char)((uint)param_2 >> 0x18);
  }
  return;
}



// Address: 4a141bb0

undefined4
FUN_4a141bb0(int param_1,int param_2,uint param_3,undefined4 param_4,uint param_5,int param_6)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined *puVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint uVar7;
  int iVar8;
  ushort *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  ushort local_c0 [2];
  ushort local_bc [2];
  ushort local_b8 [2];
  ushort local_b4 [2];
  uint local_b0;
  undefined2 local_ac;
  undefined2 local_aa;
  undefined2 local_a8;
  int local_a4;
  uint local_a0;
  uint uStack_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  int local_8c;
  int local_88;
  uint local_84;
  int local_80;
  ushort local_7c;
  undefined2 local_7a;
  undefined2 local_78;
  ushort local_74;
  undefined2 local_72;
  undefined2 local_70;
  int local_6c;
  int local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint uStack_2c;
  undefined4 uStack_28;
  
  iVar8 = *(int *)(param_1 + 8);
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x1c) == 0)) {
    uVar5 = 0;
    if (iVar8 != 0) {
      uVar5 = iVar8 - 0x20;
    }
    if ((iVar8 != 0 && 3 < uVar5) &&
       (((iVar8 != 0x27 && iVar8 != 0x34) && iVar8 != 0x2b) && iVar8 != 0x35)) {
      local_34 = param_1;
      local_30 = param_2;
      uStack_2c = param_3;
      uStack_28 = param_4;
      if (*(int *)(param_2 + 8) == 0) {
        FUN_4a0ecab0(param_2,iVar8,*(undefined2 *)(param_1 + 0x12));
      }
      puVar4 = PTR_DAT_4a142120;
      local_54 = (uint)(*(ushort *)(local_34 + 0x10) >> (param_3 & 0xff));
      if (local_54 == 0) {
        local_54 = 1;
      }
      local_50 = (uint)(*(ushort *)(local_34 + 0x12) >> (param_3 & 0xff));
      if (local_50 == 0) {
        local_50 = 1;
      }
      local_58 = (*(ushort *)(PTR_DAT_4a142120 + *(int *)(local_30 + 8) * 6) & 0x380) >> 7;
      FUN_4a0ebe9c(local_30);
      *(short *)(local_30 + 0x14) = (short)local_54 * (short)local_58;
      *(short *)(local_30 + 0x12) = (short)local_50;
      uVar5 = thunk_FUN_4a14283c(local_30);
      if (uVar5 <= param_5) {
        FUN_4a0e4d6c(local_30,param_4,param_5,0,0);
        uVar5 = (uint)*(ushort *)(local_34 + 0x10);
        local_5c = 1 << (param_3 & 0xff);
        if (local_5c < uVar5) {
          uVar5 = local_5c;
        }
        if (*(ushort *)(local_34 + 0x12) <= local_5c) {
          local_5c = (uint)*(ushort *)(local_34 + 0x12);
        }
        puVar9 = (ushort *)(puVar4 + *(int *)(local_34 + 8) * 6);
        local_74 = *puVar9;
        local_60 = (local_74 & 0x380) >> 7;
        local_64 = (uint)*(ushort *)(local_34 + 0x14);
        local_68 = local_60 * uVar5;
        local_6c = local_64 * local_5c;
        uVar1 = puVar9[1];
        uVar2 = puVar9[2];
        puVar9 = (ushort *)(puVar4 + *(int *)(local_30 + 8) * 6);
        local_7c = *puVar9;
        local_7a = puVar9[1];
        local_78 = puVar9[2];
        local_80 = *(int *)(local_30 + 0x18);
        local_84 = 0;
        local_88 = *(int *)(local_34 + 0x18);
        if (local_50 != 0) {
          local_38 = param_6 + -1;
          local_70._1_1_ = (byte)(uVar2 >> 8);
          local_3c = (uint)local_70._1_1_;
          local_70._0_1_ = (byte)uVar2;
          local_40 = (uint)(byte)local_70;
          local_72._1_1_ = (byte)(uVar1 >> 8);
          local_44 = (uint)local_72._1_1_;
          local_72._0_1_ = (byte)uVar1;
          local_48 = (uint)(byte)local_72;
          local_4c = uVar5 * local_5c;
          local_72 = uVar1;
          local_70 = uVar2;
          do {
            local_8c = local_88;
            local_90 = 0;
            if (local_54 != 0) {
              do {
                uVar16 = 0;
                local_a4 = local_8c;
                uVar17 = 0;
                puVar6 = (undefined2 *)(PTR_DAT_4a142120 + *(int *)(local_34 + 8) * 6);
                local_ac = *puVar6;
                uVar15 = 0;
                iVar18 = 0;
                local_aa = puVar6[1];
                iVar8 = 0;
                local_a8 = puVar6[2];
                local_b0 = 0;
                if (local_5c != 0) {
                  do {
                    uVar13 = 0;
                    iVar14 = local_a4;
                    if (uVar5 != 0) {
                      do {
                        FUN_4a142a20(local_34,iVar14,local_b4,local_b8,local_bc,local_c0,&local_ac);
                        if (local_38 != 0 || local_c0[0] != 0) {
                          iVar8 = iVar8 + 1;
                          uVar16 = uVar16 + local_b4[0];
                          uVar17 = uVar17 + local_b8[0];
                          uVar15 = uVar15 + local_bc[0];
                        }
                        iVar18 = iVar18 + (uint)local_c0[0];
                        uVar13 = uVar13 + 1;
                        iVar14 = iVar14 + local_60;
                      } while (uVar13 < uVar5);
                    }
                    local_a4 = local_a4 + local_64;
                    local_b0 = local_b0 + 1;
                  } while (local_b0 < local_5c);
                  if (iVar8 != 0) {
                    uVar16 = FUN_4a0066d8(uVar16,iVar8);
                    uVar17 = FUN_4a0066d8(uVar17,iVar8);
                    uVar15 = FUN_4a0066d8(uVar15,iVar8);
                  }
                }
                uVar13 = FUN_4a0066d8(iVar18,local_4c);
                local_94 = uVar16 & 0xffff;
                uVar1 = local_7c & 0x40;
                uVar2 = local_7c & 0x40;
                uVar3 = local_7c & 0x40;
                local_a0 = uVar13 & 0xffff;
                uStack_9c = uVar15 & 0xffff;
                local_98 = uVar17 & 0xffff;
                uVar16 = FUN_4a142958(local_30,local_48,(byte)local_7a);
                uVar16 = uVar16 & 0xffff;
                uVar7 = FUN_4a142958(local_30,local_44,local_7a._1_1_,uVar17 & 0xffff);
                uVar15 = FUN_4a142958(local_30,local_40,(byte)local_78,uVar15 & 0xffff);
                uVar17 = FUN_4a142958(local_30,local_3c,local_78._1_1_,uVar13 & 0xffff);
                uVar17 = uVar17 & 0xffff;
                if ((local_3c == 0) && (uVar17 != 0)) {
                  uVar17 = 0xffff >> (0x10 - local_78._1_1_ & 0xff);
                }
                uVar13 = (uint)(byte)local_7a;
                uVar11 = (uint)local_78._1_1_;
                uVar10 = uVar13 + local_7a._1_1_;
                uVar12 = (byte)local_78 + uVar11;
                if (uVar1 == 0) {
                  uVar13 = uVar12 & 0xff;
                  uVar16 = uVar16 << (local_7a._1_1_ + uVar12 & 0xff);
                  uVar12 = uVar11;
                }
                else {
                  uVar12 = uVar10 & 0xff;
                }
                uVar16 = (uVar15 & 0xffff) << uVar12 | (uVar7 & 0xffff) << uVar13 | uVar16;
                if (uVar11 != 0) {
                  if (uVar2 != 0) {
                    uVar17 = uVar17 << ((byte)local_78 + uVar10 & 0xff);
                  }
                  uVar16 = uVar16 | uVar17;
                }
                if ((local_7c & 0x400) != 0) {
                  if (uVar3 == 0) {
                    uVar16 = uVar16 >> 8 | uVar16 << 0x18;
                  }
                  else {
                    uVar16 = uVar16 >> 0x18 | uVar16 << 8;
                  }
                }
                FUN_4a141b78(local_30,uVar16,local_80,(local_7c & 0x380) >> 7);
                local_80 = local_80 + local_58;
                local_8c = local_8c + local_68;
                local_90 = local_90 + 1;
              } while (local_90 < local_54);
            }
            local_88 = local_88 + local_6c;
            local_84 = local_84 + 1;
          } while (local_84 < local_50);
        }
        return 1;
      }
    }
  }
  return 0;
}



// Address: 4a142124

uint FUN_4a142124(int param_1)

{
  uint uVar1;
  
  uVar1 = thunk_FUN_4a0e5380(param_1 + 8);
  return uVar1 >> 3;
}



// Address: 4a142134

void FUN_4a142134(undefined4 param_1,int param_2)

{
  thunk_FUN_4a000f84(param_1,PTR_DAT_4a14214c + *(int *)(param_2 + 8) * 6,6);
  return;
}



// Address: 4a142154

undefined4 FUN_4a142154(int param_1)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ushort *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  char local_130 [256];
  uint local_30;
  uint local_2c;
  undefined1 auStack_28 [4];
  
  puVar4 = PTR_DAT_4a142718;
  if (*(int *)(param_1 + 8) != 0x26) {
    puVar14 = (ushort *)(PTR_DAT_4a142718 + *(int *)(param_1 + 8) * 6);
    uVar2 = *puVar14;
    uVar15 = (uVar2 & 0x380) >> 7;
    if ((uVar2 & 0x1f) == 0) {
      uVar5 = FUN_4a142958(param_1,PTR_DAT_4a142718[0x50],(char)puVar14[1],0xff);
      uVar5 = uVar5 & 0xffff;
      uVar6 = FUN_4a142958(param_1,puVar4[0x51],*(undefined1 *)((int)puVar14 + 3),0);
      uVar7 = FUN_4a142958(param_1,puVar4[0x52],(char)puVar14[2],0xff);
      uVar8 = FUN_4a142958(param_1,puVar4[0x53],*(undefined1 *)((int)puVar14 + 5),0xff);
      uVar8 = uVar8 & 0xffff;
      if ((puVar4[0x53] == '\0') && (uVar8 != 0)) {
        uVar8 = 0xffff >> (0x10 - *(byte *)((int)puVar14 + 5) & 0xff);
      }
      uVar16 = (uint)(byte)puVar14[1];
      uVar12 = (uint)*(byte *)((int)puVar14 + 5);
      uVar11 = uVar16 + *(byte *)((int)puVar14 + 3);
      uVar13 = (byte)puVar14[2] + uVar12;
      if ((uVar2 & 0x40) == 0) {
        uVar16 = uVar13 & 0xff;
        uVar5 = uVar5 << (*(byte *)((int)puVar14 + 3) + uVar13 & 0xff);
        uVar13 = uVar12;
      }
      else {
        uVar13 = uVar11 & 0xff;
      }
      uVar5 = (uVar7 & 0xffff) << uVar13 | (uVar6 & 0xffff) << uVar16 | uVar5;
      if (uVar12 != 0) {
        if ((uVar2 & 0x40) != 0) {
          uVar8 = uVar8 << ((byte)puVar14[2] + uVar11 & 0xff);
        }
        uVar5 = uVar5 | uVar8;
      }
      if ((*puVar14 & 0x400) != 0) {
        if ((uVar2 & 0x40) == 0) {
          uVar5 = uVar5 >> 8 | uVar5 << 0x18;
        }
        else {
          uVar5 = uVar5 >> 0x18 | uVar5 << 8;
        }
      }
      FUN_4a141b78(param_1,uVar5,auStack_28,(*puVar14 & 0x380) >> 7);
      uVar5 = FUN_4a14278c(param_1);
      uVar5 = uVar5 >> 3;
      iVar9 = 0;
      if (*(short *)(param_1 + 0x12) != 0) {
        do {
          iVar17 = 0;
          uVar8 = 0;
          if (*(ushort *)(param_1 + 0x10) != 0) {
            uVar8 = *(ushort *)(param_1 + 0x10) & 1;
          }
          if (uVar8 != 0) {
            do {
              iVar10 = thunk_FUN_4a000e60(iVar9 * (uint)*(ushort *)(param_1 + 0x14) +
                                          iVar17 * uVar15 + *(int *)(param_1 + 0x18),auStack_28,
                                          uVar5);
              if (iVar10 == 0) {
                return 1;
              }
              iVar17 = iVar17 + 1;
            } while (iVar17 < (int)uVar8);
          }
          if (uVar8 < *(ushort *)(param_1 + 0x10)) {
            do {
              iVar17 = thunk_FUN_4a000e60(iVar9 * (uint)*(ushort *)(param_1 + 0x14) +
                                          uVar8 * uVar15 + *(int *)(param_1 + 0x18),auStack_28,uVar5
                                         );
              if (iVar17 == 0) {
                return 1;
              }
              iVar17 = thunk_FUN_4a000e60(iVar9 * (uint)*(ushort *)(param_1 + 0x14) +
                                          (uVar8 + 1) * uVar15 + *(int *)(param_1 + 0x18),auStack_28
                                          ,uVar5);
              if (iVar17 == 0) {
                return 1;
              }
              uVar8 = uVar8 + 2;
            } while ((int)uVar8 < (int)(uint)*(ushort *)(param_1 + 0x10));
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)(uint)*(ushort *)(param_1 + 0x12));
      }
    }
    else {
      local_2c = 0;
      uVar2 = *puVar14;
      uVar5 = FUN_4a142958(param_1,PTR_DAT_4a142718[0x50],(char)puVar14[1],0);
      uVar5 = uVar5 & 0xffff;
      uVar6 = FUN_4a142958(param_1,puVar4[0x51],*(undefined1 *)((int)puVar14 + 3),0);
      uVar7 = FUN_4a142958(param_1,puVar4[0x52],(char)puVar14[2],0);
      uVar8 = FUN_4a142958(param_1,puVar4[0x53],*(undefined1 *)((int)puVar14 + 5),0xff);
      uVar8 = uVar8 & 0xffff;
      if ((puVar4[0x53] == '\0') && (uVar8 != 0)) {
        uVar8 = 0xffff >> (0x10 - *(byte *)((int)puVar14 + 5) & 0xff);
      }
      uVar16 = (uint)(byte)puVar14[1];
      uVar12 = (uint)*(byte *)((int)puVar14 + 5);
      uVar11 = uVar16 + *(byte *)((int)puVar14 + 3);
      uVar13 = (byte)puVar14[2] + uVar12;
      if ((uVar2 & 0x40) == 0) {
        uVar16 = uVar13 & 0xff;
        uVar5 = uVar5 << (*(byte *)((int)puVar14 + 3) + uVar13 & 0xff);
        uVar13 = uVar12;
      }
      else {
        uVar13 = uVar11 & 0xff;
      }
      uVar5 = (uVar7 & 0xffff) << uVar13 | (uVar6 & 0xffff) << uVar16 | uVar5;
      if (uVar12 != 0) {
        if ((uVar2 & 0x40) != 0) {
          uVar8 = uVar8 << ((byte)puVar14[2] + uVar11 & 0xff);
        }
        uVar5 = uVar5 | uVar8;
      }
      if ((*puVar14 & 0x400) != 0) {
        if ((uVar2 & 0x40) == 0) {
          uVar5 = uVar5 >> 8 | uVar5 << 0x18;
        }
        else {
          uVar5 = uVar5 >> 0x18 | uVar5 << 8;
        }
      }
      FUN_4a141b78(param_1,uVar5,&local_2c,(*puVar14 & 0x380) >> 7);
      puVar4 = PTR_DAT_4a14271c;
      local_30 = 0;
      uVar2 = *puVar14;
      uVar5 = FUN_4a142958(param_1,PTR_DAT_4a14271c[2],(char)puVar14[1],0xff);
      uVar5 = uVar5 & 0xffff;
      uVar6 = FUN_4a142958(param_1,puVar4[3],*(undefined1 *)((int)puVar14 + 3),0);
      uVar7 = FUN_4a142958(param_1,puVar4[4],(char)puVar14[2],0xff);
      uVar8 = FUN_4a142958(param_1,puVar4[5],*(undefined1 *)((int)puVar14 + 5),0xff);
      uVar8 = uVar8 & 0xffff;
      if ((puVar4[5] == '\0') && (uVar8 != 0)) {
        uVar8 = 0xffff >> (0x10 - *(byte *)((int)puVar14 + 5) & 0xff);
      }
      uVar16 = (uint)(byte)puVar14[1];
      uVar12 = (uint)*(byte *)((int)puVar14 + 5);
      uVar11 = uVar16 + *(byte *)((int)puVar14 + 3);
      uVar13 = (byte)puVar14[2] + uVar12;
      if ((uVar2 & 0x40) == 0) {
        uVar16 = uVar13 & 0xff;
        uVar5 = uVar5 << (*(byte *)((int)puVar14 + 3) + uVar13 & 0xff);
        uVar13 = uVar12;
      }
      else {
        uVar13 = uVar11 & 0xff;
      }
      uVar5 = (uVar7 & 0xffff) << uVar13 | (uVar6 & 0xffff) << uVar16 | uVar5;
      if (uVar12 != 0) {
        if ((uVar2 & 0x40) != 0) {
          uVar8 = uVar8 << ((byte)puVar14[2] + uVar11 & 0xff);
        }
        uVar5 = uVar5 | uVar8;
      }
      if ((*puVar14 & 0x400) != 0) {
        if ((uVar2 & 0x40) == 0) {
          uVar5 = uVar5 >> 8 | uVar5 << 0x18;
        }
        else {
          uVar5 = uVar5 >> 0x18 | uVar5 << 8;
        }
      }
      FUN_4a141b78(param_1,uVar5,&local_30,(*puVar14 & 0x380) >> 7);
      bVar3 = false;
      local_30 = local_30 & ~local_2c;
      uVar5 = 0;
      iVar9 = FUN_4a0e6898(param_1 + 8);
      if (iVar9 != 0) {
        do {
          uVar8 = FUN_4a141b4c(param_1,uVar5 * uVar15 + *(int *)(param_1 + 0x1c),uVar15);
          bVar18 = (uVar8 & ~local_2c) == local_30;
          local_130[uVar5] = bVar18;
          bVar3 = bVar3 || bVar18;
          uVar5 = uVar5 + 1;
          uVar8 = FUN_4a0e6898(param_1 + 8);
        } while (uVar5 < uVar8);
        if (bVar3) {
          if (*(int *)(param_1 + 0x18) == 0) {
            return 1;
          }
          iVar9 = 0;
          iVar17 = 0;
          if (*(short *)(param_1 + 0x12) != 0) {
            do {
              uVar15 = 0;
              if (*(short *)(param_1 + 0x10) != 0) {
                do {
                  bVar1 = *(byte *)(*(int *)(param_1 + 0x18) + iVar9);
                  uVar5 = (uint)bVar1;
                  iVar10 = FUN_4a14278c(param_1);
                  if (iVar10 == 4) {
                    if ((uVar15 & 1) == 0) {
                      uVar5 = uVar5 & 0xf;
                    }
                    else {
                      uVar5 = (uint)(bVar1 >> 4);
                      iVar9 = iVar9 + 1;
                    }
                  }
                  else {
                    iVar9 = iVar9 + 1;
                  }
                  if (local_130[uVar5] != '\0') {
                    return 1;
                  }
                  uVar15 = uVar15 + 1;
                } while ((int)uVar15 < (int)(uint)*(ushort *)(param_1 + 0x10));
              }
              iVar17 = iVar17 + 1;
            } while (iVar17 < (int)(uint)*(ushort *)(param_1 + 0x12));
          }
        }
      }
    }
  }
  return 0;
}



// Address: 4a142724

longlong FUN_4a142724(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x1c) == 0)) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar1 - 0x20;
    }
    if ((uVar1 != 0 && 3 < uVar2) &&
       (((uVar1 != 0x27 && uVar1 != 0x34) && uVar1 != 0x2b) && uVar1 != 0x35)) {
      uVar1 = (uint)*(ushort *)(param_1 + 0x10);
      if ((uVar1 & uVar1 - 1) == 0) {
        uVar1 = *(ushort *)(param_1 + 0x12) - 1;
      }
      return CONCAT44(uVar1,1);
    }
  }
  return (ulonglong)uVar1 << 0x20;
}



// Address: 4a14278c

uint FUN_4a14278c(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = PTR_DAT_4a142830;
  piVar3 = (int *)(param_1 + 8);
  if (((*(ushort *)(PTR_DAT_4a142830 + *(int *)(param_1 + 8) * 6) & 0x800) == 0) &&
     (iVar2 = FUN_4a0e6898(piVar3), iVar2 != 0x40)) {
    if (iVar2 < 0x41) {
      if (iVar2 == 0) {
        return (*(ushort *)(puVar1 + *piVar3 * 6) & 0x380) >> 4;
      }
      if (iVar2 == 0x10) {
        return 4;
      }
      if (iVar2 != 0x20) {
        return 0;
      }
    }
    else if (iVar2 != 0x80 && iVar2 != 0x100) {
      return 0;
    }
  }
  return 8;
}



// Address: 4a14283c

int FUN_4a14283c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_4a0e7234(*(undefined4 *)(param_1 + 8));
  if (iVar1 == 0) {
    iVar1 = (uint)*(ushort *)(param_1 + 0x12) * (uint)*(ushort *)(param_1 + 0x14);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20);
  }
  return iVar1;
}



// Address: 4a142860

bool FUN_4a142860(int param_1)

{
  return *(int *)(param_1 + 8) != 0x26;
}



// Address: 4a142870

int FUN_4a142870(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 8);
  iVar1 = FUN_4a0e6898(piVar2);
  if (iVar1 != 0x20) {
    if (iVar1 < 0x21) {
      if (iVar1 == 0) {
        return 0;
      }
      if (iVar1 != 8 && iVar1 != 0x10) {
        return 0;
      }
    }
    else if ((iVar1 != 0x40 && iVar1 != 0x80) && iVar1 != 0x100) {
      return 0;
    }
  }
  return iVar1 * ((*(ushort *)(PTR_DAT_4a1428e4 + *piVar2 * 6) & 0x380) >> 7);
}



// Address: 4a1428ec

int FUN_4a1428ec(int param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar2 = *(ushort *)(param_1 + 0x10);
  if (*(ushort *)(param_1 + 0x10) <= *(ushort *)(param_1 + 0x12)) {
    uVar2 = *(ushort *)(param_1 + 0x12);
  }
  uVar3 = (uint)uVar2 << 0x10;
  iVar1 = 0x10;
  if (uVar2 >> 8 == 0) {
    iVar1 = 0x18;
    uVar3 = (uint)uVar2 << 0x18;
  }
  if (uVar3 >> 0x1c == 0) {
    iVar1 = iVar1 + 4;
    uVar3 = uVar3 << 4;
  }
  if (uVar3 >> 0x1e == 0) {
    iVar1 = iVar1 + 2;
    uVar3 = uVar3 << 2;
  }
  if (-1 < (int)uVar3) {
    iVar1 = iVar1 + 1;
  }
  return (0x1fU - iVar1 & 0xff) + 1;
}



// Address: 4a142958

uint FUN_4a142958(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  int unaff_r4;
  int iVar1;
  
  if (param_3 < param_2) {
    return ((param_4 | 1 << ((param_2 - param_3) - 1 & 0xff)) & 0xffff) >>
           (param_2 - param_3 & 0xff);
  }
  iVar1 = 1;
  if (param_2 == 0) {
    iVar1 = unaff_r4;
  }
  param_4 = param_4 << (param_3 - param_2 & 0xff);
  if (param_2 != 0) {
    if ((uint)((1 << (param_3 & 0xff)) + -1 >> 1) <= param_4) {
      param_4 = param_4 | (iVar1 << (param_3 - param_2 & 0xff)) - 1U;
    }
    return param_4;
  }
  return param_4;
}



// Address: 4a1429c4

int FUN_4a1429c4(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)(*(ushort *)(param_1 + 0x10) >> (param_2 & 0xff));
  if (uVar2 == 0) {
    uVar2 = 1;
  }
  uVar1 = (uint)(*(ushort *)(param_1 + 0x12) >> (param_2 & 0xff));
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  return uVar2 * uVar1 * ((*(ushort *)(PTR_DAT_4a142a1c + *(int *)(param_1 + 8) * 6) & 0x380) >> 7);
}



// Address: 4a142a20

void FUN_4a142a20(undefined4 param_1,undefined4 param_2,ushort *param_3,undefined2 *param_4,
                 undefined2 *param_5,ushort *param_6,ushort *param_7)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar3 = *param_7;
  uVar5 = FUN_4a141b4c(param_1,param_2,(uVar3 & 0x380) >> 7);
  if ((uVar3 & 0x40) == 0) {
    uVar3 = param_7[2];
    uVar7 = (uint)*(byte *)((int)param_7 + 5);
    bVar1 = *(byte *)((int)param_7 + 3);
    uVar6 = (byte)uVar3 + uVar7;
    uVar8 = bVar1 + uVar6;
    if ((*param_7 & 0x400) != 0) {
      uVar5 = uVar5 >> 0x18 | uVar5 << 8;
    }
    *param_3 = (ushort)((uVar5 & (0xffffU >> (0x10 - (byte)param_7[1] & 0xff)) << (uVar8 & 0xff)) >>
                       (uVar8 & 0xff));
    *param_4 = (short)((uVar5 & (0xffffU >> (0x10 - bVar1 & 0xff)) << (uVar6 & 0xff)) >>
                      (uVar6 & 0xff));
    uVar4 = (ushort)uVar5 & (ushort)(0xffff >> (0x10 - uVar7 & 0xff));
    *param_5 = (short)((uVar5 & (0xffffU >> (0x10 - (byte)uVar3 & 0xff)) << uVar7) >>
                      *(sbyte *)((int)param_7 + 5));
  }
  else {
    uVar7 = (uint)(byte)param_7[1];
    bVar1 = *(byte *)((int)param_7 + 3);
    uVar3 = param_7[2];
    uVar6 = uVar7 + bVar1;
    uVar8 = (byte)uVar3 + uVar6;
    bVar2 = *(byte *)((int)param_7 + 5);
    if ((*param_7 & 0x400) != 0) {
      uVar5 = uVar5 >> 8 | uVar5 << 0x18;
    }
    *param_3 = (ushort)uVar5 & (ushort)(0xffff >> (0x10 - uVar7 & 0xff));
    *param_4 = (short)(((0xffffU >> (0x10 - bVar1 & 0xff)) << uVar7 & uVar5) >> (sbyte)param_7[1]);
    uVar4 = (ushort)((uVar5 & (0xffffU >> (0x10 - bVar2 & 0xff)) << (uVar8 & 0xff)) >>
                    (uVar8 & 0xff));
    *param_5 = (short)((uVar5 & (0xffffU >> (0x10 - (byte)uVar3 & 0xff)) << (uVar6 & 0xff)) >>
                      (uVar6 & 0xff));
  }
  *param_6 = uVar4;
  if (*(char *)((int)param_7 + 5) == '\0') {
    *param_6 = 0xff;
  }
  return;
}



// Address: 4a142b74

uint FUN_4a142b74(int param_1)

{
  return (*(ushort *)(PTR_DAT_4a142b84 + *(int *)(param_1 + 8) * 6) & 0x3f) >> 5;
}



// Address: 4a142b8c

undefined4 FUN_4a142b8c(int param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  bool bVar4;
  undefined *puVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int unaff_r10;
  bool bVar14;
  bool bVar15;
  ushort local_130 [2];
  undefined1 auStack_12c [4];
  char local_128 [256];
  ushort local_28 [2];
  undefined1 auStack_24 [4];
  
  puVar5 = PTR_DAT_4a142ec4;
  iVar7 = *(int *)(param_1 + 8);
  uVar3 = *(ushort *)(PTR_DAT_4a142ec4 + iVar7 * 6);
  if ((uVar3 & 0x20) == 0) {
    return 0;
  }
  uVar8 = (uVar3 & 0x380) >> 7;
  if ((uVar3 & 0x800) == 0) {
    param_2 = param_2 << (*(byte *)((int)(PTR_DAT_4a142ec4 + iVar7 * 6) + 5) - 1 & 0xff);
    iVar7 = (int)((longlong)(int)param_2 * (longlong)(int)DAT_4a142ec8 +
                  ((ulonglong)param_2 << 0x20) >> 0x20);
    uVar11 = (iVar7 >> 7) - (iVar7 >> 0x1f) & 0xff;
    if ((uVar3 & 0x1f) == 0) {
      bVar14 = *(int *)(param_1 + 0x18) != 0;
      sVar6 = 0;
      if (bVar14) {
        sVar6 = *(short *)(param_1 + 0x12);
        unaff_r10 = 0;
      }
      if (!bVar14 || sVar6 == 0) {
        return 0;
      }
      do {
        iVar7 = 0;
        if (*(short *)(param_1 + 0x10) != 0) {
          do {
            FUN_4a142a20(param_1,unaff_r10 * uVar8 * (uint)*(ushort *)(param_1 + 0x10) +
                                 iVar7 * uVar8 + *(int *)(param_1 + 0x18),auStack_24,auStack_24,
                         auStack_24,local_28,puVar5 + *(int *)(param_1 + 8) * 6);
            if (local_28[0] < uVar11) {
              return 1;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)(uint)*(ushort *)(param_1 + 0x10));
        }
        unaff_r10 = unaff_r10 + 1;
      } while (unaff_r10 < (int)(uint)*(ushort *)(param_1 + 0x12));
      return 0;
    }
    uVar13 = 0;
    iVar7 = FUN_4a0e6898(param_1 + 8);
    bVar14 = false;
    if (iVar7 == 0) {
      return 0;
    }
    do {
      bVar4 = bVar14;
      FUN_4a142a20(param_1,uVar13 * uVar8 + *(int *)(param_1 + 0x1c),auStack_12c,auStack_12c,
                   auStack_12c,local_130,puVar5 + *(int *)(param_1 + 8) * 6);
      bVar15 = local_130[0] < uVar11;
      local_128[uVar13] = bVar15;
      uVar13 = uVar13 + 1;
      uVar9 = FUN_4a0e6898(param_1 + 8);
      bVar14 = bVar4 || bVar15;
    } while (uVar13 < uVar9);
    if (!bVar4 && !bVar15) {
      return 0;
    }
    if (*(int *)(param_1 + 0x18) == 0) {
      return 1;
    }
    iVar7 = 0;
    iVar12 = FUN_4a14278c(param_1);
    uVar8 = (uint)*(ushort *)(param_1 + 0x12);
    iVar10 = 0;
    if (iVar12 == 4) {
      if (uVar8 == 0) {
        return 0;
      }
      do {
        uVar11 = 0;
        if (*(ushort *)(param_1 + 0x10) != 0) {
          do {
            bVar2 = *(byte *)(*(int *)(param_1 + 0x18) + iVar7);
            if ((uVar11 & 1) == 0) {
              uVar13 = bVar2 & 0xf;
            }
            else {
              iVar7 = iVar7 + 1;
              uVar13 = (uint)(bVar2 >> 4);
            }
            if (local_128[uVar13] != '\0') {
              return 1;
            }
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < (int)(uint)*(ushort *)(param_1 + 0x10));
        }
        iVar10 = iVar10 + 1;
        if ((int)uVar8 <= iVar10) {
          return 0;
        }
      } while( true );
    }
    if (uVar8 == 0) {
      return 0;
    }
    do {
      iVar12 = 0;
      if (*(ushort *)(param_1 + 0x10) != 0) {
        do {
          pbVar1 = (byte *)(*(int *)(param_1 + 0x18) + iVar7);
          iVar7 = iVar7 + 1;
          if (local_128[*pbVar1] != '\0') {
            return 1;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < (int)(uint)*(ushort *)(param_1 + 0x10));
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar8);
    return 0;
  }
  iVar12 = *(int *)(param_1 + 0x18);
  if (iVar12 == 0) {
    return 0;
  }
  if (iVar7 == 0x2e) {
    param_2 = (uint)((ulonglong)(param_2 * 0x1f) * (ulonglong)DAT_4a142ec8 >> 0x27) << 3;
  }
  else {
    if (iVar7 != 0x2f) goto LAB_4a142c10;
    param_2 = (uint)((ulonglong)(param_2 * 7) * (ulonglong)DAT_4a142ec8 >> 0x27) << 5;
  }
  param_2 = param_2 & 0xff;
LAB_4a142c10:
  iVar7 = (uint)*(ushort *)(param_1 + 0x10) * (uint)*(ushort *)(param_1 + 0x12);
  if (iVar7 < 1) {
    uVar8 = 0;
  }
  else {
    uVar8 = (*(ushort *)(param_1 + 0x10) & *(ushort *)(param_1 + 0x12)) & 1;
  }
  iVar10 = 0;
  if (uVar8 != 0) {
    do {
      if (*(byte *)(iVar12 + iVar10) < param_2) {
        return 1;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar8);
  }
  if (iVar7 - uVar8 != 0 && (int)uVar8 <= iVar7) {
    do {
      uVar11 = (uint)*(byte *)(iVar12 + uVar8);
      bVar14 = uVar11 < param_2;
      if (!bVar14) {
        uVar11 = (uint)*(byte *)(iVar12 + uVar8 + 1);
      }
      if (bVar14 || uVar11 < param_2) {
        return 1;
      }
      uVar8 = uVar8 + 2;
    } while (iVar7 - uVar8 != 0 && (int)uVar8 <= iVar7);
  }
  return 0;
}



// Address: 4a142ecc

undefined4 FUN_4a142ecc(short *param_1)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  
  sVar1 = *param_1;
  bVar2 = sVar1 == 0;
  if (bVar2) {
    sVar1 = param_1[1];
  }
  bVar3 = bVar2 && sVar1 == 0;
  if (bVar2 && sVar1 == 0) {
    bVar3 = param_1[2] == 0;
  }
  if (!bVar3) {
    return 0;
  }
  return 1;
}



// Address: 4a142ef4

undefined4 FUN_4a142ef4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_4a0f0760(*(undefined4 *)(param_1 + 0x318));
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x318);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Address: 4a142f18

bool FUN_4a142f18(int param_1)

{
  return *(char *)(param_1 + 0x31c) == '\x02';
}



// Address: 4a142f2c

int FUN_4a142f2c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
  iVar1 = *(int *)(param_1 + 0x3b0);
  iVar2 = *(int *)(param_1 + 0x3b4);
  param_2 = param_2 + iVar1;
  bVar3 = -1 < param_2;
  bVar4 = param_2 == 0;
  if (bVar3) {
    iVar1 = *(int *)(param_1 + 0x3a8);
  }
  param_3 = param_3 + iVar2;
  if (bVar3) {
    bVar4 = iVar1 == param_2;
  }
  if (!bVar4 && (bVar3 && param_2 <= iVar1)) {
    bVar4 = param_3 == 0;
    if (-1 < param_3) {
      iVar2 = *(int *)(param_1 + 0x3ac);
      bVar4 = iVar2 == param_3;
    }
    if (!bVar4 && (-1 < param_3 && param_3 <= iVar2)) {
      iVar2 = 0;
      if (*(int *)(param_1 + 0x3c4) != 0) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x3c4) + 8);
      }
      return (int)*(short *)(iVar2 + (param_3 * iVar1 + param_2) * 2);
    }
  }
  return 0xf00;
}



// Address: 4a142f80

int FUN_4a142f80(int param_1)

{
  int iVar1;
  
  FUN_4a0642fc();
  iVar1 = FUN_4a134d6c();
  return iVar1 + *(int *)(param_1 + 0x154);
}



// Address: 4a142fa0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_4a142fa0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  code *UNRECOVERED_JUMPTABLE_00;
  
  FUN_4a0642fc();
  iVar1 = FUN_4a134d6c();
  iVar5 = 0;
  uVar6 = iVar1 + *(int *)(param_1 + 0x154);
  if ((int)uVar6 < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = uVar6 & 1;
  }
  iVar1 = 0;
  if (uVar4 != 0) {
    do {
      iVar2 = *(int *)(param_1 + 0x154);
      if (iVar5 < iVar2) {
        iVar2 = iVar1;
        if (*(int *)(param_1 + 0x158) != 0) {
          iVar2 = *(int *)(*(int *)(param_1 + 0x158) + 8);
        }
        iVar2 = iVar2 + iVar5 * 0x1c;
      }
      else {
        uVar3 = FUN_4a0642fc();
        iVar2 = FUN_4a134d74(uVar3,iVar5 - iVar2);
      }
      if (*(int *)(iVar2 + 8) == param_2) {
        return iVar5;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar4);
  }
  while( true ) {
    if ((int)uVar6 <= (int)uVar4) {
      return -1;
    }
    iVar5 = *(int *)(param_1 + 0x154);
    if ((int)uVar4 < iVar5) {
      iVar5 = iVar1;
      if (*(int *)(param_1 + 0x158) != 0) {
        iVar5 = *(int *)(*(int *)(param_1 + 0x158) + 8);
      }
      iVar5 = iVar5 + uVar4 * 0x1c;
    }
    else {
      uVar3 = FUN_4a0642fc();
      iVar5 = FUN_4a134d74(uVar3,uVar4 - iVar5);
    }
    if (*(int *)(iVar5 + 8) == param_2) break;
    iVar2 = *(int *)(param_1 + 0x154);
    iVar5 = uVar4 + 1;
    if (iVar5 < iVar2) {
      iVar2 = iVar1;
      if (*(int *)(param_1 + 0x158) != 0) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x158) + 8);
      }
      iVar2 = iVar2 + iVar5 * 0x1c;
    }
    else {
      uVar3 = FUN_4a0642fc();
      iVar2 = FUN_4a134d74(uVar3,iVar5 - iVar2);
    }
    if (*(int *)(iVar2 + 8) == param_2) {
                    /* WARNING: Could not recover jumptable at 0x4a1430d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*UNRECOVERED_JUMPTABLE_00)(uVar4 + 1);
      return iVar1;
    }
    uVar4 = uVar4 + 2;
  }
                    /* WARNING: Could not recover jumptable at 0x4a143080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*UNRECOVERED_JUMPTABLE_00)(uVar4);
  return iVar1;
}



// Address: 4a1430ec

int FUN_4a1430ec(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x154);
  if (param_2 < iVar2) {
    iVar2 = 0;
    if (*(int *)(param_1 + 0x158) != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x158) + 8);
    }
    iVar2 = iVar2 + param_2 * 0x1c;
  }
  else {
    uVar1 = FUN_4a0642fc();
    iVar2 = FUN_4a134d74(uVar1,param_2 - iVar2);
  }
  return (int)*(short *)(iVar2 + 4);
}



// Address: 4a143130

int FUN_4a143130(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x154);
  if (param_2 < iVar3) {
    iVar3 = 0;
    if (*(int *)(param_1 + 0x158) != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x158) + 8);
    }
    return iVar3 + param_2 * 0x1c;
  }
  iVar2 = FUN_4a0642fc();
  iVar1 = 0;
  if (*(int *)(iVar2 + 0x80) != 0) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x80) + 8);
  }
  return *(int *)(iVar1 + (param_2 - iVar3) * 4);
}



// Address: 4a143170

undefined4 FUN_4a143170(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0x16c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x16c) + 8);
  }
  iVar2 = (int)*(char *)(iVar2 + param_2);
  iVar3 = *(int *)(param_1 + 0x154);
  if (iVar2 < iVar3) {
    if (*(int *)(param_1 + 0x158) != 0) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x158) + 8);
    }
    iVar4 = iVar4 + iVar2 * 0x1c;
  }
  else {
    uVar1 = FUN_4a0642fc();
    iVar4 = FUN_4a134d74(uVar1,iVar2 - iVar3);
  }
  return *(undefined4 *)(iVar4 + 8);
}



// Address: 4a1431cc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_4a1431cc(int param_1,short param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int unaff_r4;
  int iVar4;
  int unaff_r5;
  undefined1 auStack_20 [20];
  
  uVar1 = FUN_4a16c074(auStack_20,param_1 + 0x4c4);
  iVar2 = FUN_4a16ff5c((int)param_2,uVar1,0);
  FUN_4a16c1a0(auStack_20);
  iVar4 = iVar2;
  if (iVar2 == -1) {
    iVar4 = unaff_r4;
    param_1 = unaff_r5;
  }
  iVar3 = 0;
  if (iVar2 != -1) {
    if (*(int *)(param_1 + 0x4e4) != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x4e4) + 8);
    }
    return (int)*(short *)(iVar3 + iVar4 * 2);
  }
  return -1;
}



// Address: 4a143244

void FUN_4a143244(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    uVar1 = param_6 + iVar3;
    iVar2 = (int)uVar1 % 4;
    if (iVar2 == 0) {
      uVar1 = FUN_4a142f2c(param_1,(param_2 - param_4) + 1,param_3);
      uVar1 = (uVar1 & 0x200) >> 9;
    }
    else if (iVar2 == 1) {
      uVar1 = FUN_4a142f2c(param_1,param_2,(param_3 - param_5) + 1);
      uVar1 = (uVar1 & 0x800) >> 0xb;
    }
    else if (iVar2 == 2) {
      uVar1 = FUN_4a142f2c(param_1,param_2,param_3);
      uVar1 = (uVar1 & 0x100) >> 8;
    }
    else if (iVar2 == 3) {
      uVar1 = FUN_4a142f2c(param_1,param_2,param_3);
      uVar1 = (uVar1 & 0x400) >> 10;
    }
    if (*(int *)(param_7 + 0xc) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_7 + 0xc) + 8);
    }
    *(char *)(iVar2 + iVar3) = (char)uVar1;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  return;
}



// Address: 4a143330

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a143330(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar5;
  
  bVar5 = true;
  if (param_6 == 0 || param_6 == 2) {
    iVar3 = 1;
    if (param_6 == 2) {
      iVar3 = -1;
    }
    uVar4 = 0x100;
    if (param_6 == 2) {
      uVar4 = 0x200;
    }
    iVar2 = 0;
    while( true ) {
      if (param_5 <= iVar2) {
        return;
      }
      if (!bVar5) break;
      uVar1 = FUN_4a142f2c(param_1,param_2 - iVar3 * param_4,param_3 - iVar2 * iVar3);
      bVar5 = (uVar1 & uVar4) != 0;
      iVar2 = iVar2 + 1;
    }
    return;
  }
  if (param_6 == 1 || param_6 == 3) {
    iVar3 = 1;
    if (param_6 == 3) {
      iVar3 = -1;
    }
    uVar4 = 0x400;
    if (param_6 == 3) {
      uVar4 = 0x800;
    }
    iVar2 = 0;
    while( true ) {
      if (param_5 <= iVar2) {
                    /* WARNING: Could not recover jumptable at 0x4a143414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      if (!bVar5) break;
      uVar1 = FUN_4a142f2c(param_1,param_2 - iVar2 * iVar3,param_3 - param_4 * iVar3);
      bVar5 = (uVar1 & uVar4) != 0;
      iVar2 = iVar2 + 1;
    }
    return;
  }
  return;
}



// Address: 4a143428

int FUN_4a143428(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int in_r12;
  bool bVar9;
  
  if (param_2 < 0 || param_3 < 0) {
LAB_4a143450:
    uVar1 = 0;
  }
  else {
    iVar5 = param_2;
    if (param_2 < 0x50) {
      iVar5 = param_3;
    }
    if (0x4f < iVar5) goto LAB_4a143450;
    uVar1 = 1;
  }
  switchD_4a11cc8c::default
            (uVar1,s_pathTileGCost__rx__ry_off_pathfi_4a1435e0,param_3,param_4,param_1,param_2,
             param_3);
  iVar6 = 200;
  iVar5 = 0;
  uVar2 = FUN_4a142f2c(param_1,*(int *)(param_1 + 0x514) + param_2,
                       *(int *)(param_1 + 0x518) + param_3);
  iVar7 = param_4 - param_2;
  iVar8 = param_5 - param_3;
  if (iVar7 != 0 && iVar8 != 0) {
    if (((*(uint *)(param_1 + 0x5b0) & 4) == 0) ||
       (uVar3 = FUN_4a142f2c(param_1,*(int *)(param_1 + 0x514) + param_4,
                             *(int *)(param_1 + 0x518) + param_5), ((uVar3 | uVar2) & 0x2000) != 0))
    {
      iVar6 = 300;
    }
    else {
      iVar6 = 500;
    }
  }
  if ((uVar2 & 0x40) == 0) {
    if ((uVar2 & 0x20) == 0) goto LAB_4a143554;
    if ((*(uint *)(param_1 + 0x5b0) & 6) == 0) {
      if ((*(uint *)(param_1 + 0x5b0) & 8) != 0) {
        iVar5 = -0x32;
      }
      goto LAB_4a143554;
    }
  }
  else {
    if ((*(uint *)(param_1 + 0x5b0) & 6) == 0) {
      uVar2 = *(uint *)(param_1 + 0x5b0) & 8;
    }
    else {
      iVar5 = -0x96;
      if ((uVar2 & 0x2000) != 0) goto LAB_4a143554;
      iVar4 = iVar7;
      if (iVar7 < 1) {
        iVar4 = iVar8;
      }
      if (0 < iVar4) {
        if ((uVar2 & 0x80) != 0) goto LAB_4a143554;
        goto LAB_4a14350c;
      }
      if (-1 < iVar7 && -1 < iVar8) goto LAB_4a143554;
      uVar2 = uVar2 & 0x80;
    }
    if (uVar2 == 0) goto LAB_4a143554;
  }
LAB_4a14350c:
  iVar5 = 0x96;
LAB_4a143554:
  bVar9 = (*(uint *)(param_1 + 0x5b0) & 1) != 0;
  if (bVar9) {
    in_r12 = *(int *)(param_1 + 0x510);
  }
  iVar7 = 0;
  if (bVar9 && 0 < in_r12) {
    iVar8 = *(int *)(param_1 + 0x508);
    do {
      if (iVar8 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar8 + 8);
      }
      if (*(int *)(iVar4 + iVar7 * 8) == *(int *)(param_1 + 0x514) + param_2) {
        if (iVar8 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(iVar8 + 8);
        }
        if (*(int *)(iVar4 + (iVar7 * 2 + 1) * 4) == *(int *)(param_1 + 0x518) + param_3) {
          iVar5 = iVar5 + 500;
          break;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < in_r12);
  }
  return iVar6 + iVar5;
}



// Address: 4a143604

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_4a143604(int param_1,short param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int unaff_r4;
  int iVar4;
  int unaff_r5;
  undefined1 auStack_20 [20];
  
  uVar1 = FUN_4a16c074(auStack_20,param_1 + 0x49c);
  iVar2 = FUN_4a16ff5c((int)param_2,uVar1,0);
  FUN_4a16c1a0(auStack_20);
  iVar4 = iVar2;
  if (iVar2 == -1) {
    iVar4 = unaff_r4;
    param_1 = unaff_r5;
  }
  iVar3 = 0;
  if (iVar2 != -1) {
    if (*(int *)(param_1 + 0x4bc) != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x4bc) + 8);
    }
    return (int)*(short *)(iVar3 + iVar4 * 2);
  }
  return -1;
}



// Address: 4a14367c

int FUN_4a14367c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  switch(param_2) {
  case 0x98:
    uVar6 = 0x40;
    break;
  case 0x99:
    uVar6 = 8;
    break;
  default:
    switchD_4a11cc8c::default(0,PTR_s_unknown_shop_item_4a14377c);
  case 0x9e:
    uVar6 = 0x80;
    break;
  case 0x9b:
    uVar6 = 0x10;
    break;
  case 0x9c:
    uVar6 = 0x20;
  }
  FUN_4a0642fc();
  iVar1 = FUN_4a134d6c();
  iVar5 = 0;
  iVar1 = iVar1 + *(int *)(param_1 + 0x154);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(param_1 + 0x154);
      if (iVar4 < iVar2) {
        if (*(int *)(param_1 + 0x158) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(*(int *)(param_1 + 0x158) + 8);
        }
        iVar2 = iVar2 + iVar4 * 0x1c;
      }
      else {
        uVar3 = FUN_4a0642fc();
        iVar2 = FUN_4a134d74(uVar3,iVar4 - iVar2);
      }
      if ((*(uint *)(iVar2 + 0x10) & uVar6) != 0) {
        if (param_3 == iVar5) {
          return iVar4;
        }
        iVar5 = iVar5 + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return iVar5;
}



// Address: 4a1438c0

int FUN_4a1438c0(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar1 = PTR_PTR_4a14392c;
  iVar4 = *(int *)(param_1 + 0x154);
  uVar5 = *(undefined4 *)(PTR_PTR_4a143928 + param_2 * 4);
  iVar3 = 0;
  if (0 < iVar4) {
    do {
      iVar2 = FUN_4a00142c(uVar5,*(undefined4 *)(puVar1 + iVar3 * 4));
      if (iVar2 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  iVar3 = FUN_4a00142c(uVar5,&DAT_4a143930);
  if (iVar3 == 0) {
    iVar3 = 0x22;
  }
  else {
    iVar3 = -1;
  }
  return iVar3;
}



// Address: 4a143934

int FUN_4a143934(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  switch(param_2) {
  case 0x98:
    uVar6 = 0x40;
    break;
  case 0x99:
    uVar6 = 8;
    break;
  default:
    switchD_4a11cc8c::default(0,PTR_s_unknown_shop_item_4a143ac4);
  case 0x9e:
    uVar6 = 0x80;
    break;
  case 0x9b:
    uVar6 = 0x10;
    break;
  case 0x9c:
    uVar6 = 0x20;
  }
  FUN_4a0642fc();
  iVar1 = FUN_4a134d6c();
  iVar5 = 0;
  uVar7 = iVar1 + *(int *)(param_1 + 0x154);
  if ((int)uVar7 < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = uVar7 & 1;
  }
  iVar1 = 0;
  if (uVar4 != 0) {
    do {
      iVar2 = *(int *)(param_1 + 0x154);
      if (iVar5 < iVar2) {
        if (*(int *)(param_1 + 0x158) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(*(int *)(param_1 + 0x158) + 8);
        }
        iVar2 = iVar2 + iVar5 * 0x1c;
      }
      else {
        uVar3 = FUN_4a0642fc();
        iVar2 = FUN_4a134d74(uVar3,iVar5 - iVar2);
      }
      iVar5 = iVar5 + 1;
      if ((*(uint *)(iVar2 + 0x10) & uVar6) != 0) {
        iVar1 = iVar1 + 1;
      }
    } while (iVar5 < (int)uVar4);
  }
  while ((int)uVar4 < (int)uVar7) {
    iVar5 = *(int *)(param_1 + 0x154);
    if ((int)uVar4 < iVar5) {
      if (*(int *)(param_1 + 0x158) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x158) + 8);
      }
      iVar5 = iVar5 + uVar4 * 0x1c;
    }
    else {
      uVar3 = FUN_4a0642fc();
      iVar5 = FUN_4a134d74(uVar3,uVar4 - iVar5);
    }
    iVar2 = *(int *)(param_1 + 0x154);
    if ((*(uint *)(iVar5 + 0x10) & uVar6) != 0) {
      iVar1 = iVar1 + 1;
    }
    iVar5 = uVar4 + 1;
    if (iVar5 < iVar2) {
      if (*(int *)(param_1 + 0x158) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(param_1 + 0x158) + 8);
      }
      iVar2 = iVar2 + iVar5 * 0x1c;
    }
    else {
      uVar3 = FUN_4a0642fc();
      iVar2 = FUN_4a134d74(uVar3,iVar5 - iVar2);
    }
    uVar4 = uVar4 + 2;
    if ((*(uint *)(iVar2 + 0x10) & uVar6) != 0) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}



// Address: 4a143ac8

int FUN_4a143ac8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x50);
  if (param_2 < iVar3) {
    iVar3 = 0;
    if (*(int *)(param_1 + 0x54) != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x54) + 8);
    }
    return iVar3 + param_2 * 100;
  }
  iVar2 = FUN_4a0642fc();
  iVar1 = 0;
  if (*(int *)(iVar2 + 0x68) != 0) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x68) + 8);
  }
  return *(int *)(iVar1 + (param_2 - iVar3) * 4);
}



// Address: 4a143b0c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_4a143b0c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  code *UNRECOVERED_JUMPTABLE_00;
  
  iVar5 = 0;
  if ((int)*(uint *)(param_1 + 0x168) < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x168) & 1;
  }
  iVar6 = 0;
  if (uVar4 != 0) {
    do {
      iVar3 = *(int *)(param_1 + 0x154);
      iVar1 = iVar6;
      if (*(int *)(param_1 + 0x16c) != 0) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x16c) + 8);
      }
      iVar1 = (int)*(char *)(iVar1 + iVar5);
      if (iVar1 < iVar3) {
        iVar3 = iVar6;
        if (*(int *)(param_1 + 0x158) != 0) {
          iVar3 = *(int *)(*(int *)(param_1 + 0x158) + 8);
        }
        iVar3 = iVar3 + iVar1 * 0x1c;
      }
      else {
        uVar2 = FUN_4a0642fc();
        iVar3 = FUN_4a134d74(uVar2,iVar1 - iVar3);
      }
      if (*(int *)(iVar3 + 8) == param_2) {
        return iVar5;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar4);
  }
  if ((int)uVar4 < *(int *)(param_1 + 0x168)) {
    do {
      iVar1 = *(int *)(param_1 + 0x154);
      iVar5 = iVar6;
      if (*(int *)(param_1 + 0x16c) != 0) {
        iVar5 = *(int *)(*(int *)(param_1 + 0x16c) + 8);
      }
      iVar5 = (int)*(char *)(iVar5 + uVar4);
      if (iVar5 < iVar1) {
        iVar1 = iVar6;
        if (*(int *)(param_1 + 0x158) != 0) {
          iVar1 = *(int *)(*(int *)(param_1 + 0x158) + 8);
        }
        iVar1 = iVar1 + iVar5 * 0x1c;
      }
      else {
        uVar2 = FUN_4a0642fc();
        iVar1 = FUN_4a134d74(uVar2,iVar5 - iVar1);
      }
      if (*(int *)(iVar1 + 8) == param_2) {
                    /* WARNING: Could not recover jumptable at 0x4a143c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar5 = (*UNRECOVERED_JUMPTABLE_00)(uVar4);
        return iVar5;
      }
      iVar5 = iVar6;
      if (*(int *)(param_1 + 0x16c) != 0) {
        iVar5 = *(int *)(*(int *)(param_1 + 0x16c) + 8);
      }
      iVar5 = (int)*(char *)(iVar5 + uVar4 + 1);
      iVar1 = *(int *)(param_1 + 0x154);
      if (iVar5 < iVar1) {
        iVar1 = iVar6;
        if (*(int *)(param_1 + 0x158) != 0) {
          iVar1 = *(int *)(*(int *)(param_1 + 0x158) + 8);
        }
        iVar1 = iVar1 + iVar5 * 0x1c;
      }
      else {
        uVar2 = FUN_4a0642fc();
        iVar1 = FUN_4a134d74(uVar2,iVar5 - iVar1);
      }
      if (*(int *)(iVar1 + 8) == param_2) {
                    /* WARNING: Could not recover jumptable at 0x4a143c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar5 = (*UNRECOVERED_JUMPTABLE_00)(uVar4 + 1);
        return iVar5;
      }
      uVar4 = uVar4 + 2;
    } while ((int)uVar4 < *(int *)(param_1 + 0x168));
  }
  return -1;
}



// Address: 4a143c90

undefined4 FUN_4a143c90(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (int)param_3 >> 8;
  param_3 = param_3 & 0xff;
  iVar4 = 0;
  if (((param_2 < 2 || param_2 == 8) && (param_3 = 0, iVar1 == 0x10)) || (iVar1 == 0)) {
    if (*(int *)(param_1 + 0xb8) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0xb8) + 8);
    }
    iVar1 = *(int *)(iVar1 + param_2 * 0x14 + 0xc);
  }
  else {
    uVar2 = FUN_4a0642fc();
    iVar1 = FUN_4a064ee8(uVar2,iVar1);
    if (iVar1 == 0) {
      return 0;
    }
    iVar3 = iVar4;
    if (*(int *)(iVar1 + 0x74) != 0) {
      iVar3 = *(int *)(*(int *)(iVar1 + 0x74) + 8);
    }
    iVar1 = *(int *)(iVar3 + param_2 * 0x14 + 0xc);
  }
  if (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 8);
  }
  return *(undefined4 *)(iVar4 + param_3 * 4);
}



// Address: 4a143db0

uint FUN_4a143db0(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_28 [20];
  
  iVar1 = FUN_4a16b5a0(auStack_28,param_1 + 0x160);
  uVar3 = *(uint *)(iVar1 + 8);
  uVar4 = 0;
  if ((int)uVar3 < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = uVar3 & 1;
  }
  if (uVar5 != 0) {
    do {
      if (*(int *)(iVar1 + 0xc) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 8);
      }
      if (*(char *)(iVar2 + uVar4) == param_2) goto LAB_4a143e74;
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)uVar5);
  }
  if ((int)uVar5 < (int)uVar3) {
    iVar1 = *(int *)(iVar1 + 0xc);
    do {
      if (iVar1 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar1 + 8);
      }
      uVar4 = uVar5;
      if (*(char *)(iVar2 + uVar5) == param_2) goto LAB_4a143e74;
      if (iVar1 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar1 + 8);
      }
      if (*(char *)(iVar2 + uVar5 + 1) == param_2) {
        uVar4 = uVar5 + 1;
        goto LAB_4a143e74;
      }
      uVar5 = uVar5 + 2;
    } while ((int)uVar5 < (int)uVar3);
  }
  uVar4 = 0xffffffff;
LAB_4a143e74:
  FUN_4a16b6c0(auStack_28);
  return uVar4;
}



// Address: 4a143e8c

int FUN_4a143e8c(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if ((int)param_3 >> 8 == 0) {
    if (*(int *)(param_1 + 0xa4) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0xa4) + 8);
    }
    iVar1 = *(int *)(iVar1 + param_2 * 0x14 + 0xc);
  }
  else {
    uVar2 = FUN_4a0642fc();
    iVar1 = FUN_4a064ee8(uVar2,(int)param_3 >> 8);
    if (iVar1 == 0) {
      return -1;
    }
    iVar3 = iVar4;
    if (*(int *)(iVar1 + 0x60) != 0) {
      iVar3 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
    }
    iVar1 = *(int *)(iVar3 + param_2 * 0x14 + 0xc);
  }
  if (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 8);
  }
  return (int)*(short *)(iVar4 + (param_3 & 0xff) * 2);
}



// Address: 4a143f18

void FUN_4a143f18(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (*(int *)(param_2 + 0x144) != 0) {
    iVar2 = *(int *)(*(int *)(param_2 + 0x144) + 8);
  }
  iVar2 = iVar2 + param_3 * 0x14;
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a143f74;
  puVar1[2] = *(undefined4 *)(iVar2 + 8);
  piVar3 = *(int **)(iVar2 + 0xc);
  puVar1[3] = piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
  }
  *puVar1 = PTR_PTR_4a143f78;
  return;
}



// Address: 4a143f7c

bool FUN_4a143f7c(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_4c [20];
  undefined1 auStack_38 [8];
  int local_30;
  int local_2c;
  
  iVar7 = 0;
  FUN_4a16c074(auStack_38,param_1 + 0x348);
  while (iVar5 = local_30, local_30 = iVar5 + -1, -1 < local_30) {
    if (local_2c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(local_2c + 8);
    }
    sVar1 = *(short *)(iVar2 + local_30 * 2);
    iVar2 = (int)sVar1;
    if (iVar2 != -1) {
      iVar3 = *(int *)(param_1 + 0x50);
      if (iVar2 < iVar3) {
        if (*(int *)(param_1 + 0x54) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(param_1 + 0x54) + 8);
        }
        iVar3 = iVar3 + iVar2 * 100;
      }
      else {
        uVar4 = FUN_4a0642fc();
        iVar3 = FUN_4a134d90(uVar4,iVar2 - iVar3);
      }
      if ((*(uint *)(iVar3 + 0x14) & 0x40000) != 0) {
        uVar4 = FUN_4a16c074(auStack_4c,auStack_38);
        iVar5 = FUN_4a16ff5c((int)sVar1,uVar4,iVar5);
        FUN_4a16c1a0(auStack_4c);
        if (iVar5 == -1) {
          iVar7 = iVar7 + 1;
        }
      }
    }
  }
  uVar8 = *(uint *)(param_1 + 0x50);
  iVar5 = 0;
  if ((int)uVar8 < 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = uVar8 & 1;
  }
  iVar2 = 0;
  if (uVar6 != 0) {
    do {
      iVar3 = *(int *)(param_1 + 0x50);
      if (iVar2 < iVar3) {
        if (*(int *)(param_1 + 0x54) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(param_1 + 0x54) + 8);
        }
        iVar3 = iVar3 + iVar2 * 100;
      }
      else {
        uVar4 = FUN_4a0642fc();
        iVar3 = FUN_4a134d90(uVar4,iVar2 - iVar3);
      }
      iVar2 = iVar2 + 1;
      if ((*(uint *)(iVar3 + 0x14) & 0x40000) != 0) {
        iVar5 = iVar5 + 1;
      }
    } while (iVar2 < (int)uVar6);
  }
  while ((int)uVar6 < (int)uVar8) {
    iVar2 = *(int *)(param_1 + 0x50);
    if ((int)uVar6 < iVar2) {
      if (*(int *)(param_1 + 0x54) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(param_1 + 0x54) + 8);
      }
      iVar2 = iVar2 + uVar6 * 100;
    }
    else {
      uVar4 = FUN_4a0642fc();
      iVar2 = FUN_4a134d90(uVar4,uVar6 - iVar2);
    }
    iVar3 = *(int *)(param_1 + 0x50);
    if ((*(uint *)(iVar2 + 0x14) & 0x40000) != 0) {
      iVar5 = iVar5 + 1;
    }
    iVar2 = uVar6 + 1;
    if (iVar2 < iVar3) {
      if (*(int *)(param_1 + 0x54) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x54) + 8);
      }
      iVar3 = iVar3 + iVar2 * 100;
    }
    else {
      uVar4 = FUN_4a0642fc();
      iVar3 = FUN_4a134d90(uVar4,iVar2 - iVar3);
    }
    uVar6 = uVar6 + 2;
    if ((*(uint *)(iVar3 + 0x14) & 0x40000) != 0) {
      iVar5 = iVar5 + 1;
    }
  }
  FUN_4a16c1a0(auStack_38);
  return iVar7 == iVar5;
}



// Address: 4a144194

bool FUN_4a144194(int param_1,short param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_1c [20];
  
  uVar1 = FUN_4a16c074(auStack_1c,param_1 + 0x348);
  iVar2 = FUN_4a16ff5c((int)param_2,uVar1,0);
  FUN_4a16c1a0(auStack_1c);
  return iVar2 != -1;
}



// Address: 4a1441e0

undefined4 FUN_4a1441e0(int param_1,short param_2)

{
  undefined4 uVar1;
  undefined1 auStack_1c [20];
  
  uVar1 = FUN_4a16c074(auStack_1c,param_1 + 0x19c);
  uVar1 = FUN_4a16ff5c((int)param_2,uVar1,0);
  FUN_4a16c1a0(auStack_1c);
  return uVar1;
}



// Address: 4a144350

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_4a144350(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = FUN_4a0642fc();
  if ((int)param_3 >> 8 == 0) {
    return param_3 & 0xff;
  }
  iVar2 = FUN_4a064e14(uVar1);
  if (iVar2 != -1) {
    iVar2 = FUN_4a064e50(uVar1,param_2,iVar2,param_3 & 0xff);
    iVar5 = 0;
    if (param_2 < 2 || param_2 == 8) {
      if (*(int *)(param_1 + 0xcc) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(param_1 + 0xcc) + 8);
      }
      iVar4 = *(int *)(iVar4 + param_2 * 0x14 + 0xc);
      if (iVar4 != 0) {
        iVar5 = *(int *)(iVar4 + 8);
      }
      iVar5 = *(int *)(iVar5 + 8);
    }
    else {
      if (*(int *)(param_1 + 0xa4) != 0) {
        iVar5 = *(int *)(*(int *)(param_1 + 0xa4) + 8);
      }
      iVar5 = *(int *)(iVar5 + param_2 * 0x14 + 8);
    }
    return iVar2 + iVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x4a14438c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)();
  return uVar3;
}



// Address: 4a144404

undefined4 FUN_4a144404(void)

{
  return 0x34;
}



// Address: 4a14440c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_4a14440c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int unaff_r4;
  int unaff_r5;
  int iVar10;
  int unaff_r6;
  undefined4 uVar11;
  int iVar12;
  
  uVar3 = FUN_4a0642fc();
  uVar11 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x51c);
  switch(param_3) {
  case 0:
    return 2;
  case 1:
    iVar5 = FUN_4a141668(uVar11,param_2);
    iVar6 = *(int *)(param_1 + 0xcc);
    if (iVar6 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(iVar6 + 8);
    }
    iVar12 = *(int *)(iVar8 + iVar5 * 0x14 + 8);
    iVar8 = 0;
    if (iVar12 < 1) {
      uVar11 = FUN_4a0642fc();
      iVar6 = FUN_4a064fac(uVar11,iVar5,-iVar12);
    }
    else {
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(iVar6 + 8);
      }
      iVar6 = *(int *)(iVar6 + iVar5 * 0x14 + 0xc);
      if (iVar6 != 0) {
        iVar8 = *(int *)(iVar6 + 8);
      }
      iVar6 = *(int *)(iVar8 + 8);
    }
    if (param_4 == 0) {
      iVar5 = FUN_4a064fac(uVar3,iVar5,0);
      iVar6 = iVar6 + iVar5;
    }
    return iVar6;
  case 2:
  case 5:
  case 7:
  case 9:
  case 0xb:
    uVar4 = FUN_4a141668(uVar11,param_2,param_3);
    if (uVar4 < 2 || uVar4 == 8) {
      iVar5 = 0;
      if (*(int *)(param_1 + 0xcc) != 0) {
        iVar5 = *(int *)(*(int *)(param_1 + 0xcc) + 8);
      }
      iVar6 = *(int *)(iVar5 + uVar4 * 0x14 + 0xc);
      iVar5 = 0;
      if (iVar6 != 0) {
        iVar5 = *(int *)(iVar6 + 8);
      }
      iVar5 = *(int *)(iVar5 + 8);
    }
    else {
      iVar5 = 0;
      if (*(int *)(param_1 + 0xa4) != 0) {
        iVar5 = *(int *)(*(int *)(param_1 + 0xa4) + 8);
      }
      iVar5 = *(int *)(iVar5 + uVar4 * 0x14 + 8);
    }
    if (param_4 == 0) {
      iVar6 = FUN_4a065234(uVar3,uVar4);
      goto LAB_4a1446a8;
    }
    break;
  case 3:
  case 6:
  case 8:
  case 10:
  case 0xc:
    uVar3 = FUN_4a0de104(param_3);
    uVar4 = FUN_4a141668(uVar11,param_2,uVar3);
    iVar5 = FUN_4a141170(uVar11,param_2,uVar3);
    if (iVar5 == -1) {
      return 1;
    }
    iVar8 = *(int *)(param_1 + 0xcc);
    iVar6 = 0;
    if (iVar8 != 0) {
      iVar6 = *(int *)(iVar8 + 8);
    }
    iVar6 = *(int *)(iVar6 + uVar4 * 0x14 + 8);
    if (iVar6 <= iVar5) {
      iVar8 = FUN_4a0642fc();
      iVar5 = iVar5 - iVar6;
      iVar12 = *(int *)(iVar8 + 0x40);
      iVar6 = 0;
      if (uVar4 < 2 || uVar4 == 8) {
        iVar2 = uVar4 * 5;
        if (iVar12 < 1) {
          iVar2 = unaff_r4;
          iVar6 = unaff_r5;
          iVar8 = unaff_r6;
        }
        iVar1 = 0;
        iVar7 = 0;
        if (0 < iVar12) {
          do {
            iVar10 = iVar7 * 4;
            iVar7 = iVar7 + 1;
            iVar9 = *(int *)(*(int *)(*(int *)(iVar8 + 0x3c) + iVar10) + 0x88);
            iVar10 = iVar6;
            if (iVar9 != 0) {
              iVar10 = *(int *)(iVar9 + 8);
            }
            iVar9 = *(int *)(iVar10 + iVar2 * 4 + 0xc);
            iVar10 = iVar6;
            if (iVar9 != 0) {
              iVar10 = *(int *)(iVar9 + 8);
            }
            iVar1 = iVar1 + *(int *)(iVar10 + iVar5 * 0x14 + 8);
          } while (iVar7 < iVar12);
          return iVar1;
        }
        return 0;
      }
      iVar1 = 0;
      iVar2 = 0;
      if (0 < iVar12) {
        do {
          iVar9 = iVar5 - iVar1;
          iVar10 = *(int *)(*(int *)(iVar8 + 0x3c) + iVar2 * 4);
          iVar7 = *(int *)(iVar10 + 0x60);
          if (iVar7 == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(iVar7 + 8);
          }
          iVar7 = *(int *)(iVar7 + uVar4 * 0x14 + 8);
          if (iVar9 < iVar7) {
            iVar5 = *(int *)(iVar10 + 0x88);
            if (iVar5 == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = *(int *)(iVar5 + 8);
            }
            iVar5 = *(int *)(iVar5 + uVar4 * 0x14 + 0xc);
            if (iVar5 != 0) {
              iVar6 = *(int *)(iVar5 + 8);
            }
            return *(int *)(iVar6 + iVar9 * 0x14 + 8);
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + iVar7;
        } while (iVar2 < iVar12);
      }
      return 0;
    }
    iVar6 = 0;
    if (iVar8 != 0) {
      iVar6 = *(int *)(iVar8 + 8);
    }
    iVar8 = *(int *)(iVar6 + uVar4 * 0x14 + 0xc);
    iVar6 = 0;
    if (iVar8 != 0) {
      iVar6 = *(int *)(iVar8 + 8);
    }
    return *(int *)(iVar6 + iVar5 * 0x14 + 8);
  case 4:
    iVar5 = *(int *)(param_1 + 0xcc);
    iVar6 = 0;
    if (iVar5 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(iVar5 + 8);
    }
    iVar8 = *(int *)(iVar8 + 8);
    if (iVar8 < 1) {
      uVar11 = FUN_4a0642fc();
      iVar5 = FUN_4a064fac(uVar11,0,-iVar8);
    }
    else {
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(iVar5 + 8);
      }
      if (*(int *)(iVar5 + 0xc) != 0) {
        iVar6 = *(int *)(*(int *)(iVar5 + 0xc) + 8);
      }
      iVar5 = *(int *)(iVar6 + 8);
    }
    if (param_4 == 0) {
      iVar6 = FUN_4a064fac(uVar3,0);
      goto LAB_4a1446a8;
    }
    break;
  default:
    return 0;
  }
  iVar6 = 0;
LAB_4a1446a8:
  return iVar6 + iVar5;
}



// Address: 4a1446c0

undefined4 FUN_4a1446c0(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_r4;
  
  if (param_3 >> 8 != 0) {
    if (((((param_2 != 4 && param_2 != 3) && param_2 != 2) && param_2 != 5) && param_2 != 6) &&
        param_2 != 7) {
      unaff_r4 = 0;
    }
    if (((((param_2 == 4 || param_2 == 3) || param_2 == 2) || param_2 == 5) || param_2 == 6) ||
        param_2 == 7) {
      unaff_r4 = 1;
    }
    uVar1 = FUN_4a0642fc();
    iVar2 = FUN_4a064ee8(uVar1,param_3 >> 8);
    if (iVar2 != 0) {
      if (unaff_r4 == 0) {
        puVar3 = (undefined4 *)(iVar2 + 0x20);
      }
      else {
        puVar3 = (undefined4 *)(iVar2 + 0x1c);
      }
      return *puVar3;
    }
  }
  return 0;
}



// Address: 4a144728

uint FUN_4a144728(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = FUN_4a0642fc();
  switch(param_2) {
  case 0:
  case 1:
  case 8:
    iVar2 = 0;
    if (*(int *)(param_1 + 0xcc) != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0xcc) + 8);
    }
    iVar4 = *(int *)(iVar2 + param_2 * 0x14 + 0xc);
    iVar2 = 0;
    if (iVar4 != 0) {
      iVar2 = *(int *)(iVar4 + 8);
    }
    iVar2 = *(int *)(iVar2 + 8);
    break;
  case 2:
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
  case 10:
  case 0xc:
  case 0xd:
  case 0xe:
    iVar2 = 0;
    if (*(int *)(param_1 + 0xa4) != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0xa4) + 8);
    }
    iVar2 = *(int *)(iVar2 + param_2 * 0x14 + 8);
    break;
  default:
    return 0;
  }
  if ((int)param_3 < iVar2) {
    return param_3;
  }
  uVar3 = FUN_4a064d0c(uVar1,param_2,param_3 - iVar2,0);
  iVar4 = FUN_4a064e04(uVar1,uVar3);
  uVar5 = FUN_4a064d0c(uVar1,param_2,param_3 - iVar2,1);
  return uVar5 | iVar4 << 8;
}



// Address: 4a144838

uint FUN_4a144838(undefined4 param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  if (param_2 == 3 || param_2 == 10) {
    uVar1 = FUN_4a143c90(param_1,param_2,param_3);
    if ((uVar1 & 0x18) == 0) {
      return 0xffffffff;
    }
    if ((int)param_3 >> 8 != 0) {
      return ~(uVar1 >> 3) & 1 | ((int)param_3 >> 8) << 8;
    }
  }
  else {
    if (param_2 != 0) {
      return 0xffffffff;
    }
    uVar1 = FUN_4a143c90(param_1,0,param_3);
    if ((uVar1 & 0x20) == 0) {
      return 0xffffffff;
    }
    if ((param_3 & 0xff) == 0) {
      return 1;
    }
    if ((param_3 & 0xff) == 1) {
      return 3;
    }
  }
  return 0;
}



// Address: 4a1448c8

int FUN_4a1448c8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x1a8) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1a8) + 8);
  }
  return (int)*(short *)(iVar1 + param_2 * 2);
}



// Address: 4a1448e0

undefined4 FUN_4a1448e0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x31c) == '\x02') {
    return 0xffffffff;
  }
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x51c);
  if (*(char *)(param_1 + 0x31c) != '\0') {
    iVar2 = FUN_4a13fcd4(uVar1,0x20);
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = 0x9c4;
    }
    return uVar1;
  }
  iVar2 = FUN_4a13fcd4(uVar1,0x10);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = 1000;
  }
  return uVar1;
}



// Address: 4a144940

int FUN_4a144940(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x194) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x194) + 8);
  }
  iVar1 = *(int *)(iVar1 + param_2 * 0x14 + 0xc);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
  }
  return (int)*(short *)(iVar2 + param_3 * 2);
}



// Address: 4a144974

int FUN_4a144974(int param_1)

{
  return (int)*(char *)(param_1 + 0x31c);
}



// Address: 4a144980

uint FUN_4a144980(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x180) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x180) + 8);
  }
  lVar1 = (longlong)((int)*(char *)(iVar2 + param_2) << 0x10) * (longlong)*(int *)PTR_DAT_4a1449a0;
  return (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
}



// Address: 4a1449a4

int FUN_4a1449a4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x4d0) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x4d0) + 8);
  }
  return (int)*(short *)(iVar1 + param_2 * 2);
}



// Address: 4a1449bc

bool FUN_4a1449bc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = FUN_4a1402b0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x51c));
  iVar4 = 0;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      uVar3 = 0x8000000;
      goto LAB_4a144a08;
    }
    if (iVar1 == 2) {
      uVar3 = 0;
      goto LAB_4a144a08;
    }
    switchD_4a11cc8c::default(0,PTR_s_invalid_furniture_stage_4a144a58);
  }
  uVar3 = 0xc000000;
LAB_4a144a08:
  iVar1 = *(int *)(param_1 + 0x50);
  if (param_2 < iVar1) {
    if (*(int *)(param_1 + 0x54) != 0) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x54) + 8);
    }
    iVar4 = iVar4 + param_2 * 100;
  }
  else {
    uVar2 = FUN_4a0642fc();
    iVar4 = FUN_4a134d90(uVar2,param_2 - iVar1);
  }
  return (*(uint *)(iVar4 + 0x14) & uVar3) == 0;
}



// Address: 4a144a5c

undefined4 FUN_4a144a5c(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = FUN_4a142f2c(param_1,param_2 >> 0x15,param_3 >> 0x15);
  if (((~uVar1 & 0xf00) != 0) && ((uVar1 & 0x1000) == 0)) {
    return 1;
  }
  return 0;
}



// Address: 4a144a94

undefined4 FUN_4a144a94(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_2c [8];
  int local_24;
  int local_20;
  
  FUN_4a16c074(auStack_2c,param_1 + 0x348);
  iVar4 = 0;
  if (0 < local_24) {
    do {
      if (local_20 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(local_20 + 8);
      }
      iVar1 = (int)*(short *)(iVar1 + iVar4 * 2);
      if (iVar1 != -1) {
        iVar3 = *(int *)(param_1 + 0x50);
        if (iVar1 < iVar3) {
          if (*(int *)(param_1 + 0x54) == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(*(int *)(param_1 + 0x54) + 8);
          }
          iVar3 = iVar3 + iVar1 * 100;
        }
        else {
          uVar2 = FUN_4a0642fc();
          iVar3 = FUN_4a134d90(uVar2,iVar1 - iVar3);
        }
        if (*(char *)(iVar3 + 8) == param_2) {
          FUN_4a16c1a0(auStack_2c);
          return 1;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_24);
  }
  FUN_4a16c1a0(auStack_2c);
  return 0;
}



// Address: 4a144b6c

undefined4 * FUN_4a144b6c(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar1 = param_3;
  if (param_2 < 2 || param_2 == 8) {
    uVar1 = param_4;
  }
  uVar2 = param_3 & 0xff;
  if (param_2 < 2 || param_2 == 8) {
    param_4 = param_4 & 0xff;
    uVar2 = param_3;
  }
  iVar6 = 0;
  if ((int)uVar1 >> 8 == 0) {
    if (*(int *)(param_1 + 0xcc) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1 + 0xcc) + 8);
    }
    iVar4 = *(int *)(iVar4 + param_2 * 0x14 + 0xc);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar4 + 8);
    }
    iVar4 = *(int *)(iVar4 + uVar2 * 0x14 + 0xc);
    if (iVar4 != 0) {
      iVar6 = *(int *)(iVar4 + 8);
    }
    iVar6 = (int)*(short *)(iVar6 + param_4 * 2);
    if (iVar6 != -1) {
      uVar5 = thunk_FUN_4a161570(0x14);
      iVar6 = FUN_4a135e24(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x60),iVar6);
      puVar3 = (undefined4 *)FUN_4a0c6bc0(uVar5);
      *puVar3 = PTR_PTR_4a0c70cc;
      puVar3[2] = 0;
      *(undefined1 *)(puVar3 + 3) = 0;
      puVar3[4] = 0;
      if (iVar6 != 0) {
        uVar5 = FUN_4a04d4d0(0,iVar6);
        puVar3[2] = uVar5;
      }
      return puVar3;
    }
  }
  else {
    uVar5 = FUN_4a0642fc();
    iVar4 = FUN_4a064ee8(uVar5,(int)uVar1 >> 8);
    if (iVar4 != 0) {
      if (*(int *)(iVar4 + 0x88) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x88) + 8);
      }
      iVar4 = *(int *)(iVar4 + param_2 * 0x14 + 0xc);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar4 + 8);
      }
      iVar4 = *(int *)(iVar4 + uVar2 * 0x14 + 0xc);
      if (iVar4 != 0) {
        iVar6 = *(int *)(iVar4 + 8);
      }
      puVar3 = *(undefined4 **)(iVar6 + param_4 * 4);
      if ((puVar3 != (undefined4 *)0x0) && (iVar6 = FUN_4a13e1b4(puVar3), iVar6 != 0)) {
        return puVar3;
      }
    }
  }
  return (undefined4 *)0x0;
}



// Address: 4a144c98

int FUN_4a144c98(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x4a8) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x4a8) + 8);
  }
  return (int)*(short *)(iVar1 + param_2 * 2);
}



// Address: 4a144cb0

int FUN_4a144cb0(undefined4 param_1,int param_2)

{
  return param_2 >> 0x15;
}



// Address: 4a144cb8

int FUN_4a144cb8(undefined4 param_1,int param_2)

{
  return param_2 >> 0x15;
}



// Address: 4a144cc0

void FUN_4a144cc0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = *(int *)(param_1 + 0x50);
  iVar8 = 0;
  if (param_3 < iVar3) {
    if (*(int *)(param_1 + 0x54) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(param_1 + 0x54) + 8);
    }
    iVar3 = iVar3 + param_3 * 100;
  }
  else {
    uVar1 = FUN_4a0642fc();
    iVar3 = FUN_4a134d90(uVar1,param_3 - iVar3);
  }
  if (*(int *)(iVar3 + 0x34) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(iVar3 + 0x34) + 8);
  }
  iVar4 = (int)*(char *)(iVar4 + param_4);
  if (*(int *)(iVar3 + 0x48) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(iVar3 + 0x48) + 8);
  }
  iVar5 = (int)*(char *)(iVar5 + param_4);
  iVar6 = (int)*(char *)(iVar3 + 0x1e);
  iVar3 = (int)*(char *)(iVar3 + 0x1f);
  if (iVar6 < 2) {
    iVar6 = 1;
  }
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  iVar7 = iVar4;
  switch(param_5) {
  case 0:
  case 4:
  case 7:
    break;
  case 1:
    iVar7 = 1 - (iVar3 + iVar5);
    iVar5 = iVar4;
    break;
  case 2:
  case 5:
  case 6:
    iVar3 = iVar3 + iVar5;
    iVar5 = 1 - (iVar6 + iVar4);
    goto LAB_4a144dbc;
  case 3:
    iVar3 = iVar4 + iVar6;
LAB_4a144dbc:
    iVar7 = iVar5;
    iVar5 = 1 - iVar3;
    break;
  default:
    switchD_4a11cc8c::default(0,s_invalid_facing_dir_4a144dec);
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)(*(int *)(param_2 + 0xc) + 8);
  }
  *piVar2 = iVar7;
  if (*(int *)(param_2 + 0xc) != 0) {
    iVar8 = *(int *)(*(int *)(param_2 + 0xc) + 8);
  }
  *(int *)(iVar8 + 4) = iVar5;
  return;
}



// Address: 4a144e00

int FUN_4a144e00(int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  undefined1 auStack_20 [8];
  int local_18;
  int local_14;
  
  psVar3 = (short *)0x0;
  if (*(int *)(param_1 + 0x90) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x90) + 8);
  }
  FUN_4a16c074(auStack_20,iVar2 + param_2 * 0x14);
  if (param_3 < local_18) {
    if (local_14 != 0) {
      psVar3 = *(short **)(local_14 + 8);
    }
    sVar1 = psVar3[param_3];
    FUN_4a16c1a0(auStack_20);
    return (int)sVar1;
  }
  if (local_14 != 0) {
    psVar3 = *(short **)(local_14 + 8);
  }
  sVar1 = *psVar3;
  FUN_4a16c1a0(auStack_20);
  return (int)sVar1;
}



// Address: 4a144e8c

int FUN_4a144e8c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if (param_2 < iVar1) {
    if (*(int *)(param_1 + 0x54) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x54) + 8);
    }
    iVar1 = iVar1 + param_2 * 100;
  }
  else {
    uVar3 = FUN_4a0642fc();
    iVar1 = FUN_4a134d90(uVar3,param_2 - iVar1);
  }
  if ((*(uint *)(iVar1 + 0x14) & 0x80) == 0) {
    return -1;
  }
  iVar5 = *(int *)(param_1 + 0x50);
  iVar4 = 0;
  iVar1 = 0;
  if (0 < iVar5) {
    do {
      iVar2 = *(int *)(param_1 + 0x50);
      if (iVar1 < iVar2) {
        iVar2 = 0;
        if (*(int *)(param_1 + 0x54) != 0) {
          iVar2 = *(int *)(*(int *)(param_1 + 0x54) + 8);
        }
        iVar2 = iVar2 + iVar1 * 100;
      }
      else {
        uVar3 = FUN_4a0642fc();
        iVar2 = FUN_4a134d90(uVar3,iVar1 - iVar2);
      }
      if ((*(uint *)(iVar2 + 0x14) & 0x80) != 0) {
        if (iVar1 == param_2) {
          return iVar4;
        }
        iVar4 = iVar4 + 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar5);
  }
  switchD_4a11cc8c::default(0,s_invalid_object_type_4a144f84);
  return -1;
}



// Address: 4a144f98

uint FUN_4a144f98(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  uint local_64;
  undefined *local_60 [2];
  int local_58;
  int local_54;
  uint local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  int local_3c;
  undefined *local_38;
  int local_34;
  int iStack_30;
  int local_2c;
  int iStack_28;
  
  iVar2 = *(int *)(param_1 + 0x50);
  local_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  iStack_28 = param_4;
  if (param_2 < iVar2) {
    if (*(int *)(param_1 + 0x54) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0x54) + 8);
    }
    iVar2 = iVar2 + param_2 * 100;
  }
  else {
    uVar3 = FUN_4a0642fc();
    iVar2 = FUN_4a134d90(uVar3,param_2 - iVar2);
  }
  local_44 = *(uint *)(iVar2 + 0x14);
  iVar2 = *(int *)(local_34 + 0x50);
  if (param_2 < iVar2) {
    if (*(int *)(local_34 + 0x54) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(local_34 + 0x54) + 8);
    }
    iVar2 = iVar2 + param_2 * 100;
  }
  else {
    uVar3 = FUN_4a0642fc();
    iVar2 = FUN_4a134d90(uVar3,param_2 - iVar2);
  }
  local_48 = (uint)*(char *)(iVar2 + 0x1e);
  iVar2 = *(int *)(local_34 + 0x50);
  if (param_2 < iVar2) {
    if (*(int *)(local_34 + 0x54) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(local_34 + 0x54) + 8);
    }
    iVar2 = iVar2 + param_2 * 100;
  }
  else {
    uVar3 = FUN_4a0642fc();
    iVar2 = FUN_4a134d90(uVar3,param_2 - iVar2);
  }
  uVar12 = (uint)*(char *)(iVar2 + 0x1f);
  local_4c = 0;
  uVar3 = FUN_4a0fba7c(*(undefined4 *)(local_34 + 0x1c));
  FUN_4a110aac(local_60,uVar3);
  local_64 = 0;
  local_38 = PTR_PTR_4a1454d4;
  do {
    uVar4 = *(uint *)(PTR_DAT_4a1454d8 + local_64 * 4);
    uVar9 = local_48;
    if (local_64 != 1) {
      uVar9 = local_64;
    }
    uVar10 = uVar12;
    uVar1 = local_48;
    if (local_64 == 1 || uVar9 == 3) {
      uVar10 = local_48;
      uVar1 = uVar12;
    }
    if (((local_44 & 0x100000) == 0) && (iVar2 = 0, 0 < (int)uVar1)) {
      local_3c = uVar1 - 1;
      do {
        uVar9 = 0x9f00;
        if (iVar2 == 0) {
          uVar9 = 0x9e00;
        }
        if (iVar2 == local_3c) {
          uVar9 = uVar9 & 0xfffffdff;
        }
        iVar6 = 0;
        if (0 < (int)uVar10) {
          local_40 = local_2c - iVar2;
          do {
            uVar8 = uVar9;
            if (iVar6 == 0) {
              uVar8 = uVar9 & 0xfffffbff;
            }
            if (iVar6 == uVar10 - 1) {
              uVar8 = uVar8 & 0xfffff7ff;
            }
            uVar5 = FUN_4a142f2c(local_34,local_40,param_4 - iVar6);
            if ((uVar5 & uVar8) != 0) goto LAB_4a14545c;
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)uVar10);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)uVar1);
    }
    iVar2 = local_2c;
    if ((local_44 & 0x200000) == 0) {
LAB_4a145284:
      iVar2 = local_2c;
      if ((local_44 & 0x400000) != 0) {
        bVar13 = true;
        if (local_64 == 0 || local_64 == 2) {
          iVar2 = 1;
          if (local_64 == 2) {
            iVar2 = -1;
          }
          uVar9 = 0x100;
          if (local_64 == 2) {
            uVar9 = 0x200;
          }
          iVar11 = local_2c - iVar2 * local_48;
          iVar6 = 0;
          while ((iVar6 < (int)uVar12 && (bVar13))) {
            uVar8 = FUN_4a142f2c(local_34,iVar11,param_4 - iVar6 * iVar2);
            bVar13 = (uVar8 & uVar9) != 0;
            iVar6 = iVar6 + 1;
          }
        }
        else if (local_64 == 1 || local_64 == 3) {
          iVar6 = 1;
          if (local_64 == 3) {
            iVar6 = -1;
          }
          iVar11 = iVar6 * local_48;
          uVar9 = 0x400;
          if (local_64 == 3) {
            uVar9 = 0x800;
          }
          iVar7 = 0;
          while ((iVar7 < (int)uVar12 && (bVar13))) {
            uVar8 = FUN_4a142f2c(local_34,iVar2 - iVar7 * iVar6,param_4 - iVar11);
            bVar13 = (uVar8 & uVar9) != 0;
            iVar7 = iVar7 + 1;
          }
        }
        if (bVar13) {
          local_60[0] = local_38;
          iVar2 = FUN_4a0bcc84(local_60);
          if (iVar2 == 0) goto LAB_4a1453d0;
          iVar6 = 0;
          if (0 < local_58) goto LAB_4a1453b4;
          goto LAB_4a1453c8;
        }
      }
      bVar13 = true;
      for (iVar2 = 0; iVar2 < local_58; iVar2 = iVar2 + 1) {
        if (!bVar13) goto LAB_4a14545c;
        if (local_54 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(local_54 + 8);
        }
        iVar6 = FUN_4a073264(*(undefined4 *)(iVar6 + iVar2 * 4),local_2c,param_4,uVar1,uVar10);
        if (iVar6 != 0) {
          bVar13 = false;
        }
      }
      if (bVar13) {
        local_4c = local_4c | uVar4;
      }
    }
    else {
      bVar13 = true;
      if (local_64 == 0 || local_64 == 2) {
        iVar2 = 1;
        if (local_64 == 2) {
          iVar2 = -1;
        }
        uVar9 = 0x100;
        if (local_64 == 2) {
          uVar9 = 0x200;
        }
        iVar11 = local_2c - iVar2 * local_48;
        iVar6 = 0;
        while ((iVar6 < (int)uVar12 && (bVar13))) {
          uVar8 = FUN_4a142f2c(local_34,iVar11,param_4 - iVar6 * iVar2);
          bVar13 = (uVar8 & uVar9) != 0;
          iVar6 = iVar6 + 1;
        }
      }
      else if (local_64 == 1 || local_64 == 3) {
        iVar6 = 1;
        if (local_64 == 3) {
          iVar6 = -1;
        }
        iVar11 = iVar6 * local_48;
        uVar9 = 0x400;
        if (local_64 == 3) {
          uVar9 = 0x800;
        }
        iVar7 = 0;
        while ((iVar7 < (int)uVar12 && (bVar13))) {
          uVar8 = FUN_4a142f2c(local_34,iVar2 - iVar7 * iVar6,param_4 - iVar11);
          bVar13 = (uVar8 & uVar9) != 0;
          iVar7 = iVar7 + 1;
        }
      }
      if (bVar13) goto LAB_4a145284;
    }
LAB_4a14545c:
    uVar9 = local_4c;
    local_64 = local_64 + 1;
  } while (local_64 < 4);
  local_60[0] = local_38;
  iVar2 = FUN_4a0bcc84(local_60);
  if (iVar2 != 0) {
    iVar6 = 0;
    if (0 < local_58) {
      do {
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_58);
      if (iVar2 == 0) goto LAB_4a1454bc;
    }
    FUN_4a14f21c(iVar2);
  }
LAB_4a1454bc:
  FUN_4a0c6bf4(local_60);
  return uVar9;
LAB_4a1453b4:
  do {
    iVar6 = iVar6 + 1;
  } while (iVar6 < local_58);
  if (iVar2 != 0) {
LAB_4a1453c8:
    FUN_4a14f21c(iVar2);
  }
LAB_4a1453d0:
  FUN_4a0c6bf4(local_60);
  return 0;
}



// Address: 4a1454dc

int FUN_4a1454dc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_1c [20];
  
  uVar1 = FUN_4a16c074(auStack_1c,param_1 + 0x4c4);
  iVar2 = FUN_4a0febf8(0xffffffff,uVar1);
  iVar3 = *(int *)(param_1 + 0x4cc);
  FUN_4a16c1a0(auStack_1c);
  return iVar3 - iVar2;
}



// Address: 4a145524

undefined4 FUN_4a145524(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x194) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x194) + 8);
  }
  return *(undefined4 *)(iVar1 + param_2 * 0x14 + 8);
}



// Address: 4a145540

int FUN_4a145540(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_1c [20];
  
  uVar1 = FUN_4a16c074(auStack_1c,param_1 + 0x49c);
  iVar2 = FUN_4a0febf8(0xffffffff,uVar1);
  iVar3 = *(int *)(param_1 + 0x4a4);
  FUN_4a16c1a0(auStack_1c);
  return iVar3 - iVar2;
}



// Address: 4a145588

undefined4 FUN_4a145588(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  
  param_2 = param_2 >> 0x15;
  param_4 = param_4 >> 0x15;
  param_3 = param_3 >> 0x15;
  param_5 = param_5 >> 0x15;
  if (param_2 == param_4 && param_3 == param_5) {
    uVar1 = FUN_4a142f2c(param_1,param_2,param_3);
    if ((~uVar1 & 0xf00) == 0) {
      return 0;
    }
  }
  else {
    uVar1 = FUN_4a142f2c();
    if (param_2 != param_4) {
      if (param_2 - param_4 < 0) {
        uVar2 = 0x100;
      }
      else {
        uVar2 = 0x200;
      }
      if ((uVar2 & uVar1) != 0) {
        return 0;
      }
    }
    if (param_3 != param_5) {
      if (param_3 - param_5 < 0) {
        uVar2 = 0x400;
      }
      else {
        uVar2 = 0x800;
      }
      if ((uVar2 & uVar1) != 0) {
        return 0;
      }
    }
  }
  if ((uVar1 & 0x1000) != 0) {
    return 0;
  }
  return 1;
}



// Address: 4a145634

int FUN_4a145634(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  FUN_4a0642fc();
  iVar1 = FUN_4a134d88();
  iVar5 = 0;
  uVar6 = iVar1 + *(int *)(param_1 + 0x50);
  if ((int)uVar6 < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = uVar6 & 1;
  }
  iVar1 = 0;
  if (uVar4 != 0) {
    do {
      iVar2 = *(int *)(param_1 + 0x50);
      if (iVar5 < iVar2) {
        if (*(int *)(param_1 + 0x54) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(*(int *)(param_1 + 0x54) + 8);
        }
        iVar2 = iVar2 + iVar5 * 100;
      }
      else {
        uVar3 = FUN_4a0642fc();
        iVar2 = FUN_4a134d90(uVar3,iVar5 - iVar2);
      }
      iVar5 = iVar5 + 1;
      if (*(char *)(iVar2 + 9) == param_2) {
        iVar1 = iVar1 + 1;
      }
    } while (iVar5 < (int)uVar4);
  }
  while ((int)uVar4 < (int)uVar6) {
    iVar5 = *(int *)(param_1 + 0x50);
    if ((int)uVar4 < iVar5) {
      if (*(int *)(param_1 + 0x54) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x54) + 8);
      }
      iVar5 = iVar5 + uVar4 * 100;
    }
    else {
      uVar3 = FUN_4a0642fc();
      iVar5 = FUN_4a134d90(uVar3,uVar4 - iVar5);
    }
    iVar2 = *(int *)(param_1 + 0x50);
    if (*(char *)(iVar5 + 9) == param_2) {
      iVar1 = iVar1 + 1;
    }
    iVar5 = uVar4 + 1;
    if (iVar5 < iVar2) {
      if (*(int *)(param_1 + 0x54) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(param_1 + 0x54) + 8);
      }
      iVar2 = iVar2 + iVar5 * 100;
    }
    else {
      uVar3 = FUN_4a0642fc();
      iVar2 = FUN_4a134d90(uVar3,iVar5 - iVar2);
    }
    uVar4 = uVar4 + 2;
    if (*(char *)(iVar2 + 9) == param_2) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}



// Address: 4a145778

undefined4 FUN_4a145778(void)

{
  return 0x122;
}



// Address: 4a145784

undefined4 FUN_4a145784(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x50);
  if (param_2 < iVar2) {
    iVar2 = 0;
    if (*(int *)(param_1 + 0x54) != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x54) + 8);
    }
    iVar2 = iVar2 + param_2 * 100;
  }
  else {
    uVar1 = FUN_4a0642fc();
    iVar2 = FUN_4a134d90(uVar1,param_2 - iVar2);
  }
  return *(undefined4 *)(iVar2 + 0x30);
}



// Address: 4a1457cc

int FUN_4a1457cc(undefined4 param_1,int param_2)

{
  return param_2 * 0x200000 + 0x100000;
}



// Address: 4a1457d8

int FUN_4a1457d8(undefined4 param_1,int param_2)

{
  return param_2 * 0x200000 + 0x100000;
}



// Address: 4a1457e4

int FUN_4a1457e4(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x50);
  FUN_4a0642fc();
  iVar1 = FUN_4a134d88();
  iVar4 = 0;
  iVar1 = iVar1 + *(int *)(param_1 + 0x50);
  iVar6 = iVar1 - iVar7;
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(param_1 + 0x50);
      iVar5 = iVar7;
      if (iVar6 <= iVar4) {
        iVar5 = -iVar6;
      }
      iVar5 = iVar4 + iVar5;
      if (iVar5 < iVar2) {
        iVar2 = 0;
        if (*(int *)(param_1 + 0x54) != 0) {
          iVar2 = *(int *)(*(int *)(param_1 + 0x54) + 8);
        }
        iVar2 = iVar2 + iVar5 * 100;
      }
      else {
        uVar3 = FUN_4a0642fc();
        iVar2 = FUN_4a134d90(uVar3,iVar5 - iVar2);
      }
      if (*(char *)(iVar2 + 9) == param_3) {
        if (param_2 == 0) {
          return iVar5;
        }
        param_2 = param_2 + -1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return -1;
}



// Address: 4a14589c

undefined4 FUN_4a14589c(void)

{
  return 0xffffffff;
}



// Address: 4a1458a4

undefined4 FUN_4a1458a4(void)

{
  return 0xffffffff;
}



// Address: 4a1458ac

int FUN_4a1458ac(void)

{
  uint uVar1;
  
  uVar1 = FUN_4a142f2c();
  return (uVar1 & 0xf) - 1;
}



// Address: 4a1458d4

undefined4 FUN_4a1458d4(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 0:
  case 5:
  case 7:
    return 0x10;
  case 1:
    return 0x20;
  case 2:
    return 0x40;
  case 3:
    return 0x80;
  case 4:
  case 6:
    return 0x100;
  default:
    return 0;
  }
}



// Address: 4a145934

undefined4 FUN_4a145934(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x514) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x514) + 8);
  }
  return *(undefined4 *)(iVar1 + param_2 * 4);
}



// Address: 4a145948

undefined4 FUN_4a145948(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x514) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x514) + 8);
  }
  return *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x4a0) * 4);
}



// Address: 4a145960

undefined4 FUN_4a145960(int param_1)

{
  return *(undefined4 *)(param_1 + 0x524);
}



// Address: 4a145968

undefined1 FUN_4a145968(int param_1)

{
  return *(undefined1 *)(param_1 + 0x4c0);
}



// Address: 4a145970

undefined4 FUN_4a145970(int param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 0x40) {
    uVar1 = FUN_4a000860(1,0,param_2);
    if (((uint)((ulonglong)uVar1 >> 0x20) &
        (*(uint *)(param_1 + 0x4dc) | *(uint *)(param_1 + 0x4fc))) == 0 &&
        ((uint)uVar1 & (*(uint *)(param_1 + 0x4d8) | *(uint *)(param_1 + 0x4f8))) == 0) {
      return 0;
    }
  }
  else {
    uVar1 = FUN_4a000860(1,0,param_2 + -0x40);
    if (((uint)((ulonglong)uVar1 >> 0x20) &
        (*(uint *)(param_1 + 0x4e4) | *(uint *)(param_1 + 0x504))) == 0 &&
        ((uint)uVar1 & (*(uint *)(param_1 + 0x4e0) | *(uint *)(param_1 + 0x500))) == 0) {
      return 0;
    }
  }
  return 1;
}



// Address: 4a145a28

undefined4 FUN_4a145a28(int param_1)

{
  return *(undefined4 *)(param_1 + 0x548);
}



// Address: 4a145a30

undefined4 FUN_4a145a30(int param_1)

{
  return *(undefined4 *)(param_1 + 0x54c);
}



// Address: 4a145a38

undefined4 FUN_4a145a38(int param_1)

{
  return *(undefined4 *)(param_1 + 0x528);
}



// Address: 4a145a40

undefined1 FUN_4a145a40(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x4b0) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x4b0) + 8);
  }
  return *(undefined1 *)(iVar1 + param_2);
}



// Address: 4a145a54

undefined1 FUN_4a145a54(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x4b0) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x4b0) + 8);
  }
  return *(undefined1 *)(iVar1 + *(int *)(param_1 + 0x4a0));
}



// Address: 4a145a6c

undefined4 FUN_4a145a6c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x550);
}



// Address: 4a145a74

undefined4 FUN_4a145a74(int param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 0x40) {
    uVar1 = FUN_4a000860(1,0,param_2);
    if (((uint)((ulonglong)uVar1 >> 0x20) &
        (*(uint *)(param_1 + 0x4cc) | *(uint *)(param_1 + 0x4ec))) == 0 &&
        ((uint)uVar1 & (*(uint *)(param_1 + 0x4c8) | *(uint *)(param_1 + 0x4e8))) == 0) {
      return 0;
    }
  }
  else {
    uVar1 = FUN_4a000860(1,0,param_2 + -0x40);
    if (((uint)((ulonglong)uVar1 >> 0x20) &
        (*(uint *)(param_1 + 0x4d4) | *(uint *)(param_1 + 0x4f4))) == 0 &&
        ((uint)uVar1 & (*(uint *)(param_1 + 0x4d0) | *(uint *)(param_1 + 0x4f0))) == 0) {
      return 0;
    }
  }
  return 1;
}



// Address: 4a145b2c

undefined4 FUN_4a145b2c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x540);
}



// Address: 4a145b34

undefined4 FUN_4a145b34(int param_1)

{
  return *(undefined4 *)(param_1 + 0x544);
}



// Address: 4a145b3c

int FUN_4a145b3c(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = *(uint *)(param_1 + 0x4d8) | *(uint *)(param_1 + 0x4f8);
  uVar10 = *(uint *)(param_1 + 0x4dc) | *(uint *)(param_1 + 0x4fc);
  iVar5 = 0;
  uVar8 = *(uint *)(param_1 + 0x4e4) | *(uint *)(param_1 + 0x504);
  uVar7 = *(uint *)(param_1 + 0x4e0) | *(uint *)(param_1 + 0x500);
  iVar3 = 0;
  iVar6 = 0;
  iVar4 = 0x20;
  do {
    uVar1 = FUN_4a0008b0(uVar9,uVar10,iVar3);
    uVar2 = FUN_4a0008b0(uVar7,uVar8,iVar3);
    iVar5 = iVar5 + (uVar1 & 1) + (uVar2 & 1);
    uVar1 = FUN_4a0008b0(uVar9,uVar10,iVar3 + 1);
    uVar2 = FUN_4a0008b0(uVar7,uVar8,iVar3 + 1);
    iVar4 = iVar4 + -1;
    iVar6 = iVar6 + (uVar1 & 1) + (uVar2 & 1);
    iVar3 = iVar3 + 2;
  } while (iVar4 != 0);
  return iVar5 + iVar6;
}



// Address: 4a145bfc

undefined4 FUN_4a145bfc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4a0);
}



// Address: 4a145c04

uint FUN_4a145c04(int param_1)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *(int *)(param_1 + 0x4b0);
  if (iVar4 == 0) {
    pcVar2 = (char *)0x0;
  }
  else {
    pcVar2 = *(char **)(iVar4 + 8);
  }
  uVar1 = (uint)(*pcVar2 != '\0');
  iVar3 = 1;
  do {
    if (iVar4 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iVar4 + 8);
    }
    pcVar2 = (char *)(iVar5 + iVar3);
    iVar5 = iVar3 + 1;
    iVar3 = iVar3 + 2;
    if (*pcVar2 != '\0') {
      uVar1 = uVar1 + 1;
    }
    if (iVar4 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iVar4 + 8);
    }
    if (*(char *)(iVar6 + iVar5) != '\0') {
      uVar1 = uVar1 + 1;
    }
  } while (iVar3 < 7);
  return uVar1;
}



// Address: 4a145c7c

int FUN_4a145c7c(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = *(uint *)(param_1 + 0x4c8) | *(uint *)(param_1 + 0x4e8);
  uVar10 = *(uint *)(param_1 + 0x4cc) | *(uint *)(param_1 + 0x4ec);
  iVar5 = 0;
  uVar8 = *(uint *)(param_1 + 0x4d4) | *(uint *)(param_1 + 0x4f4);
  uVar7 = *(uint *)(param_1 + 0x4d0) | *(uint *)(param_1 + 0x4f0);
  iVar3 = 0;
  iVar6 = 0;
  iVar4 = 0x20;
  do {
    uVar1 = FUN_4a0008b0(uVar9,uVar10,iVar3);
    uVar2 = FUN_4a0008b0(uVar7,uVar8,iVar3);
    iVar5 = iVar5 + (uVar1 & 1) + (uVar2 & 1);
    uVar1 = FUN_4a0008b0(uVar9,uVar10,iVar3 + 1);
    uVar2 = FUN_4a0008b0(uVar7,uVar8,iVar3 + 1);
    iVar4 = iVar4 + -1;
    iVar6 = iVar6 + (uVar1 & 1) + (uVar2 & 1);
    iVar3 = iVar3 + 2;
  } while (iVar4 != 0);
  return iVar5 + iVar6;
}



// Address: 4a145d3c

undefined4 FUN_4a145d3c(int param_1,uint param_2)

{
  if ((int)param_2 < 0x20) {
    if ((*(uint *)(param_1 + 0x4b8) & 1 << (param_2 & 0xff)) == 0) {
      return 0;
    }
  }
  else if ((*(uint *)(param_1 + 0x4bc) & 1 << (param_2 - 0x20 & 0xff)) == 0) {
    return 0;
  }
  return 1;
}



// Address: 4a145d70

undefined4 FUN_4a145d70(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = *(undefined4 *)(*param_1 + 8);
  }
  return uVar1;
}



// Address: 4a145d80

bool FUN_4a145d80(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



// Address: 4a145d90

uint FUN_4a145d90(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = FUN_4a1652c8(*(int **)(param_1 + 0x40),param_2,
                       *(undefined4 *)(**(int **)(param_1 + 0x40) + 0x10));
  uVar1 = DAT_4a145dc4;
  if ((*(int *)(param_1 + 0x3c) != 0) && (uVar2 == DAT_4a145dc4)) {
    uVar2 = FUN_4a10222c(param_1,param_2);
  }
  if (uVar2 == uVar1) {
    uVar2 = (uint)*(ushort *)(param_1 + 0x1c);
  }
  return uVar2;
}



// Address: 4a145dc8

undefined4 FUN_4a145dc8(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x54) == 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x20) + param_2 * 0xc + 4);
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x28);
}



// Address: 4a145df8

int FUN_4a145df8(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x54) == 0) {
    iVar1 = *(int *)(param_1 + 0x44) + param_2 * 8;
  }
  else {
    iVar1 = FUN_4a0a4776();
  }
  return iVar1;
}



// Address: 4a145e14

undefined8 FUN_4a145e14(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ushort *puVar4;
  uint local_20;
  uint local_1c;
  undefined4 uStack_18;
  
  local_20 = param_2;
  if (*(char *)(*(int *)(param_1 + 0x44) + param_2 * 8 + 1) != '\0') {
    for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 100); uVar1 = uVar1 + 1) {
      puVar4 = (ushort *)(*(int *)(param_1 + 0x60) + uVar1 * 6);
      if ((*puVar4 == param_2) && (puVar4[1] == param_3)) {
        iVar3 = (int)*(short *)(*(int *)(param_1 + 0x60) + uVar1 * 6 + 4);
        goto LAB_4a145e4e;
      }
    }
    if ((*(int *)(param_1 + 0x3c) != 0) && (*PTR_DAT_4a145eb4 != '\0')) {
      local_1c = param_3;
      uStack_18 = param_4;
      uVar2 = FUN_4a0483d0();
      iVar3 = FUN_4a1652d2(uVar2,*(undefined4 *)(param_1 + 0x3c),
                           *(int *)(param_1 + 0x44) + param_2 * 8,
                           *(int *)(param_1 + 0x44) + param_3 * 8);
      local_20 = CONCAT22((short)param_3,(short)param_2);
      local_1c = CONCAT22(local_1c._2_2_,(short)iVar3);
      FUN_4a16f6c0((int *)(param_1 + 0x60),*(int *)(param_1 + 100) + 1);
      thunk_FUN_4a000f84(*(int *)(param_1 + 0x60) + *(int *)(param_1 + 100) * 6,&local_20,6);
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
      goto LAB_4a145e4e;
    }
  }
  iVar3 = 0;
LAB_4a145e4e:
  return CONCAT44(local_20,iVar3);
}



// Address: 4a145eb8

undefined4 FUN_4a145eb8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*(int *)(param_1 + 0x54) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x24);
  }
  return uVar1;
}



// Address: 4a145ed0

void FUN_4a145ed0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_20 [20];
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0xa0) < 1) {
    iVar5 = 0;
  }
  else {
    if (*(int *)(param_1 + 0xa4) == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = *(int **)(*(int *)(param_1 + 0xa4) + 8);
    }
    iVar5 = *piVar2;
  }
  if (iVar5 == 0) {
    if (*(int *)(param_2 + 0xc) == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = *(undefined4 **)(*(int *)(param_2 + 0xc) + 8);
    }
    *puVar3 = *(undefined4 *)(param_1 + 0x44);
    if (*(int *)(param_2 + 0xc) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_2 + 0xc) + 8);
    }
    *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(param_1 + 0x48);
    if (*(int *)(param_2 + 0xc) != 0) {
      iVar4 = *(int *)(*(int *)(param_2 + 0xc) + 8);
    }
    *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 0x4c);
    return;
  }
  uVar1 = FUN_4a16bdcc(auStack_20);
  FUN_4a13e9e8(iVar5,uVar1,param_3,1);
  FUN_4a16bef4(auStack_20);
  return;
}



// Address: 4a145f8c

undefined4 FUN_4a145f8c(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x51c);
}



// Address: 4a145f98

undefined4 FUN_4a145f98(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  bVar4 = (*(uint *)(param_2 + 0x34) & 0x2000) == 0;
  iVar3 = *(int *)(param_1 + 0x50);
  if (bVar4) {
    param_4 = *(int *)(param_2 + 0x50);
  }
  if (bVar4 && param_4 == iVar3) {
    return 0;
  }
  if (iVar3 == 0) {
    iVar1 = 1;
  }
  else if (iVar3 == 1) {
    iVar1 = 0;
  }
  else if (iVar3 == 2) {
    iVar1 = -1;
  }
  else {
    iVar1 = 0;
  }
  if (iVar3 != 0) {
    uVar2 = (uint)(iVar3 == 1);
    if ((iVar3 == 1) || (iVar3 == 2)) goto LAB_4a146024;
    if (iVar3 == 3) {
      uVar2 = 0xffffffff;
      goto LAB_4a146024;
    }
  }
  uVar2 = 0;
LAB_4a146024:
  if (0 < (int)((*(int *)(param_1 + 0x4c) - *(int *)(param_2 + 0x4c)) * uVar2 +
               (*(int *)(param_1 + 0x44) - *(int *)(param_2 + 0x44)) * iVar1)) {
    return 0;
  }
  return 1;
}



// Address: 4a146048

void FUN_4a146048(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_20 [20];
  
  puVar2 = (undefined4 *)0x0;
  if (*(int *)(param_1 + 0xa0) < 1) {
    uVar3 = 0;
  }
  else {
    if (*(int *)(param_1 + 0xa4) != 0) {
      puVar2 = *(undefined4 **)(*(int *)(param_1 + 0xa4) + 8);
    }
    uVar3 = *puVar2;
  }
  uVar1 = FUN_4a16bdcc(auStack_20);
  FUN_4a13eb68(uVar3,uVar1,param_3);
  FUN_4a16bef4(auStack_20);
  return;
}



// Address: 4a1460a4

undefined4 FUN_4a1460a4(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
}



// Address: 4a1460b0

undefined4 FUN_4a1460b0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < *(int *)(param_1 + 0x8c)) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x90) != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x90) + 8);
    }
    return *(undefined4 *)(iVar1 + param_2 * 4);
  }
  return 0;
}



// Address: 4a1460d4

int FUN_4a1460d4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                       *(undefined4 *)(param_1 + 0x28));
  return (int)*(char *)(iVar1 + 8);
}



// Address: 4a1460f8

undefined4 FUN_4a1460f8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if ((*(uint *)(param_1 + 0x34) & 0x100) == 0) {
    return *(undefined4 *)(param_1 + 0x30);
  }
  iVar1 = FUN_4a1441e0(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                       *(undefined4 *)(param_1 + 0x28));
  iVar4 = 0;
  iVar10 = *(int *)(*(int *)(param_1 + 0x24) + 0x51c);
  iVar8 = *(int *)(iVar10 + 0x410);
  iVar9 = -1;
  iVar5 = -1;
  if (0 < iVar8) {
    do {
      iVar2 = FUN_4a13f8f8(iVar10,iVar4);
      iVar6 = iVar9;
      iVar7 = iVar5;
      if (((iVar2 == iVar1) && (iVar7 = iVar4, iVar5 != -1)) &&
         (iVar6 = iVar4, iVar7 = iVar5, iVar9 != -1)) {
        switchD_4a11cc8c::default(0,PTR_s_argh__three_sims_in_the_one_hous_4a1465b4);
        iVar6 = iVar9;
      }
      iVar4 = iVar4 + 1;
      iVar9 = iVar6;
      iVar5 = iVar7;
    } while (iVar4 < iVar8);
    if (iVar7 != -1 || iVar6 != -1) {
      iVar9 = *(int *)(param_1 + 0x24) + 0x278;
      if (iVar7 != 0) {
        iVar5 = 0;
        if (*(int *)(iVar10 + 0x420) == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(*(int *)(iVar10 + 0x420) + 8);
        }
        uVar3 = FUN_4a1351bc(iVar9,(int)*(short *)(iVar1 + iVar7 * 2));
        if (iVar6 == -1) {
          FUN_4a06b6cc(iVar9,0xfffffff6,0x8e4,uVar3);
        }
        else {
          if (*(int *)(iVar10 + 0x420) != 0) {
            iVar5 = *(int *)(*(int *)(iVar10 + 0x420) + 8);
          }
          FUN_4a1351bc(iVar9,(int)*(short *)(iVar5 + iVar6 * 2));
          FUN_4a06b7b4(iVar9,0xfffffff6,0x8e5,uVar3);
        }
        return 0xfffffff6;
      }
      return 0x8e2;
    }
  }
  return 0x8e3;
}



// Address: 4a14610c

uint FUN_4a14610c(int param_1)

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
  return (*(uint *)(*(int *)(iVar1 + 0x34) + 0x24) & 2) >> 1;
}



// Address: 4a1461c0

bool FUN_4a1461c0(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0x38) & param_2) != 0;
}



// Address: 4a1461d0

int FUN_4a1461d0(int param_1)

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
  if ((iVar1 != 0) && (iVar1 = FUN_4a13eedc(), 0 < iVar1)) {
    return iVar1;
  }
  return 1;
}



// Address: 4a14621c

undefined4 FUN_4a14621c(int param_1)

{
  if (((*(uint *)(param_1 + 0x34) & 0x800000) == 0) && (*(int *)(param_1 + 100) != 0)) {
    return 0;
  }
  return 1;
}



// Address: 4a146240

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a146240(int param_1)

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



// Address: 4a14634c

undefined4 FUN_4a14634c(int param_1)

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
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0x7c);
  }
  return 0;
}



// Address: 4a14637c

void FUN_4a14637c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_r6;
  int iVar5;
  undefined4 uVar6;
  
  uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
  FUN_4a144cc0(uVar6,param_2,*(undefined4 *)(param_1 + 0x28),param_3,*(undefined4 *)(param_1 + 0x50)
              );
  iVar1 = *(int *)(param_2 + 0xc);
  iVar5 = 0;
  if (iVar1 != 0) {
    unaff_r6 = *(int **)(iVar1 + 8);
  }
  if (iVar1 == 0) {
    unaff_r6 = (int *)0x0;
  }
  iVar1 = FUN_4a144cb0(uVar6,*(undefined4 *)(param_1 + 0x44));
  *unaff_r6 = iVar1 + *unaff_r6;
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_2 + 0xc) + 8);
  }
  iVar2 = FUN_4a144cb8(uVar6,*(undefined4 *)(param_1 + 0x4c));
  *(int *)(iVar1 + 4) = iVar2 + *(int *)(iVar1 + 4);
  if (*(int *)(param_2 + 0xc) == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = *(undefined4 **)(*(int *)(param_2 + 0xc) + 8);
  }
  uVar4 = FUN_4a1457cc(uVar6,*puVar3);
  if (*(int *)(param_2 + 0xc) == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = *(undefined4 **)(*(int *)(param_2 + 0xc) + 8);
  }
  *puVar3 = uVar4;
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_2 + 0xc) + 8);
  }
  uVar6 = FUN_4a1457d8(uVar6,*(undefined4 *)(iVar1 + 4));
  if (*(int *)(param_2 + 0xc) != 0) {
    iVar5 = *(int *)(*(int *)(param_2 + 0xc) + 8);
  }
  *(undefined4 *)(iVar5 + 4) = uVar6;
  return;
}



// Address: 4a1465b8

bool FUN_4a1465b8(int param_1)

{
  return *(int *)(param_1 + 0x3c) == 2;
}



// Address: 4a1465cc

undefined4 FUN_4a1465cc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x28);
  iVar2 = *(int *)(*(int *)(param_1 + 0x24) + 0x520);
  iVar4 = *(int *)(iVar2 + 0x50);
  if (iVar3 < iVar4) {
    iVar4 = *(int *)(iVar2 + 0x54);
    iVar2 = 0;
    if (iVar4 != 0) {
      iVar2 = *(int *)(iVar4 + 8);
    }
    iVar2 = iVar2 + iVar3 * 100;
  }
  else {
    uVar1 = FUN_4a0642fc();
    iVar2 = FUN_4a134d90(uVar1,iVar3 - iVar4);
  }
  return *(undefined4 *)(iVar2 + 0x30);
}



// Address: 4a1465dc

undefined4 FUN_4a1465dc(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((*(uint *)(param_1 + 0x34) & 0x800000) == 0) {
    iVar1 = 1 - *(uint *)(param_1 + 100);
    if (1 < *(uint *)(param_1 + 100)) {
      iVar1 = 0;
    }
    if ((iVar1 == 0) &&
       (uVar2 = FUN_4a145784(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                             *(undefined4 *)(param_1 + 0x28)),
       (1 << (uVar2 & 0xff)) + -1 <= *(int *)(param_1 + 100))) {
      return 0;
    }
  }
  return 1;
}



// Address: 4a146640

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_4a146640(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  undefined *apuStack_88 [2];
  int iStack_80;
  int iStack_7c;
  int iStack_74;
  int iStack_70;
  undefined *apuStack_6c [2];
  int iStack_64;
  uint uStack_58;
  int iStack_54;
  uint uStack_50;
  int local_4c;
  undefined *local_48;
  undefined4 local_44;
  undefined *puStack_40;
  undefined *puStack_3c;
  undefined *puStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  local_44 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
  local_48 = PTR_DAT_4a146a88;
  iStack_34 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  iStack_28 = param_4;
  local_4c = FUN_4a145784(local_44,*(undefined4 *)(param_1 + 0x28));
  if (local_4c < 1) {
    return 0xffffffff;
  }
  uStack_50 = 0xffffffff;
  iStack_54 = *(int *)PTR_DAT_4a146a8c;
  uStack_58 = 0;
  puStack_38 = PTR_PTR_4a146a90;
  puStack_3c = PTR_PTR_4a146a94;
  puStack_40 = PTR_PTR_4a146a98;
  do {
    if ((iStack_28 == 0) || ((*(uint *)(param_1 + 100) & 1 << (uStack_58 & 0xff)) == 0)) {
      puVar2 = (undefined4 *)FUN_4a0c6bc0(apuStack_6c);
      *puVar2 = puStack_38;
      puVar2[2] = *(undefined4 *)(local_48 + 8);
      piVar9 = *(int **)(local_48 + 0xc);
      puVar2[3] = piVar9;
      if (piVar9 != (int *)0x0) {
        (**(code **)(*piVar9 + 0xc))();
      }
      *puVar2 = puStack_3c;
      apuStack_88[0] = *(undefined **)(param_1 + 0x50);
      uVar11 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
      FUN_4a144cc0(uVar11,puVar2,*(undefined4 *)(param_1 + 0x28),uStack_58);
      piVar9 = (int *)0x0;
      if (puVar2[3] != 0) {
        piVar9 = *(int **)(puVar2[3] + 8);
      }
      iVar3 = FUN_4a144cb0(uVar11,*(undefined4 *)(param_1 + 0x44));
      *piVar9 = iVar3 + *piVar9;
      if (puVar2[3] == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(puVar2[3] + 8);
      }
      iVar4 = FUN_4a144cb8(uVar11,*(undefined4 *)(param_1 + 0x4c));
      *(int *)(iVar3 + 4) = iVar4 + *(int *)(iVar3 + 4);
      if (puVar2[3] == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = *(undefined4 **)(puVar2[3] + 8);
      }
      uVar6 = FUN_4a1457cc(uVar11,*puVar5);
      if (puVar2[3] == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = *(undefined4 **)(puVar2[3] + 8);
      }
      *puVar5 = uVar6;
      if (puVar2[3] == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(puVar2[3] + 8);
      }
      uVar11 = FUN_4a1457d8(uVar11,*(undefined4 *)(iVar3 + 4));
      iVar3 = iStack_64;
      if (puVar2[3] == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(puVar2[3] + 8);
      }
      *(undefined4 *)(iVar4 + 4) = uVar11;
      apuStack_6c[0] = puStack_3c;
      iVar4 = FUN_4a0bcc84(apuStack_6c);
      if (iVar4 != 0) {
        iVar10 = 0;
        if (0 < iVar3) {
          do {
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar3);
          if (iVar4 == 0) goto LAB_4a14683c;
        }
        FUN_4a14f21c();
      }
LAB_4a14683c:
      FUN_4a0c6bf4(apuStack_6c);
      iVar3 = *(int *)(local_48 + 0xc);
      if (iVar3 == 0) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9 = *(int **)(iVar3 + 8);
      }
      iStack_70 = *piVar9;
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar3 + 8);
      }
      iStack_74 = *(int *)(iVar3 + 4);
      apuStack_88[0] = *(undefined **)(param_1 + 0x4c);
      iVar3 = FUN_4a145588(local_44,iStack_70,iStack_74,*(undefined4 *)(param_1 + 0x44));
      if (iVar3 != 0) {
        if ((iStack_28 != 0) && ((*(uint *)(param_1 + 0x34) & 0x800000) == 0)) {
          iVar3 = FUN_4a144cb0(local_44,iStack_70);
          iVar4 = FUN_4a144cb8(local_44,iStack_74);
          bVar1 = false;
          FUN_4a110aac(apuStack_88,*(undefined4 *)(param_1 + 0x20));
          for (iVar10 = 0; iVar7 = iStack_80, iVar10 < iStack_80; iVar10 = iVar10 + 1) {
            if (bVar1) goto LAB_4a14694c;
            iVar7 = 0;
            if (iStack_7c != 0) {
              iVar7 = *(int *)(iStack_7c + 8);
            }
            iVar7 = *(int *)(iVar7 + iVar10 * 4);
            if (iVar7 != param_5) {
              iVar8 = FUN_4a144cb0(local_44,*(undefined4 *)(iVar7 + 0x44));
              iVar7 = FUN_4a144cb8(local_44,*(undefined4 *)(iVar7 + 0x4c));
              if (iVar8 == iVar3 && iVar7 == iVar4) {
                bVar1 = true;
              }
            }
          }
          if (bVar1) {
LAB_4a14694c:
            apuStack_88[0] = puStack_40;
            iVar3 = FUN_4a0bcc84(apuStack_88);
            if (iVar3 != 0) {
              iVar4 = 0;
              if (0 < iVar7) {
                do {
                  iVar4 = iVar4 + 1;
                } while (iVar4 < iVar7);
                if (iVar3 == 0) goto LAB_4a146990;
              }
              FUN_4a14f21c();
            }
LAB_4a146990:
            FUN_4a0c6bf4(apuStack_88);
            goto LAB_4a146a60;
          }
          apuStack_88[0] = puStack_40;
          iVar3 = FUN_4a0bcc84(apuStack_88);
          if (iVar3 != 0) {
            iVar4 = 0;
            if (0 < iVar7) {
              do {
                iVar4 = iVar4 + 1;
              } while (iVar4 < iVar7);
              if (iVar3 == 0) goto LAB_4a1469e0;
            }
            FUN_4a14f21c();
          }
LAB_4a1469e0:
          FUN_4a0c6bf4(apuStack_88);
        }
        if ((param_5 == 0) || (iVar3 = FUN_4a135294(param_5,0,iStack_70,iStack_74), iVar3 != 0)) {
          iVar3 = iStack_30 - iStack_70;
          if (iStack_30 - iStack_70 <= iStack_70 - iStack_30) {
            iVar3 = iStack_70 - iStack_30;
          }
          iVar4 = iStack_2c - iStack_74;
          if (iStack_2c - iStack_74 <= iStack_74 - iStack_2c) {
            iVar4 = iStack_74 - iStack_2c;
          }
          if (iVar4 + iVar3 < iStack_54) {
            uStack_50 = uStack_58;
            iStack_54 = iVar4 + iVar3;
          }
        }
      }
    }
LAB_4a146a60:
    uStack_58 = uStack_58 + 1;
    if (local_4c <= (int)uStack_58) {
      return uStack_50;
    }
  } while( true );
}



// Address: 4a146a9c

undefined4 FUN_4a146a9c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// Address: 4a146aa4

undefined4 FUN_4a146aa4(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                       *(undefined4 *)(param_1 + 0x28));
  if (*(char *)(iVar1 + 8) == '\x17') {
    piVar3 = (int *)0x0;
    if (*(int *)(param_1 + 0x90) == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = *(int **)(*(int *)(param_1 + 0x90) + 8);
    }
    if ((*(uint *)(*piVar2 + 0xc) & 2) == 0) {
      if (*(int *)(param_1 + 0xa0) < 1) {
        iVar1 = 0;
      }
      else {
        if (*(int *)(param_1 + 0xa4) != 0) {
          piVar3 = *(int **)(*(int *)(param_1 + 0xa4) + 8);
        }
        iVar1 = *piVar3;
      }
      if (((*(uint *)(*(int *)(iVar1 + 0x40) + 0x24) & 2) == 0) && (*(int *)(param_1 + 0x3c) != 1))
      {
        return 1;
      }
    }
  }
  else if (*(int *)(param_1 + 0x3c) == 0) {
    return 1;
  }
  return 0;
}



// Address: 4a146b58

bool FUN_4a146b58(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0x34) & param_2) != 0;
}



// Address: 4a146b68

int FUN_4a146b68(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  
  uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
  uVar1 = FUN_4a144cb0(uVar5,*(undefined4 *)(param_1 + 0x44));
  iVar2 = FUN_4a144cb8(uVar5,*(undefined4 *)(param_1 + 0x4c));
  iVar3 = FUN_4a1458ac(uVar5,uVar1);
  iVar4 = *(int *)(*(int *)(param_1 + 0x24) + 0x520);
  bVar6 = -1 < iVar3;
  bVar7 = iVar3 == 0;
  if (bVar6) {
    iVar2 = *(int *)(iVar4 + 0x3d4);
    bVar7 = iVar2 == iVar3;
  }
  if (bVar7 || (!bVar6 || iVar2 < iVar3)) {
    iVar4 = 0;
  }
  if (!bVar7 && (bVar6 && iVar3 <= iVar2)) {
    iVar2 = 0;
    if (*(int *)(iVar4 + 0x3d8) != 0) {
      iVar2 = *(int *)(*(int *)(iVar4 + 0x3d8) + 8);
    }
    return *(int *)(iVar2 + iVar3 * 4);
  }
  return iVar4;
}



// Address: 4a146bb8

void FUN_4a146bb8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_4a161570(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)FUN_4a0c503c();
  *puVar1 = PTR_PTR_4a146be4;
  return;
}



// Address: 4a146be8

undefined4 FUN_4a146be8(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < *(int *)(param_1 + 0xa0)) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0xa4) != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0xa4) + 8);
    }
    return *(undefined4 *)(iVar1 + param_2 * 4);
  }
  return 0;
}



// Address: 4a146c0c

undefined4 FUN_4a146c0c(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)0x0;
  if (0 < *(int *)(param_1 + 0xa0)) {
    if (*(int *)(param_1 + 0xa4) != 0) {
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0xa4) + 8);
    }
    return *puVar1;
  }
  return 0;
}



// Address: 4a146c34

undefined4 FUN_4a146c34(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = FUN_4a143ac8(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520),
                       *(undefined4 *)(param_1 + 0x28));
  if (*(char *)(iVar1 + 8) == '\x17') {
    piVar3 = (int *)0x0;
    if (*(int *)(param_1 + 0xa0) < 1) {
      iVar1 = 0;
    }
    else {
      if (*(int *)(param_1 + 0xa4) == 0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = *(int **)(*(int *)(param_1 + 0xa4) + 8);
      }
      iVar1 = *piVar2;
    }
    if ((*(uint *)(*(int *)(iVar1 + 0x40) + 0x24) & 2) != 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x90) != 0) {
      piVar3 = *(int **)(*(int *)(param_1 + 0x90) + 8);
    }
    if ((*(uint *)(*piVar3 + 0xc) & 2) != 0) {
      return 0;
    }
  }
  if (*(int *)(param_1 + 0x3c) != 1) {
    return 0;
  }
  return 1;
}



// Address: 4a146cd0

undefined1 FUN_4a146cd0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x56);
}



// Address: 4a146cd8

int FUN_4a146cd8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x520);
  uVar2 = FUN_4a144cb0(uVar4,*(undefined4 *)(param_1 + 0x44));
  uVar3 = FUN_4a144cb8(uVar4,*(undefined4 *)(param_1 + 0x4c));
  uVar1 = FUN_4a142f2c(uVar4,uVar2,uVar3,param_4,in_lr);
  return (uVar1 & 0xf) - 1;
}



// Address: 4a146d20

undefined4 * FUN_4a146d20(void)

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
  uVar2 = FUN_4a04d4d0(0,&DAT_4a146d38,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a146d40

bool FUN_4a146d40(int param_1)

{
  return *(int *)(param_1 + 0x1c0) == 0x10;
}



// Address: 4a146d54

int FUN_4a146d54(int param_1)

{
  int iVar1;
  
  iVar1 = 1 - *(uint *)(param_1 + 0x1d8);
  if (1 < *(uint *)(param_1 + 0x1d8)) {
    iVar1 = 0;
  }
  return iVar1;
}



// Address: 4a146d64

bool FUN_4a146d64(int param_1)

{
  return *(int *)(param_1 + 0x1d8) == 1;
}



// Address: 4a146d74

undefined4 FUN_4a146d74(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2f4);
}



// Address: 4a146d7c

bool FUN_4a146d7c(int param_1)

{
  return *(int *)(param_1 + 0x294) != 0;
}



// Address: 4a146d8c

bool FUN_4a146d8c(int param_1)

{
  return 20000 < *(int *)(param_1 + 0x768);
}



// Address: 4a146da8

/* WARNING: Removing unreachable block (ram,0x4a1729ec) */

uint FUN_4a146da8(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = 0;
  iVar9 = 0;
  do {
    iVar2 = FUN_4a141a80(*(undefined4 *)(param_1 + 0x24),iVar9);
    if (iVar2 != -1) {
      uVar3 = FUN_4a140298(*(undefined4 *)(param_1 + 0x24),iVar2);
      iVar2 = FUN_4a06bf88(*(int *)(param_1 + 0x20) + 0x278,uVar3,3);
      if (iVar10 < iVar2) {
        iVar10 = iVar2;
      }
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 6);
  iVar9 = *(int *)(param_1 + 0x20) + 0x128;
  uVar3 = FUN_4a0d478c(0,0x3f800000,*(undefined4 *)(param_1 + 0x220));
  uVar4 = FUN_4a09f974(iVar9,0x174);
  uVar5 = FUN_4a171fac(iVar10 + 9);
  FUN_4a17211c(uVar5,uVar3);
  FUN_4a171e1c();
  uVar3 = FUN_4a171fac();
  uVar5 = FUN_4a09f974(iVar9,0x173);
  uVar6 = FUN_4a09f974(iVar9,0x172);
  uVar5 = FUN_4a171a94(uVar6,uVar5);
  uVar3 = FUN_4a171a94(uVar5,uVar3);
  uVar7 = FUN_4a171a94(uVar3,uVar4);
  uVar1 = (int)uVar7 >> 0x17;
  uVar8 = uVar7 << 8;
  if (uVar1 != 0) {
    uVar8 = uVar8 | 0x80000000;
  }
  if ((int)uVar1 < 0) {
    if (uVar7 < 0xcf000001) {
      if ((uVar1 & 0xff) == 0) {
        uVar8 = uVar8 & 0x7fffffff;
      }
      return -(uVar8 >> (0x9e - (uVar1 & 0xff) & 0xff));
    }
  }
  else if (uVar1 < 0x9f && 0x9e - uVar1 != 0) {
    return uVar8 >> (0x9e - uVar1 & 0xff);
  }
  uVar8 = uVar7 * 2;
  if (uVar8 < 0xff000001) {
    if (uVar8 != 0xff000000) {
      return ~((int)uVar7 >> 0x1f) ^ 0x80000000;
    }
    return ~((int)uVar7 >> 0x1f) ^ 0x80000000;
  }
  uVar1 = DAT_4a171e8c & 0xf;
  if (uVar1 == 9) {
    if ((DAT_4a171e8c & 0x100000) != 0) {
      return 8;
    }
    return 0;
  }
  if (uVar1 == 10) {
    uVar8 = DAT_4a171bb0;
    if ((DAT_4a171e8c & 0x40) != 0) {
      uVar8 = 0x80000000;
    }
    return uVar8;
  }
  if (uVar1 != 8) {
    return DAT_4a171bb0;
  }
  if ((DAT_4a171e8c & 0x40) != 0) {
    return 0;
  }
  if ((DAT_4a171e8c & 0x10) != 0) {
    return DAT_4a171bb0 << 0x1d;
  }
  return uVar8 & 0xff000000 | DAT_4a171bb0 >> 0x1d | (uVar8 & 0xffffff) << 3;
}



// Address: 4a146e94

undefined4 FUN_4a146e94(int param_1)

{
  return *(undefined4 *)(param_1 + 0x674);
}



// Address: 4a146ea4

bool FUN_4a146ea4(int param_1)

{
  return *(int *)(param_1 + 0x1d8) == 2;
}



// Address: 4a146eb8

undefined4 FUN_4a146eb8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x26c);
}



// Address: 4a146ed0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a146ed0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0xc) {
    return;
  }
  uVar1 = FUN_4a0678ec();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a146ef4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a146ef4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0xc) {
    return;
  }
  uVar1 = FUN_4a068b80();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a146f18

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a146f18(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0xc) {
    return;
  }
  uVar1 = FUN_4a06f5c4();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a146f3c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a146f3c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 + -0xc == 0) {
    return;
  }
  uVar1 = FUN_4a077900(param_1 + -0xc,3,0);
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a146f70

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a146f70(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0xc) {
    return;
  }
  uVar1 = FUN_4a082878();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a146f94

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a146f94(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0xc) {
    return;
  }
  uVar1 = FUN_4a089dd0();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a146fb8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a146fb8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0xc) {
    return;
  }
  uVar1 = FUN_4a08cdc0();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a146fdc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a146fdc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0xc) {
    return;
  }
  uVar1 = FUN_4a08c0e0();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147000

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147000(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0xc) {
    return;
  }
  uVar1 = thunk_FUN_4a0c6bf4();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147024

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147024(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0xc) {
    return;
  }
  uVar1 = FUN_4a0916c4();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147048

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147048(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0xc) {
    return;
  }
  uVar1 = FUN_4a095414();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a14706c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a14706c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0xc) {
    return;
  }
  uVar1 = FUN_4a096c74();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147090

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147090(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0xc) {
    return;
  }
  uVar1 = FUN_4a0991a0();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a1470b4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1470b4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0xc) {
    return;
  }
  uVar1 = FUN_4a0bb944();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a1470d8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1470d8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0xc) {
    return;
  }
  uVar1 = FUN_4a0cb530();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a1470fc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1470fc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0xc) {
    return;
  }
  uVar1 = FUN_4a0cfc1c();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147120

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147120(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0xc) {
    return;
  }
  uVar1 = FUN_4a0d322c();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147144

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147144(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0xc) {
    return;
  }
  uVar1 = FUN_4a0e4400();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147168

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147168(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0xc) {
    return;
  }
  uVar1 = FUN_4a0f9f80();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a14718c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a14718c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0xc) {
    return;
  }
  uVar1 = thunk_FUN_4a0c6bf4();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a1471b0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1471b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 + -0xc == 0) {
    return;
  }
  uVar1 = FUN_4a10a3fc(param_1 + -0xc,3,0);
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a1471e4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1471e4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0xc) {
    return;
  }
  uVar1 = FUN_4a128d38();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147208

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147208(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0xc) {
    return;
  }
  uVar1 = FUN_4a1343a4();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a14722c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a14722c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0xc) {
    return;
  }
  uVar1 = FUN_4a0c6bf4();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147250

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147250(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x10) {
    return;
  }
  uVar1 = FUN_4a0678ec();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147274

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147274(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x10) {
    return;
  }
  uVar1 = FUN_4a06f5c4();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147298

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147298(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 + -0x10 == 0) {
    return;
  }
  uVar1 = FUN_4a077900(param_1 + -0x10,3,0);
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a1472cc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1472cc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x10) {
    return;
  }
  uVar1 = FUN_4a082878();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a1472f0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1472f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x10) {
    return;
  }
  uVar1 = FUN_4a089dd0();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147314

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147314(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x10) {
    return;
  }
  uVar1 = FUN_4a08cdc0();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147338

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147338(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x10) {
    return;
  }
  uVar1 = FUN_4a08c0e0();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a14735c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a14735c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x10) {
    return;
  }
  uVar1 = thunk_FUN_4a0c6bf4();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147380

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147380(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x10) {
    return;
  }
  uVar1 = FUN_4a0916c4();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a1473a4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1473a4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x10) {
    return;
  }
  uVar1 = FUN_4a095414();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a1473c8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1473c8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x10) {
    return;
  }
  uVar1 = FUN_4a096c74();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a1473ec

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1473ec(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x10) {
    return;
  }
  uVar1 = FUN_4a0991a0();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147410

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147410(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x10) {
    return;
  }
  uVar1 = FUN_4a0cb530();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147434

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147434(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x10) {
    return;
  }
  uVar1 = FUN_4a0cfc1c();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147458

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147458(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x10) {
    return;
  }
  uVar1 = FUN_4a0d322c();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a14747c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a14747c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x10) {
    return;
  }
  uVar1 = FUN_4a0e4400();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a1474a0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1474a0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x10) {
    return;
  }
  uVar1 = FUN_4a0f9f80();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a1474c4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1474c4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x10) {
    return;
  }
  uVar1 = thunk_FUN_4a0c6bf4();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a1474e8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1474e8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 + -0x10 == 0) {
    return;
  }
  uVar1 = FUN_4a10a3fc(param_1 + -0x10,3,0);
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a14751c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a14751c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x10) {
    return;
  }
  uVar1 = FUN_4a128d38();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147540

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147540(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x10) {
    return;
  }
  uVar1 = FUN_4a1343a4();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147564

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147564(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x10) {
    return;
  }
  uVar1 = FUN_4a0c6bf4();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147588

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147588(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x14) {
    return;
  }
  uVar1 = FUN_4a0678ec();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a1475ac

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1475ac(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x14) {
    return;
  }
  uVar1 = FUN_4a06f5c4();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a1475d0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1475d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 + -0x14 == 0) {
    return;
  }
  uVar1 = FUN_4a077900(param_1 + -0x14,3,0);
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147604

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147604(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x14) {
    return;
  }
  uVar1 = FUN_4a082878();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147628

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147628(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x14) {
    return;
  }
  uVar1 = FUN_4a089dd0();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a14764c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a14764c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x14) {
    return;
  }
  uVar1 = FUN_4a08cdc0();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147670

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147670(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x14) {
    return;
  }
  uVar1 = FUN_4a08c0e0();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147694

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147694(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x14) {
    return;
  }
  uVar1 = thunk_FUN_4a0c6bf4();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a1476b8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1476b8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x14) {
    return;
  }
  uVar1 = FUN_4a0916c4();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a1476dc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1476dc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x14) {
    return;
  }
  uVar1 = FUN_4a095414();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147700

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147700(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x14) {
    return;
  }
  uVar1 = FUN_4a096c74();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147724

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147724(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x14) {
    return;
  }
  uVar1 = FUN_4a0991a0();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147748

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147748(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x14) {
    return;
  }
  uVar1 = FUN_4a0cb530();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a14776c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a14776c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x14) {
    return;
  }
  uVar1 = FUN_4a0cfc1c();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147790

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147790(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x14) {
    return;
  }
  uVar1 = FUN_4a0d322c();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a1477b4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1477b4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x14) {
    return;
  }
  uVar1 = FUN_4a0e4400();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a1477d8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1477d8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x14) {
    return;
  }
  uVar1 = FUN_4a0f9f80();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a1477fc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1477fc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x14) {
    return;
  }
  uVar1 = thunk_FUN_4a0c6bf4();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147820

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147820(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 + -0x14 == 0) {
    return;
  }
  uVar1 = FUN_4a0ffcc4(param_1 + -0x14,3,0);
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147854

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147854(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 + -0x14 == 0) {
    return;
  }
  uVar1 = FUN_4a10a3fc(param_1 + -0x14,3,0);
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147888

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147888(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x14) {
    return;
  }
  uVar1 = FUN_4a128d38();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a1478ac

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1478ac(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x14) {
    return;
  }
  uVar1 = FUN_4a1343a4();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a1478d0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1478d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x14) {
    return;
  }
  uVar1 = FUN_4a0c6bf4();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a1478f4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1478f4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x18) {
    return;
  }
  uVar1 = FUN_4a0678ec();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147918

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147918(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x18) {
    return;
  }
  uVar1 = FUN_4a06f5c4();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a14793c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a14793c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 + -0x18 == 0) {
    return;
  }
  uVar1 = FUN_4a077900(param_1 + -0x18,3,0);
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147970

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147970(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x18) {
    return;
  }
  uVar1 = FUN_4a082878();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147994

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147994(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x18) {
    return;
  }
  uVar1 = FUN_4a089dd0();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a1479b8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1479b8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x18) {
    return;
  }
  uVar1 = FUN_4a08cdc0();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a1479dc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a1479dc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x18) {
    return;
  }
  uVar1 = FUN_4a08c0e0();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147a00

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147a00(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x18) {
    return;
  }
  uVar1 = thunk_FUN_4a0c6bf4();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147a24

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147a24(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x18) {
    return;
  }
  uVar1 = FUN_4a0916c4();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147a48

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147a48(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x18) {
    return;
  }
  uVar1 = FUN_4a096c74();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147a6c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147a6c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x18) {
    return;
  }
  uVar1 = FUN_4a0991a0();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147a90

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147a90(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x18) {
    return;
  }
  uVar1 = FUN_4a0cb530();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147ab4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147ab4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x18) {
    return;
  }
  uVar1 = FUN_4a0cfc1c();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147ad8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147ad8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x18) {
    return;
  }
  uVar1 = FUN_4a0d322c();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147afc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147afc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x18) {
    return;
  }
  uVar1 = FUN_4a0f9f80();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147b20

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147b20(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x18) {
    return;
  }
  uVar1 = thunk_FUN_4a0c6bf4();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147b44

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147b44(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 + -0x18 == 0) {
    return;
  }
  uVar1 = FUN_4a0ffcc4(param_1 + -0x18,3,0);
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147b78

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147b78(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 + -0x18 == 0) {
    return;
  }
  uVar1 = FUN_4a10a3fc(param_1 + -0x18,3,0);
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147bac

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147bac(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x18) {
    return;
  }
  uVar1 = FUN_4a128d38();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147bd0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147bd0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x18) {
    return;
  }
  uVar1 = FUN_4a1343a4();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147bf4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147bf4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x18) {
    return;
  }
  uVar1 = FUN_4a0c6bf4();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147c20

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147c20(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x1c) {
    return;
  }
  uVar1 = FUN_4a0678ec();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147c44

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147c44(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x1c) {
    return;
  }
  uVar1 = FUN_4a06f5c4();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147c68

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147c68(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 + -0x1c == 0) {
    return;
  }
  uVar1 = FUN_4a077900(param_1 + -0x1c,3,0);
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147c9c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147c9c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x1c) {
    return;
  }
  uVar1 = FUN_4a082878();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147cc0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147cc0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x1c) {
    return;
  }
  uVar1 = FUN_4a089dd0();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147ce4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147ce4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x1c) {
    return;
  }
  uVar1 = FUN_4a08cdc0();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147d08

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147d08(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x1c) {
    return;
  }
  uVar1 = FUN_4a08c0e0();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147d2c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147d2c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x1c) {
    return;
  }
  uVar1 = thunk_FUN_4a0c6bf4();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147d50

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147d50(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x1c) {
    return;
  }
  uVar1 = FUN_4a0916c4();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147d74

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147d74(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x1c) {
    return;
  }
  uVar1 = FUN_4a096c74();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147d98

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147d98(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x1c) {
    return;
  }
  uVar1 = FUN_4a0991a0();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147dbc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147dbc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x1c) {
    return;
  }
  uVar1 = FUN_4a0cb530();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147de0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147de0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x1c) {
    return;
  }
  uVar1 = FUN_4a0cfc1c();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147e04

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147e04(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x1c) {
    return;
  }
  uVar1 = FUN_4a0d322c();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147e28

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147e28(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x1c) {
    return;
  }
  uVar1 = thunk_FUN_4a0c6bf4();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147e4c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147e4c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 + -0x1c == 0) {
    return;
  }
  uVar1 = FUN_4a0ffcc4(param_1 + -0x1c,3,0);
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147e80

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147e80(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 + -0x1c == 0) {
    return;
  }
  uVar1 = FUN_4a10a3fc(param_1 + -0x1c,3,0);
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147eb4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147eb4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x1c) {
    return;
  }
  uVar1 = FUN_4a128d38();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147ed8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147ed8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x1c) {
    return;
  }
  uVar1 = FUN_4a1343a4();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a147efc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a147efc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x1c) {
    return;
  }
  uVar1 = FUN_4a0c6bf4();
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}




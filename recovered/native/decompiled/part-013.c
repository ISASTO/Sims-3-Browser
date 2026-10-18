/* AUTOMATED DECOMPILER OUTPUT. Not original source, not a buildable game.
 * Function boundaries, types, indirect calls, and data still require validation. */

// Address: 4a0b303c

void FUN_4a0b303c(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = PTR_PTR_4a0b30e0;
  thunk_FUN_4a161530(param_1[0x69]);
  param_1[0x69] = 0;
  param_1[0x6d] = 0;
  piVar2 = (int *)param_1[0x6f];
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  iVar1 = FUN_4a0c6bf4(param_1 + 0x4f);
  iVar1 = FUN_4a0c6bf4(iVar1 + -0x48);
  iVar1 = FUN_4a0c6bf4(iVar1 + -0x48);
  iVar1 = FUN_4a0c6bf4(iVar1 + -0x48);
  iVar1 = FUN_4a0c6bf4(iVar1 + -0x48);
  thunk_FUN_4a00191c(*(undefined4 *)(iVar1 + -8),PTR_LAB_4a0b30e4);
  *(undefined **)(iVar1 + -0x1c) = PTR_PTR_4a0c0674;
  *(undefined4 *)(iVar1 + -0x18) = 0xffffffff;
  return;
}



// Address: 4a0b30e8

void FUN_4a0b30e8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0ab8cc(param_1,8,param_3,param_2);
  *puVar1 = PTR_PTR_4a0b3108;
  return;
}



// Address: 4a0b310c

undefined4 * FUN_4a0b310c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0ab9c0();
  *puVar1 = PTR_PTR_4a0b3134;
  FUN_4a0ab5e0(puVar1,8);
  return puVar1;
}



// Address: 4a0b3194

/* WARNING: Removing unreachable block (ram,0x4a1729d8) */
/* WARNING: Removing unreachable block (ram,0x4a1729ec) */
/* WARNING: Removing unreachable block (ram,0x4a1728bc) */
/* WARNING: Removing unreachable block (ram,0x4a1728ac) */
/* WARNING: Removing unreachable block (ram,0x4a1729e0) */
/* WARNING: Removing unreachable block (ram,0x4a17289c) */

ulonglong FUN_4a0b3194(int param_1,int param_2)

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
  
  uVar1 = FUN_4a171fac(param_2 - *(int *)(param_1 + 0x3c));
  uVar2 = FUN_4a17211c(uVar1,*(undefined4 *)(param_1 + 0x34));
  uVar5 = *(uint *)(param_1 + 0x38);
  if ((int)(uVar2 ^ uVar5) < 0) {
    uVar5 = uVar5 ^ 0x80000000;
    if (uVar2 < uVar5) {
      uVar4 = uVar2 - uVar5 ^ 0x80000000;
      uVar2 = uVar2 - uVar4;
      uVar5 = uVar5 + uVar4;
    }
    uVar4 = uVar2 >> 0x17;
    uVar7 = uVar4 - (uVar5 >> 0x17);
    if ((uVar5 & 0x7f800000) != 0 && (uVar4 & 0xff) != 0xff) {
      uVar3 = uVar2 << 8 | 0x80000000;
      uVar5 = uVar5 << 8;
      uVar8 = uVar3 - ((uVar5 | 0x80000000) >> (uVar7 & 0xff));
      if ((int)uVar8 < 0) {
        bVar10 = (bool)((byte)(uVar8 >> 7) & 1);
        uVar2 = (uVar8 >> 8) + (uVar4 - 1) * 0x800000 + (uint)bVar10;
        if (!bVar10) {
          return CONCAT44(uVar5,uVar2) | 0x8000000000000000;
        }
        if ((uVar8 & 0x7f) != 0) {
          return CONCAT44(uVar5,uVar2) | 0x8000000000000000;
        }
      }
      else {
        bVar9 = (uVar4 & 0xfe) == 0;
        bVar10 = false;
        if (!bVar9) {
          uVar3 = uVar8 * 2;
          bVar10 = (int)uVar3 < 0;
          bVar9 = uVar3 == 0;
        }
        if (!bVar10) {
          if (bVar9) {
            if (uVar8 >> 7 == 0) {
              return (ulonglong)uVar5 << 0x20 | 0x8000000000000000;
            }
            return CONCAT44(uVar5,(uVar2 >> 0x1f) << 0x1f) | 0x8000000000000000;
          }
          if (uVar3 == 0) {
            return (ulonglong)uVar5 << 0x20 | 0x8000000000000000;
          }
          uVar7 = uVar3;
          uVar8 = uVar4;
          if (uVar3 >> 0x17 == 0) {
            uVar7 = uVar3 << 8;
            uVar8 = uVar4 - 8;
            if ((uVar3 & 0xffffff) >> 0xf == 0) {
              uVar7 = uVar3 << 0x10;
              uVar8 = uVar4 - 0x10;
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
          if ((uVar4 ^ uVar8) >> 8 == 0) {
            return CONCAT44(uVar5,uVar7 + uVar8 * 0x800000) | 0x8000000000000000;
          }
          return CONCAT44(uVar5,(uVar2 >> 0x1f) << 0x1f) | 0x8000000000000000;
        }
        bVar10 = (bool)((byte)(uVar3 >> 7) & 1);
        uVar2 = ((int)uVar3 >> 8) + uVar4 * 0x800000 + (uint)bVar10;
        if (!bVar10) {
          return CONCAT44(uVar5,uVar2) | 0x8000000000000000;
        }
        if ((uVar8 & 0x3f) != 0) {
          return CONCAT44(uVar5,uVar2) | 0x8000000000000000;
        }
      }
      iVar6 = (uVar5 | 0x80000000) << (0x20 - uVar7 & 0xff);
      if (iVar6 == 0) {
        uVar2 = uVar2 & 0xfffffffe;
      }
      else {
        uVar2 = uVar2 - 1;
      }
      return CONCAT44(iVar6,uVar2);
    }
    if ((uVar4 & 0xff) != 0xff) {
      if ((uVar2 & 0x7f800000) == 0) {
        uVar2 = 0;
      }
      return CONCAT44(uVar5,uVar2);
    }
    uVar4 = uVar2 * 2;
    uVar7 = 0x4000002;
    if (uVar5 << 1 < 0xff000001 && uVar4 < 0xff000001) {
      if (uVar4 == uVar5 * 2) {
        if ((int)(uVar2 ^ uVar5) < 0) {
          return CONCAT44(uVar5,uVar2);
        }
        return CONCAT44(uVar5,DAT_4a172724);
      }
      if (uVar4 == 0xff000000) {
        return CONCAT44(uVar5,uVar2);
      }
      return CONCAT44(uVar5,uVar5) ^ 0x80000000;
    }
LAB_4a171b9c:
    uVar7 = uVar7 & 0xf;
    if (uVar7 == 9) {
      return (ulonglong)uVar5 << 0x20;
    }
    if (uVar7 != 10) {
      if (uVar7 == 8) {
        return CONCAT44(uVar5,uVar5 & 0xff000000 | DAT_4a171ba4 >> 0x1d | (uVar5 & 0xffffff) << 3);
      }
      return CONCAT44(uVar5,DAT_4a171ba4);
    }
    return CONCAT44(uVar5,DAT_4a171ba4);
  }
  iVar6 = uVar2 - uVar5;
  if (uVar2 < uVar5) {
    uVar2 = uVar2 - iVar6;
    uVar5 = uVar5 + iVar6;
  }
  uVar4 = uVar2 >> 0x17;
  uVar7 = uVar4 - (uVar5 >> 0x17);
  if ((uVar5 & 0x7f800000) == 0 || (uVar4 & 0xff) == 0xff) {
    if ((uVar4 & 0xff) != 0xff) {
      if ((uVar2 & 0x7f800000) == 0) {
        uVar2 = uVar2 & 0x80000000;
      }
      return CONCAT44(uVar5,uVar2);
    }
    uVar4 = uVar2 * 2;
    uVar7 = 0x4000001;
    if (uVar5 << 1 < 0xff000001 && uVar4 < 0xff000001) {
      if (uVar4 == uVar5 * 2) {
        if (-1 < (int)(uVar2 ^ uVar5)) {
          return CONCAT44(uVar5,uVar2);
        }
        return CONCAT44(uVar5,DAT_4a171b98);
      }
      if (uVar4 == 0xff000000) {
        return CONCAT44(uVar5,uVar2);
      }
      return CONCAT44(uVar5,uVar5);
    }
    goto LAB_4a171b9c;
  }
  uVar3 = uVar2 << 8 | 0x80000000;
  uVar5 = uVar5 << 8;
  uVar2 = (uVar5 | 0x80000000) >> (uVar7 & 0xff);
  uVar8 = uVar3 + uVar2;
  if (CARRY4(uVar3,uVar2)) {
    uVar2 = uVar8 >> 1 | 0x80000000;
    bVar10 = (bool)((byte)(uVar2 >> 7) & 1);
    uVar2 = uVar2 >> 8;
    uVar4 = uVar2 + uVar4 * 0x800000 + (uint)bVar10;
    if (bVar10) {
      uVar2 = uVar8 & 0xff;
    }
    uVar3 = uVar4 * 2;
    if (uVar2 != 0) {
      if (uVar3 < 0xff000000) {
        return CONCAT44(uVar5,uVar4) | 0x8000000000000000;
      }
      goto LAB_4a171b0c;
    }
  }
  else {
    bVar10 = (bool)((byte)(uVar8 >> 7) & 1);
    uVar4 = (uVar8 >> 8) + (uVar4 - 1) * 0x800000 + (uint)bVar10;
    if (!bVar10) {
      return CONCAT44(uVar5,uVar4) | 0x8000000000000000;
    }
    uVar3 = uVar4 * 2;
    if ((uVar8 & 0x7f) != 0) {
      bVar10 = 0xfeffffff < uVar3;
    }
    if (!bVar10) {
      return CONCAT44(uVar5,uVar4) | 0x8000000000000000;
    }
  }
  iVar6 = (uVar5 | 0x80000000) << (0x20 - uVar7 & 0xff);
  if (iVar6 == 0) {
    uVar4 = uVar4 & 0xfffffffe;
  }
  if (uVar3 < 0xff000000) {
    return CONCAT44(iVar6,uVar4);
  }
LAB_4a171b0c:
  uVar5 = uVar4 + 0xa0000000 >> 0x17;
  return CONCAT44(uVar5,(uVar5 | 0xff) << 0x17) | 0xff00000000;
}



// Address: 4a0b31bc

void FUN_4a0b31bc(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x3c) = param_3;
  return;
}



// Address: 4a0b31c8

void FUN_4a0b31c8(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  return;
}



// Address: 4a0b31dc

void FUN_4a0b31dc(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_4a171fac(param_3 - *(int *)(param_1 + 0x3c));
  uVar1 = FUN_4a17211c(uVar1,*(undefined4 *)(param_1 + 0x34));
  uVar1 = FUN_4a171a94(uVar1,*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x34) = param_2;
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(int *)(param_1 + 0x3c) = param_3;
  return;
}



// Address: 4a0b3218

void FUN_4a0b3218(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0b7654();
  *puVar1 = PTR_PTR_4a0b3250;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0x3f800000;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0x3f800000;
  puVar1[0xf] = 0;
  return;
}



// Address: 4a0b3270

void FUN_4a0b3270(int param_1)

{
  int local_8 [2];
  
  if (param_1 == 0) {
    return;
  }
  local_8[0] = param_1;
  (**(code **)(**(int **)(PTR_DAT_4a0bfd7c + 4) + 0x1c))(*(int **)(PTR_DAT_4a0bfd7c + 4),1,local_8);
  return;
}



// Address: 4a0b3318

undefined4 * FUN_4a0b3318(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = PTR_PTR_4a0b3370;
  piVar2 = (int *)param_1[1];
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  return param_1;
}



// Address: 4a0b3374

undefined4 FUN_4a0b3374(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  int *local_48;
  undefined1 auStack_40 [20];
  undefined4 local_2c;
  int local_28;
  
  local_28 = *(int *)(param_1 + 0x28);
  iVar10 = *(int *)(param_1 + 0x2c);
  uVar11 = *(undefined4 *)(param_1 + 0x30);
  iVar9 = local_28 * iVar10;
  uVar5 = thunk_FUN_4a161570(0x48);
  uStack_54 = param_3;
  uStack_50 = param_4;
  local_2c = FUN_4a0ad674(uVar5,local_28,iVar10,uVar11,param_2);
  puVar4 = PTR_PTR_4a0b38f8;
  puVar3 = PTR_PTR_4a0b38f4;
  puVar2 = PTR_PTR_4a0b38f0;
  switch(uVar11) {
  case 1:
    piVar6 = (int *)FUN_4a0c6bc0(&uStack_54);
    puVar4 = PTR_PTR_4a0b38fc;
    piVar6[2] = 0;
    piVar6[3] = 0;
    *piVar6 = (int)puVar4;
    if (0 < iVar9) {
      iVar10 = FUN_4a15e080(iVar9);
      if (iVar10 == 0) {
        iVar10 = FUN_4a1669a8();
      }
      iVar7 = 0;
      do {
        *(undefined1 *)(iVar10 + iVar7) = 0;
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar9);
      thunk_FUN_4a161570(0x18);
      puVar8 = (undefined4 *)FUN_4a0c0628();
      puVar8[4] = iVar9;
      puVar8[2] = iVar10;
      puVar8[3] = 1;
      *puVar8 = puVar2;
      *(undefined1 *)(puVar8 + 5) = 1;
      if (puVar8 != (undefined4 *)0x0) {
        (**(code **)(puVar2 + 0xc))(puVar8);
      }
      (**(code **)(*piVar6 + 0x1c))(piVar6);
      piVar6[2] = iVar9;
      piVar6[3] = (int)puVar8;
    }
    FUN_4a138d30(param_1,0,local_28,&uStack_54);
    puVar8 = (undefined4 *)FUN_4a0c6bc0(auStack_40);
    *puVar8 = puVar3;
    puVar8[2] = local_4c;
    puVar8[3] = local_48;
    if (local_48 != (int *)0x0) {
      (**(code **)(*local_48 + 0xc))();
    }
    *puVar8 = puVar4;
    FUN_4a0ad06c(local_2c,0,local_28,puVar8);
    FUN_4a16b6c0(auStack_40);
    FUN_4a16b6c0(&uStack_54);
    break;
  case 2:
    piVar6 = (int *)FUN_4a0c6bc0(&uStack_54);
    piVar6[2] = 0;
    piVar6[3] = 0;
    *piVar6 = (int)puVar4;
    if (0 < iVar9) {
      iVar10 = FUN_4a15e080(iVar9 * 2);
      if (iVar10 == 0) {
        iVar10 = FUN_4a1669a8();
      }
      iVar7 = 0;
      do {
        iVar1 = iVar7 * 2;
        iVar7 = iVar7 + 1;
        *(undefined2 *)(iVar10 + iVar1) = 0;
      } while (iVar7 < iVar9);
      thunk_FUN_4a161570(0x18);
      puVar8 = (undefined4 *)FUN_4a0c0628();
      puVar8[3] = 2;
      puVar8[4] = iVar9;
      puVar8[2] = iVar10;
      *puVar8 = puVar2;
      *(undefined1 *)(puVar8 + 5) = 1;
      if (puVar8 != (undefined4 *)0x0) {
        (**(code **)(puVar2 + 0xc))(puVar8);
      }
      (**(code **)(*piVar6 + 0x1c))(piVar6);
      piVar6[2] = iVar9;
      piVar6[3] = (int)puVar8;
    }
    FUN_4a138f34(param_1,0,local_28,&uStack_54);
    puVar8 = (undefined4 *)FUN_4a0c6bc0(auStack_40);
    *puVar8 = puVar3;
    puVar8[2] = local_4c;
    puVar8[3] = local_48;
    goto joined_r0x4a0b3830;
  case 3:
    piVar6 = (int *)FUN_4a0c6bc0(&uStack_54);
    puVar4 = PTR_PTR_4a0b3900;
    piVar6[2] = 0;
    piVar6[3] = 0;
    *piVar6 = (int)puVar4;
    if (0 < iVar9) {
      iVar10 = FUN_4a15e080(iVar9 * 4);
      if (iVar10 == 0) {
        iVar10 = FUN_4a1669a8();
      }
      iVar7 = 0;
      do {
        *(undefined4 *)(iVar10 + iVar7 * 4) = 0;
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar9);
      thunk_FUN_4a161570(0x18);
      puVar8 = (undefined4 *)FUN_4a0c0628();
      puVar8[3] = 4;
      puVar8[4] = iVar9;
      puVar8[2] = iVar10;
      *puVar8 = puVar2;
      *(undefined1 *)(puVar8 + 5) = 1;
      if (puVar8 != (undefined4 *)0x0) {
        (**(code **)(puVar2 + 0xc))(puVar8);
      }
      (**(code **)(*piVar6 + 0x1c))(piVar6);
      piVar6[2] = iVar9;
      piVar6[3] = (int)puVar8;
    }
    FUN_4a138e3c(param_1,0,local_28,&uStack_54);
    puVar8 = (undefined4 *)FUN_4a0c6bc0(auStack_40);
    *puVar8 = puVar3;
    puVar8[2] = local_4c;
    puVar8[3] = local_48;
    if (local_48 != (int *)0x0) {
      (**(code **)(*local_48 + 0xc))();
    }
    *puVar8 = puVar4;
    FUN_4a0ad1b4(local_2c,0,local_28,puVar8);
    FUN_4a16bef4(auStack_40);
    FUN_4a16bef4(&uStack_54);
    break;
  case 4:
    FUN_4a16b934(&uStack_54,iVar9);
    FUN_4a138e28(param_1,0,local_28,&uStack_54);
    puVar8 = (undefined4 *)FUN_4a0c6bc0(auStack_40);
    *puVar8 = puVar3;
    puVar8[2] = local_4c;
    puVar8[3] = local_48;
    if (local_48 != (int *)0x0) {
      (**(code **)(*local_48 + 0xc))();
    }
    *puVar8 = PTR_PTR_4a0b3904;
    FUN_4a0ad110(local_2c,0,local_28,puVar8);
    FUN_4a16ba04(auStack_40);
    FUN_4a16ba04(&uStack_54);
    break;
  case 5:
    piVar6 = (int *)FUN_4a0c6bc0(&uStack_54);
    piVar6[2] = 0;
    piVar6[3] = 0;
    *piVar6 = (int)puVar4;
    if (0 < iVar9) {
      iVar10 = FUN_4a15e080(iVar9 * 2);
      if (iVar10 == 0) {
        iVar10 = FUN_4a1669a8();
      }
      iVar7 = 0;
      do {
        iVar1 = iVar7 * 2;
        iVar7 = iVar7 + 1;
        *(undefined2 *)(iVar10 + iVar1) = 0;
      } while (iVar7 < iVar9);
      thunk_FUN_4a161570(0x18);
      puVar8 = (undefined4 *)FUN_4a0c0628();
      puVar8[3] = 2;
      puVar8[4] = iVar9;
      puVar8[2] = iVar10;
      *puVar8 = puVar2;
      *(undefined1 *)(puVar8 + 5) = 1;
      if (puVar8 != (undefined4 *)0x0) {
        (**(code **)(puVar2 + 0xc))(puVar8);
      }
      (**(code **)(*piVar6 + 0x1c))(piVar6);
      piVar6[2] = iVar9;
      piVar6[3] = (int)puVar8;
    }
    FUN_4a138f34(param_1,0,local_28,&uStack_54);
    puVar8 = (undefined4 *)FUN_4a0c6bc0(auStack_40);
    *puVar8 = puVar3;
    puVar8[2] = local_4c;
    puVar8[3] = local_48;
joined_r0x4a0b3830:
    if (local_48 != (int *)0x0) {
      (**(code **)(*local_48 + 0xc))();
    }
    *puVar8 = puVar4;
    FUN_4a0ad258(local_2c,0,local_28,puVar8);
    FUN_4a16c1a0(auStack_40);
    FUN_4a16c1a0(&uStack_54);
  }
  return local_2c;
}



// Address: 4a0b3908

undefined4 FUN_4a0b3908(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  
  puVar1 = PTR_DAT_4a0b3950;
  if (*(int *)PTR_DAT_4a0b3950 == 0) {
    thunk_FUN_4a161570(0x1c4);
    puVar3 = (undefined4 *)FUN_4a0a8d04();
    puVar2 = PTR_PTR_4a0b3954;
    *puVar3 = PTR_PTR_4a0b3954;
    *(undefined4 **)puVar1 = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)(puVar2 + 0xc))();
    }
  }
  return *(undefined4 *)puVar1;
}



// Address: 4a0b3958

void FUN_4a0b3958(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return;
}



// Address: 4a0b3960

void FUN_4a0b3960(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x34) = param_3;
  return;
}



// Address: 4a0b396c

void FUN_4a0b396c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0b7654();
  *puVar1 = PTR_PTR_4a0b39a4;
  puVar1[10] = 0x51;
  puVar1[0xb] = 0x3f800000;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0x3f800000;
  puVar1[0xe] = 0;
  return;
}



// Address: 4a0b39c4

void FUN_4a0b39c4(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a0b39d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc0))();
  return;
}



// Address: 4a0b39d8

void FUN_4a0b39d8(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  
  FUN_4a0b4560();
  uVar1 = FUN_4a0b3cf8(param_2,*(undefined4 *)(param_1 + 0xf0));
  piVar4 = *(int **)(param_1 + 0xdc);
  if (piVar4 != (int *)0x0) {
    uVar1 = (uint)*(byte *)(param_2 + 0x110);
  }
  if (piVar4 != (int *)0x0 && uVar1 != 0) {
    (**(code **)(*piVar4 + 0xc))(piVar4);
    piVar5 = *(int **)(param_2 + 0xdc);
    if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    *(int **)(param_2 + 0xdc) = piVar4;
  }
  uVar1 = 0;
  if (0 < *(int *)(param_1 + 0xf0)) {
    do {
      if ((int)uVar1 < *(int *)(param_1 + 0xf0)) {
        piVar4 = *(int **)(*(int *)(param_1 + 0x10c) + uVar1 * 4);
        goto LAB_4a0b3a90;
      }
      do {
        piVar4 = (int *)0x0;
LAB_4a0b3a90:
        if (*(char *)(param_2 + 0x110) == '\0') {
          if ((int)uVar1 < 0) goto LAB_4a0b3b2c;
LAB_4a0b3b18:
          if (*(int *)(param_1 + 0xf0) <= (int)uVar1) goto LAB_4a0b3b2c;
          piVar4 = *(int **)(*(int *)(param_1 + 0xf4) + uVar1 * 4);
        }
        else {
          if (-1 < (int)uVar1) {
            if ((int)uVar1 < *(int *)(param_2 + 0xf0)) {
              piVar5 = *(int **)(*(int *)(param_2 + 0x10c) + uVar1 * 4);
              if (piVar4 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4a0b3ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*piVar4 + 0xc))();
                return;
              }
              *(undefined4 *)(*(int *)(param_2 + 0x10c) + uVar1 * 4) = 0;
              if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)
                 ) {
                (**(code **)(*piVar5 + 4))(piVar5);
              }
            }
            goto LAB_4a0b3b18;
          }
LAB_4a0b3b2c:
          piVar4 = (int *)0x0;
        }
        uVar3 = (uint)*(byte *)(param_2 + 0x110);
        if (uVar3 != 0) {
          bVar6 = uVar1 == 0;
          if (-1 < (int)uVar1) {
            uVar3 = *(uint *)(param_2 + 0xf0);
            bVar6 = uVar3 == uVar1;
          }
          if (!bVar6 && (-1 < (int)uVar1 && (int)uVar1 <= (int)uVar3)) {
            piVar5 = *(int **)(*(int *)(param_2 + 0xf4) + uVar1 * 4);
            if (piVar4 != (int *)0x0) {
              (**(code **)(*piVar4 + 0xc))();
            }
            *(int **)(*(int *)(param_2 + 0xf4) + uVar1 * 4) = piVar4;
            if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0))
            {
              (**(code **)(*piVar5 + 4))(piVar5);
            }
          }
        }
        uVar1 = uVar1 + 1;
        if (*(int *)(param_1 + 0xf0) <= (int)uVar1) goto LAB_4a0b3bb8;
      } while ((int)uVar1 < 0);
    } while( true );
  }
LAB_4a0b3bb8:
  *(undefined1 *)(param_2 + 0x110) = *(undefined1 *)(param_1 + 0x110);
  return;
}



// Address: 4a0b3bc8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0b3bc8(int param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int unaff_r4;
  uint unaff_r5;
  uint uVar3;
  int *piVar4;
  int *unaff_r7;
  undefined1 *puVar5;
  bool bVar6;
  bool bVar7;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x110);
  if (uVar1 == 0) {
    return;
  }
  bVar6 = -1 < (int)param_2;
  bVar7 = param_2 == 0;
  if (bVar6) {
    uVar1 = *(uint *)(param_1 + 0xf0);
    bVar7 = uVar1 == param_2;
  }
  uVar3 = param_2;
  puVar5 = &stack0xffffffe8;
  if (bVar7 || (!bVar6 || (int)uVar1 < (int)param_2)) {
    param_1 = unaff_r4;
    uVar3 = unaff_r5;
    param_3 = unaff_r7;
    puVar5 = (undefined1 *)register0x00000054;
  }
  if (!bVar7 && (bVar6 && (int)param_2 <= (int)uVar1)) {
    piVar4 = *(int **)(*(int *)(param_1 + 0x10c) + uVar3 * 4);
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 0xc))();
    }
    *(int **)(*(int *)(param_1 + 0x10c) + uVar3 * 4) = param_3;
    if (piVar4 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar4 + 8))(piVar4);
      if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0b3c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar4 + 4))(piVar4);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x4a0b3c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(puVar5 + 0x14))();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a0b3c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(puVar5 + 0x14))();
    return;
  }
  return;
}



// Address: 4a0b3c60

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0b3c60(int param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int unaff_r4;
  uint unaff_r5;
  uint uVar3;
  int *piVar4;
  int *unaff_r7;
  undefined1 *puVar5;
  bool bVar6;
  bool bVar7;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x110);
  if (uVar1 == 0) {
    return;
  }
  bVar6 = -1 < (int)param_2;
  bVar7 = param_2 == 0;
  if (bVar6) {
    uVar1 = *(uint *)(param_1 + 0xf0);
    bVar7 = uVar1 == param_2;
  }
  uVar3 = param_2;
  puVar5 = &stack0xffffffe8;
  if (bVar7 || (!bVar6 || (int)uVar1 < (int)param_2)) {
    param_1 = unaff_r4;
    uVar3 = unaff_r5;
    param_3 = unaff_r7;
    puVar5 = (undefined1 *)register0x00000054;
  }
  if (!bVar7 && (bVar6 && (int)param_2 <= (int)uVar1)) {
    piVar4 = *(int **)(*(int *)(param_1 + 0xf4) + uVar3 * 4);
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 0xc))();
    }
    *(int **)(*(int *)(param_1 + 0xf4) + uVar3 * 4) = param_3;
    if (piVar4 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar4 + 8))(piVar4);
      if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0b3cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar4 + 4))(piVar4);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x4a0b3ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(puVar5 + 0x14))();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a0b3cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(puVar5 + 0x14))();
    return;
  }
  return;
}



// Address: 4a0b3cf8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0b3cf8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(char *)(param_1 + 0x110) == '\0') {
    return;
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xf0)) {
    do {
      piVar4 = *(int **)(*(int *)(param_1 + 0xf4) + iVar3 * 4);
      *(undefined4 *)(*(int *)(param_1 + 0xf4) + iVar3 * 4) = 0;
      if ((piVar4 != (int *)0x0) && (iVar1 = (**(code **)(*piVar4 + 8))(piVar4), iVar1 != 0)) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xf0));
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  FUN_4a16da04(param_1 + 0xe0,param_2);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x108)) {
    do {
      piVar4 = *(int **)(*(int *)(param_1 + 0x10c) + iVar3 * 4);
      *(undefined4 *)(*(int *)(param_1 + 0x10c) + iVar3 * 4) = 0;
      if ((piVar4 != (int *)0x0) && (iVar1 = (**(code **)(*piVar4 + 8))(piVar4), iVar1 != 0)) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x108));
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(int *)(param_1 + 0x108) < param_2) {
    if (*(int *)(param_1 + 0x104) < param_2) {
      *(int *)(param_1 + 0x104) = param_2;
      iVar1 = *(int *)(param_1 + 0x10c);
      iVar3 = thunk_FUN_4a161570(param_2 << 2);
      *(int *)(param_1 + 0x10c) = iVar3;
      if (iVar3 != 0) {
        iVar3 = 0;
        if (0 < *(int *)(param_1 + 0x108)) {
          do {
            iVar2 = iVar3 + 1;
            *(undefined4 *)(*(int *)(param_1 + 0x10c) + iVar3 * 4) =
                 *(undefined4 *)(iVar1 + iVar3 * 4);
            iVar3 = iVar2;
          } while (iVar2 < *(int *)(param_1 + 0x108));
        }
        thunk_FUN_4a161530(iVar1);
      }
      iVar3 = *(int *)(param_1 + 0x108);
      if (*(int *)(param_1 + 0x108) < *(int *)(param_1 + 0x104)) {
        do {
          iVar1 = iVar3 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x10c) + iVar3 * 4) = 0;
          iVar3 = iVar1;
        } while (iVar1 < *(int *)(param_1 + 0x104));
      }
    }
    if (*(int *)(param_1 + 0x108) < param_2) {
      do {
        iVar3 = *(int *)(param_1 + 0x104);
        if ((*(int *)(param_1 + 0x108) == iVar3) &&
           (iVar1 = *(int *)(param_1 + 0x100) + iVar3, iVar3 < iVar1)) {
          *(int *)(param_1 + 0x104) = iVar1;
          iVar2 = *(int *)(param_1 + 0x10c);
          iVar3 = thunk_FUN_4a161570(iVar1 * 4);
          *(int *)(param_1 + 0x10c) = iVar3;
          if (iVar3 != 0) {
            iVar3 = 0;
            if (0 < *(int *)(param_1 + 0x108)) {
              do {
                iVar1 = iVar3 + 1;
                *(undefined4 *)(*(int *)(param_1 + 0x10c) + iVar3 * 4) =
                     *(undefined4 *)(iVar2 + iVar3 * 4);
                iVar3 = iVar1;
              } while (iVar1 < *(int *)(param_1 + 0x108));
            }
            thunk_FUN_4a161530(iVar2);
          }
          iVar3 = *(int *)(param_1 + 0x108);
          if (*(int *)(param_1 + 0x108) < *(int *)(param_1 + 0x104)) {
            do {
              iVar1 = iVar3 + 1;
              *(undefined4 *)(*(int *)(param_1 + 0x10c) + iVar3 * 4) = 0;
              iVar3 = iVar1;
            } while (iVar1 < *(int *)(param_1 + 0x104));
          }
        }
        iVar3 = *(int *)(param_1 + 0x108);
        *(int *)(param_1 + 0x108) = iVar3 + 1;
        piVar4 = *(int **)(*(int *)(param_1 + 0x10c) + iVar3 * 4);
        *(undefined4 *)(*(int *)(param_1 + 0x10c) + iVar3 * 4) = 0;
        if ((piVar4 != (int *)0x0) && (iVar3 = (**(code **)(*piVar4 + 8))(piVar4), iVar3 != 0)) {
          (**(code **)(*piVar4 + 4))(piVar4);
        }
      } while (*(int *)(param_1 + 0x108) < param_2);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a16dabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a0b3e04

void FUN_4a0b3e04(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (*(char *)(param_1 + 0x110) != '\0') {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 0xc))(param_2);
    }
    piVar2 = *(int **)(param_1 + 0xdc);
    if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    *(int **)(param_1 + 0xdc) = param_2;
    return;
  }
  return;
}



// Address: 4a0b3e84

void FUN_4a0b3e84(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  
  if (*(char *)(param_1 + 0x110) != '\0') {
    piVar1 = (int *)FUN_4a0b75a8(*(undefined4 *)(param_1 + 0xdc));
    FUN_4a0adea0();
    if (*(char *)(param_1 + 0x110) != '\0') {
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc))(piVar1);
      }
      piVar4 = *(int **)(param_1 + 0xdc);
      if ((piVar4 != (int *)0x0) && (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 != 0)) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      *(int **)(param_1 + 0xdc) = piVar1;
    }
    piVar1 = *(int **)(param_1 + 0xf0);
    piVar4 = (int *)0x0;
    if (0 < (int)piVar1) {
      do {
        bVar5 = (int)piVar4 < 0;
        bVar6 = piVar4 == (int *)0x0;
        if (!bVar5) {
          piVar1 = *(int **)(param_1 + 0xf0);
          bVar6 = piVar1 == piVar4;
        }
        piVar3 = piVar1;
        if (bVar6 || (bVar5 || (int)piVar1 < (int)piVar4)) {
          piVar3 = (int *)0x0;
        }
        if (!bVar6 && (!bVar5 && (int)piVar4 <= (int)piVar1)) {
          piVar3 = *(int **)(*(int *)(param_1 + 0xf4) + (int)piVar4 * 4);
        }
        piVar3 = (int *)(**(code **)(*piVar3 + 0x3c))();
        piVar1 = (int *)(uint)*(byte *)(param_1 + 0x110);
        if (piVar1 != (int *)0x0) {
          bVar6 = piVar4 == (int *)0x0;
          if (-1 < (int)piVar4) {
            piVar1 = *(int **)(param_1 + 0xf0);
            bVar6 = piVar1 == piVar4;
          }
          if (!bVar6 && (-1 < (int)piVar4 && (int)piVar4 <= (int)piVar1)) {
            piVar1 = *(int **)(*(int *)(param_1 + 0xf4) + (int)piVar4 * 4);
            if (piVar3 != (int *)0x0) {
              (**(code **)(*piVar3 + 0xc))();
            }
            *(int **)(*(int *)(param_1 + 0xf4) + (int)piVar4 * 4) = piVar3;
            if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 8))(piVar1), iVar2 != 0))
            {
              (**(code **)(*piVar1 + 4))(piVar1);
            }
          }
        }
        piVar1 = *(int **)(param_1 + 0xf0);
        piVar4 = (int *)((int)piVar4 + 1);
      } while ((int)piVar4 < (int)piVar1);
    }
    *(undefined1 *)(param_1 + 0x110) = 0;
    return;
  }
  return;
}



// Address: 4a0b3fec

int FUN_4a0b3fec(undefined4 param_1,int *param_2,undefined4 param_3,int *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  
  puVar1 = (undefined4 *)FUN_4a0b4714();
  *puVar1 = PTR_PTR_4a0b4120;
  puVar1[0x37] = 0;
  iVar2 = FUN_4a16dbc8(puVar1 + 0x38);
  iVar2 = FUN_4a16dbc8(iVar2 + 0x18);
  iVar4 = iVar2 + -0xf8;
  *(undefined1 *)(iVar2 + 0x18) = 1;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  piVar5 = *(int **)(iVar2 + -0x1c);
  if ((piVar5 != (int *)0x0) && (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  *(int **)(iVar2 + -0x1c) = param_2;
  FUN_4a0b3cf8(iVar4,1);
  FUN_4a0b3c60(iVar4,0,param_3);
  bVar6 = *(char *)(iVar2 + 0x18) != '\0';
  iVar3 = 0;
  if (bVar6) {
    iVar3 = *(int *)(iVar2 + -8);
  }
  if (bVar6 && 0 < iVar3) {
    piVar5 = (int *)**(undefined4 **)(iVar2 + 0x14);
    if (param_4 != (int *)0x0) {
      (**(code **)(*param_4 + 0xc))();
    }
    **(undefined4 **)(iVar2 + 0x14) = param_4;
    if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
  }
  return iVar4;
}



// Address: 4a0b4124

int FUN_4a0b4124(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  bool bVar8;
  
  puVar1 = (undefined4 *)FUN_4a0b4714();
  *puVar1 = PTR_PTR_4a0b432c;
  puVar1[0x37] = 0;
  iVar2 = FUN_4a16dbc8(puVar1 + 0x38);
  iVar2 = FUN_4a16dbc8(iVar2 + 0x18);
  *(undefined1 *)(iVar2 + 0x18) = 1;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  piVar5 = *(int **)(iVar2 + -0x1c);
  if ((piVar5 != (int *)0x0) && (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  *(int **)(iVar2 + -0x1c) = param_2;
  FUN_4a0b3cf8(iVar2 + -0xf8,*(undefined4 *)(param_3 + 8));
  uVar6 = 0;
  if (0 < *(int *)(param_3 + 8)) {
    do {
      if (*(int *)(param_3 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_3 + 0xc) + 8);
      }
      piVar5 = *(int **)(iVar3 + uVar6 * 4);
      uVar4 = (uint)*(byte *)(iVar2 + 0x18);
      if (uVar4 != 0) {
        bVar8 = uVar6 == 0;
        if (-1 < (int)uVar6) {
          uVar4 = *(uint *)(iVar2 + -8);
          bVar8 = uVar4 == uVar6;
        }
        if (!bVar8 && (-1 < (int)uVar6 && (int)uVar6 <= (int)uVar4)) {
          piVar7 = *(int **)(*(int *)(iVar2 + -4) + uVar6 * 4);
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 0xc))();
          }
          *(int **)(*(int *)(iVar2 + -4) + uVar6 * 4) = piVar5;
          if ((piVar7 != (int *)0x0) && (iVar3 = (**(code **)(*piVar7 + 8))(piVar7), iVar3 != 0)) {
            (**(code **)(*piVar7 + 4))(piVar7);
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < *(int *)(param_3 + 8));
  }
  uVar6 = 0;
  if (0 < *(int *)(param_4 + 8)) {
    do {
      if (*(int *)(param_4 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_4 + 0xc) + 8);
      }
      piVar5 = *(int **)(iVar3 + uVar6 * 4);
      uVar4 = (uint)*(byte *)(iVar2 + 0x18);
      if (uVar4 != 0) {
        bVar8 = uVar6 == 0;
        if (-1 < (int)uVar6) {
          uVar4 = *(uint *)(iVar2 + -8);
          bVar8 = uVar4 == uVar6;
        }
        if (!bVar8 && (-1 < (int)uVar6 && (int)uVar6 <= (int)uVar4)) {
          piVar7 = *(int **)(*(int *)(iVar2 + 0x14) + uVar6 * 4);
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 0xc))();
          }
          *(int **)(*(int *)(iVar2 + 0x14) + uVar6 * 4) = piVar5;
          if ((piVar7 != (int *)0x0) && (iVar3 = (**(code **)(*piVar7 + 8))(piVar7), iVar3 != 0)) {
            (**(code **)(*piVar7 + 4))(piVar7);
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < *(int *)(param_4 + 8));
  }
  return iVar2 + -0xf8;
}



// Address: 4a0b4330

void FUN_4a0b4330(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_4a0b4714();
  *puVar1 = PTR_PTR_4a0b436c;
  puVar1[0x37] = 0;
  iVar2 = FUN_4a16dbc8(puVar1 + 0x38);
  iVar2 = FUN_4a16dbc8(iVar2 + 0x18);
  *(undefined1 *)(iVar2 + 0x18) = 1;
  return;
}



// Address: 4a0b4388

void FUN_4a0b4388(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  int *piVar7;
  
  *param_1 = PTR_PTR_4a0b4558;
  piVar7 = (int *)param_1[0x37];
  if ((piVar7 != (int *)0x0) && (iVar2 = (**(code **)(*piVar7 + 8))(piVar7), iVar2 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  param_1[0x37] = 0;
  iVar2 = 0;
  if (0 < (int)param_1[0x3c]) {
    do {
      piVar7 = *(int **)(param_1[0x3d] + iVar2 * 4);
      *(undefined4 *)(param_1[0x3d] + iVar2 * 4) = 0;
      if ((piVar7 != (int *)0x0) && (iVar3 = (**(code **)(*piVar7 + 8))(piVar7), iVar3 != 0)) {
        (**(code **)(*piVar7 + 4))(piVar7);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[0x3c]);
  }
  param_1[0x3c] = 0;
  iVar2 = 0;
  if (0 < (int)param_1[0x42]) {
    do {
      piVar7 = *(int **)(param_1[0x43] + iVar2 * 4);
      *(undefined4 *)(param_1[0x43] + iVar2 * 4) = 0;
      if ((piVar7 != (int *)0x0) && (iVar3 = (**(code **)(*piVar7 + 8))(piVar7), iVar3 != 0)) {
        (**(code **)(*piVar7 + 4))(piVar7);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[0x42]);
  }
  param_1[0x42] = 0;
  puVar5 = PTR_PTR_4a0b455c;
  param_1[0x3e] = PTR_PTR_4a0b455c;
  param_1[0x42] = 0;
  thunk_FUN_4a161530(param_1[0x43]);
  iVar2 = FUN_4a0c6bf4(param_1 + 0x3e);
  *(undefined **)(iVar2 + -0x18) = puVar5;
  iVar3 = 0;
  if (0 < *(int *)(iVar2 + -8)) {
    do {
      piVar7 = *(int **)(*(int *)(iVar2 + -4) + iVar3 * 4);
      *(undefined4 *)(*(int *)(iVar2 + -4) + iVar3 * 4) = 0;
      if ((piVar7 != (int *)0x0) && (iVar4 = (**(code **)(*piVar7 + 8))(piVar7), iVar4 != 0)) {
        (**(code **)(*piVar7 + 4))(piVar7);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar2 + -8));
  }
  *(undefined4 *)(iVar2 + -8) = 0;
  thunk_FUN_4a161530(*(undefined4 *)(iVar2 + -4));
  iVar2 = FUN_4a0c6bf4(iVar2 + -0x18);
  *(undefined4 *)(iVar2 + -0xe0) = PTR_PTR_4a0b4870;
  *(undefined4 *)(iVar2 + -0x14) = 0;
  *(undefined4 *)(iVar2 + -0xe0) = PTR_PTR_4a0af828;
  piVar7 = *(int **)(iVar2 + -100);
  if ((piVar7 != (int *)0x0) && (iVar3 = (**(code **)(*piVar7 + 8))(piVar7), iVar3 != 0)) {
    (**(code **)(*piVar7 + 4))(piVar7);
  }
  *(undefined4 *)(iVar2 + -100) = 0;
  iVar2 = FUN_4a0c6bf4(iVar2 + -0x60);
  *(undefined **)(iVar2 + -0x80) = PTR_PTR_4a0b77cc;
  piVar7 = *(int **)(iVar2 + -0x78);
  if (piVar7 != (int *)0x0) {
    *(undefined4 *)(iVar2 + -0x78) = 0;
    iVar3 = (**(code **)(*piVar7 + 8))(piVar7);
    if (iVar3 != 0) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
  }
  puVar5 = PTR_PTR_4a0b77d0;
  *(undefined **)(iVar2 + -0x6c) = PTR_PTR_4a0b77d0;
  piVar7 = *(int **)(iVar2 + -0x60);
  iVar3 = *(int *)(iVar2 + -100);
  if (piVar7 != (int *)0x0) {
    iVar4 = piVar7[2];
    puVar5 = (undefined *)(uint)*(byte *)(piVar7 + 5);
  }
  else {
    iVar4 = 0;
  }
  *(undefined4 *)(iVar2 + -0x60) = 0;
  *(undefined4 *)(iVar2 + -100) = 0;
  if ((piVar7 == (int *)0x0) || (iVar6 = (**(code **)(*piVar7 + 8))(piVar7), iVar6 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar7 + 4))(piVar7);
    bVar1 = 1;
  }
  if (!(bool)(bVar1 & (piVar7 != (int *)0x0 && puVar5 != (undefined *)0x0))) {
    iVar4 = 0;
  }
  if (iVar4 != 0) {
    iVar6 = 0;
    if (0 < iVar3) {
      do {
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar3);
      if (iVar4 == 0) goto LAB_4a0b77b8;
    }
    FUN_4a14f21c();
  }
LAB_4a0b77b8:
  iVar2 = FUN_4a0c6bf4(iVar2 + -0x6c);
  *(undefined **)(iVar2 + -0x14) = PTR_PTR_4a0c0674;
  *(undefined4 *)(iVar2 + -0x10) = 0xffffffff;
  return;
}



// Address: 4a0b4560

void FUN_4a0b4560(int param_1,int param_2)

{
  FUN_4a0aed18();
  *(undefined4 *)(param_2 + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  return;
}



// Address: 4a0b4580

void FUN_4a0b4580(void)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = PTR_DAT_4a0b45d4;
  if (*(int *)(PTR_DAT_4a0b45d4 + 4) != 0) {
    do {
      do {
        piVar3 = *(int **)(puVar1 + 4);
      } while (piVar3 == (int *)0x0);
      iVar2 = (**(code **)(*piVar3 + 8))(piVar3);
    } while (iVar2 == 0);
                    /* WARNING: Could not recover jumptable at 0x4a0b45d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar3 + 4))(piVar3);
    return;
  }
  return;
}



// Address: 4a0b45d8

void FUN_4a0b45d8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_4a17295c(param_2,0x10);
  FUN_4a171a94(uVar1,0x3f000000);
  uVar1 = FUN_4a171e1c();
  *(undefined4 *)(param_1 + 0xd4) = uVar1;
  return;
}



// Address: 4a0b4604

void FUN_4a0b4604(void)

{
  return;
}



// Address: 4a0b4608

void FUN_4a0b4608(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xd0) = param_2;
  return;
}



// Address: 4a0b4610

void FUN_4a0b4610(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  
  FUN_4a0af484();
  piVar2 = (int *)0x0;
  if (param_2 == 0x100) {
    if (*(int *)(param_3 + 0xc) != 0) {
      piVar2 = *(int **)(*(int *)(param_3 + 0xc) + 8);
    }
    uVar1 = FUN_4a17295c(*piVar2,0x10);
    FUN_4a171a94(uVar1,0x3f000000);
    uVar1 = FUN_4a171e1c();
    *(undefined4 *)(param_1 + 0xd4) = uVar1;
    return;
  }
  if (param_2 == 0x114) {
    if (*(int *)(param_3 + 0xc) != 0) {
      piVar2 = *(int **)(*(int *)(param_3 + 0xc) + 8);
    }
    *(bool *)(param_1 + 0xd0) = 0x3f000000 < *piVar2;
    return;
  }
  return;
}



// Address: 4a0b4694

void FUN_4a0b4694(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  thunk_FUN_4a0b74ac();
  piVar1 = (int *)0x0;
  if (param_2 == 0x100) {
    if (*(int *)(param_3 + 0xc) != 0) {
      piVar1 = *(int **)(*(int *)(param_3 + 0xc) + 8);
    }
    *(int *)(param_1 + 0xd4) = *piVar1;
    return;
  }
  if (param_2 == 0x114) {
    if (*(int *)(param_3 + 0xc) != 0) {
      piVar1 = *(int **)(*(int *)(param_3 + 0xc) + 8);
    }
    *(bool *)(param_1 + 0xd0) = 0x7fff < *piVar1;
    return;
  }
  return;
}



// Address: 4a0b4704

void FUN_4a0b4704(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xd8) = param_2;
  return;
}



// Address: 4a0b470c

void FUN_4a0b470c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xcc) = param_2;
  return;
}



// Address: 4a0b4714

undefined4 * FUN_4a0b4714(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  puVar2 = (undefined4 *)FUN_4a0af6a4();
  *puVar2 = PTR_PTR_4a0b4824;
  puVar2[0x33] = 0;
  *(undefined1 *)(puVar2 + 0x34) = 1;
  puVar2[0x35] = 0x10000;
  puVar1 = PTR_DAT_4a0b4828;
  puVar2[0x36] = 0xffffffff;
  if (*(int *)(puVar1 + 4) == 0) {
    thunk_FUN_4a161570(0x18);
    piVar3 = (int *)FUN_4a0c6bc0();
    *piVar3 = (int)PTR_PTR_4a0b482c;
    piVar3[2] = 10;
    piVar3[4] = 0;
    piVar3[3] = 10;
    piVar3[5] = 0;
    iVar4 = thunk_FUN_4a161570(0x28);
    piVar3[5] = iVar4;
    if (iVar4 != 0) {
      iVar4 = 0;
      if (0 < piVar3[4]) {
        do {
          iVar5 = iVar4 + 1;
          *(undefined4 *)(piVar3[5] + iVar4 * 4) = *(undefined4 *)(iVar4 * 4);
          iVar4 = iVar5;
        } while (iVar5 < piVar3[4]);
      }
      thunk_FUN_4a161530(0);
    }
    iVar4 = piVar3[4];
    if (piVar3[4] < piVar3[3]) {
      do {
        iVar5 = iVar4 + 1;
        *(undefined4 *)(piVar3[5] + iVar4 * 4) = 0;
        iVar4 = iVar5;
      } while (iVar5 < piVar3[3]);
    }
    *(int **)(puVar1 + 4) = piVar3;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0xc))();
    }
  }
  return puVar2;
}



// Address: 4a0b485c

void FUN_4a0b485c(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  *param_1 = PTR_PTR_4a0b4870;
  param_1[0x33] = 0;
  *param_1 = PTR_PTR_4a0af828;
  piVar6 = (int *)param_1[0x1f];
  if ((piVar6 != (int *)0x0) && (iVar2 = (**(code **)(*piVar6 + 8))(piVar6), iVar2 != 0)) {
    (**(code **)(*piVar6 + 4))(piVar6);
  }
  param_1[0x1f] = 0;
  iVar2 = FUN_4a0c6bf4(param_1 + 0x20);
  *(undefined **)(iVar2 + -0x80) = PTR_PTR_4a0b77cc;
  piVar6 = *(int **)(iVar2 + -0x78);
  if (piVar6 != (int *)0x0) {
    *(undefined4 *)(iVar2 + -0x78) = 0;
    iVar3 = (**(code **)(*piVar6 + 8))(piVar6);
    if (iVar3 != 0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
  }
  puVar4 = PTR_PTR_4a0b77d0;
  *(undefined **)(iVar2 + -0x6c) = PTR_PTR_4a0b77d0;
  piVar6 = *(int **)(iVar2 + -0x60);
  iVar3 = *(int *)(iVar2 + -100);
  if (piVar6 != (int *)0x0) {
    iVar7 = piVar6[2];
    puVar4 = (undefined *)(uint)*(byte *)(piVar6 + 5);
  }
  else {
    iVar7 = 0;
  }
  *(undefined4 *)(iVar2 + -0x60) = 0;
  *(undefined4 *)(iVar2 + -100) = 0;
  if ((piVar6 == (int *)0x0) || (iVar5 = (**(code **)(*piVar6 + 8))(piVar6), iVar5 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar6 + 4))(piVar6);
    bVar1 = 1;
  }
  if (!(bool)(bVar1 & (piVar6 != (int *)0x0 && puVar4 != (undefined *)0x0))) {
    iVar7 = 0;
  }
  if (iVar7 != 0) {
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
      if (iVar7 == 0) goto LAB_4a0b77b8;
    }
    FUN_4a14f21c();
  }
LAB_4a0b77b8:
  iVar2 = FUN_4a0c6bf4(iVar2 + -0x6c);
  *(undefined **)(iVar2 + -0x14) = PTR_PTR_4a0c0674;
  *(undefined4 *)(iVar2 + -0x10) = 0xffffffff;
  return;
}



// Address: 4a0b4874

void FUN_4a0b4874(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  FUN_4a0b4560();
  puVar1 = PTR_PTR_4a0b4ac4;
  iVar8 = 0;
  iVar2 = 0;
  if (*(int *)(param_1 + 0xdc) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0xdc) + 0x10);
  }
  if (iVar2 < 1) {
    return;
  }
  do {
    piVar3 = (int *)FUN_4a0b75a8(*(undefined4 *)
                                  (*(int *)(*(int *)(param_1 + 0xdc) + 0x14) + iVar8 * 4));
    if (*(int *)(param_2 + 0xdc) == 0) {
      thunk_FUN_4a161570(0x18);
      piVar4 = (int *)FUN_4a0c6bc0();
      piVar4[2] = 10;
      *piVar4 = (int)puVar1;
      piVar4[4] = 0;
      piVar4[3] = 10;
      piVar4[5] = 0;
      iVar2 = thunk_FUN_4a161570(0x28);
      piVar4[5] = iVar2;
      if (iVar2 != 0) {
        iVar2 = 0;
        if (0 < piVar4[4]) {
          do {
            iVar6 = iVar2 + 1;
            *(undefined4 *)(piVar4[5] + iVar2 * 4) = *(undefined4 *)(iVar2 * 4);
            iVar2 = iVar6;
          } while (iVar6 < piVar4[4]);
        }
        thunk_FUN_4a161530(0);
      }
      iVar2 = piVar4[4];
      if (piVar4[4] < piVar4[3]) {
        do {
          iVar6 = iVar2 + 1;
          *(undefined4 *)(piVar4[5] + iVar2 * 4) = 0;
          iVar2 = iVar6;
        } while (iVar6 < piVar4[3]);
      }
      *(int **)(param_2 + 0xdc) = piVar4;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0xc))();
      }
    }
    FUN_4a0b470c(piVar3,param_2);
    iVar6 = *(int *)(param_2 + 0xdc);
    iVar2 = *(int *)(iVar6 + 0xc);
    if ((*(int *)(iVar6 + 0x10) == iVar2) && (iVar5 = *(int *)(iVar6 + 8) + iVar2, iVar2 < iVar5)) {
      *(int *)(iVar6 + 0xc) = iVar5;
      iVar7 = *(int *)(iVar6 + 0x14);
      iVar2 = thunk_FUN_4a161570(iVar5 * 4);
      *(int *)(iVar6 + 0x14) = iVar2;
      if (iVar2 != 0) {
        iVar2 = 0;
        if (0 < *(int *)(iVar6 + 0x10)) {
          do {
            iVar5 = iVar2 + 1;
            *(undefined4 *)(*(int *)(iVar6 + 0x14) + iVar2 * 4) = *(undefined4 *)(iVar7 + iVar2 * 4)
            ;
            iVar2 = iVar5;
          } while (iVar5 < *(int *)(iVar6 + 0x10));
        }
        thunk_FUN_4a161530(iVar7);
      }
      iVar2 = *(int *)(iVar6 + 0x10);
      if (iVar2 < *(int *)(iVar6 + 0xc)) {
        do {
          iVar5 = iVar2 + 1;
          *(undefined4 *)(*(int *)(iVar6 + 0x14) + iVar2 * 4) = 0;
          iVar2 = iVar5;
        } while (iVar5 < *(int *)(iVar6 + 0xc));
      }
    }
    iVar2 = *(int *)(iVar6 + 0x10);
    *(int *)(iVar6 + 0x10) = iVar2 + 1;
    piVar4 = *(int **)(*(int *)(iVar6 + 0x14) + iVar2 * 4);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0xc))();
    }
    *(int **)(*(int *)(iVar6 + 0x14) + iVar2 * 4) = piVar3;
    if ((piVar4 != (int *)0x0) && (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 != 0)) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    iVar8 = iVar8 + 1;
    iVar2 = 0;
    if (*(int *)(param_1 + 0xdc) != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0xdc) + 0x10);
    }
  } while (iVar8 < iVar2);
  return;
}



// Address: 4a0b4ac8

void FUN_4a0b4ac8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  FUN_4a0b470c(param_2,0);
  iVar4 = *(int *)(param_1 + 0xdc);
  if (iVar4 == 0) {
    return;
  }
  iVar2 = *(int *)(iVar4 + 0x10);
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      if (*(int *)(*(int *)(iVar4 + 0x14) + iVar1 * 4) == param_2) goto LAB_4a0b4b20;
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  iVar1 = -1;
LAB_4a0b4b20:
  if (iVar1 != -1) {
    iVar1 = iVar1 + 1;
    if (iVar1 < iVar2) {
      do {
        piVar5 = *(int **)(*(int *)(iVar4 + 0x14) + iVar1 * 4);
        piVar3 = *(int **)(*(int *)(iVar4 + 0x14) + (iVar1 + -1) * 4);
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 0xc))();
        }
        *(int **)(*(int *)(iVar4 + 0x14) + (iVar1 + -1) * 4) = piVar5;
        if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 8))(piVar3), iVar2 != 0)) {
          (**(code **)(*piVar3 + 4))(piVar3);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(iVar4 + 0x10));
    }
    iVar1 = *(int *)(iVar4 + 0x10) + -1;
    piVar3 = *(int **)(*(int *)(iVar4 + 0x14) + iVar1 * 4);
    *(undefined4 *)(*(int *)(iVar4 + 0x14) + iVar1 * 4) = 0;
    if ((piVar3 != (int *)0x0) && (iVar1 = (**(code **)(*piVar3 + 8))(piVar3), iVar1 != 0)) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + -1;
    return;
  }
  return;
}



// Address: 4a0b4c10

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0b4c10(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(int *)(param_1 + 0xdc) == 0) {
    thunk_FUN_4a161570(0x18);
    piVar1 = (int *)FUN_4a0c6bc0();
    *piVar1 = (int)PTR_PTR_4a0b4e10;
    piVar1[2] = 10;
    piVar1[4] = 0;
    piVar1[3] = 10;
    piVar1[5] = 0;
    iVar2 = thunk_FUN_4a161570(0x28);
    piVar1[5] = iVar2;
    if (iVar2 != 0) {
      iVar2 = 0;
      if (0 < piVar1[4]) {
        do {
          iVar4 = iVar2 + 1;
          *(undefined4 *)(piVar1[5] + iVar2 * 4) = *(undefined4 *)(iVar2 * 4);
          iVar2 = iVar4;
        } while (iVar4 < piVar1[4]);
      }
      thunk_FUN_4a161530(0);
    }
    iVar2 = piVar1[4];
    if (piVar1[4] < piVar1[3]) {
      do {
        iVar4 = iVar2 + 1;
        *(undefined4 *)(piVar1[5] + iVar2 * 4) = 0;
        iVar2 = iVar4;
      } while (iVar4 < piVar1[3]);
    }
    *(int **)(param_1 + 0xdc) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))();
    }
  }
  FUN_4a0b470c(param_2,param_1);
  iVar4 = *(int *)(param_1 + 0xdc);
  iVar2 = *(int *)(iVar4 + 0xc);
  if ((*(int *)(iVar4 + 0x10) == iVar2) && (iVar3 = *(int *)(iVar4 + 8) + iVar2, iVar2 < iVar3)) {
    *(int *)(iVar4 + 0xc) = iVar3;
    iVar5 = *(int *)(iVar4 + 0x14);
    iVar2 = thunk_FUN_4a161570(iVar3 * 4);
    *(int *)(iVar4 + 0x14) = iVar2;
    if (iVar2 != 0) {
      iVar2 = 0;
      if (0 < *(int *)(iVar4 + 0x10)) {
        do {
          iVar3 = iVar2 + 1;
          *(undefined4 *)(*(int *)(iVar4 + 0x14) + iVar2 * 4) = *(undefined4 *)(iVar5 + iVar2 * 4);
          iVar2 = iVar3;
        } while (iVar3 < *(int *)(iVar4 + 0x10));
      }
      thunk_FUN_4a161530(iVar5);
    }
    iVar2 = *(int *)(iVar4 + 0x10);
    if (*(int *)(iVar4 + 0x10) < *(int *)(iVar4 + 0xc)) {
      do {
        iVar3 = iVar2 + 1;
        *(undefined4 *)(*(int *)(iVar4 + 0x14) + iVar2 * 4) = 0;
        iVar2 = iVar3;
      } while (iVar3 < *(int *)(iVar4 + 0xc));
    }
  }
  iVar2 = *(int *)(iVar4 + 0x10);
  *(int *)(iVar4 + 0x10) = iVar2 + 1;
  piVar1 = *(int **)(*(int *)(iVar4 + 0x14) + iVar2 * 4);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))();
  }
  *(int **)(*(int *)(iVar4 + 0x14) + iVar2 * 4) = param_2;
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 8))(piVar1);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0b4e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 4))(piVar1);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a0b4df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a0b4e14

void FUN_4a0b4e14(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0b4714();
  *puVar1 = PTR_PTR_4a0b4e34;
  puVar1[0x37] = 0;
  return;
}



// Address: 4a0b4e50

void FUN_4a0b4e50(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  
  *param_1 = PTR_PTR_4a0b5000;
  iVar2 = 0;
  if (param_1[0x37] != 0) {
    iVar2 = *(int *)(param_1[0x37] + 0x10);
  }
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    iVar6 = *(int *)(*(int *)(param_1[0x37] + 0x14) + iVar2 * 4);
    FUN_4a0b470c(iVar6,0);
    iVar7 = param_1[0x37];
    if (iVar7 != 0) {
      iVar5 = *(int *)(iVar7 + 0x10);
      iVar3 = 0;
      if (0 < iVar5) {
        do {
          if (*(int *)(*(int *)(iVar7 + 0x14) + iVar3 * 4) == iVar6) goto LAB_4a0b4ecc;
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar5);
      }
      iVar3 = -1;
LAB_4a0b4ecc:
      if (iVar3 != -1) {
        iVar3 = iVar3 + 1;
        if (iVar3 < iVar5) {
          do {
            piVar8 = *(int **)(*(int *)(iVar7 + 0x14) + iVar3 * 4);
            piVar9 = *(int **)(*(int *)(iVar7 + 0x14) + (iVar3 + -1) * 4);
            if (piVar8 != (int *)0x0) {
              (**(code **)(*piVar8 + 0xc))();
            }
            *(int **)(*(int *)(iVar7 + 0x14) + (iVar3 + -1) * 4) = piVar8;
            if ((piVar9 != (int *)0x0) && (iVar6 = (**(code **)(*piVar9 + 8))(piVar9), iVar6 != 0))
            {
              (**(code **)(*piVar9 + 4))(piVar9);
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(iVar7 + 0x10));
        }
        iVar6 = *(int *)(iVar7 + 0x10) + -1;
        piVar8 = *(int **)(*(int *)(iVar7 + 0x14) + iVar6 * 4);
        *(undefined4 *)(*(int *)(iVar7 + 0x14) + iVar6 * 4) = 0;
        if ((piVar8 != (int *)0x0) && (iVar6 = (**(code **)(*piVar8 + 8))(piVar8), iVar6 != 0)) {
          (**(code **)(*piVar8 + 4))(piVar8);
        }
        *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + -1;
      }
    }
  }
  piVar8 = (int *)param_1[0x37];
  param_1[0x37] = 0;
  if ((piVar8 != (int *)0x0) && (iVar2 = (**(code **)(*piVar8 + 8))(piVar8), iVar2 != 0)) {
    (**(code **)(*piVar8 + 4))(piVar8);
  }
  *param_1 = PTR_PTR_4a0b4870;
  param_1[0x33] = 0;
  *param_1 = PTR_PTR_4a0af828;
  piVar8 = (int *)param_1[0x1f];
  if ((piVar8 != (int *)0x0) && (iVar2 = (**(code **)(*piVar8 + 8))(piVar8), iVar2 != 0)) {
    (**(code **)(*piVar8 + 4))(piVar8);
  }
  param_1[0x1f] = 0;
  iVar2 = FUN_4a0c6bf4(param_1 + 0x20);
  *(undefined **)(iVar2 + -0x80) = PTR_PTR_4a0b77cc;
  piVar8 = *(int **)(iVar2 + -0x78);
  if (piVar8 != (int *)0x0) {
    *(undefined4 *)(iVar2 + -0x78) = 0;
    iVar6 = (**(code **)(*piVar8 + 8))(piVar8);
    if (iVar6 != 0) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
  }
  puVar4 = PTR_PTR_4a0b77d0;
  *(undefined **)(iVar2 + -0x6c) = PTR_PTR_4a0b77d0;
  piVar8 = *(int **)(iVar2 + -0x60);
  iVar6 = *(int *)(iVar2 + -100);
  if (piVar8 != (int *)0x0) {
    iVar7 = piVar8[2];
    puVar4 = (undefined *)(uint)*(byte *)(piVar8 + 5);
  }
  else {
    iVar7 = 0;
  }
  *(undefined4 *)(iVar2 + -0x60) = 0;
  *(undefined4 *)(iVar2 + -100) = 0;
  if ((piVar8 == (int *)0x0) || (iVar3 = (**(code **)(*piVar8 + 8))(piVar8), iVar3 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar8 + 4))(piVar8);
    bVar1 = 1;
  }
  if (!(bool)(bVar1 & (piVar8 != (int *)0x0 && puVar4 != (undefined *)0x0))) {
    iVar7 = 0;
  }
  if (iVar7 != 0) {
    iVar3 = 0;
    if (0 < iVar6) {
      do {
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar6);
      if (iVar7 == 0) goto LAB_4a0b77b8;
    }
    FUN_4a14f21c();
  }
LAB_4a0b77b8:
  iVar2 = FUN_4a0c6bf4(iVar2 + -0x6c);
  *(undefined **)(iVar2 + -0x14) = PTR_PTR_4a0c0674;
  *(undefined4 *)(iVar2 + -0x10) = 0xffffffff;
  return;
}



// Address: 4a0b5004

void FUN_4a0b5004(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  piVar2 = *(int **)(param_1 + 0xe0);
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  *(int **)(param_1 + 0xe0) = param_2;
  return;
}



// Address: 4a0b5070

void FUN_4a0b5070(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  piVar2 = *(int **)(param_1 + 0xe4);
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  *(int **)(param_1 + 0xe4) = param_2;
  return;
}



// Address: 4a0b50dc

void FUN_4a0b50dc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0b4e14();
  *puVar1 = PTR_PTR_4a0b5100;
  puVar1[0x38] = 0;
  puVar1[0x39] = 0;
  return;
}



// Address: 4a0b51b4

void FUN_4a0b51b4(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  
  *param_1 = PTR_PTR_4a0b5254;
  piVar8 = (int *)param_1[0x38];
  if ((piVar8 != (int *)0x0) && (iVar3 = (**(code **)(*piVar8 + 8))(piVar8), iVar3 != 0)) {
    (**(code **)(*piVar8 + 4))(piVar8);
  }
  piVar8 = (int *)param_1[0x39];
  if ((piVar8 != (int *)0x0) && (iVar3 = (**(code **)(*piVar8 + 8))(piVar8), iVar3 != 0)) {
    (**(code **)(*piVar8 + 4))(piVar8);
  }
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *param_1 = PTR_PTR_4a0b5000;
  iVar3 = 0;
  if (param_1[0x37] != 0) {
    iVar3 = *(int *)(param_1[0x37] + 0x10);
  }
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    iVar6 = *(int *)(*(int *)(param_1[0x37] + 0x14) + iVar3 * 4);
    FUN_4a0b470c(iVar6,0);
    iVar7 = param_1[0x37];
    if (iVar7 != 0) {
      iVar5 = *(int *)(iVar7 + 0x10);
      iVar2 = 0;
      if (0 < iVar5) {
        do {
          if (*(int *)(*(int *)(iVar7 + 0x14) + iVar2 * 4) == iVar6) goto LAB_4a0b4ecc;
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar5);
      }
      iVar2 = -1;
LAB_4a0b4ecc:
      if (iVar2 != -1) {
        iVar2 = iVar2 + 1;
        if (iVar2 < iVar5) {
          do {
            piVar8 = *(int **)(*(int *)(iVar7 + 0x14) + iVar2 * 4);
            piVar9 = *(int **)(*(int *)(iVar7 + 0x14) + (iVar2 + -1) * 4);
            if (piVar8 != (int *)0x0) {
              (**(code **)(*piVar8 + 0xc))();
            }
            *(int **)(*(int *)(iVar7 + 0x14) + (iVar2 + -1) * 4) = piVar8;
            if ((piVar9 != (int *)0x0) && (iVar6 = (**(code **)(*piVar9 + 8))(piVar9), iVar6 != 0))
            {
              (**(code **)(*piVar9 + 4))(piVar9);
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < *(int *)(iVar7 + 0x10));
        }
        iVar6 = *(int *)(iVar7 + 0x10) + -1;
        piVar8 = *(int **)(*(int *)(iVar7 + 0x14) + iVar6 * 4);
        *(undefined4 *)(*(int *)(iVar7 + 0x14) + iVar6 * 4) = 0;
        if ((piVar8 != (int *)0x0) && (iVar6 = (**(code **)(*piVar8 + 8))(piVar8), iVar6 != 0)) {
          (**(code **)(*piVar8 + 4))(piVar8);
        }
        *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + -1;
      }
    }
  }
  piVar8 = (int *)param_1[0x37];
  param_1[0x37] = 0;
  if ((piVar8 != (int *)0x0) && (iVar3 = (**(code **)(*piVar8 + 8))(piVar8), iVar3 != 0)) {
    (**(code **)(*piVar8 + 4))(piVar8);
  }
  *param_1 = PTR_PTR_4a0b4870;
  param_1[0x33] = 0;
  *param_1 = PTR_PTR_4a0af828;
  piVar8 = (int *)param_1[0x1f];
  if ((piVar8 != (int *)0x0) && (iVar3 = (**(code **)(*piVar8 + 8))(piVar8), iVar3 != 0)) {
    (**(code **)(*piVar8 + 4))(piVar8);
  }
  param_1[0x1f] = 0;
  iVar3 = FUN_4a0c6bf4(param_1 + 0x20);
  *(undefined **)(iVar3 + -0x80) = PTR_PTR_4a0b77cc;
  piVar8 = *(int **)(iVar3 + -0x78);
  if (piVar8 != (int *)0x0) {
    *(undefined4 *)(iVar3 + -0x78) = 0;
    iVar6 = (**(code **)(*piVar8 + 8))(piVar8);
    if (iVar6 != 0) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
  }
  puVar4 = PTR_PTR_4a0b77d0;
  *(undefined **)(iVar3 + -0x6c) = PTR_PTR_4a0b77d0;
  piVar8 = *(int **)(iVar3 + -0x60);
  iVar6 = *(int *)(iVar3 + -100);
  if (piVar8 != (int *)0x0) {
    iVar7 = piVar8[2];
    puVar4 = (undefined *)(uint)*(byte *)(piVar8 + 5);
  }
  else {
    iVar7 = 0;
  }
  *(undefined4 *)(iVar3 + -0x60) = 0;
  *(undefined4 *)(iVar3 + -100) = 0;
  if ((piVar8 == (int *)0x0) || (iVar2 = (**(code **)(*piVar8 + 8))(piVar8), iVar2 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar8 + 4))(piVar8);
    bVar1 = 1;
  }
  if (!(bool)(bVar1 & (piVar8 != (int *)0x0 && puVar4 != (undefined *)0x0))) {
    iVar7 = 0;
  }
  if (iVar7 != 0) {
    iVar2 = 0;
    if (0 < iVar6) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar6);
      if (iVar7 == 0) goto LAB_4a0b77b8;
    }
    FUN_4a14f21c();
  }
LAB_4a0b77b8:
  iVar3 = FUN_4a0c6bf4(iVar3 + -0x6c);
  *(undefined **)(iVar3 + -0x14) = PTR_PTR_4a0c0674;
  *(undefined4 *)(iVar3 + -0x10) = 0xffffffff;
  return;
}



// Address: 4a0b5258

void FUN_4a0b5258(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0xdc) = 0x30;
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xfc) = uVar1;
  *(undefined4 *)(param_1 + 0x100) = uVar2;
  *(undefined4 *)(param_1 + 0x104) = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x10c) = uVar1;
  *(undefined4 *)(param_1 + 0x110) = uVar2;
  *(undefined4 *)(param_1 + 0x114) = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x11c) = uVar1;
  *(undefined4 *)(param_1 + 0x120) = uVar2;
  *(undefined4 *)(param_1 + 0x124) = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 300) = uVar1;
  *(undefined4 *)(param_1 + 0x130) = uVar2;
  *(undefined4 *)(param_1 + 0x134) = uVar3;
  *(undefined1 *)(param_1 + 0x138) = 1;
  return;
}



// Address: 4a0b529c

void FUN_4a0b529c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0xe0) = param_2;
  *(undefined4 *)(param_1 + 0xe4) = param_3;
  *(undefined4 *)(param_1 + 0xe8) = param_4;
  *(undefined4 *)(param_1 + 0xec) = param_5;
  *(undefined4 *)(param_1 + 0xdc) = 0x31;
  *(undefined1 *)(param_1 + 0x138) = 0;
  return;
}



// Address: 4a0b52c4

void FUN_4a0b52c4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0xe0) = param_2;
  *(undefined4 *)(param_1 + 0xe4) = param_3;
  *(undefined4 *)(param_1 + 0xe8) = param_4;
  *(undefined4 *)(param_1 + 0xec) = param_5;
  *(undefined4 *)(param_1 + 0xdc) = 0x32;
  *(undefined1 *)(param_1 + 0x138) = 0;
  return;
}



// Address: 4a0b52ec

void FUN_4a0b52ec(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_4a0b4714();
  *puVar1 = PTR_PTR_4a0b5334;
  puVar1[0x37] = 0x30;
  puVar1[0x38] = 0;
  puVar1[0x39] = 0;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  iVar2 = FUN_4a0b8a1c(puVar1 + 0x3c);
  *(undefined1 *)(iVar2 + 0x48) = 1;
  return;
}



// Address: 4a0b53c4

void FUN_4a0b53c4(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined1 auStack_94 [12];
  undefined4 local_88;
  undefined *local_84 [2];
  int local_7c;
  int *local_78;
  undefined *local_70 [2];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined *local_58 [4];
  int local_48;
  int local_44;
  char local_40 [12];
  int local_34 [4];
  
  puVar2 = PTR_PTR_4a0b5a14;
  puVar1 = PTR_PTR_4a0b5a10;
  if (param_2 == 0) {
    puVar5 = (undefined4 *)FUN_4a0c6bc0(param_1);
    puVar5[2] = 0;
    *puVar5 = puVar2;
    puVar5[3] = 0;
    return;
  }
  FUN_4a0bfc44(local_34);
  FUN_4a0bfa84(local_34,local_40,0xc);
  iVar6 = 0;
  do {
    if (local_40[iVar6] != PTR_DAT_4a0b5a18[iVar6]) {
      puVar5 = (undefined4 *)FUN_4a0c6bc0(param_1);
      puVar5[2] = 0;
      *puVar5 = puVar2;
      puVar5[3] = 0;
      FUN_4a0bfcf4(local_34);
      return;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0xc);
  puVar5 = (undefined4 *)FUN_4a0c6bc0(local_58);
  puVar3 = PTR_PTR_4a0b5a1c;
  puVar5[2] = 0x1e;
  *puVar5 = puVar3;
  puVar5[4] = 0;
  puVar5[3] = 0x1e;
  puVar5[5] = 0;
  iVar6 = thunk_FUN_4a161570(0x78);
  puVar5[5] = iVar6;
  if (iVar6 != 0) {
    iVar6 = 0;
    if (0 < (int)puVar5[4]) {
      do {
        iVar10 = iVar6 + 1;
        *(undefined4 *)(puVar5[5] + iVar6 * 4) = *(undefined4 *)(iVar6 * 4);
        iVar6 = iVar10;
      } while (iVar10 < (int)puVar5[4]);
    }
    thunk_FUN_4a161530(0);
  }
  iVar6 = puVar5[4];
  if ((int)puVar5[4] < (int)puVar5[3]) {
    do {
      iVar10 = iVar6 + 1;
      *(undefined4 *)(puVar5[5] + iVar6 * 4) = 0;
      iVar6 = iVar10;
    } while (iVar10 < (int)puVar5[3]);
  }
  puVar5 = (undefined4 *)FUN_4a0c6bc0(local_70);
  puVar5[2] = 0x1e;
  puVar5[4] = 0;
  *puVar5 = puVar3;
  puVar5[3] = 0x1e;
  puVar5[5] = 0;
  iVar6 = thunk_FUN_4a161570(0x78);
  puVar5[5] = iVar6;
  if (iVar6 != 0) {
    iVar6 = 0;
    if (0 < (int)puVar5[4]) {
      do {
        iVar10 = iVar6 + 1;
        *(undefined4 *)(puVar5[5] + iVar6 * 4) = *(undefined4 *)(iVar6 * 4);
        iVar6 = iVar10;
      } while (iVar10 < (int)puVar5[4]);
    }
    thunk_FUN_4a161530(0);
  }
  iVar6 = local_5c;
  iVar10 = puVar5[4];
  if ((int)puVar5[4] < (int)puVar5[3]) {
    do {
      iVar11 = iVar10 + 1;
      *(undefined4 *)(puVar5[5] + iVar10 * 4) = 0;
      iVar10 = iVar11;
    } while (iVar11 < (int)puVar5[3]);
  }
  if ((local_60 == local_64) && (local_68 = local_64 + local_68, local_64 < local_68)) {
    local_64 = local_68;
    iVar11 = thunk_FUN_4a161570(local_68 * 4);
    iVar10 = local_60;
    if (iVar11 != 0) {
      iVar10 = 0;
      if (0 < local_60) {
        do {
          *(undefined4 *)(iVar11 + iVar10 * 4) = *(undefined4 *)(local_5c + iVar10 * 4);
          iVar10 = iVar10 + 1;
        } while (iVar10 < local_60);
      }
      local_5c = iVar11;
      thunk_FUN_4a161530(iVar6);
      iVar10 = local_60;
      iVar11 = local_5c;
    }
    for (; local_5c = iVar11, iVar10 < local_64; iVar10 = iVar10 + 1) {
      *(undefined4 *)(local_5c + iVar10 * 4) = 0;
      iVar11 = local_5c;
    }
  }
  iVar6 = local_60 + 1;
  piVar12 = *(int **)(local_5c + local_60 * 4);
  *(undefined4 *)(local_5c + local_60 * 4) = 0;
  local_60 = iVar6;
  if ((piVar12 != (int *)0x0) && (iVar6 = (**(code **)(*piVar12 + 8))(piVar12), iVar6 != 0)) {
    (**(code **)(*piVar12 + 4))(piVar12);
  }
  while( true ) {
    iVar6 = (**(code **)(local_34[0] + 0x2c))(local_34);
    if (iVar6 == -1) break;
    uVar7 = FUN_4a0bf62c(local_34);
    FUN_4a0bf62c(local_34);
    iVar6 = (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18) - 0xd;
    uVar8 = thunk_FUN_4a161570(iVar6);
    FUN_4a0bfa84(local_34,uVar8,iVar6);
    (**(code **)(local_34[0] + 0x38))(local_34,4);
    uVar9 = thunk_FUN_4a161570(0x20);
    uVar9 = FUN_4a0c103c(uVar9,uVar8,iVar6);
    FUN_4a0bfc44(auStack_94,uVar9);
    do {
      iVar6 = FUN_4a0a91fc(auStack_94,local_70,local_58);
    } while (iVar6 != 0);
    thunk_FUN_4a161530(uVar8);
    FUN_4a0bfcf4(auStack_94);
  }
  FUN_4a0bf60c();
  iVar6 = local_48;
  piVar12 = (int *)FUN_4a0c6bc0(local_84);
  piVar12[2] = 0;
  piVar12[3] = 0;
  *piVar12 = (int)puVar2;
  if (0 < iVar6) {
    iVar10 = FUN_4a15e080(iVar6 << 2);
    if (iVar10 == 0) {
      iVar10 = FUN_4a1669a8();
    }
    iVar11 = 0;
    do {
      local_88 = 0;
      *(undefined4 *)(iVar10 + iVar11 * 4) = 0;
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar6);
    thunk_FUN_4a161570(0x18);
    puVar5 = (undefined4 *)FUN_4a0c0628();
    puVar5[3] = 4;
    puVar5[4] = iVar6;
    puVar4 = PTR_PTR_4a0b5a20;
    *puVar5 = PTR_PTR_4a0b5a20;
    puVar5[2] = iVar10;
    *(undefined1 *)(puVar5 + 5) = 1;
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)(puVar4 + 0xc))(puVar5);
    }
    (**(code **)(*piVar12 + 0x1c))(piVar12);
    piVar12[2] = iVar6;
    piVar12[3] = (int)puVar5;
  }
  iVar6 = 0;
  if (0 < local_48) {
    do {
      piVar12 = *(int **)(local_44 + iVar6 * 4);
      if (piVar12 != (int *)0x0) {
        (**(code **)(*piVar12 + 0xc))(piVar12);
      }
      if (local_78 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_78[2];
      }
      *(int **)(iVar10 + iVar6 * 4) = piVar12;
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_48);
  }
  puVar5 = (undefined4 *)FUN_4a0c6bc0(param_1);
  *puVar5 = puVar1;
  puVar5[2] = local_7c;
  puVar5[3] = local_78;
  if (local_78 != (int *)0x0) {
    (**(code **)(*local_78 + 0xc))();
  }
  *puVar5 = puVar2;
  local_84[0] = puVar2;
  iVar6 = FUN_4a0bcc84(local_84);
  if (iVar6 != 0) {
    iVar10 = 0;
    if (0 < local_7c) {
      do {
        iVar10 = iVar10 + 1;
      } while (iVar10 < local_7c);
      if (iVar6 == 0) goto LAB_4a0b58f4;
    }
    FUN_4a14f21c();
  }
LAB_4a0b58f4:
  FUN_4a0c6bf4(local_84);
  iVar6 = 0;
  local_70[0] = puVar3;
  if (0 < local_60) {
    do {
      piVar12 = *(int **)(local_5c + iVar6 * 4);
      *(undefined4 *)(local_5c + iVar6 * 4) = 0;
      if ((piVar12 != (int *)0x0) && (iVar10 = (**(code **)(*piVar12 + 8))(piVar12), iVar10 != 0)) {
        (**(code **)(*piVar12 + 4))(piVar12);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_60);
  }
  local_60 = 0;
  thunk_FUN_4a161530(local_5c);
  FUN_4a0c6bf4(local_70);
  iVar6 = 0;
  local_58[0] = puVar3;
  if (0 < local_48) {
    do {
      piVar12 = *(int **)(local_44 + iVar6 * 4);
      *(undefined4 *)(local_44 + iVar6 * 4) = 0;
      if ((piVar12 != (int *)0x0) && (iVar10 = (**(code **)(*piVar12 + 8))(piVar12), iVar10 != 0)) {
        (**(code **)(*piVar12 + 4))(piVar12);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_48);
  }
  local_48 = 0;
  thunk_FUN_4a161530(local_44);
  FUN_4a0c6bf4(local_58);
  FUN_4a0bfcf4(local_34);
  return;
}



// Address: 4a0b5a24

void FUN_4a0b5a24(int param_1,int param_2)

{
  FUN_4a0b706c();
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined1 *)(param_2 + 0x38) = *(undefined1 *)(param_1 + 0x38);
  *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  return;
}



// Address: 4a0b5a64

void FUN_4a0b5a64(undefined4 param_1,int param_2,int *param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  bool bVar12;
  undefined *local_4c [2];
  int local_44;
  int *local_40;
  int local_38;
  int local_34;
  undefined4 local_30;
  int iStack_2c;
  int *piStack_28;
  
  local_30 = param_1;
  iStack_2c = param_2;
  piStack_28 = param_3;
  local_34 = FUN_4a13daf8(param_3);
  local_38 = FUN_4a13db00(param_3);
  FUN_4a0b5d38(local_30,param_2,local_34,local_38);
  iVar11 = local_34 * local_38;
  piVar5 = (int *)FUN_4a0c6bc0(local_4c);
  puVar2 = PTR_PTR_4a0b5d30;
  piVar5[2] = 0;
  piVar5[3] = 0;
  *piVar5 = (int)puVar2;
  if (0 < iVar11) {
    iVar6 = FUN_4a15e080(iVar11 * 4);
    if (iVar6 == 0) {
      iVar6 = FUN_4a1669a8();
    }
    iVar7 = 0;
    do {
      *(undefined4 *)(iVar6 + iVar7 * 4) = 0;
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar11);
    thunk_FUN_4a161570(0x18);
    puVar8 = (undefined4 *)FUN_4a0c0628();
    puVar8[3] = 4;
    puVar8[4] = iVar11;
    puVar3 = PTR_PTR_4a0b5d34;
    *puVar8 = PTR_PTR_4a0b5d34;
    puVar8[2] = iVar6;
    *(undefined1 *)(puVar8 + 5) = 1;
    if (puVar8 != (undefined4 *)0x0) {
      (**(code **)(puVar3 + 0xc))(puVar8);
    }
    (**(code **)(*piVar5 + 0x1c))(piVar5);
    piVar5[2] = iVar11;
    piVar5[3] = (int)puVar8;
  }
  (**(code **)(*param_3 + 0x1c))(param_3,local_4c,0,local_34,0,0,local_34,local_38);
  if (param_2 == 99 || param_2 == 0x65) {
    iVar6 = FUN_4a15e080(iVar11 * 3);
    iVar7 = 0;
    if (0 < iVar11) {
      do {
        if (local_40 == (int *)0x0) {
          iVar9 = 0;
        }
        else {
          iVar9 = local_40[2];
        }
        uVar10 = *(undefined4 *)(iVar9 + iVar7 * 4);
        *(char *)(iVar6 + iVar7 * 3) = (char)((uint)uVar10 >> 0x10);
        iVar9 = iVar7 * 3 + iVar6;
        iVar7 = iVar7 + 1;
        *(char *)(iVar9 + 1) = (char)((uint)uVar10 >> 8);
        *(char *)(iVar9 + 2) = (char)uVar10;
      } while (iVar7 < iVar11);
    }
LAB_4a0b5c5c:
    FUN_4a0b5e84(local_30,iVar6);
    FUN_4a14f21c(iVar6);
  }
  else if (param_2 == 100) {
    iVar6 = FUN_4a15e080(iVar11 * 4);
    iVar7 = 0;
    if (0 < iVar11) {
      do {
        if (local_40 == (int *)0x0) {
          iVar9 = 0;
        }
        else {
          iVar9 = local_40[2];
        }
        uVar10 = *(undefined4 *)(iVar9 + iVar7 * 4);
        *(char *)(iVar6 + iVar7 * 4) = (char)((uint)uVar10 >> 0x10);
        iVar9 = iVar6 + iVar7 * 4;
        *(char *)(iVar9 + 1) = (char)((uint)uVar10 >> 8);
        iVar7 = iVar7 + 1;
        *(char *)(iVar9 + 2) = (char)uVar10;
        *(char *)(iVar9 + 3) = (char)((uint)uVar10 >> 0x18);
      } while (iVar7 < iVar11);
    }
    goto LAB_4a0b5c5c;
  }
  piVar5 = local_40;
  iVar11 = local_44;
  local_4c[0] = puVar2;
  bVar12 = local_40 != (int *)0x0;
  if (bVar12) {
    iVar6 = local_40[2];
    cVar1 = (char)local_40[5];
  }
  else {
    iVar6 = 0;
    cVar1 = '\0';
  }
  local_40 = (int *)0x0;
  local_44 = 0;
  if ((piVar5 == (int *)0x0) || (iVar7 = (**(code **)(*piVar5 + 8))(piVar5), iVar7 == 0)) {
    bVar4 = 0;
  }
  else {
    (**(code **)(*piVar5 + 4))(piVar5);
    bVar4 = 1;
  }
  if (!(bool)(bVar4 & (bVar12 && cVar1 != '\0'))) {
    iVar6 = 0;
  }
  if (iVar6 != 0) {
    iVar7 = 0;
    if (0 < iVar11) {
      do {
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar11);
      if (iVar6 == 0) goto LAB_4a0b5d1c;
    }
    FUN_4a14f21c();
  }
LAB_4a0b5d1c:
  FUN_4a0c6bf4(local_4c);
  return;
}



// Address: 4a0b5d38

void FUN_4a0b5d38(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  
  *(uint *)(param_1 + 0x2c) = param_2;
  *(int *)(param_1 + 0x30) = param_3;
  *(int *)(param_1 + 0x34) = param_4;
  uVar3 = param_2 & 0xff;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (uVar3 == 0x67) {
switchD_4a0b5d7c_caseD_62:
    *(undefined4 *)(param_1 + 0x3c) = 0x10;
  }
  else if (uVar3 < 0x68) {
    switch(uVar3) {
    case 0x60:
    case 0x61:
switchD_4a0b5d7c_caseD_60:
      *(undefined4 *)(param_1 + 0x3c) = 8;
      goto LAB_4a0b5e04;
    case 0x62:
    case 0x65:
    case 0x66:
      goto switchD_4a0b5d7c_caseD_62;
    case 99:
      uVar4 = 0x18;
      break;
    case 100:
      uVar4 = 0x20;
      break;
    default:
      goto LAB_4a0b5e78;
    }
switchD_4a0b5dac_caseD_78:
    *(undefined4 *)(param_1 + 0x3c) = uVar4;
  }
  else {
    uVar4 = 4;
    switch(uVar3) {
    case 0x78:
    case 0x7c:
    case 0x7d:
      goto switchD_4a0b5dac_caseD_78;
    case 0x79:
      goto switchD_4a0b5d7c_caseD_60;
    case 0x7a:
    case 0x7b:
      *(undefined4 *)(param_1 + 0x3c) = 2;
      break;
    default:
      goto LAB_4a0b5e78;
    }
  }
LAB_4a0b5e04:
  bVar6 = (~(param_2 >> 0xf) & 1) == 0;
  uVar3 = (uint)bVar6;
  if (!bVar6) {
    while( true ) {
      iVar5 = 1 << (uVar3 & 0xff);
      iVar1 = param_3 - iVar5;
      iVar2 = param_3;
      if (param_3 < iVar5) {
        iVar1 = param_4 - iVar5;
        iVar2 = param_4;
      }
      if (iVar1 < 0 != SBORROW4(iVar2,iVar5)) break;
      uVar3 = uVar3 + 1;
    }
  }
  *(uint *)(param_1 + 0x40) = uVar3;
  *(uint *)(param_1 + 0x48) = uVar3;
  uVar4 = thunk_FUN_4a161570(uVar3 * 4);
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    do {
      FUN_4a13bfb0(param_1,iVar5);
      uVar4 = thunk_FUN_4a161570();
      *(undefined4 *)(*(int *)(param_1 + 0x44) + iVar5 * 4) = uVar4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x48));
  }
LAB_4a0b5e78:
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



// Address: 4a0b5e84

void FUN_4a0b5e84(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int local_74;
  int local_70;
  uint local_60;
  uint local_5c;
  uint local_58;
  int local_54;
  int local_4c;
  
  uVar3 = *(uint *)(param_1 + 0x2c) & 0xff;
  if (uVar3 == 0x78) {
    iVar5 = 0;
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x40)) {
      do {
        iVar6 = iVar4;
        if (*(int *)(param_1 + 0x48) <= iVar4) {
          iVar6 = *(int *)(param_1 + 0x48) + -1;
        }
        puVar12 = *(undefined1 **)(*(int *)(param_1 + 0x44) + iVar6 * 4);
        uVar3 = FUN_4a13bfb0(param_1,iVar4);
        if (0 < (int)uVar3) {
          uVar10 = uVar3 & 1;
          if (uVar10 == 1) {
            *puVar12 = *(undefined1 *)(param_2 + iVar5);
          }
          uVar11 = (uint)(uVar10 == 1);
          for (; (int)uVar10 < (int)uVar3; uVar10 = uVar10 + 2) {
            puVar12[uVar11] = *(undefined1 *)(param_2 + uVar11 + iVar5);
            puVar12[uVar11 + 1] = *(undefined1 *)(param_2 + uVar11 + 1 + iVar5);
            uVar11 = uVar11 + 2;
          }
        }
        iVar5 = iVar5 + uVar3;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x40));
    }
  }
  else if (uVar3 < 0x79) {
    if (uVar3 == 99) {
      local_58 = 0;
      local_5c = 0;
      local_60 = 0;
      if (0 < *(int *)(param_1 + 0x40)) {
        do {
          uVar3 = local_60;
          if (*(int *)(param_1 + 0x48) <= (int)local_60) {
            uVar3 = *(int *)(param_1 + 0x48) - 1;
          }
          iVar4 = *(int *)(*(int *)(param_1 + 0x44) + uVar3 * 4);
          iVar5 = *(int *)(param_1 + 0x30) >> (local_60 & 0xff);
          if (iVar5 == 0) {
            iVar5 = 1;
          }
          iVar6 = *(int *)(param_1 + 0x34) >> (local_60 & 0xff);
          if (iVar6 == 0) {
            iVar6 = 1;
          }
          if (0 < (int)local_60) {
            iVar7 = *(int *)(param_1 + 0x34) >> (local_60 - 1 & 0xff);
            if (iVar7 == 0) {
              iVar7 = 1;
            }
            if (iVar7 != iVar6) {
              local_58 = local_60;
            }
            iVar7 = *(int *)(param_1 + 0x30) >> (local_60 - 1 & 0xff);
            if (iVar7 == 0) {
              iVar7 = 1;
            }
            if (iVar7 != iVar5) {
              local_5c = local_60;
            }
          }
          local_70 = 0;
          if (0 < iVar6) {
            iVar7 = 1 << (local_5c & 0xff);
            iVar2 = 1 << (local_58 & 0xff);
            uVar3 = local_5c + local_58;
            do {
              local_74 = 0;
              if (0 < iVar5) {
                do {
                  uVar10 = 0;
                  uVar11 = 0;
                  uVar15 = 0;
                  iVar13 = 0;
                  if (0 < iVar2) {
                    do {
                      if (0 < iVar7) {
                        iVar8 = 0;
                        iVar9 = iVar7;
                        do {
                          iVar1 = (((local_70 << (local_58 & 0xff)) + iVar13) *
                                   *(int *)(param_1 + 0x30) + (local_74 << (local_5c & 0xff)) +
                                  iVar8) * 3;
                          iVar17 = iVar1 + param_2;
                          iVar9 = iVar9 + -1;
                          uVar10 = uVar10 + *(byte *)(param_2 + iVar1);
                          iVar8 = iVar8 + 1;
                          uVar11 = uVar11 + *(byte *)(iVar17 + 1);
                          uVar15 = uVar15 + *(byte *)(iVar17 + 2);
                        } while (iVar9 != 0);
                      }
                      iVar13 = iVar13 + 1;
                    } while (iVar13 < iVar2);
                  }
                  iVar13 = (local_70 * iVar5 + local_74) * 3;
                  *(char *)(iVar4 + iVar13) = (char)(uVar10 >> (uVar3 & 0xff));
                  iVar13 = iVar13 + iVar4;
                  *(char *)(iVar13 + 1) = (char)(uVar11 >> (uVar3 & 0xff));
                  *(char *)(iVar13 + 2) = (char)(uVar15 >> (uVar3 & 0xff));
                  local_74 = local_74 + 1;
                } while (local_74 < iVar5);
              }
              local_70 = local_70 + 1;
            } while (local_70 < iVar6);
          }
          local_60 = local_60 + 1;
        } while ((int)local_60 < *(int *)(param_1 + 0x40));
      }
    }
    else if (uVar3 == 100) {
      local_58 = 0;
      local_5c = 0;
      local_60 = 0;
      if (0 < *(int *)(param_1 + 0x40)) {
        do {
          uVar3 = local_60;
          if (*(int *)(param_1 + 0x48) <= (int)local_60) {
            uVar3 = *(int *)(param_1 + 0x48) - 1;
          }
          iVar4 = *(int *)(*(int *)(param_1 + 0x44) + uVar3 * 4);
          iVar5 = *(int *)(param_1 + 0x30) >> (local_60 & 0xff);
          if (iVar5 == 0) {
            iVar5 = 1;
          }
          iVar6 = *(int *)(param_1 + 0x34) >> (local_60 & 0xff);
          if (iVar6 == 0) {
            iVar6 = 1;
          }
          if (0 < (int)local_60) {
            iVar7 = *(int *)(param_1 + 0x34) >> (local_60 - 1 & 0xff);
            if (iVar7 == 0) {
              iVar7 = 1;
            }
            if (iVar7 != iVar6) {
              local_58 = local_60;
            }
            iVar7 = *(int *)(param_1 + 0x30) >> (local_60 - 1 & 0xff);
            if (iVar7 == 0) {
              iVar7 = 1;
            }
            if (iVar7 != iVar5) {
              local_5c = local_60;
            }
          }
          local_70 = 0;
          if (0 < iVar6) {
            iVar7 = 1 << (local_5c & 0xff);
            iVar2 = 1 << (local_58 & 0xff);
            uVar3 = local_5c + local_58;
            do {
              local_4c = 0;
              if (0 < iVar5) {
                do {
                  uVar15 = 0;
                  uVar10 = 0;
                  uVar16 = 0;
                  uVar11 = 0;
                  iVar13 = 0;
                  if (0 < iVar2) {
                    do {
                      if (0 < iVar7) {
                        iVar8 = 0;
                        iVar9 = iVar7;
                        do {
                          iVar1 = (((local_70 << (local_58 & 0xff)) + iVar13) *
                                   *(int *)(param_1 + 0x30) +
                                  (local_4c << (local_5c & 0xff)) + iVar8) * 4;
                          iVar17 = iVar1 + param_2;
                          uVar15 = uVar15 + *(byte *)(param_2 + iVar1);
                          iVar9 = iVar9 + -1;
                          uVar10 = uVar10 + *(byte *)(iVar17 + 1);
                          uVar16 = uVar16 + *(byte *)(iVar17 + 2);
                          iVar8 = iVar8 + 1;
                          uVar11 = uVar11 + *(byte *)(iVar17 + 3);
                        } while (iVar9 != 0);
                      }
                      iVar13 = iVar13 + 1;
                    } while (iVar13 < iVar2);
                  }
                  iVar13 = (local_70 * iVar5 + local_4c) * 4;
                  *(char *)(iVar4 + iVar13) = (char)(uVar15 >> (uVar3 & 0xff));
                  iVar13 = iVar13 + iVar4;
                  *(char *)(iVar13 + 1) = (char)(uVar10 >> (uVar3 & 0xff));
                  *(char *)(iVar13 + 2) = (char)(uVar16 >> (uVar3 & 0xff));
                  *(char *)(iVar13 + 3) = (char)(uVar11 >> (uVar3 & 0xff));
                  local_4c = local_4c + 1;
                } while (local_4c < iVar5);
              }
              local_70 = local_70 + 1;
            } while (local_70 < iVar6);
          }
          local_60 = local_60 + 1;
        } while ((int)local_60 < *(int *)(param_1 + 0x40));
      }
    }
    else if (uVar3 == 0x65) {
      local_58 = 0;
      local_5c = 0;
      local_60 = 0;
      if (0 < *(int *)(param_1 + 0x40)) {
        do {
          uVar3 = local_60;
          if (*(int *)(param_1 + 0x48) <= (int)local_60) {
            uVar3 = *(int *)(param_1 + 0x48) - 1;
          }
          iVar4 = *(int *)(*(int *)(param_1 + 0x44) + uVar3 * 4);
          iVar5 = *(int *)(param_1 + 0x30) >> (local_60 & 0xff);
          if (iVar5 == 0) {
            iVar5 = 1;
          }
          iVar6 = *(int *)(param_1 + 0x34) >> (local_60 & 0xff);
          if (iVar6 == 0) {
            iVar6 = 1;
          }
          if (0 < (int)local_60) {
            iVar7 = *(int *)(param_1 + 0x34) >> (local_60 - 1 & 0xff);
            if (iVar7 == 0) {
              iVar7 = 1;
            }
            if (iVar7 != iVar6) {
              local_58 = local_60;
            }
            iVar7 = *(int *)(param_1 + 0x30) >> (local_60 - 1 & 0xff);
            if (iVar7 == 0) {
              iVar7 = 1;
            }
            if (iVar7 != iVar5) {
              local_5c = local_60;
            }
          }
          local_70 = 0;
          if (0 < iVar6) {
            iVar7 = 1 << (local_5c & 0xff);
            iVar2 = 1 << (local_58 & 0xff);
            uVar3 = local_5c + local_58;
            do {
              local_54 = 0;
              if (0 < iVar5) {
                do {
                  uVar10 = 0;
                  uVar11 = 0;
                  uVar15 = 0;
                  iVar13 = 0;
                  if (0 < iVar2) {
                    do {
                      if (0 < iVar7) {
                        iVar8 = 0;
                        iVar9 = iVar7;
                        do {
                          iVar1 = (((local_70 << (local_58 & 0xff)) + iVar13) *
                                   *(int *)(param_1 + 0x30) + (local_54 << (local_5c & 0xff)) +
                                  iVar8) * 3;
                          iVar17 = iVar1 + param_2;
                          iVar9 = iVar9 + -1;
                          uVar10 = uVar10 + *(byte *)(param_2 + iVar1);
                          iVar8 = iVar8 + 1;
                          uVar11 = uVar11 + *(byte *)(iVar17 + 1);
                          uVar15 = uVar15 + *(byte *)(iVar17 + 2);
                        } while (iVar9 != 0);
                      }
                      iVar13 = iVar13 + 1;
                    } while (iVar13 < iVar2);
                  }
                  *(ushort *)(iVar4 + (local_70 * iVar5 + local_54) * 2) =
                       (ushort)((uVar10 >> (uVar3 & 0xff) & 0xf8) << 8) |
                       (ushort)((uVar11 >> (uVar3 & 0xff) & 0xfc) << 3) |
                       (ushort)((uVar15 >> (uVar3 & 0xff) & 0xf8) >> 3);
                  local_54 = local_54 + 1;
                } while (local_54 < iVar5);
              }
              local_70 = local_70 + 1;
            } while (local_70 < iVar6);
          }
          local_60 = local_60 + 1;
        } while ((int)local_60 < *(int *)(param_1 + 0x40));
      }
    }
  }
  else if (uVar3 == 0x79) {
    iVar5 = 0;
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x40)) {
      do {
        iVar6 = iVar4;
        if (*(int *)(param_1 + 0x48) <= iVar4) {
          iVar6 = *(int *)(param_1 + 0x48) + -1;
        }
        puVar12 = *(undefined1 **)(*(int *)(param_1 + 0x44) + iVar6 * 4);
        uVar3 = FUN_4a13bfb0(param_1,iVar4);
        if (0 < (int)uVar3) {
          uVar10 = uVar3 & 1;
          if (uVar10 == 1) {
            *puVar12 = *(undefined1 *)(param_2 + iVar5);
          }
          uVar11 = (uint)(uVar10 == 1);
          for (; (int)uVar10 < (int)uVar3; uVar10 = uVar10 + 2) {
            puVar12[uVar11] = *(undefined1 *)(param_2 + uVar11 + iVar5);
            puVar12[uVar11 + 1] = *(undefined1 *)(param_2 + uVar11 + 1 + iVar5);
            uVar11 = uVar11 + 2;
          }
        }
        iVar5 = iVar5 + uVar3;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x40));
    }
  }
  else if (uVar3 == 0x7c) {
    iVar5 = 0;
    uVar3 = 0;
    if (0 < *(int *)(param_1 + 0x40)) {
      do {
        uVar10 = uVar3;
        if (*(int *)(param_1 + 0x48) <= (int)uVar3) {
          uVar10 = *(int *)(param_1 + 0x48) - 1;
        }
        uVar14 = *(undefined4 *)(*(int *)(param_1 + 0x44) + uVar10 * 4);
        iVar6 = FUN_4a13bfb0(param_1,uVar3);
        iVar4 = *(int *)(param_1 + 0x30) >> (uVar3 & 0xff);
        if (iVar4 == 0) {
          iVar4 = 1;
        }
        FUN_4a000f84(uVar14,param_2 + iVar5,iVar6);
        if (8 < iVar4) {
          iVar5 = iVar5 + iVar6;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < *(int *)(param_1 + 0x40));
    }
  }
  else if (uVar3 == 0x7d) {
    iVar5 = 0;
    uVar3 = 0;
    if (0 < *(int *)(param_1 + 0x40)) {
      do {
        uVar10 = uVar3;
        if (*(int *)(param_1 + 0x48) <= (int)uVar3) {
          uVar10 = *(int *)(param_1 + 0x48) - 1;
        }
        uVar14 = *(undefined4 *)(*(int *)(param_1 + 0x44) + uVar10 * 4);
        iVar6 = FUN_4a13bfb0(param_1,uVar3);
        iVar4 = *(int *)(param_1 + 0x30) >> (uVar3 & 0xff);
        if (iVar4 == 0) {
          iVar4 = 1;
        }
        FUN_4a000f84(uVar14,param_2 + iVar5,iVar6);
        if (8 < iVar4) {
          iVar5 = iVar5 + iVar6;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < *(int *)(param_1 + 0x40));
    }
  }
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}



// Address: 4a0b6838

void FUN_4a0b6838(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int in_r12;
  int iVar13;
  bool bVar14;
  int local_68;
  int local_64;
  int local_60;
  uint local_50;
  int local_4c;
  int local_48;
  
  if (*(int *)(param_1 + 0x2c) == 99) {
    local_50 = 0;
    if (0 < *(int *)(param_1 + 0x40)) {
      do {
        uVar3 = local_50;
        if (*(int *)(param_1 + 0x48) <= (int)local_50) {
          uVar3 = *(int *)(param_1 + 0x48) - 1;
        }
        iVar4 = *(int *)(*(int *)(param_1 + 0x44) + uVar3 * 4);
        iVar5 = *(int *)(param_1 + 0x30) >> (local_50 & 0xff);
        if (iVar5 == 0) {
          iVar5 = 1;
        }
        iVar6 = *(int *)(param_1 + 0x34) >> (local_50 & 0xff);
        if (iVar6 == 0) {
          iVar6 = 1;
        }
        local_60 = 0;
        if (0 < iVar6) {
          iVar2 = 1 << (local_50 & 0xff);
          uVar3 = local_50 << 1;
          do {
            local_64 = 0;
            if (0 < iVar5) {
              do {
                iVar9 = 0;
                iVar10 = 0;
                iVar11 = 0;
                local_68 = 0;
                if (0 < iVar2) {
                  do {
                    iVar12 = 0;
                    if (0 < iVar2) {
                      iVar7 = *(int *)(param_2 + 0xc);
                      do {
                        bVar14 = iVar7 == 0;
                        if (!bVar14) {
                          in_r12 = *(int *)(iVar7 + 8);
                        }
                        iVar8 = (uint)*(byte *)(param_3 +
                                               ((local_60 << (local_50 & 0xff)) + local_68) *
                                               *(int *)(param_1 + 0x30) +
                                               (local_64 << (local_50 & 0xff)) + iVar12) * 3;
                        if (bVar14) {
                          in_r12 = 0;
                        }
                        iVar12 = iVar12 + 1;
                        iVar9 = iVar9 + (uint)*(byte *)(in_r12 + iVar8);
                        if (bVar14) {
                          iVar13 = 0;
                        }
                        else {
                          iVar13 = *(int *)(iVar7 + 8);
                        }
                        iVar10 = iVar10 + (uint)*(byte *)(iVar13 + iVar8 + 1);
                        in_r12 = iVar8 + 2;
                        if (bVar14) {
                          iVar8 = 0;
                        }
                        else {
                          iVar8 = *(int *)(iVar7 + 8);
                        }
                        iVar11 = iVar11 + (uint)*(byte *)(iVar8 + in_r12);
                      } while (iVar12 < iVar2);
                    }
                    local_68 = local_68 + 1;
                  } while (local_68 < iVar2);
                }
                in_r12 = iVar11 >> (uVar3 & 0xff);
                iVar11 = (local_60 * iVar5 + local_64) * 3;
                *(char *)(iVar4 + iVar11) = (char)(iVar9 >> (uVar3 & 0xff));
                iVar11 = iVar11 + iVar4;
                *(char *)(iVar11 + 1) = (char)(iVar10 >> (uVar3 & 0xff));
                *(char *)(iVar11 + 2) = (char)in_r12;
                local_64 = local_64 + 1;
              } while (local_64 < iVar5);
            }
            local_60 = local_60 + 1;
          } while (local_60 < iVar6);
        }
        local_50 = local_50 + 1;
      } while ((int)local_50 < *(int *)(param_1 + 0x40));
    }
  }
  else if ((*(int *)(param_1 + 0x2c) == 100) && (local_50 = 0, 0 < *(int *)(param_1 + 0x40))) {
    do {
      uVar3 = local_50;
      if (*(int *)(param_1 + 0x48) <= (int)local_50) {
        uVar3 = *(int *)(param_1 + 0x48) - 1;
      }
      iVar4 = *(int *)(*(int *)(param_1 + 0x44) + uVar3 * 4);
      iVar5 = *(int *)(param_1 + 0x30) >> (local_50 & 0xff);
      if (iVar5 == 0) {
        iVar5 = 1;
      }
      iVar6 = *(int *)(param_1 + 0x34) >> (local_50 & 0xff);
      if (iVar6 == 0) {
        iVar6 = 1;
      }
      local_60 = 0;
      if (0 < iVar6) {
        iVar2 = 1 << (local_50 & 0xff);
        uVar3 = local_50 << 1;
        do {
          local_48 = 0;
          if (0 < iVar5) {
            do {
              iVar9 = 0;
              iVar10 = 0;
              iVar11 = 0;
              iVar12 = 0;
              local_4c = 0;
              if (0 < iVar2) {
                do {
                  iVar7 = 0;
                  if (0 < iVar2) {
                    iVar8 = *(int *)(param_2 + 0xc);
                    do {
                      bVar14 = iVar8 != 0;
                      if (bVar14) {
                        iVar13 = *(int *)(iVar8 + 8);
                      }
                      else {
                        iVar13 = 0;
                      }
                      iVar1 = (uint)*(byte *)(param_3 +
                                             ((local_60 << (local_50 & 0xff)) + local_4c) *
                                             *(int *)(param_1 + 0x30) +
                                             (local_48 << (local_50 & 0xff)) + iVar7) * 4;
                      iVar7 = iVar7 + 1;
                      iVar9 = iVar9 + (uint)*(byte *)(iVar13 + iVar1);
                      if (bVar14) {
                        iVar13 = *(int *)(iVar8 + 8);
                      }
                      else {
                        iVar13 = 0;
                      }
                      iVar10 = iVar10 + (uint)*(byte *)(iVar13 + iVar1 + 1);
                      if (bVar14) {
                        iVar13 = *(int *)(iVar8 + 8);
                      }
                      else {
                        iVar13 = 0;
                      }
                      iVar11 = iVar11 + (uint)*(byte *)(iVar13 + iVar1 + 2);
                      if (bVar14) {
                        iVar13 = *(int *)(iVar8 + 8);
                      }
                      else {
                        iVar13 = 0;
                      }
                      iVar12 = iVar12 + (uint)*(byte *)(iVar13 + iVar1 + 3);
                    } while (iVar7 < iVar2);
                  }
                  local_4c = local_4c + 1;
                } while (local_4c < iVar2);
              }
              iVar7 = (local_60 * iVar5 + local_48) * 4;
              *(char *)(iVar4 + iVar7) = (char)(iVar9 >> (uVar3 & 0xff));
              iVar7 = iVar7 + iVar4;
              *(char *)(iVar7 + 1) = (char)(iVar10 >> (uVar3 & 0xff));
              *(char *)(iVar7 + 2) = (char)(iVar11 >> (uVar3 & 0xff));
              *(char *)(iVar7 + 3) = (char)(iVar12 >> (uVar3 & 0xff));
              local_48 = local_48 + 1;
            } while (local_48 < iVar5);
          }
          local_60 = local_60 + 1;
        } while (local_60 < iVar6);
      }
      local_50 = local_50 + 1;
    } while ((int)local_50 < *(int *)(param_1 + 0x40));
  }
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}



// Address: 4a0b6ca0

void FUN_4a0b6ca0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    do {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x44) + iVar2 * 4);
      *(undefined4 *)(*(int *)(param_1 + 0x44) + iVar2 * 4) = 0;
      thunk_FUN_4a161530(uVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x48));
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    thunk_FUN_4a161530();
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}



// Address: 4a0b6cfc

undefined4 * FUN_4a0b6cfc(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)FUN_4a0b7654();
  *puVar1 = PTR_PTR_4a0b6dd4;
  puVar2 = (undefined4 *)thunk_FUN_4a161570(0x1c);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  *puVar2 = 0;
  puVar1[10] = puVar2;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *(undefined1 *)(puVar1 + 0xe) = 1;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 0xc))();
  }
  FUN_4a0b5a64(puVar1,param_2,param_3);
  if ((param_3 != (int *)0x0) && (iVar3 = (**(code **)(*param_3 + 8))(param_3), iVar3 != 0)) {
    (**(code **)(*param_3 + 4))(param_3);
  }
  return puVar1;
}



// Address: 4a0b6dd8

undefined4 *
FUN_4a0b6dd8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar1 = (undefined4 *)FUN_4a0b7654();
  *puVar1 = PTR_PTR_4a0b6eac;
  puVar2 = (undefined4 *)thunk_FUN_4a161570(0x1c);
  iVar5 = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  *puVar2 = 0;
  puVar1[10] = puVar2;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *(undefined1 *)(puVar1 + 0xe) = 1;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  FUN_4a0b5d38(puVar1,param_2,param_3,param_4);
  iVar3 = *(int *)(param_5 + 0xc);
  if (param_2 == 0x78 || param_2 == 0x79) {
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(iVar3 + 8);
    }
    FUN_4a0b5e84(puVar1,uVar4);
  }
  else {
    if (iVar3 != 0) {
      iVar5 = *(int *)(iVar3 + 8);
    }
    FUN_4a0b5e84(puVar1,iVar5 + 0x34);
  }
  return puVar1;
}



// Address: 4a0b6eb0

undefined4 * FUN_4a0b6eb0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)FUN_4a0b7654();
  *puVar1 = PTR_PTR_4a0b6f28;
  puVar2 = (undefined4 *)thunk_FUN_4a161570(0x1c);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  *puVar2 = 0;
  puVar1[0xb] = 0;
  puVar1[10] = puVar2;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *(undefined1 *)(puVar1 + 0xe) = 1;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  return puVar1;
}



// Address: 4a0b6fd4

void FUN_4a0b6fd4(undefined4 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  iVar5 = 0;
  *param_1 = PTR_PTR_4a0b7068;
  if (0 < (int)param_1[0x12]) {
    do {
      uVar2 = *(undefined4 *)(param_1[0x11] + iVar5 * 4);
      *(undefined4 *)(param_1[0x11] + iVar5 * 4) = 0;
      thunk_FUN_4a161530(uVar2);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)param_1[0x12]);
  }
  if (param_1[0x11] != 0) {
    thunk_FUN_4a161530();
    param_1[0x11] = 0;
  }
  param_1[0x12] = 0;
  iVar5 = param_1[10];
  if (iVar5 != 0) {
    if (*(code **)(iVar5 + 0x18) != (code *)0x0) {
      (**(code **)(iVar5 + 0x18))(iVar5);
    }
    thunk_FUN_4a161530(iVar5);
  }
  param_1[10] = 0;
  *param_1 = PTR_PTR_4a0b77cc;
  piVar6 = (int *)param_1[2];
  if (piVar6 != (int *)0x0) {
    param_1[2] = 0;
    iVar5 = (**(code **)(*piVar6 + 8))(piVar6);
    if (iVar5 != 0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
  }
  puVar3 = PTR_PTR_4a0b77d0;
  param_1[5] = PTR_PTR_4a0b77d0;
  piVar6 = (int *)param_1[8];
  iVar5 = param_1[7];
  if (piVar6 != (int *)0x0) {
    iVar7 = piVar6[2];
    puVar3 = (undefined *)(uint)*(byte *)(piVar6 + 5);
  }
  else {
    iVar7 = 0;
  }
  param_1[8] = 0;
  param_1[7] = 0;
  if ((piVar6 == (int *)0x0) || (iVar4 = (**(code **)(*piVar6 + 8))(piVar6), iVar4 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar6 + 4))(piVar6);
    bVar1 = 1;
  }
  if (!(bool)(bVar1 & (piVar6 != (int *)0x0 && puVar3 != (undefined *)0x0))) {
    iVar7 = 0;
  }
  if (iVar7 != 0) {
    iVar4 = 0;
    if (0 < iVar5) {
      do {
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar5);
      if (iVar7 == 0) goto LAB_4a0b77b8;
    }
    FUN_4a14f21c();
  }
LAB_4a0b77b8:
  iVar5 = FUN_4a0c6bf4(param_1 + 5);
  *(undefined **)(iVar5 + -0x14) = PTR_PTR_4a0c0674;
  *(undefined4 *)(iVar5 + -0x10) = 0xffffffff;
  return;
}



// Address: 4a0b706c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0b706c(int param_1,int param_2)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  puVar1 = PTR_PTR_4a0b72a8;
  iVar7 = 0;
  iVar9 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar9 = *(int *)(*(int *)(param_1 + 8) + 0x10);
  }
  if (iVar9 < 1) {
    return;
  }
  do {
    piVar8 = *(int **)(*(int *)(*(int *)(param_1 + 8) + 0x14) + iVar7 * 4);
    if (*(int *)(param_2 + 8) == 0) {
      thunk_FUN_4a161570(0x18);
      piVar2 = (int *)FUN_4a0c6bc0();
      *piVar2 = (int)puVar1;
      piVar2[2] = 10;
      piVar2[4] = 0;
      piVar2[3] = 10;
      piVar2[5] = 0;
      iVar3 = thunk_FUN_4a161570(0x28);
      piVar2[5] = iVar3;
      if (iVar3 != 0) {
        iVar3 = 0;
        if (0 < piVar2[4]) {
          do {
            iVar5 = iVar3 + 1;
            *(undefined4 *)(piVar2[5] + iVar3 * 4) = *(undefined4 *)(iVar3 * 4);
            iVar3 = iVar5;
          } while (iVar5 < piVar2[4]);
        }
        thunk_FUN_4a161530(0);
      }
      iVar3 = piVar2[4];
      if (piVar2[4] < piVar2[3]) {
        do {
          iVar5 = iVar3 + 1;
          *(undefined4 *)(piVar2[5] + iVar3 * 4) = 0;
          iVar3 = iVar5;
        } while (iVar5 < piVar2[3]);
      }
      *(int **)(param_2 + 8) = piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xc))();
      }
    }
    iVar5 = *(int *)(param_2 + 8);
    iVar3 = *(int *)(iVar5 + 0xc);
    if ((*(int *)(iVar5 + 0x10) == iVar3) && (iVar4 = *(int *)(iVar5 + 8) + iVar3, iVar3 < iVar4)) {
      *(int *)(iVar5 + 0xc) = iVar4;
      iVar6 = *(int *)(iVar5 + 0x14);
      iVar3 = thunk_FUN_4a161570(iVar4 * 4);
      *(int *)(iVar5 + 0x14) = iVar3;
      if (iVar3 != 0) {
        iVar3 = 0;
        if (0 < *(int *)(iVar5 + 0x10)) {
          do {
            iVar4 = iVar3 + 1;
            *(undefined4 *)(*(int *)(iVar5 + 0x14) + iVar3 * 4) = *(undefined4 *)(iVar6 + iVar3 * 4)
            ;
            iVar3 = iVar4;
          } while (iVar4 < *(int *)(iVar5 + 0x10));
        }
        thunk_FUN_4a161530(iVar6);
      }
      iVar3 = *(int *)(iVar5 + 0x10);
      if (iVar3 < *(int *)(iVar5 + 0xc)) {
        do {
          iVar4 = iVar3 + 1;
          *(undefined4 *)(*(int *)(iVar5 + 0x14) + iVar3 * 4) = 0;
          iVar3 = iVar4;
        } while (iVar4 < *(int *)(iVar5 + 0xc));
      }
    }
    iVar3 = *(int *)(iVar5 + 0x10);
    *(int *)(iVar5 + 0x10) = iVar3 + 1;
    piVar2 = *(int **)(*(int *)(iVar5 + 0x14) + iVar3 * 4);
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 0xc))();
    }
    *(int **)(*(int *)(iVar5 + 0x14) + iVar3 * 4) = piVar8;
    if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 8))(piVar2), iVar3 != 0)) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < iVar9);
  return;
}



// Address: 4a0b72ac

void FUN_4a0b72ac(void)

{
  return;
}



// Address: 4a0b72b0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0b72b0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(int *)(param_1 + 8) == 0) {
    thunk_FUN_4a161570(0x18);
    piVar1 = (int *)FUN_4a0c6bc0();
    *piVar1 = (int)PTR_PTR_4a0b74a4;
    piVar1[2] = 10;
    piVar1[4] = 0;
    piVar1[3] = 10;
    piVar1[5] = 0;
    iVar2 = thunk_FUN_4a161570(0x28);
    piVar1[5] = iVar2;
    if (iVar2 != 0) {
      iVar2 = 0;
      if (0 < piVar1[4]) {
        do {
          iVar4 = iVar2 + 1;
          *(undefined4 *)(piVar1[5] + iVar2 * 4) = *(undefined4 *)(iVar2 * 4);
          iVar2 = iVar4;
        } while (iVar4 < piVar1[4]);
      }
      thunk_FUN_4a161530(0);
    }
    iVar2 = piVar1[4];
    if (piVar1[4] < piVar1[3]) {
      do {
        iVar4 = iVar2 + 1;
        *(undefined4 *)(piVar1[5] + iVar2 * 4) = 0;
        iVar2 = iVar4;
      } while (iVar4 < piVar1[3]);
    }
    *(int **)(param_1 + 8) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))();
    }
  }
  iVar4 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(iVar4 + 0xc);
  if ((*(int *)(iVar4 + 0x10) == iVar2) && (iVar3 = *(int *)(iVar4 + 8) + iVar2, iVar2 < iVar3)) {
    *(int *)(iVar4 + 0xc) = iVar3;
    iVar5 = *(int *)(iVar4 + 0x14);
    iVar2 = thunk_FUN_4a161570(iVar3 * 4);
    *(int *)(iVar4 + 0x14) = iVar2;
    if (iVar2 != 0) {
      iVar2 = 0;
      if (0 < *(int *)(iVar4 + 0x10)) {
        do {
          iVar3 = iVar2 + 1;
          *(undefined4 *)(*(int *)(iVar4 + 0x14) + iVar2 * 4) = *(undefined4 *)(iVar5 + iVar2 * 4);
          iVar2 = iVar3;
        } while (iVar3 < *(int *)(iVar4 + 0x10));
      }
      thunk_FUN_4a161530(iVar5);
    }
    iVar2 = *(int *)(iVar4 + 0x10);
    if (*(int *)(iVar4 + 0x10) < *(int *)(iVar4 + 0xc)) {
      do {
        iVar3 = iVar2 + 1;
        *(undefined4 *)(*(int *)(iVar4 + 0x14) + iVar2 * 4) = 0;
        iVar2 = iVar3;
      } while (iVar3 < *(int *)(iVar4 + 0xc));
    }
  }
  iVar2 = *(int *)(iVar4 + 0x10);
  *(int *)(iVar4 + 0x10) = iVar2 + 1;
  piVar1 = *(int **)(*(int *)(iVar4 + 0x14) + iVar2 * 4);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))();
  }
  *(int **)(*(int *)(iVar4 + 0x14) + iVar2 * 4) = param_2;
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 8))(piVar1);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0b74a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 4))(piVar1);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a0b748c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a0b74a8

void FUN_4a0b74a8(void)

{
  return;
}



// Address: 4a0b74ac

void FUN_4a0b74ac(void)

{
  return;
}



// Address: 4a0b74b0

int * FUN_4a0b74b0(int *param_1,int param_2)

{
  int local_c;
  int *local_8;
  
  if (param_1[3] == param_2) {
    return param_1;
  }
  local_8 = (int *)0x0;
  local_c = param_2;
  (**(code **)(*param_1 + 0x2c))(param_1,&local_c);
  return local_8;
}



// Address: 4a0b74f4

undefined4 FUN_4a0b74f4(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  iVar2 = 0;
  if (param_1[2] != 0) {
    iVar2 = *(int *)(param_1[2] + 0x10);
  }
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    iVar4 = *(int *)(*(int *)(param_1[2] + 0x14) + iVar2 * 4);
    if ((*(uint *)(*(int *)(iVar4 + 0x2c) + 0x30) & 0x60000000) != 0) {
      uVar3 = FUN_4a1395b4(iVar4,param_2);
      (**(code **)(*param_1 + 0x1c))(param_1,*(undefined4 *)(iVar4 + 0x30),uVar3);
    }
  }
  (**(code **)(*param_1 + 0x24))(param_1,param_2);
  return uVar1;
}



// Address: 4a0b75a8

undefined4 FUN_4a0b75a8(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x10))(param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  uVar2 = (**(code **)(*piVar1 + 0x20))(piVar1);
  (**(code **)(*param_1 + 0x28))(param_1,uVar2);
  if ((piVar1 != (int *)0x0) && (iVar3 = (**(code **)(*piVar1 + 8))(piVar1), iVar3 != 0)) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return uVar2;
}



// Address: 4a0b7654

undefined4 * FUN_4a0b7654(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_4a0c6bc0();
  *puVar2 = PTR_PTR_4a0b7694;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(puVar2 + 5);
  puVar1 = PTR_PTR_4a0b7698;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = puVar1;
  return puVar2 + -5;
}



// Address: 4a0b76b4

void FUN_4a0b76b4(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  *param_1 = PTR_PTR_4a0b77cc;
  piVar5 = (int *)param_1[2];
  if (piVar5 != (int *)0x0) {
    param_1[2] = 0;
    iVar2 = (**(code **)(*piVar5 + 8))(piVar5);
    if (iVar2 != 0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
  }
  puVar3 = PTR_PTR_4a0b77d0;
  param_1[5] = PTR_PTR_4a0b77d0;
  piVar5 = (int *)param_1[8];
  iVar2 = param_1[7];
  if (piVar5 != (int *)0x0) {
    iVar6 = piVar5[2];
    puVar3 = (undefined *)(uint)*(byte *)(piVar5 + 5);
  }
  else {
    iVar6 = 0;
  }
  param_1[8] = 0;
  param_1[7] = 0;
  if ((piVar5 == (int *)0x0) || (iVar4 = (**(code **)(*piVar5 + 8))(piVar5), iVar4 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar5 + 4))(piVar5);
    bVar1 = 1;
  }
  if (!(bool)(bVar1 & (piVar5 != (int *)0x0 && puVar3 != (undefined *)0x0))) {
    iVar6 = 0;
  }
  if (iVar6 != 0) {
    iVar4 = 0;
    if (0 < iVar2) {
      do {
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
      if (iVar6 == 0) goto LAB_4a0b77b8;
    }
    FUN_4a14f21c();
  }
LAB_4a0b77b8:
  iVar2 = FUN_4a0c6bf4(param_1 + 5);
  *(undefined **)(iVar2 + -0x14) = PTR_PTR_4a0c0674;
  *(undefined4 *)(iVar2 + -0x10) = 0xffffffff;
  return;
}



// Address: 4a0b77d4

void FUN_4a0b77d4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0b77ec;
  return;
}



// Address: 4a0b780c

void FUN_4a0b780c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  FUN_4a0b2080();
  uVar1 = FUN_4a0bf53c(param_2);
  uVar2 = FUN_4a0bf53c(param_2);
  uVar3 = FUN_4a0bf578(param_2);
  uVar4 = FUN_4a0bf62c(param_2);
  iVar5 = FUN_4a0bf53c(param_2);
  if (iVar5 != 0) {
    FUN_4a0bf578(param_2);
    FUN_4a0bf578(param_2);
    FUN_4a0ae944(param_2,param_3,0);
    FUN_4a0ae944(param_2,param_3,0);
  }
  FUN_4a0b4608(param_1,uVar1);
  FUN_4a0b4604(param_1,uVar2);
  uVar1 = FUN_4a171fac(uVar3);
  uVar1 = FUN_4a17211c(uVar1,DAT_4a0b7980);
  FUN_4a0b45d8(param_1,uVar1);
  FUN_4a0b4704(param_1,uVar4);
  uVar1 = FUN_4a0ae944(param_2,param_3,param_4);
  FUN_4a0b3e04(param_1,uVar1);
  uVar6 = FUN_4a0bf62c(param_2);
  uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  FUN_4a0b3cf8(param_1,uVar6);
  iVar5 = 0;
  if (0 < (int)uVar6) {
    do {
      uVar1 = FUN_4a0ae944(param_2,param_3,param_4);
      FUN_4a0b3c60(param_1,iVar5,uVar1);
      uVar1 = FUN_4a0ae944(param_2,param_3,param_4);
      FUN_4a0b3bc8(param_1,iVar5,uVar1);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar6);
    return;
  }
  return;
}



// Address: 4a0b79a0

void FUN_4a0b79a0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  
  FUN_4a0aed18();
  piVar3 = *(int **)(param_1 + 0xcc);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
  }
  piVar4 = *(int **)(param_2 + 0xcc);
  if ((piVar4 != (int *)0x0) && (iVar1 = (**(code **)(*piVar4 + 8))(piVar4), iVar1 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  *(int **)(param_2 + 0xcc) = piVar3;
  *(undefined4 *)(param_2 + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  uVar2 = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(param_2 + 0xdc) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(param_2 + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(param_2 + 0xe4) = uVar2;
  return;
}



// Address: 4a0b7a40

void FUN_4a0b7a40(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xd4) = param_2;
  return;
}



// Address: 4a0b7a48

void FUN_4a0b7a48(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xe0) = param_2;
  *(undefined4 *)(param_1 + 0xe4) = param_3;
  return;
}



// Address: 4a0b7a54

void FUN_4a0b7a54(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xd8) = param_3;
  *(undefined4 *)(param_1 + 0xdc) = param_2;
  return;
}



// Address: 4a0b7a60

void FUN_4a0b7a60(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xd0) = param_2;
  return;
}



// Address: 4a0b7a68

void FUN_4a0b7a68(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  piVar2 = *(int **)(param_1 + 0xcc);
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  *(int **)(param_1 + 0xcc) = param_2;
  return;
}



// Address: 4a0b7ad4

undefined4 * FUN_4a0b7ad4(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = (undefined4 *)FUN_4a0af6a4();
  *puVar1 = PTR_PTR_4a0b7b88;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0xffffffff;
  puVar1[0x35] = 0xe3;
  puVar1[0x36] = 0xd2;
  puVar1[0x37] = 0xd0;
  puVar1[0x38] = 0xf1;
  puVar1[0x39] = 0xf1;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  piVar3 = (int *)puVar1[0x33];
  if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 8))(piVar3), iVar2 != 0)) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  puVar1[0x33] = param_2;
  return puVar1;
}



// Address: 4a0b7b8c

void FUN_4a0b7b8c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0af6a4();
  *puVar1 = PTR_PTR_4a0b7bd8;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0xffffffff;
  puVar1[0x35] = 0xe3;
  puVar1[0x36] = 0xd2;
  puVar1[0x37] = 0xd0;
  puVar1[0x38] = 0xf1;
  puVar1[0x39] = 0xf1;
  return;
}



// Address: 4a0b7c4c

void FUN_4a0b7c4c(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  *param_1 = PTR_PTR_4a0b7cac;
  piVar6 = (int *)param_1[0x33];
  param_1[0x33] = 0;
  if ((piVar6 != (int *)0x0) && (iVar5 = (**(code **)(*piVar6 + 8))(piVar6), iVar5 != 0)) {
    (**(code **)(*piVar6 + 4))(piVar6);
  }
  *param_1 = PTR_PTR_4a0af828;
  piVar6 = (int *)param_1[0x1f];
  if ((piVar6 != (int *)0x0) && (iVar5 = (**(code **)(*piVar6 + 8))(piVar6), iVar5 != 0)) {
    (**(code **)(*piVar6 + 4))(piVar6);
  }
  param_1[0x1f] = 0;
  iVar5 = FUN_4a0c6bf4(param_1 + 0x20);
  *(undefined **)(iVar5 + -0x80) = PTR_PTR_4a0b77cc;
  piVar6 = *(int **)(iVar5 + -0x78);
  if (piVar6 != (int *)0x0) {
    *(undefined4 *)(iVar5 + -0x78) = 0;
    iVar2 = (**(code **)(*piVar6 + 8))(piVar6);
    if (iVar2 != 0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
  }
  puVar3 = PTR_PTR_4a0b77d0;
  *(undefined **)(iVar5 + -0x6c) = PTR_PTR_4a0b77d0;
  piVar6 = *(int **)(iVar5 + -0x60);
  iVar2 = *(int *)(iVar5 + -100);
  if (piVar6 != (int *)0x0) {
    iVar7 = piVar6[2];
    puVar3 = (undefined *)(uint)*(byte *)(piVar6 + 5);
  }
  else {
    iVar7 = 0;
  }
  *(undefined4 *)(iVar5 + -0x60) = 0;
  *(undefined4 *)(iVar5 + -100) = 0;
  if ((piVar6 == (int *)0x0) || (iVar4 = (**(code **)(*piVar6 + 8))(piVar6), iVar4 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar6 + 4))(piVar6);
    bVar1 = 1;
  }
  if (!(bool)(bVar1 & (piVar6 != (int *)0x0 && puVar3 != (undefined *)0x0))) {
    iVar7 = 0;
  }
  if (iVar7 != 0) {
    iVar4 = 0;
    if (0 < iVar2) {
      do {
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
      if (iVar7 == 0) goto LAB_4a0b77b8;
    }
    FUN_4a14f21c();
  }
LAB_4a0b77b8:
  iVar5 = FUN_4a0c6bf4(iVar5 + -0x6c);
  *(undefined **)(iVar5 + -0x14) = PTR_PTR_4a0c0674;
  *(undefined4 *)(iVar5 + -0x10) = 0xffffffff;
  return;
}



// Address: 4a0b7cb0

void FUN_4a0b7cb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  FUN_4a0b82cc(param_2,param_3,param_4,param_5,&local_18);
  FUN_4a0b7f38(param_1,local_18,uStack_14,uStack_10,local_c);
  return;
}



// Address: 4a0b7d00

void FUN_4a0b7d00(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = param_2 + 8;
  puVar6 = (undefined4 *)(param_1 + 8);
  uVar1 = FUN_4a165730(puVar6,iVar5);
  uVar2 = FUN_4a165730(puVar6,param_2 + 0xc);
  uVar3 = FUN_4a165730(puVar6,param_2 + 0x10);
  uVar4 = FUN_4a165730(puVar6,param_2 + 0x14);
  *puVar6 = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  puVar6 = (undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  uVar1 = FUN_4a165730(puVar6,iVar5);
  uVar2 = FUN_4a165730(puVar6,param_2 + 0xc);
  uVar3 = FUN_4a165730(puVar6,param_2 + 0x10);
  uVar4 = FUN_4a165730(puVar6,param_2 + 0x14);
  *puVar6 = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  puVar6 = (undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  uVar1 = FUN_4a165730(puVar6,iVar5);
  uVar2 = FUN_4a165730(puVar6,param_2 + 0xc);
  uVar3 = FUN_4a165730(puVar6,param_2 + 0x10);
  uVar4 = FUN_4a165730(puVar6,param_2 + 0x14);
  *puVar6 = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  puVar6 = (undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  uVar1 = FUN_4a165730(puVar6,iVar5);
  uVar2 = FUN_4a165730(puVar6,param_2 + 0xc);
  uVar3 = FUN_4a165730(puVar6,param_2 + 0x10);
  uVar4 = FUN_4a165730(puVar6,param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *puVar6 = uVar1;
  return;
}



// Address: 4a0b7e44

void FUN_4a0b7e44(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_4a17211c(param_4,*(undefined4 *)(param_1 + 0x10));
  uVar2 = FUN_4a17211c(param_3,*(undefined4 *)(param_1 + 0xc));
  uVar3 = FUN_4a17211c(param_2,*(undefined4 *)(param_1 + 8));
  uVar2 = FUN_4a171a94(uVar3,uVar2);
  uVar1 = FUN_4a171a94(uVar2,uVar1);
  uVar1 = FUN_4a171a94(uVar1,*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = FUN_4a17211c(param_4,*(undefined4 *)(param_1 + 0x20));
  uVar2 = FUN_4a17211c(param_3,*(undefined4 *)(param_1 + 0x1c));
  uVar3 = FUN_4a17211c(param_2,*(undefined4 *)(param_1 + 0x18));
  uVar2 = FUN_4a171a94(uVar3,uVar2);
  uVar1 = FUN_4a171a94(uVar2,uVar1);
  uVar1 = FUN_4a171a94(uVar1,*(undefined4 *)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = FUN_4a17211c(param_4,*(undefined4 *)(param_1 + 0x30));
  uVar2 = FUN_4a17211c(param_3,*(undefined4 *)(param_1 + 0x2c));
  uVar3 = FUN_4a17211c(param_2,*(undefined4 *)(param_1 + 0x28));
  uVar2 = FUN_4a171a94(uVar3,uVar2);
  uVar1 = FUN_4a171a94(uVar2,uVar1);
  uVar1 = FUN_4a171a94(uVar1,*(undefined4 *)(param_1 + 0x34));
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  return;
}



// Address: 4a0b7f38

void FUN_4a0b7f38(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 auStack_64 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar2 = FUN_4a17211c(param_5,param_5);
  uVar3 = FUN_4a17211c(param_4,param_4);
  uVar4 = FUN_4a17211c(param_3,param_3);
  uVar5 = FUN_4a17211c(param_2,param_2);
  uVar4 = FUN_4a171a94(uVar5,uVar4);
  uVar3 = FUN_4a171a94(uVar4,uVar3);
  FUN_4a171a94(uVar3,uVar2);
  uVar2 = FUN_4a002b60();
  uVar2 = FUN_4a171bb8(0x3f800000,uVar2);
  uVar3 = FUN_4a17211c(uVar2,param_2);
  uVar4 = FUN_4a17211c(uVar2,param_3);
  uVar5 = FUN_4a17211c(uVar2,param_4);
  uVar2 = FUN_4a17211c(uVar2,param_5);
  uVar6 = FUN_4a17211c(uVar3,uVar3);
  uVar6 = FUN_4a17295c(uVar6,1);
  uVar7 = FUN_4a17211c(uVar3,uVar4);
  uVar7 = FUN_4a17295c(uVar7,1);
  uVar8 = FUN_4a17211c(uVar3,uVar5);
  uVar8 = FUN_4a17295c(uVar8,1);
  uVar3 = FUN_4a17211c(uVar3,uVar2);
  local_28 = FUN_4a17295c(uVar3,1);
  uVar3 = FUN_4a17211c(uVar4,uVar4);
  local_2c = FUN_4a17295c(uVar3,1);
  uVar3 = FUN_4a17211c(uVar4,uVar5);
  local_30 = FUN_4a17295c(uVar3,1);
  uVar3 = FUN_4a17211c(uVar4,uVar2);
  uVar3 = FUN_4a17295c(uVar3,1);
  uVar4 = FUN_4a17211c(uVar5,uVar5);
  uVar4 = FUN_4a17295c(uVar4,1);
  uVar2 = FUN_4a17211c(uVar5,uVar2);
  uVar2 = FUN_4a17295c(uVar2,1);
  puVar9 = (undefined4 *)FUN_4a0c6bc0(auStack_78);
  puVar1 = PTR_DAT_4a0b82c8;
  *puVar9 = PTR_PTR_4a0b82c4;
  uVar5 = *(undefined4 *)(puVar1 + 4);
  uVar10 = *(undefined4 *)(puVar1 + 8);
  uVar11 = *(undefined4 *)(puVar1 + 0xc);
  uVar12 = *(undefined4 *)(puVar1 + 0x10);
  puVar9[2] = *(undefined4 *)puVar1;
  puVar9[3] = uVar5;
  puVar9[4] = uVar10;
  puVar9[5] = uVar11;
  puVar9[6] = uVar12;
  uVar5 = *(undefined4 *)(puVar1 + 0x18);
  uVar10 = *(undefined4 *)(puVar1 + 0x1c);
  uVar11 = *(undefined4 *)(puVar1 + 0x20);
  uVar12 = *(undefined4 *)(puVar1 + 0x24);
  puVar9[7] = *(undefined4 *)(puVar1 + 0x14);
  puVar9[8] = uVar5;
  puVar9[9] = uVar10;
  puVar9[10] = uVar11;
  puVar9[0xb] = uVar12;
  uVar5 = *(undefined4 *)(puVar1 + 0x2c);
  uVar10 = *(undefined4 *)(puVar1 + 0x30);
  uVar11 = *(undefined4 *)(puVar1 + 0x34);
  uVar12 = *(undefined4 *)(puVar1 + 0x38);
  uVar13 = *(undefined4 *)(puVar1 + 0x3c);
  puVar9[0xc] = *(undefined4 *)(puVar1 + 0x28);
  puVar9[0xd] = uVar5;
  puVar9[0xe] = uVar10;
  puVar9[0xf] = uVar11;
  puVar9[0x10] = uVar12;
  puVar9[0x11] = uVar13;
  uVar5 = FUN_4a171a94(local_2c,uVar4);
  local_70 = FUN_4a1724e0(uVar5,0x3f800000);
  local_6c = FUN_4a1725c0(uVar7,uVar2);
  local_68 = FUN_4a171a94(uVar8,uVar3);
  local_60 = FUN_4a171a94(uVar7,uVar2);
  uVar2 = FUN_4a171a94(uVar6,uVar4);
  local_5c = FUN_4a1724e0(uVar2,0x3f800000);
  local_58 = FUN_4a1725c0(local_30,local_28);
  local_50 = FUN_4a1725c0(uVar8,uVar3);
  local_4c = FUN_4a171a94(local_30,local_28);
  uVar2 = FUN_4a171a94(uVar6,local_2c);
  local_48 = FUN_4a1724e0(uVar2,0x3f800000);
  puVar9 = (undefined4 *)(param_1 + 8);
  uVar2 = FUN_4a1656e4(puVar9,&local_70);
  uVar3 = FUN_4a1656e4(puVar9,&local_6c);
  uVar4 = FUN_4a1656e4(puVar9,&local_68);
  uVar5 = FUN_4a1656e4(puVar9,auStack_64);
  uVar5 = FUN_4a171a94(uVar5,*(undefined4 *)(param_1 + 0x14));
  *puVar9 = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  puVar9 = (undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  uVar2 = FUN_4a1656e4(puVar9,&local_70);
  uVar3 = FUN_4a1656e4(puVar9,&local_6c);
  uVar4 = FUN_4a1656e4(puVar9,&local_68);
  uVar5 = FUN_4a1656e4(puVar9,auStack_64);
  uVar5 = FUN_4a171a94(uVar5,*(undefined4 *)(param_1 + 0x24));
  *puVar9 = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  puVar9 = (undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  uVar2 = FUN_4a1656e4(puVar9,&local_70);
  uVar3 = FUN_4a1656e4(puVar9,&local_6c);
  uVar4 = FUN_4a1656e4(puVar9,&local_68);
  uVar5 = FUN_4a1656e4(puVar9,auStack_64);
  uVar5 = FUN_4a171a94(uVar5,*(undefined4 *)(param_1 + 0x34));
  *(undefined4 *)(param_1 + 0x34) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  *puVar9 = uVar2;
  FUN_4a0c6bf4(auStack_78);
  return;
}



// Address: 4a0b82cc

void FUN_4a0b82cc(uint param_1,uint param_2,uint param_3,uint param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (((param_1 & 0x7fffffff) != 0) &&
     (((param_2 & 0x7fffffff) == 0 && (param_3 & 0x7fffffff) == 0) && (param_4 & 0x7fffffff) == 0))
  {
    *param_5 = 0;
    param_5[1] = 0;
    param_5[2] = 0;
    param_5[3] = 0;
    return;
  }
  uVar1 = FUN_4a17211c(param_1,*(undefined4 *)PTR_DAT_4a0b83e4);
  uVar1 = FUN_4a17211c(uVar1,DAT_4a0b83e8);
  uVar2 = FUN_4a002f08();
  uVar1 = FUN_4a002d64(uVar1);
  uVar3 = FUN_4a17211c(param_4,param_4);
  uVar4 = FUN_4a17211c(param_3,param_3);
  uVar5 = FUN_4a17211c(param_2,param_2);
  uVar4 = FUN_4a171a94(uVar5,uVar4);
  FUN_4a171a94(uVar4,uVar3);
  uVar3 = FUN_4a002b60();
  uVar3 = FUN_4a171bb8(0x3f800000,uVar3);
  uVar4 = FUN_4a17211c(uVar2,param_2);
  uVar4 = FUN_4a17211c(uVar4,uVar3);
  *param_5 = uVar4;
  uVar4 = FUN_4a17211c(uVar2,param_3);
  uVar4 = FUN_4a17211c(uVar4,uVar3);
  param_5[1] = uVar4;
  uVar2 = FUN_4a17211c(uVar2,param_4);
  uVar2 = FUN_4a17211c(uVar2,uVar3);
  param_5[2] = uVar2;
  param_5[3] = uVar1;
  return;
}



// Address: 4a0b83ec

void FUN_4a0b83ec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_4a171fac(param_5);
  uVar1 = FUN_4a17295c(uVar1,0xfffffff0);
  uVar2 = FUN_4a171fac(param_4);
  uVar2 = FUN_4a17295c(uVar2,0xfffffff0);
  uVar3 = FUN_4a171fac(param_3);
  uVar3 = FUN_4a17295c(uVar3,0xfffffff0);
  uVar4 = FUN_4a171fac(param_2);
  uVar4 = FUN_4a17295c(uVar4,0xfffffff0);
  FUN_4a0b7f38(param_1,uVar4,uVar3,uVar2,uVar1);
  return;
}



// Address: 4a0b846c

void FUN_4a0b846c(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  
  bVar9 = param_1 == 0;
  if (!bVar9) {
    bVar9 = (param_2 == 0 && param_3 == 0) && param_4 == 0;
  }
  if (bVar9) {
    *param_5 = 0;
    param_5[1] = 0;
    param_5[2] = 0;
    uVar1 = 0x10000;
  }
  else {
    uVar1 = FUN_4a171fac();
    uVar1 = FUN_4a17211c(uVar1,*(undefined4 *)PTR_DAT_4a0b85f8);
    uVar1 = FUN_4a17211c(uVar1,DAT_4a0b85fc);
    uVar2 = FUN_4a002f08();
    uVar1 = FUN_4a002d64(uVar1);
    uVar3 = FUN_4a171fac(param_2);
    uVar4 = FUN_4a17295c(uVar3,0xfffffff0);
    uVar5 = FUN_4a171fac(param_3);
    uVar6 = FUN_4a17295c(uVar5,0xfffffff0);
    uVar7 = FUN_4a171fac(param_4);
    uVar8 = FUN_4a17295c(uVar7,0xfffffff0);
    uVar8 = FUN_4a17211c(uVar8,uVar8);
    uVar6 = FUN_4a17211c(uVar6,uVar6);
    uVar4 = FUN_4a17211c(uVar4,uVar4);
    uVar4 = FUN_4a171a94(uVar4,uVar6);
    FUN_4a171a94(uVar4,uVar8);
    uVar4 = FUN_4a002b60();
    uVar4 = FUN_4a171bb8(0x3f800000,uVar4);
    uVar3 = FUN_4a17211c(uVar3,uVar2);
    uVar3 = FUN_4a17211c(uVar3,uVar4);
    FUN_4a171a94(uVar3,0x3f000000);
    uVar3 = FUN_4a171e1c();
    *param_5 = uVar3;
    uVar3 = FUN_4a17211c(uVar5,uVar2);
    uVar3 = FUN_4a17211c(uVar3,uVar4);
    FUN_4a171a94(uVar3,0x3f000000);
    uVar3 = FUN_4a171e1c();
    param_5[1] = uVar3;
    uVar2 = FUN_4a17211c(uVar7,uVar2);
    uVar2 = FUN_4a17211c(uVar2,uVar4);
    FUN_4a171a94(uVar2,0x3f000000);
    uVar2 = FUN_4a171e1c();
    param_5[2] = uVar2;
    uVar1 = FUN_4a17295c(uVar1,0x10);
    FUN_4a171a94(uVar1,0x3f000000);
    uVar1 = FUN_4a171e1c();
  }
  param_5[3] = uVar1;
  return;
}



// Address: 4a0b8600

void FUN_4a0b8600(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  puVar3 = (undefined4 *)0x0;
  if (*(int *)(param_2 + 0xc) != 0) {
    puVar3 = *(undefined4 **)(*(int *)(param_2 + 0xc) + 8);
  }
  uVar1 = puVar3[1];
  uVar2 = puVar3[2];
  uVar4 = puVar3[3];
  *(undefined4 *)(param_1 + 8) = *puVar3;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  uVar1 = puVar3[5];
  uVar2 = puVar3[6];
  uVar4 = puVar3[7];
  *(undefined4 *)(param_1 + 0x18) = puVar3[4];
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  uVar1 = puVar3[9];
  uVar2 = puVar3[10];
  uVar4 = puVar3[0xb];
  *(undefined4 *)(param_1 + 0x28) = puVar3[8];
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  uVar1 = puVar3[0xd];
  uVar2 = puVar3[0xe];
  uVar4 = puVar3[0xf];
  *(undefined4 *)(param_1 + 0x38) = puVar3[0xc];
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  return;
}



// Address: 4a0b8640

void FUN_4a0b8640(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  uint uVar4;
  undefined4 unaff_r6;
  uint uVar5;
  undefined4 unaff_r7;
  uint uVar6;
  undefined4 unaff_r8;
  
  uVar6 = *(uint *)(param_1 + 0x14);
  uVar4 = *(uint *)(param_1 + 0x24);
  uVar5 = *(uint *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
  FUN_4a0b8698(param_1);
  uVar5 = uVar5 ^ 0x80000000;
  uVar4 = uVar4 ^ 0x80000000;
  uVar6 = uVar6 ^ 0x80000000;
  uVar1 = FUN_4a17211c(uVar5,*(undefined4 *)(param_1 + 0x10),uVar4,uVar5,unaff_r4,unaff_r5,unaff_r6,
                       unaff_r7,unaff_r8);
  uVar2 = FUN_4a17211c(uVar4,*(undefined4 *)(param_1 + 0xc));
  uVar3 = FUN_4a17211c(uVar6,*(undefined4 *)(param_1 + 8));
  uVar2 = FUN_4a171a94(uVar3,uVar2);
  uVar1 = FUN_4a171a94(uVar2,uVar1);
  uVar1 = FUN_4a171a94(uVar1,*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = FUN_4a17211c(uVar5,*(undefined4 *)(param_1 + 0x20));
  uVar2 = FUN_4a17211c(uVar4,*(undefined4 *)(param_1 + 0x1c));
  uVar3 = FUN_4a17211c(uVar6,*(undefined4 *)(param_1 + 0x18));
  uVar2 = FUN_4a171a94(uVar3,uVar2);
  uVar1 = FUN_4a171a94(uVar2,uVar1);
  uVar1 = FUN_4a171a94(uVar1,*(undefined4 *)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = FUN_4a17211c(uVar5,*(undefined4 *)(param_1 + 0x30));
  uVar2 = FUN_4a17211c(uVar4,*(undefined4 *)(param_1 + 0x2c));
  uVar3 = FUN_4a17211c(uVar6,*(undefined4 *)(param_1 + 0x28));
  uVar2 = FUN_4a171a94(uVar3,uVar2);
  uVar1 = FUN_4a171a94(uVar2,uVar1);
  uVar1 = FUN_4a171a94(uVar1,*(undefined4 *)(param_1 + 0x34));
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  return;
}



// Address: 4a0b8698

void FUN_4a0b8698(int param_1)

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
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  uVar1 = FUN_4a13c5c8();
  uVar1 = FUN_4a171bb8(0x3f800000,uVar1);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar11 = *(undefined4 *)(param_1 + 0x2c);
  uVar13 = *(undefined4 *)(param_1 + 0x30);
  uVar10 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = FUN_4a17211c(uVar10,uVar11);
  uVar4 = FUN_4a17211c(uVar2,uVar13);
  uVar3 = FUN_4a1725c0(uVar4,uVar3);
  uVar12 = *(undefined4 *)(param_1 + 0x18);
  uVar14 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = FUN_4a17211c(uVar12,uVar13);
  uVar5 = FUN_4a17211c(uVar10,uVar14);
  uVar4 = FUN_4a1725c0(uVar5,uVar4);
  uVar5 = FUN_4a17211c(uVar2,uVar14);
  uVar6 = FUN_4a17211c(uVar12,uVar11);
  uVar5 = FUN_4a1725c0(uVar6,uVar5);
  uVar8 = *(undefined4 *)(param_1 + 0x10);
  uVar15 = *(undefined4 *)(param_1 + 0xc);
  uVar6 = FUN_4a17211c(uVar13,uVar15);
  uVar7 = FUN_4a17211c(uVar11,uVar8);
  uVar6 = FUN_4a1725c0(uVar7,uVar6);
  uVar9 = *(undefined4 *)(param_1 + 8);
  uVar7 = FUN_4a17211c(uVar14,uVar8);
  uVar13 = FUN_4a17211c(uVar13,uVar9);
  uVar7 = FUN_4a1725c0(uVar13,uVar7);
  uVar13 = FUN_4a17211c(uVar11,uVar9);
  uVar11 = FUN_4a17211c(uVar14,uVar15);
  uVar13 = FUN_4a1725c0(uVar11,uVar13);
  uVar11 = FUN_4a17211c(uVar8,uVar2);
  uVar14 = FUN_4a17211c(uVar15,uVar10);
  uVar11 = FUN_4a1725c0(uVar14,uVar11);
  uVar14 = FUN_4a17211c(uVar9,uVar10);
  uVar8 = FUN_4a17211c(uVar8,uVar12);
  uVar14 = FUN_4a1725c0(uVar8,uVar14);
  uVar8 = FUN_4a17211c(uVar15,uVar12);
  uVar2 = FUN_4a17211c(uVar9,uVar2);
  uVar2 = FUN_4a1725c0(uVar2,uVar8);
  uVar3 = FUN_4a17211c(uVar1,uVar3);
  *(undefined4 *)(param_1 + 8) = uVar3;
  uVar3 = FUN_4a17211c(uVar1,uVar6);
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  uVar3 = FUN_4a17211c(uVar1,uVar11);
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  uVar3 = FUN_4a17211c(uVar1,uVar4);
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  uVar3 = FUN_4a17211c(uVar1,uVar7);
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  uVar3 = FUN_4a17211c(uVar1,uVar14);
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  uVar3 = FUN_4a17211c(uVar1,uVar5);
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  uVar3 = FUN_4a17211c(uVar1,uVar13);
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  uVar1 = FUN_4a17211c(uVar1,uVar2);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  return;
}



// Address: 4a0b88fc

void FUN_4a0b88fc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_4a17211c(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = FUN_4a17211c(*(undefined4 *)(param_1 + 0xc),param_3);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x10),param_4);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x18),param_2);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x1c),param_3);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x20),param_4);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x28),param_2);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x2c),param_3);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x30),param_4);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x38),param_2);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  uVar1 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x3c),param_3);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x40),param_4);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  return;
}



// Address: 4a0b89d4

void FUN_4a0b89d4(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0b8a18;
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  puVar1[2] = *(undefined4 *)(param_2 + 8);
  puVar1[3] = uVar2;
  puVar1[4] = uVar3;
  puVar1[5] = uVar4;
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  puVar1[6] = *(undefined4 *)(param_2 + 0x18);
  puVar1[7] = uVar2;
  puVar1[8] = uVar3;
  puVar1[9] = uVar4;
  uVar2 = *(undefined4 *)(param_2 + 0x2c);
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  uVar4 = *(undefined4 *)(param_2 + 0x34);
  puVar1[10] = *(undefined4 *)(param_2 + 0x28);
  puVar1[0xb] = uVar2;
  puVar1[0xc] = uVar3;
  puVar1[0xd] = uVar4;
  uVar2 = *(undefined4 *)(param_2 + 0x3c);
  uVar3 = *(undefined4 *)(param_2 + 0x40);
  uVar4 = *(undefined4 *)(param_2 + 0x44);
  puVar1[0xe] = *(undefined4 *)(param_2 + 0x38);
  puVar1[0xf] = uVar2;
  puVar1[0x10] = uVar3;
  puVar1[0x11] = uVar4;
  return;
}



// Address: 4a0b8a1c

void FUN_4a0b8a1c(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar2 = (undefined4 *)FUN_4a0c6bc0();
  puVar1 = PTR_DAT_4a0b8a60;
  *puVar2 = PTR_PTR_4a0b8a5c;
  uVar3 = *(undefined4 *)(puVar1 + 4);
  uVar4 = *(undefined4 *)(puVar1 + 8);
  uVar5 = *(undefined4 *)(puVar1 + 0xc);
  puVar2[2] = *(undefined4 *)puVar1;
  puVar2[3] = uVar3;
  puVar2[4] = uVar4;
  puVar2[5] = uVar5;
  uVar3 = *(undefined4 *)(puVar1 + 0x14);
  uVar4 = *(undefined4 *)(puVar1 + 0x18);
  uVar5 = *(undefined4 *)(puVar1 + 0x1c);
  puVar2[6] = *(undefined4 *)(puVar1 + 0x10);
  puVar2[7] = uVar3;
  puVar2[8] = uVar4;
  puVar2[9] = uVar5;
  uVar3 = *(undefined4 *)(puVar1 + 0x24);
  uVar4 = *(undefined4 *)(puVar1 + 0x28);
  uVar5 = *(undefined4 *)(puVar1 + 0x2c);
  puVar2[10] = *(undefined4 *)(puVar1 + 0x20);
  puVar2[0xb] = uVar3;
  puVar2[0xc] = uVar4;
  puVar2[0xd] = uVar5;
  uVar3 = *(undefined4 *)(puVar1 + 0x34);
  uVar4 = *(undefined4 *)(puVar1 + 0x38);
  uVar5 = *(undefined4 *)(puVar1 + 0x3c);
  puVar2[0xe] = *(undefined4 *)(puVar1 + 0x30);
  puVar2[0xf] = uVar3;
  puVar2[0x10] = uVar4;
  puVar2[0x11] = uVar5;
  return;
}



// Address: 4a0b8a80

undefined4 * FUN_4a0b8a80(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  thunk_FUN_4a161570(0x20);
  puVar1 = (undefined4 *)FUN_4a0b8a9c();
  *puVar1 = PTR_PTR_4a0b8c04;
  uVar2 = thunk_FUN_4a161570(param_1);
  puVar1[7] = uVar2;
  return puVar1;
}



// Address: 4a0b8a9c

undefined4 * FUN_4a0b8a9c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0b8ed0();
  *puVar1 = PTR_PTR_4a0b8ad8;
  puVar1[6] = *(undefined4 *)PTR_PTR_4a0b8adc;
  FUN_4a0b8eac(puVar1,param_2);
  return puVar1;
}



// Address: 4a0b8af8

void FUN_4a0b8af8(undefined4 *param_1)

{
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a0b8afc

void FUN_4a0b8afc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0b8ed0();
  *puVar1 = PTR_PTR_4a0b8b14;
  return;
}



// Address: 4a0b8b30

void FUN_4a0b8b30(undefined4 *param_1)

{
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a0b8b44

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * FUN_4a0b8b44(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_1[6] == *(int *)PTR_PTR_4a0b8b7c) {
    uVar1 = thunk_FUN_4a161570(0x24);
    puVar2 = (undefined4 *)FUN_4a0b8afc(uVar1,param_1[3] - param_1[4] >> 2);
    *puVar2 = PTR_PTR_4a0b8de4;
    puVar2[6] = param_1;
    puVar2[7] = param_1[7] + (param_1[4] & 0xfffffffcU);
    puVar2[8] = 0;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 0xc))();
    }
    return puVar2;
  }
  return (undefined4 *)0x0;
}



// Address: 4a0b8b88

undefined4 FUN_4a0b8b88(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 4))
                    (*(int **)(param_1 + 0x18),*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x1c));
  FUN_4a0b8ec8(param_1,*(int *)(param_1 + 0x10) + 4);
  return uVar1;
}



// Address: 4a0b8c3c

void FUN_4a0b8c3c(undefined4 *param_1)

{
  *param_1 = PTR_PTR_4a0b8c60;
  thunk_FUN_4a161530(param_1[7]);
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a0b8c98

int FUN_4a0b8c98(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = *(int *)(param_1 + 0x10);
  FUN_4a0b8ec8(param_1,iVar5 + param_4);
  if (0 < (int)param_4) {
    puVar1 = (undefined4 *)(param_2 + param_3 * 4);
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5 * 4 + -4);
    puVar2 = puVar1 + -1;
    if ((param_4 & 1) != 0) {
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar1;
      puVar2 = puVar1;
    }
    uVar4 = puVar2[1];
    for (iVar5 = (int)param_4 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar6 = puVar2[2];
      puVar3[1] = uVar4;
      uVar4 = puVar2[3];
      puVar3 = puVar3 + 2;
      *puVar3 = uVar6;
      puVar2 = puVar2 + 2;
    }
  }
  return param_1;
}



// Address: 4a0b8d18

int FUN_4a0b8d18(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  FUN_4a0b8ec8(param_1,iVar1 + 1);
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1 * 4) = param_2;
  return param_1;
}



// Address: 4a0b8d44

int FUN_4a0b8d44(int param_1,int param_2,undefined4 param_3)

{
  FUN_4a13c920();
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + param_2 * 4) = param_3;
  return param_1;
}



// Address: 4a0b8e50

void FUN_4a0b8e50(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = PTR_PTR_4a0b8ea8;
  piVar2 = (int *)param_1[6];
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a0b8eac

void FUN_4a0b8eac(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}



// Address: 4a0b8eb4

void FUN_4a0b8eb4(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  return;
}



// Address: 4a0b8ec8

void FUN_4a0b8ec8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// Address: 4a0b8ed0

void FUN_4a0b8ed0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0b8f04;
  puVar1[3] = 0;
  puVar1[2] = param_2;
  puVar1[4] = 0;
  puVar1[5] = 0xffffffff;
  return;
}



// Address: 4a0b8f24

void FUN_4a0b8f24(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78) + -1;
  *(int *)(param_1 + 0x78) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  iVar1 = FUN_4a0ff494();
  *(undefined1 *)(*(int *)(iVar1 + 0x520) + 0x450) = 1;
  return;
}



// Address: 4a0b9110

undefined4 FUN_4a0b9110(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x74);
  }
  else {
    uVar1 = 0xffffff;
  }
  return uVar1;
}



// Address: 4a0b9124

void FUN_4a0b9124(int param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  int iVar22;
  undefined4 uVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  undefined1 *puVar27;
  int in_r12;
  bool bVar28;
  int local_99c;
  int local_998;
  undefined4 local_994;
  int local_990;
  int local_98c;
  int local_97c;
  int local_978;
  int local_974;
  int local_970;
  int local_96c;
  int local_968;
  int local_964;
  uint local_960;
  uint local_95c;
  uint local_954;
  uint local_950;
  uint local_948;
  uint local_944;
  int local_940;
  int local_93c;
  int local_938;
  undefined1 **local_934;
  undefined4 local_928;
  undefined *local_924;
  int local_920;
  int local_91c;
  int local_918;
  undefined1 *local_914;
  undefined1 *local_910;
  undefined1 *local_90c;
  undefined1 *local_908;
  undefined1 *local_904;
  undefined1 *local_900;
  int local_8fc;
  undefined *local_8f8 [2];
  int local_8f0;
  int *local_8ec;
  undefined1 auStack_8e4 [20];
  undefined1 auStack_8d0 [20];
  undefined1 auStack_8bc [20];
  undefined1 auStack_8a8 [20];
  undefined1 *local_894;
  undefined1 auStack_890 [84];
  undefined1 auStack_83c [84];
  undefined1 auStack_7e8 [84];
  undefined1 auStack_794 [84];
  undefined1 auStack_740 [84];
  undefined1 auStack_6ec [1596];
  undefined1 auStack_b0 [84];
  int local_5c;
  undefined4 local_58;
  undefined *local_54 [2];
  int local_4c;
  uint local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined *local_2c;
  int local_28;
  
  local_28 = param_1;
  uVar7 = FUN_4a077b38();
  local_58 = FUN_4a078b6c(uVar7,0);
  piVar8 = (int *)FUN_4a078b6c(uVar7,1);
  piVar9 = (int *)FUN_4a078b6c(uVar7,2);
  *(int **)(local_28 + 0x6c) = piVar9;
  if (piVar9 != (int *)0x0) {
    (**(code **)(*piVar9 + 0xc))();
  }
  *(int **)(local_28 + 0x70) = piVar8;
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0xc))();
  }
  iVar10 = FUN_4a0ff494();
  local_5c = *(int *)(iVar10 + 0x520);
  iVar10 = *(int *)(local_28 + 0x18) >> 1;
  if (6 < iVar10) {
    iVar10 = 6;
  }
  iVar24 = *(int *)(local_28 + 0x1c) >> 1;
  if (6 < iVar24) {
    iVar24 = 6;
  }
  if (*(int *)(local_28 + 100) == 0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = *(int **)(*(int *)(local_28 + 100) + 8);
  }
  iVar11 = FUN_4a16a524(&local_90c,iVar10);
  iVar26 = *(int *)(iVar11 + 8);
  piVar9 = *(int **)(iVar11 + 0xc);
  if (piVar9 != (int *)0x0) {
    (**(code **)(*piVar9 + 0xc))(piVar9);
  }
  (**(code **)(*piVar8 + 0x1c))(piVar8);
  piVar8[2] = iVar26;
  piVar8[3] = (int)piVar9;
  FUN_4a16a5f4(&local_90c);
  if (*(int *)(local_28 + 100) == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(*(int *)(local_28 + 100) + 8);
  }
  iVar10 = FUN_4a16a524(&local_90c,iVar10);
  uVar7 = *(undefined4 *)(iVar10 + 8);
  piVar8 = *(int **)(iVar10 + 0xc);
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0xc))(piVar8);
  }
  (**(code **)(*(int *)(iVar11 + 0x28) + 0x1c))((int *)(iVar11 + 0x28));
  *(undefined4 *)(iVar11 + 0x30) = uVar7;
  *(int **)(iVar11 + 0x34) = piVar8;
  FUN_4a16a5f4(&local_90c);
  if (*(int *)(local_28 + 100) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(*(int *)(local_28 + 100) + 8);
  }
  iVar11 = FUN_4a16a524(&local_90c,iVar24);
  uVar7 = *(undefined4 *)(iVar11 + 8);
  piVar8 = *(int **)(iVar11 + 0xc);
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0xc))(piVar8);
  }
  (**(code **)(*(int *)(iVar10 + 0x14) + 0x1c))((int *)(iVar10 + 0x14));
  *(undefined4 *)(iVar10 + 0x1c) = uVar7;
  *(int **)(iVar10 + 0x20) = piVar8;
  FUN_4a16a5f4(&local_90c);
  if (*(int *)(local_28 + 100) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(*(int *)(local_28 + 100) + 8);
  }
  iVar24 = FUN_4a16a524(&local_90c,iVar24);
  uVar7 = *(undefined4 *)(iVar24 + 8);
  piVar8 = *(int **)(iVar24 + 0xc);
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0xc))(piVar8);
  }
  (**(code **)(*(int *)(iVar10 + 0x3c) + 0x1c))((int *)(iVar10 + 0x3c));
  *(undefined4 *)(iVar10 + 0x44) = uVar7;
  *(int **)(iVar10 + 0x48) = piVar8;
  FUN_4a16a5f4(&local_90c);
  puVar4 = PTR_PTR_4a0ba32c;
  iVar10 = 0;
  local_2c = PTR_PTR_4a0ba330;
  if (-1 < *(int *)(local_28 + 0x18)) {
    do {
      iVar11 = *(int *)(local_28 + 0x10) + iVar10;
      iVar24 = FUN_4a0efa68(local_5c,local_28,0,iVar11,*(undefined4 *)(local_28 + 0x14));
      if (*(int *)(local_28 + 100) == 0) {
        iVar26 = 0;
      }
      else {
        iVar26 = *(int *)(*(int *)(local_28 + 100) + 8);
      }
      puVar12 = (undefined4 *)FUN_4a0c6bc0(&local_924);
      *puVar12 = local_2c;
      puVar12[2] = *(undefined4 *)(iVar26 + 8);
      piVar8 = *(int **)(iVar26 + 0xc);
      puVar12[3] = piVar8;
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 0xc))();
      }
      iVar20 = local_91c;
      *puVar12 = puVar4;
      iVar26 = -1;
      iVar13 = 0;
      if (0 < (int)puVar12[2]) {
        iVar22 = puVar12[3];
        do {
          if (iVar22 == 0) {
            iVar18 = 0;
          }
          else {
            iVar18 = *(int *)(iVar22 + 8);
          }
          iVar19 = *(int *)(iVar18 + iVar13 * 4);
          iVar18 = iVar13;
          if ((iVar26 != -1 || iVar19 != 0) && (iVar18 = iVar26, iVar19 == iVar24))
          goto LAB_4a0b948c;
          iVar26 = iVar18;
          iVar13 = iVar13 + 1;
        } while (iVar13 < (int)puVar12[2]);
        if (iVar26 != -1) {
          if (iVar22 == 0) {
            iVar13 = 0;
          }
          else {
            iVar13 = *(int *)(iVar22 + 8);
          }
          *(int *)(iVar13 + iVar26 * 4) = iVar24;
        }
      }
LAB_4a0b948c:
      local_924 = puVar4;
      iVar24 = FUN_4a0bcc84(&local_924);
      if (iVar24 != 0) {
        iVar26 = 0;
        if (0 < iVar20) {
          do {
            iVar26 = iVar26 + 1;
          } while (iVar26 < iVar20);
          if (iVar24 == 0) goto LAB_4a0b94d0;
        }
        FUN_4a14f21c(iVar24);
      }
LAB_4a0b94d0:
      FUN_4a0c6bf4(&local_924);
      iVar26 = 0;
      iVar24 = FUN_4a0efa68(local_5c,local_28,2,iVar11,
                            *(int *)(local_28 + 0x14) + *(int *)(local_28 + 0x1c));
      if (*(int *)(local_28 + 100) == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = *(int *)(*(int *)(local_28 + 100) + 8);
      }
      puVar12 = (undefined4 *)FUN_4a0c6bc0(&local_924);
      *puVar12 = local_2c;
      puVar12[2] = *(undefined4 *)(iVar11 + 0x30);
      piVar8 = *(int **)(iVar11 + 0x34);
      puVar12[3] = piVar8;
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 0xc))();
      }
      iVar20 = local_91c;
      *puVar12 = puVar4;
      in_r12 = puVar12[2];
      iVar11 = -1;
      iVar13 = 0;
      if (0 < in_r12) {
        iVar22 = puVar12[3];
        do {
          if (iVar22 == 0) {
            iVar18 = 0;
          }
          else {
            iVar18 = *(int *)(iVar22 + 8);
          }
          iVar19 = *(int *)(iVar18 + iVar13 * 4);
          iVar18 = iVar13;
          if ((iVar11 != -1 || iVar19 != 0) && (iVar18 = iVar11, iVar19 == iVar24))
          goto LAB_4a0b95c4;
          iVar11 = iVar18;
          iVar13 = iVar13 + 1;
        } while (iVar13 < in_r12);
        if (iVar11 != -1) {
          if (iVar22 != 0) {
            iVar26 = *(int *)(iVar22 + 8);
          }
          *(int *)(iVar26 + iVar11 * 4) = iVar24;
        }
      }
LAB_4a0b95c4:
      local_924 = puVar4;
      iVar24 = FUN_4a0bcc84(&local_924);
      if (iVar24 != 0) {
        iVar11 = 0;
        if (0 < iVar20) {
          do {
            iVar11 = iVar11 + 1;
          } while (iVar11 < iVar20);
          if (iVar24 == 0) goto LAB_4a0b9604;
        }
        FUN_4a14f21c();
      }
LAB_4a0b9604:
      FUN_4a0c6bf4(&local_924);
      iVar10 = iVar10 + 1;
    } while (iVar10 <= *(int *)(local_28 + 0x18));
  }
  iVar10 = 0;
  if (-1 < *(int *)(local_28 + 0x1c)) {
    do {
      local_910 = (undefined1 *)(*(int *)(local_28 + 0x14) + iVar10);
      iVar24 = FUN_4a0efa68(local_5c,local_28,3,*(undefined4 *)(local_28 + 0x10),local_910);
      if (*(int *)(local_28 + 100) == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = *(int *)(*(int *)(local_28 + 100) + 8);
      }
      puVar12 = (undefined4 *)FUN_4a0c6bc0(&local_924);
      *puVar12 = local_2c;
      puVar12[2] = *(undefined4 *)(iVar11 + 0x44);
      piVar8 = *(int **)(iVar11 + 0x48);
      puVar12[3] = piVar8;
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 0xc))();
      }
      iVar26 = local_91c;
      *puVar12 = puVar4;
      iVar11 = -1;
      iVar20 = 0;
      if (0 < (int)puVar12[2]) {
        iVar13 = puVar12[3];
        do {
          if (iVar13 == 0) {
            iVar22 = 0;
          }
          else {
            iVar22 = *(int *)(iVar13 + 8);
          }
          iVar18 = *(int *)(iVar22 + iVar20 * 4);
          iVar22 = iVar20;
          if ((iVar11 != -1 || iVar18 != 0) && (iVar22 = iVar11, iVar18 == iVar24))
          goto LAB_4a0b9728;
          iVar11 = iVar22;
          iVar20 = iVar20 + 1;
        } while (iVar20 < (int)puVar12[2]);
        if (iVar11 != -1) {
          if (iVar13 == 0) {
            iVar20 = 0;
          }
          else {
            iVar20 = *(int *)(iVar13 + 8);
          }
          *(int *)(iVar20 + iVar11 * 4) = iVar24;
        }
      }
LAB_4a0b9728:
      local_924 = puVar4;
      iVar24 = FUN_4a0bcc84(&local_924);
      if (iVar24 != 0) {
        iVar11 = 0;
        if (0 < iVar26) {
          do {
            iVar11 = iVar11 + 1;
          } while (iVar11 < iVar26);
          if (iVar24 == 0) goto LAB_4a0b9768;
        }
        FUN_4a14f21c();
      }
LAB_4a0b9768:
      FUN_4a0c6bf4(&local_924);
      iVar24 = FUN_4a0efa68(local_5c,local_28,1,
                            *(int *)(local_28 + 0x10) + *(int *)(local_28 + 0x18),local_910);
      if (*(int *)(local_28 + 100) == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = *(int *)(*(int *)(local_28 + 100) + 8);
      }
      puVar12 = (undefined4 *)FUN_4a0c6bc0(&local_924);
      *puVar12 = local_2c;
      puVar12[2] = *(undefined4 *)(iVar11 + 0x1c);
      piVar8 = *(int **)(iVar11 + 0x20);
      puVar12[3] = piVar8;
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 0xc))();
      }
      iVar26 = local_91c;
      *puVar12 = puVar4;
      in_r12 = puVar12[2];
      iVar11 = -1;
      iVar20 = 0;
      if (0 < in_r12) {
        iVar13 = puVar12[3];
        iVar22 = 0;
        do {
          if (iVar13 == 0) {
            iVar18 = 0;
          }
          else {
            iVar18 = *(int *)(iVar13 + 8);
          }
          iVar19 = *(int *)(iVar18 + iVar20 * 4);
          iVar18 = iVar20;
          if ((iVar11 != -1 || iVar19 != 0) && (iVar18 = iVar11, iVar19 == iVar24))
          goto LAB_4a0b985c;
          iVar11 = iVar18;
          iVar20 = iVar20 + 1;
        } while (iVar20 < in_r12);
        if (iVar11 != -1) {
          if (iVar13 != 0) {
            iVar22 = *(int *)(iVar13 + 8);
          }
          *(int *)(iVar22 + iVar11 * 4) = iVar24;
        }
      }
LAB_4a0b985c:
      local_924 = puVar4;
      iVar24 = FUN_4a0bcc84(&local_924);
      if (iVar24 != 0) {
        iVar11 = 0;
        if (0 < iVar26) {
          do {
            iVar11 = iVar11 + 1;
          } while (iVar11 < iVar26);
          if (iVar24 == 0) goto LAB_4a0b9898;
        }
        FUN_4a14f21c();
      }
LAB_4a0b9898:
      FUN_4a0c6bf4(&local_924);
      iVar10 = iVar10 + 1;
    } while (iVar10 <= *(int *)(local_28 + 0x1c));
  }
  thunk_FUN_4a1490e8(auStack_890,PTR_FUN_4a0ba334,0x54,0x19);
  local_894 = auStack_b0;
  thunk_FUN_4a161570(0xe0);
  piVar8 = (int *)FUN_4a0b4e14();
  *(int **)(local_28 + 0x3c) = piVar8;
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0xc))();
  }
  if (*(int *)(local_5c + 0x108) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(*(int *)(local_5c + 0x108) + 8);
  }
  iVar10 = iVar10 + *(int *)(local_28 + 0x20) * 0x14;
  puVar12 = (undefined4 *)FUN_4a0c6bc0(auStack_8a8);
  *puVar12 = local_2c;
  puVar12[2] = *(undefined4 *)(iVar10 + 8);
  piVar8 = *(int **)(iVar10 + 0xc);
  puVar12[3] = piVar8;
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0xc))();
  }
  *puVar12 = PTR_PTR_4a0ba338;
  FUN_4a143f18(auStack_8bc,local_5c,*(undefined4 *)(local_28 + 0x24));
  FUN_4a143f18(auStack_8d0,local_5c,0x2e);
  FUN_4a143f18(auStack_8e4,local_5c,0x1b);
  iVar10 = *(int *)(local_28 + 0x10) * 0x20;
  iVar24 = *(int *)(local_28 + 0x14) * 0x20;
  iVar11 = *(int *)(local_28 + 0x18) * 0x20;
  iVar26 = *(int *)(local_28 + 0x1c) * 0x20;
  FUN_4a104f68(local_894,iVar10,iVar24,iVar11,iVar26,auStack_8a8,0x12,0x12,0x12,0x12,0);
  FUN_4a104f68(local_894,iVar10,iVar24,0x20,0x20,auStack_8a8,2,0xe,2,0xe,5);
  FUN_4a104f68(local_894,iVar10,iVar24,iVar11,0x20,auStack_8a8,0x12,0x12,2,0xe,4);
  iVar20 = iVar10 + iVar11;
  FUN_4a104f68(local_894,iVar20 + -0x20,iVar24,0x20,0x20,auStack_8a8,0xe,2,2,0xe,6);
  FUN_4a104f68(local_894,iVar20 + -0x20,iVar24,0x20,iVar26,auStack_8a8,0xe,2,0x12,0x12,2);
  iVar13 = iVar24 + iVar26;
  FUN_4a104f68(local_894,iVar20 + -0x20,iVar13 + -0x20,0x20,0x20,auStack_8a8,0xe,2,0xe,2,10);
  FUN_4a104f68(local_894,iVar10,iVar13 + -0x20,iVar11,0x20,auStack_8a8,0x12,0x12,0xe,2,8);
  FUN_4a104f68(local_894,iVar10,iVar13 + -0x20,0x20,0x20,auStack_8a8,2,0xe,0xe,2,9);
  FUN_4a104f68(local_894,iVar10,iVar24,0x20,iVar26,auStack_8a8,2,0xe,0x12,0x12,1);
  local_8fc = 0;
  do {
    iVar10 = local_8fc * 0x1f8;
    local_904 = auStack_890 + iVar10;
    local_900 = auStack_7e8 + iVar10;
    local_908 = auStack_83c + iVar10;
    local_90c = auStack_6ec + iVar10;
    local_910 = auStack_794 + iVar10;
    local_914 = auStack_740 + iVar10;
    local_934 = &local_914;
    iVar10 = 0;
    iVar11 = 0;
    if (local_8fc == 0) {
      local_934 = *(undefined1 ***)(local_28 + 0x10);
      iVar24 = *(int *)(local_28 + 0x14);
      local_920 = *(int *)(local_28 + 0x18);
      iVar10 = 1;
      local_918 = (int)local_934 << 5;
      local_91c = iVar24 * 0x20 + 2;
      local_928 = 3;
      local_924 = (undefined *)0x0;
    }
    else if (local_8fc == 1) {
      iVar11 = 1;
      iVar24 = *(int *)(local_28 + 0x14);
      local_920 = *(int *)(local_28 + 0x1c);
      local_934 = (undefined1 **)(*(int *)(local_28 + 0x10) + *(int *)(local_28 + 0x18));
      local_918 = (int)local_934 * 0x20 + -2;
      local_91c = iVar24 << 5;
      local_928 = 5;
      local_924 = (undefined *)0x2;
    }
    else if (local_8fc == 2) {
      local_920 = *(int *)(local_28 + 0x18);
      in_r12 = *(int *)(local_28 + 0x1c);
      local_918 = *(int *)(local_28 + 0x10) + local_920;
      local_934 = (undefined1 **)(local_918 + -1);
      iVar24 = *(int *)(local_28 + 0x14) + in_r12;
      local_918 = local_918 * 0x20;
      local_91c = iVar24 * 0x20 + -2;
      iVar10 = -1;
      local_928 = 0;
      local_924 = (undefined *)0x3;
    }
    else if (local_8fc == 3) {
      local_934 = *(undefined1 ***)(local_28 + 0x10);
      local_920 = *(int *)(local_28 + 0x1c);
      local_924 = (undefined *)0x5;
      local_91c = local_920 + *(int *)(local_28 + 0x14);
      iVar24 = local_91c + -1;
      local_918 = (int)local_934 * 0x20 + 2;
      local_91c = local_91c * 0x20;
      iVar11 = -1;
      local_928 = 2;
    }
    local_93c = local_918;
    iVar20 = 0;
    local_940 = local_91c;
    local_944 = 0;
    local_948 = 0;
    local_950 = 0;
    local_954 = 0;
    bVar2 = false;
    local_95c = 0;
    local_960 = 0;
    local_964 = 0;
    iVar13 = 0;
    iVar26 = 0;
    local_968 = 0;
    local_96c = 0;
    local_970 = 0;
    local_974 = 0;
    local_978 = 0;
    local_97c = 0;
    if (0 < local_920) {
      local_30 = local_920 + -1;
      local_38 = -iVar10;
      local_938 = iVar24;
      local_34 = iVar11;
      bVar28 = false;
      do {
        uVar14 = FUN_4a142f2c(local_5c,local_934,local_938);
        uVar25 = (uint)((uVar14 & 0xf00) != 0);
        uVar1 = (uVar14 & 0x40) >> 6;
        if ((uVar1 == 0) && ((uVar14 & 0x20) != 0)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        uVar14 = (uVar14 & 0x80) >> 7;
        iVar24 = local_938 - iVar10;
        iVar22 = 0x4a0b9e6c;
        uVar15 = FUN_4a142f2c(local_5c,(int)local_934 + iVar11);
        uVar15 = ~(uVar15 >> 4) & 1;
        uVar16 = uVar15 & uVar25;
        if (((uVar25 & ~local_944) != 0 || local_954 != 0) || local_950 != 0) {
          iVar13 = 0;
          local_964 = local_93c;
          local_968 = local_940;
        }
        local_3c = local_944 & ~uVar25;
        if (local_3c != 0) {
          iVar26 = 0;
          local_96c = local_93c;
          local_970 = local_940;
        }
        if (((uVar16 & ~local_948) != 0 || local_954 != 0) || local_950 != 0) {
          iVar20 = 0;
          local_974 = local_93c;
          local_978 = local_940;
          local_95c = local_950;
          local_960 = local_954;
          bVar2 = bVar28;
        }
        if (uVar25 == 0) {
          iVar26 = iVar26 + 0x20;
        }
        else {
          iVar13 = iVar13 + 0x20;
        }
        if (uVar16 != 0) {
          iVar20 = iVar20 + 0x20;
        }
        uVar17 = uVar16;
        if (uVar1 != 0) {
          FUN_4a103728(local_900,local_93c,local_940,0x20,local_924,auStack_8bc,0,0,0);
          iVar22 = 0x4a0b9f98;
          iVar24 = local_940;
          FUN_4a103b90(local_900,local_93c,local_940,0x20,local_924,auStack_8d0,0,0);
          uVar17 = 0;
          if (uVar15 != 0) {
            local_98c = iVar10 * iVar20 + local_974 + local_34 * 4 + iVar10 * 0x20;
            local_990 = iVar11 * iVar20 + local_978 + local_38 * 4 + iVar11 * 0x20;
            FUN_4a103728(local_90c,local_98c,local_990,0x20,local_928,auStack_8e4,0,0,0);
            iVar22 = 0x4a0ba028;
            iVar24 = local_990;
            uVar17 = FUN_4a103b90(local_90c,local_98c,local_990,0x20,local_928,auStack_8d0,0,0);
          }
        }
        if (0 < iVar13) {
          bVar28 = (uVar14 & uVar25) != 0;
          if (!bVar28) {
            uVar17 = local_3c;
          }
          if ((bVar28 || uVar17 != 0) || (local_97c == local_30)) {
            local_98c = local_964;
            local_990 = local_968;
            local_998 = 0;
            local_99c = 0;
            iVar24 = local_918;
            iVar22 = local_964;
            if (local_964 == local_918) {
              iVar24 = local_91c;
              iVar22 = local_968;
            }
            bVar6 = local_964 == local_918 && iVar22 == iVar24;
            if ((bool)bVar6) {
              local_998 = 2;
            }
            if (local_97c == local_30) {
              local_99c = 2;
              bVar6 = bVar6 | 2;
            }
            if (uVar14 != 0) {
              FUN_4a103a14(local_900,local_93c,local_940,0x20,local_924,auStack_8bc,0,0,0);
              FUN_4a103b90(local_900,local_93c,local_940,0x20,local_924,auStack_8d0,0,0);
              FUN_4a103904(local_904,local_93c,local_940,0x20,local_924,auStack_8bc,0,0,0);
              iVar22 = 0x4a0ba178;
              iVar24 = local_940;
              FUN_4a103d88(local_908,local_93c,local_940,0x20,local_924,auStack_8d0,0,0);
              iVar13 = iVar13 + -0x20;
              if (iVar13 < 1) goto LAB_4a0ba308;
            }
            FUN_4a103834(local_900,local_964,local_968,iVar13,local_924,auStack_8bc,local_998,
                         local_99c,bVar6);
            FUN_4a103b90(local_900,local_964,local_968,iVar13,local_924,auStack_8d0,local_998,
                         local_99c);
            FUN_4a103904(local_904,local_964,local_968,iVar13,local_924,auStack_8bc,local_998,
                         local_99c,bVar6);
            iVar22 = 0x4a0ba234;
            iVar24 = local_968;
            FUN_4a103d88(local_908,local_964,local_968,iVar13,local_924,auStack_8d0,local_998,
                         local_99c);
            if (local_960 == 0 && local_95c == 0) {
              iVar18 = iVar10 * local_998 + local_964;
              iVar24 = iVar11 * local_998 + local_968;
              FUN_4a102bcc(local_900,iVar18,iVar24,local_924,auStack_8d0);
              iVar22 = 0x4a0ba298;
              FUN_4a1037f0(local_908,iVar18,iVar24,local_924,auStack_8d0);
            }
            if (uVar14 == 0 && uVar1 == 0) {
              iVar18 = iVar10 * (iVar13 - local_99c) + local_964 + iVar11 * 2;
              iVar24 = iVar11 * (iVar13 - local_99c) + local_968 + iVar10 * -2;
              FUN_4a102bcc(local_900,iVar18,iVar24,local_928,auStack_8d0);
              iVar22 = 0x4a0ba308;
              FUN_4a1037f0(local_908,iVar18,iVar24,local_928,auStack_8d0);
            }
          }
        }
LAB_4a0ba308:
        if (((0 < iVar26) && (uVar25 != 0)) && (local_944 == 0)) {
          uVar7 = 0;
          uVar21 = 0;
          uVar23 = 0;
          local_994 = 0;
          if (local_924 == (undefined *)0x0) {
            local_98c = local_96c;
            in_r12 = 0x20;
            local_990 = local_970 + -2;
            uVar23 = 0x1e;
            iVar22 = iVar26;
          }
          else if (local_924 == (undefined *)0x2) {
            local_98c = local_96c + -0x1e;
            local_990 = local_970;
            local_994 = 0x1e;
            in_r12 = iVar26;
            iVar22 = 0x20;
          }
          else if (local_924 == (undefined *)0x3) {
            local_98c = local_96c - iVar26;
            local_990 = local_970 + -0x1e;
            uVar21 = 0x1e;
            in_r12 = 0x20;
            iVar22 = iVar26;
          }
          else if (local_924 == (undefined *)0x5) {
            local_98c = local_96c + -2;
            local_990 = local_970 - iVar26;
            uVar7 = 0x1e;
            in_r12 = iVar26;
            iVar22 = 0x20;
          }
          iVar24 = local_990;
          FUN_4a104f68(local_894,local_98c,local_990,iVar22,in_r12,auStack_8a8,local_994,uVar7,
                       uVar21,uVar23,0xf);
        }
        if ((0 < iVar20) &&
           (((local_40 = uVar14 | uVar1, (local_40 & uVar16) != 0 || ((local_948 & ~uVar16) != 0))
            || ((uVar16 != 0 && (local_97c == local_30)))))) {
          local_98c = iVar10 * iVar20 + local_974 + local_34 * 4;
          local_990 = iVar11 * iVar20 + local_978 + local_38 * 4;
          if ((bVar2 || local_960 != 0) || local_95c != 0) {
            iVar22 = 0;
          }
          else {
            iVar22 = 2;
          }
          if ((bVar3 || uVar14 != 0) || uVar1 != 0) {
            iVar18 = 0;
          }
          else {
            iVar18 = 2;
          }
          if (uVar14 != 0) {
            FUN_4a103a14(local_90c,local_98c,local_990,0x20,local_928,auStack_8e4,0,0,0);
            FUN_4a103b90(local_90c,local_98c,local_990,0x20,local_928,auStack_8d0,0,0);
            FUN_4a103904(local_910,local_98c,local_990,0x20,local_928,auStack_8e4,0,0,0);
            iVar24 = local_990;
            FUN_4a103d88(local_914,local_98c,local_990,0x20,local_928,auStack_8d0,0,0);
            iVar20 = iVar20 + -0x20;
            local_98c = local_98c + iVar10 * -0x20;
            local_990 = local_990 + iVar11 * -0x20;
            if (iVar20 < 1) goto LAB_4a0ba6e0;
          }
          FUN_4a103834(local_90c,local_98c,local_990,iVar20,local_928,auStack_8e4,iVar18,iVar22,0);
          FUN_4a103b90(local_90c,local_98c,local_990,iVar20,local_928,auStack_8d0,iVar18,iVar22);
          FUN_4a103904(local_910,local_98c,local_990,iVar20,local_928,auStack_8e4,iVar18,iVar22,0);
          iVar24 = local_990;
          FUN_4a103d88(local_914,local_98c,local_990,iVar20,local_928,auStack_8d0,iVar18,iVar22);
          if (local_40 == 0) {
            iVar19 = local_98c - iVar10 * iVar18;
            iVar24 = local_990 - iVar11 * iVar18;
            FUN_4a102bcc(local_90c,iVar19,iVar24,local_928,auStack_8d0);
            FUN_4a1037f0(local_910,iVar19,iVar24,local_928,auStack_8d0);
          }
          if (local_960 == 0 && local_95c == 0) {
            iVar18 = iVar10 * (iVar22 - iVar20) + local_98c + iVar11 * -2;
            iVar24 = iVar11 * (iVar22 - iVar20) + local_990 + iVar10 * 2;
            FUN_4a102bcc(local_90c,iVar18,iVar24,local_924,auStack_8d0);
            FUN_4a1037f0(local_910,iVar18,iVar24,local_924,auStack_8d0);
          }
        }
LAB_4a0ba6e0:
        local_934 = (undefined1 **)((int)local_934 + iVar10);
        local_938 = local_938 + iVar11;
        local_93c = local_93c + iVar10 * 0x20;
        local_940 = local_940 + iVar11 * 0x20;
        local_97c = local_97c + 1;
        local_954 = uVar14;
        local_950 = uVar1;
        local_948 = uVar16;
        local_944 = uVar25;
        bVar28 = bVar3;
      } while (local_97c < local_920);
    }
    local_8fc = local_8fc + 1;
  } while (local_8fc < 4);
  piVar8 = (int *)FUN_4a0c6bc0(local_8f8);
  puVar4 = PTR_PTR_4a0baa80;
  piVar8[2] = 0;
  piVar8[3] = 0;
  *piVar8 = (int)puVar4;
  iVar10 = FUN_4a15e080(100);
  if (iVar10 == 0) {
    iVar10 = FUN_4a1669a8();
  }
  iVar24 = 0;
  do {
    local_8fc = 0;
    *(undefined4 *)(iVar10 + iVar24 * 4) = 0;
    iVar24 = iVar24 + 1;
  } while (iVar24 < 0x19);
  thunk_FUN_4a161570(0x18);
  puVar12 = (undefined4 *)FUN_4a0c0628();
  puVar12[3] = 4;
  puVar12[4] = 0x19;
  puVar5 = PTR_PTR_4a0baa84;
  *puVar12 = PTR_PTR_4a0baa84;
  puVar12[2] = iVar10;
  *(undefined1 *)(puVar12 + 5) = 1;
  if (puVar12 != (undefined4 *)0x0) {
    (**(code **)(puVar5 + 0xc))(puVar12);
  }
  (**(code **)(*piVar8 + 0x1c))(piVar8);
  piVar8[2] = 0x19;
  piVar8[3] = (int)puVar12;
  iVar10 = 0;
  do {
    if (local_8ec == (int *)0x0) {
      iVar24 = 0;
    }
    else {
      iVar24 = local_8ec[2];
    }
    *(undefined4 *)(iVar24 + iVar10 * 4) = 0;
    puVar27 = auStack_890 + iVar10 * 0x54;
    iVar24 = FUN_4a1039e8(puVar27);
    if (0 < iVar24) {
      if (local_8ec == (int *)0x0) {
        iVar24 = 0;
      }
      else {
        iVar24 = local_8ec[2];
      }
      *(undefined1 **)(iVar24 + iVar10 * 4) = puVar27;
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0x19);
  puVar12 = (undefined4 *)FUN_4a0c6bc0(local_54);
  *puVar12 = local_2c;
  puVar12[2] = local_8f0;
  puVar12[3] = local_8ec;
  if (local_8ec != (int *)0x0) {
    (**(code **)(*local_8ec + 0xc))();
  }
  *puVar12 = puVar4;
  uVar7 = FUN_4a102d34(puVar12);
  *(undefined4 *)(local_28 + 0x40) = uVar7;
  local_54[0] = puVar4;
  iVar10 = FUN_4a0bcc84(local_54);
  if (iVar10 != 0) {
    iVar24 = 0;
    if (0 < local_4c) {
      do {
        iVar24 = iVar24 + 1;
      } while (iVar24 < local_4c);
      if (iVar10 == 0) goto LAB_4a0ba974;
    }
    FUN_4a14f21c();
  }
LAB_4a0ba974:
  FUN_4a0c6bf4(local_54);
  if (*(int **)(local_28 + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(local_28 + 0x40) + 0xc))();
  }
  FUN_4a0b3bc8(*(undefined4 *)(local_28 + 0x40),0x18,local_58);
  FUN_4a0b4c10(*(undefined4 *)(local_28 + 0x3c),*(undefined4 *)(local_28 + 0x40));
  iVar10 = 0;
  do {
    if (*(int *)(local_28 + 0x50) == 0) {
      iVar24 = 0;
    }
    else {
      iVar24 = *(int *)(*(int *)(local_28 + 0x50) + 8);
    }
    *(undefined4 *)(iVar24 + iVar10 * 4) = 0;
    FUN_4a0bb22c(local_28,iVar10,0xff,0);
    iVar10 = iVar10 + 1;
  } while (iVar10 < 4);
  local_8f8[0] = puVar4;
  iVar10 = FUN_4a0bcc84(local_8f8);
  if (iVar10 != 0) {
    iVar24 = 0;
    if (0 < local_8f0) {
      do {
        iVar24 = iVar24 + 1;
      } while (iVar24 < local_8f0);
      if (iVar10 == 0) goto LAB_4a0baa34;
    }
    FUN_4a14f21c();
  }
LAB_4a0baa34:
  FUN_4a0c6bf4(local_8f8);
  FUN_4a16bef4(auStack_8e4);
  FUN_4a16bef4(auStack_8d0);
  FUN_4a16bef4(auStack_8bc);
  FUN_4a16bef4(auStack_8a8);
  thunk_FUN_4a1491e4(auStack_890,0x19,0x54,PTR_FUN_4a0baa88);
  return;
}



// Address: 4a0baa8c

bool FUN_4a0baa8c(int param_1)

{
  return 0 < *(int *)(param_1 + 0x7c);
}



// Address: 4a0baaa0

int FUN_4a0baaa0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int unaff_r6;
  int unaff_r7;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_c0 [20];
  undefined1 auStack_ac [20];
  undefined1 auStack_98 [20];
  int local_84;
  undefined1 auStack_80 [8];
  undefined4 local_78;
  int *local_74;
  undefined1 auStack_6c [8];
  undefined4 local_64;
  int *local_60;
  undefined1 auStack_58 [8];
  undefined4 local_50;
  int *local_4c;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined *local_38;
  undefined *local_34;
  int iStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  iStack_30 = param_1;
  local_2c = param_2;
  uStack_28 = param_3;
  iVar1 = FUN_4a0ff494();
  local_44 = *(undefined4 *)(iVar1 + 0x520);
  FUN_4a16be24(auStack_58,3);
  iVar1 = 0;
  FUN_4a16be24(auStack_6c,3);
  FUN_4a16be24(auStack_80,4);
  iVar10 = 0;
  local_84 = 0;
  local_34 = PTR_PTR_4a0bae88;
  local_38 = PTR_PTR_4a0bae8c;
  do {
    iVar2 = 0;
    if (*(int *)(param_1 + 0x50) != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x50) + 8);
    }
    if (0x7eff < *(int *)(iVar2 + iVar10 * 4)) {
      iVar2 = 0;
      iVar11 = 0;
      if (iVar10 == 0) {
        unaff_r7 = *(int *)(param_1 + 0x18);
        iVar1 = *(int *)(param_1 + 0x10) << 5;
        iVar2 = 1;
        unaff_r6 = *(int *)(param_1 + 0x14) * 0x20 + 2;
      }
      else if (iVar10 == 1) {
        unaff_r7 = *(int *)(param_1 + 0x1c);
        iVar11 = 1;
        iVar1 = (*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x18)) * 0x20 + -2;
        unaff_r6 = *(int *)(param_1 + 0x14) << 5;
      }
      else if (iVar10 == 2) {
        unaff_r7 = *(int *)(param_1 + 0x18);
        iVar1 = (*(int *)(param_1 + 0x10) + unaff_r7) * 0x20;
        iVar2 = -1;
        unaff_r6 = (*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x1c)) * 0x20 + -2;
      }
      else if (iVar10 == 3) {
        unaff_r7 = *(int *)(param_1 + 0x1c);
        iVar11 = -1;
        iVar1 = *(int *)(param_1 + 0x10) * 0x20 + 2;
        unaff_r6 = (*(int *)(param_1 + 0x14) + unaff_r7) * 0x20;
      }
      local_3c = iVar1 << 0x10;
      piVar3 = (int *)0x0;
      if (local_4c != (int *)0x0) {
        piVar3 = (int *)local_4c[2];
      }
      *piVar3 = local_3c;
      if (local_4c == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = local_4c[2];
      }
      *(undefined4 *)(iVar4 + 4) = 0;
      if (local_4c == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = local_4c[2];
      }
      local_40 = unaff_r6 << 0x10;
      *(int *)(iVar4 + 8) = local_40;
      if (local_60 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)local_60[2];
      }
      *piVar3 = -iVar11;
      if (local_60 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = local_60[2];
      }
      *(undefined4 *)(iVar4 + 4) = 0;
      iVar4 = 0;
      if (local_60 != (int *)0x0) {
        iVar4 = local_60[2];
      }
      *(int *)(iVar4 + 8) = iVar2;
      puVar5 = (undefined4 *)FUN_4a0c6bc0(auStack_c0);
      *puVar5 = local_34;
      puVar5[2] = local_64;
      puVar5[3] = local_60;
      if (local_60 != (int *)0x0) {
        (**(code **)(*local_60 + 0xc))();
      }
      *puVar5 = local_38;
      puVar6 = (undefined4 *)FUN_4a0c6bc0(auStack_ac);
      *puVar6 = local_34;
      puVar6[2] = local_50;
      puVar6[3] = local_4c;
      if (local_4c != (int *)0x0) {
        (**(code **)(*local_4c + 0xc))();
      }
      *puVar6 = local_38;
      puVar7 = (undefined4 *)FUN_4a0c6bc0(auStack_98);
      *puVar7 = local_34;
      puVar7[2] = local_78;
      puVar7[3] = local_74;
      if (local_74 != (int *)0x0) {
        (**(code **)(*local_74 + 0xc))();
      }
      *puVar7 = local_38;
      iVar4 = FUN_4a0f5d7c(local_44,puVar7,puVar6,puVar5,local_2c,uStack_28);
      FUN_4a16bef4(auStack_98);
      FUN_4a16bef4(auStack_ac);
      FUN_4a16bef4(auStack_c0);
      if (iVar4 != 0) {
        bVar12 = local_74 == (int *)0x0;
        if (bVar12) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = (int *)local_74[2];
        }
        iVar4 = 0;
        if (bVar12) {
          iVar8 = 0;
        }
        else {
          iVar8 = local_74[2];
        }
        if (bVar12) {
          iVar9 = 0;
        }
        else {
          iVar9 = local_74[2];
        }
        if (!bVar12) {
          iVar4 = local_74[2];
        }
        iVar4 = *(int *)(iVar4 + 0xc);
        if ((-1 < iVar4) && (*(int *)(iVar8 + 4) - 1U < 0x5fffff)) {
          if (iVar2 == 0) {
            iVar2 = (unaff_r6 + unaff_r7 * iVar11 * 0x20) * 0x10000;
            iVar11 = local_40;
            if (iVar2 <= local_40) {
              iVar11 = iVar2;
            }
            iVar8 = local_40;
            if (local_40 <= iVar2) {
              iVar8 = iVar2;
            }
            if ((iVar11 <= *(int *)(iVar9 + 8)) && (*(int *)(iVar9 + 8) <= iVar8))
            goto LAB_4a0bae34;
          }
          else {
            iVar2 = (iVar1 + unaff_r7 * iVar2 * 0x20) * 0x10000;
            iVar11 = local_3c;
            if (iVar2 <= local_3c) {
              iVar11 = iVar2;
            }
            iVar8 = local_3c;
            if (local_3c <= iVar2) {
              iVar8 = iVar2;
            }
            if ((iVar11 <= *piVar3) && (*piVar3 <= iVar8)) {
LAB_4a0bae34:
              if ((local_84 == 0) || (iVar4 < local_84)) {
                local_84 = iVar4;
              }
            }
          }
        }
      }
    }
    iVar2 = local_84;
    iVar10 = iVar10 + 1;
    if (3 < iVar10) {
      FUN_4a16bef4(auStack_80);
      FUN_4a16bef4(auStack_6c);
      FUN_4a16bef4(auStack_58);
      return iVar2;
    }
  } while( true );
}



// Address: 4a0bae90

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0bae90(int param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_64 [8];
  int iStack_5c;
  int iStack_58;
  uint uStack_50;
  undefined1 auStack_4c [8];
  undefined4 uStack_44;
  int *piStack_40;
  undefined1 auStack_38 [20];
  
  *(uint *)(param_1 + 0x74) = param_2;
  uVar10 = param_2;
  if (*(int *)(param_1 + 0x78) != 0) {
    uVar10 = 0xffffff;
  }
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    do {
      if (*(int *)(param_1 + 0x34) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(param_1 + 0x34) + 8);
      }
      FUN_4a104ae8(param_2,*(undefined4 *)(*(int *)(iVar4 + iVar8 * 4) + 0x1c));
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 0x30));
  }
  iVar8 = 0;
  do {
    iVar4 = iVar8 * 6;
    FUN_4a104cf8(uVar10,*(undefined4 *)(param_1 + 0x40),iVar4);
    FUN_4a104cf8(uVar10,*(undefined4 *)(param_1 + 0x40),iVar4 + 1);
    FUN_4a104cf8(uVar10,*(undefined4 *)(param_1 + 0x40),iVar4 + 2);
    FUN_4a104cf8(param_2,*(undefined4 *)(param_1 + 0x40),iVar4 + 3);
    FUN_4a104cf8(param_2,*(undefined4 *)(param_1 + 0x40),iVar4 + 4);
    FUN_4a104cf8(param_2,*(undefined4 *)(param_1 + 0x40),iVar4 + 5);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 4);
  iVar8 = *(int *)(param_1 + 0x40);
  if (iVar8 == 0) {
    return;
  }
  iVar4 = FUN_4a13b5bc(iVar8,0x18);
  if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a104d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  iVar8 = FUN_4a13b5e4(iVar8);
  iVar7 = *(int *)(iVar8 + 0x44);
  iVar9 = *(int *)(iVar7 + 0x28);
  FUN_4a16b5f8(auStack_4c,iVar9 << 2);
  FUN_4a138d30(iVar7,0,iVar9,auStack_4c);
  uStack_50 = uVar10 & 0xff;
  uVar1 = (ulonglong)DAT_4a104f5c;
  uVar2 = (ulonglong)DAT_4a104f5c;
  lVar3 = (ulonglong)((uVar10 & 0xff) * 0xa0) * (ulonglong)DAT_4a104f5c;
  FUN_4a16be24(auStack_64,*(undefined4 *)(iVar4 + 0x38),(int)lVar3);
  FUN_4a1376d0(iVar4,auStack_64);
  iVar8 = 0;
  if (0 < iStack_5c) {
    do {
      if (iStack_58 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iStack_58 + 8);
      }
      iVar6 = 0;
      if (piStack_40 != (int *)0x0) {
        iVar6 = piStack_40[2];
      }
      iVar4 = *(int *)(iVar4 + iVar8 * 4) * 4;
      if (piStack_40 == (int *)0x0) {
        iVar6 = 0;
      }
      if ((*(byte *)(iVar6 + iVar4 + 2) & 1) == 0) {
        if (piStack_40 == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = piStack_40[2];
        }
        *(char *)(iVar6 + iVar4) =
             (char)(uint)((((uVar10 & 0xff0000) >> 0x10) * 0xa0) * uVar1 >> 0x27);
        if (piStack_40 == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = piStack_40[2];
        }
        *(char *)(iVar6 + iVar4 + 1) =
             (char)(uint)((((uVar10 & 0xff00) >> 8) * 0xa0) * uVar2 >> 0x27);
        if (piStack_40 == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = piStack_40[2];
        }
        *(byte *)(iVar6 + iVar4 + 2) = (byte)(uint)((ulonglong)lVar3 >> 0x27) & 0xfe;
      }
      else {
        if (piStack_40 == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = piStack_40[2];
        }
        *(char *)(iVar6 + iVar4) = (char)((uVar10 & 0xff0000) >> 0x10);
        if (piStack_40 == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = piStack_40[2];
        }
        *(char *)(iVar6 + iVar4 + 1) = (char)((uVar10 & 0xff00) >> 8);
        if (piStack_40 == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = piStack_40[2];
        }
        *(byte *)(iVar6 + iVar4 + 2) = (byte)uStack_50 | 1;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iStack_5c);
  }
  puVar5 = (undefined4 *)FUN_4a0c6bc0(auStack_38);
  *puVar5 = PTR_PTR_4a104f60;
  puVar5[2] = uStack_44;
  puVar5[3] = piStack_40;
  if (piStack_40 != (int *)0x0) {
    (**(code **)(*piStack_40 + 0xc))();
  }
  *puVar5 = PTR_PTR_4a104f64;
  FUN_4a0ad06c(iVar7,0,iVar9,puVar5);
  FUN_4a16b6c0(auStack_38);
  FUN_4a16bef4(auStack_64);
  FUN_4a16b6c0(auStack_4c);
  return;
}



// Address: 4a0baf80

void FUN_4a0baf80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int unaff_r4;
  int unaff_r5;
  int iVar11;
  uint uVar12;
  int unaff_r8;
  int iVar13;
  undefined1 in_CY;
  undefined1 uVar14;
  
  FUN_4a0d4978(param_4);
  uVar4 = FUN_4a002f08();
  FUN_4a0d4978(param_4);
  uVar5 = FUN_4a002d64();
  iVar1 = *(int *)(param_1 + 0x10) * 0x20;
  iVar2 = *(int *)(param_1 + 0x14) * 0x20;
  iVar13 = iVar1 + *(int *)(param_1 + 0x18) * 0x20;
  iVar6 = iVar2 + *(int *)(param_1 + 0x1c) * 0x20;
  uVar7 = FUN_4a171fac(iVar1);
  FUN_4a1720a0(uVar7,param_2);
  if (!(bool)in_CY) {
    uVar7 = FUN_4a171fac(iVar13);
    FUN_4a172458(uVar7,param_2);
    if (!(bool)in_CY) {
      uVar7 = FUN_4a171fac(iVar2);
      FUN_4a1720a0(uVar7,param_3);
      if (!(bool)in_CY) {
        uVar7 = FUN_4a171fac(iVar6);
        FUN_4a172458(uVar7,param_3);
        if (!(bool)in_CY) {
          bVar3 = true;
          goto LAB_4a0bb03c;
        }
      }
    }
  }
  bVar3 = false;
LAB_4a0bb03c:
  uVar12 = 0;
  do {
    uVar7 = 0xff;
    if (bVar3) {
      uVar8 = FUN_4a171fac(*(undefined4 *)(PTR_DAT_4a0bb220 + uVar12 * 4));
      FUN_4a1724e0(uVar8,param_4);
      uVar9 = FUN_4a0d4990();
      if ((int)uVar9 < 1) {
        if (uVar9 < 0xc2340000) {
          unaff_r4 = 0x437f0000;
          uVar7 = FUN_4a17211c(uVar9,0x437f0000);
          uVar7 = FUN_4a17211c(uVar7,DAT_4a0bb224);
          FUN_4a1724e0(uVar7,0x437f0000);
          uVar7 = FUN_4a171e1c();
        }
        else {
          if (uVar9 < 0xc3070001) goto LAB_4a0bb1c8;
          uVar7 = FUN_4a171a94(uVar9,0x43340000);
          unaff_r4 = 0x437f0000;
          uVar7 = FUN_4a17211c(uVar7,0x437f0000);
          uVar7 = FUN_4a17211c(uVar7,DAT_4a0bb228);
          FUN_4a1724e0(uVar7,0x437f0000);
          uVar7 = FUN_4a171e1c();
        }
      }
    }
    else {
      iVar11 = iVar2;
      if (uVar12 == 0) {
LAB_4a0bb204:
        uVar14 = true;
        iVar10 = iVar1;
        unaff_r4 = iVar13;
        unaff_r8 = iVar11;
      }
      else {
        iVar11 = iVar6;
        if (uVar12 == 1) {
          uVar14 = true;
          iVar10 = iVar13;
          unaff_r4 = iVar13;
          unaff_r8 = iVar2;
        }
        else {
          if (uVar12 == 2) goto LAB_4a0bb204;
          uVar14 = 2 < uVar12;
          iVar10 = 0;
          iVar11 = unaff_r5;
          if (uVar12 == 3) {
            iVar10 = iVar1;
            unaff_r4 = iVar1;
            iVar11 = iVar6;
            unaff_r8 = iVar2;
          }
        }
      }
      uVar8 = FUN_4a171fac(iVar10);
      FUN_4a172458(uVar8,param_2);
      if ((bool)uVar14) {
        uVar8 = FUN_4a171fac(unaff_r4);
        FUN_4a1720a0(uVar8,param_2);
        if ((bool)uVar14) {
          uVar8 = 0;
        }
        else {
          uVar8 = 1;
        }
      }
      else {
        uVar8 = 0xffffffff;
      }
      unaff_r4 = FUN_4a171fac(uVar8);
      uVar8 = FUN_4a171fac(unaff_r8);
      FUN_4a172458(uVar8,param_3);
      if ((bool)uVar14) {
        uVar8 = FUN_4a171fac(iVar11);
        FUN_4a1720a0(uVar8,param_3);
        if ((bool)uVar14) {
          uVar8 = 0;
        }
        else {
          uVar8 = 1;
        }
      }
      else {
        uVar8 = 0xffffffff;
      }
      uVar8 = FUN_4a171fac(uVar8);
      unaff_r5 = FUN_4a17211c(uVar5 ^ 0x80000000,uVar8);
      uVar8 = FUN_4a17211c(uVar4 ^ 0x80000000,unaff_r4);
      uVar9 = FUN_4a171a94(uVar8,unaff_r5);
      if (uVar9 < 0x80000001) {
LAB_4a0bb1c8:
        uVar7 = 0;
      }
    }
    FUN_4a0bb22c(param_1,uVar12,uVar7,param_5);
    uVar12 = uVar12 + 1;
    if (3 < (int)uVar12) {
      return;
    }
  } while( true );
}



// Address: 4a0bb22c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0bb22c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *UNRECOVERED_JUMPTABLE_00;
  
  iVar5 = *(int *)(param_1 + 0x50);
  iVar6 = 0;
  if (iVar5 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar5 + 8);
  }
  if (param_3 == 0xff) {
    iVar3 = 0xff00;
  }
  else {
    iVar3 = 0;
  }
  if (*(int *)(iVar2 + param_2 * 4) == iVar3) {
    return;
  }
  iVar2 = iVar6;
  if (iVar5 != 0) {
    iVar2 = *(int *)(iVar5 + 8);
  }
  iVar1 = iVar3 >> 8;
  iVar5 = param_2 * 6;
  *(int *)(iVar2 + param_2 * 4) = iVar3;
  if (iVar1 == 0xff) {
    FUN_4a0b3bc8(*(undefined4 *)(param_1 + 0x40),iVar5 + 2,*(undefined4 *)(param_1 + 0x70));
    FUN_4a0b3bc8(*(undefined4 *)(param_1 + 0x40),iVar5,*(undefined4 *)(param_1 + 0x70));
    FUN_4a0b3bc8(*(undefined4 *)(param_1 + 0x40),iVar5 + 1,0);
    FUN_4a0b3bc8(*(undefined4 *)(param_1 + 0x40),iVar5 + 5,*(undefined4 *)(param_1 + 0x70));
    FUN_4a0b3bc8(*(undefined4 *)(param_1 + 0x40),iVar5 + 3,*(undefined4 *)(param_1 + 0x70));
    FUN_4a0b3bc8(*(undefined4 *)(param_1 + 0x40),iVar5 + 4,0);
  }
  else if (iVar1 == 0) {
    FUN_4a0b3bc8(*(undefined4 *)(param_1 + 0x40),iVar5 + 2,0);
    FUN_4a0b3bc8(*(undefined4 *)(param_1 + 0x40),iVar5,*(undefined4 *)(param_1 + 0x70));
    FUN_4a0b3bc8(*(undefined4 *)(param_1 + 0x40),iVar5 + 1,*(undefined4 *)(param_1 + 0x70));
    FUN_4a0b3bc8(*(undefined4 *)(param_1 + 0x40),iVar5 + 5,0);
    FUN_4a0b3bc8(*(undefined4 *)(param_1 + 0x40),iVar5 + 3,*(undefined4 *)(param_1 + 0x70));
    FUN_4a0b3bc8(*(undefined4 *)(param_1 + 0x40),iVar5 + 4,*(undefined4 *)(param_1 + 0x70));
  }
  iVar5 = DAT_4a0bb404;
  iVar2 = iVar6;
  if (*(int *)(param_1 + 100) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 100) + 8);
  }
  iVar3 = 0;
  if (*(int *)(iVar2 + param_2 * 0x14 + 8) < 1) {
                    /* WARNING: Could not recover jumptable at 0x4a0bb380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  while( true ) {
    iVar2 = iVar6;
    if (*(int *)(param_1 + 100) != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 100) + 8);
    }
    iVar4 = *(int *)(iVar2 + param_2 * 0x14 + 0xc);
    iVar2 = iVar6;
    if (iVar4 != 0) {
      iVar2 = *(int *)(iVar4 + 8);
    }
    iVar2 = *(int *)(iVar2 + iVar3 * 4);
    if (iVar2 == 0) break;
    iVar4 = (int)((longlong)(iVar1 << 0x10) * (longlong)iVar5 +
                  ((ulonglong)(uint)(iVar1 << 0x10) << 0x20) >> 0x20);
    FUN_4a1086bc(iVar2,(iVar4 >> 7) - (iVar4 >> 0x1f));
    iVar3 = iVar3 + 1;
    iVar2 = iVar6;
    if (*(int *)(param_1 + 100) != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 100) + 8);
    }
    if (*(int *)(iVar2 + param_2 * 0x14 + 8) <= iVar3) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x4a0bb3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



// Address: 4a0bb408

void FUN_4a0bb408(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
                 undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  *(undefined4 *)(param_1 + 0x20) = param_6;
  *(undefined4 *)(param_1 + 0x24) = param_7;
  *(int *)(param_1 + 0x14) = param_3;
  *(int *)(param_1 + 0x18) = param_4;
  *(int *)(param_1 + 0x1c) = param_5;
  *(int *)(param_1 + 0x10) = param_2;
  iVar1 = FUN_4a0ff494();
  uVar5 = *(undefined4 *)(iVar1 + 0x520);
  uVar2 = FUN_4a0ef48c(uVar5,param_2,param_3);
  iVar1 = 0;
  if (*(int *)(param_1 + 0x34) == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x34) + 8);
  }
  *puVar3 = uVar2;
  uVar2 = FUN_4a0ef48c(uVar5,param_4 + param_2,param_3);
  if (*(int *)(param_1 + 0x34) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x34) + 8);
  }
  *(undefined4 *)(iVar4 + 4) = uVar2;
  uVar2 = FUN_4a0ef48c(uVar5,param_4 + param_2,param_5 + param_3);
  if (*(int *)(param_1 + 0x34) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x34) + 8);
  }
  *(undefined4 *)(iVar4 + 8) = uVar2;
  uVar2 = FUN_4a0ef48c(uVar5,param_2,param_5 + param_3);
  if (*(int *)(param_1 + 0x34) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x34) + 8);
  }
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
  return;
}



// Address: 4a0bb4e4

void FUN_4a0bb4e4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_28 [8];
  int iStack_20;
  int iStack_1c;
  
  iVar1 = *(int *)(param_1 + 0x7c) + 1;
  *(int *)(param_1 + 0x7c) = iVar1;
  if (iVar1 == 1) {
    FUN_4a0ff494();
    uVar2 = FUN_4a0fba7c();
    FUN_4a10ca70(auStack_28,uVar2);
    iVar1 = 0;
    if (0 < iStack_20) {
      do {
        if (iStack_1c == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(iStack_1c + 8);
        }
        uVar2 = *(undefined4 *)(iVar3 + iVar1 * 4);
        iVar3 = FUN_4a1460d4(uVar2);
        if (((iVar3 == 0x14) || (iVar3 = FUN_4a1460d4(uVar2), iVar3 == 0x15)) &&
           (iVar3 = FUN_4a146b68(uVar2), iVar3 == param_1)) {
          FUN_4a108118(uVar2);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < iStack_20);
    }
    FUN_4a16a5f4(auStack_28);
    return;
  }
  return;
}



// Address: 4a0bb5a0

void FUN_4a0bb5a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78) + 1;
  *(int *)(param_1 + 0x78) = iVar1;
  if (iVar1 != 1) {
    return;
  }
  iVar1 = FUN_4a0ff494();
  *(undefined1 *)(*(int *)(iVar1 + 0x520) + 0x450) = 1;
  return;
}



// Address: 4a0bb5d0

undefined4 FUN_4a0bb5d0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



// Address: 4a0bb5d8

void FUN_4a0bb5d8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_28 [8];
  int iStack_20;
  int iStack_1c;
  
  iVar1 = *(int *)(param_1 + 0x7c) + -1;
  *(int *)(param_1 + 0x7c) = iVar1;
  if (iVar1 == 0) {
    FUN_4a0ff494();
    uVar2 = FUN_4a0fba7c();
    FUN_4a10ca70(auStack_28,uVar2);
    iVar1 = 0;
    if (0 < iStack_20) {
      do {
        if (iStack_1c == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(iStack_1c + 8);
        }
        uVar2 = *(undefined4 *)(iVar3 + iVar1 * 4);
        iVar3 = FUN_4a1460d4(uVar2);
        if (((iVar3 == 0x14) || (iVar3 = FUN_4a1460d4(uVar2), iVar3 == 0x15)) &&
           (iVar3 = FUN_4a146b68(uVar2), iVar3 == param_1)) {
          FUN_4a108118(uVar2);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < iStack_20);
    }
    FUN_4a16a5f4(auStack_28);
    return;
  }
  return;
}



// Address: 4a0bb690

int * FUN_4a0bb690(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined *local_3c [2];
  int local_34;
  undefined4 local_2c;
  undefined *local_28;
  
  puVar4 = (undefined4 *)FUN_4a0c6bc0();
  puVar1 = PTR_PTR_4a0bb914;
  *puVar4 = PTR_PTR_4a0bb914;
  puVar4[3] = puVar1 + 0x34;
  puVar4[2] = puVar1 + 0x24;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[8] = 0xffffffff;
  puVar4[7] = 0;
  puVar4[9] = 0xffffffff;
  piVar5 = (int *)FUN_4a0c6bc0(puVar4 + 10);
  puVar1 = PTR_PTR_4a0bb91c;
  piVar5[2] = 0;
  piVar5[3] = 0;
  *piVar5 = (int)puVar1;
  puVar1 = PTR_PTR_4a0bb918;
  iVar6 = FUN_4a15e080(0x10);
  if (iVar6 == 0) {
    iVar6 = FUN_4a1669a8();
  }
  iVar11 = 0;
  do {
    local_2c = 0;
    *(undefined4 *)(iVar6 + iVar11 * 4) = 0;
    iVar11 = iVar11 + 1;
  } while (iVar11 < 4);
  thunk_FUN_4a161570(0x18);
  puVar4 = (undefined4 *)FUN_4a0c0628();
  puVar2 = PTR_PTR_4a0bb920;
  local_28 = PTR_PTR_4a0bb920;
  *puVar4 = PTR_PTR_4a0bb920;
  puVar4[3] = 4;
  puVar4[2] = iVar6;
  puVar4[4] = 4;
  *(undefined1 *)(puVar4 + 5) = 1;
  if (puVar4 != (undefined4 *)0x0) {
    (**(code **)(puVar2 + 0xc))(puVar4);
  }
  (**(code **)(*piVar5 + 0x1c))(piVar5);
  piVar5[2] = 4;
  piVar5[3] = (int)puVar4;
  piVar5[5] = 0;
  piVar5[6] = 0;
  iVar6 = FUN_4a16be24(piVar5 + 7,4);
  piVar5 = (int *)FUN_4a0c6bc0(iVar6 + 0x14);
  puVar2 = PTR_PTR_4a0bb924;
  piVar5[2] = 0;
  piVar5[3] = 0;
  *piVar5 = (int)puVar2;
  iVar6 = FUN_4a15e080(0x50);
  if (iVar6 == 0) {
    iVar6 = FUN_4a1669a8();
  }
  puVar2 = PTR_PTR_4a0bb928;
  iVar11 = 0;
  do {
    puVar4 = (undefined4 *)FUN_4a0c6bc0(local_3c);
    puVar4[2] = 0;
    *puVar4 = puVar2;
    puVar4[3] = 0;
    puVar7 = (undefined4 *)FUN_4a0c6bc0(iVar6 + iVar11 * 0x14);
    *puVar7 = puVar1;
    puVar7[2] = puVar4[2];
    piVar8 = (int *)puVar4[3];
    puVar7[3] = piVar8;
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 0xc))();
    }
    iVar3 = local_34;
    *puVar7 = puVar2;
    local_3c[0] = puVar2;
    iVar9 = FUN_4a0bcc84(local_3c);
    if (iVar9 != 0) {
      iVar10 = 0;
      if (0 < iVar3) {
        do {
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar3);
        if (iVar9 == 0) goto LAB_4a0bb878;
      }
      FUN_4a14f21c(iVar9);
    }
LAB_4a0bb878:
    FUN_4a0c6bf4(local_3c);
    iVar11 = iVar11 + 1;
    if (3 < iVar11) {
      thunk_FUN_4a161570(0x18);
      puVar4 = (undefined4 *)FUN_4a0c0628();
      puVar4[3] = 0x14;
      puVar4[4] = 4;
      *puVar4 = local_28;
      puVar4[2] = iVar6;
      *(undefined1 *)(puVar4 + 5) = 1;
      if (puVar4 != (undefined4 *)0x0) {
        (**(code **)(local_28 + 0xc))(puVar4);
      }
      (**(code **)(*piVar5 + 0x1c))(piVar5);
      piVar5[3] = (int)puVar4;
      piVar5[2] = 4;
      piVar5[5] = 0;
      piVar5[7] = 0xffffff;
      piVar5[6] = 0;
      piVar5[8] = 0;
      piVar5[9] = 0;
      return piVar5 + -0x16;
    }
  } while( true );
}



// Address: 4a0bb944

void FUN_4a0bb944(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar1 = PTR_PTR_4a0bbb1c;
  *param_1 = PTR_PTR_4a0bbb1c;
  param_1[3] = puVar1 + 0x34;
  param_1[2] = puVar1 + 0x24;
  piVar4 = (int *)param_1[0xf];
  if ((piVar4 != (int *)0x0) && (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  piVar4 = (int *)param_1[0x10];
  if ((piVar4 != (int *)0x0) && (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  piVar4 = (int *)param_1[0x1b];
  if ((piVar4 != (int *)0x0) && (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  piVar4 = (int *)param_1[0x1c];
  if ((piVar4 != (int *)0x0) && (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  param_1[0x16] = PTR_PTR_4a0bbb20;
  iVar5 = param_1[0x18];
  iVar2 = FUN_4a0bcc84(param_1 + 0x16);
  if (iVar2 != 0) {
    iVar3 = 0;
    if (0 < iVar5) {
      do {
        (*(code *)**(undefined4 **)(iVar2 + iVar3 * 0x14))();
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar5);
      if (iVar2 == 0) goto LAB_4a0bbab4;
    }
    FUN_4a14f21c(iVar2);
  }
LAB_4a0bbab4:
  iVar2 = FUN_4a0c6bf4(param_1 + 0x16);
  iVar2 = FUN_4a16bef4(iVar2 + -0x14);
  puVar6 = (undefined4 *)(iVar2 + -0x1c);
  *puVar6 = PTR_PTR_4a0bbb24;
  iVar5 = *(int *)(iVar2 + -0x14);
  iVar2 = FUN_4a0bcc84(puVar6);
  if (iVar2 != 0) {
    iVar3 = 0;
    if (0 < iVar5) {
      do {
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar5);
      if (iVar2 == 0) goto LAB_4a0bbb08;
    }
    FUN_4a14f21c();
  }
LAB_4a0bbb08:
  iVar2 = FUN_4a0c6bf4(puVar6);
  *(undefined **)(iVar2 + -0x28) = PTR_PTR_4a0c0674;
  *(undefined4 *)(iVar2 + -0x24) = 0xffffffff;
  return;
}



// Address: 4a0bbb28

void FUN_4a0bbb28(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(*(int *)PTR_DAT_4a0bbb64 + 0xc) = 0;
  host_glMatrixMode_arm(0x1700);
  FUN_4a150738();
  uVar1 = *param_1;
  param_1[2] = uVar1;
  FUN_4a156e2c(uVar1,uVar1,uVar1);
  return;
}



// Address: 4a0bbb68

/* WARNING: Removing unreachable block (ram,0x4a1729ec) */

uint FUN_4a0bbb68(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int local_14;
  int local_10;
  
  local_10 = param_1[9];
  if ((int)param_1[9] < (int)param_1[8]) {
    piVar2 = &local_14;
  }
  else {
    piVar2 = &local_10;
  }
  local_14 = param_1[8];
  iVar3 = *piVar2;
  uVar4 = FUN_4a171fac(param_2 - iVar3 / 2);
  uVar4 = FUN_4a17211c(uVar4,*param_1);
  uVar5 = FUN_4a171fac(iVar3 / 2);
  uVar6 = FUN_4a171a94(uVar5,uVar4);
  uVar1 = (int)uVar6 >> 0x17;
  uVar7 = uVar6 << 8;
  if (uVar1 != 0) {
    uVar7 = uVar7 | 0x80000000;
  }
  if ((int)uVar1 < 0) {
    if (uVar6 < 0xcf000001) {
      if ((uVar1 & 0xff) == 0) {
        uVar7 = uVar7 & 0x7fffffff;
      }
      return -(uVar7 >> (0x9e - (uVar1 & 0xff) & 0xff));
    }
  }
  else if (uVar1 < 0x9f && 0x9e - uVar1 != 0) {
    return uVar7 >> (0x9e - uVar1 & 0xff);
  }
  uVar7 = uVar6 * 2;
  if (uVar7 < 0xff000001) {
    if (uVar7 != 0xff000000) {
      return ~((int)uVar6 >> 0x1f) ^ 0x80000000;
    }
    return ~((int)uVar6 >> 0x1f) ^ 0x80000000;
  }
  uVar1 = DAT_4a171e8c & 0xf;
  if (uVar1 == 9) {
    if ((DAT_4a171e8c & 0x100000) != 0) {
      return 8;
    }
    return 0;
  }
  if (uVar1 == 10) {
    uVar7 = DAT_4a171bb0;
    if ((DAT_4a171e8c & 0x40) != 0) {
      uVar7 = 0x80000000;
    }
    return uVar7;
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
  return uVar7 & 0xff000000 | DAT_4a171bb0 >> 0x1d | (uVar7 & 0xffffff) << 3;
}



// Address: 4a0bbbcc

/* WARNING: Removing unreachable block (ram,0x4a1729ec) */

uint FUN_4a0bbbcc(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int local_14;
  int local_10;
  
  local_10 = param_1[9];
  if ((int)param_1[8] < (int)param_1[9]) {
    piVar2 = &local_14;
  }
  else {
    piVar2 = &local_10;
  }
  local_14 = param_1[8];
  iVar3 = *piVar2;
  uVar4 = FUN_4a171fac(param_2 - iVar3 / 2);
  uVar4 = FUN_4a17211c(uVar4,*param_1);
  uVar5 = FUN_4a171fac(iVar3 / 2);
  uVar6 = FUN_4a171a94(uVar5,uVar4);
  uVar1 = (int)uVar6 >> 0x17;
  uVar7 = uVar6 << 8;
  if (uVar1 != 0) {
    uVar7 = uVar7 | 0x80000000;
  }
  if ((int)uVar1 < 0) {
    if (uVar6 < 0xcf000001) {
      if ((uVar1 & 0xff) == 0) {
        uVar7 = uVar7 & 0x7fffffff;
      }
      return -(uVar7 >> (0x9e - (uVar1 & 0xff) & 0xff));
    }
  }
  else if (uVar1 < 0x9f && 0x9e - uVar1 != 0) {
    return uVar7 >> (0x9e - uVar1 & 0xff);
  }
  uVar7 = uVar6 * 2;
  if (uVar7 < 0xff000001) {
    if (uVar7 != 0xff000000) {
      return ~((int)uVar6 >> 0x1f) ^ 0x80000000;
    }
    return ~((int)uVar6 >> 0x1f) ^ 0x80000000;
  }
  uVar1 = DAT_4a171e8c & 0xf;
  if (uVar1 == 9) {
    if ((DAT_4a171e8c & 0x100000) != 0) {
      return 8;
    }
    return 0;
  }
  if (uVar1 == 10) {
    uVar7 = DAT_4a171bb0;
    if ((DAT_4a171e8c & 0x40) != 0) {
      uVar7 = 0x80000000;
    }
    return uVar7;
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
  return uVar7 & 0xff000000 | DAT_4a171bb0 >> 0x1d | (uVar7 & 0xffffff) << 3;
}



// Address: 4a0bbc30

void FUN_4a0bbc30(int param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  int iStack_10;
  int iStack_c;
  
  piVar1 = &iStack_10;
  if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x24)) {
    return;
  }
  iVar2 = *param_2;
  *param_2 = *param_3;
  *param_3 = iVar2;
  iStack_c = *(int *)(param_1 + 0x24);
  iStack_10 = *(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x24)) {
    piVar1 = &iStack_c;
  }
  *param_2 = (*piVar1 - *param_2) - *param_5;
  iVar2 = *param_4;
  *param_4 = *param_5;
  *param_5 = iVar2;
  return;
}



// Address: 4a0bbcb4

void FUN_4a0bbcb4(int param_1)

{
  *(undefined1 *)(*(int *)PTR_DAT_4a0bbce8 + 0xc) = 0;
  host_glMatrixMode_arm(0x1700);
  FUN_4a150724();
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  return;
}



// Address: 4a0bbcec

void FUN_4a0bbcec(void)

{
  return;
}



// Address: 4a0bbcf0

/* WARNING: Removing unreachable block (ram,0x4a1729ec) */

uint FUN_4a0bbcf0(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = FUN_4a171fac(param_2);
  uVar3 = FUN_4a17211c(uVar2,*param_1);
  uVar1 = (int)uVar3 >> 0x17;
  uVar4 = uVar3 << 8;
  if (uVar1 != 0) {
    uVar4 = uVar4 | 0x80000000;
  }
  if ((int)uVar1 < 0) {
    if (uVar3 < 0xcf000001) {
      if ((uVar1 & 0xff) == 0) {
        uVar4 = uVar4 & 0x7fffffff;
      }
      return -(uVar4 >> (0x9e - (uVar1 & 0xff) & 0xff));
    }
  }
  else if (uVar1 < 0x9f && 0x9e - uVar1 != 0) {
    return uVar4 >> (0x9e - uVar1 & 0xff);
  }
  uVar4 = uVar3 * 2;
  if (uVar4 < 0xff000001) {
    if (uVar4 != 0xff000000) {
      return ~((int)uVar3 >> 0x1f) ^ 0x80000000;
    }
    return ~((int)uVar3 >> 0x1f) ^ 0x80000000;
  }
  uVar1 = DAT_4a171e8c & 0xf;
  if (uVar1 == 9) {
    if ((DAT_4a171e8c & 0x100000) != 0) {
      return 8;
    }
    return 0;
  }
  if (uVar1 == 10) {
    uVar4 = DAT_4a171bb0;
    if ((DAT_4a171e8c & 0x40) != 0) {
      uVar4 = 0x80000000;
    }
    return uVar4;
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
  return uVar4 & 0xff000000 | DAT_4a171bb0 >> 0x1d | (uVar4 & 0xffffff) << 3;
}



// Address: 4a0bbd10

void FUN_4a0bbd10(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  
  uVar1 = host_s3eSurfaceGetInt_arm(4);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = host_s3eSurfaceGetInt_arm(5);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar5 = host_s3eSurfaceGetInt_arm(0xb);
  iVar3 = (int)((ulonglong)uVar5 >> 0x20);
  *(int *)(param_1 + 0x28) = (int)uVar5;
  bVar4 = *(char *)(param_1 + 0x2c) != '\0';
  iVar2 = 0;
  if (bVar4) {
    iVar2 = *(int *)(param_1 + 0x24);
    iVar3 = *(int *)(param_1 + 0x20);
  }
  if (bVar4 && iVar3 < iVar2) {
    *(int *)(param_1 + 0x20) = iVar2;
    *(int *)(param_1 + 0x24) = iVar3;
    return;
  }
  return;
}



// Address: 4a0bbd68

int FUN_4a0bbd68(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int local_20;
  int local_1c;
  
  piVar1 = &local_20;
  local_1c = param_1[9];
  if ((int)param_1[8] <= (int)param_1[9]) {
    piVar1 = &local_1c;
  }
  local_20 = param_1[8];
  iVar2 = *piVar1;
  uVar3 = FUN_4a171fac(iVar2 / 2);
  uVar5 = *param_1;
  uVar3 = FUN_4a171bb8(uVar3,uVar5);
  uVar5 = FUN_4a1725c0(uVar5,0x3f800000);
  FUN_4a17211c(uVar5,uVar3);
  iVar4 = FUN_4a171e1c();
  if ((param_3 == 1) || ((param_3 == 2 && (param_2 < iVar2 / 2)))) {
    iVar4 = -iVar4;
  }
  return param_2 - iVar4;
}



// Address: 4a0bbe00

int FUN_4a0bbe00(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int local_20;
  int local_1c;
  
  piVar1 = &local_20;
  local_1c = param_1[9];
  if ((int)param_1[9] <= (int)param_1[8]) {
    piVar1 = &local_1c;
  }
  local_20 = param_1[8];
  iVar2 = *piVar1;
  uVar3 = FUN_4a171fac(iVar2 / 2);
  uVar5 = *param_1;
  uVar3 = FUN_4a171bb8(uVar3,uVar5);
  uVar5 = FUN_4a1725c0(uVar5,0x3f800000);
  FUN_4a17211c(uVar5,uVar3);
  iVar4 = FUN_4a171e1c();
  if ((param_3 == 0) || ((param_3 == 2 && (param_2 < iVar2 / 2)))) {
    iVar4 = -iVar4;
  }
  return param_2 - iVar4;
}



// Address: 4a0bbe98

void FUN_4a0bbe98(undefined4 *param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_20;
  int local_1c;
  int *piVar2;
  int *piVar6;
  
  local_1c = param_1[9];
  piVar6 = &local_20;
  piVar2 = &local_20;
  local_20 = param_1[8];
  if ((int)param_1[8] <= local_1c) {
    piVar6 = &local_1c;
  }
  iVar5 = *piVar6;
  local_20 = param_1[8];
  if (local_1c <= (int)param_1[8]) {
    piVar2 = &local_1c;
  }
  iVar1 = *piVar2;
  uVar3 = FUN_4a171fac(*param_2 - iVar5 / 2);
  FUN_4a171bb8(uVar3,*param_1);
  iVar4 = FUN_4a171e1c();
  *param_2 = iVar4 + iVar5 / 2;
  uVar3 = FUN_4a171fac(*param_3 - iVar1 / 2);
  FUN_4a171bb8(uVar3,*param_1);
  iVar5 = FUN_4a171e1c();
  *param_3 = iVar5 + iVar1 / 2;
  return;
}



// Address: 4a0bbf48

void FUN_4a0bbf48(undefined4 *param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_20;
  int local_1c;
  int *piVar2;
  int *piVar6;
  
  local_1c = param_1[9];
  piVar6 = &local_20;
  piVar2 = &local_20;
  local_20 = param_1[8];
  if ((int)param_1[8] <= local_1c) {
    piVar6 = &local_1c;
  }
  iVar5 = *piVar6;
  local_20 = param_1[8];
  if (local_1c <= (int)param_1[8]) {
    piVar2 = &local_1c;
  }
  iVar1 = *piVar2;
  uVar3 = FUN_4a171fac(*param_2 - iVar5 / 2);
  FUN_4a17211c(uVar3,*param_1);
  iVar4 = FUN_4a171e1c();
  *param_2 = iVar4 + iVar5 / 2;
  uVar3 = FUN_4a171fac(*param_3 - iVar1 / 2);
  FUN_4a17211c(uVar3,*param_1);
  iVar5 = FUN_4a171e1c();
  *param_3 = iVar5 + iVar1 / 2;
  return;
}



// Address: 4a0bc000

/* WARNING: Removing unreachable block (ram,0x4a1729ec) */

uint FUN_4a0bc000(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = FUN_4a171fac(param_2);
  uVar3 = FUN_4a171bb8(uVar2,*param_1);
  uVar1 = (int)uVar3 >> 0x17;
  uVar4 = uVar3 << 8;
  if (uVar1 != 0) {
    uVar4 = uVar4 | 0x80000000;
  }
  if ((int)uVar1 < 0) {
    if (uVar3 < 0xcf000001) {
      if ((uVar1 & 0xff) == 0) {
        uVar4 = uVar4 & 0x7fffffff;
      }
      return -(uVar4 >> (0x9e - (uVar1 & 0xff) & 0xff));
    }
  }
  else if (uVar1 < 0x9f && 0x9e - uVar1 != 0) {
    return uVar4 >> (0x9e - uVar1 & 0xff);
  }
  uVar4 = uVar3 * 2;
  if (uVar4 < 0xff000001) {
    if (uVar4 != 0xff000000) {
      return ~((int)uVar3 >> 0x1f) ^ 0x80000000;
    }
    return ~((int)uVar3 >> 0x1f) ^ 0x80000000;
  }
  uVar1 = DAT_4a171e8c & 0xf;
  if (uVar1 == 9) {
    if ((DAT_4a171e8c & 0x100000) != 0) {
      return 8;
    }
    return 0;
  }
  if (uVar1 == 10) {
    uVar4 = DAT_4a171bb0;
    if ((DAT_4a171e8c & 0x40) != 0) {
      uVar4 = 0x80000000;
    }
    return uVar4;
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
  return uVar4 & 0xff000000 | DAT_4a171bb0 >> 0x1d | (uVar4 & 0xffffff) << 3;
}



// Address: 4a0bc020

void FUN_4a0bc020(int param_1)

{
  *(undefined1 *)(*(int *)PTR_DAT_4a0bc05c + 0xc) = 0;
  host_glMatrixMode_arm(0x1700);
  FUN_4a150738();
  *(undefined4 *)(param_1 + 8) = 0x40000000;
  FUN_4a156e2c(0x40000000,0x40000000,0x40000000);
  return;
}



// Address: 4a0bc060

void FUN_4a0bc060(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int local_c;
  int local_8;
  
  iVar2 = *(int *)(param_1 + 0x28);
  piVar1 = &local_c;
  piVar3 = &local_c;
  if (*(int *)(param_1 + 0x24) < *(int *)(param_1 + 0x20)) {
    iVar2 = (iVar2 + 1) % 4;
  }
  if (iVar2 == 0) {
    iVar2 = *param_2;
    *param_2 = *param_3;
    *param_3 = iVar2;
    local_8 = *(int *)(param_1 + 0x24);
    local_c = *(int *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x24) <= *(int *)(param_1 + 0x20)) goto LAB_4a0bc124;
  }
  else {
    if (iVar2 == 2) {
      iVar2 = *param_2;
      *param_2 = *param_3;
      *param_3 = iVar2;
      local_8 = *(int *)(param_1 + 0x24);
      local_c = *(int *)(param_1 + 0x20);
      if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x24)) {
        piVar1 = &local_8;
      }
      *param_2 = *piVar1 - *param_2;
      return;
    }
    if (iVar2 != 3) {
      return;
    }
    if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x24)) {
      piVar3 = &local_8;
    }
    *param_2 = *piVar3 - *param_2;
    if (*(int *)(param_1 + 0x24) <= *(int *)(param_1 + 0x20)) {
LAB_4a0bc124:
      piVar1 = &local_8;
      goto LAB_4a0bc128;
    }
  }
  piVar1 = &local_c;
LAB_4a0bc128:
  *param_3 = *piVar1 - *param_3;
  return;
}



// Address: 4a0bc1c4

void FUN_4a0bc1c4(void)

{
  undefined4 uVar1;
  
  thunk_FUN_4a161570(0x30);
  uVar1 = FUN_4a0bc208();
  *(undefined4 *)PTR_DAT_4a0bc1e4 = uVar1;
  return;
}



// Address: 4a0bc1e8

void FUN_4a0bc1e8(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)PTR_DAT_4a0bc1f4;
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a0bc1f8

undefined4 FUN_4a0bc1f8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// Address: 4a0bc200

undefined4 FUN_4a0bc200(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



// Address: 4a0bc208

int * FUN_4a0bc208(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  uint *puVar6;
  int *piVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  puVar4 = &local_20;
  puVar6 = &local_20;
  *param_1 = 0x3f800000;
  param_1[1] = 0x3f800000;
  param_1[2] = 0x3f800000;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  iVar2 = host_s3eDeviceGetInt_arm(0);
  if ((iVar2 == 4) || (iVar2 = host_s3eDeviceGetInt_arm(0), iVar2 == 0x13)) {
    uVar9 = 1;
  }
  else {
    uVar9 = 0;
  }
  *(undefined1 *)(param_1 + 0xb) = uVar9;
  iVar2 = host_s3eSurfaceGetInt_arm(4);
  param_1[8] = iVar2;
  iVar2 = host_s3eSurfaceGetInt_arm(5);
  param_1[9] = iVar2;
  uVar10 = host_s3eSurfaceGetInt_arm(0xb);
  iVar2 = (int)((ulonglong)uVar10 >> 0x20);
  param_1[10] = (int)uVar10;
  bVar8 = (char)param_1[0xb] != '\0';
  iVar3 = 0;
  if (bVar8) {
    iVar3 = param_1[9];
    iVar2 = param_1[8];
  }
  if (bVar8 && iVar2 < iVar3) {
    param_1[8] = iVar3;
    param_1[9] = iVar2;
  }
  local_1c = param_1[9];
  local_20 = param_1[8];
  if (param_1[8] <= param_1[9]) {
    puVar4 = &local_1c;
  }
  uVar5 = FUN_4a171fac(*puVar4);
  local_10 = FUN_4a17211c(uVar5,DAT_4a0bc368);
  local_1c = param_1[9];
  local_20 = param_1[8];
  uVar9 = local_1c <= local_20;
  if ((int)local_1c <= (int)local_20) {
    puVar6 = &local_1c;
  }
  uVar5 = FUN_4a171fac(*puVar6);
  local_14 = FUN_4a17211c(uVar5,DAT_4a0bc36c);
  FUN_4a1720a0(local_14,local_10);
  puVar1 = PTR_s_LimitUIScale_4a0bc370;
  if ((bool)uVar9) {
    piVar7 = &local_10;
  }
  else {
    piVar7 = &local_14;
  }
  *param_1 = *piVar7;
  local_18 = 0;
  host_s3eConfigGetInt_arm(puVar1 + -8,puVar1,&local_18);
  if (local_18 != 0) {
    iVar2 = *param_1;
    if (0x40000000 < iVar2) {
      iVar2 = 0x40000000;
    }
    *param_1 = iVar2;
  }
  return param_1;
}



// Address: 4a0bc374

undefined4 FUN_4a0bc374(void)

{
  return *(undefined4 *)PTR_DAT_4a0bc380;
}



// Address: 4a0bc384

void FUN_4a0bc384(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)thunk_FUN_4a161570(0x18);
  *piVar1 = 0;
  piVar1[1] = 0;
  piVar1[2] = 0;
  iVar2 = FUN_4a15e080(8);
  if (iVar2 == 0) {
    iVar2 = FUN_4a1669a8();
  }
  *piVar1 = iVar2;
  piVar1[1] = iVar2;
  piVar1[2] = iVar2 + 8;
  *(undefined1 *)piVar1[1] = 0;
  piVar1[3] = 0;
  piVar1[4] = 0;
  piVar1[5] = 0;
  iVar2 = FUN_4a15e080(8);
  if (iVar2 == 0) {
    iVar2 = FUN_4a1669a8();
  }
  piVar1[3] = iVar2;
  piVar1[4] = iVar2;
  piVar1[5] = iVar2 + 8;
  *(undefined1 *)piVar1[4] = 0;
  *(int **)PTR_DAT_4a0bc424 = piVar1;
  return;
}



// Address: 4a0bc428

void FUN_4a0bc428(void)

{
  undefined *puVar1;
  int *piVar2;
  
  puVar1 = PTR_DAT_4a0bc46c;
  piVar2 = *(int **)PTR_DAT_4a0bc46c;
  if (piVar2 != (int *)0x0) {
    if (piVar2[3] != 0) {
      FUN_4a14f21c();
    }
    if (*piVar2 != 0) {
      FUN_4a14f21c();
    }
    thunk_FUN_4a161530(piVar2);
  }
  *(undefined4 *)puVar1 = 0;
  return;
}



// Address: 4a0bc470

byte * FUN_4a0bc470(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  byte **ppbVar7;
  byte *pbVar8;
  byte **ppbVar9;
  byte *pbVar10;
  byte **ppbVar11;
  byte *pbVar12;
  undefined1 *puVar13;
  int iVar14;
  undefined1 *local_44;
  undefined1 *local_38;
  byte *local_34;
  byte *local_30;
  byte *local_2c;
  byte *local_28;
  byte *local_24;
  
  if (param_2 != param_1) {
    pbVar8 = *(byte **)(param_2 + 4);
    local_24 = (byte *)0x0;
    pbVar3 = param_1;
    pbVar10 = *(byte **)param_2;
    pbVar12 = *(byte **)param_1;
    while( true ) {
      if (pbVar10 != pbVar8) {
        pbVar3 = *(byte **)(param_1 + 4);
      }
      if (pbVar10 == pbVar8 || pbVar3 == pbVar12) break;
      pbVar3 = (byte *)(uint)*pbVar10;
      *pbVar12 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      pbVar12 = pbVar12 + 1;
    }
    if (pbVar10 == pbVar8) {
      pbVar3 = *(byte **)(param_1 + 4);
      if (pbVar12 != pbVar3) {
        FUN_4a000ec8(pbVar12,pbVar3,1);
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - ((int)pbVar3 - (int)pbVar12);
      }
    }
    else {
      FUN_4a1664f0(param_1);
    }
  }
  iVar4 = thunk_FUN_4a0013e0(&DAT_4a0bc800);
  if ((*(int *)(param_2 + 4) - *(int *)param_2 != iVar4) ||
     (iVar4 = thunk_FUN_4a000e60(*(int *)param_2,&DAT_4a0bc800,iVar4), iVar4 != 0)) {
    local_24 = (byte *)0x2f;
    if (*(int *)(param_1 + 4) + 1 == *(int *)(param_1 + 8)) {
      local_28 = (byte *)(*(int *)(param_1 + 4) - *(int *)param_1);
      local_2c = (byte *)0x1;
      if (local_28 == (byte *)0x0) {
        ppbVar11 = &local_2c;
      }
      else {
        ppbVar11 = &local_28;
      }
      pbVar3 = local_28 + (int)*ppbVar11;
      if ((byte *)((*(int *)(param_1 + 8) - *(int *)param_1) - 1U) <= pbVar3) {
        if (pbVar3 == (byte *)0xffffffff) {
          FUN_4a0bcbf4();
        }
        pbVar3 = pbVar3 + 1;
        if (pbVar3 == (byte *)0x0) {
          puVar6 = (undefined1 *)0x0;
        }
        else {
          puVar6 = (undefined1 *)FUN_4a15e080(pbVar3);
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = (undefined1 *)FUN_4a1669a8();
          }
        }
        iVar4 = *(int *)param_1;
        iVar14 = *(int *)(param_1 + 4);
        local_30 = (byte *)0x0;
        local_38 = (undefined1 *)0x0;
        local_34 = (byte *)0x0;
        local_38 = (undefined1 *)FUN_4a166140();
        puVar13 = puVar6;
        if (iVar14 != iVar4) {
          iVar14 = iVar14 - iVar4;
          iVar4 = FUN_4a000ec8(puVar6,iVar4,iVar14);
          puVar13 = (undefined1 *)(iVar4 + iVar14);
        }
        local_30 = (byte *)0x0;
        *puVar13 = 0;
        if (*(int *)param_1 != 0) {
          FUN_4a14f21c();
        }
        *(undefined1 **)param_1 = puVar6;
        *(undefined1 **)(param_1 + 4) = puVar13;
        *(undefined1 **)(param_1 + 8) = puVar6 + (int)pbVar3;
      }
    }
    local_28 = (byte *)0x0;
    *(undefined1 *)(*(int *)(param_1 + 4) + 1) = 0;
    **(undefined1 **)(param_1 + 4) = local_24._0_1_;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    ppbVar11 = (byte **)(param_1 + 0xc);
    local_44 = (undefined1 *)0x0;
    if (*(int *)PTR_DAT_4a0bc808 == 0) {
      iVar4 = thunk_FUN_4a0013e0(&DAT_4a0bc80c);
      if (iVar4 + 1 == 0) {
        FUN_4a0bcbf4(PTR_s_basic_string_4a0bc804);
      }
      else {
        local_44 = (undefined1 *)FUN_4a15e080(iVar4 + 1);
        if (local_44 == (undefined1 *)0x0) {
          local_44 = (undefined1 *)FUN_4a1669a8();
        }
      }
      puVar6 = local_44;
      if (iVar4 != 0) {
        iVar14 = FUN_4a000ec8(local_44);
        puVar6 = (undefined1 *)(iVar14 + iVar4);
      }
      *puVar6 = 0;
      local_38 = (byte *)0x0;
      puVar13 = puVar6 + ((*(int *)(param_2 + 4) - *(int *)param_2) - (int)local_44) + 1;
      local_34 = (byte *)0x0;
      local_30 = (byte *)0x0;
      if (puVar13 == (undefined1 *)0x0) {
        FUN_4a0bcbf4(PTR_s_basic_string_4a0bc804);
      }
      else {
        pbVar3 = (byte *)FUN_4a15e080(puVar13);
        if (pbVar3 == (byte *)0x0) {
          pbVar3 = (byte *)FUN_4a1669a8();
        }
        local_30 = pbVar3 + (int)puVar13;
        local_38 = pbVar3;
        local_34 = pbVar3;
      }
      *local_34 = 0;
      FUN_4a1664f0(&local_38,local_44,puVar6);
      FUN_4a1664f0(&local_38,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4));
      iVar4 = thunk_FUN_4a0013e0(s__pvrtc__4a0bcb58);
      local_2c = (byte *)0x0;
      pbVar3 = local_34 + (iVar4 - (int)local_38) + 1;
      local_28 = (byte *)0x0;
      local_24 = (byte *)0x0;
      if (pbVar3 == (byte *)0x0) {
        FUN_4a0bcbf4(PTR_s_basic_string_4a0bc804);
      }
      else {
        pbVar10 = (byte *)FUN_4a15e080(pbVar3);
        if (pbVar10 == (byte *)0x0) {
          pbVar10 = (byte *)FUN_4a1669a8();
        }
        local_24 = pbVar10 + (int)pbVar3;
        local_2c = pbVar10;
        local_28 = pbVar10;
      }
      *local_28 = 0;
      FUN_4a1664f0(&local_2c,local_38,local_34);
      FUN_4a166340(&local_2c,s__pvrtc__4a0bcb58,s__pvrtc__4a0bcb58 + iVar4);
      ppbVar7 = &local_2c;
      if (ppbVar7 != ppbVar11) {
        pbVar3 = local_2c;
        ppbVar9 = (byte **)*ppbVar11;
        while( true ) {
          if (pbVar3 != local_28) {
            ppbVar7 = *(byte ***)(param_1 + 0x10);
          }
          if (pbVar3 == local_28 || ppbVar7 == ppbVar9) break;
          ppbVar7 = (byte **)(uint)*pbVar3;
          *(byte *)ppbVar9 = *pbVar3;
          pbVar3 = pbVar3 + 1;
          ppbVar9 = (byte **)((int)ppbVar9 + 1);
        }
        if (pbVar3 == local_28) {
          ppbVar11 = *(byte ***)(param_1 + 0x10);
          if (ppbVar9 != ppbVar11) {
            FUN_4a000ec8(ppbVar9,ppbVar11,1);
            *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - ((int)ppbVar11 - (int)ppbVar9);
          }
        }
        else {
          FUN_4a1664f0(ppbVar11);
        }
      }
      if (local_2c != (byte *)0x0) {
        FUN_4a14f21c();
      }
      if (local_38 != (byte *)0x0) {
        FUN_4a14f21c();
      }
      if (local_44 == (undefined1 *)0x0) {
        return (byte *)0x0;
      }
    }
    else {
      iVar4 = thunk_FUN_4a0013e0(&DAT_4a0bc80c);
      if (iVar4 + 1 == 0) {
        FUN_4a0bcbf4(PTR_s_basic_string_4a0bc804);
      }
      else {
        local_44 = (undefined1 *)FUN_4a15e080(iVar4 + 1);
        if (local_44 == (undefined1 *)0x0) {
          local_44 = (undefined1 *)FUN_4a1669a8();
        }
      }
      puVar6 = local_44;
      if (iVar4 != 0) {
        iVar14 = FUN_4a000ec8(local_44);
        puVar6 = (undefined1 *)(iVar14 + iVar4);
      }
      *puVar6 = 0;
      local_38 = (byte *)0x0;
      puVar13 = puVar6 + ((*(int *)(param_2 + 4) - *(int *)param_2) - (int)local_44) + 1;
      local_34 = (byte *)0x0;
      local_30 = (byte *)0x0;
      if (puVar13 == (undefined1 *)0x0) {
        FUN_4a0bcbf4(PTR_s_basic_string_4a0bc804);
      }
      else {
        pbVar3 = (byte *)FUN_4a15e080(puVar13);
        if (pbVar3 == (byte *)0x0) {
          pbVar3 = (byte *)FUN_4a1669a8();
        }
        local_30 = pbVar3 + (int)puVar13;
        local_38 = pbVar3;
        local_34 = pbVar3;
      }
      *local_34 = 0;
      FUN_4a1664f0(&local_38,local_44,puVar6);
      FUN_4a1664f0(&local_38,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4));
      iVar4 = thunk_FUN_4a0013e0(s__pvrtc_10th__4a0bcb48);
      local_2c = (byte *)0x0;
      pbVar3 = local_34 + (iVar4 - (int)local_38) + 1;
      local_28 = (byte *)0x0;
      local_24 = (byte *)0x0;
      if (pbVar3 == (byte *)0x0) {
        FUN_4a0bcbf4(PTR_s_basic_string_4a0bc804);
      }
      else {
        pbVar10 = (byte *)FUN_4a15e080(pbVar3);
        if (pbVar10 == (byte *)0x0) {
          pbVar10 = (byte *)FUN_4a1669a8();
        }
        local_24 = pbVar10 + (int)pbVar3;
        local_2c = pbVar10;
        local_28 = pbVar10;
      }
      *local_28 = 0;
      FUN_4a1664f0(&local_2c,local_38,local_34);
      FUN_4a166340(&local_2c,s__pvrtc_10th__4a0bcb48,s__pvrtc_10th__4a0bcb48 + iVar4);
      ppbVar7 = &local_2c;
      if (ppbVar7 != ppbVar11) {
        pbVar3 = local_2c;
        ppbVar9 = (byte **)*ppbVar11;
        while( true ) {
          if (pbVar3 != local_28) {
            ppbVar7 = *(byte ***)(param_1 + 0x10);
          }
          if (pbVar3 == local_28 || ppbVar7 == ppbVar9) break;
          ppbVar7 = (byte **)(uint)*pbVar3;
          *(byte *)ppbVar9 = *pbVar3;
          pbVar3 = pbVar3 + 1;
          ppbVar9 = (byte **)((int)ppbVar9 + 1);
        }
        if (pbVar3 == local_28) {
          ppbVar11 = *(byte ***)(param_1 + 0x10);
          if (ppbVar9 != ppbVar11) {
            FUN_4a000ec8(ppbVar9,ppbVar11,1);
            *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - ((int)ppbVar11 - (int)ppbVar9);
          }
        }
        else {
          FUN_4a1664f0(ppbVar11);
        }
      }
      if (local_2c != (byte *)0x0) {
        FUN_4a14f21c();
      }
      if (local_38 != (byte *)0x0) {
        FUN_4a14f21c();
      }
      if (local_44 == (undefined1 *)0x0) {
        return (byte *)0x0;
      }
    }
    pbVar3 = (byte *)FUN_4a14f21c();
    return pbVar3;
  }
  pbVar3 = param_1 + 0xc;
  uVar5 = thunk_FUN_4a0013e0(&DAT_4a0bc800);
  local_28 = &DAT_4a0bc800 + uVar5;
  iVar4 = *(int *)pbVar3;
  if ((uint)(*(int *)(param_1 + 0x10) - iVar4) < uVar5) {
    if (*(int *)(param_1 + 0x10) != iVar4) {
      FUN_4a000eb8(iVar4,&DAT_4a0bc800);
    }
    local_2c = &DAT_4a0bc800 + (*(int *)(param_1 + 0x10) - *(int *)pbVar3);
    local_24 = (byte *)0x0;
    if (local_2c != local_28) {
      pbVar10 = local_28 + -(int)local_2c;
      local_30 = (byte *)(*(int *)(param_1 + 0x10) - *(int *)pbVar3);
      local_34 = (byte *)0x0;
      if ((pbVar10 == (byte *)0xffffffff) ||
         ((byte *)(-2 - (int)pbVar10) < (byte *)(*(int *)(param_1 + 0x10) - *(int *)pbVar3))) {
        FUN_4a0bcbf4(PTR_s_basic_string_4a1664ec);
      }
      if ((byte *)((*(int *)(param_1 + 0x14) - *(int *)pbVar3) + -1) < local_30 + (int)pbVar10) {
        ppbVar11 = &local_34;
        if (pbVar10 <= local_30) {
          ppbVar11 = &local_30;
        }
        local_34 = pbVar10;
        pbVar10 = *ppbVar11 + (int)(local_30 + 1);
        if (pbVar10 == (byte *)0x0) {
          pbVar12 = (byte *)0x0;
        }
        else {
          pbVar12 = (byte *)FUN_4a15e080(pbVar10);
          if (pbVar12 == (byte *)0x0) {
            pbVar12 = (byte *)FUN_4a1669a8();
          }
        }
        iVar4 = *(int *)pbVar3;
        iVar14 = *(int *)(param_1 + 0x10);
        local_38 = (undefined1 *)0x0;
        FUN_4a166140();
        pbVar8 = pbVar12;
        if (iVar14 != iVar4) {
          iVar14 = iVar14 - iVar4;
          iVar4 = FUN_4a000ec8(pbVar12,iVar4,iVar14);
          pbVar8 = (byte *)(iVar4 + iVar14);
        }
        pbVar2 = local_28;
        pbVar1 = local_2c;
        if (local_28 != local_2c) {
          iVar4 = FUN_4a000ec8(pbVar8);
          pbVar8 = pbVar2 + (iVar4 - (int)pbVar1);
        }
        local_38 = (undefined1 *)0x0;
        *pbVar8 = 0;
        if (*(int *)pbVar3 != 0) {
          FUN_4a14f21c();
        }
        *(byte **)pbVar3 = pbVar12;
        *(byte **)(param_1 + 0x10) = pbVar8;
        *(byte **)(param_1 + 0x14) = pbVar12 + (int)pbVar10;
      }
      else {
        pbVar12 = local_2c + 1;
        if (local_28 != pbVar12) {
          FUN_4a000ec8(*(int *)(param_1 + 0x10) + 1,pbVar12,(int)local_28 - (int)pbVar12);
        }
        pbVar10[*(int *)(param_1 + 0x10)] = 0;
        **(byte **)(param_1 + 0x10) = *local_2c;
        *(byte **)(param_1 + 0x10) = pbVar10 + *(int *)(param_1 + 0x10);
      }
    }
    return pbVar3;
  }
  if (uVar5 != 0) {
    FUN_4a000eb8(iVar4,&DAT_4a0bc800);
  }
  pbVar10 = *(byte **)pbVar3 + uVar5;
  pbVar12 = *(byte **)(param_1 + 0x10);
  if (pbVar10 != pbVar12) {
    FUN_4a000ec8(pbVar10,pbVar12,1);
    pbVar3 = (byte *)(*(int *)(param_1 + 0x10) - ((int)pbVar12 - (int)pbVar10));
    *(byte **)(param_1 + 0x10) = pbVar3;
    return pbVar3;
  }
  return *(byte **)pbVar3;
}



// Address: 4a0bcbf4

void FUN_4a0bcbf4(void)

{
  FUN_4a15f528();
  if (*PTR_DAT_4a149acc == '\0') {
    *PTR_DAT_4a149acc = 1;
  }
  thunk_FUN_4a00d458(0xff);
  return;
}



// Address: 4a0bcc04

void FUN_4a0bcc04(void)

{
  FUN_4a15f528();
  if (*PTR_DAT_4a149acc == '\0') {
    *PTR_DAT_4a149acc = 1;
  }
  thunk_FUN_4a00d458(0xff);
  return;
}



// Address: 4a0bcc30

void FUN_4a0bcc30(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0c4988();
  *puVar1 = PTR_PTR_4a0bcc48;
  return;
}



// Address: 4a0bcc84

int FUN_4a0bcc84(int param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(param_1 + 0xc);
  if (piVar3 != (int *)0x0) {
    iVar4 = piVar3[2];
    param_3 = (uint)*(byte *)(piVar3 + 5);
  }
  else {
    iVar4 = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((piVar3 == (int *)0x0) || (iVar2 = (**(code **)(*piVar3 + 8))(piVar3), iVar2 == 0)) {
    bVar1 = 0;
  }
  else {
    (**(code **)(*piVar3 + 4))(piVar3);
    bVar1 = 1;
  }
  iVar2 = 0;
  if ((bool)(bVar1 & (piVar3 != (int *)0x0 && param_3 != 0))) {
    iVar2 = iVar4;
  }
  return iVar2;
}



// Address: 4a0bcd6c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0bcd6c(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  
  bVar2 = *(int *)(param_1 + 4) != param_2;
  if (bVar2) {
    *(int *)(param_1 + 4) = param_2;
  }
  bVar3 = *(int *)(param_1 + 8) != param_3;
  if (bVar3) {
    *(int *)(param_1 + 8) = param_3;
  }
  bVar4 = *(int *)(param_1 + 0xc) != param_4;
  if (bVar4) {
    *(int *)(param_1 + 0xc) = param_4;
  }
  bVar5 = *(int *)(param_1 + 0x10) != param_5;
  if (bVar5) {
    *(int *)(param_1 + 0x10) = param_5;
  }
  if (bVar5 || (bVar4 || (bVar3 || bVar2))) {
    if (*(int *)PTR_DAT_4a0bce0c != 0 || *(int *)PTR_DAT_4a0bce10 != 0) {
      return;
    }
    iVar1 = *(int *)PTR_DAT_4a150dbc;
    if (param_2 == 0 && param_3 == 0) {
      if (param_4 + param_5 == *(int *)(iVar1 + 0x20) + *(int *)(iVar1 + 0x24)) {
        param_4 = *(int *)(iVar1 + 0x20);
        param_5 = *(int *)(iVar1 + 0x24);
      }
    }
    *(int *)(iVar1 + 0x10) = param_2;
    *(int *)(iVar1 + 0x14) = param_3;
    *(int *)(iVar1 + 0x18) = param_4;
    *(int *)(iVar1 + 0x1c) = param_5;
    return;
  }
  return;
}



// Address: 4a0bce14

void FUN_4a0bce14(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  
  bVar2 = *(int *)(param_1 + 0x4c) == param_2;
  if (!bVar2) {
    *(int *)(param_1 + 0x4c) = param_2;
  }
  bVar1 = bVar2;
  FUN_4a171da0(*(undefined4 *)(param_1 + 0x50),param_3);
  if (!bVar1) {
    *(undefined4 *)(param_1 + 0x50) = param_3;
  }
  if (!bVar1 || !bVar2) {
    FUN_4a154198(param_2,param_3);
    return;
  }
  return;
}



// Address: 4a0bceac

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0bceac(int param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  
  bVar1 = *(uint *)(param_1 + 0x3c) != param_2;
  if (bVar1) {
    *(uint *)(param_1 + 0x3c) = param_2;
  }
  bVar2 = *(uint *)(param_1 + 0x40) != param_3;
  if (bVar2) {
    *(uint *)(param_1 + 0x40) = param_3;
  }
  bVar3 = *(uint *)(param_1 + 0x44) != param_4;
  if (bVar3) {
    *(uint *)(param_1 + 0x44) = param_4;
  }
  bVar4 = *(uint *)(param_1 + 0x48) != param_5;
  if (bVar4) {
    *(uint *)(param_1 + 0x48) = param_5;
  }
  if (!bVar4 && (!bVar3 && (!bVar2 && !bVar1))) {
    return;
  }
  FUN_4a1549b8(param_2 & 0xff,param_3 & 0xff,param_4 & 0xff,param_5 & 0xff);
  return;
}



// Address: 4a0bd004

void FUN_4a0bd004(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  FUN_4a150ac4(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}



// Address: 4a0bd050

void FUN_4a0bd050(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_4a14fd70(param_2,param_3);
  *(undefined4 *)(param_1 + *(int *)(param_1 + 0x14) * 4 + 0x68) = param_3;
  return;
}



// Address: 4a0bd108

void FUN_4a0bd108(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 in_ZR;
  bool bVar1;
  
  FUN_4a171da0(*(undefined4 *)(param_1 + 0x60));
  if (!(bool)in_ZR) {
    *(undefined4 *)(param_1 + 0x60) = param_2;
  }
  bVar1 = (bool)in_ZR;
  FUN_4a171da0(*(undefined4 *)(param_1 + 100),param_3);
  if (!bVar1) {
    *(undefined4 *)(param_1 + 100) = param_3;
  }
  if (!bVar1 || !(bool)in_ZR) {
    FUN_4a156cbc(param_2,param_3);
    return;
  }
  return;
}



// Address: 4a0bd160

void FUN_4a0bd160(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  thunk_FUN_4a150bc0(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}



// Address: 4a0bd388

void FUN_4a0bd388(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  FUN_4a14ff14(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}



// Address: 4a0bd3cc

undefined8
FUN_4a0bd3cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)PTR_FUN_4a15020c_1_4a0bd404)(param_2,param_3,param_4,param_5);
  return CONCAT44(param_6,(uint)uVar1 & (uint)((ulonglong)uVar1 >> 0x20));
}



// Address: 4a0bd41c

void FUN_4a0bd41c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  FUN_4a14ff94(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}



// Address: 4a0bd4a4

void FUN_4a0bd4a4(int *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if (param_2 == 0xbc0) {
    cVar1 = *(char *)((int)param_1 + 0x2d);
    piVar3 = (int *)((int)param_1 + 0x2d);
joined_r0x4a0bd568:
    if (cVar1 != '\x01') goto LAB_4a0bd56c;
LAB_4a0bd578:
    bVar2 = false;
  }
  else {
    if (param_2 < 0xbc1) {
      if (param_2 == 0xb44) {
        cVar1 = *(char *)((int)param_1 + 0x2b);
        piVar3 = (int *)((int)param_1 + 0x2b);
      }
      else {
        if (param_2 == 0xb60) {
          cVar1 = *(char *)((int)param_1 + 0x29);
          piVar3 = (int *)((int)param_1 + 0x29);
          goto joined_r0x4a0bd518;
        }
        if (param_2 != 0xb71) goto LAB_4a0bd58c;
        cVar1 = *(char *)((int)param_1 + 0x2a);
        piVar3 = (int *)((int)param_1 + 0x2a);
      }
      goto joined_r0x4a0bd568;
    }
    if (param_2 == 0xbe2) {
      cVar1 = (char)param_1[10];
      piVar3 = param_1 + 10;
    }
    else {
      if (param_2 != 0x8037) goto LAB_4a0bd58c;
      cVar1 = (char)param_1[0xb];
      piVar3 = param_1 + 0xb;
    }
joined_r0x4a0bd518:
    if (cVar1 == '\x01') goto LAB_4a0bd578;
LAB_4a0bd56c:
    *(undefined1 *)piVar3 = 1;
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
LAB_4a0bd58c:
  thunk_FUN_4a150140(param_2);
  if (param_2 != 0xbc0) {
    return;
  }
  if (*(int *)PTR_DAT_4a0bd62c != 0) {
    FUN_4a14fd70(0xde1,*(undefined4 *)PTR_DAT_4a0bd630);
    uStack_14 = 0;
    uStack_10 = 0;
    host_glDrawElements_arm(4,3,0x1403,&uStack_14);
    (**(code **)(*param_1 + 0x10))(param_1,0xde1,param_1[param_1[5] + 0x1a]);
    return;
  }
  return;
}



// Address: 4a0bd708

undefined4 * FUN_4a0bd708(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  puVar1 = (undefined4 *)FUN_4a0c6a98();
  *puVar1 = PTR_PTR_4a0bd8a8;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  *(undefined1 *)((int)puVar1 + 0x1d) = 0;
  *(undefined1 *)((int)puVar1 + 0x1e) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined1 *)(puVar1 + 10) = 0;
  *(undefined1 *)((int)puVar1 + 0x29) = 0;
  *(undefined1 *)((int)puVar1 + 0x2a) = 0;
  *(undefined1 *)((int)puVar1 + 0x2b) = 0;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  *(undefined1 *)((int)puVar1 + 0x2d) = 0;
  puVar1[0xc] = 1;
  puVar1[0xd] = 0;
  puVar1[0xe] = 1;
  puVar1[0xf] = 1;
  puVar1[0x10] = 1;
  puVar1[0x11] = 1;
  puVar1[0x12] = 1;
  puVar1[0x13] = 0x207;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0x1d01;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  FUN_4a150348(0xba2,&local_1c);
  puVar1[1] = local_1c;
  puVar1[2] = local_18;
  puVar1[3] = local_14;
  puVar1[4] = local_10;
  iVar2 = FUN_4a150410(0x8075);
  *(bool *)(puVar1 + 7) = iVar2 == 1;
  iVar2 = FUN_4a150410(0x8076);
  *(bool *)((int)puVar1 + 0x1d) = iVar2 == 1;
  iVar2 = FUN_4a150410(0x8074);
  *(bool *)((int)puVar1 + 0x1e) = iVar2 == 1;
  puVar3 = puVar1 + 0x19;
  iVar2 = 4;
  do {
    puVar3[1] = 0;
    iVar2 = iVar2 + -1;
    puVar3 = puVar3 + 2;
    *puVar3 = 0;
  } while (iVar2 != 0);
  FUN_4a150348(0xba0,puVar1 + 8);
  iVar2 = FUN_4a150410(0xbe2);
  *(bool *)(puVar1 + 10) = iVar2 != 0;
  iVar2 = FUN_4a150410(0xb60);
  *(bool *)((int)puVar1 + 0x29) = iVar2 != 0;
  FUN_4a150348(0xbc1,puVar1 + 0x13);
  thunk_FUN_4a15032c(0xbc2,puVar1 + 0x14);
  return puVar1;
}



// Address: 4a0bd8f4

void FUN_4a0bd8f4(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  
  bVar2 = *(int *)(param_1 + 0x1c) != param_2;
  if (bVar2) {
    *(int *)(param_1 + 0x1c) = param_2;
  }
  bVar3 = *(int *)(param_1 + 0x20) != param_3;
  if (bVar3) {
    *(int *)(param_1 + 0x20) = param_3;
  }
  bVar4 = *(int *)(param_1 + 0x24) != param_4;
  if (bVar4) {
    *(int *)(param_1 + 0x24) = param_4;
  }
  bVar5 = *(int *)(param_1 + 0x28) != param_5;
  if (bVar5) {
    *(int *)(param_1 + 0x28) = param_5;
  }
  if (bVar5 || (bVar4 || (bVar3 || bVar2))) {
    iVar1 = *(int *)PTR_DAT_4a150dbc;
    if (param_2 == 0 && param_3 == 0) {
      if (param_4 + param_5 == *(int *)(iVar1 + 0x20) + *(int *)(iVar1 + 0x24)) {
        param_4 = *(int *)(iVar1 + 0x20);
        param_5 = *(int *)(iVar1 + 0x24);
      }
    }
    *(int *)(iVar1 + 0x10) = param_2;
    *(int *)(iVar1 + 0x14) = param_3;
    *(int *)(iVar1 + 0x18) = param_4;
    *(int *)(iVar1 + 0x1c) = param_5;
    return;
  }
  return;
}



// Address: 4a0bd9b8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0bd9b8(int param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  
  bVar1 = *(uint *)(param_1 + 0x44) != param_2;
  if (bVar1) {
    *(uint *)(param_1 + 0x44) = param_2;
  }
  bVar2 = *(uint *)(param_1 + 0x48) != param_3;
  if (bVar2) {
    *(uint *)(param_1 + 0x48) = param_3;
  }
  bVar3 = *(uint *)(param_1 + 0x4c) != param_4;
  if (bVar3) {
    *(uint *)(param_1 + 0x4c) = param_4;
  }
  bVar4 = *(uint *)(param_1 + 0x50) != param_5;
  if (bVar4) {
    *(uint *)(param_1 + 0x50) = param_5;
  }
  if (!bVar4 && (!bVar3 && (!bVar2 && !bVar1))) {
    return;
  }
  FUN_4a1549b8(param_2 & 0xff,param_3 & 0xff,param_4 & 0xff,param_5 & 0xff);
  return;
}



// Address: 4a0bdad0

void FUN_4a0bdad0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  thunk_FUN_4a150ccc(param_2,param_3,param_4,param_5,param_6);
  return;
}



// Address: 4a0bdb28

void FUN_4a0bdb28(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  FUN_4a150ac4(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}



// Address: 4a0bdc3c

void FUN_4a0bdc3c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 in_ZR;
  bool bVar1;
  
  FUN_4a171da0(*(undefined4 *)(param_1 + 0x7c));
  if (!(bool)in_ZR) {
    *(undefined4 *)(param_1 + 0x7c) = param_2;
  }
  bVar1 = (bool)in_ZR;
  FUN_4a171da0(*(undefined4 *)(param_1 + 0x80),param_3);
  if (!bVar1) {
    *(undefined4 *)(param_1 + 0x80) = param_3;
  }
  if (!bVar1 || !(bool)in_ZR) {
    FUN_4a156cbc(param_2,param_3);
    return;
  }
  return;
}



// Address: 4a0bdc94

void FUN_4a0bdc94(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  thunk_FUN_4a150bc0(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}



// Address: 4a0bdd8c

void FUN_4a0bdd8c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  FUN_4a14ff14(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}



// Address: 4a0bddd0

void FUN_4a0bddd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  thunk_FUN_4a1501f8(param_2,param_3,param_4,param_5,param_6);
  return;
}



// Address: 4a0bde04

void FUN_4a0bde04(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  FUN_4a14ff94(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}



// Address: 4a0bdff0

undefined4 * FUN_4a0bdff0(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  puVar1 = (undefined4 *)FUN_4a0c6ad0();
  *puVar1 = PTR_PTR_4a0be0f0;
  *(undefined1 *)(puVar1 + 5) = 0;
  *(undefined1 *)((int)puVar1 + 0x15) = 0;
  *(undefined1 *)((int)puVar1 + 0x16) = 0;
  *(undefined1 *)((int)puVar1 + 0x17) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0xffffffff;
  puVar1[0xe] = 1;
  puVar1[0xf] = 0;
  puVar1[0x10] = 1;
  puVar1[0x11] = 1;
  puVar1[0x12] = 1;
  puVar1[0x13] = 1;
  puVar1[0x14] = 1;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  FUN_4a150348(0xba2,&local_1c);
  puVar2 = (undefined1 *)((int)puVar1 + 3);
  puVar1[7] = local_1c;
  puVar1[8] = local_18;
  puVar1[9] = local_14;
  puVar1[10] = local_10;
  iVar4 = 8;
  do {
    puVar2[1] = 0;
    iVar4 = iVar4 + -1;
    puVar2 = puVar2 + 2;
    *puVar2 = 0;
  } while (iVar4 != 0);
  FUN_4a150348(0x8ca6,puVar1 + 0xc);
  puVar3 = puVar1 + 0x14;
  iVar4 = 4;
  do {
    puVar3[1] = 0;
    iVar4 = iVar4 + -1;
    puVar3 = puVar3 + 2;
    *puVar3 = 0;
  } while (iVar4 != 0);
  return puVar1;
}



// Address: 4a0be134

void FUN_4a0be134(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  piVar2 = *(int **)(param_1 + 4);
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  *(int **)(param_1 + 4) = param_2;
  return;
}



// Address: 4a0be1cc

void FUN_4a0be1cc(int *param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_PTR_4a0be228;
  if (param_2 == (int *)0x0) {
    *param_1 = *(int *)PTR_PTR_4a0be228;
    iVar2 = FUN_4a0c6bc0(param_1 + 5);
    param_1 = (int *)(iVar2 + -0x14);
    param_2 = (int *)puVar1;
  }
  iVar2 = *param_2;
  *param_1 = iVar2;
  *(int *)((int)param_1 + *(int *)(iVar2 + -0xc)) = param_2[1];
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}



// Address: 4a0be2a8

int FUN_4a0be2a8(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = PTR_PTR_4a0be318;
  iVar2 = *(int *)PTR_PTR_4a0be318;
  *param_1 = iVar2;
  *(undefined4 *)((int)param_1 + *(int *)(iVar2 + -0xc)) = *(undefined4 *)(puVar1 + 4);
  piVar3 = (int *)param_1[1];
  if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 8))(piVar3), iVar2 != 0)) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  iVar2 = FUN_4a0c6bf4(param_1 + 5);
  return iVar2 + -0x14;
}



// Address: 4a0be31c

int * FUN_4a0be31c(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  *(int *)((int)param_1 + *(int *)(iVar1 + -0xc)) = param_2[1];
  piVar2 = (int *)param_1[1];
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  return param_1;
}



// Address: 4a0be380

void FUN_4a0be380(int param_1)

{
  *(undefined1 *)(param_1 + 0x34) = 1;
  return;
}



// Address: 4a0be38c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0be38c(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar16;
  int iStack_44;
  
  bVar16 = *(char *)(param_1 + 0x10) != '\0';
  iVar5 = 0;
  if (bVar16) {
    iVar5 = *(int *)(param_1 + 0x1c);
  }
  if (!bVar16 || iVar5 == 0) {
    return;
  }
  iVar5 = FUN_4a13daf8(param_2);
  if (iVar5 != *(int *)(param_1 + 0x2c)) {
                    /* WARNING: Could not recover jumptable at 0x4a0be3d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  iVar5 = FUN_4a13db00(param_2);
  if (iVar5 != *(int *)(param_1 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x4a0be3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  iVar6 = (**(code **)(*param_2 + 0x2c))(param_2);
  iVar7 = FUN_4a13daf8(param_1);
  iVar8 = FUN_4a13db00(param_1);
  iVar5 = DAT_4a0be5a4;
  iStack_44 = 0;
  if (iVar8 < 1) {
                    /* WARNING: Could not recover jumptable at 0x4a0be450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  do {
    iVar15 = iStack_44 * iVar7 * 4 + *(int *)(param_1 + 0x1c);
    iVar14 = iStack_44 * iVar7 * 4 + iVar6;
    iVar11 = 0;
    if (0 < iVar7) {
      do {
        iVar13 = iVar14 + iVar11 * 4;
        bVar1 = *(byte *)(iVar13 + 2);
        uVar9 = (uint)*(byte *)(iVar13 + 3);
        bVar2 = *(byte *)(iVar14 + iVar11 * 4);
        bVar3 = *(byte *)(iVar13 + 1);
        if (uVar9 != 0) {
          if (uVar9 == 0xff) {
            pbVar10 = (byte *)(iVar15 + iVar11 * 4);
            *pbVar10 = bVar2;
            pbVar10[1] = *(byte *)(iVar13 + 1);
            pbVar10[2] = *(byte *)(iVar13 + 2);
            pbVar10[3] = *(byte *)(iVar13 + 3);
          }
          else {
            pbVar10 = (byte *)(iVar15 + iVar11 * 4);
            iVar13 = 0xff - uVar9;
            uVar12 = uVar9 * bVar2 + iVar13 * (uint)*pbVar10;
            lVar4 = (longlong)(int)uVar12 * (longlong)iVar5 + ((ulonglong)uVar12 << 0x20);
            *pbVar10 = (char)(int)(lVar4 >> 0x27) - (char)(lVar4 >> 0x3f);
            uVar12 = uVar9 * bVar3 + iVar13 * (uint)pbVar10[1];
            lVar4 = (longlong)(int)uVar12 * (longlong)iVar5 + ((ulonglong)uVar12 << 0x20);
            pbVar10[1] = (char)(int)(lVar4 >> 0x27) - (char)(lVar4 >> 0x3f);
            uVar12 = uVar9 * bVar1 + iVar13 * (uint)pbVar10[2];
            lVar4 = (longlong)(int)uVar12 * (longlong)iVar5 + ((ulonglong)uVar12 << 0x20);
            pbVar10[2] = (char)(int)(lVar4 >> 0x27) - (char)(lVar4 >> 0x3f);
            uVar9 = uVar9 * uVar9 + (uint)pbVar10[3] * iVar13;
            lVar4 = (longlong)(int)uVar9 * (longlong)iVar5 + ((ulonglong)uVar9 << 0x20);
            pbVar10[3] = (char)(int)(lVar4 >> 0x27) - (char)(lVar4 >> 0x3f);
          }
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar7);
    }
    iStack_44 = iStack_44 + 1;
  } while (iStack_44 < iVar8);
  return;
}



// Address: 4a0be5a8

void FUN_4a0be5a8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r4;
  bool bVar3;
  
  bVar3 = *(char *)(param_1 + 0x10) != '\0';
  iVar1 = 0;
  if (bVar3) {
    iVar1 = *(int *)(param_1 + 0x1c);
  }
  if ((!bVar3 || iVar1 == 0) || param_2 == 0) {
    param_1 = unaff_r4;
  }
  if ((bVar3 && iVar1 != 0) && param_2 != 0) {
    FUN_4a000f84();
    uVar2 = FUN_4a13daf8(param_1);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    uVar2 = FUN_4a13db00(param_1);
    *(undefined4 *)(param_1 + 0x30) = uVar2;
    return;
  }
  return;
}



// Address: 4a0be5f0

undefined1 FUN_4a0be5f0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x34);
}



// Address: 4a0be7b0

void FUN_4a0be7b0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = PTR_PTR_4a0be82c;
  *(undefined1 *)(param_1 + 0xd) = 1;
  if (param_1[7] != 0) {
    thunk_FUN_4a161530();
    param_1[7] = 0;
  }
  if (param_1[8] != 0) {
    FUN_4a0bf06c();
    piVar1 = (int *)FUN_4a0bf07c();
    iVar2 = (**(code **)(*piVar1 + 0xa8))();
    if (iVar2 == 2) {
      FUN_4a0b3270();
    }
    else {
      FUN_4a0b2074(param_1[8]);
    }
    param_1[8] = 0;
  }
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a0be83c

int FUN_4a0be83c(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_3) {
    do {
      iVar1 = (**(code **)(*param_1 + 0x2c))(param_1);
      if (iVar1 == -1) {
        if (iVar2 != 0) {
          return iVar2;
        }
        return -1;
      }
      *(char *)(param_2 + iVar2) = (char)iVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  return iVar2;
}



// Address: 4a0be8a0

void FUN_4a0be8a0(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_2 + 0xc) + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x4a0be8bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1,uVar1,*(undefined4 *)(param_2 + 8));
  return;
}



// Address: 4a0be8d0

int FUN_4a0be8d0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar2 = (**(code **)(*param_1 + 0x2c))(param_1);
      bVar4 = SCARRY4(iVar2,1);
      iVar1 = iVar2 + 1;
      if (iVar2 != -1) {
        iVar3 = iVar3 + 1;
        bVar4 = SBORROW4(iVar3,param_2);
        iVar1 = iVar3 - param_2;
      }
    } while (iVar1 < 0 != bVar4);
  }
  return iVar3;
}



// Address: 4a0be914

void FUN_4a0be914(void)

{
  return;
}



// Address: 4a0be91c

void FUN_4a0be91c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0be934;
  return;
}



// Address: 4a0be95c

void FUN_4a0be95c(undefined4 *param_1)

{
  *param_1 = PTR_PTR_4a0be968;
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a0be9c0

void FUN_4a0be9c0(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  *(int *)((int)param_1 + *(int *)(iVar1 + -0xc)) = param_2[1];
  return;
}



// Address: 4a0be9f8

void FUN_4a0be9f8(void)

{
  return;
}



// Address: 4a0bea28

void FUN_4a0bea28(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 != 0) {
    do {
      (**(code **)(*param_1 + 0x1c))(param_1,*(undefined1 *)(param_2 + iVar1));
      iVar1 = iVar1 + 1;
    } while (iVar1 != param_3);
    return;
  }
  return;
}



// Address: 4a0bea88

void FUN_4a0bea88(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  param_4 = param_3 + param_4;
  if (param_3 == param_4) {
    return;
  }
  do {
    if (*(int *)(param_2 + 0xc) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_2 + 0xc) + 8);
    }
    (**(code **)(*param_1 + 0x1c))(param_1,*(undefined1 *)(iVar1 + param_3));
    param_3 = param_3 + 1;
  } while (param_3 != param_4);
  return;
}



// Address: 4a0beaec

void FUN_4a0beaec(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0beb04;
  return;
}



// Address: 4a0beb2c

void FUN_4a0beb2c(undefined4 *param_1)

{
  *param_1 = PTR_PTR_4a0beb38;
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a0beb58

int FUN_4a0beb58(int param_1,undefined4 param_2)

{
  FUN_4a04764c(param_1 + 8,param_2,0);
  return param_1;
}



// Address: 4a0beb78

int FUN_4a0beb78(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))();
  }
  FUN_4a0331ec(param_1 + 8,param_2[2]);
  if ((param_2 != (int *)0x0) && (iVar1 = (**(code **)(*param_2 + 8))(param_2), iVar1 != 0)) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return param_1;
}



// Address: 4a0bebec

int FUN_4a0bebec(int param_1,int *param_2)

{
  FUN_4a0331ec(param_1 + 8,*(undefined4 *)(*param_2 + 8));
  return param_1;
}



// Address: 4a0bec10

int FUN_4a0bec10(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_4a056efc(&DAT_4a0bec44);
  FUN_4a041b9c(param_1 + 8,0,uVar1,param_2);
  return param_1;
}



// Address: 4a0bec48

int FUN_4a0bec48(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_4a056efc(&DAT_4a0bec7c);
  FUN_4a041b9c(param_1 + 8,0,uVar1,param_2);
  return param_1;
}



// Address: 4a0bec80

int FUN_4a0bec80(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_4a056efc(&DAT_4a0becb4);
  FUN_4a041b9c(param_1 + 8,0,uVar1,param_2);
  return param_1;
}



// Address: 4a0becb8

void FUN_4a0becb8(int param_1,int param_2)

{
  int iVar1;
  int aiStack_14 [2];
  
  iVar1 = FUN_4a03b640(*(undefined4 *)(param_1 + 8));
  if (iVar1 <= param_2) {
    return;
  }
  FUN_4a01d598(aiStack_14,param_2,iVar1 - param_2);
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 8);
    if (iVar1 != 0) {
      *(undefined2 *)(iVar1 + aiStack_14[0] * 2) = 0;
    }
    return;
  }
  return;
}



// Address: 4a0bed04

undefined4 * FUN_4a0bed04(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0bed98;
  puVar1[2] = 0;
  uVar2 = FUN_4a04767c(0);
  puVar1[2] = uVar2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))();
  }
  FUN_4a0331ec(puVar1 + 2,param_2[2]);
  if ((param_2 != (int *)0x0) && (iVar3 = (**(code **)(*param_2 + 8))(param_2), iVar3 != 0)) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return puVar1;
}



// Address: 4a0bed9c

undefined4 * FUN_4a0bed9c(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0bedd0;
  puVar1[2] = 0;
  uVar2 = FUN_4a04767c(0);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a0bedd4

undefined4 * FUN_4a0bedd4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0bee08;
  puVar1[2] = 0;
  uVar2 = FUN_4a04767c(0);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a0bee50

void FUN_4a0bee50(undefined4 *param_1)

{
  *param_1 = PTR_PTR_4a0bee88;
  if (param_1[2] != 0) {
    FUN_4a05a26c();
  }
  param_1[2] = 0;
  FUN_4a0c6bf4(param_1);
  return;
}



// Address: 4a0bee94

undefined8 FUN_4a0bee94(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  
  puVar7 = PTR_DAT_4a0bf04c;
  puVar6 = PTR_DAT_4a0bf048;
  puVar5 = PTR_DAT_4a0bf044;
  puVar4 = PTR_DAT_4a0bf040;
  puVar3 = PTR_DAT_4a0bf03c;
  puVar2 = PTR_DAT_4a0bf038;
  puVar1 = PTR_DAT_4a0bf034;
  iVar9 = 0;
  if (*(int *)PTR_DAT_4a0bf030 != 0) {
    iVar9 = *(int *)PTR_DAT_4a0bf050;
  }
  if (*(int *)PTR_DAT_4a0bf030 == 0 || iVar9 == 0) {
    thunk_FUN_4a1500f8(0xc11);
    uVar10 = FUN_4a13e6f4(param_1);
    *(undefined4 *)puVar1 = uVar10;
    uVar10 = FUN_4a13e6ec(param_1);
    *(undefined4 *)puVar2 = uVar10;
    uVar12 = *(undefined4 *)puVar1;
    *(undefined4 *)puVar3 = uVar12;
    *(undefined4 *)puVar4 = uVar10;
    *(undefined4 *)puVar5 = uVar12;
    FUN_4a150d7c(0,0,uVar12,uVar10);
    *(undefined4 *)PTR_DAT_4a0bf060 = 0;
    *(undefined4 *)PTR_DAT_4a0bf064 = 0;
    *(undefined4 *)PTR_DAT_4a0bf068 = 0;
    (**(code **)(*param_1 + 0x24))(param_1);
    uVar12 = *(undefined4 *)puVar6;
    uVar10 = *(undefined4 *)puVar7;
  }
  else {
    iVar9 = FUN_4a13e6f4(param_1);
    *(int *)puVar1 = iVar9 / 2;
    iVar9 = FUN_4a13e6ec(param_1);
    puVar8 = PTR_DAT_4a0bf054;
    *(int *)puVar2 = iVar9;
    iVar11 = *(int *)puVar1;
    *(int *)puVar3 = *(int *)puVar8 + iVar11;
    puVar1 = PTR_DAT_4a0bf05c;
    *(int *)puVar4 = *(int *)PTR_DAT_4a0bf058 + iVar9;
    *(int *)puVar5 = iVar11;
    *(int *)puVar1 = iVar9;
    thunk_FUN_4a1500f8(0xc11);
    FUN_4a150d7c(0,0,*(int *)puVar5 << 1,*(undefined4 *)puVar1);
    thunk_FUN_4a14fe50(0,0,0);
    thunk_FUN_4a14fe28(0x4100);
    FUN_4a033084(1);
    (**(code **)(*param_1 + 0x24))(param_1);
    FUN_4a033084(4);
    (**(code **)(*param_1 + 0x24))(param_1);
    uVar12 = *(undefined4 *)puVar6;
    uVar10 = *(undefined4 *)puVar7;
  }
  return CONCAT44(uVar12,uVar10);
}



// Address: 4a0bf06c

undefined4 FUN_4a0bf06c(void)

{
  return *(undefined4 *)PTR_DAT_4a0bf078;
}



// Address: 4a0bf07c

undefined4 FUN_4a0bf07c(void)

{
  return *(undefined4 *)(PTR_DAT_4a0bf088 + 4);
}



// Address: 4a0bf08c

void FUN_4a0bf08c(int param_1)

{
  FUN_4a0c7754();
  *(undefined1 *)(param_1 + 0x24) = 0;
  return;
}



// Address: 4a0bf0e8

void FUN_4a0bf0e8(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = PTR_PTR_4a0bf110;
  FUN_4a0c76a8(param_1,0);
  *param_1 = PTR_PTR_4a0c7960;
  piVar1 = (int *)param_1[2];
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)((int)piVar1 + *(int *)(*piVar1 + -0xc));
  }
  if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 8))(piVar1), iVar2 != 0)) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  piVar1 = (int *)param_1[3];
  if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 8))(piVar1), iVar2 != 0)) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a0bf13c

void FUN_4a0bf13c(int *param_1)

{
  int *piVar1;
  
  (**(code **)(*param_1 + 0x4c))(param_1);
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4a13dd24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 8))(piVar1,param_1,*(undefined4 *)PTR_PTR_4a0bf170,0);
    return;
  }
  return;
}



// Address: 4a0bf174

void FUN_4a0bf174(int param_1)

{
  int *piVar1;
  
  host_s3eFreeBase_arm(*(undefined4 *)(param_1 + 0x2c));
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4a13dd24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 8))(piVar1,param_1,*(undefined4 *)PTR_PTR_4a0bf1a8,0);
    return;
  }
  return;
}



// Address: 4a0bf1ac

void FUN_4a0bf1ac(int *param_1)

{
  int *piVar1;
  
  (**(code **)(*param_1 + 0x48))(param_1);
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4a13dd24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 8))(piVar1,param_1,*(undefined4 *)PTR_PTR_4a0bf1e0,0);
    return;
  }
  return;
}



// Address: 4a0bf1ec

void FUN_4a0bf1ec(int *param_1)

{
  if (param_1[1] == 100) {
    (**(code **)(*param_1 + 0x44))(param_1);
    param_1[1] = 200;
    return;
  }
  return;
}



// Address: 4a0bf228

void FUN_4a0bf228(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  int iStack_1c;
  int iStack_18;
  
  FUN_4a0c6ed8();
  if (param_1[1] == 400) {
    return;
  }
  if (param_1[1] == 200) {
    iVar3 = param_1[3];
    iVar4 = param_1[4];
    iStack_1c = thunk_FUN_4a0013e0(s_audio_wav_4a0bf320);
    iStack_18 = iVar4 - iVar3;
    if (iStack_1c < iStack_18) {
      piVar1 = &iStack_1c;
    }
    else {
      piVar1 = &iStack_18;
    }
    uVar6 = thunk_FUN_4a000e60(iVar3,s_audio_wav_4a0bf320,*piVar1);
    bVar5 = (int)uVar6 == 0;
    if (bVar5) {
      uVar6 = CONCAT44(iStack_1c,iStack_18);
    }
    if (bVar5 && (int)uVar6 == (int)((ulonglong)uVar6 >> 0x20)) {
      uVar2 = host_s3eFileOpen_arm(param_1[7],&DAT_4a0bf32c);
      iVar3 = host_s3eFileGetSize_arm();
      param_1[10] = iVar3;
      iVar3 = host_s3eMallocBase_arm();
      param_1[0xb] = iVar3;
      host_s3eFileRead_arm(iVar3,param_1[10],1,uVar2);
      host_s3eFileClose_arm(uVar2);
      (**(code **)(*param_1 + 0x50))(param_1);
    }
    param_1[1] = 300;
    return;
  }
  return;
}



// Address: 4a0bf330

int * FUN_4a0bf330(undefined4 param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (int *)FUN_4a0c6ef0(param_1,param_2 + 1);
  iVar3 = *param_2;
  *piVar1 = iVar3;
  *(int *)((int)piVar1 + *(int *)(iVar3 + -0xc)) = param_2[5];
  piVar1[7] = 0;
  piVar1[8] = 0;
  piVar1[9] = 0;
  iVar3 = param_3[1];
  iVar4 = *param_3;
  iVar5 = (iVar3 - iVar4) + 1;
  if (iVar5 == 0) {
    FUN_4a0bcbf4(s_basic_string_4a0bf434);
  }
  else {
    iVar2 = FUN_4a15e080(iVar5);
    if (iVar2 == 0) {
      iVar2 = FUN_4a1669a8();
    }
    piVar1[7] = iVar2;
    piVar1[8] = iVar2;
    piVar1[9] = iVar2 + iVar5;
  }
  iVar5 = piVar1[7];
  FUN_4a166140();
  if (iVar3 != iVar4) {
    iVar5 = FUN_4a000ec8(iVar5,iVar4,iVar3 - iVar4);
    iVar5 = iVar5 + (iVar3 - iVar4);
  }
  piVar1[8] = iVar5;
  *(undefined1 *)piVar1[8] = 0;
  piVar1[10] = 0;
  piVar1[0xb] = 0;
  *(undefined1 *)(piVar1 + 0xc) = 0;
  return piVar1;
}



// Address: 4a0bf464

undefined8 FUN_4a0bf464(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  *(int *)((int)param_1 + *(int *)(iVar1 + -0xc)) = param_2[5];
  host_s3eFreeBase_arm(param_1[0xb]);
  param_1[0xb] = 0;
  param_1[10] = 0;
  if (param_1[7] != 0) {
    FUN_4a14f21c();
  }
  iVar1 = param_2[1];
  *param_1 = iVar1;
  *(int *)((int)param_1 + *(int *)(iVar1 + -0xc)) = param_2[4];
  if (param_1[3] != 0) {
    FUN_4a14f21c();
  }
  return CONCAT44(param_2 + 2,param_1);
}



// Address: 4a0bf4b4

undefined4 * FUN_4a0bf4b4(void)

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
  uVar2 = FUN_4a04d4d0(0,s_device_4a0bf4cc,0,in_r3,unaff_r4);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a0bf4d4

void FUN_4a0bf4d4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_4a0c858c();
    iVar2 = FUN_4a057044();
    FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
    return;
  }
  return;
}



// Address: 4a0bf4f0

void FUN_4a0bf4f0(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  *(int *)((int)param_1 + *(int *)(iVar1 + -0xc)) = param_2[1];
  return;
}



// Address: 4a0bf528

void FUN_4a0bf528(void)

{
  return;
}



// Address: 4a0bf53c

bool FUN_4a0bf53c(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x2c))(param_1);
  if (iVar1 == -1) {
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return (char)iVar1 != '\0';
}



// Address: 4a0bf578

uint FUN_4a0bf578(int *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x2c))(param_1);
  if (uVar1 == 0xffffffff) {
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return uVar1 & 0xff;
}



// Address: 4a0bf5dc

void FUN_4a0bf5dc(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x4a0bf5e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 8) + 0x40))();
  return;
}



// Address: 4a0bf60c

void FUN_4a0bf60c(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x4a0bf618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 8) + 0x20))();
  return;
}



// Address: 4a0bf62c

undefined4 FUN_4a0bf62c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  
  puVar2 = &local_18;
  local_18 = param_4;
  do {
    if (&stack0xffffffec <= puVar2) {
LAB_4a0bf680:
      return CONCAT13((undefined1)local_18,
                      CONCAT12(local_18._1_1_,CONCAT11(local_18._2_1_,local_18._3_1_)));
    }
    iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x30))
                      (*(int **)(param_1 + 8),puVar2,(int)&stack0xffffffec - (int)puVar2);
    if (iVar1 < 1) {
      *(undefined1 *)(param_1 + 0xc) = 1;
      goto LAB_4a0bf680;
    }
    puVar2 = (undefined4 *)((int)puVar2 + iVar1);
  } while( true );
}



// Address: 4a0bf6a4

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_4a0bf6a4(int param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  undefined1 local_3c [4];
  undefined *local_38 [2];
  int local_30;
  int *local_2c;
  
  for (puVar11 = (undefined4 *)local_3c; puVar11 < (undefined4 *)((int)local_3c + 2);
      puVar11 = (undefined4 *)((int)puVar11 + iVar5)) {
    iVar5 = (**(code **)(**(int **)(param_1 + 8) + 0x30))
                      (*(int **)(param_1 + 8),puVar11,((int)local_3c + 2) - (int)puVar11);
    if (iVar5 < 1) {
      *(undefined1 *)(param_1 + 0xc) = 1;
      break;
    }
  }
  uVar6 = (uint)CONCAT11(local_3c[0],local_3c[1]);
  if (uVar6 == 0) {
    thunk_FUN_4a161570(0x14);
    uVar7 = FUN_4a0c7284();
    return uVar7;
  }
  piVar8 = (int *)FUN_4a0c6bc0(local_38);
  puVar2 = PTR_PTR_4a0bf910;
  piVar8[2] = 0;
  piVar8[3] = 0;
  *piVar8 = (int)puVar2;
  if (uVar6 != 0) {
    iVar5 = FUN_4a15e080(uVar6);
    if (iVar5 == 0) {
      iVar5 = FUN_4a1669a8();
    }
    iVar10 = 0;
    do {
      local_3c = (undefined1  [4])0x0;
      *(undefined1 *)(iVar5 + iVar10) = 0;
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar6);
    thunk_FUN_4a161570(0x18);
    puVar11 = (undefined4 *)FUN_4a0c0628();
    puVar3 = PTR_PTR_4a0bf914;
    *puVar11 = PTR_PTR_4a0bf914;
    puVar11[4] = uVar6;
    puVar11[2] = iVar5;
    puVar11[3] = 1;
    *(undefined1 *)(puVar11 + 5) = 1;
    if (puVar11 != (undefined4 *)0x0) {
      (**(code **)(puVar3 + 0xc))(puVar11);
    }
    (**(code **)(*piVar8 + 0x1c))(piVar8);
    piVar8[2] = uVar6;
    piVar8[3] = (int)puVar11;
  }
  if (0 < local_30) {
    if (local_2c == (int *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = local_2c[2];
    }
    uVar12 = uVar6 + local_30;
    for (; uVar6 < uVar12; uVar6 = uVar6 + iVar5) {
      iVar5 = (**(code **)(**(int **)(param_1 + 8) + 0x30))
                        (*(int **)(param_1 + 8),uVar6,uVar12 - uVar6);
      if (iVar5 < 1) {
        *(undefined1 *)(param_1 + 0xc) = 1;
        break;
      }
    }
  }
  uVar7 = thunk_FUN_4a161570(0x14);
  uVar7 = FUN_4a0c71e8(uVar7,local_38,s_UTF_8_4a0bf918);
  piVar8 = local_2c;
  iVar5 = local_30;
  local_38[0] = puVar2;
  bVar13 = local_2c != (int *)0x0;
  if (bVar13) {
    iVar10 = local_2c[2];
    cVar1 = (char)local_2c[5];
  }
  else {
    iVar10 = 0;
    cVar1 = '\0';
  }
  bVar14 = local_2c == (int *)0x0;
  local_2c = (int *)0x0;
  local_30 = 0;
  if ((bVar14) || (iVar9 = (**(code **)(*piVar8 + 8))(piVar8), iVar9 == 0)) {
    bVar4 = 0;
  }
  else {
    (**(code **)(*piVar8 + 4))(piVar8);
    bVar4 = 1;
  }
  if (!(bool)(bVar4 & (bVar13 && cVar1 != '\0'))) {
    iVar10 = 0;
  }
  if (iVar10 != 0) {
    iVar9 = 0;
    if (0 < iVar5) {
      do {
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar5);
      if (iVar10 == 0) goto LAB_4a0bf8f8;
    }
    FUN_4a14f21c();
  }
LAB_4a0bf8f8:
  FUN_4a0c6bf4(local_38);
  return uVar7;
}



// Address: 4a0bf920

int FUN_4a0bf920(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x2c))(param_1);
  if (iVar1 == -1) {
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return (int)(char)iVar1;
}



// Address: 4a0bf958

undefined8 FUN_4a0bf958(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  
  puVar2 = &local_18;
  do {
    if (&stack0xfffffff0 <= puVar2) {
LAB_4a0bf9b0:
      return CONCAT44(CONCAT13(local_18,CONCAT12(local_17,CONCAT11(local_16,local_15))),
                      CONCAT13(local_14,CONCAT12(local_13,CONCAT11(local_12,local_11))));
    }
    iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x30))
                      (*(int **)(param_1 + 8),puVar2,(int)&stack0xfffffff0 - (int)puVar2);
    if (iVar1 < 1) {
      *(undefined1 *)(param_1 + 0xc) = 1;
      goto LAB_4a0bf9b0;
    }
    puVar2 = puVar2 + iVar1;
  } while( true );
}



// Address: 4a0bfa0c

undefined4 FUN_4a0bfa0c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  
  puVar2 = &local_18;
  local_18 = param_4;
  do {
    if (&stack0xffffffec <= puVar2) {
LAB_4a0bfa60:
      return CONCAT13((undefined1)local_18,
                      CONCAT12(local_18._1_1_,CONCAT11(local_18._2_1_,local_18._3_1_)));
    }
    iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x30))
                      (*(int **)(param_1 + 8),puVar2,(int)&stack0xffffffec - (int)puVar2);
    if (iVar1 < 1) {
      *(undefined1 *)(param_1 + 0xc) = 1;
      goto LAB_4a0bfa60;
    }
    puVar2 = (undefined4 *)((int)puVar2 + iVar1);
  } while( true );
}



// Address: 4a0bfa84

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0bfa84(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = param_2 + param_3;
  if (uVar2 <= param_2) {
    return;
  }
  do {
    iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x30))
                      (*(int **)(param_1 + 8),param_2,uVar2 - param_2);
    if (iVar1 < 1) {
      *(undefined1 *)(param_1 + 0xc) = 1;
                    /* WARNING: Could not recover jumptable at 0x4a0bfacc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    param_2 = param_2 + iVar1;
  } while (param_2 < uVar2);
  return;
}



// Address: 4a0bfae4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0bfae4(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(int *)(param_2 + 8) < 1) {
    return;
  }
  uVar2 = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    uVar2 = *(uint *)(*(int *)(param_2 + 0xc) + 8);
  }
  uVar3 = uVar2 + *(int *)(param_2 + 8);
  if (uVar2 < uVar3) {
    do {
      iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x30))
                        (*(int **)(param_1 + 8),uVar2,uVar3 - uVar2);
      if (iVar1 < 1) {
        *(undefined1 *)(param_1 + 0xc) = 1;
                    /* WARNING: Could not recover jumptable at 0x4a0bfb48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      uVar2 = uVar2 + iVar1;
    } while (uVar2 < uVar3);
    return;
  }
  return;
}



// Address: 4a0bfb60

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0bfb60(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(int *)(param_2 + 8) < 1) {
    return;
  }
  uVar2 = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    uVar2 = *(uint *)(*(int *)(param_2 + 0xc) + 8);
  }
  uVar3 = uVar2 + *(int *)(param_2 + 8);
  if (uVar2 < uVar3) {
    do {
      iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x30))
                        (*(int **)(param_1 + 8),uVar2,uVar3 - uVar2);
      if (iVar1 < 1) {
        *(undefined1 *)(param_1 + 0xc) = 1;
                    /* WARNING: Could not recover jumptable at 0x4a0bfbc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      uVar2 = uVar2 + iVar1;
    } while (uVar2 < uVar3);
    return;
  }
  return;
}



// Address: 4a0bfbdc

int FUN_4a0bfbdc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  
  puVar2 = &local_18;
  local_18 = param_4;
  do {
    if ((undefined4 *)((int)&local_18 + 2U) <= puVar2) {
LAB_4a0bfc30:
      return (int)CONCAT11((undefined1)local_18,local_18._1_1_);
    }
    iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x30))
                      (*(int **)(param_1 + 8),puVar2,(int)((int)&local_18 + 2U) - (int)puVar2);
    if (iVar1 < 1) {
      *(undefined1 *)(param_1 + 0xc) = 1;
      goto LAB_4a0bfc30;
    }
    puVar2 = (undefined4 *)((int)puVar2 + iVar1);
  } while( true );
}



// Address: 4a0bfc44

undefined4 * FUN_4a0bfc44(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0be91c();
  *puVar1 = PTR_PTR_4a0bfc88;
  puVar1[2] = param_2;
  *(undefined1 *)(puVar1 + 3) = 0;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))();
  }
  return puVar1;
}



// Address: 4a0bfcf4

void FUN_4a0bfcf4(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = PTR_PTR_4a0bfd4c;
  piVar2 = (int *)param_1[2];
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  *param_1 = PTR_PTR_4a0be968;
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a0bfd80

void FUN_4a0bfd80(void)

{
  return;
}



// Address: 4a0bfd84

void FUN_4a0bfd84(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  undefined4 uStack_14;
  
  uStack_14 = param_2;
  iVar1 = 3;
  piVar3 = param_1;
  do {
    (**(code **)(*param_1 + 0x1c))
              (param_1,*(undefined1 *)((int)&uStack_14 + iVar1),*(code **)(*param_1 + 0x1c),param_4,
               piVar3);
    bVar2 = iVar1 != 0;
    iVar1 = iVar1 + -1;
  } while (bVar2);
  return;
}



// Address: 4a0bfdc0

void FUN_4a0bfdc0(int *param_1,undefined4 param_2)

{
  uint local_10;
  int *piStack_c;
  undefined4 local_8;
  
  local_8._1_1_ = (undefined1)((uint)param_2 >> 8);
  local_8._0_1_ = (undefined1)param_2;
  local_10 = (uint)CONCAT11((undefined1)local_8,local_8._1_1_);
  piStack_c = param_1;
  local_8 = param_2;
  (**(code **)(*param_1 + 0x28))(param_1,&local_10,2);
  return;
}



// Address: 4a0bfe0c

void FUN_4a0bfe0c(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x4a0bfe14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c))();
  return;
}



// Address: 4a0bfe18

undefined4 FUN_4a0bfe18(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x2c))();
    piVar3 = *(int **)(param_1 + 8);
    if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 8))(piVar3), iVar2 != 0)) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *(undefined4 *)(param_1 + 8) = 0;
    return uVar1;
  }
  return 0;
}



// Address: 4a0bfea4

void FUN_4a0bfea4(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x4a0bfeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 8) + 0x20))();
  return;
}



// Address: 4a0bfed4

void FUN_4a0bfed4(int *param_1,uint param_2)

{
  uint local_10;
  int *piStack_c;
  undefined4 local_8;
  
  local_8._3_1_ = (undefined1)(param_2 >> 0x18);
  local_8._2_1_ = (undefined1)(param_2 >> 0x10);
  local_10 = (uint)CONCAT11(local_8._2_1_,local_8._3_1_) |
             (param_2 >> 8 & 0xff) << 0x10 | param_2 << 0x18;
  piStack_c = param_1;
  local_8 = param_2;
  (**(code **)(*param_1 + 0x28))(param_1,&local_10,4);
  return;
}



// Address: 4a0bff24

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0bff24(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int extraout_r1;
  int iVar6;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar7;
  uint local_3c;
  undefined4 local_38;
  undefined *local_34 [2];
  int local_2c;
  int *local_28;
  undefined4 local_24;
  
  if (param_2 == (int *)0x0) {
    local_24 = 0;
    local_28 = (int *)0x0;
    (**(code **)(*param_1 + 0x28))(param_1,&local_28,2);
    return;
  }
  (**(code **)(*param_2 + 0xc))(param_2);
  FUN_4a13e2e8(local_34,param_2,s_UTF_8_4a0c0104);
  iVar5 = local_2c;
  local_38 = local_2c;
  local_38._1_1_ = (undefined1)((uint)local_2c >> 8);
  local_38._0_1_ = (undefined1)local_2c;
  local_3c = (uint)CONCAT11((undefined1)local_38,local_38._1_1_);
  local_38 = iVar5;
  (**(code **)(*param_1 + 0x28))(param_1,&local_3c,2);
  if (0 < iVar5) {
    iVar6 = extraout_r1;
    if (local_28 != (int *)0x0) {
      iVar6 = local_28[2];
    }
    if (local_28 == (int *)0x0) {
      iVar6 = 0;
    }
    (**(code **)(*param_1 + 0x28))(param_1,iVar6,iVar5);
  }
  piVar2 = local_28;
  iVar5 = local_2c;
  local_34[0] = PTR_PTR_4a0c010c;
  bVar7 = local_28 != (int *)0x0;
  if (bVar7) {
    iVar6 = local_28[2];
    cVar1 = (char)local_28[5];
  }
  else {
    iVar6 = 0;
    cVar1 = '\0';
  }
  local_28 = (int *)0x0;
  local_2c = 0;
  if ((piVar2 == (int *)0x0) || (iVar4 = (**(code **)(*piVar2 + 8))(piVar2), iVar4 == 0)) {
    bVar3 = 0;
  }
  else {
    (**(code **)(*piVar2 + 4))(piVar2);
    bVar3 = 1;
  }
  if (!(bool)(bVar3 & (bVar7 && cVar1 != '\0'))) {
    iVar6 = 0;
  }
  if (iVar6 != 0) {
    iVar4 = 0;
    if (0 < iVar5) {
      do {
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar5);
      if (iVar6 == 0) goto LAB_4a0c0074;
    }
    FUN_4a14f21c();
  }
LAB_4a0c0074:
  FUN_4a0c6bf4(local_34);
  if (param_2 == (int *)0x0) {
    return;
  }
  iVar5 = (**(code **)(*param_2 + 8))(param_2);
  if (iVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0c00c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 4))(param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a0c00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a0c0110

void FUN_4a0c0110(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x4a0c0118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c))();
  return;
}



// Address: 4a0c011c

void FUN_4a0c011c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_20;
  undefined4 local_1c;
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c._2_1_ = (undefined1)((uint)param_4 >> 0x10);
  local_c._3_1_ = (undefined1)((uint)param_4 >> 0x18);
  local_c._1_1_ = (undefined1)((uint)param_4 >> 8);
  local_c._0_1_ = (undefined1)param_4;
  local_20 = CONCAT13((undefined1)local_c,
                      CONCAT12(local_c._1_1_,CONCAT11(local_c._2_1_,local_c._3_1_)));
  local_10._3_1_ = (undefined1)((uint)param_3 >> 0x18);
  local_10._2_1_ = (undefined1)((uint)param_3 >> 0x10);
  local_10._1_1_ = (undefined1)((uint)param_3 >> 8);
  local_10._0_1_ = (undefined1)param_3;
  local_1c = CONCAT13((undefined1)local_10,
                      CONCAT12(local_10._1_1_,CONCAT11(local_10._2_1_,local_10._3_1_)));
  piStack_18 = param_1;
  uStack_14 = param_2;
  local_10 = param_3;
  local_c = param_4;
  (**(code **)(*param_1 + 0x28))(param_1,&local_20,8);
  return;
}



// Address: 4a0c0198

undefined4 * FUN_4a0c0198(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0beaec();
  *puVar1 = PTR_PTR_4a0c01d4;
  puVar1[2] = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))();
  }
  return puVar1;
}



// Address: 4a0c0264

void FUN_4a0c0264(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = PTR_PTR_4a0c02e0;
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 0x2c))();
    piVar2 = (int *)param_1[2];
    if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    param_1[2] = 0;
  }
  *param_1 = PTR_PTR_4a0beb38;
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a0c0308

undefined4 FUN_4a0c0308(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  if (param_2[2] != 0) {
    if ((param_2 != (int *)0x0) && (iVar1 = (**(code **)(*param_2 + 8))(param_2), iVar1 != 0)) {
      (**(code **)(*param_2 + 4))(param_2);
    }
    return 1000;
  }
  if ((param_2 != (int *)0x0) && (iVar1 = (**(code **)(*param_2 + 8))(param_2), iVar1 != 0)) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return 0;
}



// Address: 4a0c03ec

undefined4 * FUN_4a0c03ec(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  puVar2 = (undefined4 *)FUN_4a0bcc30();
  puVar1 = PTR_DAT_4a0c0560;
  *puVar2 = PTR_PTR_4a0c055c;
  puVar2[4] = 0;
  puVar2[3] = param_3;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  iVar3 = thunk_FUN_4a0013e0(param_2);
  iVar4 = thunk_FUN_4a161570(iVar3 + 4);
  thunk_FUN_4a0012bc(iVar4,param_2);
  uVar5 = thunk_FUN_4a161570(0x14);
  uVar5 = FUN_4a0c707c(uVar5,puVar1 + -0xc);
  iVar6 = FUN_4a0ff494();
  uVar7 = FUN_4a06c1b0(iVar6 + 0x278);
  iVar6 = FUN_4a13dd58(uVar7,uVar5);
  if (iVar6 == 0) {
    uVar5 = thunk_FUN_4a161570(0x14);
    uVar5 = FUN_4a0c707c(uVar5,PTR_DAT_4a0c0564);
    iVar6 = FUN_4a0ff494();
    uVar7 = FUN_4a06c1b0(iVar6 + 0x278);
    uVar9 = FUN_4a13dd58(uVar7,uVar5);
    puVar8 = puVar1 + -8;
    if ((int)uVar9 == 0) {
      uVar5 = thunk_FUN_4a161570(0x14,(int)((ulonglong)uVar9 >> 0x20));
      uVar5 = FUN_4a0c707c(uVar5,PTR_DAT_4a0c0568);
      iVar6 = FUN_4a0ff494();
      uVar7 = FUN_4a06c1b0(iVar6 + 0x278);
      iVar6 = FUN_4a13dd58(uVar7,uVar5);
      puVar8 = puVar1 + -4;
      if (iVar6 == 0) goto LAB_4a0c0510;
    }
    thunk_FUN_4a0012bc(iVar4 + iVar3,puVar8);
  }
  else {
    thunk_FUN_4a0012bc(iVar4 + iVar3,puVar1);
  }
LAB_4a0c0510:
  iVar3 = FUN_4a135760(*(undefined4 *)PTR_DAT_4a0c056c,iVar4,PTR_s_CIwGxFont_4a0c0570,0);
  puVar2[2] = iVar3;
  if (iVar3 != 0) {
    puVar2[4] = (uint)*(ushort *)(iVar3 + 0x12);
  }
  if (*(int *)PTR_DAT_4a0c0574 == 0) {
    *(undefined4 **)PTR_DAT_4a0c0574 = puVar2;
  }
  thunk_FUN_4a161530(iVar4);
  return puVar2;
}



// Address: 4a0c05f8

bool FUN_4a0c05f8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  return iVar1 == 1;
}



// Address: 4a0c0618

void FUN_4a0c0618(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}



// Address: 4a0c0628

void FUN_4a0c0628(undefined4 *param_1)

{
  *param_1 = PTR_PTR_4a0c063c;
  param_1[1] = 0;
  return;
}



// Address: 4a0c0660

void FUN_4a0c0660(undefined4 *param_1)

{
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a0c0694

void FUN_4a0c0694(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0c8ef0();
  *puVar1 = PTR_PTR_4a0c06ac;
  return;
}



// Address: 4a0c06cc

void FUN_4a0c06cc(undefined4 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  
  host_s3eAudioIsCodecSupported_arm(2);
  local_20 = (undefined1 *)0x0;
  local_1c = (undefined1 *)0x0;
  local_18 = (undefined1 *)0x0;
  iVar1 = thunk_FUN_4a0013e0(s_audio_mp3_4a0c07a0);
  iVar3 = iVar1 + 1;
  if (iVar3 == 0) {
    FUN_4a0bcbf4(s_basic_string_4a0c07ac);
  }
  else {
    puVar2 = (undefined1 *)FUN_4a15e080(iVar3);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = (undefined1 *)FUN_4a1669a8();
    }
    local_18 = puVar2 + iVar3;
    local_20 = puVar2;
    local_1c = puVar2;
  }
  puVar2 = local_20;
  if (iVar1 != 0) {
    iVar3 = FUN_4a000ec8();
    puVar2 = (undefined1 *)(iVar3 + iVar1);
  }
  *puVar2 = 0;
  local_1c = puVar2;
  FUN_4a0c6c00(param_1,&local_20);
  if (local_20 != (undefined1 *)0x0) {
    FUN_4a14f21c();
  }
  return;
}



// Address: 4a0c07bc

void FUN_4a0c07bc(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x30) = 1;
  iVar1 = host_s3eAudioGetInt_arm(1);
  if (iVar1 == 0) {
    return;
  }
  return;
}



// Address: 4a0c07e4

void FUN_4a0c07e4(int param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  puVar2 = (undefined4 *)thunk_FUN_4a161570(0x3c);
  puVar1 = PTR_PTR_4a0c0834;
  *puVar2 = *(undefined4 *)PTR_PTR_4a0c0834;
  iVar3 = FUN_4a0c6bc0(puVar2 + 0xd);
  piVar4 = (int *)FUN_4a0bf330(iVar3 + -0x34,puVar1 + 4,param_1 + 0x1c);
  iVar3 = *(int *)puVar1;
  *piVar4 = iVar3;
  *(undefined4 *)((int)piVar4 + *(int *)(iVar3 + -0xc)) = *(undefined4 *)(puVar1 + 0x1c);
  return;
}



// Address: 4a0c0838

void FUN_4a0c0838(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  (**(code **)(*param_1 + 0x4c))(param_1);
  if (*PTR_DAT_4a0c0918 != '\0') {
    if (*PTR_DAT_4a0c091c == '\0') {
                    /* WARNING: Could not recover jumptable at 0x4a0c0874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    iVar3 = 0;
    iVar1 = host_s3eSoundGetInt_arm(3);
    if (0 < iVar1) {
      do {
        host_s3eSoundChannelStop_arm(iVar3);
        iVar3 = iVar3 + 1;
        iVar1 = host_s3eSoundGetInt_arm(3);
      } while (iVar3 < iVar1);
    }
  }
  (**(code **)(*param_1 + 0x34))(param_1);
  uVar2 = (**(code **)(*param_1 + 0x34))(param_1);
  host_s3eAudioPlay_arm(param_1[7],uVar2);
  host_s3eDeviceYield_arm(0);
  if (*PTR_DAT_4a0c0920 == '\0') {
    iVar1 = host_s3eAudioGetInt_arm(1);
    if (iVar1 != 1) {
      return;
    }
    return;
  }
  return;
}



// Address: 4a0c0924

void FUN_4a0c0924(void)

{
  int iVar1;
  
  iVar1 = host_s3eAudioGetInt_arm(1);
  if (iVar1 == 0) {
    return;
  }
  return;
}



// Address: 4a0c0944

void FUN_4a0c0944(undefined4 *param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = PTR_PTR_4a0c0988;
  *param_1 = *(undefined4 *)PTR_PTR_4a0c0988;
  iVar2 = FUN_4a0c6bc0(param_1 + 0xd);
  piVar3 = (int *)FUN_4a0bf330(iVar2 + -0x34,puVar1 + 4,param_2);
  iVar2 = *(int *)puVar1;
  *piVar3 = iVar2;
  *(undefined4 *)((int)piVar3 + *(int *)(iVar2 + -0xc)) = *(undefined4 *)(puVar1 + 0x1c);
  return;
}



// Address: 4a0c09ec

int FUN_4a0c09ec(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_PTR_4a0c0a40;
  iVar2 = *(int *)PTR_PTR_4a0c0a40;
  *param_1 = iVar2;
  *(undefined4 *)((int)param_1 + *(int *)(iVar2 + -0xc)) = *(undefined4 *)(puVar1 + 0x1c);
  *(undefined1 *)(param_1 + 0xc) = 1;
  iVar2 = host_s3eAudioGetInt_arm();
  if (iVar2 != 0) {
    host_s3eAudioStop_arm();
  }
  iVar2 = FUN_4a0bf464(param_1,puVar1 + 4);
  iVar2 = FUN_4a0c6bf4(iVar2 + 0x34);
  return iVar2 + -0x34;
}



// Address: 4a0c0a60

byte * FUN_4a0c0a60(int param_1)

{
  byte bVar1;
  byte bVar2;
  short *psVar3;
  short *psVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  
  uVar8 = *(uint *)(param_1 + 0x28);
  pbVar7 = *(byte **)(param_1 + 0x2c);
  *(uint *)(param_1 + 0x28) = uVar8 << 1;
  psVar3 = (short *)host_s3eMallocBase_arm();
  *(short **)(param_1 + 0x2c) = psVar3;
  if (0 < (int)uVar8) {
    psVar4 = psVar3 + -1;
    pbVar5 = pbVar7 + -1;
    if ((uVar8 & 1) != 0) {
      *psVar3 = (ushort)*pbVar7 << 8;
      psVar4 = psVar3;
      pbVar5 = pbVar7;
    }
    bVar2 = pbVar5[1];
    for (iVar6 = (int)uVar8 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      bVar1 = pbVar5[2];
      psVar4[1] = (short)(char)bVar2 << 8;
      bVar2 = pbVar5[3];
      psVar4 = psVar4 + 2;
      *psVar4 = (ushort)bVar1 << 8;
      pbVar5 = pbVar5 + 2;
    }
  }
  return pbVar7;
}



// Address: 4a0c0adc

void FUN_4a0c0adc(undefined4 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  
  local_20 = (undefined1 *)0x0;
  local_1c = (undefined1 *)0x0;
  local_18 = (undefined1 *)0x0;
  iVar1 = thunk_FUN_4a0013e0(s_audio_wav_4a0c0ba8);
  iVar3 = iVar1 + 1;
  if (iVar3 == 0) {
    FUN_4a0bcbf4(s_basic_string_4a0c0bb4);
  }
  else {
    puVar2 = (undefined1 *)FUN_4a15e080(iVar3);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = (undefined1 *)FUN_4a1669a8();
    }
    local_18 = puVar2 + iVar3;
    local_20 = puVar2;
    local_1c = puVar2;
  }
  puVar2 = local_20;
  if (iVar1 != 0) {
    iVar3 = FUN_4a000ec8();
    puVar2 = (undefined1 *)(iVar3 + iVar1);
  }
  *puVar2 = 0;
  local_1c = puVar2;
  FUN_4a0c6c00(param_1,&local_20);
  if (local_20 != (undefined1 *)0x0) {
    FUN_4a14f21c();
  }
  return;
}



// Address: 4a0c0bc4

void FUN_4a0c0bc4(int param_1)

{
  if (*(int *)(param_1 + 0x34) != -1) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    host_s3eSoundChannelStop_arm();
    host_s3eSoundChannelUnRegister_arm(*(undefined4 *)(param_1 + 0x34),0);
  }
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  return;
}



// Address: 4a0c0c00

void FUN_4a0c0c00(int param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  puVar2 = (undefined4 *)thunk_FUN_4a161570(0x40);
  puVar1 = PTR_PTR_4a0c0c58;
  *puVar2 = *(undefined4 *)PTR_PTR_4a0c0c58;
  iVar3 = FUN_4a0c6bc0(puVar2 + 0xe);
  piVar4 = (int *)FUN_4a0bf330(iVar3 + -0x38,puVar1 + 4,param_1 + 0x1c);
  iVar3 = *(int *)puVar1;
  *piVar4 = iVar3;
  *(undefined4 *)((int)piVar4 + *(int *)(iVar3 + -0xc)) = *(undefined4 *)(puVar1 + 0x1c);
  piVar4[0xd] = -1;
  return;
}



// Address: 4a0c0c5c

void FUN_4a0c0c5c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*PTR_DAT_4a0c0d00 != '\0') {
    if (*PTR_DAT_4a0c0d04 == '\0') {
      return;
    }
    FUN_4a0c0924();
  }
  (**(code **)(*param_1 + 0x4c))(param_1);
  iVar1 = host_s3eSoundGetFreeChannel_arm();
  param_1[0xd] = iVar1;
  host_s3eSoundChannelSetInt_arm(iVar1,1,0x2b11);
  iVar2 = (**(code **)(*param_1 + 0x34))(param_1);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  if (iVar2 == 0) {
    iVar1 = 1;
  }
  host_s3eSoundChannelPlay_arm(param_1[0xd],param_1[0xb],param_1[10] / 2,iVar1);
  return;
}



// Address: 4a0c0d08

void FUN_4a0c0d08(undefined4 *param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = PTR_PTR_4a0c0d54;
  *param_1 = *(undefined4 *)PTR_PTR_4a0c0d54;
  iVar2 = FUN_4a0c6bc0(param_1 + 0xe);
  piVar3 = (int *)FUN_4a0bf330(iVar2 + -0x38,puVar1 + 4,param_2);
  iVar2 = *(int *)puVar1;
  *piVar3 = iVar2;
  *(undefined4 *)((int)piVar3 + *(int *)(iVar2 + -0xc)) = *(undefined4 *)(puVar1 + 0x1c);
  piVar3[0xd] = -1;
  return;
}



// Address: 4a0c0d84

int FUN_4a0c0d84(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (param_2 != 0) {
    param_3 = (int *)PTR_PTR_4a0c0e04;
  }
  iVar1 = *param_3;
  *param_1 = iVar1;
  *(int *)((int)param_1 + *(int *)(iVar1 + -0xc)) = param_3[7];
  if (param_1[0xd] != -1) {
    *(undefined1 *)(param_1 + 0xc) = 1;
    host_s3eSoundChannelStop_arm();
    host_s3eSoundChannelUnRegister_arm(param_1[0xd],0);
  }
  param_1[0xd] = -1;
  iVar1 = FUN_4a0bf464(param_1,param_3 + 1);
  if (param_2 != 0) {
    iVar1 = FUN_4a0c6bf4(iVar1 + 0x38);
    return iVar1 + -0x38;
  }
  return iVar1;
}



// Address: 4a0c0e08

undefined4 * FUN_4a0c0e08(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  puVar1 = PTR_DAT_4a0c0e3c;
  if (*(int *)(PTR_DAT_4a0c0e3c + 100) == 0) {
    puVar2 = (undefined4 *)thunk_FUN_4a161570(0x24);
    *puVar2 = PTR_PTR_4a0c0e40;
    *(undefined4 **)(puVar1 + 100) = puVar2;
  }
  else {
    puVar2 = *(undefined4 **)(PTR_DAT_4a0c0e3c + 100);
  }
  return puVar2;
}



// Address: 4a0c0e44

void FUN_4a0c0e44(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  host_s3eAccelerometerGetY_arm();
  uVar1 = FUN_4a171fac();
  uVar3 = DAT_4a0c0ea0;
  uVar1 = FUN_4a17211c(uVar1,DAT_4a0c0ea0);
  *param_2 = uVar1;
  iVar2 = host_s3eAccelerometerGetX_arm();
  uVar1 = FUN_4a171fac(-iVar2);
  uVar1 = FUN_4a17211c(uVar1,uVar3);
  *param_3 = uVar1;
  host_s3eAccelerometerGetZ_arm();
  uVar1 = FUN_4a171fac();
  uVar3 = FUN_4a17211c(uVar1,uVar3);
  *param_4 = uVar3;
  return;
}



// Address: 4a0c0ea4

void FUN_4a0c0ea4(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  host_s3eAccelerometerGetY_arm();
  uVar1 = FUN_4a171fac();
  uVar3 = DAT_4a0c0f00;
  uVar1 = FUN_4a17211c(uVar1,DAT_4a0c0f00);
  *param_2 = uVar1;
  iVar2 = host_s3eAccelerometerGetX_arm();
  uVar1 = FUN_4a171fac(-iVar2);
  uVar1 = FUN_4a17211c(uVar1,uVar3);
  *param_3 = uVar1;
  host_s3eAccelerometerGetZ_arm();
  uVar1 = FUN_4a171fac();
  uVar3 = FUN_4a17211c(uVar1,uVar3);
  *param_4 = uVar3;
  return;
}



// Address: 4a0c0f28

int FUN_4a0c0f28(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x1c);
  if (iVar1 < param_3) {
    param_3 = iVar1;
  }
  FUN_4a000f84(param_2,*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 8),
               param_3);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_3;
  return param_3;
}



// Address: 4a0c103c

void FUN_4a0c103c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0be91c();
  *puVar1 = PTR_PTR_4a0c1078;
  puVar1[4] = 0;
  puVar1[3] = param_3;
  puVar1[2] = param_2;
  puVar1[6] = 0;
  puVar1[5] = param_3;
  puVar1[7] = 0;
  return;
}



// Address: 4a0c107c

void FUN_4a0c107c(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_4a0be91c();
  *puVar1 = PTR_PTR_4a0c10cc;
  if (*(int *)(param_2 + 0xc) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(param_2 + 0xc) + 8);
  }
  puVar1[2] = uVar2;
  puVar1[3] = *(undefined4 *)(param_2 + 8);
  puVar1[4] = 0;
  puVar1[5] = *(undefined4 *)(param_2 + 8);
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// Address: 4a0c1258

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0c1258(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar2;
  
  piVar2 = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))();
  }
  FUN_4a0458e8(param_2,*(undefined4 *)(*(int *)(param_1 + 0x20) + 8),0,0xffffffff,param_3,param_4,
               param_5,param_6,param_7,piVar2);
  if (param_2 != (int *)0x0) {
    iVar1 = (**(code **)(*param_2 + 8))(param_2);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0c12fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 4))(param_2);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a0c12e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a0c1300

undefined4 FUN_4a0c1300(int *param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iStack_28;
  int iStack_24;
  
  piVar6 = &iStack_28;
  piVar2 = &iStack_28;
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    return 0;
  }
  *(undefined1 *)((int)param_1 + 0x31) = 0;
  puVar1 = PTR_DAT_4a0c17bc;
  uVar5 = *(undefined4 *)PTR_DAT_4a0c17bc;
  iStack_24 = FUN_4a0bc200(uVar5);
  iStack_28 = FUN_4a0bc1f8(uVar5);
  uVar5 = *(undefined4 *)puVar1;
  if (iStack_24 <= iStack_28) {
    piVar6 = &iStack_24;
  }
  iVar7 = *piVar6;
  iStack_24 = FUN_4a0bc200(uVar5);
  iStack_28 = FUN_4a0bc1f8(uVar5);
  if (iStack_28 <= iStack_24) {
    piVar2 = &iStack_24;
  }
  iVar8 = *piVar2;
  iStack_28 = iVar8;
  (**(code **)(*(int *)param_1[10] + 0x4c))((int *)param_1[10],0,0,iVar7);
  (**(code **)(*(int *)param_1[10] + 0x24))((int *)param_1[10],0x8075);
  (**(code **)(*(int *)param_1[10] + 0x24))((int *)param_1[10],0x8076);
  (**(code **)(*(int *)param_1[10] + 0x2c))((int *)param_1[10],0x8074);
  piVar6 = (int *)param_1[0xb];
  if ((piVar6 != (int *)0x0) && (iVar3 = (**(code **)(*piVar6 + 8))(piVar6), iVar3 != 0)) {
    (**(code **)(*piVar6 + 4))(piVar6);
  }
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  FUN_4a13d884(param_1);
  (**(code **)(*(int *)param_1[10] + 0x20))((int *)param_1[10],0xb50);
  (**(code **)(*(int *)param_1[10] + 0x20))((int *)param_1[10],0xb44);
  (**(code **)(*(int *)param_1[10] + 0x20))((int *)param_1[10],0xb71);
  (**(code **)(*(int *)param_1[10] + 0x94))((int *)param_1[10],0);
  iStack_28 = 1;
  (**(code **)(*(int *)param_1[10] + 0x98))((int *)param_1[10],1,1);
  (**(code **)(*(int *)param_1[10] + 0x20))((int *)param_1[10],0xbc0);
  (**(code **)(*(int *)param_1[10] + 0x90))((int *)param_1[10],0x302);
  (**(code **)(*(int *)param_1[10] + 0x28))((int *)param_1[10],0xbe2);
  (**(code **)(*(int *)param_1[10] + 0x20))((int *)param_1[10],0x8037);
  (**(code **)(*(int *)param_1[10] + 0xac))((int *)param_1[10],0x1701);
  FUN_4a1504dc();
  uVar5 = FUN_4a171fac(iVar8);
  uVar4 = FUN_4a171fac(iVar7);
  iStack_24 = 0x3f800000;
  iStack_28 = -0x40800000;
  FUN_4a1506a8(0,uVar4,0,uVar5);
  iVar3 = FUN_4a13e6b4(param_1[9]);
  if (iVar3 == 1) {
    uVar5 = FUN_4a17295c(uVar5,0xffffffff);
    uVar4 = FUN_4a17295c(uVar4,0xffffffff);
    FUN_4a150bec(uVar4,uVar5,0);
    FUN_4a1507c0(0x3f800000,0xbf800000);
  }
  else if (iVar3 == 2) {
    uVar5 = FUN_4a17295c(uVar5,0xffffffff);
    uVar4 = FUN_4a17295c(uVar4,0xffffffff);
    FUN_4a150bec(uVar4,uVar5,0);
    FUN_4a150798(0xc2b40000,0,0,0x3f800000);
    FUN_4a1507c0(0x3f800000,0xbf800000);
    uVar5 = FUN_4a171fac(-iVar7);
    uVar5 = FUN_4a17295c(uVar5,0xffffffff);
    uVar4 = FUN_4a171fac(-iVar8);
    uVar4 = FUN_4a17295c(uVar4,0xffffffff);
    FUN_4a150bec(uVar4,uVar5,0);
  }
  (**(code **)(*(int *)param_1[10] + 0xac))((int *)param_1[10],0x1702);
  FUN_4a1504dc();
  (**(code **)(*(int *)param_1[10] + 0xac))((int *)param_1[10],0x1700);
  FUN_4a1504dc();
  (**(code **)(*(int *)param_1[10] + 0x28))((int *)param_1[10],0xc11);
  uVar5 = FUN_4a0c74dc(param_1[9]);
  iVar7 = FUN_4a0bc1f8(*(undefined4 *)puVar1);
  if ((iVar7 == 0x140) || (iVar7 = FUN_4a0bc1f8(*(undefined4 *)puVar1), iVar7 == 400)) {
    iStack_28 = 600;
    (**(code **)(*param_1 + 0x9c))(param_1,0,0,800);
  }
  else {
    iVar7 = FUN_4a13caa0(uVar5);
    uVar5 = FUN_4a13ca78(uVar5);
    iStack_28 = iVar7;
    (**(code **)(*param_1 + 0x9c))(param_1,0,0,uVar5);
  }
  iVar7 = (**(code **)(*param_1 + 0x98))(param_1);
  iVar8 = (**(code **)(*param_1 + 0x94))(param_1);
  (**(code **)(*param_1 + 0xb0))(param_1,-iVar8,-iVar7);
  return 1;
}



// Address: 4a0c17c0

void FUN_4a0c17c0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_34 = FUN_4a171fac(param_2);
  local_30 = FUN_4a171fac(param_3);
  local_2c = FUN_4a171fac(param_4);
  local_28 = FUN_4a171fac(param_5);
  local_24 = FUN_4a171fac(param_6);
  local_20 = FUN_4a171fac(param_7);
  (**(code **)(*param_1 + 0xbc))(param_1);
  FUN_4a13d884(param_1);
  thunk_FUN_4a150d6c(2,0x1406,0,&local_34);
  host_glDrawArrays_arm(5,0,3);
  return;
}



// Address: 4a0c187c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0c187c(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))();
  }
  FUN_4a0458e8(param_2,*(undefined4 *)(*(int *)(param_1 + 0x20) + 8),param_3,param_4,param_5,param_6
               ,param_7,param_8,param_9);
  if (param_2 != (int *)0x0) {
    iVar1 = (**(code **)(*param_2 + 8))(param_2);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0c1914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 4))(param_2);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a0c18fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a0c191c

int FUN_4a0c191c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  
  thunk_FUN_4a161570(0x1c0);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  puVar1 = (undefined4 *)FUN_4a0b77d4();
  *puVar1 = PTR_PTR_4a0b2f7c;
  puVar1[2] = uVar3;
  puVar1[4] = 0;
  puVar1[3] = 4;
  puVar1[5] = 0;
  uVar3 = thunk_FUN_4a149130(0x48,4,PTR_FUN_4a0b2f80,0,unaff_r4);
  puVar1[5] = uVar3;
  puVar1[6] = 0;
  iVar2 = FUN_4a0b8a1c(puVar1 + 7);
  iVar2 = FUN_4a0b8a1c(iVar2 + 0x48);
  iVar2 = FUN_4a0b8a1c(iVar2 + 0x48);
  iVar2 = FUN_4a0b8a1c(iVar2 + 0x48);
  iVar2 = FUN_4a0b8a1c(iVar2 + 0x48);
  *(undefined4 *)(iVar2 + 0x48) = 0;
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  *(undefined4 *)(iVar2 + 0x50) = 2;
  *(undefined4 *)(iVar2 + 0x54) = 0;
  *(undefined4 *)(iVar2 + 0x58) = 0;
  *(undefined4 *)(iVar2 + 0x5c) = 0;
  *(undefined4 *)(iVar2 + 0x60) = 0;
  *(undefined4 *)(iVar2 + 100) = 0;
  *(undefined4 *)(iVar2 + 0x68) = 0;
  *(undefined1 *)(iVar2 + 0x6c) = 0;
  *(undefined4 *)(iVar2 + 0x70) = 0;
  *(undefined4 *)(iVar2 + 0x74) = 0;
  *(undefined4 *)(iVar2 + 0x78) = 0;
  *(undefined4 *)(iVar2 + 0x7c) = 0;
  *(undefined4 *)(iVar2 + 0x80) = 0;
  uVar3 = thunk_FUN_4a161570(8);
  *(undefined4 *)(iVar2 + 0x68) = uVar3;
  return iVar2 + -0x13c;
}



// Address: 4a0c194c

void FUN_4a0c194c(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
                 int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (0x167 < param_7) {
    iVar4 = param_2 + param_4;
    iVar1 = (int)((ulonglong)((longlong)DAT_4a0c1aec * (longlong)param_4) >> 0x20);
    iVar1 = (iVar1 - (iVar1 >> 0x1f)) + param_2;
    iVar2 = (int)((ulonglong)((longlong)DAT_4a0c1aec * (longlong)(param_4 << 1)) >> 0x20);
    iVar3 = (iVar2 - (iVar2 >> 0x1f)) + param_2;
    iVar2 = (int)((ulonglong)((longlong)DAT_4a0c1aec * (longlong)param_5) >> 0x20);
    iVar5 = (iVar2 - (iVar2 >> 0x1f)) + param_3;
    iVar2 = (int)((ulonglong)((longlong)DAT_4a0c1aec * (longlong)(param_5 << 1)) >> 0x20);
    iVar2 = (iVar2 - (iVar2 >> 0x1f)) + param_3;
    (**(code **)(*param_1 + 0x38))(param_1,iVar1,param_3,iVar3);
    (**(code **)(*param_1 + 0x38))(param_1,iVar3,param_3,iVar4);
    (**(code **)(*param_1 + 0x38))(param_1,iVar4,iVar5,iVar4);
    (**(code **)(*param_1 + 0x38))(param_1,iVar4,iVar2,iVar3);
    (**(code **)(*param_1 + 0x38))(param_1,iVar3,param_3 + param_5,iVar1);
    (**(code **)(*param_1 + 0x38))(param_1,iVar1,param_3 + param_5,param_2);
    (**(code **)(*param_1 + 0x38))(param_1,param_2,iVar2,param_2);
    (**(code **)(*param_1 + 0x38))(param_1,param_2,iVar5,iVar1);
    return;
  }
  return;
}



// Address: 4a0c1af4

void FUN_4a0c1af4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,int param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int local_58;
  
  uVar1 = FUN_4a17211c(*(undefined4 *)PTR_DAT_4a0c1d40,DAT_4a0c1d3c);
  iVar2 = param_6 + param_7;
  local_58 = iVar2 - param_6;
  if (iVar2 - param_6 <= param_6 - iVar2) {
    local_58 = param_6 - iVar2;
  }
  iVar15 = 8;
  iVar12 = -param_7;
  if (-param_7 < param_7) {
    iVar12 = param_7;
  }
  if (iVar12 < 8) {
    iVar15 = 1;
  }
  else {
    local_58 = FUN_4a0015f0(local_58,8);
  }
  if (param_7 < 0) {
    iVar15 = -iVar15;
  }
  uVar3 = FUN_4a171fac(param_4);
  FUN_4a17295c(uVar3,0xffffffff);
  uVar3 = FUN_4a171e1c();
  uVar4 = FUN_4a171fac(param_5);
  FUN_4a17295c(uVar4,0xffffffff);
  uVar4 = FUN_4a171e1c();
  puVar5 = (undefined4 *)thunk_FUN_4a161570((local_58 + 2) * 8);
  uVar6 = FUN_4a171fac(param_2);
  *puVar5 = uVar6;
  uVar7 = FUN_4a171fac(param_3);
  puVar5[1] = uVar7;
  iVar12 = 0;
  iVar14 = 1;
  if (1 < local_58 + 1) {
    uVar8 = FUN_4a171fac(uVar4);
    uVar9 = FUN_4a171fac(uVar3);
    iVar13 = iVar12;
    do {
      uVar10 = FUN_4a171fac(param_6);
      uVar10 = FUN_4a17211c(uVar10,uVar1);
      uVar11 = FUN_4a002d64();
      uVar11 = FUN_4a17211c(uVar11,uVar9);
      uVar11 = FUN_4a171a94(uVar6,uVar11);
      puVar5[iVar13 * 2 + 2] = uVar11;
      uVar10 = FUN_4a002f08(uVar10);
      uVar10 = FUN_4a17211c(uVar10,uVar8);
      uVar10 = FUN_4a171a94(uVar7,uVar10);
      iVar14 = iVar14 + 1;
      iVar12 = iVar13 + 1;
      param_6 = param_6 + iVar15;
      puVar5[iVar13 * 2 + 3] = uVar10;
      iVar13 = iVar12;
    } while (iVar14 < local_58 + 1);
  }
  uVar3 = FUN_4a171fac(uVar3);
  uVar8 = FUN_4a171fac(iVar2);
  uVar1 = FUN_4a17211c(uVar8,uVar1);
  uVar8 = FUN_4a002d64();
  uVar3 = FUN_4a17211c(uVar8,uVar3);
  uVar3 = FUN_4a171a94(uVar6,uVar3);
  puVar5[iVar12 * 2 + 2] = uVar3;
  uVar3 = FUN_4a171fac(uVar4);
  uVar1 = FUN_4a002f08(uVar1);
  uVar1 = FUN_4a17211c(uVar1,uVar3);
  uVar1 = FUN_4a171a94(uVar7,uVar1);
  puVar5[iVar12 * 2 + 3] = uVar1;
  (**(code **)(*param_1 + 0xbc))(param_1);
  FUN_4a13d884(param_1);
  thunk_FUN_4a150d6c(2,0x1406,0,puVar5);
  host_glDrawArrays_arm(6,0,local_58 + 2);
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(puVar5,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a0c1d44

void FUN_4a0c1d44(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  
  uVar1 = FUN_4a0c74dc(param_1[9]);
  iVar2 = FUN_4a13ca78();
  iVar3 = FUN_4a13caa0(uVar1);
  (**(code **)(*param_1 + 0xbc))(param_1);
  param_1[0xd] = param_2;
  param_1[0xe] = param_3;
  param_1[0xf] = param_4;
  iVar4 = param_2;
  if (param_2 < 1) {
    iVar4 = param_3;
  }
  param_1[0x10] = param_5;
  if (iVar4 < 1) {
    bVar8 = SBORROW4(param_4,iVar2);
    iVar4 = param_4 - iVar2;
    if (iVar2 <= param_4) {
      bVar8 = SBORROW4(param_5,iVar3);
      iVar4 = param_5 - iVar3;
    }
    if (iVar4 < 0 == bVar8) {
                    /* WARNING: Could not recover jumptable at 0x4a0c1dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)param_1[10] + 0x20))();
      return;
    }
  }
  (**(code **)(*(int *)param_1[10] + 0x28))((int *)param_1[10],0xc11);
  iVar4 = FUN_4a13e6b4(param_1[9]);
  iVar6 = param_3 + param_5;
  param_4 = param_2 + param_4;
  if (iVar4 == 0) {
    piVar5 = (int *)param_1[10];
    iVar4 = iVar3 - iVar6;
    param_2 = iVar2 - param_4;
    pcVar7 = *(code **)(*piVar5 + 0x38);
  }
  else if (iVar4 == 1) {
    piVar5 = (int *)param_1[10];
    iVar4 = iVar3 - iVar6;
    pcVar7 = *(code **)(*piVar5 + 0x38);
  }
  else if (iVar4 == 2) {
    piVar5 = (int *)param_1[10];
    iVar4 = iVar2 - param_4;
    param_2 = iVar3 - iVar6;
    pcVar7 = *(code **)(*piVar5 + 0x38);
  }
  else {
    if (iVar4 != 3) {
      return;
    }
    piVar5 = (int *)param_1[10];
    iVar4 = iVar2 - param_4;
    pcVar7 = *(code **)(*piVar5 + 0x38);
    param_2 = param_3;
  }
  (*pcVar7)(piVar5,param_2,iVar4,param_5);
  return;
}



// Address: 4a0c1ea8

void FUN_4a0c1ea8(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  puVar2 = PTR_DAT_4a0c1f70;
  bVar1 = false;
  iVar3 = FUN_4a0bc1f8(*(undefined4 *)PTR_DAT_4a0c1f70);
  if ((iVar3 == 400) || (iVar3 = FUN_4a0bc1f8(*(undefined4 *)puVar2), iVar3 == 0x140)) {
    bVar1 = true;
  }
  else {
    iVar3 = param_1[0xd];
    if (param_2 < iVar3) goto LAB_4a0c1f00;
  }
  iVar3 = param_2;
LAB_4a0c1f00:
  iVar4 = param_1[0xd] + param_1[0xf];
  if (param_2 + param_4 <= param_1[0xd] + param_1[0xf]) {
    iVar4 = param_2 + param_4;
  }
  if ((bVar1) || (iVar5 = param_1[0xe], param_1[0xe] <= param_3)) {
    iVar5 = param_3;
  }
  iVar6 = param_1[0xe] + param_1[0x10];
  if (param_3 + param_5 <= param_1[0xe] + param_1[0x10]) {
    iVar6 = param_3 + param_5;
  }
  (**(code **)(*param_1 + 0x9c))(param_1,iVar3,iVar5,iVar4 - iVar3,iVar6 - iVar5);
  return;
}



// Address: 4a0c1f7c

void FUN_4a0c1f7c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 in_CY;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  uVar1 = FUN_4a171fac(param_2);
  uVar2 = FUN_4a171fac(param_4);
  uVar3 = FUN_4a171fac(param_3);
  uVar4 = FUN_4a171fac(param_5);
  FUN_4a1720a0(uVar2,uVar1);
  uVar6 = uVar1;
  uVar5 = uVar3;
  if (!(bool)in_CY) {
    uVar6 = uVar2;
    uVar5 = uVar4;
    uVar4 = uVar3;
    uVar2 = uVar1;
  }
  uVar2 = FUN_4a171a94(uVar2,0x3f800000);
  FUN_4a172458(uVar4,uVar5);
  if ((bool)in_CY) {
    FUN_4a172458(uVar5,uVar4);
    if (!(bool)in_CY) {
      uVar5 = FUN_4a171a94(uVar5,0x3f800000);
    }
  }
  else {
    uVar4 = FUN_4a171a94(uVar4,0x3f800000);
  }
  local_28 = uVar6;
  uStack_24 = uVar5;
  uStack_20 = uVar2;
  local_1c = uVar4;
  (**(code **)(*param_1 + 0xbc))(param_1);
  FUN_4a13d884(param_1);
  thunk_FUN_4a150d6c(2,0x1406,0,&local_28);
  host_glDrawArrays_arm(1,0,2);
  return;
}



// Address: 4a0c2098

void FUN_4a0c2098(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar1 = FUN_4a171fac(param_2);
  uVar1 = FUN_4a171a94(uVar1,0x3ec00000);
  uVar2 = FUN_4a171fac(param_3);
  uVar2 = FUN_4a171a94(uVar2,0x3ec00000);
  local_38 = uVar1;
  local_34 = uVar2;
  local_30 = uVar1;
  uVar3 = FUN_4a171fac(param_5);
  uVar3 = FUN_4a171a94(uVar3,uVar2);
  local_2c = uVar3;
  uVar4 = FUN_4a171fac(param_4);
  local_28 = FUN_4a171a94(uVar4,uVar1);
  uStack_24 = uVar3;
  local_20 = local_28;
  uStack_1c = uVar2;
  (**(code **)(*param_1 + 0xbc))(param_1);
  FUN_4a13d884(param_1);
  thunk_FUN_4a150d6c(2,0x1406,0,&local_38);
  host_glDrawArrays_arm(2,0,4);
  return;
}



// Address: 4a0c216c

void FUN_4a0c216c(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar1 = FUN_4a171fac(param_2);
  uVar1 = FUN_4a171a94(uVar1,0x3ec00000);
  uVar2 = FUN_4a171fac(param_3);
  uVar2 = FUN_4a171a94(uVar2,0x3ec00000);
  uVar3 = FUN_4a171fac(param_2 + param_4);
  uVar3 = FUN_4a171a94(uVar3,0x3ec00000);
  uVar4 = FUN_4a171fac(param_3 + param_5);
  local_34 = FUN_4a171a94(uVar4,0x3ec00000);
  local_40 = uVar1;
  uStack_3c = uVar2;
  local_38 = uVar1;
  uStack_30 = uVar3;
  local_2c = uVar2;
  local_28 = uVar3;
  local_24 = local_34;
  (**(code **)(*param_1 + 0xbc))(param_1);
  FUN_4a13d884(param_1);
  thunk_FUN_4a150d6c(2,0x1406,0,&local_40);
  host_glDrawArrays_arm(5,0,4);
  return;
}



// Address: 4a0c2240

void FUN_4a0c2240(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  FUN_4a0c8eac();
  FUN_4a15495c(param_2 << 8,param_3 << 8,param_4 << 8,param_5 << 8,unaff_r4,in_lr);
  return;
}



// Address: 4a0c227c

void FUN_4a0c227c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_4a13daf8(param_2);
  uVar2 = FUN_4a13db00(param_2);
  (**(code **)(*param_1 + 0x40))(param_1,param_2,0,0,uVar1,uVar2,0,param_3,param_4,param_5);
  return;
}



// Address: 4a0c22f4

void FUN_4a0c22f4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x98))(param_1);
  uVar2 = FUN_4a171fac(-iVar1);
  iVar1 = (**(code **)(*param_1 + 0x94))(param_1);
  uVar3 = FUN_4a171fac(-iVar1);
  FUN_4a150bec(uVar3,uVar2,0);
  FUN_4a0c8ed4(param_1,param_2,param_3);
  (**(code **)(*param_1 + 0x98))(param_1);
  uVar2 = FUN_4a171fac();
  (**(code **)(*param_1 + 0x94))(param_1);
  uVar3 = FUN_4a171fac();
  FUN_4a158010(uVar3,uVar2,0);
  return;
}



// Address: 4a0c23a0

undefined4 * FUN_4a0c23a0(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0c0694();
  *puVar1 = PTR_PTR_4a0c2404;
  puVar1[0xb] = 0;
  puVar1[9] = param_2;
  puVar1[10] = param_3;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  *(undefined1 *)((int)puVar1 + 0x31) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))();
  }
  return puVar1;
}



// Address: 4a0c24ac

void FUN_4a0c24ac(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = PTR_PTR_4a0c2540;
  piVar2 = (int *)param_1[9];
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  piVar2 = (int *)param_1[0xb];
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  *param_1 = PTR_PTR_4a0c9058;
  piVar2 = (int *)param_1[8];
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a0c254c

void FUN_4a0c254c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_4a16b5f8(param_1,*(undefined4 *)(param_2 + 0x1c));
  uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
  iVar1 = *(int *)((int)uVar5 + 0xc);
  if (iVar1 != 0) {
    uVar3 = *(undefined4 *)(iVar1 + 8);
  }
  iVar2 = *(int *)(param_2 + 0x14);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  bVar4 = iVar2 == 0;
  if (bVar4) {
    iVar2 = 0;
  }
  if (!bVar4) {
    iVar2 = *(int *)(iVar2 + 8);
  }
  FUN_4a0c7398(iVar2,0,uVar3,0,*(undefined4 *)(param_2 + 0x1c),1);
  return;
}



// Address: 4a0c25ac

void FUN_4a0c25ac(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_44 [12];
  int iStack_38;
  undefined1 auStack_30 [20];
  
  if (param_2 <= *(int *)(param_1 + 0x10)) {
    return;
  }
  puVar1 = (undefined4 *)FUN_4a0c6bc0(auStack_44);
  *puVar1 = PTR_PTR_4a0c26bc;
  puVar1[2] = *(undefined4 *)(param_1 + 0x10);
  piVar3 = *(int **)(param_1 + 0x14);
  puVar1[3] = piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
  }
  *puVar1 = PTR_PTR_4a0c26c0;
  iVar2 = FUN_4a16b5f8(auStack_30,param_2);
  uVar4 = *(undefined4 *)(iVar2 + 8);
  piVar3 = *(int **)(iVar2 + 0xc);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
  }
  (**(code **)(*(int *)(param_1 + 8) + 0x1c))((int *)(param_1 + 8));
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  *(int **)(param_1 + 0x14) = piVar3;
  FUN_4a16b6c0(auStack_30);
  uVar4 = 0;
  if (*(int *)(param_1 + 0x14) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 8);
  }
  if (iStack_38 != 0) {
    uVar4 = *(undefined4 *)(iStack_38 + 8);
  }
  FUN_4a0c7398(uVar4,0,uVar5);
  FUN_4a16b6c0(auStack_44);
  return;
}



// Address: 4a0c2720

void FUN_4a0c2720(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x20) + param_3;
  if (*(int *)(param_1 + 0x10) <= iVar3) {
    iVar1 = *(int *)(param_1 + 0x10) * 3;
    FUN_4a0c25ac(param_1,iVar3 + ((int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1d)) >> 3) + 0x20);
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 8);
  }
  FUN_4a0c7398(param_2,0,uVar2,*(undefined4 *)(param_1 + 0x20),param_3,1);
  param_3 = *(int *)(param_1 + 0x20) + param_3;
  *(int *)(param_1 + 0x20) = param_3;
  if (param_3 <= *(int *)(param_1 + 0x1c)) {
    param_3 = *(int *)(param_1 + 0x1c);
  }
  *(int *)(param_1 + 0x1c) = param_3;
  return;
}



// Address: 4a0c27bc

void FUN_4a0c27bc(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x20) == *(int *)(param_1 + 0x10)) {
    FUN_4a0c25ac(param_1,*(int *)(param_1 + 0x10) << 1);
  }
  iVar2 = *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x20) = iVar2 + 1;
  iVar1 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 8);
  }
  *(undefined1 *)(iVar1 + iVar2) = param_2;
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x1c)) {
    iVar1 = *(int *)(param_1 + 0x1c);
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  return;
}



// Address: 4a0c2818

void FUN_4a0c2818(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_4a0beaec();
  *puVar1 = PTR_PTR_4a0c2848;
  iVar2 = FUN_4a16b5f8(puVar1 + 2,0x20);
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  return;
}



// Address: 4a0c28bc

bool FUN_4a0c28bc(int param_1)

{
  return *(int *)(param_1 + 8) != 0;
}



// Address: 4a0c28cc

void FUN_4a0c28cc(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = FUN_4a14f43c();
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    return;
  }
  return;
}



// Address: 4a0c28f4

int FUN_4a0c28f4(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    iVar1 = FUN_4a14f1b4(param_2,1,param_3,*(undefined4 *)(param_1 + 8));
    if (iVar1 < param_3) {
      *(undefined1 *)(param_1 + 0x14) = 1;
    }
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  return -1;
}



// Address: 4a0c2944

int FUN_4a0c2944(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_DAT_4a0c29c4;
  puVar1 = PTR_DAT_4a0c29c0;
  if (*(char *)(param_1 + 0x14) == '\0') {
    if ((*(int *)PTR_DAT_4a0c29c0 != 0) &&
       (iVar3 = *(int *)PTR_DAT_4a0c29c4, *(int *)PTR_DAT_4a0c29c4 = iVar3 + 1, 0x400 < iVar3 + 1))
    {
      host_s3eDeviceYield_arm(0);
      *(undefined4 *)puVar2 = 0;
      (**(code **)puVar1)();
    }
    iVar3 = FUN_4a14fba4(*(undefined4 *)(param_1 + 8));
    if (iVar3 == -1) {
      *(undefined1 *)(param_1 + 0x14) = 1;
    }
    return iVar3;
  }
  return -1;
}



// Address: 4a0c29c8

bool FUN_4a0c29c8(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      iVar1 = (**(code **)(*param_1 + 0x3c))(param_1);
    }
    else {
      if (param_3 != 2) {
        return false;
      }
      iVar1 = param_1[4];
    }
    param_2 = iVar1 + param_2;
  }
  bVar3 = param_2 < 0;
  iVar1 = param_1[4];
  if (bVar3) {
    param_2 = 0;
  }
  iVar2 = param_2;
  if (iVar1 < param_2) {
    iVar2 = iVar1;
  }
  if (iVar2 < iVar1) {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  iVar2 = FUN_4a14f398(param_1[2],iVar2,0);
  return iVar2 != 0 && (iVar1 >= param_2 && !bVar3);
}



// Address: 4a0c2a6c

void FUN_4a0c2a6c(int param_1)

{
  FUN_4a0be914();
  if (*(int *)(param_1 + 8) != 0) {
    thunk_FUN_4a14e418();
    *(undefined4 *)(param_1 + 8) = 0;
    return;
  }
  return;
}



// Address: 4a0c2a9c

void FUN_4a0c2a9c(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    FUN_4a14f398(*(int *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),0);
    iVar1 = FUN_4a14e47c(*(undefined4 *)(param_1 + 8));
    *(bool *)(param_1 + 0x14) = iVar1 != 0;
    return;
  }
  return;
}



// Address: 4a0c2adc

undefined4 * FUN_4a0c2adc(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_250 [16];
  undefined4 local_240;
  undefined1 auStack_214 [512];
  int *local_14;
  
  puVar1 = (undefined4 *)FUN_4a0be91c();
  *puVar1 = PTR_PTR_4a0c2be8;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 5) = 0;
  local_14 = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  FUN_4a03ed24(param_2[2],auStack_214,0x200,0);
  iVar2 = FUN_4a14eee8(auStack_214,PTR_DAT_4a0c2bec);
  if (iVar2 == 0) {
    *(undefined1 *)(puVar1 + 5) = 1;
    if (param_2 == (int *)0x0) {
      return puVar1;
    }
    iVar2 = (**(code **)(*param_2 + 8))(param_2);
  }
  else {
    puVar1[2] = iVar2;
    puVar1[3] = 0;
    uVar3 = FUN_4a14e568();
    FUN_4a14f428(uVar3,auStack_250);
    puVar1[4] = local_240;
    if (param_2 == (int *)0x0) {
      return puVar1;
    }
    iVar2 = (**(code **)(*param_2 + 8))(param_2);
  }
  if (iVar2 != 0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return puVar1;
}



// Address: 4a0c2bf0

void FUN_4a0c2bf0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = PTR_PTR_4a0c2c34;
    FUN_4a0be914();
    if (param_1[2] != 0) {
      thunk_FUN_4a14e418();
      param_1[2] = 0;
    }
    uVar1 = FUN_4a0be95c(param_1);
    iVar2 = FUN_4a057044();
    FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
    return;
  }
  return;
}



// Address: 4a0c2c38

void FUN_4a0c2c38(undefined4 *param_1)

{
  *param_1 = PTR_PTR_4a0c2c74;
  FUN_4a0be914(param_1);
  if (param_1[2] != 0) {
    thunk_FUN_4a14e418();
    param_1[2] = 0;
  }
  *param_1 = PTR_PTR_4a0be968;
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a0c2c78

void FUN_4a0c2c78(undefined4 *param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_4a0c2c88;
  param_1[1] = param_2;
  *param_1 = puVar1;
  return;
}



// Address: 4a0c2c98

void FUN_4a0c2c98(void)

{
  return;
}



// Address: 4a0c2ca4

bool FUN_4a0c2ca4(int param_1)

{
  return *(int *)(param_1 + 8) != 0;
}



// Address: 4a0c2ce4

undefined4 FUN_4a0c2ce4(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    thunk_FUN_4a14e418();
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return 1;
}



// Address: 4a0c2d5c

undefined4 * FUN_4a0c2d5c(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_210 [512];
  int *local_10;
  
  puVar1 = (undefined4 *)FUN_4a0beaec();
  *puVar1 = PTR_PTR_4a0c2e04;
  puVar1[2] = 0;
  local_10 = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))();
  }
  FUN_4a03ed24(param_2[2],auStack_210,0x200,0);
  uVar2 = FUN_4a14eee8(auStack_210,PTR_DAT_4a0c2e08);
  puVar1[2] = uVar2;
  if ((param_2 != (int *)0x0) && (iVar3 = (**(code **)(*param_2 + 8))(param_2), iVar3 != 0)) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return puVar1;
}



// Address: 4a0c2e50

void FUN_4a0c2e50(undefined4 *param_1)

{
  *param_1 = PTR_PTR_4a0c2e84;
  if (param_1[2] != 0) {
    thunk_FUN_4a14e418();
    param_1[2] = 0;
  }
  *param_1 = PTR_PTR_4a0beb38;
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a0c2ea4

int FUN_4a0c2ea4(void)

{
  int iVar1;
  
  iVar1 = host_s3eAudioGetInt_arm(0);
  return (int)(iVar1 * 100 + ((uint)(iVar1 * 100 >> 0x1f) >> 0x18)) >> 8;
}



// Address: 4a0c2ef0

void FUN_4a0c2ef0(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_4a0c2f28;
  if (*PTR_DAT_4a0c2f28 == '\0') {
    iVar2 = host_s3eAudioGetInt_arm(1);
    if (iVar2 == 2) {
      host_s3eAudioResume_arm();
    }
    *puVar1 = 1;
    return;
  }
  return;
}



// Address: 4a0c2f2c

void FUN_4a0c2f2c(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_4a0c2f64;
  if (*PTR_DAT_4a0c2f64 != '\0') {
    iVar2 = host_s3eAudioGetInt_arm(1);
    if (iVar2 == 1) {
      host_s3eAudioPause_arm();
    }
    *puVar1 = 0;
    return;
  }
  return;
}



// Address: 4a0c2f68

undefined4 FUN_4a0c2f68(void)

{
  undefined4 uVar1;
  
  if (*PTR_DAT_4a0c2f80 == '\0') {
    uVar1 = 100;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Address: 4a0c3068

int * FUN_4a0c3068(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  iVar1 = FUN_4a13daf8();
  iVar2 = FUN_4a13db00(param_1);
  uVar3 = thunk_FUN_4a161570(0x38);
  piVar4 = (int *)FUN_4a0c5088(uVar3,1);
  *piVar4 = (int)PTR_PTR_4a0c3148;
  piVar4[5] = 0;
  piVar4[6] = 0;
  piVar4[7] = 0;
  piVar4[8] = 0;
  piVar4[9] = 0;
  piVar4[10] = 0;
  piVar4[0xb] = 0;
  piVar4[0xc] = 0;
  *(undefined1 *)(piVar4 + 0xd) = 0;
  FUN_4a0c507c(piVar4,iVar1,iVar2);
  *(undefined1 *)(piVar4 + 0xd) = 1;
  if (piVar4[7] != 0) {
    thunk_FUN_4a161530();
    piVar4[7] = 0;
  }
  iVar2 = iVar1 * 4 * iVar2;
  iVar1 = thunk_FUN_4a161570(iVar2);
  piVar4[7] = iVar1;
  FUN_4a001274(iVar1,iVar2);
  uVar3 = (**(code **)(*param_1 + 0x2c))(param_1);
  (**(code **)(*piVar4 + 0x28))(piVar4,uVar3,iVar2);
  return piVar4;
}



// Address: 4a0c314c

undefined4 * FUN_4a0c314c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_34 [24];
  undefined4 local_1c;
  
  uVar3 = thunk_FUN_4a161570(0x38);
  puVar1 = (undefined4 *)FUN_4a0c5088(uVar3,0);
  *puVar1 = PTR_PTR_4a0be720;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined1 *)(puVar1 + 0xd) = 0;
  thunk_FUN_4a161570(0x24);
  iVar2 = FUN_4a0ecbc4();
  FUN_4a14e568(*(undefined4 *)(param_1 + 8));
  uVar3 = FUN_4a01d2b0();
  FUN_4a0ebaa0(iVar2,uVar3);
  puVar1[0xb] = (uint)*(ushort *)(iVar2 + 0x10);
  puVar1[0xc] = (uint)*(ushort *)(iVar2 + 0x12);
  FUN_4a0c507c(puVar1);
  FUN_4a0ecbc4(auStack_34);
  FUN_4a0ecab0(auStack_34,0xe);
  FUN_4a0ebe9c(auStack_34,puVar1[0xb]);
  FUN_4a0ecb88(auStack_34,puVar1[0xc]);
  FUN_4a0e681c(iVar2,auStack_34,0);
  if (iVar2 != 0) {
    FUN_4a0ecbf0(iVar2);
    thunk_FUN_4a161530();
  }
  uVar3 = thunk_FUN_4a161570(puVar1[0xc] * puVar1[0xb] * 4);
  puVar1[7] = uVar3;
  FUN_4a000f84(uVar3,local_1c,puVar1[0xc] * puVar1[0xb] * 4);
  *(undefined1 *)(puVar1 + 0xd) = 1;
  FUN_4a0ecbf0(auStack_34);
  return puVar1;
}



// Address: 4a0c3168

undefined4 * FUN_4a0c3168(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  uVar1 = thunk_FUN_4a161570(0xc);
  iVar2 = FUN_4a13de84(*(undefined4 *)(param_1 + 8),*PTR_DAT_4a0c3204);
  if (iVar2 == -1) {
    piVar3 = (int *)0x0;
  }
  else if (iVar2 < 2) {
    uVar4 = thunk_FUN_4a161570(0x14);
    piVar3 = (int *)FUN_4a0c707c(uVar4,PTR_DAT_4a0c3208);
  }
  else {
    piVar3 = (int *)FUN_4a13e624(*(undefined4 *)(param_1 + 8),0,iVar2);
  }
  puVar5 = (undefined4 *)FUN_4a0c6bc0(uVar1);
  *puVar5 = PTR_PTR_4a0c320c;
  puVar5[2] = piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
  }
  return puVar5;
}



// Address: 4a0c3210

undefined4 FUN_4a0c3210(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined1 auStack_11c [256];
  undefined1 auStack_1c [8];
  int *local_14;
  
  uVar2 = thunk_FUN_4a161570(0x14);
  uVar2 = FUN_4a0c707c(uVar2,&DAT_4a0c3440);
  FUN_4a0c4300(auStack_1c,uVar2,param_1);
  puVar1 = PTR_DAT_4a0c3444;
  iVar3 = FUN_4a13de84(local_14,*PTR_DAT_4a0c3444);
  piVar4 = local_14;
  if (-1 < iVar3) {
    uVar2 = FUN_4a13e1b4();
    piVar4 = (int *)FUN_4a13e624(local_14,iVar3 + 1,uVar2);
  }
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))();
  }
  iVar3 = FUN_4a13de84(local_14,*puVar1);
  if (iVar3 == -1) {
    piVar5 = (int *)0x0;
  }
  else if (iVar3 < 2) {
    uVar2 = thunk_FUN_4a161570(0x14);
    piVar5 = (int *)FUN_4a0c707c(uVar2,PTR_DAT_4a0c3448);
  }
  else {
    piVar5 = (int *)FUN_4a13e624(local_14,0,iVar3);
  }
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))();
  }
  uVar2 = FUN_4a047638();
  iVar3 = FUN_4a0489c8(uVar2,piVar4[2],0,piVar5[2]);
  if (iVar3 == 0) {
    if ((piVar5 != (int *)0x0) && (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 != 0)) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    if ((piVar4 != (int *)0x0) && (iVar3 = (**(code **)(*piVar4 + 8))(piVar4), iVar3 != 0)) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    FUN_4a0c4860(auStack_1c);
    return 0;
  }
  FUN_4a055038(iVar3,1,auStack_11c,0x100);
  FUN_4a05a26c(iVar3);
  uVar2 = thunk_FUN_4a161570(0x14);
  uVar2 = FUN_4a0c707c(uVar2,auStack_11c);
  if ((piVar5 != (int *)0x0) && (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  if ((piVar4 != (int *)0x0) && (iVar3 = (**(code **)(*piVar4 + 8))(piVar4), iVar3 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  FUN_4a0c4860(auStack_1c);
  return uVar2;
}



// Address: 4a0c344c

void FUN_4a0c344c(void)

{
  return;
}



// Address: 4a0c3450

undefined4 * FUN_4a0c3450(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 in_r3;
  undefined4 unaff_r4;
  
  thunk_FUN_4a161570(0x14);
  puVar1 = PTR_DAT_4a0c3468;
  puVar2 = (undefined4 *)FUN_4a0c6bc0();
  *puVar2 = PTR_PTR_4a0c70cc;
  puVar2[2] = 0;
  *(undefined1 *)(puVar2 + 3) = 0;
  puVar2[4] = 0;
  if (puVar1 != (undefined *)0x0) {
    uVar3 = FUN_4a04d4d0(0,puVar1,0,in_r3,unaff_r4);
    puVar2[2] = uVar3;
  }
  return puVar2;
}



// Address: 4a0c346c

int * FUN_4a0c346c(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  uVar1 = thunk_FUN_4a161570(0x14);
  piVar2 = (int *)FUN_4a0c707c(uVar1,PTR_DAT_4a0c3580);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))();
  }
  uVar1 = thunk_FUN_4a161570(0xc);
  piVar3 = (int *)FUN_4a0c4300(uVar1,piVar2,param_1);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
  }
  piVar5 = (int *)piVar3[2];
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))(piVar5);
  }
  if ((piVar3 != (int *)0x0) && (iVar4 = (**(code **)(*piVar3 + 8))(piVar3), iVar4 != 0)) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
  }
  if ((piVar2 != (int *)0x0) && (iVar4 = (**(code **)(*piVar2 + 8))(piVar2), iVar4 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  return piVar5;
}



// Address: 4a0c3584

/* WARNING: Type propagation algorithm not settling */

int FUN_4a0c3584(int *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  undefined1 auStack_54 [8];
  int local_4c;
  undefined1 auStack_48 [12];
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  undefined1 auStack_2c [8];
  int *local_24;
  int *local_20;
  
  local_20 = param_1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0xc))(param_1);
  }
  puVar4 = (undefined4 *)FUN_4a0c6bc0(auStack_2c);
  puVar1 = PTR_PTR_4a0c3970;
  puVar4[2] = param_1;
  *puVar4 = puVar1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0xc))();
  }
  puVar2 = PTR_DAT_4a0c3974;
  iVar5 = FUN_4a13de84(local_24,*PTR_DAT_4a0c3974);
  if (iVar5 == -1) {
    local_30 = (int *)0x0;
  }
  else if (iVar5 < 2) {
    uVar6 = thunk_FUN_4a161570(0x14);
    local_30 = (int *)FUN_4a0c707c(uVar6,PTR_DAT_4a0c3978);
  }
  else {
    local_30 = (int *)FUN_4a13e624(local_24,0,iVar5);
  }
  if (local_30 != (int *)0x0) {
    (**(code **)(*local_30 + 0xc))();
  }
  iVar5 = FUN_4a13de84(local_24,*puVar2);
  if (-1 < iVar5) {
    uVar6 = FUN_4a13e1b4();
    local_24 = (int *)FUN_4a13e624(local_24,iVar5 + 1,uVar6);
  }
  local_34 = local_24;
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 0xc))();
  }
  local_38 = (int *)0x0;
  if (param_2 != 0) {
    FUN_4a0bedd4(auStack_48);
    FUN_4a0beb58(auStack_48,s_l10n__4a0c397c);
    FUN_4a0beb78(auStack_48,param_2);
    piVar7 = (int *)FUN_4a13cff4(auStack_48);
    piVar9 = local_38;
    if (local_38 != piVar7) {
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0xc))(piVar7);
      }
      piVar3 = local_38;
      piVar9 = piVar7;
      if ((local_38 != (int *)0x0) && (iVar5 = (**(code **)(*local_38 + 8))(local_38), iVar5 != 0))
      {
        (**(code **)(*piVar3 + 4))(piVar3);
      }
    }
    local_38 = piVar9;
    FUN_4a0bee50(auStack_48);
  }
  uVar6 = thunk_FUN_4a161570(0x14);
  local_3c = (int *)FUN_4a0c707c(uVar6,PTR_DAT_4a0c3984);
  if (local_3c != (int *)0x0) {
    (**(code **)(*local_3c + 0xc))();
  }
  if (local_38 != (int *)0x0) {
    FUN_4a0bedd4(auStack_48);
    uVar6 = FUN_4a0bebec(auStack_48,&local_3c);
    FUN_4a0bec10(uVar6,*puVar2);
    if (local_30 != (int *)0x0) {
      uVar6 = FUN_4a0bebec(auStack_48,&local_30);
      FUN_4a0bec10(uVar6,*puVar2);
    }
    uVar6 = FUN_4a0bebec(auStack_48,&local_38);
    FUN_4a0bec10(uVar6,*puVar2);
    piVar9 = local_34;
    uVar6 = FUN_4a13cff4(auStack_48);
    FUN_4a0c4300(auStack_54,uVar6,piVar9);
    iVar5 = 0;
    if (local_4c != 0) {
      iVar5 = *(int *)(local_4c + 8);
    }
    if ((local_4c != 0 && iVar5 != 0) && (iVar5 = FUN_4a13e1b4(local_4c), 0 < iVar5)) {
      FUN_4a13e59c(local_4c,PTR_DAT_4a0c3988);
      iVar5 = host_s3eFileCheckExists_arm();
      if (iVar5 != 0) {
        uVar6 = thunk_FUN_4a161570(0x14);
        iVar5 = FUN_4a0c70d0(uVar6,local_4c);
        FUN_4a0c4860(auStack_54);
        FUN_4a0bee50(auStack_48);
        piVar9 = local_3c;
        if ((local_3c != (int *)0x0) && (iVar8 = (**(code **)(*local_3c + 8))(local_3c), iVar8 != 0)
           ) {
          (**(code **)(*piVar9 + 4))(piVar9);
        }
        piVar9 = local_38;
        if ((local_38 != (int *)0x0) && (iVar8 = (**(code **)(*local_38 + 8))(local_38), iVar8 != 0)
           ) {
          (**(code **)(*piVar9 + 4))(piVar9);
        }
        piVar9 = local_34;
        if ((local_34 != (int *)0x0) && (iVar8 = (**(code **)(*local_34 + 8))(local_34), iVar8 != 0)
           ) {
          (**(code **)(*piVar9 + 4))(piVar9);
        }
        piVar9 = local_30;
        if ((local_30 != (int *)0x0) && (iVar8 = (**(code **)(*local_30 + 8))(local_30), iVar8 != 0)
           ) {
          (**(code **)(*piVar9 + 4))(piVar9);
        }
        FUN_4a0c4860(auStack_2c);
        if (param_1 == (int *)0x0) {
          return iVar5;
        }
        iVar8 = (**(code **)(*param_1 + 8))(param_1);
        goto joined_r0x4a0c3ef8;
      }
    }
    FUN_4a0c4860(auStack_54);
    FUN_4a0bee50(auStack_48);
    if (local_38 != (int *)0x0) {
      FUN_4a0bedd4(auStack_48);
      FUN_4a0becb8(auStack_48,0);
      if (local_30 != (int *)0x0) {
        uVar6 = FUN_4a0bebec(auStack_48,&local_30);
        FUN_4a0bec10(uVar6,*puVar2);
      }
      FUN_4a0beb78(auStack_48,param_2);
      FUN_4a0beb58(auStack_48,s__lproj_4a0c3d70);
      FUN_4a0bec10(auStack_48,*puVar2);
      FUN_4a0bebec(auStack_48,&local_34);
      piVar9 = (int *)FUN_4a13cff4(auStack_48);
      puVar4 = (undefined4 *)FUN_4a0c6bc0(auStack_54);
      puVar4[2] = piVar9;
      *puVar4 = puVar1;
      if (piVar9 != (int *)0x0) {
        (**(code **)(*piVar9 + 0xc))();
      }
      iVar5 = 0;
      if (local_4c != 0) {
        iVar5 = *(int *)(local_4c + 8);
      }
      if ((local_4c != 0 && iVar5 != 0) && (iVar5 = FUN_4a13e1b4(local_4c), 0 < iVar5)) {
        FUN_4a13e59c(local_4c,PTR_DAT_4a0c3988);
        iVar5 = host_s3eFileCheckExists_arm();
        if (iVar5 != 0) {
          iVar5 = FUN_4a13cff4(auStack_48);
          FUN_4a0c4860(auStack_54);
          FUN_4a0bee50(auStack_48);
          piVar9 = local_3c;
          if ((local_3c != (int *)0x0) &&
             (iVar8 = (**(code **)(*local_3c + 8))(local_3c), iVar8 != 0)) {
            (**(code **)(*piVar9 + 4))(piVar9);
          }
          piVar9 = local_38;
          if ((local_38 != (int *)0x0) &&
             (iVar8 = (**(code **)(*local_38 + 8))(local_38), iVar8 != 0)) {
            (**(code **)(*piVar9 + 4))(piVar9);
          }
          piVar9 = local_34;
          if ((local_34 != (int *)0x0) &&
             (iVar8 = (**(code **)(*local_34 + 8))(local_34), iVar8 != 0)) {
            (**(code **)(*piVar9 + 4))(piVar9);
          }
          piVar9 = local_30;
          if ((local_30 != (int *)0x0) &&
             (iVar8 = (**(code **)(*local_30 + 8))(local_30), iVar8 != 0)) {
            (**(code **)(*piVar9 + 4))(piVar9);
          }
          FUN_4a0c4860(auStack_2c);
          if (param_1 == (int *)0x0) {
            return iVar5;
          }
          iVar8 = (**(code **)(*param_1 + 8))(param_1);
          goto joined_r0x4a0c3ef8;
        }
      }
      FUN_4a0c4860(auStack_54);
      FUN_4a0bee50(auStack_48);
      if (local_38 != (int *)0x0) {
        FUN_4a0bedd4(auStack_48);
        FUN_4a0becb8(auStack_48,0);
        if (local_30 != (int *)0x0) {
          uVar6 = FUN_4a0bebec(auStack_48,&local_30);
          FUN_4a0bec10(uVar6,*puVar2);
        }
        uVar6 = FUN_4a0bebec(auStack_48,&local_38);
        FUN_4a0bec10(uVar6,*puVar2);
        FUN_4a0bebec(auStack_48,&local_34);
        FUN_4a13cff4(auStack_48);
        iVar5 = FUN_4a0c3210();
        if (iVar5 != 0) {
          FUN_4a0bee50(auStack_48);
          piVar9 = local_3c;
          if ((local_3c != (int *)0x0) &&
             (iVar8 = (**(code **)(*local_3c + 8))(local_3c), iVar8 != 0)) {
            (**(code **)(*piVar9 + 4))(piVar9);
          }
          piVar9 = local_38;
          if ((local_38 != (int *)0x0) &&
             (iVar8 = (**(code **)(*local_38 + 8))(local_38), iVar8 != 0)) {
            (**(code **)(*piVar9 + 4))(piVar9);
          }
          piVar9 = local_34;
          if ((local_34 != (int *)0x0) &&
             (iVar8 = (**(code **)(*local_34 + 8))(local_34), iVar8 != 0)) {
            (**(code **)(*piVar9 + 4))(piVar9);
          }
          piVar9 = local_30;
          if ((local_30 != (int *)0x0) &&
             (iVar8 = (**(code **)(*local_30 + 8))(local_30), iVar8 != 0)) {
            (**(code **)(*piVar9 + 4))(piVar9);
          }
          FUN_4a0c4860(auStack_2c);
          if (param_1 == (int *)0x0) {
            return iVar5;
          }
          iVar8 = (**(code **)(*param_1 + 8))(param_1);
          goto joined_r0x4a0c3ef8;
        }
        FUN_4a0bee50(auStack_48);
      }
    }
  }
  FUN_4a0bedd4(auStack_48);
  FUN_4a0becb8(auStack_48,0);
  if (local_30 != (int *)0x0) {
    uVar6 = FUN_4a0bebec(auStack_48,&local_30);
    FUN_4a0bec10(uVar6,*puVar2);
  }
  FUN_4a0bebec(auStack_48,&local_34);
  FUN_4a13cff4(auStack_48);
  iVar5 = FUN_4a0c3210();
  if (iVar5 != 0) {
    FUN_4a0bee50(auStack_48);
    piVar9 = local_3c;
    if ((local_3c != (int *)0x0) && (iVar8 = (**(code **)(*local_3c + 8))(local_3c), iVar8 != 0)) {
      (**(code **)(*piVar9 + 4))(piVar9);
    }
    piVar9 = local_38;
    if ((local_38 != (int *)0x0) && (iVar8 = (**(code **)(*local_38 + 8))(local_38), iVar8 != 0)) {
      (**(code **)(*piVar9 + 4))(piVar9);
    }
    piVar9 = local_34;
    if ((local_34 != (int *)0x0) && (iVar8 = (**(code **)(*local_34 + 8))(local_34), iVar8 != 0)) {
      (**(code **)(*piVar9 + 4))(piVar9);
    }
    piVar9 = local_30;
    if ((local_30 != (int *)0x0) && (iVar8 = (**(code **)(*local_30 + 8))(local_30), iVar8 != 0)) {
      (**(code **)(*piVar9 + 4))(piVar9);
    }
    FUN_4a0c4860(auStack_2c);
    if (param_1 == (int *)0x0) {
      return iVar5;
    }
    iVar8 = (**(code **)(*param_1 + 8))(param_1);
joined_r0x4a0c3ef8:
    if (iVar8 != 0) {
      (**(code **)(*param_1 + 4))(param_1);
    }
    return iVar5;
  }
  FUN_4a0bee50(auStack_48);
  if (local_38 != (int *)0x0) {
    FUN_4a0bedd4(auStack_48);
    FUN_4a0becb8(auStack_48,0);
    if (local_30 != (int *)0x0) {
      uVar6 = FUN_4a0bebec(auStack_48,&local_30);
      FUN_4a0bec10(uVar6,*puVar2);
    }
    uVar6 = FUN_4a0bebec(auStack_48,&local_38);
    FUN_4a0bec10(uVar6,*puVar2);
    FUN_4a0bebec(auStack_48,&local_34);
    piVar9 = (int *)FUN_4a13cff4(auStack_48);
    puVar4 = (undefined4 *)FUN_4a0c6bc0(auStack_54);
    puVar4[2] = piVar9;
    *puVar4 = puVar1;
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 0xc))();
    }
    iVar5 = 0;
    if (local_4c != 0) {
      iVar5 = *(int *)(local_4c + 8);
    }
    if ((local_4c != 0 && iVar5 != 0) && (iVar5 = FUN_4a13e1b4(local_4c), 0 < iVar5)) {
      FUN_4a13e59c(local_4c,PTR_DAT_4a0c3988);
      iVar5 = host_s3eFileCheckExists_arm();
      if (iVar5 != 0) {
        iVar5 = FUN_4a13cff4(auStack_48);
        FUN_4a0c4860(auStack_54);
        FUN_4a0bee50(auStack_48);
        piVar9 = local_3c;
        if ((local_3c != (int *)0x0) && (iVar8 = (**(code **)(*local_3c + 8))(local_3c), iVar8 != 0)
           ) {
          (**(code **)(*piVar9 + 4))(piVar9);
        }
        piVar9 = local_38;
        if ((local_38 != (int *)0x0) && (iVar8 = (**(code **)(*local_38 + 8))(local_38), iVar8 != 0)
           ) {
          (**(code **)(*piVar9 + 4))(piVar9);
        }
        piVar9 = local_34;
        if ((local_34 != (int *)0x0) && (iVar8 = (**(code **)(*local_34 + 8))(local_34), iVar8 != 0)
           ) {
          (**(code **)(*piVar9 + 4))(piVar9);
        }
        piVar9 = local_30;
        if ((local_30 != (int *)0x0) && (iVar8 = (**(code **)(*local_30 + 8))(local_30), iVar8 != 0)
           ) {
          (**(code **)(*piVar9 + 4))(piVar9);
        }
        FUN_4a0c4860(auStack_2c);
        if (param_1 == (int *)0x0) {
          return iVar5;
        }
        iVar8 = (**(code **)(*param_1 + 8))(param_1);
        goto joined_r0x4a0c3ef8;
      }
    }
    FUN_4a0c4860(auStack_54);
    FUN_4a0bee50(auStack_48);
  }
  piVar9 = local_3c;
  if ((local_3c != (int *)0x0) && (iVar5 = (**(code **)(*local_3c + 8))(local_3c), iVar5 != 0)) {
    (**(code **)(*piVar9 + 4))(piVar9);
  }
  piVar9 = local_38;
  if ((local_38 != (int *)0x0) && (iVar5 = (**(code **)(*local_38 + 8))(local_38), iVar5 != 0)) {
    (**(code **)(*piVar9 + 4))(piVar9);
  }
  piVar9 = local_34;
  if ((local_34 != (int *)0x0) && (iVar5 = (**(code **)(*local_34 + 8))(local_34), iVar5 != 0)) {
    (**(code **)(*piVar9 + 4))(piVar9);
  }
  piVar9 = local_30;
  if ((local_30 != (int *)0x0) && (iVar5 = (**(code **)(*local_30 + 8))(local_30), iVar5 != 0)) {
    (**(code **)(*piVar9 + 4))(piVar9);
  }
  FUN_4a0c4860(auStack_2c);
  if ((param_1 != (int *)0x0) && (iVar5 = (**(code **)(*param_1 + 8))(param_1), iVar5 != 0)) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  return 0;
}



// Address: 4a0c4278

bool FUN_4a0c4278(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    param_2 = *(int *)(iVar1 + 8);
  }
  if ((iVar1 != 0 && param_2 != 0) && (iVar1 = FUN_4a13e1b4(), 0 < iVar1)) {
    FUN_4a13e59c(*(undefined4 *)(param_1 + 8),PTR_DAT_4a0c42cc);
    iVar1 = host_s3eFileCheckExists_arm();
    return iVar1 != 0;
  }
  return false;
}



// Address: 4a0c42d0

int FUN_4a0c42d0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_4a13e59c(*(undefined4 *)(param_1 + 8),PTR_DAT_4a0c42f4);
  uVar1 = host_s3eFileMakeDirectory_arm();
  iVar2 = 1 - uVar1;
  if (1 < uVar1) {
    iVar2 = 0;
  }
  return iVar2;
}



// Address: 4a0c42f8

undefined4 FUN_4a0c42f8(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// Address: 4a0c4300

undefined4 * FUN_4a0c4300(undefined4 param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 auStack_28 [12];
  int *local_1c;
  int *local_18;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0c44a8;
  puVar1[2] = 0;
  local_18 = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))();
  }
  local_1c = param_3;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 0xc))();
  }
  FUN_4a0bedd4(auStack_28);
  FUN_4a0bebec(auStack_28,&local_18);
  iVar2 = FUN_4a13e1b4(local_18);
  uVar3 = FUN_4a13dfe4(local_18,iVar2 + -1);
  if (uVar3 != (byte)*PTR_DAT_4a0c44ac) {
    FUN_4a0bec10(auStack_28);
  }
  FUN_4a0bebec(auStack_28,&local_1c);
  piVar5 = puVar1 + 2;
  piVar4 = (int *)FUN_4a13cff4(auStack_28);
  if ((int *)*piVar5 != piVar4) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))(piVar4);
    }
    piVar6 = (int *)*piVar5;
    if ((piVar6 != (int *)0x0) && (iVar2 = (**(code **)(*piVar6 + 8))(piVar6), iVar2 != 0)) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    *piVar5 = (int)piVar4;
  }
  FUN_4a0bee50(auStack_28);
  piVar4 = local_1c;
  if ((local_1c != (int *)0x0) && (iVar2 = (**(code **)(*local_1c + 8))(local_1c), iVar2 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  piVar4 = local_18;
  if ((local_18 != (int *)0x0) && (iVar2 = (**(code **)(*local_18 + 8))(local_18), iVar2 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  return puVar1;
}



// Address: 4a0c44b0

undefined4 * FUN_4a0c44b0(undefined4 param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 auStack_28 [12];
  int *local_1c;
  int *local_18;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0c4674;
  puVar1[2] = 0;
  local_18 = *(int **)(param_2 + 8);
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 0xc))();
  }
  local_1c = param_3;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 0xc))();
  }
  FUN_4a0bedd4(auStack_28);
  if ((local_18 != (int *)0x0) && (iVar2 = FUN_4a13e1b4(), 0 < iVar2)) {
    FUN_4a0bebec(auStack_28,&local_18);
    iVar2 = FUN_4a13e1b4(local_18);
    uVar3 = FUN_4a13dfe4(local_18,iVar2 + -1);
    if (uVar3 != (byte)*PTR_DAT_4a0c4678) {
      FUN_4a0bec10(auStack_28);
    }
  }
  FUN_4a0bebec(auStack_28,&local_1c);
  piVar5 = puVar1 + 2;
  piVar4 = (int *)FUN_4a13cff4(auStack_28);
  if ((int *)*piVar5 != piVar4) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))(piVar4);
    }
    piVar6 = (int *)*piVar5;
    if ((piVar6 != (int *)0x0) && (iVar2 = (**(code **)(*piVar6 + 8))(piVar6), iVar2 != 0)) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    *piVar5 = (int)piVar4;
  }
  FUN_4a0bee50(auStack_28);
  piVar4 = local_1c;
  if ((local_1c != (int *)0x0) && (iVar2 = (**(code **)(*local_1c + 8))(local_1c), iVar2 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  piVar4 = local_18;
  if ((local_18 != (int *)0x0) && (iVar2 = (**(code **)(*local_18 + 8))(local_18), iVar2 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  return puVar1;
}



// Address: 4a0c467c

undefined4 * FUN_4a0c467c(undefined4 param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 auStack_28 [12];
  int *local_1c;
  int *local_18;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0c4840;
  puVar1[2] = 0;
  local_18 = *(int **)(param_2 + 8);
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 0xc))();
  }
  local_1c = param_3;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 0xc))();
  }
  FUN_4a0bedd4(auStack_28);
  if ((local_18 != (int *)0x0) && (iVar2 = FUN_4a13e1b4(), 0 < iVar2)) {
    FUN_4a0bebec(auStack_28,&local_18);
    iVar2 = FUN_4a13e1b4(local_18);
    uVar3 = FUN_4a13dfe4(local_18,iVar2 + -1);
    if (uVar3 != (byte)*PTR_DAT_4a0c4844) {
      FUN_4a0bec10(auStack_28);
    }
  }
  FUN_4a0bebec(auStack_28,&local_1c);
  piVar5 = puVar1 + 2;
  piVar4 = (int *)FUN_4a13cff4(auStack_28);
  if ((int *)*piVar5 != piVar4) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))(piVar4);
    }
    piVar6 = (int *)*piVar5;
    if ((piVar6 != (int *)0x0) && (iVar2 = (**(code **)(*piVar6 + 8))(piVar6), iVar2 != 0)) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    *piVar5 = (int)piVar4;
  }
  FUN_4a0bee50(auStack_28);
  piVar4 = local_1c;
  if ((local_1c != (int *)0x0) && (iVar2 = (**(code **)(*local_1c + 8))(local_1c), iVar2 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  piVar4 = local_18;
  if ((local_18 != (int *)0x0) && (iVar2 = (**(code **)(*local_18 + 8))(local_18), iVar2 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  return puVar1;
}




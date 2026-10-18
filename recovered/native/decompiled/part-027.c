/* AUTOMATED DECOMPILER OUTPUT. Not original source, not a buildable game.
 * Function boundaries, types, indirect calls, and data still require validation. */

// Address: 4a171a94

/* WARNING: Removing unreachable block (ram,0x4a1729d8) */
/* WARNING: Removing unreachable block (ram,0x4a1729ec) */
/* WARNING: Removing unreachable block (ram,0x4a1728bc) */
/* WARNING: Removing unreachable block (ram,0x4a1728ac) */
/* WARNING: Removing unreachable block (ram,0x4a1729e0) */
/* WARNING: Removing unreachable block (ram,0x4a17289c) */

ulonglong FUN_4a171a94(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  
  if ((int)(param_1 ^ param_2) < 0) {
    param_2 = param_2 ^ 0x80000000;
    if (param_1 < param_2) {
      uVar2 = param_1 - param_2 ^ 0x80000000;
      param_1 = param_1 - uVar2;
      param_2 = param_2 + uVar2;
    }
    uVar2 = param_1 >> 0x17;
    uVar5 = uVar2 - (param_2 >> 0x17);
    if ((param_2 & 0x7f800000) != 0 && (uVar2 & 0xff) != 0xff) {
      uVar3 = param_1 << 8 | 0x80000000;
      param_2 = param_2 << 8;
      uVar1 = uVar3 - ((param_2 | 0x80000000) >> (uVar5 & 0xff));
      if ((int)uVar1 < 0) {
        bVar8 = (bool)((byte)(uVar1 >> 7) & 1);
        uVar2 = (uVar1 >> 8) + (uVar2 - 1) * 0x800000 + (uint)bVar8;
        if (!bVar8) {
          return CONCAT44(param_2,uVar2) | 0x8000000000000000;
        }
        if ((uVar1 & 0x7f) != 0) {
          return CONCAT44(param_2,uVar2) | 0x8000000000000000;
        }
      }
      else {
        bVar7 = (uVar2 & 0xfe) == 0;
        bVar8 = false;
        if (!bVar7) {
          uVar3 = uVar1 * 2;
          bVar8 = (int)uVar3 < 0;
          bVar7 = uVar3 == 0;
        }
        if (!bVar8) {
          if (bVar7) {
            if (uVar1 >> 7 == 0) {
              return (ulonglong)param_2 << 0x20 | 0x8000000000000000;
            }
            return CONCAT44(param_2,(param_1 >> 0x1f) << 0x1f) | 0x8000000000000000;
          }
          if (uVar3 == 0) {
            return (ulonglong)param_2 << 0x20 | 0x8000000000000000;
          }
          uVar5 = uVar3;
          uVar1 = uVar2;
          if (uVar3 >> 0x17 == 0) {
            uVar5 = uVar3 << 8;
            uVar1 = uVar2 - 8;
            if ((uVar3 & 0xffffff) >> 0xf == 0) {
              uVar5 = uVar3 << 0x10;
              uVar1 = uVar2 - 0x10;
            }
          }
          if ((uVar5 & 0x78000000) != 0) {
            uVar5 = uVar5 >> 4;
            uVar1 = uVar1 + 4;
          }
          if ((uVar5 & 0x6000000) != 0) {
            uVar5 = uVar5 >> 2;
            uVar1 = uVar1 + 2;
          }
          uVar1 = uVar1 - ((uVar5 < 0x1000000) + 9);
          if (uVar5 >= 0x1000000) {
            uVar5 = uVar5 >> 1;
          }
          if ((uVar2 ^ uVar1) >> 8 == 0) {
            return CONCAT44(param_2,uVar5 + uVar1 * 0x800000) | 0x8000000000000000;
          }
          return CONCAT44(param_2,(param_1 >> 0x1f) << 0x1f) | 0x8000000000000000;
        }
        bVar8 = (bool)((byte)(uVar3 >> 7) & 1);
        uVar2 = ((int)uVar3 >> 8) + uVar2 * 0x800000 + (uint)bVar8;
        if (!bVar8) {
          return CONCAT44(param_2,uVar2) | 0x8000000000000000;
        }
        if ((uVar1 & 0x3f) != 0) {
          return CONCAT44(param_2,uVar2) | 0x8000000000000000;
        }
      }
      iVar4 = (param_2 | 0x80000000) << (0x20 - uVar5 & 0xff);
      if (iVar4 == 0) {
        uVar2 = uVar2 & 0xfffffffe;
      }
      else {
        uVar2 = uVar2 - 1;
      }
      return CONCAT44(iVar4,uVar2);
    }
    if ((uVar2 & 0xff) != 0xff) {
      if ((param_1 & 0x7f800000) == 0) {
        param_1 = 0;
      }
      return CONCAT44(param_2,param_1);
    }
    uVar2 = param_1 * 2;
    uVar5 = 0x4000002;
    if (param_2 << 1 < 0xff000001 && uVar2 < 0xff000001) {
      if (uVar2 == param_2 * 2) {
        if ((int)(param_1 ^ param_2) < 0) {
          return CONCAT44(param_2,param_1);
        }
        return CONCAT44(param_2,DAT_4a172724);
      }
      if (uVar2 == 0xff000000) {
        return CONCAT44(param_2,param_1);
      }
      return CONCAT44(param_2,param_2) ^ 0x80000000;
    }
LAB_4a171b9c:
    uVar5 = uVar5 & 0xf;
    if (uVar5 == 9) {
      return (ulonglong)param_2 << 0x20;
    }
    if (uVar5 != 10) {
      if (uVar5 == 8) {
        return CONCAT44(param_2,param_2 & 0xff000000 |
                                DAT_4a171ba4 >> 0x1d | (param_2 & 0xffffff) << 3);
      }
      return CONCAT44(param_2,DAT_4a171ba4);
    }
    return CONCAT44(param_2,DAT_4a171ba4);
  }
  iVar4 = param_1 - param_2;
  if (param_1 < param_2) {
    param_1 = param_1 - iVar4;
    param_2 = param_2 + iVar4;
  }
  uVar2 = param_1 >> 0x17;
  uVar5 = uVar2 - (param_2 >> 0x17);
  if ((param_2 & 0x7f800000) == 0 || (uVar2 & 0xff) == 0xff) {
    if ((uVar2 & 0xff) != 0xff) {
      if ((param_1 & 0x7f800000) == 0) {
        param_1 = param_1 & 0x80000000;
      }
      return CONCAT44(param_2,param_1);
    }
    uVar2 = param_1 * 2;
    uVar5 = 0x4000001;
    if (param_2 << 1 < 0xff000001 && uVar2 < 0xff000001) {
      if (uVar2 == param_2 * 2) {
        if (-1 < (int)(param_1 ^ param_2)) {
          return CONCAT44(param_2,param_1);
        }
        return CONCAT44(param_2,DAT_4a171b98);
      }
      if (uVar2 == 0xff000000) {
        return CONCAT44(param_2,param_1);
      }
      return CONCAT44(param_2,param_2);
    }
    goto LAB_4a171b9c;
  }
  uVar1 = param_1 << 8 | 0x80000000;
  param_2 = param_2 << 8;
  uVar3 = (param_2 | 0x80000000) >> (uVar5 & 0xff);
  uVar6 = uVar1 + uVar3;
  if (CARRY4(uVar1,uVar3)) {
    uVar3 = uVar6 >> 1 | 0x80000000;
    bVar8 = (bool)((byte)(uVar3 >> 7) & 1);
    uVar3 = uVar3 >> 8;
    uVar2 = uVar3 + uVar2 * 0x800000 + (uint)bVar8;
    if (bVar8) {
      uVar3 = uVar6 & 0xff;
    }
    uVar1 = uVar2 * 2;
    if (uVar3 != 0) {
      if (uVar1 < 0xff000000) {
        return CONCAT44(param_2,uVar2) | 0x8000000000000000;
      }
      goto LAB_4a171b0c;
    }
  }
  else {
    bVar8 = (bool)((byte)(uVar6 >> 7) & 1);
    uVar2 = (uVar6 >> 8) + (uVar2 - 1) * 0x800000 + (uint)bVar8;
    if (!bVar8) {
      return CONCAT44(param_2,uVar2) | 0x8000000000000000;
    }
    uVar1 = uVar2 * 2;
    if ((uVar6 & 0x7f) != 0) {
      bVar8 = 0xfeffffff < uVar1;
    }
    if (!bVar8) {
      return CONCAT44(param_2,uVar2) | 0x8000000000000000;
    }
  }
  iVar4 = (param_2 | 0x80000000) << (0x20 - uVar5 & 0xff);
  if (iVar4 == 0) {
    uVar2 = uVar2 & 0xfffffffe;
  }
  if (uVar1 < 0xff000000) {
    return CONCAT44(iVar4,uVar2);
  }
LAB_4a171b0c:
  uVar2 = uVar2 + 0xa0000000 >> 0x17;
  return CONCAT44(uVar2,(uVar2 | 0xff) << 0x17) | 0xff00000000;
}



// Address: 4a171bb8

ulonglong FUN_4a171bb8(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  
  uVar5 = param_1 >> 7 & 0xff0000;
  bVar10 = uVar5 == 0;
  if (!bVar10) {
    param_4 = param_2 >> 7 & 0xff0000;
    bVar10 = param_4 == 0;
  }
  if (!bVar10) {
    bVar10 = uVar5 == 0xff0000;
  }
  if (!bVar10) {
    bVar10 = param_4 == 0xff0000;
  }
  if (!bVar10) {
    if ((int)(param_1 ^ param_2) < 0) {
      uVar5 = uVar5 | 0x100;
    }
    uVar4 = param_1 & 0xffffff | 0x800000;
    uVar2 = param_2 & 0xffffff | 0x800000;
    uVar7 = (uint)*(byte *)(0x4a171d28 - (uVar2 >> 0x11));
    bVar10 = uVar2 <= uVar4;
    uVar1 = -uVar2;
    iVar8 = uVar7 * 2;
    if (!bVar10) {
      uVar4 = uVar4 << 1;
    }
    uVar6 = (uVar5 - param_4) + 0x7d0000;
    iVar8 = uVar7 * 0x100 + (((int)(uVar1 * iVar8) >> 4) * iVar8 >> 0x15);
    uVar5 = iVar8 * (uVar4 >> 8) >> 0x14;
    uVar7 = uVar1 * uVar5 + uVar4 * 0x800;
    uVar9 = uVar6 & 0x100;
    uVar6 = uVar6 + ((int)uVar6 >> 0x10) + (uint)bVar10;
    uVar4 = iVar8 * (uVar7 >> 8) >> 0x13;
    uVar7 = uVar1 * uVar4 + uVar7 * 0x1000;
    bVar10 = CARRY4(uVar7,uVar1);
    if (bVar10) {
      uVar7 = uVar7 + uVar1;
    }
    if (uVar7 != 0) {
      uVar9 = uVar9 | 0x40000002;
    }
    bVar12 = CARRY4(uVar1,uVar7 * 2);
    bVar11 = uVar7 * 2 == uVar2;
    if (bVar12) {
      uVar9 = uVar9 | 0x40000001;
    }
    if (bVar11) {
      uVar9 = uVar9 | 4;
    }
    uVar5 = uVar4 + uVar5 * 0x1000 + (uint)bVar10 + uVar6 * 0x800000 + (uint)bVar12;
    if (!bVar11) {
      bVar12 = 0xfbffff < uVar6;
    }
    if (!bVar12) {
      return CONCAT44(uVar9,uVar5) | 0x800000000;
    }
    uVar4 = uVar9 | 8 | uVar5 * -0x80000000;
    if (bVar11 || uVar6 == 0xfc0000) {
      uVar5 = uVar5 & 0xfffffffe;
    }
    if (uVar6 < 0xfc0000) {
      return CONCAT44(uVar4,uVar5);
    }
    if ((int)(uVar6 - 0xfc0000) < 0) {
      if ((uVar6 & 0xf0) != 0) {
        uVar5 = uVar5 + 0x60000000 & 0x80000000;
      }
      return CONCAT44(uVar4,uVar5);
    }
    if (0xfdffffff < uVar5 * 2 + 0x1000000) {
      return CONCAT44(uVar4,uVar5);
    }
    if ((int)(uVar5 + 0xa0000000) < 0) {
      uVar3 = 0xff800000;
    }
    else {
      uVar3 = 0x7f800000;
    }
    return CONCAT44(uVar4,uVar3);
  }
  if ((int)(param_1 ^ param_2) < 0) {
    uVar5 = uVar5 | 0x100;
  }
  uVar4 = param_2 >> 7 & 0xff0000;
  if (uVar5 < 0xff0000 && uVar4 < 0xff0000) {
    if (uVar4 != 0) {
      return CONCAT44(param_2,param_1 ^ param_2) & 0xffffffff80000000;
    }
    if ((uVar5 & 0xff0000) == 0) {
      return CONCAT44(param_2,DAT_4a171d98);
    }
    return CONCAT44(param_2,(uVar5 | 0xff) << 0x17);
  }
  uVar4 = param_1 * 2;
  if (uVar4 < 0xff000001) {
    uVar4 = param_2 * 2;
  }
  if (uVar4 < 0xff000001) {
    if ((param_1 & 0x7fffffff) == 0x7f800000 && (param_2 & 0x7fffffff) == 0x7f800000) {
      return CONCAT44(param_2,DAT_4a171d98);
    }
    if ((param_2 & 0x7fffffff) == 0x7f800000) {
      param_1 = 0;
    }
    else {
      param_1 = param_1 & 0x7fffffff;
    }
    return CONCAT44(param_2,param_1 | uVar5 << 0x17);
  }
  uVar5 = DAT_4a171d94 & 0xf;
  if (uVar5 == 9) {
    if ((DAT_4a171d94 & 0x100000) == 0) {
      return (ulonglong)param_2 << 0x20;
    }
    if ((DAT_4a171d94 & 0x70000) != 0) {
      return CONCAT44(~(DAT_4a171d94 << 0xf) << 1,8);
    }
    return CONCAT44(param_2,0x30000000);
  }
  if (uVar5 == 10) {
    uVar5 = DAT_4a171ba4;
    if ((DAT_4a171d94 & 0x40) != 0) {
      uVar5 = 0x80000000;
    }
    return CONCAT44(param_2,uVar5);
  }
  if (uVar5 != 8) {
    return CONCAT44(param_2,DAT_4a171ba4);
  }
  if ((DAT_4a171d94 & 0x40) != 0) {
    return 0;
  }
  if ((DAT_4a171d94 & 0x10) != 0) {
    return CONCAT44(DAT_4a171ba4 & 0xff000000 | (DAT_4a171ba4 & 0xfffffff) >> 3,DAT_4a171ba4 << 0x1d
                   );
  }
  return CONCAT44(param_2,param_2 & 0xff000000 | DAT_4a171ba4 >> 0x1d | (param_2 & 0xffffff) << 3);
}



// Address: 4a171da0

longlong FUN_4a171da0(uint param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  byte in_Q;
  
  uVar1 = param_1 | param_2;
  if ((int)uVar1 < 0) {
    if ((int)(uVar1 + 0x800000) < 0) {
      if ((int)(uVar1 - 0x800000) < 0) {
        return CONCAT44(param_2,param_1);
      }
      goto LAB_4a171dd4;
    }
    if (param_1 << 1 < 0xff000000 && param_2 << 1 < 0xff000000) {
      return CONCAT44(param_2,param_1);
    }
  }
  else {
    bVar3 = SCARRY4(uVar1,0x800000);
    bVar2 = -1 < (int)(uVar1 + 0x800000);
    if (bVar2) {
      bVar3 = SBORROW4(uVar1,0x800000);
    }
    if (bVar2 && -1 < (int)(uVar1 - 0x800000)) {
      return CONCAT44(param_2,param_1);
    }
    if (!bVar3) {
LAB_4a171dd4:
      return CONCAT44(param_2,param_1);
    }
    if (-1 < (int)(param_1 + 0x800000) && -1 < (int)(param_2 + 0x800000)) {
      return CONCAT44(param_2,param_1);
    }
  }
  uVar1 = param_1 * 2;
  if (uVar1 < 0xff000001) {
    uVar1 = param_2 * 2;
  }
  if (uVar1 < 0xff000001) {
    if ((int)(param_1 | param_2) < 0) {
      uVar1 = ((byte)((param_2 == param_1) << 3 | (param_1 <= param_2) << 2 | in_Q) & 0xd) << 0x1b;
      if (param_1 > param_2) {
        uVar1 = uVar1 | 0x80000000;
      }
      return CONCAT44(param_2,uVar1);
    }
    bVar3 = param_2 <= param_1;
    if (!SBORROW4(param_1,param_2)) {
      return CONCAT44(param_2,(uint)(byte)(((int)(param_1 - param_2) < 0) << 4 |
                                           (param_1 == param_2) << 3 | bVar3 << 2 | in_Q) << 0x1b);
    }
    bVar2 = !bVar3;
    return CONCAT44(param_2,(uint)(byte)(bVar2 << 4 | (bVar2 && (bVar3 && param_1 == param_2)) << 3
                                         | (!bVar2 || bVar3) << 2 | (bVar2 && bVar3) << 1 | in_Q) <<
                            0x1b);
  }
  if ((DAT_4a171e14 & 0xd0000) == 0) {
    uVar1 = DAT_4a171e14 & 0xf;
    if (uVar1 != 9) {
      if (uVar1 == 10) {
        uVar1 = DAT_4a171ba4;
        if ((DAT_4a171e14 & 0x40) != 0) {
          uVar1 = 0x80000000;
        }
        return CONCAT44(param_2,uVar1);
      }
      if (uVar1 != 8) {
        return CONCAT44(param_2,DAT_4a171ba4);
      }
      if ((DAT_4a171e14 & 0x40) != 0) {
        return 0;
      }
      if ((DAT_4a171e14 & 0x10) != 0) {
        return CONCAT44(DAT_4a171ba4 & 0xff000000 | (DAT_4a171ba4 & 0xfffffff) >> 3,
                        DAT_4a171ba4 << 0x1d);
      }
      return CONCAT44(param_2,param_2 & 0xff000000 |
                              DAT_4a171ba4 >> 0x1d | (param_2 & 0xffffff) << 3);
    }
    param_1 = 8;
  }
  if ((DAT_4a171e14 & 0x100000) == 0) {
    return (ulonglong)param_2 << 0x20;
  }
  if ((DAT_4a171e14 & 0x70000) != 0) {
    return CONCAT44(~(DAT_4a171e14 << 0xf) << 1,param_1);
  }
  return CONCAT44(param_2,0x30000000);
}



// Address: 4a171e1c

/* WARNING: Removing unreachable block (ram,0x4a1729ec) */

ulonglong FUN_4a171e1c(uint param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (int)param_1 >> 0x17;
  uVar2 = param_1 << 8;
  if (uVar1 != 0) {
    uVar2 = uVar2 | 0x80000000;
  }
  if ((int)uVar1 < 0) {
    if (param_1 < 0xcf000001) {
      if ((uVar1 & 0xff) == 0) {
        uVar2 = uVar2 & 0x7fffffff;
      }
      return CONCAT44(param_2,-(uVar2 >> (0x9e - (uVar1 & 0xff) & 0xff)));
    }
  }
  else if (uVar1 < 0x9f && 0x9e - uVar1 != 0) {
    return CONCAT44(param_2,uVar2 >> (0x9e - uVar1 & 0xff));
  }
  uVar2 = param_1 * 2;
  if (uVar2 < 0xff000001) {
    if (uVar2 != 0xff000000) {
      return CONCAT44(uVar2,~((int)param_1 >> 0x1f)) ^ 0x80000000;
    }
    return CONCAT44(0xff000000,~((int)param_1 >> 0x1f)) ^ 0x80000000;
  }
  uVar1 = DAT_4a171e8c & 0xf;
  if (uVar1 == 9) {
    if ((DAT_4a171e8c & 0x100000) != 0) {
      return CONCAT44(~(DAT_4a171e8c << 0xf) << 1,8);
    }
    return (ulonglong)uVar2 << 0x20;
  }
  if (uVar1 == 10) {
    uVar1 = DAT_4a171bb0;
    if ((DAT_4a171e8c & 0x40) != 0) {
      uVar1 = 0x80000000;
    }
    return CONCAT44(uVar2,uVar1);
  }
  if (uVar1 != 8) {
    return CONCAT44(uVar2,DAT_4a171bb0);
  }
  if ((DAT_4a171e8c & 0x40) != 0) {
    return 0;
  }
  if ((DAT_4a171e8c & 0x10) != 0) {
    return CONCAT44(DAT_4a171bb0 & 0xff000000 | (DAT_4a171bb0 & 0xfffffff) >> 3,DAT_4a171bb0 << 0x1d
                   );
  }
  return CONCAT44(uVar2,uVar2 & 0xff000000 | DAT_4a171bb0 >> 0x1d | (uVar2 & 0xffffff) << 3);
}



// Address: 4a171e90

/* WARNING: Removing unreachable block (ram,0x4a1729ec) */

ulonglong FUN_4a171e90(uint param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (int)param_1 >> 0x17;
  uVar3 = param_1 << 8;
  if (uVar1 != 0) {
    uVar3 = uVar3 | 0x80000000;
  }
  if ((int)uVar1 < 0) {
    if (param_1 < 0xcf000001) {
      if ((uVar1 & 0xff) == 0) {
        uVar3 = uVar3 & 0x7fffffff;
      }
      uVar2 = 0x9e - (uVar1 & 0xff);
      uVar1 = -(uVar3 >> (uVar2 & 0xff));
      uVar2 = 0x20 - uVar2;
      if ((int)uVar2 < 0) {
        uVar3 = uVar3 >> 1;
      }
      else {
        uVar3 = uVar3 << (uVar2 & 0xff);
      }
      if (uVar3 == 0) {
        return CONCAT44(param_2,uVar1);
      }
      if ((uVar3 & 0x7fffffff) == 0) {
        uVar1 = uVar1 | 1;
      }
      if (SUB41(uVar3 >> 0x1f,0)) {
        uVar1 = uVar1 - 1;
      }
      return CONCAT44(param_2,uVar1);
    }
  }
  else {
    uVar2 = 0x9e - uVar1;
    if (uVar1 < 0x9f && uVar2 != 0) {
      uVar1 = uVar3 >> (uVar2 & 0xff);
      if ((int)(0x20 - uVar2) < 0) {
        uVar3 = uVar3 >> 1;
      }
      else {
        uVar3 = uVar3 << (0x20 - uVar2 & 0xff);
      }
      if (uVar3 == 0) {
        return CONCAT44(param_2,uVar1);
      }
      if (SUB41(uVar3 >> 0x1f,0)) {
        uVar1 = uVar1 + 1;
      }
      if ((uVar3 & 0x7fffffff) == 0) {
        uVar1 = uVar1 & 0xfffffffe;
      }
      return CONCAT44(param_2,uVar1);
    }
  }
  uVar3 = param_1 * 2;
  if (uVar3 < 0xff000001) {
    if (uVar3 != 0xff000000) {
      return CONCAT44(uVar3,~((int)param_1 >> 0x1f)) ^ 0x80000000;
    }
    return CONCAT44(0xff000000,~((int)param_1 >> 0x1f)) ^ 0x80000000;
  }
  uVar1 = DAT_4a171f40 & 0xf;
  if (uVar1 == 9) {
    if ((DAT_4a171f40 & 0x100000) != 0) {
      return CONCAT44(~(DAT_4a171f40 << 0xf) << 1,8);
    }
    return (ulonglong)uVar3 << 0x20;
  }
  if (uVar1 == 10) {
    uVar1 = DAT_4a171bb0;
    if ((DAT_4a171f40 & 0x40) != 0) {
      uVar1 = 0x80000000;
    }
    return CONCAT44(uVar3,uVar1);
  }
  if (uVar1 != 8) {
    return CONCAT44(uVar3,DAT_4a171bb0);
  }
  if ((DAT_4a171f40 & 0x40) != 0) {
    return 0;
  }
  if ((DAT_4a171f40 & 0x10) != 0) {
    return CONCAT44(DAT_4a171bb0 & 0xff000000 | (DAT_4a171bb0 & 0xfffffff) >> 3,DAT_4a171bb0 << 0x1d
                   );
  }
  return CONCAT44(uVar3,uVar3 & 0xff000000 | DAT_4a171bb0 >> 0x1d | (uVar3 & 0xffffff) << 3);
}



// Address: 4a171f48

/* WARNING: Removing unreachable block (ram,0x4a1729ec) */

longlong FUN_4a171f48(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 >> 0x17;
  uVar2 = param_1 << 8;
  if (uVar1 != 0) {
    uVar2 = uVar2 | 0x80000000;
  }
  if ((int)uVar1 < 0) {
    if ((uint)(param_1 << 1) < 0x7f000000) {
      return (ulonglong)(uint)(param_1 << 1) << 0x20;
    }
  }
  else if (uVar1 < 0x9f) {
    return CONCAT44(param_2,uVar2 >> (0x9e - uVar1 & 0xff));
  }
  uVar2 = param_1 * 2;
  if (uVar2 < 0xff000001) {
    if (uVar2 != 0xff000000) {
      return CONCAT44(uVar2,~(param_1 >> 0x1f));
    }
    return CONCAT44(0xff000000,~(param_1 >> 0x1f));
  }
  uVar1 = DAT_4a171fa4 & 0xf;
  if (uVar1 == 9) {
    if ((DAT_4a171fa4 & 0x100000) != 0) {
      return CONCAT44(~(DAT_4a171fa4 << 0xf) << 1,8);
    }
    return (ulonglong)uVar2 << 0x20;
  }
  if (uVar1 == 10) {
    uVar1 = DAT_4a171bb0;
    if ((DAT_4a171fa4 & 0x40) != 0) {
      uVar1 = 0x80000000;
    }
    return CONCAT44(uVar2,uVar1);
  }
  if (uVar1 != 8) {
    return CONCAT44(uVar2,DAT_4a171bb0);
  }
  if ((DAT_4a171fa4 & 0x40) != 0) {
    return 0;
  }
  if ((DAT_4a171fa4 & 0x10) != 0) {
    return CONCAT44(DAT_4a171bb0 & 0xff000000 | (DAT_4a171bb0 & 0xfffffff) >> 3,DAT_4a171bb0 << 0x1d
                   );
  }
  return CONCAT44(uVar2,uVar2 & 0xff000000 | DAT_4a171bb0 >> 0x1d | (uVar2 & 0xffffff) << 3);
}



// Address: 4a171fac

uint FUN_4a171fac(uint param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = param_1 & 0x80000000;
  if (uVar2 != 0) {
    param_1 = -param_1;
  }
  uVar2 = uVar2 | 0x40000000;
  bVar3 = param_1 >> 0x10 == 0;
  if (bVar3) {
    param_1 = param_1 << 0x10;
    bVar3 = param_1 == 0;
  }
  else {
    uVar2 = uVar2 + 0x8000000;
  }
  if (!bVar3) {
    if ((param_1 & 0xff000000) == 0) {
      param_1 = param_1 << 8;
    }
    else {
      uVar2 = uVar2 + 0x4000000;
    }
    if ((param_1 & 0xf0000000) == 0) {
      param_1 = param_1 << 4;
    }
    else {
      uVar2 = uVar2 + 0x2000000;
    }
    if ((param_1 & 0xc0000000) == 0) {
      param_1 = param_1 << 2;
      uVar1 = param_1;
    }
    else {
      uVar2 = uVar2 + 0x1000000;
      uVar1 = param_1 & 0xc0000000;
    }
    if ((int)uVar1 < 0) {
      uVar2 = uVar2 + 0x800000;
    }
    else {
      param_1 = param_1 << 1;
    }
    bVar3 = (bool)((byte)(param_1 >> 7) & 1);
    uVar2 = uVar2 + ((int)param_1 >> 8) + (uint)bVar3;
    if ((param_1 & 0x7f) != 0) {
      bVar3 = false;
    }
    if (bVar3) {
      uVar2 = uVar2 & 0xfffffffe;
    }
    return uVar2;
  }
  return param_1;
}



// Address: 4a172010

uint FUN_4a172010(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar3 = param_2 & 0x80000000;
  if ((int)uVar3 < 0) {
    bVar5 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(param_2 + bVar5);
  }
  if (param_2 != 0) {
    uVar4 = 0x20;
    uVar2 = param_2;
  }
  else {
    uVar4 = 0;
    uVar2 = param_1;
  }
  if (param_2 != 0 || param_1 != 0) {
    if (uVar2 >> 0x10 == 0) {
      uVar4 = uVar4 - 0x10;
      uVar2 = uVar2 << 0x10;
    }
    if ((uVar2 & 0xff000000) == 0) {
      uVar4 = uVar4 - 8;
      uVar2 = uVar2 << 8;
    }
    if ((uVar2 & 0xf0000000) == 0) {
      uVar4 = uVar4 - 4;
      uVar2 = uVar2 << 4;
    }
    uVar1 = uVar2 & 0xc0000000;
    if ((uVar2 & 0xc0000000) == 0) {
      uVar4 = uVar4 - 2;
      uVar2 = uVar2 << 2;
      uVar1 = uVar2;
    }
    if (-1 < (int)uVar1) {
      uVar4 = uVar4 - 1;
      uVar2 = uVar2 << 1;
    }
    uVar2 = uVar2 | param_1 >> (uVar4 & 0xff);
    bVar5 = (bool)((byte)(uVar2 >> 7) & 1);
    uVar3 = (uVar3 | 0x3f800000) + 0xf000000 + uVar4 * 0x800000 + (uVar2 >> 8) + (uint)bVar5;
    if (param_1 << (0x20 - uVar4 & 0xff) != 0 || (uVar2 & 0x7f) != 0) {
      bVar5 = false;
    }
    if (bVar5) {
      uVar3 = uVar3 & 0xfffffffe;
    }
    return uVar3;
  }
  return param_1;
}



// Address: 4a172098

uint FUN_4a172098(uint param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 0x40000000;
  bVar3 = param_1 >> 0x10 == 0;
  if (bVar3) {
    param_1 = param_1 << 0x10;
    bVar3 = param_1 == 0;
  }
  else {
    iVar2 = 0x48000000;
  }
  if (!bVar3) {
    if ((param_1 & 0xff000000) == 0) {
      param_1 = param_1 << 8;
    }
    else {
      iVar2 = iVar2 + 0x4000000;
    }
    if ((param_1 & 0xf0000000) == 0) {
      param_1 = param_1 << 4;
    }
    else {
      iVar2 = iVar2 + 0x2000000;
    }
    if ((param_1 & 0xc0000000) == 0) {
      param_1 = param_1 << 2;
      uVar1 = param_1;
    }
    else {
      iVar2 = iVar2 + 0x1000000;
      uVar1 = param_1 & 0xc0000000;
    }
    if ((int)uVar1 < 0) {
      iVar2 = iVar2 + 0x800000;
    }
    else {
      param_1 = param_1 << 1;
    }
    bVar3 = (bool)((byte)(param_1 >> 7) & 1);
    uVar1 = iVar2 + ((int)param_1 >> 8) + (uint)bVar3;
    if ((param_1 & 0x7f) != 0) {
      bVar3 = false;
    }
    if (bVar3) {
      uVar1 = uVar1 & 0xfffffffe;
    }
    return uVar1;
  }
  return param_1;
}



// Address: 4a1720a0

longlong FUN_4a1720a0(uint param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  byte in_Q;
  
  uVar1 = param_1 | param_2;
  if ((int)uVar1 < 0) {
    if ((int)(uVar1 + 0x800000) < 0) {
      if ((int)(uVar1 - 0x800000) < 0) {
        return CONCAT44(param_2,param_1);
      }
      goto LAB_4a1720d4;
    }
    if (param_1 << 1 < 0xff000000 && param_2 << 1 < 0xff000000) {
      return CONCAT44(param_2,param_1);
    }
  }
  else {
    bVar3 = SCARRY4(uVar1,0x800000);
    bVar2 = -1 < (int)(uVar1 + 0x800000);
    if (bVar2) {
      bVar3 = SBORROW4(uVar1,0x800000);
    }
    if (bVar2 && -1 < (int)(uVar1 - 0x800000)) {
      return CONCAT44(param_2,param_1);
    }
    if (!bVar3) {
LAB_4a1720d4:
      return CONCAT44(param_2,param_1);
    }
    if (-1 < (int)(param_1 + 0x800000) && -1 < (int)(param_2 + 0x800000)) {
      return CONCAT44(param_2,param_1);
    }
  }
  uVar1 = param_1 * 2;
  if (uVar1 < 0xff000001) {
    uVar1 = param_2 * 2;
  }
  if (uVar1 < 0xff000001) {
    if ((int)(param_1 | param_2) < 0) {
      uVar1 = ((byte)((param_2 == param_1) << 3 | (param_1 <= param_2) << 2 | in_Q) & 0xd) << 0x1b;
      if (param_1 > param_2) {
        uVar1 = uVar1 | 0x80000000;
      }
      return CONCAT44(param_2,uVar1);
    }
    bVar3 = param_2 <= param_1;
    if (!SBORROW4(param_1,param_2)) {
      return CONCAT44(param_2,(uint)(byte)(((int)(param_1 - param_2) < 0) << 4 |
                                           (param_1 == param_2) << 3 | bVar3 << 2 | in_Q) << 0x1b);
    }
    bVar2 = !bVar3;
    return CONCAT44(param_2,(uint)(byte)(bVar2 << 4 | (bVar2 && (bVar3 && param_1 == param_2)) << 3
                                         | (!bVar2 || bVar3) << 2 | (bVar2 && bVar3) << 1 | in_Q) <<
                            0x1b);
  }
  if ((DAT_4a172114 & 0xd0000) == 0) {
    uVar1 = DAT_4a172114 & 0xf;
    if (uVar1 != 9) {
      if (uVar1 == 10) {
        uVar1 = DAT_4a171ba4;
        if ((DAT_4a172114 & 0x40) != 0) {
          uVar1 = 0x80000000;
        }
        return CONCAT44(param_2,uVar1);
      }
      if (uVar1 != 8) {
        return CONCAT44(param_2,DAT_4a171ba4);
      }
      if ((DAT_4a172114 & 0x40) != 0) {
        return 0;
      }
      if ((DAT_4a172114 & 0x10) != 0) {
        return CONCAT44(DAT_4a171ba4 & 0xff000000 | (DAT_4a171ba4 & 0xfffffff) >> 3,
                        DAT_4a171ba4 << 0x1d);
      }
      return CONCAT44(param_2,param_2 & 0xff000000 |
                              DAT_4a171ba4 >> 0x1d | (param_2 & 0xffffff) << 3);
    }
    param_1 = 8;
  }
  if ((DAT_4a172114 & 0x100000) == 0) {
    return (ulonglong)param_2 << 0x20;
  }
  if ((DAT_4a172114 & 0x70000) != 0) {
    return CONCAT44(~(DAT_4a172114 << 0xf) << 1,param_1);
  }
  return CONCAT44(param_2,0x30000000);
}



// Address: 4a17211c

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

ulonglong FUN_4a17211c(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar3 = param_1 >> 7 & 0xff0000;
  bVar7 = uVar3 == 0;
  if (!bVar7) {
    param_4 = param_2 >> 7 & 0xff0000;
    bVar7 = param_4 == 0;
  }
  if (!bVar7) {
    bVar7 = uVar3 == 0xff0000;
  }
  if (!bVar7) {
    bVar7 = param_4 == 0xff0000;
  }
  if (bVar7) {
    if ((int)(param_1 ^ param_2) < 0) {
      uVar3 = uVar3 | 0x100;
    }
    uVar6 = param_2 >> 7 & 0xff0000;
    if (uVar3 < 0xff0000 && uVar6 < 0xff0000) {
      return CONCAT44(param_2,param_1 ^ param_2) & 0xffffffff80000000;
    }
    param_1 = param_1 * 2;
    if (param_1 < 0xff000001) {
      param_1 = param_2 * 2;
    }
    if (0xff000000 < param_1) {
      return CONCAT44(param_2,DAT_4a171ba4);
    }
    if ((uVar3 & 0xff0000) == 0 || uVar6 == 0) {
      return CONCAT44(param_2,DAT_4a172220);
    }
    return CONCAT44(param_2,(uVar3 | 0xff) << 0x17);
  }
  if ((int)(param_1 ^ param_2) < 0) {
    uVar3 = uVar3 | 0x100;
  }
  param_2 = param_2 << 8;
  lVar1 = (ulonglong)(param_2 | 0x80000000) * (ulonglong)(param_1 << 8 | 0x80000000);
  uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
  iVar4 = uVar3 + param_4 + -0x800000;
  if ((int)lVar1 != 0) {
    uVar6 = uVar6 | 1;
  }
  bVar7 = 0x7fffffff < uVar6;
  if (!bVar7) {
    uVar6 = uVar6 << 1;
  }
  uVar5 = iVar4 + (iVar4 >> 0x10) + (uint)bVar7;
  bVar7 = (bool)((byte)(uVar6 >> 7) & 1);
  uVar3 = uVar6 >> 8;
  if (bVar7) {
    uVar3 = uVar6 & 0x7f;
  }
  uVar6 = (uVar6 >> 8) + uVar5 * 0x800000 + (uint)bVar7;
  if (uVar3 != 0) {
    bVar7 = 0xfbffff < uVar5;
  }
  if (!bVar7) {
    return CONCAT44(param_2,uVar6) | 0x8000000000000000;
  }
  if (uVar3 == 0 || uVar5 == 0xfc0000) {
    uVar6 = uVar6 & 0xfffffffe;
  }
  if (uVar5 < 0xfc0000) {
    return CONCAT44(param_2,uVar6) | 0x8000000000000000;
  }
  if (-1 < (int)(uVar5 - 0xfc0000)) {
    if (-1 < (int)((uVar6 + 0x800000) * 2)) {
      if ((int)(uVar6 + 0xa0000000) < 0) {
        uVar2 = 0xff800000;
      }
      else {
        uVar2 = 0x7f800000;
      }
      return CONCAT44(param_2,uVar2) | 0x8000000000000000;
    }
    return CONCAT44(param_2,uVar6) | 0x8000000000000000;
  }
  if ((int)(uVar5 ^ 0xff) < -0xffff) {
    uVar6 = uVar6 + 0x60000000;
    if ((int)(uVar5 ^ 0xff) < -0xffff) {
      uVar6 = uVar6 & 0x80000000;
    }
    return CONCAT44(param_2,uVar6) | 0x8000000000000000;
  }
  return CONCAT44(param_2,uVar6) | 0x8000000000000000;
}



// Address: 4a1722bc

void FUN_4a1722bc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a00479c();
  *puVar1 = 0;
  return;
}



// Address: 4a1722d4

ulonglong FUN_4a1722d4(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  bVar7 = (~(param_2 << 1) & 0xff000000) == 0;
  if (!bVar7) {
    param_3 = ~(param_1 << 1) & 0xff000000;
    bVar7 = param_3 == 0;
  }
  if (bVar7) {
    uVar6 = param_2 * 2;
    if (uVar6 < 0xff000001) {
      uVar6 = param_1 << 1;
      param_3 = uVar6;
    }
    if (0xff000000 < uVar6) {
      uVar6 = DAT_4a172450 & 0xf;
      if (uVar6 == 9) {
        if ((DAT_4a172450 & 0x100000) == 0) {
          return (ulonglong)param_2 << 0x20;
        }
        if ((DAT_4a172450 & 0x70000) != 0) {
          return CONCAT44(~(DAT_4a172450 << 0xf) << 1,8);
        }
        return CONCAT44(param_2,0x30000000);
      }
      if (uVar6 == 10) {
        uVar6 = DAT_4a171ba4;
        if ((DAT_4a172450 & 0x40) != 0) {
          uVar6 = 0x80000000;
        }
        return CONCAT44(param_2,uVar6);
      }
      if (uVar6 != 8) {
        return CONCAT44(param_2,DAT_4a171ba4);
      }
      if ((DAT_4a172450 & 0x40) != 0) {
        return 0;
      }
      if ((DAT_4a172450 & 0x10) != 0) {
        return CONCAT44(DAT_4a171ba4 & 0xff000000 | (DAT_4a171ba4 & 0xfffffff) >> 3,
                        DAT_4a171ba4 << 0x1d);
      }
      return CONCAT44(param_2,param_2 & 0xff000000 |
                              DAT_4a171ba4 >> 0x1d | (param_2 & 0xffffff) << 3);
    }
    if (param_3 != 0xff000000) {
      if (0xffffff < param_3 || param_3 == 0) {
        return CONCAT44(param_2,param_1);
      }
      return CONCAT44(param_2,param_1) & 0xffffffff80000000;
    }
LAB_4a172448:
    return CONCAT44(param_2,DAT_4a172454);
  }
  uVar6 = param_2 >> 7 & 0xff0000;
  if ((param_1 & 0x80000000) != 0) {
    uVar6 = uVar6 | 5;
  }
  uVar5 = param_1 >> 7 & 0xff0000;
  if (uVar5 == 0 || (uVar6 & 0xff0000) == 0) {
    if ((param_2 >> 7 & 0xff0000) != 0) {
      return CONCAT44(param_2,param_1) & 0xffffffff80000000;
    }
    goto LAB_4a172448;
  }
  uVar2 = param_1 << 8 | 0x80000000;
  uVar1 = param_2 << 8;
  uVar4 = uVar1 | 0x80000000;
  uVar6 = uVar6 - 0x10000;
  for (; (int)uVar6 < (int)uVar5; uVar5 = uVar5 - 0x10000) {
    uVar6 = uVar6 & 0xfffffffd;
    uVar3 = uVar2;
    if (0x7fffffff < uVar2) {
      uVar3 = uVar2 - uVar4;
      uVar6 = uVar6 | 2;
      if ((int)uVar2 < (int)uVar4) {
        uVar3 = -uVar3;
        uVar6 = uVar6 ^ 1;
      }
    }
    uVar2 = uVar3 << 1;
  }
  if ((((int)uVar6 >> 0x10 <= (int)uVar5 >> 0x10) && (uVar4 <= uVar2)) &&
     ((uVar2 != uVar4 || ((uVar6 & 2) != 0)))) {
    uVar2 = -(uVar2 + param_2 * -0x200);
    uVar6 = uVar6 ^ 1;
  }
  uVar4 = uVar2 << 1;
  uVar3 = uVar5;
  if (SUB41(uVar2 >> 0x1f,0)) {
LAB_4a1723e8:
    if (0 < (int)uVar3) goto LAB_4a1723f0;
  }
  else if ((int)uVar4 < 0) {
    uVar3 = uVar5 - 0x10000;
    uVar4 = uVar2 << 2;
    if (uVar3 != 0 && 0xffff < (int)uVar5) goto LAB_4a1723e8;
  }
  else {
    if (uVar4 == 0) {
      return CONCAT44(uVar1,uVar6 << 0x1d) & 0xffffffff80000000 | 0x8000000000000000;
    }
    if ((uVar4 & 0xff000000) == 0) {
      uVar4 = uVar2 << 9;
      uVar5 = uVar5 - 0x80000;
    }
    if ((uVar4 & 0xff000000) == 0) {
      uVar4 = uVar4 << 8;
      uVar5 = uVar5 - 0x80000;
    }
    if ((uVar4 & 0xf0000000) == 0) {
      uVar4 = uVar4 << 4;
      uVar5 = uVar5 - 0x40000;
    }
    uVar2 = uVar4;
    if ((uVar4 & 0xc0000000) == 0) {
      uVar2 = uVar4 << 2;
      uVar5 = uVar5 - 0x20000;
    }
    uVar4 = uVar2 << 1;
    uVar3 = uVar5 - 0x10000;
    if (!SUB41(uVar2 >> 0x1f,0)) {
      uVar4 = uVar2 << 2;
      uVar3 = uVar5 - 0x20000;
    }
  }
  if ((int)uVar3 < 1) {
    return CONCAT44(uVar1,uVar6 << 0x1f) | 0x8000000000000000;
  }
LAB_4a1723f0:
  return CONCAT44(uVar1,uVar3 << 7 | uVar4 >> 9 | uVar6 << 0x1f) | 0x8000000000000000;
}



// Address: 4a172458

longlong FUN_4a172458(uint param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  byte in_Q;
  
  uVar1 = param_2 | param_1;
  if ((int)uVar1 < 0) {
    if ((int)(uVar1 + 0x800000) < 0) {
      if ((int)(uVar1 - 0x800000) < 0) {
        return CONCAT44(param_2,param_1);
      }
      goto LAB_4a17248c;
    }
    if (param_2 << 1 < 0xff000000 && param_1 << 1 < 0xff000000) {
      return CONCAT44(param_2,param_1);
    }
  }
  else {
    bVar3 = SCARRY4(uVar1,0x800000);
    bVar2 = -1 < (int)(uVar1 + 0x800000);
    if (bVar2) {
      bVar3 = SBORROW4(uVar1,0x800000);
    }
    if (bVar2 && -1 < (int)(uVar1 - 0x800000)) {
      return CONCAT44(param_2,param_1);
    }
    if (!bVar3) {
LAB_4a17248c:
      return CONCAT44(param_2,param_1);
    }
    if (-1 < (int)(param_2 + 0x800000) && -1 < (int)(param_1 + 0x800000)) {
      return CONCAT44(param_2,param_1);
    }
  }
  uVar1 = param_2 * 2;
  if (uVar1 < 0xff000001) {
    uVar1 = param_1 * 2;
  }
  if (uVar1 < 0xff000001) {
    if ((int)(param_2 | param_1) < 0) {
      uVar1 = ((byte)((param_1 == param_2) << 3 | (param_2 <= param_1) << 2 | in_Q) & 0xd) << 0x1b;
      if (param_2 > param_1) {
        uVar1 = uVar1 | 0x80000000;
      }
      return CONCAT44(param_1,uVar1);
    }
    bVar3 = param_1 <= param_2;
    if (!SBORROW4(param_2,param_1)) {
      return CONCAT44(param_1,(uint)(byte)(((int)(param_2 - param_1) < 0) << 4 |
                                           (param_2 == param_1) << 3 | bVar3 << 2 | in_Q) << 0x1b);
    }
    bVar2 = !bVar3;
    return CONCAT44(param_1,(uint)(byte)(bVar2 << 4 | (bVar2 && (bVar3 && param_2 == param_1)) << 3
                                         | (!bVar2 || bVar3) << 2 | (bVar2 && bVar3) << 1 | in_Q) <<
                            0x1b);
  }
  if ((DAT_4a1724d8 & 0xd0000) == 0) {
    uVar1 = DAT_4a1724d8 & 0xf;
    if (uVar1 != 9) {
      if (uVar1 == 10) {
        uVar1 = DAT_4a171ba4;
        if ((DAT_4a1724d8 & 0x40) != 0) {
          uVar1 = 0x80000000;
        }
        return CONCAT44(param_1,uVar1);
      }
      if (uVar1 != 8) {
        return CONCAT44(param_1,DAT_4a171ba4);
      }
      if ((DAT_4a1724d8 & 0x40) != 0) {
        return 0;
      }
      if ((DAT_4a1724d8 & 0x10) != 0) {
        return CONCAT44(DAT_4a171ba4 & 0xff000000 | (DAT_4a171ba4 & 0xfffffff) >> 3,
                        DAT_4a171ba4 << 0x1d);
      }
      return CONCAT44(param_1,param_1 & 0xff000000 |
                              DAT_4a171ba4 >> 0x1d | (param_1 & 0xffffff) << 3);
    }
    param_2 = 8;
  }
  if ((DAT_4a1724d8 & 0x100000) == 0) {
    return (ulonglong)param_1 << 0x20;
  }
  if ((DAT_4a1724d8 & 0x70000) != 0) {
    return CONCAT44(~(DAT_4a1724d8 << 0xf) << 1,param_2);
  }
  return CONCAT44(param_1,0x30000000);
}



// Address: 4a1724e0

/* WARNING: Removing unreachable block (ram,0x4a1729d8) */
/* WARNING: Removing unreachable block (ram,0x4a1729ec) */
/* WARNING: Removing unreachable block (ram,0x4a1728bc) */
/* WARNING: Removing unreachable block (ram,0x4a1728ac) */
/* WARNING: Removing unreachable block (ram,0x4a1729e0) */
/* WARNING: Removing unreachable block (ram,0x4a17289c) */

ulonglong FUN_4a1724e0(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  
  param_1 = param_1 ^ 0x80000000;
  if ((int)(param_1 ^ param_2) < 0) {
    param_2 = param_2 ^ 0x80000000;
    if (param_1 < param_2) {
      uVar3 = param_1 - param_2 ^ 0x80000000;
      param_1 = param_1 - uVar3;
      param_2 = param_2 + uVar3;
    }
    uVar3 = param_1 >> 0x17;
    uVar4 = uVar3 - (param_2 >> 0x17);
    if ((param_2 & 0x7f800000) != 0 && (uVar3 & 0xff) != 0xff) {
      uVar1 = param_1 << 8 | 0x80000000;
      param_2 = param_2 << 8;
      uVar6 = uVar1 - ((param_2 | 0x80000000) >> (uVar4 & 0xff));
      if ((int)uVar6 < 0) {
        bVar7 = (bool)((byte)(uVar6 >> 7) & 1);
        uVar3 = (uVar6 >> 8) + (uVar3 - 1) * 0x800000 + (uint)bVar7;
        if (!bVar7) {
          return CONCAT44(param_2,uVar3) | 0x8000000000000000;
        }
        if ((uVar6 & 0x7f) != 0) {
          return CONCAT44(param_2,uVar3) | 0x8000000000000000;
        }
      }
      else {
        bVar8 = (uVar3 & 0xfe) == 0;
        bVar7 = false;
        if (!bVar8) {
          uVar1 = uVar6 * 2;
          bVar7 = (int)uVar1 < 0;
          bVar8 = uVar1 == 0;
        }
        if (!bVar7) {
          if (bVar8) {
            if (uVar6 >> 7 == 0) {
              return (ulonglong)param_2 << 0x20 | 0x8000000000000000;
            }
            return CONCAT44(param_2,(param_1 >> 0x1f) << 0x1f) | 0x8000000000000000;
          }
          if (uVar1 == 0) {
            return (ulonglong)param_2 << 0x20 | 0x8000000000000000;
          }
          uVar4 = uVar1;
          uVar6 = uVar3;
          if (uVar1 >> 0x17 == 0) {
            uVar4 = uVar1 << 8;
            uVar6 = uVar3 - 8;
            if ((uVar1 & 0xffffff) >> 0xf == 0) {
              uVar4 = uVar1 << 0x10;
              uVar6 = uVar3 - 0x10;
            }
          }
          if ((uVar4 & 0x78000000) != 0) {
            uVar4 = uVar4 >> 4;
            uVar6 = uVar6 + 4;
          }
          if ((uVar4 & 0x6000000) != 0) {
            uVar4 = uVar4 >> 2;
            uVar6 = uVar6 + 2;
          }
          uVar6 = uVar6 - ((uVar4 < 0x1000000) + 9);
          if (uVar4 >= 0x1000000) {
            uVar4 = uVar4 >> 1;
          }
          if ((uVar3 ^ uVar6) >> 8 == 0) {
            return CONCAT44(param_2,uVar4 + uVar6 * 0x800000) | 0x8000000000000000;
          }
          return CONCAT44(param_2,(param_1 >> 0x1f) << 0x1f) | 0x8000000000000000;
        }
        bVar7 = (bool)((byte)(uVar1 >> 7) & 1);
        uVar3 = ((int)uVar1 >> 8) + uVar3 * 0x800000 + (uint)bVar7;
        if (!bVar7) {
          return CONCAT44(param_2,uVar3) | 0x8000000000000000;
        }
        if ((uVar6 & 0x3f) != 0) {
          return CONCAT44(param_2,uVar3) | 0x8000000000000000;
        }
      }
      iVar2 = (param_2 | 0x80000000) << (0x20 - uVar4 & 0xff);
      if (iVar2 == 0) {
        uVar3 = uVar3 & 0xfffffffe;
      }
      else {
        uVar3 = uVar3 - 1;
      }
      return CONCAT44(iVar2,uVar3);
    }
    if ((uVar3 & 0xff) != 0xff) {
      if ((param_1 & 0x7f800000) == 0) {
        param_1 = 0;
      }
      return CONCAT44(param_2,param_1);
    }
    uVar3 = param_1 * 2;
    uVar4 = 0x4000002;
    if (param_2 << 1 < 0xff000001 && uVar3 < 0xff000001) {
      if (uVar3 == param_2 * 2) {
        if ((int)(param_1 ^ param_2) < 0) {
          return CONCAT44(param_2,param_1);
        }
        return CONCAT44(param_2,DAT_4a172724);
      }
      if (uVar3 == 0xff000000) {
        return CONCAT44(param_2,param_1);
      }
      return CONCAT44(param_2,param_2) ^ 0x80000000;
    }
LAB_4a171b9c:
    uVar4 = uVar4 & 0xf;
    if (uVar4 == 9) {
      return (ulonglong)param_2 << 0x20;
    }
    if (uVar4 != 10) {
      if (uVar4 == 8) {
        return CONCAT44(param_2,param_2 & 0xff000000 |
                                DAT_4a171ba4 >> 0x1d | (param_2 & 0xffffff) << 3);
      }
      return CONCAT44(param_2,DAT_4a171ba4);
    }
    return CONCAT44(param_2,DAT_4a171ba4);
  }
  iVar2 = param_1 - param_2;
  if (param_1 < param_2) {
    param_1 = param_1 - iVar2;
    param_2 = param_2 + iVar2;
  }
  uVar3 = param_1 >> 0x17;
  uVar4 = uVar3 - (param_2 >> 0x17);
  if ((param_2 & 0x7f800000) == 0 || (uVar3 & 0xff) == 0xff) {
    if ((uVar3 & 0xff) != 0xff) {
      if ((param_1 & 0x7f800000) == 0) {
        param_1 = param_1 & 0x80000000;
      }
      return CONCAT44(param_2,param_1);
    }
    uVar3 = param_1 * 2;
    uVar4 = 0x4000001;
    if (param_2 << 1 < 0xff000001 && uVar3 < 0xff000001) {
      if (uVar3 == param_2 * 2) {
        if (-1 < (int)(param_1 ^ param_2)) {
          return CONCAT44(param_2,param_1);
        }
        return CONCAT44(param_2,DAT_4a171b98);
      }
      if (uVar3 == 0xff000000) {
        return CONCAT44(param_2,param_1);
      }
      return CONCAT44(param_2,param_2);
    }
    goto LAB_4a171b9c;
  }
  uVar6 = param_1 << 8 | 0x80000000;
  param_2 = param_2 << 8;
  uVar1 = (param_2 | 0x80000000) >> (uVar4 & 0xff);
  uVar5 = uVar6 + uVar1;
  if (CARRY4(uVar6,uVar1)) {
    uVar1 = uVar5 >> 1 | 0x80000000;
    bVar7 = (bool)((byte)(uVar1 >> 7) & 1);
    uVar1 = uVar1 >> 8;
    uVar3 = uVar1 + uVar3 * 0x800000 + (uint)bVar7;
    if (bVar7) {
      uVar1 = uVar5 & 0xff;
    }
    uVar6 = uVar3 * 2;
    if (uVar1 != 0) {
      if (uVar6 < 0xff000000) {
        return CONCAT44(param_2,uVar3) | 0x8000000000000000;
      }
      goto LAB_4a171b0c;
    }
  }
  else {
    bVar7 = (bool)((byte)(uVar5 >> 7) & 1);
    uVar3 = (uVar5 >> 8) + (uVar3 - 1) * 0x800000 + (uint)bVar7;
    if (!bVar7) {
      return CONCAT44(param_2,uVar3) | 0x8000000000000000;
    }
    uVar6 = uVar3 * 2;
    if ((uVar5 & 0x7f) != 0) {
      bVar7 = 0xfeffffff < uVar6;
    }
    if (!bVar7) {
      return CONCAT44(param_2,uVar3) | 0x8000000000000000;
    }
  }
  iVar2 = (param_2 | 0x80000000) << (0x20 - uVar4 & 0xff);
  if (iVar2 == 0) {
    uVar3 = uVar3 & 0xfffffffe;
  }
  if (uVar6 < 0xff000000) {
    return CONCAT44(iVar2,uVar3);
  }
LAB_4a171b0c:
  uVar3 = uVar3 + 0xa0000000 >> 0x17;
  return CONCAT44(uVar3,(uVar3 | 0xff) << 0x17) | 0xff00000000;
}



// Address: 4a1724f4

ulonglong FUN_4a1724f4(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  
  uVar1 = param_1 >> 0x17;
  uVar4 = uVar1 & 0xff;
  if (uVar4 == 0 || uVar4 == 0xff) {
    if (uVar4 != 0xff) {
      if (param_1 << 1 == 0) {
        return (ulonglong)param_1;
      }
      return CONCAT44(param_1 << 1,param_1) & 0xffffffff80000000;
    }
    if ((param_1 & 0x7fffff) != 0) {
      uVar4 = DAT_4a1725b4 & 0xf;
      if (uVar4 == 9) {
        if ((DAT_4a1725b4 & 0x100000) == 0) {
          return (ulonglong)uVar1 << 0x20;
        }
        if ((DAT_4a1725b4 & 0x70000) != 0) {
          return CONCAT44(~(DAT_4a1725b4 << 0xf) << 1,8);
        }
        return CONCAT44(uVar1,0x30000000);
      }
      if (uVar4 == 10) {
        uVar4 = DAT_4a171bb0;
        if ((DAT_4a1725b4 & 0x40) != 0) {
          uVar4 = 0x80000000;
        }
        return CONCAT44(uVar1,uVar4);
      }
      if (uVar4 != 8) {
        return CONCAT44(uVar1,DAT_4a171bb0);
      }
      if ((DAT_4a1725b4 & 0x40) != 0) {
        return 0;
      }
      if ((DAT_4a1725b4 & 0x10) != 0) {
        return CONCAT44(DAT_4a171bb0 & 0xff000000 | (DAT_4a171bb0 & 0xfffffff) >> 3,
                        DAT_4a171bb0 << 0x1d);
      }
      return CONCAT44(uVar1,DAT_4a171bb0 >> 0x1d | uVar1 << 3);
    }
    if ((param_1 & 0x80000000) == 0) {
      return CONCAT44(uVar1,param_1);
    }
  }
  else if ((param_1 & 0x80000000) == 0) {
    uVar1 = param_1 << 8 | 0x80000000;
    uVar2 = (param_1 >> 0x17) + 0x7d;
    uVar4 = 0x40000000;
    if (!(bool)((byte)uVar2 & 1)) {
      uVar1 = uVar1 >> 1;
    }
    uVar5 = 0x10000000;
    uVar1 = uVar1 + 0xc0000000 >> 1;
    uVar2 = uVar2 >> 1 | 0x17000000;
    do {
      uVar3 = uVar2;
      bVar7 = uVar4 <= uVar1 * 2;
      uVar6 = uVar1 * 2 - uVar4;
      uVar2 = uVar6;
      if (bVar7) {
        uVar2 = uVar6 - uVar5;
      }
      bVar8 = uVar6 < uVar5;
      if (bVar7 && !bVar8) {
        uVar4 = uVar4 + uVar5 * 2;
        uVar1 = uVar2;
      }
      uVar5 = uVar5 >> 1;
      if (!bVar7 || bVar8) {
        uVar1 = uVar1 << 1;
      }
      uVar2 = uVar3 - 0x1000000;
    } while (0xffffff < uVar3);
    uVar2 = uVar4 << 0x1a;
    if (((bool)((byte)(uVar4 >> 6) & 1)) && (uVar4 = uVar4 + 0x80, uVar1 == uVar2)) {
      uVar4 = uVar4 & 0xffffff7f;
    }
    return CONCAT44(uVar3 - 0x1000000,(uVar4 >> 7) + uVar3 * 0x800000);
  }
  return CONCAT44(uVar1,DAT_4a1725b8);
}



// Address: 4a1725c0

/* WARNING: Removing unreachable block (ram,0x4a1729d8) */
/* WARNING: Removing unreachable block (ram,0x4a1729ec) */
/* WARNING: Removing unreachable block (ram,0x4a1728bc) */
/* WARNING: Removing unreachable block (ram,0x4a1728ac) */
/* WARNING: Removing unreachable block (ram,0x4a1729e0) */
/* WARNING: Removing unreachable block (ram,0x4a17289c) */

ulonglong FUN_4a1725c0(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  
  if (-1 < (int)(param_1 ^ param_2)) {
    if (param_1 < param_2) {
      uVar3 = param_1 - param_2 ^ 0x80000000;
      param_1 = param_1 - uVar3;
      param_2 = param_2 + uVar3;
    }
    uVar3 = param_1 >> 0x17;
    uVar4 = uVar3 - (param_2 >> 0x17);
    if ((param_2 & 0x7f800000) != 0 && (uVar3 & 0xff) != 0xff) {
      uVar1 = param_1 << 8 | 0x80000000;
      param_2 = param_2 << 8;
      uVar6 = uVar1 - ((param_2 | 0x80000000) >> (uVar4 & 0xff));
      if ((int)uVar6 < 0) {
        bVar7 = (bool)((byte)(uVar6 >> 7) & 1);
        uVar3 = (uVar6 >> 8) + (uVar3 - 1) * 0x800000 + (uint)bVar7;
        if (!bVar7) {
          return CONCAT44(param_2,uVar3) | 0x8000000000000000;
        }
        if ((uVar6 & 0x7f) != 0) {
          return CONCAT44(param_2,uVar3) | 0x8000000000000000;
        }
      }
      else {
        bVar8 = (uVar3 & 0xfe) == 0;
        bVar7 = false;
        if (!bVar8) {
          uVar1 = uVar6 * 2;
          bVar7 = (int)uVar1 < 0;
          bVar8 = uVar1 == 0;
        }
        if (!bVar7) {
          if (bVar8) {
            if (uVar6 >> 7 != 0) {
              return CONCAT44(param_2,(param_1 >> 0x1f) << 0x1f) | 0x8000000000000000;
            }
            return (ulonglong)param_2 << 0x20 | 0x8000000000000000;
          }
          if (uVar1 != 0) {
            uVar4 = uVar1;
            uVar6 = uVar3;
            if (uVar1 >> 0x17 == 0) {
              uVar4 = uVar1 << 8;
              uVar6 = uVar3 - 8;
              if ((uVar1 & 0xffffff) >> 0xf == 0) {
                uVar4 = uVar1 << 0x10;
                uVar6 = uVar3 - 0x10;
              }
            }
            if ((uVar4 & 0x78000000) != 0) {
              uVar4 = uVar4 >> 4;
              uVar6 = uVar6 + 4;
            }
            if ((uVar4 & 0x6000000) != 0) {
              uVar4 = uVar4 >> 2;
              uVar6 = uVar6 + 2;
            }
            uVar6 = uVar6 - ((uVar4 < 0x1000000) + 9);
            if (uVar4 >= 0x1000000) {
              uVar4 = uVar4 >> 1;
            }
            if ((uVar3 ^ uVar6) >> 8 != 0) {
              return CONCAT44(param_2,(param_1 >> 0x1f) << 0x1f) | 0x8000000000000000;
            }
            return CONCAT44(param_2,uVar4 + uVar6 * 0x800000) | 0x8000000000000000;
          }
          return (ulonglong)param_2 << 0x20 | 0x8000000000000000;
        }
        bVar7 = (bool)((byte)(uVar1 >> 7) & 1);
        uVar3 = ((int)uVar1 >> 8) + uVar3 * 0x800000 + (uint)bVar7;
        if (!bVar7) {
          return CONCAT44(param_2,uVar3) | 0x8000000000000000;
        }
        if ((uVar6 & 0x3f) != 0) {
          return CONCAT44(param_2,uVar3) | 0x8000000000000000;
        }
      }
      iVar2 = (param_2 | 0x80000000) << (0x20 - uVar4 & 0xff);
      if (iVar2 == 0) {
        uVar3 = uVar3 & 0xfffffffe;
      }
      else {
        uVar3 = uVar3 - 1;
      }
      return CONCAT44(iVar2,uVar3);
    }
    if ((uVar3 & 0xff) != 0xff) {
      if ((param_1 & 0x7f800000) == 0) {
        param_1 = 0;
      }
      return CONCAT44(param_2,param_1);
    }
    uVar3 = param_1 * 2;
    uVar4 = 0x4000002;
    if (param_2 << 1 < 0xff000001 && uVar3 < 0xff000001) {
      if (uVar3 == param_2 * 2) {
        if (-1 < (int)(param_1 ^ param_2)) {
          return CONCAT44(param_2,DAT_4a172724);
        }
        return CONCAT44(param_2,param_1);
      }
      if (uVar3 != 0xff000000) {
        return CONCAT44(param_2,param_2) ^ 0x80000000;
      }
      return CONCAT44(param_2,param_1);
    }
LAB_4a171b9c:
    uVar4 = uVar4 & 0xf;
    if (uVar4 == 9) {
      return (ulonglong)param_2 << 0x20;
    }
    if (uVar4 == 10) {
      return CONCAT44(param_2,DAT_4a171ba4);
    }
    if (uVar4 != 8) {
      return CONCAT44(param_2,DAT_4a171ba4);
    }
    return CONCAT44(param_2,param_2 & 0xff000000 | DAT_4a171ba4 >> 0x1d | (param_2 & 0xffffff) << 3)
    ;
  }
  param_2 = param_2 ^ 0x80000000;
  iVar2 = param_1 - param_2;
  if (param_1 < param_2) {
    param_1 = param_1 - iVar2;
    param_2 = param_2 + iVar2;
  }
  uVar3 = param_1 >> 0x17;
  uVar4 = uVar3 - (param_2 >> 0x17);
  if ((param_2 & 0x7f800000) == 0 || (uVar3 & 0xff) == 0xff) {
    if ((uVar3 & 0xff) != 0xff) {
      if ((param_1 & 0x7f800000) == 0) {
        param_1 = param_1 & 0x80000000;
      }
      return CONCAT44(param_2,param_1);
    }
    uVar3 = param_1 * 2;
    uVar4 = 0x4000001;
    if (param_2 << 1 < 0xff000001 && uVar3 < 0xff000001) {
      if (uVar3 == param_2 * 2) {
        if ((int)(param_1 ^ param_2) < 0) {
          return CONCAT44(param_2,DAT_4a171b98);
        }
        return CONCAT44(param_2,param_1);
      }
      if (uVar3 != 0xff000000) {
        return CONCAT44(param_2,param_2);
      }
      return CONCAT44(param_2,param_1);
    }
    goto LAB_4a171b9c;
  }
  uVar6 = param_1 << 8 | 0x80000000;
  param_2 = param_2 << 8;
  uVar1 = (param_2 | 0x80000000) >> (uVar4 & 0xff);
  uVar5 = uVar6 + uVar1;
  if (CARRY4(uVar6,uVar1)) {
    uVar1 = uVar5 >> 1 | 0x80000000;
    bVar7 = (bool)((byte)(uVar1 >> 7) & 1);
    uVar1 = uVar1 >> 8;
    uVar3 = uVar1 + uVar3 * 0x800000 + (uint)bVar7;
    if (bVar7) {
      uVar1 = uVar5 & 0xff;
    }
    uVar6 = uVar3 * 2;
    if (uVar1 != 0) {
      if (uVar6 < 0xff000000) {
        return CONCAT44(param_2,uVar3) | 0x8000000000000000;
      }
      goto LAB_4a171b0c;
    }
  }
  else {
    bVar7 = (bool)((byte)(uVar5 >> 7) & 1);
    uVar3 = (uVar5 >> 8) + (uVar3 - 1) * 0x800000 + (uint)bVar7;
    if (!bVar7) {
      return CONCAT44(param_2,uVar3) | 0x8000000000000000;
    }
    uVar6 = uVar3 * 2;
    if ((uVar5 & 0x7f) != 0) {
      bVar7 = 0xfeffffff < uVar6;
    }
    if (!bVar7) {
      return CONCAT44(param_2,uVar3) | 0x8000000000000000;
    }
  }
  iVar2 = (param_2 | 0x80000000) << (0x20 - uVar4 & 0xff);
  if (iVar2 == 0) {
    uVar3 = uVar3 & 0xfffffffe;
  }
  if (uVar6 < 0xff000000) {
    return CONCAT44(iVar2,uVar3);
  }
LAB_4a171b0c:
  uVar3 = uVar3 + 0xa0000000 >> 0x17;
  return CONCAT44(uVar3,(uVar3 | 0xff) << 0x17) | 0xff00000000;
}



// Address: 4a1727bc

undefined4 FUN_4a1727bc(void)

{
  return 0;
}



// Address: 4a1727c4

/* WARNING: Removing unreachable block (ram,0x4a1729ec) */

ulonglong FUN_4a1727c4(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (int)param_1 >> 0x17;
  uVar3 = param_1 << 8;
  if (uVar4 != 0) {
    uVar3 = uVar3 | 0x80000000;
  }
  if ((int)uVar4 < 0) {
    if (param_1 < 0xdf000001) {
      iVar1 = -(uVar4 & 0xff);
      uVar2 = iVar1 + 0xbe;
      if ((uVar4 & 0xff) == 0) {
        uVar3 = uVar3 & 0x7fffffff;
      }
      uVar4 = iVar1 + 0x9e;
      if (uVar2 < 0x20) {
        uVar4 = 0x20 - uVar2;
      }
      if (uVar2 < 0x20) {
        uVar4 = uVar3 << (uVar4 & 0xff);
      }
      else {
        uVar4 = uVar3 >> (uVar4 & 0xff);
      }
      return CONCAT44(-((uVar3 >> (uVar2 & 0xff)) + (uint)(uVar4 != 0)),-uVar4);
    }
  }
  else {
    uVar2 = -uVar4 + 0xbe;
    if (uVar4 < 0xbf && uVar2 != 0) {
      uVar4 = -uVar4 + 0x9e;
      if (uVar2 < 0x20) {
        uVar4 = 0x20 - uVar2;
      }
      if (uVar2 < 0x20) {
        uVar4 = uVar3 << (uVar4 & 0xff);
      }
      else {
        uVar4 = uVar3 >> (uVar4 & 0xff);
      }
      return CONCAT44(uVar3 >> (uVar2 & 0xff),uVar4);
    }
  }
  if (param_1 * 2 < 0xff000001) {
    if (param_1 * 2 != 0xff000000) {
      uVar3 = ~((int)param_1 >> 0x1f);
      return CONCAT44(uVar3,uVar3) ^ 0x8000000000000000;
    }
    uVar3 = ~((int)param_1 >> 0x1f);
    return CONCAT44(uVar3,uVar3) ^ 0x8000000000000000;
  }
  uVar3 = DAT_4a172860 & 0xf;
  if (uVar3 == 9) {
    if ((DAT_4a172860 & 0x100000) != 0) {
      return CONCAT44(~(DAT_4a172860 << 0xf) << 1,8);
    }
    return (ulonglong)param_2 << 0x20;
  }
  if (uVar3 == 10) {
    uVar3 = DAT_4a171bb0;
    if ((DAT_4a172860 & 0x40) != 0) {
      uVar3 = 0x80000000;
    }
    return CONCAT44(param_2,uVar3);
  }
  if (uVar3 != 8) {
    return CONCAT44(param_2,DAT_4a171bb0);
  }
  if ((DAT_4a172860 & 0x40) != 0) {
    return 0;
  }
  if ((DAT_4a172860 & 0x10) != 0) {
    return CONCAT44(DAT_4a171bb0 & 0xff000000 | (DAT_4a171bb0 & 0xfffffff) >> 3,DAT_4a171bb0 << 0x1d
                   );
  }
  return CONCAT44(param_2,param_2 & 0xff000000 | DAT_4a171bb0 >> 0x1d | (param_2 & 0xffffff) << 3);
}



// Address: 4a172870

void FUN_4a172870(void)

{
  return;
}



// Address: 4a1728ec

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

longlong FUN_4a1728ec(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  char in_OV;
  bool bVar3;
  bool bVar4;
  
  uVar2 = 0x7ff;
  uVar1 = param_2 >> 0x14 & 0x7ff;
  bVar3 = uVar1 == 0;
  if (!bVar3) {
    uVar2 = uVar1 ^ 0x7ff;
    bVar3 = uVar2 == 0;
  }
  bVar4 = bVar3;
  if (!bVar3) {
    in_OV = SBORROW4(uVar2,param_3);
    bVar4 = uVar2 == param_3;
  }
  bVar3 = !bVar3 && (int)(uVar2 - param_3) < 0;
  if (!bVar4 && bVar3 == (bool)in_OV) {
    in_OV = SCARRY4(param_3,uVar1);
    bVar3 = (int)(param_3 + uVar1) < 0;
    bVar4 = param_3 + uVar1 == 0;
  }
  if (!bVar4 && bVar3 == (bool)in_OV) {
    return CONCAT44(param_2 + param_3 * 0x100000,param_1);
  }
  if (uVar1 == 0) {
    return (ulonglong)(param_2 & 0x80000000) << 0x20;
  }
  if (uVar2 == 0) {
    if (param_1 == 0 && (param_2 & 0xfffff) == 0) {
      return CONCAT44(param_2,param_1);
    }
    return (ulonglong)DAT_4a170a38 << 0x20;
  }
  param_2 = param_2 & 0x80000000;
  if (-1 < (int)param_3) {
    param_2 = param_2 | 0x7ff00000;
  }
  return (ulonglong)param_2 << 0x20;
}



// Address: 4a17295c

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

ulonglong FUN_4a17295c(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  char in_OV;
  bool bVar2;
  bool bVar3;
  
  uVar1 = param_1 >> 0x17 & 0xff;
  bVar2 = uVar1 == 0;
  if (!bVar2) {
    param_4 = uVar1 ^ 0xff;
    bVar2 = param_4 == 0;
  }
  bVar3 = bVar2;
  if (!bVar2) {
    in_OV = SBORROW4(param_4,param_2);
    bVar3 = param_4 == param_2;
  }
  bVar2 = !bVar2 && (int)(param_4 - param_2) < 0;
  if (!bVar3 && bVar2 == (bool)in_OV) {
    in_OV = SCARRY4(param_2,uVar1);
    bVar2 = (int)(param_2 + uVar1) < 0;
    bVar3 = param_2 + uVar1 == 0;
  }
  if (!bVar3 && bVar2 == (bool)in_OV) {
    return CONCAT44(param_2,param_1 + param_2 * 0x800000);
  }
  if (uVar1 == 0) {
    return CONCAT44(param_2,param_1) & 0xffffffff80000000;
  }
  if (param_4 == 0) {
    if ((param_1 & 0x7fffff) == 0) {
      return CONCAT44(param_2,param_1);
    }
    return CONCAT44(param_2,DAT_4a171bb0);
  }
  param_1 = param_1 & 0x80000000;
  if (-1 < (int)param_2) {
    param_1 = param_1 | 0x7f800000;
  }
  return CONCAT44(param_2,param_1);
}



// Address: 4a1729c8

void FUN_4a1729c8(void)

{
  return;
}



// Address: 4a1729cc

void FUN_4a1729cc(void)

{
  return;
}




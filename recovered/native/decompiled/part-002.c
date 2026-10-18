/* AUTOMATED DECOMPILER OUTPUT. Not original source, not a buildable game.
 * Function boundaries, types, indirect calls, and data still require validation. */

// Address: 4a01ad64

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a01ad64(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  
  iVar10 = *(int *)PTR_LAB_4a01afb0;
  puVar7 = (uint *)param_1[1];
  uVar12 = param_1[2];
  uVar13 = param_1[3];
  iVar16 = param_1[4];
  iVar17 = param_1[5];
  iVar20 = *param_1 + -1;
  uVar9 = param_1[6];
  iVar22 = param_1[7];
  iVar14 = param_1[8];
  uVar4 = param_1[9];
  iVar18 = iVar10 + (((uVar4 & 0xf800) >> 6) + 0x8000) * 2;
  iVar19 = iVar10 + (uVar4 & 0x7c0) * 0x20;
  iVar10 = iVar10 + (uVar4 & 0x1f) * 0x800;
  iVar21 = iVar20;
  if (((uint)puVar7 & 3) == 0) goto LAB_4a01ae74;
  do {
    do {
      uVar4 = uVar12 & uVar9;
      bVar1 = *(byte *)(iVar22 + (uVar9 & uVar13 >> 0xc | uVar4 >> 0x15));
      uVar12 = uVar12 + iVar16;
      if ((bool)((byte)(uVar4 >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      uVar5 = (uint)*(ushort *)(iVar14 + (bVar1 & 0xf) * 2);
      iVar21 = iVar20 + -1;
      uVar13 = uVar13 + iVar17;
      uVar4 = (uVar5 & 0xffff7fff) >> 5;
      uVar4 = (uint)*(ushort *)(iVar18 + (uVar5 & 0x1f) * 2) |
              *(ushort *)(iVar10 + uVar4 * 2) & 0x1f | *(ushort *)(iVar19 + uVar4 * 2) & 0xffffffe0;
      uVar5 = (ushort)*puVar7 + uVar4;
      uVar15 = ((uint)(ushort)*puVar7 ^ uVar4 ^ uVar5) & 0x10820;
      uVar4 = uVar15 >> 5;
      uVar3 = (ushort)uVar15;
      uVar2 = uVar3 - ((short)uVar4 - (short)((uVar4 & 0x40) >> 1));
      *(ushort *)puVar7 = ((ushort)uVar5 | uVar2) - (uVar3 & ~uVar2);
      puVar7 = (uint *)((int)puVar7 + 2);
      if (iVar21 < 0) {
        return;
      }
LAB_4a01ae74:
      iVar20 = 0;
      puVar8 = puVar7;
    } while (iVar21 == 0);
    do {
      bVar1 = *(byte *)(iVar22 + (uVar9 & uVar13 >> 0xc | (uVar12 & uVar9) >> 0x15));
      if ((bool)((byte)((uVar12 & uVar9) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      uVar5 = (uint)*(ushort *)(iVar14 + (bVar1 & 0xf) * 2);
      uVar4 = uVar12 + iVar16 & uVar9;
      bVar1 = *(byte *)(iVar22 + (uVar9 & uVar13 + iVar17 >> 0xc | uVar4 >> 0x15));
      uVar12 = uVar12 + iVar16 + iVar16;
      if ((bool)((byte)(uVar4 >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      uVar4 = (uVar5 & 0xffff7fff) >> 5;
      iVar21 = iVar21 + -2;
      uVar6 = (uint)*(ushort *)(iVar14 + (bVar1 & 0xf) * 2);
      uVar13 = uVar13 + iVar17 + iVar17;
      uVar15 = (uVar6 & 0xffff7fff) >> 5;
      uVar11 = *puVar8;
      uVar4 = (uint)*(ushort *)(iVar18 + (uVar5 & 0x1f) * 2) |
              *(ushort *)(iVar10 + uVar4 * 2) & 0x1f | *(ushort *)(iVar19 + uVar4 * 2) & 0xffffffe0
              | (*(ushort *)(iVar10 + uVar15 * 2) & 0x1f |
                 *(ushort *)(iVar19 + uVar15 * 2) & 0xffffffe0 |
                (uint)*(ushort *)(iVar18 + (uVar6 & 0x1f) * 2)) << 0x10;
      uVar5 = (uVar4 ^ uVar11 ^ uVar4 + uVar11) & DAT_4a01afb4;
      uVar15 = (uVar5 >> 5) - (((DAT_4a01afb4 ^ DAT_4a01afb4 >> 5) & uVar5 >> 5) >> 1);
      if (CARRY4(uVar4,uVar11)) {
        uVar15 = uVar15 | 0x8000000;
      }
      puVar7 = puVar8 + 1;
      *puVar8 = (uVar5 - uVar15 | uVar4 + uVar11) - (uVar5 & ~(uVar5 - uVar15));
      puVar8 = puVar7;
    } while (0 < iVar21);
    iVar20 = 0;
  } while (iVar21 == 0);
  return;
}



// Address: 4a01afb8

void FUN_4a01afb8(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  
  iVar13 = *(int *)PTR_LAB_4a01b0c0;
  iVar8 = *param_1 + -1;
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  iVar16 = param_1[4];
  iVar10 = param_1[5];
  uVar9 = param_1[6];
  iVar11 = param_1[7];
  iVar12 = param_1[8];
  uVar3 = param_1[9];
  puVar5 = (ushort *)param_1[1];
  do {
    uVar14 = uVar6 & uVar9;
    iVar8 = iVar8 + -1;
    uVar6 = uVar6 + iVar16;
    uVar4 = (uint)*(ushort *)
                   (iVar12 + (uint)*(byte *)(iVar11 + (uVar9 & uVar7 >> 0xc | uVar14 >> 0x14)) * 2);
    uVar7 = uVar7 + iVar10;
    uVar14 = (uVar4 & 0xffff7fff) >> 5;
    uVar14 = (uint)*(ushort *)(iVar13 + (((uVar3 & 0xf800) >> 6) + 0x8000) * 2 + (uVar4 & 0x1f) * 2)
             | *(ushort *)(iVar13 + (uVar3 & 0x7c0) * 0x20 + uVar14 * 2) & 0xffffffe0 |
               *(ushort *)(iVar13 + (uVar3 & 0x1f) * 0x800 + uVar14 * 2) & 0x1f;
    uVar4 = *puVar5 + uVar14;
    uVar15 = (uVar14 ^ uVar4 ^ (uint)*puVar5) & 0x10820;
    uVar14 = uVar15 >> 5;
    uVar2 = (ushort)uVar15;
    uVar1 = uVar2 - ((short)uVar14 - (short)((uVar14 & 0x40) >> 1));
    *puVar5 = ((ushort)uVar4 | uVar1) - (uVar2 & ~uVar1);
    puVar5 = puVar5 + 1;
  } while (-1 < iVar8);
  return;
}



// Address: 4a01b0c4

void FUN_4a01b0c4(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  
  iVar12 = *(int *)PTR_LAB_4a01b1b4;
  iVar8 = *param_1 + -1;
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  iVar11 = param_1[4];
  iVar10 = param_1[5];
  uVar9 = param_1[6];
  iVar15 = param_1[7];
  uVar3 = param_1[9];
  puVar5 = (ushort *)param_1[1];
  do {
    uVar4 = (uint)*(ushort *)(iVar15 + (uVar9 & uVar7 >> 0xd | (uVar6 & uVar9) >> 0x14) * 2);
    iVar8 = iVar8 + -1;
    uVar7 = uVar7 + iVar10;
    uVar13 = (uVar4 & 0xffff7fff) >> 5;
    uVar13 = (uint)*(ushort *)(iVar12 + (((uVar3 & 0xf800) >> 6) + 0x8000) * 2 + (uVar4 & 0x1f) * 2)
             | *(ushort *)(iVar12 + (uVar3 & 0x7c0) * 0x20 + uVar13 * 2) & 0xffffffe0 |
               *(ushort *)(iVar12 + (uVar3 & 0x1f) * 0x800 + uVar13 * 2) & 0x1f;
    uVar4 = *puVar5 + uVar13;
    uVar14 = (uVar13 ^ uVar4 ^ (uint)*puVar5) & 0x10820;
    uVar13 = uVar14 >> 5;
    uVar2 = (ushort)uVar14;
    uVar1 = uVar2 - ((short)uVar13 - (short)((uVar13 & 0x40) >> 1));
    uVar6 = uVar6 + iVar11;
    *puVar5 = ((ushort)uVar4 | uVar1) - (uVar2 & ~uVar1);
    puVar5 = puVar5 + 1;
  } while (-1 < iVar8);
  return;
}



// Address: 4a01b1b8

void FUN_4a01b1b8(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  
  iVar13 = *(int *)PTR_LAB_4a01b2b0;
  iVar9 = *param_1 + -1;
  uVar7 = param_1[2];
  uVar8 = param_1[3];
  iVar12 = param_1[4];
  iVar11 = param_1[5];
  uVar10 = param_1[6];
  iVar15 = param_1[7];
  uVar3 = param_1[9];
  puVar6 = (ushort *)param_1[1];
  do {
    uVar1 = *(ushort *)(iVar15 + (uVar10 & uVar8 >> 0xd | (uVar7 & uVar10) >> 0x14) * 2);
    iVar9 = iVar9 + -1;
    uVar8 = uVar8 + iVar11;
    uVar4 = (uVar1 & 0x7ff) >> 6 | (uVar1 & 0x1f) << 5;
    uVar4 = (uint)*(ushort *)
                   (iVar13 + (((uVar3 & 0xf800) >> 6) + 0x8000) * 2 + (uint)(uVar1 >> 0xb) * 2) |
            *(ushort *)(iVar13 + (uVar3 & 0x7c0) * 0x20 + uVar4 * 2) & 0xffffffe0 |
            *(ushort *)(iVar13 + (uVar3 & 0x1f) * 0x800 + uVar4 * 2) & 0x1f;
    uVar5 = *puVar6 + uVar4;
    uVar14 = (uVar4 ^ uVar5 ^ (uint)*puVar6) & 0x10820;
    uVar4 = uVar14 >> 5;
    uVar2 = (ushort)uVar14;
    uVar1 = uVar2 - ((short)uVar4 - (short)((uVar4 & 0x40) >> 1));
    uVar7 = uVar7 + iVar12;
    *puVar6 = ((ushort)uVar5 | uVar1) - (uVar2 & ~uVar1);
    puVar6 = puVar6 + 1;
  } while (-1 < iVar9);
  return;
}



// Address: 4a01b2b4

void FUN_4a01b2b4(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  
  iVar12 = param_1[5];
  iVar10 = *param_1 + -1;
  uVar8 = param_1[2];
  uVar9 = param_1[3];
  iVar14 = param_1[4];
  uVar11 = param_1[6];
  iVar13 = param_1[8];
  iVar16 = param_1[7];
  uVar4 = param_1[9];
  puVar7 = (ushort *)param_1[1];
  do {
    uVar5 = uVar8 & uVar11;
    bVar1 = *(byte *)(iVar16 + (uVar11 & uVar9 >> 0xc | uVar5 >> 0x15));
    if ((bool)((byte)(uVar5 >> 0x14) & 1)) {
      bVar1 = bVar1 >> 4;
    }
    uVar5 = (uint)*(ushort *)(iVar13 + (bVar1 & 0xf) * 2);
    uVar8 = uVar8 + iVar14;
    uVar9 = uVar9 + iVar12;
    uVar5 = (((uVar4 & 0xffff) >> 0xb) * (uVar5 & 0xf) >> 4) << 0xb |
            (((uVar4 & 0x7ff) >> 5) * ((uVar5 & 0xff) >> 4) >> 4) << 5 |
            (uVar4 & 0x1f) * ((uVar5 & 0xfff) >> 8) >> 4;
    uVar6 = *puVar7 + uVar5;
    uVar15 = (uVar5 ^ uVar6 ^ (uint)*puVar7) & 0x10820;
    uVar5 = uVar15 >> 5;
    uVar3 = (ushort)uVar15;
    uVar2 = uVar3 - ((short)uVar5 - (short)((uVar5 & 0x40) >> 1));
    iVar10 = iVar10 + -1;
    *puVar7 = ((ushort)uVar6 | uVar2) - (uVar3 & ~uVar2);
    puVar7 = puVar7 + 1;
  } while (-1 < iVar10);
  return;
}



// Address: 4a01b3ac

void FUN_4a01b3ac(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  
  iVar12 = param_1[5];
  iVar9 = *param_1 + -1;
  uVar7 = param_1[2];
  uVar8 = param_1[3];
  iVar14 = param_1[4];
  uVar10 = param_1[6];
  iVar11 = param_1[7];
  uVar3 = param_1[9];
  puVar6 = (ushort *)param_1[1];
  do {
    uVar4 = (uint)*(ushort *)(iVar11 + (uVar10 & uVar8 >> 0xd | (uVar7 & uVar10) >> 0x14) * 2);
    uVar8 = uVar8 + iVar12;
    uVar4 = (((uVar3 & 0xffff) >> 0xb) * (uVar4 & 0xf) >> 4) << 0xb |
            (((uVar3 & 0x7ff) >> 5) * ((uVar4 & 0xff) >> 4) >> 4) << 5 |
            (uVar3 & 0x1f) * ((uVar4 & 0xfff) >> 8) >> 4;
    uVar5 = *puVar6 + uVar4;
    uVar13 = (uVar4 ^ uVar5 ^ (uint)*puVar6) & 0x10820;
    uVar4 = uVar13 >> 5;
    uVar2 = (ushort)uVar13;
    uVar1 = uVar2 - ((short)uVar4 - (short)((uVar4 & 0x40) >> 1));
    iVar9 = iVar9 + -1;
    uVar7 = uVar7 + iVar14;
    *puVar6 = ((ushort)uVar5 | uVar1) - (uVar2 & ~uVar1);
    puVar6 = puVar6 + 1;
  } while (-1 < iVar9);
  return;
}



// Address: 4a01b484

void FUN_4a01b484(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  
  iVar8 = *(int *)PTR_LAB_4a01b6b0;
  puVar5 = (uint *)param_1[1];
  uVar10 = param_1[2];
  uVar11 = param_1[3];
  iVar14 = param_1[4];
  iVar15 = param_1[5];
  uVar3 = param_1[9];
  iVar18 = *param_1 + -1;
  uVar7 = param_1[6];
  iVar20 = param_1[7];
  iVar16 = iVar8 + (((uVar3 & 0xf800) >> 6) + 0x8000) * 2;
  iVar17 = iVar8 + (uVar3 & 0x7c0) * 0x20;
  iVar8 = iVar8 + (uVar3 & 0x1f) * 0x800;
  iVar19 = iVar18;
  if (((uint)puVar5 & 3) == 0) goto LAB_4a01b584;
  do {
    do {
      uVar3 = *(uint *)(iVar20 + (uVar7 & uVar11 >> 0xe | (uVar10 & uVar7) >> 0x14) * 4);
      iVar19 = iVar18 + -1;
      uVar4 = (uVar3 & 0xffff) >> 0xb | (uVar3 & 0xf8) << 2;
      uVar11 = uVar11 + iVar15;
      uVar3 = *(ushort *)(iVar8 + uVar4 * 2) & 0x1f | *(ushort *)(iVar17 + uVar4 * 2) & 0xffffffe0 |
              (uint)*(ushort *)(iVar16 + ((uVar3 & 0xffffff) >> 0x13) * 2);
      uVar10 = uVar10 + iVar14;
      uVar12 = (ushort)*puVar5 + uVar3;
      uVar4 = ((uint)(ushort)*puVar5 ^ uVar3 ^ uVar12) & 0x10820;
      uVar3 = uVar4 >> 5;
      uVar2 = (ushort)uVar4;
      uVar1 = uVar2 - ((short)uVar3 - (short)((uVar3 & 0x40) >> 1));
      *(ushort *)puVar5 = ((ushort)uVar12 | uVar1) - (uVar2 & ~uVar1);
      puVar5 = (uint *)((int)puVar5 + 2);
      if (iVar19 < 0) {
        return;
      }
LAB_4a01b584:
      iVar18 = 0;
      puVar6 = puVar5;
    } while (iVar19 == 0);
    do {
      uVar13 = *(uint *)(iVar20 + (uVar7 & uVar11 + iVar15 >> 0xe |
                                  (uVar10 + iVar14 & uVar7) >> 0x14) * 4);
      uVar3 = *(uint *)(iVar20 + (uVar7 & uVar11 >> 0xe | (uVar10 & uVar7) >> 0x14) * 4);
      uVar10 = uVar10 + iVar14 + iVar14;
      uVar4 = (uVar3 & 0xffff) >> 0xb | (uVar3 & 0xf8) << 2;
      iVar19 = iVar19 + -2;
      uVar12 = (uVar13 & 0xffff) >> 0xb | (uVar13 & 0xf8) << 2;
      uVar11 = uVar11 + iVar15 + iVar15;
      uVar9 = *puVar6;
      uVar3 = *(ushort *)(iVar8 + uVar4 * 2) & 0x1f | *(ushort *)(iVar17 + uVar4 * 2) & 0xffffffe0 |
              (uint)*(ushort *)(iVar16 + ((uVar3 & 0xffffff) >> 0x13) * 2) |
              ((uint)*(ushort *)(iVar16 + ((uVar13 & 0xffffff) >> 0x13) * 2) |
              *(ushort *)(iVar8 + uVar12 * 2) & 0x1f | *(ushort *)(iVar17 + uVar12 * 2) & 0xffffffe0
              ) << 0x10;
      uVar4 = (uVar3 ^ uVar9 ^ uVar3 + uVar9) & DAT_4a01b6b4;
      uVar12 = (uVar4 >> 5) - (((DAT_4a01b6b4 ^ DAT_4a01b6b4 >> 5) & uVar4 >> 5) >> 1);
      if (CARRY4(uVar3,uVar9)) {
        uVar12 = uVar12 | 0x8000000;
      }
      puVar5 = puVar6 + 1;
      *puVar6 = (uVar4 - uVar12 | uVar3 + uVar9) - (uVar4 & ~(uVar4 - uVar12));
      puVar6 = puVar5;
    } while (0 < iVar19);
    iVar18 = 0;
  } while (iVar19 == 0);
  return;
}



// Address: 4a01b6b8

void FUN_4a01b6b8(uint *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  
  uVar3 = DAT_4a01ba14;
  uVar9 = *param_1;
  puVar7 = (uint *)param_1[1];
  uVar13 = param_1[10];
  uVar14 = param_1[0xc];
  uVar15 = param_1[0xe];
  iVar10 = uVar9 - 1;
  uVar4 = (param_1[9] & 0xfff0ffff) << 0xc;
  uVar5 = (param_1[0xb] & 0xfff0ffff) << 0xc;
  uVar11 = (param_1[0xd] & 0xfff0ffff) << 0xc;
  if ((uVar13 != 0 || uVar14 != 0) || uVar15 != 0) {
    puVar8 = puVar7;
    iVar12 = iVar10;
    if (((uint)puVar7 & 3) == 0) goto LAB_4a01b96c;
    do {
      do {
        uVar9 = (uVar5 >> 0x11 & 0x7e0) + (uVar11 >> 0x17) + (uVar4 >> 0xc & 0xf800);
        uVar6 = (ushort)*puVar8 + uVar9;
        uVar16 = (uVar9 ^ uVar6 ^ (uint)(ushort)*puVar8) & 0x10820;
        uVar9 = uVar16 >> 5;
        uVar2 = (ushort)uVar16;
        uVar1 = uVar2 - ((short)uVar9 - (short)((uVar9 & 0x40) >> 1));
        iVar12 = iVar10 + -1;
        uVar4 = uVar4 + uVar13;
        uVar5 = uVar5 + uVar14;
        uVar11 = uVar11 + uVar15;
        puVar7 = (uint *)((int)puVar8 + 2);
        *(ushort *)puVar8 = ((ushort)uVar6 | uVar1) - (uVar2 & ~uVar1);
        if (iVar12 < 0) {
          return;
        }
LAB_4a01b96c:
        iVar10 = 0;
        puVar8 = puVar7;
      } while (iVar12 == 0);
      do {
        uVar9 = (uVar5 >> 0x11 & 0x7e0) + (uVar11 >> 0x17) + (uVar4 >> 0xc & 0xf800) & 0xfffeffff |
                ((uVar4 + uVar13 >> 0xc & 0xf800) +
                (uVar5 + uVar14 >> 0x11 & 0x7e0) + (uVar11 + uVar15 >> 0x17)) * 0x10000;
        uVar16 = *puVar7;
        uVar4 = uVar4 + uVar13 + uVar13;
        uVar6 = (uVar9 ^ uVar16 ^ uVar9 + uVar16) & uVar3;
        uVar17 = (uVar6 >> 5) - (((uVar3 ^ uVar3 >> 5) & uVar6 >> 5) >> 1);
        if (CARRY4(uVar9,uVar16)) {
          uVar17 = uVar17 | 0x8000000;
        }
        *puVar7 = uVar6;
        iVar12 = iVar12 + -2;
        uVar5 = uVar5 + uVar14 + uVar14;
        uVar11 = uVar11 + uVar15 + uVar15;
        puVar8 = puVar7 + 1;
        *puVar7 = (uVar9 + uVar16 | uVar6 - uVar17) - (uVar6 & ~(uVar6 - uVar17));
        puVar7 = puVar8;
      } while (0 < iVar12);
      iVar10 = 0;
    } while (iVar12 == 0);
    return;
  }
  uVar4 = (param_1[9] & 0xf800) +
          ((param_1[0xb] & 0xffff) >> 5 & 0x7e0) + ((param_1[0xd] & 0xffff) >> 0xb);
  uVar5 = uVar4 | uVar4 * 0x10000;
  puVar8 = puVar7;
  if (((uint)puVar7 & 3) != 0) {
    uVar9 = uVar9 - 1;
    uVar14 = (ushort)*puVar7 + uVar5;
    uVar13 = ((uint)(ushort)*puVar7 ^ uVar14 ^ uVar5) & DAT_4a01ba14 + 0xf7e00000;
    uVar11 = uVar13 >> 5;
    uVar2 = (ushort)uVar13;
    uVar1 = uVar2 - ((short)uVar11 - (short)((uVar11 & 0x40) >> 1));
    puVar8 = (uint *)((int)puVar7 + 2);
    *(ushort *)puVar7 = ((ushort)uVar14 | uVar1) - (uVar2 & ~uVar1);
  }
  iVar10 = (int)uVar9 >> 3;
  uVar11 = (int)uVar9 >> 1 & 3;
  puVar7 = puVar8;
  if (uVar11 == 0) goto LAB_4a01b8a0;
  if (uVar11 == 1) goto LAB_4a01b860;
  if (uVar11 == 2) goto LAB_4a01b820;
  if (uVar11 == 3) {
    while( true ) {
      uVar11 = *puVar8;
      uVar14 = (uVar11 ^ uVar5 ^ uVar5 + uVar11) & uVar3;
      uVar13 = (uVar14 >> 5) - (((uVar3 ^ uVar3 >> 5) & uVar14 >> 5) >> 1);
      if (CARRY4(uVar5,uVar11)) {
        uVar13 = uVar13 | 0x8000000;
      }
      *puVar8 = uVar14;
      puVar7 = puVar8 + 1;
      *puVar8 = (uVar14 - uVar13 | uVar5 + uVar11) - (uVar14 & ~(uVar14 - uVar13));
LAB_4a01b820:
      uVar11 = *puVar7;
      uVar14 = (uVar11 ^ uVar5 ^ uVar5 + uVar11) & uVar3;
      uVar13 = (uVar14 >> 5) - (((uVar3 ^ uVar3 >> 5) & uVar14 >> 5) >> 1);
      if (CARRY4(uVar5,uVar11)) {
        uVar13 = uVar13 | 0x8000000;
      }
      *puVar7 = uVar14;
      puVar8 = puVar7 + 1;
      *puVar7 = (uVar14 - uVar13 | uVar5 + uVar11) - (uVar14 & ~(uVar14 - uVar13));
LAB_4a01b860:
      uVar11 = *puVar8;
      uVar14 = (uVar11 ^ uVar5 ^ uVar5 + uVar11) & uVar3;
      uVar13 = (uVar14 >> 5) - (((uVar3 ^ uVar3 >> 5) & uVar14 >> 5) >> 1);
      if (CARRY4(uVar5,uVar11)) {
        uVar13 = uVar13 | 0x8000000;
      }
      *puVar8 = uVar14;
      puVar7 = puVar8 + 1;
      *puVar8 = (uVar14 - uVar13 | uVar5 + uVar11) - (uVar14 & ~(uVar14 - uVar13));
LAB_4a01b8a0:
      bVar18 = iVar10 == 0;
      iVar10 = iVar10 + -1;
      if (bVar18) break;
      uVar11 = *puVar7;
      uVar14 = (uVar11 ^ uVar5 ^ uVar5 + uVar11) & uVar3;
      uVar13 = (uVar14 >> 5) - (((uVar3 ^ uVar3 >> 5) & uVar14 >> 5) >> 1);
      if (CARRY4(uVar5,uVar11)) {
        uVar13 = uVar13 | 0x8000000;
      }
      *puVar7 = uVar14;
      puVar8 = puVar7 + 1;
      *puVar7 = (uVar14 - uVar13 | uVar5 + uVar11) - (uVar14 & ~(uVar14 - uVar13));
    }
  }
  if ((uVar9 & 1) == 0) {
    return;
  }
  uVar11 = (ushort)*puVar7 + uVar4;
  uVar5 = (uVar4 ^ uVar11 ^ (uint)(ushort)*puVar7) & 0x10820;
  uVar4 = uVar5 >> 5;
  uVar2 = (ushort)uVar5;
  uVar1 = uVar2 - ((short)uVar4 - (short)((uVar4 & 0x40) >> 1));
  *(ushort *)puVar7 = ((ushort)uVar11 | uVar1) - (uVar2 & ~uVar1);
  return;
}



// Address: 4a01ba18

void FUN_4a01ba18(int *param_1)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  
  iVar10 = *(int *)PTR_LAB_4a01bb84;
  iVar19 = *param_1 + -1;
  uVar11 = param_1[2];
  uVar24 = param_1[3];
  iVar15 = param_1[4];
  iVar12 = param_1[5];
  uVar20 = param_1[6];
  iVar13 = param_1[7];
  iVar16 = param_1[8];
  iVar23 = param_1[10];
  iVar21 = param_1[0xc];
  iVar5 = param_1[0xe];
  uVar14 = (param_1[9] & 0xfff0ffffU) << 0xc;
  uVar17 = (param_1[0xb] & 0xfff0ffffU) << 0xc;
  uVar18 = (param_1[0xd] & 0xfff0ffffU) << 0xc;
  puVar9 = (ushort *)param_1[1];
  do {
    uVar6 = uVar11 & uVar20;
    bVar2 = *(byte *)(iVar13 + (uVar20 & uVar24 >> 0xc | uVar6 >> 0x15));
    uVar11 = uVar11 + iVar15;
    if ((bool)((byte)(uVar6 >> 0x14) & 1)) {
      bVar2 = bVar2 >> 4;
    }
    uVar24 = uVar24 + iVar12;
    uVar7 = (uint)*(ushort *)(iVar16 + (bVar2 & 0xf) * 2);
    uVar6 = uVar14 >> 0x17;
    uVar14 = uVar14 + iVar23;
    uVar8 = uVar17 >> 0x17;
    uVar17 = uVar17 + iVar21;
    uVar22 = uVar18 >> 0x17;
    uVar18 = uVar18 + iVar5;
    uVar1 = (uVar7 & 0xffff7fff) >> 5;
    uVar6 = *(ushort *)(iVar10 + uVar8 * 0x800 + uVar1 * 2) & 0xffffffe0 |
            *(ushort *)(iVar10 + uVar22 * 0x800 + uVar1 * 2) & 0x1f |
            (uint)*(ushort *)(iVar10 + (uVar6 * 0x20 + 0x8000) * 2 + (uVar7 & 0x1f) * 2);
    uVar22 = *puVar9 + uVar6;
    uVar8 = (uVar6 ^ uVar22 ^ (uint)*puVar9) & 0x10820;
    uVar6 = uVar8 >> 5;
    uVar4 = (ushort)uVar8;
    uVar3 = uVar4 - ((short)uVar6 - (short)((uVar6 & 0x40) >> 1));
    iVar19 = iVar19 + -1;
    *puVar9 = ((ushort)uVar22 | uVar3) - (uVar4 & ~uVar3);
    puVar9 = puVar9 + 1;
  } while (-1 < iVar19);
  return;
}



// Address: 4a01bb88

void FUN_4a01bb88(int *param_1)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  
  iVar8 = *(int *)PTR_LAB_4a01bcec;
  iVar17 = *param_1 + -1;
  uVar9 = param_1[2];
  uVar23 = param_1[3];
  iVar10 = param_1[4];
  iVar13 = param_1[5];
  uVar18 = param_1[6];
  iVar11 = param_1[7];
  iVar14 = param_1[8];
  iVar19 = param_1[10];
  iVar22 = param_1[0xc];
  iVar4 = param_1[0xe];
  uVar12 = (param_1[9] & 0xfff0ffffU) << 0xc;
  uVar15 = (param_1[0xb] & 0xfff0ffffU) << 0xc;
  uVar16 = (param_1[0xd] & 0xfff0ffffU) << 0xc;
  puVar7 = (ushort *)param_1[1];
  do {
    uVar5 = uVar23 >> 0xc;
    uVar20 = uVar9 & uVar18;
    uVar23 = uVar23 + iVar13;
    uVar6 = uVar16 >> 0x17;
    uVar9 = uVar9 + iVar10;
    uVar21 = uVar12 >> 0x17;
    uVar12 = uVar12 + iVar19;
    uVar1 = uVar15 >> 0x17;
    uVar15 = uVar15 + iVar22;
    uVar20 = (uint)*(ushort *)
                    (iVar14 + (uint)*(byte *)(iVar11 + (uVar18 & uVar5 | uVar20 >> 0x14)) * 2);
    uVar16 = uVar16 + iVar4;
    uVar5 = (uVar20 & 0xffff7fff) >> 5;
    uVar5 = *(ushort *)(iVar8 + uVar1 * 0x800 + uVar5 * 2) & 0xffffffe0 |
            *(ushort *)(iVar8 + uVar6 * 0x800 + uVar5 * 2) & 0x1f |
            (uint)*(ushort *)(iVar8 + (uVar21 * 0x20 + 0x8000) * 2 + (uVar20 & 0x1f) * 2);
    uVar21 = *puVar7 + uVar5;
    uVar6 = (uVar5 ^ uVar21 ^ (uint)*puVar7) & 0x10820;
    uVar5 = uVar6 >> 5;
    uVar3 = (ushort)uVar6;
    uVar2 = uVar3 - ((short)uVar5 - (short)((uVar5 & 0x40) >> 1));
    iVar17 = iVar17 + -1;
    *puVar7 = ((ushort)uVar21 | uVar2) - (uVar3 & ~uVar2);
    puVar7 = puVar7 + 1;
  } while (-1 < iVar17);
  return;
}



// Address: 4a01bcf0

void FUN_4a01bcf0(int *param_1)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  
  iVar9 = *(int *)PTR_LAB_4a01be44;
  iVar17 = *param_1 + -1;
  uVar10 = param_1[2];
  uVar22 = param_1[3];
  iVar14 = param_1[4];
  iVar11 = param_1[5];
  uVar18 = param_1[6];
  iVar12 = param_1[7];
  iVar19 = param_1[10];
  iVar21 = param_1[0xc];
  iVar4 = param_1[0xe];
  uVar13 = (param_1[9] & 0xfff0ffffU) << 0xc;
  uVar15 = (param_1[0xb] & 0xfff0ffffU) << 0xc;
  uVar16 = (param_1[0xd] & 0xfff0ffffU) << 0xc;
  puVar8 = (ushort *)param_1[1];
  do {
    uVar6 = uVar22 >> 0xd;
    uVar22 = uVar22 + iVar11;
    uVar5 = (uint)*(ushort *)(iVar12 + (uVar18 & uVar6 | (uVar10 & uVar18) >> 0x14) * 2);
    uVar10 = uVar10 + iVar14;
    uVar6 = uVar13 >> 0x17;
    uVar13 = uVar13 + iVar19;
    uVar7 = uVar15 >> 0x17;
    uVar15 = uVar15 + iVar21;
    uVar20 = uVar16 >> 0x17;
    uVar16 = uVar16 + iVar4;
    uVar1 = (uVar5 & 0xffff7fff) >> 5;
    uVar6 = *(ushort *)(iVar9 + uVar7 * 0x800 + uVar1 * 2) & 0xffffffe0 |
            *(ushort *)(iVar9 + uVar20 * 0x800 + uVar1 * 2) & 0x1f |
            (uint)*(ushort *)(iVar9 + (uVar6 * 0x20 + 0x8000) * 2 + (uVar5 & 0x1f) * 2);
    uVar20 = *puVar8 + uVar6;
    uVar7 = (uVar6 ^ uVar20 ^ (uint)*puVar8) & 0x10820;
    uVar6 = uVar7 >> 5;
    uVar3 = (ushort)uVar7;
    uVar2 = uVar3 - ((short)uVar6 - (short)((uVar6 & 0x40) >> 1));
    iVar17 = iVar17 + -1;
    *puVar8 = ((ushort)uVar20 | uVar2) - (uVar3 & ~uVar2);
    puVar8 = puVar8 + 1;
  } while (-1 < iVar17);
  return;
}



// Address: 4a01be48

void FUN_4a01be48(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  
  iVar8 = *(int *)PTR_LAB_4a01bfac;
  iVar16 = *param_1 + -1;
  uVar9 = param_1[2];
  uVar21 = param_1[3];
  iVar13 = param_1[4];
  iVar10 = param_1[5];
  uVar17 = param_1[6];
  iVar11 = param_1[7];
  iVar18 = param_1[10];
  iVar20 = param_1[0xc];
  iVar3 = param_1[0xe];
  uVar12 = (param_1[9] & 0xfff0ffffU) << 0xc;
  uVar14 = (param_1[0xb] & 0xfff0ffffU) << 0xc;
  uVar15 = (param_1[0xd] & 0xfff0ffffU) << 0xc;
  puVar7 = (ushort *)param_1[1];
  do {
    uVar5 = uVar15 >> 0x17;
    uVar1 = *(ushort *)(iVar11 + (uVar17 & uVar21 >> 0xd | (uVar9 & uVar17) >> 0x14) * 2);
    uVar21 = uVar21 + iVar10;
    uVar9 = uVar9 + iVar13;
    uVar6 = uVar12 >> 0x17;
    uVar12 = uVar12 + iVar18;
    uVar19 = uVar14 >> 0x17;
    uVar14 = uVar14 + iVar20;
    uVar15 = uVar15 + iVar3;
    uVar4 = (uVar1 & 0x7ff) >> 6 | (uVar1 & 0x1f) << 5;
    uVar5 = *(ushort *)(iVar8 + uVar19 * 0x800 + uVar4 * 2) & 0xffffffe0 |
            *(ushort *)(iVar8 + uVar5 * 0x800 + uVar4 * 2) & 0x1f |
            (uint)*(ushort *)(iVar8 + (uVar6 * 0x20 + 0x8000) * 2 + (uint)(uVar1 >> 0xb) * 2);
    uVar19 = *puVar7 + uVar5;
    uVar6 = (uVar5 ^ uVar19 ^ (uint)*puVar7) & 0x10820;
    uVar5 = uVar6 >> 5;
    uVar2 = (ushort)uVar6;
    uVar1 = uVar2 - ((short)uVar5 - (short)((uVar5 & 0x40) >> 1));
    iVar16 = iVar16 + -1;
    *puVar7 = ((ushort)uVar19 | uVar1) - (uVar2 & ~uVar1);
    puVar7 = puVar7 + 1;
  } while (-1 < iVar16);
  return;
}



// Address: 4a01bfb0

void FUN_4a01bfb0(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  
  iVar9 = param_1[5];
  iVar13 = *param_1 + -1;
  uVar7 = param_1[2];
  uVar8 = param_1[3];
  iVar19 = param_1[4];
  uVar14 = param_1[6];
  iVar10 = param_1[7];
  iVar20 = param_1[8];
  iVar17 = param_1[10];
  iVar15 = param_1[0xc];
  iVar18 = param_1[0xe];
  uVar12 = (param_1[0xd] & 0xfff0ffffU) << 0xc;
  puVar6 = (ushort *)param_1[1];
  uVar11 = (param_1[0xb] & 0xfff0ffffU) << 0xc;
  uVar21 = (param_1[9] & 0xfff0ffffU) << 0xc;
  do {
    uVar4 = uVar7 & uVar14;
    bVar1 = *(byte *)(iVar10 + (uVar14 & uVar8 >> 0xc | uVar4 >> 0x15));
    uVar7 = uVar7 + iVar19;
    if ((bool)((byte)(uVar4 >> 0x14) & 1)) {
      bVar1 = bVar1 >> 4;
    }
    uVar8 = uVar8 + iVar9;
    uVar4 = (uint)*(ushort *)(iVar20 + (bVar1 & 0xf) * 2);
    uVar4 = (((uVar21 & 0xfffffff) >> 0x17) * (uVar4 & 0xf) >> 4) << 0xb |
            (((uVar4 & 0xff) >> 4) * ((uVar11 & 0xfffffff) >> 0x16) >> 4) << 5 |
            ((uVar4 & 0xfff) >> 8) * ((uVar12 & 0xfffffff) >> 0x17) >> 4;
    uVar16 = *puVar6 + uVar4;
    uVar5 = (uVar4 ^ uVar16 ^ (uint)*puVar6) & 0x10820;
    uVar4 = uVar5 >> 5;
    uVar3 = (ushort)uVar5;
    uVar2 = uVar3 - ((short)uVar4 - (short)((uVar4 & 0x40) >> 1));
    iVar13 = iVar13 + -1;
    uVar12 = uVar12 + iVar18;
    *puVar6 = ((ushort)uVar16 | uVar2) - (uVar3 & ~uVar2);
    puVar6 = puVar6 + 1;
    uVar11 = uVar11 + iVar15;
    uVar21 = uVar21 + iVar17;
  } while (-1 < iVar13);
  return;
}



// Address: 4a01c104

void FUN_4a01c104(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  
  iVar8 = param_1[5];
  iVar11 = *param_1 + -1;
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  iVar17 = param_1[4];
  uVar12 = param_1[6];
  iVar18 = param_1[7];
  iVar15 = param_1[10];
  iVar13 = param_1[0xc];
  iVar16 = param_1[0xe];
  uVar10 = (param_1[0xd] & 0xfff0ffffU) << 0xc;
  puVar5 = (ushort *)param_1[1];
  uVar9 = (param_1[0xb] & 0xfff0ffffU) << 0xc;
  uVar19 = (param_1[9] & 0xfff0ffffU) << 0xc;
  do {
    uVar3 = uVar7 >> 0xd;
    uVar7 = uVar7 + iVar8;
    uVar3 = (uint)*(ushort *)(iVar18 + (uVar12 & uVar3 | (uVar6 & uVar12) >> 0x14) * 2);
    uVar6 = uVar6 + iVar17;
    uVar3 = (((uVar19 & 0xfffffff) >> 0x17) * (uVar3 & 0xf) >> 4) << 0xb |
            (((uVar3 & 0xff) >> 4) * ((uVar9 & 0xfffffff) >> 0x16) >> 4) << 5 |
            ((uVar3 & 0xfff) >> 8) * ((uVar10 & 0xfffffff) >> 0x17) >> 4;
    uVar14 = *puVar5 + uVar3;
    uVar4 = (uVar3 ^ uVar14 ^ (uint)*puVar5) & 0x10820;
    uVar3 = uVar4 >> 5;
    uVar2 = (ushort)uVar4;
    uVar1 = uVar2 - ((short)uVar3 - (short)((uVar3 & 0x40) >> 1));
    iVar11 = iVar11 + -1;
    uVar10 = uVar10 + iVar16;
    *puVar5 = ((ushort)uVar14 | uVar1) - (uVar2 & ~uVar1);
    puVar5 = puVar5 + 1;
    uVar9 = uVar9 + iVar13;
    uVar19 = uVar19 + iVar15;
  } while (-1 < iVar11);
  return;
}



// Address: 4a01c240

void FUN_4a01c240(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  
  iVar9 = *(int *)PTR_LAB_4a01c3a4;
  iVar17 = *param_1 + -1;
  uVar10 = param_1[2];
  uVar22 = param_1[3];
  iVar14 = param_1[4];
  iVar11 = param_1[5];
  uVar18 = param_1[6];
  iVar12 = param_1[7];
  iVar19 = param_1[10];
  iVar21 = param_1[0xc];
  iVar3 = param_1[0xe];
  uVar13 = (param_1[9] & 0xfff0ffffU) << 0xc;
  uVar15 = (param_1[0xb] & 0xfff0ffffU) << 0xc;
  uVar16 = (param_1[0xd] & 0xfff0ffffU) << 0xc;
  puVar8 = (ushort *)param_1[1];
  do {
    uVar6 = uVar16 >> 0x17;
    uVar4 = *(uint *)(iVar12 + (uVar18 & uVar22 >> 0xe | (uVar10 & uVar18) >> 0x14) * 4);
    uVar22 = uVar22 + iVar11;
    uVar10 = uVar10 + iVar14;
    uVar7 = uVar13 >> 0x17;
    uVar13 = uVar13 + iVar19;
    uVar20 = uVar15 >> 0x17;
    uVar15 = uVar15 + iVar21;
    uVar16 = uVar16 + iVar3;
    uVar5 = (uVar4 & 0xffff) >> 0xb | (uVar4 & 0xf8) << 2;
    uVar6 = *(ushort *)(iVar9 + uVar20 * 0x800 + uVar5 * 2) & 0xffffffe0 |
            *(ushort *)(iVar9 + uVar6 * 0x800 + uVar5 * 2) & 0x1f |
            (uint)*(ushort *)
                   (iVar9 + (uVar7 * 0x20 + 0x8000) * 2 + ((uVar4 & 0xffffff) >> 0x13) * 2);
    uVar20 = *puVar8 + uVar6;
    uVar7 = (uVar6 ^ uVar20 ^ (uint)*puVar8) & 0x10820;
    uVar6 = uVar7 >> 5;
    uVar2 = (ushort)uVar7;
    uVar1 = uVar2 - ((short)uVar6 - (short)((uVar6 & 0x40) >> 1));
    iVar17 = iVar17 + -1;
    *puVar8 = ((ushort)uVar20 | uVar1) - (uVar2 & ~uVar1);
    puVar8 = puVar8 + 1;
  } while (-1 < iVar17);
  return;
}



// Address: 4a01c4dc

void FUN_4a01c4dc(int *param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  
  uVar5 = DAT_4a01c898;
  iVar10 = *param_1 + -1;
  puVar7 = (uint *)param_1[1];
  uVar9 = param_1[2];
  uVar13 = param_1[3];
  iVar18 = param_1[7];
  iVar12 = param_1[4];
  iVar16 = param_1[5];
  uVar20 = param_1[6];
  iVar6 = param_1[8] + ((param_1[9] & 0xf800000U) >> 0x12);
  if (iVar16 != 0) {
    iVar11 = iVar10;
    if (((uint)puVar7 & 3) == 0) goto LAB_4a01c7e0;
    do {
      do {
        uVar14 = uVar9 & uVar20;
        bVar1 = *(byte *)(iVar18 + (uVar20 & uVar13 >> 0xc | uVar14 >> 0x15));
        uVar9 = uVar9 + iVar12;
        if ((bool)((byte)(uVar14 >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
        uVar14 = (uint)*(ushort *)(iVar6 + (bVar1 & 0xf) * 2);
        iVar11 = iVar10 + -1;
        uVar13 = uVar13 + iVar16;
        uVar17 = (ushort)*puVar7 - uVar14;
        uVar15 = ((uint)(ushort)*puVar7 ^ uVar14 ^ uVar17) & 0x10820;
        uVar14 = uVar15 >> 5;
        uVar4 = (ushort)uVar15;
        uVar3 = ~(uVar4 - ((short)uVar14 - (short)((uVar14 & 0x40) >> 1)));
        *(ushort *)puVar7 = (uVar4 & uVar3) + ((ushort)uVar17 & uVar3);
        puVar7 = (uint *)((int)puVar7 + 2);
        if (iVar11 < 0) {
          return;
        }
LAB_4a01c7e0:
        iVar10 = 0;
        puVar8 = puVar7;
      } while (iVar11 == 0);
      do {
        bVar1 = *(byte *)(iVar18 + (uVar20 & uVar13 >> 0xc | (uVar9 & uVar20) >> 0x15));
        if ((bool)((byte)((uVar9 & uVar20) >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
        uVar14 = uVar9 + iVar12 & uVar20;
        bVar2 = *(byte *)(iVar18 + (uVar20 & uVar13 + iVar16 >> 0xc | uVar14 >> 0x15));
        uVar15 = *puVar8;
        iVar11 = iVar11 + -2;
        if ((bool)((byte)(uVar14 >> 0x14) & 1)) {
          bVar2 = bVar2 >> 4;
        }
        uVar9 = uVar9 + iVar12 + iVar12;
        uVar13 = uVar13 + iVar16 + iVar16;
        uVar14 = CONCAT22(*(undefined2 *)(iVar6 + (bVar2 & 0xf) * 2),
                          *(undefined2 *)(iVar6 + (bVar1 & 0xf) * 2));
        uVar17 = (uVar14 ^ uVar15 - uVar14 ^ uVar15) & uVar5;
        uVar19 = (uVar17 >> 5) - (((uVar5 ^ uVar5 >> 5) & uVar17 >> 5) >> 1);
        if (uVar15 < uVar14) {
          uVar19 = uVar19 | 0x8000000;
        }
        *puVar8 = uVar17;
        puVar7 = puVar8 + 1;
        *puVar8 = (uVar15 - uVar14 & ~(uVar17 - uVar19)) + (uVar17 & ~(uVar17 - uVar19));
        puVar8 = puVar7;
      } while (0 < iVar11);
      iVar10 = 0;
    } while (iVar11 == 0);
    return;
  }
  iVar18 = (uVar20 & uVar13 >> 0xc) + iVar18;
  if ((~param_1[9] & 0xf800000U) != 0) {
    iVar16 = iVar10;
    if (((uint)puVar7 & 3) == 0) goto LAB_4a01c5a0;
    do {
      do {
        bVar1 = *(byte *)(iVar18 + ((uVar9 & uVar20) >> 0x15));
        if ((uVar9 & 0x100000) != 0) {
          bVar1 = bVar1 >> 4;
        }
        uVar13 = (uint)*(ushort *)(iVar6 + (bVar1 & 0xf) * 2);
        iVar16 = iVar10 + -1;
        uVar9 = uVar9 + iVar12;
        uVar15 = (ushort)*puVar7 - uVar13;
        uVar14 = ((uint)(ushort)*puVar7 ^ uVar13 ^ uVar15) & 0x10820;
        uVar13 = uVar14 >> 5;
        uVar4 = (ushort)uVar14;
        uVar3 = ~(uVar4 - ((short)uVar13 - (short)((uVar13 & 0x40) >> 1)));
        *(ushort *)puVar7 = (uVar4 & uVar3) + ((ushort)uVar15 & uVar3);
        puVar7 = (uint *)((int)puVar7 + 2);
        if (iVar16 < 0) {
          return;
        }
LAB_4a01c5a0:
        iVar10 = 0;
        puVar8 = puVar7;
      } while (iVar16 == 0);
      do {
        bVar1 = *(byte *)(iVar18 + ((uVar9 & uVar20) >> 0x15));
        uVar13 = uVar9 + iVar12;
        if ((uVar9 & 0x100000) != 0) {
          bVar1 = bVar1 >> 4;
        }
        bVar2 = *(byte *)(iVar18 + ((uVar13 & uVar20) >> 0x15));
        uVar14 = *puVar8;
        if ((uVar13 & 0x100000) != 0) {
          bVar2 = bVar2 >> 4;
        }
        iVar16 = iVar16 + -2;
        uVar9 = uVar13 + iVar12;
        uVar13 = CONCAT22(*(undefined2 *)(iVar6 + (bVar2 & 0xf) * 2),
                          *(undefined2 *)(iVar6 + (bVar1 & 0xf) * 2));
        uVar17 = (uVar13 ^ uVar14 - uVar13 ^ uVar14) & uVar5;
        uVar15 = (uVar17 >> 5) - (((uVar5 ^ uVar5 >> 5) & uVar17 >> 5) >> 1);
        if (uVar14 < uVar13) {
          uVar15 = uVar15 | 0x8000000;
        }
        *puVar8 = uVar17;
        puVar7 = puVar8 + 1;
        *puVar8 = (uVar14 - uVar13 & ~(uVar17 - uVar15)) + (uVar17 & ~(uVar17 - uVar15));
        puVar8 = puVar7;
      } while (0 < iVar16);
      iVar10 = 0;
    } while (iVar16 == 0);
    return;
  }
  iVar16 = iVar10;
  if (((uint)puVar7 & 3) == 0) goto LAB_4a01c6bc;
  do {
    do {
      bVar1 = *(byte *)(iVar18 + ((uVar9 & uVar20) >> 0x15));
      if ((uVar9 & 0x100000) != 0) {
        bVar1 = bVar1 >> 4;
      }
      uVar13 = (uint)*(ushort *)(iVar6 + (bVar1 & 0xf) * 2);
      iVar16 = iVar10 + -1;
      uVar9 = uVar9 + iVar12;
      uVar15 = (ushort)*puVar7 - uVar13;
      uVar14 = ((uint)(ushort)*puVar7 ^ uVar13 ^ uVar15) & 0x10820;
      uVar13 = uVar14 >> 5;
      uVar4 = (ushort)uVar14;
      uVar3 = ~(uVar4 - ((short)uVar13 - (short)((uVar13 & 0x40) >> 1)));
      *(ushort *)puVar7 = (uVar4 & uVar3) + ((ushort)uVar15 & uVar3);
      puVar7 = (uint *)((int)puVar7 + 2);
      if (iVar16 < 0) {
        return;
      }
LAB_4a01c6bc:
      iVar10 = 0;
      puVar8 = puVar7;
    } while (iVar16 == 0);
    do {
      bVar1 = *(byte *)(iVar18 + ((uVar9 & uVar20) >> 0x15));
      uVar13 = uVar9 + iVar12;
      if ((uVar9 & 0x100000) != 0) {
        bVar1 = bVar1 >> 4;
      }
      bVar2 = *(byte *)(iVar18 + ((uVar13 & uVar20) >> 0x15));
      uVar14 = *puVar8;
      if ((uVar13 & 0x100000) != 0) {
        bVar2 = bVar2 >> 4;
      }
      iVar16 = iVar16 + -2;
      uVar9 = uVar13 + iVar12;
      uVar13 = CONCAT22(*(undefined2 *)(iVar6 + (bVar2 & 0xf) * 2),
                        *(undefined2 *)(iVar6 + (bVar1 & 0xf) * 2));
      uVar17 = (uVar13 ^ uVar14 - uVar13 ^ uVar14) & uVar5;
      uVar15 = (uVar17 >> 5) - (((uVar5 ^ uVar5 >> 5) & uVar17 >> 5) >> 1);
      if (uVar14 < uVar13) {
        uVar15 = uVar15 | 0x8000000;
      }
      *puVar8 = uVar17;
      puVar7 = puVar8 + 1;
      *puVar8 = (uVar14 - uVar13 & ~(uVar17 - uVar15)) + (uVar17 & ~(uVar17 - uVar15));
      puVar8 = puVar7;
    } while (0 < iVar16);
    iVar10 = 0;
  } while (iVar16 == 0);
  return;
}



// Address: 4a01c89c

void FUN_4a01c89c(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  
  iVar9 = *param_1 + -1;
  uVar7 = param_1[2];
  uVar8 = param_1[3];
  iVar11 = param_1[4];
  iVar12 = param_1[5];
  iVar3 = param_1[8];
  uVar14 = param_1[9];
  uVar10 = param_1[6];
  iVar13 = param_1[7];
  puVar6 = (ushort *)param_1[1];
  do {
    iVar9 = iVar9 + -1;
    uVar4 = (uint)*(ushort *)
                   (iVar3 + ((uVar14 & 0xf800000) >> 0xe) +
                   (uint)*(byte *)(iVar13 + (uVar10 & uVar8 >> 0xc | (uVar7 & uVar10) >> 0x14)) * 2)
    ;
    uVar8 = uVar8 + iVar12;
    uVar7 = uVar7 + iVar11;
    uVar15 = *puVar6 - uVar4;
    uVar5 = (uVar4 ^ uVar15 ^ (uint)*puVar6) & 0x10820;
    uVar4 = uVar5 >> 5;
    uVar2 = (ushort)uVar5;
    uVar1 = ~(uVar2 - ((short)uVar4 - (short)((uVar4 & 0x40) >> 1)));
    *puVar6 = (uVar2 & uVar1) + ((ushort)uVar15 & uVar1);
    puVar6 = puVar6 + 1;
  } while (-1 < iVar9);
  return;
}



// Address: 4a01c934

void FUN_4a01c934(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  
  iVar8 = *param_1 + -1;
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  iVar11 = param_1[4];
  iVar12 = param_1[5];
  uVar9 = param_1[6];
  iVar13 = param_1[7];
  iVar10 = *(int *)PTR_LAB_4a01c9e8 + ((param_1[9] & 0xf800000U) >> 0xc);
  puVar5 = (ushort *)param_1[1];
  do {
    uVar3 = (uint)*(ushort *)(iVar13 + (uVar9 & uVar7 >> 0xd | (uVar6 & uVar9) >> 0x14) * 2);
    iVar8 = iVar8 + -1;
    uVar7 = uVar7 + iVar12;
    uVar6 = uVar6 + iVar11;
    uVar3 = (uint)*(ushort *)(iVar10 + ((uVar3 & 0xffff7fff) >> 5) * 2) |
            (uint)*(ushort *)(iVar10 + (uVar3 & 0x1f) * 0x40) << 0xb;
    uVar14 = *puVar5 - uVar3;
    uVar4 = (uVar3 ^ uVar14 ^ (uint)*puVar5) & 0x10820;
    uVar3 = uVar4 >> 5;
    uVar2 = (ushort)uVar4;
    uVar1 = ~(uVar2 - ((short)uVar3 - (short)((uVar3 & 0x40) >> 1)));
    *puVar5 = (uVar2 & uVar1) + ((ushort)uVar14 & uVar1);
    puVar5 = puVar5 + 1;
  } while (-1 < iVar8);
  return;
}



// Address: 4a01c9ec

undefined8 FUN_4a01c9ec(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_20;
  
  iVar2 = host_s3eDebugGetInt_thumb(6);
  puVar1 = PTR_DAT_4a01ca64;
  iVar7 = *(int *)(PTR_DAT_4a01ca64 + 0x1c) * iVar2;
  *(int *)(PTR_DAT_4a01ca64 + 0x1c) = *(int *)(PTR_DAT_4a01ca64 + 0x1c) + 1;
  iVar3 = host_s3eSurfaceGetInt_thumb(1);
  local_20 = param_2;
  if (iVar3 <= iVar2 * (*(int *)(puVar1 + 0x1c) + 1)) {
    iVar4 = host_s3eSurfaceGetInt_thumb(0);
    local_20 = host_s3eSurfacePtr_thumb();
    iVar5 = host_s3eSurfaceGetInt_thumb(2);
    iVar6 = iVar2 * iVar5;
    iVar3 = iVar3 * iVar5 - (iVar5 + iVar4 * -2);
    thunk_FUN_4a00105c(local_20,local_20 + iVar6,iVar3 - iVar6);
    iVar7 = iVar7 - iVar2;
    *(int *)(PTR_DAT_4a01ca64 + 0x1c) = *(int *)(PTR_DAT_4a01ca64 + 0x1c) + -1;
    thunk_FUN_4a001274((local_20 + iVar3) - iVar6,iVar6);
  }
  return CONCAT44(local_20,iVar7);
}



// Address: 4a01d2b0

undefined4 FUN_4a01d2b0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_4a0350f8(param_1,0);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x10);
  }
  return uVar2;
}



// Address: 4a01d2b8

undefined4 FUN_4a01d2b8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_4a0350f8(param_1,0);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x10);
  }
  return uVar2;
}



// Address: 4a01d2cc

void FUN_4a01d2cc(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  short sStack_20;
  short sStack_1e;
  short sStack_1c;
  short sStack_1a;
  
  uVar2 = *(ushort *)(param_1 + 0x14);
  iVar16 = *(int *)(param_1 + 0x18);
  uVar3 = thunk_FUN_4a0e5380(param_1 + 8);
  sStack_1c = (short)param_3;
  iVar10 = (int)sStack_1c;
  uVar3 = uVar3 >> 3;
  sStack_1a = (short)((uint)param_3 >> 0x10);
  iVar4 = (int)sStack_1a;
  sStack_20 = (short)param_2;
  iVar14 = (int)sStack_20;
  sStack_1e = (short)((uint)param_2 >> 0x10);
  iVar15 = (int)sStack_1e;
  if (iVar10 <= iVar4) {
    iVar7 = -1;
    if (param_4 < 1) {
      iVar7 = iVar10;
    }
    iVar7 = iVar14 + iVar7;
  }
  else {
    iVar7 = -1;
    if (param_4 < 1) {
      iVar7 = iVar4;
    }
    iVar7 = iVar15 + iVar7;
  }
  iVar5 = iVar15 + iVar4;
  for (; iVar15 < iVar5; iVar15 = iVar15 + 1) {
    for (iVar6 = iVar14; iVar6 < iVar14 + iVar10; iVar6 = iVar6 + 1) {
      iVar8 = iVar15;
      iVar11 = iVar7;
      if (iVar10 > iVar4) {
        iVar8 = iVar7;
        iVar11 = iVar6;
      }
      puVar9 = (undefined1 *)((uint)uVar2 * iVar8 + uVar3 * iVar11 + iVar16);
      puVar12 = (undefined1 *)((uint)uVar2 * iVar15 + uVar3 * iVar6 + iVar16);
      for (uVar13 = 0; uVar13 < uVar3; uVar13 = uVar13 + 1) {
        uVar1 = *puVar9;
        puVar9 = puVar9 + 1;
        *puVar12 = uVar1;
        puVar12 = puVar12 + 1;
      }
    }
  }
  return;
}



// Address: 4a01d384

undefined4 FUN_4a01d384(int *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  puVar2 = PTR_DAT_4a01d40c;
  iVar3 = *param_1;
  do {
    if (*(int *)(puVar2 + 4) <= iVar3) {
      return 1;
    }
    iVar5 = *(int *)(PTR_DAT_4a01d410 + iVar3 * 4);
    iVar3 = FUN_4a091d54(iVar5,param_1 + 2);
    if (iVar3 != 0) {
      while (param_1[1] < (int)(uint)*(ushort *)(iVar5 + 0x6c)) {
        iVar3 = FUN_4a0917c0(iVar5,param_1[1],param_1 + 2);
        if (iVar3 != 0) {
          pcVar4 = *(char **)(iVar5 + 0x78);
          for (iVar3 = 0; iVar3 < param_1[1]; iVar3 = iVar3 + 1) {
            do {
              cVar1 = *pcVar4;
              pcVar4 = pcVar4 + 1;
            } while (cVar1 != '\0');
          }
          thunk_FUN_4a001368(param_2,pcVar4,param_3 + -1);
          param_1[1] = param_1[1] + 1;
          return 0;
        }
        param_1[1] = param_1[1] + 1;
      }
    }
    param_1[1] = 0;
    iVar3 = *param_1 + 1;
    *param_1 = iVar3;
  } while( true );
}



// Address: 4a01d414

void FUN_4a01d414(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_4a01d458;
  thunk_FUN_4a161530(*(undefined4 *)(PTR_DAT_4a01d458 + 0xc));
  *(undefined4 *)(puVar1 + 0xc) = 0;
  thunk_FUN_4a161530(*(undefined4 *)(puVar1 + 8));
  *(undefined4 *)(puVar1 + 8) = 0;
  thunk_FUN_4a161530(*(undefined4 *)(puVar1 + 4));
  *(undefined4 *)(puVar1 + 4) = 0;
  thunk_FUN_4a161530(*(undefined4 *)puVar1);
  *(undefined4 *)puVar1 = 0;
  return;
}



// Address: 4a01d45c

void FUN_4a01d45c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  puVar1 = PTR_DAT_4a01d53c;
  if (*(int *)PTR_DAT_4a01d53c == 0) {
    uVar3 = FUN_4a149148(0x20,0x40,PTR_DAT_4a01d540);
    *(undefined4 *)puVar1 = uVar3;
  }
  if (*(int *)(puVar1 + 8) == 0) {
    uVar3 = thunk_FUN_4a161570(0x400);
    *(undefined4 *)(puVar1 + 8) = uVar3;
  }
  if (*(int *)(puVar1 + 4) == 0) {
    uVar3 = FUN_4a149148(0x14,0x40,PTR_DAT_4a01d544);
    *(undefined4 *)(puVar1 + 4) = uVar3;
  }
  iVar7 = *(int *)(puVar1 + 8);
  iVar8 = *(int *)(puVar1 + 4);
  iVar4 = 0;
  iVar6 = 0;
  do {
    iVar5 = iVar4 + 1;
    *(int *)(iVar7 + iVar4 * 0x10 + 4) = iVar8 + iVar4 * 0x14;
    iVar6 = iVar6 + 2;
    iVar4 = iVar4 + 2;
    *(int *)(iVar7 + iVar5 * 0x10 + 4) = iVar8 + iVar5 * 0x14;
  } while (iVar6 < 0x40);
  if (*(int *)(puVar1 + 0xc) == 0) {
    uVar3 = FUN_4a149148(0x20,0x40,PTR_DAT_4a01d540);
    *(undefined4 *)(puVar1 + 0xc) = uVar3;
  }
  puVar2 = PTR_LAB_4a01d548;
  *(undefined4 *)(PTR_LAB_4a01d548 + 0x24) = *(undefined4 *)(puVar1 + 0xc);
  *(undefined **)(puVar2 + 0x28) = PTR_DAT_4a01d54c;
  return;
}



// Address: 4a01d550

undefined4 FUN_4a01d550(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 4000) {
    uVar1 = 2;
  }
  else {
    uVar1 = 0;
  }
  host_s3eMemorySetInt_arm(0,uVar1);
  uVar1 = host_s3eReallocBase_arm(param_1,param_2);
  host_s3eMemorySetInt_arm(0);
  return uVar1;
}



// Address: 4a01d598

void FUN_4a01d598(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



// Address: 4a01d5a0

void FUN_4a01d5a0(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 auStack_114 [256];
  int local_14;
  
  puVar1 = PTR_DAT_4a01d664;
  *PTR_DAT_4a01d664 = 1;
  local_14 = 0;
  host_s3eConfigGetInt_thumb(&DAT_4a01d674,s_SysConsole_4a01d668,&local_14);
  if (local_14 == 0) {
    if (puVar1[1] == '\0') {
      iVar4 = host_s3eConfigGetString_thumb(&DAT_4a01d690,s_SysStdOut_4a01d684,auStack_114);
      if (iVar4 == 0) {
        uVar2 = host_s3eFileOpen_thumb(auStack_114,&DAT_4a01d694);
        *(undefined4 *)(puVar1 + 0xc) = uVar2;
      }
      iVar4 = host_s3eConfigGetString_thumb(&DAT_4a01d690,s_SysStdErr_4a01d698,auStack_114);
      if (iVar4 == 0) {
        uVar2 = host_s3eFileOpen_thumb(auStack_114,&DAT_4a01d694);
        *(undefined4 *)(puVar1 + 0x10) = uVar2;
      }
      iVar4 = host_s3eConfigGetString_thumb(&DAT_4a01d690,s_SysStdIn_4a01d6a4,auStack_114);
      if (iVar4 != 0) {
        return;
      }
      uVar2 = host_s3eFileOpen_thumb(auStack_114,s_SysStdErr_4a01d698 + 8);
      *(undefined4 *)(puVar1 + 0x14) = uVar2;
      return;
    }
  }
  else {
    puVar1[1] = 1;
  }
  uVar2 = FUN_4a00d394(DAT_4a01d678);
  *(undefined4 *)(puVar1 + 0x18) = uVar2;
  uVar2 = FUN_4a00d394(0x200);
  *(undefined4 *)(puVar1 + 0x20) = uVar2;
  host_s3eKeyboardSetInt_thumb(4,1);
  host_s3eTimerSetTimer_thumb(0,PTR_FUN_4a032afc_1_4a01d67c);
  host_s3eKeyboardRegister_thumb(1,PTR_FUN_4a039e20_1_4a01d680,0);
  puVar3 = *(undefined1 **)(puVar1 + 0x18);
  *puVar3 = 0x60;
  puVar3[1] = 0x61;
  *(undefined1 **)(puVar1 + 0x18) = puVar3 + 2;
  puVar3[2] = 0;
  **(undefined1 **)(puVar1 + 0x20) = 0;
  *(int *)(puVar1 + 0x1c) = *(int *)(puVar1 + 0x1c) + 1;
  return;
}



// Address: 4a01d744

undefined4 FUN_4a01d744(int param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_4a01d824;
  iVar3 = DAT_4a01d820;
  iVar2 = DAT_4a01d814;
  if (param_1 == 0x14) {
    iVar2 = DAT_4a01d81c + 1;
  }
  else {
    if (0x14 < param_1) {
      if (param_1 == 0x19) {
        iVar2 = DAT_4a01d81c + 5;
      }
      else if (param_1 < 0x1a) {
        if (param_1 == 0x15) {
          iVar2 = DAT_4a01d81c + 2;
          goto LAB_4a01d7d8;
        }
        if (param_1 == 0x17) {
          iVar2 = DAT_4a01d81c + 3;
        }
        else {
          if (param_1 != 0x18) goto LAB_4a01d806;
          iVar2 = DAT_4a01d81c + 4;
        }
      }
      else if (param_1 == 0x1a) {
        iVar2 = DAT_4a01d81c + 6;
      }
      else {
        if (param_1 != 0x1b) {
          if (param_1 == 0x26) {
            *param_2 = DAT_4a01d810 + -1;
            goto LAB_4a01d7c2;
          }
LAB_4a01d806:
          *param_2 = DAT_4a01d810;
          *param_3 = iVar3;
          return 0;
        }
        iVar2 = DAT_4a01d81c + 7;
      }
      *param_2 = iVar2;
      *param_4 = 0x100;
      return 1;
    }
    if (param_1 == 0xe) {
      *param_2 = DAT_4a01d818;
LAB_4a01d7c2:
      *param_3 = iVar2;
      return 1;
    }
    if (param_1 < 0xf) {
      if (param_1 == 3) {
        *param_2 = DAT_4a01d810;
      }
      else if (param_1 == 5) {
        *param_2 = DAT_4a01d818;
        iVar3 = iVar1;
      }
      else {
        if (param_1 != 7) {
          if (param_1 != 10) goto LAB_4a01d806;
          *param_2 = DAT_4a01d810;
          goto LAB_4a01d7c2;
        }
        *param_2 = DAT_4a01d818;
        iVar3 = iVar1 + 1;
      }
      *param_3 = iVar3;
      return 1;
    }
    if (param_1 == 0x11) {
      iVar2 = DAT_4a01d81c + -2;
    }
    else if (param_1 == 0x12) {
      iVar2 = DAT_4a01d81c + -1;
    }
    else {
      iVar2 = DAT_4a01d81c;
      if (param_1 != 0x13) goto LAB_4a01d806;
    }
  }
LAB_4a01d7d8:
  *param_2 = iVar2;
  *param_4 = 0x10;
  return 1;
}



// Address: 4a01d828

void FUN_4a01d828(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int local_18;
  int local_14;
  
  piVar3 = &local_18;
  piVar4 = &local_18;
  uVar2 = thunk_FUN_4a161570(0x28);
  puVar1 = PTR_DAT_4a01d914;
  uVar6 = *(undefined4 *)PTR_DAT_4a01d914;
  local_14 = FUN_4a0bc200(uVar6);
  local_18 = FUN_4a0bc1f8(uVar6);
  uVar6 = *(undefined4 *)puVar1;
  if (local_14 <= local_18) {
    piVar3 = &local_14;
  }
  iVar7 = *piVar3;
  local_14 = FUN_4a0bc200(uVar6);
  local_18 = FUN_4a0bc1f8(uVar6);
  if (local_18 <= local_14) {
    piVar4 = &local_14;
  }
  puVar5 = (undefined4 *)FUN_4a0c77bc(uVar2,iVar7,*piVar4);
  *puVar5 = PTR_PTR_4a01d918;
  thunk_FUN_4a161570(0x88);
  uVar2 = FUN_4a0bd708();
  puVar1 = PTR_DAT_4a01d91c;
  *(undefined4 *)(PTR_DAT_4a01d91c + 4) = uVar2;
  uVar2 = thunk_FUN_4a161570(0x44);
  uVar2 = FUN_4a0c23a0(uVar2,puVar5,*(undefined4 *)(puVar1 + 4));
  FUN_4a0c76a8(puVar5,uVar2);
  *(undefined4 *)PTR_DAT_4a01d920 = *(undefined4 *)(puVar1 + 4);
  FUN_4a0c7714(puVar5,2);
  *(undefined4 **)puVar1 = puVar5;
  return;
}



// Address: 4a01d924

ushort * FUN_4a01d924(byte *param_1,int param_2,int param_3)

{
  int iVar1;
  ushort *puVar2;
  byte *pbVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  
  if (param_2 == -1) {
    if (param_3 == 0) {
LAB_4a01d974:
      iVar1 = FUN_4a039bec(param_1,param_2,PTR_DAT_4a01da74,10000);
      iVar5 = (iVar1 + 1) * 2;
      *(undefined2 *)(PTR_DAT_4a01da74 + iVar1 * 2) = 0;
      puVar2 = (ushort *)thunk_FUN_4a161570(iVar5);
      FUN_4a000f84(puVar2,PTR_DAT_4a01da74,iVar5);
      return puVar2;
    }
    if (param_3 == 1) {
      param_2 = thunk_FUN_4a0013e0(param_1);
LAB_4a01d9cc:
      uVar6 = param_2 + 1;
      puVar2 = (ushort *)thunk_FUN_4a161570(uVar6 * 2);
      if (0 < (int)uVar6) {
        pbVar3 = param_1 + -1;
        puVar4 = puVar2 + -1;
        if ((uVar6 & 1) != 0) {
          *puVar2 = (ushort)*param_1;
          pbVar3 = param_1;
          puVar4 = puVar2;
        }
        for (iVar5 = (int)uVar6 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar4[1] = (ushort)pbVar3[1];
          pbVar3 = pbVar3 + 2;
          puVar4 = puVar4 + 2;
          *puVar4 = (ushort)*pbVar3;
        }
      }
      puVar2[param_2] = 0;
      return puVar2;
    }
    if (param_3 != 2) {
      return (ushort *)0x0;
    }
    param_2 = FUN_4a000f50(param_1);
  }
  else {
    if (param_3 == 0) goto LAB_4a01d974;
    if (param_3 == 1) goto LAB_4a01d9cc;
    if (param_3 != 2) {
      return (ushort *)0x0;
    }
  }
  puVar2 = (ushort *)thunk_FUN_4a161570(param_2 + 2);
  FUN_4a000f84(puVar2,param_1,param_2 + 2);
  *(undefined2 *)(((param_2 + 1) - (param_2 + 1 >> 0x1f) & 0xfffffffeU) + (int)puVar2) = 0;
  return puVar2;
}



// Address: 4a01da78

void FUN_4a01da78(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)PTR_DAT_4a01daac;
  do {
    piVar1 = (int *)piVar1[2];
    if (piVar1 == (int *)PTR_DAT_4a01daac) {
      return;
    }
  } while (piVar1[3] != param_1);
  FUN_4a039890(PTR_DAT_4a01daac,piVar1);
  if (piVar1 != (int *)0x0) {
    FUN_4a1652c6(piVar1,*(undefined4 *)(*piVar1 + 4));
  }
  return;
}



// Address: 4a01dab0

void FUN_4a01dab0(void)

{
  undefined *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 in_r3;
  uint uVar4;
  uint uVar5;
  undefined4 local_18;
  
  puVar1 = PTR_DAT_4a01db1c;
  puVar2 = *(uint **)PTR_DAT_4a01db1c;
  uVar4 = *puVar2;
  *puVar2 = uVar4 & 0xffff87ff;
  uVar5 = puVar2[300];
  local_18 = in_r3;
  iVar3 = FUN_4a0456a8();
  *(undefined4 *)(iVar3 + 0x2c) = 0;
  *(undefined1 *)(iVar3 + 0x20) = 0;
  *(undefined1 *)(iVar3 + 0x21) = 0;
  *(undefined1 *)(iVar3 + 0x22) = 0;
  *(undefined1 *)(iVar3 + 0x23) = 0xff;
  FUN_4a0361cc();
  iVar3 = *(int *)puVar1;
  local_18 = CONCAT22((short)*(undefined4 *)(iVar3 + 0x348),(short)*(undefined4 *)(iVar3 + 0x344));
  thunk_FUN_4a048e6c(PTR_DAT_4a01db20,&local_18);
  thunk_FUN_4a05a618();
  puVar2 = *(uint **)puVar1;
  puVar2[300] = uVar5;
  *puVar2 = uVar4;
  return;
}



// Address: 4a01db24

void FUN_4a01db24(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  
  iVar8 = *param_1 + -1;
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  iVar11 = param_1[4];
  iVar12 = param_1[5];
  uVar9 = param_1[6];
  iVar13 = param_1[7];
  iVar10 = *(int *)PTR_LAB_4a01dbe0 + ((param_1[9] & 0xf800000U) >> 0xc);
  puVar5 = (ushort *)param_1[1];
  do {
    uVar1 = *(ushort *)(iVar13 + (uVar9 & uVar7 >> 0xd | (uVar6 & uVar9) >> 0x14) * 2);
    iVar8 = iVar8 + -1;
    uVar7 = uVar7 + iVar12;
    uVar6 = uVar6 + iVar11;
    uVar3 = (uint)*(ushort *)(iVar10 + ((uVar1 & 0x7ff) >> 6 | (uVar1 & 0x1f) << 5) * 2) |
            (uint)*(ushort *)(iVar10 + (uint)(uVar1 >> 0xb) * 0x40) << 0xb;
    uVar14 = *puVar5 - uVar3;
    uVar4 = (uVar3 ^ uVar14 ^ (uint)*puVar5) & 0x10820;
    uVar3 = uVar4 >> 5;
    uVar2 = (ushort)uVar4;
    uVar1 = ~(uVar2 - ((short)uVar3 - (short)((uVar3 & 0x40) >> 1)));
    *puVar5 = (uVar2 & uVar1) + ((ushort)uVar14 & uVar1);
    puVar5 = puVar5 + 1;
  } while (-1 < iVar8);
  return;
}



// Address: 4a01dbe4

void FUN_4a01dbe4(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  
  iVar9 = *param_1 + -1;
  uVar7 = param_1[2];
  uVar8 = param_1[3];
  iVar12 = param_1[4];
  iVar13 = param_1[5];
  uVar10 = param_1[6];
  iVar14 = param_1[7];
  iVar15 = param_1[8];
  iVar11 = *(int *)PTR_LAB_4a01dca8 + ((param_1[9] & 0xf800000U) >> 0xc);
  puVar6 = (ushort *)param_1[1];
  do {
    uVar4 = uVar7 & uVar10;
    bVar1 = *(byte *)(iVar14 + (uVar10 & uVar8 >> 0xc | uVar4 >> 0x15));
    uVar7 = uVar7 + iVar12;
    uVar8 = uVar8 + iVar13;
    if ((bool)((byte)(uVar4 >> 0x14) & 1)) {
      bVar1 = bVar1 >> 4;
    }
    uVar4 = (uint)*(ushort *)(iVar15 + (bVar1 & 0xf) * 2);
    iVar9 = iVar9 + -1;
    uVar4 = (uint)*(ushort *)(iVar11 + ((uVar4 & 0xf00) >> 2 | (uVar4 & 0xf0) >> 3) * 2) |
            (uint)*(ushort *)(iVar11 + (uVar4 & 0xf) * 0x80) << 0xb;
    uVar16 = *puVar6 - uVar4;
    uVar5 = ((uint)*puVar6 ^ uVar4 ^ uVar16) & 0x10820;
    uVar4 = uVar5 >> 5;
    uVar3 = (ushort)uVar5;
    uVar2 = ~(uVar3 - ((short)uVar4 - (short)((uVar4 & 0x40) >> 1)));
    *puVar6 = (uVar3 & uVar2) + ((ushort)uVar16 & uVar2);
    puVar6 = puVar6 + 1;
  } while (-1 < iVar9);
  return;
}



// Address: 4a01dcac

void FUN_4a01dcac(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  
  iVar8 = *param_1 + -1;
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  iVar11 = param_1[4];
  iVar12 = param_1[5];
  uVar9 = param_1[6];
  iVar13 = param_1[7];
  iVar10 = *(int *)PTR_LAB_4a01dd68 + ((param_1[9] & 0xf800000U) >> 0xc);
  puVar5 = (ushort *)param_1[1];
  do {
    uVar3 = (uint)*(ushort *)(iVar13 + (uVar9 & uVar7 >> 0xd | (uVar6 & uVar9) >> 0x14) * 2);
    iVar8 = iVar8 + -1;
    uVar7 = uVar7 + iVar12;
    uVar6 = uVar6 + iVar11;
    uVar3 = (uint)*(ushort *)(iVar10 + ((uVar3 & 0xf00) >> 2 | (uVar3 & 0xf0) >> 3) * 2) |
            (uint)*(ushort *)(iVar10 + (uVar3 & 0xf) * 0x80) << 0xb;
    uVar14 = *puVar5 - uVar3;
    uVar4 = (uVar3 ^ uVar14 ^ (uint)*puVar5) & 0x10820;
    uVar3 = uVar4 >> 5;
    uVar2 = (ushort)uVar4;
    uVar1 = ~(uVar2 - ((short)uVar3 - (short)((uVar3 & 0x40) >> 1)));
    *puVar5 = (uVar2 & uVar1) + ((ushort)uVar14 & uVar1);
    puVar5 = puVar5 + 1;
  } while (-1 < iVar8);
  return;
}



// Address: 4a01dd6c

void FUN_4a01dd6c(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  
  iVar8 = *param_1 + -1;
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  iVar11 = param_1[4];
  iVar12 = param_1[5];
  uVar9 = param_1[6];
  iVar13 = param_1[7];
  iVar10 = *(int *)PTR_LAB_4a01de28 + ((param_1[9] & 0xf800000U) >> 0xc);
  puVar5 = (ushort *)param_1[1];
  do {
    uVar3 = *(uint *)(iVar13 + (uVar9 & uVar7 >> 0xe | (uVar6 & uVar9) >> 0x14) * 4);
    iVar8 = iVar8 + -1;
    uVar7 = uVar7 + iVar12;
    uVar3 = (uint)*(ushort *)(iVar10 + ((uVar3 & 0xffff) >> 0xb | (uVar3 & 0xf8) << 2) * 2) |
            (uint)*(ushort *)(iVar10 + (uVar3 >> 0xe & 0x3e0) * 2) << 0xb;
    uVar14 = *puVar5 - uVar3;
    uVar4 = (uVar3 ^ uVar14 ^ (uint)*puVar5) & 0x10820;
    uVar3 = uVar4 >> 5;
    uVar2 = (ushort)uVar4;
    uVar1 = ~(uVar2 - ((short)uVar3 - (short)((uVar3 & 0x40) >> 1)));
    uVar6 = uVar6 + iVar11;
    *puVar5 = (uVar2 & uVar1) + ((ushort)uVar14 & uVar1);
    puVar5 = puVar5 + 1;
  } while (-1 < iVar8);
  return;
}



// Address: 4a01de30

void FUN_4a01de30(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  
  iVar17 = *param_1 + -1;
  uVar8 = param_1[2];
  uVar9 = param_1[3];
  iVar12 = param_1[4];
  iVar13 = param_1[5];
  uVar11 = param_1[9];
  uVar10 = param_1[6];
  iVar14 = param_1[7];
  iVar15 = param_1[8];
  if ((uVar11 & 0x80000000) != 0) {
    puVar7 = (ushort *)param_1[1];
    do {
      uVar5 = uVar8 & uVar10;
      bVar1 = *(byte *)(iVar14 + (uVar10 & uVar9 >> 0xc | uVar5 >> 0x15));
      uVar8 = uVar8 + iVar12;
      if ((bool)((byte)(uVar5 >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      uVar5 = (uint)*(ushort *)(iVar15 + ((uVar11 & 0xf800000) >> 0x12) + (bVar1 & 0xf) * 2);
      iVar17 = iVar17 + -1;
      uVar9 = uVar9 + iVar13;
      uVar16 = *puVar7 - uVar5;
      uVar6 = (uVar5 ^ uVar16 ^ (uint)*puVar7) & 0x10820;
      uVar5 = uVar6 >> 5;
      uVar3 = (ushort)uVar6;
      uVar2 = ~(uVar3 - ((short)uVar5 - (short)((uVar5 & 0x40) >> 1)));
      *puVar7 = (uVar3 & uVar2) + (uVar2 & (ushort)uVar16);
      puVar7 = puVar7 + 1;
    } while (-1 < iVar17);
    return;
  }
  iVar4 = param_1[10];
  puVar7 = (ushort *)param_1[1];
  do {
    uVar5 = uVar8 & uVar10;
    bVar1 = *(byte *)(iVar14 + (uVar10 & uVar9 >> 0xc | uVar5 >> 0x15));
    uVar8 = uVar8 + iVar12;
    if ((bool)((byte)(uVar5 >> 0x14) & 1)) {
      bVar1 = bVar1 >> 4;
    }
    uVar5 = (uint)*(ushort *)(iVar15 + ((uVar11 & 0xf800000) >> 0x12) + (bVar1 & 0xf) * 2);
    iVar17 = iVar17 + -1;
    uVar9 = uVar9 + iVar13;
    uVar16 = *puVar7 - uVar5;
    uVar6 = ((uint)*puVar7 ^ uVar5 ^ uVar16) & 0x10820;
    uVar5 = uVar6 >> 5;
    uVar3 = (ushort)uVar6;
    uVar2 = ~(uVar3 - ((short)uVar5 - (short)((uVar5 & 0x40) >> 1)));
    *puVar7 = (uVar3 & uVar2) + ((ushort)uVar16 & uVar2);
    uVar11 = uVar11 + iVar4;
    puVar7 = puVar7 + 1;
  } while (-1 < iVar17);
  return;
}



// Address: 4a01df64

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a01df64(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  
  uVar7 = param_1[6];
  iVar13 = param_1[7];
  iVar17 = param_1[8];
  uVar9 = param_1[3];
  iVar11 = param_1[4];
  iVar12 = param_1[5];
  uVar14 = param_1[9];
  puVar6 = (uint *)param_1[1];
  uVar19 = param_1[2];
  iVar8 = *param_1 + -1;
  if ((uVar14 & 0x80000000) != 0) {
    iVar17 = iVar17 + ((uVar14 & 0xf800000) >> 0xe);
    uVar14 = DAT_4a01e210;
    if (((uint)puVar6 & 3) == 0) goto joined_r0x4a01e010;
    do {
      iVar8 = iVar8 + -1;
      uVar14 = (uint)*(ushort *)
                      (iVar17 + (uint)*(byte *)(iVar13 + (uVar7 & uVar9 >> 0xc |
                                                         (uVar19 & uVar7) >> 0x14)) * 2);
      uVar9 = uVar9 + iVar12;
      uVar19 = uVar19 + iVar11;
      uVar15 = (ushort)*puVar6 - uVar14;
      uVar3 = ((uint)(ushort)*puVar6 ^ uVar14 ^ uVar15) & 0x10820;
      uVar14 = uVar3 >> 5;
      uVar2 = (ushort)uVar3;
      uVar1 = ~(uVar2 - ((short)uVar14 - (short)((uVar14 & 0x40) >> 1)));
      *(ushort *)puVar6 = (uVar2 & uVar1) + ((ushort)uVar15 & uVar1);
      puVar6 = (uint *)((int)puVar6 + 2);
      uVar14 = DAT_4a01e210;
      if (iVar8 < 0) {
        return;
      }
joined_r0x4a01e010:
      while (uVar3 = DAT_4a01e210, 0 < iVar8) {
        uVar15 = uVar9 >> 0xc;
        uVar16 = uVar19 & uVar7;
        uVar4 = uVar19 + iVar11;
        uVar10 = uVar9 + iVar12;
        uVar19 = uVar4 + iVar11;
        iVar8 = iVar8 + -2;
        uVar18 = *puVar6;
        uVar9 = uVar10 + iVar12;
        uVar15 = CONCAT22(*(undefined2 *)
                           (iVar17 + (uint)*(byte *)(iVar13 + (uVar7 & uVar10 >> 0xc |
                                                              (uVar4 & uVar7) >> 0x14)) * 2),
                          *(undefined2 *)
                           (iVar17 + (uint)*(byte *)(iVar13 + (uVar7 & uVar15 | uVar16 >> 0x14)) * 2
                           ));
        uVar4 = (uVar15 ^ uVar18 - uVar15 ^ uVar18) & DAT_4a01e210;
        uVar10 = (uVar4 >> 5) - (((DAT_4a01e210 ^ DAT_4a01e210 >> 5) & uVar4 >> 5) >> 1);
        if (uVar18 < uVar15) {
          uVar10 = uVar10 | 0x8000000;
        }
        DAT_4a01e210 = uVar14;
        *puVar6 = uVar4;
        *puVar6 = (uVar18 - uVar15 & ~(uVar4 - uVar10)) + (uVar4 & ~(uVar4 - uVar10));
        puVar6 = puVar6 + 1;
        uVar14 = DAT_4a01e210;
        DAT_4a01e210 = uVar3;
      }
      DAT_4a01e210 = uVar14;
    } while (-1 < iVar8);
    return;
  }
  iVar5 = param_1[10];
  if (((uint)puVar6 & 3) == 0) goto joined_r0x4a01e148;
  do {
    uVar3 = (uint)*(ushort *)
                   (iVar17 + ((uVar14 & 0xf800000) >> 0xe) +
                   (uint)*(byte *)(iVar13 + (uVar7 & uVar9 >> 0xc | (uVar19 & uVar7) >> 0x14)) * 2);
    iVar8 = iVar8 + -1;
    uVar9 = uVar9 + iVar12;
    uVar4 = (ushort)*puVar6 - uVar3;
    uVar15 = (uVar3 ^ uVar4 ^ (uint)(ushort)*puVar6) & 0x10820;
    uVar3 = uVar15 >> 5;
    uVar2 = (ushort)uVar15;
    uVar1 = ~(uVar2 - ((short)uVar3 - (short)((uVar3 & 0x40) >> 1)));
    *(ushort *)puVar6 = (uVar2 & uVar1) + ((ushort)uVar4 & uVar1);
    uVar19 = uVar19 + iVar11;
    uVar14 = uVar14 + iVar5;
    puVar6 = (uint *)((int)puVar6 + 2);
    if (iVar8 < 0) {
      return;
    }
joined_r0x4a01e148:
    while (0 < iVar8) {
      uVar15 = uVar19 & uVar7;
      uVar3 = uVar19 + iVar11;
      uVar19 = uVar3 + iVar11;
      iVar8 = iVar8 + -2;
      uVar3 = CONCAT22(*(undefined2 *)
                        (iVar17 + ((uVar14 + iVar5 & 0xf800000) >> 0xe) +
                        (uint)*(byte *)(iVar13 + (uVar7 & uVar9 + iVar12 >> 0xc |
                                                 (uVar3 & uVar7) >> 0x14)) * 2),
                       *(undefined2 *)
                        (iVar17 + ((uVar14 & 0xf800000) >> 0xe) +
                        (uint)*(byte *)(iVar13 + (uVar7 & uVar9 >> 0xc | uVar15 >> 0x14)) * 2));
      uVar4 = *puVar6;
      uVar14 = uVar14 + iVar5 + iVar5;
      uVar15 = (uVar3 ^ uVar4 - uVar3 ^ uVar4) & DAT_4a01e210;
      uVar10 = (uVar15 >> 5) - (((DAT_4a01e210 ^ DAT_4a01e210 >> 5) & uVar15 >> 5) >> 1);
      if (uVar4 < uVar3) {
        uVar10 = uVar10 | 0x8000000;
      }
      *puVar6 = uVar15;
      uVar9 = uVar9 + iVar12 + iVar12;
      *puVar6 = (uVar4 - uVar3 & ~(uVar15 - uVar10)) + (uVar15 & ~(uVar15 - uVar10));
      puVar6 = puVar6 + 1;
    }
  } while (-1 < iVar8);
  return;
}



// Address: 4a01e214

void FUN_4a01e214(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  
  iVar17 = *param_1 + -1;
  uVar7 = param_1[2];
  uVar8 = param_1[3];
  iVar13 = param_1[4];
  iVar14 = param_1[5];
  iVar16 = *(int *)PTR_LAB_4a01e378;
  uVar9 = param_1[6];
  iVar15 = param_1[7];
  uVar10 = param_1[9];
  if ((uVar10 & 0x80000000) != 0) {
    iVar16 = iVar16 + ((uVar10 & 0xf800000) >> 0xc);
    puVar6 = (ushort *)param_1[1];
    do {
      uVar10 = (uint)*(ushort *)(iVar15 + (uVar9 & uVar8 >> 0xd | (uVar7 & uVar9) >> 0x14) * 2);
      iVar17 = iVar17 + -1;
      uVar8 = uVar8 + iVar14;
      uVar7 = uVar7 + iVar13;
      uVar10 = (uint)*(ushort *)(iVar16 + ((uVar10 & 0xffff7fff) >> 5) * 2) |
               (uint)*(ushort *)(iVar16 + (uVar10 & 0x1f) * 0x40) << 0xb;
      uVar11 = *puVar6 - uVar10;
      uVar3 = (uVar10 ^ uVar11 ^ (uint)*puVar6) & 0x10820;
      uVar10 = uVar3 >> 5;
      uVar2 = (ushort)uVar3;
      uVar1 = ~(uVar2 - ((short)uVar10 - (short)((uVar10 & 0x40) >> 1)));
      *puVar6 = (uVar2 & uVar1) + ((ushort)uVar11 & uVar1);
      puVar6 = puVar6 + 1;
    } while (-1 < iVar17);
    return;
  }
  iVar4 = param_1[10];
  puVar6 = (ushort *)param_1[1];
  do {
    uVar3 = (uint)*(ushort *)(iVar15 + (uVar9 & uVar8 >> 0xd | (uVar7 & uVar9) >> 0x14) * 2);
    iVar5 = iVar16 + ((uVar10 & 0xf800000) >> 0xc);
    iVar17 = iVar17 + -1;
    uVar8 = uVar8 + iVar14;
    uVar3 = (uint)*(ushort *)(iVar5 + ((uVar3 & 0xffff7fff) >> 5) * 2) |
            (uint)*(ushort *)(iVar5 + (uVar3 & 0x1f) * 0x40) << 0xb;
    uVar7 = uVar7 + iVar13;
    uVar12 = *puVar6 - uVar3;
    uVar11 = ((uint)*puVar6 ^ uVar3 ^ uVar12) & 0x10820;
    uVar3 = uVar11 >> 5;
    uVar2 = (ushort)uVar11;
    uVar1 = ~(uVar2 - ((short)uVar3 - (short)((uVar3 & 0x40) >> 1)));
    *puVar6 = (uVar2 & uVar1) + ((ushort)uVar12 & uVar1);
    uVar10 = uVar10 + iVar4;
    puVar6 = puVar6 + 1;
  } while (-1 < iVar17);
  return;
}



// Address: 4a01e37c

void FUN_4a01e37c(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  
  iVar17 = *param_1 + -1;
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  iVar11 = param_1[4];
  iVar12 = param_1[5];
  iVar16 = *(int *)PTR_LAB_4a01e4f0;
  uVar8 = param_1[6];
  iVar13 = param_1[7];
  uVar9 = param_1[9];
  if ((uVar9 & 0x80000000) != 0) {
    iVar16 = iVar16 + ((uVar9 & 0xf800000) >> 0xc);
    puVar5 = (ushort *)param_1[1];
    do {
      uVar1 = *(ushort *)(iVar13 + (uVar8 & uVar7 >> 0xd | (uVar6 & uVar8) >> 0x14) * 2);
      iVar17 = iVar17 + -1;
      uVar7 = uVar7 + iVar12;
      uVar6 = uVar6 + iVar11;
      uVar9 = (uint)*(ushort *)(iVar16 + ((uVar1 & 0x7ff) >> 6 | (uVar1 & 0x1f) << 5) * 2) |
              (uint)*(ushort *)(iVar16 + (uint)(uVar1 >> 0xb) * 0x40) << 0xb;
      uVar10 = *puVar5 - uVar9;
      uVar3 = (uVar9 ^ uVar10 ^ (uint)*puVar5) & 0x10820;
      uVar9 = uVar3 >> 5;
      uVar2 = (ushort)uVar3;
      uVar1 = ~(uVar2 - ((short)uVar9 - (short)((uVar9 & 0x40) >> 1)));
      *puVar5 = (uVar2 & uVar1) + ((ushort)uVar10 & uVar1);
      puVar5 = puVar5 + 1;
    } while (-1 < iVar17);
    return;
  }
  iVar4 = param_1[10];
  puVar5 = (ushort *)param_1[1];
  do {
    uVar1 = *(ushort *)(iVar13 + (uVar8 & uVar7 >> 0xd | (uVar6 & uVar8) >> 0x14) * 2);
    iVar14 = iVar16 + ((uVar9 & 0xf800000) >> 0xc);
    iVar17 = iVar17 + -1;
    uVar7 = uVar7 + iVar12;
    uVar3 = (uint)*(ushort *)(iVar14 + ((uVar1 & 0x7ff) >> 6 | (uVar1 & 0x1f) << 5) * 2) |
            (uint)*(ushort *)(iVar14 + (uint)(uVar1 >> 0xb) * 0x40) << 0xb;
    uVar6 = uVar6 + iVar11;
    uVar15 = *puVar5 - uVar3;
    uVar10 = ((uint)*puVar5 ^ uVar3 ^ uVar15) & 0x10820;
    uVar3 = uVar10 >> 5;
    uVar2 = (ushort)uVar10;
    uVar1 = ~(uVar2 - ((short)uVar3 - (short)((uVar3 & 0x40) >> 1)));
    *puVar5 = (uVar2 & uVar1) + ((ushort)uVar15 & uVar1);
    uVar9 = uVar9 + iVar4;
    puVar5 = puVar5 + 1;
  } while (-1 < iVar17);
  return;
}



// Address: 4a01e4f4

void FUN_4a01e4f4(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  
  iVar19 = *param_1 + -1;
  uVar7 = param_1[2];
  uVar8 = param_1[3];
  iVar10 = param_1[4];
  iVar11 = param_1[5];
  uVar9 = param_1[6];
  iVar12 = param_1[7];
  iVar13 = param_1[8];
  iVar16 = *(int *)PTR_LAB_4a01e6a0;
  uVar14 = param_1[9];
  if ((uVar14 & 0x80000000) != 0) {
    iVar16 = iVar16 + ((uVar14 & 0xf800000) >> 0xc);
    puVar6 = (ushort *)param_1[1];
    do {
      uVar14 = uVar7 & uVar9;
      bVar1 = *(byte *)(iVar12 + (uVar9 & uVar8 >> 0xc | uVar14 >> 0x15));
      uVar7 = uVar7 + iVar10;
      uVar8 = uVar8 + iVar11;
      if ((bool)((byte)(uVar14 >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      uVar14 = (uint)*(ushort *)(iVar13 + (bVar1 & 0xf) * 2);
      iVar19 = iVar19 + -1;
      uVar14 = (uint)*(ushort *)(iVar16 + ((uVar14 & 0xf00) >> 2 | (uVar14 & 0xf0) >> 3) * 2) |
               (uint)*(ushort *)(iVar16 + (uVar14 & 0xf) * 0x80) << 0xb;
      uVar15 = *puVar6 - uVar14;
      uVar5 = ((uint)*puVar6 ^ uVar14 ^ uVar15) & 0x10820;
      uVar14 = uVar5 >> 5;
      uVar3 = (ushort)uVar5;
      uVar2 = ~(uVar3 - ((short)uVar14 - (short)((uVar14 & 0x40) >> 1)));
      *puVar6 = (uVar3 & uVar2) + ((ushort)uVar15 & uVar2);
      puVar6 = puVar6 + 1;
    } while (-1 < iVar19);
    return;
  }
  iVar4 = param_1[10];
  puVar6 = (ushort *)param_1[1];
  do {
    bVar1 = *(byte *)(iVar12 + (uVar9 & uVar8 >> 0xc | (uVar7 & uVar9) >> 0x15));
    if ((bool)((byte)((uVar7 & uVar9) >> 0x14) & 1)) {
      bVar1 = bVar1 >> 4;
    }
    uVar5 = (uint)*(ushort *)(iVar13 + (bVar1 & 0xf) * 2);
    iVar17 = iVar16 + ((uVar14 & 0xf800000) >> 0xc);
    iVar19 = iVar19 + -1;
    uVar7 = uVar7 + iVar10;
    uVar8 = uVar8 + iVar11;
    uVar5 = (uint)*(ushort *)(iVar17 + ((uVar5 & 0xf00) >> 2 | (uVar5 & 0xf0) >> 3) * 2) |
            (uint)*(ushort *)(iVar17 + (uVar5 & 0xf) * 0x80) << 0xb;
    uVar18 = *puVar6 - uVar5;
    uVar15 = (uVar5 ^ uVar18 ^ (uint)*puVar6) & 0x10820;
    uVar5 = uVar15 >> 5;
    uVar3 = (ushort)uVar15;
    uVar2 = ~(uVar3 - ((short)uVar5 - (short)((uVar5 & 0x40) >> 1)));
    *puVar6 = (uVar3 & uVar2) + ((ushort)uVar18 & uVar2);
    uVar14 = uVar14 + iVar4;
    puVar6 = puVar6 + 1;
  } while (-1 < iVar19);
  return;
}



// Address: 4a01e6a4

void FUN_4a01e6a4(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  
  iVar17 = *param_1 + -1;
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  iVar11 = param_1[4];
  iVar12 = param_1[5];
  iVar16 = *(int *)PTR_LAB_4a01e818;
  uVar8 = param_1[6];
  iVar13 = param_1[7];
  uVar9 = param_1[9];
  if ((uVar9 & 0x80000000) != 0) {
    iVar16 = iVar16 + ((uVar9 & 0xf800000) >> 0xc);
    puVar5 = (ushort *)param_1[1];
    do {
      uVar9 = (uint)*(ushort *)(iVar13 + (uVar8 & uVar7 >> 0xd | (uVar6 & uVar8) >> 0x14) * 2);
      iVar17 = iVar17 + -1;
      uVar7 = uVar7 + iVar12;
      uVar6 = uVar6 + iVar11;
      uVar9 = (uint)*(ushort *)(iVar16 + ((uVar9 & 0xf00) >> 2 | (uVar9 & 0xf0) >> 3) * 2) |
              (uint)*(ushort *)(iVar16 + (uVar9 & 0xf) * 0x80) << 0xb;
      uVar10 = *puVar5 - uVar9;
      uVar3 = (uVar9 ^ uVar10 ^ (uint)*puVar5) & 0x10820;
      uVar9 = uVar3 >> 5;
      uVar2 = (ushort)uVar3;
      uVar1 = ~(uVar2 - ((short)uVar9 - (short)((uVar9 & 0x40) >> 1)));
      *puVar5 = (uVar2 & uVar1) + ((ushort)uVar10 & uVar1);
      puVar5 = puVar5 + 1;
    } while (-1 < iVar17);
    return;
  }
  iVar4 = param_1[10];
  puVar5 = (ushort *)param_1[1];
  do {
    uVar3 = (uint)*(ushort *)(iVar13 + (uVar8 & uVar7 >> 0xd | (uVar6 & uVar8) >> 0x14) * 2);
    iVar14 = iVar16 + ((uVar9 & 0xf800000) >> 0xc);
    iVar17 = iVar17 + -1;
    uVar7 = uVar7 + iVar12;
    uVar3 = (uint)*(ushort *)(iVar14 + ((uVar3 & 0xf00) >> 2 | (uVar3 & 0xf0) >> 3) * 2) |
            (uint)*(ushort *)(iVar14 + (uVar3 & 0xf) * 0x80) << 0xb;
    uVar6 = uVar6 + iVar11;
    uVar15 = *puVar5 - uVar3;
    uVar10 = ((uint)*puVar5 ^ uVar3 ^ uVar15) & 0x10820;
    uVar3 = uVar10 >> 5;
    uVar2 = (ushort)uVar10;
    uVar1 = ~(uVar2 - ((short)uVar3 - (short)((uVar3 & 0x40) >> 1)));
    *puVar5 = (uVar2 & uVar1) + ((ushort)uVar15 & uVar1);
    uVar9 = uVar9 + iVar4;
    puVar5 = puVar5 + 1;
  } while (-1 < iVar17);
  return;
}



// Address: 4a01e81c

void FUN_4a01e81c(int *param_1)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  int iVar20;
  undefined1 auStack_30 [8];
  int local_28;
  
  uVar8 = param_1[3];
  iVar9 = param_1[4];
  iVar10 = param_1[5];
  uVar6 = param_1[6];
  iVar11 = param_1[7];
  iVar15 = *(int *)PTR_LAB_4a01ebcc;
  uVar13 = param_1[9];
  uVar18 = param_1[2];
  puVar5 = (uint *)param_1[1];
  puVar19 = (uint *)auStack_30;
  iVar7 = *param_1 + -1;
  if ((uVar13 & 0x80000000) != 0) {
    iVar15 = iVar15 + ((uVar13 & 0xf800000) >> 0xc);
    if (((uint)puVar5 & 3) == 0) goto joined_r0x4a01e900;
    do {
      uVar13 = *(uint *)(iVar11 + (uVar6 & uVar8 >> 0xe | (uVar18 & uVar6) >> 0x14) * 4);
      iVar7 = iVar7 + -1;
      uVar8 = uVar8 + iVar10;
      uVar13 = (uint)*(ushort *)(iVar15 + ((uVar13 & 0xffff) >> 0xb | (uVar13 & 0xf8) << 2) * 2) |
               (uint)*(ushort *)(iVar15 + (uVar13 >> 0xe & 0x3e0) * 2) << 0xb;
      uVar14 = (ushort)*puVar5 - uVar13;
      uVar12 = (uVar13 ^ uVar14 ^ (uint)(ushort)*puVar5) & 0x10820;
      uVar13 = uVar12 >> 5;
      uVar3 = (ushort)uVar12;
      uVar2 = ~(uVar3 - ((short)uVar13 - (short)((uVar13 & 0x40) >> 1)));
      *(ushort *)puVar5 = (uVar3 & uVar2) + ((ushort)uVar14 & uVar2);
      uVar18 = uVar18 + iVar9;
      puVar5 = (uint *)((int)puVar5 + 2);
      if (iVar7 < 0) {
        return;
      }
joined_r0x4a01e900:
      while (0 < iVar7) {
        uVar12 = *(uint *)(iVar11 + (uVar6 & uVar8 >> 0xe | (uVar18 & uVar6) >> 0x14) * 4);
        uVar13 = *(uint *)(iVar11 + (uVar6 & uVar8 + iVar10 >> 0xe |
                                    (uVar18 + iVar9 & uVar6) >> 0x14) * 4);
        iVar7 = iVar7 + -2;
        uVar8 = uVar8 + iVar10 + iVar10;
        uVar14 = *puVar5;
        uVar13 = (uint)*(ushort *)(iVar15 + ((uVar12 & 0xffff) >> 0xb | (uVar12 & 0xf8) << 2) * 2) |
                 (uint)*(ushort *)(iVar15 + (uVar12 >> 0xe & 0x3e0) * 2) << 0xb |
                 ((uint)*(ushort *)(iVar15 + ((uVar13 & 0xffff) >> 0xb | (uVar13 & 0xf8) << 2) * 2)
                 | (uint)*(ushort *)(iVar15 + (uVar13 >> 0xe & 0x3e0) * 2) << 0xb) << 0x10;
        uVar12 = (uVar13 ^ uVar14 - uVar13 ^ uVar14) & DAT_4a01ebd0;
        uVar16 = (uVar12 >> 5) - (((DAT_4a01ebd0 ^ DAT_4a01ebd0 >> 5) & uVar12 >> 5) >> 1);
        if (uVar14 < uVar13) {
          uVar16 = uVar16 | 0x8000000;
        }
        *puVar5 = uVar12;
        uVar18 = uVar18 + iVar9 + iVar9;
        *puVar5 = (uVar14 - uVar13 & ~(uVar12 - uVar16)) + (uVar12 & ~(uVar12 - uVar16));
        puVar5 = puVar5 + 1;
      }
    } while (-1 < iVar7);
    return;
  }
  local_28 = param_1[10];
  puVar4 = (uint *)auStack_30;
  if (((uint)puVar5 & 3) == 0) goto joined_r0x4a01eaa8;
  do {
    uVar12 = *(uint *)(iVar11 + (uVar6 & uVar8 >> 0xe | (uVar18 & uVar6) >> 0x14) * 4);
    iVar20 = iVar15 + ((uVar13 & 0xf800000) >> 0xc);
    iVar7 = iVar7 + -1;
    uVar8 = uVar8 + iVar10;
    uVar12 = (uint)*(ushort *)(iVar20 + ((uVar12 & 0xffff) >> 0xb | (uVar12 & 0xf8) << 2) * 2) |
             (uint)*(ushort *)(iVar20 + (uVar12 >> 0xe & 0x3e0) * 2) << 0xb;
    uVar18 = uVar18 + iVar9;
    uVar16 = (ushort)*puVar5 - uVar12;
    uVar14 = (uVar12 ^ uVar16 ^ (uint)(ushort)*puVar5) & 0x10820;
    uVar12 = uVar14 >> 5;
    uVar3 = (ushort)uVar14;
    uVar2 = ~(uVar3 - ((short)uVar12 - (short)((uVar12 & 0x40) >> 1)));
    *(ushort *)puVar5 = (uVar3 & uVar2) + ((ushort)uVar16 & uVar2);
    piVar1 = (int *)((int)puVar19 + 8);
    if (iVar7 < 0) {
      puVar19 = (uint *)((int)puVar19 + 0xc);
    }
    uVar13 = uVar13 + *piVar1;
    puVar5 = (uint *)((int)puVar5 + 2);
    puVar4 = puVar19;
    if (iVar7 < 0) {
      return;
    }
joined_r0x4a01eaa8:
    while (puVar19 = puVar4, 0 < iVar7) {
      uVar14 = uVar13 + puVar19[2];
      uVar12 = *(uint *)(iVar11 + (uVar6 & uVar8 >> 0xe | (uVar18 & uVar6) >> 0x14) * 4);
      *puVar19 = *(undefined4 *)
                  (iVar11 + (uVar6 & uVar8 + iVar10 >> 0xe | (uVar18 + iVar9 & uVar6) >> 0x14) * 4);
      iVar20 = iVar15 + ((uVar13 & 0xf800000) >> 0xc);
      iVar7 = iVar7 + -2;
      puVar19[1] = (uint)*(ushort *)(iVar20 + ((uVar12 & 0xffff) >> 0xb | (uVar12 & 0xf8) << 2) * 2)
                   | (uint)*(ushort *)(iVar20 + (uVar12 >> 0xe & 0x3e0) * 2) << 0xb;
      uVar12 = *puVar19;
      uVar13 = uVar14 + puVar19[2];
      iVar20 = iVar15 + ((uVar14 & 0xf800000) >> 0xc);
      uVar16 = *puVar5;
      uVar12 = puVar19[1] |
               ((uint)*(ushort *)(iVar20 + ((uVar12 & 0xffff) >> 0xb | (uVar12 & 0xf8) << 2) * 2) |
               (uint)*(ushort *)(iVar20 + (uVar12 >> 0xe & 0x3e0) * 2) << 0xb) << 0x10;
      uVar14 = (uVar12 ^ uVar16 - uVar12 ^ uVar16) & DAT_4a01ebd0;
      uVar17 = (uVar14 >> 5) - (((DAT_4a01ebd0 ^ DAT_4a01ebd0 >> 5) & uVar14 >> 5) >> 1);
      if (uVar16 < uVar12) {
        uVar17 = uVar17 | 0x8000000;
      }
      *puVar5 = uVar14;
      uVar8 = uVar8 + iVar10 + iVar10;
      uVar18 = uVar18 + iVar9 + iVar9;
      *puVar5 = (uVar16 - uVar12 & ~(uVar14 - uVar17)) + (uVar14 & ~(uVar14 - uVar17));
      puVar5 = puVar5 + 1;
      puVar4 = puVar19;
    }
  } while (-1 < iVar7);
  return;
}



// Address: 4a01ebd8

void FUN_4a01ebd8(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  
  iVar16 = *(int *)PTR_LAB_4a01ecec;
  iVar12 = *param_1 + -1;
  uVar8 = param_1[2];
  uVar9 = param_1[3];
  iVar14 = param_1[4];
  iVar10 = param_1[5];
  uVar13 = param_1[6];
  iVar11 = param_1[7];
  iVar15 = param_1[8];
  uVar4 = param_1[9];
  puVar7 = (ushort *)param_1[1];
  do {
    uVar5 = uVar8 & uVar13;
    uVar8 = uVar8 + iVar14;
    bVar1 = *(byte *)(iVar11 + (uVar13 & uVar9 >> 0xc | uVar5 >> 0x15));
    if ((bool)((byte)(uVar5 >> 0x14) & 1)) {
      bVar1 = bVar1 >> 4;
    }
    uVar6 = (uint)*(ushort *)(iVar15 + (bVar1 & 0xf) * 2);
    uVar9 = uVar9 + iVar10;
    iVar12 = iVar12 + -1;
    uVar5 = (uVar6 & 0xffff7fff) >> 5;
    uVar5 = *(ushort *)(iVar16 + (uVar4 & 0x7c0) * 0x20 + uVar5 * 2) & 0xffffffe0 |
            *(ushort *)(iVar16 + (uVar4 & 0x1f) * 0x800 + uVar5 * 2) & 0x1f |
            (uint)*(ushort *)(iVar16 + (((uVar4 & 0xf800) >> 6) + 0x8000) * 2 + (uVar6 & 0x1f) * 2);
    uVar17 = *puVar7 - uVar5;
    uVar6 = (uVar5 ^ uVar17 ^ (uint)*puVar7) & 0x10820;
    uVar5 = uVar6 >> 5;
    uVar3 = (ushort)uVar6;
    uVar2 = ~(uVar3 - ((short)uVar5 - (short)((uVar5 & 0x40) >> 1)));
    *puVar7 = (uVar3 & uVar2) + ((ushort)uVar17 & uVar2);
    puVar7 = puVar7 + 1;
  } while (-1 < iVar12);
  return;
}



// Address: 4a01ecf0

void FUN_4a01ecf0(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  
  iVar14 = *(int *)PTR_LAB_4a01edfc;
  iVar10 = *param_1 + -1;
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  iVar12 = param_1[4];
  iVar8 = param_1[5];
  uVar11 = param_1[6];
  iVar9 = param_1[7];
  iVar13 = param_1[8];
  uVar3 = param_1[9];
  puVar5 = (ushort *)param_1[1];
  do {
    uVar15 = uVar6 & uVar11;
    iVar10 = iVar10 + -1;
    uVar6 = uVar6 + iVar12;
    uVar4 = (uint)*(ushort *)
                   (iVar13 + (uint)*(byte *)(iVar9 + (uVar11 & uVar7 >> 0xc | uVar15 >> 0x14)) * 2);
    uVar7 = uVar7 + iVar8;
    uVar15 = (uVar4 & 0xffff7fff) >> 5;
    uVar15 = *(ushort *)(iVar14 + (uVar3 & 0x7c0) * 0x20 + uVar15 * 2) & 0xffffffe0 |
             *(ushort *)(iVar14 + (uVar3 & 0x1f) * 0x800 + uVar15 * 2) & 0x1f |
             (uint)*(ushort *)(iVar14 + (((uVar3 & 0xf800) >> 6) + 0x8000) * 2 + (uVar4 & 0x1f) * 2)
    ;
    uVar16 = *puVar5 - uVar15;
    uVar4 = (uVar15 ^ uVar16 ^ (uint)*puVar5) & 0x10820;
    uVar15 = uVar4 >> 5;
    uVar2 = (ushort)uVar4;
    uVar1 = ~(uVar2 - ((short)uVar15 - (short)((uVar15 & 0x40) >> 1)));
    *puVar5 = (uVar2 & uVar1) + ((ushort)uVar16 & uVar1);
    puVar5 = puVar5 + 1;
  } while (-1 < iVar10);
  return;
}



// Address: 4a01ee00

void FUN_4a01ee00(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  
  iVar14 = *(int *)PTR_LAB_4a01eef4;
  iVar10 = *param_1 + -1;
  uVar7 = param_1[2];
  uVar8 = param_1[3];
  iVar12 = param_1[4];
  iVar9 = param_1[5];
  uVar11 = param_1[6];
  iVar13 = param_1[7];
  uVar3 = param_1[9];
  puVar6 = (ushort *)param_1[1];
  do {
    uVar4 = (uint)*(ushort *)(iVar13 + (uVar11 & uVar8 >> 0xd | (uVar7 & uVar11) >> 0x14) * 2);
    iVar10 = iVar10 + -1;
    uVar8 = uVar8 + iVar9;
    uVar5 = (uVar4 & 0xffff7fff) >> 5;
    uVar5 = *(ushort *)(iVar14 + (uVar3 & 0x7c0) * 0x20 + uVar5 * 2) & 0xffffffe0 |
            *(ushort *)(iVar14 + (uVar3 & 0x1f) * 0x800 + uVar5 * 2) & 0x1f |
            (uint)*(ushort *)(iVar14 + (((uVar3 & 0xf800) >> 6) + 0x8000) * 2 + (uVar4 & 0x1f) * 2);
    uVar7 = uVar7 + iVar12;
    uVar15 = *puVar6 - uVar5;
    uVar4 = (uVar5 ^ uVar15 ^ (uint)*puVar6) & 0x10820;
    uVar5 = uVar4 >> 5;
    uVar2 = (ushort)uVar4;
    uVar1 = ~(uVar2 - ((short)uVar5 - (short)((uVar5 & 0x40) >> 1)));
    *puVar6 = (uVar2 & uVar1) + ((ushort)uVar15 & uVar1);
    puVar6 = puVar6 + 1;
  } while (-1 < iVar10);
  return;
}



// Address: 4a01eef8

void FUN_4a01eef8(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  
  iVar14 = *(int *)PTR_LAB_4a01eff4;
  iVar10 = *param_1 + -1;
  uVar7 = param_1[2];
  uVar8 = param_1[3];
  iVar12 = param_1[4];
  iVar9 = param_1[5];
  uVar11 = param_1[6];
  iVar13 = param_1[7];
  uVar3 = param_1[9];
  puVar6 = (ushort *)param_1[1];
  do {
    uVar1 = *(ushort *)(iVar13 + (uVar11 & uVar8 >> 0xd | (uVar7 & uVar11) >> 0x14) * 2);
    iVar10 = iVar10 + -1;
    uVar8 = uVar8 + iVar9;
    uVar4 = (uVar1 & 0x7ff) >> 6 | (uVar1 & 0x1f) << 5;
    uVar4 = *(ushort *)(iVar14 + (uVar3 & 0x7c0) * 0x20 + uVar4 * 2) & 0xffffffe0 |
            *(ushort *)(iVar14 + (uVar3 & 0x1f) * 0x800 + uVar4 * 2) & 0x1f |
            (uint)*(ushort *)
                   (iVar14 + (((uVar3 & 0xf800) >> 6) + 0x8000) * 2 + (uint)(uVar1 >> 0xb) * 2);
    uVar7 = uVar7 + iVar12;
    uVar15 = *puVar6 - uVar4;
    uVar5 = (uVar4 ^ uVar15 ^ (uint)*puVar6) & 0x10820;
    uVar4 = uVar5 >> 5;
    uVar2 = (ushort)uVar5;
    uVar1 = ~(uVar2 - ((short)uVar4 - (short)((uVar4 & 0x40) >> 1)));
    *puVar6 = (uVar2 & uVar1) + ((ushort)uVar15 & uVar1);
    puVar6 = puVar6 + 1;
  } while (-1 < iVar10);
  return;
}



// Address: 4a01eff8

void FUN_4a01eff8(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  
  iVar12 = param_1[5];
  iVar10 = *param_1 + -1;
  uVar8 = param_1[2];
  uVar9 = param_1[3];
  iVar15 = param_1[4];
  uVar11 = param_1[6];
  uVar4 = param_1[9];
  iVar13 = param_1[7];
  iVar14 = param_1[8];
  puVar7 = (ushort *)param_1[1];
  do {
    uVar5 = uVar8 & uVar11;
    bVar1 = *(byte *)(iVar13 + (uVar11 & uVar9 >> 0xc | uVar5 >> 0x15));
    if ((bool)((byte)(uVar5 >> 0x14) & 1)) {
      bVar1 = bVar1 >> 4;
    }
    uVar5 = (uint)*(ushort *)(iVar14 + (bVar1 & 0xf) * 2);
    uVar8 = uVar8 + iVar15;
    uVar9 = uVar9 + iVar12;
    uVar5 = (((uVar4 & 0xffff) >> 0xb) * (uVar5 & 0xf) >> 4) << 0xb |
            (((uVar4 & 0x7ff) >> 5) * ((uVar5 & 0xff) >> 4) >> 4) << 5 |
            (uVar4 & 0x1f) * ((uVar5 & 0xfff) >> 8) >> 4;
    iVar10 = iVar10 + -1;
    uVar16 = *puVar7 - uVar5;
    uVar6 = (uVar5 ^ uVar16 ^ (uint)*puVar7) & 0x10820;
    uVar5 = uVar6 >> 5;
    uVar3 = (ushort)uVar6;
    uVar2 = ~(uVar3 - ((short)uVar5 - (short)((uVar5 & 0x40) >> 1)));
    *puVar7 = (uVar3 & uVar2) + ((ushort)uVar16 & uVar2);
    puVar7 = puVar7 + 1;
  } while (-1 < iVar10);
  return;
}



// Address: 4a01f0f4

void FUN_4a01f0f4(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  
  iVar9 = *param_1 + -1;
  uVar7 = param_1[2];
  uVar8 = param_1[3];
  iVar11 = param_1[4];
  iVar12 = param_1[5];
  uVar10 = param_1[6];
  iVar13 = param_1[7];
  uVar3 = param_1[9];
  puVar6 = (ushort *)param_1[1];
  do {
    iVar9 = iVar9 + -1;
    uVar4 = (uint)*(ushort *)(iVar13 + (uVar10 & uVar8 >> 0xd | (uVar7 & uVar10) >> 0x14) * 2);
    uVar8 = uVar8 + iVar12;
    uVar7 = uVar7 + iVar11;
    uVar4 = (((uVar3 & 0xffff) >> 0xb) * (uVar4 & 0xf) >> 4) << 0xb |
            (((uVar3 & 0x7ff) >> 5) * ((uVar4 & 0xff) >> 4) >> 4) << 5 |
            (uVar3 & 0x1f) * ((uVar4 & 0xfff) >> 8) >> 4;
    uVar14 = *puVar6 - uVar4;
    uVar5 = (uVar4 ^ uVar14 ^ (uint)*puVar6) & 0x10820;
    uVar4 = uVar5 >> 5;
    uVar2 = (ushort)uVar5;
    uVar1 = ~(uVar2 - ((short)uVar4 - (short)((uVar4 & 0x40) >> 1)));
    *puVar6 = (uVar2 & uVar1) + ((ushort)uVar14 & uVar1);
    puVar6 = puVar6 + 1;
  } while (-1 < iVar9);
  return;
}



// Address: 4a01f1cc

void FUN_4a01f1cc(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  
  iVar14 = *(int *)PTR_LAB_4a01f2c8;
  iVar10 = *param_1 + -1;
  uVar7 = param_1[2];
  uVar8 = param_1[3];
  iVar12 = param_1[4];
  iVar9 = param_1[5];
  uVar11 = param_1[6];
  iVar13 = param_1[7];
  uVar3 = param_1[9];
  puVar6 = (ushort *)param_1[1];
  do {
    uVar4 = *(uint *)(iVar13 + (uVar11 & uVar8 >> 0xe | (uVar7 & uVar11) >> 0x14) * 4);
    uVar8 = uVar8 + iVar9;
    uVar5 = (uVar4 & 0xffff) >> 0xb | (uVar4 & 0xf8) << 2;
    uVar4 = *(ushort *)(iVar14 + (uVar3 & 0x7c0) * 0x20 + uVar5 * 2) & 0xffffffe0 |
            *(ushort *)(iVar14 + (uVar3 & 0x1f) * 0x800 + uVar5 * 2) & 0x1f |
            (uint)*(ushort *)
                   (iVar14 + (((uVar3 & 0xf800) >> 6) + 0x8000) * 2 +
                   ((uVar4 & 0xffffff) >> 0x13) * 2);
    iVar10 = iVar10 + -1;
    uVar15 = *puVar6 - uVar4;
    uVar5 = (uVar4 ^ uVar15 ^ (uint)*puVar6) & 0x10820;
    uVar4 = uVar5 >> 5;
    uVar2 = (ushort)uVar5;
    uVar1 = ~(uVar2 - ((short)uVar4 - (short)((uVar4 & 0x40) >> 1)));
    uVar7 = uVar7 + iVar12;
    *puVar6 = (uVar2 & uVar1) + ((ushort)uVar15 & uVar1);
    puVar6 = puVar6 + 1;
  } while (-1 < iVar10);
  return;
}



// Address: 4a01f2cc

void FUN_4a01f2cc(uint *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  
  uVar3 = DAT_4a01f634;
  uVar9 = *param_1;
  puVar7 = (uint *)param_1[1];
  uVar13 = param_1[10];
  uVar14 = param_1[0xc];
  uVar15 = param_1[0xe];
  iVar10 = uVar9 - 1;
  uVar4 = (param_1[9] & 0xfff0ffff) << 0xc;
  uVar5 = (param_1[0xb] & 0xfff0ffff) << 0xc;
  uVar11 = (param_1[0xd] & 0xfff0ffff) << 0xc;
  if ((uVar13 != 0 || uVar14 != 0) || uVar15 != 0) {
    puVar8 = puVar7;
    iVar12 = iVar10;
    if (((uint)puVar7 & 3) == 0) goto LAB_4a01f58c;
    do {
      do {
        uVar9 = (uVar4 >> 0xc & 0xf800) + (uVar5 >> 0x11 & 0x7e0) + (uVar11 >> 0x17);
        uVar16 = (ushort)*puVar8 - uVar9;
        uVar6 = ((uint)(ushort)*puVar8 ^ uVar9 ^ uVar16) & 0x10820;
        uVar9 = uVar6 >> 5;
        uVar2 = (ushort)uVar6;
        uVar1 = ~(uVar2 - ((short)uVar9 - (short)((uVar9 & 0x40) >> 1)));
        iVar12 = iVar10 + -1;
        uVar4 = uVar4 + uVar13;
        uVar5 = uVar5 + uVar14;
        uVar11 = uVar11 + uVar15;
        puVar7 = (uint *)((int)puVar8 + 2);
        *(ushort *)puVar8 = (uVar2 & uVar1) + ((ushort)uVar16 & uVar1);
        if (iVar12 < 0) {
          return;
        }
LAB_4a01f58c:
        iVar10 = 0;
        puVar8 = puVar7;
      } while (iVar12 == 0);
      do {
        uVar9 = (uVar5 >> 0x11 & 0x7e0) + (uVar11 >> 0x17) + (uVar4 >> 0xc & 0xf800) & 0xfffeffff |
                ((uVar4 + uVar13 >> 0xc & 0xf800) +
                (uVar5 + uVar14 >> 0x11 & 0x7e0) + (uVar11 + uVar15 >> 0x17)) * 0x10000;
        uVar16 = *puVar7;
        uVar4 = uVar4 + uVar13 + uVar13;
        uVar6 = (uVar9 ^ uVar16 - uVar9 ^ uVar16) & uVar3;
        uVar17 = (uVar6 >> 5) - (((uVar3 ^ uVar3 >> 5) & uVar6 >> 5) >> 1);
        if (uVar16 < uVar9) {
          uVar17 = uVar17 | 0x8000000;
        }
        *puVar7 = uVar6;
        iVar12 = iVar12 + -2;
        uVar5 = uVar5 + uVar14 + uVar14;
        uVar11 = uVar11 + uVar15 + uVar15;
        puVar8 = puVar7 + 1;
        *puVar7 = (uVar16 - uVar9 & ~(uVar6 - uVar17)) + (uVar6 & ~(uVar6 - uVar17));
        puVar7 = puVar8;
      } while (0 < iVar12);
      iVar10 = 0;
    } while (iVar12 == 0);
    return;
  }
  uVar4 = (param_1[9] & 0xf800) +
          ((param_1[0xb] & 0xffff) >> 5 & 0x7e0) + ((param_1[0xd] & 0xffff) >> 0xb);
  uVar5 = uVar4 | uVar4 * 0x10000;
  puVar8 = puVar7;
  if (((uint)puVar7 & 3) != 0) {
    uVar9 = uVar9 - 1;
    uVar14 = (ushort)*puVar7 - uVar5;
    uVar13 = DAT_4a01f634 + 0xf7e00000 & (uVar14 ^ uVar5 ^ (uint)(ushort)*puVar7);
    uVar11 = uVar13 >> 5;
    uVar2 = (ushort)uVar13;
    uVar1 = ~(uVar2 - ((short)uVar11 - (short)((uVar11 & 0x40) >> 1)));
    puVar8 = (uint *)((int)puVar7 + 2);
    *(ushort *)puVar7 = (uVar2 & uVar1) + ((ushort)uVar14 & uVar1);
  }
  iVar10 = (int)uVar9 >> 3;
  uVar11 = (int)uVar9 >> 1 & 3;
  puVar7 = puVar8;
  if (uVar11 == 0) goto LAB_4a01f4b8;
  if (uVar11 == 1) goto LAB_4a01f478;
  if (uVar11 == 2) goto LAB_4a01f438;
  if (uVar11 == 3) {
    while( true ) {
      uVar11 = *puVar8;
      uVar14 = (uVar11 ^ uVar5 ^ uVar11 - uVar5) & uVar3;
      uVar13 = (uVar14 >> 5) - (((uVar3 ^ uVar3 >> 5) & uVar14 >> 5) >> 1);
      if (uVar11 < uVar5) {
        uVar13 = uVar13 | 0x8000000;
      }
      *puVar8 = uVar14;
      puVar7 = puVar8 + 1;
      *puVar8 = (uVar11 - uVar5 & ~(uVar14 - uVar13)) + (uVar14 & ~(uVar14 - uVar13));
LAB_4a01f438:
      uVar11 = *puVar7;
      uVar14 = (uVar11 ^ uVar5 ^ uVar11 - uVar5) & uVar3;
      uVar13 = (uVar14 >> 5) - (((uVar3 ^ uVar3 >> 5) & uVar14 >> 5) >> 1);
      if (uVar11 < uVar5) {
        uVar13 = uVar13 | 0x8000000;
      }
      *puVar7 = uVar14;
      puVar8 = puVar7 + 1;
      *puVar7 = (uVar11 - uVar5 & ~(uVar14 - uVar13)) + (uVar14 & ~(uVar14 - uVar13));
LAB_4a01f478:
      uVar11 = *puVar8;
      uVar14 = (uVar11 ^ uVar5 ^ uVar11 - uVar5) & uVar3;
      uVar13 = (uVar14 >> 5) - (((uVar3 ^ uVar3 >> 5) & uVar14 >> 5) >> 1);
      if (uVar11 < uVar5) {
        uVar13 = uVar13 | 0x8000000;
      }
      *puVar8 = uVar14;
      puVar7 = puVar8 + 1;
      *puVar8 = (uVar11 - uVar5 & ~(uVar14 - uVar13)) + (uVar14 & ~(uVar14 - uVar13));
LAB_4a01f4b8:
      bVar18 = iVar10 == 0;
      iVar10 = iVar10 + -1;
      if (bVar18) break;
      uVar11 = *puVar7;
      uVar14 = (uVar11 ^ uVar5 ^ uVar11 - uVar5) & uVar3;
      uVar13 = (uVar14 >> 5) - (((uVar3 ^ uVar3 >> 5) & uVar14 >> 5) >> 1);
      if (uVar11 < uVar5) {
        uVar13 = uVar13 | 0x8000000;
      }
      *puVar7 = uVar14;
      puVar8 = puVar7 + 1;
      *puVar7 = (uVar11 - uVar5 & ~(uVar14 - uVar13)) + (uVar14 & ~(uVar14 - uVar13));
    }
  }
  if ((uVar9 & 1) == 0) {
    return;
  }
  uVar11 = (ushort)*puVar7 - uVar4;
  uVar5 = ((uint)(ushort)*puVar7 ^ uVar4 ^ uVar11) & 0x10820;
  uVar4 = uVar5 >> 5;
  uVar2 = (ushort)uVar5;
  uVar1 = ~(uVar2 - ((short)uVar4 - (short)((uVar4 & 0x40) >> 1)));
  *(ushort *)puVar7 = (uVar2 & uVar1) + ((ushort)uVar11 & uVar1);
  return;
}



// Address: 4a01f638

void FUN_4a01f638(int *param_1)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  
  iVar10 = *(int *)PTR_LAB_4a01f7a8;
  iVar19 = *param_1 + -1;
  uVar11 = param_1[2];
  uVar24 = param_1[3];
  iVar15 = param_1[4];
  iVar12 = param_1[5];
  uVar20 = param_1[6];
  iVar13 = param_1[7];
  iVar16 = param_1[8];
  iVar23 = param_1[10];
  iVar21 = param_1[0xc];
  iVar5 = param_1[0xe];
  uVar14 = (param_1[9] & 0xfff0ffffU) << 0xc;
  uVar17 = (param_1[0xb] & 0xfff0ffffU) << 0xc;
  uVar18 = (param_1[0xd] & 0xfff0ffffU) << 0xc;
  puVar9 = (ushort *)param_1[1];
  do {
    uVar6 = uVar11 & uVar20;
    bVar2 = *(byte *)(iVar13 + (uVar20 & uVar24 >> 0xc | uVar6 >> 0x15));
    uVar11 = uVar11 + iVar15;
    if ((bool)((byte)(uVar6 >> 0x14) & 1)) {
      bVar2 = bVar2 >> 4;
    }
    uVar24 = uVar24 + iVar12;
    uVar7 = (uint)*(ushort *)(iVar16 + (bVar2 & 0xf) * 2);
    uVar6 = uVar14 >> 0x17;
    uVar14 = uVar14 + iVar23;
    uVar8 = uVar17 >> 0x17;
    uVar17 = uVar17 + iVar21;
    uVar22 = uVar18 >> 0x17;
    uVar18 = uVar18 + iVar5;
    uVar1 = (uVar7 & 0xffff7fff) >> 5;
    uVar6 = *(ushort *)(iVar10 + uVar8 * 0x800 + uVar1 * 2) & 0xffffffe0 |
            *(ushort *)(iVar10 + uVar22 * 0x800 + uVar1 * 2) & 0x1f |
            (uint)*(ushort *)(iVar10 + (uVar6 * 0x20 + 0x8000) * 2 + (uVar7 & 0x1f) * 2);
    iVar19 = iVar19 + -1;
    uVar22 = *puVar9 - uVar6;
    uVar8 = (uVar6 ^ uVar22 ^ (uint)*puVar9) & 0x10820;
    uVar6 = uVar8 >> 5;
    uVar4 = (ushort)uVar8;
    uVar3 = ~(uVar4 - ((short)uVar6 - (short)((uVar6 & 0x40) >> 1)));
    *puVar9 = (uVar4 & uVar3) + ((ushort)uVar22 & uVar3);
    puVar9 = puVar9 + 1;
  } while (-1 < iVar19);
  return;
}



// Address: 4a01f7ac

void FUN_4a01f7ac(int *param_1)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  
  iVar8 = *(int *)PTR_LAB_4a01f914;
  iVar17 = *param_1 + -1;
  uVar9 = param_1[2];
  uVar23 = param_1[3];
  iVar10 = param_1[4];
  iVar13 = param_1[5];
  uVar18 = param_1[6];
  iVar11 = param_1[7];
  iVar14 = param_1[8];
  iVar19 = param_1[10];
  iVar22 = param_1[0xc];
  iVar4 = param_1[0xe];
  uVar12 = (param_1[9] & 0xfff0ffffU) << 0xc;
  uVar15 = (param_1[0xb] & 0xfff0ffffU) << 0xc;
  uVar16 = (param_1[0xd] & 0xfff0ffffU) << 0xc;
  puVar7 = (ushort *)param_1[1];
  do {
    uVar5 = uVar23 >> 0xc;
    uVar20 = uVar9 & uVar18;
    uVar23 = uVar23 + iVar13;
    uVar6 = uVar16 >> 0x17;
    uVar9 = uVar9 + iVar10;
    uVar21 = uVar12 >> 0x17;
    uVar12 = uVar12 + iVar19;
    uVar1 = uVar15 >> 0x17;
    uVar15 = uVar15 + iVar22;
    uVar20 = (uint)*(ushort *)
                    (iVar14 + (uint)*(byte *)(iVar11 + (uVar18 & uVar5 | uVar20 >> 0x14)) * 2);
    uVar16 = uVar16 + iVar4;
    uVar5 = (uVar20 & 0xffff7fff) >> 5;
    uVar5 = *(ushort *)(iVar8 + uVar1 * 0x800 + uVar5 * 2) & 0xffffffe0 |
            *(ushort *)(iVar8 + uVar6 * 0x800 + uVar5 * 2) & 0x1f |
            (uint)*(ushort *)(iVar8 + (uVar21 * 0x20 + 0x8000) * 2 + (uVar20 & 0x1f) * 2);
    iVar17 = iVar17 + -1;
    uVar21 = *puVar7 - uVar5;
    uVar6 = (uVar5 ^ uVar21 ^ (uint)*puVar7) & 0x10820;
    uVar5 = uVar6 >> 5;
    uVar3 = (ushort)uVar6;
    uVar2 = ~(uVar3 - ((short)uVar5 - (short)((uVar5 & 0x40) >> 1)));
    *puVar7 = (uVar3 & uVar2) + ((ushort)uVar21 & uVar2);
    puVar7 = puVar7 + 1;
  } while (-1 < iVar17);
  return;
}



// Address: 4a01f918

void FUN_4a01f918(int *param_1)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  
  iVar9 = *(int *)PTR_LAB_4a01fa70;
  iVar17 = *param_1 + -1;
  uVar10 = param_1[2];
  uVar22 = param_1[3];
  iVar14 = param_1[4];
  iVar11 = param_1[5];
  uVar18 = param_1[6];
  iVar12 = param_1[7];
  iVar19 = param_1[10];
  iVar21 = param_1[0xc];
  iVar4 = param_1[0xe];
  uVar13 = (param_1[9] & 0xfff0ffffU) << 0xc;
  uVar15 = (param_1[0xb] & 0xfff0ffffU) << 0xc;
  uVar16 = (param_1[0xd] & 0xfff0ffffU) << 0xc;
  puVar8 = (ushort *)param_1[1];
  do {
    uVar6 = uVar22 >> 0xd;
    uVar22 = uVar22 + iVar11;
    uVar5 = (uint)*(ushort *)(iVar12 + (uVar18 & uVar6 | (uVar10 & uVar18) >> 0x14) * 2);
    uVar10 = uVar10 + iVar14;
    uVar6 = uVar13 >> 0x17;
    uVar13 = uVar13 + iVar19;
    uVar7 = uVar15 >> 0x17;
    uVar15 = uVar15 + iVar21;
    uVar20 = uVar16 >> 0x17;
    uVar16 = uVar16 + iVar4;
    uVar1 = (uVar5 & 0xffff7fff) >> 5;
    uVar6 = *(ushort *)(iVar9 + uVar7 * 0x800 + uVar1 * 2) & 0xffffffe0 |
            *(ushort *)(iVar9 + uVar20 * 0x800 + uVar1 * 2) & 0x1f |
            (uint)*(ushort *)(iVar9 + (uVar6 * 0x20 + 0x8000) * 2 + (uVar5 & 0x1f) * 2);
    iVar17 = iVar17 + -1;
    uVar20 = *puVar8 - uVar6;
    uVar7 = (uVar6 ^ uVar20 ^ (uint)*puVar8) & 0x10820;
    uVar6 = uVar7 >> 5;
    uVar3 = (ushort)uVar7;
    uVar2 = ~(uVar3 - ((short)uVar6 - (short)((uVar6 & 0x40) >> 1)));
    *puVar8 = (uVar3 & uVar2) + ((ushort)uVar20 & uVar2);
    puVar8 = puVar8 + 1;
  } while (-1 < iVar17);
  return;
}



// Address: 4a01fa74

void FUN_4a01fa74(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  
  iVar8 = *(int *)PTR_LAB_4a01fbdc;
  iVar16 = *param_1 + -1;
  uVar9 = param_1[2];
  uVar21 = param_1[3];
  iVar13 = param_1[4];
  iVar10 = param_1[5];
  uVar17 = param_1[6];
  iVar11 = param_1[7];
  iVar18 = param_1[10];
  iVar20 = param_1[0xc];
  iVar3 = param_1[0xe];
  uVar12 = (param_1[9] & 0xfff0ffffU) << 0xc;
  uVar14 = (param_1[0xb] & 0xfff0ffffU) << 0xc;
  uVar15 = (param_1[0xd] & 0xfff0ffffU) << 0xc;
  puVar7 = (ushort *)param_1[1];
  do {
    uVar5 = uVar15 >> 0x17;
    uVar1 = *(ushort *)(iVar11 + (uVar17 & uVar21 >> 0xd | (uVar9 & uVar17) >> 0x14) * 2);
    uVar21 = uVar21 + iVar10;
    uVar9 = uVar9 + iVar13;
    uVar6 = uVar12 >> 0x17;
    uVar12 = uVar12 + iVar18;
    uVar19 = uVar14 >> 0x17;
    uVar14 = uVar14 + iVar20;
    uVar15 = uVar15 + iVar3;
    uVar4 = (uVar1 & 0x7ff) >> 6 | (uVar1 & 0x1f) << 5;
    uVar5 = *(ushort *)(iVar8 + uVar19 * 0x800 + uVar4 * 2) & 0xffffffe0 |
            *(ushort *)(iVar8 + uVar5 * 0x800 + uVar4 * 2) & 0x1f |
            (uint)*(ushort *)(iVar8 + (uVar6 * 0x20 + 0x8000) * 2 + (uint)(uVar1 >> 0xb) * 2);
    iVar16 = iVar16 + -1;
    uVar19 = *puVar7 - uVar5;
    uVar6 = (uVar5 ^ uVar19 ^ (uint)*puVar7) & 0x10820;
    uVar5 = uVar6 >> 5;
    uVar2 = (ushort)uVar6;
    uVar1 = ~(uVar2 - ((short)uVar5 - (short)((uVar5 & 0x40) >> 1)));
    *puVar7 = (uVar2 & uVar1) + ((ushort)uVar19 & uVar1);
    puVar7 = puVar7 + 1;
  } while (-1 < iVar16);
  return;
}



// Address: 4a01fbe0

void FUN_4a01fbe0(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  
  iVar9 = param_1[5];
  iVar13 = *param_1 + -1;
  uVar7 = param_1[2];
  uVar8 = param_1[3];
  iVar19 = param_1[4];
  uVar14 = param_1[6];
  iVar10 = param_1[7];
  iVar20 = param_1[8];
  iVar15 = param_1[10];
  iVar17 = param_1[0xc];
  iVar18 = param_1[0xe];
  uVar12 = (param_1[0xd] & 0xfff0ffffU) << 0xc;
  puVar6 = (ushort *)param_1[1];
  uVar11 = (param_1[0xb] & 0xfff0ffffU) << 0xc;
  uVar21 = (param_1[9] & 0xfff0ffffU) << 0xc;
  do {
    uVar4 = uVar7 & uVar14;
    bVar1 = *(byte *)(iVar10 + (uVar14 & uVar8 >> 0xc | uVar4 >> 0x15));
    uVar7 = uVar7 + iVar19;
    if ((bool)((byte)(uVar4 >> 0x14) & 1)) {
      bVar1 = bVar1 >> 4;
    }
    uVar8 = uVar8 + iVar9;
    uVar4 = (uint)*(ushort *)(iVar20 + (bVar1 & 0xf) * 2);
    uVar4 = (((uVar21 & 0xfffffff) >> 0x17) * (uVar4 & 0xf) >> 4) << 0xb |
            (((uVar4 & 0xff) >> 4) * ((uVar11 & 0xfffffff) >> 0x16) >> 4) << 5 |
            ((uVar4 & 0xfff) >> 8) * ((uVar12 & 0xfffffff) >> 0x17) >> 4;
    iVar13 = iVar13 + -1;
    uVar16 = *puVar6 - uVar4;
    uVar5 = (uVar4 ^ uVar16 ^ (uint)*puVar6) & 0x10820;
    uVar4 = uVar5 >> 5;
    uVar3 = (ushort)uVar5;
    uVar2 = ~(uVar3 - ((short)uVar4 - (short)((uVar4 & 0x40) >> 1)));
    uVar12 = uVar12 + iVar18;
    *puVar6 = (uVar3 & uVar2) + ((ushort)uVar16 & uVar2);
    puVar6 = puVar6 + 1;
    uVar11 = uVar11 + iVar17;
    uVar21 = uVar21 + iVar15;
  } while (-1 < iVar13);
  return;
}



// Address: 4a01fd38

void FUN_4a01fd38(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  
  iVar8 = param_1[5];
  iVar11 = *param_1 + -1;
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  iVar17 = param_1[4];
  uVar12 = param_1[6];
  iVar18 = param_1[7];
  iVar15 = param_1[10];
  iVar13 = param_1[0xc];
  iVar16 = param_1[0xe];
  uVar10 = (param_1[0xd] & 0xfff0ffffU) << 0xc;
  puVar5 = (ushort *)param_1[1];
  uVar9 = (param_1[0xb] & 0xfff0ffffU) << 0xc;
  uVar19 = (param_1[9] & 0xfff0ffffU) << 0xc;
  do {
    uVar3 = uVar7 >> 0xd;
    uVar7 = uVar7 + iVar8;
    uVar3 = (uint)*(ushort *)(iVar18 + (uVar12 & uVar3 | (uVar6 & uVar12) >> 0x14) * 2);
    uVar6 = uVar6 + iVar17;
    uVar3 = (((uVar19 & 0xfffffff) >> 0x17) * (uVar3 & 0xf) >> 4) << 0xb |
            (((uVar3 & 0xff) >> 4) * ((uVar9 & 0xfffffff) >> 0x16) >> 4) << 5 |
            ((uVar3 & 0xfff) >> 8) * ((uVar10 & 0xfffffff) >> 0x17) >> 4;
    iVar11 = iVar11 + -1;
    uVar14 = *puVar5 - uVar3;
    uVar4 = (uVar3 ^ uVar14 ^ (uint)*puVar5) & 0x10820;
    uVar3 = uVar4 >> 5;
    uVar2 = (ushort)uVar4;
    uVar1 = ~(uVar2 - ((short)uVar3 - (short)((uVar3 & 0x40) >> 1)));
    uVar10 = uVar10 + iVar16;
    *puVar5 = (uVar2 & uVar1) + ((ushort)uVar14 & uVar1);
    puVar5 = puVar5 + 1;
    uVar9 = uVar9 + iVar13;
    uVar19 = uVar19 + iVar15;
  } while (-1 < iVar11);
  return;
}



// Address: 4a01fe78

void FUN_4a01fe78(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  
  iVar9 = *(int *)PTR_LAB_4a01ffe0;
  iVar17 = *param_1 + -1;
  uVar10 = param_1[2];
  uVar22 = param_1[3];
  iVar14 = param_1[4];
  iVar11 = param_1[5];
  uVar18 = param_1[6];
  iVar12 = param_1[7];
  iVar19 = param_1[10];
  iVar21 = param_1[0xc];
  iVar3 = param_1[0xe];
  uVar13 = (param_1[9] & 0xfff0ffffU) << 0xc;
  uVar15 = (param_1[0xb] & 0xfff0ffffU) << 0xc;
  uVar16 = (param_1[0xd] & 0xfff0ffffU) << 0xc;
  puVar8 = (ushort *)param_1[1];
  do {
    uVar6 = uVar16 >> 0x17;
    uVar4 = *(uint *)(iVar12 + (uVar18 & uVar22 >> 0xe | (uVar10 & uVar18) >> 0x14) * 4);
    uVar22 = uVar22 + iVar11;
    uVar10 = uVar10 + iVar14;
    uVar7 = uVar13 >> 0x17;
    uVar13 = uVar13 + iVar19;
    uVar20 = uVar15 >> 0x17;
    uVar15 = uVar15 + iVar21;
    uVar16 = uVar16 + iVar3;
    uVar5 = (uVar4 & 0xffff) >> 0xb | (uVar4 & 0xf8) << 2;
    uVar6 = *(ushort *)(iVar9 + uVar20 * 0x800 + uVar5 * 2) & 0xffffffe0 |
            *(ushort *)(iVar9 + uVar6 * 0x800 + uVar5 * 2) & 0x1f |
            (uint)*(ushort *)
                   (iVar9 + (uVar7 * 0x20 + 0x8000) * 2 + ((uVar4 & 0xffffff) >> 0x13) * 2);
    iVar17 = iVar17 + -1;
    uVar20 = *puVar8 - uVar6;
    uVar7 = (uVar6 ^ uVar20 ^ (uint)*puVar8) & 0x10820;
    uVar6 = uVar7 >> 5;
    uVar2 = (ushort)uVar7;
    uVar1 = ~(uVar2 - ((short)uVar6 - (short)((uVar6 & 0x40) >> 1)));
    *puVar8 = (uVar2 & uVar1) + ((ushort)uVar20 & uVar1);
    puVar8 = puVar8 + 1;
  } while (-1 < iVar17);
  return;
}



// Address: 4a02059c

void FUN_4a02059c(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ushort *puVar15;
  ushort *puVar16;
  
  puVar15 = (ushort *)param_1[1];
  iVar7 = *param_1 + -1;
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  iVar9 = param_1[4];
  iVar10 = param_1[5];
  uVar8 = param_1[6];
  iVar11 = param_1[7];
  iVar13 = param_1[8];
  iVar12 = *(int *)PTR_LAB_4a020728 + ((param_1[9] & 0xf800000U) >> 0xc);
  if (*(int *)(PTR_LAB_4a020728 + 0x5c) != 0) {
    do {
      uVar4 = uVar5 & uVar8;
      bVar1 = *(byte *)(iVar11 + (uVar8 & uVar6 >> 0xc | uVar4 >> 0x15));
      uVar5 = uVar5 + iVar9;
      uVar6 = uVar6 + iVar10;
      if ((bool)((byte)(uVar4 >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      uVar4 = (uint)*(ushort *)(iVar13 + (bVar1 & 0xf) * 2);
      iVar7 = iVar7 + -1;
      *puVar15 = *(ushort *)(iVar12 + ((uVar4 & 0xf00) >> 2 | (uVar4 & 0xf0) >> 3) * 2) |
                 *(short *)(iVar12 + (uVar4 & 0xf) * 0x80) << 0xb;
      puVar15 = puVar15 + 1;
    } while (-1 < iVar7);
    return;
  }
  do {
    bVar1 = *(byte *)(iVar11 + (uVar8 & uVar6 >> 0xc | (uVar5 & uVar8) >> 0x15));
    puVar16 = puVar15;
    if ((bool)((byte)((uVar5 & uVar8) >> 0x14) & 1)) {
      bVar1 = bVar1 >> 4;
    }
    while( true ) {
      uVar6 = uVar6 + iVar10;
      uVar5 = uVar5 + iVar9;
      if ((bVar1 & 0xf) != 0) break;
      iVar7 = iVar7 + -1;
      puVar16 = puVar16 + 1;
      if (iVar7 < 0) {
        return;
      }
      bVar1 = *(byte *)(iVar11 + (uVar8 & uVar6 >> 0xc | (uVar5 & uVar8) >> 0x15));
      if ((bool)((byte)((uVar5 & uVar8) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
    }
    uVar2 = *(ushort *)(iVar13 + (bVar1 & 0xf) * 2);
    uVar3 = (uint)uVar2;
    uVar4 = (uint)(uVar2 >> 0xc);
    uVar14 = (uint)*(ushort *)(iVar12 + ((uVar3 & 0xf00) >> 2 | (uVar3 & 0xf0) >> 3) * 2);
    uVar3 = uVar14 | (uint)*(ushort *)(iVar12 + (uVar3 & 0xf) * 0x80) << 0xb;
    if (uVar4 != 0xf) {
      uVar4 = DAT_4a02072c &
              ((uVar3 | (uVar14 & 0x7ff) << 0x10) & 0xffe0f81f) * uVar4 +
              (0x10 - uVar4) * (CONCAT22(*puVar16,*puVar16) & 0x7e0f81f) >> 4;
      uVar3 = (uVar4 | uVar4 << 0x10) >> 0x10;
    }
    iVar7 = iVar7 + -1;
    puVar15 = puVar16 + 1;
    *puVar16 = (ushort)uVar3;
  } while (-1 < iVar7);
  return;
}



// Address: 4a020730

void FUN_4a020730(int *param_1)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  
  uVar12 = DAT_4a0208ac;
  puVar6 = (ushort *)param_1[1];
  iVar15 = *param_1 + -1;
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  iVar9 = param_1[4];
  iVar10 = param_1[5];
  iVar11 = *(int *)PTR_LAB_4a0208a8 + ((param_1[9] & 0xf800000U) >> 0xc);
  uVar8 = param_1[6];
  iVar3 = param_1[7];
  if (*(int *)(PTR_LAB_4a0208a8 + 0x5c) != 0) {
    do {
      uVar12 = (uint)*(ushort *)(iVar3 + (uVar8 & uVar5 >> 0xd | (uVar4 & uVar8) >> 0x14) * 2);
      iVar15 = iVar15 + -1;
      uVar5 = uVar5 + iVar10;
      uVar4 = uVar4 + iVar9;
      *puVar6 = *(ushort *)(iVar11 + ((uVar12 & 0xf00) >> 2 | (uVar12 & 0xf0) >> 3) * 2) |
                *(short *)(iVar11 + (uVar12 & 0xf) * 0x80) << 0xb;
      puVar6 = puVar6 + 1;
    } while (-1 < iVar15);
    return;
  }
  do {
    uVar2 = *(ushort *)(iVar3 + (uVar8 & uVar5 >> 0xd | (uVar4 & uVar8) >> 0x14) * 2);
    puVar7 = puVar6;
    while( true ) {
      uVar13 = (uint)uVar2;
      uVar4 = uVar4 + iVar9;
      uVar5 = uVar5 + iVar10;
      if (uVar13 != 0) break;
      iVar15 = iVar15 + -1;
      puVar7 = puVar7 + 1;
      if (iVar15 < 0) {
        return;
      }
      uVar2 = *(ushort *)(iVar3 + (uVar8 & uVar5 >> 0xd | (uVar4 & uVar8) >> 0x14) * 2);
    }
    uVar1 = (uint)(uVar2 >> 0xc);
    uVar14 = (uint)*(ushort *)(iVar11 + ((uVar13 & 0xf00) >> 2 | (uVar13 & 0xf0) >> 3) * 2);
    uVar13 = uVar14 | (uint)*(ushort *)(iVar11 + (uVar13 & 0xf) * 0x80) << 0xb;
    if (uVar1 != 0xf) {
      uVar13 = uVar12 & ((uVar13 | (uVar14 & 0x7ff) << 0x10) & 0xffe0f81f) * uVar1 +
                        (0x10 - uVar1) * (CONCAT22(*puVar7,*puVar7) & 0x7e0f81f) >> 4;
      uVar13 = (uVar13 | uVar13 << 0x10) >> 0x10;
    }
    iVar15 = iVar15 + -1;
    puVar6 = puVar7 + 1;
    *puVar7 = (ushort)uVar13;
  } while (-1 < iVar15);
  return;
}



// Address: 4a0208b0

void FUN_4a0208b0(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  
  uVar11 = DAT_4a020a28;
  puVar5 = (ushort *)param_1[1];
  iVar14 = *param_1 + -1;
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  iVar8 = param_1[4];
  iVar9 = param_1[5];
  iVar10 = *(int *)PTR_LAB_4a020a24 + ((param_1[9] & 0xf800000U) >> 0xc);
  uVar7 = param_1[6];
  iVar2 = param_1[7];
  if (*(int *)(PTR_LAB_4a020a24 + 0x5c) != 0) {
    do {
      uVar11 = *(uint *)(iVar2 + (uVar7 & uVar4 >> 0xe | (uVar3 & uVar7) >> 0x14) * 4);
      iVar14 = iVar14 + -1;
      uVar4 = uVar4 + iVar9;
      uVar3 = uVar3 + iVar8;
      *puVar5 = *(ushort *)(iVar10 + ((uVar11 & 0xffff) >> 0xb | (uVar11 & 0xf8) << 2) * 2) |
                *(short *)(iVar10 + (uVar11 >> 0xe & 0x3e0) * 2) << 0xb;
      puVar5 = puVar5 + 1;
    } while (-1 < iVar14);
    return;
  }
  do {
    uVar12 = *(uint *)(iVar2 + (uVar7 & uVar4 >> 0xe | (uVar3 & uVar7) >> 0x14) * 4);
    puVar6 = puVar5;
    while( true ) {
      uVar3 = uVar3 + iVar8;
      uVar4 = uVar4 + iVar9;
      if (uVar12 != 0) break;
      iVar14 = iVar14 + -1;
      puVar6 = puVar6 + 1;
      if (iVar14 < 0) {
        return;
      }
      uVar12 = *(uint *)(iVar2 + (uVar7 & uVar4 >> 0xe | (uVar3 & uVar7) >> 0x14) * 4);
    }
    uVar1 = uVar12 >> 0x1b;
    uVar13 = (uint)*(ushort *)(iVar10 + ((uVar12 & 0xffff) >> 0xb | (uVar12 & 0xf8) << 2) * 2);
    uVar12 = uVar13 | (uint)*(ushort *)(iVar10 + (uVar12 >> 0xe & 0x3e0) * 2) << 0xb;
    if (uVar1 != 0x1f) {
      uVar12 = uVar11 & ((uVar12 | (uVar13 & 0x7ff) << 0x10) & 0xffe0f81f) * uVar1 +
                        (0x20 - uVar1) * (CONCAT22(*puVar6,*puVar6) & 0x7e0f81f) >> 5;
      uVar12 = (uVar12 | uVar12 << 0x10) >> 0x10;
    }
    iVar14 = iVar14 + -1;
    puVar5 = puVar6 + 1;
    *puVar6 = (ushort)uVar12;
  } while (-1 < iVar14);
  return;
}



// Address: 4a020dd8

void FUN_4a020dd8(int *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  puVar5 = (ushort *)param_1[1];
  iVar14 = *param_1 + -1;
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  iVar9 = param_1[4];
  iVar10 = param_1[5];
  iVar12 = *(int *)PTR_LAB_4a021014;
  uVar6 = param_1[6];
  iVar11 = param_1[7];
  uVar7 = param_1[9];
  if (*(int *)(PTR_LAB_4a021014 + 0x5c) != 0) {
    if ((uVar7 & 0x80000000) != 0) {
      iVar12 = iVar12 + ((uVar7 & 0xf800000) >> 0xc);
      do {
        uVar7 = (uint)*(ushort *)(iVar11 + (uVar6 & uVar4 >> 0xd | (uVar3 & uVar6) >> 0x14) * 2);
        iVar14 = iVar14 + -1;
        uVar4 = uVar4 + iVar10;
        uVar3 = uVar3 + iVar9;
        *puVar5 = *(ushort *)(iVar12 + ((uVar7 & 0xffff7fff) >> 5) * 2) |
                  *(short *)(iVar12 + (uVar7 & 0x1f) * 0x40) << 0xb;
        puVar5 = puVar5 + 1;
      } while (-1 < iVar14);
      return;
    }
    iVar13 = param_1[10];
    do {
      uVar2 = (uint)*(ushort *)(iVar11 + (uVar6 & uVar4 >> 0xd | (uVar3 & uVar6) >> 0x14) * 2);
      iVar8 = iVar12 + ((uVar7 & 0xf800000) >> 0xc);
      iVar14 = iVar14 + -1;
      uVar4 = uVar4 + iVar10;
      uVar3 = uVar3 + iVar9;
      uVar7 = uVar7 + iVar13;
      *puVar5 = *(ushort *)(iVar8 + ((uVar2 & 0xffff7fff) >> 5) * 2) |
                *(short *)(iVar8 + (uVar2 & 0x1f) * 0x40) << 0xb;
      puVar5 = puVar5 + 1;
    } while (-1 < iVar14);
    return;
  }
  if ((uVar7 & 0x80000000) == 0) {
    iVar13 = param_1[10];
    do {
      uVar1 = *(ushort *)(iVar11 + (uVar6 & uVar4 >> 0xd | (uVar3 & uVar6) >> 0x14) * 2);
      while( true ) {
        uVar2 = (uint)uVar1;
        uVar3 = uVar3 + iVar9;
        uVar4 = uVar4 + iVar10;
        if (uVar2 == 0) break;
        iVar8 = iVar12 + ((uVar7 & 0xf800000) >> 0xc);
        iVar14 = iVar14 + -1;
        uVar7 = uVar7 + iVar13;
        *puVar5 = *(ushort *)(iVar8 + ((uVar2 & 0xffff7fff) >> 5) * 2) |
                  *(short *)(iVar8 + (uVar2 & 0x1f) * 0x40) << 0xb;
        if (iVar14 < 0) {
          return;
        }
        uVar1 = *(ushort *)(iVar11 + (uVar6 & uVar4 >> 0xd | (uVar3 & uVar6) >> 0x14) * 2);
        puVar5 = puVar5 + 1;
      }
      iVar14 = iVar14 + -1;
      puVar5 = puVar5 + 1;
      uVar7 = uVar7 + iVar13;
    } while (-1 < iVar14);
    return;
  }
  iVar12 = iVar12 + ((uVar7 & 0xf800000) >> 0xc);
  do {
    uVar1 = *(ushort *)(iVar11 + (uVar6 & uVar4 >> 0xd | (uVar3 & uVar6) >> 0x14) * 2);
    while( true ) {
      uVar7 = (uint)uVar1;
      uVar3 = uVar3 + iVar9;
      uVar4 = uVar4 + iVar10;
      if (uVar7 == 0) break;
      iVar14 = iVar14 + -1;
      *puVar5 = *(ushort *)(iVar12 + ((uVar7 & 0xffff7fff) >> 5) * 2) |
                *(short *)(iVar12 + (uVar7 & 0x1f) * 0x40) << 0xb;
      if (iVar14 < 0) {
        return;
      }
      uVar1 = *(ushort *)(iVar11 + (uVar6 & uVar4 >> 0xd | (uVar3 & uVar6) >> 0x14) * 2);
      puVar5 = puVar5 + 1;
    }
    iVar14 = iVar14 + -1;
    puVar5 = puVar5 + 1;
  } while (-1 < iVar14);
  return;
}



// Address: 4a021018

void FUN_4a021018(int *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  puVar6 = (ushort *)param_1[1];
  iVar14 = *param_1 + -1;
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  iVar9 = param_1[4];
  iVar10 = param_1[5];
  iVar13 = *(int *)PTR_LAB_4a021288;
  uVar7 = param_1[6];
  iVar11 = param_1[7];
  uVar8 = param_1[9];
  if (*(int *)(PTR_LAB_4a021288 + 0x5c) != 0) {
    if ((uVar8 & 0x80000000) != 0) {
      iVar13 = iVar13 + ((uVar8 & 0xf800000) >> 0xc);
      do {
        uVar1 = *(ushort *)(iVar11 + (uVar7 & uVar5 >> 0xd | (uVar4 & uVar7) >> 0x14) * 2);
        iVar14 = iVar14 + -1;
        uVar5 = uVar5 + iVar10;
        uVar4 = uVar4 + iVar9;
        *puVar6 = *(ushort *)(iVar13 + ((uVar1 & 0x7ff) >> 6 | (uVar1 & 0x1f) << 5) * 2) |
                  *(short *)(iVar13 + (uint)(uVar1 >> 0xb) * 0x40) << 0xb;
        puVar6 = puVar6 + 1;
      } while (-1 < iVar14);
      return;
    }
    iVar3 = param_1[10];
    do {
      uVar1 = *(ushort *)(iVar11 + (uVar7 & uVar5 >> 0xd | (uVar4 & uVar7) >> 0x14) * 2);
      iVar12 = iVar13 + ((uVar8 & 0xf800000) >> 0xc);
      iVar14 = iVar14 + -1;
      uVar5 = uVar5 + iVar10;
      *puVar6 = *(ushort *)(iVar12 + ((uVar1 & 0x7ff) >> 6 | (uVar1 & 0x1f) << 5) * 2) |
                *(short *)(iVar12 + (uint)(uVar1 >> 0xb) * 0x40) << 0xb;
      uVar4 = uVar4 + iVar9;
      uVar8 = uVar8 + iVar3;
      puVar6 = puVar6 + 1;
    } while (-1 < iVar14);
    return;
  }
  if ((uVar8 & 0x80000000) == 0) {
    iVar3 = param_1[10];
    do {
      uVar1 = *(ushort *)(iVar11 + (uVar7 & uVar5 >> 0xd | (uVar4 & uVar7) >> 0x14) * 2);
      while( true ) {
        uVar2 = (uint)uVar1;
        uVar4 = uVar4 + iVar9;
        uVar5 = uVar5 + iVar10;
        if (uVar2 == 0) break;
        iVar12 = iVar13 + ((uVar8 & 0xf800000) >> 0xc);
        iVar14 = iVar14 + -1;
        *puVar6 = *(ushort *)(iVar12 + ((uVar2 & 0x7ff) >> 6 | (uVar2 & 0x1f) << 5) * 2) |
                  *(short *)(iVar12 + (uint)(uVar1 >> 0xb) * 0x40) << 0xb;
        uVar8 = uVar8 + iVar3;
        if (iVar14 < 0) {
          return;
        }
        uVar1 = *(ushort *)(iVar11 + (uVar7 & uVar5 >> 0xd | (uVar4 & uVar7) >> 0x14) * 2);
        puVar6 = puVar6 + 1;
      }
      iVar14 = iVar14 + -1;
      puVar6 = puVar6 + 1;
      uVar8 = uVar8 + iVar3;
    } while (-1 < iVar14);
    return;
  }
  iVar13 = iVar13 + ((uVar8 & 0xf800000) >> 0xc);
  do {
    uVar1 = *(ushort *)(iVar11 + (uVar7 & uVar5 >> 0xd | (uVar4 & uVar7) >> 0x14) * 2);
    while( true ) {
      uVar8 = (uint)uVar1;
      uVar4 = uVar4 + iVar9;
      uVar5 = uVar5 + iVar10;
      if (uVar8 == 0) break;
      iVar14 = iVar14 + -1;
      *puVar6 = *(ushort *)(iVar13 + ((uVar8 & 0x7ff) >> 6 | (uVar8 & 0x1f) << 5) * 2) |
                *(short *)(iVar13 + (uint)(uVar1 >> 0xb) * 0x40) << 0xb;
      if (iVar14 < 0) {
        return;
      }
      uVar1 = *(ushort *)(iVar11 + (uVar7 & uVar5 >> 0xd | (uVar4 & uVar7) >> 0x14) * 2);
      puVar6 = puVar6 + 1;
    }
    iVar14 = iVar14 + -1;
    puVar6 = puVar6 + 1;
  } while (-1 < iVar14);
  return;
}



// Address: 4a02128c

void FUN_4a02128c(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  
  uVar4 = DAT_4a0215e8;
  iVar19 = *param_1 + -1;
  puVar5 = (ushort *)param_1[1];
  uVar7 = param_1[2];
  uVar8 = param_1[3];
  iVar11 = param_1[4];
  iVar12 = param_1[5];
  uVar9 = param_1[6];
  iVar13 = param_1[7];
  iVar15 = param_1[8];
  uVar14 = param_1[9];
  iVar16 = *(int *)PTR_LAB_4a0215e4;
  if (*(int *)(PTR_LAB_4a0215e4 + 0x5c) != 0) {
    if ((uVar14 & 0x80000000) != 0) {
      iVar16 = iVar16 + ((uVar14 & 0xf800000) >> 0xc);
      do {
        uVar14 = uVar7 & uVar9;
        bVar1 = *(byte *)(iVar13 + (uVar9 & uVar8 >> 0xc | uVar14 >> 0x15));
        uVar7 = uVar7 + iVar11;
        if ((bool)((byte)(uVar14 >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
        uVar14 = (uint)*(ushort *)(iVar15 + (bVar1 & 0xf) * 2);
        iVar19 = iVar19 + -1;
        uVar8 = uVar8 + iVar12;
        *puVar5 = *(ushort *)(iVar16 + ((uVar14 & 0xf00) >> 2 | (uVar14 & 0xf0) >> 3) * 2) |
                  *(short *)(iVar16 + (uVar14 & 0xf) * 0x80) << 0xb;
        puVar5 = puVar5 + 1;
      } while (-1 < iVar19);
      return;
    }
    iVar3 = param_1[10];
    do {
      bVar1 = *(byte *)(iVar13 + (uVar9 & uVar8 >> 0xc | (uVar7 & uVar9) >> 0x15));
      if ((bool)((byte)((uVar7 & uVar9) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      iVar18 = iVar16 + ((uVar14 & 0xf800000) >> 0xc);
      uVar4 = (uint)*(ushort *)(iVar15 + (bVar1 & 0xf) * 2);
      iVar19 = iVar19 + -1;
      uVar7 = uVar7 + iVar11;
      uVar8 = uVar8 + iVar12;
      uVar14 = uVar14 + iVar3;
      *puVar5 = *(ushort *)(iVar18 + ((uVar4 & 0xf00) >> 2 | (uVar4 & 0xf0) >> 3) * 2) |
                *(short *)(iVar18 + (uVar4 & 0xf) * 0x80) << 0xb;
      puVar5 = puVar5 + 1;
    } while (-1 < iVar19);
    return;
  }
  if ((uVar14 & 0x80000000) == 0) {
    iVar3 = param_1[10];
    do {
      bVar1 = *(byte *)(iVar13 + (uVar9 & uVar8 >> 0xc | (uVar7 & uVar9) >> 0x15));
      if ((bool)((byte)((uVar7 & uVar9) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      while( true ) {
        uVar8 = uVar8 + iVar12;
        uVar7 = uVar7 + iVar11;
        if ((bVar1 & 0xf) == 0) break;
        iVar18 = iVar16 + ((uVar14 & 0xf800000) >> 0xc);
        uVar2 = *(ushort *)(iVar15 + (bVar1 & 0xf) * 2);
        uVar10 = (uint)uVar2;
        uVar4 = (uint)(uVar2 >> 0xc);
        uVar10 = (uint)*(ushort *)(iVar18 + ((uVar10 & 0xf00) >> 2 | (uVar10 & 0xf0) >> 3) * 2) |
                 (uint)*(ushort *)(iVar18 + (uVar10 & 0xf) * 0x80) << 0xb;
        if (uVar4 != 0xf) {
          uVar4 = DAT_4a0215e8 &
                  ((uVar10 | uVar10 << 0x10) & DAT_4a0215e8) * uVar4 +
                  (0x10 - uVar4) * (CONCAT22(*puVar5,*puVar5) & DAT_4a0215e8) >> 4;
          uVar10 = (uVar4 | uVar4 << 0x10) >> 0x10;
        }
        puVar6 = puVar5 + 1;
        *puVar5 = (ushort)uVar10;
        iVar19 = iVar19 + -1;
        uVar14 = uVar14 + iVar3;
        if (iVar19 < 0) {
          return;
        }
        bVar1 = *(byte *)(iVar13 + (uVar9 & uVar8 >> 0xc | (uVar7 & uVar9) >> 0x15));
        puVar5 = puVar6;
        if ((bool)((byte)((uVar7 & uVar9) >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
      }
      iVar19 = iVar19 + -1;
      puVar5 = puVar5 + 1;
      uVar14 = uVar14 + iVar3;
      if (iVar19 < 0) {
        return;
      }
    } while( true );
  }
  iVar16 = iVar16 + ((uVar14 & 0xf800000) >> 0xc);
  do {
    bVar1 = *(byte *)(iVar13 + (uVar9 & uVar8 >> 0xc | (uVar7 & uVar9) >> 0x15));
    if ((bool)((byte)((uVar7 & uVar9) >> 0x14) & 1)) {
      bVar1 = bVar1 >> 4;
    }
    while( true ) {
      uVar8 = uVar8 + iVar12;
      uVar7 = uVar7 + iVar11;
      if ((bVar1 & 0xf) == 0) break;
      uVar2 = *(ushort *)(iVar15 + (bVar1 & 0xf) * 2);
      uVar10 = (uint)uVar2;
      uVar14 = (uint)(uVar2 >> 0xc);
      uVar17 = (uint)*(ushort *)(iVar16 + ((uVar10 & 0xf00) >> 2 | (uVar10 & 0xf0) >> 3) * 2);
      uVar10 = uVar17 | (uint)*(ushort *)(iVar16 + (uVar10 & 0xf) * 0x80) << 0xb;
      if (uVar14 != 0xf) {
        uVar14 = uVar4 & ((uVar10 | (uVar17 & 0x7ff) << 0x10) & 0xffe0f81f) * uVar14 +
                         (0x10 - uVar14) * (CONCAT22(*puVar5,*puVar5) & 0x7e0f81f) >> 4;
        uVar10 = (uVar14 | uVar14 << 0x10) >> 0x10;
      }
      iVar19 = iVar19 + -1;
      puVar6 = puVar5 + 1;
      *puVar5 = (ushort)uVar10;
      if (iVar19 < 0) {
        return;
      }
      bVar1 = *(byte *)(iVar13 + (uVar9 & uVar8 >> 0xc | (uVar7 & uVar9) >> 0x15));
      puVar5 = puVar6;
      if ((bool)((byte)((uVar7 & uVar9) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
    }
    iVar19 = iVar19 + -1;
    puVar5 = puVar5 + 1;
    if (iVar19 < 0) {
      return;
    }
  } while( true );
}



// Address: 4a0215ec

void FUN_4a0215ec(int *param_1)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  
  uVar4 = DAT_4a02190c;
  iVar16 = *param_1 + -1;
  puVar5 = (ushort *)param_1[1];
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  iVar9 = param_1[4];
  iVar10 = param_1[5];
  iVar13 = *(int *)PTR_LAB_4a021908;
  uVar8 = param_1[6];
  iVar11 = param_1[7];
  uVar12 = param_1[9];
  if (*(int *)(PTR_LAB_4a021908 + 0x5c) != 0) {
    if ((uVar12 & 0x80000000) != 0) {
      iVar13 = iVar13 + ((uVar12 & 0xf800000) >> 0xc);
      do {
        uVar12 = (uint)*(ushort *)(iVar11 + (uVar8 & uVar7 >> 0xd | (uVar6 & uVar8) >> 0x14) * 2);
        iVar16 = iVar16 + -1;
        uVar7 = uVar7 + iVar10;
        uVar6 = uVar6 + iVar9;
        *puVar5 = *(ushort *)(iVar13 + ((uVar12 & 0xf00) >> 2 | (uVar12 & 0xf0) >> 3) * 2) |
                  *(short *)(iVar13 + (uVar12 & 0xf) * 0x80) << 0xb;
        puVar5 = puVar5 + 1;
      } while (-1 < iVar16);
      return;
    }
    iVar3 = param_1[10];
    do {
      uVar4 = (uint)*(ushort *)(iVar11 + (uVar8 & uVar7 >> 0xd | (uVar6 & uVar8) >> 0x14) * 2);
      iVar15 = iVar13 + ((uVar12 & 0xf800000) >> 0xc);
      iVar16 = iVar16 + -1;
      uVar7 = uVar7 + iVar10;
      uVar6 = uVar6 + iVar9;
      uVar12 = uVar12 + iVar3;
      *puVar5 = *(ushort *)(iVar15 + ((uVar4 & 0xf00) >> 2 | (uVar4 & 0xf0) >> 3) * 2) |
                *(short *)(iVar15 + (uVar4 & 0xf) * 0x80) << 0xb;
      puVar5 = puVar5 + 1;
    } while (-1 < iVar16);
    return;
  }
  if ((uVar12 & 0x80000000) != 0) {
    iVar13 = iVar13 + ((uVar12 & 0xf800000) >> 0xc);
    do {
      uVar2 = *(ushort *)(iVar11 + (uVar8 & uVar7 >> 0xd | (uVar6 & uVar8) >> 0x14) * 2);
      while( true ) {
        uVar12 = (uint)uVar2;
        uVar6 = uVar6 + iVar9;
        uVar7 = uVar7 + iVar10;
        if (uVar12 == 0) break;
        uVar1 = (uint)(uVar2 >> 0xc);
        uVar14 = (uint)*(ushort *)(iVar13 + ((uVar12 & 0xf00) >> 2 | (uVar12 & 0xf0) >> 3) * 2);
        uVar12 = uVar14 | (uint)*(ushort *)(iVar13 + (uVar12 & 0xf) * 0x80) << 0xb;
        if (uVar1 != 0xf) {
          uVar12 = uVar4 & ((uVar12 | (uVar14 & 0x7ff) << 0x10) & 0xffe0f81f) * uVar1 +
                           (0x10 - uVar1) * (CONCAT22(*puVar5,*puVar5) & 0x7e0f81f) >> 4;
          uVar12 = (uVar12 | uVar12 << 0x10) >> 0x10;
        }
        iVar16 = iVar16 + -1;
        *puVar5 = (ushort)uVar12;
        if (iVar16 < 0) {
          return;
        }
        uVar2 = *(ushort *)(iVar11 + (uVar8 & uVar7 >> 0xd | (uVar6 & uVar8) >> 0x14) * 2);
        puVar5 = puVar5 + 1;
      }
      iVar16 = iVar16 + -1;
      puVar5 = puVar5 + 1;
      if (iVar16 < 0) {
        return;
      }
    } while( true );
  }
  iVar3 = param_1[10];
  do {
    uVar2 = *(ushort *)(iVar11 + (uVar8 & uVar7 >> 0xd | (uVar6 & uVar8) >> 0x14) * 2);
    while( true ) {
      uVar4 = (uint)uVar2;
      uVar6 = uVar6 + iVar9;
      uVar7 = uVar7 + iVar10;
      if (uVar4 == 0) break;
      iVar15 = iVar13 + ((uVar12 & 0xf800000) >> 0xc);
      uVar1 = (uint)(uVar2 >> 0xc);
      uVar4 = (uint)*(ushort *)(iVar15 + ((uVar4 & 0xf00) >> 2 | (uVar4 & 0xf0) >> 3) * 2) |
              (uint)*(ushort *)(iVar15 + (uVar4 & 0xf) * 0x80) << 0xb;
      if (uVar1 != 0xf) {
        uVar4 = DAT_4a02190c &
                ((uVar4 | uVar4 << 0x10) & DAT_4a02190c) * uVar1 +
                (0x10 - uVar1) * (CONCAT22(*puVar5,*puVar5) & DAT_4a02190c) >> 4;
        uVar4 = (uVar4 | uVar4 << 0x10) >> 0x10;
      }
      *puVar5 = (ushort)uVar4;
      iVar16 = iVar16 + -1;
      uVar12 = uVar12 + iVar3;
      if (iVar16 < 0) {
        return;
      }
      uVar2 = *(ushort *)(iVar11 + (uVar8 & uVar7 >> 0xd | (uVar6 & uVar8) >> 0x14) * 2);
      puVar5 = puVar5 + 1;
    }
    iVar16 = iVar16 + -1;
    puVar5 = puVar5 + 1;
    uVar12 = uVar12 + iVar3;
    if (iVar16 < 0) {
      return;
    }
  } while( true );
}



// Address: 4a021910

void FUN_4a021910(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  
  uVar3 = DAT_4a021c28;
  iVar15 = *param_1 + -1;
  puVar4 = (ushort *)param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  iVar8 = param_1[4];
  iVar9 = param_1[5];
  iVar12 = *(int *)PTR_LAB_4a021c24;
  uVar7 = param_1[6];
  iVar10 = param_1[7];
  uVar11 = param_1[9];
  if (*(int *)(PTR_LAB_4a021c24 + 0x5c) != 0) {
    if ((uVar11 & 0x80000000) != 0) {
      iVar12 = iVar12 + ((uVar11 & 0xf800000) >> 0xc);
      do {
        uVar11 = *(uint *)(iVar10 + (uVar7 & uVar6 >> 0xe | (uVar5 & uVar7) >> 0x14) * 4);
        iVar15 = iVar15 + -1;
        uVar6 = uVar6 + iVar9;
        uVar5 = uVar5 + iVar8;
        *puVar4 = *(ushort *)(iVar12 + ((uVar11 & 0xffff) >> 0xb | (uVar11 & 0xf8) << 2) * 2) |
                  *(short *)(iVar12 + (uVar11 >> 0xe & 0x3e0) * 2) << 0xb;
        puVar4 = puVar4 + 1;
      } while (-1 < iVar15);
      return;
    }
    iVar2 = param_1[10];
    do {
      uVar3 = *(uint *)(iVar10 + (uVar7 & uVar6 >> 0xe | (uVar5 & uVar7) >> 0x14) * 4);
      iVar14 = iVar12 + ((uVar11 & 0xf800000) >> 0xc);
      iVar15 = iVar15 + -1;
      uVar6 = uVar6 + iVar9;
      uVar5 = uVar5 + iVar8;
      uVar11 = uVar11 + iVar2;
      *puVar4 = *(ushort *)(iVar14 + ((uVar3 & 0xffff) >> 0xb | (uVar3 & 0xf8) << 2) * 2) |
                *(short *)(iVar14 + (uVar3 >> 0xe & 0x3e0) * 2) << 0xb;
      puVar4 = puVar4 + 1;
    } while (-1 < iVar15);
    return;
  }
  if ((uVar11 & 0x80000000) != 0) {
    iVar12 = iVar12 + ((uVar11 & 0xf800000) >> 0xc);
    do {
      uVar11 = *(uint *)(iVar10 + (uVar7 & uVar6 >> 0xe | (uVar5 & uVar7) >> 0x14) * 4);
      while( true ) {
        uVar5 = uVar5 + iVar8;
        uVar6 = uVar6 + iVar9;
        if (uVar11 == 0) break;
        uVar1 = uVar11 >> 0x1b;
        uVar13 = (uint)*(ushort *)(iVar12 + ((uVar11 & 0xffff) >> 0xb | (uVar11 & 0xf8) << 2) * 2);
        uVar11 = uVar13 | (uint)*(ushort *)(iVar12 + (uVar11 >> 0xe & 0x3e0) * 2) << 0xb;
        if (uVar1 != 0x1f) {
          uVar11 = uVar3 & ((uVar11 | (uVar13 & 0x7ff) << 0x10) & 0xffe0f81f) * uVar1 +
                           (0x20 - uVar1) * (CONCAT22(*puVar4,*puVar4) & 0x7e0f81f) >> 5;
          uVar11 = (uVar11 | uVar11 << 0x10) >> 0x10;
        }
        iVar15 = iVar15 + -1;
        *puVar4 = (ushort)uVar11;
        if (iVar15 < 0) {
          return;
        }
        uVar11 = *(uint *)(iVar10 + (uVar7 & uVar6 >> 0xe | (uVar5 & uVar7) >> 0x14) * 4);
        puVar4 = puVar4 + 1;
      }
      iVar15 = iVar15 + -1;
      puVar4 = puVar4 + 1;
      if (iVar15 < 0) {
        return;
      }
    } while( true );
  }
  iVar2 = param_1[10];
  do {
    uVar3 = *(uint *)(iVar10 + (uVar7 & uVar6 >> 0xe | (uVar5 & uVar7) >> 0x14) * 4);
    while( true ) {
      uVar5 = uVar5 + iVar8;
      uVar6 = uVar6 + iVar9;
      if (uVar3 == 0) break;
      iVar14 = iVar12 + ((uVar11 & 0xf800000) >> 0xc);
      uVar1 = uVar3 >> 0x1b;
      uVar3 = (uint)*(ushort *)(iVar14 + ((uVar3 & 0xffff) >> 0xb | (uVar3 & 0xf8) << 2) * 2) |
              (uint)*(ushort *)(iVar14 + (uVar3 >> 0xe & 0x3e0) * 2) << 0xb;
      if (uVar1 != 0x1f) {
        uVar3 = DAT_4a021c28 &
                ((uVar3 | uVar3 << 0x10) & DAT_4a021c28) * uVar1 +
                (0x20 - uVar1) * (CONCAT22(*puVar4,*puVar4) & DAT_4a021c28) >> 5;
        uVar3 = (uVar3 | uVar3 << 0x10) >> 0x10;
      }
      *puVar4 = (ushort)uVar3;
      iVar15 = iVar15 + -1;
      uVar11 = uVar11 + iVar2;
      if (iVar15 < 0) {
        return;
      }
      uVar3 = *(uint *)(iVar10 + (uVar7 & uVar6 >> 0xe | (uVar5 & uVar7) >> 0x14) * 4);
      puVar4 = puVar4 + 1;
    }
    iVar15 = iVar15 + -1;
    puVar4 = puVar4 + 1;
    uVar11 = uVar11 + iVar2;
    if (iVar15 < 0) {
      return;
    }
  } while( true );
}



// Address: 4a021c30

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a021c30(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  ushort *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  
  uVar10 = param_1[9];
  iVar17 = *param_1 + -1;
  iVar7 = *(int *)PTR_LAB_4a021fe0;
  iVar15 = iVar7 + (((uVar10 & 0xf800) >> 6) + 0x8000) * 2;
  iVar16 = iVar7 + (uVar10 & 0x7c0) * 0x20;
  iVar7 = iVar7 + (uVar10 & 0x1f) * 0x800;
  puVar5 = (ushort *)param_1[1];
  uVar8 = param_1[2];
  uVar9 = param_1[3];
  iVar12 = param_1[4];
  iVar13 = param_1[5];
  uVar10 = uVar10 >> 0x1b;
  uVar11 = param_1[6];
  iVar14 = param_1[7];
  iVar2 = param_1[8];
  if (*(int *)(PTR_LAB_4a021fe0 + 0x5c) != 0) {
    if (uVar10 == 0) {
      return;
    }
    if (uVar10 == 0x1f) {
      do {
        uVar10 = uVar8 & uVar11;
        bVar1 = *(byte *)(iVar14 + (uVar11 & uVar9 >> 0xc | uVar10 >> 0x15));
        uVar8 = uVar8 + iVar12;
        if ((bool)((byte)(uVar10 >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
        uVar3 = (uint)*(ushort *)(iVar2 + (bVar1 & 0xf) * 2);
        iVar17 = iVar17 + -1;
        uVar9 = uVar9 + iVar13;
        uVar10 = (uVar3 & 0xffff7fff) >> 5;
        *puVar5 = *(ushort *)(iVar7 + uVar10 * 2) & 0x1f | *(ushort *)(iVar16 + uVar10 * 2) & 0xffe0
                  | *(ushort *)(iVar15 + (uVar3 & 0x1f) * 2);
        puVar5 = puVar5 + 1;
      } while (-1 < iVar17);
      return;
    }
    do {
      uVar3 = uVar8 & uVar11;
      bVar1 = *(byte *)(iVar14 + (uVar11 & uVar9 >> 0xc | uVar3 >> 0x15));
      uVar8 = uVar8 + iVar12;
      if ((bool)((byte)(uVar3 >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      uVar4 = (uint)*(ushort *)(iVar2 + (bVar1 & 0xf) * 2);
      iVar17 = iVar17 + -1;
      uVar9 = uVar9 + iVar13;
      uVar3 = (uVar4 & 0xffff7fff) >> 5;
      uVar3 = *(ushort *)(iVar16 + uVar3 * 2) & 0xffffffe0 | *(ushort *)(iVar7 + uVar3 * 2) & 0x1f |
              (uint)*(ushort *)(iVar15 + (uVar4 & 0x1f) * 2);
      uVar3 = DAT_4a021fe4 &
              (0x20 - uVar10) * (CONCAT22(*puVar5,*puVar5) & 0x7e0f81f) +
              ((uVar3 | uVar3 << 0x10) & 0x7e0f81f) * uVar10 >> 5;
      *puVar5 = (ushort)(uVar3 >> 0x10) | (ushort)uVar3;
      puVar5 = puVar5 + 1;
    } while (-1 < iVar17);
    return;
  }
  if (uVar10 == 0x1f) {
    do {
      bVar1 = *(byte *)(iVar14 + (uVar11 & uVar9 >> 0xc | (uVar8 & uVar11) >> 0x15));
      if ((bool)((byte)((uVar8 & uVar11) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      while( true ) {
        uVar9 = uVar9 + iVar13;
        uVar8 = uVar8 + iVar12;
        if ((bVar1 & 0xf) == 0) break;
        uVar3 = (uint)*(ushort *)(iVar2 + (bVar1 & 0xf) * 2);
        iVar17 = iVar17 + -1;
        uVar10 = (uVar3 & 0xffff7fff) >> 5;
        puVar6 = puVar5 + 1;
        *puVar5 = *(ushort *)(iVar7 + uVar10 * 2) & 0x1f | *(ushort *)(iVar16 + uVar10 * 2) & 0xffe0
                  | *(ushort *)(iVar15 + (uVar3 & 0x1f) * 2);
        if (iVar17 < 0) {
          return;
        }
        bVar1 = *(byte *)(iVar14 + (uVar11 & uVar9 >> 0xc | (uVar8 & uVar11) >> 0x15));
        puVar5 = puVar6;
        if ((bool)((byte)((uVar8 & uVar11) >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
      }
      iVar17 = iVar17 + -1;
      puVar5 = puVar5 + 1;
      if (iVar17 < 0) {
        return;
      }
    } while( true );
  }
  if (uVar10 != 0) {
    do {
      bVar1 = *(byte *)(iVar14 + (uVar11 & uVar9 >> 0xc | (uVar8 & uVar11) >> 0x15));
      if ((bool)((byte)((uVar8 & uVar11) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      while( true ) {
        uVar9 = uVar9 + iVar13;
        uVar8 = uVar8 + iVar12;
        if ((bVar1 & 0xf) == 0) break;
        uVar4 = (uint)*(ushort *)(iVar2 + (bVar1 & 0xf) * 2);
        iVar17 = iVar17 + -1;
        uVar3 = (uVar4 & 0xffff7fff) >> 5;
        uVar3 = *(ushort *)(iVar7 + uVar3 * 2) & 0x1f | *(ushort *)(iVar16 + uVar3 * 2) & 0xffffffe0
                | (uint)*(ushort *)(iVar15 + (uVar4 & 0x1f) * 2);
        uVar3 = DAT_4a021fe4 &
                (0x20 - uVar10) * (CONCAT22(*puVar5,*puVar5) & 0x7e0f81f) +
                ((uVar3 | (uVar3 & 0x7ff) << 0x10) & 0xffe0f81f) * uVar10 >> 5;
        puVar6 = puVar5 + 1;
        *puVar5 = (ushort)(uVar3 >> 0x10) | (ushort)uVar3;
        if (iVar17 < 0) {
          return;
        }
        bVar1 = *(byte *)(iVar14 + (uVar11 & uVar9 >> 0xc | (uVar8 & uVar11) >> 0x15));
        puVar5 = puVar6;
        if ((bool)((byte)((uVar8 & uVar11) >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
      }
      iVar17 = iVar17 + -1;
      puVar5 = puVar5 + 1;
      if (iVar17 < 0) {
        return;
      }
    } while( true );
  }
  return;
}



// Address: 4a021fe8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a021fe8(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  uVar9 = param_1[9];
  iVar16 = *param_1 + -1;
  iVar6 = *(int *)PTR_LAB_4a022378;
  iVar14 = iVar6 + (((uVar9 & 0xf800) >> 6) + 0x8000) * 2;
  iVar15 = iVar6 + (uVar9 & 0x7c0) * 0x20;
  iVar6 = iVar6 + (uVar9 & 0x1f) * 0x800;
  puVar5 = (ushort *)param_1[1];
  uVar7 = param_1[2];
  uVar8 = param_1[3];
  iVar11 = param_1[4];
  iVar12 = param_1[5];
  uVar9 = uVar9 >> 0x1b;
  uVar10 = param_1[6];
  iVar13 = param_1[7];
  iVar2 = param_1[8];
  if (*(int *)(PTR_LAB_4a022378 + 0x5c) != 0) {
    if (uVar9 == 0) {
      return;
    }
    if (uVar9 == 0x1f) {
      do {
        iVar16 = iVar16 + -1;
        uVar3 = (uint)*(ushort *)
                       (iVar2 + (uint)*(byte *)(iVar13 + (uVar10 & uVar8 >> 0xc |
                                                         (uVar7 & uVar10) >> 0x14)) * 2);
        uVar8 = uVar8 + iVar12;
        uVar7 = uVar7 + iVar11;
        uVar9 = (uVar3 & 0xffff7fff) >> 5;
        *puVar5 = *(ushort *)(iVar6 + uVar9 * 2) & 0x1f | *(ushort *)(iVar15 + uVar9 * 2) & 0xffe0 |
                  *(ushort *)(iVar14 + (uVar3 & 0x1f) * 2);
        puVar5 = puVar5 + 1;
      } while (-1 < iVar16);
      return;
    }
    do {
      iVar16 = iVar16 + -1;
      uVar4 = (uint)*(ushort *)
                     (iVar2 + (uint)*(byte *)(iVar13 + (uVar10 & uVar8 >> 0xc |
                                                       (uVar7 & uVar10) >> 0x14)) * 2);
      uVar8 = uVar8 + iVar12;
      uVar7 = uVar7 + iVar11;
      uVar3 = (uVar4 & 0xffff7fff) >> 5;
      uVar3 = *(ushort *)(iVar15 + uVar3 * 2) & 0xffffffe0 | *(ushort *)(iVar6 + uVar3 * 2) & 0x1f |
              (uint)*(ushort *)(iVar14 + (uVar4 & 0x1f) * 2);
      uVar3 = DAT_4a02237c &
              (0x20 - uVar9) * (CONCAT22(*puVar5,*puVar5) & 0x7e0f81f) +
              ((uVar3 | uVar3 << 0x10) & 0x7e0f81f) * uVar9 >> 5;
      *puVar5 = (ushort)(uVar3 >> 0x10) | (ushort)uVar3;
      puVar5 = puVar5 + 1;
    } while (-1 < iVar16);
    return;
  }
  if (uVar9 == 0x1f) {
    do {
      bVar1 = *(byte *)(iVar13 + (uVar10 & uVar8 >> 0xc | (uVar7 & uVar10) >> 0x14));
      while( true ) {
        uVar7 = uVar7 + iVar11;
        uVar8 = uVar8 + iVar12;
        if (bVar1 == 0) break;
        iVar16 = iVar16 + -1;
        uVar3 = (uint)*(ushort *)(iVar2 + (uint)bVar1 * 2);
        uVar9 = (uVar3 & 0xffff7fff) >> 5;
        *puVar5 = *(ushort *)(iVar6 + uVar9 * 2) & 0x1f | *(ushort *)(iVar15 + uVar9 * 2) & 0xffe0 |
                  *(ushort *)(iVar14 + (uVar3 & 0x1f) * 2);
        if (iVar16 < 0) {
          return;
        }
        bVar1 = *(byte *)(iVar13 + (uVar10 & uVar8 >> 0xc | (uVar7 & uVar10) >> 0x14));
        puVar5 = puVar5 + 1;
      }
      iVar16 = iVar16 + -1;
      puVar5 = puVar5 + 1;
    } while (-1 < iVar16);
    return;
  }
  if (uVar9 == 0) {
    return;
  }
  do {
    bVar1 = *(byte *)(iVar13 + (uVar10 & uVar8 >> 0xc | (uVar7 & uVar10) >> 0x14));
    while( true ) {
      uVar7 = uVar7 + iVar11;
      uVar8 = uVar8 + iVar12;
      if (bVar1 == 0) break;
      iVar16 = iVar16 + -1;
      uVar4 = (uint)*(ushort *)(iVar2 + (uint)bVar1 * 2);
      uVar3 = (uVar4 & 0xffff7fff) >> 5;
      uVar3 = *(ushort *)(iVar6 + uVar3 * 2) & 0x1f | *(ushort *)(iVar15 + uVar3 * 2) & 0xffffffe0 |
              (uint)*(ushort *)(iVar14 + (uVar4 & 0x1f) * 2);
      uVar3 = DAT_4a02237c &
              (0x20 - uVar9) * (CONCAT22(*puVar5,*puVar5) & 0x7e0f81f) +
              ((uVar3 | (uVar3 & 0x7ff) << 0x10) & 0xffe0f81f) * uVar9 >> 5;
      *puVar5 = (ushort)(uVar3 >> 0x10) | (ushort)uVar3;
      if (iVar16 < 0) {
        return;
      }
      bVar1 = *(byte *)(iVar13 + (uVar10 & uVar8 >> 0xc | (uVar7 & uVar10) >> 0x14));
      puVar5 = puVar5 + 1;
    }
    iVar16 = iVar16 + -1;
    puVar5 = puVar5 + 1;
  } while (-1 < iVar16);
  return;
}



// Address: 4a022380

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a022380(int *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  uVar8 = param_1[9];
  iVar15 = *param_1 + -1;
  iVar5 = *(int *)PTR_LAB_4a0226f0;
  iVar13 = iVar5 + (((uVar8 & 0xf800) >> 6) + 0x8000) * 2;
  iVar14 = iVar5 + (uVar8 & 0x7c0) * 0x20;
  iVar5 = iVar5 + (uVar8 & 0x1f) * 0x800;
  puVar4 = (ushort *)param_1[1];
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  iVar10 = param_1[4];
  iVar11 = param_1[5];
  uVar8 = uVar8 >> 0x1b;
  uVar9 = param_1[6];
  iVar12 = param_1[7];
  if (*(int *)(PTR_LAB_4a0226f0 + 0x5c) != 0) {
    if (uVar8 == 0) {
      return;
    }
    if (uVar8 == 0x1f) {
      do {
        uVar2 = (uint)*(ushort *)(iVar12 + (uVar9 & uVar7 >> 0xd | (uVar6 & uVar9) >> 0x14) * 2);
        iVar15 = iVar15 + -1;
        uVar7 = uVar7 + iVar11;
        uVar8 = (uVar2 & 0xffff7fff) >> 5;
        uVar6 = uVar6 + iVar10;
        *puVar4 = *(ushort *)(iVar5 + uVar8 * 2) & 0x1f | *(ushort *)(iVar14 + uVar8 * 2) & 0xffe0 |
                  *(ushort *)(iVar13 + (uVar2 & 0x1f) * 2);
        puVar4 = puVar4 + 1;
      } while (-1 < iVar15);
      return;
    }
    do {
      uVar3 = (uint)*(ushort *)(iVar12 + (uVar9 & uVar7 >> 0xd | (uVar6 & uVar9) >> 0x14) * 2);
      iVar15 = iVar15 + -1;
      uVar7 = uVar7 + iVar11;
      uVar2 = (uVar3 & 0xffff7fff) >> 5;
      uVar6 = uVar6 + iVar10;
      uVar2 = *(ushort *)(iVar14 + uVar2 * 2) & 0xffffffe0 | *(ushort *)(iVar5 + uVar2 * 2) & 0x1f |
              (uint)*(ushort *)(iVar13 + (uVar3 & 0x1f) * 2);
      uVar2 = DAT_4a0226f4 &
              (0x20 - uVar8) * (CONCAT22(*puVar4,*puVar4) & 0x7e0f81f) +
              ((uVar2 | uVar2 << 0x10) & 0x7e0f81f) * uVar8 >> 5;
      *puVar4 = (ushort)(uVar2 >> 0x10) | (ushort)uVar2;
      puVar4 = puVar4 + 1;
    } while (-1 < iVar15);
    return;
  }
  if (uVar8 == 0x1f) {
    do {
      uVar1 = *(ushort *)(iVar12 + (uVar9 & uVar7 >> 0xd | (uVar6 & uVar9) >> 0x14) * 2);
      while( true ) {
        uVar8 = (uint)uVar1;
        uVar6 = uVar6 + iVar10;
        uVar7 = uVar7 + iVar11;
        if (uVar8 == 0) break;
        uVar2 = (uVar8 & 0xffff7fff) >> 5;
        iVar15 = iVar15 + -1;
        *puVar4 = *(ushort *)(iVar5 + uVar2 * 2) & 0x1f | *(ushort *)(iVar14 + uVar2 * 2) & 0xffe0 |
                  *(ushort *)(iVar13 + (uVar8 & 0x1f) * 2);
        if (iVar15 < 0) {
          return;
        }
        uVar1 = *(ushort *)(iVar12 + (uVar9 & uVar7 >> 0xd | (uVar6 & uVar9) >> 0x14) * 2);
        puVar4 = puVar4 + 1;
      }
      iVar15 = iVar15 + -1;
      puVar4 = puVar4 + 1;
    } while (-1 < iVar15);
    return;
  }
  if (uVar8 == 0) {
    return;
  }
  do {
    uVar1 = *(ushort *)(iVar12 + (uVar9 & uVar7 >> 0xd | (uVar6 & uVar9) >> 0x14) * 2);
    while( true ) {
      uVar2 = (uint)uVar1;
      uVar6 = uVar6 + iVar10;
      uVar7 = uVar7 + iVar11;
      if (uVar2 == 0) break;
      uVar3 = (uVar2 & 0xffff7fff) >> 5;
      iVar15 = iVar15 + -1;
      uVar2 = *(ushort *)(iVar5 + uVar3 * 2) & 0x1f | *(ushort *)(iVar14 + uVar3 * 2) & 0xffffffe0 |
              (uint)*(ushort *)(iVar13 + (uVar2 & 0x1f) * 2);
      uVar2 = DAT_4a0226f4 &
              (0x20 - uVar8) * (CONCAT22(*puVar4,*puVar4) & 0x7e0f81f) +
              ((uVar2 | (uVar2 & 0x7ff) << 0x10) & 0xffe0f81f) * uVar8 >> 5;
      *puVar4 = (ushort)(uVar2 >> 0x10) | (ushort)uVar2;
      if (iVar15 < 0) {
        return;
      }
      uVar1 = *(ushort *)(iVar12 + (uVar9 & uVar7 >> 0xd | (uVar6 & uVar9) >> 0x14) * 2);
      puVar4 = puVar4 + 1;
    }
    iVar15 = iVar15 + -1;
    puVar4 = puVar4 + 1;
  } while (-1 < iVar15);
  return;
}



// Address: 4a0226f8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0226f8(int *param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  uVar7 = param_1[9];
  iVar14 = *param_1 + -1;
  iVar4 = *(int *)PTR_LAB_4a022a88;
  iVar12 = iVar4 + (((uVar7 & 0xf800) >> 6) + 0x8000) * 2;
  iVar13 = iVar4 + (uVar7 & 0x7c0) * 0x20;
  iVar4 = iVar4 + (uVar7 & 0x1f) * 0x800;
  puVar3 = (ushort *)param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  iVar9 = param_1[4];
  iVar10 = param_1[5];
  uVar7 = uVar7 >> 0x1b;
  uVar8 = param_1[6];
  iVar11 = param_1[7];
  if (*(int *)(PTR_LAB_4a022a88 + 0x5c) != 0) {
    if (uVar7 == 0) {
      return;
    }
    if (uVar7 == 0x1f) {
      do {
        uVar1 = *(ushort *)(iVar11 + (uVar8 & uVar6 >> 0xd | (uVar5 & uVar8) >> 0x14) * 2);
        iVar14 = iVar14 + -1;
        uVar6 = uVar6 + iVar10;
        uVar7 = (uVar1 & 0x7ff) >> 6 | (uVar1 & 0x1f) << 5;
        uVar5 = uVar5 + iVar9;
        *puVar3 = *(ushort *)(iVar4 + uVar7 * 2) & 0x1f | *(ushort *)(iVar13 + uVar7 * 2) & 0xffe0 |
                  *(ushort *)(iVar12 + (uint)(uVar1 >> 0xb) * 2);
        puVar3 = puVar3 + 1;
      } while (-1 < iVar14);
      return;
    }
    do {
      uVar1 = *(ushort *)(iVar11 + (uVar8 & uVar6 >> 0xd | (uVar5 & uVar8) >> 0x14) * 2);
      iVar14 = iVar14 + -1;
      uVar6 = uVar6 + iVar10;
      uVar2 = (uVar1 & 0x7ff) >> 6 | (uVar1 & 0x1f) << 5;
      uVar5 = uVar5 + iVar9;
      uVar2 = *(ushort *)(iVar13 + uVar2 * 2) & 0xffffffe0 | *(ushort *)(iVar4 + uVar2 * 2) & 0x1f |
              (uint)*(ushort *)(iVar12 + (uint)(uVar1 >> 0xb) * 2);
      uVar2 = DAT_4a022a8c &
              (0x20 - uVar7) * (CONCAT22(*puVar3,*puVar3) & 0x7e0f81f) +
              ((uVar2 | uVar2 << 0x10) & 0x7e0f81f) * uVar7 >> 5;
      *puVar3 = (ushort)(uVar2 >> 0x10) | (ushort)uVar2;
      puVar3 = puVar3 + 1;
    } while (-1 < iVar14);
    return;
  }
  if (uVar7 == 0x1f) {
    do {
      uVar1 = *(ushort *)(iVar11 + (uVar8 & uVar6 >> 0xd | (uVar5 & uVar8) >> 0x14) * 2);
      while( true ) {
        uVar7 = (uint)uVar1;
        uVar5 = uVar5 + iVar9;
        uVar6 = uVar6 + iVar10;
        if (uVar7 == 0) break;
        uVar7 = (uVar7 & 0x7ff) >> 6 | (uVar7 & 0x1f) << 5;
        iVar14 = iVar14 + -1;
        *puVar3 = *(ushort *)(iVar4 + uVar7 * 2) & 0x1f | *(ushort *)(iVar13 + uVar7 * 2) & 0xffe0 |
                  *(ushort *)(iVar12 + (uint)(uVar1 >> 0xb) * 2);
        if (iVar14 < 0) {
          return;
        }
        uVar1 = *(ushort *)(iVar11 + (uVar8 & uVar6 >> 0xd | (uVar5 & uVar8) >> 0x14) * 2);
        puVar3 = puVar3 + 1;
      }
      iVar14 = iVar14 + -1;
      puVar3 = puVar3 + 1;
    } while (-1 < iVar14);
    return;
  }
  if (uVar7 == 0) {
    return;
  }
  do {
    uVar1 = *(ushort *)(iVar11 + (uVar8 & uVar6 >> 0xd | (uVar5 & uVar8) >> 0x14) * 2);
    while( true ) {
      uVar2 = (uint)uVar1;
      uVar5 = uVar5 + iVar9;
      uVar6 = uVar6 + iVar10;
      if (uVar2 == 0) break;
      uVar2 = (uVar2 & 0x7ff) >> 6 | (uVar2 & 0x1f) << 5;
      iVar14 = iVar14 + -1;
      uVar2 = *(ushort *)(iVar4 + uVar2 * 2) & 0x1f | *(ushort *)(iVar13 + uVar2 * 2) & 0xffffffe0 |
              (uint)*(ushort *)(iVar12 + (uint)(uVar1 >> 0xb) * 2);
      uVar2 = DAT_4a022a8c &
              (0x20 - uVar7) * (CONCAT22(*puVar3,*puVar3) & 0x7e0f81f) +
              ((uVar2 | (uVar2 & 0x7ff) << 0x10) & 0xffe0f81f) * uVar7 >> 5;
      *puVar3 = (ushort)(uVar2 >> 0x10) | (ushort)uVar2;
      if (iVar14 < 0) {
        return;
      }
      uVar1 = *(ushort *)(iVar11 + (uVar8 & uVar6 >> 0xd | (uVar5 & uVar8) >> 0x14) * 2);
      puVar3 = puVar3 + 1;
    }
    iVar14 = iVar14 + -1;
    puVar3 = puVar3 + 1;
  } while (-1 < iVar14);
  return;
}



// Address: 4a022a90

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_4a022a90(int *param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  
  uVar11 = param_1[9];
  iVar18 = *param_1 + -1;
  puVar7 = (undefined2 *)param_1[1];
  uVar1 = (uVar11 & 0x7ff) >> 5;
  uVar2 = (uVar11 & 0xffff) >> 0xb;
  uVar9 = param_1[2];
  uVar10 = param_1[3];
  iVar14 = param_1[4];
  iVar15 = param_1[5];
  uVar17 = uVar11 & 0x1f;
  uVar11 = uVar11 >> 0x1b;
  uVar12 = param_1[6];
  iVar16 = param_1[7];
  iVar5 = param_1[8];
  if (*(int *)(PTR_LAB_4a022f20 + 0x5c) == 0) {
    if (uVar11 != 0x1f) {
      if (uVar11 == 0) {
        return DAT_4a022f24;
      }
      do {
        bVar3 = *(byte *)(iVar16 + (uVar12 & uVar10 >> 0xc | (uVar9 & uVar12) >> 0x15));
        if ((bool)((byte)((uVar9 & uVar12) >> 0x14) & 1)) {
          bVar3 = bVar3 >> 4;
        }
        while( true ) {
          uVar10 = uVar10 + iVar15;
          uVar9 = uVar9 + iVar14;
          if ((bVar3 & 0xf) == 0) break;
          uVar4 = *(ushort *)(iVar5 + (bVar3 & 0xf) * 2);
          uVar6 = (uint)uVar4;
          uVar13 = (uint)(uVar4 >> 0xc);
          uVar6 = (uVar2 * (uVar6 & 0xf) >> 4) << 0xb | (((uVar6 & 0xff) >> 4) * uVar1 >> 4) << 5 |
                  uVar17 * ((uVar6 & 0xfff) >> 8) >> 4;
          if (uVar13 == 0xf) {
            uVar13 = 0x10;
          }
          uVar13 = uVar13 * uVar11 >> 4;
          iVar18 = iVar18 + -1;
          uVar13 = DAT_4a022f24 &
                   ((uVar6 | uVar6 << 0x10) & DAT_4a022f24) * uVar13 +
                   (0x20 - uVar13) * (CONCAT22(*puVar7,*puVar7) & 0x7e0f81f) >> 5;
          uVar13 = uVar13 | uVar13 << 0x10;
          puVar8 = puVar7 + 1;
          *puVar7 = (short)(uVar13 >> 0x10);
          if (iVar18 < 0) {
            return uVar13 >> 0x10;
          }
          bVar3 = *(byte *)(iVar16 + (uVar12 & uVar10 >> 0xc | (uVar9 & uVar12) >> 0x15));
          puVar7 = puVar8;
          if ((bool)((byte)((uVar9 & uVar12) >> 0x14) & 1)) {
            bVar3 = bVar3 >> 4;
          }
        }
        iVar18 = iVar18 + -1;
        puVar7 = puVar7 + 1;
        if (iVar18 < 0) {
          return 0;
        }
      } while( true );
    }
    do {
      bVar3 = *(byte *)(iVar16 + (uVar12 & uVar10 >> 0xc | (uVar9 & uVar12) >> 0x15));
      if ((bool)((byte)((uVar9 & uVar12) >> 0x14) & 1)) {
        bVar3 = bVar3 >> 4;
      }
      while( true ) {
        uVar10 = uVar10 + iVar15;
        uVar9 = uVar9 + iVar14;
        if ((bVar3 & 0xf) == 0) break;
        uVar4 = *(ushort *)(iVar5 + (bVar3 & 0xf) * 2);
        uVar13 = (uint)uVar4;
        uVar11 = (uint)(uVar4 >> 0xc);
        uVar13 = (uVar2 * (uVar13 & 0xf) >> 4) << 0xb | (((uVar13 & 0xff) >> 4) * uVar1 >> 4) << 5 |
                 uVar17 * ((uVar13 & 0xfff) >> 8) >> 4;
        if (uVar11 != 0xf) {
          uVar11 = DAT_4a022f24 &
                   ((uVar13 | uVar13 << 0x10) & 0x7e0f81f) * uVar11 +
                   (CONCAT22(*puVar7,*puVar7) & 0x7e0f81f) * (0x10 - uVar11) >> 4;
          uVar11 = uVar11 | uVar11 << 0x10;
          uVar13 = uVar11 >> 0x10;
        }
        iVar18 = iVar18 + -1;
        puVar8 = puVar7 + 1;
        *puVar7 = (short)uVar13;
        if (iVar18 < 0) {
          return uVar11;
        }
        bVar3 = *(byte *)(iVar16 + (uVar12 & uVar10 >> 0xc | (uVar9 & uVar12) >> 0x15));
        puVar7 = puVar8;
        if ((bool)((byte)((uVar9 & uVar12) >> 0x14) & 1)) {
          bVar3 = bVar3 >> 4;
        }
      }
      iVar18 = iVar18 + -1;
      puVar7 = puVar7 + 1;
      if (iVar18 < 0) {
        return 0;
      }
    } while( true );
  }
  if (uVar11 == 0) {
    return DAT_4a022f24;
  }
  if (uVar11 == 0x1f) {
    do {
      bVar3 = *(byte *)(iVar16 + (uVar12 & uVar10 >> 0xc | (uVar9 & uVar12) >> 0x15));
      if ((bool)((byte)((uVar9 & uVar12) >> 0x14) & 1)) {
        bVar3 = bVar3 >> 4;
      }
      uVar4 = *(ushort *)(iVar5 + (bVar3 & 0xf) * 2);
      uVar13 = (uint)uVar4;
      uVar9 = uVar9 + iVar14;
      uVar10 = uVar10 + iVar15;
      uVar11 = (uint)(uVar4 >> 0xc);
      uVar13 = (uVar2 * (uVar13 & 0xf) >> 4) << 0xb | (uVar1 * ((uVar13 & 0xff) >> 4) >> 4) << 5 |
               uVar17 * ((uVar13 & 0xfff) >> 8) >> 4;
      if (uVar11 != 0xf) {
        uVar11 = DAT_4a022f24 &
                 ((uVar13 | uVar13 << 0x10) & 0x7e0f81f) * uVar11 +
                 (0x10 - uVar11) * (CONCAT22(*puVar7,*puVar7) & 0x7e0f81f) >> 4;
        uVar13 = (uVar11 | uVar11 << 0x10) >> 0x10;
      }
      iVar18 = iVar18 + -1;
      *puVar7 = (short)uVar13;
      puVar7 = puVar7 + 1;
    } while (-1 < iVar18);
    return uVar13;
  }
  do {
    bVar3 = *(byte *)(iVar16 + (uVar12 & uVar10 >> 0xc | (uVar9 & uVar12) >> 0x15));
    if ((bool)((byte)((uVar9 & uVar12) >> 0x14) & 1)) {
      bVar3 = bVar3 >> 4;
    }
    uVar4 = *(ushort *)(iVar5 + (bVar3 & 0xf) * 2);
    uVar6 = (uint)uVar4;
    uVar9 = uVar9 + iVar14;
    uVar10 = uVar10 + iVar15;
    uVar13 = (uint)(uVar4 >> 0xc);
    uVar6 = (uVar2 * (uVar6 & 0xf) >> 4) << 0xb | (uVar1 * ((uVar6 & 0xff) >> 4) >> 4) << 5 |
            uVar17 * ((uVar6 & 0xfff) >> 8) >> 4;
    if (uVar13 == 0xf) {
      uVar13 = 0x10;
    }
    uVar13 = uVar11 * uVar13 >> 4;
    iVar18 = iVar18 + -1;
    uVar13 = DAT_4a022f24 &
             ((uVar6 | uVar6 << 0x10) & DAT_4a022f24) * uVar13 +
             (0x20 - uVar13) * (CONCAT22(*puVar7,*puVar7) & 0x7e0f81f) >> 5;
    uVar13 = uVar13 | uVar13 << 0x10;
    *puVar7 = (short)(uVar13 >> 0x10);
    puVar7 = puVar7 + 1;
  } while (-1 < iVar18);
  return uVar13 >> 0x10;
}



// Address: 4a022f28

/* WARNING: Restarted to delay deadcode elimination for space: stack */

ushort * FUN_4a022f28(int *param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort *puVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  
  uVar9 = param_1[9];
  iVar16 = *param_1 + -1;
  puVar6 = (undefined2 *)param_1[1];
  uVar1 = (uVar9 & 0x7ff) >> 5;
  uVar2 = (uVar9 & 0xffff) >> 0xb;
  uVar7 = param_1[2];
  uVar8 = param_1[3];
  iVar12 = param_1[4];
  iVar13 = param_1[5];
  uVar14 = uVar9 & 0x1f;
  uVar9 = uVar9 >> 0x1b;
  uVar10 = param_1[6];
  iVar15 = param_1[7];
  if (*(int *)(PTR_LAB_4a023374 + 0x5c) == 0) {
    if (uVar9 != 0x1f) {
      if (uVar9 == 0) {
        return DAT_4a023378;
      }
      do {
        uVar3 = *(ushort *)(iVar15 + (uVar10 & uVar8 >> 0xd | (uVar7 & uVar10) >> 0x14) * 2);
        while( true ) {
          uVar5 = (uint)uVar3;
          uVar7 = uVar7 + iVar12;
          uVar8 = uVar8 + iVar13;
          if (uVar5 == 0) break;
          uVar11 = (uint)(uVar3 >> 0xc);
          uVar5 = (uVar2 * (uVar5 & 0xf) >> 4) << 0xb | (((uVar5 & 0xff) >> 4) * uVar1 >> 4) << 5 |
                  uVar14 * ((uVar5 & 0xfff) >> 8) >> 4;
          if (uVar11 == 0xf) {
            uVar11 = 0x10;
          }
          uVar11 = uVar11 * uVar9 >> 4;
          iVar16 = iVar16 + -1;
          uVar5 = (uint)DAT_4a023378 &
                  ((uVar5 | uVar5 << 0x10) & (uint)DAT_4a023378) * uVar11 +
                  (0x20 - uVar11) * (CONCAT22(*puVar6,*puVar6) & 0x7e0f81f) >> 5;
          uVar5 = uVar5 | uVar5 << 0x10;
          *puVar6 = (short)(uVar5 >> 0x10);
          if (iVar16 < 0) {
            return (ushort *)(uVar5 >> 0x10);
          }
          uVar3 = *(ushort *)(iVar15 + (uVar10 & uVar8 >> 0xd | (uVar7 & uVar10) >> 0x14) * 2);
          puVar6 = puVar6 + 1;
        }
        iVar16 = iVar16 + -1;
        puVar6 = puVar6 + 1;
        if (iVar16 < 0) {
          return (ushort *)0x0;
        }
      } while( true );
    }
    do {
      puVar4 = (ushort *)(iVar15 + (uVar10 & uVar8 >> 0xd | (uVar7 & uVar10) >> 0x14) * 2);
      uVar3 = *puVar4;
      while( true ) {
        uVar9 = (uint)uVar3;
        uVar7 = uVar7 + iVar12;
        uVar8 = uVar8 + iVar13;
        if (uVar9 == 0) break;
        puVar4 = (ushort *)(uint)(uVar3 >> 0xc);
        uVar9 = (uVar2 * (uVar9 & 0xf) >> 4) << 0xb | (((uVar9 & 0xff) >> 4) * uVar1 >> 4) << 5 |
                uVar14 * ((uVar9 & 0xfff) >> 8) >> 4;
        if (puVar4 != (ushort *)&DAT_0000000f) {
          uVar9 = (uint)DAT_4a023378 &
                  ((uVar9 | uVar9 << 0x10) & 0x7e0f81f) * (int)puVar4 +
                  (CONCAT22(*puVar6,*puVar6) & 0x7e0f81f) * (0x10 - (int)puVar4) >> 4;
          puVar4 = (ushort *)(uVar9 | uVar9 << 0x10);
          uVar9 = (uint)puVar4 >> 0x10;
        }
        iVar16 = iVar16 + -1;
        *puVar6 = (short)uVar9;
        if (iVar16 < 0) {
          return puVar4;
        }
        puVar4 = (ushort *)(iVar15 + (uVar10 & uVar8 >> 0xd | (uVar7 & uVar10) >> 0x14) * 2);
        uVar3 = *puVar4;
        puVar6 = puVar6 + 1;
      }
      iVar16 = iVar16 + -1;
      puVar6 = puVar6 + 1;
      if (iVar16 < 0) {
        return puVar4;
      }
    } while( true );
  }
  if (uVar9 == 0) {
    return DAT_4a023378;
  }
  if (uVar9 == 0x1f) {
    do {
      uVar3 = *(ushort *)(iVar15 + (uVar10 & uVar8 >> 0xd | (uVar7 & uVar10) >> 0x14) * 2);
      uVar9 = (uint)uVar3;
      uVar8 = uVar8 + iVar13;
      uVar7 = uVar7 + iVar12;
      puVar4 = (ushort *)(uint)(uVar3 >> 0xc);
      uVar9 = (uVar2 * (uVar9 & 0xf) >> 4) << 0xb | (((uVar9 & 0xff) >> 4) * uVar1 >> 4) << 5 |
              uVar14 * ((uVar9 & 0xfff) >> 8) >> 4;
      if (puVar4 != (ushort *)&DAT_0000000f) {
        uVar9 = (uint)DAT_4a023378 &
                ((uVar9 | uVar9 << 0x10) & 0x7e0f81f) * (int)puVar4 +
                (CONCAT22(*puVar6,*puVar6) & 0x7e0f81f) * (0x10 - (int)puVar4) >> 4;
        puVar4 = (ushort *)(uVar9 | uVar9 << 0x10);
        uVar9 = (uint)puVar4 >> 0x10;
      }
      iVar16 = iVar16 + -1;
      *puVar6 = (short)uVar9;
      puVar6 = puVar6 + 1;
    } while (-1 < iVar16);
    return puVar4;
  }
  do {
    uVar3 = *(ushort *)(iVar15 + (uVar10 & uVar8 >> 0xd | (uVar7 & uVar10) >> 0x14) * 2);
    uVar11 = (uint)uVar3;
    uVar8 = uVar8 + iVar13;
    uVar5 = (uint)(uVar3 >> 0xc);
    uVar11 = (uVar2 * (uVar11 & 0xf) >> 4) << 0xb | (uVar1 * ((uVar11 & 0xff) >> 4) >> 4) << 5 |
             uVar14 * ((uVar11 & 0xfff) >> 8) >> 4;
    uVar7 = uVar7 + iVar12;
    if (uVar5 == 0xf) {
      uVar5 = 0x10;
    }
    uVar5 = uVar9 * uVar5 >> 4;
    iVar16 = iVar16 + -1;
    uVar5 = (uint)DAT_4a023378 &
            ((uVar11 | uVar11 << 0x10) & (uint)DAT_4a023378) * uVar5 +
            (0x20 - uVar5) * (CONCAT22(*puVar6,*puVar6) & 0x7e0f81f) >> 5;
    uVar5 = uVar5 | uVar5 << 0x10;
    *puVar6 = (short)(uVar5 >> 0x10);
    puVar6 = puVar6 + 1;
  } while (-1 < iVar16);
  return (ushort *)(uVar5 >> 0x10);
}



// Address: 4a02337c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_4a02337c(int *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  uVar5 = param_1[9];
  iVar15 = *param_1 + -1;
  iVar2 = *(int *)PTR_LAB_4a0237f4;
  iVar13 = iVar2 + (((uVar5 & 0xf800) >> 6) + 0x8000) * 2;
  iVar14 = iVar2 + (uVar5 & 0x7c0) * 0x20;
  puVar1 = (undefined2 *)param_1[1];
  iVar2 = iVar2 + (uVar5 & 0x1f) * 0x800;
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  iVar10 = param_1[4];
  iVar11 = param_1[5];
  uVar5 = uVar5 >> 0x1b;
  uVar6 = param_1[6];
  iVar12 = param_1[7];
  if (*(int *)(PTR_LAB_4a0237f4 + 0x5c) == 0) {
    if (uVar5 != 0x1f) {
      if (uVar5 == 0) {
        return DAT_4a0237f8;
      }
      do {
        uVar7 = uVar6 & uVar4 >> 0xe | (uVar3 & uVar6) >> 0x14;
        uVar8 = *(uint *)(iVar12 + uVar7 * 4);
        while( true ) {
          uVar3 = uVar3 + iVar10;
          uVar4 = uVar4 + iVar11;
          if (uVar8 == 0) break;
          uVar7 = uVar8 >> 0x1b;
          uVar9 = (uVar8 & 0xffff) >> 0xb | (uVar8 & 0xf8) << 2;
          if (uVar7 == 0x1f) {
            uVar7 = 0x20;
          }
          iVar15 = iVar15 + -1;
          uVar8 = *(ushort *)(iVar14 + uVar9 * 2) & 0xffffffe0 |
                  *(ushort *)(iVar2 + uVar9 * 2) & 0x1f |
                  (uint)*(ushort *)(iVar13 + ((uVar8 & 0xffffff) >> 0x13) * 2);
          uVar7 = uVar5 * uVar7 >> 5;
          uVar7 = DAT_4a0237f8 &
                  ((uVar8 | uVar8 << 0x10) & DAT_4a0237f8) * uVar7 +
                  (0x20 - uVar7) * (CONCAT22(*puVar1,*puVar1) & 0x7e0f81f) >> 5;
          uVar7 = uVar7 | uVar7 << 0x10;
          *puVar1 = (short)(uVar7 >> 0x10);
          if (iVar15 < 0) {
            return uVar7 >> 0x10;
          }
          uVar7 = uVar6 & uVar4 >> 0xe | (uVar3 & uVar6) >> 0x14;
          uVar8 = *(uint *)(iVar12 + uVar7 * 4);
          puVar1 = puVar1 + 1;
        }
        iVar15 = iVar15 + -1;
        puVar1 = puVar1 + 1;
        if (iVar15 < 0) {
          return uVar7;
        }
      } while( true );
    }
    do {
      uVar5 = uVar6 & uVar4 >> 0xe | (uVar3 & uVar6) >> 0x14;
      uVar7 = *(uint *)(iVar12 + uVar5 * 4);
      while( true ) {
        uVar3 = uVar3 + iVar10;
        uVar4 = uVar4 + iVar11;
        if (uVar7 == 0) break;
        uVar5 = uVar7 >> 0x1b;
        uVar8 = (uVar7 & 0xffff) >> 0xb | (uVar7 & 0xf8) << 2;
        uVar7 = *(ushort *)(iVar14 + uVar8 * 2) & 0xffffffe0 | *(ushort *)(iVar2 + uVar8 * 2) & 0x1f
                | (uint)*(ushort *)(iVar13 + ((uVar7 & 0xffffff) >> 0x13) * 2);
        if (uVar5 != 0x1f) {
          uVar5 = DAT_4a0237f8 &
                  ((uVar7 | uVar7 << 0x10) & 0x7e0f81f) * uVar5 +
                  (CONCAT22(*puVar1,*puVar1) & 0x7e0f81f) * (0x20 - uVar5) >> 5;
          uVar5 = uVar5 | uVar5 << 0x10;
          uVar7 = uVar5 >> 0x10;
        }
        iVar15 = iVar15 + -1;
        *puVar1 = (short)uVar7;
        if (iVar15 < 0) {
          return uVar5;
        }
        uVar5 = uVar6 & uVar4 >> 0xe | (uVar3 & uVar6) >> 0x14;
        uVar7 = *(uint *)(iVar12 + uVar5 * 4);
        puVar1 = puVar1 + 1;
      }
      iVar15 = iVar15 + -1;
      puVar1 = puVar1 + 1;
      if (iVar15 < 0) {
        return uVar5;
      }
    } while( true );
  }
  if (uVar5 == 0) {
    return DAT_4a0237f8;
  }
  if (uVar5 == 0x1f) {
    do {
      uVar7 = *(uint *)(iVar12 + (uVar6 & uVar4 >> 0xe | (uVar3 & uVar6) >> 0x14) * 4);
      uVar4 = uVar4 + iVar11;
      uVar5 = uVar7 >> 0x1b;
      uVar8 = (uVar7 & 0xffff) >> 0xb | (uVar7 & 0xf8) << 2;
      uVar3 = uVar3 + iVar10;
      uVar7 = *(ushort *)(iVar14 + uVar8 * 2) & 0xffffffe0 | *(ushort *)(iVar2 + uVar8 * 2) & 0x1f |
              (uint)*(ushort *)(iVar13 + ((uVar7 & 0xffffff) >> 0x13) * 2);
      if (uVar5 != 0x1f) {
        uVar5 = DAT_4a0237f8 &
                ((uVar7 | uVar7 << 0x10) & 0x7e0f81f) * uVar5 +
                (0x20 - uVar5) * (CONCAT22(*puVar1,*puVar1) & 0x7e0f81f) >> 5;
        uVar7 = (uVar5 | uVar5 << 0x10) >> 0x10;
      }
      iVar15 = iVar15 + -1;
      *puVar1 = (short)uVar7;
      puVar1 = puVar1 + 1;
    } while (-1 < iVar15);
    return uVar7;
  }
  do {
    uVar8 = *(uint *)(iVar12 + (uVar6 & uVar4 >> 0xe | (uVar3 & uVar6) >> 0x14) * 4);
    uVar7 = uVar8 >> 0x1b;
    uVar9 = (uVar8 & 0xffff) >> 0xb | (uVar8 & 0xf8) << 2;
    uVar8 = *(ushort *)(iVar14 + uVar9 * 2) & 0xffffffe0 | *(ushort *)(iVar2 + uVar9 * 2) & 0x1f |
            (uint)*(ushort *)(iVar13 + ((uVar8 & 0xffffff) >> 0x13) * 2);
    if (uVar7 == 0x1f) {
      uVar7 = 0x20;
    }
    uVar7 = uVar5 * uVar7 >> 5;
    iVar15 = iVar15 + -1;
    uVar7 = DAT_4a0237f8 &
            ((uVar8 | uVar8 << 0x10) & DAT_4a0237f8) * uVar7 +
            (0x20 - uVar7) * (CONCAT22(*puVar1,*puVar1) & 0x7e0f81f) >> 5;
    uVar7 = uVar7 | uVar7 << 0x10;
    uVar4 = uVar4 + iVar11;
    uVar3 = uVar3 + iVar10;
    *puVar1 = (short)(uVar7 >> 0x10);
    puVar1 = puVar1 + 1;
  } while (-1 < iVar15);
  return uVar7 >> 0x10;
}



// Address: 4a0237fc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0237fc(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint unaff_r4;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  uint unaff_r6;
  uint unaff_r7;
  int iVar18;
  ushort unaff_r8;
  ushort uVar19;
  int iVar20;
  int iVar21;
  ushort uVar22;
  uint unaff_r11;
  bool bVar23;
  
  uVar4 = DAT_4a023e20;
  uVar6 = *param_1;
  puVar17 = (uint *)param_1[1];
  iVar21 = uVar6 - 1;
  uVar7 = param_1[9];
  uVar11 = param_1[0xb];
  uVar2 = (uVar7 & 0xfff0ffff) * 0x1000;
  uVar8 = param_1[0xd];
  uVar3 = (uVar11 & 0xfff0ffff) * 0x1000;
  uVar12 = param_1[0xf];
  uVar10 = (uVar8 & 0xfff0ffff) * 0x1000;
  uVar9 = param_1[10];
  uVar5 = (uVar12 & 0xfff0ffff) * 0x1000;
  uVar13 = param_1[0xc];
  puVar1 = param_1 + 0xe;
  uVar14 = *puVar1;
  uVar15 = param_1[0x10];
  bVar23 = (uVar12 & 0xffff) >> 10 == 0x3f;
  if (bVar23) {
    puVar1 = (uint *)(uVar15 * iVar21 + uVar5);
  }
  iVar16 = iVar21 >> 1;
  if (bVar23 && (uint)puVar1 >> 0x16 == 0x3f) {
    if ((uVar9 == 0 && uVar13 == 0) && uVar14 == 0) {
      bVar23 = ((uint)puVar17 & 3) != 0;
      uVar2 = ((uVar11 & 0xffff) >> 5 & 0x7e0) + ((uVar8 & 0xffff) >> 0xb) + (uVar7 & 0xf800);
      if (bVar23) {
        uVar6 = uVar6 - 1;
      }
      uVar3 = uVar2 | uVar2 * 0x10000;
      iVar21 = (int)uVar6 >> 3;
      puVar1 = puVar17;
      if (bVar23) {
        puVar1 = (uint *)((int)puVar17 + 2);
        *(ushort *)puVar17 = (ushort)uVar2;
      }
      uVar10 = (int)uVar6 >> 1 & 3;
      puVar17 = puVar1;
      if (uVar10 == 0) goto LAB_4a0238dc;
      if (uVar10 == 1) goto LAB_4a0238d8;
      if (uVar10 == 2) goto LAB_4a0238d4;
      if (uVar10 == 3) {
        while( true ) {
          puVar17 = puVar1 + 1;
          *puVar1 = uVar3;
LAB_4a0238d4:
          puVar1 = puVar17 + 1;
          *puVar17 = uVar3;
LAB_4a0238d8:
          puVar17 = puVar1 + 1;
          *puVar1 = uVar3;
LAB_4a0238dc:
          bVar23 = iVar21 == 0;
          iVar21 = iVar21 + -1;
          if (bVar23) break;
          puVar1 = puVar17 + 1;
          *puVar17 = uVar3;
        }
      }
      if ((uVar6 & 1) != 0) {
        *(ushort *)puVar17 = (ushort)uVar2;
      }
      return;
    }
    *(ushort *)puVar17 =
         ((ushort)(uVar3 >> 0x11) & 0x7e0) + (ushort)(uVar10 >> 0x17) + ((ushort)uVar7 & 0xf800);
    uVar2 = uVar2 + uVar9;
    iVar18 = uVar3 + uVar13;
    iVar20 = uVar10 + uVar14;
    if (iVar21 < 1) {
      return;
    }
    bVar23 = (uVar6 - 2 & 1) == 0;
    if (bVar23) {
      *(ushort *)((int)puVar17 + 2) =
           ((ushort)(uVar2 >> 0xc) & 0xf800) +
           ((ushort)((uint)iVar18 >> 0x11) & 0x7e0) + (ushort)((uint)iVar20 >> 0x17);
      puVar17 = (uint *)((int)puVar17 + 2);
    }
    uVar3 = (uint)bVar23;
    if (iVar16 == 0) {
      return;
    }
    do {
      *(ushort *)((int)puVar17 + 2) =
           ((ushort)(uVar13 * uVar3 + iVar18 >> 0x11) & 0x7e0) +
           (ushort)(uVar14 * uVar3 + iVar20 >> 0x17) +
           ((ushort)(uVar9 * uVar3 + uVar2 >> 0xc) & 0xf800);
      iVar21 = uVar3 + 1;
      iVar16 = iVar16 + -1;
      uVar3 = uVar3 + 2;
      puVar17 = puVar17 + 1;
      *(ushort *)puVar17 =
           ((ushort)(uVar9 * iVar21 + uVar2 >> 0xc) & 0xf800) +
           ((ushort)(uVar13 * iVar21 + iVar18 >> 0x11) & 0x7e0) +
           (ushort)(uVar14 * iVar21 + iVar20 >> 0x17);
    } while (iVar16 != 0);
    return;
  }
  if (uVar15 != 0) {
    if ((uVar9 == 0 && uVar13 == 0) && uVar14 == 0) {
      uVar2 = (uVar11 & 0xfc00) << 0xb | (uVar8 & 0xffff) >> 0xb | uVar7 & 0xf800;
      uVar19 = ((ushort)((uVar11 & 0xffff) >> 5) & 0x7e0) + (short)((uVar8 & 0xffff) >> 0xb) +
               (short)(uVar7 & 0xf800);
      uVar22 = uVar19;
      if ((uVar12 & 0xffff) >> 10 != 0x3f) {
        uVar3 = (uVar12 & 0xffff) >> 0xb;
        uVar3 = DAT_4a023e20 &
                (CONCAT22((ushort)*puVar17,(ushort)*puVar17) & 0x7e0f81f) * (0x20 - uVar3) +
                uVar2 * uVar3 >> 5;
        uVar22 = (ushort)(uVar3 >> 0x10) | (ushort)uVar3;
      }
      uVar5 = uVar5 + uVar15;
      *(ushort *)puVar17 = uVar22;
      uVar3 = DAT_4a023e20;
      uVar10 = uVar6;
      uVar4 = 0x3f;
      if ((int)uVar6 < 2) {
        uVar15 = unaff_r4;
        uVar2 = unaff_r6;
        uVar10 = unaff_r7;
        uVar4 = unaff_r11;
        uVar19 = unaff_r8;
      }
      iVar21 = 1;
      if ((int)uVar6 < 2) {
        return;
      }
      do {
        puVar17 = (uint *)((int)puVar17 + 2);
        uVar22 = uVar19;
        if (uVar4 != uVar5 >> 0x16) {
          uVar7 = uVar3 & (CONCAT22(*(ushort *)puVar17,*(ushort *)puVar17) & 0x7e0f81f) *
                          (0x20 - (uVar5 >> 0x17)) + uVar2 * (uVar5 >> 0x17) >> 5;
          uVar22 = (ushort)(uVar7 >> 0x10) | (ushort)uVar7;
        }
        iVar21 = iVar21 + 1;
        uVar5 = uVar5 + uVar15;
        *(ushort *)puVar17 = uVar22;
      } while (iVar21 < (int)uVar10);
      return;
    }
    if ((uVar12 & 0xffff) >> 10 == 0x3f) {
      uVar22 = ((ushort)uVar7 & 0xf800) +
               ((ushort)((uVar11 & 0xffff) >> 5) & 0x7e0) + (short)((uVar8 & 0xffff) >> 0xb);
    }
    else {
      uVar4 = (uVar12 & 0xffff) >> 0xb;
      uVar4 = DAT_4a023e20 &
              (0x20 - uVar4) * (CONCAT22((ushort)*puVar17,(ushort)*puVar17) & 0x7e0f81f) +
              uVar4 * ((uVar11 & 0xfc00) << 0xb | (uVar8 & 0xffff) >> 0xb | uVar7 & 0xf800) >> 5;
      uVar22 = (ushort)(uVar4 >> 0x10) | (ushort)uVar4;
    }
    *(ushort *)puVar17 = uVar22;
    iVar21 = 1;
    if ((int)uVar6 < 2) {
      return;
    }
    do {
      uVar5 = uVar5 + uVar15;
      uVar10 = uVar10 + uVar14;
      puVar17 = (uint *)((int)puVar17 + 2);
      uVar3 = uVar3 + uVar13;
      uVar2 = uVar2 + uVar9;
      if (uVar5 >> 0x16 == 0x3f) {
        uVar22 = ((ushort)(uVar3 >> 0x11) & 0x7e0) + (ushort)(uVar10 >> 0x17) +
                 ((ushort)(uVar2 >> 0xc) & 0xf800);
      }
      else {
        uVar4 = DAT_4a023e20 &
                (0x20 - (uVar5 >> 0x17)) *
                (CONCAT22(*(ushort *)puVar17,*(ushort *)puVar17) & 0x7e0f81f) +
                (uVar5 >> 0x17) * (uVar3 >> 1 & 0x7e00000 | uVar10 >> 0x17 | uVar2 >> 0xc & 0xf800)
                >> 5;
        uVar22 = (ushort)(uVar4 >> 0x10) | (ushort)uVar4;
      }
      *(ushort *)puVar17 = uVar22;
      iVar21 = iVar21 + 1;
    } while (iVar21 < (int)uVar6);
    return;
  }
  uVar5 = (uVar12 & 0xffff) >> 0xb;
  if (uVar5 == 0) {
    return;
  }
  iVar18 = 0x20 - uVar5;
  if ((uVar9 != 0 || uVar13 != 0) || uVar14 != 0) {
    uVar4 = DAT_4a023e20 &
            (CONCAT22((ushort)*puVar17,(ushort)*puVar17) & 0x7e0f81f) * iVar18 +
            ((uVar11 & 0xfc00) << 0xb | (uVar8 & 0xffff) >> 0xb | uVar7 & 0xf800) * uVar5 >> 5;
    *(ushort *)puVar17 = (ushort)(uVar4 >> 0x10) | (ushort)uVar4;
    if (iVar21 < 1) {
      return;
    }
    iVar21 = 0;
    iVar16 = uVar6 - 1;
    do {
      puVar17 = (uint *)((int)puVar17 + 2);
      iVar16 = iVar16 + -1;
      uVar4 = DAT_4a023e20 &
              (uVar13 * iVar21 + uVar3 + uVar13 >> 1 & 0x7e00000 |
               uVar14 * iVar21 + uVar10 + uVar14 >> 0x17 |
              uVar9 * iVar21 + uVar2 + uVar9 >> 0xc & 0xf800) * uVar5 +
              iVar18 * (CONCAT22(*(ushort *)puVar17,*(ushort *)puVar17) & 0x7e0f81f) >> 5;
      iVar21 = iVar21 + 1;
      *(ushort *)puVar17 = (ushort)(uVar4 >> 0x10) | (ushort)uVar4;
    } while (iVar16 != 0);
    return;
  }
  iVar20 = ((uVar11 & 0xfc00) << 0xb | (uVar8 & 0xffff) >> 0xb | uVar7 & 0xf800) * uVar5;
  uVar2 = DAT_4a023e20 &
          iVar18 * (CONCAT22((ushort)*puVar17,(ushort)*puVar17) & 0x7e0f81f) + iVar20 >> 5;
  *(ushort *)puVar17 = (ushort)(uVar2 >> 0x10) | (ushort)uVar2;
  puVar1 = (uint *)((int)puVar17 + 2);
  if (iVar21 < 1) {
    return;
  }
  if ((uVar6 - 2 & 1) == 0) {
    uVar2 = uVar4 & iVar18 * (CONCAT22(*(ushort *)puVar1,*(ushort *)puVar1) & 0x7e0f81f) + iVar20 >>
                    5;
    *(ushort *)puVar1 = (ushort)(uVar2 >> 0x10) | (ushort)uVar2;
    puVar17 = puVar1;
  }
  if (iVar16 == 0) {
    return;
  }
  do {
    iVar16 = iVar16 + -1;
    uVar2 = uVar4 & iVar18 * (CONCAT22(*(ushort *)((int)puVar17 + 2),*(ushort *)((int)puVar17 + 2))
                             & 0x7e0f81f) + iVar20 >> 5;
    *(ushort *)((int)puVar17 + 2) = (ushort)(uVar2 >> 0x10) | (ushort)uVar2;
    uVar2 = uVar4 & iVar18 * (CONCAT22((ushort)puVar17[1],(ushort)puVar17[1]) & 0x7e0f81f) + iVar20
                    >> 5;
    puVar17 = puVar17 + 1;
    *(ushort *)puVar17 = (ushort)(uVar2 >> 0x10) | (ushort)uVar2;
  } while (iVar16 != 0);
  return;
}



// Address: 4a023e24

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a023e24(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  bool bVar28;
  
  uVar23 = DAT_4a0247f0;
  iVar27 = *param_1 + -1;
  puVar4 = (ushort *)param_1[1];
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  iVar19 = param_1[4];
  iVar9 = param_1[5];
  iVar18 = *(int *)PTR_LAB_4a0247ec;
  uVar8 = param_1[6];
  iVar10 = param_1[7];
  iVar13 = param_1[8];
  uVar11 = param_1[9];
  uVar14 = param_1[0xb];
  uVar16 = param_1[0xd];
  iVar20 = param_1[0xc];
  iVar24 = param_1[10];
  iVar25 = param_1[0xe];
  uVar21 = param_1[0xf];
  iVar26 = param_1[0x10];
  uVar12 = (uVar11 & 0xfff0ffff) << 0xc;
  uVar15 = (uVar14 & 0xfff0ffff) << 0xc;
  uVar17 = (uVar16 & 0xfff0ffff) << 0xc;
  uVar3 = (uVar21 & 0xfff0ffff) << 0xc;
  if (*(int *)(PTR_LAB_4a0247ec + 0x5c) != 0) {
    bVar28 = (uVar21 & 0xffff) >> 0xb == 0x1f;
    iVar2 = 0x1f;
    if (bVar28) {
      iVar2 = iVar26;
    }
    if (!bVar28 || iVar2 != 0) {
      do {
        uVar11 = uVar6 & uVar8;
        uVar6 = uVar6 + iVar19;
        bVar1 = *(byte *)(iVar10 + (uVar8 & uVar7 >> 0xc | uVar11 >> 0x15));
        uVar7 = uVar7 + iVar9;
        uVar23 = uVar3 >> 0x17;
        if ((bool)((byte)(uVar11 >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
        uVar22 = (uint)*(ushort *)(iVar13 + (bVar1 & 0xf) * 2);
        uVar11 = uVar17 >> 0x17;
        uVar14 = uVar12 >> 0x17;
        uVar16 = uVar15 >> 0x17;
        uVar12 = uVar12 + iVar24;
        uVar15 = uVar15 + iVar20;
        iVar27 = iVar27 + -1;
        uVar17 = uVar17 + iVar25;
        uVar3 = uVar3 + iVar26;
        uVar21 = (uVar22 & 0xffff7fff) >> 5;
        uVar11 = *(ushort *)(iVar18 + uVar16 * 0x800 + uVar21 * 2) & 0xffffffe0 |
                 *(ushort *)(iVar18 + uVar11 * 0x800 + uVar21 * 2) & 0x1f |
                 (uint)*(ushort *)(iVar18 + (uVar14 * 0x20 + 0x8000) * 2 + (uVar22 & 0x1f) * 2);
        uVar23 = DAT_4a0247f0 &
                 (0x20 - uVar23) * (CONCAT22(*puVar4,*puVar4) & 0x7e0f81f) +
                 ((uVar11 | uVar11 << 0x10) & 0x7e0f81f) * uVar23 >> 5;
        *puVar4 = (ushort)(uVar23 >> 0x10) | (ushort)uVar23;
        puVar4 = puVar4 + 1;
      } while (-1 < iVar27);
      return;
    }
    do {
      uVar3 = uVar6 & uVar8;
      uVar6 = uVar6 + iVar19;
      bVar1 = *(byte *)(iVar10 + (uVar8 & uVar7 >> 0xc | uVar3 >> 0x15));
      if ((bool)((byte)(uVar3 >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      uVar7 = uVar7 + iVar9;
      uVar16 = (uint)*(ushort *)(iVar13 + (bVar1 & 0xf) * 2);
      uVar3 = uVar12 >> 0x17;
      uVar23 = uVar17 >> 0x17;
      uVar12 = uVar12 + iVar24;
      uVar11 = uVar15 >> 0x17;
      uVar15 = uVar15 + iVar20;
      uVar17 = uVar17 + iVar25;
      uVar14 = (uVar16 & 0xffff7fff) >> 5;
      iVar27 = iVar27 + -1;
      *puVar4 = *(ushort *)(iVar18 + (uVar3 * 0x20 + 0x8000) * 2 + (uVar16 & 0x1f) * 2) |
                *(ushort *)(iVar18 + uVar11 * 0x800 + uVar14 * 2) & 0xffe0 |
                *(ushort *)(iVar18 + uVar23 * 0x800 + uVar14 * 2) & 0x1f;
      puVar4 = puVar4 + 1;
    } while (-1 < iVar27);
    return;
  }
  if ((uVar21 & 0xffff) >> 0xb == 0x1f) {
    if (iVar26 == 0) {
      do {
        bVar1 = *(byte *)(iVar10 + (uVar8 & uVar7 >> 0xc | (uVar6 & uVar8) >> 0x15));
        if ((bool)((byte)((uVar6 & uVar8) >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
        while( true ) {
          uVar7 = uVar7 + iVar9;
          uVar6 = uVar6 + iVar19;
          if ((bVar1 & 0xf) == 0) break;
          uVar16 = (uint)*(ushort *)(iVar13 + (bVar1 & 0xf) * 2);
          iVar27 = iVar27 + -1;
          uVar3 = uVar12 >> 0x17;
          uVar23 = uVar15 >> 0x17;
          uVar11 = uVar17 >> 0x17;
          uVar12 = uVar12 + iVar24;
          uVar15 = uVar15 + iVar20;
          uVar17 = uVar17 + iVar25;
          uVar14 = (uVar16 & 0xffff7fff) >> 5;
          puVar5 = puVar4 + 1;
          *puVar4 = *(ushort *)(iVar18 + uVar23 * 0x800 + uVar14 * 2) & 0xffe0 |
                    *(ushort *)(iVar18 + uVar11 * 0x800 + uVar14 * 2) & 0x1f |
                    *(ushort *)(iVar18 + (uVar3 * 0x20 + 0x8000) * 2 + (uVar16 & 0x1f) * 2);
          if (iVar27 < 0) {
            return;
          }
          bVar1 = *(byte *)(iVar10 + (uVar8 & uVar7 >> 0xc | (uVar6 & uVar8) >> 0x15));
          puVar4 = puVar5;
          if ((bool)((byte)((uVar6 & uVar8) >> 0x14) & 1)) {
            bVar1 = bVar1 >> 4;
          }
        }
        iVar27 = iVar27 + -1;
        uVar12 = uVar12 + iVar24;
        puVar4 = puVar4 + 1;
        uVar15 = uVar15 + iVar20;
        uVar17 = uVar17 + iVar25;
        if (iVar27 < 0) {
          return;
        }
      } while( true );
    }
  }
  else if (iVar26 == 0) {
    uVar3 = (uVar21 & 0xffff) >> 0xb;
    if (uVar3 == 0) {
      return;
    }
    if ((iVar24 == 0 && iVar20 == 0) && iVar25 == 0) {
      do {
        bVar1 = *(byte *)(iVar10 + (uVar8 & uVar7 >> 0xc | (uVar6 & uVar8) >> 0x15));
        if ((bool)((byte)((uVar6 & uVar8) >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
        while( true ) {
          uVar7 = uVar7 + iVar9;
          uVar6 = uVar6 + iVar19;
          if ((bVar1 & 0xf) == 0) break;
          uVar15 = (uint)*(ushort *)(iVar13 + (bVar1 & 0xf) * 2);
          iVar27 = iVar27 + -1;
          uVar12 = (uVar15 & 0xffff7fff) >> 5;
          uVar12 = *(ushort *)(iVar18 + (uVar16 & 0xf800) + uVar12 * 2) & 0x1f |
                   *(ushort *)(iVar18 + (uVar14 & 0xf800) + uVar12 * 2) & 0xffffffe0 |
                   (uint)*(ushort *)
                          (iVar18 + (((uVar11 & 0xffff) >> 0xb) * 0x20 + 0x8000) * 2 +
                          (uVar15 & 0x1f) * 2);
          uVar12 = uVar23 & (0x20 - uVar3) * (CONCAT22(*puVar4,*puVar4) & 0x7e0f81f) +
                            ((uVar12 | (uVar12 & 0x7ff) << 0x10) & 0xffe0f81f) * uVar3 >> 5;
          puVar5 = puVar4 + 1;
          *puVar4 = (ushort)(uVar12 >> 0x10) | (ushort)uVar12;
          if (iVar27 < 0) {
            return;
          }
          bVar1 = *(byte *)(iVar10 + (uVar8 & uVar7 >> 0xc | (uVar6 & uVar8) >> 0x15));
          puVar4 = puVar5;
          if ((bool)((byte)((uVar6 & uVar8) >> 0x14) & 1)) {
            bVar1 = bVar1 >> 4;
          }
        }
        iVar27 = iVar27 + -1;
        puVar4 = puVar4 + 1;
        if (iVar27 < 0) {
          return;
        }
      } while( true );
    }
    do {
      bVar1 = *(byte *)(iVar10 + (uVar8 & uVar7 >> 0xc | (uVar6 & uVar8) >> 0x15));
      if ((bool)((byte)((uVar6 & uVar8) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      while( true ) {
        uVar7 = uVar7 + iVar9;
        uVar6 = uVar6 + iVar19;
        if ((bVar1 & 0xf) == 0) break;
        uVar21 = (uint)*(ushort *)(iVar13 + (bVar1 & 0xf) * 2);
        iVar27 = iVar27 + -1;
        uVar23 = uVar12 >> 0x17;
        uVar11 = uVar15 >> 0x17;
        uVar14 = uVar17 >> 0x17;
        uVar12 = uVar12 + iVar24;
        uVar15 = uVar15 + iVar20;
        uVar17 = uVar17 + iVar25;
        uVar16 = (uVar21 & 0xffff7fff) >> 5;
        uVar23 = *(ushort *)(iVar18 + uVar11 * 0x800 + uVar16 * 2) & 0xffffffe0 |
                 *(ushort *)(iVar18 + uVar14 * 0x800 + uVar16 * 2) & 0x1f |
                 (uint)*(ushort *)(iVar18 + (uVar23 * 0x20 + 0x8000) * 2 + (uVar21 & 0x1f) * 2);
        uVar23 = DAT_4a0247f0 &
                 (0x20 - uVar3) * (CONCAT22(*puVar4,*puVar4) & DAT_4a0247f0) +
                 ((uVar23 | uVar23 << 0x10) & DAT_4a0247f0) * uVar3 >> 5;
        puVar5 = puVar4 + 1;
        *puVar4 = (ushort)(uVar23 >> 0x10) | (ushort)uVar23;
        if (iVar27 < 0) {
          return;
        }
        bVar1 = *(byte *)(iVar10 + (uVar8 & uVar7 >> 0xc | (uVar6 & uVar8) >> 0x15));
        puVar4 = puVar5;
        if ((bool)((byte)((uVar6 & uVar8) >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
      }
      iVar27 = iVar27 + -1;
      uVar12 = uVar12 + iVar24;
      puVar4 = puVar4 + 1;
      uVar15 = uVar15 + iVar20;
      uVar17 = uVar17 + iVar25;
      if (iVar27 < 0) {
        return;
      }
    } while( true );
  }
  if ((iVar24 != 0 || iVar20 != 0) || iVar25 != 0) {
    do {
      bVar1 = *(byte *)(iVar10 + (uVar8 & uVar7 >> 0xc | (uVar6 & uVar8) >> 0x15));
      if ((bool)((byte)((uVar6 & uVar8) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      while( true ) {
        uVar7 = uVar7 + iVar9;
        uVar6 = uVar6 + iVar19;
        if ((bVar1 & 0xf) == 0) break;
        uVar23 = uVar3 >> 0x17;
        uVar22 = (uint)*(ushort *)(iVar13 + (bVar1 & 0xf) * 2);
        uVar11 = uVar17 >> 0x17;
        uVar14 = uVar12 >> 0x17;
        uVar16 = uVar15 >> 0x17;
        uVar12 = uVar12 + iVar24;
        uVar15 = uVar15 + iVar20;
        uVar17 = uVar17 + iVar25;
        uVar3 = uVar3 + iVar26;
        uVar21 = (uVar22 & 0xffff7fff) >> 5;
        iVar27 = iVar27 + -1;
        uVar11 = *(ushort *)(iVar18 + uVar16 * 0x800 + uVar21 * 2) & 0xffffffe0 |
                 *(ushort *)(iVar18 + uVar11 * 0x800 + uVar21 * 2) & 0x1f |
                 (uint)*(ushort *)(iVar18 + (uVar14 * 0x20 + 0x8000) * 2 + (uVar22 & 0x1f) * 2);
        uVar23 = DAT_4a0247f0 &
                 (0x20 - uVar23) * (CONCAT22(*puVar4,*puVar4) & 0x7e0f81f) +
                 ((uVar11 | uVar11 << 0x10) & 0x7e0f81f) * uVar23 >> 5;
        puVar5 = puVar4 + 1;
        *puVar4 = (ushort)(uVar23 >> 0x10) | (ushort)uVar23;
        if (iVar27 < 0) {
          return;
        }
        bVar1 = *(byte *)(iVar10 + (uVar8 & uVar7 >> 0xc | (uVar6 & uVar8) >> 0x15));
        puVar4 = puVar5;
        if ((bool)((byte)((uVar6 & uVar8) >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
      }
      iVar27 = iVar27 + -1;
      uVar12 = uVar12 + iVar24;
      puVar4 = puVar4 + 1;
      uVar15 = uVar15 + iVar20;
      uVar17 = uVar17 + iVar25;
      uVar3 = uVar3 + iVar26;
      if (iVar27 < 0) {
        return;
      }
    } while( true );
  }
  do {
    bVar1 = *(byte *)(iVar10 + (uVar8 & uVar7 >> 0xc | (uVar6 & uVar8) >> 0x15));
    if ((bool)((byte)((uVar6 & uVar8) >> 0x14) & 1)) {
      bVar1 = bVar1 >> 4;
    }
    while( true ) {
      uVar7 = uVar7 + iVar9;
      uVar6 = uVar6 + iVar19;
      if ((bVar1 & 0xf) == 0) break;
      uVar15 = (uint)*(ushort *)(iVar13 + (bVar1 & 0xf) * 2);
      iVar27 = iVar27 + -1;
      uVar12 = (uVar15 & 0xffff7fff) >> 5;
      uVar12 = *(ushort *)(iVar18 + (uVar14 & 0xf800) + uVar12 * 2) & 0xffffffe0 |
               *(ushort *)(iVar18 + (uVar16 & 0xf800) + uVar12 * 2) & 0x1f |
               (uint)*(ushort *)
                      (iVar18 + (((uVar11 & 0xffff) >> 0xb) * 0x20 + 0x8000) * 2 +
                      (uVar15 & 0x1f) * 2);
      uVar12 = DAT_4a0247f0 &
               (0x20 - (uVar3 >> 0x17)) * (CONCAT22(*puVar4,*puVar4) & DAT_4a0247f0) +
               ((uVar12 | uVar12 << 0x10) & DAT_4a0247f0) * (uVar3 >> 0x17) >> 5;
      uVar3 = uVar3 + iVar26;
      puVar5 = puVar4 + 1;
      *puVar4 = (ushort)(uVar12 >> 0x10) | (ushort)uVar12;
      if (iVar27 < 0) {
        return;
      }
      bVar1 = *(byte *)(iVar10 + (uVar8 & uVar7 >> 0xc | (uVar6 & uVar8) >> 0x15));
      puVar4 = puVar5;
      if ((bool)((byte)((uVar6 & uVar8) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
    }
    iVar27 = iVar27 + -1;
    puVar4 = puVar4 + 1;
    uVar3 = uVar3 + iVar26;
    if (iVar27 < 0) {
      return;
    }
  } while( true );
}



// Address: 4a0247f4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0247f4(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  bool bVar27;
  
  uVar21 = DAT_4a025178;
  iVar26 = *param_1 + -1;
  puVar4 = (ushort *)param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  iVar18 = param_1[4];
  iVar8 = param_1[5];
  iVar17 = *(int *)PTR_LAB_4a025174;
  uVar7 = param_1[6];
  iVar9 = param_1[7];
  iVar12 = param_1[8];
  uVar10 = param_1[9];
  uVar13 = param_1[0xb];
  uVar15 = param_1[0xd];
  iVar19 = param_1[0xc];
  iVar22 = param_1[10];
  iVar23 = param_1[0xe];
  uVar20 = param_1[0xf];
  iVar24 = param_1[0x10];
  uVar11 = (uVar10 & 0xfff0ffff) << 0xc;
  uVar14 = (uVar13 & 0xfff0ffff) << 0xc;
  uVar16 = (uVar15 & 0xfff0ffff) << 0xc;
  uVar3 = (uVar20 & 0xfff0ffff) << 0xc;
  if (*(int *)(PTR_LAB_4a025174 + 0x5c) != 0) {
    bVar27 = (uVar20 & 0xffff) >> 0xb == 0x1f;
    iVar2 = 0x1f;
    if (bVar27) {
      iVar2 = iVar24;
    }
    if (bVar27 && iVar2 == 0) {
      do {
        uVar3 = uVar6 >> 0xc;
        uVar21 = uVar5 & uVar7;
        iVar26 = iVar26 + -1;
        uVar5 = uVar5 + iVar18;
        uVar6 = uVar6 + iVar8;
        uVar15 = (uint)*(ushort *)
                        (iVar12 + (uint)*(byte *)(iVar9 + (uVar7 & uVar3 | uVar21 >> 0x14)) * 2);
        uVar3 = uVar11 >> 0x17;
        uVar21 = uVar16 >> 0x17;
        uVar11 = uVar11 + iVar22;
        uVar10 = uVar14 >> 0x17;
        uVar14 = uVar14 + iVar19;
        uVar16 = uVar16 + iVar23;
        uVar13 = (uVar15 & 0xffff7fff) >> 5;
        *puVar4 = *(ushort *)(iVar17 + (uVar3 * 0x20 + 0x8000) * 2 + (uVar15 & 0x1f) * 2) |
                  *(ushort *)(iVar17 + uVar21 * 0x800 + uVar13 * 2) & 0x1f |
                  *(ushort *)(iVar17 + uVar10 * 0x800 + uVar13 * 2) & 0xffe0;
        puVar4 = puVar4 + 1;
      } while (-1 < iVar26);
      return;
    }
    do {
      uVar21 = uVar6 >> 0xc;
      uVar13 = uVar5 & uVar7;
      uVar5 = uVar5 + iVar18;
      uVar6 = uVar6 + iVar8;
      uVar10 = uVar3 >> 0x17;
      uVar25 = (uint)*(ushort *)
                      (iVar12 + (uint)*(byte *)(iVar9 + (uVar7 & uVar21 | uVar13 >> 0x14)) * 2);
      uVar21 = uVar11 >> 0x17;
      uVar13 = uVar16 >> 0x17;
      uVar15 = uVar14 >> 0x17;
      uVar11 = uVar11 + iVar22;
      uVar14 = uVar14 + iVar19;
      uVar16 = uVar16 + iVar23;
      uVar3 = uVar3 + iVar24;
      uVar20 = (uVar25 & 0xffff7fff) >> 5;
      uVar21 = *(ushort *)(iVar17 + uVar15 * 0x800 + uVar20 * 2) & 0xffffffe0 |
               *(ushort *)(iVar17 + uVar13 * 0x800 + uVar20 * 2) & 0x1f |
               (uint)*(ushort *)(iVar17 + (uVar21 * 0x20 + 0x8000) * 2 + (uVar25 & 0x1f) * 2);
      uVar21 = DAT_4a025178 &
               (0x20 - uVar10) * (CONCAT22(*puVar4,*puVar4) & 0x7e0f81f) +
               ((uVar21 | uVar21 << 0x10) & 0x7e0f81f) * uVar10 >> 5;
      *puVar4 = (ushort)(uVar21 >> 0x10) | (ushort)uVar21;
      iVar26 = iVar26 + -1;
      puVar4 = puVar4 + 1;
    } while (-1 < iVar26);
    return;
  }
  if ((uVar20 & 0xffff) >> 0xb == 0x1f) {
    if (iVar24 == 0) {
      do {
        bVar1 = *(byte *)(iVar9 + (uVar7 & uVar6 >> 0xc | (uVar5 & uVar7) >> 0x14));
        while( true ) {
          uVar6 = uVar6 + iVar8;
          uVar5 = uVar5 + iVar18;
          if (bVar1 == 0) break;
          uVar3 = uVar11 >> 0x17;
          uVar15 = (uint)*(ushort *)(iVar12 + (uint)bVar1 * 2);
          uVar21 = uVar14 >> 0x17;
          uVar10 = uVar16 >> 0x17;
          iVar26 = iVar26 + -1;
          uVar11 = uVar11 + iVar22;
          uVar14 = uVar14 + iVar19;
          uVar16 = uVar16 + iVar23;
          uVar13 = (uVar15 & 0xffff7fff) >> 5;
          *puVar4 = *(ushort *)(iVar17 + (uVar3 * 0x20 + 0x8000) * 2 + (uVar15 & 0x1f) * 2) |
                    *(ushort *)(iVar17 + uVar21 * 0x800 + uVar13 * 2) & 0xffe0 |
                    *(ushort *)(iVar17 + uVar10 * 0x800 + uVar13 * 2) & 0x1f;
          if (iVar26 < 0) {
            return;
          }
          bVar1 = *(byte *)(iVar9 + (uVar7 & uVar6 >> 0xc | (uVar5 & uVar7) >> 0x14));
          puVar4 = puVar4 + 1;
        }
        iVar26 = iVar26 + -1;
        uVar11 = uVar11 + iVar22;
        puVar4 = puVar4 + 1;
        uVar14 = uVar14 + iVar19;
        uVar16 = uVar16 + iVar23;
      } while (-1 < iVar26);
      return;
    }
  }
  else if (iVar24 == 0) {
    uVar3 = (uVar20 & 0xffff) >> 0xb;
    if (uVar3 == 0) {
      return;
    }
    if ((iVar22 != 0 || iVar19 != 0) || iVar23 != 0) {
      do {
        bVar1 = *(byte *)(iVar9 + (uVar7 & uVar6 >> 0xc | (uVar5 & uVar7) >> 0x14));
        while( true ) {
          uVar6 = uVar6 + iVar8;
          uVar5 = uVar5 + iVar18;
          if (bVar1 == 0) break;
          uVar21 = uVar11 >> 0x17;
          uVar10 = uVar14 >> 0x17;
          uVar20 = (uint)*(ushort *)(iVar12 + (uint)bVar1 * 2);
          uVar13 = uVar16 >> 0x17;
          uVar11 = uVar11 + iVar22;
          iVar26 = iVar26 + -1;
          uVar14 = uVar14 + iVar19;
          uVar16 = uVar16 + iVar23;
          uVar15 = (uVar20 & 0xffff7fff) >> 5;
          uVar21 = *(ushort *)(iVar17 + uVar10 * 0x800 + uVar15 * 2) & 0xffffffe0 |
                   *(ushort *)(iVar17 + uVar13 * 0x800 + uVar15 * 2) & 0x1f |
                   (uint)*(ushort *)(iVar17 + (uVar21 * 0x20 + 0x8000) * 2 + (uVar20 & 0x1f) * 2);
          uVar21 = DAT_4a025178 &
                   (0x20 - uVar3) * (CONCAT22(*puVar4,*puVar4) & DAT_4a025178) +
                   ((uVar21 | uVar21 << 0x10) & DAT_4a025178) * uVar3 >> 5;
          *puVar4 = (ushort)(uVar21 >> 0x10) | (ushort)uVar21;
          if (iVar26 < 0) {
            return;
          }
          bVar1 = *(byte *)(iVar9 + (uVar7 & uVar6 >> 0xc | (uVar5 & uVar7) >> 0x14));
          puVar4 = puVar4 + 1;
        }
        iVar26 = iVar26 + -1;
        uVar11 = uVar11 + iVar22;
        puVar4 = puVar4 + 1;
        uVar14 = uVar14 + iVar19;
        uVar16 = uVar16 + iVar23;
      } while (-1 < iVar26);
      return;
    }
    do {
      bVar1 = *(byte *)(iVar9 + (uVar7 & uVar6 >> 0xc | (uVar5 & uVar7) >> 0x14));
      while( true ) {
        uVar6 = uVar6 + iVar8;
        uVar5 = uVar5 + iVar18;
        if (bVar1 == 0) break;
        iVar26 = iVar26 + -1;
        uVar14 = (uint)*(ushort *)(iVar12 + (uint)bVar1 * 2);
        uVar11 = (uVar14 & 0xffff7fff) >> 5;
        uVar11 = *(ushort *)(iVar17 + (uVar15 & 0xf800) + uVar11 * 2) & 0x1f |
                 *(ushort *)(iVar17 + (uVar13 & 0xf800) + uVar11 * 2) & 0xffffffe0 |
                 (uint)*(ushort *)
                        (iVar17 + (((uVar10 & 0xffff) >> 0xb) * 0x20 + 0x8000) * 2 +
                        (uVar14 & 0x1f) * 2);
        uVar11 = uVar21 & (0x20 - uVar3) * (CONCAT22(*puVar4,*puVar4) & 0x7e0f81f) +
                          ((uVar11 | (uVar11 & 0x7ff) << 0x10) & 0xffe0f81f) * uVar3 >> 5;
        *puVar4 = (ushort)(uVar11 >> 0x10) | (ushort)uVar11;
        if (iVar26 < 0) {
          return;
        }
        bVar1 = *(byte *)(iVar9 + (uVar7 & uVar6 >> 0xc | (uVar5 & uVar7) >> 0x14));
        puVar4 = puVar4 + 1;
      }
      iVar26 = iVar26 + -1;
      puVar4 = puVar4 + 1;
    } while (-1 < iVar26);
    return;
  }
  if ((iVar22 != 0 || iVar19 != 0) || iVar23 != 0) {
    do {
      bVar1 = *(byte *)(iVar9 + (uVar7 & uVar6 >> 0xc | (uVar5 & uVar7) >> 0x14));
      while( true ) {
        uVar6 = uVar6 + iVar8;
        uVar5 = uVar5 + iVar18;
        if (bVar1 == 0) break;
        uVar21 = uVar3 >> 0x17;
        uVar25 = (uint)*(ushort *)(iVar12 + (uint)bVar1 * 2);
        uVar10 = uVar11 >> 0x17;
        uVar13 = uVar16 >> 0x17;
        uVar15 = uVar14 >> 0x17;
        uVar11 = uVar11 + iVar22;
        iVar26 = iVar26 + -1;
        uVar14 = uVar14 + iVar19;
        uVar16 = uVar16 + iVar23;
        uVar3 = uVar3 + iVar24;
        uVar20 = (uVar25 & 0xffff7fff) >> 5;
        uVar10 = *(ushort *)(iVar17 + uVar15 * 0x800 + uVar20 * 2) & 0xffffffe0 |
                 *(ushort *)(iVar17 + uVar13 * 0x800 + uVar20 * 2) & 0x1f |
                 (uint)*(ushort *)(iVar17 + (uVar10 * 0x20 + 0x8000) * 2 + (uVar25 & 0x1f) * 2);
        uVar21 = DAT_4a025178 &
                 (0x20 - uVar21) * (CONCAT22(*puVar4,*puVar4) & 0x7e0f81f) +
                 ((uVar10 | uVar10 << 0x10) & 0x7e0f81f) * uVar21 >> 5;
        *puVar4 = (ushort)(uVar21 >> 0x10) | (ushort)uVar21;
        if (iVar26 < 0) {
          return;
        }
        bVar1 = *(byte *)(iVar9 + (uVar7 & uVar6 >> 0xc | (uVar5 & uVar7) >> 0x14));
        puVar4 = puVar4 + 1;
      }
      iVar26 = iVar26 + -1;
      uVar11 = uVar11 + iVar22;
      puVar4 = puVar4 + 1;
      uVar14 = uVar14 + iVar19;
      uVar16 = uVar16 + iVar23;
      uVar3 = uVar3 + iVar24;
    } while (-1 < iVar26);
    return;
  }
  do {
    bVar1 = *(byte *)(iVar9 + (uVar7 & uVar6 >> 0xc | (uVar5 & uVar7) >> 0x14));
    while( true ) {
      uVar6 = uVar6 + iVar8;
      uVar5 = uVar5 + iVar18;
      if (bVar1 == 0) break;
      uVar14 = (uint)*(ushort *)(iVar12 + (uint)bVar1 * 2);
      iVar26 = iVar26 + -1;
      uVar11 = (uVar14 & 0xffff7fff) >> 5;
      uVar11 = *(ushort *)(iVar17 + (uVar13 & 0xf800) + uVar11 * 2) & 0xffffffe0 |
               *(ushort *)(iVar17 + (uVar15 & 0xf800) + uVar11 * 2) & 0x1f |
               (uint)*(ushort *)
                      (iVar17 + (((uVar10 & 0xffff) >> 0xb) * 0x20 + 0x8000) * 2 +
                      (uVar14 & 0x1f) * 2);
      uVar11 = DAT_4a025178 &
               (0x20 - (uVar3 >> 0x17)) * (CONCAT22(*puVar4,*puVar4) & DAT_4a025178) +
               ((uVar11 | uVar11 << 0x10) & DAT_4a025178) * (uVar3 >> 0x17) >> 5;
      uVar3 = uVar3 + iVar24;
      *puVar4 = (ushort)(uVar11 >> 0x10) | (ushort)uVar11;
      if (iVar26 < 0) {
        return;
      }
      bVar1 = *(byte *)(iVar9 + (uVar7 & uVar6 >> 0xc | (uVar5 & uVar7) >> 0x14));
      puVar4 = puVar4 + 1;
    }
    iVar26 = iVar26 + -1;
    puVar4 = puVar4 + 1;
    uVar3 = uVar3 + iVar24;
  } while (-1 < iVar26);
  return;
}



// Address: 4a02517c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a02517c(int *param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  bool bVar26;
  
  uVar20 = DAT_4a025ad4;
  iVar25 = *param_1 + -1;
  puVar4 = (ushort *)param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  iVar17 = param_1[4];
  iVar8 = param_1[5];
  iVar16 = *(int *)PTR_LAB_4a025ad0;
  uVar7 = param_1[6];
  iVar9 = param_1[7];
  uVar10 = param_1[9];
  uVar12 = param_1[0xb];
  uVar14 = param_1[0xd];
  iVar18 = param_1[0xc];
  iVar22 = param_1[10];
  iVar23 = param_1[0xe];
  uVar19 = param_1[0xf];
  iVar24 = param_1[0x10];
  uVar11 = (uVar10 & 0xfff0ffff) << 0xc;
  uVar13 = (uVar12 & 0xfff0ffff) << 0xc;
  uVar15 = (uVar14 & 0xfff0ffff) << 0xc;
  uVar3 = (uVar19 & 0xfff0ffff) << 0xc;
  if (*(int *)(PTR_LAB_4a025ad0 + 0x5c) != 0) {
    bVar26 = (uVar19 & 0xffff) >> 0xb == 0x1f;
    iVar2 = 0x1f;
    if (bVar26) {
      iVar2 = iVar24;
    }
    if (bVar26 && iVar2 == 0) {
      do {
        iVar25 = iVar25 + -1;
        uVar14 = (uint)*(ushort *)(iVar9 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
        uVar5 = uVar5 + iVar17;
        uVar6 = uVar6 + iVar8;
        uVar3 = uVar11 >> 0x17;
        uVar20 = uVar13 >> 0x17;
        uVar10 = uVar15 >> 0x17;
        uVar11 = uVar11 + iVar22;
        uVar13 = uVar13 + iVar18;
        uVar15 = uVar15 + iVar23;
        uVar12 = (uVar14 & 0xffff7fff) >> 5;
        *puVar4 = *(ushort *)(iVar16 + uVar20 * 0x800 + uVar12 * 2) & 0xffe0 |
                  *(ushort *)(iVar16 + uVar10 * 0x800 + uVar12 * 2) & 0x1f |
                  *(ushort *)(iVar16 + (uVar3 * 0x20 + 0x8000) * 2 + (uVar14 & 0x1f) * 2);
        puVar4 = puVar4 + 1;
      } while (-1 < iVar25);
      return;
    }
    do {
      iVar25 = iVar25 + -1;
      uVar21 = (uint)*(ushort *)(iVar9 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
      uVar6 = uVar6 + iVar8;
      uVar20 = uVar3 >> 0x17;
      uVar10 = uVar11 >> 0x17;
      uVar12 = uVar13 >> 0x17;
      uVar14 = uVar15 >> 0x17;
      uVar11 = uVar11 + iVar22;
      uVar13 = uVar13 + iVar18;
      uVar15 = uVar15 + iVar23;
      uVar5 = uVar5 + iVar17;
      uVar3 = uVar3 + iVar24;
      uVar19 = (uVar21 & 0xffff7fff) >> 5;
      uVar10 = *(ushort *)(iVar16 + uVar12 * 0x800 + uVar19 * 2) & 0xffffffe0 |
               *(ushort *)(iVar16 + uVar14 * 0x800 + uVar19 * 2) & 0x1f |
               (uint)*(ushort *)(iVar16 + (uVar10 * 0x20 + 0x8000) * 2 + (uVar21 & 0x1f) * 2);
      uVar20 = DAT_4a025ad4 &
               (0x20 - uVar20) * (CONCAT22(*puVar4,*puVar4) & 0x7e0f81f) +
               ((uVar10 | uVar10 << 0x10) & 0x7e0f81f) * uVar20 >> 5;
      *puVar4 = (ushort)(uVar20 >> 0x10) | (ushort)uVar20;
      puVar4 = puVar4 + 1;
    } while (-1 < iVar25);
    return;
  }
  if ((uVar19 & 0xffff) >> 0xb == 0x1f) {
    if (iVar24 == 0) {
      do {
        uVar1 = *(ushort *)(iVar9 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
        while( true ) {
          uVar3 = (uint)uVar1;
          uVar6 = uVar6 + iVar8;
          uVar5 = uVar5 + iVar17;
          if (uVar3 == 0) break;
          uVar20 = uVar11 >> 0x17;
          uVar10 = uVar13 >> 0x17;
          uVar12 = uVar15 >> 0x17;
          uVar11 = uVar11 + iVar22;
          iVar25 = iVar25 + -1;
          uVar13 = uVar13 + iVar18;
          uVar15 = uVar15 + iVar23;
          uVar14 = (uVar3 & 0xffff7fff) >> 5;
          *puVar4 = *(ushort *)(iVar16 + uVar10 * 0x800 + uVar14 * 2) & 0xffe0 |
                    *(ushort *)(iVar16 + uVar12 * 0x800 + uVar14 * 2) & 0x1f |
                    *(ushort *)(iVar16 + (uVar20 * 0x20 + 0x8000) * 2 + (uVar3 & 0x1f) * 2);
          if (iVar25 < 0) {
            return;
          }
          uVar1 = *(ushort *)(iVar9 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
          puVar4 = puVar4 + 1;
        }
        iVar25 = iVar25 + -1;
        uVar11 = uVar11 + iVar22;
        puVar4 = puVar4 + 1;
        uVar13 = uVar13 + iVar18;
        uVar15 = uVar15 + iVar23;
      } while (-1 < iVar25);
      return;
    }
  }
  else if (iVar24 == 0) {
    uVar3 = (uVar19 & 0xffff) >> 0xb;
    if (uVar3 == 0) {
      return;
    }
    if (iVar23 != 0 || (iVar18 != 0 || iVar22 != 0)) {
      do {
        uVar1 = *(ushort *)(iVar9 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
        while( true ) {
          uVar6 = uVar6 + iVar8;
          uVar20 = (uint)uVar1;
          uVar5 = uVar5 + iVar17;
          if (uVar20 == 0) break;
          uVar10 = uVar11 >> 0x17;
          uVar12 = uVar13 >> 0x17;
          uVar14 = uVar15 >> 0x17;
          uVar11 = uVar11 + iVar22;
          uVar13 = uVar13 + iVar18;
          uVar15 = uVar15 + iVar23;
          iVar25 = iVar25 + -1;
          uVar19 = (uVar20 & 0xffff7fff) >> 5;
          uVar20 = *(ushort *)(iVar16 + uVar12 * 0x800 + uVar19 * 2) & 0xffffffe0 |
                   *(ushort *)(iVar16 + uVar14 * 0x800 + uVar19 * 2) & 0x1f |
                   (uint)*(ushort *)(iVar16 + (uVar10 * 0x20 + 0x8000) * 2 + (uVar20 & 0x1f) * 2);
          uVar20 = DAT_4a025ad4 &
                   (0x20 - uVar3) * (CONCAT22(*puVar4,*puVar4) & DAT_4a025ad4) +
                   ((uVar20 | uVar20 << 0x10) & DAT_4a025ad4) * uVar3 >> 5;
          *puVar4 = (ushort)(uVar20 >> 0x10) | (ushort)uVar20;
          if (iVar25 < 0) {
            return;
          }
          uVar1 = *(ushort *)(iVar9 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
          puVar4 = puVar4 + 1;
        }
        iVar25 = iVar25 + -1;
        uVar11 = uVar11 + iVar22;
        puVar4 = puVar4 + 1;
        uVar13 = uVar13 + iVar18;
        uVar15 = uVar15 + iVar23;
      } while (-1 < iVar25);
      return;
    }
    do {
      uVar1 = *(ushort *)(iVar9 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
      while( true ) {
        uVar6 = uVar6 + iVar8;
        uVar11 = (uint)uVar1;
        uVar5 = uVar5 + iVar17;
        if (uVar11 == 0) break;
        uVar13 = (uVar11 & 0xffff7fff) >> 5;
        uVar11 = *(ushort *)(iVar16 + (uVar14 & 0xf800) + uVar13 * 2) & 0x1f |
                 *(ushort *)(iVar16 + (uVar12 & 0xf800) + uVar13 * 2) & 0xffffffe0 |
                 (uint)*(ushort *)
                        (iVar16 + (((uVar10 & 0xffff) >> 0xb) * 0x20 + 0x8000) * 2 +
                        (uVar11 & 0x1f) * 2);
        iVar25 = iVar25 + -1;
        uVar11 = uVar20 & (0x20 - uVar3) * (CONCAT22(*puVar4,*puVar4) & 0x7e0f81f) +
                          ((uVar11 | (uVar11 & 0x7ff) << 0x10) & 0xffe0f81f) * uVar3 >> 5;
        *puVar4 = (ushort)(uVar11 >> 0x10) | (ushort)uVar11;
        if (iVar25 < 0) {
          return;
        }
        uVar1 = *(ushort *)(iVar9 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
        puVar4 = puVar4 + 1;
      }
      iVar25 = iVar25 + -1;
      puVar4 = puVar4 + 1;
    } while (-1 < iVar25);
    return;
  }
  if ((iVar22 != 0 || iVar18 != 0) || iVar23 != 0) {
    do {
      uVar1 = *(ushort *)(iVar9 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
      while( true ) {
        uVar20 = (uint)uVar1;
        uVar6 = uVar6 + iVar8;
        uVar5 = uVar5 + iVar17;
        if (uVar20 == 0) break;
        uVar10 = uVar3 >> 0x17;
        uVar12 = uVar11 >> 0x17;
        uVar14 = uVar13 >> 0x17;
        uVar11 = uVar11 + iVar22;
        uVar19 = uVar15 >> 0x17;
        uVar13 = uVar13 + iVar18;
        uVar15 = uVar15 + iVar23;
        uVar3 = uVar3 + iVar24;
        uVar21 = (uVar20 & 0xffff7fff) >> 5;
        iVar25 = iVar25 + -1;
        uVar20 = *(ushort *)(iVar16 + uVar14 * 0x800 + uVar21 * 2) & 0xffffffe0 |
                 *(ushort *)(iVar16 + uVar19 * 0x800 + uVar21 * 2) & 0x1f |
                 (uint)*(ushort *)(iVar16 + (uVar12 * 0x20 + 0x8000) * 2 + (uVar20 & 0x1f) * 2);
        uVar20 = DAT_4a025ad4 &
                 (0x20 - uVar10) * (CONCAT22(*puVar4,*puVar4) & 0x7e0f81f) +
                 ((uVar20 | uVar20 << 0x10) & 0x7e0f81f) * uVar10 >> 5;
        *puVar4 = (ushort)(uVar20 >> 0x10) | (ushort)uVar20;
        if (iVar25 < 0) {
          return;
        }
        uVar1 = *(ushort *)(iVar9 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
        puVar4 = puVar4 + 1;
      }
      iVar25 = iVar25 + -1;
      uVar11 = uVar11 + iVar22;
      puVar4 = puVar4 + 1;
      uVar13 = uVar13 + iVar18;
      uVar15 = uVar15 + iVar23;
      uVar3 = uVar3 + iVar24;
    } while (-1 < iVar25);
    return;
  }
  do {
    uVar1 = *(ushort *)(iVar9 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
    while( true ) {
      uVar11 = (uint)uVar1;
      uVar6 = uVar6 + iVar8;
      uVar5 = uVar5 + iVar17;
      if (uVar11 == 0) break;
      uVar13 = (uVar11 & 0xffff7fff) >> 5;
      uVar11 = *(ushort *)(iVar16 + (uVar12 & 0xf800) + uVar13 * 2) & 0xffffffe0 |
               *(ushort *)(iVar16 + (uVar14 & 0xf800) + uVar13 * 2) & 0x1f |
               (uint)*(ushort *)
                      (iVar16 + (((uVar10 & 0xffff) >> 0xb) * 0x20 + 0x8000) * 2 +
                      (uVar11 & 0x1f) * 2);
      iVar25 = iVar25 + -1;
      uVar11 = DAT_4a025ad4 &
               (0x20 - (uVar3 >> 0x17)) * (CONCAT22(*puVar4,*puVar4) & DAT_4a025ad4) +
               ((uVar11 | uVar11 << 0x10) & DAT_4a025ad4) * (uVar3 >> 0x17) >> 5;
      uVar3 = uVar3 + iVar24;
      *puVar4 = (ushort)(uVar11 >> 0x10) | (ushort)uVar11;
      if (iVar25 < 0) {
        return;
      }
      uVar1 = *(ushort *)(iVar9 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
      puVar4 = puVar4 + 1;
    }
    iVar25 = iVar25 + -1;
    puVar4 = puVar4 + 1;
    uVar3 = uVar3 + iVar24;
  } while (-1 < iVar25);
  return;
}



// Address: 4a025ad8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a025ad8(int *param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  bool bVar25;
  
  uVar20 = DAT_4a0264a8;
  iVar23 = *param_1 + -1;
  puVar3 = (ushort *)param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  iVar6 = param_1[4];
  iVar8 = param_1[5];
  iVar15 = *(int *)PTR_LAB_4a0264a4;
  uVar7 = param_1[6];
  uVar9 = param_1[9];
  uVar11 = param_1[0xb];
  uVar13 = param_1[0xd];
  iVar17 = param_1[10];
  iVar16 = param_1[7];
  iVar21 = param_1[0xc];
  iVar18 = param_1[0xe];
  uVar22 = param_1[0xf];
  iVar19 = param_1[0x10];
  uVar10 = (uVar9 & 0xfff0ffff) << 0xc;
  uVar12 = (uVar11 & 0xfff0ffff) << 0xc;
  uVar14 = (uVar13 & 0xfff0ffff) << 0xc;
  uVar24 = (uVar22 & 0xfff0ffff) << 0xc;
  if (*(int *)(PTR_LAB_4a0264a4 + 0x5c) != 0) {
    bVar25 = (uVar22 & 0xffff) >> 0xb == 0x1f;
    iVar2 = 0x1f;
    if (bVar25) {
      iVar2 = iVar19;
    }
    if (bVar25 && iVar2 == 0) {
      do {
        uVar1 = *(ushort *)(iVar16 + (uVar7 & uVar5 >> 0xd | (uVar4 & uVar7) >> 0x14) * 2);
        uVar5 = uVar5 + iVar8;
        uVar4 = uVar4 + iVar6;
        uVar24 = uVar10 >> 0x17;
        uVar20 = uVar12 >> 0x17;
        uVar9 = uVar14 >> 0x17;
        iVar23 = iVar23 + -1;
        uVar10 = uVar10 + iVar17;
        uVar12 = uVar12 + iVar21;
        uVar14 = uVar14 + iVar18;
        uVar11 = (uVar1 & 0x7ff) >> 6 | (uVar1 & 0x1f) << 5;
        *puVar3 = *(ushort *)(iVar15 + (uVar24 * 0x20 + 0x8000) * 2 + (uint)(uVar1 >> 0xb) * 2) |
                  *(ushort *)(iVar15 + uVar20 * 0x800 + uVar11 * 2) & 0xffe0 |
                  *(ushort *)(iVar15 + uVar9 * 0x800 + uVar11 * 2) & 0x1f;
        puVar3 = puVar3 + 1;
      } while (-1 < iVar23);
      return;
    }
    do {
      uVar20 = uVar5 >> 0xd;
      uVar5 = uVar5 + iVar8;
      uVar1 = *(ushort *)(iVar16 + (uVar7 & uVar20 | (uVar4 & uVar7) >> 0x14) * 2);
      uVar4 = uVar4 + iVar6;
      uVar20 = uVar24 >> 0x17;
      uVar9 = uVar10 >> 0x17;
      uVar11 = uVar14 >> 0x17;
      uVar13 = uVar12 >> 0x17;
      uVar10 = uVar10 + iVar17;
      uVar12 = uVar12 + iVar21;
      uVar14 = uVar14 + iVar18;
      uVar24 = uVar24 + iVar19;
      uVar22 = (uVar1 & 0x7ff) >> 6 | (uVar1 & 0x1f) << 5;
      uVar9 = *(ushort *)(iVar15 + uVar13 * 0x800 + uVar22 * 2) & 0xffffffe0 |
              *(ushort *)(iVar15 + uVar11 * 0x800 + uVar22 * 2) & 0x1f |
              (uint)*(ushort *)(iVar15 + (uVar9 * 0x20 + 0x8000) * 2 + (uint)(uVar1 >> 0xb) * 2);
      uVar20 = DAT_4a0264a8 &
               (0x20 - uVar20) * (CONCAT22(*puVar3,*puVar3) & 0x7e0f81f) +
               ((uVar9 | uVar9 << 0x10) & 0x7e0f81f) * uVar20 >> 5;
      iVar23 = iVar23 + -1;
      *puVar3 = (ushort)(uVar20 >> 0x10) | (ushort)uVar20;
      puVar3 = puVar3 + 1;
    } while (-1 < iVar23);
    return;
  }
  if ((uVar22 & 0xffff) >> 0xb == 0x1f) {
    if (iVar19 == 0) {
      do {
        uVar1 = *(ushort *)(iVar16 + (uVar7 & uVar5 >> 0xd | (uVar4 & uVar7) >> 0x14) * 2);
        while( true ) {
          uVar24 = (uint)uVar1;
          uVar4 = uVar4 + iVar6;
          uVar5 = uVar5 + iVar8;
          if (uVar24 == 0) break;
          uVar20 = uVar10 >> 0x17;
          uVar9 = uVar12 >> 0x17;
          uVar11 = uVar14 >> 0x17;
          uVar10 = uVar10 + iVar17;
          iVar23 = iVar23 + -1;
          uVar12 = uVar12 + iVar21;
          uVar14 = uVar14 + iVar18;
          uVar24 = (uVar24 & 0x7ff) >> 6 | (uVar24 & 0x1f) << 5;
          *puVar3 = *(ushort *)(iVar15 + (uVar20 * 0x20 + 0x8000) * 2 + (uint)(uVar1 >> 0xb) * 2) |
                    *(ushort *)(iVar15 + uVar9 * 0x800 + uVar24 * 2) & 0xffe0 |
                    *(ushort *)(iVar15 + uVar11 * 0x800 + uVar24 * 2) & 0x1f;
          if (iVar23 < 0) {
            return;
          }
          uVar1 = *(ushort *)(iVar16 + (uVar7 & uVar5 >> 0xd | (uVar4 & uVar7) >> 0x14) * 2);
          puVar3 = puVar3 + 1;
        }
        iVar23 = iVar23 + -1;
        uVar10 = uVar10 + iVar17;
        puVar3 = puVar3 + 1;
        uVar12 = uVar12 + iVar21;
        uVar14 = uVar14 + iVar18;
      } while (-1 < iVar23);
      return;
    }
  }
  else if (iVar19 == 0) {
    uVar24 = (uVar22 & 0xffff) >> 0xb;
    if (uVar24 == 0) {
      return;
    }
    if ((iVar17 != 0 || iVar21 != 0) || iVar18 != 0) {
      do {
        uVar1 = *(ushort *)(iVar16 + (uVar7 & uVar5 >> 0xd | (uVar4 & uVar7) >> 0x14) * 2);
        while( true ) {
          uVar4 = uVar4 + iVar6;
          uVar5 = uVar5 + iVar8;
          uVar20 = (uint)uVar1;
          if (uVar20 == 0) break;
          uVar9 = uVar10 >> 0x17;
          uVar11 = uVar12 >> 0x17;
          uVar13 = uVar14 >> 0x17;
          uVar10 = uVar10 + iVar17;
          iVar23 = iVar23 + -1;
          uVar12 = uVar12 + iVar21;
          uVar14 = uVar14 + iVar18;
          uVar20 = (uVar20 & 0x7ff) >> 6 | (uVar20 & 0x1f) << 5;
          uVar20 = (uint)*(ushort *)
                          (iVar15 + (uVar9 * 0x20 + 0x8000) * 2 + (uint)(uVar1 >> 0xb) * 2) |
                   *(ushort *)(iVar15 + uVar11 * 0x800 + uVar20 * 2) & 0xffffffe0 |
                   *(ushort *)(iVar15 + uVar13 * 0x800 + uVar20 * 2) & 0x1f;
          uVar20 = DAT_4a0264a8 &
                   (0x20 - uVar24) * (CONCAT22(*puVar3,*puVar3) & DAT_4a0264a8) +
                   ((uVar20 | uVar20 << 0x10) & DAT_4a0264a8) * uVar24 >> 5;
          *puVar3 = (ushort)(uVar20 >> 0x10) | (ushort)uVar20;
          if (iVar23 < 0) {
            return;
          }
          uVar1 = *(ushort *)(iVar16 + (uVar7 & uVar5 >> 0xd | (uVar4 & uVar7) >> 0x14) * 2);
          puVar3 = puVar3 + 1;
        }
        iVar23 = iVar23 + -1;
        uVar10 = uVar10 + iVar17;
        puVar3 = puVar3 + 1;
        uVar12 = uVar12 + iVar21;
        uVar14 = uVar14 + iVar18;
      } while (-1 < iVar23);
      return;
    }
    do {
      uVar1 = *(ushort *)(iVar16 + (uVar7 & uVar5 >> 0xd | (uVar4 & uVar7) >> 0x14) * 2);
      while( true ) {
        uVar4 = uVar4 + iVar6;
        uVar5 = uVar5 + iVar8;
        uVar10 = (uint)uVar1;
        if (uVar10 == 0) break;
        uVar10 = (uVar10 & 0x7ff) >> 6 | (uVar10 & 0x1f) << 5;
        uVar10 = *(ushort *)(iVar15 + (uVar13 & 0xf800) + uVar10 * 2) & 0x1f |
                 *(ushort *)(iVar15 + (uVar11 & 0xf800) + uVar10 * 2) & 0xffffffe0 |
                 (uint)*(ushort *)
                        (iVar15 + (((uVar9 & 0xffff) >> 0xb) * 0x20 + 0x8000) * 2 +
                        (uint)(uVar1 >> 0xb) * 2);
        iVar23 = iVar23 + -1;
        uVar10 = uVar20 & (0x20 - uVar24) * (CONCAT22(*puVar3,*puVar3) & 0x7e0f81f) +
                          ((uVar10 | (uVar10 & 0x7ff) << 0x10) & 0xffe0f81f) * uVar24 >> 5;
        *puVar3 = (ushort)(uVar10 >> 0x10) | (ushort)uVar10;
        if (iVar23 < 0) {
          return;
        }
        uVar1 = *(ushort *)(iVar16 + (uVar7 & uVar5 >> 0xd | (uVar4 & uVar7) >> 0x14) * 2);
        puVar3 = puVar3 + 1;
      }
      iVar23 = iVar23 + -1;
      puVar3 = puVar3 + 1;
    } while (-1 < iVar23);
    return;
  }
  if ((iVar17 != 0 || iVar21 != 0) || iVar18 != 0) {
    do {
      uVar1 = *(ushort *)(iVar16 + (uVar7 & uVar5 >> 0xd | (uVar4 & uVar7) >> 0x14) * 2);
      while( true ) {
        uVar20 = (uint)uVar1;
        uVar4 = uVar4 + iVar6;
        uVar5 = uVar5 + iVar8;
        if (uVar20 == 0) break;
        uVar9 = uVar24 >> 0x17;
        uVar11 = uVar10 >> 0x17;
        uVar13 = uVar14 >> 0x17;
        uVar22 = uVar12 >> 0x17;
        iVar23 = iVar23 + -1;
        uVar10 = uVar10 + iVar17;
        uVar12 = uVar12 + iVar21;
        uVar14 = uVar14 + iVar18;
        uVar24 = uVar24 + iVar19;
        uVar20 = (uVar20 & 0x7ff) >> 6 | (uVar20 & 0x1f) << 5;
        uVar20 = *(ushort *)(iVar15 + uVar22 * 0x800 + uVar20 * 2) & 0xffffffe0 |
                 *(ushort *)(iVar15 + uVar13 * 0x800 + uVar20 * 2) & 0x1f |
                 (uint)*(ushort *)(iVar15 + (uVar11 * 0x20 + 0x8000) * 2 + (uint)(uVar1 >> 0xb) * 2)
        ;
        uVar20 = DAT_4a0264a8 &
                 (0x20 - uVar9) * (CONCAT22(*puVar3,*puVar3) & 0x7e0f81f) +
                 ((uVar20 | uVar20 << 0x10) & 0x7e0f81f) * uVar9 >> 5;
        *puVar3 = (ushort)(uVar20 >> 0x10) | (ushort)uVar20;
        if (iVar23 < 0) {
          return;
        }
        uVar1 = *(ushort *)(iVar16 + (uVar7 & uVar5 >> 0xd | (uVar4 & uVar7) >> 0x14) * 2);
        puVar3 = puVar3 + 1;
      }
      iVar23 = iVar23 + -1;
      uVar10 = uVar10 + iVar17;
      puVar3 = puVar3 + 1;
      uVar12 = uVar12 + iVar21;
      uVar14 = uVar14 + iVar18;
      uVar24 = uVar24 + iVar19;
    } while (-1 < iVar23);
    return;
  }
  do {
    uVar1 = *(ushort *)(iVar16 + (uVar7 & uVar5 >> 0xd | (uVar4 & uVar7) >> 0x14) * 2);
    while( true ) {
      uVar10 = (uint)uVar1;
      uVar4 = uVar4 + iVar6;
      uVar5 = uVar5 + iVar8;
      if (uVar10 == 0) break;
      uVar10 = (uVar10 & 0x7ff) >> 6 | (uVar10 & 0x1f) << 5;
      uVar10 = *(ushort *)(iVar15 + (uVar11 & 0xf800) + uVar10 * 2) & 0xffffffe0 |
               *(ushort *)(iVar15 + (uVar13 & 0xf800) + uVar10 * 2) & 0x1f |
               (uint)*(ushort *)
                      (iVar15 + (((uVar9 & 0xffff) >> 0xb) * 0x20 + 0x8000) * 2 +
                      (uint)(uVar1 >> 0xb) * 2);
      iVar23 = iVar23 + -1;
      uVar10 = DAT_4a0264a8 &
               (0x20 - (uVar24 >> 0x17)) * (CONCAT22(*puVar3,*puVar3) & DAT_4a0264a8) +
               ((uVar10 | uVar10 << 0x10) & DAT_4a0264a8) * (uVar24 >> 0x17) >> 5;
      uVar24 = uVar24 + iVar19;
      *puVar3 = (ushort)(uVar10 >> 0x10) | (ushort)uVar10;
      if (iVar23 < 0) {
        return;
      }
      uVar1 = *(ushort *)(iVar16 + (uVar7 & uVar5 >> 0xd | (uVar4 & uVar7) >> 0x14) * 2);
      puVar3 = puVar3 + 1;
    }
    iVar23 = iVar23 + -1;
    puVar3 = puVar3 + 1;
    uVar24 = uVar24 + iVar19;
  } while (-1 < iVar23);
  return;
}



// Address: 4a0264ac

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0264ac(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  bool bVar28;
  uint local_4c;
  
  iVar10 = param_1[5];
  iVar26 = *param_1 + -1;
  puVar5 = (ushort *)param_1[1];
  uVar7 = param_1[2];
  uVar8 = param_1[3];
  iVar19 = param_1[4];
  uVar9 = param_1[6];
  iVar11 = param_1[8];
  iVar14 = param_1[7];
  uVar12 = param_1[9];
  uVar15 = param_1[0xb];
  uVar17 = param_1[0xd];
  iVar23 = param_1[10];
  iVar20 = param_1[0xc];
  iVar24 = param_1[0xe];
  uVar21 = param_1[0xf];
  iVar25 = param_1[0x10];
  uVar13 = (uVar12 & 0xfff0ffff) << 0xc;
  uVar16 = (uVar15 & 0xfff0ffff) << 0xc;
  uVar18 = (uVar17 & 0xfff0ffff) << 0xc;
  uVar4 = (uVar21 & 0xfff0ffff) << 0xc;
  if (*(int *)(PTR_LAB_4a026eec + 0x5c) != 0) {
    bVar28 = (uVar21 & 0xffff) >> 0xb == 0x1f;
    iVar3 = 0x1f;
    if (bVar28) {
      iVar3 = iVar25;
    }
    if (!bVar28 || iVar3 != 0) {
      do {
        uVar15 = uVar7 & uVar9;
        uVar7 = uVar7 + iVar19;
        bVar1 = *(byte *)(iVar14 + (uVar9 & uVar8 >> 0xc | uVar15 >> 0x15));
        uVar8 = uVar8 + iVar10;
        uVar12 = uVar4 >> 0x17;
        if ((bool)((byte)(uVar15 >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
        uVar2 = *(ushort *)(iVar11 + (bVar1 & 0xf) * 2);
        uVar27 = (uint)uVar2;
        local_4c = (uint)(uVar2 >> 0xc);
        uVar15 = uVar18 & 0xfffffff;
        uVar17 = uVar16 & 0xfffffff;
        uVar21 = uVar13 & 0xfffffff;
        uVar13 = uVar13 + iVar23;
        uVar16 = uVar16 + iVar20;
        uVar18 = uVar18 + iVar24;
        uVar4 = uVar4 + iVar25;
        uVar15 = ((uVar21 >> 0x17) * (uVar27 & 0xf) >> 4) << 0xb |
                 ((uVar17 >> 0x16) * ((uVar27 & 0xff) >> 4) >> 4) << 5 |
                 ((uVar27 & 0xfff) >> 8) * (uVar15 >> 0x17) >> 4;
        if (local_4c == 0xf) {
          local_4c = 0x10;
        }
        uVar12 = uVar12 * local_4c >> 4;
        uVar12 = DAT_4a026ef0 &
                 ((uVar15 | uVar15 << 0x10) & DAT_4a026ef0) * uVar12 +
                 (0x20 - uVar12) * (CONCAT22(*puVar5,*puVar5) & 0x7e0f81f) >> 5;
        iVar26 = iVar26 + -1;
        *puVar5 = (ushort)(uVar12 >> 0x10) | (ushort)uVar12;
        puVar5 = puVar5 + 1;
      } while (-1 < iVar26);
      return;
    }
    do {
      bVar1 = *(byte *)(iVar14 + (uVar9 & uVar8 >> 0xc | (uVar7 & uVar9) >> 0x15));
      uVar4 = uVar16 & 0xfffffff;
      uVar8 = uVar8 + iVar10;
      if ((bool)((byte)((uVar7 & uVar9) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      uVar2 = *(ushort *)(iVar11 + (bVar1 & 0xf) * 2);
      uVar17 = (uint)uVar2;
      uVar16 = uVar16 + iVar20;
      uVar15 = uVar18 & 0xfffffff;
      uVar18 = uVar18 + iVar24;
      uVar12 = (uint)(uVar2 >> 0xc);
      uVar7 = uVar7 + iVar19;
      uVar4 = (((uVar13 & 0xfffffff) >> 0x17) * (uVar17 & 0xf) >> 4) << 0xb |
              (((uVar17 & 0xff) >> 4) * (uVar4 >> 0x16) >> 4) << 5 |
              ((uVar17 & 0xfff) >> 8) * (uVar15 >> 0x17) >> 4;
      if (uVar12 != 0xf) {
        uVar4 = DAT_4a026ef0 &
                ((uVar4 | uVar4 << 0x10) & DAT_4a026ef0) * uVar12 +
                (0x10 - uVar12) * (CONCAT22(*puVar5,*puVar5) & DAT_4a026ef0) >> 4;
        uVar4 = (uVar4 | uVar4 << 0x10) >> 0x10;
      }
      iVar26 = iVar26 + -1;
      *puVar5 = (ushort)uVar4;
      puVar5 = puVar5 + 1;
      uVar13 = uVar13 + iVar23;
    } while (-1 < iVar26);
    return;
  }
  if ((uVar21 & 0xffff) >> 0xb == 0x1f) {
    if (iVar25 == 0) {
      do {
        bVar1 = *(byte *)(iVar14 + (uVar9 & uVar8 >> 0xc | (uVar7 & uVar9) >> 0x15));
        if ((bool)((byte)((uVar7 & uVar9) >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
        while( true ) {
          uVar8 = uVar8 + iVar10;
          uVar7 = uVar7 + iVar19;
          if ((bVar1 & 0xf) == 0) break;
          uVar2 = *(ushort *)(iVar11 + (bVar1 & 0xf) * 2);
          uVar21 = (uint)uVar2;
          uVar12 = uVar18 & 0xfffffff;
          uVar15 = uVar16 & 0xfffffff;
          uVar17 = uVar13 + iVar23;
          uVar4 = (uint)(uVar2 >> 0xc);
          uVar16 = uVar16 + iVar20;
          uVar18 = uVar18 + iVar24;
          uVar13 = (((uVar13 & 0xfffffff) >> 0x17) * (uVar21 & 0xf) >> 4) << 0xb |
                   (((uVar21 & 0xff) >> 4) * (uVar15 >> 0x16) >> 4) << 5 |
                   ((uVar21 & 0xfff) >> 8) * (uVar12 >> 0x17) >> 4;
          if (uVar4 != 0xf) {
            uVar13 = DAT_4a026ef0 &
                     ((uVar13 | uVar13 << 0x10) & DAT_4a026ef0) * uVar4 +
                     (CONCAT22(*puVar5,*puVar5) & DAT_4a026ef0) * (0x10 - uVar4) >> 4;
            uVar13 = (uVar13 | uVar13 << 0x10) >> 0x10;
          }
          iVar26 = iVar26 + -1;
          puVar6 = puVar5 + 1;
          *puVar5 = (ushort)uVar13;
          if (iVar26 < 0) {
            return;
          }
          bVar1 = *(byte *)(iVar14 + (uVar9 & uVar8 >> 0xc | (uVar7 & uVar9) >> 0x15));
          puVar5 = puVar6;
          uVar13 = uVar17;
          if ((bool)((byte)((uVar7 & uVar9) >> 0x14) & 1)) {
            bVar1 = bVar1 >> 4;
          }
        }
        iVar26 = iVar26 + -1;
        uVar13 = uVar13 + iVar23;
        puVar5 = puVar5 + 1;
        uVar16 = uVar16 + iVar20;
        uVar18 = uVar18 + iVar24;
        if (iVar26 < 0) {
          return;
        }
      } while( true );
    }
  }
  else if (iVar25 == 0) {
    uVar4 = (uVar21 & 0xffff) >> 0xb;
    if (uVar4 == 0) {
      return;
    }
    if ((iVar23 == 0 && iVar20 == 0) && iVar24 == 0) {
      do {
        bVar1 = *(byte *)(iVar14 + (uVar9 & uVar8 >> 0xc | (uVar7 & uVar9) >> 0x15));
        if ((bool)((byte)((uVar7 & uVar9) >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
        while( true ) {
          uVar8 = uVar8 + iVar10;
          uVar7 = uVar7 + iVar19;
          if ((bVar1 & 0xf) == 0) break;
          uVar2 = *(ushort *)(iVar11 + (bVar1 & 0xf) * 2);
          uVar16 = (uint)uVar2;
          uVar13 = (uint)(uVar2 >> 0xc);
          uVar16 = (((uVar12 & 0xffff) >> 0xb) * (uVar16 & 0xf) >> 4) << 0xb |
                   (((uVar15 & 0xffff) >> 10) * ((uVar16 & 0xff) >> 4) >> 4) << 5 |
                   ((uVar17 & 0xffff) >> 0xb) * ((uVar16 & 0xfff) >> 8) >> 4;
          if (uVar13 == 0xf) {
            uVar13 = 0x10;
          }
          uVar13 = uVar13 * uVar4 >> 4;
          uVar13 = DAT_4a026ef0 &
                   ((uVar16 | uVar16 << 0x10) & DAT_4a026ef0) * uVar13 +
                   (0x20 - uVar13) * (CONCAT22(*puVar5,*puVar5) & 0x7e0f81f) >> 5;
          iVar26 = iVar26 + -1;
          puVar6 = puVar5 + 1;
          *puVar5 = (ushort)(uVar13 >> 0x10) | (ushort)uVar13;
          if (iVar26 < 0) {
            return;
          }
          bVar1 = *(byte *)(iVar14 + (uVar9 & uVar8 >> 0xc | (uVar7 & uVar9) >> 0x15));
          puVar5 = puVar6;
          if ((bool)((byte)((uVar7 & uVar9) >> 0x14) & 1)) {
            bVar1 = bVar1 >> 4;
          }
        }
        iVar26 = iVar26 + -1;
        puVar5 = puVar5 + 1;
        if (iVar26 < 0) {
          return;
        }
      } while( true );
    }
    do {
      bVar1 = *(byte *)(iVar14 + (uVar9 & uVar8 >> 0xc | (uVar7 & uVar9) >> 0x15));
      if ((bool)((byte)((uVar7 & uVar9) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      while( true ) {
        uVar8 = uVar8 + iVar10;
        uVar7 = uVar7 + iVar19;
        if ((bVar1 & 0xf) == 0) break;
        uVar2 = *(ushort *)(iVar11 + (bVar1 & 0xf) * 2);
        uVar27 = (uint)uVar2;
        uVar15 = uVar18 & 0xfffffff;
        uVar17 = uVar16 & 0xfffffff;
        uVar21 = uVar13 & 0xfffffff;
        uVar12 = (uint)(uVar2 >> 0xc);
        uVar13 = uVar13 + iVar23;
        uVar16 = uVar16 + iVar20;
        if (uVar12 == 0xf) {
          uVar12 = 0x10;
        }
        uVar18 = uVar18 + iVar24;
        uVar15 = ((uVar27 & 0xf) * (uVar21 >> 0x17) >> 4) << 0xb |
                 (((uVar27 & 0xff) >> 4) * (uVar17 >> 0x16) >> 4) << 5 |
                 ((uVar27 & 0xfff) >> 8) * (uVar15 >> 0x17) >> 4;
        iVar26 = iVar26 + -1;
        uVar12 = uVar12 * uVar4 >> 4;
        uVar12 = DAT_4a026ef0 &
                 ((uVar15 | uVar15 << 0x10) & DAT_4a026ef0) * uVar12 +
                 (CONCAT22(*puVar5,*puVar5) & 0x7e0f81f) * (0x20 - uVar12) >> 5;
        puVar6 = puVar5 + 1;
        *puVar5 = (ushort)(uVar12 >> 0x10) | (ushort)uVar12;
        if (iVar26 < 0) {
          return;
        }
        bVar1 = *(byte *)(iVar14 + (uVar9 & uVar8 >> 0xc | (uVar7 & uVar9) >> 0x15));
        puVar5 = puVar6;
        if ((bool)((byte)((uVar7 & uVar9) >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
      }
      iVar26 = iVar26 + -1;
      uVar13 = uVar13 + iVar23;
      puVar5 = puVar5 + 1;
      uVar16 = uVar16 + iVar20;
      uVar18 = uVar18 + iVar24;
      if (iVar26 < 0) {
        return;
      }
    } while( true );
  }
  if ((iVar23 == 0 && iVar20 == 0) && iVar24 == 0) {
    do {
      bVar1 = *(byte *)(iVar14 + (uVar9 & uVar8 >> 0xc | (uVar7 & uVar9) >> 0x15));
      if ((bool)((byte)((uVar7 & uVar9) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      while( true ) {
        uVar8 = uVar8 + iVar10;
        uVar7 = uVar7 + iVar19;
        if ((bVar1 & 0xf) == 0) break;
        uVar2 = *(ushort *)(iVar11 + (bVar1 & 0xf) * 2);
        uVar16 = (uint)uVar2;
        uVar13 = (uint)(uVar2 >> 0xc);
        uVar16 = (((uVar12 & 0xffff) >> 0xb) * (uVar16 & 0xf) >> 4) << 0xb |
                 (((uVar15 & 0xffff) >> 10) * ((uVar16 & 0xff) >> 4) >> 4) << 5 |
                 ((uVar17 & 0xffff) >> 0xb) * ((uVar16 & 0xfff) >> 8) >> 4;
        if (uVar13 == 0xf) {
          uVar13 = 0x10;
        }
        uVar13 = uVar13 * (uVar4 >> 0x17) >> 4;
        uVar13 = DAT_4a026ef0 &
                 ((uVar16 | uVar16 << 0x10) & DAT_4a026ef0) * uVar13 +
                 (0x20 - uVar13) * (CONCAT22(*puVar5,*puVar5) & 0x7e0f81f) >> 5;
        iVar26 = iVar26 + -1;
        uVar4 = uVar4 + iVar25;
        puVar6 = puVar5 + 1;
        *puVar5 = (ushort)(uVar13 >> 0x10) | (ushort)uVar13;
        if (iVar26 < 0) {
          return;
        }
        bVar1 = *(byte *)(iVar14 + (uVar9 & uVar8 >> 0xc | (uVar7 & uVar9) >> 0x15));
        puVar5 = puVar6;
        if ((bool)((byte)((uVar7 & uVar9) >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
      }
      iVar26 = iVar26 + -1;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 + iVar25;
      if (iVar26 < 0) {
        return;
      }
    } while( true );
  }
  do {
    bVar1 = *(byte *)(iVar14 + (uVar9 & uVar8 >> 0xc | (uVar7 & uVar9) >> 0x15));
    if ((bool)((byte)((uVar7 & uVar9) >> 0x14) & 1)) {
      bVar1 = bVar1 >> 4;
    }
    while( true ) {
      uVar8 = uVar8 + iVar10;
      uVar7 = uVar7 + iVar19;
      if ((bVar1 & 0xf) == 0) break;
      uVar12 = uVar4 >> 0x17;
      uVar2 = *(ushort *)(iVar11 + (bVar1 & 0xf) * 2);
      uVar22 = (uint)uVar2;
      uVar15 = (uint)(uVar2 >> 0xc);
      uVar17 = uVar18 & 0xfffffff;
      uVar21 = uVar16 & 0xfffffff;
      uVar27 = uVar13 & 0xfffffff;
      uVar13 = uVar13 + iVar23;
      uVar16 = uVar16 + iVar20;
      uVar18 = uVar18 + iVar24;
      uVar4 = uVar4 + iVar25;
      uVar17 = ((uVar27 >> 0x17) * (uVar22 & 0xf) >> 4) << 0xb |
               (((uVar22 & 0xff) >> 4) * (uVar21 >> 0x16) >> 4) << 5 |
               ((uVar22 & 0xfff) >> 8) * (uVar17 >> 0x17) >> 4;
      if (uVar15 == 0xf) {
        uVar15 = 0x10;
      }
      uVar12 = uVar12 * uVar15 >> 4;
      iVar26 = iVar26 + -1;
      uVar12 = DAT_4a026ef0 &
               ((uVar17 | uVar17 << 0x10) & DAT_4a026ef0) * uVar12 +
               (0x20 - uVar12) * (CONCAT22(*puVar5,*puVar5) & 0x7e0f81f) >> 5;
      puVar6 = puVar5 + 1;
      *puVar5 = (ushort)(uVar12 >> 0x10) | (ushort)uVar12;
      if (iVar26 < 0) {
        return;
      }
      bVar1 = *(byte *)(iVar14 + (uVar9 & uVar8 >> 0xc | (uVar7 & uVar9) >> 0x15));
      puVar5 = puVar6;
      if ((bool)((byte)((uVar7 & uVar9) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
    }
    iVar26 = iVar26 + -1;
    uVar13 = uVar13 + iVar23;
    puVar5 = puVar5 + 1;
    uVar16 = uVar16 + iVar20;
    uVar18 = uVar18 + iVar24;
    uVar4 = uVar4 + iVar25;
    if (iVar26 < 0) {
      return;
    }
  } while( true );
}



// Address: 4a026ef4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a026ef4(int *param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  bool bVar25;
  
  uVar19 = DAT_4a0278e4;
  uVar7 = param_1[6];
  iVar24 = *param_1 + -1;
  puVar4 = (ushort *)param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  iVar8 = param_1[4];
  iVar9 = param_1[5];
  iVar10 = param_1[7];
  uVar11 = param_1[9];
  uVar13 = param_1[0xb];
  uVar15 = param_1[0xd];
  iVar21 = param_1[10];
  iVar17 = param_1[0xc];
  iVar22 = param_1[0xe];
  uVar18 = param_1[0xf];
  iVar23 = param_1[0x10];
  uVar12 = (uVar11 & 0xfff0ffff) << 0xc;
  uVar14 = (uVar13 & 0xfff0ffff) << 0xc;
  uVar16 = (uVar15 & 0xfff0ffff) << 0xc;
  uVar3 = (uVar18 & 0xfff0ffff) << 0xc;
  if (*(int *)(PTR_LAB_4a0278e0 + 0x5c) != 0) {
    bVar25 = (uVar18 & 0xffff) >> 0xb == 0x1f;
    iVar2 = 0x1f;
    if (bVar25) {
      iVar2 = iVar23;
    }
    if (bVar25 && iVar2 == 0) {
      do {
        uVar1 = *(ushort *)(iVar10 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
        uVar13 = (uint)uVar1;
        uVar19 = uVar16 & 0xfffffff;
        uVar11 = uVar14 & 0xfffffff;
        uVar14 = uVar14 + iVar17;
        uVar6 = uVar6 + iVar9;
        uVar16 = uVar16 + iVar22;
        uVar3 = (uint)(uVar1 >> 0xc);
        uVar5 = uVar5 + iVar8;
        uVar19 = (((uVar12 & 0xfffffff) >> 0x17) * (uVar13 & 0xf) >> 4) << 0xb |
                 (((uVar13 & 0xff) >> 4) * (uVar11 >> 0x16) >> 4) << 5 |
                 ((uVar13 & 0xfff) >> 8) * (uVar19 >> 0x17) >> 4;
        if (uVar3 != 0xf) {
          uVar3 = DAT_4a0278e4 &
                  ((uVar19 | uVar19 << 0x10) & DAT_4a0278e4) * uVar3 +
                  (0x10 - uVar3) * (CONCAT22(*puVar4,*puVar4) & DAT_4a0278e4) >> 4;
          uVar19 = (uVar3 | uVar3 << 0x10) >> 0x10;
        }
        iVar24 = iVar24 + -1;
        *puVar4 = (ushort)uVar19;
        puVar4 = puVar4 + 1;
        uVar12 = uVar12 + iVar21;
      } while (-1 < iVar24);
      return;
    }
    do {
      uVar19 = uVar5 & uVar7;
      uVar5 = uVar5 + iVar8;
      uVar1 = *(ushort *)(iVar10 + (uVar7 & uVar6 >> 0xd | uVar19 >> 0x14) * 2);
      uVar20 = (uint)uVar1;
      uVar6 = uVar6 + iVar9;
      uVar19 = uVar3 >> 0x17;
      uVar11 = (uint)(uVar1 >> 0xc);
      uVar13 = uVar16 & 0xfffffff;
      uVar15 = uVar14 & 0xfffffff;
      uVar18 = uVar12 & 0xfffffff;
      uVar12 = uVar12 + iVar21;
      uVar14 = uVar14 + iVar17;
      uVar16 = uVar16 + iVar22;
      uVar3 = uVar3 + iVar23;
      uVar13 = ((uVar18 >> 0x17) * (uVar20 & 0xf) >> 4) << 0xb |
               (((uVar20 & 0xff) >> 4) * (uVar15 >> 0x16) >> 4) << 5 |
               ((uVar20 & 0xfff) >> 8) * (uVar13 >> 0x17) >> 4;
      if (uVar11 == 0xf) {
        uVar11 = 0x10;
      }
      uVar19 = uVar19 * uVar11 >> 4;
      iVar24 = iVar24 + -1;
      uVar19 = DAT_4a0278e4 &
               ((uVar13 | uVar13 << 0x10) & DAT_4a0278e4) * uVar19 +
               (0x20 - uVar19) * (CONCAT22(*puVar4,*puVar4) & 0x7e0f81f) >> 5;
      *puVar4 = (ushort)(uVar19 >> 0x10) | (ushort)uVar19;
      puVar4 = puVar4 + 1;
    } while (-1 < iVar24);
    return;
  }
  if ((uVar18 & 0xffff) >> 0xb == 0x1f) {
    if (iVar23 == 0) {
      do {
        uVar1 = *(ushort *)(iVar10 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
        while( true ) {
          uVar3 = (uint)uVar1;
          uVar6 = uVar6 + iVar9;
          uVar5 = uVar5 + iVar8;
          if (uVar3 == 0) break;
          uVar11 = uVar12 & 0xfffffff;
          uVar12 = uVar12 + iVar21;
          uVar13 = uVar16 & 0xfffffff;
          uVar16 = uVar16 + iVar22;
          uVar19 = (uint)(uVar1 >> 0xc);
          uVar3 = ((uVar11 >> 0x17) * (uVar3 & 0xf) >> 4) << 0xb |
                  (((uVar3 & 0xff) >> 4) * ((uVar14 & 0xfffffff) >> 0x16) >> 4) << 5 |
                  ((uVar3 & 0xfff) >> 8) * (uVar13 >> 0x17) >> 4;
          if (uVar19 != 0xf) {
            uVar3 = DAT_4a0278e4 &
                    ((uVar3 | uVar3 << 0x10) & DAT_4a0278e4) * uVar19 +
                    (0x10 - uVar19) * (CONCAT22(*puVar4,*puVar4) & DAT_4a0278e4) >> 4;
            uVar3 = (uVar3 | uVar3 << 0x10) >> 0x10;
          }
          iVar24 = iVar24 + -1;
          *puVar4 = (ushort)uVar3;
          if (iVar24 < 0) {
            return;
          }
          uVar1 = *(ushort *)(iVar10 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
          puVar4 = puVar4 + 1;
          uVar14 = uVar14 + iVar17;
        }
        iVar24 = iVar24 + -1;
        uVar12 = uVar12 + iVar21;
        puVar4 = puVar4 + 1;
        uVar14 = uVar14 + iVar17;
        uVar16 = uVar16 + iVar22;
        if (iVar24 < 0) {
          return;
        }
      } while( true );
    }
  }
  else if (iVar23 == 0) {
    uVar3 = (uVar18 & 0xffff) >> 0xb;
    if (uVar3 == 0) {
      return;
    }
    if (iVar22 == 0 && (iVar21 == 0 && iVar17 == 0)) {
      do {
        uVar1 = *(ushort *)(iVar10 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
        while( true ) {
          uVar12 = (uint)uVar1;
          uVar6 = uVar6 + iVar9;
          uVar5 = uVar5 + iVar8;
          if (uVar12 == 0) break;
          uVar14 = (uint)(uVar1 >> 0xc);
          uVar12 = (((uVar11 & 0xffff) >> 0xb) * (uVar12 & 0xf) >> 4) << 0xb |
                   (((uVar13 & 0xffff) >> 10) * ((uVar12 & 0xff) >> 4) >> 4) << 5 |
                   ((uVar12 & 0xfff) >> 8) * ((uVar15 & 0xffff) >> 0xb) >> 4;
          if (uVar14 == 0xf) {
            uVar14 = 0x10;
          }
          uVar14 = uVar3 * uVar14 >> 4;
          uVar12 = uVar19 & ((uVar12 | uVar12 << 0x10) & 0x7e0f81f) * uVar14 +
                            (0x20 - uVar14) * (CONCAT22(*puVar4,*puVar4) & 0x7e0f81f) >> 5;
          iVar24 = iVar24 + -1;
          *puVar4 = (ushort)(uVar12 >> 0x10) | (ushort)uVar12;
          if (iVar24 < 0) {
            return;
          }
          uVar1 = *(ushort *)(iVar10 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
          puVar4 = puVar4 + 1;
        }
        iVar24 = iVar24 + -1;
        puVar4 = puVar4 + 1;
        if (iVar24 < 0) {
          return;
        }
      } while( true );
    }
    do {
      uVar1 = *(ushort *)(iVar10 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
      while( true ) {
        uVar6 = uVar6 + iVar9;
        uVar19 = (uint)uVar1;
        uVar5 = uVar5 + iVar8;
        if (uVar19 == 0) break;
        uVar13 = uVar16 & 0xfffffff;
        uVar15 = uVar14 & 0xfffffff;
        uVar11 = (uint)(uVar1 >> 0xc);
        uVar14 = uVar14 + iVar17;
        uVar16 = uVar16 + iVar22;
        uVar19 = (((uVar12 & 0xfffffff) >> 0x17) * (uVar19 & 0xf) >> 4) << 0xb |
                 (((uVar19 & 0xff) >> 4) * (uVar15 >> 0x16) >> 4) << 5 |
                 ((uVar19 & 0xfff) >> 8) * (uVar13 >> 0x17) >> 4;
        if (uVar11 == 0xf) {
          uVar11 = 0x10;
        }
        uVar11 = uVar11 * uVar3 >> 4;
        uVar19 = DAT_4a0278e4 &
                 ((uVar19 | uVar19 << 0x10) & DAT_4a0278e4) * uVar11 +
                 (CONCAT22(*puVar4,*puVar4) & 0x7e0f81f) * (0x20 - uVar11) >> 5;
        iVar24 = iVar24 + -1;
        *puVar4 = (ushort)(uVar19 >> 0x10) | (ushort)uVar19;
        if (iVar24 < 0) {
          return;
        }
        uVar1 = *(ushort *)(iVar10 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
        puVar4 = puVar4 + 1;
        uVar12 = uVar12 + iVar21;
      }
      iVar24 = iVar24 + -1;
      uVar12 = uVar12 + iVar21;
      puVar4 = puVar4 + 1;
      uVar14 = uVar14 + iVar17;
      uVar16 = uVar16 + iVar22;
      if (iVar24 < 0) {
        return;
      }
    } while( true );
  }
  if (iVar22 == 0 && (iVar17 == 0 && iVar21 == 0)) {
    do {
      uVar1 = *(ushort *)(iVar10 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
      while( true ) {
        uVar12 = (uint)uVar1;
        uVar6 = uVar6 + iVar9;
        uVar5 = uVar5 + iVar8;
        if (uVar12 == 0) break;
        uVar14 = (uint)(uVar1 >> 0xc);
        uVar12 = (((uVar11 & 0xffff) >> 0xb) * (uVar12 & 0xf) >> 4) << 0xb |
                 (((uVar13 & 0xffff) >> 10) * ((uVar12 & 0xff) >> 4) >> 4) << 5 |
                 ((uVar15 & 0xffff) >> 0xb) * ((uVar12 & 0xfff) >> 8) >> 4;
        if (uVar14 == 0xf) {
          uVar14 = 0x10;
        }
        uVar14 = uVar14 * (uVar3 >> 0x17) >> 4;
        uVar12 = DAT_4a0278e4 &
                 ((uVar12 | uVar12 << 0x10) & DAT_4a0278e4) * uVar14 +
                 (0x20 - uVar14) * (CONCAT22(*puVar4,*puVar4) & 0x7e0f81f) >> 5;
        iVar24 = iVar24 + -1;
        uVar3 = uVar3 + iVar23;
        *puVar4 = (ushort)(uVar12 >> 0x10) | (ushort)uVar12;
        if (iVar24 < 0) {
          return;
        }
        uVar1 = *(ushort *)(iVar10 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
        puVar4 = puVar4 + 1;
      }
      iVar24 = iVar24 + -1;
      puVar4 = puVar4 + 1;
      uVar3 = uVar3 + iVar23;
      if (iVar24 < 0) {
        return;
      }
    } while( true );
  }
  do {
    uVar1 = *(ushort *)(iVar10 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
    while( true ) {
      uVar19 = (uint)uVar1;
      uVar6 = uVar6 + iVar9;
      uVar5 = uVar5 + iVar8;
      if (uVar19 == 0) break;
      uVar15 = uVar16 & 0xfffffff;
      uVar18 = uVar14 & 0xfffffff;
      uVar20 = uVar12 & 0xfffffff;
      uVar12 = uVar12 + iVar21;
      uVar11 = uVar3 >> 0x17;
      uVar14 = uVar14 + iVar17;
      uVar16 = uVar16 + iVar22;
      uVar13 = (uint)(uVar1 >> 0xc);
      uVar3 = uVar3 + iVar23;
      if (uVar13 == 0xf) {
        uVar13 = 0x10;
      }
      uVar15 = ((uVar20 >> 0x17) * (uVar19 & 0xf) >> 4) << 0xb |
               (((uVar19 & 0xff) >> 4) * (uVar18 >> 0x16) >> 4) << 5 |
               ((uVar19 & 0xfff) >> 8) * (uVar15 >> 0x17) >> 4;
      iVar24 = iVar24 + -1;
      uVar19 = uVar13 * uVar11 >> 4;
      uVar19 = DAT_4a0278e4 &
               ((uVar15 | uVar15 << 0x10) & DAT_4a0278e4) * uVar19 +
               (CONCAT22(*puVar4,*puVar4) & 0x7e0f81f) * (0x20 - uVar19) >> 5;
      *puVar4 = (ushort)(uVar19 >> 0x10) | (ushort)uVar19;
      if (iVar24 < 0) {
        return;
      }
      uVar1 = *(ushort *)(iVar10 + (uVar7 & uVar6 >> 0xd | (uVar5 & uVar7) >> 0x14) * 2);
      puVar4 = puVar4 + 1;
    }
    iVar24 = iVar24 + -1;
    uVar12 = uVar12 + iVar21;
    puVar4 = puVar4 + 1;
    uVar14 = uVar14 + iVar17;
    uVar16 = uVar16 + iVar22;
    uVar3 = uVar3 + iVar23;
    if (iVar24 < 0) {
      return;
    }
  } while( true );
}



// Address: 4a0278e8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0278e8(int *param_1)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  bool bVar26;
  uint local_4c;
  
  uVar19 = DAT_4a028398;
  iVar24 = *param_1 + -1;
  puVar3 = (ushort *)param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  iVar6 = param_1[4];
  iVar8 = param_1[5];
  iVar16 = *(int *)PTR_LAB_4a028394;
  uVar7 = param_1[6];
  iVar9 = param_1[7];
  uVar10 = param_1[9];
  uVar12 = param_1[0xb];
  uVar14 = param_1[0xd];
  iVar21 = param_1[10];
  iVar17 = param_1[0xc];
  uVar22 = param_1[0xe];
  uVar18 = param_1[0xf];
  iVar23 = param_1[0x10];
  uVar11 = (uVar10 & 0xfff0ffff) << 0xc;
  uVar13 = (uVar12 & 0xfff0ffff) << 0xc;
  uVar15 = (uVar14 & 0xfff0ffff) << 0xc;
  uVar2 = (uVar18 & 0xfff0ffff) << 0xc;
  if (*(int *)(PTR_LAB_4a028394 + 0x5c) != 0) {
    bVar26 = (uVar18 & 0xffff) >> 0xb == 0x1f;
    iVar1 = 0x1f;
    if (bVar26) {
      iVar1 = iVar23;
    }
    if (!bVar26 || iVar1 != 0) {
      do {
        uVar18 = *(uint *)(iVar9 + (uVar7 & uVar5 >> 0xe | (uVar4 & uVar7) >> 0x14) * 4);
        uVar5 = uVar5 + iVar8;
        uVar4 = uVar4 + iVar6;
        uVar19 = uVar2 >> 0x17;
        local_4c = uVar18 >> 0x1b;
        uVar10 = uVar11 >> 0x17;
        uVar12 = uVar13 >> 0x17;
        uVar11 = uVar11 + iVar21;
        uVar13 = uVar13 + iVar17;
        uVar14 = uVar15 >> 0x17;
        uVar15 = uVar15 + uVar22;
        uVar2 = uVar2 + iVar23;
        uVar25 = (uVar18 & 0xffff) >> 0xb | (uVar18 & 0xf8) << 2;
        uVar10 = *(ushort *)(iVar16 + uVar12 * 0x800 + uVar25 * 2) & 0xffffffe0 |
                 *(ushort *)(iVar16 + uVar14 * 0x800 + uVar25 * 2) & 0x1f |
                 (uint)*(ushort *)
                        (iVar16 + (uVar10 * 0x20 + 0x8000) * 2 + ((uVar18 & 0xffffff) >> 0x13) * 2);
        if (local_4c == 0x1f) {
          local_4c = 0x20;
        }
        uVar19 = uVar19 * local_4c >> 5;
        iVar24 = iVar24 + -1;
        uVar19 = DAT_4a028398 &
                 ((uVar10 | uVar10 << 0x10) & DAT_4a028398) * uVar19 +
                 (0x20 - uVar19) * (CONCAT22(*puVar3,*puVar3) & 0x7e0f81f) >> 5;
        *puVar3 = (ushort)(uVar19 >> 0x10) | (ushort)uVar19;
        puVar3 = puVar3 + 1;
      } while (-1 < iVar24);
      return;
    }
    do {
      uVar14 = *(uint *)(iVar9 + (uVar7 & uVar5 >> 0xe | (uVar4 & uVar7) >> 0x14) * 4);
      uVar5 = uVar5 + iVar8;
      uVar4 = uVar4 + iVar6;
      uVar2 = uVar14 >> 0x1b;
      uVar19 = uVar11 >> 0x17;
      uVar10 = uVar13 >> 0x17;
      uVar12 = uVar15 >> 0x17;
      uVar11 = uVar11 + iVar21;
      uVar13 = uVar13 + iVar17;
      uVar15 = uVar15 + uVar22;
      uVar18 = (uVar14 & 0xffff) >> 0xb | (uVar14 & 0xf8) << 2;
      uVar19 = *(ushort *)(iVar16 + uVar10 * 0x800 + uVar18 * 2) & 0xffffffe0 |
               *(ushort *)(iVar16 + uVar12 * 0x800 + uVar18 * 2) & 0x1f |
               (uint)*(ushort *)
                      (iVar16 + (uVar19 * 0x20 + 0x8000) * 2 + ((uVar14 & 0xffffff) >> 0x13) * 2);
      if (uVar2 != 0x1f) {
        uVar2 = DAT_4a028398 &
                ((uVar19 | uVar19 << 0x10) & DAT_4a028398) * uVar2 +
                (0x20 - uVar2) * (CONCAT22(*puVar3,*puVar3) & DAT_4a028398) >> 5;
        uVar19 = (uVar2 | uVar2 << 0x10) >> 0x10;
      }
      iVar24 = iVar24 + -1;
      *puVar3 = (ushort)uVar19;
      puVar3 = puVar3 + 1;
    } while (-1 < iVar24);
    return;
  }
  if ((uVar18 & 0xffff) >> 0xb == 0x1f) {
    if (iVar23 == 0) {
      do {
        uVar2 = *(uint *)(iVar9 + (uVar7 & uVar5 >> 0xe | (uVar4 & uVar7) >> 0x14) * 4);
        while( true ) {
          uVar4 = uVar4 + iVar6;
          uVar5 = uVar5 + iVar8;
          if (uVar2 == 0) break;
          uVar19 = uVar11 >> 0x17;
          uVar10 = uVar13 >> 0x17;
          uVar12 = uVar15 >> 0x17;
          uVar11 = uVar11 + iVar21;
          uVar14 = uVar2 >> 0x1b;
          uVar13 = uVar13 + iVar17;
          uVar15 = uVar15 + uVar22;
          uVar18 = (uVar2 & 0xffff) >> 0xb | (uVar2 & 0xf8) << 2;
          uVar2 = *(ushort *)(iVar16 + uVar10 * 0x800 + uVar18 * 2) & 0xffffffe0 |
                  *(ushort *)(iVar16 + uVar12 * 0x800 + uVar18 * 2) & 0x1f |
                  (uint)*(ushort *)
                         (iVar16 + (uVar19 * 0x20 + 0x8000) * 2 + ((uVar2 & 0xffffff) >> 0x13) * 2);
          if (uVar14 != 0x1f) {
            uVar2 = DAT_4a028398 &
                    ((uVar2 | uVar2 << 0x10) & DAT_4a028398) * uVar14 +
                    (0x20 - uVar14) * (CONCAT22(*puVar3,*puVar3) & DAT_4a028398) >> 5;
            uVar2 = (uVar2 | uVar2 << 0x10) >> 0x10;
          }
          iVar24 = iVar24 + -1;
          *puVar3 = (ushort)uVar2;
          if (iVar24 < 0) {
            return;
          }
          uVar2 = *(uint *)(iVar9 + (uVar7 & uVar5 >> 0xe | (uVar4 & uVar7) >> 0x14) * 4);
          puVar3 = puVar3 + 1;
        }
        iVar24 = iVar24 + -1;
        uVar11 = uVar11 + iVar21;
        puVar3 = puVar3 + 1;
        uVar13 = uVar13 + iVar17;
        uVar15 = uVar15 + uVar22;
        if (iVar24 < 0) {
          return;
        }
      } while( true );
    }
  }
  else if (iVar23 == 0) {
    uVar2 = (uVar18 & 0xffff) >> 0xb;
    if (uVar2 == 0) {
      return;
    }
    if ((iVar21 != 0 || iVar17 != 0) || uVar22 != 0) {
      do {
        uVar19 = *(uint *)(iVar9 + (uVar7 & uVar5 >> 0xe | (uVar4 & uVar7) >> 0x14) * 4);
        while( true ) {
          uVar4 = uVar4 + iVar6;
          uVar5 = uVar5 + iVar8;
          if (uVar19 == 0) break;
          uVar10 = uVar11 >> 0x17;
          uVar12 = uVar13 >> 0x17;
          uVar14 = uVar15 >> 0x17;
          uVar18 = uVar19 >> 0x1b;
          uVar11 = uVar11 + iVar21;
          uVar13 = uVar13 + iVar17;
          if (uVar18 == 0x1f) {
            uVar18 = 0x20;
          }
          uVar15 = uVar15 + uVar22;
          uVar25 = (uVar19 & 0xffff) >> 0xb | (uVar19 & 0xf8) << 2;
          iVar24 = iVar24 + -1;
          uVar10 = (uint)*(ushort *)
                          (iVar16 + (uVar10 * 0x20 + 0x8000) * 2 + ((uVar19 & 0xffffff) >> 0x13) * 2
                          ) |
                   *(ushort *)(iVar16 + uVar12 * 0x800 + uVar25 * 2) & 0xffffffe0 |
                   *(ushort *)(iVar16 + uVar14 * 0x800 + uVar25 * 2) & 0x1f;
          uVar19 = uVar18 * uVar2 >> 5;
          uVar19 = DAT_4a028398 &
                   ((uVar10 | uVar10 << 0x10) & DAT_4a028398) * uVar19 +
                   (CONCAT22(*puVar3,*puVar3) & 0x7e0f81f) * (0x20 - uVar19) >> 5;
          *puVar3 = (ushort)(uVar19 >> 0x10) | (ushort)uVar19;
          if (iVar24 < 0) {
            return;
          }
          uVar19 = *(uint *)(iVar9 + (uVar7 & uVar5 >> 0xe | (uVar4 & uVar7) >> 0x14) * 4);
          puVar3 = puVar3 + 1;
        }
        iVar24 = iVar24 + -1;
        uVar11 = uVar11 + iVar21;
        puVar3 = puVar3 + 1;
        uVar13 = uVar13 + iVar17;
        uVar15 = uVar15 + uVar22;
        if (iVar24 < 0) {
          return;
        }
      } while( true );
    }
    uVar11 = (uVar14 & 0xffff) >> 0xb;
    iVar17 = uVar11 * 0x800;
    do {
      uVar13 = *(uint *)(iVar9 + (uVar7 & uVar5 >> 0xe | (uVar4 & uVar7) >> 0x14) * 4);
      bVar26 = uVar13 != 0;
      if (bVar26) {
        uVar11 = uVar19;
      }
      while( true ) {
        uVar4 = uVar4 + iVar6;
        uVar5 = uVar5 + iVar8;
        if (!bVar26) break;
        uVar15 = uVar13 >> 0x1b;
        uVar22 = (uVar13 & 0xffff) >> 0xb | (uVar13 & 0xf8) << 2;
        uVar13 = *(ushort *)(iVar16 + iVar17 + uVar22 * 2) & 0x1f |
                 *(ushort *)(iVar16 + (uVar12 & 0xf800) + uVar22 * 2) & 0xffffffe0 |
                 (uint)*(ushort *)
                        (iVar16 + (((uVar10 & 0xffff) >> 0xb) * 0x20 + 0x8000) * 2 +
                        ((uVar13 & 0xffffff) >> 0x13) * 2);
        if (uVar15 == 0x1f) {
          uVar15 = 0x20;
        }
        uVar15 = uVar2 * uVar15 >> 5;
        uVar13 = uVar11 & ((uVar13 | (uVar13 & 0x7ff) << 0x10) & 0xffe0f81f) * uVar15 +
                          (0x20 - uVar15) * (CONCAT22(*puVar3,*puVar3) & 0x7e0f81f) >> 5;
        iVar24 = iVar24 + -1;
        *puVar3 = (ushort)(uVar13 >> 0x10) | (ushort)uVar13;
        if (iVar24 < 0) {
          return;
        }
        uVar13 = *(uint *)(iVar9 + (uVar7 & uVar5 >> 0xe | (uVar4 & uVar7) >> 0x14) * 4);
        bVar26 = uVar13 != 0;
        puVar3 = puVar3 + 1;
      }
      iVar24 = iVar24 + -1;
      puVar3 = puVar3 + 1;
      if (iVar24 < 0) {
        return;
      }
    } while( true );
  }
  if ((iVar21 != 0 || iVar17 != 0) || uVar22 != 0) {
    do {
      uVar19 = *(uint *)(iVar9 + (uVar7 & uVar5 >> 0xe | (uVar4 & uVar7) >> 0x14) * 4);
      while( true ) {
        uVar4 = uVar4 + iVar6;
        uVar5 = uVar5 + iVar8;
        if (uVar19 == 0) break;
        uVar10 = uVar2 >> 0x17;
        uVar12 = uVar19 >> 0x1b;
        uVar14 = uVar11 >> 0x17;
        uVar18 = uVar13 >> 0x17;
        uVar25 = uVar15 >> 0x17;
        uVar11 = uVar11 + iVar21;
        uVar13 = uVar13 + iVar17;
        uVar15 = uVar15 + uVar22;
        uVar2 = uVar2 + iVar23;
        uVar20 = (uVar19 & 0xffff) >> 0xb | (uVar19 & 0xf8) << 2;
        uVar19 = *(ushort *)(iVar16 + uVar18 * 0x800 + uVar20 * 2) & 0xffffffe0 |
                 *(ushort *)(iVar16 + uVar25 * 0x800 + uVar20 * 2) & 0x1f |
                 (uint)*(ushort *)
                        (iVar16 + (uVar14 * 0x20 + 0x8000) * 2 + ((uVar19 & 0xffffff) >> 0x13) * 2);
        if (uVar12 == 0x1f) {
          uVar12 = 0x20;
        }
        uVar10 = uVar10 * uVar12 >> 5;
        iVar24 = iVar24 + -1;
        uVar19 = DAT_4a028398 &
                 ((uVar19 | uVar19 << 0x10) & DAT_4a028398) * uVar10 +
                 (0x20 - uVar10) * (CONCAT22(*puVar3,*puVar3) & 0x7e0f81f) >> 5;
        *puVar3 = (ushort)(uVar19 >> 0x10) | (ushort)uVar19;
        if (iVar24 < 0) {
          return;
        }
        uVar19 = *(uint *)(iVar9 + (uVar7 & uVar5 >> 0xe | (uVar4 & uVar7) >> 0x14) * 4);
        puVar3 = puVar3 + 1;
      }
      iVar24 = iVar24 + -1;
      uVar11 = uVar11 + iVar21;
      puVar3 = puVar3 + 1;
      uVar13 = uVar13 + iVar17;
      uVar15 = uVar15 + uVar22;
      uVar2 = uVar2 + iVar23;
      if (iVar24 < 0) {
        return;
      }
    } while( true );
  }
  do {
    uVar11 = *(uint *)(iVar9 + (uVar7 & uVar5 >> 0xe | (uVar4 & uVar7) >> 0x14) * 4);
    bVar26 = uVar11 != 0;
    if (bVar26) {
      uVar22 = DAT_4a028398;
    }
    while( true ) {
      uVar4 = uVar4 + iVar6;
      uVar5 = uVar5 + iVar8;
      if (!bVar26) break;
      uVar13 = uVar11 >> 0x1b;
      uVar15 = (uVar11 & 0xffff) >> 0xb | (uVar11 & 0xf8) << 2;
      uVar11 = *(ushort *)(iVar16 + (uVar12 & 0xf800) + uVar15 * 2) & 0xffffffe0 |
               *(ushort *)(iVar16 + (uVar14 & 0xf800) + uVar15 * 2) & 0x1f |
               (uint)*(ushort *)
                      (iVar16 + (((uVar10 & 0xffff) >> 0xb) * 0x20 + 0x8000) * 2 +
                      ((uVar11 & 0xffffff) >> 0x13) * 2);
      if (uVar13 == 0x1f) {
        uVar13 = 0x20;
      }
      uVar13 = uVar13 * (uVar2 >> 0x17) >> 5;
      uVar11 = uVar22 & ((uVar11 | (uVar11 & 0x7ff) << 0x10) & 0xffe0f81f) * uVar13 +
                        (CONCAT22(*puVar3,*puVar3) & 0x7e0f81f) * (0x20 - uVar13) >> 5;
      iVar24 = iVar24 + -1;
      uVar2 = uVar2 + iVar23;
      *puVar3 = (ushort)(uVar11 >> 0x10) | (ushort)uVar11;
      if (iVar24 < 0) {
        return;
      }
      uVar11 = *(uint *)(iVar9 + (uVar7 & uVar5 >> 0xe | (uVar4 & uVar7) >> 0x14) * 4);
      bVar26 = uVar11 != 0;
      puVar3 = puVar3 + 1;
    }
    iVar24 = iVar24 + -1;
    puVar3 = puVar3 + 1;
    uVar2 = uVar2 + iVar23;
    if (iVar24 < 0) {
      return;
    }
  } while( true );
}



// Address: 4a02839c

void FUN_4a02839c(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  short *psVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  
  uVar4 = DAT_4a0284cc;
  iVar23 = *(int *)PTR_DAT_4a0284c4;
  iVar8 = *(int *)(PTR_LAB_4a0284c8 + 0x40);
  iVar18 = *param_1 + -1;
  uVar10 = param_1[2];
  uVar11 = param_1[3];
  iVar12 = param_1[4];
  iVar20 = param_1[5];
  uVar19 = param_1[6];
  iVar13 = param_1[7];
  iVar21 = param_1[8];
  uVar14 = param_1[9];
  iVar16 = param_1[0xc];
  iVar5 = param_1[0xe];
  uVar22 = (param_1[0xb] & 0xfff0ffffU) << 0xc;
  uVar15 = (param_1[0xd] & 0xfff0ffffU) << 0xc;
  psVar9 = (short *)param_1[1];
  do {
    uVar6 = uVar10 & uVar19;
    bVar1 = *(byte *)(iVar13 + (uVar19 & uVar11 >> 0xc | uVar6 >> 0x15));
    uVar10 = uVar10 + iVar12;
    if ((bool)((byte)(uVar6 >> 0x14) & 1)) {
      bVar1 = bVar1 >> 4;
    }
    uVar11 = uVar11 + iVar20;
    uVar6 = (uint)*(ushort *)(iVar21 + ((uVar14 & 0xf800000) >> 0x12) + (bVar1 & 0xf) * 2);
    iVar18 = iVar18 + -1;
    uVar17 = uVar4 & *(ushort *)
                      (iVar8 + *(int *)(iVar23 + (uVar22 >> 0xe & 0x3f80 |
                                                 (uVar15 & 0xfffffff) >> 0x15) * 4) * 2) >> 2;
    uVar7 = uVar17 + uVar6;
    uVar17 = (uVar6 ^ uVar7 ^ uVar17) & 0x10820;
    uVar6 = uVar17 >> 5;
    uVar3 = (ushort)uVar17;
    uVar2 = uVar3 - ((short)uVar6 - (short)((uVar6 & 0x40) >> 1));
    uVar22 = uVar22 + iVar16;
    *psVar9 = ((ushort)uVar7 | uVar2) - (uVar3 & ~uVar2);
    uVar15 = uVar15 + iVar5;
    psVar9 = psVar9 + 1;
  } while (-1 < iVar18);
  return;
}



// Address: 4a0284d0

void FUN_4a0284d0(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  
  uVar3 = DAT_4a0285fc;
  iVar5 = *(int *)PTR_DAT_4a0285f4;
  iVar7 = *(int *)(PTR_LAB_4a0285f8 + 0x40);
  iVar16 = *param_1 + -1;
  uVar8 = param_1[2];
  uVar9 = param_1[3];
  iVar19 = param_1[4];
  iVar22 = param_1[5];
  iVar10 = param_1[8];
  uVar20 = param_1[9];
  iVar12 = param_1[7];
  uVar17 = param_1[6];
  iVar13 = param_1[0xc];
  iVar18 = param_1[0xe];
  uVar21 = (param_1[0xb] & 0xfff0ffffU) << 0xc;
  uVar11 = (param_1[0xd] & 0xfff0ffffU) << 0xc;
  psVar6 = (short *)param_1[1];
  do {
    uVar14 = uVar8 & uVar17;
    uVar8 = uVar8 + iVar19;
    uVar15 = (uint)*(ushort *)
                    (iVar10 + ((uVar20 & 0xf800000) >> 0xe) +
                    (uint)*(byte *)(iVar12 + (uVar17 & uVar9 >> 0xc | uVar14 >> 0x14)) * 2);
    uVar14 = uVar11 & 0xfffffff;
    iVar16 = iVar16 + -1;
    uVar9 = uVar9 + iVar22;
    uVar11 = uVar11 + iVar18;
    uVar14 = uVar3 & *(ushort *)
                      (iVar7 + *(int *)(iVar5 + (uVar21 >> 0xe & 0x3f80 | uVar14 >> 0x15) * 4) * 2)
                     >> 2;
    uVar4 = uVar14 + uVar15;
    uVar15 = (uVar15 ^ uVar4 ^ uVar14) & 0x10820;
    uVar14 = uVar15 >> 5;
    uVar2 = (ushort)uVar15;
    uVar1 = uVar2 - ((short)uVar14 - (short)((uVar14 & 0x40) >> 1));
    *psVar6 = ((ushort)uVar4 | uVar1) - (uVar2 & ~uVar1);
    uVar21 = uVar21 + iVar13;
    psVar6 = psVar6 + 1;
  } while (-1 < iVar16);
  return;
}



// Address: 4a028604

void FUN_4a028604(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  short *psVar10;
  short *psVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  
  uVar4 = DAT_4a028790;
  iVar6 = *(int *)PTR_DAT_4a028788;
  iVar8 = *(int *)(PTR_LAB_4a02878c + 0x40);
  psVar10 = (short *)param_1[1];
  iVar18 = *param_1 + -1;
  uVar7 = param_1[2];
  uVar9 = param_1[3];
  iVar24 = param_1[4];
  iVar12 = param_1[5];
  uVar22 = param_1[9];
  iVar13 = param_1[8];
  iVar15 = param_1[7];
  uVar19 = param_1[6];
  iVar20 = param_1[0xc];
  iVar21 = param_1[0xe];
  uVar23 = (param_1[0xb] & 0xfff0ffffU) << 0xc;
  uVar14 = (param_1[0xd] & 0xfff0ffffU) << 0xc;
  do {
    bVar1 = *(byte *)(iVar15 + (uVar19 & uVar9 >> 0xc | (uVar7 & uVar19) >> 0x15));
    if ((bool)((byte)((uVar7 & uVar19) >> 0x14) & 1)) {
      bVar1 = bVar1 >> 4;
    }
    while( true ) {
      uVar9 = uVar9 + iVar12;
      uVar7 = uVar7 + iVar24;
      if ((bVar1 & 0xf) == 0) break;
      uVar16 = (uint)*(ushort *)(iVar13 + ((uVar22 & 0xf800000) >> 0x12) + (bVar1 & 0xf) * 2);
      iVar18 = iVar18 + -1;
      uVar17 = uVar4 & *(ushort *)
                        (iVar8 + *(int *)(iVar6 + (uVar23 >> 0xe & 0x3f80 |
                                                  (uVar14 & 0xfffffff) >> 0x15) * 4) * 2) >> 2;
      uVar5 = uVar17 + uVar16;
      uVar17 = (uVar16 ^ uVar5 ^ uVar17) & 0x10820;
      uVar16 = uVar17 >> 5;
      uVar3 = (ushort)uVar17;
      uVar2 = uVar3 - ((short)uVar16 - (short)((uVar16 & 0x40) >> 1));
      uVar23 = uVar23 + iVar20;
      uVar14 = uVar14 + iVar21;
      psVar11 = psVar10 + 1;
      *psVar10 = ((ushort)uVar5 | uVar2) - (uVar3 & ~uVar2);
      if (iVar18 < 0) {
        return;
      }
      bVar1 = *(byte *)(iVar15 + (uVar19 & uVar9 >> 0xc | (uVar7 & uVar19) >> 0x15));
      psVar10 = psVar11;
      if ((bool)((byte)((uVar7 & uVar19) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
    }
    iVar18 = iVar18 + -1;
    uVar23 = uVar23 + iVar20;
    uVar14 = uVar14 + iVar21;
    psVar10 = psVar10 + 1;
    if (iVar18 < 0) {
      return;
    }
  } while( true );
}



// Address: 4a028794

void FUN_4a028794(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  short *psVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  
  uVar4 = DAT_4a028918;
  iVar6 = *(int *)PTR_DAT_4a028910;
  iVar8 = *(int *)(PTR_LAB_4a028914 + 0x40);
  psVar10 = (short *)param_1[1];
  iVar11 = param_1[8];
  uVar21 = param_1[9];
  iVar17 = *param_1 + -1;
  uVar7 = param_1[2];
  uVar9 = param_1[3];
  iVar23 = param_1[4];
  iVar13 = param_1[7];
  uVar18 = param_1[6];
  iVar19 = param_1[5];
  iVar14 = param_1[0xc];
  iVar20 = param_1[0xe];
  uVar22 = (param_1[0xb] & 0xfff0ffffU) << 0xc;
  uVar12 = (param_1[0xd] & 0xfff0ffffU) << 0xc;
  do {
    bVar1 = *(byte *)(iVar13 + (uVar18 & uVar9 >> 0xc | (uVar7 & uVar18) >> 0x14));
    while( true ) {
      uVar7 = uVar7 + iVar23;
      uVar9 = uVar9 + iVar19;
      if (bVar1 == 0) break;
      uVar15 = (uint)*(ushort *)(iVar11 + ((uVar21 & 0xf800000) >> 0xe) + (uint)bVar1 * 2);
      iVar17 = iVar17 + -1;
      uVar16 = uVar4 & *(ushort *)
                        (iVar8 + *(int *)(iVar6 + (uVar22 >> 0xe & 0x3f80 |
                                                  (uVar12 & 0xfffffff) >> 0x15) * 4) * 2) >> 2;
      uVar5 = uVar16 + uVar15;
      uVar16 = (uVar15 ^ uVar5 ^ uVar16) & 0x10820;
      uVar15 = uVar16 >> 5;
      uVar3 = (ushort)uVar16;
      uVar2 = uVar3 - ((short)uVar15 - (short)((uVar15 & 0x40) >> 1));
      uVar12 = uVar12 + iVar20;
      uVar22 = uVar22 + iVar14;
      *psVar10 = ((ushort)uVar5 | uVar2) - (uVar3 & ~uVar2);
      if (iVar17 < 0) {
        return;
      }
      bVar1 = *(byte *)(iVar13 + (uVar18 & uVar9 >> 0xc | (uVar7 & uVar18) >> 0x14));
      psVar10 = psVar10 + 1;
    }
    iVar17 = iVar17 + -1;
    uVar22 = uVar22 + iVar14;
    uVar12 = uVar12 + iVar20;
    psVar10 = psVar10 + 1;
  } while (-1 < iVar17);
  return;
}



// Address: 4a028920

void FUN_4a028920(int *param_1)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  bool bVar26;
  
  uVar6 = DAT_4a028b40;
  iVar8 = *(int *)PTR_DAT_4a028b38;
  iVar10 = *(int *)(PTR_LAB_4a028b3c + 0x40);
  iVar15 = *param_1 + -1;
  psVar9 = (short *)param_1[1];
  uVar11 = param_1[2];
  uVar12 = param_1[3];
  iVar13 = param_1[4];
  iVar24 = param_1[5];
  puVar1 = (uint *)(param_1 + 0xb);
  puVar2 = (uint *)(param_1 + 0xd);
  iVar18 = param_1[0xc];
  iVar16 = param_1[0xe];
  uVar19 = param_1[9];
  uVar17 = param_1[6];
  iVar23 = param_1[7];
  iVar21 = param_1[8];
  bVar26 = (uVar19 & 0x80000000) == 0;
  if (bVar26) {
    param_1 = (int *)param_1[10];
  }
  uVar25 = (*puVar1 & 0xfff0ffff) << 0xc;
  uVar14 = (*puVar2 & 0xfff0ffff) << 0xc;
  if (bVar26) {
    do {
      uVar7 = uVar11 & uVar17;
      bVar3 = *(byte *)(iVar23 + (uVar17 & uVar12 >> 0xc | uVar7 >> 0x15));
      uVar11 = uVar11 + iVar13;
      uVar12 = uVar12 + iVar24;
      if ((bool)((byte)(uVar7 >> 0x14) & 1)) {
        bVar3 = bVar3 >> 4;
      }
      uVar7 = (uint)*(ushort *)(iVar21 + ((uVar19 & 0xf800000) >> 0x12) + (bVar3 & 0xf) * 2);
      iVar15 = iVar15 + -1;
      uVar20 = uVar6 & *(ushort *)
                        (iVar10 + *(int *)(iVar8 + (uVar25 >> 0xe & 0x3f80 |
                                                   (uVar14 & 0xfffffff) >> 0x15) * 4) * 2) >> 2;
      uVar22 = uVar20 + uVar7;
      uVar20 = (uVar7 ^ uVar22 ^ uVar20) & 0x10820;
      uVar7 = uVar20 >> 5;
      uVar5 = (ushort)uVar20;
      uVar4 = uVar5 - ((short)uVar7 - (short)((uVar7 & 0x40) >> 1));
      uVar25 = uVar25 + iVar18;
      uVar14 = uVar14 + iVar16;
      *psVar9 = ((ushort)uVar22 | uVar4) - (uVar5 & ~uVar4);
      uVar19 = uVar19 + (int)param_1;
      psVar9 = psVar9 + 1;
    } while (-1 < iVar15);
    return;
  }
  do {
    uVar7 = uVar11 & uVar17;
    uVar11 = uVar11 + iVar13;
    bVar3 = *(byte *)(iVar23 + (uVar17 & uVar12 >> 0xc | uVar7 >> 0x15));
    uVar12 = uVar12 + iVar24;
    if ((bool)((byte)(uVar7 >> 0x14) & 1)) {
      bVar3 = bVar3 >> 4;
    }
    uVar7 = (uint)*(ushort *)(iVar21 + ((uVar19 & 0xf800000) >> 0x12) + (bVar3 & 0xf) * 2);
    uVar22 = uVar6 & *(ushort *)
                      (iVar10 + *(int *)(iVar8 + (uVar25 >> 0xe & 0x3f80 |
                                                 (uVar14 & 0xfffffff) >> 0x15) * 4) * 2) >> 2;
    uVar20 = uVar22 + uVar7;
    uVar22 = (uVar7 ^ uVar20 ^ uVar22) & 0x10820;
    uVar7 = uVar22 >> 5;
    uVar5 = (ushort)uVar22;
    uVar4 = uVar5 - ((short)uVar7 - (short)((uVar7 & 0x40) >> 1));
    iVar15 = iVar15 + -1;
    uVar25 = uVar25 + iVar18;
    *psVar9 = ((ushort)uVar20 | uVar4) - (uVar5 & ~uVar4);
    uVar14 = uVar14 + iVar16;
    psVar9 = psVar9 + 1;
  } while (-1 < iVar15);
  return;
}



// Address: 4a028b44

void FUN_4a028b44(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  
  uVar3 = DAT_4a028d50;
  iVar6 = *(int *)PTR_DAT_4a028d48;
  iVar8 = *(int *)(PTR_LAB_4a028d4c + 0x40);
  iVar13 = *param_1 + -1;
  uVar9 = param_1[2];
  uVar10 = param_1[3];
  iVar11 = param_1[4];
  iVar22 = param_1[5];
  uVar16 = param_1[9];
  iVar14 = param_1[0xc];
  iVar19 = param_1[0xe];
  uVar15 = param_1[6];
  iVar20 = param_1[8];
  iVar21 = param_1[7];
  uVar23 = (param_1[0xb] & 0xfff0ffffU) << 0xc;
  uVar12 = (param_1[0xd] & 0xfff0ffffU) << 0xc;
  if ((uVar16 & 0x80000000) != 0) {
    psVar7 = (short *)param_1[1];
    do {
      uVar4 = uVar10 >> 0xc;
      uVar17 = uVar9 & uVar15;
      uVar10 = uVar10 + iVar22;
      uVar9 = uVar9 + iVar11;
      uVar4 = (uint)*(ushort *)
                     (iVar20 + ((uVar16 & 0xf800000) >> 0xe) +
                     (uint)*(byte *)(iVar21 + (uVar15 & uVar4 | uVar17 >> 0x14)) * 2);
      uVar17 = uVar3 & *(ushort *)
                        (iVar8 + *(int *)(iVar6 + (uVar23 >> 0xe & 0x3f80 |
                                                  (uVar12 & 0xfffffff) >> 0x15) * 4) * 2) >> 2;
      uVar18 = uVar17 + uVar4;
      uVar17 = (uVar4 ^ uVar18 ^ uVar17) & 0x10820;
      uVar4 = uVar17 >> 5;
      uVar2 = (ushort)uVar17;
      uVar1 = uVar2 - ((short)uVar4 - (short)((uVar4 & 0x40) >> 1));
      iVar13 = iVar13 + -1;
      uVar23 = uVar23 + iVar14;
      *psVar7 = ((ushort)uVar18 | uVar1) - (uVar2 & ~uVar1);
      uVar12 = uVar12 + iVar19;
      psVar7 = psVar7 + 1;
    } while (-1 < iVar13);
    return;
  }
  iVar5 = param_1[10];
  psVar7 = (short *)param_1[1];
  do {
    uVar4 = uVar10 >> 0xc;
    uVar17 = uVar9 & uVar15;
    uVar10 = uVar10 + iVar22;
    uVar9 = uVar9 + iVar11;
    uVar4 = (uint)*(ushort *)
                   (iVar20 + ((uVar16 & 0xf800000) >> 0xe) +
                   (uint)*(byte *)(iVar21 + (uVar15 & uVar4 | uVar17 >> 0x14)) * 2);
    iVar13 = iVar13 + -1;
    uVar18 = uVar3 & *(ushort *)
                      (iVar8 + *(int *)(iVar6 + (uVar23 >> 0xe & 0x3f80 |
                                                (uVar12 & 0xfffffff) >> 0x15) * 4) * 2) >> 2;
    uVar17 = uVar18 + uVar4;
    uVar18 = (uVar4 ^ uVar17 ^ uVar18) & 0x10820;
    uVar4 = uVar18 >> 5;
    uVar2 = (ushort)uVar18;
    uVar1 = uVar2 - ((short)uVar4 - (short)((uVar4 & 0x40) >> 1));
    uVar23 = uVar23 + iVar14;
    uVar12 = uVar12 + iVar19;
    *psVar7 = ((ushort)uVar17 | uVar1) - (uVar2 & ~uVar1);
    uVar16 = uVar16 + iVar5;
    psVar7 = psVar7 + 1;
  } while (-1 < iVar13);
  return;
}



// Address: 4a028d58

void FUN_4a028d58(int *param_1)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  short *psVar12;
  short *psVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  bool bVar27;
  
  uVar6 = DAT_4a029024;
  iVar8 = *(int *)PTR_DAT_4a02901c;
  iVar10 = *(int *)(PTR_LAB_4a029020 + 0x40);
  psVar12 = (short *)param_1[1];
  iVar15 = *param_1 + -1;
  uVar9 = param_1[2];
  uVar11 = param_1[3];
  iVar24 = param_1[4];
  iVar25 = param_1[5];
  puVar1 = (uint *)(param_1 + 0xb);
  puVar2 = (uint *)(param_1 + 0xd);
  iVar16 = param_1[0xc];
  iVar20 = param_1[0xe];
  uVar18 = param_1[9];
  uVar17 = param_1[6];
  iVar21 = param_1[7];
  iVar23 = param_1[8];
  bVar27 = (uVar18 & 0x80000000) == 0;
  if (bVar27) {
    param_1 = (int *)param_1[10];
  }
  uVar26 = (*puVar1 & 0xfff0ffff) << 0xc;
  uVar14 = (*puVar2 & 0xfff0ffff) << 0xc;
  if (!bVar27) {
    do {
      bVar3 = *(byte *)(iVar21 + (uVar17 & uVar11 >> 0xc | (uVar9 & uVar17) >> 0x15));
      if ((bool)((byte)((uVar9 & uVar17) >> 0x14) & 1)) {
        bVar3 = bVar3 >> 4;
      }
      while( true ) {
        uVar11 = uVar11 + iVar25;
        uVar9 = uVar9 + iVar24;
        if ((bVar3 & 0xf) == 0) break;
        uVar7 = (uint)*(ushort *)(iVar23 + ((uVar18 & 0xf800000) >> 0x12) + (bVar3 & 0xf) * 2);
        uVar22 = uVar6 & *(ushort *)
                          (iVar10 + *(int *)(iVar8 + (uVar26 >> 0xe & 0x3f80 |
                                                     (uVar14 & 0xfffffff) >> 0x15) * 4) * 2) >> 2;
        uVar19 = uVar22 + uVar7;
        uVar22 = (uVar7 ^ uVar19 ^ uVar22) & 0x10820;
        uVar7 = uVar22 >> 5;
        uVar5 = (ushort)uVar22;
        uVar4 = uVar5 - ((short)uVar7 - (short)((uVar7 & 0x40) >> 1));
        iVar15 = iVar15 + -1;
        uVar26 = uVar26 + iVar16;
        psVar13 = psVar12 + 1;
        *psVar12 = ((ushort)uVar19 | uVar4) - (uVar5 & ~uVar4);
        uVar14 = uVar14 + iVar20;
        if (iVar15 < 0) {
          return;
        }
        bVar3 = *(byte *)(iVar21 + (uVar17 & uVar11 >> 0xc | (uVar9 & uVar17) >> 0x15));
        psVar12 = psVar13;
        if ((bool)((byte)((uVar9 & uVar17) >> 0x14) & 1)) {
          bVar3 = bVar3 >> 4;
        }
      }
      iVar15 = iVar15 + -1;
      uVar26 = uVar26 + iVar16;
      psVar12 = psVar12 + 1;
      uVar14 = uVar14 + iVar20;
      if (iVar15 < 0) {
        return;
      }
    } while( true );
  }
  do {
    bVar3 = *(byte *)(iVar21 + (uVar17 & uVar11 >> 0xc | (uVar9 & uVar17) >> 0x15));
    if ((bool)((byte)((uVar9 & uVar17) >> 0x14) & 1)) {
      bVar3 = bVar3 >> 4;
    }
    while( true ) {
      uVar11 = uVar11 + iVar25;
      uVar9 = uVar9 + iVar24;
      if ((bVar3 & 0xf) == 0) break;
      uVar7 = (uint)*(ushort *)(iVar23 + ((uVar18 & 0xf800000) >> 0x12) + (bVar3 & 0xf) * 2);
      iVar15 = iVar15 + -1;
      uVar19 = uVar6 & *(ushort *)
                        (iVar10 + *(int *)(iVar8 + (uVar26 >> 0xe & 0x3f80 |
                                                   (uVar14 & 0xfffffff) >> 0x15) * 4) * 2) >> 2;
      uVar22 = uVar19 + uVar7;
      uVar19 = (uVar7 ^ uVar22 ^ uVar19) & 0x10820;
      uVar7 = uVar19 >> 5;
      uVar5 = (ushort)uVar19;
      uVar4 = uVar5 - ((short)uVar7 - (short)((uVar7 & 0x40) >> 1));
      uVar26 = uVar26 + iVar16;
      uVar14 = uVar14 + iVar20;
      psVar13 = psVar12 + 1;
      *psVar12 = ((ushort)uVar22 | uVar4) - (uVar5 & ~uVar4);
      uVar18 = uVar18 + (int)param_1;
      if (iVar15 < 0) {
        return;
      }
      bVar3 = *(byte *)(iVar21 + (uVar17 & uVar11 >> 0xc | (uVar9 & uVar17) >> 0x15));
      psVar12 = psVar13;
      if ((bool)((byte)((uVar9 & uVar17) >> 0x14) & 1)) {
        bVar3 = bVar3 >> 4;
      }
    }
    iVar15 = iVar15 + -1;
    uVar26 = uVar26 + iVar16;
    psVar12 = psVar12 + 1;
    uVar14 = uVar14 + iVar20;
    uVar18 = uVar18 + (int)param_1;
    if (iVar15 < 0) {
      return;
    }
  } while( true );
}



// Address: 4a029028

void FUN_4a029028(int *param_1)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  short *psVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  bool bVar26;
  
  uVar6 = DAT_4a0292e8;
  iVar8 = *(int *)PTR_DAT_4a0292e0;
  iVar10 = *(int *)(PTR_LAB_4a0292e4 + 0x40);
  psVar12 = (short *)param_1[1];
  iVar14 = *param_1 + -1;
  uVar9 = param_1[2];
  uVar11 = param_1[3];
  iVar22 = param_1[4];
  iVar24 = param_1[5];
  uVar17 = param_1[9];
  puVar1 = (uint *)(param_1 + 0xb);
  puVar2 = (uint *)(param_1 + 0xd);
  iVar15 = param_1[0xc];
  iVar19 = param_1[0xe];
  uVar16 = param_1[6];
  iVar20 = param_1[8];
  iVar23 = param_1[7];
  bVar26 = (uVar17 & 0x80000000) == 0;
  if (bVar26) {
    param_1 = (int *)param_1[10];
  }
  uVar25 = (*puVar1 & 0xfff0ffff) << 0xc;
  uVar13 = (*puVar2 & 0xfff0ffff) << 0xc;
  if (!bVar26) {
    do {
      bVar3 = *(byte *)(iVar23 + (uVar16 & uVar11 >> 0xc | (uVar9 & uVar16) >> 0x14));
      while( true ) {
        uVar11 = uVar11 + iVar24;
        uVar9 = uVar9 + iVar22;
        if (bVar3 == 0) break;
        uVar7 = (uint)*(ushort *)(iVar20 + ((uVar17 & 0xf800000) >> 0xe) + (uint)bVar3 * 2);
        uVar21 = uVar6 & *(ushort *)
                          (iVar10 + *(int *)(iVar8 + (uVar25 >> 0xe & 0x3f80 |
                                                     (uVar13 & 0xfffffff) >> 0x15) * 4) * 2) >> 2;
        uVar18 = uVar21 + uVar7;
        uVar21 = (uVar7 ^ uVar18 ^ uVar21) & 0x10820;
        uVar7 = uVar21 >> 5;
        uVar5 = (ushort)uVar21;
        uVar4 = uVar5 - ((short)uVar7 - (short)((uVar7 & 0x40) >> 1));
        iVar14 = iVar14 + -1;
        uVar25 = uVar25 + iVar15;
        *psVar12 = ((ushort)uVar18 | uVar4) - (uVar5 & ~uVar4);
        uVar13 = uVar13 + iVar19;
        if (iVar14 < 0) {
          return;
        }
        bVar3 = *(byte *)(iVar23 + (uVar16 & uVar11 >> 0xc | (uVar9 & uVar16) >> 0x14));
        psVar12 = psVar12 + 1;
      }
      iVar14 = iVar14 + -1;
      uVar25 = uVar25 + iVar15;
      psVar12 = psVar12 + 1;
      uVar13 = uVar13 + iVar19;
      if (iVar14 < 0) {
        return;
      }
    } while( true );
  }
  do {
    bVar3 = *(byte *)(iVar23 + (uVar16 & uVar11 >> 0xc | (uVar9 & uVar16) >> 0x14));
    while( true ) {
      uVar11 = uVar11 + iVar24;
      uVar9 = uVar9 + iVar22;
      if (bVar3 == 0) break;
      uVar7 = (uint)*(ushort *)(iVar20 + ((uVar17 & 0xf800000) >> 0xe) + (uint)bVar3 * 2);
      iVar14 = iVar14 + -1;
      uVar18 = uVar6 & *(ushort *)
                        (iVar10 + *(int *)(iVar8 + (uVar25 >> 0xe & 0x3f80 |
                                                   (uVar13 & 0xfffffff) >> 0x15) * 4) * 2) >> 2;
      uVar21 = uVar18 + uVar7;
      uVar18 = (uVar7 ^ uVar21 ^ uVar18) & 0x10820;
      uVar7 = uVar18 >> 5;
      uVar5 = (ushort)uVar18;
      uVar4 = uVar5 - ((short)uVar7 - (short)((uVar7 & 0x40) >> 1));
      uVar25 = uVar25 + iVar15;
      uVar13 = uVar13 + iVar19;
      *psVar12 = ((ushort)uVar21 | uVar4) - (uVar5 & ~uVar4);
      uVar17 = uVar17 + (int)param_1;
      if (iVar14 < 0) {
        return;
      }
      bVar3 = *(byte *)(iVar23 + (uVar16 & uVar11 >> 0xc | (uVar9 & uVar16) >> 0x14));
      psVar12 = psVar12 + 1;
    }
    iVar14 = iVar14 + -1;
    uVar25 = uVar25 + iVar15;
    psVar12 = psVar12 + 1;
    uVar13 = uVar13 + iVar19;
    uVar17 = uVar17 + (int)param_1;
    if (iVar14 < 0) {
      return;
    }
  } while( true );
}



// Address: 4a0294d4

undefined4 * FUN_4a0294d4(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0x3f800000;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0x3f800000;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0x3f800000;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f800000;
  return param_1 + 0x10;
}



// Address: 4a029dfc

undefined4 FUN_4a029dfc(void)

{
  FUN_4a00add8();
  return 0;
}



// Address: 4a029e0c

/* WARNING: Removing unreachable block (ram,0x4a03c04c) */
/* WARNING: Removing unreachable block (ram,0x4a03c058) */

void FUN_4a029e0c(void)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  int unaff_r4;
  uint unaff_r6;
  uint uVar11;
  int unaff_r7;
  int iVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  
  puVar4 = PTR_DAT_4a029e78;
  iVar5 = *(int *)PTR_DAT_4a029e78;
  if (*(int *)(iVar5 + 0x398) != *(int *)(iVar5 + 0x390)) {
    FUN_4a054f5c(*(int *)(iVar5 + 0x39c) + *(int *)(iVar5 + 0x3ac) * 4 + -4,0);
    *(undefined4 *)(*(int *)puVar4 + 0x398) = *(undefined4 *)(*(int *)puVar4 + 0x390);
    return;
  }
  if (*(int *)(iVar5 + 0x360) == 0) {
    return;
  }
  uVar6 = *(uint *)(iVar5 + 0x51c);
  puVar10 = *(uint **)(PTR_LAB_4a0466b0 + 0x40);
  uVar11 = *(uint *)(PTR_LAB_4a0466b0 + 0x2c);
  iVar5 = *(int *)(PTR_LAB_4a0466b0 + 0x30);
  iVar12 = *(int *)(PTR_LAB_4a0466b0 + 0x34);
  iVar7 = *(int *)(PTR_LAB_4a0466b0 + 0x48);
  bVar1 = *(byte *)(iVar7 + ((uVar6 & 0xffffff) >> 0x13));
  uVar14 = (uint)*(byte *)(iVar7 + ((uVar6 & 0xffff) >> 0xb));
  bVar2 = *(byte *)(iVar7 + ((uVar6 & 0xff) >> 3));
  if (PTR_LAB_4a0466b0[0x46] == '\x02') {
    uVar14 = (uint)(bVar1 >> 1) | uVar14 << 5;
    uVar6 = (uint)(bVar2 >> 1) << 0xb;
    uVar13 = uVar14 | uVar6 & 0xfffcffff;
    uVar6 = uVar13 | (uVar14 | uVar6) << 0x10;
    if (iVar5 != 0) {
      do {
        iVar5 = iVar5 + -1;
        bVar15 = ((uint)puVar10 & 3) != 0;
        uVar14 = uVar11;
        if (bVar15) {
          uVar14 = uVar11 - 1;
        }
        iVar7 = (int)uVar14 >> 4;
        puVar8 = puVar10;
        if (bVar15) {
          puVar8 = (uint *)((int)puVar10 + 2);
        }
        uVar3 = (undefined2)uVar13;
        if (bVar15) {
          *(undefined2 *)puVar10 = uVar3;
        }
        puVar9 = puVar8;
        switch((int)uVar14 >> 1 & 7) {
        case 0:
          while (bVar15 = iVar7 != 0, iVar7 = iVar7 + -1, puVar8 = puVar9, bVar15) {
            puVar8 = puVar9 + 1;
            *puVar9 = uVar6;
switchD_4a046550_caseD_7:
            puVar9 = puVar8 + 1;
            *puVar8 = uVar6;
switchD_4a046550_caseD_6:
            puVar8 = puVar9 + 1;
            *puVar9 = uVar6;
switchD_4a046550_caseD_5:
            puVar9 = puVar8 + 1;
            *puVar8 = uVar6;
switchD_4a046550_caseD_4:
            puVar8 = puVar9 + 1;
            *puVar9 = uVar6;
switchD_4a046550_caseD_3:
            puVar9 = puVar8 + 1;
            *puVar8 = uVar6;
switchD_4a046550_caseD_2:
            puVar8 = puVar9 + 1;
            *puVar9 = uVar6;
switchD_4a046550_caseD_1:
            puVar9 = puVar8 + 1;
            *puVar8 = uVar6;
          }
          break;
        case 1:
          goto switchD_4a046550_caseD_1;
        case 2:
          goto switchD_4a046550_caseD_2;
        case 3:
          goto switchD_4a046550_caseD_3;
        case 4:
          goto switchD_4a046550_caseD_4;
        case 5:
          goto switchD_4a046550_caseD_5;
        case 6:
          goto switchD_4a046550_caseD_6;
        case 7:
          goto switchD_4a046550_caseD_7;
        }
        if ((uVar14 & 1) != 0) {
          *(undefined2 *)puVar8 = uVar3;
        }
        puVar10 = (uint *)((int)puVar10 + iVar12);
      } while (iVar5 != 0);
      return;
    }
    return;
  }
  iVar7 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar7 = unaff_r4;
    uVar11 = unaff_r6;
    iVar12 = unaff_r7;
  }
  uVar6 = (uint)bVar1 << 2 | uVar14 << 10 | (uint)bVar2 << 0x12;
  if (iVar5 != 0) {
    do {
      puVar8 = puVar10;
      uVar14 = uVar11;
      if (((uint)puVar10 & 7) != 0) {
        puVar8 = puVar10 + 1;
        uVar14 = uVar11 - 1;
        *puVar10 = uVar6;
      }
      iVar5 = (int)uVar14 >> 4;
      switch((int)uVar14 >> 1 & 7) {
      case 0:
        while (bVar15 = iVar5 != 0, iVar5 = iVar5 + -1, bVar15) {
          *puVar8 = uVar6;
          puVar8[1] = uVar6;
          puVar8 = puVar8 + 2;
switchD_4a046604_caseD_7:
          *puVar8 = uVar6;
          puVar8[1] = uVar6;
          puVar8 = puVar8 + 2;
switchD_4a046604_caseD_6:
          *puVar8 = uVar6;
          puVar8[1] = uVar6;
          puVar8 = puVar8 + 2;
switchD_4a046604_caseD_5:
          *puVar8 = uVar6;
          puVar8[1] = uVar6;
          puVar8 = puVar8 + 2;
switchD_4a046604_caseD_4:
          *puVar8 = uVar6;
          puVar8[1] = uVar6;
          puVar8 = puVar8 + 2;
switchD_4a046604_caseD_3:
          *puVar8 = uVar6;
          puVar8[1] = uVar6;
          puVar8 = puVar8 + 2;
switchD_4a046604_caseD_2:
          *puVar8 = uVar6;
          puVar8[1] = uVar6;
          puVar8 = puVar8 + 2;
switchD_4a046604_caseD_1:
          *puVar8 = uVar6;
          puVar8[1] = uVar6;
          puVar8 = puVar8 + 2;
        }
        break;
      case 1:
        goto switchD_4a046604_caseD_1;
      case 2:
        goto switchD_4a046604_caseD_2;
      case 3:
        goto switchD_4a046604_caseD_3;
      case 4:
        goto switchD_4a046604_caseD_4;
      case 5:
        goto switchD_4a046604_caseD_5;
      case 6:
        goto switchD_4a046604_caseD_6;
      case 7:
        goto switchD_4a046604_caseD_7;
      }
      if ((uVar14 & 1) != 0) {
        *puVar8 = uVar6;
      }
      bVar15 = iVar7 != 0;
      iVar7 = iVar7 + -1;
      puVar10 = (uint *)((int)puVar10 + iVar12);
    } while (bVar15);
    return;
  }
  return;
}



// Address: 4a029e80

void FUN_4a029e80(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  void *pvVar6;
  undefined4 uVar7;
  int iVar8;
  int local_1c;
  int local_18;
  int local_14;
  
  thunk_FUN_4a00ae50(7,0);
  if (*PTR_DAT_4a02a060 != '\0') {
    thunk_FUN_4a00ae50(0xe,1);
  }
  local_14 = 1;
  host_s3eConfigGetInt_arm(&DAT_4a02a074,s_GLErrorChecking_4a02a064,&local_14);
  *PTR_DAT_4a02a078 = local_14 != 0;
  uVar3 = host_s3eGLGetInt_arm(0);
  puVar2 = PTR_DAT_4a02a080;
  puVar1 = PTR_DAT_4a02a07c;
  iVar8 = *(int *)PTR_DAT_4a02a07c;
  *(uint *)(iVar8 + 0x5b0) = uVar3;
  if (uVar3 >> 8 == 1) {
    iVar4 = 2;
  }
  else {
    iVar4 = 3;
  }
  *(int *)(iVar8 + 0xc) = iVar4;
  puVar5 = PTR_FUN_4a150b60_1_4a02a084;
  if (iVar4 == 2) {
    puVar5 = PTR_FUN_4a02a088;
  }
  *(undefined **)(puVar2 + 4) = puVar5;
  if (*PTR_DAT_4a02a08c != '\0') {
    pvVar6 = host_glGetString_arm(0x1f01);
    iVar8 = thunk_FUN_4a0015c0(pvVar6,&DAT_4a02a090);
    if ((iVar8 != 0) && (*(int *)(*(int *)puVar1 + 0xc) == 2)) {
      puVar2[1] = 1;
    }
  }
  uVar7 = thunk_FUN_4a149130(0xc,*(undefined4 *)(*(int *)puVar1 + 0x3b4),PTR_LAB_4a02a098,0);
  puVar2 = PTR_LAB_4a02a098;
  iVar8 = *(int *)puVar1;
  *(undefined4 *)(iVar8 + 0x4f4) = uVar7;
  uVar7 = thunk_FUN_4a149130(0xc,*(undefined4 *)(iVar8 + 0x3b8),puVar2,0);
  *(undefined4 *)(*(int *)puVar1 + 0x4f8) = uVar7;
  FUN_4a049dc8();
  host_s3eConfigGetInt_arm(&DAT_4a02a074,s_GLMipmapOffset_4a02a0a0,PTR_DAT_4a02a09c);
  if (*(int *)(*(int *)puVar1 + 0xc) == 3) {
    FUN_4a04f9d8();
  }
  FUN_4a047a58();
  local_18 = 0;
  host_s3eConfigGetInt_arm(&DAT_4a02a074,s_FixedPointTextureMatrix_4a02a0b0,&local_18);
  pvVar6 = host_glGetString_arm(0x1f02);
  if ((local_18 != 0) ||
     ((pvVar6 != (void *)0x0 && (iVar8 = thunk_FUN_4a0015c0(pvVar6,&DAT_4a02a0c8), iVar8 != 0)))) {
    puVar2 = PTR_DAT_4a02a0cc;
    uVar3 = 0;
    do {
      iVar8 = uVar3 * 0x4c;
      uVar3 = uVar3 + 1;
      puVar2[iVar8 + 0x49] = 1;
    } while (uVar3 < 2);
  }
  local_1c = 0;
  host_s3eConfigGetInt_arm(&DAT_4a02a074,s_GL2FlatShading_4a02a0d0,&local_1c);
  if (local_1c != 0) {
    *(uint *)(*(int *)puVar1 + 4) = *(uint *)(*(int *)puVar1 + 4) | 0x8000000;
    return;
  }
  return;
}



// Address: 4a02a0e4

void FUN_4a02a0e4(void)

{
  undefined *puVar1;
  int iVar2;
  uint *puVar3;
  uint uStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  int local_18;
  int local_14;
  
  puVar1 = PTR_DAT_4a02a270;
  puVar3 = *(uint **)PTR_DAT_4a02a270;
  puVar3[3] = 1;
  iVar2 = host_s3eConfigGetInt_arm(&DAT_4a02a288,s_PaletteSaturation_4a02a274,&local_14);
  if ((iVar2 == 0) && (local_14 != 0)) {
    *puVar3 = *puVar3 | 0x10000;
  }
  iVar2 = host_s3eConfigGetInt_arm(&DAT_4a02a288,s_PaletteTintByAmbientColour_4a02a28c,&local_18);
  if ((iVar2 == 0) && (local_18 != 0)) {
    *puVar3 = *puVar3 | 0x400000;
  }
  FUN_4a035fc4();
  if ((**(uint **)puVar1 & 0x10) == 0) {
    return;
  }
  if (*(int *)PTR_DAT_4a02a2a8 != 1) goto LAB_4a02a250;
  thunk_FUN_4a161570(0x5c);
  FUN_4a0a6be0();
  iVar2 = host_s3eConfigGetInt_arm(&DAT_4a02a288,s_PolyBufferSize_4a02a2ac,&iStack_1c);
  if (iVar2 != 0) {
    iStack_1c = 0x8000;
  }
  iVar2 = host_s3eConfigGetInt_arm(&DAT_4a02a288,s_PolyOTSize_4a02a2bc,&uStack_20);
  if (iVar2 != 0) {
    uStack_20 = 0x1000;
  }
  iVar2 = host_s3eConfigGetInt_arm(&DAT_4a02a288,s_ZDepthOfsSafety_4a02a2c8,&uStack_28);
  if (iVar2 == 0) {
LAB_4a02a1fc:
    uStack_24 = 0;
  }
  else {
    uStack_28 = 0;
    iVar2 = host_s3eConfigGetInt_arm(&DAT_4a02a288,s_PolyOTSizeSafety_4a02a2d8,&uStack_24);
    if (iVar2 != 0) goto LAB_4a02a1fc;
  }
  puVar3[0xf8] = uStack_24;
  puVar3[0xf9] = uStack_28;
  iVar2 = host_s3eConfigGetInt_arm(&DAT_4a02a288,s_OTBucketShift_4a02a2ec,puVar3 + 0xfa);
  if (iVar2 != 0) {
    puVar3[0xfa] = 0xffffffff;
  }
  puVar3[0xe4] = 0;
  puVar3[0xe7] = 0;
  FUN_4a050d48(iStack_1c >> 2,uStack_20,*(undefined4 *)(*(int *)puVar1 + 0x3b4),
               *(undefined4 *)(*(int *)puVar1 + 0x3b8));
LAB_4a02a250:
  FUN_4a040f70();
  FUN_4a02b1c0((int)*(short *)(*(int *)puVar1 + 0x518));
  return;
}



// Address: 4a02a2fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_4a02a2fc(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  uint local_11c;
  undefined4 local_118;
  byte local_114;
  undefined1 auStack_110 [256];
  
  uVar1 = 0;
  for (iVar4 = 0; iVar3 = *(int *)(param_2 + iVar4 * 4), iVar3 != 0; iVar4 = iVar4 + 1) {
    uVar1 = FUN_4a02b20c(iVar3,uVar1);
  }
  FUN_4a000d18(auStack_110,s_shader_bin__08x_bin_4a02a3b4,uVar1);
  local_120 = 0;
  local_11c = 0;
  local_118 = 0;
  local_114 = local_114 & 0xfc;
  FUN_4a16fbd4(&local_120,0);
  for (uVar2 = 0; uVar2 < local_11c; uVar2 = uVar2 + 1) {
  }
  local_11c = 0;
  iVar4 = FUN_4a09d98c(&local_124,auStack_110,1);
  if (iVar4 == 0) {
    FUN_4a008004(s_Could_not_load_shader_binary__s_4a02a3c8,auStack_110);
    iVar4 = host_s3eDebugIsDebuggerPresent_thumb();
    if (iVar4 != 0) {
      _DAT_fffffff4 = 0;
    }
  }
  else {
    local_128 = param_1;
    FUN_4a150a00(1,&local_128,local_124,local_120);
  }
  for (uVar2 = 0; uVar2 < local_11c; uVar2 = uVar2 + 1) {
  }
  if ((local_114 & 1) == 0) {
    FUN_4a0a6f48(local_120,1);
  }
  return;
}



// Address: 4a02a3e8

void FUN_4a02a3e8(int *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_4a02a418;
  if (*param_1 == 0) {
    FUN_4a1616bc(*(undefined4 *)PTR_DAT_4a02a418,0xffffffff);
    if (*param_1 == 0) {
      FUN_4a15f34c(param_1,0);
    }
    FUN_4a161724(*(undefined4 *)puVar1);
  }
  return;
}



// Address: 4a02a41c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_4a02a41c(uint param_1,uint param_2,uint *param_3,uint param_4)

{
  ushort uVar1;
  undefined *puVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  ushort *puVar14;
  int *piVar15;
  char *pcVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  uint local_264;
  uint local_260;
  uint local_25c;
  uint local_258;
  uint local_254;
  uint local_250;
  uint local_24c [64];
  int aiStack_14c [64];
  uint local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint *local_2c;
  uint local_28;
  
  local_28 = param_4;
  local_2c = param_3;
  local_30 = param_2;
  uStack_34 = param_1;
  local_44 = param_1 & 1;
  local_48 = (param_1 & 2) >> 1;
  local_4c = (param_1 & 4) >> 2;
  pcVar16 = *(char **)PTR_DAT_4a02ae90;
  local_250 = 1;
  uVar13 = (param_1 & 8) >> 3;
  local_3c = local_44 & ~uVar13;
  local_38 = local_48 & local_44 & ~uVar13;
  do {
    if ((local_28 & local_250) != 0) {
      iVar20 = local_30 - 1;
      piVar15 = (int *)PTR_DAT_4a02ae94;
      piVar8 = aiStack_14c;
      puVar11 = local_2c;
      puVar12 = local_24c;
      do {
        uVar13 = *puVar11;
        *piVar8 = *piVar15;
        iVar20 = iVar20 + -1;
        *puVar12 = uVar13;
        piVar15 = piVar15 + 1;
        piVar8 = piVar8 + 1;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      } while (-1 < iVar20);
      local_28 = 0;
      local_254 = 0x3f;
      local_25c = 0;
      bVar22 = (*local_2c & local_250) == 0;
      if (bVar22) {
        local_28 = local_24c[0];
        local_254 = local_24c[0] & 0x3f;
      }
      local_258 = (uint)bVar22;
      local_260 = 1;
      if (0 < (int)local_30) {
        do {
          local_264 = local_260;
          if (local_260 == local_30) {
            local_264 = 0;
          }
          if ((local_250 & (local_24c[local_25c] ^ local_24c[local_264])) != 0) {
            uVar7 = local_264;
            uVar13 = local_25c;
            if ((local_24c[local_25c] & local_250) != 0) {
              uVar7 = local_25c;
              uVar13 = local_264;
            }
            iVar9 = aiStack_14c[uVar13];
            iVar20 = aiStack_14c[uVar7];
            local_40 = *(int *)(iVar9 + 8);
            uVar18 = *(int *)(iVar20 + 8) - local_40;
            iVar21 = *(int *)(iVar9 + 0x10);
            iVar10 = *(int *)(iVar9 + 0xc);
            iVar4 = *(int *)(iVar20 + 0x10) - iVar21;
            uVar19 = *(int *)(iVar20 + 0xc) - iVar10;
            piVar15 = (int *)(pcVar16 + 8);
            if (local_250 == 4) {
              iVar20 = -uVar18;
              if (4 < iVar20 + 2U) {
                uVar5 = local_40 - 0x1000;
                uVar5 = FUN_4a00080c(uVar5 * 0x10000,((int)uVar5 >> 0x1f) << 0x10 | uVar5 >> 0x10,
                                     iVar20,iVar20 >> 0x1f);
                iVar20 = (int)((longlong)(int)uVar5 * (longlong)(int)uVar18);
                iVar20 = FUN_4a0008b0(-iVar20,-((int)((ulonglong)
                                                      ((longlong)(int)uVar5 * (longlong)(int)uVar18)
                                                     >> 0x20) + (uint)(iVar20 != 0)),0x10);
                *piVar15 = local_40 - iVar20;
                bVar22 = (int)(uVar5 ^ uVar19) < 0;
                uVar18 = uVar5;
                if (bVar22) {
                  uVar18 = -uVar5;
                }
                uVar18 = (uint)((longlong)(int)uVar18 * (longlong)(int)uVar19) >> 0x10 |
                         (int)((ulonglong)((longlong)(int)uVar18 * (longlong)(int)uVar19) >> 0x20)
                         << 0x10;
                if (bVar22) {
                  uVar18 = -uVar18;
                }
                *(uint *)(pcVar16 + 0xc) = uVar18 + *(int *)(iVar9 + 0xc);
                iVar20 = (int)((longlong)(int)uVar5 * (longlong)iVar4);
                iVar20 = FUN_4a0008b0(-iVar20,-((int)((ulonglong)
                                                      ((longlong)(int)uVar5 * (longlong)iVar4) >>
                                                     0x20) + (uint)(iVar20 != 0)),0x10);
                *(int *)(pcVar16 + 0x10) = *(int *)(iVar9 + 0x10) - iVar20;
                iVar20 = *(int *)(pcVar16 + 0xc);
                uVar3 = 0;
                if (iVar20 < 0x1001) {
                  if (iVar20 != -0x1000 && 0xfff < -iVar20) {
LAB_4a02a9dc:
                    uVar3 = 0x20;
                  }
                }
                else {
LAB_4a02a9c8:
                  uVar3 = 0x10;
                }
                goto LAB_4a02a800;
              }
            }
            else if ((int)local_250 < 5) {
              if (local_250 == 1) {
                uVar5 = *(int *)(*(int *)PTR_DAT_4a02ae98 + 0x2d0) * 0x40 - iVar21;
                uVar5 = FUN_4a00080c(uVar5 * 0x10000,((int)uVar5 >> 0x1f) << 0x10 | uVar5 >> 0x10,
                                     iVar4,iVar4 >> 0x1f);
                bVar22 = (int)(uVar5 ^ uVar18) < 0;
                uVar6 = uVar5;
                if (bVar22) {
                  uVar6 = -uVar5;
                }
                uVar18 = (uint)((longlong)(int)uVar6 * (longlong)(int)uVar18) >> 0x10 |
                         (int)((ulonglong)((longlong)(int)uVar6 * (longlong)(int)uVar18) >> 0x20) <<
                         0x10;
                if (bVar22) {
                  uVar18 = -uVar18;
                }
                *piVar15 = uVar18 + local_40;
                puVar2 = PTR_DAT_4a02ae98;
                bVar22 = (int)(uVar5 ^ uVar19) < 0;
                uVar18 = uVar5;
                if (bVar22) {
                  uVar18 = -uVar5;
                }
                uVar18 = (uint)((longlong)(int)uVar18 * (longlong)(int)uVar19) >> 0x10 |
                         (int)((ulonglong)((longlong)(int)uVar18 * (longlong)(int)uVar19) >> 0x20)
                         << 0x10;
                if (bVar22) {
                  uVar18 = -uVar18;
                }
                *(uint *)(pcVar16 + 0xc) = uVar18 + *(int *)(iVar9 + 0xc);
                *(int *)(pcVar16 + 0x10) = *(int *)(*(int *)puVar2 + 0x2d0) << 6;
                iVar20 = *piVar15;
                uVar3 = 0;
                if (iVar20 < 0x1001) {
                  if (iVar20 != -0x1000 && 0xfff < -iVar20) {
                    uVar3 = 8;
                  }
                }
                else {
                  uVar3 = 4;
                }
                iVar20 = *(int *)(pcVar16 + 0xc);
                if (iVar20 < 0x1001) {
                  if (iVar20 != -0x1000 && 0xfff < -iVar20) {
LAB_4a02a814:
                    uVar3 = uVar3 | 0x20;
                  }
                }
                else {
LAB_4a02a668:
                  uVar3 = uVar3 | 0x10;
                }
LAB_4a02a800:
                *(ushort *)(pcVar16 + 0x14) = uVar3;
              }
              else {
                if (local_250 == 2) {
                  uVar5 = *(int *)(*(int *)PTR_DAT_4a02ae98 + 0x2d4) * 0x40 - iVar21;
                  uVar5 = FUN_4a00080c(uVar5 * 0x10000,((int)uVar5 >> 0x1f) << 0x10 | uVar5 >> 0x10,
                                       iVar4,iVar4 >> 0x1f);
                  *piVar15 = ((uint)((longlong)(int)uVar5 * (longlong)(int)uVar18) >> 0x10 |
                             (int)((ulonglong)((longlong)(int)uVar5 * (longlong)(int)uVar18) >> 0x20
                                  ) << 0x10) + local_40;
                  *(uint *)(pcVar16 + 0xc) =
                       ((int)((ulonglong)((longlong)(int)uVar5 * (longlong)(int)uVar19) >> 0x20) <<
                        0x10 | (uint)((longlong)(int)uVar5 * (longlong)(int)uVar19) >> 0x10) +
                       *(int *)(iVar9 + 0xc);
                  *(int *)(pcVar16 + 0x10) = *(int *)(*(int *)PTR_DAT_4a02ae98 + 0x2d4) << 6;
                  iVar20 = *piVar15;
                  uVar3 = 0;
                  if (iVar20 < 0x1001) {
                    if (iVar20 != -0x1000 && 0xfff < -iVar20) {
                      uVar3 = 8;
                    }
                  }
                  else {
                    uVar3 = 4;
                  }
                  iVar20 = *(int *)(pcVar16 + 0xc);
                  if (0x1000 < iVar20) goto LAB_4a02a668;
                  if (iVar20 != -0x1000 && 0xfff < -iVar20) goto LAB_4a02a814;
                  goto LAB_4a02a800;
                }
LAB_4a02a9e4:
                iVar20 = -uVar19;
                if (iVar20 + 2U < 5) goto LAB_4a02ad90;
                uVar5 = iVar10 + 0x1000;
                uVar5 = FUN_4a00080c(uVar5 * 0x10000,((int)uVar5 >> 0x1f) << 0x10 | uVar5 >> 0x10,
                                     iVar20,iVar20 >> 0x1f);
                bVar22 = (int)(uVar5 ^ uVar18) < 0;
                uVar6 = uVar5;
                if (bVar22) {
                  uVar6 = -uVar5;
                }
                uVar18 = (uint)((longlong)(int)uVar6 * (longlong)(int)uVar18) >> 0x10 |
                         (int)((ulonglong)((longlong)(int)uVar6 * (longlong)(int)uVar18) >> 0x20) <<
                         0x10;
                if (bVar22) {
                  uVar18 = -uVar18;
                }
                *piVar15 = uVar18 + local_40;
                iVar20 = (int)((longlong)(int)uVar5 * (longlong)(int)uVar19);
                iVar20 = FUN_4a0008b0(-iVar20,-((int)((ulonglong)
                                                      ((longlong)(int)uVar5 * (longlong)(int)uVar19)
                                                     >> 0x20) + (uint)(iVar20 != 0)),0x10);
                *(int *)(pcVar16 + 0xc) = *(int *)(iVar9 + 0xc) - iVar20;
                iVar20 = (int)((longlong)(int)uVar5 * (longlong)iVar4);
                iVar20 = FUN_4a0008b0(-iVar20,-((int)((ulonglong)
                                                      ((longlong)(int)uVar5 * (longlong)iVar4) >>
                                                     0x20) + (uint)(iVar20 != 0)),0x10);
                *(int *)(pcVar16 + 0x10) = *(int *)(iVar9 + 0x10) - iVar20;
                pcVar16[0x14] = '\0';
                pcVar16[0x15] = '\0';
              }
LAB_4a02aa9c:
              if (local_44 != 0) {
                *(short *)(pcVar16 + 0x18) =
                     *(short *)(aiStack_14c[uVar13] + 0x18) +
                     (short)(((int)*(short *)(aiStack_14c[uVar7] + 0x18) -
                             (int)*(short *)(aiStack_14c[uVar13] + 0x18)) * uVar5 >> 0x10);
                *(short *)(pcVar16 + 0x1a) =
                     *(short *)(aiStack_14c[uVar13] + 0x1a) +
                     (short)(((int)*(short *)(aiStack_14c[uVar7] + 0x1a) -
                             (int)*(short *)(aiStack_14c[uVar13] + 0x1a)) * uVar5 >> 0x10);
              }
              if (local_38 != 0) {
                *pcVar16 = *(byte *)aiStack_14c[uVar13] +
                           (char)(uVar5 * ((uint)*(byte *)aiStack_14c[uVar7] -
                                          (uint)*(byte *)aiStack_14c[uVar13]) >> 0x10);
              }
              if ((local_48 != 0) && (local_3c == 0)) {
                *pcVar16 = *(byte *)aiStack_14c[uVar13] +
                           (char)(uVar5 * ((uint)*(byte *)aiStack_14c[uVar7] -
                                          (uint)*(byte *)aiStack_14c[uVar13]) >> 0x10);
                pcVar16[1] = *(byte *)(aiStack_14c[uVar13] + 1) +
                             (char)(uVar5 * ((uint)*(byte *)(aiStack_14c[uVar7] + 1) -
                                            (uint)*(byte *)(aiStack_14c[uVar13] + 1)) >> 0x10);
                pcVar16[2] = *(byte *)(aiStack_14c[uVar13] + 2) +
                             (char)(uVar5 * ((uint)*(byte *)(aiStack_14c[uVar7] + 2) -
                                            (uint)*(byte *)(aiStack_14c[uVar13] + 2)) >> 0x10);
                pcVar16[3] = *(byte *)(aiStack_14c[uVar13] + 3) +
                             (char)(uVar5 * ((uint)*(byte *)(aiStack_14c[uVar7] + 3) -
                                            (uint)*(byte *)(aiStack_14c[uVar13] + 3)) >> 0x10);
              }
              if (local_4c != 0) {
                *(short *)(pcVar16 + 0x1c) =
                     *(short *)(aiStack_14c[uVar13] + 0x1c) +
                     (short)(((int)*(short *)(aiStack_14c[uVar7] + 0x1c) -
                             (int)*(short *)(aiStack_14c[uVar13] + 0x1c)) * uVar5 >> 0x10);
                *(short *)(pcVar16 + 0x1e) =
                     *(short *)(aiStack_14c[uVar13] + 0x1e) +
                     (short)(((int)*(short *)(aiStack_14c[uVar7] + 0x1e) -
                             (int)*(short *)(aiStack_14c[uVar13] + 0x1e)) * uVar5 >> 0x10);
              }
              uVar3 = *(ushort *)(pcVar16 + 0x14);
              uVar13 = uVar3 & 0x3d;
              if ((uVar3 & 0x3d) == 0) {
                uVar7 = uVar3 | 0x480;
                puVar14 = (ushort *)(pcVar16 + 4);
                *(ushort *)(pcVar16 + 0x14) = (ushort)uVar7;
                puVar2 = PTR_DAT_4a02ae98;
                if ((uVar7 & 0xbf) == 0x80) {
                  *(ushort *)(pcVar16 + 0x14) = (ushort)uVar7 & 0xff7f;
                  iVar20 = *(int *)puVar2;
                  if ((uVar7 & 0x400) == 0) {
                    uVar17 = *(undefined4 *)(pcVar16 + 0x10);
                    iVar4 = FUN_4a0015f0(*(int *)(pcVar16 + 8) << 0xb,uVar17);
                    uVar3 = (ushort)((uint)(*(int *)(iVar20 + 0x310) * iVar4 * 0x10) >> 0x10);
                    iVar4 = FUN_4a0015f0(*(int *)(pcVar16 + 0xc) << 0xb,uVar17);
                    uVar1 = (ushort)((uint)(*(int *)(iVar20 + 0x314) * iVar4 * 0x10) >> 0x10);
                  }
                  else {
                    uVar3 = (ushort)((uint)((*(int *)(iVar20 + 0x34c) * 8 + -1) *
                                            *(int *)(pcVar16 + 8) * 8) >> 0x10);
                    uVar1 = (ushort)((uint)(*(int *)(pcVar16 + 0xc) *
                                            (*(int *)(iVar20 + 0x350) * 8 + -1) * 8) >> 0x10);
                  }
                  iVar4 = *(int *)(iVar20 + 0x354);
                  if (iVar4 == 0) {
                    *puVar14 = uVar3;
                    *(ushort *)(pcVar16 + 6) = uVar1;
                  }
                  else if (iVar4 == 1) {
                    *puVar14 = ~uVar1;
                    *(ushort *)(pcVar16 + 6) = uVar3;
                  }
                  else {
                    if (iVar4 == 2) {
                      *puVar14 = ~uVar3;
                      uVar3 = uVar1;
                    }
                    else {
                      if (iVar4 != 3) goto LAB_4a02ad30;
                      *puVar14 = uVar1;
                    }
                    *(ushort *)(pcVar16 + 6) = ~uVar3;
                  }
LAB_4a02ad30:
                  *puVar14 = (short)*(undefined4 *)(iVar20 + 800) + *puVar14;
                  *(short *)(pcVar16 + 6) =
                       (short)*(undefined4 *)(iVar20 + 0x328) + *(short *)(pcVar16 + 6);
                }
              }
              local_28 = local_28 | uVar13;
              local_254 = local_254 & uVar13;
              local_2c[local_258] = uVar13;
              *(char **)(PTR_DAT_4a02ae94 + local_258 * 4) = pcVar16;
              pcVar16 = pcVar16 + 0x20;
              local_258 = local_258 + 1;
            }
            else if (local_250 == 8) {
              if (4 < uVar18 + 2) {
                uVar5 = -(local_40 + 0x1000);
                uVar5 = FUN_4a00080c((local_40 + 0x1000) * -0x10000,
                                     ((int)uVar5 >> 0x1f) << 0x10 | uVar5 >> 0x10,uVar18,
                                     (int)uVar18 >> 0x1f);
                iVar20 = (int)((longlong)(int)uVar5 * (longlong)(int)uVar18);
                iVar20 = FUN_4a0008b0(-iVar20,-((int)((ulonglong)
                                                      ((longlong)(int)uVar5 * (longlong)(int)uVar18)
                                                     >> 0x20) + (uint)(iVar20 != 0)),0x10);
                *piVar15 = local_40 - iVar20;
                bVar22 = (int)(uVar5 ^ uVar19) < 0;
                uVar18 = uVar5;
                if (bVar22) {
                  uVar18 = -uVar5;
                }
                uVar18 = (uint)((longlong)(int)uVar18 * (longlong)(int)uVar19) >> 0x10 |
                         (int)((ulonglong)((longlong)(int)uVar18 * (longlong)(int)uVar19) >> 0x20)
                         << 0x10;
                if (bVar22) {
                  uVar18 = -uVar18;
                }
                *(uint *)(pcVar16 + 0xc) = uVar18 + *(int *)(iVar9 + 0xc);
                iVar20 = (int)((longlong)(int)uVar5 * (longlong)iVar4);
                iVar20 = FUN_4a0008b0(-iVar20,-((int)((ulonglong)
                                                      ((longlong)(int)uVar5 * (longlong)iVar4) >>
                                                     0x20) + (uint)(iVar20 != 0)),0x10);
                *(int *)(pcVar16 + 0x10) = *(int *)(iVar9 + 0x10) - iVar20;
                iVar20 = *(int *)(pcVar16 + 0xc);
                uVar3 = 0;
                if (0x1000 < iVar20) goto LAB_4a02a9c8;
                if (iVar20 != -0x1000 && 0xfff < -iVar20) goto LAB_4a02a9dc;
                goto LAB_4a02a800;
              }
            }
            else {
              if (local_250 != 0x10) goto LAB_4a02a9e4;
              iVar20 = -uVar19;
              if (4 < iVar20 + 2U) {
                uVar5 = iVar10 - 0x1000;
                uVar5 = FUN_4a00080c(uVar5 * 0x10000,((int)uVar5 >> 0x1f) << 0x10 | uVar5 >> 0x10,
                                     iVar20,iVar20 >> 0x1f);
                bVar22 = (int)(uVar5 ^ uVar18) < 0;
                uVar6 = uVar5;
                if (bVar22) {
                  uVar6 = -uVar5;
                }
                uVar18 = (uint)((longlong)(int)uVar6 * (longlong)(int)uVar18) >> 0x10 |
                         (int)((ulonglong)((longlong)(int)uVar6 * (longlong)(int)uVar18) >> 0x20) <<
                         0x10;
                if (bVar22) {
                  uVar18 = -uVar18;
                }
                *piVar15 = uVar18 + local_40;
                iVar20 = FUN_4a0008b0((int)((longlong)(int)uVar5 * (longlong)(int)uVar19),
                                      (int)((ulonglong)
                                            ((longlong)(int)uVar5 * (longlong)(int)uVar19) >> 0x20),
                                      0x10);
                *(int *)(pcVar16 + 0xc) = iVar20 + *(int *)(iVar9 + 0xc);
                iVar20 = (int)((longlong)(int)uVar5 * (longlong)iVar4);
                iVar20 = FUN_4a0008b0(-iVar20,-((int)((ulonglong)
                                                      ((longlong)(int)uVar5 * (longlong)iVar4) >>
                                                     0x20) + (uint)(iVar20 != 0)),0x10);
                *(int *)(pcVar16 + 0x10) = *(int *)(iVar9 + 0x10) - iVar20;
                pcVar16[0x14] = '\0';
                pcVar16[0x15] = '\0';
                goto LAB_4a02aa9c;
              }
            }
          }
LAB_4a02ad90:
          if (local_264 == 0) {
            if ((local_254 != 0) || (local_258 == 0)) {
              return 0;
            }
            if (local_28 == 0) {
              return local_258;
            }
          }
          else {
            local_25c = local_264;
            uVar13 = local_24c[local_264];
            if ((local_250 & uVar13) == 0) {
              *(int *)(PTR_DAT_4a02ae94 + local_258 * 4) = aiStack_14c[local_264];
              local_2c[local_258] = uVar13;
              local_258 = local_258 + 1;
              local_28 = local_28 | local_24c[local_264];
              local_254 = local_24c[local_264] & local_254;
            }
          }
          local_260 = local_260 + 1;
        } while ((int)local_260 <= (int)local_30);
      }
      local_30 = local_258;
    }
    local_250 = local_250 * 2;
    if (local_250 == 0x40) {
      return local_30;
    }
  } while( true );
}



// Address: 4a02ae9c

undefined4 FUN_4a02ae9c(void)

{
  thunk_FUN_4a14f21c();
  return 0;
}



// Address: 4a02aeac

undefined * FUN_4a02aeac(int param_1)

{
  if ((param_1 != 0) && (param_1 - 4000U < 0x81)) {
    return PTR_DAT_4a02aec8 + (param_1 - 4000U) * 8;
  }
  return (undefined *)0x0;
}



// Address: 4a02aecc

undefined8 FUN_4a02aecc(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_1c;
  int local_18;
  undefined4 uStack_14;
  
  iVar1 = DAT_4a02aefc;
  local_1c = param_2;
  local_18 = param_3;
  uStack_14 = param_4;
  do {
    FUN_4a05a770(&local_1c,param_1);
    if (local_18 == param_2) {
      uVar2 = 1;
      goto LAB_4a02aee4;
    }
    param_1 = local_1c + param_1 + 0xc;
  } while (local_18 != iVar1);
  uVar2 = 0;
LAB_4a02aee4:
  return CONCAT44(local_1c,uVar2);
}



// Address: 4a02af00

void FUN_4a02af00(undefined4 param_1,ushort *param_2,ushort *param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  ushort *local_20;
  ushort *puStack_1c;
  undefined4 uStack_18;
  
  local_20 = param_2;
  puStack_1c = param_3;
  uStack_18 = param_4;
  FUN_4a142134(&local_20,param_1);
  if (((uint)local_20 & 0x380) < 0x181) {
    FUN_4a142134(&local_20,param_1);
    if (((uint)local_20 & 0x380) < 0x101) {
      uVar1 = *param_3;
      iVar2 = thunk_FUN_4a0066d8(((uVar1 & 0x3ff) >> 5) << 0x12,0x1f);
      *param_2 = (ushort)((uVar1 & 0x7c00) << 1) | (ushort)(iVar2 * 0x3f + 0x20000U >> 0xd) & 0xffe0
                 | uVar1 & 0x1f;
    }
    else {
      *(char *)param_2 = (char)param_3[1];
      *(undefined1 *)((int)param_2 + 1) = *(undefined1 *)((int)param_3 + 1);
      *(char *)(param_2 + 1) = (char)*param_3;
    }
  }
  else {
    *(char *)param_2 = (char)param_3[1];
    *(undefined1 *)((int)param_2 + 1) = *(undefined1 *)((int)param_3 + 1);
    *(char *)(param_2 + 1) = (char)*param_3;
    *(undefined1 *)((int)param_2 + 3) = *(undefined1 *)((int)param_3 + 3);
  }
  return;
}



// Address: 4a02af98

int FUN_4a02af98(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = thunk_FUN_4a1652fc(param_1,param_1 << 1,param_3,param_2 + DAT_4a02afc8);
  iVar1 = (int)((ulonglong)uVar2 >> 0x20);
  if (param_3 == (uint)uVar2 >> 0xc) {
    iVar1 = iVar1 * 3;
  }
  return iVar1;
}



// Address: 4a02afd0

int FUN_4a02afd0(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = 0;
  uVar2 = 0;
  iVar3 = 0x200000;
  uVar4 = 0x40000000;
  do {
    uVar5 = uVar4 + uVar2;
    if (uVar5 == 0) {
      return iVar1;
    }
    uVar2 = uVar2 >> 1;
    if (uVar5 <= param_1) {
      param_1 = param_1 - uVar5;
      iVar1 = iVar1 + iVar3;
      uVar2 = uVar2 | uVar4;
    }
    uVar4 = (int)uVar4 >> 2;
    iVar3 = iVar3 >> 1;
  } while (iVar3 != 0);
  return iVar1;
}



// Address: 4a02afd8

int FUN_4a02afd8(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = 0;
  uVar2 = 0;
  iVar3 = 0x200000;
  uVar4 = 0x40000000;
  do {
    uVar5 = uVar4 + uVar2;
    if (uVar5 == 0) {
      return iVar1;
    }
    uVar2 = uVar2 >> 1;
    if (uVar5 <= param_1) {
      param_1 = param_1 - uVar5;
      iVar1 = iVar1 + iVar3;
      uVar2 = uVar2 | uVar4;
    }
    uVar4 = (int)uVar4 >> 2;
    iVar3 = iVar3 >> 1;
  } while (iVar3 != 0);
  return iVar1;
}



// Address: 4a02b000

void FUN_4a02b000(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int *piVar2;
  
  puVar1 = PTR_DAT_4a02b060;
  if (*(int *)(PTR_DAT_4a02b060 + 8) != 0) {
    for (piVar2 = *(int **)(*(int *)(PTR_DAT_4a02b060 + 8) + 4); piVar2 != (int *)0x0;
        piVar2 = (int *)piVar2[1]) {
      FUN_4a1652ca(piVar2,param_1,param_2,*(undefined4 *)(*piVar2 + 8),param_4);
    }
  }
  FUN_4a1652c8(param_1,param_2,*(undefined4 *)(*param_1 + 8));
  if (*(int *)(puVar1 + 8) != 0) {
    for (piVar2 = *(int **)(*(int *)(puVar1 + 8) + 4); piVar2 != (int *)0x0;
        piVar2 = (int *)piVar2[1]) {
      FUN_4a1652ca(piVar2,param_1,param_2,*(undefined4 *)(*piVar2 + 0xc),param_4);
    }
  }
  return;
}



// Address: 4a02b008

void FUN_4a02b008(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int *piVar2;
  
  puVar1 = PTR_DAT_4a02b060;
  if (*(int *)(PTR_DAT_4a02b060 + 8) != 0) {
    for (piVar2 = *(int **)(*(int *)(PTR_DAT_4a02b060 + 8) + 4); piVar2 != (int *)0x0;
        piVar2 = (int *)piVar2[1]) {
      FUN_4a1652ca(piVar2,param_1,param_2,*(undefined4 *)(*piVar2 + 8),param_4);
    }
  }
  FUN_4a1652c8(param_1,param_2,*(undefined4 *)(*param_1 + 8));
  if (*(int *)(puVar1 + 8) != 0) {
    for (piVar2 = *(int **)(*(int *)(puVar1 + 8) + 4); piVar2 != (int *)0x0;
        piVar2 = (int *)piVar2[1]) {
      FUN_4a1652ca(piVar2,param_1,param_2,*(undefined4 *)(*piVar2 + 0xc),param_4);
    }
  }
  return;
}



// Address: 4a02b064

void FUN_4a02b064(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int in_r3;
  int local_10;
  
  puVar1 = PTR_DAT_4a02b118;
  iVar2 = *(int *)(PTR_DAT_4a02b118 + 0x1c);
  *(int *)(PTR_DAT_4a02b118 + 0x1c) = iVar2 + 1;
  if (iVar2 < 1) {
    local_10 = in_r3;
    thunk_FUN_4a161570(0x30);
    uVar3 = thunk_FUN_4a0a60b0();
    *(undefined4 *)(puVar1 + 4) = uVar3;
    thunk_FUN_4a161570(0x3c);
    uVar3 = FUN_4a09d87c();
    *(undefined4 *)(puVar1 + 8) = uVar3;
    FUN_4a0a6054(*(undefined4 *)(puVar1 + 4),0x200,0x14,1);
    FUN_4a09d6a0(*(undefined4 *)(puVar1 + 8),0x200,1);
    thunk_FUN_4a161570(0x3c);
    FUN_4a092090();
    uVar3 = FUN_4a03e420();
    FUN_4a03ba98(s_CIwGxFont_4a02b120,PTR_LAB_4a03e400_1_4a02b11c,uVar3);
    uVar3 = FUN_4a049dc0();
    FUN_4a03ba98(s_CIwGxFontTTFont_4a02b130,PTR_FUN_4a049c44_1_4a02b12c,uVar3);
    thunk_FUN_4a0548ac(PTR_FUN_4a049b10_1_4a02b140);
    *(undefined4 *)(puVar1 + 0x14) = 0;
    FUN_4a03f9f4(s_TextureMaxSize_4a02b144,puVar1 + 0x14);
    *(undefined4 *)(puVar1 + 0x18) = 0x100;
    FUN_4a03f9f4(s_CacheTextureMaxSize_4a02b154,puVar1 + 0x18);
    local_10 = 0;
    iVar2 = host_s3eConfigGetInt_thumb(s_GxFont_4a02b17c,s_EnableTTFKerning_4a02b168,&local_10);
    if (iVar2 == 0) {
      *puVar1 = local_10 != 0;
    }
  }
  return;
}



// Address: 4a02b1c0

void FUN_4a02b1c0(undefined2 param_1)

{
  FUN_4a033628();
  *(undefined2 *)(*(int *)PTR_DAT_4a02b1e4 + 0x518) = param_1;
  return;
}



// Address: 4a02b1e8

int FUN_4a02b1e8(byte *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_4a02b208;
  while( true ) {
    uVar2 = (uint)*param_1;
    param_1 = param_1 + 1;
    if (uVar2 == 0) break;
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 + 0x20;
    }
    iVar1 = iVar1 * 0x21 + uVar2;
  }
  return iVar1;
}



// Address: 4a02b20c

int FUN_4a02b20c(byte *param_1,int param_2)

{
  uint uVar1;
  
  while( true ) {
    uVar1 = (uint)*param_1;
    param_1 = param_1 + 1;
    if (uVar1 == 0) break;
    if (uVar1 - 0x41 < 0x1a) {
      uVar1 = uVar1 + 0x20;
    }
    param_2 = param_2 * 0x21 + uVar1;
  }
  return param_2;
}



// Address: 4a02b22c

void FUN_4a02b22c(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_DAT_4a02b290;
  if (*(int **)(PTR_DAT_4a02b290 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(PTR_DAT_4a02b290 + 4) + 4))();
    *(undefined4 *)(puVar1 + 4) = 0;
  }
  iVar2 = host_s3eGLGetInt_arm(0);
  if (iVar2 < 0x200) {
    thunk_FUN_4a161570(0x88);
    uVar3 = FUN_4a0bd708();
  }
  else {
    thunk_FUN_4a161570(0x84);
    uVar3 = FUN_4a0bdff0();
  }
  *(undefined4 *)(puVar1 + 4) = uVar3;
  return;
}



// Address: 4a02b60c

void FUN_4a02b60c(int *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  iVar4 = *param_1;
  puVar6 = (undefined4 *)param_1[1];
  iVar8 = iVar4 + -1;
  uVar5 = param_1[6];
  iVar10 = param_1[7];
  iVar11 = param_1[8];
  uVar14 = param_1[9];
  uVar9 = param_1[3];
  iVar12 = param_1[4];
  iVar13 = param_1[5];
  uVar17 = param_1[2];
  iVar3 = param_1[10];
  puVar7 = puVar6;
  if ((*(uint *)(PTR_LAB_4a02b868 + 0x4c) & 1) == 0) {
    if (((uint)puVar6 & 3) != 0) {
      uVar15 = uVar17 & uVar5;
      bVar1 = *(byte *)(iVar10 + (uVar5 & uVar9 >> 0xc | uVar15 >> 0x15));
      uVar17 = uVar17 + iVar12;
      if ((bool)((byte)(uVar15 >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      uVar15 = (uint)bVar1 * 0x10000000 + (uVar14 >> 0x17);
      if ((~uVar14 & 0x600000) == 0) {
        uVar15 = uVar15 + 1;
      }
      iVar8 = iVar4 + -2;
      uVar9 = uVar9 + iVar13;
      uVar14 = uVar14 + iVar3;
      puVar7 = (undefined4 *)((int)puVar6 + 2);
      *(undefined2 *)puVar6 = *(undefined2 *)(iVar11 + (uVar15 >> 0x1b | uVar15 << 5));
      if (iVar8 < 0) {
        return;
      }
    }
    for (; 0 < iVar8; iVar8 = iVar8 + -2) {
      bVar1 = *(byte *)(iVar10 + (uVar5 & uVar9 >> 0xc | (uVar17 & uVar5) >> 0x15));
      if ((bool)((byte)((uVar17 & uVar5) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      uVar15 = (uint)bVar1 * 0x10000000 + (uVar14 >> 0x17);
      if ((uVar14 & 0x600000) != 0) {
        uVar15 = uVar15 + 1;
      }
      uVar16 = uVar17 + iVar12 & uVar5;
      bVar1 = *(byte *)(iVar10 + (uVar5 & uVar9 + iVar13 >> 0xc | uVar16 >> 0x15));
      uVar14 = uVar14 + iVar3;
      if ((bool)((byte)(uVar16 >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      uVar16 = (uint)bVar1 * 0x10000000 + (uVar14 >> 0x17);
      if ((~uVar14 & 0x600000) == 0) {
        uVar16 = uVar16 + 1;
      }
      uVar17 = uVar17 + iVar12 + iVar12;
      uVar9 = uVar9 + iVar13 + iVar13;
      uVar14 = uVar14 + iVar3;
      *puVar7 = CONCAT22(*(undefined2 *)(iVar11 + (uVar16 >> 0x1b | uVar16 << 5)),
                         *(undefined2 *)(iVar11 + (uVar15 >> 0x1b | uVar15 << 5)));
      puVar7 = puVar7 + 1;
    }
    if (iVar8 < 0) {
      return;
    }
    bVar1 = *(byte *)(iVar10 + (uVar5 & uVar9 >> 0xc | (uVar5 & uVar17) >> 0x15));
    if ((bool)((byte)((uVar5 & uVar17) >> 0x14) & 1)) {
      bVar1 = bVar1 >> 4;
    }
    uVar9 = (uint)bVar1 * 0x10000000 + (uVar14 >> 0x17);
    if ((uVar14 & 0x600000) != 0) {
      uVar9 = uVar9 + 1;
    }
  }
  else {
    if (((uint)puVar6 & 3) != 0) {
      uVar15 = uVar17 & uVar5;
      bVar1 = *(byte *)(iVar10 + (uVar5 & uVar9 >> 0xc | uVar15 >> 0x15));
      uVar17 = uVar17 + iVar12;
      uVar9 = uVar9 + iVar13;
      if ((bool)((byte)(uVar15 >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      uVar15 = ((uint)bVar1 << 0x1c | uVar14 >> 0x17) + (uint)((byte)(uVar14 >> 0x16) & 1);
      iVar8 = iVar4 + -2;
      uVar14 = uVar14 + iVar3;
      puVar7 = (undefined4 *)((int)puVar6 + 2);
      *(undefined2 *)puVar6 = *(undefined2 *)(iVar11 + (uVar15 >> 0x1b | uVar15 * 0x20));
      if (iVar8 < 0) {
        return;
      }
    }
    while (0 < iVar8) {
      bVar1 = *(byte *)(iVar10 + (uVar5 & uVar9 >> 0xc | (uVar17 & uVar5) >> 0x15));
      if ((bool)((byte)((uVar17 & uVar5) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      uVar15 = uVar14 >> 0x17;
      uVar14 = uVar14 + iVar3;
      uVar16 = uVar17 + iVar12 & uVar5;
      bVar2 = *(byte *)(iVar10 + (uVar5 & uVar9 + iVar13 >> 0xc | uVar16 >> 0x15));
      iVar8 = iVar8 + -2;
      uVar17 = uVar17 + iVar12 + iVar12;
      if ((bool)((byte)(uVar16 >> 0x14) & 1)) {
        bVar2 = bVar2 >> 4;
      }
      uVar16 = ((uint)bVar2 << 0x1c | uVar14 >> 0x17) + (uint)((byte)(uVar14 >> 0x16) & 1);
      uVar14 = uVar14 + iVar3;
      uVar9 = uVar9 + iVar13 + iVar13;
      *puVar7 = CONCAT22(*(undefined2 *)(iVar11 + (uVar16 >> 0x1b | uVar16 * 0x20)),
                         *(undefined2 *)
                          (iVar11 + ((uint)bVar1 * 0x10000000 + uVar15 >> 0x1b | uVar15 << 5)));
      puVar7 = puVar7 + 1;
    }
    if (iVar8 < 0) {
      return;
    }
    bVar1 = *(byte *)(iVar10 + (uVar5 & uVar9 >> 0xc | (uVar5 & uVar17) >> 0x15));
    if ((bool)((byte)((uVar5 & uVar17) >> 0x14) & 1)) {
      bVar1 = bVar1 >> 4;
    }
    uVar9 = (uint)bVar1 * 0x10000000 + (uVar14 >> 0x17);
  }
  *(undefined2 *)puVar7 = *(undefined2 *)(iVar11 + (uVar9 >> 0x1b | uVar9 << 5));
  return;
}



// Address: 4a02b86c

void FUN_4a02b86c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = PTR_DAT_4a02b938;
  iVar3 = FUN_4a0bc1f8(*(undefined4 *)PTR_DAT_4a02b938);
  puVar2 = PTR_DAT_4a02b93c;
  if ((iVar3 == 400) || (iVar3 = FUN_4a0bc1f8(*(undefined4 *)puVar1), iVar3 == 0x140)) {
    *(undefined4 *)puVar2 = 0x43510000;
    *(undefined4 *)(puVar2 + 4) = 0x42d80000;
    *(undefined4 *)(puVar2 + 8) = 0x431b0000;
    uVar4 = 0x432a0000;
  }
  else {
    FUN_4a0bbd68(*(undefined4 *)puVar1,0xff,2);
    uVar4 = FUN_4a171fac();
    *(undefined4 *)puVar2 = uVar4;
    FUN_4a0bbe00(*(undefined4 *)puVar1,0x8a,2);
    uVar4 = FUN_4a171fac();
    *(undefined4 *)(puVar2 + 4) = uVar4;
    *(undefined4 *)(puVar2 + 8) = 0x43430000;
    uVar4 = 0x43480000;
  }
  *(undefined4 *)(puVar2 + 0xc) = uVar4;
  uVar4 = FUN_4a1725c0(*(undefined4 *)puVar2,0x430c0000);
  *(undefined4 *)(puVar2 + 0x18) = uVar4;
  *(undefined4 *)(puVar2 + 0x14) = 4;
  *(undefined4 *)(puVar2 + 0x10) = 0x431b0000;
  uVar4 = FUN_4a17211c(*(undefined4 *)(puVar2 + 8),DAT_4a02b940);
  *(undefined4 *)(puVar2 + 0x1c) = uVar4;
  return;
}



// Address: 4a02c880

void FUN_4a02c880(int param_1,int param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  int iVar9;
  int local_98;
  undefined1 auStack_90 [18];
  ushort local_7e;
  ushort local_7c;
  int local_78;
  undefined1 auStack_6c [16];
  ushort local_5c;
  ushort local_5a;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int iStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_24 = param_1;
  iStack_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  thunk_FUN_4a0ecb94(auStack_6c,param_2 + 0x10);
  thunk_FUN_4a0ecbc4(auStack_90);
  thunk_FUN_4a0ecab0(auStack_90,*(undefined4 *)(local_24 + 8));
  thunk_FUN_4a0e681c(auStack_6c,auStack_90,0);
  sVar8 = (short)*(undefined4 *)(PTR_DAT_4a02ca00 + 4);
  iVar9 = (int)sVar8;
  iVar4 = ((local_1c & 0xffff) + iVar9) * 0x10000;
  local_28 = iVar4 >> 0x10;
  iVar5 = ((local_1c >> 0x10) + iVar9) * 0x10000;
  local_98 = iVar5 >> 0x10;
  local_1c = CONCAT22((short)((uint)iVar5 >> 0x10),(short)((uint)iVar4 >> 0x10));
  local_30 = iVar9 * 2;
  iVar5 = ((local_18 & 0xffff) + iVar9 * -2) * 0x10000;
  local_34 = iVar5 >> 0x10;
  iVar4 = ((local_18 >> 0x10) + iVar9 * -2) * 0x10000;
  local_38 = iVar4 >> 0x10;
  local_18 = CONCAT22((short)((uint)iVar4 >> 0x10),(short)((uint)iVar5 >> 0x10));
  local_40 = local_98 + local_38;
  local_2c = local_98;
  for (; local_98 < local_40; local_98 = (uint)local_5a + local_98) {
    local_3c = local_28 + local_34;
    for (iVar4 = local_28; iVar5 = local_78, iVar4 < local_3c; iVar4 = (uint)local_5c + iVar4) {
      uVar1 = *(ushort *)(local_24 + 0x14);
      uVar6 = (uint)local_7c;
      uVar7 = thunk_FUN_4a0e5380(local_24 + 8);
      iVar9 = *(int *)(local_24 + 0x18) + (uint)uVar1 * local_98 + iVar4 * (uVar7 >> 3);
      for (uVar7 = 0; uVar7 < local_7e; uVar7 = uVar7 + 1) {
        thunk_FUN_4a000f84(iVar9,iVar5,uVar6);
        iVar5 = iVar5 + uVar6;
        iVar9 = iVar9 + (uint)uVar1;
      }
    }
  }
  sVar2 = (short)local_2c - sVar8;
  local_48 = CONCAT22(sVar2,(short)local_28);
  local_44 = CONCAT22(sVar8,(short)local_34);
  local_1c._2_2_ = sVar2;
  FUN_4a01d2cc(local_24,local_48,local_44,0xffffffff);
  local_48 = CONCAT22(sVar2 + (short)local_38 + sVar8,(undefined2)local_48);
  FUN_4a01d2cc(local_24,local_48,local_44,1);
  sVar3 = (short)local_28 - sVar8;
  local_1c = CONCAT22(local_1c._2_2_,sVar3);
  local_48 = CONCAT22(sVar2,sVar3);
  local_44 = CONCAT22((short)local_38 + (short)local_30,sVar8);
  FUN_4a01d2cc(local_24,local_48,local_44,0xffffffff);
  local_48 = CONCAT22(local_48._2_2_,sVar3 + (short)local_34 + sVar8);
  FUN_4a01d2cc(local_24,local_48,local_44,1);
  thunk_FUN_4a0ecbf0(auStack_90);
  thunk_FUN_4a0ecbf0(auStack_6c);
  return;
}



// Address: 4a02ca04

undefined4 FUN_4a02ca04(void)

{
  FUN_4a00b164();
  return 0;
}



// Address: 4a02ca18

void FUN_4a02ca18(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  puVar1 = PTR_DAT_4a02ca98;
  iVar2 = *(int *)PTR_DAT_4a02ca98;
  if (*(int *)(iVar2 + 0x398) == *(int *)(iVar2 + 0x390)) {
    return;
  }
  FUN_4a0485ac(*(undefined4 *)(iVar2 + 0x39c),*(undefined4 *)(iVar2 + 0x3ac),1);
  iVar4 = *(int *)puVar1;
  iVar2 = *(int *)(iVar4 + 0x3bc);
  if (iVar2 == -1) {
    FUN_4a0471c4(*(undefined4 *)(iVar4 + 0x3c0),*(undefined4 *)(iVar4 + 0x3b4));
    uVar3 = *(undefined4 *)(*(int *)puVar1 + 0x3b8);
    iVar2 = *(int *)(*(int *)puVar1 + 0x3c4);
  }
  else {
    if (iVar2 == 0) goto LAB_4a02ca84;
    uVar3 = *(undefined4 *)(iVar4 + 0x3ac);
  }
  FUN_4a0471c4(iVar2,uVar3);
LAB_4a02ca84:
  *(undefined4 *)(*(int *)puVar1 + 0x398) = *(undefined4 *)(*(int *)puVar1 + 0x390);
  return;
}



// Address: 4a02ca9c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_4a02ca9c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_2c [4];
  int local_28;
  int local_24;
  int local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  local_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  if (param_1 == 0) {
    local_20 = FUN_4a14ffc8();
  }
  FUN_4a14fcf8(local_20,param_2);
  FUN_4a14fcf8(local_20,param_3);
  uVar5 = 0;
  do {
    FUN_4a1504cc(local_20);
    FUN_4a15038c(local_20,DAT_4a02cb58,&local_24);
    if (local_24 == 0) {
      FUN_4a15038c(local_20,DAT_4a02cb58 + 2,&local_28);
      uVar1 = thunk_FUN_4a161570(local_28 + 1);
      FUN_4a150380(local_20,local_28 + 1,auStack_2c,uVar1);
      FUN_4a008004(s_Failed_to_link_program__Log___s_4a02cb5c,uVar1);
      iVar2 = host_s3eDebugIsDebuggerPresent_thumb();
      if (iVar2 != 0) {
        _DAT_fffffff4 = 0;
      }
      thunk_FUN_4a161530(uVar1);
    }
    if (uVar5 == 0) {
      iVar2 = 0;
      uVar4 = 0;
      do {
        iVar3 = FUN_4a1502f8(local_20,*(undefined4 *)(PTR_PTR_4a02cb7c + uVar4 * 4));
        if (iVar3 != -1) {
          FUN_4a14fd04(local_20,iVar2,*(undefined4 *)(PTR_PTR_4a02cb7c + uVar4 * 4));
          iVar2 = iVar2 + 1;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 9);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 2);
  return local_20;
}



// Address: 4a02cb80

void FUN_4a02cb80(int param_1,undefined4 param_2,int param_3,uint param_4,uint param_5,int param_6,
                 int param_7,undefined4 param_8,int param_9)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint extraout_r1;
  uint uVar4;
  byte *pbVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  byte bVar10;
  byte *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  int iStack_1c;
  uint uStack_18;
  
  puVar1 = PTR_DAT_4a02ccd4;
  iVar2 = *(int *)PTR_DAT_4a02ccd4;
  local_28 = iVar2 + 0x380;
  local_2c = *(undefined4 *)(iVar2 + 0x388);
  local_30 = *(undefined4 *)(iVar2 + 0x38c);
  if ((*(int *)(param_3 + 0x34) << 0x1c < 0) &&
     (-1 < (int)((uint)*(ushort *)(param_3 + 0x14) << 0x13))) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  local_34 = 0xffffffff;
  local_24 = param_1;
  local_20 = param_2;
  iStack_1c = param_3;
  uStack_18 = param_4;
  iVar2 = FUN_4a0a3a32(param_2,&local_34);
  iVar3 = *(int *)puVar1;
  local_38 = *(byte **)(iVar3 + 0x38c);
  *(byte **)(iVar3 + 0x388) = local_38;
  *(byte **)(iVar3 + 0x38c) = local_38 + (iVar2 + 3U & 0xfffffffc);
  FUN_4a0a3996(local_20,local_34,local_38,uVar6);
  iVar2 = FUN_4a142124(local_20);
  uVar7 = 0;
  while (uVar8 = uVar7 + 1, (int)(param_4 | param_5) >> 1 != 0) {
    uVar4 = (int)param_4 >> 1;
    param_4 = 1;
    if (0 < (int)uVar4) {
      param_4 = uVar4;
    }
    uVar4 = (int)param_5 >> 1;
    param_5 = 1;
    if (0 < (int)uVar4) {
      param_5 = uVar4;
    }
    if ((*PTR_DAT_4a02ccd8 != '\0') && (param_9 == DAT_4a02ccdc)) {
      thunk_FUN_4a0015f0(uVar7,6);
      pbVar5 = local_38;
      for (iVar3 = 0; iVar3 < (int)(param_5 * param_4); iVar3 = iVar3 + 1) {
        bVar9 = 0;
        if (2 < extraout_r1 - 2) {
          bVar9 = (*pbVar5 >> 1) + 0x7f;
        }
        *pbVar5 = bVar9;
        bVar10 = 0;
        bVar9 = 0;
        if ((extraout_r1 != 0) && (extraout_r1 < 4)) {
          bVar9 = (pbVar5[1] >> 1) + 0x7f;
        }
        pbVar5[1] = bVar9;
        if (3 < extraout_r1) {
          bVar10 = (pbVar5[2] >> 1) + 0x7f;
        }
        pbVar5[2] = bVar10;
        pbVar5 = pbVar5 + iVar2;
      }
    }
    if (local_24 == 0) {
      thunk_FUN_4a150ac4(DAT_4a02cce0,uVar8,param_8,param_4,param_5,0,param_8,param_9,local_38);
    }
    else {
      FUN_4a150bc0(DAT_4a02cce0,uVar8,param_6 >> (uVar8 & 0xff),param_7 >> (uVar8 & 0xff),param_4,
                   param_5);
    }
    local_38 = local_38 + iVar2 * param_5 * param_4;
    uVar7 = uVar8;
  }
  *(undefined4 *)(local_28 + 8) = local_2c;
  *(undefined4 *)(local_28 + 0xc) = local_30;
  return;
}



// Address: 4a02cce4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_4a02cce4(uint *param_1)

{
  ushort uVar1;
  undefined *puVar2;
  short sVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  short *psVar10;
  uint uVar11;
  short *psVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint uVar17;
  bool bVar18;
  uint local_134;
  undefined4 *local_130 [64];
  int local_30;
  int local_2c;
  uint *local_28;
  
  local_28 = param_1;
  puVar16 = *(undefined4 **)PTR_DAT_4a02d0d4;
  uVar14 = 1;
  uVar13 = *param_1 | param_1[1];
  do {
    if ((uVar13 & uVar14) != 0) {
      local_130[0] = *(undefined4 **)PTR_DAT_4a02d0d8;
      uVar5 = *local_28;
      local_130[1] = (undefined4 *)*(undefined4 *)(PTR_DAT_4a02d0d8 + 4);
      uVar17 = local_28[1];
      uVar8 = uVar5 & uVar14;
      uVar15 = 0x3c;
      uVar13 = 0;
      if (uVar8 == 0) {
        uVar15 = uVar5 & 0x3c;
        uVar13 = uVar5;
      }
      uVar11 = (uint)(uVar8 == 0);
      if (((uVar5 ^ uVar17) & uVar14) != 0) {
        bVar18 = uVar8 == 0;
        local_134 = 0;
        if (!bVar18) {
          local_134 = (uint)!bVar18;
        }
        puVar9 = local_130[local_134];
        psVar12 = (short *)(puVar9 + 1);
        iVar6 = (int)*(short *)(local_130[bVar18] + 1) - (int)*(short *)(puVar9 + 1);
        psVar10 = (short *)(puVar16 + 1);
        iVar7 = (int)*(short *)((int)local_130[bVar18] + 6) - (int)*(short *)((int)puVar9 + 6);
        *puVar16 = **(undefined4 **)PTR_DAT_4a02d0d8;
        if (uVar14 == 4) {
          if (4 < iVar6 + 2U) {
            local_2c = *(int *)(PTR_LAB_4a02d0dc + 0x20);
            uVar5 = local_2c * 8 - (int)*psVar12;
            iVar6 = FUN_4a00080c(uVar5 * 0x1000,((int)uVar5 >> 0x1f) << 0xc | uVar5 >> 0x14,iVar6,
                                 iVar6 >> 0x1f);
            puVar2 = PTR_LAB_4a02d0dc;
            *psVar10 = (short)(local_2c << 3);
            iVar7 = iVar7 * iVar6;
            bVar18 = iVar7 < 0;
            if (bVar18) {
              iVar7 = -iVar7;
            }
            iVar7 = iVar7 >> 0xc;
            if (bVar18) {
              iVar7 = -iVar7;
            }
            iVar7 = (iVar7 + (uint)*(ushort *)((int)puVar9 + 6)) * 0x10000;
            iVar6 = iVar7 >> 0x10;
            *(short *)((int)puVar16 + 6) = (short)((uint)iVar7 >> 0x10);
            uVar4 = 0;
            if (*(int *)(puVar2 + 0x18) * 8 < iVar6) {
LAB_4a02d010:
              uVar4 = 0x10;
            }
            else if (iVar6 < *(int *)(puVar2 + 0x14) * 8) {
LAB_4a02d024:
              uVar4 = 0x20;
            }
LAB_4a02cf80:
            *(undefined2 *)(puVar16 + 5) = uVar4;
            goto LAB_4a02ce4c;
          }
        }
        else if (uVar14 == 8) {
          if (4 < iVar6 + 2U) {
            local_30 = *(int *)(PTR_LAB_4a02d0dc + 0x1c);
            uVar5 = local_30 * 8 - (int)*psVar12;
            iVar6 = FUN_4a00080c(uVar5 * 0x1000,((int)uVar5 >> 0x1f) << 0xc | uVar5 >> 0x14,iVar6,
                                 iVar6 >> 0x1f);
            puVar2 = PTR_LAB_4a02d0dc;
            *psVar10 = (short)(local_30 << 3);
            iVar7 = iVar7 * iVar6;
            bVar18 = iVar7 < 0;
            if (bVar18) {
              iVar7 = -iVar7;
            }
            iVar7 = iVar7 >> 0xc;
            if (bVar18) {
              iVar7 = -iVar7;
            }
            iVar7 = (iVar7 + (uint)*(ushort *)((int)puVar9 + 6)) * 0x10000;
            iVar6 = iVar7 >> 0x10;
            *(short *)((int)puVar16 + 6) = (short)((uint)iVar7 >> 0x10);
            uVar4 = 0;
            if (*(int *)(puVar2 + 0x18) * 8 < iVar6) goto LAB_4a02d010;
            if (iVar6 < *(int *)(puVar2 + 0x14) * 8) goto LAB_4a02d024;
            goto LAB_4a02cf80;
          }
        }
        else {
          if (uVar14 == 0x10) {
            if (iVar7 + 2U < 5) goto LAB_4a02cea0;
            uVar5 = *(int *)(PTR_LAB_4a02d0dc + 0x18) * 8 - (int)*(short *)((int)puVar9 + 6);
            iVar7 = FUN_4a00080c(uVar5 * 0x1000,((int)uVar5 >> 0x1f) << 0xc | uVar5 >> 0x14,iVar7,
                                 iVar7 >> 0x1f);
            iVar6 = iVar6 * iVar7;
            bVar18 = iVar6 < 0;
            if (bVar18) {
              iVar6 = -iVar6;
            }
            sVar3 = (short)(iVar6 >> 0xc);
            if (bVar18) {
              sVar3 = -sVar3;
            }
            *psVar10 = sVar3 + *psVar12;
            *(short *)((int)puVar16 + 6) = (short)(*(int *)(PTR_LAB_4a02d0dc + 0x18) << 3);
            *(undefined2 *)(puVar16 + 5) = 0;
          }
          else if (uVar14 == 0x20) {
            if (iVar7 + 2U < 5) goto LAB_4a02cea0;
            uVar5 = *(int *)(PTR_LAB_4a02d0dc + 0x14) * 8 - (int)*(short *)((int)puVar9 + 6);
            iVar7 = FUN_4a00080c(uVar5 * 0x1000,((int)uVar5 >> 0x1f) << 0xc | uVar5 >> 0x14,iVar7,
                                 iVar7 >> 0x1f);
            iVar6 = iVar6 * iVar7;
            bVar18 = iVar6 < 0;
            if (bVar18) {
              iVar6 = -iVar6;
            }
            sVar3 = (short)(iVar6 >> 0xc);
            if (bVar18) {
              sVar3 = -sVar3;
            }
            *psVar10 = sVar3 + *psVar12;
            *(short *)((int)puVar16 + 6) = (short)(*(int *)(PTR_LAB_4a02d0dc + 0x14) << 3);
            *(undefined2 *)(puVar16 + 5) = 0;
          }
LAB_4a02ce4c:
          uVar1 = *(ushort *)(puVar16 + 5);
          uVar5 = uVar1 & 0x3c;
          if ((uVar1 & 0x3c) == 0) {
            *(ushort *)(puVar16 + 5) = uVar1 | 0x200;
            puVar16[4] = local_130[local_134][4];
            puVar16[3] = *(undefined4 *)psVar10;
            puVar16[2] = *(undefined4 *)psVar10;
          }
          uVar13 = uVar13 | uVar5;
          uVar15 = uVar15 & uVar5;
          local_28[uVar11] = uVar5;
          *(undefined4 **)(PTR_DAT_4a02d0d8 + uVar11 * 4) = puVar16;
          puVar16 = puVar16 + 8;
          uVar11 = uVar11 + 1;
        }
      }
LAB_4a02cea0:
      if (uVar11 == 0) {
        return 0;
      }
      if ((uVar17 & uVar14) == 0) {
        uVar13 = uVar13 | uVar17;
        *(undefined4 **)(PTR_DAT_4a02d0d8 + uVar11 * 4) = local_130[1];
        uVar15 = uVar15 & uVar17;
        local_28[uVar11] = uVar17;
        uVar11 = uVar11 + 1;
      }
      if (uVar11 != 2 || uVar15 != 0) {
        return 0;
      }
      if (uVar13 == 0) {
        return uVar11;
      }
    }
    uVar14 = uVar14 * 2;
    if (uVar14 == 0x40) {
      return 2;
    }
  } while( true );
}



// Address: 4a02d0e0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_4a02d0e0(uint *param_1)

{
  ushort uVar1;
  undefined *puVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  ushort *puVar14;
  int *piVar15;
  undefined4 *puVar16;
  uint uVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  bool bVar21;
  uint local_13c;
  uint local_138;
  undefined4 *local_130 [64];
  int local_30;
  int local_2c;
  uint *local_28;
  
  local_28 = param_1;
  puVar16 = *(undefined4 **)PTR_DAT_4a02d8a4;
  uVar20 = *param_1 | param_1[1];
  local_138 = 1;
  do {
    if ((local_138 & uVar20) != 0) {
      local_130[0] = *(undefined4 **)PTR_DAT_4a02d8a8;
      uVar4 = *local_28;
      local_130[1] = (undefined4 *)*(undefined4 *)(PTR_DAT_4a02d8a8 + 4);
      uVar8 = local_28[1];
      uVar10 = uVar4 & local_138;
      local_13c = 0x3f;
      uVar20 = 0;
      if (uVar10 == 0) {
        local_13c = uVar4 & 0x3f;
        uVar20 = uVar4;
      }
      uVar17 = (uint)(uVar10 == 0);
      if ((local_138 & (uVar8 ^ uVar4)) != 0) {
        puVar9 = local_130[uVar10 != 0];
        puVar5 = local_130[uVar10 == 0];
        piVar13 = puVar9 + 2;
        uVar4 = puVar5[2] - puVar9[2];
        uVar10 = puVar5[3] - puVar9[3];
        piVar15 = puVar16 + 2;
        iVar18 = puVar5[4] - puVar9[4];
        *puVar16 = **(undefined4 **)PTR_DAT_4a02d8a8;
        puVar2 = PTR_DAT_4a02d8ac;
        if (local_138 == 8) {
          iVar11 = uVar4 + iVar18;
          if (4 < iVar11 + 2U) {
            local_30 = *piVar13;
            uVar6 = -(puVar9[4] + local_30);
            uVar6 = FUN_4a00080c((puVar9[4] + local_30) * -0x10000,
                                 ((int)uVar6 >> 0x1f) << 0x10 | uVar6 >> 0x10,iVar11,iVar11 >> 0x1f)
            ;
            iVar11 = (int)((longlong)(int)uVar6 * (longlong)(int)uVar4);
            iVar11 = FUN_4a0008b0(-iVar11,-((int)((ulonglong)
                                                  ((longlong)(int)uVar6 * (longlong)(int)uVar4) >>
                                                 0x20) + (uint)(iVar11 != 0)),0x10);
            *piVar15 = local_30 - iVar11;
            bVar21 = (int)(uVar6 ^ uVar10) < 0;
            uVar4 = uVar6;
            if (bVar21) {
              uVar4 = -uVar6;
            }
            uVar4 = (uint)((longlong)(int)uVar4 * (longlong)(int)uVar10) >> 0x10 |
                    (int)((ulonglong)((longlong)(int)uVar4 * (longlong)(int)uVar10) >> 0x20) << 0x10
            ;
            if (bVar21) {
              uVar4 = -uVar4;
            }
            puVar16[3] = uVar4 + puVar9[3];
            iVar11 = (int)((longlong)(int)uVar6 * (longlong)iVar18);
            iVar18 = FUN_4a0008b0(-iVar11,-((int)((ulonglong)
                                                  ((longlong)(int)uVar6 * (longlong)iVar18) >> 0x20)
                                           + (uint)(iVar11 != 0)),0x10);
            iVar18 = puVar9[4] - iVar18;
            puVar16[4] = iVar18;
            iVar11 = puVar16[3];
            uVar3 = 0;
            if (iVar18 < iVar11) {
LAB_4a02d654:
              uVar3 = 0x10;
            }
            else if (-iVar18 != iVar11 && iVar18 <= -iVar11) {
LAB_4a02d668:
              uVar3 = 0x20;
            }
            goto LAB_4a02d4bc;
          }
        }
        else {
          if ((int)local_138 < 9) {
            if (local_138 == 1) {
              uVar6 = *(int *)(*(int *)PTR_DAT_4a02d8ac + 0x2d0) * 0x40 - puVar9[4];
              iVar18 = FUN_4a00080c(uVar6 * 0x10000,((int)uVar6 >> 0x1f) << 0x10 | uVar6 >> 0x10,
                                    iVar18,iVar18 >> 0x1f);
              *piVar15 = ((uint)((longlong)iVar18 * (longlong)(int)uVar4) >> 0x10 |
                         (int)((ulonglong)((longlong)iVar18 * (longlong)(int)uVar4) >> 0x20) << 0x10
                         ) + *piVar13;
              puVar16[3] = ((uint)((longlong)iVar18 * (longlong)(int)uVar10) >> 0x10 |
                           (int)((ulonglong)((longlong)iVar18 * (longlong)(int)uVar10) >> 0x20) <<
                           0x10) + puVar9[3];
              iVar11 = *(int *)(*(int *)puVar2 + 0x2d0);
              iVar18 = iVar11 * 0x40;
              puVar16[4] = iVar18;
              iVar12 = *piVar15;
              uVar3 = 0;
              if (iVar18 < iVar12) {
                uVar3 = 4;
              }
              else if (iVar11 * -0x40 != iVar12 && iVar18 <= -iVar12) {
                uVar3 = 8;
              }
              iVar12 = puVar16[3];
              if (iVar18 < iVar12) {
LAB_4a02d560:
                uVar3 = uVar3 | 0x10;
              }
              else if (iVar11 * -0x40 != iVar12 && iVar18 <= -iVar12) {
LAB_4a02d574:
                uVar3 = uVar3 | 0x20;
              }
            }
            else if (local_138 == 2) {
              uVar6 = *(int *)(*(int *)PTR_DAT_4a02d8ac + 0x2d4) * 0x40 - puVar9[4];
              iVar18 = FUN_4a00080c(uVar6 * 0x10000,((int)uVar6 >> 0x1f) << 0x10 | uVar6 >> 0x10,
                                    iVar18,iVar18 >> 0x1f);
              *piVar15 = ((uint)((longlong)iVar18 * (longlong)(int)uVar4) >> 0x10 |
                         (int)((ulonglong)((longlong)iVar18 * (longlong)(int)uVar4) >> 0x20) << 0x10
                         ) + *piVar13;
              puVar16[3] = ((uint)((longlong)iVar18 * (longlong)(int)uVar10) >> 0x10 |
                           (int)((ulonglong)((longlong)iVar18 * (longlong)(int)uVar10) >> 0x20) <<
                           0x10) + puVar9[3];
              iVar11 = *(int *)(*(int *)puVar2 + 0x2d4);
              iVar18 = iVar11 * 0x40;
              puVar16[4] = iVar18;
              iVar12 = *piVar15;
              uVar3 = 0;
              if (iVar18 < iVar12) {
                uVar3 = 4;
              }
              else if (iVar11 * -0x40 != iVar12 && iVar18 <= -iVar12) {
                uVar3 = 8;
              }
              iVar12 = puVar16[3];
              if (iVar18 < iVar12) goto LAB_4a02d560;
              if (iVar11 * -0x40 != iVar12 && iVar18 <= -iVar12) goto LAB_4a02d574;
            }
            else {
              if (local_138 != 4) goto LAB_4a02d3a0;
              iVar11 = iVar18 - uVar4;
              if (iVar11 + 2U < 5) goto LAB_4a02d800;
              local_2c = *piVar13;
              uVar6 = local_2c - puVar9[4];
              uVar6 = FUN_4a00080c(uVar6 * 0x10000,((int)uVar6 >> 0x1f) << 0x10 | uVar6 >> 0x10,
                                   iVar11,iVar11 >> 0x1f);
              iVar11 = FUN_4a0008b0((int)((longlong)(int)uVar6 * (longlong)(int)uVar4),
                                    (int)((ulonglong)((longlong)(int)uVar6 * (longlong)(int)uVar4)
                                         >> 0x20),0x10);
              *piVar15 = iVar11 + local_2c;
              bVar21 = (int)(uVar6 ^ uVar10) < 0;
              uVar4 = uVar6;
              if (bVar21) {
                uVar4 = -uVar6;
              }
              uVar4 = (uint)((longlong)(int)uVar4 * (longlong)(int)uVar10) >> 0x10 |
                      (int)((ulonglong)((longlong)(int)uVar4 * (longlong)(int)uVar10) >> 0x20) <<
                      0x10;
              if (bVar21) {
                uVar4 = -uVar4;
              }
              puVar16[3] = uVar4 + puVar9[3];
              iVar11 = (int)((longlong)(int)uVar6 * (longlong)iVar18);
              iVar18 = FUN_4a0008b0(-iVar11,-((int)((ulonglong)
                                                    ((longlong)(int)uVar6 * (longlong)iVar18) >>
                                                   0x20) + (uint)(iVar11 != 0)),0x10);
              iVar18 = puVar9[4] - iVar18;
              puVar16[4] = iVar18;
              iVar11 = puVar16[3];
              uVar3 = 0;
              if (iVar18 < iVar11) goto LAB_4a02d654;
              if (-iVar18 != iVar11 && iVar18 <= -iVar11) goto LAB_4a02d668;
            }
LAB_4a02d4bc:
            *(ushort *)(puVar16 + 5) = uVar3;
          }
          else if (local_138 == 0x10) {
            iVar11 = iVar18 - uVar10;
            if (iVar11 + 2U < 5) goto LAB_4a02d800;
            uVar6 = puVar9[3] - puVar9[4];
            uVar7 = FUN_4a00080c(uVar6 * 0x10000,((int)uVar6 >> 0x1f) << 0x10 | uVar6 >> 0x10,iVar11
                                 ,iVar11 >> 0x1f);
            bVar21 = (int)(uVar7 ^ uVar4) < 0;
            uVar6 = uVar7;
            if (bVar21) {
              uVar6 = -uVar7;
            }
            uVar4 = (uint)((longlong)(int)uVar6 * (longlong)(int)uVar4) >> 0x10 |
                    (int)((ulonglong)((longlong)(int)uVar6 * (longlong)(int)uVar4) >> 0x20) << 0x10;
            if (bVar21) {
              uVar4 = -uVar4;
            }
            *piVar15 = uVar4 + *piVar13;
            iVar11 = FUN_4a0008b0((int)((longlong)(int)uVar7 * (longlong)(int)uVar10),
                                  (int)((ulonglong)((longlong)(int)uVar7 * (longlong)(int)uVar10) >>
                                       0x20),0x10);
            puVar16[3] = iVar11 + puVar9[3];
            iVar11 = (int)((longlong)(int)uVar7 * (longlong)iVar18);
            iVar18 = FUN_4a0008b0(-iVar11,-((int)((ulonglong)
                                                  ((longlong)(int)uVar7 * (longlong)iVar18) >> 0x20)
                                           + (uint)(iVar11 != 0)),0x10);
            puVar16[4] = puVar9[4] - iVar18;
            *(undefined2 *)(puVar16 + 5) = 0;
          }
          else if (local_138 == 0x20) {
            iVar11 = -(uVar10 + iVar18);
            if (iVar11 + 2U < 5) goto LAB_4a02d800;
            uVar6 = puVar9[4] + puVar9[3];
            uVar7 = FUN_4a00080c(uVar6 * 0x10000,((int)uVar6 >> 0x1f) << 0x10 | uVar6 >> 0x10,iVar11
                                 ,iVar11 >> 0x1f);
            bVar21 = (int)(uVar7 ^ uVar4) < 0;
            uVar6 = uVar7;
            if (bVar21) {
              uVar6 = -uVar7;
            }
            uVar4 = (uint)((longlong)(int)uVar6 * (longlong)(int)uVar4) >> 0x10 |
                    (int)((ulonglong)((longlong)(int)uVar6 * (longlong)(int)uVar4) >> 0x20) << 0x10;
            if (bVar21) {
              uVar4 = -uVar4;
            }
            *piVar15 = uVar4 + *piVar13;
            iVar11 = (int)((longlong)(int)uVar7 * (longlong)(int)uVar10);
            iVar11 = FUN_4a0008b0(-iVar11,-((int)((ulonglong)
                                                  ((longlong)(int)uVar7 * (longlong)(int)uVar10) >>
                                                 0x20) + (uint)(iVar11 != 0)),0x10);
            puVar16[3] = puVar9[3] - iVar11;
            iVar11 = (int)((longlong)(int)uVar7 * (longlong)iVar18);
            iVar18 = FUN_4a0008b0(-iVar11,-((int)((ulonglong)
                                                  ((longlong)(int)uVar7 * (longlong)iVar18) >> 0x20)
                                           + (uint)(iVar11 != 0)),0x10);
            puVar16[4] = puVar9[4] - iVar18;
            *(undefined2 *)(puVar16 + 5) = 0;
          }
LAB_4a02d3a0:
          uVar3 = *(ushort *)(puVar16 + 5);
          uVar4 = uVar3 & 0x3d;
          if ((uVar3 & 0x3d) == 0) {
            puVar14 = (ushort *)(puVar16 + 1);
            *(ushort *)(puVar16 + 5) = uVar3 | 0x80;
            puVar2 = PTR_DAT_4a02d8ac;
            if ((uVar3 & 0xbf | 0x80) == 0x80) {
              *(ushort *)(puVar16 + 5) = uVar3 & 0xff7f;
              iVar18 = *(int *)puVar2;
              if ((uVar3 & 0x400) == 0) {
                uVar19 = puVar16[4];
                iVar11 = FUN_4a0015f0(puVar16[2] << 0xb,uVar19);
                uVar3 = (ushort)((uint)(*(int *)(iVar18 + 0x310) * iVar11 * 0x10) >> 0x10);
                iVar11 = FUN_4a0015f0(puVar16[3] << 0xb,uVar19);
                uVar1 = (ushort)((uint)(*(int *)(iVar18 + 0x314) * iVar11 * 0x10) >> 0x10);
              }
              else {
                uVar3 = (ushort)((uint)((*(int *)(iVar18 + 0x34c) * 8 + -1) * puVar16[2] * 8) >>
                                0x10);
                uVar1 = (ushort)((uint)(puVar16[3] * (*(int *)(iVar18 + 0x350) * 8 + -1) * 8) >>
                                0x10);
              }
              iVar11 = *(int *)(iVar18 + 0x354);
              if (iVar11 == 0) {
                *puVar14 = uVar3;
                *(ushort *)((int)puVar16 + 6) = uVar1;
              }
              else if (iVar11 == 1) {
                *puVar14 = ~uVar1;
                *(ushort *)((int)puVar16 + 6) = uVar3;
              }
              else {
                if (iVar11 == 2) {
                  *puVar14 = ~uVar3;
                  uVar3 = uVar1;
                }
                else {
                  if (iVar11 != 3) goto LAB_4a02d7b8;
                  *puVar14 = uVar1;
                }
                *(ushort *)((int)puVar16 + 6) = ~uVar3;
              }
LAB_4a02d7b8:
              *puVar14 = (short)*(undefined4 *)(iVar18 + 800) + *puVar14;
              *(short *)((int)puVar16 + 6) =
                   (short)*(undefined4 *)(iVar18 + 0x328) + *(short *)((int)puVar16 + 6);
            }
          }
          uVar20 = uVar20 | uVar4;
          local_13c = local_13c & uVar4;
          local_28[uVar17] = uVar4;
          *(undefined4 **)(PTR_DAT_4a02d8a8 + uVar17 * 4) = puVar16;
          puVar16 = puVar16 + 8;
          uVar17 = uVar17 + 1;
        }
      }
LAB_4a02d800:
      if (uVar17 == 0) {
        return 0;
      }
      if ((uVar8 & local_138) == 0) {
        *(undefined4 **)(PTR_DAT_4a02d8a8 + uVar17 * 4) = local_130[1];
        local_28[uVar17] = uVar8;
        uVar20 = uVar20 | uVar8;
        uVar8 = uVar8 & local_13c;
        uVar17 = uVar17 + 1;
        local_13c = uVar8;
      }
      if (uVar17 == 2) {
        uVar8 = local_13c;
      }
      if (uVar17 != 2 || uVar8 != 0) {
        return 0;
      }
      if (uVar20 == 0) {
        return uVar17;
      }
    }
    local_138 = local_138 * 2;
    if (local_138 == 0x40) {
      return 2;
    }
  } while( true );
}



// Address: 4a02d8b0

void FUN_4a02d8b0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = *(int *)(param_2 + 0xc);
  if ((*(int *)(param_2 + 0x10) == iVar2) && (iVar1 = *(int *)(param_2 + 8) + iVar2, iVar2 < iVar1))
  {
    *(int *)(param_2 + 0xc) = iVar1;
    iVar3 = *(int *)(param_2 + 0x14);
    iVar2 = thunk_FUN_4a161570(iVar1 * 4);
    *(int *)(param_2 + 0x14) = iVar2;
    if (iVar2 != 0) {
      iVar2 = 0;
      if (0 < *(int *)(param_2 + 0x10)) {
        do {
          iVar1 = iVar2 + 1;
          *(undefined4 *)(*(int *)(param_2 + 0x14) + iVar2 * 4) = *(undefined4 *)(iVar3 + iVar2 * 4)
          ;
          iVar2 = iVar1;
        } while (iVar1 < *(int *)(param_2 + 0x10));
      }
      thunk_FUN_4a161530(iVar3);
    }
    iVar2 = *(int *)(param_2 + 0x10);
    if (iVar2 < *(int *)(param_2 + 0xc)) {
      do {
        iVar1 = iVar2 + 1;
        *(undefined4 *)(*(int *)(param_2 + 0x14) + iVar2 * 4) = 0;
        iVar2 = iVar1;
      } while (iVar1 < *(int *)(param_2 + 0xc));
    }
  }
  iVar2 = *(int *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar2 + 1;
  piVar4 = *(int **)(*(int *)(param_2 + 0x14) + iVar2 * 4);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0xc))();
  }
  *(int **)(*(int *)(param_2 + 0x14) + iVar2 * 4) = param_1;
  if ((piVar4 != (int *)0x0) && (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  iVar2 = FUN_4a165910(param_1);
  if (iVar2 == 0) {
    return;
  }
  iVar3 = 0;
  iVar1 = 0;
  if (*(int *)(iVar2 + 0xdc) != 0) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0xdc) + 0x10);
  }
  if (iVar1 < 1) {
    return;
  }
  do {
    FUN_4a02d8b0(*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0xdc) + 0x14) + iVar3 * 4),param_2);
    iVar3 = iVar3 + 1;
  } while (iVar3 < iVar1);
  return;
}




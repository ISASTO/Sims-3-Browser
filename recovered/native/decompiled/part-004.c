/* AUTOMATED DECOMPILER OUTPUT. Not original source, not a buildable game.
 * Function boundaries, types, indirect calls, and data still require validation. */

// Address: 4a03a9e0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x4a1a0210) */
/* WARNING: Removing unreachable block (ram,0x4a688068) */
/* WARNING: Removing unreachable block (ram,0x4a03b030) */
/* WARNING: Removing unreachable block (ram,0x4a6ba928) */
/* WARNING: Removing unreachable block (ram,0x4a03b034) */
/* WARNING: Removing unreachable block (ram,0x4a03b038) */
/* WARNING: Removing unreachable block (ram,0x4a03b03c) */
/* WARNING: Removing unreachable block (ram,0x4a03b040) */
/* WARNING: Removing unreachable block (ram,0x4a03b044) */
/* WARNING: Removing unreachable block (ram,0x4a03b054) */
/* WARNING: Removing unreachable block (ram,0x4a03b064) */
/* WARNING: Removing unreachable block (ram,0x4a03b07c) */
/* WARNING: Removing unreachable block (ram,0x4a03b06c) */
/* WARNING: Removing unreachable block (ram,0x4a110534) */
/* WARNING: Removing unreachable block (ram,0x4a110538) */
/* WARNING: Removing unreachable block (ram,0x4a11053c) */
/* WARNING: Removing unreachable block (ram,0x4a110540) */
/* WARNING: Removing unreachable block (ram,0x4a110544) */
/* WARNING: Removing unreachable block (ram,0x4a110548) */
/* WARNING: Removing unreachable block (ram,0x4a11054c) */
/* WARNING: Removing unreachable block (ram,0x4a110550) */
/* WARNING: Removing unreachable block (ram,0x4a11055c) */
/* WARNING: Removing unreachable block (ram,0x4a110590) */
/* WARNING: Removing unreachable block (ram,0x4a110580) */
/* WARNING: Removing unreachable block (ram,0x4a110498) */
/* WARNING: Removing unreachable block (ram,0x4a68b6fc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint * FUN_4a03a9e0(uint *param_1)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  uint unaff_r4;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int *piVar18;
  undefined4 *unaff_r5;
  undefined4 *puVar19;
  uint unaff_r6;
  uint uVar20;
  undefined *puVar21;
  undefined *unaff_r7;
  uint uVar22;
  undefined *puVar23;
  undefined *unaff_r8;
  uint uVar24;
  code *pcVar25;
  undefined4 *puVar26;
  code *unaff_r9;
  code *pcVar27;
  uint unaff_r10;
  uint uVar28;
  int iVar29;
  uint unaff_r11;
  uint uVar30;
  uint *puVar31;
  int iVar32;
  int iVar33;
  code **ppcVar34;
  int *piVar35;
  code *UNRECOVERED_JUMPTABLE_00;
  code *pcVar36;
  int iVar37;
  int *piVar38;
  bool bVar39;
  code *pcStack_60;
  uint uStack_5c;
  uint uStack_58;
  int iStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  uint local_44;
  code *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  uint local_34;
  uint *local_30;
  int local_2c;
  uint local_28;
  
  local_2c = 0;
  local_30 = param_1 + -1;
  local_34 = (*param_1 & 0x1ffffff) >> 0x13;
  local_28 = param_1[1];
  puVar6 = *(uint **)PTR_DAT_4a03b034;
  uVar30 = (uint)*(ushort *)(local_28 + 0x4a);
  uVar2 = *(ushort *)(local_28 + 0x48);
  local_3c = (undefined4 *)(local_34 - 1);
  local_38 = (undefined4 *)(uint)uVar2;
  uVar22 = 0;
  puVar16 = (undefined4 *)0x7f00;
  local_44 = 0x7f00;
  local_40 = (code *)0x0;
  puVar19 = (undefined4 *)0x0;
  uVar20 = 0x3f;
  pcVar36 = (code *)0x7f000000;
  local_48 = 0;
  puVar17 = *(undefined4 **)(PTR_LAB_4a03b030 + 0x28);
  puVar31 = (uint *)(PTR_LAB_4a03b030 + 0xb4);
  puVar7 = param_1 + -1;
  do {
    pcVar27 = local_40;
    sVar3 = *(short *)((int)puVar7 + 0x16);
    puVar11 = (uint *)puVar7[4];
    *(short *)(puVar6 + 6) = (short)(uVar30 * (int)(short)puVar7[5] >> 8);
    *(short *)((int)puVar6 + 0x1a) = (short)((uint)uVar2 * (int)sVar3 >> 8);
    uVar9 = puVar11[4];
    uVar24 = (uint)(ushort)uVar9;
    *puVar6 = puVar7[3];
    uVar20 = uVar20 & uVar24;
    puVar6[1] = *puVar11;
    uVar22 = uVar22 | uVar24;
    puVar6[2] = puVar11[1];
    puVar6[3] = puVar11[2];
    uVar28 = puVar11[3];
    puVar6[4] = uVar28;
    *(ushort *)(puVar6 + 5) = (ushort)uVar9;
    *puVar17 = puVar6;
    *puVar31 = uVar24;
    pcVar25 = (code *)puVar11[3];
    puVar6 = puVar6 + 8;
    if ((int)local_40 < (int)pcVar25) {
      local_40 = pcVar25;
    }
    if ((int)pcVar25 < (int)pcVar36) {
      pcVar36 = pcVar25;
    }
    puVar26 = (undefined4 *)(int)(short)*puVar11;
    iVar12 = (int)*(short *)((int)puVar11 + 2);
    if ((int)puVar19 < (int)puVar26) {
      puVar19 = puVar26;
    }
    if ((int)puVar26 < (int)puVar16) {
      puVar16 = puVar26;
    }
    if ((int)local_48 < iVar12) {
      local_48 = iVar12;
    }
    if (iVar12 < (int)local_44) {
      local_44 = iVar12;
    }
    bVar39 = local_3c != (undefined4 *)0x0;
    local_3c = (undefined4 *)((int)local_3c + -1);
    puVar17 = puVar17 + 1;
    puVar31 = puVar31 + 1;
    puVar7 = puVar7 + 3;
  } while (bVar39);
  if (uVar20 != 0) {
    return puVar6;
  }
  if ((uVar22 & 0x3f) == 0) {
    iVar12 = ((int)local_40 - (int)pcVar36) *
             ((int)((int)puVar19 + ((local_48 - local_44) - (int)puVar16) + 8) >> 4);
    if (iVar12 + (int)pcVar36 * -2 == 0 || iVar12 < (int)pcVar36 * 2) {
      local_2c = 1;
    }
  }
  else {
    if ((*(uint *)(PTR_LAB_4a03b030 + 0xb4) & 0x200) == 0) {
      if ((*(uint *)(PTR_LAB_4a03b030 + 0xb4) & 0x400) == 0) {
        pcVar36 = (code *)0x4a03abc8;
        local_34 = FUN_4a0581dc(3,local_34,PTR_LAB_4a03b030 + 0xb4);
      }
      else {
        pcVar36 = (code *)0x4a03abc0;
        local_34 = FUN_4a02a41c();
      }
    }
    else {
      iVar12 = 0;
      if (local_34 != 0) {
        puVar19 = *(undefined4 **)(PTR_LAB_4a03b030 + 0x18);
        do {
          iVar12 = iVar12 + 1;
        } while (iVar12 < (int)local_34);
      }
      pcVar36 = (code *)0x4a03aba0;
      local_34 = FUN_4a057b8c(3,local_34,PTR_LAB_4a03b030 + 0xb4);
    }
    if ((int)local_34 < 3) {
                    /* WARNING: Could not recover jumptable at 0x4a03abd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar7 = (uint *)(*UNRECOVERED_JUMPTABLE_00)();
      return puVar7;
    }
  }
  puVar21 = PTR_LAB_4a03b030 + 0x1b4;
  iVar12 = (*(int **)(PTR_LAB_4a03b030 + 0x28))[local_34 - 1];
  local_3c = (undefined4 *)((int)*(short *)(iVar12 + 6) + 3U >> 3);
  local_40 = (code *)PTR_FUN_4a03b038;
  if (local_2c != 0) {
    local_40 = (code *)PTR_FUN_4a03b03c;
  }
  local_44 = 0;
  local_48 = 0;
  uStack_4c = 0;
  uStack_50 = 0;
  iStack_54 = 0;
  piVar18 = *(int **)(PTR_LAB_4a03b030 + 0x28);
  puVar17 = local_3c;
  puVar4 = PTR_LAB_4a03b030;
  local_38 = local_3c;
  uVar20 = local_34;
  while (puVar16 = puVar17, iVar32 = iVar12, local_34 = uVar20 - 1, PTR_LAB_4a03b030 = puVar4,
        uVar20 != 0) {
    piVar10 = piVar18 + 1;
    iVar12 = *piVar18;
    pcVar27 = (code *)(int)*(short *)(iVar12 + 6);
    puVar19 = (undefined4 *)((uint)(pcVar27 + 3) >> 3);
    if (local_2c != 0) {
      uVar28 = (uint)*(short *)(iVar32 + 4);
      uVar30 = (uint)*(short *)(iVar32 + 6);
      uStack_58 = uVar28;
      pcVar36 = (code *)(int)*(short *)(iVar12 + 0x1a);
      uStack_5c = uVar30;
      pcStack_60 = pcVar27;
      local_44 = (uVar30 - (int)pcVar27) *
                 ((int)*(short *)(iVar32 + 0x18) + (int)*(short *)(iVar12 + 0x18)) + local_44;
      local_48 = (int)(pcVar36 + *(short *)(iVar32 + 0x1a)) * (uVar30 - (int)pcVar27) + local_48;
      iVar13 = uVar28 + (int)*(short *)(iVar12 + 4);
      uStack_4c = iVar13 * ((int)*(short *)(iVar32 + 0x18) - (int)*(short *)(iVar12 + 0x18)) +
                  uStack_4c;
      uStack_50 = ((int)*(short *)(iVar32 + 0x1a) - (int)pcVar36) * iVar13 + uStack_50;
      iStack_54 = (int)(pcVar27 + uVar30) * (uVar28 - (int)*(short *)(iVar12 + 4)) + iStack_54;
    }
    if ((int)local_3c < (int)puVar19) {
      local_3c = puVar19;
    }
    if ((int)puVar19 < (int)local_38) {
      local_38 = puVar19;
    }
    piVar18 = piVar10;
    puVar17 = puVar19;
    uVar20 = local_34;
    if (puVar16 != puVar19) {
      puVar26 = puVar16;
      iVar13 = iVar32;
      iVar37 = iVar12;
      if (puVar16 > puVar19) {
        puVar26 = puVar19;
        iVar13 = iVar12;
        iVar37 = iVar32;
      }
      *(ushort *)(puVar21 + 0x18) = (ushort)(puVar16 <= puVar19);
      puVar4 = PTR_LAB_4a03b030;
      pcVar36 = (code *)0x4a03ad90;
      *(undefined4 *)(puVar21 + 0x34) =
           *(undefined4 *)(*(int *)(PTR_LAB_4a03b030 + 0xb0) + (int)puVar26 * 4);
      *(undefined **)(*(int *)(puVar4 + 0xb0) + (int)puVar26 * 4) = puVar21;
      (*local_40)(puVar21,iVar13,iVar37);
      puVar21 = puVar21 + 0x38;
      puVar4 = PTR_LAB_4a03b030;
      uVar20 = local_34;
    }
  }
  if (local_3c == local_38) {
                    /* WARNING: Could not recover jumptable at 0x4a03adc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar7 = (uint *)(*UNRECOVERED_JUMPTABLE_00)();
    return puVar7;
  }
  if (local_2c != 0) {
    puVar19 = (undefined4 *)0x0;
    if ((puVar4[0x44] == '\0') &&
       (puVar19 = (undefined4 *)(uint)*(byte *)(local_28 + 0x62), puVar19 != (undefined4 *)0x0)) {
      uVar20 = local_44;
      if ((int)local_44 < 1) {
        uVar20 = -local_44;
      }
      uVar22 = local_48;
      if ((int)local_48 < 1) {
        uVar22 = -local_48;
      }
      uVar9 = local_48;
      if ((int)uVar22 < (int)uVar20) {
        uVar9 = local_44;
      }
      if ((int)uVar9 < 1) {
        uVar9 = -uVar9;
      }
      uVar20 = uStack_4c;
      if ((int)uStack_4c < 1) {
        uVar20 = -uStack_4c;
      }
      uVar22 = uStack_50;
      if ((int)uStack_50 < 1) {
        uVar22 = -uStack_50;
      }
      uVar24 = uStack_50;
      if ((int)uVar22 < (int)uVar20) {
        uVar24 = uStack_4c;
      }
      if ((int)uVar24 < 1) {
        uVar24 = -uVar24;
      }
      if ((int)uVar24 < (int)uVar9) {
        uVar24 = uVar9;
      }
      if (iStack_54 < 0) {
        iStack_54 = -iStack_54;
      }
      if (iStack_54 != 0) {
        pcVar36 = (code *)0x4a03aec0;
        uVar20 = FUN_4a00080c(uVar24 << 0x13,((int)uVar24 >> 0x1f) << 0x13 | uVar24 >> 0xd,iStack_54
                              ,iStack_54 >> 0x1f);
        puVar17 = (undefined4 *)0x0;
        if (0x9ffff < uVar20 >> 4) {
          puVar17 = (undefined4 *)&DAT_00000004;
          uVar20 = uVar20 >> 4;
        }
        if (0x9ffff < uVar20 >> 2) {
          puVar17 = (undefined4 *)((int)puVar17 + 2);
          uVar20 = uVar20 >> 2;
        }
        if (0x9ffff < uVar20 >> 1) {
          puVar17 = (undefined4 *)((int)puVar17 + 1);
        }
        if (puVar17 < puVar19) {
          puVar19 = puVar17;
        }
      }
    }
    iVar12 = local_28 + (int)puVar19 * 8;
    *(undefined4 *)(puVar4 + 0x84) = *(undefined4 *)(iVar12 + 100);
    uVar8 = *(undefined4 *)(iVar12 + 0x68);
    *(undefined4 **)(puVar4 + 0x54) = puVar19;
    *(undefined4 *)(puVar4 + 0x88) = uVar8;
  }
  puVar17 = local_3c;
  uVar22 = (uint)local_3c | (int)local_38 << 0x10;
  uVar20 = (uint)*(byte *)(local_28 + 0x61) | local_30[1] | 8;
  if ((*(uint *)(local_28 + 0x34) & 0x40) == 0) {
    uVar20 = uVar20 | 0x100;
  }
  uVar9 = (int)*(short *)(*(int *)(local_28 + 0x58) + 0x18) >> 8;
  if (uVar9 == 0) {
    *(undefined4 *)(PTR_LAB_4a03b030 + 0x58) = 0;
  }
  else {
    iVar12 = 1;
    while (iVar32 = iVar12, uVar9 >> 1 != 0) {
      uVar9 = uVar9 >> 2;
      iVar32 = iVar12 + 1;
      if (uVar9 == 0) break;
      iVar12 = iVar12 + 2;
    }
    *(int *)(PTR_LAB_4a03b030 + 0x58) = iVar32;
  }
  puVar21 = PTR_LAB_4a03b030;
  *(uint *)(PTR_LAB_4a03b030 + 0x5c) = ~(*(uint *)(local_28 + 0x34) >> 1) & 1;
  *(int *)(puVar21 + 0x60) = *(int *)(puVar21 + 0x60) + -0x20;
  uVar9 = uVar20 & 7;
  if ((uVar9 == 1 || uVar9 == 2) || uVar9 == 5) {
    puVar19 = *(undefined4 **)(local_28 + 0xa4);
    if (puVar19[1] == 0) {
      pcVar36 = (code *)0x4a03afe0;
      FUN_4a038b1c(puVar19);
    }
    *(short *)((int)puVar19 + 10) = *(short *)((int)puVar19 + 10) + 1;
    if ((uVar20 & 0x10) == 0) {
      uVar8 = puVar19[1];
    }
    else {
      uVar8 = *puVar19;
    }
    *(undefined4 *)(puVar21 + 0x8c) = uVar8;
  }
  uVar9 = local_28;
  *(undefined4 *)(puVar21 + 0x68) = *(undefined4 *)(PTR_PTR_4a03b040 + (uVar20 & 0x1ff) * 4);
  puVar5 = PTR_LAB_4a03e3f8;
  puVar4 = PTR_LAB_4a029df8;
  uVar24 = uVar22;
  uVar20 = uVar20 & 0x1ff;
  puVar23 = puVar21 + 0x6c;
  ppcVar34 = &pcStack_60;
  if (local_2c == 0) {
    uVar24 = unaff_r4;
    puVar19 = unaff_r5;
    uVar20 = unaff_r6;
    puVar23 = unaff_r7;
    puVar21 = unaff_r8;
    pcVar27 = unaff_r9;
    uVar28 = unaff_r10;
    uVar30 = unaff_r11;
    ppcVar34 = (code **)register0x00000054;
    pcVar36 = UNRECOVERED_JUMPTABLE_00;
  }
  iVar12 = (int)uVar22 >> 0x10;
  if (local_2c == 0) {
    *(code **)((int)ppcVar34 + -4) = pcVar36;
    *(uint *)((int)ppcVar34 + -8) = uVar30;
    *(uint *)((int)ppcVar34 + -0xc) = uVar28;
    *(code **)((int)ppcVar34 + -0x10) = pcVar27;
    *(undefined **)((int)ppcVar34 + -0x14) = puVar21;
    *(undefined **)((int)ppcVar34 + -0x18) = puVar23;
    *(uint *)((int)ppcVar34 + -0x1c) = uVar20;
    *(undefined4 **)((int)ppcVar34 + -0x20) = puVar19;
    *(uint *)((int)ppcVar34 + -0x24) = uVar24;
    *(uint *)((int)ppcVar34 + -0x28) = uVar9;
    *(uint *)((int)ppcVar34 + -0x2c) = uVar22;
    *(undefined4 *)((int)ppcVar34 + -0x30) = 0;
    uVar30 = (uint)(byte)PTR_LAB_4a029df8[0x44];
    piVar18 = (int *)(PTR_LAB_4a029df8 + 0xb4);
    bVar39 = uVar30 == 0;
    if (bVar39) {
      uVar30 = *(uint *)((int)ppcVar34 + -0x28);
    }
    iVar32 = 0;
    if (bVar39) {
      *(uint *)((int)ppcVar34 + -0x30) = (uint)*(byte *)(uVar30 + 0x62);
    }
    *(undefined4 *)(PTR_LAB_4a029df8 + 0x84) =
         *(undefined4 *)(*(int *)((int)ppcVar34 + -0x28) + 100);
    *(undefined4 *)(puVar4 + 0x88) = *(undefined4 *)(*(int *)((int)ppcVar34 + -0x28) + 0x68);
    *(undefined4 *)(puVar4 + 0x54) = 0;
    *(int *)(puVar4 + 0x4c) = iVar12;
    *(int *)(puVar4 + 0x50) = *(int *)(puVar4 + 0x40) + iVar12 * *(int *)(puVar4 + 0x38) * 2;
    iVar13 = (((uint)puVar17 & 0xffff) - 1) - iVar12;
    piVar10 = (int *)(*(int *)(puVar4 + 0xb0) + iVar12 * 4);
    do {
      iVar12 = *piVar10;
      piVar14 = piVar10 + 1;
      *piVar10 = 0;
      iVar37 = iVar32;
      for (; iVar12 != 0; iVar12 = *(int *)(iVar12 + 0x34)) {
        piVar18[iVar37] = iVar12;
        iVar37 = iVar37 + 1;
      }
      if (iVar37 == 2) {
        if (*(int *)*piVar18 <= **(int **)(puVar4 + 0xb8)) goto LAB_4a029b04;
        do {
          iVar12 = *piVar18;
          *piVar18 = *(int *)(puVar4 + 0xb8);
          *(int *)(puVar4 + 0xb8) = iVar12;
LAB_4a029b04:
          do {
            piVar10 = (int *)*piVar18;
            if (((*(ushort *)(piVar10 + 6) & 1) != 0) &&
               (0 < (**(int **)(puVar4 + 0xb8) >> 0x12) - (*piVar10 >> 0x12))) {
              FUN_4a05d92c(piVar10,*(int **)(puVar4 + 0xb8),*(undefined4 *)((int)ppcVar34 + -0x30),
                           *(undefined4 *)((int)ppcVar34 + -0x28));
            }
            bVar39 = iVar13 == 0;
            iVar13 = iVar13 + -1;
            *(int *)(puVar4 + 0x50) = *(int *)(puVar4 + 0x50) + *(int *)(puVar4 + 0x38) * 2;
            iVar12 = *(int *)(puVar4 + 0x4c);
            *(uint **)(puVar4 + 0x4c) = (uint *)(iVar12 + 1);
            if (bVar39) {
              return (uint *)(iVar12 + 1);
            }
            if (*piVar14 != 0) goto LAB_4a029b68;
            piVar10 = (int *)*piVar18;
            piVar14 = piVar14 + 1;
            uVar2 = *(ushort *)(piVar10 + 6);
            *piVar10 = piVar10[1] + *piVar10;
            if (((uVar2 & 4) != 0) || (piVar10[2] = piVar10[2] + piVar10[3], (uVar2 & 8) == 0)) {
              if ((uVar2 & 0x40) == 0) {
                piVar10[0xb] = piVar10[0xc] + piVar10[0xb];
              }
              if ((uVar2 & 0x10) == 0) {
                piVar10[9] = piVar10[9] + piVar10[7];
              }
              if ((uVar2 & 0x20) == 0) {
                piVar10[10] = piVar10[10] + piVar10[8];
              }
            }
            piVar10 = *(int **)(puVar4 + 0xb8);
            uVar2 = *(ushort *)(piVar10 + 6);
            *piVar10 = piVar10[1] + *piVar10;
            if (((uVar2 & 4) != 0) || (piVar10[2] = piVar10[2] + piVar10[3], (uVar2 & 8) == 0)) {
              if ((uVar2 & 0x40) == 0) {
                piVar10[0xb] = piVar10[0xc] + piVar10[0xb];
              }
              if ((uVar2 & 0x10) == 0) {
                piVar10[9] = piVar10[9] + piVar10[7];
              }
              if ((uVar2 & 0x20) == 0) {
                piVar10[10] = piVar10[10] + piVar10[8];
              }
            }
          } while (*(int *)*piVar18 <= **(int **)(puVar4 + 0xb8));
        } while( true );
      }
      iVar12 = 1;
      if (1 < iVar37) {
        do {
          puVar19 = (undefined4 *)piVar18[iVar12];
          piVar10 = (int *)*puVar19;
          if ((int)piVar10 < *(int *)piVar18[iVar12 + -1]) {
            iVar32 = iVar12 + -1;
            piVar38 = (int *)piVar18[iVar32];
            do {
              iVar29 = iVar32 + -1;
              piVar18[iVar32 + 1] = (int)piVar38;
              if ((iVar29 < 0) || (piVar38 = (int *)piVar18[iVar29], *piVar38 <= (int)piVar10))
              break;
              piVar35 = piVar18 + iVar29;
              iVar32 = iVar32 + -2;
              bVar39 = iVar32 == 0;
              piVar35[1] = (int)piVar38;
              if (-1 < iVar32) {
                piVar38 = (int *)piVar18[iVar32];
                piVar35 = (int *)*piVar38;
                bVar39 = piVar35 == piVar10;
              }
              iVar29 = iVar32;
            } while (!bVar39 && (-1 < iVar32 && (int)piVar10 <= (int)piVar35));
            piVar18[iVar29 + 1] = (int)puVar19;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar37);
      }
      iVar12 = 0;
      if (1 < iVar37) {
        do {
          piVar10 = (int *)0x0;
          iVar32 = 0;
          for (; iVar12 < iVar37; iVar12 = iVar12 + 1) {
            if ((*(ushort *)(piVar18[iVar12] + 0x18) & 1) == 0) {
              iVar32 = iVar32 + -1;
            }
            else {
              iVar32 = iVar32 + 1;
            }
            if (iVar32 == 1) {
              piVar10 = (int *)piVar18[iVar12];
              iVar12 = iVar12 + 1;
              break;
            }
          }
          if (iVar37 <= iVar12) break;
          piVar38 = (int *)0x0;
          do {
            iVar29 = iVar12;
            if ((*(ushort *)(piVar18[iVar29] + 0x18) & 1) == 0) {
              iVar32 = iVar32 + -1;
            }
            else {
              iVar32 = iVar32 + 1;
            }
            if (iVar32 == 0) {
              piVar38 = (int *)piVar18[iVar29];
              break;
            }
            iVar12 = iVar29 + 1;
          } while (iVar29 + 1 < iVar37);
          iVar12 = iVar29 + 1;
          if (iVar37 < iVar12) break;
          if (((*(ushort *)(piVar10 + 6) & 1) != 0) && (0 < (*piVar38 >> 0x12) - (*piVar10 >> 0x12))
             ) {
            FUN_4a05d92c(piVar10,piVar38,*(undefined4 *)((int)ppcVar34 + -0x30),
                         *(undefined4 *)((int)ppcVar34 + -0x28));
          }
        } while (iVar29 + 2 < iVar37);
      }
      bVar39 = iVar13 == 0;
      iVar13 = iVar13 + -1;
      *(int *)(puVar4 + 0x50) = *(int *)(puVar4 + 0x50) + *(int *)(puVar4 + 0x38) * 2;
      iVar12 = *(int *)(puVar4 + 0x4c);
      *(uint **)(puVar4 + 0x4c) = (uint *)(iVar12 + 1);
      if (bVar39) {
        return (uint *)(iVar12 + 1);
      }
LAB_4a029b68:
      iVar29 = *(int *)(puVar4 + 0x4c);
      iVar32 = 0;
      iVar12 = 0;
      piVar10 = piVar14;
      if (0 < iVar37) {
        do {
          piVar14 = (int *)piVar18[iVar12];
          if (iVar29 < *(short *)((int)piVar14 + 0x1a)) {
            uVar2 = *(ushort *)(piVar14 + 6);
            *piVar14 = *piVar14 + piVar14[1];
            if (((uVar2 & 4) != 0) || (piVar14[2] = piVar14[2] + piVar14[3], (uVar2 & 8) == 0)) {
              if ((uVar2 & 0x40) == 0) {
                piVar14[0xb] = piVar14[0xc] + piVar14[0xb];
              }
              if ((uVar2 & 0x10) == 0) {
                piVar14[9] = piVar14[9] + piVar14[7];
              }
              if ((uVar2 & 0x20) == 0) {
                piVar14[10] = piVar14[10] + piVar14[8];
              }
            }
            if (iVar32 != iVar12) {
              piVar18[iVar32] = piVar18[iVar12];
            }
            iVar32 = iVar32 + 1;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar37);
      }
    } while( true );
  }
  *(undefined4 *)((int)ppcVar34 + 0x5c) = *(undefined4 *)((int)ppcVar34 + 0x5c);
  *(undefined4 *)((int)ppcVar34 + 0x58) = *(undefined4 *)((int)ppcVar34 + 0x58);
  *(undefined4 *)((int)ppcVar34 + 0x54) = *(undefined4 *)((int)ppcVar34 + 0x54);
  *(undefined4 *)((int)ppcVar34 + 0x50) = *(undefined4 *)((int)ppcVar34 + 0x50);
  *(undefined4 *)((int)ppcVar34 + 0x4c) = *(undefined4 *)((int)ppcVar34 + 0x4c);
  *(undefined4 *)((int)ppcVar34 + 0x48) = *(undefined4 *)((int)ppcVar34 + 0x48);
  *(undefined4 *)((int)ppcVar34 + 0x44) = *(undefined4 *)((int)ppcVar34 + 0x44);
  *(undefined4 *)((int)ppcVar34 + 0x40) = *(undefined4 *)((int)ppcVar34 + 0x40);
  *(undefined4 *)((int)ppcVar34 + 0x3c) = *(undefined4 *)((int)ppcVar34 + 0x3c);
  *(uint *)((int)ppcVar34 + 0x38) = local_28;
  puVar7 = (uint *)((int)ppcVar34 + 0x34);
  *puVar7 = uVar22;
  iVar13 = *(int *)(PTR_LAB_4a03e3f8 + 0x38);
  iVar32 = *(int *)(PTR_LAB_4a03e3f8 + 0x40);
  *(int *)((int)ppcVar34 + 0x30) = *(int *)(PTR_LAB_4a03e3f8 + 0xb0) + iVar12 * 4;
  *(int *)(PTR_LAB_4a03e3f8 + 0x4c) = iVar12;
  *(int *)(puVar5 + 0x50) = iVar32 + iVar12 * iVar13 * 2;
  *puVar7 = (((uint)puVar17 & 0xffff) - 1) - iVar12;
  piVar18 = (int *)(puVar5 + 0xb4);
  iVar12 = 0;
  do {
    iVar32 = **(int **)((int)ppcVar34 + 0x30);
    **(undefined4 **)((int)ppcVar34 + 0x30) = 0;
    *(int *)((int)ppcVar34 + 0x30) = *(int *)((int)ppcVar34 + 0x30) + 4;
    iVar13 = iVar12;
    for (; iVar32 != 0; iVar32 = *(int *)(iVar32 + 0x34)) {
      piVar18[iVar13] = iVar32;
      iVar13 = iVar13 + 1;
    }
    if (iVar13 == 2) {
      if (*(int *)*piVar18 <= **(int **)(puVar5 + 0xb8)) goto LAB_4a03dc88;
      do {
        iVar12 = *piVar18;
        *piVar18 = *(int *)(puVar5 + 0xb8);
        *(int *)(puVar5 + 0xb8) = iVar12;
LAB_4a03dc88:
        do {
          puVar21 = PTR_LAB_4a03e3f8;
          piVar10 = (int *)*piVar18;
          if ((*(ushort *)(piVar10 + 6) & 1) != 0) {
            piVar14 = *(int **)(puVar5 + 0xb8);
            iVar37 = *piVar14;
            iVar12 = iVar37 >> 0x12;
            iVar32 = *piVar10 >> 0x12;
            if (0 < iVar12 - iVar32) {
              uVar30 = *piVar10 >> 0xf;
              *(int *)((int)ppcVar34 + 0x2c) = iVar12 - iVar32;
              *(undefined4 *)((int)ppcVar34 + 0x28) =
                   *(undefined4 *)(*(int *)PTR_DAT_4a03e3fc + ((iVar37 >> 0xf) - uVar30) * 4);
              *(undefined4 *)(PTR_LAB_4a03e3f8 + 0x6c) = *(undefined4 *)((int)ppcVar34 + 0x2c);
              *(int *)(puVar21 + 0x70) = *(int *)(puVar21 + 0x50) + iVar32 * 2;
              puVar4 = PTR_LAB_4a03e3f8;
              uVar20 = (piVar14[9] >> 0xe) - (piVar10[9] >> 0xe);
              uVar22 = (piVar14[10] >> 0xe) - (piVar10[10] >> 0xe);
              iVar12 = (piVar10[9] >> 0xe) * 0x4000;
              iVar32 = (piVar10[10] >> 0xe) * 0x4000;
              if ((int)uVar20 < 0) {
                iVar12 = iVar12 + -1;
              }
              uVar28 = *(uint *)((int)ppcVar34 + 0x28);
              uVar9 = *(uint *)(PTR_LAB_4a03e3f8 + 0x54);
              if ((int)uVar22 < 0) {
                iVar32 = iVar32 + -1;
              }
              iVar37 = 7 - (uVar30 & 7);
              if (*(int *)((int)ppcVar34 + 0x2c) == 1) {
                iVar29 = iVar37 * ((int)uVar28 >> 10) >> 4;
                iVar32 = ((int)uVar22 >> 2) * iVar29 + iVar32 >> ((uVar9 & 0x7f) << 1);
                *(int *)(puVar21 + 0x74) = ((int)uVar20 >> 2) * iVar29 + iVar12 >> (uVar9 & 0xff);
                if (*(uint *)(puVar4 + 0x58) != 0) {
                  iVar32 = iVar32 << (*(uint *)(puVar4 + 0x58) & 0xff);
                }
                *(int *)(puVar21 + 0x78) = iVar32;
              }
              else {
                bVar39 = (int)(uVar20 ^ uVar28) < 0;
                if (bVar39) {
                  uVar20 = -uVar20;
                }
                *(undefined4 *)((int)ppcVar34 + 0x24) = 0x13;
                uVar30 = (uint)((longlong)(int)uVar20 * (longlong)(int)uVar28) >> 0xd |
                         (int)((ulonglong)((longlong)(int)uVar20 * (longlong)(int)uVar28) >> 0x20)
                         << (*(uint *)((int)ppcVar34 + 0x24) & 0xff);
                if (bVar39) {
                  uVar30 = -uVar30;
                }
                bVar39 = (int)(uVar22 ^ uVar28) < 0;
                if (bVar39) {
                  uVar22 = -uVar22;
                }
                uVar20 = (uint)((longlong)(int)uVar22 * (longlong)(int)uVar28) >> 0xd |
                         (int)((ulonglong)((longlong)(int)uVar22 * (longlong)(int)uVar28) >> 0x20)
                         << 0x13;
                if (bVar39) {
                  uVar20 = -uVar20;
                }
                if (uVar9 == 0) {
                  iVar32 = iVar32 + (((int)uVar20 >> 1) * iVar37 >> 2);
                }
                else {
                  iVar29 = (int)uVar20 >> (uVar9 & 0xff);
                  uVar30 = (int)uVar30 >> (uVar9 & 0xff);
                  iVar12 = iVar12 >> (uVar9 & 0xff);
                  uVar20 = iVar29 >> (uVar9 & 0xff);
                  iVar32 = (iVar32 >> (uVar9 & 0xff)) + ((iVar29 >> 1) * iVar37 >> 2) >>
                           (uVar9 & 0xff);
                }
                *(int *)(puVar21 + 0x74) = iVar12 + (iVar37 * ((int)uVar30 >> 1) >> 2);
                puVar4 = PTR_LAB_4a03e3f8;
                *(uint *)(puVar21 + 0x7c) = uVar30;
                uVar30 = *(uint *)(puVar4 + 0x58);
                if (uVar30 != 0) {
                  uVar20 = uVar20 << (uVar30 & 0xff);
                  iVar32 = iVar32 << (uVar30 & 0xff);
                }
                *(uint *)(puVar21 + 0x80) = uVar20;
                *(int *)(puVar21 + 0x78) = iVar32;
              }
              uVar30 = piVar10[0xb] >> 0x11;
              uVar20 = piVar14[0xb] >> 0x11;
              if (0x7f0 < (int)uVar30) {
                uVar30 = 0x7f0;
              }
              if (0x7f0 < (int)uVar20) {
                uVar20 = 0x7f0;
              }
              uVar22 = uVar30 ^ uVar20;
              bVar39 = (uVar22 & 0x7c0) == 0;
              if (bVar39) {
                uVar22 = (uint)(byte)PTR_LAB_4a03e3f8[0x45];
              }
              if (bVar39 && uVar22 == 0) {
                uVar30 = uVar30 << 0x11 | 0x80000000;
              }
              else {
                iVar12 = (*(int *)((int)ppcVar34 + 0x28) >> 10) * (uVar20 - uVar30);
                *(int *)(puVar21 + 0x94) = iVar12;
                uVar30 = (iVar37 * (iVar12 >> 2) >> 1) + uVar30 * 0x20000;
              }
              puVar4 = PTR_LAB_4a03e3f8;
              *(uint *)(puVar21 + 0x90) = uVar30;
              iVar12 = *(int *)(puVar4 + 0x60);
              if (iVar12 < 0) {
                host_s3eDeviceYield_arm(0x80000000);
                iVar12 = *(int *)(puVar4 + 100);
              }
              *(int *)(puVar4 + 0x60) = (iVar12 - *(int *)((int)ppcVar34 + 0x2c)) + -0x10;
              (**(code **)(puVar4 + 0x68))(puVar21 + 0x6c);
            }
          }
          puVar21 = PTR_LAB_4a03e3f8;
          *(int *)(PTR_LAB_4a03e3f8 + 0x50) =
               *(int *)(PTR_LAB_4a03e3f8 + 0x50) + *(int *)(PTR_LAB_4a03e3f8 + 0x38) * 2;
          uVar30 = *puVar7;
          *(int *)(puVar21 + 0x4c) = *(int *)(puVar21 + 0x4c) + 1;
          *puVar7 = uVar30 - 1;
          if (uVar30 == 0) {
            return (uint *)0xffffffff;
          }
          if (**(int **)((int)ppcVar34 + 0x30) != 0) goto LAB_4a03df2c;
          *(int *)((int)ppcVar34 + 0x30) = *(int *)((int)ppcVar34 + 0x30) + 4;
          piVar10 = (int *)*piVar18;
          uVar2 = *(ushort *)(piVar10 + 6);
          *piVar10 = piVar10[1] + *piVar10;
          if ((uVar2 & 0x40) == 0) {
            piVar10[0xb] = piVar10[0xc] + piVar10[0xb];
          }
          if ((uVar2 & 0x10) == 0) {
            piVar10[9] = piVar10[9] + piVar10[7];
          }
          if ((uVar2 & 0x20) == 0) {
            piVar10[10] = piVar10[10] + piVar10[8];
          }
          piVar10 = *(int **)(puVar5 + 0xb8);
          uVar2 = *(ushort *)(piVar10 + 6);
          *piVar10 = piVar10[1] + *piVar10;
          if ((uVar2 & 0x40) == 0) {
            piVar10[0xb] = piVar10[0xc] + piVar10[0xb];
          }
          if ((uVar2 & 0x10) == 0) {
            piVar10[9] = piVar10[9] + piVar10[7];
          }
          if ((uVar2 & 0x20) == 0) {
            piVar10[10] = piVar10[10] + piVar10[8];
          }
        } while (*(int *)*piVar18 <= **(int **)(puVar5 + 0xb8));
      } while( true );
    }
    iVar12 = 1;
    if (1 < iVar13) {
      do {
        puVar19 = (undefined4 *)piVar18[iVar12];
        piVar10 = (int *)*puVar19;
        if ((int)piVar10 < *(int *)piVar18[iVar12 + -1]) {
          iVar32 = iVar12 + -1;
          piVar14 = (int *)piVar18[iVar32];
          do {
            iVar37 = iVar32 + -1;
            piVar18[iVar32 + 1] = (int)piVar14;
            if ((iVar37 < 0) || (piVar14 = (int *)piVar18[iVar37], *piVar14 <= (int)piVar10)) break;
            piVar38 = piVar18 + iVar37;
            iVar32 = iVar32 + -2;
            bVar39 = iVar32 == 0;
            piVar38[1] = (int)piVar14;
            if (-1 < iVar32) {
              piVar14 = (int *)piVar18[iVar32];
              piVar38 = (int *)*piVar14;
              bVar39 = piVar38 == piVar10;
            }
            iVar37 = iVar32;
          } while (!bVar39 && (-1 < iVar32 && (int)piVar10 <= (int)piVar38));
          piVar18[iVar37 + 1] = (int)puVar19;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar13);
    }
    iVar12 = 0;
    if (1 < iVar13) {
      do {
        puVar21 = PTR_LAB_4a03e3f8;
        piVar10 = (int *)0x0;
        iVar32 = 0;
        for (; iVar12 < iVar13; iVar12 = iVar12 + 1) {
          if ((*(ushort *)(piVar18[iVar12] + 0x18) & 1) == 0) {
            iVar32 = iVar32 + -1;
          }
          else {
            iVar32 = iVar32 + 1;
          }
          if (iVar32 == 1) {
            piVar10 = (int *)piVar18[iVar12];
            iVar12 = iVar12 + 1;
            break;
          }
        }
        if (iVar13 <= iVar12) break;
        piVar14 = (int *)0x0;
        do {
          iVar37 = iVar12;
          if ((*(ushort *)(piVar18[iVar37] + 0x18) & 1) == 0) {
            iVar32 = iVar32 + -1;
          }
          else {
            iVar32 = iVar32 + 1;
          }
          if (iVar32 == 0) {
            piVar14 = (int *)piVar18[iVar37];
            break;
          }
          iVar12 = iVar37 + 1;
        } while (iVar37 + 1 < iVar13);
        iVar12 = iVar37 + 1;
        if (iVar13 < iVar12) break;
        if ((*(ushort *)(piVar10 + 6) & 1) != 0) {
          iVar33 = *piVar14;
          iVar15 = *piVar10;
          iVar32 = iVar33 >> 0x12;
          iVar29 = iVar15 >> 0x12;
          if (0 < iVar32 - iVar29) {
            *(int **)((int)ppcVar34 + 0x2c) = piVar10 + 9;
            uVar30 = iVar15 >> 0xf;
            *(int **)((int)ppcVar34 + 0x28) = piVar14 + 9;
            iVar32 = iVar32 - iVar29;
            *(undefined4 *)((int)ppcVar34 + 0x24) =
                 *(undefined4 *)(*(int *)PTR_DAT_4a03e3fc + ((iVar33 >> 0xf) - uVar30) * 4);
            *(int *)(PTR_LAB_4a03e3f8 + 0x6c) = iVar32;
            *(int *)(puVar21 + 0x70) = *(int *)(puVar21 + 0x50) + iVar29 * 2;
            puVar4 = PTR_LAB_4a03e3f8;
            iVar29 = **(int **)((int)ppcVar34 + 0x2c) >> 0xe;
            uVar20 = (**(int **)((int)ppcVar34 + 0x28) >> 0xe) - iVar29;
            iVar29 = iVar29 * 0x4000;
            iVar15 = (*(int **)((int)ppcVar34 + 0x2c))[1] >> 0xe;
            uVar22 = ((*(int **)((int)ppcVar34 + 0x28))[1] >> 0xe) - iVar15;
            if ((int)uVar20 < 0) {
              iVar29 = iVar29 + -1;
            }
            iVar15 = iVar15 * 0x4000;
            uVar28 = *(uint *)((int)ppcVar34 + 0x24);
            uVar9 = *(uint *)(PTR_LAB_4a03e3f8 + 0x54);
            if ((int)uVar22 < 0) {
              iVar15 = iVar15 + -1;
            }
            iVar33 = 7 - (uVar30 & 7);
            if (iVar32 == 1) {
              iVar1 = iVar33 * ((int)uVar28 >> 10) >> 4;
              iVar15 = ((int)uVar22 >> 2) * iVar1 + iVar15 >> ((uVar9 & 0x7f) << 1);
              *(int *)(puVar21 + 0x74) = iVar1 * ((int)uVar20 >> 2) + iVar29 >> (uVar9 & 0xff);
              if (*(uint *)(puVar4 + 0x58) != 0) {
                iVar15 = iVar15 << (*(uint *)(puVar4 + 0x58) & 0xff);
              }
              *(int *)(puVar21 + 0x78) = iVar15;
            }
            else {
              bVar39 = (int)(uVar20 ^ uVar28) < 0;
              if (bVar39) {
                uVar20 = -uVar20;
              }
              *(undefined4 *)((int)ppcVar34 + 0x20) = 0x13;
              uVar30 = (uint)((longlong)(int)uVar20 * (longlong)(int)uVar28) >> 0xd |
                       (int)((ulonglong)((longlong)(int)uVar20 * (longlong)(int)uVar28) >> 0x20) <<
                       (*(uint *)((int)ppcVar34 + 0x20) & 0xff);
              if (bVar39) {
                uVar30 = -uVar30;
              }
              bVar39 = (int)(uVar22 ^ uVar28) < 0;
              if (bVar39) {
                uVar22 = -uVar22;
              }
              uVar20 = (uint)((longlong)(int)uVar22 * (longlong)(int)uVar28) >> 0xd |
                       (int)((ulonglong)((longlong)(int)uVar22 * (longlong)(int)uVar28) >> 0x20) <<
                       0x13;
              if (bVar39) {
                uVar20 = -uVar20;
              }
              if (uVar9 == 0) {
                iVar15 = iVar15 + (((int)uVar20 >> 1) * iVar33 >> 2);
              }
              else {
                iVar1 = (int)uVar20 >> (uVar9 & 0xff);
                uVar30 = (int)uVar30 >> (uVar9 & 0xff);
                iVar29 = iVar29 >> (uVar9 & 0xff);
                uVar20 = iVar1 >> (uVar9 & 0xff);
                iVar15 = (iVar15 >> (uVar9 & 0xff)) + ((iVar1 >> 1) * iVar33 >> 2) >> (uVar9 & 0xff)
                ;
              }
              *(int *)(puVar21 + 0x74) = iVar29 + (iVar33 * ((int)uVar30 >> 1) >> 2);
              puVar4 = PTR_LAB_4a03e3f8;
              *(uint *)(puVar21 + 0x7c) = uVar30;
              uVar30 = *(uint *)(puVar4 + 0x58);
              if (uVar30 != 0) {
                uVar20 = uVar20 << (uVar30 & 0xff);
                iVar15 = iVar15 << (uVar30 & 0xff);
              }
              *(uint *)(puVar21 + 0x80) = uVar20;
              *(int *)(puVar21 + 0x78) = iVar15;
            }
            uVar30 = *(int *)(*(int *)((int)ppcVar34 + 0x2c) + 8) >> 0x11;
            uVar20 = *(int *)(*(int *)((int)ppcVar34 + 0x28) + 8) >> 0x11;
            if (0x7f0 < (int)uVar30) {
              uVar30 = 0x7f0;
            }
            if (0x7f0 < (int)uVar20) {
              uVar20 = 0x7f0;
            }
            uVar22 = uVar30 ^ uVar20;
            bVar39 = (uVar22 & 0x7c0) == 0;
            if (bVar39) {
              uVar22 = (uint)(byte)PTR_LAB_4a03e3f8[0x45];
            }
            if (bVar39 && uVar22 == 0) {
              uVar30 = uVar30 << 0x11 | 0x80000000;
            }
            else {
              iVar29 = (*(int *)((int)ppcVar34 + 0x24) >> 10) * (uVar20 - uVar30);
              *(int *)(puVar21 + 0x94) = iVar29;
              uVar30 = ((iVar29 >> 2) * iVar33 >> 1) + uVar30 * 0x20000;
            }
            puVar4 = PTR_LAB_4a03e3f8;
            *(uint *)(puVar21 + 0x90) = uVar30;
            iVar29 = *(int *)(puVar4 + 0x60);
            if (iVar29 < 0) {
              host_s3eDeviceYield_arm(0x80000000);
              iVar29 = *(int *)(puVar4 + 100);
            }
            *(int *)(puVar4 + 0x60) = (iVar29 - iVar32) + -0x10;
            (**(code **)(puVar4 + 0x68))(puVar21 + 0x6c);
          }
        }
      } while (iVar37 + 2 < iVar13);
    }
    puVar21 = PTR_LAB_4a03e3f8;
    *(int *)(PTR_LAB_4a03e3f8 + 0x50) =
         *(int *)(PTR_LAB_4a03e3f8 + 0x50) + *(int *)(PTR_LAB_4a03e3f8 + 0x38) * 2;
    *(int *)(puVar21 + 0x4c) = *(int *)(puVar21 + 0x4c) + 1;
    uVar30 = *puVar7;
    *puVar7 = uVar30 - 1;
    if (uVar30 == 0) {
      return (uint *)0xffffffff;
    }
LAB_4a03df2c:
    iVar12 = 0;
    iVar37 = *(int *)(PTR_LAB_4a03e3f8 + 0x4c);
    iVar32 = 0;
    if (0 < iVar13) {
      do {
        piVar10 = (int *)piVar18[iVar32];
        if (iVar37 < *(short *)((int)piVar10 + 0x1a)) {
          uVar2 = *(ushort *)(piVar10 + 6);
          *piVar10 = *piVar10 + piVar10[1];
          if ((uVar2 & 0x40) == 0) {
            piVar10[0xb] = piVar10[0xc] + piVar10[0xb];
          }
          if ((uVar2 & 0x10) == 0) {
            piVar10[9] = piVar10[9] + piVar10[7];
          }
          if ((uVar2 & 0x20) == 0) {
            piVar10[10] = piVar10[10] + piVar10[8];
          }
          if (iVar12 != iVar32) {
            piVar18[iVar12] = piVar18[iVar32];
          }
          iVar12 = iVar12 + 1;
        }
        iVar32 = iVar32 + 1;
      } while (iVar32 < iVar13);
    }
  } while( true );
}



// Address: 4a03b044

void FUN_4a03b044(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_4a03b084;
  if (*(int **)PTR_DAT_4a03b084 != (int *)0x0) {
    (**(code **)(**(int **)PTR_DAT_4a03b084 + 4))();
  }
  if (*(int **)(puVar1 + 4) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a03b078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(puVar1 + 4) + 4))();
  return;
}



// Address: 4a03b088

int FUN_4a03b088(int param_1)

{
  return *(int *)(*(int *)PTR_DAT_4a03b0a8 + 0x3cc) *
         (param_1 + *(int *)(*(int *)PTR_DAT_4a03b0a8 + 0x2d0) * -0x40) >> 0xc;
}



// Address: 4a03b0ac

int FUN_4a03b0ac(int param_1)

{
  return *(int *)(*(int *)PTR_DAT_4a03b0c8 + 0x2c8) +
         (*(int *)(*(int *)PTR_DAT_4a03b0c8 + 0x3dc) * param_1 >> 0xc);
}



// Address: 4a03b0cc

int FUN_4a03b0cc(int param_1)

{
  return *(int *)(*(int *)PTR_DAT_4a03b0ec + 0x3d4) *
         (param_1 - *(int *)(*(int *)PTR_DAT_4a03b0ec + 0x2c8)) >> 0xc;
}



// Address: 4a03b0f4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a03b0f4(int param_1,int param_2,int param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  
  puVar1 = PTR_DAT_4a03b170;
  iVar4 = *(int *)PTR_DAT_4a03b170;
  iVar7 = param_3 * 4 + param_1 * 8;
  iVar2 = param_4 * 4;
  bVar11 = *(int *)(iVar4 + 0x34c) == param_3;
  iVar9 = iVar2 + param_2 * 8;
  if (bVar11) {
    iVar2 = *(int *)(iVar4 + 0x350);
  }
  bVar12 = bVar11 && iVar2 == param_4;
  if (bVar11 && iVar2 == param_4) {
    bVar12 = *(int *)(iVar4 + 0x318) == iVar7;
  }
  bVar11 = false;
  if (bVar12) {
    bVar11 = *(int *)(iVar4 + 0x31c) == iVar9;
  }
  if (bVar11) {
    return;
  }
  if (*(int *)(PTR_DAT_4a03b174 + 0x28) != 0 && *(int *)(iVar4 + 0x34c) != 0) {
    FUN_4a05a618();
  }
  iVar2 = *(int *)puVar1;
  *(int *)(iVar2 + 0x318) = iVar7;
  *(int *)(iVar2 + 0x31c) = iVar9;
  *(int *)(iVar2 + 0x34c) = param_3;
  *(int *)(iVar2 + 0x350) = param_4;
  iVar7 = *(int *)PTR_DAT_4a04d43c;
  iVar9 = *(int *)(iVar7 + 0x34c);
  iVar2 = *(int *)(iVar7 + 0x350);
  iVar5 = *(int *)(iVar7 + 0x354);
  iVar4 = iVar9;
  if (iVar5 == 0) {
    *(undefined4 *)(iVar7 + 800) = *(undefined4 *)(iVar7 + 0x318);
    iVar9 = *(int *)(iVar7 + 0x31c);
  }
  else {
    if (iVar5 == 1) {
      *(int *)(iVar7 + 800) = *(int *)(iVar7 + 0x33c) * 8 - *(int *)(iVar7 + 0x31c);
      *(undefined4 *)(iVar7 + 0x324) = *(undefined4 *)(iVar7 + 0x318);
      iVar4 = iVar2;
      iVar2 = iVar9;
      goto LAB_4a047eac;
    }
    if (iVar5 != 2) {
      if (iVar5 == 3) {
        *(undefined4 *)(iVar7 + 800) = *(undefined4 *)(iVar7 + 0x31c);
        *(int *)(iVar7 + 0x324) = *(int *)(iVar7 + 0x340) * 8 - *(int *)(iVar7 + 0x318);
        iVar4 = iVar2;
        iVar2 = iVar9;
      }
      goto LAB_4a047eac;
    }
    *(int *)(iVar7 + 800) = *(int *)(iVar7 + 0x33c) * 8 - *(int *)(iVar7 + 0x318);
    iVar9 = *(int *)(iVar7 + 0x340) * 8 - *(int *)(iVar7 + 0x31c);
  }
  *(int *)(iVar7 + 0x324) = iVar9;
LAB_4a047eac:
  iVar9 = *(int *)(iVar7 + 0x324) >> (*(uint *)(iVar7 + 0x66c) & 0xff);
  iVar2 = iVar2 >> (*(uint *)(iVar7 + 0x66c) & 0xff);
  iVar5 = iVar9 + iVar2 * -4;
  *(int *)(iVar7 + 0x328) = iVar9;
  iVar9 = iVar9 + iVar2 * 4;
  *(int *)(iVar7 + 0x2e8) = iVar5;
  *(int *)(iVar7 + 0x2ec) = iVar9;
  *(int *)(iVar7 + 0x2f0) = *(int *)(iVar7 + 800) + iVar4 * -4;
  *(int *)(iVar7 + 0x2f4) = *(int *)(iVar7 + 800) + iVar4 * 4;
  *(short *)(iVar7 + 0x2f8) = (short)((uint)(*(int *)(iVar7 + 0x2f0) << 0xd) >> 0x10);
  *(short *)(iVar7 + 0x2fa) = (short)((uint)(iVar5 * 0x2000) >> 0x10);
  *(short *)(iVar7 + 0x2fc) =
       (short)((*(int *)(iVar7 + 0x2f4) - *(int *)(iVar7 + 0x2f0) & 0xfff8ffffU) >> 3);
  *(short *)(iVar7 + 0x2fe) = (short)((iVar9 - iVar5 & 0xfff8ffffU) >> 3);
  iVar7 = *(int *)PTR_DAT_4a048034;
  iVar2 = *(int *)(iVar7 + 0x34c);
  iVar4 = *(int *)(iVar7 + 0x350);
  if ((*(uint *)(iVar7 + 0x354) & 1) == 0) {
    iVar4 = iVar4 >> (*(uint *)(iVar7 + 0x66c) & 0xff);
  }
  else {
    iVar2 = iVar2 >> (*(uint *)(iVar7 + 0x66c) & 0xff);
  }
  uVar3 = FUN_4a0015f0(0x1000000,iVar2 << 5);
  *(undefined4 *)(iVar7 + 0x330) = uVar3;
  iVar9 = FUN_4a0015f0(0x1000000,iVar4 << 5);
  *(int *)(iVar7 + 0x334) = iVar9;
  if ((*(uint *)(iVar7 + 0x354) & 1) == 0) {
    *(int *)(iVar7 + 0x334) = iVar9 >> (*(uint *)(iVar7 + 0x66c) & 0xff);
  }
  else {
    *(int *)(iVar7 + 0x330) = *(int *)(iVar7 + 0x330) >> (*(uint *)(iVar7 + 0x66c) & 0xff);
  }
  uVar3 = FUN_4a0015f0(0x40000,*(undefined4 *)(iVar7 + 0x2dc));
  *(undefined4 *)(iVar7 + 0x32c) = uVar3;
  iVar9 = FUN_4a02afd0(*(int *)(iVar7 + 0x2dc) * *(int *)(iVar7 + 0x2dc) +
                       ((int)(iVar2 * iVar2 + ((uint)(iVar2 * iVar2 >> 0x1f) >> 0x1e)) >> 2));
  *(int *)(iVar7 + 0x2e0) = iVar9 >> 6;
  iVar9 = FUN_4a02afd0(*(int *)(iVar7 + 0x2dc) * *(int *)(iVar7 + 0x2dc) +
                       ((int)(iVar4 * iVar4 + ((uint)(iVar4 * iVar4 >> 0x1f) >> 0x1e)) >> 2));
  uVar3 = *(undefined4 *)(iVar7 + 0x2dc);
  iVar5 = FUN_4a0015f0(*(int *)(iVar7 + 0x2e0) << 0xc,uVar3);
  iVar9 = FUN_4a0015f0((iVar9 >> 6) << 0xc,uVar3);
  *(int *)(iVar7 + 0x2e0) = iVar5 * *(int *)(iVar7 + 0x330) >> 0xc;
  *(int *)(iVar7 + 0x2e4) = *(int *)(iVar7 + 0x334) * iVar9 >> 0xc;
  *(int *)(iVar7 + 0x314) = iVar4 * 8 + -1;
  *(int *)(iVar7 + 0x310) = iVar2 * 8 + -1;
  iVar4 = *(int *)(iVar7 + 0x2c8);
  iVar2 = iVar4 * *(int *)(iVar7 + 0x32c) >> 0xc;
  *(int *)(iVar7 + 0x2d0) = iVar2;
  if (iVar2 < 6) {
    iVar2 = 5;
  }
  *(int *)(iVar7 + 0x2d0) = iVar2;
  iVar8 = *(int *)(iVar7 + 0x2cc);
  iVar9 = iVar8 * *(int *)(iVar7 + 0x32c) >> 0xc;
  iVar2 = iVar9 - iVar2;
  *(int *)(iVar7 + 0x2d4) = iVar9;
  uVar3 = FUN_4a0015f0((iVar8 - iVar4) * 0x1000,iVar2 * 0x40);
  *(undefined4 *)(iVar7 + 0x3c8) = uVar3;
  uVar3 = FUN_4a0015f0(iVar2 * 0x8000,iVar8 - iVar4);
  *(undefined4 *)(iVar7 + 0x3d0) = uVar3;
  iVar6 = *(int *)PTR_DAT_4a03ebbc;
  iVar5 = *(int *)(iVar6 + 0x32c);
  iVar9 = *(int *)(iVar6 + 0x3ac);
  iVar2 = iVar5 * iVar4 >> 0xc;
  iVar7 = iVar5 * iVar8 >> 0xc;
  if (iVar2 < 5) {
    iVar2 = 5;
  }
  iVar10 = *(int *)(iVar6 + 0x3e0);
  if (*(uint *)(iVar6 + 1000) != 0xffffffff) {
    iVar9 = iVar7 >> (*(uint *)(iVar6 + 1000) & 0xff);
  }
  if (iVar10 == 0) {
    iVar10 = *(int *)(iVar6 + 0x3e4);
    if (*(int *)(iVar6 + 0x2cc) + iVar10 != *(int *)(iVar6 + 0x2c8)) {
      uVar3 = FUN_4a0015f0(iVar9 << 0xc,((iVar7 + (iVar10 * iVar5 >> 0xc)) - iVar2) * 0x40);
      *(undefined4 *)(iVar6 + 0x3cc) = uVar3;
      uVar3 = FUN_4a0015f0(iVar9 << 0xc,(iVar8 + iVar10) - iVar4);
      *(undefined4 *)(iVar6 + 0x3d4) = uVar3;
    }
    if (iVar9 != 0) {
      uVar3 = FUN_4a0015f0(((iVar7 + (iVar10 * *(int *)(iVar6 + 0x32c) >> 0xc)) - iVar2) * 0x8000,
                           iVar9);
      *(undefined4 *)(iVar6 + 0x3d8) = uVar3;
      uVar3 = FUN_4a0015f0(((iVar8 + iVar10) - iVar4) * 0x1000,iVar9);
      *(undefined4 *)(iVar6 + 0x3dc) = uVar3;
    }
  }
  else {
    iVar5 = iVar9 - iVar10;
    uVar3 = FUN_4a0015f0(iVar5 * 0x1000,(iVar7 - iVar2) * 0x40);
    *(undefined4 *)(iVar6 + 0x3cc) = uVar3;
    uVar3 = FUN_4a0015f0(iVar5 * 0x1000,iVar8 - iVar4);
    *(undefined4 *)(iVar6 + 0x3d4) = uVar3;
    if (iVar9 != iVar10) {
      uVar3 = FUN_4a0015f0((iVar7 - iVar2) * 0x8000,iVar5);
      *(undefined4 *)(iVar6 + 0x3d8) = uVar3;
      uVar3 = FUN_4a0015f0((iVar8 - iVar4) * 0x1000,iVar5);
      *(undefined4 *)(iVar6 + 0x3dc) = uVar3;
    }
  }
  if (*(int *)(iVar6 + 0x3cc) != 0) {
    iVar4 = FUN_4a0015f0(iVar9 << 0xc);
    *(int *)(iVar6 + 0x2d8) = iVar4 + iVar2 * 0x40 >> 6;
    return;
  }
  *(int *)(iVar6 + 0x2d8) = iVar7;
  return;
}



// Address: 4a03b17c

void FUN_4a03b17c(void)

{
  undefined *puVar1;
  int *piVar2;
  
  FUN_4a047e80();
  puVar1 = PTR_DAT_4a03b1dc;
  thunk_FUN_4a00191c(*(undefined4 *)(*(int *)PTR_DAT_4a03b1dc + 0x4f4),PTR_DAT_4a03b1e0);
  thunk_FUN_4a00191c(*(undefined4 *)(*(int *)puVar1 + 0x4f8),PTR_DAT_4a03b1e0);
  if ((*(uint *)(*(int *)puVar1 + 0x5bc) & 0x10) != 0) {
    host_s3eDeviceUnRegister_arm(1,PTR_LAB_4a03b1e4);
  }
  if (*(int *)(*(int *)puVar1 + 0xc) == 3) {
    FUN_4a054ff4();
  }
  thunk_FUN_4a00b25c();
  puVar1 = PTR_DAT_4a04e900;
  if (*(int *)(PTR_DAT_4a04e900 + 8) != 0) {
    thunk_FUN_4a161530(*(undefined4 *)(PTR_DAT_4a04e900 + 0xc));
    piVar2 = *(int **)(puVar1 + 8);
    if (piVar2 != (int *)0x0) {
      FUN_4a1652c6(piVar2,*(undefined4 *)(*piVar2 + 4));
    }
  }
  if (*puVar1 != '\0') {
    FUN_4a00b4c8(0,PTR_FUN_4a04c8ac_1_4a04e904);
    FUN_4a00b4c8(1,PTR_FUN_4a048d10_1_4a04e908);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  return;
}



// Address: 4a03b1e8

void FUN_4a03b1e8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_4a03b248;
  if ((**(uint **)PTR_DAT_4a03b248 & 0x10) != 0) {
    FUN_4a04cce0();
    thunk_FUN_4a161530(*(undefined4 *)(*(int *)puVar1 + 0x3c4));
    thunk_FUN_4a161530(*(undefined4 *)(*(int *)puVar1 + 0x3c0));
    thunk_FUN_4a161530(*(undefined4 *)(*(int *)puVar1 + 0x390));
    if (*(int *)PTR_DAT_4a03b24c != 0) {
      FUN_4a0a6cbc();
      thunk_FUN_4a161530();
    }
  }
  puVar1 = PTR_DAT_4a03bb0c;
  thunk_FUN_4a161530(*(undefined4 *)PTR_DAT_4a03bb0c);
  *(undefined4 *)puVar1 = 0;
  return;
}



// Address: 4a03b250

void FUN_4a03b250(undefined4 param_1)

{
  undefined4 uVar1;
  
  host_s3eConfigGetInt_thumb(&DAT_4a03b298,s_MemMgrMaxAllocWarning_4a03b280,PTR_DAT_4a03b27c);
  FUN_4a03ec78();
  uVar1 = thunk_FUN_4a161570(0x40);
  uVar1 = FUN_4a09c6e0(uVar1,param_1);
  *(undefined4 *)(PTR_DAT_4a03b27c + 4) = uVar1;
  FUN_4a04a9d8();
  return;
}



// Address: 4a03b2a0

void FUN_4a03b2a0(int param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  undefined *puVar5;
  undefined2 uVar6;
  bool bVar7;
  bool bVar8;
  undefined4 local_68;
  uint local_54;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  
  puVar5 = PTR_DAT_4a03b630;
  local_48 = 0;
  local_38 = 0;
  local_18 = 0x3f800000;
  local_28 = 0;
  if (*(int *)(*(int *)PTR_DAT_4a03b630 + 0xc) == 2) {
    FUN_4a150618(0x1700);
  }
  switch(*(int *)(param_1 + 0x14)) {
  case 0:
    local_54 = *(uint *)(param_1 + 0x1c);
    local_50 = *(uint *)(param_1 + 0x20) ^ 0x80000000;
    local_4c = *(uint *)(param_1 + 0x24) ^ 0x80000000;
    local_44 = *(undefined4 *)(param_1 + 0x28);
    local_40 = *(uint *)(param_1 + 0x2c) ^ 0x80000000;
    local_3c = *(uint *)(param_1 + 0x30) ^ 0x80000000;
    local_34 = *(undefined4 *)(param_1 + 0x34);
    local_30 = *(uint *)(param_1 + 0x38) ^ 0x80000000;
    local_2c = *(uint *)(param_1 + 0x3c) ^ 0x80000000;
    local_24 = *(undefined4 *)(param_1 + 0x40);
    local_20 = *(uint *)(param_1 + 0x44) ^ 0x80000000;
    local_1c = *(uint *)(param_1 + 0x48) ^ 0x80000000;
    if (*(int *)(*(int *)puVar5 + 0xc) != 2) goto switchD_4a03b2e4_default;
    goto LAB_4a03b490;
  case 1:
    local_54 = *(uint *)(param_1 + 0x1c);
    local_50 = *(uint *)(param_1 + 0x20) ^ 0x80000000;
    local_4c = *(uint *)(param_1 + 0x24) ^ 0x80000000;
    local_44 = *(undefined4 *)(param_1 + 0x28);
    local_40 = *(uint *)(param_1 + 0x2c) ^ 0x80000000;
    local_3c = *(uint *)(param_1 + 0x30) ^ 0x80000000;
    local_34 = *(undefined4 *)(param_1 + 0x34);
    local_30 = *(uint *)(param_1 + 0x38) ^ 0x80000000;
    local_2c = *(uint *)(param_1 + 0x3c) ^ 0x80000000;
    local_24 = *(undefined4 *)(param_1 + 0x40);
    local_20 = *(uint *)(param_1 + 0x44);
    local_1c = *(uint *)(param_1 + 0x48);
    iVar2 = *(int *)(*(int *)puVar5 + 0xc);
    break;
  case 2:
  case 4:
    if (*(int *)(param_1 + 0x14) == 4) {
      local_54 = 0x47800000;
    }
    else {
      local_54 = 0x3f800000;
    }
    local_50 = 0;
    local_40 = local_54 ^ 0x80000000;
    local_44 = 0;
    local_4c = 0;
    local_3c = 0;
    local_34 = 0;
    local_30 = 0;
    local_24 = *(undefined4 *)(param_1 + 0x40);
    local_20 = *(uint *)(param_1 + 0x44);
    local_1c = *(uint *)(param_1 + 0x48);
    iVar2 = *(int *)(*(int *)puVar5 + 0xc);
    local_2c = local_40;
    break;
  case 3:
    FUN_4a1504dc();
    if (*(int *)(param_1 + 0xec) == 5 || *(int *)(param_1 + 0xec) == 6) {
      FUN_4a150c00(0x8000,0x8000,0);
    }
  default:
    goto switchD_4a03b2e4_default;
  }
  local_1c = local_1c ^ 0x80000000;
  local_20 = local_20 ^ 0x80000000;
  if (iVar2 == 2) {
LAB_4a03b490:
    FUN_4a150544(&local_54);
  }
switchD_4a03b2e4_default:
  puVar5 = PTR_DAT_4a03b638;
  if ((*(uint *)(param_1 + 300) & 1) == 0) {
    if (((*(uint *)PTR_DAT_4a03b634 & 1) == 0) &&
       (iVar2 = thunk_FUN_4a1491bc(PTR_DAT_4a03b634), iVar2 != 0)) {
      *(undefined2 *)puVar5 = 0;
      *(undefined4 *)(puVar5 + 8) = 0;
      *(undefined4 *)(puVar5 + 0xc) = 0;
      *(undefined4 *)(puVar5 + 0x10) = 0;
      *(undefined2 *)(puVar5 + 4) = 0;
      *(undefined2 *)(puVar5 + 2) = 1;
      *(undefined2 *)(puVar5 + 6) = 0;
    }
    uVar6 = 0x1802;
    if (*(int *)(param_1 + 0x14) == 3) {
      psVar3 = *(short **)(param_1 + 0x130);
      if ((*(uint *)(param_1 + 300) & 1) != 0) {
        sVar1 = psVar3[2];
        bVar7 = sVar1 == 0;
        if (bVar7) {
          sVar1 = psVar3[3];
        }
        bVar8 = bVar7 && sVar1 == 0;
        if (bVar7 && sVar1 == 0) {
          bVar8 = *psVar3 == 0x1802;
        }
        if (bVar8) {
          psVar3 = *(short **)(psVar3 + 6);
        }
        else {
          psVar3 = (short *)0x0;
        }
      }
      uVar6 = 0x1002;
    }
    else {
      uVar4 = *(uint *)(param_1 + 300) & 1;
      if (*(int *)(param_1 + 0x14) == 4) {
        psVar3 = *(short **)(param_1 + 0x130);
        if (uVar4 != 0) {
          sVar1 = psVar3[2];
          bVar7 = sVar1 == 0;
          if (bVar7) {
            sVar1 = psVar3[3];
          }
          bVar8 = bVar7 && sVar1 == 0;
          if (bVar7 && sVar1 == 0) {
            bVar8 = *psVar3 == 0x1802;
          }
          if (bVar8) {
            psVar3 = *(short **)(psVar3 + 6);
          }
          else {
            psVar3 = (short *)0x0;
          }
        }
        uVar6 = 0x180c;
      }
      else {
        psVar3 = *(short **)(param_1 + 0x130);
        if (uVar4 != 0) {
          sVar1 = psVar3[2];
          bVar7 = sVar1 == 0;
          if (bVar7) {
            sVar1 = psVar3[3];
          }
          bVar8 = bVar7 && sVar1 == 0;
          if (bVar7 && sVar1 == 0) {
            bVar8 = *psVar3 == 0x1802;
          }
          if (bVar8) {
            psVar3 = *(short **)(psVar3 + 6);
          }
          else {
            psVar3 = (short *)0x0;
          }
        }
      }
    }
    local_68 = CONCAT22(1,uVar6);
    *(undefined4 *)puVar5 = local_68;
    *(undefined4 *)(puVar5 + 4) = 0;
    *(undefined4 *)(puVar5 + 8) = 0;
    *(short **)(puVar5 + 0xc) = psVar3;
    *(undefined4 *)(puVar5 + 0x10) = 0;
    puVar5 = PTR_DAT_4a03b638;
  }
  else {
    puVar5 = *(undefined **)(param_1 + 0x130);
  }
  FUN_4a0696c0(puVar5,PTR_FUN_4a150d6c_1_4a03b63c,0);
  return;
}



// Address: 4a03b640

int FUN_4a03b640(int param_1)

{
  int iVar1;
  short *psVar2;
  
  if ((param_1 != 0) && (psVar2 = *(short **)(param_1 + 8), psVar2 != (short *)0x0)) {
    iVar1 = 0;
    for (; *psVar2 != 0; psVar2 = psVar2 + 1) {
      iVar1 = iVar1 + 1;
    }
    return iVar1;
  }
  return 0;
}



// Address: 4a03b65c

void FUN_4a03b65c(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uStack_1c;
  uint local_18;
  
  iVar2 = DAT_4a03b788;
  iVar7 = DAT_4a03b788 + -0x20;
  uStack_1c = param_2;
  local_18 = param_3;
  uVar4 = host_s3eSurfaceGetInt_thumb(0);
  uVar5 = host_s3eDebugGetInt_thumb(5);
  uVar4 = thunk_FUN_4a0015f0(uVar4,uVar5);
  *(undefined4 *)((int)&local_18 + DAT_4a03b78c + iVar2) = uVar4;
  thunk_FUN_4a001368((int)&local_18 + iVar2,param_1,param_2);
  (&stack0xfffffff2)[iVar2] = 0;
  while( true ) {
    iVar6 = FUN_4a00150c(param_1,10,param_2);
    puVar3 = PTR_DAT_4a03b790;
    *(int *)(&stack0xffffffec + DAT_4a03b78c + iVar2) = iVar6;
    if (iVar6 == 0) break;
    uVar8 = *(int *)(&stack0xffffffec + DAT_4a03b78c + iVar2) - param_1;
    param_2 = (param_2 - uVar8) - 1;
    iVar6 = FUN_4a0013e0(*(undefined4 *)(PTR_DAT_4a03b790 + 0x18));
    if ((uint)(DAT_4a03b794 - iVar6) <= uVar8) {
      iVar6 = FUN_4a0013e0(*(undefined4 *)(puVar3 + 0x18));
      uVar8 = DAT_4a03b794 - iVar6;
    }
    puVar3 = PTR_DAT_4a03b790;
    FUN_4a00156c(*(undefined4 *)(PTR_DAT_4a03b790 + 0x18),param_1,uVar8);
    uVar8 = FUN_4a0013e0(*(undefined4 *)(puVar3 + 0x18));
    iVar6 = *(int *)(puVar3 + 0x18);
    for (; uVar8 != 0; uVar8 = uVar8 - uVar9) {
      iVar1 = DAT_4a03b78c + iVar7;
      uVar9 = uVar8;
      if (*(uint *)((int)&local_18 + iVar1 + 0x20) <= uVar8) {
        uVar9 = *(uint *)((int)&local_18 + iVar1 + 0x20);
      }
      uVar4 = FUN_4a01c9ec();
      *(uint *)((int)&uStack_1c + iVar2) = (uint)*(byte *)(iVar6 + uVar9);
      *(undefined1 *)(iVar6 + uVar9) = 0;
      host_s3eDebugPrint_thumb(0,uVar4,iVar6,0);
      *(char *)(iVar6 + uVar9) = (char)*(undefined4 *)((int)&uStack_1c + iVar2);
      iVar6 = iVar6 + uVar9;
    }
    param_1 = *(int *)(&stack0xffffffec + DAT_4a03b78c + iVar2) + 1;
    **(undefined1 **)(PTR_DAT_4a03b790 + 0x18) = 0;
  }
  if (param_2 != 0) {
    iVar6 = FUN_4a0013e0(*(undefined4 *)(PTR_DAT_4a03b790 + 0x18));
    iVar7 = DAT_4a03b794;
    if ((uint)(DAT_4a03b794 - iVar6) <= param_2) {
      iVar6 = FUN_4a0013e0(*(undefined4 *)(puVar3 + 0x18));
      param_2 = iVar7 - iVar6;
    }
    FUN_4a00156c(*(undefined4 *)(puVar3 + 0x18),param_1,param_2);
  }
  puVar3 = PTR_DAT_4a03b790;
  uVar4 = FUN_4a0013e0(*(undefined4 *)(PTR_DAT_4a03b790 + 0x18));
  iVar7 = DAT_4a03b78c;
  *(undefined4 *)(puVar3 + 0x28) = uVar4;
  if (*(int *)(&stack0xfffffff8 + iVar7 + iVar2) != 0) {
    iVar7 = host_s3eDebugGetInt_thumb(6);
    host_s3eDebugPrint_thumb(0,iVar7 * *(int *)(puVar3 + 0x1c),*(undefined4 *)(puVar3 + 0x18),0);
    host_s3eSurfaceShow_thumb();
  }
  return;
}



// Address: 4a03b798

void FUN_4a03b798(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  while ((param_3 < param_2 && (iVar1 <= DAT_4a03b7b8))) {
    param_2 = *(int *)(param_1 + param_2 * 4);
    iVar1 = iVar1 + 1;
  }
  return;
}



// Address: 4a03b7bc

void FUN_4a03b7bc(undefined4 param_1,undefined4 param_2,uint *param_3,uint *param_4,uint param_5,
                 uint param_6)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte local_44 [32];
  undefined4 local_24;
  undefined4 local_20;
  uint *puStack_1c;
  uint *puStack_18;
  
  local_24 = param_1;
  local_20 = param_2;
  puStack_1c = param_3;
  puStack_18 = param_4;
  thunk_FUN_4a00121c(local_44,0x20);
  host_s3eConfigGetString_thumb(&DAT_4a03b854,local_24,local_44);
  if (local_44[0] == 0) {
    FUN_4a0012bc(local_44,local_20);
  }
  pbVar2 = local_44;
  while( true ) {
    bVar1 = *pbVar2;
    if (bVar1 == 0) break;
    if (bVar1 - 0x61 < 0x1a) {
      *pbVar2 = bVar1 - 0x20;
    }
    pbVar2 = pbVar2 + 1;
  }
  iVar3 = FUN_4a0015c0(local_44,&DAT_4a03b858);
  if ((iVar3 != 0) && (iVar3 = FUN_4a0015c0(local_44,&DAT_4a03b85c), iVar3 == 0)) {
    *param_3 = *param_3 | param_5;
  }
  iVar3 = FUN_4a0015c0(local_44,&DAT_4a03b860);
  if (iVar3 != 0) {
    *param_3 = *param_3 | param_6;
  }
  iVar3 = FUN_4a001314(local_44,&DAT_4a03b860,2);
  if (iVar3 == 0) {
    param_5 = param_6;
  }
  *param_4 = *param_4 | param_5;
  return;
}



// Address: 4a03b864

void FUN_4a03b864(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = thunk_FUN_4a0015f0(param_2,param_3);
  uVar3 = thunk_FUN_4a0015f0(param_1,uVar1);
  for (iVar2 = 1;
      iVar2 < (int)(param_4 * ((int)uVar3 + (uint)((int)((ulonglong)uVar3 >> 0x20) != 0)));
      iVar2 = iVar2 << 1) {
  }
  return;
}



// Address: 4a03b894

void FUN_4a03b894(void)

{
  thunk_FUN_4a00121c(PTR_DAT_4a03b8a8,0x24);
  thunk_FUN_4a038f24();
  return;
}



// Address: 4a03b8ac

void FUN_4a03b8ac(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ushort *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int local_2c;
  
  puVar2 = PTR_DAT_4a03ba88;
  iVar7 = *(int *)(*(int *)PTR_DAT_4a03ba84 + 0x34);
  iVar5 = *(int *)(*(int *)PTR_DAT_4a03ba84 + 0x38);
  if (*(int *)PTR_DAT_4a03ba88 == 0) {
    puVar6 = (ushort *)thunk_FUN_4a161570(0x10800);
    *(ushort **)puVar2 = puVar6;
  }
  else {
    puVar6 = *(ushort **)PTR_DAT_4a03ba88;
  }
  puVar3 = PTR_LAB_4a03ba90;
  puVar2 = PTR_DAT_4a03ba8c;
  local_2c = 0;
  do {
    uVar14 = local_2c << 4 | 0xf;
    iVar13 = 0;
    if ((**(uint **)PTR_DAT_4a03ba94 & 0x10000) == 0) {
      uVar14 = (int)uVar14 >> 1;
    }
    do {
      iVar8 = uVar14 * (iVar13 << 3 | 7U);
      if (iVar13 == 0) {
        iVar8 = 0;
LAB_4a03b950:
        uVar9 = iVar8 >> 0xb;
      }
      else {
        if (iVar8 < 0xff01) goto LAB_4a03b950;
        uVar9 = 0x1f;
      }
      iVar10 = 0x1f;
      bVar1 = *(byte *)(*(int *)(puVar3 + 0x48) +
                       (uint)((byte)puVar2[uVar9 | (iVar5 >> 1) << 5] >> 3)) >> 1;
      *puVar6 = (ushort)bVar1;
      iVar8 = 0;
      puVar11 = puVar6;
      do {
        puVar11 = puVar11 + 1;
        iVar12 = uVar14 * ((iVar8 + 1) * 8 | 7U);
        if (iVar12 < 0xff01) {
          uVar9 = iVar12 >> 5 & 0x7e0;
        }
        else {
          uVar9 = 0x7e0;
        }
        iVar10 = iVar10 + -1;
        iVar8 = iVar8 + 1;
        *puVar11 = (ushort)bVar1 |
                   (ushort)*(byte *)(*(int *)(puVar3 + 0x48) +
                                    (uint)((byte)puVar2[(iVar7 >> 1) << 5 | (int)uVar9 >> 6] >> 3))
                   << 5;
        puVar4 = PTR_DAT_4a03ba94;
      } while (iVar10 != 0);
      iVar13 = iVar13 + 1;
      puVar6 = puVar6 + 0x20;
    } while (iVar13 < 0x20);
    local_2c = local_2c + 1;
  } while (local_2c < 0x20);
  iVar7 = 0;
  iVar5 = *(int *)(*(int *)PTR_DAT_4a03ba84 + 0x30);
  do {
    uVar14 = iVar7 << 4 | 0xf;
    iVar13 = 0x20;
    if ((**(uint **)puVar4 & 0x10000) == 0) {
      uVar14 = (int)uVar14 >> 1;
    }
    iVar8 = 0;
    puVar11 = puVar6;
    do {
      iVar10 = uVar14 * (iVar8 << 3 | 7U);
      if (iVar8 == 0) {
        iVar10 = 0;
LAB_4a03ba3c:
        uVar9 = iVar10 >> 0xb;
      }
      else {
        if (iVar10 < 0xff01) goto LAB_4a03ba3c;
        uVar9 = 0x1f;
      }
      iVar13 = iVar13 + -1;
      iVar8 = iVar8 + 1;
      *puVar11 = (ushort)(*(byte *)(*(int *)(puVar3 + 0x48) +
                                   (uint)((byte)puVar2[uVar9 | (iVar5 >> 1) << 5] >> 3)) >> 1) <<
                 0xb;
      puVar11 = puVar11 + 1;
    } while (iVar13 != 0);
    iVar7 = iVar7 + 1;
    puVar6 = puVar6 + 0x20;
    if (0x1f < iVar7) {
      return;
    }
  } while( true );
}



// Address: 4a03ba98

void FUN_4a03ba98(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_4a02b1e8();
  FUN_4a03bab8(param_1,uVar1,param_2,param_3);
  return;
}



// Address: 4a03bab8

void FUN_4a03bab8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  
  piVar2 = *(int **)PTR_DAT_4a03bae8;
  FUN_4a16e268(piVar2,piVar2[1] + 1);
  puVar1 = (undefined4 *)(*piVar2 + piVar2[1] * 0xc);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  piVar2[1] = piVar2[1] + 1;
  return;
}



// Address: 4a03bb10

void FUN_4a03bb10(undefined4 param_1)

{
  undefined1 auStack_104 [260];
  
  FUN_4a047900(param_1,&DAT_4a03bb24,auStack_104);
  return;
}



// Address: 4a03bb28

void FUN_4a03bb28(void)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 auStack_18 [4];
  
  uVar1 = DAT_4a03bc78;
  host_glGetIntegerv_thumb(DAT_4a03bc78,auStack_18);
  host_glGetIntegerv_thumb(uVar1 - 1,&local_28);
  host_glGetFloatv_thumb(DAT_4a03bc78 + 0x11,&local_38);
  host_glEnable_thumb(uVar1);
  host_glClearColor_thumb(0.0,0.0,0.0,1.0);
  if (*(int *)(PTR_DAT_4a03bc7c + 4) == 0x1000) {
    iVar5 = *(int *)(PTR_DAT_4a03bc7c + 0x10);
    iVar3 = *(int *)(PTR_DAT_4a03bc7c + 0x20);
    iVar7 = 0;
    iVar8 = *(int *)(PTR_DAT_4a03bc7c + 0x14) - iVar3;
  }
  else {
    iVar5 = *(int *)(PTR_DAT_4a03bc7c + 0x1c);
    iVar3 = *(int *)(PTR_DAT_4a03bc7c + 0x14);
    iVar7 = *(int *)(PTR_DAT_4a03bc7c + 0x10) - iVar5;
    iVar8 = 0;
  }
  host_glScissor_thumb(0,0,iVar5,iVar3);
  host_glClear_thumb(0x4100);
  host_glScissor_thumb(iVar7,iVar8,iVar5,iVar3);
  host_glClear_thumb(0x4100);
  puVar2 = PTR_DAT_4a03bc7c;
  uVar1 = DAT_4a03bc78;
  if (((*(int *)(PTR_DAT_4a03bc7c + 0x1c) == 0) ||
      (*(int *)(PTR_DAT_4a03bc7c + 0x28) <=
       *(int *)(PTR_DAT_4a03bc7c + 0x14) + *(int *)(PTR_DAT_4a03bc7c + 0x1c) * -2)) &&
     ((*(int *)(PTR_DAT_4a03bc7c + 0x20) == 0 ||
      (*(int *)(PTR_DAT_4a03bc7c + 0x24) <=
       *(int *)(PTR_DAT_4a03bc7c + 0x10) + *(int *)(PTR_DAT_4a03bc7c + 0x20) * -2)))) {
    if (*(int *)PTR_DAT_4a03bc80 != 0) {
      FUN_4a1500f8(DAT_4a03bc78);
    }
    host_glDisable_thumb(uVar1);
  }
  else {
    host_glEnable_thumb(DAT_4a03bc78);
    local_28 = 0;
    local_24 = 0;
    local_20 = *(int *)(puVar2 + 0x10);
    local_1c = *(int *)(puVar2 + 0x14);
  }
  iVar6 = *(int *)(PTR_DAT_4a03bc7c + 0x1c);
  iVar3 = local_28;
  iVar5 = local_24;
  iVar7 = local_20;
  iVar8 = local_1c;
  if (((iVar6 != 0) &&
      (*(int *)(PTR_DAT_4a03bc7c + 0x14) + iVar6 * -2 < *(int *)(PTR_DAT_4a03bc7c + 0x28))) ||
     ((*(int *)(PTR_DAT_4a03bc7c + 0x20) != 0 &&
      (*(int *)(PTR_DAT_4a03bc7c + 0x10) + *(int *)(PTR_DAT_4a03bc7c + 0x20) * -2 <
       *(int *)(PTR_DAT_4a03bc7c + 0x24))))) {
    iVar4 = local_28 - iVar6;
    if (iVar4 < 0) {
      iVar3 = local_28 - iVar4;
      iVar7 = local_20 + iVar4;
    }
    iVar6 = (iVar3 + iVar7) - (*(int *)(PTR_DAT_4a03bc7c + 0x10) - iVar6);
    if (0 < iVar6) {
      iVar7 = iVar7 - iVar6;
    }
    iVar6 = local_24 - *(int *)(PTR_DAT_4a03bc7c + 0x20);
    if (iVar6 < 0) {
      iVar5 = local_24 - iVar6;
      iVar8 = local_1c + iVar6;
    }
    iVar6 = (iVar5 + iVar8) -
            (*(int *)(PTR_DAT_4a03bc7c + 0x14) - *(int *)(PTR_DAT_4a03bc7c + 0x20));
    if (0 < iVar6) {
      iVar8 = iVar8 - iVar6;
    }
  }
  host_glScissor_thumb(iVar3,iVar5,iVar7,iVar8);
  host_glClearColor_thumb(local_38,fStack_34,fStack_30,fStack_2c);
  return;
}



// Address: 4a03bc84

void FUN_4a03bc84(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_28 [16];
  int local_18;
  
  local_18 = param_1;
  piVar2 = (int *)FUN_4a165486(PTR_DAT_4a03bcec,param_1);
  if ((piVar2 != (int *)0x0) && (iVar3 = *piVar2, *piVar2 = iVar3 + -1, iVar3 + -1 != 0)) {
    return;
  }
  FUN_4a0978b4(auStack_28);
  puVar1 = PTR_DAT_4a03bcec;
  iVar3 = 0;
  do {
    iVar4 = (&local_18)[iVar3] * 8;
    host_glDeleteShader_thumb(*(uint *)(*(int *)puVar1 + iVar4));
    *(undefined4 *)(*(int *)puVar1 + iVar4) = 0;
    if (*(int *)(*(int *)puVar1 + iVar4 + 4) != 0) {
      FUN_4a092000();
      thunk_FUN_4a161530();
    }
    iVar3 = iVar3 + 1;
    *(undefined4 *)(*(int *)puVar1 + iVar4 + 4) = 0;
  } while (iVar3 < 1);
  FUN_4a0978e0(auStack_28);
  return;
}



// Address: 4a03bcf0

int FUN_4a03bcf0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uStack_10;
  int local_c;
  
  if (*(int *)PTR_DAT_4a03bd28 != 0) {
    if (*(int *)PTR_DAT_4a03bd28 == -1) {
      param_2 = param_2 / 2;
    }
    else {
      iVar1 = 0;
      uStack_10 = param_1;
      local_c = param_2;
      while ((param_2 = iVar1, 0 < local_c &&
             (iVar1 = FUN_4a04c918(&uStack_10,&local_c), iVar1 != -1))) {
        iVar1 = param_2 + 1;
      }
    }
  }
  return param_2;
}



// Address: 4a03bd2c

void FUN_4a03bd2c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  puVar1 = PTR_DAT_4a03bddc;
  iVar3 = *(int *)(PTR_DAT_4a03bddc + 0x1c);
  *(int *)(PTR_DAT_4a03bddc + 0x1c) = iVar3 + -1;
  if (iVar3 + -1 == 0) {
    piVar4 = *(int **)(puVar1 + 0xc);
    if (piVar4 != (int *)0x0) {
      FUN_4a1652c6(piVar4,*(undefined4 *)(*piVar4 + 4));
    }
    *(undefined4 *)(puVar1 + 0xc) = 0;
    puVar6 = *(undefined4 **)(puVar1 + 4);
    if (puVar6 != (undefined4 *)0x0) {
      for (uVar5 = 0; uVar5 < (uint)puVar6[5]; uVar5 = uVar5 + 1) {
      }
      if ((*(byte *)(puVar6 + 7) & 1) == 0) {
        FUN_4a0a6f48(puVar6[4],4);
        puVar6[4] = 0;
      }
      for (uVar5 = 0; uVar5 < (uint)puVar6[1]; uVar5 = uVar5 + 1) {
      }
      if ((*(byte *)(puVar6 + 3) & 1) == 0) {
        FUN_4a0a6f48(*puVar6,8);
        *puVar6 = 0;
      }
      thunk_FUN_4a161530(puVar6);
    }
    if (*(int *)(puVar1 + 8) != 0) {
      FUN_4a09d8aa();
      thunk_FUN_4a161530();
    }
    puVar2 = PTR_DAT_4a03bde0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    if (*(int *)puVar2 != 0) {
      FUN_4a0920a8();
      thunk_FUN_4a161530();
    }
    FUN_4a02b1e8(s_CIwGxFont_4a03bde4);
    FUN_4a045708();
    FUN_4a02b1e8(s_CIwGxFontTTFont_4a03bdf0);
    FUN_4a045708();
    thunk_FUN_4a050d3c(PTR_FUN_4a049b10_1_4a03be00);
  }
  return;
}



// Address: 4a03bd34

void FUN_4a03bd34(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  puVar1 = PTR_DAT_4a03bddc;
  iVar3 = *(int *)(PTR_DAT_4a03bddc + 0x1c);
  *(int *)(PTR_DAT_4a03bddc + 0x1c) = iVar3 + -1;
  if (iVar3 + -1 == 0) {
    piVar4 = *(int **)(puVar1 + 0xc);
    if (piVar4 != (int *)0x0) {
      FUN_4a1652c6(piVar4,*(undefined4 *)(*piVar4 + 4));
    }
    *(undefined4 *)(puVar1 + 0xc) = 0;
    puVar6 = *(undefined4 **)(puVar1 + 4);
    if (puVar6 != (undefined4 *)0x0) {
      for (uVar5 = 0; uVar5 < (uint)puVar6[5]; uVar5 = uVar5 + 1) {
      }
      if ((*(byte *)(puVar6 + 7) & 1) == 0) {
        FUN_4a0a6f48(puVar6[4],4);
        puVar6[4] = 0;
      }
      for (uVar5 = 0; uVar5 < (uint)puVar6[1]; uVar5 = uVar5 + 1) {
      }
      if ((*(byte *)(puVar6 + 3) & 1) == 0) {
        FUN_4a0a6f48(*puVar6,8);
        *puVar6 = 0;
      }
      thunk_FUN_4a161530(puVar6);
    }
    if (*(int *)(puVar1 + 8) != 0) {
      FUN_4a09d8aa();
      thunk_FUN_4a161530();
    }
    puVar2 = PTR_DAT_4a03bde0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    if (*(int *)puVar2 != 0) {
      FUN_4a0920a8();
      thunk_FUN_4a161530();
    }
    FUN_4a02b1e8(s_CIwGxFont_4a03bde4);
    FUN_4a045708();
    FUN_4a02b1e8(s_CIwGxFontTTFont_4a03bdf0);
    FUN_4a045708();
    thunk_FUN_4a050d3c(PTR_FUN_4a049b10_1_4a03be00);
  }
  return;
}



// Address: 4a03be0c

void FUN_4a03be0c(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = host_s3eSurfaceGetInt_thumb(0);
  *param_1 = uVar1;
  uVar1 = host_s3eSurfaceGetInt_thumb(1);
  param_1[1] = uVar1;
  uVar1 = host_s3eSurfaceGetInt_thumb(2);
  param_1[2] = uVar1;
  uVar1 = host_s3eSurfaceGetInt_thumb(3);
  param_1[3] = uVar1;
  uVar1 = host_s3eSurfacePtr_thumb();
  param_1[4] = uVar1;
  return;
}



// Address: 4a03be3c

void FUN_4a03be3c(void)

{
  thunk_FUN_4a047d64();
  thunk_FUN_4a047de4();
  thunk_FUN_4a047210();
  thunk_FUN_4a047258();
  thunk_FUN_4a04da10();
  return;
}



// Address: 4a03be5c

void FUN_4a03be5c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  
  puVar1 = PTR_DAT_4a03bec0;
  if ((**(uint **)PTR_DAT_4a03bec0 & 0x400) != 0) {
    if ((**(uint **)PTR_DAT_4a03bec0 & 0x200) == 0) {
      FUN_4a05a618();
    }
    puVar3 = PTR_DAT_4a03bec8;
    puVar2 = PTR_DAT_4a03bec4;
    puVar4 = *(uint **)puVar1;
    *puVar4 = *puVar4 | 0x200;
    *(undefined4 *)(puVar3 + 0x18) = *(undefined4 *)(puVar2 + 0x54);
    if (puVar4[3] == 2) {
      thunk_FUN_4a150140(0xb50);
    }
    *(undefined4 *)(puVar3 + 0x1c) = *(undefined4 *)(puVar2 + 0x94);
    return;
  }
  return;
}



// Address: 4a03bed0

void FUN_4a03bed0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  uint uVar4;
  
  puVar1 = PTR_DAT_4a03bf30;
  if ((**(uint **)PTR_DAT_4a03bf30 & 0x200) != 0) {
    FUN_4a05a618();
  }
  puVar3 = *(uint **)puVar1;
  uVar4 = *puVar3;
  *puVar3 = uVar4 & 0xfffffdff;
  if (((uVar4 & 0x80) != 0) && (puVar3[3] == 2)) {
    thunk_FUN_4a1500f8(0xb50);
  }
  puVar2 = PTR_DAT_4a03bf38;
  puVar1 = PTR_DAT_4a03bf34;
  *(undefined4 *)(PTR_DAT_4a03bf38 + 0x18) = *(undefined4 *)(PTR_DAT_4a03bf34 + 0x18);
  *(undefined4 *)(puVar2 + 0x1c) = *(undefined4 *)(puVar1 + 0x1c);
  return;
}



// Address: 4a03bf40

void FUN_4a03bf40(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)PTR_DAT_4a03bf68;
  *(undefined4 *)(iVar1 + 0x45c) = param_1;
  *(undefined4 *)(iVar1 + 0x474) = param_2;
  *(undefined4 *)(iVar1 + 0x420) = 0;
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xffffffdf;
  return;
}



// Address: 4a03bf6c

void FUN_4a03bf6c(void)

{
  undefined *puVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_30 [36];
  
  puVar1 = PTR_DAT_4a03bff4;
  piVar3 = *(int **)(PTR_DAT_4a03bff4 + 4);
  if (piVar3 != (int *)0x0) {
    FUN_4a1652c6(piVar3,*(undefined4 *)(*piVar3 + 4));
  }
  thunk_FUN_4a161570(0xc4);
  uVar4 = FUN_4a0633c4();
  *(undefined4 *)(puVar1 + 4) = uVar4;
  uVar4 = host_s3eFileOpenFromMemory_thumb(PTR_DAT_4a03bff4 + 0x18,DAT_4a03bff8);
  thunk_FUN_4a0ecbc4(auStack_30);
  thunk_FUN_4a0ebaa0(auStack_30,uVar4);
  FUN_4a062e34(*(undefined4 *)(puVar1 + 4),auStack_30);
  host_s3eFileClose_thumb(uVar4);
  FUN_4a06157c(*(undefined4 *)(puVar1 + 4),0);
  FUN_4a1652c6(*(int **)(puVar1 + 4),*(undefined4 *)(**(int **)(puVar1 + 4) + 0x3c));
  uVar6 = host_s3eTimerGetMs_thumb();
  *(undefined8 *)(puVar1 + 0x10) = uVar6;
  iVar5 = FUN_4a16149c();
  if ((iVar5 == 0) || (iVar5 = FUN_4a161548(), uVar2 = 0, iVar5 != 0)) {
    uVar2 = 1;
  }
  *puVar1 = uVar2;
  thunk_FUN_4a0ecbf0(auStack_30);
  return;
}



// Address: 4a03bffc

void FUN_4a03bffc(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar5;
  int iVar6;
  undefined4 uVar4;
  
  puVar1 = PTR_DAT_4a03c040;
  iVar6 = 1;
  *(undefined4 *)PTR_DAT_4a03c040 = 0;
  do {
    uVar2 = FUN_4a02afd8(iVar6 << 6);
    uVar4 = 0x40000000;
    if ((uVar2 & 0xfff) == 0) {
      uVar2 = (int)uVar2 >> 0xc;
      uVar4 = 0x40000;
    }
    iVar3 = thunk_FUN_4a0015f0(uVar4,uVar2);
    iVar5 = iVar6 * 4;
    iVar6 = iVar6 + 1;
    *(int *)(puVar1 + iVar5) = iVar3 >> 6;
  } while (iVar6 < 0x1000);
  return;
}



// Address: 4a03c044

void FUN_4a03c044(uint param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  int unaff_r4;
  uint unaff_r6;
  uint uVar10;
  int unaff_r7;
  int iVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  
                    /* WARNING: Could not recover jumptable at 0x4a03c058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if ((param_2 == 0) && (*(code **)(PTR_DAT_4a03c060 + 0x30) != (code *)0x0)) {
    (**(code **)(PTR_DAT_4a03c060 + 0x30))();
    return;
  }
  puVar9 = *(uint **)(PTR_LAB_4a0466b0 + 0x40);
  uVar10 = *(uint *)(PTR_LAB_4a0466b0 + 0x2c);
  iVar5 = *(int *)(PTR_LAB_4a0466b0 + 0x30);
  iVar11 = *(int *)(PTR_LAB_4a0466b0 + 0x34);
  iVar4 = *(int *)(PTR_LAB_4a0466b0 + 0x48);
  bVar1 = *(byte *)(iVar4 + ((param_1 & 0xffffff) >> 0x13));
  uVar13 = (uint)*(byte *)(iVar4 + ((param_1 & 0xffff) >> 0xb));
  bVar2 = *(byte *)(iVar4 + ((param_1 & 0xff) >> 3));
  if (PTR_LAB_4a0466b0[0x46] == '\x02') {
    uVar8 = (uint)(bVar1 >> 1) | uVar13 << 5;
    uVar13 = (uint)(bVar2 >> 1) << 0xb;
    uVar12 = uVar8 | uVar13 & 0xfffcffff;
    uVar13 = uVar12 | (uVar8 | uVar13) << 0x10;
    if (iVar5 == 0) {
      return;
    }
    do {
      iVar5 = iVar5 + -1;
      bVar14 = ((uint)puVar9 & 3) != 0;
      uVar8 = uVar10;
      if (bVar14) {
        uVar8 = uVar10 - 1;
      }
      iVar4 = (int)uVar8 >> 4;
      puVar6 = puVar9;
      if (bVar14) {
        puVar6 = (uint *)((int)puVar9 + 2);
      }
      uVar3 = (undefined2)uVar12;
      if (bVar14) {
        *(undefined2 *)puVar9 = uVar3;
      }
      puVar7 = puVar6;
      switch((int)uVar8 >> 1 & 7) {
      case 0:
        while (bVar14 = iVar4 != 0, iVar4 = iVar4 + -1, puVar6 = puVar7, bVar14) {
          puVar6 = puVar7 + 1;
          *puVar7 = uVar13;
switchD_4a046550_caseD_7:
          puVar7 = puVar6 + 1;
          *puVar6 = uVar13;
switchD_4a046550_caseD_6:
          puVar6 = puVar7 + 1;
          *puVar7 = uVar13;
switchD_4a046550_caseD_5:
          puVar7 = puVar6 + 1;
          *puVar6 = uVar13;
switchD_4a046550_caseD_4:
          puVar6 = puVar7 + 1;
          *puVar7 = uVar13;
switchD_4a046550_caseD_3:
          puVar7 = puVar6 + 1;
          *puVar6 = uVar13;
switchD_4a046550_caseD_2:
          puVar6 = puVar7 + 1;
          *puVar7 = uVar13;
switchD_4a046550_caseD_1:
          puVar7 = puVar6 + 1;
          *puVar6 = uVar13;
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
      if ((uVar8 & 1) != 0) {
        *(undefined2 *)puVar6 = uVar3;
      }
      puVar9 = (uint *)((int)puVar9 + iVar11);
    } while (iVar5 != 0);
    return;
  }
  iVar4 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar4 = unaff_r4;
    uVar10 = unaff_r6;
    iVar11 = unaff_r7;
  }
  uVar13 = (uint)bVar1 << 2 | uVar13 << 10 | (uint)bVar2 << 0x12;
  if (iVar5 == 0) {
    return;
  }
  do {
    puVar6 = puVar9;
    uVar8 = uVar10;
    if (((uint)puVar9 & 7) != 0) {
      puVar6 = puVar9 + 1;
      uVar8 = uVar10 - 1;
      *puVar9 = uVar13;
    }
    iVar5 = (int)uVar8 >> 4;
    switch((int)uVar8 >> 1 & 7) {
    case 0:
      while (bVar14 = iVar5 != 0, iVar5 = iVar5 + -1, bVar14) {
        *puVar6 = uVar13;
        puVar6[1] = uVar13;
        puVar6 = puVar6 + 2;
switchD_4a046604_caseD_7:
        *puVar6 = uVar13;
        puVar6[1] = uVar13;
        puVar6 = puVar6 + 2;
switchD_4a046604_caseD_6:
        *puVar6 = uVar13;
        puVar6[1] = uVar13;
        puVar6 = puVar6 + 2;
switchD_4a046604_caseD_5:
        *puVar6 = uVar13;
        puVar6[1] = uVar13;
        puVar6 = puVar6 + 2;
switchD_4a046604_caseD_4:
        *puVar6 = uVar13;
        puVar6[1] = uVar13;
        puVar6 = puVar6 + 2;
switchD_4a046604_caseD_3:
        *puVar6 = uVar13;
        puVar6[1] = uVar13;
        puVar6 = puVar6 + 2;
switchD_4a046604_caseD_2:
        *puVar6 = uVar13;
        puVar6[1] = uVar13;
        puVar6 = puVar6 + 2;
switchD_4a046604_caseD_1:
        *puVar6 = uVar13;
        puVar6[1] = uVar13;
        puVar6 = puVar6 + 2;
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
    if ((uVar8 & 1) != 0) {
      *puVar6 = uVar13;
    }
    bVar14 = iVar4 != 0;
    iVar4 = iVar4 + -1;
    puVar9 = (uint *)((int)puVar9 + iVar11);
  } while (bVar14);
  return;
}



// Address: 4a03c064

void FUN_4a03c064(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  if (*PTR_DAT_4a03c0ac == '\x01') {
    iVar1 = 1;
    do {
      FUN_4a03669c(&local_10,1,7,1);
      *param_1 = (char)local_10;
      param_1 = param_1 + 1;
      if ((char)local_10 == '\0') {
        return;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0);
  }
  else {
    iVar1 = FUN_4a0013e0(param_1);
    FUN_4a03669c(param_1,iVar1 + 1,7,1);
  }
  return;
}



// Address: 4a03c0b0

void FUN_4a03c0b0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (((param_3 == 0x10) && (param_4 == 2)) && (*(int *)(PTR_DAT_4a03c120 + 0xbc) == 0)) {
    if (*PTR_DAT_4a03c120 == '\0') {
      host_s3eFileWrite_thumb(param_1,2,param_2,*(undefined4 *)(PTR_DAT_4a03c120 + 8),2);
    }
    else {
      host_s3eFileRead_thumb(param_1,2,param_2);
    }
    FUN_4a0515e4(param_2 << 1);
  }
  else {
    iVar1 = 2;
    if (param_3 + 7 < 0x18) {
      iVar1 = (int)(((uint)(param_3 + 7 >> 0x1f) >> 0x1d) + param_3 + 7) >> 3;
    }
    if (*PTR_DAT_4a03c120 == '\0') {
      FUN_4a056f94(param_1,iVar1,param_2,param_4,PTR_DAT_4a03c120);
    }
    else {
      FUN_4a056f30(param_1,iVar1,param_2);
    }
  }
  return;
}



// Address: 4a03c0b8

void FUN_4a03c0b8(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (((param_3 == 0x10) && (param_4 == 2)) && (*(int *)(PTR_DAT_4a03c120 + 0xbc) == 0)) {
    if (*PTR_DAT_4a03c120 == '\0') {
      host_s3eFileWrite_thumb(param_1,2,param_2,*(undefined4 *)(PTR_DAT_4a03c120 + 8),2);
    }
    else {
      host_s3eFileRead_thumb(param_1,2,param_2);
    }
    FUN_4a0515e4(param_2 << 1);
  }
  else {
    iVar1 = 2;
    if (param_3 + 7 < 0x18) {
      iVar1 = (int)(((uint)(param_3 + 7 >> 0x1f) >> 0x1d) + param_3 + 7) >> 3;
    }
    if (*PTR_DAT_4a03c120 == '\0') {
      FUN_4a056f94(param_1,iVar1,param_2,param_4,PTR_DAT_4a03c120);
    }
    else {
      FUN_4a056f30(param_1,iVar1,param_2);
    }
  }
  return;
}



// Address: 4a03c124

void FUN_4a03c124(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (((param_3 == 0x20) && (param_4 == 4)) && (*(int *)(PTR_DAT_4a03c194 + 0xbc) == 0)) {
    if (*PTR_DAT_4a03c194 == '\0') {
      host_s3eFileWrite_thumb(param_1,4,param_2,*(undefined4 *)(PTR_DAT_4a03c194 + 8),4);
    }
    else {
      host_s3eFileRead_thumb(param_1,4,param_2);
    }
    FUN_4a0515e4(param_2 << 2);
  }
  else {
    iVar1 = 4;
    if (param_3 + 7 < 0x28) {
      iVar1 = (int)(((uint)(param_3 + 7 >> 0x1f) >> 0x1d) + param_3 + 7) >> 3;
    }
    if (*PTR_DAT_4a03c194 == '\0') {
      FUN_4a056f94(param_1,iVar1,param_2,param_4,PTR_DAT_4a03c194);
    }
    else {
      FUN_4a056f30(param_1,iVar1,param_2);
    }
  }
  return;
}



// Address: 4a03c12c

void FUN_4a03c12c(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (((param_3 == 0x20) && (param_4 == 4)) && (*(int *)(PTR_DAT_4a03c194 + 0xbc) == 0)) {
    if (*PTR_DAT_4a03c194 == '\0') {
      host_s3eFileWrite_thumb(param_1,4,param_2,*(undefined4 *)(PTR_DAT_4a03c194 + 8),4);
    }
    else {
      host_s3eFileRead_thumb(param_1,4,param_2);
    }
    FUN_4a0515e4(param_2 << 2);
  }
  else {
    iVar1 = 4;
    if (param_3 + 7 < 0x28) {
      iVar1 = (int)(((uint)(param_3 + 7 >> 0x1f) >> 0x1d) + param_3 + 7) >> 3;
    }
    if (*PTR_DAT_4a03c194 == '\0') {
      FUN_4a056f94(param_1,iVar1,param_2,param_4,PTR_DAT_4a03c194);
    }
    else {
      FUN_4a056f30(param_1,iVar1,param_2);
    }
  }
  return;
}



// Address: 4a03c198

void FUN_4a03c198(uint param_1,uint param_2,int *param_3,int *param_4)

{
  longlong lVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  puVar3 = PTR_DAT_4a03c328;
  puVar2 = PTR_DAT_4a03c324;
  *(int **)(PTR_DAT_4a03c324 + 8) = param_3;
  iVar8 = *(int *)puVar3;
  iVar7 = (int)(param_1 << 4) >> 0xe;
  iVar9 = *(int *)(iVar8 + iVar7 * 4);
  uVar6 = *(int *)(iVar8 + iVar7 * 4 + 4) - iVar9;
  uVar4 = (param_1 & 0x3ff) * 0x10;
  lVar1 = (ulonglong)uVar4 * (ulonglong)uVar6;
  iVar9 = ((uint)lVar1 >> 0xe |
          (((int)uVar6 >> 0x1f) * uVar4 + (int)((ulonglong)lVar1 >> 0x20)) * 0x40000) + iVar9;
  *(int *)puVar2 = iVar9;
  iVar8 = *(int *)puVar3;
  iVar7 = (int)(param_2 << 4) >> 0xe;
  iVar10 = *(int *)(iVar8 + iVar7 * 4);
  uVar6 = *(int *)(iVar8 + iVar7 * 4 + 4) - iVar10;
  uVar4 = (param_2 & 0x3ff) * 0x10;
  lVar1 = (ulonglong)uVar4 * (ulonglong)uVar6;
  uVar4 = (((uint)lVar1 >> 0xe |
           (((int)uVar6 >> 0x1f) * uVar4 + (int)((ulonglong)lVar1 >> 0x20)) * 0x40000) + iVar10) -
          iVar9;
  iVar7 = (int)(uVar4 * 0x10) >> 0xe;
  iVar9 = iVar7;
  if (iVar7 < 0) {
    iVar9 = -iVar7;
  }
  iVar10 = iVar9;
  if (0x7fff < iVar9) {
    iVar10 = iVar9 >> 3;
  }
  iVar10 = *(int *)(iVar8 + iVar10 * 4);
  if (0x7fff < iVar9) {
    iVar10 = iVar10 >> 3;
  }
  if (iVar7 < 0) {
    iVar10 = -iVar10;
  }
  iVar7 = iVar7 + 1;
  iVar9 = iVar7;
  if (iVar7 < 0) {
    iVar9 = -iVar7;
  }
  iVar5 = iVar9;
  if (0x7fff < iVar9) {
    iVar5 = iVar9 >> 3;
  }
  iVar8 = *(int *)(iVar8 + iVar5 * 4);
  if (0x7fff < iVar9) {
    iVar8 = iVar8 >> 3;
  }
  if (iVar7 < 0) {
    iVar8 = -iVar8;
  }
  uVar4 = (uVar4 & 0x3ff) * 0x10;
  lVar1 = (ulonglong)uVar4 * (ulonglong)(uint)(iVar8 - iVar10);
  *(uint *)(puVar2 + 4) =
       iVar10 + ((uint)lVar1 >> 0xe |
                ((iVar8 - iVar10 >> 0x1f) * uVar4 + (int)((ulonglong)lVar1 >> 0x20)) * 0x40000);
  *(int *)(puVar2 + 0xc) = (*param_4 >> 2) - (*param_3 >> 2);
  *(int *)(puVar2 + 0x10) = (param_4[1] >> 2) - (param_3[1] >> 2);
  *(int *)(puVar2 + 0x14) = param_4[2] - param_3[2];
  *(int *)(puVar2 + 0x18) = param_4[3] - param_3[3];
  *(int *)(puVar2 + 0x1c) = param_4[4] - param_3[4];
  *(int *)(puVar2 + 0x20) = param_4[5] - param_3[5];
  return;
}



// Address: 4a03c32c

/* WARNING: Removing unreachable block (ram,0x4a03c658) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a03c32c(uint *param_1)

{
  undefined1 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  undefined *puVar6;
  undefined *puVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int *piVar13;
  int iVar14;
  undefined4 *puVar15;
  int *piVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  undefined *puVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint *puVar26;
  int iVar27;
  int *piVar28;
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar29;
  
  puVar26 = param_1 + 2;
  iVar14 = *(int *)PTR_DAT_4a03c6b4;
  uVar2 = *(ushort *)(param_1[2] + 0x4a);
  uVar3 = *(ushort *)(param_1[2] + 0x48);
  uVar11 = (*param_1 & 0x1ffffff) >> 0x13;
  uVar19 = 0x3f;
  uVar21 = 0;
  puVar17 = (uint *)(PTR_LAB_4a03c6b0 + 0xb4);
  piVar16 = *(int **)(PTR_LAB_4a03c6b0 + 0x28);
  uVar23 = uVar11;
  do {
    uVar23 = uVar23 - 1;
    sVar5 = *(short *)((int)puVar26 + 10);
    puVar15 = (undefined4 *)puVar26[1];
    *(short *)(iVar14 + 0x18) = (short)((int)(short)puVar26[2] * (uint)uVar2 >> 8);
    *(short *)(iVar14 + 0x1a) = (short)((int)sVar5 * (uint)uVar3 >> 8);
    puVar26 = puVar26 + 3;
    uVar4 = *(ushort *)(puVar15 + 4);
    uVar24 = (uint)uVar4;
    *(uint *)(iVar14 + 0x1c) = *puVar26;
    *(undefined4 *)(iVar14 + 4) = *puVar15;
    uVar19 = uVar19 & uVar24;
    *(undefined4 *)(iVar14 + 8) = puVar15[1];
    uVar21 = uVar21 | uVar24;
    *(undefined4 *)(iVar14 + 0xc) = puVar15[2];
    *(undefined4 *)(iVar14 + 0x10) = puVar15[3];
    *(ushort *)(iVar14 + 0x14) = uVar4;
    *piVar16 = iVar14;
    iVar14 = iVar14 + 0x20;
    *puVar17 = uVar24;
    puVar17 = puVar17 + 1;
    piVar16 = piVar16 + 1;
  } while (uVar23 != 0);
  if (uVar19 != 0) {
    return;
  }
  if ((uVar21 & 0x3f) != 0) {
    if ((*(uint *)(PTR_LAB_4a03c6b0 + 0xb4) & 0x200) == 0) {
      if ((*(uint *)(PTR_LAB_4a03c6b0 + 0xb4) & 0x400) == 0) {
        uVar11 = FUN_4a0581dc(5,uVar11,PTR_LAB_4a03c6b0 + 0xb4);
      }
      else {
        uVar11 = FUN_4a02a41c();
      }
    }
    else {
      iVar14 = 0;
      if (uVar11 != 0) {
        do {
          iVar14 = iVar14 + 1;
        } while (iVar14 < (int)uVar11);
      }
      uVar11 = FUN_4a057b8c(5,uVar11,PTR_LAB_4a03c6b0 + 0xb4);
    }
    if ((int)uVar11 < 3) {
                    /* WARNING: Could not recover jumptable at 0x4a03c480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  puVar7 = PTR_FUN_4a03c6b8;
  puVar20 = PTR_LAB_4a03c6b0 + 0x1b4;
  iVar14 = (*(int **)(PTR_LAB_4a03c6b0 + 0x28))[uVar11 - 1];
  uVar23 = (int)*(short *)(iVar14 + 6) + 3U >> 3;
  piVar16 = *(int **)(PTR_LAB_4a03c6b0 + 0x28);
  uVar19 = uVar23;
  uVar21 = uVar23;
  puVar6 = PTR_LAB_4a03c6b0;
  while (uVar24 = uVar19, iVar10 = iVar14, PTR_LAB_4a03c6b0 = puVar6, uVar11 != 0) {
    uVar11 = uVar11 - 1;
    piVar8 = piVar16 + 1;
    iVar14 = *piVar16;
    uVar19 = (int)*(short *)(iVar14 + 6) + 3U >> 3;
    if (uVar23 < uVar19) {
      uVar23 = uVar19;
    }
    if (uVar19 < uVar21) {
      uVar21 = uVar19;
    }
    piVar16 = piVar8;
    if (uVar24 != uVar19) {
      uVar25 = uVar24;
      iVar22 = iVar14;
      if (uVar24 > uVar19) {
        uVar25 = uVar19;
        iVar22 = iVar10;
        iVar10 = iVar14;
      }
      *(ushort *)(puVar20 + 0x18) = (ushort)(uVar24 <= uVar19);
      puVar6 = PTR_LAB_4a03c6b0;
      *(undefined4 *)(puVar20 + 0x3c) =
           *(undefined4 *)(*(int *)(PTR_LAB_4a03c6b0 + 0xb0) + uVar25 * 4);
      *(undefined **)(*(int *)(puVar6 + 0xb0) + uVar25 * 4) = puVar20;
      (*(code *)puVar7)(puVar20,iVar10,iVar22);
      puVar20 = puVar20 + 0x40;
      puVar6 = PTR_LAB_4a03c6b0;
    }
  }
  if (uVar23 == uVar21) {
                    /* WARNING: Could not recover jumptable at 0x4a03c544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(uint *)(puVar6 + 4) = param_1[1];
  uVar19 = param_1[2];
  uVar11 = (uint)*(byte *)(uVar19 + 0x61) | *param_1 | 0xa0 | (*param_1 & 0x4000000) >> 0x16;
  if ((*(uint *)(uVar19 + 0x34) & 0x40) == 0) {
    uVar11 = uVar11 | 0x100;
  }
  uVar24 = (int)*(short *)(*(int *)(uVar19 + 0x58) + 0x18) >> 8;
  if (uVar24 == 0) {
    *(undefined4 *)(puVar6 + 0x58) = 0;
  }
  else {
    iVar14 = 1;
    while (iVar22 = iVar14, uVar24 >> 1 != 0) {
      uVar24 = uVar24 >> 2;
      iVar22 = iVar14 + 1;
      if (uVar24 == 0) break;
      iVar14 = iVar14 + 2;
    }
    *(int *)(puVar6 + 0x58) = iVar22;
  }
  uVar24 = uVar11 & 0x1ff;
  *(uint *)(puVar6 + 0x5c) = ~(*(uint *)(uVar19 + 0x34) >> 1) & 1;
  uVar25 = uVar11 & 7;
  *(int *)(puVar6 + 0x60) = *(int *)(puVar6 + 0x60) + -0x20;
  if ((uVar25 == 1 || uVar25 == 2) || uVar25 == 5) {
    puVar15 = *(undefined4 **)(uVar19 + 0xa4);
    if (puVar15[1] == 0) {
      FUN_4a038b1c(puVar15,1,uVar11,iVar10);
    }
    *(short *)((int)puVar15 + 10) = *(short *)((int)puVar15 + 10) + 1;
    if ((uVar11 & 0x10) == 0) {
      uVar12 = puVar15[1];
    }
    else {
      uVar12 = *puVar15;
    }
    *(undefined4 *)(puVar6 + 0x8c) = uVar12;
  }
  if ((*(uint *)(uVar19 + 0x34) & 2) != 0) {
    uVar24 = uVar24 | 4;
  }
  *(undefined4 *)(puVar6 + 0x68) = *(undefined4 *)(PTR_PTR_4a03c6bc + (uVar24 & 0xffffffef) * 4);
  if (*(char *)(uVar19 + 99) == '\0' || uVar25 == 5) {
    iVar14 = (uint)(byte)puVar6[4] << 0x14;
  }
  else {
    iVar14 = 0;
  }
  *(int *)(puVar6 + 0x90) = iVar14;
  puVar20 = PTR_LAB_4a02be2c;
  uVar1 = 0;
  uVar24 = (uint)(byte)PTR_LAB_4a02be2c[0x44];
  piVar16 = (int *)(PTR_LAB_4a02be2c + 0xb4);
  uVar11 = uVar24;
  if (uVar24 == 0) {
    uVar11 = uVar19;
  }
  iVar14 = 0;
  if (uVar24 == 0) {
    uVar1 = *(undefined1 *)(uVar11 + 0x62);
  }
  *(undefined4 *)(PTR_LAB_4a02be2c + 0x84) = *(undefined4 *)(uVar19 + 100);
  *(undefined4 *)(puVar20 + 0x88) = *(undefined4 *)(uVar19 + 0x68);
  iVar10 = (int)(uVar23 | uVar21 << 0x10) >> 0x10;
  *(undefined4 *)(puVar20 + 0x54) = 0;
  *(int *)(puVar20 + 0x4c) = iVar10;
  *(int *)(puVar20 + 0x50) = *(int *)(puVar20 + 0x40) + iVar10 * *(int *)(puVar20 + 0x38) * 2;
  iVar22 = ((uVar23 & 0xffff) - 1) - iVar10;
  piVar8 = (int *)(*(int *)(puVar20 + 0xb0) + iVar10 * 4);
  do {
    iVar10 = *piVar8;
    piVar9 = piVar8 + 1;
    *piVar8 = 0;
    iVar18 = iVar14;
    for (; iVar10 != 0; iVar10 = *(int *)(iVar10 + 0x3c)) {
      piVar16[iVar18] = iVar10;
      iVar18 = iVar18 + 1;
    }
    if (iVar18 == 2) {
      if (*(int *)*piVar16 <= **(int **)(puVar20 + 0xb8)) goto LAB_4a02bb20;
      do {
        iVar14 = *piVar16;
        *piVar16 = *(int *)(puVar20 + 0xb8);
        *(int *)(puVar20 + 0xb8) = iVar14;
LAB_4a02bb20:
        do {
          piVar8 = (int *)*piVar16;
          if (((*(ushort *)(piVar8 + 6) & 1) != 0) &&
             (0 < (**(int **)(puVar20 + 0xb8) >> 0x12) - (*piVar8 >> 0x12))) {
            FUN_4a05e778(piVar8,*(int **)(puVar20 + 0xb8),uVar1,uVar19);
          }
          bVar29 = iVar22 == 0;
          iVar22 = iVar22 + -1;
          *(int *)(puVar20 + 0x50) = *(int *)(puVar20 + 0x50) + *(int *)(puVar20 + 0x38) * 2;
          *(int *)(puVar20 + 0x4c) = *(int *)(puVar20 + 0x4c) + 1;
          if (bVar29) {
            return;
          }
          if (*piVar9 != 0) goto LAB_4a02bb84;
          piVar8 = (int *)*piVar16;
          piVar9 = piVar9 + 1;
          uVar2 = *(ushort *)(piVar8 + 6);
          *piVar8 = piVar8[1] + *piVar8;
          if (((uVar2 & 4) != 0) || (piVar8[2] = piVar8[2] + piVar8[3], (uVar2 & 8) == 0)) {
            if ((uVar2 & 0x10) == 0) {
              piVar8[9] = piVar8[9] + piVar8[7];
            }
            if ((uVar2 & 0x20) == 0) {
              piVar8[10] = piVar8[10] + piVar8[8];
            }
            if ((uVar2 & 0x80) == 0) {
              piVar8[0xb] = piVar8[0xb] + piVar8[0xd];
            }
            if ((uVar2 & 0x100) == 0) {
              piVar8[0xc] = piVar8[0xc] + piVar8[0xe];
            }
          }
          piVar8 = *(int **)(puVar20 + 0xb8);
          uVar2 = *(ushort *)(piVar8 + 6);
          *piVar8 = piVar8[1] + *piVar8;
          if (((uVar2 & 4) != 0) || (piVar8[2] = piVar8[2] + piVar8[3], (uVar2 & 8) == 0)) {
            if ((uVar2 & 0x10) == 0) {
              piVar8[9] = piVar8[9] + piVar8[7];
            }
            if ((uVar2 & 0x20) == 0) {
              piVar8[10] = piVar8[10] + piVar8[8];
            }
            if ((uVar2 & 0x80) == 0) {
              piVar8[0xb] = piVar8[0xb] + piVar8[0xd];
            }
            if ((uVar2 & 0x100) == 0) {
              piVar8[0xc] = piVar8[0xc] + piVar8[0xe];
            }
          }
        } while (*(int *)*piVar16 <= **(int **)(puVar20 + 0xb8));
      } while( true );
    }
    iVar14 = 1;
    if (1 < iVar18) {
      do {
        puVar15 = (undefined4 *)piVar16[iVar14];
        piVar8 = (int *)*puVar15;
        if ((int)piVar8 < *(int *)piVar16[iVar14 + -1]) {
          iVar10 = iVar14 + -1;
          piVar13 = (int *)piVar16[iVar10];
          do {
            iVar27 = iVar10 + -1;
            piVar16[iVar10 + 1] = (int)piVar13;
            if ((iVar27 < 0) || (piVar13 = (int *)piVar16[iVar27], *piVar13 <= (int)piVar8)) break;
            piVar28 = piVar16 + iVar27;
            iVar10 = iVar10 + -2;
            bVar29 = iVar10 == 0;
            piVar28[1] = (int)piVar13;
            if (-1 < iVar10) {
              piVar13 = (int *)piVar16[iVar10];
              piVar28 = (int *)*piVar13;
              bVar29 = piVar28 == piVar8;
            }
            iVar27 = iVar10;
          } while (!bVar29 && (-1 < iVar10 && (int)piVar8 <= (int)piVar28));
          piVar16[iVar27 + 1] = (int)puVar15;
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < iVar18);
    }
    iVar14 = 0;
    if (1 < iVar18) {
      do {
        piVar8 = (int *)0x0;
        iVar10 = 0;
        for (; iVar14 < iVar18; iVar14 = iVar14 + 1) {
          if ((*(ushort *)(piVar16[iVar14] + 0x18) & 1) == 0) {
            iVar10 = iVar10 + -1;
          }
          else {
            iVar10 = iVar10 + 1;
          }
          if (iVar10 == 1) {
            piVar8 = (int *)piVar16[iVar14];
            iVar14 = iVar14 + 1;
            break;
          }
        }
        if (iVar18 <= iVar14) break;
        piVar13 = (int *)0x0;
        do {
          iVar27 = iVar14;
          if ((*(ushort *)(piVar16[iVar27] + 0x18) & 1) == 0) {
            iVar10 = iVar10 + -1;
          }
          else {
            iVar10 = iVar10 + 1;
          }
          if (iVar10 == 0) {
            piVar13 = (int *)piVar16[iVar27];
            break;
          }
          iVar14 = iVar27 + 1;
        } while (iVar27 + 1 < iVar18);
        iVar14 = iVar27 + 1;
        if (iVar18 < iVar14) break;
        if (((*(ushort *)(piVar8 + 6) & 1) != 0) && (0 < (*piVar13 >> 0x12) - (*piVar8 >> 0x12))) {
          FUN_4a05e778(piVar8,piVar13,uVar1,uVar19);
        }
      } while (iVar27 + 2 < iVar18);
    }
    bVar29 = iVar22 == 0;
    iVar22 = iVar22 + -1;
    *(int *)(puVar20 + 0x50) = *(int *)(puVar20 + 0x50) + *(int *)(puVar20 + 0x38) * 2;
    *(int *)(puVar20 + 0x4c) = *(int *)(puVar20 + 0x4c) + 1;
    if (bVar29) {
      return;
    }
LAB_4a02bb84:
    iVar27 = *(int *)(puVar20 + 0x4c);
    iVar14 = 0;
    iVar10 = 0;
    piVar8 = piVar9;
    if (0 < iVar18) {
      do {
        piVar9 = (int *)piVar16[iVar10];
        if (iVar27 < *(short *)((int)piVar9 + 0x1a)) {
          uVar2 = *(ushort *)(piVar9 + 6);
          *piVar9 = *piVar9 + piVar9[1];
          if (((uVar2 & 4) != 0) || (piVar9[2] = piVar9[2] + piVar9[3], (uVar2 & 8) == 0)) {
            if ((uVar2 & 0x10) == 0) {
              piVar9[9] = piVar9[9] + piVar9[7];
            }
            if ((uVar2 & 0x20) == 0) {
              piVar9[10] = piVar9[10] + piVar9[8];
            }
            if ((uVar2 & 0x80) == 0) {
              piVar9[0xb] = piVar9[0xb] + piVar9[0xd];
            }
            if ((uVar2 & 0x100) == 0) {
              piVar9[0xc] = piVar9[0xc] + piVar9[0xe];
            }
          }
          if (iVar14 != iVar10) {
            piVar16[iVar14] = piVar16[iVar10];
          }
          iVar14 = iVar14 + 1;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar18);
    }
  } while( true );
}



// Address: 4a03c6c0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a03c6c0(uint *param_1)

{
  undefined1 uVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  undefined *puVar5;
  undefined *puVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int *piVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  int *piVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  undefined *puVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  undefined4 *puVar25;
  uint uVar26;
  uint *puVar27;
  int iVar28;
  int *piVar29;
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar30;
  
  puVar15 = param_1 + 2;
  puVar14 = *(uint **)PTR_DAT_4a03c9f8;
  uVar2 = *(ushort *)(param_1[1] + 0x4a);
  uVar3 = *(ushort *)(param_1[1] + 0x48);
  uVar10 = (*param_1 & 0x1ffffff) >> 0x13;
  uVar19 = 0x3f;
  uVar21 = 0;
  puVar17 = (uint *)(PTR_LAB_4a03c9f4 + 0xb4);
  puVar25 = *(undefined4 **)(PTR_LAB_4a03c9f4 + 0x28);
  uVar24 = uVar10;
  do {
    uVar24 = uVar24 - 1;
    sVar4 = *(short *)((int)puVar15 + 10);
    puVar27 = (uint *)puVar15[1];
    *(short *)(puVar14 + 6) = (short)((uint)uVar2 * (int)(short)puVar15[2] >> 8);
    *(short *)((int)puVar14 + 0x1a) = (short)((uint)uVar3 * (int)sVar4 >> 8);
    uVar22 = puVar27[4];
    uVar26 = (uint)(ushort)uVar22;
    *puVar14 = *puVar15;
    puVar14[7] = puVar15[3];
    puVar15 = puVar15 + 4;
    puVar14[1] = *puVar27;
    uVar19 = uVar19 & uVar26;
    puVar14[2] = puVar27[1];
    uVar21 = uVar21 | uVar26;
    puVar14[3] = puVar27[2];
    puVar14[4] = puVar27[3];
    *(ushort *)(puVar14 + 5) = (ushort)uVar22;
    *puVar25 = puVar14;
    puVar14 = puVar14 + 8;
    *puVar17 = uVar26;
    puVar17 = puVar17 + 1;
    puVar25 = puVar25 + 1;
  } while (uVar24 != 0);
  if (uVar19 != 0) {
    return;
  }
  if ((uVar21 & 0x3f) != 0) {
    if ((*(uint *)(PTR_LAB_4a03c9f4 + 0xb4) & 0x200) == 0) {
      if ((*(uint *)(PTR_LAB_4a03c9f4 + 0xb4) & 0x400) == 0) {
        uVar10 = FUN_4a0581dc(7,uVar10,PTR_LAB_4a03c9f4 + 0xb4);
      }
      else {
        uVar10 = FUN_4a02a41c();
      }
    }
    else {
      iVar13 = 0;
      if (uVar10 != 0) {
        do {
          iVar13 = iVar13 + 1;
        } while (iVar13 < (int)uVar10);
      }
      uVar10 = FUN_4a057b8c(7,uVar10,PTR_LAB_4a03c9f4 + 0xb4);
    }
    if ((int)uVar10 < 3) {
                    /* WARNING: Could not recover jumptable at 0x4a03c820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  puVar6 = PTR_FUN_4a03c9fc;
  puVar20 = PTR_LAB_4a03c9f4 + 0x1b4;
  iVar13 = (*(int **)(PTR_LAB_4a03c9f4 + 0x28))[uVar10 - 1];
  uVar24 = (int)*(short *)(iVar13 + 6) + 3U >> 3;
  piVar16 = *(int **)(PTR_LAB_4a03c9f4 + 0x28);
  uVar19 = uVar24;
  uVar21 = uVar24;
  while (uVar22 = uVar19, iVar9 = iVar13, uVar10 != 0) {
    uVar10 = uVar10 - 1;
    piVar7 = piVar16 + 1;
    iVar13 = *piVar16;
    uVar19 = (int)*(short *)(iVar13 + 6) + 3U >> 3;
    if (uVar24 < uVar19) {
      uVar24 = uVar19;
    }
    if (uVar19 < uVar21) {
      uVar21 = uVar19;
    }
    piVar16 = piVar7;
    if (uVar22 != uVar19) {
      uVar26 = uVar22;
      iVar23 = iVar13;
      if (uVar22 > uVar19) {
        uVar26 = uVar19;
        iVar23 = iVar9;
        iVar9 = iVar13;
      }
      *(ushort *)(puVar20 + 0x18) = (ushort)(uVar22 <= uVar19);
      puVar5 = PTR_LAB_4a03c9f4;
      *(undefined4 *)(puVar20 + 0x44) =
           *(undefined4 *)(*(int *)(PTR_LAB_4a03c9f4 + 0xb0) + uVar26 * 4);
      *(undefined **)(*(int *)(puVar5 + 0xb0) + uVar26 * 4) = puVar20;
      (*(code *)puVar6)(puVar20,iVar9,iVar23);
      puVar20 = puVar20 + 0x48;
    }
  }
  if (uVar24 == uVar21) {
                    /* WARNING: Could not recover jumptable at 0x4a03c8e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uVar19 = param_1[1];
  uVar10 = (uint)*(byte *)(uVar19 + 0x61) | *param_1 | 0xa8;
  if ((*(uint *)(uVar19 + 0x34) & 0x40) == 0) {
    uVar10 = uVar10 | 0x100;
  }
  uVar22 = (int)*(short *)(*(int *)(uVar19 + 0x58) + 0x18) >> 8;
  if (uVar22 == 0) {
    *(undefined4 *)(PTR_LAB_4a03c9f4 + 0x58) = 0;
  }
  else {
    iVar13 = 1;
    while (iVar23 = iVar13, uVar22 >> 1 != 0) {
      uVar22 = uVar22 >> 2;
      iVar23 = iVar13 + 1;
      if (uVar22 == 0) break;
      iVar13 = iVar13 + 2;
    }
    *(int *)(PTR_LAB_4a03c9f4 + 0x58) = iVar23;
  }
  puVar20 = PTR_LAB_4a03c9f4;
  *(uint *)(PTR_LAB_4a03c9f4 + 0x5c) = ~(*(uint *)(uVar19 + 0x34) >> 1) & 1;
  uVar22 = uVar10 & 0x1ff;
  *(int *)(puVar20 + 0x60) = *(int *)(puVar20 + 0x60) + -0x20;
  uVar26 = uVar10 & 7;
  if ((uVar26 == 1 || uVar26 == 2) || uVar26 == 5) {
    puVar25 = *(undefined4 **)(uVar19 + 0xa4);
    if (puVar25[1] == 0) {
      FUN_4a038b1c(puVar25,1,uVar10,iVar9);
    }
    *(short *)((int)puVar25 + 10) = *(short *)((int)puVar25 + 10) + 1;
    if ((uVar10 & 0x10) == 0) {
      uVar11 = puVar25[1];
    }
    else {
      uVar11 = *puVar25;
    }
    *(undefined4 *)(puVar20 + 0x8c) = uVar11;
  }
  if ((*(uint *)(uVar19 + 0x34) & 2) != 0) {
    uVar22 = uVar22 | 4;
  }
  *(undefined4 *)(puVar20 + 0x68) = *(undefined4 *)(PTR_PTR_4a03ca00 + (uVar22 & 0xffffffef) * 4);
  puVar20 = PTR_LAB_4a02c360;
  uVar1 = 0;
  uVar22 = (uint)(byte)PTR_LAB_4a02c360[0x44];
  piVar16 = (int *)(PTR_LAB_4a02c360 + 0xb4);
  uVar10 = uVar22;
  if (uVar22 == 0) {
    uVar10 = uVar19;
  }
  iVar13 = 0;
  if (uVar22 == 0) {
    uVar1 = *(undefined1 *)(uVar10 + 0x62);
  }
  *(undefined4 *)(PTR_LAB_4a02c360 + 0x84) = *(undefined4 *)(uVar19 + 100);
  *(undefined4 *)(puVar20 + 0x88) = *(undefined4 *)(uVar19 + 0x68);
  iVar9 = (int)(uVar24 | uVar21 << 0x10) >> 0x10;
  *(undefined4 *)(puVar20 + 0x54) = 0;
  *(int *)(puVar20 + 0x4c) = iVar9;
  *(int *)(puVar20 + 0x50) = *(int *)(puVar20 + 0x40) + iVar9 * *(int *)(puVar20 + 0x38) * 2;
  iVar23 = ((uVar24 & 0xffff) - 1) - iVar9;
  piVar7 = (int *)(*(int *)(puVar20 + 0xb0) + iVar9 * 4);
  do {
    iVar9 = *piVar7;
    piVar8 = piVar7 + 1;
    *piVar7 = 0;
    iVar18 = iVar13;
    for (; iVar9 != 0; iVar9 = *(int *)(iVar9 + 0x44)) {
      piVar16[iVar18] = iVar9;
      iVar18 = iVar18 + 1;
    }
    if (iVar18 == 2) {
      if (*(int *)*piVar16 <= **(int **)(puVar20 + 0xb8)) goto LAB_4a02c03c;
      do {
        iVar13 = *piVar16;
        *piVar16 = *(int *)(puVar20 + 0xb8);
        *(int *)(puVar20 + 0xb8) = iVar13;
LAB_4a02c03c:
        do {
          piVar7 = (int *)*piVar16;
          if (((*(ushort *)(piVar7 + 6) & 1) != 0) &&
             (0 < (**(int **)(puVar20 + 0xb8) >> 0x12) - (*piVar7 >> 0x12))) {
            FUN_4a05eb00(piVar7,*(int **)(puVar20 + 0xb8),uVar1,uVar19);
          }
          bVar30 = iVar23 == 0;
          iVar23 = iVar23 + -1;
          *(int *)(puVar20 + 0x50) = *(int *)(puVar20 + 0x50) + *(int *)(puVar20 + 0x38) * 2;
          *(int *)(puVar20 + 0x4c) = *(int *)(puVar20 + 0x4c) + 1;
          if (bVar30) {
            return;
          }
          if (*piVar8 != 0) goto LAB_4a02c0a0;
          piVar7 = (int *)*piVar16;
          piVar8 = piVar8 + 1;
          uVar2 = *(ushort *)(piVar7 + 6);
          *piVar7 = piVar7[1] + *piVar7;
          if (((uVar2 & 4) != 0) || (piVar7[2] = piVar7[2] + piVar7[3], (uVar2 & 8) == 0)) {
            if ((uVar2 & 0x40) == 0) {
              piVar7[0xb] = piVar7[0xc] + piVar7[0xb];
            }
            if ((uVar2 & 0x10) == 0) {
              piVar7[9] = piVar7[9] + piVar7[7];
            }
            if ((uVar2 & 0x20) == 0) {
              piVar7[10] = piVar7[10] + piVar7[8];
            }
            if ((uVar2 & 0x80) == 0) {
              piVar7[0xd] = piVar7[0xd] + piVar7[0xf];
            }
            if ((uVar2 & 0x100) == 0) {
              piVar7[0xe] = piVar7[0xe] + piVar7[0x10];
            }
          }
          piVar7 = *(int **)(puVar20 + 0xb8);
          uVar2 = *(ushort *)(piVar7 + 6);
          *piVar7 = piVar7[1] + *piVar7;
          if (((uVar2 & 4) != 0) || (piVar7[2] = piVar7[2] + piVar7[3], (uVar2 & 8) == 0)) {
            if ((uVar2 & 0x40) == 0) {
              piVar7[0xb] = piVar7[0xc] + piVar7[0xb];
            }
            if ((uVar2 & 0x10) == 0) {
              piVar7[9] = piVar7[9] + piVar7[7];
            }
            if ((uVar2 & 0x20) == 0) {
              piVar7[10] = piVar7[10] + piVar7[8];
            }
            if ((uVar2 & 0x80) == 0) {
              piVar7[0xd] = piVar7[0xd] + piVar7[0xf];
            }
            if ((uVar2 & 0x100) == 0) {
              piVar7[0xe] = piVar7[0xe] + piVar7[0x10];
            }
          }
        } while (*(int *)*piVar16 <= **(int **)(puVar20 + 0xb8));
      } while( true );
    }
    iVar13 = 1;
    if (1 < iVar18) {
      do {
        puVar25 = (undefined4 *)piVar16[iVar13];
        piVar7 = (int *)*puVar25;
        if ((int)piVar7 < *(int *)piVar16[iVar13 + -1]) {
          iVar9 = iVar13 + -1;
          piVar12 = (int *)piVar16[iVar9];
          do {
            iVar28 = iVar9 + -1;
            piVar16[iVar9 + 1] = (int)piVar12;
            if ((iVar28 < 0) || (piVar12 = (int *)piVar16[iVar28], *piVar12 <= (int)piVar7)) break;
            piVar29 = piVar16 + iVar28;
            iVar9 = iVar9 + -2;
            bVar30 = iVar9 == 0;
            piVar29[1] = (int)piVar12;
            if (-1 < iVar9) {
              piVar12 = (int *)piVar16[iVar9];
              piVar29 = (int *)*piVar12;
              bVar30 = piVar29 == piVar7;
            }
            iVar28 = iVar9;
          } while (!bVar30 && (-1 < iVar9 && (int)piVar7 <= (int)piVar29));
          piVar16[iVar28 + 1] = (int)puVar25;
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < iVar18);
    }
    iVar13 = 0;
    if (1 < iVar18) {
      do {
        piVar7 = (int *)0x0;
        iVar9 = 0;
        for (; iVar13 < iVar18; iVar13 = iVar13 + 1) {
          if ((*(ushort *)(piVar16[iVar13] + 0x18) & 1) == 0) {
            iVar9 = iVar9 + -1;
          }
          else {
            iVar9 = iVar9 + 1;
          }
          if (iVar9 == 1) {
            piVar7 = (int *)piVar16[iVar13];
            iVar13 = iVar13 + 1;
            break;
          }
        }
        if (iVar18 <= iVar13) break;
        piVar12 = (int *)0x0;
        do {
          iVar28 = iVar13;
          if ((*(ushort *)(piVar16[iVar28] + 0x18) & 1) == 0) {
            iVar9 = iVar9 + -1;
          }
          else {
            iVar9 = iVar9 + 1;
          }
          if (iVar9 == 0) {
            piVar12 = (int *)piVar16[iVar28];
            break;
          }
          iVar13 = iVar28 + 1;
        } while (iVar28 + 1 < iVar18);
        iVar13 = iVar28 + 1;
        if (iVar18 < iVar13) break;
        if (((*(ushort *)(piVar7 + 6) & 1) != 0) && (0 < (*piVar12 >> 0x12) - (*piVar7 >> 0x12))) {
          FUN_4a05eb00(piVar7,piVar12,uVar1,uVar19);
        }
      } while (iVar28 + 2 < iVar18);
    }
    bVar30 = iVar23 == 0;
    iVar23 = iVar23 + -1;
    *(int *)(puVar20 + 0x50) = *(int *)(puVar20 + 0x50) + *(int *)(puVar20 + 0x38) * 2;
    *(int *)(puVar20 + 0x4c) = *(int *)(puVar20 + 0x4c) + 1;
    if (bVar30) {
      return;
    }
LAB_4a02c0a0:
    iVar28 = *(int *)(puVar20 + 0x4c);
    iVar13 = 0;
    iVar9 = 0;
    piVar7 = piVar8;
    if (0 < iVar18) {
      do {
        piVar8 = (int *)piVar16[iVar9];
        if (iVar28 < *(short *)((int)piVar8 + 0x1a)) {
          uVar2 = *(ushort *)(piVar8 + 6);
          *piVar8 = *piVar8 + piVar8[1];
          if (((uVar2 & 4) != 0) || (piVar8[2] = piVar8[2] + piVar8[3], (uVar2 & 8) == 0)) {
            if ((uVar2 & 0x40) == 0) {
              piVar8[0xb] = piVar8[0xc] + piVar8[0xb];
            }
            if ((uVar2 & 0x10) == 0) {
              piVar8[9] = piVar8[9] + piVar8[7];
            }
            if ((uVar2 & 0x20) == 0) {
              piVar8[10] = piVar8[10] + piVar8[8];
            }
            if ((uVar2 & 0x80) == 0) {
              piVar8[0xd] = piVar8[0xd] + piVar8[0xf];
            }
            if ((uVar2 & 0x100) == 0) {
              piVar8[0xe] = piVar8[0xe] + piVar8[0x10];
            }
          }
          if (iVar13 != iVar9) {
            piVar16[iVar13] = piVar16[iVar9];
          }
          iVar13 = iVar13 + 1;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar18);
    }
  } while( true );
}



// Address: 4a03ca04

/* WARNING: Control flow encountered bad instruction data */
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
/* WARNING: Removing unreachable block (ram,0x4a1a4574) */
/* WARNING: Removing unreachable block (ram,0x4a68a08c) */
/* WARNING: Removing unreachable block (ram,0x4a03d054) */
/* WARNING: Removing unreachable block (ram,0x4a6bc94c) */
/* WARNING: Removing unreachable block (ram,0x4a03d058) */
/* WARNING: Removing unreachable block (ram,0x4a03d05c) */
/* WARNING: Removing unreachable block (ram,0x4a03d060) */
/* WARNING: Removing unreachable block (ram,0x4a03d064) */
/* WARNING: Removing unreachable block (ram,0x4a03d068) */
/* WARNING: Removing unreachable block (ram,0x4a112ca8) */
/* WARNING: Removing unreachable block (ram,0x4a112d74) */
/* WARNING: Removing unreachable block (ram,0x4a041910) */
/* WARNING: Removing unreachable block (ram,0x4a041920) */
/* WARNING: Removing unreachable block (ram,0x4a041928) */
/* WARNING: Removing unreachable block (ram,0x4a041930) */
/* WARNING: Removing unreachable block (ram,0x4a041964) */
/* WARNING: Removing unreachable block (ram,0x4a0419c0) */
/* WARNING: Removing unreachable block (ram,0x4a0419d0) */
/* WARNING: Removing unreachable block (ram,0x4a0419c8) */
/* WARNING: Removing unreachable block (ram,0x4a68d720) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint * FUN_4a03ca04(uint *param_1)

{
  ushort uVar1;
  short sVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  uint *puVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint unaff_r4;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *unaff_r5;
  undefined4 *puVar18;
  int *piVar19;
  uint unaff_r6;
  uint uVar20;
  undefined *puVar21;
  undefined *unaff_r7;
  uint uVar22;
  undefined *puVar23;
  undefined *unaff_r8;
  uint uVar24;
  code *pcVar25;
  undefined4 *puVar26;
  code *unaff_r9;
  code *pcVar27;
  uint unaff_r10;
  uint uVar28;
  uint unaff_r11;
  uint uVar29;
  uint *puVar30;
  int iVar31;
  code **ppcVar32;
  int *piVar33;
  code *UNRECOVERED_JUMPTABLE_00;
  code *pcVar34;
  int iVar35;
  int *piVar36;
  int iVar37;
  bool bVar38;
  code *pcStack_60;
  uint uStack_5c;
  uint uStack_58;
  int iStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  uint local_44;
  code *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  uint local_34;
  uint *local_30;
  int local_2c;
  uint local_28;
  
  local_2c = 0;
  local_30 = param_1 + -1;
  local_34 = (*param_1 & 0x1ffffff) >> 0x13;
  local_28 = param_1[1];
  puVar5 = *(uint **)PTR_DAT_4a03d058;
  uVar29 = (uint)*(ushort *)(local_28 + 0x4a);
  uVar1 = *(ushort *)(local_28 + 0x48);
  local_3c = (undefined4 *)(local_34 - 1);
  local_38 = (undefined4 *)(uint)uVar1;
  uVar22 = 0;
  puVar16 = (undefined4 *)0x7f00;
  local_44 = 0x7f00;
  local_40 = (code *)0x0;
  puVar18 = (undefined4 *)0x0;
  uVar20 = 0x3f;
  pcVar34 = (code *)0x7f000000;
  local_48 = 0;
  puVar17 = *(undefined4 **)(PTR_LAB_4a03d054 + 0x28);
  puVar30 = (uint *)(PTR_LAB_4a03d054 + 0xb4);
  puVar6 = param_1 + -1;
  do {
    pcVar27 = local_40;
    sVar2 = *(short *)((int)puVar6 + 0x16);
    puVar10 = (uint *)puVar6[4];
    *(short *)(puVar5 + 6) = (short)(uVar29 * (int)(short)puVar6[5] >> 8);
    *(short *)((int)puVar5 + 0x1a) = (short)((uint)uVar1 * (int)sVar2 >> 8);
    uVar8 = puVar10[4];
    uVar24 = (uint)(ushort)uVar8;
    *puVar5 = puVar6[3];
    uVar20 = uVar20 & uVar24;
    puVar5[1] = *puVar10;
    uVar22 = uVar22 | uVar24;
    puVar5[2] = puVar10[1];
    puVar5[3] = puVar10[2];
    uVar28 = puVar10[3];
    puVar5[4] = uVar28;
    *(ushort *)(puVar5 + 5) = (ushort)uVar8;
    *puVar17 = puVar5;
    *puVar30 = uVar24;
    pcVar25 = (code *)puVar10[3];
    puVar5 = puVar5 + 8;
    if ((int)local_40 < (int)pcVar25) {
      local_40 = pcVar25;
    }
    if ((int)pcVar25 < (int)pcVar34) {
      pcVar34 = pcVar25;
    }
    puVar26 = (undefined4 *)(int)(short)*puVar10;
    iVar11 = (int)*(short *)((int)puVar10 + 2);
    if ((int)puVar18 < (int)puVar26) {
      puVar18 = puVar26;
    }
    if ((int)puVar26 < (int)puVar16) {
      puVar16 = puVar26;
    }
    if ((int)local_48 < iVar11) {
      local_48 = iVar11;
    }
    if (iVar11 < (int)local_44) {
      local_44 = iVar11;
    }
    bVar38 = local_3c != (undefined4 *)0x0;
    local_3c = (undefined4 *)((int)local_3c + -1);
    puVar17 = puVar17 + 1;
    puVar30 = puVar30 + 1;
    puVar6 = puVar6 + 3;
  } while (bVar38);
  if (uVar20 != 0) {
    return puVar5;
  }
  if ((uVar22 & 0x3f) == 0) {
    iVar11 = ((int)local_40 - (int)pcVar34) *
             ((int)((int)puVar18 + ((local_48 - local_44) - (int)puVar16) + 8) >> 4);
    if (iVar11 + (int)pcVar34 * -2 == 0 || iVar11 < (int)pcVar34 * 2) {
      local_2c = 1;
    }
  }
  else {
    if ((*(uint *)(PTR_LAB_4a03d054 + 0xb4) & 0x200) == 0) {
      if ((*(uint *)(PTR_LAB_4a03d054 + 0xb4) & 0x400) == 0) {
        pcVar34 = (code *)0x4a03cbec;
        local_34 = FUN_4a0581dc(0xb,local_34,PTR_LAB_4a03d054 + 0xb4);
      }
      else {
        pcVar34 = (code *)0x4a03cbe4;
        local_34 = FUN_4a02a41c();
      }
    }
    else {
      iVar11 = 0;
      if (local_34 != 0) {
        puVar18 = *(undefined4 **)(PTR_LAB_4a03d054 + 0x18);
        do {
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)local_34);
      }
      pcVar34 = (code *)0x4a03cbc4;
      local_34 = FUN_4a057b8c(0xb,local_34,PTR_LAB_4a03d054 + 0xb4);
    }
    if ((int)local_34 < 3) {
                    /* WARNING: Could not recover jumptable at 0x4a03cbfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar6 = (uint *)(*UNRECOVERED_JUMPTABLE_00)();
      return puVar6;
    }
  }
  puVar21 = PTR_LAB_4a03d054 + 0x1b4;
  iVar11 = (*(int **)(PTR_LAB_4a03d054 + 0x28))[local_34 - 1];
  local_3c = (undefined4 *)((int)*(short *)(iVar11 + 6) + 3U >> 3);
  local_40 = (code *)PTR_FUN_4a03d05c;
  if (local_2c != 0) {
    local_40 = (code *)PTR_FUN_4a03d060;
  }
  local_44 = 0;
  local_48 = 0;
  uStack_4c = 0;
  uStack_50 = 0;
  iStack_54 = 0;
  piVar19 = *(int **)(PTR_LAB_4a03d054 + 0x28);
  puVar17 = local_3c;
  puVar3 = PTR_LAB_4a03d054;
  local_38 = local_3c;
  uVar20 = local_34;
  while (puVar16 = puVar17, iVar31 = iVar11, local_34 = uVar20 - 1, PTR_LAB_4a03d054 = puVar3,
        uVar20 != 0) {
    piVar9 = piVar19 + 1;
    iVar11 = *piVar19;
    pcVar27 = (code *)(int)*(short *)(iVar11 + 6);
    puVar18 = (undefined4 *)((uint)(pcVar27 + 3) >> 3);
    if (local_2c != 0) {
      uVar28 = (uint)*(short *)(iVar31 + 4);
      uVar29 = (uint)*(short *)(iVar31 + 6);
      uStack_58 = uVar28;
      pcVar34 = (code *)(int)*(short *)(iVar11 + 0x1a);
      uStack_5c = uVar29;
      pcStack_60 = pcVar27;
      local_44 = (uVar29 - (int)pcVar27) *
                 ((int)*(short *)(iVar31 + 0x18) + (int)*(short *)(iVar11 + 0x18)) + local_44;
      local_48 = (int)(pcVar34 + *(short *)(iVar31 + 0x1a)) * (uVar29 - (int)pcVar27) + local_48;
      iVar13 = uVar28 + (int)*(short *)(iVar11 + 4);
      uStack_4c = iVar13 * ((int)*(short *)(iVar31 + 0x18) - (int)*(short *)(iVar11 + 0x18)) +
                  uStack_4c;
      uStack_50 = ((int)*(short *)(iVar31 + 0x1a) - (int)pcVar34) * iVar13 + uStack_50;
      iStack_54 = (int)(pcVar27 + uVar29) * (uVar28 - (int)*(short *)(iVar11 + 4)) + iStack_54;
    }
    if ((int)local_3c < (int)puVar18) {
      local_3c = puVar18;
    }
    if ((int)puVar18 < (int)local_38) {
      local_38 = puVar18;
    }
    piVar19 = piVar9;
    puVar17 = puVar18;
    uVar20 = local_34;
    if (puVar16 != puVar18) {
      puVar26 = puVar16;
      iVar13 = iVar31;
      iVar14 = iVar11;
      if (puVar16 > puVar18) {
        puVar26 = puVar18;
        iVar13 = iVar11;
        iVar14 = iVar31;
      }
      *(ushort *)(puVar21 + 0x18) = (ushort)(puVar16 <= puVar18);
      puVar3 = PTR_LAB_4a03d054;
      pcVar34 = (code *)0x4a03cdb4;
      *(undefined4 *)(puVar21 + 0x4c) =
           *(undefined4 *)(*(int *)(PTR_LAB_4a03d054 + 0xb0) + (int)puVar26 * 4);
      *(undefined **)(*(int *)(puVar3 + 0xb0) + (int)puVar26 * 4) = puVar21;
      (*local_40)(puVar21,iVar13,iVar14);
      puVar21 = puVar21 + 0x50;
      puVar3 = PTR_LAB_4a03d054;
      uVar20 = local_34;
    }
  }
  if (local_3c == local_38) {
                    /* WARNING: Could not recover jumptable at 0x4a03cde4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar6 = (uint *)(*UNRECOVERED_JUMPTABLE_00)();
    return puVar6;
  }
  if (local_2c != 0) {
    puVar18 = (undefined4 *)0x0;
    if ((puVar3[0x44] == '\0') &&
       (puVar18 = (undefined4 *)(uint)*(byte *)(local_28 + 0x62), puVar18 != (undefined4 *)0x0)) {
      uVar20 = local_44;
      if ((int)local_44 < 1) {
        uVar20 = -local_44;
      }
      uVar22 = local_48;
      if ((int)local_48 < 1) {
        uVar22 = -local_48;
      }
      uVar8 = local_48;
      if ((int)uVar22 < (int)uVar20) {
        uVar8 = local_44;
      }
      if ((int)uVar8 < 1) {
        uVar8 = -uVar8;
      }
      uVar20 = uStack_4c;
      if ((int)uStack_4c < 1) {
        uVar20 = -uStack_4c;
      }
      uVar22 = uStack_50;
      if ((int)uStack_50 < 1) {
        uVar22 = -uStack_50;
      }
      uVar24 = uStack_50;
      if ((int)uVar22 < (int)uVar20) {
        uVar24 = uStack_4c;
      }
      if ((int)uVar24 < 1) {
        uVar24 = -uVar24;
      }
      if ((int)uVar24 < (int)uVar8) {
        uVar24 = uVar8;
      }
      if (iStack_54 < 0) {
        iStack_54 = -iStack_54;
      }
      if (iStack_54 != 0) {
        pcVar34 = (code *)0x4a03cee4;
        uVar20 = FUN_4a00080c(uVar24 << 0x13,((int)uVar24 >> 0x1f) << 0x13 | uVar24 >> 0xd,iStack_54
                              ,iStack_54 >> 0x1f);
        puVar17 = (undefined4 *)0x0;
        if (0x9ffff < uVar20 >> 4) {
          puVar17 = (undefined4 *)&DAT_00000004;
          uVar20 = uVar20 >> 4;
        }
        if (0x9ffff < uVar20 >> 2) {
          puVar17 = (undefined4 *)((int)puVar17 + 2);
          uVar20 = uVar20 >> 2;
        }
        if (0x9ffff < uVar20 >> 1) {
          puVar17 = (undefined4 *)((int)puVar17 + 1);
        }
        if (puVar17 < puVar18) {
          puVar18 = puVar17;
        }
      }
    }
    iVar11 = local_28 + (int)puVar18 * 8;
    *(undefined4 *)(puVar3 + 0x84) = *(undefined4 *)(iVar11 + 100);
    uVar7 = *(undefined4 *)(iVar11 + 0x68);
    *(undefined4 **)(puVar3 + 0x54) = puVar18;
    *(undefined4 *)(puVar3 + 0x88) = uVar7;
  }
  puVar17 = local_3c;
  uVar22 = (uint)local_3c | (int)local_38 << 0x10;
  uVar20 = (uint)*(byte *)(local_28 + 0x61) | local_30[1] | 0x18;
  if ((*(uint *)(local_28 + 0x34) & 0x40) == 0) {
    uVar20 = uVar20 | 0x100;
  }
  uVar8 = (int)*(short *)(*(int *)(local_28 + 0x58) + 0x18) >> 8;
  if (uVar8 == 0) {
    *(undefined4 *)(PTR_LAB_4a03d054 + 0x58) = 0;
  }
  else {
    iVar11 = 1;
    while (iVar31 = iVar11, uVar8 >> 1 != 0) {
      uVar8 = uVar8 >> 2;
      iVar31 = iVar11 + 1;
      if (uVar8 == 0) break;
      iVar11 = iVar11 + 2;
    }
    *(int *)(PTR_LAB_4a03d054 + 0x58) = iVar31;
  }
  puVar21 = PTR_LAB_4a03d054;
  *(uint *)(PTR_LAB_4a03d054 + 0x5c) = ~(*(uint *)(local_28 + 0x34) >> 1) & 1;
  *(int *)(puVar21 + 0x60) = *(int *)(puVar21 + 0x60) + -0x20;
  uVar8 = uVar20 & 7;
  if ((uVar8 == 1 || uVar8 == 2) || uVar8 == 5) {
    puVar18 = *(undefined4 **)(local_28 + 0xa4);
    if (puVar18[1] == 0) {
      pcVar34 = (code *)0x4a03d004;
      FUN_4a038b1c(puVar18);
    }
    *(short *)((int)puVar18 + 10) = *(short *)((int)puVar18 + 10) + 1;
    if ((uVar20 & 0x10) == 0) {
      uVar7 = puVar18[1];
    }
    else {
      uVar7 = *puVar18;
    }
    *(undefined4 *)(puVar21 + 0x8c) = uVar7;
  }
  uVar8 = local_28;
  *(undefined4 *)(puVar21 + 0x68) = *(undefined4 *)(PTR_PTR_4a03d064 + (uVar20 & 0x1ff) * 4);
  puVar4 = PTR_LAB_4a0405a8;
  puVar3 = PTR_LAB_4a02c87c;
  uVar24 = uVar22;
  uVar20 = uVar20 & 0x1ff;
  puVar23 = puVar21 + 0x6c;
  ppcVar32 = &pcStack_60;
  if (local_2c == 0) {
    uVar24 = unaff_r4;
    puVar18 = unaff_r5;
    uVar20 = unaff_r6;
    puVar23 = unaff_r7;
    puVar21 = unaff_r8;
    pcVar27 = unaff_r9;
    uVar28 = unaff_r10;
    uVar29 = unaff_r11;
    ppcVar32 = (code **)register0x00000054;
    pcVar34 = UNRECOVERED_JUMPTABLE_00;
  }
  iVar11 = (int)uVar22 >> 0x10;
  if (local_2c == 0) {
    *(code **)((int)ppcVar32 + -4) = pcVar34;
    *(uint *)((int)ppcVar32 + -8) = uVar29;
    *(uint *)((int)ppcVar32 + -0xc) = uVar28;
    *(code **)((int)ppcVar32 + -0x10) = pcVar27;
    *(undefined **)((int)ppcVar32 + -0x14) = puVar21;
    *(undefined **)((int)ppcVar32 + -0x18) = puVar23;
    *(uint *)((int)ppcVar32 + -0x1c) = uVar20;
    *(undefined4 **)((int)ppcVar32 + -0x20) = puVar18;
    *(uint *)((int)ppcVar32 + -0x24) = uVar24;
    *(uint *)((int)ppcVar32 + -0x28) = uVar8;
    *(uint *)((int)ppcVar32 + -0x2c) = uVar22;
    *(undefined4 *)((int)ppcVar32 + -0x30) = 0;
    uVar29 = (uint)(byte)PTR_LAB_4a02c87c[0x44];
    piVar19 = (int *)(PTR_LAB_4a02c87c + 0xb4);
    bVar38 = uVar29 == 0;
    if (bVar38) {
      uVar29 = *(uint *)((int)ppcVar32 + -0x28);
    }
    iVar31 = 0;
    if (bVar38) {
      *(uint *)((int)ppcVar32 + -0x30) = (uint)*(byte *)(uVar29 + 0x62);
    }
    *(undefined4 *)(PTR_LAB_4a02c87c + 0x84) =
         *(undefined4 *)(*(int *)((int)ppcVar32 + -0x28) + 100);
    *(undefined4 *)(puVar3 + 0x88) = *(undefined4 *)(*(int *)((int)ppcVar32 + -0x28) + 0x68);
    *(undefined4 *)(puVar3 + 0x54) = 0;
    *(int *)(puVar3 + 0x4c) = iVar11;
    *(int *)(puVar3 + 0x50) = *(int *)(puVar3 + 0x40) + iVar11 * *(int *)(puVar3 + 0x38) * 2;
    iVar13 = (((uint)puVar17 & 0xffff) - 1) - iVar11;
    piVar9 = (int *)(*(int *)(puVar3 + 0xb0) + iVar11 * 4);
    do {
      iVar11 = *piVar9;
      piVar12 = piVar9 + 1;
      *piVar9 = 0;
      iVar14 = iVar31;
      for (; iVar11 != 0; iVar11 = *(int *)(iVar11 + 0x4c)) {
        piVar19[iVar14] = iVar11;
        iVar14 = iVar14 + 1;
      }
      if (iVar14 == 2) {
        if (*(int *)*piVar19 <= **(int **)(puVar3 + 0xb8)) goto LAB_4a02c560;
        do {
          iVar11 = *piVar19;
          *piVar19 = *(int *)(puVar3 + 0xb8);
          *(int *)(puVar3 + 0xb8) = iVar11;
LAB_4a02c560:
          do {
            piVar9 = (int *)*piVar19;
            if (((*(ushort *)(piVar9 + 6) & 1) != 0) &&
               (0 < (**(int **)(puVar3 + 0xb8) >> 0x12) - (*piVar9 >> 0x12))) {
              FUN_4a05eef0(piVar9,*(int **)(puVar3 + 0xb8),*(undefined4 *)((int)ppcVar32 + -0x30),
                           *(undefined4 *)((int)ppcVar32 + -0x28));
            }
            bVar38 = iVar13 == 0;
            iVar13 = iVar13 + -1;
            *(int *)(puVar3 + 0x50) = *(int *)(puVar3 + 0x50) + *(int *)(puVar3 + 0x38) * 2;
            iVar11 = *(int *)(puVar3 + 0x4c);
            *(uint **)(puVar3 + 0x4c) = (uint *)(iVar11 + 1);
            if (bVar38) {
              return (uint *)(iVar11 + 1);
            }
            if (*piVar12 != 0) goto LAB_4a02c5c4;
            piVar9 = (int *)*piVar19;
            piVar12 = piVar12 + 1;
            uVar1 = *(ushort *)(piVar9 + 6);
            *piVar9 = piVar9[1] + *piVar9;
            if (((uVar1 & 4) != 0) || (piVar9[2] = piVar9[2] + piVar9[3], (uVar1 & 8) == 0)) {
              if ((uVar1 & 0x10) == 0) {
                piVar9[9] = piVar9[9] + piVar9[7];
              }
              if ((uVar1 & 0x20) == 0) {
                piVar9[10] = piVar9[10] + piVar9[8];
              }
              piVar9[0xb] = piVar9[0xb] + piVar9[0xf];
              piVar9[0xc] = piVar9[0xc] + piVar9[0x10];
              piVar9[0xd] = piVar9[0xd] + piVar9[0x11];
              piVar9[0xe] = piVar9[0xe] + piVar9[0x12];
            }
            piVar9 = *(int **)(puVar3 + 0xb8);
            uVar1 = *(ushort *)(piVar9 + 6);
            *piVar9 = piVar9[1] + *piVar9;
            if (((uVar1 & 4) != 0) || (piVar9[2] = piVar9[2] + piVar9[3], (uVar1 & 8) == 0)) {
              if ((uVar1 & 0x10) == 0) {
                piVar9[9] = piVar9[9] + piVar9[7];
              }
              if ((uVar1 & 0x20) == 0) {
                piVar9[10] = piVar9[10] + piVar9[8];
              }
              piVar9[0xb] = piVar9[0xb] + piVar9[0xf];
              piVar9[0xc] = piVar9[0xc] + piVar9[0x10];
              piVar9[0xd] = piVar9[0xd] + piVar9[0x11];
              piVar9[0xe] = piVar9[0xe] + piVar9[0x12];
            }
          } while (*(int *)*piVar19 <= **(int **)(puVar3 + 0xb8));
        } while( true );
      }
      iVar11 = 1;
      if (1 < iVar14) {
        do {
          puVar18 = (undefined4 *)piVar19[iVar11];
          piVar9 = (int *)*puVar18;
          if ((int)piVar9 < *(int *)piVar19[iVar11 + -1]) {
            iVar31 = iVar11 + -1;
            piVar36 = (int *)piVar19[iVar31];
            do {
              iVar35 = iVar31 + -1;
              piVar19[iVar31 + 1] = (int)piVar36;
              if ((iVar35 < 0) || (piVar36 = (int *)piVar19[iVar35], *piVar36 <= (int)piVar9))
              break;
              piVar33 = piVar19 + iVar35;
              iVar31 = iVar31 + -2;
              bVar38 = iVar31 == 0;
              piVar33[1] = (int)piVar36;
              if (-1 < iVar31) {
                piVar36 = (int *)piVar19[iVar31];
                piVar33 = (int *)*piVar36;
                bVar38 = piVar33 == piVar9;
              }
              iVar35 = iVar31;
            } while (!bVar38 && (-1 < iVar31 && (int)piVar9 <= (int)piVar33));
            piVar19[iVar35 + 1] = (int)puVar18;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar14);
      }
      iVar11 = 0;
      if (1 < iVar14) {
        do {
          piVar9 = (int *)0x0;
          iVar31 = 0;
          for (; iVar11 < iVar14; iVar11 = iVar11 + 1) {
            if ((*(ushort *)(piVar19[iVar11] + 0x18) & 1) == 0) {
              iVar31 = iVar31 + -1;
            }
            else {
              iVar31 = iVar31 + 1;
            }
            if (iVar31 == 1) {
              piVar9 = (int *)piVar19[iVar11];
              iVar11 = iVar11 + 1;
              break;
            }
          }
          if (iVar14 <= iVar11) break;
          piVar36 = (int *)0x0;
          do {
            iVar35 = iVar11;
            if ((*(ushort *)(piVar19[iVar35] + 0x18) & 1) == 0) {
              iVar31 = iVar31 + -1;
            }
            else {
              iVar31 = iVar31 + 1;
            }
            if (iVar31 == 0) {
              piVar36 = (int *)piVar19[iVar35];
              break;
            }
            iVar11 = iVar35 + 1;
          } while (iVar35 + 1 < iVar14);
          iVar11 = iVar35 + 1;
          if (iVar14 < iVar11) break;
          if (((*(ushort *)(piVar9 + 6) & 1) != 0) && (0 < (*piVar36 >> 0x12) - (*piVar9 >> 0x12)))
          {
            FUN_4a05eef0(piVar9,piVar36,*(undefined4 *)((int)ppcVar32 + -0x30),
                         *(undefined4 *)((int)ppcVar32 + -0x28));
          }
        } while (iVar35 + 2 < iVar14);
      }
      bVar38 = iVar13 == 0;
      iVar13 = iVar13 + -1;
      *(int *)(puVar3 + 0x50) = *(int *)(puVar3 + 0x50) + *(int *)(puVar3 + 0x38) * 2;
      iVar11 = *(int *)(puVar3 + 0x4c);
      *(uint **)(puVar3 + 0x4c) = (uint *)(iVar11 + 1);
      if (bVar38) {
        return (uint *)(iVar11 + 1);
      }
LAB_4a02c5c4:
      iVar35 = *(int *)(puVar3 + 0x4c);
      iVar31 = 0;
      iVar11 = 0;
      piVar9 = piVar12;
      if (0 < iVar14) {
        do {
          piVar12 = (int *)piVar19[iVar11];
          if (iVar35 < *(short *)((int)piVar12 + 0x1a)) {
            uVar1 = *(ushort *)(piVar12 + 6);
            *piVar12 = *piVar12 + piVar12[1];
            if (((uVar1 & 4) != 0) || (piVar12[2] = piVar12[2] + piVar12[3], (uVar1 & 8) == 0)) {
              if ((uVar1 & 0x10) == 0) {
                piVar12[9] = piVar12[9] + piVar12[7];
              }
              if ((uVar1 & 0x20) == 0) {
                piVar12[10] = piVar12[10] + piVar12[8];
              }
              piVar12[0xb] = piVar12[0xb] + piVar12[0xf];
              piVar12[0xc] = piVar12[0xc] + piVar12[0x10];
              piVar12[0xd] = piVar12[0xd] + piVar12[0x11];
              piVar12[0xe] = piVar12[0xe] + piVar12[0x12];
            }
            if (iVar31 != iVar11) {
              piVar19[iVar31] = piVar19[iVar11];
            }
            iVar31 = iVar31 + 1;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar14);
      }
    } while( true );
  }
  *(undefined4 *)((int)ppcVar32 + 0x5c) = *(undefined4 *)((int)ppcVar32 + 0x5c);
  *(undefined4 *)((int)ppcVar32 + 0x58) = *(undefined4 *)((int)ppcVar32 + 0x58);
  *(undefined4 *)((int)ppcVar32 + 0x54) = *(undefined4 *)((int)ppcVar32 + 0x54);
  *(undefined4 *)((int)ppcVar32 + 0x50) = *(undefined4 *)((int)ppcVar32 + 0x50);
  *(undefined4 *)((int)ppcVar32 + 0x4c) = *(undefined4 *)((int)ppcVar32 + 0x4c);
  *(undefined4 *)((int)ppcVar32 + 0x48) = *(undefined4 *)((int)ppcVar32 + 0x48);
  *(undefined4 *)((int)ppcVar32 + 0x44) = *(undefined4 *)((int)ppcVar32 + 0x44);
  *(undefined4 *)((int)ppcVar32 + 0x40) = *(undefined4 *)((int)ppcVar32 + 0x40);
  *(undefined4 *)((int)ppcVar32 + 0x3c) = *(undefined4 *)((int)ppcVar32 + 0x3c);
  *(uint *)((int)ppcVar32 + 0x38) = local_28;
  puVar6 = (uint *)((int)ppcVar32 + 0x34);
  *puVar6 = uVar22;
  iVar13 = *(int *)(PTR_LAB_4a0405a8 + 0x38);
  iVar31 = *(int *)(PTR_LAB_4a0405a8 + 0x40);
  *(int *)((int)ppcVar32 + 0x30) = *(int *)(PTR_LAB_4a0405a8 + 0xb0) + iVar11 * 4;
  *(int *)(PTR_LAB_4a0405a8 + 0x4c) = iVar11;
  *(int *)(puVar4 + 0x50) = iVar31 + iVar11 * iVar13 * 2;
  *puVar6 = (((uint)puVar17 & 0xffff) - 1) - iVar11;
  piVar19 = (int *)(puVar4 + 0xb4);
  iVar11 = 0;
  do {
    iVar31 = **(int **)((int)ppcVar32 + 0x30);
    **(undefined4 **)((int)ppcVar32 + 0x30) = 0;
    *(int *)((int)ppcVar32 + 0x30) = *(int *)((int)ppcVar32 + 0x30) + 4;
    iVar13 = iVar11;
    for (; iVar31 != 0; iVar31 = *(int *)(iVar31 + 0x4c)) {
      piVar19[iVar13] = iVar31;
      iVar13 = iVar13 + 1;
    }
    if (iVar13 == 2) {
      if (*(int *)*piVar19 <= **(int **)(puVar4 + 0xb8)) goto LAB_4a03fd14;
      do {
        iVar11 = *piVar19;
        *piVar19 = *(int *)(puVar4 + 0xb8);
        *(int *)(puVar4 + 0xb8) = iVar11;
LAB_4a03fd14:
        do {
          puVar21 = PTR_LAB_4a0405a8;
          piVar9 = (int *)*piVar19;
          if ((*(ushort *)(piVar9 + 6) & 1) != 0) {
            piVar12 = *(int **)(puVar4 + 0xb8);
            iVar14 = *piVar12;
            iVar11 = iVar14 >> 0x12;
            iVar31 = *piVar9 >> 0x12;
            if (0 < iVar11 - iVar31) {
              uVar29 = *piVar9 >> 0xf;
              *(int *)((int)ppcVar32 + 0x2c) = iVar11 - iVar31;
              *(undefined4 *)((int)ppcVar32 + 0x28) =
                   *(undefined4 *)(*(int *)PTR_DAT_4a0405ac + ((iVar14 >> 0xf) - uVar29) * 4);
              *(undefined4 *)(PTR_LAB_4a0405a8 + 0x6c) = *(undefined4 *)((int)ppcVar32 + 0x2c);
              *(int *)(puVar21 + 0x70) = *(int *)(puVar21 + 0x50) + iVar31 * 2;
              puVar3 = PTR_LAB_4a0405a8;
              uVar20 = (piVar12[9] >> 0xe) - (piVar9[9] >> 0xe);
              iVar11 = (piVar9[9] >> 0xe) * 0x4000;
              uVar22 = (piVar12[10] >> 0xe) - (piVar9[10] >> 0xe);
              if ((int)uVar20 < 0) {
                iVar11 = iVar11 + -1;
              }
              iVar31 = (piVar9[10] >> 0xe) * 0x4000;
              uVar28 = *(uint *)((int)ppcVar32 + 0x28);
              uVar8 = *(uint *)(PTR_LAB_4a0405a8 + 0x54);
              if ((int)uVar22 < 0) {
                iVar31 = iVar31 + -1;
              }
              iVar14 = 7 - (uVar29 & 7);
              if (*(int *)((int)ppcVar32 + 0x2c) == 1) {
                iVar35 = iVar14 * ((int)uVar28 >> 10) >> 4;
                iVar31 = ((int)uVar22 >> 2) * iVar35 + iVar31 >> ((uVar8 & 0x7f) << 1);
                *(int *)(puVar21 + 0x74) = iVar35 * ((int)uVar20 >> 2) + iVar11 >> (uVar8 & 0xff);
                if (*(uint *)(puVar3 + 0x58) != 0) {
                  iVar31 = iVar31 << (*(uint *)(puVar3 + 0x58) & 0xff);
                }
                *(int *)(puVar21 + 0x78) = iVar31;
              }
              else {
                bVar38 = (int)(uVar20 ^ uVar28) < 0;
                if (bVar38) {
                  uVar20 = -uVar20;
                }
                *(undefined4 *)((int)ppcVar32 + 0x24) = 0x13;
                uVar29 = (uint)((longlong)(int)uVar20 * (longlong)(int)uVar28) >> 0xd |
                         (int)((ulonglong)((longlong)(int)uVar20 * (longlong)(int)uVar28) >> 0x20)
                         << (*(uint *)((int)ppcVar32 + 0x24) & 0xff);
                if (bVar38) {
                  uVar29 = -uVar29;
                }
                bVar38 = (int)(uVar22 ^ uVar28) < 0;
                if (bVar38) {
                  uVar22 = -uVar22;
                }
                uVar20 = (uint)((longlong)(int)uVar22 * (longlong)(int)uVar28) >> 0xd |
                         (int)((ulonglong)((longlong)(int)uVar22 * (longlong)(int)uVar28) >> 0x20)
                         << 0x13;
                if (bVar38) {
                  uVar20 = -uVar20;
                }
                if (uVar8 == 0) {
                  iVar31 = iVar31 + (((int)uVar20 >> 1) * iVar14 >> 2);
                }
                else {
                  iVar35 = (int)uVar20 >> (uVar8 & 0xff);
                  uVar29 = (int)uVar29 >> (uVar8 & 0xff);
                  iVar11 = iVar11 >> (uVar8 & 0xff);
                  uVar20 = iVar35 >> (uVar8 & 0xff);
                  iVar31 = (iVar31 >> (uVar8 & 0xff)) + ((iVar35 >> 1) * iVar14 >> 2) >>
                           (uVar8 & 0xff);
                }
                *(int *)(puVar21 + 0x74) = iVar11 + (iVar14 * ((int)uVar29 >> 1) >> 2);
                puVar3 = PTR_LAB_4a0405a8;
                *(uint *)(puVar21 + 0x7c) = uVar29;
                uVar29 = *(uint *)(puVar3 + 0x58);
                if (uVar29 != 0) {
                  uVar20 = uVar20 << (uVar29 & 0xff);
                  iVar31 = iVar31 << (uVar29 & 0xff);
                }
                *(uint *)(puVar21 + 0x80) = uVar20;
                *(int *)(puVar21 + 0x78) = iVar31;
              }
              iVar31 = piVar9[0xb];
              iVar11 = *(int *)((int)ppcVar32 + 0x28) >> 10;
              iVar35 = iVar11 * ((piVar12[0xb] >> 0x11) - (iVar31 >> 0x11));
              *(int *)(puVar21 + 0x94) = iVar35;
              *(int *)(puVar21 + 0x90) =
                   ((iVar14 * (iVar35 >> 2) >> 0xd) + (iVar31 >> 0x11) * 0x20) * 0x10000 >> 0x10;
              iVar31 = piVar9[0xc];
              iVar35 = iVar11 * ((piVar12[0xc] >> 0x11) - (iVar31 >> 0x11));
              *(int *)(puVar21 + 0x9c) = iVar35;
              *(int *)(puVar21 + 0x98) =
                   ((iVar14 * (iVar35 >> 2) >> 0xd) + (iVar31 >> 0x11) * 0x20) * 0x10000 >> 0x10;
              iVar31 = piVar9[0xd];
              iVar35 = iVar11 * ((piVar12[0xd] >> 0x11) - (iVar31 >> 0x11));
              *(int *)(puVar21 + 0xa4) = iVar35;
              *(int *)(puVar21 + 0xa0) =
                   ((iVar14 * (iVar35 >> 2) >> 0xd) + (iVar31 >> 0x11) * 0x20) * 0x10000 >> 0x10;
              iVar31 = piVar9[0xe];
              iVar11 = iVar11 * ((piVar12[0xe] >> 0x11) - (iVar31 >> 0x11));
              *(int *)(puVar21 + 0xac) = iVar11;
              puVar3 = PTR_LAB_4a0405a8;
              *(int *)(puVar21 + 0xa8) =
                   ((iVar14 * (iVar11 >> 2) >> 0xd) + (iVar31 >> 0x11) * 0x20) * 0x10000 >> 0x10;
              iVar11 = *(int *)(puVar3 + 0x60);
              if (iVar11 < 0) {
                host_s3eDeviceYield_arm(0x80000000);
                iVar11 = *(int *)(puVar3 + 100);
              }
              *(int *)(puVar3 + 0x60) = (iVar11 - *(int *)((int)ppcVar32 + 0x2c)) + -0x10;
              (**(code **)(puVar3 + 0x68))(puVar21 + 0x6c);
            }
          }
          puVar21 = PTR_LAB_4a0405a8;
          *(int *)(PTR_LAB_4a0405a8 + 0x50) =
               *(int *)(PTR_LAB_4a0405a8 + 0x50) + *(int *)(PTR_LAB_4a0405a8 + 0x38) * 2;
          uVar29 = *puVar6;
          *(int *)(puVar21 + 0x4c) = *(int *)(puVar21 + 0x4c) + 1;
          *puVar6 = uVar29 - 1;
          if (uVar29 == 0) {
            return (uint *)0xffffffff;
          }
          if (**(int **)((int)ppcVar32 + 0x30) != 0) goto LAB_4a04002c;
          *(int *)((int)ppcVar32 + 0x30) = *(int *)((int)ppcVar32 + 0x30) + 4;
          piVar9 = (int *)*piVar19;
          *piVar9 = piVar9[1] + *piVar9;
          if ((*(ushort *)(piVar9 + 6) & 0x10) == 0) {
            piVar9[9] = piVar9[9] + piVar9[7];
          }
          if ((*(ushort *)(piVar9 + 6) & 0x20) == 0) {
            piVar9[10] = piVar9[10] + piVar9[8];
          }
          piVar9[0xb] = piVar9[0xb] + piVar9[0xf];
          piVar9[0xc] = piVar9[0xc] + piVar9[0x10];
          piVar9[0xd] = piVar9[0xd] + piVar9[0x11];
          piVar9[0xe] = piVar9[0xe] + piVar9[0x12];
          piVar9 = *(int **)(puVar4 + 0xb8);
          *piVar9 = piVar9[1] + *piVar9;
          if ((*(ushort *)(piVar9 + 6) & 0x10) == 0) {
            piVar9[9] = piVar9[9] + piVar9[7];
          }
          if ((*(ushort *)(piVar9 + 6) & 0x20) == 0) {
            piVar9[10] = piVar9[10] + piVar9[8];
          }
          piVar9[0xb] = piVar9[0xb] + piVar9[0xf];
          piVar9[0xc] = piVar9[0xc] + piVar9[0x10];
          piVar9[0xd] = piVar9[0xd] + piVar9[0x11];
          piVar9[0xe] = piVar9[0xe] + piVar9[0x12];
        } while (*(int *)*piVar19 <= **(int **)(puVar4 + 0xb8));
      } while( true );
    }
    iVar11 = 1;
    if (1 < iVar13) {
      do {
        puVar18 = (undefined4 *)piVar19[iVar11];
        piVar9 = (int *)*puVar18;
        if ((int)piVar9 < *(int *)piVar19[iVar11 + -1]) {
          iVar31 = iVar11 + -1;
          piVar12 = (int *)piVar19[iVar31];
          do {
            iVar14 = iVar31 + -1;
            piVar19[iVar31 + 1] = (int)piVar12;
            if ((iVar14 < 0) || (piVar12 = (int *)piVar19[iVar14], *piVar12 <= (int)piVar9)) break;
            piVar36 = piVar19 + iVar14;
            iVar31 = iVar31 + -2;
            bVar38 = iVar31 == 0;
            piVar36[1] = (int)piVar12;
            if (-1 < iVar31) {
              piVar12 = (int *)piVar19[iVar31];
              piVar36 = (int *)*piVar12;
              bVar38 = piVar36 == piVar9;
            }
            iVar14 = iVar31;
          } while (!bVar38 && (-1 < iVar31 && (int)piVar9 <= (int)piVar36));
          piVar19[iVar14 + 1] = (int)puVar18;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar13);
    }
    iVar11 = 0;
    if (1 < iVar13) {
      do {
        puVar21 = PTR_LAB_4a0405a8;
        piVar9 = (int *)0x0;
        iVar31 = 0;
        for (; iVar11 < iVar13; iVar11 = iVar11 + 1) {
          if ((*(ushort *)(piVar19[iVar11] + 0x18) & 1) == 0) {
            iVar31 = iVar31 + -1;
          }
          else {
            iVar31 = iVar31 + 1;
          }
          if (iVar31 == 1) {
            piVar9 = (int *)piVar19[iVar11];
            iVar11 = iVar11 + 1;
            break;
          }
        }
        if (iVar13 <= iVar11) break;
        piVar12 = (int *)0x0;
        do {
          iVar14 = iVar11;
          if ((*(ushort *)(piVar19[iVar14] + 0x18) & 1) == 0) {
            iVar31 = iVar31 + -1;
          }
          else {
            iVar31 = iVar31 + 1;
          }
          if (iVar31 == 0) {
            piVar12 = (int *)piVar19[iVar14];
            break;
          }
          iVar11 = iVar14 + 1;
        } while (iVar14 + 1 < iVar13);
        iVar11 = iVar14 + 1;
        if (iVar13 < iVar11) break;
        if ((*(ushort *)(piVar9 + 6) & 1) != 0) {
          iVar15 = *piVar12;
          iVar31 = iVar15 >> 0x12;
          iVar35 = *piVar9 >> 0x12;
          if (0 < iVar31 - iVar35) {
            uVar29 = *piVar9 >> 0xf;
            *(int *)((int)ppcVar32 + 0x2c) = iVar31 - iVar35;
            *(undefined4 *)((int)ppcVar32 + 0x28) =
                 *(undefined4 *)(*(int *)PTR_DAT_4a0405ac + ((iVar15 >> 0xf) - uVar29) * 4);
            *(undefined4 *)(PTR_LAB_4a0405a8 + 0x6c) = *(undefined4 *)((int)ppcVar32 + 0x2c);
            *(int *)(puVar21 + 0x70) = *(int *)(puVar21 + 0x50) + iVar35 * 2;
            puVar3 = PTR_LAB_4a0405a8;
            iVar35 = piVar9[10];
            iVar31 = piVar12[9];
            iVar15 = piVar9[9];
            *(int *)((int)ppcVar32 + 0x24) = (piVar12[10] >> 0xe) - (iVar35 >> 0xe);
            uVar20 = (iVar31 >> 0xe) - (iVar15 >> 0xe);
            iVar31 = (iVar15 >> 0xe) * 0x4000;
            if ((int)uVar20 < 0) {
              iVar31 = iVar31 + -1;
            }
            iVar35 = (iVar35 >> 0xe) * 0x4000;
            uVar22 = *(uint *)((int)ppcVar32 + 0x28);
            uVar28 = *(uint *)(PTR_LAB_4a0405a8 + 0x54);
            if (*(int *)((int)ppcVar32 + 0x24) < 0) {
              iVar35 = iVar35 + -1;
            }
            iVar15 = 7 - (uVar29 & 7);
            if (*(int *)((int)ppcVar32 + 0x2c) == 1) {
              iVar37 = iVar15 * ((int)uVar22 >> 10) >> 4;
              iVar35 = (*(int *)((int)ppcVar32 + 0x24) >> 2) * iVar37 + iVar35 >>
                       ((uVar28 & 0x7f) << 1);
              *(int *)(puVar21 + 0x74) = ((int)uVar20 >> 2) * iVar37 + iVar31 >> (uVar28 & 0xff);
              if (*(uint *)(puVar3 + 0x58) != 0) {
                iVar35 = iVar35 << (*(uint *)(puVar3 + 0x58) & 0xff);
              }
              *(int *)(puVar21 + 0x78) = iVar35;
            }
            else {
              bVar38 = (int)(uVar20 ^ uVar22) < 0;
              if (bVar38) {
                uVar20 = -uVar20;
              }
              *(undefined4 *)((int)ppcVar32 + 0x20) = 0x13;
              uVar29 = (uint)((longlong)(int)uVar20 * (longlong)(int)uVar22) >> 0xd |
                       (int)((ulonglong)((longlong)(int)uVar20 * (longlong)(int)uVar22) >> 0x20) <<
                       (*(uint *)((int)ppcVar32 + 0x20) & 0xff);
              uVar20 = *(uint *)((int)ppcVar32 + 0x24);
              if (bVar38) {
                uVar29 = -uVar29;
              }
              bVar38 = (int)(uVar20 ^ uVar22) < 0;
              if (bVar38) {
                uVar20 = -uVar20;
              }
              *(undefined4 *)((int)ppcVar32 + 0x20) = 0x13;
              uVar20 = (uint)((longlong)(int)uVar20 * (longlong)(int)uVar22) >> 0xd |
                       (int)((ulonglong)((longlong)(int)uVar20 * (longlong)(int)uVar22) >> 0x20) <<
                       (*(uint *)((int)ppcVar32 + 0x20) & 0xff);
              if (bVar38) {
                uVar20 = -uVar20;
              }
              if (uVar28 == 0) {
                iVar35 = iVar35 + (((int)uVar20 >> 1) * iVar15 >> 2);
              }
              else {
                iVar37 = (int)uVar20 >> (uVar28 & 0xff);
                uVar29 = (int)uVar29 >> (uVar28 & 0xff);
                iVar31 = iVar31 >> (uVar28 & 0xff);
                uVar20 = iVar37 >> (uVar28 & 0xff);
                iVar35 = (iVar35 >> (uVar28 & 0xff)) + (iVar15 * (iVar37 >> 1) >> 2) >>
                         (uVar28 & 0xff);
              }
              *(int *)(puVar21 + 0x74) = iVar31 + (iVar15 * ((int)uVar29 >> 1) >> 2);
              puVar3 = PTR_LAB_4a0405a8;
              *(uint *)(puVar21 + 0x7c) = uVar29;
              uVar29 = *(uint *)(puVar3 + 0x58);
              if (uVar29 != 0) {
                uVar20 = uVar20 << (uVar29 & 0xff);
                iVar35 = iVar35 << (uVar29 & 0xff);
              }
              *(uint *)(puVar21 + 0x80) = uVar20;
              *(int *)(puVar21 + 0x78) = iVar35;
            }
            iVar35 = piVar9[0xb];
            iVar31 = *(int *)((int)ppcVar32 + 0x28) >> 10;
            iVar37 = iVar31 * ((piVar12[0xb] >> 0x11) - (iVar35 >> 0x11));
            *(int *)(puVar21 + 0x94) = iVar37;
            *(int *)(puVar21 + 0x90) =
                 ((iVar15 * (iVar37 >> 2) >> 0xd) + (iVar35 >> 0x11) * 0x20) * 0x10000 >> 0x10;
            iVar35 = piVar9[0xc];
            iVar37 = iVar31 * ((piVar12[0xc] >> 0x11) - (iVar35 >> 0x11));
            *(int *)(puVar21 + 0x9c) = iVar37;
            *(int *)(puVar21 + 0x98) =
                 ((iVar15 * (iVar37 >> 2) >> 0xd) + (iVar35 >> 0x11) * 0x20) * 0x10000 >> 0x10;
            iVar35 = piVar9[0xd];
            iVar37 = iVar31 * ((piVar12[0xd] >> 0x11) - (iVar35 >> 0x11));
            *(int *)(puVar21 + 0xa4) = iVar37;
            *(int *)(puVar21 + 0xa0) =
                 ((iVar15 * (iVar37 >> 2) >> 0xd) + (iVar35 >> 0x11) * 0x20) * 0x10000 >> 0x10;
            iVar35 = piVar9[0xe];
            iVar31 = iVar31 * ((piVar12[0xe] >> 0x11) - (iVar35 >> 0x11));
            *(int *)(puVar21 + 0xac) = iVar31;
            puVar3 = PTR_LAB_4a0405a8;
            *(int *)(puVar21 + 0xa8) =
                 ((iVar15 * (iVar31 >> 2) >> 0xd) + (iVar35 >> 0x11) * 0x20) * 0x10000 >> 0x10;
            iVar31 = *(int *)(puVar3 + 0x60);
            if (iVar31 < 0) {
              host_s3eDeviceYield_arm(0x80000000);
              iVar31 = *(int *)(puVar3 + 100);
            }
            *(int *)(puVar3 + 0x60) = (iVar31 - *(int *)((int)ppcVar32 + 0x2c)) + -0x10;
            (**(code **)(puVar3 + 0x68))(puVar21 + 0x6c);
          }
        }
      } while (iVar14 + 2 < iVar13);
    }
    puVar21 = PTR_LAB_4a0405a8;
    *(int *)(PTR_LAB_4a0405a8 + 0x50) =
         *(int *)(PTR_LAB_4a0405a8 + 0x50) + *(int *)(PTR_LAB_4a0405a8 + 0x38) * 2;
    *(int *)(puVar21 + 0x4c) = *(int *)(puVar21 + 0x4c) + 1;
    uVar29 = *puVar6;
    *puVar6 = uVar29 - 1;
    if (uVar29 == 0) {
      return (uint *)0xffffffff;
    }
LAB_4a04002c:
    iVar11 = 0;
    iVar14 = *(int *)(PTR_LAB_4a0405a8 + 0x4c);
    iVar31 = 0;
    if (0 < iVar13) {
      do {
        piVar9 = (int *)piVar19[iVar31];
        if (iVar14 < *(short *)((int)piVar9 + 0x1a)) {
          *piVar9 = piVar9[1] + *piVar9;
          if ((*(ushort *)(piVar9 + 6) & 0x10) == 0) {
            piVar9[9] = piVar9[9] + piVar9[7];
          }
          if ((*(ushort *)(piVar9 + 6) & 0x20) == 0) {
            piVar9[10] = piVar9[10] + piVar9[8];
          }
          piVar9[0xb] = piVar9[0xb] + piVar9[0xf];
          piVar9[0xc] = piVar9[0xc] + piVar9[0x10];
          piVar9[0xd] = piVar9[0xd] + piVar9[0x11];
          piVar9[0xe] = piVar9[0xe] + piVar9[0x12];
          if (iVar11 != iVar31) {
            piVar19[iVar11] = piVar19[iVar31];
          }
          iVar11 = iVar11 + 1;
        }
        iVar31 = iVar31 + 1;
      } while (iVar31 < iVar13);
    }
  } while( true );
}



// Address: 4a03d088

void FUN_4a03d088(int param_1,undefined4 param_2,undefined4 param_3)

{
  int extraout_r1;
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 9);
  thunk_FUN_4a1652fc(param_3,param_2,param_3,uVar1);
  if (*(char *)(param_1 + 8) == '\b') {
    thunk_FUN_4a0ecab0(0x18,10,extraout_r1 + uVar1 * 0x100000);
  }
  return;
}



// Address: 4a03d0e4

undefined4 FUN_4a03d0e4(uint param_1,int param_2,int param_3)

{
  uint *puVar1;
  ushort uVar2;
  undefined *puVar3;
  uint *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  bool bVar14;
  
  puVar5 = PTR_DAT_4a03d390;
  puVar3 = PTR_DAT_4a03d38c;
  puVar4 = *(uint **)PTR_DAT_4a03d38c;
  if (puVar4[0x16d] <= param_1) {
    return 0;
  }
  iVar11 = param_3;
  if ((param_1 != 0) && ((*(uint *)(param_2 + 0x10) & 0x1c00000) == 0x1c00000)) {
    puVar1 = puVar4 + 3;
    if (*puVar1 == 3) {
      puVar4 = (uint *)*puVar4;
    }
    if (*puVar1 != 3 || ((uint)puVar4 & 0x800000) != 0) {
      iVar11 = 0;
    }
  }
  if (*(int *)(PTR_DAT_4a03d390 + param_1 * 4) != iVar11) {
    *(int *)(PTR_DAT_4a03d390 + param_1 * 4) = iVar11;
    if (iVar11 != 0) {
      puVar5 = *(undefined **)(iVar11 + 0x34);
    }
    if (iVar11 != 0 && ((uint)puVar5 & 0x20000000) != 0) {
      uVar13 = 0x8513;
    }
    else {
      uVar13 = 0xde1;
    }
    thunk_FUN_4a14fcc4(param_1 + 0x84c0);
    if (iVar11 != 0) {
      if (*(int *)(*(int *)puVar3 + 0xc) == 2) {
        thunk_FUN_4a150140(uVar13);
      }
      FUN_4a14fd70(uVar13,*(undefined4 *)(iVar11 + 0xb4));
      puVar5 = PTR_DAT_4a03d394;
      if (param_1 < 2) {
        iVar6 = (int)*(short *)(PTR_DAT_4a03d394 + param_1 * 0x4c + 4);
        bVar14 = *(short *)(iVar11 + 0xbc) == iVar6;
        if (bVar14) {
          iVar6 = (int)*(short *)(iVar11 + 0xbe);
          param_3 = (int)*(short *)(PTR_DAT_4a03d394 + param_1 * 0x4c + 6);
        }
        if (!bVar14 || iVar6 != param_3) {
          *(short *)(PTR_DAT_4a03d394 + param_1 * 0x4c + 4) = *(short *)(iVar11 + 0xbc);
          *(undefined2 *)(puVar5 + param_1 * 0x4c + 6) = *(undefined2 *)(iVar11 + 0xbe);
          puVar5[param_1 * 0x4c + 0x48] = 1;
          uVar2 = *(ushort *)(iVar11 + 0xbe);
          if (puVar5[param_1 * 0x4c + 0x49] == '\0') {
            uVar8 = FUN_4a172098();
            iVar6 = FUN_4a17295c(uVar8,0xfffffff4);
            uVar8 = FUN_4a172098((uint)uVar2);
            iVar9 = FUN_4a17295c(uVar8,0xfffffff4);
            iVar7 = thunk_FUN_4a0083c0(0x30);
            if (iVar7 == 0) {
              iVar6 = FUN_4a17295c(iVar6,0xfffffff4);
              iVar9 = FUN_4a17295c(iVar9,0xfffffff4);
            }
          }
          else {
            iVar6 = (uint)*(ushort *)(iVar11 + 0xbc) << 4;
            iVar9 = (uint)uVar2 << 4;
            iVar7 = thunk_FUN_4a0083c0(0x30);
            if (iVar7 == 0) {
              iVar6 = iVar6 >> 0xc;
              iVar9 = iVar9 >> 0xc;
            }
          }
          *(int *)(puVar5 + param_1 * 0x4c + 8) = iVar6;
          *(int *)(puVar5 + param_1 * 0x4c + 0x1c) = iVar9;
        }
      }
      uVar12 = (*(uint *)(iVar11 + 0x34) & 0x80000) >> 0x13;
      if (param_1 == 0) {
        uVar10 = FUN_4a0698b8(param_2);
        uVar12 = uVar12 | uVar10;
      }
      puVar5 = PTR_DAT_4a03d398;
      uVar10 = *(uint *)(iVar11 + 0x34) & 0x1000000;
      if (uVar12 == 0) {
        if (uVar10 == 0) {
          return 1;
        }
        (**(code **)(PTR_DAT_4a03d398 + 4))(uVar13,0x2802,0x2901);
        (**(code **)(puVar5 + 4))(uVar13,0x2803,0x2901);
        uVar12 = *(uint *)(iVar11 + 0x34) & 0xfeffffff;
      }
      else {
        if (uVar10 != 0) {
          return 1;
        }
        (**(code **)(PTR_DAT_4a03d398 + 4))(uVar13,0x2802,0x812f);
        (**(code **)(puVar5 + 4))(uVar13,0x2803,0x812f);
        uVar12 = *(uint *)(iVar11 + 0x34) | 0x1000000;
      }
      *(uint *)(iVar11 + 0x34) = uVar12;
      return 1;
    }
    if (*(int *)(*(int *)puVar3 + 0xc) == 2) {
      thunk_FUN_4a1500f8(uVar13);
    }
    FUN_4a14fd70(uVar13,0);
    return 0;
  }
  if (iVar11 == 0) {
    return 0;
  }
  return 1;
}



// Address: 4a03d39c

undefined4 FUN_4a03d39c(int param_1,int param_2)

{
  if (param_1 == 0x20) {
    if ((param_2 != 0) &&
       ((((((param_2 == 0x21 || (param_2 == 0x3f)) || (param_2 == 0x3a)) ||
          ((param_2 == 0x3b || (param_2 == 0x2e)))) ||
         ((param_2 == 0x25 || ((param_2 == 0x24 || (param_2 == 0x2d)))))) || (param_2 == 0x2c)))) {
      return 0;
    }
  }
  else if ((param_1 != 10) && (param_1 != 0x3000)) {
    return 0;
  }
  return 1;
}



// Address: 4a03e420

undefined4 FUN_4a03e420(void)

{
  return 0x78;
}



// Address: 4a03e424

undefined4 FUN_4a03e424(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined1 auStack_218 [512];
  undefined4 local_18;
  
  uVar2 = FUN_4a041274();
  local_18 = FUN_4a14ffd4(param_2);
  thunk_FUN_4a00121c(auStack_218,0x200);
  iVar1 = DAT_4a03e48c;
  puVar3 = PTR_PTR_4a03e488;
  if (param_2 != DAT_4a03e48c) {
    puVar3 = PTR_PTR_4a03e490;
  }
  *(undefined1 **)(puVar3 + 4) = auStack_218;
  FUN_4a04d7f4(uVar2,auStack_218);
  FUN_4a034f90(s_default_4a03e494,param_2 == iVar1,local_18,puVar3);
  FUN_4a1652ca(*(int **)PTR_DAT_4a03e49c,uVar2,local_18,
               *(undefined4 *)(**(int **)PTR_DAT_4a03e49c + 8));
  return local_18;
}



// Address: 4a03e62c

void FUN_4a03e62c(void)

{
  undefined *puVar1;
  int iVar2;
  
  thunk_FUN_4a04daa4();
  thunk_FUN_4a047258();
  thunk_FUN_4a04da2c();
  thunk_FUN_4a04d2bc();
  puVar1 = PTR_DAT_4a03e674;
  iVar2 = **(int **)PTR_DAT_4a03e674;
  if (((iVar2 << 0x1b < 0) || (iVar2 << 0x1d < 0)) || (iVar2 << 0x1c < 0)) {
    thunk_FUN_4a02a0e4();
    *(undefined **)(PTR_DAT_4a03e67c + 4) = PTR_FUN_4a03e678;
    if (**(int **)puVar1 << 0x1b < 0) {
      thunk_FUN_4a0484b8();
    }
  }
  FUN_4a03bf6c();
  FUN_4a033510();
  return;
}



// Address: 4a03e680

void FUN_4a03e680(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  uint *puVar8;
  undefined1 uVar9;
  uint uVar10;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  void *local_2c;
  void *local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  
  local_18 = *(int *)PTR_DAT_4a03e950;
  FUN_4a03341c(&local_1c,&local_20);
  local_24 = 0x1c;
  iVar3 = host_s3eGLGetInt_thumb(0);
  if (*PTR_DAT_4a03e954 != '\0') {
    iVar3 = 0;
  }
  bVar1 = 0xff < iVar3;
  bVar2 = !bVar1;
  do {
    if (bVar2) goto LAB_4a03e8d6;
    iVar4 = FUN_4a00ac74();
    bVar2 = true;
  } while (iVar4 == 0);
  local_28 = host_glGetString_thumb(0x1f00);
  local_2c = host_glGetString_thumb(DAT_4a03e958);
  iVar4 = DAT_4a03e964;
  puVar8 = (uint *)(*(int *)PTR_DAT_4a03e950 + DAT_4a03e95c);
  *puVar8 = DAT_4a03e960;
  local_24 = 0xfc;
  local_30 = 0;
  host_eglGetConfigAttrib_thumb
            (*(void **)PTR_DAT_4a03e96c,*(void **)PTR_DAT_4a03e968,iVar4,&local_30);
  if (local_30 == 0) {
    *puVar8 = *puVar8 & 0xfffffffd;
  }
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  iVar4 = host_s3eConfigGetInt_thumb(&DAT_4a03e984,s_DisableFBOSurface_4a03e970,&local_34);
  if ((iVar4 == 0) && (local_34 != 0)) {
    *puVar8 = *puVar8 & 0xfffffffb;
  }
  iVar4 = host_s3eConfigGetInt_thumb(&DAT_4a03e984,s_DisableCTISurface_4a03e988,&local_38);
  if ((iVar4 == 0) && (local_38 != 0)) {
    *puVar8 = *puVar8 & 0xfffffffe;
  }
  iVar4 = host_s3eConfigGetInt_thumb(&DAT_4a03e984,s_DisableEGLSurface_4a03e99c,&local_3c);
  if ((iVar4 == 0) && (local_3c != 0)) {
    *puVar8 = *puVar8 & 0xfffffffd;
  }
  if (local_2c == (void *)0x0) goto LAB_4a03e858;
  iVar4 = FUN_4a0015c0(local_2c,s_PowerVR_4a03e9b0);
  if (iVar4 != 0) {
    *puVar8 = *puVar8 | 0x1000;
    iVar4 = FUN_4a0015c0(local_2c,&DAT_4a03e9b8);
    if (iVar4 != 0) {
      local_20 = local_20 | 0x20;
    }
    FUN_4a0015c0(local_2c,s_SGX_530_4a03e9bc);
    goto LAB_4a03e858;
  }
  iVar4 = FUN_4a0015c0(local_2c,s_GoForce_4a03e9c4);
  if ((iVar4 != 0) || (iVar4 = FUN_4a0015c0(local_2c,s_Imageon_4a03e9cc), iVar4 != 0))
  goto LAB_4a03e858;
  iVar4 = FUN_4a0015c0(local_2c,&DAT_4a03e9d4);
  if (iVar4 == 0) {
    iVar4 = FUN_4a0015c0(local_2c,s_Hybrid_4a03e9dc);
    if (((iVar4 == 0) && (iVar4 = FUN_4a0015c0(local_2c,s_Nokia_4a03e9e4), iVar4 == 0)) &&
       (iVar4 = FUN_4a0015c0(local_2c,s_MSM6500_4a03e9ec), iVar4 == 0)) {
      iVar4 = FUN_4a0015c0(local_2c,&DAT_4a03e9f4);
      if (iVar4 != 0) {
        iVar4 = host_s3eDeviceGetInt_thumb(0);
        if ((iVar4 != 4) && (iVar4 == 2)) {
          uVar10 = *puVar8;
          uVar5 = 8;
          goto LAB_4a03e808;
        }
        uVar10 = *puVar8 & 0xfffffffd;
        goto LAB_4a03e80a;
      }
      iVar4 = FUN_4a0015c0(local_2c,&DAT_4a03e9fc);
      if (iVar4 != 0) {
        *PTR_DAT_4a03ea04 = 1;
        goto LAB_4a03e858;
      }
      iVar4 = FUN_4a0015c0(local_2c,s_Android_PixelFlinger_4a03ea08);
      if (iVar4 == 0) {
        iVar4 = FUN_4a0015c0(local_28,s_Nokia_4a03e9e4);
        if (iVar4 == 0) goto LAB_4a03e858;
      }
      else {
        local_40 = 0;
        host_s3eConfigGetInt_thumb(&DAT_4a03e984,s_AllowAndroidPixelFlinger_4a03ea20,&local_40);
        if (local_40 != 0) goto LAB_4a03e858;
      }
    }
    bVar1 = false;
  }
  else {
    uVar10 = *puVar8 | 0x1000;
    uVar5 = 0x100;
LAB_4a03e808:
    uVar10 = uVar10 & ~uVar5;
LAB_4a03e80a:
    *puVar8 = uVar10;
  }
LAB_4a03e858:
  if (0x1ff < iVar3) {
    *puVar8 = *puVar8 & 0xffffff7e;
    local_40 = 1;
    FUN_4a150304(DAT_4a03ea3c,&local_40);
    if ((char)local_40 == '\0') {
      *(uint *)(*(int *)PTR_DAT_4a03e950 + DAT_4a03e95c) =
           *(uint *)(*(int *)PTR_DAT_4a03e950 + DAT_4a03e95c) & 0xfffffdff;
    }
  }
  uVar10 = 0;
  do {
    local_40 = 0;
    if ((*(int *)(PTR_PTR_4a03ea40 + uVar10 * 4) != 0) &&
       (iVar4 = host_s3eConfigGetInt_thumb
                          (&DAT_4a03e984,*(int *)(PTR_PTR_4a03ea40 + uVar10 * 4),&local_40),
       iVar4 == 0)) {
      if (local_40 == 0) {
        uVar5 = *puVar8 & ~(1 << (uVar10 & 0xff));
      }
      else {
        uVar5 = *puVar8 | 1 << (uVar10 & 0xff);
      }
      *puVar8 = uVar5;
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < 0xe);
  if ((-1 < (int)(*puVar8 << 0x16)) || (!bVar1)) {
LAB_4a03e8d6:
    local_24 = local_24 & 0xffffff1f;
  }
  local_1c = local_24 & local_1c;
  local_20 = local_20 & local_1c;
  if (-1 < (int)(local_1c << 0x18)) {
    local_1c = 0x1c;
  }
  uVar6 = 1;
  uVar7 = 1;
  uVar9 = 1;
  if (((local_1c & 0x90) != 0x10) && (((local_1c & 0x90) == 0x80 || ((int)(local_20 << 0x18) < 0))))
  {
    uVar9 = 0;
    if (((local_1c & 0x24) == 0x20) || (uVar6 = 1, (int)(local_20 << 0x1a) < 0)) {
      uVar6 = 0;
    }
    if (((local_1c & 0x48) == 0x40) || ((int)(local_20 << 0x19) < 0)) {
      uVar7 = 0;
    }
  }
  *(undefined1 *)(local_18 + 0x364) = uVar9;
  *(undefined1 *)(local_18 + 0x365) = uVar6;
  *(undefined1 *)(local_18 + 0x366) = uVar7;
  *(uint *)(local_18 + 0x368) = local_1c;
  if ((-1 < (int)(local_1c << 0x18)) && (0xff < iVar3)) {
    FUN_4a00b25c();
  }
  return;
}



// Address: 4a03ebc0

void FUN_4a03ebc0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(*(int *)PTR_DAT_4a03ec54 + 100);
  if ((*PTR_DAT_4a03ec58 != '\0') && (*(int *)(iVar1 + 0xc) << 0x1d < 0)) {
    iVar5 = 0;
    for (piVar4 = *(int **)**(undefined4 **)(iVar1 + 0xd8);
        piVar3 = (int *)FUN_4a135c90(**(undefined4 **)(iVar1 + 0xd8)), piVar4 < piVar3;
        piVar4 = piVar4 + 1) {
      if (iVar5 == 0) {
        iVar5 = FUN_4a134f80(iVar1,s_CIwTexture_4a03ec5c,0);
      }
      FUN_4a08d072(*(undefined4 *)PTR_DAT_4a03ec54,s_CIwMaterial_4a03ec68,*piVar4);
      iVar6 = *(int *)(*piVar4 + 0x2c);
      iVar2 = FUN_4a135c66(iVar5 + 0xc,*(undefined4 *)(iVar6 + 4),0);
      if (iVar2 == 0) {
        FUN_4a08d072(*(undefined4 *)PTR_DAT_4a03ec54,s_CIwTexture_4a03ec5c,iVar6);
      }
    }
    FUN_4a06fd80(*(undefined4 *)(iVar1 + 0xd8));
    FUN_4a06a094(iVar1,0);
    if (*(int *)PTR_DAT_4a03ec74 != 0) {
      *(undefined4 *)PTR_DAT_4a03ec74 = 0;
    }
  }
  return;
}



// Address: 4a03ec78

void FUN_4a03ec78(undefined4 param_1,undefined *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined *local_10;
  undefined *local_c;
  undefined *local_8;
  
  local_10 = param_2;
  local_c = (undefined *)param_3;
  local_8 = (undefined *)param_4;
  uVar1 = FUN_4a0a3f98(PTR_DAT_4a03eca0);
  *(undefined4 *)(PTR_DAT_4a03eca0 + -0xc) = uVar1;
  local_10 = PTR_LAB_4a05a748_1_4a03eca4;
  local_c = PTR_FUN_4a00e4e8_1_4a03eca8;
  local_8 = PTR_FUN_4a0571e8_1_4a03ecac;
  FUN_4a1615a8(&local_10);
  return;
}



// Address: 4a03ecb0

int FUN_4a03ecb0(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_10;
  
  if ((param_2 != 0) && (*(int *)(param_2 + 8) != 0)) {
    local_10 = param_4;
    iVar1 = FUN_4a000f50(*(int *)(param_2 + 8));
    local_10 = 0;
    uVar2 = thunk_FUN_4a161570();
    FUN_4a1020c0(&local_10,uVar2);
    uVar2 = 0;
    if (local_10 != 0) {
      uVar2 = *(undefined4 *)(local_10 + 8);
    }
    FUN_4a000f84(uVar2,*(undefined4 *)(param_2 + 8),(iVar1 + 1) * 2);
    return local_10;
  }
  return 0;
}



// Address: 4a03ed24

void FUN_4a03ed24(int param_1,undefined1 *param_2,int param_3)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = (short *)0x0;
  if (param_1 != 0) {
    psVar2 = *(short **)(param_1 + 8);
  }
  if (psVar2 != (short *)0x0) {
    while( true ) {
      sVar1 = *psVar2;
      if (sVar1 != 0) {
        param_3 = param_3 + -1;
      }
      if (sVar1 == 0 || param_3 == -1) break;
      psVar2 = psVar2 + 1;
      *param_2 = (char)sVar1;
      param_2 = param_2 + 1;
    }
  }
  *param_2 = 0;
  return;
}



// Address: 4a03ed60

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_4a03ed60(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *******pppppppuVar8;
  undefined4 *******pppppppuVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined4 *******local_34;
  undefined4 *******local_2c;
  undefined4 *******local_28;
  uint local_24;
  int iStack_20;
  int local_1c;
  int local_18;
  
  local_24 = (uint)(param_1 != 0);
  iVar14 = param_1;
  if (param_1 == 0) {
    iVar14 = param_2;
  }
  iVar3 = *(int *)PTR_DAT_4a03ef34;
  iVar12 = *(int *)(iVar3 + 0x28);
  iVar6 = iVar3 + 0x2040;
  iVar7 = iVar3 + 0x40;
  local_2c = *(undefined4 ********)(iVar3 + 0x10);
  pppppppuVar9 = *(undefined4 ********)(iVar3 + 0xc);
  local_34 = *(undefined4 ********)(iVar3 + 0x20);
  pppppppuVar8 = &local_2c;
  for (iVar13 = 0;
      (iStack_20 = param_1, local_1c = param_2, local_18 = param_3, iVar12 != 0 &&
      (iVar13 < param_3)); iVar13 = iVar13 + 1) {
    iVar12 = iVar12 + -1;
    *(undefined1 *)(iVar14 + iVar13) = *(undefined1 *)(iVar7 + iVar12);
  }
  do {
    while( true ) {
      while( true ) {
        if (local_18 <= iVar13) {
          iVar3 = *(int *)PTR_DAT_4a03ef34;
          *(int *)(iVar3 + 0x28) = iVar12;
          *(undefined4 ********)(iVar3 + 0x20) = local_34;
          if (local_24 != 0) {
            for (iVar3 = 0; iVar3 < local_18; iVar3 = iVar3 + 2) {
              *(byte *)(local_1c + (iVar3 >> 1)) =
                   *(byte *)(iVar14 + iVar3) & 0xf | *(char *)(iVar14 + iVar3 + 1) << 4;
            }
          }
          return 1;
        }
        uVar16 = FUN_4a040a54(&local_28,pppppppuVar8);
        iVar5 = DAT_4a03ef38;
        pppppppuVar8 = (undefined4 *******)((ulonglong)uVar16 >> 0x20);
        if ((int)uVar16 == 0) {
          return 0;
        }
        if (local_28 != local_2c) break;
        bVar15 = iVar13 == local_18 + -1;
        do {
          if (!bVar15) {
            return 0;
          }
          bVar15 = *(int *)(*(int *)PTR_DAT_4a03ef34 + 0x34) == 0;
        } while (!bVar15);
        iVar13 = iVar13 + 1;
      }
      if (local_28 != pppppppuVar9) break;
      iVar4 = 0;
      pppppppuVar8 = (undefined4 *******)(DAT_4a03ef38 + 3);
      do {
        iVar11 = iVar4 * 4;
        iVar4 = iVar4 + 1;
        *(undefined4 ********)(iVar6 + iVar11) = pppppppuVar8;
      } while (iVar4 <= iVar5);
      iVar5 = *(int *)PTR_DAT_4a03ef34;
      *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x10) + 1;
      uVar10 = *(int *)(iVar5 + 8) + 1;
      *(int *)(iVar5 + 0x1c) = 1 << (uVar10 & 0xff);
      *(uint *)(iVar5 + 0x18) = uVar10;
      *(undefined4 ********)(iVar5 + 0x20) = pppppppuVar8;
      local_34 = pppppppuVar8;
    }
    if ((int)local_28 < (int)pppppppuVar9) {
      *(char *)(iVar14 + iVar13) = (char)local_28;
      iVar13 = iVar13 + 1;
    }
    else {
      pppppppuVar8 = local_28;
      if (*(int *)(iVar6 + (int)local_28 * 4) == DAT_4a03ef38 + 3) {
        if ((undefined4 *******)(*(int *)(*(int *)PTR_DAT_4a03ef34 + 0x14) + -2) != local_28) {
          return 0;
        }
        uVar2 = FUN_4a03b798(iVar6,local_34,pppppppuVar9);
        *(undefined1 *)(iVar7 + iVar12) = uVar2;
        iVar12 = iVar12 + 1;
        *(undefined1 *)(*(int *)(*(int *)PTR_DAT_4a03ef34 + 0x14) + iVar3 + 0x103e) = uVar2;
        pppppppuVar8 = local_34;
      }
      iVar5 = DAT_4a03ef38;
      iVar4 = 0;
      for (; ((iVar4 <= iVar5 && ((int)pppppppuVar9 < (int)pppppppuVar8)) &&
             ((int)pppppppuVar8 <= iVar5));
          pppppppuVar8 = *(undefined4 ********)(iVar6 + (int)pppppppuVar8 * 4)) {
        *(undefined1 *)(iVar7 + iVar12) = *(undefined1 *)(iVar3 + 0x1040 + (int)pppppppuVar8);
        iVar12 = iVar12 + 1;
        iVar4 = iVar4 + 1;
      }
      if (iVar5 <= iVar4 + 1) {
        return 0;
      }
      if (iVar5 < (int)pppppppuVar8) {
        return 0;
      }
      *(char *)(iVar7 + iVar12) = (char)pppppppuVar8;
      iVar12 = iVar12 + 1;
      for (; (iVar12 != 0 && (iVar13 < local_18)); iVar13 = iVar13 + 1) {
        iVar12 = iVar12 + -1;
        *(undefined1 *)(iVar14 + iVar13) = *(undefined1 *)(iVar7 + iVar12);
      }
    }
    puVar1 = PTR_DAT_4a03ef34;
    pppppppuVar8 = (undefined4 *******)(DAT_4a03ef38 + 3);
    if (local_34 != pppppppuVar8) {
      iVar5 = *(int *)PTR_DAT_4a03ef34;
      *(undefined4 ********)(*(int *)(iVar5 + 0x14) * 4 + iVar6 + -8) = local_34;
      pppppppuVar8 = local_28;
      if ((undefined4 *******)(*(int *)(iVar5 + 0x14) + -2) == local_28) {
        pppppppuVar8 = local_34;
      }
      uVar2 = FUN_4a03b798(iVar6,pppppppuVar8,pppppppuVar9);
      pppppppuVar8 = (undefined4 *******)(iVar3 + 0x103e);
      *(undefined1 *)(*(int *)(*(int *)puVar1 + 0x14) + (int)pppppppuVar8) = uVar2;
    }
    local_34 = local_28;
  } while( true );
}



// Address: 4a03ef3c

void FUN_4a03ef3c(void)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  puVar1 = PTR_DAT_4a03eff8;
  if (*(int *)(PTR_DAT_4a03eff8 + 0xc) != 0) {
    FUN_4a041068();
  }
  FUN_4a0472a0();
  uVar5 = 0;
  iVar4 = *(int *)PTR_DAT_4a03effc;
  if ((*(uint *)(iVar4 + 0x684) & 1) != 0) {
    uVar5 = 0x4000;
  }
  if (((*(uint *)(iVar4 + 0x684) & 2) != 0) && (puVar1[3] == '\0')) {
    thunk_FUN_4a1500b0(1);
    uVar5 = uVar5 | 0x100;
  }
  if (uVar5 != 0) {
    thunk_FUN_4a14fe28(uVar5);
  }
  if (((*(int *)(iVar4 + 0x67c) == 0) || (iVar3 = FUN_4a07070c(), iVar3 != 0)) ||
     ((*(uint *)(*(int *)(iVar4 + 0x67c) + 0x40) & 0x20000) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    thunk_FUN_4a14fee4(1,1,1,0);
  }
  *(undefined4 *)(iVar4 + 0x684) = 0;
  return;
}



// Address: 4a03f000

void FUN_4a03f000(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_4a03f084;
  puVar1 = PTR_LAB_4a03f080;
  *(undefined **)(PTR_PTR_4a03f084 + 0x41c) = PTR_LAB_4a03f080;
  *(undefined **)(puVar2 + 0x1c) = puVar1;
  puVar1 = PTR_FUN_4a03f088;
  *(undefined **)(puVar2 + 0x43c) = PTR_FUN_4a03f088;
  *(undefined **)(puVar2 + 0x3c) = puVar1;
  puVar1 = PTR_LAB_4a03f08c;
  *(undefined **)(puVar2 + 0x49c) = PTR_LAB_4a03f08c;
  *(undefined **)(puVar2 + 0x9c) = puVar1;
  puVar1 = PTR_FUN_4a03f090;
  *(undefined **)(puVar2 + 0x4bc) = PTR_FUN_4a03f090;
  *(undefined **)(puVar2 + 0xbc) = puVar1;
  puVar1 = PTR_FUN_4a03f094;
  *(undefined **)(puVar2 + 0x51c) = PTR_FUN_4a03f094;
  *(undefined **)(puVar2 + 0x11c) = puVar1;
  puVar1 = PTR_FUN_4a03f098;
  *(undefined **)(puVar2 + 0x53c) = PTR_FUN_4a03f098;
  *(undefined **)(puVar2 + 0x13c) = puVar1;
  puVar1 = PTR_FUN_4a03f09c;
  *(undefined **)(puVar2 + 0x59c) = PTR_FUN_4a03f09c;
  *(undefined **)(puVar2 + 0x19c) = puVar1;
  puVar1 = PTR_FUN_4a03f0a0;
  *(undefined **)(puVar2 + 0x5bc) = PTR_FUN_4a03f0a0;
  *(undefined **)(puVar2 + 0x1bc) = puVar1;
  puVar1 = PTR_FUN_4a03f0a4;
  *(undefined **)(puVar2 + 0x61c) = PTR_FUN_4a03f0a4;
  *(undefined **)(puVar2 + 0x21c) = puVar1;
  puVar1 = PTR_FUN_4a03f0a8;
  *(undefined **)(puVar2 + 0x63c) = PTR_FUN_4a03f0a8;
  *(undefined **)(puVar2 + 0x23c) = puVar1;
  return;
}



// Address: 4a03f0ac

void FUN_4a03f0ac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_4a03f3e8;
  puVar1 = PTR_LAB_4a03f3e4;
  *(undefined **)(PTR_PTR_4a03f3e8 + 0x400) = PTR_LAB_4a03f3e4;
  *(undefined **)puVar2 = puVar1;
  puVar1 = PTR_LAB_4a03f3ec;
  *(undefined **)(puVar2 + 0x404) = PTR_LAB_4a03f3ec;
  *(undefined **)(puVar2 + 4) = puVar1;
  puVar1 = PTR_LAB_4a03f3f0;
  *(undefined **)(puVar2 + 0x408) = PTR_LAB_4a03f3f0;
  *(undefined **)(puVar2 + 8) = puVar1;
  puVar1 = PTR_LAB_4a03f3f4;
  *(undefined **)(puVar2 + 0x40c) = PTR_LAB_4a03f3f4;
  *(undefined **)(puVar2 + 0xc) = puVar1;
  puVar1 = PTR_FUN_4a03f3f8;
  *(undefined **)(puVar2 + 0x414) = PTR_FUN_4a03f3f8;
  *(undefined **)(puVar2 + 0x14) = puVar1;
  puVar1 = PTR_LAB_4a03f3fc;
  *(undefined **)(puVar2 + 0x418) = PTR_LAB_4a03f3fc;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  puVar1 = PTR_DAT_4a03f400;
  *(undefined **)(puVar2 + 0x420) = PTR_DAT_4a03f400;
  *(undefined **)(puVar2 + 0x20) = puVar1;
  puVar1 = PTR_FUN_4a03f404;
  *(undefined **)(puVar2 + 0x424) = PTR_FUN_4a03f404;
  *(undefined **)(puVar2 + 0x24) = puVar1;
  puVar1 = PTR_FUN_4a03f408;
  *(undefined **)(puVar2 + 0x428) = PTR_FUN_4a03f408;
  *(undefined **)(puVar2 + 0x28) = puVar1;
  puVar1 = PTR_FUN_4a03f40c;
  *(undefined **)(puVar2 + 0x42c) = PTR_FUN_4a03f40c;
  *(undefined **)(puVar2 + 0x2c) = puVar1;
  puVar1 = PTR_FUN_4a03f410;
  *(undefined **)(puVar2 + 0x434) = PTR_FUN_4a03f410;
  *(undefined **)(puVar2 + 0x34) = puVar1;
  puVar1 = PTR_FUN_4a03f414;
  *(undefined **)(puVar2 + 0x438) = PTR_FUN_4a03f414;
  *(undefined **)(puVar2 + 0x38) = puVar1;
  puVar1 = PTR_FUN_4a03f418;
  *(undefined **)(puVar2 + 0x460) = PTR_FUN_4a03f418;
  *(undefined **)(puVar2 + 0x60) = puVar1;
  puVar1 = PTR_LAB_4a03f41c;
  *(undefined **)(puVar2 + 0x480) = PTR_LAB_4a03f41c;
  *(undefined **)(puVar2 + 0x80) = puVar1;
  puVar1 = PTR_LAB_4a03f420;
  *(undefined **)(puVar2 + 0x484) = PTR_LAB_4a03f420;
  *(undefined **)(puVar2 + 0x84) = puVar1;
  puVar1 = PTR_LAB_4a03f424;
  *(undefined **)(puVar2 + 0x488) = PTR_LAB_4a03f424;
  *(undefined **)(puVar2 + 0x88) = puVar1;
  puVar1 = PTR_LAB_4a03f428;
  *(undefined **)(puVar2 + 0x48c) = PTR_LAB_4a03f428;
  *(undefined **)(puVar2 + 0x8c) = puVar1;
  puVar1 = PTR_LAB_4a03f42c;
  *(undefined **)(puVar2 + 0x494) = PTR_LAB_4a03f42c;
  *(undefined **)(puVar2 + 0x94) = puVar1;
  puVar1 = PTR_LAB_4a03f430;
  *(undefined **)(puVar2 + 0x498) = PTR_LAB_4a03f430;
  *(undefined **)(puVar2 + 0x98) = puVar1;
  puVar1 = PTR_DAT_4a03f434;
  *(undefined **)(puVar2 + 0x4a0) = PTR_DAT_4a03f434;
  *(undefined **)(puVar2 + 0xa0) = puVar1;
  puVar1 = PTR_FUN_4a03f438;
  *(undefined **)(puVar2 + 0x4a4) = PTR_FUN_4a03f438;
  *(undefined **)(puVar2 + 0xa4) = puVar1;
  puVar1 = PTR_FUN_4a03f43c;
  *(undefined **)(puVar2 + 0x4a8) = PTR_FUN_4a03f43c;
  *(undefined **)(puVar2 + 0xa8) = puVar1;
  puVar1 = PTR_FUN_4a03f440;
  *(undefined **)(puVar2 + 0x4ac) = PTR_FUN_4a03f440;
  *(undefined **)(puVar2 + 0xac) = puVar1;
  puVar1 = PTR_FUN_4a03f444;
  *(undefined **)(puVar2 + 0x4b4) = PTR_FUN_4a03f444;
  *(undefined **)(puVar2 + 0xb4) = puVar1;
  puVar1 = PTR_FUN_4a03f448;
  *(undefined **)(puVar2 + 0x4b8) = PTR_FUN_4a03f448;
  *(undefined **)(puVar2 + 0xb8) = puVar1;
  puVar1 = PTR_LAB_4a03f44c;
  *(undefined **)(puVar2 + 0x4e0) = PTR_LAB_4a03f44c;
  *(undefined **)(puVar2 + 0xe0) = puVar1;
  puVar1 = PTR_LAB_4a03f450;
  *(undefined **)(puVar2 + 0x500) = PTR_LAB_4a03f450;
  *(undefined **)(puVar2 + 0x100) = puVar1;
  puVar1 = PTR_FUN_4a03f454;
  *(undefined **)(puVar2 + 0x504) = PTR_FUN_4a03f454;
  *(undefined **)(puVar2 + 0x104) = puVar1;
  puVar1 = PTR_FUN_4a03f458;
  *(undefined **)(puVar2 + 0x508) = PTR_FUN_4a03f458;
  *(undefined **)(puVar2 + 0x108) = puVar1;
  puVar1 = PTR_FUN_4a03f45c;
  *(undefined **)(puVar2 + 0x50c) = PTR_FUN_4a03f45c;
  *(undefined **)(puVar2 + 0x10c) = puVar1;
  puVar1 = PTR_FUN_4a03f460;
  *(undefined **)(puVar2 + 0x514) = PTR_FUN_4a03f460;
  *(undefined **)(puVar2 + 0x114) = puVar1;
  puVar1 = PTR_FUN_4a03f464;
  *(undefined **)(puVar2 + 0x518) = PTR_FUN_4a03f464;
  *(undefined **)(puVar2 + 0x118) = puVar1;
  puVar1 = PTR_DAT_4a03f468;
  *(undefined **)(puVar2 + 0x520) = PTR_DAT_4a03f468;
  *(undefined **)(puVar2 + 0x120) = puVar1;
  puVar1 = PTR_FUN_4a03f46c;
  *(undefined **)(puVar2 + 0x524) = PTR_FUN_4a03f46c;
  *(undefined **)(puVar2 + 0x124) = puVar1;
  puVar1 = PTR_FUN_4a03f470;
  *(undefined **)(puVar2 + 0x528) = PTR_FUN_4a03f470;
  *(undefined **)(puVar2 + 0x128) = puVar1;
  puVar1 = PTR_FUN_4a03f474;
  *(undefined **)(puVar2 + 0x52c) = PTR_FUN_4a03f474;
  *(undefined **)(puVar2 + 300) = puVar1;
  puVar1 = PTR_FUN_4a03f478;
  *(undefined **)(puVar2 + 0x534) = PTR_FUN_4a03f478;
  *(undefined **)(puVar2 + 0x134) = puVar1;
  puVar1 = PTR_FUN_4a03f47c;
  *(undefined **)(puVar2 + 0x538) = PTR_FUN_4a03f47c;
  *(undefined **)(puVar2 + 0x138) = puVar1;
  puVar1 = PTR_FUN_4a03f480;
  *(undefined **)(puVar2 + 0x560) = PTR_FUN_4a03f480;
  *(undefined **)(puVar2 + 0x160) = puVar1;
  puVar1 = PTR_LAB_4a03f484;
  *(undefined **)(puVar2 + 0x580) = PTR_LAB_4a03f484;
  *(undefined **)(puVar2 + 0x180) = puVar1;
  puVar1 = PTR_FUN_4a03f488;
  *(undefined **)(puVar2 + 0x584) = PTR_FUN_4a03f488;
  *(undefined **)(puVar2 + 0x184) = puVar1;
  puVar1 = PTR_FUN_4a03f48c;
  *(undefined **)(puVar2 + 0x588) = PTR_FUN_4a03f48c;
  *(undefined **)(puVar2 + 0x188) = puVar1;
  puVar1 = PTR_FUN_4a03f490;
  *(undefined **)(puVar2 + 0x58c) = PTR_FUN_4a03f490;
  *(undefined **)(puVar2 + 0x18c) = puVar1;
  puVar1 = PTR_FUN_4a03f494;
  *(undefined **)(puVar2 + 0x594) = PTR_FUN_4a03f494;
  *(undefined **)(puVar2 + 0x194) = puVar1;
  puVar1 = PTR_FUN_4a03f498;
  *(undefined **)(puVar2 + 0x598) = PTR_FUN_4a03f498;
  *(undefined **)(puVar2 + 0x198) = puVar1;
  puVar1 = PTR_DAT_4a03f49c;
  *(undefined **)(puVar2 + 0x5a0) = PTR_DAT_4a03f49c;
  *(undefined **)(puVar2 + 0x1a0) = puVar1;
  puVar1 = PTR_FUN_4a03f4a0;
  *(undefined **)(puVar2 + 0x5a4) = PTR_FUN_4a03f4a0;
  *(undefined **)(puVar2 + 0x1a4) = puVar1;
  puVar1 = PTR_FUN_4a03f4a4;
  *(undefined **)(puVar2 + 0x5a8) = PTR_FUN_4a03f4a4;
  *(undefined **)(puVar2 + 0x1a8) = puVar1;
  puVar1 = PTR_FUN_4a03f4a8;
  *(undefined **)(puVar2 + 0x5ac) = PTR_FUN_4a03f4a8;
  *(undefined **)(puVar2 + 0x1ac) = puVar1;
  puVar1 = PTR_FUN_4a03f4ac;
  *(undefined **)(puVar2 + 0x5b4) = PTR_FUN_4a03f4ac;
  *(undefined **)(puVar2 + 0x1b4) = puVar1;
  puVar1 = PTR_FUN_4a03f4b0;
  *(undefined **)(puVar2 + 0x5b8) = PTR_FUN_4a03f4b0;
  *(undefined **)(puVar2 + 0x1b8) = puVar1;
  puVar1 = PTR_FUN_4a03f4b4;
  *(undefined **)(puVar2 + 0x5e0) = PTR_FUN_4a03f4b4;
  *(undefined **)(puVar2 + 0x1e0) = puVar1;
  puVar1 = PTR_LAB_4a03f4b8;
  *(undefined **)(puVar2 + 0x600) = PTR_LAB_4a03f4b8;
  *(undefined **)(puVar2 + 0x200) = puVar1;
  puVar1 = PTR_LAB_4a03f4bc;
  *(undefined **)(puVar2 + 0x604) = PTR_LAB_4a03f4bc;
  *(undefined **)(puVar2 + 0x204) = puVar1;
  puVar1 = PTR_LAB_4a03f4c0;
  *(undefined **)(puVar2 + 0x608) = PTR_LAB_4a03f4c0;
  *(undefined **)(puVar2 + 0x208) = puVar1;
  puVar1 = PTR_LAB_4a03f4c4;
  *(undefined **)(puVar2 + 0x60c) = PTR_LAB_4a03f4c4;
  *(undefined **)(puVar2 + 0x20c) = puVar1;
  puVar1 = PTR_FUN_4a03f4c8;
  *(undefined **)(puVar2 + 0x614) = PTR_FUN_4a03f4c8;
  *(undefined **)(puVar2 + 0x214) = puVar1;
  puVar1 = PTR_FUN_4a03f4cc;
  *(undefined **)(puVar2 + 0x618) = PTR_FUN_4a03f4cc;
  *(undefined **)(puVar2 + 0x218) = puVar1;
  puVar1 = PTR_DAT_4a03f4d0;
  *(undefined **)(puVar2 + 0x620) = PTR_DAT_4a03f4d0;
  *(undefined **)(puVar2 + 0x220) = puVar1;
  puVar1 = PTR_LAB_4a03f4d4;
  *(undefined **)(puVar2 + 0x624) = PTR_LAB_4a03f4d4;
  *(undefined **)(puVar2 + 0x224) = puVar1;
  puVar1 = PTR_LAB_4a03f4d8;
  *(undefined **)(puVar2 + 0x628) = PTR_LAB_4a03f4d8;
  *(undefined **)(puVar2 + 0x228) = puVar1;
  puVar1 = PTR_FUN_4a03f4dc;
  *(undefined **)(puVar2 + 0x62c) = PTR_FUN_4a03f4dc;
  *(undefined **)(puVar2 + 0x22c) = puVar1;
  puVar1 = PTR_FUN_4a03f4e0;
  *(undefined **)(puVar2 + 0x634) = PTR_FUN_4a03f4e0;
  *(undefined **)(puVar2 + 0x234) = puVar1;
  puVar1 = PTR_FUN_4a03f4e4;
  *(undefined **)(puVar2 + 0x638) = PTR_FUN_4a03f4e4;
  *(undefined **)(puVar2 + 0x238) = puVar1;
  puVar1 = PTR_FUN_4a03f4e8;
  *(undefined **)(puVar2 + 0x654) = PTR_FUN_4a03f4e8;
  *(undefined **)(puVar2 + 0x254) = puVar1;
  puVar1 = PTR_FUN_4a03f4ec;
  *(undefined **)(puVar2 + 0x658) = PTR_FUN_4a03f4ec;
  *(undefined **)(puVar2 + 600) = puVar1;
  puVar1 = PTR_FUN_4a03f4f0;
  *(undefined **)(puVar2 + 0x660) = PTR_FUN_4a03f4f0;
  *(undefined **)(puVar2 + 0x260) = puVar1;
  puVar1 = PTR_LAB_4a03f4f4;
  *(undefined **)(puVar2 + 0x700) = PTR_LAB_4a03f4f4;
  *(undefined **)(puVar2 + 0x300) = puVar1;
  return;
}



// Address: 4a03f4f8

void FUN_4a03f4f8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_108 [256];
  
  iVar1 = FUN_4a047900(param_1,param_2,auStack_108);
  if (iVar1 != 0) {
    host_s3eFileOpen_thumb(auStack_108,param_2);
  }
  return;
}



// Address: 4a03f51c

void FUN_4a03f51c(undefined4 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_4a03f550;
  *param_1 = *(undefined4 *)(PTR_LAB_4a03f550 + 0x2c);
  param_1[1] = *(undefined4 *)(puVar1 + 0x30);
  param_1[2] = *(undefined4 *)(puVar1 + 0x34);
  param_1[4] = *(undefined4 *)(puVar1 + 0x40);
  param_1[3] = (uint)(byte)puVar1[0x46] << 4;
  return;
}



// Address: 4a03f558

void FUN_4a03f558(void)

{
  *(undefined4 *)(*(int *)PTR_DAT_4a03f56c + 0x38c) =
       *(undefined4 *)(*(int *)PTR_DAT_4a03f56c + 900);
  return;
}



// Address: 4a03f570

void FUN_4a03f570(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  puVar1 = PTR_DAT_4a03f5bc;
  puVar2 = *(undefined4 **)PTR_DAT_4a03f5b8;
  puVar2[4] = 0;
  *puVar2 = 0;
  uVar3 = *(undefined4 *)puVar1;
  puVar2[2] = 0;
  puVar2[1] = uVar3;
  puVar2[3] = 0;
  puVar2[7] = 0xffffffff;
  puVar1 = PTR_DAT_4a03f5c0;
  *(undefined2 *)(puVar2 + 5) = 0;
  *(undefined2 *)((int)puVar2 + 0x16) = 0;
  iVar4 = *(int *)puVar1;
  *(short *)(puVar2 + 6) = (short)*(undefined4 *)(iVar4 + 0x344);
  *(short *)((int)puVar2 + 0x1a) = (short)*(undefined4 *)(iVar4 + 0x348);
  puVar2[8] = 0x1000;
  puVar2[9] = 0x1000;
  puVar1 = PTR_DAT_4a03f5c4;
  puVar2[10] = (int)*(short *)PTR_DAT_4a03f5c4;
  puVar2[0xb] = (int)*(short *)(puVar1 + 2);
  puVar2[0xe] = 0;
  return;
}



// Address: 4a03f5c8

void FUN_4a03f5c8(void)

{
  thunk_FUN_4a047de4();
  thunk_FUN_4a047d64();
  thunk_FUN_4a047258();
  thunk_FUN_4a047210();
  thunk_FUN_4a04ee14();
  return;
}



// Address: 4a03f5e4

void FUN_4a03f5e4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar3;
  uint uVar4;
  undefined1 auStack_30 [32];
  undefined4 uVar2;
  
  uVar4 = *(uint *)(*(int *)PTR_DAT_4a03f63c + 0x588);
  uVar2 = DAT_4a03f644;
  if ((uVar4 & 0xfff) == 0) {
    uVar4 = (int)uVar4 >> 0xc;
    uVar2 = DAT_4a03f640;
  }
  iVar1 = thunk_FUN_4a0015f0(uVar2,uVar4);
  iVar3 = thunk_FUN_4a0015f0(iVar1,100);
  FUN_4a000d18(auStack_30,s__aFPS___u__02u_4a03f648,iVar3,iVar1 + iVar3 * -100);
  FUN_4a036084(param_1,param_2,auStack_30,1);
  return;
}



// Address: 4a03f65c

void FUN_4a03f65c(int param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  uint uStack_80;
  uint local_7c [12];
  uint local_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  int local_24;
  undefined4 uStack_20;
  
  iVar4 = *(int *)PTR_DAT_4a03f774;
  uVar9 = *(uint *)(iVar4 + 4);
  if ((uVar9 & 0x2000) != 0) {
    uVar9 = 0;
    do {
      uVar12 = 0;
      do {
        uVar5 = FUN_4a171fac(*(undefined4 *)(param_1 + uVar9 * 0xc + uVar12 * 4));
        uVar6 = FUN_4a17295c(uVar5,0xfffffff4);
        local_7c[uVar9 * 3 + uVar12] = uVar6;
        uVar12 = uVar12 + 1;
      } while (uVar12 < 3);
      uVar9 = uVar9 + 1;
    } while (uVar9 < 3);
    local_7c[9] = FUN_4a171fac(*(undefined4 *)(param_1 + 0x24));
    local_7c[10] = FUN_4a171fac(*(undefined4 *)(param_1 + 0x28));
    local_7c[0xb] = FUN_4a171fac(*(undefined4 *)(param_1 + 0x2c));
    local_4c = local_7c[0];
    uStack_48 = local_7c[1];
    uStack_44 = local_7c[2];
    uStack_40 = local_7c[3];
    uStack_3c = local_7c[4];
    uStack_38 = local_7c[5];
    uStack_34 = local_7c[6];
    uStack_30 = local_7c[7];
    iStack_2c = local_7c[8];
    iStack_28 = local_7c[9];
    local_24 = local_7c[10];
    uStack_20 = local_7c[0xb];
    FUN_4a03f778(&local_4c);
    return;
  }
  if (param_2 == 0) {
    *(uint *)(iVar4 + 4) = uVar9 & 0xfffffffe;
    thunk_FUN_4a0cff80(iVar4 + 0x10,param_1);
  }
  else if ((uVar9 & 1) == 0) {
    *(uint *)(iVar4 + 4) = uVar9 | 1;
    thunk_FUN_4a0cff80(iVar4 + 0x10,param_1);
  }
  else {
    *(undefined4 *)(iVar4 + 0x34) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(iVar4 + 0x38) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(iVar4 + 0x3c) = *(undefined4 *)(param_1 + 0x2c);
  }
  puVar3 = PTR_DAT_4a050804;
  puVar13 = *(uint **)PTR_DAT_4a050804;
  if ((*puVar13 & 0x40000000) != 0) {
    *puVar13 = *puVar13 & 0xbfffffff;
  }
  uVar9 = puVar13[1];
  if ((uVar9 & 1) == 0 || (uVar9 & 2) == 0) {
    if ((*puVar13 & 0x100) == 0 && (uVar9 & 0x10) == 0) {
      thunk_FUN_4a0cff80(puVar13 + 0x28,puVar13 + 4);
      puVar13[0x32] = puVar13[0x32];
      puVar13[0x33] = puVar13[0x33];
      puVar13[0x31] = puVar13[0x31] - puVar13[0x19];
      puVar13[0x32] = puVar13[0x32] - puVar13[0x1a];
      puVar13[0x33] = puVar13[0x33] - puVar13[0x1b];
      uStack_80 = puVar13[0x10];
      local_7c[2] = puVar13[0x11];
      local_7c[5] = puVar13[0x12];
      local_7c[0] = puVar13[0x13];
      local_7c[3] = puVar13[0x14];
      local_7c[6] = puVar13[0x15];
      local_7c[1] = puVar13[0x16];
      local_7c[4] = puVar13[0x17];
      local_7c[7] = puVar13[0x18];
      local_7c[8] = 0;
      local_7c[9] = 0;
      local_7c[10] = 0;
      FUN_4a13efe8(local_7c + 0xb,puVar13 + 0x28,&uStack_80);
      thunk_FUN_4a0cff80(puVar13 + 0x28,local_7c + 0xb);
      FUN_4a04159c(puVar13 + 0x28,puVar13 + 0x40);
    }
    else {
      local_7c[0xb] = puVar13[4];
      local_4c = puVar13[5];
      uStack_48 = puVar13[6];
      uStack_44 = puVar13[7];
      uStack_40 = puVar13[8];
      uStack_3c = puVar13[9];
      uStack_38 = puVar13[10];
      uStack_34 = puVar13[0xb];
      uStack_30 = puVar13[0xc];
      iStack_2c = puVar13[0xd] - puVar13[0x19];
      puVar8 = puVar13 + 0x10;
      iStack_28 = puVar13[0xe] - puVar13[0x1a];
      local_24 = puVar13[0xf] - puVar13[0x1b];
      lVar1 = (longlong)(int)puVar13[0x12] * (longlong)(int)uStack_48 +
              (longlong)(int)*puVar8 * (longlong)(int)local_7c[0xb] +
              (longlong)(int)local_4c * (longlong)(int)puVar13[0x11];
      puVar7 = puVar13 + 0x9a;
      uVar9 = FUN_4a0008b0((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),2);
      *puVar7 = uVar9;
      lVar1 = (longlong)(int)puVar13[0x15] * (longlong)(int)uStack_48 +
              (longlong)(int)puVar13[0x13] * (longlong)(int)local_7c[0xb] +
              (longlong)(int)local_4c * (longlong)(int)puVar13[0x14];
      uVar9 = FUN_4a0008b0((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),2);
      puVar13[0x9b] = uVar9;
      lVar1 = (longlong)(int)puVar13[0x18] * (longlong)(int)uStack_48 +
              (longlong)(int)puVar13[0x16] * (longlong)(int)local_7c[0xb] +
              (longlong)(int)local_4c * (longlong)(int)puVar13[0x17];
      uVar9 = FUN_4a0008b0((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),2);
      puVar13[0x9c] = uVar9;
      lVar1 = (longlong)(int)puVar13[0x12] * (longlong)(int)uStack_3c +
              (longlong)(int)*puVar8 * (longlong)(int)uStack_44 +
              (longlong)(int)uStack_40 * (longlong)(int)puVar13[0x11];
      uVar9 = FUN_4a0008b0((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),2);
      puVar13[0x9d] = uVar9;
      lVar1 = (longlong)(int)puVar13[0x15] * (longlong)(int)uStack_3c +
              (longlong)(int)puVar13[0x13] * (longlong)(int)uStack_44 +
              (longlong)(int)uStack_40 * (longlong)(int)puVar13[0x14];
      uVar9 = FUN_4a0008b0((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),2);
      puVar13[0x9e] = uVar9;
      lVar1 = (longlong)(int)puVar13[0x18] * (longlong)(int)uStack_3c +
              (longlong)(int)puVar13[0x16] * (longlong)(int)uStack_44 +
              (longlong)(int)uStack_40 * (longlong)(int)puVar13[0x17];
      uVar9 = FUN_4a0008b0((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),2);
      puVar13[0x9f] = uVar9;
      lVar1 = (longlong)(int)puVar13[0x12] * (longlong)(int)uStack_30 +
              (longlong)(int)*puVar8 * (longlong)(int)uStack_38 +
              (longlong)(int)uStack_34 * (longlong)(int)puVar13[0x11];
      uVar9 = FUN_4a0008b0((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),2);
      puVar13[0xa0] = uVar9;
      lVar1 = (longlong)(int)puVar13[0x15] * (longlong)(int)uStack_30 +
              (longlong)(int)puVar13[0x13] * (longlong)(int)uStack_38 +
              (longlong)(int)uStack_34 * (longlong)(int)puVar13[0x14];
      uVar9 = FUN_4a0008b0((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),2);
      puVar13[0xa1] = uVar9;
      lVar1 = (longlong)(int)puVar13[0x18] * (longlong)(int)uStack_30 +
              (longlong)(int)puVar13[0x16] * (longlong)(int)uStack_38 +
              (longlong)(int)uStack_34 * (longlong)(int)puVar13[0x17];
      uVar9 = FUN_4a0008b0((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),2);
      puVar13[0xa2] = uVar9;
      lVar1 = (longlong)(int)puVar13[0x12] * (longlong)local_24 +
              (longlong)(int)*puVar8 * (longlong)iStack_2c +
              (longlong)iStack_28 * (longlong)(int)puVar13[0x11];
      uVar9 = FUN_4a0008b0((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),4);
      puVar13[0xa3] = uVar9;
      lVar1 = (longlong)(int)puVar13[0x15] * (longlong)local_24 +
              (longlong)(int)puVar13[0x13] * (longlong)iStack_2c +
              (longlong)iStack_28 * (longlong)(int)puVar13[0x14];
      uVar9 = FUN_4a0008b0((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),4);
      puVar13[0xa4] = uVar9;
      lVar1 = (longlong)(int)puVar13[0x18] * (longlong)local_24 +
              (longlong)(int)puVar13[0x16] * (longlong)iStack_2c +
              (longlong)iStack_28 * (longlong)(int)puVar13[0x17];
      uVar9 = FUN_4a0008b0((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),4);
      puVar13[0xa5] = uVar9;
      puVar8 = puVar13 + 0x28;
      puVar13[0x28] = (int)*puVar7 >> 10;
      iVar4 = 2;
      do {
        iVar4 = iVar4 + -1;
        puVar8[1] = (int)puVar7[1] >> 10;
        puVar8[2] = (int)puVar7[2] >> 10;
        puVar8[3] = (int)puVar7[3] >> 10;
        puVar7 = puVar7 + 4;
        puVar8 = puVar8 + 4;
        *puVar8 = (int)*puVar7 >> 10;
      } while (iVar4 != 0);
      puVar13[0x31] = (int)puVar13[0xa3] >> 8;
      puVar13[0x32] = (int)puVar13[0xa4] >> 8;
      puVar13[0x33] = (int)puVar13[0xa5] >> 8;
      puVar7 = puVar13 + 0xa6;
      if ((**(uint **)puVar3 & 0x80000000) == 0) {
        lVar1 = (longlong)(int)puVar13[0x9a] * (longlong)(int)puVar13[0xcc];
        uVar9 = FUN_4a0008b0((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),6);
        *puVar7 = uVar9;
        uVar9 = FUN_4a0008b0((int)((longlong)(int)puVar13[0x9d] * (longlong)(int)puVar13[0xcc]),
                             (int)((ulonglong)
                                   ((longlong)(int)puVar13[0x9d] * (longlong)(int)puVar13[0xcc]) >>
                                  0x20),6);
        puVar13[0xa9] = uVar9;
        uVar9 = FUN_4a0008b0((int)((longlong)(int)puVar13[0xa0] * (longlong)(int)puVar13[0xcc]),
                             (int)((ulonglong)
                                   ((longlong)(int)puVar13[0xa0] * (longlong)(int)puVar13[0xcc]) >>
                                  0x20),6);
        puVar13[0xac] = uVar9;
        uVar9 = FUN_4a0008b0((int)((longlong)(int)puVar13[0x9b] * (longlong)(int)puVar13[0xcd]),
                             (int)((ulonglong)
                                   ((longlong)(int)puVar13[0x9b] * (longlong)(int)puVar13[0xcd]) >>
                                  0x20),6);
        puVar13[0xa7] = uVar9;
        uVar9 = FUN_4a0008b0((int)((longlong)(int)puVar13[0x9e] * (longlong)(int)puVar13[0xcd]),
                             (int)((ulonglong)
                                   ((longlong)(int)puVar13[0x9e] * (longlong)(int)puVar13[0xcd]) >>
                                  0x20),6);
        puVar13[0xaa] = uVar9;
        uVar9 = FUN_4a0008b0((int)((longlong)(int)puVar13[0xa1] * (longlong)(int)puVar13[0xcd]),
                             (int)((ulonglong)
                                   ((longlong)(int)puVar13[0xa1] * (longlong)(int)puVar13[0xcd]) >>
                                  0x20),6);
        puVar13[0xad] = uVar9;
        uVar9 = FUN_4a0008b0((int)((longlong)(int)puVar13[0x9c] * (longlong)(int)puVar13[0xcb]),
                             (int)((ulonglong)
                                   ((longlong)(int)puVar13[0x9c] * (longlong)(int)puVar13[0xcb]) >>
                                  0x20),6);
        puVar13[0xa8] = uVar9;
        uVar9 = FUN_4a0008b0((int)((longlong)(int)puVar13[0x9f] * (longlong)(int)puVar13[0xcb]),
                             (int)((ulonglong)
                                   ((longlong)(int)puVar13[0x9f] * (longlong)(int)puVar13[0xcb]) >>
                                  0x20),6);
        puVar13[0xab] = uVar9;
        uVar9 = FUN_4a0008b0((int)((longlong)(int)puVar13[0xa2] * (longlong)(int)puVar13[0xcb]),
                             (int)((ulonglong)
                                   ((longlong)(int)puVar13[0xa2] * (longlong)(int)puVar13[0xcb]) >>
                                  0x20),6);
        puVar13[0xae] = uVar9;
        uVar9 = FUN_4a0008b0((int)((longlong)(int)puVar13[0xa3] * (longlong)(int)puVar13[0xcc]),
                             (int)((ulonglong)
                                   ((longlong)(int)puVar13[0xa3] * (longlong)(int)puVar13[0xcc]) >>
                                  0x20),6);
        puVar13[0xaf] = uVar9;
        uVar9 = FUN_4a0008b0((int)((longlong)(int)puVar13[0xa4] * (longlong)(int)puVar13[0xcd]),
                             (int)((ulonglong)
                                   ((longlong)(int)puVar13[0xa4] * (longlong)(int)puVar13[0xcd]) >>
                                  0x20),6);
        puVar13[0xb0] = uVar9;
        uVar9 = FUN_4a0008b0((int)((longlong)(int)puVar13[0xa5] * (longlong)(int)puVar13[0xcb]),
                             (int)((ulonglong)
                                   ((longlong)(int)puVar13[0xa5] * (longlong)(int)puVar13[0xcb]) >>
                                  0x20),6);
        puVar13[0xb1] = uVar9;
      }
      else {
        uVar9 = puVar13[0xc2];
        if ((uVar9 & 0xfff) == 0) {
          uVar9 = (int)uVar9 >> 0xc;
          uVar5 = 0x2000;
        }
        else {
          uVar5 = 0x2000000;
        }
        iVar4 = FUN_4a0015f0(uVar5,uVar9);
        uVar9 = puVar13[0xc3];
        if ((uVar9 & 0xfff) == 0) {
          uVar9 = (int)uVar9 >> 0xc;
          uVar5 = 0x2000;
        }
        else {
          uVar5 = 0x2000000;
        }
        iVar10 = FUN_4a0015f0(uVar5,uVar9);
        lVar1 = (longlong)(int)puVar13[0x9a] * (longlong)iVar4;
        *puVar7 = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
        puVar13[0xa9] =
             (uint)((longlong)(int)puVar13[0x9d] * (longlong)iVar4) >> 0xc |
             (int)((ulonglong)((longlong)(int)puVar13[0x9d] * (longlong)iVar4) >> 0x20) << 0x14;
        puVar13[0xac] =
             (uint)((longlong)(int)puVar13[0xa0] * (longlong)iVar4) >> 0xc |
             (int)((ulonglong)((longlong)(int)puVar13[0xa0] * (longlong)iVar4) >> 0x20) << 0x14;
        puVar13[0xa7] =
             (uint)((longlong)(int)puVar13[0x9b] * (longlong)iVar10) >> 0xc |
             (int)((ulonglong)((longlong)(int)puVar13[0x9b] * (longlong)iVar10) >> 0x20) << 0x14;
        puVar13[0xaa] =
             (uint)((longlong)(int)puVar13[0x9e] * (longlong)iVar10) >> 0xc |
             (int)((ulonglong)((longlong)(int)puVar13[0x9e] * (longlong)iVar10) >> 0x20) << 0x14;
        puVar13[0xad] =
             (uint)((longlong)(int)puVar13[0xa1] * (longlong)iVar10) >> 0xc |
             (int)((ulonglong)((longlong)(int)puVar13[0xa1] * (longlong)iVar10) >> 0x20) << 0x14;
        uVar9 = FUN_4a0008b0((int)((longlong)(int)puVar13[0x9c] * (longlong)(int)puVar13[0xcb]),
                             (int)((ulonglong)
                                   ((longlong)(int)puVar13[0x9c] * (longlong)(int)puVar13[0xcb]) >>
                                  0x20),6);
        puVar13[0xa8] = uVar9;
        uVar9 = FUN_4a0008b0((int)((longlong)(int)puVar13[0x9f] * (longlong)(int)puVar13[0xcb]),
                             (int)((ulonglong)
                                   ((longlong)(int)puVar13[0x9f] * (longlong)(int)puVar13[0xcb]) >>
                                  0x20),6);
        puVar13[0xab] = uVar9;
        uVar9 = FUN_4a0008b0((int)((longlong)(int)puVar13[0xa2] * (longlong)(int)puVar13[0xcb]),
                             (int)((ulonglong)
                                   ((longlong)(int)puVar13[0xa2] * (longlong)(int)puVar13[0xcb]) >>
                                  0x20),6);
        puVar13[0xae] = uVar9;
        puVar13[0xaf] =
             (uint)((longlong)(int)puVar13[0xa3] * (longlong)iVar4) >> 0xc |
             (int)((ulonglong)((longlong)(int)puVar13[0xa3] * (longlong)iVar4) >> 0x20) << 0x14;
        puVar13[0xb0] =
             (uint)((longlong)(int)puVar13[0xa4] * (longlong)iVar10) >> 0xc |
             (int)((ulonglong)((longlong)(int)puVar13[0xa4] * (longlong)iVar10) >> 0x20) << 0x14;
        uVar9 = FUN_4a0008b0((int)((longlong)(int)puVar13[0xa5] * (longlong)(int)puVar13[0xcb]),
                             (int)((ulonglong)
                                   ((longlong)(int)puVar13[0xa5] * (longlong)(int)puVar13[0xcb]) >>
                                  0x20),6);
        puVar13[0xb1] = uVar9;
        iVar4 = FUN_4a0015f0((puVar13[0xc0] + (int)puVar13[0xc2] / 2) * 0x2000);
        puVar13[0xaf] = puVar13[0xaf] + iVar4 * -0x100;
        iVar4 = FUN_4a0015f0((puVar13[0xc1] + (int)puVar13[0xc3] / 2) * 0x2000);
        puVar13[0xb0] = puVar13[0xb0] + iVar4 * -0x100;
      }
      puVar8 = puVar13 + 0x40;
      puVar13[0x40] = (int)*puVar7 >> 10;
      iVar4 = 2;
      do {
        iVar4 = iVar4 + -1;
        puVar8[1] = (int)puVar7[1] >> 10;
        puVar8[2] = (int)puVar7[2] >> 10;
        puVar8[3] = (int)puVar7[3] >> 10;
        puVar7 = puVar7 + 4;
        puVar8 = puVar8 + 4;
        *puVar8 = (int)*puVar7 >> 10;
      } while (iVar4 != 0);
      puVar13[0x49] = (int)puVar13[0xaf] >> 8;
      puVar13[0x4a] = (int)puVar13[0xb0] >> 8;
      puVar13[0x4b] = (int)puVar13[0xb1] >> 8;
    }
    uVar9 = puVar13[1];
    if ((uVar9 & 1) == 0) {
      uVar9 = uVar9 & 0xfffffffd;
    }
    else {
      uVar9 = uVar9 | 2;
    }
    puVar13[1] = uVar9;
    return;
  }
  iVar10 = puVar13[0xd] - puVar13[0x19];
  iVar4 = puVar13[0xe] - puVar13[0x1a];
  iVar11 = puVar13[0xf] - puVar13[0x1b];
  lVar1 = (longlong)iVar11 * (longlong)(int)puVar13[0x2e] +
          (longlong)iVar10 * (longlong)(int)puVar13[0x28] +
          (longlong)(int)puVar13[0x2b] * (longlong)iVar4;
  uVar9 = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  lVar1 = (longlong)iVar11 * (longlong)(int)puVar13[0x2f] +
          (longlong)iVar10 * (longlong)(int)puVar13[0x29] +
          (longlong)(int)puVar13[0x2c] * (longlong)iVar4;
  lVar2 = (longlong)iVar11 * (longlong)(int)puVar13[0x30] +
          (longlong)iVar10 * (longlong)(int)puVar13[0x2a] +
          (longlong)(int)puVar13[0x2d] * (longlong)iVar4;
  puVar13[0x31] = uVar9;
  puVar13[0x32] = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  puVar13[0x33] = (uint)lVar2 >> 0xc | (int)((ulonglong)lVar2 >> 0x20) << 0x14;
  iVar4 = *(int *)puVar3;
  puVar13[0x49] = (int)(*(int *)(iVar4 + 0x330) * uVar9) >> 6;
  puVar13[0x4a] = (int)(*(int *)(iVar4 + 0x334) * puVar13[0x32]) >> 6;
  puVar13[0x4b] = (int)(puVar13[0x33] * *(int *)(iVar4 + 0x32c)) >> 6;
  return;
}



// Address: 4a03f778

void FUN_4a03f778(undefined4 param_1)

{
  FUN_4a0d3f10(*(int *)PTR_DAT_4a03f79c + 0x130,param_1);
  FUN_4a05156c();
  return;
}



// Address: 4a03f7a4

void FUN_4a03f7a4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  
  puVar1 = PTR_DAT_4a03f828;
  if ((**(uint **)PTR_DAT_4a03f828 & 0x400) != 0) {
    if ((**(uint **)PTR_DAT_4a03f828 & 0x100) == 0) {
      FUN_4a05a618();
    }
    puVar3 = *(uint **)puVar1;
    *puVar3 = *puVar3 | 0x100;
    FUN_4a040ccc(puVar3[0xfc],puVar3[0xfb]);
    puVar2 = PTR_DAT_4a03f830;
    puVar1 = PTR_DAT_4a03f82c;
    *(undefined4 *)(PTR_DAT_4a03f830 + 4) = *(undefined4 *)(PTR_DAT_4a03f82c + 0x40);
    *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(puVar1 + 0x44);
    *(undefined4 *)(puVar2 + 0xc) = *(undefined4 *)(puVar1 + 0x48);
    *(undefined4 *)(puVar2 + 0x10) = *(undefined4 *)(puVar1 + 0x4c);
    *(undefined4 *)(puVar2 + 0x14) = *(undefined4 *)(puVar1 + 0x50);
    *(undefined4 *)(puVar2 + 0x24) = *(undefined4 *)PTR_DAT_4a03f834;
    return;
  }
  return;
}



// Address: 4a03f83c

void FUN_4a03f83c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  uint uVar5;
  
  puVar1 = PTR_DAT_4a03f8c4;
  if ((**(uint **)PTR_DAT_4a03f8c4 & 0x100) != 0) {
    FUN_4a05a618();
  }
  puVar4 = *(uint **)puVar1;
  uVar5 = *puVar4;
  *puVar4 = uVar5 & 0xfffffeff;
  if ((uVar5 & 0x20) != 0) {
    FUN_4a040ccc(puVar4[0xfc],puVar4[0xfb]);
  }
  puVar3 = PTR_DAT_4a03f8cc;
  puVar2 = PTR_DAT_4a03f8c8;
  *(undefined4 *)(PTR_DAT_4a03f8cc + 4) = *(undefined4 *)(PTR_DAT_4a03f8c8 + 4);
  *(undefined4 *)(puVar3 + 8) = *(undefined4 *)(puVar2 + 8);
  *(undefined4 *)(puVar3 + 0xc) = *(undefined4 *)(puVar2 + 0xc);
  *(undefined4 *)(puVar3 + 0x10) = *(undefined4 *)(puVar2 + 0x10);
  *(undefined4 *)(puVar3 + 0x14) = *(undefined4 *)(puVar2 + 0x14);
  if ((**(uint **)puVar1 & 0x400) != 0) {
    *(undefined4 *)(puVar3 + 0x24) = *(undefined4 *)PTR_DAT_4a03f8d0;
  }
  return;
}



// Address: 4a03f8d4

void FUN_4a03f8d4(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  
  puVar1 = PTR_LAB_4a03f9ac;
  iVar5 = *param_1;
  *(int *)(PTR_LAB_4a03f9ac + 0x2c) = iVar5;
  iVar6 = param_1[1];
  *(int *)(puVar1 + 0x30) = iVar6;
  *(int *)(puVar1 + 0x34) = param_1[2];
  puVar1[0x46] = 2;
  uVar4 = param_1[2];
  *(uint *)(puVar1 + 0x38) = uVar4 >> 1;
  if ((param_1[3] & 0x70U) == 0x40) {
    *(uint *)(puVar1 + 0x38) = (uVar4 >> 1) / 2;
    puVar1[0x46] = 4;
  }
  *(int *)(puVar1 + 0x3c) = *(int *)(puVar1 + 0x38) / 2;
  *(int *)(puVar1 + 0x40) = param_1[4];
  *(undefined4 *)(puVar1 + 0x14) = 0;
  *(undefined4 *)(puVar1 + 0x1c) = 0;
  *(int *)(puVar1 + 0x18) = param_1[1];
  puVar2 = PTR_DAT_4a03f9b0;
  *(int *)(puVar1 + 0x20) = *param_1;
  if (*(int *)(puVar2 + 0x10) == 0) {
    return;
  }
  iVar3 = *(int *)(puVar2 + 0x1c);
  bVar7 = iVar5 == iVar3;
  if (bVar7) {
    iVar3 = *(int *)(puVar2 + 0x18);
  }
  bVar8 = bVar7 && iVar6 == iVar3;
  if (bVar7 && iVar6 == iVar3) {
    bVar8 = *(int *)(puVar1 + 0x38) == *(int *)(puVar2 + 0x14);
  }
  if (!bVar8) {
    if (*(code **)(puVar2 + 0x38) == (code *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a03f9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(puVar2 + 0x38))();
    return;
  }
  return;
}



// Address: 4a03f9f4

void FUN_4a03f9f4(undefined4 param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint local_10;
  
  local_10 = 0;
  iVar1 = host_s3eConfigGetInt_thumb(s_GxFont_4a03fa60,param_1,&local_10);
  if ((iVar1 == 0) && (0 < (int)local_10)) {
    iVar1 = 0;
    uVar2 = local_10;
    if (local_10 >> 0x10 == 0) {
      iVar1 = 0x10;
      uVar2 = local_10 << 0x10;
    }
    if (uVar2 >> 0x18 == 0) {
      iVar1 = iVar1 + 8;
      uVar2 = uVar2 << 8;
    }
    if (uVar2 >> 0x1c == 0) {
      iVar1 = iVar1 + 4;
      uVar2 = uVar2 << 4;
    }
    if (uVar2 >> 0x1e == 0) {
      iVar1 = iVar1 + 2;
      uVar2 = uVar2 << 2;
    }
    if (-1 < (int)uVar2) {
      iVar1 = iVar1 + 1;
    }
    if (1 << (0x1fU - iVar1 & 0xff) == local_10) {
      *param_2 = local_10;
    }
  }
  return;
}



// Address: 4a03fa68

void FUN_4a03fa68(void)

{
  undefined *local_44;
  undefined *local_40;
  undefined *local_3c;
  undefined *local_38;
  undefined *local_34;
  undefined *local_30;
  undefined *local_2c;
  undefined *local_28;
  undefined *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_30 = PTR_FUN_4a14e018_1_4a03faa8;
  local_3c = PTR_FUN_4a14e02a_1_4a03faac;
  local_44 = PTR_FUN_4a14e03c_1_4a03fab0;
  local_40 = PTR_FUN_4a14e078_1_4a03fab4;
  local_38 = PTR_FUN_4a14e090_1_4a03fab8;
  local_34 = PTR_LAB_4a14e0a6_1_4a03fabc;
  local_2c = PTR_FUN_4a056fe0_1_4a03fac0;
  local_28 = PTR_FUN_4a01d384_1_4a03fac4;
  local_24 = PTR_FUN_4a02ae9c_1_4a03fac8;
  local_1c = 0;
  local_20 = 0;
  host_s3eFileAddUserFileSys_thumb(&local_44);
  PTR_DAT_4a03facc[1] = 1;
  return;
}



// Address: 4a03fad0

void FUN_4a03fad0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_4a03fb6c;
  thunk_FUN_4a0361cc(*(undefined4 *)(PTR_DAT_4a03fb6c + 0x54));
  puVar2 = PTR_DAT_4a03fb70;
  (**(code **)(PTR_DAT_4a03fb70 + 0x14))(*(undefined4 *)(puVar1 + 0x58),4,3);
  FUN_4a0363b8(*(undefined4 *)(puVar1 + 0x5c),0);
  FUN_4a0360f8(0,0,0);
  (**(code **)(puVar2 + 0x20))(3);
  if ((*(uint *)(*(int *)PTR_DAT_4a03fb74 + 4) & 0x800) == 0) {
    *(undefined1 *)(*(int *)PTR_DAT_4a03fb74 + 0x680) = 1;
    (**(code **)(puVar2 + 0x24))(3,0,4);
  }
  FUN_4a05a618();
  thunk_FUN_4a05a68c();
  FUN_4a0396fc();
  FUN_4a040d64();
  puVar1 = PTR_DAT_4a03649c;
  if ((**(uint **)PTR_DAT_4a03649c & 0x1000000) != 0) {
    FUN_4a03f5e4(0);
    FUN_4a037ce4();
  }
  (**(code **)(PTR_DAT_4a0364a0 + 0x2c))();
  iVar3 = *(int *)puVar1;
  uVar5 = *(int *)(iVar3 + 0x578) + 1;
  *(uint *)(iVar3 + 0x578) = uVar5;
  if (uVar5 + (uint)((ulonglong)uVar5 * (ulonglong)DAT_4a0364a4 >> 0x23) * -10 == 0) {
    uVar6 = host_s3eTimerGetMs_arm();
    iVar3 = *(int *)puVar1;
    uVar5 = (uint)uVar6 - *(uint *)(iVar3 + 0x580);
    uVar4 = FUN_4a0008f8(uVar5 * 0x1000,
                         ((int)((ulonglong)uVar6 >> 0x20) -
                         (*(int *)(iVar3 + 0x584) + (uint)((uint)uVar6 < *(uint *)(iVar3 + 0x580))))
                         * 0x1000 | uVar5 >> 0x14,10,0);
    *(undefined8 *)(iVar3 + 0x580) = uVar6;
    *(undefined4 *)(iVar3 + 0x588) = uVar4;
    return;
  }
  return;
}



// Address: 4a0405b0

void FUN_4a0405b0(void)

{
  thunk_FUN_4a161570(0xc4);
  FUN_4a0633c4();
  return;
}



// Address: 4a0405c2

undefined4 FUN_4a0405c2(void)

{
  return 0xc4;
}



// Address: 4a0405c8

void FUN_4a0405c8(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  
  iVar1 = DAT_4a040630;
  uVar3 = FUN_4a041274(param_1,DAT_4a040630);
  puVar2 = PTR_DAT_4a040634;
  FUN_4a09d908(*(undefined4 *)(PTR_DAT_4a040634 + 4),uVar3,param_2,param_3);
  if (*param_2 == 0) {
    uVar4 = FUN_4a03e424(param_1,iVar1);
    uVar5 = FUN_4a03e424(param_1,DAT_4a040630 + 1);
    uVar4 = FUN_4a02ca9c(0,uVar5,uVar4);
    piVar6 = *(int **)(puVar2 + 4);
    FUN_4a1652ca(piVar6,uVar3,uVar4,*(undefined4 *)(*piVar6 + 8));
    FUN_4a09d908(*(undefined4 *)(puVar2 + 4),uVar3,param_2,param_3);
  }
  return;
}



// Address: 4a040638

uint FUN_4a040638(uint *param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = host_s3eSurfaceGetInt_thumb(3);
  iVar2 = iVar2 + DAT_4a0406bc;
  if (iVar2 == 0) {
    uVar1 = (ushort)*param_1;
    uVar5 = 0xf0;
    uVar3 = (uVar1 & 0xf) << 0x14 | (uVar1 & 0xf0) << 8;
    uVar4 = (uint)(uVar1 >> 4);
  }
  else {
    uVar5 = 0xf8;
    if (iVar2 == 1) {
      uVar1 = (ushort)*param_1;
      uVar3 = (uVar1 & 0x1f) << 0x13 | (uVar1 & 0x7e0) << 5;
      uVar4 = (uint)(uVar1 >> 8);
    }
    else {
      if (iVar2 != 2) {
        if (iVar2 == 0x24) {
          uVar3 = *param_1;
          return ((uVar3 & 0xff) << 0x10 | uVar3 & 0xff00 | (uVar3 & 0xffffff) >> 0x10) - 0x1000000;
        }
        return 0;
      }
      uVar1 = (ushort)*param_1;
      uVar3 = (uVar1 & 0x1f) << 0x13 | (uVar1 & 0x3e0) << 6;
      uVar4 = (uint)(uVar1 >> 7);
    }
  }
  return uVar3 | uVar4 & uVar5;
}



// Address: 4a0406c0

undefined8 FUN_4a0406c0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined *puVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  void *config;
  undefined4 *attrib_list;
  undefined4 local_20;
  int local_1c;
  undefined4 uStack_18;
  
  puVar1 = PTR_DAT_4a040798;
  attrib_list = &local_20;
  PTR_DAT_4a040798[3] = 1;
  local_20 = param_2;
  local_1c = param_3;
  uStack_18 = param_4;
  pvVar2 = host_eglGetDisplay_thumb((void *)0x0);
  *(void **)(puVar1 + 8) = pvVar2;
  uVar3 = host_eglInitialize_thumb(pvVar2,puVar1 + 0x14,puVar1 + 0x18);
  iVar4 = host_eglGetError_thumb();
  if (iVar4 == 0x3000) {
LAB_4a040700:
    uVar5 = FUN_4a035ea4();
    iVar4 = FUN_4a046d84(PTR_DAT_4a040798 + 4,uVar5);
    iVar6 = host_s3eConfigGetInt_thumb(&DAT_4a0407ac,s_ForceConfigID_4a04079c,PTR_DAT_4a040798 + 4);
    if ((iVar6 == 0) || (iVar4 != 0)) {
      iVar4 = host_s3eGLGetInt_thumb(0);
      if (iVar4 >> 8 < 2) {
        config = *(void **)(puVar1 + 4);
        pvVar2 = *(void **)(puVar1 + 8);
        attrib_list = (undefined4 *)0x0;
      }
      else {
        host_eglBindAPI_thumb(DAT_4a0407b0);
        local_20 = *(undefined4 *)PTR_DAT_4a0407b4;
        local_1c = *(int *)(PTR_DAT_4a0407b4 + 4);
        uStack_18 = *(undefined4 *)(PTR_DAT_4a0407b4 + 8);
        local_1c = host_s3eGLGetInt_thumb(0,PTR_DAT_4a0407b4 + 0xc);
        local_1c = local_1c >> 8;
        config = *(void **)(puVar1 + 4);
        pvVar2 = *(void **)(puVar1 + 8);
      }
      pvVar2 = host_eglCreateContext_thumb(pvVar2,config,(void *)0x0,attrib_list);
      *(void **)(puVar1 + 0x10) = pvVar2;
      if (pvVar2 != (void *)0x0) {
        pvVar2 = (void *)host_s3eGLGetNativeWindow_thumb();
        pvVar2 = host_eglCreateWindowSurface_thumb
                           (*(void **)(puVar1 + 8),*(void **)(puVar1 + 4),pvVar2,(void *)0x0);
        *(void **)(puVar1 + 0xc) = pvVar2;
        if ((pvVar2 != (void *)0x0) &&
           (uVar3 = host_eglMakeCurrent_thumb
                              (*(void **)(puVar1 + 8),pvVar2,pvVar2,*(void **)(puVar1 + 0x10)),
           uVar3 != 0)) {
          uVar5 = 1;
          goto LAB_4a0406fa;
        }
      }
    }
    FUN_4a00d654(0);
  }
  else if (iVar4 == 0) {
    if (uVar3 != 0) {
      *puVar1 = 1;
      goto LAB_4a040700;
    }
  }
  else if (uVar3 != 0) goto LAB_4a040700;
  uVar5 = 0;
LAB_4a0406fa:
  return CONCAT44(local_20,uVar5);
}



// Address: 4a0407b8

void FUN_4a0407b8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)PTR_DAT_4a0407f0;
  iVar3 = 0;
  do {
    iVar2 = *(int *)(iVar1 + 0x5c8 + iVar3 * 8);
    if (iVar2 == 0) {
      return;
    }
    if (iVar2 == param_1) {
      FUN_4a1652c4(*(undefined4 *)(iVar3 * 8 + iVar1 + 0x5c8 + 4));
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x14);
  return;
}



// Address: 4a0407c0

void FUN_4a0407c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)PTR_DAT_4a0407f0;
  iVar3 = 0;
  do {
    iVar2 = *(int *)(iVar1 + 0x5c8 + iVar3 * 8);
    if (iVar2 == 0) {
      return;
    }
    if (iVar2 == param_1) {
      FUN_4a1652c4(*(undefined4 *)(iVar3 * 8 + iVar1 + 0x5c8 + 4));
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x14);
  return;
}



// Address: 4a040850

void FUN_4a040850(int param_1,undefined4 param_2,int param_3,undefined1 *param_4,undefined4 param_5)

{
  uint uVar1;
  undefined1 auStack_3c [20];
  undefined1 local_28;
  int iStack_24;
  undefined4 local_20;
  int iStack_1c;
  undefined1 *puStack_18;
  
  iStack_24 = param_1;
  local_20 = param_2;
  iStack_1c = param_3;
  puStack_18 = param_4;
  uVar1 = FUN_4a0013e0(param_4);
  if (0x16 < uVar1) {
    thunk_FUN_4a001368(auStack_3c,param_4,0x14);
    local_28 = 0;
    FUN_4a001538(auStack_3c,&DAT_4a0408a4);
    uVar1 = 0x16;
    param_4 = auStack_3c;
  }
  FUN_4a1652ce(param_4,(param_1 + param_3) - uVar1 * *(int *)(*(int *)PTR_DAT_4a0408a8 + 0x24),
               local_20,param_5);
  return;
}



// Address: 4a0408b0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0408b0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  
  iVar9 = *(int *)(param_1 + 0xfc);
  iVar8 = *(int *)PTR_DAT_4a040a50;
  uVar3 = 0;
  if ((iVar9 < 0) || (*(int *)(param_1 + 0x14) == 3)) {
    iVar9 = (int)*(short *)(param_1 + 0xf8);
    if (iVar9 != 0) {
      param_1 = *(int *)(param_1 + 0x14);
    }
    if (iVar9 == 0 || param_1 == 3) {
      return;
    }
    uVar11 = FUN_4a0015f0(iVar9 << 0x12,*(int *)(iVar8 + 0x2cc) - *(int *)(iVar8 + 0x2c8));
    if ((int)uVar11 < 1) {
      uVar10 = 0;
      uVar3 = uVar11 + 0x10000;
      goto LAB_4a0409f0;
    }
    uVar3 = 0x10000;
  }
  else {
    if (iVar9 == 0) {
      uVar10 = 0;
      goto LAB_4a0409f0;
    }
    uVar11 = *(uint *)(iVar8 + 0x2c8);
    iVar1 = (int)uVar11 >> 0x1f;
    uVar3 = *(uint *)(iVar8 + 0x2cc);
    iVar2 = (int)uVar3 >> 0x1f;
    iVar7 = iVar2 - (iVar1 + (uint)(uVar3 < uVar11));
    iVar4 = FUN_4a00080c((uVar3 + uVar11) * 0x10000,
                         (iVar2 + iVar1 + (uint)CARRY4(uVar3,uVar11)) * 0x10000 |
                         uVar3 + uVar11 >> 0x10,uVar3 - uVar11,iVar7);
    lVar12 = (ulonglong)uVar3 * (ulonglong)(uVar11 * 2);
    lVar12 = FUN_4a00080c((int)lVar12,
                          uVar11 * 2 * iVar2 +
                          uVar3 * (iVar1 * 2 + (uint)CARRY4(uVar11,uVar11)) +
                          (int)((ulonglong)lVar12 >> 0x20),uVar3 - uVar11,iVar7);
    iVar9 = FUN_4a00080c((int)(lVar12 << 0x10),(int)((ulonglong)lVar12 >> 0x10),-iVar9,
                         -iVar9 >> 0x1f);
    uVar3 = iVar9 + iVar4 + 0x10000 >> 1;
    uVar11 = uVar3;
  }
  uVar10 = uVar11;
  if (0x7fffffff < uVar11) {
    return;
  }
LAB_4a0409f0:
  if ((*(uint *)(iVar8 + 0x5bc) & 0x40) == 0) {
    uVar10 = 0x10000 - uVar10;
    uVar3 = 0x10000 - uVar3;
  }
  if (*(int *)(iVar8 + 0xc) != 3) {
    FUN_4a154fcc(uVar10,uVar3);
    return;
  }
  uVar5 = FUN_4a171fac();
  uVar5 = FUN_4a17295c(uVar5,0xfffffff0);
  uVar6 = FUN_4a171fac(uVar10);
  uVar6 = FUN_4a17295c(uVar6,0xfffffff0);
  FUN_4a154f68(uVar6,uVar5);
  return;
}



// Address: 4a040a54

undefined8 FUN_4a040a54(uint *param_1)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  puVar2 = PTR_DAT_4a040ad0;
  iVar4 = *(int *)PTR_DAT_4a040ad0;
  while (*(int *)(iVar4 + 0x2c) < *(int *)(iVar4 + 0x18)) {
    iVar5 = *(int *)(iVar4 + 0x3c);
    if (*(int *)(puVar2 + 8) == 0) {
      *(uint *)(puVar2 + 8) = (uint)*(byte *)(iVar5 + *(int *)(puVar2 + 4));
      *(int *)(puVar2 + 4) = *(int *)(puVar2 + 4) + 1;
    }
    bVar1 = *(byte *)(iVar5 + *(int *)(puVar2 + 4));
    *(int *)(puVar2 + 4) = *(int *)(puVar2 + 4) + 1;
    *(int *)(puVar2 + 8) = *(int *)(puVar2 + 8) + -1;
    *(uint *)(iVar4 + 0x30) =
         *(uint *)(iVar4 + 0x30) | (uint)bVar1 << (*(uint *)(iVar4 + 0x2c) & 0xff);
    *(uint *)(iVar4 + 0x2c) = *(uint *)(iVar4 + 0x2c) + 8;
  }
  *param_1 = *(uint *)(iVar4 + 0x30) & *(uint *)(PTR_DAT_4a040ad4 + *(int *)(iVar4 + 0x18) * 4);
  uVar3 = *(uint *)(iVar4 + 0x18);
  *(uint *)(iVar4 + 0x30) = *(uint *)(iVar4 + 0x30) >> (uVar3 & 0xff);
  *(uint *)(iVar4 + 0x2c) = *(int *)(iVar4 + 0x2c) - uVar3;
  iVar5 = *(int *)(iVar4 + 0x14) + 1;
  *(int *)(iVar4 + 0x14) = iVar5;
  if ((*(int *)(iVar4 + 0x1c) < iVar5) && ((int)uVar3 < 0xc)) {
    *(uint *)(iVar4 + 0x18) = uVar3 + 1;
    *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) << 1;
    iVar4 = iVar4 + 0x20;
  }
  return CONCAT44(iVar4,1);
}



// Address: 4a040ad8

undefined8 FUN_4a040ad8(uint param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = PTR_DAT_4a040b6c;
  if (*(int *)PTR_DAT_4a040b6c == 0) {
    uVar2 = FUN_4a161570(DAT_4a040b70);
    *(undefined4 *)puVar1 = uVar2;
  }
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  iVar3 = *(int *)puVar1;
  iVar5 = 1 << (param_1 & 0xff);
  *(undefined4 *)(iVar3 + 0x3c) = param_2;
  *(uint *)(iVar3 + 8) = param_1;
  *(int *)(iVar3 + 0xc) = iVar5;
  *(int *)(iVar3 + 0x10) = iVar5 + 1;
  *(uint *)(iVar3 + 0x18) = param_1 + 1;
  *(int *)(iVar3 + 0x14) = iVar5 + 2;
  *(int *)(iVar3 + 0x1c) = 1 << (param_1 + 1 & 0xff);
  iVar5 = DAT_4a040b74;
  *(undefined4 *)(iVar3 + 0x28) = 0;
  *(undefined4 *)(iVar3 + 0x2c) = 0;
  *(int *)(iVar3 + 0x20) = iVar5;
  *(undefined4 *)(iVar3 + 0x30) = 0;
  iVar4 = 0;
  do {
    iVar6 = iVar4 * 4;
    iVar4 = iVar4 + 1;
    *(int *)(iVar3 + 0x2040 + iVar6) = iVar5;
    puVar1 = PTR_DAT_4a040b78;
  } while (iVar4 <= iVar5 + -3);
  *(undefined4 *)PTR_DAT_4a040b78 = 0;
  *(undefined4 *)(puVar1 + 4) = 1;
  *(undefined4 *)(puVar1 + 8) = 3;
  *(undefined4 *)(puVar1 + 0xc) = 7;
  *(undefined4 *)(puVar1 + 0x10) = 0xf;
  *(undefined4 *)(puVar1 + 0x14) = 0x1f;
  *(undefined4 *)(puVar1 + 0x18) = 0x3f;
  *(undefined4 *)(puVar1 + 0x1c) = 0x7f;
  *(undefined4 *)(puVar1 + 0x20) = 0xff;
  *(undefined4 *)(puVar1 + 0x24) = DAT_4a040b7c;
  *(undefined4 *)(puVar1 + 0x28) = DAT_4a040b80;
  *(undefined4 *)(puVar1 + 0x2c) = DAT_4a040b84;
  *(int *)(puVar1 + 0x30) = iVar5 + -3;
  return CONCAT44(puVar1 + 0x34,1);
}



// Address: 4a040b88

void FUN_4a040b88(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_4a040c40;
  thunk_FUN_4a161530(*(undefined4 *)(PTR_DAT_4a040c40 + 0x5c));
  *(undefined4 *)(puVar1 + 0x5c) = 0;
  thunk_FUN_4a161530(*(undefined4 *)(puVar1 + 0x58));
  *(undefined4 *)(puVar1 + 0x58) = 0;
  if (*(int **)(puVar1 + 0x54) != (int *)0x0) {
    (**(code **)(**(int **)(puVar1 + 0x54) + 4))();
  }
  *(undefined4 *)(puVar1 + 0x54) = 0;
  if (*(int **)(puVar1 + 0x50) != (int *)0x0) {
    (**(code **)(**(int **)(puVar1 + 0x50) + 4))();
  }
  *(undefined4 *)(puVar1 + 0x50) = 0;
  thunk_FUN_4a14fcc4(0x84c0);
  FUN_4a0486c0();
  FUN_4a150618(0x1702);
  FUN_4a1504dc();
  thunk_FUN_4a15010c(0x8076);
  thunk_FUN_4a14fcc4(0x84c1);
  FUN_4a0486c0();
  FUN_4a150618(0x1702);
  FUN_4a1504dc();
  FUN_4a155348(0x8076);
  return;
}



// Address: 4a040c44

void FUN_4a040c44(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_4a040c74;
  thunk_FUN_4a161530(*(undefined4 *)(PTR_LAB_4a040c74 + 0xb0));
  *(undefined4 *)(puVar1 + 0xb0) = 0;
  puVar1 = PTR_DAT_4a040c78;
  FUN_4a14f21c(*(undefined4 *)(PTR_DAT_4a040c78 + 0x34));
  *(undefined4 *)(puVar1 + 0x34) = 0;
  return;
}



// Address: 4a040c7c

void FUN_4a040c7c(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_4a040cc8;
  if ((*(int *)(PTR_DAT_4a040cc8 + 4) != 0) && (*(int *)(*(int *)PTR_DAT_4a040cc4 + 0x10) != 0)) {
    if (param_3 == -1) {
      param_3 = FUN_4a05708c(param_2);
    }
    FUN_4a09d6c2(*(undefined4 *)(puVar1 + 8),param_1);
    FUN_4a09cf5c(*(undefined4 *)(puVar1 + 8),param_2,param_3);
  }
  return;
}



// Address: 4a040ccc

void FUN_4a040ccc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)PTR_DAT_4a040d18;
  *(int *)(iVar4 + 0x3ec) = param_2;
  *(int *)(iVar4 + 0x3f0) = param_1;
  iVar3 = *(int *)(iVar4 + 0x32c) * param_2 >> 0xc;
  iVar1 = (*(int *)(iVar4 + 0x32c) * param_1 >> 0xc) * 0x40;
  *(int *)(iVar4 + 0x3f8) = iVar3 * 0x40;
  *(int *)(iVar4 + 0x3fc) = iVar1;
  if (iVar1 + iVar3 * -0x40 != 0) {
    uVar2 = thunk_FUN_4a0066d8(0x1000000,iVar1 + iVar3 * -0x40);
    *(undefined4 *)(iVar4 + 0x400) = uVar2;
  }
  return;
}



// Address: 4a040d20

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a040d20(uint param_1)

{
  undefined *puVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  
  puVar1 = PTR_DAT_4a0475ac;
  iVar5 = *(int *)PTR_DAT_4a040d60;
  if (*(int *)(iVar5 + 0x35c) != 0) {
    if (*(int *)(iVar5 + 0x35c) == -1) {
      if (*(uint *)(iVar5 + 0x354) != param_1) {
        *(uint *)(iVar5 + 0x35c) = param_1 + 1;
      }
      return;
    }
    return;
  }
  if (*(uint *)(iVar5 + 0x354) == param_1) {
    return;
  }
  puVar3 = *(uint **)PTR_DAT_4a0475ac;
  if (puVar3[0x19f] == 0) {
    puVar3[0xd6] = param_1;
  }
  if (puVar3[0xd5] == param_1) {
    return;
  }
  if ((*puVar3 & 0x400) == 0) {
    thunk_FUN_4a05a68c();
  }
  iVar5 = *(int *)puVar1;
  *(uint *)(iVar5 + 0x354) = param_1;
  if ((param_1 & 1) == 0) {
    *(undefined4 *)(iVar5 + 0x344) = *(undefined4 *)(iVar5 + 0x33c);
    iVar6 = *(int *)(iVar5 + 0x340);
  }
  else {
    *(undefined4 *)(iVar5 + 0x344) = *(undefined4 *)(iVar5 + 0x340);
    iVar6 = *(int *)(iVar5 + 0x33c);
  }
  *(int *)(iVar5 + 0x348) = iVar6;
  puVar1 = PTR_DAT_4a03b170;
  iVar8 = *(int *)(iVar5 + 0x344);
  iVar7 = *(int *)PTR_DAT_4a03b170;
  iVar5 = iVar6 * 4;
  bVar12 = *(int *)(iVar7 + 0x34c) == iVar8;
  iVar2 = iVar5;
  if (bVar12) {
    iVar2 = *(int *)(iVar7 + 0x350);
  }
  bVar13 = bVar12 && iVar2 == iVar6;
  if (bVar12 && iVar2 == iVar6) {
    bVar13 = *(int *)(iVar7 + 0x318) == iVar8 * 4;
  }
  bVar12 = false;
  if (bVar13) {
    bVar12 = *(int *)(iVar7 + 0x31c) == iVar5;
  }
  if (bVar12) {
    return;
  }
  if (*(int *)(PTR_DAT_4a03b174 + 0x28) != 0 && *(int *)(iVar7 + 0x34c) != 0) {
    FUN_4a05a618();
  }
  iVar2 = *(int *)puVar1;
  *(int *)(iVar2 + 0x318) = iVar8 * 4;
  *(int *)(iVar2 + 0x31c) = iVar5;
  *(int *)(iVar2 + 0x34c) = iVar8;
  *(int *)(iVar2 + 0x350) = iVar6;
  iVar2 = *(int *)PTR_DAT_4a04d43c;
  iVar7 = *(int *)(iVar2 + 0x34c);
  iVar5 = *(int *)(iVar2 + 0x350);
  iVar8 = *(int *)(iVar2 + 0x354);
  iVar6 = iVar7;
  if (iVar8 == 0) {
    *(undefined4 *)(iVar2 + 800) = *(undefined4 *)(iVar2 + 0x318);
    iVar7 = *(int *)(iVar2 + 0x31c);
  }
  else {
    if (iVar8 == 1) {
      *(int *)(iVar2 + 800) = *(int *)(iVar2 + 0x33c) * 8 - *(int *)(iVar2 + 0x31c);
      *(undefined4 *)(iVar2 + 0x324) = *(undefined4 *)(iVar2 + 0x318);
      iVar6 = iVar5;
      iVar5 = iVar7;
      goto LAB_4a047eac;
    }
    if (iVar8 != 2) {
      if (iVar8 == 3) {
        *(undefined4 *)(iVar2 + 800) = *(undefined4 *)(iVar2 + 0x31c);
        *(int *)(iVar2 + 0x324) = *(int *)(iVar2 + 0x340) * 8 - *(int *)(iVar2 + 0x318);
        iVar6 = iVar5;
        iVar5 = iVar7;
      }
      goto LAB_4a047eac;
    }
    *(int *)(iVar2 + 800) = *(int *)(iVar2 + 0x33c) * 8 - *(int *)(iVar2 + 0x318);
    iVar7 = *(int *)(iVar2 + 0x340) * 8 - *(int *)(iVar2 + 0x31c);
  }
  *(int *)(iVar2 + 0x324) = iVar7;
LAB_4a047eac:
  iVar7 = *(int *)(iVar2 + 0x324) >> (*(uint *)(iVar2 + 0x66c) & 0xff);
  iVar5 = iVar5 >> (*(uint *)(iVar2 + 0x66c) & 0xff);
  iVar8 = iVar7 + iVar5 * -4;
  *(int *)(iVar2 + 0x328) = iVar7;
  iVar7 = iVar7 + iVar5 * 4;
  *(int *)(iVar2 + 0x2e8) = iVar8;
  *(int *)(iVar2 + 0x2ec) = iVar7;
  *(int *)(iVar2 + 0x2f0) = *(int *)(iVar2 + 800) + iVar6 * -4;
  *(int *)(iVar2 + 0x2f4) = *(int *)(iVar2 + 800) + iVar6 * 4;
  *(short *)(iVar2 + 0x2f8) = (short)((uint)(*(int *)(iVar2 + 0x2f0) << 0xd) >> 0x10);
  *(short *)(iVar2 + 0x2fa) = (short)((uint)(iVar8 * 0x2000) >> 0x10);
  *(short *)(iVar2 + 0x2fc) =
       (short)((*(int *)(iVar2 + 0x2f4) - *(int *)(iVar2 + 0x2f0) & 0xfff8ffffU) >> 3);
  *(short *)(iVar2 + 0x2fe) = (short)((iVar7 - iVar8 & 0xfff8ffffU) >> 3);
  iVar2 = *(int *)PTR_DAT_4a048034;
  iVar5 = *(int *)(iVar2 + 0x34c);
  iVar6 = *(int *)(iVar2 + 0x350);
  if ((*(uint *)(iVar2 + 0x354) & 1) == 0) {
    iVar6 = iVar6 >> (*(uint *)(iVar2 + 0x66c) & 0xff);
  }
  else {
    iVar5 = iVar5 >> (*(uint *)(iVar2 + 0x66c) & 0xff);
  }
  uVar4 = FUN_4a0015f0(0x1000000,iVar5 << 5);
  *(undefined4 *)(iVar2 + 0x330) = uVar4;
  iVar7 = FUN_4a0015f0(0x1000000,iVar6 << 5);
  *(int *)(iVar2 + 0x334) = iVar7;
  if ((*(uint *)(iVar2 + 0x354) & 1) == 0) {
    *(int *)(iVar2 + 0x334) = iVar7 >> (*(uint *)(iVar2 + 0x66c) & 0xff);
  }
  else {
    *(int *)(iVar2 + 0x330) = *(int *)(iVar2 + 0x330) >> (*(uint *)(iVar2 + 0x66c) & 0xff);
  }
  uVar4 = FUN_4a0015f0(0x40000,*(undefined4 *)(iVar2 + 0x2dc));
  *(undefined4 *)(iVar2 + 0x32c) = uVar4;
  iVar7 = FUN_4a02afd0(*(int *)(iVar2 + 0x2dc) * *(int *)(iVar2 + 0x2dc) +
                       ((int)(iVar5 * iVar5 + ((uint)(iVar5 * iVar5 >> 0x1f) >> 0x1e)) >> 2));
  *(int *)(iVar2 + 0x2e0) = iVar7 >> 6;
  iVar7 = FUN_4a02afd0(*(int *)(iVar2 + 0x2dc) * *(int *)(iVar2 + 0x2dc) +
                       ((int)(iVar6 * iVar6 + ((uint)(iVar6 * iVar6 >> 0x1f) >> 0x1e)) >> 2));
  uVar4 = *(undefined4 *)(iVar2 + 0x2dc);
  iVar8 = FUN_4a0015f0(*(int *)(iVar2 + 0x2e0) << 0xc,uVar4);
  iVar7 = FUN_4a0015f0((iVar7 >> 6) << 0xc,uVar4);
  *(int *)(iVar2 + 0x2e0) = iVar8 * *(int *)(iVar2 + 0x330) >> 0xc;
  *(int *)(iVar2 + 0x2e4) = *(int *)(iVar2 + 0x334) * iVar7 >> 0xc;
  *(int *)(iVar2 + 0x314) = iVar6 * 8 + -1;
  *(int *)(iVar2 + 0x310) = iVar5 * 8 + -1;
  iVar6 = *(int *)(iVar2 + 0x2c8);
  iVar5 = iVar6 * *(int *)(iVar2 + 0x32c) >> 0xc;
  *(int *)(iVar2 + 0x2d0) = iVar5;
  if (iVar5 < 6) {
    iVar5 = 5;
  }
  *(int *)(iVar2 + 0x2d0) = iVar5;
  iVar10 = *(int *)(iVar2 + 0x2cc);
  iVar7 = iVar10 * *(int *)(iVar2 + 0x32c) >> 0xc;
  iVar5 = iVar7 - iVar5;
  *(int *)(iVar2 + 0x2d4) = iVar7;
  uVar4 = FUN_4a0015f0((iVar10 - iVar6) * 0x1000,iVar5 * 0x40);
  *(undefined4 *)(iVar2 + 0x3c8) = uVar4;
  uVar4 = FUN_4a0015f0(iVar5 * 0x8000,iVar10 - iVar6);
  *(undefined4 *)(iVar2 + 0x3d0) = uVar4;
  iVar9 = *(int *)PTR_DAT_4a03ebbc;
  iVar8 = *(int *)(iVar9 + 0x32c);
  iVar7 = *(int *)(iVar9 + 0x3ac);
  iVar5 = iVar8 * iVar6 >> 0xc;
  iVar2 = iVar8 * iVar10 >> 0xc;
  if (iVar5 < 5) {
    iVar5 = 5;
  }
  iVar11 = *(int *)(iVar9 + 0x3e0);
  if (*(uint *)(iVar9 + 1000) != 0xffffffff) {
    iVar7 = iVar2 >> (*(uint *)(iVar9 + 1000) & 0xff);
  }
  if (iVar11 == 0) {
    iVar11 = *(int *)(iVar9 + 0x3e4);
    if (*(int *)(iVar9 + 0x2cc) + iVar11 != *(int *)(iVar9 + 0x2c8)) {
      uVar4 = FUN_4a0015f0(iVar7 << 0xc,((iVar2 + (iVar11 * iVar8 >> 0xc)) - iVar5) * 0x40);
      *(undefined4 *)(iVar9 + 0x3cc) = uVar4;
      uVar4 = FUN_4a0015f0(iVar7 << 0xc,(iVar10 + iVar11) - iVar6);
      *(undefined4 *)(iVar9 + 0x3d4) = uVar4;
    }
    if (iVar7 != 0) {
      uVar4 = FUN_4a0015f0(((iVar2 + (iVar11 * *(int *)(iVar9 + 0x32c) >> 0xc)) - iVar5) * 0x8000,
                           iVar7);
      *(undefined4 *)(iVar9 + 0x3d8) = uVar4;
      uVar4 = FUN_4a0015f0(((iVar10 + iVar11) - iVar6) * 0x1000,iVar7);
      *(undefined4 *)(iVar9 + 0x3dc) = uVar4;
    }
  }
  else {
    iVar8 = iVar7 - iVar11;
    uVar4 = FUN_4a0015f0(iVar8 * 0x1000,(iVar2 - iVar5) * 0x40);
    *(undefined4 *)(iVar9 + 0x3cc) = uVar4;
    uVar4 = FUN_4a0015f0(iVar8 * 0x1000,iVar10 - iVar6);
    *(undefined4 *)(iVar9 + 0x3d4) = uVar4;
    if (iVar7 != iVar11) {
      uVar4 = FUN_4a0015f0((iVar2 - iVar5) * 0x8000,iVar8);
      *(undefined4 *)(iVar9 + 0x3d8) = uVar4;
      uVar4 = FUN_4a0015f0((iVar10 - iVar6) * 0x1000,iVar8);
      *(undefined4 *)(iVar9 + 0x3dc) = uVar4;
    }
  }
  if (*(int *)(iVar9 + 0x3cc) != 0) {
    iVar6 = FUN_4a0015f0(iVar7 << 0xc);
    *(int *)(iVar9 + 0x2d8) = iVar6 + iVar5 * 0x40 >> 6;
    return;
  }
  *(int *)(iVar9 + 0x2d8) = iVar2;
  return;
}



// Address: 4a040d64

void FUN_4a040d64(void)

{
  short sVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  short sStack_20;
  short sStack_1e;
  short sStack_1c;
  short sStack_1a;
  
  puVar8 = PTR_DAT_4a040e90;
  puVar2 = PTR_DAT_4a040e8c;
  if (*PTR_DAT_4a040e8c == '\0') {
    return;
  }
  iVar5 = *(int *)PTR_DAT_4a040e90;
  *(int *)(iVar5 + 0x388) = *(int *)(iVar5 + 0x38c);
  *(int *)(iVar5 + 0x38c) = *(int *)(iVar5 + 0x38c) + 0x58;
  iVar5 = FUN_4a069e28();
  *(undefined4 *)(iVar5 + 0x2c) = *(undefined4 *)(puVar2 + 4);
  *(uint *)(iVar5 + 0x10) = *(uint *)(iVar5 + 0x10) & 0xfff8fffc | 0x10006;
  FUN_4a0361cc();
  iVar10 = *(int *)(*(int *)puVar8 + 0x344);
  iVar11 = *(int *)(*(int *)puVar8 + 0x348);
  iVar5 = 1;
  do {
    do {
      iVar9 = iVar5;
      iVar5 = iVar9 * 2;
    } while (iVar5 < (int)(((uint)(iVar10 >> 0x1f) >> 0x1d) + iVar10) >> 3);
  } while (iVar5 < (int)(((uint)(iVar11 >> 0x1f) >> 0x1d) + iVar11) >> 3);
  sVar1 = (short)iVar9;
  uVar3 = *(uint *)(PTR_DAT_4a040e8c + 0x10) + DAT_4a040e94;
  uVar6 = *(int *)(PTR_DAT_4a040e8c + 0x14) +
          (uint)CARRY4(*(uint *)(PTR_DAT_4a040e8c + 0x10),DAT_4a040e94);
  sStack_1c = sVar1;
  sStack_1a = sVar1;
  uVar12 = host_s3eTimerGetMs_thumb(uVar3,uVar6,&sStack_20);
  puVar2 = PTR_DAT_4a040e8c;
  uVar7 = (uint)((ulonglong)uVar12 >> 0x20);
  uVar4 = (uint)uVar12;
  puVar8 = (undefined *)(uVar3 - uVar4);
  if (uVar6 <= uVar7 && (uint)(uVar4 <= uVar3) <= uVar6 - uVar7) {
    iVar5 = (*(int *)(PTR_DAT_4a040e8c + 8) + 1) % 4;
    *(int *)(PTR_DAT_4a040e8c + 8) = iVar5;
    uVar12 = host_s3eTimerGetMs_thumb(puVar2,iVar5,puVar8,(uVar6 - uVar7) - (uint)(uVar4 > uVar3));
    puVar8 = PTR_DAT_4a040e8c;
    *(undefined8 *)(PTR_DAT_4a040e8c + 0x10) = uVar12;
    puVar8 = puVar8 + 0x18;
  }
  iVar5 = *(int *)(PTR_DAT_4a040e8c + 8);
  if (iVar5 == 0) {
    sStack_20 = 0;
  }
  else {
    if (iVar5 != 1) {
      if (iVar5 == 2) {
        sStack_20 = (short)iVar10 - sVar1;
        sStack_1e = (short)iVar11 - sVar1;
      }
      else if (iVar5 == 3) {
        sStack_1e = (short)iVar11 - sVar1;
        sStack_20 = 0;
      }
      goto LAB_4a040e4e;
    }
    sStack_20 = (short)iVar10 - sVar1;
  }
  sStack_1e = 0;
LAB_4a040e4e:
  thunk_FUN_4a048e6c(&sStack_20,&sStack_1c,puVar8);
  thunk_FUN_4a05a618();
  return;
}



// Address: 4a040d6c

void FUN_4a040d6c(void)

{
  short sVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  
  puVar8 = PTR_DAT_4a040e90;
  puVar2 = PTR_DAT_4a040e8c;
  if (*PTR_DAT_4a040e8c == '\0') {
    return;
  }
  iVar5 = *(int *)PTR_DAT_4a040e90;
  *(int *)(iVar5 + 0x388) = *(int *)(iVar5 + 0x38c);
  *(int *)(iVar5 + 0x38c) = *(int *)(iVar5 + 0x38c) + 0x58;
  iVar5 = FUN_4a069e28();
  *(undefined4 *)(iVar5 + 0x2c) = *(undefined4 *)(puVar2 + 4);
  *(uint *)(iVar5 + 0x10) = *(uint *)(iVar5 + 0x10) & 0xfff8fffc | 0x10006;
  FUN_4a0361cc();
  iVar10 = *(int *)(*(int *)puVar8 + 0x344);
  iVar11 = *(int *)(*(int *)puVar8 + 0x348);
  iVar5 = 1;
  do {
    do {
      iVar9 = iVar5;
      iVar5 = iVar9 * 2;
    } while (iVar5 < (int)(((uint)(iVar10 >> 0x1f) >> 0x1d) + iVar10) >> 3);
  } while (iVar5 < (int)(((uint)(iVar11 >> 0x1f) >> 0x1d) + iVar11) >> 3);
  sVar1 = (short)iVar9;
  uVar3 = *(uint *)(PTR_DAT_4a040e8c + 0x10) + DAT_4a040e94;
  uVar6 = *(int *)(PTR_DAT_4a040e8c + 0x14) +
          (uint)CARRY4(*(uint *)(PTR_DAT_4a040e8c + 0x10),DAT_4a040e94);
  local_1c = sVar1;
  local_1a = sVar1;
  uVar12 = host_s3eTimerGetMs_thumb(uVar3,uVar6,&local_20);
  puVar2 = PTR_DAT_4a040e8c;
  uVar7 = (uint)((ulonglong)uVar12 >> 0x20);
  uVar4 = (uint)uVar12;
  puVar8 = (undefined *)(uVar3 - uVar4);
  if (uVar6 <= uVar7 && (uint)(uVar4 <= uVar3) <= uVar6 - uVar7) {
    iVar5 = (*(int *)(PTR_DAT_4a040e8c + 8) + 1) % 4;
    *(int *)(PTR_DAT_4a040e8c + 8) = iVar5;
    uVar12 = host_s3eTimerGetMs_thumb(puVar2,iVar5,puVar8,(uVar6 - uVar7) - (uint)(uVar4 > uVar3));
    puVar8 = PTR_DAT_4a040e8c;
    *(undefined8 *)(PTR_DAT_4a040e8c + 0x10) = uVar12;
    puVar8 = puVar8 + 0x18;
  }
  iVar5 = *(int *)(PTR_DAT_4a040e8c + 8);
  if (iVar5 == 0) {
    local_20 = 0;
  }
  else {
    if (iVar5 != 1) {
      if (iVar5 == 2) {
        local_20 = (short)iVar10 - sVar1;
        local_1e = (short)iVar11 - sVar1;
      }
      else if (iVar5 == 3) {
        local_1e = (short)iVar11 - sVar1;
        local_20 = 0;
      }
      goto LAB_4a040e4e;
    }
    local_20 = (short)iVar10 - sVar1;
  }
  local_1e = 0;
LAB_4a040e4e:
  thunk_FUN_4a048e6c(&local_20,&local_1c,puVar8);
  thunk_FUN_4a05a618();
  return;
}



// Address: 4a040e98

void FUN_4a040e98(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ushort *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iStack_2c;
  
  puVar2 = PTR_DAT_4a03ba88;
  if (*(int *)PTR_DAT_4a040eac == 0) {
    return;
  }
  iVar7 = *(int *)(*(int *)PTR_DAT_4a03ba84 + 0x34);
  iVar5 = *(int *)(*(int *)PTR_DAT_4a03ba84 + 0x38);
  if (*(int *)PTR_DAT_4a03ba88 == 0) {
    puVar6 = (ushort *)thunk_FUN_4a161570(0x10800);
    *(ushort **)puVar2 = puVar6;
  }
  else {
    puVar6 = *(ushort **)PTR_DAT_4a03ba88;
  }
  puVar3 = PTR_LAB_4a03ba90;
  puVar2 = PTR_DAT_4a03ba8c;
  iStack_2c = 0;
  do {
    uVar14 = iStack_2c << 4 | 0xf;
    iVar13 = 0;
    if ((**(uint **)PTR_DAT_4a03ba94 & 0x10000) == 0) {
      uVar14 = (int)uVar14 >> 1;
    }
    do {
      iVar8 = uVar14 * (iVar13 << 3 | 7U);
      if (iVar13 == 0) {
        iVar8 = 0;
LAB_4a03b950:
        uVar9 = iVar8 >> 0xb;
      }
      else {
        if (iVar8 < 0xff01) goto LAB_4a03b950;
        uVar9 = 0x1f;
      }
      iVar10 = 0x1f;
      bVar1 = *(byte *)(*(int *)(puVar3 + 0x48) +
                       (uint)((byte)puVar2[uVar9 | (iVar5 >> 1) << 5] >> 3)) >> 1;
      *puVar6 = (ushort)bVar1;
      iVar8 = 0;
      puVar11 = puVar6;
      do {
        puVar11 = puVar11 + 1;
        iVar12 = uVar14 * ((iVar8 + 1) * 8 | 7U);
        if (iVar12 < 0xff01) {
          uVar9 = iVar12 >> 5 & 0x7e0;
        }
        else {
          uVar9 = 0x7e0;
        }
        iVar10 = iVar10 + -1;
        iVar8 = iVar8 + 1;
        *puVar11 = (ushort)bVar1 |
                   (ushort)*(byte *)(*(int *)(puVar3 + 0x48) +
                                    (uint)((byte)puVar2[(iVar7 >> 1) << 5 | (int)uVar9 >> 6] >> 3))
                   << 5;
        puVar4 = PTR_DAT_4a03ba94;
      } while (iVar10 != 0);
      iVar13 = iVar13 + 1;
      puVar6 = puVar6 + 0x20;
    } while (iVar13 < 0x20);
    iStack_2c = iStack_2c + 1;
  } while (iStack_2c < 0x20);
  iVar7 = 0;
  iVar5 = *(int *)(*(int *)PTR_DAT_4a03ba84 + 0x30);
  do {
    uVar14 = iVar7 << 4 | 0xf;
    iVar13 = 0x20;
    if ((**(uint **)puVar4 & 0x10000) == 0) {
      uVar14 = (int)uVar14 >> 1;
    }
    iVar8 = 0;
    puVar11 = puVar6;
    do {
      iVar10 = uVar14 * (iVar8 << 3 | 7U);
      if (iVar8 == 0) {
        iVar10 = 0;
LAB_4a03ba3c:
        uVar9 = iVar10 >> 0xb;
      }
      else {
        if (iVar10 < 0xff01) goto LAB_4a03ba3c;
        uVar9 = 0x1f;
      }
      iVar13 = iVar13 + -1;
      iVar8 = iVar8 + 1;
      *puVar11 = (ushort)(*(byte *)(*(int *)(puVar3 + 0x48) +
                                   (uint)((byte)puVar2[uVar9 | (iVar5 >> 1) << 5] >> 3)) >> 1) <<
                 0xb;
      puVar11 = puVar11 + 1;
    } while (iVar13 != 0);
    iVar7 = iVar7 + 1;
    puVar6 = puVar6 + 0x20;
    if (0x1f < iVar7) {
      return;
    }
  } while( true );
}



// Address: 4a040eb0

undefined4 FUN_4a040eb0(void)

{
  FUN_4a056f2c();
  return 0x80000000;
}



// Address: 4a040ec4

void FUN_4a040ec4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int in_r3;
  int local_10;
  
  local_10 = in_r3;
  iVar3 = host_s3eConfigGetInt_arm(&DAT_4a040f60,s_UseEnvMap_4a040f54,&local_10);
  puVar2 = PTR_LAB_4a040f68;
  puVar1 = PTR_DAT_4a040f64;
  if (iVar3 != 0 || local_10 != 0) {
    *(undefined4 *)(PTR_DAT_4a040f64 + 0x1c) = *(undefined4 *)(PTR_LAB_4a040f68 + 0x2c);
    *(undefined4 *)(puVar1 + 0x18) = *(undefined4 *)(puVar2 + 0x30);
    *(undefined4 *)(puVar1 + 0x14) = *(undefined4 *)(puVar2 + 0x38);
    if (*(int *)(puVar1 + 0xc) == 0) {
      uVar4 = thunk_FUN_4a161570(0x10000);
      *(undefined4 *)(puVar1 + 0xc) = uVar4;
    }
    FUN_4a14adec(*(undefined4 *)(puVar1 + 0xc),*(undefined4 *)(puVar1 + 0x1c),
                 *(undefined4 *)(puVar1 + 0x18),*(undefined4 *)(puVar1 + 0x14));
    *(undefined4 *)(puVar1 + 0x10) = 1;
    *(undefined **)(puVar1 + 0x38) = PTR_FUN_4a040f6c;
  }
  *(uint *)(puVar1 + 0x20) = *(uint *)(puVar1 + 0x20) | 8;
  return;
}



// Address: 4a040f70

void FUN_4a040f70(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 auStack_2c [20];
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0;
  iVar3 = host_s3eConfigGetInt_arm(&DAT_4a041044,s_DisplayFrameRate_4a041030,&local_14);
  puVar2 = PTR_LAB_4a04104c;
  puVar1 = PTR_DAT_4a041048;
  if (iVar3 == 0) {
    *(undefined4 *)(PTR_DAT_4a041048 + 4) = local_14;
  }
  puVar2[0x45] = 0;
  local_18 = 0;
  iVar3 = host_s3eConfigGetInt_arm(&DAT_4a041044,s_Force4BitGouraudDither_4a041050,&local_18);
  if (iVar3 == 0) {
    puVar2[0x45] = (char)local_18;
  }
  *(undefined4 *)(puVar2 + 0xb0) = 0;
  *(undefined4 *)(puVar1 + 8) = 1;
  thunk_FUN_4a03be0c(auStack_2c);
  FUN_4a03f8d4(auStack_2c);
  FUN_4a09e4a8();
  FUN_4a033628(8);
  FUN_4a03b8ac();
  FUN_4a00b72c();
  FUN_4a01d45c();
  puVar2[0x44] = 0;
  *(undefined4 *)(puVar2 + 0xc) = 0;
  if (*(code **)(puVar1 + 0x28) != (code *)0x0) {
    (**(code **)(puVar1 + 0x28))();
  }
  if (*(code **)(puVar1 + 0x24) != (code *)0x0) {
    (**(code **)(puVar1 + 0x24))();
  }
  return;
}



// Address: 4a041068

void FUN_4a041068(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  void *ctx;
  void *read;
  void *draw;
  void *dpy;
  
  puVar1 = PTR_DAT_4a04110c;
  *(undefined4 *)(PTR_DAT_4a04110c + 0xc) = 0;
  host_s3eDeviceYield_arm(0x80000000);
  iVar3 = FUN_4a00ab98();
  puVar2 = PTR_DAT_4a041110;
  if (iVar3 != 0) {
    FUN_4a03511c();
    thunk_FUN_4a00b238();
    iVar3 = *(int *)puVar2;
    if (((*(uint *)(iVar3 + 0x5bc) & 8) == 0) && ((*(uint *)(iVar3 + 4) & 0x1000) != 0)) {
      ctx = (void *)FUN_4a00ab84();
      read = (void *)FUN_4a00abac();
      draw = (void *)FUN_4a00abac();
      dpy = (void *)FUN_4a00ab98();
      host_eglMakeCurrent_arm(dpy,draw,read,ctx);
    }
  }
  FUN_4a04ca64();
  if (*puVar1 != '\0') {
    FUN_4a00dbe4();
  }
  if ((*(uint *)(*(int *)puVar2 + 0x5bc) & 0x2000) == 0) {
    puVar1[3] = 1;
  }
  return;
}



// Address: 4a041114

undefined4 FUN_4a041114(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_4a03d39c();
  if (((iVar1 == 0) && (param_1 != DAT_4a041138)) && (param_1 != DAT_4a041138 + -0xfa)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// Address: 4a04113c

void FUN_4a04113c(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  puVar1 = PTR_DAT_4a0411e0;
  local_10 = *(undefined4 *)(param_1 + 8);
  local_c = *(undefined4 *)(param_1 + 0xc);
  if (*(int *)(param_1 + 4) != 0) {
    FUN_4a0bc060(*(undefined4 *)PTR_DAT_4a0411dc,&local_10,&local_c);
    piVar2 = *(int **)(puVar1 + 0x8c);
    (**(code **)(*piVar2 + 0x2c))(piVar2,local_10,local_c,0,1);
    return;
  }
  FUN_4a0bc060(*(undefined4 *)PTR_DAT_4a0411dc,&local_10,&local_c);
  piVar2 = *(int **)(puVar1 + 0x8c);
  (**(code **)(*piVar2 + 0x30))(piVar2,local_10,local_c,0);
  return;
}



// Address: 4a0411e4

void FUN_4a0411e4(undefined4 *param_1)

{
  undefined4 local_c;
  undefined4 local_8 [2];
  
  local_c = *param_1;
  local_8[0] = param_1[1];
  FUN_4a0bc060(*(undefined4 *)PTR_DAT_4a04123c,&local_c,local_8);
  (**(code **)(**(int **)(PTR_DAT_4a041240 + 0x8c) + 0x28))
            (*(int **)(PTR_DAT_4a041240 + 0x8c),local_c,local_8[0],0);
  return;
}



// Address: 4a041244

void FUN_4a041244(void)

{
  thunk_FUN_4a161570(0x58);
  FUN_4a069e28();
  return;
}



// Address: 4a041256

void FUN_4a041256(void)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_4a161570(0xfc);
  FUN_4a06a454(uVar1,0);
  return;
}



// Address: 4a04126a

undefined4 FUN_4a04126a(void)

{
  return 0x58;
}



// Address: 4a04126e

undefined4 FUN_4a04126e(void)

{
  return 0xfc;
}



// Address: 4a041274

uint FUN_4a041274(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = (uint)(param_2 != DAT_4a041414);
  do {
    iVar2 = thunk_FUN_4a1652fc(0);
    uVar6 = iVar2 + 9U >> 0x10;
    if ((*(int *)(*(int *)(param_1 + 0xc) + 0x2c) == 0) || (*(int *)(param_1 + 0x148) == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar5 = uVar5 | 1 << (uVar6 & 0xff);
    }
  } while (uVar6 + 1 < 0x10);
  if ((**(int **)PTR_DAT_4a041418 << 0x16 < 0) &&
     (iVar2 = FUN_4a069984(*(undefined4 *)(param_1 + 0xc)), iVar2 != 2)) {
    uVar5 = uVar5 | *(uint *)(param_1 + 0x10) & 0x7800;
    if ((*(int *)(param_1 + 0x134) == 0) || ((*(uint *)(param_1 + 0x10) & 0x7fff) >> 0xd == 0)) {
      uVar5 = uVar5 & 0xffff9fff;
    }
    else {
      uVar5 = uVar5 | 0x10;
    }
  }
  if (((*(int *)(param_1 + 0x10) << 0x10 < 0) && (*(int *)(param_1 + 0x14) != 3)) &&
     (-1 < *(int *)(*(int *)(param_1 + 0xc) + 0x10) << 0x15)) {
    uVar5 = uVar5 | 0x8000;
  }
  uVar6 = (*(int **)PTR_DAT_4a041418)[0x16d];
  if (1 < uVar6) {
    uVar6 = 2;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  uVar4 = *(uint *)(iVar2 + 0x10);
  if (((uVar4 & 0x1ffffff) >> 0x16 == 7) ||
     ((*(int *)(iVar2 + 0x54) != 0 && (**(int **)PTR_DAT_4a041418 << 8 < 0)))) {
    uVar5 = uVar5 & 0xfffffffb;
    uVar6 = 1;
  }
  if ((uVar5 & 1) == 0) goto LAB_4a0413f2;
  for (uVar3 = 0; uVar3 < uVar6; uVar3 = uVar3 + 1) {
    if (*(int *)(iVar2 + uVar3 * 4 + 0x2c) != 0) {
      uVar5 = uVar5 | 1 << (uVar3 + 0x10 & 0xff);
    }
  }
  uVar5 = (uVar4 & 0x1c00000) << 2 | (uVar4 & 0x380000) >> 1 | uVar5;
  uVar6 = (uVar4 & 0x1fffffff) >> 0x19;
  if (uVar6 == 0) {
    iVar2 = FUN_4a069962();
    if (iVar2 != 0) {
      uVar6 = 5;
    }
LAB_4a0413d2:
    uVar5 = uVar5 | uVar6 << 0x15;
  }
  else if (uVar6 < 8) goto LAB_4a0413d2;
  if (-1 < *(int *)(*(int *)PTR_DAT_4a041418 + 0x5bc) << 0x15) {
    uVar5 = uVar5 | ((*(uint *)(*(int *)(param_1 + 0xc) + 0x10) & 0x7ffff) >> 0x10) << 0x1c;
  }
LAB_4a0413f2:
  uVar6 = uVar5;
  if ((((~uVar5 & 0x90) == 0) && (*(int *)(param_1 + 0x10) << 3 < 0)) &&
     (uVar6 = uVar5 | 0x200, *(int *)(param_1 + 0x10) << 2 < 0)) {
    uVar6 = uVar5 | 0x600;
  }
  return uVar6;
}



// Address: 4a04141c

void FUN_4a04141c(int param_1,undefined1 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_28;
  int iStack_24;
  undefined1 *puStack_20;
  undefined4 *puStack_1c;
  undefined4 *local_18;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x54);
  iStack_24 = param_1;
  puStack_20 = param_2;
  puStack_1c = param_3;
  local_18 = param_4;
  if (((iVar2 == 0) || (*(char *)(iVar2 + 0x38) == '\0')) || (**(int **)PTR_DAT_4a041478 << 8 < 0))
  {
    FUN_4a0405c8(param_1,param_3,param_4);
    FUN_4a150d34(*param_3);
    *param_2 = 0;
  }
  else {
    local_28 = 0;
    FUN_4a0a5998(iVar2,param_1,&local_28,param_2);
    uVar1 = FUN_4a135c2c(local_28);
    *param_3 = uVar1;
    *local_18 = *(undefined4 *)(iVar2 + 0x34);
  }
  return;
}



// Address: 4a04147c

void FUN_4a04147c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  thunk_FUN_4a150ac4(DAT_4a0414a4,0,param_2,param_4,param_5,0,param_2,param_3,0);
  return;
}



// Address: 4a0414a8

/* WARNING: Removing unreachable block (ram,0x4a0414cc) */

void FUN_4a0414a8(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)thunk_FUN_4a161570(0x10);
  *puVar2 = 0;
  puVar2[2] = 0;
  *(byte *)(puVar2 + 3) = *(byte *)(puVar2 + 3) & 0xfc;
  puVar2[1] = 0;
  puVar1 = PTR_DAT_4a0414e4;
  puVar2[1] = 0;
  *(undefined4 **)puVar1 = puVar2;
  FUN_4a16e256(puVar2,param_1);
  return;
}



// Address: 4a0414e8

void FUN_4a0414e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  
  thunk_FUN_4a00121c(PTR_DAT_4a041598,0x120,param_3,param_4,param_4);
  puVar1 = PTR_DAT_4a041598;
  *(undefined4 *)(PTR_DAT_4a041598 + 8) = 0x40000000;
  *(undefined4 *)puVar1 = 0x18;
  *(undefined4 *)(puVar1 + 4) = 0x1c;
  *(undefined4 *)(puVar1 + 0x20) = 1;
  *(undefined4 *)(puVar1 + 0xc) = 3;
  *(undefined4 *)(puVar1 + 0x10) = 2;
  *(undefined4 *)(puVar1 + 0x48) = 0x28;
  *(undefined4 *)(puVar1 + 0x4c) = 0x30;
  *(undefined4 *)(puVar1 + 0x50) = 0x48000000;
  *(undefined4 *)(puVar1 + 0x68) = 2;
  *(undefined4 *)(puVar1 + 0x60) = 5;
  *(undefined4 *)(puVar1 + 0x54) = 4;
  *(undefined4 *)(puVar1 + 0x58) = 2;
  *(undefined4 *)(puVar1 + 0x5c) = 3;
  *(undefined4 *)(puVar1 + 0x2c) = 0x42000000;
  *(undefined4 *)(puVar1 + 0x44) = 2;
  *(undefined4 *)(puVar1 + 0x24) = 0x20;
  *(undefined4 *)(puVar1 + 0x28) = 0x28;
  *(undefined4 *)(puVar1 + 0x30) = 3;
  *(undefined4 *)(puVar1 + 0x34) = 2;
  *(undefined4 *)(puVar1 + 0x6c) = 0x30;
  *(code **)(puVar1 + 0x74) = host_glActiveTexture_thumb;
  *(undefined4 *)(puVar1 + 0x8c) = 3;
  *(undefined4 *)(puVar1 + 0x70) = 0x3c;
  *(undefined4 *)(puVar1 + 0x7c) = 3;
  *(undefined4 *)(puVar1 + 0x80) = 2;
  *(undefined4 *)(puVar1 + 0x84) = 5;
  *(undefined4 *)(puVar1 + 0x78) = 4;
  *(undefined4 *)(puVar1 + 0xe0) = 0x58000000;
  *(undefined4 *)(puVar1 + 0xd8) = 0x34;
  *(undefined4 *)(puVar1 + 0xf8) = 3;
  *(undefined4 *)(puVar1 + 0xdc) = 0x40;
  *(undefined4 *)(puVar1 + 0xf0) = 5;
  *(undefined4 *)(puVar1 + 0xe4) = 4;
  *(undefined4 *)(puVar1 + 0xe8) = 2;
  *(undefined4 *)(puVar1 + 0xec) = 3;
  *(undefined4 *)(puVar1 + 0xf4) = 6;
  *(undefined4 *)(puVar1 + 0x104) = 0x5a000000;
  *(undefined4 *)(puVar1 + 0xfc) = 0x3c;
  *(undefined4 *)(puVar1 + 0x108) = 4;
  *(undefined4 *)(puVar1 + 0x10c) = 3;
  *(undefined4 *)(puVar1 + 0x110) = 2;
  *(undefined4 *)(puVar1 + 0x114) = 5;
  *(undefined4 *)(puVar1 + 0x118) = 6;
  *(undefined4 *)(puVar1 + 0x100) = 0x4c;
  *(undefined4 *)(puVar1 + 0x11c) = 4;
  return;
}



// Address: 4a04159c

void FUN_4a04159c(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  
  iVar7 = *param_1;
  puVar6 = *(uint **)PTR_DAT_4a0417e8;
  if ((*puVar6 & 0x80000000) == 0) {
    uVar4 = puVar6[0xcc];
    uVar5 = puVar6[0xcd];
    *param_2 = (int)(iVar7 * uVar4) >> 6;
    param_2[3] = (int)(uVar4 * param_1[3]) >> 6;
    param_2[6] = (int)(uVar4 * param_1[6]) >> 6;
    param_2[1] = (int)(uVar5 * param_1[1]) >> 6;
    param_2[4] = (int)(uVar5 * param_1[4]) >> 6;
    param_2[7] = (int)(uVar5 * param_1[7]) >> 6;
    param_2[2] = (int)(puVar6[0xcb] * param_1[2]) >> 6;
    param_2[5] = (int)(puVar6[0xcb] * param_1[5]) >> 6;
    param_2[8] = (int)(puVar6[0xcb] * param_1[8]) >> 6;
    param_2[9] = (int)(param_1[9] * uVar4) >> 6;
    param_2[10] = (int)(uVar5 * param_1[10]) >> 6;
    param_2[0xb] = (int)(puVar6[0xcb] * param_1[0xb]) >> 6;
    return;
  }
  uVar4 = puVar6[0xc2];
  if ((uVar4 & 0xfff) == 0) {
    uVar4 = (int)uVar4 >> 0xc;
    uVar1 = 0x2000;
  }
  else {
    uVar1 = 0x2000000;
  }
  iVar2 = FUN_4a0015f0(uVar1,uVar4);
  uVar4 = puVar6[0xc3];
  if ((uVar4 & 0xfff) == 0) {
    uVar4 = (int)uVar4 >> 0xc;
    uVar1 = 0x2000;
  }
  else {
    uVar1 = 0x2000000;
  }
  iVar3 = FUN_4a0015f0(uVar1,uVar4);
  *param_2 = iVar7 * iVar2 >> 0xc;
  param_2[3] = iVar2 * param_1[3] >> 0xc;
  param_2[6] = iVar2 * param_1[6] >> 0xc;
  param_2[1] = iVar3 * param_1[1] >> 0xc;
  param_2[4] = iVar3 * param_1[4] >> 0xc;
  param_2[7] = iVar3 * param_1[7] >> 0xc;
  param_2[2] = (int)(puVar6[0xcb] * param_1[2]) >> 6;
  param_2[5] = (int)(puVar6[0xcb] * param_1[5]) >> 6;
  param_2[8] = (int)(puVar6[0xcb] * param_1[8]) >> 6;
  iVar7 = iVar2 * param_1[9] >> 0xc;
  param_2[9] = iVar7;
  iVar2 = param_1[10] * iVar3 >> 0xc;
  param_2[10] = iVar2;
  param_2[0xb] = (int)(puVar6[0xcb] * param_1[0xb]) >> 6;
  iVar3 = FUN_4a0015f0((puVar6[0xc0] + (int)puVar6[0xc2] / 2) * 0x2000);
  param_2[9] = iVar7 - iVar3;
  iVar7 = FUN_4a0015f0((puVar6[0xc1] + (int)puVar6[0xc3] / 2) * 0x2000);
  param_2[10] = iVar2 - iVar7;
  return;
}



// Address: 4a0417ec

void FUN_4a0417ec(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint local_1c;
  uint local_18;
  
  local_18 = (*(uint *)(param_1 + 0xc) & 0x3f) >> 5;
  local_1c = param_3;
  FUN_4a0365d4(&local_18,1,1,1,param_2);
  if ((char)local_18 != '\0') {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x20;
  }
  local_1c = *(uint *)(param_1 + 0x14);
  FUN_4a03c12c(&local_1c,1,0x20,4);
  FUN_4a16df8e(param_1 + 0x10,local_1c);
  for (uVar3 = 0; uVar3 < local_1c; uVar3 = uVar3 + 1) {
    FUN_4a03c12c(*(int *)(param_1 + 0x10) + uVar3 * 0x30 + 4,1,0x20,4);
    iVar4 = *(int *)(param_1 + 0x10) + uVar3 * 0x30;
    piVar5 = (int *)(iVar4 + 0x1c);
    FUN_4a16ed18(piVar5);
    for (uVar2 = 0; uVar2 < *(uint *)(iVar4 + 0x20); uVar2 = uVar2 + 1) {
      iVar1 = *piVar5 + uVar2 * 8;
      FUN_4a03c12c(iVar1,1,0x20,4);
      FUN_4a03c12c(iVar1 + 4,1,0x20,4);
    }
  }
  return;
}



// Address: 4a04188c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a04188c(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  puVar1 = PTR_DAT_4a041908;
  iVar2 = 0;
  if (*(int *)PTR_DAT_4a041908 != 0) {
    iVar2 = *(int *)(PTR_DAT_4a041908 + 4);
  }
  if (*(int *)PTR_DAT_4a041908 == 0 || iVar2 == 0) {
    return;
  }
  iVar2 = *(int *)(PTR_DAT_4a041908 + 0x5c);
  if (iVar2 < 0) {
    return;
  }
  uVar5 = *(uint *)(PTR_DAT_4a04190c + iVar2 * 8);
  uVar3 = *(undefined4 *)(PTR_DAT_4a04190c + iVar2 * 8 + 4);
  *(int *)(PTR_DAT_4a041908 + 0x5c) = iVar2 + -1;
  uVar3 = FUN_4a171a94(uVar3,*(undefined4 *)(puVar1 + 0x30));
  uVar4 = FUN_4a171fac(uVar5);
  uVar3 = FUN_4a171bb8(uVar4,uVar3);
  puVar1 = PTR_DAT_4a041b98;
  if (*(int *)(PTR_DAT_4a041b98 + 0x5c) < 0) {
    iVar2 = 0;
    if (*(int *)PTR_DAT_4a041b98 != 0) {
      iVar2 = *(int *)(PTR_DAT_4a041b98 + 4);
    }
    if (*(int *)PTR_DAT_4a041b98 != 0 && iVar2 != 0) {
      uVar4 = *(undefined4 *)(PTR_DAT_4a041b98 + 0x30);
      if (param_1 < 1) {
        if ((uVar5 & 1) == 0) {
          iVar2 = (int)uVar5 / 2;
          *(int *)(PTR_DAT_4a041b98 + 0x14) = iVar2;
        }
        else {
          iVar2 = (int)(uVar5 + 1) / 2;
          *(int *)(PTR_DAT_4a041b98 + 0x14) = iVar2;
          iVar2 = uVar5 - iVar2;
        }
        *(int *)(puVar1 + 0x18) = iVar2;
        uVar3 = FUN_4a171a94(uVar3,uVar4);
        uVar4 = FUN_4a171fac(uVar5);
        uVar3 = FUN_4a171bb8(uVar4,uVar3);
        *(undefined4 *)(puVar1 + 0x2c) = uVar3;
        uVar3 = 0xbf800000;
      }
      else {
        *(int *)(PTR_DAT_4a041b98 + 0x44) = *(int *)(PTR_DAT_4a041b98 + 0x14) << 1;
        *(uint *)(puVar1 + 0x48) = uVar5;
        *(undefined4 *)(puVar1 + 0x4c) = *(undefined4 *)(puVar1 + 0x2c);
        uVar3 = FUN_4a171a94(uVar3,uVar4);
        uVar4 = FUN_4a171fac(uVar5);
        uVar3 = FUN_4a171bb8(uVar4,uVar3);
        *(undefined4 *)(puVar1 + 0x50) = uVar3;
        *(undefined4 *)(puVar1 + 0x54) = 0;
        uVar3 = FUN_4a17211c(param_1,0x447a0000);
      }
      *(undefined4 *)(puVar1 + 0x58) = uVar3;
      return;
    }
    return;
  }
  return;
}



// Address: 4a041910

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a041910(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE_00;
  
  puVar1 = PTR_DAT_4a041a9c;
  iVar3 = 0;
  if (*(int *)PTR_DAT_4a041a9c != 0) {
    iVar3 = *(int *)(PTR_DAT_4a041a9c + 4);
  }
  if (*(int *)PTR_DAT_4a041a9c == 0 || iVar3 == 0) {
    return;
  }
  *(int *)(PTR_DAT_4a041a9c + 0x28) = param_1;
  iVar3 = *(int *)(PTR_DAT_4a041a9c + 0x38);
  if (param_1 != 0) {
    if (param_1 != 1) {
      return;
    }
    if (*(int *)(PTR_DAT_4a041a9c + 0x1c) != 0) {
      *(int *)(puVar1 + 8) = *(int *)(PTR_DAT_4a041a9c + 0x34);
      *(int *)(puVar1 + 0xc) = iVar3;
      FUN_4a150d7c(0);
    }
    if (*(int *)(puVar1 + 0x20) != 0) {
      iVar2 = *(int *)(puVar1 + 0x34);
      *(int *)(puVar1 + 8) = iVar2;
      iVar4 = *(int *)(puVar1 + 0x38);
      *(int *)(puVar1 + 0xc) = iVar4;
      iVar5 = *(int *)PTR_DAT_4a150dbc;
      iVar3 = iVar2;
      if (iVar2 == 0) {
        if (iVar4 == *(int *)(iVar5 + 0x20) + *(int *)(iVar5 + 0x24)) {
          iVar3 = *(int *)(iVar5 + 0x20);
          iVar4 = *(int *)(iVar5 + 0x24);
        }
      }
      *(int *)(iVar5 + 0x10) = iVar2;
      *(undefined4 *)(iVar5 + 0x14) = 0;
      *(int *)(iVar5 + 0x18) = iVar3;
      *(int *)(iVar5 + 0x1c) = iVar4;
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a041a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  if (*(int *)(PTR_DAT_4a041a9c + 0x1c) != 0) {
    *(int *)(puVar1 + 8) = *(int *)(PTR_DAT_4a041a9c + 0x34) + *(int *)(puVar1 + 0x3c);
    *(int *)(puVar1 + 0xc) = iVar3 + *(int *)(puVar1 + 0x40);
    FUN_4a150d7c(-(*(int *)(puVar1 + 0x14) + *(int *)(puVar1 + 0x3c) / 2),
                 -(*(int *)(puVar1 + 0x40) / 2));
    thunk_FUN_4a150140(0xc11);
    *(undefined4 *)(puVar1 + 0x24) = 1;
    FUN_4a1507ec(0,0,*(undefined4 *)(puVar1 + 0x34),*(undefined4 *)(puVar1 + 0x38));
    *(undefined4 *)(puVar1 + 0x24) = 0;
  }
  if (*(int *)(puVar1 + 0x20) != 0) {
    *(int *)(puVar1 + 8) = *(int *)(puVar1 + 0x34) + *(int *)(puVar1 + 0x3c);
    *(int *)(puVar1 + 0xc) = *(int *)(puVar1 + 0x38) + *(int *)(puVar1 + 0x40);
    FUN_4a150d7c((*(int *)(puVar1 + 0x10) + *(int *)(puVar1 + 0x18)) - *(int *)(puVar1 + 0x3c) / 2,
                 -(*(int *)(puVar1 + 0x40) / 2));
    *(undefined4 *)(puVar1 + 0x24) = 1;
    thunk_FUN_4a150140(0xc11);
    FUN_4a1507ec(*(undefined4 *)(puVar1 + 0x34),0,*(undefined4 *)(puVar1 + 0x34),
                 *(undefined4 *)(puVar1 + 0x38));
    *(undefined4 *)(puVar1 + 0x24) = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a0419cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



// Address: 4a041aa0

void FUN_4a041aa0(uint param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = PTR_DAT_4a041b98;
  if (-1 < *(int *)(PTR_DAT_4a041b98 + 0x5c)) {
    return;
  }
  iVar3 = 0;
  if (*(int *)PTR_DAT_4a041b98 != 0) {
    iVar3 = *(int *)(PTR_DAT_4a041b98 + 4);
  }
  if (*(int *)PTR_DAT_4a041b98 != 0 && iVar3 != 0) {
    uVar4 = *(undefined4 *)(PTR_DAT_4a041b98 + 0x30);
    if (param_3 < 1) {
      if ((param_1 & 1) == 0) {
        iVar3 = (int)param_1 / 2;
        *(int *)(PTR_DAT_4a041b98 + 0x14) = iVar3;
      }
      else {
        iVar3 = (int)(param_1 + 1) / 2;
        *(int *)(PTR_DAT_4a041b98 + 0x14) = iVar3;
        iVar3 = param_1 - iVar3;
      }
      *(int *)(puVar1 + 0x18) = iVar3;
      uVar4 = FUN_4a171a94(param_2,uVar4);
      uVar2 = FUN_4a171fac(param_1);
      uVar4 = FUN_4a171bb8(uVar2,uVar4);
      *(undefined4 *)(puVar1 + 0x2c) = uVar4;
      uVar4 = 0xbf800000;
    }
    else {
      *(int *)(PTR_DAT_4a041b98 + 0x44) = *(int *)(PTR_DAT_4a041b98 + 0x14) << 1;
      *(uint *)(puVar1 + 0x48) = param_1;
      *(undefined4 *)(puVar1 + 0x4c) = *(undefined4 *)(puVar1 + 0x2c);
      uVar4 = FUN_4a171a94(param_2,uVar4);
      uVar2 = FUN_4a171fac(param_1);
      uVar4 = FUN_4a171bb8(uVar2,uVar4);
      *(undefined4 *)(puVar1 + 0x50) = uVar4;
      *(undefined4 *)(puVar1 + 0x54) = 0;
      uVar4 = FUN_4a17211c(param_3,0x447a0000);
    }
    *(undefined4 *)(puVar1 + 0x58) = uVar4;
    return;
  }
  return;
}



// Address: 4a041b9c

void FUN_4a041b9c(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_830;
  undefined4 uStack_82c;
  undefined1 auStack_828 [512];
  undefined1 auStack_628 [512];
  undefined1 auStack_428 [512];
  undefined1 auStack_228 [512];
  undefined4 uStack_4;
  
  iVar1 = 0;
  if (param_3 != (int *)0x0) {
    iVar1 = param_3[2];
  }
  uStack_4 = param_4;
  FUN_4a000ed8(auStack_428,iVar1);
  local_830 = *(undefined4 *)PTR_DAT_4a041c7c;
  uStack_82c = *(undefined4 *)(PTR_DAT_4a041c7c + 4);
  iVar1 = FUN_4a000f18(auStack_428,&local_830);
  if (iVar1 != 0) {
    *(undefined2 *)(iVar1 + 2) = 99;
  }
  FUN_4a039d70(auStack_428,0x100,auStack_828,0x200);
  FUN_4a000d44(auStack_628,auStack_828,&uStack_4);
  FUN_4a039bec(auStack_628,0x200,auStack_228,0x100);
  FUN_4a0331f8(param_1,auStack_228);
  if ((param_3 != (int *)0x0) && (iVar1 = param_3[1], param_3[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*param_3 + 4))();
  }
  return;
}



// Address: 4a041c80

void FUN_4a041c80(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  short *psVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  
  uVar3 = DAT_4a041e28;
  iVar5 = *(int *)PTR_DAT_4a041e20;
  iVar7 = *(int *)(PTR_LAB_4a041e24 + 0x40);
  psVar9 = (short *)param_1[1];
  iVar14 = *param_1 + -1;
  uVar6 = param_1[2];
  uVar8 = param_1[3];
  iVar21 = param_1[4];
  iVar19 = param_1[5];
  iVar12 = param_1[0xc];
  iVar16 = param_1[0xe];
  uVar15 = param_1[6];
  iVar18 = param_1[7];
  uVar20 = (param_1[0xb] & 0xfff0ffffU) << 0xc;
  uVar10 = (param_1[0xd] & 0xfff0ffffU) << 0xc;
  iVar17 = *(int *)PTR_LAB_4a041e24 + ((param_1[9] & 0xf800000U) >> 0xc);
  do {
    uVar1 = *(ushort *)(iVar18 + (uVar15 & uVar8 >> 0xd | (uVar6 & uVar15) >> 0x14) * 2);
    while( true ) {
      uVar11 = (uint)uVar1;
      uVar8 = uVar8 + iVar19;
      uVar6 = uVar6 + iVar21;
      if (uVar11 == 0) break;
      uVar11 = (uint)*(ushort *)(iVar17 + ((uVar11 & 0xffff7fff) >> 5) * 2) |
               (uint)*(ushort *)(iVar17 + (uVar11 & 0x1f) * 0x40) << 0xb;
      iVar14 = iVar14 + -1;
      uVar13 = uVar3 & *(ushort *)
                        (iVar7 + *(int *)(iVar5 + (uVar20 >> 0xe & 0x3f80 |
                                                  (uVar10 & 0xfffffff) >> 0x15) * 4) * 2) >> 2;
      uVar4 = uVar13 + uVar11;
      uVar13 = (uVar11 ^ uVar4 ^ uVar13) & 0x10820;
      uVar11 = uVar13 >> 5;
      uVar2 = (ushort)uVar13;
      uVar1 = uVar2 - ((short)uVar11 - (short)((uVar11 & 0x40) >> 1));
      uVar20 = uVar20 + iVar12;
      *psVar9 = ((ushort)uVar4 | uVar1) - (uVar2 & ~uVar1);
      uVar10 = uVar10 + iVar16;
      if (iVar14 < 0) {
        return;
      }
      uVar1 = *(ushort *)(iVar18 + (uVar15 & uVar8 >> 0xd | (uVar6 & uVar15) >> 0x14) * 2);
      psVar9 = psVar9 + 1;
    }
    iVar14 = iVar14 + -1;
    uVar20 = uVar20 + iVar12;
    psVar9 = psVar9 + 1;
    uVar10 = uVar10 + iVar16;
  } while (-1 < iVar14);
  return;
}



// Address: 4a041e2c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a041e2c(int param_1,ushort *param_2,uint param_3)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ushort uVar7;
  undefined *puVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ushort *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 *puVar17;
  int *piVar18;
  int iVar19;
  uint uVar20;
  short *psVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  uint *puVar31;
  byte *pbVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  undefined4 *puVar36;
  undefined *puVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  undefined4 *puVar41;
  uint uVar42;
  short *psVar43;
  uint *puVar44;
  ushort *puVar45;
  short *psVar46;
  ushort *puVar47;
  uint *puVar48;
  ushort uVar49;
  uint uVar50;
  undefined4 uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  short *psVar55;
  code *UNRECOVERED_JUMPTABLE;
  int iVar56;
  int iVar57;
  short *psVar58;
  bool bVar59;
  bool bVar60;
  bool bVar61;
  bool bVar62;
  bool bVar63;
  bool bVar64;
  bool bVar65;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  int iStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  int iStack_cc;
  int iStack_c8;
  uint uStack_c4;
  uint uStack_bc;
  byte *pbStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_9c;
  ushort *puStack_98;
  ushort *puStack_94;
  uint uStack_90;
  int iStack_8c;
  uint uStack_88;
  uint uStack_80;
  uint uStack_7c;
  undefined *puStack_78;
  uint uStack_74;
  ushort *puStack_70;
  uint uStack_64;
  uint uStack_60;
  uint local_5c;
  uint *local_58;
  undefined4 uStack_54;
  ushort *puStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  int iStack_30;
  ushort *local_2c;
  uint uStack_28;
  
  puVar37 = PTR_DAT_4a042dfc;
  uStack_28 = param_3;
  local_2c = param_2;
  iStack_30 = param_1;
  local_58 = *(uint **)PTR_DAT_4a042dfc;
  bVar59 = param_2 == (ushort *)0x0;
  if (bVar59) {
    param_2 = (ushort *)PTR_DAT_4a042e00;
  }
  if (bVar59) {
    local_2c = *(ushort **)param_2;
  }
  local_5c = local_58[0x12d];
  if ((local_58[0x12d] == 0) && (local_5c = local_58[300], local_58[300] == 0)) {
    return;
  }
  iVar10 = FUN_4a0698e4(local_5c);
  if (iVar10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a041e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (iStack_30 == 7) {
    uVar11 = local_58[0xd5];
    bVar59 = uVar11 == 0;
    if (bVar59) {
      uVar11 = local_58[0x19b];
    }
    if (!bVar59 || uVar11 != 0) {
      FUN_4a046890(local_2c,param_3);
      return;
    }
  }
  uStack_c4 = param_3;
  if ((((iStack_30 == 4 || iStack_30 == 3) && (uVar11 = local_58[0x11c], uVar11 != 0)) &&
      (uVar12 = *(uint *)(local_5c + 0x10), (~(uVar12 >> 2) & 1) == 0 && (uVar12 & 2) == 0)) &&
     ((uVar12 & 1) != 2)) {
    uVar12 = param_3 >> 1;
    if (iStack_30 == 4) {
      uVar12 = param_3 - 2;
    }
    iVar10 = 0;
    if (0 < (int)uVar12) {
      do {
        if (*(int *)(uVar11 + iVar10 * 4) != *(int *)(uVar11 + iVar10 * 4 + 4)) {
          if (iStack_30 == 4) {
            iStack_30 = 1;
          }
          else if (iStack_30 == 3) {
            uStack_c4 = param_3 * 0x18000 >> 0x10;
            iVar10 = *(int *)puVar37;
            puVar13 = *(ushort **)(iVar10 + 0x38c);
            *(ushort **)(iVar10 + 0x388) = puVar13;
            *(uint *)(iVar10 + 0x38c) = (uStack_c4 * 2 + 3 & 0xfffffffc) + (int)puVar13;
            puVar45 = puVar13;
            for (; (param_3 & 0xffff) != 0; param_3 = (param_3 & 0xffff) - 4) {
              *puVar45 = *local_2c;
              puVar45[1] = local_2c[1];
              puVar45[2] = local_2c[3];
              puVar45[3] = local_2c[3];
              puVar45[4] = local_2c[1];
              puVar45[5] = local_2c[2];
              puVar45 = puVar45 + 6;
              local_2c = local_2c + 4;
            }
            iStack_30 = 0;
            local_2c = puVar13;
          }
          break;
        }
        iVar10 = iVar10 + 2;
      } while (iVar10 < (int)uVar12);
    }
  }
  uStack_60 = local_58[0x11c];
  uStack_64 = 0xff;
  local_58[0x127] = (uint)local_2c;
  local_58[0x128] = (uint)local_2c;
  *(short *)(local_58 + 0x129) = (short)uStack_c4;
  if ((*(int *)(local_5c + 0x2c) == 0) ||
     (((*(uint *)(local_5c + 0x10) & 2) == 0 && ((*(uint *)(local_5c + 0x10) & 1) != 2)))) {
    bVar59 = false;
  }
  else {
    bVar59 = true;
  }
  if (bVar59) {
    uStack_64 = 0xffffffff;
    uStack_60 = 0;
  }
  else {
    (**(code **)(PTR_DAT_4a042e04 + 0x18))(local_5c,&uStack_60);
  }
  uVar11 = local_58[0xde];
  puStack_78 = (undefined *)0x0;
  uStack_7c = 0;
  uStack_80 = 0;
  bVar60 = *(int *)(local_5c + 0x2c) != 0;
  uVar12 = *(uint *)(local_5c + 0x10);
  if ((((~(uVar12 >> 2) & 1) != 0) && ((uVar12 & 2) == 0)) && ((uVar12 & 1) != 2)) {
    uVar12 = local_58[0x11c];
    bVar61 = uVar12 == 0;
    if (bVar61) {
      uVar12 = local_58[0x117];
    }
    if (!bVar61 || uVar12 != 0) {
      uStack_a4 = (uint)(uStack_60 != 0);
      goto LAB_4a042168;
    }
  }
  uStack_a4 = 0;
LAB_4a042168:
  uStack_a8 = 0;
  pbStack_ac = (byte *)0x0;
  uVar12 = **(uint **)puVar37;
  bVar61 = (uVar12 & 0x20000) != 0;
  if (bVar61) {
    uVar12 = local_58[0x117];
  }
  if (bVar61 && uVar12 != 0) {
    FUN_4a056a74(local_5c);
    uStack_a8 = (*(uint *)(*(int *)puVar37 + 4) & 0x20) >> 5;
    pbStack_ac = (byte *)local_58[0x101];
  }
  uVar23 = *(uint *)(local_5c + 0x2c);
  uVar12 = (*(uint *)(local_5c + 0x10) & 0x70000) >> 0x10;
  if (((uVar12 == 5) && (uVar12 = 0, uVar23 != 0)) && ((*(uint *)(uVar23 + 0x34) & 2) != 0)) {
    uVar12 = 4;
  }
  if ((*local_58 & 0x400000) != 0) {
    FUN_4a032b24(uVar23);
  }
  uVar14 = *(uint *)(local_5c + 0x10);
  if (((uVar14 & 2) == 0) && ((uVar14 & 1) == 0)) {
    bVar61 = true;
  }
  else {
    bVar61 = false;
  }
  if (((uVar14 & 2) == 0) && ((uVar14 & 1) != 2)) {
    iVar10 = 0;
    if (bVar61) {
      iVar10 = *(int *)(PTR_DAT_4a042e08 + 8);
    }
    bVar61 = bVar61 && iVar10 != 0;
  }
  if (((*local_58 & 0x400000) != 0) && (!bVar61)) {
    FUN_4a032b24(uVar23,local_5c);
  }
  puVar37 = PTR_DAT_4a042dfc;
  uStack_bc = 0;
  iVar10 = *(int *)PTR_DAT_4a042dfc;
  if (*(int *)(iVar10 + 0x514) < 0) {
    if (*(short *)(iVar10 + 0x510) != 0) {
      iVar24 = *(int *)(iVar10 + 0x32c) * (int)*(short *)(iVar10 + 0x510) >> 0xc;
      uVar14 = iVar24 * 8;
      if (uVar14 == 0) {
        uVar14 = 0;
      }
      else {
        uVar15 = uVar14;
        if ((int)uVar14 < 0) {
          uVar15 = iVar24 * -8;
        }
        iVar24 = 0;
        if (uVar15 >> 0x10 == 0) {
          iVar24 = 0x10;
          uVar15 = uVar15 << 0x10;
        }
        if (uVar15 >> 0x18 == 0) {
          iVar24 = iVar24 + 8;
          uVar15 = uVar15 << 8;
        }
        if (uVar15 >> 0x1c == 0) {
          iVar24 = iVar24 + 4;
          uVar15 = uVar15 << 4;
        }
        if (uVar15 >> 0x1e == 0) {
          iVar24 = iVar24 + 2;
          uVar15 = uVar15 << 2;
        }
        if (-1 < (int)uVar15) {
          iVar24 = iVar24 + 1;
        }
        uVar15 = 0x1d - iVar24;
        if ((int)uVar15 < 0) {
          uVar15 = 0;
        }
        uVar14 = (uint)(char)((byte)uVar15 | (byte)(((int)uVar14 >> (uVar15 & 0xff)) << 4));
      }
      uStack_bc = (uVar14 & 0xff) << 9;
    }
  }
  else {
    iVar24 = *(int *)(iVar10 + 0x32c) * *(int *)(iVar10 + 0x514) >> 0xc;
    uVar14 = iVar24 * 8;
    if (uVar14 == 0) {
      uVar14 = 0;
    }
    else {
      uVar15 = uVar14;
      if ((int)uVar14 < 0) {
        uVar15 = iVar24 * -8;
      }
      iVar24 = 0;
      if (uVar15 >> 0x10 == 0) {
        iVar24 = 0x10;
        uVar15 = uVar15 << 0x10;
      }
      if (uVar15 >> 0x18 == 0) {
        iVar24 = iVar24 + 8;
        uVar15 = uVar15 << 8;
      }
      if (uVar15 >> 0x1c == 0) {
        iVar24 = iVar24 + 4;
        uVar15 = uVar15 << 4;
      }
      if (uVar15 >> 0x1e == 0) {
        iVar24 = iVar24 + 2;
        uVar15 = uVar15 << 2;
      }
      if (-1 < (int)uVar15) {
        iVar24 = iVar24 + 1;
      }
      uVar15 = 0x1d - iVar24;
      if ((int)uVar15 < 0) {
        uVar15 = 0;
      }
      uVar14 = (uint)(char)((byte)uVar15 | (byte)(((int)uVar14 >> (uVar15 & 0xff)) << 4));
    }
    uStack_bc = (uVar14 & 0xff) << 9 | 0x40000;
  }
  if (local_58[0x105] == 3) {
    uStack_bc = 0;
    puStack_78 = *(undefined **)(iVar10 + 0x338);
    if ((int)puStack_78 < 0) {
      puStack_78 = puStack_78 + local_58[0xee];
      FUN_4a00d744();
    }
    else {
      FUN_4a00d76c();
    }
    iVar24 = *(int *)puVar37;
    uVar14 = *(uint *)(iVar24 + 0x2f8);
    uVar15 = *(uint *)(iVar24 + 0x2fc);
    iVar10 = *(int *)(iVar24 + 0x3bc);
    if (*(int *)(iVar10 + (int)puStack_78 * 0x10) == -1) {
      *(uint *)(iVar10 + (int)puStack_78 * 0x10) = uVar14;
      iVar10 = iVar10 + (int)puStack_78 * 0x10;
      *(uint *)(iVar10 + 4) = uVar15;
      *(uint *)(iVar10 + 8) = uVar14;
      *(uint *)(iVar10 + 0xc) = uVar15;
    }
    else {
      iVar10 = iVar10 + (int)puStack_78 * 0x10;
      uVar16 = *(uint *)(iVar10 + 8);
      bVar62 = uVar16 == uVar14;
      uVar20 = uVar14;
      if (bVar62) {
        uVar16 = *(uint *)(iVar10 + 0xc);
        uVar20 = uVar15;
      }
      if (!bVar62 || uVar16 != uVar20) {
        puVar17 = *(undefined4 **)(iVar24 + 0x398);
        *(undefined4 **)(iVar24 + 0x398) = puVar17 + 3;
        puVar17[1] = uVar14 & 0xffff | (uVar14 >> 0x10) << 0xc | 0x60000000;
        puVar17[2] = uVar15;
        *puVar17 = *(undefined4 *)(*(int *)(iVar24 + 0x39c) + (int)puStack_78 * 4);
        *(undefined4 **)(*(int *)(*(int *)puVar37 + 0x39c) + (int)puStack_78 * 4) = puVar17;
        *(uint *)(iVar10 + 8) = uVar14;
        *(uint *)(iVar10 + 0xc) = uVar15;
      }
    }
  }
  puVar37 = PTR_DAT_4a04516c;
  uVar14 = local_58[0x11a];
  switch(iStack_30) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    uVar15 = 0;
    if (bVar60) {
      uVar15 = 2;
    }
    uVar20 = 0;
    if (uStack_a8 != 0) {
      uVar20 = 4;
    }
    piVar18 = (int *)(PTR_DAT_4a042e10 + (uVar20 | uStack_a4 | uVar15) * 0x24);
    bVar62 = false;
    if (iStack_30 == 0) {
      uStack_9c = (uint)((ulonglong)uStack_c4 * (ulonglong)DAT_4a042e14 >> 0x21);
    }
    else if (iStack_30 == 1) {
      uStack_9c = uStack_c4 - 2;
    }
    else if (iStack_30 == 2) {
      uStack_9c = uStack_c4 - 2;
      uStack_7c = (uint)*local_2c;
    }
    else if (iStack_30 == 3) {
      uStack_9c = uStack_c4 >> 2;
      bVar62 = true;
    }
    else {
      uStack_9c = uStack_c4 - 2 >> 1;
      bVar62 = true;
    }
    if (bVar62) {
      uVar15 = 0x200000;
    }
    else {
      uVar15 = 0x180000;
    }
    uVar15 = uVar15 | piVar18[2];
    if (bVar61) {
      uVar15 = uVar15 | 0x4000000;
    }
    puStack_70 = local_2c;
    uStack_74 = 0;
    if (uStack_9c != 0) {
      uStack_34 = uStack_bc | uVar15 | uVar12 << 5;
      do {
        uStack_9c = uStack_9c - 1;
        if (bVar62) {
          uStack_7c = (uint)*puStack_70;
          uStack_90 = (uint)puStack_70[1];
          if (iStack_30 == 3) {
            uVar49 = puStack_70[2];
            uVar9 = puStack_70[3];
          }
          else {
            uVar49 = puStack_70[3];
            uVar9 = puStack_70[2];
          }
          uStack_80 = (uint)uVar9;
          uStack_88 = (uint)uVar49;
          uVar12 = uStack_88;
          uVar15 = uStack_7c;
          if (uStack_7c != uStack_88) {
            uVar12 = uStack_80;
            uVar15 = uStack_90;
          }
          if (uStack_7c != uStack_88 && uVar15 != uVar12) {
            puVar44 = (uint *)(uVar11 + uStack_80 * 0x14);
LAB_4a042730:
            uVar15 = uStack_7c;
            uVar12 = uStack_88;
            puStack_94 = (ushort *)(uVar11 + uStack_7c * 0x14);
            puVar45 = (ushort *)(uVar11 + uStack_90 * 0x14);
            puStack_98 = (ushort *)(uVar11 + uStack_88 * 0x14);
            uVar49 = puStack_98[8] & puVar45[8] & puStack_94[8];
            if (puVar44 != (uint *)0x0) {
              uVar49 = uVar49 & (ushort)puVar44[4];
            }
            if ((uVar49 & 0x3f) == 0) {
              if (local_58[0x105] == 3) {
                if (puVar44 == (uint *)0x0) {
                  iVar24 = ((int)(short)*puVar45 - (int)(short)*puStack_94) *
                           ((int)(short)puStack_98[1] - (int)(short)puVar45[1]);
                  iVar19 = ((int)(short)puVar45[1] - (int)(short)puStack_94[1]) *
                           ((int)(short)*puStack_98 - (int)(short)*puVar45);
                  iVar10 = iVar24;
                  if (iVar19 <= iVar24) {
                    iVar10 = 0;
                  }
                  if (iVar24 < iVar19) {
                    iVar10 = 1;
                  }
                  if ((*(uint *)(local_5c + 0x10) & 8) == 0) {
                    if ((*(uint *)(local_5c + 0x10) & 0x10) == 0) {
                      if (iVar10 != 0) goto LAB_4a043d60;
                    }
                    else if (iVar10 == 0) goto LAB_4a043d50;
LAB_4a043d48:
                    iVar10 = 0;
                  }
                  else {
                    if (iVar10 != 0) goto LAB_4a043d60;
LAB_4a043d50:
                    iVar10 = 2;
                  }
                }
                else if ((*(uint *)(local_5c + 0x10) & 8) == 0) {
                  if ((*(uint *)(local_5c + 0x10) & 0x10) != 0) {
                    iVar19 = (int)(short)(ushort)*puVar44 - (int)(short)*puStack_94;
                    iVar33 = (int)(short)*(ushort *)((int)puVar44 + 2) - (int)(short)puStack_94[1];
                    iVar22 = (int)(short)puStack_98[1] - (int)(short)*(ushort *)((int)puVar44 + 2);
                    iVar34 = (int)(short)*puVar45 - (int)(short)*puStack_98;
                    iVar35 = (int)(short)*puStack_98 - (int)(short)(ushort)*puVar44;
                    iVar24 = (int)(short)puVar45[1] - (int)(short)puStack_98[1];
                    iVar10 = iVar34 * iVar33;
                    iVar33 = iVar19 * iVar22 - iVar33 * iVar35;
                    bVar61 = iVar33 < 0;
                    uVar20 = iVar35 * iVar24 - iVar34 * iVar22;
                    bVar65 = (int)uVar20 < 0;
                    iVar24 = iVar24 * iVar19 - iVar10;
                    if (!bVar61 && !bVar65) {
                      iVar10 = iVar33 + iVar24;
                    }
                    bVar63 = iVar10 < 0;
                    if ((!bVar61 && !bVar65) && !bVar63) {
                      uVar20 = uVar20 + iVar24;
                    }
                    bVar64 = -1 < (int)uVar20;
                    if (((!bVar61 && !bVar65) && !bVar63) && bVar64) {
                      uVar20 = 0;
                    }
                    if (((bVar61 || bVar65) || bVar63) || !bVar64) {
                      uVar20 = 1;
                    }
                    goto joined_r0x4a043c44;
                  }
                  iVar33 = (int)(short)*puVar45 - (int)(short)*puStack_94;
                  iVar34 = (int)(short)puVar45[1] - (int)(short)puStack_94[1];
                  iVar35 = (int)(short)*puStack_98 - (int)(short)*puVar45;
                  iVar24 = (int)(short)(ushort)*puVar44 - (int)(short)*puStack_98;
                  iVar22 = (int)(short)puStack_98[1] - (int)(short)puVar45[1];
                  iVar19 = (int)(short)*(ushort *)((int)puVar44 + 2) - (int)(short)puStack_98[1];
                  iVar10 = iVar34 * iVar24;
                  iVar34 = iVar33 * iVar22 - iVar34 * iVar35;
                  bVar61 = -1 < iVar34;
                  iVar24 = iVar35 * iVar19 - iVar24 * iVar22;
                  bVar65 = -1 < iVar24;
                  iVar19 = iVar33 * iVar19 - iVar10;
                  if (bVar61 && bVar65) {
                    iVar10 = iVar34 + iVar19;
                  }
                  if ((bVar61 && bVar65) && -1 < iVar10) {
                    iVar24 = iVar24 + iVar19;
                  }
                  if (((bVar61 && bVar65) && -1 < iVar10) && -1 < iVar24) goto LAB_4a043d48;
LAB_4a043d60:
                  iVar10 = 1;
                }
                else {
                  iVar35 = (int)(short)puStack_98[1] - (int)(short)puVar45[1];
                  iVar19 = (int)(short)*puVar45 - (int)(short)*puStack_94;
                  iVar33 = (int)(short)puVar45[1] - (int)(short)puStack_94[1];
                  iVar10 = (int)(short)*puStack_98 - (int)(short)*puVar45;
                  uVar16 = (int)(short)(ushort)*puVar44 - (int)(short)*puStack_98;
                  iVar34 = (int)(short)*(ushort *)((int)puVar44 + 2) - (int)(short)puStack_98[1];
                  iVar24 = iVar19 * iVar35 - iVar33 * iVar10;
                  bVar61 = iVar24 < 0;
                  iVar10 = iVar10 * iVar34 - uVar16 * iVar35;
                  bVar65 = iVar10 < 0;
                  iVar19 = iVar19 * iVar34 - uVar16 * iVar33;
                  if (!bVar61 && !bVar65) {
                    uVar16 = iVar24 + iVar19;
                  }
                  bVar63 = (int)uVar16 < 0;
                  if ((!bVar61 && !bVar65) && !bVar63) {
                    uVar16 = iVar10 + iVar19;
                  }
                  bVar64 = -1 < (int)uVar16;
                  if (((!bVar61 && !bVar65) && !bVar63) && bVar64) {
                    uVar16 = 0;
                  }
                  if (((bVar61 || bVar65) || bVar63) || !bVar64) {
                    uVar16 = 1;
                  }
                  iVar33 = iVar24;
                  if (iVar24 < 1) {
                    iVar33 = iVar10;
                  }
                  if (iVar33 < 1) {
                    iVar33 = iVar24 + iVar19;
                  }
                  if (iVar33 < 1) {
                    iVar33 = iVar10 + iVar19;
                  }
                  uVar20 = (uint)(0 < iVar33);
                  if ((uVar16 & uVar20) == 0) {
                    if (uVar16 != 0) goto LAB_4a043d60;
joined_r0x4a043c44:
                    if (uVar20 != 0) goto LAB_4a043d50;
                    goto LAB_4a043d48;
                  }
                  iVar10 = 3;
                }
                if (iVar10 == 0) goto LAB_4a04414c;
              }
              else {
                if (puVar44 == (uint *)0x0) {
                  iVar19 = *(int *)(puStack_94 + 2) - *(int *)(puVar45 + 2);
                  iVar33 = *(int *)(puStack_94 + 4) - *(int *)(puVar45 + 4);
                  iVar34 = *(int *)(puStack_94 + 6) - *(int *)(puVar45 + 6);
                  iVar35 = *(int *)(puStack_98 + 2) - *(int *)(puVar45 + 2);
                  iVar24 = *(int *)(puStack_98 + 4) - *(int *)(puVar45 + 4);
                  iVar10 = *(int *)(puStack_98 + 6) - *(int *)(puVar45 + 6);
                  if ((**(uint **)PTR_DAT_4a042dfc & 0x80000000) == 0) {
                    uStack_dc = *(uint *)(puVar45 + 2);
                    uStack_d8 = *(uint *)(puVar45 + 4);
                    uStack_d4 = *(uint *)(puVar45 + 6);
                  }
                  else {
                    uStack_dc = *(uint *)PTR_DAT_4a042e0c;
                    uStack_d8 = *(uint *)(PTR_DAT_4a042e0c + 4);
                    uStack_d4 = *(uint *)(PTR_DAT_4a042e0c + 8);
                  }
                  lVar3 = (longlong)iVar33 * (longlong)iVar35;
                  uVar16 = (uint)lVar3;
                  lVar4 = (longlong)iVar19 * (longlong)iVar24;
                  uVar20 = (uint)lVar4;
                  iVar22 = (int)((ulonglong)lVar4 >> 0x20) -
                           ((int)((ulonglong)lVar3 >> 0x20) + (uint)(uVar20 < uVar16));
                  uVar20 = uVar20 - uVar16 >> 8 | iVar22 * 0x1000000;
                  lVar5 = (ulonglong)uVar20 * (ulonglong)uStack_d4;
                  uVar42 = (uint)lVar5;
                  lVar3 = (longlong)iVar19 * (longlong)iVar10;
                  uVar38 = (uint)lVar3;
                  lVar4 = (longlong)iVar34 * (longlong)iVar35;
                  uVar16 = (uint)lVar4;
                  iVar19 = (int)((ulonglong)lVar4 >> 0x20) -
                           ((int)((ulonglong)lVar3 >> 0x20) + (uint)(uVar16 < uVar38));
                  uVar16 = uVar16 - uVar38 >> 8 | iVar19 * 0x1000000;
                  lVar6 = (ulonglong)uVar16 * (ulonglong)uStack_d8;
                  uVar40 = (uint)lVar6;
                  lVar3 = (longlong)iVar34 * (longlong)iVar24;
                  uVar39 = (uint)lVar3;
                  lVar4 = (longlong)iVar33 * (longlong)iVar10;
                  uVar38 = (uint)lVar4;
                  iVar24 = (int)((ulonglong)lVar4 >> 0x20) -
                           ((int)((ulonglong)lVar3 >> 0x20) + (uint)(uVar38 < uVar39));
                  uVar54 = uVar38 - uVar39 >> 8 | iVar24 * 0x1000000;
                  lVar3 = (ulonglong)uVar54 * (ulonglong)uStack_dc;
                  uVar38 = (uint)lVar3;
                  uVar39 = uVar38 + uVar40;
                  iVar10 = uVar39 + uVar42;
                  bVar61 = (int)(uStack_dc * (iVar24 >> 8) +
                                 ((int)uStack_dc >> 0x1f) * uVar54 + (int)((ulonglong)lVar3 >> 0x20)
                                 + uStack_d8 * (iVar19 >> 8) +
                                   ((int)uStack_d8 >> 0x1f) * uVar16 +
                                   (int)((ulonglong)lVar6 >> 0x20) + (uint)CARRY4(uVar38,uVar40) +
                                 uStack_d4 * (iVar22 >> 8) +
                                 ((int)uStack_d4 >> 0x1f) * uVar20 + (int)((ulonglong)lVar5 >> 0x20)
                                + (uint)CARRY4(uVar39,uVar42)) < 0;
                  if (bVar61) {
                    iVar10 = 0;
                  }
                  if (!bVar61) {
                    iVar10 = 1;
                  }
                  if ((*(uint *)(local_5c + 0x10) & 8) != 0) {
                    if (iVar10 != 0) goto LAB_4a043508;
                    goto LAB_4a0434f8;
                  }
                  if ((*(uint *)(local_5c + 0x10) & 0x10) == 0) {
                    if (iVar10 != 0) goto LAB_4a043508;
                  }
                  else if (iVar10 == 0) goto LAB_4a0434f8;
LAB_4a0434f0:
                  iVar10 = 0;
                }
                else if ((*(uint *)(local_5c + 0x10) & 8) == 0) {
                  if ((*(uint *)(local_5c + 0x10) & 0x10) == 0) {
                    iVar33 = *(int *)(puStack_94 + 2) - *(int *)(puVar45 + 2);
                    iVar34 = *(int *)(puStack_94 + 4) - *(int *)(puVar45 + 4);
                    iVar35 = *(int *)(puStack_94 + 6) - *(int *)(puVar45 + 6);
                    iVar24 = puVar44[1] - *(int *)(puStack_94 + 2);
                    iVar10 = puVar44[2] - *(int *)(puStack_94 + 4);
                    iVar19 = puVar44[3] - *(int *)(puStack_94 + 6);
                    if ((**(uint **)PTR_DAT_4a042dfc & 0x80000000) == 0) {
                      uStack_ec = *(uint *)(puVar45 + 2);
                      uStack_e8 = *(uint *)(puVar45 + 4);
                      uStack_e4 = *(uint *)(puVar45 + 6);
                    }
                    else {
                      uStack_ec = *(uint *)PTR_DAT_4a042e0c;
                      uStack_e8 = *(uint *)(PTR_DAT_4a042e0c + 4);
                      uStack_e4 = *(uint *)(PTR_DAT_4a042e0c + 8);
                    }
                    uVar16 = (uint)((longlong)iVar34 * (longlong)iVar24);
                    uVar20 = (uint)((longlong)iVar33 * (longlong)iVar10);
                    iVar28 = (int)((ulonglong)((longlong)iVar33 * (longlong)iVar10) >> 0x20) -
                             ((int)((ulonglong)((longlong)iVar34 * (longlong)iVar24) >> 0x20) +
                             (uint)(uVar20 < uVar16));
                    uVar20 = uVar20 - uVar16 >> 8 | iVar28 * 0x1000000;
                    lVar3 = (ulonglong)uVar20 * (ulonglong)uStack_e4;
                    uVar40 = (uint)lVar3;
                    iVar22 = (int)uStack_e4 >> 0x1f;
                    uVar38 = (uint)((longlong)iVar33 * (longlong)iVar19);
                    uVar16 = (uint)((longlong)iVar35 * (longlong)iVar24);
                    iVar29 = (int)((ulonglong)((longlong)iVar35 * (longlong)iVar24) >> 0x20) -
                             ((int)((ulonglong)((longlong)iVar33 * (longlong)iVar19) >> 0x20) +
                             (uint)(uVar16 < uVar38));
                    uVar16 = uVar16 - uVar38 >> 8 | iVar29 * 0x1000000;
                    lVar4 = (ulonglong)uVar16 * (ulonglong)uStack_e8;
                    uVar52 = (uint)lVar4;
                    iVar56 = (int)uStack_e8 >> 0x1f;
                    uVar39 = (uint)((longlong)iVar35 * (longlong)iVar10);
                    uVar38 = (uint)((longlong)iVar34 * (longlong)iVar19);
                    iVar30 = (int)((ulonglong)((longlong)iVar34 * (longlong)iVar19) >> 0x20) -
                             ((int)((ulonglong)((longlong)iVar35 * (longlong)iVar10) >> 0x20) +
                             (uint)(uVar38 < uVar39));
                    uVar54 = uVar38 - uVar39 >> 8 | iVar30 * 0x1000000;
                    lVar5 = (ulonglong)uVar54 * (ulonglong)uStack_ec;
                    uVar38 = (uint)lVar5;
                    iVar57 = (int)uStack_ec >> 0x1f;
                    uVar39 = uVar38 + uVar52;
                    uVar42 = uVar39 + uVar40;
                    iVar28 = uStack_ec * (iVar30 >> 8) +
                             iVar57 * uVar54 + (int)((ulonglong)lVar5 >> 0x20) +
                             uStack_e8 * (iVar29 >> 8) +
                             iVar56 * uVar16 + (int)((ulonglong)lVar4 >> 0x20) +
                             (uint)CARRY4(uVar38,uVar52) +
                             uStack_e4 * (iVar28 >> 8) +
                             iVar22 * uVar20 + (int)((ulonglong)lVar3 >> 0x20) +
                             (uint)CARRY4(uVar39,uVar40);
                    if ((int)-(iVar28 + (uint)(uVar42 != 0)) < 0 ==
                        (SBORROW4(0,iVar28) != SBORROW4(-iVar28,(uint)(uVar42 != 0)))) {
                      iVar26 = *(int *)(puStack_98 + 2) - puVar44[1];
                      iVar29 = *(int *)(puStack_98 + 4) - puVar44[2];
                      iVar30 = *(int *)(puStack_98 + 6) - puVar44[3];
                      uVar16 = (uint)((longlong)iVar10 * (longlong)iVar26);
                      uVar20 = (uint)((longlong)iVar24 * (longlong)iVar29);
                      iVar25 = (int)((ulonglong)((longlong)iVar24 * (longlong)iVar29) >> 0x20) -
                               ((int)((ulonglong)((longlong)iVar10 * (longlong)iVar26) >> 0x20) +
                               (uint)(uVar20 < uVar16));
                      uVar20 = uVar20 - uVar16 >> 8 | iVar25 * 0x1000000;
                      lVar3 = (ulonglong)uVar20 * (ulonglong)uStack_e4;
                      uVar40 = (uint)lVar3;
                      uVar38 = (uint)((longlong)iVar24 * (longlong)iVar30);
                      uVar16 = (uint)((longlong)iVar19 * (longlong)iVar26);
                      iVar24 = (int)((ulonglong)((longlong)iVar19 * (longlong)iVar26) >> 0x20) -
                               ((int)((ulonglong)((longlong)iVar24 * (longlong)iVar30) >> 0x20) +
                               (uint)(uVar16 < uVar38));
                      uVar16 = uVar16 - uVar38 >> 8 | iVar24 * 0x1000000;
                      lVar4 = (ulonglong)uVar16 * (ulonglong)uStack_e8;
                      uVar50 = (uint)lVar4;
                      uVar39 = (uint)((longlong)iVar19 * (longlong)iVar29);
                      uVar38 = (uint)((longlong)iVar10 * (longlong)iVar30);
                      iVar10 = (int)((ulonglong)((longlong)iVar10 * (longlong)iVar30) >> 0x20) -
                               ((int)((ulonglong)((longlong)iVar19 * (longlong)iVar29) >> 0x20) +
                               (uint)(uVar38 < uVar39));
                      uVar52 = uVar38 - uVar39 >> 8 | iVar10 * 0x1000000;
                      lVar5 = (ulonglong)uVar52 * (ulonglong)uStack_ec;
                      uVar38 = (uint)lVar5;
                      uVar39 = uVar38 + uVar50;
                      uVar54 = uVar39 + uVar40;
                      iVar10 = uStack_ec * (iVar10 >> 8) +
                               iVar57 * uVar52 + (int)((ulonglong)lVar5 >> 0x20) +
                               uStack_e8 * (iVar24 >> 8) +
                               iVar56 * uVar16 + (int)((ulonglong)lVar4 >> 0x20) +
                               (uint)CARRY4(uVar38,uVar50) +
                               uStack_e4 * (iVar25 >> 8) +
                               iVar22 * uVar20 + (int)((ulonglong)lVar3 >> 0x20) +
                               (uint)CARRY4(uVar39,uVar40);
                      if ((int)-(iVar10 + (uint)(uVar54 != 0)) < 0 ==
                          (SBORROW4(0,iVar10) != SBORROW4(-iVar10,(uint)(uVar54 != 0)))) {
                        uVar16 = (uint)((longlong)iVar34 * (longlong)iVar26);
                        uVar20 = (uint)((longlong)iVar33 * (longlong)iVar29);
                        iVar24 = (int)((ulonglong)((longlong)iVar33 * (longlong)iVar29) >> 0x20) -
                                 ((int)((ulonglong)((longlong)iVar34 * (longlong)iVar26) >> 0x20) +
                                 (uint)(uVar20 < uVar16));
                        uVar20 = uVar20 - uVar16 >> 8 | iVar24 * 0x1000000;
                        lVar3 = (ulonglong)uVar20 * (ulonglong)uStack_e4;
                        uVar50 = (uint)lVar3;
                        uVar38 = (uint)((longlong)iVar33 * (longlong)iVar30);
                        uVar16 = (uint)((longlong)iVar35 * (longlong)iVar26);
                        iVar19 = (int)((ulonglong)((longlong)iVar35 * (longlong)iVar26) >> 0x20) -
                                 ((int)((ulonglong)((longlong)iVar33 * (longlong)iVar30) >> 0x20) +
                                 (uint)(uVar16 < uVar38));
                        uVar16 = uVar16 - uVar38 >> 8 | iVar19 * 0x1000000;
                        lVar4 = (ulonglong)uVar16 * (ulonglong)uStack_e8;
                        uVar53 = (uint)lVar4;
                        uVar39 = (uint)((longlong)iVar35 * (longlong)iVar29);
                        uVar38 = (uint)((longlong)iVar34 * (longlong)iVar30);
                        iVar33 = (int)((ulonglong)((longlong)iVar34 * (longlong)iVar30) >> 0x20) -
                                 ((int)((ulonglong)((longlong)iVar35 * (longlong)iVar29) >> 0x20) +
                                 (uint)(uVar38 < uVar39));
                        uVar40 = uVar38 - uVar39 >> 8 | iVar33 * 0x1000000;
                        lVar5 = (ulonglong)uVar40 * (ulonglong)uStack_ec;
                        uVar38 = (uint)lVar5;
                        uVar39 = uVar38 + uVar53;
                        uVar52 = uVar39 + uVar50;
                        iVar19 = uStack_ec * (iVar33 >> 8) +
                                 iVar57 * uVar40 + (int)((ulonglong)lVar5 >> 0x20) +
                                 uStack_e8 * (iVar19 >> 8) +
                                 iVar56 * uVar16 + (int)((ulonglong)lVar4 >> 0x20) +
                                 (uint)CARRY4(uVar38,uVar53) +
                                 uStack_e4 * (iVar24 >> 8) +
                                 iVar22 * uVar20 + (int)((ulonglong)lVar3 >> 0x20) +
                                 (uint)CARRY4(uVar39,uVar50);
                        iVar24 = iVar28 + iVar19 + (uint)CARRY4(uVar42,uVar52);
                        bVar61 = uVar42 + uVar52 != 0;
                        if (((int)-(iVar24 + (uint)bVar61) < 0 ==
                             (SBORROW4(0,iVar24) != SBORROW4(-iVar24,(uint)bVar61))) &&
                           (iVar10 = iVar10 + iVar19 + (uint)CARRY4(uVar54,uVar52),
                           bVar61 = uVar54 + uVar52 != 0,
                           (int)-(iVar10 + (uint)bVar61) < 0 ==
                           (SBORROW4(0,iVar10) != SBORROW4(-iVar10,(uint)bVar61))))
                        goto LAB_4a0434f0;
                      }
                    }
                    goto LAB_4a043508;
                  }
                  iVar19 = *(int *)(puStack_98 + 2) - *(int *)(puVar45 + 2);
                  iVar34 = *(int *)(puStack_98 + 4) - *(int *)(puVar45 + 4);
                  iVar35 = *(int *)(puStack_98 + 6) - *(int *)(puVar45 + 6);
                  iVar24 = puVar44[1] - *(int *)(puStack_98 + 2);
                  iVar33 = puVar44[2] - *(int *)(puStack_98 + 4);
                  iVar10 = puVar44[3] - *(int *)(puStack_98 + 6);
                  if ((**(uint **)PTR_DAT_4a042dfc & 0x80000000) == 0) {
                    uStack_ec = *(uint *)(puVar45 + 2);
                    uStack_e8 = *(uint *)(puVar45 + 4);
                    uStack_e4 = *(uint *)(puVar45 + 6);
                  }
                  else {
                    uStack_ec = *(uint *)PTR_DAT_4a042e0c;
                    uStack_e8 = *(uint *)(PTR_DAT_4a042e0c + 4);
                    uStack_e4 = *(uint *)(PTR_DAT_4a042e0c + 8);
                  }
                  uVar16 = (uint)((longlong)iVar34 * (longlong)iVar24);
                  uVar20 = (uint)((longlong)iVar19 * (longlong)iVar33);
                  iVar28 = (int)((ulonglong)((longlong)iVar19 * (longlong)iVar33) >> 0x20) -
                           ((int)((ulonglong)((longlong)iVar34 * (longlong)iVar24) >> 0x20) +
                           (uint)(uVar20 < uVar16));
                  uVar20 = uVar20 - uVar16 >> 8 | iVar28 * 0x1000000;
                  lVar3 = (ulonglong)uVar20 * (ulonglong)uStack_e4;
                  uVar52 = (uint)lVar3;
                  iVar22 = (int)uStack_e4 >> 0x1f;
                  uVar38 = (uint)((longlong)iVar19 * (longlong)iVar10);
                  uVar16 = (uint)((longlong)iVar35 * (longlong)iVar24);
                  iVar29 = (int)((ulonglong)((longlong)iVar35 * (longlong)iVar24) >> 0x20) -
                           ((int)((ulonglong)((longlong)iVar19 * (longlong)iVar10) >> 0x20) +
                           (uint)(uVar16 < uVar38));
                  uVar16 = uVar16 - uVar38 >> 8 | iVar29 * 0x1000000;
                  lVar4 = (ulonglong)uVar16 * (ulonglong)uStack_e8;
                  uVar40 = (uint)lVar4;
                  iVar56 = (int)uStack_e8 >> 0x1f;
                  uVar39 = (uint)((longlong)iVar35 * (longlong)iVar33);
                  uVar38 = (uint)((longlong)iVar34 * (longlong)iVar10);
                  iVar30 = (int)((ulonglong)((longlong)iVar34 * (longlong)iVar10) >> 0x20) -
                           ((int)((ulonglong)((longlong)iVar35 * (longlong)iVar33) >> 0x20) +
                           (uint)(uVar38 < uVar39));
                  uVar54 = uVar38 - uVar39 >> 8 | iVar30 * 0x1000000;
                  lVar5 = (ulonglong)uVar54 * (ulonglong)uStack_ec;
                  uVar38 = (uint)lVar5;
                  iVar57 = (int)uStack_ec >> 0x1f;
                  uVar39 = uVar38 + uVar40;
                  uVar42 = uVar39 + uVar52;
                  iVar28 = uStack_ec * (iVar30 >> 8) +
                           iVar57 * uVar54 + (int)((ulonglong)lVar5 >> 0x20) +
                           uStack_e8 * (iVar29 >> 8) +
                           iVar56 * uVar16 + (int)((ulonglong)lVar4 >> 0x20) +
                           (uint)CARRY4(uVar38,uVar40) +
                           uStack_e4 * (iVar28 >> 8) +
                           iVar22 * uVar20 + (int)((ulonglong)lVar3 >> 0x20) +
                           (uint)CARRY4(uVar39,uVar52);
                  if ((int)-(iVar28 + (uint)(uVar42 != 0)) < 0 ==
                      (SBORROW4(0,iVar28) != SBORROW4(-iVar28,(uint)(uVar42 != 0)))) {
                    iVar26 = *(int *)(puStack_94 + 2) - puVar44[1];
                    iVar29 = *(int *)(puStack_94 + 4) - puVar44[2];
                    iVar30 = *(int *)(puStack_94 + 6) - puVar44[3];
                    uVar16 = (uint)((longlong)iVar33 * (longlong)iVar26);
                    uVar20 = (uint)((longlong)iVar24 * (longlong)iVar29);
                    iVar25 = (int)((ulonglong)((longlong)iVar24 * (longlong)iVar29) >> 0x20) -
                             ((int)((ulonglong)((longlong)iVar33 * (longlong)iVar26) >> 0x20) +
                             (uint)(uVar20 < uVar16));
                    uVar20 = uVar20 - uVar16 >> 8 | iVar25 * 0x1000000;
                    lVar3 = (ulonglong)uVar20 * (ulonglong)uStack_e4;
                    uVar40 = (uint)lVar3;
                    uVar38 = (uint)((longlong)iVar24 * (longlong)iVar30);
                    uVar16 = (uint)((longlong)iVar10 * (longlong)iVar26);
                    iVar24 = (int)((ulonglong)((longlong)iVar10 * (longlong)iVar26) >> 0x20) -
                             ((int)((ulonglong)((longlong)iVar24 * (longlong)iVar30) >> 0x20) +
                             (uint)(uVar16 < uVar38));
                    uVar16 = uVar16 - uVar38 >> 8 | iVar24 * 0x1000000;
                    lVar4 = (ulonglong)uVar16 * (ulonglong)uStack_e8;
                    uVar50 = (uint)lVar4;
                    uVar39 = (uint)((longlong)iVar10 * (longlong)iVar29);
                    uVar38 = (uint)((longlong)iVar33 * (longlong)iVar30);
                    iVar10 = (int)((ulonglong)((longlong)iVar33 * (longlong)iVar30) >> 0x20) -
                             ((int)((ulonglong)((longlong)iVar10 * (longlong)iVar29) >> 0x20) +
                             (uint)(uVar38 < uVar39));
                    uVar52 = uVar38 - uVar39 >> 8 | iVar10 * 0x1000000;
                    lVar5 = (ulonglong)uVar52 * (ulonglong)uStack_ec;
                    uVar38 = (uint)lVar5;
                    uVar39 = uVar38 + uVar50;
                    uVar54 = uVar39 + uVar40;
                    iVar10 = uStack_ec * (iVar10 >> 8) +
                             iVar57 * uVar52 + (int)((ulonglong)lVar5 >> 0x20) +
                             uStack_e8 * (iVar24 >> 8) +
                             iVar56 * uVar16 + (int)((ulonglong)lVar4 >> 0x20) +
                             (uint)CARRY4(uVar38,uVar50) +
                             uStack_e4 * (iVar25 >> 8) +
                             iVar22 * uVar20 + (int)((ulonglong)lVar3 >> 0x20) +
                             (uint)CARRY4(uVar39,uVar40);
                    if ((int)-(iVar10 + (uint)(uVar54 != 0)) < 0 !=
                        (SBORROW4(0,iVar10) != SBORROW4(-iVar10,(uint)(uVar54 != 0))))
                    goto LAB_4a042fc0;
                    uVar16 = (uint)((longlong)iVar34 * (longlong)iVar26);
                    uVar20 = (uint)((longlong)iVar19 * (longlong)iVar29);
                    iVar24 = (int)((ulonglong)((longlong)iVar19 * (longlong)iVar29) >> 0x20) -
                             ((int)((ulonglong)((longlong)iVar34 * (longlong)iVar26) >> 0x20) +
                             (uint)(uVar20 < uVar16));
                    uVar20 = uVar20 - uVar16 >> 8 | iVar24 * 0x1000000;
                    lVar3 = (ulonglong)uVar20 * (ulonglong)uStack_e4;
                    uVar50 = (uint)lVar3;
                    uVar38 = (uint)((longlong)iVar19 * (longlong)iVar30);
                    uVar16 = (uint)((longlong)iVar35 * (longlong)iVar26);
                    iVar19 = (int)((ulonglong)((longlong)iVar35 * (longlong)iVar26) >> 0x20) -
                             ((int)((ulonglong)((longlong)iVar19 * (longlong)iVar30) >> 0x20) +
                             (uint)(uVar16 < uVar38));
                    uVar16 = uVar16 - uVar38 >> 8 | iVar19 * 0x1000000;
                    lVar4 = (ulonglong)uVar16 * (ulonglong)uStack_e8;
                    uVar53 = (uint)lVar4;
                    uVar39 = (uint)((longlong)iVar35 * (longlong)iVar29);
                    uVar38 = (uint)((longlong)iVar34 * (longlong)iVar30);
                    iVar33 = (int)((ulonglong)((longlong)iVar34 * (longlong)iVar30) >> 0x20) -
                             ((int)((ulonglong)((longlong)iVar35 * (longlong)iVar29) >> 0x20) +
                             (uint)(uVar38 < uVar39));
                    uVar40 = uVar38 - uVar39 >> 8 | iVar33 * 0x1000000;
                    lVar5 = (ulonglong)uVar40 * (ulonglong)uStack_ec;
                    uVar38 = (uint)lVar5;
                    uVar39 = uVar38 + uVar53;
                    uVar52 = uVar39 + uVar50;
                    iVar19 = uStack_ec * (iVar33 >> 8) +
                             iVar57 * uVar40 + (int)((ulonglong)lVar5 >> 0x20) +
                             uStack_e8 * (iVar19 >> 8) +
                             iVar56 * uVar16 + (int)((ulonglong)lVar4 >> 0x20) +
                             (uint)CARRY4(uVar38,uVar53) +
                             uStack_e4 * (iVar24 >> 8) +
                             iVar22 * uVar20 + (int)((ulonglong)lVar3 >> 0x20) +
                             (uint)CARRY4(uVar39,uVar50);
                    iVar24 = iVar28 + iVar19 + (uint)CARRY4(uVar42,uVar52);
                    bVar61 = uVar42 + uVar52 != 0;
                    if (((int)-(iVar24 + (uint)bVar61) < 0 !=
                         (SBORROW4(0,iVar24) != SBORROW4(-iVar24,(uint)bVar61))) ||
                       (iVar10 = iVar10 + iVar19 + (uint)CARRY4(uVar54,uVar52),
                       bVar61 = uVar54 + uVar52 != 0,
                       (int)-(iVar10 + (uint)bVar61) < 0 !=
                       (SBORROW4(0,iVar10) != SBORROW4(-iVar10,(uint)bVar61)))) goto LAB_4a042fc0;
                    bVar61 = false;
                  }
                  else {
LAB_4a042fc0:
                    bVar61 = true;
                  }
                  if (!bVar61) goto LAB_4a0434f0;
LAB_4a0434f8:
                  iVar10 = 2;
                }
                else {
                  iVar56 = *(int *)(puStack_94 + 2) - *(int *)(puVar45 + 2);
                  iVar10 = *(int *)(puStack_94 + 4) - *(int *)(puVar45 + 4);
                  iVar35 = *(int *)(puStack_94 + 6) - *(int *)(puVar45 + 6);
                  iVar57 = puVar44[1] - *(int *)(puStack_94 + 2);
                  iVar22 = puVar44[2] - *(int *)(puStack_94 + 4);
                  iVar19 = puVar44[3] - *(int *)(puStack_94 + 6);
                  iVar33 = *(int *)(puStack_98 + 2) - puVar44[1];
                  iVar24 = *(int *)(puStack_98 + 4) - puVar44[2];
                  iVar34 = *(int *)(puStack_98 + 6) - puVar44[3];
                  if ((**(uint **)PTR_DAT_4a042dfc & 0x80000000) == 0) {
                    uStack_100 = *(uint *)(puVar45 + 2);
                    uStack_fc = *(uint *)(puVar45 + 4);
                    uStack_f8 = *(uint *)(puVar45 + 6);
                  }
                  else {
                    uStack_100 = *(uint *)PTR_DAT_4a042e0c;
                    uStack_fc = *(uint *)(PTR_DAT_4a042e0c + 4);
                    uStack_f8 = *(uint *)(PTR_DAT_4a042e0c + 8);
                  }
                  uVar16 = (uint)((longlong)iVar10 * (longlong)iVar57);
                  uVar20 = (uint)((longlong)iVar56 * (longlong)iVar22);
                  iVar25 = (int)((ulonglong)((longlong)iVar56 * (longlong)iVar22) >> 0x20) -
                           ((int)((ulonglong)((longlong)iVar10 * (longlong)iVar57) >> 0x20) +
                           (uint)(uVar20 < uVar16));
                  uVar20 = uVar20 - uVar16 >> 8 | iVar25 * 0x1000000;
                  lVar3 = (ulonglong)uVar20 * (ulonglong)uStack_f8;
                  uVar40 = (uint)lVar3;
                  iVar28 = (int)uStack_f8 >> 0x1f;
                  uVar38 = (uint)((longlong)iVar56 * (longlong)iVar19);
                  uVar16 = (uint)((longlong)iVar35 * (longlong)iVar57);
                  iVar26 = (int)((ulonglong)((longlong)iVar35 * (longlong)iVar57) >> 0x20) -
                           ((int)((ulonglong)((longlong)iVar56 * (longlong)iVar19) >> 0x20) +
                           (uint)(uVar16 < uVar38));
                  uVar16 = uVar16 - uVar38 >> 8 | iVar26 * 0x1000000;
                  lVar4 = (ulonglong)uVar16 * (ulonglong)uStack_fc;
                  uVar52 = (uint)lVar4;
                  iVar29 = (int)uStack_fc >> 0x1f;
                  uVar39 = (uint)((longlong)iVar35 * (longlong)iVar22);
                  uVar38 = (uint)((longlong)iVar10 * (longlong)iVar19);
                  iVar27 = (int)((ulonglong)((longlong)iVar10 * (longlong)iVar19) >> 0x20) -
                           ((int)((ulonglong)((longlong)iVar35 * (longlong)iVar22) >> 0x20) +
                           (uint)(uVar38 < uVar39));
                  uVar54 = uVar38 - uVar39 >> 8 | iVar27 * 0x1000000;
                  lVar5 = (ulonglong)uVar54 * (ulonglong)uStack_100;
                  uVar38 = (uint)lVar5;
                  iVar30 = (int)uStack_100 >> 0x1f;
                  uVar39 = uVar38 + uVar52;
                  uVar42 = uVar39 + uVar40;
                  iVar25 = uStack_100 * (iVar27 >> 8) +
                           iVar30 * uVar54 + (int)((ulonglong)lVar5 >> 0x20) +
                           uStack_fc * (iVar26 >> 8) +
                           iVar29 * uVar16 + (int)((ulonglong)lVar4 >> 0x20) +
                           (uint)CARRY4(uVar38,uVar52) +
                           uStack_f8 * (iVar25 >> 8) +
                           iVar28 * uVar20 + (int)((ulonglong)lVar3 >> 0x20) +
                           (uint)CARRY4(uVar39,uVar40);
                  uVar16 = (uint)((longlong)iVar22 * (longlong)iVar33);
                  uVar20 = (uint)((longlong)iVar57 * (longlong)iVar24);
                  iVar26 = (int)((ulonglong)((longlong)iVar57 * (longlong)iVar24) >> 0x20) -
                           ((int)((ulonglong)((longlong)iVar22 * (longlong)iVar33) >> 0x20) +
                           (uint)(uVar20 < uVar16));
                  uVar20 = uVar20 - uVar16 >> 8 | iVar26 * 0x1000000;
                  lVar3 = (ulonglong)uVar20 * (ulonglong)uStack_f8;
                  uVar52 = (uint)lVar3;
                  uVar38 = (uint)((longlong)iVar57 * (longlong)iVar34);
                  uVar16 = (uint)((longlong)iVar19 * (longlong)iVar33);
                  iVar57 = (int)((ulonglong)((longlong)iVar19 * (longlong)iVar33) >> 0x20) -
                           ((int)((ulonglong)((longlong)iVar57 * (longlong)iVar34) >> 0x20) +
                           (uint)(uVar16 < uVar38));
                  uVar16 = uVar16 - uVar38 >> 8 | iVar57 * 0x1000000;
                  lVar4 = (ulonglong)uVar16 * (ulonglong)uStack_fc;
                  uVar50 = (uint)lVar4;
                  uVar39 = (uint)((longlong)iVar19 * (longlong)iVar24);
                  uVar38 = (uint)((longlong)iVar22 * (longlong)iVar34);
                  iVar19 = (int)((ulonglong)((longlong)iVar22 * (longlong)iVar34) >> 0x20) -
                           ((int)((ulonglong)((longlong)iVar19 * (longlong)iVar24) >> 0x20) +
                           (uint)(uVar38 < uVar39));
                  uVar40 = uVar38 - uVar39 >> 8 | iVar19 * 0x1000000;
                  lVar5 = (ulonglong)uVar40 * (ulonglong)uStack_100;
                  uVar38 = (uint)lVar5;
                  uVar39 = uVar38 + uVar50;
                  uVar54 = uVar39 + uVar52;
                  iVar19 = uStack_100 * (iVar19 >> 8) +
                           iVar30 * uVar40 + (int)((ulonglong)lVar5 >> 0x20) +
                           uStack_fc * (iVar57 >> 8) +
                           iVar29 * uVar16 + (int)((ulonglong)lVar4 >> 0x20) +
                           (uint)CARRY4(uVar38,uVar50) +
                           uStack_f8 * (iVar26 >> 8) +
                           iVar28 * uVar20 + (int)((ulonglong)lVar3 >> 0x20) +
                           (uint)CARRY4(uVar39,uVar52);
                  uVar16 = (uint)((longlong)iVar10 * (longlong)iVar33);
                  uVar20 = (uint)((longlong)iVar56 * (longlong)iVar24);
                  iVar22 = (int)((ulonglong)((longlong)iVar56 * (longlong)iVar24) >> 0x20) -
                           ((int)((ulonglong)((longlong)iVar10 * (longlong)iVar33) >> 0x20) +
                           (uint)(uVar20 < uVar16));
                  uVar20 = uVar20 - uVar16 >> 8 | iVar22 * 0x1000000;
                  lVar3 = (ulonglong)uVar20 * (ulonglong)uStack_f8;
                  uVar53 = (uint)lVar3;
                  uVar38 = (uint)((longlong)iVar56 * (longlong)iVar34);
                  uVar16 = (uint)((longlong)iVar35 * (longlong)iVar33);
                  iVar33 = (int)((ulonglong)((longlong)iVar35 * (longlong)iVar33) >> 0x20) -
                           ((int)((ulonglong)((longlong)iVar56 * (longlong)iVar34) >> 0x20) +
                           (uint)(uVar16 < uVar38));
                  uVar16 = uVar16 - uVar38 >> 8 | iVar33 * 0x1000000;
                  lVar4 = (ulonglong)uVar16 * (ulonglong)uStack_fc;
                  uVar50 = (uint)lVar4;
                  uVar39 = (uint)((longlong)iVar35 * (longlong)iVar24);
                  uVar38 = (uint)((longlong)iVar10 * (longlong)iVar34);
                  iVar10 = (int)((ulonglong)((longlong)iVar10 * (longlong)iVar34) >> 0x20) -
                           ((int)((ulonglong)((longlong)iVar35 * (longlong)iVar24) >> 0x20) +
                           (uint)(uVar38 < uVar39));
                  uVar40 = uVar38 - uVar39 >> 8 | iVar10 * 0x1000000;
                  lVar5 = (ulonglong)uVar40 * (ulonglong)uStack_100;
                  uVar38 = (uint)lVar5;
                  uVar39 = uVar38 + uVar50;
                  uVar52 = uVar39 + uVar53;
                  iVar24 = uStack_100 * (iVar10 >> 8) +
                           iVar30 * uVar40 + (int)((ulonglong)lVar5 >> 0x20) +
                           (iVar33 >> 8) * uStack_fc +
                           iVar29 * uVar16 + (int)((ulonglong)lVar4 >> 0x20) +
                           (uint)CARRY4(uVar38,uVar50) +
                           uStack_f8 * (iVar22 >> 8) +
                           iVar28 * uVar20 + (int)((ulonglong)lVar3 >> 0x20) +
                           (uint)CARRY4(uVar39,uVar53);
                  bVar61 = (int)-(iVar25 + (uint)(uVar42 != 0)) < 0 !=
                           (SBORROW4(0,iVar25) != SBORROW4(-iVar25,(uint)(uVar42 != 0)));
                  bVar65 = (int)-(iVar19 + (uint)(uVar54 != 0)) < 0 !=
                           (SBORROW4(0,iVar19) != SBORROW4(-iVar19,(uint)(uVar54 != 0)));
                  iVar10 = iVar19 + iVar24 + (uint)CARRY4(uVar54,uVar52);
                  bVar63 = uVar54 + uVar52 != 0;
                  bVar63 = (int)-(iVar10 + (uint)bVar63) < 0 !=
                           (SBORROW4(0,iVar10) != SBORROW4(-iVar10,(uint)bVar63));
                  iVar24 = iVar25 + iVar24 + (uint)CARRY4(uVar42,uVar52);
                  bVar64 = uVar42 + uVar52 != 0;
                  bVar64 = (int)-(iVar24 + (uint)bVar64) < 0 !=
                           (SBORROW4(0,iVar24) != SBORROW4(-iVar24,(uint)bVar64));
                  if ((bVar64 || (bVar63 || (bVar65 || bVar61))) &&
                      (iVar24 < 0 || (iVar10 < 0 || (iVar19 < 0 || iVar25 < 0)))) {
                    iVar10 = 3;
                  }
                  else {
                    if (!bVar64 && (!bVar63 && (!bVar65 && !bVar61))) {
                      if (iVar24 >= 0 && (iVar10 >= 0 && (iVar19 >= 0 && iVar25 >= 0)))
                      goto LAB_4a0434f0;
                      goto LAB_4a0434f8;
                    }
LAB_4a043508:
                    iVar10 = 1;
                  }
                }
                if (iVar10 == 0) goto LAB_4a04414c;
                uVar49 = puStack_94[8];
                if ((uVar49 & 0xbf) == 0x80) {
                  puStack_94[8] = uVar49 & 0xff7f;
                  iVar24 = *(int *)PTR_DAT_4a042dfc;
                  if ((uVar49 & 0x400) == 0) {
                    uVar51 = *(undefined4 *)(puStack_94 + 6);
                    iVar19 = FUN_4a0015f0(*(int *)(puStack_94 + 2) << 0xb,uVar51);
                    uVar49 = (ushort)((uint)(*(int *)(iVar24 + 0x310) * iVar19 * 0x10) >> 0x10);
                    iVar19 = FUN_4a0015f0(*(int *)(puStack_94 + 4) << 0xb,uVar51);
                    uVar9 = (ushort)((uint)(*(int *)(iVar24 + 0x314) * iVar19 * 0x10) >> 0x10);
                  }
                  else {
                    uVar49 = (ushort)((uint)((*(int *)(iVar24 + 0x34c) * 8 + -1) *
                                             *(int *)(puStack_94 + 2) * 8) >> 0x10);
                    uVar9 = (ushort)((uint)(*(int *)(puStack_94 + 4) *
                                            (*(int *)(iVar24 + 0x350) * 8 + -1) * 8) >> 0x10);
                  }
                  iVar19 = *(int *)(iVar24 + 0x354);
                  if (iVar19 == 0) {
                    *puStack_94 = uVar49;
                    puStack_94[1] = uVar9;
                  }
                  else if (iVar19 == 1) {
                    *puStack_94 = ~uVar9;
                    puStack_94[1] = uVar49;
                  }
                  else if (iVar19 == 2) {
                    *puStack_94 = ~uVar49;
                    puStack_94[1] = ~uVar9;
                  }
                  else if (iVar19 == 3) {
                    *puStack_94 = uVar9;
                    puStack_94[1] = ~uVar49;
                  }
                  *puStack_94 = (short)*(undefined4 *)(iVar24 + 800) + *puStack_94;
                  puStack_94[1] = (short)*(undefined4 *)(iVar24 + 0x328) + puStack_94[1];
                }
                puVar37 = PTR_DAT_4a042dfc;
                uVar49 = puVar45[8];
                if ((uVar49 & 0xbf) == 0x80) {
                  puVar45[8] = uVar49 & 0xff7f;
                  iVar24 = *(int *)puVar37;
                  if ((uVar49 & 0x400) == 0) {
                    uVar51 = *(undefined4 *)(puVar45 + 6);
                    iVar19 = FUN_4a0015f0(*(int *)(puVar45 + 2) << 0xb,uVar51);
                    uVar9 = (ushort)((uint)(*(int *)(iVar24 + 0x310) * iVar19 * 0x10) >> 0x10);
                    iVar19 = FUN_4a0015f0(*(int *)(puVar45 + 4) << 0xb,uVar51);
                    uVar49 = (ushort)((uint)(*(int *)(iVar24 + 0x314) * iVar19 * 0x10) >> 0x10);
                  }
                  else {
                    uVar9 = (ushort)((uint)((*(int *)(iVar24 + 0x34c) * 8 + -1) *
                                            *(int *)(puVar45 + 2) * 8) >> 0x10);
                    uVar49 = (ushort)((uint)(*(int *)(puVar45 + 4) *
                                             (*(int *)(iVar24 + 0x350) * 8 + -1) * 8) >> 0x10);
                  }
                  iVar19 = *(int *)(iVar24 + 0x354);
                  if (iVar19 == 0) {
                    *puVar45 = uVar9;
                    puVar45[1] = uVar49;
                  }
                  else if (iVar19 == 1) {
                    *puVar45 = ~uVar49;
                    puVar45[1] = uVar9;
                  }
                  else {
                    if (iVar19 == 2) {
                      *puVar45 = ~uVar9;
                      uVar9 = uVar49;
                    }
                    else {
                      if (iVar19 != 3) goto LAB_4a043774;
                      *puVar45 = uVar49;
                    }
                    puVar45[1] = ~uVar9;
                  }
LAB_4a043774:
                  *puVar45 = (short)*(undefined4 *)(iVar24 + 800) + *puVar45;
                  puVar45[1] = (short)*(undefined4 *)(iVar24 + 0x328) + puVar45[1];
                }
                uVar49 = puStack_98[8];
                if ((uVar49 & 0xbf) == 0x80) {
                  puStack_98[8] = uVar49 & 0xff7f;
                  iVar24 = *(int *)PTR_DAT_4a042dfc;
                  if ((uVar49 & 0x400) == 0) {
                    uVar51 = *(undefined4 *)(puStack_98 + 6);
                    iVar19 = FUN_4a0015f0(*(int *)(puStack_98 + 2) << 0xb,uVar51);
                    uVar49 = (ushort)((uint)(*(int *)(iVar24 + 0x310) * iVar19 * 0x10) >> 0x10);
                    iVar19 = FUN_4a0015f0(*(int *)(puStack_98 + 4) << 0xb,uVar51);
                    uVar9 = (ushort)((uint)(*(int *)(iVar24 + 0x314) * iVar19 * 0x10) >> 0x10);
                  }
                  else {
                    uVar49 = (ushort)((uint)((*(int *)(iVar24 + 0x34c) * 8 + -1) *
                                             *(int *)(puStack_98 + 2) * 8) >> 0x10);
                    uVar9 = (ushort)((uint)(*(int *)(puStack_98 + 4) *
                                            (*(int *)(iVar24 + 0x350) * 8 + -1) * 8) >> 0x10);
                  }
                  iVar19 = *(int *)(iVar24 + 0x354);
                  if (iVar19 == 0) {
                    *puStack_98 = uVar49;
                    puStack_98[1] = uVar9;
                  }
                  else if (iVar19 == 1) {
                    *puStack_98 = ~uVar9;
                    puStack_98[1] = uVar49;
                  }
                  else if (iVar19 == 2) {
                    *puStack_98 = ~uVar49;
                    puStack_98[1] = ~uVar9;
                  }
                  else if (iVar19 == 3) {
                    *puStack_98 = uVar9;
                    puStack_98[1] = ~uVar49;
                  }
                  *puStack_98 = (short)*(undefined4 *)(iVar24 + 800) + *puStack_98;
                  puStack_98[1] = (short)*(undefined4 *)(iVar24 + 0x328) + puStack_98[1];
                }
                puVar37 = PTR_DAT_4a042dfc;
                if ((puVar44 != (uint *)0x0) &&
                   (uVar49 = (ushort)puVar44[4], (uVar49 & 0xbf) == 0x80)) {
                  *(ushort *)(puVar44 + 4) = uVar49 & 0xff7f;
                  iVar24 = *(int *)puVar37;
                  if ((uVar49 & 0x400) == 0) {
                    uVar20 = puVar44[3];
                    iVar19 = FUN_4a0015f0(puVar44[1] << 0xb,uVar20);
                    uVar9 = (ushort)((uint)(*(int *)(iVar24 + 0x310) * iVar19 * 0x10) >> 0x10);
                    iVar19 = FUN_4a0015f0(puVar44[2] << 0xb,uVar20);
                    uVar49 = (ushort)((uint)(*(int *)(iVar24 + 0x314) * iVar19 * 0x10) >> 0x10);
                  }
                  else {
                    uVar9 = (ushort)((*(int *)(iVar24 + 0x34c) * 8 + -1) * puVar44[1] * 8 >> 0x10);
                    uVar49 = (ushort)(puVar44[2] * (*(int *)(iVar24 + 0x350) * 8 + -1) * 8 >> 0x10);
                  }
                  iVar19 = *(int *)(iVar24 + 0x354);
                  if (iVar19 == 0) {
                    *(ushort *)puVar44 = uVar9;
                    *(ushort *)((int)puVar44 + 2) = uVar49;
                  }
                  else if (iVar19 == 1) {
                    *(ushort *)puVar44 = ~uVar49;
                    *(ushort *)((int)puVar44 + 2) = uVar9;
                  }
                  else {
                    if (iVar19 == 2) {
                      *(ushort *)puVar44 = ~uVar9;
                      uVar9 = uVar49;
                    }
                    else {
                      if (iVar19 != 3) goto LAB_4a0439fc;
                      *(ushort *)puVar44 = uVar49;
                    }
                    *(ushort *)((int)puVar44 + 2) = ~uVar9;
                  }
LAB_4a0439fc:
                  *(ushort *)puVar44 = (short)*(undefined4 *)(iVar24 + 800) + (ushort)*puVar44;
                  *(ushort *)((int)puVar44 + 2) =
                       (short)*(undefined4 *)(iVar24 + 0x328) + *(ushort *)((int)puVar44 + 2);
                }
                if (local_58[0x145] == 0xffffffff) {
                  uVar38 = *(uint *)(puVar45 + 6);
                  uVar39 = *(uint *)(puStack_98 + 6);
                  uVar20 = *(uint *)(puStack_94 + 6);
                  uVar16 = uVar39;
                  if ((int)uVar39 < (int)uVar38) {
                    uVar16 = uVar38;
                  }
                  if (((int)uVar20 <= (int)uVar16) && (uVar20 = uVar38, (int)uVar38 <= (int)uVar39))
                  {
                    uVar20 = uVar39;
                  }
                  if ((puVar44 != (uint *)0x0) && ((int)uVar20 <= (int)puVar44[3])) {
                    uVar20 = puVar44[3];
                  }
                  iVar24 = FUN_4a03b088(uVar20);
                  iVar19 = FUN_4a030140();
                  puStack_78 = (undefined *)(iVar19 + iVar24);
                }
                else {
                  puStack_78 = (undefined *)FUN_4a03b0cc();
                }
                uVar20 = local_58[0xeb];
                puVar37 = puStack_78;
                if ((int)(uVar20 - 1) < (int)puStack_78) {
                  puVar37 = (undefined *)(uVar20 - 1);
                }
                if ((int)puVar37 < 0) {
                  puStack_78 = (undefined *)0x0;
                }
                else if ((int)(uVar20 - 1) < (int)puStack_78) {
                  puStack_78 = (undefined *)(uVar20 - 1);
                }
              }
              puVar37 = PTR_DAT_4a042dfc;
              if (iVar10 == 2) {
                uStack_88 = uStack_7c;
                uStack_7c = uVar12;
                puStack_94 = (ushort *)(uVar11 + uVar12 * 0x14);
                puStack_98 = (ushort *)(uVar11 + uVar15 * 0x14);
              }
              if (puVar44 == (uint *)0x0) {
                iVar24 = *piVar18;
              }
              else {
                iVar24 = piVar18[1];
              }
              puVar17 = *(undefined4 **)(*(int *)PTR_DAT_4a042dfc + 0x398);
              *(uint *)(*(int *)PTR_DAT_4a042dfc + 0x398) =
                   (iVar24 + 3U & 0xfffffffc) + (int)puVar17;
              iVar24 = piVar18[8];
              puVar36 = puVar17 + piVar18[3];
              *puVar36 = puStack_94;
              puVar36 = puVar36 + iVar24;
              *puVar36 = puVar45;
              puVar36[iVar24] = puStack_98;
              if (puVar44 != (uint *)0x0) {
                (puVar36 + iVar24)[iVar24] = puVar44;
              }
              if (uStack_a4 == 0) {
                if (bVar59) {
                  puVar17[piVar18[4]] = uStack_64;
                }
                else {
                  puVar17[piVar18[4]] = *(undefined4 *)(uStack_60 + uStack_88 * 4);
                }
              }
              else {
                puVar31 = puVar44;
                if (uStack_60 == 0) {
                  iVar24 = piVar18[8];
                  puVar48 = puVar17 + piVar18[4];
                  *puVar48 = uStack_64;
                  if (puVar44 != (uint *)0x0) {
                    puVar31 = &uStack_64;
                  }
                  puVar48[iVar24] = uStack_64;
                  puVar48 = puVar48 + iVar24 + iVar24;
                  *puVar48 = uStack_64;
                }
                else {
                  iVar24 = piVar18[8];
                  puVar41 = puVar17 + piVar18[4];
                  puVar36 = (undefined4 *)(uStack_60 + uStack_90 * 4);
                  if (puVar44 != (uint *)0x0) {
                    puVar31 = (uint *)(uStack_60 + uStack_80 * 4);
                  }
                  *puVar41 = *(undefined4 *)(uStack_60 + uStack_7c * 4);
                  if (puVar36 == (undefined4 *)0x0) goto LAB_4a043f58;
                  puVar41[iVar24] = *puVar36;
                  puVar48 = puVar41 + iVar24 + iVar24;
                  *puVar48 = *(uint *)(uStack_60 + uStack_88 * 4);
                }
                if (puVar31 != (uint *)0x0) {
                  puVar48[iVar24] = *puVar31;
                }
              }
LAB_4a043f58:
              if (bVar60) {
                psVar21 = (short *)piVar18[2];
                iVar24 = piVar18[6];
                iVar19 = piVar18[8];
                psVar43 = (short *)(uVar14 + uStack_7c * 4);
                if (puVar44 == (uint *)0x0) {
                  psVar21 = (short *)0x0;
                }
                psVar46 = (short *)(uVar14 + uStack_90 * 4);
                psVar58 = (short *)(uVar14 + uStack_88 * 4);
                if (puVar44 != (uint *)0x0) {
                  psVar21 = (short *)(uVar14 + uStack_80 * 4);
                }
                puVar17[piVar18[5]] = uVar23;
                psVar55 = (short *)(puVar17 + iVar24);
                sVar1 = *(short *)(*(int *)puVar37 + 0x250);
                sVar2 = *(short *)(*(int *)puVar37 + 0x252);
                *psVar55 = *psVar43 + sVar1;
                psVar55[1] = psVar43[1] + sVar2;
                psVar55 = psVar55 + iVar19 * 2;
                *psVar55 = *psVar46 + sVar1;
                psVar55[1] = psVar46[1] + sVar2;
                psVar55 = psVar55 + iVar19 * 2;
                *psVar55 = *psVar58 + sVar1;
                psVar55[1] = psVar58[1] + sVar2;
                if (psVar21 != (short *)0x0) {
                  psVar55[iVar19 * 2] = sVar1 + *psVar21;
                  (psVar55 + iVar19 * 2)[1] = sVar2 + psVar21[1];
                }
              }
              if (uStack_a8 != 0) {
                iVar24 = piVar18[8];
                uVar12 = uStack_88;
                pbVar32 = (byte *)0x0;
                if (puVar44 != (uint *)0x0) {
                  uVar12 = uStack_80;
                  pbVar32 = pbStack_ac;
                }
                if (puVar44 != (uint *)0x0) {
                  pbVar32 = pbVar32 + uVar12 * 2;
                }
                psVar43 = (short *)(puVar17 + piVar18[7]);
                *psVar43 = (ushort)pbStack_ac[uStack_7c * 2] << 4;
                psVar21 = psVar43 + iVar24 * 2;
                psVar43[1] = (ushort)(pbStack_ac + uStack_7c * 2)[1] << 4;
                *psVar21 = (ushort)pbStack_ac[uStack_90 * 2] << 4;
                psVar43 = psVar21 + iVar24 * 2;
                psVar21[1] = (ushort)(pbStack_ac + uStack_90 * 2)[1] << 4;
                *psVar43 = (ushort)pbStack_ac[uStack_88 * 2] << 4;
                psVar43[1] = (ushort)(pbStack_ac + uStack_88 * 2)[1] << 4;
                if (pbVar32 != (byte *)0x0) {
                  psVar43[iVar24 * 2] = (ushort)*pbVar32 << 4;
                  (psVar43 + iVar24 * 2)[1] = (ushort)pbVar32[1] << 4;
                }
              }
              puVar17[1] = uStack_34;
              *puVar17 = *(undefined4 *)(*(int *)(*(int *)puVar37 + 0x39c) + (int)puStack_78 * 4);
              *(undefined4 **)(*(int *)(*(int *)puVar37 + 0x39c) + (int)puStack_78 * 4) = puVar17;
              if (iVar10 == 2) {
                uStack_7c = uStack_88;
              }
            }
          }
        }
        else {
          uStack_88 = (uint)puStack_70[2];
          uStack_90 = (uint)puStack_70[uStack_74 ^ 1];
          if (iStack_30 != 2) {
            uStack_7c = (uint)puStack_70[uStack_74];
          }
          bVar61 = uStack_7c != uStack_88;
          uVar12 = uStack_88;
          if (bVar61) {
            uVar12 = uStack_90;
          }
          uVar15 = uVar12;
          uVar20 = uStack_7c;
          if (bVar61 && uStack_7c != uVar12) {
            uVar15 = uStack_88;
            uVar20 = uStack_90;
          }
          if ((bVar61 && uStack_7c != uVar12) && uVar20 != uVar15) {
            puVar44 = (uint *)0x0;
            goto LAB_4a042730;
          }
        }
LAB_4a04414c:
        switch(iStack_30) {
        case 0:
          puStack_70 = puStack_70 + 3;
          break;
        case 1:
          uStack_74 = uStack_74 ^ 1;
        case 2:
          puStack_70 = puStack_70 + 1;
          break;
        case 3:
          puStack_70 = puStack_70 + 4;
          break;
        case 4:
          puStack_70 = puStack_70 + 2;
        }
      } while (uStack_9c != 0);
    }
    break;
  case 5:
  case 6:
    if (iStack_30 == 5) {
      uStack_9c = uStack_c4 >> 1;
    }
    else {
      uStack_9c = uStack_c4 - 1;
    }
    if (uStack_9c != 0) {
      puVar37 = PTR_DAT_4a042e0c;
      puVar45 = local_2c;
      do {
        puVar8 = PTR_DAT_4a04516c;
        uStack_9c = uStack_9c - 1;
        uVar12 = (uint)*puVar45;
        uVar23 = (uint)puVar45[1];
        if (uVar12 != uVar23) {
          puVar47 = (ushort *)(uVar11 + uVar12 * 0x14);
          puVar13 = (ushort *)(uVar11 + uVar23 * 0x14);
          uVar49 = puVar47[8];
          if ((puVar13[8] & uVar49 & 0x3f) == 0) {
            if (local_58[0x105] != 3) {
              if ((uVar49 & 0xbf) == 0x80) {
                puVar47[8] = uVar49 & 0xff7f;
                iVar10 = *(int *)puVar8;
                if ((uVar49 & 0x400) == 0) {
                  uStack_38 = *(undefined4 *)(puVar47 + 6);
                  iVar24 = FUN_4a0015f0(*(int *)(puVar47 + 2) << 0xb,uStack_38,puVar37);
                  uVar49 = (ushort)((uint)(*(int *)(iVar10 + 0x310) * iVar24 * 0x10) >> 0x10);
                  iVar24 = FUN_4a0015f0(*(int *)(puVar47 + 4) << 0xb,uStack_38);
                  uVar9 = (ushort)((uint)(*(int *)(iVar10 + 0x314) * iVar24 * 0x10) >> 0x10);
                }
                else {
                  uVar49 = (ushort)((uint)((*(int *)(iVar10 + 0x34c) * 8 + -1) *
                                           *(int *)(puVar47 + 2) * 8) >> 0x10);
                  uVar9 = (ushort)((uint)(*(int *)(puVar47 + 4) *
                                          (*(int *)(iVar10 + 0x350) * 8 + -1) * 8) >> 0x10);
                }
                iVar24 = *(int *)(iVar10 + 0x354);
                if (iVar24 == 0) {
                  *puVar47 = uVar49;
                  puVar47[1] = uVar9;
                }
                else if (iVar24 == 1) {
                  *puVar47 = ~uVar9;
                  puVar47[1] = uVar49;
                }
                else {
                  if (iVar24 == 2) {
                    *puVar47 = ~uVar49;
                    uVar49 = uVar9;
                  }
                  else {
                    if (iVar24 != 3) goto LAB_4a044324;
                    *puVar47 = uVar9;
                  }
                  puVar47[1] = ~uVar49;
                }
LAB_4a044324:
                *puVar47 = (short)*(undefined4 *)(iVar10 + 800) + *puVar47;
                puVar47[1] = (short)*(undefined4 *)(iVar10 + 0x328) + puVar47[1];
              }
              puVar37 = PTR_DAT_4a04516c;
              uVar49 = puVar13[8];
              if ((uVar49 & 0xbf) == 0x80) {
                puVar13[8] = uVar49 & 0xff7f;
                iVar10 = *(int *)puVar37;
                if ((uVar49 & 0x400) == 0) {
                  uStack_3c = *(undefined4 *)(puVar13 + 6);
                  iVar24 = FUN_4a0015f0(*(int *)(puVar13 + 2) << 0xb,uStack_3c);
                  uVar49 = (ushort)((uint)(*(int *)(iVar10 + 0x310) * iVar24 * 0x10) >> 0x10);
                  iVar24 = FUN_4a0015f0(*(int *)(puVar13 + 4) << 0xb,uStack_3c);
                  uVar9 = (ushort)((uint)(*(int *)(iVar10 + 0x314) * iVar24 * 0x10) >> 0x10);
                }
                else {
                  uVar49 = (ushort)((uint)((*(int *)(iVar10 + 0x34c) * 8 + -1) *
                                           *(int *)(puVar13 + 2) * 8) >> 0x10);
                  uVar9 = (ushort)((uint)(*(int *)(puVar13 + 4) *
                                          (*(int *)(iVar10 + 0x350) * 8 + -1) * 8) >> 0x10);
                }
                iVar24 = *(int *)(iVar10 + 0x354);
                if (iVar24 == 0) {
                  *puVar13 = uVar49;
                  puVar13[1] = uVar9;
                }
                else if (iVar24 == 1) {
                  *puVar13 = ~uVar9;
                  puVar13[1] = uVar49;
                }
                else {
                  if (iVar24 == 2) {
                    *puVar13 = ~uVar49;
                    uVar49 = uVar9;
                  }
                  else {
                    if (iVar24 != 3) goto LAB_4a04443c;
                    *puVar13 = uVar9;
                  }
                  puVar13[1] = ~uVar49;
                }
LAB_4a04443c:
                *puVar13 = (short)*(undefined4 *)(iVar10 + 800) + *puVar13;
                puVar13[1] = (short)*(undefined4 *)(iVar10 + 0x328) + puVar13[1];
              }
              if (local_58[0x145] == 0xffffffff) {
                iVar10 = *(int *)(puVar47 + 6);
                if (*(int *)(puVar47 + 6) <= *(int *)(puVar13 + 6)) {
                  iVar10 = *(int *)(puVar13 + 6);
                }
                iVar10 = FUN_4a03b088(iVar10);
                iVar24 = FUN_4a030140();
                puStack_78 = (undefined *)(iVar24 + iVar10);
              }
              else {
                puStack_78 = (undefined *)FUN_4a03b0cc();
              }
              uVar14 = local_58[0xeb];
              puVar37 = puStack_78;
              if ((int)(uVar14 - 1) < (int)puStack_78) {
                puVar37 = (undefined *)(uVar14 - 1);
              }
              if ((int)puVar37 < 0) {
                puStack_78 = (undefined *)0x0;
              }
              else if ((int)(uVar14 - 1) < (int)puStack_78) {
                puStack_78 = (undefined *)(uVar14 - 1);
              }
            }
            puVar8 = PTR_DAT_4a04516c;
            puVar37 = puStack_78;
            if ((uStack_a4 == 0) ||
               (*(int *)(uStack_60 + uVar12 * 4) == *(int *)(uStack_60 + uVar23 * 4))) {
              iVar10 = *(int *)PTR_DAT_4a04516c;
              puVar17 = *(undefined4 **)(iVar10 + 0x398);
              if (((puVar47[8] | puVar13[8]) & 0x3f) == 0) {
                *(undefined4 **)(iVar10 + 0x398) = puVar17 + 5;
                puVar17[4] = puVar13;
                puVar17[3] = puVar47;
                uVar23 = uStack_64;
                if (uStack_60 != 0) {
                  uVar23 = *(uint *)(uStack_60 + uVar12 * 4);
                }
                puVar17[2] = uVar23;
                puVar17[1] = uStack_bc;
                *puVar17 = *(undefined4 *)(*(int *)(iVar10 + 0x39c) + (int)puStack_78 * 4);
                *(undefined4 **)(*(int *)(*(int *)puVar8 + 0x39c) + (int)puStack_78 * 4) = puVar17;
              }
              else {
                *(undefined4 **)(iVar10 + 0x398) = puVar17 + 6;
                puVar17[5] = puVar13;
                puVar17[3] = puVar47;
                if (uStack_60 == 0) {
                  puVar17[2] = uStack_64;
                  uVar12 = uStack_64;
                }
                else {
                  puVar17[2] = *(undefined4 *)(uStack_60 + uVar12 * 4);
                  uVar12 = *(uint *)(uStack_60 + uVar12 * 4);
                }
                puVar17[4] = uVar12;
                puVar17[1] = uStack_bc | 0x2000000;
                *puVar17 = *(undefined4 *)(*(int *)(iVar10 + 0x39c) + (int)puStack_78 * 4);
                *(undefined4 **)(*(int *)(*(int *)puVar8 + 0x39c) + (int)puStack_78 * 4) = puVar17;
              }
            }
            else {
              iVar10 = *(int *)PTR_DAT_4a04516c;
              puVar17 = *(undefined4 **)(iVar10 + 0x398);
              *(undefined4 **)(iVar10 + 0x398) = puVar17 + 6;
              puVar17[5] = puVar13;
              puVar17[3] = puVar47;
              if (uStack_60 == 0) {
                puVar17[2] = uStack_64;
                uVar12 = uStack_64;
              }
              else {
                puVar17[2] = *(undefined4 *)(uStack_60 + uVar12 * 4);
                uVar12 = *(uint *)(uStack_60 + uVar23 * 4);
              }
              puVar17[4] = uVar12;
              puVar17[1] = uStack_bc | 0x2000000;
              *puVar17 = *(undefined4 *)(*(int *)(iVar10 + 0x39c) + (int)puStack_78 * 4);
              *(undefined4 **)(*(int *)(*(int *)puVar8 + 0x39c) + (int)puStack_78 * 4) = puVar17;
            }
          }
        }
        if (iStack_30 == 5) {
          puVar45 = puVar45 + 2;
        }
        else {
          puVar45 = puVar45 + 1;
        }
      } while (uStack_9c != 0);
    }
    break;
  case 7:
    if (uStack_c4 != 0) {
      uStack_40 = uVar12 << 5 | 0x28000000;
      puVar45 = local_2c;
      do {
        uStack_c4 = uStack_c4 - 1;
        uVar14 = (uint)*puVar45;
        puVar45 = puVar45 + 1;
        iVar10 = *(int *)puVar37;
        puVar17 = *(undefined4 **)(iVar10 + 0x398);
        *(undefined4 **)(iVar10 + 0x398) = puVar17 + 7;
        puVar17[4] = uVar11 + uVar14 * 0x14;
        iVar24 = uVar14 * 2 + 1;
        uVar12 = uStack_64;
        if (!bVar59) {
          uVar12 = *(uint *)(uStack_60 + uVar14 * 4);
        }
        puVar17[3] = uVar12;
        puVar17[1] = 0x28000000;
        uVar49 = *(ushort *)(uVar23 + 0x4a);
        uVar9 = *(ushort *)(uVar23 + 0x48);
        sVar1 = (short)((uint)uVar49 *
                        ((int)*(short *)(*(int *)(iVar10 + 0x468) + uVar14 * 8) +
                        (int)*(short *)(iVar10 + 0x250)) * 0x10 >> 0x10);
        *(short *)(puVar17 + 5) = sVar1;
        sVar2 = (short)((uint)uVar9 *
                        ((int)*(short *)(*(int *)(iVar10 + 0x468) + uVar14 * 8 + 2) +
                        (int)*(short *)(iVar10 + 0x252)) * 0x10 >> 0x10);
        *(short *)((int)puVar17 + 0x16) = sVar2;
        *(short *)(puVar17 + 6) =
             (short)((int)(((int)*(short *)(local_58[0x11a] + iVar24 * 4) +
                           (int)(short)local_58[0x94]) * (uint)uVar49) >> 0xc) - sVar1;
        *(short *)((int)puVar17 + 0x1a) =
             (short)((int)((uint)uVar9 *
                          ((int)*(short *)(local_58[0x11a] + iVar24 * 4 + 2) +
                          (int)*(short *)((int)local_58 + 0x252))) >> 0xc) - sVar2;
        puVar17[2] = uVar23;
        puVar17[1] = uStack_40;
        *puVar17 = *(undefined4 *)(*(int *)(iVar10 + 0x39c) + (int)puStack_78 * 4);
        *(undefined4 **)(*(int *)(*(int *)puVar37 + 0x39c) + (int)puStack_78 * 4) = puVar17;
      } while (uStack_c4 != 0);
    }
    break;
  case 8:
    iStack_c8 = 0;
    while (iVar10 = iStack_c8, 0 < (int)uStack_c4) {
      iVar24 = 0;
      iStack_cc = 0;
      uStack_c4 = uStack_c4 - 1;
      uVar14 = 0xffffffff;
      if (-1 < (int)uStack_c4) {
        do {
          puVar45 = local_2c + iStack_c8;
          iStack_c8 = iStack_c8 + 1;
          if (uVar14 == *puVar45) break;
          iStack_cc = iStack_cc + 1;
          uStack_c4 = uStack_c4 - 1;
          uVar14 = (uint)*puVar45;
        } while (uStack_c4 < 0x80000000);
      }
      uStack_d4 = iStack_c8 + -2;
      if ((int)uStack_c4 < 0) {
        uStack_d4 = iStack_c8 + -1;
      }
      if (local_58[0x105] == 3) {
        puVar45 = local_2c + iVar10;
        if ((*(uint *)(local_5c + 0x10) & 8) == 0) {
          iStack_8c = 0;
          if ((*(uint *)(local_5c + 0x10) & 0x10) == 0) {
            psVar43 = (short *)(uVar11 + (uint)puVar45[iStack_cc + -1] * 0x14);
            psVar21 = (short *)(uVar11 + (uint)puVar45[iStack_cc + -2] * 0x14);
            iVar34 = (int)*psVar43;
            iVar35 = (int)psVar43[1];
            psVar43 = (short *)(uVar11 + (uint)*puVar45 * 0x14);
            iVar22 = 0;
            iVar19 = *psVar43 - iVar34;
            iVar33 = psVar43[1] - iVar35;
            iVar34 = iVar34 - *psVar21;
            iVar35 = iVar35 - psVar21[1];
            while (iVar57 = iVar33, iVar56 = iVar19, -1 < iVar34 * iVar57 - iVar35 * iVar56) {
              if (iVar22 == iStack_cc + -1) goto LAB_4a04525c;
              psVar43 = (short *)(uVar11 + (uint)(puVar45 + iVar22)[1] * 0x14);
              psVar21 = (short *)(uVar11 + (uint)puVar45[iVar22] * 0x14);
              iVar22 = iVar22 + 1;
              iVar19 = (int)*psVar43 - (int)*psVar21;
              iVar34 = iVar56;
              iVar35 = iVar57;
              iVar33 = (int)psVar43[1] - (int)psVar21[1];
            }
LAB_4a0451fc:
            iStack_8c = 1;
          }
          else {
            psVar43 = (short *)(uVar11 + (uint)puVar45[iStack_cc + -1] * 0x14);
            psVar21 = (short *)(uVar11 + (uint)puVar45[iStack_cc + -2] * 0x14);
            iVar34 = (int)*psVar43;
            iVar35 = (int)psVar43[1];
            psVar43 = (short *)(uVar11 + (uint)*puVar45 * 0x14);
            iVar22 = 0;
            iVar19 = *psVar43 - iVar34;
            iVar33 = psVar43[1] - iVar35;
            iVar34 = iVar34 - *psVar21;
            iVar35 = iVar35 - psVar21[1];
            while (iVar57 = iVar33, iVar56 = iVar19, -1 < iVar35 * iVar56 - iVar34 * iVar57) {
              if (iVar22 == iStack_cc + -1) goto LAB_4a04525c;
              psVar43 = (short *)(uVar11 + (uint)(puVar45 + iVar22)[1] * 0x14);
              psVar21 = (short *)(uVar11 + (uint)puVar45[iVar22] * 0x14);
              iVar22 = iVar22 + 1;
              iVar33 = (int)psVar43[1] - (int)psVar21[1];
              iVar34 = iVar56;
              iVar35 = iVar57;
              iVar19 = (int)*psVar43 - (int)*psVar21;
            }
LAB_4a04517c:
            iStack_8c = 2;
          }
        }
        else {
          psVar43 = (short *)(uVar11 + (uint)puVar45[iStack_cc + -1] * 0x14);
          psVar21 = (short *)(uVar11 + (uint)puVar45[iStack_cc + -2] * 0x14);
          iVar34 = (int)*psVar43;
          iVar35 = (int)psVar43[1];
          bVar59 = false;
          bVar62 = false;
          psVar43 = (short *)(uVar11 + (uint)*puVar45 * 0x14);
          iVar22 = 0;
          iVar19 = *psVar43 - iVar34;
          iVar33 = psVar43[1] - iVar35;
          iVar34 = iVar34 - *psVar21;
          iVar35 = iVar35 - psVar21[1];
          while( true ) {
            iVar57 = iVar33;
            iVar56 = iVar19;
            iVar19 = iVar34 * iVar57 - iVar35 * iVar56;
            if (iVar19 < 0) {
              bVar59 = true;
            }
            else if (0 < iVar19) {
              bVar62 = true;
            }
            if (iVar22 == iStack_cc + -1) break;
            psVar21 = (short *)(uVar11 + (uint)(puVar45 + iVar22)[1] * 0x14);
            psVar43 = (short *)(uVar11 + (uint)puVar45[iVar22] * 0x14);
            iVar22 = iVar22 + 1;
            iVar19 = (int)*psVar21 - (int)*psVar43;
            iVar33 = (int)psVar21[1] - (int)psVar43[1];
            iVar34 = iVar56;
            iVar35 = iVar57;
          }
          if ((bool)(bVar59 & bVar62)) {
            iStack_8c = 3;
          }
          else {
            if (bVar59) goto LAB_4a0451fc;
            if (bVar62) goto LAB_4a04517c;
            iStack_8c = 0;
          }
        }
      }
      else {
        puVar45 = local_2c + iVar10;
        if ((*(uint *)(local_5c + 0x10) & 8) == 0) {
          uStack_dc = 0;
          if ((*(uint *)(local_5c + 0x10) & 0x10) == 0) {
            iVar19 = uVar11 + (uint)puVar45[iStack_cc + -1] * 0x14;
            iVar33 = uVar11 + (uint)puVar45[iStack_cc + -2] * 0x14;
            iVar34 = uVar11 + (uint)*puVar45 * 0x14;
            if ((**(uint **)PTR_DAT_4a04516c & 0x80000000) == 0) {
              uStack_f4 = *(uint *)(iVar34 + 4);
              uStack_f0 = *(uint *)(iVar34 + 8);
              uStack_ec = *(uint *)(iVar34 + 0xc);
            }
            else {
              uStack_f4 = *(uint *)PTR_DAT_4a045170;
              uStack_f0 = *(uint *)((int)PTR_DAT_4a045170 + 4);
              uStack_ec = *(uint *)((int)PTR_DAT_4a045170 + 8);
            }
            iStack_4c = iStack_cc + -1;
            uVar14 = *(int *)(iVar19 + 4) - *(int *)(iVar33 + 4);
            uVar15 = *(int *)(iVar19 + 8) - *(int *)(iVar33 + 8);
            iVar33 = *(int *)(iVar19 + 0xc) - *(int *)(iVar33 + 0xc);
            uStack_e8 = *(int *)(iVar34 + 4) - *(int *)(iVar19 + 4);
            uStack_e4 = *(int *)(iVar34 + 8) - *(int *)(iVar19 + 8);
            iStack_e0 = *(int *)(iVar34 + 0xc) - *(int *)(iVar19 + 0xc);
            while (uVar16 = (uint)((longlong)(int)uVar15 * (longlong)(int)uStack_e8),
                  uVar20 = (uint)((longlong)(int)uVar14 * (longlong)(int)uStack_e4),
                  iVar19 = (int)((ulonglong)((longlong)(int)uVar14 * (longlong)(int)uStack_e4) >>
                                0x20) -
                           ((int)((ulonglong)((longlong)(int)uVar15 * (longlong)(int)uStack_e8) >>
                                 0x20) + (uint)(uVar20 < uVar16)),
                  uVar20 = uVar20 - uVar16 >> 8 | iVar19 * 0x1000000,
                  lVar3 = (ulonglong)uVar20 * (ulonglong)uStack_ec, uVar38 = (uint)lVar3,
                  uVar39 = (uint)((longlong)(int)uVar14 * (longlong)iStack_e0),
                  uVar16 = (uint)((longlong)iVar33 * (longlong)(int)uStack_e8),
                  iVar34 = (int)((ulonglong)((longlong)iVar33 * (longlong)(int)uStack_e8) >> 0x20) -
                           ((int)((ulonglong)((longlong)(int)uVar14 * (longlong)iStack_e0) >> 0x20)
                           + (uint)(uVar16 < uVar39)),
                  uVar14 = uVar16 - uVar39 >> 8 | iVar34 * 0x1000000,
                  lVar4 = (ulonglong)uVar14 * (ulonglong)uStack_f0, uVar54 = (uint)lVar4,
                  uVar39 = (uint)((longlong)iVar33 * (longlong)(int)uStack_e4),
                  uVar16 = (uint)((longlong)(int)uVar15 * (longlong)iStack_e0),
                  iVar33 = (int)((ulonglong)((longlong)(int)uVar15 * (longlong)iStack_e0) >> 0x20) -
                           ((int)((ulonglong)((longlong)iVar33 * (longlong)(int)uStack_e4) >> 0x20)
                           + (uint)(uVar16 < uVar39)),
                  uVar39 = uVar16 - uVar39 >> 8 | iVar33 * 0x1000000,
                  lVar5 = (ulonglong)uVar39 * (ulonglong)uStack_f4, uVar15 = (uint)lVar5,
                  uVar16 = uVar15 + uVar54, uVar42 = uVar38 + uVar16,
                  lVar6 = (ulonglong)uVar42 * 0xffffffff,
                  iVar19 = ((int)((ulonglong)lVar6 >> 0x20) - uVar42) -
                           (uStack_f4 * (iVar33 >> 8) +
                            ((int)uStack_f4 >> 0x1f) * uVar39 + (int)((ulonglong)lVar5 >> 0x20) +
                            uStack_f0 * (iVar34 >> 8) +
                            ((int)uStack_f0 >> 0x1f) * uVar14 + (int)((ulonglong)lVar4 >> 0x20) +
                            (uint)CARRY4(uVar15,uVar54) +
                            uStack_ec * (iVar19 >> 8) +
                            ((int)uStack_ec >> 0x1f) * uVar20 + (int)((ulonglong)lVar3 >> 0x20) +
                           (uint)CARRY4(uVar38,uVar16)), bVar59 = (int)lVar6 != 0,
                  (int)-(iVar19 + (uint)bVar59) < 0 ==
                  (SBORROW4(0,iVar19) != SBORROW4(-iVar19,(uint)bVar59))) {
              if (uStack_dc == iStack_4c) goto LAB_4a044eec;
              iVar19 = uVar11 + (uint)(puVar45 + uStack_dc)[1] * 0x14;
              iVar34 = uVar11 + (uint)puVar45[uStack_dc] * 0x14;
              uStack_dc = uStack_dc + 1;
              uVar14 = uStack_e8;
              uVar15 = uStack_e4;
              iVar33 = iStack_e0;
              uStack_e8 = *(int *)(iVar19 + 4) - *(int *)(iVar34 + 4);
              uStack_e4 = *(int *)(iVar19 + 8) - *(int *)(iVar34 + 8);
              iStack_e0 = *(int *)(iVar19 + 0xc) - *(int *)(iVar34 + 0xc);
            }
LAB_4a044ed4:
            iStack_8c = 1;
          }
          else {
            iVar19 = uVar11 + (uint)puVar45[iStack_cc + -1] * 0x14;
            iVar33 = uVar11 + (uint)puVar45[iStack_cc + -2] * 0x14;
            iVar34 = uVar11 + (uint)*puVar45 * 0x14;
            if ((**(uint **)PTR_DAT_4a04516c & 0x80000000) == 0) {
              uStack_f4 = *(uint *)(iVar34 + 4);
              uStack_f0 = *(uint *)(iVar34 + 8);
              uStack_ec = *(uint *)(iVar34 + 0xc);
            }
            else {
              uStack_f4 = *(uint *)PTR_DAT_4a045170;
              uStack_f0 = *(uint *)((int)PTR_DAT_4a045170 + 4);
              uStack_ec = *(uint *)((int)PTR_DAT_4a045170 + 8);
            }
            iStack_48 = iStack_cc + -1;
            iVar35 = *(int *)(iVar19 + 0xc) - *(int *)(iVar33 + 0xc);
            uVar14 = *(int *)(iVar19 + 4) - *(int *)(iVar33 + 4);
            uVar15 = *(int *)(iVar19 + 8) - *(int *)(iVar33 + 8);
            uStack_e8 = *(int *)(iVar34 + 4) - *(int *)(iVar19 + 4);
            uStack_e4 = *(int *)(iVar34 + 8) - *(int *)(iVar19 + 8);
            iStack_e0 = *(int *)(iVar34 + 0xc) - *(int *)(iVar19 + 0xc);
            while (uVar16 = (uint)((longlong)(int)uVar15 * (longlong)(int)uStack_e8),
                  uVar20 = (uint)((longlong)(int)uVar14 * (longlong)(int)uStack_e4),
                  iVar19 = (int)((ulonglong)((longlong)(int)uVar14 * (longlong)(int)uStack_e4) >>
                                0x20) -
                           ((int)((ulonglong)((longlong)(int)uVar15 * (longlong)(int)uStack_e8) >>
                                 0x20) + (uint)(uVar20 < uVar16)),
                  uVar20 = uVar20 - uVar16 >> 8 | iVar19 * 0x1000000,
                  lVar3 = (ulonglong)uVar20 * (ulonglong)uStack_ec, uVar38 = (uint)lVar3,
                  uVar39 = (uint)((longlong)(int)uVar14 * (longlong)iStack_e0),
                  uVar16 = (uint)((longlong)iVar35 * (longlong)(int)uStack_e8),
                  iVar33 = (int)((ulonglong)((longlong)iVar35 * (longlong)(int)uStack_e8) >> 0x20) -
                           ((int)((ulonglong)((longlong)(int)uVar14 * (longlong)iStack_e0) >> 0x20)
                           + (uint)(uVar16 < uVar39)),
                  uVar14 = uVar16 - uVar39 >> 8 | iVar33 * 0x1000000,
                  lVar4 = (ulonglong)uVar14 * (ulonglong)uStack_f0, uVar42 = (uint)lVar4,
                  uVar39 = (uint)((longlong)iVar35 * (longlong)(int)uStack_e4),
                  uVar16 = (uint)((longlong)(int)uVar15 * (longlong)iStack_e0),
                  iVar34 = (int)((ulonglong)((longlong)(int)uVar15 * (longlong)iStack_e0) >> 0x20) -
                           ((int)((ulonglong)((longlong)iVar35 * (longlong)(int)uStack_e4) >> 0x20)
                           + (uint)(uVar16 < uVar39)),
                  uVar39 = uVar16 - uVar39 >> 8 | iVar34 * 0x1000000,
                  lVar5 = (ulonglong)uVar39 * (ulonglong)uStack_f4, uVar15 = (uint)lVar5,
                  uVar16 = uVar15 + uVar42,
                  iVar19 = uStack_f4 * (iVar34 >> 8) +
                           ((int)uStack_f4 >> 0x1f) * uVar39 + (int)((ulonglong)lVar5 >> 0x20) +
                           uStack_f0 * (iVar33 >> 8) +
                           ((int)uStack_f0 >> 0x1f) * uVar14 + (int)((ulonglong)lVar4 >> 0x20) +
                           (uint)CARRY4(uVar15,uVar42) +
                           uStack_ec * (iVar19 >> 8) +
                           ((int)uStack_ec >> 0x1f) * uVar20 + (int)((ulonglong)lVar3 >> 0x20) +
                           (uint)CARRY4(uVar38,uVar16), bVar59 = uVar38 + uVar16 != 0,
                  (int)-(iVar19 + (uint)bVar59) < 0 ==
                  (SBORROW4(0,iVar19) != SBORROW4(-iVar19,(uint)bVar59))) {
              if (uStack_dc == iStack_48) {
                bVar59 = false;
                goto LAB_4a044cb0;
              }
              iVar33 = uVar11 + (uint)(puVar45 + uStack_dc)[1] * 0x14;
              iVar19 = uVar11 + (uint)puVar45[uStack_dc] * 0x14;
              uStack_dc = uStack_dc + 1;
              iVar35 = iStack_e0;
              uVar14 = uStack_e8;
              uVar15 = uStack_e4;
              uStack_e8 = *(int *)(iVar33 + 4) - *(int *)(iVar19 + 4);
              uStack_e4 = *(int *)(iVar33 + 8) - *(int *)(iVar19 + 8);
              iStack_e0 = *(int *)(iVar33 + 0xc) - *(int *)(iVar19 + 0xc);
            }
            bVar59 = true;
LAB_4a044cb0:
            iStack_8c = 0;
            if (bVar59) goto LAB_4a044cb8;
          }
        }
        else {
          uStack_dc = 0;
          bVar62 = false;
          bVar59 = false;
          iVar19 = uVar11 + (uint)puVar45[iStack_cc + -1] * 0x14;
          iVar33 = uVar11 + (uint)puVar45[iStack_cc + -2] * 0x14;
          iVar34 = uVar11 + (uint)*puVar45 * 0x14;
          if ((**(uint **)PTR_DAT_4a04516c & 0x80000000) == 0) {
            uStack_f8 = *(uint *)(iVar34 + 4);
            uStack_f4 = *(uint *)(iVar34 + 8);
            uStack_f0 = *(uint *)(iVar34 + 0xc);
          }
          else {
            uStack_f8 = *(uint *)PTR_DAT_4a045170;
            uStack_f4 = *(uint *)((int)PTR_DAT_4a045170 + 4);
            uStack_f0 = *(uint *)((int)PTR_DAT_4a045170 + 8);
          }
          iStack_44 = iStack_cc + -1;
          iVar35 = *(int *)(iVar34 + 4) - *(int *)(iVar19 + 4);
          iVar22 = *(int *)(iVar19 + 4) - *(int *)(iVar33 + 4);
          uVar14 = *(int *)(iVar19 + 8) - *(int *)(iVar33 + 8);
          uVar15 = *(int *)(iVar19 + 0xc) - *(int *)(iVar33 + 0xc);
          uStack_ec = *(int *)(iVar34 + 8) - *(int *)(iVar19 + 8);
          uStack_e8 = *(int *)(iVar34 + 0xc) - *(int *)(iVar19 + 0xc);
          while( true ) {
            iVar56 = iVar35;
            uVar16 = (uint)((longlong)(int)uVar14 * (longlong)iVar56);
            uVar20 = (uint)((longlong)iVar22 * (longlong)(int)uStack_ec);
            iVar19 = (int)((ulonglong)((longlong)iVar22 * (longlong)(int)uStack_ec) >> 0x20) -
                     ((int)((ulonglong)((longlong)(int)uVar14 * (longlong)iVar56) >> 0x20) +
                     (uint)(uVar20 < uVar16));
            uVar20 = uVar20 - uVar16 >> 8 | iVar19 * 0x1000000;
            lVar3 = (ulonglong)uVar20 * (ulonglong)uStack_f0;
            uVar42 = (uint)lVar3;
            uVar38 = (uint)((longlong)iVar22 * (longlong)(int)uStack_e8);
            uVar16 = (uint)((longlong)(int)uVar15 * (longlong)iVar56);
            iVar33 = (int)((ulonglong)((longlong)(int)uVar15 * (longlong)iVar56) >> 0x20) -
                     ((int)((ulonglong)((longlong)iVar22 * (longlong)(int)uStack_e8) >> 0x20) +
                     (uint)(uVar16 < uVar38));
            uVar16 = uVar16 - uVar38 >> 8 | iVar33 * 0x1000000;
            lVar4 = (ulonglong)uVar16 * (ulonglong)uStack_f4;
            uVar54 = (uint)lVar4;
            uVar39 = (uint)((longlong)(int)uVar15 * (longlong)(int)uStack_ec);
            uVar38 = (uint)((longlong)(int)uVar14 * (longlong)(int)uStack_e8);
            iVar34 = (int)((ulonglong)((longlong)(int)uVar14 * (longlong)(int)uStack_e8) >> 0x20) -
                     ((int)((ulonglong)((longlong)(int)uVar15 * (longlong)(int)uStack_ec) >> 0x20) +
                     (uint)(uVar38 < uVar39));
            uVar38 = uVar38 - uVar39 >> 8 | iVar34 * 0x1000000;
            lVar5 = (ulonglong)uVar38 * (ulonglong)uStack_f8;
            uVar14 = (uint)lVar5;
            uVar15 = uVar14 + uVar54;
            iVar19 = uStack_f8 * (iVar34 >> 8) +
                     ((int)uStack_f8 >> 0x1f) * uVar38 + (int)((ulonglong)lVar5 >> 0x20) +
                     uStack_f4 * (iVar33 >> 8) +
                     ((int)uStack_f4 >> 0x1f) * uVar16 + (int)((ulonglong)lVar4 >> 0x20) +
                     (uint)CARRY4(uVar14,uVar54) +
                     uStack_f0 * (iVar19 >> 8) +
                     ((int)uStack_f0 >> 0x1f) * uVar20 + (int)((ulonglong)lVar3 >> 0x20) +
                     (uint)CARRY4(uVar15,uVar42);
            bVar65 = uVar15 + uVar42 != 0;
            if ((int)-(iVar19 + (uint)bVar65) < 0 !=
                (SBORROW4(0,iVar19) != SBORROW4(-iVar19,(uint)bVar65))) {
              bVar62 = true;
            }
            if (iVar19 < 0) {
              bVar59 = true;
            }
            if (uStack_dc == iStack_44) break;
            iVar19 = uVar11 + (uint)(puVar45 + uStack_dc)[1] * 0x14;
            iVar33 = uVar11 + (uint)puVar45[uStack_dc] * 0x14;
            uStack_dc = uStack_dc + 1;
            iVar35 = *(int *)(iVar19 + 4) - *(int *)(iVar33 + 4);
            iVar22 = iVar56;
            uVar14 = uStack_ec;
            uVar15 = uStack_e8;
            uStack_ec = *(int *)(iVar19 + 8) - *(int *)(iVar33 + 8);
            uStack_e8 = *(int *)(iVar19 + 0xc) - *(int *)(iVar33 + 0xc);
          }
          if ((bool)(bVar62 & bVar59)) {
            iStack_8c = 3;
          }
          else if (bVar62) {
LAB_4a044cb8:
            iStack_8c = 2;
          }
          else {
            if (bVar59) goto LAB_4a044ed4;
LAB_4a044eec:
            iStack_8c = 0;
          }
        }
      }
LAB_4a04525c:
      if (0x3f < iStack_cc) {
        iStack_8c = 0;
      }
      uStack_d8 = 0;
      puStack_50 = local_2c + iVar10;
      do {
        if (uStack_d8 == 0) {
          iVar19 = 1;
          if (iStack_8c != 1) {
            iVar19 = iStack_8c;
          }
          if (iStack_8c == 1 || iVar19 == 3) {
            uStack_dc = uStack_d4 + 1;
            iVar19 = 1;
            uVar14 = iVar10;
LAB_4a0452e0:
            puVar17 = *(undefined4 **)(*(int *)PTR_DAT_4a04516c + 0x398);
            puVar44 = puVar17 + 2;
            uVar15 = uStack_bc | 0x40000000;
            if (uStack_a4 == 0) {
              if (uStack_60 == 0) {
                puVar31 = puVar17 + 3;
                *puVar44 = uStack_64;
              }
              else {
                puVar31 = puVar17 + 3;
                *puVar44 = *(uint *)(uStack_60 + (uint)*puStack_50 * 4);
              }
            }
            else {
              uVar15 = uStack_bc | 0x42000000;
              puVar31 = puVar44;
            }
            puVar44 = puVar31;
            if (bVar60) {
              uVar15 = uVar15 | 0x8000000;
              puVar44 = puVar31 + 1;
              *puVar31 = uVar23;
            }
            iVar33 = 0;
            if (uStack_a8 != 0) {
              uVar15 = uVar15 | 0x10000000;
            }
            if (bVar61) {
              uVar15 = uVar15 | 0x4000000;
            }
            puVar17[1] = uVar15 | uVar12 << 5;
            uVar49 = 0x3f;
            if (uVar14 != uStack_dc) {
              do {
                uVar15 = (uint)local_2c[uVar14];
                uVar14 = uVar14 + iVar19;
                puVar31 = puVar44;
                if (uStack_a4 != 0) {
                  if (uStack_60 == 0) {
                    puVar31 = puVar44 + 1;
                    *puVar44 = uStack_64;
                  }
                  else {
                    puVar31 = puVar44 + 1;
                    *puVar44 = *(uint *)(uStack_60 + uVar15 * 4);
                  }
                }
                puVar37 = PTR_DAT_4a04516c;
                puVar45 = (ushort *)(uVar11 + uVar15 * 0x14);
                uVar9 = puVar45[8];
                uVar49 = uVar49 & uVar9;
                if (local_58[0x105] != 3) {
                  if ((uVar9 & 0xbf) == 0x80) {
                    puVar45[8] = uVar9 & 0xff7f;
                    iVar34 = *(int *)puVar37;
                    if ((uVar9 & 0x400) == 0) {
                      uStack_54 = *(undefined4 *)(puVar45 + 6);
                      iVar35 = FUN_4a0015f0(*(int *)(puVar45 + 2) << 0xb,uStack_54);
                      uVar7 = (ushort)((uint)(*(int *)(iVar34 + 0x310) * iVar35 * 0x10) >> 0x10);
                      iVar35 = FUN_4a0015f0(*(int *)(puVar45 + 4) << 0xb,uStack_54);
                      uVar9 = (ushort)((uint)(*(int *)(iVar34 + 0x314) * iVar35 * 0x10) >> 0x10);
                    }
                    else {
                      uVar7 = (ushort)((uint)((*(int *)(iVar34 + 0x34c) * 8 + -1) *
                                              *(int *)(puVar45 + 2) * 8) >> 0x10);
                      uVar9 = (ushort)((uint)(*(int *)(puVar45 + 4) *
                                              (*(int *)(iVar34 + 0x350) * 8 + -1) * 8) >> 0x10);
                    }
                    iVar35 = *(int *)(iVar34 + 0x354);
                    if (iVar35 == 0) {
                      *puVar45 = uVar7;
                      puVar45[1] = uVar9;
                    }
                    else if (iVar35 == 1) {
                      *puVar45 = ~uVar9;
                      puVar45[1] = uVar7;
                    }
                    else {
                      if (iVar35 == 2) {
                        *puVar45 = ~uVar7;
                        uVar7 = uVar9;
                      }
                      else {
                        if (iVar35 != 3) goto LAB_4a0454f0;
                        *puVar45 = uVar9;
                      }
                      puVar45[1] = ~uVar7;
                    }
LAB_4a0454f0:
                    *puVar45 = (short)*(undefined4 *)(iVar34 + 800) + *puVar45;
                    puVar45[1] = (short)*(undefined4 *)(iVar34 + 0x328) + puVar45[1];
                  }
                  if (iVar33 == 0) {
                    iVar24 = *(int *)(puVar45 + 6);
                  }
                  else if (iVar24 < *(int *)(puVar45 + 6)) {
                    iVar24 = *(int *)(puVar45 + 6);
                  }
                }
                *puVar31 = (uint)puVar45;
                iVar33 = iVar33 + 1;
                puVar48 = puVar31 + 1;
                if (bVar60) {
                  iVar34 = *(int *)PTR_DAT_4a04516c;
                  puVar48 = puVar31 + 2;
                  puVar31[1] = (uint)*(ushort *)(iVar34 + 0x250) +
                               (uint)*(ushort *)(*(int *)(iVar34 + 0x468) + uVar15 * 4) & 0xffff |
                               ((uint)*(ushort *)(*(int *)(iVar34 + 0x468) + uVar15 * 4 + 2) +
                               (uint)*(ushort *)(iVar34 + 0x252)) * 0x10000;
                }
                puVar44 = puVar48;
                if (uStack_a8 != 0) {
                  puVar44 = puVar48 + 1;
                  *puVar48 = (uint)pbStack_ac[uVar15 * 2] << 4 |
                             (uint)pbStack_ac[uVar15 * 2 + 1] << 0x14;
                }
              } while (uVar14 != uStack_dc);
              if (uVar49 == 0) {
                if (local_58[0x105] != 3) {
                  if (local_58[0x145] == 0xffffffff) {
                    iVar19 = FUN_4a03b088(iVar24);
                    iVar34 = FUN_4a030140();
                    puStack_78 = (undefined *)(iVar34 + iVar19);
                  }
                  else {
                    puStack_78 = (undefined *)FUN_4a03b0cc();
                  }
                  uVar14 = local_58[0xeb];
                  puVar37 = puStack_78;
                  if ((int)(uVar14 - 1) < (int)puStack_78) {
                    puVar37 = (undefined *)(uVar14 - 1);
                  }
                  if ((int)puVar37 < 0) {
                    puStack_78 = (undefined *)0x0;
                  }
                  else if ((int)(uVar14 - 1) < (int)puStack_78) {
                    puStack_78 = (undefined *)(uVar14 - 1);
                  }
                }
                puVar37 = PTR_DAT_4a04516c;
                iVar19 = *(int *)PTR_DAT_4a04516c;
                *(uint **)(iVar19 + 0x398) = puVar44;
                puVar17[1] = puVar17[1] | iVar33 * 0x80000;
                *puVar17 = *(undefined4 *)(*(int *)(iVar19 + 0x39c) + (int)puStack_78 * 4);
                *(undefined4 **)(*(int *)(*(int *)puVar37 + 0x39c) + (int)puStack_78 * 4) = puVar17;
              }
            }
          }
        }
        else if (iStack_8c == 2 || iStack_8c == 3) {
          uStack_dc = iVar10 + -1;
          iVar19 = -1;
          uVar14 = uStack_d4;
          goto LAB_4a0452e0;
        }
        uStack_d8 = uStack_d8 + 1;
      } while (uStack_d8 < 2);
    }
  }
  FUN_4a00d798();
  return;
}




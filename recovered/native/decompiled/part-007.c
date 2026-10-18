/* AUTOMATED DECOMPILER OUTPUT. Not original source, not a buildable game.
 * Function boundaries, types, indirect calls, and data still require validation. */

// Address: 4a05d92c

void FUN_4a05d92c(int *param_1,int *param_2,uint param_3,int param_4)

{
  ushort uVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  int iVar19;
  int *piVar20;
  uint uVar21;
  bool bVar22;
  int local_8c;
  int local_84;
  int local_80;
  int local_7c;
  uint local_74;
  int local_6c;
  int local_68;
  int local_64;
  int local_5c [4];
  uint local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  int *local_3c;
  int *local_38;
  int *piStack_34;
  int *local_30;
  uint local_2c;
  int local_28;
  
  puVar4 = PTR_DAT_4a05e76c;
  puVar3 = PTR_DAT_4a05e768;
  uVar1 = *(ushort *)(param_1 + 6);
  if ((uVar1 & 8) == 0) {
    local_38 = param_1 + 9;
  }
  else {
    iVar14 = param_1[2] >> 0xe;
    iVar13 = *(int *)(*(int *)PTR_DAT_4a05e76c + iVar14 * 4);
    uVar21 = *(int *)(*(int *)PTR_DAT_4a05e76c + iVar14 * 4 + 4) - iVar13;
    uVar11 = param_1[2] & 0x3fff;
    lVar2 = (ulonglong)uVar11 * (ulonglong)uVar21;
    lVar2 = (longlong)
            (int)((((uint)lVar2 >> 0xe |
                   (((int)uVar21 >> 0x1f) * uVar11 + (int)((ulonglong)lVar2 >> 0x20)) * 0x40000) +
                  iVar13) - param_1[4]) * (longlong)param_1[5];
    uVar11 = (uint)lVar2 >> 10 | (int)((ulonglong)lVar2 >> 0x20) << 0x16;
    if (0x3fffffff < (int)uVar11) {
      uVar11 = 0x3fc00000;
    }
    iVar14 = param_1[9] >> 2;
    iVar13 = param_1[10] >> 2;
    if ((uVar1 & 0x10) == 0) {
      iVar14 = iVar14 + ((uint)((longlong)param_1[7] * (longlong)(int)uVar11) >> 0x10 |
                        (int)((ulonglong)((longlong)param_1[7] * (longlong)(int)uVar11) >> 0x20) <<
                        0x10);
    }
    if ((uVar1 & 0x20) == 0) {
      iVar13 = iVar13 + ((uint)((longlong)param_1[8] * (longlong)(int)uVar11) >> 0x10 |
                        (int)((ulonglong)((longlong)param_1[8] * (longlong)(int)uVar11) >> 0x20) <<
                        0x10);
    }
    *(int *)PTR_DAT_4a05e768 = iVar14 << 2;
    *(int *)(puVar3 + 4) = iVar13 << 2;
    iVar14 = param_1[0xb];
    if ((uVar1 & 0x40) == 0) {
      iVar14 = iVar14 + ((uint)((longlong)param_1[0xc] * (longlong)(int)uVar11) >> 0xd |
                        (int)((ulonglong)((longlong)param_1[0xc] * (longlong)(int)uVar11) >> 0x20)
                        << 0x13);
    }
    *(int *)(puVar3 + 8) = iVar14;
    local_38 = (int *)puVar3;
  }
  uVar1 = *(ushort *)(param_2 + 6);
  if ((uVar1 & 8) == 0) {
    local_3c = param_2 + 9;
  }
  else {
    local_3c = (int *)(puVar3 + 0x10);
    iVar14 = param_2[2] >> 0xe;
    iVar13 = *(int *)(*(int *)puVar4 + iVar14 * 4);
    uVar21 = *(int *)(*(int *)puVar4 + iVar14 * 4 + 4) - iVar13;
    uVar11 = param_2[2] & 0x3fff;
    lVar2 = (ulonglong)uVar11 * (ulonglong)uVar21;
    lVar2 = (longlong)
            (int)((iVar13 + ((uint)lVar2 >> 0xe |
                            (((int)uVar21 >> 0x1f) * uVar11 + (int)((ulonglong)lVar2 >> 0x20)) *
                            0x40000)) - param_2[4]) * (longlong)param_2[5];
    uVar11 = (uint)lVar2 >> 10 | (int)((ulonglong)lVar2 >> 0x20) << 0x16;
    if (0x3fffffff < (int)uVar11) {
      uVar11 = 0x3fc00000;
    }
    iVar14 = param_2[9] >> 2;
    iVar13 = param_2[10] >> 2;
    if ((uVar1 & 0x10) == 0) {
      iVar14 = iVar14 + ((uint)((longlong)param_2[7] * (longlong)(int)uVar11) >> 0x10 |
                        (int)((ulonglong)((longlong)param_2[7] * (longlong)(int)uVar11) >> 0x20) <<
                        0x10);
    }
    if ((uVar1 & 0x20) == 0) {
      iVar13 = iVar13 + ((uint)((longlong)param_2[8] * (longlong)(int)uVar11) >> 0x10 |
                        (int)((ulonglong)((longlong)param_2[8] * (longlong)(int)uVar11) >> 0x20) <<
                        0x10);
    }
    *local_3c = iVar14 << 2;
    *(int *)(puVar3 + 0x14) = iVar13 << 2;
    iVar14 = param_2[0xb];
    if ((uVar1 & 0x40) == 0) {
      iVar14 = iVar14 + ((uint)((longlong)param_2[0xc] * (longlong)(int)uVar11) >> 0xd |
                        (int)((ulonglong)((longlong)param_2[0xc] * (longlong)(int)uVar11) >> 0x20)
                        << 0x13);
    }
    *(int *)(puVar3 + 0x18) = iVar14;
  }
  puVar3 = PTR_DAT_4a05e770;
  local_40 = *param_1 >> 0xf;
  local_44 = (*param_2 >> 0x12) - (*param_1 >> 0x12);
  uVar11 = *(uint *)(*(int *)PTR_DAT_4a05e76c + ((*param_2 >> 0xf) - local_40) * 4);
  local_48 = 7 - (local_40 & 7);
  iVar14 = param_1[2] >> 4;
  iVar13 = param_2[2] >> 4;
  piStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  if (0xb < local_44) {
    iVar6 = iVar14 - iVar13;
    bVar22 = iVar6 < 0;
    if (iVar6 != 0) {
      if (bVar22) {
        iVar6 = -iVar6;
      }
      iVar7 = (local_44 + 8 >> 1) * (iVar6 >> 3);
      iVar6 = iVar13;
      if (bVar22) {
        iVar6 = iVar14;
      }
      if (iVar7 - (iVar6 >> 2) != 0 && iVar6 >> 2 <= iVar7) {
        uVar21 = iVar13 - iVar14;
        bVar22 = (int)(uVar21 ^ uVar11) < 0;
        if (bVar22) {
          uVar21 = -uVar21;
        }
        local_4c = (uint)((longlong)(int)uVar21 * (longlong)(int)uVar11) >> 0x17 |
                   (int)((ulonglong)((longlong)(int)uVar21 * (longlong)(int)uVar11) >> 0x20) << 9;
        if (bVar22) {
          local_4c = -local_4c;
        }
        piVar8 = (int *)FUN_4a035a80(local_44,local_4c);
        if (piVar8 != (int *)0x0) {
          piVar10 = (int *)FUN_4a03a1b8(iVar14,iVar13,local_38,local_3c);
          iVar7 = *piVar8;
          iVar13 = local_48 + iVar7 * 8;
          local_74 = iVar14 * 0x10 + (((int)local_4c >> 1) * iVar13 >> 2);
          iVar6 = *(int *)PTR_DAT_4a05e76c;
          iVar14 = *(int *)(iVar6 + ((int)local_74 >> 0xe) * 4);
          uVar11 = *(int *)(iVar6 + ((int)local_74 >> 0xe) * 4 + 4) - iVar14;
          lVar2 = (ulonglong)(local_74 & 0x3fff) * (ulonglong)uVar11;
          lVar2 = (longlong)
                  (int)((((uint)lVar2 >> 0xe |
                         (((int)uVar11 >> 0x1f) * (local_74 & 0x3fff) +
                         (int)((ulonglong)lVar2 >> 0x20)) * 0x40000) + iVar14) - *piVar10) *
                  (longlong)piVar10[1];
          uVar11 = (uint)lVar2 >> 10 | (int)((ulonglong)lVar2 >> 0x20) << 0x16;
          local_6c = (((uint)((longlong)piVar10[3] * (longlong)(int)uVar11) >> 0x1d |
                      (int)((ulonglong)((longlong)piVar10[3] * (longlong)(int)uVar11) >> 0x20) << 3)
                     + (*(int *)piVar10[2] >> 1)) * 2;
          local_68 = (((uint)((longlong)piVar10[4] * (longlong)(int)uVar11) >> 0x1d |
                      (int)((ulonglong)((longlong)piVar10[4] * (longlong)(int)uVar11) >> 0x20) << 3)
                     + (*(int *)(piVar10[2] + 4) >> 1)) * 2;
          local_64 = *(int *)(piVar10[2] + 8) +
                     ((uint)((longlong)piVar10[5] * (longlong)(int)uVar11) >> 0x1e |
                     (int)((ulonglong)((longlong)piVar10[5] * (longlong)(int)uVar11) >> 0x20) << 2);
          uVar21 = *(uint *)(iVar6 + iVar13 * 4);
          local_7c = (int)local_40 >> 3;
          *(int *)puVar3 = (int)(short)iVar7;
          *(int *)(puVar3 + 4) = *(int *)(PTR_LAB_4a05e774 + 0x50) + local_7c * 2;
          puVar4 = PTR_LAB_4a05e774;
          uVar11 = (local_6c >> 0xe) - (*local_38 >> 0xe);
          local_84 = (*local_38 >> 0xe) * 0x4000;
          local_80 = (local_38[1] >> 0xe) * 0x4000;
          iVar14 = local_80;
          if ((int)uVar11 < 0) {
            iVar14 = local_84 + -1;
          }
          uVar9 = (local_68 >> 0xe) - (local_38[1] >> 0xe);
          if ((int)uVar11 < 0) {
            local_84 = iVar14;
          }
          if ((int)uVar9 < 0) {
            local_80 = local_80 + -1;
          }
          if (iVar7 == 1) {
            iVar14 = (int)(local_48 * ((int)uVar21 >> 10)) >> 4;
            uVar12 = *(uint *)(PTR_LAB_4a05e774 + 0x54);
            *(int *)(puVar3 + 8) = iVar14 * ((int)uVar11 >> 2) + local_84 >> (uVar12 & 0xff);
            iVar14 = ((int)uVar9 >> 2) * iVar14 + local_80 >> ((uVar12 & 0x7f) << 1);
            uVar11 = *(uint *)(puVar4 + 0x58);
            if (uVar11 != 0) {
              iVar14 = iVar14 << (uVar11 & 0xff);
            }
            *(int *)(puVar3 + 0xc) = iVar14;
          }
          else {
            bVar22 = (int)(uVar11 ^ uVar21) < 0;
            if (bVar22) {
              uVar11 = -uVar11;
            }
            uVar11 = (uint)((longlong)(int)uVar11 * (longlong)(int)uVar21) >> 0xd |
                     (int)((ulonglong)((longlong)(int)uVar11 * (longlong)(int)uVar21) >> 0x20) <<
                     0x13;
            if (bVar22) {
              uVar11 = -uVar11;
            }
            bVar22 = (int)(uVar9 ^ uVar21) < 0;
            if (bVar22) {
              uVar9 = -uVar9;
            }
            uVar9 = (uint)((longlong)(int)uVar9 * (longlong)(int)uVar21) >> 0xd |
                    (int)((ulonglong)((longlong)(int)uVar9 * (longlong)(int)uVar21) >> 0x20) << 0x13
            ;
            if (bVar22) {
              uVar9 = -uVar9;
            }
            uVar12 = 0;
            if (local_2c != 0) {
              uVar17 = uVar11;
              if ((int)uVar11 < 1) {
                uVar17 = -uVar11;
              }
              uVar16 = uVar9;
              if ((int)uVar9 < 1) {
                uVar16 = -uVar9;
              }
              if ((int)uVar16 < (int)uVar17) {
                uVar17 = uVar11;
                if ((int)uVar11 < 1) {
                  uVar17 = -uVar11;
                }
              }
              else {
                uVar17 = uVar9;
                if ((int)uVar9 < 1) {
                  uVar17 = -uVar9;
                }
              }
              if (0x13ffff < uVar17) {
                uVar12 = 0;
                if (0x9ffff < uVar17 >> 4) {
                  uVar12 = 4;
                  uVar17 = uVar17 >> 4;
                }
                if (0x9ffff < uVar17 >> 2) {
                  uVar12 = uVar12 + 2;
                  uVar17 = uVar17 >> 2;
                }
                if (0x9ffff < uVar17 >> 1) {
                  uVar12 = uVar12 + 1;
                }
                if (local_2c < uVar12) {
                  uVar12 = local_2c;
                }
                local_84 = local_84 >> (uVar12 & 0xff);
                local_80 = local_80 >> (uVar12 & 0xff);
                uVar11 = (int)uVar11 >> (uVar12 & 0xff);
                uVar9 = (int)uVar9 >> (uVar12 & 0xff);
              }
              if (*(uint *)(PTR_LAB_4a05e774 + 0x54) != uVar12) {
                iVar14 = local_28 + uVar12 * 8;
                *(undefined4 *)(puVar3 + 0x18) = *(undefined4 *)(iVar14 + 100);
                *(undefined4 *)(puVar3 + 0x1c) = *(undefined4 *)(iVar14 + 0x68);
                *(uint *)(puVar4 + 0x54) = uVar12;
              }
            }
            bVar22 = (int)(local_48 ^ uVar9) < 0;
            uVar17 = uVar9;
            if (bVar22) {
              uVar17 = -uVar9;
            }
            uVar17 = (uint)((longlong)(int)uVar17 * (longlong)(int)local_48) >> 3 |
                     (int)((ulonglong)((longlong)(int)uVar17 * (longlong)(int)local_48) >> 0x20) <<
                     0x1d;
            if (bVar22) {
              uVar17 = -uVar17;
            }
            local_8c = uVar17 + local_80;
            bVar22 = (int)(local_48 ^ uVar11) < 0;
            uVar17 = uVar11;
            if (bVar22) {
              uVar17 = -uVar11;
            }
            uVar17 = (uint)((longlong)(int)uVar17 * (longlong)(int)local_48) >> 3 |
                     (int)((ulonglong)((longlong)(int)uVar17 * (longlong)(int)local_48) >> 0x20) <<
                     0x1d;
            if (bVar22) {
              uVar17 = -uVar17;
            }
            *(uint *)(puVar3 + 0x10) = uVar11;
            puVar4 = PTR_LAB_4a05e774;
            *(uint *)(puVar3 + 8) = uVar17 + local_84;
            uVar11 = *(uint *)(puVar4 + 0x58);
            if (uVar11 != 0) {
              uVar9 = uVar9 << (uVar11 & 0xff);
              local_8c = local_8c << (uVar11 & 0xff);
            }
            *(int *)(puVar3 + 0x14) = (int)uVar9 >> (uVar12 & 0xff);
            *(int *)(puVar3 + 0xc) = local_8c >> (uVar12 & 0xff);
          }
          uVar11 = local_64 >> 0x11;
          uVar9 = local_38[2] >> 0x11;
          if (0x7f0 < (int)uVar9) {
            uVar9 = 0x7f0;
          }
          if (0x7f0 < (int)uVar11) {
            uVar11 = 0x7f0;
          }
          uVar12 = uVar9 ^ uVar11;
          bVar22 = (uVar12 & 0x7c0) == 0;
          if (bVar22) {
            uVar12 = (uint)(byte)PTR_LAB_4a05e774[0x45];
          }
          if (bVar22 && uVar12 == 0) {
            uVar11 = uVar9 << 0x11 | 0x80000000;
          }
          else {
            iVar14 = ((int)uVar21 >> 10) * (uVar11 - uVar9);
            *(int *)(puVar3 + 0x28) = iVar14;
            uVar11 = ((int)(local_48 * (iVar14 >> 2)) >> 1) + uVar9 * 0x20000;
          }
          puVar4 = PTR_LAB_4a05e774;
          *(uint *)(puVar3 + 0x24) = uVar11;
          (**(code **)(puVar4 + 0x68))(puVar3);
          piVar5 = local_5c;
          piVar18 = &local_6c;
          piVar8 = piVar8 + 1;
          do {
            piVar15 = piVar5;
            puVar4 = PTR_LAB_4a05e774;
            local_7c = local_7c + iVar7;
            piVar20 = piVar8 + 1;
            iVar7 = *piVar8;
            if (*piVar20 == 0) {
              iVar14 = (*local_30 >> 0xf) + local_7c * -8 + -7;
              iVar13 = local_3c[1];
              iVar6 = local_3c[2];
              iVar19 = local_3c[3];
              *piVar15 = *local_3c;
              piVar15[1] = iVar13;
              piVar15[2] = iVar6;
              piVar15[3] = iVar19;
            }
            else {
              local_74 = local_4c * iVar7 + local_74;
              iVar14 = *(int *)(*(int *)PTR_DAT_4a05e76c + ((int)local_74 >> 0xe) * 4);
              uVar11 = *(int *)(*(int *)PTR_DAT_4a05e76c + ((int)local_74 >> 0xe) * 4 + 4) - iVar14;
              lVar2 = (ulonglong)(local_74 & 0x3fff) * (ulonglong)uVar11;
              lVar2 = (longlong)
                      (int)((iVar14 + ((uint)lVar2 >> 0xe |
                                      (((int)uVar11 >> 0x1f) * (local_74 & 0x3fff) +
                                      (int)((ulonglong)lVar2 >> 0x20)) * 0x40000)) - *piVar10) *
                      (longlong)piVar10[1];
              uVar11 = (uint)lVar2 >> 10 | (int)((ulonglong)lVar2 >> 0x20) << 0x16;
              *piVar15 = (((uint)((longlong)piVar10[3] * (longlong)(int)uVar11) >> 0x1d |
                          (int)((ulonglong)((longlong)piVar10[3] * (longlong)(int)uVar11) >> 0x20)
                          << 3) + (*(int *)piVar10[2] >> 1)) * 2;
              piVar15[1] = (((uint)((longlong)piVar10[4] * (longlong)(int)uVar11) >> 0x1d |
                            (int)((ulonglong)((longlong)piVar10[4] * (longlong)(int)uVar11) >> 0x20)
                            << 3) + (*(int *)(piVar10[2] + 4) >> 1)) * 2;
              piVar15[2] = ((uint)((longlong)piVar10[5] * (longlong)(int)uVar11) >> 0x1e |
                           (int)((ulonglong)((longlong)piVar10[5] * (longlong)(int)uVar11) >> 0x20)
                           << 2) + *(int *)(piVar10[2] + 8);
              iVar14 = iVar7 << 3;
            }
            uVar9 = *(uint *)(*(int *)PTR_DAT_4a05e76c + iVar14 * 4);
            *(int *)puVar3 = iVar7;
            *(int *)(puVar3 + 4) = *(int *)(puVar4 + 0x50) + local_7c * 2;
            puVar4 = PTR_LAB_4a05e774;
            uVar11 = (*piVar15 >> 0xe) - (*piVar18 >> 0xe);
            uVar21 = (piVar15[1] >> 0xe) - (piVar18[1] >> 0xe);
            iVar14 = (*piVar18 >> 0xe) * 0x4000;
            if ((int)uVar11 < 0) {
              iVar14 = iVar14 + -1;
            }
            iVar13 = (piVar18[1] >> 0xe) * 0x4000;
            if ((int)uVar21 < 0) {
              iVar13 = iVar13 + -1;
            }
            if (iVar7 == 1) {
              uVar11 = *(uint *)(PTR_LAB_4a05e774 + 0x54);
              *(int *)(puVar3 + 8) = iVar14 >> (uVar11 & 0xff);
              uVar21 = *(uint *)(puVar4 + 0x58);
              iVar13 = iVar13 >> ((uVar11 & 0x7f) << 1);
              if (uVar21 != 0) {
                iVar13 = iVar13 << (uVar21 & 0xff);
              }
              *(int *)(puVar3 + 0xc) = iVar13;
            }
            else {
              bVar22 = (int)(uVar11 ^ uVar9) < 0;
              if (bVar22) {
                uVar11 = -uVar11;
              }
              uVar11 = (uint)((longlong)(int)uVar11 * (longlong)(int)uVar9) >> 0xd |
                       (int)((ulonglong)((longlong)(int)uVar11 * (longlong)(int)uVar9) >> 0x20) <<
                       0x13;
              if (bVar22) {
                uVar11 = -uVar11;
              }
              bVar22 = (int)(uVar21 ^ uVar9) < 0;
              if (bVar22) {
                uVar21 = -uVar21;
              }
              uVar21 = (uint)((longlong)(int)uVar21 * (longlong)(int)uVar9) >> 0xd |
                       (int)((ulonglong)((longlong)(int)uVar21 * (longlong)(int)uVar9) >> 0x20) <<
                       0x13;
              if (bVar22) {
                uVar21 = -uVar21;
              }
              uVar12 = 0;
              if (local_2c != 0) {
                uVar17 = uVar11;
                if ((int)uVar11 < 1) {
                  uVar17 = -uVar11;
                }
                uVar16 = uVar21;
                if ((int)uVar21 < 1) {
                  uVar16 = -uVar21;
                }
                if ((int)uVar16 < (int)uVar17) {
                  uVar17 = uVar11;
                  if ((int)uVar11 < 1) {
                    uVar17 = -uVar11;
                  }
                }
                else {
                  uVar17 = uVar21;
                  if ((int)uVar21 < 1) {
                    uVar17 = -uVar21;
                  }
                }
                if (0x13ffff < uVar17) {
                  uVar12 = 0;
                  if (0x9ffff < uVar17 >> 4) {
                    uVar12 = 4;
                    uVar17 = uVar17 >> 4;
                  }
                  if (0x9ffff < uVar17 >> 2) {
                    uVar12 = uVar12 + 2;
                    uVar17 = uVar17 >> 2;
                  }
                  if (0x9ffff < uVar17 >> 1) {
                    uVar12 = uVar12 + 1;
                  }
                  if (local_2c < uVar12) {
                    uVar12 = local_2c;
                  }
                  uVar11 = (int)uVar11 >> (uVar12 & 0xff);
                  uVar21 = (int)uVar21 >> (uVar12 & 0xff);
                  iVar14 = iVar14 >> (uVar12 & 0xff);
                  iVar13 = iVar13 >> (uVar12 & 0xff);
                }
                if (*(uint *)(PTR_LAB_4a05e774 + 0x54) != uVar12) {
                  iVar6 = local_28 + uVar12 * 8;
                  *(undefined4 *)(puVar3 + 0x18) = *(undefined4 *)(iVar6 + 100);
                  *(undefined4 *)(puVar3 + 0x1c) = *(undefined4 *)(iVar6 + 0x68);
                  *(uint *)(puVar4 + 0x54) = uVar12;
                }
              }
              *(int *)(puVar3 + 8) = iVar14;
              puVar4 = PTR_LAB_4a05e774;
              *(uint *)(puVar3 + 0x10) = uVar11;
              uVar11 = *(uint *)(puVar4 + 0x58);
              if (uVar11 != 0) {
                uVar21 = uVar21 << (uVar11 & 0xff);
                iVar13 = iVar13 << (uVar11 & 0xff);
              }
              *(int *)(puVar3 + 0x14) = (int)uVar21 >> (uVar12 & 0xff);
              *(int *)(puVar3 + 0xc) = iVar13 >> (uVar12 & 0xff);
            }
            uVar11 = piVar18[2] >> 0x11;
            uVar21 = piVar15[2] >> 0x11;
            if (0x7f0 < (int)uVar11) {
              uVar11 = 0x7f0;
            }
            if (0x7f0 < (int)uVar21) {
              uVar21 = 0x7f0;
            }
            uVar12 = uVar11 ^ uVar21;
            bVar22 = (uVar12 & 0x7c0) == 0;
            if (bVar22) {
              uVar12 = (uint)(byte)PTR_LAB_4a05e774[0x45];
            }
            if (bVar22 && uVar12 == 0) {
              uVar11 = uVar11 << 0x11 | 0x80000000;
            }
            else {
              *(uint *)(puVar3 + 0x28) = ((int)uVar9 >> 10) * (uVar21 - uVar11);
              uVar11 = uVar11 * 0x20000;
            }
            *(uint *)(puVar3 + 0x24) = uVar11;
            (**(code **)(PTR_LAB_4a05e774 + 0x68))(puVar3);
            puVar4 = PTR_LAB_4a05e774;
            piVar5 = piVar18;
            piVar18 = piVar15;
            piVar8 = piVar20;
          } while (*piVar20 != 0);
          iVar14 = *(int *)(PTR_LAB_4a05e774 + 0x60);
          if (iVar14 < 0) {
            host_s3eDeviceYield_arm(0x80000000);
            iVar14 = *(int *)(puVar4 + 100);
          }
          *(int *)(puVar4 + 0x60) = (iVar14 - local_44) + -0x10;
          return;
        }
      }
    }
  }
  puVar4 = PTR_LAB_4a05e774;
  *(int *)puVar3 = local_44;
  *(int *)(puVar3 + 4) = *(int *)(puVar4 + 0x50) + ((int)local_40 >> 3) * 2;
  uVar21 = (*local_3c >> 0xe) - (*local_38 >> 0xe);
  uVar9 = (local_3c[1] >> 0xe) - (local_38[1] >> 0xe);
  iVar14 = (*local_38 >> 0xe) * 0x4000;
  iVar13 = (local_38[1] >> 0xe) * 0x4000;
  if ((int)uVar21 < 0) {
    iVar14 = iVar14 + -1;
  }
  if ((int)uVar9 < 0) {
    iVar13 = iVar13 + -1;
  }
  if (local_44 == 1) {
    iVar6 = (int)(local_48 * ((int)uVar11 >> 10)) >> 4;
    uVar12 = *(uint *)(puVar4 + 0x54);
    *(int *)(puVar3 + 8) = ((int)uVar21 >> 2) * iVar6 + iVar14 >> (uVar12 & 0xff);
    iVar14 = iVar6 * ((int)uVar9 >> 2) + iVar13 >> ((uVar12 & 0x7f) << 1);
    if (*(uint *)(puVar4 + 0x58) != 0) {
      iVar14 = iVar14 << (*(uint *)(puVar4 + 0x58) & 0xff);
    }
    *(int *)(puVar3 + 0xc) = iVar14;
  }
  else {
    bVar22 = (int)(uVar21 ^ uVar11) < 0;
    if (bVar22) {
      uVar21 = -uVar21;
    }
    uVar21 = (uint)((longlong)(int)uVar21 * (longlong)(int)uVar11) >> 0xd |
             (int)((ulonglong)((longlong)(int)uVar21 * (longlong)(int)uVar11) >> 0x20) << 0x13;
    if (bVar22) {
      uVar21 = -uVar21;
    }
    bVar22 = (int)(uVar9 ^ uVar11) < 0;
    if (bVar22) {
      uVar9 = -uVar9;
    }
    uVar9 = (uint)((longlong)(int)uVar9 * (longlong)(int)uVar11) >> 0xd |
            (int)((ulonglong)((longlong)(int)uVar9 * (longlong)(int)uVar11) >> 0x20) << 0x13;
    if (bVar22) {
      uVar9 = -uVar9;
    }
    uVar12 = 0;
    if (local_2c != 0) {
      uVar17 = uVar21;
      if ((int)uVar21 < 1) {
        uVar17 = -uVar21;
      }
      uVar16 = uVar9;
      if ((int)uVar9 < 1) {
        uVar16 = -uVar9;
      }
      if ((int)uVar16 < (int)uVar17) {
        uVar17 = uVar21;
        if ((int)uVar21 < 1) {
          uVar17 = -uVar21;
        }
      }
      else {
        uVar17 = uVar9;
        if ((int)uVar9 < 1) {
          uVar17 = -uVar9;
        }
      }
      if (0x13ffff < uVar17) {
        uVar12 = 0;
        if (0x9ffff < uVar17 >> 4) {
          uVar12 = 4;
          uVar17 = uVar17 >> 4;
        }
        if (0x9ffff < uVar17 >> 2) {
          uVar12 = uVar12 + 2;
          uVar17 = uVar17 >> 2;
        }
        if (0x9ffff < uVar17 >> 1) {
          uVar12 = uVar12 + 1;
        }
        if (local_2c < uVar12) {
          uVar12 = local_2c;
        }
        uVar21 = (int)uVar21 >> (uVar12 & 0xff);
        uVar9 = (int)uVar9 >> (uVar12 & 0xff);
        iVar14 = iVar14 >> (uVar12 & 0xff);
        iVar13 = iVar13 >> (uVar12 & 0xff);
      }
      if (*(uint *)(puVar4 + 0x54) != uVar12) {
        iVar6 = local_28 + uVar12 * 8;
        *(undefined4 *)(puVar3 + 0x18) = *(undefined4 *)(iVar6 + 100);
        *(undefined4 *)(puVar3 + 0x1c) = *(undefined4 *)(iVar6 + 0x68);
        *(uint *)(puVar4 + 0x54) = uVar12;
      }
    }
    bVar22 = (int)(uVar9 ^ local_48) < 0;
    uVar17 = uVar9;
    if (bVar22) {
      uVar17 = -uVar9;
    }
    uVar17 = (uint)((longlong)(int)uVar17 * (longlong)(int)local_48) >> 3 |
             (int)((ulonglong)((longlong)(int)uVar17 * (longlong)(int)local_48) >> 0x20) << 0x1d;
    if (bVar22) {
      uVar17 = -uVar17;
    }
    bVar22 = (int)(uVar21 ^ local_48) < 0;
    iVar13 = uVar17 + iVar13;
    uVar17 = uVar21;
    if (bVar22) {
      uVar17 = -uVar21;
    }
    uVar17 = (uint)((longlong)(int)uVar17 * (longlong)(int)local_48) >> 3 |
             (int)((ulonglong)((longlong)(int)uVar17 * (longlong)(int)local_48) >> 0x20) << 0x1d;
    if (bVar22) {
      uVar17 = -uVar17;
    }
    *(uint *)(puVar3 + 0x10) = uVar21;
    *(uint *)(puVar3 + 8) = uVar17 + iVar14;
    uVar21 = *(uint *)(puVar4 + 0x58);
    if (uVar21 != 0) {
      uVar9 = uVar9 << (uVar21 & 0xff);
      iVar13 = iVar13 << (uVar21 & 0xff);
    }
    *(int *)(puVar3 + 0x14) = (int)uVar9 >> (uVar12 & 0xff);
    *(int *)(puVar3 + 0xc) = iVar13 >> (uVar12 & 0xff);
  }
  uVar21 = local_38[2] >> 0x11;
  uVar9 = local_3c[2] >> 0x11;
  if (0x7f0 < (int)uVar21) {
    uVar21 = 0x7f0;
  }
  if (0x7f0 < (int)uVar9) {
    uVar9 = 0x7f0;
  }
  uVar12 = uVar21 ^ uVar9;
  bVar22 = (uVar12 & 0x7c0) == 0;
  if (bVar22) {
    uVar12 = (uint)(byte)puVar4[0x45];
  }
  if (bVar22 && uVar12 == 0) {
    uVar11 = uVar21 << 0x11 | 0x80000000;
  }
  else {
    iVar14 = (uVar9 - uVar21) * ((int)uVar11 >> 10);
    *(int *)(puVar3 + 0x28) = iVar14;
    uVar11 = ((int)(local_48 * (iVar14 >> 2)) >> 1) + uVar21 * 0x20000;
  }
  *(uint *)(puVar3 + 0x24) = uVar11;
  iVar14 = *(int *)(puVar4 + 0x60);
  if (iVar14 < 0) {
    host_s3eDeviceYield_arm(0x80000000);
    iVar14 = *(int *)(puVar4 + 100);
  }
  *(int *)(puVar4 + 0x60) = (iVar14 - local_44) + -0x10;
                    /* WARNING: Could not recover jumptable at 0x4a05df00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar4 + 0x68))(puVar3);
  return;
}



// Address: 4a05e778

void FUN_4a05e778(int *param_1,int *param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  
  puVar2 = PTR_LAB_4a05eaf8;
  uVar6 = *param_1 >> 0xf;
  iVar13 = *param_1 >> 0x12;
  iVar12 = (*param_2 >> 0x12) - iVar13;
  uVar8 = *(uint *)(*(int *)PTR_DAT_4a05eafc + ((*param_2 >> 0xf) - uVar6) * 4);
  *(int *)(PTR_LAB_4a05eaf8 + 0x6c) = iVar12;
  *(int *)(puVar2 + 0x70) = *(int *)(puVar2 + 0x50) + iVar13 * 2;
  puVar3 = PTR_LAB_4a05eaf8;
  uVar4 = (param_2[10] >> 0xe) - (param_1[10] >> 0xe);
  uVar10 = (param_2[9] >> 0xe) - (param_1[9] >> 0xe);
  iVar13 = (param_1[9] >> 0xe) * 0x4000;
  if ((int)uVar10 < 0) {
    iVar13 = iVar13 + -1;
  }
  iVar7 = (param_1[10] >> 0xe) * 0x4000;
  if ((int)uVar4 < 0) {
    iVar7 = iVar7 + -1;
  }
  uVar6 = 7 - (uVar6 & 7);
  if (iVar12 == 1) {
    iVar1 = (int)(uVar6 * ((int)uVar8 >> 10)) >> 4;
    iVar7 = iVar1 * ((int)uVar4 >> 2) + iVar7 >> ((*(uint *)(PTR_LAB_4a05eaf8 + 0x54) & 0x7f) << 1);
    *(int *)(puVar2 + 0x74) =
         iVar1 * ((int)uVar10 >> 2) + iVar13 >> (*(uint *)(PTR_LAB_4a05eaf8 + 0x54) & 0xff);
    uVar10 = *(uint *)(puVar3 + 0x58);
    if (uVar10 != 0) {
      iVar7 = iVar7 << (uVar10 & 0xff);
    }
    *(int *)(puVar2 + 0x78) = iVar7;
  }
  else {
    bVar14 = (int)(uVar10 ^ uVar8) < 0;
    if (bVar14) {
      uVar10 = -uVar10;
    }
    uVar10 = (uint)((longlong)(int)uVar10 * (longlong)(int)uVar8) >> 0xd |
             (int)((ulonglong)((longlong)(int)uVar10 * (longlong)(int)uVar8) >> 0x20) << 0x13;
    if (bVar14) {
      uVar10 = -uVar10;
    }
    bVar14 = (int)(uVar4 ^ uVar8) < 0;
    if (bVar14) {
      uVar4 = -uVar4;
    }
    uVar4 = (uint)((longlong)(int)uVar4 * (longlong)(int)uVar8) >> 0xd |
            (int)((ulonglong)((longlong)(int)uVar4 * (longlong)(int)uVar8) >> 0x20) << 0x13;
    if (bVar14) {
      uVar4 = -uVar4;
    }
    uVar11 = 0;
    if (param_3 != 0) {
      uVar5 = uVar10;
      if ((int)uVar10 < 1) {
        uVar5 = -uVar10;
      }
      uVar9 = uVar4;
      if ((int)uVar4 < 1) {
        uVar9 = -uVar4;
      }
      if ((int)uVar9 < (int)uVar5) {
        uVar5 = uVar10;
        if ((int)uVar10 < 1) {
          uVar5 = -uVar10;
        }
      }
      else {
        uVar5 = uVar4;
        if ((int)uVar4 < 1) {
          uVar5 = -uVar4;
        }
      }
      if (0x13ffff < uVar5) {
        uVar11 = 0;
        if (0x9ffff < uVar5 >> 4) {
          uVar11 = 4;
          uVar5 = uVar5 >> 4;
        }
        if (0x9ffff < uVar5 >> 2) {
          uVar11 = uVar11 + 2;
          uVar5 = uVar5 >> 2;
        }
        if (0x9ffff < uVar5 >> 1) {
          uVar11 = uVar11 + 1;
        }
        if (param_3 < uVar11) {
          uVar11 = param_3;
        }
        uVar10 = (int)uVar10 >> (uVar11 & 0xff);
        uVar4 = (int)uVar4 >> (uVar11 & 0xff);
        iVar13 = iVar13 >> (uVar11 & 0xff);
        iVar7 = iVar7 >> (uVar11 & 0xff);
      }
      if (*(uint *)(PTR_LAB_4a05eaf8 + 0x54) != uVar11) {
        param_4 = param_4 + uVar11 * 8;
        *(undefined4 *)(puVar2 + 0x84) = *(undefined4 *)(param_4 + 100);
        *(undefined4 *)(puVar2 + 0x88) = *(undefined4 *)(param_4 + 0x68);
        *(uint *)(puVar3 + 0x54) = uVar11;
      }
    }
    bVar14 = (int)(uVar4 ^ uVar6) < 0;
    uVar5 = uVar4;
    if (bVar14) {
      uVar5 = -uVar4;
    }
    uVar5 = (uint)((longlong)(int)uVar5 * (longlong)(int)uVar6) >> 3 |
            (int)((ulonglong)((longlong)(int)uVar5 * (longlong)(int)uVar6) >> 0x20) << 0x1d;
    if (bVar14) {
      uVar5 = -uVar5;
    }
    iVar7 = iVar7 + uVar5;
    bVar14 = (int)(uVar10 ^ uVar6) < 0;
    uVar5 = uVar10;
    if (bVar14) {
      uVar5 = -uVar10;
    }
    uVar5 = (uint)((longlong)(int)uVar5 * (longlong)(int)uVar6) >> 3 |
            (int)((ulonglong)((longlong)(int)uVar5 * (longlong)(int)uVar6) >> 0x20) << 0x1d;
    if (bVar14) {
      uVar5 = -uVar5;
    }
    *(uint *)(puVar2 + 0x7c) = uVar10;
    puVar3 = PTR_LAB_4a05eaf8;
    *(uint *)(puVar2 + 0x74) = uVar5 + iVar13;
    uVar10 = *(uint *)(puVar3 + 0x58);
    if (uVar10 != 0) {
      uVar4 = uVar4 << (uVar10 & 0xff);
      iVar7 = iVar7 << (uVar10 & 0xff);
    }
    *(int *)(puVar2 + 0x80) = (int)uVar4 >> (uVar11 & 0xff);
    *(int *)(puVar2 + 0x78) = iVar7 >> (uVar11 & 0xff);
  }
  iVar13 = param_1[0xc];
  uVar10 = param_2[0xb] - param_1[0xb] >> 0x10;
  bVar14 = (int)(uVar10 ^ uVar8) < 0;
  if (bVar14) {
    uVar10 = -uVar10;
  }
  uVar4 = (uint)((longlong)(int)uVar10 * (longlong)(int)uVar8) >> 0xb |
          (int)((ulonglong)((longlong)(int)uVar10 * (longlong)(int)uVar8) >> 0x20) << 0x15;
  uVar10 = param_2[0xc] - iVar13 >> 0x10;
  if (bVar14) {
    uVar4 = -uVar4;
  }
  bVar14 = (int)(uVar10 ^ uVar8) < 0;
  if (bVar14) {
    uVar10 = -uVar10;
  }
  uVar10 = (uint)((longlong)(int)uVar10 * (longlong)(int)uVar8) >> 0xb |
           (int)((ulonglong)((longlong)(int)uVar10 * (longlong)(int)uVar8) >> 0x20) << 0x15;
  if (bVar14) {
    uVar10 = -uVar10;
  }
  bVar14 = (int)(uVar4 ^ uVar6) < 0;
  uVar8 = uVar4;
  if (bVar14) {
    uVar8 = -uVar4;
  }
  uVar8 = uVar8 * uVar6 >> 3;
  if (bVar14) {
    uVar8 = -uVar8;
  }
  bVar14 = (int)(uVar10 ^ uVar6) < 0;
  *(int *)(puVar2 + 0x98) = (int)((uVar8 + param_1[0xb]) * 0x10) >> 0x10;
  uVar8 = uVar10;
  if (bVar14) {
    uVar8 = -uVar10;
  }
  uVar6 = uVar8 * uVar6 >> 3;
  if (bVar14) {
    uVar6 = -uVar6;
  }
  *(uint *)(puVar2 + 0x9c) = uVar4;
  *(int *)(puVar2 + 0xa0) = (int)((uVar6 + iVar13) * 0x10) >> 0x10;
  puVar3 = PTR_LAB_4a05eaf8;
  *(uint *)(puVar2 + 0xa4) = uVar10;
  iVar13 = *(int *)(puVar3 + 0x60);
  if (iVar13 < 0) {
    host_s3eDeviceYield_arm(0x80000000);
    iVar13 = *(int *)(puVar3 + 100);
  }
  *(int *)(puVar3 + 0x60) = (iVar13 - iVar12) + -0x10;
                    /* WARNING: Could not recover jumptable at 0x4a05eaf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar3 + 0x68))(puVar2 + 0x6c);
  return;
}



// Address: 4a05eb00

void FUN_4a05eb00(int *param_1,int *param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  
  puVar2 = PTR_LAB_4a05eee8;
  uVar5 = *param_1 >> 0xf;
  iVar11 = *param_1 >> 0x12;
  iVar13 = (*param_2 >> 0x12) - iVar11;
  uVar7 = *(uint *)(*(int *)PTR_DAT_4a05eeec + ((*param_2 >> 0xf) - uVar5) * 4);
  puVar8 = PTR_LAB_4a05eee8 + 0x6c;
  *(int *)(PTR_LAB_4a05eee8 + 0x6c) = iVar13;
  *(int *)(puVar2 + 0x70) = *(int *)(puVar2 + 0x50) + iVar11 * 2;
  puVar3 = PTR_LAB_4a05eee8;
  uVar9 = (param_2[9] >> 0xe) - (param_1[9] >> 0xe);
  uVar4 = (param_2[10] >> 0xe) - (param_1[10] >> 0xe);
  iVar11 = (param_1[9] >> 0xe) * 0x4000;
  if ((int)uVar9 < 0) {
    iVar11 = iVar11 + -1;
  }
  iVar14 = (param_1[10] >> 0xe) * 0x4000;
  if ((int)uVar4 < 0) {
    iVar14 = iVar14 + -1;
  }
  uVar5 = 7 - (uVar5 & 7);
  if (iVar13 == 1) {
    iVar1 = (int)(uVar5 * ((int)uVar7 >> 10)) >> 4;
    iVar14 = iVar1 * ((int)uVar4 >> 2) + iVar14 >>
             ((*(uint *)(PTR_LAB_4a05eee8 + 0x54) & 0x7f) << 1);
    *(int *)(puVar2 + 0x74) =
         ((int)uVar9 >> 2) * iVar1 + iVar11 >> (*(uint *)(PTR_LAB_4a05eee8 + 0x54) & 0xff);
    uVar9 = *(uint *)(puVar3 + 0x58);
    if (uVar9 != 0) {
      iVar14 = iVar14 << (uVar9 & 0xff);
    }
    *(int *)(puVar2 + 0x78) = iVar14;
  }
  else {
    bVar15 = (int)(uVar9 ^ uVar7) < 0;
    if (bVar15) {
      uVar9 = -uVar9;
    }
    uVar9 = (uint)((longlong)(int)uVar9 * (longlong)(int)uVar7) >> 0xd |
            (int)((ulonglong)((longlong)(int)uVar9 * (longlong)(int)uVar7) >> 0x20) << 0x13;
    if (bVar15) {
      uVar9 = -uVar9;
    }
    bVar15 = (int)(uVar4 ^ uVar7) < 0;
    if (bVar15) {
      uVar4 = -uVar4;
    }
    uVar4 = (uint)((longlong)(int)uVar4 * (longlong)(int)uVar7) >> 0xd |
            (int)((ulonglong)((longlong)(int)uVar4 * (longlong)(int)uVar7) >> 0x20) << 0x13;
    if (bVar15) {
      uVar4 = -uVar4;
    }
    uVar12 = 0;
    if (param_3 != 0) {
      uVar6 = uVar9;
      if ((int)uVar9 < 1) {
        uVar6 = -uVar9;
      }
      uVar10 = uVar4;
      if ((int)uVar4 < 1) {
        uVar10 = -uVar4;
      }
      if ((int)uVar10 < (int)uVar6) {
        uVar6 = uVar9;
        if ((int)uVar9 < 1) {
          uVar6 = -uVar9;
        }
      }
      else {
        uVar6 = uVar4;
        if ((int)uVar4 < 1) {
          uVar6 = -uVar4;
        }
      }
      if (0x13ffff < uVar6) {
        uVar12 = 0;
        if (0x9ffff < uVar6 >> 4) {
          uVar12 = 4;
          uVar6 = uVar6 >> 4;
        }
        if (0x9ffff < uVar6 >> 2) {
          uVar12 = uVar12 + 2;
          uVar6 = uVar6 >> 2;
        }
        if (0x9ffff < uVar6 >> 1) {
          uVar12 = uVar12 + 1;
        }
        if (param_3 < uVar12) {
          uVar12 = param_3;
        }
        uVar9 = (int)uVar9 >> (uVar12 & 0xff);
        uVar4 = (int)uVar4 >> (uVar12 & 0xff);
        iVar11 = iVar11 >> (uVar12 & 0xff);
        iVar14 = iVar14 >> (uVar12 & 0xff);
      }
      if (*(uint *)(PTR_LAB_4a05eee8 + 0x54) != uVar12) {
        param_4 = param_4 + uVar12 * 8;
        *(undefined4 *)(puVar2 + 0x84) = *(undefined4 *)(param_4 + 100);
        *(undefined4 *)(puVar2 + 0x88) = *(undefined4 *)(param_4 + 0x68);
        *(uint *)(puVar3 + 0x54) = uVar12;
      }
    }
    bVar15 = (int)(uVar4 ^ uVar5) < 0;
    uVar6 = uVar4;
    if (bVar15) {
      uVar6 = -uVar4;
    }
    uVar6 = (uint)((longlong)(int)uVar6 * (longlong)(int)uVar5) >> 3 |
            (int)((ulonglong)((longlong)(int)uVar6 * (longlong)(int)uVar5) >> 0x20) << 0x1d;
    if (bVar15) {
      uVar6 = -uVar6;
    }
    iVar14 = uVar6 + iVar14;
    bVar15 = (int)(uVar9 ^ uVar5) < 0;
    uVar6 = uVar9;
    if (bVar15) {
      uVar6 = -uVar9;
    }
    uVar6 = (uint)((longlong)(int)uVar6 * (longlong)(int)uVar5) >> 3 |
            (int)((ulonglong)((longlong)(int)uVar6 * (longlong)(int)uVar5) >> 0x20) << 0x1d;
    if (bVar15) {
      uVar6 = -uVar6;
    }
    *(uint *)(puVar2 + 0x74) = iVar11 + uVar6;
    puVar3 = PTR_LAB_4a05eee8;
    *(uint *)(puVar2 + 0x7c) = uVar9;
    uVar9 = *(uint *)(puVar3 + 0x58);
    if (uVar9 != 0) {
      uVar4 = uVar4 << (uVar9 & 0xff);
      iVar14 = iVar14 << (uVar9 & 0xff);
    }
    *(int *)(puVar2 + 0x80) = (int)uVar4 >> (uVar12 & 0xff);
    *(int *)(puVar2 + 0x78) = iVar14 >> (uVar12 & 0xff);
  }
  iVar11 = param_1[0xe];
  uVar9 = param_2[0xd] - param_1[0xd] >> 0x10;
  bVar15 = (int)(uVar9 ^ uVar7) < 0;
  if (bVar15) {
    uVar9 = -uVar9;
  }
  uVar4 = (uint)((longlong)(int)uVar9 * (longlong)(int)uVar7) >> 0xb |
          (int)((ulonglong)((longlong)(int)uVar9 * (longlong)(int)uVar7) >> 0x20) << 0x15;
  uVar9 = param_2[0xe] - iVar11 >> 0x10;
  if (bVar15) {
    uVar4 = -uVar4;
  }
  bVar15 = (int)(uVar9 ^ uVar7) < 0;
  if (bVar15) {
    uVar9 = -uVar9;
  }
  uVar9 = (uint)((longlong)(int)uVar9 * (longlong)(int)uVar7) >> 0xb |
          (int)((ulonglong)((longlong)(int)uVar9 * (longlong)(int)uVar7) >> 0x20) << 0x15;
  if (bVar15) {
    uVar9 = -uVar9;
  }
  bVar15 = (int)(uVar4 ^ uVar5) < 0;
  uVar12 = uVar4;
  if (bVar15) {
    uVar12 = -uVar4;
  }
  uVar12 = uVar12 * uVar5 >> 3;
  if (bVar15) {
    uVar12 = -uVar12;
  }
  bVar15 = (int)(uVar9 ^ uVar5) < 0;
  *(int *)(puVar2 + 0x98) = (int)((param_1[0xd] + uVar12) * 0x10) >> 0x10;
  uVar12 = uVar9;
  if (bVar15) {
    uVar12 = -uVar9;
  }
  uVar12 = uVar12 * uVar5 >> 3;
  if (bVar15) {
    uVar12 = -uVar12;
  }
  *(uint *)(puVar2 + 0x9c) = uVar4;
  *(int *)(puVar2 + 0xa0) = (int)((uVar12 + iVar11) * 0x10) >> 0x10;
  *(uint *)(puVar2 + 0xa4) = uVar9;
  uVar9 = param_1[0xb] >> 0x11;
  uVar4 = param_2[0xb] >> 0x11;
  if (0x7f0 < (int)uVar9) {
    uVar9 = 0x7f0;
  }
  if (0x7f0 < (int)uVar4) {
    uVar4 = 0x7f0;
  }
  uVar12 = uVar9 ^ uVar4;
  bVar15 = (uVar12 & 0x7c0) == 0;
  if (bVar15) {
    uVar12 = (uint)(byte)PTR_LAB_4a05eee8[0x45];
  }
  if (bVar15 && uVar12 == 0) {
    uVar5 = uVar9 << 0x11 | 0x80000000;
  }
  else {
    iVar11 = ((int)uVar7 >> 10) * (uVar4 - uVar9);
    *(int *)(puVar2 + 0x94) = iVar11;
    uVar5 = ((int)((iVar11 >> 2) * uVar5) >> 1) + uVar9 * 0x20000;
  }
  puVar3 = PTR_LAB_4a05eee8;
  *(uint *)(puVar2 + 0x90) = uVar5;
  iVar11 = *(int *)(puVar3 + 0x60);
  if (iVar11 < 0) {
    host_s3eDeviceYield_arm(0x80000000);
    iVar11 = *(int *)(puVar3 + 100);
  }
  *(int *)(puVar3 + 0x60) = (iVar11 - iVar13) + -0x10;
                    /* WARNING: Could not recover jumptable at 0x4a05eee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar3 + 0x68))(puVar8);
  return;
}



// Address: 4a05eef0

void FUN_4a05eef0(int *param_1,int *param_2,uint param_3,int param_4)

{
  ushort uVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined *puVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  uint uVar18;
  int *piVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  bool bVar24;
  uint local_98;
  uint local_94;
  int local_90;
  int local_88;
  uint local_84;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64 [6];
  uint local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  int *local_3c;
  int *local_38;
  int *piStack_34;
  int *local_30;
  uint local_2c;
  int local_28;
  
  puVar4 = PTR_DAT_4a05feb4;
  puVar3 = PTR_DAT_4a05feb0;
  uVar1 = *(ushort *)(param_1 + 6);
  if ((uVar1 & 8) == 0) {
    local_38 = param_1 + 9;
  }
  else {
    iVar11 = param_1[2] >> 0xe;
    iVar9 = *(int *)(*(int *)PTR_DAT_4a05feb4 + iVar11 * 4);
    uVar20 = *(int *)(*(int *)PTR_DAT_4a05feb4 + iVar11 * 4 + 4) - iVar9;
    uVar10 = param_1[2] & 0x3fff;
    lVar2 = (ulonglong)uVar10 * (ulonglong)uVar20;
    lVar2 = (longlong)
            (int)((iVar9 + ((uint)lVar2 >> 0xe |
                           (((int)uVar20 >> 0x1f) * uVar10 + (int)((ulonglong)lVar2 >> 0x20)) *
                           0x40000)) - param_1[4]) * (longlong)param_1[5];
    uVar10 = (uint)lVar2 >> 10 | (int)((ulonglong)lVar2 >> 0x20) << 0x16;
    if (0x3fffffff < (int)uVar10) {
      uVar10 = 0x3fc00000;
    }
    iVar11 = param_1[9] >> 2;
    iVar9 = param_1[10] >> 2;
    if ((uVar1 & 0x10) == 0) {
      iVar11 = iVar11 + ((uint)((longlong)param_1[7] * (longlong)(int)uVar10) >> 0x10 |
                        (int)((ulonglong)((longlong)param_1[7] * (longlong)(int)uVar10) >> 0x20) <<
                        0x10);
    }
    if ((uVar1 & 0x20) == 0) {
      iVar9 = iVar9 + ((uint)((longlong)param_1[8] * (longlong)(int)uVar10) >> 0x10 |
                      (int)((ulonglong)((longlong)param_1[8] * (longlong)(int)uVar10) >> 0x20) <<
                      0x10);
    }
    *(int *)PTR_DAT_4a05feb0 = iVar11 << 2;
    *(int *)(puVar3 + 4) = iVar9 << 2;
    iVar11 = param_1[0xd];
    iVar12 = param_1[0xe];
    iVar23 = param_1[0x10];
    iVar21 = param_1[0xc];
    iVar9 = param_1[0x11];
    iVar16 = param_1[0x12];
    *(uint *)(puVar3 + 8) =
         param_1[0xb] +
         ((uint)((longlong)(int)uVar10 * (longlong)param_1[0xf]) >> 0xd |
         (int)((ulonglong)((longlong)(int)uVar10 * (longlong)param_1[0xf]) >> 0x20) << 0x13);
    *(uint *)(puVar3 + 0xc) =
         ((uint)((longlong)(int)uVar10 * (longlong)iVar23) >> 0xd |
         (int)((ulonglong)((longlong)(int)uVar10 * (longlong)iVar23) >> 0x20) << 0x13) + iVar21;
    *(uint *)(puVar3 + 0x10) =
         ((uint)((longlong)(int)uVar10 * (longlong)iVar9) >> 0xd |
         (int)((ulonglong)((longlong)(int)uVar10 * (longlong)iVar9) >> 0x20) << 0x13) + iVar11;
    *(uint *)(puVar3 + 0x14) =
         ((uint)((longlong)(int)uVar10 * (longlong)iVar16) >> 0xd |
         (int)((ulonglong)((longlong)(int)uVar10 * (longlong)iVar16) >> 0x20) << 0x13) + iVar12;
    local_38 = (int *)puVar3;
  }
  uVar1 = *(ushort *)(param_2 + 6);
  if ((uVar1 & 8) == 0) {
    local_3c = param_2 + 9;
  }
  else {
    iVar11 = param_2[2] >> 0xe;
    iVar9 = *(int *)(*(int *)puVar4 + iVar11 * 4);
    uVar20 = *(int *)(*(int *)puVar4 + iVar11 * 4 + 4) - iVar9;
    uVar10 = param_2[2] & 0x3fff;
    lVar2 = (ulonglong)uVar10 * (ulonglong)uVar20;
    lVar2 = (longlong)
            (int)((((uint)lVar2 >> 0xe |
                   (((int)uVar20 >> 0x1f) * uVar10 + (int)((ulonglong)lVar2 >> 0x20)) * 0x40000) +
                  iVar9) - param_2[4]) * (longlong)param_2[5];
    uVar10 = (uint)lVar2 >> 10 | (int)((ulonglong)lVar2 >> 0x20) << 0x16;
    if (0x3fffffff < (int)uVar10) {
      uVar10 = 0x3fc00000;
    }
    local_3c = (int *)(puVar3 + 0x18);
    iVar11 = param_2[9] >> 2;
    iVar9 = param_2[10] >> 2;
    if ((uVar1 & 0x10) == 0) {
      iVar11 = iVar11 + ((uint)((longlong)param_2[7] * (longlong)(int)uVar10) >> 0x10 |
                        (int)((ulonglong)((longlong)param_2[7] * (longlong)(int)uVar10) >> 0x20) <<
                        0x10);
    }
    if ((uVar1 & 0x20) == 0) {
      iVar9 = iVar9 + ((uint)((longlong)param_2[8] * (longlong)(int)uVar10) >> 0x10 |
                      (int)((ulonglong)((longlong)param_2[8] * (longlong)(int)uVar10) >> 0x20) <<
                      0x10);
    }
    *local_3c = iVar11 << 2;
    *(int *)(puVar3 + 0x1c) = iVar9 << 2;
    iVar16 = param_2[0x10];
    iVar21 = param_2[0xc];
    iVar23 = param_2[0xd];
    iVar11 = param_2[0x11];
    iVar9 = param_2[0xe];
    iVar12 = param_2[0x12];
    *(uint *)(puVar3 + 0x20) =
         ((uint)((longlong)(int)uVar10 * (longlong)param_2[0xf]) >> 0xd |
         (int)((ulonglong)((longlong)(int)uVar10 * (longlong)param_2[0xf]) >> 0x20) << 0x13) +
         param_2[0xb];
    *(uint *)(puVar3 + 0x24) =
         ((uint)((longlong)(int)uVar10 * (longlong)iVar16) >> 0xd |
         (int)((ulonglong)((longlong)(int)uVar10 * (longlong)iVar16) >> 0x20) << 0x13) + iVar21;
    *(uint *)(puVar3 + 0x28) =
         ((uint)((longlong)(int)uVar10 * (longlong)iVar11) >> 0xd |
         (int)((ulonglong)((longlong)(int)uVar10 * (longlong)iVar11) >> 0x20) << 0x13) + iVar23;
    *(uint *)(puVar3 + 0x2c) =
         ((uint)((longlong)(int)uVar10 * (longlong)iVar12) >> 0xd |
         (int)((ulonglong)((longlong)(int)uVar10 * (longlong)iVar12) >> 0x20) << 0x13) + iVar9;
  }
  puVar3 = PTR_DAT_4a05feb8;
  local_40 = *param_1 >> 0xf;
  local_44 = (*param_2 >> 0x12) - (*param_1 >> 0x12);
  uVar10 = *(uint *)(*(int *)PTR_DAT_4a05feb4 + ((*param_2 >> 0xf) - local_40) * 4);
  local_48 = 7 - (local_40 & 7);
  iVar11 = param_1[2] >> 4;
  iVar9 = param_2[2] >> 4;
  piStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  if (0xb < local_44) {
    iVar12 = iVar11 - iVar9;
    bVar24 = iVar12 < 0;
    if (iVar12 != 0) {
      if (bVar24) {
        iVar12 = -iVar12;
      }
      iVar16 = (local_44 + 8 >> 1) * (iVar12 >> 3);
      iVar12 = iVar9;
      if (bVar24) {
        iVar12 = iVar11;
      }
      if (iVar16 - (iVar12 >> 2) != 0 && iVar12 >> 2 <= iVar16) {
        uVar20 = iVar9 - iVar11;
        bVar24 = (int)(uVar20 ^ uVar10) < 0;
        if (bVar24) {
          uVar20 = -uVar20;
        }
        local_4c = (uint)((longlong)(int)uVar20 * (longlong)(int)uVar10) >> 0x17 |
                   (int)((ulonglong)((longlong)(int)uVar20 * (longlong)(int)uVar10) >> 0x20) << 9;
        if (bVar24) {
          local_4c = -local_4c;
        }
        piVar6 = (int *)FUN_4a035a80(local_44,local_4c);
        if (piVar6 != (int *)0x0) {
          piVar8 = (int *)FUN_4a03c198(iVar11,iVar9,local_38,local_3c);
          iVar12 = *piVar6;
          iVar9 = local_48 + iVar12 * 8;
          local_84 = iVar11 * 0x10 + (((int)local_4c >> 1) * iVar9 >> 2);
          iVar11 = *(int *)PTR_DAT_4a05feb4;
          iVar16 = *(int *)(iVar11 + ((int)local_84 >> 0xe) * 4);
          uVar10 = *(int *)(iVar11 + ((int)local_84 >> 0xe) * 4 + 4) - iVar16;
          lVar2 = (ulonglong)(local_84 & 0x3fff) * (ulonglong)uVar10;
          lVar2 = (longlong)
                  (int)((((((int)uVar10 >> 0x1f) * (local_84 & 0x3fff) +
                          (int)((ulonglong)lVar2 >> 0x20)) * 0x40000 | (uint)lVar2 >> 0xe) + iVar16)
                       - *piVar8) * (longlong)piVar8[1];
          uVar10 = (uint)lVar2 >> 10 | (int)((ulonglong)lVar2 >> 0x20) << 0x16;
          local_7c = (((uint)((longlong)piVar8[3] * (longlong)(int)uVar10) >> 0x1d |
                      (int)((ulonglong)((longlong)piVar8[3] * (longlong)(int)uVar10) >> 0x20) << 3)
                     + (*(int *)piVar8[2] >> 1)) * 2;
          local_78 = (((uint)((longlong)piVar8[4] * (longlong)(int)uVar10) >> 0x1d |
                      (int)((ulonglong)((longlong)piVar8[4] * (longlong)(int)uVar10) >> 0x20) << 3)
                     + (*(int *)(piVar8[2] + 4) >> 1)) * 2;
          local_74 = *(int *)(piVar8[2] + 8) +
                     ((uint)((longlong)piVar8[5] * (longlong)(int)uVar10) >> 0x1e |
                     (int)((ulonglong)((longlong)piVar8[5] * (longlong)(int)uVar10) >> 0x20) << 2);
          local_70 = *(int *)(piVar8[2] + 0xc) +
                     ((uint)((longlong)piVar8[6] * (longlong)(int)uVar10) >> 0x1e |
                     (int)((ulonglong)((longlong)piVar8[6] * (longlong)(int)uVar10) >> 0x20) << 2);
          local_6c = *(int *)(piVar8[2] + 0x10) +
                     ((uint)((longlong)piVar8[7] * (longlong)(int)uVar10) >> 0x1e |
                     (int)((ulonglong)((longlong)piVar8[7] * (longlong)(int)uVar10) >> 0x20) << 2);
          local_68 = *(int *)(piVar8[2] + 0x14) +
                     ((uint)((longlong)piVar8[8] * (longlong)(int)uVar10) >> 0x1e |
                     (int)((ulonglong)((longlong)piVar8[8] * (longlong)(int)uVar10) >> 0x20) << 2);
          uVar7 = *(uint *)(iVar11 + iVar9 * 4);
          local_88 = (int)local_40 >> 3;
          *(int *)puVar3 = (int)(short)iVar12;
          *(int *)(puVar3 + 4) = *(int *)(PTR_LAB_4a05febc + 0x50) + local_88 * 2;
          puVar4 = PTR_LAB_4a05febc;
          uVar10 = (local_7c >> 0xe) - (*local_38 >> 0xe);
          local_90 = (*local_38 >> 0xe) * 0x4000;
          uVar20 = (local_78 >> 0xe) - (local_38[1] >> 0xe);
          iVar11 = (local_38[1] >> 0xe) * 0x4000;
          if ((int)uVar10 < 0) {
            local_90 = local_90 + -1;
          }
          if ((int)uVar20 < 0) {
            iVar11 = iVar11 + -1;
          }
          iVar9 = (int)uVar7 >> 10;
          if (iVar12 == 1) {
            iVar16 = (int)(local_48 * iVar9) >> 4;
            uVar7 = *(uint *)(PTR_LAB_4a05febc + 0x54);
            *(int *)(puVar3 + 8) = iVar16 * ((int)uVar10 >> 2) + local_90 >> (uVar7 & 0xff);
            iVar11 = ((int)uVar20 >> 2) * iVar16 + iVar11 >> ((uVar7 & 0x7f) << 1);
            uVar10 = *(uint *)(puVar4 + 0x58);
            if (uVar10 != 0) {
              iVar11 = iVar11 << (uVar10 & 0xff);
            }
            *(int *)(puVar3 + 0xc) = iVar11;
          }
          else {
            bVar24 = (int)(uVar10 ^ uVar7) < 0;
            if (bVar24) {
              uVar10 = -uVar10;
            }
            local_94 = (uint)((longlong)(int)uVar10 * (longlong)(int)uVar7) >> 0xd |
                       (int)((ulonglong)((longlong)(int)uVar10 * (longlong)(int)uVar7) >> 0x20) <<
                       0x13;
            if (bVar24) {
              local_94 = -local_94;
            }
            bVar24 = (int)(uVar20 ^ uVar7) < 0;
            if (bVar24) {
              uVar20 = -uVar20;
            }
            uVar10 = (uint)((longlong)(int)uVar20 * (longlong)(int)uVar7) >> 0xd |
                     (int)((ulonglong)((longlong)(int)uVar20 * (longlong)(int)uVar7) >> 0x20) <<
                     0x13;
            local_98 = 0;
            if (bVar24) {
              uVar10 = -uVar10;
            }
            if (local_2c != 0) {
              uVar20 = local_94;
              if ((int)local_94 < 1) {
                uVar20 = -local_94;
              }
              uVar7 = uVar10;
              if ((int)uVar10 < 1) {
                uVar7 = -uVar10;
              }
              if ((int)uVar7 < (int)uVar20) {
                uVar20 = local_94;
                if ((int)local_94 < 1) {
                  uVar20 = -local_94;
                }
              }
              else {
                uVar20 = uVar10;
                if ((int)uVar10 < 1) {
                  uVar20 = -uVar10;
                }
              }
              if (0x13ffff < uVar20) {
                local_98 = 0;
                if (0x9ffff < uVar20 >> 4) {
                  local_98 = 4;
                  uVar20 = uVar20 >> 4;
                }
                if (0x9ffff < uVar20 >> 2) {
                  local_98 = local_98 + 2;
                  uVar20 = uVar20 >> 2;
                }
                if (0x9ffff < uVar20 >> 1) {
                  local_98 = local_98 + 1;
                }
                if (local_2c < local_98) {
                  local_98 = local_2c;
                }
                local_94 = (int)local_94 >> (local_98 & 0xff);
                local_90 = local_90 >> (local_98 & 0xff);
                uVar10 = (int)uVar10 >> (local_98 & 0xff);
                iVar11 = iVar11 >> (local_98 & 0xff);
              }
              if (*(uint *)(PTR_LAB_4a05febc + 0x54) != local_98) {
                iVar16 = local_28 + local_98 * 8;
                *(undefined4 *)(puVar3 + 0x18) = *(undefined4 *)(iVar16 + 100);
                *(undefined4 *)(puVar3 + 0x1c) = *(undefined4 *)(iVar16 + 0x68);
                *(uint *)(puVar4 + 0x54) = local_98;
              }
            }
            bVar24 = (int)(uVar10 ^ local_48) < 0;
            uVar20 = uVar10;
            if (bVar24) {
              uVar20 = -uVar10;
            }
            uVar20 = (uint)((longlong)(int)uVar20 * (longlong)(int)local_48) >> 3 |
                     (int)((ulonglong)((longlong)(int)uVar20 * (longlong)(int)local_48) >> 0x20) <<
                     0x1d;
            if (bVar24) {
              uVar20 = -uVar20;
            }
            iVar11 = iVar11 + uVar20;
            bVar24 = (int)(local_94 ^ local_48) < 0;
            uVar20 = local_94;
            if (bVar24) {
              uVar20 = -local_94;
            }
            uVar20 = (uint)((longlong)(int)uVar20 * (longlong)(int)local_48) >> 3 |
                     (int)((ulonglong)((longlong)(int)uVar20 * (longlong)(int)local_48) >> 0x20) <<
                     0x1d;
            if (bVar24) {
              uVar20 = -uVar20;
            }
            *(uint *)(puVar3 + 8) = uVar20 + local_90;
            *(uint *)(puVar3 + 0x10) = local_94;
            uVar20 = *(uint *)(PTR_LAB_4a05febc + 0x58);
            if (uVar20 != 0) {
              uVar10 = uVar10 << (uVar20 & 0xff);
              iVar11 = iVar11 << (uVar20 & 0xff);
            }
            *(int *)(puVar3 + 0xc) = iVar11 >> (local_98 & 0xff);
            *(int *)(puVar3 + 0x14) = (int)uVar10 >> (local_98 & 0xff);
          }
          iVar11 = local_38[2];
          iVar16 = iVar9 * ((local_74 >> 0x11) - (iVar11 >> 0x11));
          *(int *)(puVar3 + 0x28) = iVar16;
          *(int *)(puVar3 + 0x24) =
               (((int)(local_48 * (iVar16 >> 2)) >> 0xd) + (iVar11 >> 0x11) * 0x20) * 0x10000 >>
               0x10;
          puVar4 = PTR_LAB_4a05febc;
          iVar11 = local_38[3];
          iVar16 = iVar9 * ((local_70 >> 0x11) - (iVar11 >> 0x11));
          *(int *)(puVar3 + 0x30) = iVar16;
          *(int *)(puVar3 + 0x2c) =
               (((int)(local_48 * (iVar16 >> 2)) >> 0xd) + (iVar11 >> 0x11) * 0x20) * 0x10000 >>
               0x10;
          iVar11 = local_38[4];
          iVar16 = iVar9 * ((local_6c >> 0x11) - (iVar11 >> 0x11));
          *(int *)(puVar3 + 0x38) = iVar16;
          *(int *)(puVar3 + 0x34) =
               (((int)(local_48 * (iVar16 >> 2)) >> 0xd) + (iVar11 >> 0x11) * 0x20) * 0x10000 >>
               0x10;
          iVar11 = local_38[5];
          iVar9 = ((local_68 >> 0x11) - (iVar11 >> 0x11)) * iVar9;
          *(int *)(puVar3 + 0x40) = iVar9;
          *(int *)(puVar3 + 0x3c) =
               (((int)(local_48 * (iVar9 >> 2)) >> 0xd) + (iVar11 >> 0x11) * 0x20) * 0x10000 >> 0x10
          ;
          (**(code **)(puVar4 + 0x68))(puVar3);
          piVar5 = local_64;
          piVar17 = &local_7c;
          piVar6 = piVar6 + 1;
          do {
            piVar15 = piVar5;
            puVar4 = PTR_LAB_4a05febc;
            local_88 = local_88 + iVar12;
            piVar19 = piVar6 + 1;
            iVar12 = *piVar6;
            if (*piVar19 == 0) {
              iVar11 = *local_30;
              iVar9 = local_3c[1];
              iVar16 = local_3c[2];
              iVar21 = local_3c[3];
              iVar23 = local_3c[4];
              iVar22 = local_3c[5];
              *piVar15 = *local_3c;
              piVar15[1] = iVar9;
              piVar15[2] = iVar16;
              piVar15[3] = iVar21;
              piVar15[4] = iVar23;
              piVar15[5] = iVar22;
              iVar11 = (iVar11 >> 0xf) + local_88 * -8 + -7;
            }
            else {
              local_84 = local_4c * iVar12 + local_84;
              iVar11 = *(int *)(*(int *)PTR_DAT_4a05feb4 + ((int)local_84 >> 0xe) * 4);
              uVar10 = *(int *)(*(int *)PTR_DAT_4a05feb4 + ((int)local_84 >> 0xe) * 4 + 4) - iVar11;
              lVar2 = (ulonglong)(local_84 & 0x3fff) * (ulonglong)uVar10;
              lVar2 = (longlong)
                      (int)((iVar11 + ((uint)lVar2 >> 0xe |
                                      (((int)uVar10 >> 0x1f) * (local_84 & 0x3fff) +
                                      (int)((ulonglong)lVar2 >> 0x20)) * 0x40000)) - *piVar8) *
                      (longlong)piVar8[1];
              uVar10 = (uint)lVar2 >> 10 | (int)((ulonglong)lVar2 >> 0x20) << 0x16;
              *piVar15 = (((uint)((longlong)piVar8[3] * (longlong)(int)uVar10) >> 0x1d |
                          (int)((ulonglong)((longlong)piVar8[3] * (longlong)(int)uVar10) >> 0x20) <<
                          3) + (*(int *)piVar8[2] >> 1)) * 2;
              piVar15[1] = (((uint)((longlong)piVar8[4] * (longlong)(int)uVar10) >> 0x1d |
                            (int)((ulonglong)((longlong)piVar8[4] * (longlong)(int)uVar10) >> 0x20)
                            << 3) + (*(int *)(piVar8[2] + 4) >> 1)) * 2;
              piVar15[2] = ((uint)((longlong)piVar8[5] * (longlong)(int)uVar10) >> 0x1e |
                           (int)((ulonglong)((longlong)piVar8[5] * (longlong)(int)uVar10) >> 0x20)
                           << 2) + *(int *)(piVar8[2] + 8);
              piVar15[3] = ((uint)((longlong)piVar8[6] * (longlong)(int)uVar10) >> 0x1e |
                           (int)((ulonglong)((longlong)piVar8[6] * (longlong)(int)uVar10) >> 0x20)
                           << 2) + *(int *)(piVar8[2] + 0xc);
              piVar15[4] = ((uint)((longlong)piVar8[7] * (longlong)(int)uVar10) >> 0x1e |
                           (int)((ulonglong)((longlong)piVar8[7] * (longlong)(int)uVar10) >> 0x20)
                           << 2) + *(int *)(piVar8[2] + 0x10);
              piVar15[5] = ((uint)((longlong)piVar8[8] * (longlong)(int)uVar10) >> 0x1e |
                           (int)((ulonglong)((longlong)piVar8[8] * (longlong)(int)uVar10) >> 0x20)
                           << 2) + *(int *)(piVar8[2] + 0x14);
              iVar11 = iVar12 << 3;
            }
            uVar7 = *(uint *)(*(int *)PTR_DAT_4a05feb4 + iVar11 * 4);
            *(int *)puVar3 = iVar12;
            *(int *)(puVar3 + 4) = *(int *)(puVar4 + 0x50) + local_88 * 2;
            puVar4 = PTR_LAB_4a05febc;
            uVar10 = (*piVar15 >> 0xe) - (*piVar17 >> 0xe);
            uVar20 = (piVar15[1] >> 0xe) - (piVar17[1] >> 0xe);
            iVar11 = (*piVar17 >> 0xe) * 0x4000;
            if ((int)uVar10 < 0) {
              iVar11 = iVar11 + -1;
            }
            local_94 = (piVar17[1] >> 0xe) * 0x4000;
            if ((int)uVar20 < 0) {
              local_94 = local_94 + -1;
            }
            if (iVar12 == 1) {
              uVar10 = *(uint *)(PTR_LAB_4a05febc + 0x54);
              *(int *)(puVar3 + 8) = iVar11 >> (uVar10 & 0xff);
              uVar20 = *(uint *)(puVar4 + 0x58);
              iVar11 = (int)local_94 >> ((uVar10 & 0x7f) << 1);
              if (uVar20 != 0) {
                iVar11 = iVar11 << (uVar20 & 0xff);
              }
              *(int *)(puVar3 + 0xc) = iVar11;
            }
            else {
              bVar24 = (int)(uVar10 ^ uVar7) < 0;
              if (bVar24) {
                uVar10 = -uVar10;
              }
              uVar10 = (uint)((longlong)(int)uVar10 * (longlong)(int)uVar7) >> 0xd |
                       (int)((ulonglong)((longlong)(int)uVar10 * (longlong)(int)uVar7) >> 0x20) <<
                       0x13;
              if (bVar24) {
                uVar10 = -uVar10;
              }
              bVar24 = (int)(uVar20 ^ uVar7) < 0;
              if (bVar24) {
                uVar20 = -uVar20;
              }
              uVar20 = (uint)((longlong)(int)uVar20 * (longlong)(int)uVar7) >> 0xd |
                       (int)((ulonglong)((longlong)(int)uVar20 * (longlong)(int)uVar7) >> 0x20) <<
                       0x13;
              if (bVar24) {
                uVar20 = -uVar20;
              }
              uVar14 = 0;
              if (local_2c != 0) {
                uVar13 = uVar10;
                if ((int)uVar10 < 1) {
                  uVar13 = -uVar10;
                }
                uVar18 = uVar20;
                if ((int)uVar20 < 1) {
                  uVar18 = -uVar20;
                }
                if ((int)uVar18 < (int)uVar13) {
                  uVar13 = uVar10;
                  if ((int)uVar10 < 1) {
                    uVar13 = -uVar10;
                  }
                }
                else {
                  uVar13 = uVar20;
                  if ((int)uVar20 < 1) {
                    uVar13 = -uVar20;
                  }
                }
                if (0x13ffff < uVar13) {
                  uVar14 = 0;
                  if (0x9ffff < uVar13 >> 4) {
                    uVar14 = 4;
                    uVar13 = uVar13 >> 4;
                  }
                  if (0x9ffff < uVar13 >> 2) {
                    uVar14 = uVar14 + 2;
                    uVar13 = uVar13 >> 2;
                  }
                  if (0x9ffff < uVar13 >> 1) {
                    uVar14 = uVar14 + 1;
                  }
                  if (local_2c < uVar14) {
                    uVar14 = local_2c;
                  }
                  uVar10 = (int)uVar10 >> (uVar14 & 0xff);
                  uVar20 = (int)uVar20 >> (uVar14 & 0xff);
                  iVar11 = iVar11 >> (uVar14 & 0xff);
                  local_94 = (int)local_94 >> (uVar14 & 0xff);
                }
                if (*(uint *)(PTR_LAB_4a05febc + 0x54) != uVar14) {
                  iVar9 = local_28 + uVar14 * 8;
                  *(undefined4 *)(puVar3 + 0x18) = *(undefined4 *)(iVar9 + 100);
                  *(undefined4 *)(puVar3 + 0x1c) = *(undefined4 *)(iVar9 + 0x68);
                  *(uint *)(puVar4 + 0x54) = uVar14;
                }
              }
              *(uint *)(puVar3 + 0x10) = uVar10;
              puVar4 = PTR_LAB_4a05febc;
              *(int *)(puVar3 + 8) = iVar11;
              uVar10 = *(uint *)(puVar4 + 0x58);
              if (uVar10 != 0) {
                uVar20 = uVar20 << (uVar10 & 0xff);
                local_94 = local_94 << (uVar10 & 0xff);
              }
              *(int *)(puVar3 + 0x14) = (int)uVar20 >> (uVar14 & 0xff);
              *(int *)(puVar3 + 0xc) = (int)local_94 >> (uVar14 & 0xff);
            }
            iVar9 = piVar17[2];
            iVar11 = (int)uVar7 >> 10;
            *(int *)(puVar3 + 0x28) = iVar11 * ((piVar15[2] >> 0x11) - (iVar9 >> 0x11));
            *(int *)(puVar3 + 0x24) = ((iVar9 >> 0x11) << 0x15) >> 0x10;
            iVar9 = piVar17[3];
            iVar16 = piVar15[3];
            *(int *)(puVar3 + 0x2c) = ((iVar9 >> 0x11) << 0x15) >> 0x10;
            *(int *)(puVar3 + 0x30) = iVar11 * ((iVar16 >> 0x11) - (iVar9 >> 0x11));
            iVar9 = piVar17[4];
            iVar16 = piVar15[4];
            *(int *)(puVar3 + 0x34) = ((iVar9 >> 0x11) << 0x15) >> 0x10;
            *(int *)(puVar3 + 0x38) = iVar11 * ((iVar16 >> 0x11) - (iVar9 >> 0x11));
            iVar9 = piVar17[5];
            *(int *)(puVar3 + 0x40) = ((piVar15[5] >> 0x11) - (iVar9 >> 0x11)) * iVar11;
            *(int *)(puVar3 + 0x3c) = ((iVar9 >> 0x11) << 0x15) >> 0x10;
            (**(code **)(PTR_LAB_4a05febc + 0x68))(puVar3);
            puVar4 = PTR_LAB_4a05febc;
            piVar5 = piVar17;
            piVar17 = piVar15;
            piVar6 = piVar19;
          } while (*piVar19 != 0);
          iVar11 = *(int *)(PTR_LAB_4a05febc + 0x60);
          if (iVar11 < 0) {
            host_s3eDeviceYield_arm(0x80000000);
            iVar11 = *(int *)(puVar4 + 100);
          }
          *(int *)(puVar4 + 0x60) = (iVar11 - local_44) + -0x10;
          return;
        }
      }
    }
  }
  puVar4 = PTR_LAB_4a05febc;
  *(int *)puVar3 = local_44;
  *(int *)(puVar3 + 4) = *(int *)(puVar4 + 0x50) + ((int)local_40 >> 3) * 2;
  uVar20 = (*local_3c >> 0xe) - (*local_38 >> 0xe);
  uVar7 = (local_3c[1] >> 0xe) - (local_38[1] >> 0xe);
  iVar11 = (*local_38 >> 0xe) * 0x4000;
  iVar9 = (local_38[1] >> 0xe) * 0x4000;
  if ((int)uVar20 < 0) {
    iVar11 = iVar11 + -1;
  }
  if ((int)uVar7 < 0) {
    iVar9 = iVar9 + -1;
  }
  iVar12 = (int)uVar10 >> 10;
  if (local_44 == 1) {
    iVar16 = (int)(local_48 * iVar12) >> 4;
    uVar10 = *(uint *)(puVar4 + 0x54);
    *(int *)(puVar3 + 8) = iVar16 * ((int)uVar20 >> 2) + iVar11 >> (uVar10 & 0xff);
    iVar11 = iVar16 * ((int)uVar7 >> 2) + iVar9 >> ((uVar10 & 0x7f) << 1);
    if (*(uint *)(puVar4 + 0x58) != 0) {
      iVar11 = iVar11 << (*(uint *)(puVar4 + 0x58) & 0xff);
    }
    *(int *)(puVar3 + 0xc) = iVar11;
  }
  else {
    bVar24 = (int)(uVar20 ^ uVar10) < 0;
    if (bVar24) {
      uVar20 = -uVar20;
    }
    uVar20 = (uint)((longlong)(int)uVar20 * (longlong)(int)uVar10) >> 0xd |
             (int)((ulonglong)((longlong)(int)uVar20 * (longlong)(int)uVar10) >> 0x20) << 0x13;
    if (bVar24) {
      uVar20 = -uVar20;
    }
    bVar24 = (int)(uVar7 ^ uVar10) < 0;
    if (bVar24) {
      uVar7 = -uVar7;
    }
    uVar10 = (uint)((longlong)(int)uVar7 * (longlong)(int)uVar10) >> 0xd |
             (int)((ulonglong)((longlong)(int)uVar7 * (longlong)(int)uVar10) >> 0x20) << 0x13;
    if (bVar24) {
      uVar10 = -uVar10;
    }
    uVar7 = 0;
    if (local_2c != 0) {
      uVar14 = uVar20;
      if ((int)uVar20 < 1) {
        uVar14 = -uVar20;
      }
      uVar13 = uVar10;
      if ((int)uVar10 < 1) {
        uVar13 = -uVar10;
      }
      if ((int)uVar13 < (int)uVar14) {
        uVar14 = uVar20;
        if ((int)uVar20 < 1) {
          uVar14 = -uVar20;
        }
      }
      else {
        uVar14 = uVar10;
        if ((int)uVar10 < 1) {
          uVar14 = -uVar10;
        }
      }
      if (0x13ffff < uVar14) {
        uVar7 = 0;
        if (0x9ffff < uVar14 >> 4) {
          uVar7 = 4;
          uVar14 = uVar14 >> 4;
        }
        if (0x9ffff < uVar14 >> 2) {
          uVar7 = uVar7 + 2;
          uVar14 = uVar14 >> 2;
        }
        if (0x9ffff < uVar14 >> 1) {
          uVar7 = uVar7 + 1;
        }
        if (local_2c < uVar7) {
          uVar7 = local_2c;
        }
        uVar20 = (int)uVar20 >> (uVar7 & 0xff);
        uVar10 = (int)uVar10 >> (uVar7 & 0xff);
        iVar11 = iVar11 >> (uVar7 & 0xff);
        iVar9 = iVar9 >> (uVar7 & 0xff);
      }
      if (*(uint *)(puVar4 + 0x54) != uVar7) {
        iVar16 = local_28 + uVar7 * 8;
        *(undefined4 *)(puVar3 + 0x18) = *(undefined4 *)(iVar16 + 100);
        *(undefined4 *)(puVar3 + 0x1c) = *(undefined4 *)(iVar16 + 0x68);
        *(uint *)(puVar4 + 0x54) = uVar7;
      }
    }
    bVar24 = (int)(uVar10 ^ local_48) < 0;
    uVar14 = uVar10;
    if (bVar24) {
      uVar14 = -uVar10;
    }
    uVar14 = (uint)((longlong)(int)uVar14 * (longlong)(int)local_48) >> 3 |
             (int)((ulonglong)((longlong)(int)uVar14 * (longlong)(int)local_48) >> 0x20) << 0x1d;
    if (bVar24) {
      uVar14 = -uVar14;
    }
    bVar24 = (int)(uVar20 ^ local_48) < 0;
    iVar9 = uVar14 + iVar9;
    uVar14 = uVar20;
    if (bVar24) {
      uVar14 = -uVar20;
    }
    uVar14 = (uint)((longlong)(int)uVar14 * (longlong)(int)local_48) >> 3 |
             (int)((ulonglong)((longlong)(int)uVar14 * (longlong)(int)local_48) >> 0x20) << 0x1d;
    if (bVar24) {
      uVar14 = -uVar14;
    }
    *(uint *)(puVar3 + 0x10) = uVar20;
    *(uint *)(puVar3 + 8) = uVar14 + iVar11;
    uVar20 = *(uint *)(puVar4 + 0x58);
    if (uVar20 != 0) {
      uVar10 = uVar10 << (uVar20 & 0xff);
      iVar9 = iVar9 << (uVar20 & 0xff);
    }
    *(int *)(puVar3 + 0x14) = (int)uVar10 >> (uVar7 & 0xff);
    *(int *)(puVar3 + 0xc) = iVar9 >> (uVar7 & 0xff);
  }
  iVar9 = local_38[2];
  iVar11 = iVar12 * ((local_3c[2] >> 0x11) - (iVar9 >> 0x11));
  *(int *)(puVar3 + 0x28) = iVar11;
  *(int *)(puVar3 + 0x24) =
       (((int)(local_48 * (iVar11 >> 2)) >> 0xd) + (iVar9 >> 0x11) * 0x20) * 0x10000 >> 0x10;
  iVar9 = local_38[3];
  iVar11 = iVar12 * ((local_3c[3] >> 0x11) - (iVar9 >> 0x11));
  *(int *)(puVar3 + 0x30) = iVar11;
  *(int *)(puVar3 + 0x2c) =
       (((int)(local_48 * (iVar11 >> 2)) >> 0xd) + (iVar9 >> 0x11) * 0x20) * 0x10000 >> 0x10;
  iVar9 = local_38[4];
  iVar11 = iVar12 * ((local_3c[4] >> 0x11) - (iVar9 >> 0x11));
  *(int *)(puVar3 + 0x38) = iVar11;
  *(int *)(puVar3 + 0x34) =
       (((int)(local_48 * (iVar11 >> 2)) >> 0xd) + (iVar9 >> 0x11) * 0x20) * 0x10000 >> 0x10;
  iVar11 = local_38[5];
  iVar12 = ((local_3c[5] >> 0x11) - (iVar11 >> 0x11)) * iVar12;
  *(int *)(puVar3 + 0x40) = iVar12;
  *(int *)(puVar3 + 0x3c) =
       (((int)(local_48 * (iVar12 >> 2)) >> 0xd) + (iVar11 >> 0x11) * 0x20) * 0x10000 >> 0x10;
  iVar11 = *(int *)(puVar4 + 0x60);
  if (iVar11 < 0) {
    host_s3eDeviceYield_arm(0x80000000);
    iVar11 = *(int *)(puVar4 + 100);
  }
  *(int *)(puVar4 + 0x60) = (iVar11 - local_44) + -0x10;
                    /* WARNING: Could not recover jumptable at 0x4a05f60c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar4 + 0x68))(puVar3);
  return;
}



// Address: 4a06000c

undefined4 FUN_4a06000c(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  if ((param_1[3] & 2) != 0) {
    param_1[2] = param_1[2] + param_2;
    iVar1 = FUN_4a099e60(*param_1,param_1[1]);
    if (iVar1 < (int)param_1[2]) {
      if ((param_1[3] & 8) == 0) {
        iVar1 = FUN_4a099e60(*param_1,param_1[1]);
        iVar1 = param_1[2] - iVar1;
        param_1[2] = iVar1;
        if (iVar1 < 1) {
          iVar1 = 0;
        }
        param_1[2] = iVar1;
        param_1[1] = param_1[1] + 1;
        iVar1 = FUN_4a099c5c(*param_1);
        if (iVar1 <= (int)param_1[1]) {
          if ((param_1[3] & 4) == 0) {
            iVar1 = FUN_4a099c5c(*param_1);
            param_1[1] = iVar1 + -1;
            param_1[3] = param_1[3] & 0xfffffffd;
          }
          else {
            param_1[1] = 0;
          }
        }
      }
      else {
        iVar1 = FUN_4a099e60(*param_1,param_1[1]);
        iVar1 = param_1[2] - iVar1;
        param_1[2] = iVar1;
        if (iVar1 < 1) {
          iVar1 = 0;
        }
        param_1[2] = iVar1;
        iVar1 = param_1[1];
        param_1[1] = iVar1 + -1;
        if (iVar1 + -1 < 1) {
          if ((param_1[3] & 4) == 0) {
            param_1[1] = 0;
            param_1[3] = param_1[3] & 0xfffffffd;
          }
          else {
            iVar1 = FUN_4a099c5c(*param_1);
            param_1[1] = iVar1 + -1;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}



// Address: 4a060130

void FUN_4a060130(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 0xc) & 0xfffffffd;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xc) | 2;
  }
  *(uint *)(param_1 + 0xc) = uVar1;
  return;
}



// Address: 4a060148

int FUN_4a060148(uint *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 == 0xffffffff) {
    return 0;
  }
  uVar3 = *param_1 & 0xffffbfff;
  iVar1 = FUN_4a0ff494();
  if (0x11 < uVar3) {
    return -1;
  }
  iVar2 = 0;
  if (*(int *)(iVar1 + 0x98) != 0) {
    iVar2 = *(int *)(*(int *)(iVar1 + 0x98) + 8);
  }
  return (int)*(char *)(iVar2 + uVar3);
}



// Address: 4a06015c

void FUN_4a06015c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if (-1 < *param_1) {
    FUN_4a0996cc(param_2,*param_1,param_1[1],param_3);
    return;
  }
  return;
}



// Address: 4a060194

void FUN_4a060194(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = (param_3 & 0x10) >> 4;
  bVar3 = uVar1 == 0;
  if (bVar3) {
    uVar1 = *param_1;
  }
  if (bVar3 && uVar1 == param_2) {
    iVar2 = FUN_4a099c5c();
    if ((int)param_1[1] < iVar2) {
      if ((int)param_1[1] < 0) {
        iVar2 = FUN_4a099c5c(*param_1);
        param_1[1] = iVar2 - 1;
      }
    }
    else {
      param_1[1] = 0;
    }
  }
  else {
    *param_1 = param_2;
    if ((param_1[3] & 8) == 0) {
      param_1[1] = 0;
    }
    else {
      iVar2 = FUN_4a099c5c(param_2);
      param_1[1] = iVar2 - 1;
    }
    param_1[2] = 0;
  }
  param_1[3] = param_3 & 4 | 3;
  return;
}



// Address: 4a060224

void FUN_4a060224(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// Address: 4a060244

void FUN_4a060244(int param_1)

{
  if (param_1 != 0) {
    FUN_4a0d383c();
  }
  return;
}



// Address: 4a060258

void FUN_4a060258(void)

{
  int *piVar1;
  int iVar2;
  
  if ((*(int *)(*(int *)PTR_DAT_4a060288 + 0x4c) == 0) ||
     (piVar1 = *(int **)(*(int *)PTR_DAT_4a060288 + 4),
     iVar2 = FUN_4a1652ca(piVar1,0,0x208,*(undefined4 *)(*piVar1 + 0xc)), iVar2 == 0)) {
    thunk_FUN_4a15e080(0x208);
  }
  return;
}



// Address: 4a060290

uint * FUN_4a060290(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint *puVar8;
  undefined8 uVar9;
  int local_20;
  
  local_20 = param_4;
  FUN_4a001274(param_1,0x698);
  puVar1 = PTR_PTR_4a060488;
  *(int *)(param_1 + 0x4d8) = param_1 + 0x4d0;
  *(undefined **)(param_1 + 0x4d0) = puVar1;
  *(int *)(param_1 + 0x4d4) = param_1 + 0x4d0;
  *(int *)(param_1 + 0x4e4) = param_1 + 0x4dc;
  *(undefined **)(param_1 + 0x4dc) = puVar1;
  *(int *)(param_1 + 0x4e0) = param_1 + 0x4dc;
  *(int *)(param_1 + 0x4f0) = param_1 + 0x4e8;
  *(undefined **)(param_1 + 0x4e8) = puVar1;
  *(int *)(param_1 + 0x4ec) = param_1 + 0x4e8;
  iVar2 = FUN_4a092258(param_1 + 0x4fc);
  iVar2 = thunk_FUN_4a1490e8(iVar2 + 0x30,PTR_DAT_4a06048c,0x18,2);
  *(undefined **)(iVar2 + 0x60) = PTR_DAT_4a060490;
  iVar2 = FUN_4a092258(iVar2 + 0x70);
  puVar3 = (undefined4 *)(iVar2 + 0xec);
  *puVar3 = puVar1;
  puVar1 = PTR_DAT_4a060494;
  *(undefined4 **)(iVar2 + 0xf4) = puVar3;
  puVar8 = (uint *)(iVar2 + -0x59c);
  *(undefined4 **)(iVar2 + 0xf0) = puVar3;
  *(uint **)puVar1 = puVar8;
  *(undefined4 *)(iVar2 + -0x80) = 0;
  uVar6 = DAT_4a060498;
  *(undefined4 *)(iVar2 + -0x7c) = 0;
  *(undefined4 *)(iVar2 + -0x74) = 0;
  *(undefined4 *)(iVar2 + -0x78) = uVar6;
  *puVar8 = *puVar8 | 0x380000;
  uVar9 = host_s3eTimerGetMs_arm();
  *(undefined8 *)(iVar2 + -0x1c) = uVar9;
  *(undefined4 *)(iVar2 + -0x14) = 0x3e8000;
  *(undefined4 *)(iVar2 + -0x90) = 0;
  uVar4 = thunk_FUN_4a161570(0x58);
  iVar5 = FUN_4a069da8(uVar4,0);
  *(int *)(iVar2 + -0xe0) = iVar5;
  uVar7 = *(uint *)(iVar5 + 0x10);
  *(uint *)(iVar5 + 0x10) = uVar7 & 0xfffffffc;
  *(uint *)(*(int *)(iVar2 + -0xe0) + 0x10) = uVar7 & 0xfff8fffc | 0x50000;
  uVar7 = *(uint *)(*(int *)(iVar2 + -0xe0) + 0x10);
  *(uint *)(*(int *)(iVar2 + -0xe0) + 0x10) = uVar7 & 0xffc7ffff;
  *(uint *)(*(int *)(iVar2 + -0xe0) + 0x10) = uVar7 & 0xfe07ffff;
  local_20 = 0;
  host_s3eConfigGetInt_arm(&DAT_4a0604b4,s_LegacyMaterialDefaults_4a06049c,&local_20);
  if (local_20 != 0) {
    *(uint *)(*(int *)puVar1 + 4) = *(uint *)(*(int *)puVar1 + 4) | 0x4000;
  }
  if ((*(uint *)(*(int *)puVar1 + 4) & 0x4000) == 0) {
    *(undefined4 *)(*(int *)(iVar2 + -0xe0) + 0x1c) = 0;
    *(undefined4 *)(*(int *)(iVar2 + -0xe0) + 0x20) = 0xffffffff;
    *(undefined4 *)(*(int *)(iVar2 + -0xe0) + 0x24) = 0xffffffff;
  }
  else {
    *(undefined4 *)(*(int *)(iVar2 + -0xe0) + 0x1c) = 0xff000000;
    *(undefined4 *)(*(int *)(iVar2 + -0xe0) + 0x20) = uVar6;
    *(undefined4 *)(*(int *)(iVar2 + -0xe0) + 0x24) = uVar6;
  }
  thunk_FUN_4a161570(0x58);
  uVar6 = thunk_FUN_4a069e28();
  *(undefined4 *)(iVar2 + -0xe4) = uVar6;
  *(undefined4 *)(iVar2 + -0xdc) = 3;
  *(undefined4 *)(iVar2 + -0xd8) = 1;
  *(undefined4 *)(iVar2 + -0xd0) = 0;
  *(undefined4 *)(iVar2 + -0xd4) = 1;
  *(undefined4 *)(iVar2 + -0x88) = 0xffffffff;
  *(undefined2 *)(iVar2 + -0xf0) = 0xffff;
  *(undefined2 *)(iVar2 + -0xee) = 0xffff;
  *(undefined1 *)(iVar2 + 0x10) = 0x32;
  *(undefined1 *)(iVar2 + 0xdc) = 0;
  return puVar8;
}



// Address: 4a0604bc

int FUN_4a0604bc(int param_1)

{
  uint uVar1;
  
  thunk_FUN_4a161530(*(undefined4 *)(param_1 + 900));
  thunk_FUN_4a161530(*(undefined4 *)(param_1 + 0x370));
  if (*(int **)(param_1 + 0x4b8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x4b8) + 4))();
  }
  if (*(int **)(param_1 + 0x4bc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x4bc) + 4))();
  }
  *(undefined4 *)PTR_DAT_4a06058c = 0;
  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 0x5a0); uVar1 = uVar1 + 1) {
  }
  if ((*(byte *)(param_1 + 0x5a8) & 1) == 0) {
    thunk_FUN_4a0a6f48(*(undefined4 *)(param_1 + 0x59c),4);
    *(undefined4 *)(param_1 + 0x59c) = 0;
  }
  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 0x500); uVar1 = uVar1 + 1) {
  }
  if ((*(byte *)(param_1 + 0x508) & 1) == 0) {
    thunk_FUN_4a0a6f48(*(undefined4 *)(param_1 + 0x4fc),4);
    *(undefined4 *)(param_1 + 0x4fc) = 0;
  }
  return param_1;
}



// Address: 4a060598

undefined4 FUN_4a060598(void)

{
  undefined4 uVar1;
  
  if (*(code **)(PTR_DAT_4a0605a8 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4a0605a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(PTR_DAT_4a0605a8 + 0x10))();
    return uVar1;
  }
  return 0;
}



// Address: 4a0605b0

void FUN_4a0605b0(undefined4 param_1,int *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  uVar2 = thunk_FUN_4a161570(0x48);
  puVar3 = (undefined4 *)FUN_4a06a03c(uVar2,&DAT_4a0605ec,&DAT_4a0605e8,0,4);
  puVar1 = PTR_PTR_4a0605f0;
  puVar3[0x11] = &DAT_4a0605ec;
  *puVar3 = puVar1;
  FUN_4a1652ca(param_2,puVar3,0xffffffff,*(undefined4 *)(*param_2 + 0x18));
  return;
}



// Address: 4a0605f4

void FUN_4a0605f4(void)

{
  return;
}



// Address: 4a0605f6

void FUN_4a0605f6(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_4a02b1e8(param_2);
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}



// Address: 4a060608

void FUN_4a060608(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_2 != param_1) {
    FUN_4a1652c6(param_2,*(undefined4 *)(*param_2 + 0x28),param_3,param_4,param_4);
    FUN_4a02b1e8();
    iVar1 = FUN_4a0478d8();
    if (iVar1 != 0) {
      uVar2 = FUN_4a1652c6(param_2,*(undefined4 *)(*param_2 + 0x28));
      uVar3 = FUN_4a1652c6(param_1,*(undefined4 *)(*param_1 + 0x28));
      iVar4 = thunk_FUN_4a00142c(uVar3,uVar2);
      if (iVar4 == 0) {
        FUN_4a1652c6(param_1,*(undefined4 *)*param_1);
        thunk_FUN_4a001134(param_1,param_2,iVar1);
        FUN_4a161530(param_2);
        return;
      }
    }
    if (param_2 != (int *)0x0) {
      FUN_4a1652c6(param_2,*(undefined4 *)(*param_2 + 4));
    }
  }
  return;
}



// Address: 4a06067c

void FUN_4a06067c(int param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_4a0606b0;
  if ((*PTR_DAT_4a0606ac == '\0') || (*PTR_DAT_4a0606b0 == '\0')) {
    FUN_4a03c12c(param_1 + 4,1,0x20,4);
  }
  else {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(PTR_DAT_4a0606b0 + 0x14);
    *puVar1 = 0;
  }
  return;
}



// Address: 4a0606b4

undefined4 * FUN_4a0606b4(undefined4 *param_1)

{
  *param_1 = PTR_PTR_4a0606d4;
  param_1[2] = 0;
  param_1[1] = 0;
  FUN_4a165584(param_1 + 2);
  return param_1;
}



// Address: 4a0606d8

void FUN_4a0606d8(int param_1)

{
  if (param_1 != 0) {
    FUN_4a0606ec();
    thunk_FUN_4a161530();
  }
  return;
}



// Address: 4a0606ec

undefined4 * FUN_4a0606ec(undefined4 *param_1)

{
  *param_1 = PTR_PTR_4a060710;
  if (param_1[2] != 0) {
    FUN_4a161530();
  }
  param_1[2] = 0;
  return param_1;
}



// Address: 4a060714

int FUN_4a060714(int param_1,int param_2)

{
  undefined1 *puVar1;
  
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  if (*(int *)(param_1 + 8) != 0) {
    FUN_4a161530();
  }
  if (*(int *)(param_2 + 8) == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    puVar1 = (undefined1 *)FUN_4a161570(0xa0);
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 8) = puVar1;
    FUN_4a0012bc(puVar1,*(undefined4 *)(param_2 + 8));
  }
  return param_1;
}



// Address: 4a060754

void FUN_4a060754(int param_1)

{
  undefined4 unaff_r4;
  
  FUN_4a039b88(param_1,1,8);
  FUN_4a039b88(param_1 + 2,1,8);
  FUN_4a039b88(param_1 + 3,1,8);
  FUN_4a039b88(param_1 + 5,1,8);
  FUN_4a039b88(param_1 + 6,1,8);
  param_1 = param_1 + 7;
  if (*(int *)(PTR_DAT_4a039be8 + 0xbc) == 0) {
    if (*PTR_DAT_4a039be8 == '\0') {
      host_s3eFileWrite_thumb(param_1,1,1,*(undefined4 *)(PTR_DAT_4a039be8 + 8),1);
    }
    else {
      host_s3eFileRead_thumb(param_1,1,1);
    }
    FUN_4a0515e4(1);
  }
  else if (*PTR_DAT_4a039be8 == '\0') {
    FUN_4a056f94(param_1,1,1,1,PTR_DAT_4a039be8,unaff_r4);
  }
  else {
    FUN_4a056f30(param_1,1,1);
  }
  return;
}



// Address: 4a0607d8

void FUN_4a0607d8(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 1;
  return;
}



// Address: 4a060808

void FUN_4a060808(void)

{
  return;
}



// Address: 4a06080c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_4a06080c(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_4a0456e0(param_2);
  if (piVar1 == (int *)0x0) {
    FUN_4a008004(s_Class_factory_does_not_recognise_4a060844,param_2);
    iVar2 = host_s3eDebugIsDebuggerPresent_thumb();
    if (iVar2 != 0) {
      _DAT_fffffff4 = 0;
    }
  }
  FUN_4a1652c6(piVar1,*(undefined4 *)(*piVar1 + 0x14));
  return piVar1;
}



// Address: 4a060870

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_4a060870(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)PTR_DAT_4a0608c4 != param_1) {
    for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 0x20); uVar1 = uVar1 + 1) {
      if (*(int *)(*(int *)(param_1 + 0x1c) + uVar1 * 8) == param_2) {
        if (*(int *)(*(int *)(param_1 + 0x1c) + uVar1 * 8 + 4) != 0) {
          return uVar1;
        }
        FUN_4a008004(s_Resource__08x_requested__but_it_w_4a0608c8);
        iVar2 = host_s3eDebugIsDebuggerPresent_thumb();
        if (iVar2 == 0) {
          return 0xffffffff;
        }
        _DAT_fffffff4 = 0;
        return 0xffffffff;
      }
    }
  }
  return 0xffffffff;
}



// Address: 4a0608fc

int * FUN_4a0608fc(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 auStack_f0 [204];
  int iStack_24;
  undefined4 local_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  puVar1 = PTR_DAT_4a0609ac;
  *(int *)(PTR_DAT_4a0609ac + 4) = *(int *)(PTR_DAT_4a0609ac + 4) + 1;
  puVar2 = PTR_DAT_4a0609b4;
  uVar5 = *(undefined4 *)(*(int *)PTR_DAT_4a0609b0 + 100);
  *(undefined4 *)(*(int *)PTR_DAT_4a0609b0 + 100) = param_4;
  iStack_24 = param_1;
  local_20 = param_2;
  iStack_1c = param_3;
  uStack_18 = param_4;
  thunk_FUN_4a001134(auStack_f0,puVar2,0xcc);
  puVar2 = PTR_DAT_4a0609b4;
  *PTR_DAT_4a0609b4 = 1;
  *(undefined4 *)(puVar2 + 8) = local_20;
  local_f4 = host_s3eFileTell_thumb(local_20);
  host_s3eFileSeek_thumb(local_20,*(undefined4 *)(*(int *)(param_1 + 0x1c) + param_3 * 8 + 4),0);
  FUN_4a03c12c(&local_f8,1,0x20,4);
  piVar3 = (int *)FUN_4a06080c(param_1,local_f8,1);
  local_fc = piVar3;
  FUN_4a16f7ca(param_1 + 0xc,&local_fc);
  *(short *)(piVar3 + 3) = (short)piVar3[3] + 1;
  iVar4 = *(int *)(puVar1 + 4);
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_4a1652c6(piVar3,*(undefined4 *)(*piVar3 + 0x18));
  puVar2 = PTR_DAT_4a0609b4;
  *(int *)(puVar1 + 4) = iVar4;
  thunk_FUN_4a001134(puVar2,auStack_f0,0xcc);
  if (1 < iVar4) {
    host_s3eFileSeek_thumb(local_20,local_f4,0);
  }
  *(int *)(puVar1 + 4) = *(int *)(puVar1 + 4) + -1;
  *(undefined4 *)(*(int *)PTR_DAT_4a0609b0 + 100) = uVar5;
  return piVar3;
}



// Address: 4a0609b8

void FUN_4a0609b8(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  int local_28;
  undefined1 auStack_24 [4];
  undefined4 local_20;
  
  *(int *)PTR_DAT_4a060ca0 = param_1;
  FUN_4a06067c(param_1);
  puVar1 = PTR_DAT_4a060ca4;
  iVar8 = param_1 + 0xc;
  if (*PTR_DAT_4a060ca4 == '\0') {
    local_34 = *(uint *)(param_1 + 0x10);
    FUN_4a03c12c(&local_34,1,0x20,4);
  }
  else {
    FUN_4a03c12c(&local_34,1,0x20,4);
    uVar9 = local_34;
    if (*(uint *)(param_1 + 0x10) < local_34) {
      FUN_4a16f710(iVar8,local_34);
    }
    FUN_4a16f76c(iVar8,uVar9);
    FUN_4a16f710(iVar8,*(undefined4 *)(param_1 + 0x10));
  }
  puVar3 = (undefined4 *)FUN_4a0606b4(auStack_24);
  puVar2 = PTR_PTR_4a060ca8;
  *(undefined2 *)(puVar3 + 3) = 0;
  *(undefined2 *)((int)puVar3 + 0xe) = 0;
  *puVar3 = puVar2;
  if (*puVar1 != '\0') {
    local_20 = 0xffffffff;
    for (piVar4 = *(int **)(param_1 + 0xc);
        piVar4 < (int *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) * 4);
        piVar4 = piVar4 + 1) {
      *piVar4 = (int)auStack_24;
    }
  }
  local_28 = *(int *)(*(int *)PTR_DAT_4a060cac + 100);
  if ((*puVar1 != '\0') && (*(int *)(local_28 + 4) != 0)) {
    local_28 = FUN_4a1357e6(*(int *)PTR_DAT_4a060cac,*(int *)(local_28 + 4),0);
  }
  local_2c = 1;
  local_30 = 0;
  if (*(int *)(local_28 + 0xc) << 0x1b < 0) {
    local_2c = 0;
  }
  else if (DAT_4a060cb0 <= *(uint *)(PTR_DAT_4a060ca4 + 0xc0)) {
    if (*puVar1 == '\0') {
      local_30 = 1;
      for (uVar9 = 0; uVar9 < *(uint *)(param_1 + 0x10); uVar9 = uVar9 + 1) {
        piVar4 = *(int **)(*(int *)(param_1 + 0xc) + uVar9 * 4);
        FUN_4a1652c6(piVar4,*(undefined4 *)(*piVar4 + 0x28));
        iVar8 = FUN_4a02b1e8();
        if (iVar8 != *(int *)(param_1 + 4)) {
          local_30 = 0;
          break;
        }
      }
    }
    FUN_4a0365d4(&local_30,1,1,1);
    local_2c = ((**(int **)PTR_DAT_4a060cac << 0x14) >> 0x1f) + 1;
    FUN_4a0365d4(&local_2c,1,1,1);
  }
  piVar4 = *(int **)(param_1 + 0xc);
  do {
    puVar1 = PTR_DAT_4a060ca4;
    if ((int *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) * 4) <= piVar4) {
      if (*PTR_DAT_4a060ca4 == '\x01') {
        for (piVar4 = *(int **)(param_1 + 0xc);
            piVar4 < (int *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) * 4);
            piVar4 = piVar4 + 1) {
          *(short *)(*piVar4 + 0xc) = *(short *)(*piVar4 + 0xc) + 1;
        }
      }
      *(undefined4 *)PTR_DAT_4a060ca0 = 0;
      FUN_4a0606ec(auStack_24);
      return;
    }
    if (*PTR_DAT_4a060ca4 == '\0') {
      iVar8 = FUN_4a056984();
      if (iVar8 != 0) {
        uVar7 = FUN_4a056984();
        FUN_4a1652c6(*piVar4,uVar7);
      }
      iVar8 = host_s3eFileTell_thumb(*(undefined4 *)(puVar1 + 8));
      local_34 = DAT_4a060cbc;
      if ((char)local_2c != '\0') {
        FUN_4a03c12c(&local_34,1,0x20,4);
      }
      local_38 = *(int *)(param_1 + 4);
      if ((char)local_30 == '\0') {
        FUN_4a1652c6((int *)*piVar4,*(undefined4 *)(*(int *)*piVar4 + 0x28));
        local_38 = FUN_4a02b1e8();
        FUN_4a03c12c(&local_38,1,0x20,4);
      }
      FUN_4a1652c6((int *)*piVar4,*(undefined4 *)(*(int *)*piVar4 + 0x14));
      iVar6 = host_s3eFileTell_thumb(*(undefined4 *)(PTR_DAT_4a060ca4 + 8));
      if ((local_2c & 0xff) != 0) {
        host_s3eFileSeek_thumb(*(undefined4 *)(PTR_DAT_4a060ca4 + 8),iVar8,0);
        local_34 = iVar6 - iVar8;
        FUN_4a03c12c(&local_34,1,0x20,4);
        host_s3eFileSeek_thumb(*(undefined4 *)(PTR_DAT_4a060ca4 + 8),iVar6,0);
      }
      iVar8 = FUN_4a056990();
      if (iVar8 != 0) {
        uVar7 = FUN_4a056990();
        piVar5 = (int *)*piVar4;
LAB_4a060c58:
        FUN_4a1652c6(piVar5,uVar7);
      }
    }
    else {
      local_34 = host_s3eFileTell_thumb(*(undefined4 *)(PTR_DAT_4a060ca4 + 8));
      if ((char)local_2c != '\0') {
        FUN_4a03c12c(&local_38,1,0x20,4);
      }
      local_3c = *(undefined4 *)(param_1 + 4);
      if ((char)local_30 == '\0') {
        FUN_4a03c12c(&local_3c,1,0x20,4);
      }
      local_40 = host_s3eFileTell_thumb(*(undefined4 *)(puVar1 + 8));
      FUN_4a03c12c(&local_44,1,0x20,4);
      iVar8 = FUN_4a134ff8(local_28,local_44,*(undefined4 *)(param_1 + 4),0x21);
      if ((iVar8 == 0) || ((char)local_2c == '\0')) {
        if (**(int **)PTR_DAT_4a060cac << 0xb < 0) {
          host_s3eFileSeek_thumb(*(undefined4 *)(puVar1 + 8),local_40,0);
        }
        else {
          *PTR_DAT_4a060cb4 = 1;
          *(undefined4 *)PTR_DAT_4a060cb8 = local_44;
        }
        if (iVar8 == 0) {
          iVar8 = FUN_4a06080c(param_1,local_3c,1);
          *piVar4 = iVar8;
        }
        else {
          piVar5 = (int *)FUN_4a06080c(param_1,local_3c,0);
          if (piVar5 != (int *)0x0) {
            uVar7 = *(undefined4 *)(*piVar5 + 4);
            goto LAB_4a060c58;
          }
        }
      }
      else {
        *piVar4 = iVar8;
        host_s3eFileSeek_thumb(*(undefined4 *)(puVar1 + 8),local_34 + local_38,0);
      }
    }
    piVar4 = piVar4 + 1;
  } while( true );
}



// Address: 4a060cc0

undefined4 * FUN_4a060cc0(undefined4 *param_1,int param_2)

{
  undefined1 *puVar1;
  
  *param_1 = PTR_PTR_4a060d38;
  param_1[1] = *(undefined4 *)(param_2 + 4);
  if (*(int *)(param_2 + 8) == 0) {
    param_1[2] = 0;
  }
  else {
    puVar1 = (undefined1 *)FUN_4a161570(0xa0);
    *puVar1 = 0;
    param_1[2] = puVar1;
    FUN_4a0012bc(puVar1,*(undefined4 *)(param_2 + 8));
  }
  *param_1 = PTR_PTR_4a060d3c;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(byte *)(param_1 + 6) = (*(byte *)(param_1 + 6) >> 1 & 0x7e) << 1;
  FUN_4a16f83c(param_1 + 3,param_2 + 0xc);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(byte *)(param_1 + 10) = (*(byte *)(param_1 + 10) >> 1 & 0x7e) << 1;
  FUN_4a16ee0a(param_1 + 7,param_2 + 0x1c);
  param_1[0xb] = *(undefined4 *)(param_2 + 0x2c);
  return param_1;
}



// Address: 4a060d40

int FUN_4a060d40(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_4a0606b4();
  *puVar1 = PTR_PTR_4a060d84;
  iVar2 = thunk_FUN_4a092258(puVar1 + 3);
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(byte *)(iVar2 + 0x1c) = *(byte *)(iVar2 + 0x1c) & 0xfc;
  FUN_4a16edb6(iVar2 + 0x10,0);
  FUN_4a16eda4(iVar2 + 0x10);
  *(undefined4 *)(iVar2 + 0x20) = 0;
  return iVar2 + -0xc;
}



// Address: 4a060d88

void FUN_4a060d88(int param_1)

{
  if (param_1 != 0) {
    FUN_4a060d9c();
    thunk_FUN_4a161530();
  }
  return;
}



// Address: 4a060d9c

void FUN_4a060d9c(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  
  *param_1 = PTR_PTR_4a060dd8;
  for (uVar2 = 0; uVar2 < (uint)param_1[8]; uVar2 = uVar2 + 1) {
  }
  if ((*(byte *)(param_1 + 10) & 1) == 0) {
    FUN_4a0a6f48(param_1[7],8);
    param_1[7] = 0;
  }
  iVar1 = FUN_4a092278(param_1 + 3);
  FUN_4a0606ec(iVar1 + -0xc);
  return;
}



// Address: 4a060ddc

void FUN_4a060ddc(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_r1;
  int extraout_r1_00;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined1 auStack_54 [5];
  byte local_4f;
  uint local_4c;
  uint local_48;
  undefined1 auStack_44 [8];
  int local_3c;
  int iStack_20;
  int local_1c;
  int local_18;
  
  iStack_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  FUN_4a062594(param_1,0x1e);
  uVar9 = (uint)*(byte *)(param_1 + 0x41);
  uVar10 = (uint)(uVar9 != 0);
  uVar4 = FUN_4a134bfc(param_1);
  thunk_FUN_4a0ecbc4(auStack_44);
  thunk_FUN_4a0ecab0(auStack_44,uVar4);
  iVar6 = 6;
  thunk_FUN_4a000f84(auStack_54,PTR_DAT_4a061080 + local_3c * 6);
  uVar11 = CONCAT44(extraout_r1,(uint)local_4f);
  if (local_4f < 2) {
    uVar11 = FUN_4a061a3c(param_1,local_1c);
  }
  uVar4 = (undefined4)((ulonglong)uVar11 >> 0x20);
  iVar5 = (int)uVar11;
  if (uVar10 == 0) {
    uVar9 = *(uint *)(local_1c + 8);
    iVar5 = local_1c;
  }
  if (uVar9 == 0x10) {
LAB_4a060e7c:
    uVar9 = 0xe;
  }
  else {
    uVar7 = uVar9;
    if ((int)uVar9 < 0x11) {
      iVar5 = thunk_FUN_4a1652fc();
      iVar6 = param_1 + -4;
      uVar4 = 0x2a;
      uVar7 = 0x2a;
      param_1 = 0x2e;
    }
    if (uVar7 == 0x28) goto LAB_4a060e7c;
    if ((int)uVar7 < 0x29) {
      iVar8 = uVar7 - 0x16;
      iVar6 = thunk_FUN_4a1652fc(iVar5,uVar4);
      uVar7 = (iVar8 + uVar9 * -2) - iVar6;
      iVar6 = uVar7 - uVar9;
    }
    if (uVar7 == 0x2c) {
      uVar9 = 0x15;
    }
    else if (uVar7 == 0x2d) {
      uVar9 = 0x1b;
    }
    else if ((uVar7 == 0x2e) || (uVar7 == 0x2f)) goto LAB_4a060e7c;
  }
  if ((uVar10 != 1) && ((*(ushort *)(PTR_DAT_4a061080 + uVar9 * 6) & 0x1f) != 0)) {
    thunk_FUN_4a1652fc();
    uVar10 = extraout_r1_00 >> 0x20;
    param_1 = iVar6 >> 0x1f;
    uVar9 = 10;
  }
  if (((uVar10 == 0) && (*(int *)(param_1 + 0x34) << 0x1c < 0)) &&
     (PTR_DAT_4a061080[uVar9 * 6 + 5] == '\0')) {
    if (uVar9 == 0x13) {
      uVar9 = 0x14;
    }
    else if ((int)uVar9 < 0x14) {
      if (uVar9 == 3) {
        uVar9 = 5;
      }
      else if (uVar9 == 10) {
        uVar9 = 0xe;
      }
      else if (uVar9 == 0x11) {
        uVar9 = 0x12;
      }
    }
    else if (uVar9 == 0x17) {
      uVar9 = 0x18;
    }
    else if (uVar9 == 0x19) {
      uVar9 = 0x1a;
    }
  }
  if ((*(uint *)(local_1c + 8) == uVar9) &&
     (uVar1 = *(ushort *)(local_1c + 0x14), uVar2 = *(ushort *)(local_1c + 0x10),
     iVar6 = thunk_FUN_4a0e6b6c(local_1c + 8), (uint)uVar1 == iVar6 * (uint)uVar2 >> 3)) {
    thunk_FUN_4a0ebe34(local_18,local_1c);
  }
  else {
    thunk_FUN_4a0ecab0(local_18,uVar9);
    thunk_FUN_4a0e681c(local_1c,local_18,0);
  }
  if (((int)((uint)*(ushort *)(PTR_DAT_4a061080 + *(int *)(local_18 + 8) * 6) << 0x1a) < 0) &&
     (iVar6 = thunk_FUN_4a142860(local_18), iVar6 != 0)) {
    local_70 = 0;
    local_6c = 0;
    local_68 = 0;
    thunk_FUN_4a0e5cc8(local_18,0xff,0,0xff);
  }
  local_48 = 0;
  local_4c = 0;
  if (PTR_DAT_4a061084[1] == '\0') {
    if (((*(int *)(*(int *)PTR_DAT_4a061088 + 0xc) == 3) && (*(int *)(param_1 + 0x34) << 0xd < 0))
       && (*(int *)(param_1 + 0x34) << 0xc < 0)) {
      local_48 = (uint)*(ushort *)(local_18 + 0x10);
      local_4c = (uint)*(ushort *)(local_18 + 0x12);
      goto LAB_4a061054;
    }
    local_70 = 0xffffffff;
    iVar6 = thunk_FUN_4a0e6a58(local_18,&local_48,&local_4c,1);
  }
  else {
    iVar6 = thunk_FUN_4a0e8260(local_18,&local_48,&local_4c,1);
  }
  if (iVar6 != 0) {
    thunk_FUN_4a0ecbc4(&local_70);
    thunk_FUN_4a0ecab0(&local_70,uVar9);
    thunk_FUN_4a0ebe9c(&local_70,local_48);
    thunk_FUN_4a0ecb88(&local_70,local_4c);
    iVar5 = FUN_4a142124(&local_70);
    thunk_FUN_4a0e4d6c(&local_70,iVar6,local_4c * local_48 * iVar5,0);
    local_6c = local_6c | 1;
    if (*(int *)(local_18 + 0x1c) != 0) {
      thunk_FUN_4a0e53a8(&local_70);
    }
    thunk_FUN_4a0ecc0c(local_18,&local_70);
    thunk_FUN_4a0ecbf0(&local_70);
  }
LAB_4a061054:
  uVar3 = thunk_FUN_4a0066d8((uint)*(ushort *)(param_1 + 0x20) << 0xc,local_48);
  *(undefined2 *)(param_1 + 0xbc) = uVar3;
  uVar3 = thunk_FUN_4a0066d8((uint)*(ushort *)(param_1 + 0x22) << 0xc,local_4c);
  *(undefined2 *)(param_1 + 0xbe) = uVar3;
  thunk_FUN_4a0ecbf0(auStack_44);
  return;
}



// Address: 4a06108c

void FUN_4a06108c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c [7];
  undefined1 auStack_20 [5];
  byte local_1b;
  int local_18;
  
  FUN_4a062594(param_1,0x1e);
  iVar1 = FUN_4a0e7234(*(undefined4 *)(param_1 + 0x18));
  if (iVar1 == 0) {
    iVar1 = FUN_4a134bfc(param_1);
    thunk_FUN_4a0ecab0(param_2,iVar1);
    local_18 = param_1 + 0x10;
    iVar3 = FUN_4a142b74();
    if ((iVar3 != 0) && (iVar3 = thunk_FUN_4a142860(local_18), iVar3 != 0)) {
      iVar3 = FUN_4a142b74(param_2);
      if (iVar3 == 0) {
        thunk_FUN_4a0e59d4(local_18,0x80,0xff,0,0xff);
      }
      else {
        local_40 = 0;
        local_3c[0] = 0;
        local_3c[1] = 0;
        local_44 = 0;
        thunk_FUN_4a0e5cc8(local_18,0xff,0,0xff,0xff);
      }
    }
    FUN_4a142134(auStack_20,param_2);
    if (local_1b < 2) {
      if (*(int *)(param_1 + 0x38) != 0) {
        for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x3c); iVar3 = iVar3 + 1) {
          if (*(int *)(*(int *)(param_1 + 0x38) + iVar3 * 4) != 0) {
            FUN_4a061a3c(param_1);
          }
        }
      }
      FUN_4a061a3c(param_1,local_18);
    }
    if (*(int *)(param_1 + 0x18) == iVar1) {
      thunk_FUN_4a0ebe34(param_2,local_18);
    }
    else {
      thunk_FUN_4a0e681c(local_18,param_2,0);
    }
    FUN_4a142134(auStack_20,param_2);
    if ((1 < local_1b) && (*(int *)(param_2 + 0x1c) != 0)) {
      FUN_4a142134(auStack_20,param_2);
      iVar1 = thunk_FUN_4a0e6c14(param_2,0x80 >> (local_1b - 1 & 0xff),0xff,0,0xff);
      if (iVar1 != 0) {
        *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 8;
      }
    }
    if ((*(int *)(param_2 + 0x1c) == 0) && (FUN_4a142134(auStack_20,param_2), local_1b < 2)) {
      uVar4 = 1;
      iVar1 = thunk_FUN_4a0e57fc(param_2,0,0,0,0xff);
      while (iVar3 = thunk_FUN_4a0e57fc(param_2,0,0,uVar4,0xff), iVar3 == iVar1) {
        uVar4 = (uVar4 & 0x7f) << 1;
      }
      local_40 = 0;
      local_3c[1] = 0xff;
      local_44 = 0;
      local_3c[0] = uVar4;
      thunk_FUN_4a0e5cc8(param_2,0,0,0,0xff);
      iVar1 = thunk_FUN_4a0e59d4(param_2,0x80,0xff,0,0xff);
      if (iVar1 != 0) {
        *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 8;
      }
    }
    else {
      iVar1 = FUN_4a142b74(param_2);
      if ((iVar1 != 0) && (iVar1 = thunk_FUN_4a142860(param_2), iVar1 != 0)) {
        local_40 = 0;
        local_3c[0] = 0;
        local_3c[1] = 0;
        local_44 = 0;
        thunk_FUN_4a0e5cc8(param_2,0xff,0,0xff,0xff);
      }
    }
  }
  else {
    uVar2 = thunk_FUN_4a0ecbc4(local_3c);
    thunk_FUN_4a0ecc0c(param_2,uVar2);
    thunk_FUN_4a0ecbf0(local_3c);
    thunk_FUN_4a0ecab0(param_2,8);
    thunk_FUN_4a0ebe9c(param_2,2);
    thunk_FUN_4a0ecb88(param_2,2);
    thunk_FUN_4a0e4d6c(param_2,0,0,0,0);
    local_44 = *(undefined4 *)PTR_DAT_4a06128c;
    local_40 = *(undefined4 *)(PTR_DAT_4a06128c + 4);
    thunk_FUN_4a0e4d40(param_2,&local_44,local_3c);
  }
  return;
}



// Address: 4a061290

void FUN_4a061290(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((iVar1 != 0) && (iVar1 != param_2)) {
    thunk_FUN_4a0eace8(param_2,iVar1,param_3,*(undefined4 *)(param_1 + 0x18),
                       *(undefined2 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x22));
  }
  if (*(int *)(param_1 + 0x34) << 0x12 < 0) {
    FUN_4a061b4c(param_1,param_2,param_3);
  }
  if (*(int *)(param_1 + 0x34) << 0x11 < 0) {
    FUN_4a061ac4(param_1,param_2,param_3);
  }
  return;
}



// Address: 4a0612e0

void FUN_4a0612e0(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  int *piStack_2a4;
  undefined4 uStack_2a0;
  undefined1 auStack_1a4 [8];
  undefined1 auStack_19c [256];
  int iStack_9c;
  undefined1 auStack_98 [32];
  int iStack_78;
  undefined1 auStack_74 [80];
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  iStack_1c = param_1;
  uStack_18 = param_2;
  iVar2 = FUN_4a03f4f8(param_2,&DAT_4a061470);
  iStack_78 = 0;
  host_s3eConfigGetInt_thumb(PTR_DAT_4a061478,PTR_s_NoSharedTexels_4a061474,&iStack_78);
  if (iStack_78 == 0) {
    cVar1 = *PTR_DAT_4a06147c;
    pcVar7 = PTR_DAT_4a06147c;
    while (cVar1 != '\0') {
      if ((*pcVar7 == '#') && ((pcVar7[1] == '.' || (pcVar7[1] == '\0')))) {
        *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x800000;
        break;
      }
      pcVar7 = pcVar7 + 1;
      cVar1 = *pcVar7;
    }
  }
  iVar3 = FUN_4a0620b4(param_1,auStack_74,0x50);
  if (iVar3 != 0) {
    *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xfffffffb;
  }
  if (iVar2 == 0) {
    piStack_2a4 = &iStack_78;
    uStack_2a0 = 0;
    iStack_78 = -1;
    FUN_4a061640(param_1,1,1,8,0);
  }
  else {
    thunk_FUN_4a0eb918();
    uVar4 = thunk_FUN_4a0ecbc4(auStack_98);
    thunk_FUN_4a0ecc0c(param_1 + 0x10,uVar4);
    thunk_FUN_4a0ecbf0(auStack_98);
    thunk_FUN_4a0ebaa0(param_1 + 0x10,iVar2);
    host_s3eFileClose_thumb(iVar2);
    uVar8 = (uint)(*(ushort *)(param_1 + 0x20) >> 1);
    uVar9 = (uint)(*(ushort *)(param_1 + 0x22) >> 1);
    iStack_9c = 0;
    uVar5 = uVar8;
    if (uVar9 <= uVar8) {
      uVar5 = uVar9;
    }
    if (uVar5 != 0) {
      do {
        uVar5 = (int)uVar5 >> 1;
        iStack_9c = iStack_9c + 1;
      } while (uVar5 != 0);
      if (iStack_9c != 0) {
        iVar2 = 1;
        iStack_24 = iStack_9c * 4;
        for (; (uVar9 != 0 && (uVar8 != 0)); uVar8 = (int)uVar8 >> 1) {
          FUN_4a0012bc(auStack_19c,uStack_18);
          puVar6 = (undefined1 *)FUN_4a0015a0(auStack_19c,0x2e);
          if (puVar6 != (undefined1 *)0x0) {
            *puVar6 = 0;
          }
          FUN_4a0012bc(auStack_1a4,puVar6 + 1);
          FUN_4a000d18(&piStack_2a4,s__s_mm_d__s_4a061480,auStack_19c,iVar2,auStack_1a4);
          iVar3 = host_s3eFileCheckExists_thumb(&piStack_2a4);
          if (iVar3 != 0) {
            if (*(int *)(param_1 + 0x38) == 0) {
              uVar4 = thunk_FUN_4a161570(iStack_24);
              *(undefined4 *)(param_1 + 0x38) = uVar4;
              thunk_FUN_4a00121c(uVar4,iStack_24);
              *(int *)(param_1 + 0x3c) = iStack_9c;
            }
            thunk_FUN_4a161570(0x24);
            uVar4 = thunk_FUN_4a0ecbc4();
            iStack_20 = iVar2 * 4 + -4;
            *(undefined4 *)(*(int *)(param_1 + 0x38) + iStack_20) = uVar4;
            iVar3 = FUN_4a03f4f8(&piStack_2a4,&DAT_4a061470);
            if (iVar3 != 0) {
              thunk_FUN_4a0ebaa0(*(undefined4 *)(*(int *)(param_1 + 0x38) + iStack_20),iVar3);
              host_s3eFileClose_thumb(iVar3);
            }
          }
          uVar9 = (int)uVar9 >> 1;
          iVar2 = iVar2 + 1;
        }
      }
    }
  }
  return;
}



// Address: 4a06148c

void FUN_4a06148c(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x34) | 0x40;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x34) & 0xffffffbf;
  }
  *(uint *)(param_1 + 0x34) = uVar1;
  FUN_4a0623a8(param_1,0);
  return;
}



// Address: 4a0614aa

void FUN_4a0614aa(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    thunk_FUN_4a0eadb8(param_2,*(int *)(param_1 + 0x2c),param_3,*(undefined4 *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 0x34) << 0x12 < 0) {
    FUN_4a061df0(param_1,param_2,param_3);
  }
  if (*(int *)(param_1 + 0x34) << 0x11 < 0) {
    FUN_4a061ce0(param_1,param_2,param_3);
  }
  return;
}



// Address: 4a0614e8

void FUN_4a0614e8(int param_1)

{
  if (((*(int *)(param_1 + 0x34) << 3 < 0) && (*(int *)(param_1 + 0xb4) != -1)) &&
     (*(int *)(param_1 + 0x34) << 0x11 < 0)) {
    thunk_FUN_4a15006c(1,param_1 + 0xb4);
    *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
  }
  return;
}



// Address: 4a061516

void FUN_4a061516(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x34);
  if ((int)(uVar1 << 0xd) < 0) {
    *(uint *)(param_1 + 0x34) = uVar1 | 0x100000;
  }
  else {
    *(uint *)(param_1 + 0x34) = uVar1 & 0xffefffff;
    if ((int)(uVar1 << 0x12) < 0) {
      FUN_4a061ea4(param_1);
    }
    if (*(int *)(param_1 + 0x34) << 0x11 < 0) {
      FUN_4a061d1a(param_1);
      return;
    }
  }
  return;
}



// Address: 4a06154e

void FUN_4a06154e(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xac);
  if (piVar1 != (int *)0x0) {
    FUN_4a1652c6(piVar1,*(undefined4 *)(*piVar1 + 4));
    *(undefined4 *)(param_1 + 0xac) = 0;
  }
  FUN_4a061a70(param_1);
  FUN_4a061f24(param_1);
  return;
}



// Address: 4a06157c

void FUN_4a06157c(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (((param_2 == 0) || (*(int *)(param_1 + 0x58) == 0)) ||
     (*(int *)(*(int *)(param_1 + 0x58) + 4) != 0)) {
    uVar3 = *(uint *)(param_1 + 0x34);
    if (param_2 == 0) {
      uVar4 = uVar3 | 0x40000;
    }
    else {
      uVar4 = uVar3 & 0xfffbffff;
    }
    *(uint *)(param_1 + 0x34) = uVar4;
    FUN_4a0623a8(param_1,0);
    if ((**(int **)PTR_DAT_4a061604 << 0x1b < 0) && (param_2 != ((int)(uVar3 << 0xd) >> 0x1f) + 1))
    {
      if (param_2 == 0) {
        *(undefined1 *)(param_1 + 0x62) = 0;
      }
      else {
        iVar5 = *(ushort *)(param_1 + 0x22) - 1;
        if ((int)(*(ushort *)(param_1 + 0x20) - 1) < iVar5) {
          iVar5 = *(ushort *)(param_1 + 0x20) - 1;
        }
        if (0 < iVar5) {
          cVar2 = '\0';
          while (cVar1 = cVar2, iVar5 >> 1 != 0) {
            cVar1 = cVar2 + '\x01';
            iVar5 = iVar5 >> 2;
            if (iVar5 == 0) break;
            cVar2 = cVar2 + '\x02';
          }
          *(char *)(param_1 + 0x62) = cVar1;
        }
      }
    }
    if (*(int *)(param_1 + 0x34) << 0xb < 0) {
      FUN_4a061516(param_1);
    }
  }
  return;
}



// Address: 4a061608

void FUN_4a061608(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x34);
  if (param_2 == 0) {
    if ((uVar1 & 1) != 0) {
      thunk_FUN_4a0eb918(param_1 + 0x10);
      FUN_4a062074(param_1);
      return;
    }
    uVar1 = uVar1 & 0xffff7fff;
  }
  else {
    if ((uVar1 & 1) != 0) {
      return;
    }
    uVar1 = uVar1 | 0x8000;
  }
  *(uint *)(param_1 + 0x34) = uVar1;
  return;
}



// Address: 4a061640

void FUN_4a061640(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_48 [9];
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar2 = param_1 + 0x10;
  iStack_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = thunk_FUN_4a0ecbc4(local_48);
    thunk_FUN_4a0ecc0c(iVar2,uVar1);
    thunk_FUN_4a0ecbf0(local_48);
  }
  thunk_FUN_4a0ecab0(iVar2,local_18);
  thunk_FUN_4a0ebe9c(iVar2,local_20);
  thunk_FUN_4a0ecb88(iVar2,local_1c);
  local_48[0] = 0;
  thunk_FUN_4a0e4d6c(iVar2,0,0,0);
  thunk_FUN_4a0eba04(iVar2,param_5,param_6,param_7);
  return;
}



// Address: 4a0616ac

void FUN_4a0616ac(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ushort *puVar14;
  byte *pbVar15;
  byte *pbVar16;
  int iVar17;
  ushort *puVar18;
  byte *pbVar19;
  int iVar20;
  int iVar21;
  int local_9c;
  short local_90;
  short local_8e;
  short local_8c;
  short local_8a;
  int local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  uint local_78;
  undefined2 local_74;
  undefined2 local_72;
  uint local_70;
  uint local_6c;
  int local_68;
  int local_64;
  int *local_60;
  uint local_5c;
  uint local_58;
  byte *local_54;
  int local_50;
  undefined1 auStack_4c [36];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  local_50 = *(int *)(*(int *)PTR_DAT_4a061a28 + 0x67c);
  local_18 = param_1;
  if (local_50 != 0) {
    FUN_4a070740();
  }
  uVar5 = *(ushort *)(local_18 + 0x20);
  uVar6 = *(ushort *)(local_18 + 0x22);
  uVar8 = thunk_FUN_4a0ecbc4(auStack_4c);
  local_1c = local_18 + 0x10;
  thunk_FUN_4a0ecc0c(local_1c,uVar8);
  thunk_FUN_4a0ecbf0(auStack_4c);
  local_20 = local_18 + 0x40;
  thunk_FUN_4a0ecab0(local_1c,*(undefined1 *)(local_18 + 0x41));
  thunk_FUN_4a0ebe9c(local_1c,(uint)uVar5);
  thunk_FUN_4a0ecb88(local_1c,(uint)uVar6);
  thunk_FUN_4a0e4d6c(local_1c,0,0,0,0);
  puVar7 = PTR_DAT_4a061a28;
  iVar10 = 1;
  do {
    iVar20 = iVar10;
    if ((int)(uint)uVar5 <= iVar20) break;
    iVar10 = iVar20 * 2;
  } while (iVar20 * 2 < *(int *)(*(int *)PTR_DAT_4a061a28 + 0x344));
  iVar10 = 1;
  do {
    iVar21 = iVar10;
    if ((int)(uint)uVar6 <= iVar21) break;
    iVar10 = iVar21 * 2;
  } while (iVar21 * 2 < *(int *)(*(int *)PTR_DAT_4a061a28 + 0x348));
  local_54 = (byte *)FUN_4a161570(iVar21 * iVar20 * 4);
  puVar9 = *(uint **)puVar7;
  local_58 = *puVar9;
  *puVar9 = local_58 & 0xffff87ff;
  local_5c = puVar9[300];
  thunk_FUN_4a161570(0x58);
  local_60 = (int *)FUN_4a069e28();
  local_60[0xb] = local_18;
  local_60[8] = -1;
  FUN_4a0361cc(local_60);
  uVar5 = *(ushort *)(local_18 + 0x20);
  local_64 = thunk_FUN_4a0066d8((uint)uVar5 + iVar20 + -1,iVar20);
  uVar6 = *(ushort *)(local_18 + 0x22);
  local_68 = thunk_FUN_4a0066d8((uint)uVar6 + iVar21 + -1,iVar21);
  local_6c = thunk_FUN_4a0066d8(iVar20 << 0xc,(uint)uVar5);
  local_6c = local_6c & 0xffff;
  local_70 = thunk_FUN_4a0066d8(iVar21 << 0xc,(uint)uVar6);
  local_70 = local_70 & 0xffff;
  local_74 = (undefined2)iVar20;
  local_72 = (undefined2)iVar21;
  local_78 = (uint)*(ushort *)(local_18 + 0x24);
  local_7c = *(undefined4 *)(*(int *)PTR_DAT_4a061a28 + 0x38c);
  for (local_80 = 0; local_80 < local_68; local_80 = local_80 + 1) {
    local_84 = *(int *)(local_18 + 0x28) + local_80 * iVar21 * (uint)*(ushort *)(local_18 + 0x24);
    for (local_88 = 0; local_88 < local_64; local_88 = local_88 + 1) {
      local_90 = (short)local_6c;
      local_8c = local_90 * (short)local_88;
      local_8e = (short)local_70;
      local_8a = local_8e * (short)local_80;
      thunk_FUN_4a048eec(PTR_DAT_4a061a2c,&local_74,&local_8c,&local_90);
      thunk_FUN_4a05a618();
      iVar10 = *(int *)PTR_DAT_4a061a28;
      *(undefined4 *)(iVar10 + 0x38c) = local_7c;
      FUN_4a15074c(0,*(int *)(iVar10 + 0x348) - iVar21,iVar20,iVar21,DAT_4a061a34,DAT_4a061a30,
                   local_54);
      iVar10 = (uint)*(ushort *)(local_18 + 0x20) - iVar20 * local_88;
      if (iVar20 <= iVar10) {
        iVar10 = iVar20;
      }
      iVar11 = (uint)*(ushort *)(local_18 + 0x22) - iVar21 * local_80;
      if (iVar21 <= iVar11) {
        iVar11 = iVar21;
      }
      puVar18 = (ushort *)(local_78 * (iVar11 + -1) + local_84);
      uVar12 = thunk_FUN_4a0e6b6c(local_1c + 8);
      local_84 = iVar20 * (uVar12 >> 3) + local_84;
      cVar3 = *(char *)(local_20 + 1);
      if (cVar3 == '\x03') {
        pbVar19 = local_54;
        for (iVar13 = 0; iVar13 < iVar11; iVar13 = iVar13 + 1) {
          pbVar16 = pbVar19;
          puVar14 = puVar18;
          for (iVar17 = 0; iVar17 < iVar10; iVar17 = iVar17 + 1) {
            bVar4 = *pbVar16;
            pbVar15 = pbVar16 + 1;
            pbVar1 = pbVar16 + 2;
            pbVar16 = pbVar16 + 4;
            *puVar14 = (ushort)(bVar4 >> 3) << 0xb | (ushort)(*pbVar15 >> 2) << 5 |
                       (ushort)(*pbVar1 >> 3);
            puVar14 = puVar14 + 1;
          }
          puVar18 = (ushort *)((int)puVar18 - local_78);
          pbVar19 = pbVar19 + iVar20 * 4;
        }
      }
      else if (cVar3 == '\x05') {
        pbVar19 = local_54;
        for (iVar13 = 0; iVar13 < iVar11; iVar13 = iVar13 + 1) {
          pbVar16 = pbVar19;
          puVar14 = puVar18;
          for (iVar17 = 0; iVar17 < iVar10; iVar17 = iVar17 + 1) {
            bVar4 = *pbVar16;
            pbVar15 = pbVar16 + 1;
            pbVar1 = pbVar16 + 3;
            pbVar2 = pbVar16 + 2;
            pbVar16 = pbVar16 + 4;
            *puVar14 = (ushort)(bVar4 >> 4) << 0xc | (ushort)(*pbVar15 >> 4) << 8 |
                       (ushort)(*pbVar2 >> 4) << 4 | (ushort)(*pbVar1 >> 4);
            puVar14 = puVar14 + 1;
          }
          puVar18 = (ushort *)((int)puVar18 - local_78);
          pbVar19 = pbVar19 + iVar20 * 4;
        }
      }
      else if (cVar3 == '\n') {
        pbVar19 = local_54;
        for (iVar13 = 0; iVar13 < iVar11; iVar13 = iVar13 + 1) {
          puVar14 = puVar18;
          pbVar16 = pbVar19;
          for (iVar17 = 0; iVar17 < iVar10; iVar17 = iVar17 + 1) {
            *(byte *)puVar14 = *pbVar16;
            pbVar15 = pbVar16 + 2;
            *(byte *)((int)puVar14 + 1) = pbVar16[1];
            pbVar16 = pbVar16 + 4;
            *(byte *)(puVar14 + 1) = *pbVar15;
            puVar14 = (ushort *)((int)puVar14 + 3);
          }
          puVar18 = (ushort *)((int)puVar18 - local_78);
          pbVar19 = pbVar19 + iVar20 * 4;
        }
      }
      else if (cVar3 == '\x0e') {
        local_24 = iVar20 << 2;
        local_28 = iVar10 << 2;
        pbVar19 = local_54;
        for (local_9c = 0; local_9c < iVar11; local_9c = local_9c + 1) {
          thunk_FUN_4a000f84(puVar18,pbVar19,local_28);
          puVar18 = (ushort *)((int)puVar18 - local_78);
          pbVar19 = pbVar19 + local_24;
        }
      }
    }
  }
  FUN_4a161530(local_54);
  puVar7 = PTR_DAT_4a061a28;
  *(uint *)(*(int *)PTR_DAT_4a061a28 + 0x4b0) = local_5c;
  if (local_60 != (int *)0x0) {
    FUN_4a1652c6(local_60,*(undefined4 *)(*local_60 + 4));
  }
  **(uint **)puVar7 = local_58;
  FUN_4a1652c6(1,*(undefined4 *)(PTR_DAT_4a061a38 + 0x20));
  if (local_50 != 0) {
    FUN_4a070598(local_50);
  }
  return;
}



// Address: 4a061a3c

void FUN_4a061a3c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar1 = thunk_FUN_4a0e6c14(param_2,0x80,0xff,0,0xff);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 8;
    }
  }
  return;
}



// Address: 4a061a70

void FUN_4a061a70(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined1 auStack_34 [8];
  undefined1 auStack_2c [28];
  
  puVar1 = PTR_DAT_4a061ac0;
  if (*(int *)PTR_DAT_4a061ac0 != 0) {
    if (((*(uint *)(param_1 + 0x34) & 1) != 0) && ((int)(*(uint *)(param_1 + 0x34) << 0x17) < 0)) {
      thunk_FUN_4a0ecbc4(auStack_34);
      thunk_FUN_4a0ecab0(auStack_34,*(undefined1 *)(param_1 + 0x40));
      uVar2 = thunk_FUN_4a0e6b6c(auStack_2c);
      FUN_4a0a64d8(*(undefined4 *)puVar1,uVar2,param_1 + 0x44);
      FUN_4a070832(param_1 + 0x44);
      thunk_FUN_4a0ecbf0(auStack_34);
    }
  }
  return;
}



// Address: 4a061ac4

void FUN_4a061ac4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if ((*(uint *)(param_1 + 0x34) & 1) != 0) {
    local_20 = 0;
    iVar2 = FUN_4a01d744(param_3,&local_18,&local_1c,&local_20);
    uVar1 = DAT_4a061b48;
    if ((((iVar2 == 0) || (local_20 != 0)) || (-1 < *(int *)(param_1 + 0x34) << 0xd)) ||
       (((*(ushort *)(param_1 + 0x20) & *(ushort *)(param_1 + 0x20) - 1) != 0 ||
        ((*(ushort *)(param_1 + 0x22) & *(ushort *)(param_1 + 0x22) - 1) != 0)))) {
      thunk_FUN_4a0ecbc4(&local_44);
      FUN_4a062ef8(param_1,&local_44);
      thunk_FUN_4a0ecbf0(&local_44);
    }
    else {
      thunk_FUN_4a14fd70(DAT_4a061b48,*(undefined4 *)(param_1 + 0xb4));
      local_40 = local_18;
      uStack_3c = local_1c;
      local_44 = 0;
      uStack_38 = param_2;
      thunk_FUN_4a150ac4(uVar1,0,local_18,*(undefined2 *)(param_1 + 0x20),
                         *(undefined2 *)(param_1 + 0x22));
    }
  }
  return;
}



// Address: 4a061b4c

void FUN_4a061b4c(int param_1,int param_2,uint param_3)

{
  int iVar1;
  byte *pbVar2;
  undefined1 auStack_44 [8];
  undefined4 local_3c;
  ushort local_32;
  ushort local_30;
  int local_24;
  int iStack_20;
  int iStack_1c;
  uint local_18;
  
  if ((*(uint *)(param_1 + 0x34) & 1) != 0) {
    pbVar2 = (byte *)(param_1 + 0x40);
    iVar1 = 0;
    iStack_20 = param_1;
    iStack_1c = param_2;
    local_18 = param_3;
    if (*pbVar2 != param_3) {
      thunk_FUN_4a0ecbc4(auStack_44);
      thunk_FUN_4a0ecab0(auStack_44,*pbVar2);
      thunk_FUN_4a0ebe9c(auStack_44,*(undefined2 *)(param_1 + 0x20));
      thunk_FUN_4a0ecb88(auStack_44,*(undefined2 *)(param_1 + 0x22));
      iVar1 = FUN_4a0e7234(local_3c);
      if (iVar1 == 0) {
        local_24 = (uint)local_32 * (uint)local_30;
      }
      iVar1 = thunk_FUN_4a161570(local_24);
      thunk_FUN_4a0eace8(param_2,iVar1,local_18,*pbVar2,*(undefined2 *)(param_1 + 0x20),
                         *(undefined2 *)(param_1 + 0x22));
      thunk_FUN_4a0ecbf0(auStack_44);
      param_2 = iVar1;
    }
    FUN_4a0a6654(*(undefined4 *)PTR_DAT_4a061be4,param_1 + 0x44,param_2);
    FUN_4a061516(param_1);
    if (iVar1 != 0) {
      thunk_FUN_4a161530(iVar1);
    }
  }
  return;
}



// Address: 4a061be8

void FUN_4a061be8(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_4a061c94();
  puVar1 = PTR_DAT_4a061c90;
  if ((*(int *)(param_1 + 0x34) << 0x11 < 0) && (*(int *)(PTR_DAT_4a061c90 + 0x10) != 0)) {
    iVar4 = param_1 + 0x10;
    if (((int)((uint)*(ushort *)(*(int *)(PTR_DAT_4a061c90 + 0x10) + 0x14) << 0x11) < 0) &&
       ((*(int *)(param_1 + 0x2c) != 0 &&
        (iVar2 = thunk_FUN_4a0e6c14(iVar4,0x80,0xff,0,0xff), iVar2 != 0)))) {
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 8;
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      uVar3 = thunk_FUN_4a0e71bc(param_1 + 0x18);
      thunk_FUN_4a0e4d6c(iVar4,0,0,*(undefined4 *)(param_1 + 0x2c),uVar3);
    }
    if (*(int *)(*(int *)(puVar1 + 0x10) + 0x28) == 0) {
      iVar4 = *(int *)(param_1 + 0x18);
      if ((((iVar4 - 0x20U < 4) || (iVar4 == 0x27)) || (iVar4 == 0x34)) ||
         ((iVar4 == 0x2b || (iVar4 == 0x35)))) {
        iVar4 = *(int *)(param_1 + 0x30);
      }
      else {
        iVar4 = (uint)*(ushort *)(param_1 + 0x22) * (uint)*(ushort *)(param_1 + 0x24);
      }
      thunk_FUN_4a000f70(*(undefined4 *)(param_1 + 0x28),iVar4,0xf0);
    }
    else {
      thunk_FUN_4a0e4d40(iVar4);
    }
  }
  *(undefined4 *)(puVar1 + 0x10) = 0;
  return;
}



// Address: 4a061c94

void FUN_4a061c94(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x34) << 0x13 < 0) &&
     (iVar2 = thunk_FUN_4a0e6898(param_1 + 0x18), puVar1 = PTR_DAT_4a061cd8, iVar2 != 0)) {
    if (*(int *)(PTR_DAT_4a061cd8 + 0x14) == 0) {
      iVar2 = *(int *)(PTR_DAT_4a061cd8 + 0x10);
    }
    else {
      iVar2 = FUN_4a1652c6(param_1);
      *(int *)(puVar1 + 0x10) = iVar2;
    }
    if ((iVar2 == 0) && (*(int *)PTR_DAT_4a061cdc != 0)) {
      FUN_4a1652c6(param_1);
    }
  }
  return;
}



// Address: 4a061ce0

void FUN_4a061ce0(int param_1)

{
  undefined1 auStack_2c [36];
  
  if ((*(uint *)(param_1 + 0x34) & 1) != 0) {
    thunk_FUN_4a15006c(1,param_1 + 0xb4);
    *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
    thunk_FUN_4a0ecbc4(auStack_2c);
    FUN_4a062ef8(param_1,auStack_2c);
    thunk_FUN_4a0ecbf0(auStack_2c);
  }
  return;
}



// Address: 4a061d1a

void FUN_4a061d1a(void)

{
  return;
}



// Address: 4a061d1c

void FUN_4a061d1c(int param_1,uint *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined2 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar2 = *(uint *)(param_1 + 0x34) | DAT_4a061dec;
  *(uint *)(param_1 + 0x34) = uVar2;
  uVar3 = param_2[3];
  uVar4 = (uVar3 & 0x70) >> 1;
  *(char *)(param_1 + 0x60) = (char)uVar4;
  iVar9 = 0;
  *(uint *)(param_1 + 0x54) = param_2[1] << 0x10 | *param_2 & 0xffff;
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(uint *)(param_1 + 0x68) = param_2[4];
  uVar8 = (*param_2 - 1) * 0x100000;
  *(uint *)(param_1 + 100) = uVar8;
  puVar5 = (undefined1 *)(param_1 + 0x40);
  *(short *)(param_1 + 0x4a) = (short)*param_2;
  *(undefined1 *)(param_1 + 99) = 0;
  uVar7 = param_2[2];
  if (uVar7 >> 0x10 == 0) {
    iVar9 = 0x10;
    uVar7 = uVar7 << 0x10;
  }
  if (uVar7 >> 0x18 == 0) {
    iVar9 = iVar9 + 8;
    uVar7 = uVar7 << 8;
  }
  if (uVar7 >> 0x1c == 0) {
    iVar9 = iVar9 + 4;
    uVar7 = uVar7 << 4;
  }
  if (uVar7 >> 0x1e == 0) {
    iVar9 = iVar9 + 2;
    uVar7 = uVar7 << 2;
  }
  if (-1 < (int)uVar7) {
    iVar9 = iVar9 + 1;
  }
  uVar7 = -iVar9 + 0x1e;
  *(uint *)(param_1 + 100) = uVar8 | param_2[1] - 1 << (uVar7 - ((uVar3 & 0x70) >> 6) & 0xff);
  uVar3 = -iVar9 + 0x17;
  if (uVar7 < 8) {
    if ((int)uVar3 < 0) {
      uVar6 = (undefined2)(param_2[1] >> (-uVar3 & 0xff));
      goto LAB_4a061db8;
    }
  }
  else {
    uVar3 = 0;
  }
  uVar6 = (undefined2)(param_2[1] << (uVar3 & 0xff));
LAB_4a061db8:
  *(undefined2 *)(param_1 + 0x48) = uVar6;
  if (uVar4 == 0x10) {
    *puVar5 = 3;
    *(uint *)(param_1 + 0x34) = uVar2 | 0x800;
  }
  else {
    *puVar5 = 0x28;
  }
  uVar1 = FUN_4a033804(*puVar5);
  *(undefined1 *)(param_1 + 0x61) = uVar1;
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 1;
  return;
}



// Address: 4a061df0

void FUN_4a061df0(int param_1,undefined2 *param_2,uint param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int iVar4;
  byte *pbVar5;
  undefined2 *local_4c;
  undefined1 auStack_44 [8];
  undefined1 auStack_3c [28];
  int iStack_20;
  undefined2 *puStack_1c;
  uint local_18;
  
  iStack_20 = param_1;
  puStack_1c = param_2;
  local_18 = param_3;
  if ((*(uint *)(param_1 + 0x34) & 1) != 0) {
    thunk_FUN_4a0ecbc4(auStack_44);
    pbVar5 = (byte *)(param_1 + 0x40);
    thunk_FUN_4a0ecab0(auStack_44,*pbVar5);
    uVar2 = thunk_FUN_4a0e71bc(auStack_3c);
    local_4c = (undefined2 *)0x0;
    puVar3 = param_2;
    if (*pbVar5 != local_18) {
      puVar3 = (undefined2 *)thunk_FUN_4a161570(uVar2,param_2);
      thunk_FUN_4a0eadb8(param_2,puVar3,local_18,*pbVar5);
      local_4c = puVar3;
    }
    thunk_FUN_4a000f84(*(undefined4 *)(param_1 + 0x4c),puVar3,uVar2);
    if (*(byte *)(param_1 + 0x60) < 9) {
      thunk_FUN_4a09e170(*(undefined4 *)PTR_DAT_4a061ea0,*(undefined4 *)(param_1 + 0xa4));
    }
    if (local_4c != (undefined2 *)0x0) {
      thunk_FUN_4a161530(local_4c);
    }
    thunk_FUN_4a0ecbf0(auStack_44);
  }
  if (*(int *)(param_1 + 0xac) != 0) {
    uVar1 = *param_2;
    *param_2 = 0x8000;
    iVar4 = *(int *)(*(int *)(param_1 + 0xac) + 0x2c);
    if (iVar4 != 0) {
      thunk_FUN_4a0eadb8(param_2,iVar4,local_18,*(undefined4 *)(param_1 + 0x18));
    }
    FUN_4a061df0(*(undefined4 *)(param_1 + 0xac),param_2,local_18);
    *param_2 = uVar1;
  }
  return;
}



// Address: 4a061ea4

void FUN_4a061ea4(int param_1)

{
  FUN_4a0a62a0(*(undefined4 *)PTR_DAT_4a061ebc,param_1 + 0x44,0);
  return;
}



// Address: 4a061ec0

uint FUN_4a061ec0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte bStack_b;
  
  if ((*(uint *)(param_1 + 0x34) & 1) == 0) {
    if (param_2 == 0) {
      param_2 = param_1 + 0x10;
    }
    bStack_b = (byte)((ushort)*(undefined2 *)(PTR_DAT_4a061f20 + *(int *)(param_2 + 8) * 6 + 4) >> 8
                     );
    if (((1 < bStack_b) || (iVar2 = thunk_FUN_4a142b8c(param_2,0xff), iVar2 != 0)) ||
       (iVar2 = thunk_FUN_4a142154(param_2), uVar1 = 0, iVar2 != 0)) {
      return 1;
    }
  }
  else {
    uVar1 = (*(uint *)(param_1 + 0x34) & 0xf) >> 3;
  }
  return uVar1;
}



// Address: 4a061f24

void FUN_4a061f24(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [28];
  
  if (((*(uint *)(param_1 + 0x34) & 1) != 0) && ((int)(*(uint *)(param_1 + 0x34) << 0x16) < 0)) {
    thunk_FUN_4a0ecbc4(auStack_38);
    thunk_FUN_4a0ecab0(auStack_38,*(undefined1 *)(param_1 + 0x40));
    iVar1 = thunk_FUN_4a0e6b6c(auStack_30);
    if ((*(int *)PTR_DAT_4a061f98 != 0) && ((iVar1 != 0x10 && (*(int *)(param_1 + 0xa4) != 0)))) {
      thunk_FUN_4a09e2b8();
      *(undefined4 *)(param_1 + 0xa4) = 0;
    }
    iVar2 = *(int *)PTR_DAT_4a061f9c;
    if (iVar2 != 0) {
      if (iVar1 == 4) {
        FUN_4a0a6294(iVar2,param_1 + 0x44);
      }
      else if (iVar1 == 8) {
        FUN_4a0a646e(iVar2,param_1 + 0x44);
      }
    }
    thunk_FUN_4a0ecbf0(auStack_38);
  }
  return;
}



// Address: 4a061fa0

void FUN_4a061fa0(int param_1,int param_2,short *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int iStack_20;
  int local_1c;
  short *psStack_18;
  
  local_2c = 0;
  iStack_20 = param_1;
  local_1c = param_2;
  psStack_18 = param_3;
  FUN_4a01d744(*(undefined4 *)(param_1 + 0x18),&local_24,&local_28,&local_2c);
  puVar1 = PTR_DAT_4a062068;
  if (*(int *)(*(int *)PTR_DAT_4a062068 + 0xc) == 2) {
    FUN_4a1500f8(DAT_4a06206c);
  }
  FUN_4a14fcc4(DAT_4a062070);
  thunk_FUN_4a14fd70(DAT_4a06206c,*(undefined4 *)(param_1 + 0xb4));
  FUN_4a1506f8(DAT_4a06206c + -0xec,1);
  iVar2 = host_s3eDeviceGetInt_thumb(0);
  if ((iVar2 == 3) && (*(int *)(*(int *)puVar1 + 0xc) == 2)) {
    FUN_4a04147c(*(undefined4 *)(param_1 + 0xb4),local_24,local_28,*(undefined2 *)(param_1 + 0x20),
                 *(undefined2 *)(param_1 + 0x22));
  }
  FUN_4a150bc0(DAT_4a06206c,0,(int)*param_3,(int)param_3[1],(int)param_3[2],(int)param_3[3],local_24
               ,local_28,*(undefined4 *)(local_1c + 0x18));
  if (-1 < *(int *)(param_1 + 0x34) << 0xd) {
    FUN_4a02cb80(1,local_1c,param_1,(int)param_3[2],(int)param_3[3],(int)*param_3,(int)param_3[1],
                 local_24,local_28);
  }
  return;
}



// Address: 4a062074

void FUN_4a062074(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x3c)) {
      do {
        if (*(int *)(*(int *)(param_1 + 0x38) + iVar1 * 4) != 0) {
          thunk_FUN_4a0ecbf0();
          thunk_FUN_4a161530();
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x3c));
    }
    thunk_FUN_4a161530(*(undefined4 *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}



// Address: 4a0620b4

undefined4 FUN_4a0620b4(undefined4 param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int local_1c;
  int local_18;
  
  local_18 = 0;
  host_s3eConfigGetInt_thumb(PTR_DAT_4a062130,PTR_s_NoSharedTexels_4a06212c,&local_18);
  if (local_18 == 0) {
    pcVar3 = param_2 + param_3 + -2;
    pcVar4 = PTR_DAT_4a062134;
    for (; param_2 < pcVar3; param_2 = param_2 + 1) {
      cVar1 = *pcVar4;
      if (cVar1 == '#') {
        local_1c = 0;
        iVar2 = host_s3eConfigGetInt_thumb
                          (PTR_DAT_4a062130,PTR_s_AllowNoHashOnBaseSharedTextureNa_4a062138,
                           &local_1c);
        if ((iVar2 != 0) || (local_1c == 0)) {
          if (pcVar4[1] == '.') {
            return 0;
          }
          if (pcVar4[1] == '\0') {
            return 0;
          }
          *param_2 = '#';
          param_2 = param_2 + 1;
        }
        *param_2 = '\0';
        return 1;
      }
      if (cVar1 == '\0') {
        return 0;
      }
      *param_2 = cVar1;
      pcVar4 = pcVar4 + 1;
    }
  }
  return 0;
}



// Address: 4a06213c

void FUN_4a06213c(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 auStack_4c [8];
  undefined1 auStack_44 [28];
  uint local_28;
  int local_24;
  int *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  
  thunk_FUN_4a0ecbc4(auStack_4c);
  local_18 = (undefined1 *)(param_1 + 0x40);
  thunk_FUN_4a0ecab0(auStack_4c,*local_18);
  local_1c = auStack_44;
  iVar2 = thunk_FUN_4a0e6b6c();
  local_20 = *(int **)(param_1 + 0x58);
  uVar3 = (uint)(short)local_20[6];
  iVar9 = 0;
  if (uVar3 >> 0x10 == 0) {
    iVar9 = 0x10;
    uVar3 = uVar3 << 0x10;
  }
  if (uVar3 >> 0x18 == 0) {
    iVar9 = iVar9 + 8;
    uVar3 = uVar3 << 8;
  }
  if (uVar3 >> 0x1c == 0) {
    iVar9 = iVar9 + 4;
    uVar3 = uVar3 << 4;
  }
  if (uVar3 >> 0x1e == 0) {
    iVar9 = iVar9 + 2;
    uVar3 = uVar3 << 2;
  }
  if (-1 < (int)uVar3) {
    iVar9 = iVar9 + 1;
  }
  uVar3 = (0x1fU - iVar9 & 0xff) + 1;
  uVar4 = (uint)*(ushort *)(param_1 + 0x22);
  if (uVar4 == 1) {
    uVar10 = 0;
  }
  else {
    uVar10 = uVar4 - 1;
    iVar9 = 0;
    if (uVar10 >> 0x10 == 0) {
      iVar9 = 0x10;
      uVar10 = uVar10 * 0x10000;
    }
    if (uVar10 >> 0x18 == 0) {
      iVar9 = iVar9 + 8;
      uVar10 = uVar10 << 8;
    }
    if (uVar10 >> 0x1c == 0) {
      iVar9 = iVar9 + 4;
      uVar10 = uVar10 << 4;
    }
    if (uVar10 >> 0x1e == 0) {
      iVar9 = iVar9 + 2;
      uVar10 = uVar10 << 2;
    }
    if (-1 < (int)uVar10) {
      iVar9 = iVar9 + 1;
    }
    uVar10 = 0xffffffff >> iVar9;
  }
  uVar12 = uVar10 << (uVar3 & 0xff);
  uVar5 = iVar2 >> 4;
  if (0xf < iVar2) {
    uVar12 = uVar12 >> (uVar5 & 0xff);
  }
  uVar13 = (uint)*(ushort *)(param_1 + 0x20);
  if (uVar13 == 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = uVar13 - 1;
    iVar9 = 0;
    if (uVar6 >> 0x10 == 0) {
      iVar9 = 0x10;
      uVar6 = uVar6 * 0x10000;
    }
    if (uVar6 >> 0x18 == 0) {
      iVar9 = iVar9 + 8;
      uVar6 = uVar6 << 8;
    }
    if (uVar6 >> 0x1c == 0) {
      iVar9 = iVar9 + 4;
      uVar6 = uVar6 << 4;
    }
    if (uVar6 >> 0x1e == 0) {
      iVar9 = iVar9 + 2;
      uVar6 = uVar6 << 2;
    }
    if (-1 < (int)uVar6) {
      iVar9 = iVar9 + 1;
    }
    uVar6 = 0xffffffff >> iVar9;
  }
  if (iVar2 == 4) {
    uVar6 = uVar6 >> 1;
  }
  iVar9 = uVar4 - 1;
  if ((int)(uVar13 - 1) < iVar9) {
    iVar9 = uVar13 - 1;
  }
  local_24 = param_1 + 0x60;
  if (*(int *)(param_1 + 0x34) << 0xd < 0) {
    *(undefined1 *)(param_1 + 0x62) = 0;
  }
  else {
    iVar7 = 0;
    while (iVar8 = iVar7, iVar9 >> 1 != 0) {
      iVar8 = iVar7 + 1;
      iVar9 = iVar9 >> 2;
      if (iVar9 == 0) break;
      iVar7 = iVar7 + 2;
    }
    if (7 < iVar8) {
      iVar8 = 7;
    }
    *(char *)(param_1 + 0x62) = (char)iVar8;
  }
  iVar9 = ((uint)*(ushort *)(local_18 + 6) << (uVar3 & 0xff)) + *local_20;
  if (iVar2 == 0x20) {
    iVar7 = (uint)*(ushort *)(local_18 + 4) << 2;
LAB_4a06229a:
    iVar7 = iVar7 + iVar9;
  }
  else {
    if (iVar2 == 0x10) {
      iVar7 = (uint)*(ushort *)(local_18 + 4) << 1;
      goto LAB_4a06229a;
    }
    if (iVar2 == 8) {
      iVar7 = (uint)*(ushort *)(local_18 + 4) + iVar9;
    }
    else {
      iVar7 = (uint)(*(ushort *)(local_18 + 4) >> 1) + iVar9;
      if (iVar2 == 4) {
        *(uint *)(param_1 + 100) = uVar6 * 0x200000 + 0x100000 | uVar12;
        goto LAB_4a0622c8;
      }
    }
  }
  *(uint *)(param_1 + 100) = uVar6 << 0x14 | uVar12;
LAB_4a0622c8:
  *(int *)(param_1 + 0x68) = iVar7;
  iVar9 = local_20[1];
  uVar4 = 1;
  bVar11 = 0;
  if (*(char *)(param_1 + 0x62) != '\0') {
    bVar11 = 8;
  }
  if (1 < bVar11) {
    do {
      iVar7 = ((int)*(short *)(*(int *)(param_1 + 0x58) + 0x18) >> (uVar4 - 1 & 0xff)) *
              ((int)*(short *)(*(int *)(param_1 + 0x58) + 0x1a) >> (uVar4 & 0xff));
      uVar10 = uVar10 >> 1;
      if (iVar7 < 4) {
        iVar7 = 4;
      }
      uVar1 = *(ushort *)(local_18 + 6);
      uVar12 = (uint)(*(ushort *)(local_18 + 4) >> (uVar4 & 0xff));
      if (iVar2 == 4) {
        uVar12 = (int)uVar12 >> 1;
      }
      else if (iVar2 == 0x10) {
        uVar12 = uVar12 << 1;
      }
      else if (iVar2 == 0x20) {
        uVar12 = uVar12 << 2;
      }
      uVar13 = uVar10 << (uVar3 - uVar4 & 0xff);
      if (0xf < iVar2) {
        uVar13 = uVar13 >> (uVar5 & 0xff);
      }
      iVar8 = (int)uVar6 >> (uVar4 & 0xff);
      if (iVar2 == 4) {
        iVar8 = iVar8 * 2 + 1;
      }
      iVar14 = uVar4 * 8 + param_1;
      *(uint *)(iVar14 + 100) = iVar8 << 0x14 | uVar13;
      *(uint *)(iVar14 + 0x68) =
           ((uint)(uVar1 >> (uVar4 & 0xff)) << (uVar3 - uVar4 & 0xff)) + iVar9 + uVar12;
      uVar4 = uVar4 + 1;
      iVar8 = 0;
      if (*(char *)(param_1 + 0x62) != '\0') {
        iVar8 = 8;
      }
      iVar9 = iVar7 + iVar9;
      local_28 = uVar5;
    } while ((int)uVar4 < iVar8);
  }
  uVar3 = thunk_FUN_4a0e6b6c(local_1c);
  if ((uVar3 < 9) && (*(int *)(param_1 + 0xa4) == 0)) {
    iVar2 = thunk_FUN_4a09df0c(*(undefined4 *)PTR_DAT_4a0623a4,param_1,1);
    *(int *)(param_1 + 0xa4) = iVar2;
    *(bool *)(local_24 + 3) = 4 < *(int *)(iVar2 + 0x18);
    *(int *)(iVar2 + 0x14) = param_1;
  }
  thunk_FUN_4a0ecbf0(auStack_4c);
  return;
}



// Address: 4a0623a8

void FUN_4a0623a8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  
  puVar1 = PTR_DAT_4a062468;
  if (((param_2 != 0) || ((*(uint *)(param_1 + 0x34) & 1) != 0)) &&
     (**(int **)PTR_DAT_4a062468 << 0x18 < 0)) {
    uVar6 = DAT_4a06246c;
    if (-1 < *(int *)(param_1 + 0x34) << 2) {
      uVar6 = DAT_4a062470;
    }
    thunk_FUN_4a14fd70(uVar6,*(undefined4 *)(param_1 + 0xb4),param_3,param_4,param_4);
    puVar2 = PTR_DAT_4a062474;
    if ((*(int *)(*(int *)puVar1 + 0xc) == 2) && (iVar3 = host_s3eGLGetInt_thumb(0), 0x100 < iVar3))
    {
      FUN_4a1652ca(uVar6,DAT_4a062478,0,*(undefined4 *)puVar2);
    }
    iVar3 = *(int *)(param_1 + 0x34);
    uVar5 = (**(uint **)puVar1 & 0x7ffff) >> 0x12;
    if (iVar3 * 0x2000000 < 0) {
      iVar4 = DAT_4a06247c;
      iVar7 = DAT_4a06247c;
      if ((-1 < iVar3 << 0xd) && (iVar4 = DAT_4a062480, uVar5 == 0)) {
        iVar4 = DAT_4a062480 + -2;
      }
    }
    else {
      iVar4 = DAT_4a062488;
      iVar7 = DAT_4a062488;
      if (-1 < iVar3 << 0xd) {
        FUN_4a1652ca(uVar6,0x2800,DAT_4a062488,*(undefined4 *)puVar2);
        iVar3 = DAT_4a06248c;
        if (uVar5 == 0) {
          iVar3 = DAT_4a06248c + -2;
        }
        FUN_4a1652ca(uVar6,DAT_4a062484,iVar3,*(undefined4 *)puVar2);
        return;
      }
    }
    FUN_4a1652ca(uVar6,DAT_4a062484,iVar4,*(undefined4 *)puVar2);
    FUN_4a1652ca(uVar6,0x2800,iVar7,*(undefined4 *)puVar2);
  }
  return;
}



// Address: 4a0624ec

void FUN_4a0624ec(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x34) << 0x10 < 0) {
    iVar1 = thunk_FUN_4a0e6898(param_1 + 0x18);
    uVar2 = thunk_FUN_4a161570(iVar1 << 1);
    uVar3 = 0x16;
    if (iVar1 != 0x10) {
      uVar3 = 0x1c;
    }
    FUN_4a134b68(param_1,uVar2,uVar3);
    *param_2 = uVar2;
  }
  else {
    *param_2 = 0;
  }
  return;
}



// Address: 4a062528

void FUN_4a062528(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint local_18;
  
  local_18 = (uint)*(byte *)(param_1 + 0x40);
  iVar1 = thunk_FUN_4a0e71bc(&local_18);
  uVar2 = thunk_FUN_4a161570(iVar1 << 1);
  thunk_FUN_4a000f84(uVar2,**(undefined4 **)(param_1 + 0xa4),iVar1 << 1);
  *param_2 = uVar2;
  return;
}



// Address: 4a06255a

void FUN_4a06255a(int param_1)

{
  undefined1 auStack_2c [36];
  
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xfffffffe;
  thunk_FUN_4a0ecbc4(auStack_2c);
  thunk_FUN_4a0ecc0c(param_1 + 0x10,auStack_2c);
  FUN_4a070832(param_1 + 0x44);
  thunk_FUN_4a0ecbf0(auStack_2c);
  return;
}



// Address: 4a062594

void FUN_4a062594(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_4a061ec0(param_1,0,0x1e);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 8;
    return;
  }
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x10;
  return;
}



// Address: 4a0625c0

int FUN_4a0625c0(int param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  undefined *puVar2;
  short sVar3;
  short sVar4;
  undefined2 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  byte *pbVar12;
  undefined4 extraout_r1;
  uint uVar13;
  byte *pbVar14;
  uint extraout_r1_00;
  byte bVar15;
  undefined1 *puVar16;
  uint uVar17;
  byte bVar18;
  undefined2 *puVar19;
  int *piVar20;
  bool bVar21;
  undefined4 local_98;
  undefined4 local_94;
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  byte *local_80;
  undefined4 local_7c;
  undefined1 *local_78;
  int local_74;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  uint local_5c;
  int local_58;
  byte *local_54;
  undefined1 auStack_50 [8];
  int local_48 [2];
  ushort local_40;
  ushort local_3e;
  byte *local_38;
  int local_34;
  uint local_2c;
  int local_28;
  int local_24;
  int iStack_20;
  undefined4 local_1c;
  int local_18;
  
  iStack_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  thunk_FUN_4a0ecbc4(auStack_50);
  if (PTR_DAT_4a0629b8[2] != '\0') {
    FUN_4a1506f8(DAT_4a0629bc,1);
    FUN_4a0623a8(param_1,1);
    thunk_FUN_4a001134(&local_6c,PTR_DAT_4a0629c0,0x1c);
    puVar2 = PTR_DAT_4a0629b8;
    thunk_FUN_4a0066d8(*(int *)(PTR_DAT_4a0629b8 + 4) + 1,7);
    *(undefined4 *)(puVar2 + 4) = extraout_r1;
    thunk_FUN_4a150ac4(local_1c,0,DAT_4a0629c8,1);
LAB_4a062834:
    thunk_FUN_4a0ecbf0(auStack_50);
    return 0;
  }
  iVar6 = *(int *)PTR_DAT_4a0629cc;
  bVar21 = iVar6 == 0;
  do {
    if (bVar21) goto LAB_4a0627cc;
    bVar21 = true;
  } while ((-1 < *(int *)(iVar6 + 0xc) << 0x1d) ||
          (bVar21 = true, -1 < *(int *)(iVar6 + 0xc) << 0x1c));
  local_24 = iVar6 + 0xc0;
  local_58 = 0;
  local_54 = *(byte **)(*(int *)(iVar6 + 0xd8) + 0x14);
  for (piVar20 = *(int **)local_54;
      (int *)(*(int *)local_54 + *(int *)(local_54 + 4) * 4) != piVar20; piVar20 = piVar20 + 1) {
    piVar7 = (int *)*piVar20;
    bVar21 = *piVar7 == *(int *)(param_1 + 4);
    do {
      if (!bVar21) goto LAB_4a06278c;
      local_58 = 1;
      bVar21 = (char)piVar7[5] == '\0';
    } while (!bVar21);
    local_5c = FUN_4a135c66(**(undefined4 **)(local_24 + 0x18),piVar7[2],0);
    thunk_FUN_4a0ecbc4(&local_80);
    thunk_FUN_4a0ecab0(&local_80,*(undefined4 *)(*(int *)(local_5c + 0x2c) + 0x18));
    thunk_FUN_4a0e681c(local_18,&local_80,0);
    iVar6 = thunk_FUN_4a142b8c(local_18,0xff);
    if ((iVar6 != 0) || (iVar6 = thunk_FUN_4a142154(local_18), iVar6 != 0)) {
      thunk_FUN_4a0e5cc8(&local_80,0xff,0,0xff);
    }
    iVar6 = *piVar20;
    local_88._0_2_ = (short)*(undefined4 *)(iVar6 + 0xc);
    uVar1 = *(ushort *)(iVar6 + 0x16);
    local_88._2_2_ = (short)((uint)*(undefined4 *)(iVar6 + 0xc) >> 0x10);
    local_88 = CONCAT22(local_88._2_2_ + uVar1,(short)local_88 + uVar1);
    iVar8 = ((*(uint *)(iVar6 + 0x10) & 0xffff) + (uint)uVar1 * -2) * 0x10000;
    iVar6 = ((*(uint *)(iVar6 + 0x10) >> 0x10) + (uint)uVar1 * -2) * 0x10000;
    local_84 = (byte *)CONCAT22((short)((uint)iVar6 >> 0x10),(short)((uint)iVar8 >> 0x10));
    sVar4 = thunk_FUN_4a0066d8(iVar8 >> 0x10,*(undefined2 *)(param_1 + 0x20));
    local_8c = (int)sVar4;
    sVar4 = thunk_FUN_4a0066d8(iVar6 >> 0x10,*(undefined2 *)(param_1 + 0x22));
    local_90 = (int)sVar4;
    local_98 = local_88;
    local_94 = local_84;
    pbVar12 = local_94;
    if ((local_8c == 0) || (local_90 == 0)) {
      thunk_FUN_4a0ecbf0(&local_80);
      goto LAB_4a062834;
    }
    local_94._0_2_ = (short)local_84;
    iVar6 = (int)(short)local_94;
    local_94 = pbVar12;
    uVar5 = thunk_FUN_4a0015f0(iVar6,local_8c,&local_90);
    local_94 = (byte *)CONCAT22(local_94._2_2_,uVar5);
    uVar5 = thunk_FUN_4a0015f0((int)local_94._2_2_,local_90);
    local_94 = (byte *)CONCAT22(uVar5,(short)local_94);
    sVar4 = (short)local_98;
    sVar3 = local_98._2_2_;
    for (iVar6 = 0; iVar6 < local_8c; iVar6 = iVar6 + 1) {
      local_98 = CONCAT22(local_98._2_2_,(short)iVar6 * (short)local_94 + sVar4);
      for (iVar8 = 0; iVar8 < local_90; iVar8 = iVar8 + 1) {
        local_98 = CONCAT22((short)iVar8 * local_94._2_2_ + sVar3,(short)local_98);
        FUN_4a061fa0(*(undefined4 *)(local_5c + 0x2c),&local_80,&local_98);
      }
    }
    thunk_FUN_4a0ecbf0(&local_80);
LAB_4a06278c:
  }
  for (uVar9 = 0; uVar9 < *(uint *)(*(int *)(local_24 + 0x18) + 8); uVar9 = uVar9 + 1) {
    if (*(int *)(*(int *)(*(int *)(local_24 + 0x18) + 4) + uVar9 * 4) == *(int *)(param_1 + 4))
    goto LAB_4a0627c2;
  }
  uVar9 = 0xffffffff;
LAB_4a0627c2:
  if ((uVar9 == 0xffffffff) && (local_58 != 0)) goto LAB_4a062834;
LAB_4a0627cc:
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x10000000;
  if (*(int *)(local_18 + 0x18) == 0) {
    uVar5 = *(undefined2 *)(param_1 + 0x20);
    FUN_4a1506f8(DAT_4a0629bc,1);
    local_5c = 0;
    FUN_4a01d744(*(undefined4 *)(local_18 + 8),&local_54,&local_58,&local_5c);
    FUN_4a0623a8(param_1,1);
    FUN_4a04147c(*(undefined4 *)(param_1 + 0xb4),local_54,local_58,uVar5);
    goto LAB_4a062834;
  }
  iVar6 = FUN_4a0e7234(*(undefined4 *)(param_1 + 0x18));
  if (iVar6 != 0) {
    puVar19 = *(undefined2 **)(local_18 + 0x18);
    if ((puVar19 == (undefined2 *)0x0) || (iVar6 = FUN_4a0a7b24(*puVar19), iVar6 == 0))
    goto LAB_4a062834;
    FUN_4a1652d0(iVar6,param_1,local_1c,puVar19);
    if (puVar19[1] != 0) {
      FUN_4a0623a8(param_1,1);
    }
    thunk_FUN_4a0ecab0(auStack_50,*puVar19);
    goto LAB_4a062c3c;
  }
  if (((int)(*(uint *)(param_1 + 0x34) << 0x1c) < 0) &&
     ((int)((uint)*(ushort *)(local_18 + 4) << 0x13) < 0)) {
    *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xfffffff7 | 0x10;
  }
  FUN_4a060ddc(param_1,local_18,auStack_50);
  local_58 = 0;
  local_5c = (uint)local_3e;
  uVar9 = (uint)local_40;
  if ((-1 < *(int *)(param_1 + 0x34) << 0x1c) &&
     (iVar6 = thunk_FUN_4a142b8c(auStack_50,0xff), iVar6 != 0)) {
    *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 8;
  }
  FUN_4a14283c(auStack_50);
  local_54 = local_38;
  FUN_4a1506f8(DAT_4a0629bc,1);
  local_68 = 0;
  FUN_4a01d744(local_48[0],&local_60,&local_64,&local_68);
  if (local_68 == 0) {
    local_6c = 0;
    if ((*(int *)(param_1 + 0x34) << 0x1c < 0) &&
       (-1 < (int)((uint)*(ushort *)(local_18 + 4) << 0x13))) {
      local_6c = 1;
    }
    if (local_6c != 0) {
      thunk_FUN_4a0eb424(auStack_50,0x80,2);
    }
    FUN_4a0623a8(param_1,1);
    thunk_FUN_4a150348(DAT_4a062c50,&local_70);
    uVar13 = 0;
    if ((*(uint *)(param_1 + 0x34) & DAT_4a062c54) == 0) {
      uVar13 = *(uint *)PTR_DAT_4a062c58;
    }
    for (; (local_70 < local_40 >> (uVar13 & 0xff) || (local_70 < local_5c >> (uVar13 & 0xff)));
        uVar13 = uVar13 + 1) {
    }
    if (((local_60 == DAT_4a062c5c) && (local_64 == DAT_4a062c60)) &&
       (-1 < *(int *)(*(int *)PTR_DAT_4a062c64 + 0x5bc) << 0x1a)) {
      FUN_4a056f7c(local_54,local_5c * uVar9);
    }
    if (uVar13 == 0) {
      thunk_FUN_4a150ac4(local_1c,0,local_60,uVar9);
    }
    if (-1 < *(int *)(param_1 + 0x34) << 0xd) {
      iVar6 = *(int *)PTR_DAT_4a062c64;
      local_28 = iVar6 + 0x380;
      local_74 = *(int *)(iVar6 + 0x388);
      local_78 = *(undefined1 **)(iVar6 + 0x38c);
      local_7c = 0xffffffff;
      uVar10 = FUN_4a0a3a32(auStack_50,&local_7c);
      iVar6 = *(int *)PTR_DAT_4a062c64;
      pbVar12 = *(byte **)(iVar6 + 0x38c);
      if ((uint)(*(int *)(iVar6 + 0x380) - ((int)pbVar12 - *(int *)(iVar6 + 900))) < uVar10) {
        local_80 = (byte *)thunk_FUN_4a161570();
        local_84 = local_80;
      }
      else {
        *(byte **)(iVar6 + 0x388) = pbVar12;
        *(byte **)(iVar6 + 0x38c) = pbVar12 + (uVar10 + 3 & 0xfffffffc);
        local_80 = (byte *)0x0;
        local_84 = pbVar12;
      }
      FUN_4a0a3996(auStack_50,local_7c,local_84,local_6c);
      local_88 = local_5c;
      local_8c = 0;
      local_90 = FUN_4a142124(auStack_50);
      uVar10 = uVar9;
      while (iVar6 = local_8c, local_8c = local_8c + 1, (int)(local_88 | uVar10) >> 1 != 0) {
        uVar17 = (int)uVar10 >> 1;
        uVar10 = 1;
        if (uVar17 != 0) {
          uVar10 = uVar17;
        }
        uVar17 = (int)local_88 >> 1;
        local_88 = 1;
        if (0 < (int)uVar17) {
          local_88 = uVar17;
        }
        if ((*PTR_DAT_4a062c68 != '\0') && (local_64 == DAT_4a062c60)) {
          thunk_FUN_4a0015f0(iVar6,6);
          local_98 = uVar10 * local_88;
          local_2c = extraout_r1_00 - 2;
          pbVar12 = local_84;
          for (iVar6 = 0; iVar6 < (int)local_98; iVar6 = iVar6 + 1) {
            bVar15 = 0;
            if (2 < local_2c) {
              bVar15 = (*pbVar12 >> 1) + 0x7f;
            }
            bVar18 = 0;
            *pbVar12 = bVar15;
            bVar15 = 0;
            if ((extraout_r1_00 != 0) && (extraout_r1_00 < 4)) {
              bVar15 = (pbVar12[1] >> 1) + 0x7f;
            }
            pbVar12[1] = bVar15;
            if (3 < extraout_r1_00) {
              bVar18 = (pbVar12[2] >> 1) + 0x7f;
            }
            pbVar12[2] = bVar18;
            pbVar12 = pbVar12 + local_90;
          }
        }
        local_94 = (byte *)(local_90 * uVar10 * local_88);
        if ((int)uVar13 <= local_8c) {
          thunk_FUN_4a150ac4(local_1c,local_8c - uVar13,local_60,uVar10);
        }
        local_84 = local_84 + (int)local_94;
      }
      *(int *)(local_28 + 8) = local_74;
      *(undefined1 **)(local_28 + 0xc) = local_78;
      thunk_FUN_4a161530(local_80);
    }
    if (((local_60 == DAT_4a062c5c) && (local_64 == DAT_4a062c60)) &&
       (-1 < *(int *)(*(int *)PTR_DAT_4a062c64 + 0x5bc) << 0x1a)) {
      FUN_4a056f7c(local_54,local_5c * uVar9);
    }
  }
  else {
    *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x40000;
    FUN_4a0623a8(param_1,1);
    local_6c = FUN_4a142124(auStack_50);
    local_6c = local_68 * local_6c;
    if (local_68 == 0x10) {
      local_70 = uVar9 * local_5c >> 1;
    }
    else {
      local_70 = uVar9 * local_5c;
    }
    local_74 = local_6c + local_70;
    local_78 = (undefined1 *)thunk_FUN_4a161570();
    puVar16 = local_78;
    iVar6 = local_68;
    if (local_48[0] == 0x11) {
LAB_4a062932:
      uVar13 = 3;
LAB_4a06294a:
      while (iVar6 != 0) {
        for (uVar10 = 1; uVar10 <= uVar13; uVar10 = uVar10 + 1) {
          *puVar16 = *(undefined1 *)(local_34 + (uVar13 - uVar10));
          puVar16 = puVar16 + 1;
        }
        local_34 = local_34 + uVar13;
        iVar6 = iVar6 + -1;
      }
    }
    else {
      if (local_48[0] == 0x12) {
LAB_4a062928:
        uVar13 = 4;
        goto LAB_4a06294a;
      }
      if (local_48[0] == 0x17) goto LAB_4a062932;
      if (local_48[0] == 0x18) goto LAB_4a062928;
      uVar11 = thunk_FUN_4a0e71bc(local_48);
      thunk_FUN_4a000f84(local_78,local_34,uVar11);
    }
    if (local_68 == 0x10) {
      pbVar14 = local_78 + local_6c;
      pbVar12 = local_54;
      uVar13 = local_70;
      while (bVar21 = uVar13 != 0, uVar13 = uVar13 - 1, bVar21) {
        *pbVar14 = *pbVar12 << 4 | *pbVar12 >> 4;
        pbVar14 = pbVar14 + 1;
        pbVar12 = pbVar12 + 1;
      }
    }
    else {
      thunk_FUN_4a000f84(local_78 + local_6c,local_54,local_70);
    }
    thunk_FUN_4a14ff14(local_1c,0,local_60,uVar9);
    thunk_FUN_4a161530(local_78);
  }
  bVar18 = 0;
  for (bVar15 = 0; (uint)(1 << (uint)bVar15) < uVar9; bVar15 = bVar15 + 1) {
  }
  for (; (uint)(1 << (uint)bVar18) < local_5c; bVar18 = bVar18 + 1) {
  }
  *(byte *)(param_1 + 0xb8) = '\x10' - bVar15;
  *(byte *)(param_1 + 0xb9) = '\x10' - bVar18;
  if (local_58 != 0) {
    thunk_FUN_4a161530(local_58);
  }
LAB_4a062c3c:
  FUN_4a0623a8(param_1,1);
  thunk_FUN_4a0ecbf0(auStack_50);
  return local_48[0];
}



// Address: 4a062c6c

void FUN_4a062c6c(void)

{
  return;
}



// Address: 4a062c78

void FUN_4a062c78(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_5c [4];
  ushort local_58;
  undefined1 local_54;
  undefined1 auStack_38 [4];
  ushort local_34;
  undefined1 local_30;
  
  puVar1 = PTR_DAT_4a062de8;
  *(int *)(PTR_DAT_4a062de8 + 0xc) = param_1;
  if (*puVar1 == '\0') {
    if ((*(uint *)(param_1 + 0x34) & 1) == 0) {
      if (*(int *)(puVar1 + 4) != 0) {
        FUN_4a1652c6(param_1);
      }
      FUN_4a05506c(param_1);
      if (*(int *)(param_1 + 0x34) << 0x13 < 0) {
        FUN_4a061be8(param_1);
      }
      thunk_FUN_4a0ecbc4(auStack_38);
      thunk_FUN_4a0ecbc4(auStack_5c);
      if (*(int *)PTR_DAT_4a062dec != 0) {
        local_34 = local_34 | 0x800;
        local_58 = local_58 | 0x800;
      }
      if (*(int *)(param_1 + 0x34) << 0x12 < 0) {
        uVar5 = *(uint *)(puVar1 + 0x38);
        piVar3 = (int *)(((int)*(uint *)(puVar1 + 0x3c) >> 1) + param_1);
        if ((*(uint *)(puVar1 + 0x3c) & 1) != 0) {
          uVar5 = *(uint *)(*piVar3 + (uVar5 & 0xfffffffc));
        }
        FUN_4a1652c8(piVar3,auStack_38,uVar5);
      }
      if (*(int *)(param_1 + 0x34) << 0x11 < 0) {
        uVar5 = *(uint *)(puVar1 + 0x40);
        piVar3 = (int *)(((int)*(uint *)(puVar1 + 0x44) >> 1) + param_1);
        if ((*(uint *)(puVar1 + 0x44) & 1) != 0) {
          uVar5 = *(uint *)(*piVar3 + (uVar5 & 0xfffffffc));
        }
        FUN_4a1652c8(piVar3,auStack_5c,uVar5);
      }
      if (*(int *)(param_1 + 0x34) << 8 < 0) {
        iVar4 = **(int **)PTR_DAT_4a062df0 << 0x18;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x34) << 0x10;
      }
      if (-1 < iVar4) {
        thunk_FUN_4a0eb918(param_1 + 0x10);
        FUN_4a062074(param_1);
      }
      uVar5 = *(uint *)(param_1 + 0x34) | 1;
      *(uint *)(param_1 + 0x34) = uVar5;
      if ((int)(uVar5 * 0x40000) < 0) {
        *(undefined1 *)(param_1 + 0x40) = local_30;
        FUN_4a06213c(param_1);
      }
      if (*(int *)(param_1 + 0x34) << 0x11 < 0) {
        *(undefined1 *)(param_1 + 0x41) = local_54;
      }
      if (*(int *)(puVar1 + 8) != 0) {
        FUN_4a1652c6(param_1);
      }
      thunk_FUN_4a0ecbf0(auStack_5c);
      thunk_FUN_4a0ecbf0(auStack_38);
      return;
    }
  }
  else {
    FUN_4a061c94(param_1);
    if (*(int *)(puVar1 + 0x10) != 0) {
      uVar2 = thunk_FUN_4a0e71bc(param_1 + 0x18);
      iVar4 = *(int *)(param_1 + 0x18);
      if ((((iVar4 - 0x20U < 4) || (iVar4 == 0x27)) || (iVar4 == 0x34)) ||
         ((iVar4 == 0x2b || (iVar4 == 0x35)))) {
        iVar4 = *(int *)(param_1 + 0x30);
      }
      else {
        iVar4 = (uint)*(ushort *)(param_1 + 0x22) * (uint)*(ushort *)(param_1 + 0x24);
      }
      thunk_FUN_4a0e4d6c(param_1 + 0x10,*(undefined4 *)(*(int *)(puVar1 + 0x10) + 0x28),iVar4,
                         *(undefined4 *)(param_1 + 0x2c),uVar2);
      *(ushort *)(param_1 + 0x14) = *(ushort *)(param_1 + 0x14) & 0xfffe;
    }
    *(undefined4 *)(puVar1 + 0x10) = 0;
  }
  return;
}



// Address: 4a062df4

void FUN_4a062df4(int *param_1)

{
  int *piVar1;
  
  FUN_4a0605f4();
  FUN_4a061c94(param_1);
  piVar1 = *(int **)(PTR_DAT_4a062e28 + 0x10);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(PTR_DAT_4a062e28 + 0x10) = 0;
    FUN_4a1652c6(piVar1,*(undefined4 *)(*piVar1 + 0x3c));
  }
  FUN_4a1652c6(param_1,*(undefined4 *)(*param_1 + 0x3c));
  return;
}



// Address: 4a062e34

void FUN_4a062e34(int param_1)

{
  thunk_FUN_4a0eb8b8(param_1 + 0x10);
  return;
}



// Address: 4a062e42

void FUN_4a062e42(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  FUN_4a0a3ef6();
  iVar4 = *(int *)(param_1 + 0x58);
  if (iVar4 != 0) {
    uVar2 = *(uint *)(iVar4 + 0x40);
    uVar1 = 0;
    if (uVar2 != 0) {
LAB_4a062e60:
      if (*(int *)(*(int *)(iVar4 + 0x3c) + uVar1 * 4) != param_2) goto LAB_4a062e98;
      if (uVar1 < uVar2 - 1) {
        do {
          iVar3 = *(int *)(iVar4 + 0x3c);
          *(undefined4 *)(iVar3 + uVar1 * 4) = *(undefined4 *)(iVar3 + (uVar1 + 1) * 4);
          uVar1 = uVar1 + 1;
        } while (uVar1 < *(int *)(iVar4 + 0x40) - 1U);
      }
      uVar2 = *(uint *)(iVar4 + 0x40) - 1;
      for (uVar1 = uVar2; uVar1 < *(uint *)(iVar4 + 0x40); uVar1 = uVar1 + 1) {
      }
      *(uint *)(iVar4 + 0x40) = uVar2;
    }
LAB_4a062e9e:
    iVar4 = *(int *)(param_1 + 0x58);
    piVar6 = (int *)(iVar4 + 0x3c);
    uVar1 = *(uint *)(iVar4 + 0x44);
    uVar2 = *(int *)(iVar4 + 0x40) + 1;
    if (uVar1 < uVar2) {
      uVar5 = 2;
      if (0xf < uVar1) {
        uVar5 = uVar1 >> 3;
      }
      uVar5 = uVar5 + uVar2;
      if (uVar1 != uVar5) {
        *(uint *)(iVar4 + 0x44) = uVar5;
        if (uVar5 == 0) {
          FUN_4a0a6f48(*piVar6,4);
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_4a0a6ed8(*piVar6,uVar5 * 4,4);
        }
        *piVar6 = iVar3;
      }
    }
    *(int *)(*piVar6 + *(int *)(iVar4 + 0x40) * 4) = param_1;
    *(int *)(iVar4 + 0x40) = *(int *)(iVar4 + 0x40) + 1;
  }
  FUN_4a05503c(param_2,param_1);
  return;
LAB_4a062e98:
  uVar1 = uVar1 + 1;
  if (uVar2 <= uVar1) goto LAB_4a062e9e;
  goto LAB_4a062e60;
}



// Address: 4a062ef8

void FUN_4a062ef8(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_40 [18];
  ushort local_2e;
  ushort local_2c;
  int iStack_1c;
  undefined4 local_18;
  
  iVar3 = DAT_4a063080;
  puVar1 = PTR_DAT_4a063078;
  iStack_1c = param_1;
  local_18 = param_2;
  for (uVar5 = 0; uVar5 < *(uint *)(*(int *)puVar1 + 0x5b4); uVar5 = uVar5 + 1) {
    FUN_4a14fcc4(uVar5 + iVar3);
    thunk_FUN_4a14fd70(DAT_4a06307c,0);
  }
  if (*(int *)(param_1 + 0xb4) == -1) {
    thunk_FUN_4a1502c4(1,param_1 + 0xb4);
  }
  uVar2 = DAT_4a06307c;
  if ((int)(*(uint *)(param_1 + 0x34) << 2) < 0) {
    *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x80000;
    thunk_FUN_4a0ecbc4(auStack_40);
    thunk_FUN_4a0ecab0(auStack_40,*(undefined4 *)(param_1 + 0x18));
    thunk_FUN_4a0ebe9c(auStack_40,*(undefined2 *)(param_1 + 0x20));
    uVar2 = thunk_FUN_4a0066d8(*(undefined2 *)(param_1 + 0x22),6);
    thunk_FUN_4a0ecb88(auStack_40,uVar2);
    if (*(int *)(*(int *)puVar1 + 0xc) == 3) {
      thunk_FUN_4a14fd70(DAT_4a063080 + 0x53,*(undefined4 *)(param_1 + 0xb4));
      iVar3 = FUN_4a0e7234(*(undefined4 *)(param_1 + 0x18));
      iVar6 = DAT_4a063080 + 0x55;
      if (iVar3 == 0) {
        uVar5 = 0;
        do {
          uVar2 = FUN_4a14283c(auStack_40);
          thunk_FUN_4a0e4d6c(auStack_40,
                             *(int *)(param_1 + 0x28) + uVar5 * (uint)local_2e * (uint)local_2c,
                             uVar2,0,0);
          uVar2 = FUN_4a0625c0(param_1,uVar5 + iVar6,auStack_40);
          uVar5 = uVar5 + 1;
        } while (uVar5 < 6);
      }
      else {
        iVar3 = *(int *)(param_1 + 0x28) + 0x48;
        uVar5 = 0;
        do {
          iVar6 = *(int *)(iVar3 + 4);
          thunk_FUN_4a0e4d6c(auStack_40,iVar3,iVar6,0,0);
          uVar2 = FUN_4a0625c0(param_1,uVar5 + DAT_4a063080 + 0x55,auStack_40);
          iVar3 = iVar3 + iVar6;
          uVar5 = uVar5 + 1;
        } while (uVar5 < 6);
      }
    }
    else {
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xdfffffff;
      uVar2 = DAT_4a06307c;
      thunk_FUN_4a14fd70(DAT_4a06307c,*(undefined4 *)(param_1 + 0xb4));
      iVar3 = FUN_4a0e7234(*(undefined4 *)(param_1 + 0x18));
      if (iVar3 == 0) {
        uVar4 = FUN_4a14283c(auStack_40);
        iVar3 = *(int *)(param_1 + 0x28);
      }
      else {
        iVar3 = *(int *)(param_1 + 0x28) + 0x48;
        uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x4c);
      }
      thunk_FUN_4a0e4d6c(auStack_40,iVar3,uVar4,0,0);
      uVar2 = FUN_4a0625c0(param_1,uVar2,auStack_40);
    }
    thunk_FUN_4a0ecab0(local_18,uVar2);
    thunk_FUN_4a0ecbf0(auStack_40);
  }
  else {
    thunk_FUN_4a14fd70(DAT_4a06307c,*(undefined4 *)(param_1 + 0xb4));
    iVar3 = FUN_4a0625c0(param_1,uVar2,param_1 + 0x10);
    if (iVar3 != 0) {
      thunk_FUN_4a0ecab0(local_18,iVar3);
    }
  }
  return;
}



// Address: 4a063084

void FUN_4a063084(int param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_44;
  undefined4 uStack_40;
  int local_3c;
  undefined4 uStack_38;
  int local_34;
  undefined2 local_30;
  undefined4 local_2c;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  
  local_18 = param_1 + 0x44;
  thunk_FUN_4a00121c(local_18,100);
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined2 *)(param_1 + 0x46) = 0;
  FUN_4a061c94(param_1);
  FUN_4a06108c(param_1,param_2);
  uVar2 = thunk_FUN_4a0e6b6c(param_2 + 8);
  uStack_40 = *(undefined4 *)(param_2 + 0x1c);
  uStack_38 = *(undefined4 *)(param_2 + 8);
  local_44 = *(undefined4 *)(param_2 + 0x18);
  local_34 = ((*(int *)(param_1 + 0x34) << 0xd) >> 0x1f) + 1;
  local_3c = local_18;
  local_20 = local_44;
  local_1c = uStack_40;
  FUN_4a0a6500(*(undefined4 *)PTR_DAT_4a0631b4,*(undefined2 *)(param_2 + 0x10),
               *(undefined2 *)(param_2 + 0x14),*(undefined2 *)(param_2 + 0x12),uVar2);
  puVar1 = PTR_DAT_4a0631b8;
  iVar3 = *(int *)PTR_DAT_4a0631b8;
  if (iVar3 == 0) {
    if (-1 < *(int *)(param_1 + 0x34) << 0xd) {
      if (*(int *)(param_1 + 0x38) == 0) {
        FUN_4a0a62a0(*(undefined4 *)PTR_DAT_4a0631b4,local_18,param_2);
      }
      else {
        for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x3c); iVar3 = iVar3 + 1) {
          if (*(int *)(*(int *)(param_1 + 0x38) + iVar3 * 4) != 0) {
            thunk_FUN_4a0ecbc4(&local_44);
            thunk_FUN_4a0ecab0(&local_44,*(undefined4 *)(param_2 + 8));
            thunk_FUN_4a0e681c(*(undefined4 *)(*(int *)(param_1 + 0x38) + iVar3 * 4),&local_44,0);
            thunk_FUN_4a0e6918(&local_44,*(undefined4 *)(param_2 + 0x1c));
            FUN_4a0a648e(*(undefined4 *)PTR_DAT_4a0631b4,local_18,iVar3 + 1,local_2c,local_30);
            thunk_FUN_4a0ecbf0(&local_44);
          }
        }
      }
    }
    if ((int)(*(uint *)(param_1 + 0x34) << 0x1c) < 0) {
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 2;
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x34);
    uVar5 = uVar4 & 0xfffffeff;
    *(uint *)(param_1 + 0x34) = uVar5;
    uVar5 = uVar5 | *(uint *)(iVar3 + 0x34) & 0x1a;
    *(uint *)(param_1 + 0x34) = uVar5;
    if (((*(uint *)(iVar3 + 0x34) & 0x40000) != (uVar4 & 0x40000)) &&
       (*(int *)(*(int *)(iVar3 + 0x58) + 4) == 0)) {
      *(uint *)(param_1 + 0x34) = uVar5 | 0x40000;
    }
    *(undefined4 *)puVar1 = 0;
  }
  return;
}



// Address: 4a0631bc

void FUN_4a0631bc(int *param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint local_20;
  uint local_1c;
  uint *local_18;
  
  puVar1 = PTR_DAT_4a0633a0;
  FUN_4a06067c(param_1);
  uVar6 = param_1[0xd];
  FUN_4a03c12c(param_1 + 0xd,1,0x20,4);
  local_18 = (uint *)PTR_DAT_4a0633a4;
  uVar2 = param_1[0xd];
  param_1[0xd] = uVar2 | 0x200;
  if (*local_18 < DAT_4a0633a8) {
    uVar2 = uVar2 & 0xfffffffd | 0x200;
    param_1[0xd] = uVar2;
  }
  else {
    uVar2 = param_1[0xd];
  }
  uVar3 = uVar2 & 0xffff9fff | uVar6 & 0x6000;
  param_1[0xd] = uVar3;
  if ((int)(uVar3 << 0xe) < 0) {
    param_1[0xd] = uVar2 & 0xffff9fff | uVar6 & 0x4000;
  }
  if (*puVar1 == '\x01') {
    param_1[0xd] = param_1[0xd] & 0xfffffffe;
  }
  FUN_4a039b90(param_1 + 0x10,1,8,1);
  FUN_4a039b90((int)param_1 + 0x41,1,8,1);
  if (DAT_4a0633ac <= *local_18) {
    FUN_4a039a4c(param_1 + 0x2f,2,0xf,2);
  }
  if ((*puVar1 != '\0') && (*(int *)PTR_DAT_4a0633b0 != 0)) {
    if (param_1[0xd] << 8 < 0) {
      iVar4 = **(int **)PTR_DAT_4a0633b4 << 0x18;
    }
    else {
      iVar4 = param_1[0xd] << 0x10;
    }
    if (-1 < iVar4) {
      *(ushort *)(param_1 + 5) = *(ushort *)(param_1 + 5) | 0x800;
    }
  }
  if (-1 < param_1[0xd] << 6) {
    if (param_1[0xd] << 0x13 < 0) {
      FUN_4a03c12c(param_1 + 0x2c,1,0x20,4);
      thunk_FUN_4a0e8104(param_1 + 4);
    }
    else {
      thunk_FUN_4a0ec884(param_1 + 4);
      param_1[0xd] = param_1[0xd] & 0xffffefff;
    }
  }
  local_1c = (uint)(param_1[0xe] != 0);
  FUN_4a0365d4(&local_1c,1,1,1);
  if ((char)local_1c != '\0') {
    FUN_4a039aec(param_1 + 0xf,1,0x1f,4);
    if ((*puVar1 == '\x01') && (param_1[0xf] != 0)) {
      iVar4 = thunk_FUN_4a161570(param_1[0xf] << 2);
      param_1[0xe] = iVar4;
      thunk_FUN_4a00121c(iVar4,param_1[0xf] << 2);
    }
    iVar4 = 0;
    if (0 < param_1[0xf]) {
      do {
        iVar7 = iVar4 * 4;
        local_20 = (uint)(*(int *)(param_1[0xe] + iVar7) != 0);
        FUN_4a0365d4(&local_20,1,1,1);
        if ((char)local_20 != '\0') {
          if (*puVar1 == '\x01') {
            thunk_FUN_4a161570(0x24);
            uVar5 = thunk_FUN_4a0ecbc4();
            *(undefined4 *)(param_1[0xe] + iVar7) = uVar5;
          }
          thunk_FUN_4a0ec884(*(undefined4 *)(param_1[0xe] + iVar7));
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_1[0xf]);
    }
  }
  if ((DAT_4a0633b8 <= *local_18) && (param_1[0xd] << 0x15 < 0)) {
    if (*puVar1 == '\x01') {
      iVar4 = thunk_FUN_4a161570(0x80);
      param_1[0x2a] = iVar4;
    }
    else {
      iVar4 = param_1[0x2a];
    }
    FUN_4a03c12c(iVar4,0x20,0x20,4);
  }
  if ((*puVar1 == '\x01') && (param_1[0xd] << 0x1d < 0)) {
    FUN_4a1652c6(param_1,*(undefined4 *)(*param_1 + 0x3c));
  }
  return;
}



// Address: 4a0633c4

int FUN_4a0633c4(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  
  puVar2 = (undefined4 *)FUN_4a0606b4();
  puVar1 = PTR_PTR_4a063484;
  *(undefined2 *)(puVar2 + 3) = 0;
  *(undefined2 *)((int)puVar2 + 0xe) = 0;
  *puVar2 = puVar1;
  iVar3 = thunk_FUN_4a0ecbc4(puVar2 + 4);
  *(undefined4 *)(iVar3 + 0x24) = 0x304;
  iVar6 = iVar3 + -0x10;
  *(undefined4 *)(iVar3 + 0xa0) = 0;
  *(undefined1 *)(iVar3 + 0x30) = 0;
  *(undefined1 *)(iVar3 + 0x31) = 0;
  *(undefined4 *)(iVar3 + 0x28) = 0;
  *(undefined4 *)(iVar3 + 0x2c) = 0;
  *(undefined4 *)(iVar3 + 0x98) = 0;
  *(undefined4 *)(iVar3 + 0x48) = 0;
  *(undefined2 *)(iVar3 + 0xac) = 0x1000;
  puVar1 = PTR_DAT_4a063488;
  *(undefined2 *)(iVar3 + 0xae) = 0x1000;
  if (*puVar1 == '\0') {
    piVar4 = *(int **)PTR_DAT_4a06348c;
    if (*piVar4 << 0x1b < 0) {
      *(uint *)(iVar3 + 0x24) = *(uint *)(iVar3 + 0x24) | 0x2000;
      *(undefined4 *)(iVar3 + 0x9c) = 0;
    }
    uVar5 = *(uint *)(iVar3 + 0x24);
    if (*piVar4 << 0x18 < 0) {
      uVar5 = uVar5 | 0x4000;
      *(uint *)(iVar3 + 0x24) = uVar5;
    }
    if ((int)(uVar5 << 0x12) < 0) {
      uVar5 = *(uint *)(puVar1 + 0x18);
      piVar4 = (int *)(((int)*(uint *)(puVar1 + 0x1c) >> 1) + iVar6);
      if ((*(uint *)(puVar1 + 0x1c) & 1) != 0) {
        uVar5 = *(uint *)(*piVar4 + (uVar5 & 0xfffffffc));
      }
      FUN_4a1652c6(piVar4,uVar5);
    }
    if (*(int *)(iVar3 + 0x24) << 0x11 < 0) {
      uVar5 = *(uint *)(puVar1 + 0x20);
      piVar4 = (int *)(((int)*(uint *)(puVar1 + 0x24) >> 1) + iVar6);
      if ((*(uint *)(puVar1 + 0x24) & 1) != 0) {
        uVar5 = *(uint *)(*piVar4 + (uVar5 & 0xfffffffc));
      }
      FUN_4a1652c6(piVar4,uVar5);
    }
  }
  return iVar6;
}



// Address: 4a0634a8

void FUN_4a0634a8(undefined4 *param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  puVar1 = PTR_DAT_4a063540;
  *param_1 = PTR_PTR_4a06353c;
  if (*puVar1 == '\0') {
    if ((int)(param_1[0xd] << 0x12) < 0) {
      uVar4 = *(uint *)(puVar1 + 0x28);
      piVar2 = (int *)(((int)*(uint *)(puVar1 + 0x2c) >> 1) + (int)param_1);
      if ((*(uint *)(puVar1 + 0x2c) & 1) != 0) {
        uVar4 = *(uint *)(*piVar2 + (uVar4 & 0xfffffffc));
      }
      FUN_4a1652c6(piVar2,uVar4);
    }
    if ((int)(param_1[0xd] << 0x11) < 0) {
      uVar4 = *(uint *)(puVar1 + 0x30);
      piVar2 = (int *)(((int)*(uint *)(puVar1 + 0x34) >> 1) + (int)param_1);
      if ((*(uint *)(puVar1 + 0x34) & 1) != 0) {
        uVar4 = *(uint *)(*piVar2 + (uVar4 & 0xfffffffc));
      }
      FUN_4a1652c6(piVar2,uVar4);
    }
    thunk_FUN_4a0eb918(param_1 + 4);
    FUN_4a062074(param_1);
    if ((param_1[0xd] & 1) != 0) {
      FUN_4a054d64(param_1);
    }
    if ((int)(param_1[0xd] << 0x15) < 0) {
      thunk_FUN_4a161530(param_1[0x2a]);
    }
  }
  iVar3 = thunk_FUN_4a0ecbf0(param_1 + 4);
  FUN_4a0606ec(iVar3 + -0x10);
  return;
}



// Address: 4a0634b0

void FUN_4a0634b0(undefined4 *param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  puVar1 = PTR_DAT_4a063540;
  *param_1 = PTR_PTR_4a06353c;
  if (*puVar1 == '\0') {
    if ((int)(param_1[0xd] << 0x12) < 0) {
      uVar4 = *(uint *)(puVar1 + 0x28);
      piVar2 = (int *)(((int)*(uint *)(puVar1 + 0x2c) >> 1) + (int)param_1);
      if ((*(uint *)(puVar1 + 0x2c) & 1) != 0) {
        uVar4 = *(uint *)(*piVar2 + (uVar4 & 0xfffffffc));
      }
      FUN_4a1652c6(piVar2,uVar4);
    }
    if ((int)(param_1[0xd] << 0x11) < 0) {
      uVar4 = *(uint *)(puVar1 + 0x30);
      piVar2 = (int *)(((int)*(uint *)(puVar1 + 0x34) >> 1) + (int)param_1);
      if ((*(uint *)(puVar1 + 0x34) & 1) != 0) {
        uVar4 = *(uint *)(*piVar2 + (uVar4 & 0xfffffffc));
      }
      FUN_4a1652c6(piVar2,uVar4);
    }
    thunk_FUN_4a0eb918(param_1 + 4);
    FUN_4a062074(param_1);
    if ((param_1[0xd] & 1) != 0) {
      FUN_4a054d64(param_1);
    }
    if ((int)(param_1[0xd] << 0x15) < 0) {
      thunk_FUN_4a161530(param_1[0x2a]);
    }
  }
  iVar3 = thunk_FUN_4a0ecbf0(param_1 + 4);
  FUN_4a0606ec(iVar3 + -0x10);
  return;
}



// Address: 4a063544

undefined4 FUN_4a063544(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  
  iVar9 = *(int *)(*(int *)(param_1 + 0x3c) + param_2 * 4);
  if (*(int *)(iVar9 + 0x90) == 0) {
    iVar8 = 0;
    if (*(int *)(param_1 + 0x50) != 0) {
      iVar8 = *(int *)(*(int *)(param_1 + 0x50) + 8);
    }
    piVar1 = (int *)FUN_4a0c6fcc(*(undefined4 *)(iVar8 + param_2 * 4));
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))();
    }
    uVar2 = thunk_FUN_4a161570(0xc);
    piVar3 = (int *)FUN_4a0c4300(uVar2,*(undefined4 *)(param_1 + 0x24),piVar1);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0xc))();
    }
    uVar2 = thunk_FUN_4a161570(0xc);
    uVar4 = thunk_FUN_4a161570(0x14);
    uVar4 = FUN_4a0c707c(uVar4,*(undefined4 *)(PTR_PTR_4a06378c + 0x10));
    piVar5 = (int *)FUN_4a0c44b0(uVar2,piVar3,uVar4);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))();
    }
    iVar8 = FUN_4a0c4278(piVar5);
    if (iVar8 != 0) {
      FUN_4a0c42f8(piVar5);
      piVar6 = (int *)FUN_4a0c49e0();
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0xc))();
      }
      piVar7 = (int *)thunk_FUN_4a0c314c(piVar6);
      if (*(int **)(iVar9 + 0x90) != piVar7) {
        if (piVar7 != (int *)0x0) {
          (**(code **)(*piVar7 + 0xc))(piVar7);
        }
        piVar10 = *(int **)(iVar9 + 0x90);
        if ((piVar10 != (int *)0x0) && (iVar8 = (**(code **)(*piVar10 + 8))(piVar10), iVar8 != 0)) {
          (**(code **)(*piVar10 + 4))(piVar10);
        }
        *(int **)(iVar9 + 0x90) = piVar7;
      }
      if ((piVar6 != (int *)0x0) && (iVar8 = (**(code **)(*piVar6 + 8))(piVar6), iVar8 != 0)) {
        (**(code **)(*piVar6 + 4))(piVar6);
      }
    }
    if ((piVar5 != (int *)0x0) && (iVar8 = (**(code **)(*piVar5 + 8))(piVar5), iVar8 != 0)) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    if ((piVar3 != (int *)0x0) && (iVar8 = (**(code **)(*piVar3 + 8))(piVar3), iVar8 != 0)) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    if ((piVar1 != (int *)0x0) && (iVar8 = (**(code **)(*piVar1 + 8))(piVar1), iVar8 != 0)) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
  }
  return *(undefined4 *)(iVar9 + 0x90);
}



// Address: 4a063790

undefined4 FUN_4a063790(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int local_80 [2];
  undefined4 local_78;
  undefined *local_74 [2];
  int local_6c;
  int *local_68;
  undefined *local_60 [2];
  int local_58;
  undefined1 auStack_4c [12];
  undefined *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    return 0;
  }
  iStack_30 = param_1;
  uStack_2c = param_2;
  local_28 = param_3;
  local_34 = (int *)FUN_4a0c6fcc(param_3);
  if (local_34 != (int *)0x0) {
    (**(code **)(*local_34 + 0xc))();
  }
  FUN_4a0c4300(auStack_4c,*(undefined4 *)(param_1 + 0x24),local_34);
  iVar3 = FUN_4a0c42d0(auStack_4c);
  if (iVar3 == 0) {
    FUN_4a0c4860();
    piVar5 = local_34;
    if (local_34 == (int *)0x0) {
      return 1;
    }
    iVar3 = (**(code **)(*local_34 + 8))(local_34);
    goto joined_r0x4a063974;
  }
  local_38 = (int *)FUN_4a0c42f8(auStack_4c);
  if (local_38 != (int *)0x0) {
    (**(code **)(*local_38 + 0xc))();
  }
  uVar4 = thunk_FUN_4a161570(0x10);
  local_3c = (int *)FUN_4a0c9b64(uVar4,param_2);
  if (local_3c != (int *)0x0) {
    (**(code **)(*local_3c + 0xc))();
  }
  piVar5 = local_3c;
  if (local_3c[3] == 0) {
    if ((local_3c != (int *)0x0) && (iVar3 = (**(code **)(*local_3c + 8))(local_3c), iVar3 != 0)) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    piVar5 = local_38;
    if ((local_38 != (int *)0x0) && (iVar3 = (**(code **)(*local_38 + 8))(local_38), iVar3 != 0)) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    FUN_4a0c4860(auStack_4c);
    piVar5 = local_34;
    if (local_34 == (int *)0x0) {
      return 1;
    }
    iVar3 = (**(code **)(*local_34 + 8))(local_34);
    goto joined_r0x4a063974;
  }
  piVar5 = (int *)FUN_4a0c6bc0(local_60);
  local_40 = PTR_PTR_4a064220;
  piVar5[2] = 0;
  piVar5[3] = 0;
  *piVar5 = (int)local_40;
  iVar3 = FUN_4a15e080(0x2000);
  if (iVar3 == 0) {
    iVar3 = FUN_4a1669a8();
  }
  iVar6 = 0;
  do {
    local_78 = 0;
    *(undefined1 *)(iVar3 + iVar6) = 0;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x2000);
  thunk_FUN_4a161570(0x18);
  puVar7 = (undefined4 *)FUN_4a0c0628();
  puVar2 = PTR_PTR_4a064224;
  *puVar7 = PTR_PTR_4a064224;
  puVar7[3] = 1;
  puVar7[4] = 0x2000;
  puVar7[2] = iVar3;
  *(undefined1 *)(puVar7 + 5) = 1;
  if (puVar7 != (undefined4 *)0x0) {
    (**(code **)(puVar2 + 0xc))(puVar7);
  }
  (**(code **)(*piVar5 + 0x1c))(piVar5);
  piVar5[2] = 0x2000;
  piVar5[3] = (int)puVar7;
  piVar5 = (int *)FUN_4a0c9b48(local_3c);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))(piVar5);
  }
  bVar1 = false;
  iVar3 = (**(code **)(*piVar5 + 0x1c))(piVar5);
  while (iVar3 != 0) {
    piVar8 = (int *)(**(code **)(*piVar5 + 0x20))(piVar5);
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 0xc))();
    }
    uVar4 = FUN_4a0fad64(piVar8);
    puVar2 = PTR_PTR_4a064228;
    iVar3 = FUN_4a13e010(uVar4,*(undefined4 *)(PTR_PTR_4a064228 + 0xc));
    if ((iVar3 == 0) && (iVar3 = FUN_4a0facd4(piVar8), iVar3 == 0)) {
      uVar4 = FUN_4a0fad64(piVar8);
      iVar3 = FUN_4a13e010(uVar4,*(undefined4 *)(puVar2 + 4));
      if (iVar3 != 0) {
        bVar1 = true;
      }
      uVar4 = FUN_4a0fad64(piVar8);
      FUN_4a0c467c(local_80,auStack_4c,uVar4);
      piVar9 = (int *)FUN_4a0c42f8(local_80);
      if (piVar9 != (int *)0x0) {
        (**(code **)(*piVar9 + 0xc))();
      }
      piVar10 = (int *)FUN_4a0c3168(local_80);
      if (piVar10 != (int *)0x0) {
        (**(code **)(*piVar10 + 0xc))();
      }
      iVar3 = FUN_4a0c4278(piVar10);
      if (iVar3 == 0) {
        FUN_4a0c42d0(piVar10);
      }
      piVar11 = (int *)FUN_4a0c9adc(local_3c,piVar8);
      if (piVar11 != (int *)0x0) {
        (**(code **)(*piVar11 + 0xc))();
      }
      uVar4 = thunk_FUN_4a161570(0xc);
      piVar12 = (int *)FUN_4a0c2d5c(uVar4,piVar9);
      if (piVar12 != (int *)0x0) {
        (**(code **)(*piVar12 + 0xc))();
      }
      while (iVar3 = FUN_4a0be8a0(piVar11,local_60), 0 < iVar3) {
        (**(code **)(*piVar12 + 0x24))(piVar12,local_60,0,iVar3);
      }
      (**(code **)(*piVar11 + 0x20))(piVar11);
      (**(code **)(*piVar12 + 0x2c))(piVar12);
      if ((piVar12 != (int *)0x0) && (iVar3 = (**(code **)(*piVar12 + 8))(piVar12), iVar3 != 0)) {
        (**(code **)(*piVar12 + 4))(piVar12);
      }
      if ((piVar11 != (int *)0x0) && (iVar3 = (**(code **)(*piVar11 + 8))(piVar11), iVar3 != 0)) {
        (**(code **)(*piVar11 + 4))(piVar11);
      }
      if ((piVar10 != (int *)0x0) && (iVar3 = (**(code **)(*piVar10 + 8))(piVar10), iVar3 != 0)) {
        (**(code **)(*piVar10 + 4))(piVar10);
      }
      if ((piVar9 != (int *)0x0) && (iVar3 = (**(code **)(*piVar9 + 8))(piVar9), iVar3 != 0)) {
        (**(code **)(*piVar9 + 4))(piVar9);
      }
      FUN_4a0c4860(local_80);
      if (piVar8 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar8 + 8))(piVar8);
joined_r0x4a063aa0:
        if (iVar3 != 0) {
          (**(code **)(*piVar8 + 4))(piVar8);
        }
      }
    }
    else if (piVar8 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar8 + 8))(piVar8);
      goto joined_r0x4a063aa0;
    }
    iVar3 = (**(code **)(*piVar5 + 0x1c))(piVar5);
  }
  if ((piVar5 != (int *)0x0) && (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  if (bVar1) {
    piVar5 = (int *)FUN_4a0653e8(param_1,*(undefined4 *)(param_1 + 0x40),local_28);
    if (piVar5 == (int *)0x0) {
      FUN_4a0c7338(s_invalid_DLC_pack__4a06422c);
      local_60[0] = local_40;
      iVar3 = FUN_4a0bcc84(local_60);
      if (iVar3 != 0) {
        iVar6 = 0;
        if (0 < local_58) {
          do {
            iVar6 = iVar6 + 1;
          } while (iVar6 < local_58);
          if (iVar3 == 0) goto LAB_4a063ebc;
        }
        FUN_4a14f21c(iVar3);
      }
LAB_4a063ebc:
      FUN_4a0c6bf4(local_60);
      piVar5 = local_3c;
      if ((local_3c != (int *)0x0) && (iVar3 = (**(code **)(*local_3c + 8))(local_3c), iVar3 != 0))
      {
        (**(code **)(*piVar5 + 4))(piVar5);
      }
      piVar5 = local_38;
      if ((local_38 != (int *)0x0) && (iVar3 = (**(code **)(*local_38 + 8))(local_38), iVar3 != 0))
      {
        (**(code **)(*piVar5 + 4))(piVar5);
      }
      FUN_4a0c4860(auStack_4c);
      piVar5 = local_34;
      if (local_34 == (int *)0x0) {
        return 1;
      }
      iVar3 = (**(code **)(*local_34 + 8))(local_34);
joined_r0x4a063974:
      if (iVar3 != 0) {
        (**(code **)(*piVar5 + 4))(piVar5);
      }
      return 1;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + piVar5[0xd];
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + piVar5[0x12];
    iVar3 = *(int *)(param_1 + 0x34);
    if ((*(int *)(param_1 + 0x38) == iVar3) &&
       (iVar6 = *(int *)(param_1 + 0x30) + iVar3, iVar3 < iVar6)) {
      *(int *)(param_1 + 0x34) = iVar6;
      iVar13 = *(int *)(param_1 + 0x3c);
      iVar3 = thunk_FUN_4a161570(iVar6 * 4);
      *(int *)(param_1 + 0x3c) = iVar3;
      if (iVar3 != 0) {
        iVar3 = 0;
        if (0 < *(int *)(param_1 + 0x38)) {
          do {
            iVar6 = iVar3 + 1;
            *(undefined4 *)(*(int *)(param_1 + 0x3c) + iVar3 * 4) =
                 *(undefined4 *)(iVar13 + iVar3 * 4);
            iVar3 = iVar6;
          } while (iVar6 < *(int *)(param_1 + 0x38));
        }
        thunk_FUN_4a161530(iVar13);
      }
      iVar3 = *(int *)(param_1 + 0x38);
      if (iVar3 < *(int *)(param_1 + 0x34)) {
        do {
          iVar6 = iVar3 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x3c) + iVar3 * 4) = 0;
          iVar3 = iVar6;
        } while (iVar6 < *(int *)(param_1 + 0x34));
      }
    }
    iVar3 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x38) = iVar3 + 1;
    piVar8 = *(int **)(*(int *)(param_1 + 0x3c) + iVar3 * 4);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))();
    }
    *(int **)(*(int *)(param_1 + 0x3c) + iVar3 * 4) = piVar5;
    if ((piVar8 != (int *)0x0) && (iVar3 = (**(code **)(*piVar8 + 8))(piVar8), iVar3 != 0)) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    FUN_4a16be24(local_74);
    iVar3 = 0;
    if (1 < *(int *)(param_1 + 0x40)) {
      local_80[0] = *(int *)(param_1 + 0x40) + -1;
      FUN_4a0c740c(param_1 + 0x44,0,local_74);
    }
    iVar6 = local_6c;
    if (local_68 != (int *)0x0) {
      iVar3 = local_68[2];
    }
    *(undefined4 *)(iVar3 + (*(int *)(param_1 + 0x40) + -1) * 4) = local_28;
    if (local_68 != (int *)0x0) {
      (**(code **)(*local_68 + 0xc))(local_68);
    }
    (**(code **)(*(int *)(param_1 + 0x44) + 0x1c))((int *)(param_1 + 0x44));
    *(int *)(param_1 + 0x4c) = iVar6;
    *(int **)(param_1 + 0x50) = local_68;
    FUN_4a064604(param_1);
    FUN_4a0647b8(param_1);
    iVar3 = FUN_4a0ff494();
    uVar4 = FUN_4a06c1b0(iVar3 + 0x278);
    FUN_4a06c1f4(iVar3 + 0x278,uVar4);
    local_74[0] = PTR_PTR_4a064240;
    iVar3 = FUN_4a0bcc84(local_74);
    if (iVar3 != 0) {
      iVar6 = 0;
      if (0 < local_6c) {
        do {
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_6c);
        if (iVar3 == 0) goto LAB_4a0641c4;
      }
      FUN_4a14f21c(iVar3);
    }
LAB_4a0641c4:
    FUN_4a0c6bf4(local_74);
    local_60[0] = local_40;
    iVar3 = FUN_4a0bcc84(local_60);
    if (iVar3 != 0) {
      iVar6 = 0;
      if (0 < local_58) {
        do {
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_58);
        if (iVar3 == 0) goto LAB_4a064214;
      }
      FUN_4a14f21c(iVar3);
    }
LAB_4a064214:
    FUN_4a0c6bf4(local_60);
    piVar5 = local_3c;
    if ((local_3c != (int *)0x0) && (iVar3 = (**(code **)(*local_3c + 8))(local_3c), iVar3 != 0)) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    piVar5 = local_38;
    if ((local_38 != (int *)0x0) && (iVar3 = (**(code **)(*local_38 + 8))(local_38), iVar3 != 0)) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    FUN_4a0c4860(auStack_4c);
    piVar5 = local_34;
    if (local_34 == (int *)0x0) {
      return 0;
    }
    iVar3 = (**(code **)(*local_34 + 8))(local_34);
    goto joined_r0x4a0642e8;
  }
  local_60[0] = local_40;
  iVar3 = FUN_4a0bcc84(local_60);
  if (iVar3 != 0) {
    iVar6 = 0;
    if (0 < local_58) {
      do {
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_58);
      if (iVar3 == 0) goto LAB_4a063d8c;
    }
    FUN_4a14f21c(iVar3);
  }
LAB_4a063d8c:
  FUN_4a0c6bf4(local_60);
  piVar5 = local_3c;
  if ((local_3c != (int *)0x0) && (iVar3 = (**(code **)(*local_3c + 8))(local_3c), iVar3 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  piVar5 = local_38;
  if ((local_38 != (int *)0x0) && (iVar3 = (**(code **)(*local_38 + 8))(local_38), iVar3 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  FUN_4a0c4860(auStack_4c);
  piVar5 = local_34;
  if (local_34 == (int *)0x0) {
    return 0;
  }
  iVar3 = (**(code **)(*local_34 + 8))(local_34);
joined_r0x4a0642e8:
  if (iVar3 != 0) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  return 0;
}



// Address: 4a0642fc

undefined4 FUN_4a0642fc(void)

{
  return *(undefined4 *)(PTR_PTR_4a064308 + 0x14);
}



// Address: 4a06430c

undefined4 FUN_4a06430c(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x3c) + param_2 * 4) + 0xc);
}



// Address: 4a06431c

void FUN_4a06431c(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined1 auStack_54 [16];
  undefined *local_44 [2];
  int local_3c;
  undefined1 auStack_30 [12];
  
  FUN_4a0bedd4(auStack_30);
  FUN_4a0bebec(auStack_30,param_1 + 0x24);
  FUN_4a0bec10(auStack_30,*PTR_DAT_4a0645f8);
  uVar2 = thunk_FUN_4a161570(0x14);
  uVar2 = FUN_4a0c707c(uVar2,*(undefined4 *)PTR_PTR_4a0645fc);
  FUN_4a0beb78(auStack_30,uVar2);
  piVar3 = (int *)FUN_4a13cff4(auStack_30);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
  }
  uVar2 = thunk_FUN_4a161570(0x18);
  piVar4 = (int *)FUN_4a0c2adc(uVar2,piVar3);
  puVar1 = PTR_PTR_4a064600;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))();
    puVar1 = PTR_PTR_4a064600;
    iVar5 = FUN_4a0c28bc(piVar4);
    if (iVar5 != 0) {
      FUN_4a0bfc44(auStack_54,piVar4);
      uVar2 = FUN_4a0bf62c(auStack_54);
      *(undefined4 *)(param_1 + 0x40) = uVar2;
      iVar5 = FUN_4a16be24(local_44,uVar2);
      uVar2 = *(undefined4 *)(iVar5 + 8);
      piVar7 = *(int **)(iVar5 + 0xc);
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0xc))(piVar7);
      }
      (**(code **)(*(int *)(param_1 + 0x44) + 0x1c))((int *)(param_1 + 0x44));
      *(undefined4 *)(param_1 + 0x4c) = uVar2;
      *(int **)(param_1 + 0x50) = piVar7;
      local_44[0] = puVar1;
      iVar5 = FUN_4a0bcc84(local_44);
      if (iVar5 != 0) {
        iVar6 = 0;
        if (0 < local_3c) {
          do {
            iVar6 = iVar6 + 1;
          } while (iVar6 < local_3c);
          if (iVar5 == 0) goto LAB_4a06451c;
        }
        FUN_4a14f21c(iVar5);
      }
LAB_4a06451c:
      FUN_4a0c6bf4(local_44);
      iVar5 = 0;
      if (0 < *(int *)(param_1 + 0x40)) {
        do {
          uVar2 = FUN_4a0bf62c(auStack_54);
          if (*(int *)(param_1 + 0x50) == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(*(int *)(param_1 + 0x50) + 8);
          }
          *(undefined4 *)(iVar6 + iVar5 * 4) = uVar2;
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(param_1 + 0x40));
      }
      FUN_4a0bf60c(auStack_54);
      FUN_4a0bfcf4(auStack_54);
      goto LAB_4a064574;
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  iVar5 = FUN_4a16be24(local_44,0);
  uVar2 = *(undefined4 *)(iVar5 + 8);
  piVar7 = *(int **)(iVar5 + 0xc);
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0xc))(piVar7);
  }
  (**(code **)(*(int *)(param_1 + 0x44) + 0x1c))((int *)(param_1 + 0x44));
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  *(int **)(param_1 + 0x50) = piVar7;
  local_44[0] = puVar1;
  iVar5 = FUN_4a0bcc84(local_44);
  if (iVar5 != 0) {
    iVar6 = 0;
    if (0 < local_3c) {
      do {
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_3c);
      if (iVar5 == 0) goto LAB_4a064464;
    }
    FUN_4a14f21c(iVar5);
  }
LAB_4a064464:
  FUN_4a0c6bf4(local_44);
LAB_4a064574:
  if ((piVar4 != (int *)0x0) && (iVar5 = (**(code **)(*piVar4 + 8))(piVar4), iVar5 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  if ((piVar3 != (int *)0x0) && (iVar5 = (**(code **)(*piVar3 + 8))(piVar3), iVar5 != 0)) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  FUN_4a0bee50(auStack_30);
  return;
}



// Address: 4a064604

void FUN_4a064604(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [12];
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    FUN_4a0bedd4(auStack_24);
    FUN_4a0bebec(auStack_24,param_1 + 0x24);
    FUN_4a0bec10(auStack_24,*PTR_DAT_4a064794);
    uVar1 = thunk_FUN_4a161570(0x14);
    uVar1 = FUN_4a0c707c(uVar1,*(undefined4 *)PTR_PTR_4a064798);
    FUN_4a0beb78(auStack_24,uVar1);
    piVar2 = (int *)FUN_4a13cff4(auStack_24);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))();
    }
    uVar1 = thunk_FUN_4a161570(0xc);
    piVar3 = (int *)FUN_4a0c2d5c(uVar1,piVar2);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0xc))();
    }
    FUN_4a0c0198(auStack_30,piVar3);
    FUN_4a0bfed4(auStack_30,*(undefined4 *)(param_1 + 0x40));
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x40)) {
      do {
        if (*(int *)(param_1 + 0x50) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(*(int *)(param_1 + 0x50) + 8);
        }
        FUN_4a0bfed4(auStack_30,*(undefined4 *)(iVar4 + iVar5 * 4));
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_1 + 0x40));
    }
    FUN_4a0bfe18(auStack_30);
    FUN_4a0c0264(auStack_30);
    if ((piVar3 != (int *)0x0) && (iVar5 = (**(code **)(*piVar3 + 8))(piVar3), iVar5 != 0)) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    if ((piVar2 != (int *)0x0) && (iVar5 = (**(code **)(*piVar2 + 8))(piVar2), iVar5 != 0)) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    FUN_4a0bee50(auStack_24);
    return;
  }
  return;
}



// Address: 4a06479c

int FUN_4a06479c(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x68) + 8);
  }
  return (int)*(short *)(*(int *)(iVar1 + (param_2 & 0xffffbfff) * 4) + 4);
}



// Address: 4a0647b8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0647b8(int param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  int *piVar17;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined *apuStack_68 [2];
  int iStack_60;
  undefined **local_58;
  undefined *puStack_54;
  undefined1 auStack_50 [4];
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined *local_40;
  undefined *puStack_3c;
  int local_38;
  int iStack_34;
  undefined *local_2c;
  undefined *local_28;
  
  iVar14 = *(int *)(param_1 + 0x58);
  iVar15 = 0;
  piVar4 = (int *)FUN_4a0c6bc0(&local_40);
  piVar4[2] = 0;
  piVar4[3] = 0;
  local_28 = PTR_PTR_4a064cdc;
  *piVar4 = (int)PTR_PTR_4a064cdc;
  puVar2 = PTR_PTR_4a064cd8;
  local_2c = PTR_PTR_4a064ce0;
  if (0 < iVar14) {
    iVar5 = FUN_4a15e080(iVar14 << 2);
    if (iVar5 == 0) {
      iVar5 = FUN_4a1669a8();
    }
    iVar11 = 0;
    do {
      local_44 = 0;
      *(undefined4 *)(iVar5 + iVar11 * 4) = 0;
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar14);
    thunk_FUN_4a161570(0x18);
    puVar6 = (undefined4 *)FUN_4a0c0628();
    puVar6[3] = 4;
    puVar6[4] = iVar14;
    *puVar6 = local_2c;
    puVar6[2] = iVar5;
    *(undefined1 *)(puVar6 + 5) = 1;
    if (puVar6 != (undefined4 *)0x0) {
      (**(code **)(local_2c + 0xc))(puVar6);
    }
    (**(code **)(*piVar4 + 0x1c))(piVar4);
    piVar4[2] = iVar14;
    piVar4[3] = (int)puVar6;
  }
  iVar14 = piVar4[2];
  piVar4 = (int *)piVar4[3];
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))(piVar4);
  }
  (**(code **)(*(int *)(param_1 + 0x5c) + 0x1c))((int *)(param_1 + 0x5c));
  iVar5 = local_38;
  *(int *)(param_1 + 100) = iVar14;
  *(int **)(param_1 + 0x68) = piVar4;
  local_40 = local_28;
  iVar14 = FUN_4a0bcc84(&local_40);
  if (iVar14 != 0) {
    iVar11 = 0;
    if (0 < iVar5) {
      do {
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar5);
      if (iVar14 == 0) goto LAB_4a064920;
    }
    FUN_4a14f21c();
  }
LAB_4a064920:
  FUN_4a0c6bf4(&local_40);
  puVar3 = PTR_PTR_4a064ce4;
  iVar14 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    do {
      iVar5 = *(int *)(*(int *)(param_1 + 0x3c) + iVar14 * 4);
      puVar6 = (undefined4 *)FUN_4a0c6bc0(&puStack_54);
      *puVar6 = puVar2;
      puVar6[2] = *(undefined4 *)(iVar5 + 0x34);
      piVar4 = *(int **)(iVar5 + 0x38);
      puVar6[3] = piVar4;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0xc))();
      }
      iVar5 = local_4c;
      *puVar6 = puVar3;
      iVar11 = 0;
      if (0 < local_4c) {
        do {
          if (local_48 == 0) {
            iVar12 = 0;
          }
          else {
            iVar12 = *(int *)(local_48 + 8);
          }
          iVar7 = iVar11 + 1;
          if (*(int *)(param_1 + 0x68) == 0) {
            iVar13 = 0;
          }
          else {
            iVar13 = *(int *)(*(int *)(param_1 + 0x68) + 8);
          }
          *(int *)(iVar13 + iVar15 * 4) = iVar12 + iVar11 * 100;
          if (local_48 == 0) {
            iVar12 = 0;
          }
          else {
            iVar12 = *(int *)(local_48 + 8);
          }
          uVar1 = (ushort)iVar15;
          iVar15 = iVar15 + 1;
          *(ushort *)(iVar12 + iVar11 * 100 + 0x20) = uVar1 | 0x4000;
          iVar11 = iVar7;
        } while (iVar7 < local_4c);
      }
      local_58 = &puStack_54;
      puStack_54 = puVar3;
      iVar11 = FUN_4a0bcc84();
      if (iVar11 != 0) {
        iVar12 = 0;
        if (0 < iVar5) {
          do {
            (*(code *)**(undefined4 **)(iVar11 + iVar12 * 100))();
            iVar12 = iVar12 + 1;
          } while (iVar12 < iVar5);
          if (iVar11 == 0) goto LAB_4a064a48;
        }
        FUN_4a14f21c(iVar11);
      }
LAB_4a064a48:
      FUN_4a0c6bf4(local_58);
      iVar14 = iVar14 + 1;
    } while (iVar14 < *(int *)(param_1 + 0x40));
  }
  iVar15 = *(int *)(param_1 + 0x70);
  iVar14 = 0;
  piVar4 = (int *)FUN_4a0c6bc0(&local_40);
  puVar3 = PTR_PTR_4a064ce8;
  piVar4[2] = 0;
  piVar4[3] = 0;
  *piVar4 = (int)puVar3;
  if (0 < iVar15) {
    iVar5 = FUN_4a15e080(iVar15 << 2);
    if (iVar5 == 0) {
      iVar5 = FUN_4a1669a8();
    }
    iVar11 = 0;
    do {
      local_44 = 0;
      *(undefined4 *)(iVar5 + iVar11 * 4) = 0;
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar15);
    thunk_FUN_4a161570(0x18);
    puVar6 = (undefined4 *)FUN_4a0c0628();
    puVar6[3] = 4;
    puVar6[4] = iVar15;
    *puVar6 = local_2c;
    puVar6[2] = iVar5;
    *(undefined1 *)(puVar6 + 5) = 1;
    if (puVar6 != (undefined4 *)0x0) {
      (**(code **)(local_2c + 0xc))(puVar6);
    }
    (**(code **)(*piVar4 + 0x1c))(piVar4);
    piVar4[2] = iVar15;
    piVar4[3] = (int)puVar6;
  }
  iVar15 = piVar4[2];
  piVar4 = (int *)piVar4[3];
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))(piVar4);
  }
  (**(code **)(*(int *)(param_1 + 0x74) + 0x1c))((int *)(param_1 + 0x74));
  *(int *)(param_1 + 0x7c) = iVar15;
  *(int **)(param_1 + 0x80) = piVar4;
  local_40 = puVar3;
  iVar15 = FUN_4a0bcc84(&local_40);
  if (iVar15 != 0) {
    iVar5 = 0;
    if (0 < local_38) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_38);
      if (iVar15 == 0) goto LAB_4a064ba8;
    }
    FUN_4a14f21c();
  }
LAB_4a064ba8:
  FUN_4a0c6bf4(&local_40);
  puVar3 = PTR_PTR_4a064cec;
  iVar15 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    do {
      iVar5 = *(int *)(*(int *)(param_1 + 0x3c) + iVar15 * 4);
      puVar6 = (undefined4 *)FUN_4a0c6bc0(&puStack_54);
      *puVar6 = puVar2;
      puVar6[2] = *(undefined4 *)(iVar5 + 0x48);
      piVar4 = *(int **)(iVar5 + 0x4c);
      puVar6[3] = piVar4;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0xc))();
      }
      iVar5 = local_4c;
      *puVar6 = puVar3;
      iVar11 = 0;
      if (0 < local_4c) {
        do {
          if (local_48 == 0) {
            iVar12 = 0;
          }
          else {
            iVar12 = *(int *)(local_48 + 8);
          }
          iVar7 = iVar11 * 0x1c;
          iVar11 = iVar11 + 1;
          if (*(int *)(param_1 + 0x80) == 0) {
            iVar13 = 0;
          }
          else {
            iVar13 = *(int *)(*(int *)(param_1 + 0x80) + 8);
          }
          *(int *)(iVar13 + iVar14 * 4) = iVar12 + iVar7;
          iVar14 = iVar14 + 1;
        } while (iVar11 < local_4c);
      }
      local_58 = &puStack_54;
      puStack_54 = puVar3;
      iVar11 = FUN_4a0bcc84();
      if (iVar11 != 0) {
        iVar12 = 0;
        if (0 < iVar5) {
          do {
            (*(code *)**(undefined4 **)(iVar11 + iVar12 * 0x1c))();
            iVar12 = iVar12 + 1;
          } while (iVar12 < iVar5);
          if (iVar11 == 0) goto LAB_4a064cb0;
        }
        FUN_4a14f21c(iVar11);
      }
LAB_4a064cb0:
      FUN_4a0c6bf4(local_58);
      iVar15 = iVar15 + 1;
    } while (iVar15 < *(int *)(param_1 + 0x40));
  }
  iVar14 = FUN_4a077b38();
  if (*(int *)(iVar14 + 0x28) < 1) {
    return;
  }
  iVar15 = FUN_4a0642fc();
  puStack_54 = *(undefined **)(iVar15 + 0x40);
  if (*(undefined **)(iVar14 + 100) == puStack_54) {
                    /* WARNING: Could not recover jumptable at 0x4a07d44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  iVar15 = 0;
  puVar6 = (undefined4 *)0x0;
  if (0 < (int)*(undefined **)(iVar14 + 100)) {
    do {
      if (*(int *)(iVar14 + 0x68) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(iVar14 + 0x68) + 8);
      }
      iVar11 = 0;
      if (0 < *(int *)(iVar5 + iVar15 * 0x14 + 8)) {
        do {
          if (*(int *)(iVar14 + 0x68) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(*(int *)(iVar14 + 0x68) + 8);
          }
          iVar5 = *(int *)(iVar5 + iVar15 * 0x14 + 0xc);
          if (iVar5 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(iVar5 + 8);
          }
          piVar4 = *(int **)(iVar5 + iVar11 * 4);
          if ((piVar4 != (int *)0x0) && (iVar5 = (**(code **)(*piVar4 + 8))(piVar4), iVar5 != 0)) {
            (**(code **)(*piVar4 + 4))(piVar4);
          }
          iVar11 = iVar11 + 1;
          if (*(int *)(iVar14 + 0x68) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(*(int *)(iVar14 + 0x68) + 8);
          }
        } while (iVar11 < *(int *)(iVar5 + iVar15 * 0x14 + 8));
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < *(int *)(iVar14 + 100));
  }
  iVar15 = FUN_4a1684d4(&puStack_3c,puStack_54);
  uVar16 = *(undefined4 *)(iVar15 + 8);
  piVar4 = *(int **)(iVar15 + 0xc);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))(piVar4);
  }
  (**(code **)(*(int *)(iVar14 + 0x5c) + 0x1c))((int *)(iVar14 + 0x5c));
  *(undefined4 *)(iVar14 + 100) = uVar16;
  puStack_3c = PTR_PTR_4a07db48;
  *(int **)(iVar14 + 0x68) = piVar4;
  iVar15 = FUN_4a0bcc84(&puStack_3c);
  if (iVar15 != 0) {
    iVar5 = 0;
    if (0 < iStack_34) {
      do {
        (*(code *)**(undefined4 **)(iVar15 + iVar5 * 0x14))();
        iVar5 = iVar5 + 1;
      } while (iVar5 < iStack_34);
      if (iVar15 == 0) goto LAB_4a07d5cc;
    }
    FUN_4a14f21c(iVar15);
  }
LAB_4a07d5cc:
  FUN_4a0c6bf4(&puStack_3c);
  iVar15 = FUN_4a16be24(auStack_50,puStack_54);
  uVar16 = *(undefined4 *)(iVar15 + 8);
  piVar4 = *(int **)(iVar15 + 0xc);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))(piVar4);
  }
  (**(code **)(*(int *)(iVar14 + 0x70) + 0x1c))((int *)(iVar14 + 0x70));
  *(undefined4 *)(iVar14 + 0x78) = uVar16;
  *(int **)(iVar14 + 0x7c) = piVar4;
  FUN_4a16bef4(auStack_50);
  puVar2 = PTR_PTR_4a07db50;
  iVar15 = 0;
  if ((int)puStack_54 < 1) {
                    /* WARNING: Could not recover jumptable at 0x4a07d640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  local_28 = PTR_PTR_4a07db4c;
  do {
    puVar10 = puVar6;
    if (*(int *)(iVar14 + 0x7c) != 0) {
      puVar10 = *(undefined4 **)(*(int *)(iVar14 + 0x7c) + 8);
    }
    puVar10[iVar15] = 0;
    puVar10 = puVar6;
    if (*(int *)(iVar14 + 0x68) != 0) {
      puVar10 = *(undefined4 **)(*(int *)(iVar14 + 0x68) + 8);
    }
    piVar17 = puVar10 + iVar15 * 5;
    piVar4 = (int *)FUN_4a0c6bc0(apuStack_68);
    piVar4[2] = 0;
    piVar4[3] = 0;
    *piVar4 = (int)puVar2;
    iVar5 = FUN_4a15e080(0x2c);
    if (iVar5 == 0) {
      iVar5 = FUN_4a1669a8();
    }
    iVar11 = 0;
    do {
      *(undefined4 *)(iVar5 + iVar11 * 4) = 0;
      iVar11 = iVar11 + 1;
    } while (iVar11 < 0xb);
    thunk_FUN_4a161570(0x18,0xb);
    piVar8 = (int *)FUN_4a0c0628();
    piVar8[3] = 4;
    piVar8[4] = 0xb;
    *piVar8 = (int)local_28;
    piVar8[2] = iVar5;
    *(undefined1 *)(piVar8 + 5) = 1;
    if (piVar8 != (int *)0x0) {
      (**(code **)(local_28 + 0xc))(piVar8);
    }
    (**(code **)(*piVar4 + 0x1c))(piVar4);
    piVar4[2] = 0xb;
    piVar4[3] = (int)piVar8;
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 0xc))(piVar8);
    }
    (**(code **)(*piVar17 + 0x1c))(piVar17);
    iVar5 = iStack_60;
    piVar17[2] = 0xb;
    piVar17[3] = (int)piVar8;
    apuStack_68[0] = puVar2;
    iVar11 = FUN_4a0bcc84(apuStack_68);
    if (iVar11 != 0) {
      iVar12 = 0;
      if (0 < iVar5) {
        do {
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar5);
        if (iVar11 == 0) goto LAB_4a07d7b0;
      }
      FUN_4a14f21c(iVar11);
    }
LAB_4a07d7b0:
    FUN_4a0c6bf4(apuStack_68);
    puVar10 = puVar6;
    if (*(int *)(iVar14 + 0x2c) != 0) {
      puVar10 = *(undefined4 **)(*(int *)(iVar14 + 0x2c) + 8);
    }
    uVar16 = FUN_4a0b75a8(puVar10[3]);
    puVar10 = puVar6;
    if (*(int *)(iVar14 + 0x68) != 0) {
      puVar10 = *(undefined4 **)(*(int *)(iVar14 + 0x68) + 8);
    }
    puVar9 = puVar6;
    if (puVar10[iVar15 * 5 + 3] != 0) {
      puVar9 = *(undefined4 **)(puVar10[iVar15 * 5 + 3] + 8);
    }
    *puVar9 = uVar16;
    puVar10 = puVar6;
    if (*(int *)(iVar14 + 0x2c) != 0) {
      puVar10 = *(undefined4 **)(*(int *)(iVar14 + 0x2c) + 8);
    }
    uVar16 = FUN_4a0b75a8(puVar10[5]);
    puVar10 = puVar6;
    if (*(int *)(iVar14 + 0x68) != 0) {
      puVar10 = *(undefined4 **)(*(int *)(iVar14 + 0x68) + 8);
    }
    puVar9 = puVar6;
    if (puVar10[iVar15 * 5 + 3] != 0) {
      puVar9 = *(undefined4 **)(puVar10[iVar15 * 5 + 3] + 8);
    }
    puVar9[2] = uVar16;
    puVar10 = puVar6;
    if (*(int *)(iVar14 + 0x2c) != 0) {
      puVar10 = *(undefined4 **)(*(int *)(iVar14 + 0x2c) + 8);
    }
    uVar16 = FUN_4a0b75a8(puVar10[7]);
    puVar10 = puVar6;
    if (*(int *)(iVar14 + 0x68) != 0) {
      puVar10 = *(undefined4 **)(*(int *)(iVar14 + 0x68) + 8);
    }
    puVar9 = puVar6;
    if (puVar10[iVar15 * 5 + 3] != 0) {
      puVar9 = *(undefined4 **)(puVar10[iVar15 * 5 + 3] + 8);
    }
    puVar9[4] = uVar16;
    puVar10 = puVar6;
    if (*(int *)(iVar14 + 0x2c) != 0) {
      puVar10 = *(undefined4 **)(*(int *)(iVar14 + 0x2c) + 8);
    }
    uVar16 = FUN_4a0b75a8(puVar10[8]);
    puVar10 = puVar6;
    if (*(int *)(iVar14 + 0x68) != 0) {
      puVar10 = *(undefined4 **)(*(int *)(iVar14 + 0x68) + 8);
    }
    puVar9 = puVar6;
    if (puVar10[iVar15 * 5 + 3] != 0) {
      puVar9 = *(undefined4 **)(puVar10[iVar15 * 5 + 3] + 8);
    }
    puVar9[5] = uVar16;
    puVar10 = puVar6;
    if (*(int *)(iVar14 + 0x2c) != 0) {
      puVar10 = *(undefined4 **)(*(int *)(iVar14 + 0x2c) + 8);
    }
    uVar16 = FUN_4a0b75a8(puVar10[6]);
    puVar10 = puVar6;
    if (*(int *)(iVar14 + 0x68) != 0) {
      puVar10 = *(undefined4 **)(*(int *)(iVar14 + 0x68) + 8);
    }
    puVar9 = puVar6;
    if (puVar10[iVar15 * 5 + 3] != 0) {
      puVar9 = *(undefined4 **)(puVar10[iVar15 * 5 + 3] + 8);
    }
    puVar9[3] = uVar16;
    puVar10 = puVar6;
    if (*(int *)(iVar14 + 0x2c) != 0) {
      puVar10 = *(undefined4 **)(*(int *)(iVar14 + 0x2c) + 8);
    }
    uVar16 = FUN_4a0b75a8(puVar10[4]);
    puVar10 = puVar6;
    if (*(int *)(iVar14 + 0x68) != 0) {
      puVar10 = *(undefined4 **)(*(int *)(iVar14 + 0x68) + 8);
    }
    puVar9 = puVar6;
    if (puVar10[iVar15 * 5 + 3] != 0) {
      puVar9 = *(undefined4 **)(puVar10[iVar15 * 5 + 3] + 8);
    }
    puVar9[1] = uVar16;
    puVar10 = puVar6;
    if (*(int *)(iVar14 + 0x2c) != 0) {
      puVar10 = *(undefined4 **)(*(int *)(iVar14 + 0x2c) + 8);
    }
    uVar16 = FUN_4a0b75a8(puVar10[3]);
    puVar10 = puVar6;
    if (*(int *)(iVar14 + 0x68) != 0) {
      puVar10 = *(undefined4 **)(*(int *)(iVar14 + 0x68) + 8);
    }
    puVar9 = puVar6;
    if (puVar10[iVar15 * 5 + 3] != 0) {
      puVar9 = *(undefined4 **)(puVar10[iVar15 * 5 + 3] + 8);
    }
    puVar9[6] = uVar16;
    puVar10 = puVar6;
    if (*(int *)(iVar14 + 0x2c) != 0) {
      puVar10 = *(undefined4 **)(*(int *)(iVar14 + 0x2c) + 8);
    }
    uVar16 = FUN_4a0b75a8(puVar10[6]);
    puVar10 = puVar6;
    if (*(int *)(iVar14 + 0x68) != 0) {
      puVar10 = *(undefined4 **)(*(int *)(iVar14 + 0x68) + 8);
    }
    puVar9 = puVar6;
    if (puVar10[iVar15 * 5 + 3] != 0) {
      puVar9 = *(undefined4 **)(puVar10[iVar15 * 5 + 3] + 8);
    }
    puVar9[7] = uVar16;
    puVar10 = puVar6;
    if (*(int *)(iVar14 + 0x68) != 0) {
      puVar10 = *(undefined4 **)(*(int *)(iVar14 + 0x68) + 8);
    }
    puVar9 = puVar6;
    if (puVar10[iVar15 * 5 + 3] != 0) {
      puVar9 = *(undefined4 **)(puVar10[iVar15 * 5 + 3] + 8);
    }
    FUN_4a0afe78(puVar9[7],6);
    puVar10 = puVar6;
    if (*(int *)(iVar14 + 0x2c) != 0) {
      puVar10 = *(undefined4 **)(*(int *)(iVar14 + 0x2c) + 8);
    }
    uVar16 = FUN_4a0b75a8(puVar10[7]);
    puVar10 = puVar6;
    if (*(int *)(iVar14 + 0x68) != 0) {
      puVar10 = *(undefined4 **)(*(int *)(iVar14 + 0x68) + 8);
    }
    puVar9 = puVar6;
    if (puVar10[iVar15 * 5 + 3] != 0) {
      puVar9 = *(undefined4 **)(puVar10[iVar15 * 5 + 3] + 8);
    }
    puVar9[8] = uVar16;
    puVar10 = puVar6;
    if (*(int *)(iVar14 + 0x2c) != 0) {
      puVar10 = *(undefined4 **)(*(int *)(iVar14 + 0x2c) + 8);
    }
    uVar16 = FUN_4a0b75a8(puVar10[3]);
    puVar10 = puVar6;
    if (*(int *)(iVar14 + 0x68) != 0) {
      puVar10 = *(undefined4 **)(*(int *)(iVar14 + 0x68) + 8);
    }
    puVar9 = puVar6;
    if (puVar10[iVar15 * 5 + 3] != 0) {
      puVar9 = *(undefined4 **)(puVar10[iVar15 * 5 + 3] + 8);
    }
    puVar9[9] = uVar16;
    puVar10 = puVar6;
    if (*(int *)(iVar14 + 0x2c) != 0) {
      puVar10 = *(undefined4 **)(*(int *)(iVar14 + 0x2c) + 8);
    }
    uVar16 = FUN_4a0b75a8(puVar10[5]);
    iVar5 = 0;
    puVar10 = puVar6;
    if (*(int *)(iVar14 + 0x68) != 0) {
      puVar10 = *(undefined4 **)(*(int *)(iVar14 + 0x68) + 8);
    }
    puVar9 = puVar6;
    if (puVar10[iVar15 * 5 + 3] != 0) {
      puVar9 = *(undefined4 **)(puVar10[iVar15 * 5 + 3] + 8);
    }
    puVar9[10] = uVar16;
    puVar10 = puVar6;
    if (*(int *)(iVar14 + 0x68) != 0) {
      puVar10 = *(undefined4 **)(*(int *)(iVar14 + 0x68) + 8);
    }
    if (0 < (int)puVar10[iVar15 * 5 + 2]) {
      do {
        puVar10 = puVar6;
        if (*(int *)(iVar14 + 0x68) != 0) {
          puVar10 = *(undefined4 **)(*(int *)(iVar14 + 0x68) + 8);
        }
        puVar9 = puVar6;
        if (puVar10[iVar15 * 5 + 3] != 0) {
          puVar9 = *(undefined4 **)(puVar10[iVar15 * 5 + 3] + 8);
        }
        if ((int *)puVar9[iVar5] != (int *)0x0) {
          (**(code **)(*(int *)puVar9[iVar5] + 0xc))();
        }
        iVar5 = iVar5 + 1;
        puVar10 = puVar6;
        if (*(int *)(iVar14 + 0x68) != 0) {
          puVar10 = *(undefined4 **)(*(int *)(iVar14 + 0x68) + 8);
        }
      } while (iVar5 < (int)puVar10[iVar15 * 5 + 2]);
    }
    iVar15 = iVar15 + 1;
    if ((int)puStack_54 <= iVar15) {
      return;
    }
  } while( true );
}



// Address: 4a064cf0

undefined4 FUN_4a064cf0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x68) + 8);
  }
  return *(undefined4 *)(*(int *)(iVar1 + (param_2 & 0xffffbfff) * 4) + 0x24);
}



// Address: 4a064d0c

int FUN_4a064d0c(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x40);
  if (param_2 < 2 || param_2 == 8) {
    iVar2 = 0;
    iVar1 = 0;
    if (0 < iVar3) {
      do {
        iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x3c) + iVar1 * 4) + 0x88);
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(iVar4 + 8);
        }
        iVar4 = *(int *)(iVar4 + param_2 * 0x14 + 0xc);
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(iVar4 + 8);
        }
        if (param_3 - iVar2 < *(int *)(iVar4 + 8)) {
          if (param_4 != 0) {
            iVar1 = param_3 - iVar2;
          }
          return iVar1;
        }
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + *(int *)(iVar4 + 8);
      } while (iVar1 < iVar3);
    }
  }
  iVar2 = 0;
  iVar1 = 0;
  if (0 < iVar3) {
    do {
      iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x3c) + iVar1 * 4) + 0x60);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar4 + 8);
      }
      iVar4 = *(int *)(iVar4 + param_2 * 0x14 + 8);
      if (param_3 - iVar2 < iVar4) {
        if (param_4 != 0) {
          iVar1 = param_3 - iVar2;
        }
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + iVar4;
    } while (iVar1 < iVar3);
  }
  return -1;
}



// Address: 4a064e04

undefined4 FUN_4a064e04(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x3c) + param_2 * 4) + 8);
}



// Address: 4a064e14

int FUN_4a064e14(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    do {
      if (*(int *)(*(int *)(*(int *)(param_1 + 0x3c) + iVar1 * 4) + 8) == param_2) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x40));
  }
  return -1;
}



// Address: 4a064e50

int FUN_4a064e50(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  if (0 < param_3) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x3c) + iVar2 * 4);
      if (param_2 < 2 || param_2 == 8) {
        iVar1 = *(int *)(iVar1 + 0x88);
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(iVar1 + 8);
        }
        iVar1 = *(int *)(iVar1 + param_2 * 0x14 + 0xc);
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(iVar1 + 8);
        }
        iVar1 = *(int *)(iVar1 + 8);
      }
      else {
        iVar1 = *(int *)(iVar1 + 0x60);
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(iVar1 + 8);
        }
        iVar1 = *(int *)(iVar1 + param_2 * 0x14 + 8);
      }
      iVar3 = iVar3 + iVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  return iVar3 + param_4;
}



// Address: 4a064ee8

undefined4 FUN_4a064ee8(undefined *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  do {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x40)) {
      do {
        if (*(int *)(*(int *)(*(int *)(param_1 + 0x3c) + iVar2 * 4) + 8) == param_2)
        goto LAB_4a064f24;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x40));
    }
    iVar2 = -1;
LAB_4a064f24:
    if (iVar2 != -1) {
      return *(undefined4 *)(*(int *)(param_1 + 0x3c) + iVar2 * 4);
    }
    if (param_1[0x20] != '\0') {
      return 0;
    }
    param_1 = PTR_DAT_4a064fa0;
    if (((*(uint *)(PTR_PTR_4a064f98 + 0x18) & 1) == 0) &&
       (iVar2 = thunk_FUN_4a1491bc(PTR_DAT_4a064f9c), param_1 = PTR_DAT_4a064fa0, iVar2 != 0)) {
      uVar1 = FUN_4a067678(PTR_DAT_4a064fa0,1);
      thunk_FUN_4a1490b0(uVar1,PTR_FUN_4a064fa8,PTR_DAT_4a064fa4);
      param_1 = PTR_DAT_4a064fa0;
    }
  } while( true );
}



// Address: 4a064fac

int FUN_4a064fac(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_r4;
  int unaff_r5;
  int iVar5;
  int unaff_r6;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x40);
  iVar5 = 0;
  if (1 < param_2 && param_2 != 8) {
    iVar1 = 0;
    iVar2 = 0;
    if (0 < iVar7) {
      do {
        iVar6 = *(int *)(*(int *)(param_1 + 0x3c) + iVar2 * 4);
        iVar3 = *(int *)(iVar6 + 0x60);
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(iVar3 + 8);
        }
        iVar3 = *(int *)(iVar3 + param_2 * 0x14 + 8);
        if (param_3 - iVar1 < iVar3) {
          iVar7 = *(int *)(iVar6 + 0x88);
          if (iVar7 == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(iVar7 + 8);
          }
          iVar7 = *(int *)(iVar7 + param_2 * 0x14 + 0xc);
          if (iVar7 != 0) {
            iVar5 = *(int *)(iVar7 + 8);
          }
          return *(int *)(iVar5 + (param_3 - iVar1) * 0x14 + 8);
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + iVar3;
      } while (iVar2 < iVar7);
    }
    return 0;
  }
  iVar2 = param_2 * 5;
  if (iVar7 < 1) {
    iVar2 = unaff_r4;
    iVar5 = unaff_r5;
    param_1 = unaff_r6;
  }
  iVar1 = 0;
  iVar3 = 0;
  if (0 < iVar7) {
    do {
      iVar6 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x3c) + iVar6) + 0x88);
      iVar6 = iVar5;
      if (iVar4 != 0) {
        iVar6 = *(int *)(iVar4 + 8);
      }
      iVar4 = *(int *)(iVar6 + iVar2 * 4 + 0xc);
      iVar6 = iVar5;
      if (iVar4 != 0) {
        iVar6 = *(int *)(iVar4 + 8);
      }
      iVar1 = iVar1 + *(int *)(iVar6 + param_3 * 0x14 + 8);
    } while (iVar3 < iVar7);
    return iVar1;
  }
  return 0;
}



// Address: 4a0650c0

int * FUN_4a0650c0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_1c [12];
  int *local_10;
  
  local_10 = (int *)FUN_4a10af34();
  if (local_10 != (int *)0x0) {
    (**(code **)(*local_10 + 0xc))();
  }
  if ((local_10 != (int *)0x0) && (iVar2 = FUN_4a13e1b4(), piVar1 = local_10, 0 < iVar2)) {
    if (param_2 == 0) {
      if ((local_10 != (int *)0x0) && (iVar2 = (**(code **)(*local_10 + 8))(local_10), iVar2 != 0))
      {
        (**(code **)(*piVar1 + 4))(piVar1);
      }
      return piVar1;
    }
    FUN_4a0bedd4(auStack_1c);
    FUN_4a0beb78(auStack_1c,param_2);
    FUN_4a0bec10(auStack_1c,*PTR_DAT_4a065230);
    FUN_4a0bebec(auStack_1c,&local_10);
    piVar3 = (int *)FUN_4a13cff4(auStack_1c);
    FUN_4a0bee50(auStack_1c);
    piVar1 = local_10;
    if ((local_10 != (int *)0x0) && (iVar2 = (**(code **)(*local_10 + 8))(local_10), iVar2 != 0)) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    return piVar3;
  }
  piVar1 = local_10;
  if ((local_10 != (int *)0x0) && (iVar2 = (**(code **)(*local_10 + 8))(local_10), iVar2 != 0)) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return (int *)0x0;
}



// Address: 4a065234

int FUN_4a065234(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    do {
      iVar2 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x3c) + iVar2) + 0x60);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + 8);
      }
      iVar1 = iVar1 + *(int *)(iVar2 + param_2 * 0x14 + 8);
    } while (iVar3 < *(int *)(param_1 + 0x40));
    return iVar1;
  }
  return 0;
}



// Address: 4a065294

undefined4 FUN_4a065294(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x3c) + param_2 * 4) + 0x24);
}



// Address: 4a0652a4

undefined4 FUN_4a0652a4(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x3c) + param_2 * 4) + 0x10);
}



// Address: 4a0652b4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_4a0652b4(undefined *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  
  do {
    iVar8 = 0;
    if (0 < *(int *)(param_1 + 0x40)) {
      do {
        if (*(int *)(*(int *)(*(int *)(param_1 + 0x3c) + iVar8 * 4) + 8) == param_2)
        goto LAB_4a0652f0;
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(param_1 + 0x40));
    }
    iVar8 = -1;
LAB_4a0652f0:
    if (iVar8 != -1) {
      iVar10 = *(int *)(*(int *)(param_1 + 0x3c) + iVar8 * 4);
      if (*(int *)(iVar10 + 0x90) == 0) {
        iVar9 = 0;
        if (*(int *)(param_1 + 0x50) != 0) {
          iVar9 = *(int *)(*(int *)(param_1 + 0x50) + 8);
        }
        piVar1 = (int *)FUN_4a0c6fcc(*(undefined4 *)(iVar9 + iVar8 * 4));
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0xc))();
        }
        uVar7 = thunk_FUN_4a161570(0xc);
        piVar2 = (int *)FUN_4a0c4300(uVar7,*(undefined4 *)(param_1 + 0x24),piVar1);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0xc))();
        }
        uVar7 = thunk_FUN_4a161570(0xc);
        uVar3 = thunk_FUN_4a161570(0x14);
        uVar3 = FUN_4a0c707c(uVar3,*(undefined4 *)(PTR_PTR_4a06378c + 0x10));
        piVar4 = (int *)FUN_4a0c44b0(uVar7,piVar2,uVar3);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0xc))();
        }
        iVar8 = FUN_4a0c4278(piVar4);
        if (iVar8 != 0) {
          FUN_4a0c42f8(piVar4);
          piVar5 = (int *)FUN_4a0c49e0();
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 0xc))();
          }
          piVar6 = (int *)thunk_FUN_4a0c314c(piVar5);
          if (*(int **)(iVar10 + 0x90) != piVar6) {
            if (piVar6 != (int *)0x0) {
              (**(code **)(*piVar6 + 0xc))(piVar6);
            }
            piVar11 = *(int **)(iVar10 + 0x90);
            if ((piVar11 != (int *)0x0) &&
               (iVar8 = (**(code **)(*piVar11 + 8))(piVar11), iVar8 != 0)) {
              (**(code **)(*piVar11 + 4))(piVar11);
            }
            *(int **)(iVar10 + 0x90) = piVar6;
          }
          if ((piVar5 != (int *)0x0) && (iVar8 = (**(code **)(*piVar5 + 8))(piVar5), iVar8 != 0)) {
            (**(code **)(*piVar5 + 4))(piVar5);
          }
        }
        if ((piVar4 != (int *)0x0) && (iVar8 = (**(code **)(*piVar4 + 8))(piVar4), iVar8 != 0)) {
          (**(code **)(*piVar4 + 4))(piVar4);
        }
        if ((piVar2 != (int *)0x0) && (iVar8 = (**(code **)(*piVar2 + 8))(piVar2), iVar8 != 0)) {
          (**(code **)(*piVar2 + 4))(piVar2);
        }
        if ((piVar1 != (int *)0x0) && (iVar8 = (**(code **)(*piVar1 + 8))(piVar1), iVar8 != 0)) {
          (**(code **)(*piVar1 + 4))(piVar1);
        }
      }
      return *(undefined4 *)(iVar10 + 0x90);
    }
    if (param_1[0x20] != '\0') {
      return 0;
    }
    param_1 = PTR_DAT_4a065364;
    if (((*(uint *)(PTR_PTR_4a06535c + 0x18) & 1) == 0) &&
       (iVar8 = thunk_FUN_4a1491bc(PTR_DAT_4a065360), param_1 = PTR_DAT_4a065364, iVar8 != 0)) {
      uVar7 = FUN_4a067678(PTR_DAT_4a065364,1);
      thunk_FUN_4a1490b0(uVar7,PTR_FUN_4a06536c,PTR_DAT_4a065368);
      param_1 = PTR_DAT_4a065364;
    }
  } while( true );
}



// Address: 4a065370

undefined4 FUN_4a065370(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x3c) + param_2 * 4) + 0x28);
}



// Address: 4a065380

undefined4 FUN_4a065380(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x3c) + param_2 * 4) + 0x18);
}



// Address: 4a065390

undefined4 FUN_4a065390(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x3c) + param_2 * 4) + 0x14);
}



// Address: 4a0653a0

void FUN_4a0653a0(void)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_4a161570(0x88);
  uVar1 = FUN_4a067678(uVar1,1);
  *(undefined4 *)(PTR_PTR_4a0653c4 + 0x14) = uVar1;
  return;
}



// Address: 4a0653c8

void FUN_4a0653c8(void)

{
  if (*(int **)(PTR_PTR_4a0653e4 + 0x14) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a0653dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(PTR_PTR_4a0653e4 + 0x14) + 4))();
  return;
}



// Address: 4a0653e8

/* WARNING: Removing unreachable block (ram,0x4a0668bc) */
/* WARNING: Removing unreachable block (ram,0x4a0668d8) */

undefined4 * FUN_4a0653e8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  undefined4 uVar17;
  undefined4 local_190;
  int *local_18c;
  undefined *local_188;
  undefined4 local_184;
  undefined *local_180 [2];
  int local_178;
  int *local_174;
  int *local_170;
  undefined *local_16c [2];
  int local_164;
  int *local_160;
  undefined *local_158 [2];
  int local_150;
  int *local_14c;
  undefined1 auStack_148 [4];
  undefined *local_144;
  undefined *local_140;
  int local_13c;
  int *local_138;
  int local_130;
  undefined *local_12c [2];
  int local_124;
  int *local_120;
  undefined *local_118 [2];
  int local_110;
  int *local_10c;
  undefined *local_104 [2];
  int local_fc;
  int *local_f8;
  undefined *local_f0 [2];
  int local_e8;
  int local_e4;
  undefined *local_dc [2];
  int local_d4;
  int local_d0;
  undefined *local_c8 [2];
  int local_c0;
  int *local_bc;
  undefined *local_b4 [2];
  int local_ac;
  int *local_a8;
  undefined *local_a0 [2];
  int local_98;
  int local_94;
  undefined1 auStack_8c [16];
  int *local_7c;
  undefined1 auStack_78 [12];
  undefined4 *local_6c;
  undefined4 local_68;
  undefined *local_64;
  undefined *local_60;
  undefined *local_5c;
  undefined *local_58;
  int *local_54;
  int *local_50;
  int *local_4c;
  undefined *local_48;
  undefined *local_44;
  undefined *local_40;
  undefined *local_3c;
  undefined *local_38;
  undefined *local_34;
  int iStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  iStack_30 = param_1;
  local_2c = param_2;
  uStack_28 = param_3;
  iVar4 = FUN_4a0ff494();
  local_68 = *(undefined4 *)(iVar4 + 0x520);
  uVar17 = *(undefined4 *)(iVar4 + 0x51c);
  thunk_FUN_4a161570(0x94);
  puVar5 = (undefined4 *)FUN_4a0c6bc0();
  *puVar5 = PTR_PTR_4a0663b4;
  puVar5[2] = 0xffffffff;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5 = (undefined4 *)FUN_4a0c6bc0(puVar5 + 0xb);
  local_38 = PTR_PTR_4a0663bc;
  local_34 = PTR_PTR_4a0663b8;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = local_38;
  puVar5 = (undefined4 *)FUN_4a0c6bc0(puVar5 + 5);
  local_3c = PTR_PTR_4a0663c0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = local_3c;
  puVar5 = (undefined4 *)FUN_4a0c6bc0(puVar5 + 5);
  local_40 = PTR_PTR_4a0663c4;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = local_40;
  puVar5 = (undefined4 *)FUN_4a0c6bc0(puVar5 + 5);
  local_44 = PTR_PTR_4a0663c8;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = local_44;
  puVar5 = (undefined4 *)FUN_4a0c6bc0(puVar5 + 5);
  local_48 = PTR_PTR_4a0663cc;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[5] = 0;
  local_6c = puVar5 + -0x1f;
  *puVar5 = local_48;
  FUN_4a0bedd4(auStack_78);
  FUN_4a0becb8(auStack_78,0);
  FUN_4a0bebec(auStack_78,param_1 + 0x24);
  puVar1 = PTR_DAT_4a0663d0;
  FUN_4a0bec10(auStack_78,*PTR_DAT_4a0663d0);
  uVar6 = FUN_4a0c6fcc(param_3);
  FUN_4a0beb78(auStack_78,uVar6);
  local_7c = (int *)FUN_4a13cff4(auStack_78);
  if (local_7c != (int *)0x0) {
    (**(code **)(*local_7c + 0xc))();
  }
  FUN_4a0becb8(auStack_78,0);
  FUN_4a0bebec(auStack_78,&local_7c);
  FUN_4a0bec10(auStack_78,*puVar1);
  puVar2 = PTR_PTR_4a0663d4;
  FUN_4a0beb58(auStack_78,*(undefined4 *)(PTR_PTR_4a0663d4 + 4));
  local_4c = (int *)FUN_4a13cff4(auStack_78);
  if (local_4c != (int *)0x0) {
    (**(code **)(*local_4c + 0xc))();
  }
  uVar6 = thunk_FUN_4a161570(0x18);
  local_50 = (int *)FUN_4a0c2adc(uVar6,local_4c);
  if (local_50 != (int *)0x0) {
    (**(code **)(*local_50 + 0xc))();
  }
  FUN_4a0bfc44(auStack_8c,local_50);
  FUN_4a0becb8(auStack_78,0);
  FUN_4a0bebec(auStack_78,&local_7c);
  FUN_4a0bec10(auStack_78,*puVar1);
  FUN_4a0beb58(auStack_78,*(undefined4 *)(puVar2 + 8));
  local_54 = (int *)FUN_4a13cff4(auStack_78);
  if (local_54 != (int *)0x0) {
    (**(code **)(*local_54 + 0xc))();
  }
  uVar6 = FUN_4a06be60(iVar4 + 0x278,local_54);
  iVar4 = FUN_4a0bf62c(auStack_8c);
  piVar8 = local_54;
  if (iVar4 != 7) {
    if ((local_54 != (int *)0x0) && (iVar4 = (**(code **)(*local_54 + 8))(local_54), iVar4 != 0)) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    FUN_4a0bfcf4(auStack_8c);
    piVar8 = local_50;
    if ((local_50 != (int *)0x0) && (iVar4 = (**(code **)(*local_50 + 8))(local_50), iVar4 != 0)) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    piVar8 = local_4c;
    if ((local_4c != (int *)0x0) && (iVar4 = (**(code **)(*local_4c + 8))(local_4c), iVar4 != 0)) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    piVar8 = local_7c;
    if ((local_7c != (int *)0x0) && (iVar4 = (**(code **)(*local_7c + 8))(local_7c), iVar4 != 0)) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    FUN_4a0bee50(auStack_78);
    return (undefined4 *)0x0;
  }
  uVar7 = FUN_4a0bf62c(auStack_8c);
  local_6c[2] = uVar7;
  piVar10 = local_6c + 3;
  piVar8 = (int *)FUN_4a10af34(auStack_8c);
  if ((int *)*piVar10 != piVar8) {
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 0xc))(piVar8);
    }
    piVar16 = (int *)*piVar10;
    if ((piVar16 != (int *)0x0) && (iVar4 = (**(code **)(*piVar16 + 8))(piVar16), iVar4 != 0)) {
      (**(code **)(*piVar16 + 4))(piVar16);
    }
    *piVar10 = (int)piVar8;
  }
  piVar8 = (int *)FUN_4a0650c0(auStack_8c,local_7c);
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0xc))();
  }
  piVar10 = local_6c + 4;
  if ((int *)local_6c[4] != piVar8) {
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 0xc))();
    }
    piVar16 = (int *)*piVar10;
    if ((piVar16 != (int *)0x0) && (iVar4 = (**(code **)(*piVar16 + 8))(piVar16), iVar4 != 0)) {
      (**(code **)(*piVar16 + 4))(piVar16);
    }
    *piVar10 = (int)piVar8;
  }
  piVar16 = (int *)FUN_4a0650c0(auStack_8c,local_7c);
  piVar10 = piVar8;
  if (piVar8 != piVar16) {
    if (piVar16 != (int *)0x0) {
      (**(code **)(*piVar16 + 0xc))(piVar16);
    }
    piVar10 = piVar16;
    if ((piVar8 != (int *)0x0) && (iVar4 = (**(code **)(*piVar8 + 8))(piVar8), iVar4 != 0)) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
  }
  puVar5 = local_6c + 5;
  if ((int *)local_6c[5] != piVar10) {
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 0xc))();
    }
    piVar8 = (int *)*puVar5;
    if ((piVar8 != (int *)0x0) && (iVar4 = (**(code **)(*piVar8 + 8))(piVar8), iVar4 != 0)) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    *puVar5 = piVar10;
  }
  uVar7 = FUN_4a0bf62c(auStack_8c);
  local_6c[6] = uVar7;
  if ((piVar10 != (int *)0x0) && (iVar4 = (**(code **)(*piVar10 + 8))(piVar10), iVar4 != 0)) {
    (**(code **)(*piVar10 + 4))(piVar10);
  }
  piVar8 = (int *)FUN_4a0650c0(auStack_8c,local_7c);
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0xc))();
  }
  piVar10 = local_6c + 7;
  if ((int *)local_6c[7] != piVar8) {
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 0xc))();
    }
    piVar16 = (int *)*piVar10;
    if ((piVar16 != (int *)0x0) && (iVar4 = (**(code **)(*piVar16 + 8))(piVar16), iVar4 != 0)) {
      (**(code **)(*piVar16 + 4))(piVar16);
    }
    *piVar10 = (int)piVar8;
  }
  piVar16 = (int *)FUN_4a0650c0(auStack_8c,local_7c);
  piVar10 = piVar8;
  if (piVar8 != piVar16) {
    if (piVar16 != (int *)0x0) {
      (**(code **)(*piVar16 + 0xc))(piVar16);
    }
    piVar10 = piVar16;
    if ((piVar8 != (int *)0x0) && (iVar4 = (**(code **)(*piVar8 + 8))(piVar8), iVar4 != 0)) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
  }
  puVar5 = local_6c + 8;
  if ((int *)local_6c[8] != piVar10) {
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 0xc))();
    }
    piVar8 = (int *)*puVar5;
    if ((piVar8 != (int *)0x0) && (iVar4 = (**(code **)(*piVar8 + 8))(piVar8), iVar4 != 0)) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    *puVar5 = piVar10;
  }
  if ((piVar10 != (int *)0x0) && (iVar4 = (**(code **)(*piVar10 + 8))(piVar10), iVar4 != 0)) {
    (**(code **)(*piVar10 + 4))(piVar10);
  }
  piVar8 = (int *)FUN_4a0650c0(auStack_8c,local_7c);
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0xc))();
  }
  piVar10 = local_6c + 9;
  if ((int *)local_6c[9] != piVar8) {
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 0xc))();
    }
    piVar16 = (int *)*piVar10;
    if ((piVar16 != (int *)0x0) && (iVar4 = (**(code **)(*piVar16 + 8))(piVar16), iVar4 != 0)) {
      (**(code **)(*piVar16 + 4))(piVar16);
    }
    *piVar10 = (int)piVar8;
  }
  piVar16 = (int *)FUN_4a0650c0(auStack_8c,local_7c);
  piVar10 = piVar8;
  if (piVar8 != piVar16) {
    if (piVar16 != (int *)0x0) {
      (**(code **)(*piVar16 + 0xc))(piVar16);
    }
    piVar10 = piVar16;
    if ((piVar8 != (int *)0x0) && (iVar4 = (**(code **)(*piVar8 + 8))(piVar8), iVar4 != 0)) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
  }
  puVar5 = local_6c + 10;
  if ((int *)local_6c[10] != piVar10) {
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 0xc))();
    }
    piVar8 = (int *)*puVar5;
    if ((piVar8 != (int *)0x0) && (iVar4 = (**(code **)(*piVar8 + 8))(piVar8), iVar4 != 0)) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    *puVar5 = piVar10;
  }
  if ((piVar10 != (int *)0x0) && (iVar4 = (**(code **)(*piVar10 + 8))(piVar10), iVar4 != 0)) {
    (**(code **)(*piVar10 + 4))(piVar10);
  }
  iVar4 = FUN_4a0bf920(auStack_8c);
  FUN_4a16c0cc(local_a0,iVar4);
  iVar15 = 0;
  iVar14 = 1;
  if (1 < iVar4 + 1) {
    do {
      uVar7 = FUN_4a0bfbdc(auStack_8c);
      if (local_94 == 0) {
        iVar13 = 0;
      }
      else {
        iVar13 = *(int *)(local_94 + 8);
      }
      *(short *)(iVar13 + iVar15 * 2) = (short)uVar7;
      FUN_4a0d6408(uVar17,uVar7,local_2c);
      iVar14 = iVar14 + 1;
      iVar15 = iVar15 + 1;
    } while (iVar14 < iVar4 + 1);
  }
  iVar4 = FUN_4a0bfbdc(auStack_8c);
  piVar8 = (int *)FUN_4a0c6bc0(local_b4);
  piVar8[2] = 0;
  piVar8[3] = 0;
  *piVar8 = (int)local_38;
  local_58 = PTR_PTR_4a0663d8;
  if (0 < iVar4) {
    iVar14 = FUN_4a15e080(iVar4 * 100);
    if (iVar14 == 0) {
      iVar14 = FUN_4a1669a8();
    }
    iVar15 = 0;
    do {
      uVar17 = FUN_4a10b5dc(&local_190);
      FUN_4a10b474(iVar14 + iVar15 * 100,uVar17);
      FUN_4a10b6d4(&local_190);
      iVar15 = iVar15 + 1;
    } while (iVar15 < iVar4);
    thunk_FUN_4a161570(0x18);
    puVar5 = (undefined4 *)FUN_4a0c0628();
    *puVar5 = local_58;
    puVar5[3] = 100;
    puVar5[4] = iVar4;
    puVar5[2] = iVar14;
    *(undefined1 *)(puVar5 + 5) = 1;
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)(local_58 + 0xc))(puVar5);
    }
    (**(code **)(*piVar8 + 0x1c))(piVar8);
    piVar8[2] = iVar4;
    piVar8[3] = (int)puVar5;
  }
  iVar14 = 0;
  if (0 < iVar4) {
    do {
      if (local_a8 == (int *)0x0) {
        iVar15 = 0;
      }
      else {
        iVar15 = local_a8[2];
      }
      local_18c = local_7c;
      local_190 = uVar6;
      FUN_4a10afc4(iVar15 + iVar14 * 100,auStack_8c,local_2c,iVar14);
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar4);
  }
  iVar4 = FUN_4a0bf920(auStack_8c);
  piVar8 = (int *)FUN_4a0c6bc0(local_c8);
  piVar8[2] = 0;
  piVar8[3] = 0;
  *piVar8 = (int)local_3c;
  if (0 < iVar4) {
    iVar14 = FUN_4a15e080(iVar4 * 0x1c);
    if (iVar14 == 0) {
      iVar14 = FUN_4a1669a8();
    }
    iVar15 = 0;
    do {
      uVar17 = FUN_4a0d4e84(auStack_148);
      FUN_4a0d4e2c(iVar14 + iVar15 * 0x1c,uVar17);
      FUN_4a0d4ecc(auStack_148);
      iVar15 = iVar15 + 1;
    } while (iVar15 < iVar4);
    thunk_FUN_4a161570(0x18);
    puVar5 = (undefined4 *)FUN_4a0c0628();
    *puVar5 = local_58;
    puVar5[3] = 0x1c;
    puVar5[4] = iVar4;
    puVar5[2] = iVar14;
    *(undefined1 *)(puVar5 + 5) = 1;
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)(local_58 + 0xc))(puVar5);
    }
    (**(code **)(*piVar8 + 0x1c))(piVar8);
    piVar8[2] = iVar4;
    piVar8[3] = (int)puVar5;
  }
  iVar14 = 0;
  if (0 < iVar4) {
    do {
      if (local_bc == (int *)0x0) {
        iVar15 = 0;
      }
      else {
        iVar15 = local_bc[2];
      }
      local_18c = local_7c;
      local_190 = uVar6;
      FUN_4a0d4dbc(iVar15 + iVar14 * 0x1c,auStack_8c,local_2c,iVar14);
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar4);
  }
  iVar4 = FUN_4a0bf920(auStack_8c);
  FUN_4a16c0cc(local_dc,iVar4);
  iVar15 = 0;
  iVar14 = 1;
  if (1 < iVar4 + 1) {
    do {
      uVar6 = FUN_4a0bfbdc(auStack_8c);
      if (local_d0 == 0) {
        iVar13 = 0;
      }
      else {
        iVar13 = *(int *)(local_d0 + 8);
      }
      *(short *)(iVar13 + iVar15 * 2) = (short)uVar6;
      FUN_4a0eea7c(local_68,uVar6,local_2c);
      iVar14 = iVar14 + 1;
      iVar15 = iVar15 + 1;
    } while (iVar14 < iVar4 + 1);
  }
  iVar4 = FUN_4a0bf920(auStack_8c);
  FUN_4a16c0cc(local_f0,iVar4);
  iVar15 = 0;
  iVar14 = 1;
  if (1 < iVar4 + 1) {
    do {
      uVar6 = FUN_4a0bfbdc(auStack_8c);
      if (local_e4 == 0) {
        iVar13 = 0;
      }
      else {
        iVar13 = *(int *)(local_e4 + 8);
      }
      *(short *)(iVar13 + iVar15 * 2) = (short)uVar6;
      FUN_4a0ef270(local_68,uVar6,local_2c);
      iVar14 = iVar14 + 1;
      iVar15 = iVar15 + 1;
    } while (iVar14 < iVar4 + 1);
  }
  FUN_4a0bf920(auStack_8c);
  piVar8 = (int *)FUN_4a0c6bc0(local_104);
  piVar8[2] = 0;
  piVar8[3] = 0;
  *piVar8 = (int)local_40;
  iVar4 = FUN_4a15e080(300);
  if (iVar4 == 0) {
    iVar4 = FUN_4a1669a8();
  }
  iVar14 = 0;
  local_5c = PTR_PTR_4a0663dc;
  do {
    puVar5 = (undefined4 *)FUN_4a0c6bc0(&local_140);
    puVar5[2] = 0;
    puVar5[3] = 0;
    *puVar5 = local_5c;
    puVar9 = (undefined4 *)FUN_4a0c6bc0(iVar4 + iVar14 * 0x14);
    *puVar9 = local_34;
    puVar9[2] = puVar5[2];
    piVar10 = (int *)puVar5[3];
    puVar9[3] = piVar10;
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 0xc))();
    }
    piVar10 = local_138;
    *puVar9 = local_5c;
    local_140 = local_5c;
    iVar15 = FUN_4a0bcc84(&local_140);
    if (iVar15 != 0) {
      iVar13 = 0;
      if (0 < (int)piVar10) {
        do {
          iVar13 = iVar13 + 1;
        } while (iVar13 < (int)piVar10);
        if (iVar15 == 0) goto LAB_4a066150;
      }
      FUN_4a14f21c(iVar15);
    }
LAB_4a066150:
    FUN_4a0c6bf4(&local_140);
    iVar14 = iVar14 + 1;
  } while (iVar14 < 0xf);
  thunk_FUN_4a161570(0x18);
  puVar5 = (undefined4 *)FUN_4a0c0628();
  *puVar5 = local_58;
  puVar5[3] = 0x14;
  puVar5[4] = 0xf;
  puVar5[2] = iVar4;
  *(undefined1 *)(puVar5 + 5) = 1;
  if (puVar5 != (undefined4 *)0x0) {
    (**(code **)(local_58 + 0xc))(puVar5);
  }
  (**(code **)(*piVar8 + 0x1c))(piVar8);
  piVar8[2] = 0xf;
  piVar8[3] = (int)puVar5;
  piVar8 = (int *)FUN_4a0c6bc0(local_118);
  piVar8[2] = 0;
  piVar8[3] = 0;
  *piVar8 = (int)local_44;
  iVar4 = FUN_4a15e080(300);
  if (iVar4 == 0) {
    iVar4 = FUN_4a1669a8();
  }
  iVar14 = 0;
  local_60 = PTR_PTR_4a0663e0;
  do {
    puVar5 = (undefined4 *)FUN_4a0c6bc0(&local_140);
    puVar5[2] = 0;
    puVar5[3] = 0;
    *puVar5 = local_60;
    puVar9 = (undefined4 *)FUN_4a0c6bc0(iVar4 + iVar14 * 0x14);
    *puVar9 = local_34;
    puVar9[2] = puVar5[2];
    piVar10 = (int *)puVar5[3];
    puVar9[3] = piVar10;
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 0xc))();
    }
    piVar10 = local_138;
    *puVar9 = local_60;
    local_140 = local_60;
    iVar15 = FUN_4a0bcc84(&local_140);
    if (iVar15 != 0) {
      iVar13 = 0;
      if (0 < (int)piVar10) {
        do {
          iVar13 = iVar13 + 1;
        } while (iVar13 < (int)piVar10);
        if (iVar15 == 0) goto LAB_4a0662ac;
      }
      FUN_4a14f21c(iVar15);
    }
LAB_4a0662ac:
    FUN_4a0c6bf4(&local_140);
    iVar14 = iVar14 + 1;
  } while (iVar14 < 0xf);
  thunk_FUN_4a161570(0x18);
  puVar5 = (undefined4 *)FUN_4a0c0628();
  puVar5[3] = 0x14;
  puVar5[4] = 0xf;
  *puVar5 = local_58;
  puVar5[2] = iVar4;
  *(undefined1 *)(puVar5 + 5) = 1;
  if (puVar5 != (undefined4 *)0x0) {
    (**(code **)(local_58 + 0xc))(puVar5);
  }
  (**(code **)(*piVar8 + 0x1c))(piVar8);
  piVar8[2] = 0xf;
  piVar8[3] = (int)puVar5;
  piVar8 = (int *)FUN_4a0c6bc0(local_12c);
  piVar8[2] = 0;
  piVar8[3] = 0;
  *piVar8 = (int)local_48;
  iVar4 = FUN_4a15e080(300);
  if (iVar4 == 0) {
    iVar4 = FUN_4a1669a8();
  }
  iVar14 = 0;
  local_64 = PTR_PTR_4a0663e4;
  do {
    puVar5 = (undefined4 *)FUN_4a0c6bc0(&local_140);
    puVar5[2] = 0;
    puVar5[3] = 0;
    *puVar5 = local_64;
    puVar9 = (undefined4 *)FUN_4a0c6bc0(iVar4 + iVar14 * 0x14);
    *puVar9 = local_34;
    puVar9[2] = puVar5[2];
    piVar10 = (int *)puVar5[3];
    puVar9[3] = piVar10;
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 0xc))();
    }
    piVar10 = local_138;
    *puVar9 = local_64;
    local_140 = local_64;
    iVar15 = FUN_4a0bcc84(&local_140);
    if (iVar15 != 0) {
      iVar13 = 0;
      if (0 < (int)piVar10) {
        do {
          (*(code *)**(undefined4 **)(iVar15 + iVar13 * 0x14))();
          iVar13 = iVar13 + 1;
        } while (iVar13 < (int)piVar10);
        if (iVar15 == 0) goto LAB_4a06645c;
      }
      FUN_4a14f21c(iVar15);
    }
LAB_4a06645c:
    FUN_4a0c6bf4(&local_140);
    iVar14 = iVar14 + 1;
  } while (iVar14 < 0xf);
  thunk_FUN_4a161570(0x18);
  puVar5 = (undefined4 *)FUN_4a0c0628();
  *puVar5 = local_58;
  puVar5[3] = 0x14;
  puVar5[4] = 0xf;
  puVar5[2] = iVar4;
  *(undefined1 *)(puVar5 + 5) = 1;
  if (puVar5 != (undefined4 *)0x0) {
    (**(code **)(local_58 + 0xc))(puVar5);
  }
  (**(code **)(*piVar8 + 0x1c))(piVar8);
  piVar8[2] = 0xf;
  puVar1 = PTR_PTR_4a0672ac;
  piVar8[3] = (int)puVar5;
  local_130 = 0;
  do {
    iVar4 = FUN_4a0bf920(auStack_8c);
    piVar8 = (int *)FUN_4a0c6bc0(&local_144);
    piVar8[2] = 0;
    piVar8[3] = 0;
    *piVar8 = (int)local_5c;
    if (0 < iVar4) {
      iVar14 = FUN_4a15e080(iVar4 << 1);
      if (iVar14 == 0) {
        iVar14 = FUN_4a1669a8();
      }
      iVar15 = 0;
      do {
        iVar13 = iVar15 * 2;
        iVar15 = iVar15 + 1;
        local_170 = (int *)0x0;
        *(undefined2 *)(iVar14 + iVar13) = 0;
      } while (iVar15 < iVar4);
      thunk_FUN_4a161570(0x18);
      puVar5 = (undefined4 *)FUN_4a0c0628();
      puVar5[3] = 2;
      puVar5[4] = iVar4;
      *puVar5 = local_58;
      puVar5[2] = iVar14;
      *(undefined1 *)(puVar5 + 5) = 1;
      if (puVar5 != (undefined4 *)0x0) {
        (**(code **)(local_58 + 0xc))(puVar5);
      }
      (**(code **)(*piVar8 + 0x1c))(piVar8);
      piVar8[2] = iVar4;
      piVar8[3] = (int)puVar5;
    }
    piVar8 = (int *)FUN_4a0c6bc0(local_158);
    piVar8[2] = 0;
    piVar8[3] = 0;
    *piVar8 = (int)local_60;
    if (0 < iVar4) {
      iVar14 = FUN_4a15e080(iVar4 << 2);
      if (iVar14 == 0) {
        iVar14 = FUN_4a1669a8();
      }
      iVar15 = 0;
      do {
        local_170 = (int *)0x0;
        *(undefined4 *)(iVar14 + iVar15 * 4) = 0;
        iVar15 = iVar15 + 1;
      } while (iVar15 < iVar4);
      thunk_FUN_4a161570(0x18);
      puVar5 = (undefined4 *)FUN_4a0c0628();
      puVar5[3] = 4;
      puVar5[4] = iVar4;
      *puVar5 = local_58;
      puVar5[2] = iVar14;
      *(undefined1 *)(puVar5 + 5) = 1;
      if (puVar5 != (undefined4 *)0x0) {
        (**(code **)(local_58 + 0xc))(puVar5);
      }
      (**(code **)(*piVar8 + 0x1c))(piVar8);
      piVar8[2] = iVar4;
      piVar8[3] = (int)puVar5;
    }
    local_170 = (int *)FUN_4a0c6bc0(local_16c);
    local_170[2] = 0;
    local_170[3] = 0;
    *local_170 = (int)local_64;
    if (0 < iVar4) {
      piVar8 = (int *)FUN_4a15e080(iVar4 * 0x14);
      if (piVar8 == (int *)0x0) {
        piVar8 = (int *)FUN_4a1669a8();
      }
      iVar14 = 0;
      local_174 = piVar8;
      do {
        piVar8 = local_174 + iVar14 * 5;
        puVar5 = (undefined4 *)FUN_4a0c6bc0(&local_188);
        puVar5[2] = 0;
        puVar5[3] = 0;
        *puVar5 = puVar1;
        puVar9 = (undefined4 *)FUN_4a0c6bc0(piVar8);
        *puVar9 = local_34;
        puVar9[2] = puVar5[2];
        piVar8 = (int *)puVar5[3];
        puVar9[3] = piVar8;
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 0xc))();
        }
        puVar2 = local_180[0];
        *puVar9 = puVar1;
        local_188 = puVar1;
        iVar15 = FUN_4a0bcc84(&local_188);
        if (iVar15 != 0) {
          iVar13 = 0;
          if (0 < (int)puVar2) {
            do {
              piVar8 = *(int **)(iVar15 + iVar13 * 4);
              if ((piVar8 != (int *)0x0) &&
                 (iVar11 = (**(code **)(*piVar8 + 8))(piVar8), iVar11 != 0)) {
                (**(code **)(*piVar8 + 4))(piVar8);
              }
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)puVar2);
            if (iVar15 == 0) goto LAB_4a066788;
          }
          FUN_4a14f21c(iVar15);
        }
LAB_4a066788:
        FUN_4a0c6bf4(&local_188);
        iVar14 = iVar14 + 1;
      } while (iVar14 < iVar4);
      thunk_FUN_4a161570(0x18);
      puVar5 = (undefined4 *)FUN_4a0c0628();
      *puVar5 = local_58;
      puVar5[2] = local_174;
      puVar5[3] = 0x14;
      puVar5[4] = iVar4;
      *(undefined1 *)(puVar5 + 5) = 1;
      if (puVar5 != (undefined4 *)0x0) {
        (**(code **)(local_58 + 0xc))(puVar5);
      }
      (**(code **)(*local_170 + 0x1c))(local_170);
      local_170[3] = (int)puVar5;
      local_170[2] = iVar4;
    }
    iVar14 = 0;
    if (0 < iVar4) {
      do {
        uVar3 = FUN_4a0bf62c(auStack_8c);
        iVar15 = 0;
        if (local_138 != (int *)0x0) {
          iVar15 = local_138[2];
        }
        *(undefined2 *)(iVar15 + iVar14 * 2) = uVar3;
        uVar6 = FUN_4a0bf62c(auStack_8c);
        iVar15 = 0;
        if (local_14c != (int *)0x0) {
          iVar15 = local_14c[2];
        }
        *(undefined4 *)(iVar15 + iVar14 * 4) = uVar6;
        iVar15 = FUN_4a0bf920(auStack_8c);
        piVar8 = (int *)FUN_4a0c6bc0(local_180);
        piVar8[2] = 0;
        piVar8[3] = 0;
        *piVar8 = (int)puVar1;
        if (0 < iVar15) {
          iVar13 = FUN_4a15e080(iVar15 << 2);
          if (iVar13 == 0) {
            iVar13 = FUN_4a1669a8();
          }
          iVar11 = 0;
          do {
            *(undefined4 *)(iVar13 + iVar11 * 4) = 0;
            local_184 = 0;
            iVar11 = iVar11 + 1;
          } while (iVar11 < iVar15);
          thunk_FUN_4a161570(0x18);
          puVar5 = (undefined4 *)FUN_4a0c0628();
          puVar5[3] = 4;
          puVar5[4] = iVar15;
          *puVar5 = local_58;
          puVar5[2] = iVar13;
          *(undefined1 *)(puVar5 + 5) = 1;
          if (puVar5 != (undefined4 *)0x0) {
            (**(code **)(local_58 + 0xc))(puVar5);
          }
          (**(code **)(*piVar8 + 0x1c))(piVar8);
          piVar8[2] = iVar15;
          piVar8[3] = (int)puVar5;
        }
        iVar13 = 0;
        if (0 < iVar15) {
          do {
            piVar8 = (int *)FUN_4a0650c0(auStack_8c,local_7c);
            if (piVar8 != (int *)0x0) {
              (**(code **)(*piVar8 + 0xc))();
            }
            iVar11 = 0;
            if (local_174 != (int *)0x0) {
              iVar11 = local_174[2];
            }
            piVar10 = (int *)(iVar11 + iVar13 * 4);
            if ((int *)*piVar10 != piVar8) {
              if (piVar8 != (int *)0x0) {
                (**(code **)(*piVar8 + 0xc))();
              }
              piVar16 = (int *)*piVar10;
              if ((piVar16 != (int *)0x0) &&
                 (iVar11 = (**(code **)(*piVar16 + 8))(piVar16), iVar11 != 0)) {
                (**(code **)(*piVar16 + 4))(piVar16);
              }
              *piVar10 = (int)piVar8;
            }
            if ((piVar8 != (int *)0x0) && (iVar11 = (**(code **)(*piVar8 + 8))(piVar8), iVar11 != 0)
               ) {
              (**(code **)(*piVar8 + 4))(piVar8);
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 < iVar15);
        }
        piVar8 = local_174;
        iVar13 = local_178;
        iVar15 = 0;
        if (local_160 != (int *)0x0) {
          iVar15 = local_160[2];
        }
        piVar10 = (int *)(iVar15 + iVar14 * 0x14);
        if (local_174 != (int *)0x0) {
          (**(code **)(*local_174 + 0xc))(local_174);
        }
        (**(code **)(*piVar10 + 0x1c))(piVar10);
        iVar15 = local_178;
        piVar10[2] = iVar13;
        piVar10[3] = (int)piVar8;
        local_180[0] = puVar1;
        iVar13 = FUN_4a0bcc84(local_180);
        if (iVar13 != 0) {
          iVar11 = 0;
          if (0 < iVar15) {
            do {
              piVar8 = *(int **)(iVar13 + iVar11 * 4);
              if ((piVar8 != (int *)0x0) &&
                 (iVar12 = (**(code **)(*piVar8 + 8))(piVar8), iVar12 != 0)) {
                (**(code **)(*piVar8 + 4))(piVar8);
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 < iVar15);
            if (iVar13 == 0) goto LAB_4a066b0c;
          }
          FUN_4a14f21c(iVar13);
        }
LAB_4a066b0c:
        FUN_4a0c6bf4(local_180);
        iVar14 = iVar14 + 1;
      } while (iVar14 < iVar4);
    }
    iVar15 = local_130;
    piVar8 = local_138;
    iVar14 = local_13c;
    iVar4 = 0;
    if (local_f8 != (int *)0x0) {
      iVar4 = local_f8[2];
    }
    piVar10 = (int *)(iVar4 + local_130 * 0x14);
    if (local_138 != (int *)0x0) {
      (**(code **)(*local_138 + 0xc))(local_138);
    }
    (**(code **)(*piVar10 + 0x1c))(piVar10);
    piVar16 = local_14c;
    iVar13 = local_150;
    piVar10[2] = iVar14;
    piVar10[3] = (int)piVar8;
    iVar4 = 0;
    if (local_10c != (int *)0x0) {
      iVar4 = local_10c[2];
    }
    piVar8 = (int *)(iVar4 + iVar15 * 0x14);
    if (local_14c != (int *)0x0) {
      (**(code **)(*local_14c + 0xc))(local_14c);
    }
    (**(code **)(*piVar8 + 0x1c))(piVar8);
    piVar10 = local_160;
    iVar14 = local_164;
    piVar8[2] = iVar13;
    piVar8[3] = (int)piVar16;
    iVar4 = 0;
    if (local_120 != (int *)0x0) {
      iVar4 = local_120[2];
    }
    piVar8 = (int *)(iVar4 + iVar15 * 0x14);
    if (local_160 != (int *)0x0) {
      (**(code **)(*local_160 + 0xc))(local_160);
    }
    (**(code **)(*piVar8 + 0x1c))(piVar8);
    iVar4 = local_164;
    piVar8[2] = iVar14;
    piVar8[3] = (int)piVar10;
    local_16c[0] = local_64;
    iVar14 = FUN_4a0bcc84(local_16c);
    if (iVar14 != 0) {
      iVar15 = 0;
      if (0 < iVar4) {
        do {
          (*(code *)**(undefined4 **)(iVar14 + iVar15 * 0x14))();
          iVar15 = iVar15 + 1;
        } while (iVar15 < iVar4);
        if (iVar14 == 0) goto LAB_4a066c78;
      }
      FUN_4a14f21c(iVar14);
    }
LAB_4a066c78:
    FUN_4a0c6bf4(local_16c);
    iVar4 = local_150;
    local_158[0] = local_60;
    iVar14 = FUN_4a0bcc84(local_158);
    if (iVar14 != 0) {
      iVar15 = 0;
      if (0 < iVar4) {
        do {
          iVar15 = iVar15 + 1;
        } while (iVar15 < iVar4);
        if (iVar14 == 0) goto LAB_4a066cc8;
      }
      FUN_4a14f21c(iVar14);
    }
LAB_4a066cc8:
    FUN_4a0c6bf4(local_158);
    iVar4 = local_13c;
    local_144 = local_5c;
    iVar14 = FUN_4a0bcc84(&local_144);
    if (iVar14 != 0) {
      iVar15 = 0;
      if (0 < iVar4) {
        do {
          iVar15 = iVar15 + 1;
        } while (iVar15 < iVar4);
        if (iVar14 == 0) goto LAB_4a066d18;
      }
      FUN_4a14f21c(iVar14);
    }
LAB_4a066d18:
    FUN_4a0c6bf4(&local_144);
    puVar5 = local_6c;
    iVar4 = local_ac;
    local_130 = local_130 + 1;
  } while (local_130 < 0xf);
  piVar8 = local_6c + 0xb;
  if (local_a8 != (int *)0x0) {
    (**(code **)(*local_a8 + 0xc))(local_a8);
  }
  (**(code **)(*piVar8 + 0x1c))(piVar8);
  puVar9 = local_6c;
  iVar14 = local_c0;
  puVar5[0xd] = iVar4;
  puVar5[0xe] = local_a8;
  piVar8 = local_6c + 0x10;
  if (local_bc != (int *)0x0) {
    (**(code **)(*local_bc + 0xc))(local_bc);
  }
  (**(code **)(*piVar8 + 0x1c))(piVar8);
  puVar5 = local_6c;
  iVar4 = local_fc;
  puVar9[0x12] = iVar14;
  puVar9[0x13] = local_bc;
  piVar8 = local_6c + 0x15;
  if (local_f8 != (int *)0x0) {
    (**(code **)(*local_f8 + 0xc))(local_f8);
  }
  (**(code **)(*piVar8 + 0x1c))(piVar8);
  puVar9 = local_6c;
  iVar14 = local_110;
  puVar5[0x17] = iVar4;
  puVar5[0x18] = local_f8;
  piVar8 = local_6c + 0x1a;
  if (local_10c != (int *)0x0) {
    (**(code **)(*local_10c + 0xc))(local_10c);
  }
  (**(code **)(*piVar8 + 0x1c))(piVar8);
  puVar5 = local_6c;
  iVar4 = local_124;
  puVar9[0x1c] = iVar14;
  puVar9[0x1d] = local_10c;
  piVar8 = local_6c + 0x1f;
  if (local_120 != (int *)0x0) {
    (**(code **)(*local_120 + 0xc))(local_120);
  }
  (**(code **)(*piVar8 + 0x1c))(piVar8);
  puVar9 = local_6c;
  puVar5[0x21] = iVar4;
  puVar5[0x22] = local_120;
  local_12c[0] = local_48;
  iVar4 = FUN_4a0bcc84(local_12c);
  if (iVar4 != 0) {
    iVar14 = 0;
    if (0 < local_124) {
      do {
        (*(code *)**(undefined4 **)(iVar4 + iVar14 * 0x14))();
        iVar14 = iVar14 + 1;
      } while (iVar14 < local_124);
      if (iVar4 == 0) goto LAB_4a066f00;
    }
    FUN_4a14f21c(iVar4);
  }
LAB_4a066f00:
  FUN_4a0c6bf4(local_12c);
  local_118[0] = local_44;
  iVar4 = FUN_4a0bcc84(local_118);
  if (iVar4 != 0) {
    iVar14 = 0;
    if (0 < local_110) {
      do {
        (*(code *)**(undefined4 **)(iVar4 + iVar14 * 0x14))();
        iVar14 = iVar14 + 1;
      } while (iVar14 < local_110);
      if (iVar4 == 0) goto LAB_4a066f68;
    }
    FUN_4a14f21c(iVar4);
  }
LAB_4a066f68:
  FUN_4a0c6bf4(local_118);
  local_104[0] = local_40;
  iVar4 = FUN_4a0bcc84(local_104);
  if (iVar4 != 0) {
    iVar14 = 0;
    if (0 < local_fc) {
      do {
        (*(code *)**(undefined4 **)(iVar4 + iVar14 * 0x14))();
        iVar14 = iVar14 + 1;
      } while (iVar14 < local_fc);
      if (iVar4 == 0) goto LAB_4a066fd0;
    }
    FUN_4a14f21c(iVar4);
  }
LAB_4a066fd0:
  FUN_4a0c6bf4(local_104);
  local_f0[0] = local_5c;
  iVar4 = FUN_4a0bcc84(local_f0);
  if (iVar4 != 0) {
    iVar14 = 0;
    if (0 < local_e8) {
      do {
        iVar14 = iVar14 + 1;
      } while (iVar14 < local_e8);
      if (iVar4 == 0) goto LAB_4a067020;
    }
    FUN_4a14f21c(iVar4);
  }
LAB_4a067020:
  FUN_4a0c6bf4(local_f0);
  local_dc[0] = local_5c;
  iVar4 = FUN_4a0bcc84(local_dc);
  if (iVar4 != 0) {
    iVar14 = 0;
    if (0 < local_d4) {
      do {
        iVar14 = iVar14 + 1;
      } while (iVar14 < local_d4);
      if (iVar4 == 0) goto LAB_4a067070;
    }
    FUN_4a14f21c(iVar4);
  }
LAB_4a067070:
  FUN_4a0c6bf4(local_dc);
  local_c8[0] = local_3c;
  iVar4 = FUN_4a0bcc84(local_c8);
  if (iVar4 != 0) {
    iVar14 = 0;
    if (0 < local_c0) {
      do {
        (*(code *)**(undefined4 **)(iVar4 + iVar14 * 0x1c))();
        iVar14 = iVar14 + 1;
      } while (iVar14 < local_c0);
      if (iVar4 == 0) goto LAB_4a0670d8;
    }
    FUN_4a14f21c(iVar4);
  }
LAB_4a0670d8:
  FUN_4a0c6bf4(local_c8);
  local_b4[0] = local_38;
  iVar4 = FUN_4a0bcc84(local_b4);
  if (iVar4 != 0) {
    iVar14 = 0;
    if (0 < local_ac) {
      do {
        (*(code *)**(undefined4 **)(iVar4 + iVar14 * 100))();
        iVar14 = iVar14 + 1;
      } while (iVar14 < local_ac);
      if (iVar4 == 0) goto LAB_4a067144;
    }
    FUN_4a14f21c(iVar4);
  }
LAB_4a067144:
  FUN_4a0c6bf4(local_b4);
  local_a0[0] = local_5c;
  iVar4 = FUN_4a0bcc84(local_a0);
  if (iVar4 != 0) {
    iVar14 = 0;
    if (0 < local_98) {
      do {
        iVar14 = iVar14 + 1;
      } while (iVar14 < local_98);
      if (iVar4 == 0) goto LAB_4a067194;
    }
    FUN_4a14f21c(iVar4);
  }
LAB_4a067194:
  FUN_4a0c6bf4(local_a0);
  piVar8 = local_54;
  if ((local_54 != (int *)0x0) && (iVar4 = (**(code **)(*local_54 + 8))(local_54), iVar4 != 0)) {
    (**(code **)(*piVar8 + 4))(piVar8);
  }
  FUN_4a0bfcf4(auStack_8c);
  piVar8 = local_50;
  if ((local_50 != (int *)0x0) && (iVar4 = (**(code **)(*local_50 + 8))(local_50), iVar4 != 0)) {
    (**(code **)(*piVar8 + 4))(piVar8);
  }
  piVar8 = local_4c;
  if ((local_4c != (int *)0x0) && (iVar4 = (**(code **)(*local_4c + 8))(local_4c), iVar4 != 0)) {
    (**(code **)(*piVar8 + 4))(piVar8);
  }
  piVar8 = local_7c;
  if ((local_7c != (int *)0x0) && (iVar4 = (**(code **)(*local_7c + 8))(local_7c), iVar4 != 0)) {
    (**(code **)(*piVar8 + 4))(piVar8);
  }
  FUN_4a0bee50(auStack_78);
  return puVar9;
}



// Address: 4a0672b0

void FUN_4a0672b0(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined1 auStack_70 [12];
  int *local_64 [14];
  int iStack_2c;
  undefined4 uStack_28;
  
  iVar3 = FUN_4a0ff494();
  iVar14 = iVar3 + 0x278;
  FUN_4a06431c(param_1);
  param_1[0x16] = 0;
  param_1[0x1c] = 0;
  iVar13 = 0;
  if (0 < param_1[0x10]) {
    do {
      if (param_1[0x14] == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(param_1[0x14] + 8);
      }
      piVar5 = (int *)FUN_4a0653e8(param_1,iVar13,*(undefined4 *)(iVar4 + iVar13 * 4));
      if (piVar5 != (int *)0x0) {
        param_1[0x16] = param_1[0x16] + piVar5[0xd];
        param_1[0x1c] = param_1[0x1c] + piVar5[0x12];
        iVar4 = param_1[0xd];
        if ((param_1[0xe] == iVar4) && (iVar6 = param_1[0xc] + iVar4, iVar4 < iVar6)) {
          param_1[0xd] = iVar6;
          iVar10 = param_1[0xf];
          iVar4 = thunk_FUN_4a161570(iVar6 * 4);
          param_1[0xf] = iVar4;
          if (iVar4 != 0) {
            iVar4 = 0;
            if (0 < param_1[0xe]) {
              do {
                iVar6 = iVar4 + 1;
                *(undefined4 *)(param_1[0xf] + iVar4 * 4) = *(undefined4 *)(iVar10 + iVar4 * 4);
                iVar4 = iVar6;
              } while (iVar6 < param_1[0xe]);
            }
            thunk_FUN_4a161530(iVar10);
          }
          iVar4 = param_1[0xe];
          if (param_1[0xe] < param_1[0xd]) {
            do {
              iVar6 = iVar4 + 1;
              *(undefined4 *)(param_1[0xf] + iVar4 * 4) = 0;
              iVar4 = iVar6;
            } while (iVar6 < param_1[0xd]);
          }
        }
        iVar4 = param_1[0xe];
        param_1[0xe] = iVar4 + 1;
        piVar11 = *(int **)(param_1[0xf] + iVar4 * 4);
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 0xc))();
        }
        *(int **)(param_1[0xf] + iVar4 * 4) = piVar5;
        if ((piVar11 != (int *)0x0) && (iVar4 = (**(code **)(*piVar11 + 8))(piVar11), iVar4 != 0)) {
          (**(code **)(*piVar11 + 4))(piVar11);
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < param_1[0x10]);
  }
  local_64[0] = *(int **)PTR_PTR_4a067624;
  local_64[1] = (int *)*(undefined4 *)(PTR_PTR_4a067624 + 4);
  local_64[2] = (int *)*(undefined4 *)(PTR_PTR_4a067624 + 8);
  local_64[3] = (int *)*(undefined4 *)(PTR_PTR_4a067624 + 0xc);
  local_64[4] = (int *)*(undefined4 *)(PTR_PTR_4a067624 + 0x10);
  local_64[5] = *(int **)(PTR_PTR_4a067624 + 0x14);
  local_64[6] = (int *)*(undefined4 *)(PTR_PTR_4a067624 + 0x18);
  local_64[7] = (int *)*(undefined4 *)(PTR_PTR_4a067624 + 0x1c);
  local_64[8] = (int *)*(undefined4 *)(PTR_PTR_4a067624 + 0x20);
  local_64[9] = (int *)*(undefined4 *)(PTR_PTR_4a067624 + 0x24);
  local_64[10] = (int *)*(undefined4 *)(PTR_PTR_4a067624 + 0x28);
  local_64[0xb] = (int *)*(undefined4 *)(PTR_PTR_4a067624 + 0x2c);
  local_64[0xc] = (int *)*(undefined4 *)(PTR_PTR_4a067624 + 0x30);
  local_64[0xd] = (int *)*(undefined4 *)(PTR_PTR_4a067624 + 0x34);
  iStack_2c = *(undefined4 *)(PTR_PTR_4a067624 + 0x38);
  uStack_28 = *(undefined4 *)(PTR_PTR_4a067624 + 0x3c);
  if ((char)param_1[8] == '\0') {
    uVar12 = 0;
    do {
      piVar11 = local_64[uVar12];
      uVar7 = thunk_FUN_4a161570(0x14);
      piVar5 = (int *)FUN_4a0c707c(uVar7,piVar11);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0xc))();
        uVar15 = param_1[0x10];
        iVar13 = uVar12 + 100;
        if ((int)uVar15 < 1) {
          uVar9 = 0;
        }
        else {
          uVar9 = uVar15 & 1;
        }
        iVar4 = 0;
        if (uVar9 != 0) {
          do {
            if (param_1[0x14] == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(param_1[0x14] + 8);
            }
            if (*(int *)(iVar6 + iVar4 * 4) == iVar13) goto LAB_4a067574;
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)uVar9);
        }
        if ((int)uVar9 < (int)uVar15) {
          iVar4 = param_1[0x14];
          do {
            if (iVar4 == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(iVar4 + 8);
            }
            if (*(int *)(iVar6 + uVar9 * 4) == iVar13) goto LAB_4a067574;
            if (iVar4 == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(iVar4 + 8);
            }
            if (*(int *)(iVar6 + (uVar9 + 1) * 4) == iVar13) goto LAB_4a067574;
            uVar9 = uVar9 + 2;
          } while ((int)uVar9 < (int)uVar15);
        }
        FUN_4a0c7334(s_auto_installing_DLC_pack__s_at_s_4a067628,piVar11,iVar13);
        uVar7 = (**(code **)(*param_1 + 8))(param_1,piVar5);
        FUN_4a0c7334(s_success____i_4a067654,uVar7);
      }
LAB_4a067574:
      if ((piVar5 != (int *)0x0) && (iVar13 = (**(code **)(*piVar5 + 8))(piVar5), iVar13 != 0)) {
        (**(code **)(*piVar5 + 4))(piVar5);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < 0x10);
    if (((*(uint *)(PTR_PTR_4a067664 + 0x18) & 1) == 0) &&
       (iVar13 = thunk_FUN_4a1491bc(PTR_DAT_4a067668), iVar13 != 0)) {
      uVar7 = FUN_4a067678(PTR_DAT_4a06766c,1);
      thunk_FUN_4a1490b0(uVar7,PTR_FUN_4a067674,PTR_DAT_4a067670);
    }
    FUN_4a0672b0(PTR_DAT_4a06766c);
  }
  FUN_4a0647b8(param_1);
  uStack_28 = FUN_4a06c1b0(iVar14);
  iStack_2c = iVar14;
  local_64[0xd] = (int *)FUN_4a08db2c();
  FUN_4a1358e0(local_64 + 8,local_64[0xd]);
  iVar13 = FUN_4a06c6c8(iVar14);
  if (-1 < iVar13) {
    local_64[7] = (int *)FUN_4a08db2c();
    FUN_4a16951c(local_64 + 2,0);
    puVar2 = PTR_PTR_4a06c374;
    puVar1 = PTR_PTR_4a06c370;
    iVar4 = *(int *)(iVar3 + 0x28c);
    iVar13 = 0;
    if (0 < iVar4) {
      do {
        piVar5 = *(int **)(*(int *)(iVar3 + 0x290) + iVar13 * 4);
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 0xc))();
        }
        puVar8 = (undefined4 *)FUN_4a0c6bc0(auStack_70);
        *puVar8 = puVar1;
        puVar8[2] = local_64[4];
        puVar8[3] = local_64[5];
        if (local_64[5] != (int *)0x0) {
          (**(code **)(*local_64[5] + 0xc))();
        }
        *puVar8 = puVar2;
        FUN_4a08db3c(local_64[7],iVar13 + 1,puVar8,0);
        FUN_4a169628(auStack_70);
        if ((piVar5 != (int *)0x0) && (iVar6 = (**(code **)(*piVar5 + 8))(piVar5), iVar6 != 0)) {
          (**(code **)(*piVar5 + 4))(piVar5);
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < iVar4);
    }
    FUN_4a169628(local_64 + 2);
  }
  FUN_4a08e320(local_64[0xd],uStack_28);
  FUN_4a06b454(iVar14);
  iVar13 = 0;
  if (0 < *(int *)(iVar3 + 0x338)) {
    do {
      if (*(int *)(iVar3 + 0x33c) == 0) {
        iVar14 = 0;
      }
      else {
        iVar14 = *(int *)(*(int *)(iVar3 + 0x33c) + 8);
      }
      *(undefined4 *)(iVar14 + iVar13 * 4) = 0xffffffff;
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)(iVar3 + 0x338));
  }
  FUN_4a169628(local_64 + 8);
  return;
}



// Address: 4a067678

undefined4 * FUN_4a067678(undefined4 *param_1,undefined1 param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  
  puVar1 = PTR_PTR_4a0678bc;
  *param_1 = PTR_PTR_4a0678bc;
  param_1[2] = puVar1 + 0x24;
  param_1[4] = puVar1 + 0x44;
  param_1[5] = puVar1 + 0x54;
  param_1[6] = puVar1 + 100;
  param_1[3] = puVar1 + 0x34;
  param_1[1] = puVar1 + 0x14;
  param_1[7] = puVar1 + 0x74;
  *(undefined1 *)(param_1 + 8) = param_2;
  param_1[9] = 0;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(param_1 + 10);
  *puVar2 = PTR_PTR_4a0678c0;
  puVar2[2] = 10;
  puVar2[4] = 0;
  puVar2[3] = 10;
  puVar2[5] = 0;
  iVar3 = thunk_FUN_4a161570(0x28);
  puVar2[5] = iVar3;
  if (iVar3 != 0) {
    iVar3 = 0;
    if (0 < (int)puVar2[4]) {
      do {
        iVar6 = iVar3 + 1;
        *(undefined4 *)(puVar2[5] + iVar3 * 4) = *(undefined4 *)(iVar3 * 4);
        iVar3 = iVar6;
      } while (iVar6 < (int)puVar2[4]);
    }
    thunk_FUN_4a161530(0);
  }
  iVar3 = puVar2[4];
  if ((int)puVar2[4] < (int)puVar2[3]) {
    do {
      iVar6 = iVar3 + 1;
      *(undefined4 *)(puVar2[5] + iVar3 * 4) = 0;
      iVar3 = iVar6;
    } while (iVar6 < (int)puVar2[3]);
  }
  puVar2[6] = 0;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(puVar2 + 7);
  puVar1 = PTR_PTR_4a0678c4;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = puVar1;
  puVar2[5] = 0;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(puVar2 + 6);
  puVar1 = PTR_PTR_4a0678c8;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = puVar1;
  puVar2[5] = 0;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(puVar2 + 6);
  puVar1 = PTR_PTR_4a0678cc;
  puVar2[2] = 0;
  *puVar2 = puVar1;
  puVar2[3] = 0;
  puVar7 = puVar2 + -0x1d;
  piVar8 = puVar2 + -0x14;
  if (*(char *)(puVar2 + -0x15) == '\0') {
    piVar5 = (int *)FUN_4a0c3450();
    if ((int *)*piVar8 == piVar5) {
      return puVar7;
    }
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
    }
    piVar9 = (int *)*piVar8;
    if (piVar9 == (int *)0x0) goto LAB_4a0678ac;
    iVar3 = (**(code **)(*piVar9 + 8))(piVar9);
  }
  else {
    uVar4 = thunk_FUN_4a161570(0x14);
    FUN_4a0c707c(uVar4,&DAT_4a0678d0);
    piVar5 = (int *)FUN_4a0c344c();
    if ((int *)*piVar8 == piVar5) {
      return puVar7;
    }
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
    }
    piVar9 = (int *)*piVar8;
    if (piVar9 == (int *)0x0) goto LAB_4a0678ac;
    iVar3 = (**(code **)(*piVar9 + 8))(piVar9);
  }
  if (iVar3 != 0) {
    (**(code **)(*piVar9 + 4))(piVar9);
  }
LAB_4a0678ac:
  *piVar8 = (int)piVar5;
  return puVar7;
}



// Address: 4a0678ec

int FUN_4a0678ec(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  puVar1 = PTR_PTR_4a067ae8;
  puVar5 = param_1 + 0x1d;
  *param_1 = PTR_PTR_4a067ae8;
  param_1[2] = puVar1 + 0x24;
  param_1[4] = puVar1 + 0x44;
  param_1[5] = puVar1 + 0x54;
  param_1[6] = puVar1 + 100;
  param_1[3] = puVar1 + 0x34;
  param_1[1] = puVar1 + 0x14;
  param_1[7] = puVar1 + 0x74;
  *puVar5 = PTR_PTR_4a067aec;
  iVar4 = param_1[0x1f];
  iVar2 = FUN_4a0bcc84(puVar5);
  if (iVar2 != 0) {
    iVar3 = 0;
    if (0 < iVar4) {
      do {
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
      if (iVar2 == 0) goto LAB_4a067974;
    }
    FUN_4a14f21c();
  }
LAB_4a067974:
  iVar2 = FUN_4a0c6bf4(puVar5);
  puVar5 = (undefined4 *)(iVar2 + -0x18);
  *puVar5 = PTR_PTR_4a067af0;
  iVar4 = *(int *)(iVar2 + -0x10);
  iVar2 = FUN_4a0bcc84(puVar5);
  if (iVar2 != 0) {
    iVar3 = 0;
    if (0 < iVar4) {
      do {
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
      if (iVar2 == 0) goto LAB_4a0679c0;
    }
    FUN_4a14f21c();
  }
LAB_4a0679c0:
  iVar2 = FUN_4a0c6bf4(puVar5);
  puVar5 = (undefined4 *)(iVar2 + -0x18);
  *puVar5 = PTR_PTR_4a067af4;
  iVar4 = *(int *)(iVar2 + -0x10);
  iVar2 = FUN_4a0bcc84(puVar5);
  if (iVar2 != 0) {
    iVar3 = 0;
    if (0 < iVar4) {
      do {
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
      if (iVar2 == 0) goto LAB_4a067a0c;
    }
    FUN_4a14f21c();
  }
LAB_4a067a0c:
  iVar2 = FUN_4a0c6bf4(puVar5);
  iVar4 = 0;
  *(undefined4 *)(iVar2 + -0x1c) = PTR_PTR_4a067af8;
  if (0 < *(int *)(iVar2 + -0xc)) {
    do {
      piVar6 = *(int **)(*(int *)(iVar2 + -8) + iVar4 * 4);
      *(undefined4 *)(*(int *)(iVar2 + -8) + iVar4 * 4) = 0;
      if ((piVar6 != (int *)0x0) && (iVar3 = (**(code **)(*piVar6 + 8))(piVar6), iVar3 != 0)) {
        (**(code **)(*piVar6 + 4))(piVar6);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(iVar2 + -0xc));
  }
  *(undefined4 *)(iVar2 + -0xc) = 0;
  thunk_FUN_4a161530(*(undefined4 *)(iVar2 + -8));
  iVar2 = FUN_4a0c6bf4((undefined4 *)(iVar2 + -0x1c));
  piVar6 = *(int **)(iVar2 + -4);
  if ((piVar6 != (int *)0x0) && (iVar4 = (**(code **)(*piVar6 + 8))(piVar6), iVar4 != 0)) {
    (**(code **)(*piVar6 + 4))(piVar6);
  }
  return iVar2 + -0x28;
}



// Address: 4a067b18

void FUN_4a067b18(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x40) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 8);
    }
    if (*(int *)(iVar2 + iVar1 * 4) == -1) break;
    iVar1 = iVar1 + 1;
    if (7 < iVar1) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(undefined4 *)(iVar2 + iVar1 * 4) = param_2;
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 8);
  }
  *(undefined4 *)(iVar3 + iVar1 * 4) = param_3;
  return;
}



// Address: 4a067b80

/* WARNING: Removing unreachable block (ram,0x4a067d00) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a067b80(int param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  int extraout_r1;
  int iVar14;
  int extraout_r1_00;
  code *UNRECOVERED_JUMPTABLE;
  int local_2d8 [4];
  undefined *local_2c8 [2];
  int local_2c0;
  int *local_2bc;
  int local_2b4;
  int local_2b0;
  int local_2ac;
  int local_2a8;
  undefined1 *local_2a4;
  undefined1 *local_2a0;
  undefined1 *local_29c;
  undefined1 *local_298;
  undefined1 *local_294;
  undefined1 *local_290;
  undefined1 auStack_28c [84];
  undefined1 auStack_238 [84];
  undefined1 auStack_1e4 [84];
  undefined1 auStack_190 [84];
  undefined1 auStack_13c [84];
  undefined1 auStack_e8 [84];
  undefined1 *local_94;
  undefined1 *local_90;
  undefined1 *local_8c;
  int local_88 [4];
  int *local_78;
  undefined *local_74 [2];
  int local_6c;
  undefined1 auStack_60 [20];
  undefined1 auStack_4c [20];
  undefined1 auStack_38 [20];
  
  uVar5 = FUN_4a077b38();
  piVar6 = (int *)FUN_4a078b6c(uVar5,1);
  piVar7 = (int *)FUN_4a078b6c(uVar5,2);
  *(int **)(param_1 + 0x50) = piVar7;
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0xc))();
  }
  *(int **)(param_1 + 0x54) = piVar6;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))();
  }
  thunk_FUN_4a161570(0xe0);
  local_78 = (int *)FUN_4a0b4e14();
  *(int **)(param_1 + 0x18) = local_78;
  if (local_78 != (int *)0x0) {
    (**(code **)(*local_78 + 0xc))();
  }
  iVar8 = FUN_4a0ff494();
  puVar2 = PTR_DAT_4a068770;
  uVar5 = *(undefined4 *)(iVar8 + 0x520);
  iVar8 = 0;
  do {
    iVar9 = FUN_4a1458ac(uVar5,*(int *)(puVar2 + iVar8 * 8) + *(int *)(param_1 + 0x10),
                         *(int *)(puVar2 + iVar8 * 8 + 4) + *(int *)(param_1 + 0x14));
    puVar3 = PTR_DAT_4a068778;
    local_88[iVar8] = iVar9;
    iVar8 = iVar8 + 1;
  } while (iVar8 < 4);
  iVar8 = 0;
  do {
    local_2d8[0] = *(int *)PTR_DAT_4a068774;
    local_2d8[1] = *(undefined4 *)(PTR_DAT_4a068774 + 4);
    local_2d8[2] = *(undefined4 *)(PTR_DAT_4a068774 + 8);
    local_2d8[3] = *(int *)(PTR_DAT_4a068774 + 0xc);
    bVar1 = true;
    iVar9 = 0;
    do {
      iVar13 = local_88[iVar9];
      if (*(int *)(PTR_DAT_4a068778 + (iVar8 * 0xd + iVar9) * 4) == 0) {
        if (iVar13 != -1) {
LAB_4a067cc4:
          bVar1 = false;
        }
      }
      else {
        if (iVar13 == -1) goto LAB_4a067cc4;
        iVar14 = *(int *)(PTR_DAT_4a068778 + (iVar8 * 0xd + iVar9) * 4) + -1;
        if (iVar14 != 9) {
          if (local_2d8[iVar14] == -1) {
            local_2d8[iVar14] = iVar13;
          }
          else if (iVar13 != local_2d8[iVar14]) goto LAB_4a067cc4;
        }
      }
      iVar9 = iVar9 + 1;
      if (3 < iVar9) {
        iVar9 = iVar8;
        if (bVar1) goto LAB_4a067d04;
        break;
      }
    } while (bVar1);
    iVar8 = iVar8 + 1;
    iVar9 = -1;
  } while (iVar8 < 0x1d);
LAB_4a067d04:
  if (iVar9 == -1) {
                    /* WARNING: Could not recover jumptable at 0x4a067d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(bool *)(param_1 + 0x4c) = *(int *)(puVar3 + iVar9 * 0x34 + 0x30) == 1;
  FUN_4a143f18(auStack_38,uVar5,0x2e);
  local_8c = auStack_38;
  FUN_4a143f18(auStack_4c,uVar5,0x2e);
  local_90 = auStack_4c;
  FUN_4a143f18(auStack_60,uVar5,0x1b);
  local_94 = auStack_60;
  thunk_FUN_4a1490e8(auStack_28c,PTR_FUN_4a06877c,0x54,6);
  local_290 = auStack_190;
  local_294 = auStack_13c;
  local_298 = auStack_e8;
  local_29c = auStack_28c;
  local_2a0 = auStack_238;
  local_2a4 = auStack_1e4;
  iVar8 = *(int *)(param_1 + 0x10) * 0x20;
  iVar13 = *(int *)(param_1 + 0x14) * 0x20;
  local_2a8 = iVar8 + -2;
  local_2ac = iVar13 + -2;
  local_2b0 = iVar8 + 2;
  local_2b4 = iVar13 + 2;
  iVar10 = *(int *)(puVar3 + iVar9 * 0x34 + 0x10);
  iVar14 = extraout_r1;
  if (iVar10 == 0) {
    iVar14 = *(int *)(puVar3 + iVar9 * 0x34 + 0x1c);
  }
  if (iVar10 != 0 || iVar14 != 0) {
    if (iVar10 == 0) {
      local_2d8[0] = 2;
    }
    else {
      local_2d8[0] = 0;
    }
    if (*(int *)(puVar3 + iVar9 * 0x34 + 0x1c) == 0) {
      uVar5 = 2;
    }
    else {
      uVar5 = 0;
    }
    local_2d8[1] = uVar5;
    local_2d8[3] = local_2d8[0];
    FUN_4a103b90(local_298,local_2a8,local_2ac,4);
    local_2d8[0] = local_2d8[3];
    local_2d8[1] = uVar5;
    FUN_4a103d88(local_2a4,local_2a8,local_2ac,4);
    iVar14 = extraout_r1_00;
  }
  iVar10 = *(int *)(puVar3 + iVar9 * 0x34 + 0x14);
  if (iVar10 == 0) {
    iVar14 = *(int *)(puVar3 + iVar9 * 0x34 + 0x18);
  }
  if (iVar10 != 0 || iVar14 != 0) {
    if (iVar10 == 0) {
      iVar14 = 2;
    }
    else {
      iVar14 = 0;
    }
    if (*(int *)(puVar3 + iVar9 * 0x34 + 0x18) == 0) {
      uVar5 = 2;
    }
    else {
      uVar5 = 0;
    }
    local_2d8[0] = iVar14;
    local_2d8[1] = uVar5;
    FUN_4a103b90(local_298,iVar8,local_2ac,4);
    local_2d8[0] = iVar14;
    local_2d8[1] = uVar5;
    FUN_4a103d88(local_2a4,iVar8,local_2ac,4);
  }
  if (*(int *)(puVar3 + iVar9 * 0x34 + 0x20) != 2) {
    if (*(int *)(puVar3 + iVar9 * 0x34 + 0x20) == 1) {
      local_2d8[0] = 0x1e;
      local_2d8[1] = 0;
      local_2d8[2] = 0;
      FUN_4a103834(local_290,iVar8 + 0x20,local_2ac,0x20);
      local_2d8[0] = 0x1e;
      local_2d8[1] = 0;
      local_2d8[2] = 0;
      FUN_4a103904(local_29c,iVar8 + 0x20,local_2ac,0x20);
      local_2d8[0] = 0;
      local_2d8[2] = 0;
      local_2d8[1] = 0x1e;
      FUN_4a103834(local_290,iVar8,local_2ac,0x20);
      puVar11 = local_29c;
    }
    else {
      local_2d8[0] = 0x1e;
      local_2d8[1] = 0;
      local_2d8[2] = 0;
      FUN_4a103834(local_294,iVar8 + 0x20,local_2ac,0x20);
      local_2d8[0] = 0x1e;
      local_2d8[1] = 0;
      local_2d8[2] = 0;
      FUN_4a103904(local_2a0,iVar8 + 0x20,local_2ac,0x20);
      local_2d8[0] = 0;
      local_2d8[2] = 0;
      local_2d8[1] = 0x1e;
      FUN_4a103834(local_294,iVar8,local_2ac,0x20);
      puVar11 = local_2a0;
    }
    local_2d8[2] = 0;
    local_2d8[1] = 0x1e;
    local_2d8[0] = 0;
    FUN_4a103904(puVar11,iVar8,local_2ac,0x20);
  }
  if (*(int *)(puVar3 + iVar9 * 0x34 + 0x2c) != 2) {
    if (*(int *)(puVar3 + iVar9 * 0x34 + 0x2c) == 1) {
      local_2d8[0] = 0;
      local_2d8[1] = 0x1e;
      local_2d8[2] = 0;
      FUN_4a103834(local_290,local_2a8,iVar13,0x20);
      local_2d8[0] = 0;
      local_2d8[2] = 0;
      local_2d8[1] = 0x1e;
      FUN_4a103904(local_29c,local_2a8,iVar13,0x20);
      local_2d8[0] = 0x1e;
      local_2d8[1] = 0;
      local_2d8[2] = 0;
      FUN_4a103834(local_290,local_2a8,iVar13 + -0x20,0x20);
      puVar11 = local_29c;
    }
    else {
      local_2d8[0] = 0;
      local_2d8[1] = 0x1e;
      local_2d8[2] = 0;
      FUN_4a103834(local_294,local_2a8,iVar13,0x20);
      local_2d8[0] = 0;
      local_2d8[2] = 0;
      local_2d8[1] = 0x1e;
      FUN_4a103904(local_2a0,local_2a8,iVar13,0x20);
      local_2d8[0] = 0x1e;
      local_2d8[1] = 0;
      local_2d8[2] = 0;
      FUN_4a103834(local_294,local_2a8,iVar13 + -0x20,0x20);
      puVar11 = local_2a0;
    }
    local_2d8[2] = 0;
    local_2d8[1] = 0;
    local_2d8[0] = 0x1e;
    FUN_4a103904(puVar11,local_2a8,iVar13 + -0x20,0x20);
  }
  if (*(int *)(puVar3 + iVar9 * 0x34 + 0x24) != 2) {
    if (*(int *)(puVar3 + iVar9 * 0x34 + 0x24) == 1) {
      local_2d8[0] = 0x1e;
      local_2d8[1] = 0;
      local_2d8[2] = 0;
      FUN_4a103834(local_290,local_2b0,iVar13 + 0x20,0x20);
      local_2d8[0] = 0x1e;
      local_2d8[1] = 0;
      local_2d8[2] = 0;
      FUN_4a103904(local_29c,local_2b0,iVar13 + 0x20,0x20);
      local_2d8[0] = 0;
      local_2d8[2] = 0;
      local_2d8[1] = 0x1e;
      FUN_4a103834(local_290,local_2b0,iVar13,0x20);
      puVar11 = local_29c;
    }
    else {
      local_2d8[0] = 0x1e;
      local_2d8[1] = 0;
      local_2d8[2] = 0;
      FUN_4a103834(local_294,local_2b0,iVar13 + 0x20,0x20);
      local_2d8[0] = 0x1e;
      local_2d8[1] = 0;
      local_2d8[2] = 0;
      FUN_4a103904(local_2a0,local_2b0,iVar13 + 0x20,0x20);
      local_2d8[0] = 0;
      local_2d8[2] = 0;
      local_2d8[1] = 0x1e;
      FUN_4a103834(local_294,local_2b0,iVar13,0x20);
      puVar11 = local_2a0;
    }
    local_2d8[2] = 0;
    local_2d8[1] = 0x1e;
    local_2d8[0] = 0;
    FUN_4a103904(puVar11,local_2b0,iVar13,0x20);
  }
  if (*(int *)(puVar3 + iVar9 * 0x34 + 0x28) != 2) {
    if (*(int *)(puVar3 + iVar9 * 0x34 + 0x28) == 1) {
      local_2d8[0] = 0x1e;
      local_2d8[1] = 0;
      local_2d8[2] = 0;
      FUN_4a103834(local_290,iVar8 + -0x20,local_2b4,0x20);
      local_2d8[0] = 0x1e;
      local_2d8[1] = 0;
      local_2d8[2] = 0;
      FUN_4a103904(local_29c,iVar8 + -0x20,local_2b4,0x20);
      local_2d8[0] = 0;
      local_2d8[1] = 0x1e;
      local_2d8[2] = 0;
      FUN_4a103834(local_290,iVar8,local_2b4,0x20);
      puVar11 = local_29c;
    }
    else {
      local_2d8[0] = 0x1e;
      local_2d8[1] = 0;
      local_2d8[2] = 0;
      FUN_4a103834(local_294,iVar8 + -0x20,local_2b4,0x20);
      local_2d8[0] = 0x1e;
      local_2d8[1] = 0;
      local_2d8[2] = 0;
      FUN_4a103904(local_2a0,iVar8 + -0x20,local_2b4,0x20);
      local_2d8[0] = 0;
      local_2d8[2] = 0;
      local_2d8[1] = 0x1e;
      FUN_4a103834(local_294,iVar8,local_2b4,0x20);
      puVar11 = local_2a0;
    }
    local_2d8[2] = 0;
    local_2d8[1] = 0x1e;
    local_2d8[0] = 0;
    FUN_4a103904(puVar11,iVar8,local_2b4,0x20);
  }
  piVar6 = (int *)FUN_4a0c6bc0(local_2c8);
  puVar3 = PTR_PTR_4a068784;
  piVar6[2] = 0;
  piVar6[3] = 0;
  *piVar6 = (int)puVar3;
  puVar2 = PTR_PTR_4a068780;
  iVar8 = FUN_4a15e080(0x18);
  if (iVar8 == 0) {
    iVar8 = FUN_4a1669a8();
  }
  iVar9 = 0;
  do {
    local_2d8[3] = 0;
    *(undefined4 *)(iVar8 + iVar9 * 4) = 0;
    iVar9 = iVar9 + 1;
  } while (iVar9 < 6);
  thunk_FUN_4a161570(0x18);
  puVar12 = (undefined4 *)FUN_4a0c0628();
  puVar12[2] = iVar8;
  puVar12[3] = 4;
  puVar12[4] = 6;
  puVar4 = PTR_PTR_4a068788;
  *puVar12 = PTR_PTR_4a068788;
  *(undefined1 *)(puVar12 + 5) = 1;
  if (puVar12 != (undefined4 *)0x0) {
    (**(code **)(puVar4 + 0xc))(puVar12);
  }
  (**(code **)(*piVar6 + 0x1c))(piVar6);
  piVar6[2] = 6;
  piVar6[3] = (int)puVar12;
  iVar8 = 0;
  do {
    if (local_2bc == (int *)0x0) {
      iVar9 = 0;
    }
    else {
      iVar9 = local_2bc[2];
    }
    *(undefined4 *)(iVar9 + iVar8 * 4) = 0;
    iVar9 = FUN_4a1039e8();
    if (0 < iVar9) {
      if (local_2bc == (int *)0x0) {
        iVar9 = 0;
      }
      else {
        iVar9 = local_2bc[2];
      }
      *(undefined1 **)(iVar9 + iVar8 * 4) = auStack_28c + iVar8 * 0x54;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 6);
  puVar12 = (undefined4 *)FUN_4a0c6bc0(local_74);
  *puVar12 = puVar2;
  puVar12[2] = local_2c0;
  puVar12[3] = local_2bc;
  if (local_2bc != (int *)0x0) {
    (**(code **)(*local_2bc + 0xc))();
  }
  *puVar12 = puVar3;
  uVar5 = FUN_4a102d34(puVar12);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  local_74[0] = puVar3;
  iVar8 = FUN_4a0bcc84(local_74);
  if (iVar8 != 0) {
    iVar9 = 0;
    if (0 < local_6c) {
      do {
        iVar9 = iVar9 + 1;
      } while (iVar9 < local_6c);
      if (iVar8 == 0) goto LAB_4a0686c4;
    }
    FUN_4a14f21c();
  }
LAB_4a0686c4:
  FUN_4a0c6bf4(local_74);
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1c) + 0xc))();
  }
  FUN_4a0b4c10(local_78,*(undefined4 *)(param_1 + 0x1c));
  local_2c8[0] = puVar3;
  iVar8 = FUN_4a0bcc84(local_2c8);
  if (iVar8 != 0) {
    iVar9 = 0;
    if (0 < local_2c0) {
      do {
        iVar9 = iVar9 + 1;
      } while (iVar9 < local_2c0);
      if (iVar8 == 0) goto LAB_4a068730;
    }
    FUN_4a14f21c();
  }
LAB_4a068730:
  FUN_4a0c6bf4(local_2c8);
  thunk_FUN_4a1491e4(auStack_28c,6,0x54,PTR_FUN_4a06878c);
  FUN_4a16bef4(auStack_60);
  FUN_4a16bef4(auStack_4c);
  FUN_4a16bef4(auStack_38);
  return;
}



// Address: 4a0688f4

/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffc : 0x4a0b3c24 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0688f4(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 UNRECOVERED_JUMPTABLE_00;
  
  iVar8 = 0;
  iVar3 = *(int *)(param_1 + 0x40);
  iVar7 = 0;
  iVar1 = 0;
  do {
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar3 + 8);
    }
    if (*(int *)(iVar4 + iVar1 * 4) != -1) {
      iVar8 = iVar8 + 1;
      if (*(int *)(param_1 + 0x2c) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
      }
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(iVar3 + 8);
      }
      iVar4 = *(int *)(*(int *)(iVar4 + iVar1 * 4) + 0x50);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar4 + 8);
      }
      if (*(int *)(iVar4 + *(int *)(iVar5 + iVar1 * 4) * 4) >> 8 != 0) {
        iVar7 = iVar7 + 1;
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  iVar1 = 0;
  if (iVar7 == iVar8) {
    iVar1 = 2;
  }
  else if ((iVar7 != 0) && ((*(char *)(param_1 + 0x4c) == '\0' || (iVar8 >> 1 < iVar7)))) {
    iVar1 = 1;
  }
  if (*(int *)(param_1 + 0x48) == iVar1) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar1;
  if (iVar1 == 2) {
    FUN_4a0b3bc8(*(undefined4 *)(param_1 + 0x1c),0);
    FUN_4a0b3bc8(*(undefined4 *)(param_1 + 0x1c),2,0);
    FUN_4a0b3bc8(*(undefined4 *)(param_1 + 0x1c),1,*(undefined4 *)(param_1 + 0x54));
    FUN_4a0b3bc8(*(undefined4 *)(param_1 + 0x1c),3,0);
    FUN_4a0b3bc8(*(undefined4 *)(param_1 + 0x1c),5,*(undefined4 *)(param_1 + 0x54));
    iVar1 = *(int *)(param_1 + 0x1c);
    piVar2 = *(int **)(param_1 + 0x54);
  }
  else if (iVar1 == 1) {
    FUN_4a0b3bc8(*(undefined4 *)(param_1 + 0x1c),0,*(undefined4 *)(param_1 + 0x54));
    FUN_4a0b3bc8(*(undefined4 *)(param_1 + 0x1c),2,0);
    FUN_4a0b3bc8(*(undefined4 *)(param_1 + 0x1c),1,*(undefined4 *)(param_1 + 0x54));
    FUN_4a0b3bc8(*(undefined4 *)(param_1 + 0x1c),3,*(undefined4 *)(param_1 + 0x54));
    FUN_4a0b3bc8(*(undefined4 *)(param_1 + 0x1c),5,*(undefined4 *)(param_1 + 0x54));
    iVar1 = *(int *)(param_1 + 0x1c);
    piVar2 = *(int **)(param_1 + 0x54);
  }
  else {
    if (iVar1 != 0) {
      return;
    }
    FUN_4a0b3bc8(*(undefined4 *)(param_1 + 0x1c),0,*(undefined4 *)(param_1 + 0x54));
    FUN_4a0b3bc8(*(undefined4 *)(param_1 + 0x1c),2,*(undefined4 *)(param_1 + 0x54));
    FUN_4a0b3bc8(*(undefined4 *)(param_1 + 0x1c),1,*(undefined4 *)(param_1 + 0x54));
    FUN_4a0b3bc8(*(undefined4 *)(param_1 + 0x1c),3,0);
    FUN_4a0b3bc8(*(undefined4 *)(param_1 + 0x1c),5,0);
    iVar1 = *(int *)(param_1 + 0x1c);
    piVar2 = (int *)0x0;
  }
  if (*(char *)(iVar1 + 0x110) == '\0') {
    return;
  }
  if (*(int *)(iVar1 + 0xf0) < 5) {
    return;
  }
  piVar6 = *(int **)(*(int *)(iVar1 + 0x10c) + 0x10);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))();
  }
  *(int **)(*(int *)(iVar1 + 0x10c) + 0x10) = piVar2;
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4a0b3c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  iVar1 = (**(code **)(*piVar6 + 8))(piVar6);
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0b3c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a0b3c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar6 + 4))(piVar6);
  return;
}



// Address: 4a0689ac

undefined4 FUN_4a0689ac(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// Address: 4a0689b4

int FUN_4a0689b4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_30 [20];
  
  puVar3 = (undefined4 *)FUN_4a0c6bc0();
  puVar1 = PTR_PTR_4a068b54;
  *puVar3 = PTR_PTR_4a068b54;
  puVar3[3] = puVar1 + 0x34;
  puVar3[4] = param_2;
  puVar3[2] = puVar1 + 0x24;
  puVar3[5] = param_3;
  puVar3[6] = 0;
  puVar3[7] = 0;
  piVar4 = (int *)FUN_4a0c6bc0(puVar3 + 8);
  puVar1 = PTR_PTR_4a068b5c;
  piVar4[2] = 0;
  piVar4[3] = 0;
  *piVar4 = (int)puVar1;
  puVar1 = PTR_PTR_4a068b58;
  iVar5 = FUN_4a15e080(0x20);
  if (iVar5 == 0) {
    iVar5 = FUN_4a1669a8();
  }
  iVar6 = 0;
  do {
    *(undefined4 *)(iVar5 + iVar6 * 4) = 0;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 8);
  thunk_FUN_4a161570(0x18);
  puVar3 = (undefined4 *)FUN_4a0c0628();
  puVar3[3] = 4;
  puVar3[4] = 8;
  puVar2 = PTR_PTR_4a068b60;
  *puVar3 = PTR_PTR_4a068b60;
  puVar3[2] = iVar5;
  *(undefined1 *)(puVar3 + 5) = 1;
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)(puVar2 + 0xc))(puVar3);
  }
  (**(code **)(*piVar4 + 0x1c))(piVar4);
  piVar4[2] = 8;
  piVar4[3] = (int)puVar3;
  iVar5 = FUN_4a16be24(piVar4 + 5,8);
  *(undefined4 *)(iVar5 + 0x14) = 0xffffffff;
  *(undefined1 *)(iVar5 + 0x18) = 0;
  *(undefined4 *)(iVar5 + 0x1c) = 0;
  *(undefined4 *)(iVar5 + 0x20) = 0;
  puVar3 = (undefined4 *)FUN_4a0c6bc0(auStack_30);
  *puVar3 = puVar1;
  puVar3[2] = *(undefined4 *)(iVar5 + 8);
  piVar4 = *(int **)(iVar5 + 0xc);
  puVar3[3] = piVar4;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))();
  }
  iVar6 = 0;
  *puVar3 = PTR_PTR_4a068b64;
  if (0 < (int)puVar3[2]) {
    do {
      if (puVar3[3] == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(puVar3[3] + 8);
      }
      *(undefined4 *)(iVar7 + iVar6 * 4) = 0xffffffff;
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)puVar3[2]);
  }
  FUN_4a16bef4(auStack_30);
  return iVar5 + -0x34;
}



// Address: 4a068b80

void FUN_4a068b80(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  puVar1 = PTR_PTR_4a068cf0;
  *param_1 = PTR_PTR_4a068cf0;
  param_1[3] = puVar1 + 0x34;
  param_1[2] = puVar1 + 0x24;
  piVar5 = (int *)param_1[6];
  if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  piVar5 = (int *)param_1[0x14];
  if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  piVar5 = (int *)param_1[0x15];
  if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  piVar5 = (int *)param_1[7];
  if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  iVar2 = FUN_4a16bef4(param_1 + 0xd);
  puVar6 = (undefined4 *)(iVar2 + -0x14);
  *puVar6 = PTR_PTR_4a068cf4;
  iVar4 = *(int *)(iVar2 + -0xc);
  iVar2 = FUN_4a0bcc84(puVar6);
  if (iVar2 != 0) {
    iVar3 = 0;
    if (0 < iVar4) {
      do {
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
      if (iVar2 == 0) goto LAB_4a068cdc;
    }
    FUN_4a14f21c();
  }
LAB_4a068cdc:
  iVar2 = FUN_4a0c6bf4(puVar6);
  *(undefined **)(iVar2 + -0x20) = PTR_PTR_4a0c0674;
  *(undefined4 *)(iVar2 + -0x1c) = 0xffffffff;
  return;
}



// Address: 4a068cf8

void FUN_4a068cf8(int param_1)

{
  if (param_1 != 0) {
    FUN_4a068d08();
  }
  return;
}



// Address: 4a068d08

void FUN_4a068d08(void)

{
  return;
}



// Address: 4a068d14

void FUN_4a068d14(int param_1)

{
  if (param_1 != 0) {
    FUN_4a068d24();
  }
  return;
}



// Address: 4a068d24

void FUN_4a068d24(void)

{
  FUN_4a068d08();
  return;
}



// Address: 4a068d30

void FUN_4a068d30(int param_1)

{
  if (param_1 != 0) {
    FUN_4a068d40();
  }
  return;
}



// Address: 4a068d40

void FUN_4a068d40(void)

{
  FUN_4a068d08();
  return;
}



// Address: 4a068d4c

void FUN_4a068d4c(int param_1,int param_2)

{
  undefined4 uVar1;
  bool bVar2;
  
  bVar2 = param_2 != DAT_4a068d84;
  if ((*(int *)(param_1 + 0x30) == 0) || ((bool)*(char *)(param_1 + 0x15) != bVar2)) {
    FUN_4a161530();
    *(bool *)(param_1 + 0x15) = bVar2;
    if (bVar2) {
      uVar1 = 0x48;
    }
    else {
      uVar1 = 0xc;
    }
    uVar1 = FUN_4a14acac(8,uVar1);
    *(undefined4 *)(param_1 + 0x30) = uVar1;
  }
  return;
}



// Address: 4a068d88

void FUN_4a068d88(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_14;
  
  if (*(int *)(PTR_DAT_4a068dbc + 0x24) != 0) {
    iVar1 = 0;
    iVar3 = *(int *)PTR_DAT_4a068dc0;
    do {
      iVar2 = iVar1 * 0xd8 + iVar3;
      if (*(int *)(iVar2 + 8) == param_1) {
        *(undefined4 *)(iVar2 + 8) = 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x20);
  }
  uStack_14 = param_2;
  host_glDeleteTextures_thumb(1,&uStack_14);
  return;
}



// Address: 4a068dc4

void FUN_4a068dc4(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_28 [20];
  
  FUN_4a0978b4(auStack_28);
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar1 = 0;
    do {
      iVar2 = uVar1 * 8;
      FUN_4a161530(*(undefined4 *)(*(int *)(param_1 + 0x30) + iVar2));
      uVar1 = uVar1 + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x30) + iVar2) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x30) + iVar2 + 4) = 0;
    } while (uVar1 < 0xc);
  }
  FUN_4a0978e0(auStack_28);
  return;
}



// Address: 4a068e04

void FUN_4a068e04(int param_1,uint *param_2)

{
  uint target;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  *(undefined4 *)(PTR_DAT_4a068f44 + 0x28) = 0;
  host_glGenTextures_thumb(1,param_2);
  iVar7 = 4;
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar7 = *(int *)(param_1 + 0x28);
  }
  FUN_4a1506f8(DAT_4a068f48,iVar7);
  target = DAT_4a068f4c;
  if (*(char *)(param_1 + 0x15) == '\0') {
    target = DAT_4a068f48 + 0xec;
  }
  host_glBindTexture_thumb(target,*param_2);
  if ((*PTR_DAT_4a068f50 == '\0') && (0x100 < *(int *)PTR_DAT_4a068f54)) {
    thunk_FUN_4a150b70(target,DAT_4a068f58,*(undefined4 *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar7 = 0;
    while( true ) {
      iVar4 = 6;
      if (*(char *)(param_1 + 0x15) == '\0') {
        iVar4 = 1;
      }
      if (iVar4 <= iVar7) break;
      uVar6 = 0;
      do {
        iVar4 = DAT_4a068f48 + 0xec;
        if (*(char *)(param_1 + 0x15) != '\0') {
          iVar4 = iVar7 + DAT_4a068f4c + 2;
        }
        puVar1 = (undefined4 *)FUN_4a0692a4(param_1,iVar4,uVar6);
        if (puVar1[1] != 0) {
          if (*(char *)(param_1 + 0x14) == '\0') {
            iVar2 = *(int *)(param_1 + 0x1c) >> (uVar6 & 0xff);
            iVar5 = 1;
            if (0 < iVar2) {
              iVar5 = iVar2;
            }
            iVar3 = *(int *)(param_1 + 0x18) >> (uVar6 & 0xff);
            iVar2 = 1;
            if (0 < iVar3) {
              iVar2 = iVar3;
            }
            thunk_FUN_4a150ac4(iVar4,uVar6,*(undefined4 *)(param_1 + 0x20),iVar2,iVar5,0,
                               *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                               *puVar1);
          }
          else {
            iVar2 = *(int *)(param_1 + 0x1c) >> (uVar6 & 0xff);
            iVar5 = 1;
            if (0 < iVar2) {
              iVar5 = iVar2;
            }
            iVar3 = *(int *)(param_1 + 0x18) >> (uVar6 & 0xff);
            iVar2 = 1;
            if (0 < iVar3) {
              iVar2 = iVar3;
            }
            thunk_FUN_4a14ff14(iVar4,uVar6,*(undefined4 *)(param_1 + 0x20),iVar2,iVar5,0,puVar1[1],
                               *puVar1);
          }
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < 0xc);
      iVar7 = iVar7 + 1;
    }
  }
  iVar7 = 0;
  do {
    if (*PTR_DAT_4a068f50 == '\0') {
      thunk_FUN_4a150b70(target,iVar7 + 0x2800,*(undefined4 *)(param_1 + iVar7 * 4));
    }
    else {
      FUN_4a150b60(target,iVar7 + 0x2800,*(undefined4 *)(param_1 + iVar7 * 4));
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  *(undefined4 *)(PTR_DAT_4a068f44 + 0x28) = 1;
  return;
}



// Address: 4a068f5c

void FUN_4a068f5c(int param_1,uint *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  byte *pbVar9;
  ushort *puVar10;
  byte *pbVar11;
  int iVar12;
  ushort *puVar13;
  int iVar14;
  byte *pbVar15;
  int iVar16;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int iStack_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  byte *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  int iStack_1c;
  uint *local_18;
  
  if (((*(int *)(param_1 + 0x30) != 0) && (*(int *)(*(int *)(param_1 + 0x30) + 4) == 0)) ||
     (*(char *)(param_1 + 0x2c) != '\0')) {
    *(undefined1 *)(param_1 + 0x2c) = 1;
    iVar12 = *(int *)(param_1 + 0x18);
    iVar14 = *(int *)(param_1 + 0x1c);
    iStack_1c = param_1;
    local_18 = param_2;
    iVar5 = FUN_4a02af98(iVar14 * iVar12,*(undefined4 *)(param_1 + 0x20),
                         *(undefined4 *)(param_1 + 0x24));
    if (*(int *)(*(int *)(param_1 + 0x30) + 4) != iVar5) {
      *(int *)(*(int *)(param_1 + 0x30) + 4) = iVar5;
      uVar6 = host_s3eMallocBase_thumb();
      **(undefined4 **)(param_1 + 0x30) = uVar6;
    }
    local_30 = **(int **)(param_1 + 0x30);
    local_34 = host_s3eSurfaceGetInt_thumb(4);
    iVar7 = host_s3eSurfaceGetInt_thumb(5);
    iVar5 = 1;
    do {
      iVar16 = iVar5;
      if (iVar12 <= iVar16) break;
      iVar5 = iVar16 * 2;
    } while (iVar16 * 2 < local_34);
    iVar5 = 1;
    do {
      local_38 = iVar5;
      if (iVar14 <= local_38) break;
      iVar5 = local_38 * 2;
    } while (local_38 * 2 < iVar7);
    local_3c = (byte *)host_s3eMallocBase_thumb(iVar16 * local_38 * 4);
    uVar4 = DAT_4a06928c;
    host_glBindTexture_thumb(DAT_4a06928c,*local_18);
    if (*PTR_DAT_4a069290 == '\0') {
      FUN_4a150140(uVar4);
    }
    local_20 = *(int *)(param_1 + 0x18);
    local_40 = thunk_FUN_4a0015f0(local_20 + iVar16 + -1,iVar16);
    iVar5 = *(int *)(param_1 + 0x1c);
    local_44 = thunk_FUN_4a0015f0(iVar5 + local_38 + -1,local_38);
    local_24 = thunk_FUN_4a171fac(local_20);
    uVar6 = thunk_FUN_4a171fac(iVar16);
    local_48 = thunk_FUN_4a171bb8(uVar6,local_24);
    uVar6 = thunk_FUN_4a171fac(iVar5);
    uVar8 = thunk_FUN_4a171fac(local_38);
    local_4c = thunk_FUN_4a171bb8(uVar8,uVar6);
    local_50 = FUN_4a02af98(iVar12,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    local_54 = FUN_4a02af98(iVar16,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    for (local_58 = 0; local_58 < local_44; local_58 = local_58 + 1) {
      local_5c = local_58 * local_38 * local_50 + local_30;
      for (local_60 = 0; local_60 < local_40; local_60 = local_60 + 1) {
        local_80 = local_48;
        local_7c = local_4c;
        uVar6 = thunk_FUN_4a171fac(local_60);
        uVar6 = thunk_FUN_4a17211c(uVar6,local_48);
        uVar8 = thunk_FUN_4a171fac(local_58);
        local_74 = thunk_FUN_4a17211c(uVar8,local_4c);
        local_6c = local_38;
        local_68 = 0;
        local_64 = 0;
        local_78 = uVar6;
        iStack_70 = iVar16;
        FUN_4a00808c(&local_68,&iStack_70,&local_78,&local_80,0xff,0xff,0xff,0xff);
        iVar12 = *(int *)(param_1 + 0x18) - iVar16 * local_60;
        iVar5 = iVar16;
        if (iVar12 < iVar16) {
          iVar5 = iVar12;
        }
        iVar14 = *(int *)(param_1 + 0x1c) - local_38 * local_58;
        iVar12 = local_38;
        if (iVar14 < local_38) {
          iVar12 = iVar14;
        }
        FUN_4a15074c(0,0,iVar16,local_38,DAT_4a069298,DAT_4a069294,local_3c);
        puVar13 = (ushort *)(local_50 * (iVar12 + -1) + local_5c);
        local_5c = local_5c + local_54;
        iVar14 = *(int *)(param_1 + 0x20);
        if ((iVar14 == DAT_4a069298) && (*(int *)(param_1 + 0x24) == DAT_4a06929c)) {
          pbVar15 = local_3c;
          for (iVar14 = 0; iVar14 < iVar12; iVar14 = iVar14 + 1) {
            pbVar9 = pbVar15;
            puVar10 = puVar13;
            for (iVar7 = 0; iVar7 < iVar5; iVar7 = iVar7 + 1) {
              bVar3 = *pbVar9;
              pbVar11 = pbVar9 + 1;
              pbVar1 = pbVar9 + 3;
              pbVar2 = pbVar9 + 2;
              pbVar9 = pbVar9 + 4;
              *puVar10 = (ushort)(bVar3 >> 4) << 0xc | (ushort)(*pbVar11 >> 4) << 8 |
                         (ushort)(*pbVar2 >> 4) << 4 | (ushort)(*pbVar1 >> 4);
              puVar10 = puVar10 + 1;
            }
            puVar13 = (ushort *)((int)puVar13 - local_50);
            pbVar15 = pbVar15 + iVar16 * 4;
          }
        }
        else if ((iVar14 == DAT_4a069298) && (*(int *)(param_1 + 0x24) == DAT_4a069294)) {
          local_28 = iVar16 << 2;
          local_2c = iVar5 << 2;
          pbVar15 = local_3c;
          for (iVar5 = 0; iVar5 < iVar12; iVar5 = iVar5 + 1) {
            thunk_FUN_4a000f84(puVar13,pbVar15,local_2c);
            puVar13 = (ushort *)((int)puVar13 - local_50);
            pbVar15 = pbVar15 + local_28;
          }
        }
        else if ((iVar14 == DAT_4a069298 + -1) && (*(int *)(param_1 + 0x24) == DAT_4a0692a0)) {
          pbVar15 = local_3c;
          for (iVar14 = 0; iVar14 < iVar12; iVar14 = iVar14 + 1) {
            pbVar9 = pbVar15;
            puVar10 = puVar13;
            for (iVar7 = 0; iVar7 < iVar5; iVar7 = iVar7 + 1) {
              bVar3 = *pbVar9;
              pbVar11 = pbVar9 + 1;
              pbVar1 = pbVar9 + 2;
              pbVar9 = pbVar9 + 4;
              *puVar10 = (ushort)(bVar3 >> 3) << 0xb | (ushort)(*pbVar11 >> 2) << 5 |
                         (ushort)(*pbVar1 >> 3);
              puVar10 = puVar10 + 1;
            }
            puVar13 = (ushort *)((int)puVar13 - local_50);
            pbVar15 = pbVar15 + iVar16 * 4;
          }
        }
        else {
          if ((iVar14 != DAT_4a069298 + -1) || (*(int *)(param_1 + 0x24) != DAT_4a069294)) break;
          pbVar15 = local_3c;
          for (iVar14 = 0; iVar14 < iVar12; iVar14 = iVar14 + 1) {
            puVar10 = puVar13;
            pbVar9 = pbVar15;
            for (iVar7 = 0; iVar7 < iVar5; iVar7 = iVar7 + 1) {
              *(byte *)puVar10 = *pbVar9;
              pbVar11 = pbVar9 + 2;
              *(byte *)((int)puVar10 + 1) = pbVar9[1];
              pbVar9 = pbVar9 + 4;
              *(byte *)(puVar10 + 1) = *pbVar11;
              puVar10 = (ushort *)((int)puVar10 + 3);
            }
            puVar13 = (ushort *)((int)puVar13 - local_50);
            pbVar15 = pbVar15 + iVar16 * 4;
          }
        }
      }
    }
    host_s3eFreeBase_thumb(local_3c);
  }
  return;
}



// Address: 4a0692a4

int FUN_4a0692a4(int param_1,int param_2,int param_3)

{
  if (param_2 == DAT_4a0692c0) {
    param_3 = param_3 << 3;
  }
  else {
    param_3 = ((param_2 + DAT_4a0692c4) * 0xc + param_3) * 8;
  }
  return *(int *)(param_1 + 0x30) + param_3;
}



// Address: 4a0692c8

void FUN_4a0692c8(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 != DAT_4a069300) {
    if (param_2 < DAT_4a069300) {
      if ((param_2 != DAT_4a069304) && (param_2 - DAT_4a069304 != 1)) {
        return;
      }
    }
    else if (param_2 - DAT_4a069300 != 1) {
      if ((param_2 - DAT_4a069300) + DAT_4a069308 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x10) = param_3;
      return;
    }
  }
  *(undefined4 *)(param_2 * 4 + param_1 + -0xa000) = param_3;
  return;
}



// Address: 4a06930c

void FUN_4a06930c(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5,int param_6,
                 int param_7,undefined4 param_8,undefined4 param_9,int param_10)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_34 [16];
  int iStack_24;
  undefined4 local_20;
  uint local_1c;
  int iStack_18;
  
  iStack_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  iStack_18 = param_4;
  FUN_4a0978b4(auStack_34);
  if (*(int *)PTR_DAT_4a0693dc != 0) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(int *)PTR_DAT_4a0693dc + 0x2178);
  }
  FUN_4a068d4c(param_1,local_20);
  iVar4 = 0;
  if (0 < param_4) {
    iVar4 = param_4;
  }
  iVar6 = 0;
  if (0 < param_5) {
    iVar6 = param_5;
  }
  iVar1 = FUN_4a02af98(param_6,param_8,param_9);
  iVar7 = *(int *)(param_1 + 0x18) >> (local_1c & 0xff);
  iVar2 = *(int *)(param_1 + 0x1c) >> (local_1c & 0xff);
  if (iVar7 < iVar4 + param_6) {
    param_6 = iVar7 - iVar4;
  }
  if (iVar2 < iVar6 + param_7) {
    param_7 = iVar2 - iVar6;
  }
  piVar3 = (int *)FUN_4a0692a4(param_1,local_20,local_1c);
  iVar4 = FUN_4a02af98(iVar7 * iVar6 + iVar4,param_8,param_9);
  iVar4 = iVar4 + *piVar3;
  uVar5 = FUN_4a02af98(param_6,param_8,param_9);
  iVar6 = FUN_4a02af98(iVar7,param_8,param_9);
  for (iVar2 = 0; iVar2 < param_7; iVar2 = iVar2 + 1) {
    thunk_FUN_4a000f84(iVar4,param_10,uVar5);
    iVar4 = iVar4 + iVar6;
    param_10 = param_10 + iVar1;
  }
  FUN_4a0978e0(auStack_34);
  return;
}



// Address: 4a0693e0

undefined4 * FUN_4a0693e0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  thunk_FUN_4a00121c(param_1,0x34);
  *param_1 = DAT_4a069404;
  param_1[1] = DAT_4a069408;
  uVar1 = DAT_4a06940c;
  param_1[2] = DAT_4a06940c;
  param_1[3] = uVar1;
  param_1[4] = 0;
  return param_1;
}



// Address: 4a069410

int FUN_4a069410(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar1 = 0;
    do {
      iVar2 = iVar1 * 8;
      if (*(int *)(*(int *)(param_1 + 0x30) + iVar2) != 0) {
        host_s3eFreeBase_thumb();
        *(undefined4 *)(*(int *)(param_1 + 0x30) + iVar2) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0x30) + iVar2 + 4) = 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
  }
  FUN_4a161530(*(undefined4 *)(param_1 + 0x30));
  return param_1;
}



// Address: 4a06944c

void FUN_4a06944c(int *param_1,int param_2,int param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined1 auStack_28 [20];
  
  FUN_4a0978b4(auStack_28);
  puVar1 = PTR_DAT_4a069490;
  param_1[1] = param_2;
  param_1[2] = param_4;
  if (*(int *)(puVar1 + 0x38) == 0) {
    iVar2 = FUN_4a161570(param_2,param_1 + 3);
    *param_1 = iVar2;
    if (param_3 != 0) {
      thunk_FUN_4a000f84(iVar2,param_3,param_2);
    }
  }
  else {
    *param_1 = param_3;
  }
  FUN_4a0978e0(auStack_28);
  return;
}



// Address: 4a069494

void FUN_4a069494(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = param_1;
  uStack_c = param_2;
  if (*PTR_DAT_4a0694b8 != '\0') {
    FUN_4a09bbd4(*(undefined4 *)PTR_DAT_4a0694bc,1,&local_10);
  }
  host_glDeleteBuffers_thumb(1,&uStack_c);
  return;
}



// Address: 4a0694c0

void FUN_4a0694c0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(PTR_DAT_4a0694dc + 0x38) == 0) {
    thunk_FUN_4a000f84(*param_1 + param_2,param_4);
  }
  return;
}



// Address: 4a0694e0

void FUN_4a0694e0(undefined4 *param_1,uint *param_2)

{
  uint target;
  
  host_glGenBuffers_thumb(1,param_2);
  target = DAT_4a069508;
  host_glBindBuffer_thumb(DAT_4a069508,*param_2);
  host_glBufferData_thumb(target,param_1[1],(void *)*param_1,param_1[2]);
  return;
}



// Address: 4a06950c

void FUN_4a06950c(void)

{
  return;
}



// Address: 4a06950e

undefined4 FUN_4a06950e(void)

{
  undefined4 in_r3;
  undefined4 local_8 [2];
  
  local_8[0] = in_r3;
  host_glGenBuffers_thumb(1,local_8);
  return local_8[0];
}



// Address: 4a069520

undefined4 * FUN_4a069520(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// Address: 4a06952c

undefined4 *
FUN_4a06952c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  FUN_4a0978b4(&puStack_20);
  if (*(int *)(PTR_DAT_4a069558 + 0x38) == 0) {
    FUN_4a161530(*param_1);
  }
  *param_1 = 0;
  FUN_4a0978e0(&puStack_20);
  return param_1;
}



// Address: 4a069560

void FUN_4a069560(ushort *param_1,undefined4 param_2,undefined1 param_3)

{
  ushort uVar1;
  
  if (*(int *)(param_1 + 6) == 0 && *(int *)(param_1 + 4) == 0) {
    return;
  }
  if (*(int *)(param_1 + 4) == 0) {
    thunk_FUN_4a14fd18(0x8892,0);
  }
  else {
    thunk_FUN_4a14fd18(0x8892);
  }
  if ((param_1[1] & 8) == 0) {
    uVar1 = *param_1 & 0xf | 0x1400;
  }
  else {
    uVar1 = 0x1406;
  }
  thunk_FUN_4a150d48(param_2,(*param_1 & 0x3fff) >> 0xb,uVar1,param_3);
  return;
}



// Address: 4a069608

ulonglong FUN_4a069608(ushort *param_1,uint param_2,int param_3)

{
  ushort uVar1;
  uint extraout_r1;
  uint type;
  void *indices;
  bool bVar2;
  ulonglong uVar3;
  
  indices = *(void **)(param_1 + 6);
  if (indices == (void *)0x0 && *(int *)(param_1 + 4) == 0) {
    return (ulonglong)param_2;
  }
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_4a14fd18(0x8893);
    indices = (void *)(uint)param_1[3];
  }
  uVar1 = param_1[1];
  bVar2 = (uVar1 & 8) == 0;
  if (bVar2) {
    uVar1 = *param_1;
  }
  if (bVar2) {
    type = uVar1 & 0xf | 0x1400;
  }
  else {
    type = 0x1406;
  }
  host_glDrawElements_arm(param_2,param_3,type,indices);
  if (*(int *)(param_1 + 4) != 0) {
    uVar3 = FUN_4a1542f4(0x8893,0);
    return uVar3;
  }
  return (ulonglong)extraout_r1 << 0x20;
}



// Address: 4a0696a4

void FUN_4a0696a4(undefined2 *param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,
                 undefined2 param_5)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 6) = param_3;
  *(undefined4 *)(param_1 + 8) = param_4;
  param_1[2] = param_5;
  param_1[1] = 1;
  param_1[3] = 0;
  return;
}



// Address: 4a0696c0

void FUN_4a0696c0(ushort *param_1,code *param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar2 = *(uint *)(param_1 + 6);
  }
  else {
    thunk_FUN_4a14fd18(0x8892,*(int *)(param_1 + 4),param_3,param_4);
    uVar2 = (uint)param_1[3];
  }
  uVar1 = *param_1 & 0xf;
  if (uVar1 != 2) {
    param_3 = 0;
  }
  if (param_3 == 0) {
    if ((param_1[1] & 8) == 0) {
      param_3 = uVar1 | 0x1400;
    }
    else {
      param_3 = 0x1406;
    }
  }
  (*param_2)((*param_1 & 0x3fff) >> 0xb,param_3,param_1[2],uVar2);
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  FUN_4a1542f4(0x8892,0);
  return;
}



// Address: 4a069758

void FUN_4a069758(ushort *param_1,code *param_2,undefined4 param_3)

{
  ushort uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar2 = *(uint *)(param_1 + 6);
  }
  else {
    thunk_FUN_4a14fd18(0x8892,*(int *)(param_1 + 4),param_3);
    uVar2 = (uint)param_1[3];
  }
  if ((param_1[1] & 8) == 0) {
    uVar1 = *param_1 & 0xf | 0x1400;
  }
  else {
    uVar1 = 0x1406;
  }
  (*param_2)(uVar1,param_1[2],uVar2);
  if (*(int *)(param_1 + 4) != 0) {
    FUN_4a1542f4(0x8892,0);
    return;
  }
  return;
}



// Address: 4a0697d0

undefined4 FUN_4a0697d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_4a0696a4(param_1,DAT_4a0697ec,param_2,param_3,0);
  return param_1;
}



// Address: 4a0697f0

undefined4 FUN_4a0697f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_4a0696a4(param_1,DAT_4a06980c,param_2,param_3,0);
  return param_1;
}



// Address: 4a069810

undefined4 FUN_4a069810(undefined4 param_1)

{
  FUN_4a0696a4(param_1,0,0,0,0);
  return param_1;
}



// Address: 4a069850

void FUN_4a069850(uint param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_4a0698ac;
  iVar3 = *(int *)PTR_DAT_4a0698ac;
  if ((param_1 < *(uint *)(iVar3 + 900)) ||
     (*(uint *)(iVar3 + 900) + *(int *)(iVar3 + 0x380) <= param_1)) {
    thunk_FUN_4a161570(8);
    uVar2 = thunk_FUN_4a0607d8();
    *(undefined4 *)(param_1 + 0x48) = uVar2;
    FUN_4a0921e2(*(int *)puVar1 + DAT_4a0698b0,param_1,1);
  }
  else {
    *(int *)(iVar3 + 0x388) = *(int *)(iVar3 + 0x38c);
    *(int *)(iVar3 + 0x38c) = *(int *)(iVar3 + 0x38c) + 8;
    uVar2 = thunk_FUN_4a0607d8();
    *(undefined4 *)(param_1 + 0x48) = uVar2;
  }
  return;
}



// Address: 4a0698b8

uint FUN_4a0698b8(int param_1)

{
  return (*(uint *)(param_1 + 0x10) & 0x1ff) >> 8;
}



// Address: 4a0698c8

int FUN_4a0698c8(int param_1)

{
  if (-1 < *(int *)(param_1 + 0x10) << 0x1c) {
    return ((*(int *)(param_1 + 0x10) << 0x1b) >> 0x1f) + 1;
  }
  return 2;
}



// Address: 4a0698e4

uint FUN_4a0698e4(int param_1)

{
  return (*(uint *)(param_1 + 0x10) & 0x7f) >> 6;
}



// Address: 4a0698f4

void FUN_4a0698f4(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x10) & 0xfffffff7 | 0x10;
  }
  else if (param_2 == 1) {
    uVar1 = *(uint *)(param_1 + 0x10) & 0xffffffe7;
  }
  else {
    if (param_2 != 2) {
      return;
    }
    uVar1 = *(uint *)(param_1 + 0x10) | 8;
  }
  *(uint *)(param_1 + 0x10) = uVar1;
  return;
}



// Address: 4a06991c

void FUN_4a06991c(int param_1,int param_2)

{
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfff8ffff | param_2 << 0x10;
  return;
}



// Address: 4a06992c

void FUN_4a06992c(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = *(int *)(uVar2 * 4 + param_1 + 0x2c);
    if (iVar1 != 0) {
      FUN_4a06148c(iVar1,param_2);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  return;
}



// Address: 4a069950

void FUN_4a069950(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x10) | 4;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x10) & 0xfffffffb;
  }
  *(uint *)(param_1 + 0x10) = uVar1;
  return;
}



// Address: 4a069962

undefined4 FUN_4a069962(int param_1)

{
  if ((((*(uint *)(param_1 + 0x10) & 0x7ffff) >> 0x10 == 5) && (*(int *)(param_1 + 0x2c) != 0)) &&
     (*(int *)(*(int *)(param_1 + 0x2c) + 0x34) << 0x1c < 0)) {
    return 1;
  }
  return 0;
}



// Address: 4a069984

uint FUN_4a069984(int param_1)

{
  if ((int)(*(uint *)(param_1 + 0x10) << 0x1e) < 0) {
    return 2;
  }
  return *(uint *)(param_1 + 0x10) & 1;
}



// Address: 4a069994

void FUN_4a069994(int param_1,int param_2)

{
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xe1ffffff | param_2 << 0x19;
  return;
}



// Address: 4a0699a6

void FUN_4a0699a6(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  FUN_4a060714();
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_2 + 0xe);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_2 + 0x10) & 0xfffffdff;
  *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  uVar1 = 0;
  do {
    iVar2 = uVar1 * 4;
    uVar1 = uVar1 + 1;
    *(undefined4 *)(iVar2 + param_1 + 0x2c) = *(undefined4 *)(iVar2 + param_2 + 0x2c);
  } while (uVar1 < 4);
  if (*(int *)(param_1 + 0x48) != 0) {
    thunk_FUN_4a060808();
    thunk_FUN_4a161530();
  }
  if (*(int *)(param_2 + 0x48) == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  else {
    FUN_4a069850(param_1);
    thunk_FUN_4a000f84(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_2 + 0x48),8);
  }
  uVar1 = 0;
  do {
    iVar2 = uVar1 * 4 + param_1;
    iVar3 = uVar1 * 4 + param_2;
    uVar1 = uVar1 + 1;
    *(undefined2 *)(iVar2 + 0x4c) = *(undefined2 *)(iVar3 + 0x4c);
    *(undefined2 *)(iVar2 + 0x4e) = *(undefined2 *)(iVar3 + 0x4e);
  } while (uVar1 < 2);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  *(undefined2 *)(param_1 + 0x1a) = *(undefined2 *)(param_2 + 0x1a);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffffefff;
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  return;
}



// Address: 4a069a50

void FUN_4a069a50(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x10) << 0x16 < 0) {
    uVar1 = 1;
    do {
      FUN_4a046740(uVar1 * 4 + param_1 + 0x2c,s_CIwTexture_4a069acc,0);
      uVar1 = uVar1 + 1;
    } while (uVar1 < 4);
  }
  else {
    uVar1 = 0;
    do {
      FUN_4a046740(uVar1 * 4 + param_1 + 0x2c,s_CIwTexture_4a069acc,0);
      uVar1 = uVar1 + 1;
    } while (uVar1 < 4);
  }
  FUN_4a046740(param_1 + 0x54,s_CIwGxShaderTechnique_4a069ad8,0);
  uVar1 = (*(uint *)(param_1 + 0x10) & 0x1ffffff) >> 0x16;
  if (((uVar1 == 1) || (uVar1 == 6)) && (*(int *)(param_1 + 0x30) == 0)) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfe3fffff;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_4a0921e2(*(int *)PTR_DAT_4a069af0 + DAT_4a069af4,param_1,1);
  }
  return;
}



// Address: 4a069af8

void FUN_4a069af8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_4a02b1e8(param_2);
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}



// Address: 4a069b0c

void FUN_4a069b0c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = DAT_4a069b68;
  puVar1 = PTR_DAT_4a069b64;
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_4a09215a(*(int *)PTR_DAT_4a069b64 + DAT_4a069b68,param_1,param_3,param_4,param_4);
    if (*(int *)(param_1 + 0x48) != 0) {
      thunk_FUN_4a060808();
      thunk_FUN_4a161530();
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    FUN_4a09215a(*(int *)puVar1 + iVar2,param_2);
    FUN_4a0921e2(*(int *)puVar1 + iVar2,param_1,1);
  }
  FUN_4a0a3ef6(param_1,param_2);
  return;
}



// Address: 4a069b70

void FUN_4a069b70(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  undefined1 auStack_7c [20];
  short local_68;
  char local_65;
  short sStack_64;
  short sStack_62;
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [8];
  int local_4c;
  int local_34;
  undefined1 auStack_30 [4];
  uint local_2c;
  uint local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  FUN_4a06067c();
  local_18 = param_1 + 0x1c;
  local_1c = param_1 + 0x24;
  local_20 = param_1 + 0x28;
  if (*PTR_DAT_4a069d98 == '\0') {
    FUN_4a069e28(auStack_7c);
    if ((((((local_68 == *(short *)(param_1 + 0x14)) && (sStack_64 == *(short *)(param_1 + 0x18)))
          && (sStack_62 == *(short *)(param_1 + 0x1a))) &&
         ((iVar1 = FUN_4a145d80(auStack_60,local_18), iVar1 != 0 &&
          (iVar1 = FUN_4a145d80(auStack_5c,param_1 + 0x20), iVar1 != 0)))) &&
        ((iVar1 = FUN_4a145d80(auStack_58,local_1c), iVar1 != 0 &&
         ((iVar1 = FUN_4a145d80(auStack_54,local_20), iVar1 != 0 &&
          (local_4c == *(int *)(param_1 + 0x30))))))) &&
       ((local_34 == *(int *)(param_1 + 0x48) &&
        ((local_65 == *(char *)(param_1 + 0x17) && (local_28 == *(uint *)(param_1 + 0x54))))))) {
      local_24 = 1;
    }
    else {
      local_24 = 0;
    }
    FUN_4a069e74(auStack_7c);
  }
  FUN_4a0365d4(&local_24,1,1,1);
  uVar4 = DAT_4a069d9c;
  puVar3 = (uint *)(PTR_DAT_4a069d98 + 0xc0);
  if ((char)local_24 != '\0') {
    FUN_4a03c12c(param_1 + 0x10,1,0x20,4);
    if ((*puVar3 < uVar4) && ((*(uint *)(param_1 + 0x10) & 0x7ffff) >> 0x10 == 0)) {
      FUN_4a06991c(param_1,5);
    }
    param_1 = param_1 + 0x2c;
    goto LAB_4a069d8c;
  }
  FUN_4a03c12c(param_1 + 0x10,1,0x20,4);
  if ((*puVar3 < uVar4) && ((*(uint *)(param_1 + 0x10) & 0x7ffff) >> 0x10 == 0)) {
    FUN_4a06991c(param_1,5);
  }
  FUN_4a039a4c(param_1 + 0x18,1,0xf,2);
  if (DAT_4a069d9c - 3 <= *puVar3) {
    FUN_4a039a4c(param_1 + 0x1a,1,0xf,2);
  }
  FUN_4a102164(local_18);
  FUN_4a102164(param_1 + 0x20);
  FUN_4a102164(local_1c);
  if (DAT_4a069da0 <= *puVar3) {
    FUN_4a102164(local_20);
  }
  local_28 = 2;
  uVar4 = DAT_4a069da0 - 1;
  if (uVar4 <= *puVar3) {
    local_28 = 4;
    FUN_4a03c12c(&local_28,1,0x20,4);
  }
  for (uVar2 = 0; uVar2 < local_28; uVar2 = uVar2 + 1) {
    FUN_4a048664(uVar2 * 4 + param_1 + 0x2c);
  }
  if (*puVar3 < DAT_4a069da0 + 2) {
    FUN_4a03c12c(&local_2c,1,0x20,4);
    FUN_4a039b90(auStack_30,1,8,1);
  }
  if (*PTR_DAT_4a069d98 == '\x01') {
    FUN_4a039b90(&local_2c,1,8,1);
    if ((char)local_2c != '\0') {
      thunk_FUN_4a161570(8);
      iVar1 = thunk_FUN_4a0607d8();
      *(int *)(param_1 + 0x48) = iVar1;
      goto LAB_4a069d64;
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  else {
    local_2c = (uint)(*(int *)(param_1 + 0x48) != 0);
    FUN_4a039b90(&local_2c,1,8,1);
    iVar1 = *(int *)(param_1 + 0x48);
LAB_4a069d64:
    if (iVar1 != 0) {
      thunk_FUN_4a060754();
    }
  }
  if (DAT_4a069da4 <= *puVar3) {
    FUN_4a039b90(param_1 + 0x17,1,8,1);
  }
  if (*puVar3 < uVar4) {
    return;
  }
  param_1 = param_1 + 0x54;
LAB_4a069d8c:
  FUN_4a048664(param_1);
  return;
}



// Address: 4a069da8

undefined4 * FUN_4a069da8(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_4a06a6b8();
  *puVar2 = PTR_PTR_4a069e14;
  thunk_FUN_4a00121c(puVar2 + 4,0x48);
  FUN_4a069950(puVar2,1);
  puVar2[4] = puVar2[4] & 0xfffffffc;
  FUN_4a0698f4(puVar2,1);
  FUN_4a06991c(puVar2,5);
  puVar2[4] = puVar2[4] & ~DAT_4a069e18;
  *(undefined1 *)((int)puVar2 + 0x17) = 0;
  FUN_4a06992c(puVar2,0);
  uVar1 = DAT_4a069e1c;
  puVar2[8] = DAT_4a069e1c;
  puVar2[7] = 0xff000000;
  puVar2[9] = uVar1;
  puVar2[10] = 0xff000000;
  *(undefined1 *)((int)puVar2 + 0x2b) = 10;
  return puVar2;
}



// Address: 4a069e28

undefined4 * FUN_4a069e28(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a06a6b8();
  *puVar1 = PTR_PTR_4a069e58;
  thunk_FUN_4a00121c(puVar1 + 4,0x48);
  FUN_4a0699a6(puVar1,*(undefined4 *)(*(int *)PTR_DAT_4a069e5c + 0x4bc));
  return puVar1;
}



// Address: 4a069e60

void FUN_4a069e60(int param_1)

{
  if (param_1 != 0) {
    FUN_4a069e74();
    thunk_FUN_4a161530();
  }
  return;
}



// Address: 4a069e74

void FUN_4a069e74(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  *param_1 = PTR_PTR_4a069edc;
  iVar2 = DAT_4a069ee4;
  puVar1 = PTR_DAT_4a069ee0;
  if (param_1[0x12] != 0) {
    FUN_4a09215a(*(int *)PTR_DAT_4a069ee0 + DAT_4a069ee4,param_1);
    puVar4 = (undefined4 *)(*(int *)puVar1 + iVar2);
    if ((puVar4[1] == 0) && (-1 < *(int *)(*(int *)puVar1 + 4) << 0x17)) {
      for (uVar3 = 0; uVar3 < (uint)puVar4[1]; uVar3 = uVar3 + 1) {
      }
      puVar4[1] = 0;
      if (puVar4[2] != 0) {
        puVar4[2] = 0;
        FUN_4a0a6f48(*puVar4,4);
        *puVar4 = 0;
      }
    }
    if (param_1[0x12] != 0) {
      thunk_FUN_4a060808();
      thunk_FUN_4a161530();
    }
  }
  FUN_4a0606ec(param_1);
  return;
}



// Address: 4a069f1c

void FUN_4a069f1c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_40 [32];
  int iStack_20;
  int local_1c;
  undefined4 uStack_18;
  
  uVar2 = 6;
  if ((*(uint *)(param_1 + 0x3c) & 1) == 0) {
    uVar2 = *(undefined4 *)(param_1 + 8);
  }
  iStack_20 = param_1;
  local_1c = param_2;
  uStack_18 = param_3;
  iVar1 = FUN_4a0013e0();
  puVar3 = (undefined1 *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0x34) < iVar1 * 8 + local_1c) {
    local_40[0] = 0;
    FUN_4a0012bc(local_40,(undefined1 *)(param_1 + 0xc));
    iVar1 = ((int)(((uint)(*(int *)(param_1 + 0x34) >> 0x1f) >> 0x1d) + *(int *)(param_1 + 0x34)) >>
            3) + -2;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    local_40[iVar1] = 0;
    FUN_4a001538(local_40,&DAT_4a069f88);
    puVar3 = local_40;
  }
  FUN_4a1652cc(puVar3,local_1c,uStack_18,uVar2);
  return;
}



// Address: 4a069f94

void FUN_4a069f94(int *param_1,int param_2)

{
  undefined *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = PTR_DAT_4a06a038;
  if (param_2 == 0) {
    return;
  }
  if (*(int *)(*(int *)PTR_DAT_4a06a038 + 0x18) << 0x1c < 0) {
    FUN_4a1652c6(param_1,*(undefined4 *)(*param_1 + 0x18));
    puVar2 = (uint *)(*(int *)puVar1 + 0x18);
    uVar3 = *puVar2;
    uVar4 = 8;
  }
  else {
    if (-1 < *(int *)(*(int *)PTR_DAT_4a06a038 + 0x18) << 0x1d) goto LAB_4a069fd4;
    FUN_4a1652c6(param_1,*(undefined4 *)(*param_1 + 0x1c));
    puVar2 = (uint *)(*(int *)puVar1 + 0x18);
    uVar3 = *puVar2;
    uVar4 = 4;
  }
  *puVar2 = uVar3 & ~uVar4;
LAB_4a069fd4:
  if (*(int *)(*(int *)puVar1 + 0x18) << 0x1b < 0) {
    FUN_4a1652c6(param_1,*(undefined4 *)(*param_1 + 0x20));
    *(uint *)(*(int *)puVar1 + 0x18) = *(uint *)(*(int *)puVar1 + 0x18) & 0xffffffef;
  }
  if (*(int *)(*(int *)puVar1 + 0x18) << 0x18 < 0) {
    FUN_4a1652c6(param_1,*(undefined4 *)(*param_1 + 0x24));
    *(uint *)(*(int *)puVar1 + 0x18) = *(uint *)(*(int *)puVar1 + 0x18) & 0xffffff7f;
  }
  if (*(int *)(*(int *)puVar1 + 0x18) << 0x17 < 0) {
    FUN_4a1652c6(param_1,*(undefined4 *)(*param_1 + 0x28));
    *(uint *)(*(int *)puVar1 + 0x18) = *(uint *)(*(int *)puVar1 + 0x18) & 0xfffffeff;
  }
  return;
}



// Address: 4a06a03c

undefined4 *
FUN_4a06a03c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined *puVar1;
  int iVar2;
  
  *param_1 = PTR_PTR_4a06a078;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[2] = param_5;
  param_1[1] = param_2;
  FUN_4a0012bc(param_1 + 3,param_3);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  puVar1 = PTR_DAT_4a06a07c;
  param_1[0xf] = param_4;
  param_1[0x10] = 0;
  iVar2 = *(int *)puVar1;
  param_1[0xd] = *(undefined4 *)(iVar2 + 0x34);
  param_1[0xe] = *(undefined4 *)(iVar2 + 0x28);
  return param_1;
}



// Address: 4a06a080

void FUN_4a06a080(int param_1)

{
  if (param_1 != 0) {
    thunk_FUN_4a161530();
  }
  return;
}



// Address: 4a06a094

void FUN_4a06a094(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 0xc) & 0xfffffff7;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xc) | 8;
  }
  *(uint *)(param_1 + 0xc) = uVar1;
  return;
}



// Address: 4a06a0aa

void FUN_4a06a0aa(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  for (uVar3 = 0; uVar3 < *(uint *)(param_1 + 0x14); uVar3 = uVar3 + 1) {
    iVar2 = *(int *)(param_1 + 0x10) + uVar3 * 0x30;
    FUN_4a16eda4();
    FUN_4a16edb6(iVar2 + 0x1c,*(undefined4 *)(iVar2 + 0x10));
    for (uVar1 = 0; uVar1 < *(uint *)(iVar2 + 0x10); uVar1 = uVar1 + 1) {
      *(undefined4 *)(*(int *)(iVar2 + 0x1c) + uVar1 * 8) =
           *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0xc) + uVar1 * 4) + 4);
    }
  }
  return;
}



// Address: 4a06a0fc

void FUN_4a06a0fc(int *param_1,int param_2)

{
  if ((param_2 != 0) && (param_1[3] = param_1[3] | 2, -1 < **(int **)PTR_DAT_4a06a12c << 0x10)) {
    FUN_4a1652c6(param_1,*(undefined4 *)(*param_1 + 0x18));
    FUN_4a06a2b8(param_1);
  }
  return;
}



// Address: 4a06a130

void FUN_4a06a130(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_4a02b1e8(param_2);
  FUN_4a06a14c(param_1,uVar1,param_3);
  return;
}



// Address: 4a06a14c

void FUN_4a06a14c(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *local_50 [3];
  undefined1 auStack_44 [16];
  undefined4 local_34;
  uint local_30;
  byte local_28;
  int iStack_20;
  int local_1c;
  int *piStack_18;
  
  iStack_20 = param_1;
  local_1c = param_2;
  piStack_18 = param_3;
  piVar1 = (int *)FUN_4a13512c(param_1,param_2,1);
  if (piVar1 == (int *)0x0) {
    FUN_4a060d40(local_50);
    FUN_4a16dffe((int *)(param_1 + 0x10),*(int *)(param_1 + 0x14) + 1);
    FUN_4a060cc0(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14) * 0x30,local_50);
    iVar2 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar2 + 1;
    piVar1 = (int *)(*(int *)(param_1 + 0x10) + iVar2 * 0x30);
    uVar3 = FUN_4a1652c6(param_3,*(undefined4 *)(*param_3 + 0x28));
    FUN_4a1652c8(piVar1,uVar3,*(undefined4 *)(*piVar1 + 0x24));
    piVar1[1] = local_1c;
    local_50[0] = PTR_PTR_4a06a1fc;
    for (uVar4 = 0; uVar4 < local_30; uVar4 = uVar4 + 1) {
    }
    if ((local_28 & 1) == 0) {
      FUN_4a0a6f48(local_34,8);
      local_34 = 0;
    }
    iVar2 = FUN_4a092278(auStack_44);
    FUN_4a0606ec(iVar2 + -0xc);
  }
  *(short *)(param_3 + 3) = (short)param_3[3] + 1;
  FUN_4a0921e2(piVar1 + 3,param_3,0);
  return;
}



// Address: 4a06a200

void FUN_4a06a200(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  if (-1 < *(int *)(param_1 + 0xc) << 0x19) {
    uVar2 = *(undefined4 *)PTR_DAT_4a06a298;
    *(int *)PTR_DAT_4a06a298 = param_1;
    uVar3 = *(undefined4 *)(*(int *)PTR_DAT_4a06a29c + 100);
    *(int *)(*(int *)PTR_DAT_4a06a29c + 100) = param_1;
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x40;
    for (uVar4 = 0; uVar4 < *(uint *)(param_1 + 0x24); uVar4 = uVar4 + 1) {
      piVar6 = *(int **)(*(int *)(param_1 + 0x20) + uVar4 * 4);
      FUN_4a1652c6(piVar6,*(undefined4 *)(*piVar6 + 0x18));
    }
    iVar5 = *(int *)(param_1 + 0x10);
    iVar1 = iVar5 + *(int *)(param_1 + 0x14) * 0x30;
    for (; iVar5 != iVar1; iVar5 = iVar5 + 0x30) {
      for (puVar7 = *(undefined4 **)(iVar5 + 0xc);
          puVar7 < (undefined4 *)(*(int *)(iVar5 + 0xc) + *(int *)(iVar5 + 0x10) * 4);
          puVar7 = puVar7 + 1) {
        piVar6 = (int *)*puVar7;
        if ((*(ushort *)((int)piVar6 + 0xe) & 1) == 0) {
          FUN_4a1652c6(piVar6,*(undefined4 *)(*piVar6 + 0x18));
          *(ushort *)((int)piVar6 + 0xe) = *(ushort *)((int)piVar6 + 0xe) | 1;
        }
      }
    }
    *(undefined4 *)(*(int *)PTR_DAT_4a06a29c + 100) = uVar3;
    *(undefined4 *)PTR_DAT_4a06a298 = uVar2;
  }
  return;
}



// Address: 4a06a2a0

void FUN_4a06a2a0(int param_1,int param_2,int param_3)

{
  if (param_3 != 0) {
    *(int *)(param_2 + 0x30) = param_1;
  }
  FUN_4a0921e2(param_1 + 0x20,param_2,0);
  return;
}



// Address: 4a06a2b8

void FUN_4a06a2b8(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0xd8) != 0) {
    FUN_4a06fd80();
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffff7;
    if (*(int *)PTR_DAT_4a06a31c != 0) {
      *(undefined4 *)PTR_DAT_4a06a31c = 0;
    }
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    host_s3eFileClose_thumb();
    *(undefined4 *)(param_1 + 0xe0) = 0;
    for (uVar3 = 0; uVar3 < *(uint *)(param_1 + 0x14); uVar3 = uVar3 + 1) {
      iVar1 = *(int *)(param_1 + 0x10) + uVar3 * 0x30;
      for (uVar2 = 0; uVar2 < *(uint *)(iVar1 + 0x20); uVar2 = uVar2 + 1) {
      }
      *(undefined4 *)(iVar1 + 0x20) = 0;
      FUN_4a16ecec(iVar1 + 0x1c,0);
    }
  }
  return;
}



// Address: 4a06a320

void FUN_4a06a320(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar1 = (**(uint **)PTR_DAT_4a06a44c & 0x7ffff) >> 0x11;
  iVar8 = 0;
  do {
    if (*(int *)(param_1 + 0x14) <= iVar8) {
      param_2[0xc] = 0;
      if (param_2 != (int *)0x0) {
        FUN_4a1652c6(param_2,*(undefined4 *)(*param_2 + 4));
      }
      return;
    }
    iVar7 = *(int *)(param_1 + 0x10) + iVar8 * 0x30;
    iVar2 = FUN_4a13512c(param_2,*(undefined4 *)(iVar7 + 4),1);
    if (iVar2 == 0) {
      if (uVar1 == 1) {
        FUN_4a16defa(param_1 + 0x10,iVar8,iVar8 + 1);
        iVar8 = iVar8 + -1;
      }
    }
    else {
      for (iVar6 = 0; iVar6 < *(int *)(iVar2 + 0x10); iVar6 = iVar6 + 1) {
        iVar3 = *(int *)(*(int *)(iVar2 + 0xc) + iVar6 * 4);
        piVar4 = (int *)FUN_4a135c66(iVar7 + 0xc,*(undefined4 *)(iVar3 + 4),0);
        if (piVar4 == (int *)0x0) {
          FUN_4a0921e2(iVar7 + 0xc,iVar3,0);
        }
        else {
          FUN_4a1652c8(piVar4,iVar3,*(undefined4 *)(*piVar4 + 0x34));
        }
      }
      FUN_4a16f7ba(iVar2 + 0xc,0);
      if (uVar1 == 1) {
        iVar6 = 0;
LAB_4a06a404:
        if (iVar6 < *(int *)(iVar7 + 0x10)) {
          iVar9 = *(int *)(*(int *)(iVar7 + 0xc) + iVar6 * 4);
          iVar3 = FUN_4a135c66(iVar2 + 0xc,*(undefined4 *)(iVar9 + 4),0);
          if (iVar3 == 0) {
            piVar4 = (int *)(iVar7 + 0xc);
            for (uVar5 = 0; uVar5 < *(uint *)(iVar7 + 0x10); uVar5 = uVar5 + 1) {
              if (*(int *)(*piVar4 + uVar5 * 4) == iVar9) goto LAB_4a06a3e4;
            }
            goto LAB_4a06a400;
          }
          goto LAB_4a06a402;
        }
      }
    }
    iVar8 = iVar8 + 1;
  } while( true );
LAB_4a06a3e4:
  for (; uVar5 < *(int *)(iVar7 + 0x10) - 1U; uVar5 = uVar5 + 1) {
    *(undefined4 *)(*piVar4 + uVar5 * 4) = *(undefined4 *)(*piVar4 + (uVar5 + 1) * 4);
  }
  FUN_4a16f7ba(piVar4,*(int *)(iVar7 + 0x10) + -1);
LAB_4a06a400:
  iVar6 = iVar6 + -1;
LAB_4a06a402:
  iVar6 = iVar6 + 1;
  goto LAB_4a06a404;
}



// Address: 4a06a454

int FUN_4a06a454(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)FUN_4a0606b4();
  puVar2[4] = 0;
  puVar1 = PTR_PTR_4a06a4d4;
  puVar2[5] = 0;
  puVar2[6] = 0;
  *puVar2 = puVar1;
  *(byte *)(puVar2 + 7) = *(byte *)(puVar2 + 7) & 0xfc;
  FUN_4a16e03a(puVar2 + 4,0);
  FUN_4a16e03a(puVar2 + 4,0);
  iVar3 = thunk_FUN_4a092258(puVar2 + 8);
  *(undefined1 *)(iVar3 + 0x18) = 0;
  iVar3 = FUN_4a16ee5c(iVar3 + 0xcc,0);
  if (param_2 != 0) {
    FUN_4a0605f6(iVar3 + -0xec,param_2);
  }
  *(undefined4 *)(iVar3 + -0xbc) = 0;
  *(undefined4 *)(iVar3 + -0xe0) = 0;
  puVar1 = PTR_DAT_4a06a4d8;
  *(undefined4 *)(iVar3 + -0x14) = 0;
  *(undefined4 *)(iVar3 + -0x10) = 0;
  FUN_4a0012bc(iVar3 + -0xb4,*(int *)puVar1 + 0x6c);
  *(undefined4 *)(iVar3 + -0xb8) = 0;
  *(undefined4 *)(iVar3 + -0xc) = 0;
  return iVar3 + -0xec;
}



// Address: 4a06a4dc

void FUN_4a06a4dc(int param_1)

{
  if (param_1 != 0) {
    FUN_4a06a4f0();
    thunk_FUN_4a161530();
  }
  return;
}



// Address: 4a06a4f0

void FUN_4a06a4f0(undefined4 *param_1)

{
  undefined *puVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  int *local_18;
  
  *param_1 = PTR_PTR_4a06a6ac;
  local_18 = (int *)(param_1[8] + param_1[9] * 4);
LAB_4a06a558:
  piVar3 = local_18 + -1;
  if ((int *)param_1[8] != local_18) {
    iVar7 = *piVar3;
    local_18 = piVar3;
    if (*(undefined4 **)(iVar7 + 0x30) == param_1) {
      iVar14 = 0;
      puVar10 = (undefined4 *)
                (*(int *)(*(int *)PTR_DAT_4a06a6b0 + 0x44) +
                *(int *)(*(int *)PTR_DAT_4a06a6b0 + 0x48) * 4);
      do {
        puVar11 = puVar10 + -1;
        if (*(undefined4 **)(*(int *)PTR_DAT_4a06a6b0 + 0x44) == puVar10) {
          if (iVar14 == 0) {
            *(undefined4 *)(iVar7 + 0x30) = 0;
            FUN_4a08ce18(*(undefined4 *)PTR_DAT_4a06a6b0,iVar7);
          }
          goto LAB_4a06a558;
        }
        puVar13 = (undefined4 *)*puVar11;
        puVar10 = puVar11;
      } while ((puVar13 == param_1) ||
              (iVar14 = FUN_4a135c66(puVar13 + 8,*(undefined4 *)(iVar7 + 4),0), iVar14 == 0));
      *(undefined4 **)(iVar7 + 0x30) = puVar13;
    }
    goto LAB_4a06a558;
  }
  iVar14 = param_1[4];
  iVar7 = iVar14 + param_1[5] * 0x30;
  while (iVar12 = iVar7, puVar1 = PTR_DAT_4a06a6b0, iVar12 != iVar14) {
    thunk_FUN_4a161530(*(undefined4 *)(iVar12 + -4));
    piVar3 = (int *)(*(int *)(iVar12 + -0x24) + *(int *)(iVar12 + -0x20) * 4);
    while( true ) {
      piVar8 = piVar3 + -1;
      iVar7 = iVar12 + -0x30;
      if (*(int **)(iVar12 + -0x24) == piVar3) break;
      piVar2 = (int *)*piVar8;
      sVar5 = (short)piVar2[3] + -1;
      *(short *)(piVar2 + 3) = sVar5;
      piVar3 = piVar8;
      if ((sVar5 == 0) && (piVar2 != (int *)0x0)) {
        FUN_4a1652c6(piVar2,*(undefined4 *)(*piVar2 + 4));
      }
    }
  }
  piVar3 = (int *)FUN_4a135c66(*(int *)PTR_DAT_4a06a6b0 + 0x1c,param_1[1],0);
  if (piVar3 == (int *)0x0) {
LAB_4a06a622:
    if (param_1[0x36] != 0) {
      FUN_4a070090();
      thunk_FUN_4a161530();
    }
    if (param_1[0x38] != 0) {
      host_s3eFileClose_thumb();
    }
    for (uVar4 = 0; uVar4 < (uint)param_1[0x3c]; uVar4 = uVar4 + 1) {
    }
    if ((*(byte *)(param_1 + 0x3e) & 1) == 0) {
      FUN_4a0a6f48(param_1[0x3b],8);
      param_1[0x3b] = 0;
    }
    iVar7 = FUN_4a092278(param_1 + 8);
    piVar3 = (int *)(iVar7 + -0x10);
    for (uVar4 = 0; uVar4 < *(uint *)(iVar7 + -0xc); uVar4 = uVar4 + 1) {
      FUN_4a1652c6(*piVar3 + uVar4 * 0x30,**(undefined4 **)(*piVar3 + uVar4 * 0x30));
    }
    if ((*(byte *)(iVar7 + -4) & 1) == 0) {
      FUN_4a0a6f48(*piVar3,0x30);
      *piVar3 = 0;
    }
    FUN_4a0606ec(iVar7 + -0x20);
    return;
  }
  iVar7 = *(int *)puVar1;
  piVar8 = (int *)(iVar7 + 0x1c);
  uVar4 = 0;
  while( true ) {
    if (*(uint *)(iVar7 + 0x20) <= uVar4) goto LAB_4a06a614;
    if (*(int **)(*piVar8 + uVar4 * 4) == piVar3) break;
    uVar4 = uVar4 + 1;
  }
  uVar6 = *(uint *)(iVar7 + 0x20) - (uVar4 + 1);
  uVar9 = 1;
  if (uVar6 < 2) {
    uVar9 = uVar6;
  }
  for (uVar6 = 0; uVar6 < uVar9; uVar6 = uVar6 + 1) {
    *(undefined4 *)(*piVar8 + (uVar4 + uVar6) * 4) =
         *(undefined4 *)(*piVar8 + ((*(int *)(iVar7 + 0x20) - uVar9) + uVar6) * 4);
  }
  FUN_4a16f7ba(piVar8,*(int *)(iVar7 + 0x20) + -1);
LAB_4a06a614:
  if (piVar3 != (int *)0x0) {
    FUN_4a1652c6(piVar3,*(undefined4 *)(*piVar3 + 4));
  }
  goto LAB_4a06a622;
}



// Address: 4a06a6b8

void FUN_4a06a6b8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0606b4();
  *(undefined2 *)(puVar1 + 3) = 0;
  *(undefined2 *)((int)puVar1 + 0xe) = 0;
  *puVar1 = PTR_PTR_4a06a6d0;
  return;
}



// Address: 4a06a6d4

void FUN_4a06a6d4(int param_1)

{
  if (param_1 != 0) {
    FUN_4a0606ec();
    thunk_FUN_4a161530();
  }
  return;
}



// Address: 4a06a6e8

void FUN_4a06a6e8(void)

{
  FUN_4a0606ec();
  return;
}



// Address: 4a06a6f4

void FUN_4a06a6f4(void)

{
  FUN_4a06a700();
  return;
}



// Address: 4a06a700

undefined4 FUN_4a06a700(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  uVar1 = thunk_FUN_4a0014ec(*(int *)(iVar3 + 8) + param_2 * 0x10 + 8);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = FUN_4a070958(iVar3,param_2);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar2 = thunk_FUN_4a0014ec(*(int *)(*(int *)(param_1 + 0x10) + 8) + param_2 * 0x10);
  host_s3eFileSeek_thumb(uVar1,uVar2,0);
  return 0;
}



// Address: 4a06a740

void FUN_4a06a740(undefined4 *param_1)

{
  *param_1 = PTR_FUN_4a06a7d8_1_4a06a754;
  param_1[2] = PTR_FUN_4a06a6f4_1_4a06a758;
  param_1[1] = PTR_FUN_4a06a7aa_1_4a06a75c;
  param_1[3] = PTR_LAB_4a06a7e4_1_4a06a760;
  return;
}



// Address: 4a06a764

undefined4 FUN_4a06a764(int param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 < 0x1001) {
    *param_3 = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    *param_3 = 0x1000;
  }
  iVar1 = host_s3eFileRead_thumb
                    (*(undefined4 *)(param_1 + 0x18),*param_3,1,*(undefined4 *)(param_1 + 0x1c));
  if (iVar1 == 1) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - *param_3;
    *param_2 = *(undefined4 *)(param_1 + 0x18);
    return 0;
  }
  return 2;
}



// Address: 4a06a7aa

void FUN_4a06a7aa(void)

{
  FUN_4a06a764();
  return;
}



// Address: 4a06a7b6

bool FUN_4a06a7b6(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_4a00dbc4(0x1000);
  *(int *)(param_1 + 0x18) = iVar1;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x10) = param_2;
  }
  return iVar1 == 0;
}



// Address: 4a06a7d8

void FUN_4a06a7d8(void)

{
  FUN_4a06a7b6();
  return;
}



// Address: 4a06a7ea

int FUN_4a06a7ea(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_4a06a740(param_1);
  return param_1;
}



// Address: 4a06a7fe

int FUN_4a06a7fe(int param_1)

{
  FUN_4a05a298(*(undefined4 *)(param_1 + 0x18));
  return param_1;
}



// Address: 4a06a8b4

int FUN_4a06a8b4(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = PTR_PTR_4a06a944;
  iVar2 = *(int *)PTR_PTR_4a06a944;
  *param_1 = iVar2;
  *(undefined4 *)((int)param_1 + *(int *)(iVar2 + -0xc)) = *(undefined4 *)(puVar1 + 0xc);
  piVar3 = (int *)param_1[7];
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)((int)piVar3 + *(int *)(*piVar3 + -0xc));
  }
  if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 8))(piVar3), iVar2 != 0)) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  iVar2 = FUN_4a0be31c(param_1,puVar1 + 4);
  iVar2 = FUN_4a0c6bf4(iVar2 + 0x24);
  return iVar2 + -0x24;
}



// Address: 4a06a948

void FUN_4a06a948(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)thunk_FUN_4a0b3908();
  FUN_4a0a83a4(piVar1,param_2);
  (**(code **)(*piVar1 + 0x20))
            (piVar1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
             *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  FUN_4a0a8b14(piVar1,*(undefined4 *)(param_1 + 0x14));
                    /* WARNING: Could not recover jumptable at 0x4a06a9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x30))(piVar1);
  return;
}



// Address: 4a06a9a8

void FUN_4a06a9a8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x2c) = param_2;
  return;
}



// Address: 4a06a9b0

undefined4 * FUN_4a06a9b0(undefined4 *param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined2 *puVar12;
  undefined4 uVar13;
  int iVar14;
  bool bVar15;
  undefined *local_90 [2];
  int local_88;
  int *local_84;
  undefined1 auStack_7c [8];
  undefined4 local_74;
  int *local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 auStack_60 [8];
  undefined4 local_58;
  int *local_54;
  undefined1 auStack_4c [20];
  undefined1 auStack_38 [20];
  
  *param_1 = PTR_PTR_4a06aee8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  puVar7 = (undefined4 *)FUN_4a0c6bc0(auStack_60);
  puVar3 = PTR_PTR_4a06aef0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  *puVar7 = puVar3;
  puVar2 = PTR_PTR_4a06aeec;
  thunk_FUN_4a161570(0x5c);
  local_64 = FUN_4a0a7fc8();
  thunk_FUN_4a161570(0x40);
  uVar8 = FUN_4a0b020c();
  param_1[6] = uVar8;
  FUN_4a0b01c8(uVar8,0);
  FUN_4a0b01ec(param_1[6],0);
  FUN_4a0b0204(param_1[6],0);
  FUN_4a0afe0c(local_64,param_1[6]);
  uVar8 = thunk_FUN_4a161570(0x48);
  local_68 = FUN_4a0ad610(uVar8,4,3,2);
  piVar9 = (int *)FUN_4a0c6bc0(auStack_7c);
  puVar4 = PTR_PTR_4a06aef4;
  piVar9[2] = 0;
  piVar9[3] = 0;
  *piVar9 = (int)puVar4;
  iVar10 = FUN_4a15e080(0x18);
  if (iVar10 == 0) {
    iVar10 = FUN_4a1669a8();
  }
  iVar11 = 0;
  do {
    iVar14 = iVar11 * 2;
    iVar11 = iVar11 + 1;
    *(undefined2 *)(iVar10 + iVar14) = 0;
  } while (iVar11 < 0xc);
  thunk_FUN_4a161570(0x18);
  puVar7 = (undefined4 *)FUN_4a0c0628();
  puVar7[3] = 2;
  puVar7[4] = 0xc;
  puVar5 = PTR_PTR_4a06aef8;
  puVar7[2] = iVar10;
  *puVar7 = puVar5;
  *(undefined1 *)(puVar7 + 5) = 1;
  if (puVar7 != (undefined4 *)0x0) {
    (**(code **)(puVar5 + 0xc))(puVar7);
  }
  (**(code **)(*piVar9 + 0x1c))(piVar9);
  piVar9[2] = 0xc;
  piVar9[3] = (int)puVar7;
  if (local_70 == (int *)0x0) {
    puVar12 = (undefined2 *)0x0;
  }
  else {
    puVar12 = (undefined2 *)local_70[2];
  }
  *puVar12 = 0xffff;
  if (local_70 == (int *)0x0) {
    iVar10 = 0;
  }
  else {
    iVar10 = local_70[2];
  }
  *(undefined2 *)(iVar10 + 2) = 0xffff;
  if (local_70 == (int *)0x0) {
    iVar10 = 0;
  }
  else {
    iVar10 = local_70[2];
  }
  *(undefined2 *)(iVar10 + 6) = 1;
  if (local_70 == (int *)0x0) {
    iVar10 = 0;
  }
  else {
    iVar10 = local_70[2];
  }
  *(undefined2 *)(iVar10 + 8) = 0xffff;
  if (local_70 == (int *)0x0) {
    iVar10 = 0;
  }
  else {
    iVar10 = local_70[2];
  }
  *(undefined2 *)(iVar10 + 0xc) = 0xffff;
  if (local_70 == (int *)0x0) {
    iVar10 = 0;
  }
  else {
    iVar10 = local_70[2];
  }
  *(undefined2 *)(iVar10 + 0xe) = 1;
  if (local_70 == (int *)0x0) {
    iVar10 = 0;
  }
  else {
    iVar10 = local_70[2];
  }
  *(undefined2 *)(iVar10 + 0x12) = 1;
  if (local_70 == (int *)0x0) {
    iVar10 = 0;
  }
  else {
    iVar10 = local_70[2];
  }
  *(undefined2 *)(iVar10 + 0x14) = 1;
  puVar7 = (undefined4 *)FUN_4a0c6bc0(auStack_38);
  *puVar7 = puVar2;
  puVar7[2] = local_74;
  puVar7[3] = local_70;
  if (local_70 != (int *)0x0) {
    (**(code **)(*local_70 + 0xc))();
  }
  *puVar7 = puVar4;
  FUN_4a0ad258(local_68,0,4,puVar7);
  FUN_4a16c1a0(auStack_38);
  thunk_FUN_4a161570(0x74);
  uVar8 = FUN_4a0ae56c();
  param_1[7] = uVar8;
  puVar7 = (undefined4 *)FUN_4a0c6bc0(auStack_4c);
  *puVar7 = puVar2;
  puVar7[2] = local_58;
  puVar7[3] = local_54;
  if (local_54 != (int *)0x0) {
    (**(code **)(*local_54 + 0xc))();
  }
  *puVar7 = puVar3;
  FUN_4a0adb1c(param_1[7],local_68,0x3f800000,puVar7);
  FUN_4a16ba04(auStack_4c);
  piVar9 = (int *)FUN_4a0c6bc0(local_90);
  puVar2 = PTR_PTR_4a06aefc;
  piVar9[2] = 0;
  piVar9[3] = 0;
  *piVar9 = (int)puVar2;
  iVar10 = FUN_4a15e080(4);
  if (iVar10 == 0) {
    iVar10 = FUN_4a1669a8();
  }
  iVar11 = 0;
  do {
    *(undefined4 *)(iVar10 + iVar11 * 4) = 0;
    iVar11 = iVar11 + 1;
  } while (iVar11 < 1);
  thunk_FUN_4a161570(0x18);
  puVar7 = (undefined4 *)FUN_4a0c0628();
  puVar7[2] = iVar10;
  puVar7[3] = 4;
  puVar7[4] = 1;
  *puVar7 = puVar5;
  *(undefined1 *)(puVar7 + 5) = 1;
  if (puVar7 != (undefined4 *)0x0) {
    (**(code **)(puVar5 + 0xc))(puVar7);
  }
  (**(code **)(*piVar9 + 0x1c))(piVar9);
  piVar9[2] = 1;
  piVar9[3] = (int)puVar7;
  if (local_84 == (int *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = (undefined4 *)local_84[2];
  }
  *puVar7 = 4;
  uVar8 = thunk_FUN_4a161570(0x60);
  uVar8 = FUN_4a0b30e8(uVar8,0,local_90);
  uVar13 = thunk_FUN_4a161570(0x114);
  uVar8 = FUN_4a0b3fec(uVar13,param_1[7],uVar8,local_64);
  thunk_FUN_4a161570(0xe8);
  piVar9 = (int *)FUN_4a0b50dc();
  param_1[5] = piVar9;
  if (piVar9 != (int *)0x0) {
    (**(code **)(*piVar9 + 0xc))();
  }
  thunk_FUN_4a161570(0x13c);
  uVar13 = FUN_4a0b52ec();
  FUN_4a0b529c(uVar13,0x3f800000,0x3f800000,0xbf800000,0x3f800000);
  FUN_4a0b4c10(param_1[5],uVar13);
  FUN_4a0b5070(param_1[5],uVar13);
  thunk_FUN_4a161570(0x30);
  uVar13 = FUN_4a0a8358();
  FUN_4a0a8340(uVar13,0);
  FUN_4a0a8348(uVar13,0);
  FUN_4a0b5004(param_1[5],uVar13);
  FUN_4a0b4c10(param_1[5],uVar8);
  piVar9 = local_84;
  iVar10 = local_88;
  local_90[0] = puVar2;
  bVar15 = local_84 != (int *)0x0;
  if (bVar15) {
    iVar11 = local_84[2];
    cVar1 = (char)local_84[5];
  }
  else {
    iVar11 = 0;
    cVar1 = '\0';
  }
  local_84 = (int *)0x0;
  local_88 = 0;
  if ((piVar9 == (int *)0x0) || (iVar14 = (**(code **)(*piVar9 + 8))(piVar9), iVar14 == 0)) {
    bVar6 = 0;
  }
  else {
    (**(code **)(*piVar9 + 4))(piVar9);
    bVar6 = 1;
  }
  if (!(bool)(bVar6 & (bVar15 && cVar1 != '\0'))) {
    iVar11 = 0;
  }
  if (iVar11 != 0) {
    iVar14 = 0;
    if (0 < iVar10) {
      do {
        iVar14 = iVar14 + 1;
      } while (iVar14 < iVar10);
      if (iVar11 == 0) goto LAB_4a06aec0;
    }
    FUN_4a14f21c(iVar11);
  }
LAB_4a06aec0:
  FUN_4a0c6bf4(local_90);
  FUN_4a16c1a0(auStack_7c);
  FUN_4a16ba04(auStack_60);
  return param_1;
}



// Address: 4a06af6c

undefined4 * FUN_4a06af6c(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = PTR_PTR_4a06afcc;
  piVar2 = (int *)param_1[5];
  if (piVar2 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar2 + 8))(piVar2);
    if (iVar1 != 0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    param_1[5] = 0;
  }
  return param_1;
}



// Address: 4a06afd0

void FUN_4a06afd0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = FUN_4a13cff4(param_3);
  piVar2 = *(int **)(*(int *)(param_1 + 0x30) + param_4 * 4);
  (**(code **)(*piVar2 + 0x1c))(piVar2,param_2,uVar1,param_5,param_6,param_7);
  return;
}



// Address: 4a06b02c

void FUN_4a06b02c(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x30) + param_4 * 4);
  (**(code **)(*piVar1 + 0x1c))(piVar1,param_2,param_3,param_5,param_6,param_7);
  return;
}



// Address: 4a06b074

void FUN_4a06b074(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (param_3 < -2) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x40) != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 8);
    }
    uVar2 = *(undefined4 *)(iVar1 + (param_3 + 0xc) * 4);
  }
  else {
    uVar2 = FUN_4a08db2c();
    uVar2 = FUN_4a135b4c(uVar2,param_3,0);
  }
  piVar3 = *(int **)(*(int *)(param_1 + 0x30) + param_4 * 4);
  (**(code **)(*piVar3 + 0x1c))(piVar3,param_2,uVar2,param_5,param_6,param_7);
  return;
}



// Address: 4a06b0fc

int FUN_4a06b0fc(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x30) + param_3 * 4);
  iVar2 = FUN_4a13e1b4(param_2);
  iVar12 = 0;
  if (*(int *)(param_5 + 0xc) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_5 + 0xc) + 8);
  }
  *(undefined2 *)(iVar3 + 2) = 0;
  iVar11 = 0;
  iVar3 = -1;
  iVar9 = 2;
  iVar10 = 0;
  if (iVar2 != 0) {
    do {
      uVar4 = FUN_4a13dfe4(param_2,iVar10);
      if (iVar10 < iVar2 + -1) {
        iVar5 = FUN_4a13dfe4(param_2,iVar10 + 1);
      }
      else {
        iVar5 = 0;
      }
      if (uVar4 == 0x7c || uVar4 == 10) {
        iVar3 = 0;
        if (*(int *)(param_5 + 0xc) != 0) {
          iVar3 = *(int *)(*(int *)(param_5 + 0xc) + 8);
        }
        iVar12 = 0;
        iVar5 = iVar9 * 2;
        iVar9 = iVar9 + 1;
        iVar11 = 0;
        *(short *)(iVar3 + iVar5) = (short)iVar10 + 1;
        iVar3 = -1;
        goto LAB_4a06b2b0;
      }
      iVar6 = (**(code **)(*piVar1 + 0x2c))(piVar1,uVar4 & 0xffff);
      iVar12 = iVar12 + iVar6;
      iVar11 = iVar11 + iVar6;
      if (param_4 < iVar12) {
        if (iVar3 == -1) {
          iVar12 = 0;
          if (*(int *)(param_5 + 0xc) != 0) {
            iVar12 = *(int *)(*(int *)(param_5 + 0xc) + 8);
          }
          *(short *)(iVar12 + iVar9 * 2) = (short)iVar10;
          iVar12 = iVar6;
        }
        else {
          iVar12 = 0;
          if (*(int *)(param_5 + 0xc) != 0) {
            iVar12 = *(int *)(*(int *)(param_5 + 0xc) + 8);
          }
          *(short *)(iVar12 + iVar9 * 2) = (short)iVar3 + 1;
          iVar12 = iVar11;
          if (uVar4 == 0x20) {
            iVar3 = iVar10;
            if (iVar5 == 0x3f) {
LAB_4a06b27c:
              iVar3 = -1;
            }
          }
          else {
            iVar3 = iVar10;
            if (uVar4 != 0x2d) goto LAB_4a06b27c;
          }
        }
        iVar9 = iVar9 + 1;
        iVar11 = 0;
      }
      else if (uVar4 == 0x20) {
        if (iVar5 != 0x3f) {
LAB_4a06b2a8:
          iVar11 = 0;
          iVar3 = iVar10;
        }
      }
      else if (uVar4 == 0x2d) goto LAB_4a06b2a8;
LAB_4a06b2b0:
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar2);
  }
  psVar7 = (short *)0x0;
  if (*(int *)(param_5 + 0xc) != 0) {
    psVar7 = *(short **)(*(int *)(param_5 + 0xc) + 8);
  }
  psVar8 = (short *)0x0;
  *psVar7 = (short)iVar9 + -1;
  if (*(int *)(param_5 + 0xc) == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = *(int *)(*(int *)(param_5 + 0xc) + 8);
  }
  *(short *)(iVar12 + iVar9 * 2) = (short)iVar2;
  if (*(int *)(param_5 + 0xc) == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = *(int *)(*(int *)(param_5 + 0xc) + 8);
  }
  *(undefined2 *)(iVar12 + (iVar9 + 1) * 2) = 10;
  if (*(int *)(param_5 + 0xc) != 0) {
    psVar8 = *(short **)(*(int *)(param_5 + 0xc) + 8);
  }
  return (int)*psVar8;
}



// Address: 4a06b330

undefined4 FUN_4a06b330(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
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
  if (*(int **)(param_1 + 0x8c) != piVar1) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))();
    }
    piVar4 = *(int **)(param_1 + 0x8c);
    if ((piVar4 != (int *)0x0) && (iVar3 = (**(code **)(*piVar4 + 8))(piVar4), iVar3 != 0)) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *(int **)(param_1 + 0x8c) = piVar1;
  }
  uVar2 = FUN_4a06b0fc(param_1,piVar1,param_3,param_4,param_1 + 0x78);
  if ((piVar1 != (int *)0x0) && (iVar3 = (**(code **)(*piVar1 + 8))(piVar1), iVar3 != 0)) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return uVar2;
}



// Address: 4a06b454

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a06b454(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  int *piStack_44;
  undefined1 auStack_3c [20];
  undefined4 local_28;
  
  local_28 = FUN_4a08db2c();
  puVar2 = PTR_PTR_4a06b60c;
  puVar1 = PTR_PTR_4a06b608;
  iVar9 = *(int *)(param_1 + 0x14);
  iVar8 = 0;
  if (iVar9 < 1) {
    return;
  }
  do {
    piVar3 = *(int **)(*(int *)(param_1 + 0x18) + iVar8 * 4);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0xc))();
    }
    uVar4 = thunk_FUN_4a161570(0x14);
    piVar5 = (int *)FUN_4a0c707c(uVar4,&DAT_4a06b610);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))();
    }
    iVar6 = FUN_4a13dd58(piVar3,piVar5);
    if (iVar6 == 0) {
      FUN_4a08dfb0(auStack_50,local_28,piVar3,0);
      puVar7 = (undefined4 *)FUN_4a0c6bc0(auStack_3c);
      *puVar7 = puVar1;
      puVar7[2] = uStack_48;
      puVar7[3] = piStack_44;
    }
    else {
      FUN_4a08dbe4();
      puVar7 = (undefined4 *)FUN_4a0c6bc0(auStack_3c);
      *puVar7 = puVar1;
      puVar7[2] = uStack_48;
      puVar7[3] = piStack_44;
    }
    if (piStack_44 != (int *)0x0) {
      (**(code **)(*piStack_44 + 0xc))();
    }
    *puVar7 = puVar2;
    FUN_4a08db3c(local_28,iVar8 + 1,puVar7,0);
    FUN_4a169628(auStack_3c);
    FUN_4a169628(auStack_50);
    if ((piVar5 != (int *)0x0) && (iVar6 = (**(code **)(*piVar5 + 8))(piVar5), iVar6 != 0)) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    if ((piVar3 != (int *)0x0) && (iVar6 = (**(code **)(*piVar3 + 8))(piVar3), iVar6 != 0)) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < iVar9);
  return;
}



// Address: 4a06b618

void FUN_4a06b618(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    do {
      piVar3 = *(int **)(*(int *)(param_1 + 0x30) + iVar2 * 4);
      *(undefined4 *)(*(int *)(param_1 + 0x30) + iVar2 * 4) = 0;
      if ((piVar3 != (int *)0x0) && (iVar1 = (**(code **)(*piVar3 + 8))(piVar3), iVar1 != 0)) {
        (**(code **)(*piVar3 + 4))(piVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x2c));
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}



// Address: 4a06b694

int * FUN_4a06b694(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = (int *)FUN_4a13cff4(param_3);
  iVar2 = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 8);
  }
  piVar3 = (int *)(iVar2 + (param_2 + 0xc) * 4);
  if ((int *)*piVar3 != piVar1) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(piVar1);
    }
    piVar4 = (int *)*piVar3;
    if ((piVar4 != (int *)0x0) && (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 != 0)) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *piVar3 = (int)piVar1;
  }
  return piVar3;
}



// Address: 4a06b6cc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a06b6cc(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar4 = 0;
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
  if (*(int *)(param_1 + 0x54) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x54) + 8);
  }
  FUN_4a167668(uVar3,param_4);
  uVar3 = FUN_4a06d33c(param_1,piVar2,param_1 + 0x48);
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 8);
  }
  FUN_4a167668(iVar4 + (param_2 + 0xc) * 4,uVar3);
  if (piVar2 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar2 + 8))(piVar2);
    if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a06b7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 4))(piVar2);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a06b79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a06b7b4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a06b7b4(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
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
  *puVar3 = PTR_PTR_4a06b9bc;
  puVar3[2] = *(undefined4 *)(param_1 + 0x50);
  piVar5 = *(int **)(param_1 + 0x54);
  puVar3[3] = piVar5;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))();
  }
  *puVar3 = PTR_PTR_4a06b9c0;
  if (local_28 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(local_28 + 8);
  }
  FUN_4a167668(uVar4,param_4);
  if (local_28 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(local_28 + 8);
  }
  FUN_4a167668(iVar1 + 4,param_5);
  piVar5 = (int *)FUN_4a06d33c(param_1,piVar2,auStack_34);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))();
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar7 = *(int *)(*(int *)(param_1 + 0x40) + 8);
  }
  piVar6 = (int *)(iVar7 + (param_2 + 0xc) * 4);
  if ((int *)*piVar6 != piVar5) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))();
    }
    piVar8 = (int *)*piVar6;
    if ((piVar8 != (int *)0x0) && (iVar7 = (**(code **)(*piVar8 + 8))(piVar8), iVar7 != 0)) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    *piVar6 = (int)piVar5;
  }
  if ((piVar5 != (int *)0x0) && (iVar7 = (**(code **)(*piVar5 + 8))(piVar5), iVar7 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  FUN_4a169628(auStack_34);
  if (piVar2 != (int *)0x0) {
    iVar7 = (**(code **)(*piVar2 + 8))(piVar2);
    if (iVar7 != 0) {
      (**(code **)(*piVar2 + 4))(piVar2);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a06b998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a06b9c4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a06b9c4(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_38 [12];
  int local_2c;
  
  iVar6 = 0;
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
  puVar3 = (undefined4 *)FUN_4a0c6bc0(auStack_38);
  *puVar3 = PTR_PTR_4a06bb4c;
  puVar3[2] = *(undefined4 *)(param_1 + 0x50);
  piVar5 = *(int **)(param_1 + 0x54);
  puVar3[3] = piVar5;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))();
  }
  *puVar3 = PTR_PTR_4a06bb50;
  if (local_2c == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(local_2c + 8);
  }
  FUN_4a167668(uVar4,param_4);
  if (local_2c == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(local_2c + 8);
  }
  FUN_4a167668(iVar1 + 4,param_5);
  if (local_2c == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(local_2c + 8);
  }
  FUN_4a167668(iVar1 + 8,param_6);
  uVar4 = FUN_4a06d33c(param_1,piVar2,auStack_38);
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar6 = *(int *)(*(int *)(param_1 + 0x40) + 8);
  }
  FUN_4a167668(iVar6 + (param_2 + 0xc) * 4,uVar4);
  FUN_4a169628(auStack_38);
  if (piVar2 != (int *)0x0) {
    iVar6 = (**(code **)(*piVar2 + 8))(piVar2);
    if (iVar6 != 0) {
      (**(code **)(*piVar2 + 4))(piVar2);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a06bb28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}




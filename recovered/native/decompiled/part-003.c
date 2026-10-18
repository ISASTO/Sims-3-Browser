/* AUTOMATED DECOMPILER OUTPUT. Not original source, not a buildable game.
 * Function boundaries, types, indirect calls, and data still require validation. */

// Address: 4a02da24

void FUN_4a02da24(void)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  
  puVar2 = PTR_DAT_4a02db14;
  iVar5 = *(int *)(PTR_DAT_4a02db14 + 0x58);
  uVar8 = 1;
  if (0 < iVar5) {
    uVar3 = FUN_4a171fac();
    uVar3 = FUN_4a171a94(uVar3,*(undefined4 *)(puVar2 + 0x54));
    *(undefined4 *)(puVar2 + 0x54) = uVar3;
    FUN_4a172458(uVar3,iVar5);
    if (!(bool)uVar8) {
      *(undefined4 *)(puVar2 + 0x54) = *(undefined4 *)(puVar2 + 0x58);
    }
    uVar6 = *(undefined4 *)(puVar2 + 0x50);
    uVar7 = *(undefined4 *)(puVar2 + 0x4c);
    uVar3 = FUN_4a171bb8(*(undefined4 *)(puVar2 + 0x54),*(undefined4 *)(puVar2 + 0x58));
    uVar6 = FUN_4a1724e0(uVar7,uVar6);
    uVar6 = FUN_4a17211c(uVar6,uVar3);
    uVar6 = FUN_4a171a94(uVar6,uVar7);
    *(undefined4 *)(puVar2 + 0x2c) = uVar6;
    uVar6 = FUN_4a171fac(*(undefined4 *)(puVar2 + 0x44));
    uVar7 = FUN_4a171fac(*(undefined4 *)(puVar2 + 0x48));
    uVar7 = FUN_4a1724e0(uVar6,uVar7);
    uVar3 = FUN_4a17211c(uVar7,uVar3);
    FUN_4a171a94(uVar3,uVar6);
    uVar4 = FUN_4a171e1c();
    if ((uVar4 & 1) == 0) {
      iVar5 = (int)uVar4 / 2;
      *(int *)(puVar2 + 0x14) = iVar5;
    }
    else {
      iVar1 = (int)(uVar4 + 1) / 2;
      iVar5 = uVar4 - iVar1;
      *(int *)(puVar2 + 0x14) = iVar1;
    }
    *(int *)(puVar2 + 0x18) = iVar5;
    if (!(bool)uVar8) {
      *(undefined4 *)(puVar2 + 0x58) = 0xbf800000;
    }
    return;
  }
  return;
}



// Address: 4a02db18

undefined * FUN_4a02db18(int param_1)

{
  if (param_1 == 5) {
    return PTR_s_ERRORCHECK_4a02db38 + -0x14;
  }
  if (param_1 != 6) {
    if (param_1 == 7) {
      return PTR_s_ERRORCHECK_4a02db38;
    }
    return (undefined *)0x0;
  }
  return PTR_s_ERRORCHECK_4a02db38 + -0xc;
}



// Address: 4a02db3c

undefined4 FUN_4a02db3c(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *local_14;
  
  iVar1 = FUN_4a161438();
  if (iVar1 == 0) {
    FUN_4a15edcc(s_JNI_Extension_is_not_available_4a02dce8);
    return 1;
  }
  piVar2 = (int *)FUN_4a161478();
  if (piVar2 == (int *)0x0) {
    FUN_4a15edcc(s_Unable_to_get_JVM_4a02dd08);
    return 1;
  }
  FUN_4a15edcc(s_________________________JVM___p_4a02dd1c,piVar2);
  local_14 = (int *)0x0;
  uVar3 = (**(code **)(*piVar2 + 0x18))(piVar2,&local_14,0x10006);
  FUN_4a15edcc(s________________________rtn___d_e_4a02dd3c,uVar3,local_14);
  iVar1 = (**(code **)(*local_14 + 0x18))(local_14,s_com_cp_app_MainActivity_4a02dd64);
  if (iVar1 == 0) {
    FUN_4a15edcc(PTR_s__________________________________4a02dd7c);
    return 1;
  }
  iVar4 = (**(code **)(*local_14 + 0x240))
                    (local_14,iVar1,s_m_Activity_4a02dd80,s_Lcom_cp_app_MainActivity__4a02dd8c);
  if (iVar4 == 0) {
    FUN_4a15edcc(PTR_s____________________________Sorry_4a02dda8);
    return 1;
  }
  iVar1 = (**(code **)(*local_14 + 0x244))(local_14,iVar1,iVar4);
  if (iVar1 == 0) {
    FUN_4a15edcc(s_Sorry__I_can_t_use_ActivityDemoW_4a02ddac);
    return 1;
  }
  uVar3 = (**(code **)(*local_14 + 0x18))(local_14,s_com_ea_sfr_demowrapper_SfrDemoWr_4a02ddd4);
  iVar4 = (**(code **)(*local_14 + 0x1c4))
                    (local_14,uVar3,s_ShowMainMenuPurchaseScreen_4a02ddfc,
                     s__Landroid_app_Activity_Z_V_4a02de18);
  if (iVar4 == 0) {
    FUN_4a15edcc(s_Sorry__I_can_t_find_ShowMainMenu_4a02de34);
    return 1;
  }
  FUN_4a0e493c(local_14,uVar3,iVar4,iVar1,param_1);
  return 0;
}



// Address: 4a02de8c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a02de8c(uint param_1)

{
  int iVar1;
  short sVar2;
  longlong lVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  undefined *puVar10;
  short *psVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  undefined1 uVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  int iStack_64;
  int iStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint local_50;
  int local_4c;
  int local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int iStack_2c;
  uint local_28;
  
  iVar16 = *(int *)PTR_DAT_4a02eda0;
  local_38 = 0xcf000000;
  local_34 = 0xcf000000;
  local_30 = 0xcf000000;
  local_3c = 0;
  uVar18 = 0xffffffff;
  local_40 = (*(uint *)(iVar16 + 4) & 0x10) >> 4;
  bVar4 = false;
  local_44 = 0;
  local_48 = 0;
  PTR_DAT_4a02eda4[2] = 0;
  local_4c = 0;
  local_50 = *(uint *)(param_1 + 8);
  local_28 = param_1;
  if (local_50 == param_1) {
    return;
  }
  do {
    uStack_54 = local_50;
    FUN_4a04db34(&local_50,&local_28);
    iVar17 = *(int *)(uStack_54 + 0xc);
    if (iVar17 != local_4c) {
      if (local_4c != 0) {
        (**(code **)(PTR_DAT_4a02eda8 + 0x34))(local_4c);
      }
      (**(code **)(PTR_DAT_4a02eda8 + 0x30))(iVar17);
      local_4c = iVar17;
      if (((*(uint *)(iVar17 + 0x10) & 0x80) != 0) && ((**(uint **)PTR_DAT_4a02eda0 & 0x300) == 0))
      {
        FUN_4a04ee3c(&local_50,&local_28);
      }
    }
    puVar10 = PTR_DAT_4a02eda4;
    if (*(int *)(uStack_54 + 0x14) == 3) {
      if (PTR_DAT_4a02eda4[2] == '\0') {
        iVar6 = *(int *)(iVar16 + 0x34c);
        iVar13 = *(int *)(iVar16 + 0x344);
        bVar22 = iVar6 == iVar13;
        if (bVar22) {
          iVar6 = *(int *)(iVar16 + 0x350);
          iVar13 = *(int *)(iVar16 + 0x348);
        }
        if (!bVar22 || iVar6 != iVar13) {
          FUN_4a150d7c(0);
          puVar10[2] = 1;
        }
      }
      sVar2 = *(short *)(uStack_54 + 0x100);
      bVar22 = sVar2 == 0;
      if (bVar22) {
        sVar2 = *(short *)(uStack_54 + 0x102);
      }
      bVar23 = bVar22 && sVar2 == 0;
      if (bVar22 && sVar2 == 0) {
        bVar23 = *(uint *)(iVar16 + 0x33c) == (uint)*(ushort *)(uStack_54 + 0x104);
      }
      if ((bVar23) && (*(uint *)(iVar16 + 0x340) == (uint)*(ushort *)(uStack_54 + 0x106)))
      goto LAB_4a02e098;
      thunk_FUN_4a150140(0xc11);
      if ((*(uint *)(*(int *)PTR_DAT_4a02eda0 + 4) & 0x200) == 0) {
        FUN_4a1507ec(*(undefined2 *)(uStack_54 + 0x100),
                     (*(int *)(iVar16 + 0x340) - (uint)*(ushort *)(uStack_54 + 0x102)) -
                     (uint)*(ushort *)(uStack_54 + 0x106),*(undefined2 *)(uStack_54 + 0x104));
      }
      else {
        FUN_4a1507ec(*(undefined2 *)(uStack_54 + 0x100),*(undefined2 *)(uStack_54 + 0x102),
                     *(undefined2 *)(uStack_54 + 0x104));
      }
    }
    else {
      if (PTR_DAT_4a02eda4[2] != '\0') {
        FUN_4a0472a0();
        puVar10[2] = 0;
      }
LAB_4a02e098:
      thunk_FUN_4a1500f8(0xc11);
    }
    puVar10 = PTR_DAT_4a02eda0;
    bVar22 = (*(uint *)(uStack_54 + 0x10) & 0x8000) == 0;
    uVar7 = uStack_54;
    if (!bVar22) {
      uVar7 = *(uint *)(uStack_54 + 0x14);
    }
    if ((bVar22 || uVar7 == 3) || ((*(uint *)(iVar17 + 0x10) & 0x400) != 0)) {
      if (bVar4) {
        thunk_FUN_4a1500f8(0xb60);
        bVar4 = false;
      }
    }
    else if (!bVar4) {
      if (local_48 == 0) {
        puVar8 = *(uint **)PTR_DAT_4a02eda0;
        if ((*puVar8 & 0x100) == 0) {
          lVar3 = (longlong)(int)(puVar8[0xfb] << 10) * (longlong)(int)puVar8[0xcb];
          uVar7 = (uint)lVar3 >> 0xc | (int)((ulonglong)lVar3 >> 0x20) << 0x14;
          lVar3 = (longlong)(int)(puVar8[0xfc] << 10) * (longlong)(int)puVar8[0xcb];
          uVar19 = (uint)lVar3 >> 0xc | (int)((ulonglong)lVar3 >> 0x20) << 0x14;
        }
        else {
          uVar7 = puVar8[0xfb] << 0x10;
          uVar19 = puVar8[0xfc] << 0x10;
        }
        if (puVar8[3] == 2) {
          thunk_FUN_4a150140(0xb60);
          thunk_FUN_4a1501a4(0xb63,uVar7);
          thunk_FUN_4a1501a4(0xb64,uVar19);
          uStack_58 = 0;
          iVar13 = *(int *)puVar10;
          iStack_64 = (uint)*(byte *)(iVar13 + 0x3f4) << 8;
          iStack_60 = (uint)*(byte *)(iVar13 + 0x3f5) << 8;
          uStack_5c = (uint)*(byte *)(iVar13 + 0x3f6) << 8;
          thunk_FUN_4a1501b8(0xb66,&iStack_64);
        }
        local_48 = 1;
      }
      thunk_FUN_4a150140(0xb60);
      bVar4 = true;
    }
    thunk_FUN_4a150154(0x8074);
    if ((**(uint **)PTR_DAT_4a02eda0 & 0x100) == 0) {
      uVar7 = ((*(uint **)PTR_DAT_4a02eda0)[1] & 0x10) >> 4;
      bVar22 = local_40 != uVar7;
      if (bVar22) {
        local_40 = uVar7;
      }
      if ((((*(int *)(uStack_54 + 0x14) == 3) != (uVar18 == 3)) || (uVar18 == 0xffffffff)) ||
         (bVar22)) {
        FUN_4a04df58(*(uint *)(uStack_54 + 0x10) >> 0x1f,*(int *)(uStack_54 + 0x14) == 3,0x3f800000)
        ;
      }
      thunk_FUN_4a150d6c(3,0x140c);
      uVar18 = *(uint *)(uStack_54 + 0x14);
    }
    else {
      if (*(int *)(uStack_54 + 0xe0) != 0) {
        iStack_64 = 0;
        iStack_60 = 0;
        uStack_5c = 0;
        uStack_58 = 0;
        FUN_4a150348(0x8842,&iStack_64);
        FUN_4a150618(0x8840);
        iVar13 = 0;
        uVar5 = *(ushort *)(uStack_54 + 0xdc);
        if (7 < uVar5) {
          uVar5 = 8;
        }
        if (uVar5 != 0) {
          do {
            FUN_4a1505bc(*(int *)(uStack_54 + 0xe0) + iVar13 * 0x40);
            iVar13 = iVar13 + 1;
            uVar7 = (uint)*(ushort *)(uStack_54 + 0xdc);
            if (7 < uVar7) {
              uVar7 = 8;
            }
          } while (iVar13 < (int)uVar7);
        }
      }
      uVar19 = uStack_54;
      uVar7 = *(uint *)(uStack_54 + 0x14);
      bVar22 = uVar7 == uVar18;
      if (bVar22) {
        uVar7 = *(uint *)(uStack_54 + 0x10);
      }
      bVar23 = (uVar7 & 0x80000000) == 0;
      uVar21 = bVar22 && bVar23;
      if (bVar22 && bVar23) {
        FUN_4a171da0(local_38,*(undefined4 *)(uStack_54 + 0x40));
        if ((bool)uVar21) {
          FUN_4a171da0(local_34,*(undefined4 *)(uVar19 + 0x44));
        }
        if ((bool)uVar21) {
          FUN_4a171da0(local_30,*(undefined4 *)(uVar19 + 0x48));
        }
        if (!(bool)uVar21) goto LAB_4a02e39c;
        uVar19 = (uint)*(short *)(uStack_54 + 0xf8);
        uVar18 = uVar19;
        uVar7 = uStack_54;
        if (uVar19 == local_3c) {
          uVar7 = (uint)*(ushort *)(uStack_54 + 0x18);
          uVar18 = local_44;
        }
        if (uVar19 != local_3c || uVar7 != uVar18) goto LAB_4a02e39c;
      }
      else {
LAB_4a02e39c:
        uVar18 = uStack_54;
        if (*(int *)(uStack_54 + 0x14) == 3) {
          puVar8 = *(uint **)PTR_DAT_4a02eda0;
          uVar7 = puVar8[0xd5];
          uVar18 = 3 - *(ushort *)(uStack_54 + 0x18);
          if ((uVar7 & 1) == 0) {
            iVar13 = puVar8[0xd1] << (uVar18 & 0xff);
            uVar19 = puVar8[0xd2];
          }
          else {
            iVar13 = puVar8[0xd2] << (uVar18 & 0xff);
            uVar19 = puVar8[0xd1];
          }
          iVar6 = uVar19 << (uVar18 & 0xff);
          uStack_58 = uStack_54;
          if ((*puVar8 & 0x100) != 0) {
            uStack_5c = puVar8[0xb3];
            bVar22 = (uVar7 & 1) == 0;
            if (bVar22) {
              uVar7 = puVar8[0xd1];
            }
            uVar18 = 3 - *(ushort *)(uStack_54 + 0x18);
            if (bVar22) {
              iVar9 = uVar7 << (uVar18 & 0xff);
              uVar7 = puVar8[0xd2];
            }
            else {
              iVar9 = puVar8[0xd2] << (uVar18 & 0xff);
              uVar7 = puVar8[0xd1];
            }
            iVar1 = uVar7 << (uVar18 & 0xff);
            if (puVar8[3] == 2) {
              FUN_4a150618(0x1701);
              FUN_4a1504dc();
              uVar18 = uStack_58;
              if (*(int *)(uStack_58 + 0x14) == 3) {
                iStack_64 = uStack_5c << 0x10;
                FUN_4a1506cc(0,iVar9 << 0x10,iVar1 << 0x10);
                FUN_4a150c00(iVar9 << 0xf,iVar1 << 0xf,0);
              }
              else {
                piVar20 = (int *)(uStack_58 + 0x108);
                iStack_2c = *(int *)PTR_DAT_4a02eda0;
                iVar9 = *(int *)(iStack_2c + 0x2d4);
                uVar7 = *(uint *)(iStack_2c + 0x32c);
                bVar22 = (uVar7 & 0xfff) != 0;
                if (bVar22) {
                  iVar9 = iVar9 << 0xc;
                }
                uVar19 = (int)uVar7 >> 0xc;
                uVar14 = uVar7;
                if (!bVar22) {
                  uVar14 = uVar19;
                }
                iStack_60 = FUN_4a0015f0(iVar9,uVar14);
                iStack_60 = iStack_60 << 0x10;
                iVar9 = *(int *)(iStack_2c + 0x2d0);
                if ((uVar7 & 0xfff) != 0) {
                  iVar9 = iVar9 << 0xc;
                  uVar19 = uVar7;
                }
                FUN_4a0015f0(iVar9,uVar19);
                iStack_64 = iStack_60;
                FUN_4a1506cc(*piVar20 << 0x10,(*(int *)(uVar18 + 0x110) + *piVar20) * 0x10000,
                             (*(int *)(uVar18 + 0x114) + *(int *)(uVar18 + 0x10c)) * -0x10000,
                             *(int *)(uVar18 + 0x10c) * -0x10000);
              }
              puVar10 = PTR_DAT_4a02eda0;
              FUN_4a1507ac(*(int *)(*(int *)PTR_DAT_4a02eda0 + 0x354) * 0x5a0000,0);
              if ((*(uint *)(*(int *)puVar10 + 4) & 0x200) == 0) {
                uVar15 = 0x10000;
              }
              else {
                uVar15 = 0xffff0000;
              }
              FUN_4a1507d4(0x10000,uVar15);
            }
          }
          FUN_4a150bec(*(undefined4 *)(uStack_54 + 0x40),*(undefined4 *)(uStack_54 + 0x44),0);
          if ((*(uint *)(*(int *)PTR_DAT_4a02eda0 + 0x354) & 1) != 0) {
            FUN_4a150c00((iVar13 - iVar6) * 0x8000,(iVar6 - iVar13) * 0x8000,0);
          }
          FUN_4a150c00(iVar13 * -0x8000,iVar6 * -0x8000,0);
        }
        else if (*(int *)(uStack_54 + 0x10) < 0) {
          puVar8 = *(uint **)PTR_DAT_4a02eda0;
          if ((*puVar8 & 0x100) != 0) {
            uVar7 = puVar8[0xd5];
            uVar19 = puVar8[0xb3];
            bVar22 = (uVar7 & 1) == 0;
            if (bVar22) {
              uVar7 = puVar8[0xd1];
            }
            uVar14 = 3 - *(ushort *)(uStack_54 + 0x18);
            if (bVar22) {
              iVar13 = uVar7 << (uVar14 & 0xff);
              uVar7 = puVar8[0xd2];
            }
            else {
              iVar13 = puVar8[0xd2] << (uVar14 & 0xff);
              uVar7 = puVar8[0xd1];
            }
            iVar6 = uVar7 << (uVar14 & 0xff);
            if (puVar8[3] == 2) {
              FUN_4a150618(0x1701);
              FUN_4a1504dc();
              if (*(int *)(uVar18 + 0x14) == 3) {
                iStack_64 = uVar19 << 0x10;
                FUN_4a1506cc(0,iVar13 << 0x10,iVar6 << 0x10);
                FUN_4a150c00(iVar13 << 0xf,iVar6 << 0xf,0);
              }
              else {
                iVar6 = *(int *)PTR_DAT_4a02eda0;
                uVar7 = *(uint *)(iVar6 + 0x32c);
                iVar13 = *(int *)(iVar6 + 0x2d4);
                bVar22 = (uVar7 & 0xfff) != 0;
                if (bVar22) {
                  iVar13 = iVar13 << 0xc;
                }
                uVar19 = (int)uVar7 >> 0xc;
                uVar14 = uVar7;
                if (!bVar22) {
                  uVar14 = uVar19;
                }
                iVar9 = FUN_4a0015f0(iVar13,uVar14);
                iVar13 = *(int *)(iVar6 + 0x2d0);
                if ((uVar7 & 0xfff) != 0) {
                  iVar13 = iVar13 << 0xc;
                  uVar19 = uVar7;
                }
                FUN_4a0015f0(iVar13,uVar19);
                iStack_64 = iVar9 << 0x10;
                FUN_4a1506cc(*(int *)(uVar18 + 0x108) << 0x10,
                             (*(int *)(uVar18 + 0x110) + *(int *)(uVar18 + 0x108)) * 0x10000,
                             (*(int *)(uVar18 + 0x114) + *(int *)(uVar18 + 0x10c)) * -0x10000,
                             *(int *)(uVar18 + 0x10c) * -0x10000);
              }
              puVar10 = PTR_DAT_4a02eda0;
              FUN_4a1507ac(*(int *)(*(int *)PTR_DAT_4a02eda0 + 0x354) * 0x5a0000,0);
              if ((*(uint *)(*(int *)puVar10 + 4) & 0x200) == 0) {
                uVar15 = 0x10000;
              }
              else {
                uVar15 = 0xffff0000;
              }
              FUN_4a1507d4(0x10000,uVar15);
            }
          }
        }
        else {
          FUN_4a04df58(0,0,0x3f800000);
        }
      }
      local_44 = (uint)*(ushort *)(uStack_54 + 0x18);
      uVar18 = *(uint *)(uStack_54 + 0x14);
      local_38 = *(undefined4 *)(uStack_54 + 0x40);
      local_34 = *(undefined4 *)(uStack_54 + 0x44);
      local_30 = *(undefined4 *)(uStack_54 + 0x48);
      local_3c = (uint)*(short *)(uStack_54 + 0xf8);
      FUN_4a03b2a0();
    }
    uVar7 = uStack_54;
    uVar19 = *(uint *)(*(int *)(uStack_54 + 0xc) + 0x10);
    if (((uVar19 & 2) != 0) || ((uVar19 & 1) == 2)) {
      *(uint *)(uStack_54 + 0x10) = *(uint *)(uStack_54 + 0x10) & 0xffff87ff;
    }
    puVar10 = *(undefined **)(uStack_54 + 0x134);
    if (puVar10 == (undefined *)0x0) {
LAB_4a02e8c4:
      thunk_FUN_4a15010c(0x8075);
    }
    else {
      uVar19 = **(uint **)PTR_DAT_4a02eda0;
      bVar22 = (uVar19 & 0x200) == 0;
      if (!bVar22) {
        uVar19 = *(uint *)(uStack_54 + 0x10);
      }
      if (bVar22 || (uVar19 & 0x6000) == 0) goto LAB_4a02e8c4;
      if ((*(uint *)(uStack_54 + 300) & 2) == 0) {
        if ((*(uint *)PTR_DAT_4a02edac & 1) == 0) {
          iVar13 = thunk_FUN_4a1491bc(PTR_DAT_4a02edac);
          puVar10 = PTR_DAT_4a02edb0;
          if (iVar13 != 0) {
            *(undefined2 *)PTR_DAT_4a02edb0 = 0;
            *(undefined4 *)(puVar10 + 8) = 0;
            *(undefined4 *)(puVar10 + 0xc) = 0;
            *(undefined4 *)(puVar10 + 0x10) = 0;
            *(undefined2 *)(puVar10 + 4) = 0;
            *(undefined2 *)(puVar10 + 2) = 1;
            *(undefined2 *)(puVar10 + 6) = 0;
          }
          if ((*(uint *)(uVar7 + 300) & 2) == 0) goto LAB_4a02e870;
          psVar11 = *(short **)(uVar7 + 0x134);
          sVar2 = psVar11[2];
          bVar22 = sVar2 == 0;
          if (bVar22) {
            sVar2 = psVar11[3];
          }
          bVar23 = bVar22 && sVar2 == 0;
          if (bVar22 && sVar2 == 0) {
            bVar23 = *psVar11 == 0x1802;
          }
          if (bVar23) {
            uStack_5c = *(uint *)(psVar11 + 6);
          }
          else {
            uStack_5c = 0;
          }
        }
        else {
LAB_4a02e870:
          uStack_5c = *(uint *)(uVar7 + 0x134);
        }
        puVar10 = PTR_DAT_4a02edb0;
        iStack_60 = 0;
        uStack_58 = 0;
        iStack_64 = 0;
        *(undefined4 *)PTR_DAT_4a02edb0 = 0x11802;
        *(undefined4 *)(puVar10 + 4) = 0;
        *(undefined4 *)(puVar10 + 8) = 0;
        *(uint *)(puVar10 + 0xc) = uStack_5c;
        *(undefined4 *)(puVar10 + 0x10) = 0;
      }
      FUN_4a069758(puVar10,PTR_FUN_4a15069c_1_4a02edb4);
      thunk_FUN_4a150154(0x8075);
    }
    if (((*(int *)(uStack_54 + 0x140) == 0) ||
        (uVar7 = *(uint *)(*(int *)(uStack_54 + 0xc) + 0x10), (uVar7 & 2) != 0)) ||
       ((uVar7 & 1) == 2)) {
      thunk_FUN_4a1500f8(0xb57);
      thunk_FUN_4a15010c(0x8076);
      iVar13 = 0x10000;
      thunk_FUN_4a14fed0(0x10000,0x10000);
    }
    else {
      thunk_FUN_4a150140(0xb57);
      thunk_FUN_4a150154(0x8076);
      uVar7 = uStack_54;
      if ((*(uint *)(uStack_54 + 300) & 0x10) == 0) {
        if ((*(uint *)PTR_DAT_4a02edb8 & 1) == 0) {
          iVar13 = thunk_FUN_4a1491bc(PTR_DAT_4a02edb8);
          puVar10 = PTR_DAT_4a02edbc;
          if (iVar13 != 0) {
            *(undefined2 *)PTR_DAT_4a02edbc = 0;
            *(undefined4 *)(puVar10 + 8) = 0;
            *(undefined4 *)(puVar10 + 0xc) = 0;
            *(undefined4 *)(puVar10 + 0x10) = 0;
            *(undefined2 *)(puVar10 + 4) = 0;
            *(undefined2 *)(puVar10 + 2) = 1;
            *(undefined2 *)(puVar10 + 6) = 0;
          }
          if ((*(uint *)(uVar7 + 300) & 0x10) == 0) goto LAB_4a02e9b0;
          psVar11 = *(short **)(uVar7 + 0x140);
          sVar2 = psVar11[2];
          bVar22 = sVar2 == 0;
          if (bVar22) {
            sVar2 = psVar11[3];
          }
          bVar23 = bVar22 && sVar2 == 0;
          if (bVar22 && sVar2 == 0) {
            bVar23 = *psVar11 == 0x2001;
          }
          if (bVar23) {
            uStack_5c = *(uint *)(psVar11 + 6);
          }
          else {
            uStack_5c = 0;
          }
        }
        else {
LAB_4a02e9b0:
          uStack_5c = *(uint *)(uVar7 + 0x140);
        }
        puVar10 = PTR_DAT_4a02edbc;
        iStack_60 = 0;
        uStack_58 = 0;
        iStack_64 = 0;
        *(undefined4 *)PTR_DAT_4a02edbc = 0x12001;
        *(undefined4 *)(puVar10 + 4) = 0;
        *(undefined4 *)(puVar10 + 8) = 0;
        *(uint *)(puVar10 + 0xc) = uStack_5c;
        *(undefined4 *)(puVar10 + 0x10) = 0;
      }
      else {
        puVar10 = *(undefined **)(uStack_54 + 0x140);
      }
      iVar13 = 0;
      FUN_4a0696c0(puVar10,PTR_FUN_4a14fef8_1_4a02edc0);
    }
    (**(code **)(PTR_DAT_4a02eda8 + 0x1c))(uStack_54);
    uVar7 = uStack_54;
    puVar10 = PTR_DAT_4a02edc4;
    iVar6 = (int)*(short *)PTR_DAT_4a02edc4;
    bVar22 = *(short *)(uStack_54 + 0xd2) == iVar6;
    if (bVar22) {
      iVar6 = (int)*(short *)(uStack_54 + 0xd4);
      iVar13 = (int)*(short *)(PTR_DAT_4a02edc4 + 2);
    }
    if (!bVar22 || iVar6 != iVar13) {
      *(short *)PTR_DAT_4a02edc4 = *(short *)(uStack_54 + 0xd2);
      *(undefined2 *)(puVar10 + 2) = *(undefined2 *)(uStack_54 + 0xd4);
      puVar10[0x48] = 1;
      if (puVar10[0x49] == '\0') {
        uVar15 = FUN_4a171fac();
        uVar15 = FUN_4a17295c(uVar15,0xfffffff4);
        *(undefined4 *)(puVar10 + 0x38) = uVar15;
        uVar15 = FUN_4a171fac((int)*(short *)(uVar7 + 0xd4));
        iVar6 = FUN_4a17295c(uVar15,0xfffffff4);
      }
      else {
        *(int *)(puVar10 + 0x38) = (int)*(short *)(uStack_54 + 0xd2) << 4;
        iVar6 = (int)*(short *)(uStack_54 + 0xd4) << 4;
      }
      *(int *)(puVar10 + 0x3c) = iVar6;
    }
    sVar2 = *(short *)(uVar7 + 0xd6);
    iVar6 = (int)*(short *)(puVar10 + 0x4c);
    bVar22 = sVar2 == iVar6;
    if (bVar22) {
      iVar6 = (int)*(short *)(uVar7 + 0xd8);
      iVar13 = (int)*(short *)(puVar10 + 0x4e);
    }
    if (!bVar22 || iVar6 != iVar13) {
      *(short *)(puVar10 + 0x4c) = sVar2;
      *(undefined2 *)(puVar10 + 0x4e) = *(undefined2 *)(uVar7 + 0xd8);
      puVar10[0x94] = 1;
      if (puVar10[0x95] == '\0') {
        uVar15 = FUN_4a171fac();
        uVar15 = FUN_4a17295c(uVar15,0xfffffff4);
        *(undefined4 *)(puVar10 + 0x84) = uVar15;
        uVar15 = FUN_4a171fac((int)*(short *)(uVar7 + 0xd8));
        iVar13 = FUN_4a17295c(uVar15,0xfffffff4);
      }
      else {
        *(int *)(puVar10 + 0x84) = (int)*(short *)(uVar7 + 0xd6) << 4;
        iVar13 = (int)*(short *)(uVar7 + 0xd8) << 4;
      }
      *(int *)(puVar10 + 0x88) = iVar13;
    }
    if (puVar10[0x48] != '\0') {
      thunk_FUN_4a14fcc4(0x84c0);
      FUN_4a150618(0x1702);
      if (puVar10[0x49] == '\0') {
        FUN_4a150544(puVar10 + 8);
      }
      else {
        FUN_4a1505bc();
      }
      puVar10[0x48] = 0;
    }
    if (puVar10[0x94] != '\0') {
      thunk_FUN_4a14fcc4(0x84c1);
      FUN_4a150618(0x1702);
      if (puVar10[0x95] == '\0') {
        FUN_4a150544(puVar10 + 0x54);
      }
      else {
        FUN_4a1505bc();
      }
      puVar10[0x94] = 0;
    }
    uVar7 = (*(uint *)(iVar17 + 0x10) & 0x1c00000) >> 0x16;
    if (((uVar7 == 1 || uVar7 == 6) && (iVar13 = FUN_4a053774(), iVar13 != 0)) &&
       (*(int *)(iVar17 + 0x54) == 0)) {
      uVar15 = *(undefined4 *)(uStack_54 + 0x148);
      *(undefined4 *)(uStack_54 + 0x148) = *(undefined4 *)(uStack_54 + 0x14c);
      *(undefined4 *)(uStack_54 + 0x14c) = uVar15;
      uVar7 = *(uint *)(uStack_54 + 300);
      *(uint *)(uStack_54 + 300) = uVar7 & 0xffffff3f;
      if ((uVar7 & 0x40) != 0) {
        *(uint *)(uStack_54 + 300) = uVar7 & 0xffffff3f | 0x80;
      }
      if ((uVar7 & 0x80) != 0) {
        *(uint *)(uStack_54 + 300) = *(uint *)(uStack_54 + 300) | 0x40;
      }
    }
    if (*(int *)(uStack_54 + 0x148) == 0) {
      if (*(int *)(*(int *)(uStack_54 + 0xc) + 0x2c) == 0) {
        thunk_FUN_4a15010c(0x8078);
      }
      else {
        thunk_FUN_4a150154();
        iVar17 = *(int *)(uStack_54 + 0xb0);
        iVar13 = *(int *)PTR_DAT_4a02eda0;
        iVar6 = *(int *)(iVar13 + 0x38c);
        *(int *)(iVar13 + 0x388) = iVar6;
        *(int *)(iVar13 + 0x38c) = iVar17 * 4 + iVar6;
        FUN_4a001274(iVar6,*(int *)(uStack_54 + 0xb0) << 2);
        thunk_FUN_4a150a70(2,0x1402);
      }
    }
    else {
      thunk_FUN_4a14fe90(0x84c0);
      thunk_FUN_4a150154(0x8078);
      thunk_FUN_4a0083c0(0x30);
      uVar7 = uStack_54;
      if ((*(uint *)(uStack_54 + 300) & 0x40) == 0) {
        if ((*(uint *)PTR_DAT_4a02edc8 & 1) == 0) {
          iVar17 = thunk_FUN_4a1491bc(PTR_DAT_4a02edc8);
          puVar10 = PTR_DAT_4a02edcc;
          if (iVar17 != 0) {
            *(undefined2 *)PTR_DAT_4a02edcc = 0;
            *(undefined4 *)(puVar10 + 8) = 0;
            *(undefined4 *)(puVar10 + 0xc) = 0;
            *(undefined4 *)(puVar10 + 0x10) = 0;
            *(undefined2 *)(puVar10 + 4) = 0;
            *(undefined2 *)(puVar10 + 2) = 1;
            *(undefined2 *)(puVar10 + 6) = 0;
          }
          if ((*(uint *)(uVar7 + 300) & 0x40) == 0) goto LAB_4a02edd0;
          psVar11 = *(short **)(uVar7 + 0x148);
          sVar2 = psVar11[2];
          bVar22 = sVar2 == 0;
          if (bVar22) {
            sVar2 = psVar11[3];
          }
          bVar23 = bVar22 && sVar2 == 0;
          if (bVar22 && sVar2 == 0) {
            bVar23 = *psVar11 == 0x1002;
          }
          if (bVar23) {
            uStack_5c = *(uint *)(psVar11 + 6);
          }
          else {
            uStack_5c = 0;
          }
        }
        else {
LAB_4a02edd0:
          uStack_5c = *(uint *)(uVar7 + 0x148);
        }
        puVar10 = PTR_DAT_4a02edcc;
        iStack_60 = 0;
        uStack_58 = 0;
        iStack_64 = 0;
        *(undefined4 *)PTR_DAT_4a02edcc = 0x11002;
        *(undefined4 *)(puVar10 + 4) = 0;
        *(undefined4 *)(puVar10 + 8) = 0;
        *(uint *)(puVar10 + 0xc) = uStack_5c;
        *(undefined4 *)(puVar10 + 0x10) = 0;
      }
      else {
        puVar10 = *(undefined **)(uStack_54 + 0x148);
      }
      FUN_4a0696c0(puVar10,PTR_FUN_4a150a70_1_4a02f488);
    }
    if (1 < *(uint *)(iVar16 + 0x5b4)) {
      if (*(int *)(uStack_54 + 0x14c) == 0) {
        thunk_FUN_4a14fe90(0x84c1);
        thunk_FUN_4a15010c(0x8078);
        thunk_FUN_4a14fe90(0x84c0);
      }
      else {
        thunk_FUN_4a14fe90(0x84c1);
        thunk_FUN_4a150154(0x8078);
        thunk_FUN_4a0083c0(0x30);
        uVar7 = uStack_54;
        if ((*(uint *)(uStack_54 + 300) & 0x80) == 0) {
          if ((*(uint *)PTR_DAT_4a02edc8 & 1) == 0) {
            iVar17 = thunk_FUN_4a1491bc(PTR_DAT_4a02edc8);
            puVar10 = PTR_DAT_4a02edcc;
            if (iVar17 != 0) {
              *(undefined2 *)PTR_DAT_4a02edcc = 0;
              *(undefined4 *)(puVar10 + 8) = 0;
              *(undefined4 *)(puVar10 + 0xc) = 0;
              *(undefined4 *)(puVar10 + 0x10) = 0;
              *(undefined2 *)(puVar10 + 4) = 0;
              *(undefined2 *)(puVar10 + 2) = 1;
              *(undefined2 *)(puVar10 + 6) = 0;
            }
            if ((*(uint *)(uVar7 + 300) & 0x80) == 0) goto LAB_4a02ef24;
            psVar11 = *(short **)(uVar7 + 0x14c);
            sVar2 = psVar11[2];
            bVar22 = sVar2 == 0;
            if (bVar22) {
              sVar2 = psVar11[3];
            }
            bVar23 = bVar22 && sVar2 == 0;
            if (bVar22 && sVar2 == 0) {
              bVar23 = *psVar11 == 0x1002;
            }
            if (bVar23) {
              uStack_5c = *(uint *)(psVar11 + 6);
            }
            else {
              uStack_5c = 0;
            }
          }
          else {
LAB_4a02ef24:
            uStack_5c = *(uint *)(uVar7 + 0x14c);
          }
          puVar10 = PTR_DAT_4a02edcc;
          iStack_60 = 0;
          uStack_58 = 0;
          iStack_64 = 0;
          *(undefined4 *)PTR_DAT_4a02edcc = 0x11002;
          *(undefined4 *)(puVar10 + 4) = 0;
          *(undefined4 *)(puVar10 + 8) = 0;
          *(uint *)(puVar10 + 0xc) = uStack_5c;
          *(undefined4 *)(puVar10 + 0x10) = 0;
        }
        else {
          puVar10 = *(undefined **)(uStack_54 + 0x14c);
        }
        FUN_4a0696c0(puVar10,PTR_FUN_4a150a70_1_4a02f488);
        thunk_FUN_4a14fe90(0x84c0);
      }
    }
    FUN_4a0408b0(uStack_54);
    if (*(int *)(uStack_54 + 0xe0) != 0) {
      FUN_4a150618(0x8840);
      thunk_FUN_4a150154(0x8844);
      thunk_FUN_4a150154(0x86ad);
    }
    uVar7 = uStack_54;
    puVar10 = PTR_DAT_4a02eda0;
    switch(*(undefined4 *)(uStack_54 + 0xec)) {
    case 0:
      if ((*(uint *)(uStack_54 + 300) & 0x20) == 0) {
        if ((*(uint *)PTR_DAT_4a02f48c & 1) == 0) {
          iVar17 = thunk_FUN_4a1491bc(PTR_DAT_4a02f48c);
          puVar10 = PTR_DAT_4a02f490;
          if (iVar17 != 0) {
            *(undefined2 *)PTR_DAT_4a02f490 = 0;
            *(undefined4 *)(puVar10 + 8) = 0;
            *(undefined4 *)(puVar10 + 0xc) = 0;
            *(undefined4 *)(puVar10 + 0x10) = 0;
            *(undefined2 *)(puVar10 + 4) = 0;
            *(undefined2 *)(puVar10 + 2) = 1;
            *(undefined2 *)(puVar10 + 6) = 0;
          }
          if ((*(uint *)(uVar7 + 300) & 0x20) == 0) goto LAB_4a02f238;
          psVar11 = *(short **)(uVar7 + 0x144);
          sVar2 = psVar11[2];
          bVar22 = sVar2 == 0;
          if (bVar22) {
            sVar2 = psVar11[3];
          }
          bVar23 = bVar22 && sVar2 == 0;
          if (bVar22 && sVar2 == 0) {
            bVar23 = *psVar11 == 0x803;
          }
          if (bVar23) {
            uStack_5c = *(uint *)(psVar11 + 6);
          }
          else {
            uStack_5c = 0;
          }
        }
        else {
LAB_4a02f238:
          uStack_5c = *(uint *)(uVar7 + 0x144);
        }
        puVar10 = PTR_DAT_4a02f490;
        iStack_60 = 0;
        uStack_58 = 0;
        iStack_64 = 0;
        *(undefined4 *)PTR_DAT_4a02f490 = 0x10803;
        *(undefined4 *)(puVar10 + 4) = 0;
        *(undefined4 *)(puVar10 + 8) = 0;
        *(uint *)(puVar10 + 0xc) = uStack_5c;
        *(undefined4 *)(puVar10 + 0x10) = 0;
      }
      else {
        puVar10 = *(undefined **)(uStack_54 + 0x144);
      }
      FUN_4a069608(puVar10,4,*(undefined4 *)(uStack_54 + 0xf0));
      break;
    case 1:
      if ((*(uint *)(uStack_54 + 300) & 0x20) == 0) {
        if ((*(uint *)PTR_DAT_4a02f48c & 1) == 0) {
          iVar17 = thunk_FUN_4a1491bc(PTR_DAT_4a02f48c);
          puVar10 = PTR_DAT_4a02f490;
          if (iVar17 != 0) {
            *(undefined2 *)PTR_DAT_4a02f490 = 0;
            *(undefined4 *)(puVar10 + 8) = 0;
            *(undefined4 *)(puVar10 + 0xc) = 0;
            *(undefined4 *)(puVar10 + 0x10) = 0;
            *(undefined2 *)(puVar10 + 4) = 0;
            *(undefined2 *)(puVar10 + 2) = 1;
            *(undefined2 *)(puVar10 + 6) = 0;
          }
          if ((*(uint *)(uVar7 + 300) & 0x20) == 0) goto LAB_4a02f07c;
          psVar11 = *(short **)(uVar7 + 0x144);
          sVar2 = psVar11[2];
          bVar22 = sVar2 == 0;
          if (bVar22) {
            sVar2 = psVar11[3];
          }
          bVar23 = bVar22 && sVar2 == 0;
          if (bVar22 && sVar2 == 0) {
            bVar23 = *psVar11 == 0x803;
          }
          if (bVar23) {
            uStack_5c = *(uint *)(psVar11 + 6);
          }
          else {
            uStack_5c = 0;
          }
        }
        else {
LAB_4a02f07c:
          uStack_5c = *(uint *)(uVar7 + 0x144);
        }
        puVar10 = PTR_DAT_4a02f490;
        iStack_60 = 0;
        uStack_58 = 0;
        iStack_64 = 0;
        *(undefined4 *)PTR_DAT_4a02f490 = 0x10803;
        *(undefined4 *)(puVar10 + 4) = 0;
        *(undefined4 *)(puVar10 + 8) = 0;
        *(uint *)(puVar10 + 0xc) = uStack_5c;
        *(undefined4 *)(puVar10 + 0x10) = 0;
      }
      else {
        puVar10 = *(undefined **)(uStack_54 + 0x144);
      }
      uVar12 = *(undefined4 *)(uStack_54 + 0xf0);
      uVar15 = 5;
      goto LAB_4a02f19c;
    case 2:
    case 8:
      if ((*(uint *)(uStack_54 + 300) & 0x20) == 0) {
        if ((*(uint *)PTR_DAT_4a02f48c & 1) == 0) {
          iVar17 = thunk_FUN_4a1491bc(PTR_DAT_4a02f48c);
          puVar10 = PTR_DAT_4a02f490;
          if (iVar17 != 0) {
            *(undefined2 *)PTR_DAT_4a02f490 = 0;
            *(undefined4 *)(puVar10 + 8) = 0;
            *(undefined4 *)(puVar10 + 0xc) = 0;
            *(undefined4 *)(puVar10 + 0x10) = 0;
            *(undefined2 *)(puVar10 + 4) = 0;
            *(undefined2 *)(puVar10 + 2) = 1;
            *(undefined2 *)(puVar10 + 6) = 0;
          }
          if ((*(uint *)(uVar7 + 300) & 0x20) == 0) goto LAB_4a02f158;
          psVar11 = *(short **)(uVar7 + 0x144);
          sVar2 = psVar11[2];
          bVar22 = sVar2 == 0;
          if (bVar22) {
            sVar2 = psVar11[3];
          }
          bVar23 = bVar22 && sVar2 == 0;
          if (bVar22 && sVar2 == 0) {
            bVar23 = *psVar11 == 0x803;
          }
          if (bVar23) {
            uStack_5c = *(uint *)(psVar11 + 6);
          }
          else {
            uStack_5c = 0;
          }
        }
        else {
LAB_4a02f158:
          uStack_5c = *(uint *)(uVar7 + 0x144);
        }
        puVar10 = PTR_DAT_4a02f490;
        iStack_60 = 0;
        uStack_58 = 0;
        iStack_64 = 0;
        *(undefined4 *)PTR_DAT_4a02f490 = 0x10803;
        *(undefined4 *)(puVar10 + 4) = 0;
        *(undefined4 *)(puVar10 + 8) = 0;
        *(uint *)(puVar10 + 0xc) = uStack_5c;
        *(undefined4 *)(puVar10 + 0x10) = 0;
      }
      else {
        puVar10 = *(undefined **)(uStack_54 + 0x144);
      }
      uVar12 = *(undefined4 *)(uStack_54 + 0xf0);
      uVar15 = 6;
LAB_4a02f19c:
      FUN_4a069608(puVar10,uVar15,uVar12);
      break;
    case 5:
    case 6:
      uVar7 = **(uint **)PTR_DAT_4a02eda0;
      bVar22 = (uVar7 & 0x100) == 0;
      if (bVar22) {
        uVar7 = *(uint *)(uStack_54 + 0x14);
      }
      if (bVar22 && uVar7 == 3) {
        FUN_4a150618(0x1700);
        FUN_4a150738();
        FUN_4a150c00(*(int *)(*(int *)puVar10 + 0x330) >> 4,*(int *)(*(int *)puVar10 + 0x334) >> 4);
      }
      uVar19 = uStack_54;
      if (*(int *)(uStack_54 + 0xec) == 5) {
        uVar15 = 1;
      }
      else {
        uVar15 = 3;
      }
      if ((*(uint *)(uStack_54 + 300) & 0x20) == 0) {
        if ((*(uint *)PTR_DAT_4a02f48c & 1) == 0) {
          iVar17 = thunk_FUN_4a1491bc(PTR_DAT_4a02f48c);
          puVar10 = PTR_DAT_4a02f490;
          if (iVar17 != 0) {
            *(undefined2 *)PTR_DAT_4a02f490 = 0;
            *(undefined4 *)(puVar10 + 8) = 0;
            *(undefined4 *)(puVar10 + 0xc) = 0;
            *(undefined4 *)(puVar10 + 0x10) = 0;
            *(undefined2 *)(puVar10 + 4) = 0;
            *(undefined2 *)(puVar10 + 2) = 1;
            *(undefined2 *)(puVar10 + 6) = 0;
          }
          if ((*(uint *)(uVar19 + 300) & 0x20) == 0) goto LAB_4a02f37c;
          psVar11 = *(short **)(uVar19 + 0x144);
          sVar2 = psVar11[2];
          bVar23 = sVar2 == 0;
          if (bVar23) {
            sVar2 = psVar11[3];
          }
          bVar24 = bVar23 && sVar2 == 0;
          if (bVar23 && sVar2 == 0) {
            bVar24 = *psVar11 == 0x803;
          }
          if (bVar24) {
            uStack_5c = *(uint *)(psVar11 + 6);
          }
          else {
            uStack_5c = 0;
          }
        }
        else {
LAB_4a02f37c:
          uStack_5c = *(uint *)(uVar19 + 0x144);
        }
        puVar10 = PTR_DAT_4a02f490;
        iStack_60 = 0;
        uStack_58 = 0;
        iStack_64 = 0;
        *(undefined4 *)PTR_DAT_4a02f490 = 0x10803;
        *(undefined4 *)(puVar10 + 4) = 0;
        *(undefined4 *)(puVar10 + 8) = 0;
        *(uint *)(puVar10 + 0xc) = uStack_5c;
        *(undefined4 *)(puVar10 + 0x10) = 0;
      }
      else {
        puVar10 = *(undefined **)(uStack_54 + 0x144);
      }
      FUN_4a069608(puVar10,uVar15,*(undefined4 *)(uStack_54 + 0xf0));
      if (bVar22 && uVar7 == 3) {
        FUN_4a150724();
      }
    }
    if (((-1 < *(int *)(uStack_54 + 0xfc)) || (*(short *)(uStack_54 + 0xf8) != 0)) &&
       (*(int *)(uStack_54 + 0x14) != 3)) {
      uVar15 = 0;
      uVar12 = 0x10000;
      if ((*(uint *)(*(int *)PTR_DAT_4a02eda0 + 0x5bc) & 0x40) == 0) {
        uVar15 = 0x10000;
        uVar12 = 0;
      }
      if (*(int *)(*(int *)PTR_DAT_4a02eda0 + 0xc) == 3) {
        uVar12 = FUN_4a171fac();
        uVar12 = FUN_4a17295c(uVar12,0xfffffff0);
        uVar15 = FUN_4a171fac(uVar15);
        uVar15 = FUN_4a17295c(uVar15,0xfffffff0);
        thunk_FUN_4a1500c4(uVar15,uVar12);
      }
      else {
        thunk_FUN_4a1500d8(uVar15,uVar12);
      }
    }
    local_50 = *(uint *)(local_50 + 8);
    if (local_50 == local_28) {
      if (bVar4) {
        thunk_FUN_4a1500f8(0xb60);
      }
      return;
    }
  } while( true );
}



// Address: 4a02f494

void FUN_4a02f494(int param_1)

{
  undefined *apuStack_3c [9];
  int iStack_18;
  
  *PTR_DAT_4a02f8a4 = 0;
  apuStack_3c[0] = PTR_DAT_4a02f8a8;
  if (*(int *)(param_1 + 8) != param_1) {
    iStack_18 = param_1;
    FUN_4a02f4da(*(int *)(param_1 + 8),param_1,apuStack_3c);
  }
  return;
}



// Address: 4a02f4da

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_4a02f4da(int param_1)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  int iVar4;
  ushort *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  int unaff_r6;
  int unaff_r7;
  char cVar14;
  undefined8 uVar15;
  int in_stack_00000004;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  uint in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  int in_stack_00000034;
  int in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined4 in_stack_00000058;
  uint in_stack_0000005c;
  undefined *in_stack_00000060;
  int in_stack_00000064;
  undefined *in_stack_00000068;
  int iStack0000006c;
  int in_stack_00000070;
  int in_stack_00000078;
  undefined *in_stack_0000007c;
  undefined4 in_stack_00000080;
  uint in_stack_00000084;
  uint in_stack_00000088;
  int in_stack_0000008c;
  undefined4 in_stack_00000090;
  undefined4 in_stack_00000094;
  undefined4 in_stack_00000098;
  int in_stack_0000009c;
  int in_stack_000000a0;
  undefined4 *in_stack_000000a4;
  undefined4 in_stack_000000a8;
  int in_stack_000000ac;
  uint in_stack_000000b0;
  int in_stack_000000b4;
  undefined4 in_stack_000000b8;
  undefined4 in_stack_000000bc;
  uint in_stack_000000c0;
  undefined4 in_stack_000000c4;
  int in_stack_000000c8;
  
  iStack0000006c = param_1;
  thunk_FUN_4a04db34(&stack0x00000070,&stack0x000000c8,&stack0x0000006c);
  iVar10 = *(int *)(iStack0000006c + 0xc);
  if ((*(int *)(iVar10 + 0x10) << 0x18 < 0) && ((**(uint **)PTR_DAT_4a02f8a0 & 0x3ff) >> 8 == 0)) {
    thunk_FUN_4a04ee3c(&stack0x00000070,&stack0x000000c8,&stack0x0000006c);
  }
  FUN_4a04141c(iStack0000006c,&stack0x00000074,&stack0x00000080,&stack0x0000007c);
  uVar13 = (*(uint *)(iStack0000006c + 0x10) & 0xffff) >> 0xf;
  if ((iVar10 != in_stack_00000078) || (in_stack_00000084 != uVar13)) {
    FUN_4a1652c6(*(undefined4 *)(iStack0000006c + 0xc),*(undefined4 *)(PTR_DAT_4a02f8b0 + 0x30));
    in_stack_00000078 = iVar10;
    in_stack_00000084 = uVar13;
  }
  thunk_FUN_4a0408b0(iStack0000006c);
  if (*(int *)(iStack0000006c + 0x14) == 3) {
    if ((((*(short *)(iStack0000006c + 0x100) == 0) && (*(short *)(iStack0000006c + 0x102) == 0)) &&
        (*(uint *)(in_stack_000000a0 + 0x33c) == (uint)*(ushort *)(iStack0000006c + 0x104))) &&
       (*(uint *)(in_stack_000000a0 + 0x340) == (uint)*(ushort *)(iStack0000006c + 0x106))) {
      FUN_4a1500f8(DAT_4a02f8b4);
    }
    else {
      FUN_4a150140(DAT_4a02f8b4);
      if (*(int *)(*(int *)PTR_DAT_4a02f8a0 + 4) << 0x16 < 0) {
        uVar9 = (uint)*(ushort *)(iStack0000006c + 0x106);
        uVar1 = *(undefined2 *)(iStack0000006c + 0x104);
        uVar13 = (uint)*(ushort *)(iStack0000006c + 0x102);
      }
      else {
        uVar9 = (uint)*(ushort *)(iStack0000006c + 0x106);
        uVar1 = *(undefined2 *)(iStack0000006c + 0x104);
        uVar13 = (*(int *)(in_stack_000000a0 + 0x340) - (uint)*(ushort *)(iStack0000006c + 0x102)) -
                 uVar9;
      }
      thunk_FUN_4a1507ec(*(undefined2 *)(iStack0000006c + 0x100),uVar13,uVar1,uVar9);
    }
    puVar6 = PTR_DAT_4a02f8a4;
    if ((*PTR_DAT_4a02f8a4 == '\0') &&
       ((*(int *)(in_stack_000000a0 + 0x34c) != *(int *)(in_stack_000000a0 + 0x344) ||
        (*(int *)(in_stack_000000a0 + 0x350) != *(int *)(in_stack_000000a0 + 0x348))))) {
      thunk_FUN_4a150d7c(0,0,*(undefined4 *)(in_stack_000000a0 + 0x33c),
                         *(undefined4 *)(in_stack_000000a0 + 0x340));
      uVar3 = 1;
LAB_4a02f604:
      *puVar6 = uVar3;
    }
  }
  else {
    FUN_4a1500f8(DAT_4a02f8b4);
    puVar6 = PTR_DAT_4a02f8a4;
    if (*PTR_DAT_4a02f8a4 != '\0') {
      thunk_FUN_4a0472a0();
      uVar3 = 0;
      goto LAB_4a02f604;
    }
  }
  iVar10 = iStack0000006c;
  if ((*(int *)(iStack0000006c + 0x14) == in_stack_0000009c) &&
     (-1 < *(int *)(iStack0000006c + 0x10))) {
    cVar14 = (undefined4 *)(iStack0000006c + 0x40) == (undefined4 *)0x0;
    thunk_FUN_4a171da0(in_stack_00000090,*(undefined4 *)(iStack0000006c + 0x40));
    if ((cVar14 == '\0') ||
       ((((thunk_FUN_4a171da0(in_stack_00000094,*(undefined4 *)(iVar10 + 0x44)), cVar14 == '\0' ||
          (thunk_FUN_4a171da0(in_stack_00000098,*(undefined4 *)(iVar10 + 0x48)), cVar14 == '\0')) ||
         (*(short *)(iStack0000006c + 0xf8) != in_stack_0000008c)) ||
        (*(ushort *)(iStack0000006c + 0x18) != in_stack_00000088)))) goto LAB_4a02f64a;
  }
  else {
LAB_4a02f64a:
    piVar8 = *(int **)PTR_DAT_4a02f8a0;
    if (*piVar8 << 0x17 < 0) {
      if (*(int *)(iStack0000006c + 0x14) != 3) goto LAB_4a02f848;
      in_stack_00000038 = piVar8[0xb3];
      uVar13 = 3 - *(ushort *)(iStack0000006c + 0x18);
      in_stack_00000034 = piVar8[0xd2] << (uVar13 & 0xff);
      in_stack_000000c4 = thunk_FUN_4a171fac(piVar8[0xd1] << (uVar13 & 0xff));
      uVar7 = thunk_FUN_4a171bb8(0x40000000,in_stack_000000c4);
      iVar10 = DAT_4a02f8b8;
      puVar6 = PTR_DAT_4a02f8a8;
      *(undefined4 *)(PTR_DAT_4a02f8a8 + -0x24) = uVar7;
      *(undefined4 *)(puVar6 + -0x18) = 0;
      *(undefined4 *)(puVar6 + -0xc) = 0;
      *(int *)puVar6 = iVar10;
      *(undefined4 *)(puVar6 + -0x20) = 0;
      in_stack_000000c0 = thunk_FUN_4a171fac(in_stack_00000034);
      uVar7 = thunk_FUN_4a171bb8(0x40000000,iVar10 << 8 ^ in_stack_000000c0);
      *(undefined4 *)(puVar6 + -0x14) = uVar7;
      *(undefined4 *)(puVar6 + -8) = 0;
      *(undefined4 *)(puVar6 + 4) = 0x3f800000;
      *(undefined4 *)(puVar6 + -0x1c) = 0;
      *(undefined4 *)(puVar6 + -0x10) = 0;
      uVar7 = thunk_FUN_4a171fac(in_stack_00000038);
      uVar7 = thunk_FUN_4a171bb8(iVar10 << 7,uVar7);
      puVar2 = in_stack_000000a4;
      *(int *)(puVar6 + 8) = iVar10;
      *(undefined4 *)(puVar6 + -4) = uVar7;
      uVar7 = thunk_FUN_4a17295c(in_stack_000000c4,iVar10 >> 0x1f);
      in_stack_000000bc = uVar7;
      in_stack_00000040 = thunk_FUN_4a17295c(in_stack_000000c0,0xffffffff);
      in_stack_00000044 = 0;
      in_stack_0000003c = uVar7;
      in_stack_000000b8 = in_stack_00000040;
      FUN_4a13f384(&stack0x00000048,PTR_DAT_4a02f8a8 + -0x24,&stack0x0000003c);
      uVar7 = thunk_FUN_4a171a94(*puVar2,in_stack_00000048);
      *puVar2 = uVar7;
      uVar7 = thunk_FUN_4a171a94(puVar2[1],in_stack_0000004c);
      puVar2[1] = uVar7;
      uVar7 = thunk_FUN_4a171a94(puVar2[2],in_stack_00000050);
      puVar2[2] = uVar7;
      uVar7 = thunk_FUN_4a171fac(*(undefined4 *)(*(int *)PTR_DAT_4a02f8a0 + 0x354));
      uVar7 = thunk_FUN_4a17211c(uVar7,DAT_4a02f8bc);
      uVar7 = thunk_FUN_4a17295c(uVar7,0xffffffff);
      in_stack_00000030 = 0;
      in_stack_0000002c = 0;
      in_stack_00000020 = 0;
      in_stack_00000028 = 0;
      in_stack_0000001c = 0;
      in_stack_00000018 = 0;
      in_stack_0000000c = 0;
      in_stack_00000024 = 0x3f800000;
      in_stack_00000004 = thunk_FUN_4a002d64(uVar7);
      in_stack_00000014 = in_stack_00000004;
      in_stack_00000010 = thunk_FUN_4a002f08(uVar7);
      in_stack_00000008 = in_stack_00000010 ^ 0x80000000;
      FUN_4a0d3898(PTR_DAT_4a02f8a8 + -0x24,&stack0x00000004);
      puVar2 = in_stack_000000a4;
      if (*(int *)(*(int *)PTR_DAT_4a02f8a0 + 4) << 0x16 < 0) {
        *(uint *)(PTR_DAT_4a02f8a8 + -0x14) = *(uint *)(PTR_DAT_4a02f8a8 + -0x14) ^ 0x80000000;
      }
      in_stack_00000048 = in_stack_000000bc;
      in_stack_0000004c = in_stack_000000b8;
      in_stack_00000050 = 0;
      FUN_4a13f384(&stack0x0000003c,PTR_DAT_4a02f8a8 + -0x24,&stack0x00000048,&stack0x00000054);
      uVar7 = thunk_FUN_4a1725c0(*puVar2,in_stack_0000003c);
      *puVar2 = uVar7;
      uVar7 = thunk_FUN_4a1725c0(puVar2[1],in_stack_00000040);
      puVar2[1] = uVar7;
      uVar7 = thunk_FUN_4a1725c0(puVar2[2],in_stack_00000044);
      iVar10 = iStack0000006c;
      puVar2[2] = uVar7;
      uVar7 = thunk_FUN_4a171fac((int)*(short *)(iStack0000006c + 0xf8));
      in_stack_0000005c = thunk_FUN_4a171a94(uVar7,*(undefined4 *)(iVar10 + 0x48));
      puVar2 = in_stack_000000a4;
      if (0x80000000 < in_stack_0000005c) {
        in_stack_0000005c = 0;
      }
      in_stack_00000054 = *(undefined4 *)(iVar10 + 0x40);
      in_stack_00000058 = *(undefined4 *)(iVar10 + 0x44);
      FUN_4a13f61c(&stack0x00000060,PTR_DAT_4a02f8a8 + -0x24,&stack0x00000054,&stack0x0000005c);
      uVar7 = thunk_FUN_4a171a94(*puVar2,in_stack_00000060);
      *puVar2 = uVar7;
      uVar7 = thunk_FUN_4a171a94(puVar2[1],in_stack_00000064);
      puVar2[1] = uVar7;
      uVar7 = thunk_FUN_4a171a94(puVar2[2],in_stack_00000068);
      puVar2[2] = uVar7;
    }
    else if (((*(int *)(iStack0000006c + 0x14) == 3) != (in_stack_0000009c == 3)) ||
            (in_stack_0000009c == -1)) {
LAB_4a02f848:
      FUN_4a04fb98(iStack0000006c,0x3f800000);
    }
    in_stack_00000088 = (uint)*(ushort *)(iStack0000006c + 0x18);
    in_stack_0000009c = *(int *)(iStack0000006c + 0x14);
    in_stack_00000090 = *(undefined4 *)(iStack0000006c + 0x40);
    in_stack_00000094 = *(undefined4 *)(iStack0000006c + 0x44);
    in_stack_00000098 = *(undefined4 *)(iStack0000006c + 0x48);
    in_stack_0000008c = (int)*(short *)(iStack0000006c + 0xf8);
  }
  if ((*(int *)(in_stack_00000078 + 0x10) << 0x1d < 0) && (*(int *)(in_stack_000000a0 + 4) << 4 < 0)
     ) {
    thunk_FUN_4a092a24(iStack0000006c);
  }
  iVar10 = iStack0000006c;
  if (**(int **)PTR_DAT_4a02f8a0 << 0x17 < 0) {
    in_stack_00000068 = in_stack_0000007c;
    if ((*(uint *)(iStack0000006c + 300) & 1) == 0) {
      if (((*(uint *)PTR_DAT_4a02fcc4 & 1) == 0) &&
         (iVar11 = FUN_4a1491bc(PTR_DAT_4a02fcc4), iVar11 != 0)) {
        FUN_4a069810(PTR_DAT_4a02fcc8);
      }
      if (*(int *)(iVar10 + 0x14) == 3) {
        uVar7 = *(undefined4 *)(iVar10 + 0x130);
        if ((*(uint *)(iVar10 + 300) & 1) != 0) {
          uVar7 = FUN_4a134f40();
        }
        FUN_4a0697d0(&stack0x00000054,uVar7,0);
      }
      else if (*(int *)(iVar10 + 0x14) == 4) {
        uVar7 = *(undefined4 *)(iVar10 + 0x130);
        if ((*(uint *)(iVar10 + 300) & 1) != 0) {
          uVar7 = FUN_4a134f40();
        }
        FUN_4a0696a4(&stack0x00000054,DAT_4a02fccc,uVar7,0);
      }
      else {
        uVar7 = *(undefined4 *)(iVar10 + 0x130);
        if ((*(uint *)(iVar10 + 300) & 1) != 0) {
          uVar7 = FUN_4a134f40();
        }
        FUN_4a0697f0(&stack0x00000054,uVar7,0);
      }
      thunk_FUN_4a001134(PTR_DAT_4a02fcc8,&stack0x00000054,0x14);
      puVar6 = PTR_DAT_4a02fcc8;
    }
    else {
      puVar6 = *(undefined **)(iStack0000006c + 0x130);
    }
    iVar10 = *(int *)(in_stack_00000068 + 0x150);
    if (iVar10 < *(int *)(*(int *)PTR_DAT_4a02fcd0 + 0x5b8)) {
      if (iVar10 != -1) {
        if (puVar6 == (undefined *)0x0) goto LAB_4a02f9f2;
        FUN_4a150168(iVar10);
        iVar11 = *(int *)(puVar6 + 8);
        if (((iVar11 == 0) || (iVar11 != *(int *)(unaff_r6 + iVar10 * 4))) ||
           (*(short *)(puVar6 + 6) != *(short *)(unaff_r7 + iVar10 * 2))) {
          *(int *)(unaff_r6 + iVar10 * 4) = iVar11;
          *(undefined2 *)(unaff_r7 + iVar10 * 2) = *(undefined2 *)(puVar6 + 6);
          thunk_FUN_4a069560(puVar6,iVar10,0);
        }
      }
    }
    else {
      FUN_4a008004(PTR_s_Exceeded_the_maximum_number_of_v_4a183187_1_4a02fcd4);
      iVar10 = host_s3eDebugIsDebuggerPresent_thumb();
      if (iVar10 != 0) {
        _DAT_fffffff4 = 0;
      }
    }
  }
  else {
    iVar11 = *(int *)(iStack0000006c + 0xac) + 4;
    iVar10 = *(int *)(in_stack_0000007c + 0x150);
    if (iVar11 == 0) {
LAB_4a02f9f2:
      FUN_4a150120(iVar10);
    }
    else {
      FUN_4a150168(iVar10);
      FUN_4a14fd18(DAT_4a02fcbc,0);
      in_stack_00000004 = iVar11;
      FUN_4a150d48(iVar10,3,DAT_4a02fcc0,0);
      *(undefined4 *)(unaff_r6 + iVar10 * 4) = 0;
    }
  }
  iVar10 = iStack0000006c;
  in_stack_00000068 = in_stack_0000007c;
  if (*(int *)(iStack0000006c + 300) << 0x1b < 0) {
    puVar6 = *(undefined **)(iStack0000006c + 0x140);
  }
  else {
    if ((*(uint *)PTR_DAT_4a02fcd8 & 1) == 0) {
      iVar11 = FUN_4a1491bc(PTR_DAT_4a02fcd8);
      if (iVar11 != 0) {
        FUN_4a069810(PTR_DAT_4a02fcdc);
      }
      if (-1 < *(int *)(iVar10 + 300) << 0x1b) goto LAB_4a02fa56;
      puVar5 = *(ushort **)(iVar10 + 0x140);
      if (((puVar5[2] == 0) && (puVar5[3] == 0)) && (*puVar5 == DAT_4a02fce0)) {
        uVar7 = *(undefined4 *)(puVar5 + 6);
      }
      else {
        uVar7 = 0;
      }
    }
    else {
LAB_4a02fa56:
      uVar7 = *(undefined4 *)(iVar10 + 0x140);
    }
    FUN_4a0696a4(&stack0x00000054,DAT_4a02fce0,uVar7,0);
    thunk_FUN_4a001134(PTR_DAT_4a02fcdc,&stack0x00000054,0x14);
    puVar6 = PTR_DAT_4a02fcdc;
  }
  iVar10 = *(int *)(in_stack_00000068 + 0x15c);
  if (iVar10 < *(int *)(*(int *)PTR_DAT_4a02fcd0 + 0x5b8)) {
    if (iVar10 != -1) {
      if (puVar6 == (undefined *)0x0) {
        FUN_4a150120(iVar10);
      }
      else {
        FUN_4a150168(iVar10);
        iVar11 = *(int *)(puVar6 + 8);
        if (((iVar11 == 0) || (iVar11 != *(int *)(unaff_r6 + iVar10 * 4))) ||
           (*(short *)(puVar6 + 6) != *(short *)(unaff_r7 + iVar10 * 2))) {
          *(int *)(unaff_r6 + iVar10 * 4) = iVar11;
          *(undefined2 *)(unaff_r7 + iVar10 * 2) = *(undefined2 *)(puVar6 + 6);
          thunk_FUN_4a069560(puVar6,iVar10,1);
        }
      }
    }
  }
  else {
    FUN_4a008004(PTR_s_Exceeded_the_maximum_number_of_v_4a183187_1_4a02fcd4);
    iVar10 = host_s3eDebugIsDebuggerPresent_thumb();
    if (iVar10 != 0) {
      _DAT_fffffff4 = 0;
    }
  }
  iVar10 = iStack0000006c;
  in_stack_00000068 = in_stack_0000007c;
  if (*(int *)(iStack0000006c + 300) << 0x1e < 0) {
    puVar6 = *(undefined **)(iStack0000006c + 0x134);
  }
  else {
    if (((*(uint *)PTR_DAT_4a02fce4 & 1) == 0) &&
       (iVar11 = FUN_4a1491bc(PTR_DAT_4a02fce4), iVar11 != 0)) {
      FUN_4a069810(PTR_DAT_4a02fce8);
    }
    uVar7 = *(undefined4 *)(iVar10 + 0x134);
    if (*(int *)(iVar10 + 300) << 0x1e < 0) {
      uVar7 = FUN_4a134f40();
    }
    FUN_4a0697f0(&stack0x00000054,uVar7,0);
    thunk_FUN_4a001134(PTR_DAT_4a02fce8,&stack0x00000054,0x14);
    puVar6 = PTR_DAT_4a02fce8;
  }
  iVar10 = *(int *)(in_stack_00000068 + 0x160);
  if (iVar10 < *(int *)(*(int *)PTR_DAT_4a02fcd0 + 0x5b8)) {
    if (iVar10 != -1) {
      if (puVar6 == (undefined *)0x0) {
        FUN_4a150120(iVar10);
      }
      else {
        FUN_4a150168(iVar10);
        iVar11 = *(int *)(puVar6 + 8);
        if (((iVar11 == 0) || (iVar11 != *(int *)(unaff_r6 + iVar10 * 4))) ||
           (*(short *)(puVar6 + 6) != *(short *)(unaff_r7 + iVar10 * 2))) {
          *(int *)(unaff_r6 + iVar10 * 4) = iVar11;
          *(undefined2 *)(unaff_r7 + iVar10 * 2) = *(undefined2 *)(puVar6 + 6);
          thunk_FUN_4a069560(puVar6,iVar10,0);
        }
      }
    }
  }
  else {
    FUN_4a008004(PTR_s_Exceeded_the_maximum_number_of_v_4a183187_1_4a02fcd4);
    iVar10 = host_s3eDebugIsDebuggerPresent_thumb();
    if (iVar10 != 0) {
      _DAT_fffffff4 = 0;
    }
  }
  iVar10 = iStack0000006c;
  in_stack_00000068 = in_stack_0000007c;
  if (*(int *)(iStack0000006c + 300) << 0x1d < 0) {
    puVar6 = *(undefined **)(iStack0000006c + 0x138);
  }
  else {
    if (((*(uint *)PTR_DAT_4a02fcec & 1) == 0) &&
       (iVar11 = FUN_4a1491bc(PTR_DAT_4a02fcec), iVar11 != 0)) {
      FUN_4a069810(PTR_DAT_4a02fcf0);
    }
    uVar7 = *(undefined4 *)(iVar10 + 0x138);
    if (*(int *)(iVar10 + 300) << 0x1d < 0) {
      uVar7 = FUN_4a134f40();
    }
    FUN_4a0697f0(&stack0x00000054,uVar7,0);
    thunk_FUN_4a001134(PTR_DAT_4a02fcf0,&stack0x00000054,0x14);
    puVar6 = PTR_DAT_4a02fcf0;
  }
  iVar10 = *(int *)(in_stack_00000068 + 0x164);
  if (iVar10 < *(int *)(*(int *)PTR_DAT_4a02fcd0 + 0x5b8)) {
    if (iVar10 != -1) {
      if (puVar6 == (undefined *)0x0) {
        FUN_4a150120(iVar10);
      }
      else {
        FUN_4a150168(iVar10);
        iVar11 = *(int *)(puVar6 + 8);
        if (((iVar11 == 0) || (iVar11 != *(int *)(unaff_r6 + iVar10 * 4))) ||
           (*(short *)(puVar6 + 6) != *(short *)(unaff_r7 + iVar10 * 2))) {
          *(int *)(unaff_r6 + iVar10 * 4) = iVar11;
          *(undefined2 *)(unaff_r7 + iVar10 * 2) = *(undefined2 *)(puVar6 + 6);
          thunk_FUN_4a069560(puVar6,iVar10,0);
        }
      }
    }
  }
  else {
    FUN_4a008004(PTR_s_Exceeded_the_maximum_number_of_v_4a183187_1_4a02fcd4);
    iVar10 = host_s3eDebugIsDebuggerPresent_thumb();
    if (iVar10 != 0) {
      _DAT_fffffff4 = 0;
    }
  }
  iVar10 = iStack0000006c;
  in_stack_00000068 = in_stack_0000007c;
  if (*(int *)(iStack0000006c + 300) << 0x1c < 0) {
    puVar6 = *(undefined **)(iStack0000006c + 0x13c);
  }
  else {
    if (((*(uint *)PTR_DAT_4a02fcf4 & 1) == 0) &&
       (iVar11 = FUN_4a1491bc(PTR_DAT_4a02fcf4), iVar11 != 0)) {
      FUN_4a069810(PTR_DAT_4a02fcf8);
    }
    uVar7 = *(undefined4 *)(iVar10 + 0x13c);
    if (*(int *)(iVar10 + 300) << 0x1c < 0) {
      uVar7 = FUN_4a134f40();
    }
    FUN_4a0697f0(&stack0x00000054,uVar7,0);
    thunk_FUN_4a001134(PTR_DAT_4a0300ec,&stack0x00000054,0x14);
    puVar6 = PTR_DAT_4a0300ec;
  }
  iVar10 = *(int *)(in_stack_00000068 + 0x168);
  if (iVar10 < *(int *)(*(int *)PTR_DAT_4a0300f0 + 0x5b8)) {
    if (iVar10 != -1) {
      if (puVar6 == (undefined *)0x0) {
        FUN_4a150120(iVar10);
      }
      else {
        FUN_4a150168(iVar10);
        iVar11 = *(int *)(puVar6 + 8);
        if (((iVar11 == 0) || (iVar11 != *(int *)(unaff_r6 + iVar10 * 4))) ||
           (*(short *)(puVar6 + 6) != *(short *)(unaff_r7 + iVar10 * 2))) {
          *(int *)(unaff_r6 + iVar10 * 4) = iVar11;
          *(undefined2 *)(unaff_r7 + iVar10 * 2) = *(undefined2 *)(puVar6 + 6);
          thunk_FUN_4a069560(puVar6,iVar10,0);
        }
      }
    }
  }
  else {
    FUN_4a008004(PTR_s_Exceeded_the_maximum_number_of_v_4a183187_1_4a0300f4);
    iVar10 = host_s3eDebugIsDebuggerPresent_thumb();
    if (iVar10 != 0) {
      _DAT_fffffff4 = 0;
    }
  }
  uVar13 = 0;
  do {
    iVar10 = iStack0000006c;
    in_stack_00000060 = in_stack_0000007c;
    in_stack_00000064 = uVar13 + 1;
    in_stack_000000b4 = iStack0000006c + 0x100;
    in_stack_000000b0 = 0x40 << (uVar13 & 0xff);
    if ((*(uint *)(iStack0000006c + 300) & in_stack_000000b0) == 0) {
      if (((*(uint *)PTR_DAT_4a0300f8 & 1) == 0) &&
         (iVar11 = FUN_4a1491bc(PTR_DAT_4a0300f8), iVar11 != 0)) {
        FUN_4a069810(PTR_DAT_4a0300fc);
      }
      if ((*(uint *)(in_stack_000000b4 + 0x2c) & in_stack_000000b0) == 0) {
        uVar7 = *(undefined4 *)(uVar13 * 4 + iVar10 + 0x148);
      }
      else {
        puVar5 = *(ushort **)(uVar13 * 4 + iVar10 + 0x148);
        if (((puVar5[2] == 0) && (puVar5[3] == 0)) && (*puVar5 == DAT_4a030100)) {
          uVar7 = *(undefined4 *)(puVar5 + 6);
        }
        else {
          uVar7 = 0;
        }
      }
      FUN_4a0697d0(&stack0x0000004c,uVar7,0);
      thunk_FUN_4a001134(PTR_DAT_4a0300fc,&stack0x0000004c,0x14);
      in_stack_00000068 = PTR_DAT_4a0300fc;
    }
    else {
      in_stack_00000068 = *(undefined **)(uVar13 * 4 + iStack0000006c + 0x148);
    }
    iVar10 = *(int *)(in_stack_00000060 + in_stack_00000064 * 4 + 0x150);
    if (iVar10 < *(int *)(*(int *)PTR_DAT_4a0300f0 + 0x5b8)) {
      if (iVar10 != -1) {
        if (in_stack_00000068 == (undefined *)0x0) {
          FUN_4a150120(iVar10);
        }
        else {
          FUN_4a150168(iVar10);
          iVar11 = *(int *)(in_stack_00000068 + 8);
          if (((iVar11 == 0) || (iVar11 != *(int *)(unaff_r6 + iVar10 * 4))) ||
             (*(short *)(in_stack_00000068 + 6) != *(short *)(unaff_r7 + iVar10 * 2))) {
            *(int *)(unaff_r6 + iVar10 * 4) = iVar11;
            *(undefined2 *)(unaff_r7 + iVar10 * 2) = *(undefined2 *)(in_stack_00000068 + 6);
            thunk_FUN_4a069560(in_stack_00000068,iVar10,0);
          }
        }
      }
    }
    else {
      FUN_4a008004(PTR_s_Exceeded_the_maximum_number_of_v_4a183187_1_4a0300f4);
      iVar10 = host_s3eDebugIsDebuggerPresent_thumb();
      if (iVar10 != 0) {
        _DAT_fffffff4 = 0;
      }
    }
    uVar13 = uVar13 + 1;
  } while (uVar13 < 2);
  iVar10 = *(int *)(in_stack_0000007c + 0x16c);
  iVar11 = *(int *)(iStack0000006c + 0xe4);
  if (iVar10 < *(int *)(*(int *)PTR_DAT_4a0300f0 + 0x5b8)) {
    if (iVar10 != -1) {
      if (iVar11 == 0) {
        FUN_4a150120(iVar10);
      }
      else {
        FUN_4a150168(iVar10);
        iVar4 = *(int *)(iVar11 + 8);
        if (((iVar4 == 0) || (iVar4 != *(int *)(unaff_r6 + iVar10 * 4))) ||
           (*(short *)(iVar11 + 6) != *(short *)(unaff_r7 + iVar10 * 2))) {
          *(int *)(unaff_r6 + iVar10 * 4) = iVar4;
          *(undefined2 *)(unaff_r7 + iVar10 * 2) = *(undefined2 *)(iVar11 + 6);
          thunk_FUN_4a069560(iVar11,iVar10,1);
        }
      }
    }
  }
  else {
    FUN_4a008004(PTR_s_Exceeded_the_maximum_number_of_v_4a183187_1_4a0300f4);
    iVar10 = host_s3eDebugIsDebuggerPresent_thumb();
    if (iVar10 != 0) {
      _DAT_fffffff4 = 0;
    }
  }
  iVar10 = *(int *)(in_stack_0000007c + 0x170);
  iVar11 = *(int *)(iStack0000006c + 0xe8);
  if (iVar10 < *(int *)(*(int *)PTR_DAT_4a0300f0 + 0x5b8)) {
    if (iVar10 != -1) {
      if (iVar11 == 0) {
        FUN_4a150120(iVar10);
      }
      else {
        FUN_4a150168(iVar10);
        iVar4 = *(int *)(iVar11 + 8);
        if (((iVar4 == 0) || (iVar4 != *(int *)(unaff_r6 + iVar10 * 4))) ||
           (*(short *)(iVar11 + 6) != *(short *)(unaff_r7 + iVar10 * 2))) {
          *(int *)(unaff_r6 + iVar10 * 4) = iVar4;
          *(undefined2 *)(unaff_r7 + iVar10 * 2) = *(undefined2 *)(iVar11 + 6);
          thunk_FUN_4a069560(iVar11,iVar10,0);
        }
      }
    }
  }
  else {
    FUN_4a008004(PTR_s_Exceeded_the_maximum_number_of_v_4a183187_1_4a0300f4);
    iVar10 = host_s3eDebugIsDebuggerPresent_thumb();
    if (iVar10 != 0) {
      _DAT_fffffff4 = 0;
    }
  }
  for (uVar13 = *(uint *)(in_stack_0000007c + 0x174);
      uVar13 < *(uint *)(*(int *)PTR_DAT_4a0300f0 + 0x5b8); uVar13 = uVar13 + 1) {
    FUN_4a150120(uVar13);
  }
  FUN_4a053ae0(in_stack_00000080,in_stack_0000007c,iStack0000006c);
  uVar15 = thunk_FUN_4a1652fc();
  iVar10 = (int)uVar15;
  in_stack_000000ac = iVar10 + 0x100;
  if (*(int *)(iVar10 + 300) << 0x1a < 0) {
    puVar6 = *(undefined **)(iVar10 + 0x144);
    goto LAB_4a030064;
  }
  if ((*(uint *)PTR_DAT_4a030104 & 1) == 0) {
    iVar11 = FUN_4a1491bc(PTR_DAT_4a030104,(uint)((ulonglong)uVar15 >> 0x2c));
    if (iVar11 != 0) {
      FUN_4a069810(PTR_DAT_4a030108);
    }
    if (-1 < *(int *)(in_stack_000000ac + 0x2c) << 0x1a) goto LAB_4a030042;
    puVar5 = *(ushort **)(iVar10 + 0x144);
    if (((puVar5[2] == 0) && (puVar5[3] == 0)) && (*puVar5 == DAT_4a03010c)) {
      uVar7 = *(undefined4 *)(puVar5 + 6);
    }
    else {
      uVar7 = 0;
    }
  }
  else {
LAB_4a030042:
    uVar7 = *(undefined4 *)(iVar10 + 0x144);
  }
  FUN_4a0696a4(&stack0x00000058,DAT_4a03010c,uVar7,0);
  thunk_FUN_4a001134(PTR_DAT_4a030108,&stack0x00000058,0x14);
  puVar6 = PTR_DAT_4a030108;
LAB_4a030064:
  thunk_FUN_4a069608(puVar6,5,*(undefined4 *)(iStack0000006c + 0xf0));
  if (((-1 < *(int *)(iStack0000006c + 0xfc)) || (*(short *)(iStack0000006c + 0xf8) != 0)) &&
     (*(int *)(iStack0000006c + 0x14) != 3)) {
    uVar7 = 0x10000;
    uVar12 = 0;
    if (-1 < *(int *)(*(int *)PTR_DAT_4a0300f0 + 0x5bc) << 0x19) {
      uVar7 = 0;
      uVar12 = 0x10000;
    }
    if (*(int *)(*(int *)PTR_DAT_4a0300f0 + 0xc) == 3) {
      uVar7 = thunk_FUN_4a171fac();
      in_stack_000000a8 = thunk_FUN_4a17295c(uVar7,0xfffffff0);
      uVar7 = thunk_FUN_4a171fac(uVar12);
      uVar7 = thunk_FUN_4a17295c(uVar7,0xfffffff0);
      FUN_4a1500c4(uVar7,in_stack_000000a8);
    }
    else {
      FUN_4a1500d8(uVar12,uVar7);
    }
  }
  in_stack_00000070 = *(int *)(in_stack_00000070 + 8);
  if (in_stack_00000070 != in_stack_000000c8) {
    FUN_4a02f4da();
  }
  return;
}



// Address: 4a030110

int FUN_4a030110(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = 0;
  uVar2 = 0;
  uVar3 = 0x40000000;
  uVar4 = 0x8000000;
  do {
    uVar5 = uVar3 + uVar2;
    if (uVar5 == 0) {
      return iVar1;
    }
    uVar2 = uVar2 >> 1;
    if (uVar5 <= param_1) {
      param_1 = param_1 - uVar5;
      iVar1 = iVar1 + uVar4;
      uVar2 = uVar2 | uVar3;
    }
    uVar3 = uVar3 >> 2;
    uVar4 = uVar4 >> 1;
  } while (uVar4 != 0);
  return iVar1;
}



// Address: 4a030118

int FUN_4a030118(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = 0;
  uVar2 = 0;
  uVar3 = 0x40000000;
  uVar4 = 0x8000000;
  do {
    uVar5 = uVar3 + uVar2;
    if (uVar5 == 0) {
      return iVar1;
    }
    uVar2 = uVar2 >> 1;
    if (uVar5 <= param_1) {
      param_1 = param_1 - uVar5;
      iVar1 = iVar1 + uVar4;
      uVar2 = uVar2 | uVar3;
    }
    uVar3 = uVar3 >> 2;
    uVar4 = uVar4 >> 1;
  } while (uVar4 != 0);
  return iVar1;
}



// Address: 4a030140

int FUN_4a030140(void)

{
  return *(int *)(*(int *)PTR_DAT_4a03b0ec + 0x3d4) *
         ((*(int *)(*(int *)PTR_DAT_4a03015c + 0x2c8) +
          (int)*(short *)(*(int *)PTR_DAT_4a03015c + 0x510)) -
         *(int *)(*(int *)PTR_DAT_4a03b0ec + 0x2c8)) >> 0xc;
}



// Address: 4a030160

void FUN_4a030160(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  int local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  puVar1 = PTR_DAT_4a0304b0;
  iVar3 = *(int *)(PTR_DAT_4a0304b0 + 8);
  *(int *)(PTR_DAT_4a0304b0 + 8) = iVar3 + 1;
  if (0 < iVar3) {
    return;
  }
  FUN_4a00e5cc();
  thunk_FUN_4a00dd8c();
  uVar4 = FUN_4a048588();
  *(undefined4 *)(puVar1 + 0x10) = uVar4;
  thunk_FUN_4a161570(0x698);
  thunk_FUN_4a060290();
  thunk_FUN_4a0537f4();
  thunk_FUN_4a036058();
  iVar3 = host_s3eConfigGetInt_thumb(&DAT_4a0304c4,s_NumSlotsFront_4a0304b4,&local_18);
  if (iVar3 != 0) {
    local_18 = 0x20;
  }
  iVar3 = host_s3eConfigGetInt_thumb(&DAT_4a0304c4,s_NumSlotsBack_4a0304c8,&local_1c);
  puVar1 = PTR_DAT_4a0304d8;
  if (iVar3 != 0) {
    local_1c = 4;
  }
  iVar3 = *(int *)PTR_DAT_4a0304d8;
  *(undefined4 *)(iVar3 + 0x3b4) = local_18;
  *(undefined4 *)(iVar3 + 0x3b8) = local_1c;
  local_20 = 1;
  host_s3eConfigGetInt_thumb(&DAT_4a0304c4,s_ScreenOrientAutoHandled_4a0304dc,&local_20);
  *(bool *)(*(int *)puVar1 + 0x5c0) = local_20 != 0;
  local_24 = 0;
  local_28 = 0;
  iVar3 = host_s3eConfigGetInt_thumb(&DAT_4a0304c4,s_PrintStringNumChars_4a0304f4,&local_24);
  if (iVar3 != 0) {
    local_24 = 0x800;
  }
  iVar3 = host_s3eConfigGetInt_thumb(&DAT_4a0304c4,s_PrintStringNumStrings_4a030508,&local_28);
  if (iVar3 != 0) {
    local_28 = 0x80;
  }
  FUN_4a0486d8(local_24,local_28);
  host_s3eConfigGetInt_thumb(&DAT_4a0304c4,s_UseRgbLighting_4a030524,PTR_DAT_4a030520);
  local_2c = 0xffffffff;
  iVar3 = host_s3eConfigGetInt_thumb(&DAT_4a0304c4,s_ColourReductionThreshold_4a030534,&local_2c);
  puVar2 = PTR_DAT_4a030550;
  if (iVar3 == 0) {
    iVar3 = (1 << (local_2c & 0xff)) + -1;
    *(int *)PTR_DAT_4a030550 = iVar3;
    *(int *)(puVar2 + 4) = iVar3 >> 0x1f;
  }
  host_s3eConfigGetInt_thumb(&DAT_4a0304c4,s_ColourReduction_4a030558,PTR_DAT_4a030554);
  host_s3eConfigGetInt_thumb(&DAT_4a0304c4,s_ColourReductionDump_4a03056c,PTR_DAT_4a030568);
  local_30 = 0;
  host_s3eConfigGetInt_thumb(&DAT_4a0304c4,s_DisableSurfaces_4a030580,&local_30);
  if (local_30 != 0) {
    *(uint *)(*(int *)puVar1 + 4) = *(uint *)(*(int *)puVar1 + 4) | 0x400;
  }
  local_34 = 0;
  host_s3eConfigGetInt_thumb(&DAT_4a0304c4,s_ForceFloatTransform_4a030590,&local_34);
  if (local_34 != 0) {
    *(uint *)(*(int *)puVar1 + 4) = *(uint *)(*(int *)puVar1 + 4) | 0x2000;
  }
  iVar3 = *(int *)puVar1;
  iVar5 = iVar3 + DAT_4a0305a4;
  *(int *)(iVar5 + 8) = iVar5;
  *(int *)(iVar5 + 4) = iVar5;
  *(int *)(iVar3 + 0x690) = iVar3 + 0x688;
  *(int *)(iVar3 + 0x68c) = iVar3 + 0x688;
  *(int *)(iVar3 + 0x4f0) = iVar3 + 0x4e8;
  *(int *)(iVar3 + 0x4ec) = iVar3 + 0x4e8;
  *(undefined4 *)(iVar3 + 0x66c) = 0;
  if (*(char *)(iVar3 + 0x5c0) != '\0') {
    host_s3eSurfaceRegister_thumb(1,PTR_LAB_4a03d068_1_4a0305a8,0);
    *PTR_DAT_4a0305ac = 0;
  }
  FUN_4a037934();
  iVar3 = host_s3eDeviceGetInt_thumb(0);
  PTR_DAT_4a0304b0[1] = iVar3 == 3;
  local_38 = 0;
  host_s3eConfigGetInt_thumb(&DAT_4a0304c4,s_DisplayFramerate_4a0305b0,&local_38);
  if (local_38 != 0) {
    **(uint **)puVar1 = **(uint **)puVar1 | 0x1000000;
  }
  local_3c = 0;
  host_s3eConfigGetInt_thumb(&DAT_4a0304c4,s_DisableCustomShaders_4a0305c4,&local_3c);
  if (local_3c != 0) {
    **(uint **)puVar1 = **(uint **)puVar1 | 0x800000;
  }
  local_40 = 7;
  host_s3eConfigGetInt_thumb(&DAT_4a0305e8,s_DispBright_4a0305dc,&local_40);
  if (((0xf < local_40) || (iVar3 = 0, -1 < local_40)) && (iVar3 = 0xf, local_40 < 0x10)) {
    iVar3 = local_40;
  }
  local_40 = iVar3;
  thunk_FUN_4a02b1c0(*(undefined4 *)(PTR_DAT_4a0304b0 + iVar3 * 4 + 0x20));
  local_44 = 0;
  host_s3eConfigGetInt_thumb(&DAT_4a0304c4,s_NoTextureUpload_4a0305ec,&local_44);
  if (local_44 != 0) {
    *PTR_DAT_4a0305fc = 1;
  }
  local_48 = (uint)(byte)*PTR_DAT_4a030600;
  host_s3eConfigGetInt_thumb(&DAT_4a0304c4,s_UploadStreams_4a030604,&local_48);
  *PTR_DAT_4a030600 = local_48 != 0;
  local_4c = (byte)*PTR_DAT_4a030614 ^ 1;
  host_s3eConfigGetInt_thumb(&DAT_4a0304c4,s_FreeStreamData_4a030618,&local_4c);
  *PTR_DAT_4a030614 = local_4c == 0;
  local_50 = 0;
  iVar3 = host_s3eConfigGetInt_thumb(&DAT_4a0304c4,s_NumAnimatingMaterials_4a030628,&local_50);
  if (iVar3 == 0) {
    if (*(int *)(*(int *)puVar1 + DAT_4a0305a4 + 0x28) < local_50) {
      FUN_4a16f710();
    }
    *(uint *)(*(int *)puVar1 + 4) = *(uint *)(*(int *)puVar1 + 4) | 0x100;
  }
  local_54 = 0;
  iVar3 = host_s3eConfigGetInt_thumb(&DAT_4a0304c4,s_DrawPriorityFIFO_4a030640,&local_54);
  if (iVar3 == 0) {
    if (local_54 != 0) {
      **(uint **)puVar1 = **(uint **)puVar1 | 0x2000000;
      goto LAB_4a030406;
    }
  }
  else {
LAB_4a030406:
    if (local_54 != 0) {
      iVar5 = *(int *)puVar1;
      iVar3 = DAT_4a030654;
      goto LAB_4a030418;
    }
  }
  iVar5 = *(int *)puVar1;
  iVar3 = DAT_4a030654 + 2;
LAB_4a030418:
  *(int *)(iVar5 + 0x5c4) = iVar3;
  FUN_4a03e680();
  if (*(int *)(*(int *)puVar1 + 0x368) << 0x1d < 0) {
    local_5c = 0x800;
    host_s3eConfigGetInt_thumb(&DAT_4a0304c4,s_VertCacheSize_4a030658,&local_5c);
    if (*(int *)(*(int *)puVar1 + 0x368) << 0x18 < 0) {
      host_s3eConfigGetInt_thumb(&DAT_4a0304c4,s_VertCacheSizeHW_4a030668,&local_5c);
    }
    thunk_FUN_4a04a350(local_5c);
  }
  local_58 = 0x4000;
  host_s3eConfigGetInt_thumb(&DAT_4a0304c4,s_DataCacheSize_4a030678,&local_58);
  if (*(int *)(*(int *)puVar1 + 0x368) << 0x18 < 0) {
    host_s3eConfigGetInt_thumb(&DAT_4a0304c4,s_DataCacheSizeHW_4a030688,&local_58);
  }
  thunk_FUN_4a047d20(local_58);
  FUN_4a0414e8();
  FUN_4a0a7ab8();
  uVar4 = FUN_4a0537a6();
  FUN_4a03ba98(s_CIwGxShaderTechnique_4a03069c,PTR_FUN_4a053794_1_4a030698,uVar4);
  uVar4 = FUN_4a046d7e();
  FUN_4a03ba98(s_CIwGxCubeMap_4a0306b8,PTR_FUN_4a046d0c_1_4a0306b4,uVar4);
  return;
}



// Address: 4a0306c8

void FUN_4a0306c8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  puVar1 = PTR_DAT_4a030798;
  iVar3 = *(int *)(PTR_DAT_4a030798 + 8);
  *(int *)(PTR_DAT_4a030798 + 8) = iVar3 + -1;
  if (iVar3 + -1 == 0) {
    uVar4 = FUN_4a048588();
    FUN_4a048594(*(undefined4 *)(puVar1 + 0x10));
    FUN_4a048568();
    thunk_FUN_4a055b90();
    puVar2 = PTR_DAT_4a03079c;
    uVar5 = 0;
    do {
      if (*(int *)(puVar2 + uVar5 * 0x3c + 0x38) != 0) {
        FUN_4a1652c4();
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 5);
    FUN_4a161530(*(undefined4 *)(puVar1 + 0x14));
    FUN_4a0a7b50();
    FUN_4a02b1e8(s_CIwGxCubeMap_4a0307a0);
    FUN_4a045708();
    FUN_4a02b1e8(s_CIwGxShaderTechnique_4a0307b0);
    FUN_4a045708();
    puVar2 = PTR_DAT_4a0307c8;
    if (*(char *)(*(int *)PTR_DAT_4a0307c8 + 0x5c0) != '\0') {
      host_s3eSurfaceUnRegister_thumb(1,PTR_LAB_4a03d068_1_4a0307cc);
    }
    if (*(int *)(puVar1 + 4) != 0) {
      FUN_4a1652c4();
    }
    if (**(int **)puVar2 << 0x18 < 0) {
      *(undefined4 *)(puVar1 + 0xc) = 0;
      thunk_FUN_4a03b17c();
    }
    FUN_4a047e60();
    thunk_FUN_4a04d9e4();
    if (*(int *)puVar2 != 0) {
      thunk_FUN_4a0604bc();
      thunk_FUN_4a161530();
    }
    thunk_FUN_4a00121c(PTR_DAT_4a0307d0,0x3c);
    thunk_FUN_4a00121c(PTR_DAT_4a03079c,300);
    FUN_4a048594(uVar4);
    thunk_FUN_4a03603c();
    FUN_4a036830();
  }
  return;
}



// Address: 4a0307d4

void FUN_4a0307d4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(param_2 + 8) = iVar1;
  *(int *)(param_2 + 4) = param_1;
  *(int *)(iVar1 + 4) = param_2;
  *(int *)(param_1 + 8) = param_2;
  return;
}



// Address: 4a0307dc

void FUN_4a0307dc(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(param_2 + 8) = iVar1;
  *(int *)(param_2 + 4) = param_1;
  *(int *)(iVar1 + 4) = param_2;
  *(int *)(param_1 + 8) = param_2;
  return;
}



// Address: 4a0307e8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0307e8(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  code *UNRECOVERED_JUMPTABLE;
  uint local_14;
  uint local_10;
  
  puVar7 = PTR_DAT_4a030a00;
  **(undefined4 **)PTR_DAT_4a030a00 = *(undefined4 *)(param_1 + 4);
  puVar8 = PTR_DAT_4a030a04;
  iVar9 = *(int *)puVar7;
  *(undefined4 *)(iVar9 + 4) = **(undefined4 **)(param_1 + 8);
  iVar10 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(iVar10 + 4);
  *(undefined4 *)(iVar9 + 0xc) = *(undefined4 *)(iVar10 + 8);
  *(undefined4 *)(iVar9 + 0x10) = *(undefined4 *)(iVar10 + 0xc);
  iVar9 = *(int *)puVar7;
  *(undefined2 *)(iVar9 + 0x14) = *(undefined2 *)(*(int *)(param_1 + 8) + 0x10);
  *(int *)puVar8 = iVar9;
  *(undefined4 *)(iVar9 + 0x20) = *(undefined4 *)(param_1 + 4);
  iVar9 = *(int *)puVar7;
  *(undefined4 *)(iVar9 + 0x24) = **(undefined4 **)(param_1 + 0xc);
  iVar10 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(iVar9 + 0x28) = *(undefined4 *)(iVar10 + 4);
  *(undefined4 *)(iVar9 + 0x2c) = *(undefined4 *)(iVar10 + 8);
  *(undefined4 *)(iVar9 + 0x30) = *(undefined4 *)(iVar10 + 0xc);
  iVar9 = *(int *)puVar7;
  *(undefined2 *)(iVar9 + 0x34) = *(undefined2 *)(*(int *)(param_1 + 0xc) + 0x10);
  *(int *)(puVar8 + 4) = iVar9 + 0x20;
  uVar1 = *(ushort *)(*(int *)puVar8 + 0x14);
  local_14 = (uint)uVar1;
  uVar2 = *(ushort *)(iVar9 + 0x34);
  local_10 = (uint)uVar2;
  if ((uVar1 & uVar2 & 0x3f) != 0) {
    return;
  }
  uVar1 = uVar1 | uVar2;
  if ((uVar1 & 0x400) == 0) {
    if ((uVar1 & 0x200) != 0) {
      if (((uVar1 & 0x3f) != 0) && (iVar9 = FUN_4a02cce4(&local_14), iVar9 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x4a0309b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      FUN_4a00bce8((int)*(short *)(*(int *)puVar8 + 4),(int)*(short *)(*(int *)puVar8 + 6),
                   (int)*(short *)(*(int *)(puVar8 + 4) + 4),
                   (int)*(short *)(*(int *)(puVar8 + 4) + 6));
      return;
    }
    if ((uVar1 != 0) && (iVar9 = FUN_4a02d0e0(&local_14), iVar9 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x4a030964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    sVar3 = *(short *)(*(int *)(puVar8 + 4) + 6);
    sVar4 = *(short *)(*(int *)(puVar8 + 4) + 4);
    sVar5 = *(short *)(*(int *)puVar8 + 6);
    sVar6 = *(short *)(*(int *)puVar8 + 4);
  }
  else {
    if (((uVar1 & 0xfbff) != 0) && (iVar9 = FUN_4a03832c(&local_14), iVar9 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x4a0308f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    sVar3 = *(short *)(*(int *)(puVar8 + 4) + 6);
    sVar4 = *(short *)(*(int *)(puVar8 + 4) + 4);
    sVar5 = *(short *)(*(int *)puVar8 + 6);
    sVar6 = *(short *)(*(int *)puVar8 + 4);
  }
  FUN_4a00c8ac((int)sVar6,(int)sVar5,(int)sVar4,(int)sVar3);
  return;
}



// Address: 4a030a08

void FUN_4a030a08(int *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar9 = *(int *)PTR_LAB_4a030ad0;
  iVar13 = *param_1 + -1;
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  iVar14 = param_1[4];
  iVar10 = param_1[5];
  uVar8 = param_1[6];
  uVar2 = param_1[9];
  iVar11 = param_1[7];
  iVar12 = param_1[8];
  puVar5 = (ushort *)param_1[1];
  do {
    uVar3 = uVar6 & uVar8;
    bVar1 = *(byte *)(iVar11 + (uVar8 & uVar7 >> 0xc | uVar3 >> 0x15));
    uVar6 = uVar6 + iVar14;
    if ((bool)((byte)(uVar3 >> 0x14) & 1)) {
      bVar1 = bVar1 >> 4;
    }
    uVar4 = (uint)*(ushort *)(iVar12 + (bVar1 & 0xf) * 2);
    uVar7 = uVar7 + iVar10;
    iVar13 = iVar13 + -1;
    uVar3 = (uVar4 & 0xffff7fff) >> 5;
    *puVar5 = *(ushort *)(iVar9 + (uVar2 & 0x1f) * 0x800 + uVar3 * 2) & 0x1f |
              *(ushort *)(iVar9 + (uVar2 & 0x7c0) * 0x20 + uVar3 * 2) & 0xffe0 |
              *(ushort *)(iVar9 + (((uVar2 & 0xf800) >> 6) + 0x8000) * 2 + (uVar4 & 0x1f) * 2);
    puVar5 = puVar5 + 1;
  } while (-1 < iVar13);
  return;
}



// Address: 4a030ad4

void FUN_4a030ad4(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ushort *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  
  iVar18 = *param_1 + -1;
  uVar10 = param_1[2];
  uVar22 = param_1[3];
  iVar14 = param_1[4];
  iVar8 = *(int *)PTR_LAB_4a030c08;
  iVar11 = param_1[5];
  uVar19 = param_1[6];
  iVar12 = param_1[7];
  iVar15 = param_1[8];
  iVar20 = param_1[10];
  iVar21 = param_1[0xc];
  iVar5 = param_1[0xe];
  uVar13 = (param_1[9] & 0xfff0ffffU) << 0xc;
  uVar16 = (param_1[0xb] & 0xfff0ffffU) << 0xc;
  uVar17 = (param_1[0xd] & 0xfff0ffffU) << 0xc;
  puVar9 = (ushort *)param_1[1];
  do {
    uVar6 = uVar10 & uVar19;
    bVar4 = *(byte *)(iVar12 + (uVar19 & uVar22 >> 0xc | uVar6 >> 0x15));
    uVar10 = uVar10 + iVar14;
    if ((bool)((byte)(uVar6 >> 0x14) & 1)) {
      bVar4 = bVar4 >> 4;
    }
    uVar22 = uVar22 + iVar11;
    uVar7 = (uint)*(ushort *)(iVar15 + (bVar4 & 0xf) * 2);
    uVar6 = uVar13 >> 0x17;
    uVar13 = uVar13 + iVar20;
    uVar1 = uVar16 >> 0x17;
    uVar16 = uVar16 + iVar21;
    uVar2 = uVar17 >> 0x17;
    uVar17 = uVar17 + iVar5;
    uVar3 = (uVar7 & 0xffff7fff) >> 5;
    iVar18 = iVar18 + -1;
    *puVar9 = *(ushort *)(iVar8 + uVar1 * 0x800 + uVar3 * 2) & 0xffe0 |
              *(ushort *)(iVar8 + uVar2 * 0x800 + uVar3 * 2) & 0x1f |
              *(ushort *)(iVar8 + (uVar6 * 0x20 + 0x8000) * 2 + (uVar7 & 0x1f) * 2);
    puVar9 = puVar9 + 1;
  } while (-1 < iVar18);
  return;
}



// Address: 4a030d30

void FUN_4a030d30(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  iVar16 = *param_1 + -1;
  puVar5 = (ushort *)param_1[1];
  uVar7 = param_1[2];
  uVar8 = param_1[3];
  iVar12 = param_1[4];
  iVar13 = param_1[5];
  uVar9 = param_1[6];
  iVar14 = param_1[7];
  iVar15 = param_1[8];
  uVar10 = param_1[9];
  uVar11 = *(uint *)(PTR_LAB_4a031000 + 0x4c);
  if (*(int *)(PTR_LAB_4a031000 + 0x5c) != 0) {
    if ((uVar10 & 0x80000000) != 0) {
      iVar15 = iVar15 + ((uVar10 & 0xf800000) >> 0x12);
      if ((uVar11 & 1 | ((uVar11 ^ (uint)puVar5 >> 1) & 1) << 1) < (uVar10 & 0x7fffff) >> 0x15) {
        iVar15 = iVar15 + 0x20;
      }
      do {
        uVar10 = uVar7 & uVar9;
        bVar1 = *(byte *)(iVar14 + (uVar9 & uVar8 >> 0xc | uVar10 >> 0x15));
        uVar7 = uVar7 + iVar12;
        if ((bool)((byte)(uVar10 >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
        uVar2 = *(ushort *)(iVar15 + (bVar1 & 0xf) * 2);
        iVar16 = iVar16 + -1;
        uVar8 = uVar8 + iVar13;
        *puVar5 = (ushort)(((uVar2 ^ *puVar5) & 0x820 ^ (uint)*puVar5 + (uint)uVar2) >> 1);
        puVar5 = puVar5 + 1;
      } while (-1 < iVar16);
      return;
    }
    iVar3 = param_1[10];
    do {
      uVar11 = uVar7 & uVar9;
      bVar1 = *(byte *)(iVar14 + (uVar9 & uVar8 >> 0xc | uVar11 >> 0x15));
      uVar7 = uVar7 + iVar12;
      if ((bool)((byte)(uVar11 >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      uVar8 = uVar8 + iVar13;
      iVar4 = iVar15 + ((uVar10 & 0xf800000) >> 0x12);
      if ((*(uint *)(PTR_LAB_4a031000 + 0x4c) & 1 |
          ((*(uint *)(PTR_LAB_4a031000 + 0x4c) ^ (uint)puVar5 >> 1) & 1) << 1) <
          (uVar10 & 0x7fffff) >> 0x15) {
        iVar4 = iVar4 + 0x20;
      }
      uVar2 = *(ushort *)(iVar4 + (bVar1 & 0xf) * 2);
      iVar16 = iVar16 + -1;
      *puVar5 = (ushort)(((uVar2 ^ *puVar5) & 0x820 ^ (uint)*puVar5 + (uint)uVar2) >> 1);
      uVar10 = uVar10 + iVar3;
      puVar5 = puVar5 + 1;
    } while (-1 < iVar16);
    return;
  }
  if ((uVar10 & 0x80000000) != 0) {
    iVar15 = iVar15 + ((uVar10 & 0xf800000) >> 0x12);
    if ((uVar11 & 1 | ((uVar11 ^ (uint)puVar5 >> 1) & 1) << 1) < (uVar10 & 0x7fffff) >> 0x15) {
      iVar15 = iVar15 + 0x20;
    }
    do {
      bVar1 = *(byte *)(iVar14 + (uVar9 & uVar8 >> 0xc | (uVar7 & uVar9) >> 0x15));
      if ((bool)((byte)((uVar7 & uVar9) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      while( true ) {
        uVar8 = uVar8 + iVar13;
        uVar7 = uVar7 + iVar12;
        if ((bVar1 & 0xf) == 0) break;
        uVar2 = *(ushort *)(iVar15 + (bVar1 & 0xf) * 2);
        iVar16 = iVar16 + -1;
        puVar6 = puVar5 + 1;
        *puVar5 = (ushort)(((uVar2 ^ *puVar5) & 0x820 ^ (uint)*puVar5 + (uint)uVar2) >> 1);
        if (iVar16 < 0) {
          return;
        }
        bVar1 = *(byte *)(iVar14 + (uVar9 & uVar8 >> 0xc | (uVar7 & uVar9) >> 0x15));
        puVar5 = puVar6;
        if ((bool)((byte)((uVar7 & uVar9) >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
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
    bVar1 = *(byte *)(iVar14 + (uVar9 & uVar8 >> 0xc | (uVar7 & uVar9) >> 0x15));
    if ((bool)((byte)((uVar7 & uVar9) >> 0x14) & 1)) {
      bVar1 = bVar1 >> 4;
    }
    while( true ) {
      uVar8 = uVar8 + iVar13;
      uVar7 = uVar7 + iVar12;
      if ((bVar1 & 0xf) == 0) break;
      iVar4 = iVar15 + ((uVar10 & 0xf800000) >> 0x12);
      if ((*(uint *)(PTR_LAB_4a031000 + 0x4c) & 1 |
          ((*(uint *)(PTR_LAB_4a031000 + 0x4c) ^ (uint)puVar5 >> 1) & 1) << 1) <
          (uVar10 & 0x7fffff) >> 0x15) {
        iVar4 = iVar4 + 0x20;
      }
      uVar2 = *(ushort *)(iVar4 + (bVar1 & 0xf) * 2);
      iVar16 = iVar16 + -1;
      puVar6 = puVar5 + 1;
      *puVar5 = (ushort)(((uVar2 ^ *puVar5) & 0x820 ^ (uint)*puVar5 + (uint)uVar2) >> 1);
      uVar10 = uVar10 + iVar3;
      if (iVar16 < 0) {
        return;
      }
      bVar1 = *(byte *)(iVar14 + (uVar9 & uVar8 >> 0xc | (uVar7 & uVar9) >> 0x15));
      puVar5 = puVar6;
      if ((bool)((byte)((uVar7 & uVar9) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
    }
    iVar16 = iVar16 + -1;
    puVar5 = puVar5 + 1;
    uVar10 = uVar10 + iVar3;
    if (iVar16 < 0) {
      return;
    }
  } while( true );
}



// Address: 4a031004

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a031004(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
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
  iVar6 = *(int *)PTR_LAB_4a031334;
  iVar14 = iVar6 + (((uVar9 & 0xf800) >> 6) + 0x8000) * 2;
  iVar15 = iVar6 + (uVar9 & 0x7c0) * 0x20;
  iVar6 = iVar6 + (uVar9 & 0x1f) * 0x800;
  puVar4 = (ushort *)param_1[1];
  uVar7 = param_1[2];
  uVar8 = param_1[3];
  iVar11 = param_1[4];
  iVar12 = param_1[5];
  uVar9 = uVar9 >> 0x1b;
  uVar10 = param_1[6];
  iVar13 = param_1[7];
  iVar2 = param_1[8];
  if (*(int *)(PTR_LAB_4a031334 + 0x5c) != 0) {
    if (uVar9 == 0) {
      return;
    }
    if (uVar9 != 0x1f) {
      do {
        uVar9 = uVar7 & uVar10;
        bVar1 = *(byte *)(iVar13 + (uVar10 & uVar8 >> 0xc | uVar9 >> 0x15));
        uVar7 = uVar7 + iVar11;
        if ((bool)((byte)(uVar9 >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
        uVar3 = (uint)*(ushort *)(iVar2 + (bVar1 & 0xf) * 2);
        iVar16 = iVar16 + -1;
        uVar8 = uVar8 + iVar12;
        uVar9 = (uVar3 & 0xffff7fff) >> 5;
        uVar9 = *(ushort *)(iVar6 + uVar9 * 2) & 0x1f | *(ushort *)(iVar15 + uVar9 * 2) & 0xffffffe0
                | (uint)*(ushort *)(iVar14 + (uVar3 & 0x1f) * 2);
        *puVar4 = (ushort)(((uVar9 ^ *puVar4) & 0x820 ^ *puVar4 + uVar9) >> 1);
        puVar4 = puVar4 + 1;
      } while (-1 < iVar16);
      return;
    }
    do {
      uVar9 = uVar7 & uVar10;
      bVar1 = *(byte *)(iVar13 + (uVar10 & uVar8 >> 0xc | uVar9 >> 0x15));
      uVar7 = uVar7 + iVar11;
      if ((bool)((byte)(uVar9 >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      uVar3 = (uint)*(ushort *)(iVar2 + (bVar1 & 0xf) * 2);
      iVar16 = iVar16 + -1;
      uVar8 = uVar8 + iVar12;
      uVar9 = (uVar3 & 0xffff7fff) >> 5;
      uVar9 = *(ushort *)(iVar6 + uVar9 * 2) & 0x1f | *(ushort *)(iVar15 + uVar9 * 2) & 0xffffffe0 |
              (uint)*(ushort *)(iVar14 + (uVar3 & 0x1f) * 2);
      *puVar4 = (ushort)(((uVar9 ^ *puVar4) & 0x820 ^ *puVar4 + uVar9) >> 1);
      puVar4 = puVar4 + 1;
    } while (-1 < iVar16);
    return;
  }
  if (uVar9 == 0x1f) {
    do {
      bVar1 = *(byte *)(iVar13 + (uVar10 & uVar8 >> 0xc | (uVar7 & uVar10) >> 0x15));
      if ((bool)((byte)((uVar7 & uVar10) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      while( true ) {
        uVar8 = uVar8 + iVar12;
        uVar7 = uVar7 + iVar11;
        if ((bVar1 & 0xf) == 0) break;
        uVar3 = (uint)*(ushort *)(iVar2 + (bVar1 & 0xf) * 2);
        iVar16 = iVar16 + -1;
        uVar9 = (uVar3 & 0xffff7fff) >> 5;
        uVar9 = *(ushort *)(iVar6 + uVar9 * 2) & 0x1f | *(ushort *)(iVar15 + uVar9 * 2) & 0xffffffe0
                | (uint)*(ushort *)(iVar14 + (uVar3 & 0x1f) * 2);
        puVar5 = puVar4 + 1;
        *puVar4 = (ushort)(((uVar9 ^ *puVar4) & 0x820 ^ *puVar4 + uVar9) >> 1);
        if (iVar16 < 0) {
          return;
        }
        bVar1 = *(byte *)(iVar13 + (uVar10 & uVar8 >> 0xc | (uVar7 & uVar10) >> 0x15));
        puVar4 = puVar5;
        if ((bool)((byte)((uVar7 & uVar10) >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
      }
      iVar16 = iVar16 + -1;
      puVar4 = puVar4 + 1;
      if (iVar16 < 0) {
        return;
      }
    } while( true );
  }
  if (uVar9 != 0) {
    do {
      bVar1 = *(byte *)(iVar13 + (uVar10 & uVar8 >> 0xc | (uVar7 & uVar10) >> 0x15));
      if ((bool)((byte)((uVar7 & uVar10) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      while( true ) {
        uVar8 = uVar8 + iVar12;
        uVar7 = uVar7 + iVar11;
        if ((bVar1 & 0xf) == 0) break;
        uVar3 = (uint)*(ushort *)(iVar2 + (bVar1 & 0xf) * 2);
        iVar16 = iVar16 + -1;
        uVar9 = (uVar3 & 0xffff7fff) >> 5;
        uVar9 = *(ushort *)(iVar6 + uVar9 * 2) & 0x1f | *(ushort *)(iVar15 + uVar9 * 2) & 0xffffffe0
                | (uint)*(ushort *)(iVar14 + (uVar3 & 0x1f) * 2);
        puVar5 = puVar4 + 1;
        *puVar4 = (ushort)(((uVar9 ^ *puVar4) & 0x820 ^ *puVar4 + uVar9) >> 1);
        if (iVar16 < 0) {
          return;
        }
        bVar1 = *(byte *)(iVar13 + (uVar10 & uVar8 >> 0xc | (uVar7 & uVar10) >> 0x15));
        puVar4 = puVar5;
        if ((bool)((byte)((uVar7 & uVar10) >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
      }
      iVar16 = iVar16 + -1;
      puVar4 = puVar4 + 1;
      if (iVar16 < 0) {
        return;
      }
    } while( true );
  }
  return;
}



// Address: 4a031338

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a031338(int *param_1)

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
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  
  iVar17 = *(int *)PTR_LAB_4a031c20;
  iVar22 = *param_1 + -1;
  puVar4 = (ushort *)param_1[1];
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  iVar18 = param_1[4];
  iVar19 = param_1[5];
  uVar8 = param_1[6];
  iVar9 = param_1[7];
  iVar12 = param_1[8];
  uVar10 = param_1[9];
  uVar13 = param_1[0xb];
  uVar15 = param_1[0xd];
  iVar20 = param_1[10];
  iVar23 = param_1[0xc];
  iVar21 = param_1[0xe];
  uVar24 = param_1[0xf];
  iVar2 = param_1[0x10];
  uVar11 = (uVar10 & 0xfff0ffff) << 0xc;
  uVar14 = (uVar13 & 0xfff0ffff) << 0xc;
  uVar16 = (uVar15 & 0xfff0ffff) << 0xc;
  if (*(int *)(PTR_LAB_4a031c20 + 0x5c) != 0) {
    if ((uVar24 & 0xffff) >> 0xb == 0x1f && iVar2 == 0) {
      do {
        uVar10 = uVar16 >> 0x17;
        bVar1 = *(byte *)(iVar9 + (uVar8 & uVar7 >> 0xc | (uVar6 & uVar8) >> 0x15));
        if ((bool)((byte)((uVar6 & uVar8) >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
        uVar3 = (uint)*(ushort *)(iVar12 + (bVar1 & 0xf) * 2);
        uVar13 = uVar11 >> 0x17;
        uVar15 = uVar14 >> 0x17;
        iVar22 = iVar22 + -1;
        uVar11 = uVar11 + iVar20;
        uVar6 = uVar6 + iVar18;
        uVar14 = uVar14 + iVar23;
        uVar7 = uVar7 + iVar19;
        uVar16 = uVar16 + iVar21;
        uVar24 = (uVar3 & 0xffff7fff) >> 5;
        uVar10 = *(ushort *)(iVar17 + uVar15 * 0x800 + uVar24 * 2) & 0xffffffe0 |
                 *(ushort *)(iVar17 + uVar10 * 0x800 + uVar24 * 2) & 0x1f |
                 (uint)*(ushort *)(iVar17 + (uVar13 * 0x20 + 0x8000) * 2 + (uVar3 & 0x1f) * 2);
        *puVar4 = (ushort)(((uVar10 ^ *puVar4) & 0x820 ^ *puVar4 + uVar10) >> 1);
        puVar4 = puVar4 + 1;
      } while (-1 < iVar22);
      return;
    }
    do {
      uVar13 = uVar6 & uVar8;
      uVar10 = uVar16 >> 0x17;
      bVar1 = *(byte *)(iVar9 + (uVar8 & uVar7 >> 0xc | uVar13 >> 0x15));
      uVar6 = uVar6 + iVar18;
      if ((bool)((byte)(uVar13 >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      uVar3 = (uint)*(ushort *)(iVar12 + (bVar1 & 0xf) * 2);
      iVar22 = iVar22 + -1;
      uVar13 = uVar11 >> 0x17;
      uVar15 = uVar14 >> 0x17;
      uVar11 = uVar11 + iVar20;
      uVar7 = uVar7 + iVar19;
      uVar14 = uVar14 + iVar23;
      uVar16 = uVar16 + iVar21;
      uVar24 = (uVar3 & 0xffff7fff) >> 5;
      uVar10 = *(ushort *)(iVar17 + uVar10 * 0x800 + uVar24 * 2) & 0x1f |
               *(ushort *)(iVar17 + uVar15 * 0x800 + uVar24 * 2) & 0xffffffe0 |
               (uint)*(ushort *)(iVar17 + (uVar13 * 0x20 + 0x8000) * 2 + (uVar3 & 0x1f) * 2);
      *puVar4 = (ushort)(((uVar10 ^ *puVar4) & 0x820 ^ *puVar4 + uVar10) >> 1);
      puVar4 = puVar4 + 1;
    } while (-1 < iVar22);
    return;
  }
  if ((uVar24 & 0xffff) >> 0xb == 0x1f) {
    if (iVar2 == 0) {
      do {
        bVar1 = *(byte *)(iVar9 + (uVar8 & uVar7 >> 0xc | (uVar6 & uVar8) >> 0x15));
        if ((bool)((byte)((uVar6 & uVar8) >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
        while( true ) {
          uVar7 = uVar7 + iVar19;
          uVar6 = uVar6 + iVar18;
          if ((bVar1 & 0xf) == 0) break;
          uVar3 = (uint)*(ushort *)(iVar12 + (bVar1 & 0xf) * 2);
          uVar10 = uVar16 >> 0x17;
          uVar13 = uVar11 >> 0x17;
          uVar15 = uVar14 >> 0x17;
          uVar11 = uVar11 + iVar20;
          iVar22 = iVar22 + -1;
          uVar14 = uVar14 + iVar23;
          uVar16 = uVar16 + iVar21;
          uVar24 = (uVar3 & 0xffff7fff) >> 5;
          uVar10 = *(ushort *)(iVar17 + uVar15 * 0x800 + uVar24 * 2) & 0xffffffe0 |
                   *(ushort *)(iVar17 + uVar10 * 0x800 + uVar24 * 2) & 0x1f |
                   (uint)*(ushort *)(iVar17 + (uVar13 * 0x20 + 0x8000) * 2 + (uVar3 & 0x1f) * 2);
          puVar5 = puVar4 + 1;
          *puVar4 = (ushort)(((uVar10 ^ *puVar4) & 0x820 ^ *puVar4 + uVar10) >> 1);
          if (iVar22 < 0) {
            return;
          }
          bVar1 = *(byte *)(iVar9 + (uVar8 & uVar7 >> 0xc | (uVar6 & uVar8) >> 0x15));
          puVar4 = puVar5;
          if ((bool)((byte)((uVar6 & uVar8) >> 0x14) & 1)) {
            bVar1 = bVar1 >> 4;
          }
        }
        iVar22 = iVar22 + -1;
        uVar11 = uVar11 + iVar20;
        puVar4 = puVar4 + 1;
        uVar14 = uVar14 + iVar23;
        uVar16 = uVar16 + iVar21;
        if (iVar22 < 0) {
          return;
        }
      } while( true );
    }
  }
  else if (iVar2 == 0) {
    if ((uVar24 & 0xffff) >> 0xb == 0) {
      return;
    }
    if ((iVar20 != 0 || iVar23 != 0) || iVar21 != 0) {
      do {
        bVar1 = *(byte *)(iVar9 + (uVar8 & uVar7 >> 0xc | (uVar6 & uVar8) >> 0x15));
        if ((bool)((byte)((uVar6 & uVar8) >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
        while( true ) {
          uVar7 = uVar7 + iVar19;
          uVar6 = uVar6 + iVar18;
          if ((bVar1 & 0xf) == 0) break;
          uVar3 = (uint)*(ushort *)(iVar12 + (bVar1 & 0xf) * 2);
          uVar10 = uVar11 >> 0x17;
          uVar13 = uVar14 >> 0x17;
          uVar15 = uVar16 >> 0x17;
          uVar11 = uVar11 + iVar20;
          iVar22 = iVar22 + -1;
          uVar14 = uVar14 + iVar23;
          uVar16 = uVar16 + iVar21;
          uVar24 = (uVar3 & 0xffff7fff) >> 5;
          uVar10 = *(ushort *)(iVar17 + uVar13 * 0x800 + uVar24 * 2) & 0xffffffe0 |
                   *(ushort *)(iVar17 + uVar15 * 0x800 + uVar24 * 2) & 0x1f |
                   (uint)*(ushort *)(iVar17 + (uVar10 * 0x20 + 0x8000) * 2 + (uVar3 & 0x1f) * 2);
          puVar5 = puVar4 + 1;
          *puVar4 = (ushort)(((uVar10 ^ *puVar4) & 0x820 ^ *puVar4 + uVar10) >> 1);
          if (iVar22 < 0) {
            return;
          }
          bVar1 = *(byte *)(iVar9 + (uVar8 & uVar7 >> 0xc | (uVar6 & uVar8) >> 0x15));
          puVar4 = puVar5;
          if ((bool)((byte)((uVar6 & uVar8) >> 0x14) & 1)) {
            bVar1 = bVar1 >> 4;
          }
        }
        iVar22 = iVar22 + -1;
        uVar11 = uVar11 + iVar20;
        puVar4 = puVar4 + 1;
        uVar14 = uVar14 + iVar23;
        uVar16 = uVar16 + iVar21;
        if (iVar22 < 0) {
          return;
        }
      } while( true );
    }
    do {
      bVar1 = *(byte *)(iVar9 + (uVar8 & uVar7 >> 0xc | (uVar6 & uVar8) >> 0x15));
      if ((bool)((byte)((uVar6 & uVar8) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      while( true ) {
        uVar7 = uVar7 + iVar19;
        uVar6 = uVar6 + iVar18;
        if ((bVar1 & 0xf) == 0) break;
        uVar14 = (uint)*(ushort *)(iVar12 + (bVar1 & 0xf) * 2);
        iVar22 = iVar22 + -1;
        uVar11 = (uVar14 & 0xffff7fff) >> 5;
        uVar11 = *(ushort *)(iVar17 + (uVar13 & 0xf800) + uVar11 * 2) & 0xffffffe0 |
                 *(ushort *)(iVar17 + (uVar15 & 0xf800) + uVar11 * 2) & 0x1f |
                 (uint)*(ushort *)
                        (iVar17 + (((uVar10 & 0xffff) >> 0xb) * 0x20 + 0x8000) * 2 +
                        (uVar14 & 0x1f) * 2);
        puVar5 = puVar4 + 1;
        *puVar4 = (ushort)(((uVar11 ^ *puVar4) & 0x820 ^ *puVar4 + uVar11) >> 1);
        if (iVar22 < 0) {
          return;
        }
        bVar1 = *(byte *)(iVar9 + (uVar8 & uVar7 >> 0xc | (uVar6 & uVar8) >> 0x15));
        puVar4 = puVar5;
        if ((bool)((byte)((uVar6 & uVar8) >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
      }
      iVar22 = iVar22 + -1;
      puVar4 = puVar4 + 1;
      if (iVar22 < 0) {
        return;
      }
    } while( true );
  }
  if ((iVar20 != 0 || iVar23 != 0) || iVar21 != 0) {
    do {
      bVar1 = *(byte *)(iVar9 + (uVar8 & uVar7 >> 0xc | (uVar6 & uVar8) >> 0x15));
      if ((bool)((byte)((uVar6 & uVar8) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      while( true ) {
        uVar7 = uVar7 + iVar19;
        uVar6 = uVar6 + iVar18;
        if ((bVar1 & 0xf) == 0) break;
        uVar3 = (uint)*(ushort *)(iVar12 + (bVar1 & 0xf) * 2);
        uVar10 = uVar11 >> 0x17;
        uVar13 = uVar14 >> 0x17;
        uVar15 = uVar16 >> 0x17;
        uVar11 = uVar11 + iVar20;
        iVar22 = iVar22 + -1;
        uVar14 = uVar14 + iVar23;
        uVar16 = uVar16 + iVar21;
        uVar24 = (uVar3 & 0xffff7fff) >> 5;
        uVar10 = *(ushort *)(iVar17 + uVar13 * 0x800 + uVar24 * 2) & 0xffffffe0 |
                 *(ushort *)(iVar17 + uVar15 * 0x800 + uVar24 * 2) & 0x1f |
                 (uint)*(ushort *)(iVar17 + (uVar10 * 0x20 + 0x8000) * 2 + (uVar3 & 0x1f) * 2);
        puVar5 = puVar4 + 1;
        *puVar4 = (ushort)(((uVar10 ^ *puVar4) & 0x820 ^ *puVar4 + uVar10) >> 1);
        if (iVar22 < 0) {
          return;
        }
        bVar1 = *(byte *)(iVar9 + (uVar8 & uVar7 >> 0xc | (uVar6 & uVar8) >> 0x15));
        puVar4 = puVar5;
        if ((bool)((byte)((uVar6 & uVar8) >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
      }
      iVar22 = iVar22 + -1;
      uVar11 = uVar11 + iVar20;
      puVar4 = puVar4 + 1;
      uVar14 = uVar14 + iVar23;
      uVar16 = uVar16 + iVar21;
      if (iVar22 < 0) {
        return;
      }
    } while( true );
  }
  do {
    bVar1 = *(byte *)(iVar9 + (uVar8 & uVar7 >> 0xc | (uVar6 & uVar8) >> 0x15));
    if ((bool)((byte)((uVar6 & uVar8) >> 0x14) & 1)) {
      bVar1 = bVar1 >> 4;
    }
    while( true ) {
      uVar7 = uVar7 + iVar19;
      uVar6 = uVar6 + iVar18;
      if ((bVar1 & 0xf) == 0) break;
      uVar14 = (uint)*(ushort *)(iVar12 + (bVar1 & 0xf) * 2);
      iVar22 = iVar22 + -1;
      uVar11 = (uVar14 & 0xffff7fff) >> 5;
      uVar11 = *(ushort *)(iVar17 + (uVar13 & 0xf800) + uVar11 * 2) & 0xffffffe0 |
               *(ushort *)(iVar17 + (uVar15 & 0xf800) + uVar11 * 2) & 0x1f |
               (uint)*(ushort *)
                      (iVar17 + (((uVar10 & 0xffff) >> 0xb) * 0x20 + 0x8000) * 2 +
                      (uVar14 & 0x1f) * 2);
      puVar5 = puVar4 + 1;
      *puVar4 = (ushort)(((uVar11 ^ *puVar4) & 0x820 ^ *puVar4 + uVar11) >> 1);
      if (iVar22 < 0) {
        return;
      }
      bVar1 = *(byte *)(iVar9 + (uVar8 & uVar7 >> 0xc | (uVar6 & uVar8) >> 0x15));
      puVar4 = puVar5;
      if ((bool)((byte)((uVar6 & uVar8) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
    }
    iVar22 = iVar22 + -1;
    puVar4 = puVar4 + 1;
    if (iVar22 < 0) {
      return;
    }
  } while( true );
}



// Address: 4a031c24

void FUN_4a031c24(int *param_1)

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
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  
  uVar5 = DAT_4a031fd4;
  iVar10 = *param_1 + -1;
  puVar7 = (uint *)param_1[1];
  uVar9 = param_1[2];
  uVar13 = param_1[3];
  iVar18 = param_1[7];
  iVar12 = param_1[4];
  iVar17 = param_1[5];
  uVar20 = param_1[6];
  iVar6 = param_1[8] + ((param_1[9] & 0xf800000U) >> 0x12);
  if (iVar17 != 0) {
    iVar11 = iVar10;
    if (((uint)puVar7 & 3) == 0) goto LAB_4a031f1c;
    do {
      do {
        bVar1 = *(byte *)(iVar18 + (uVar20 & uVar13 >> 0xc | (uVar9 & uVar20) >> 0x15));
        if ((bool)((byte)((uVar9 & uVar20) >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
        uVar14 = (uint)*(ushort *)(iVar6 + (bVar1 & 0xf) * 2);
        iVar11 = iVar10 + -1;
        uVar15 = (ushort)*puVar7 + uVar14;
        uVar16 = (uVar14 ^ uVar15 ^ (uint)(ushort)*puVar7) & 0x10820;
        uVar14 = uVar16 >> 5;
        uVar4 = (ushort)uVar16;
        uVar3 = uVar4 - ((short)uVar14 - (short)((uVar14 & 0x40) >> 1));
        uVar9 = uVar9 + iVar12;
        uVar13 = uVar13 + iVar17;
        *(ushort *)puVar7 = ((ushort)uVar15 | uVar3) - (uVar4 & ~uVar3);
        puVar7 = (uint *)((int)puVar7 + 2);
        if (iVar11 < 0) {
          return;
        }
LAB_4a031f1c:
        iVar10 = 0;
        puVar8 = puVar7;
      } while (iVar11 == 0);
      do {
        bVar1 = *(byte *)(iVar18 + (uVar20 & uVar13 >> 0xc | (uVar9 & uVar20) >> 0x15));
        if ((bool)((byte)((uVar9 & uVar20) >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
        uVar14 = uVar9 + iVar12 & uVar20;
        bVar2 = *(byte *)(iVar18 + (uVar20 & uVar13 + iVar17 >> 0xc | uVar14 >> 0x15));
        uVar15 = *puVar8;
        iVar11 = iVar11 + -2;
        if ((bool)((byte)(uVar14 >> 0x14) & 1)) {
          bVar2 = bVar2 >> 4;
        }
        uVar9 = uVar9 + iVar12 + iVar12;
        uVar13 = uVar13 + iVar17 + iVar17;
        uVar14 = CONCAT22(*(undefined2 *)(iVar6 + (bVar2 & 0xf) * 2),
                          *(undefined2 *)(iVar6 + (bVar1 & 0xf) * 2));
        uVar16 = (uVar14 ^ uVar15 ^ uVar14 + uVar15) & uVar5;
        uVar19 = (uVar16 >> 5) - (((uVar5 ^ uVar5 >> 5) & uVar16 >> 5) >> 1);
        if (CARRY4(uVar14,uVar15)) {
          uVar19 = uVar19 | 0x8000000;
        }
        *puVar8 = uVar16;
        puVar7 = puVar8 + 1;
        *puVar8 = (uVar14 + uVar15 | uVar16 - uVar19) - (uVar16 & ~(uVar16 - uVar19));
        puVar8 = puVar7;
      } while (0 < iVar11);
      iVar10 = 0;
    } while (iVar11 == 0);
    return;
  }
  iVar18 = (uVar20 & uVar13 >> 0xc) + iVar18;
  if ((~param_1[9] & 0xf800000U) != 0) {
    iVar17 = iVar10;
    if (((uint)puVar7 & 3) == 0) goto LAB_4a031ce4;
    do {
      do {
        bVar1 = *(byte *)(iVar18 + ((uVar9 & uVar20) >> 0x15));
        if ((uVar9 & 0x100000) != 0) {
          bVar1 = bVar1 >> 4;
        }
        uVar13 = (uint)*(ushort *)(iVar6 + (bVar1 & 0xf) * 2);
        uVar15 = (ushort)*puVar7 + uVar13;
        uVar14 = (uVar13 ^ uVar15 ^ (uint)(ushort)*puVar7) & 0x10820;
        uVar13 = uVar14 >> 5;
        uVar4 = (ushort)uVar14;
        uVar3 = uVar4 - ((short)uVar13 - (short)((uVar13 & 0x40) >> 1));
        iVar17 = iVar10 + -1;
        uVar9 = uVar9 + iVar12;
        *(ushort *)puVar7 = ((ushort)uVar15 | uVar3) - (uVar4 & ~uVar3);
        puVar7 = (uint *)((int)puVar7 + 2);
        if (iVar17 < 0) {
          return;
        }
LAB_4a031ce4:
        iVar10 = 0;
        puVar8 = puVar7;
      } while (iVar17 == 0);
      do {
        bVar1 = *(byte *)(iVar18 + ((uVar9 & uVar20) >> 0x15));
        uVar13 = uVar9 + iVar12;
        if ((uVar9 & 0x100000) != 0) {
          bVar1 = bVar1 >> 4;
        }
        bVar2 = *(byte *)(iVar18 + ((uVar13 & uVar20) >> 0x15));
        iVar17 = iVar17 + -2;
        if ((uVar13 & 0x100000) != 0) {
          bVar2 = bVar2 >> 4;
        }
        uVar9 = uVar13 + iVar12;
        uVar13 = CONCAT22(*(undefined2 *)(iVar6 + (bVar2 & 0xf) * 2),
                          *(undefined2 *)(iVar6 + (bVar1 & 0xf) * 2));
        uVar15 = *puVar8;
        uVar16 = (uVar13 ^ uVar15 ^ uVar13 + uVar15) & uVar5;
        uVar14 = (uVar16 >> 5) - (((uVar5 ^ uVar5 >> 5) & uVar16 >> 5) >> 1);
        if (CARRY4(uVar13,uVar15)) {
          uVar14 = uVar14 | 0x8000000;
        }
        *puVar8 = uVar16;
        puVar7 = puVar8 + 1;
        *puVar8 = (uVar16 - uVar14 | uVar13 + uVar15) - (uVar16 & ~(uVar16 - uVar14));
        puVar8 = puVar7;
      } while (0 < iVar17);
      iVar10 = 0;
    } while (iVar17 == 0);
    return;
  }
  iVar17 = iVar10;
  if (((uint)puVar7 & 3) == 0) goto LAB_4a031dfc;
  do {
    do {
      bVar1 = *(byte *)(iVar18 + ((uVar9 & uVar20) >> 0x15));
      if ((uVar9 & 0x100000) != 0) {
        bVar1 = bVar1 >> 4;
      }
      uVar13 = (uint)*(ushort *)(iVar6 + (bVar1 & 0xf) * 2);
      uVar15 = (ushort)*puVar7 + uVar13;
      uVar14 = (uVar13 ^ uVar15 ^ (uint)(ushort)*puVar7) & 0x10820;
      uVar13 = uVar14 >> 5;
      uVar4 = (ushort)uVar14;
      uVar3 = uVar4 - ((short)uVar13 - (short)((uVar13 & 0x40) >> 1));
      iVar17 = iVar10 + -1;
      uVar9 = uVar9 + iVar12;
      *(ushort *)puVar7 = ((ushort)uVar15 | uVar3) - (uVar4 & ~uVar3);
      puVar7 = (uint *)((int)puVar7 + 2);
      if (iVar17 < 0) {
        return;
      }
LAB_4a031dfc:
      iVar10 = 0;
      puVar8 = puVar7;
    } while (iVar17 == 0);
    do {
      bVar1 = *(byte *)(iVar18 + ((uVar9 & uVar20) >> 0x15));
      uVar13 = uVar9 + iVar12;
      if ((uVar9 & 0x100000) != 0) {
        bVar1 = bVar1 >> 4;
      }
      bVar2 = *(byte *)(iVar18 + ((uVar13 & uVar20) >> 0x15));
      iVar17 = iVar17 + -2;
      if ((uVar13 & 0x100000) != 0) {
        bVar2 = bVar2 >> 4;
      }
      uVar9 = uVar13 + iVar12;
      uVar13 = CONCAT22(*(undefined2 *)(iVar6 + (bVar2 & 0xf) * 2),
                        *(undefined2 *)(iVar6 + (bVar1 & 0xf) * 2));
      uVar15 = *puVar8;
      uVar16 = (uVar13 ^ uVar15 ^ uVar13 + uVar15) & uVar5;
      uVar14 = (uVar16 >> 5) - (((uVar5 ^ uVar5 >> 5) & uVar16 >> 5) >> 1);
      if (CARRY4(uVar13,uVar15)) {
        uVar14 = uVar14 | 0x8000000;
      }
      *puVar8 = uVar16;
      puVar7 = puVar8 + 1;
      *puVar8 = (uVar16 - uVar14 | uVar13 + uVar15) - (uVar16 & ~(uVar16 - uVar14));
      puVar8 = puVar7;
    } while (0 < iVar17);
    iVar10 = 0;
  } while (iVar17 == 0);
  return;
}



// Address: 4a031fd8

void FUN_4a031fd8(int *param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  
  iVar8 = *param_1;
  iVar10 = iVar8 + -1;
  uVar9 = param_1[6];
  iVar12 = param_1[7];
  iVar13 = param_1[8];
  uVar16 = param_1[9];
  puVar6 = (uint *)param_1[1];
  uVar20 = param_1[2];
  uVar11 = param_1[3];
  iVar14 = param_1[4];
  iVar15 = param_1[5];
  iVar5 = param_1[10];
  puVar7 = puVar6;
  if ((*(uint *)(PTR_LAB_4a032370 + 0x4c) & 1) == 0) {
    uVar17 = DAT_4a032374;
    if (((uint)puVar6 & 3) != 0) {
      bVar1 = *(byte *)(iVar12 + (uVar9 & uVar11 >> 0xc | (uVar20 & uVar9) >> 0x15));
      if ((bool)((byte)((uVar20 & uVar9) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      uVar17 = (uint)bVar1 * 0x10000000 + (uVar16 >> 0x17);
      if ((~uVar16 & 0x600000) == 0) {
        uVar17 = uVar17 + 1;
      }
      uVar17 = (uint)*(ushort *)(iVar13 + (uVar17 >> 0x1b | uVar17 << 5));
      iVar10 = iVar8 + -2;
      uVar20 = uVar20 + iVar14;
      uVar21 = (ushort)*puVar6 + uVar17;
      uVar18 = (uVar17 ^ uVar21 ^ (uint)(ushort)*puVar6) & 0x10820;
      uVar17 = uVar18 >> 5;
      uVar4 = (ushort)uVar18;
      uVar3 = uVar4 - ((short)uVar17 - (short)((uVar17 & 0x40) >> 1));
      uVar11 = uVar11 + iVar15;
      uVar16 = uVar16 + iVar5;
      puVar7 = (uint *)((int)puVar6 + 2);
      *(ushort *)puVar6 = ((ushort)uVar21 | uVar3) - (uVar4 & ~uVar3);
      uVar17 = DAT_4a032374;
      if (iVar10 < 0) {
        return;
      }
    }
    while (DAT_4a032374 = uVar17, 0 < iVar10) {
      bVar1 = *(byte *)(iVar12 + (uVar9 & uVar11 >> 0xc | (uVar20 & uVar9) >> 0x15));
      if ((bool)((byte)((uVar20 & uVar9) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      uVar18 = (uint)bVar1 * 0x10000000 + (uVar16 >> 0x17);
      if ((uVar16 & 0x600000) != 0) {
        uVar18 = uVar18 + 1;
      }
      uVar21 = uVar20 + iVar14 & uVar9;
      bVar1 = *(byte *)(iVar12 + (uVar9 & uVar11 + iVar15 >> 0xc | uVar21 >> 0x15));
      uVar16 = uVar16 + iVar5;
      if ((bool)((byte)(uVar21 >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      uVar21 = (uint)bVar1 * 0x10000000 + (uVar16 >> 0x17);
      if ((~uVar16 & 0x600000) == 0) {
        uVar21 = uVar21 + 1;
      }
      iVar10 = iVar10 + -2;
      uVar20 = uVar20 + iVar14 + iVar14;
      uVar18 = CONCAT22(*(undefined2 *)(iVar13 + (uVar21 >> 0x1b | uVar21 << 5)),
                        *(undefined2 *)(iVar13 + (uVar18 >> 0x1b | uVar18 << 5)));
      uVar21 = *puVar7;
      uVar11 = uVar11 + iVar15 + iVar15;
      uVar19 = uVar17 & (uVar18 ^ uVar21 ^ uVar18 + uVar21);
      *puVar7 = uVar19;
      uVar17 = (uVar19 >> 5) - (((uVar17 ^ uVar17 >> 5) & uVar19 >> 5) >> 1);
      if (CARRY4(uVar18,uVar21)) {
        uVar17 = uVar17 | 0x8000000;
      }
      uVar16 = uVar16 + iVar5;
      *puVar7 = (uVar19 - uVar17 | uVar18 + uVar21) - (uVar19 & ~(uVar19 - uVar17));
      puVar7 = puVar7 + 1;
      uVar17 = DAT_4a032374;
    }
    if (iVar10 < 0) {
      return;
    }
    bVar1 = *(byte *)(iVar12 + (uVar9 & uVar11 >> 0xc | (uVar9 & uVar20) >> 0x15));
    if ((bool)((byte)((uVar9 & uVar20) >> 0x14) & 1)) {
      bVar1 = bVar1 >> 4;
    }
    uVar11 = (uint)bVar1 * 0x10000000 + (uVar16 >> 0x17);
    if ((uVar16 & 0x600000) != 0) {
      uVar11 = uVar11 + 1;
    }
  }
  else {
    uVar17 = DAT_4a032374;
    if (((uint)puVar6 & 3) != 0) {
      uVar17 = uVar20 & uVar9;
      bVar1 = *(byte *)(iVar12 + (uVar9 & uVar11 >> 0xc | uVar17 >> 0x15));
      uVar20 = uVar20 + iVar14;
      if ((bool)((byte)(uVar17 >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      uVar17 = ((uint)bVar1 << 0x1c | uVar16 >> 0x17) + (uint)((byte)(uVar16 >> 0x16) & 1);
      uVar17 = (uint)*(ushort *)(iVar13 + (uVar17 >> 0x1b | uVar17 * 0x20));
      iVar10 = iVar8 + -2;
      uVar11 = uVar11 + iVar15;
      uVar21 = (ushort)*puVar6 + uVar17;
      uVar18 = (uVar17 ^ uVar21 ^ (uint)(ushort)*puVar6) & 0x10820;
      uVar17 = uVar18 >> 5;
      uVar4 = (ushort)uVar18;
      uVar3 = uVar4 - ((short)uVar17 - (short)((uVar17 & 0x40) >> 1));
      uVar16 = uVar16 + iVar5;
      puVar7 = (uint *)((int)puVar6 + 2);
      *(ushort *)puVar6 = ((ushort)uVar21 | uVar3) - (uVar4 & ~uVar3);
      uVar17 = DAT_4a032374;
      if (iVar10 < 0) {
        return;
      }
    }
    while (DAT_4a032374 = uVar17, 0 < iVar10) {
      bVar1 = *(byte *)(iVar12 + (uVar9 & uVar11 >> 0xc | (uVar20 & uVar9) >> 0x15));
      if ((bool)((byte)((uVar20 & uVar9) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      uVar18 = uVar16 >> 0x17;
      uVar16 = uVar16 + iVar5;
      uVar21 = uVar20 + iVar14 & uVar9;
      bVar2 = *(byte *)(iVar12 + (uVar9 & uVar11 + iVar15 >> 0xc | uVar21 >> 0x15));
      iVar10 = iVar10 + -2;
      uVar20 = uVar20 + iVar14 + iVar14;
      if ((bool)((byte)(uVar21 >> 0x14) & 1)) {
        bVar2 = bVar2 >> 4;
      }
      uVar21 = ((uint)bVar2 << 0x1c | uVar16 >> 0x17) + (uint)((byte)(uVar16 >> 0x16) & 1);
      uVar16 = uVar16 + iVar5;
      uVar11 = uVar11 + iVar15 + iVar15;
      uVar18 = CONCAT22(*(undefined2 *)(iVar13 + (uVar21 >> 0x1b | uVar21 * 0x20)),
                        *(undefined2 *)
                         (iVar13 + ((uint)bVar1 * 0x10000000 + uVar18 >> 0x1b | uVar18 << 5)));
      uVar21 = *puVar7;
      uVar19 = uVar17 & (uVar18 ^ uVar21 ^ uVar18 + uVar21);
      *puVar7 = uVar19;
      uVar17 = (uVar19 >> 5) - (((uVar17 ^ uVar17 >> 5) & uVar19 >> 5) >> 1);
      if (CARRY4(uVar18,uVar21)) {
        uVar17 = uVar17 | 0x8000000;
      }
      *puVar7 = (uVar19 - uVar17 | uVar18 + uVar21) - (uVar19 & ~(uVar19 - uVar17));
      puVar7 = puVar7 + 1;
      uVar17 = DAT_4a032374;
    }
    if (iVar10 < 0) {
      return;
    }
    bVar1 = *(byte *)(iVar12 + (uVar9 & uVar11 >> 0xc | (uVar9 & uVar20) >> 0x15));
    if ((bool)((byte)((uVar9 & uVar20) >> 0x14) & 1)) {
      bVar1 = bVar1 >> 4;
    }
    uVar11 = (uint)bVar1 * 0x10000000 + (uVar16 >> 0x17);
  }
  uVar11 = (uint)*(ushort *)(iVar13 + (uVar11 >> 0x1b | uVar11 << 5));
  uVar20 = (ushort)*puVar7 + uVar11;
  uVar16 = (uVar11 ^ uVar20 ^ (uint)(ushort)*puVar7) & 0x10820;
  uVar11 = uVar16 >> 5;
  uVar4 = (ushort)uVar16;
  uVar3 = uVar4 - ((short)uVar11 - (short)((uVar11 & 0x40) >> 1));
  *(ushort *)puVar7 = ((ushort)uVar20 | uVar3) - (uVar4 & ~uVar3);
  return;
}



// Address: 4a032378

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a032378(int *param_1)

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
  
  iVar10 = *(int *)PTR_LAB_4a0325c4;
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
  if (((uint)puVar7 & 3) == 0) goto LAB_4a032488;
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
LAB_4a032488:
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
      uVar5 = (uVar4 ^ uVar11 ^ uVar4 + uVar11) & DAT_4a0325c8;
      uVar15 = (uVar5 >> 5) - (((DAT_4a0325c8 ^ DAT_4a0325c8 >> 5) & uVar5 >> 5) >> 1);
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



// Address: 4a0325cc

void FUN_4a0325cc(int *param_1)

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
  
  iVar10 = *(int *)PTR_LAB_4a032738;
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



// Address: 4a03273c

void FUN_4a03273c(int *param_1)

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
  
  uVar5 = DAT_4a032af8;
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
    if (((uint)puVar7 & 3) == 0) goto LAB_4a032a40;
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
LAB_4a032a40:
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
    if (((uint)puVar7 & 3) == 0) goto LAB_4a032800;
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
LAB_4a032800:
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
  if (((uint)puVar7 & 3) == 0) goto LAB_4a03291c;
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
LAB_4a03291c:
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



// Address: 4a032afc

undefined4 FUN_4a032afc(void)

{
  FUN_4a00dcf8(1,0);
  host_s3eSurfaceShow_thumb();
  host_s3eTimerSetTimer_thumb(500,PTR_FUN_4a032afc_1_4a032b20,0);
  return 0;
}



// Address: 4a032b24

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a032b24(int param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xa4) == 0) {
    return;
  }
  uVar3 = *(uint *)(param_2 + 0x20);
  uVar6 = uVar3 & 0xff;
  uVar8 = uVar3 >> 8 & 0xff;
  bVar13 = uVar6 != uVar8;
  if (!bVar13) {
    uVar8 = uVar3 >> 0x10 & 0xff;
  }
  if (bVar13 || uVar6 != uVar8) {
    uVar5 = 0;
    if ((*(int *)(param_1 + 0xa8) != 0) &&
       (uVar5 = *(uint *)(*(int *)(param_1 + 0xa8) + 0x7c), uVar5 == uVar3)) {
      return;
    }
    iVar4 = thunk_FUN_4a161570(0x80,uVar5,uVar6,uVar8);
    iVar7 = 0x1000;
    uVar8 = 0x1f;
    do {
      iVar1 = uVar8 * 4;
      uVar8 = uVar8 - 1;
      iVar9 = (int)(iVar7 * (uint)*(byte *)(param_2 + 0x20)) >> 0xc;
      if (0xff < iVar9) {
        iVar9 = 0xff;
      }
                    /* WARNING: Ignoring partial resolution of indirect */
      iVar10 = (int)(iVar7 * (uint)*(byte *)(param_2 + 0x21)) >> 0xc;
      if (0xff < iVar10) {
        iVar10 = 0xff;
      }
      iVar11 = (int)(iVar7 * (uint)*(byte *)(param_2 + 0x22)) >> 0xc;
      if (0xff < iVar11) {
        iVar11 = 0xff;
      }
      iVar12 = (int)(iVar7 * (uint)*(byte *)(param_2 + 0x23)) >> 0xc;
      if (0xff < iVar12) {
        iVar12 = 0xff;
      }
      iVar7 = iVar7 + -0x80;
      *(uint *)(iVar4 + iVar1) =
           CONCAT13((char)iVar12,CONCAT12((char)iVar11,CONCAT11((char)iVar10,(char)iVar9)));
    } while (uVar8 < 0x80000000);
    bVar13 = true;
  }
  else {
    if (*(int *)(param_1 + 0xa8) == 0) {
      return;
    }
    if (*(char *)(param_2 + 0x20) != -1) {
      return;
    }
    bVar13 = false;
    iVar4 = 0;
  }
  if (*(int *)(param_1 + 0x34) << 0x15 < 0) {
    thunk_FUN_4a161530(*(undefined4 *)(param_1 + 0xa8));
  }
  *(int *)(param_1 + 0xa8) = iVar4;
  puVar2 = PTR_DAT_4a0624e4;
  if (bVar13) {
    uVar8 = *(uint *)(param_1 + 0x34) | 0x400;
  }
  else {
    uVar8 = *(uint *)(param_1 + 0x34) & 0xfffffbff;
  }
  *(uint *)(param_1 + 0x34) = uVar8;
  if ((**(int **)puVar2 << 0x1b < 0) && (*(int *)(param_1 + 0xa4) != 0)) {
    thunk_FUN_4a09e170(*(undefined4 *)PTR_DAT_4a0624e8);
  }
  return;
}



// Address: 4a032c5c

undefined1 FUN_4a032c5c(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_4a032c8c;
  if (*PTR_DAT_4a032c8c == '\0' && PTR_DAT_4a032c8c[2] == '\0') {
    iVar2 = host_s3eExtGetHash_thumb(DAT_4a032c94,PTR_DAT_4a032c90,0x4c);
    if (iVar2 == 0) {
      *puVar1 = 1;
    }
    puVar1[2] = 1;
    if (puVar1[1] != '\0') {
      puVar1[1] = 1;
    }
  }
  return *puVar1;
}



// Address: 4a032c98

void FUN_4a032c98(int *param_1,int *param_2,int param_3,int param_4)

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
  int iStack_28;
  
  iVar8 = *param_1;
  iVar1 = thunk_FUN_4a0015f0(iVar8,param_3);
  if (0 < iVar8 - param_3 * iVar1) {
    iVar1 = iVar1 + 1;
  }
  iVar9 = param_1[1];
  iVar8 = thunk_FUN_4a0015f0(iVar9,param_4);
  if (0 < iVar9 - iVar8 * param_4) {
    iVar8 = iVar8 + 1;
  }
  *param_2 = iVar1;
  param_2[1] = iVar8;
  iVar1 = thunk_FUN_4a15e080(iVar8 * iVar1 * 0x20);
  param_2[2] = iVar1;
  for (iVar1 = 0; iVar1 < param_1[1]; iVar1 = iVar1 + param_4) {
    iVar8 = thunk_FUN_4a0015f0(iVar1,param_4);
    iVar9 = *param_2;
    for (iVar7 = 0; iVar4 = *param_1, iVar7 < iVar4; iVar7 = iVar7 + param_3) {
      iVar2 = 0;
      iVar11 = 0;
      iVar10 = 0;
      iStack_28 = 0;
      for (iVar6 = 0; (iVar6 < param_4 && (iVar1 + iVar6 < param_1[1])); iVar6 = iVar6 + 1) {
        for (iVar5 = 0; (iVar5 < param_3 && (iVar7 + iVar5 < iVar4)); iVar5 = iVar5 + 1) {
          uVar3 = *(uint *)(param_1[2] + (iVar4 * (iVar1 + iVar6) + iVar7 + iVar5) * 4);
          iVar2 = ((uVar3 & 0xffffff) >> 0x10) + iVar2;
          iVar11 = (uVar3 & 0xff) + iVar11;
          iStack_28 = iStack_28 + 1;
          iVar10 = ((uVar3 & 0xffff) >> 8) + iVar10;
        }
      }
      iVar4 = thunk_FUN_4a0015f0(iVar2,iStack_28);
      iVar2 = thunk_FUN_4a0015f0(iVar10,iStack_28);
      uVar3 = thunk_FUN_4a0015f0(iVar11,iStack_28);
      iVar6 = thunk_FUN_4a0015f0(iVar7,param_3);
      *(uint *)(param_2[2] + (iVar6 + iVar9 * iVar8) * 4) = iVar4 << 0x10 | iVar2 << 8 | uVar3;
    }
  }
  return;
}



// Address: 4a032dc0

void FUN_4a032dc0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
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
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  int *piStack_1c;
  int *piStack_18;
  
  iVar11 = *param_1;
  iVar1 = param_1[1];
  iStack_7c = *param_2;
  iVar12 = param_2[1];
  iStack_80 = iVar12;
  iStack_78 = iVar1;
  piStack_1c = param_1;
  piStack_18 = param_2;
  uVar13 = thunk_FUN_4a1711b0(iStack_7c + -1);
  uVar14 = thunk_FUN_4a1711b0(iVar11 + -1);
  uStack_88 = thunk_FUN_4a170b24((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar13,
                                 (int)((ulonglong)uVar13 >> 0x20));
  uVar13 = thunk_FUN_4a1711b0(iVar12 + -1,(int)((ulonglong)uStack_88 >> 0x20),&iStack_80);
  uVar14 = thunk_FUN_4a1711b0(iVar1 + -1);
  uStack_90 = thunk_FUN_4a170b24((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar13,
                                 (int)((ulonglong)uVar13 >> 0x20));
  uVar13 = CONCAT44(DAT_4a033080,DAT_4a03307c);
  iVar1 = 0;
  while( true ) {
    uStack_9c = (undefined4)((ulonglong)uVar13 >> 0x20);
    uStack_a0 = (undefined4)uVar13;
    if (iStack_80 <= iVar1) break;
    iVar12 = thunk_FUN_4a171070(uStack_a0,uStack_9c,&uStack_98);
    uVar13 = thunk_FUN_4a1711b0(iVar12,iStack_78 + -1);
    uVar15 = thunk_FUN_4a17152c((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),uStack_a0,uStack_9c);
    iVar2 = iVar11 * (iVar12 + 1);
    iVar3 = iVar1 * iStack_7c;
    uVar13 = CONCAT44(DAT_4a033080,DAT_4a03307c);
    iVar10 = 0;
    uVar14 = uStack_90;
    while( true ) {
      uStack_90._4_4_ = (undefined4)((ulonglong)uVar14 >> 0x20);
      uStack_90._0_4_ = (undefined4)uVar14;
      uStack_98._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
      uStack_98._0_4_ = (undefined4)uVar13;
      if (iStack_7c <= iVar10) break;
      uStack_90 = uVar14;
      iVar4 = thunk_FUN_4a171070((undefined4)uStack_98,uStack_98._4_4_,&uStack_90);
      uStack_98 = uVar13;
      iVar8 = iVar4 + 1;
      if (iVar11 + -1 <= iVar4) {
        iVar8 = iVar11 + -1;
      }
      iVar7 = piStack_1c[2];
      uVar9 = *(uint *)(iVar7 + (iVar11 * iVar12 + iVar4) * 4);
      uStack_20 = (uVar9 & 0xffffff) >> 0x10;
      uStack_28 = uVar9 & 0xff;
      uStack_24 = (uVar9 & 0xffff) >> 8;
      uStack_34 = *(uint *)(iVar7 + (iVar11 * iVar12 + iVar8) * 4);
      uStack_2c = (uStack_34 & 0xffffff) >> 0x10;
      uStack_30 = (uStack_34 & 0xffff) >> 8;
      uStack_34 = uStack_34 & 0xff;
      uVar9 = *(uint *)(iVar7 + (iVar2 + iVar4) * 4);
      uStack_38 = (uVar9 & 0xffffff) >> 0x10;
      uStack_40 = uVar9 & 0xff;
      uStack_3c = (uVar9 & 0xffff) >> 8;
      uStack_4c = *(uint *)(iVar7 + (iVar2 + iVar8) * 4);
      uStack_44 = (uStack_4c & 0xffffff) >> 0x10;
      uStack_48 = (uStack_4c & 0xffff) >> 8;
      uStack_4c = uStack_4c & 0xff;
      uVar13 = thunk_FUN_4a1711b0();
      uVar13 = thunk_FUN_4a17152c((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(undefined4)uStack_98
                                  ,uStack_98._4_4_);
      uStack_50 = thunk_FUN_4a170798((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
      uStack_54 = thunk_FUN_4a170798((int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
      uVar5 = thunk_FUN_4a172098(uStack_44);
      uStack_58 = thunk_FUN_4a17211c(uVar5,uStack_54);
      uStack_5c = thunk_FUN_4a1724e0(uStack_54,0x3f800000);
      uVar5 = thunk_FUN_4a172098(uStack_38);
      uVar5 = thunk_FUN_4a17211c(uVar5,uStack_5c);
      uVar5 = thunk_FUN_4a171a94(uVar5,uStack_58);
      uStack_60 = thunk_FUN_4a17211c(uVar5,uStack_50);
      uStack_64 = thunk_FUN_4a1724e0(uStack_50,0x3f800000);
      uVar5 = thunk_FUN_4a172098(uStack_2c);
      uVar5 = thunk_FUN_4a17211c(uVar5,uStack_54);
      uVar6 = thunk_FUN_4a172098(uStack_20);
      uVar6 = thunk_FUN_4a17211c(uVar6,uStack_5c);
      uVar5 = thunk_FUN_4a171a94(uVar6,uVar5);
      uVar5 = thunk_FUN_4a17211c(uVar5,uStack_64);
      thunk_FUN_4a171a94(uVar5,uStack_60);
      iVar4 = thunk_FUN_4a171f48();
      uVar5 = thunk_FUN_4a172098(uStack_48);
      uVar5 = thunk_FUN_4a17211c(uVar5,uStack_54);
      uVar6 = thunk_FUN_4a172098(uStack_3c);
      uVar6 = thunk_FUN_4a17211c(uVar6,uStack_5c);
      uVar5 = thunk_FUN_4a171a94(uVar6,uVar5);
      uStack_68 = thunk_FUN_4a17211c(uVar5,uStack_50);
      uVar5 = thunk_FUN_4a172098(uStack_30);
      uVar5 = thunk_FUN_4a17211c(uVar5,uStack_54);
      uVar6 = thunk_FUN_4a172098(uStack_24);
      uVar6 = thunk_FUN_4a17211c(uVar6,uStack_5c);
      uVar5 = thunk_FUN_4a171a94(uVar6,uVar5);
      uVar5 = thunk_FUN_4a17211c(uVar5,uStack_64);
      thunk_FUN_4a171a94(uVar5,uStack_68);
      iVar8 = thunk_FUN_4a171f48();
      uVar5 = thunk_FUN_4a172098(uStack_4c);
      uStack_6c = thunk_FUN_4a17211c(uVar5,uStack_54);
      uVar5 = thunk_FUN_4a172098(uStack_40);
      uVar5 = thunk_FUN_4a17211c(uVar5,uStack_5c);
      uVar5 = thunk_FUN_4a171a94(uVar5,uStack_6c);
      uStack_70 = thunk_FUN_4a17211c(uVar5,uStack_50);
      uVar5 = thunk_FUN_4a172098(uStack_34);
      uStack_74 = thunk_FUN_4a17211c(uVar5,uStack_54);
      uVar5 = thunk_FUN_4a172098(uStack_28);
      uVar5 = thunk_FUN_4a17211c(uVar5,uStack_5c);
      uVar5 = thunk_FUN_4a171a94(uVar5,uStack_74);
      uVar5 = thunk_FUN_4a17211c(uVar5,uStack_64);
      thunk_FUN_4a171a94(uVar5,uStack_70);
      uVar9 = thunk_FUN_4a171f48();
      *(uint *)(piStack_18[2] + (iVar3 + iVar10) * 4) = iVar4 << 0x10 | iVar8 << 8 | uVar9;
      uVar13 = thunk_FUN_4a170848((undefined4)uStack_98,uStack_98._4_4_,(undefined4)uStack_88,
                                  uStack_88._4_4_);
      iVar10 = iVar10 + 1;
      uVar14 = uStack_90;
    }
    uStack_98 = uVar13;
    uVar13 = thunk_FUN_4a170848(uStack_a0,uStack_9c,(undefined4)uStack_90,uStack_90._4_4_);
    uStack_90 = uVar14;
    iVar1 = iVar1 + 1;
  }
  return;
}



// Address: 4a033084

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a033084(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  code *UNRECOVERED_JUMPTABLE;
  
  puVar1 = PTR_DAT_4a0331e8;
  iVar2 = 0;
  if (*(int *)PTR_DAT_4a0331e8 != 0) {
    iVar2 = *(int *)(PTR_DAT_4a0331e8 + 4);
  }
  if (*(int *)PTR_DAT_4a0331e8 == 0 || iVar2 == 0) {
    return;
  }
  iVar3 = *(int *)(PTR_DAT_4a0331e8 + 0x34);
  iVar4 = *(int *)(PTR_DAT_4a0331e8 + 0x38);
  iVar6 = iVar3 + *(int *)(PTR_DAT_4a0331e8 + 0x3c);
  iVar5 = iVar4 + *(int *)(PTR_DAT_4a0331e8 + 0x40);
  iVar7 = -(*(int *)(PTR_DAT_4a0331e8 + 0x40) / 2);
  iVar2 = *(int *)(PTR_DAT_4a0331e8 + 0x3c) / 2;
  if (param_1 == 1) {
    *(undefined4 *)(PTR_DAT_4a0331e8 + 0x1c) = 1;
    *(undefined4 *)(puVar1 + 0x20) = 0;
    *(int *)(puVar1 + 0xc) = iVar5;
    *(int *)(puVar1 + 8) = iVar6;
    FUN_4a150d7c(-(*(int *)(puVar1 + 0x14) + iVar2),iVar7,iVar6,iVar5);
    *(undefined4 *)(puVar1 + 0x24) = 1;
    thunk_FUN_4a150140(0xc11);
    FUN_4a1507ec(0,0,*(undefined4 *)(puVar1 + 0x34),*(undefined4 *)(puVar1 + 0x38));
    *(undefined4 *)(puVar1 + 0x24) = 0;
    return;
  }
  if (param_1 == 2) {
    *(int *)(PTR_DAT_4a0331e8 + 8) = iVar3;
    *(int *)(puVar1 + 0xc) = iVar4;
    *(undefined4 *)(puVar1 + 0x1c) = 1;
    *(undefined4 *)(puVar1 + 0x20) = 0;
    iVar2 = 0;
  }
  else {
    if (param_1 == 4) {
      *(undefined4 *)(PTR_DAT_4a0331e8 + 0x20) = 1;
      *(undefined4 *)(puVar1 + 0x1c) = 0;
      *(int *)(puVar1 + 0xc) = iVar5;
      *(int *)(puVar1 + 8) = iVar6;
      FUN_4a150d7c((*(int *)(puVar1 + 0x10) + *(int *)(puVar1 + 0x18)) - iVar2,iVar7,iVar6,iVar5);
      *(undefined4 *)(puVar1 + 0x24) = 1;
      thunk_FUN_4a150140(0xc11);
      FUN_4a1507ec(*(undefined4 *)(puVar1 + 0x34),0,*(undefined4 *)(puVar1 + 0x34),
                   *(undefined4 *)(puVar1 + 0x38));
      *(undefined4 *)(puVar1 + 0x24) = 0;
      return;
    }
    if (param_1 != 8) {
                    /* WARNING: Could not recover jumptable at 0x4a0331c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,iVar7);
      return;
    }
    *(int *)(PTR_DAT_4a0331e8 + 8) = iVar3;
    *(int *)(puVar1 + 0xc) = iVar4;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    *(undefined4 *)(puVar1 + 0x20) = 1;
    iVar2 = iVar3;
  }
  iVar7 = *(int *)PTR_DAT_4a150dbc;
  if (iVar2 == 0) {
    if (iVar3 + iVar4 == *(int *)(iVar7 + 0x20) + *(int *)(iVar7 + 0x24)) {
      iVar3 = *(int *)(iVar7 + 0x20);
      iVar4 = *(int *)(iVar7 + 0x24);
    }
  }
  *(int *)(iVar7 + 0x10) = iVar2;
  *(undefined4 *)(iVar7 + 0x14) = 0;
  *(int *)(iVar7 + 0x18) = iVar3;
  *(int *)(iVar7 + 0x1c) = iVar4;
  return;
}



// Address: 4a0331ec

void FUN_4a0331ec(int *param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  int iVar10;
  
  puVar5 = (undefined2 *)0x0;
  if (param_2 != 0) {
    puVar5 = *(undefined2 **)(param_2 + 8);
  }
  puVar9 = (undefined2 *)0x0;
  if (*param_1 != 0) {
    puVar9 = *(undefined2 **)(*param_1 + 8);
  }
  iVar8 = 0;
  if (puVar9 != (undefined2 *)0x0) {
    iVar8 = FUN_4a000f50(puVar9);
  }
  iVar7 = 0;
  if (puVar5 != (undefined2 *)0x0) {
    iVar7 = FUN_4a000f50(puVar5);
  }
  puVar1 = (undefined2 *)thunk_FUN_4a161570((iVar8 + iVar7 + 1) * 2);
  puVar2 = puVar1;
  if (0 < iVar8) {
    puVar2 = puVar9 + -1;
    puVar6 = puVar1 + -1;
    if ((iVar8 - 1U & 1) == 0) {
      *puVar1 = *puVar9;
      puVar2 = puVar9;
      puVar6 = puVar1;
    }
    for (iVar10 = iVar8 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar6[1] = puVar2[1];
      puVar2 = puVar2 + 2;
      puVar6 = puVar6 + 2;
      *puVar6 = *puVar2;
    }
    puVar2 = puVar1 + iVar8;
  }
  if (0 < iVar7) {
    puVar9 = puVar5 + -1;
    puVar6 = puVar2 + -1;
    if ((iVar7 - 1U & 1) == 0) {
      *puVar2 = *puVar5;
      puVar9 = puVar5;
      puVar6 = puVar2;
    }
    for (iVar8 = iVar7 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar6[1] = puVar9[1];
      puVar9 = puVar9 + 2;
      puVar6 = puVar6 + 2;
      *puVar6 = *puVar9;
    }
    puVar2 = puVar2 + iVar7;
  }
  *puVar2 = 0;
  piVar3 = (int *)*param_1;
  if ((piVar3 != (int *)0x0) && (iVar8 = piVar3[1], piVar3[1] = iVar8 + -1, iVar8 + -1 == 0)) {
    (**(code **)(*piVar3 + 4))();
  }
  puVar4 = (undefined4 *)thunk_FUN_4a161570(0xc);
  *puVar4 = PTR_PTR_4a102118;
  puVar4[1] = 1;
  puVar4[2] = puVar1;
  *param_1 = (int)puVar4;
  return;
}



// Address: 4a0331f8

void FUN_4a0331f8(int *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  
  puVar8 = (undefined2 *)0x0;
  if (*param_1 != 0) {
    puVar8 = *(undefined2 **)(*param_1 + 8);
  }
  iVar7 = 0;
  if (puVar8 != (undefined2 *)0x0) {
    iVar7 = FUN_4a000f50(puVar8);
  }
  iVar6 = 0;
  if (param_2 != (undefined2 *)0x0) {
    iVar6 = FUN_4a000f50(param_2);
  }
  puVar1 = (undefined2 *)thunk_FUN_4a161570((iVar7 + iVar6 + 1) * 2);
  puVar2 = puVar1;
  if (0 < iVar7) {
    puVar2 = puVar8 + -1;
    puVar5 = puVar1 + -1;
    if ((iVar7 - 1U & 1) == 0) {
      *puVar1 = *puVar8;
      puVar2 = puVar8;
      puVar5 = puVar1;
    }
    for (iVar9 = iVar7 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
      puVar5[1] = puVar2[1];
      puVar2 = puVar2 + 2;
      puVar5 = puVar5 + 2;
      *puVar5 = *puVar2;
    }
    puVar2 = puVar1 + iVar7;
  }
  if (0 < iVar6) {
    puVar8 = param_2 + -1;
    puVar5 = puVar2 + -1;
    if ((iVar6 - 1U & 1) == 0) {
      *puVar2 = *param_2;
      puVar8 = param_2;
      puVar5 = puVar2;
    }
    for (iVar7 = iVar6 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar5[1] = puVar8[1];
      puVar8 = puVar8 + 2;
      puVar5 = puVar5 + 2;
      *puVar5 = *puVar8;
    }
    puVar2 = puVar2 + iVar6;
  }
  *puVar2 = 0;
  piVar3 = (int *)*param_1;
  if ((piVar3 != (int *)0x0) && (iVar7 = piVar3[1], piVar3[1] = iVar7 + -1, iVar7 + -1 == 0)) {
    (**(code **)(*piVar3 + 4))();
  }
  puVar4 = (undefined4 *)thunk_FUN_4a161570(0xc);
  *puVar4 = PTR_PTR_4a102118;
  puVar4[1] = 1;
  puVar4[2] = puVar1;
  *param_1 = (int)puVar4;
  return;
}



// Address: 4a033328

void FUN_4a033328(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 4) + DAT_4a03338c;
  if (iVar1 == 0) {
    FUN_4a035d10(param_1,param_2,param_4,param_4,param_2,param_3,param_4);
  }
  else {
    iVar1 = iVar1 + DAT_4a033390;
    if (iVar1 == 0) {
      FUN_4a035c84(param_1,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      iVar1 = iVar1 + DAT_4a033394;
      if (iVar1 == 0) {
        FUN_4a035daa(param_1,param_3,param_2);
      }
      else if (iVar1 + DAT_4a033398 == 0) {
        FUN_4a035c44(param_1,param_3,param_2);
      }
    }
  }
  return;
}



// Address: 4a03339c

void FUN_4a03339c(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = PTR_LAB_4a0333f0;
  if (*(int *)(PTR_LAB_4a0333f0 + 0xb0) == 0) {
    uVar2 = thunk_FUN_4a161570(0x1000);
    *(undefined4 *)(puVar1 + 0xb0) = uVar2;
  }
  iVar4 = 0;
  iVar5 = *(int *)(puVar1 + 0xb0);
  iVar3 = 0;
  do {
    *(undefined4 *)(iVar5 + iVar4 * 4) = 0;
    iVar3 = iVar3 + 2;
    *(undefined4 *)(iVar5 + (iVar4 + 1) * 4) = 0;
    iVar4 = iVar4 + 2;
  } while (iVar3 < 0x400);
  return;
}



// Address: 4a0333f4

void FUN_4a0333f4(int param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_4a033418;
  if ((param_1 == 0) || (param_1 == *(int *)(PTR_DAT_4a033418 + 4))) {
    if (*(int *)(PTR_DAT_4a033418 + 8) != 0) {
      host_s3eCompressionDecompFinal_thumb();
    }
    *(undefined4 *)(puVar1 + 8) = 0;
  }
  return;
}



// Address: 4a03341c

void FUN_4a03341c(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = 0;
  *param_2 = 0;
  FUN_4a03b7bc(s_Rasterisation_4a033470,&DAT_4a03346c,param_1,param_2,0x10,0x80);
  FUN_4a03b7bc(s_Transform_4a033484,&DAT_4a033480,param_1,param_2,4,0x20);
  FUN_4a03b7bc(s_Lighting_4a033490,&DAT_4a033480,param_1,param_2,8,0x40);
  return;
}



// Address: 4a03349c

undefined4 FUN_4a03349c(undefined4 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 auStack_90 [128];
  
  puVar2 = auStack_90;
  lVar4 = host_s3eFileGetFileInt_thumb(param_1,1);
  if (lVar4 == 0) {
    FUN_4a0012bc(auStack_90,param_1);
    FUN_4a00bb00(auStack_90,0);
    iVar1 = FUN_4a0015c0(auStack_90,&DAT_4a03350c);
    if (iVar1 != 0) {
      puVar2 = (undefined1 *)(iVar1 + 3);
    }
    do {
      puVar3 = (undefined1 *)FUN_4a001552(puVar2,0x2f);
      if (puVar3 != (undefined1 *)0x0) {
        *puVar3 = 0;
      }
      lVar4 = host_s3eFileGetFileInt_thumb(auStack_90,1);
      if ((lVar4 == 0) && (iVar1 = host_s3eFileMakeDirectory_thumb(auStack_90), iVar1 == 1)) {
        return 1;
      }
      if (puVar3 == (undefined1 *)0x0) {
        return 0;
      }
      puVar2 = puVar3 + 1;
      *puVar3 = 0x2f;
    } while (puVar2 != (undefined1 *)0x0);
  }
  return 0;
}



// Address: 4a033510

void FUN_4a033510(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_4a033538;
  *(undefined4 *)PTR_DAT_4a033538 = 0;
  *(undefined4 *)(puVar1 + 4) = 3;
  host_s3eConfigGetInt_thumb(&DAT_4a033548,s_DrawCursor_4a03353c,puVar1);
  host_s3eConfigGetInt_thumb(&DAT_4a033548,s_CursorSize_4a03354c,PTR_DAT_4a033538 + 4);
  return;
}



// Address: 4a033558

void FUN_4a033558(undefined4 param_1,int param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined1 auStack_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  
  iStack_28 = 0;
  uStack_24 = param_1;
  iStack_20 = param_2;
  uStack_1c = param_3;
  puStack_18 = param_4;
  if (param_2 == -1) {
    uVar2 = FUN_4a1364c2(param_1);
  }
  else {
    iStack_28 = FUN_4a1364d6(param_1,param_2);
    iStack_28 = iStack_28 + 1;
    uVar2 = FUN_4a1364ac(uStack_24,param_2);
  }
  puVar1 = PTR_DAT_4a0335b8;
  FUN_4a09d6c2(*(undefined4 *)(PTR_DAT_4a0335b8 + 8),uStack_24);
  if (param_4 == (undefined1 *)0x0) {
    param_4 = auStack_2c;
  }
  FUN_4a09d764(*(undefined4 *)(puVar1 + 8),iStack_28,uVar2,param_3,param_4);
  return;
}



// Address: 4a033618

void FUN_4a033618(undefined4 param_1,undefined4 param_2)

{
  FUN_4a0364a8(param_1,0,param_2);
  return;
}



// Address: 4a033628

void FUN_4a033628(uint param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  puVar1 = PTR_DAT_4a03366c;
  if (param_1 < 0x10) {
    *(uint *)PTR_DAT_4a03366c = param_1;
  }
  *(undefined **)(PTR_LAB_4a033674 + 0x48) = PTR_DAT_4a033670 + *(int *)puVar1 * 0x20;
  FUN_4a040e98();
  puVar1 = PTR_LAB_4a09df04;
  piVar2 = *(int **)PTR_DAT_4a033678;
  if (piVar2 == (int *)0x0) {
    return;
  }
  uVar7 = piVar2[2] - 1;
  if (uVar7 < 0x80000000) {
    do {
      iVar4 = *(int *)(*piVar2 + uVar7 * 4);
      iVar5 = *(int *)(iVar4 + 4);
      if (iVar5 != 0) {
        iVar3 = *(int *)(iVar4 + 0x18);
        if (iVar3 == 5 || iVar3 == 7) {
          iVar3 = piVar2[8];
          iVar6 = *(int *)(puVar1 + 0x28);
          piVar2[8] = iVar3 + 1;
          *(int *)(iVar6 + iVar3 * 4) = iVar5;
          *(undefined4 *)(iVar4 + 4) = 0;
        }
        else if (iVar3 == 6) {
          iVar3 = piVar2[9];
          iVar6 = *(int *)(puVar1 + 0x24);
          piVar2[9] = iVar3 + 1;
          *(int *)(iVar6 + iVar3 * 4) = iVar5;
          *(undefined4 *)(iVar4 + 4) = 0;
        }
        else {
          FUN_4a09ef94(piVar2);
        }
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 < 0x80000000);
    return;
  }
  return;
}



// Address: 4a03367c

undefined4 FUN_4a03367c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  puVar2 = PTR_DAT_4a0337b8;
  puVar1 = PTR_DAT_4a0337b4;
  if (*(int *)PTR_DAT_4a0337b4 != 0) {
    FUN_4a02b22c();
    uVar3 = FUN_4a0bf06c();
    FUN_4a0c8100(*(undefined4 *)(puVar2 + 0x48),uVar3);
    if (*(int *)(*(int *)PTR_DAT_4a0337bc + 0xc) == 2) {
      uVar5 = 1;
      do {
        thunk_FUN_4a14fcc4(uVar5 + 0x84c0);
        FUN_4a150618(0x1702);
        FUN_4a1504dc();
        uVar5 = uVar5 - 1;
      } while (uVar5 < 0x80000000);
    }
    thunk_FUN_4a150140(0xbe2);
    thunk_FUN_4a1500c4(0,0x3f800000);
    FUN_4a08fafc(*(undefined4 *)puVar1);
    iVar4 = 0;
    if (*(int *)PTR_DAT_4a0337c0 != 0) {
      iVar4 = *(int *)PTR_DAT_4a0337c4;
    }
    if (*(int *)PTR_DAT_4a0337c0 != 0 && iVar4 != 0) {
      if (*(int *)PTR_DAT_4a0337c8 == 0) {
        FUN_4a00e63c();
      }
      else {
        FUN_4a05a7c4();
      }
    }
  }
  FUN_4a0c8148(*(undefined4 *)(puVar2 + 0x48));
  if (*(int *)(puVar2 + 0x44) != 0) {
    iVar4 = FUN_4a05a2c8();
    if (iVar4 != 0) {
      FUN_4a0fd0dc(*(undefined4 *)(puVar2 + 0x8c));
      FUN_4a0fd02c(*(undefined4 *)(puVar2 + 0x8c));
      FUN_4a0fdf10(*(undefined4 *)(puVar2 + 0x8c));
      FUN_4a0fd058(*(undefined4 *)(puVar2 + 0x8c));
      FUN_4a0fca00(*(undefined4 *)(puVar2 + 0x8c));
    }
    FUN_4a0fb648(*(undefined4 *)(puVar2 + 0x8c),1,0xffffffff);
    *(undefined4 *)(puVar2 + 0x44) = 0;
  }
  return 0;
}



// Address: 4a033804

int FUN_4a033804(int param_1)

{
  if (param_1 == 0x16) {
    return 1;
  }
  if (param_1 < 0x17) {
    if (param_1 == 3) {
      return 4;
    }
    if (param_1 != 6) {
      if (param_1 != 8) {
        return 0;
      }
      param_1 = 3;
    }
    return param_1;
  }
  if (param_1 == 0x1c) {
    return 2;
  }
  if (param_1 != 0x24) {
    if (param_1 != 0x28) {
      return 0;
    }
    return 7;
  }
  return 5;
}



// Address: 4a033840

void FUN_4a033840(int *param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  
  iVar8 = *param_1;
  puVar6 = (uint *)param_1[1];
  uVar20 = param_1[2];
  uVar11 = param_1[3];
  iVar14 = param_1[4];
  iVar15 = param_1[5];
  iVar10 = iVar8 + -1;
  uVar9 = param_1[6];
  iVar13 = param_1[7];
  iVar12 = param_1[8];
  uVar16 = param_1[9];
  iVar5 = param_1[10];
  puVar7 = puVar6;
  if ((*(uint *)(PTR_LAB_4a033c0c + 0x4c) & 1) == 0) {
    uVar17 = DAT_4a033c10;
    if (((uint)puVar6 & 3) != 0) {
      bVar1 = *(byte *)(iVar13 + (uVar9 & uVar11 >> 0xc | (uVar20 & uVar9) >> 0x15));
      if ((bool)((byte)((uVar20 & uVar9) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      uVar17 = (uint)bVar1 * 0x10000000 + (uVar16 >> 0x17);
      if ((~uVar16 & 0x600000) == 0) {
        uVar17 = uVar17 + 1;
      }
      uVar17 = (uint)*(ushort *)(iVar12 + (uVar17 >> 0x1b | uVar17 << 5));
      iVar10 = iVar8 + -2;
      uVar20 = uVar20 + iVar14;
      uVar21 = (ushort)*puVar6 - uVar17;
      uVar18 = ((uint)(ushort)*puVar6 ^ uVar17 ^ uVar21) & 0x10820;
      uVar17 = uVar18 >> 5;
      uVar3 = (ushort)uVar18;
      uVar4 = ~(uVar3 - ((short)uVar17 - (short)((uVar17 & 0x40) >> 1)));
      uVar11 = uVar11 + iVar15;
      uVar16 = uVar16 + iVar5;
      puVar7 = (uint *)((int)puVar6 + 2);
      *(ushort *)puVar6 = ((ushort)uVar21 & uVar4) + (uVar4 & uVar3);
      uVar17 = DAT_4a033c10;
      if (iVar10 < 0) {
        return;
      }
    }
    while (DAT_4a033c10 = uVar17, 0 < iVar10) {
      bVar1 = *(byte *)(iVar13 + (uVar9 & uVar11 >> 0xc | (uVar20 & uVar9) >> 0x15));
      if ((bool)((byte)((uVar20 & uVar9) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      uVar18 = (uint)bVar1 * 0x10000000 + (uVar16 >> 0x17);
      if ((uVar16 & 0x600000) != 0) {
        uVar18 = uVar18 + 1;
      }
      uVar21 = uVar20 + iVar14 & uVar9;
      bVar1 = *(byte *)(iVar13 + (uVar9 & uVar11 + iVar15 >> 0xc | uVar21 >> 0x15));
      uVar16 = uVar16 + iVar5;
      if ((bool)((byte)(uVar21 >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      uVar21 = (uint)bVar1 * 0x10000000 + (uVar16 >> 0x17);
      if ((~uVar16 & 0x600000) == 0) {
        uVar21 = uVar21 + 1;
      }
      uVar19 = *puVar7;
      iVar10 = iVar10 + -2;
      uVar18 = CONCAT22(*(undefined2 *)(iVar12 + (uVar21 >> 0x1b | uVar21 << 5)),
                        *(undefined2 *)(iVar12 + (uVar18 >> 0x1b | uVar18 << 5)));
      uVar20 = uVar20 + iVar14 + iVar14;
      uVar21 = uVar17 & (uVar18 ^ uVar19 - uVar18 ^ uVar19);
      *puVar7 = uVar21;
      uVar17 = (uVar21 >> 5) - (((uVar17 ^ uVar17 >> 5) & uVar21 >> 5) >> 1);
      if (uVar19 < uVar18) {
        uVar17 = uVar17 | 0x8000000;
      }
      uVar11 = uVar11 + iVar15 + iVar15;
      uVar16 = uVar16 + iVar5;
      *puVar7 = (uVar19 - uVar18 & ~(uVar21 - uVar17)) + (uVar21 & ~(uVar21 - uVar17));
      puVar7 = puVar7 + 1;
      uVar17 = DAT_4a033c10;
    }
    if (iVar10 < 0) {
      return;
    }
    bVar1 = *(byte *)(iVar13 + (uVar9 & uVar11 >> 0xc | (uVar9 & uVar20) >> 0x15));
    if ((bool)((byte)((uVar9 & uVar20) >> 0x14) & 1)) {
      bVar1 = bVar1 >> 4;
    }
    uVar11 = (uint)bVar1 * 0x10000000 + (uVar16 >> 0x17);
    if ((uVar16 & 0x600000) != 0) {
      uVar11 = uVar11 + 1;
    }
  }
  else {
    uVar17 = DAT_4a033c10;
    if (((uint)puVar6 & 3) != 0) {
      uVar17 = uVar20 & uVar9;
      bVar1 = *(byte *)(iVar13 + (uVar9 & uVar11 >> 0xc | uVar17 >> 0x15));
      uVar20 = uVar20 + iVar14;
      if ((bool)((byte)(uVar17 >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      uVar17 = ((uint)bVar1 << 0x1c | uVar16 >> 0x17) + (uint)((byte)(uVar16 >> 0x16) & 1);
      uVar17 = (uint)*(ushort *)(iVar12 + (uVar17 >> 0x1b | uVar17 * 0x20));
      iVar10 = iVar8 + -2;
      uVar11 = uVar11 + iVar15;
      uVar21 = (ushort)*puVar6 - uVar17;
      uVar18 = ((uint)(ushort)*puVar6 ^ uVar17 ^ uVar21) & 0x10820;
      uVar17 = uVar18 >> 5;
      uVar3 = (ushort)uVar18;
      uVar4 = ~(uVar3 - ((short)uVar17 - (short)((uVar17 & 0x40) >> 1)));
      puVar7 = (uint *)((int)puVar6 + 2);
      *(ushort *)puVar6 = (uVar4 & (ushort)uVar21) + (uVar3 & uVar4);
      uVar16 = uVar16 + iVar5;
      uVar17 = DAT_4a033c10;
      if (iVar10 < 0) {
        return;
      }
    }
    while (DAT_4a033c10 = uVar17, 0 < iVar10) {
      bVar1 = *(byte *)(iVar13 + (uVar9 & uVar11 >> 0xc | (uVar20 & uVar9) >> 0x15));
      if ((bool)((byte)((uVar20 & uVar9) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      uVar18 = uVar16 >> 0x17;
      uVar16 = uVar16 + iVar5;
      uVar21 = uVar20 + iVar14 & uVar9;
      bVar2 = *(byte *)(iVar13 + (uVar9 & uVar11 + iVar15 >> 0xc | uVar21 >> 0x15));
      iVar10 = iVar10 + -2;
      uVar20 = uVar20 + iVar14 + iVar14;
      if ((bool)((byte)(uVar21 >> 0x14) & 1)) {
        bVar2 = bVar2 >> 4;
      }
      uVar21 = ((uint)bVar2 << 0x1c | uVar16 >> 0x17) + (uint)((byte)(uVar16 >> 0x16) & 1);
      uVar16 = uVar16 + iVar5;
      uVar11 = uVar11 + iVar15 + iVar15;
      uVar18 = CONCAT22(*(undefined2 *)(iVar12 + (uVar21 >> 0x1b | uVar21 * 0x20)),
                        *(undefined2 *)
                         (iVar12 + ((uint)bVar1 * 0x10000000 + uVar18 >> 0x1b | uVar18 << 5)));
      uVar21 = *puVar7;
      uVar19 = uVar17 & (uVar18 ^ uVar21 - uVar18 ^ uVar21);
      *puVar7 = uVar19;
      uVar17 = (uVar19 >> 5) - (((uVar17 ^ uVar17 >> 5) & uVar19 >> 5) >> 1);
      if (uVar21 < uVar18) {
        uVar17 = uVar17 | 0x8000000;
      }
      *puVar7 = (uVar21 - uVar18 & ~(uVar19 - uVar17)) + (uVar19 & ~(uVar19 - uVar17));
      puVar7 = puVar7 + 1;
      uVar17 = DAT_4a033c10;
    }
    if (iVar10 < 0) {
      return;
    }
    bVar1 = *(byte *)(iVar13 + (uVar9 & uVar11 >> 0xc | (uVar9 & uVar20) >> 0x15));
    if ((bool)((byte)((uVar9 & uVar20) >> 0x14) & 1)) {
      bVar1 = bVar1 >> 4;
    }
    uVar11 = (uint)bVar1 * 0x10000000 + (uVar16 >> 0x17);
  }
  uVar11 = (uint)*(ushort *)(iVar12 + (uVar11 >> 0x1b | uVar11 << 5));
  uVar20 = (ushort)*puVar7 - uVar11;
  uVar16 = ((uint)(ushort)*puVar7 ^ uVar11 ^ uVar20) & 0x10820;
  uVar11 = uVar16 >> 5;
  uVar3 = (ushort)uVar16;
  uVar4 = ~(uVar3 - ((short)uVar11 - (short)((uVar11 & 0x40) >> 1)));
  *(ushort *)puVar7 = (uVar3 & uVar4) + ((ushort)uVar20 & uVar4);
  return;
}



// Address: 4a033c14

void FUN_4a033c14(int *param_1)

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
  
  iVar16 = *(int *)PTR_LAB_4a033d28;
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



// Address: 4a033d2c

void FUN_4a033d2c(int *param_1)

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
  
  iVar10 = *(int *)PTR_LAB_4a033e9c;
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



// Address: 4a033f94

void FUN_4a033f94(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  iVar15 = *param_1 + -1;
  puVar4 = (undefined2 *)param_1[1];
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  iVar11 = param_1[4];
  iVar12 = param_1[5];
  uVar8 = param_1[6];
  iVar13 = param_1[7];
  iVar14 = param_1[8];
  uVar9 = param_1[9];
  uVar10 = *(uint *)(PTR_LAB_4a034204 + 0x4c);
  if (*(int *)(PTR_LAB_4a034204 + 0x5c) != 0) {
    if ((uVar9 & 0x80000000) != 0) {
      iVar14 = iVar14 + ((uVar9 & 0xf800000) >> 0x12);
      if ((uVar10 & 1 | ((uVar10 ^ (uint)puVar4 >> 1) & 1) << 1) < (uVar9 & 0x7fffff) >> 0x15) {
        iVar14 = iVar14 + 0x20;
      }
      do {
        uVar9 = uVar6 & uVar8;
        bVar1 = *(byte *)(iVar13 + (uVar8 & uVar7 >> 0xc | uVar9 >> 0x15));
        uVar6 = uVar6 + iVar11;
        uVar7 = uVar7 + iVar12;
        if ((bool)((byte)(uVar9 >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
        iVar15 = iVar15 + -1;
        *puVar4 = *(undefined2 *)(iVar14 + (bVar1 & 0xf) * 2);
        puVar4 = puVar4 + 1;
      } while (-1 < iVar15);
      return;
    }
    iVar2 = param_1[10];
    do {
      uVar10 = uVar6 & uVar8;
      bVar1 = *(byte *)(iVar13 + (uVar8 & uVar7 >> 0xc | uVar10 >> 0x15));
      uVar6 = uVar6 + iVar11;
      if ((bool)((byte)(uVar10 >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      uVar7 = uVar7 + iVar12;
      iVar3 = iVar14 + ((uVar9 & 0xf800000) >> 0x12);
      if ((*(uint *)(PTR_LAB_4a034204 + 0x4c) & 1 |
          ((*(uint *)(PTR_LAB_4a034204 + 0x4c) ^ (uint)puVar4 >> 1) & 1) << 1) <
          (uVar9 & 0x7fffff) >> 0x15) {
        iVar3 = iVar3 + 0x20;
      }
      iVar15 = iVar15 + -1;
      *puVar4 = *(undefined2 *)(iVar3 + (bVar1 & 0xf) * 2);
      uVar9 = uVar9 + iVar2;
      puVar4 = puVar4 + 1;
    } while (-1 < iVar15);
    return;
  }
  if ((uVar9 & 0x80000000) != 0) {
    iVar14 = iVar14 + ((uVar9 & 0xf800000) >> 0x12);
    if ((uVar10 & 1 | ((uVar10 ^ (uint)puVar4 >> 1) & 1) << 1) < (uVar9 & 0x7fffff) >> 0x15) {
      iVar14 = iVar14 + 0x20;
    }
    do {
      bVar1 = *(byte *)(iVar13 + (uVar8 & uVar7 >> 0xc | (uVar6 & uVar8) >> 0x15));
      if ((bool)((byte)((uVar6 & uVar8) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      while( true ) {
        uVar7 = uVar7 + iVar12;
        uVar6 = uVar6 + iVar11;
        if ((bVar1 & 0xf) == 0) break;
        iVar15 = iVar15 + -1;
        puVar5 = puVar4 + 1;
        *puVar4 = *(undefined2 *)(iVar14 + (bVar1 & 0xf) * 2);
        if (iVar15 < 0) {
          return;
        }
        bVar1 = *(byte *)(iVar13 + (uVar8 & uVar7 >> 0xc | (uVar6 & uVar8) >> 0x15));
        puVar4 = puVar5;
        if ((bool)((byte)((uVar6 & uVar8) >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
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
    bVar1 = *(byte *)(iVar13 + (uVar8 & uVar7 >> 0xc | (uVar6 & uVar8) >> 0x15));
    if ((bool)((byte)((uVar6 & uVar8) >> 0x14) & 1)) {
      bVar1 = bVar1 >> 4;
    }
    while( true ) {
      uVar7 = uVar7 + iVar12;
      uVar6 = uVar6 + iVar11;
      if ((bVar1 & 0xf) == 0) break;
      iVar3 = iVar14 + ((uVar9 & 0xf800000) >> 0x12);
      if ((*(uint *)(PTR_LAB_4a034204 + 0x4c) & 1 |
          ((*(uint *)(PTR_LAB_4a034204 + 0x4c) ^ (uint)puVar4 >> 1) & 1) << 1) <
          (uVar9 & 0x7fffff) >> 0x15) {
        iVar3 = iVar3 + 0x20;
      }
      iVar15 = iVar15 + -1;
      puVar5 = puVar4 + 1;
      *puVar4 = *(undefined2 *)(iVar3 + (bVar1 & 0xf) * 2);
      uVar9 = uVar9 + iVar2;
      if (iVar15 < 0) {
        return;
      }
      bVar1 = *(byte *)(iVar13 + (uVar8 & uVar7 >> 0xc | (uVar6 & uVar8) >> 0x15));
      puVar4 = puVar5;
      if ((bool)((byte)((uVar6 & uVar8) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
    }
    iVar15 = iVar15 + -1;
    puVar4 = puVar4 + 1;
    uVar9 = uVar9 + iVar2;
    if (iVar15 < 0) {
      return;
    }
  } while( true );
}



// Address: 4a034208

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a034208(int *param_1)

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
  iVar7 = *(int *)PTR_LAB_4a0345b8;
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
  if (*(int *)(PTR_LAB_4a0345b8 + 0x5c) != 0) {
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
      uVar3 = DAT_4a0345bc &
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
        uVar3 = DAT_4a0345bc &
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



// Address: 4a0345c0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0345c0(int *param_1)

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
  
  uVar23 = DAT_4a034f8c;
  iVar27 = *param_1 + -1;
  puVar4 = (ushort *)param_1[1];
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  iVar19 = param_1[4];
  iVar9 = param_1[5];
  iVar18 = *(int *)PTR_LAB_4a034f88;
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
  if (*(int *)(PTR_LAB_4a034f88 + 0x5c) != 0) {
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
        uVar23 = DAT_4a034f8c &
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
        uVar23 = DAT_4a034f8c &
                 (0x20 - uVar3) * (CONCAT22(*puVar4,*puVar4) & DAT_4a034f8c) +
                 ((uVar23 | uVar23 << 0x10) & DAT_4a034f8c) * uVar3 >> 5;
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
        uVar23 = DAT_4a034f8c &
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
      uVar12 = DAT_4a034f8c &
               (0x20 - (uVar3 >> 0x17)) * (CONCAT22(*puVar4,*puVar4) & DAT_4a034f8c) +
               ((uVar12 | uVar12 << 0x10) & DAT_4a034f8c) * (uVar3 >> 0x17) >> 5;
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



// Address: 4a034f90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_4a034f90(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_24;
  undefined4 uStack_20;
  char cStack_1d;
  undefined4 uStack_1c;
  int iStack_18;
  
  iVar2 = DAT_4a0350b0;
  iVar5 = DAT_4a0350b0 + -0x24;
  iVar1 = DAT_4a0350b0 + -0x24;
  puVar7 = (undefined4 *)((int)&local_24 + DAT_4a0350b0);
  for (iVar6 = 0; *(int *)(param_4 + iVar6 * 4) != 0; iVar6 = iVar6 + 1) {
  }
  local_24 = param_1;
  uStack_20 = param_2;
  uStack_1c = param_3;
  iStack_18 = param_4;
  puVar3 = (undefined4 *)thunk_FUN_4a161570((iVar6 + 1) * 4);
  thunk_FUN_4a001134(puVar3 + 1,param_4,iVar6 << 2);
  *puVar3 = PTR_DAT_4a0350b4;
  if (*(int *)(*(int *)PTR_DAT_4a0350b8 + 0x5bc) << 0x16 < 0) {
    FUN_4a150a14(param_3,iVar6 + 1,puVar3,0);
    FUN_4a14ff04(param_3);
    FUN_4a1503c8(param_3,DAT_4a0350c0,(int)&local_24 + DAT_4a0350bc + iVar2);
    iVar5 = DAT_4a0350c4 + iVar5;
    if (*(int *)(&stack0xffffffec + iVar5 + 0x24) == 0) {
      FUN_4a1503c8(param_3,DAT_4a0350c0 + 3,(int)&iStack_18 + iVar5 + 0x24);
      uVar4 = thunk_FUN_4a161570(*(int *)((int)&iStack_18 + DAT_4a0350c4 + iVar2) + 1);
      iVar5 = (int)&local_24 + DAT_4a0350c8 + iVar2;
      FUN_4a1503bc(param_3,*(int *)(iVar5 + 4) + 1,iVar5,uVar4);
      thunk_FUN_4a00121c((int)&uStack_1c + iVar2,0x400);
      thunk_FUN_4a001368(&stack0x000003e4 + iVar2,*puVar3,0x400);
      iVar1 = DAT_4a0350c4 + iVar1;
      if ((&cStack_1d)[iVar1 + 0x24] != '\0') {
        (&cStack_1d)[iVar1 + 0x24] = '\0';
      }
      if ((puVar3[1] != 0) &&
         (thunk_FUN_4a001368((int)&uStack_1c + iVar2,puVar3[1],0x400),
         (&stack0x000003e3)[iVar2] != '\0')) {
        (&stack0x000003e3)[iVar2] = 0;
      }
      *puVar7 = uVar4;
      FUN_4a008004(s_Failed_to_compile_shader___s_____4a0350cc,
                   *(undefined4 *)(&stack0xfffffff0 + DAT_4a0350c4 + iVar2),&stack0x000003e4 + iVar2
                   ,(int)&uStack_1c + iVar2);
      iVar5 = host_s3eDebugIsDebuggerPresent_thumb();
      if (iVar5 != 0) {
        _DAT_fffffff4 = 0;
      }
      thunk_FUN_4a161530(uVar4);
      return 0;
    }
  }
  else {
    FUN_4a02a2fc(param_3,puVar3);
  }
  thunk_FUN_4a161530(puVar3);
  return 1;
}



// Address: 4a0350f8

undefined * FUN_4a0350f8(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(PTR_DAT_4a035118 + iVar1 * 0x14) == param_1) {
      return PTR_DAT_4a035118 + iVar1 * 0x14;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x20);
  return (undefined *)0x0;
}



// Address: 4a03511c

void FUN_4a03511c(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  uint uStack_1c;
  
  puVar1 = PTR_DAT_4a035244;
  puVar5 = *(uint **)PTR_DAT_4a035244;
  if ((short)puVar5[0x146] != 10) {
    uVar2 = *puVar5;
    *puVar5 = uVar2 & 0xffff87ff;
    puVar5[0xe2] = puVar5[0xe3];
    puVar5[0xe3] = puVar5[0xe3] + 0x58;
    iVar3 = thunk_FUN_4a069e28();
    uVar4 = *(uint *)(iVar3 + 0x10) & 0xfff8ffff;
    if ((short)puVar5[0x146] < 9) {
      *(uint *)(iVar3 + 0x10) = uVar4 | 0x20000;
      uVar4 = 8U - (int)(short)puVar5[0x146] & 0x1f;
      uStack_1c = uVar4 << 3 | uVar4 << 0xb | uVar4 << 0x13 | 0xff000000;
    }
    else {
      *(uint *)(iVar3 + 0x10) = uVar4 | 0x40000;
      uStack_1c = (uint)(byte)(((char)(short)puVar5[0x146] + -8) * '\x03') << 0x18;
    }
    iVar3 = *(int *)puVar1;
    puVar6 = *(uint **)(iVar3 + 0x38c);
    *(uint **)(iVar3 + 0x388) = puVar6;
    *(uint **)(iVar3 + 0x38c) = puVar6 + 4;
    puVar6[3] = uStack_1c;
    puVar6[2] = uStack_1c;
    puVar6[1] = uStack_1c;
    *puVar6 = uStack_1c;
    uStack_20 = (undefined2)puVar5[0xd1];
    uStack_1e = (undefined2)puVar5[0xd2];
    thunk_FUN_4a0361cc();
    FUN_4a048eac(PTR_DAT_4a035248,&uStack_20,puVar6);
    FUN_4a05a618();
    *puVar5 = *puVar5 | uVar2 & 0x7800;
    return;
  }
  return;
}



// Address: 4a03524c

void FUN_4a03524c(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined2 uVar9;
  bool bVar10;
  undefined1 auStack_3c [24];
  int local_24;
  int local_18;
  
  local_18 = 0x80;
  thunk_FUN_4a0ecbc4(auStack_3c);
  thunk_FUN_4a0ecab0(auStack_3c,5);
  thunk_FUN_4a0ebe9c(auStack_3c,local_18);
  thunk_FUN_4a0ecb88(auStack_3c,0x40);
  thunk_FUN_4a0e4d6c(auStack_3c,0,0,0,0);
  for (uVar2 = 0; uVar2 <= (uint)(local_18 * 0x40) && local_18 * 0x40 - uVar2 != 0;
      uVar2 = uVar2 + 1) {
    *(undefined2 *)(local_24 + uVar2 * 2) = 0;
  }
  uVar2 = 0;
  do {
    puVar7 = (undefined2 *)((local_18 * (uVar2 >> 4) * 8 + (uVar2 & 0xf) * 8) * 2 + local_24);
    if (0x7f < uVar2) {
      uVar2 = 0;
    }
    pbVar6 = PTR_DAT_4a035338 + uVar2 * 7;
    iVar8 = 7;
    do {
      if (iVar8 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (uint)*pbVar6;
      }
      for (puVar3 = puVar7; puVar3 < puVar7 + 8; puVar3 = puVar3 + 1) {
        uVar9 = 0;
        if ((uVar5 & 1) != 0) {
          uVar9 = 0xffff;
        }
        uVar5 = uVar5 >> 1;
        *puVar3 = uVar9;
      }
      pbVar6 = pbVar6 + 1;
      bVar10 = iVar8 != 0;
      iVar8 = iVar8 + -1;
      puVar7 = puVar7 + local_18;
    } while (bVar10);
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0x80);
  uVar4 = FUN_4a0633c4(PTR_DAT_4a03533c);
  puVar1 = PTR_DAT_4a035340;
  *(undefined4 *)(PTR_DAT_4a035340 + 0x28) = uVar4;
  FUN_4a062e34(uVar4,auStack_3c);
  FUN_4a06157c(*(undefined4 *)(puVar1 + 0x28),0);
  FUN_4a06148c(*(undefined4 *)(puVar1 + 0x28),0);
  FUN_4a1652c6(*(int **)(puVar1 + 0x28),*(undefined4 *)(**(int **)(puVar1 + 0x28) + 0x3c));
  thunk_FUN_4a0ecbf0(auStack_3c);
  return;
}



// Address: 4a035344

void FUN_4a035344(int param_1,int param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar2 = thunk_FUN_4a172098(*param_3);
  uVar1 = DAT_4a0353bc;
  local_28 = thunk_FUN_4a17211c(uVar2,DAT_4a0353bc);
  uVar2 = thunk_FUN_4a172098(param_3[1]);
  local_24 = thunk_FUN_4a17211c(uVar2,uVar1);
  uVar2 = thunk_FUN_4a172098(param_3[2]);
  local_20 = thunk_FUN_4a17211c(uVar2,uVar1);
  uVar2 = thunk_FUN_4a172098(param_3[3]);
  local_1c = thunk_FUN_4a17211c(uVar2,uVar1);
  iVar4 = param_2 * 4 + param_1;
  iVar3 = *(int *)(iVar4 + 0xa8);
  if (iVar3 != 0) {
    iVar3 = FUN_4a000e60(&local_28,iVar3,0x10);
    if (iVar3 == 0) {
      return;
    }
    thunk_FUN_4a000f84(*(undefined4 *)(iVar4 + 0xa8),&local_28,0x10);
  }
  FUN_4a150ce8(*(undefined4 *)(param_1 + param_2 * 4),1,&local_28);
  return;
}



// Address: 4a0353c0

void FUN_4a0353c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)PTR_DAT_4a0353e4;
  *(undefined4 *)(iVar1 + 0x41c) = 0;
  *(undefined4 *)(iVar1 + 0x414) = param_1;
  *(undefined4 *)(iVar1 + 0x440) = 0;
  *(undefined4 *)(iVar1 + 0x454) = param_3;
  *(undefined4 *)(iVar1 + 0x458) = param_2;
  return;
}



// Address: 4a0353e8

void FUN_4a0353e8(int *param_1,int param_2,int param_3)

{
  short sVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  sVar1 = *(short *)(param_2 + 4);
  iVar10 = *(int *)(*(int *)PTR_DAT_4a035538 +
                   ((int)*(short *)(param_3 + 6) - (int)*(short *)(param_2 + 6)) * 4);
  lVar2 = (longlong)((int)*(short *)(param_3 + 4) - (int)sVar1) * (longlong)iVar10;
  uVar7 = (uint)lVar2 >> 0xc | (int)((ulonglong)lVar2 >> 0x20) << 0x14;
  iVar9 = 7 - ((int)*(short *)(param_2 + 6) + 3U & 7);
  iVar5 = uVar7 * iVar9;
  bVar11 = iVar5 < 0;
  if (bVar11) {
    iVar5 = -iVar5;
  }
  iVar5 = iVar5 >> 3;
  if (bVar11) {
    iVar5 = -iVar5;
  }
  *(short *)((int)param_1 + 0x1a) = (short)(*(short *)(param_3 + 6) + 3 >> 3);
  *param_1 = iVar5 + sVar1 * 0x8000 + 0x18000;
  param_1[1] = uVar7;
  puVar6 = (ushort *)(param_1 + 6);
  iVar3 = (int)*(short *)(param_3 + 0x18) - (int)*(short *)(param_2 + 0x18);
  iVar5 = *(short *)(param_2 + 0x18) * 0x10000;
  iVar4 = (int)*(short *)(param_3 + 0x1a) - (int)*(short *)(param_2 + 0x1a);
  if (iVar3 < 0) {
    iVar5 = iVar5 + -1;
  }
  iVar8 = *(short *)(param_2 + 0x1a) * 0x10000;
  if (iVar4 < 0) {
    iVar8 = iVar8 + -1;
  }
  if (iVar3 == 0) {
    *puVar6 = *puVar6 | 0x10;
  }
  if (iVar4 == 0) {
    *puVar6 = *puVar6 | 0x20;
  }
  param_1[7] = iVar3;
  param_1[8] = iVar4;
  param_1[9] = iVar5;
  param_1[10] = iVar8;
  if (iVar10 != 0x40000000) {
    if (iVar3 != 0) {
      uVar7 = (uint)((longlong)iVar3 * (longlong)iVar10) >> 0xb |
              (int)((ulonglong)((longlong)iVar3 * (longlong)iVar10) >> 0x20) << 0x15;
      param_1[7] = uVar7;
      param_1[9] = iVar5 + (iVar9 * ((int)uVar7 >> 2) >> 1);
    }
    if (iVar4 != 0) {
      uVar7 = (uint)((longlong)iVar4 * (longlong)iVar10) >> 0xb |
              (int)((ulonglong)((longlong)iVar4 * (longlong)iVar10) >> 0x20) << 0x15;
      param_1[8] = uVar7;
      param_1[10] = iVar8 + (iVar9 * ((int)uVar7 >> 2) >> 1);
      return;
    }
    return;
  }
  return;
}



// Address: 4a03553c

void FUN_4a03553c(int *param_1,byte *param_2,byte *param_3)

{
  short sVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  short local_20;
  
  sVar1 = *(short *)(param_2 + 4);
  iVar7 = *(int *)(*(int *)PTR_DAT_4a035708 +
                  ((int)*(short *)(param_3 + 6) - (int)*(short *)(param_2 + 6)) * 4);
  lVar2 = (longlong)((int)*(short *)(param_3 + 4) - (int)sVar1) * (longlong)iVar7;
  uVar5 = (uint)lVar2 >> 0xc | (int)((ulonglong)lVar2 >> 0x20) << 0x14;
  iVar9 = 7 - ((int)*(short *)(param_2 + 6) + 3U & 7);
  iVar3 = uVar5 * iVar9;
  bVar11 = iVar3 < 0;
  if (bVar11) {
    iVar3 = -iVar3;
  }
  iVar3 = iVar3 >> 3;
  if (bVar11) {
    iVar3 = -iVar3;
  }
  *(short *)((int)param_1 + 0x1a) = (short)(*(short *)(param_3 + 6) + 3 >> 3);
  *param_1 = iVar3 + sVar1 * 0x8000 + 0x18000;
  param_1[1] = uVar5;
  iVar3 = *(short *)(param_2 + 0x18) * 0x10000;
  iVar4 = (int)*(short *)(param_3 + 0x18) - (int)*(short *)(param_2 + 0x18);
  iVar10 = (int)*(short *)(param_3 + 0x1a) - (int)*(short *)(param_2 + 0x1a);
  if (iVar4 < 0) {
    iVar3 = iVar3 + -1;
  }
  iVar8 = *(short *)(param_2 + 0x1a) * 0x10000;
  if (iVar10 < 0) {
    iVar8 = iVar8 + -1;
  }
  puVar6 = (ushort *)(param_1 + 6);
  if (iVar4 == 0) {
    *puVar6 = *puVar6 | 0x10;
  }
  if (iVar10 == 0) {
    *puVar6 = *puVar6 | 0x20;
  }
  param_1[7] = iVar4;
  param_1[8] = iVar10;
  param_1[9] = iVar3;
  param_1[10] = iVar8;
  if (iVar7 != 0x40000000) {
    if (iVar4 != 0) {
      uVar5 = (uint)((longlong)iVar4 * (longlong)iVar7) >> 0xb |
              (int)((ulonglong)((longlong)iVar4 * (longlong)iVar7) >> 0x20) << 0x15;
      param_1[7] = uVar5;
      param_1[9] = iVar3 + (iVar9 * ((int)uVar5 >> 2) >> 1);
    }
    if (iVar10 != 0) {
      uVar5 = (uint)((longlong)iVar10 * (longlong)iVar7) >> 0xb |
              (int)((ulonglong)((longlong)iVar10 * (longlong)iVar7) >> 0x20) << 0x15;
      param_1[8] = uVar5;
      param_1[10] = iVar8 + (iVar9 * ((int)uVar5 >> 2) >> 1);
    }
  }
  iVar3 = 0;
  if (PTR_LAB_4a03570c[0x45] != '\0') {
    iVar3 = 6;
  }
  iVar4 = (uint)*param_2 - iVar3;
  iVar3 = (uint)*param_3 - iVar3;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  local_20 = (short)iVar9;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  param_1[0xb] = iVar4 * 0x100000;
  if (iVar3 - iVar4 != 0) {
    iVar3 = (iVar3 - iVar4) * (iVar7 >> 7);
    param_1[0xb] = iVar4 * 0x100000 + ((int)local_20 * (iVar3 >> 1) >> 2);
    param_1[0xc] = iVar3;
    return;
  }
  *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) | 0x40;
  param_1[0xc] = 0;
  return;
}



// Address: 4a035710

void FUN_4a035710(int *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  short sVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ushort *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  short local_20;
  
  sVar8 = *(short *)(param_2 + 4);
  iVar12 = *(int *)(*(int *)PTR_DAT_4a0358fc +
                   ((int)*(short *)(param_3 + 6) - (int)*(short *)(param_2 + 6)) * 4);
  lVar9 = (longlong)((int)*(short *)(param_3 + 4) - (int)sVar8) * (longlong)iVar12;
  uVar13 = (uint)lVar9 >> 0xc | (int)((ulonglong)lVar9 >> 0x20) << 0x14;
  iVar16 = 7 - ((int)*(short *)(param_2 + 6) + 3U & 7);
  iVar10 = uVar13 * iVar16;
  bVar18 = iVar10 < 0;
  if (bVar18) {
    iVar10 = -iVar10;
  }
  iVar10 = iVar10 >> 3;
  if (bVar18) {
    iVar10 = -iVar10;
  }
  *(short *)((int)param_1 + 0x1a) = (short)(*(short *)(param_3 + 6) + 3 >> 3);
  *param_1 = iVar10 + sVar8 * 0x8000 + 0x18000;
  param_1[1] = uVar13;
  iVar10 = *(short *)(param_2 + 0x18) * 0x10000;
  iVar11 = (int)*(short *)(param_3 + 0x18) - (int)*(short *)(param_2 + 0x18);
  iVar17 = (int)*(short *)(param_3 + 0x1a) - (int)*(short *)(param_2 + 0x1a);
  if (iVar11 < 0) {
    iVar10 = iVar10 + -1;
  }
  iVar15 = *(short *)(param_2 + 0x1a) * 0x10000;
  if (iVar17 < 0) {
    iVar15 = iVar15 + -1;
  }
  puVar14 = (ushort *)(param_1 + 6);
  if (iVar11 == 0) {
    *puVar14 = *puVar14 | 0x10;
  }
  if (iVar17 == 0) {
    *puVar14 = *puVar14 | 0x20;
  }
  param_1[7] = iVar11;
  param_1[8] = iVar17;
  param_1[9] = iVar10;
  param_1[10] = iVar15;
  if (iVar12 != 0x40000000) {
    if (iVar11 != 0) {
      uVar13 = (uint)((longlong)iVar11 * (longlong)iVar12) >> 0xb |
               (int)((ulonglong)((longlong)iVar11 * (longlong)iVar12) >> 0x20) << 0x15;
      param_1[7] = uVar13;
      param_1[9] = iVar10 + (iVar16 * ((int)uVar13 >> 2) >> 1);
    }
    if (iVar17 != 0) {
      uVar13 = (uint)((longlong)iVar17 * (longlong)iVar12) >> 0xb |
               (int)((ulonglong)((longlong)iVar17 * (longlong)iVar12) >> 0x20) << 0x15;
      param_1[8] = uVar13;
      param_1[10] = iVar15 + (iVar16 * ((int)uVar13 >> 2) >> 1);
    }
  }
  bVar1 = param_2[1];
  bVar2 = *param_3;
  bVar3 = param_3[2];
  bVar4 = param_3[3];
  iVar12 = iVar12 >> 7;
  iVar10 = iVar12 * ((uint)param_3[1] - (uint)bVar1);
  bVar5 = *param_2;
  bVar6 = param_2[2];
  local_20 = (short)iVar16;
  iVar16 = (int)local_20;
  bVar7 = param_2[3];
  param_1[0x10] = iVar10;
  param_1[0xc] = iVar16 * (iVar10 >> 3) + (uint)bVar1 * 0x100000;
  iVar10 = iVar12 * ((uint)bVar3 - (uint)bVar6);
  param_1[0x11] = iVar10;
  param_1[0xd] = iVar16 * (iVar10 >> 3) + (uint)bVar6 * 0x100000;
  iVar10 = iVar12 * ((uint)bVar2 - (uint)bVar5);
  param_1[0xf] = iVar10;
  param_1[0xb] = iVar16 * (iVar10 >> 3) + (uint)bVar5 * 0x100000;
  iVar12 = iVar12 * ((uint)bVar4 - (uint)bVar7);
  param_1[0x12] = iVar12;
  param_1[0xe] = iVar16 * (iVar12 >> 3) + (uint)bVar7 * 0x100000;
  return;
}



// Address: 4a035900

undefined4 FUN_4a035900(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_r3;
  
  FUN_4a15edcc(s_TnbNative___tnbGetDemoTime_4a03599c);
  piVar1 = (int *)FUN_4a05be98();
  uVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,s_com_ea_tnb_WrapperActivity_4a0359b8);
  iVar3 = (**(code **)(*piVar1 + 0x1c4))(piVar1,uVar2,s_getDemoTime_4a0359d4,&DAT_4a0359e0,in_r3);
  if (iVar3 == 0) {
    FUN_4a15edcc(s_Sorry__I_can_t_find_getDemoTime_4a0359e4);
  }
  uVar2 = (**(code **)(*piVar1 + 0x208))(piVar1,uVar2,iVar3,&stack0xffffffec,iVar3);
  FUN_4a15edcc(s_getDemoTime___d_4a035a08,uVar2);
  return uVar2;
}



// Address: 4a035a1c

undefined4 FUN_4a035a1c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 8);
  }
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + 8);
  }
  if ((iVar1 != iVar2) &&
     ((((param_1 == 0 || (*(int *)(param_1 + 8) == 0 || param_2 == 0)) ||
       (*(int *)(param_2 + 8) == 0)) || (iVar1 = FUN_4a000ef4(), iVar1 != 0)))) {
    return 0xffffffff;
  }
  return 0;
}



// Address: 4a035a80

int * FUN_4a035a80(int param_1,int param_2,int param_3)

{
  longlong lVar1;
  undefined *puVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  iVar10 = 0;
  iVar11 = 1;
  piVar3 = (int *)PTR_DAT_4a035c34;
  if (0 < param_2) {
    param_2 = -param_2;
    piVar3 = (int *)(PTR_DAT_4a035c34 + 0x98);
    iVar11 = -1;
    *(undefined4 *)(PTR_DAT_4a035c34 + 0x9c) = 0;
  }
  puVar2 = PTR_DAT_4a035c3c;
  iVar8 = -param_2 >> 5;
  iVar7 = iVar8;
  if (0x7fff < iVar8) {
    iVar7 = -param_2 >> 10;
  }
  iVar7 = *(int *)(*(int *)PTR_DAT_4a035c38 + iVar7 * 4);
  if (0x7fff < iVar8) {
    iVar7 = iVar7 >> 5;
  }
  lVar1 = (longlong)(param_3 << 4) * (longlong)iVar7;
  uVar9 = (uint)lVar1 >> 0x16 | (int)((ulonglong)lVar1 >> 0x20) << 10;
  do {
    uVar5 = 0;
    uVar6 = uVar9;
    if (uVar9 >> 0x10 == 0) {
      uVar5 = 0x10;
      uVar6 = uVar9 << 0x10;
    }
    if (uVar6 >> 0x18 == 0) {
      uVar5 = uVar5 + 8;
      uVar6 = uVar6 << 8;
    }
    if (uVar6 >> 0x1c == 0) {
      uVar5 = uVar5 + 4;
      uVar6 = uVar6 << 4;
    }
    if (uVar6 >> 0x1e == 0) {
      uVar5 = uVar5 + 2;
      uVar6 = uVar6 << 2;
    }
    if (-1 < (int)uVar6) {
      uVar5 = uVar5 + 1;
    }
    if (uVar5 < 0x16) {
      uVar5 = 0x16 - uVar5;
      uVar6 = 0xc - (uVar5 >> 1);
      if (((int)(uVar9 << 1) >> (uVar5 & 0xfe) & 1U) == 0) {
        iVar8 = *(int *)(puVar2 + ((int)uVar9 >> (uVar5 & 0xfe)) * 4);
        if (0 < (int)uVar6) goto LAB_4a035b94;
        iVar8 = iVar8 << (-uVar6 & 0xff);
      }
      else {
        iVar8 = *(int *)(puVar2 + ((int)uVar9 >> (uVar5 & 0xfe)) * 4 + 4);
        if ((int)uVar6 < 1) {
          iVar8 = iVar8 << (-uVar6 & 0xff);
        }
        else {
LAB_4a035b94:
          iVar8 = iVar8 >> (uVar6 & 0xff);
        }
      }
    }
    else {
      iVar8 = (*(int *)(puVar2 + (uVar9 << (uVar5 - 0x16 & 0xfe)) * 4) >> (uVar5 - 0x16 >> 1 & 0xff)
              ) >> 0xc;
    }
    iVar8 = (iVar8 >> 0xb) + -0xc;
    if (iVar8 < 8) {
      iVar8 = 8;
    }
    piVar4 = piVar3;
    if (param_1 <= iVar8) {
LAB_4a035bf8:
      if (iVar10 != 0) {
        *piVar4 = param_1;
        if (-1 < iVar11) {
          piVar4[1] = 0;
        }
        if (-1 < iVar11) {
          piVar4 = (int *)PTR_DAT_4a035c34;
        }
        *(int *)(PTR_LAB_4a035c40 + 0x60) = *(int *)(PTR_LAB_4a035c40 + 0x60) + iVar10 * -0x10;
        return piVar4;
      }
      return (int *)0x0;
    }
    if (param_1 < iVar8 * 2) {
      iVar8 = param_1 >> 1;
    }
    uVar9 = ((uint)((longlong)param_2 * (longlong)iVar7) >> 0x16 |
            (int)((ulonglong)((longlong)param_2 * (longlong)iVar7) >> 0x20) << 10) * iVar8 + uVar9;
    iVar10 = iVar10 + 1;
    param_1 = param_1 - iVar8;
    piVar4 = piVar3 + iVar11;
    *piVar3 = iVar8;
    if ((0x24 < iVar10) || (piVar3 = piVar4, param_1 < 9)) goto LAB_4a035bf8;
  } while( true );
}



// Address: 4a035c44

void FUN_4a035c44(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_DAT_4a035c80;
  piVar1 = (int *)(PTR_DAT_4a035c80 + 4);
  if (*piVar1 == 0) {
    *(undefined4 *)(PTR_DAT_4a035c80 + 8) = 0;
  }
  iVar3 = FUN_4a161670(*piVar1,*param_3 + *(int *)(puVar2 + 8));
  *(int *)(puVar2 + 4) = iVar3;
  thunk_FUN_4a000f84(iVar3 + *(int *)(puVar2 + 8),param_1 + 8,*param_3);
  *(int *)(puVar2 + 8) = *param_3 + *(int *)(puVar2 + 8);
  return;
}



// Address: 4a035c84

void FUN_4a035c84(int param_1,uint *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined4 uVar3;
  
  *param_2 = (uint)*(byte *)(param_1 + 0xb) | (uint)*(byte *)(param_1 + 8) << 0x18 |
             (uint)*(byte *)(param_1 + 9) << 0x10 | (uint)*(byte *)(param_1 + 10) << 8;
  param_2[1] = (uint)*(byte *)(param_1 + 0xf) | (uint)*(byte *)(param_1 + 0xc) << 0x18 |
               (uint)*(byte *)(param_1 + 0xd) << 0x10 | (uint)*(byte *)(param_1 + 0xe) << 8;
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_1 + 0x10);
  *(undefined1 *)((int)param_2 + 9) = *(undefined1 *)(param_1 + 0x11);
  *(undefined1 *)((int)param_2 + 10) = *(undefined1 *)(param_1 + 0x12);
  *(undefined1 *)((int)param_2 + 0xb) = *(undefined1 *)(param_1 + 0x13);
  uVar1 = DAT_4a035d0c;
  *(undefined1 *)(param_2 + 3) = *(undefined1 *)(param_1 + 0x14);
  puVar2 = param_2;
  uVar3 = param_3;
  uVar1 = FUN_4a02aecc(param_1,uVar1);
  FUN_4a03d088(param_2,uVar1,param_3);
  thunk_FUN_4a0ebe9c(param_3,*param_2);
  thunk_FUN_4a0ecb88(param_3,param_2[1]);
  thunk_FUN_4a0e4d6c(param_3,param_4,param_5,param_6,param_7,param_1,puVar2,uVar3);
  return;
}



// Address: 4a035d10

void FUN_4a035d10(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  thunk_FUN_4a0e71bc();
  iVar1 = thunk_FUN_4a161570();
  uVar2 = thunk_FUN_4a0e5380(param_3 + 8);
  uVar3 = thunk_FUN_4a0066d8(*param_2,3);
  for (uVar7 = 0; uVar7 < uVar3; uVar7 = uVar7 + 1) {
    iVar4 = FUN_4a142b74(param_3);
    uVar5 = (uint)(iVar4 != 0);
    iVar6 = uVar7 * 3;
    iVar4 = uVar7 * (uVar2 >> 3);
    *(undefined1 *)(iVar4 + iVar1 + uVar5) = *(undefined1 *)(iVar6 + param_1 + 10);
    *(undefined1 *)(iVar4 + iVar1 + uVar5 + 1) = *(undefined1 *)(iVar6 + param_1 + 9);
    *(undefined1 *)(iVar4 + iVar1 + uVar5 + 2) = *(undefined1 *)(param_1 + 8 + iVar6);
    iVar6 = FUN_4a142b74(param_3);
    if (iVar6 != 0) {
      *(undefined1 *)(iVar1 + iVar4) = 0xff;
    }
  }
  if (iVar1 != 0) {
    thunk_FUN_4a0e53a8(param_3,iVar1);
  }
  thunk_FUN_4a161530(iVar1);
  return;
}



// Address: 4a035daa

void FUN_4a035daa(int param_1,int param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(char *)(param_2 + 9) != '\x02') && (*(char *)(param_2 + 9) == '\x03')) {
    for (uVar2 = 0; uVar2 < *param_3; uVar2 = uVar2 + 1) {
      iVar3 = *(int *)(param_4 + 0x1c);
      uVar1 = thunk_FUN_4a0e5380(param_4 + 8);
      *(undefined1 *)(iVar3 + uVar2 * (uVar1 >> 3)) = *(undefined1 *)(param_1 + 8 + uVar2);
    }
  }
  return;
}



// Address: 4a035dec

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a035dec(void)

{
  undefined *puVar1;
  uint *puVar2;
  bool bVar3;
  
  FUN_4a03ef3c();
  puVar1 = PTR_DAT_4a035ea0;
  if (*(int *)(*(int *)PTR_DAT_4a035ea0 + 0xc) == 2) {
    thunk_FUN_4a1500f8(0xb60);
    FUN_4a04df58(0,0,0x3f800000);
    thunk_FUN_4a14fe90(0x84c1);
    thunk_FUN_4a15010c(0x8078);
    thunk_FUN_4a14fe90(0x84c0);
    thunk_FUN_4a15010c(0x8078);
  }
  puVar2 = *(uint **)puVar1;
  bVar3 = (*puVar2 & 0x100) == 0;
  if (bVar3) {
    puVar2 = (uint *)puVar2[3];
  }
  if (!bVar3 || puVar2 != (uint *)0x2) {
    return;
  }
  FUN_4a150618(0x1700);
  FUN_4a1504dc();
  FUN_4a1507ac(0xb40000,0x10000,0);
  FUN_4a156e38(0x100000,0x100000);
  return;
}



// Address: 4a035ea4

uint FUN_4a035ea4(void)

{
  uint uVar1;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  uVar1 = 0;
  local_10 = 0;
  local_14 = 0;
  host_s3eConfigGetInt_thumb(&DAT_4a035f60,s_EGL_SAMPLE_BUFFERS_4a035f4c,&local_10);
  host_s3eConfigGetInt_thumb(&DAT_4a035f60,s_EGL_SAMPLES_4a035f64,&local_14);
  if (local_10 == 1) {
    if (local_14 == 2) {
      uVar1 = 8;
    }
    else if (local_14 == 4) {
      uVar1 = 0x10;
    }
  }
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  host_s3eConfigGetInt_thumb(&DAT_4a035f60,s_EGL_RED_SIZE_4a035f70,&local_18);
  host_s3eConfigGetInt_thumb(&DAT_4a035f60,s_EGL_GREEN_SIZE_4a035f80,&local_1c);
  host_s3eConfigGetInt_thumb(&DAT_4a035f60,s_EGL_BLUE_SIZE_4a035f90,&local_20);
  if (((local_18 == 8) && (local_1c == 8)) && (local_20 == 8)) {
    uVar1 = uVar1 | 4;
  }
  local_24 = 0;
  host_s3eConfigGetInt_thumb(&DAT_4a035f60,s_EGL_ALPHA_SIZE_4a035fa0,&local_24);
  if (local_24 != 0) {
    uVar1 = uVar1 | 1;
  }
  local_28 = 0;
  host_s3eConfigGetInt_thumb(&DAT_4a035f60,s_EGL_STENCIL_SIZE_4a035fb0,&local_28);
  if (local_28 != 0) {
    uVar1 = uVar1 | 0x20;
  }
  return uVar1;
}



// Address: 4a035fc4

void FUN_4a035fc4(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar1 = PTR_DAT_4a036034;
  puVar5 = *(undefined4 **)PTR_DAT_4a036034;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)thunk_FUN_4a161570(0x20000);
  }
  iVar3 = 0;
  puVar4 = puVar5;
  do {
    *puVar4 = 0;
    while( true ) {
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
      if (0x7fff < iVar3) {
        *(undefined4 **)(puVar1 + 4) = puVar5;
        *(undefined4 **)puVar1 = puVar5;
        return;
      }
      if (iVar3 == 0) break;
      uVar2 = FUN_4a0015f0(0x40000000,iVar3);
      *puVar4 = uVar2;
    }
  } while( true );
}



// Address: 4a03603c

void FUN_4a03603c(void)

{
  *(int *)PTR_DAT_4a036050 = *(int *)PTR_DAT_4a036050 + -1;
  return;
}



// Address: 4a036058

void FUN_4a036058(void)

{
  return;
}



// Address: 4a03605c

void FUN_4a03605c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)PTR_DAT_4a036080;
  *(int *)(iVar1 + 0x378) = *(int *)(iVar1 + 0x37c);
  *(int *)(iVar1 + 0x37c) = *(int *)(iVar1 + 0x37c) + param_1 * 0x14;
  return;
}



// Address: 4a036084

void FUN_4a036084(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_4a0013e0(param_3);
  puVar1 = PTR_DAT_4a0360ec;
  iVar3 = *(int *)(PTR_DAT_4a0360ec + 0xc);
  if ((iVar3 + iVar2 + 1U <= *(uint *)(PTR_DAT_4a0360ec + 8)) &&
     (*(uint *)(PTR_DAT_4a0360ec + 0x20) < *(uint *)(PTR_DAT_4a0360ec + 0x1c))) {
    *(undefined1 *)(*(int *)PTR_DAT_4a0360f0 + 0x680) = 1;
    FUN_4a0012bc(*(int *)(puVar1 + 4) + iVar3,param_3);
    iVar5 = *(int *)(puVar1 + 0x20);
    iVar4 = *(int *)(puVar1 + 0x18);
    iVar3 = iVar5 * 0x10;
    *(undefined4 *)(iVar4 + iVar3) = param_1;
    iVar3 = iVar3 + iVar4;
    *(undefined4 *)(iVar3 + 4) = param_2;
    iVar4 = *(int *)(puVar1 + 0xc);
    *(int *)(iVar3 + 8) = *(int *)(puVar1 + 4) + iVar4;
    *(undefined1 *)(iVar3 + 0xc) = param_4;
    *(int *)(puVar1 + 0x20) = iVar5 + 1;
    *(int *)(puVar1 + 0xc) = iVar4 + iVar2 + 1;
  }
  return;
}



// Address: 4a0360f8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0360f8(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint *puVar6;
  
  puVar6 = *(uint **)PTR_DAT_4a0361bc;
  *(char *)(puVar6 + 0x147) = (char)param_1;
  *(char *)((int)puVar6 + 0x51d) = (char)param_2;
  *(char *)((int)puVar6 + 0x51e) = (char)param_3;
  *(char *)((int)puVar6 + 0x51f) = (char)param_4;
  if ((*puVar6 & 0x80) == 0) {
    return;
  }
  if (puVar6[3] == 2) {
    FUN_4a154730(param_1 * 0x100 + 0x80,param_2 * 0x100 + 0x80,param_3 * 0x100 + 0x80,
                 param_4 * 0x100 + 0x80);
    return;
  }
  uVar1 = FUN_4a172098();
  uVar5 = DAT_4a0361c0;
  uVar1 = FUN_4a17211c(uVar1,DAT_4a0361c0);
  uVar2 = FUN_4a172098(param_3);
  uVar2 = FUN_4a17211c(uVar2,uVar5);
  uVar3 = FUN_4a172098(param_2);
  uVar3 = FUN_4a17211c(uVar3,uVar5);
  uVar4 = FUN_4a172098(param_1);
  uVar5 = FUN_4a17211c(uVar4,uVar5);
  FUN_4a1546d8(uVar5,uVar3,uVar2,uVar1);
  return;
}



// Address: 4a0361cc

void FUN_4a0361cc(int param_1)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint local_28;
  int local_24;
  int *local_20;
  byte *local_1c;
  int local_18;
  
  local_20 = *(int **)PTR_DAT_4a036374;
  if (local_20[0x12d] == 0) {
    local_20[300] = param_1;
    local_20[1] = local_20[1] & 0xfffff7ff;
    if ((((int)(*(uint *)(param_1 + 0x10) << 0x1e) < 0) || ((*(uint *)(param_1 + 0x10) & 1) == 2))
       || (-1 < *local_20 << 0x1b)) {
      local_24 = 0;
    }
    else {
      local_24 = 1;
    }
    uVar9 = 0;
    do {
      iVar8 = *(int *)(uVar9 * 4 + param_1 + 0x2c);
      if (iVar8 != 0) {
        if ((*(uint *)(iVar8 + 0x34) & 1) == 0) {
          local_20[1] = local_20[1] | 0x800;
        }
        else if ((local_24 != 0) && ((int)(*(uint *)(iVar8 + 0x34) << 0x12) < 0)) {
          local_18 = iVar8 + 0x80;
          if (*(int *)(iVar8 + 0xa4) != 0) {
            if ((4 < *(int *)(*(int *)(iVar8 + 0xa4) + 0x18)) &&
               (local_1c = (byte *)(iVar8 + 0x40), *local_1c != 0x24)) {
              thunk_FUN_4a09dd34(*(undefined4 *)PTR_DAT_4a036378);
              iVar7 = *(int *)(local_18 + 0x24);
              uVar4 = (uint)*local_1c;
              local_28 = uVar4;
              iVar5 = thunk_FUN_4a0e6b6c(&local_28);
              if (uVar4 == 0x1d) {
                *(undefined4 *)(iVar7 + 0x18) = 3;
                uVar2 = 1;
              }
              else if (uVar4 == 0x1e) {
                uVar2 = 2;
                *(undefined4 *)(iVar7 + 0x18) = 2;
              }
              else if (uVar4 == 0x1f) {
                *(undefined4 *)(iVar7 + 0x18) = 1;
                uVar2 = 3;
              }
              else {
                if (uVar4 != 0x24) {
                  *(undefined1 *)(iVar7 + 0x12) = 0;
                  if (iVar5 == 4) {
                    *(undefined4 *)(iVar7 + 0x18) = 0;
                  }
                  else {
                    if (iVar5 == 8) {
                      uVar3 = 4;
                    }
                    else if (iVar5 == 0x104) {
                      uVar3 = 5;
                    }
                    else if (iVar5 == 0x108) {
                      uVar3 = 6;
                    }
                    else {
                      uVar3 = 0xffffffff;
                    }
                    *(undefined4 *)(iVar7 + 0x18) = uVar3;
                  }
                  goto LAB_4a0362d4;
                }
                *(undefined4 *)(iVar7 + 0x18) = 7;
                uVar2 = 0;
              }
              *(undefined1 *)(iVar7 + 0x12) = uVar2;
            }
LAB_4a0362d4:
            *(bool *)(iVar8 + 99) = 4 < *(int *)(*(int *)(local_18 + 0x24) + 0x18);
          }
        }
      }
      puVar1 = PTR_DAT_4a036374;
      uVar9 = uVar9 + 1;
    } while (uVar9 < 4);
    if (**(int **)PTR_DAT_4a036374 << 0xc < 0) {
      (*(int **)PTR_DAT_4a036374)[0x148] = *(int *)(param_1 + 0x1c);
      iVar8 = *(int *)puVar1;
      *(undefined4 *)(iVar8 + 0x524) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(iVar8 + 0x528) = *(undefined4 *)(param_1 + 0x24);
    }
    puVar6 = *(uint **)puVar1;
    uVar9 = *puVar6;
    if ((int)(uVar9 << 0xb) < 0) {
      if ((int)(uVar9 << 0x15) < 0) {
        *(short *)(puVar6 + 0x144) = *(short *)((int)puVar6 + 0x512) + *(short *)(param_1 + 0x1a);
      }
      else {
        *(short *)(puVar6 + 0x144) = *(short *)((int)puVar6 + 0x512) + *(short *)(param_1 + 0x18);
      }
    }
    if ((int)(uVar9 << 10) < 0) {
      uVar9 = 0;
      do {
        iVar5 = uVar9 * 4;
        iVar8 = iVar5 + param_1;
        *(undefined2 *)(puVar6 + uVar9 + 0x94) = *(undefined2 *)(iVar8 + 0x4c);
        uVar9 = uVar9 + 1;
        *(undefined2 *)((int)puVar6 + iVar5 + 0x252) = *(undefined2 *)(iVar8 + 0x4e);
      } while (uVar9 < 2);
    }
    if ((*(uint *)(param_1 + 0x10) & 0x1ffffff) >> 0x16 == 3) {
      uVar9 = *puVar6 | 0x20000;
    }
    else {
      uVar9 = *puVar6 & 0xfffdffff;
    }
    *puVar6 = uVar9;
  }
  return;
}



// Address: 4a036380

void FUN_4a036380(int param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_4a0363b0;
  if (param_1 != -1) {
    param_1 = FUN_4a03b0ac();
    param_1 = param_1 - *(int *)(*(int *)puVar1 + 0x2c8);
  }
  *(int *)(*(int *)puVar1 + 0x514) = param_1;
  return;
}



// Address: 4a0363b8

void FUN_4a0363b8(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)PTR_DAT_4a0363d4 + param_2 * 4;
  *(undefined4 *)(iVar1 + 0x42c) = 0;
  *(undefined4 *)(iVar1 + 0x468) = param_1;
  return;
}



// Address: 4a0363dc

void FUN_4a0363dc(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  thunk_FUN_4a05a68c();
  FUN_4a0396fc();
  FUN_4a040d64();
  puVar1 = PTR_DAT_4a03649c;
  if ((**(uint **)PTR_DAT_4a03649c & 0x1000000) != 0) {
    FUN_4a03f5e4(0);
    FUN_4a037ce4();
  }
  (**(code **)(PTR_DAT_4a0364a0 + 0x2c))();
  iVar2 = *(int *)puVar1;
  uVar4 = *(int *)(iVar2 + 0x578) + 1;
  *(uint *)(iVar2 + 0x578) = uVar4;
  if (uVar4 + (uint)((ulonglong)uVar4 * (ulonglong)DAT_4a0364a4 >> 0x23) * -10 == 0) {
    uVar5 = host_s3eTimerGetMs_arm();
    iVar2 = *(int *)puVar1;
    uVar4 = (uint)uVar5 - *(uint *)(iVar2 + 0x580);
    uVar3 = FUN_4a0008f8(uVar4 * 0x1000,
                         ((int)((ulonglong)uVar5 >> 0x20) -
                         (*(int *)(iVar2 + 0x584) + (uint)((uint)uVar5 < *(uint *)(iVar2 + 0x580))))
                         * 0x1000 | uVar4 >> 0x14,10,0);
    *(undefined8 *)(iVar2 + 0x580) = uVar5;
    *(undefined4 *)(iVar2 + 0x588) = uVar3;
    return;
  }
  return;
}



// Address: 4a0364a8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_4a0364a8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 auStack_124 [64];
  int local_24;
  int *piStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  piStack_20 = param_1;
  local_1c = param_2;
  uStack_18 = param_3;
  if (*(int *)(PTR_DAT_4a036588 + 8) != 0) {
    for (iVar3 = *(int *)(*(int *)(PTR_DAT_4a036588 + 8) + 4); iVar3 != 0;
        iVar3 = *(int *)(iVar3 + 4)) {
      FUN_4a1652d2(iVar3,param_1,local_1c,param_3);
    }
  }
  local_24 = FUN_4a1652ca(param_1,local_1c,param_3,*(undefined4 *)(*param_1 + 0xc));
  if (local_24 == 0) {
    if ((*(int *)PTR_DAT_4a036588 != 2) && (*(int *)(PTR_DAT_4a036588 + 8) != 0)) {
      for (iVar3 = *(int *)(*(int *)(PTR_DAT_4a036588 + 8) + 4); iVar3 != 0;
          iVar3 = *(int *)(iVar3 + 4)) {
        FUN_4a1652d2(iVar3,param_1,local_1c,param_3);
      }
    }
    FUN_4a0012bc(auStack_124,param_1[1]);
    if (*(int *)PTR_DAT_4a036588 == 0) {
      uVar1 = FUN_4a1652c6(param_1,*(undefined4 *)(*param_1 + 0x28));
      uVar2 = FUN_4a1652c6(param_1,*(undefined4 *)(*param_1 + 0x20));
      FUN_4a008004(PTR_s_Bucket___s__out_of_memory__Alloc_4a03658c,auStack_124,param_3,uVar2,uVar1);
      iVar3 = host_s3eDebugIsDebuggerPresent_thumb();
      if (iVar3 != 0) {
        _DAT_fffffff4 = 0;
      }
    }
  }
  else if (*(int *)(PTR_DAT_4a036588 + 8) != 0) {
    for (iVar3 = *(int *)(*(int *)(PTR_DAT_4a036588 + 8) + 4); iVar3 != 0;
        iVar3 = *(int *)(iVar3 + 4)) {
      auStack_124[0] = param_3;
      FUN_4a1652d2(iVar3,param_1,local_1c,param_1,local_24);
    }
  }
  return local_24;
}



// Address: 4a036590

undefined4 FUN_4a036590(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = FUN_4a03f4f8(param_1,&DAT_4a0365bc);
    if (iVar1 == 0) {
      return 0;
    }
    host_s3eFileClose_thumb();
  }
  FUN_4a0366f8(param_1,1,0);
  return 1;
}



// Address: 4a0365c0

void FUN_4a0365c0(void)

{
  int iVar1;
  
  iVar1 = FUN_4a036590();
  if (iVar1 != 0) {
    FUN_4a046724();
  }
  return;
}



// Address: 4a0365d4

void FUN_4a0365d4(char *param_1,int param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  uint local_28;
  char *pcStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int local_18;
  
  pcStack_24 = param_1;
  iStack_20 = param_2;
  uStack_1c = param_3;
  local_18 = param_4;
  while (bVar1 = param_2 != 0, param_2 = param_2 + -1, bVar1) {
    if (*PTR_DAT_4a036634 == '\0') {
      local_28 = (uint)(*param_1 != '\0');
      host_s3eFileWrite_thumb(&local_28,1,1,*(undefined4 *)(PTR_DAT_4a036634 + 8));
    }
    else {
      host_s3eFileRead_thumb(&local_28,1,1,*(undefined4 *)(PTR_DAT_4a036634 + 8));
      if ((char)local_28 == '\0') {
        *param_1 = '\0';
      }
      else {
        *param_1 = '\x01';
      }
      FUN_4a0515e4(1);
    }
    param_1 = param_1 + local_18;
  }
  return;
}



// Address: 4a036638

void FUN_4a036638(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (((param_3 == 8) && (param_4 == 1)) && (*(int *)(PTR_DAT_4a036698 + 0xbc) == 0)) {
    if (*PTR_DAT_4a036698 == '\0') {
      host_s3eFileWrite_thumb(param_1,1,param_2,*(undefined4 *)(PTR_DAT_4a036698 + 8),1);
    }
    else {
      host_s3eFileRead_thumb(param_1,1,param_2);
    }
    FUN_4a0515e4(param_2);
  }
  else {
    iVar1 = (int)(((uint)(param_3 + 8 >> 0x1f) >> 0x1d) + param_3 + 8) >> 3;
    if (*PTR_DAT_4a036698 == '\0') {
      FUN_4a056f94(param_1,iVar1,param_2,param_4,PTR_DAT_4a036698);
    }
    else {
      FUN_4a056f30(param_1,iVar1,param_2);
    }
  }
  return;
}



// Address: 4a03669c

void FUN_4a03669c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (((param_3 == 7) && (param_4 == 1)) && (*(int *)(PTR_DAT_4a0366f4 + 0xbc) == 0)) {
    if (*PTR_DAT_4a0366f4 == '\0') {
      host_s3eFileWrite_thumb(param_1,1,param_2,*(undefined4 *)(PTR_DAT_4a0366f4 + 8),1);
    }
    else {
      host_s3eFileRead_thumb(param_1,1,param_2);
    }
    FUN_4a0515e4(param_2);
  }
  else if (*PTR_DAT_4a0366f4 == '\0') {
    FUN_4a056f94(param_1,1,param_2,param_4,PTR_DAT_4a0366f4);
  }
  else {
    FUN_4a056f30(param_1,1,param_2);
  }
  return;
}



// Address: 4a0366f8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_4a0366f8(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 auStack_114 [256];
  
  puVar1 = PTR_DAT_4a036788;
  if (param_2 == 1) {
    puVar3 = &DAT_4a03678c;
  }
  else {
    puVar3 = &DAT_4a036790;
  }
  iVar2 = FUN_4a03f4f8(param_1,puVar3);
  *(int *)(puVar1 + 8) = iVar2;
  if (iVar2 == 0) {
    iVar2 = host_s3eConfigGetString_thumb(&DAT_4a0367a4,s_SysAppCaption_4a036794,auStack_114);
    pcVar5 = s_Did_you_include_this_file_in_you_4a0367a8;
    if (iVar2 != 0) {
      pcVar5 = &DAT_4a0367e0;
    }
    pcVar4 = &DAT_4a0367e4;
    if (param_2 != 1) {
      pcVar4 = s_write_4a0367ec;
    }
    FUN_4a008004(s_Cannot_open_file__s_for_serialis_4a0367f4,param_1,pcVar4,pcVar5);
    iVar2 = host_s3eDebugIsDebuggerPresent_thumb();
    if (iVar2 != 0) {
      _DAT_fffffff4 = 0;
    }
  }
  *puVar1 = param_2 == 1;
  puVar1 = PTR_DAT_4a036788;
  *(undefined4 *)(PTR_DAT_4a036788 + 0xbc) = 0;
  *(undefined4 *)(puVar1 + 0xb4) = 0;
  *(undefined4 *)(puVar1 + 0xb8) = 0;
  FUN_4a0012bc(puVar1 + 0xc,param_1);
  *(int *)PTR_DAT_4a036824 = *(int *)PTR_DAT_4a036824 + 1;
  return;
}



// Address: 4a036828

void FUN_4a036828(void)

{
  int iVar1;
  
  FUN_4a007ffa();
  iVar1 = *(int *)PTR_DAT_4a036850;
  *(int *)PTR_DAT_4a036850 = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    FUN_4a04ce00();
    FUN_4a0482c8();
  }
  return;
}



// Address: 4a036830

void FUN_4a036830(void)

{
  int iVar1;
  
  FUN_4a007ffa();
  iVar1 = *(int *)PTR_DAT_4a036850;
  *(int *)PTR_DAT_4a036850 = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    FUN_4a04ce00();
    FUN_4a0482c8();
  }
  return;
}



// Address: 4a036854

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a036854(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (param_1[1] == 0) {
    if (iVar2 == 9) {
      iVar2 = 2;
    }
    else if (iVar2 == 10) {
      iVar2 = 1;
    }
    else if (iVar2 == 0xb) {
      iVar2 = 5;
    }
    else if (iVar2 == 0xc) {
      iVar2 = 6;
    }
    else {
      iVar2 = 0;
    }
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a03697c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(PTR_DAT_4a036988 + 0x8c) + 0x14))();
      return;
    }
    return;
  }
  if (iVar2 == 0x7e) {
    iVar2 = FUN_4a0ff400();
    if (iVar2 != 0) {
      FUN_4a0ccc54(iVar2,DAT_4a03698c);
    }
  }
  else {
    if (iVar2 == 9) {
      iVar2 = 2;
    }
    else if (iVar2 == 10) {
      iVar2 = 1;
    }
    else if (iVar2 == 0xb) {
      iVar2 = 5;
    }
    else if (iVar2 == 0xc) {
      iVar2 = 6;
    }
    else {
      iVar2 = 0;
    }
    if (iVar2 != 0) {
      (**(code **)(**(int **)(PTR_DAT_4a036988 + 0x8c) + 0x10))();
    }
  }
  iVar2 = *param_1;
  if (iVar2 == 0x28) {
    *(undefined4 *)(*(int *)PTR_DAT_4a036990 + 4) = 0x3f800000;
    return;
  }
  if (iVar2 < 0x29) {
    if (iVar2 == 0x17) {
LAB_4a036930:
      iVar2 = *(int *)PTR_DAT_4a036990;
      uVar1 = FUN_4a171bb8(*(undefined4 *)(iVar2 + 4));
      *(undefined4 *)(iVar2 + 4) = uVar1;
      return;
    }
    if (iVar2 != 0x1a) {
      return;
    }
  }
  else {
    if (iVar2 == 0x29) goto LAB_4a036930;
    if (iVar2 != 0x2d) {
      return;
    }
  }
  iVar2 = *(int *)PTR_DAT_4a036990;
  uVar1 = FUN_4a17211c(*(undefined4 *)(iVar2 + 4));
  *(undefined4 *)(iVar2 + 4) = uVar1;
  return;
}



// Address: 4a036998

void FUN_4a036998(uint param_1,uint param_2,int *param_3,int *param_4)

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
  
  puVar3 = PTR_DAT_4a036b00;
  puVar2 = PTR_DAT_4a036afc;
  *(int **)(PTR_DAT_4a036afc + 8) = param_3;
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
  *(int *)(puVar2 + 0xc) = *param_4 - *param_3;
  *(int *)(puVar2 + 0x10) = param_4[1] - param_3[1];
  *(int *)(puVar2 + 0x14) = param_4[2] - param_3[2];
  *(int *)(puVar2 + 0x18) = param_4[3] - param_3[3];
  return;
}



// Address: 4a036b38

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a036b38(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  code *UNRECOVERED_JUMPTABLE_00;
  uint local_14;
  uint local_10;
  
  puVar7 = PTR_DAT_4a036d2c;
  **(undefined4 **)PTR_DAT_4a036d2c = *(undefined4 *)(param_1 + 4);
  puVar8 = PTR_DAT_4a036d30;
  iVar9 = *(int *)puVar7;
  *(undefined4 *)(iVar9 + 4) = **(undefined4 **)(param_1 + 8);
  iVar10 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(iVar10 + 4);
  *(undefined4 *)(iVar9 + 0xc) = *(undefined4 *)(iVar10 + 8);
  *(undefined4 *)(iVar9 + 0x10) = *(undefined4 *)(iVar10 + 0xc);
  iVar9 = *(int *)puVar7;
  *(undefined2 *)(iVar9 + 0x14) = *(undefined2 *)(*(int *)(param_1 + 8) + 0x10);
  *(int *)puVar8 = iVar9;
  *(undefined4 *)(iVar9 + 0x20) = *(undefined4 *)(param_1 + 0xc);
  iVar9 = *(int *)puVar7;
  *(undefined4 *)(iVar9 + 0x24) = **(undefined4 **)(param_1 + 0x10);
  iVar10 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(iVar9 + 0x28) = *(undefined4 *)(iVar10 + 4);
  *(undefined4 *)(iVar9 + 0x2c) = *(undefined4 *)(iVar10 + 8);
  *(undefined4 *)(iVar9 + 0x30) = *(undefined4 *)(iVar10 + 0xc);
  iVar9 = *(int *)puVar7;
  *(undefined2 *)(iVar9 + 0x34) = *(undefined2 *)(*(int *)(param_1 + 0x10) + 0x10);
  *(int *)(puVar8 + 4) = iVar9 + 0x20;
  iVar10 = *(int *)puVar8;
  uVar1 = *(ushort *)(iVar10 + 0x14);
  local_14 = (uint)uVar1;
  uVar2 = *(ushort *)(iVar9 + 0x34);
  local_10 = (uint)uVar2;
  if ((uVar1 & uVar2 & 0x3f) != 0) {
    return;
  }
  uVar1 = uVar1 | uVar2;
  if ((uVar1 & 0x400) == 0) {
    if ((uVar1 & 0x200) != 0) {
      FUN_4a00bce8((int)*(short *)(iVar10 + 4),(int)*(short *)(iVar10 + 6),
                   (int)*(short *)(iVar9 + 0x24),(int)*(short *)(iVar9 + 0x26));
      return;
    }
    if ((uVar1 != 0) && (iVar9 = FUN_4a02d0e0(&local_14), iVar9 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x4a036cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    sVar3 = *(short *)(*(int *)(puVar8 + 4) + 6);
    sVar4 = *(short *)(*(int *)(puVar8 + 4) + 4);
    sVar5 = *(short *)(*(int *)puVar8 + 6);
    sVar6 = *(short *)(*(int *)puVar8 + 4);
  }
  else {
    if (((uVar1 & 0xfbff) != 0) && (iVar9 = FUN_4a03832c(&local_14), iVar9 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x4a036c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    sVar3 = *(short *)(*(int *)(puVar8 + 4) + 6);
    sVar4 = *(short *)(*(int *)(puVar8 + 4) + 4);
    sVar5 = *(short *)(*(int *)puVar8 + 6);
    sVar6 = *(short *)(*(int *)puVar8 + 4);
  }
  FUN_4a00c8ac((int)sVar6,(int)sVar5,(int)sVar4,(int)sVar3);
  return;
}



// Address: 4a036d34

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a036d34(uint *param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  undefined *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int *piVar23;
  code *UNRECOVERED_JUMPTABLE_00;
  uint *puVar24;
  bool bVar25;
  
  puVar14 = PTR_LAB_4a036f90;
  puVar24 = param_1 + 1;
  iVar9 = *(int *)PTR_DAT_4a036f94;
  uVar6 = (*param_1 & 0x1ffffff) >> 0x13;
  uVar18 = 0x3f;
  uVar20 = 0;
  piVar4 = *(int **)(PTR_LAB_4a036f90 + 0x28);
  puVar16 = (uint *)(PTR_LAB_4a036f90 + 0xb4);
  uVar17 = uVar6;
  do {
    uVar17 = uVar17 - 1;
    puVar24 = puVar24 + 1;
    puVar10 = (undefined4 *)*puVar24;
    uVar1 = *(ushort *)(puVar10 + 4);
    uVar22 = (uint)uVar1;
    *(undefined4 *)(iVar9 + 4) = *puVar10;
    uVar18 = uVar18 & uVar22;
    *(undefined4 *)(iVar9 + 8) = puVar10[1];
    uVar20 = uVar20 | uVar22;
    *(undefined4 *)(iVar9 + 0xc) = puVar10[2];
    *(undefined4 *)(iVar9 + 0x10) = puVar10[3];
    *(ushort *)(iVar9 + 0x14) = uVar1;
    *piVar4 = iVar9;
    iVar9 = iVar9 + 0x20;
    *puVar16 = uVar22;
    piVar4 = piVar4 + 1;
    puVar16 = puVar16 + 1;
  } while (uVar17 != 0);
  if (uVar18 != 0) {
    return;
  }
  if ((uVar20 & 0x3f) != 0) {
    if ((*(uint *)(puVar14 + 0xb4) & 0x200) == 0) {
      if ((*(uint *)(puVar14 + 0xb4) & 0x400) == 0) {
        uVar6 = FUN_4a0581dc(8,uVar6,puVar14 + 0xb4);
      }
      else {
        uVar6 = FUN_4a02a41c();
      }
    }
    else {
      iVar9 = 0;
      if (uVar6 != 0) {
        do {
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)uVar6);
      }
      uVar6 = FUN_4a057b8c(8,uVar6,puVar14 + 0xb4);
    }
    if ((int)uVar6 < 3) {
                    /* WARNING: Could not recover jumptable at 0x4a036e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  puVar3 = PTR_FUN_4a036f98;
  puVar14 = PTR_LAB_4a036f90 + 0x1b4;
  iVar9 = (*(int **)(PTR_LAB_4a036f90 + 0x28))[uVar6 - 1];
  uVar17 = (int)*(short *)(iVar9 + 6) + 3U >> 3;
  piVar4 = *(int **)(PTR_LAB_4a036f90 + 0x28);
  uVar18 = uVar17;
  uVar20 = uVar17;
  puVar2 = PTR_LAB_4a036f90;
  while (uVar22 = uVar18, iVar8 = iVar9, PTR_LAB_4a036f90 = puVar2, uVar6 != 0) {
    uVar6 = uVar6 - 1;
    piVar13 = piVar4 + 1;
    iVar9 = *piVar4;
    uVar18 = (int)*(short *)(iVar9 + 6) + 3U >> 3;
    if (uVar17 < uVar18) {
      uVar17 = uVar18;
    }
    if (uVar18 < uVar20) {
      uVar20 = uVar18;
    }
    piVar4 = piVar13;
    if (uVar22 != uVar18) {
      iVar15 = iVar8;
      iVar19 = iVar9;
      uVar11 = uVar22;
      if (uVar22 > uVar18) {
        iVar15 = iVar9;
        iVar19 = iVar8;
        uVar11 = uVar18;
      }
      *(ushort *)(puVar14 + 0x18) = (ushort)(uVar22 <= uVar18);
      puVar2 = PTR_LAB_4a036f90;
      *(undefined4 *)(puVar14 + 0x1c) =
           *(undefined4 *)(*(int *)(PTR_LAB_4a036f90 + 0xb0) + uVar11 * 4);
      *(undefined **)(*(int *)(puVar2 + 0xb0) + uVar11 * 4) = puVar14;
      (*(code *)puVar3)(puVar14,iVar15,iVar19);
      puVar14 = puVar14 + 0x20;
      puVar2 = PTR_LAB_4a036f90;
    }
  }
  if (uVar17 == uVar20) {
                    /* WARNING: Could not recover jumptable at 0x4a036f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uVar6 = param_1[1];
  *(uint *)(puVar2 + 4) = uVar6;
  uVar18 = *param_1;
  *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -0x20;
  *(undefined4 *)(puVar2 + 0x68) = *(undefined4 *)(PTR_PTR_4a036f9c + (uVar18 & 0x1ff) * 4);
  iVar9 = *(int *)(puVar2 + 0x48);
  *(uint *)(puVar2 + 0x90) =
       (uint)(*(byte *)(iVar9 + ((uVar6 & 0xffffff) >> 0x13)) >> 1) |
       (uint)*(byte *)(iVar9 + ((uVar6 & 0xffff) >> 0xb)) << 5 |
       (*(byte *)(iVar9 + ((uVar6 & 0xff) >> 3)) >> 1 & 0x1fff9f) << 0xb |
       (uint)(byte)puVar2[7] << 0x18;
  puVar14 = PTR_LAB_4a01ce6c;
  iVar9 = (int)(uVar17 | uVar20 << 0x10) >> 0x10;
  piVar4 = (int *)(PTR_LAB_4a01ce6c + 0x38);
  iVar8 = *(int *)(PTR_LAB_4a01ce6c + 0xb0);
  piVar13 = (int *)(PTR_LAB_4a01ce6c + 0x40);
  *(int *)(PTR_LAB_4a01ce6c + 0x4c) = iVar9;
  *(int *)(puVar14 + 0x50) = *piVar13 + iVar9 * *piVar4 * 2;
  iVar19 = ((uVar17 & 0xffff) - 1) - iVar9;
  piVar13 = (int *)(puVar14 + 0xb4);
  iVar15 = 0;
  piVar4 = (int *)(iVar8 + iVar9 * 4);
  do {
    iVar9 = *piVar4;
    piVar5 = piVar4 + 1;
    *piVar4 = 0;
    iVar8 = iVar15;
    for (; iVar9 != 0; iVar9 = *(int *)(iVar9 + 0x1c)) {
      piVar13[iVar8] = iVar9;
      iVar8 = iVar8 + 1;
    }
    if (iVar8 == 2) {
      if (*(int *)*piVar13 <= **(int **)(puVar14 + 0xb8)) goto LAB_4a01cb34;
      do {
        iVar9 = *piVar13;
        *piVar13 = *(int *)(puVar14 + 0xb8);
        *(int *)(puVar14 + 0xb8) = iVar9;
LAB_4a01cb34:
        do {
          if ((*(ushort *)((int *)*piVar13 + 6) & 1) != 0) {
            iVar9 = *(int *)*piVar13 >> 0x12;
            if (0 < (**(int **)(puVar14 + 0xb8) >> 0x12) - iVar9) {
              iVar15 = (**(int **)(puVar14 + 0xb8) >> 0x12) - iVar9;
              *(int *)(puVar14 + 0x6c) = iVar15;
              *(int *)(puVar14 + 0x70) = *(int *)(puVar14 + 0x50) + iVar9 * 2;
              iVar9 = *(int *)(puVar14 + 0x60);
              if (iVar9 < 0) {
                host_s3eDeviceYield_arm(0x80000000);
                iVar9 = *(int *)(puVar14 + 100);
              }
              *(int *)(puVar14 + 0x60) = (iVar9 - iVar15) + -0x10;
              (**(code **)(puVar14 + 0x68))(puVar14 + 0x6c);
            }
          }
          bVar25 = iVar19 == 0;
          iVar19 = iVar19 + -1;
          *(int *)(puVar14 + 0x50) = *(int *)(puVar14 + 0x50) + *(int *)(puVar14 + 0x38) * 2;
          *(int *)(puVar14 + 0x4c) = *(int *)(puVar14 + 0x4c) + 1;
          if (bVar25) {
            return;
          }
          if (*piVar5 != 0) goto LAB_4a01cbe0;
          piVar4 = (int *)*piVar13;
          piVar5 = piVar5 + 1;
          *piVar4 = piVar4[1] + *piVar4;
          if ((*(ushort *)(piVar4 + 6) & 4) == 0) {
            piVar4[2] = piVar4[2] + piVar4[3];
          }
          piVar4 = *(int **)(puVar14 + 0xb8);
          *piVar4 = piVar4[1] + *piVar4;
          if ((*(ushort *)(piVar4 + 6) & 4) == 0) {
            piVar4[2] = piVar4[2] + piVar4[3];
          }
        } while (*(int *)*piVar13 <= **(int **)(puVar14 + 0xb8));
      } while( true );
    }
    iVar9 = 1;
    if (1 < iVar8) {
      do {
        puVar10 = (undefined4 *)piVar13[iVar9];
        piVar4 = (int *)*puVar10;
        if ((int)piVar4 < *(int *)piVar13[iVar9 + -1]) {
          iVar15 = iVar9 + -1;
          piVar7 = (int *)piVar13[iVar15];
          do {
            iVar12 = iVar15 + -1;
            piVar13[iVar15 + 1] = (int)piVar7;
            if ((iVar12 < 0) || (piVar7 = (int *)piVar13[iVar12], *piVar7 <= (int)piVar4)) break;
            piVar23 = piVar13 + iVar12;
            iVar15 = iVar15 + -2;
            bVar25 = iVar15 == 0;
            piVar23[1] = (int)piVar7;
            if (-1 < iVar15) {
              piVar7 = (int *)piVar13[iVar15];
              piVar23 = (int *)*piVar7;
              bVar25 = piVar23 == piVar4;
            }
            iVar12 = iVar15;
          } while (!bVar25 && (-1 < iVar15 && (int)piVar4 <= (int)piVar23));
          piVar13[iVar12 + 1] = (int)puVar10;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar8);
    }
    iVar9 = 0;
    if (1 < iVar8) {
      do {
        piVar4 = (int *)0x0;
        iVar15 = 0;
        for (; iVar9 < iVar8; iVar9 = iVar9 + 1) {
          if ((*(ushort *)(piVar13[iVar9] + 0x18) & 1) == 0) {
            iVar15 = iVar15 + -1;
          }
          else {
            iVar15 = iVar15 + 1;
          }
          if (iVar15 == 1) {
            piVar4 = (int *)piVar13[iVar9];
            iVar9 = iVar9 + 1;
            break;
          }
        }
        if (iVar8 <= iVar9) break;
        piVar7 = (int *)0x0;
        do {
          iVar12 = iVar9;
          if ((*(ushort *)(piVar13[iVar12] + 0x18) & 1) == 0) {
            iVar15 = iVar15 + -1;
          }
          else {
            iVar15 = iVar15 + 1;
          }
          if (iVar15 == 0) {
            piVar7 = (int *)piVar13[iVar12];
            break;
          }
          iVar9 = iVar12 + 1;
        } while (iVar12 + 1 < iVar8);
        iVar9 = iVar12 + 1;
        if (iVar8 < iVar9) break;
        if ((*(ushort *)(piVar4 + 6) & 1) != 0) {
          iVar15 = *piVar4 >> 0x12;
          if (0 < (*piVar7 >> 0x12) - iVar15) {
            iVar21 = (*piVar7 >> 0x12) - iVar15;
            *(int *)(puVar14 + 0x6c) = iVar21;
            *(int *)(puVar14 + 0x70) = *(int *)(puVar14 + 0x50) + iVar15 * 2;
            iVar15 = *(int *)(puVar14 + 0x60);
            if (iVar15 < 0) {
              host_s3eDeviceYield_arm(0x80000000);
              iVar15 = *(int *)(puVar14 + 100);
            }
            *(int *)(puVar14 + 0x60) = (iVar15 - iVar21) + -0x10;
            (**(code **)(puVar14 + 0x68))(puVar14 + 0x6c);
          }
        }
      } while (iVar12 + 2 < iVar8);
    }
    bVar25 = iVar19 == 0;
    iVar19 = iVar19 + -1;
    *(int *)(puVar14 + 0x50) = *(int *)(puVar14 + 0x50) + *(int *)(puVar14 + 0x38) * 2;
    *(int *)(puVar14 + 0x4c) = *(int *)(puVar14 + 0x4c) + 1;
    if (bVar25) {
      return;
    }
LAB_4a01cbe0:
    iVar12 = *(int *)(puVar14 + 0x4c);
    iVar15 = 0;
    iVar9 = 0;
    piVar4 = piVar5;
    if (0 < iVar8) {
      do {
        piVar5 = (int *)piVar13[iVar9];
        if (iVar12 < *(short *)((int)piVar5 + 0x1a)) {
          *piVar5 = piVar5[1] + *piVar5;
          if ((*(ushort *)(piVar5 + 6) & 4) == 0) {
            piVar5[2] = piVar5[2] + piVar5[3];
          }
          if (iVar15 != iVar9) {
            piVar13[iVar15] = piVar13[iVar9];
          }
          iVar15 = iVar15 + 1;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar8);
    }
  } while( true );
}



// Address: 4a036fa0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a036fa0(uint *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  int *piVar12;
  int iVar13;
  undefined *puVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 *puVar20;
  uint uVar21;
  int iVar22;
  int *piVar23;
  code *UNRECOVERED_JUMPTABLE_00;
  uint *puVar24;
  bool bVar25;
  
  puVar14 = PTR_LAB_4a0371c0;
  puVar9 = *(uint **)PTR_DAT_4a0371c4;
  uVar6 = (*param_1 & 0x1ffffff) >> 0x13;
  uVar18 = 0x3f;
  uVar19 = 0;
  puVar20 = *(undefined4 **)(PTR_LAB_4a0371c0 + 0x28);
  puVar15 = (uint *)(PTR_LAB_4a0371c0 + 0xb4);
  puVar24 = param_1 + 1;
  uVar17 = uVar6;
  do {
    uVar17 = uVar17 - 1;
    puVar11 = (uint *)puVar24[1];
    uVar2 = puVar11[4];
    uVar21 = (uint)(ushort)uVar2;
    *puVar9 = *puVar24;
    puVar9[1] = *puVar11;
    uVar18 = uVar18 & uVar21;
    puVar9[2] = puVar11[1];
    uVar19 = uVar19 | uVar21;
    puVar9[3] = puVar11[2];
    puVar9[4] = puVar11[3];
    *(ushort *)(puVar9 + 5) = (ushort)uVar2;
    *puVar20 = puVar9;
    puVar9 = puVar9 + 8;
    *puVar15 = uVar21;
    puVar20 = puVar20 + 1;
    puVar15 = puVar15 + 1;
    puVar24 = puVar24 + 2;
  } while (uVar17 != 0);
  if (uVar18 != 0) {
    return;
  }
  if ((uVar19 & 0x3f) != 0) {
    if ((*(uint *)(puVar14 + 0xb4) & 0x200) == 0) {
      if ((*(uint *)(puVar14 + 0xb4) & 0x400) == 0) {
        uVar6 = FUN_4a0581dc(10,uVar6,puVar14 + 0xb4);
      }
      else {
        uVar6 = FUN_4a02a41c();
      }
    }
    else {
      iVar10 = 0;
      if (uVar6 != 0) {
        do {
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)uVar6);
      }
      uVar6 = FUN_4a057b8c(10,uVar6,puVar14 + 0xb4);
    }
    if ((int)uVar6 < 3) {
                    /* WARNING: Could not recover jumptable at 0x4a0370c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  puVar3 = PTR_FUN_4a0371c8;
  puVar14 = PTR_LAB_4a0371c0 + 0x1b4;
  iVar10 = (*(int **)(PTR_LAB_4a0371c0 + 0x28))[uVar6 - 1];
  uVar17 = (int)*(short *)(iVar10 + 6) + 3U >> 3;
  piVar4 = *(int **)(PTR_LAB_4a0371c0 + 0x28);
  uVar18 = uVar17;
  uVar19 = uVar17;
  puVar1 = PTR_LAB_4a0371c0;
  while (uVar2 = uVar18, iVar8 = iVar10, PTR_LAB_4a0371c0 = puVar1, uVar6 != 0) {
    uVar6 = uVar6 - 1;
    piVar12 = piVar4 + 1;
    iVar10 = *piVar4;
    uVar18 = (int)*(short *)(iVar10 + 6) + 3U >> 3;
    if (uVar17 < uVar18) {
      uVar17 = uVar18;
    }
    if (uVar18 < uVar19) {
      uVar19 = uVar18;
    }
    piVar4 = piVar12;
    if (uVar2 != uVar18) {
      iVar13 = iVar8;
      iVar16 = iVar10;
      uVar21 = uVar2;
      if (uVar2 > uVar18) {
        iVar13 = iVar10;
        iVar16 = iVar8;
        uVar21 = uVar18;
      }
      *(ushort *)(puVar14 + 0x18) = (ushort)(uVar2 <= uVar18);
      puVar1 = PTR_LAB_4a0371c0;
      *(undefined4 *)(puVar14 + 0x3c) =
           *(undefined4 *)(*(int *)(PTR_LAB_4a0371c0 + 0xb0) + uVar21 * 4);
      *(undefined **)(*(int *)(puVar1 + 0xb0) + uVar21 * 4) = puVar14;
      (*(code *)puVar3)(puVar14,iVar13,iVar16);
      puVar14 = puVar14 + 0x40;
      puVar1 = PTR_LAB_4a0371c0;
    }
  }
  if (uVar17 == uVar19) {
                    /* WARNING: Could not recover jumptable at 0x4a037180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uVar6 = *param_1;
  *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -0x20;
  *(undefined4 *)(puVar1 + 0x68) = *(undefined4 *)(PTR_PTR_4a0371cc + (uVar6 & 0x1ff | 0x18) * 4);
  puVar14 = PTR_LAB_4a01d2ac;
  iVar10 = (int)(uVar17 | uVar19 << 0x10) >> 0x10;
  piVar4 = (int *)(PTR_LAB_4a01d2ac + 0x38);
  iVar8 = *(int *)(PTR_LAB_4a01d2ac + 0xb0);
  piVar12 = (int *)(PTR_LAB_4a01d2ac + 0x40);
  iVar13 = 0;
  *(int *)(PTR_LAB_4a01d2ac + 0x4c) = iVar10;
  *(int *)(puVar14 + 0x50) = *piVar12 + iVar10 * *piVar4 * 2;
  iVar16 = ((uVar17 & 0xffff) - 1) - iVar10;
  piVar12 = (int *)(puVar14 + 0xb4);
  piVar4 = (int *)(iVar8 + iVar10 * 4);
  do {
    iVar10 = *piVar4;
    piVar5 = piVar4 + 1;
    *piVar4 = 0;
    iVar8 = iVar13;
    for (; iVar10 != 0; iVar10 = *(int *)(iVar10 + 0x3c)) {
      piVar12[iVar8] = iVar10;
      iVar8 = iVar8 + 1;
    }
    if (iVar8 == 2) {
      if (*(int *)*piVar12 <= **(int **)(puVar14 + 0xb8)) goto LAB_4a01cfd0;
      do {
        iVar10 = *piVar12;
        *piVar12 = *(int *)(puVar14 + 0xb8);
        *(int *)(puVar14 + 0xb8) = iVar10;
LAB_4a01cfd0:
        do {
          piVar4 = (int *)*piVar12;
          if (((*(ushort *)(piVar4 + 6) & 1) != 0) &&
             (0 < (**(int **)(puVar14 + 0xb8) >> 0x12) - (*piVar4 >> 0x12))) {
            FUN_4a05c3c8(piVar4,*(int **)(puVar14 + 0xb8),0);
          }
          bVar25 = iVar16 == 0;
          iVar16 = iVar16 + -1;
          *(int *)(puVar14 + 0x50) = *(int *)(puVar14 + 0x50) + *(int *)(puVar14 + 0x38) * 2;
          *(int *)(puVar14 + 0x4c) = *(int *)(puVar14 + 0x4c) + 1;
          if (bVar25) {
            return;
          }
          if (*piVar5 != 0) goto LAB_4a01d02c;
          piVar4 = (int *)*piVar12;
          piVar5 = piVar5 + 1;
          *piVar4 = piVar4[1] + *piVar4;
          if (((*(ushort *)(piVar4 + 6) & 4) != 0) ||
             (piVar4[2] = piVar4[2] + piVar4[3], (*(ushort *)(piVar4 + 6) & 8) == 0)) {
            piVar4[7] = piVar4[7] + piVar4[0xb];
            piVar4[8] = piVar4[8] + piVar4[0xc];
            piVar4[9] = piVar4[9] + piVar4[0xd];
            piVar4[10] = piVar4[10] + piVar4[0xe];
          }
          piVar4 = *(int **)(puVar14 + 0xb8);
          *piVar4 = piVar4[1] + *piVar4;
          if (((*(ushort *)(piVar4 + 6) & 4) != 0) ||
             (piVar4[2] = piVar4[2] + piVar4[3], (*(ushort *)(piVar4 + 6) & 8) == 0)) {
            piVar4[7] = piVar4[7] + piVar4[0xb];
            piVar4[8] = piVar4[8] + piVar4[0xc];
            piVar4[9] = piVar4[9] + piVar4[0xd];
            piVar4[10] = piVar4[10] + piVar4[0xe];
          }
        } while (*(int *)*piVar12 <= **(int **)(puVar14 + 0xb8));
      } while( true );
    }
    iVar10 = 1;
    if (1 < iVar8) {
      do {
        puVar20 = (undefined4 *)piVar12[iVar10];
        piVar4 = (int *)*puVar20;
        if ((int)piVar4 < *(int *)piVar12[iVar10 + -1]) {
          iVar13 = iVar10 + -1;
          piVar7 = (int *)piVar12[iVar13];
          do {
            iVar22 = iVar13 + -1;
            piVar12[iVar13 + 1] = (int)piVar7;
            if ((iVar22 < 0) || (piVar7 = (int *)piVar12[iVar22], *piVar7 <= (int)piVar4)) break;
            piVar23 = piVar12 + iVar22;
            iVar13 = iVar13 + -2;
            bVar25 = iVar13 == 0;
            piVar23[1] = (int)piVar7;
            if (-1 < iVar13) {
              piVar7 = (int *)piVar12[iVar13];
              piVar23 = (int *)*piVar7;
              bVar25 = piVar23 == piVar4;
            }
            iVar22 = iVar13;
          } while (!bVar25 && (-1 < iVar13 && (int)piVar4 <= (int)piVar23));
          piVar12[iVar22 + 1] = (int)puVar20;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar8);
    }
    iVar10 = 0;
    if (1 < iVar8) {
      do {
        piVar4 = (int *)0x0;
        iVar13 = 0;
        for (; iVar10 < iVar8; iVar10 = iVar10 + 1) {
          if ((*(ushort *)(piVar12[iVar10] + 0x18) & 1) == 0) {
            iVar13 = iVar13 + -1;
          }
          else {
            iVar13 = iVar13 + 1;
          }
          if (iVar13 == 1) {
            piVar4 = (int *)piVar12[iVar10];
            iVar10 = iVar10 + 1;
            break;
          }
        }
        if (iVar8 <= iVar10) break;
        piVar7 = (int *)0x0;
        do {
          iVar22 = iVar10;
          if ((*(ushort *)(piVar12[iVar22] + 0x18) & 1) == 0) {
            iVar13 = iVar13 + -1;
          }
          else {
            iVar13 = iVar13 + 1;
          }
          if (iVar13 == 0) {
            piVar7 = (int *)piVar12[iVar22];
            break;
          }
          iVar10 = iVar22 + 1;
        } while (iVar22 + 1 < iVar8);
        iVar10 = iVar22 + 1;
        if (iVar8 < iVar10) break;
        if (((*(ushort *)(piVar4 + 6) & 1) != 0) && (0 < (*piVar7 >> 0x12) - (*piVar4 >> 0x12))) {
          FUN_4a05c3c8(piVar4,piVar7,0);
        }
      } while (iVar22 + 2 < iVar8);
    }
    bVar25 = iVar16 == 0;
    iVar16 = iVar16 + -1;
    *(int *)(puVar14 + 0x50) = *(int *)(puVar14 + 0x50) + *(int *)(puVar14 + 0x38) * 2;
    *(int *)(puVar14 + 0x4c) = *(int *)(puVar14 + 0x4c) + 1;
    if (bVar25) {
      return;
    }
LAB_4a01d02c:
    iVar22 = *(int *)(puVar14 + 0x4c);
    iVar13 = 0;
    iVar10 = 0;
    piVar4 = piVar5;
    if (0 < iVar8) {
      do {
        piVar5 = (int *)piVar12[iVar10];
        if (iVar22 < *(short *)((int)piVar5 + 0x1a)) {
          *piVar5 = *piVar5 + piVar5[1];
          if (((*(ushort *)(piVar5 + 6) & 4) != 0) ||
             (piVar5[2] = piVar5[2] + piVar5[3], (*(ushort *)(piVar5 + 6) & 8) == 0)) {
            piVar5[7] = piVar5[7] + piVar5[0xb];
            piVar5[8] = piVar5[8] + piVar5[0xc];
            piVar5[9] = piVar5[9] + piVar5[0xd];
            piVar5[10] = piVar5[10] + piVar5[0xe];
          }
          if (iVar13 != iVar10) {
            piVar12[iVar13] = piVar12[iVar10];
          }
          iVar13 = iVar13 + 1;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar8);
    }
  } while( true );
}



// Address: 4a0371d0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0371d0(uint *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint unaff_r10;
  int iVar17;
  uint *unaff_r11;
  int iVar18;
  code *UNRECOVERED_JUMPTABLE_00;
  int iVar19;
  bool bVar20;
  bool bVar21;
  int iStack_40;
  uint *local_34;
  uint local_30;
  int local_2c;
  int local_28;
  
  puVar1 = PTR_LAB_4a037638;
  iVar16 = (int)*(short *)((int)param_1 + 0x16);
  uVar7 = *param_1;
  iVar15 = (int)(short)param_1[5];
  local_28 = 1;
  local_2c = 1;
  if (iVar16 < 0) {
    iVar16 = -iVar16;
    local_28 = -1;
  }
  if (iVar15 < 0) {
    local_2c = -1;
  }
  if (iVar15 < 0) {
    iVar15 = -iVar15;
  }
  bVar20 = (uVar7 & 0x8000000) == 0;
  if (bVar20) {
    unaff_r10 = 0;
  }
  *(uint *)(PTR_LAB_4a037638 + 4) = param_1[2];
  puVar2 = PTR_DAT_4a03763c;
  if (!bVar20) {
    unaff_r10 = param_1[1];
    uVar7 = uVar7 | *(byte *)(unaff_r10 + 0x61);
    if ((*(uint *)(unaff_r10 + 0x34) & 0x40) == 0) {
      uVar7 = uVar7 | 0x100;
    }
  }
  local_30 = uVar7 & 0x1ff;
  bVar20 = (uVar7 & 0x8000000) == 0;
  if (bVar20) {
    unaff_r11 = (uint *)0x0;
  }
  iVar14 = *(short *)param_1[3] + 3 >> 3;
  local_34 = param_1 + -1;
  if (bVar20) {
    local_34 = unaff_r11;
  }
  iVar12 = *(int *)(puVar1 + 0x1c);
  iVar19 = *(int *)(puVar1 + 0x20);
  if (!bVar20) {
    unaff_r11 = (uint *)(uint)(ushort)local_34[5];
  }
  iVar17 = ((short *)param_1[3])[1] + 3 >> 3;
  iVar10 = *(int *)(puVar1 + 0x14);
  iVar18 = *(int *)(puVar1 + 0x18);
  if (!bVar20) {
    local_34 = (uint *)(uint)*(ushort *)((int)local_34 + 0x16);
  }
  bVar20 = SBORROW4(iVar14,iVar12);
  iVar4 = iVar14 - iVar12;
  if (iVar12 <= iVar14) {
    bVar20 = SBORROW4(iVar17,iVar10);
    iVar4 = iVar17 - iVar10;
  }
  if (iVar4 < 0 == bVar20) {
    iVar3 = iVar14 + iVar15;
    bVar21 = SBORROW4(iVar3,iVar19);
    iVar4 = iVar3 - iVar19;
    bVar20 = iVar3 == iVar19;
    if (iVar3 <= iVar19) {
      iVar3 = iVar17 + iVar16;
      bVar21 = SBORROW4(iVar3,iVar18);
      iVar4 = iVar3 - iVar18;
      bVar20 = iVar3 == iVar18;
    }
    if (!bVar20 && iVar4 < 0 == bVar21) goto LAB_4a0372b4;
  }
  else {
LAB_4a0372b4:
    bVar20 = SBORROW4(iVar14,iVar19);
    iVar4 = iVar14 - iVar19;
    if (iVar14 < iVar19) {
      bVar20 = SBORROW4(iVar17,iVar18);
      iVar4 = iVar17 - iVar18;
    }
    if (iVar4 < 0 == bVar20) {
      return;
    }
    iVar3 = iVar14 + iVar15;
    bVar21 = SBORROW4(iVar3,iVar12);
    iVar4 = iVar3 - iVar12;
    bVar20 = iVar3 == iVar12;
    if (iVar12 < iVar3) {
      iVar3 = iVar17 + iVar16;
      bVar21 = SBORROW4(iVar3,iVar10);
      iVar4 = iVar3 - iVar10;
      bVar20 = iVar3 == iVar10;
    }
    if (bVar20 || iVar4 < 0 != bVar21) {
      return;
    }
    iVar4 = iVar14 - iVar12;
    if (iVar4 < 0) {
      iVar15 = iVar15 + iVar4;
      unaff_r11 = (uint *)((int)unaff_r11 - iVar4 * local_2c);
      iVar14 = iVar12;
    }
    iVar12 = (iVar19 - iVar14) - iVar15;
    if (iVar12 < 0) {
      iVar15 = iVar15 + iVar12;
    }
    iVar12 = iVar17 - iVar10;
    if (iVar12 < 0) {
      iVar16 = iVar16 + iVar12;
      local_34 = (uint *)((int)local_34 - iVar12 * local_28);
      iVar17 = iVar10;
    }
    iVar12 = (iVar18 - iVar17) - iVar16;
    if (iVar12 < 0) {
      iVar16 = iVar16 + iVar12;
    }
  }
  if (iVar15 == 0 || iVar16 == 0) {
    return;
  }
  iStack_40 = 0;
  uVar7 = uVar7 & 7;
  if ((uVar7 == 1 || uVar7 == 2) || uVar7 == 5) {
    iVar12 = *(int *)(unaff_r10 + 0xa4);
    if (*(int *)(iVar12 + 4) == 0) {
      FUN_4a038b1c(iVar12);
    }
    *(short *)(iVar12 + 10) = *(short *)(iVar12 + 10) + 1;
    *(undefined4 *)(puVar2 + 0x20) = *(undefined4 *)(iVar12 + 4);
    if (*(int *)(iVar12 + 0x18) == 5) {
      bVar20 = iVar15 == 0x10;
      if (iVar15 < 0x11) {
        bVar20 = local_2c == 1;
      }
      bVar21 = false;
      if (bVar20) {
        bVar21 = *(short *)(iVar12 + 8) == -1;
      }
      if (bVar21) {
        local_30 = 0xc0;
      }
    }
    if (*(char *)(unaff_r10 + 99) != '\0') goto LAB_4a0373e4;
  }
  iStack_40 = (uint)(byte)PTR_LAB_4a037638[4] << 0x14;
LAB_4a0373e4:
  puVar1 = PTR_LAB_4a037638;
  uVar5 = *(undefined4 *)(unaff_r10 + 100);
  uVar8 = *(undefined4 *)(unaff_r10 + 0x68);
  uVar7 = (int)*(short *)(*(int *)(unaff_r10 + 0x58) + 0x18) >> 8;
  uVar6 = 0;
  if (uVar7 != 0) {
    uVar6 = 1;
    while( true ) {
      bVar20 = uVar7 >> 1 == 0;
      uVar9 = 0;
      if (!bVar20) {
        uVar6 = uVar6 + 1;
        uVar9 = uVar7 >> 2;
        bVar20 = uVar9 == 0;
      }
      if (bVar20) break;
      uVar6 = uVar6 + 1;
      uVar7 = uVar9;
    }
  }
  *(uint *)(PTR_LAB_4a037638 + 0x5c) = ~(*(uint *)(unaff_r10 + 0x34) >> 1) & 1;
  piVar13 = (int *)(puVar1 + 0x6c);
  *(undefined4 *)(puVar1 + 0x68) = *(undefined4 *)(PTR_PTR_4a037640 + local_30 * 4);
  *(undefined4 *)(puVar1 + 0x6c) = 0;
  iVar14 = iVar17 * *(int *)(puVar1 + 0x38) * 2 + iVar14 * 2 + *(int *)(puVar1 + 0x40);
  if (local_2c == -1) {
    iVar12 = (int)unaff_r11 * 0x100000 + -0x70000;
  }
  else {
    iVar12 = (int)unaff_r11 * 0x100000 + 0x70000;
  }
  if (local_28 == -1) {
    iVar19 = (int)local_34 * 0x100000 + -0x70000;
  }
  else {
    iVar19 = (int)local_34 * 0x100000 + 0x70000;
  }
  if (local_30 != 0xc0) {
    iVar17 = 0;
    if (0 < iVar16) {
      do {
        *(int *)(puVar1 + 0x70) = iVar14;
        *piVar13 = iVar15;
        *(int *)(puVar1 + 0x90) = iStack_40;
        *(int *)(puVar1 + 0x78) = iVar19 << (uVar6 & 0xff);
        *(int *)(puVar1 + 0x74) = iVar12;
        *(int *)(puVar1 + 0x7c) = local_2c << 0x14;
        *(undefined4 *)(puVar1 + 0x80) = 0;
        *(undefined4 *)(puVar1 + 0x84) = uVar5;
        *(undefined4 *)(puVar1 + 0x88) = uVar8;
        iVar10 = *(int *)(PTR_LAB_4a037638 + 0x60);
        if (iVar10 < 0) {
          host_s3eDeviceYield_arm(0x80000000);
          iVar10 = *(int *)(PTR_LAB_4a037638 + 100);
        }
        puVar2 = PTR_LAB_4a037638;
        *(int *)(PTR_LAB_4a037638 + 0x60) = iVar10 - iVar15;
        (**(code **)(puVar2 + 0x68))(piVar13);
        iVar17 = iVar17 + 1;
        iVar19 = iVar19 + local_28 * 0x100000;
        iVar14 = iVar14 + *(int *)(PTR_LAB_4a037638 + 0x38) * 2;
      } while (iVar17 < iVar16);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a03758c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uVar11 = *(undefined4 *)(unaff_r10 + 0x68);
  uVar8 = *(undefined4 *)(*(int *)(unaff_r10 + 0xa4) + 4);
  iVar17 = 0;
  if (0 < iVar16) {
    do {
      *(int *)(puVar1 + 0x78) = iVar19 << (uVar6 & 0xff);
      *(int *)(puVar1 + 0x70) = iVar14;
      *(int *)(puVar1 + 0x74) = iVar12;
      *piVar13 = iVar15;
      *(undefined4 *)(puVar1 + 0x88) = uVar11;
      *(undefined4 *)(puVar1 + 0x8c) = uVar8;
      *(undefined4 *)(puVar1 + 0x84) = uVar5;
      iVar10 = *(int *)(PTR_LAB_4a037638 + 0x60);
      if (iVar10 < 0) {
        host_s3eDeviceYield_arm(0x80000000);
        iVar10 = *(int *)(PTR_LAB_4a037638 + 100);
      }
      puVar2 = PTR_LAB_4a037638;
      *(int *)(PTR_LAB_4a037638 + 0x60) = iVar10 - iVar15;
      (**(code **)(puVar2 + 0x68))(piVar13);
      iVar17 = iVar17 + 1;
      iVar19 = iVar19 + local_28 * 0x100000;
      iVar14 = iVar14 + *(int *)(PTR_LAB_4a037638 + 0x38) * 2;
    } while (iVar17 < iVar16);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a0374e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



// Address: 4a037644

void FUN_4a037644(byte *param_1,int param_2,int *param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  byte *local_24;
  uint uVar6;
  
  cVar1 = (char)param_3[2];
  if (cVar1 == '\x04') {
    uVar2 = *param_3 + 1U >> 1;
  }
  else if (cVar1 == '\x02') {
    uVar2 = *param_3 + 3U >> 2;
  }
  else {
    if (cVar1 != '\x01') {
      return;
    }
    uVar2 = *param_3 + 7U >> 3;
  }
  local_24 = param_1;
  for (uVar3 = 0; uVar3 < (uint)param_3[1]; uVar3 = uVar3 + 1) {
    pbVar7 = local_24;
    for (uVar8 = 0; uVar8 < uVar2; uVar8 = uVar8 + 1) {
      cVar1 = (char)param_3[2];
      if (cVar1 == '\x01') {
        uVar9 = 0x80;
        uVar4 = 0;
        do {
          if ((uVar4 & 1) == 0) {
            uVar6 = *pbVar7 & uVar9;
            uVar5 = (undefined1)uVar6;
            if (uVar6 != 0) {
              uVar5 = 1;
            }
            *PTR_DAT_4a03774c = uVar5;
          }
          else {
            if ((*pbVar7 & uVar9) == 0) {
              bVar10 = 0;
            }
            else {
              bVar10 = 0x10;
            }
            *(byte *)(param_2 + ((int)uVar4 >> 1) + uVar8 * 4) = bVar10 | *PTR_DAT_4a03774c;
          }
          uVar9 = uVar9 >> 1;
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < 8);
      }
      else if (cVar1 == '\x02') {
        uVar9 = 0xc0;
        uVar4 = 0;
        do {
          if ((uVar4 & 1) == 0) {
            PTR_DAT_4a03774c[1] = (char)((*pbVar7 & uVar9) >> (uVar4 * -2 + 6 & 0xff));
          }
          else {
            *(byte *)(param_2 + ((int)uVar4 >> 1) + uVar8 * 2) =
                 (byte)(((*pbVar7 & uVar9) >> (uVar4 * -2 + 6 & 0xff)) << 4) | PTR_DAT_4a03774c[1];
          }
          uVar9 = uVar9 >> 2;
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < 4);
      }
      else if (cVar1 == '\x04') {
        *(byte *)(param_2 + uVar8) = *pbVar7 >> 4 | *pbVar7 << 4;
      }
      pbVar7 = pbVar7 + 1;
    }
    local_24 = local_24 + uVar2;
    param_2 = (uint)*(ushort *)(param_4 + 0x14) + param_2;
  }
  return;
}



// Address: 4a037764

void FUN_4a037764(int *param_1,undefined2 param_2,undefined2 param_3)

{
  *(undefined2 *)*param_1 = param_2;
  *(undefined2 *)(*param_1 + 2) = param_3;
  *param_1 = *param_1 + 4;
  return;
}



// Address: 4a037774

void FUN_4a037774(byte param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_4a037790;
  if (PTR_DAT_4a037790[4] != '\0') {
    PTR_DAT_4a037790[5] = param_1 ^ 1;
    puVar1[6] = param_1;
  }
  return;
}



// Address: 4a037794

void FUN_4a037794(int param_1,int *param_2)

{
  char cVar1;
  undefined *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  puVar2 = PTR_DAT_4a0378bc;
  if (*param_2 != 0) {
    puVar3 = *(uint **)PTR_DAT_4a0378bc;
    uVar5 = *puVar3;
    *puVar3 = uVar5 & 0xffffc7ff;
    uVar7 = puVar3[0xe3];
    thunk_FUN_4a050b9c();
    iVar4 = *(int *)puVar2;
    *(undefined2 *)(iVar4 + 600) = 0;
    *(undefined2 *)(iVar4 + 0x25a) = 0;
    cVar1 = PTR_DAT_4a0378c0[1];
    for (uVar6 = (uint)(cVar1 == '\0'); (int)uVar6 < 2; uVar6 = uVar6 + 1) {
      *(uint *)(*(int *)PTR_DAT_4a0378bc + 0x38c) = uVar7 + param_1 * 0x30;
      FUN_4a1652ca(uVar7,*param_2 << 2,3,*(undefined4 *)(PTR_DAT_4a0378c4 + 0x14));
      thunk_FUN_4a0363b8(param_1 * 0x10 + uVar7,0);
      thunk_FUN_4a03bf40(0);
      if (uVar6 == 0) {
        *(undefined4 *)(*(int *)(PTR_DAT_4a0378c0 + 0x2c) + 0x2c) = 0;
LAB_4a037852:
        thunk_FUN_4a0397f0(param_1 * 0x20 + uVar7,*param_2 << 2);
      }
      else {
        *(undefined4 *)(*(int *)(PTR_DAT_4a0378c0 + 0x2c) + 0x2c) =
             *(undefined4 *)(PTR_DAT_4a0378c0 + 0x28);
        if ((cVar1 == '\0') != 0) goto LAB_4a037852;
        thunk_FUN_4a0397f0(0);
        *(undefined4 *)(*(int *)(PTR_DAT_4a0378c0 + 0x2c) + 0x20) = 0xff000000;
      }
      FUN_4a0361cc(*(undefined4 *)(PTR_DAT_4a0378c0 + 0x2c));
      iVar4 = *param_2;
      if ((-1 < *(int *)(*(int *)PTR_DAT_4a0378bc + 4) << 0x14) && (iVar4 * 4 != 0)) {
        *(undefined1 *)(*(int *)PTR_DAT_4a0378bc + 0x680) = 1;
        FUN_4a1652ca(3,0,iVar4 * 4,*(undefined4 *)(PTR_DAT_4a0378c4 + 0x24));
      }
      thunk_FUN_4a05a618();
    }
    puVar3 = *(uint **)PTR_DAT_4a0378bc;
    puVar3[0xe3] = uVar7;
    *puVar3 = *puVar3 | uVar5 & 0x3800;
    *param_2 = 0;
  }
  return;
}



// Address: 4a0378c8

uint FUN_4a0378c8(uint param_1)

{
  int iVar1;
  uint uVar2;
  byte local_10;
  byte bStack_f;
  byte bStack_e;
  
  iVar1 = host_s3eSurfaceGetInt_thumb(3);
  iVar1 = iVar1 + DAT_4a037930;
  local_10 = (byte)param_1;
  bStack_f = (byte)(param_1 >> 8);
  bStack_e = (byte)(param_1 >> 0x10);
  if (iVar1 == 0) {
    uVar2 = (uint)(local_10 >> 4) << 8 | (uint)(bStack_f >> 4) << 4 | (uint)(bStack_e >> 4);
  }
  else {
    if (iVar1 == 1) {
      uVar2 = (uint)(local_10 >> 3) << 0xb;
      bStack_f = bStack_f >> 2;
    }
    else {
      if (iVar1 != 2) {
        if (iVar1 == 0x24) {
          return (param_1 & 0xff) * 0x10000 - 0x1000000 | (uint)bStack_f << 8 | (uint)bStack_e;
        }
        return 0;
      }
      uVar2 = (uint)(local_10 >> 3) << 10;
      bStack_f = bStack_f >> 3;
    }
    uVar2 = uVar2 | (uint)bStack_f << 5 | (uint)(bStack_e >> 3);
  }
  return uVar2;
}



// Address: 4a037934

void FUN_4a037934(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [20];
  
  puVar1 = PTR_DAT_4a037cc0;
  if (*(int *)PTR_DAT_4a037cc0 != 0) {
    FUN_4a05a68c();
    puVar3 = *(uint **)puVar1;
    puVar3[1] = puVar3[1] & 0xffffffef;
    *puVar3 = (*puVar3 & DAT_4a037cc4) + 0x380000;
    puVar3[0x164] = 0;
    FUN_4a0d3f10(puVar3 + 0x58,PTR_DAT_4a037cc8);
    FUN_4a0d3f10(*(int *)puVar1 + 0x130,PTR_DAT_4a037cc8);
    FUN_4a0d3f10(*(int *)puVar1 + 400,PTR_DAT_4a037cc8);
    FUN_4a0d3f10(*(int *)puVar1 + 0x1c0,PTR_DAT_4a037cc8);
    FUN_4a0d3f10(*(int *)puVar1 + 0x1f0,PTR_DAT_4a037cc8);
    FUN_4a0d3f10(*(int *)puVar1 + 0x220,PTR_DAT_4a037cc8);
    FUN_4a0d3f10(*(int *)puVar1 + 0x1f0,PTR_DAT_4a037cc8);
    FUN_4a0d3f10(*(int *)puVar1 + 0x220,PTR_DAT_4a037cc8);
    thunk_FUN_4a03f65c(PTR_DAT_4a037ccc,0);
    FUN_4a0cff80(*(int *)puVar1 + 0x40,PTR_DAT_4a037ccc);
    FUN_4a0cff80(*(int *)puVar1 + 0x10,PTR_DAT_4a037ccc);
    FUN_4a0cff80(*(int *)puVar1 + 0x70,PTR_DAT_4a037ccc);
    FUN_4a0cff80(*(int *)puVar1 + 0xa0,PTR_DAT_4a037ccc);
    FUN_4a0cff80(*(int *)puVar1 + 0xd0,PTR_DAT_4a037ccc);
    FUN_4a0cff80(*(int *)puVar1 + 0x100,PTR_DAT_4a037ccc);
    FUN_4a0cff80(*(int *)puVar1 + 0xd0,PTR_DAT_4a037ccc);
    FUN_4a0cff80(*(int *)puVar1 + 0x100,PTR_DAT_4a037ccc);
    puVar2 = PTR_DAT_4a037cd0;
    iVar4 = *(int *)puVar1;
    *(undefined2 *)(iVar4 + 0x250) = *(undefined2 *)PTR_DAT_4a037cd0;
    *(undefined2 *)(iVar4 + 0x252) = *(undefined2 *)(puVar2 + 2);
    iVar4 = *(int *)puVar1;
    *(undefined2 *)(iVar4 + 0x254) = *(undefined2 *)puVar2;
    *(undefined2 *)(iVar4 + 0x256) = *(undefined2 *)(puVar2 + 2);
    iVar4 = *(int *)puVar1;
    *(undefined2 *)(iVar4 + 600) = *(undefined2 *)puVar2;
    *(undefined2 *)(iVar4 + 0x25a) = *(undefined2 *)(puVar2 + 2);
    puVar2 = PTR_DAT_4a037cd4;
    iVar4 = *(int *)puVar1;
    *(undefined4 *)(iVar4 + 0x25c) = *(undefined4 *)PTR_DAT_4a037cd4;
    *(undefined4 *)(iVar4 + 0x260) = *(undefined4 *)(puVar2 + 4);
    *(undefined4 *)(iVar4 + 0x264) = *(undefined4 *)(puVar2 + 8);
    FUN_4a0cff80(*(int *)puVar1 + 0x268,PTR_DAT_4a037ccc);
    FUN_4a0cff80(*(int *)puVar1 + 0x298,PTR_DAT_4a037ccc);
    thunk_FUN_4a03f65c(PTR_DAT_4a037ccc,0);
    iVar4 = *(int *)puVar1;
    *(undefined4 *)(iVar4 + 0x2c8) = 0x20;
    *(undefined4 *)(iVar4 + 0x2d8) = 0;
    *(undefined4 *)(iVar4 + 0x2cc) = 0x3000;
    *(undefined4 *)(iVar4 + 0x2dc) = 0xa0;
    *(undefined4 *)(iVar4 + 0x35c) = 0;
    host_s3eSurfaceGetInt_thumb(0xb);
    iVar4 = *(int *)puVar1;
    *(undefined4 *)(iVar4 + 0x414) = 0;
    *(undefined4 *)(iVar4 + 0x3ec) = 0;
    *(undefined4 *)(iVar4 + 0x3f0) = 0;
    *(undefined4 *)(iVar4 + 0x3f4) = 0;
    iVar4 = *(int *)puVar1;
    *(undefined4 *)(iVar4 + 0x400) = 0;
    *(undefined4 *)(iVar4 + 0x338) = 0;
    *(undefined4 *)(iVar4 + 0x458) = 0;
    *(undefined4 *)(iVar4 + 0x45c) = 0;
    *(undefined4 *)(iVar4 + 0x460) = 0;
    *(undefined4 *)(iVar4 + 0x464) = 0;
    *(undefined4 *)(iVar4 + 0x468) = 0;
    *(undefined4 *)(iVar4 + 0x46c) = 0;
    *(undefined4 *)(iVar4 + 0x470) = 0;
    *(undefined2 *)(iVar4 + 0x43c) = 0;
    *(undefined2 *)(iVar4 + 0x43e) = 0;
    *(undefined4 *)(iVar4 + 0x440) = 0;
    *(undefined4 *)(iVar4 + 0x444) = 0;
    *(undefined4 *)(iVar4 + 0x448) = 0;
    *(undefined4 *)(iVar4 + 0x454) = 0;
    *(undefined4 *)(iVar4 + 0x474) = 0;
    *(undefined4 *)(iVar4 + 0x478) = 0;
    *(undefined4 *)(iVar4 + 0x41c) = 0;
    *(undefined4 *)(iVar4 + 0x420) = 0;
    *(undefined4 *)(iVar4 + 0x424) = 0;
    *(undefined4 *)(iVar4 + 0x428) = 0;
    *(undefined4 *)(iVar4 + 0x42c) = 0;
    *(undefined4 *)(iVar4 + 0x430) = 0;
    *(undefined4 *)(iVar4 + 0x434) = 0;
    *(undefined4 *)(iVar4 + 0x44c) = 0;
    *(undefined4 *)(iVar4 + 0x450) = 0;
    *(undefined4 *)(iVar4 + 0x47c) = 0;
    *(undefined4 *)(iVar4 + 0x480) = 0;
    *(undefined4 *)(iVar4 + 0x494) = 0;
    *(undefined4 *)(iVar4 + 0x498) = 0;
    *(undefined4 *)(iVar4 + 0x49c) = 0;
    *(undefined4 *)(iVar4 + 0x4a0) = 0;
    *(undefined2 *)(iVar4 + 0x4a4) = 0;
    *(undefined2 *)(iVar4 + 0x4a6) = 0;
    *(undefined1 *)(iVar4 + 0x4a8) = 0;
    *(undefined1 *)(iVar4 + 0x4a9) = 0;
    *(undefined1 *)(iVar4 + 0x4aa) = 0;
    *(undefined1 *)(iVar4 + 0x4ab) = 0;
    *(undefined4 *)(iVar4 + 0x4c0) = 3;
    *(undefined4 *)(iVar4 + 0x4c4) = 1;
    *(undefined4 *)(iVar4 + 0x4c8) = 1;
    *(undefined4 *)(iVar4 + 0x4cc) = 0;
    *(undefined4 *)(iVar4 + 0x514) = 0xffffffff;
    *(undefined2 *)(iVar4 + 0x4ac) = 0xffff;
    *(undefined2 *)(iVar4 + 0x4ae) = 0xffff;
    *(undefined4 *)(iVar4 + 0x4b0) = 0;
    *(undefined4 *)(iVar4 + 0x4b4) = 0;
    *(undefined2 *)(iVar4 + 0x518) = 10;
    *(undefined4 *)(iVar4 + 0x358) = 0;
    *(undefined4 *)(iVar4 + 0x354) = 0;
    thunk_FUN_4a0360f8(0x80,0x80,0xff,0xff);
    iVar4 = *(int *)puVar1;
    *(undefined1 *)(iVar4 + 0x520) = 0;
    *(undefined1 *)(iVar4 + 0x521) = 0;
    *(undefined1 *)(iVar4 + 0x522) = 0;
    *(undefined1 *)(iVar4 + 0x523) = 0;
    puVar5 = (undefined1 *)(*(int *)puVar1 + DAT_4a037cd8);
    *puVar5 = 0x80;
    puVar5[1] = 0x80;
    puVar5[2] = 0x80;
    puVar5[3] = 0xff;
    iVar4 = *(int *)puVar1;
    *(undefined1 *)(iVar4 + 0x528) = 0;
    *(undefined1 *)(iVar4 + 0x529) = 0;
    *(undefined1 *)(iVar4 + 0x52a) = 0;
    *(undefined1 *)(iVar4 + 0x52b) = 0;
    iVar4 = DAT_4a037cd8;
    puVar5 = (undefined1 *)(*(int *)puVar1 + DAT_4a037cd8 + 0x38);
    *puVar5 = 0xff;
    puVar5[1] = 0xff;
    puVar5[2] = 0xff;
    puVar5[3] = 0xff;
    puVar5 = (undefined1 *)(*(int *)puVar1 + iVar4 + 0x3c);
    *puVar5 = 0xff;
    puVar5[1] = 0xff;
    puVar5[2] = 0xff;
    puVar5[3] = 0xff;
    puVar5 = (undefined1 *)(*(int *)puVar1 + iVar4 + 0x40);
    *puVar5 = 0xff;
    puVar5[1] = 0xff;
    puVar5[2] = 0xff;
    puVar5[3] = 0xff;
    puVar2 = PTR_DAT_4a037cd4;
    puVar6 = (undefined2 *)(*(int *)puVar1 + iVar4 + 0x44);
    *puVar6 = (short)*(undefined4 *)PTR_DAT_4a037cd4;
    puVar6[1] = (short)*(undefined4 *)(puVar2 + 4);
    puVar6[2] = (short)*(undefined4 *)(puVar2 + 8);
    thunk_FUN_4a000f84(auStack_30,puVar6,6);
    puVar3 = *(uint **)puVar1;
    *puVar3 = *puVar3 & 0xffff87ff;
    puVar3[0x19a] = 2;
    for (uVar7 = 0; uVar7 < *(uint *)((int)puVar3 + DAT_4a037cd8 + -0x24); uVar7 = uVar7 + 1) {
    }
    *(undefined4 *)((int)puVar3 + DAT_4a037cd8 + -0x24) = 0;
    FUN_4a16f710();
    FUN_4a0921f0(*(int *)puVar1 + DAT_4a037cd8 + 0x78);
    FUN_4a03be0c(auStack_28);
    if (*(char *)(*(int *)puVar1 + 0x5c0) != '\0') {
      host_s3eSurfaceSetup_thumb(DAT_4a037cdc,0,0,4);
      FUN_4a03be0c(auStack_28);
      iVar4 = host_s3eSurfaceGetInt_thumb(0xb);
      if ((((iVar4 == 0) || (iVar4 == 1)) || (iVar4 == 2)) || (iVar4 == 3)) {
        thunk_FUN_4a040d20();
      }
    }
    FUN_4a04a244(auStack_28);
    *PTR_DAT_4a037ce0 = 1;
    FUN_4a04ca6c();
    *(uint *)(*(int *)puVar1 + 4) = *(uint *)(*(int *)puVar1 + 4) | 0x80;
    FUN_4a047ea8();
    FUN_4a00e4d4();
    thunk_FUN_4a036380(0xffffffff);
    thunk_FUN_4a050b9c();
  }
  return;
}



// Address: 4a037ce4

void FUN_4a037ce4(void)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined *puVar6;
  undefined *puVar7;
  int *piVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 uVar11;
  short *psVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  short *psVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  undefined1 uStack_9c;
  undefined1 uStack_9b;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  undefined4 uStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  int iStack_78;
  int iStack_74;
  uint uStack_70;
  int iStack_6c;
  uint uStack_68;
  uint uStack_64;
  int iStack_60;
  int iStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  uint uStack_44;
  int iStack_40;
  int iStack_3c;
  uint uStack_38;
  uint uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  uint uStack_1c;
  uint uStack_18;
  
  puVar6 = PTR_DAT_4a0380ec;
  if (*PTR_DAT_4a0380ec != '\0') {
    return;
  }
  if (*(int *)(PTR_DAT_4a0380ec + 0x20) == 0) {
    return;
  }
  *PTR_DAT_4a0380ec = 1;
  puVar7 = PTR_DAT_4a0380f0;
  uStack_18 = 0;
  uStack_1c = 0;
  iStack_20 = 0;
  piVar8 = *(int **)PTR_DAT_4a0380f0;
  iStack_24 = piVar8[0x12d];
  iStack_28 = *piVar8;
  iStack_2c = piVar8[0x164];
  if (iStack_28 << 0x15 < 0) {
    if (*(int *)(puVar6 + 0x28) == 0) {
      FUN_4a03524c();
    }
    else if ((*(uint *)(*(int *)(puVar6 + 0x28) + 0x34) & 1) == 0) {
      return;
    }
    FUN_4a05a68c();
    iVar14 = *(int *)puVar7;
    *(int *)(iVar14 + 0x388) = *(int *)(iVar14 + 0x38c);
    *(int *)(iVar14 + 0x38c) = *(int *)(iVar14 + 0x38c) + 0x58;
    iStack_20 = FUN_4a069e28();
    *(undefined4 *)(iStack_20 + 0x2c) = *(undefined4 *)(puVar6 + 0x28);
    *(undefined1 *)(iStack_20 + 0x17) = 0x80;
    FUN_4a069994(iStack_20,5);
    uVar9 = *(uint *)(iStack_20 + 0x10);
    *(uint *)(iStack_20 + 0x10) = uVar9 & 0xfffffffc;
    *(uint *)(iStack_20 + 0x10) = uVar9 & 0xffffff7c;
    *(int *)(puVar6 + 0x2c) = iStack_20;
    FUN_4a0458c0(0);
    puVar10 = *(uint **)puVar7;
    *puVar10 = *puVar10 & 0xffff87ff;
    puVar10[0x164] = 0;
    FUN_4a0361cc(iStack_20);
    piVar8 = *(int **)puVar7;
    uVar9 = thunk_FUN_4a0015f0((piVar8[0xe0] - (piVar8[0xe3] - piVar8[0xe1])) + DAT_4a0380f4,0x60);
    if (-1 < *piVar8 << 0x17) {
      iVar18 = piVar8[0xdb];
      iVar14 = thunk_FUN_4a0015f0(piVar8[0xdf] - piVar8[0xdc],0x14);
      if (iVar18 - iVar14 <= (int)uVar9) {
        uVar9 = iVar18 - iVar14;
      }
    }
    uStack_18 = uVar9;
    if (*(uint *)PTR_DAT_4a0380f8 >> 2 <= uVar9) {
      uStack_18 = *(uint *)PTR_DAT_4a0380f8 >> 2;
    }
  }
  thunk_FUN_4a03f51c(&iStack_40);
  uVar9 = (uStack_34 & 0x7f) >> 4;
  *(uint *)(puVar6 + 0x24) = uVar9;
  uStack_44 = uStack_38;
  iVar14 = *(int *)(*(int *)PTR_DAT_4a0380f0 + 0x354);
  uStack_48 = uVar9;
  if (iVar14 != 0) {
    if (iVar14 == 1) {
      iStack_30 = iStack_30 + uVar9 * (iStack_40 + -1);
      uStack_48 = uStack_38;
    }
    else {
      if (iVar14 != 2) {
        if (iVar14 == 3) {
          uStack_48 = -uStack_38;
          iStack_30 = iStack_30 + uStack_38 * (iStack_3c + -1);
          uStack_44 = uVar9;
        }
        goto LAB_4a037e7c;
      }
      uStack_48 = -uVar9;
      iStack_30 = iStack_30 + uStack_38 * (iStack_3c + -1) + uVar9 * (iStack_40 + -1);
      uVar9 = uStack_38;
    }
    uStack_44 = -uVar9;
  }
LAB_4a037e7c:
  uVar11 = *(undefined4 *)(puVar6 + 0x10);
  uStack_4c = (uint)CONCAT12((char)uVar11,
                             CONCAT11((char)((uint)uVar11 >> 8),(char)((uint)uVar11 >> 0x10)));
  uStack_50 = FUN_4a0378c8(uStack_4c);
  uStack_54 = 0;
  do {
    if (*(uint *)(PTR_DAT_4a038328 + 0x20) <= uStack_54) {
      if (iStack_20 != 0) {
        FUN_4a037794(uStack_18,&uStack_1c);
        thunk_FUN_4a0363b8(0);
        thunk_FUN_4a0397f0(0);
        thunk_FUN_4a03bf40(0);
        FUN_4a0458c0(iStack_24);
        piVar8 = *(int **)PTR_DAT_4a038324;
        *piVar8 = iStack_28;
        piVar8[0x164] = iStack_2c;
      }
      puVar6 = PTR_DAT_4a038328;
      *PTR_DAT_4a038328 = 0;
      *(undefined4 *)(puVar6 + 0x20) = 0;
      *(undefined4 *)(puVar6 + 0xc) = 0;
      return;
    }
    uStack_68 = *(uint *)(*(int *)(PTR_DAT_4a038328 + 0x18) + uStack_54 * 0x10);
    iVar14 = uStack_54 * 0x10 + *(int *)(PTR_DAT_4a038328 + 0x18);
    iStack_5c = *(int *)(iVar14 + 4);
    iStack_60 = *(int *)(iVar14 + 8);
    uStack_64 = (uint)*(byte *)(iVar14 + 0xc);
    iStack_6c = 2;
    uStack_70 = uStack_50;
    iStack_74 = 1;
    uStack_58 = uStack_68;
    if ((iStack_20 != 0) &&
       (((*(uint *)(iStack_20 + 0x10) & 0x1fffffff) >> 0x19 != 5 || (PTR_DAT_4a038328[1] != '\0'))))
    {
      FUN_4a037794(uStack_18,&uStack_1c,uStack_68,&uStack_64);
      FUN_4a069994(iStack_20,5);
    }
    PTR_DAT_4a0380ec[1] = 0;
    iStack_78 = FUN_4a0013e0(iStack_60);
    for (iVar14 = 0; puVar6 = PTR_DAT_4a0380ec, iVar14 < iStack_78; iVar14 = iVar14 + 1) {
      uVar9 = (uint)*(byte *)(iStack_60 + iVar14);
      if (uVar9 == 9) {
        uStack_68 = uStack_68 + 0x20 & 0xffffffe0;
      }
      else if (uVar9 == 10) {
        uStack_68 = uStack_58;
        iStack_5c = *(int *)(PTR_DAT_4a0380ec + 0x14) * 8 + iStack_5c;
      }
      else if (uVar9 == 0x60) {
        cVar1 = *(char *)(iStack_60 + iVar14 + 1);
        if (cVar1 == 'x') {
          iStack_6c = 2;
          iVar18 = 0;
          iVar14 = iVar14 + 1;
          iVar15 = 0;
          do {
            uVar9 = (uint)*(byte *)(iStack_60 + iVar14 + 1);
            if (uVar9 == 0) break;
            if (uVar9 - 0x30 < 10) {
              iVar18 = iVar18 * 0x10 + -0x30;
            }
            else {
              iVar18 = iVar18 * 0x10 + -0x57;
            }
            iVar18 = uVar9 + iVar18;
            iVar15 = iVar15 + 1;
            iVar14 = iVar14 + 1;
          } while (iVar15 < 6);
          uStack_70 = FUN_4a0378c8(iVar18);
        }
        else {
          if (cVar1 == '1') {
            iStack_6c = 2;
            uStack_70 = DAT_4a0380fc;
          }
          else if (cVar1 == 'a') {
            iStack_74 = 0;
            if (iStack_20 != 0) {
              FUN_4a037794(uStack_18,&uStack_1c);
              FUN_4a069994(iStack_20,8);
            }
          }
          else {
            if (cVar1 != 'i') {
              if (cVar1 == '`') {
                iVar14 = iVar14 + 1;
              }
              goto LAB_4a037fc6;
            }
            if (iStack_20 != 0) {
              FUN_4a037794(uStack_18,&uStack_1c);
              FUN_4a069994(iStack_20,5);
            }
            PTR_DAT_4a0380ec[1] = 1;
          }
          iVar14 = iVar14 + 1;
        }
      }
      else {
LAB_4a037fc6:
        piVar8 = *(int **)PTR_DAT_4a0380f0;
        if (piVar8[0xd3] + -7 <= (int)uStack_68) {
          if (uStack_64 == 0) goto LAB_4a0382b6;
          uStack_68 = uStack_58 + 2;
          iStack_5c = *(int *)(PTR_DAT_4a0380ec + 0x14) * 8 + iStack_5c;
        }
        if (iStack_5c < piVar8[0xd4]) {
          if ((-1 < (int)uStack_68) && ((int)uStack_68 < piVar8[0xd3] + -7)) {
            if (0x7f < uVar9) {
              uVar9 = 0;
            }
            uStack_7c = (uint)(byte)PTR_DAT_4a0380ec[1];
            if (*piVar8 << 0x15 < 0) {
              psVar12 = (short *)(piVar8[0xe3] + uStack_1c * 0x10);
              sVar2 = (short)uStack_68;
              sVar3 = (short)iStack_5c;
              *psVar12 = sVar2;
              psVar12[1] = sVar3;
              sVar5 = (short)*(undefined4 *)(puVar6 + 0x14) * 8;
              sVar4 = sVar5 + sVar3;
              psVar12[2] = sVar2;
              sVar2 = sVar2 + sVar5;
              psVar12[3] = sVar4;
              psVar12[4] = sVar2;
              psVar12[5] = sVar4;
              psVar12[6] = sVar2;
              psVar12[7] = sVar3;
              psVar12 = psVar12 + uStack_18 * 8;
              sVar4 = ((ushort)uVar9 & 0xf) * 0x100;
              sVar3 = (short)(uVar9 >> 4) * 0x200;
              *psVar12 = sVar4;
              psVar12[1] = sVar3;
              psVar12[2] = sVar4;
              sVar4 = sVar4 + 0x100;
              psVar12[3] = sVar3 + 0x200;
              psVar12[4] = sVar4;
              psVar12[5] = sVar3 + 0x200;
              uStack_80 = (byte *)CONCAT22(sVar3,sVar4);
              psVar12[6] = sVar4;
              psVar16 = psVar12 + uStack_18 * 8;
              psVar12[7] = sVar3;
              uStack_84 = (uint *)CONCAT13(0xff,CONCAT12((char)uStack_70 * '\b' + '\a',
                                                         CONCAT11((char)(uStack_70 >> 3),
                                                                  (char)(uStack_70 >> 8))) | 0x707);
              *(uint **)psVar16 = uStack_84;
              *(uint **)(psVar16 + 2) = uStack_84;
              *(uint **)(psVar16 + 4) = uStack_84;
              *(uint **)(psVar16 + 6) = uStack_84;
              uStack_1c = uStack_1c + 1;
              if (uStack_1c == uStack_18) {
                FUN_4a037794(uStack_18,&uStack_1c);
              }
            }
            else {
              uStack_80 = PTR_DAT_4a038320 + uVar9 * 7;
              uStack_84 = (uint *)(iStack_30 + uStack_44 * iStack_5c + uStack_48 * uStack_68);
              iStack_88 = iStack_5c;
              iStack_8c = 8;
              if (iStack_74 != 0) {
                iStack_8c = 7;
              }
              while ((bVar19 = iStack_8c != 0, iStack_8c = iStack_8c + -1, bVar19 &&
                     (iStack_88 < *(int *)(*(int *)PTR_DAT_4a038324 + 0x350)))) {
                iStack_90 = *(int *)(PTR_DAT_4a038328 + 0x14);
                while ((bVar19 = iStack_90 != 0, iStack_90 = iStack_90 + -1, bVar19 &&
                       (iStack_88 < *(int *)(*(int *)PTR_DAT_4a038324 + 0x350)))) {
                  if (iStack_88 < 0) {
                    iStack_88 = iStack_88 + 1;
                    uStack_84 = (uint *)((int)uStack_84 + uStack_44);
                  }
                  else {
                    if (iStack_74 == 0 && iStack_8c == 0) {
                      uVar9 = 0;
                    }
                    else {
                      uVar9 = (uint)*uStack_80;
                    }
                    if (uStack_7c != 0) {
                      uVar9 = ~uVar9 & 0xff;
                    }
                    iStack_94 = 7;
                    puVar10 = uStack_84;
                    uVar17 = uStack_68;
                    do {
                      if (*(int *)(*(int *)PTR_DAT_4a038324 + 0x34c) <= (int)uVar17) break;
                      if ((uVar9 & 1) == 0) {
                        uVar13 = 0;
                        if (iStack_74 == 0) goto LAB_4a038222;
                        uVar17 = uVar17 + *(int *)(PTR_DAT_4a038328 + 0x14);
                        puVar10 = (uint *)(*(int *)(PTR_DAT_4a038328 + 0x14) * uStack_48 +
                                          (int)puVar10);
                      }
                      else {
                        if (iStack_6c == 1) {
                          uStack_98 = FUN_4a040638(puVar10);
                          uStack_98 = FUN_4a10219c(&uStack_98,0x400);
                          uStack_9a = 0xbe;
                        }
                        else {
                          uVar13 = uStack_70;
                          if (iStack_6c == 2) goto LAB_4a038222;
                          uStack_98 = FUN_4a040638(puVar10);
                          uStack_98 = FUN_4a10219c(&uStack_98,0x800);
                          uStack_9a = 0x7f;
                        }
                        uStack_9b = 0;
                        uStack_9c = 0;
                        uStack_99 = 0;
                        FUN_4a1021e4(&uStack_98,&uStack_9c);
                        uVar13 = FUN_4a0378c8(uStack_98);
LAB_4a038222:
                        iVar18 = *(int *)(PTR_DAT_4a038328 + 0x14);
                        for (; (bVar19 = iVar18 != 0, iVar18 = iVar18 + -1, bVar19 &&
                               ((int)uVar17 < *(int *)(*(int *)PTR_DAT_4a038324 + 0x34c)));
                            uVar17 = uVar17 + 1) {
                          if (-1 < (int)uVar17) {
                            iVar15 = *(int *)(PTR_DAT_4a038328 + 0x24);
                            if (iVar15 == 1) {
                              *(char *)puVar10 = (char)uVar13;
                            }
                            else if (iVar15 == 2) {
                              *(short *)puVar10 = (short)uVar13;
                            }
                            else if (iVar15 == 3) {
                              *(char *)puVar10 = (char)uVar13;
                              *(char *)((int)puVar10 + 1) = (char)(uVar13 >> 8);
                              *(char *)((int)puVar10 + 2) = (char)(uVar13 >> 0x10);
                            }
                            else if (iVar15 == 4) {
                              *puVar10 = uVar13;
                            }
                          }
                          puVar10 = (uint *)((int)puVar10 + uStack_48);
                        }
                      }
                      uVar9 = uVar9 >> 1;
                      bVar19 = iStack_94 != 0;
                      iStack_94 = iStack_94 + -1;
                    } while (bVar19);
                    uStack_84 = (uint *)((int)uStack_84 + uStack_44);
                    iStack_88 = iStack_88 + 1;
                  }
                }
                uStack_80 = uStack_80 + 1;
              }
            }
          }
          uStack_68 = *(int *)(PTR_DAT_4a038328 + 0x14) * 6 + uStack_68;
        }
      }
LAB_4a0382b6:
    }
    uStack_54 = uStack_54 + 1;
  } while( true );
}



// Address: 4a037cec

void FUN_4a037cec(void)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined *puVar6;
  undefined *puVar7;
  int *piVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 uVar11;
  short *psVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  short *psVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  undefined1 local_9c;
  undefined1 local_9b;
  undefined1 local_9a;
  undefined1 local_99;
  undefined4 local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  uint local_7c;
  int local_78;
  int local_74;
  uint local_70;
  int local_6c;
  uint local_68;
  uint local_64;
  int local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  
  puVar6 = PTR_DAT_4a0380ec;
  if (*PTR_DAT_4a0380ec != '\0') {
    return;
  }
  if (*(int *)(PTR_DAT_4a0380ec + 0x20) == 0) {
    return;
  }
  *PTR_DAT_4a0380ec = 1;
  puVar7 = PTR_DAT_4a0380f0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  piVar8 = *(int **)PTR_DAT_4a0380f0;
  local_24 = piVar8[0x12d];
  local_28 = *piVar8;
  local_2c = piVar8[0x164];
  if (local_28 << 0x15 < 0) {
    if (*(int *)(puVar6 + 0x28) == 0) {
      FUN_4a03524c();
    }
    else if ((*(uint *)(*(int *)(puVar6 + 0x28) + 0x34) & 1) == 0) {
      return;
    }
    FUN_4a05a68c();
    iVar14 = *(int *)puVar7;
    *(int *)(iVar14 + 0x388) = *(int *)(iVar14 + 0x38c);
    *(int *)(iVar14 + 0x38c) = *(int *)(iVar14 + 0x38c) + 0x58;
    local_20 = FUN_4a069e28();
    *(undefined4 *)(local_20 + 0x2c) = *(undefined4 *)(puVar6 + 0x28);
    *(undefined1 *)(local_20 + 0x17) = 0x80;
    FUN_4a069994(local_20,5);
    uVar9 = *(uint *)(local_20 + 0x10);
    *(uint *)(local_20 + 0x10) = uVar9 & 0xfffffffc;
    *(uint *)(local_20 + 0x10) = uVar9 & 0xffffff7c;
    *(int *)(puVar6 + 0x2c) = local_20;
    FUN_4a0458c0(0);
    puVar10 = *(uint **)puVar7;
    *puVar10 = *puVar10 & 0xffff87ff;
    puVar10[0x164] = 0;
    FUN_4a0361cc(local_20);
    piVar8 = *(int **)puVar7;
    uVar9 = thunk_FUN_4a0015f0((piVar8[0xe0] - (piVar8[0xe3] - piVar8[0xe1])) + DAT_4a0380f4,0x60);
    if (-1 < *piVar8 << 0x17) {
      iVar18 = piVar8[0xdb];
      iVar14 = thunk_FUN_4a0015f0(piVar8[0xdf] - piVar8[0xdc],0x14);
      if (iVar18 - iVar14 <= (int)uVar9) {
        uVar9 = iVar18 - iVar14;
      }
    }
    local_18 = uVar9;
    if (*(uint *)PTR_DAT_4a0380f8 >> 2 <= uVar9) {
      local_18 = *(uint *)PTR_DAT_4a0380f8 >> 2;
    }
  }
  thunk_FUN_4a03f51c(&local_40);
  uVar9 = (local_34 & 0x7f) >> 4;
  *(uint *)(puVar6 + 0x24) = uVar9;
  local_44 = local_38;
  iVar14 = *(int *)(*(int *)PTR_DAT_4a0380f0 + 0x354);
  local_48 = uVar9;
  if (iVar14 != 0) {
    if (iVar14 == 1) {
      local_30 = local_30 + uVar9 * (local_40 + -1);
      local_48 = local_38;
    }
    else {
      if (iVar14 != 2) {
        if (iVar14 == 3) {
          local_48 = -local_38;
          local_30 = local_30 + local_38 * (local_3c + -1);
          local_44 = uVar9;
        }
        goto LAB_4a037e7c;
      }
      local_48 = -uVar9;
      local_30 = local_30 + local_38 * (local_3c + -1) + uVar9 * (local_40 + -1);
      uVar9 = local_38;
    }
    local_44 = -uVar9;
  }
LAB_4a037e7c:
  uVar11 = *(undefined4 *)(puVar6 + 0x10);
  local_4c = (uint)CONCAT12((char)uVar11,
                            CONCAT11((char)((uint)uVar11 >> 8),(char)((uint)uVar11 >> 0x10)));
  local_50 = FUN_4a0378c8(local_4c);
  local_54 = 0;
  do {
    if (*(uint *)(PTR_DAT_4a038328 + 0x20) <= local_54) {
      if (local_20 != 0) {
        FUN_4a037794(local_18,&local_1c);
        thunk_FUN_4a0363b8(0);
        thunk_FUN_4a0397f0(0);
        thunk_FUN_4a03bf40(0);
        FUN_4a0458c0(local_24);
        piVar8 = *(int **)PTR_DAT_4a038324;
        *piVar8 = local_28;
        piVar8[0x164] = local_2c;
      }
      puVar6 = PTR_DAT_4a038328;
      *PTR_DAT_4a038328 = 0;
      *(undefined4 *)(puVar6 + 0x20) = 0;
      *(undefined4 *)(puVar6 + 0xc) = 0;
      return;
    }
    local_68 = *(uint *)(*(int *)(PTR_DAT_4a038328 + 0x18) + local_54 * 0x10);
    iVar14 = local_54 * 0x10 + *(int *)(PTR_DAT_4a038328 + 0x18);
    local_5c = *(int *)(iVar14 + 4);
    local_60 = *(int *)(iVar14 + 8);
    local_64 = (uint)*(byte *)(iVar14 + 0xc);
    local_6c = 2;
    local_70 = local_50;
    local_74 = 1;
    local_58 = local_68;
    if ((local_20 != 0) &&
       (((*(uint *)(local_20 + 0x10) & 0x1fffffff) >> 0x19 != 5 || (PTR_DAT_4a038328[1] != '\0'))))
    {
      FUN_4a037794(local_18,&local_1c,local_68,&local_64);
      FUN_4a069994(local_20,5);
    }
    PTR_DAT_4a0380ec[1] = 0;
    local_78 = FUN_4a0013e0(local_60);
    for (iVar14 = 0; puVar6 = PTR_DAT_4a0380ec, iVar14 < local_78; iVar14 = iVar14 + 1) {
      uVar9 = (uint)*(byte *)(local_60 + iVar14);
      if (uVar9 == 9) {
        local_68 = local_68 + 0x20 & 0xffffffe0;
      }
      else if (uVar9 == 10) {
        local_68 = local_58;
        local_5c = *(int *)(PTR_DAT_4a0380ec + 0x14) * 8 + local_5c;
      }
      else if (uVar9 == 0x60) {
        cVar1 = *(char *)(local_60 + iVar14 + 1);
        if (cVar1 == 'x') {
          local_6c = 2;
          iVar18 = 0;
          iVar14 = iVar14 + 1;
          iVar15 = 0;
          do {
            uVar9 = (uint)*(byte *)(local_60 + iVar14 + 1);
            if (uVar9 == 0) break;
            if (uVar9 - 0x30 < 10) {
              iVar18 = iVar18 * 0x10 + -0x30;
            }
            else {
              iVar18 = iVar18 * 0x10 + -0x57;
            }
            iVar18 = uVar9 + iVar18;
            iVar15 = iVar15 + 1;
            iVar14 = iVar14 + 1;
          } while (iVar15 < 6);
          local_70 = FUN_4a0378c8(iVar18);
        }
        else {
          if (cVar1 == '1') {
            local_6c = 2;
            local_70 = DAT_4a0380fc;
          }
          else if (cVar1 == 'a') {
            local_74 = 0;
            if (local_20 != 0) {
              FUN_4a037794(local_18,&local_1c);
              FUN_4a069994(local_20,8);
            }
          }
          else {
            if (cVar1 != 'i') {
              if (cVar1 == '`') {
                iVar14 = iVar14 + 1;
              }
              goto LAB_4a037fc6;
            }
            if (local_20 != 0) {
              FUN_4a037794(local_18,&local_1c);
              FUN_4a069994(local_20,5);
            }
            PTR_DAT_4a0380ec[1] = 1;
          }
          iVar14 = iVar14 + 1;
        }
      }
      else {
LAB_4a037fc6:
        piVar8 = *(int **)PTR_DAT_4a0380f0;
        if (piVar8[0xd3] + -7 <= (int)local_68) {
          if (local_64 == 0) goto LAB_4a0382b6;
          local_68 = local_58 + 2;
          local_5c = *(int *)(PTR_DAT_4a0380ec + 0x14) * 8 + local_5c;
        }
        if (local_5c < piVar8[0xd4]) {
          if ((-1 < (int)local_68) && ((int)local_68 < piVar8[0xd3] + -7)) {
            if (0x7f < uVar9) {
              uVar9 = 0;
            }
            local_7c = (uint)(byte)PTR_DAT_4a0380ec[1];
            if (*piVar8 << 0x15 < 0) {
              psVar12 = (short *)(piVar8[0xe3] + local_1c * 0x10);
              sVar2 = (short)local_68;
              sVar3 = (short)local_5c;
              *psVar12 = sVar2;
              psVar12[1] = sVar3;
              sVar5 = (short)*(undefined4 *)(puVar6 + 0x14) * 8;
              sVar4 = sVar5 + sVar3;
              psVar12[2] = sVar2;
              sVar2 = sVar2 + sVar5;
              psVar12[3] = sVar4;
              psVar12[4] = sVar2;
              psVar12[5] = sVar4;
              psVar12[6] = sVar2;
              psVar12[7] = sVar3;
              psVar12 = psVar12 + local_18 * 8;
              sVar4 = ((ushort)uVar9 & 0xf) * 0x100;
              sVar3 = (short)(uVar9 >> 4) * 0x200;
              *psVar12 = sVar4;
              psVar12[1] = sVar3;
              psVar12[2] = sVar4;
              sVar4 = sVar4 + 0x100;
              psVar12[3] = sVar3 + 0x200;
              psVar12[4] = sVar4;
              psVar12[5] = sVar3 + 0x200;
              local_80 = (byte *)CONCAT22(sVar3,sVar4);
              psVar12[6] = sVar4;
              psVar16 = psVar12 + local_18 * 8;
              psVar12[7] = sVar3;
              local_84 = (uint *)CONCAT13(0xff,CONCAT12((char)local_70 * '\b' + '\a',
                                                        CONCAT11((char)(local_70 >> 3),
                                                                 (char)(local_70 >> 8))) | 0x707);
              *(uint **)psVar16 = local_84;
              *(uint **)(psVar16 + 2) = local_84;
              *(uint **)(psVar16 + 4) = local_84;
              *(uint **)(psVar16 + 6) = local_84;
              local_1c = local_1c + 1;
              if (local_1c == local_18) {
                FUN_4a037794(local_18,&local_1c);
              }
            }
            else {
              local_80 = PTR_DAT_4a038320 + uVar9 * 7;
              local_84 = (uint *)(local_30 + local_44 * local_5c + local_48 * local_68);
              local_88 = local_5c;
              local_8c = 8;
              if (local_74 != 0) {
                local_8c = 7;
              }
              while ((bVar19 = local_8c != 0, local_8c = local_8c + -1, bVar19 &&
                     (local_88 < *(int *)(*(int *)PTR_DAT_4a038324 + 0x350)))) {
                local_90 = *(int *)(PTR_DAT_4a038328 + 0x14);
                while ((bVar19 = local_90 != 0, local_90 = local_90 + -1, bVar19 &&
                       (local_88 < *(int *)(*(int *)PTR_DAT_4a038324 + 0x350)))) {
                  if (local_88 < 0) {
                    local_88 = local_88 + 1;
                    local_84 = (uint *)((int)local_84 + local_44);
                  }
                  else {
                    if (local_74 == 0 && local_8c == 0) {
                      uVar9 = 0;
                    }
                    else {
                      uVar9 = (uint)*local_80;
                    }
                    if (local_7c != 0) {
                      uVar9 = ~uVar9 & 0xff;
                    }
                    local_94 = 7;
                    puVar10 = local_84;
                    uVar17 = local_68;
                    do {
                      if (*(int *)(*(int *)PTR_DAT_4a038324 + 0x34c) <= (int)uVar17) break;
                      if ((uVar9 & 1) == 0) {
                        uVar13 = 0;
                        if (local_74 == 0) goto LAB_4a038222;
                        uVar17 = uVar17 + *(int *)(PTR_DAT_4a038328 + 0x14);
                        puVar10 = (uint *)(*(int *)(PTR_DAT_4a038328 + 0x14) * local_48 +
                                          (int)puVar10);
                      }
                      else {
                        if (local_6c == 1) {
                          local_98 = FUN_4a040638(puVar10);
                          local_98 = FUN_4a10219c(&local_98,0x400);
                          local_9a = 0xbe;
                        }
                        else {
                          uVar13 = local_70;
                          if (local_6c == 2) goto LAB_4a038222;
                          local_98 = FUN_4a040638(puVar10);
                          local_98 = FUN_4a10219c(&local_98,0x800);
                          local_9a = 0x7f;
                        }
                        local_9b = 0;
                        local_9c = 0;
                        local_99 = 0;
                        FUN_4a1021e4(&local_98,&local_9c);
                        uVar13 = FUN_4a0378c8(local_98);
LAB_4a038222:
                        iVar18 = *(int *)(PTR_DAT_4a038328 + 0x14);
                        for (; (bVar19 = iVar18 != 0, iVar18 = iVar18 + -1, bVar19 &&
                               ((int)uVar17 < *(int *)(*(int *)PTR_DAT_4a038324 + 0x34c)));
                            uVar17 = uVar17 + 1) {
                          if (-1 < (int)uVar17) {
                            iVar15 = *(int *)(PTR_DAT_4a038328 + 0x24);
                            if (iVar15 == 1) {
                              *(char *)puVar10 = (char)uVar13;
                            }
                            else if (iVar15 == 2) {
                              *(short *)puVar10 = (short)uVar13;
                            }
                            else if (iVar15 == 3) {
                              *(char *)puVar10 = (char)uVar13;
                              *(char *)((int)puVar10 + 1) = (char)(uVar13 >> 8);
                              *(char *)((int)puVar10 + 2) = (char)(uVar13 >> 0x10);
                            }
                            else if (iVar15 == 4) {
                              *puVar10 = uVar13;
                            }
                          }
                          puVar10 = (uint *)((int)puVar10 + local_48);
                        }
                      }
                      uVar9 = uVar9 >> 1;
                      bVar19 = local_94 != 0;
                      local_94 = local_94 + -1;
                    } while (bVar19);
                    local_84 = (uint *)((int)local_84 + local_44);
                    local_88 = local_88 + 1;
                  }
                }
                local_80 = local_80 + 1;
              }
            }
          }
          local_68 = *(int *)(PTR_DAT_4a038328 + 0x14) * 6 + local_68;
        }
      }
LAB_4a0382b6:
    }
    local_54 = local_54 + 1;
  } while( true );
}



// Address: 4a03832c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_4a03832c(uint *param_1)

{
  ushort uVar1;
  undefined *puVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  ushort *puVar14;
  int *piVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  uint local_13c;
  undefined4 *local_134 [64];
  undefined4 local_34;
  int local_30;
  int local_2c;
  uint *local_28;
  
  local_28 = param_1;
  puVar16 = *(undefined4 **)PTR_DAT_4a038b10;
  uVar19 = 1;
  uVar18 = *param_1 | param_1[1];
  do {
    if ((uVar18 & uVar19) != 0) {
      local_134[0] = *(undefined4 **)PTR_DAT_4a038b14;
      uVar4 = *local_28;
      local_134[1] = (undefined4 *)*(undefined4 *)(PTR_DAT_4a038b14 + 4);
      uVar9 = local_28[1];
      local_13c = 0x3f;
      uVar12 = uVar4 & uVar19;
      uVar18 = 0;
      if (uVar12 == 0) {
        local_13c = uVar4 & 0x3f;
        uVar18 = uVar4;
      }
      uVar17 = (uint)(uVar12 == 0);
      if (((uVar4 ^ uVar9) & uVar19) != 0) {
        puVar10 = local_134[uVar12 != 0];
        puVar5 = local_134[uVar12 == 0];
        piVar15 = puVar10 + 2;
        uVar4 = puVar5[2] - puVar10[2];
        uVar12 = puVar5[3] - puVar10[3];
        iVar6 = puVar5[4] - puVar10[4];
        piVar13 = puVar16 + 2;
        *puVar16 = **(undefined4 **)PTR_DAT_4a038b14;
        if (uVar19 == 4) {
          iVar11 = -uVar4;
          if (4 < iVar11 + 2U) {
            local_2c = *piVar15;
            uVar7 = local_2c - 0x1000;
            uVar7 = FUN_4a00080c(uVar7 * 0x10000,((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10,iVar11
                                 ,iVar11 >> 0x1f);
            iVar11 = (int)((longlong)(int)uVar7 * (longlong)(int)uVar4);
            iVar11 = FUN_4a0008b0(-iVar11,-((int)((ulonglong)
                                                  ((longlong)(int)uVar7 * (longlong)(int)uVar4) >>
                                                 0x20) + (uint)(iVar11 != 0)),0x10);
            *piVar13 = local_2c - iVar11;
            bVar20 = (int)(uVar7 ^ uVar12) < 0;
            uVar4 = uVar7;
            if (bVar20) {
              uVar4 = -uVar7;
            }
            uVar4 = (uint)((longlong)(int)uVar4 * (longlong)(int)uVar12) >> 0x10 |
                    (int)((ulonglong)((longlong)(int)uVar4 * (longlong)(int)uVar12) >> 0x20) << 0x10
            ;
            if (bVar20) {
              uVar4 = -uVar4;
            }
            puVar16[3] = uVar4 + puVar10[3];
            iVar11 = (int)((longlong)(int)uVar7 * (longlong)iVar6);
            iVar6 = FUN_4a0008b0(-iVar11,-((int)((ulonglong)((longlong)(int)uVar7 * (longlong)iVar6)
                                                >> 0x20) + (uint)(iVar11 != 0)),0x10);
            puVar16[4] = puVar10[4] - iVar6;
            iVar6 = puVar16[3];
            uVar3 = 0;
            if (iVar6 < 0x1001) {
              if (iVar6 != -0x1000 && 0xfff < -iVar6) {
LAB_4a03885c:
                uVar3 = 0x20;
              }
            }
            else {
LAB_4a038848:
              uVar3 = 0x10;
            }
            goto LAB_4a038670;
          }
        }
        else if ((int)uVar19 < 5) {
          if (uVar19 == 1) {
            uVar7 = *(int *)(*(int *)PTR_DAT_4a038b18 + 0x2d0) * 0x40 - puVar10[4];
            uVar8 = FUN_4a00080c(uVar7 * 0x10000,((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10,iVar6,
                                 iVar6 >> 0x1f);
            bVar20 = (int)(uVar8 ^ uVar4) < 0;
            uVar7 = uVar8;
            if (bVar20) {
              uVar7 = -uVar8;
            }
            uVar4 = (uint)((longlong)(int)uVar7 * (longlong)(int)uVar4) >> 0x10 |
                    (int)((ulonglong)((longlong)(int)uVar7 * (longlong)(int)uVar4) >> 0x20) << 0x10;
            if (bVar20) {
              uVar4 = -uVar4;
            }
            *piVar13 = uVar4 + *piVar15;
            puVar2 = PTR_DAT_4a038b18;
            bVar20 = (int)(uVar8 ^ uVar12) < 0;
            if (bVar20) {
              uVar8 = -uVar8;
            }
            uVar4 = (uint)((longlong)(int)uVar8 * (longlong)(int)uVar12) >> 0x10 |
                    (int)((ulonglong)((longlong)(int)uVar8 * (longlong)(int)uVar12) >> 0x20) << 0x10
            ;
            if (bVar20) {
              uVar4 = -uVar4;
            }
            puVar16[3] = uVar4 + puVar10[3];
            puVar16[4] = *(int *)(*(int *)puVar2 + 0x2d0) << 6;
            iVar6 = *piVar13;
            uVar3 = 0;
            if (iVar6 < 0x1001) {
              if (iVar6 != -0x1000 && 0xfff < -iVar6) {
                uVar3 = 8;
              }
            }
            else {
              uVar3 = 4;
            }
            iVar6 = puVar16[3];
            if (iVar6 < 0x1001) {
              if (iVar6 != -0x1000 && 0xfff < -iVar6) {
LAB_4a038684:
                uVar3 = uVar3 | 0x20;
              }
            }
            else {
LAB_4a0384cc:
              uVar3 = uVar3 | 0x10;
            }
LAB_4a038670:
            *(ushort *)(puVar16 + 5) = uVar3;
          }
          else {
            if (uVar19 == 2) {
              uVar7 = *(int *)(*(int *)PTR_DAT_4a038b18 + 0x2d4) * 0x40 - puVar10[4];
              iVar6 = FUN_4a00080c(uVar7 * 0x10000,((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10,
                                   iVar6,iVar6 >> 0x1f);
              *piVar13 = ((uint)((longlong)iVar6 * (longlong)(int)uVar4) >> 0x10 |
                         (int)((ulonglong)((longlong)iVar6 * (longlong)(int)uVar4) >> 0x20) << 0x10)
                         + *piVar15;
              puVar16[3] = ((uint)((longlong)iVar6 * (longlong)(int)uVar12) >> 0x10 |
                           (int)((ulonglong)((longlong)iVar6 * (longlong)(int)uVar12) >> 0x20) <<
                           0x10) + puVar10[3];
              puVar16[4] = *(int *)(*(int *)PTR_DAT_4a038b18 + 0x2d4) << 6;
              iVar6 = *piVar13;
              uVar3 = 0;
              if (iVar6 < 0x1001) {
                if (iVar6 != -0x1000 && 0xfff < -iVar6) {
                  uVar3 = 8;
                }
              }
              else {
                uVar3 = 4;
              }
              iVar6 = puVar16[3];
              if (0x1000 < iVar6) goto LAB_4a0384cc;
              if (iVar6 != -0x1000 && 0xfff < -iVar6) goto LAB_4a038684;
              goto LAB_4a038670;
            }
LAB_4a038864:
            iVar11 = -uVar12;
            if (iVar11 + 2U < 5) goto LAB_4a038a7c;
            uVar7 = puVar10[3] + 0x1000;
            uVar8 = FUN_4a00080c(uVar7 * 0x10000,((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10,iVar11
                                 ,iVar11 >> 0x1f);
            bVar20 = (int)(uVar8 ^ uVar4) < 0;
            uVar7 = uVar8;
            if (bVar20) {
              uVar7 = -uVar8;
            }
            uVar4 = (uint)((longlong)(int)uVar7 * (longlong)(int)uVar4) >> 0x10 |
                    (int)((ulonglong)((longlong)(int)uVar7 * (longlong)(int)uVar4) >> 0x20) << 0x10;
            if (bVar20) {
              uVar4 = -uVar4;
            }
            *piVar13 = uVar4 + *piVar15;
            iVar11 = (int)((longlong)(int)uVar8 * (longlong)(int)uVar12);
            iVar11 = FUN_4a0008b0(-iVar11,-((int)((ulonglong)
                                                  ((longlong)(int)uVar8 * (longlong)(int)uVar12) >>
                                                 0x20) + (uint)(iVar11 != 0)),0x10);
            puVar16[3] = puVar10[3] - iVar11;
            iVar11 = (int)((longlong)(int)uVar8 * (longlong)iVar6);
            iVar6 = FUN_4a0008b0(-iVar11,-((int)((ulonglong)((longlong)(int)uVar8 * (longlong)iVar6)
                                                >> 0x20) + (uint)(iVar11 != 0)),0x10);
            puVar16[4] = puVar10[4] - iVar6;
            *(undefined2 *)(puVar16 + 5) = 0;
          }
LAB_4a038928:
          uVar3 = *(ushort *)(puVar16 + 5);
          uVar4 = uVar3 & 0x3d;
          if ((uVar3 & 0x3d) == 0) {
            uVar12 = uVar3 | 0x480;
            puVar14 = (ushort *)(puVar16 + 1);
            *(ushort *)(puVar16 + 5) = (ushort)uVar12;
            puVar2 = PTR_DAT_4a038b18;
            if ((uVar12 & 0xbf) == 0x80) {
              *(ushort *)(puVar16 + 5) = (ushort)uVar12 & 0xff7f;
              iVar6 = *(int *)puVar2;
              if ((uVar12 & 0x400) == 0) {
                local_34 = puVar16[4];
                iVar11 = FUN_4a0015f0(puVar16[2] << 0xb,local_34);
                uVar3 = (ushort)((uint)(*(int *)(iVar6 + 0x310) * iVar11 * 0x10) >> 0x10);
                iVar11 = FUN_4a0015f0(puVar16[3] << 0xb,local_34);
                uVar1 = (ushort)((uint)(*(int *)(iVar6 + 0x314) * iVar11 * 0x10) >> 0x10);
              }
              else {
                uVar3 = (ushort)((uint)((*(int *)(iVar6 + 0x34c) * 8 + -1) * puVar16[2] * 8) >> 0x10
                                );
                uVar1 = (ushort)((uint)(puVar16[3] * (*(int *)(iVar6 + 0x350) * 8 + -1) * 8) >> 0x10
                                );
              }
              iVar11 = *(int *)(iVar6 + 0x354);
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
                  if (iVar11 != 3) goto LAB_4a038a34;
                  *puVar14 = uVar1;
                }
                *(ushort *)((int)puVar16 + 6) = ~uVar3;
              }
LAB_4a038a34:
              *puVar14 = (short)*(undefined4 *)(iVar6 + 800) + *puVar14;
              *(short *)((int)puVar16 + 6) =
                   (short)*(undefined4 *)(iVar6 + 0x328) + *(short *)((int)puVar16 + 6);
            }
          }
          uVar18 = uVar18 | uVar4;
          local_13c = local_13c & uVar4;
          local_28[uVar17] = uVar4;
          *(undefined4 **)(PTR_DAT_4a038b14 + uVar17 * 4) = puVar16;
          puVar16 = puVar16 + 8;
          uVar17 = uVar17 + 1;
        }
        else if (uVar19 == 8) {
          if (4 < uVar4 + 2) {
            local_30 = *piVar15;
            uVar7 = -(local_30 + 0x1000);
            uVar7 = FUN_4a00080c((local_30 + 0x1000) * -0x10000,
                                 ((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10,uVar4,
                                 (int)uVar4 >> 0x1f);
            iVar11 = (int)((longlong)(int)uVar7 * (longlong)(int)uVar4);
            iVar11 = FUN_4a0008b0(-iVar11,-((int)((ulonglong)
                                                  ((longlong)(int)uVar7 * (longlong)(int)uVar4) >>
                                                 0x20) + (uint)(iVar11 != 0)),0x10);
            *piVar13 = local_30 - iVar11;
            bVar20 = (int)(uVar7 ^ uVar12) < 0;
            uVar4 = uVar7;
            if (bVar20) {
              uVar4 = -uVar7;
            }
            uVar4 = (uint)((longlong)(int)uVar4 * (longlong)(int)uVar12) >> 0x10 |
                    (int)((ulonglong)((longlong)(int)uVar4 * (longlong)(int)uVar12) >> 0x20) << 0x10
            ;
            if (bVar20) {
              uVar4 = -uVar4;
            }
            puVar16[3] = uVar4 + puVar10[3];
            iVar11 = (int)((longlong)(int)uVar7 * (longlong)iVar6);
            iVar6 = FUN_4a0008b0(-iVar11,-((int)((ulonglong)((longlong)(int)uVar7 * (longlong)iVar6)
                                                >> 0x20) + (uint)(iVar11 != 0)),0x10);
            puVar16[4] = puVar10[4] - iVar6;
            iVar6 = puVar16[3];
            uVar3 = 0;
            if (0x1000 < iVar6) goto LAB_4a038848;
            if (iVar6 != -0x1000 && 0xfff < -iVar6) goto LAB_4a03885c;
            goto LAB_4a038670;
          }
        }
        else {
          if (uVar19 != 0x10) goto LAB_4a038864;
          iVar11 = -uVar12;
          if (4 < iVar11 + 2U) {
            uVar7 = puVar10[3] - 0x1000;
            uVar8 = FUN_4a00080c(uVar7 * 0x10000,((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10,iVar11
                                 ,iVar11 >> 0x1f);
            bVar20 = (int)(uVar8 ^ uVar4) < 0;
            uVar7 = uVar8;
            if (bVar20) {
              uVar7 = -uVar8;
            }
            uVar4 = (uint)((longlong)(int)uVar7 * (longlong)(int)uVar4) >> 0x10 |
                    (int)((ulonglong)((longlong)(int)uVar7 * (longlong)(int)uVar4) >> 0x20) << 0x10;
            if (bVar20) {
              uVar4 = -uVar4;
            }
            *piVar13 = uVar4 + *piVar15;
            iVar11 = FUN_4a0008b0((int)((longlong)(int)uVar8 * (longlong)(int)uVar12),
                                  (int)((ulonglong)((longlong)(int)uVar8 * (longlong)(int)uVar12) >>
                                       0x20),0x10);
            puVar16[3] = iVar11 + puVar10[3];
            iVar11 = (int)((longlong)(int)uVar8 * (longlong)iVar6);
            iVar6 = FUN_4a0008b0(-iVar11,-((int)((ulonglong)((longlong)(int)uVar8 * (longlong)iVar6)
                                                >> 0x20) + (uint)(iVar11 != 0)),0x10);
            puVar16[4] = puVar10[4] - iVar6;
            *(undefined2 *)(puVar16 + 5) = 0;
            goto LAB_4a038928;
          }
        }
      }
LAB_4a038a7c:
      if (uVar17 == 0) {
        return 0;
      }
      if ((uVar9 & uVar19) == 0) {
        *(undefined4 **)(PTR_DAT_4a038b14 + uVar17 * 4) = local_134[1];
        local_28[uVar17] = uVar9;
        uVar18 = uVar18 | uVar9;
        uVar9 = uVar9 & local_13c;
        uVar17 = uVar17 + 1;
        local_13c = uVar9;
      }
      if (uVar17 == 2) {
        uVar9 = local_13c;
      }
      if (uVar17 != 2 || uVar9 != 0) {
        return 0;
      }
      if (uVar18 == 0) {
        return uVar17;
      }
    }
    uVar19 = uVar19 * 2;
    if (uVar19 == 0x40) {
      return 2;
    }
  } while( true );
}



// Address: 4a038b1c

undefined4 FUN_4a038b1c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = 0;
  uVar2 = *(undefined4 *)(PTR_LAB_4a038b68 + 0x1c);
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = FUN_4a09e9c8(uVar2,param_1);
  }
  FUN_4a09e0f0(uVar2,param_1,0);
  return uVar1;
}



// Address: 4a038b6c

void FUN_4a038b6c(void)

{
  return;
}



// Address: 4a038b70

void FUN_4a038b70(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 *param_7,undefined4 param_8,undefined4 *param_9)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_4 != 0) {
    return;
  }
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 8);
  }
  if (iVar1 != 0) {
    uVar2 = FUN_4a039d70(iVar1 + param_2 * 2,param_3,*param_7,param_8);
    *param_9 = uVar2;
    return;
  }
  *param_9 = 0;
  return;
}



// Address: 4a038bcc

void FUN_4a038bcc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_FUN_4a038bf4;
  puVar2 = PTR_PTR_4a038bf0;
  puVar1 = PTR_FUN_4a038bec;
  *(undefined **)(PTR_PTR_4a038bf0 + 0xb4) = PTR_FUN_4a038bf4;
  *(undefined **)(puVar2 + 0xb0) = puVar1;
  *(undefined **)(puVar2 + 0xb8) = puVar1;
  *(undefined **)(puVar2 + 0xbc) = puVar3;
  return;
}



// Address: 4a038bf8

void FUN_4a038bf8(int param_1,int param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  undefined1 *local_24;
  int local_20;
  int local_1c;
  int iStack_18;
  
  local_1c = param_1;
  iStack_18 = param_2;
  if (*(char *)(param_1 + 9) == '\0') {
    uVar8 = (uint)*(ushort *)(param_2 + 0x10);
  }
  else {
    uVar8 = thunk_FUN_4a0e6b6c(param_2 + 8);
    if (uVar8 < 5) {
      uVar8 = (uint)*(byte *)(local_1c + 8) * (uint)*(ushort *)(param_2 + 0x10) + 7 >> 3;
    }
    else {
      uVar2 = *(ushort *)(param_2 + 0x10);
      iVar9 = thunk_FUN_4a0e6b6c(param_2 + 8);
      uVar8 = iVar9 * (uint)uVar2 >> 3;
    }
  }
  iVar9 = uVar8 + 1;
  local_20 = iVar9 * (uint)*(ushort *)(param_2 + 0x12);
  local_24 = (undefined1 *)thunk_FUN_4a161570();
  host_s3eCompressionDecomp_thumb
            (*(undefined4 *)(PTR_DAT_4a038d50 + 4),local_20,&local_24,&local_20,2);
  FUN_4a049b3c(local_24,iVar9,local_1c,param_2);
  if (*(byte *)(local_1c + 8) < 8) {
    FUN_4a14283c(param_2);
    uVar4 = thunk_FUN_4a161570();
    FUN_4a037644(local_24,uVar4,local_1c,param_2);
    thunk_FUN_4a0e4d40(param_2,uVar4);
    thunk_FUN_4a161530(uVar4);
  }
  else {
    if (*(int *)(param_2 + 8) == 0xe) {
      for (uVar8 = 3; uVar5 = FUN_4a14283c(param_2), uVar8 < uVar5; uVar8 = uVar8 + 4) {
        if (local_24[uVar8] != -1) goto LAB_4a038ce4;
      }
      *(undefined4 *)(param_2 + 8) = 10;
      puVar6 = local_24;
      puVar7 = local_24;
      for (uVar8 = 0; uVar5 = FUN_4a14283c(param_2), uVar8 < uVar5; uVar8 = uVar8 + 1) {
        if ((~uVar8 & 3) != 0) {
          *puVar7 = *puVar6;
          puVar7 = puVar7 + 1;
        }
        puVar6 = puVar6 + 1;
      }
      iVar9 = (uint)*(ushort *)(param_2 + 0x10) * 3 + 1;
    }
LAB_4a038ce4:
    if (*(char *)(local_1c + 9) == '\0') {
      for (uVar8 = 0; uVar8 < *(ushort *)(param_2 + 0x12); uVar8 = uVar8 + 1) {
        puVar7 = (undefined1 *)(*(int *)(param_2 + 0x18) + uVar8 * *(ushort *)(param_2 + 0x14));
        puVar6 = local_24 + (iVar9 + -1) * uVar8;
        for (uVar5 = 0; uVar5 < *(ushort *)(param_2 + 0x10); uVar5 = uVar5 + 1) {
          uVar1 = *puVar6;
          puVar6 = puVar6 + 1;
          *puVar7 = uVar1;
          puVar7[1] = uVar1;
          puVar7[2] = uVar1;
          puVar7 = puVar7 + 3;
        }
      }
    }
    else {
      thunk_FUN_4a0eba04(param_2,iVar9 + -1,local_24,0);
    }
  }
  FUN_4a161530(local_24);
  puVar3 = PTR_DAT_4a038d50;
  FUN_4a161530(*(undefined4 *)(PTR_DAT_4a038d50 + 4));
  *(undefined4 *)(puVar3 + 4) = 0;
  return;
}



// Address: 4a038d54

undefined4 FUN_4a038d54(int param_1,uint param_2,int param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  puVar3 = PTR_DAT_4a038ee0;
  puVar2 = PTR_DAT_4a038edc;
  uVar6 = (param_2 + param_3 * 0xc) - 0xc;
  bVar1 = false;
  if (param_2 <= uVar6) {
    do {
      if (*(uint *)(uVar6 + 8) != uVar6) {
        if (!bVar1) {
          bVar1 = true;
          *(undefined4 *)(puVar2 + 0x10) = 0;
          if (param_1 == 0) {
            thunk_FUN_4a1500f8(0xb71);
          }
          else {
            uVar4 = 0x10000;
            if ((*(uint *)(*(int *)puVar3 + 0x5bc) & 0x40) == 0) {
              uVar4 = 0;
            }
            if (*(int *)(*(int *)puVar3 + 0xc) == 3) {
              uVar5 = FUN_4a171fac();
              uVar5 = FUN_4a17295c(uVar5,0xfffffff0);
              uVar4 = FUN_4a171fac(uVar4);
              uVar4 = FUN_4a17295c(uVar4,0xfffffff0);
              thunk_FUN_4a1500c4(uVar4,uVar5);
            }
            else {
              thunk_FUN_4a1500d8(uVar4,uVar4);
            }
          }
        }
        if (*(int *)(*(int *)puVar3 + 0xc) == 2) {
          FUN_4a02de8c();
        }
        else {
          FUN_4a02f494(uVar6);
        }
      }
      uVar6 = uVar6 - 0xc;
    } while (param_2 <= uVar6);
    if (bVar1) {
      if (param_1 == 0) {
        thunk_FUN_4a150140(0xb71);
      }
      else {
        uVar4 = 0;
        uVar5 = 0x10000;
        if ((*(uint *)(*(int *)puVar3 + 0x5bc) & 0x40) == 0) {
          uVar4 = 0x10000;
          uVar5 = 0;
        }
        if (*(int *)(*(int *)puVar3 + 0xc) == 3) {
          uVar5 = FUN_4a171fac();
          uVar5 = FUN_4a17295c(uVar5,0xfffffff0);
          uVar4 = FUN_4a171fac(uVar4);
          uVar4 = FUN_4a17295c(uVar4,0xfffffff0);
          thunk_FUN_4a1500c4(uVar4,uVar5);
        }
        else {
          thunk_FUN_4a1500d8(uVar4,uVar5);
        }
      }
      return 1;
    }
  }
  return 0;
}



// Address: 4a038ee4

uint FUN_4a038ee4(uint param_1)

{
  uint uVar1;
  
  if ((param_1 & 1) != 0) {
    if (param_1 == 1) {
      uVar1 = 3;
    }
    else {
      uVar1 = 1;
    }
    return uVar1;
  }
  return param_1;
}



// Address: 4a038f24

void FUN_4a038f24(void)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  
  puVar1 = PTR_DAT_4a03904c;
  iVar10 = *(int *)PTR_DAT_4a03904c;
  FUN_4a035dec();
  FUN_4a000f70(PTR_DAT_4a039050,0x10,0xff);
  puVar2 = PTR_DAT_4a039054;
  bVar11 = 0;
  if (*(int *)(iVar10 + 0x4e4) != iVar10 + 0x4dc) {
    *(undefined4 *)(PTR_DAT_4a039054 + 0x10) = 1;
    if (*(int *)(*(int *)puVar1 + 0xc) == 2) {
      FUN_4a02de8c();
    }
    else {
      FUN_4a02f494();
    }
    bVar11 = 1;
  }
  if (*(int *)(iVar10 + 0x690) != iVar10 + 0x688) {
    *(undefined4 *)(puVar2 + 0x10) = 1;
    if (*(int *)(*(int *)puVar1 + 0xc) == 2) {
      FUN_4a02de8c();
    }
    else {
      FUN_4a02f494();
    }
    bVar11 = 1;
  }
  bVar3 = FUN_4a038d54(1,*(undefined4 *)(iVar10 + 0x4f8),*(undefined4 *)(iVar10 + 0x3b8));
  bVar11 = bVar11 & bVar3;
  if (*(int *)(iVar10 + 0x4f0) != iVar10 + 0x4e8) {
    *(undefined4 *)(puVar2 + 0x10) = 1;
    if (*(int *)(*(int *)puVar1 + 0xc) == 2) {
      FUN_4a02de8c();
    }
    else {
      FUN_4a02f494();
    }
    bVar11 = 1;
  }
  bVar3 = FUN_4a038d54(0,*(undefined4 *)(iVar10 + 0x4f4),*(undefined4 *)(iVar10 + 0x3b4));
  if (((bVar3 & bVar11 & puVar2[3]) != 0) && (*(int *)(iVar10 + 0x67c) == 0)) {
    puVar2[3] = 0;
  }
  if (puVar2[2] != '\0') {
    FUN_4a0472a0();
  }
  uVar9 = 0;
  uVar4 = 0x10000;
  if ((*(uint *)(*(int *)PTR_DAT_4a01d740 + 0x5bc) & 0x40) == 0) {
    uVar9 = 0x10000;
    uVar4 = 0;
  }
  if (*(int *)(*(int *)PTR_DAT_4a01d740 + 0xc) == 3) {
    uVar4 = FUN_4a171fac();
    uVar4 = FUN_4a17295c(uVar4,0xfffffff0);
    uVar9 = FUN_4a171fac(uVar9);
    uVar9 = FUN_4a17295c(uVar9,0xfffffff0);
    thunk_FUN_4a1500c4(uVar9,uVar4);
  }
  else {
    thunk_FUN_4a1500d8(uVar9,uVar4);
  }
  thunk_FUN_4a1500f8(0xc11);
  FUN_4a14fd70(0xde1,0);
  FUN_4a037ce4();
  thunk_FUN_4a00d70c();
  thunk_FUN_4a02ca18();
  thunk_FUN_4a00d798();
  thunk_FUN_4a0458a0();
  thunk_FUN_4a03f558();
  piVar6 = *(int **)PTR_DAT_4a05a740;
  if (*piVar6 * 0x200000 < 0) {
    piVar7 = piVar6 + 0x134;
    piVar8 = piVar7;
    while (iVar10 = DAT_4a05a744, piVar8 = (int *)piVar8[2], piVar7 != piVar8) {
      iVar10 = piVar8[3];
      if (iVar10 != 0) {
        *(undefined4 *)(iVar10 + 0x3c) = 0;
        *(undefined4 *)(iVar10 + 0x40) = 0;
        *(undefined4 *)(iVar10 + 0x44) = 0;
        *(uint *)(iVar10 + 0x10) = *(uint *)(iVar10 + 0x10) & 0xffffefff;
      }
    }
    piVar6[0x136] = (int)piVar7;
    iVar10 = (int)piVar6 + iVar10;
    piVar6[0x135] = (int)piVar7;
    *(int *)(iVar10 + 8) = iVar10;
    *(int *)(iVar10 + 4) = iVar10;
    piVar6[0x1a4] = (int)(piVar6 + 0x1a2);
    piVar6[0x1a3] = (int)(piVar6 + 0x1a2);
    piVar6[0x13c] = (int)(piVar6 + 0x13a);
    piVar6[0x13b] = (int)(piVar6 + 0x13a);
    uVar13 = piVar6[0xed];
    uVar12 = piVar6[0xee];
    for (uVar5 = 0; uVar5 < uVar13; uVar5 = uVar5 + 1) {
      iVar10 = piVar6[0x13d] + uVar5 * 0xc;
      *(int *)(iVar10 + 8) = iVar10;
      *(int *)(iVar10 + 4) = iVar10;
    }
    for (uVar5 = 0; uVar5 < uVar12; uVar5 = uVar5 + 1) {
      iVar10 = piVar6[0x13e] + uVar5 * 0xc;
      *(int *)(iVar10 + 8) = iVar10;
      *(int *)(iVar10 + 4) = iVar10;
    }
  }
  piVar6[0xd8] = 0;
  return;
}



// Address: 4a039058

/* WARNING: Removing unreachable block (ram,0x4a001260) */
/* WARNING: Removing unreachable block (ram,0x4a001264) */
/* WARNING: Removing unreachable block (ram,0x4a001268) */
/* WARNING: Removing unreachable block (ram,0x4a00126c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * FUN_4a039058(uint param_1)

{
  short sVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  bool bVar8;
  
  puVar2 = PTR_DAT_4a0390f8;
  if ((param_1 & 1) != 0) {
    iVar5 = *(int *)PTR_DAT_4a0390f8;
    *(undefined4 *)(iVar5 + 0x360) = 1;
    *(undefined1 *)(iVar5 + 0x680) = 1;
    FUN_4a03c044(*(undefined4 *)(iVar5 + 0x51c),0);
    puVar3 = PTR_DAT_4a0390fc;
    sVar1 = *(short *)(*(int *)puVar2 + 0x574);
    if (sVar1 == *(short *)(PTR_DAT_4a0390fc + 2)) {
      iVar5 = *(int *)(PTR_DAT_4a0390fc + 4);
      *(int *)(PTR_DAT_4a0390fc + 4) = iVar5 + 1;
      if (2 < iVar5 + 1) {
        FUN_4a05a618();
      }
    }
    else {
      *(short *)(PTR_DAT_4a0390fc + 2) = sVar1;
      *(undefined4 *)(puVar3 + 4) = 1;
    }
  }
  puVar6 = *(undefined4 **)PTR_DAT_4a039100;
  if (puVar6 != (undefined4 *)0x0) {
    iVar5 = *(int *)puVar2;
    iVar5 = *(int *)(iVar5 + 0x344) * *(int *)(iVar5 + 0x348);
    if (0 < iVar5) {
      uVar7 = iVar5 * 4;
      bVar8 = 0x1f < uVar7;
      uVar7 = uVar7 - 0x20;
      do {
        if (bVar8) {
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = 0;
          puVar6[3] = 0;
          puVar6[4] = 0;
          puVar6[5] = 0;
          puVar6[6] = 0;
          puVar6[7] = 0;
          puVar6 = puVar6 + 8;
          bVar8 = 0x1f < uVar7;
          uVar7 = uVar7 - 0x20;
        }
      } while (bVar8);
      if ((bool)((byte)(uVar7 >> 4) & 1)) {
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6 = puVar6 + 4;
      }
      if ((int)(uVar7 << 0x1c) < 0) {
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6 = puVar6 + 2;
      }
      puVar4 = puVar6;
      if ((bool)((byte)((uVar7 << 0x1c) >> 0x1e) & 1)) {
        puVar4 = puVar6 + 1;
        *puVar6 = 0;
      }
      return puVar4;
    }
    return puVar6;
  }
  return (undefined4 *)0x0;
}



// Address: 4a039104

void FUN_4a039104(void)

{
  undefined *puVar1;
  uint *puVar2;
  int iVar3;
  undefined1 auStack_20 [20];
  
  host_s3eDeviceYield_arm(0x80000000);
  puVar1 = PTR_DAT_4a039208;
  if (*PTR_DAT_4a039208 != '\0') {
    thunk_FUN_4a03be0c(auStack_20);
    FUN_4a03f8d4(auStack_20);
    *puVar1 = 0;
  }
  puVar1 = PTR_DAT_4a03920c;
  puVar2 = *(uint **)PTR_DAT_4a03920c;
  puVar2[0xd7] = 0xffffffff;
  if ((*puVar2 & 0x2000000) != 0) {
    FUN_4a00d798();
    FUN_4a05699c(*(undefined4 *)(*(int *)puVar1 + 0x39c),1,*(undefined4 *)(*(int *)puVar1 + 0x3ac));
  }
  FUN_4a00d744();
  FUN_4a05699c(*(undefined4 *)(*(int *)puVar1 + 0x39c),1,*(undefined4 *)(*(int *)puVar1 + 0x3ac));
  iVar3 = FUN_4a047108(*(undefined4 *)(*(int *)puVar1 + 0x3bc),
                       *(undefined4 *)(*(int *)puVar1 + 0x3ac));
  if (iVar3 != 0) {
    FUN_4a04ce3c();
  }
  FUN_4a00d76c();
  FUN_4a05699c(*(undefined4 *)(*(int *)puVar1 + 0x39c),1,*(undefined4 *)(*(int *)puVar1 + 0x3ac));
  FUN_4a047108(*(undefined4 *)(*(int *)puVar1 + 0x3bc),*(undefined4 *)(*(int *)puVar1 + 0x3ac));
  FUN_4a00d70c();
  FUN_4a029e0c();
  FUN_4a037ce4();
  FUN_4a00d798();
  thunk_FUN_4a05a68c();
  if (*(int *)(*(int *)puVar1 + 0x35c) != -1) {
    FUN_4a047530(*(int *)(*(int *)puVar1 + 0x35c) + -1);
  }
  iVar3 = *(int *)puVar1;
  *(undefined4 *)(iVar3 + 0x35c) = 0;
  *(undefined4 *)(iVar3 + 0x360) = 0;
  return;
}



// Address: 4a039210

void FUN_4a039210(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_4a03f0ac();
  puVar2 = PTR_PTR_4a0392cc;
  puVar1 = PTR_FUN_4a0392c8;
  *(undefined **)(PTR_PTR_4a0392cc + 0x684) = PTR_FUN_4a0392c8;
  *(undefined **)(puVar2 + 0x284) = puVar1;
  puVar1 = PTR_FUN_4a0392d0;
  *(undefined **)(puVar2 + 0x688) = PTR_FUN_4a0392d0;
  *(undefined **)(puVar2 + 0x288) = puVar1;
  puVar1 = PTR_LAB_4a0392d4;
  *(undefined **)(puVar2 + 0x68c) = PTR_LAB_4a0392d4;
  *(undefined **)(puVar2 + 0x28c) = puVar1;
  puVar1 = PTR_FUN_4a0392d8;
  *(undefined **)(puVar2 + 0x694) = PTR_FUN_4a0392d8;
  *(undefined **)(puVar2 + 0x294) = puVar1;
  puVar1 = PTR_FUN_4a0392dc;
  *(undefined **)(puVar2 + 0x698) = PTR_FUN_4a0392dc;
  *(undefined **)(puVar2 + 0x298) = puVar1;
  puVar1 = PTR_LAB_4a0392e0;
  *(undefined **)(puVar2 + 0x69c) = PTR_LAB_4a0392e0;
  *(undefined **)(puVar2 + 0x29c) = puVar1;
  puVar1 = PTR_FUN_4a0392e4;
  *(undefined **)(puVar2 + 0x6a4) = PTR_FUN_4a0392e4;
  *(undefined **)(puVar2 + 0x2a4) = puVar1;
  puVar1 = PTR_FUN_4a0392e8;
  *(undefined **)(puVar2 + 0x6a8) = PTR_FUN_4a0392e8;
  *(undefined **)(puVar2 + 0x2a8) = puVar1;
  puVar1 = PTR_LAB_4a0392ec;
  *(undefined **)(puVar2 + 0x6ac) = PTR_LAB_4a0392ec;
  *(undefined **)(puVar2 + 0x2ac) = puVar1;
  puVar1 = PTR_FUN_4a0392f0;
  *(undefined **)(puVar2 + 0x6b4) = PTR_FUN_4a0392f0;
  *(undefined **)(puVar2 + 0x2b4) = puVar1;
  puVar1 = PTR_FUN_4a0392f4;
  *(undefined **)(puVar2 + 0x6b8) = PTR_FUN_4a0392f4;
  *(undefined **)(puVar2 + 0x2b8) = puVar1;
  puVar1 = PTR_LAB_4a0392f8;
  *(undefined **)(puVar2 + 0x6bc) = PTR_LAB_4a0392f8;
  *(undefined **)(puVar2 + 700) = puVar1;
  FUN_4a04c6d0();
  if (PTR_LAB_4a0392fc[0x45] != '\0') {
    FUN_4a0536c8();
  }
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



// Address: 4a0396c4

void FUN_4a0396c4(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = PTR_DAT_4a0396f8;
  puVar1 = PTR_DAT_4a0396f4;
  for (iVar4 = 0; iVar4 < *(int *)(puVar2 + 0x10); iVar4 = iVar4 + 1) {
    iVar3 = iVar4 * 0xc;
    if (*(int *)(puVar1 + iVar3) == param_1) {
      FUN_4a1652c8(0,*(undefined4 *)(puVar1 + iVar3 + 8),*(undefined4 *)(puVar1 + iVar3 + 4));
    }
  }
  return;
}



// Address: 4a0396fc

void FUN_4a0396fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  short sStack_2c;
  short sStack_2a;
  short sStack_28;
  short sStack_26;
  short sStack_24;
  short sStack_22;
  short sStack_20;
  short sStack_1e;
  undefined2 uStack_1c;
  short sStack_1a;
  short sStack_18;
  undefined2 uStack_16;
  
  puVar2 = PTR_DAT_4a0397e8;
  puVar1 = PTR_DAT_4a0397e4;
  if (*(int *)PTR_DAT_4a0397e4 != 0) {
    iVar6 = *(int *)PTR_DAT_4a0397e8;
    *(int *)(iVar6 + 0x388) = *(int *)(iVar6 + 0x38c);
    *(int *)(iVar6 + 0x38c) = *(int *)(iVar6 + 0x38c) + 0x58;
    iVar6 = FUN_4a069e28();
    *(undefined1 *)(iVar6 + 0x20) = 0;
    *(undefined1 *)(iVar6 + 0x21) = 0;
    *(undefined1 *)(iVar6 + 0x22) = 0xff;
    *(undefined1 *)(iVar6 + 0x23) = 100;
    *(uint *)(iVar6 + 0x10) = *(uint *)(iVar6 + 0x10) & 0xfff8ffff | 0x10000;
    FUN_4a0361cc();
    iVar6 = *(int *)(*(int *)puVar2 + 0x344);
    sVar3 = host_s3ePointerGetX_thumb();
    sVar4 = host_s3ePointerGetY_thumb();
    iVar6 = thunk_FUN_4a0015f0(*(int *)(puVar1 + 4) * iVar6,100);
    iVar5 = thunk_FUN_4a0015f0(iVar6,10);
    sStack_2a = (short)((int)(((uint)(iVar6 >> 0x1f) >> 0x1e) + iVar6) >> 2);
    sStack_26 = (short)iVar6;
    sStack_1a = sStack_26 - sStack_2a;
    uStack_1c = (undefined2)iVar5;
    sStack_20 = sVar3 - sStack_26;
    sStack_2c = (short)(iVar5 / 2);
    sStack_22 = sVar4 - sStack_2c;
    sStack_24 = sVar3 + sStack_2a;
    sStack_2c = sVar3 - sStack_2c;
    sStack_26 = sVar4 - sStack_26;
    sStack_2a = sVar4 + sStack_2a;
    sStack_28 = sStack_2c;
    sStack_1e = sStack_22;
    sStack_18 = sStack_1a;
    uStack_16 = uStack_1c;
    thunk_FUN_4a048e6c(&sStack_20,&sStack_18);
    thunk_FUN_4a048e6c(&sStack_24,&sStack_18);
    thunk_FUN_4a048e6c(&sStack_28,&uStack_1c);
    thunk_FUN_4a048e6c(&sStack_2c,&uStack_1c);
    thunk_FUN_4a05a618();
  }
  return;
}



// Address: 4a039704

void FUN_4a039704(void)

{
  undefined *puVar1;
  undefined *puVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  short local_2c;
  short local_2a;
  short local_28;
  short local_26;
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  undefined2 local_1c;
  short local_1a;
  short local_18;
  undefined2 local_16;
  
  puVar2 = PTR_DAT_4a0397e8;
  puVar1 = PTR_DAT_4a0397e4;
  if (*(int *)PTR_DAT_4a0397e4 != 0) {
    iVar6 = *(int *)PTR_DAT_4a0397e8;
    *(int *)(iVar6 + 0x388) = *(int *)(iVar6 + 0x38c);
    *(int *)(iVar6 + 0x38c) = *(int *)(iVar6 + 0x38c) + 0x58;
    iVar6 = FUN_4a069e28();
    *(undefined1 *)(iVar6 + 0x20) = 0;
    *(undefined1 *)(iVar6 + 0x21) = 0;
    *(undefined1 *)(iVar6 + 0x22) = 0xff;
    *(undefined1 *)(iVar6 + 0x23) = 100;
    *(uint *)(iVar6 + 0x10) = *(uint *)(iVar6 + 0x10) & 0xfff8ffff | 0x10000;
    FUN_4a0361cc();
    iVar6 = *(int *)(*(int *)puVar2 + 0x344);
    sVar3 = host_s3ePointerGetX_thumb();
    sVar4 = host_s3ePointerGetY_thumb();
    iVar6 = thunk_FUN_4a0015f0(*(int *)(puVar1 + 4) * iVar6,100);
    iVar5 = thunk_FUN_4a0015f0(iVar6,10);
    local_2a = (short)((int)(((uint)(iVar6 >> 0x1f) >> 0x1e) + iVar6) >> 2);
    local_26 = (short)iVar6;
    local_1a = local_26 - local_2a;
    local_1c = (undefined2)iVar5;
    local_20 = sVar3 - local_26;
    local_2c = (short)(iVar5 / 2);
    local_22 = sVar4 - local_2c;
    local_24 = sVar3 + local_2a;
    local_2c = sVar3 - local_2c;
    local_26 = sVar4 - local_26;
    local_2a = sVar4 + local_2a;
    local_28 = local_2c;
    local_1e = local_22;
    local_18 = local_1a;
    local_16 = local_1c;
    thunk_FUN_4a048e6c(&local_20,&local_18);
    thunk_FUN_4a048e6c(&local_24,&local_18);
    thunk_FUN_4a048e6c(&local_28,&local_1c);
    thunk_FUN_4a048e6c(&local_2c,&local_1c);
    thunk_FUN_4a05a618();
  }
  return;
}



// Address: 4a0397f0

void FUN_4a0397f0(uint param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = *(uint **)PTR_DAT_4a039824;
  if (param_2 == 0) {
    param_2 = puVar1[0x115];
  }
  puVar1[0x11c] = param_1;
  puVar1[0x11e] = param_2;
  puVar1[0x10d] = 0;
  if ((*puVar1 & 0x4000000) == 0) {
    puVar1[0x125] = 0;
    puVar1[0x128] = 0;
  }
  return;
}



// Address: 4a039828

void FUN_4a039828(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_DAT_4a03988c;
  puVar1 = PTR_LAB_4a039888;
  *(undefined4 *)(PTR_DAT_4a03988c + 0x1c) = *(undefined4 *)(PTR_LAB_4a039888 + 0x2c);
  *(undefined4 *)(puVar2 + 0x18) = *(undefined4 *)(puVar1 + 0x30);
  *(undefined4 *)(puVar2 + 0x14) = *(undefined4 *)(puVar1 + 0x38);
  if (*(int *)(puVar2 + 0xc) == 0) {
    uVar3 = thunk_FUN_4a161570(0x10000);
    *(undefined4 *)(puVar2 + 0xc) = uVar3;
  }
  FUN_4a14adec(*(undefined4 *)(puVar2 + 0xc),*(undefined4 *)(puVar2 + 0x1c),
               *(undefined4 *)(puVar2 + 0x18),*(undefined4 *)(puVar2 + 0x14));
  *(undefined4 *)(puVar2 + 0x10) = 1;
  return;
}



// Address: 4a039890

void FUN_4a039890(undefined4 param_1,int param_2)

{
  *(undefined4 *)(*(int *)(param_2 + 4) + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(*(int *)(param_2 + 8) + 4) = *(undefined4 *)(param_2 + 4);
  return;
}



// Address: 4a03989e

void FUN_4a03989e(void)

{
  FUN_4a0399a0();
  return;
}



// Address: 4a0398ac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_4a0398ac(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_4a036590();
  if ((iVar2 != 0) && (iVar2 = FUN_4a04e90c(), iVar2 != 0)) {
    iVar2 = FUN_4a02b1e8(s_ResGroupDirectory_4a039918);
    puVar1 = PTR_DAT_4a03992c;
    do {
      iVar3 = FUN_4a04d7bc();
      if (iVar3 == iVar2) {
        iVar2 = *(int *)(*(int *)puVar1 + 100);
        *(undefined4 *)(iVar2 + 0xe0) = *(undefined4 *)(PTR_DAT_4a039930 + 8);
        uVar4 = host_s3eFileTell_thumb();
        *(undefined4 *)(iVar2 + 0xe8) = uVar4;
        return;
      }
    } while (iVar3 != 0);
    FUN_4a008004(s_Group__s_is_not_mountable___it_h_4a039934,param_1);
    iVar2 = host_s3eDebugIsDebuggerPresent_thumb();
    if (iVar2 != 0) {
      _DAT_fffffff4 = 0;
    }
    FUN_4a06a0fc(*(undefined4 *)(*(int *)puVar1 + 100),1);
    FUN_4a0399a0();
  }
  return;
}



// Address: 4a039974

void FUN_4a039974(void)

{
  int iVar1;
  
  iVar1 = *(int *)(PTR_DAT_4a03999c + 0x10);
  *(int *)(PTR_DAT_4a03999c + 0x10) = iVar1 + 1;
  if (iVar1 < 1) {
    thunk_FUN_4a161570(0x148);
    FUN_4a08d1a8();
  }
  return;
}



// Address: 4a0399a0

void FUN_4a0399a0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_4a0399d8;
  if ((*PTR_DAT_4a0399d8 == '\0') && (*(int *)(PTR_DAT_4a0399d8 + 0xbc) != 0)) {
    host_s3eFileWrite_thumb(PTR_DAT_4a0399d8 + 0xb4,1,1,*(undefined4 *)(PTR_DAT_4a0399d8 + 8));
  }
  host_s3eFileClose_thumb(*(undefined4 *)(puVar1 + 8));
  *(int *)PTR_DAT_4a0399dc = *(int *)PTR_DAT_4a0399dc + -1;
  return;
}



// Address: 4a0399e0

void FUN_4a0399e0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (((param_3 == 0x20) && (param_4 == 4)) && (*(int *)(PTR_DAT_4a039a40 + 0xbc) == 0)) {
    if (*PTR_DAT_4a039a40 == '\0') {
      host_s3eFileWrite_thumb(param_1,4,param_2,*(undefined4 *)(PTR_DAT_4a039a40 + 8),4);
    }
    else {
      host_s3eFileRead_thumb(param_1,4,param_2);
    }
    FUN_4a0515e4(param_2 << 2);
  }
  else {
    iVar1 = (int)(((uint)(param_3 + 8 >> 0x1f) >> 0x1d) + param_3 + 8) >> 3;
    if (*PTR_DAT_4a039a40 == '\0') {
      FUN_4a056f94(param_1,iVar1,param_2,param_4,PTR_DAT_4a039a40);
    }
    else {
      FUN_4a056f30(param_1,iVar1,param_2);
    }
  }
  return;
}



// Address: 4a039a4c

void FUN_4a039a4c(ushort *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (((param_3 == 0xf) && (param_4 == 2)) && (*(int *)(PTR_DAT_4a039ae8 + 0xbc) == 0)) {
    if (*PTR_DAT_4a039ae8 == '\0') {
      host_s3eFileWrite_thumb(param_1,2,param_2,*(undefined4 *)(PTR_DAT_4a039ae8 + 8),2);
    }
    else {
      host_s3eFileRead_thumb(param_1,2,param_2);
    }
    FUN_4a0515e4(param_2 << 1);
  }
  else {
    iVar3 = 2;
    iVar1 = param_3 + 8;
    if (iVar1 < 0x18) {
      iVar3 = (int)(((uint)(iVar1 >> 0x1f) >> 0x1d) + iVar1) >> 3;
    }
    if (*PTR_DAT_4a039ae8 == '\0') {
      FUN_4a056f94(param_1,iVar3,param_2,param_4,PTR_DAT_4a039ae8);
    }
    else {
      FUN_4a056f30(param_1,iVar3,param_2,param_4);
      uVar2 = 0xf - param_3;
      if (0 < (int)uVar2) {
        for (; param_2 != 0; param_2 = param_2 + -1) {
          *param_1 = (ushort)((uint)((int)(((uint)*param_1 << (uVar2 & 0xff)) << 0x10) >>
                                    (uVar2 & 0xff)) >> 0x10);
          param_1 = (ushort *)((param_4 & 0xfffffffe) + (int)param_1);
        }
      }
    }
  }
  return;
}



// Address: 4a039aec

void FUN_4a039aec(int *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (((param_3 == 0x1f) && (param_4 == 4)) && (*(int *)(PTR_DAT_4a039b84 + 0xbc) == 0)) {
    if (*PTR_DAT_4a039b84 == '\0') {
      host_s3eFileWrite_thumb(param_1,4,param_2,*(undefined4 *)(PTR_DAT_4a039b84 + 8),4);
    }
    else {
      host_s3eFileRead_thumb(param_1,4,param_2);
    }
    FUN_4a0515e4(param_2 << 2);
  }
  else {
    iVar3 = 4;
    iVar1 = param_3 + 8;
    if (iVar1 < 0x28) {
      iVar3 = (int)(((uint)(iVar1 >> 0x1f) >> 0x1d) + iVar1) >> 3;
    }
    if (*PTR_DAT_4a039b84 == '\0') {
      FUN_4a056f94(param_1,iVar3,param_2,param_4,PTR_DAT_4a039b84);
    }
    else {
      FUN_4a056f30(param_1,iVar3,param_2,param_4);
      uVar2 = 0x1f - param_3;
      if (0 < (int)uVar2) {
        for (; param_2 != 0; param_2 = param_2 + -1) {
          *param_1 = (*param_1 << (uVar2 & 0xff)) >> (uVar2 & 0xff);
          param_1 = (int *)((param_4 & 0xfffffffc) + (int)param_1);
        }
      }
    }
  }
  return;
}



// Address: 4a039b88

void FUN_4a039b88(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (((param_3 == 8) && (param_4 == 1)) && (*(int *)(PTR_DAT_4a039be8 + 0xbc) == 0)) {
    if (*PTR_DAT_4a039be8 == '\0') {
      host_s3eFileWrite_thumb(param_1,1,param_2,*(undefined4 *)(PTR_DAT_4a039be8 + 8),1);
    }
    else {
      host_s3eFileRead_thumb(param_1,1,param_2);
    }
    FUN_4a0515e4(param_2);
  }
  else if (*PTR_DAT_4a039be8 == '\0') {
    FUN_4a056f94(param_1,1,param_2,param_4,PTR_DAT_4a039be8);
  }
  else {
    FUN_4a056f30(param_1,1,param_2);
  }
  return;
}



// Address: 4a039b90

void FUN_4a039b90(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (((param_3 == 8) && (param_4 == 1)) && (*(int *)(PTR_DAT_4a039be8 + 0xbc) == 0)) {
    if (*PTR_DAT_4a039be8 == '\0') {
      host_s3eFileWrite_thumb(param_1,1,param_2,*(undefined4 *)(PTR_DAT_4a039be8 + 8),1);
    }
    else {
      host_s3eFileRead_thumb(param_1,1,param_2);
    }
    FUN_4a0515e4(param_2);
  }
  else if (*PTR_DAT_4a039be8 == '\0') {
    FUN_4a056f94(param_1,1,param_2,param_4,PTR_DAT_4a039be8);
  }
  else {
    FUN_4a056f30(param_1,1,param_2);
  }
  return;
}



// Address: 4a039bec

uint FUN_4a039bec(int param_1,uint param_2,int param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  ushort uStack_2c;
  uint uVar7;
  
  uVar4 = DAT_4a039d6c;
  uVar8 = 0;
  uVar9 = 0;
  bVar10 = param_3 != 0;
  if (param_2 == 0xffffffff) {
    iVar6 = FUN_4a0013e0(param_1);
    param_2 = iVar6 + 1;
  }
  do {
    uStack_2c = (ushort)uVar4;
    if (((bVar10) && (param_4 <= uVar9)) || (param_2 <= uVar8)) goto LAB_4a039d16;
    bVar3 = *(byte *)(param_1 + uVar8);
    uVar7 = (uint)bVar3;
    uVar5 = (ushort)bVar3;
    if (0xff < uVar7) goto LAB_4a039d1a;
    if (((int)(uVar7 << 0x18) < 0) && (uVar5 = uStack_2c, (int)(uVar7 << 0x19) < 0)) {
      if ((int)(uVar7 << 0x1a) < 0) {
        if ((int)(uVar7 << 0x1b) < 0) {
          if ((int)(uVar7 << 0x1c) < 0) {
            if ((int)(uVar7 << 0x1d) < 0) {
              if ((int)(uVar7 << 0x1e) < 0) goto joined_r0x4a039c54;
              iVar6 = 1;
              do {
                if (*(byte *)(param_1 + uVar8 + iVar6) >> 6 != 2) break;
                iVar6 = iVar6 + 1;
              } while (iVar6 < 6);
            }
            else {
              iVar6 = 1;
              do {
                if (*(byte *)(param_1 + uVar8 + iVar6) >> 6 != 2) break;
                iVar6 = iVar6 + 1;
              } while (iVar6 < 5);
            }
          }
          else {
            iVar6 = 1;
            do {
              if (*(byte *)(param_1 + uVar8 + iVar6) >> 6 != 2) break;
              iVar6 = iVar6 + 1;
            } while (iVar6 < 4);
          }
          if (bVar10) {
            *(ushort *)(param_3 + uVar9 * 2) = uStack_2c;
          }
          uVar8 = uVar8 + iVar6;
        }
        else {
          bVar1 = *(byte *)(param_1 + uVar8 + 1);
          bVar2 = *(byte *)(param_1 + uVar8 + 2);
          if (param_2 <= uVar8 + 2) {
LAB_4a039c9a:
            if (bVar10) {
              *(ushort *)(param_3 + uVar9 * 2) = uStack_2c;
            }
            uVar8 = uVar8 + 1;
LAB_4a039d16:
            if (uVar8 < param_2) {
LAB_4a039d1a:
              uVar9 = 0xffffffff;
            }
            return uVar9;
          }
          if (bVar1 >> 6 != 2) goto joined_r0x4a039c54;
          if (bVar2 >> 6 != 2) goto LAB_4a039c66;
          if ((uVar7 == 0xe0) && (bVar1 >> 5 == 4)) {
            if (bVar10) {
LAB_4a039ce2:
              *(ushort *)(param_3 + uVar9 * 2) = uStack_2c;
            }
          }
          else if (bVar10) {
            uStack_2c = (ushort)bVar3 << 0xc | (bVar1 & 0x3f) << 6 | bVar2 & 0x3f;
            goto LAB_4a039ce2;
          }
          uVar8 = uVar8 + 3;
        }
      }
      else {
        bVar1 = *(byte *)(param_1 + uVar8 + 1);
        if (param_2 <= uVar8 + 1) goto LAB_4a039c9a;
        if (bVar1 >> 6 != 2) goto joined_r0x4a039c54;
        if (bVar3 >> 1 == 0x60) {
LAB_4a039c66:
          if (bVar10) {
LAB_4a039c7c:
            *(ushort *)(param_3 + uVar9 * 2) = uStack_2c;
          }
        }
        else if (bVar10) {
          uStack_2c = (ushort)((uVar7 & 0x1f) << 6) | bVar1 & 0x3f;
          goto LAB_4a039c7c;
        }
        uVar8 = uVar8 + 2;
      }
    }
    else {
joined_r0x4a039c54:
      if (bVar10) {
        *(ushort *)(param_3 + uVar9 * 2) = uVar5;
      }
      uVar8 = uVar8 + 1;
    }
    uVar9 = uVar9 + 1;
  } while( true );
}



// Address: 4a039d70

uint FUN_4a039d70(int param_1,int param_2,byte *param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  uVar2 = 0;
  bVar4 = param_3 != (byte *)0x0;
  if (param_2 == -1) {
    for (param_2 = 0; *(short *)(param_1 + param_2 * 2) != 0; param_2 = param_2 + 1) {
    }
    param_2 = param_2 + 1;
  }
  iVar3 = 0;
  do {
    if (param_2 <= iVar3) {
      return uVar2;
    }
    uVar1 = *(ushort *)(param_1 + iVar3 * 2);
    if (uVar1 >> 7 == 0) {
      uVar2 = uVar2 + 1;
      if (!bVar4) goto LAB_4a039e16;
      if (param_4 < uVar2) {
        return 0xffffffff;
      }
      *param_3 = (byte)uVar1;
LAB_4a039e14:
      param_3 = param_3 + 1;
    }
    else if (uVar1 >> 0xb == 0) {
      uVar2 = uVar2 + 2;
      if (bVar4) {
        if (param_4 < uVar2) {
          return 0xffffffff;
        }
        *param_3 = (byte)((uVar1 & 0x3fff) >> 6) | 0xc0;
        param_3 = param_3 + 1;
LAB_4a039e10:
        *param_3 = (byte)uVar1 & 0x3f | 0x80;
        goto LAB_4a039e14;
      }
    }
    else {
      uVar2 = uVar2 + 3;
      if (bVar4) {
        if (param_4 < uVar2) {
          return 0xffffffff;
        }
        *param_3 = (byte)(uVar1 >> 0xc) | 0xe0;
        param_3[1] = (byte)((uVar1 & 0xfff) >> 6) | 0x80;
        param_3 = param_3 + 2;
        goto LAB_4a039e10;
      }
    }
LAB_4a039e16:
    iVar3 = iVar3 + 1;
  } while( true );
}



// Address: 4a039e20

undefined4 FUN_4a039e20(short *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  
  puVar2 = PTR_DAT_4a039eec;
  if (PTR_DAT_4a039eec[2] != '\0') {
    return 0;
  }
  if (*param_1 == 0xd) {
    *param_1 = 10;
  }
  uVar3 = FUN_4a0013e0(*(undefined4 *)(puVar2 + 0x18));
  sVar1 = *param_1;
  if (sVar1 == 8) {
    if (*(uint *)(puVar2 + 0x28) < uVar3) {
      uVar3 = uVar3 - 1;
      *(undefined1 *)(*(int *)(puVar2 + 0x18) + uVar3) = 0;
      goto LAB_4a039e72;
    }
  }
  else {
    if (sVar1 == 4) {
      puVar2[2] = 1;
      return 0;
    }
    if (sVar1 == 3) {
      FUN_4a15f988(2);
      return 0;
    }
    iVar4 = *(int *)(puVar2 + 0x18);
    *(char *)(iVar4 + uVar3) = (char)sVar1;
    uVar3 = uVar3 + 1;
    *(undefined1 *)(iVar4 + uVar3) = 0;
LAB_4a039e72:
    if (*param_1 == 10) {
      FUN_4a00dcf8(0,1);
      FUN_4a01c9ec();
      uVar3 = FUN_4a163010(*(undefined4 *)(puVar2 + 0x20),
                           *(int *)(puVar2 + 0x18) + *(int *)(puVar2 + 0x28),0x200);
      *(uint *)(puVar2 + 0x24) = uVar3;
      if (0x1ff < uVar3) {
        *(undefined4 *)(puVar2 + 0x24) = 0x1ff;
      }
      **(undefined1 **)(puVar2 + 0x18) = 0;
      goto LAB_4a039ea4;
    }
  }
  thunk_FUN_4a000f70(*(int *)(puVar2 + 0x18) + uVar3,0x200 - uVar3,0x20);
  *(undefined1 *)(*(int *)(puVar2 + 0x18) + 0x1ff) = 0;
  iVar4 = host_s3eDebugGetInt_thumb(6);
  host_s3eDebugPrint_thumb(0,iVar4 * *(int *)(puVar2 + 0x1c),*(int *)(puVar2 + 0x18) + -2,0,param_4)
  ;
  *(undefined1 *)(*(int *)(puVar2 + 0x18) + uVar3) = 0;
  FUN_4a00dcf8(0);
LAB_4a039ea4:
  host_s3eSurfaceShow_thumb();
  return 0;
}



// Address: 4a039ef0

void FUN_4a039ef0(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  int *piVar8;
  int iVar9;
  short *psVar10;
  undefined2 *puVar11;
  uint uVar12;
  
  thunk_FUN_4a161570(0xc4);
  piVar8 = (int *)thunk_FUN_4a0633c4();
  puVar6 = PTR_DAT_4a03a05c;
  *(int **)(PTR_DAT_4a03a05c + 0x50) = piVar8;
  if ((*(int *)(puVar6 + 0x3c) == 0 && *(int *)(puVar6 + 0x38) == 0) && *(int *)(puVar6 + 0x34) == 0
     ) {
    if (*(int *)(puVar6 + 0x28) == 0) {
      FUN_4a0612e0(piVar8,*(undefined4 *)(puVar6 + 0x1c));
    }
    else {
      FUN_4a0612e0(piVar8,*(undefined4 *)(puVar6 + 0x20));
    }
  }
  else {
    FUN_4a0612e0(piVar8,*(undefined4 *)(puVar6 + 0x24));
  }
  (**(code **)(*piVar8 + 0x3c))(piVar8);
  thunk_FUN_4a161570(0x58);
  iVar9 = thunk_FUN_4a069e28();
  *(int *)(puVar6 + 0x54) = iVar9;
  *(int **)(iVar9 + 0x2c) = piVar8;
  puVar7 = PTR_DAT_4a03a060;
  *(uint *)(iVar9 + 0x10) = *(uint *)(iVar9 + 0x10) & 0xffc0fffc | 0x40006;
  uVar12 = *(uint *)(*(int *)puVar7 + 0x344);
  sVar1 = (short)(uVar12 >> 1) - (*(ushort *)(piVar8 + 8) >> 1);
  sVar2 = (*(ushort *)(piVar8 + 8) >> 1) + (short)(uVar12 >> 1);
  uVar12 = *(uint *)(*(int *)puVar7 + 0x348);
  uVar5 = *(ushort *)((int)piVar8 + 0x22) >> 1;
  sVar3 = (short)(uVar12 >> 1) - uVar5;
  sVar4 = uVar5 + (short)(uVar12 >> 1);
  psVar10 = (short *)thunk_FUN_4a161570(0x10);
  *(short **)(puVar6 + 0x58) = psVar10;
  *psVar10 = sVar1;
  psVar10[1] = sVar3;
  psVar10[2] = sVar1;
  psVar10[3] = sVar4;
  psVar10[4] = sVar2;
  psVar10[5] = sVar4;
  psVar10[6] = sVar2;
  psVar10[7] = sVar3;
  puVar11 = (undefined2 *)thunk_FUN_4a161570(0x10);
  *(undefined2 **)(puVar6 + 0x5c) = puVar11;
  *puVar11 = 0;
  puVar11[1] = 0;
  puVar11[2] = 0;
  puVar11[3] = 0x1000;
  puVar11[4] = 0x1000;
  puVar11[5] = 0x1000;
  puVar11[6] = 0x1000;
  puVar11[7] = 0;
  return;
}



// Address: 4a03a064

void FUN_4a03a064(uint param_1,uint param_2,int *param_3,int *param_4)

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
  
  puVar3 = PTR_DAT_4a03a1b4;
  puVar2 = PTR_DAT_4a03a1b0;
  *(int **)(PTR_DAT_4a03a1b0 + 8) = param_3;
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
  return;
}



// Address: 4a03a1b8

void FUN_4a03a1b8(uint param_1,uint param_2,int *param_3,int *param_4)

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
  
  puVar3 = PTR_DAT_4a03a318;
  puVar2 = PTR_DAT_4a03a314;
  *(int **)(PTR_DAT_4a03a314 + 8) = param_3;
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
  return;
}



// Address: 4a03a31c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x4a10f980) */
/* WARNING: Removing unreachable block (ram,0x4a10f994) */
/* WARNING: Removing unreachable block (ram,0x4a10f998) */
/* WARNING: Removing unreachable block (ram,0x4a03b030) */
/* WARNING: Removing unreachable block (ram,0x4a6ba928) */
/* WARNING: Removing unreachable block (ram,0x4a03b034) */
/* WARNING: Removing unreachable block (ram,0x4a68b6fc) */
/* WARNING: Removing unreachable block (ram,0x4a03b038) */
/* WARNING: Removing unreachable block (ram,0x4a1a0210) */
/* WARNING: Removing unreachable block (ram,0x4a03b03c) */
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
/* WARNING: Removing unreachable block (ram,0x4a03b040) */
/* WARNING: Removing unreachable block (ram,0x4a688068) */
/* WARNING: Removing unreachable block (ram,0x4a03b044) */
/* WARNING: Removing unreachable block (ram,0x4a03b054) */
/* WARNING: Removing unreachable block (ram,0x4a03b064) */
/* WARNING: Removing unreachable block (ram,0x4a03b07c) */
/* WARNING: Removing unreachable block (ram,0x4a03b06c) */
/* WARNING: Removing unreachable block (ram,0x4a03a9cc) */
/* WARNING: Removing unreachable block (ram,0x4a6ba2c4) */
/* WARNING: Removing unreachable block (ram,0x4a03a9d0) */
/* WARNING: Removing unreachable block (ram,0x4a03a9d4) */
/* WARNING: Removing unreachable block (ram,0x4a03a9d8) */
/* WARNING: Removing unreachable block (ram,0x4a03a9dc) */
/* WARNING: Removing unreachable block (ram,0x4a03a9e0) */
/* WARNING: Removing unreachable block (ram,0x4a03aa64) */
/* WARNING: Removing unreachable block (ram,0x4a03aadc) */
/* WARNING: Removing unreachable block (ram,0x4a03aae0) */
/* WARNING: Removing unreachable block (ram,0x4a03aae4) */
/* WARNING: Removing unreachable block (ram,0x4a03aae8) */
/* WARNING: Removing unreachable block (ram,0x4a03aaf4) */
/* WARNING: Removing unreachable block (ram,0x4a03aaf8) */
/* WARNING: Removing unreachable block (ram,0x4a03aafc) */
/* WARNING: Removing unreachable block (ram,0x4a03ab00) */
/* WARNING: Removing unreachable block (ram,0x4a03ab0c) */
/* WARNING: Removing unreachable block (ram,0x4a03ab10) */
/* WARNING: Removing unreachable block (ram,0x4a03ab14) */
/* WARNING: Removing unreachable block (ram,0x4a03ab18) */
/* WARNING: Removing unreachable block (ram,0x4a03ab28) */
/* WARNING: Removing unreachable block (ram,0x4a03ab2c) */
/* WARNING: Removing unreachable block (ram,0x4a03ab38) */
/* WARNING: Removing unreachable block (ram,0x4a03abe0) */
/* WARNING: Removing unreachable block (ram,0x4a03ac0c) */
/* WARNING: Removing unreachable block (ram,0x4a03ab40) */
/* WARNING: Removing unreachable block (ram,0x4a03aba8) */
/* WARNING: Removing unreachable block (ram,0x4a03abc4) */
/* WARNING: Removing unreachable block (ram,0x4a03abbc) */
/* WARNING: Removing unreachable block (ram,0x4a03abc8) */
/* WARNING: Removing unreachable block (ram,0x4a03ab50) */
/* WARNING: Removing unreachable block (ram,0x4a03ab60) */
/* WARNING: Removing unreachable block (ram,0x4a03ab74) */
/* WARNING: Removing unreachable block (ram,0x4a03ab90) */
/* WARNING: Removing unreachable block (ram,0x4a03abcc) */
/* WARNING: Removing unreachable block (ram,0x4a03abd0) */
/* WARNING: Removing unreachable block (ram,0x4a03abdc) */
/* WARNING: Removing unreachable block (ram,0x4a03ac14) */
/* WARNING: Removing unreachable block (ram,0x4a03ac4c) */
/* WARNING: Removing unreachable block (ram,0x4a03ac50) */
/* WARNING: Removing unreachable block (ram,0x4a03ac54) */
/* WARNING: Removing unreachable block (ram,0x4a03ac58) */
/* WARNING: Removing unreachable block (ram,0x4a03ac80) */
/* WARNING: Removing unreachable block (ram,0x4a03ac9c) */
/* WARNING: Removing unreachable block (ram,0x4a03ad28) */
/* WARNING: Removing unreachable block (ram,0x4a03ad34) */
/* WARNING: Removing unreachable block (ram,0x4a03ad38) */
/* WARNING: Removing unreachable block (ram,0x4a03ad3c) */
/* WARNING: Removing unreachable block (ram,0x4a03ad40) */
/* WARNING: Removing unreachable block (ram,0x4a03ad48) */
/* WARNING: Removing unreachable block (ram,0x4a03ad54) */
/* WARNING: Removing unreachable block (ram,0x4a03ad64) */
/* WARNING: Removing unreachable block (ram,0x4a03ad94) */
/* WARNING: Removing unreachable block (ram,0x4a03adac) */
/* WARNING: Removing unreachable block (ram,0x4a03adb8) */
/* WARNING: Removing unreachable block (ram,0x4a03adc4) */
/* WARNING: Removing unreachable block (ram,0x4a03add0) */
/* WARNING: Removing unreachable block (ram,0x4a03ade4) */
/* WARNING: Removing unreachable block (ram,0x4a03adf4) */
/* WARNING: Removing unreachable block (ram,0x4a03ae00) */
/* WARNING: Removing unreachable block (ram,0x4a03ae04) */
/* WARNING: Removing unreachable block (ram,0x4a03ae08) */
/* WARNING: Removing unreachable block (ram,0x4a03ae0c) */
/* WARNING: Removing unreachable block (ram,0x4a03ae2c) */
/* WARNING: Removing unreachable block (ram,0x4a03ae3c) */
/* WARNING: Removing unreachable block (ram,0x4a03ae34) */
/* WARNING: Removing unreachable block (ram,0x4a03ae14) */
/* WARNING: Removing unreachable block (ram,0x4a03ae1c) */
/* WARNING: Removing unreachable block (ram,0x4a03ae24) */
/* WARNING: Removing unreachable block (ram,0x4a03ae40) */
/* WARNING: Removing unreachable block (ram,0x4a03ae44) */
/* WARNING: Removing unreachable block (ram,0x4a03ae50) */
/* WARNING: Removing unreachable block (ram,0x4a03ae54) */
/* WARNING: Removing unreachable block (ram,0x4a03ae58) */
/* WARNING: Removing unreachable block (ram,0x4a03ae5c) */
/* WARNING: Removing unreachable block (ram,0x4a03ae74) */
/* WARNING: Removing unreachable block (ram,0x4a03ae64) */
/* WARNING: Removing unreachable block (ram,0x4a03ae70) */
/* WARNING: Removing unreachable block (ram,0x4a03ae80) */
/* WARNING: Removing unreachable block (ram,0x4a03ae84) */
/* WARNING: Removing unreachable block (ram,0x4a03ae8c) */
/* WARNING: Removing unreachable block (ram,0x4a03ae90) */
/* WARNING: Removing unreachable block (ram,0x4a03ae94) */
/* WARNING: Removing unreachable block (ram,0x4a03ae9c) */
/* WARNING: Removing unreachable block (ram,0x4a03aea4) */
/* WARNING: Removing unreachable block (ram,0x4a03aecc) */
/* WARNING: Removing unreachable block (ram,0x4a03aed4) */
/* WARNING: Removing unreachable block (ram,0x4a03aed8) */
/* WARNING: Removing unreachable block (ram,0x4a03aee0) */
/* WARNING: Removing unreachable block (ram,0x4a03aee4) */
/* WARNING: Removing unreachable block (ram,0x4a03aee8) */
/* WARNING: Removing unreachable block (ram,0x4a03aeec) */
/* WARNING: Removing unreachable block (ram,0x4a03aef0) */
/* WARNING: Removing unreachable block (ram,0x4a03af0c) */
/* WARNING: Removing unreachable block (ram,0x4a03af40) */
/* WARNING: Removing unreachable block (ram,0x4a03af44) */
/* WARNING: Removing unreachable block (ram,0x4a03af4c) */
/* WARNING: Removing unreachable block (ram,0x4a03af5c) */
/* WARNING: Removing unreachable block (ram,0x4a03af74) */
/* WARNING: Removing unreachable block (ram,0x4a03af64) */
/* WARNING: Removing unreachable block (ram,0x4a03af70) */
/* WARNING: Removing unreachable block (ram,0x4a03af7c) */
/* WARNING: Removing unreachable block (ram,0x4a03af84) */
/* WARNING: Removing unreachable block (ram,0x4a03afb8) */
/* WARNING: Removing unreachable block (ram,0x4a03afbc) */
/* WARNING: Removing unreachable block (ram,0x4a03afc0) */
/* WARNING: Removing unreachable block (ram,0x4a03afc8) */
/* WARNING: Removing unreachable block (ram,0x4a03afd8) */
/* WARNING: Removing unreachable block (ram,0x4a03afe0) */
/* WARNING: Removing unreachable block (ram,0x4a03aff0) */
/* WARNING: Removing unreachable block (ram,0x4a03aff4) */
/* WARNING: Removing unreachable block (ram,0x4a03aff8) */
/* WARNING: Removing unreachable block (ram,0x4a03affc) */
/* WARNING: Removing unreachable block (ram,0x4a03b018) */
/* WARNING: Removing unreachable block (ram,0x4a03b020) */
/* WARNING: Removing unreachable block (ram,0x4a029958) */
/* WARNING: Removing unreachable block (ram,0x4a02997c) */
/* WARNING: Removing unreachable block (ram,0x4a029980) */
/* WARNING: Removing unreachable block (ram,0x4a029984) */
/* WARNING: Removing unreachable block (ram,0x4a02998c) */
/* WARNING: Removing unreachable block (ram,0x4a029c28) */
/* WARNING: Removing unreachable block (ram,0x4a029c38) */
/* WARNING: Removing unreachable block (ram,0x4a029c4c) */
/* WARNING: Removing unreachable block (ram,0x4a029c54) */
/* WARNING: Removing unreachable block (ram,0x4a029c68) */
/* WARNING: Removing unreachable block (ram,0x4a029b04) */
/* WARNING: Removing unreachable block (ram,0x4a029b14) */
/* WARNING: Removing unreachable block (ram,0x4a029b2c) */
/* WARNING: Removing unreachable block (ram,0x4a029b38) */
/* WARNING: Removing unreachable block (ram,0x4a029b5c) */
/* WARNING: Removing unreachable block (ram,0x4a0299e0) */
/* WARNING: Removing unreachable block (ram,0x4a0299ec) */
/* WARNING: Removing unreachable block (ram,0x4a029a10) */
/* WARNING: Removing unreachable block (ram,0x4a029a28) */
/* WARNING: Removing unreachable block (ram,0x4a029a30) */
/* WARNING: Removing unreachable block (ram,0x4a029a40) */
/* WARNING: Removing unreachable block (ram,0x4a029a48) */
/* WARNING: Removing unreachable block (ram,0x4a029a58) */
/* WARNING: Removing unreachable block (ram,0x4a029a60) */
/* WARNING: Removing unreachable block (ram,0x4a029a70) */
/* WARNING: Removing unreachable block (ram,0x4a029a90) */
/* WARNING: Removing unreachable block (ram,0x4a029aa8) */
/* WARNING: Removing unreachable block (ram,0x4a029ab0) */
/* WARNING: Removing unreachable block (ram,0x4a029ac0) */
/* WARNING: Removing unreachable block (ram,0x4a029ac8) */
/* WARNING: Removing unreachable block (ram,0x4a029ad8) */
/* WARNING: Removing unreachable block (ram,0x4a029ae0) */
/* WARNING: Removing unreachable block (ram,0x4a029af0) */
/* WARNING: Removing unreachable block (ram,0x4a029c78) */
/* WARNING: Removing unreachable block (ram,0x4a029c84) */
/* WARNING: Removing unreachable block (ram,0x4a029ca0) */
/* WARNING: Removing unreachable block (ram,0x4a029cdc) */
/* WARNING: Removing unreachable block (ram,0x4a029cac) */
/* WARNING: Removing unreachable block (ram,0x4a029cbc) */
/* WARNING: Removing unreachable block (ram,0x4a029ccc) */
/* WARNING: Removing unreachable block (ram,0x4a029cd8) */
/* WARNING: Removing unreachable block (ram,0x4a029cec) */
/* WARNING: Removing unreachable block (ram,0x4a029cf4) */
/* WARNING: Removing unreachable block (ram,0x4a029d00) */
/* WARNING: Removing unreachable block (ram,0x4a029d0c) */
/* WARNING: Removing unreachable block (ram,0x4a029d1c) */
/* WARNING: Removing unreachable block (ram,0x4a029d28) */
/* WARNING: Removing unreachable block (ram,0x4a029d2c) */
/* WARNING: Removing unreachable block (ram,0x4a029d30) */
/* WARNING: Removing unreachable block (ram,0x4a029d34) */
/* WARNING: Removing unreachable block (ram,0x4a029d40) */
/* WARNING: Removing unreachable block (ram,0x4a029d4c) */
/* WARNING: Removing unreachable block (ram,0x4a029d54) */
/* WARNING: Removing unreachable block (ram,0x4a029d58) */
/* WARNING: Removing unreachable block (ram,0x4a029d64) */
/* WARNING: Removing unreachable block (ram,0x4a029d68) */
/* WARNING: Removing unreachable block (ram,0x4a029d6c) */
/* WARNING: Removing unreachable block (ram,0x4a029d70) */
/* WARNING: Removing unreachable block (ram,0x4a029d7c) */
/* WARNING: Removing unreachable block (ram,0x4a029d88) */
/* WARNING: Removing unreachable block (ram,0x4a029d90) */
/* WARNING: Removing unreachable block (ram,0x4a029d9c) */
/* WARNING: Removing unreachable block (ram,0x4a029db0) */
/* WARNING: Removing unreachable block (ram,0x4a029dbc) */
/* WARNING: Removing unreachable block (ram,0x4a029dc8) */
/* WARNING: Removing unreachable block (ram,0x4a029dec) */
/* WARNING: Removing unreachable block (ram,0x4a029b68) */
/* WARNING: Removing unreachable block (ram,0x4a029b7c) */
/* WARNING: Removing unreachable block (ram,0x4a029b8c) */
/* WARNING: Removing unreachable block (ram,0x4a029ba8) */
/* WARNING: Removing unreachable block (ram,0x4a029bc0) */
/* WARNING: Removing unreachable block (ram,0x4a029bc8) */
/* WARNING: Removing unreachable block (ram,0x4a029bd8) */
/* WARNING: Removing unreachable block (ram,0x4a029be0) */
/* WARNING: Removing unreachable block (ram,0x4a029bf0) */
/* WARNING: Removing unreachable block (ram,0x4a029bf8) */
/* WARNING: Removing unreachable block (ram,0x4a029c08) */
/* WARNING: Removing unreachable block (ram,0x4a029c0c) */
/* WARNING: Removing unreachable block (ram,0x4a029c14) */
/* WARNING: Removing unreachable block (ram,0x4a029c18) */
/* WARNING: Removing unreachable block (ram,0x4a029c24) */
/* WARNING: Removing unreachable block (ram,0x4a03b024) */
/* WARNING: Removing unreachable block (ram,0x4a03dfcc) */
/* WARNING: Removing unreachable block (ram,0x4a03dff4) */
/* WARNING: Removing unreachable block (ram,0x4a03e008) */
/* WARNING: Removing unreachable block (ram,0x4a03e010) */
/* WARNING: Removing unreachable block (ram,0x4a03e024) */
/* WARNING: Removing unreachable block (ram,0x4a03dc88) */
/* WARNING: Removing unreachable block (ram,0x4a03dc98) */
/* WARNING: Removing unreachable block (ram,0x4a03dcb4) */
/* WARNING: Removing unreachable block (ram,0x4a03dd28) */
/* WARNING: Removing unreachable block (ram,0x4a03dd2c) */
/* WARNING: Removing unreachable block (ram,0x4a03dd3c) */
/* WARNING: Removing unreachable block (ram,0x4a03dd40) */
/* WARNING: Removing unreachable block (ram,0x4a03dd90) */
/* WARNING: Removing unreachable block (ram,0x4a03dd9c) */
/* WARNING: Removing unreachable block (ram,0x4a03dda0) */
/* WARNING: Removing unreachable block (ram,0x4a03ddb8) */
/* WARNING: Removing unreachable block (ram,0x4a03ddbc) */
/* WARNING: Removing unreachable block (ram,0x4a03ddc4) */
/* WARNING: Removing unreachable block (ram,0x4a03ddc8) */
/* WARNING: Removing unreachable block (ram,0x4a03dddc) */
/* WARNING: Removing unreachable block (ram,0x4a03dde0) */
/* WARNING: Removing unreachable block (ram,0x4a03de10) */
/* WARNING: Removing unreachable block (ram,0x4a03dde8) */
/* WARNING: Removing unreachable block (ram,0x4a03de1c) */
/* WARNING: Removing unreachable block (ram,0x4a03de3c) */
/* WARNING: Removing unreachable block (ram,0x4a03de44) */
/* WARNING: Removing unreachable block (ram,0x4a03dd4c) */
/* WARNING: Removing unreachable block (ram,0x4a03dd84) */
/* WARNING: Removing unreachable block (ram,0x4a03dd88) */
/* WARNING: Removing unreachable block (ram,0x4a03de4c) */
/* WARNING: Removing unreachable block (ram,0x4a03de60) */
/* WARNING: Removing unreachable block (ram,0x4a03de64) */
/* WARNING: Removing unreachable block (ram,0x4a03de68) */
/* WARNING: Removing unreachable block (ram,0x4a03de6c) */
/* WARNING: Removing unreachable block (ram,0x4a03de74) */
/* WARNING: Removing unreachable block (ram,0x4a03de80) */
/* WARNING: Removing unreachable block (ram,0x4a03de8c) */
/* WARNING: Removing unreachable block (ram,0x4a03deb0) */
/* WARNING: Removing unreachable block (ram,0x4a03dec4) */
/* WARNING: Removing unreachable block (ram,0x4a03ded0) */
/* WARNING: Removing unreachable block (ram,0x4a03def0) */
/* WARNING: Removing unreachable block (ram,0x4a03df20) */
/* WARNING: Removing unreachable block (ram,0x4a03db98) */
/* WARNING: Removing unreachable block (ram,0x4a03dba8) */
/* WARNING: Removing unreachable block (ram,0x4a03dbd4) */
/* WARNING: Removing unreachable block (ram,0x4a03dbe4) */
/* WARNING: Removing unreachable block (ram,0x4a03dbec) */
/* WARNING: Removing unreachable block (ram,0x4a03dbfc) */
/* WARNING: Removing unreachable block (ram,0x4a03dc04) */
/* WARNING: Removing unreachable block (ram,0x4a03dc14) */
/* WARNING: Removing unreachable block (ram,0x4a03dc34) */
/* WARNING: Removing unreachable block (ram,0x4a03dc44) */
/* WARNING: Removing unreachable block (ram,0x4a03dc4c) */
/* WARNING: Removing unreachable block (ram,0x4a03dc5c) */
/* WARNING: Removing unreachable block (ram,0x4a03dc64) */
/* WARNING: Removing unreachable block (ram,0x4a03dc74) */
/* WARNING: Removing unreachable block (ram,0x4a03e034) */
/* WARNING: Removing unreachable block (ram,0x4a03e040) */
/* WARNING: Removing unreachable block (ram,0x4a03e05c) */
/* WARNING: Removing unreachable block (ram,0x4a03e098) */
/* WARNING: Removing unreachable block (ram,0x4a03e068) */
/* WARNING: Removing unreachable block (ram,0x4a03e078) */
/* WARNING: Removing unreachable block (ram,0x4a03e088) */
/* WARNING: Removing unreachable block (ram,0x4a03e094) */
/* WARNING: Removing unreachable block (ram,0x4a03e0a8) */
/* WARNING: Removing unreachable block (ram,0x4a03e0b0) */
/* WARNING: Removing unreachable block (ram,0x4a03e0bc) */
/* WARNING: Removing unreachable block (ram,0x4a03e0c8) */
/* WARNING: Removing unreachable block (ram,0x4a03e0d8) */
/* WARNING: Removing unreachable block (ram,0x4a03e0e4) */
/* WARNING: Removing unreachable block (ram,0x4a03e0e8) */
/* WARNING: Removing unreachable block (ram,0x4a03e0ec) */
/* WARNING: Removing unreachable block (ram,0x4a03e0f0) */
/* WARNING: Removing unreachable block (ram,0x4a03e0fc) */
/* WARNING: Removing unreachable block (ram,0x4a03e108) */
/* WARNING: Removing unreachable block (ram,0x4a03e110) */
/* WARNING: Removing unreachable block (ram,0x4a03e114) */
/* WARNING: Removing unreachable block (ram,0x4a03e120) */
/* WARNING: Removing unreachable block (ram,0x4a03e124) */
/* WARNING: Removing unreachable block (ram,0x4a03e128) */
/* WARNING: Removing unreachable block (ram,0x4a03e12c) */
/* WARNING: Removing unreachable block (ram,0x4a03e138) */
/* WARNING: Removing unreachable block (ram,0x4a03e144) */
/* WARNING: Removing unreachable block (ram,0x4a03e14c) */
/* WARNING: Removing unreachable block (ram,0x4a03e158) */
/* WARNING: Removing unreachable block (ram,0x4a03e170) */
/* WARNING: Removing unreachable block (ram,0x4a03e1e4) */
/* WARNING: Removing unreachable block (ram,0x4a03e1e8) */
/* WARNING: Removing unreachable block (ram,0x4a03e1f8) */
/* WARNING: Removing unreachable block (ram,0x4a03e1fc) */
/* WARNING: Removing unreachable block (ram,0x4a03e24c) */
/* WARNING: Removing unreachable block (ram,0x4a03e258) */
/* WARNING: Removing unreachable block (ram,0x4a03e25c) */
/* WARNING: Removing unreachable block (ram,0x4a03e274) */
/* WARNING: Removing unreachable block (ram,0x4a03e278) */
/* WARNING: Removing unreachable block (ram,0x4a03e280) */
/* WARNING: Removing unreachable block (ram,0x4a03e284) */
/* WARNING: Removing unreachable block (ram,0x4a03e298) */
/* WARNING: Removing unreachable block (ram,0x4a03e29c) */
/* WARNING: Removing unreachable block (ram,0x4a03e2cc) */
/* WARNING: Removing unreachable block (ram,0x4a03e2a4) */
/* WARNING: Removing unreachable block (ram,0x4a03e2d8) */
/* WARNING: Removing unreachable block (ram,0x4a03e2f8) */
/* WARNING: Removing unreachable block (ram,0x4a03e300) */
/* WARNING: Removing unreachable block (ram,0x4a03e208) */
/* WARNING: Removing unreachable block (ram,0x4a03e240) */
/* WARNING: Removing unreachable block (ram,0x4a03e244) */
/* WARNING: Removing unreachable block (ram,0x4a03e308) */
/* WARNING: Removing unreachable block (ram,0x4a03e324) */
/* WARNING: Removing unreachable block (ram,0x4a03e328) */
/* WARNING: Removing unreachable block (ram,0x4a03e32c) */
/* WARNING: Removing unreachable block (ram,0x4a03e330) */
/* WARNING: Removing unreachable block (ram,0x4a03e338) */
/* WARNING: Removing unreachable block (ram,0x4a03e344) */
/* WARNING: Removing unreachable block (ram,0x4a03e350) */
/* WARNING: Removing unreachable block (ram,0x4a03e374) */
/* WARNING: Removing unreachable block (ram,0x4a03e388) */
/* WARNING: Removing unreachable block (ram,0x4a03e394) */
/* WARNING: Removing unreachable block (ram,0x4a03e3b0) */
/* WARNING: Removing unreachable block (ram,0x4a03e3bc) */
/* WARNING: Removing unreachable block (ram,0x4a03e3ec) */
/* WARNING: Removing unreachable block (ram,0x4a03df2c) */
/* WARNING: Removing unreachable block (ram,0x4a03df44) */
/* WARNING: Removing unreachable block (ram,0x4a03df54) */
/* WARNING: Removing unreachable block (ram,0x4a03df6c) */
/* WARNING: Removing unreachable block (ram,0x4a03df7c) */
/* WARNING: Removing unreachable block (ram,0x4a03df84) */
/* WARNING: Removing unreachable block (ram,0x4a03df94) */
/* WARNING: Removing unreachable block (ram,0x4a03df9c) */
/* WARNING: Removing unreachable block (ram,0x4a03dfac) */
/* WARNING: Removing unreachable block (ram,0x4a03dfb0) */
/* WARNING: Removing unreachable block (ram,0x4a03dfb8) */
/* WARNING: Removing unreachable block (ram,0x4a03dfbc) */
/* WARNING: Removing unreachable block (ram,0x4a03dfc8) */
/* WARNING: Removing unreachable block (ram,0x4a687a04) */
/* WARNING: Removing unreachable block (ram,0x4a19ed8c) */
/* WARNING: Removing unreachable block (ram,0x4a68b098) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_4a03a31c(uint *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  undefined *puVar5;
  undefined *puVar6;
  short *psVar7;
  int iVar8;
  code *pcVar9;
  code *pcVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  code *pcVar17;
  uint uVar18;
  int iVar19;
  int *piVar20;
  undefined *unaff_r4;
  uint uVar21;
  undefined *puVar22;
  int *piVar23;
  uint unaff_r5;
  int iVar24;
  uint *unaff_r6;
  int iVar25;
  uint *puVar26;
  uint unaff_r7;
  int iVar27;
  uint unaff_r8;
  int iVar28;
  uint uVar29;
  undefined *unaff_r9;
  uint uVar30;
  undefined *puVar31;
  uint unaff_r10;
  uint uVar32;
  int unaff_r11;
  int iVar33;
  code *pcVar34;
  undefined4 *puVar35;
  int *piVar36;
  code *UNRECOVERED_JUMPTABLE_00;
  code *pcVar37;
  int *piVar38;
  bool bVar39;
  int iStack_60;
  int iStack_5c;
  uint uStack_58;
  int iStack_54;
  code *pcStack_50;
  code *pcStack_4c;
  code *local_48;
  code *local_44;
  code *local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint *local_30;
  int iStack_2c;
  uint local_28;
  
  local_30 = param_1 + -1;
  iStack_2c = 0;
  uVar32 = 0;
  local_34 = (*param_1 & 0x1ffffff) >> 0x13;
  iVar16 = *(int *)PTR_DAT_4a03a9d0;
  local_28 = param_1[2];
  iVar25 = 0;
  uVar1 = *(ushort *)(local_28 + 0x4a);
  uVar2 = *(ushort *)(local_28 + 0x48);
  iVar27 = 0x7f00;
  local_40 = (code *)(local_34 - 1);
  local_3c = (uint)uVar2;
  uVar30 = 0x3f;
  iVar24 = 0x7f000000;
  iVar28 = 0;
  local_44 = (code *)0x0;
  local_38 = (uint)uVar1;
  local_48 = (code *)0x7f00;
  puVar26 = (uint *)(PTR_LAB_4a03a9cc + 0xb4);
  pcVar9 = *(code **)(PTR_LAB_4a03a9cc + 0x28);
  do {
    sVar4 = *(short *)((int)param_1 + 0x12);
    psVar7 = (short *)param_1[3];
    *(short *)(iVar16 + 0x18) = (short)((uint)uVar1 * (int)(short)param_1[4] >> 8);
    *(short *)(iVar16 + 0x1a) = (short)((uint)uVar2 * (int)sVar4 >> 8);
    uVar3 = psVar7[8];
    uVar18 = (uint)uVar3;
    *(undefined4 *)(iVar16 + 4) = *(undefined4 *)psVar7;
    uVar30 = uVar30 & uVar18;
    *(undefined4 *)(iVar16 + 8) = *(undefined4 *)(psVar7 + 2);
    uVar32 = uVar32 | uVar18;
    *(undefined4 *)(iVar16 + 0xc) = *(undefined4 *)(psVar7 + 4);
    iVar33 = *(int *)(psVar7 + 6);
    *(int *)(iVar16 + 0x10) = iVar33;
    *(ushort *)(iVar16 + 0x14) = uVar3;
    pcVar37 = pcVar9 + 4;
    *(int *)pcVar9 = iVar16;
    *puVar26 = uVar18;
    iVar19 = *(int *)(psVar7 + 6);
    if (iVar25 < iVar19) {
      iVar25 = iVar19;
    }
    if (iVar19 < iVar24) {
      iVar24 = iVar19;
    }
    iVar19 = (int)*psVar7;
    iVar16 = iVar16 + 0x20;
    if ((int)local_44 < iVar19) {
      local_44 = (code *)iVar19;
    }
    iVar8 = (int)psVar7[1];
    if (iVar19 < iVar27) {
      iVar27 = iVar19;
    }
    if (iVar28 < iVar8) {
      iVar28 = iVar8;
    }
    if (iVar8 < (int)local_48) {
      local_48 = (code *)iVar8;
    }
    bVar39 = local_40 != (code *)0x0;
    local_40 = (code *)((int)local_40 + -1);
    puVar26 = puVar26 + 1;
    pcVar9 = pcVar37;
    param_1 = param_1 + 2;
  } while (bVar39);
  if (uVar30 != 0) {
    return -1;
  }
  if ((uVar32 & 0x3f) == 0) {
    iVar25 = (iVar25 - iVar24) * ((iVar28 - (int)local_48) + ((int)local_44 - iVar27) + 8 >> 4);
    if (iVar25 + iVar24 * -2 == 0 || iVar25 < iVar24 * 2) {
      iStack_2c = 1;
    }
  }
  else {
    if ((*(uint *)(PTR_LAB_4a03a9cc + 0xb4) & 0x200) == 0) {
      if ((*(uint *)(PTR_LAB_4a03a9cc + 0xb4) & 0x400) == 0) {
        pcVar37 = (code *)0x4a03a508;
        local_34 = FUN_4a0581dc(1,local_34,PTR_LAB_4a03a9cc + 0xb4);
      }
      else {
        pcVar37 = (code *)0x4a03a500;
        local_34 = FUN_4a02a41c();
      }
    }
    else {
      iVar24 = 0;
      if (local_34 != 0) {
        do {
          iVar24 = iVar24 + 1;
        } while (iVar24 < (int)local_34);
      }
      pcVar37 = (code *)0x4a03a4e0;
      local_34 = FUN_4a057b8c(1,local_34,PTR_LAB_4a03a9cc + 0xb4);
    }
    if ((int)local_34 < 3) {
                    /* WARNING: Could not recover jumptable at 0x4a03a518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar24 = (*UNRECOVERED_JUMPTABLE_00)();
      return iVar24;
    }
  }
  puVar26 = (uint *)(PTR_LAB_4a03a9cc + 0x1b4);
  iVar24 = (*(int **)(PTR_LAB_4a03a9cc + 0x28))[local_34 - 1];
  local_3c = (int)*(short *)(iVar24 + 6) + 3U >> 3;
  local_40 = (code *)PTR_FUN_4a03a9d4;
  if (iStack_2c != 0) {
    local_40 = (code *)PTR_FUN_4a03a9d8;
  }
  local_44 = (code *)0x0;
  local_48 = (code *)0x0;
  pcStack_4c = (code *)0x0;
  pcStack_50 = (code *)0x0;
  iStack_54 = 0;
  piVar36 = *(int **)(PTR_LAB_4a03a9cc + 0x28);
  uVar30 = local_3c;
  puVar22 = PTR_LAB_4a03a9cc;
  local_38 = local_3c;
  uVar18 = local_34;
  while (uVar21 = uVar30, iVar25 = iVar24, pcVar9 = pcStack_50, local_34 = uVar18 - 1,
        PTR_LAB_4a03a9cc = puVar22, uVar18 != 0) {
    piVar14 = piVar36 + 1;
    iVar24 = *piVar36;
    iVar27 = (int)*(short *)(iVar24 + 6);
    uVar30 = iVar27 + 3U >> 3;
    if (iStack_2c != 0) {
      uVar32 = (uint)*(short *)(iVar25 + 0x1a);
      iVar33 = (int)*(short *)(iVar25 + 6);
      uStack_58 = uVar32;
      iStack_5c = iVar33;
      iStack_60 = iVar27;
      local_44 = local_44 +
                 (iVar33 - iVar27) *
                 ((int)*(short *)(iVar25 + 0x18) + (int)*(short *)(iVar24 + 0x18));
      local_48 = local_48 + (uVar32 + (int)*(short *)(iVar24 + 0x1a)) * (iVar33 - iVar27);
      iVar28 = (int)*(short *)(iVar25 + 4) + (int)*(short *)(iVar24 + 4);
      pcStack_4c = pcStack_4c +
                   iVar28 * ((int)*(short *)(iVar25 + 0x18) - (int)*(short *)(iVar24 + 0x18));
      pcStack_50 = pcStack_50 + (uVar32 - (int)*(short *)(iVar24 + 0x1a)) * iVar28;
      iStack_54 = (iVar33 + iVar27) * ((int)*(short *)(iVar25 + 4) - (int)*(short *)(iVar24 + 4)) +
                  iStack_54;
      pcVar37 = pcVar9;
    }
    if ((int)local_3c < (int)uVar30) {
      local_3c = uVar30;
    }
    if ((int)uVar30 < (int)local_38) {
      local_38 = uVar30;
    }
    piVar36 = piVar14;
    uVar18 = local_34;
    if (uVar21 != uVar30) {
      uVar18 = uVar21;
      iVar27 = iVar25;
      iVar28 = iVar24;
      if (uVar21 > uVar30) {
        uVar18 = uVar30;
        iVar27 = iVar24;
        iVar28 = iVar25;
      }
      *(ushort *)(puVar26 + 6) = (ushort)(uVar21 <= uVar30);
      puVar22 = PTR_LAB_4a03a9cc;
      pcVar37 = (code *)0x4a03a6d0;
      puVar26[0xb] = *(uint *)(*(int *)(PTR_LAB_4a03a9cc + 0xb0) + uVar18 * 4);
      *(uint **)(*(int *)(puVar22 + 0xb0) + uVar18 * 4) = puVar26;
      (*local_40)(puVar26,iVar27,iVar28);
      puVar26 = puVar26 + 0xc;
      puVar22 = PTR_LAB_4a03a9cc;
      uVar18 = local_34;
    }
  }
  if (local_3c == local_38) {
                    /* WARNING: Could not recover jumptable at 0x4a03a700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar24 = (*UNRECOVERED_JUMPTABLE_00)();
    return iVar24;
  }
  if (iStack_2c != 0) {
    uVar30 = 0;
    if ((puVar22[0x44] == '\0') && (uVar30 = (uint)*(byte *)(local_28 + 0x62), uVar30 != 0)) {
      pcVar9 = local_44;
      if ((int)local_44 < 1) {
        pcVar9 = (code *)-(int)local_44;
      }
      pcVar17 = local_48;
      if ((int)local_48 < 1) {
        pcVar17 = (code *)-(int)local_48;
      }
      pcVar34 = local_48;
      if ((int)pcVar17 < (int)pcVar9) {
        pcVar34 = local_44;
      }
      if ((int)pcVar34 < 1) {
        pcVar34 = (code *)-(int)pcVar34;
      }
      pcVar9 = pcStack_4c;
      if ((int)pcStack_4c < 1) {
        pcVar9 = (code *)-(int)pcStack_4c;
      }
      pcVar17 = pcStack_50;
      if ((int)pcStack_50 < 1) {
        pcVar17 = (code *)-(int)pcStack_50;
      }
      pcVar10 = pcStack_50;
      if ((int)pcVar17 < (int)pcVar9) {
        pcVar10 = pcStack_4c;
      }
      if ((int)pcVar10 < 1) {
        pcVar10 = (code *)-(int)pcVar10;
      }
      if ((int)pcVar10 < (int)pcVar34) {
        pcVar10 = pcVar34;
      }
      if (iStack_54 < 0) {
        iStack_54 = -iStack_54;
      }
      if (iStack_54 != 0) {
        pcVar37 = (code *)0x4a03a800;
        uVar18 = FUN_4a00080c((int)pcVar10 << 0x13,
                              ((int)pcVar10 >> 0x1f) << 0x13 | (uint)pcVar10 >> 0xd,iStack_54,
                              iStack_54 >> 0x1f);
        uVar21 = 0;
        if (0x9ffff < uVar18 >> 4) {
          uVar21 = 4;
          uVar18 = uVar18 >> 4;
        }
        if (0x9ffff < uVar18 >> 2) {
          uVar21 = uVar21 + 2;
          uVar18 = uVar18 >> 2;
        }
        if (0x9ffff < uVar18 >> 1) {
          uVar21 = uVar21 + 1;
        }
        if (uVar21 < uVar30) {
          uVar30 = uVar21;
        }
      }
    }
    iVar24 = local_28 + uVar30 * 8;
    *(undefined4 *)(puVar22 + 0x84) = *(undefined4 *)(iVar24 + 100);
    uVar11 = *(undefined4 *)(iVar24 + 0x68);
    puVar26 = (uint *)(puVar22 + 0x54);
    *puVar26 = uVar30;
    *(undefined4 *)(puVar22 + 0x88) = uVar11;
  }
  uVar30 = local_3c;
  puVar22 = PTR_LAB_4a03a9cc;
  uVar21 = local_3c | local_38 << 0x10;
  *(uint *)(PTR_LAB_4a03a9cc + 4) = local_30[2];
  uVar18 = (uint)*(byte *)(local_28 + 0x61) | local_30[1] | (local_30[1] & 0x4000000) >> 0x16;
  if ((*(uint *)(local_28 + 0x34) & 0x40) == 0) {
    uVar18 = uVar18 | 0x100;
  }
  uVar29 = (int)*(short *)(*(int *)(local_28 + 0x58) + 0x18) >> 8;
  if (uVar29 == 0) {
    *(undefined4 *)(puVar22 + 0x58) = 0;
  }
  else {
    iVar24 = 1;
    while (iVar25 = iVar24, uVar29 >> 1 != 0) {
      uVar29 = uVar29 >> 2;
      iVar25 = iVar24 + 1;
      if (uVar29 == 0) break;
      iVar24 = iVar24 + 2;
    }
    *(int *)(puVar22 + 0x58) = iVar25;
  }
  *(uint *)(puVar22 + 0x5c) = ~(*(uint *)(local_28 + 0x34) >> 1) & 1;
  uVar29 = uVar18 & 7;
  *(int *)(puVar22 + 0x60) = *(int *)(puVar22 + 0x60) + -0x20;
  if ((uVar29 == 1 || uVar29 == 2) || uVar29 == 5) {
    puVar26 = *(uint **)(local_28 + 0xa4);
    if (puVar26[1] == 0) {
      pcVar37 = (code *)0x4a03a928;
      FUN_4a038b1c(puVar26);
    }
    *(short *)((int)puVar26 + 10) = *(short *)((int)puVar26 + 10) + 1;
    if ((uVar18 & 0x10) == 0) {
      uVar12 = puVar26[1];
    }
    else {
      uVar12 = *puVar26;
    }
    *(uint *)(puVar22 + 0x8c) = uVar12;
  }
  uVar12 = local_28;
  *(undefined4 *)(puVar22 + 0x68) = *(undefined4 *)(PTR_PTR_4a03a9dc + (uVar18 & 0x1ff) * 4);
  if ((uVar18 & 0x10) == 0) {
    if (*(char *)(local_28 + 99) == '\0' || uVar29 == 5) {
      uVar13 = (uint)(byte)puVar22[4] << 0x14;
    }
    else {
      uVar13 = 0;
    }
  }
  else {
    uVar13 = *(uint *)(puVar22 + 4);
    uVar13 = (uVar13 & 0xf8) << 8 | uVar13 >> 5 & 0x7e0 | (uVar13 & 0xffffff) >> 0x13 |
             (uint)(byte)puVar22[7] << 0x18;
  }
  *(uint *)(puVar22 + 0x90) = uVar13;
  puVar6 = PTR_LAB_4a03db30;
  puVar5 = PTR_LAB_4a029954;
  uVar13 = uVar21;
  uVar18 = uVar18 & 0x1ff;
  puVar31 = puVar22 + 0x6c;
  piVar36 = &iStack_60;
  if (iStack_2c == 0) {
    puVar22 = unaff_r4;
    uVar13 = unaff_r5;
    puVar26 = unaff_r6;
    uVar18 = unaff_r7;
    uVar29 = unaff_r8;
    puVar31 = unaff_r9;
    uVar32 = unaff_r10;
    iVar33 = unaff_r11;
    piVar36 = (int *)register0x00000054;
    pcVar37 = UNRECOVERED_JUMPTABLE_00;
  }
  iVar24 = (int)uVar21 >> 0x10;
  if (iStack_2c == 0) {
    *(code **)((int)piVar36 + -4) = pcVar37;
    *(int *)((int)piVar36 + -8) = iVar33;
    *(uint *)((int)piVar36 + -0xc) = uVar32;
    *(undefined **)((int)piVar36 + -0x10) = puVar31;
    *(uint *)((int)piVar36 + -0x14) = uVar29;
    *(uint *)((int)piVar36 + -0x18) = uVar18;
    *(uint **)((int)piVar36 + -0x1c) = puVar26;
    *(uint *)((int)piVar36 + -0x20) = uVar13;
    *(undefined **)((int)piVar36 + -0x24) = puVar22;
    *(uint *)((int)piVar36 + -0x28) = uVar12;
    *(uint *)((int)piVar36 + -0x2c) = uVar21;
    *(undefined4 *)((int)piVar36 + -0x30) = 0;
    uVar32 = (uint)(byte)PTR_LAB_4a029954[0x44];
    piVar14 = (int *)(PTR_LAB_4a029954 + 0xb4);
    bVar39 = uVar32 == 0;
    if (bVar39) {
      uVar32 = *(uint *)((int)piVar36 + -0x28);
    }
    iVar25 = 0;
    if (bVar39) {
      *(uint *)((int)piVar36 + -0x30) = (uint)*(byte *)(uVar32 + 0x62);
    }
    *(undefined4 *)(PTR_LAB_4a029954 + 0x84) = *(undefined4 *)(*(int *)((int)piVar36 + -0x28) + 100)
    ;
    *(undefined4 *)(puVar5 + 0x88) = *(undefined4 *)(*(int *)((int)piVar36 + -0x28) + 0x68);
    *(undefined4 *)(puVar5 + 0x54) = 0;
    *(int *)(puVar5 + 0x4c) = iVar24;
    *(int *)(puVar5 + 0x50) = *(int *)(puVar5 + 0x40) + iVar24 * *(int *)(puVar5 + 0x38) * 2;
    iVar27 = ((uVar30 & 0xffff) - 1) - iVar24;
    piVar23 = (int *)(*(int *)(puVar5 + 0xb0) + iVar24 * 4);
    do {
      iVar24 = *piVar23;
      piVar15 = piVar23 + 1;
      *piVar23 = 0;
      iVar28 = iVar25;
      for (; iVar24 != 0; iVar24 = *(int *)(iVar24 + 0x2c)) {
        piVar14[iVar28] = iVar24;
        iVar28 = iVar28 + 1;
      }
      if (iVar28 == 2) {
        if (*(int *)*piVar14 <= **(int **)(puVar5 + 0xb8)) goto LAB_4a029678;
        do {
          iVar24 = *piVar14;
          *piVar14 = *(int *)(puVar5 + 0xb8);
          *(int *)(puVar5 + 0xb8) = iVar24;
LAB_4a029678:
          do {
            piVar23 = (int *)*piVar14;
            if (((*(ushort *)(piVar23 + 6) & 1) != 0) &&
               (0 < (**(int **)(puVar5 + 0xb8) >> 0x12) - (*piVar23 >> 0x12))) {
              FUN_4a05ccbc(piVar23,*(int **)(puVar5 + 0xb8),*(undefined4 *)((int)piVar36 + -0x30),
                           *(undefined4 *)((int)piVar36 + -0x28));
            }
            bVar39 = iVar27 == 0;
            iVar27 = iVar27 + -1;
            *(int *)(puVar5 + 0x50) = *(int *)(puVar5 + 0x50) + *(int *)(puVar5 + 0x38) * 2;
            iVar24 = *(int *)(puVar5 + 0x4c);
            *(int *)(puVar5 + 0x4c) = iVar24 + 1;
            if (bVar39) {
              return iVar24 + 1;
            }
            if (*piVar15 != 0) goto LAB_4a0296dc;
            piVar23 = (int *)*piVar14;
            piVar15 = piVar15 + 1;
            uVar1 = *(ushort *)(piVar23 + 6);
            *piVar23 = piVar23[1] + *piVar23;
            if (((uVar1 & 4) != 0) || (piVar23[2] = piVar23[2] + piVar23[3], (uVar1 & 8) == 0)) {
              if ((uVar1 & 0x10) == 0) {
                piVar23[9] = piVar23[9] + piVar23[7];
              }
              if ((uVar1 & 0x20) == 0) {
                piVar23[10] = piVar23[10] + piVar23[8];
              }
            }
            piVar23 = *(int **)(puVar5 + 0xb8);
            uVar1 = *(ushort *)(piVar23 + 6);
            *piVar23 = piVar23[1] + *piVar23;
            if (((uVar1 & 4) != 0) || (piVar23[2] = piVar23[2] + piVar23[3], (uVar1 & 8) == 0)) {
              if ((uVar1 & 0x10) == 0) {
                piVar23[9] = piVar23[9] + piVar23[7];
              }
              if ((uVar1 & 0x20) == 0) {
                piVar23[10] = piVar23[10] + piVar23[8];
              }
            }
          } while (*(int *)*piVar14 <= **(int **)(puVar5 + 0xb8));
        } while( true );
      }
      iVar24 = 1;
      if (1 < iVar28) {
        do {
          puVar35 = (undefined4 *)piVar14[iVar24];
          piVar23 = (int *)*puVar35;
          if ((int)piVar23 < *(int *)piVar14[iVar24 + -1]) {
            iVar25 = iVar24 + -1;
            piVar20 = (int *)piVar14[iVar25];
            do {
              iVar16 = iVar25 + -1;
              piVar14[iVar25 + 1] = (int)piVar20;
              if ((iVar16 < 0) || (piVar20 = (int *)piVar14[iVar16], *piVar20 <= (int)piVar23))
              break;
              piVar38 = piVar14 + iVar16;
              iVar25 = iVar25 + -2;
              bVar39 = iVar25 == 0;
              piVar38[1] = (int)piVar20;
              if (-1 < iVar25) {
                piVar20 = (int *)piVar14[iVar25];
                piVar38 = (int *)*piVar20;
                bVar39 = piVar38 == piVar23;
              }
              iVar16 = iVar25;
            } while (!bVar39 && (-1 < iVar25 && (int)piVar23 <= (int)piVar38));
            piVar14[iVar16 + 1] = (int)puVar35;
          }
          iVar24 = iVar24 + 1;
        } while (iVar24 < iVar28);
      }
      iVar24 = 0;
      if (1 < iVar28) {
        do {
          piVar23 = (int *)0x0;
          iVar25 = 0;
          for (; iVar24 < iVar28; iVar24 = iVar24 + 1) {
            if ((*(ushort *)(piVar14[iVar24] + 0x18) & 1) == 0) {
              iVar25 = iVar25 + -1;
            }
            else {
              iVar25 = iVar25 + 1;
            }
            if (iVar25 == 1) {
              piVar23 = (int *)piVar14[iVar24];
              iVar24 = iVar24 + 1;
              break;
            }
          }
          if (iVar28 <= iVar24) break;
          piVar20 = (int *)0x0;
          do {
            iVar16 = iVar24;
            if ((*(ushort *)(piVar14[iVar16] + 0x18) & 1) == 0) {
              iVar25 = iVar25 + -1;
            }
            else {
              iVar25 = iVar25 + 1;
            }
            if (iVar25 == 0) {
              piVar20 = (int *)piVar14[iVar16];
              break;
            }
            iVar24 = iVar16 + 1;
          } while (iVar16 + 1 < iVar28);
          iVar24 = iVar16 + 1;
          if (iVar28 < iVar24) break;
          if (((*(ushort *)(piVar23 + 6) & 1) != 0) && (0 < (*piVar20 >> 0x12) - (*piVar23 >> 0x12))
             ) {
            FUN_4a05ccbc(piVar23,piVar20,*(undefined4 *)((int)piVar36 + -0x30),
                         *(undefined4 *)((int)piVar36 + -0x28));
          }
        } while (iVar16 + 2 < iVar28);
      }
      bVar39 = iVar27 == 0;
      iVar27 = iVar27 + -1;
      *(int *)(puVar5 + 0x50) = *(int *)(puVar5 + 0x50) + *(int *)(puVar5 + 0x38) * 2;
      iVar24 = *(int *)(puVar5 + 0x4c);
      *(int *)(puVar5 + 0x4c) = iVar24 + 1;
      if (bVar39) {
        return iVar24 + 1;
      }
LAB_4a0296dc:
      iVar16 = *(int *)(puVar5 + 0x4c);
      iVar25 = 0;
      iVar24 = 0;
      piVar23 = piVar15;
      if (0 < iVar28) {
        do {
          piVar15 = (int *)piVar14[iVar24];
          if (iVar16 < *(short *)((int)piVar15 + 0x1a)) {
            uVar1 = *(ushort *)(piVar15 + 6);
            *piVar15 = *piVar15 + piVar15[1];
            if (((uVar1 & 4) != 0) || (piVar15[2] = piVar15[2] + piVar15[3], (uVar1 & 8) == 0)) {
              if ((uVar1 & 0x10) == 0) {
                piVar15[9] = piVar15[9] + piVar15[7];
              }
              if ((uVar1 & 0x20) == 0) {
                piVar15[10] = piVar15[10] + piVar15[8];
              }
            }
            if (iVar25 != iVar24) {
              piVar14[iVar25] = piVar14[iVar24];
            }
            iVar25 = iVar25 + 1;
          }
          iVar24 = iVar24 + 1;
        } while (iVar24 < iVar28);
      }
    } while( true );
  }
  *(undefined4 *)((int)piVar36 + 0x5c) = *(undefined4 *)((int)piVar36 + 0x5c);
  *(undefined4 *)((int)piVar36 + 0x58) = *(undefined4 *)((int)piVar36 + 0x58);
  *(undefined4 *)((int)piVar36 + 0x54) = *(undefined4 *)((int)piVar36 + 0x54);
  *(undefined4 *)((int)piVar36 + 0x50) = *(undefined4 *)((int)piVar36 + 0x50);
  *(undefined4 *)((int)piVar36 + 0x4c) = *(undefined4 *)((int)piVar36 + 0x4c);
  *(undefined4 *)((int)piVar36 + 0x48) = *(undefined4 *)((int)piVar36 + 0x48);
  *(undefined4 *)((int)piVar36 + 0x44) = *(undefined4 *)((int)piVar36 + 0x44);
  *(undefined4 *)((int)piVar36 + 0x40) = *(undefined4 *)((int)piVar36 + 0x40);
  *(undefined4 *)((int)piVar36 + 0x3c) = *(undefined4 *)((int)piVar36 + 0x3c);
  *(uint *)((int)piVar36 + 0x38) = local_28;
  puVar26 = (uint *)((int)piVar36 + 0x34);
  *puVar26 = uVar21;
  piVar14 = (int *)(PTR_LAB_4a03db30 + 0x38);
  iVar27 = *(int *)(PTR_LAB_4a03db30 + 0xb0);
  piVar23 = (int *)(PTR_LAB_4a03db30 + 0x40);
  *(int *)(PTR_LAB_4a03db30 + 0x4c) = iVar24;
  *(int *)(puVar6 + 0x50) = *piVar23 + iVar24 * *piVar14 * 2;
  *puVar26 = ((uVar30 & 0xffff) - 1) - iVar24;
  piVar23 = (int *)(puVar6 + 0xb4);
  iVar25 = 0;
  piVar14 = (int *)(iVar27 + iVar24 * 4);
  do {
    iVar24 = *piVar14;
    piVar15 = piVar14 + 1;
    *piVar14 = 0;
    iVar27 = iVar25;
    for (; iVar24 != 0; iVar24 = *(int *)(iVar24 + 0x2c)) {
      piVar23[iVar27] = iVar24;
      iVar27 = iVar27 + 1;
    }
    if (iVar27 == 2) {
      if (*(int *)*piVar23 <= **(int **)(puVar6 + 0xb8)) goto LAB_4a03d4ec;
      do {
        iVar24 = *piVar23;
        *piVar23 = *(int *)(puVar6 + 0xb8);
        *(int *)(puVar6 + 0xb8) = iVar24;
LAB_4a03d4ec:
        do {
          puVar22 = PTR_LAB_4a03db30;
          piVar14 = (int *)*piVar23;
          if ((*(ushort *)(piVar14 + 6) & 1) != 0) {
            piVar20 = *(int **)(puVar6 + 0xb8);
            iVar24 = *piVar20 >> 0x12;
            iVar25 = *piVar14 >> 0x12;
            if (0 < iVar24 - iVar25) {
              uVar32 = *piVar14 >> 0xf;
              iVar24 = iVar24 - iVar25;
              uVar21 = *(uint *)(*(int *)PTR_DAT_4a03db34 + ((*piVar20 >> 0xf) - uVar32) * 4);
              *(int *)(PTR_LAB_4a03db30 + 0x6c) = iVar24;
              *(int *)(puVar22 + 0x70) = *(int *)(puVar22 + 0x50) + iVar25 * 2;
              uVar30 = (piVar20[9] >> 0xe) - (piVar14[9] >> 0xe);
              uVar18 = (piVar20[10] >> 0xe) - (piVar14[10] >> 0xe);
              iVar25 = (piVar14[9] >> 0xe) * 0x4000;
              iVar28 = (piVar14[10] >> 0xe) * 0x4000;
              if ((int)uVar30 < 0) {
                iVar25 = iVar25 + -1;
              }
              uVar29 = *(uint *)(PTR_LAB_4a03db30 + 0x54);
              if ((int)uVar18 < 0) {
                iVar28 = iVar28 + -1;
              }
              iVar16 = 7 - (uVar32 & 7);
              if (iVar24 == 1) {
                iVar16 = iVar16 * ((int)uVar21 >> 10) >> 4;
                *(int *)(puVar22 + 0x74) = iVar16 * ((int)uVar30 >> 2) + iVar25 >> (uVar29 & 0xff);
                iVar25 = ((int)uVar18 >> 2) * iVar16 + iVar28 >> ((uVar29 & 0x7f) << 1);
                if (*(uint *)(PTR_LAB_4a03db30 + 0x58) != 0) {
                  iVar25 = iVar25 << (*(uint *)(PTR_LAB_4a03db30 + 0x58) & 0xff);
                }
                *(int *)(puVar22 + 0x78) = iVar25;
              }
              else {
                bVar39 = (int)(uVar30 ^ uVar21) < 0;
                if (bVar39) {
                  uVar30 = -uVar30;
                }
                *(undefined4 *)((int)piVar36 + 0x30) = 0x13;
                uVar32 = (uint)((longlong)(int)uVar30 * (longlong)(int)uVar21) >> 0xd |
                         (int)((ulonglong)((longlong)(int)uVar30 * (longlong)(int)uVar21) >> 0x20)
                         << (*(uint *)((int)piVar36 + 0x30) & 0xff);
                if (bVar39) {
                  uVar32 = -uVar32;
                }
                bVar39 = (int)(uVar18 ^ uVar21) < 0;
                if (bVar39) {
                  uVar18 = -uVar18;
                }
                uVar30 = (uint)((longlong)(int)uVar18 * (longlong)(int)uVar21) >> 0xd |
                         (int)((ulonglong)((longlong)(int)uVar18 * (longlong)(int)uVar21) >> 0x20)
                         << 0x13;
                if (bVar39) {
                  uVar30 = -uVar30;
                }
                if (uVar29 == 0) {
                  iVar28 = iVar28 + (iVar16 * ((int)uVar30 >> 1) >> 2);
                }
                else {
                  iVar33 = (int)uVar30 >> (uVar29 & 0xff);
                  uVar32 = (int)uVar32 >> (uVar29 & 0xff);
                  iVar25 = iVar25 >> (uVar29 & 0xff);
                  uVar30 = iVar33 >> (uVar29 & 0xff);
                  iVar28 = (iVar28 >> (uVar29 & 0xff)) + (iVar16 * (iVar33 >> 1) >> 2) >>
                           (uVar29 & 0xff);
                }
                *(int *)(puVar22 + 0x74) = iVar25 + (((int)uVar32 >> 1) * iVar16 >> 2);
                puVar5 = PTR_LAB_4a03db30;
                *(uint *)(puVar22 + 0x7c) = uVar32;
                uVar32 = *(uint *)(puVar5 + 0x58);
                if (uVar32 != 0) {
                  uVar30 = uVar30 << (uVar32 & 0xff);
                  iVar28 = iVar28 << (uVar32 & 0xff);
                }
                *(uint *)(puVar22 + 0x80) = uVar30;
                *(int *)(puVar22 + 0x78) = iVar28;
              }
              puVar5 = PTR_LAB_4a03db30;
              iVar25 = *(int *)(PTR_LAB_4a03db30 + 0x60);
              if (iVar25 < 0) {
                host_s3eDeviceYield_arm(0x80000000);
                iVar25 = *(int *)(puVar5 + 100);
              }
              *(int *)(puVar5 + 0x60) = (iVar25 - iVar24) + -0x10;
              (**(code **)(puVar5 + 0x68))(puVar22 + 0x6c);
            }
          }
          puVar22 = PTR_LAB_4a03db30;
          *(int *)(PTR_LAB_4a03db30 + 0x50) =
               *(int *)(PTR_LAB_4a03db30 + 0x50) + *(int *)(PTR_LAB_4a03db30 + 0x38) * 2;
          uVar32 = *puVar26;
          *(int *)(puVar22 + 0x4c) = *(int *)(puVar22 + 0x4c) + 1;
          *puVar26 = uVar32 - 1;
          if (uVar32 == 0) {
            return -1;
          }
          if (*piVar15 != 0) goto LAB_4a03d70c;
          piVar14 = (int *)*piVar23;
          piVar15 = piVar15 + 1;
          *piVar14 = piVar14[1] + *piVar14;
          if ((*(ushort *)(piVar14 + 6) & 0x10) == 0) {
            piVar14[9] = piVar14[9] + piVar14[7];
          }
          if ((*(ushort *)(piVar14 + 6) & 0x20) == 0) {
            piVar14[10] = piVar14[10] + piVar14[8];
          }
          piVar14 = *(int **)(puVar6 + 0xb8);
          *piVar14 = piVar14[1] + *piVar14;
          if ((*(ushort *)(piVar14 + 6) & 0x10) == 0) {
            piVar14[9] = piVar14[9] + piVar14[7];
          }
          if ((*(ushort *)(piVar14 + 6) & 0x20) == 0) {
            piVar14[10] = piVar14[10] + piVar14[8];
          }
        } while (*(int *)*piVar23 <= **(int **)(puVar6 + 0xb8));
      } while( true );
    }
    iVar24 = 1;
    if (1 < iVar27) {
      do {
        puVar35 = (undefined4 *)piVar23[iVar24];
        piVar14 = (int *)*puVar35;
        if ((int)piVar14 < *(int *)piVar23[iVar24 + -1]) {
          iVar25 = iVar24 + -1;
          piVar20 = (int *)piVar23[iVar25];
          do {
            iVar28 = iVar25 + -1;
            piVar23[iVar25 + 1] = (int)piVar20;
            if ((iVar28 < 0) || (piVar20 = (int *)piVar23[iVar28], *piVar20 <= (int)piVar14)) break;
            piVar38 = piVar23 + iVar28;
            iVar25 = iVar25 + -2;
            bVar39 = iVar25 == 0;
            piVar38[1] = (int)piVar20;
            if (-1 < iVar25) {
              piVar20 = (int *)piVar23[iVar25];
              piVar38 = (int *)*piVar20;
              bVar39 = piVar38 == piVar14;
            }
            iVar28 = iVar25;
          } while (!bVar39 && (-1 < iVar25 && (int)piVar14 <= (int)piVar38));
          piVar23[iVar28 + 1] = (int)puVar35;
        }
        iVar24 = iVar24 + 1;
      } while (iVar24 < iVar27);
    }
    iVar24 = 0;
    if (1 < iVar27) {
      do {
        puVar22 = PTR_LAB_4a03db30;
        piVar14 = (int *)0x0;
        iVar25 = 0;
        for (; iVar24 < iVar27; iVar24 = iVar24 + 1) {
          if ((*(ushort *)(piVar23[iVar24] + 0x18) & 1) == 0) {
            iVar25 = iVar25 + -1;
          }
          else {
            iVar25 = iVar25 + 1;
          }
          if (iVar25 == 1) {
            piVar14 = (int *)piVar23[iVar24];
            iVar24 = iVar24 + 1;
            break;
          }
        }
        if (iVar27 <= iVar24) break;
        piVar20 = (int *)0x0;
        do {
          iVar28 = iVar24;
          if ((*(ushort *)(piVar23[iVar28] + 0x18) & 1) == 0) {
            iVar25 = iVar25 + -1;
          }
          else {
            iVar25 = iVar25 + 1;
          }
          if (iVar25 == 0) {
            piVar20 = (int *)piVar23[iVar28];
            break;
          }
          iVar24 = iVar28 + 1;
        } while (iVar28 + 1 < iVar27);
        iVar24 = iVar28 + 1;
        if (iVar27 < iVar24) break;
        if ((*(ushort *)(piVar14 + 6) & 1) != 0) {
          iVar25 = *piVar20 >> 0x12;
          iVar16 = *piVar14 >> 0x12;
          if (0 < iVar25 - iVar16) {
            uVar32 = *piVar14 >> 0xf;
            iVar25 = iVar25 - iVar16;
            uVar18 = *(uint *)(*(int *)PTR_DAT_4a03db34 + ((*piVar20 >> 0xf) - uVar32) * 4);
            *(uint *)((int)piVar36 + 0x30) = 7 - (uVar32 & 7);
            *(int *)(PTR_LAB_4a03db30 + 0x6c) = iVar25;
            *(int *)(puVar22 + 0x70) = *(int *)(puVar22 + 0x50) + iVar16 * 2;
            uVar32 = (piVar20[9] >> 0xe) - (piVar14[9] >> 0xe);
            uVar30 = (piVar20[10] >> 0xe) - (piVar14[10] >> 0xe);
            iVar16 = (piVar14[9] >> 0xe) * 0x4000;
            iVar33 = (piVar14[10] >> 0xe) * 0x4000;
            if ((int)uVar32 < 0) {
              iVar16 = iVar16 + -1;
            }
            uVar21 = *(uint *)(PTR_LAB_4a03db30 + 0x54);
            if ((int)uVar30 < 0) {
              iVar33 = iVar33 + -1;
            }
            if (iVar25 == 1) {
              iVar19 = ((int)uVar18 >> 10) * *(int *)((int)piVar36 + 0x30) >> 4;
              *(int *)(puVar22 + 0x74) = iVar19 * ((int)uVar32 >> 2) + iVar16 >> (uVar21 & 0xff);
              iVar16 = ((int)uVar30 >> 2) * iVar19 + iVar33 >> ((uVar21 & 0x7f) << 1);
              if (*(uint *)(PTR_LAB_4a03db30 + 0x58) != 0) {
                iVar16 = iVar16 << (*(uint *)(PTR_LAB_4a03db30 + 0x58) & 0xff);
              }
              *(int *)(puVar22 + 0x78) = iVar16;
            }
            else {
              bVar39 = (int)(uVar32 ^ uVar18) < 0;
              if (bVar39) {
                uVar32 = -uVar32;
              }
              *(undefined4 *)((int)piVar36 + 0x2c) = 0x13;
              uVar32 = (uint)((longlong)(int)uVar32 * (longlong)(int)uVar18) >> 0xd |
                       (int)((ulonglong)((longlong)(int)uVar32 * (longlong)(int)uVar18) >> 0x20) <<
                       (*(uint *)((int)piVar36 + 0x2c) & 0xff);
              if (bVar39) {
                uVar32 = -uVar32;
              }
              bVar39 = (int)(uVar30 ^ uVar18) < 0;
              if (bVar39) {
                uVar30 = -uVar30;
              }
              uVar30 = (uint)((longlong)(int)uVar30 * (longlong)(int)uVar18) >> 0xd |
                       (int)((ulonglong)((longlong)(int)uVar30 * (longlong)(int)uVar18) >> 0x20) <<
                       0x13;
              if (bVar39) {
                uVar30 = -uVar30;
              }
              iVar19 = *(int *)((int)piVar36 + 0x30);
              if (uVar21 == 0) {
                iVar33 = iVar33 + (iVar19 * ((int)uVar30 >> 1) >> 2);
              }
              else {
                iVar8 = (int)uVar30 >> (uVar21 & 0xff);
                uVar32 = (int)uVar32 >> (uVar21 & 0xff);
                iVar16 = iVar16 >> (uVar21 & 0xff);
                uVar30 = iVar8 >> (uVar21 & 0xff);
                iVar33 = (iVar33 >> (uVar21 & 0xff)) + (iVar19 * (iVar8 >> 1) >> 2) >>
                         (uVar21 & 0xff);
              }
              *(uint *)(puVar22 + 0x7c) = uVar32;
              puVar5 = PTR_LAB_4a03db30;
              *(int *)(puVar22 + 0x74) = iVar16 + (((int)uVar32 >> 1) * iVar19 >> 2);
              uVar32 = *(uint *)(puVar5 + 0x58);
              if (uVar32 != 0) {
                uVar30 = uVar30 << (uVar32 & 0xff);
                iVar33 = iVar33 << (uVar32 & 0xff);
              }
              *(uint *)(puVar22 + 0x80) = uVar30;
              *(int *)(puVar22 + 0x78) = iVar33;
            }
            puVar5 = PTR_LAB_4a03db30;
            iVar16 = *(int *)(PTR_LAB_4a03db30 + 0x60);
            if (iVar16 < 0) {
              host_s3eDeviceYield_arm(0x80000000);
              iVar16 = *(int *)(puVar5 + 100);
            }
            *(int *)(puVar5 + 0x60) = (iVar16 - iVar25) + -0x10;
            (**(code **)(puVar5 + 0x68))(puVar22 + 0x6c);
          }
        }
      } while (iVar28 + 2 < iVar27);
    }
    puVar22 = PTR_LAB_4a03db30;
    *(int *)(PTR_LAB_4a03db30 + 0x50) =
         *(int *)(PTR_LAB_4a03db30 + 0x50) + *(int *)(PTR_LAB_4a03db30 + 0x38) * 2;
    *(int *)(puVar22 + 0x4c) = *(int *)(puVar22 + 0x4c) + 1;
    uVar32 = *puVar26;
    *puVar26 = uVar32 - 1;
    if (uVar32 == 0) {
      return -1;
    }
LAB_4a03d70c:
    iVar25 = 0;
    iVar28 = *(int *)(PTR_LAB_4a03db30 + 0x4c);
    iVar24 = 0;
    piVar14 = piVar15;
    if (0 < iVar27) {
      do {
        piVar15 = (int *)piVar23[iVar24];
        if (iVar28 < *(short *)((int)piVar15 + 0x1a)) {
          *piVar15 = piVar15[1] + *piVar15;
          if ((*(ushort *)(piVar15 + 6) & 0x10) == 0) {
            piVar15[9] = piVar15[9] + piVar15[7];
          }
          if ((*(ushort *)(piVar15 + 6) & 0x20) == 0) {
            piVar15[10] = piVar15[10] + piVar15[8];
          }
          if (iVar25 != iVar24) {
            piVar23[iVar25] = piVar23[iVar24];
          }
          iVar25 = iVar25 + 1;
        }
        iVar24 = iVar24 + 1;
      } while (iVar24 < iVar27);
    }
  } while( true );
}




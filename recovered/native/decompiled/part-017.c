/* AUTOMATED DECOMPILER OUTPUT. Not original source, not a buildable game.
 * Function boundaries, types, indirect calls, and data still require validation. */

// Address: 4a0f1b44

void FUN_4a0f1b44(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *local_24 [2];
  int local_1c;
  int local_18;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x400)) {
    do {
      if (*(int *)(param_1 + 0x404) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0x404) + 8);
      }
      FUN_4a104ae8(*(undefined4 *)(param_1 + 0x454),*(undefined4 *)(iVar1 + iVar3 * 4));
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x400));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x3d4)) {
    do {
      if (*(int *)(param_1 + 0x3d8) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0x3d8) + 8);
      }
      FUN_4a0bae90(*(undefined4 *)(iVar1 + iVar3 * 4),*(undefined4 *)(param_1 + 0x454));
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x3d4));
  }
  uVar2 = FUN_4a0fba7c(*(undefined4 *)(param_1 + 0x1c));
  FUN_4a10ca70(local_24,uVar2);
  iVar3 = 0;
  if (0 < local_1c) {
    do {
      if (local_18 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(local_18 + 8);
      }
      (**(code **)(**(int **)(iVar1 + iVar3 * 4) + 0x28))();
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_1c);
  }
  FUN_4a07a584(*(undefined4 *)(param_1 + 0x418),*(undefined4 *)(param_1 + 0x454));
  FUN_4a0a8350(*(undefined4 *)(param_1 + 0x40c),*(undefined4 *)(param_1 + 0x458));
  uVar2 = FUN_4a077b38();
  FUN_4a0788bc(uVar2,*(undefined4 *)(param_1 + 0x458));
  uVar2 = FUN_4a077b38();
  FUN_4a07cca4(uVar2,*(undefined1 *)(param_1 + 0x45c));
  if (*(int *)(param_1 + 0x41c) != 0) {
    FUN_4a0b4608(*(int *)(param_1 + 0x41c),*(undefined1 *)(param_1 + 0x45c));
  }
  local_24[0] = PTR_PTR_4a0f1cc0;
  iVar3 = FUN_4a0bcc84(local_24);
  if (iVar3 != 0) {
    iVar1 = 0;
    if (0 < local_1c) {
      do {
        iVar1 = iVar1 + 1;
      } while (iVar1 < local_1c);
      if (iVar3 == 0) goto LAB_4a0f1cac;
    }
    FUN_4a14f21c(iVar3);
  }
LAB_4a0f1cac:
  FUN_4a0c6bf4(local_24);
  return;
}



// Address: 4a0f1cc4

void FUN_4a0f1cc4(int param_1)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  ushort *puVar12;
  bool bVar13;
  undefined1 auStack_3c [8];
  int local_34;
  int local_30;
  int local_28;
  
  FUN_4a16c074(auStack_3c,param_1 + 0x3b8);
  iVar10 = *(int *)(param_1 + 0x3a8);
  iVar1 = 0;
  if (0 < local_34) {
    local_28 = -iVar10;
    do {
      if (local_30 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(local_30 + 8);
      }
      if ((*(ushort *)(iVar2 + iVar1 * 2) & 0x40) != 0) {
        bVar5 = false;
        iVar8 = iVar1 + -1;
        iVar9 = iVar1 + 1;
        iVar4 = iVar1 - iVar10;
        iVar2 = iVar1 + iVar10;
        bVar6 = false;
        bVar11 = false;
        bVar13 = false;
        if (-1 < iVar8) {
          if (local_30 == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(local_30 + 8);
          }
          if ((*(ushort *)(iVar7 + iVar8 * 2) & 0x40) == 0) {
            if (local_30 == 0) {
              iVar7 = 0;
            }
            else {
              iVar7 = *(int *)(local_30 + 8);
            }
            puVar12 = (ushort *)(iVar7 + iVar8 * 2);
            *puVar12 = *puVar12 | 0x20;
            bVar11 = true;
          }
        }
        if (iVar9 < local_34) {
          if (local_30 == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)(local_30 + 8);
          }
          if ((*(ushort *)(iVar8 + iVar9 * 2) & 0x40) == 0) {
            if (local_30 == 0) {
              iVar8 = 0;
            }
            else {
              iVar8 = *(int *)(local_30 + 8);
            }
            puVar12 = (ushort *)(iVar8 + iVar9 * 2);
            *puVar12 = *puVar12 | 0x20;
            bVar13 = true;
          }
        }
        if (-1 < iVar4) {
          if (local_30 == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)(local_30 + 8);
          }
          if ((*(ushort *)(iVar8 + iVar4 * 2) & 0x40) == 0) {
            if (local_30 == 0) {
              iVar8 = 0;
            }
            else {
              iVar8 = *(int *)(local_30 + 8);
            }
            puVar12 = (ushort *)(iVar8 + iVar4 * 2);
            *puVar12 = *puVar12 | 0x20;
            bVar5 = true;
          }
        }
        if (iVar2 < local_34) {
          if (local_30 == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)(local_30 + 8);
          }
          if ((*(ushort *)(iVar8 + iVar2 * 2) & 0x40) == 0) {
            if (local_30 == 0) {
              iVar8 = 0;
            }
            else {
              iVar8 = *(int *)(local_30 + 8);
            }
            puVar12 = (ushort *)(iVar8 + iVar2 * 2);
            *puVar12 = *puVar12 | 0x20;
            bVar6 = true;
          }
        }
        if (bVar5) {
          if (bVar11) {
            if (local_30 == 0) {
              iVar8 = 0;
            }
            else {
              iVar8 = *(int *)(local_30 + 8);
            }
            if ((*(ushort *)(iVar8 + (iVar4 + -1) * 2) & 0x40) == 0) {
              if (local_30 == 0) {
                iVar8 = 0;
              }
              else {
                iVar8 = *(int *)(local_30 + 8);
              }
              puVar12 = (ushort *)(iVar8 + (iVar4 + -1) * 2);
              *puVar12 = *puVar12 | 0x20;
            }
          }
          if (bVar13) {
            if (local_30 == 0) {
              iVar8 = 0;
            }
            else {
              iVar8 = *(int *)(local_30 + 8);
            }
            if ((*(ushort *)(iVar8 + (iVar4 + 1) * 2) & 0x40) == 0) {
              if (local_30 == 0) {
                iVar8 = 0;
              }
              else {
                iVar8 = *(int *)(local_30 + 8);
              }
              puVar12 = (ushort *)(iVar8 + (iVar4 + 1) * 2);
              *puVar12 = *puVar12 | 0x20;
            }
          }
        }
        if (bVar6) {
          if (bVar11) {
            if (local_30 == 0) {
              iVar8 = 0;
            }
            else {
              iVar8 = *(int *)(local_30 + 8);
            }
            if ((*(ushort *)(iVar8 + (iVar2 + -1) * 2) & 0x40) == 0) {
              if (local_30 == 0) {
                iVar8 = 0;
              }
              else {
                iVar8 = *(int *)(local_30 + 8);
              }
              puVar12 = (ushort *)(iVar8 + (iVar2 + -1) * 2);
              *puVar12 = *puVar12 | 0x20;
            }
          }
          if (bVar13) {
            if (local_30 == 0) {
              iVar8 = 0;
            }
            else {
              iVar8 = *(int *)(local_30 + 8);
            }
            if ((*(ushort *)(iVar8 + (iVar2 + 1) * 2) & 0x40) == 0) {
              if (local_30 == 0) {
                iVar8 = 0;
              }
              else {
                iVar8 = *(int *)(local_30 + 8);
              }
              puVar12 = (ushort *)(iVar8 + (iVar2 + 1) * 2);
              *puVar12 = *puVar12 | 0x20;
            }
          }
        }
        if (local_30 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(local_30 + 8);
        }
        if (((((*(ushort *)(iVar8 + iVar1 * 2) & 0x2000) != 0 || bVar5) || bVar6) || bVar11) ||
            bVar13) {
          if ((bool)(bVar5 & ~bVar11) || (bool)(bVar13 & ~bVar6)) {
            if (local_30 == 0) {
              iVar2 = 0;
            }
            else {
              iVar2 = *(int *)(local_30 + 8);
            }
            if ((*(ushort *)(iVar2 + iVar1 * 2) & 0x2000) == 0) {
              if (local_30 == 0) {
                iVar2 = 0;
              }
              else {
                iVar2 = *(int *)(local_30 + 8);
              }
              puVar12 = (ushort *)(iVar2 + iVar1 * 2);
              uVar3 = *puVar12 | 0x80;
              goto LAB_4a0f2190;
            }
          }
        }
        else {
          if (local_30 == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)(local_30 + 8);
          }
          iVar9 = local_28;
          if ((*(ushort *)(iVar8 + (iVar2 + -1) * 2) & 0x40) != 0) {
            if (local_30 == 0) {
              iVar8 = 0;
            }
            else {
              iVar8 = *(int *)(local_30 + 8);
            }
            iVar9 = -(iVar10 + 1);
            if ((*(ushort *)(iVar8 + (iVar2 + 1) * 2) & 0x40) != 0) {
              if (local_30 == 0) {
                iVar2 = 0;
              }
              else {
                iVar2 = *(int *)(local_30 + 8);
              }
              iVar9 = 0;
              if ((*(ushort *)(iVar2 + (iVar4 + 1) * 2) & 0x40) == 0) {
                iVar9 = -1;
              }
            }
          }
          iVar9 = iVar1 + iVar9;
          if (local_30 != 0) {
            iVar2 = *(int *)(local_30 + 8);
          }
          else {
            iVar2 = 0;
          }
          if (local_30 != 0) {
            iVar4 = *(int *)(local_30 + 8);
          }
          else {
            iVar4 = 0;
          }
          *(ushort *)(iVar4 + iVar9 * 2) = *(ushort *)(iVar2 + iVar9 * 2) & 0xff7f | 0x2000;
          if (local_30 != 0) {
            iVar2 = *(int *)(local_30 + 8);
          }
          else {
            iVar2 = 0;
          }
          if (local_30 != 0) {
            iVar4 = *(int *)(local_30 + 8);
          }
          else {
            iVar4 = 0;
          }
          *(ushort *)(iVar4 + (iVar9 + 1) * 2) =
               *(ushort *)(iVar2 + (iVar9 + 1) * 2) & 0xff7f | 0x2000;
          iVar9 = iVar9 + iVar10;
          if (local_30 != 0) {
            iVar2 = *(int *)(local_30 + 8);
          }
          else {
            iVar2 = 0;
          }
          if (local_30 != 0) {
            iVar4 = *(int *)(local_30 + 8);
          }
          else {
            iVar4 = 0;
          }
          *(ushort *)(iVar4 + iVar9 * 2) = *(ushort *)(iVar2 + iVar9 * 2) & 0xff7f | 0x2000;
          if (local_30 != 0) {
            iVar2 = *(int *)(local_30 + 8);
          }
          else {
            iVar2 = 0;
          }
          if (local_30 != 0) {
            iVar4 = *(int *)(local_30 + 8);
          }
          else {
            iVar4 = 0;
          }
          puVar12 = (ushort *)(iVar4 + (iVar9 + 1) * 2);
          uVar3 = *(ushort *)(iVar2 + (iVar9 + 1) * 2) & 0xff7f | 0x2000;
LAB_4a0f2190:
          *puVar12 = uVar3;
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_34);
  }
  FUN_4a16c1a0(auStack_3c);
  return;
}



// Address: 4a0f21b4

int FUN_4a0f21b4(int param_1,int param_2,int param_3)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  int local_98;
  undefined4 local_90;
  int local_8c;
  undefined1 auStack_88 [4];
  int local_84;
  undefined1 auStack_7c [8];
  int local_74;
  int local_70 [2];
  undefined4 local_68;
  int *local_64;
  int local_5c;
  int local_58;
  undefined *local_54 [2];
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined *local_34;
  int local_30;
  int local_2c;
  int iStack_28;
  
  local_30 = param_1;
  local_2c = param_2;
  iStack_28 = param_3;
  local_38 = FUN_4a0fba7c(*(undefined4 *)(param_1 + 0x1c));
  iVar11 = local_2c;
  if (local_2c < *(int *)(local_30 + 0x50)) {
    if (*(int *)(local_30 + 0x54) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(local_30 + 0x54) + 8);
    }
    iVar4 = iVar4 + local_2c * 100;
  }
  else {
    iVar4 = local_2c - *(int *)(local_30 + 0x50);
    uVar8 = FUN_4a0642fc();
    iVar4 = FUN_4a134d90(uVar8,iVar4);
  }
  uVar12 = *(uint *)(iVar4 + 0x14);
  if (local_2c < *(int *)(local_30 + 0x50)) {
    if (*(int *)(local_30 + 0x54) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(local_30 + 0x54) + 8);
    }
    iVar4 = iVar4 + iVar11 * 100;
  }
  else {
    iVar4 = local_2c - *(int *)(local_30 + 0x50);
    uVar8 = FUN_4a0642fc();
    iVar4 = FUN_4a134d90(uVar8,iVar4);
  }
  local_3c = (int)*(char *)(iVar4 + 0x1e);
  if (local_2c < *(int *)(local_30 + 0x50)) {
    if (*(int *)(local_30 + 0x54) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(local_30 + 0x54) + 8);
    }
    iVar4 = iVar4 + iVar11 * 100;
  }
  else {
    iVar11 = local_2c - *(int *)(local_30 + 0x50);
    uVar8 = FUN_4a0642fc();
    iVar4 = FUN_4a134d90(uVar8,iVar11);
  }
  local_40 = (int)*(char *)(iVar4 + 0x1f);
  iVar11 = 0;
  if ((uVar12 & 0x100000) == 0) {
    iVar4 = (int)(char)PTR_DAT_4a0f27c0[*(char *)(local_30 + 0x31c)];
    if (*(int *)(local_30 + 0x1bc) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(local_30 + 0x1bc) + 8);
    }
    FUN_4a16b5a0(local_54,iVar6 + iVar4 * 0x14);
    if (*(int *)(local_30 + 0x1d0) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(local_30 + 0x1d0) + 8);
    }
    FUN_4a16b5a0(&local_68,iVar6 + iVar4 * 0x14);
    if (*(int *)(local_30 + 0x1e4) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(local_30 + 0x1e4) + 8);
    }
    FUN_4a16b5a0(auStack_7c,iVar6 + iVar4 * 0x14);
    if (*(int *)(local_30 + 0x1f8) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(local_30 + 0x1f8) + 8);
    }
    FUN_4a16b5a0(&local_90,iVar6 + iVar4 * 0x14);
    local_98 = 0;
    if (0 < local_4c) {
      do {
        if (local_48 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(local_48 + 8);
        }
        cVar1 = *(char *)(iVar4 + local_98);
        if (local_70[0] == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(local_70[0] + 8);
        }
        cVar2 = *(char *)(iVar4 + local_98);
        if (local_5c == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(local_5c + 8);
        }
        iVar4 = (int)*(char *)(iVar4 + local_98);
        if (local_84 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(local_84 + 8);
        }
        iVar6 = *(char *)(iVar6 + local_98) + iVar4;
        for (; iVar7 = (int)cVar1, iVar4 < iVar6; iVar4 = iVar4 + 1) {
          for (; iVar7 < (int)cVar2 + (int)cVar1; iVar7 = iVar7 + 1) {
            uVar12 = FUN_4a144f98(local_30,local_2c,iVar7,iVar4);
            if ((uVar12 & 1) == 0) {
              if ((uVar12 & 2) == 0) {
                if ((uVar12 & 4) == 0) {
                  if ((uVar12 & 8) == 0) {
                    iVar10 = -1;
                  }
                  else {
                    iVar10 = 3;
                  }
                }
                else {
                  iVar10 = 2;
                }
              }
              else {
                iVar10 = 1;
              }
            }
            else {
              iVar10 = 0;
            }
            if (iVar10 != -1) {
              if (param_3 == 0) {
                uVar8 = FUN_4a11febc(local_38,0xe,iVar7,0,iVar4,iVar10,0xffffffff);
                FUN_4a1066b0(uVar8,local_3c,local_40,uVar12);
              }
              iVar11 = iVar11 + 1;
            }
          }
        }
        local_98 = local_98 + 1;
      } while (local_98 < local_4c);
    }
    FUN_4a16b6c0(&local_90);
    FUN_4a16b6c0(auStack_7c);
    FUN_4a16b6c0(&local_68);
    FUN_4a16b6c0(local_54);
    return iVar11;
  }
  FUN_4a10ca70(local_54,local_38);
  puVar3 = PTR_PTR_4a0f27b8;
  local_58 = 0;
  if (0 < local_4c) {
    local_34 = PTR_PTR_4a0f27b4;
    do {
      if (local_48 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(local_48 + 8);
      }
      local_5c = *(int *)(iVar4 + local_58 * 4);
      iVar4 = FUN_4a146b58(local_5c,0x80000);
      if (iVar4 != 0) {
        puVar5 = (undefined4 *)FUN_4a0c6bc0(local_70);
        *puVar5 = local_34;
        puVar5[2] = *(undefined4 *)(local_30 + 0x3c);
        piVar9 = *(int **)(local_30 + 0x40);
        puVar5[3] = piVar9;
        if (piVar9 != (int *)0x0) {
          (**(code **)(*piVar9 + 0xc))();
        }
        *puVar5 = puVar3;
        local_74 = FUN_4a14634c(local_5c);
        iVar4 = 0;
        if (0 < local_74) {
          do {
            puVar5 = (undefined4 *)FUN_4a0c6bc0(auStack_88);
            *puVar5 = local_34;
            puVar5[2] = local_68;
            puVar5[3] = local_64;
            if (local_64 != (int *)0x0) {
              (**(code **)(*local_64 + 0xc))();
            }
            *puVar5 = puVar3;
            FUN_4a146048(local_5c,puVar5,iVar4);
            FUN_4a16bef4(auStack_88);
            bVar13 = local_64 != (int *)0x0;
            if (bVar13) {
              piVar9 = (int *)local_64[2];
            }
            else {
              piVar9 = (int *)0x0;
            }
            local_8c = *piVar9 >> 0x15;
            if (bVar13) {
              iVar6 = local_64[2];
            }
            else {
              iVar6 = 0;
            }
            local_90 = *(undefined4 *)(iVar6 + 4);
            if (bVar13) {
              iVar6 = local_64[2];
            }
            else {
              iVar6 = 0;
            }
            iVar6 = *(int *)(iVar6 + 8) >> 0x15;
            iVar7 = FUN_4a0f35f0(local_30,local_8c,iVar6);
            if (iVar7 == 0) {
              uVar12 = FUN_4a144f98(local_30,local_2c,local_8c,iVar6);
              if ((uVar12 & 1) == 0) {
                if ((uVar12 & 2) == 0) {
                  if ((uVar12 & 4) == 0) {
                    if ((uVar12 & 8) == 0) {
                      iVar7 = -1;
                    }
                    else {
                      iVar7 = 3;
                    }
                  }
                  else {
                    iVar7 = 2;
                  }
                }
                else {
                  iVar7 = 1;
                }
              }
              else {
                iVar7 = 0;
              }
              if (iVar7 != -1) {
                if (param_3 == 0) {
                  uVar8 = FUN_4a11febc(local_38,0xe,local_8c,local_90,iVar6,iVar7,0xffffffff);
                  FUN_4a1066b0(uVar8,local_3c,local_40,uVar12);
                }
                iVar11 = iVar11 + 1;
              }
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < local_74);
        }
        FUN_4a16bef4(local_70);
      }
      local_58 = local_58 + 1;
    } while (local_58 < local_4c);
  }
  local_54[0] = PTR_PTR_4a0f27bc;
  iVar4 = FUN_4a0bcc84(local_54);
  if (iVar4 != 0) {
    iVar6 = 0;
    if (0 < local_4c) {
      do {
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_4c);
      if (iVar4 == 0) goto LAB_4a0f2540;
    }
    FUN_4a14f21c();
  }
LAB_4a0f2540:
  FUN_4a0c6bf4(local_54);
  return iVar11;
}



// Address: 4a0f27c4

undefined4 FUN_4a0f27c4(int param_1,ushort param_2,short param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  param_2 = param_2 | param_3 << 8;
  uVar5 = *(uint *)(param_1 + 0x530);
  iVar3 = *(int *)(param_1 + 0x528);
  if ((int)uVar5 < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar5 & 1;
  }
  iVar2 = 0;
  iVar6 = 0;
  if (uVar1 != 0) {
    do {
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar3 + 8);
      }
      if (*(ushort *)(iVar4 + iVar2 * 2) == param_2) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)uVar1);
  }
  while( true ) {
    if ((int)uVar5 <= (int)uVar1) {
      if (iVar3 != 0) {
        iVar6 = *(int *)(iVar3 + 8);
      }
      *(ushort *)(iVar6 + uVar5 * 2) = param_2;
      *(int *)(param_1 + 0x530) = *(int *)(param_1 + 0x530) + 1;
      return 1;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar3 + 8);
    }
    if (*(ushort *)(iVar2 + uVar1 * 2) == param_2) break;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar3 + 8);
    }
    if (*(ushort *)(iVar2 + (uVar1 + 1) * 2) == param_2) {
      return 0;
    }
    uVar1 = uVar1 + 2;
  }
  return 0;
}



// Address: 4a0f28a4

char * FUN_4a0f28a4(int param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_4a0fb644();
  if (param_2 == 0) {
    param_2 = (int)(char)PTR_DAT_4a0f2950[*(char *)(param_1 + 0x31c)];
  }
  *(undefined4 *)(param_1 + 0x3a8) = 0x40;
  *(int *)(param_1 + 0x318) = param_2;
  *(undefined4 *)(param_1 + 0x3ac) = 0x40;
  FUN_4a0ef7ac(param_1);
  FUN_4a0f4aa0(param_1,param_2);
  FUN_4a0eed08(param_1,param_2);
  FUN_4a0f0234(param_1,param_2);
  FUN_4a0f2c28(param_1,param_2);
  host_s3eDeviceYield_arm(0);
  uVar1 = FUN_4a077b38();
  FUN_4a0788c4(uVar1,*(undefined4 *)PTR_DAT_4a0f2958,*(undefined4 *)PTR_DAT_4a0f2954);
  FUN_4a0f1650(param_1);
  FUN_4a0f1b44(param_1);
  return s_prepareWorldHouse_4a0f295c;
}



// Address: 4a0f2970

void FUN_4a0f2970(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_90 [72];
  undefined1 auStack_48 [20];
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  iStack_34 = param_1;
  iStack_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  FUN_4a0b8a1c(auStack_90);
  iVar11 = 0;
  FUN_4a13bd60(*(undefined4 *)(param_1 + 0x460),auStack_90);
  FUN_4a0b7d00(auStack_90,*(undefined4 *)(param_1 + 0x46c));
  puVar2 = (undefined4 *)FUN_4a0c6bc0(auStack_48);
  *puVar2 = PTR_PTR_4a0f2c18;
  puVar2[2] = *(undefined4 *)(param_1 + 0x28);
  piVar10 = *(int **)(param_1 + 0x2c);
  puVar2[3] = piVar10;
  if (piVar10 != (int *)0x0) {
    (**(code **)(*piVar10 + 0xc))();
  }
  *puVar2 = PTR_PTR_4a0f2c1c;
  FUN_4a13bce4(*(undefined4 *)(param_1 + 0x460),puVar2);
  FUN_4a16ba04(auStack_48);
  iVar12 = *(int *)(param_1 + 0x2c);
  if (iVar12 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar12 + 8);
  }
  uVar4 = FUN_4a171a94(*(undefined4 *)(iVar3 + 8),0x41f00000);
  uVar5 = FUN_4a171fac(param_3);
  puVar1 = PTR_DAT_4a0f2c20;
  uVar5 = FUN_4a17211c(uVar5,*(undefined4 *)PTR_DAT_4a0f2c20);
  if (iVar12 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(iVar12 + 8);
  }
  *puVar2 = uVar5;
  uVar5 = FUN_4a171fac(local_28);
  uVar5 = FUN_4a17211c(uVar5,*(undefined4 *)puVar1);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(undefined4 *)(iVar12 + 4) = uVar5;
  uVar5 = FUN_4a171fac(param_5);
  uVar5 = FUN_4a17211c(uVar5,*(undefined4 *)puVar1);
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(undefined4 *)(iVar12 + 8) = uVar5;
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  }
  *(undefined4 *)(iVar12 + 0xc) = 0x3f800000;
  FUN_4a13c870(auStack_90,param_1 + 0x20);
  iVar12 = *(int *)(param_1 + 0x2c);
  if (iVar12 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar12 + 8);
  }
  uVar5 = FUN_4a171bb8(0x3f800000,*(undefined4 *)(iVar3 + 0xc));
  if (iVar12 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(iVar12 + 8);
  }
  uVar6 = FUN_4a17211c(*puVar2,uVar5);
  if (iVar12 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar12 + 8);
  }
  uVar7 = FUN_4a17211c(*(undefined4 *)(iVar3 + 4),uVar5);
  if (iVar12 == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = *(int *)(iVar12 + 8);
  }
  uVar4 = FUN_4a171a94(*(undefined4 *)(iVar12 + 8),uVar4);
  iVar12 = *(int *)(param_1 + 0x3a0);
  uVar5 = FUN_4a171fac(iVar12);
  uVar5 = FUN_4a17211c(uVar5,uVar7 ^ 0x80000000);
  uVar5 = FUN_4a17295c(uVar5,0xffffffff);
  uVar8 = FUN_4a171fac(*(int *)(param_1 + 0x398) + (iVar12 >> 1));
  uVar5 = FUN_4a171a94(uVar8,uVar5);
  iVar12 = *(int *)(param_1 + 0x3a4);
  uVar8 = FUN_4a171fac(iVar12);
  uVar8 = FUN_4a17211c(uVar8,uVar6 ^ 0x80000000);
  uVar8 = FUN_4a17295c(uVar8,0xffffffff);
  uVar9 = FUN_4a171fac(*(int *)(param_1 + 0x39c) + (iVar12 >> 1));
  uVar8 = FUN_4a171a94(uVar9,uVar8);
  uVar5 = FUN_4a171e1c(uVar5);
  if (*(int *)(param_2 + 0xc) == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(*(int *)(param_2 + 0xc) + 8);
  }
  *puVar2 = uVar5;
  uVar5 = FUN_4a171e1c(uVar8);
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = *(int *)(*(int *)(param_2 + 0xc) + 8);
  }
  *(undefined4 *)(iVar12 + 4) = uVar5;
  FUN_4a17211c(uVar4,*(undefined4 *)PTR_DAT_4a0f2c24);
  uVar4 = FUN_4a171e1c();
  if (*(int *)(param_2 + 0xc) != 0) {
    iVar11 = *(int *)(*(int *)(param_2 + 0xc) + 8);
  }
  *(undefined4 *)(iVar11 + 8) = uVar4;
  FUN_4a0c6bf4(auStack_90);
  return;
}



// Address: 4a0f2c28

void FUN_4a0f2c28(int param_1,int param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int iVar10;
  int *piVar11;
  int *piVar12;
  short sVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  bool bVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  int local_c8;
  int iStack_c4;
  int local_c0;
  int local_b4;
  undefined1 auStack_b0 [8];
  undefined4 local_a8;
  int *local_a4;
  undefined1 auStack_a0 [4];
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80 [2];
  undefined4 local_78;
  int *local_74;
  int local_6c [2];
  int local_64;
  int *local_60;
  int local_58 [2];
  undefined4 local_50;
  int *local_4c;
  int local_44 [2];
  undefined4 local_3c;
  int *local_38;
  undefined4 local_30;
  int iStack_2c;
  int local_28;
  
  iStack_2c = param_1;
  local_28 = param_2;
  FUN_4a0fb644();
  local_30 = FUN_4a0fba7c(*(undefined4 *)(param_1 + 0x1c));
  iVar5 = local_28;
  if (*(int *)(param_1 + 0x2d4) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x2d4) + 8);
  }
  FUN_4a16b5a0(local_44,iVar4 + local_28 * 0x14);
  if (*(int *)(param_1 + 0x2e8) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x2e8) + 8);
  }
  FUN_4a16b5a0(local_58,iVar4 + iVar5 * 0x14);
  if (*(int *)(param_1 + 0x2fc) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x2fc) + 8);
  }
  FUN_4a16c074(local_6c,iVar4 + iVar5 * 0x14);
  if (*(int *)(param_1 + 0x310) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x310) + 8);
  }
  FUN_4a16b5a0(local_80,iVar4 + iVar5 * 0x14);
  iVar5 = FUN_4a0f0760(*(undefined4 *)(param_1 + 0x318));
  if ((iVar5 != 0) || (*(int *)(param_1 + 0x318) == 0)) {
    piVar11 = *(int **)(param_1 + 0x32c);
    uVar14 = *(undefined4 *)(param_1 + 0x328);
    if (piVar11 != (int *)0x0) {
      (**(code **)(*piVar11 + 0xc))(piVar11);
    }
    (**(code **)(local_44[0] + 0x1c))(local_44);
    piVar12 = *(int **)(param_1 + 0x340);
    uVar15 = *(undefined4 *)(param_1 + 0x33c);
    local_3c = uVar14;
    local_38 = piVar11;
    if (piVar12 != (int *)0x0) {
      (**(code **)(*piVar12 + 0xc))(piVar12);
    }
    (**(code **)(local_58[0] + 0x1c))(local_58);
    piVar11 = *(int **)(param_1 + 0x354);
    iVar5 = *(int *)(param_1 + 0x350);
    local_50 = uVar15;
    local_4c = piVar12;
    if (piVar11 != (int *)0x0) {
      (**(code **)(*piVar11 + 0xc))(piVar11);
    }
    (**(code **)(local_6c[0] + 0x1c))(local_6c);
    piVar12 = *(int **)(param_1 + 0x368);
    uVar14 = *(undefined4 *)(param_1 + 0x364);
    local_64 = iVar5;
    local_60 = piVar11;
    if (piVar12 != (int *)0x0) {
      (**(code **)(*piVar12 + 0xc))(piVar12);
    }
    (**(code **)(local_80[0] + 0x1c))(local_80);
    local_78 = uVar14;
    local_74 = piVar12;
  }
  local_8c = 0;
  local_90 = 0;
  local_94 = 0;
  iVar5 = 0;
  local_98 = local_64;
  if (0 < local_64) {
    do {
      host_s3eDeviceYield_arm(0);
      if (local_60 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = local_60[2];
      }
      iVar4 = (int)*(short *)(iVar4 + iVar5 * 2);
      if (iVar4 != -1) {
        iVar6 = *(int *)(param_1 + 0x50);
        if (iVar4 < iVar6) {
          if (*(int *)(param_1 + 0x54) == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(*(int *)(param_1 + 0x54) + 8);
          }
          iVar6 = iVar6 + iVar4 * 100;
        }
        else {
          uVar14 = FUN_4a0642fc();
          iVar6 = FUN_4a134d90(uVar14,iVar4 - iVar6);
        }
        if ((*(uint *)(iVar6 + 0x14) & 0x100000) == 0) {
          if (local_38 == (int *)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = local_38[2];
          }
          iVar6 = (int)*(char *)(iVar6 + iVar5);
          if (local_4c == (int *)0x0) {
            iVar7 = 0;
          }
          else {
            iVar7 = local_4c[2];
          }
          iVar7 = (int)*(char *)(iVar7 + iVar5);
          if (local_74 == (int *)0x0) {
            iVar8 = 0;
          }
          else {
            iVar8 = local_74[2];
          }
          cVar1 = *(char *)(iVar8 + iVar5);
          iVar8 = FUN_4a0f0760(*(undefined4 *)(param_1 + 0x318));
          if (((iVar8 != 0) || (*(int *)(param_1 + 0x318) == 0)) &&
             ((iVar4 == 0x67 && iVar6 == 8) && iVar7 == 8)) {
            iVar7 = 2;
          }
          local_c8 = iVar7;
          iStack_c4 = (int)cVar1;
          local_c0 = iVar5;
          FUN_4a11febc(local_30,iVar4,iVar6,0);
          if (local_8c == 0) {
            iVar8 = *(int *)(param_1 + 0x50);
            if (iVar4 < iVar8) {
              if (*(int *)(param_1 + 0x54) == 0) {
                iVar8 = 0;
              }
              else {
                iVar8 = *(int *)(*(int *)(param_1 + 0x54) + 8);
              }
              iVar8 = iVar8 + iVar4 * 100;
            }
            else {
              uVar14 = FUN_4a0642fc();
              iVar8 = FUN_4a134d90(uVar14,iVar4 - iVar8);
            }
            if (*(char *)(iVar8 + 8) == '\x17') {
              local_8c = 1;
              local_94 = iVar7;
              local_90 = iVar6;
            }
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_98);
  }
  puVar3 = PTR_PTR_4a0f342c;
  puVar2 = PTR_PTR_4a0f3428;
  local_9c = 0;
  if (0 < local_98) {
    do {
      host_s3eDeviceYield_arm(0);
      iVar5 = 0;
      if (local_60 != (int *)0x0) {
        iVar5 = local_60[2];
      }
      local_84 = (int)*(short *)(iVar5 + local_9c * 2);
      if (local_84 != -1) {
        if (local_84 < *(int *)(param_1 + 0x50)) {
          iVar5 = 0;
          if (*(int *)(param_1 + 0x54) != 0) {
            iVar5 = *(int *)(*(int *)(param_1 + 0x54) + 8);
          }
          iVar5 = iVar5 + local_84 * 100;
        }
        else {
          iVar5 = local_84 - *(int *)(param_1 + 0x50);
          uVar14 = FUN_4a0642fc();
          iVar5 = FUN_4a134d90(uVar14,iVar5);
        }
        if ((*(uint *)(iVar5 + 0x14) & 0x100000) != 0) {
          iVar5 = 0;
          if (local_38 != (int *)0x0) {
            iVar5 = local_38[2];
          }
          iVar4 = (int)*(char *)(iVar5 + local_9c);
          iVar5 = 0;
          if (local_4c != (int *)0x0) {
            iVar5 = local_4c[2];
          }
          iVar6 = (int)*(char *)(iVar5 + local_9c);
          iVar5 = 0;
          if (local_74 != (int *)0x0) {
            iVar5 = local_74[2];
          }
          local_88 = (int)*(char *)(iVar5 + local_9c);
          uVar14 = FUN_4a0fba7c(*(undefined4 *)(param_1 + 0x1c));
          puVar9 = (undefined4 *)FUN_4a0c6bc0(auStack_b0);
          *puVar9 = puVar2;
          puVar9[2] = *(undefined4 *)(param_1 + 0x3c);
          piVar11 = *(int **)(param_1 + 0x40);
          puVar9[3] = piVar11;
          if (piVar11 != (int *)0x0) {
            (**(code **)(*piVar11 + 0xc))();
          }
          *puVar9 = puVar3;
          local_b4 = FUN_4a122d00(uVar14,iVar4,iVar6);
          if (local_b4 != 0) {
            iVar5 = FUN_4a14634c(local_b4);
            iVar7 = 0;
            if (0 < iVar5) {
              do {
                puVar9 = (undefined4 *)FUN_4a0c6bc0(&local_c8);
                *puVar9 = puVar2;
                puVar9[2] = local_a8;
                puVar9[3] = local_a4;
                if (local_a4 != (int *)0x0) {
                  (**(code **)(*local_a4 + 0xc))();
                }
                *puVar9 = puVar3;
                FUN_4a146048(local_b4,puVar9,iVar7);
                FUN_4a16bef4(&local_c8);
                iVar8 = 0;
                if (local_a4 == (int *)0x0) {
                  piVar11 = (int *)0x0;
                }
                else {
                  piVar11 = (int *)local_a4[2];
                  iVar8 = local_a4[2];
                }
                if (*piVar11 >> 0x15 == iVar4 && *(int *)(iVar8 + 8) >> 0x15 == iVar6) {
                  iVar5 = 0;
                  if (local_a4 != (int *)0x0) {
                    iVar5 = local_a4[2];
                  }
                  uVar14 = *(undefined4 *)(iVar5 + 4);
                  FUN_4a16bef4(auStack_b0);
                  goto LAB_4a0f3174;
                }
                iVar7 = iVar7 + 1;
              } while (iVar7 < iVar5);
            }
          }
          FUN_4a16bef4(auStack_b0);
          uVar14 = 0;
LAB_4a0f3174:
          iStack_c4 = local_88;
          local_c0 = local_9c;
          local_c8 = iVar6;
          FUN_4a11febc(local_30,local_84,iVar4,uVar14);
        }
      }
      local_9c = local_9c + 1;
    } while (local_9c < local_98);
  }
  if (local_8c != 0) {
    host_s3eDeviceYield_arm(0);
    bVar16 = *(char *)(param_1 + 0x31c) != '\x01';
    local_c8 = ((uint)!bVar16 + local_94) * 0x200000 + 0x100000;
    iStack_c4 = 1;
    local_c0 = -1;
    if (bVar16) {
      uVar14 = 0x1f;
    }
    else {
      uVar14 = 0x1e;
    }
    FUN_4a10ea38(local_30,uVar14,(local_90 + 1) * 0x200000 + 0x100000,0x10000);
  }
  host_s3eDeviceYield_arm(0);
  sVar13 = 3;
  iVar5 = FUN_4a0f0760(*(undefined4 *)(param_1 + 0x318));
  if ((iVar5 != 0) || (*(int *)(param_1 + 0x318) == 0)) {
    sVar13 = 2;
  }
  uVar14 = FUN_4a16c074(&local_9c,local_6c);
  iVar5 = FUN_4a16ff5c(sVar13,uVar14,0);
  FUN_4a16c1a0(&local_9c);
  switchD_4a11cc8c::default((iVar5 >> 0x1f) + 1,s_no_player_start_4a0f3430);
  if (local_38 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = local_38[2];
  }
  if (local_4c == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = local_4c[2];
  }
  local_c8 = (int)*(char *)(iVar6 + iVar5);
  if (local_74 == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = local_74[2];
  }
  iStack_c4 = (int)*(char *)(iVar6 + iVar5);
  local_c0 = 0;
  FUN_4a11febc(local_30,0,(int)*(char *)(iVar4 + iVar5));
  local_8c = *(int *)(*(int *)(param_1 + 0x1c) + 0x51c);
  if (sVar13 != 2) {
    iVar5 = -1;
  }
  iVar7 = *(int *)(local_8c + 0x410);
  iVar6 = 1;
  iVar4 = extraout_r1;
  if (1 < iVar7) {
    do {
      host_s3eDeviceYield_arm(0,iVar4);
      iVar8 = FUN_4a13f8f8(local_8c,iVar6);
      iVar4 = local_28;
      if (iVar8 == local_28) {
        uVar17 = FUN_4a0d6194(local_8c,iVar6);
        iVar4 = (int)(uVar17 >> 0x20);
        if ((uVar17 & 8) != 0) {
          uVar14 = FUN_4a16c074(auStack_a0,local_6c);
          iVar5 = FUN_4a16ff5c(2,uVar14,iVar5 + 1);
          FUN_4a16c1a0(auStack_a0);
          switchD_4a11cc8c::default((iVar5 >> 0x1f) + 1,s_no_NPC_start_4a0f3440);
          if (local_38 == (int *)0x0) {
            iVar4 = 0;
          }
          else {
            iVar4 = local_38[2];
          }
          if (local_4c == (int *)0x0) {
            iVar8 = 0;
          }
          else {
            iVar8 = local_4c[2];
          }
          iVar10 = 0;
          if (local_74 != (int *)0x0) {
            iVar10 = local_74[2];
          }
          local_c8 = (int)*(char *)(iVar8 + iVar5);
          if (local_74 == (int *)0x0) {
            iVar10 = 0;
          }
          iStack_c4 = (int)*(char *)(iVar10 + iVar5);
          local_c0 = iVar6;
          FUN_4a11febc(local_30,1,(int)*(char *)(iVar4 + iVar5),0);
          iVar4 = extraout_r1_00;
          if ((uVar17 & 0x10) != 0) {
            uVar18 = FUN_4a0fb748(*(undefined4 *)(param_1 + 0x1c));
            iVar4 = (int)((ulonglong)uVar18 >> 0x20);
            if ((int)uVar18 < 0x3c) {
              FUN_4a10e58c(local_30);
              iVar4 = extraout_r1_01;
            }
          }
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar7);
  }
  switchD_4a1193c4::default(s_createObjectsHouse_4a0f3450);
  FUN_4a16b6c0(local_80);
  FUN_4a16c1a0(local_6c);
  FUN_4a16b6c0(local_58);
  FUN_4a16b6c0(local_44);
  return;
}



// Address: 4a0f3464

undefined4 * FUN_4a0f3464(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_24 [12];
  int *local_18;
  int *local_14;
  
  if (*(int *)(param_1 + 0x50) <= param_2) {
    uVar3 = FUN_4a0642fc();
    iVar5 = *(int *)(param_1 + 0x50);
    iVar6 = 0;
    if (param_2 < iVar5) {
      if (*(int *)(param_1 + 0x54) != 0) {
        iVar6 = *(int *)(*(int *)(param_1 + 0x54) + 8);
      }
      iVar6 = iVar6 + param_2 * 100;
    }
    else {
      uVar4 = FUN_4a0642fc();
      iVar6 = FUN_4a134d90(uVar4,param_2 - iVar5);
    }
    local_14 = (int *)FUN_4a06430c(uVar3,(int)*(short *)(iVar6 + 4));
    if (local_14 != (int *)0x0) {
      (**(code **)(*local_14 + 0xc))();
    }
    local_18 = (int *)FUN_4a0c6fcc((int)*(short *)(iVar6 + 6));
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 0xc))();
    }
    FUN_4a0bedd4(auStack_24);
    uVar3 = FUN_4a0bebec(auStack_24,&local_14);
    uVar3 = FUN_4a0beb58(uVar3,&DAT_4a0f35ec);
    FUN_4a0bebec(uVar3,&local_18);
    puVar2 = (undefined4 *)FUN_4a13cff4(auStack_24);
    FUN_4a0bee50(auStack_24);
    piVar1 = local_18;
    if ((local_18 != (int *)0x0) && (iVar5 = (**(code **)(*local_18 + 8))(local_18), iVar5 != 0)) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    piVar1 = local_14;
    if ((local_14 != (int *)0x0) && (iVar5 = (**(code **)(*local_14 + 8))(local_14), iVar5 != 0)) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    return puVar2;
  }
  thunk_FUN_4a161570(0x14);
  iVar5 = *(int *)(PTR_PTR_4a0f35e8 + param_2 * 4);
  puVar2 = (undefined4 *)FUN_4a0c6bc0();
  *puVar2 = PTR_PTR_4a0c70cc;
  puVar2[2] = 0;
  *(undefined1 *)(puVar2 + 3) = 0;
  puVar2[4] = 0;
  if (iVar5 != 0) {
    uVar3 = FUN_4a04d4d0(0,iVar5);
    puVar2[2] = uVar3;
  }
  return puVar2;
}



// Address: 4a0f35f0

undefined4 FUN_4a0f35f0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_r4;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_58 [2];
  int local_50;
  int *local_4c;
  int local_44 [2];
  undefined4 local_3c;
  int *local_38;
  int local_30 [2];
  undefined4 local_28;
  int *local_24;
  
  iVar1 = FUN_4a0f0760(*(undefined4 *)(param_1 + 0x318));
  if (iVar1 == 0) {
    unaff_r4 = *(int *)(param_1 + 0x318);
  }
  if (iVar1 != 0) {
    unaff_r4 = 0;
  }
  if (*(int *)(param_1 + 0x2d4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x2d4) + 8);
  }
  FUN_4a16b5a0(local_30,iVar1 + unaff_r4 * 0x14);
  if (*(int *)(param_1 + 0x2e8) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x2e8) + 8);
  }
  FUN_4a16b5a0(local_44,iVar1 + unaff_r4 * 0x14);
  if (*(int *)(param_1 + 0x2fc) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x2fc) + 8);
  }
  FUN_4a16c074(local_58,iVar1 + unaff_r4 * 0x14);
  if (unaff_r4 == 0) {
    piVar4 = *(int **)(param_1 + 0x32c);
    uVar6 = *(undefined4 *)(param_1 + 0x328);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))(piVar4);
    }
    (**(code **)(local_30[0] + 0x1c))(local_30);
    piVar5 = *(int **)(param_1 + 0x340);
    uVar7 = *(undefined4 *)(param_1 + 0x33c);
    local_28 = uVar6;
    local_24 = piVar4;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
    }
    (**(code **)(local_44[0] + 0x1c))(local_44);
    piVar4 = *(int **)(param_1 + 0x354);
    iVar1 = *(int *)(param_1 + 0x350);
    local_3c = uVar7;
    local_38 = piVar5;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))(piVar4);
    }
    (**(code **)(local_58[0] + 0x1c))(local_58);
    local_50 = iVar1;
    local_4c = piVar4;
  }
  iVar1 = 0;
  if (0 < local_50) {
    do {
      if (local_4c == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = local_4c[2];
      }
      iVar2 = (int)*(short *)(iVar2 + iVar1 * 2);
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
          uVar6 = FUN_4a0642fc();
          iVar3 = FUN_4a134d90(uVar6,iVar2 - iVar3);
        }
        if ((*(uint *)(iVar3 + 0x14) & 0x100000) != 0) {
          if (local_24 == (int *)0x0) {
            iVar2 = 0;
          }
          else {
            iVar2 = local_24[2];
          }
          if (*(char *)(iVar2 + iVar1) == param_2) {
            if (local_38 == (int *)0x0) {
              iVar2 = 0;
            }
            else {
              iVar2 = local_38[2];
            }
            if (*(char *)(iVar2 + iVar1) == param_3) {
              FUN_4a16c1a0(local_58);
              FUN_4a16b6c0(local_44);
              FUN_4a16b6c0(local_30);
              return 1;
            }
          }
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_50);
  }
  FUN_4a16c1a0(local_58);
  FUN_4a16b6c0(local_44);
  FUN_4a16b6c0(local_30);
  return 0;
}



// Address: 4a0f384c

void FUN_4a0f384c(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 local_128 [5];
  undefined1 auStack_114 [8];
  undefined4 local_10c;
  int *local_108;
  undefined1 auStack_100 [8];
  undefined4 local_f8;
  int *local_f4;
  undefined1 auStack_ec [8];
  undefined4 local_e4;
  undefined1 auStack_d8 [8];
  undefined4 local_d0;
  undefined1 auStack_c4 [12];
  int local_b8;
  undefined1 auStack_b0 [12];
  int local_a4;
  undefined1 auStack_9c [12];
  int local_90;
  undefined1 auStack_88 [8];
  int local_80;
  int local_7c;
  undefined1 auStack_74 [12];
  int local_68;
  undefined1 auStack_60 [8];
  int local_58;
  int local_54;
  undefined1 auStack_4c [12];
  int local_40;
  undefined1 auStack_38 [12];
  int local_2c;
  
  switchD_4a11cc8c::default(*(byte *)(param_1 + 0x31c) < 2,s_invalid_house_upgrade_4a0f3c0c);
  puVar4 = PTR_DAT_4a0f3c24;
  iVar11 = 0;
  iVar9 = (*(byte *)(param_1 + 0x31c) + 1) * 0x1000000;
  *(char *)(param_1 + 0x31c) = (char)((uint)iVar9 >> 0x18);
  iVar9 = (int)(char)puVar4[iVar9 >> 0x18];
  if (*(int *)(param_1 + 0x2d4) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(param_1 + 0x2d4) + 8);
  }
  FUN_4a16b5a0(auStack_38,iVar5 + iVar9 * 0x14);
  if (*(int *)(param_1 + 0x2e8) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(param_1 + 0x2e8) + 8);
  }
  FUN_4a16b5a0(auStack_4c,iVar5 + iVar9 * 0x14);
  if (*(int *)(param_1 + 0x2fc) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(param_1 + 0x2fc) + 8);
  }
  FUN_4a16c074(auStack_60,iVar5 + iVar9 * 0x14);
  if (*(int *)(param_1 + 0x310) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(param_1 + 0x310) + 8);
  }
  FUN_4a16b5a0(auStack_74,iVar5 + iVar9 * 0x14);
  FUN_4a16c074(auStack_88,param_1 + 0x348);
  FUN_4a16b5a0(auStack_9c,param_1 + 800);
  FUN_4a16b5a0(auStack_b0,param_1 + 0x334);
  FUN_4a16b5a0(auStack_c4,param_1 + 0x35c);
  iVar9 = 0;
  if (0 < local_80) {
    do {
      if (local_7c == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(local_7c + 8);
      }
      iVar5 = (int)*(short *)(iVar5 + iVar9 * 2);
      if ((iVar5 != -1) && (iVar10 = *(int *)(param_1 + 0x50), iVar10 <= iVar5)) {
        uVar6 = FUN_4a0642fc();
        FUN_4a134d90(uVar6,iVar5 - iVar10);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < local_80);
  }
  iVar9 = 0;
  if (0 < local_58) {
    do {
      if (local_54 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(local_54 + 8);
      }
      iVar5 = (int)*(short *)(iVar5 + iVar9 * 2);
      if (local_2c == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(local_2c + 8);
      }
      uVar1 = *(undefined1 *)(iVar10 + iVar9);
      if (local_40 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(local_40 + 8);
      }
      uVar2 = *(undefined1 *)(iVar10 + iVar9);
      if (iVar5 == 0x18) {
        if (local_7c == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = *(int *)(local_7c + 8);
        }
        if (*(short *)(iVar10 + iVar9 * 2) != -1) {
          iVar10 = *(int *)(param_1 + 0x50);
          if (local_7c == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(local_7c + 8);
          }
          iVar7 = (int)*(short *)(iVar7 + iVar9 * 2);
          if (iVar7 < iVar10) {
            if (*(int *)(param_1 + 0x54) == 0) {
              iVar10 = 0;
            }
            else {
              iVar10 = *(int *)(*(int *)(param_1 + 0x54) + 8);
            }
            iVar10 = iVar10 + iVar7 * 100;
          }
          else {
            uVar6 = FUN_4a0642fc();
            iVar10 = FUN_4a134d90(uVar6,iVar7 - iVar10);
          }
          if (*(char *)(iVar10 + 8) == '\x17') {
            if (local_7c == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = *(int *)(local_7c + 8);
            }
            iVar5 = (int)*(short *)(iVar5 + iVar9 * 2);
          }
        }
      }
      if (local_7c == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(local_7c + 8);
      }
      if (*(short *)(iVar10 + iVar9 * 2) == iVar5) {
        iVar10 = *(int *)(param_1 + 0x50);
        if (iVar10 <= iVar5) {
          uVar6 = FUN_4a0642fc();
          FUN_4a134d90(uVar6,iVar5 - iVar10);
        }
      }
      else {
        if (local_7c == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = *(int *)(local_7c + 8);
        }
        if (*(short *)(iVar10 + iVar9 * 2) != -1) {
          uVar6 = FUN_4a16c074(local_128,auStack_88);
          iVar10 = FUN_4a16ff5c(0xffffffff,uVar6,0);
          FUN_4a16c1a0(local_128);
          switchD_4a11cc8c::default(iVar10 != -1,s_no_slots_left_in_house_records_4a0f3c28);
          if (local_7c != 0) {
            iVar7 = *(int *)(local_7c + 8);
          }
          else {
            iVar7 = 0;
          }
          if (local_7c != 0) {
            iVar8 = *(int *)(local_7c + 8);
          }
          else {
            iVar8 = 0;
          }
          *(undefined2 *)(iVar8 + iVar10 * 2) = *(undefined2 *)(iVar7 + iVar9 * 2);
          if (local_90 != 0) {
            iVar7 = *(int *)(local_90 + 8);
          }
          else {
            iVar7 = 0;
          }
          if (local_90 != 0) {
            iVar8 = *(int *)(local_90 + 8);
          }
          else {
            iVar8 = 0;
          }
          *(undefined1 *)(iVar8 + iVar10) = *(undefined1 *)(iVar7 + iVar9);
          if (local_a4 != 0) {
            iVar7 = *(int *)(local_a4 + 8);
          }
          else {
            iVar7 = 0;
          }
          if (local_a4 != 0) {
            iVar8 = *(int *)(local_a4 + 8);
          }
          else {
            iVar8 = 0;
          }
          *(undefined1 *)(iVar8 + iVar10) = *(undefined1 *)(iVar7 + iVar9);
          if (local_b8 != 0) {
            iVar7 = *(int *)(local_b8 + 8);
          }
          else {
            iVar7 = 0;
          }
          if (local_b8 != 0) {
            iVar8 = *(int *)(local_b8 + 8);
          }
          else {
            iVar8 = 0;
          }
          *(undefined1 *)(iVar8 + iVar10) = *(undefined1 *)(iVar7 + iVar9);
          FUN_4a0d53dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x51c),iVar9,iVar10);
        }
      }
      if (local_7c == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(local_7c + 8);
      }
      *(short *)(iVar10 + iVar9 * 2) = (short)iVar5;
      if (local_90 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(local_90 + 8);
      }
      *(undefined1 *)(iVar5 + iVar9) = uVar1;
      if (local_a4 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(local_a4 + 8);
      }
      *(undefined1 *)(iVar5 + iVar9) = uVar2;
      if (local_68 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(local_68 + 8);
      }
      if (local_b8 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(local_b8 + 8);
      }
      *(undefined1 *)(iVar10 + iVar9) = *(undefined1 *)(iVar5 + iVar9);
      iVar9 = iVar9 + 1;
    } while (iVar9 < local_58);
  }
  cVar3 = PTR_DAT_4a0f3c24[*(char *)(param_1 + 0x31c)];
  if (*(int *)(param_1 + 0x220) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(int *)(param_1 + 0x220) + 8);
  }
  FUN_4a16b5a0(auStack_d8,iVar9 + cVar3 * 0x14);
  if (*(int *)(param_1 + 0x20c) != 0) {
    iVar11 = *(int *)(*(int *)(param_1 + 0x20c) + 8);
  }
  FUN_4a16b5a0(auStack_ec,iVar11 + cVar3 * 0x14);
  FUN_4a16b5f8(auStack_100,local_d0);
  FUN_4a16b5f8(auStack_114,local_e4);
  local_128[0] = local_d0;
  FUN_4a16c410(auStack_d8,0,auStack_100);
  local_128[0] = local_e4;
  FUN_4a16c410(auStack_ec,0,auStack_114);
  local_128[0] = *(undefined4 *)(param_1 + 0x378);
  FUN_4a16c410(param_1 + 0x370,0,auStack_100);
  local_128[0] = *(undefined4 *)(param_1 + 0x38c);
  FUN_4a16c410(param_1 + 900,0,auStack_114);
  if (local_f4 != (int *)0x0) {
    (**(code **)(*local_f4 + 0xc))(local_f4);
  }
  (**(code **)(*(int *)(param_1 + 0x370) + 0x1c))((int *)(param_1 + 0x370));
  *(undefined4 *)(param_1 + 0x378) = local_f8;
  *(int **)(param_1 + 0x37c) = local_f4;
  if (local_108 != (int *)0x0) {
    (**(code **)(*local_108 + 0xc))(local_108);
  }
  (**(code **)(*(int *)(param_1 + 900) + 0x1c))((int *)(param_1 + 900));
  *(undefined4 *)(param_1 + 0x38c) = local_10c;
  *(int **)(param_1 + 0x390) = local_108;
  FUN_4a0dbd40(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x51c));
  FUN_4a16b6c0(auStack_114);
  FUN_4a16b6c0(auStack_100);
  FUN_4a16b6c0(auStack_ec);
  FUN_4a16b6c0(auStack_d8);
  FUN_4a16b6c0(auStack_c4);
  FUN_4a16b6c0(auStack_b0);
  FUN_4a16b6c0(auStack_9c);
  FUN_4a16c1a0(auStack_88);
  FUN_4a16b6c0(auStack_74);
  FUN_4a16c1a0(auStack_60);
  FUN_4a16b6c0(auStack_4c);
  FUN_4a16b6c0(auStack_38);
  return;
}



// Address: 4a0f3e54

int FUN_4a0f3e54(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = 0;
  FUN_4a0642fc();
  iVar1 = FUN_4a134d88();
  iVar5 = 0;
  uVar6 = iVar1 + *(int *)(param_1 + 0x50);
  if ((int)uVar6 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = uVar6 & 1;
  }
  if (uVar3 != 0) {
    do {
      iVar1 = *(int *)(param_1 + 0x50);
      if (iVar5 < iVar1) {
        if (*(int *)(param_1 + 0x54) == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(*(int *)(param_1 + 0x54) + 8);
        }
        iVar1 = iVar1 + iVar5 * 100;
      }
      else {
        uVar2 = FUN_4a0642fc();
        iVar1 = FUN_4a134d90(uVar2,iVar5 - iVar1);
      }
      iVar5 = iVar5 + 1;
      if (*(char *)(iVar1 + 8) == '\x0f') {
        iVar4 = iVar4 + 1;
      }
    } while (iVar5 < (int)uVar3);
  }
  while ((int)uVar3 < (int)uVar6) {
    iVar1 = *(int *)(param_1 + 0x50);
    if ((int)uVar3 < iVar1) {
      if (*(int *)(param_1 + 0x54) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0x54) + 8);
      }
      iVar1 = iVar1 + uVar3 * 100;
    }
    else {
      uVar2 = FUN_4a0642fc();
      iVar1 = FUN_4a134d90(uVar2,uVar3 - iVar1);
    }
    iVar5 = *(int *)(param_1 + 0x50);
    if (*(char *)(iVar1 + 8) == '\x0f') {
      iVar4 = iVar4 + 1;
    }
    iVar1 = uVar3 + 1;
    if (iVar1 < iVar5) {
      if (*(int *)(param_1 + 0x54) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x54) + 8);
      }
      iVar5 = iVar5 + iVar1 * 100;
    }
    else {
      uVar2 = FUN_4a0642fc();
      iVar5 = FUN_4a134d90(uVar2,iVar1 - iVar5);
    }
    uVar3 = uVar3 + 2;
    if (*(char *)(iVar5 + 8) == '\x0f') {
      iVar4 = iVar4 + 1;
    }
  }
  return iVar4;
}



// Address: 4a0f3f94

void FUN_4a0f3f94(int param_1)

{
  *(undefined4 *)(param_1 + 0x510) = 0;
  return;
}



// Address: 4a0f3fa0

void FUN_4a0f3fa0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_10c [72];
  undefined1 auStack_c4 [12];
  int local_b8;
  undefined1 auStack_b0 [12];
  int local_a4;
  int local_9c [25];
  undefined1 auStack_38 [20];
  
  *(undefined4 *)(param_1 + 0x3a8) = 0x100;
  *(undefined4 *)(param_1 + 0x3ac) = 0x100;
  FUN_4a0ef7ac(param_1);
  iVar1 = *(int *)(param_1 + 0x1c);
  local_9c[0x18] = FUN_4a0fba7c();
  uVar9 = *(undefined4 *)(iVar1 + 0x60);
  uVar2 = FUN_4a145a38(iVar1);
  piVar3 = (int *)FUN_4a0982e0(uVar9,uVar2);
  piVar4 = (int *)FUN_4a0b74b0(piVar3,0x138a);
  *(int **)(param_1 + 0x418) = piVar4;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))();
  }
  uVar2 = FUN_4a0b74b0(*(undefined4 *)(param_1 + 0x418),0x138b);
  *(undefined4 *)(param_1 + 0x41c) = uVar2;
  uVar2 = FUN_4a077b38();
  FUN_4a07c63c(uVar2,*(undefined4 *)(param_1 + 0x418),0xffffffff);
  FUN_4a077aa8(*(undefined4 *)(param_1 + 0x418));
  FUN_4a0b4c10(*(undefined4 *)(param_1 + 0x410),*(undefined4 *)(param_1 + 0x418));
  FUN_4a001134(local_9c,PTR_DAT_4a0f43c8,0x60);
  FUN_4a16be24(auStack_b0,4);
  FUN_4a16be24(auStack_c4,4);
  FUN_4a0b8a1c(auStack_10c);
  uVar10 = 0;
  do {
    iVar11 = local_9c[uVar10 + 1];
    iVar5 = FUN_4a0b74b0(piVar3,local_9c[uVar10]);
    if (iVar5 != 0) {
      FUN_4a13b6a8(iVar5,piVar3,auStack_10c);
      if (local_a4 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(local_a4 + 8);
      }
      *(undefined4 *)(iVar5 + 8) = 0;
      if (local_a4 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(local_a4 + 8);
      }
      *(undefined4 *)(iVar5 + 4) = 0;
      if (local_a4 == 0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = *(undefined4 **)(local_a4 + 8);
      }
      *puVar6 = 0;
      if (local_a4 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(local_a4 + 8);
      }
      *(undefined4 *)(iVar5 + 0xc) = 0x10000;
      FUN_4a13c368(auStack_10c,auStack_b0);
      uVar2 = 1;
      if (iVar11 == 4) {
        if (local_b8 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(local_b8 + 8);
        }
        *(undefined4 *)(iVar5 + 8) = 0;
        if (local_b8 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(local_b8 + 8);
        }
        *(undefined4 *)(iVar5 + 4) = 0;
        if (local_b8 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(local_b8 + 8);
        }
        *(undefined4 *)(iVar5 + 0xc) = 0x10000;
        if (local_b8 == 0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = *(undefined4 **)(local_b8 + 8);
        }
        *puVar6 = 0x10000;
        FUN_4a13c368(auStack_10c,auStack_c4);
        iVar5 = 0;
        if (local_b8 == 0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = *(int **)(local_b8 + 8);
        }
        if (local_a4 == 0) {
          piVar7 = (int *)0x0;
        }
        else {
          piVar7 = *(int **)(local_a4 + 8);
        }
        if (local_b8 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(local_b8 + 8);
        }
        if (local_a4 != 0) {
          iVar5 = *(int *)(local_a4 + 8);
        }
        uVar2 = FUN_4a105ec0(*piVar4 - *piVar7,*(int *)(iVar8 + 8) - *(int *)(iVar5 + 8));
      }
      if (local_a4 != 0) {
        iVar5 = *(int *)(local_a4 + 8);
      }
      else {
        iVar5 = 0;
      }
      if (local_a4 != 0) {
        iVar8 = *(int *)(local_a4 + 8);
        puVar6 = *(undefined4 **)(local_a4 + 8);
      }
      else {
        iVar8 = 0;
        puVar6 = (undefined4 *)0x0;
      }
      FUN_4a10ea38(local_9c[0x18],iVar11,*puVar6,*(undefined4 *)(iVar5 + 4),
                   *(undefined4 *)(iVar8 + 8),uVar2,0xffffffff);
    }
    uVar10 = uVar10 + 2;
  } while (uVar10 < 0x18);
  FUN_4a0c6bf4(auStack_10c);
  FUN_4a16bef4(auStack_c4);
  FUN_4a16bef4(auStack_b0);
  iVar5 = FUN_4a16c074(auStack_38,param_1 + 0x3b8);
  iVar11 = 0;
  if (0 < *(int *)(iVar5 + 8)) {
    do {
      if (*(int *)(iVar5 + 0xc) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(*(int *)(iVar5 + 0xc) + 8);
      }
      *(undefined2 *)(iVar8 + iVar11 * 2) = 0xf00;
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(iVar5 + 8));
  }
  FUN_4a16c1a0(auStack_38);
  uVar2 = FUN_4a0b74b0(piVar3,5000);
  FUN_4a0f0ea4(param_1,uVar2,0xfffff0ff,0);
  if ((piVar3 != (int *)0x0) && (iVar5 = (**(code **)(*piVar3 + 8))(piVar3), iVar5 != 0)) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  iVar11 = FUN_4a11f758(local_9c[0x18],2);
  switchD_4a11cc8c::default(iVar11 != 0,s_no_start_point__4a0f43cc);
  iVar5 = *(int *)(iVar11 + 0x44) >> 0x15;
  iVar11 = *(int *)(iVar11 + 0x4c) >> 0x15;
  FUN_4a11febc(local_9c[0x18],0,iVar5,0,iVar11,0,0);
  iVar1 = FUN_4a145a6c(iVar1);
  if (iVar1 != -1) {
    uVar2 = FUN_4a11febc(local_9c[0x18],1,iVar5 + 1,0,iVar11,2,iVar1);
    FUN_4a115de8(local_9c[0x18],uVar2);
    FUN_4a115df0(local_9c[0x18],uVar2);
  }
  uVar2 = FUN_4a077b38();
  FUN_4a0788c4(uVar2,*(undefined4 *)PTR_DAT_4a0f43e0,*(undefined4 *)PTR_DAT_4a0f43dc);
  FUN_4a0f1650(param_1);
  FUN_4a0f1b44(param_1);
  return;
}



// Address: 4a0f43e4

void FUN_4a0f43e4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  int local_dc;
  int local_d8;
  undefined1 auStack_d4 [12];
  int local_c8;
  undefined1 auStack_c0 [12];
  int local_b4;
  undefined1 auStack_ac [12];
  int local_a0;
  undefined1 auStack_98 [8];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 auStack_48 [12];
  int local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_4a16b934(auStack_48,4);
  iVar9 = 0;
  if (local_3c == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(local_3c + 8);
  }
  *puVar2 = 0;
  if (local_3c == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_3c + 8);
  }
  *(undefined4 *)(iVar3 + 4) = 0;
  if (local_3c == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_3c + 8);
  }
  *(undefined4 *)(iVar3 + 8) = 0;
  if (local_3c == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_3c + 8);
  }
  *(undefined4 *)(iVar3 + 0xc) = 0x3f800000;
  FUN_4a13c870(*(undefined4 *)(param_1 + 0x468),auStack_48);
  puVar1 = PTR_DAT_4a0f49b8;
  uVar11 = *(undefined4 *)PTR_DAT_4a0f49b8;
  local_d8 = FUN_4a0bc200(uVar11);
  local_dc = FUN_4a0bc1f8(uVar11);
  if (local_d8 < local_dc) {
    piVar4 = &local_dc;
  }
  else {
    piVar4 = &local_d8;
  }
  uVar11 = FUN_4a171fac(*piVar4);
  uVar12 = *(undefined4 *)puVar1;
  local_d8 = FUN_4a0bc200(uVar12);
  local_dc = FUN_4a0bc1f8(uVar12);
  if (local_dc < local_d8) {
    piVar4 = &local_dc;
  }
  else {
    piVar4 = &local_d8;
  }
  uVar12 = FUN_4a171fac(*piVar4);
  local_28 = FUN_4a171bb8(0x40000000,uVar11);
  local_2c = FUN_4a17295c(uVar11,0xffffffff);
  uVar5 = FUN_4a171fac(param_3);
  uVar5 = FUN_4a1725c0(uVar5,local_2c);
  uVar5 = FUN_4a17211c(uVar5,local_28);
  local_30 = FUN_4a171bb8(0x40000000,uVar12);
  local_34 = FUN_4a17295c(uVar12,0xffffffff);
  uVar6 = FUN_4a171fac(param_4);
  uVar6 = FUN_4a1725c0(uVar6,local_34);
  uVar6 = FUN_4a17211c(uVar6,local_30);
  uVar11 = FUN_4a171bb8(uVar11,uVar12);
  uVar12 = *(undefined4 *)PTR_DAT_4a0f49bc;
  uVar11 = FUN_4a17211c(uVar12,uVar11);
  uVar11 = FUN_4a17211c(uVar11,uVar5);
  uVar11 = FUN_4a17295c(uVar11,0xffffffff);
  uVar12 = FUN_4a17211c(uVar12,uVar6);
  local_4c = FUN_4a17295c(uVar12,0xffffffff);
  local_50 = *(undefined4 *)(param_1 + 0x488);
  uVar10 = *(uint *)(param_1 + 0x484);
  FUN_4a0b8a1c(auStack_98);
  puVar1 = PTR_DAT_4a0f49c0;
  local_90 = *(undefined4 *)PTR_DAT_4a0f49c0;
  uStack_8c = *(undefined4 *)(PTR_DAT_4a0f49c0 + 4);
  uStack_88 = *(undefined4 *)(PTR_DAT_4a0f49c0 + 8);
  uStack_84 = *(undefined4 *)(PTR_DAT_4a0f49c0 + 0xc);
  uStack_80 = *(undefined4 *)(PTR_DAT_4a0f49c0 + 0x10);
  uStack_7c = *(undefined4 *)(PTR_DAT_4a0f49c0 + 0x14);
  local_78 = *(undefined4 *)(PTR_DAT_4a0f49c0 + 0x18);
  local_74 = *(undefined4 *)(PTR_DAT_4a0f49c0 + 0x1c);
  uStack_70 = *(undefined4 *)(PTR_DAT_4a0f49c0 + 0x20);
  uStack_6c = *(undefined4 *)(PTR_DAT_4a0f49c0 + 0x24);
  uStack_68 = *(undefined4 *)(PTR_DAT_4a0f49c0 + 0x28);
  uStack_64 = *(undefined4 *)(PTR_DAT_4a0f49c0 + 0x2c);
  local_60 = *(undefined4 *)(PTR_DAT_4a0f49c0 + 0x30);
  uStack_5c = *(undefined4 *)(PTR_DAT_4a0f49c0 + 0x34);
  puVar2 = (undefined4 *)(PTR_DAT_4a0f49c0 + 0x38);
  local_58 = *puVar2;
  uStack_54 = *(undefined4 *)(PTR_DAT_4a0f49c0 + 0x3c);
  FUN_4a0b7cb0(auStack_98,local_50,0,0x3f800000,0);
  FUN_4a0b7cb0(auStack_98,uVar10 ^ 0x80000000,0x3f800000,0,0);
  FUN_4a16b934(auStack_ac,4);
  if (local_a0 == 0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = *(undefined4 **)(local_a0 + 8);
  }
  *puVar7 = 0;
  if (local_a0 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_a0 + 8);
  }
  *(undefined4 *)(iVar3 + 4) = 0x3f800000;
  if (local_a0 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_a0 + 8);
  }
  *(undefined4 *)(iVar3 + 8) = 0;
  if (local_a0 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_a0 + 8);
  }
  *(undefined4 *)(iVar3 + 0xc) = 0x3f800000;
  FUN_4a13c870(auStack_98,auStack_ac);
  FUN_4a16b934(auStack_c0,4);
  if (local_b4 == 0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = *(undefined4 **)(local_b4 + 8);
  }
  *puVar7 = 0xbf800000;
  if (local_b4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_b4 + 8);
  }
  *(undefined4 *)(iVar3 + 4) = 0;
  if (local_b4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_b4 + 8);
  }
  *(undefined4 *)(iVar3 + 8) = 0;
  if (local_b4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_b4 + 8);
  }
  *(undefined4 *)(iVar3 + 0xc) = 0x3f800000;
  FUN_4a13c870(auStack_98,auStack_c0);
  local_90 = *(undefined4 *)puVar1;
  uStack_8c = *(undefined4 *)(puVar1 + 4);
  uStack_88 = *(undefined4 *)(puVar1 + 8);
  uStack_84 = *(undefined4 *)(puVar1 + 0xc);
  uStack_80 = *(undefined4 *)(puVar1 + 0x10);
  uStack_7c = *(undefined4 *)(puVar1 + 0x14);
  local_78 = *(undefined4 *)(puVar1 + 0x18);
  local_74 = *(undefined4 *)(puVar1 + 0x1c);
  uStack_70 = *(undefined4 *)(puVar1 + 0x20);
  uStack_6c = *(undefined4 *)(puVar1 + 0x24);
  uStack_68 = *(undefined4 *)(puVar1 + 0x28);
  uStack_64 = *(undefined4 *)(puVar1 + 0x2c);
  local_60 = *(undefined4 *)(puVar1 + 0x30);
  uStack_5c = *(undefined4 *)(puVar1 + 0x34);
  local_58 = *puVar2;
  uStack_54 = *(undefined4 *)(puVar1 + 0x3c);
  bVar13 = local_a0 != 0;
  if (bVar13) {
    iVar3 = *(int *)(local_a0 + 8);
  }
  else {
    iVar3 = 0;
  }
  local_d8 = *(int *)(iVar3 + 8);
  if (bVar13) {
    iVar3 = *(int *)(local_a0 + 8);
  }
  else {
    iVar3 = 0;
  }
  uVar12 = *(undefined4 *)(iVar3 + 4);
  if (bVar13) {
    puVar2 = *(undefined4 **)(local_a0 + 8);
  }
  else {
    puVar2 = (undefined4 *)0x0;
  }
  uVar5 = *puVar2;
  uVar11 = FUN_4a17211c(uVar11,DAT_4a0f49c4);
  FUN_4a0b7cb0(auStack_98,uVar11,uVar5,uVar12,local_d8);
  bVar13 = local_b4 != 0;
  if (bVar13) {
    iVar3 = *(int *)(local_b4 + 8);
  }
  else {
    iVar3 = 0;
  }
  uVar11 = *(undefined4 *)(iVar3 + 8);
  if (bVar13) {
    iVar3 = *(int *)(local_b4 + 8);
  }
  else {
    iVar3 = 0;
  }
  uVar12 = *(undefined4 *)(iVar3 + 4);
  if (bVar13) {
    puVar2 = *(undefined4 **)(local_b4 + 8);
  }
  else {
    puVar2 = (undefined4 *)0x0;
  }
  uVar6 = *puVar2;
  uVar5 = FUN_4a17211c(local_4c,DAT_4a0f49c8);
  FUN_4a0b7cb0(auStack_98,uVar5,uVar6,uVar12,uVar11);
  FUN_4a0b7cb0(auStack_98,local_50,0,0x3f800000,0);
  FUN_4a0b7cb0(auStack_98,uVar10 ^ 0x80000000,0x3f800000,0,0);
  FUN_4a16b934(auStack_d4,4);
  if (local_c8 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(local_c8 + 8);
  }
  *puVar2 = 0;
  if (local_c8 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_c8 + 8);
  }
  *(undefined4 *)(iVar3 + 4) = 0;
  if (local_c8 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_c8 + 8);
  }
  *(undefined4 *)(iVar3 + 8) = 0xbf800000;
  if (local_c8 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_c8 + 8);
  }
  *(undefined4 *)(iVar3 + 0xc) = 0x3f800000;
  FUN_4a13c870(auStack_98,auStack_d4);
  if (local_3c == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_3c + 8);
  }
  if (local_c8 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(local_c8 + 8);
  }
  uVar11 = FUN_4a171bb8(*(uint *)(iVar3 + 4) ^ 0x80000000,*(undefined4 *)(iVar8 + 4));
  if (local_3c == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(local_3c + 8);
  }
  uVar12 = *puVar2;
  if (local_c8 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(local_c8 + 8);
  }
  uVar5 = FUN_4a17211c(*puVar2,uVar11);
  uVar12 = FUN_4a171a94(uVar5,uVar12);
  if (local_3c == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_3c + 8);
  }
  uVar5 = *(undefined4 *)(iVar3 + 8);
  if (local_c8 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_c8 + 8);
  }
  uVar6 = FUN_4a17211c(*(undefined4 *)(iVar3 + 8),uVar11);
  uVar5 = FUN_4a171a94(uVar6,uVar5);
  FUN_4a17295c(uVar12,0x10);
  uVar12 = FUN_4a171e1c();
  if (*(int *)(param_2 + 0xc) == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(*(int *)(param_2 + 0xc) + 8);
  }
  *puVar2 = uVar12;
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_2 + 0xc) + 8);
  }
  *(undefined4 *)(iVar3 + 4) = 0;
  FUN_4a17295c(uVar5,0x10);
  uVar12 = FUN_4a171e1c();
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_2 + 0xc) + 8);
  }
  *(undefined4 *)(iVar3 + 8) = uVar12;
  FUN_4a17295c(uVar11,0x10);
  uVar11 = FUN_4a171e1c();
  if (*(int *)(param_2 + 0xc) != 0) {
    iVar9 = *(int *)(*(int *)(param_2 + 0xc) + 8);
  }
  *(undefined4 *)(iVar9 + 0xc) = uVar11;
  FUN_4a16ba04(auStack_d4);
  FUN_4a16ba04(auStack_c0);
  FUN_4a16ba04(auStack_ac);
  FUN_4a0c6bf4(auStack_98);
  FUN_4a16ba04(auStack_48);
  return;
}



// Address: 4a0f49cc

undefined4 FUN_4a0f49cc(int param_1,short param_2)

{
  undefined4 uVar1;
  undefined1 auStack_1c [20];
  
  uVar1 = FUN_4a16c074(auStack_1c,param_1 + 0x4c4);
  uVar1 = FUN_4a16ff5c((int)param_2,uVar1,0);
  FUN_4a16c1a0(auStack_1c);
  return uVar1;
}



// Address: 4a0f4a18

int FUN_4a0f4a18(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = -1;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x3d4)) {
    do {
      if (*(int *)(param_1 + 0x3d8) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0x3d8) + 8);
      }
      iVar1 = FUN_4a0baaa0(*(undefined4 *)(iVar1 + iVar2 * 4),param_2,param_3);
      if ((0 < iVar1) && ((iVar3 == 0 || (iVar1 < iVar3)))) {
        iVar3 = iVar1;
        iVar4 = iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x3d4));
  }
  return iVar4;
}



// Address: 4a0f4aa0

void FUN_4a0f4aa0(int param_1,int param_2)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  undefined1 auStack_118 [12];
  int local_10c;
  undefined1 auStack_104 [12];
  int local_f8;
  undefined1 auStack_f0 [12];
  int local_e4;
  undefined1 auStack_dc [8];
  int local_d4;
  int local_d0;
  undefined1 auStack_c8 [12];
  int local_bc;
  undefined1 auStack_b4 [12];
  int local_a8;
  undefined1 auStack_a0 [12];
  int local_94;
  undefined1 auStack_8c [8];
  int local_84;
  int local_80;
  undefined1 auStack_78 [12];
  int local_6c;
  undefined1 auStack_64 [12];
  int local_58;
  undefined1 auStack_50 [12];
  int local_44;
  undefined1 auStack_3c [8];
  int local_34;
  int local_30;
  int local_28;
  
  FUN_4a0fb644();
  if (*(int *)(param_1 + 0x1bc) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x1bc) + 8);
  }
  FUN_4a16b5a0(auStack_3c,iVar3 + param_2 * 0x14);
  if (*(int *)(param_1 + 0x1d0) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x1d0) + 8);
  }
  FUN_4a16b5a0(auStack_50,iVar3 + param_2 * 0x14);
  if (*(int *)(param_1 + 0x1e4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x1e4) + 8);
  }
  FUN_4a16b5a0(auStack_64,iVar3 + param_2 * 0x14);
  if (*(int *)(param_1 + 0x1f8) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x1f8) + 8);
  }
  FUN_4a16b5a0(auStack_78,iVar3 + param_2 * 0x14);
  if (*(int *)(param_1 + 0x234) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x234) + 8);
  }
  FUN_4a16b5a0(auStack_8c,iVar3 + param_2 * 0x14);
  if (*(int *)(param_1 + 0x248) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x248) + 8);
  }
  FUN_4a16b5a0(auStack_a0,iVar3 + param_2 * 0x14);
  if (*(int *)(param_1 + 0x25c) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x25c) + 8);
  }
  FUN_4a16b5a0(auStack_b4,iVar3 + param_2 * 0x14);
  if (*(int *)(param_1 + 0x270) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x270) + 8);
  }
  FUN_4a16c074(auStack_c8,iVar3 + param_2 * 0x14);
  if (*(int *)(param_1 + 0x284) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x284) + 8);
  }
  FUN_4a16b5a0(auStack_dc,iVar3 + param_2 * 0x14);
  if (*(int *)(param_1 + 0x298) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x298) + 8);
  }
  FUN_4a16b5a0(auStack_f0,iVar3 + param_2 * 0x14);
  if (*(int *)(param_1 + 0x2ac) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x2ac) + 8);
  }
  FUN_4a16b5a0(auStack_104,iVar3 + param_2 * 0x14);
  if (*(int *)(param_1 + 0x2c0) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x2c0) + 8);
  }
  FUN_4a16c074(auStack_118,iVar3 + param_2 * 0x14);
  iVar3 = 0;
  if (0 < local_34) {
    do {
      if (local_30 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(local_30 + 8);
      }
      iVar4 = (int)*(char *)(iVar4 + iVar3);
      if (local_44 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(local_44 + 8);
      }
      iVar5 = (int)*(char *)(iVar5 + iVar3);
      if (local_58 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(local_58 + 8);
      }
      iVar6 = (int)*(char *)(iVar6 + iVar3);
      if (local_6c == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(local_6c + 8);
      }
      iVar7 = (int)*(char *)(iVar7 + iVar3);
      FUN_4a0f10a8(param_1,iVar4,iVar5,iVar6,iVar7,0xffff,iVar3 + 1U | 0x10);
      FUN_4a0f10a8(param_1,iVar4,iVar5,iVar6,1,0xffff,0x800);
      FUN_4a0f10a8(param_1,iVar4,iVar5 + -1,iVar6,1,0xffff,0x400);
      local_28 = iVar5 + iVar7;
      FUN_4a0f10a8(param_1,iVar4,local_28 + -1,iVar6,1,0xffff,0x400);
      FUN_4a0f10a8(param_1,iVar4,local_28,iVar6,1,0xffff,0x800);
      FUN_4a0f10a8(param_1,iVar4,iVar5,1,iVar7,0xffff,0x200);
      FUN_4a0f10a8(param_1,iVar4 + -1,iVar5,1,iVar7,0xffff,0x100);
      FUN_4a0f10a8(param_1,iVar4 + iVar6 + -1,iVar5,1,iVar7,0xffff,0x100);
      FUN_4a0f10a8(param_1,iVar4 + iVar6,iVar5,1,iVar7,0xffff,0x200);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_34);
  }
  uVar8 = FUN_4a0fba7c(*(undefined4 *)(param_1 + 0x1c));
  iVar3 = 0;
  bVar2 = false;
  if (0 < local_84) {
    do {
      iVar4 = 0;
      if (local_80 != 0) {
        iVar4 = *(int *)(local_80 + 8);
      }
      iVar5 = (int)*(char *)(iVar4 + iVar3);
      iVar4 = 0;
      if (local_94 != 0) {
        iVar4 = *(int *)(local_94 + 8);
      }
      iVar6 = (int)*(char *)(iVar4 + iVar3);
      iVar4 = 0;
      if (local_a8 != 0) {
        iVar4 = *(int *)(local_a8 + 8);
      }
      iVar4 = (int)*(char *)(iVar4 + iVar3);
      if (iVar4 <= -iVar4) {
        iVar4 = -iVar4;
      }
      iVar7 = 0;
      if (local_bc != 0) {
        iVar7 = *(int *)(local_bc + 8);
      }
      iVar7 = (int)*(short *)(iVar7 + iVar3 * 2);
      uVar9 = FUN_4a142f2c(param_1,iVar5,iVar6);
      uVar10 = FUN_4a142f2c(param_1,iVar5 + -1,iVar6);
      if ((uVar10 & uVar9 & 0xf00) == 0) {
        iVar13 = iVar5 + 1;
        iVar14 = iVar6 + iVar4 + -1;
        iVar15 = 0;
        if (local_a8 != 0) {
          iVar15 = *(int *)(local_a8 + 8);
        }
        iVar16 = 2;
        iVar12 = 0;
        *(char *)(iVar15 + iVar3) = -(char)iVar4;
        iVar15 = iVar4;
      }
      else {
        iVar13 = iVar5 + iVar4 + -1;
        iVar14 = iVar6 + 1;
        iVar12 = 1;
        iVar15 = 2;
        iVar16 = iVar4;
      }
      FUN_4a0f10a8(param_1,iVar5,iVar6,iVar16,iVar15,0xfffff0ff,0x20);
      if (iVar7 != -1) {
        iVar5 = iVar13;
        iVar4 = iVar14;
        if (iVar12 == 0) {
          uVar9 = FUN_4a142f2c(param_1,iVar13,iVar14);
          if ((uVar9 & 0xf) == 0) {
LAB_4a0f4f8c:
            bVar17 = true;
          }
          else {
            uVar9 = FUN_4a142f2c(param_1,iVar13 + -1,iVar14);
            bVar17 = (uVar9 & 0xf) == 0;
            if (bVar17) {
              iVar12 = 2;
              iVar5 = iVar13 + -1;
            }
          }
        }
        else {
          uVar9 = FUN_4a142f2c(param_1,iVar13,iVar14);
          if ((uVar9 & 0xf) == 0) goto LAB_4a0f4f8c;
          uVar9 = FUN_4a142f2c(param_1,iVar13,iVar14 + -1);
          bVar17 = (uVar9 & 0xf) == 0;
          if (bVar17) {
            iVar12 = 3;
            iVar4 = iVar14 + -1;
          }
        }
        uVar11 = FUN_4a11febc(uVar8,iVar7,iVar13,0,iVar14,iVar12,iVar3);
        if ((bVar17 != false) && (FUN_4a1071f0(uVar11,0x100000,bVar17), !bVar2)) {
          bVar2 = true;
          uVar11 = FUN_4a0fba7c(*(undefined4 *)(param_1 + 0x1c));
          FUN_4a11febc(uVar11,0x20,iVar5,0x3333,iVar4,iVar12,0xffffffff);
          iVar6 = FUN_4a0f0760(*(undefined4 *)(param_1 + 0x318));
          if (((iVar6 != 0) || (*(int *)(param_1 + 0x318) == 0)) &&
             (iVar6 = FUN_4a0d7cf8(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x51c),0), iVar6 != -1
             )) {
            FUN_4a10ea38(uVar11,iVar6,iVar5 * 0x200000 + 0xd00000,0,iVar4 * 0x200000 + 0x900000,
                         iVar12,0xffffffff);
          }
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_84);
  }
  iVar3 = 0;
  if (0 < local_d4) {
    do {
      if (local_d0 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(local_d0 + 8);
      }
      iVar4 = (int)*(char *)(iVar4 + iVar3);
      if (local_e4 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(local_e4 + 8);
      }
      iVar5 = (int)*(char *)(iVar5 + iVar3);
      if (local_f8 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(local_f8 + 8);
      }
      iVar6 = (int)*(char *)(iVar6 + iVar3);
      if (iVar6 <= -iVar6) {
        iVar6 = -iVar6;
      }
      if (local_10c == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(local_10c + 8);
      }
      sVar1 = *(short *)(iVar7 + iVar3 * 2);
      uVar9 = FUN_4a142f2c(param_1,iVar4,iVar5);
      uVar10 = FUN_4a142f2c(param_1,iVar4 + -1,iVar5);
      if ((uVar10 & uVar9 & 0xf00) == 0) {
        iVar7 = iVar4 + 1;
        iVar15 = iVar5 + iVar6 + -1;
        if (local_f8 == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = *(int *)(local_f8 + 8);
        }
        iVar14 = 2;
        uVar11 = 0;
        *(char *)(iVar13 + iVar3) = -(char)iVar6;
        iVar13 = iVar6;
      }
      else {
        iVar15 = iVar5 + 1;
        iVar7 = iVar4 + iVar6 + -1;
        uVar11 = 1;
        iVar13 = 2;
        iVar14 = iVar6;
      }
      FUN_4a0f10a8(param_1,iVar4,iVar5,iVar14,iVar13,0xffff,0x80);
      FUN_4a11febc(uVar8,(int)sVar1,iVar7,0,iVar15,uVar11,iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_d4);
  }
  switchD_4a1193c4::default(s_paintAttributesHouse_4a0f5264);
  FUN_4a16c1a0(auStack_118);
  FUN_4a16b6c0(auStack_104);
  FUN_4a16b6c0(auStack_f0);
  FUN_4a16b6c0(auStack_dc);
  FUN_4a16c1a0(auStack_c8);
  FUN_4a16b6c0(auStack_b4);
  FUN_4a16b6c0(auStack_a0);
  FUN_4a16b6c0(auStack_8c);
  FUN_4a16b6c0(auStack_78);
  FUN_4a16b6c0(auStack_64);
  FUN_4a16b6c0(auStack_50);
  FUN_4a16b6c0(auStack_3c);
  return;
}



// Address: 4a0f527c

void FUN_4a0f527c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_a4 [72];
  undefined1 auStack_5c [12];
  int local_50;
  undefined4 local_48;
  undefined1 auStack_44 [20];
  int iStack_30;
  int local_2c;
  undefined4 uStack_28;
  
  *(undefined4 *)(param_1 + 0x3a8) = 0xc0;
  *(undefined4 *)(param_1 + 0x3ac) = 0xc0;
  iStack_30 = param_1;
  local_2c = param_2;
  uStack_28 = param_3;
  FUN_4a0ef7ac(param_1);
  iVar1 = *(int *)(param_1 + 0x1c);
  local_48 = FUN_4a0fba7c();
  piVar2 = (int *)FUN_4a0982e0(*(undefined4 *)(iVar1 + 0x60),0xb1);
  piVar3 = (int *)FUN_4a0b74b0(piVar2,0x138a);
  *(int **)(param_1 + 0x418) = piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
  }
  uVar4 = FUN_4a0b74b0(*(undefined4 *)(param_1 + 0x418),0x138b);
  *(undefined4 *)(param_1 + 0x41c) = uVar4;
  uVar4 = FUN_4a077b38();
  FUN_4a07c63c(uVar4,*(undefined4 *)(param_1 + 0x418),0xffffffff);
  FUN_4a077aa8(*(undefined4 *)(param_1 + 0x418));
  FUN_4a0b4c10(*(undefined4 *)(param_1 + 0x410),*(undefined4 *)(param_1 + 0x418));
  iVar5 = FUN_4a0b74b0(*(undefined4 *)(param_1 + 0x418),0x138c);
  if (iVar5 != 0) {
    FUN_4a06f8f0(param_1 + 0x420,*(undefined4 *)(param_1 + 0x418));
    FUN_4a06f95c(param_1 + 0x420,0xd8,0x14);
  }
  FUN_4a16be24(auStack_5c,4);
  iVar11 = 0;
  FUN_4a0b8a1c(auStack_a4);
  iVar12 = *(int *)(param_1 + 0x50);
  iVar5 = 0;
  if (0 < iVar12) {
    do {
      iVar6 = *(int *)(param_1 + 0x50);
      if (iVar5 < iVar6) {
        if (*(int *)(param_1 + 0x54) == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(*(int *)(param_1 + 0x54) + 8);
        }
        iVar6 = iVar6 + iVar5 * 100;
      }
      else {
        uVar4 = FUN_4a0642fc();
        iVar6 = FUN_4a134d90(uVar4,iVar5 - iVar6);
      }
      if ((*(uint *)(iVar6 + 0x14) & 0x40) != 0) {
        iVar6 = *(int *)(param_1 + 0x50);
        if (iVar5 < iVar6) {
          if (*(int *)(param_1 + 0x54) == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(*(int *)(param_1 + 0x54) + 8);
          }
          iVar6 = iVar6 + iVar5 * 100;
        }
        else {
          uVar4 = FUN_4a0642fc();
          iVar6 = FUN_4a134d90(uVar4,iVar5 - iVar6);
        }
        iVar6 = FUN_4a0b74b0(piVar2,(int)*(short *)(iVar6 + 0x20));
        if (iVar6 != 0) {
          FUN_4a13b6a8(iVar6,piVar2,auStack_a4);
          if (local_50 == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(local_50 + 8);
          }
          *(undefined4 *)(iVar7 + 8) = 0;
          if (local_50 == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(local_50 + 8);
          }
          *(undefined4 *)(iVar7 + 4) = 0;
          if (local_50 == 0) {
            puVar8 = (undefined4 *)0x0;
          }
          else {
            puVar8 = *(undefined4 **)(local_50 + 8);
          }
          *puVar8 = 0;
          if (local_50 == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(local_50 + 8);
          }
          *(undefined4 *)(iVar7 + 0xc) = 0x10000;
          FUN_4a13c368(auStack_a4,auStack_5c);
          bVar13 = local_50 != 0;
          if (bVar13) {
            iVar7 = *(int *)(local_50 + 8);
          }
          else {
            iVar7 = 0;
          }
          if (bVar13) {
            puVar8 = *(undefined4 **)(local_50 + 8);
            iVar9 = *(int *)(local_50 + 8);
          }
          else {
            puVar8 = (undefined4 *)0x0;
            iVar9 = 0;
          }
          if (!bVar13) {
            iVar9 = 0;
          }
          uVar4 = FUN_4a10ea38(local_48,iVar5,*puVar8,*(undefined4 *)(iVar9 + 4),
                               *(undefined4 *)(iVar7 + 8),1,0xffffffff);
          FUN_4a108194(uVar4,iVar6);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar12);
  }
  FUN_4a0c6bf4(auStack_a4);
  FUN_4a16bef4(auStack_5c);
  iVar5 = FUN_4a16c074(auStack_44,param_1 + 0x3b8);
  iVar12 = 0;
  if (0 < *(int *)(iVar5 + 8)) {
    do {
      if (*(int *)(iVar5 + 0xc) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(iVar5 + 0xc) + 8);
      }
      *(undefined2 *)(iVar6 + iVar12 * 2) = 0xf00;
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(iVar5 + 8));
  }
  FUN_4a16c1a0(auStack_44);
  uVar4 = FUN_4a0b74b0(piVar2,5000);
  FUN_4a0f0ea4(param_1,uVar4,0xfffff0ff,0);
  uVar4 = FUN_4a0b74b0(piVar2,0x1389);
  FUN_4a0f0ea4(param_1,uVar4,0,0x40);
  FUN_4a0f1cc4(param_1);
  if ((piVar2 != (int *)0x0) && (iVar5 = (**(code **)(*piVar2 + 8))(piVar2), iVar5 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  if (local_2c == 0) {
    iVar5 = FUN_4a145960(iVar1);
    if (iVar5 == -1) {
      uVar4 = FUN_4a145b34(iVar1);
      uVar10 = FUN_4a145b2c(iVar1);
      FUN_4a10ea38(local_48,0,uVar10,0,uVar4,0,0);
      iVar5 = FUN_4a145a6c(iVar1);
      if (iVar5 != -1) {
        uVar4 = FUN_4a145a30(iVar1);
        uVar10 = FUN_4a145a28(iVar1);
        FUN_4a10ea38(local_48,1,uVar10,0,uVar4,0,iVar5);
      }
      FUN_4a0fc570(iVar1,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x318) = 0xd;
      if (*(int *)(param_1 + 0x1a8) != 0) {
        iVar11 = *(int *)(*(int *)(param_1 + 0x1a8) + 8);
      }
      uVar4 = FUN_4a11f758(local_48,(int)*(short *)(iVar11 + iVar5 * 2));
      FUN_4a125d70(local_48,0,uVar4);
    }
  }
  else {
    uVar10 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x51c);
    uVar4 = FUN_4a13fa14(uVar10,0);
    uVar4 = FUN_4a1407a0(uVar10,uVar4);
    iVar1 = FUN_4a11f758(local_48,uVar4);
    switchD_4a11cc8c::default(iVar1 != 0,s_couldn_t_find_workplace_4a0f5754);
    FUN_4a125d70(local_48,0,iVar1);
    FUN_4a1183c8(local_48,0xaa,iVar1,0,0);
  }
  uVar4 = FUN_4a077b38();
  FUN_4a0788c4(uVar4,*(undefined4 *)PTR_DAT_4a0f5770,*(undefined4 *)PTR_DAT_4a0f576c);
  FUN_4a0f1650(param_1);
  FUN_4a0f1b44(param_1);
  return;
}



// Address: 4a0f5774

void FUN_4a0f5774(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar5;
  undefined4 unaff_r6;
  uint uVar6;
  undefined4 unaff_r7;
  uint uVar7;
  undefined4 unaff_r8;
  uint uVar8;
  undefined4 unaff_r9;
  uint uVar9;
  undefined4 unaff_r10;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 in_lr;
  undefined4 *puVar15;
  
  puVar1 = PTR_DAT_4a0f5908;
  iVar5 = *(int *)(param_1 + 0x464);
  uVar6 = *(uint *)(param_1 + 0x470);
  uVar7 = *(uint *)(param_1 + 0x474);
  uVar8 = *(uint *)(param_1 + 0x478);
  uVar3 = *(undefined4 *)(PTR_DAT_4a0f5908 + 4);
  uVar4 = *(undefined4 *)(PTR_DAT_4a0f5908 + 8);
  uVar12 = *(undefined4 *)(PTR_DAT_4a0f5908 + 0xc);
  puVar15 = (undefined4 *)(PTR_DAT_4a0f5908 + 0x10);
  uVar9 = *(uint *)(param_1 + 0x484);
  uVar10 = *(uint *)(param_1 + 0x488);
  uVar11 = *(uint *)(param_1 + 0x48c);
  *(undefined4 *)(iVar5 + 8) = *(undefined4 *)PTR_DAT_4a0f5908;
  *(undefined4 *)(iVar5 + 0xc) = uVar3;
  *(undefined4 *)(iVar5 + 0x10) = uVar4;
  *(undefined4 *)(iVar5 + 0x14) = uVar12;
  uVar3 = *(undefined4 *)(puVar1 + 0x14);
  uVar4 = *(undefined4 *)(puVar1 + 0x18);
  uVar12 = *(undefined4 *)(puVar1 + 0x1c);
  *(undefined4 *)(iVar5 + 0x18) = *puVar15;
  *(undefined4 *)(iVar5 + 0x1c) = uVar3;
  *(undefined4 *)(iVar5 + 0x20) = uVar4;
  *(undefined4 *)(iVar5 + 0x24) = uVar12;
  uVar3 = *(undefined4 *)(puVar1 + 0x24);
  uVar4 = *(undefined4 *)(puVar1 + 0x28);
  uVar12 = *(undefined4 *)(puVar1 + 0x2c);
  *(undefined4 *)(iVar5 + 0x28) = *(undefined4 *)(puVar1 + 0x20);
  *(undefined4 *)(iVar5 + 0x2c) = uVar3;
  *(undefined4 *)(iVar5 + 0x30) = uVar4;
  *(undefined4 *)(iVar5 + 0x34) = uVar12;
  uVar3 = *(undefined4 *)(puVar1 + 0x34);
  uVar4 = *(undefined4 *)(puVar1 + 0x38);
  uVar12 = *(undefined4 *)(puVar1 + 0x3c);
  *(undefined4 *)(iVar5 + 0x38) = *(undefined4 *)(puVar1 + 0x30);
  *(undefined4 *)(iVar5 + 0x3c) = uVar3;
  *(undefined4 *)(iVar5 + 0x40) = uVar4;
  *(undefined4 *)(iVar5 + 0x44) = uVar12;
  FUN_4a0b7e44(iVar5,uVar6,uVar7,uVar8,param_4);
  FUN_4a0b7cb0(iVar5,uVar10,0,0x3f800000,0);
  FUN_4a0b7cb0(iVar5,uVar9 ^ 0x80000000,0x3f800000,0,0);
  FUN_4a0b7e44(iVar5,0,0,uVar11);
  iVar2 = *(int *)(param_1 + 0x468);
  uVar3 = *(undefined4 *)(iVar5 + 0xc);
  uVar4 = *(undefined4 *)(iVar5 + 0x10);
  uVar12 = *(undefined4 *)(iVar5 + 0x14);
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar5 + 8);
  *(undefined4 *)(iVar2 + 0xc) = uVar3;
  *(undefined4 *)(iVar2 + 0x10) = uVar4;
  *(undefined4 *)(iVar2 + 0x14) = uVar12;
  uVar3 = *(undefined4 *)(iVar5 + 0x1c);
  uVar4 = *(undefined4 *)(iVar5 + 0x20);
  uVar12 = *(undefined4 *)(iVar5 + 0x24);
  *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar5 + 0x18);
  *(undefined4 *)(iVar2 + 0x1c) = uVar3;
  *(undefined4 *)(iVar2 + 0x20) = uVar4;
  *(undefined4 *)(iVar2 + 0x24) = uVar12;
  uVar3 = *(undefined4 *)(iVar5 + 0x2c);
  uVar4 = *(undefined4 *)(iVar5 + 0x30);
  uVar12 = *(undefined4 *)(iVar5 + 0x34);
  *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(iVar5 + 0x28);
  *(undefined4 *)(iVar2 + 0x2c) = uVar3;
  *(undefined4 *)(iVar2 + 0x30) = uVar4;
  *(undefined4 *)(iVar2 + 0x34) = uVar12;
  uVar3 = *(undefined4 *)(iVar5 + 0x3c);
  uVar4 = *(undefined4 *)(iVar5 + 0x40);
  uVar12 = *(undefined4 *)(iVar5 + 0x44);
  *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(iVar5 + 0x38);
  *(undefined4 *)(iVar2 + 0x3c) = uVar3;
  *(undefined4 *)(iVar2 + 0x40) = uVar4;
  *(undefined4 *)(iVar2 + 0x44) = uVar12;
  FUN_4a0b7cb0(iVar5,0x42b40000,0,0,0x3f800000);
  puVar1 = PTR_DAT_4a0f5908;
  iVar2 = *(int *)(param_1 + 0x46c);
  uVar3 = *(undefined4 *)(PTR_DAT_4a0f5908 + 4);
  uVar4 = *(undefined4 *)(PTR_DAT_4a0f5908 + 8);
  uVar12 = *(undefined4 *)(PTR_DAT_4a0f5908 + 0xc);
  uVar13 = *(undefined4 *)(PTR_DAT_4a0f5908 + 0x10);
  puVar15 = (undefined4 *)(PTR_DAT_4a0f5908 + 0x14);
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)PTR_DAT_4a0f5908;
  *(undefined4 *)(iVar2 + 0xc) = uVar3;
  *(undefined4 *)(iVar2 + 0x10) = uVar4;
  *(undefined4 *)(iVar2 + 0x14) = uVar12;
  *(undefined4 *)(iVar2 + 0x18) = uVar13;
  uVar3 = *(undefined4 *)(puVar1 + 0x18);
  uVar4 = *(undefined4 *)(puVar1 + 0x1c);
  uVar12 = *(undefined4 *)(puVar1 + 0x20);
  uVar13 = *(undefined4 *)(puVar1 + 0x24);
  *(undefined4 *)(iVar2 + 0x1c) = *puVar15;
  *(undefined4 *)(iVar2 + 0x20) = uVar3;
  *(undefined4 *)(iVar2 + 0x24) = uVar4;
  *(undefined4 *)(iVar2 + 0x28) = uVar12;
  *(undefined4 *)(iVar2 + 0x2c) = uVar13;
  uVar3 = *(undefined4 *)(puVar1 + 0x2c);
  uVar4 = *(undefined4 *)(puVar1 + 0x30);
  uVar12 = *(undefined4 *)(puVar1 + 0x34);
  uVar13 = *(undefined4 *)(puVar1 + 0x38);
  uVar14 = *(undefined4 *)(puVar1 + 0x3c);
  *(undefined4 *)(iVar2 + 0x30) = *(undefined4 *)(puVar1 + 0x28);
  *(undefined4 *)(iVar2 + 0x34) = uVar3;
  *(undefined4 *)(iVar2 + 0x38) = uVar4;
  *(undefined4 *)(iVar2 + 0x3c) = uVar12;
  *(undefined4 *)(iVar2 + 0x40) = uVar13;
  *(undefined4 *)(iVar2 + 0x44) = uVar14;
  FUN_4a0b7cb0(iVar2,0xc2b40000,0,0,0x3f800000);
  FUN_4a0b7e44(iVar2,0,0,uVar11 ^ 0x80000000);
  FUN_4a0b7cb0(iVar2,uVar9,0x3f800000,0,0);
  FUN_4a0b7cb0(iVar2,uVar10 ^ 0x80000000,0,0x3f800000,0);
  uVar8 = uVar8 ^ 0x80000000;
  uVar7 = uVar7 ^ 0x80000000;
  uVar6 = uVar6 ^ 0x80000000;
  uVar3 = FUN_4a17211c(uVar8,*(undefined4 *)(iVar2 + 0x10),uVar7,uVar8,unaff_r4,unaff_r5,unaff_r6,
                       unaff_r7,unaff_r8,unaff_r9,unaff_r10,in_lr);
  uVar4 = FUN_4a17211c(uVar7,*(undefined4 *)(iVar2 + 0xc));
  uVar12 = FUN_4a17211c(uVar6,*(undefined4 *)(iVar2 + 8));
  uVar4 = FUN_4a171a94(uVar12,uVar4);
  uVar3 = FUN_4a171a94(uVar4,uVar3);
  uVar3 = FUN_4a171a94(uVar3,*(undefined4 *)(iVar2 + 0x14));
  *(undefined4 *)(iVar2 + 0x14) = uVar3;
  uVar3 = FUN_4a17211c(uVar8,*(undefined4 *)(iVar2 + 0x20));
  uVar4 = FUN_4a17211c(uVar7,*(undefined4 *)(iVar2 + 0x1c));
  uVar12 = FUN_4a17211c(uVar6,*(undefined4 *)(iVar2 + 0x18));
  uVar4 = FUN_4a171a94(uVar12,uVar4);
  uVar3 = FUN_4a171a94(uVar4,uVar3);
  uVar3 = FUN_4a171a94(uVar3,*(undefined4 *)(iVar2 + 0x24));
  *(undefined4 *)(iVar2 + 0x24) = uVar3;
  uVar3 = FUN_4a17211c(uVar8,*(undefined4 *)(iVar2 + 0x30));
  uVar4 = FUN_4a17211c(uVar7,*(undefined4 *)(iVar2 + 0x2c));
  uVar12 = FUN_4a17211c(uVar6,*(undefined4 *)(iVar2 + 0x28));
  uVar4 = FUN_4a171a94(uVar12,uVar4);
  uVar3 = FUN_4a171a94(uVar4,uVar3);
  uVar3 = FUN_4a171a94(uVar3,*(undefined4 *)(iVar2 + 0x34));
  *(undefined4 *)(iVar2 + 0x34) = uVar3;
  return;
}



// Address: 4a0f590c

undefined4 FUN_4a0f590c(int param_1,short param_2)

{
  undefined4 uVar1;
  undefined1 auStack_1c [20];
  
  uVar1 = FUN_4a16c074(auStack_1c,param_1 + 0x49c);
  uVar1 = FUN_4a16ff5c((int)param_2,uVar1,0);
  FUN_4a16c1a0(auStack_1c);
  return uVar1;
}



// Address: 4a0f5958

int FUN_4a0f5958(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar4 = 0;
  FUN_4a0642fc();
  iVar1 = FUN_4a134d88();
  iVar3 = 0;
  uVar5 = iVar1 + *(int *)(param_1 + 0x50);
  if ((int)uVar5 < 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = uVar5 & 1;
  }
  if (uVar6 != 0) {
    do {
      iVar1 = *(int *)(param_1 + 0x50);
      if (iVar3 < iVar1) {
        if (*(int *)(param_1 + 0x54) == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(*(int *)(param_1 + 0x54) + 8);
        }
        iVar1 = iVar1 + iVar3 * 100;
      }
      else {
        uVar2 = FUN_4a0642fc();
        iVar1 = FUN_4a134d90(uVar2,iVar3 - iVar1);
      }
      if (*(char *)(iVar1 + 8) == ' ') {
        iVar1 = *(int *)(param_1 + 0x50);
        if (iVar3 < iVar1) {
          if (*(int *)(param_1 + 0x54) == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = *(int *)(*(int *)(param_1 + 0x54) + 8);
          }
          iVar1 = iVar1 + iVar3 * 100;
        }
        else {
          uVar2 = FUN_4a0642fc();
          iVar1 = FUN_4a134d90(uVar2,iVar3 - iVar1);
        }
        if (*(char *)(iVar1 + 0x1f) == param_2) {
          iVar4 = iVar4 + 1;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar6);
  }
  for (; (int)uVar6 < (int)uVar5; uVar6 = uVar6 + 2) {
    iVar1 = *(int *)(param_1 + 0x50);
    if ((int)uVar6 < iVar1) {
      if (*(int *)(param_1 + 0x54) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0x54) + 8);
      }
      iVar1 = iVar1 + uVar6 * 100;
    }
    else {
      uVar2 = FUN_4a0642fc();
      iVar1 = FUN_4a134d90(uVar2,uVar6 - iVar1);
    }
    if (*(char *)(iVar1 + 8) == ' ') {
      iVar1 = *(int *)(param_1 + 0x50);
      if ((int)uVar6 < iVar1) {
        if (*(int *)(param_1 + 0x54) == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(*(int *)(param_1 + 0x54) + 8);
        }
        iVar1 = iVar1 + uVar6 * 100;
      }
      else {
        uVar2 = FUN_4a0642fc();
        iVar1 = FUN_4a134d90(uVar2,uVar6 - iVar1);
      }
      if (*(char *)(iVar1 + 0x1f) == param_2) {
        iVar4 = iVar4 + 1;
      }
    }
    iVar3 = *(int *)(param_1 + 0x50);
    iVar1 = uVar6 + 1;
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
    if (*(char *)(iVar3 + 8) == ' ') {
      iVar3 = *(int *)(param_1 + 0x50);
      iVar1 = uVar6 + 1;
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
      if (*(char *)(iVar3 + 0x1f) == param_2) {
        iVar4 = iVar4 + 1;
      }
    }
  }
  return iVar4;
}



// Address: 4a0f5b78

void FUN_4a0f5b78(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined1 auStack_50 [8];
  undefined4 local_48;
  undefined1 auStack_3c [8];
  undefined4 local_34;
  undefined1 auStack_28 [20];
  
  uVar2 = FUN_4a0bf920(param_2);
  *(undefined1 *)(param_1 + 0x31c) = uVar2;
  iVar5 = 0;
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x350)) {
    do {
      uVar3 = FUN_4a0bfbdc(param_2);
      if (*(int *)(param_1 + 0x354) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(param_1 + 0x354) + 8);
      }
      *(undefined2 *)(iVar4 + iVar5 * 2) = uVar3;
      uVar2 = FUN_4a0bf920(param_2);
      if (*(int *)(param_1 + 0x32c) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(param_1 + 0x32c) + 8);
      }
      *(undefined1 *)(iVar4 + iVar5) = uVar2;
      uVar2 = FUN_4a0bf920(param_2);
      if (*(int *)(param_1 + 0x340) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(param_1 + 0x340) + 8);
      }
      *(undefined1 *)(iVar4 + iVar5) = uVar2;
      uVar2 = FUN_4a0bf920(param_2);
      if (*(int *)(param_1 + 0x368) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(param_1 + 0x368) + 8);
      }
      *(undefined1 *)(iVar4 + iVar5) = uVar2;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x350));
  }
  cVar1 = PTR_DAT_4a0f5d78[*(char *)(param_1 + 0x31c)];
  if (*(int *)(param_1 + 0x220) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(param_1 + 0x220) + 8);
  }
  FUN_4a16b5a0(auStack_3c,iVar5 + cVar1 * 0x14);
  if (*(int *)(param_1 + 0x20c) != 0) {
    iVar6 = *(int *)(*(int *)(param_1 + 0x20c) + 8);
  }
  FUN_4a16b5a0(auStack_50,iVar6 + cVar1 * 0x14);
  iVar5 = FUN_4a16b5f8(auStack_28,local_34);
  uVar8 = *(undefined4 *)(iVar5 + 8);
  piVar7 = *(int **)(iVar5 + 0xc);
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0xc))(piVar7);
  }
  (**(code **)(*(int *)(param_1 + 0x370) + 0x1c))((int *)(param_1 + 0x370));
  *(undefined4 *)(param_1 + 0x378) = uVar8;
  *(int **)(param_1 + 0x37c) = piVar7;
  FUN_4a16b6c0(auStack_28);
  iVar5 = FUN_4a16b5f8(auStack_28,local_48);
  uVar8 = *(undefined4 *)(iVar5 + 8);
  piVar7 = *(int **)(iVar5 + 0xc);
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0xc))(piVar7);
  }
  (**(code **)(*(int *)(param_1 + 900) + 0x1c))((int *)(param_1 + 900));
  *(undefined4 *)(param_1 + 0x38c) = uVar8;
  *(int **)(param_1 + 0x390) = piVar7;
  FUN_4a16b6c0(auStack_28);
  FUN_4a16c410(auStack_3c,0,param_1 + 0x370,0,local_34);
  FUN_4a16c410(auStack_50,0,param_1 + 900,0,local_48);
  FUN_4a16b6c0(auStack_50);
  FUN_4a16b6c0(auStack_3c);
  return;
}



// Address: 4a0f5d7c

undefined4
FUN_4a0f5d7c(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined1 uVar16;
  bool bVar17;
  int local_104;
  int local_100;
  undefined1 auStack_fc [12];
  int local_f0;
  undefined1 auStack_e8 [12];
  int local_dc;
  undefined1 auStack_d4 [8];
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 auStack_84 [12];
  int local_78;
  undefined1 auStack_70 [12];
  int local_64;
  undefined1 auStack_5c [12];
  int local_50;
  undefined1 auStack_48 [12];
  int local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_4a16b934(auStack_48,4);
  iVar13 = 0;
  FUN_4a16b934(auStack_5c,4);
  FUN_4a16b934(auStack_70,4);
  FUN_4a16b934(auStack_84,4);
  if (*(int *)(param_3 + 0xc) == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(*(int *)(param_3 + 0xc) + 8);
  }
  uVar3 = FUN_4a171fac(*puVar2);
  uVar3 = FUN_4a17295c(uVar3,0xfffffff0);
  if (local_64 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(local_64 + 8);
  }
  *puVar2 = uVar3;
  if (*(int *)(param_3 + 0xc) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_3 + 0xc) + 8);
  }
  uVar3 = FUN_4a171fac(*(undefined4 *)(iVar4 + 4));
  uVar3 = FUN_4a17295c(uVar3,0xfffffff0);
  if (local_64 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_64 + 8);
  }
  *(undefined4 *)(iVar4 + 4) = uVar3;
  if (*(int *)(param_3 + 0xc) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_3 + 0xc) + 8);
  }
  uVar3 = FUN_4a171fac(*(undefined4 *)(iVar4 + 8));
  uVar3 = FUN_4a17295c(uVar3,0xfffffff0);
  if (local_64 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_64 + 8);
  }
  *(undefined4 *)(iVar4 + 8) = uVar3;
  if (local_64 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_64 + 8);
  }
  *(undefined4 *)(iVar4 + 0xc) = 0x3f800000;
  if (*(int *)(param_4 + 0xc) == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(*(int *)(param_4 + 0xc) + 8);
  }
  uVar3 = FUN_4a171fac(*puVar2);
  uVar3 = FUN_4a17295c(uVar3,0xfffffff0);
  if (local_78 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(local_78 + 8);
  }
  *puVar2 = uVar3;
  if (*(int *)(param_4 + 0xc) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_4 + 0xc) + 8);
  }
  uVar3 = FUN_4a171fac(*(undefined4 *)(iVar4 + 4));
  uVar3 = FUN_4a17295c(uVar3,0xfffffff0);
  if (local_78 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_78 + 8);
  }
  *(undefined4 *)(iVar4 + 4) = uVar3;
  if (*(int *)(param_4 + 0xc) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_4 + 0xc) + 8);
  }
  uVar3 = FUN_4a171fac(*(undefined4 *)(iVar4 + 8));
  uVar3 = FUN_4a17295c(uVar3,0xfffffff0);
  if (local_78 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_78 + 8);
  }
  *(undefined4 *)(iVar4 + 8) = uVar3;
  if (local_78 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_78 + 8);
  }
  *(undefined4 *)(iVar4 + 0xc) = 0x3f800000;
  if (local_3c == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(local_3c + 8);
  }
  *puVar2 = 0;
  if (local_3c == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_3c + 8);
  }
  *(undefined4 *)(iVar4 + 4) = 0;
  if (local_3c == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_3c + 8);
  }
  *(undefined4 *)(iVar4 + 8) = 0;
  if (local_3c == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_3c + 8);
  }
  *(undefined4 *)(iVar4 + 0xc) = 0x3f800000;
  FUN_4a13c870(*(undefined4 *)(param_1 + 0x468),auStack_48);
  puVar1 = PTR_DAT_4a0f66f0;
  uVar3 = *(undefined4 *)PTR_DAT_4a0f66f0;
  local_100 = FUN_4a0bc200(uVar3);
  local_104 = FUN_4a0bc1f8(uVar3);
  if (local_100 < local_104) {
    piVar5 = &local_104;
  }
  else {
    piVar5 = &local_100;
  }
  uVar3 = FUN_4a171fac(*piVar5);
  uVar15 = *(undefined4 *)puVar1;
  local_100 = FUN_4a0bc200(uVar15);
  local_104 = FUN_4a0bc1f8(uVar15);
  if (local_104 < local_100) {
    piVar5 = &local_104;
  }
  else {
    piVar5 = &local_100;
  }
  uVar15 = FUN_4a171fac(*piVar5);
  local_28 = FUN_4a171bb8(0x40000000,uVar3);
  local_2c = FUN_4a17295c(uVar3,0xffffffff);
  uVar6 = FUN_4a171fac(param_5);
  uVar6 = FUN_4a1725c0(uVar6,local_2c);
  uVar6 = FUN_4a17211c(uVar6,local_28);
  local_30 = FUN_4a171bb8(0x40000000,uVar15);
  local_34 = FUN_4a17295c(uVar15,0xffffffff);
  uVar7 = FUN_4a171fac(param_6);
  uVar7 = FUN_4a1725c0(uVar7,local_34);
  uVar7 = FUN_4a17211c(uVar7,local_30);
  uVar3 = FUN_4a171bb8(uVar3,uVar15);
  uVar15 = *(undefined4 *)PTR_DAT_4a0f66f4;
  uVar3 = FUN_4a17211c(uVar15,uVar3);
  uVar3 = FUN_4a17211c(uVar3,uVar6);
  uVar3 = FUN_4a17295c(uVar3,0xffffffff);
  uVar15 = FUN_4a17211c(uVar15,uVar7);
  local_88 = FUN_4a17295c(uVar15,0xffffffff);
  local_8c = *(undefined4 *)(param_1 + 0x488);
  uVar14 = *(uint *)(param_1 + 0x484);
  FUN_4a0b8a1c(auStack_d4);
  puVar1 = PTR_DAT_4a0f66f8;
  local_cc = *(undefined4 *)PTR_DAT_4a0f66f8;
  uStack_c8 = *(undefined4 *)(PTR_DAT_4a0f66f8 + 4);
  uStack_c4 = *(undefined4 *)(PTR_DAT_4a0f66f8 + 8);
  uStack_c0 = *(undefined4 *)(PTR_DAT_4a0f66f8 + 0xc);
  uStack_bc = *(undefined4 *)(PTR_DAT_4a0f66f8 + 0x10);
  uStack_b8 = *(undefined4 *)(PTR_DAT_4a0f66f8 + 0x14);
  local_b4 = *(undefined4 *)(PTR_DAT_4a0f66f8 + 0x18);
  local_b0 = *(undefined4 *)(PTR_DAT_4a0f66f8 + 0x1c);
  uStack_ac = *(undefined4 *)(PTR_DAT_4a0f66f8 + 0x20);
  uStack_a8 = *(undefined4 *)(PTR_DAT_4a0f66f8 + 0x24);
  uStack_a4 = *(undefined4 *)(PTR_DAT_4a0f66f8 + 0x28);
  uStack_a0 = *(undefined4 *)(PTR_DAT_4a0f66f8 + 0x2c);
  local_9c = *(undefined4 *)(PTR_DAT_4a0f66f8 + 0x30);
  uStack_98 = *(undefined4 *)(PTR_DAT_4a0f66f8 + 0x34);
  puVar2 = (undefined4 *)(PTR_DAT_4a0f66f8 + 0x38);
  local_94 = *puVar2;
  uStack_90 = *(undefined4 *)(PTR_DAT_4a0f66f8 + 0x3c);
  FUN_4a0b7cb0(auStack_d4,local_8c,0,0x3f800000,0);
  FUN_4a0b7cb0(auStack_d4,uVar14 ^ 0x80000000,0x3f800000,0,0);
  FUN_4a16b934(auStack_e8,4);
  if (local_dc == 0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8 = *(undefined4 **)(local_dc + 8);
  }
  *puVar8 = 0;
  if (local_dc == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_dc + 8);
  }
  *(undefined4 *)(iVar4 + 4) = 0x3f800000;
  if (local_dc == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_dc + 8);
  }
  *(undefined4 *)(iVar4 + 8) = 0;
  if (local_dc == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_dc + 8);
  }
  *(undefined4 *)(iVar4 + 0xc) = 0x3f800000;
  FUN_4a13c870(auStack_d4,auStack_e8);
  FUN_4a16b934(auStack_fc,4);
  if (local_f0 == 0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8 = *(undefined4 **)(local_f0 + 8);
  }
  *puVar8 = 0xbf800000;
  if (local_f0 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_f0 + 8);
  }
  *(undefined4 *)(iVar4 + 4) = 0;
  if (local_f0 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_f0 + 8);
  }
  *(undefined4 *)(iVar4 + 8) = 0;
  if (local_f0 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_f0 + 8);
  }
  *(undefined4 *)(iVar4 + 0xc) = 0x3f800000;
  FUN_4a13c870(auStack_d4,auStack_fc);
  local_cc = *(undefined4 *)puVar1;
  uStack_c8 = *(undefined4 *)(puVar1 + 4);
  uStack_c4 = *(undefined4 *)(puVar1 + 8);
  uStack_c0 = *(undefined4 *)(puVar1 + 0xc);
  uStack_bc = *(undefined4 *)(puVar1 + 0x10);
  uStack_b8 = *(undefined4 *)(puVar1 + 0x14);
  local_b4 = *(undefined4 *)(puVar1 + 0x18);
  local_b0 = *(undefined4 *)(puVar1 + 0x1c);
  uStack_ac = *(undefined4 *)(puVar1 + 0x20);
  uStack_a8 = *(undefined4 *)(puVar1 + 0x24);
  uStack_a4 = *(undefined4 *)(puVar1 + 0x28);
  uStack_a0 = *(undefined4 *)(puVar1 + 0x2c);
  local_9c = *(undefined4 *)(puVar1 + 0x30);
  uStack_98 = *(undefined4 *)(puVar1 + 0x34);
  local_94 = *puVar2;
  uStack_90 = *(undefined4 *)(puVar1 + 0x3c);
  bVar17 = local_dc != 0;
  if (bVar17) {
    iVar4 = *(int *)(local_dc + 8);
  }
  else {
    iVar4 = 0;
  }
  uVar15 = *(undefined4 *)(iVar4 + 8);
  if (bVar17) {
    iVar4 = *(int *)(local_dc + 8);
  }
  else {
    iVar4 = 0;
  }
  local_100 = *(int *)(iVar4 + 4);
  if (bVar17) {
    puVar2 = *(undefined4 **)(local_dc + 8);
  }
  else {
    puVar2 = (undefined4 *)0x0;
  }
  uVar6 = *puVar2;
  uVar3 = FUN_4a17211c(uVar3,DAT_4a0f66fc);
  FUN_4a0b7cb0(auStack_d4,uVar3,uVar6,local_100,uVar15);
  bVar17 = local_f0 != 0;
  if (bVar17) {
    iVar4 = *(int *)(local_f0 + 8);
  }
  else {
    iVar4 = 0;
  }
  uVar3 = *(undefined4 *)(iVar4 + 8);
  if (bVar17) {
    iVar4 = *(int *)(local_f0 + 8);
  }
  else {
    iVar4 = 0;
  }
  uVar15 = *(undefined4 *)(iVar4 + 4);
  if (bVar17) {
    puVar2 = *(undefined4 **)(local_f0 + 8);
  }
  else {
    puVar2 = (undefined4 *)0x0;
  }
  uVar7 = *puVar2;
  uVar6 = FUN_4a17211c(local_88,DAT_4a0f6700);
  FUN_4a0b7cb0(auStack_d4,uVar6,uVar7,uVar15,uVar3);
  FUN_4a0b7cb0(auStack_d4,local_8c,0,0x3f800000,0);
  FUN_4a0b7cb0(auStack_d4,uVar14 ^ 0x80000000,0x3f800000,0,0);
  if (local_50 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(local_50 + 8);
  }
  *puVar2 = 0;
  if (local_50 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_50 + 8);
  }
  *(undefined4 *)(iVar4 + 4) = 0;
  if (local_50 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_50 + 8);
  }
  *(undefined4 *)(iVar4 + 8) = 0xbf800000;
  if (local_50 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_50 + 8);
  }
  *(undefined4 *)(iVar4 + 0xc) = 0x3f800000;
  FUN_4a13c870(auStack_d4,auStack_5c);
  FUN_4a16ba04(auStack_fc);
  FUN_4a16ba04(auStack_e8);
  FUN_4a0c6bf4(auStack_d4);
  if (local_3c == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(local_3c + 8);
  }
  if (local_64 == 0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8 = *(undefined4 **)(local_64 + 8);
  }
  uVar3 = FUN_4a1725c0(*puVar8,*puVar2);
  if (local_3c == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_3c + 8);
  }
  if (local_64 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(local_64 + 8);
  }
  uVar15 = FUN_4a1725c0(*(undefined4 *)(iVar9 + 4),*(undefined4 *)(iVar4 + 4));
  if (local_3c == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_3c + 8);
  }
  if (local_64 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(local_64 + 8);
  }
  uVar6 = FUN_4a1725c0(*(undefined4 *)(iVar9 + 8),*(undefined4 *)(iVar4 + 8));
  if (local_50 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_50 + 8);
  }
  if (local_78 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(local_78 + 8);
  }
  uVar7 = FUN_4a17211c(*(undefined4 *)(iVar9 + 8),*(undefined4 *)(iVar4 + 8));
  if (local_50 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_50 + 8);
  }
  if (local_78 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(local_78 + 8);
  }
  uVar10 = FUN_4a17211c(*(undefined4 *)(iVar9 + 4),*(undefined4 *)(iVar4 + 4));
  if (local_50 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(local_50 + 8);
  }
  uVar16 = 1;
  if (local_78 == 0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8 = *(undefined4 **)(local_78 + 8);
  }
  uVar11 = FUN_4a17211c(*puVar8,*puVar2);
  uVar10 = FUN_4a171a94(uVar11,uVar10);
  uVar12 = FUN_4a171a94(uVar10,uVar7);
  FUN_4a1720a0(uVar12 ^ 0x80000000,uVar12);
  uVar14 = uVar12;
  if ((bool)uVar16) {
    uVar14 = uVar12 ^ 0x80000000;
  }
  if ((int)uVar14 < DAT_4a0f6704) {
    FUN_4a16ba04(auStack_84);
    FUN_4a16ba04(auStack_70);
    FUN_4a16ba04(auStack_5c);
    FUN_4a16ba04(auStack_48);
    return 0;
  }
  if (local_78 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_78 + 8);
  }
  uVar6 = FUN_4a17211c(*(undefined4 *)(iVar4 + 8),uVar6);
  if (local_78 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_78 + 8);
  }
  uVar15 = FUN_4a17211c(*(undefined4 *)(iVar4 + 4),uVar15);
  if (local_78 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(local_78 + 8);
  }
  uVar3 = FUN_4a17211c(*puVar2,uVar3);
  uVar3 = FUN_4a171a94(uVar3,uVar15);
  uVar3 = FUN_4a171a94(uVar3,uVar6);
  uVar3 = FUN_4a171bb8(uVar3,uVar12);
  if (local_3c == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(local_3c + 8);
  }
  uVar15 = *puVar2;
  if (local_50 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(local_50 + 8);
  }
  uVar6 = FUN_4a17211c(*puVar2,uVar3);
  uVar15 = FUN_4a171a94(uVar6,uVar15);
  if (local_3c == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_3c + 8);
  }
  uVar6 = *(undefined4 *)(iVar4 + 4);
  if (local_50 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_50 + 8);
  }
  uVar7 = FUN_4a17211c(*(undefined4 *)(iVar4 + 4),uVar3);
  uVar6 = FUN_4a171a94(uVar7,uVar6);
  if (local_3c == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_3c + 8);
  }
  uVar7 = *(undefined4 *)(iVar4 + 8);
  if (local_50 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(local_50 + 8);
  }
  uVar10 = FUN_4a17211c(*(undefined4 *)(iVar4 + 8),uVar3);
  uVar7 = FUN_4a171a94(uVar10,uVar7);
  FUN_4a17295c(uVar15,0x10);
  uVar15 = FUN_4a171e1c();
  if (*(int *)(param_2 + 0xc) == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(*(int *)(param_2 + 0xc) + 8);
  }
  *puVar2 = uVar15;
  FUN_4a17295c(uVar6,0x10);
  uVar15 = FUN_4a171e1c();
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_2 + 0xc) + 8);
  }
  *(undefined4 *)(iVar4 + 4) = uVar15;
  FUN_4a17295c(uVar7,0x10);
  uVar15 = FUN_4a171e1c();
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_2 + 0xc) + 8);
  }
  *(undefined4 *)(iVar4 + 8) = uVar15;
  FUN_4a17295c(uVar3,0x10);
  uVar3 = FUN_4a171e1c();
  if (*(int *)(param_2 + 0xc) != 0) {
    iVar13 = *(int *)(*(int *)(param_2 + 0xc) + 8);
  }
  *(undefined4 *)(iVar13 + 0xc) = uVar3;
  FUN_4a16ba04(auStack_84);
  FUN_4a16ba04(auStack_70);
  FUN_4a16ba04(auStack_5c);
  FUN_4a16ba04(auStack_48);
  return 1;
}



// Address: 4a0f6708

int FUN_4a0f6708(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 uVar19;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_4a0fba7c(*(undefined4 *)(param_1 + 0x1c));
  iVar3 = FUN_4a146ea4();
  FUN_4a0fba7c(*(undefined4 *)(param_1 + 0x1c));
  iVar4 = FUN_4a146d64();
  if ((iVar4 == 0) || (iVar4 = FUN_4a145a38(*(undefined4 *)(param_1 + 0x1c)), iVar4 != 4)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  FUN_4a0fba7c(*(undefined4 *)(param_1 + 0x1c));
  iVar4 = FUN_4a146d64();
  if ((iVar4 == 0) || (iVar4 = FUN_4a145a38(*(undefined4 *)(param_1 + 0x1c)), iVar4 != 0xb7)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  uVar17 = 0x43c80000;
  if (bVar1) {
    uVar16 = 0x447a0000;
    uVar14 = 0x447c0000;
    uVar15 = 0x44610000;
    uVar12 = 0x44898000;
    if ((iVar3 == 0) &&
       (uVar16 = uVar17, uVar14 = 0x43960000, uVar15 = 0x43960000, uVar12 = uVar17, !bVar2)) {
      uVar16 = 0x43040000;
      uVar14 = 0x43480000;
      uVar15 = 0x42000000;
    }
    uVar19 = 1;
    uVar18 = *(undefined4 *)(param_1 + 0x470);
    uVar17 = FUN_4a171a94(uVar18,param_2);
    uVar5 = *(undefined4 *)(param_1 + 0x478);
    uVar6 = FUN_4a171a94(uVar5,param_3);
    uVar7 = *(undefined4 *)(param_1 + 0x47c);
    uVar8 = FUN_4a1725c0(uVar17,uVar7);
    uVar17 = *(undefined4 *)(param_1 + 0x480);
    uVar9 = FUN_4a1725c0(uVar6,uVar17);
    uVar10 = FUN_4a1725c0(uVar18,uVar7);
    uVar11 = FUN_4a1725c0(uVar5,uVar17);
    FUN_4a1720a0(uVar8 ^ 0x80000000,uVar8);
    uVar13 = uVar8;
    if ((bool)uVar19) {
      uVar13 = uVar8 ^ 0x80000000;
    }
    FUN_4a172458(uVar13,uVar14);
    local_2c = param_2;
    if (!(bool)uVar19) {
      FUN_4a1720a0(uVar10 ^ 0x80000000,uVar10);
      if ((bool)uVar19) {
        uVar10 = uVar10 ^ 0x80000000;
      }
      FUN_4a1720a0(uVar8 ^ 0x80000000,uVar8);
      uVar13 = uVar8;
      if ((bool)uVar19) {
        uVar13 = uVar8 ^ 0x80000000;
      }
      FUN_4a172458(uVar13,uVar10);
      if (!(bool)uVar19) {
        FUN_4a1720a0(uVar8 ^ 0x80000000,uVar8);
        if ((bool)uVar19) {
          uVar8 = uVar8 ^ 0x80000000;
        }
        uVar17 = FUN_4a1725c0(uVar8,uVar14);
        uVar12 = FUN_4a1725c0(uVar12,uVar14);
        uVar17 = FUN_4a171bb8(uVar17,uVar12);
        FUN_4a1720a0(0x3f800000,uVar17);
        if (!(bool)uVar19) {
          uVar17 = 0x3f800000;
        }
        FUN_4a172458(0,uVar17);
        if (!(bool)uVar19) {
          uVar17 = 0;
        }
        uVar17 = FUN_4a1725c0(0x3f800000,uVar17);
        local_2c = FUN_4a17211c(uVar17,param_2);
      }
    }
    FUN_4a1720a0(uVar9 ^ 0x80000000,uVar9);
    uVar13 = uVar9;
    if ((bool)uVar19) {
      uVar13 = uVar9 ^ 0x80000000;
    }
    FUN_4a172458(uVar13,uVar15);
    local_28 = param_3;
    if (!(bool)uVar19) {
      FUN_4a1720a0(uVar11 ^ 0x80000000,uVar11);
      if ((bool)uVar19) {
        uVar11 = uVar11 ^ 0x80000000;
      }
      FUN_4a1720a0(uVar9 ^ 0x80000000,uVar9);
      uVar13 = uVar9;
      if ((bool)uVar19) {
        uVar13 = uVar9 ^ 0x80000000;
      }
      FUN_4a172458(uVar13,uVar11);
      if (!(bool)uVar19) {
        FUN_4a1720a0(uVar9 ^ 0x80000000,uVar9);
        if ((bool)uVar19) {
          uVar9 = uVar9 ^ 0x80000000;
        }
        uVar17 = FUN_4a1725c0(uVar9,uVar15);
        uVar12 = FUN_4a1725c0(uVar16,uVar15);
        uVar17 = FUN_4a171bb8(uVar17,uVar12);
        FUN_4a1720a0(0x3f800000,uVar17);
        if (!(bool)uVar19) {
          uVar17 = 0x3f800000;
        }
        FUN_4a172458(0,uVar17);
        if (!(bool)uVar19) {
          uVar17 = 0;
        }
        uVar17 = FUN_4a1725c0(0x3f800000,uVar17);
        local_28 = FUN_4a17211c(uVar17,param_3);
      }
    }
    *(undefined4 *)(param_1 + 0x494) = local_2c;
    *(undefined4 *)(param_1 + 0x498) = local_28;
    return param_1 + 0x494;
  }
  uVar12 = 0x447a0000;
  uVar16 = 0x44af0000;
  if ((iVar3 == 0) && (uVar12 = uVar17, uVar16 = 0x440e8000, bVar2)) {
    uVar12 = 0x44160000;
    uVar16 = 0x44480000;
  }
  uVar19 = 1;
  uVar7 = *(undefined4 *)(param_1 + 0x480);
  uVar6 = *(undefined4 *)(param_1 + 0x47c);
  uVar17 = FUN_4a171a94(*(undefined4 *)(param_1 + 0x470),param_2);
  uVar17 = FUN_4a1725c0(uVar17,uVar6);
  uVar14 = FUN_4a171a94(*(undefined4 *)(param_1 + 0x478),param_3);
  uVar14 = FUN_4a1725c0(uVar14,uVar7);
  uVar15 = FUN_4a17211c(uVar14,uVar14);
  uVar5 = FUN_4a17211c(uVar17,uVar17);
  FUN_4a171a94(uVar5,uVar15);
  uVar15 = FUN_4a002b60();
  uVar17 = FUN_4a171bb8(uVar17,uVar15);
  uVar14 = FUN_4a171bb8(uVar14,uVar15);
  uVar15 = FUN_4a17211c(uVar14,param_3);
  uVar5 = FUN_4a17211c(uVar17,param_2);
  uVar15 = FUN_4a171a94(uVar5,uVar15);
  uVar17 = FUN_4a17211c(uVar17,uVar15);
  local_48 = FUN_4a17211c(uVar14,uVar15);
  local_4c = FUN_4a1725c0(param_2,uVar17);
  uVar14 = FUN_4a1725c0(param_3,local_48);
  uVar15 = FUN_4a1725c0(*(undefined4 *)(param_1 + 0x470),uVar6);
  uVar5 = FUN_4a1725c0(*(undefined4 *)(param_1 + 0x478),uVar7);
  uVar6 = FUN_4a171a94(uVar17,uVar15);
  uVar6 = FUN_4a17211c(uVar6,uVar6);
  uVar7 = FUN_4a171a94(local_48,uVar5);
  uVar7 = FUN_4a17211c(uVar7,uVar7);
  FUN_4a171a94(uVar7,uVar6);
  uVar6 = FUN_4a002b60();
  uVar7 = FUN_4a171a94(local_4c,uVar15);
  uVar7 = FUN_4a17211c(uVar7,uVar7);
  uVar18 = FUN_4a171a94(uVar14,uVar5);
  uVar18 = FUN_4a17211c(uVar18,uVar18);
  FUN_4a171a94(uVar18,uVar7);
  uVar7 = FUN_4a002b60();
  uVar5 = FUN_4a17211c(uVar5,uVar5);
  uVar15 = FUN_4a17211c(uVar15,uVar15);
  FUN_4a171a94(uVar15,uVar5);
  uVar15 = FUN_4a002b60();
  iVar3 = FUN_4a1725c0(uVar16,uVar12);
  FUN_4a172458(uVar6,uVar12);
  if (!(bool)uVar19) {
    uVar16 = FUN_4a1725c0(uVar6,uVar12);
    uVar19 = 1;
    if (iVar3 < 1) {
      uVar16 = 0;
    }
    else {
      uVar16 = FUN_4a171bb8(uVar16,iVar3);
      uVar16 = FUN_4a1724e0(uVar16,0x3f800000);
    }
    FUN_4a172458(uVar16,0);
    if ((bool)uVar19) {
      uVar16 = 0;
    }
    FUN_4a1720a0(uVar16,0x3f800000);
    if ((bool)uVar19) {
      uVar16 = 0x3f800000;
    }
    FUN_4a172458(uVar6,uVar15);
    if (!(bool)uVar19) {
      uVar17 = FUN_4a17211c(uVar17,uVar16);
      local_48 = FUN_4a17211c(local_48,uVar16);
    }
  }
  FUN_4a172458(uVar7,uVar12);
  if (!(bool)uVar19) {
    uVar12 = FUN_4a1725c0(uVar7,uVar12);
    uVar19 = 1;
    if (iVar3 < 1) {
      uVar12 = 0;
    }
    else {
      uVar12 = FUN_4a171bb8(uVar12,iVar3);
      uVar12 = FUN_4a1724e0(uVar12,0x3f800000);
    }
    FUN_4a172458(uVar12,0);
    if ((bool)uVar19) {
      uVar12 = 0;
    }
    FUN_4a1720a0(uVar12,0x3f800000);
    if ((bool)uVar19) {
      uVar12 = 0x3f800000;
    }
    local_4c = FUN_4a17211c(local_4c,uVar12);
    uVar14 = FUN_4a17211c(uVar14,uVar12);
  }
  uVar17 = FUN_4a171a94(uVar17,local_4c);
  *(undefined4 *)(param_1 + 0x494) = uVar17;
  uVar17 = FUN_4a171a94(local_48,uVar14);
  *(undefined4 *)(param_1 + 0x498) = uVar17;
  return param_1 + 0x494;
}



// Address: 4a0f6d2c

void FUN_4a0f6d2c(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined *local_44 [2];
  int local_3c;
  undefined *local_30 [2];
  int local_28;
  
  piVar5 = *(int **)(param_1 + 0x410);
  if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  *(undefined4 *)(param_1 + 0x410) = 0;
  piVar5 = *(int **)(param_1 + 0x414);
  if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  *(undefined4 *)(param_1 + 0x414) = 0;
  piVar5 = *(int **)(param_1 + 0x40c);
  if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  *(undefined4 *)(param_1 + 0x40c) = 0;
  piVar5 = *(int **)(param_1 + 0x418);
  if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  *(undefined4 *)(param_1 + 0x418) = 0;
  *(undefined4 *)(param_1 + 0x41c) = 0;
  FUN_4a06f8f0(param_1 + 0x420,0);
  puVar3 = (undefined4 *)FUN_4a0c6bc0(local_30);
  puVar1 = PTR_PTR_4a0f7050;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = puVar1;
  (**(code **)(*(int *)(param_1 + 0x3f8) + 0x1c))((int *)(param_1 + 0x3f8));
  *(undefined4 *)(param_1 + 0x400) = 0;
  *(undefined4 *)(param_1 + 0x404) = 0;
  local_30[0] = puVar1;
  iVar2 = FUN_4a0bcc84(local_30);
  if (iVar2 != 0) {
    iVar4 = 0;
    if (0 < local_28) {
      do {
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_28);
      if (iVar2 == 0) goto LAB_4a0f6ecc;
    }
    FUN_4a14f21c();
  }
LAB_4a0f6ecc:
  FUN_4a0c6bf4(local_30);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x3d4)) {
    do {
      if (*(int *)(param_1 + 0x3d8) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(param_1 + 0x3d8) + 8);
      }
      piVar5 = *(int **)(iVar4 + iVar2 * 4);
      if ((piVar5 != (int *)0x0) && (iVar4 = (**(code **)(*piVar5 + 8))(piVar5), iVar4 != 0)) {
        (**(code **)(*piVar5 + 4))(piVar5);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x3d4));
  }
  iVar2 = FUN_4a169ca8(local_44,0);
  uVar6 = *(undefined4 *)(iVar2 + 8);
  piVar5 = *(int **)(iVar2 + 0xc);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))(piVar5);
  }
  (**(code **)(*(int *)(param_1 + 0x3cc) + 0x1c))((int *)(param_1 + 0x3cc));
  *(undefined4 *)(param_1 + 0x3d4) = uVar6;
  *(int **)(param_1 + 0x3d8) = piVar5;
  local_44[0] = PTR_PTR_4a0f7054;
  iVar2 = FUN_4a0bcc84(local_44);
  if (iVar2 != 0) {
    iVar4 = 0;
    if (0 < local_3c) {
      do {
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_3c);
      if (iVar2 == 0) goto LAB_4a0f6fd4;
    }
    FUN_4a14f21c();
  }
LAB_4a0f6fd4:
  FUN_4a0c6bf4(local_44);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x3f0)) {
    do {
      piVar5 = *(int **)(*(int *)(param_1 + 0x3f4) + iVar2 * 4);
      *(undefined4 *)(*(int *)(param_1 + 0x3f4) + iVar2 * 4) = 0;
      if ((piVar5 != (int *)0x0) && (iVar4 = (**(code **)(*piVar5 + 8))(piVar5), iVar4 != 0)) {
        (**(code **)(*piVar5 + 4))(piVar5);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x3f0));
  }
  *(undefined4 *)(param_1 + 0x3f0) = 0;
  return;
}



// Address: 4a0f7058

int FUN_4a0f7058(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  bVar2 = -1 < param_2;
  bVar3 = param_2 == 0;
  if (bVar2) {
    param_3 = *(int *)(param_1 + 0x3d4);
    bVar3 = param_3 == param_2;
  }
  if (bVar3 || (!bVar2 || param_3 < param_2)) {
    param_1 = 0;
  }
  if (!bVar3 && (bVar2 && param_2 <= param_3)) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x3d8) != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x3d8) + 8);
    }
    return *(int *)(iVar1 + param_2 * 4);
  }
  return param_1;
}



// Address: 4a0f7080

void FUN_4a0f7080(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 undefined4 param_7)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int local_5c;
  undefined1 auStack_54 [8];
  undefined4 local_4c;
  int *local_48;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  local_34 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  iStack_28 = param_4;
  FUN_4a0fb644();
  FUN_4a0f9674(param_2);
  *(int *)(param_2 + 0x4f4) = param_5 >> 0x15;
  *(int *)(param_2 + 0x4f8) = param_6 >> 0x15;
  *(int *)(param_2 + 0x4f0) = param_4 >> 0x15;
  *(int *)(param_2 + 0x4ec) = param_3 >> 0x15;
  *(undefined4 *)(param_2 + 0x5b0) = param_7;
  uVar3 = FUN_4a142f2c(param_2);
  if (((((~uVar3 & 0xf00) != 0) && ((uVar3 & 0x1000) == 0)) &&
      (uVar3 = FUN_4a142f2c(param_2,*(undefined4 *)(param_2 + 0x4f4),
                            *(undefined4 *)(param_2 + 0x4f8)), (~uVar3 & 0xf00) != 0)) &&
     ((uVar3 & 0x1000) == 0)) {
    iVar13 = *(int *)(param_2 + 0x4ec) + *(int *)(param_2 + 0x4f4) + -0x50 >> 1;
    *(int *)(param_2 + 0x514) = iVar13;
    iVar9 = *(int *)(param_2 + 0x4ec) - iVar13;
    iVar4 = *(int *)(param_2 + 0x4f0) + *(int *)(param_2 + 0x4f8) + -0x50 >> 1;
    iVar11 = *(int *)(param_2 + 0x4f0) - iVar4;
    *(int *)(param_2 + 0x518) = iVar4;
    if (-1 < iVar9 && -1 < iVar11) {
      if (iVar9 < 0x50) {
        iVar9 = iVar11;
      }
      if (iVar9 < 0x50) {
        iVar13 = *(int *)(param_2 + 0x4f4) - iVar13;
        iVar4 = *(int *)(param_2 + 0x4f8) - iVar4;
        if (-1 < iVar13 && -1 < iVar4) {
          if (iVar13 < 0x50) {
            iVar13 = iVar4;
          }
          if (iVar13 < 0x50) {
            FUN_4a0f27c4(param_2);
            local_40 = 0;
LAB_4a0f718c:
            iVar13 = -1;
            iVar4 = *(int *)PTR_DAT_4a0f75e0;
            iVar9 = 0;
            if (0 < *(int *)(param_2 + 0x530)) {
              do {
                iVar11 = *(int *)(param_2 + 0x528);
                if (iVar11 != 0) {
                  iVar10 = *(int *)(iVar11 + 8);
                  iVar5 = *(int *)(iVar11 + 8);
                }
                else {
                  iVar10 = 0;
                  iVar5 = 0;
                }
                if (iVar11 == 0) {
                  iVar5 = 0;
                }
                uVar15 = *(ushort *)(iVar10 + iVar9 * 2) & 0xff;
                uVar3 = (uint)(*(ushort *)(iVar5 + iVar9 * 2) >> 8);
                uVar18 = uVar15;
                if (uVar15 < 0x50) {
                  uVar18 = uVar3;
                }
                switchD_4a11cc8c::default
                          (uVar18 < 0x50,PTR_s_pathFindLowestF__open_tile_rx__r_4a0f75e4);
                if (*(int *)(param_2 + 0x56c) == 0) {
                  iVar11 = 0;
                }
                else {
                  iVar11 = *(int *)(*(int *)(param_2 + 0x56c) + 8);
                }
                iVar11 = *(int *)(iVar11 + uVar15 * 0x14 + 0xc);
                if (iVar11 == 0) {
                  iVar11 = 0;
                }
                else {
                  iVar11 = *(int *)(iVar11 + 8);
                }
                iVar11 = *(int *)(iVar11 + uVar3 * 4);
                if (iVar11 < iVar4) {
                  iVar4 = iVar11;
                  iVar13 = iVar9;
                }
                iVar9 = iVar9 + 1;
              } while (iVar9 < *(int *)(param_2 + 0x530));
            }
            if (iVar13 != -1) {
              iVar4 = *(int *)(param_2 + 0x528);
              if (iVar4 != 0) {
                iVar9 = *(int *)(iVar4 + 8);
              }
              else {
                iVar9 = 0;
              }
              if (iVar4 != 0) {
                iVar4 = *(int *)(iVar4 + 8);
              }
              else {
                iVar4 = 0;
              }
              uVar18 = *(ushort *)(iVar9 + iVar13 * 2) & 0xff;
              uVar2 = *(ushort *)(iVar4 + iVar13 * 2) >> 8;
              uVar3 = (uint)uVar2;
              local_5c = 0;
              local_38 = uVar18 * 5;
              local_3c = (int)(short)((ushort)uVar18 | uVar2 << 8);
LAB_4a0f72c4:
              uVar17 = *(uint *)(PTR_DAT_4a0f75f4 + local_5c * 0x10 + 8);
              uVar19 = *(uint *)(PTR_DAT_4a0f75f4 + local_5c * 0x10 + 0xc);
              uVar14 = uVar3 + *(int *)(PTR_DAT_4a0f75f4 + local_5c * 0x10 + 4);
              uVar16 = uVar18 + *(int *)(PTR_DAT_4a0f75f4 + local_5c * 0x10);
              uVar15 = FUN_4a142f2c(param_2,*(int *)(param_2 + 0x514) + uVar18,
                                    *(int *)(param_2 + 0x518) + uVar3);
              uVar6 = FUN_4a142f2c(param_2,*(int *)(param_2 + 0x514) + uVar16,
                                   *(int *)(param_2 + 0x518) + uVar14);
              if (((uVar15 & uVar17) == 0 && (uVar6 & uVar19) == 0) &&
                 (-1 < (int)uVar16 && -1 < (int)uVar14)) {
                uVar15 = uVar16;
                if ((int)uVar16 < 0x50) {
                  uVar15 = uVar14;
                }
                if (((0x4f < (int)uVar15) ||
                    (uVar15 = FUN_4a142f2c(param_2,*(int *)(param_2 + 0x514) + uVar16,
                                           *(int *)(param_2 + 0x518) + uVar14),
                    (~uVar15 & 0xf00) == 0)) || ((uVar15 & 0x1000) != 0)) goto LAB_4a0f7800;
                uVar6 = *(uint *)(param_2 + 0x548);
                uVar15 = uVar16 | uVar14 * 0x100;
                if ((int)uVar6 < 1) {
                  uVar17 = 0;
                }
                else {
                  uVar17 = uVar6 & 1;
                }
                iVar4 = 0;
                if (uVar17 != 0) {
                  do {
                    if (*(int *)(param_2 + 0x540) == 0) {
                      iVar9 = 0;
                    }
                    else {
                      iVar9 = *(int *)(*(int *)(param_2 + 0x540) + 8);
                    }
                    if ((int)*(short *)(iVar9 + iVar4 * 2) == uVar15) goto LAB_4a0f7800;
                    iVar4 = iVar4 + 1;
                  } while (iVar4 < (int)uVar17);
                }
                if ((int)uVar17 < (int)uVar6) {
                  iVar4 = *(int *)(param_2 + 0x540);
                  do {
                    if (iVar4 == 0) {
                      iVar9 = 0;
                    }
                    else {
                      iVar9 = *(int *)(iVar4 + 8);
                    }
                    if ((int)*(short *)(iVar9 + uVar17 * 2) == uVar15) goto LAB_4a0f7800;
                    if (iVar4 == 0) {
                      iVar9 = 0;
                    }
                    else {
                      iVar9 = *(int *)(iVar4 + 8);
                    }
                    if ((int)*(short *)(iVar9 + (uVar17 + 1) * 2) == uVar15) goto LAB_4a0f7800;
                    uVar17 = uVar17 + 2;
                  } while ((int)uVar17 < (int)uVar6);
                }
                uVar6 = *(uint *)(param_2 + 0x530);
                sVar1 = (short)uVar15;
                if ((int)uVar6 < 1) {
                  uVar15 = 0;
                }
                else {
                  uVar15 = uVar6 & 1;
                }
                iVar4 = 0;
                if (uVar15 != 0) {
                  do {
                    if (*(int *)(param_2 + 0x528) == 0) {
                      iVar9 = 0;
                    }
                    else {
                      iVar9 = *(int *)(*(int *)(param_2 + 0x528) + 8);
                    }
                    if (*(short *)(iVar9 + iVar4 * 2) == sVar1) goto LAB_4a0f7870;
                    iVar4 = iVar4 + 1;
                  } while (iVar4 < (int)uVar15);
                }
                if ((int)uVar15 < (int)uVar6) {
                  iVar4 = *(int *)(param_2 + 0x528);
                  do {
                    if (iVar4 == 0) {
                      iVar9 = 0;
                    }
                    else {
                      iVar9 = *(int *)(iVar4 + 8);
                    }
                    if (*(short *)(iVar9 + uVar15 * 2) == sVar1) goto LAB_4a0f7870;
                    if (iVar4 == 0) {
                      iVar9 = 0;
                    }
                    else {
                      iVar9 = *(int *)(iVar4 + 8);
                    }
                    if (*(short *)(iVar9 + (uVar15 + 1) * 2) == sVar1) goto LAB_4a0f7870;
                    uVar15 = uVar15 + 2;
                  } while ((int)uVar15 < (int)uVar6);
                }
                if (*(int *)(param_2 + 0x528) == 0) {
                  iVar4 = 0;
                }
                else {
                  iVar4 = *(int *)(*(int *)(param_2 + 0x528) + 8);
                }
                *(short *)(iVar4 + uVar6 * 2) = sVar1;
                *(int *)(param_2 + 0x530) = *(int *)(param_2 + 0x530) + 1;
                if ((int)uVar16 < 0 || (int)uVar14 < 0) {
LAB_4a0f74f4:
                  uVar7 = 0;
                }
                else {
                  uVar15 = uVar16;
                  if ((int)uVar16 < 0x50) {
                    uVar15 = uVar14;
                  }
                  if (0x4f < (int)uVar15) goto LAB_4a0f74f4;
                  uVar7 = 1;
                }
                switchD_4a11cc8c::default(uVar7,PTR_s_pathSetParent__rx__ry_off_pathfi_4a0f75f8);
                if (*(int *)(param_2 + 0x558) == 0) {
                  iVar4 = 0;
                }
                else {
                  iVar4 = *(int *)(*(int *)(param_2 + 0x558) + 8);
                }
                iVar4 = *(int *)(iVar4 + uVar16 * 0x14 + 0xc);
                if (iVar4 == 0) {
                  iVar4 = 0;
                }
                else {
                  iVar4 = *(int *)(iVar4 + 8);
                }
                *(short *)(iVar4 + uVar14 * 2) = (short)local_3c;
                if ((int)uVar16 < 0 || (int)uVar14 < 0) {
LAB_4a0f7550:
                  uVar7 = 0;
                }
                else {
                  uVar15 = uVar16;
                  if ((int)uVar16 < 0x50) {
                    uVar15 = uVar14;
                  }
                  if (0x4f < (int)uVar15) goto LAB_4a0f7550;
                  uVar7 = 1;
                }
                switchD_4a11cc8c::default(uVar7,PTR_s_pathCalculateGCost__rx__ry_off_p_4a0f75fc);
                iVar4 = *(int *)(param_2 + 0x558);
                if (iVar4 == 0) {
                  iVar9 = 0;
                }
                else {
                  iVar9 = *(int *)(iVar4 + 8);
                }
                iVar9 = *(int *)(iVar9 + uVar16 * 0x14 + 0xc);
                if (iVar9 == 0) {
                  iVar9 = 0;
                }
                else {
                  iVar9 = *(int *)(iVar9 + 8);
                }
                if (iVar4 == 0) {
                  iVar4 = 0;
                }
                else {
                  iVar4 = *(int *)(iVar4 + 8);
                }
                iVar4 = *(int *)(iVar4 + uVar16 * 0x14 + 0xc);
                if (iVar4 == 0) {
                  iVar4 = 0;
                }
                else {
                  iVar4 = *(int *)(iVar4 + 8);
                }
                uVar17 = *(ushort *)(iVar9 + uVar14 * 2) & 0xff;
                uVar15 = (uint)(*(ushort *)(iVar4 + uVar14 * 2) >> 8);
                uVar6 = uVar17;
                if (uVar17 < 0x50) {
                  uVar6 = uVar15;
                }
                switchD_4a11cc8c::default
                          (uVar6 < 0x50,PTR_s_pathCalculateGCost__parent_off_p_4a0f7600);
                if (*(int *)(param_2 + 0x580) == 0) {
                  iVar4 = 0;
                }
                else {
                  iVar4 = *(int *)(*(int *)(param_2 + 0x580) + 8);
                }
                iVar4 = *(int *)(iVar4 + uVar17 * 0x14 + 0xc);
                if (iVar4 == 0) {
                  iVar4 = 0;
                }
                else {
                  iVar4 = *(int *)(iVar4 + 8);
                }
                iVar9 = *(int *)(iVar4 + uVar15 * 4);
                iVar4 = FUN_4a143428(param_2,uVar16,uVar14,uVar17,uVar15);
                if (*(int *)(param_2 + 0x580) == 0) {
                  iVar11 = 0;
                }
                else {
                  iVar11 = *(int *)(*(int *)(param_2 + 0x580) + 8);
                }
                iVar11 = *(int *)(iVar11 + uVar16 * 0x14 + 0xc);
                if (iVar11 == 0) {
                  iVar11 = 0;
                }
                else {
                  iVar11 = *(int *)(iVar11 + 8);
                }
                *(int *)(iVar11 + uVar14 * 4) = iVar9 + iVar4;
                if ((int)uVar16 < 0 || (int)uVar14 < 0) {
LAB_4a0f76a0:
                  uVar7 = 0;
                }
                else {
                  uVar15 = uVar16;
                  if ((int)uVar16 < 0x50) {
                    uVar15 = uVar14;
                  }
                  if (0x4f < (int)uVar15) goto LAB_4a0f76a0;
                  uVar7 = 1;
                }
                switchD_4a11cc8c::default(uVar7,PTR_s_pathCalculateHCost__rx__ry_off_p_4a0f7dc0);
                uVar15 = FUN_4a142f2c(param_2,*(int *)(param_2 + 0x514) + uVar16,
                                      *(int *)(param_2 + 0x518) + uVar14);
                if (((~uVar15 & 0xf00) == 0) || ((uVar15 & 0x1000) != 0)) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = 1;
                }
                switchD_4a11cc8c::default(uVar7,PTR_s_pathCalculateHCost__rx__ry_non_w_4a0f7dc4);
                iVar9 = (*(int *)(param_2 + 0x4f4) - *(int *)(param_2 + 0x514)) - uVar16;
                iVar4 = (*(int *)(param_2 + 0x4f8) - *(int *)(param_2 + 0x518)) - uVar14;
                FUN_4a171fac(iVar4 * iVar4 + iVar9 * iVar9);
                uVar7 = FUN_4a002b60();
                FUN_4a17211c(uVar7,0x43480000);
                uVar7 = FUN_4a171e1c();
                if (*(int *)(param_2 + 0x594) == 0) {
                  iVar4 = 0;
                }
                else {
                  iVar4 = *(int *)(*(int *)(param_2 + 0x594) + 8);
                }
                iVar4 = *(int *)(iVar4 + uVar16 * 0x14 + 0xc);
                if (iVar4 == 0) {
                  iVar4 = 0;
                }
                else {
                  iVar4 = *(int *)(iVar4 + 8);
                }
                *(undefined4 *)(iVar4 + uVar14 * 4) = uVar7;
                if ((int)uVar16 < 0 || (int)uVar14 < 0) {
LAB_4a0f7770:
                  uVar7 = 0;
                }
                else {
                  uVar15 = uVar16;
                  if ((int)uVar16 < 0x50) {
                    uVar15 = uVar14;
                  }
                  if (0x4f < (int)uVar15) goto LAB_4a0f7770;
                  uVar7 = 1;
                }
                switchD_4a11cc8c::default(uVar7,PTR_s_pathCalculateFCost__rx__ry_off_p_4a0f7dc8);
                if (*(int *)(param_2 + 0x594) == 0) {
                  iVar4 = 0;
                }
                else {
                  iVar4 = *(int *)(*(int *)(param_2 + 0x594) + 8);
                }
                iVar4 = *(int *)(iVar4 + uVar16 * 0x14 + 0xc);
                if (iVar4 == 0) {
                  iVar4 = 0;
                }
                else {
                  iVar4 = *(int *)(iVar4 + 8);
                }
                if (*(int *)(param_2 + 0x580) == 0) {
                  iVar9 = 0;
                }
                else {
                  iVar9 = *(int *)(*(int *)(param_2 + 0x580) + 8);
                }
                iVar9 = *(int *)(iVar9 + uVar16 * 0x14 + 0xc);
                if (iVar9 == 0) {
                  iVar9 = 0;
                }
                else {
                  iVar9 = *(int *)(iVar9 + 8);
                }
                iVar4 = *(int *)(iVar4 + uVar14 * 4) + *(int *)(iVar9 + uVar14 * 4);
                if (*(int *)(param_2 + 0x56c) == 0) {
                  iVar9 = 0;
                }
                else {
                  iVar9 = *(int *)(*(int *)(param_2 + 0x56c) + 8);
                }
                iVar9 = *(int *)(iVar9 + uVar16 * 0x14 + 0xc);
                goto joined_r0x4a0f7b48;
              }
              goto LAB_4a0f7800;
            }
          }
        }
      }
    }
  }
  switchD_4a1193c4::default(s_pathfind_4a0f75e8);
  FUN_4a16be24(local_34,0);
  return;
LAB_4a0f7870:
  if ((int)uVar16 < 0 || (int)uVar14 < 0) {
LAB_4a0f78a4:
    uVar7 = 0;
  }
  else {
    uVar15 = uVar16;
    if ((int)uVar16 < 0x50) {
      uVar15 = uVar14;
    }
    if (0x4f < (int)uVar15) goto LAB_4a0f78a4;
    uVar15 = uVar18;
    if (uVar18 < 0x50) {
      uVar15 = uVar3;
    }
    if (0x4f < uVar15) goto LAB_4a0f78a4;
    uVar7 = 1;
  }
  switchD_4a11cc8c::default(uVar7,PTR_s_pathBetterGCost___rx__ry__or__cx_4a0f7dcc);
  iVar4 = *(int *)(param_2 + 0x580);
  if (iVar4 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(iVar4 + 8);
  }
  iVar9 = *(int *)(iVar9 + uVar16 * 0x14 + 0xc);
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(iVar9 + 8);
  }
  iVar9 = *(int *)(iVar9 + uVar14 * 4);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar4 + 8);
  }
  iVar4 = *(int *)(iVar4 + local_38 * 4 + 0xc);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar4 + 8);
  }
  iVar11 = *(int *)(iVar4 + uVar3 * 4);
  iVar4 = FUN_4a143428(param_2,uVar16,uVar14,uVar18,uVar3);
  if (iVar9 <= iVar4 + iVar11) goto LAB_4a0f7800;
  if ((int)uVar16 < 0 || (int)uVar14 < 0) {
LAB_4a0f794c:
    uVar7 = 0;
  }
  else {
    uVar15 = uVar16;
    if ((int)uVar16 < 0x50) {
      uVar15 = uVar14;
    }
    if (0x4f < (int)uVar15) goto LAB_4a0f794c;
    uVar7 = 1;
  }
  switchD_4a11cc8c::default(uVar7,PTR_s_pathSetParent__rx__ry_off_pathfi_4a0f75f8);
  if (*(int *)(param_2 + 0x558) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_2 + 0x558) + 8);
  }
  iVar4 = *(int *)(iVar4 + uVar16 * 0x14 + 0xc);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar4 + 8);
  }
  *(short *)(iVar4 + uVar14 * 2) = (short)local_3c;
  if ((int)uVar16 < 0 || (int)uVar14 < 0) {
LAB_4a0f79a4:
    uVar7 = 0;
  }
  else {
    uVar15 = uVar16;
    if ((int)uVar16 < 0x50) {
      uVar15 = uVar14;
    }
    if (0x4f < (int)uVar15) goto LAB_4a0f79a4;
    uVar7 = 1;
  }
  switchD_4a11cc8c::default(uVar7,PTR_s_pathCalculateGCost__rx__ry_off_p_4a0f75fc);
  iVar4 = *(int *)(param_2 + 0x558);
  if (iVar4 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(iVar4 + 8);
  }
  iVar9 = *(int *)(iVar9 + uVar16 * 0x14 + 0xc);
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(iVar9 + 8);
  }
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar4 + 8);
  }
  iVar4 = *(int *)(iVar4 + uVar16 * 0x14 + 0xc);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar4 + 8);
  }
  uVar17 = *(ushort *)(iVar9 + uVar14 * 2) & 0xff;
  uVar15 = (uint)(*(ushort *)(iVar4 + uVar14 * 2) >> 8);
  uVar6 = uVar17;
  if (uVar17 < 0x50) {
    uVar6 = uVar15;
  }
  switchD_4a11cc8c::default(uVar6 < 0x50,PTR_s_pathCalculateGCost__parent_off_p_4a0f7600);
  if (*(int *)(param_2 + 0x580) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_2 + 0x580) + 8);
  }
  iVar4 = *(int *)(iVar4 + uVar17 * 0x14 + 0xc);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar4 + 8);
  }
  iVar9 = *(int *)(iVar4 + uVar15 * 4);
  iVar4 = FUN_4a143428(param_2,uVar16,uVar14,uVar17,uVar15);
  if (*(int *)(param_2 + 0x580) == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(*(int *)(param_2 + 0x580) + 8);
  }
  iVar11 = *(int *)(iVar11 + uVar16 * 0x14 + 0xc);
  if (iVar11 == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(iVar11 + 8);
  }
  *(int *)(iVar11 + uVar14 * 4) = iVar9 + iVar4;
  if ((int)uVar16 < 0 || (int)uVar14 < 0) {
LAB_4a0f7acc:
    uVar7 = 0;
  }
  else {
    uVar15 = uVar16;
    if ((int)uVar16 < 0x50) {
      uVar15 = uVar14;
    }
    if (0x4f < (int)uVar15) goto LAB_4a0f7acc;
    uVar7 = 1;
  }
  switchD_4a11cc8c::default(uVar7,PTR_s_pathCalculateFCost__rx__ry_off_p_4a0f7dc8);
  if (*(int *)(param_2 + 0x594) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_2 + 0x594) + 8);
  }
  iVar4 = *(int *)(iVar4 + uVar16 * 0x14 + 0xc);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar4 + 8);
  }
  if (*(int *)(param_2 + 0x580) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(int *)(param_2 + 0x580) + 8);
  }
  iVar9 = *(int *)(iVar9 + uVar16 * 0x14 + 0xc);
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(iVar9 + 8);
  }
  iVar4 = *(int *)(iVar4 + uVar14 * 4) + *(int *)(iVar9 + uVar14 * 4);
  if (*(int *)(param_2 + 0x56c) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(int *)(param_2 + 0x56c) + 8);
  }
  iVar9 = *(int *)(iVar9 + uVar16 * 0x14 + 0xc);
joined_r0x4a0f7b48:
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(iVar9 + 8);
  }
  *(int *)(iVar9 + uVar14 * 4) = iVar4;
LAB_4a0f7800:
  local_5c = local_5c + 1;
  if (7 < local_5c) goto code_r0x4a0f7814;
  goto LAB_4a0f72c4;
code_r0x4a0f7814:
  if (*(int *)(param_2 + 0x528) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_2 + 0x528) + 8);
  }
  if (*(int *)(param_2 + 0x540) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(*(int *)(param_2 + 0x540) + 8);
  }
  *(undefined2 *)(iVar9 + *(int *)(param_2 + 0x548) * 2) = *(undefined2 *)(iVar4 + iVar13 * 2);
  *(int *)(param_2 + 0x548) = *(int *)(param_2 + 0x548) + 1;
  if (iVar13 < *(int *)(param_2 + 0x530) + -1) {
    do {
      iVar4 = *(int *)(param_2 + 0x528);
      if (iVar4 != 0) {
        iVar9 = *(int *)(iVar4 + 8);
      }
      else {
        iVar9 = 0;
      }
      if (iVar4 != 0) {
        iVar4 = *(int *)(iVar4 + 8);
      }
      else {
        iVar4 = 0;
      }
      *(undefined2 *)(iVar4 + iVar13 * 2) = *(undefined2 *)(iVar9 + (iVar13 + 1) * 2);
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)(param_2 + 0x530) + -1);
  }
  *(int *)(param_2 + 0x530) = *(int *)(param_2 + 0x530) + -1;
  if (((*(int *)(param_2 + 0x4f4) - *(int *)(param_2 + 0x514) == uVar18) &&
      (*(int *)(param_2 + 0x4f8) - *(int *)(param_2 + 0x518) == uVar3)) || (local_40 != 0))
  goto LAB_4a0f7bd0;
  goto LAB_4a0f718c;
LAB_4a0f7bd0:
  iVar11 = *(int *)(param_2 + 0x514);
  iVar13 = *(int *)(param_2 + 0x518);
  iVar5 = *(int *)(param_2 + 0x4ec);
  iVar9 = *(int *)(param_2 + 0x4f0);
  iVar4 = 0;
  uVar3 = *(int *)(param_2 + 0x4f4) - iVar11;
  uVar18 = *(int *)(param_2 + 0x4f8) - iVar13;
  uVar15 = *(uint *)PTR_DAT_4a0f75e0;
  uVar6 = *(uint *)PTR_DAT_4a0f75e0;
  while (uVar16 = uVar18, uVar14 = uVar3, -1 < (int)uVar14 && -1 < (int)uVar16) {
    uVar3 = uVar14;
    if ((int)uVar14 < 0x50) {
      uVar3 = uVar16;
    }
    if (((0x4f < (int)uVar3) || (uVar14 == iVar5 - iVar11 && uVar16 == iVar9 - iVar13)) ||
       (uVar15 == uVar14 && uVar6 == uVar16)) break;
    if (*(int *)(param_2 + 0x558) == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = *(int *)(*(int *)(param_2 + 0x558) + 8);
    }
    iVar10 = *(int *)(iVar10 + uVar14 * 0x14 + 0xc);
    if (iVar10 == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = *(int *)(iVar10 + 8);
    }
    uVar18 = (uint)*(short *)(iVar10 + uVar16 * 2);
    if (uVar18 == 0xffffffff) break;
    if (*(int *)(param_2 + 0x5a8) == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = *(int *)(*(int *)(param_2 + 0x5a8) + 8);
    }
    *(ushort *)(iVar10 + iVar4 * 2) = (ushort)uVar14 | (ushort)(uVar16 << 8);
    iVar4 = iVar4 + 1;
    uVar3 = uVar18 & 0xff;
    uVar18 = (uVar18 & 0xff00) >> 8;
    uVar15 = uVar14;
    uVar6 = uVar16;
  }
  FUN_4a16be24(auStack_54,iVar4 << 1);
  iVar13 = 0;
  iVar9 = 1;
  if (1 < iVar4 + 1) {
    do {
      iVar11 = *(int *)(param_2 + 0x5a8);
      if (iVar11 != 0) {
        iVar5 = *(int *)(iVar11 + 8);
      }
      else {
        iVar5 = 0;
      }
      iVar10 = (iVar4 - iVar13) + -1;
      if (iVar11 != 0) {
        iVar11 = *(int *)(iVar11 + 8);
      }
      else {
        iVar11 = 0;
      }
      uVar2 = *(ushort *)(iVar11 + iVar10 * 2);
      iVar11 = *(int *)(param_2 + 0x518);
      if (local_48 == (int *)0x0) {
        iVar12 = 0;
      }
      else {
        iVar12 = local_48[2];
      }
      *(uint *)(iVar12 + iVar13 * 8) =
           ((*(ushort *)(iVar5 + iVar10 * 2) & 0xff) + *(int *)(param_2 + 0x514)) * 0x200000 +
           0x100000;
      iVar5 = iVar13 * 2;
      if (local_48 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_48[2];
      }
      iVar9 = iVar9 + 1;
      iVar13 = iVar13 + 1;
      *(uint *)(iVar10 + (iVar5 + 1) * 4) = (iVar11 + (uint)(uVar2 >> 8)) * 0x200000 + 0x100000;
    } while (iVar9 < iVar4 + 1);
  }
  switchD_4a1193c4::default(s_pathfind_4a0f7dd0);
  puVar8 = (undefined4 *)FUN_4a0c6bc0(local_34);
  *puVar8 = PTR_PTR_4a0f7ddc;
  puVar8[2] = local_4c;
  puVar8[3] = local_48;
  if (local_48 != (int *)0x0) {
    (**(code **)(*local_48 + 0xc))();
  }
  *puVar8 = PTR_PTR_4a0f7de0;
  FUN_4a16bef4(auStack_54);
  return;
}



// Address: 4a0f7de4

void FUN_4a0f7de4(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined1 local_80 [20];
  undefined1 auStack_6c [20];
  undefined1 auStack_58 [20];
  undefined1 auStack_44 [20];
  undefined1 auStack_30 [20];
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0x528) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x528) + 8);
  }
  if (iVar1 != 0) {
    return;
  }
  iVar1 = FUN_4a16c0cc(auStack_30,0x1900);
  uVar5 = *(undefined4 *)(iVar1 + 8);
  piVar3 = *(int **)(iVar1 + 0xc);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
  }
  (**(code **)(*(int *)(param_1 + 0x51c) + 0x1c))((int *)(param_1 + 0x51c));
  *(undefined4 *)(param_1 + 0x524) = uVar5;
  *(int **)(param_1 + 0x528) = piVar3;
  FUN_4a16c1a0(auStack_30);
  *(undefined4 *)(param_1 + 0x530) = 0;
  iVar1 = FUN_4a16c0cc(auStack_30,0x1900);
  uVar5 = *(undefined4 *)(iVar1 + 8);
  piVar3 = *(int **)(iVar1 + 0xc);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
  }
  (**(code **)(*(int *)(param_1 + 0x534) + 0x1c))((int *)(param_1 + 0x534));
  *(undefined4 *)(param_1 + 0x53c) = uVar5;
  *(int **)(param_1 + 0x540) = piVar3;
  FUN_4a16c1a0(auStack_30);
  *(undefined4 *)(param_1 + 0x548) = 0;
  iVar1 = FUN_4a168f18(auStack_44,0x50);
  uVar5 = *(undefined4 *)(iVar1 + 8);
  piVar3 = *(int **)(iVar1 + 0xc);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
  }
  (**(code **)(*(int *)(param_1 + 0x54c) + 0x1c))((int *)(param_1 + 0x54c));
  *(undefined4 *)(param_1 + 0x554) = uVar5;
  *(int **)(param_1 + 0x558) = piVar3;
  FUN_4a169024(auStack_44);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x554)) {
    do {
      iVar2 = iVar4;
      if (*(int *)(param_1 + 0x558) != 0) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x558) + 8);
      }
      piVar3 = (int *)(iVar2 + iVar1 * 0x14);
      iVar2 = FUN_4a16c0cc(local_80,0x50);
      iVar7 = *(int *)(iVar2 + 8);
      piVar6 = *(int **)(iVar2 + 0xc);
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0xc))(piVar6);
      }
      (**(code **)(*piVar3 + 0x1c))(piVar3);
      piVar3[2] = iVar7;
      piVar3[3] = (int)piVar6;
      FUN_4a16c1a0(local_80);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x554));
  }
  iVar1 = FUN_4a168d38(auStack_58,0x50);
  uVar5 = *(undefined4 *)(iVar1 + 8);
  piVar3 = *(int **)(iVar1 + 0xc);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
  }
  (**(code **)(*(int *)(param_1 + 0x574) + 0x1c))((int *)(param_1 + 0x574));
  *(undefined4 *)(param_1 + 0x57c) = uVar5;
  *(int **)(param_1 + 0x580) = piVar3;
  FUN_4a168e44(auStack_58);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x57c)) {
    do {
      iVar2 = iVar4;
      if (*(int *)(param_1 + 0x580) != 0) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x580) + 8);
      }
      piVar3 = (int *)(iVar2 + iVar1 * 0x14);
      iVar2 = FUN_4a16be24(local_80,0x50);
      iVar7 = *(int *)(iVar2 + 8);
      piVar6 = *(int **)(iVar2 + 0xc);
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0xc))(piVar6);
      }
      (**(code **)(*piVar3 + 0x1c))(piVar3);
      piVar3[2] = iVar7;
      piVar3[3] = (int)piVar6;
      FUN_4a16bef4(local_80);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x57c));
  }
  iVar1 = FUN_4a168d38(auStack_58,0x50);
  uVar5 = *(undefined4 *)(iVar1 + 8);
  piVar3 = *(int **)(iVar1 + 0xc);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
  }
  (**(code **)(*(int *)(param_1 + 0x560) + 0x1c))((int *)(param_1 + 0x560));
  *(undefined4 *)(param_1 + 0x568) = uVar5;
  *(int **)(param_1 + 0x56c) = piVar3;
  FUN_4a168e44(auStack_58);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x568)) {
    do {
      iVar2 = iVar4;
      if (*(int *)(param_1 + 0x56c) != 0) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x56c) + 8);
      }
      piVar3 = (int *)(iVar2 + iVar1 * 0x14);
      iVar2 = FUN_4a16be24(local_80,0x50);
      iVar7 = *(int *)(iVar2 + 8);
      piVar6 = *(int **)(iVar2 + 0xc);
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0xc))(piVar6);
      }
      (**(code **)(*piVar3 + 0x1c))(piVar3);
      piVar3[2] = iVar7;
      piVar3[3] = (int)piVar6;
      FUN_4a16bef4(local_80);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x568));
  }
  iVar1 = FUN_4a168d38(auStack_58,0x50);
  uVar5 = *(undefined4 *)(iVar1 + 8);
  piVar3 = *(int **)(iVar1 + 0xc);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
  }
  (**(code **)(*(int *)(param_1 + 0x588) + 0x1c))((int *)(param_1 + 0x588));
  *(undefined4 *)(param_1 + 0x590) = uVar5;
  *(int **)(param_1 + 0x594) = piVar3;
  FUN_4a168e44(auStack_58);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x590)) {
    do {
      iVar2 = iVar4;
      if (*(int *)(param_1 + 0x594) != 0) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x594) + 8);
      }
      piVar3 = (int *)(iVar2 + iVar1 * 0x14);
      iVar2 = FUN_4a16be24(local_80,0x50);
      iVar7 = *(int *)(iVar2 + 8);
      piVar6 = *(int **)(iVar2 + 0xc);
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0xc))(piVar6);
      }
      (**(code **)(*piVar3 + 0x1c))(piVar3);
      piVar3[2] = iVar7;
      piVar3[3] = (int)piVar6;
      FUN_4a16bef4(local_80);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x590));
  }
  iVar4 = FUN_4a16c0cc(auStack_30,0x640);
  uVar5 = *(undefined4 *)(iVar4 + 8);
  piVar3 = *(int **)(iVar4 + 0xc);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
  }
  (**(code **)(*(int *)(param_1 + 0x59c) + 0x1c))((int *)(param_1 + 0x59c));
  *(undefined4 *)(param_1 + 0x5a4) = uVar5;
  *(int **)(param_1 + 0x5a8) = piVar3;
  FUN_4a16c1a0(auStack_30);
  *(undefined4 *)(param_1 + 0x510) = 0;
  iVar4 = FUN_4a16be24(auStack_6c,0x14);
  uVar5 = *(undefined4 *)(iVar4 + 8);
  piVar3 = *(int **)(iVar4 + 0xc);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
  }
  (**(code **)(*(int *)(param_1 + 0x4fc) + 0x1c))((int *)(param_1 + 0x4fc));
  *(undefined4 *)(param_1 + 0x504) = uVar5;
  *(int **)(param_1 + 0x508) = piVar3;
  FUN_4a16bef4(auStack_6c);
  return;
}



// Address: 4a0f8338

void FUN_4a0f8338(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  short *psVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  int iVar19;
  int *piVar20;
  undefined1 auStack_1f0 [8];
  int local_1e8;
  int *local_1e4;
  int local_1dc [2];
  int local_1d4;
  int *local_1d0;
  undefined1 auStack_1c8 [8];
  int local_1c0;
  int *local_1bc;
  undefined1 auStack_1b4 [8];
  int local_1ac;
  int *local_1a8 [2];
  undefined1 auStack_1a0 [8];
  int local_198;
  int *local_194;
  undefined1 auStack_18c [8];
  undefined4 local_184;
  int *local_180;
  undefined1 auStack_178 [8];
  undefined4 local_170;
  int *local_16c;
  undefined1 auStack_164 [8];
  undefined4 local_15c;
  int *local_158;
  undefined *local_150 [2];
  int local_148;
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
  undefined *local_c4 [2];
  int local_bc;
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
  undefined *local_48 [2];
  int local_40;
  int *local_3c;
  undefined *local_34;
  undefined *local_30;
  int local_2c;
  undefined4 local_28;
  
  local_2c = param_1;
  local_28 = param_2;
  iVar6 = FUN_4a0bfbdc(param_2);
  piVar7 = (int *)FUN_4a0c6bc0(local_48);
  local_30 = PTR_PTR_4a0f930c;
  piVar7[2] = 0;
  piVar7[3] = 0;
  *piVar7 = (int)local_30;
  local_34 = PTR_PTR_4a0f9310;
  if (0 < iVar6) {
    iVar8 = FUN_4a15e080(iVar6 * 100);
    if (iVar8 == 0) {
      iVar8 = FUN_4a1669a8();
    }
    iVar19 = 0;
    do {
      uVar9 = FUN_4a10b5dc(auStack_1f0);
      FUN_4a10b474(iVar8 + iVar19 * 100,uVar9);
      FUN_4a10b6d4(auStack_1f0);
      iVar19 = iVar19 + 1;
    } while (iVar19 < iVar6);
    thunk_FUN_4a161570(0x18);
    puVar10 = (undefined4 *)FUN_4a0c0628();
    puVar10[3] = 100;
    puVar10[4] = iVar6;
    *puVar10 = local_34;
    puVar10[2] = iVar8;
    *(undefined1 *)(puVar10 + 5) = 1;
    if (puVar10 != (undefined4 *)0x0) {
      (**(code **)(local_34 + 0xc))(puVar10);
    }
    (**(code **)(*piVar7 + 0x1c))(piVar7);
    piVar7[2] = iVar6;
    piVar7[3] = (int)puVar10;
  }
  iVar8 = 0;
  if (0 < iVar6) {
    do {
      if (local_3c == (int *)0x0) {
        iVar19 = 0;
      }
      else {
        iVar19 = local_3c[2];
      }
      FUN_4a10ab88(iVar19 + iVar8 * 100,local_28,iVar8);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar6);
  }
  iVar6 = FUN_4a0bf920(local_28);
  FUN_4a16c0cc(auStack_5c,iVar6);
  FUN_4a16c0cc(auStack_70,iVar6);
  puVar2 = PTR_DAT_4a0f9314;
  iVar8 = 0;
  iVar19 = 1;
  if (1 < iVar6 + 1) {
    do {
      iVar11 = FUN_4a0bfbdc(local_28);
      if (local_50 == (int *)0x0) {
        iVar12 = 0;
      }
      else {
        iVar12 = local_50[2];
      }
      *(undefined2 *)(iVar12 + iVar8 * 2) = *(undefined2 *)(puVar2 + iVar11 * 2);
      iVar11 = FUN_4a0bfbdc(local_28);
      iVar19 = iVar19 + 1;
      if (local_64 == (int *)0x0) {
        iVar12 = 0;
      }
      else {
        iVar12 = local_64[2];
      }
      iVar13 = iVar8 * 2;
      iVar8 = iVar8 + 1;
      *(undefined2 *)(iVar12 + iVar13) = *(undefined2 *)(puVar2 + iVar11 * 2);
    } while (iVar19 < iVar6 + 1);
  }
  iVar6 = FUN_4a0bf920(local_28);
  FUN_4a168f18(auStack_84,iVar6);
  iVar8 = 0;
  if (0 < iVar6) {
    do {
      iVar19 = FUN_4a0bf920(local_28);
      FUN_4a16c0cc(auStack_1a0,iVar19);
      iVar12 = 0;
      iVar11 = 1;
      if (1 < iVar19 + 1) {
        do {
          iVar13 = FUN_4a0bfbdc(local_28);
          iVar11 = iVar11 + 1;
          if (local_194 == (int *)0x0) {
            iVar14 = 0;
          }
          else {
            iVar14 = local_194[2];
          }
          iVar15 = iVar12 * 2;
          iVar12 = iVar12 + 1;
          *(undefined2 *)(iVar14 + iVar15) = *(undefined2 *)(puVar2 + iVar13 * 2);
        } while (iVar11 < iVar19 + 1);
      }
      piVar7 = local_194;
      iVar19 = local_198;
      if (local_78 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_78[2];
      }
      piVar20 = (int *)(iVar11 + iVar8 * 0x14);
      if (local_194 != (int *)0x0) {
        (**(code **)(*local_194 + 0xc))(local_194);
      }
      (**(code **)(*piVar20 + 0x1c))(piVar20);
      piVar20[2] = iVar19;
      piVar20[3] = (int)piVar7;
      FUN_4a16c1a0(auStack_1a0);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar6);
  }
  local_88 = FUN_4a0bf920(local_28);
  FUN_4a168f18(auStack_9c,local_88);
  FUN_4a168d38(auStack_b0,local_88);
  FUN_4a167fc8(local_c4,local_88);
  iVar6 = 0;
  if (0 < local_88) {
    do {
      iVar8 = FUN_4a0bf920(local_28);
      FUN_4a16c0cc(auStack_1a0,iVar8);
      FUN_4a16be24(auStack_1b4,iVar8);
      FUN_4a168f18(auStack_1c8,iVar8);
      iVar19 = 0;
      if (0 < iVar8) {
        do {
          iVar11 = FUN_4a0bfbdc(local_28);
          if (local_194 == (int *)0x0) {
            iVar12 = 0;
          }
          else {
            iVar12 = local_194[2];
          }
          *(undefined2 *)(iVar12 + iVar19 * 2) = *(undefined2 *)(puVar2 + iVar11 * 2);
          uVar9 = FUN_4a0bf62c(local_28);
          if (local_1a8[0] == (int *)0x0) {
            iVar11 = 0;
          }
          else {
            iVar11 = local_1a8[0][2];
          }
          *(undefined4 *)(iVar11 + iVar19 * 4) = uVar9;
          iVar11 = FUN_4a0bf920(local_28);
          FUN_4a16c0cc(local_1dc,iVar11);
          iVar13 = 0;
          iVar12 = 1;
          if (1 < iVar11 + 1) {
            do {
              iVar14 = FUN_4a0bfbdc(local_28);
              iVar12 = iVar12 + 1;
              if (local_1d0 == (int *)0x0) {
                iVar15 = 0;
              }
              else {
                iVar15 = local_1d0[2];
              }
              iVar1 = iVar13 * 2;
              iVar13 = iVar13 + 1;
              *(undefined2 *)(iVar15 + iVar1) = *(undefined2 *)(puVar2 + iVar14 * 2);
            } while (iVar12 < iVar11 + 1);
          }
          if (*(int *)PTR_DAT_4a0f9318 != 0) {
            if (local_1d0 == (int *)0x0) {
              psVar16 = (short *)0x0;
            }
            else {
              psVar16 = (short *)local_1d0[2];
            }
            if (*psVar16 != 0x22c) {
              if (local_1d0 == (int *)0x0) {
                psVar16 = (short *)0x0;
              }
              else {
                psVar16 = (short *)local_1d0[2];
              }
              if (*psVar16 != 0x1e8) goto LAB_4a0f883c;
            }
            FUN_4a16c0cc(auStack_1f0,1);
            piVar7 = local_1e4;
            iVar11 = local_1e8;
            puVar18 = (undefined2 *)0x0;
            if (local_1d0 == (int *)0x0) {
              psVar16 = (short *)0x0;
            }
            else {
              psVar16 = (short *)local_1d0[2];
            }
            if (*psVar16 == 0x22c) {
              if (local_1e4 == (int *)0x0) {
                puVar17 = (undefined2 *)0x0;
              }
              else {
                puVar17 = (undefined2 *)local_1e4[2];
              }
              *puVar17 = 0x2a4;
            }
            if (local_1d0 == (int *)0x0) {
              psVar16 = (short *)0x0;
            }
            else {
              psVar16 = (short *)local_1d0[2];
            }
            if (*psVar16 == 0x1e8) {
              if (local_1e4 != (int *)0x0) {
                puVar18 = (undefined2 *)local_1e4[2];
              }
              *puVar18 = 0x2a5;
            }
            if (local_1e4 != (int *)0x0) {
              (**(code **)(*local_1e4 + 0xc))(local_1e4);
            }
            (**(code **)(local_1dc[0] + 0x1c))(local_1dc);
            local_1d0 = piVar7;
            local_1d4 = iVar11;
            FUN_4a16c1a0(auStack_1f0);
          }
LAB_4a0f883c:
          piVar7 = local_1d0;
          iVar11 = local_1d4;
          if (local_1bc == (int *)0x0) {
            iVar12 = 0;
          }
          else {
            iVar12 = local_1bc[2];
          }
          piVar20 = (int *)(iVar12 + iVar19 * 0x14);
          if (local_1d0 != (int *)0x0) {
            (**(code **)(*local_1d0 + 0xc))(local_1d0);
          }
          (**(code **)(*piVar20 + 0x1c))(piVar20);
          piVar20[2] = iVar11;
          piVar20[3] = (int)piVar7;
          FUN_4a16c1a0(local_1dc);
          iVar19 = iVar19 + 1;
        } while (iVar19 < iVar8);
      }
      piVar7 = local_194;
      iVar8 = local_198;
      if (local_90 == (int *)0x0) {
        iVar19 = 0;
      }
      else {
        iVar19 = local_90[2];
      }
      piVar20 = (int *)(iVar19 + iVar6 * 0x14);
      if (local_194 != (int *)0x0) {
        (**(code **)(*local_194 + 0xc))(local_194);
      }
      (**(code **)(*piVar20 + 0x1c))(piVar20);
      piVar3 = local_1a8[0];
      iVar19 = local_1ac;
      piVar20[2] = iVar8;
      piVar20[3] = (int)piVar7;
      if (local_a4 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = local_a4[2];
      }
      piVar7 = (int *)(iVar8 + iVar6 * 0x14);
      if (local_1a8[0] != (int *)0x0) {
        (**(code **)(*local_1a8[0] + 0xc))(local_1a8[0]);
      }
      (**(code **)(*piVar7 + 0x1c))(piVar7);
      piVar20 = local_1bc;
      iVar8 = local_1c0;
      piVar7[2] = iVar19;
      piVar7[3] = (int)piVar3;
      if (local_b8 == (int *)0x0) {
        iVar19 = 0;
      }
      else {
        iVar19 = local_b8[2];
      }
      piVar7 = (int *)(iVar19 + iVar6 * 0x14);
      if (local_1bc != (int *)0x0) {
        (**(code **)(*local_1bc + 0xc))(local_1bc);
      }
      (**(code **)(*piVar7 + 0x1c))(piVar7);
      piVar7[2] = iVar8;
      piVar7[3] = (int)piVar20;
      FUN_4a169024(auStack_1c8);
      FUN_4a16bef4(auStack_1b4);
      FUN_4a16c1a0(auStack_1a0);
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_88);
  }
  iVar6 = FUN_4a0bf920(local_28);
  FUN_4a16c0cc(auStack_d8,iVar6);
  FUN_4a16c0cc(auStack_ec,iVar6);
  FUN_4a168d38(auStack_100,iVar6);
  iVar8 = 0;
  if (0 < iVar6) {
    do {
      iVar19 = FUN_4a0bfbdc(local_28);
      if (local_cc == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_cc[2];
      }
      *(undefined2 *)(iVar11 + iVar8 * 2) = *(undefined2 *)(puVar2 + iVar19 * 2);
      iVar19 = FUN_4a0bfbdc(local_28);
      if (local_e0 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_e0[2];
      }
      *(undefined2 *)(iVar11 + iVar8 * 2) = *(undefined2 *)(puVar2 + iVar19 * 2);
      FUN_4a16be24(auStack_1a0,4);
      iVar11 = 0;
      iVar19 = 1;
      do {
        uVar9 = FUN_4a0bfbdc(local_28);
        piVar7 = local_194;
        iVar12 = local_198;
        iVar19 = iVar19 + 1;
        if (local_194 == (int *)0x0) {
          iVar13 = 0;
        }
        else {
          iVar13 = local_194[2];
        }
        *(undefined4 *)(iVar13 + iVar11 * 4) = uVar9;
        iVar11 = iVar11 + 1;
      } while (iVar19 < 5);
      if (local_f4 == (int *)0x0) {
        iVar19 = 0;
      }
      else {
        iVar19 = local_f4[2];
      }
      piVar20 = (int *)(iVar19 + iVar8 * 0x14);
      if (local_194 != (int *)0x0) {
        (**(code **)(*local_194 + 0xc))(local_194);
      }
      (**(code **)(*piVar20 + 0x1c))(piVar20);
      piVar20[2] = iVar12;
      piVar20[3] = (int)piVar7;
      FUN_4a16bef4(auStack_1a0);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar6);
  }
  iVar6 = FUN_4a0bf920(local_28);
  FUN_4a16c0cc(auStack_114,iVar6);
  FUN_4a16c0cc(auStack_128,iVar6);
  FUN_4a168d38(auStack_13c,iVar6);
  iVar8 = 0;
  if (0 < iVar6) {
    do {
      iVar19 = FUN_4a0bfbdc(local_28);
      if (local_108 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_108[2];
      }
      *(undefined2 *)(iVar11 + iVar8 * 2) = *(undefined2 *)(puVar2 + iVar19 * 2);
      iVar19 = FUN_4a0bfbdc(local_28);
      if (local_11c == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_11c[2];
      }
      *(undefined2 *)(iVar11 + iVar8 * 2) = *(undefined2 *)(puVar2 + iVar19 * 2);
      FUN_4a16be24(auStack_1a0,4);
      iVar11 = 0;
      iVar19 = 1;
      do {
        uVar9 = FUN_4a0bfbdc(local_28);
        piVar7 = local_194;
        iVar12 = local_198;
        iVar19 = iVar19 + 1;
        if (local_194 == (int *)0x0) {
          iVar13 = 0;
        }
        else {
          iVar13 = local_194[2];
        }
        *(undefined4 *)(iVar13 + iVar11 * 4) = uVar9;
        iVar11 = iVar11 + 1;
      } while (iVar19 < 5);
      if (local_130 == (int *)0x0) {
        iVar19 = 0;
      }
      else {
        iVar19 = local_130[2];
      }
      piVar20 = (int *)(iVar19 + iVar8 * 0x14);
      if (local_194 != (int *)0x0) {
        (**(code **)(*local_194 + 0xc))(local_194);
      }
      (**(code **)(*piVar20 + 0x1c))(piVar20);
      piVar20[2] = iVar12;
      piVar20[3] = (int)piVar7;
      FUN_4a16bef4(auStack_1a0);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar6);
  }
  iVar6 = FUN_4a0bf920(local_28);
  piVar7 = (int *)FUN_4a0c6bc0(local_150);
  puVar2 = PTR_PTR_4a0f931c;
  piVar7[2] = 0;
  piVar7[3] = 0;
  *piVar7 = (int)puVar2;
  if (0 < iVar6) {
    iVar8 = FUN_4a15e080(iVar6 * 0x1c);
    if (iVar8 == 0) {
      iVar8 = FUN_4a1669a8();
    }
    iVar19 = 0;
    do {
      uVar9 = FUN_4a0d4e84(local_1a8);
      FUN_4a0d4e2c(iVar8 + iVar19 * 0x1c,uVar9);
      FUN_4a0d4ecc(local_1a8);
      iVar19 = iVar19 + 1;
    } while (iVar19 < iVar6);
    thunk_FUN_4a161570(0x18);
    puVar10 = (undefined4 *)FUN_4a0c0628();
    puVar10[3] = 0x1c;
    puVar10[4] = iVar6;
    *puVar10 = local_34;
    puVar10[2] = iVar8;
    *(undefined1 *)(puVar10 + 5) = 1;
    if (puVar10 != (undefined4 *)0x0) {
      (**(code **)(local_34 + 0xc))(puVar10);
    }
    (**(code **)(*piVar7 + 0x1c))(piVar7);
    piVar7[2] = iVar6;
    piVar7[3] = (int)puVar10;
  }
  iVar8 = 0;
  if (0 < iVar6) {
    do {
      if (local_144 == (int *)0x0) {
        iVar19 = 0;
      }
      else {
        iVar19 = local_144[2];
      }
      FUN_4a0d4d54(iVar19 + iVar8 * 0x1c,local_28,iVar8);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar6);
  }
  iVar6 = FUN_4a0bf920(local_28);
  FUN_4a16b5f8(auStack_164,iVar6);
  FUN_4a16b5f8(auStack_178,iVar6);
  FUN_4a168f18(auStack_18c,iVar6);
  iVar8 = 0;
  if (0 < iVar6) {
    do {
      uVar4 = FUN_4a0bf920(local_28);
      if (local_158 == (int *)0x0) {
        iVar19 = 0;
      }
      else {
        iVar19 = local_158[2];
      }
      *(undefined1 *)(iVar19 + iVar8) = uVar4;
      uVar4 = FUN_4a0bf920(local_28);
      if (local_16c == (int *)0x0) {
        iVar19 = 0;
      }
      else {
        iVar19 = local_16c[2];
      }
      *(undefined1 *)(iVar19 + iVar8) = uVar4;
      iVar19 = FUN_4a0bf920(local_28);
      FUN_4a16c0cc(auStack_1a0,iVar19);
      iVar12 = 0;
      iVar11 = 1;
      if (1 < iVar19 + 1) {
        do {
          uVar5 = FUN_4a0bf920(local_28);
          if (local_194 == (int *)0x0) {
            iVar13 = 0;
          }
          else {
            iVar13 = local_194[2];
          }
          iVar14 = iVar12 * 2;
          iVar11 = iVar11 + 1;
          iVar12 = iVar12 + 1;
          *(undefined2 *)(iVar13 + iVar14) = uVar5;
        } while (iVar11 < iVar19 + 1);
      }
      piVar7 = local_194;
      iVar19 = local_198;
      if (local_180 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_180[2];
      }
      piVar20 = (int *)(iVar11 + iVar8 * 0x14);
      if (local_194 != (int *)0x0) {
        (**(code **)(*local_194 + 0xc))(local_194);
      }
      (**(code **)(*piVar20 + 0x1c))(piVar20);
      piVar20[2] = iVar19;
      piVar20[3] = (int)piVar7;
      FUN_4a16c1a0(auStack_1a0);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar6);
  }
  iVar8 = local_2c;
  iVar6 = local_40;
  piVar7 = (int *)(local_2c + 0x48);
  if (local_3c != (int *)0x0) {
    (**(code **)(*local_3c + 0xc))(local_3c);
  }
  (**(code **)(*piVar7 + 0x1c))(piVar7);
  iVar19 = local_2c;
  *(int *)(iVar8 + 0x50) = iVar6;
  *(int **)(iVar8 + 0x54) = local_3c;
  piVar7 = (int *)(local_2c + 0x5c);
  if (local_50 != (int *)0x0) {
    (**(code **)(*local_50 + 0xc))(local_50);
  }
  (**(code **)(*piVar7 + 0x1c))(piVar7);
  iVar6 = local_2c;
  *(undefined4 *)(iVar19 + 100) = local_54;
  *(int **)(iVar19 + 0x68) = local_50;
  piVar7 = (int *)(local_2c + 0x70);
  if (local_64 != (int *)0x0) {
    (**(code **)(*local_64 + 0xc))(local_64);
  }
  (**(code **)(*piVar7 + 0x1c))(piVar7);
  iVar8 = local_2c;
  *(undefined4 *)(iVar6 + 0x78) = local_68;
  *(int **)(iVar6 + 0x7c) = local_64;
  piVar7 = (int *)(local_2c + 0x84);
  if (local_78 != (int *)0x0) {
    (**(code **)(*local_78 + 0xc))(local_78);
  }
  (**(code **)(*piVar7 + 0x1c))(piVar7);
  iVar6 = local_2c;
  *(undefined4 *)(iVar8 + 0x8c) = local_7c;
  *(int **)(iVar8 + 0x90) = local_78;
  piVar7 = (int *)(local_2c + 0x98);
  if (local_90 != (int *)0x0) {
    (**(code **)(*local_90 + 0xc))(local_90);
  }
  (**(code **)(*piVar7 + 0x1c))(piVar7);
  iVar8 = local_2c;
  *(undefined4 *)(iVar6 + 0xa0) = local_94;
  *(int **)(iVar6 + 0xa4) = local_90;
  piVar7 = (int *)(local_2c + 0xac);
  if (local_a4 != (int *)0x0) {
    (**(code **)(*local_a4 + 0xc))(local_a4);
  }
  (**(code **)(*piVar7 + 0x1c))(piVar7);
  iVar19 = local_2c;
  iVar6 = local_bc;
  *(undefined4 *)(iVar8 + 0xb4) = local_a8;
  *(int **)(iVar8 + 0xb8) = local_a4;
  piVar7 = (int *)(local_2c + 0xc0);
  if (local_b8 != (int *)0x0) {
    (**(code **)(*local_b8 + 0xc))(local_b8);
  }
  (**(code **)(*piVar7 + 0x1c))(piVar7);
  iVar8 = local_2c;
  *(int *)(iVar19 + 200) = iVar6;
  *(int **)(iVar19 + 0xcc) = local_b8;
  piVar7 = (int *)(local_2c + 0xd4);
  if (local_cc != (int *)0x0) {
    (**(code **)(*local_cc + 0xc))(local_cc);
  }
  (**(code **)(*piVar7 + 0x1c))(piVar7);
  iVar6 = local_2c;
  *(undefined4 *)(iVar8 + 0xdc) = local_d0;
  *(int **)(iVar8 + 0xe0) = local_cc;
  piVar7 = (int *)(local_2c + 0xe8);
  if (local_e0 != (int *)0x0) {
    (**(code **)(*local_e0 + 0xc))(local_e0);
  }
  (**(code **)(*piVar7 + 0x1c))(piVar7);
  iVar8 = local_2c;
  *(undefined4 *)(iVar6 + 0xf0) = local_e4;
  *(int **)(iVar6 + 0xf4) = local_e0;
  piVar7 = (int *)(local_2c + 0xfc);
  if (local_f4 != (int *)0x0) {
    (**(code **)(*local_f4 + 0xc))(local_f4);
  }
  (**(code **)(*piVar7 + 0x1c))(piVar7);
  iVar6 = local_2c;
  *(undefined4 *)(iVar8 + 0x104) = local_f8;
  *(int **)(iVar8 + 0x108) = local_f4;
  piVar7 = (int *)(local_2c + 0x110);
  if (local_108 != (int *)0x0) {
    (**(code **)(*local_108 + 0xc))(local_108);
  }
  (**(code **)(*piVar7 + 0x1c))(piVar7);
  iVar8 = local_2c;
  *(undefined4 *)(iVar6 + 0x118) = local_10c;
  *(int **)(iVar6 + 0x11c) = local_108;
  piVar7 = (int *)(local_2c + 0x124);
  if (local_11c != (int *)0x0) {
    (**(code **)(*local_11c + 0xc))(local_11c);
  }
  (**(code **)(*piVar7 + 0x1c))(piVar7);
  iVar6 = local_2c;
  *(undefined4 *)(iVar8 + 300) = local_120;
  *(int **)(iVar8 + 0x130) = local_11c;
  piVar7 = (int *)(local_2c + 0x138);
  if (local_130 != (int *)0x0) {
    (**(code **)(*local_130 + 0xc))(local_130);
  }
  (**(code **)(*piVar7 + 0x1c))(piVar7);
  iVar19 = local_2c;
  iVar8 = local_148;
  *(undefined4 *)(iVar6 + 0x140) = local_134;
  *(int **)(iVar6 + 0x144) = local_130;
  piVar7 = (int *)(local_2c + 0x14c);
  if (local_144 != (int *)0x0) {
    (**(code **)(*local_144 + 0xc))(local_144);
  }
  (**(code **)(*piVar7 + 0x1c))(piVar7);
  iVar6 = local_2c;
  *(int *)(iVar19 + 0x154) = iVar8;
  *(int **)(iVar19 + 0x158) = local_144;
  piVar7 = (int *)(local_2c + 0x160);
  if (local_158 != (int *)0x0) {
    (**(code **)(*local_158 + 0xc))(local_158);
  }
  (**(code **)(*piVar7 + 0x1c))(piVar7);
  iVar8 = local_2c;
  *(undefined4 *)(iVar6 + 0x168) = local_15c;
  *(int **)(iVar6 + 0x16c) = local_158;
  piVar7 = (int *)(local_2c + 0x174);
  if (local_16c != (int *)0x0) {
    (**(code **)(*local_16c + 0xc))(local_16c);
  }
  (**(code **)(*piVar7 + 0x1c))(piVar7);
  iVar6 = local_2c;
  *(undefined4 *)(iVar8 + 0x17c) = local_170;
  *(int **)(iVar8 + 0x180) = local_16c;
  piVar7 = (int *)(local_2c + 0x188);
  if (local_180 != (int *)0x0) {
    (**(code **)(*local_180 + 0xc))(local_180);
  }
  (**(code **)(*piVar7 + 0x1c))(piVar7);
  *(undefined4 *)(iVar6 + 400) = local_184;
  *(int **)(iVar6 + 0x194) = local_180;
  FUN_4a169024(auStack_18c);
  FUN_4a16b6c0(auStack_178);
  FUN_4a16b6c0(auStack_164);
  local_150[0] = puVar2;
  iVar6 = FUN_4a0bcc84(local_150);
  if (iVar6 != 0) {
    iVar8 = 0;
    if (0 < local_148) {
      do {
        (*(code *)**(undefined4 **)(iVar6 + iVar8 * 0x1c))();
        iVar8 = iVar8 + 1;
      } while (iVar8 < local_148);
      if (iVar6 == 0) goto LAB_4a0f93f8;
    }
    FUN_4a14f21c(iVar6);
  }
LAB_4a0f93f8:
  FUN_4a0c6bf4(local_150);
  FUN_4a168e44(auStack_13c);
  FUN_4a16c1a0(auStack_128);
  FUN_4a16c1a0(auStack_114);
  FUN_4a168e44(auStack_100);
  FUN_4a16c1a0(auStack_ec);
  FUN_4a16c1a0(auStack_d8);
  local_c4[0] = PTR_PTR_4a0f9538;
  iVar6 = FUN_4a0bcc84(local_c4);
  if (iVar6 != 0) {
    iVar8 = 0;
    if (0 < local_bc) {
      do {
        (*(code *)**(undefined4 **)(iVar6 + iVar8 * 0x14))();
        iVar8 = iVar8 + 1;
      } while (iVar8 < local_bc);
      if (iVar6 == 0) goto LAB_4a0f9490;
    }
    FUN_4a14f21c(iVar6);
  }
LAB_4a0f9490:
  FUN_4a0c6bf4(local_c4);
  FUN_4a168e44(auStack_b0);
  FUN_4a169024(auStack_9c);
  FUN_4a169024(auStack_84);
  FUN_4a16c1a0(auStack_70);
  FUN_4a16c1a0(auStack_5c);
  local_48[0] = local_30;
  iVar6 = FUN_4a0bcc84(local_48);
  if (iVar6 != 0) {
    iVar8 = 0;
    if (0 < local_40) {
      do {
        (*(code *)**(undefined4 **)(iVar6 + iVar8 * 100))();
        iVar8 = iVar8 + 1;
      } while (iVar8 < local_40);
      if (iVar6 == 0) goto LAB_4a0f9524;
    }
    FUN_4a14f21c(iVar6);
  }
LAB_4a0f9524:
  FUN_4a0c6bf4(local_48);
  return;
}



// Address: 4a0f953c

int FUN_4a0f953c(int param_1,undefined4 param_2,int param_3,int param_4,undefined1 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_34 [20];
  
  iVar1 = FUN_4a0f0760(*(undefined4 *)(param_1 + 0x318));
  if ((iVar1 == 0) && (*(int *)(param_1 + 0x318) != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  switchD_4a11cc8c::default(uVar2,s_buying_at_non_home_house_4a0f963c);
  uVar2 = FUN_4a16c074(auStack_34,param_1 + 0x348);
  iVar1 = FUN_4a16ff5c(0xffffffff,uVar2,0);
  FUN_4a16c1a0(auStack_34);
  iVar4 = 0;
  switchD_4a11cc8c::default(iVar1 != -1,s_out_of_house_object_slots_4a0f9658);
  if (*(int *)(param_1 + 0x354) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x354) + 8);
  }
  *(short *)(iVar3 + iVar1 * 2) = (short)param_2;
  if (*(int *)(param_1 + 0x32c) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x32c) + 8);
  }
  *(char *)(iVar3 + iVar1) = (char)((uint)(param_3 << 3) >> 0x18);
  if (*(int *)(param_1 + 0x340) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x340) + 8);
  }
  *(char *)(iVar3 + iVar1) = (char)((uint)(param_4 << 3) >> 0x18);
  if (*(int *)(param_1 + 0x368) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x368) + 8);
  }
  *(undefined1 *)(iVar4 + iVar1) = param_5;
  uVar2 = FUN_4a0941ec();
  FUN_4a094864(uVar2,param_2);
  return iVar1;
}



// Address: 4a0f9674

void FUN_4a0f9674(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_64 [20];
  undefined1 auStack_50 [20];
  undefined1 auStack_3c [20];
  undefined *local_28;
  
  *(undefined4 *)(param_1 + 0x548) = 0;
  *(undefined4 *)(param_1 + 0x530) = 0;
  puVar3 = (undefined4 *)FUN_4a0c6bc0(auStack_3c);
  puVar1 = PTR_PTR_4a0f9a44;
  *puVar3 = PTR_PTR_4a0f9a44;
  puVar3[2] = *(undefined4 *)(param_1 + 0x554);
  piVar6 = *(int **)(param_1 + 0x558);
  puVar3[3] = piVar6;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))();
  }
  iVar9 = 0;
  *puVar3 = PTR_PTR_4a0f9a48;
  if (0 < (int)puVar3[2]) {
    do {
      if (puVar3[3] == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(puVar3[3] + 8);
      }
      iVar4 = FUN_4a16c074(auStack_64,iVar4 + iVar9 * 0x14);
      iVar7 = 0;
      if (0 < *(int *)(iVar4 + 8)) {
        do {
          if (*(int *)(iVar4 + 0xc) == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)(*(int *)(iVar4 + 0xc) + 8);
          }
          *(undefined2 *)(iVar8 + iVar7 * 2) = 0;
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar4 + 8));
      }
      FUN_4a16c1a0(auStack_64);
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)puVar3[2]);
  }
  FUN_4a169024(auStack_3c);
  puVar3 = (undefined4 *)FUN_4a0c6bc0(auStack_50);
  *puVar3 = puVar1;
  puVar3[2] = *(undefined4 *)(param_1 + 0x57c);
  piVar6 = *(int **)(param_1 + 0x580);
  puVar3[3] = piVar6;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))();
  }
  puVar2 = PTR_PTR_4a0f9a50;
  iVar9 = 0;
  local_28 = PTR_PTR_4a0f9a4c;
  *puVar3 = PTR_PTR_4a0f9a4c;
  if (0 < (int)puVar3[2]) {
    do {
      if (puVar3[3] == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(puVar3[3] + 8);
      }
      iVar4 = iVar4 + iVar9 * 0x14;
      puVar5 = (undefined4 *)FUN_4a0c6bc0(auStack_64);
      *puVar5 = puVar1;
      puVar5[2] = *(undefined4 *)(iVar4 + 8);
      piVar6 = *(int **)(iVar4 + 0xc);
      puVar5[3] = piVar6;
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0xc))();
      }
      *puVar5 = puVar2;
      iVar4 = 0;
      if (0 < (int)puVar5[2]) {
        do {
          if (puVar5[3] == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(puVar5[3] + 8);
          }
          *(undefined4 *)(iVar7 + iVar4 * 4) = 0;
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)puVar5[2]);
      }
      FUN_4a16bef4(auStack_64);
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)puVar3[2]);
  }
  FUN_4a168e44(auStack_50);
  puVar3 = (undefined4 *)FUN_4a0c6bc0(auStack_50);
  *puVar3 = puVar1;
  puVar3[2] = *(undefined4 *)(param_1 + 0x568);
  piVar6 = *(int **)(param_1 + 0x56c);
  puVar3[3] = piVar6;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))();
  }
  iVar9 = 0;
  *puVar3 = local_28;
  if (0 < (int)puVar3[2]) {
    do {
      if (puVar3[3] == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(puVar3[3] + 8);
      }
      iVar4 = iVar4 + iVar9 * 0x14;
      puVar5 = (undefined4 *)FUN_4a0c6bc0(auStack_64);
      *puVar5 = puVar1;
      puVar5[2] = *(undefined4 *)(iVar4 + 8);
      piVar6 = *(int **)(iVar4 + 0xc);
      puVar5[3] = piVar6;
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0xc))();
      }
      *puVar5 = puVar2;
      iVar4 = 0;
      if (0 < (int)puVar5[2]) {
        do {
          if (puVar5[3] == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(puVar5[3] + 8);
          }
          *(undefined4 *)(iVar7 + iVar4 * 4) = 0;
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)puVar5[2]);
      }
      FUN_4a16bef4(auStack_64);
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)puVar3[2]);
  }
  FUN_4a168e44(auStack_50);
  puVar3 = (undefined4 *)FUN_4a0c6bc0(auStack_50);
  *puVar3 = puVar1;
  puVar3[2] = *(undefined4 *)(param_1 + 0x590);
  piVar6 = *(int **)(param_1 + 0x594);
  puVar3[3] = piVar6;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))();
  }
  iVar9 = 0;
  *puVar3 = local_28;
  if (0 < (int)puVar3[2]) {
    do {
      if (puVar3[3] == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(puVar3[3] + 8);
      }
      iVar4 = iVar4 + iVar9 * 0x14;
      puVar5 = (undefined4 *)FUN_4a0c6bc0(auStack_64);
      *puVar5 = puVar1;
      puVar5[2] = *(undefined4 *)(iVar4 + 8);
      piVar6 = *(int **)(iVar4 + 0xc);
      puVar5[3] = piVar6;
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0xc))();
      }
      *puVar5 = puVar2;
      iVar4 = 0;
      if (0 < (int)puVar5[2]) {
        do {
          if (puVar5[3] == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(puVar5[3] + 8);
          }
          *(undefined4 *)(iVar7 + iVar4 * 4) = 0;
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)puVar5[2]);
      }
      FUN_4a16bef4(auStack_64);
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)puVar3[2]);
  }
  FUN_4a168e44(auStack_50);
  return;
}



// Address: 4a0f9a54

int FUN_4a0f9a54(undefined4 *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  puVar1 = PTR_PTR_4a0f9f48;
  *param_1 = PTR_PTR_4a0f9f48;
  param_1[2] = puVar1 + 0x20;
  param_1[4] = puVar1 + 0x40;
  param_1[5] = puVar1 + 0x50;
  param_1[6] = puVar1 + 0x60;
  param_1[3] = puVar1 + 0x30;
  param_1[1] = puVar1 + 0x10;
  param_1[7] = param_2;
  iVar4 = FUN_4a16b934(param_1 + 8,4);
  iVar4 = FUN_4a16be24(iVar4 + 0x14,4);
  puVar5 = (undefined4 *)FUN_4a0c6bc0(iVar4 + 0x14);
  puVar1 = PTR_PTR_4a0f9f4c;
  puVar5[2] = 0;
  *puVar5 = puVar1;
  puVar5[3] = 0;
  puVar5 = (undefined4 *)FUN_4a0c6bc0(puVar5 + 5);
  puVar1 = PTR_PTR_4a0f9f50;
  puVar5[2] = 0;
  *puVar5 = puVar1;
  puVar5[3] = 0;
  puVar5 = (undefined4 *)FUN_4a0c6bc0(puVar5 + 5);
  puVar5[2] = 0;
  *puVar5 = puVar1;
  puVar5[3] = 0;
  iVar4 = FUN_4a168f18(puVar5 + 5,0);
  iVar4 = FUN_4a168f18(iVar4 + 0x14,0);
  iVar4 = FUN_4a168d38(iVar4 + 0x14,0);
  iVar4 = FUN_4a167fc8(iVar4 + 0x14,0);
  iVar4 = FUN_4a16c0cc(iVar4 + 0x14,0);
  iVar4 = FUN_4a16c0cc(iVar4 + 0x14,0);
  iVar4 = FUN_4a168d38(iVar4 + 0x14,0);
  iVar4 = FUN_4a16c0cc(iVar4 + 0x14,0);
  iVar4 = FUN_4a16c0cc(iVar4 + 0x14,0);
  iVar4 = FUN_4a168d38(iVar4 + 0x14,0);
  puVar5 = (undefined4 *)FUN_4a0c6bc0(iVar4 + 0x14);
  puVar2 = PTR_PTR_4a0f9f54;
  puVar5[2] = 0;
  *puVar5 = puVar2;
  puVar5[3] = 0;
  iVar4 = FUN_4a16b5f8(puVar5 + 5,0);
  iVar4 = FUN_4a16b5f8(iVar4 + 0x14,0);
  iVar4 = FUN_4a168f18(iVar4 + 0x14,0);
  iVar4 = FUN_4a16c0cc(iVar4 + 0x14,0);
  iVar4 = FUN_4a168a84(iVar4 + 0x14,0);
  iVar4 = FUN_4a168a84(iVar4 + 0x14,0);
  iVar4 = FUN_4a168a84(iVar4 + 0x14,0);
  iVar4 = FUN_4a168a84(iVar4 + 0x14,0);
  iVar4 = FUN_4a168a84(iVar4 + 0x14,0);
  iVar4 = FUN_4a168a84(iVar4 + 0x14,0);
  iVar4 = FUN_4a168a84(iVar4 + 0x14,0);
  iVar4 = FUN_4a168a84(iVar4 + 0x14,0);
  iVar4 = FUN_4a168a84(iVar4 + 0x14,0);
  iVar4 = FUN_4a168f18(iVar4 + 0x14,0);
  iVar4 = FUN_4a168a84(iVar4 + 0x14,0);
  iVar4 = FUN_4a168a84(iVar4 + 0x14,0);
  iVar4 = FUN_4a168a84(iVar4 + 0x14,0);
  iVar4 = FUN_4a168f18(iVar4 + 0x14,0);
  iVar4 = FUN_4a168a84(iVar4 + 0x14,0);
  iVar4 = FUN_4a168a84(iVar4 + 0x14,0);
  iVar4 = FUN_4a168f18(iVar4 + 0x14,0);
  iVar4 = FUN_4a168a84(iVar4 + 0x14,0);
  *(undefined4 *)(iVar4 + 0x14) = 0;
  *(undefined1 *)(iVar4 + 0x18) = 0;
  iVar4 = FUN_4a16b5f8(iVar4 + 0x1c,0);
  iVar4 = FUN_4a16b5f8(iVar4 + 0x14,0);
  iVar4 = FUN_4a16c0cc(iVar4 + 0x14,0);
  iVar4 = FUN_4a16b5f8(iVar4 + 0x14,0);
  puVar5 = (undefined4 *)FUN_4a0c6bc0(iVar4 + 0x14);
  puVar2 = PTR_PTR_4a0f9f58;
  puVar5[2] = 0;
  *puVar5 = puVar2;
  puVar5[3] = 0;
  puVar5 = (undefined4 *)FUN_4a0c6bc0(puVar5 + 5);
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = puVar2;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  iVar4 = FUN_4a16c0cc(puVar5 + 0xd,0);
  iVar4 = FUN_4a169ca8(iVar4 + 0x14,0);
  puVar5 = (undefined4 *)FUN_4a0c6bc0(iVar4 + 0x14);
  *puVar5 = PTR_PTR_4a0f9f5c;
  puVar5[2] = 10;
  puVar5[4] = 0;
  puVar5[3] = 10;
  puVar5[5] = 0;
  iVar4 = thunk_FUN_4a161570(0x28);
  puVar5[5] = iVar4;
  if (iVar4 != 0) {
    iVar4 = 0;
    if (0 < (int)puVar5[4]) {
      do {
        iVar6 = iVar4 + 1;
        *(undefined4 *)(puVar5[5] + iVar4 * 4) = *(undefined4 *)(iVar4 * 4);
        iVar4 = iVar6;
      } while (iVar6 < (int)puVar5[4]);
    }
    thunk_FUN_4a161530(0);
  }
  iVar4 = puVar5[4];
  if ((int)puVar5[4] < (int)puVar5[3]) {
    do {
      iVar6 = iVar4 + 1;
      *(undefined4 *)(puVar5[5] + iVar4 * 4) = 0;
      iVar4 = iVar6;
    } while (iVar6 < (int)puVar5[3]);
  }
  puVar5 = (undefined4 *)FUN_4a0c6bc0(puVar5 + 6);
  puVar2 = PTR_PTR_4a0f9f60;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = puVar2;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  iVar4 = FUN_4a06fa68(puVar5 + 10,param_2 + 0x1f8);
  *(undefined4 *)(iVar4 + 0x2c) = 0;
  *(undefined1 *)(iVar4 + 0x30) = 0;
  *(undefined4 *)(iVar4 + 0x34) = 0;
  *(undefined4 *)(iVar4 + 0x38) = 0;
  *(undefined1 *)(iVar4 + 0x3c) = 0;
  *(undefined4 *)(iVar4 + 0x40) = 0;
  *(undefined4 *)(iVar4 + 0x44) = 0;
  *(undefined4 *)(iVar4 + 0x48) = 0;
  *(undefined4 *)(iVar4 + 0x4c) = 0;
  *(undefined4 *)(iVar4 + 0x50) = 0;
  *(undefined4 *)(iVar4 + 0x54) = 0;
  *(undefined4 *)(iVar4 + 0x58) = 0;
  *(undefined4 *)(iVar4 + 0x5c) = 0;
  *(undefined4 *)(iVar4 + 0x60) = 0;
  *(undefined4 *)(iVar4 + 100) = 0;
  uVar3 = DAT_4a0f9f64;
  *(undefined4 *)(iVar4 + 0x68) = 0;
  *(undefined4 *)(iVar4 + 0x6c) = 0;
  *(undefined4 *)(iVar4 + 0x70) = uVar3;
  puVar5 = (undefined4 *)FUN_4a0c6bc0(iVar4 + 0x7c);
  puVar5[2] = 0;
  *puVar5 = puVar1;
  puVar5[3] = 0;
  puVar5 = (undefined4 *)FUN_4a0c6bc0(puVar5 + 5);
  puVar5[2] = 0;
  *puVar5 = puVar1;
  puVar5[3] = 0;
  puVar5 = (undefined4 *)FUN_4a0c6bc0(puVar5 + 5);
  puVar5[2] = 0;
  *puVar5 = puVar1;
  puVar5[3] = 0;
  puVar5 = (undefined4 *)FUN_4a0c6bc0(puVar5 + 5);
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = puVar1;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  iVar4 = FUN_4a16be24(puVar5 + 9,0);
  *(undefined4 *)(iVar4 + 0x14) = 0;
  *(undefined4 *)(iVar4 + 0x18) = 0;
  *(undefined4 *)(iVar4 + 0x1c) = 0;
  iVar4 = FUN_4a16c0cc(iVar4 + 0x20,0);
  *(undefined4 *)(iVar4 + 0x14) = 0;
  iVar4 = FUN_4a16c0cc(iVar4 + 0x18,0);
  *(undefined4 *)(iVar4 + 0x14) = 0;
  iVar4 = FUN_4a168f18(iVar4 + 0x18,0);
  iVar4 = FUN_4a168d38(iVar4 + 0x14,0);
  iVar4 = FUN_4a168d38(iVar4 + 0x14,0);
  iVar4 = FUN_4a168d38(iVar4 + 0x14,0);
  iVar4 = FUN_4a16c0cc(iVar4 + 0x14,0);
  *(undefined4 *)(iVar4 + 0x14) = 0;
  FUN_4a0f7de4(iVar4 + -0x59c);
  return iVar4 + -0x59c;
}



// Address: 4a0f9f80

int FUN_4a0f9f80(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  puVar1 = PTR_PTR_4a0fa4ec;
  *param_1 = PTR_PTR_4a0fa4ec;
  param_1[2] = puVar1 + 0x20;
  param_1[4] = puVar1 + 0x40;
  param_1[5] = puVar1 + 0x50;
  param_1[6] = puVar1 + 0x60;
  param_1[3] = puVar1 + 0x30;
  param_1[1] = puVar1 + 0x10;
  FUN_4a0f6d2c(param_1);
  piVar5 = (int *)param_1[0x118];
  if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  param_1[0x118] = 0;
  piVar5 = (int *)param_1[0x119];
  if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  param_1[0x119] = 0;
  piVar5 = (int *)param_1[0x11a];
  if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  param_1[0x11a] = 0;
  piVar5 = (int *)param_1[0x11b];
  if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  param_1[0x11b] = 0;
  iVar2 = FUN_4a16c1a0(param_1 + 0x167);
  iVar2 = FUN_4a168e44(iVar2 + -0x14);
  iVar2 = FUN_4a168e44(iVar2 + -0x14);
  iVar2 = FUN_4a168e44(iVar2 + -0x14);
  iVar2 = FUN_4a169024(iVar2 + -0x14);
  iVar2 = FUN_4a16c1a0(iVar2 + -0x18);
  iVar2 = FUN_4a16c1a0(iVar2 + -0x18);
  iVar2 = FUN_4a16bef4(iVar2 + -0x20);
  iVar2 = FUN_4a16c1a0(iVar2 + -0x24);
  iVar2 = FUN_4a16c1a0(iVar2 + -0x14);
  iVar2 = FUN_4a16c1a0(iVar2 + -0x14);
  iVar2 = FUN_4a16c1a0(iVar2 + -0x14);
  iVar2 = FUN_4a06fb30(iVar2 + -0x7c);
  puVar6 = (undefined4 *)(iVar2 + -0x28);
  *puVar6 = PTR_PTR_4a0fa4f0;
  iVar4 = *(int *)(iVar2 + -0x20);
  iVar2 = FUN_4a0bcc84(puVar6);
  if (iVar2 != 0) {
    iVar3 = 0;
    if (0 < iVar4) {
      do {
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
      if (iVar2 == 0) goto LAB_4a0fa17c;
    }
    FUN_4a14f21c();
  }
LAB_4a0fa17c:
  iVar2 = FUN_4a0c6bf4(puVar6);
  iVar4 = 0;
  *(undefined4 *)(iVar2 + -0x18) = PTR_PTR_4a0fa4f4;
  if (0 < *(int *)(iVar2 + -8)) {
    do {
      piVar5 = *(int **)(*(int *)(iVar2 + -4) + iVar4 * 4);
      *(undefined4 *)(*(int *)(iVar2 + -4) + iVar4 * 4) = 0;
      if ((piVar5 != (int *)0x0) && (iVar3 = (**(code **)(*piVar5 + 8))(piVar5), iVar3 != 0)) {
        (**(code **)(*piVar5 + 4))(piVar5);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(iVar2 + -8));
  }
  *(undefined4 *)(iVar2 + -8) = 0;
  thunk_FUN_4a161530(*(undefined4 *)(iVar2 + -4));
  iVar2 = FUN_4a0c6bf4((undefined4 *)(iVar2 + -0x18));
  puVar6 = (undefined4 *)(iVar2 + -0x14);
  *puVar6 = PTR_PTR_4a0fa4f8;
  iVar4 = *(int *)(iVar2 + -0xc);
  iVar2 = FUN_4a0bcc84(puVar6);
  if (iVar2 != 0) {
    iVar3 = 0;
    if (0 < iVar4) {
      do {
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
      if (iVar2 == 0) goto LAB_4a0fa24c;
    }
    FUN_4a14f21c();
  }
LAB_4a0fa24c:
  iVar2 = FUN_4a0c6bf4(puVar6);
  iVar2 = FUN_4a16c1a0(iVar2 + -0x14);
  iVar2 = FUN_4a16b6c0(iVar2 + -0x34);
  iVar2 = FUN_4a16b6c0(iVar2 + -0x14);
  iVar2 = FUN_4a16b6c0(iVar2 + -0x14);
  iVar2 = FUN_4a16c1a0(iVar2 + -0x14);
  iVar2 = FUN_4a16b6c0(iVar2 + -0x14);
  iVar2 = FUN_4a16b6c0(iVar2 + -0x14);
  iVar2 = FUN_4a168b90(iVar2 + -0x1c);
  iVar2 = FUN_4a169024(iVar2 + -0x14);
  iVar2 = FUN_4a168b90(iVar2 + -0x14);
  iVar2 = FUN_4a168b90(iVar2 + -0x14);
  iVar2 = FUN_4a169024(iVar2 + -0x14);
  iVar2 = FUN_4a168b90(iVar2 + -0x14);
  iVar2 = FUN_4a168b90(iVar2 + -0x14);
  iVar2 = FUN_4a168b90(iVar2 + -0x14);
  iVar2 = FUN_4a169024(iVar2 + -0x14);
  iVar2 = FUN_4a168b90(iVar2 + -0x14);
  iVar2 = FUN_4a168b90(iVar2 + -0x14);
  iVar2 = FUN_4a168b90(iVar2 + -0x14);
  iVar2 = FUN_4a168b90(iVar2 + -0x14);
  iVar2 = FUN_4a168b90(iVar2 + -0x14);
  iVar2 = FUN_4a168b90(iVar2 + -0x14);
  iVar2 = FUN_4a168b90(iVar2 + -0x14);
  iVar2 = FUN_4a168b90(iVar2 + -0x14);
  iVar2 = FUN_4a168b90(iVar2 + -0x14);
  iVar2 = FUN_4a16c1a0(iVar2 + -0x14);
  iVar2 = FUN_4a169024(iVar2 + -0x14);
  iVar2 = FUN_4a16b6c0(iVar2 + -0x14);
  iVar2 = FUN_4a16b6c0(iVar2 + -0x14);
  puVar6 = (undefined4 *)(iVar2 + -0x14);
  *puVar6 = PTR_PTR_4a0fa4fc;
  iVar4 = *(int *)(iVar2 + -0xc);
  iVar2 = FUN_4a0bcc84(puVar6);
  if (iVar2 != 0) {
    iVar3 = 0;
    if (0 < iVar4) {
      do {
        (*(code *)**(undefined4 **)(iVar2 + iVar3 * 0x1c))();
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
      if (iVar2 == 0) goto LAB_4a0fa39c;
    }
    FUN_4a14f21c(iVar2);
  }
LAB_4a0fa39c:
  iVar2 = FUN_4a0c6bf4(puVar6);
  iVar2 = FUN_4a168e44(iVar2 + -0x14);
  iVar2 = FUN_4a16c1a0(iVar2 + -0x14);
  iVar2 = FUN_4a16c1a0(iVar2 + -0x14);
  iVar2 = FUN_4a168e44(iVar2 + -0x14);
  iVar2 = FUN_4a16c1a0(iVar2 + -0x14);
  iVar2 = FUN_4a16c1a0(iVar2 + -0x14);
  puVar6 = (undefined4 *)(iVar2 + -0x14);
  *puVar6 = PTR_PTR_4a0fa500;
  iVar4 = *(int *)(iVar2 + -0xc);
  iVar2 = FUN_4a0bcc84(puVar6);
  if (iVar2 != 0) {
    iVar3 = 0;
    if (0 < iVar4) {
      do {
        (*(code *)**(undefined4 **)(iVar2 + iVar3 * 0x14))();
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
      if (iVar2 == 0) goto LAB_4a0fa434;
    }
    FUN_4a14f21c(iVar2);
  }
LAB_4a0fa434:
  iVar2 = FUN_4a0c6bf4(puVar6);
  iVar2 = FUN_4a168e44(iVar2 + -0x14);
  iVar2 = FUN_4a169024(iVar2 + -0x14);
  iVar2 = FUN_4a169024(iVar2 + -0x14);
  iVar2 = FUN_4a16c1a0(iVar2 + -0x14);
  iVar2 = FUN_4a16c1a0(iVar2 + -0x14);
  puVar6 = (undefined4 *)(iVar2 + -0x14);
  *puVar6 = PTR_PTR_4a0fa504;
  iVar4 = *(int *)(iVar2 + -0xc);
  iVar2 = FUN_4a0bcc84(puVar6);
  if (iVar2 != 0) {
    iVar3 = 0;
    if (0 < iVar4) {
      do {
        (*(code *)**(undefined4 **)(iVar2 + iVar3 * 100))();
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
      if (iVar2 == 0) goto LAB_4a0fa4c8;
    }
    FUN_4a14f21c(iVar2);
  }
LAB_4a0fa4c8:
  iVar2 = FUN_4a0c6bf4(puVar6);
  iVar2 = FUN_4a16bef4(iVar2 + -0x14);
  iVar2 = FUN_4a16ba04(iVar2 + -0x14);
  return iVar2 + -0x20;
}



// Address: 4a0fa670

/* WARNING: Removing unreachable block (ram,0x4a0faea0) */
/* WARNING: Removing unreachable block (ram,0x4a0fae9c) */
/* WARNING: Removing unreachable block (ram,0x4a0faebc) */
/* WARNING: Removing unreachable block (ram,0x4a0faf08) */

void FUN_4a0fa670(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x2c) = param_2;
  if (param_2 == 0) {
    iVar2 = FUN_4a134aa8(param_1);
    if (*(int *)(iVar2 + 0x40) == param_1) {
      *(undefined4 *)(iVar2 + 0x40) = 0;
    }
    return;
  }
  if (param_2 == 1 || param_2 == 2) {
    iVar2 = FUN_4a134aa8(param_1);
    if (*(int *)(iVar2 + 0x40) == 0) {
      *(int *)(iVar2 + 0x40) = param_1;
    }
    return;
  }
  if (param_2 == 3) {
    uVar1 = FUN_4a134aa8(param_1);
    FUN_4a0cd790(uVar1,param_1);
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
                    /* WARNING: Could not recover jumptable at 0x4a0faeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)switchD_4a0faeb8::switchdataD_4a0faec0)();
    return;
  }
  return;
}



// Address: 4a0fa6e8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0fa6e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_5 != 0) {
    FUN_4a134a98(param_1,1);
  }
  *(undefined4 *)(param_1 + 0x34) = param_3;
  *(undefined4 *)(param_1 + 0x38) = param_4;
  if ((*(int *)(param_1 + 0x2c) == 1) ||
     ((*(int *)(param_1 + 0x2c) == 3 && (iVar1 = FUN_4a0fb0c0(param_1 + 0x40), 0x3f000000 < iVar1)))
     ) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 != -1) {
    uVar2 = FUN_4a171fac(param_4);
    uVar3 = FUN_4a171fac(param_3);
    FUN_4a09f664(param_2,iVar1,uVar3,uVar2);
  }
  if (param_5 == 0) {
    iVar1 = *(int *)(param_1 + 0x60);
    if (iVar1 == -1) goto LAB_4a0fa808;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x5c);
    if ((iVar1 == -1) || ((*(uint *)(param_1 + 0x54) & uVar4) != 0)) goto LAB_4a0fa808;
  }
  uVar2 = FUN_4a171fac(param_4);
  uVar3 = FUN_4a171fac(param_3);
  FUN_4a09f664(param_2,iVar1,uVar3,uVar2);
LAB_4a0fa808:
  if (uVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0fa814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  if (iVar1 == -1) {
    iVar1 = 0x78;
  }
  uVar2 = FUN_4a171fac(param_4);
  uVar2 = FUN_4a171a94(uVar2,*(undefined4 *)(param_1 + 0x7c));
  uVar3 = FUN_4a171fac(param_3);
  uVar3 = FUN_4a171a94(uVar3,*(undefined4 *)(param_1 + 0x78));
  FUN_4a09f664(param_2,iVar1,uVar3,uVar2);
  return;
}



// Address: 4a0fa880

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0fa880(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_20 [12];
  int iStack_14;
  
  if (*(int *)(param_1 + 0x2c) != 3) {
    return;
  }
  FUN_4a0faf18(param_1 + 0x40);
  if ((*(uint *)(param_1 + 0x4c) & 2) == 0) {
    FUN_4a0fa670(param_1,0);
    piVar3 = (int *)FUN_4a134aa8(param_1);
    uVar5 = *(undefined4 *)(param_1 + 0x50);
    FUN_4a16be24(auStack_20,3);
    iVar4 = 0;
    if (iStack_14 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iStack_14 + 8);
    }
    *(undefined4 *)(iVar1 + 4) = 0;
    if (iStack_14 == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = *(undefined4 **)(iStack_14 + 8);
    }
    *puVar2 = uVar5;
    if (iStack_14 != 0) {
      iVar4 = *(int *)(iStack_14 + 8);
    }
    *(undefined4 *)(iVar4 + 8) = 0xffffffff;
    (**(code **)(*piVar3 + 0x20))(piVar3,0xb,auStack_20);
    FUN_4a16bef4(auStack_20);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a0fa8ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a0fa8d0

int FUN_4a0fa8d0(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  puVar2 = (undefined4 *)FUN_4a134ac8();
  puVar1 = PTR_PTR_4a0facac;
  *puVar2 = PTR_PTR_4a0facac;
  puVar2[4] = puVar1 + 0x50;
  puVar2[6] = puVar1 + 0x70;
  puVar2[7] = puVar1 + 0x80;
  puVar2[8] = puVar1 + 0x90;
  puVar2[5] = puVar1 + 0x60;
  puVar2[3] = puVar1 + 0x40;
  puVar2[2] = puVar1 + 0x30;
  puVar2[9] = puVar1 + 0xa0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0xffffffff;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0x23;
  iVar3 = FUN_4a0fb394(puVar2 + 0x10);
  *(int *)(iVar3 + 0x10) = param_2;
  *(undefined4 *)(iVar3 + 0x14) = 0;
  *(undefined4 *)(iVar3 + 0x18) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x1c) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x20) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x24) = 0x3f800000;
  *(undefined4 *)(iVar3 + 0x2c) = 0xffffffff;
  iVar6 = iVar3 + -0x40;
  *(undefined4 *)(iVar3 + 0x28) = 0x3f800000;
  *(undefined4 *)(iVar3 + 0x30) = 0x3f800000;
  *(undefined4 *)(iVar3 + 0x34) = 0x3f000000;
  *(undefined4 *)(iVar3 + 0x38) = 0;
  *(undefined4 *)(iVar3 + 0x3c) = 0;
  *(undefined4 *)(iVar3 + 0x40) = 0xffffffff;
  puVar1 = PTR_DAT_4a0facb0;
  iVar4 = FUN_4a0bc1f8(*(undefined4 *)PTR_DAT_4a0facb0);
  if ((iVar4 == 400) || (iVar4 = FUN_4a0bc1f8(*(undefined4 *)puVar1), iVar4 == 0x140)) {
    *(int *)(iVar3 + -4) = *(int *)(iVar3 + -4) + 10;
  }
  uVar5 = DAT_4a0facb4;
  if (param_2 == 0x4000) {
    *(undefined4 *)(iVar3 + 0x1c) = 0xc6;
    goto LAB_4a0fac44;
  }
  if (0x4000 < param_2) {
    if (param_2 == 0x400000) {
      *(undefined4 *)(iVar3 + 0x1c) = 0xf7;
      *(uint *)(iVar3 + 0x14) = *(uint *)(iVar3 + 0x14) | 1;
      *(undefined4 *)(iVar3 + 0x20) = 0xf7;
      *(undefined4 *)(iVar3 + 0x40) = 0x15;
      *(undefined4 *)(iVar3 + 0x2c) = 0xf8;
      *(undefined4 *)(iVar3 + 0x34) = 0x3f800000;
LAB_4a0fac84:
      *(undefined4 *)(iVar3 + -4) = 0x32;
      return iVar6;
    }
    if (param_2 < 0x400001) {
      if (param_2 == 0x40000) {
        uVar5 = 0x13f;
        *(undefined4 *)(iVar3 + 0x30) = DAT_4a0facb4;
      }
      else {
        if (0x40000 < param_2) {
          if (param_2 != 0x80000) {
            if (param_2 == 0x100000) {
              *(undefined4 *)(iVar3 + 0x1c) = 0xb2;
              goto LAB_4a0fac54;
            }
            if (param_2 != 0x200000) {
              return iVar6;
            }
            *(undefined4 *)(iVar3 + 0x1c) = 0xa3;
            *(undefined4 *)(iVar3 + 0x40) = 0x15;
            *(undefined4 *)(iVar3 + 0x38) = 0xc0000000;
            *(undefined4 *)(iVar3 + 0x3c) = 0xc0400000;
            *(undefined4 *)(iVar3 + 0x20) = 0xa3;
            *(undefined4 *)(iVar3 + 0x30) = uVar5;
            goto LAB_4a0fac84;
          }
          goto LAB_4a0fac0c;
        }
        if (param_2 == 0x8000) {
          uVar5 = 0x1b8;
          *(undefined4 *)(iVar3 + 0x30) = DAT_4a0facb4;
        }
        else if (param_2 == 0x10000) {
          uVar5 = 0x13d;
          *(undefined4 *)(iVar3 + 0x30) = DAT_4a0facb4;
        }
        else {
          if (param_2 != 0x20000) {
            return iVar6;
          }
          uVar5 = 0x13e;
          *(undefined4 *)(iVar3 + 0x30) = DAT_4a0facb4;
        }
      }
    }
    else {
      if (param_2 == 0x4000000) {
        *(undefined4 *)(iVar3 + 0x24) = 0xbf800000;
        *(undefined4 *)(iVar3 + 0x18) = 0x76;
        *(undefined4 *)(iVar3 + 0x1c) = 0x7b;
        goto LAB_4a0fac44;
      }
      if (param_2 < 0x4000001) {
        if (param_2 != 0x800000) {
          if (param_2 == 0x1000000) {
            *(undefined4 *)(iVar3 + 0x18) = 0x1b;
            *(undefined4 *)(iVar3 + 0x1c) = 0x19;
          }
          else {
            if (param_2 != 0x2000000) {
              return iVar6;
            }
            *(undefined4 *)(iVar3 + 0x18) = 0x1b;
            *(undefined4 *)(iVar3 + 0x1c) = 0x1a;
          }
          goto LAB_4a0fac44;
        }
        uVar5 = 0xf6;
      }
      else {
        if (param_2 == 0x8000000) {
          *(undefined4 *)(iVar3 + 0x18) = 0x77;
          *(undefined4 *)(iVar3 + 0x1c) = 0x7b;
          goto LAB_4a0fac44;
        }
        if (param_2 != 0x10000000) {
          return iVar6;
        }
        uVar5 = 0xf5;
      }
    }
    *(undefined4 *)(iVar3 + 0x1c) = uVar5;
    goto LAB_4a0fac44;
  }
  if (param_2 == 0x40) {
    *(undefined4 *)(iVar3 + 0x1c) = 0x7c;
    *(undefined4 *)(iVar3 + 0x18) = 0x79;
    *(undefined4 *)(iVar3 + 0x20) = 0x7c;
    goto LAB_4a0fac18;
  }
  if (param_2 < 0x41) {
    if (param_2 == 4) {
LAB_4a0fac0c:
      *(undefined4 *)(iVar3 + 0x18) = 0x77;
      *(undefined4 *)(iVar3 + 0x1c) = 0x7a;
      *(undefined4 *)(iVar3 + 0x20) = 0x7a;
LAB_4a0fac18:
      *(undefined4 *)(iVar3 + 0x40) = 0x14;
      return iVar6;
    }
    if (param_2 < 5) {
      if (param_2 == 0) {
        return iVar6;
      }
      if (param_2 == 1) {
        *(undefined4 *)(iVar3 + 0x1c) = 0x17d;
        *(undefined4 *)(iVar3 + 0x20) = 0x17d;
LAB_4a0fac54:
        *(undefined4 *)(iVar3 + 0x40) = 0x12;
        return iVar6;
      }
      if (param_2 != 2) {
        return iVar6;
      }
      *(undefined4 *)(iVar3 + 0x18) = 0x77;
      *(undefined4 *)(iVar3 + 0x1c) = 0x7b;
      *(undefined4 *)(iVar3 + 0x20) = 0x7b;
      goto LAB_4a0fac18;
    }
    if (param_2 != 8) {
      if (param_2 == 0x10) {
        *(undefined4 *)(iVar3 + 0x18) = 0x77;
        *(undefined4 *)(iVar3 + 0x1c) = 0x7a;
        goto LAB_4a0fac18;
      }
      if (param_2 != 0x20) {
        return iVar6;
      }
    }
LAB_4a0faac0:
    *(undefined4 *)(iVar3 + 0x18) = 0x76;
    *(undefined4 *)(iVar3 + 0x1c) = 0x7d;
    *(undefined4 *)(iVar3 + 0x20) = 0x7d;
  }
  else {
    if (param_2 == 0x400) {
      *(undefined4 *)(iVar3 + 0x1c) = 0xc0;
      uVar5 = 0xc2;
    }
    else {
      if (0x400 < param_2) {
        if (param_2 == 0x800) {
          *(undefined4 *)(iVar3 + 0x1c) = 0xa2;
          *(undefined4 *)(iVar3 + 0x40) = 0x15;
          *(undefined4 *)(iVar3 + 0x20) = 0xa2;
          return iVar6;
        }
        if (param_2 == 0x1000) {
          *(undefined4 *)(iVar3 + 0x1c) = 0x7a;
          *(undefined4 *)(iVar3 + 0x18) = 0x79;
          *(undefined4 *)(iVar3 + 0x40) = 0x14;
          *(undefined4 *)(iVar3 + 0x20) = 0x7a;
          return iVar6;
        }
        if (param_2 != 0x2000) {
          return iVar6;
        }
        goto LAB_4a0faac0;
      }
      if (param_2 == 0x80) goto LAB_4a0fac18;
      if (param_2 == 0x100) {
        *(undefined4 *)(iVar3 + 0x1c) = 0xc4;
        *(undefined4 *)(iVar3 + 0x20) = 0xc5;
        goto LAB_4a0fac44;
      }
      if (param_2 != 0x200) {
        return iVar6;
      }
      *(undefined4 *)(iVar3 + 0x1c) = 0xc1;
      uVar5 = 0xc3;
    }
    *(undefined4 *)(iVar3 + 0x20) = uVar5;
  }
LAB_4a0fac44:
  *(undefined4 *)(iVar3 + 0x40) = 0x15;
  return iVar6;
}



// Address: 4a0facd4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_4a0facd4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  uVar1 = thunk_FUN_4a161570(0x14);
  uVar1 = FUN_4a0c707c(uVar1,&DAT_4a0fad4c);
  iVar2 = FUN_4a13e1c4(*(undefined4 *)(param_1 + 8),uVar1);
  if (iVar2 == 0) {
    uVar1 = thunk_FUN_4a161570(0x14);
    uVar1 = FUN_4a0c707c(uVar1,&DAT_4a0fad50);
    iVar2 = FUN_4a13e1c4(*(undefined4 *)(param_1 + 8),uVar1);
    if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0fad3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
  }
  return 1;
}



// Address: 4a0fad54

void FUN_4a0fad54(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}



// Address: 4a0fad5c

void FUN_4a0fad5c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}



// Address: 4a0fad64

undefined4 FUN_4a0fad64(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// Address: 4a0fad6c

void FUN_4a0fad6c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// Address: 4a0fad74

void FUN_4a0fad74(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



// Address: 4a0fad7c

undefined4 * FUN_4a0fad7c(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0fadcc;
  puVar1[2] = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))();
  }
  puVar1[3] = 0xffffffff;
  puVar1[4] = 0xffffffff;
  puVar1[5] = 0xffffffff;
  puVar1[6] = 0xffffffff;
  return puVar1;
}



// Address: 4a0fae38

void FUN_4a0fae38(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = PTR_PTR_4a0fae90;
  piVar2 = (int *)param_1[2];
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a0fae94

void FUN_4a0fae94(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = (param_3 & 0x10) >> 4;
  bVar2 = uVar1 == 0;
  if (bVar2) {
    uVar1 = *param_1;
  }
  if (bVar2 && uVar1 == param_2) goto switchD_4a0faeb8_default;
  *param_1 = param_2;
  param_1[1] = 0;
  switch(param_2) {
  case 0:
    uVar1 = 400;
    break;
  case 1:
    uVar1 = 300;
    break;
  case 2:
    uVar1 = 500;
    break;
  case 3:
  case 4:
  case 5:
    param_1[2] = 1000;
    goto switchD_4a0faeb8_default;
  case 6:
    uVar1 = 0x5dc;
    break;
  default:
    goto switchD_4a0faeb8_default;
  }
  param_1[2] = uVar1;
switchD_4a0faeb8_default:
  param_1[3] = param_3 & 4 | 3;
  return;
}



// Address: 4a0faf18

undefined4 FUN_4a0faf18(int param_1,int param_2)

{
  undefined4 extraout_r1;
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((uVar1 & 2) != 0) {
    param_2 = *(int *)(param_1 + 4) + param_2;
    *(int *)(param_1 + 4) = param_2;
    if (*(int *)(param_1 + 8) < param_2) {
      if ((uVar1 & 4) != 0) {
        FUN_4a0015f0();
        *(undefined4 *)(param_1 + 4) = extraout_r1;
        return 0;
      }
      *(uint *)(param_1 + 0xc) = uVar1 & 0xfffffffd;
      return 1;
    }
  }
  return 0;
}



// Address: 4a0faf80

void FUN_4a0faf80(int param_1,int param_2)

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



// Address: 4a0faf98

/* WARNING: Removing unreachable block (ram,0x4a1729d8) */
/* WARNING: Removing unreachable block (ram,0x4a1729ec) */
/* WARNING: Removing unreachable block (ram,0x4a1728bc) */
/* WARNING: Removing unreachable block (ram,0x4a1728ac) */
/* WARNING: Removing unreachable block (ram,0x4a1729e0) */
/* WARNING: Removing unreachable block (ram,0x4a17289c) */

ulonglong FUN_4a0faf98(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  longlong lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  
  uVar3 = FUN_4a171fac(*(undefined4 *)(param_1 + 8));
  uVar4 = FUN_4a171fac(*(undefined4 *)(param_1 + 4));
  iVar5 = FUN_4a171bb8(uVar4,uVar3);
  puVar2 = PTR_DAT_4a0fb05c;
  if (iVar5 < 0x3f000000) {
    uVar3 = FUN_4a17295c(iVar5,1);
    uVar4 = FUN_4a17295c(*(undefined4 *)puVar2,0xffffffff);
    FUN_4a17211c(uVar4,uVar3);
    uVar6 = FUN_4a002f08();
    uVar8 = uVar6 >> 7 & 0xff0000;
    bVar13 = uVar8 == 0;
    if (!bVar13) {
      param_4 = DAT_4a0fb060 >> 7 & 0xff0000;
      bVar13 = param_4 == 0;
    }
    if (!bVar13) {
      bVar13 = uVar8 == 0xff0000;
    }
    if (!bVar13) {
      bVar13 = param_4 == 0xff0000;
    }
    if (!bVar13) {
      if ((int)(uVar6 ^ DAT_4a0fb060) < 0) {
        uVar8 = uVar8 | 0x100;
      }
      uVar10 = DAT_4a0fb060 << 8;
      lVar1 = (ulonglong)(uVar10 | 0x80000000) * (ulonglong)(uVar6 << 8 | 0x80000000);
      uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
      iVar5 = uVar8 + param_4 + -0x800000;
      if ((int)lVar1 != 0) {
        uVar6 = uVar6 | 1;
      }
      bVar13 = 0x7fffffff < uVar6;
      if (!bVar13) {
        uVar6 = uVar6 << 1;
      }
      uVar9 = iVar5 + (iVar5 >> 0x10) + (uint)bVar13;
      bVar13 = (bool)((byte)(uVar6 >> 7) & 1);
      uVar8 = uVar6 >> 8;
      if (bVar13) {
        uVar8 = uVar6 & 0x7f;
      }
      uVar6 = (uVar6 >> 8) + uVar9 * 0x800000 + (uint)bVar13;
      if (uVar8 != 0) {
        bVar13 = 0xfbffff < uVar9;
      }
      if (!bVar13) {
        return CONCAT44(uVar10,uVar6) | 0x8000000000000000;
      }
      if (uVar8 == 0 || uVar9 == 0xfc0000) {
        uVar6 = uVar6 & 0xfffffffe;
      }
      if (uVar9 < 0xfc0000) {
        return CONCAT44(uVar10,uVar6) | 0x8000000000000000;
      }
      if (-1 < (int)(uVar9 - 0xfc0000)) {
        if ((int)((uVar6 + 0x800000) * 2) < 0) {
          return CONCAT44(uVar10,uVar6) | 0x8000000000000000;
        }
        if ((int)(uVar6 + 0xa0000000) < 0) {
          uVar3 = 0xff800000;
        }
        else {
          uVar3 = 0x7f800000;
        }
        return CONCAT44(uVar10,uVar3) | 0x8000000000000000;
      }
      if (-0x10000 < (int)(uVar9 ^ 0xff)) {
        return CONCAT44(uVar10,uVar6) | 0x8000000000000000;
      }
      uVar6 = uVar6 + 0x60000000;
      if ((int)(uVar9 ^ 0xff) < -0xffff) {
        uVar6 = uVar6 & 0x80000000;
      }
      return CONCAT44(uVar10,uVar6) | 0x8000000000000000;
    }
    if ((int)(uVar6 ^ DAT_4a0fb060) < 0) {
      uVar8 = uVar8 | 0x100;
    }
    uVar10 = DAT_4a0fb060 >> 7 & 0xff0000;
    if (uVar8 < 0xff0000 && uVar10 < 0xff0000) {
      return CONCAT44(DAT_4a0fb060,uVar6 ^ DAT_4a0fb060) & 0xffffffff80000000;
    }
    uVar6 = uVar6 * 2;
    if (uVar6 < 0xff000001) {
      uVar6 = DAT_4a0fb060 * 2;
    }
    uVar12 = 0x4000003;
    uVar9 = DAT_4a0fb060;
    if (uVar6 < 0xff000001) {
      if ((uVar8 & 0xff0000) != 0 && uVar10 != 0) {
        return CONCAT44(DAT_4a0fb060,(uVar8 | 0xff) << 0x17);
      }
      return CONCAT44(DAT_4a0fb060,DAT_4a172220);
    }
LAB_4a171b9c:
    uVar12 = uVar12 & 0xf;
    if (uVar12 == 9) {
      return (ulonglong)uVar9 << 0x20;
    }
    if (uVar12 != 10) {
      if (uVar12 == 8) {
        return CONCAT44(uVar9,uVar9 & 0xff000000 | DAT_4a171ba4 >> 0x1d | (uVar9 & 0xffffff) << 3);
      }
      return CONCAT44(uVar9,DAT_4a171ba4);
    }
    return CONCAT44(uVar9,DAT_4a171ba4);
  }
  uVar3 = FUN_4a1725c0(iVar5,0x3f000000);
  uVar4 = FUN_4a17295c(uVar3,1);
  uVar3 = FUN_4a17211c(uVar4,0x40400000);
  uVar7 = FUN_4a17211c(uVar3,*(undefined4 *)puVar2);
  uVar3 = DAT_4a0fb064;
  uVar4 = FUN_4a17211c(uVar4,DAT_4a0fb064);
  uVar3 = FUN_4a1724e0(uVar4,uVar3);
  uVar4 = FUN_4a002d64(uVar7);
  uVar6 = FUN_4a17211c(uVar4,uVar3);
  if ((int)(uVar6 ^ 0x3f800000) < 0) {
    uVar9 = 0xbf800000;
    if (uVar6 < 0xbf800000) {
      uVar9 = uVar6 + 0x40800000 ^ 0x80000000;
      uVar6 = uVar6 - uVar9;
      uVar9 = uVar9 + 0xbf800000;
    }
    uVar8 = uVar6 >> 0x17;
    uVar10 = uVar8 - (uVar9 >> 0x17);
    if ((uVar9 & 0x7f800000) != 0 && (uVar8 & 0xff) != 0xff) {
      uVar12 = uVar6 << 8 | 0x80000000;
      uVar9 = uVar9 << 8;
      uVar11 = uVar12 - ((uVar9 | 0x80000000) >> (uVar10 & 0xff));
      if ((int)uVar11 < 0) {
        bVar13 = (bool)((byte)(uVar11 >> 7) & 1);
        uVar6 = (uVar11 >> 8) + (uVar8 - 1) * 0x800000 + (uint)bVar13;
        if (!bVar13) {
          return CONCAT44(uVar9,uVar6) | 0x8000000000000000;
        }
        if ((uVar11 & 0x7f) != 0) {
          return CONCAT44(uVar9,uVar6) | 0x8000000000000000;
        }
      }
      else {
        bVar14 = (uVar8 & 0xfe) == 0;
        bVar13 = false;
        if (!bVar14) {
          uVar12 = uVar11 * 2;
          bVar13 = (int)uVar12 < 0;
          bVar14 = uVar12 == 0;
        }
        if (!bVar13) {
          if (bVar14) {
            if (uVar11 >> 7 == 0) {
              return (ulonglong)uVar9 << 0x20 | 0x8000000000000000;
            }
            return CONCAT44(uVar9,(uVar6 >> 0x1f) << 0x1f) | 0x8000000000000000;
          }
          if (uVar12 == 0) {
            return (ulonglong)uVar9 << 0x20 | 0x8000000000000000;
          }
          uVar10 = uVar12;
          uVar11 = uVar8;
          if (uVar12 >> 0x17 == 0) {
            uVar10 = uVar12 << 8;
            uVar11 = uVar8 - 8;
            if ((uVar12 & 0xffffff) >> 0xf == 0) {
              uVar10 = uVar12 << 0x10;
              uVar11 = uVar8 - 0x10;
            }
          }
          if ((uVar10 & 0x78000000) != 0) {
            uVar10 = uVar10 >> 4;
            uVar11 = uVar11 + 4;
          }
          if ((uVar10 & 0x6000000) != 0) {
            uVar10 = uVar10 >> 2;
            uVar11 = uVar11 + 2;
          }
          uVar11 = uVar11 - ((uVar10 < 0x1000000) + 9);
          if (uVar10 >= 0x1000000) {
            uVar10 = uVar10 >> 1;
          }
          if ((uVar8 ^ uVar11) >> 8 == 0) {
            return CONCAT44(uVar9,uVar10 + uVar11 * 0x800000) | 0x8000000000000000;
          }
          return CONCAT44(uVar9,(uVar6 >> 0x1f) << 0x1f) | 0x8000000000000000;
        }
        bVar13 = (bool)((byte)(uVar12 >> 7) & 1);
        uVar6 = ((int)uVar12 >> 8) + uVar8 * 0x800000 + (uint)bVar13;
        if (!bVar13) {
          return CONCAT44(uVar9,uVar6) | 0x8000000000000000;
        }
        if ((uVar11 & 0x3f) != 0) {
          return CONCAT44(uVar9,uVar6) | 0x8000000000000000;
        }
      }
      iVar5 = (uVar9 | 0x80000000) << (0x20 - uVar10 & 0xff);
      if (iVar5 == 0) {
        uVar6 = uVar6 & 0xfffffffe;
      }
      else {
        uVar6 = uVar6 - 1;
      }
      return CONCAT44(iVar5,uVar6);
    }
    if ((uVar8 & 0xff) != 0xff) {
      if ((uVar6 & 0x7f800000) == 0) {
        uVar6 = 0;
      }
      return CONCAT44(uVar9,uVar6);
    }
    uVar8 = uVar6 * 2;
    uVar12 = 0x4000002;
    if (uVar9 << 1 < 0xff000001 && uVar8 < 0xff000001) {
      if (uVar8 == uVar9 * 2) {
        if ((int)(uVar6 ^ uVar9) < 0) {
          return CONCAT44(uVar9,uVar6);
        }
        return CONCAT44(uVar9,DAT_4a172724);
      }
      if (uVar8 == 0xff000000) {
        return CONCAT44(uVar9,uVar6);
      }
      return CONCAT44(uVar9,uVar9) ^ 0x80000000;
    }
    goto LAB_4a171b9c;
  }
  uVar9 = 0x3f800000;
  uVar8 = uVar6;
  if (uVar6 < 0x3f800000) {
    uVar8 = 0x3f800000;
    uVar9 = uVar6;
  }
  uVar6 = uVar8 >> 0x17;
  uVar10 = uVar6 - (uVar9 >> 0x17);
  if ((uVar9 & 0x7f800000) == 0 || (uVar6 & 0xff) == 0xff) {
    if ((uVar6 & 0xff) != 0xff) {
      if ((uVar8 & 0x7f800000) == 0) {
        uVar8 = uVar8 & 0x80000000;
      }
      return CONCAT44(uVar9,uVar8);
    }
    uVar6 = uVar8 * 2;
    uVar12 = 0x4000001;
    if (uVar9 << 1 < 0xff000001 && uVar6 < 0xff000001) {
      if (uVar6 == uVar9 * 2) {
        if (-1 < (int)(uVar8 ^ uVar9)) {
          return CONCAT44(uVar9,uVar8);
        }
        return CONCAT44(uVar9,DAT_4a171b98);
      }
      if (uVar6 == 0xff000000) {
        return CONCAT44(uVar9,uVar8);
      }
      return CONCAT44(uVar9,uVar9);
    }
    goto LAB_4a171b9c;
  }
  uVar12 = uVar8 << 8 | 0x80000000;
  uVar9 = uVar9 << 8;
  uVar8 = (uVar9 | 0x80000000) >> (uVar10 & 0xff);
  uVar11 = uVar12 + uVar8;
  if (CARRY4(uVar12,uVar8)) {
    uVar8 = uVar11 >> 1 | 0x80000000;
    bVar13 = (bool)((byte)(uVar8 >> 7) & 1);
    uVar8 = uVar8 >> 8;
    uVar6 = uVar8 + uVar6 * 0x800000 + (uint)bVar13;
    if (bVar13) {
      uVar8 = uVar11 & 0xff;
    }
    uVar12 = uVar6 * 2;
    if (uVar8 != 0) {
      if (uVar12 < 0xff000000) {
        return CONCAT44(uVar9,uVar6) | 0x8000000000000000;
      }
      goto LAB_4a171b0c;
    }
  }
  else {
    bVar13 = (bool)((byte)(uVar11 >> 7) & 1);
    uVar6 = (uVar11 >> 8) + (uVar6 - 1) * 0x800000 + (uint)bVar13;
    if (!bVar13) {
      return CONCAT44(uVar9,uVar6) | 0x8000000000000000;
    }
    uVar12 = uVar6 * 2;
    if ((uVar11 & 0x7f) != 0) {
      bVar13 = 0xfeffffff < uVar12;
    }
    if (!bVar13) {
      return CONCAT44(uVar9,uVar6) | 0x8000000000000000;
    }
  }
  iVar5 = (uVar9 | 0x80000000) << (0x20 - uVar10 & 0xff);
  if (iVar5 == 0) {
    uVar6 = uVar6 & 0xfffffffe;
  }
  if (uVar12 < 0xff000000) {
    return CONCAT44(iVar5,uVar6);
  }
LAB_4a171b0c:
  uVar6 = uVar6 + 0xa0000000 >> 0x17;
  return CONCAT44(uVar6,(uVar6 | 0xff) << 0x17) | 0xff00000000;
}



// Address: 4a0fb068

ulonglong FUN_4a0fb068(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  
  uVar1 = FUN_4a171fac(*(undefined4 *)(param_1 + 8));
  uVar2 = FUN_4a171fac(*(undefined4 *)(param_1 + 4));
  uVar5 = uVar2 >> 7 & 0xff0000;
  bVar10 = uVar5 == 0;
  if (!bVar10) {
    param_4 = uVar1 >> 7 & 0xff0000;
    bVar10 = param_4 == 0;
  }
  if (!bVar10) {
    bVar10 = uVar5 == 0xff0000;
  }
  if (!bVar10) {
    bVar10 = param_4 == 0xff0000;
  }
  if (!bVar10) {
    if ((int)(uVar2 ^ uVar1) < 0) {
      uVar5 = uVar5 | 0x100;
    }
    uVar2 = uVar2 & 0xffffff | 0x800000;
    uVar3 = uVar1 & 0xffffff | 0x800000;
    uVar7 = (uint)*(byte *)(0x4a171d28 - (uVar3 >> 0x11));
    bVar10 = uVar3 <= uVar2;
    uVar1 = -uVar3;
    iVar8 = uVar7 * 2;
    if (!bVar10) {
      uVar2 = uVar2 << 1;
    }
    uVar6 = (uVar5 - param_4) + 0x7d0000;
    iVar8 = uVar7 * 0x100 + (((int)(uVar1 * iVar8) >> 4) * iVar8 >> 0x15);
    uVar5 = iVar8 * (uVar2 >> 8) >> 0x14;
    uVar7 = uVar1 * uVar5 + uVar2 * 0x800;
    uVar9 = uVar6 & 0x100;
    uVar6 = uVar6 + ((int)uVar6 >> 0x10) + (uint)bVar10;
    uVar2 = iVar8 * (uVar7 >> 8) >> 0x13;
    uVar7 = uVar1 * uVar2 + uVar7 * 0x1000;
    bVar10 = CARRY4(uVar7,uVar1);
    if (bVar10) {
      uVar7 = uVar7 + uVar1;
    }
    if (uVar7 != 0) {
      uVar9 = uVar9 | 0x40000002;
    }
    bVar12 = CARRY4(uVar1,uVar7 * 2);
    bVar11 = uVar7 * 2 == uVar3;
    if (bVar12) {
      uVar9 = uVar9 | 0x40000001;
    }
    if (bVar11) {
      uVar9 = uVar9 | 4;
    }
    uVar1 = uVar2 + uVar5 * 0x1000 + (uint)bVar10 + uVar6 * 0x800000 + (uint)bVar12;
    if (!bVar11) {
      bVar12 = 0xfbffff < uVar6;
    }
    if (!bVar12) {
      return CONCAT44(uVar9,uVar1) | 0x800000000;
    }
    uVar2 = uVar9 | 8 | uVar1 * -0x80000000;
    if (bVar11 || uVar6 == 0xfc0000) {
      uVar1 = uVar1 & 0xfffffffe;
    }
    if (uVar6 < 0xfc0000) {
      return CONCAT44(uVar2,uVar1);
    }
    if ((int)(uVar6 - 0xfc0000) < 0) {
      if ((uVar6 & 0xf0) != 0) {
        uVar1 = uVar1 + 0x60000000 & 0x80000000;
      }
      return CONCAT44(uVar2,uVar1);
    }
    if (0xfdffffff < uVar1 * 2 + 0x1000000) {
      return CONCAT44(uVar2,uVar1);
    }
    if ((int)(uVar1 + 0xa0000000) < 0) {
      uVar4 = 0xff800000;
    }
    else {
      uVar4 = 0x7f800000;
    }
    return CONCAT44(uVar2,uVar4);
  }
  if ((int)(uVar2 ^ uVar1) < 0) {
    uVar5 = uVar5 | 0x100;
  }
  uVar3 = uVar1 >> 7 & 0xff0000;
  if (uVar5 < 0xff0000 && uVar3 < 0xff0000) {
    if (uVar3 != 0) {
      return CONCAT44(uVar1,uVar2 ^ uVar1) & 0xffffffff80000000;
    }
    if ((uVar5 & 0xff0000) == 0) {
      return CONCAT44(uVar1,DAT_4a171d98);
    }
    return CONCAT44(uVar1,(uVar5 | 0xff) << 0x17);
  }
  uVar3 = uVar2 * 2;
  if (uVar3 < 0xff000001) {
    uVar3 = uVar1 * 2;
  }
  if (uVar3 < 0xff000001) {
    if ((uVar2 & 0x7fffffff) == 0x7f800000 && (uVar1 & 0x7fffffff) == 0x7f800000) {
      return CONCAT44(uVar1,DAT_4a171d98);
    }
    if ((uVar1 & 0x7fffffff) == 0x7f800000) {
      uVar2 = 0;
    }
    else {
      uVar2 = uVar2 & 0x7fffffff;
    }
    return CONCAT44(uVar1,uVar2 | uVar5 << 0x17);
  }
  uVar2 = DAT_4a171d94 & 0xf;
  if (uVar2 == 9) {
    if ((DAT_4a171d94 & 0x100000) == 0) {
      return (ulonglong)uVar1 << 0x20;
    }
    if ((DAT_4a171d94 & 0x70000) != 0) {
      return CONCAT44(~(DAT_4a171d94 << 0xf) << 1,8);
    }
    return CONCAT44(uVar1,0x30000000);
  }
  if (uVar2 == 10) {
    uVar2 = DAT_4a171ba4;
    if ((DAT_4a171d94 & 0x40) != 0) {
      uVar2 = 0x80000000;
    }
    return CONCAT44(uVar1,uVar2);
  }
  if (uVar2 != 8) {
    return CONCAT44(uVar1,DAT_4a171ba4);
  }
  if ((DAT_4a171d94 & 0x40) != 0) {
    return 0;
  }
  if ((DAT_4a171d94 & 0x10) != 0) {
    return CONCAT44(DAT_4a171ba4 & 0xff000000 | (DAT_4a171ba4 & 0xfffffff) >> 3,DAT_4a171ba4 << 0x1d
                   );
  }
  return CONCAT44(uVar1,uVar1 & 0xff000000 | DAT_4a171ba4 >> 0x1d | (uVar1 & 0xffffff) << 3);
}



// Address: 4a0fb090

/* WARNING: Removing unreachable block (ram,0x4a1729d8) */
/* WARNING: Removing unreachable block (ram,0x4a1729ec) */
/* WARNING: Removing unreachable block (ram,0x4a1728bc) */
/* WARNING: Removing unreachable block (ram,0x4a1728ac) */
/* WARNING: Removing unreachable block (ram,0x4a1729e0) */
/* WARNING: Removing unreachable block (ram,0x4a17289c) */

ulonglong FUN_4a0fb090(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  
  uVar2 = FUN_4a171fac(*(undefined4 *)(param_1 + 8));
  uVar3 = FUN_4a171fac(*(undefined4 *)(param_1 + 4));
  uVar4 = FUN_4a171bb8(uVar3,uVar2);
  uVar6 = uVar4 ^ 0x80000000;
  if ((int)(uVar4 ^ 0xbf800000) < 0) {
    uVar4 = 0xbf800000;
    if (uVar6 < 0xbf800000) {
      uVar4 = uVar6 + 0x40800000 ^ 0x80000000;
      uVar6 = uVar6 - uVar4;
      uVar4 = uVar4 + 0xbf800000;
    }
    uVar5 = uVar6 >> 0x17;
    uVar8 = uVar5 - (uVar4 >> 0x17);
    if ((uVar4 & 0x7f800000) != 0 && (uVar5 & 0xff) != 0xff) {
      uVar7 = uVar6 << 8 | 0x80000000;
      uVar4 = uVar4 << 8;
      uVar9 = uVar7 - ((uVar4 | 0x80000000) >> (uVar8 & 0xff));
      if ((int)uVar9 < 0) {
        bVar10 = (bool)((byte)(uVar9 >> 7) & 1);
        uVar6 = (uVar9 >> 8) + (uVar5 - 1) * 0x800000 + (uint)bVar10;
        if (!bVar10) {
          return CONCAT44(uVar4,uVar6) | 0x8000000000000000;
        }
        if ((uVar9 & 0x7f) != 0) {
          return CONCAT44(uVar4,uVar6) | 0x8000000000000000;
        }
      }
      else {
        bVar11 = (uVar5 & 0xfe) == 0;
        bVar10 = false;
        if (!bVar11) {
          uVar7 = uVar9 * 2;
          bVar10 = (int)uVar7 < 0;
          bVar11 = uVar7 == 0;
        }
        if (!bVar10) {
          if (bVar11) {
            if (uVar9 >> 7 == 0) {
              return (ulonglong)uVar4 << 0x20 | 0x8000000000000000;
            }
            return CONCAT44(uVar4,(uVar6 >> 0x1f) << 0x1f) | 0x8000000000000000;
          }
          if (uVar7 == 0) {
            return (ulonglong)uVar4 << 0x20 | 0x8000000000000000;
          }
          uVar8 = uVar7;
          uVar9 = uVar5;
          if (uVar7 >> 0x17 == 0) {
            uVar8 = uVar7 << 8;
            uVar9 = uVar5 - 8;
            if ((uVar7 & 0xffffff) >> 0xf == 0) {
              uVar8 = uVar7 << 0x10;
              uVar9 = uVar5 - 0x10;
            }
          }
          if ((uVar8 & 0x78000000) != 0) {
            uVar8 = uVar8 >> 4;
            uVar9 = uVar9 + 4;
          }
          if ((uVar8 & 0x6000000) != 0) {
            uVar8 = uVar8 >> 2;
            uVar9 = uVar9 + 2;
          }
          uVar9 = uVar9 - ((uVar8 < 0x1000000) + 9);
          if (uVar8 >= 0x1000000) {
            uVar8 = uVar8 >> 1;
          }
          if ((uVar5 ^ uVar9) >> 8 == 0) {
            return CONCAT44(uVar4,uVar8 + uVar9 * 0x800000) | 0x8000000000000000;
          }
          return CONCAT44(uVar4,(uVar6 >> 0x1f) << 0x1f) | 0x8000000000000000;
        }
        bVar10 = (bool)((byte)(uVar7 >> 7) & 1);
        uVar6 = ((int)uVar7 >> 8) + uVar5 * 0x800000 + (uint)bVar10;
        if (!bVar10) {
          return CONCAT44(uVar4,uVar6) | 0x8000000000000000;
        }
        if ((uVar9 & 0x3f) != 0) {
          return CONCAT44(uVar4,uVar6) | 0x8000000000000000;
        }
      }
      iVar1 = (uVar4 | 0x80000000) << (0x20 - uVar8 & 0xff);
      if (iVar1 == 0) {
        uVar6 = uVar6 & 0xfffffffe;
      }
      else {
        uVar6 = uVar6 - 1;
      }
      return CONCAT44(iVar1,uVar6);
    }
    if ((uVar5 & 0xff) != 0xff) {
      if ((uVar6 & 0x7f800000) == 0) {
        uVar6 = 0;
      }
      return CONCAT44(uVar4,uVar6);
    }
    uVar5 = uVar6 * 2;
    uVar8 = 0x4000002;
    if (uVar4 << 1 < 0xff000001 && uVar5 < 0xff000001) {
      if (uVar5 == uVar4 * 2) {
        if ((int)(uVar6 ^ uVar4) < 0) {
          return CONCAT44(uVar4,uVar6);
        }
        return CONCAT44(uVar4,DAT_4a172724);
      }
      if (uVar5 == 0xff000000) {
        return CONCAT44(uVar4,uVar6);
      }
      return CONCAT44(uVar4,uVar4) ^ 0x80000000;
    }
LAB_4a171b9c:
    uVar8 = uVar8 & 0xf;
    if (uVar8 == 9) {
      return (ulonglong)uVar4 << 0x20;
    }
    if (uVar8 != 10) {
      if (uVar8 == 8) {
        return CONCAT44(uVar4,uVar4 & 0xff000000 | DAT_4a171ba4 >> 0x1d | (uVar4 & 0xffffff) << 3);
      }
      return CONCAT44(uVar4,DAT_4a171ba4);
    }
    return CONCAT44(uVar4,DAT_4a171ba4);
  }
  uVar4 = 0x3f800000;
  uVar5 = uVar6;
  if (uVar6 < 0x3f800000) {
    uVar5 = 0x3f800000;
    uVar4 = uVar6;
  }
  uVar6 = uVar5 >> 0x17;
  uVar8 = uVar6 - (uVar4 >> 0x17);
  if ((uVar4 & 0x7f800000) == 0 || (uVar6 & 0xff) == 0xff) {
    if ((uVar6 & 0xff) != 0xff) {
      if ((uVar5 & 0x7f800000) == 0) {
        uVar5 = uVar5 & 0x80000000;
      }
      return CONCAT44(uVar4,uVar5);
    }
    uVar6 = uVar5 * 2;
    uVar8 = 0x4000001;
    if (uVar4 << 1 < 0xff000001 && uVar6 < 0xff000001) {
      if (uVar6 == uVar4 * 2) {
        if (-1 < (int)(uVar5 ^ uVar4)) {
          return CONCAT44(uVar4,uVar5);
        }
        return CONCAT44(uVar4,DAT_4a171b98);
      }
      if (uVar6 == 0xff000000) {
        return CONCAT44(uVar4,uVar5);
      }
      return CONCAT44(uVar4,uVar4);
    }
    goto LAB_4a171b9c;
  }
  uVar7 = uVar5 << 8 | 0x80000000;
  uVar4 = uVar4 << 8;
  uVar5 = (uVar4 | 0x80000000) >> (uVar8 & 0xff);
  uVar9 = uVar7 + uVar5;
  if (CARRY4(uVar7,uVar5)) {
    uVar5 = uVar9 >> 1 | 0x80000000;
    bVar10 = (bool)((byte)(uVar5 >> 7) & 1);
    uVar5 = uVar5 >> 8;
    uVar6 = uVar5 + uVar6 * 0x800000 + (uint)bVar10;
    if (bVar10) {
      uVar5 = uVar9 & 0xff;
    }
    uVar7 = uVar6 * 2;
    if (uVar5 != 0) {
      if (uVar7 < 0xff000000) {
        return CONCAT44(uVar4,uVar6) | 0x8000000000000000;
      }
      goto LAB_4a171b0c;
    }
  }
  else {
    bVar10 = (bool)((byte)(uVar9 >> 7) & 1);
    uVar6 = (uVar9 >> 8) + (uVar6 - 1) * 0x800000 + (uint)bVar10;
    if (!bVar10) {
      return CONCAT44(uVar4,uVar6) | 0x8000000000000000;
    }
    uVar7 = uVar6 * 2;
    if ((uVar9 & 0x7f) != 0) {
      bVar10 = 0xfeffffff < uVar7;
    }
    if (!bVar10) {
      return CONCAT44(uVar4,uVar6) | 0x8000000000000000;
    }
  }
  iVar1 = (uVar4 | 0x80000000) << (0x20 - uVar8 & 0xff);
  if (iVar1 == 0) {
    uVar6 = uVar6 & 0xfffffffe;
  }
  if (uVar7 < 0xff000000) {
    return CONCAT44(iVar1,uVar6);
  }
LAB_4a171b0c:
  uVar6 = uVar6 + 0xa0000000 >> 0x17;
  return CONCAT44(uVar6,(uVar6 | 0xff) << 0x17) | 0xff00000000;
}



// Address: 4a0fb0c0

/* WARNING: Removing unreachable block (ram,0x4a1729d8) */
/* WARNING: Removing unreachable block (ram,0x4a1729ec) */
/* WARNING: Removing unreachable block (ram,0x4a1728bc) */
/* WARNING: Removing unreachable block (ram,0x4a1728ac) */
/* WARNING: Removing unreachable block (ram,0x4a1729e0) */
/* WARNING: Removing unreachable block (ram,0x4a17289c) */

ulonglong FUN_4a0fb0c0(undefined4 *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  longlong lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  
  puVar2 = PTR_DAT_4a0fb384;
  switch(*param_1) {
  case 0:
    iVar4 = param_1[2];
    FUN_4a0015f0(param_1[1],iVar4 >> 1);
    uVar5 = FUN_4a171fac(iVar4 >> 1);
    uVar6 = FUN_4a171fac(extraout_r1);
    uVar5 = FUN_4a171bb8(uVar6,uVar5);
    uVar10 = FUN_4a17211c(uVar5,0x3f400000);
    goto code_r0x4a1724e0;
  case 1:
    uVar5 = FUN_4a171fac(param_1[2]);
    uVar6 = FUN_4a171fac(param_1[1]);
    uVar6 = FUN_4a17211c(uVar6,*(undefined4 *)puVar2);
    FUN_4a171bb8(uVar6,uVar5);
    uVar8 = FUN_4a002f08();
    break;
  case 2:
    uVar5 = FUN_4a171fac(param_1[2]);
    uVar6 = FUN_4a171fac(param_1[1]);
    iVar4 = FUN_4a171bb8(uVar6,uVar5);
    if (iVar4 < 0x3f000000) {
      uVar5 = FUN_4a17295c(iVar4,1);
      uVar6 = FUN_4a17295c(*(undefined4 *)puVar2,0xffffffff);
      FUN_4a17211c(uVar6,uVar5);
      uVar8 = FUN_4a002f08();
      uVar7 = DAT_4a0fb388;
code_r0x4a17211c:
      uVar10 = uVar8 >> 7 & 0xff0000;
      bVar13 = uVar10 == 0;
      if (!bVar13) {
        param_4 = uVar7 >> 7 & 0xff0000;
        bVar13 = param_4 == 0;
      }
      if (!bVar13) {
        bVar13 = uVar10 == 0xff0000;
      }
      if (!bVar13) {
        bVar13 = param_4 == 0xff0000;
      }
      if (!bVar13) {
        if ((int)(uVar8 ^ uVar7) < 0) {
          uVar10 = uVar10 | 0x100;
        }
        uVar7 = uVar7 << 8;
        lVar1 = (ulonglong)(uVar7 | 0x80000000) * (ulonglong)(uVar8 << 8 | 0x80000000);
        uVar8 = (uint)((ulonglong)lVar1 >> 0x20);
        iVar4 = uVar10 + param_4 + -0x800000;
        if ((int)lVar1 != 0) {
          uVar8 = uVar8 | 1;
        }
        bVar13 = 0x7fffffff < uVar8;
        if (!bVar13) {
          uVar8 = uVar8 << 1;
        }
        uVar11 = iVar4 + (iVar4 >> 0x10) + (uint)bVar13;
        bVar13 = (bool)((byte)(uVar8 >> 7) & 1);
        uVar10 = uVar8 >> 8;
        if (bVar13) {
          uVar10 = uVar8 & 0x7f;
        }
        uVar8 = (uVar8 >> 8) + uVar11 * 0x800000 + (uint)bVar13;
        if (uVar10 != 0) {
          bVar13 = 0xfbffff < uVar11;
        }
        if (!bVar13) {
          return CONCAT44(uVar7,uVar8) | 0x8000000000000000;
        }
        if (uVar10 == 0 || uVar11 == 0xfc0000) {
          uVar8 = uVar8 & 0xfffffffe;
        }
        if (uVar11 < 0xfc0000) {
          return CONCAT44(uVar7,uVar8) | 0x8000000000000000;
        }
        if (-1 < (int)(uVar11 - 0xfc0000)) {
          if ((int)((uVar8 + 0x800000) * 2) < 0) {
            return CONCAT44(uVar7,uVar8) | 0x8000000000000000;
          }
          if ((int)(uVar8 + 0xa0000000) < 0) {
            uVar5 = 0xff800000;
          }
          else {
            uVar5 = 0x7f800000;
          }
          return CONCAT44(uVar7,uVar5) | 0x8000000000000000;
        }
        if (-0x10000 < (int)(uVar11 ^ 0xff)) {
          return CONCAT44(uVar7,uVar8) | 0x8000000000000000;
        }
        uVar8 = uVar8 + 0x60000000;
        if ((int)(uVar11 ^ 0xff) < -0xffff) {
          uVar8 = uVar8 & 0x80000000;
        }
        return CONCAT44(uVar7,uVar8) | 0x8000000000000000;
      }
      if ((int)(uVar8 ^ uVar7) < 0) {
        uVar10 = uVar10 | 0x100;
      }
      uVar11 = uVar7 >> 7 & 0xff0000;
      if (uVar10 < 0xff0000 && uVar11 < 0xff0000) {
        return CONCAT44(uVar7,uVar8 ^ uVar7) & 0xffffffff80000000;
      }
      uVar8 = uVar8 * 2;
      if (uVar8 < 0xff000001) {
        uVar8 = uVar7 * 2;
      }
      uVar9 = 0x4000003;
      if (uVar8 < 0xff000001) {
        if ((uVar10 & 0xff0000) != 0 && uVar11 != 0) {
          return CONCAT44(uVar7,(uVar10 | 0xff) << 0x17);
        }
        return CONCAT44(uVar7,DAT_4a172220);
      }
      goto LAB_4a171b9c;
    }
    uVar5 = FUN_4a1725c0(iVar4,0x3f000000);
    uVar6 = FUN_4a17295c(uVar5,1);
    uVar5 = FUN_4a17211c(uVar6,0x40400000);
    uVar3 = FUN_4a17211c(uVar5,*(undefined4 *)puVar2);
    uVar5 = DAT_4a0fb38c;
    uVar6 = FUN_4a17211c(uVar6,DAT_4a0fb38c);
    uVar5 = FUN_4a1724e0(uVar6,uVar5);
    uVar6 = FUN_4a002d64(uVar3);
    uVar8 = FUN_4a17211c(uVar6,uVar5);
    break;
  case 3:
    uVar5 = FUN_4a171fac(param_1[2]);
    uVar6 = FUN_4a171fac(param_1[1]);
    iVar4 = FUN_4a171bb8(uVar6,uVar5);
    if (iVar4 < 0x3f000000) {
      uVar5 = FUN_4a17295c(iVar4,1);
      uVar6 = FUN_4a17295c(*(undefined4 *)puVar2,0xffffffff);
      FUN_4a17211c(uVar6,uVar5);
      uVar8 = FUN_4a002f08();
      uVar7 = 0x3fc00000;
      goto code_r0x4a17211c;
    }
    uVar5 = FUN_4a1725c0(iVar4,0x3f000000);
    uVar5 = FUN_4a17295c(uVar5,1);
    uVar5 = FUN_4a17295c(uVar5,0xffffffff);
    uVar6 = FUN_4a17211c(uVar5,*(undefined4 *)puVar2);
    uVar5 = FUN_4a1724e0(uVar5,0x3f000000);
    uVar6 = FUN_4a002d64(uVar6);
    uVar8 = FUN_4a17211c(uVar6,uVar5);
    break;
  case 4:
    uVar5 = FUN_4a171fac(param_1[2]);
    uVar6 = FUN_4a171fac(param_1[1]);
    uVar5 = FUN_4a171bb8(uVar6,uVar5);
    uVar8 = FUN_4a17295c(uVar5,1);
    break;
  case 5:
    uVar5 = FUN_4a171fac(param_1[2]);
    uVar6 = FUN_4a171fac(param_1[1]);
    uVar10 = FUN_4a171bb8(uVar6,uVar5);
code_r0x4a1724e0:
    uVar7 = 0x3f800000;
    uVar8 = uVar10 ^ 0x80000000;
    if (-1 < (int)(uVar10 ^ 0xbf800000)) goto LAB_4a171aa0;
    uVar7 = 0xbf800000;
    goto LAB_4a1725cc;
  case 6:
    iVar4 = (int)((ulonglong)((longlong)DAT_4a0fb390 * (longlong)(int)param_1[2]) >> 0x20);
    iVar4 = iVar4 - (iVar4 >> 0x1f);
    FUN_4a0015f0(param_1[1],iVar4,(int)((longlong)DAT_4a0fb390 * (longlong)(int)param_1[2]));
    uVar5 = FUN_4a171fac(iVar4);
    uVar6 = FUN_4a171fac(extraout_r1_00);
    uVar7 = FUN_4a171bb8(uVar6,uVar5);
    uVar8 = 0x3f800000;
    if ((int)(uVar7 ^ 0x3f800000) < 0) {
      uVar7 = uVar7 ^ 0x80000000;
      goto LAB_4a171aa0;
    }
    goto LAB_4a1725cc;
  default:
    return (ulonglong)param_2 << 0x20;
  }
  uVar7 = 0x3f800000;
  if ((int)(uVar8 ^ 0x3f800000) < 0) {
    uVar7 = 0xbf800000;
LAB_4a1725cc:
    if (uVar8 < uVar7) {
      uVar10 = uVar8 - uVar7 ^ 0x80000000;
      uVar8 = uVar8 - uVar10;
      uVar7 = uVar7 + uVar10;
    }
    uVar10 = uVar8 >> 0x17;
    uVar11 = uVar10 - (uVar7 >> 0x17);
    if ((uVar7 & 0x7f800000) != 0 && (uVar10 & 0xff) != 0xff) {
      uVar9 = uVar8 << 8 | 0x80000000;
      uVar7 = uVar7 << 8;
      uVar12 = uVar9 - ((uVar7 | 0x80000000) >> (uVar11 & 0xff));
      if ((int)uVar12 < 0) {
        bVar13 = (bool)((byte)(uVar12 >> 7) & 1);
        uVar8 = (uVar12 >> 8) + (uVar10 - 1) * 0x800000 + (uint)bVar13;
        if (!bVar13) {
          return CONCAT44(uVar7,uVar8) | 0x8000000000000000;
        }
        if ((uVar12 & 0x7f) != 0) {
          return CONCAT44(uVar7,uVar8) | 0x8000000000000000;
        }
      }
      else {
        bVar14 = (uVar10 & 0xfe) == 0;
        bVar13 = false;
        if (!bVar14) {
          uVar9 = uVar12 * 2;
          bVar13 = (int)uVar9 < 0;
          bVar14 = uVar9 == 0;
        }
        if (!bVar13) {
          if (bVar14) {
            if (uVar12 >> 7 == 0) {
              return (ulonglong)uVar7 << 0x20 | 0x8000000000000000;
            }
            return CONCAT44(uVar7,(uVar8 >> 0x1f) << 0x1f) | 0x8000000000000000;
          }
          if (uVar9 == 0) {
            return (ulonglong)uVar7 << 0x20 | 0x8000000000000000;
          }
          uVar11 = uVar9;
          uVar12 = uVar10;
          if (uVar9 >> 0x17 == 0) {
            uVar11 = uVar9 << 8;
            uVar12 = uVar10 - 8;
            if ((uVar9 & 0xffffff) >> 0xf == 0) {
              uVar11 = uVar9 << 0x10;
              uVar12 = uVar10 - 0x10;
            }
          }
          if ((uVar11 & 0x78000000) != 0) {
            uVar11 = uVar11 >> 4;
            uVar12 = uVar12 + 4;
          }
          if ((uVar11 & 0x6000000) != 0) {
            uVar11 = uVar11 >> 2;
            uVar12 = uVar12 + 2;
          }
          uVar12 = uVar12 - ((uVar11 < 0x1000000) + 9);
          if (uVar11 >= 0x1000000) {
            uVar11 = uVar11 >> 1;
          }
          if ((uVar10 ^ uVar12) >> 8 == 0) {
            return CONCAT44(uVar7,uVar11 + uVar12 * 0x800000) | 0x8000000000000000;
          }
          return CONCAT44(uVar7,(uVar8 >> 0x1f) << 0x1f) | 0x8000000000000000;
        }
        bVar13 = (bool)((byte)(uVar9 >> 7) & 1);
        uVar8 = ((int)uVar9 >> 8) + uVar10 * 0x800000 + (uint)bVar13;
        if (!bVar13) {
          return CONCAT44(uVar7,uVar8) | 0x8000000000000000;
        }
        if ((uVar12 & 0x3f) != 0) {
          return CONCAT44(uVar7,uVar8) | 0x8000000000000000;
        }
      }
      iVar4 = (uVar7 | 0x80000000) << (0x20 - uVar11 & 0xff);
      if (iVar4 == 0) {
        uVar8 = uVar8 & 0xfffffffe;
      }
      else {
        uVar8 = uVar8 - 1;
      }
      return CONCAT44(iVar4,uVar8);
    }
    if ((uVar10 & 0xff) != 0xff) {
      if ((uVar8 & 0x7f800000) == 0) {
        uVar8 = 0;
      }
      return CONCAT44(uVar7,uVar8);
    }
    uVar10 = uVar8 * 2;
    uVar9 = 0x4000002;
    if (uVar7 << 1 < 0xff000001 && uVar10 < 0xff000001) {
      if (uVar10 == uVar7 * 2) {
        if ((int)(uVar8 ^ uVar7) < 0) {
          return CONCAT44(uVar7,uVar8);
        }
        return CONCAT44(uVar7,DAT_4a172724);
      }
      if (uVar10 == 0xff000000) {
        return CONCAT44(uVar7,uVar8);
      }
      return CONCAT44(uVar7,uVar7) ^ 0x80000000;
    }
LAB_4a171b9c:
    uVar9 = uVar9 & 0xf;
    if (uVar9 == 9) {
      return (ulonglong)uVar7 << 0x20;
    }
    if (uVar9 != 10) {
      if (uVar9 == 8) {
        return CONCAT44(uVar7,uVar7 & 0xff000000 | DAT_4a171ba4 >> 0x1d | (uVar7 & 0xffffff) << 3);
      }
      return CONCAT44(uVar7,DAT_4a171ba4);
    }
    return CONCAT44(uVar7,DAT_4a171ba4);
  }
LAB_4a171aa0:
  iVar4 = uVar8 - uVar7;
  if (uVar8 < uVar7) {
    uVar8 = uVar8 - iVar4;
    uVar7 = uVar7 + iVar4;
  }
  uVar10 = uVar8 >> 0x17;
  uVar11 = uVar10 - (uVar7 >> 0x17);
  if ((uVar7 & 0x7f800000) == 0 || (uVar10 & 0xff) == 0xff) {
    if ((uVar10 & 0xff) != 0xff) {
      if ((uVar8 & 0x7f800000) == 0) {
        uVar8 = uVar8 & 0x80000000;
      }
      return CONCAT44(uVar7,uVar8);
    }
    uVar10 = uVar8 * 2;
    uVar9 = 0x4000001;
    if (uVar7 << 1 < 0xff000001 && uVar10 < 0xff000001) {
      if (uVar10 == uVar7 * 2) {
        if (-1 < (int)(uVar8 ^ uVar7)) {
          return CONCAT44(uVar7,uVar8);
        }
        return CONCAT44(uVar7,DAT_4a171b98);
      }
      if (uVar10 == 0xff000000) {
        return CONCAT44(uVar7,uVar8);
      }
      return CONCAT44(uVar7,uVar7);
    }
    goto LAB_4a171b9c;
  }
  uVar9 = uVar8 << 8 | 0x80000000;
  uVar7 = uVar7 << 8;
  uVar8 = (uVar7 | 0x80000000) >> (uVar11 & 0xff);
  uVar12 = uVar9 + uVar8;
  if (CARRY4(uVar9,uVar8)) {
    uVar8 = uVar12 >> 1 | 0x80000000;
    bVar13 = (bool)((byte)(uVar8 >> 7) & 1);
    uVar8 = uVar8 >> 8;
    uVar10 = uVar8 + uVar10 * 0x800000 + (uint)bVar13;
    if (bVar13) {
      uVar8 = uVar12 & 0xff;
    }
    uVar9 = uVar10 * 2;
    if (uVar8 != 0) {
      if (uVar9 < 0xff000000) {
        return CONCAT44(uVar7,uVar10) | 0x8000000000000000;
      }
      goto LAB_4a171b0c;
    }
  }
  else {
    bVar13 = (bool)((byte)(uVar12 >> 7) & 1);
    uVar10 = (uVar12 >> 8) + (uVar10 - 1) * 0x800000 + (uint)bVar13;
    if (!bVar13) {
      return CONCAT44(uVar7,uVar10) | 0x8000000000000000;
    }
    uVar9 = uVar10 * 2;
    if ((uVar12 & 0x7f) != 0) {
      bVar13 = 0xfeffffff < uVar9;
    }
    if (!bVar13) {
      return CONCAT44(uVar7,uVar10) | 0x8000000000000000;
    }
  }
  iVar4 = (uVar7 | 0x80000000) << (0x20 - uVar11 & 0xff);
  if (iVar4 == 0) {
    uVar10 = uVar10 & 0xfffffffe;
  }
  if (uVar9 < 0xff000000) {
    return CONCAT44(iVar4,uVar10);
  }
LAB_4a171b0c:
  uVar7 = uVar10 + 0xa0000000 >> 0x17;
  return CONCAT44(uVar7,(uVar7 | 0xff) << 0x17) | 0xff00000000;
}



// Address: 4a0fb394

void FUN_4a0fb394(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// Address: 4a0fb3b0

void FUN_4a0fb3b0(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (*(int *)(param_2 + 0x538) != 0) {
    iVar2 = *(int *)(*(int *)(param_2 + 0x538) + 8);
  }
  iVar2 = iVar2 + param_3 * 0x14;
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0fb40c;
  puVar1[2] = *(undefined4 *)(iVar2 + 8);
  piVar3 = *(int **)(iVar2 + 0xc);
  puVar1[3] = piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
  }
  *puVar1 = PTR_PTR_4a0fb410;
  return;
}



// Address: 4a0fb418

void FUN_4a0fb418(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_4a0fd1b4();
  iVar2 = (int)((ulonglong)uVar4 >> 0x20);
  iVar1 = (int)uVar4;
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x408);
    param_3 = *(int *)(param_1 + 0x3fc);
    iVar3 = iVar2 - param_3;
  }
  if (iVar3 < 0 != (iVar1 != 0 && SBORROW4(iVar2,param_3))) {
    *(int *)(param_1 + 0x408) = iVar2 + 1;
    iVar3 = 0;
    if (*(int *)(param_1 + 0x400) != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x400) + 8);
    }
    *(int *)(iVar3 + iVar2 * 4) = iVar1;
    return;
  }
  return;
}



// Address: 4a0fb45c

void FUN_4a0fb45c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 in_lr;
  
  FUN_4a0b0180(*(undefined4 *)(param_1 + 0x440),param_3);
  *(undefined4 *)(param_1 + 0x42c) = param_5;
  *(undefined4 *)(param_1 + 0x430) = param_6;
  *(undefined4 *)(param_1 + 0x434) = param_7;
  *(undefined4 *)(param_1 + 0x438) = param_8;
  FUN_4a06a9a8(param_1 + 0x428,param_4);
  piVar1 = (int *)thunk_FUN_4a0b3908();
  FUN_4a0a83a4(piVar1,param_2);
  (**(code **)(*piVar1 + 0x20))
            (piVar1,*(undefined4 *)(param_1 + 0x42c),*(undefined4 *)(param_1 + 0x430),
             *(undefined4 *)(param_1 + 0x434),*(undefined4 *)(param_1 + 0x438),unaff_r4,unaff_r5,
             unaff_r6,unaff_r7,in_lr);
  FUN_4a0a8b14(piVar1,*(undefined4 *)(param_1 + 0x43c));
                    /* WARNING: Could not recover jumptable at 0x4a06a9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x30))(piVar1);
  return;
}



// Address: 4a0fb4b0

void FUN_4a0fb4b0(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x44) != 0) {
    uVar1 = FUN_4a05c29c();
    *(undefined1 *)(param_1 + 0x48) = uVar1;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    uVar1 = FUN_4a05a2c8();
    *(undefined1 *)(param_1 + 0x40) = uVar1;
  }
  FUN_4a08587c(*(undefined4 *)(param_1 + 0x260));
  FUN_4a0d34e4(*(undefined4 *)(param_1 + 0x264));
  if (*(int **)(param_1 + 0x54) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x54) + 0x14))();
  }
  *(undefined4 *)(param_1 + 0x3f0) = 0;
  *(undefined4 *)(param_1 + 0x3ec) = 0;
  *(undefined4 *)(param_1 + 0x408) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  return;
}



// Address: 4a0fb524

void FUN_4a0fb524(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x514) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x514) + 8);
  }
  piVar2 = (int *)(iVar1 + *(int *)(param_1 + 0x4a0) * 4);
  if ((int *)*piVar2 != param_2) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 0xc))(param_2);
    }
    piVar3 = (int *)*piVar2;
    if ((piVar3 != (int *)0x0) && (iVar1 = (**(code **)(*piVar3 + 8))(piVar3), iVar1 != 0)) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *piVar2 = (int)param_2;
    return;
  }
  return;
}



// Address: 4a0fb52c

void FUN_4a0fb52c(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x514) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x514) + 8);
  }
  piVar2 = (int *)(iVar1 + param_3 * 4);
  if ((int *)*piVar2 != param_2) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 0xc))(param_2);
    }
    piVar3 = (int *)*piVar2;
    if ((piVar3 != (int *)0x0) && (iVar1 = (**(code **)(*piVar3 + 8))(piVar3), iVar1 != 0)) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *piVar2 = (int)param_2;
    return;
  }
  return;
}



// Address: 4a0fb5b8

void FUN_4a0fb5b8(int param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0x58) != '\0') {
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar1 = FUN_4a05c29c();
      *(undefined1 *)(param_1 + 0x48) = uVar1;
    }
    if (*(int *)(param_1 + 0x3c) != 0) {
      uVar1 = FUN_4a05a2c8();
      *(undefined1 *)(param_1 + 0x40) = uVar1;
    }
    FUN_4a08587c(*(undefined4 *)(param_1 + 0x260));
    FUN_4a0d34e4(*(undefined4 *)(param_1 + 0x264));
    if (*(int **)(param_1 + 0x54) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x54) + 0x14))();
    }
    *(undefined4 *)(param_1 + 0x3f0) = 0;
    *(undefined4 *)(param_1 + 0x3ec) = 0;
    *(undefined4 *)(param_1 + 0x408) = 0;
    *(undefined1 *)(param_1 + 0x58) = 0;
    *(undefined1 *)(param_1 + 0x50) = 1;
    return;
  }
  return;
}



// Address: 4a0fb644

void FUN_4a0fb644(void)

{
  return;
}



// Address: 4a0fb648

void FUN_4a0fb648(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x460) = param_2;
  *(undefined4 *)(param_1 + 0x464) = param_3;
  return;
}



// Address: 4a0fb654

undefined4 FUN_4a0fb654(int param_1)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0x448) != '\0') {
    bVar1 = *(char *)(param_1 + 0x458) == '\0';
    if (bVar1) {
      param_1 = *(int *)(param_1 + 0x450);
    }
    if (bVar1 && param_1 == -1) {
      return 1;
    }
  }
  return 0;
}



// Address: 4a0fb680

void FUN_4a0fb680(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_4a0fd1b4();
  iVar2 = (int)((ulonglong)uVar4 >> 0x20);
  iVar1 = (int)uVar4;
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x408);
    param_3 = *(int *)(param_1 + 0x3fc);
    iVar3 = iVar2 - param_3;
  }
  if (iVar3 < 0 != (iVar1 != 0 && SBORROW4(iVar2,param_3))) {
    *(int *)(param_1 + 0x408) = iVar2 + 1;
    iVar3 = 0;
    if (*(int *)(param_1 + 0x400) != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x400) + 8);
    }
    *(int *)(iVar3 + iVar2 * 4) = -iVar1;
    return;
  }
  return;
}



// Address: 4a0fb6c8

void FUN_4a0fb6c8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 0xc);
  iVar6 = 0;
  if (iVar5 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar5 + 8);
  }
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar1 < 1) {
    return;
  }
  if (iVar5 != 0) {
    iVar2 = *(int *)(iVar5 + 8);
  }
  else {
    iVar2 = 0;
  }
  iVar2 = *(int *)(iVar2 + 8);
  if (iVar5 != 0) {
    iVar3 = *(int *)(iVar5 + 8);
  }
  else {
    iVar3 = 0;
  }
  iVar4 = *(int *)(iVar3 + 0xc);
  iVar3 = iVar2;
  if ((iVar4 <= iVar2) && (iVar3 = iVar4, iVar4 + iVar1 <= iVar2)) {
    if ((iVar2 - iVar1) + 1 < 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (iVar2 - iVar1) + 1;
    }
  }
  if (iVar5 != 0) {
    iVar6 = *(int *)(iVar5 + 8);
  }
  *(int *)(iVar6 + 0xc) = iVar3;
  return;
}



// Address: 4a0fb748

/* WARNING: Removing unreachable block (ram,0x4a0c9940) */

int FUN_4a0fb748(int param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int extraout_r1;
  uint uVar4;
  
  uVar2 = DAT_4a0c99e4;
  do {
    lVar1 = (ulonglong)uVar2 * (ulonglong)*(uint *)(param_1 + 0x270);
    uVar4 = (uint)lVar1;
    iVar3 = uVar4 + 0xb;
    uVar4 = *(uint *)(param_1 + 0x270) * 5 +
            *(int *)(param_1 + 0x274) * uVar2 + (int)((ulonglong)lVar1 >> 0x20) +
            (uint)(0xfffffff4 < uVar4) & 0xffff;
    *(int *)(param_1 + 0x270) = iVar3;
    *(uint *)(param_1 + 0x274) = uVar4;
    iVar3 = FUN_4a000888(iVar3,uVar4,0x11);
    FUN_4a0015f0(iVar3,100);
  } while ((iVar3 - extraout_r1) + 99 < 0);
  return extraout_r1;
}



// Address: 4a0fb754

void FUN_4a0fb754(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x454) = param_2;
  return;
}



// Address: 4a0fb75c

void FUN_4a0fb75c(int param_1,int param_2,int param_3)

{
  if (*(int *)(param_1 + 0x420) != param_3) {
    *(int *)(param_1 + 0x420) = param_3;
  }
  if (*(int *)(param_1 + 0x424) != param_2) {
    *(int *)(param_1 + 0x424) = param_2;
  }
  return;
}



// Address: 4a0fb778

void FUN_4a0fb778(int param_1)

{
  *(undefined4 *)(param_1 + 0x450) = 1;
  *(undefined4 *)(param_1 + 0x44c) = 0;
  *(undefined1 *)(param_1 + 0x448) = 1;
  *(undefined1 *)(param_1 + 0x458) = 0;
  return;
}



// Address: 4a0fb794

void FUN_4a0fb794(int param_1)

{
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}



// Address: 4a0fb7a0

int FUN_4a0fb7a0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  int iVar4;
  int iVar5;
  undefined1 auStack_40 [20];
  undefined1 auStack_2c [20];
  
  *(undefined1 *)(param_1 + 0x4c0) = 1;
  thunk_FUN_4a161570(0x24);
  uVar1 = FUN_4a0c2818();
  uVar2 = thunk_FUN_4a161570(0xc);
  piVar3 = (int *)FUN_4a0c0198(uVar2,uVar1);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
  }
  FUN_4a0bfed4(piVar3,0x8b);
  FUN_4a0bfed4(piVar3,7);
  uVar2 = FUN_4a085684(*(undefined4 *)(param_1 + 0x260));
  FUN_4a0bfd84(piVar3,uVar2);
  uVar2 = FUN_4a0855d8(*(undefined4 *)(param_1 + 0x260));
  FUN_4a0bfd84(piVar3,uVar2);
  FUN_4a0bfe0c(piVar3,*(undefined1 *)(*(int *)(param_1 + 0x264) + 0xd));
  FUN_4a0bfe0c(piVar3,*(undefined1 *)(param_1 + 0x494));
  FUN_4a0bfe0c(piVar3,*(undefined1 *)(param_1 + 0x495));
  FUN_4a0bfe0c(piVar3,*(undefined1 *)(param_1 + 0x497));
  if (*(int *)PTR_DAT_4a0fe1d4 != 0) {
    FUN_4a0bfe0c(piVar3,*(undefined1 *)(param_1 + 0x498));
  }
  FUN_4a0bfe0c(piVar3,*(undefined1 *)(param_1 + 0x499));
  FUN_4a0941ec();
  uVar2 = FUN_4a0953f4();
  FUN_4a0bfe0c(piVar3,uVar2);
  FUN_4a0bfe0c(piVar3,*(undefined1 *)(param_1 + 0x4c0));
  FUN_4a0bfe0c(piVar3,*(undefined1 *)(param_1 + 0x4c1));
  FUN_4a0c011c(piVar3,extraout_r1,*(undefined4 *)(param_1 + 0x4c8),*(undefined4 *)(param_1 + 0x4cc))
  ;
  FUN_4a0c011c(piVar3,extraout_r1_00,*(undefined4 *)(param_1 + 0x4d0),
               *(undefined4 *)(param_1 + 0x4d4));
  FUN_4a0c011c(piVar3,extraout_r1_01,*(undefined4 *)(param_1 + 0x4d8),
               *(undefined4 *)(param_1 + 0x4dc));
  FUN_4a0c011c(piVar3,extraout_r1_02,*(undefined4 *)(param_1 + 0x4e0),
               *(undefined4 *)(param_1 + 0x4e4));
  FUN_4a0c0110(piVar3,*(uint *)(param_1 + 0x49c) & 0xff);
  iVar5 = 0;
  do {
    if (*(int *)(param_1 + 0x514) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1 + 0x514) + 8);
    }
    FUN_4a0bff24(piVar3,*(undefined4 *)(iVar4 + iVar5 * 4));
    if (*(int *)(param_1 + 0x4b0) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1 + 0x4b0) + 8);
    }
    FUN_4a0bfe0c(piVar3,*(undefined1 *)(iVar4 + iVar5));
    iVar5 = iVar5 + 1;
  } while (iVar5 != 7);
  FUN_4a0bfed4(piVar3,0x8b);
  FUN_4a0c254c(auStack_2c,uVar1);
  iVar5 = (**(code **)(*piVar3 + 0x2c))(piVar3);
  *(bool *)(param_1 + 0x34) = iVar5 != 1 || *(char *)(param_1 + 0x34) != '\0';
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar1 = FUN_4a16b5a0(auStack_40,auStack_2c);
    uVar2 = thunk_FUN_4a161570(0x14);
    uVar2 = FUN_4a0c707c(uVar2,PTR_s_sim3set_4a0fe1dc);
    FUN_4a0ff2ac(param_1,uVar2,uVar1);
    FUN_4a16b6c0(auStack_40);
  }
  else {
    uVar1 = FUN_4a16b5a0(auStack_40,auStack_2c);
    uVar2 = thunk_FUN_4a161570(0x14);
    uVar2 = FUN_4a0c707c(uVar2,PTR_s_sim3set_demo_4a0fe1d8);
    FUN_4a0ff2ac(param_1,uVar2,uVar1);
    FUN_4a16b6c0(auStack_40);
  }
  if ((piVar3 != (int *)0x0) && (iVar5 = (**(code **)(*piVar3 + 8))(piVar3), iVar5 != 0)) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  iVar5 = 1 - (uint)*(byte *)(param_1 + 0x34);
  if (1 < *(byte *)(param_1 + 0x34)) {
    iVar5 = 0;
  }
  FUN_4a16b6c0(auStack_2c);
  return iVar5;
}



// Address: 4a0fb7ac

/* WARNING: Removing unreachable block (ram,0x4a0fb824) */
/* WARNING: Removing unreachable block (ram,0x4a0fb844) */
/* WARNING: Removing unreachable block (ram,0x4a0fb83c) */

void FUN_4a0fb7ac(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x514) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x514) + 8);
  }
  puVar2 = (undefined4 *)(iVar1 + *(int *)(param_1 + 0x4a0) * 4);
  piVar3 = (int *)*puVar2;
  if (piVar3 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar3 + 8))(piVar3);
    if (iVar1 != 0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *puVar2 = 0;
  }
  return;
}



// Address: 4a0fb860

int FUN_4a0fb860(uint param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined *local_34 [2];
  int local_2c;
  
  puVar2 = (undefined4 *)FUN_4a0c6bc0(local_34);
  *puVar2 = PTR_PTR_4a0fb9b8;
  puVar2[2] = *(undefined4 *)(param_2 + 8);
  piVar3 = *(int **)(param_2 + 0xc);
  puVar2[3] = piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
  }
  local_34[0] = PTR_PTR_4a0fb9bc;
  iVar7 = 0;
  iVar4 = 0;
  *puVar2 = PTR_PTR_4a0fb9bc;
  uVar9 = puVar2[2];
  if ((int)uVar9 < 1) {
    uVar8 = 0;
  }
  else {
    uVar8 = uVar9 & 1;
  }
  if (uVar8 != 0) {
    do {
      if (puVar2[3] == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(puVar2[3] + 8);
      }
      iVar5 = iVar4 * 2;
      iVar4 = iVar4 + 1;
      if (((int)*(short *)(iVar6 + iVar5) & param_1) != 0) {
        iVar7 = iVar7 + 1;
      }
    } while (iVar4 < (int)uVar8);
  }
  if ((int)uVar8 < (int)uVar9) {
    iVar4 = puVar2[3];
    do {
      iVar6 = uVar8 + 1;
      if (iVar4 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(iVar4 + 8);
      }
      iVar1 = uVar8 * 2;
      uVar8 = uVar8 + 2;
      if (((int)*(short *)(iVar5 + iVar1) & param_1) != 0) {
        iVar7 = iVar7 + 1;
      }
      if (iVar4 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(iVar4 + 8);
      }
      if (((int)*(short *)(iVar5 + iVar6 * 2) & param_1) != 0) {
        iVar7 = iVar7 + 1;
      }
    } while ((int)uVar8 < (int)uVar9);
  }
  iVar4 = FUN_4a0bcc84(local_34);
  if (iVar4 != 0) {
    iVar6 = 0;
    if (0 < local_2c) {
      do {
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_2c);
      if (iVar4 == 0) goto LAB_4a0fb9a0;
    }
    FUN_4a14f21c();
  }
LAB_4a0fb9a0:
  FUN_4a0c6bf4(local_34);
  return iVar7;
}



// Address: 4a0fb9c0

int FUN_4a0fb9c0(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_2 + 8);
  if (param_3 < iVar8) {
    uVar4 = iVar8 - param_3 & 1;
  }
  else {
    uVar4 = 0;
  }
  iVar5 = uVar4 + param_3;
  iVar2 = 0;
  if (param_3 < iVar5) {
    do {
      if (*(int *)(param_2 + 0xc) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(*(int *)(param_2 + 0xc) + 8);
      }
      iVar3 = param_3 * 2;
      param_3 = param_3 + 1;
      if (((int)*(short *)(iVar7 + iVar3) & param_1) != 0) {
        iVar2 = iVar2 + 1;
      }
    } while (param_3 < iVar5);
  }
  if (iVar8 <= iVar5) {
    return iVar2;
  }
  iVar7 = *(int *)(param_2 + 0xc);
  do {
    iVar6 = iVar5 + 1;
    iVar3 = 0;
    if (iVar7 != 0) {
      iVar3 = *(int *)(iVar7 + 8);
    }
    iVar1 = iVar5 * 2;
    iVar5 = iVar5 + 2;
    if (((int)*(short *)(iVar3 + iVar1) & param_1) != 0) {
      iVar2 = iVar2 + 1;
    }
    iVar3 = 0;
    if (iVar7 != 0) {
      iVar3 = *(int *)(iVar7 + 8);
    }
    if (((int)*(short *)(iVar3 + iVar6 * 2) & param_1) != 0) {
      iVar2 = iVar2 + 1;
    }
  } while (iVar5 < iVar8);
  return iVar2;
}



// Address: 4a0fba7c

undefined4 FUN_4a0fba7c(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x45c) == 2) {
    uVar1 = *(undefined4 *)(param_1 + 0x54);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Address: 4a0fba90

undefined4 FUN_4a0fba90(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x45c) == 1) {
    uVar1 = *(undefined4 *)(param_1 + 0x54);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Address: 4a0fbaa4

uint FUN_4a0fbaa4(uint param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined *local_30 [2];
  int local_28;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0(local_30);
  *puVar1 = PTR_PTR_4a0fbc00;
  puVar1[2] = *(undefined4 *)(param_2 + 8);
  piVar2 = *(int **)(param_2 + 0xc);
  puVar1[3] = piVar2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))();
  }
  local_30[0] = PTR_PTR_4a0fbc04;
  uVar6 = 0;
  *puVar1 = PTR_PTR_4a0fbc04;
  uVar5 = puVar1[2];
  if ((int)uVar5 < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = uVar5 & 1;
  }
  if (uVar7 != 0) {
    do {
      if (puVar1[3] == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(puVar1[3] + 8);
      }
      if (((int)*(short *)(iVar4 + uVar6 * 2) & param_1) != 0) goto LAB_4a0fbba8;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)uVar7);
  }
  if ((int)uVar7 < (int)uVar5) {
    iVar4 = puVar1[3];
    do {
      if (iVar4 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar4 + 8);
      }
      uVar6 = uVar7;
      if (((int)*(short *)(iVar3 + uVar7 * 2) & param_1) != 0) goto LAB_4a0fbba8;
      if (iVar4 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar4 + 8);
      }
      if (((int)*(short *)(iVar3 + (uVar7 + 1) * 2) & param_1) != 0) {
        uVar6 = uVar7 + 1;
        goto LAB_4a0fbba8;
      }
      uVar7 = uVar7 + 2;
    } while ((int)uVar7 < (int)uVar5);
  }
  uVar6 = 0xffffffff;
LAB_4a0fbba8:
  iVar4 = FUN_4a0bcc84(local_30);
  if (iVar4 != 0) {
    iVar3 = 0;
    if (0 < local_28) {
      do {
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_28);
      if (iVar4 == 0) goto LAB_4a0fbbe8;
    }
    FUN_4a14f21c();
  }
LAB_4a0fbbe8:
  FUN_4a0c6bf4(local_30);
  return uVar6;
}



// Address: 4a0fbc08

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0fbc08(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  undefined *apuStack_80 [2];
  int iStack_78;
  int *piStack_74;
  undefined1 auStack_6c [8];
  undefined4 uStack_64;
  int *piStack_60;
  undefined1 auStack_58 [8];
  undefined4 uStack_50;
  int *piStack_4c;
  undefined *apuStack_44 [2];
  int iStack_3c;
  int *piStack_38;
  int iStack_30;
  int *piStack_2c;
  int iStack_28;
  
  iStack_28 = param_1;
  iVar5 = FUN_4a098414(0xb3);
  if (iVar5 == 0) {
    return;
  }
  uVar6 = thunk_FUN_4a161570(0x10);
  piStack_2c = (int *)FUN_4a0bfc44(uVar6,iVar5);
  if (piStack_2c != (int *)0x0) {
    (**(code **)(*piStack_2c + 0xc))(piStack_2c);
  }
  iStack_30 = FUN_4a0bf920(piStack_2c);
  FUN_4a168f18(apuStack_44,iStack_30);
  puVar2 = PTR_PTR_4a0fc144;
  puVar1 = PTR_PTR_4a0fc140;
  iVar5 = 0;
  if (0 < iStack_30) {
    do {
      iVar7 = FUN_4a0bf920(piStack_2c);
      iVar14 = iVar7 * 2;
      piVar8 = (int *)FUN_4a0c6bc0(apuStack_80);
      iVar16 = 0;
      piVar8[2] = 0;
      piVar8[3] = 0;
      *piVar8 = (int)puVar2;
      if (0 < iVar14) {
        iVar9 = FUN_4a15e080(iVar7 << 2);
        if (iVar9 == 0) {
          iVar9 = FUN_4a1669a8();
        }
        iVar10 = 0;
        do {
          iVar13 = iVar10 * 2;
          iVar10 = iVar10 + 1;
          *(undefined2 *)(iVar9 + iVar13) = 0;
        } while (iVar10 < iVar14);
        thunk_FUN_4a161570(0x18);
        puVar11 = (undefined4 *)FUN_4a0c0628();
        puVar11[3] = 2;
        puVar11[4] = iVar14;
        puVar11[2] = iVar9;
        *puVar11 = puVar1;
        *(undefined1 *)(puVar11 + 5) = 1;
        if (puVar11 != (undefined4 *)0x0) {
          (**(code **)(puVar1 + 0xc))(puVar11);
        }
        (**(code **)(*piVar8 + 0x1c))(piVar8);
        piVar8[2] = iVar14;
        piVar8[3] = (int)puVar11;
      }
      puVar3 = PTR_DAT_4a0fc148;
      iVar14 = 0;
      iVar9 = 0;
      if (0 < iVar7) {
        do {
          uVar4 = FUN_4a0bf920(piStack_2c);
          if (piStack_74 == (int *)0x0) {
            iVar10 = 0;
          }
          else {
            iVar10 = piStack_74[2];
          }
          *(undefined2 *)(iVar10 + iVar14 * 2) = uVar4;
          iVar10 = FUN_4a0bfbdc(piStack_2c);
          iVar13 = iVar14 + 1;
          if (piStack_74 == (int *)0x0) {
            iVar12 = 0;
          }
          else {
            iVar12 = piStack_74[2];
          }
          iVar9 = iVar9 + 1;
          iVar14 = iVar14 + 2;
          *(undefined2 *)(iVar12 + iVar13 * 2) = *(undefined2 *)(puVar3 + iVar10 * 2);
        } while (iVar9 < iVar7);
      }
      piVar8 = piStack_74;
      iVar14 = iStack_78;
      if (piStack_38 != (int *)0x0) {
        iVar16 = piStack_38[2];
      }
      piVar15 = (int *)(iVar16 + iVar5 * 0x14);
      if (piStack_74 != (int *)0x0) {
        (**(code **)(*piStack_74 + 0xc))(piStack_74);
      }
      (**(code **)(*piVar15 + 0x1c))(piVar15);
      iVar7 = iStack_78;
      piVar15[2] = iVar14;
      piVar15[3] = (int)piVar8;
      apuStack_80[0] = puVar2;
      iVar14 = FUN_4a0bcc84(apuStack_80);
      if (iVar14 != 0) {
        iVar16 = 0;
        if (0 < iVar7) {
          do {
            iVar16 = iVar16 + 1;
          } while (iVar16 < iVar7);
          if (iVar14 == 0) goto LAB_4a0fbe58;
        }
        FUN_4a14f21c();
      }
LAB_4a0fbe58:
      FUN_4a0c6bf4(apuStack_80);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iStack_30);
  }
  iVar5 = FUN_4a0bf920(piStack_2c);
  FUN_4a16be24(auStack_58,iVar5 << 1);
  puVar1 = PTR_DAT_4a0fc148;
  iVar14 = 0;
  iVar7 = 0;
  if (0 < iVar5) {
    do {
      iVar16 = FUN_4a0bfbdc(piStack_2c);
      if (piStack_4c == (int *)0x0) {
        iVar9 = 0;
      }
      else {
        iVar9 = piStack_4c[2];
      }
      *(int *)(iVar9 + iVar14 * 4) = (int)*(short *)(puVar1 + iVar16 * 2);
      uVar6 = FUN_4a0bf62c(piStack_2c);
      if (piStack_4c == (int *)0x0) {
        iVar16 = 0;
      }
      else {
        iVar16 = piStack_4c[2];
      }
      iVar9 = iVar14 + 1;
      iVar7 = iVar7 + 1;
      iVar14 = iVar14 + 2;
      *(undefined4 *)(iVar16 + iVar9 * 4) = uVar6;
    } while (iVar7 < iVar5);
  }
  iVar5 = iStack_28;
  piVar8 = (int *)(iStack_28 + 0x468);
  if (piStack_4c != (int *)0x0) {
    (**(code **)(*piStack_4c + 0xc))(piStack_4c);
  }
  (**(code **)(*piVar8 + 0x1c))(piVar8);
  *(undefined4 *)(iVar5 + 0x470) = uStack_50;
  *(int **)(iVar5 + 0x474) = piStack_4c;
  iVar5 = FUN_4a0bf920(piStack_2c);
  FUN_4a16be24(auStack_6c,iVar5 << 1);
  puVar1 = PTR_DAT_4a0fc148;
  iVar14 = 0;
  iVar7 = 0;
  if (0 < iVar5) {
    do {
      iVar16 = FUN_4a0bfbdc(piStack_2c);
      if (piStack_60 == (int *)0x0) {
        iVar9 = 0;
      }
      else {
        iVar9 = piStack_60[2];
      }
      *(int *)(iVar9 + iVar14 * 4) = (int)*(short *)(puVar1 + iVar16 * 2);
      uVar6 = FUN_4a0bf62c(piStack_2c);
      if (piStack_60 == (int *)0x0) {
        iVar16 = 0;
      }
      else {
        iVar16 = piStack_60[2];
      }
      iVar9 = iVar14 + 1;
      iVar7 = iVar7 + 1;
      iVar14 = iVar14 + 2;
      *(undefined4 *)(iVar16 + iVar9 * 4) = uVar6;
    } while (iVar7 < iVar5);
  }
  iVar5 = iStack_28;
  piVar8 = (int *)(iStack_28 + 0x47c);
  if (piStack_60 != (int *)0x0) {
    (**(code **)(*piStack_60 + 0xc))(piStack_60);
  }
  (**(code **)(*piVar8 + 0x1c))(piVar8);
  *(undefined4 *)(iVar5 + 0x484) = uStack_64;
  *(int **)(iVar5 + 0x488) = piStack_60;
  (**(code **)(*piStack_2c + 0x20))(piStack_2c);
  if ((piStack_2c != (int *)0x0) && (iVar5 = (**(code **)(*piStack_2c + 8))(piStack_2c), iVar5 != 0)
     ) {
    (**(code **)(*piStack_2c + 4))(piStack_2c);
  }
  iVar14 = iStack_28;
  iVar5 = iStack_3c;
  piVar8 = (int *)(iStack_28 + 0x52c);
  if (piStack_38 != (int *)0x0) {
    (**(code **)(*piStack_38 + 0xc))(piStack_38);
  }
  (**(code **)(*piVar8 + 0x1c))(piVar8);
  *(int *)(iVar14 + 0x534) = iVar5;
  *(int **)(iVar14 + 0x538) = piStack_38;
  FUN_4a16bef4(auStack_6c);
  FUN_4a16bef4(auStack_58);
  apuStack_44[0] = PTR_PTR_4a0fc14c;
  iVar5 = FUN_4a0bcc84(apuStack_44);
  if (iVar5 != 0) {
    iVar14 = 0;
    if (0 < iStack_3c) {
      do {
        (*(code *)**(undefined4 **)(iVar5 + iVar14 * 0x14))();
        iVar14 = iVar14 + 1;
      } while (iVar14 < iStack_3c);
      if (iVar5 == 0) goto LAB_4a0fc12c;
    }
    FUN_4a14f21c(iVar5);
  }
LAB_4a0fc12c:
  FUN_4a0c6bf4(apuStack_44);
  return;
}



// Address: 4a0fc150

undefined4 FUN_4a0fc150(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(iVar3 + 8);
  }
  uVar5 = *piVar1 + 5;
  if ((int)uVar5 < 6) {
    uVar6 = 0;
  }
  else {
    uVar6 = (uVar5 ^ 0xfffffffb) & 1;
  }
  iVar2 = 5;
  if (5 < uVar6 + 5) {
    do {
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar3 + 8);
      }
      if (*(int *)(iVar4 + iVar2 * 4) == param_2) {
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uVar6 + 5));
  }
  iVar2 = uVar6 + 5;
  while( true ) {
    if ((int)uVar5 <= iVar2) {
      return 0;
    }
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar3 + 8);
    }
    if (*(int *)(iVar4 + iVar2 * 4) == param_2) break;
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar3 + 8);
    }
    if (*(int *)(iVar4 + (iVar2 + 1) * 4) == param_2) {
      return 1;
    }
    iVar2 = iVar2 + 2;
  }
  return 1;
}



// Address: 4a0fc21c

void FUN_4a0fc21c(int param_1)

{
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  *(undefined4 *)(param_1 + 0x4ec) = 0;
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  *(undefined4 *)(param_1 + 0x4f4) = 0;
  *(undefined4 *)(param_1 + 0x4f8) = 0;
  *(undefined4 *)(param_1 + 0x4fc) = 0;
  *(undefined4 *)(param_1 + 0x500) = 0;
  *(undefined4 *)(param_1 + 0x504) = 0;
  return;
}



// Address: 4a0fc268

void FUN_4a0fc268(void)

{
  return;
}



// Address: 4a0fc26c

undefined4 FUN_4a0fc26c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x5c);
}



// Address: 4a0fc274

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void switchD_4a110030::default(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  *(undefined4 *)(param_1 + 0x490) = 0;
  iVar1 = *(int *)(param_1 + 0x470) >> 1;
  iVar2 = *(int *)(param_1 + 0x470) + *(int *)(param_1 + 0x484) >> 1;
  uVar6 = *(undefined4 *)(param_1 + 0x60);
  if (iVar2 < 1) {
    return;
  }
  do {
    iVar3 = *(int *)(param_1 + 0x490);
    if (iVar3 < iVar1) {
      if (*(int *)(param_1 + 0x474) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(param_1 + 0x474) + 8);
      }
      if ((*(uint *)(iVar4 + (iVar3 * 2 + 1) * 4) & param_2) != 0) {
        iVar3 = 1;
        while( true ) {
          if (*(int *)(param_1 + 0x474) == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)(*(int *)(param_1 + 0x474) + 8);
          }
          iVar4 = FUN_4a09ad94(uVar6,*(undefined4 *)(iVar4 + *(int *)(param_1 + 0x490) * 8));
          if ((iVar4 != 0) || (1 < iVar3)) break;
          iVar3 = iVar3 + 1;
        }
        *(int *)(param_1 + 0x490) = *(int *)(param_1 + 0x490) + 1;
      }
    }
    else {
      iVar3 = iVar3 - iVar1;
      iVar4 = *(int *)(param_1 + 0x488);
      if (iVar4 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(iVar4 + 8);
      }
      if ((*(uint *)(iVar5 + (iVar3 * 2 + 1) * 4) & param_2) != 0) {
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(iVar4 + 8);
        }
        FUN_4a09f864(param_1 + 0x128,*(undefined4 *)(iVar4 + iVar3 * 8));
      }
    }
    iVar3 = *(int *)(param_1 + 0x490) + 1;
    *(int *)(param_1 + 0x490) = iVar3;
  } while (iVar3 < iVar2);
  return;
}



// Address: 4a0fc394

undefined4 FUN_4a0fc394(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar2 = *(int *)(param_1 + 0x470);
  iVar5 = *(int *)(param_1 + 0x484);
  iVar1 = iVar2 >> 1;
  uVar7 = *(undefined4 *)(param_1 + 0x60);
  iVar3 = *(int *)(param_1 + 0x490);
  while (iVar3 < iVar2 + iVar5 >> 1) {
    iVar3 = *(int *)(param_1 + 0x490);
    if (iVar3 < iVar1) {
      if (*(int *)(param_1 + 0x474) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(param_1 + 0x474) + 8);
      }
      if ((*(uint *)(iVar4 + (iVar3 * 2 + 1) * 4) & param_2) != 0) {
        iVar3 = 1;
        while( true ) {
          if (*(int *)(param_1 + 0x474) == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)(*(int *)(param_1 + 0x474) + 8);
          }
          iVar4 = FUN_4a09ad94(uVar7,*(undefined4 *)(iVar4 + *(int *)(param_1 + 0x490) * 8));
          if ((iVar4 != 0) || (1 < iVar3)) break;
          iVar3 = iVar3 + 1;
        }
        *(int *)(param_1 + 0x490) = *(int *)(param_1 + 0x490) + 1;
      }
    }
    else {
      iVar3 = iVar3 - iVar1;
      iVar4 = *(int *)(param_1 + 0x488);
      if (iVar4 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(iVar4 + 8);
      }
      if ((*(uint *)(iVar6 + (iVar3 * 2 + 1) * 4) & param_2) != 0) {
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(iVar4 + 8);
        }
        FUN_4a09f864(param_1 + 0x128,*(undefined4 *)(iVar4 + iVar3 * 8));
      }
    }
    iVar3 = *(int *)(param_1 + 0x490) + 1;
    *(int *)(param_1 + 0x490) = iVar3;
  }
  return 1;
}



// Address: 4a0fc4b0

void FUN_4a0fc4b0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = *(int *)(param_1 + 0xc);
  piVar4 = (int *)0x0;
  if (iVar3 != 0) {
    piVar1 = *(int **)(iVar3 + 8);
  }
  else {
    piVar1 = (int *)0x0;
  }
  iVar2 = *piVar1;
  if (iVar3 != 0) {
    iVar3 = *(int *)(iVar3 + 8);
  }
  else {
    iVar3 = 0;
  }
  *(undefined4 *)(iVar3 + (iVar2 + 5) * 4) = param_2;
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar4 = *(int **)(*(int *)(param_1 + 0xc) + 8);
  }
  *piVar4 = iVar2 + 1;
  return;
}



// Address: 4a0fc560

void FUN_4a0fc560(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x524) = param_2;
  *(undefined4 *)(param_1 + 0x528) = 0xffffffff;
  return;
}



// Address: 4a0fc570

void FUN_4a0fc570(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x45c) == 2) {
    iVar2 = *(int *)(param_1 + 0x54);
  }
  else {
    iVar2 = 0;
  }
  iVar2 = *(int *)(iVar2 + 0x5f8);
  *(undefined4 *)(param_1 + 0x540) = *(undefined4 *)(iVar2 + 0x44);
  *(undefined4 *)(param_1 + 0x544) = *(undefined4 *)(iVar2 + 0x4c);
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x550) = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_1 + 0x548) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(param_1 + 0x54c) = *(undefined4 *)(param_2 + 0x4c);
    uVar1 = FUN_4a146a9c();
    *(undefined4 *)(param_1 + 0x550) = uVar1;
  }
  *(undefined4 *)(param_1 + 0x524) = 0xffffffff;
  return;
}



// Address: 4a0fc5d4

undefined8
FUN_4a0fc5d4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int in_r12;
  int iVar5;
  int iVar6;
  
  iVar2 = *(int *)(param_1 + 0x368);
  iVar6 = *(int *)(param_1 + 0x358);
  if (iVar2 != 0) {
    in_r12 = *(int *)(iVar2 + 8);
  }
  iVar1 = 0;
  if (iVar2 == 0) {
    in_r12 = 0;
  }
  iVar5 = *(int *)(in_r12 + iVar6 * 4);
  if (0x31 < iVar5) {
    return 0x4a0fc6f44a0c7344;
  }
  iVar4 = iVar1;
  if (iVar2 != 0) {
    iVar4 = *(int *)(iVar2 + 8);
  }
  piVar3 = (int *)(iVar4 + iVar6 * 4);
  *piVar3 = *piVar3 + 1;
  iVar2 = iVar1;
  if (*(int *)(param_1 + 0x37c) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x37c) + 8);
  }
  iVar4 = *(int *)(iVar2 + iVar6 * 0x14 + 0xc);
  iVar2 = iVar1;
  if (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 8);
  }
  *(undefined4 *)(iVar2 + iVar5 * 4) = param_2;
  iVar2 = iVar1;
  if (*(int *)(param_1 + 0x390) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x390) + 8);
  }
  iVar4 = *(int *)(iVar2 + iVar6 * 0x14 + 0xc);
  iVar2 = iVar1;
  if (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 8);
  }
  *(undefined4 *)(iVar2 + iVar5 * 4) = param_3;
  iVar2 = iVar1;
  if (*(int *)(param_1 + 0x3a4) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x3a4) + 8);
  }
  iVar4 = *(int *)(iVar2 + iVar6 * 0x14 + 0xc);
  iVar2 = iVar1;
  if (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 8);
  }
  *(undefined4 *)(iVar2 + iVar5 * 4) = param_4;
  iVar2 = iVar1;
  if (*(int *)(param_1 + 0x3b8) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x3b8) + 8);
  }
  iVar4 = *(int *)(iVar2 + iVar6 * 0x14 + 0xc);
  iVar2 = iVar1;
  if (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 8);
  }
  *(undefined4 *)(iVar2 + iVar5 * 4) = param_5;
  iVar4 = iVar1;
  if (*(int *)(param_1 + 0x3cc) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x3cc) + 8);
  }
  iVar6 = *(int *)(iVar4 + iVar6 * 0x14 + 0xc);
  if (iVar6 != 0) {
    iVar1 = *(int *)(iVar6 + 8);
  }
  *(undefined4 *)(iVar1 + iVar5 * 4) = param_6;
  return CONCAT44(iVar2,iVar6);
}



// Address: 4a0fc728

void FUN_4a0fc728(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_4a161570(0x560);
  uVar1 = FUN_4a0ff5dc(uVar1,0,param_1);
  *(undefined4 *)PTR_DAT_4a0fc754 = uVar1;
  return;
}



// Address: 4a0fc758

void FUN_4a0fc758(int param_1)

{
  *(undefined4 *)(param_1 + 0x490) = 0;
  return;
}



// Address: 4a0fc764

undefined4 FUN_4a0fc764(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [8];
  int local_30;
  undefined1 auStack_24 [12];
  
  FUN_4a0bedd4(auStack_24);
  if (*(int *)(param_1 + 0x38) == 0) {
    FUN_4a0beb58(auStack_24,PTR_s_sim3dat_4a0fc9c8);
  }
  else {
    FUN_4a0beb58(auStack_24,PTR_s_sim3dat_demo_4a0fc9c4);
  }
  FUN_4a0bec48(auStack_24,*(undefined4 *)(param_1 + 0x4a0));
  piVar3 = (int *)FUN_4a13cff4(auStack_24);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
  }
  bVar1 = false;
  FUN_4a0fecbc(auStack_38,param_1,piVar3);
  if (local_30 == 0) goto LAB_4a0fc8d0;
  uVar4 = thunk_FUN_4a161570(0x20);
  uVar4 = FUN_4a0c107c(uVar4,auStack_38);
  FUN_4a0bfc44(auStack_48,uVar4);
  iVar5 = FUN_4a0bf62c(auStack_48);
  if (iVar5 == 0x82) {
    uVar4 = FUN_4a0bf62c(auStack_48);
    *(undefined4 *)(param_1 + 0x4bc) = 0;
    *(undefined4 *)(param_1 + 0x4b8) = uVar4;
    uVar2 = FUN_4a0bf53c(auStack_48);
    *(undefined1 *)(param_1 + 0x496) = uVar2;
    FUN_4a0dcd24(*(undefined4 *)(param_1 + 0x51c),auStack_48);
    FUN_4a0f5b78(*(undefined4 *)(param_1 + 0x520),auStack_48);
  }
  else {
    if (iVar5 == 0x8b || iVar5 == 0x8a) {
      uVar4 = FUN_4a0bf62c(auStack_48);
      *(undefined4 *)(param_1 + 0x4b8) = uVar4;
      uVar4 = FUN_4a0bf62c(auStack_48);
      *(undefined4 *)(param_1 + 0x4bc) = uVar4;
      uVar2 = FUN_4a0bf53c(auStack_48);
      *(undefined1 *)(param_1 + 0x496) = uVar2;
      FUN_4a0d7d28(*(undefined4 *)(param_1 + 0x51c),auStack_48,iVar5);
      FUN_4a0f0ca4(*(undefined4 *)(param_1 + 0x520),auStack_48);
      if ((iVar5 != 0x8b) || (iVar5 = FUN_4a0bf62c(auStack_48), iVar5 == 0x8b)) goto LAB_4a0fc8bc;
    }
    bVar1 = true;
  }
LAB_4a0fc8bc:
  *(undefined4 *)(param_1 + 0x524) = 0;
  FUN_4a0bfcf4(auStack_48);
  if (!bVar1) {
    FUN_4a16b6c0(auStack_38);
    if ((piVar3 != (int *)0x0) && (iVar5 = (**(code **)(*piVar3 + 8))(piVar3), iVar5 != 0)) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    FUN_4a0bee50(auStack_24);
    return 1;
  }
LAB_4a0fc8d0:
  *(undefined4 *)(param_1 + 0x4b8) = 0;
  *(undefined4 *)(param_1 + 0x4bc) = 0;
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  *(undefined4 *)(param_1 + 0x4ec) = 0;
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  *(undefined4 *)(param_1 + 0x4f4) = 0;
  *(undefined4 *)(param_1 + 0x4f8) = 0;
  *(undefined4 *)(param_1 + 0x4fc) = 0;
  *(undefined4 *)(param_1 + 0x500) = 0;
  *(undefined4 *)(param_1 + 0x504) = 0;
  *(undefined1 *)(param_1 + 0x496) = 0;
  FUN_4a0d95f8(*(undefined4 *)(param_1 + 0x51c));
  FUN_4a0f1b38(*(undefined4 *)(param_1 + 0x520));
  FUN_4a0fca00(param_1);
  FUN_4a16b6c0(auStack_38);
  if ((piVar3 != (int *)0x0) && (iVar5 = (**(code **)(*piVar3 + 8))(piVar3), iVar5 != 0)) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  FUN_4a0bee50(auStack_24);
  return 0;
}



// Address: 4a0fca00

int FUN_4a0fca00(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [20];
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [20];
  
  *(uint *)(param_1 + 0x4c8) = *(uint *)(param_1 + 0x4c8) | *(uint *)(param_1 + 0x4e8);
  *(uint *)(param_1 + 0x4cc) = *(uint *)(param_1 + 0x4cc) | *(uint *)(param_1 + 0x4ec);
  *(uint *)(param_1 + 0x4d0) = *(uint *)(param_1 + 0x4d0) | *(uint *)(param_1 + 0x4f0);
  *(uint *)(param_1 + 0x4d4) = *(uint *)(param_1 + 0x4d4) | *(uint *)(param_1 + 0x4f4);
  *(uint *)(param_1 + 0x4d8) = *(uint *)(param_1 + 0x4d8) | *(uint *)(param_1 + 0x4f8);
  *(uint *)(param_1 + 0x4dc) = *(uint *)(param_1 + 0x4dc) | *(uint *)(param_1 + 0x4fc);
  *(uint *)(param_1 + 0x4e0) = *(uint *)(param_1 + 0x4e0) | *(uint *)(param_1 + 0x500);
  *(uint *)(param_1 + 0x4e4) = *(uint *)(param_1 + 0x4e4) | *(uint *)(param_1 + 0x504);
  FUN_4a0fdf10(param_1);
  thunk_FUN_4a161570(0x24);
  uVar1 = FUN_4a0c2818();
  FUN_4a0c0198(auStack_2c,uVar1);
  FUN_4a0bfed4(auStack_2c,0x8b);
  FUN_4a0bfed4(auStack_2c,*(undefined4 *)(param_1 + 0x4b8));
  FUN_4a0bfed4(auStack_2c,*(undefined4 *)(param_1 + 0x4bc));
  FUN_4a0bfe0c(auStack_2c,*(undefined1 *)(param_1 + 0x496));
  FUN_4a0d8658(*(undefined4 *)(param_1 + 0x51c),auStack_2c);
  FUN_4a0f1178(*(undefined4 *)(param_1 + 0x520),auStack_2c);
  FUN_4a0bfed4(auStack_2c,0x8b);
  FUN_4a0c254c(auStack_40,uVar1);
  FUN_4a0bfe18(auStack_2c);
  FUN_4a0bedd4(auStack_4c);
  if (*(int *)(param_1 + 0x38) == 0) {
    FUN_4a0beb58(auStack_4c,PTR_s_sim3dat_4a0fcc08);
  }
  else {
    FUN_4a0beb58(auStack_4c,PTR_s_sim3dat_demo_4a0fcc04);
  }
  FUN_4a0bec48(auStack_4c,*(undefined4 *)(param_1 + 0x4a0));
  piVar2 = (int *)FUN_4a13cff4(auStack_4c);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))();
  }
  uVar1 = FUN_4a16b5a0(auStack_20,auStack_40);
  FUN_4a0ff2ac(param_1,piVar2,uVar1);
  FUN_4a16b6c0(auStack_20);
  iVar4 = 1 - (uint)*(byte *)(param_1 + 0x34);
  if (1 < *(byte *)(param_1 + 0x34)) {
    iVar4 = 0;
  }
  if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 8))(piVar2), iVar3 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  FUN_4a0bee50(auStack_4c);
  FUN_4a16b6c0(auStack_40);
  FUN_4a0c0264(auStack_2c);
  return iVar4;
}



// Address: 4a0fcc0c

void FUN_4a0fcc0c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [12];
  int iStack_14;
  
  *(int *)(param_1 + 0x49c) = param_2;
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
    FUN_4a06c1f4(param_1 + 0x278,*(undefined4 *)(iVar1 + param_2 * 4));
    FUN_4a169628(auStack_20);
    return;
  }
  return;
}



// Address: 4a0fcc1c

void FUN_4a0fcc1c(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x470)) {
    do {
      iVar1 = *(int *)(param_1 + 0x474);
      if (iVar1 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar1 + 8);
      }
      if ((*(uint *)(iVar2 + (iVar3 * 2 + 1) * 4) & param_2) != 0) {
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(iVar1 + 8);
        }
        uVar4 = *(undefined4 *)(iVar1 + iVar3 * 8);
        if (param_3 == -1) {
          iVar1 = 0;
          do {
            FUN_4a0992b8(uVar4,iVar1);
            iVar1 = iVar1 + 1;
          } while (iVar1 < 1);
        }
        else {
          FUN_4a0992b8(uVar4,param_3);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 * 2 < *(int *)(param_1 + 0x470));
  }
  iVar3 = 0;
  if (*(int *)(param_1 + 0x484) < 1) {
    return;
  }
  do {
    iVar2 = *(int *)(param_1 + 0x488);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
    }
    if ((*(uint *)(iVar1 + (iVar3 + 1) * 4) & param_2) != 0) {
      iVar1 = 0;
      if (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 8);
      }
      FUN_4a09fa1c(param_1 + 0x128,*(undefined4 *)(iVar1 + iVar3 * 4));
    }
    iVar3 = iVar3 + 2;
  } while (iVar3 < *(int *)(param_1 + 0x484));
  return;
}



// Address: 4a0fcd24

uint FUN_4a0fcd24(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_20 [12];
  int local_14;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0(auStack_20);
  *puVar1 = PTR_PTR_4a0fcfe0;
  puVar1[2] = *(undefined4 *)(param_1 + 0x3fc);
  piVar3 = *(int **)(param_1 + 0x400);
  puVar1[3] = piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
  }
  *puVar1 = PTR_PTR_4a0fcfe4;
  uVar2 = *(int *)(param_1 + 0x408) - 1;
  if (-1 < (int)uVar2) {
    do {
      if (local_14 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(local_14 + 8);
      }
      if (*(int *)(iVar4 + uVar2 * 4) < 0) {
        if (local_14 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(local_14 + 8);
        }
        *(uint *)(param_1 + 0x3ec) = *(uint *)(param_1 + 0x3ec) & ~-*(int *)(iVar4 + uVar2 * 4);
        if (local_14 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(local_14 + 8);
        }
        if (*(int *)(iVar4 + uVar2 * 4) != -0x20000) {
          if (local_14 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)(local_14 + 8);
          }
          if (*(int *)(iVar4 + uVar2 * 4) != -0x40000) {
            if (local_14 == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = *(int *)(local_14 + 8);
            }
            if (*(int *)(iVar4 + uVar2 * 4) != -0x80000) goto LAB_4a0fce1c;
          }
        }
        *(undefined4 *)(param_1 + 0x3f0) = 0;
      }
LAB_4a0fce1c:
      uVar2 = uVar2 - 1;
    } while (uVar2 < 0x80000000);
  }
  uVar2 = *(int *)(param_1 + 0x408) - 1;
  if (-1 < (int)uVar2) {
    do {
      if (local_14 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(local_14 + 8);
      }
      if (0 < *(int *)(iVar4 + uVar2 * 4)) {
        if (local_14 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(local_14 + 8);
        }
        *(uint *)(param_1 + 0x3ec) = *(uint *)(iVar4 + uVar2 * 4) | *(uint *)(param_1 + 0x3ec);
        if (local_14 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(local_14 + 8);
        }
        if (*(int *)(iVar4 + uVar2 * 4) == 0x80000) {
          uVar5 = *(uint *)(param_1 + 0x3f0) | 2;
LAB_4a0fceec:
          *(uint *)(param_1 + 0x3f0) = uVar5;
        }
        else {
          if (local_14 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)(local_14 + 8);
          }
          if (*(int *)(iVar4 + uVar2 * 4) == 0x40000) {
            *(uint *)(param_1 + 0x3f0) = *(uint *)(param_1 + 0x3f0) | *(uint *)(param_1 + 0x420);
          }
          else {
            if (local_14 == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = *(int *)(local_14 + 8);
            }
            if (*(int *)(iVar4 + uVar2 * 4) == 0x20000) {
              uVar5 = *(uint *)(param_1 + 0x3f0) | *(uint *)(param_1 + 0x424);
              goto LAB_4a0fceec;
            }
          }
        }
      }
      uVar2 = uVar2 - 1;
    } while (uVar2 < 0x80000000);
  }
  uVar5 = 1;
  uVar2 = 0;
  do {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x408)) {
      do {
        if (local_14 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(local_14 + 8);
        }
        if (*(int *)(iVar6 + iVar4 * 4) < 0) {
          if (local_14 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(local_14 + 8);
          }
          uVar2 = uVar2 | -*(int *)(iVar6 + iVar4 * 4);
        }
        else if (1 << (uVar5 & 0xff) == uVar2) {
          if (local_14 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(local_14 + 8);
          }
          if (0 < *(int *)(iVar6 + iVar4 * 4)) {
            if (local_14 == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(local_14 + 8);
            }
            uVar2 = uVar2 & ~*(uint *)(iVar6 + iVar4 * 4);
          }
        }
        if (local_14 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(local_14 + 8);
        }
        *(undefined4 *)(iVar6 + iVar4 * 4) = 0;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x408));
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 0x13);
  *(undefined4 *)(param_1 + 0x408) = 0;
  FUN_4a16bef4(auStack_20);
  return uVar2;
}



// Address: 4a0fcfe8

void FUN_4a0fcfe8(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *apiStack_28 [2];
  
  FUN_4a06b618(param_1 + 0x278);
  FUN_4a06ca90(param_1 + 0x278);
  apiStack_28[0] = param_4;
  uVar1 = thunk_FUN_4a161570(0x14);
  apiStack_28[0] = (int *)FUN_4a0c707c(uVar1,s_font_9_4a06d814);
  if (apiStack_28[0] != (int *)0x0) {
    (**(code **)(*apiStack_28[0] + 0xc))();
  }
  uVar1 = FUN_4a0c48cc(apiStack_28,0x41100000);
  piVar4 = apiStack_28[0];
  if ((apiStack_28[0] != (int *)0x0) &&
     (iVar2 = (**(code **)(*apiStack_28[0] + 8))(apiStack_28[0]), iVar2 != 0)) {
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
  FUN_4a16d2f0(param_1 + 0x294,uVar1);
  uVar1 = thunk_FUN_4a161570(0x14);
  apiStack_28[0] = (int *)FUN_4a0c707c(uVar1,s_font_12_4a06d81c);
  if (apiStack_28[0] != (int *)0x0) {
    (**(code **)(*apiStack_28[0] + 0xc))();
  }
  uVar1 = FUN_4a0c48cc(apiStack_28,0x41400000);
  piVar4 = apiStack_28[0];
  if ((apiStack_28[0] != (int *)0x0) &&
     (iVar2 = (**(code **)(*apiStack_28[0] + 8))(apiStack_28[0]), iVar2 != 0)) {
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
  FUN_4a16d2f0(param_1 + 0x294,uVar1);
  uVar1 = thunk_FUN_4a161570(0x14);
  apiStack_28[0] = (int *)FUN_4a0c707c(uVar1,s_font_12_4a06d81c);
  if (apiStack_28[0] != (int *)0x0) {
    (**(code **)(*apiStack_28[0] + 0xc))();
  }
  uVar1 = FUN_4a0c48cc(apiStack_28,0x41400000);
  piVar4 = apiStack_28[0];
  if ((apiStack_28[0] != (int *)0x0) &&
     (iVar2 = (**(code **)(*apiStack_28[0] + 8))(apiStack_28[0]), iVar2 != 0)) {
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
  FUN_4a16d2f0(param_1 + 0x294,uVar1);
  uVar1 = thunk_FUN_4a161570(0x14);
  apiStack_28[0] = (int *)FUN_4a0c707c(uVar1,s_font_12_4a06d81c);
  if (apiStack_28[0] != (int *)0x0) {
    (**(code **)(*apiStack_28[0] + 0xc))();
  }
  uVar1 = FUN_4a0c48cc(apiStack_28,0x41400000);
  piVar4 = apiStack_28[0];
  if ((apiStack_28[0] != (int *)0x0) &&
     (iVar2 = (**(code **)(*apiStack_28[0] + 8))(apiStack_28[0]), iVar2 != 0)) {
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
  FUN_4a16d2f0(param_1 + 0x294,uVar1);
  uVar1 = thunk_FUN_4a161570(0x14);
  apiStack_28[0] = (int *)FUN_4a0c707c(uVar1,s_font_12_4a06d81c);
  if (apiStack_28[0] != (int *)0x0) {
    (**(code **)(*apiStack_28[0] + 0xc))();
  }
  uVar1 = FUN_4a0c48cc(apiStack_28,0x41400000);
  piVar4 = apiStack_28[0];
  if ((apiStack_28[0] != (int *)0x0) &&
     (iVar2 = (**(code **)(*apiStack_28[0] + 8))(apiStack_28[0]), iVar2 != 0)) {
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
  FUN_4a16d2f0(param_1 + 0x294,uVar1);
  uVar1 = thunk_FUN_4a161570(0x14);
  apiStack_28[0] = (int *)FUN_4a0c707c(uVar1,s_font_12_4a06d81c);
  if (apiStack_28[0] != (int *)0x0) {
    (**(code **)(*apiStack_28[0] + 0xc))();
  }
  uVar1 = FUN_4a0c48cc(apiStack_28,0x41400000);
  piVar4 = apiStack_28[0];
  if ((apiStack_28[0] != (int *)0x0) &&
     (iVar5 = (**(code **)(*apiStack_28[0] + 8))(apiStack_28[0]), iVar5 != 0)) {
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
  FUN_4a16d2f0(param_1 + 0x294,uVar1);
  uVar1 = thunk_FUN_4a161570(0x14);
  apiStack_28[0] = (int *)FUN_4a0c707c(uVar1,s_font_15_4a06dd70);
  if (apiStack_28[0] != (int *)0x0) {
    (**(code **)(*apiStack_28[0] + 0xc))();
  }
  uVar1 = FUN_4a0c48cc(apiStack_28,0x41700000);
  piVar4 = apiStack_28[0];
  if ((apiStack_28[0] != (int *)0x0) &&
     (iVar5 = (**(code **)(*apiStack_28[0] + 8))(apiStack_28[0]), iVar5 != 0)) {
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
  FUN_4a16d2f0(param_1 + 0x294,uVar1);
  uVar1 = thunk_FUN_4a161570(0x14);
  apiStack_28[0] = (int *)FUN_4a0c707c(uVar1,s_font_15_4a06dd70);
  if (apiStack_28[0] != (int *)0x0) {
    (**(code **)(*apiStack_28[0] + 0xc))();
  }
  uVar1 = FUN_4a0c48cc(apiStack_28,0x41700000);
  piVar4 = apiStack_28[0];
  if ((apiStack_28[0] != (int *)0x0) &&
     (iVar2 = (**(code **)(*apiStack_28[0] + 8))(apiStack_28[0]), iVar2 != 0)) {
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
  FUN_4a16d2f0(param_1 + 0x294,uVar1);
  return;
}



// Address: 4a0fd00c

void FUN_4a0fd00c(int param_1)

{
  *(undefined4 *)(param_1 + 0x3f0) = 0;
  *(uint *)(param_1 + 0x3ec) = *(uint *)(param_1 + 0x3ec) & 0xfff7ffff;
  return;
}



// Address: 4a0fd024

undefined1 FUN_4a0fd024(int param_1)

{
  return *(undefined1 *)(param_1 + 0x458);
}



// Address: 4a0fd02c

void FUN_4a0fd02c(int param_1)

{
  *(undefined1 *)(param_1 + 0x4c0) = 0;
  *(undefined4 *)(param_1 + 0x4c8) = 0;
  *(undefined4 *)(param_1 + 0x4cc) = 0;
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  *(undefined4 *)(param_1 + 0x4d8) = 0;
  *(undefined4 *)(param_1 + 0x4dc) = 0;
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  *(undefined4 *)(param_1 + 0x4e4) = 0;
  return;
}



// Address: 4a0fd058

void FUN_4a0fd058(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 auStack_e0 [5];
  undefined1 auStack_cc [20];
  undefined1 auStack_b8 [8];
  undefined4 uStack_b0;
  undefined1 auStack_a4 [8];
  undefined4 uStack_9c;
  undefined1 auStack_90 [8];
  undefined4 uStack_88;
  undefined1 auStack_7c [8];
  undefined4 uStack_74;
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  undefined1 auStack_54 [8];
  undefined4 uStack_4c;
  undefined1 auStack_40 [20];
  undefined1 auStack_2c [24];
  
  *(undefined4 *)(param_1 + 0x4b8) = 0;
  *(undefined4 *)(param_1 + 0x4bc) = 0;
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  *(undefined4 *)(param_1 + 0x4ec) = 0;
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  *(undefined4 *)(param_1 + 0x4f4) = 0;
  *(undefined4 *)(param_1 + 0x4f8) = 0;
  *(undefined4 *)(param_1 + 0x4fc) = 0;
  *(undefined4 *)(param_1 + 0x500) = 0;
  *(undefined4 *)(param_1 + 0x504) = 0;
  *(undefined1 *)(param_1 + 0x496) = 0;
  FUN_4a0d95f8(*(undefined4 *)(param_1 + 0x51c));
  iVar2 = *(int *)(param_1 + 0x520);
  *(undefined1 *)(iVar2 + 0x31c) = 0;
  *(undefined1 *)(iVar2 + 0x31c) = 0;
  if (*(int *)(iVar2 + 0x32c) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(iVar2 + 0x32c) + 8);
  }
  if (iVar1 == 0) {
    iVar1 = FUN_4a16b5f8(auStack_cc,0x96);
    uVar6 = *(undefined4 *)(iVar1 + 8);
    piVar5 = *(int **)(iVar1 + 0xc);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
    }
    (**(code **)(*(int *)(iVar2 + 800) + 0x1c))((int *)(iVar2 + 800));
    *(undefined4 *)(iVar2 + 0x328) = uVar6;
    *(int **)(iVar2 + 0x32c) = piVar5;
    FUN_4a16b6c0(auStack_cc);
    iVar1 = FUN_4a16b5f8(auStack_cc,0x96);
    uVar6 = *(undefined4 *)(iVar1 + 8);
    piVar5 = *(int **)(iVar1 + 0xc);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
    }
    (**(code **)(*(int *)(iVar2 + 0x334) + 0x1c))((int *)(iVar2 + 0x334));
    *(undefined4 *)(iVar2 + 0x33c) = uVar6;
    *(int **)(iVar2 + 0x340) = piVar5;
    FUN_4a16b6c0(auStack_cc);
    iVar1 = FUN_4a16c0cc(auStack_e0,0x96);
    uVar6 = *(undefined4 *)(iVar1 + 8);
    piVar5 = *(int **)(iVar1 + 0xc);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
    }
    (**(code **)(*(int *)(iVar2 + 0x348) + 0x1c))((int *)(iVar2 + 0x348));
    *(undefined4 *)(iVar2 + 0x350) = uVar6;
    *(int **)(iVar2 + 0x354) = piVar5;
    FUN_4a16c1a0(auStack_e0);
    iVar1 = FUN_4a16b5f8(auStack_cc,0x96);
    uVar6 = *(undefined4 *)(iVar1 + 8);
    piVar5 = *(int **)(iVar1 + 0xc);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
    }
    (**(code **)(*(int *)(iVar2 + 0x35c) + 0x1c))((int *)(iVar2 + 0x35c));
    *(undefined4 *)(iVar2 + 0x364) = uVar6;
    *(int **)(iVar2 + 0x368) = piVar5;
    FUN_4a16b6c0(auStack_cc);
  }
  iVar1 = FUN_4a16c074(auStack_2c,iVar2 + 0x348);
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 8)) {
    do {
      if (*(int *)(iVar1 + 0xc) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(iVar1 + 0xc) + 8);
      }
      *(undefined2 *)(iVar4 + iVar3 * 2) = 0xffff;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar1 + 8));
  }
  FUN_4a16c1a0(auStack_2c);
  if (*(int *)(iVar2 + 0x2d4) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x2d4) + 8);
  }
  FUN_4a16b5a0(auStack_54,uVar6);
  if (*(int *)(iVar2 + 0x2e8) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x2e8) + 8);
  }
  FUN_4a16b5a0(auStack_68,uVar6);
  if (*(int *)(iVar2 + 0x2fc) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x2fc) + 8);
  }
  FUN_4a16c074(auStack_7c,uVar6);
  if (*(int *)(iVar2 + 0x310) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x310) + 8);
  }
  FUN_4a16b5a0(auStack_90,uVar6);
  auStack_e0[0] = uStack_4c;
  FUN_4a16c410(auStack_54,0,iVar2 + 800);
  auStack_e0[0] = uStack_60;
  FUN_4a16c410(auStack_68,0,iVar2 + 0x334);
  auStack_e0[0] = uStack_74;
  FUN_4a0c746c(auStack_7c,0,iVar2 + 0x348);
  auStack_e0[0] = uStack_88;
  FUN_4a16c410(auStack_90,0,iVar2 + 0x35c);
  if (*(int *)(iVar2 + 0x220) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x220) + 8);
  }
  FUN_4a16b5a0(auStack_a4,uVar6);
  if (*(int *)(iVar2 + 0x20c) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x20c) + 8);
  }
  FUN_4a16b5a0(auStack_b8,uVar6);
  iVar1 = FUN_4a16b5f8(auStack_40,uStack_9c);
  uVar6 = *(undefined4 *)(iVar1 + 8);
  piVar5 = *(int **)(iVar1 + 0xc);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))(piVar5);
  }
  (**(code **)(*(int *)(iVar2 + 0x370) + 0x1c))((int *)(iVar2 + 0x370));
  *(undefined4 *)(iVar2 + 0x378) = uVar6;
  *(int **)(iVar2 + 0x37c) = piVar5;
  FUN_4a16b6c0(auStack_40);
  iVar1 = FUN_4a16b5f8(auStack_40,uStack_b0);
  uVar6 = *(undefined4 *)(iVar1 + 8);
  piVar5 = *(int **)(iVar1 + 0xc);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))(piVar5);
  }
  (**(code **)(*(int *)(iVar2 + 900) + 0x1c))((int *)(iVar2 + 900));
  *(undefined4 *)(iVar2 + 0x38c) = uVar6;
  *(int **)(iVar2 + 0x390) = piVar5;
  FUN_4a16b6c0(auStack_40);
  auStack_e0[0] = uStack_9c;
  FUN_4a16c410(auStack_a4,0,iVar2 + 0x370);
  auStack_e0[0] = uStack_b0;
  FUN_4a16c410(auStack_b8,0,iVar2 + 900);
  FUN_4a16b6c0(auStack_b8);
  FUN_4a16b6c0(auStack_a4);
  FUN_4a16b6c0(auStack_90);
  FUN_4a16c1a0(auStack_7c);
  FUN_4a16b6c0(auStack_68);
  FUN_4a16b6c0(auStack_54);
  return;
}



// Address: 4a0fd0a4

void FUN_4a0fd0a4(int param_1,int param_2)

{
  int iVar1;
  
  FUN_4a0fb52c(param_1,0,param_2);
  if (*(int *)(param_1 + 0x4b0) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x4b0) + 8);
  }
  *(undefined1 *)(iVar1 + param_2) = 0;
  return;
}



// Address: 4a0fd0dc

void FUN_4a0fd0dc(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    FUN_4a0fb52c(param_1,0,iVar2);
    if (*(int *)(param_1 + 0x4b0) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x4b0) + 8);
    }
    *(undefined1 *)(iVar1 + iVar2) = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 7);
  return;
}



// Address: 4a0fd124

void FUN_4a0fd124(int param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 0x40) {
    uVar1 = FUN_4a000860(1,0,param_2);
    *(uint *)(param_1 + 0x4f8) = (uint)uVar1 | *(uint *)(param_1 + 0x4f8);
    *(uint *)(param_1 + 0x4fc) = (uint)((ulonglong)uVar1 >> 0x20) | *(uint *)(param_1 + 0x4fc);
    return;
  }
  uVar1 = FUN_4a000860(1,0,param_2 + -0x40);
  *(uint *)(param_1 + 0x500) = (uint)uVar1 | *(uint *)(param_1 + 0x500);
  *(uint *)(param_1 + 0x504) = (uint)((ulonglong)uVar1 >> 0x20) | *(uint *)(param_1 + 0x504);
  return;
}



// Address: 4a0fd198

void FUN_4a0fd198(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x528) = param_2;
  return;
}



// Address: 4a0fd1a0

bool FUN_4a0fd1a0(int param_1)

{
  return *(int *)(param_1 + 0x49c) == -1;
}



// Address: 4a0fd1b4

undefined4 FUN_4a0fd1b4(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0x30) {
    return 1;
  }
  if (param_2 < 0x31) {
    if (param_2 == 5) {
switchD_4a0fd30c_caseD_5:
      return 0x10000;
    }
    if (param_2 < 6) {
      if (param_2 == -6) {
        return 0x20000;
      }
      if (param_2 < -5) {
        if (param_2 == -8) {
          return 0x80000;
        }
        if (param_2 == -7) {
          return 0x40000;
        }
      }
      else {
        if (param_2 == 1) {
          return 0x2000;
        }
        if (param_2 == 2) {
          return 0x8000;
        }
      }
    }
    else {
      if (param_2 == 6) {
        return 0x4000;
      }
      if (param_2 == 8) {
        return 0x1000;
      }
      if (param_2 == 0x23) {
        return 0x400;
      }
      if (param_2 == 0x2a) {
        return 0x800;
      }
    }
  }
  else {
    switch(param_2) {
    case 0x31:
      return 2;
    case 0x32:
      return 4;
    case 0x33:
      return 8;
    case 0x34:
      return 0x10;
    case 0x35:
      return 0x20;
    case 0x36:
      return 0x40;
    case 0x37:
      return 0x80;
    case 0x38:
      return 0x100;
    case 0x39:
      return 0x200;
    }
  }
  uVar1 = (**(code **)(*param_1 + 0x3c))();
  switch(uVar1) {
  default:
    return 0;
  case 1:
    return 0x2000;
  case 2:
    return 0x8000;
  case 5:
    goto switchD_4a0fd30c_caseD_5;
  case 6:
    return 0x4000;
  case 8:
    return 0x1000;
  }
}



// Address: 4a0fd380

uint FUN_4a0fd380(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0x835) {
    uVar1 = FUN_4a0855d8(*(undefined4 *)(param_1 + 0x260));
    if ((uVar1 & 0x7fffffff) == 0) {
      return 0;
    }
  }
  else {
    if (param_2 == 0x836) {
      return (uint)*(byte *)(*(int *)(param_1 + 0x264) + 0xd);
    }
    if (param_2 == 0x837) {
      if (*(char *)(param_1 + 0x494) == '\0') {
        return 0;
      }
    }
    else if (param_2 == 0x838) {
      if (*(char *)(param_1 + 0x495) == '\0') {
        return 0;
      }
    }
    else if (param_2 == 0x839) {
      if (*(char *)(param_1 + 0x497) == '\0') {
        return 0;
      }
    }
    else if (param_2 == 0xcd6) {
      if (*(char *)(param_1 + 0x498) == '\0') {
        return 0;
      }
    }
    else {
      if (param_2 != 0x83a) {
        if (param_2 != 0x849) {
          return 0xffffffff;
        }
        FUN_4a0941ec(0);
        return 0;
      }
      if (*(char *)(param_1 + 0x499) == '\0') {
        return 0;
      }
    }
  }
  return 1;
}



// Address: 4a0fd488

int FUN_4a0fd488(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar2 = 0;
  iVar1 = 0;
  if (0 < *(int *)(param_2 + 8)) {
    do {
      iVar3 = 0;
      if (*(int *)(param_2 + 0xc) != 0) {
        iVar3 = *(int *)(*(int *)(param_2 + 0xc) + 8);
      }
      if ((*(char *)(iVar3 + iVar1) != param_3) &&
         (bVar4 = iVar2 == param_1, iVar2 = iVar2 + 1, bVar4)) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_2 + 8));
  }
  return -1;
}



// Address: 4a0fd4f0

void FUN_4a0fd4f0(int param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 0x40) {
    uVar1 = FUN_4a000860(1,0,param_2);
    *(uint *)(param_1 + 0x4e8) = (uint)uVar1 | *(uint *)(param_1 + 0x4e8);
    *(uint *)(param_1 + 0x4ec) = (uint)((ulonglong)uVar1 >> 0x20) | *(uint *)(param_1 + 0x4ec);
    return;
  }
  uVar1 = FUN_4a000860(1,0,param_2 + -0x40);
  *(uint *)(param_1 + 0x4f0) = (uint)uVar1 | *(uint *)(param_1 + 0x4f0);
  *(uint *)(param_1 + 0x4f4) = (uint)((ulonglong)uVar1 >> 0x20) | *(uint *)(param_1 + 0x4f4);
  return;
}



// Address: 4a0fd564

int FUN_4a0fd564(int param_1,int param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  int iVar6;
  int iVar7;
  undefined1 auStack_40 [20];
  undefined1 auStack_2c [28];
  
  if (param_3 < 2) {
    uVar3 = FUN_4a0941ec();
    FUN_4a094ddc(uVar3,param_2);
  }
  if (param_2 == 0x835) {
    if (param_3 == 1) {
      uVar3 = 0x3f800000;
    }
    else {
      uVar3 = 0;
    }
    FUN_4a0855f4(*(undefined4 *)(param_1 + 0x260),uVar3);
  }
  if (param_2 == 0x836) {
    *(bool *)(*(int *)(param_1 + 0x264) + 0xd) = param_3 == 1;
    if (param_3 == 1) {
      FUN_4a0c2ef0();
    }
    else {
      FUN_4a0c2f2c();
    }
  }
  if (param_2 == 0x837) {
    *(bool *)(param_1 + 0x494) = param_3 == 1;
  }
  if (param_2 == 0x838) {
    *(bool *)(param_1 + 0x495) = param_3 == 1;
  }
  if (param_2 == 0x839) {
    *(bool *)(param_1 + 0x497) = param_3 == 1;
  }
  puVar2 = PTR_DAT_4a0fd710;
  puVar1 = PTR_DAT_4a0fd70c;
  if ((param_2 == 0xcd6) && (*(int *)PTR_DAT_4a0fd708 != 0)) {
    *(bool *)(param_1 + 0x498) = param_3 == 1;
    if (param_3 == 1) {
      *(undefined4 *)puVar1 = 1;
      if (*(int *)puVar2 != 0) {
        FUN_4a05a7c4();
        goto LAB_4a0fd6c0;
      }
      uVar3 = 0x17;
    }
    else {
      *(undefined4 *)puVar1 = 0;
      if (*(int *)puVar2 != 0) {
        FUN_4a00e63c();
        goto LAB_4a0fd6c0;
      }
      uVar3 = 0x18;
    }
    host_s3eDeviceGetString_arm(uVar3);
  }
LAB_4a0fd6c0:
  if (param_2 == 0x83a) {
    *(bool *)(param_1 + 0x499) = param_3 == 1;
  }
  if (param_2 == 0x849) {
    uVar3 = FUN_4a0941ec();
    FUN_4a09403c(uVar3,param_3 == 1);
  }
  thunk_FUN_4a161570(0x24);
  uVar3 = FUN_4a0c2818();
  uVar4 = thunk_FUN_4a161570(0xc);
  piVar5 = (int *)FUN_4a0c0198(uVar4,uVar3);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))(piVar5);
  }
  FUN_4a0bfed4(piVar5,0x8b);
  FUN_4a0bfed4(piVar5,7);
  uVar4 = FUN_4a085684(*(undefined4 *)(param_1 + 0x260));
  FUN_4a0bfd84(piVar5,uVar4);
  uVar4 = FUN_4a0855d8(*(undefined4 *)(param_1 + 0x260));
  FUN_4a0bfd84(piVar5,uVar4);
  FUN_4a0bfe0c(piVar5,*(undefined1 *)(*(int *)(param_1 + 0x264) + 0xd));
  FUN_4a0bfe0c(piVar5,*(undefined1 *)(param_1 + 0x494));
  FUN_4a0bfe0c(piVar5,*(undefined1 *)(param_1 + 0x495));
  FUN_4a0bfe0c(piVar5,*(undefined1 *)(param_1 + 0x497));
  if (*(int *)PTR_DAT_4a0fe1d4 != 0) {
    FUN_4a0bfe0c(piVar5,*(undefined1 *)(param_1 + 0x498));
  }
  FUN_4a0bfe0c(piVar5,*(undefined1 *)(param_1 + 0x499));
  FUN_4a0941ec();
  uVar4 = FUN_4a0953f4();
  FUN_4a0bfe0c(piVar5,uVar4);
  FUN_4a0bfe0c(piVar5,*(undefined1 *)(param_1 + 0x4c0));
  FUN_4a0bfe0c(piVar5,*(undefined1 *)(param_1 + 0x4c1));
  FUN_4a0c011c(piVar5,extraout_r1,*(undefined4 *)(param_1 + 0x4c8),*(undefined4 *)(param_1 + 0x4cc))
  ;
  FUN_4a0c011c(piVar5,extraout_r1_00,*(undefined4 *)(param_1 + 0x4d0),
               *(undefined4 *)(param_1 + 0x4d4));
  FUN_4a0c011c(piVar5,extraout_r1_01,*(undefined4 *)(param_1 + 0x4d8),
               *(undefined4 *)(param_1 + 0x4dc));
  FUN_4a0c011c(piVar5,extraout_r1_02,*(undefined4 *)(param_1 + 0x4e0),
               *(undefined4 *)(param_1 + 0x4e4));
  FUN_4a0c0110(piVar5,*(uint *)(param_1 + 0x49c) & 0xff);
  iVar7 = 0;
  do {
    if (*(int *)(param_1 + 0x514) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(param_1 + 0x514) + 8);
    }
    FUN_4a0bff24(piVar5,*(undefined4 *)(iVar6 + iVar7 * 4));
    if (*(int *)(param_1 + 0x4b0) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(param_1 + 0x4b0) + 8);
    }
    FUN_4a0bfe0c(piVar5,*(undefined1 *)(iVar6 + iVar7));
    iVar7 = iVar7 + 1;
  } while (iVar7 != 7);
  FUN_4a0bfed4(piVar5,0x8b);
  FUN_4a0c254c(auStack_2c,uVar3);
  iVar7 = (**(code **)(*piVar5 + 0x2c))(piVar5);
  *(bool *)(param_1 + 0x34) = iVar7 != 1 || *(char *)(param_1 + 0x34) != '\0';
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar3 = FUN_4a16b5a0(auStack_40,auStack_2c);
    uVar4 = thunk_FUN_4a161570(0x14);
    uVar4 = FUN_4a0c707c(uVar4,PTR_s_sim3set_4a0fe1dc);
    FUN_4a0ff2ac(param_1,uVar4,uVar3);
    FUN_4a16b6c0(auStack_40);
  }
  else {
    uVar3 = FUN_4a16b5a0(auStack_40,auStack_2c);
    uVar4 = thunk_FUN_4a161570(0x14);
    uVar4 = FUN_4a0c707c(uVar4,PTR_s_sim3set_demo_4a0fe1d8);
    FUN_4a0ff2ac(param_1,uVar4,uVar3);
    FUN_4a16b6c0(auStack_40);
  }
  if ((piVar5 != (int *)0x0) && (iVar7 = (**(code **)(*piVar5 + 8))(piVar5), iVar7 != 0)) {
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  iVar7 = 1 - (uint)*(byte *)(param_1 + 0x34);
  if (1 < *(byte *)(param_1 + 0x34)) {
    iVar7 = 0;
  }
  FUN_4a16b6c0(auStack_2c);
  return iVar7;
}



// Address: 4a0fd714

void FUN_4a0fd714(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x368) == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x368) + 8);
  }
  *puVar2 = 0;
  if (*(int *)(param_1 + 0x368) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x368) + 8);
  }
  *(undefined4 *)(iVar1 + 4) = 0;
  return;
}



// Address: 4a0fd744

void FUN_4a0fd744(int param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined1 auStack_54 [8];
  int local_4c;
  int *local_48;
  int local_40 [2];
  int local_38;
  int *local_2c;
  int *local_28;
  
  bVar1 = false;
  puVar5 = (undefined4 *)FUN_4a0c6bc0(local_40);
  puVar2 = PTR_PTR_4a0fdefc;
  puVar5[2] = 0;
  *puVar5 = puVar2;
  puVar5[3] = 0;
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar6 = thunk_FUN_4a161570(0x14);
    uVar6 = FUN_4a0c707c(uVar6,PTR_s_sim3set_4a0fdf04);
    FUN_4a0fecbc(auStack_54,param_1,uVar6);
    iVar7 = local_4c;
  }
  else {
    uVar6 = thunk_FUN_4a161570(0x14);
    uVar6 = FUN_4a0c707c(uVar6,PTR_s_sim3set_demo_4a0fdf00);
    FUN_4a0fecbc(auStack_54,param_1,uVar6);
    iVar7 = local_4c;
  }
  if (local_48 != (int *)0x0) {
    (**(code **)(*local_48 + 0xc))(local_48);
  }
  (**(code **)(local_40[0] + 0x1c))(local_40);
  local_38 = iVar7;
  FUN_4a16b6c0(auStack_54);
  if (local_38 != 0) {
    uVar6 = thunk_FUN_4a161570(0x20);
    local_28 = (int *)FUN_4a0c107c(uVar6,local_40);
    if (local_28 != (int *)0x0) {
      (**(code **)(*local_28 + 0xc))();
    }
    uVar6 = thunk_FUN_4a161570(0x10);
    local_2c = (int *)FUN_4a0bfc44(uVar6,local_28);
    if (local_2c != (int *)0x0) {
      (**(code **)(*local_2c + 0xc))();
    }
    iVar7 = FUN_4a0bf62c(local_2c);
    FUN_4a0bf62c(local_2c);
    puVar3 = PTR_DAT_4a0fdf0c;
    puVar2 = PTR_DAT_4a0fdf08;
    if (iVar7 == 0x82) {
      FUN_4a0bfa0c(local_2c);
      uVar6 = FUN_4a0bfa0c(local_2c);
      FUN_4a0855f4(*(undefined4 *)(param_1 + 0x260),uVar6);
      iVar12 = *(int *)(param_1 + 0x264);
      iVar7 = FUN_4a0bf53c(local_2c);
      *(char *)(iVar12 + 0xd) = (char)iVar7;
      if (iVar7 == 0) {
        FUN_4a0c2f2c();
      }
      else {
        FUN_4a0c2ef0();
      }
      uVar4 = FUN_4a0bf53c(local_2c);
      *(undefined1 *)(param_1 + 0x494) = uVar4;
      uVar4 = FUN_4a0bf53c(local_2c);
      *(undefined1 *)(param_1 + 0x495) = uVar4;
      uVar4 = FUN_4a0bf53c(local_2c);
      *(undefined1 *)(param_1 + 0x497) = uVar4;
      if (*(int *)puVar2 != 0) {
        uVar6 = FUN_4a0bf53c(local_2c);
        *(char *)(param_1 + 0x498) = (char)uVar6;
        *(undefined4 *)puVar3 = uVar6;
      }
      uVar4 = FUN_4a0bf53c(local_2c);
      *(undefined1 *)(param_1 + 0x499) = uVar4;
      uVar6 = FUN_4a0941ec();
      FUN_4a09403c(uVar6,1);
      uVar4 = FUN_4a0bf53c(local_2c);
      *(undefined1 *)(param_1 + 0x4c0) = uVar4;
      *(undefined1 *)(param_1 + 0x4c1) = 0;
      uVar15 = FUN_4a0bf958(local_2c);
      *(undefined8 *)(param_1 + 0x4c8) = uVar15;
      uVar15 = FUN_4a0bf958(local_2c);
      *(undefined8 *)(param_1 + 0x4d0) = uVar15;
      uVar15 = FUN_4a0bf958(local_2c);
      *(undefined8 *)(param_1 + 0x4d8) = uVar15;
      uVar15 = FUN_4a0bf958(local_2c);
      *(undefined8 *)(param_1 + 0x4e0) = uVar15;
      uVar6 = FUN_4a0bf920(local_2c);
      *(undefined4 *)(param_1 + 0x49c) = uVar6;
      FUN_4a06c800(param_1 + 0x278,uVar6);
      iVar7 = 0;
      do {
        piVar8 = (int *)FUN_4a0bf6a4(local_2c);
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 0xc))();
        }
        iVar12 = FUN_4a13e1b4(piVar8);
        iVar9 = *(int *)(param_1 + 0x514);
        if (iVar12 < 1) {
          if (iVar9 == 0) {
            iVar12 = 0;
          }
          else {
            iVar12 = *(int *)(iVar9 + 8);
          }
          puVar5 = (undefined4 *)(iVar12 + iVar7 * 4);
          piVar13 = (int *)*puVar5;
          if (piVar13 != (int *)0x0) {
            iVar12 = (**(code **)(*piVar13 + 8))(piVar13);
            if (iVar12 != 0) {
              (**(code **)(*piVar13 + 4))(piVar13);
            }
            *puVar5 = 0;
          }
        }
        else {
          if (iVar9 == 0) {
            iVar12 = 0;
          }
          else {
            iVar12 = *(int *)(iVar9 + 8);
          }
          piVar13 = (int *)(iVar12 + iVar7 * 4);
          if ((int *)*piVar13 != piVar8) {
            if (piVar8 != (int *)0x0) {
              (**(code **)(*piVar8 + 0xc))(piVar8);
            }
            piVar14 = (int *)*piVar13;
            if ((piVar14 != (int *)0x0) &&
               (iVar12 = (**(code **)(*piVar14 + 8))(piVar14), iVar12 != 0)) {
              (**(code **)(*piVar14 + 4))(piVar14);
            }
            *piVar13 = (int)piVar8;
          }
        }
        uVar4 = FUN_4a0bf53c(local_2c);
        if (*(int *)(param_1 + 0x4b0) == 0) {
          iVar12 = 0;
        }
        else {
          iVar12 = *(int *)(*(int *)(param_1 + 0x4b0) + 8);
        }
        *(undefined1 *)(iVar12 + iVar7) = uVar4;
        if ((piVar8 != (int *)0x0) && (iVar12 = (**(code **)(*piVar8 + 8))(piVar8), iVar12 != 0)) {
          (**(code **)(*piVar8 + 4))(piVar8);
        }
        while( true ) {
          iVar7 = iVar7 + 1;
          if (6 < iVar7) goto LAB_4a0fde20;
          if (iVar7 < 3) break;
          if (*(int *)(param_1 + 0x514) == 0) {
            iVar12 = 0;
          }
          else {
            iVar12 = *(int *)(*(int *)(param_1 + 0x514) + 8);
          }
          puVar5 = (undefined4 *)(iVar12 + iVar7 * 4);
          piVar8 = (int *)*puVar5;
          if (piVar8 != (int *)0x0) {
            iVar12 = (**(code **)(*piVar8 + 8))(piVar8);
            if (iVar12 != 0) {
              (**(code **)(*piVar8 + 4))(piVar8);
            }
            *puVar5 = 0;
          }
          if (*(int *)(param_1 + 0x4b0) == 0) {
            iVar12 = 0;
          }
          else {
            iVar12 = *(int *)(*(int *)(param_1 + 0x4b0) + 8);
          }
          *(undefined1 *)(iVar12 + iVar7) = 0;
        }
      } while( true );
    }
    if (iVar7 == 0x8b || iVar7 == 0x8a) {
      uVar6 = FUN_4a0bfa0c(local_2c);
      FUN_4a0856a0(*(undefined4 *)(param_1 + 0x260),uVar6);
      uVar6 = FUN_4a0bfa0c(local_2c);
      FUN_4a0855f4(*(undefined4 *)(param_1 + 0x260),uVar6);
      iVar9 = *(int *)(param_1 + 0x264);
      iVar12 = FUN_4a0bf53c(local_2c);
      *(char *)(iVar9 + 0xd) = (char)iVar12;
      if (iVar12 == 0) {
        FUN_4a0c2f2c();
      }
      else {
        FUN_4a0c2ef0();
      }
      uVar4 = FUN_4a0bf53c(local_2c);
      *(undefined1 *)(param_1 + 0x494) = uVar4;
      uVar4 = FUN_4a0bf53c(local_2c);
      *(undefined1 *)(param_1 + 0x495) = uVar4;
      uVar4 = FUN_4a0bf53c(local_2c);
      *(undefined1 *)(param_1 + 0x497) = uVar4;
      if (*(int *)puVar2 != 0) {
        uVar6 = FUN_4a0bf53c(local_2c);
        *(char *)(param_1 + 0x498) = (char)uVar6;
        *(undefined4 *)puVar3 = uVar6;
      }
      uVar4 = FUN_4a0bf53c(local_2c);
      *(undefined1 *)(param_1 + 0x499) = uVar4;
      uVar6 = FUN_4a0bf53c(local_2c);
      uVar10 = FUN_4a0941ec();
      FUN_4a09403c(uVar10,uVar6);
      uVar4 = FUN_4a0bf53c(local_2c);
      *(undefined1 *)(param_1 + 0x4c0) = uVar4;
      uVar4 = FUN_4a0bf53c(local_2c);
      *(undefined1 *)(param_1 + 0x4c1) = uVar4;
      uVar15 = FUN_4a0bf958(local_2c);
      *(undefined8 *)(param_1 + 0x4c8) = uVar15;
      uVar15 = FUN_4a0bf958(local_2c);
      *(undefined8 *)(param_1 + 0x4d0) = uVar15;
      uVar15 = FUN_4a0bf958(local_2c);
      *(undefined8 *)(param_1 + 0x4d8) = uVar15;
      uVar15 = FUN_4a0bf958(local_2c);
      *(undefined8 *)(param_1 + 0x4e0) = uVar15;
      uVar6 = FUN_4a0bf920(local_2c);
      *(undefined4 *)(param_1 + 0x49c) = uVar6;
      FUN_4a06c800(param_1 + 0x278,uVar6);
      iVar12 = 0;
      do {
        piVar8 = (int *)FUN_4a0bf6a4(local_2c);
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 0xc))();
        }
        iVar9 = FUN_4a13e1b4(piVar8);
        iVar11 = *(int *)(param_1 + 0x514);
        if (iVar9 < 1) {
          if (iVar11 == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = *(int *)(iVar11 + 8);
          }
          puVar5 = (undefined4 *)(iVar9 + iVar12 * 4);
          piVar13 = (int *)*puVar5;
          if (piVar13 != (int *)0x0) {
            iVar9 = (**(code **)(*piVar13 + 8))(piVar13);
            if (iVar9 != 0) {
              (**(code **)(*piVar13 + 4))(piVar13);
            }
            *puVar5 = 0;
          }
        }
        else {
          if (iVar11 == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = *(int *)(iVar11 + 8);
          }
          piVar13 = (int *)(iVar9 + iVar12 * 4);
          if ((int *)*piVar13 != piVar8) {
            if (piVar8 != (int *)0x0) {
              (**(code **)(*piVar8 + 0xc))(piVar8);
            }
            piVar14 = (int *)*piVar13;
            if ((piVar14 != (int *)0x0) &&
               (iVar9 = (**(code **)(*piVar14 + 8))(piVar14), iVar9 != 0)) {
              (**(code **)(*piVar14 + 4))(piVar14);
            }
            *piVar13 = (int)piVar8;
          }
        }
        uVar4 = FUN_4a0bf53c(local_2c);
        if (*(int *)(param_1 + 0x4b0) == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *(int *)(*(int *)(param_1 + 0x4b0) + 8);
        }
        *(undefined1 *)(iVar9 + iVar12) = uVar4;
        if ((piVar8 != (int *)0x0) && (iVar9 = (**(code **)(*piVar8 + 8))(piVar8), iVar9 != 0)) {
          (**(code **)(*piVar8 + 4))(piVar8);
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 != 7);
      if ((iVar7 == 0x8b) && (iVar7 = FUN_4a0bf62c(local_2c), iVar7 != 0x8b)) goto LAB_4a0fde1c;
    }
    else {
LAB_4a0fde1c:
      bVar1 = true;
    }
LAB_4a0fde20:
    iVar7 = (**(code **)(*local_2c + 0x1c))(local_2c);
    if (0 < iVar7) {
      bVar1 = true;
    }
    (**(code **)(*local_2c + 0x20))(local_2c);
    piVar8 = local_2c;
    if ((local_2c != (int *)0x0) && (iVar7 = (**(code **)(*local_2c + 8))(local_2c), iVar7 != 0)) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    piVar8 = local_28;
    if ((local_28 != (int *)0x0) && (iVar7 = (**(code **)(*local_28 + 8))(local_28), iVar7 != 0)) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    if (!bVar1) goto LAB_4a0fdee8;
  }
  FUN_4a0fe240(param_1);
  FUN_4a0fdf10(param_1);
LAB_4a0fdee8:
  FUN_4a16b6c0(local_40);
  return;
}



// Address: 4a0fdf10

int FUN_4a0fdf10(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  int iVar4;
  int iVar5;
  undefined1 auStack_40 [20];
  undefined1 auStack_2c [20];
  
  thunk_FUN_4a161570(0x24);
  uVar1 = FUN_4a0c2818();
  uVar2 = thunk_FUN_4a161570(0xc);
  piVar3 = (int *)FUN_4a0c0198(uVar2,uVar1);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
  }
  FUN_4a0bfed4(piVar3,0x8b);
  FUN_4a0bfed4(piVar3,7);
  uVar2 = FUN_4a085684(*(undefined4 *)(param_1 + 0x260));
  FUN_4a0bfd84(piVar3,uVar2);
  uVar2 = FUN_4a0855d8(*(undefined4 *)(param_1 + 0x260));
  FUN_4a0bfd84(piVar3,uVar2);
  FUN_4a0bfe0c(piVar3,*(undefined1 *)(*(int *)(param_1 + 0x264) + 0xd));
  FUN_4a0bfe0c(piVar3,*(undefined1 *)(param_1 + 0x494));
  FUN_4a0bfe0c(piVar3,*(undefined1 *)(param_1 + 0x495));
  FUN_4a0bfe0c(piVar3,*(undefined1 *)(param_1 + 0x497));
  if (*(int *)PTR_DAT_4a0fe1d4 != 0) {
    FUN_4a0bfe0c(piVar3,*(undefined1 *)(param_1 + 0x498));
  }
  FUN_4a0bfe0c(piVar3,*(undefined1 *)(param_1 + 0x499));
  FUN_4a0941ec();
  uVar2 = FUN_4a0953f4();
  FUN_4a0bfe0c(piVar3,uVar2);
  FUN_4a0bfe0c(piVar3,*(undefined1 *)(param_1 + 0x4c0));
  FUN_4a0bfe0c(piVar3,*(undefined1 *)(param_1 + 0x4c1));
  FUN_4a0c011c(piVar3,extraout_r1,*(undefined4 *)(param_1 + 0x4c8),*(undefined4 *)(param_1 + 0x4cc))
  ;
  FUN_4a0c011c(piVar3,extraout_r1_00,*(undefined4 *)(param_1 + 0x4d0),
               *(undefined4 *)(param_1 + 0x4d4));
  FUN_4a0c011c(piVar3,extraout_r1_01,*(undefined4 *)(param_1 + 0x4d8),
               *(undefined4 *)(param_1 + 0x4dc));
  FUN_4a0c011c(piVar3,extraout_r1_02,*(undefined4 *)(param_1 + 0x4e0),
               *(undefined4 *)(param_1 + 0x4e4));
  FUN_4a0c0110(piVar3,*(uint *)(param_1 + 0x49c) & 0xff);
  iVar5 = 0;
  do {
    if (*(int *)(param_1 + 0x514) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1 + 0x514) + 8);
    }
    FUN_4a0bff24(piVar3,*(undefined4 *)(iVar4 + iVar5 * 4));
    if (*(int *)(param_1 + 0x4b0) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1 + 0x4b0) + 8);
    }
    FUN_4a0bfe0c(piVar3,*(undefined1 *)(iVar4 + iVar5));
    iVar5 = iVar5 + 1;
  } while (iVar5 != 7);
  FUN_4a0bfed4(piVar3,0x8b);
  FUN_4a0c254c(auStack_2c,uVar1);
  iVar5 = (**(code **)(*piVar3 + 0x2c))(piVar3);
  *(bool *)(param_1 + 0x34) = iVar5 != 1 || *(char *)(param_1 + 0x34) != '\0';
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar1 = FUN_4a16b5a0(auStack_40,auStack_2c);
    uVar2 = thunk_FUN_4a161570(0x14);
    uVar2 = FUN_4a0c707c(uVar2,PTR_s_sim3set_4a0fe1dc);
    FUN_4a0ff2ac(param_1,uVar2,uVar1);
    FUN_4a16b6c0(auStack_40);
  }
  else {
    uVar1 = FUN_4a16b5a0(auStack_40,auStack_2c);
    uVar2 = thunk_FUN_4a161570(0x14);
    uVar2 = FUN_4a0c707c(uVar2,PTR_s_sim3set_demo_4a0fe1d8);
    FUN_4a0ff2ac(param_1,uVar2,uVar1);
    FUN_4a16b6c0(auStack_40);
  }
  if ((piVar3 != (int *)0x0) && (iVar5 = (**(code **)(*piVar3 + 8))(piVar3), iVar5 != 0)) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  iVar5 = 1 - (uint)*(byte *)(param_1 + 0x34);
  if (1 < *(byte *)(param_1 + 0x34)) {
    iVar5 = 0;
  }
  FUN_4a16b6c0(auStack_2c);
  return iVar5;
}



// Address: 4a0fe1e0

void FUN_4a0fe1e0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  
  uVar2 = FUN_4a13ca78();
  uVar3 = FUN_4a13caa0(param_1);
  *(undefined4 *)(param_1 + 0x42c) = 0;
  *(undefined4 *)(param_1 + 0x438) = uVar3;
  *(undefined4 *)(param_1 + 0x430) = 0;
  *(undefined4 *)(param_1 + 0x434) = uVar2;
  FUN_4a0b0180(*(undefined4 *)(param_1 + 0x440),0x40);
  FUN_4a06a9a8(param_1 + 0x428,0x50ffffff);
  piVar1 = (int *)thunk_FUN_4a0b3908();
  FUN_4a0a83a4(piVar1,param_2);
  (**(code **)(*piVar1 + 0x20))
            (piVar1,*(undefined4 *)(param_1 + 0x42c),*(undefined4 *)(param_1 + 0x430),
             *(undefined4 *)(param_1 + 0x434),*(undefined4 *)(param_1 + 0x438),unaff_r4,unaff_r5,
             unaff_r6);
  FUN_4a0a8b14(piVar1,*(undefined4 *)(param_1 + 0x43c));
                    /* WARNING: Could not recover jumptable at 0x4a06a9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x30))(piVar1);
  return;
}



// Address: 4a0fe240

void FUN_4a0fe240(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0x494) = 1;
  *(undefined1 *)(param_1 + 0x495) = 1;
  *(undefined1 *)(param_1 + 0x496) = 0;
  *(undefined1 *)(param_1 + 0x497) = 1;
  *(undefined1 *)(param_1 + 0x498) = 1;
  *(undefined1 *)(param_1 + 0x499) = 1;
  uVar1 = FUN_4a0941ec();
  FUN_4a09403c(uVar1,1);
  *(undefined1 *)(param_1 + 0x4c0) = 0;
  *(undefined1 *)(param_1 + 0x4c1) = 0;
  *(undefined4 *)(param_1 + 0x4c8) = 0;
  *(undefined4 *)(param_1 + 0x4cc) = 0;
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  *(undefined4 *)(param_1 + 0x4d8) = 0;
  *(undefined4 *)(param_1 + 0x4dc) = 0;
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  *(undefined4 *)(param_1 + 0x4e4) = 0;
  FUN_4a08db2c();
  iVar2 = FUN_4a08df78();
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x49c) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x49c) = 0xffffffff;
  }
  FUN_4a06c800(param_1 + 0x278,*(undefined4 *)(param_1 + 0x49c));
  iVar2 = 0;
  do {
    FUN_4a0fb52c(param_1,0,iVar2);
    if (*(int *)(param_1 + 0x4b0) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(param_1 + 0x4b0) + 8);
    }
    *(undefined1 *)(iVar3 + iVar2) = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 7);
  return;
}



// Address: 4a0fe2fc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_4a0fe2fc(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_40 [20];
  undefined1 auStack_2c [28];
  
  *(int *)(param_1 + 0x4a0) = param_2;
  iVar5 = 0;
  if (*(int *)(param_1 + 0x4b0) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x4b0) + 8);
  }
  if (*(char *)(iVar4 + param_2) != '\0') {
    iVar4 = FUN_4a0fc764(param_1);
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x4a0);
      FUN_4a0fb52c(param_1,0,iVar4);
      if (*(int *)(param_1 + 0x4b0) != 0) {
        iVar5 = *(int *)(*(int *)(param_1 + 0x4b0) + 8);
      }
      *(undefined1 *)(iVar5 + iVar4) = 0;
      thunk_FUN_4a161570(0x24);
      uVar1 = FUN_4a0c2818();
      uVar2 = thunk_FUN_4a161570(0xc);
      piVar3 = (int *)FUN_4a0c0198(uVar2,uVar1);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0xc))(piVar3);
      }
      FUN_4a0bfed4(piVar3,0x8b);
      FUN_4a0bfed4(piVar3,7);
      uVar2 = FUN_4a085684(*(undefined4 *)(param_1 + 0x260));
      FUN_4a0bfd84(piVar3,uVar2);
      uVar2 = FUN_4a0855d8(*(undefined4 *)(param_1 + 0x260));
      FUN_4a0bfd84(piVar3,uVar2);
      FUN_4a0bfe0c(piVar3,*(undefined1 *)(*(int *)(param_1 + 0x264) + 0xd));
      FUN_4a0bfe0c(piVar3,*(undefined1 *)(param_1 + 0x494));
      FUN_4a0bfe0c(piVar3,*(undefined1 *)(param_1 + 0x495));
      FUN_4a0bfe0c(piVar3,*(undefined1 *)(param_1 + 0x497));
      if (*(int *)PTR_DAT_4a0fe1d4 != 0) {
        FUN_4a0bfe0c(piVar3,*(undefined1 *)(param_1 + 0x498));
      }
      FUN_4a0bfe0c(piVar3,*(undefined1 *)(param_1 + 0x499));
      FUN_4a0941ec();
      uVar2 = FUN_4a0953f4();
      FUN_4a0bfe0c(piVar3,uVar2);
      FUN_4a0bfe0c(piVar3,*(undefined1 *)(param_1 + 0x4c0));
      FUN_4a0bfe0c(piVar3,*(undefined1 *)(param_1 + 0x4c1));
      FUN_4a0c011c(piVar3,extraout_r1,*(undefined4 *)(param_1 + 0x4c8),
                   *(undefined4 *)(param_1 + 0x4cc));
      FUN_4a0c011c(piVar3,extraout_r1_00,*(undefined4 *)(param_1 + 0x4d0),
                   *(undefined4 *)(param_1 + 0x4d4));
      FUN_4a0c011c(piVar3,extraout_r1_01,*(undefined4 *)(param_1 + 0x4d8),
                   *(undefined4 *)(param_1 + 0x4dc));
      FUN_4a0c011c(piVar3,extraout_r1_02,*(undefined4 *)(param_1 + 0x4e0),
                   *(undefined4 *)(param_1 + 0x4e4));
      FUN_4a0c0110(piVar3,*(uint *)(param_1 + 0x49c) & 0xff);
      iVar5 = 0;
      do {
        if (*(int *)(param_1 + 0x514) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(*(int *)(param_1 + 0x514) + 8);
        }
        FUN_4a0bff24(piVar3,*(undefined4 *)(iVar4 + iVar5 * 4));
        if (*(int *)(param_1 + 0x4b0) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(*(int *)(param_1 + 0x4b0) + 8);
        }
        FUN_4a0bfe0c(piVar3,*(undefined1 *)(iVar4 + iVar5));
        iVar5 = iVar5 + 1;
      } while (iVar5 != 7);
      FUN_4a0bfed4(piVar3,0x8b);
      FUN_4a0c254c(auStack_2c,uVar1);
      iVar5 = (**(code **)(*piVar3 + 0x2c))(piVar3);
      *(bool *)(param_1 + 0x34) = iVar5 != 1 || *(char *)(param_1 + 0x34) != '\0';
      if (*(int *)(param_1 + 0x38) == 0) {
        uVar1 = FUN_4a16b5a0(auStack_40,auStack_2c);
        uVar2 = thunk_FUN_4a161570(0x14);
        uVar2 = FUN_4a0c707c(uVar2,PTR_s_sim3set_4a0fe1dc);
        FUN_4a0ff2ac(param_1,uVar2,uVar1);
        FUN_4a16b6c0(auStack_40);
      }
      else {
        uVar1 = FUN_4a16b5a0(auStack_40,auStack_2c);
        uVar2 = thunk_FUN_4a161570(0x14);
        uVar2 = FUN_4a0c707c(uVar2,PTR_s_sim3set_demo_4a0fe1d8);
        FUN_4a0ff2ac(param_1,uVar2,uVar1);
        FUN_4a16b6c0(auStack_40);
      }
      if ((piVar3 != (int *)0x0) && (iVar5 = (**(code **)(*piVar3 + 8))(piVar3), iVar5 != 0)) {
        (**(code **)(*piVar3 + 4))(piVar3);
      }
      iVar5 = 1 - (uint)*(byte *)(param_1 + 0x34);
      if (1 < *(byte *)(param_1 + 0x34)) {
        iVar5 = 0;
      }
      FUN_4a16b6c0(auStack_2c);
      return iVar5;
    }
                    /* WARNING: Could not recover jumptable at 0x4a0fe33c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar5 = (*UNRECOVERED_JUMPTABLE)();
    return iVar5;
  }
  return 0;
}



// Address: 4a0fe374

void FUN_4a0fe374(int param_1)

{
  *(undefined4 *)(param_1 + 0x3ec) = 0;
  return;
}



// Address: 4a0fe380

void FUN_4a0fe380(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*(int *)(param_1 + 0x54) == 0) {
    return;
  }
  iVar6 = *(int *)(param_1 + 0x358);
  iVar4 = 0;
  *(int *)(param_1 + 0x358) = 1 - iVar6;
  puVar1 = PTR_DAT_4a0fe548;
  if (*(int *)(param_1 + 0x368) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x368) + 8);
  }
  if (0 < *(int *)(iVar2 + iVar6 * 4)) {
    do {
      if (*(int *)(param_1 + 0x37c) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(param_1 + 0x37c) + 8);
      }
      iVar2 = *(int *)(iVar2 + iVar6 * 0x14 + 0xc);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + 8);
      }
      uVar7 = *(undefined4 *)(iVar2 + iVar4 * 4);
      if (*(int *)(param_1 + 0x390) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(param_1 + 0x390) + 8);
      }
      iVar2 = *(int *)(iVar2 + iVar6 * 0x14 + 0xc);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + 8);
      }
      uStack_28 = *(undefined4 *)(iVar2 + iVar4 * 4);
      if (*(int *)(param_1 + 0x3a4) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(param_1 + 0x3a4) + 8);
      }
      iVar2 = *(int *)(iVar2 + iVar6 * 0x14 + 0xc);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + 8);
      }
      uStack_2c = *(undefined4 *)(iVar2 + iVar4 * 4);
      *(undefined4 *)(puVar1 + 8) = uStack_2c;
      *(undefined4 *)(puVar1 + 4) = uStack_28;
      if (*(int *)(param_1 + 0x3b8) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(param_1 + 0x3b8) + 8);
      }
      iVar2 = *(int *)(iVar2 + iVar6 * 0x14 + 0xc);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + 8);
      }
      uVar5 = *(undefined4 *)(iVar2 + iVar4 * 4);
      (**(code **)(**(int **)(param_1 + 0x54) + 0x28))
                (*(int **)(param_1 + 0x54),&uStack_28,&uStack_2c);
      if (*(int *)(param_1 + 0x3e0) == 0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x3e0) + 8);
      }
      *puVar3 = uVar5;
      if (*(int *)(param_1 + 0x3e0) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(param_1 + 0x3e0) + 8);
      }
      *(undefined4 *)(iVar2 + 4) = uStack_28;
      if (*(int *)(param_1 + 0x3e0) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(param_1 + 0x3e0) + 8);
      }
      *(undefined4 *)(iVar2 + 8) = uStack_2c;
      (**(code **)(**(int **)(param_1 + 0x54) + 0x20))
                (*(int **)(param_1 + 0x54),uVar7,param_1 + 0x3d4);
      iVar4 = iVar4 + 1;
      if (*(int *)(param_1 + 0x368) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(param_1 + 0x368) + 8);
      }
    } while (iVar4 < *(int *)(iVar2 + iVar6 * 4));
  }
  if (*(int *)(param_1 + 0x368) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x368) + 8);
  }
  *(undefined4 *)(iVar4 + iVar6 * 4) = 0;
  return;
}



// Address: 4a0fe54c

void FUN_4a0fe54c(int param_1,uint param_2)

{
  if ((int)param_2 < 0x20) {
    *(uint *)(param_1 + 0x4b8) = *(uint *)(param_1 + 0x4b8) | 1 << (param_2 & 0xff);
    return;
  }
  *(uint *)(param_1 + 0x4bc) = *(uint *)(param_1 + 0x4bc) | 1 << (param_2 - 0x20 & 0xff);
  return;
}



// Address: 4a0fe57c

int FUN_4a0fe57c(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar2 = 0;
  iVar1 = 0;
  if (0 < *(int *)(param_2 + 8)) {
    do {
      iVar3 = 0;
      if (*(int *)(param_2 + 0xc) != 0) {
        iVar3 = *(int *)(*(int *)(param_2 + 0xc) + 8);
      }
      if ((((int)*(short *)(iVar3 + iVar1 * 2) & param_3) != 0) &&
         (bVar4 = iVar2 == param_1, iVar2 = iVar2 + 1, bVar4)) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_2 + 8));
  }
  return -1;
}



// Address: 4a0fe5e8

int FUN_4a0fe5e8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  int iVar4;
  int iVar5;
  undefined1 auStack_40 [20];
  undefined1 auStack_2c [20];
  
  *(undefined1 *)(param_1 + 0x4c1) = 1;
  thunk_FUN_4a161570(0x24);
  uVar1 = FUN_4a0c2818();
  uVar2 = thunk_FUN_4a161570(0xc);
  piVar3 = (int *)FUN_4a0c0198(uVar2,uVar1);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
  }
  FUN_4a0bfed4(piVar3,0x8b);
  FUN_4a0bfed4(piVar3,7);
  uVar2 = FUN_4a085684(*(undefined4 *)(param_1 + 0x260));
  FUN_4a0bfd84(piVar3,uVar2);
  uVar2 = FUN_4a0855d8(*(undefined4 *)(param_1 + 0x260));
  FUN_4a0bfd84(piVar3,uVar2);
  FUN_4a0bfe0c(piVar3,*(undefined1 *)(*(int *)(param_1 + 0x264) + 0xd));
  FUN_4a0bfe0c(piVar3,*(undefined1 *)(param_1 + 0x494));
  FUN_4a0bfe0c(piVar3,*(undefined1 *)(param_1 + 0x495));
  FUN_4a0bfe0c(piVar3,*(undefined1 *)(param_1 + 0x497));
  if (*(int *)PTR_DAT_4a0fe1d4 != 0) {
    FUN_4a0bfe0c(piVar3,*(undefined1 *)(param_1 + 0x498));
  }
  FUN_4a0bfe0c(piVar3,*(undefined1 *)(param_1 + 0x499));
  FUN_4a0941ec();
  uVar2 = FUN_4a0953f4();
  FUN_4a0bfe0c(piVar3,uVar2);
  FUN_4a0bfe0c(piVar3,*(undefined1 *)(param_1 + 0x4c0));
  FUN_4a0bfe0c(piVar3,*(undefined1 *)(param_1 + 0x4c1));
  FUN_4a0c011c(piVar3,extraout_r1,*(undefined4 *)(param_1 + 0x4c8),*(undefined4 *)(param_1 + 0x4cc))
  ;
  FUN_4a0c011c(piVar3,extraout_r1_00,*(undefined4 *)(param_1 + 0x4d0),
               *(undefined4 *)(param_1 + 0x4d4));
  FUN_4a0c011c(piVar3,extraout_r1_01,*(undefined4 *)(param_1 + 0x4d8),
               *(undefined4 *)(param_1 + 0x4dc));
  FUN_4a0c011c(piVar3,extraout_r1_02,*(undefined4 *)(param_1 + 0x4e0),
               *(undefined4 *)(param_1 + 0x4e4));
  FUN_4a0c0110(piVar3,*(uint *)(param_1 + 0x49c) & 0xff);
  iVar5 = 0;
  do {
    if (*(int *)(param_1 + 0x514) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1 + 0x514) + 8);
    }
    FUN_4a0bff24(piVar3,*(undefined4 *)(iVar4 + iVar5 * 4));
    if (*(int *)(param_1 + 0x4b0) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1 + 0x4b0) + 8);
    }
    FUN_4a0bfe0c(piVar3,*(undefined1 *)(iVar4 + iVar5));
    iVar5 = iVar5 + 1;
  } while (iVar5 != 7);
  FUN_4a0bfed4(piVar3,0x8b);
  FUN_4a0c254c(auStack_2c,uVar1);
  iVar5 = (**(code **)(*piVar3 + 0x2c))(piVar3);
  *(bool *)(param_1 + 0x34) = iVar5 != 1 || *(char *)(param_1 + 0x34) != '\0';
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar1 = FUN_4a16b5a0(auStack_40,auStack_2c);
    uVar2 = thunk_FUN_4a161570(0x14);
    uVar2 = FUN_4a0c707c(uVar2,PTR_s_sim3set_4a0fe1dc);
    FUN_4a0ff2ac(param_1,uVar2,uVar1);
    FUN_4a16b6c0(auStack_40);
  }
  else {
    uVar1 = FUN_4a16b5a0(auStack_40,auStack_2c);
    uVar2 = thunk_FUN_4a161570(0x14);
    uVar2 = FUN_4a0c707c(uVar2,PTR_s_sim3set_demo_4a0fe1d8);
    FUN_4a0ff2ac(param_1,uVar2,uVar1);
    FUN_4a16b6c0(auStack_40);
  }
  if ((piVar3 != (int *)0x0) && (iVar5 = (**(code **)(*piVar3 + 8))(piVar3), iVar5 != 0)) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  iVar5 = 1 - (uint)*(byte *)(param_1 + 0x34);
  if (1 < *(byte *)(param_1 + 0x34)) {
    iVar5 = 0;
  }
  FUN_4a16b6c0(auStack_2c);
  return iVar5;
}



// Address: 4a0fe5f4

void FUN_4a0fe5f4(int param_1)

{
  char cVar1;
  bool bVar2;
  
  *(undefined1 *)(param_1 + 0x50) = 0;
  while( true ) {
    cVar1 = *(char *)(param_1 + 0x36);
    bVar2 = cVar1 == '\0';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x35);
    }
    if (bVar2 && cVar1 == '\0') break;
    FUN_4a0c74d4();
  }
  if (*(int **)(param_1 + 0x54) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a0fe634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x54) + 0x18))();
  return;
}



// Address: 4a0fe640

int FUN_4a0fe640(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_4a0c9920(param_1 + 0x268,(param_3 - param_2) + 1);
  return iVar1 + param_2;
}



// Address: 4a0fe664

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

void FUN_4a0fe664(int param_1,int *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar6;
  
  bVar6 = *(int *)(param_1 + 0x54) != 0;
  cVar1 = '\0';
  if (bVar6) {
    cVar1 = *(char *)(param_1 + 0x50);
  }
  if (bVar6 && cVar1 != '\0') {
    iVar3 = 0;
    if (*(int *)PTR_DAT_4a0fe7b8 != 0) {
      iVar3 = *(int *)PTR_DAT_4a0fe7bc;
    }
    if (*(int *)PTR_DAT_4a0fe7b8 == 0 || iVar3 == 0) {
      (**(code **)(*param_2 + 0xa4))(param_2,0xff,0xff);
      (**(code **)(*param_2 + 0x58))(param_2,0,0,800);
    }
    (**(code **)(**(int **)(param_1 + 0x54) + 0x1c))(*(int **)(param_1 + 0x54),param_2);
  }
  FUN_4a041910(1);
  if (*(int *)(param_1 + 0x44c) < 0xffffff) {
    uVar4 = FUN_4a13ca78(param_1);
    uVar5 = FUN_4a13caa0(param_1);
    *(undefined4 *)(param_1 + 0x42c) = 0;
    *(undefined4 *)(param_1 + 0x438) = uVar5;
    *(undefined4 *)(param_1 + 0x430) = 0;
    *(undefined4 *)(param_1 + 0x434) = uVar4;
    FUN_4a0b0180(*(undefined4 *)(param_1 + 0x440),0x42);
    FUN_4a06a9a8(param_1 + 0x428,*(undefined4 *)(param_1 + 0x44c));
    FUN_4a06a948(param_1 + 0x428,param_2);
  }
  if (*(char *)(param_1 + 0x458) == '\0') {
    if (*(int *)(param_1 + 0x450) < 1) {
      if ((-1 < *(int *)(param_1 + 0x450)) || (0 < *(int *)(param_1 + 0x44c)))
      goto code_r0x4a041910;
    }
    else if (*(int *)(param_1 + 0x44c) < 0xffffff) goto code_r0x4a041910;
    *(undefined1 *)(param_1 + 0x458) = 1;
  }
code_r0x4a041910:
  puVar2 = PTR_DAT_4a041a9c;
  iVar3 = 0;
  if (*(int *)PTR_DAT_4a041a9c != 0) {
    iVar3 = *(int *)(PTR_DAT_4a041a9c + 4);
  }
  if (*(int *)PTR_DAT_4a041a9c == 0 || iVar3 == 0) {
    return;
  }
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
  if (*(int *)(puVar2 + 0x20) == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0419cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  *(int *)(puVar2 + 8) = *(int *)(puVar2 + 0x34) + *(int *)(puVar2 + 0x3c);
  *(int *)(puVar2 + 0xc) = *(int *)(puVar2 + 0x38) + *(int *)(puVar2 + 0x40);
  FUN_4a150d7c((*(int *)(puVar2 + 0x10) + *(int *)(puVar2 + 0x18)) - *(int *)(puVar2 + 0x3c) / 2,
               -(*(int *)(puVar2 + 0x40) / 2));
  *(undefined4 *)(puVar2 + 0x24) = 1;
  thunk_FUN_4a150140(0xc11);
  FUN_4a1507ec(*(undefined4 *)(puVar2 + 0x34),0,*(undefined4 *)(puVar2 + 0x34),
               *(undefined4 *)(puVar2 + 0x38));
  *(undefined4 *)(puVar2 + 0x24) = 0;
  return;
}



// Address: 4a0fe7c0

void FUN_4a0fe7c0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  if (*PTR_DAT_4a0fe96c != '\0') {
    FUN_4a0642fc();
    FUN_4a0672b0();
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    bVar5 = *(int *)(param_1 + 0x44) == 0;
    cVar1 = '\0';
    if (!bVar5) {
      cVar1 = *(char *)(param_1 + 0x48);
    }
    if (bVar5 || cVar1 == '\0') goto LAB_4a0fe808;
  }
  *(undefined4 *)(param_1 + 0x350) = 0;
LAB_4a0fe808:
  switchD_4a110030::default(param_1,1);
  iVar4 = 0;
  do {
    iVar2 = *(int *)(param_1 + 0x4b0);
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar2 + 8);
    }
    if (*(char *)(iVar3 + iVar4) != '\0') {
      *(int *)(param_1 + 0x4a0) = iVar4;
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + 8);
      }
      if ((*(char *)(iVar2 + iVar4) != '\0') && (iVar2 = FUN_4a0fc764(param_1), iVar2 == 0)) {
        iVar2 = *(int *)(param_1 + 0x4a0);
        FUN_4a0fb52c(param_1,0,iVar2);
        if (*(int *)(param_1 + 0x4b0) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(param_1 + 0x4b0) + 8);
        }
        *(undefined1 *)(iVar3 + iVar2) = 0;
        FUN_4a0fdf10(param_1);
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 7);
  *(undefined4 *)(param_1 + 0x460) = 1;
  *(undefined4 *)(param_1 + 0x464) = 0xffffffff;
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar4 = 0;
    do {
      FUN_4a0fb52c(param_1,0,iVar4);
      if (*(int *)(param_1 + 0x4b0) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(param_1 + 0x4b0) + 8);
      }
      *(undefined1 *)(iVar2 + iVar4) = 0;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 7);
    *(undefined1 *)(param_1 + 0x4c0) = 0;
    *(undefined4 *)(param_1 + 0x4c8) = 0;
    *(undefined4 *)(param_1 + 0x4cc) = 0;
    *(undefined4 *)(param_1 + 0x4d0) = 0;
    *(undefined4 *)(param_1 + 0x4d4) = 0;
    *(undefined4 *)(param_1 + 0x4d8) = 0;
    *(undefined4 *)(param_1 + 0x4dc) = 0;
    *(undefined4 *)(param_1 + 0x4e0) = 0;
    *(undefined4 *)(param_1 + 0x4e4) = 0;
    FUN_4a0fdf10(param_1);
    *(undefined4 *)(param_1 + 0x4b8) = 0;
    *(undefined4 *)(param_1 + 0x4bc) = 0;
    *(undefined4 *)(param_1 + 0x4e8) = 0;
    *(undefined4 *)(param_1 + 0x4ec) = 0;
    *(undefined4 *)(param_1 + 0x4f0) = 0;
    *(undefined4 *)(param_1 + 0x4f4) = 0;
    *(undefined4 *)(param_1 + 0x4f8) = 0;
    *(undefined4 *)(param_1 + 0x4fc) = 0;
    *(undefined4 *)(param_1 + 0x500) = 0;
    *(undefined4 *)(param_1 + 0x504) = 0;
    *(undefined1 *)(param_1 + 0x496) = 0;
    FUN_4a0d95f8(*(undefined4 *)(param_1 + 0x51c));
    FUN_4a0f1b38(*(undefined4 *)(param_1 + 0x520));
    FUN_4a0fca00(param_1);
  }
  *(undefined1 *)(param_1 + 0x58) = 0;
  return;
}




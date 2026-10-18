/* AUTOMATED DECOMPILER OUTPUT. Not original source, not a buildable game.
 * Function boundaries, types, indirect calls, and data still require validation. */

// Address: 4a04e214

bool FUN_4a04e214(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 in_r3;
  
  FUN_4a15edcc(s_TnbNative___tnbShouldShowPurchas_4a04e2b8);
  piVar1 = (int *)FUN_4a05be98();
  uVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,s_com_ea_tnb_WrapperActivity_4a04e2e0);
  iVar3 = (**(code **)(*piVar1 + 0x1c4))
                    (piVar1,uVar2,s_shouldShowPurchaseHelp_4a04e2fc,&DAT_4a04e314,in_r3);
  if (iVar3 == 0) {
    FUN_4a15edcc(s_Sorry__I_can_t_find_shouldShowPu_4a04e318);
  }
  iVar3 = (**(code **)(*piVar1 + 0x1d8))(piVar1,uVar2,iVar3,&stack0xffffffec,iVar3);
  if (iVar3 != 0) {
    pcVar4 = s_shouldShowPurchaseHelp_true_4a04e364;
  }
  else {
    pcVar4 = s_shouldShowPurchaseHelp_false_4a04e344;
  }
  FUN_4a15edcc(pcVar4);
  return iVar3 != 0;
}



// Address: 4a04e384

undefined4 FUN_4a04e384(int param_1,int param_2,int param_3,int param_4)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + 8);
  }
  psVar1 = (short *)0x0;
  if (param_2 != 0) {
    psVar1 = *(short **)(param_2 + 8);
  }
  psVar2 = (short *)(iVar3 + param_3 * 2);
  iVar3 = 0;
  if (0 < param_4) {
    do {
      if ((*psVar2 != *psVar1) || (*psVar2 == 0 || *psVar1 == 0)) {
        return 0xffffffff;
      }
      iVar3 = iVar3 + 1;
      psVar2 = psVar2 + 1;
      psVar1 = psVar1 + 1;
    } while (iVar3 < param_4);
  }
  return 0;
}



// Address: 4a04e3f0

void FUN_4a04e3f0(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  byte *local_18;
  
  uVar2 = *(uint *)(*(int *)(param_1 + 0xc) + 0x10);
  bVar11 = (uVar2 & 0x7ffff) >> 0x10 != 1;
  if (((int)(uVar2 << 0x1e) < 0) || ((uVar2 & 1) == 2)) {
    uVar3 = 0x10000;
    if (bVar11) {
      uVar7 = 0x10000;
      uVar6 = 0x10000;
      uVar5 = uVar3;
    }
    else {
      uVar6 = uVar3;
      uVar7 = uVar3;
      uVar5 = 0x8000;
    }
  }
  else {
    pbVar4 = (byte *)(param_1 + 0xb8);
    local_18 = pbVar4;
    if ((*(uint *)(param_1 + 0x10) & 0x7fff) >> 0xb != 0) {
      FUN_4a150140(0xb50);
      FUN_4a150140(0x4000);
      piVar8 = (int *)PTR_DAT_4a04e6f4;
      if (*(int *)(param_1 + 0x10) << 0x14 < 0) {
        local_38 = (uint)*(byte *)(param_1 + 0xb4) << 8;
        local_34 = (uint)*(byte *)(param_1 + 0xb5) << 8;
        local_30 = (uint)*(byte *)(param_1 + 0xb6) << 8;
        local_2c = (uint)*(byte *)(param_1 + 0xb7) << 8;
        piVar8 = &local_38;
      }
      FUN_4a150608(0x408,DAT_4a04e6f0,piVar8);
      if (*(int *)(param_1 + 0x10) << 0x13 < 0) {
        local_2c = *(int *)(PTR_DAT_4a04e6f4 + 0x2c);
        piVar8 = &local_38;
        local_38 = (uint)*(byte *)(param_1 + 0xc0) << 8;
        local_34 = (uint)*(byte *)(param_1 + 0xc1) << 8;
        local_30 = (uint)*(byte *)(param_1 + 0xc2) << 8;
      }
      else {
        piVar8 = (int *)(PTR_DAT_4a04e6f4 + 0x10);
      }
      FUN_4a1504a8(0x4000,0x1200,piVar8);
      pbVar4 = local_18;
      local_28 = (uint)*local_18 << 8;
      local_24 = (uint)local_18[1] << 8;
      local_20 = (uint)local_18[2] << 8;
      local_1c = (uint)local_18[3] << 8;
      FUN_4a150608(0x408,0x1200,&local_28);
      if (bVar11) {
        local_2c = (uint)pbVar4[3] * 0x100;
        if (*(int *)(param_1 + 0x10) * 0x100000 < 0) {
          local_2c = (uint)*(byte *)(param_1 + 0xb7) * 0x100 + local_2c;
        }
      }
      else {
        local_2c = 0x8000;
      }
      if (*(int *)(param_1 + 0x10) << 0x12 < 0) {
        local_38 = (uint)*(byte *)(param_1 + 0xbc) << 8;
        local_34 = (uint)*(byte *)(param_1 + 0xbd) << 8;
        local_30 = (uint)*(byte *)(param_1 + 0xbe) << 8;
      }
      else {
        local_38 = 0;
        local_34 = 0;
        local_30 = 0;
      }
      FUN_4a150608(0x408,DAT_4a04e6f8,&local_38);
      uVar3 = DAT_4a04e6fc;
      if (((*(uint *)(param_1 + 0x10) & 0x7fff) >> 0xd == 0) || (*(int *)(param_1 + 0x134) == 0)) {
        FUN_4a1500f8(DAT_4a04e6fc);
      }
      else {
        FUN_4a150140(DAT_4a04e6fc);
        local_2c = *(int *)(PTR_DAT_4a04e6f4 + 0x3c);
        local_38 = (uint)*(byte *)(param_1 + 0xc4) << 8;
        local_34 = (uint)*(byte *)(param_1 + 0xc5) << 8;
        local_30 = (uint)*(byte *)(param_1 + 0xc6) << 8;
        FUN_4a1504a8(uVar3,DAT_4a04e6f8,&local_38);
        uVar6 = thunk_FUN_4a171fac((int)*(short *)(param_1 + 0xcc));
        local_44 = thunk_FUN_4a17295c(uVar6,0xfffffff4);
        uVar6 = thunk_FUN_4a171fac((int)*(short *)(param_1 + 0xce));
        local_40 = thunk_FUN_4a17295c(uVar6,0xfffffff4);
        uVar6 = thunk_FUN_4a171fac((int)*(short *)(param_1 + 0xd0));
        local_3c = thunk_FUN_4a17295c(uVar6,0xfffffff4);
        if (*(int *)(param_1 + 0x14) != 0) {
          FUN_4a13f43a(&local_60,param_1 + 0x4c,&local_44);
          local_44 = local_60;
          local_40 = local_5c;
          local_3c = local_58;
        }
        local_48 = 0;
        local_54 = local_44 ^ 0x80000000;
        local_50 = local_40 ^ 0x80000000;
        local_4c = local_3c ^ 0x80000000;
        FUN_4a150488(uVar3,DAT_4a04e6f8 + 2,&local_54);
        FUN_4a150140(DAT_4a04e700);
      }
      iVar10 = DAT_4a04e6f8 + 1;
      if (*(int *)(param_1 + 0x10) << 0x11 < 0) {
        local_2c = *(int *)(PTR_DAT_4a04e6f4 + 0x4c);
        local_38 = (uint)*(byte *)(param_1 + 200) << 8;
        local_34 = (uint)*(byte *)(param_1 + 0xc9) << 8;
        local_30 = (uint)*(byte *)(param_1 + 0xca) << 8;
        FUN_4a1504a8(DAT_4a04e6fc,iVar10,&local_38);
        iVar9 = *(int *)(param_1 + 0xc);
        local_3c = *(uint *)(PTR_DAT_4a04e6f4 + 0x5c);
        local_48 = (uint)*(byte *)(iVar9 + 0x28) << 8;
        local_44 = (uint)*(byte *)(iVar9 + 0x29) << 8;
        local_40 = (uint)*(byte *)(iVar9 + 0x2a) << 8;
        FUN_4a150608(0x408,iVar10,&local_48);
        iVar10 = (uint)*(byte *)(iVar9 + 0x2b) << 0x10;
      }
      else {
        FUN_4a1504a8(DAT_4a04e6fc,iVar10,PTR_DAT_4a04e6f4);
        FUN_4a150608(0x408,iVar10,PTR_DAT_4a04e6f4);
        iVar10 = 0;
      }
      FUN_4a1505f4(0x408,DAT_4a04e6f0 + 1,iVar10);
      return;
    }
    bVar1 = *(byte *)(param_1 + 0xbb);
    if (!bVar11) {
      bVar1 = bVar1 >> 1;
    }
    uVar5 = thunk_FUN_4a0066d8((uint)bVar1 << 0x10,0xff);
    uVar7 = thunk_FUN_4a0066d8((uint)*(byte *)(param_1 + 0xba) << 0x10,0xff);
    uVar6 = thunk_FUN_4a0066d8((uint)*(byte *)(param_1 + 0xb9) << 0x10,0xff);
    uVar3 = thunk_FUN_4a0066d8((uint)*pbVar4 << 0x10,0xff);
  }
  FUN_4a14fed0(uVar3,uVar6,uVar7,uVar5);
  FUN_4a1500f8(0xb50);
  return;
}



// Address: 4a04e708

void FUN_4a04e708(int param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  puVar1 = PTR_DAT_4a04e8ac;
  iVar9 = *(int *)(PTR_DAT_4a04e8ac + 0x20);
  iVar6 = *(int *)(PTR_DAT_4a04e8ac + 0x1c);
  iVar12 = *(int *)(param_1 + 4);
  *(int *)(PTR_DAT_4a04e8ac + 0x10) = iVar12;
  iVar13 = *(int *)(param_1 + 8);
  *(int *)(puVar1 + 0x14) = iVar13;
  uVar2 = *(uint *)(param_1 + 0xc);
  *(uint *)(puVar1 + 0x18) = uVar2;
  *(undefined4 *)(puVar1 + 4) = 0x1000;
  *(undefined4 *)(puVar1 + 0x2c) = 0;
  *(undefined4 *)(puVar1 + 0x1c) = 0;
  *(undefined4 *)(puVar1 + 8) = 0x1000;
  *(undefined4 *)(puVar1 + 0x20) = 0;
  if (*(int *)(PTR_DAT_4a04e8b0 + 0x1c) != 0) {
    iVar11 = *(int *)(PTR_DAT_4a04e8b0 + 0xc);
    iVar10 = *(int *)(PTR_DAT_4a04e8b0 + 0x10);
    iVar7 = *(int *)(PTR_DAT_4a04e8b0 + 0x18);
    for (iVar3 = *(int *)(PTR_DAT_4a04e8b0 + 0x14); iVar3 < 0; iVar3 = iVar3 + 0x168) {
    }
    for (; 0x167 < iVar3; iVar3 = iVar3 + -0x168) {
    }
    uVar4 = thunk_FUN_4a0015f0(iVar3,0x5a);
    *(uint *)(PTR_DAT_4a04e8ac + 0x2c) = uVar4;
    puVar1 = PTR_DAT_4a04e8ac;
    iVar3 = iVar10;
    if ((uVar4 & 1) != 0) {
      iVar3 = iVar11;
      iVar11 = iVar10;
    }
    iVar10 = iVar12;
    if ((uVar2 & 1) != 0) {
      iVar10 = iVar13;
      iVar13 = iVar12;
    }
    if (iVar11 == -1) {
      if (iVar3 == -1) {
        *(int *)(PTR_DAT_4a04e8ac + 0x24) = iVar10;
        *(int *)(puVar1 + 0x28) = iVar13;
      }
      else {
        uVar5 = thunk_FUN_4a0015f0(iVar3 * iVar10,iVar13);
        puVar1 = PTR_DAT_4a04e8ac;
        *(undefined4 *)(PTR_DAT_4a04e8ac + 0x24) = uVar5;
        *(int *)(puVar1 + 0x28) = iVar3;
      }
    }
    else if (iVar3 == -1) {
      *(int *)(PTR_DAT_4a04e8ac + 0x24) = iVar11;
      uVar5 = thunk_FUN_4a0015f0(iVar11 * iVar13,iVar10);
      *(undefined4 *)(puVar1 + 0x28) = uVar5;
    }
    else {
      *(int *)(PTR_DAT_4a04e8ac + 0x24) = iVar11;
      *(int *)(puVar1 + 0x28) = iVar3;
      if (iVar7 != 0) {
        iVar12 = iVar3;
        iVar7 = iVar10;
        if ((uVar2 & 1) != 0) {
          iVar12 = iVar11;
          iVar11 = iVar3;
          iVar7 = iVar13;
          iVar13 = iVar10;
        }
        iVar3 = thunk_FUN_4a0015f0(iVar7 << 0xc,iVar11);
        *(int *)(PTR_DAT_4a04e8ac + 4) = iVar3;
        iVar10 = thunk_FUN_4a0015f0(iVar13 << 0xc,iVar12);
        *(int *)(PTR_DAT_4a04e8ac + 8) = iVar10;
        if (iVar3 < iVar10) {
          *(undefined4 *)(PTR_DAT_4a04e8ac + 4) = 0x1000;
          iVar12 = thunk_FUN_4a0015f0(iVar12 * iVar7,iVar11);
          uVar5 = thunk_FUN_4a0015f0(iVar12 << 0xc,iVar13);
          *(undefined4 *)(PTR_DAT_4a04e8ac + 8) = uVar5;
        }
        else {
          *(undefined4 *)(PTR_DAT_4a04e8ac + 8) = 0x1000;
          iVar12 = thunk_FUN_4a0015f0(iVar11 * iVar13,iVar12);
          uVar5 = thunk_FUN_4a0015f0(iVar12 << 0xc,iVar7);
          *(undefined4 *)(PTR_DAT_4a04e8ac + 4) = uVar5;
        }
        puVar1 = PTR_DAT_4a04e8ac;
        iVar11 = (iVar7 - ((int)(((uint)(*(int *)(PTR_DAT_4a04e8ac + 4) * iVar7 >> 0x1f) >> 0x14) +
                                *(int *)(PTR_DAT_4a04e8ac + 4) * iVar7) >> 0xc)) / 2;
        *(int *)(PTR_DAT_4a04e8ac + 0x1c) = iVar11;
        iVar12 = *(int *)(puVar1 + 8) * iVar13;
        iVar13 = (iVar13 - ((int)(((uint)(iVar12 >> 0x1f) >> 0x14) + iVar12) >> 0xc)) / 2;
        *(int *)(puVar1 + 0x20) = iVar13;
        if (iVar11 != 0 || iVar13 != 0) {
          FUN_4a03bb28();
        }
      }
    }
    if ((uVar4 & 1) != 0) {
      puVar8 = (undefined4 *)(PTR_DAT_4a04e8ac + 0x28);
      uVar5 = *(undefined4 *)(PTR_DAT_4a04e8ac + 0x24);
      *(undefined4 *)(PTR_DAT_4a04e8ac + 0x24) = *puVar8;
      *puVar8 = uVar5;
    }
    if (iVar6 != 0 || iVar9 != 0) {
      host_glDisable_thumb(DAT_4a04e8b4);
    }
  }
  return;
}



// Address: 4a04e90c

undefined4 FUN_4a04e90c(void)

{
  uint uVar1;
  uint local_8 [2];
  
  local_8[0] = 0x606033d;
  FUN_4a039b90(local_8,4,8,1);
  uVar1 = (local_8[0] >> 8 & 0xff) << 0x10 | (local_8[0] >> 0x10 & 0xff) << 8 | local_8[0] >> 0x18;
  *(uint *)PTR_DAT_4a04e95c = uVar1;
  if (DAT_4a04e960 <= uVar1) {
    FUN_4a03c0b8(PTR_DAT_4a04e95c + 4,1,0x10,2);
  }
  return 1;
}



// Address: 4a04ee14

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_4a04ee14(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  int in_r3;
  int iStack_18;
  
  puVar1 = PTR_DAT_4a04ee30;
  *(undefined **)(PTR_DAT_4a04ee30 + 0xdc) = PTR_FUN_4a03b894_1_4a04ee2c;
  *(undefined **)(puVar1 + 0xec) = PTR_DAT_4a04ee34;
  puVar6 = *(uint **)PTR_DAT_4a040838;
  *puVar6 = puVar6[0xda] & 0x80 | *puVar6;
  puVar1 = PTR_DAT_4a040840;
  *(undefined **)(PTR_DAT_4a040840 + 0x98) = PTR_LAB_4a04083c;
  *(undefined **)(puVar1 + 0xa4) = PTR_LAB_4a040844;
  *(undefined **)(puVar1 + 0xa8) = PTR_FUN_4a040848;
  *(undefined **)(puVar1 + 0xac) = PTR_DAT_4a04084c;
  puVar2 = PTR_DAT_4a03e5fc;
  puVar1 = PTR_DAT_4a03e5f8;
  if (*(int *)(PTR_DAT_4a03e5f8 + 8) == 1) {
    iStack_18 = in_r3;
    if (*(int *)(PTR_DAT_4a03e5f8 + 0xc) == 0) {
      thunk_FUN_4a04d274();
      if (**(int **)puVar2 << 0x18 < 0) {
        thunk_FUN_4a029e80();
        if (*(int *)(*(int *)puVar2 + 0xc) == 3) {
          iStack_18 = DAT_4a03e600;
          host_s3eConfigGetInt_thumb(&DAT_4a03e61c,s_ShaderUniformShadowMem_4a03e604,&iStack_18);
          *(undefined4 *)(puVar1 + 0x14) = 0;
          *(undefined4 *)(puVar1 + 0x18) = 0;
          *(int *)(puVar1 + 0x1c) = iStack_18;
          if (iStack_18 != 0) {
            uVar4 = FUN_4a161570();
            *(undefined4 *)(puVar1 + 0x14) = uVar4;
            *(undefined4 *)(puVar1 + 0x18) = uVar4;
          }
        }
      }
      else {
        iVar5 = FUN_4a00ad9c();
        if (iVar5 != 0) {
          FUN_4a00b25c();
        }
        if (-1 < **(int **)puVar2 << 0x1b) {
          FUN_4a008004(PTR_s_This_build_does_not_support_SW_r_4a03e620);
          iVar5 = host_s3eDebugIsDebuggerPresent_thumb();
          if (iVar5 != 0) {
            _DAT_fffffff4 = 0;
          }
          FUN_4a000e40(0xffffffff);
        }
      }
    }
    puVar3 = PTR_DAT_4a03e624;
    *(undefined4 *)(puVar1 + 0xc) = 1;
    puVar6 = *(uint **)puVar2;
    if (*(int *)(puVar3 + 0x28) == 0) {
      *(undefined1 *)(puVar6 + 0xd9) = 0;
    }
    if (*(int *)PTR_DAT_4a03e628 == 0) {
      *(undefined1 *)((int)puVar6 + 0x365) = 0;
    }
    else if (-1 < (int)(*puVar6 << 0x1a)) {
      *puVar6 = *puVar6 | 4;
    }
    if (*(int *)(puVar3 + 0x40) == 0) {
      *(undefined1 *)((int)puVar6 + 0x365) = 1;
    }
    else if (-1 < (int)(*puVar6 << 0x1d)) {
      *puVar6 = *puVar6 | 0x20;
    }
    if (*(int *)(puVar3 + 0x18) == 0) {
      *(undefined1 *)((int)puVar6 + 0x366) = 0;
    }
    else if (-1 < (int)(*puVar6 << 0x19)) {
      *puVar6 = *puVar6 | 8;
    }
    if (*(int *)(puVar3 + 0x54) == 0) {
      *(undefined1 *)((int)puVar6 + 0x366) = 1;
    }
    else if (-1 < (int)(*puVar6 << 0x1c)) {
      *puVar6 = *puVar6 | 0x40;
    }
    if ((char)puVar6[0xd9] == '\0') {
      thunk_FUN_4a0483f0();
    }
    else {
      thunk_FUN_4a0484b8();
    }
    if (*(char *)((int)puVar6 + 0x365) == '\0') {
      thunk_FUN_4a03f7a4();
    }
    else {
      thunk_FUN_4a03f83c();
    }
    if (*(char *)((int)puVar6 + 0x366) == '\0') {
      thunk_FUN_4a03be5c();
    }
    else {
      thunk_FUN_4a03bed0();
    }
    FUN_4a04ff24();
    thunk_FUN_4a0360f8((char)puVar6[0x147],*(undefined1 *)((int)puVar6 + 0x51d),
                       *(undefined1 *)((int)puVar6 + 0x51e),*(undefined1 *)((int)puVar6 + 0x51f));
    FUN_4a03bf6c();
    FUN_4a033510();
  }
  return;
}



// Address: 4a04ee3c

undefined4 FUN_4a04ee3c(int *param_1,int *param_2,int *param_3)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  short *psVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  int iVar20;
  bool bVar21;
  bool bVar22;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
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
  int *local_30;
  int *piStack_2c;
  int *local_28;
  
  iVar4 = *param_1;
  if (*(int *)(iVar4 + 0xec) == 0) {
    bVar21 = false;
    iVar17 = *(int *)(iVar4 + 0xc);
    bVar22 = false;
    bVar3 = false;
    iVar15 = 0;
    iVar20 = 0;
    for (iVar14 = iVar4; *param_2 != iVar14; iVar14 = *(int *)(iVar14 + 8)) {
      if ((*(int *)(iVar14 + 0xc) == iVar17) && (*(int *)(iVar14 + 0xec) == 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if ((bVar2) && (((*(uint *)(iVar4 + 0x10) ^ *(uint *)(iVar14 + 0x10)) & 0x8000) == 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (((bVar2) && (*(int *)(iVar14 + 0x100) == *(int *)(iVar4 + 0x100))) &&
         (*(int *)(iVar14 + 0x104) == *(int *)(iVar4 + 0x104))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (!bVar2) {
        if (iVar4 == iVar14) {
          return 0;
        }
        if (*(int *)(iVar14 + 0xec) != 0) {
          return 0;
        }
        break;
      }
      iVar15 = iVar15 + *(int *)(iVar14 + 0xf0);
      if (*(ushort *)(iVar14 + 0xf4) == 0xffff) {
        iVar5 = *(int *)(iVar14 + 0xb0);
      }
      else {
        iVar5 = (uint)*(ushort *)(iVar14 + 0xf6) - (uint)*(ushort *)(iVar14 + 0xf4);
      }
      iVar20 = iVar20 + iVar5;
      bVar21 = (bool)(bVar21 | *(int *)(iVar14 + 0x134) != 0);
      bVar22 = (bool)(bVar22 | *(int *)(iVar14 + 0x138) != 0);
      bVar3 = (bool)(bVar3 | *(int *)(iVar14 + 0x13c) != 0);
    }
    if (*(int *)(iVar4 + 0xf0) != iVar15) {
      iVar5 = *(int *)PTR_DAT_4a04f9d4;
      local_5c = *(int *)(iVar5 + 0x38c);
      local_60 = iVar20 * 0x14 + local_5c;
      iVar4 = iVar20 * 4;
      local_64 = iVar4 + local_60;
      *(int *)(iVar5 + 0x388) = local_60;
      *(int *)(iVar5 + 0x38c) = local_64;
      if (*(int *)(iVar17 + 0x2c) == 0) {
        local_64 = 0;
      }
      else {
        *(int *)(iVar5 + 0x388) = local_64;
        *(int *)(iVar5 + 0x38c) = iVar4 + local_64;
      }
      local_68 = 0;
      if (*(int *)(iVar17 + 0x30) != 0) {
        local_68 = *(int *)(iVar5 + 0x38c);
        *(int *)(iVar5 + 0x388) = local_68;
        *(int *)(iVar5 + 0x38c) = iVar4 + local_68;
      }
      psVar13 = *(short **)(iVar5 + 0x38c);
      iVar7 = (iVar15 * 2 + 3U & 0xfffffffc) + (int)psVar13;
      *(short **)(iVar5 + 0x388) = psVar13;
      iVar4 = 0;
      *(int *)(iVar5 + 0x38c) = iVar7;
      local_6c = 0;
      local_70 = 0;
      if (*(int *)(iVar5 + 0xc) == 3) {
        if (bVar21) {
          *(int *)(iVar5 + 0x388) = iVar7;
          *(uint *)(iVar5 + 0x38c) = (iVar20 * 6 + 3U & 0xfffffffc) + iVar7;
          iVar4 = iVar7;
        }
        if (bVar22) {
          local_6c = *(int *)(iVar5 + 0x38c);
          *(int *)(iVar5 + 0x388) = local_6c;
          *(uint *)(iVar5 + 0x38c) = (iVar20 * 6 + 3U & 0xfffffffc) + local_6c;
        }
        if (bVar3) {
          local_70 = *(int *)(iVar5 + 0x38c);
          *(int *)(iVar5 + 0x388) = local_70;
          *(uint *)(iVar5 + 0x38c) = (iVar20 * 6 + 3U & 0xfffffffc) + local_70;
        }
      }
      iVar7 = *(int *)(iVar5 + 0x38c);
      *(int *)(iVar5 + 0x388) = iVar7;
      *(int *)(iVar5 + 0x38c) = iVar7 + 0x150;
      iVar5 = *param_1;
      *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar5 + 4);
      *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar5 + 8);
      *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
      *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(iVar5 + 0x10);
      *(undefined4 *)(iVar7 + 0x14) = *(undefined4 *)(iVar5 + 0x14);
      *(undefined2 *)(iVar7 + 0x18) = *(undefined2 *)(iVar5 + 0x18);
      *(undefined2 *)(iVar7 + 0x1a) = *(undefined2 *)(iVar5 + 0x1a);
      uVar9 = *(undefined4 *)(iVar5 + 0x20);
      uVar11 = *(undefined4 *)(iVar5 + 0x24);
      uVar19 = *(undefined4 *)(iVar5 + 0x28);
      *(undefined4 *)(iVar7 + 0x1c) = *(undefined4 *)(iVar5 + 0x1c);
      *(undefined4 *)(iVar7 + 0x20) = uVar9;
      *(undefined4 *)(iVar7 + 0x24) = uVar11;
      *(undefined4 *)(iVar7 + 0x28) = uVar19;
      uVar9 = *(undefined4 *)(iVar5 + 0x30);
      uVar11 = *(undefined4 *)(iVar5 + 0x34);
      uVar19 = *(undefined4 *)(iVar5 + 0x38);
      *(undefined4 *)(iVar7 + 0x2c) = *(undefined4 *)(iVar5 + 0x2c);
      *(undefined4 *)(iVar7 + 0x30) = uVar9;
      *(undefined4 *)(iVar7 + 0x34) = uVar11;
      *(undefined4 *)(iVar7 + 0x38) = uVar19;
      *(undefined4 *)(iVar7 + 0x3c) = *(undefined4 *)(iVar5 + 0x3c);
      *(undefined4 *)(iVar7 + 0x40) = *(undefined4 *)(iVar5 + 0x40);
      *(undefined4 *)(iVar7 + 0x44) = *(undefined4 *)(iVar5 + 0x44);
      *(undefined4 *)(iVar7 + 0x48) = *(undefined4 *)(iVar5 + 0x48);
      uVar9 = *(undefined4 *)(iVar5 + 0x50);
      uVar11 = *(undefined4 *)(iVar5 + 0x54);
      uVar19 = *(undefined4 *)(iVar5 + 0x58);
      *(undefined4 *)(iVar7 + 0x4c) = *(undefined4 *)(iVar5 + 0x4c);
      *(undefined4 *)(iVar7 + 0x50) = uVar9;
      *(undefined4 *)(iVar7 + 0x54) = uVar11;
      *(undefined4 *)(iVar7 + 0x58) = uVar19;
      uVar9 = *(undefined4 *)(iVar5 + 0x60);
      uVar11 = *(undefined4 *)(iVar5 + 100);
      uVar19 = *(undefined4 *)(iVar5 + 0x68);
      *(undefined4 *)(iVar7 + 0x5c) = *(undefined4 *)(iVar5 + 0x5c);
      *(undefined4 *)(iVar7 + 0x60) = uVar9;
      *(undefined4 *)(iVar7 + 100) = uVar11;
      *(undefined4 *)(iVar7 + 0x68) = uVar19;
      *(undefined4 *)(iVar7 + 0x6c) = *(undefined4 *)(iVar5 + 0x6c);
      *(undefined4 *)(iVar7 + 0x70) = *(undefined4 *)(iVar5 + 0x70);
      *(undefined4 *)(iVar7 + 0x74) = *(undefined4 *)(iVar5 + 0x74);
      *(undefined4 *)(iVar7 + 0x78) = *(undefined4 *)(iVar5 + 0x78);
      uVar9 = *(undefined4 *)(iVar5 + 0x80);
      uVar11 = *(undefined4 *)(iVar5 + 0x84);
      uVar19 = *(undefined4 *)(iVar5 + 0x88);
      *(undefined4 *)(iVar7 + 0x7c) = *(undefined4 *)(iVar5 + 0x7c);
      *(undefined4 *)(iVar7 + 0x80) = uVar9;
      *(undefined4 *)(iVar7 + 0x84) = uVar11;
      *(undefined4 *)(iVar7 + 0x88) = uVar19;
      uVar9 = *(undefined4 *)(iVar5 + 0x90);
      uVar11 = *(undefined4 *)(iVar5 + 0x94);
      uVar19 = *(undefined4 *)(iVar5 + 0x98);
      *(undefined4 *)(iVar7 + 0x8c) = *(undefined4 *)(iVar5 + 0x8c);
      *(undefined4 *)(iVar7 + 0x90) = uVar9;
      *(undefined4 *)(iVar7 + 0x94) = uVar11;
      *(undefined4 *)(iVar7 + 0x98) = uVar19;
      *(undefined4 *)(iVar7 + 0x9c) = *(undefined4 *)(iVar5 + 0x9c);
      *(undefined4 *)(iVar7 + 0xa0) = *(undefined4 *)(iVar5 + 0xa0);
      *(undefined4 *)(iVar7 + 0xa4) = *(undefined4 *)(iVar5 + 0xa4);
      *(undefined4 *)(iVar7 + 0xa8) = *(undefined4 *)(iVar5 + 0xa8);
      *(undefined4 *)(iVar7 + 0xac) = *(undefined4 *)(iVar5 + 0xac);
      *(undefined4 *)(iVar7 + 0xb0) = *(undefined4 *)(iVar5 + 0xb0);
      *(undefined4 *)(iVar7 + 0xb4) = *(undefined4 *)(iVar5 + 0xb4);
      *(undefined4 *)(iVar7 + 0xb8) = *(undefined4 *)(iVar5 + 0xb8);
      *(undefined4 *)(iVar7 + 0xbc) = *(undefined4 *)(iVar5 + 0xbc);
      *(undefined4 *)(iVar7 + 0xc0) = *(undefined4 *)(iVar5 + 0xc0);
      *(undefined4 *)(iVar7 + 0xc4) = *(undefined4 *)(iVar5 + 0xc4);
      *(undefined4 *)(iVar7 + 200) = *(undefined4 *)(iVar5 + 200);
      uVar8 = 0;
      *(undefined2 *)(iVar7 + 0xcc) = *(undefined2 *)(iVar5 + 0xcc);
      *(undefined2 *)(iVar7 + 0xce) = *(undefined2 *)(iVar5 + 0xce);
      *(undefined2 *)(iVar7 + 0xd0) = *(undefined2 *)(iVar5 + 0xd0);
      do {
        iVar12 = iVar5 + uVar8 * 4;
        iVar10 = iVar7 + uVar8 * 4;
        uVar8 = uVar8 + 1;
        *(undefined2 *)(iVar10 + 0xd2) = *(undefined2 *)(iVar12 + 0xd2);
        *(undefined2 *)(iVar10 + 0xd4) = *(undefined2 *)(iVar12 + 0xd4);
      } while (uVar8 < 2);
      *(undefined2 *)(iVar7 + 0xda) = *(undefined2 *)(iVar5 + 0xda);
      *(undefined2 *)(iVar7 + 0xdc) = *(undefined2 *)(iVar5 + 0xdc);
      *(undefined4 *)(iVar7 + 0xe0) = *(undefined4 *)(iVar5 + 0xe0);
      *(undefined4 *)(iVar7 + 0xe4) = *(undefined4 *)(iVar5 + 0xe4);
      *(undefined4 *)(iVar7 + 0xe8) = *(undefined4 *)(iVar5 + 0xe8);
      *(undefined4 *)(iVar7 + 0xec) = *(undefined4 *)(iVar5 + 0xec);
      *(undefined4 *)(iVar7 + 0xf0) = *(undefined4 *)(iVar5 + 0xf0);
      *(undefined2 *)(iVar7 + 0xf4) = *(undefined2 *)(iVar5 + 0xf4);
      *(undefined2 *)(iVar7 + 0xf6) = *(undefined2 *)(iVar5 + 0xf6);
      *(undefined2 *)(iVar7 + 0xf8) = *(undefined2 *)(iVar5 + 0xf8);
      *(undefined4 *)(iVar7 + 0xfc) = *(undefined4 *)(iVar5 + 0xfc);
      uVar9 = *(undefined4 *)(iVar5 + 0x104);
      *(undefined4 *)(iVar7 + 0x100) = *(undefined4 *)(iVar5 + 0x100);
      *(undefined4 *)(iVar7 + 0x104) = uVar9;
      uVar9 = *(undefined4 *)(iVar5 + 0x10c);
      uVar11 = *(undefined4 *)(iVar5 + 0x110);
      uVar19 = *(undefined4 *)(iVar5 + 0x114);
      *(undefined4 *)(iVar7 + 0x108) = *(undefined4 *)(iVar5 + 0x108);
      *(undefined4 *)(iVar7 + 0x10c) = uVar9;
      *(undefined4 *)(iVar7 + 0x110) = uVar11;
      *(undefined4 *)(iVar7 + 0x114) = uVar19;
      *(undefined4 *)(iVar7 + 0x11c) = *(undefined4 *)(iVar5 + 0x11c);
      *(undefined4 *)(iVar7 + 0x120) = *(undefined4 *)(iVar5 + 0x120);
      *(undefined4 *)(iVar7 + 0x124) = *(undefined4 *)(iVar5 + 0x124);
      *(undefined4 *)(iVar7 + 0x128) = *(undefined4 *)(iVar5 + 0x128);
      uVar8 = *(uint *)(iVar5 + 300);
      *(uint *)(iVar7 + 300) = uVar8;
      *(undefined4 *)(iVar7 + 0x130) = *(undefined4 *)(iVar5 + 0x130);
      *(undefined4 *)(iVar7 + 0x134) = *(undefined4 *)(iVar5 + 0x134);
      *(undefined4 *)(iVar7 + 0x138) = *(undefined4 *)(iVar5 + 0x138);
      *(undefined4 *)(iVar7 + 0x13c) = *(undefined4 *)(iVar5 + 0x13c);
      *(undefined4 *)(iVar7 + 0x140) = *(undefined4 *)(iVar5 + 0x140);
      *(undefined4 *)(iVar7 + 0x144) = *(undefined4 *)(iVar5 + 0x144);
      *(int *)(iVar7 + 0xac) = local_5c;
      *(int *)(iVar7 + 0x140) = local_60;
      *(int *)(iVar7 + 0x134) = iVar4;
      *(int *)(iVar7 + 0x138) = local_6c;
      *(int *)(iVar7 + 0x13c) = local_70;
      *(int *)(iVar7 + 0x148) = local_64;
      *(uint *)(iVar7 + 300) = uVar8 & 0xffffff21;
      *(int *)(iVar7 + 0x14c) = local_68;
      *(uint *)(iVar7 + 0x10) = *(uint *)(iVar7 + 0x10) & 0xffffc7ff;
      *(int *)(iVar7 + 0x120) = iVar7 + 0x118;
      *(int *)(iVar7 + 0x11c) = iVar7 + 0x118;
      *(undefined4 *)(iVar7 + 0xec) = 0;
      *(short **)(iVar7 + 0x144) = psVar13;
      *(int *)(iVar7 + 0xb0) = iVar20;
      uVar8 = 0;
      *(uint *)(iVar7 + 300) = *(uint *)(iVar7 + 300) & 0xffffffdf;
      *(int *)(iVar7 + 0xf0) = iVar15;
      iVar15 = *param_1;
      *(undefined2 *)(iVar7 + 0xd2) = *(undefined2 *)(iVar15 + 0xd2);
      *(undefined2 *)(iVar7 + 0xd4) = *(undefined2 *)(iVar15 + 0xd4);
      iVar15 = *param_1;
      *(undefined2 *)(iVar7 + 0xd6) = *(undefined2 *)(iVar15 + 0xd6);
      *(undefined2 *)(iVar7 + 0xd8) = *(undefined2 *)(iVar15 + 0xd8);
      *(int *)(iVar7 + 0xc) = iVar17;
      *(undefined2 *)(iVar7 + 0xf8) = *(undefined2 *)(*param_1 + 0xf8);
      *(undefined4 *)(iVar7 + 0xfc) = *(undefined4 *)(*param_1 + 0xfc);
      local_28 = param_3;
      piStack_2c = param_2;
      local_30 = param_1;
      for (iVar15 = *param_1; iVar15 != iVar14; iVar15 = *(int *)(iVar15 + 8)) {
        uVar18 = (uint)*(ushort *)(iVar15 + 0xf4);
        if (uVar18 != 0xffff) {
          uVar16 = *(ushort *)(iVar15 + 0xf6) - uVar18;
        }
        else {
          uVar16 = *(uint *)(iVar15 + 0xb0);
        }
        if (uVar18 == 0xffff) {
          uVar18 = 0;
        }
        FUN_4a001134(local_5c,*(int *)(iVar15 + 0xac) + uVar18 * 0x14);
        local_5c = local_5c + uVar16 * 0x14;
        psVar6 = *(short **)(iVar15 + 0x140);
        if (psVar6 == (short *)0x0) {
          FUN_4a000f70(local_60,uVar16 << 2);
        }
        else {
          if ((*(uint *)(iVar15 + 300) & 0x10) != 0) {
            sVar1 = psVar6[2];
            bVar21 = sVar1 == 0;
            if (bVar21) {
              sVar1 = psVar6[3];
            }
            bVar22 = bVar21 && sVar1 == 0;
            if (bVar21 && sVar1 == 0) {
              bVar22 = *psVar6 == 0x2001;
            }
            if (bVar22) {
              psVar6 = *(short **)(psVar6 + 6);
            }
            else {
              psVar6 = (short *)0x0;
            }
          }
          FUN_4a001134(local_60,psVar6 + uVar18 * 2);
        }
        local_60 = local_60 + uVar16 * 4;
        if (local_64 != 0) {
          psVar6 = *(short **)(iVar15 + 0x148);
          if ((*(uint *)(iVar15 + 300) & 0x40) != 0) {
            sVar1 = psVar6[2];
            bVar21 = sVar1 == 0;
            if (bVar21) {
              sVar1 = psVar6[3];
            }
            bVar22 = bVar21 && sVar1 == 0;
            if (bVar21 && sVar1 == 0) {
              bVar22 = *psVar6 == 0x1002;
            }
            if (bVar22) {
              psVar6 = *(short **)(psVar6 + 6);
            }
            else {
              psVar6 = (short *)0x0;
            }
          }
          FUN_4a000f84(local_64,psVar6 + uVar18 * 2);
          local_64 = local_64 + uVar16 * 4;
        }
        if (local_68 != 0) {
          psVar6 = *(short **)(iVar15 + 0x14c);
          if ((*(uint *)(iVar15 + 300) & 0x80) != 0) {
            sVar1 = psVar6[2];
            bVar21 = sVar1 == 0;
            if (bVar21) {
              sVar1 = psVar6[3];
            }
            bVar22 = bVar21 && sVar1 == 0;
            if (bVar21 && sVar1 == 0) {
              bVar22 = *psVar6 == 0x1002;
            }
            if (bVar22) {
              psVar6 = *(short **)(psVar6 + 6);
            }
            else {
              psVar6 = (short *)0x0;
            }
          }
          FUN_4a000f84(local_68,psVar6 + uVar18 * 2);
          local_68 = local_68 + uVar16 * 4;
        }
        if (*(int *)(*(int *)PTR_DAT_4a04f9d4 + 0xc) == 3) {
          local_a0 = *(undefined4 *)(iVar15 + 0x1c);
          local_9c = *(undefined4 *)(iVar15 + 0x20);
          local_98 = *(undefined4 *)(iVar15 + 0x24);
          local_94 = *(undefined4 *)(iVar15 + 0x28);
          local_90 = *(undefined4 *)(iVar15 + 0x2c);
          local_8c = *(undefined4 *)(iVar15 + 0x30);
          local_88 = *(undefined4 *)(iVar15 + 0x34);
          local_84 = *(undefined4 *)(iVar15 + 0x38);
          local_80 = *(undefined4 *)(iVar15 + 0x3c);
          uStack_7c = *(undefined4 *)(iVar15 + 0x40);
          uStack_78 = *(undefined4 *)(iVar15 + 0x44);
          uStack_74 = *(undefined4 *)(iVar15 + 0x48);
          FUN_4a0e4cdc(&local_88);
          local_34 = FUN_4a17211c(local_80,local_9c);
          uVar9 = FUN_4a17211c(local_84,local_98);
          local_38 = FUN_4a1725c0(uVar9,local_34);
          local_3c = FUN_4a17211c(local_88,local_98);
          uVar9 = FUN_4a17211c(local_80,local_a0);
          local_40 = FUN_4a1725c0(uVar9,local_3c);
          local_44 = FUN_4a17211c(local_84,local_a0);
          uVar9 = FUN_4a17211c(local_88,local_9c);
          local_8c = FUN_4a1725c0(uVar9,local_44);
          local_94 = local_38;
          local_90 = local_40;
          FUN_4a0e4cdc(&local_94);
          local_48 = FUN_4a17211c(local_8c,local_84);
          uVar9 = FUN_4a17211c(local_90,local_80);
          local_4c = FUN_4a1725c0(uVar9,local_48);
          local_50 = FUN_4a17211c(local_94,local_80);
          uVar9 = FUN_4a17211c(local_8c,local_88);
          local_54 = FUN_4a1725c0(uVar9,local_50);
          local_58 = FUN_4a17211c(local_90,local_88);
          uVar9 = FUN_4a17211c(local_94,local_84);
          local_98 = FUN_4a1725c0(uVar9,local_58);
          local_a0 = local_4c;
          local_9c = local_54;
          if (iVar4 != 0) {
            psVar6 = *(short **)(iVar15 + 0x134);
            if ((*(uint *)(iVar15 + 300) & 2) != 0) {
              sVar1 = psVar6[2];
              bVar21 = sVar1 == 0;
              if (bVar21) {
                sVar1 = psVar6[3];
              }
              bVar22 = bVar21 && sVar1 == 0;
              if (bVar21 && sVar1 == 0) {
                bVar22 = *psVar6 == 0x1802;
              }
              if (bVar22) {
                psVar6 = *(short **)(psVar6 + 6);
              }
              else {
                psVar6 = (short *)0x0;
              }
            }
            if (psVar6 == (short *)0x0) {
              FUN_4a001274(iVar4,uVar16 * 6);
            }
            else {
              if ((*(uint *)(iVar15 + 300) & 2) == 0) {
                uVar9 = *(undefined4 *)(iVar15 + 0x134);
              }
              else {
                psVar6 = *(short **)(iVar15 + 0x134);
                sVar1 = psVar6[2];
                bVar21 = sVar1 == 0;
                if (bVar21) {
                  sVar1 = psVar6[3];
                }
                bVar22 = bVar21 && sVar1 == 0;
                if (bVar21 && sVar1 == 0) {
                  bVar22 = *psVar6 == 0x1802;
                }
                if (bVar22) {
                  uVar9 = *(undefined4 *)(psVar6 + 6);
                }
                else {
                  uVar9 = 0;
                }
              }
              FUN_4a049c58(iVar4,uVar9,uVar18,uVar16,&local_a0);
            }
            iVar4 = iVar4 + uVar16 * 6;
          }
          if (local_6c != 0) {
            psVar6 = *(short **)(iVar15 + 0x138);
            if ((*(uint *)(iVar15 + 300) & 4) != 0) {
              sVar1 = psVar6[2];
              bVar21 = sVar1 == 0;
              if (bVar21) {
                sVar1 = psVar6[3];
              }
              bVar22 = bVar21 && sVar1 == 0;
              if (bVar21 && sVar1 == 0) {
                bVar22 = *psVar6 == 0x1802;
              }
              if (bVar22) {
                psVar6 = *(short **)(psVar6 + 6);
              }
              else {
                psVar6 = (short *)0x0;
              }
            }
            if (psVar6 == (short *)0x0) {
              FUN_4a001274(local_6c,uVar16 * 6);
            }
            else {
              if ((*(uint *)(iVar15 + 300) & 4) == 0) {
                uVar9 = *(undefined4 *)(iVar15 + 0x138);
              }
              else {
                psVar6 = *(short **)(iVar15 + 0x138);
                sVar1 = psVar6[2];
                bVar21 = sVar1 == 0;
                if (bVar21) {
                  sVar1 = psVar6[3];
                }
                bVar22 = bVar21 && sVar1 == 0;
                if (bVar21 && sVar1 == 0) {
                  bVar22 = *psVar6 == 0x1802;
                }
                if (bVar22) {
                  uVar9 = *(undefined4 *)(psVar6 + 6);
                }
                else {
                  uVar9 = 0;
                }
              }
              FUN_4a049c58(local_6c,uVar9,uVar18,uVar16,&local_a0);
            }
            local_6c = local_6c + uVar16 * 6;
          }
          if (local_70 != 0) {
            psVar6 = *(short **)(iVar15 + 0x13c);
            if ((*(uint *)(iVar15 + 300) & 8) != 0) {
              sVar1 = psVar6[2];
              bVar21 = sVar1 == 0;
              if (bVar21) {
                sVar1 = psVar6[3];
              }
              bVar22 = bVar21 && sVar1 == 0;
              if (bVar21 && sVar1 == 0) {
                bVar22 = *psVar6 == 0x1802;
              }
              if (bVar22) {
                psVar6 = *(short **)(psVar6 + 6);
              }
              else {
                psVar6 = (short *)0x0;
              }
            }
            if (psVar6 == (short *)0x0) {
              FUN_4a001274(local_70,uVar16 * 6);
            }
            else {
              if ((*(uint *)(iVar15 + 300) & 8) == 0) {
                uVar9 = *(undefined4 *)(iVar15 + 0x13c);
              }
              else {
                psVar6 = *(short **)(iVar15 + 0x13c);
                sVar1 = psVar6[2];
                bVar21 = sVar1 == 0;
                if (bVar21) {
                  sVar1 = psVar6[3];
                }
                bVar22 = bVar21 && sVar1 == 0;
                if (bVar21 && sVar1 == 0) {
                  bVar22 = *psVar6 == 0x1802;
                }
                if (bVar22) {
                  uVar9 = *(undefined4 *)(psVar6 + 6);
                }
                else {
                  uVar9 = 0;
                }
              }
              FUN_4a049c58(local_70,uVar9,uVar18,uVar16,&local_a0);
            }
            local_70 = local_70 + uVar16 * 6;
          }
        }
        psVar6 = *(short **)(iVar15 + 0x144);
        if ((*(uint *)(iVar15 + 300) & 0x20) != 0) {
          sVar1 = psVar6[2];
          bVar21 = sVar1 == 0;
          if (bVar21) {
            sVar1 = psVar6[3];
          }
          bVar22 = bVar21 && sVar1 == 0;
          if (bVar21 && sVar1 == 0) {
            bVar22 = *psVar6 == 0x803;
          }
          if (bVar22) {
            psVar6 = *(short **)(psVar6 + 6);
          }
          else {
            psVar6 = (short *)0x0;
          }
        }
        for (iVar20 = *(int *)(iVar15 + 0xf0); iVar20 != 0; iVar20 = iVar20 + -1) {
          *psVar13 = (*psVar6 - (short)uVar18) + (short)uVar8;
          psVar6 = psVar6 + 1;
          psVar13 = psVar13 + 1;
        }
        uVar8 = (uVar16 & 0xffff) + uVar8 & 0xfffeffff;
      }
      *(int *)(*(int *)(*local_30 + 4) + 8) = iVar7;
      *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(*local_30 + 4);
      *(int *)(iVar7 + 8) = iVar15;
      *(int *)(iVar15 + 4) = iVar7;
      *local_30 = iVar7;
      *local_28 = iVar7;
      return 1;
    }
  }
  return 0;
}



// Address: 4a04f9d8

void FUN_4a04f9d8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  char *pcVar6;
  int in_r3;
  int iStack_18;
  
  iStack_18 = in_r3;
  thunk_FUN_4a161570(DAT_4a04fa8c);
  puVar3 = (undefined4 *)FUN_4a0a3960();
  puVar1 = PTR_DAT_4a04fa94;
  *puVar3 = PTR_PTR_4a04fa90;
  *(undefined4 **)(puVar1 + 4) = puVar3;
  thunk_FUN_4a161570(DAT_4a04fa98);
  puVar3 = (undefined4 *)FUN_4a0a3960();
  *puVar3 = PTR_PTR_4a04fa9c;
  *(undefined4 **)puVar1 = puVar3;
  thunk_FUN_4a150348(DAT_4a04faa4,PTR_DAT_4a04faa0);
  puVar2 = PTR_DAT_4a04faa8;
  *PTR_DAT_4a04faa8 = 0;
  host_s3eConfigGetString_thumb(&DAT_4a04fac4,s_UserShaderEnvironment_4a04faac,puVar2);
  pvVar4 = host_glGetString_thumb(DAT_4a04fac8);
  iVar5 = FUN_4a0015c0(pvVar4,s_NVIDIA_4a04facc);
  if (iVar5 == 0) {
    iVar5 = FUN_4a0015c0(pvVar4,&DAT_4a04faf4);
    if (iVar5 == 0) {
      iVar5 = FUN_4a0015c0(pvVar4,&DAT_4a04fb20);
      if (iVar5 == 0) {
        iVar5 = FUN_4a0015c0(pvVar4,s_Mali_400_4a04fb44);
        if (iVar5 == 0) goto LAB_4a04fa66;
        pcVar6 = s__define_IW_GX_PLATFORM_MALI400_4a04fb50;
      }
      else {
        pcVar6 = s__define_IW_GX_PLATFORM_SGX_4a04fb24;
      }
    }
    else {
      pcVar6 = s__define_IW_GX_PLATFORM_SNAPDRAGO_4a04fafc;
    }
  }
  else {
    pcVar6 = s__define_IW_GX_PLATFORM_TEGRA2_4a04fad4;
  }
  FUN_4a001538(PTR_DAT_4a04faa8,pcVar6);
LAB_4a04fa66:
  iStack_18 = 0;
  host_s3eConfigGetInt_thumb(&DAT_4a04fac4,s_GL2FastFog_4a04fb74,&iStack_18);
  pcVar6 = s_FAST_FOG_4a04fb80;
  if (iStack_18 == 0) {
    pcVar6 = &DAT_4a04fb8c;
  }
  *(char **)(PTR_PTR_4a04fb90 + 0x3c) = pcVar6;
  *(undefined **)(puVar1 + 8) = PTR_FUN_4a056260_1_4a04fb94;
  return;
}



// Address: 4a04fb98

void FUN_4a04fb98(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  uint local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  int iStack_1c;
  undefined4 local_18;
  
  puVar7 = PTR_DAT_4a04ff1c;
  piVar4 = *(int **)PTR_DAT_4a04ff18;
  local_34 = piVar4[0xb2];
  local_38 = piVar4[0xb3];
  local_40 = piVar4[0xd4];
  iVar8 = piVar4[0xb7];
  iStack_1c = param_1;
  local_18 = param_2;
  if (*piVar4 << 0x17 < 0) {
    iVar9 = *(int *)PTR_DAT_4a04ff18;
    if (*(int *)(param_1 + 0x10) < 0) {
      local_48._4_4_ = thunk_FUN_4a171fac(*(undefined4 *)(param_1 + 0x108));
      local_28 = local_48._4_4_;
      uVar1 = thunk_FUN_4a171fac(*(undefined4 *)(param_1 + 0x110));
      local_48._0_4_ = thunk_FUN_4a171a94(local_28,uVar1);
      iVar8 = *(int *)(param_1 + 0x10c);
      local_4c = thunk_FUN_4a171fac(-(*(int *)(param_1 + 0x114) + iVar8));
      local_50 = thunk_FUN_4a171fac(-iVar8);
      uVar5 = *(uint *)(iVar9 + 0x32c);
      iVar8 = piVar4[0xb4];
      uVar10 = (int)uVar5 >> 0xc;
      uVar6 = uVar10;
      if ((uVar5 & 0xfff) != 0) {
        iVar8 = iVar8 << 0xc;
        uVar6 = uVar5;
      }
      thunk_FUN_4a0015f0(iVar8,uVar6);
      local_54 = thunk_FUN_4a171fac();
      iVar8 = piVar4[0xb5];
      if ((uVar5 & 0xfff) != 0) {
        iVar8 = iVar8 << 0xc;
        uVar10 = uVar5;
      }
      thunk_FUN_4a0015f0(iVar8,uVar10);
      local_58 = thunk_FUN_4a171fac();
      uVar1 = thunk_FUN_4a1725c0((undefined4)local_48,local_48._4_4_);
      uVar2 = thunk_FUN_4a171bb8(0x40000000,uVar1);
      puVar7 = PTR_DAT_4a04ff1c;
      *(undefined4 *)(PTR_DAT_4a04ff1c + 0xc) = 0;
      *(undefined4 *)(puVar7 + 0x18) = 0;
      *(undefined4 *)puVar7 = uVar2;
      local_2c = uVar1;
      uVar10 = thunk_FUN_4a171a94((undefined4)local_48,local_48._4_4_);
      uVar1 = thunk_FUN_4a171bb8(uVar10 ^ 0x80000000,local_2c);
      *(undefined4 *)(puVar7 + 4) = 0;
      *(undefined4 *)(puVar7 + 0x24) = uVar1;
      local_30 = thunk_FUN_4a1725c0(local_50,local_4c);
      uVar1 = thunk_FUN_4a171bb8(0x40000000,local_30);
      *(undefined4 *)(puVar7 + 0x1c) = 0;
      *(undefined4 *)(puVar7 + 0x10) = uVar1;
      uVar10 = thunk_FUN_4a171a94(local_50,local_4c);
      uVar1 = thunk_FUN_4a171bb8(uVar10 ^ 0x80000000,local_30);
      *(undefined4 *)(puVar7 + 8) = 0;
      *(undefined4 *)(puVar7 + 0x14) = 0;
      *(undefined4 *)(puVar7 + 0x28) = uVar1;
      uVar1 = thunk_FUN_4a1725c0(local_58,local_54);
      uVar2 = thunk_FUN_4a171bb8(0xc0000000,uVar1);
      *(undefined4 *)(puVar7 + 0x20) = uVar2;
      uVar10 = thunk_FUN_4a171a94(local_58,local_54);
      uVar1 = thunk_FUN_4a171bb8(uVar10 ^ 0x80000000,uVar1);
    }
    else {
      uVar11 = thunk_FUN_4a1652e0(piVar4[0xd3] << 0xf,(uint)piVar4[0xd3] >> 0x11,local_34);
      local_3c = thunk_FUN_4a00080c((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),iVar8,0);
      uVar11 = thunk_FUN_4a1652e0(local_40 << 0xf,local_40 >> 0x11,local_34);
      local_40 = thunk_FUN_4a00080c((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),iVar8,0);
      uVar10 = *(uint *)(iVar9 + 0x32c);
      iVar8 = piVar4[0xb4];
      if ((uVar10 & 0xfff) == 0) {
        uVar10 = (int)uVar10 >> 0xc;
      }
      else {
        iVar8 = iVar8 << 0xc;
      }
      iVar8 = thunk_FUN_4a0015f0(iVar8,uVar10);
      iVar9 = local_38 << 0x10;
      uVar1 = thunk_FUN_4a172098(local_34 << 0x10);
      local_48._4_4_ = thunk_FUN_4a17295c(uVar1,0xfffffff0);
      uVar1 = thunk_FUN_4a171fac(iVar8 << 0x10);
      local_48._0_4_ = thunk_FUN_4a17295c(uVar1,0xfffffff0);
      uVar1 = thunk_FUN_4a172098(iVar9);
      local_4c = thunk_FUN_4a17295c(uVar1,0xfffffff0);
      uVar1 = thunk_FUN_4a172098(local_3c);
      uVar1 = thunk_FUN_4a17295c(uVar1,0xfffffff0);
      uVar2 = thunk_FUN_4a172098(local_40);
      uVar2 = thunk_FUN_4a17295c(uVar2,0xfffffff0);
      uVar1 = thunk_FUN_4a171bb8(local_48._4_4_,uVar1);
      puVar7 = PTR_DAT_4a04ff1c;
      *(undefined4 *)(PTR_DAT_4a04ff1c + 0xc) = 0;
      *(undefined4 *)(puVar7 + 0x18) = 0;
      *(undefined4 *)(puVar7 + 0x24) = 0;
      *(undefined4 *)puVar7 = uVar1;
      *(undefined4 *)(puVar7 + 4) = 0;
      uVar1 = thunk_FUN_4a171bb8(local_48._4_4_,uVar2,puVar7 + 8);
      *(undefined4 *)(puVar7 + 0x1c) = 0;
      *(undefined4 *)(puVar7 + 0x28) = 0;
      *(undefined4 *)(puVar7 + 8) = 0;
      *(undefined4 *)(puVar7 + 0x14) = 0;
      *(undefined4 *)(puVar7 + 0x10) = uVar1;
      uVar1 = thunk_FUN_4a1725c0(local_4c,(undefined4)local_48);
      uVar10 = thunk_FUN_4a171a94(local_4c,(undefined4)local_48);
      uVar2 = thunk_FUN_4a171bb8(uVar10 ^ 0x80000000,uVar1);
      *(undefined4 *)(puVar7 + 0x20) = uVar2;
      uVar2 = thunk_FUN_4a17211c(local_4c,0xc0000000);
      uVar2 = thunk_FUN_4a17211c(uVar2,(undefined4)local_48);
      uVar1 = thunk_FUN_4a171bb8(uVar2,uVar1);
      uVar1 = thunk_FUN_4a17211c(uVar1,local_18);
    }
  }
  else {
    *(undefined4 *)(PTR_DAT_4a04ff1c + 0xc) = 0;
    *(undefined4 *)(puVar7 + 0x18) = 0;
    *(undefined4 *)puVar7 = 0x3f800000;
    *(undefined4 *)(puVar7 + 4) = 0;
    *(undefined4 *)(puVar7 + 0x1c) = 0;
    *(undefined4 *)(puVar7 + 8) = 0;
    *(undefined4 *)(puVar7 + 0x14) = 0;
    *(undefined4 *)(puVar7 + 0x24) = 0;
    *(undefined4 *)(puVar7 + 0x10) = 0x3f800000;
    *(undefined4 *)(puVar7 + 0x28) = 0;
    if (*(int *)(param_1 + 0x14) == 3) {
      uVar10 = 0x100000;
      iVar8 = 0x40000;
    }
    else {
      uVar10 = piVar4[0xb4] << 10;
      iVar8 = piVar4[0xb5] << 10;
    }
    if ((*(int *)(param_1 + 0x10) < 0) && (*(int *)(param_1 + 0x14) != 3)) {
      uVar1 = thunk_FUN_4a172098(uVar10);
      uVar1 = thunk_FUN_4a17295c(uVar1,0xfffffff0);
      uVar2 = thunk_FUN_4a172098(iVar8);
      uVar2 = thunk_FUN_4a17295c(uVar2,0xfffffff0);
      local_20 = thunk_FUN_4a1725c0(uVar2,uVar1);
      uVar3 = thunk_FUN_4a171bb8(0xc0000000,local_20);
      puVar7 = PTR_DAT_4a04ff1c;
      *(undefined4 *)(PTR_DAT_4a04ff1c + 0x20) = uVar3;
      uVar10 = thunk_FUN_4a171a94(uVar2,uVar1);
      uVar1 = thunk_FUN_4a171bb8(uVar10 ^ 0x80000000,local_20);
      *(undefined4 *)(puVar7 + 0x2c) = uVar1;
      goto LAB_4a04feae;
    }
    local_48 = thunk_FUN_4a1652e0(uVar10 * 2,CARRY4(uVar10,uVar10),iVar8);
    local_48 = local_48 >> 0xc;
    local_24 = iVar8 - uVar10;
    iVar9 = local_24 >> 0x1f;
    uVar11 = thunk_FUN_4a00080c((iVar8 + uVar10) * 0x10000,iVar8 + uVar10 >> 0x10,local_24,iVar9);
    uVar1 = thunk_FUN_4a172010(-(int)uVar11,
                               -(int)((ulonglong)uVar11 >> 0x20) - (uint)((int)uVar11 != 0));
    uVar1 = thunk_FUN_4a17295c(uVar1,0xfffffff0);
    puVar7 = PTR_DAT_4a04ff1c;
    *(undefined4 *)(PTR_DAT_4a04ff1c + 0x20) = uVar1;
    uVar11 = thunk_FUN_4a00080c((int)(local_48 << 0xc),(int)((ulonglong)(local_48 << 0xc) >> 0x20),
                                local_24,iVar9);
    uVar1 = thunk_FUN_4a172010(-(int)uVar11,
                               -(int)((ulonglong)uVar11 >> 0x20) - (uint)((int)uVar11 != 0));
    uVar1 = thunk_FUN_4a17295c(uVar1,0xfffffff0);
  }
  *(undefined4 *)(puVar7 + 0x2c) = uVar1;
LAB_4a04feae:
  puVar7 = PTR_DAT_4a04ff18;
  uVar1 = thunk_FUN_4a171fac(piVar4[0xd5]);
  uVar1 = thunk_FUN_4a17211c(uVar1,DAT_4a04ff20);
  uVar1 = thunk_FUN_4a17295c(uVar1,0xffffffff);
  local_48._4_4_ = 0;
  local_48._0_4_ = 0;
  local_54 = 0;
  local_4c = 0;
  local_58 = 0;
  local_5c = 0;
  local_68 = 0;
  local_50 = 0x3f800000;
  local_70 = thunk_FUN_4a002d64(uVar1);
  local_60 = local_70;
  local_64 = thunk_FUN_4a002f08(uVar1);
  local_6c = local_64 ^ 0x80000000;
  FUN_4a0d3898(PTR_DAT_4a04ff1c,&local_70);
  if (*(int *)(*(int *)puVar7 + 4) << 0x16 < 0) {
    *(uint *)(PTR_DAT_4a04ff1c + 0x10) = *(uint *)(PTR_DAT_4a04ff1c + 0x10) ^ 0x80000000;
  }
  return;
}



// Address: 4a04ff24

void FUN_4a04ff24(void)

{
  int *piVar1;
  
  piVar1 = *(int **)PTR_DAT_4a04ff50;
  if (*piVar1 << 0x18 < 0) {
    *(undefined2 *)(piVar1 + 0xbe) = 0;
    *(undefined2 *)((int)piVar1 + 0x2fa) = 0;
    *(short *)(piVar1 + 0xbf) = (short)piVar1[0xcf];
    *(short *)((int)piVar1 + 0x2fe) = (short)piVar1[0xd0];
  }
  return;
}



// Address: 4a04ff54

void FUN_4a04ff54(uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint uStack_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  puVar3 = PTR_DAT_4a050804;
  puVar11 = *(uint **)PTR_DAT_4a050804;
  if ((*puVar11 & 0x40000000) != 0) {
    *puVar11 = *puVar11 & 0xbfffffff;
  }
  uVar4 = puVar11[1];
  if ((uVar4 & 1) == 0 || (uVar4 & 2) == 0) {
    if ((*puVar11 & 0x100) == 0 && (uVar4 & 0x10) == 0) {
      thunk_FUN_4a0cff80(puVar11 + 0x28,puVar11 + 4);
      puVar11[0x32] = (int)puVar11[0x32] >> (param_1 & 0xff);
      puVar11[0x33] = (int)puVar11[0x33] >> (param_1 & 0xff);
      puVar11[0x31] = ((int)puVar11[0x31] >> (param_1 & 0xff)) - puVar11[0x19];
      puVar11[0x32] = puVar11[0x32] - puVar11[0x1a];
      puVar11[0x33] = puVar11[0x33] - puVar11[0x1b];
      local_80 = puVar11[0x10];
      uStack_74 = puVar11[0x11];
      uStack_68 = puVar11[0x12];
      uStack_7c = puVar11[0x13];
      uStack_70 = puVar11[0x14];
      uStack_64 = puVar11[0x15];
      uStack_78 = puVar11[0x16];
      uStack_6c = puVar11[0x17];
      uStack_60 = puVar11[0x18];
      uStack_5c = 0;
      local_58 = 0;
      uStack_54 = 0;
      FUN_4a13efe8(&local_50,puVar11 + 0x28,&local_80);
      thunk_FUN_4a0cff80(puVar11 + 0x28,&local_50);
      FUN_4a04159c(puVar11 + 0x28,puVar11 + 0x40);
    }
    else {
      local_50 = puVar11[4];
      local_4c = puVar11[5];
      local_48 = puVar11[6];
      local_44 = puVar11[7];
      uStack_40 = puVar11[8];
      local_3c = puVar11[9];
      local_38 = puVar11[10];
      local_34 = puVar11[0xb];
      local_30 = puVar11[0xc];
      local_2c = puVar11[0xd] - (puVar11[0x19] << (param_1 & 0xff));
      puVar7 = puVar11 + 0x10;
      local_28 = puVar11[0xe] - (puVar11[0x1a] << (param_1 & 0xff));
      local_24 = puVar11[0xf] - (puVar11[0x1b] << (param_1 & 0xff));
      lVar1 = (longlong)(int)puVar11[0x12] * (longlong)(int)local_48 +
              (longlong)(int)*puVar7 * (longlong)(int)local_50 +
              (longlong)(int)local_4c * (longlong)(int)puVar11[0x11];
      puVar5 = puVar11 + 0x9a;
      uVar4 = FUN_4a0008b0((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),2);
      *puVar5 = uVar4;
      lVar1 = (longlong)(int)puVar11[0x15] * (longlong)(int)local_48 +
              (longlong)(int)puVar11[0x13] * (longlong)(int)local_50 +
              (longlong)(int)local_4c * (longlong)(int)puVar11[0x14];
      uVar4 = FUN_4a0008b0((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),2);
      puVar11[0x9b] = uVar4;
      lVar1 = (longlong)(int)puVar11[0x18] * (longlong)(int)local_48 +
              (longlong)(int)puVar11[0x16] * (longlong)(int)local_50 +
              (longlong)(int)local_4c * (longlong)(int)puVar11[0x17];
      uVar4 = FUN_4a0008b0((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),2);
      puVar11[0x9c] = uVar4;
      lVar1 = (longlong)(int)puVar11[0x12] * (longlong)(int)local_3c +
              (longlong)(int)*puVar7 * (longlong)(int)local_44 +
              (longlong)(int)uStack_40 * (longlong)(int)puVar11[0x11];
      uVar4 = FUN_4a0008b0((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),2);
      puVar11[0x9d] = uVar4;
      lVar1 = (longlong)(int)puVar11[0x15] * (longlong)(int)local_3c +
              (longlong)(int)puVar11[0x13] * (longlong)(int)local_44 +
              (longlong)(int)uStack_40 * (longlong)(int)puVar11[0x14];
      uVar4 = FUN_4a0008b0((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),2);
      puVar11[0x9e] = uVar4;
      lVar1 = (longlong)(int)puVar11[0x18] * (longlong)(int)local_3c +
              (longlong)(int)puVar11[0x16] * (longlong)(int)local_44 +
              (longlong)(int)uStack_40 * (longlong)(int)puVar11[0x17];
      uVar4 = FUN_4a0008b0((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),2);
      puVar11[0x9f] = uVar4;
      lVar1 = (longlong)(int)puVar11[0x12] * (longlong)(int)local_30 +
              (longlong)(int)*puVar7 * (longlong)(int)local_38 +
              (longlong)(int)local_34 * (longlong)(int)puVar11[0x11];
      uVar4 = FUN_4a0008b0((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),2);
      puVar11[0xa0] = uVar4;
      lVar1 = (longlong)(int)puVar11[0x15] * (longlong)(int)local_30 +
              (longlong)(int)puVar11[0x13] * (longlong)(int)local_38 +
              (longlong)(int)local_34 * (longlong)(int)puVar11[0x14];
      uVar4 = FUN_4a0008b0((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),2);
      puVar11[0xa1] = uVar4;
      lVar1 = (longlong)(int)puVar11[0x18] * (longlong)(int)local_30 +
              (longlong)(int)puVar11[0x16] * (longlong)(int)local_38 +
              (longlong)(int)local_34 * (longlong)(int)puVar11[0x17];
      uVar4 = FUN_4a0008b0((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),2);
      puVar11[0xa2] = uVar4;
      lVar1 = (longlong)(int)puVar11[0x12] * (longlong)local_24 +
              (longlong)(int)*puVar7 * (longlong)local_2c +
              (longlong)local_28 * (longlong)(int)puVar11[0x11];
      uVar4 = FUN_4a0008b0((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),param_1 + 4);
      puVar11[0xa3] = uVar4;
      lVar1 = (longlong)(int)puVar11[0x15] * (longlong)local_24 +
              (longlong)(int)puVar11[0x13] * (longlong)local_2c +
              (longlong)local_28 * (longlong)(int)puVar11[0x14];
      uVar4 = FUN_4a0008b0((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),param_1 + 4);
      puVar11[0xa4] = uVar4;
      lVar1 = (longlong)(int)puVar11[0x18] * (longlong)local_24 +
              (longlong)(int)puVar11[0x16] * (longlong)local_2c +
              (longlong)local_28 * (longlong)(int)puVar11[0x17];
      uVar4 = FUN_4a0008b0((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),param_1 + 4);
      puVar11[0xa5] = uVar4;
      puVar7 = puVar11 + 0x28;
      puVar11[0x28] = (int)*puVar5 >> 10;
      iVar8 = 2;
      do {
        iVar8 = iVar8 + -1;
        puVar7[1] = (int)puVar5[1] >> 10;
        puVar7[2] = (int)puVar5[2] >> 10;
        puVar7[3] = (int)puVar5[3] >> 10;
        puVar5 = puVar5 + 4;
        puVar7 = puVar7 + 4;
        *puVar7 = (int)*puVar5 >> 10;
      } while (iVar8 != 0);
      puVar11[0x31] = (int)puVar11[0xa3] >> 8;
      puVar11[0x32] = (int)puVar11[0xa4] >> 8;
      puVar11[0x33] = (int)puVar11[0xa5] >> 8;
      puVar5 = puVar11 + 0xa6;
      if ((**(uint **)puVar3 & 0x80000000) == 0) {
        lVar1 = (longlong)(int)puVar11[0x9a] * (longlong)(int)puVar11[0xcc];
        uVar4 = FUN_4a0008b0((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),6);
        *puVar5 = uVar4;
        uVar4 = FUN_4a0008b0((int)((longlong)(int)puVar11[0x9d] * (longlong)(int)puVar11[0xcc]),
                             (int)((ulonglong)
                                   ((longlong)(int)puVar11[0x9d] * (longlong)(int)puVar11[0xcc]) >>
                                  0x20),6);
        puVar11[0xa9] = uVar4;
        uVar4 = FUN_4a0008b0((int)((longlong)(int)puVar11[0xa0] * (longlong)(int)puVar11[0xcc]),
                             (int)((ulonglong)
                                   ((longlong)(int)puVar11[0xa0] * (longlong)(int)puVar11[0xcc]) >>
                                  0x20),6);
        puVar11[0xac] = uVar4;
        uVar4 = FUN_4a0008b0((int)((longlong)(int)puVar11[0x9b] * (longlong)(int)puVar11[0xcd]),
                             (int)((ulonglong)
                                   ((longlong)(int)puVar11[0x9b] * (longlong)(int)puVar11[0xcd]) >>
                                  0x20),6);
        puVar11[0xa7] = uVar4;
        uVar4 = FUN_4a0008b0((int)((longlong)(int)puVar11[0x9e] * (longlong)(int)puVar11[0xcd]),
                             (int)((ulonglong)
                                   ((longlong)(int)puVar11[0x9e] * (longlong)(int)puVar11[0xcd]) >>
                                  0x20),6);
        puVar11[0xaa] = uVar4;
        uVar4 = FUN_4a0008b0((int)((longlong)(int)puVar11[0xa1] * (longlong)(int)puVar11[0xcd]),
                             (int)((ulonglong)
                                   ((longlong)(int)puVar11[0xa1] * (longlong)(int)puVar11[0xcd]) >>
                                  0x20),6);
        puVar11[0xad] = uVar4;
        uVar4 = FUN_4a0008b0((int)((longlong)(int)puVar11[0x9c] * (longlong)(int)puVar11[0xcb]),
                             (int)((ulonglong)
                                   ((longlong)(int)puVar11[0x9c] * (longlong)(int)puVar11[0xcb]) >>
                                  0x20),6);
        puVar11[0xa8] = uVar4;
        uVar4 = FUN_4a0008b0((int)((longlong)(int)puVar11[0x9f] * (longlong)(int)puVar11[0xcb]),
                             (int)((ulonglong)
                                   ((longlong)(int)puVar11[0x9f] * (longlong)(int)puVar11[0xcb]) >>
                                  0x20),6);
        puVar11[0xab] = uVar4;
        uVar4 = FUN_4a0008b0((int)((longlong)(int)puVar11[0xa2] * (longlong)(int)puVar11[0xcb]),
                             (int)((ulonglong)
                                   ((longlong)(int)puVar11[0xa2] * (longlong)(int)puVar11[0xcb]) >>
                                  0x20),6);
        puVar11[0xae] = uVar4;
        uVar4 = FUN_4a0008b0((int)((longlong)(int)puVar11[0xa3] * (longlong)(int)puVar11[0xcc]),
                             (int)((ulonglong)
                                   ((longlong)(int)puVar11[0xa3] * (longlong)(int)puVar11[0xcc]) >>
                                  0x20),6);
        puVar11[0xaf] = uVar4;
        uVar4 = FUN_4a0008b0((int)((longlong)(int)puVar11[0xa4] * (longlong)(int)puVar11[0xcd]),
                             (int)((ulonglong)
                                   ((longlong)(int)puVar11[0xa4] * (longlong)(int)puVar11[0xcd]) >>
                                  0x20),6);
        puVar11[0xb0] = uVar4;
        uVar4 = FUN_4a0008b0((int)((longlong)(int)puVar11[0xa5] * (longlong)(int)puVar11[0xcb]),
                             (int)((ulonglong)
                                   ((longlong)(int)puVar11[0xa5] * (longlong)(int)puVar11[0xcb]) >>
                                  0x20),6);
        puVar11[0xb1] = uVar4;
      }
      else {
        uVar4 = puVar11[0xc2];
        if ((uVar4 & 0xfff) == 0) {
          uVar4 = (int)uVar4 >> 0xc;
          uVar6 = 0x2000;
        }
        else {
          uVar6 = 0x2000000;
        }
        iVar8 = FUN_4a0015f0(uVar6,uVar4);
        uVar4 = puVar11[0xc3];
        if ((uVar4 & 0xfff) == 0) {
          uVar4 = (int)uVar4 >> 0xc;
          uVar6 = 0x2000;
        }
        else {
          uVar6 = 0x2000000;
        }
        iVar9 = FUN_4a0015f0(uVar6,uVar4);
        lVar1 = (longlong)(int)puVar11[0x9a] * (longlong)iVar8;
        *puVar5 = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
        puVar11[0xa9] =
             (uint)((longlong)(int)puVar11[0x9d] * (longlong)iVar8) >> 0xc |
             (int)((ulonglong)((longlong)(int)puVar11[0x9d] * (longlong)iVar8) >> 0x20) << 0x14;
        puVar11[0xac] =
             (uint)((longlong)(int)puVar11[0xa0] * (longlong)iVar8) >> 0xc |
             (int)((ulonglong)((longlong)(int)puVar11[0xa0] * (longlong)iVar8) >> 0x20) << 0x14;
        puVar11[0xa7] =
             (uint)((longlong)(int)puVar11[0x9b] * (longlong)iVar9) >> 0xc |
             (int)((ulonglong)((longlong)(int)puVar11[0x9b] * (longlong)iVar9) >> 0x20) << 0x14;
        puVar11[0xaa] =
             (uint)((longlong)(int)puVar11[0x9e] * (longlong)iVar9) >> 0xc |
             (int)((ulonglong)((longlong)(int)puVar11[0x9e] * (longlong)iVar9) >> 0x20) << 0x14;
        puVar11[0xad] =
             (uint)((longlong)(int)puVar11[0xa1] * (longlong)iVar9) >> 0xc |
             (int)((ulonglong)((longlong)(int)puVar11[0xa1] * (longlong)iVar9) >> 0x20) << 0x14;
        uVar4 = FUN_4a0008b0((int)((longlong)(int)puVar11[0x9c] * (longlong)(int)puVar11[0xcb]),
                             (int)((ulonglong)
                                   ((longlong)(int)puVar11[0x9c] * (longlong)(int)puVar11[0xcb]) >>
                                  0x20),6);
        puVar11[0xa8] = uVar4;
        uVar4 = FUN_4a0008b0((int)((longlong)(int)puVar11[0x9f] * (longlong)(int)puVar11[0xcb]),
                             (int)((ulonglong)
                                   ((longlong)(int)puVar11[0x9f] * (longlong)(int)puVar11[0xcb]) >>
                                  0x20),6);
        puVar11[0xab] = uVar4;
        uVar4 = FUN_4a0008b0((int)((longlong)(int)puVar11[0xa2] * (longlong)(int)puVar11[0xcb]),
                             (int)((ulonglong)
                                   ((longlong)(int)puVar11[0xa2] * (longlong)(int)puVar11[0xcb]) >>
                                  0x20),6);
        puVar11[0xae] = uVar4;
        puVar11[0xaf] =
             (uint)((longlong)(int)puVar11[0xa3] * (longlong)iVar8) >> 0xc |
             (int)((ulonglong)((longlong)(int)puVar11[0xa3] * (longlong)iVar8) >> 0x20) << 0x14;
        puVar11[0xb0] =
             (uint)((longlong)(int)puVar11[0xa4] * (longlong)iVar9) >> 0xc |
             (int)((ulonglong)((longlong)(int)puVar11[0xa4] * (longlong)iVar9) >> 0x20) << 0x14;
        uVar4 = FUN_4a0008b0((int)((longlong)(int)puVar11[0xa5] * (longlong)(int)puVar11[0xcb]),
                             (int)((ulonglong)
                                   ((longlong)(int)puVar11[0xa5] * (longlong)(int)puVar11[0xcb]) >>
                                  0x20),6);
        puVar11[0xb1] = uVar4;
        iVar8 = FUN_4a0015f0((puVar11[0xc0] + (int)puVar11[0xc2] / 2) * 0x2000);
        puVar11[0xaf] = puVar11[0xaf] + iVar8 * -0x100;
        iVar8 = FUN_4a0015f0((puVar11[0xc1] + (int)puVar11[0xc3] / 2) * 0x2000);
        puVar11[0xb0] = puVar11[0xb0] + iVar8 * -0x100;
      }
      puVar7 = puVar11 + 0x40;
      puVar11[0x40] = (int)*puVar5 >> 10;
      iVar8 = 2;
      do {
        iVar8 = iVar8 + -1;
        puVar7[1] = (int)puVar5[1] >> 10;
        puVar7[2] = (int)puVar5[2] >> 10;
        puVar7[3] = (int)puVar5[3] >> 10;
        puVar5 = puVar5 + 4;
        puVar7 = puVar7 + 4;
        *puVar7 = (int)*puVar5 >> 10;
      } while (iVar8 != 0);
      puVar11[0x49] = (int)puVar11[0xaf] >> 8;
      puVar11[0x4a] = (int)puVar11[0xb0] >> 8;
      puVar11[0x4b] = (int)puVar11[0xb1] >> 8;
    }
    uVar4 = puVar11[1];
    if ((uVar4 & 1) == 0) {
      uVar4 = uVar4 & 0xfffffffd;
    }
    else {
      uVar4 = uVar4 | 2;
    }
    puVar11[1] = uVar4;
    return;
  }
  iVar9 = puVar11[0xd] - puVar11[0x19];
  iVar8 = puVar11[0xe] - puVar11[0x1a];
  iVar10 = puVar11[0xf] - puVar11[0x1b];
  lVar1 = (longlong)iVar10 * (longlong)(int)puVar11[0x2e] +
          (longlong)iVar9 * (longlong)(int)puVar11[0x28] +
          (longlong)(int)puVar11[0x2b] * (longlong)iVar8;
  uVar4 = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  lVar1 = (longlong)iVar10 * (longlong)(int)puVar11[0x2f] +
          (longlong)iVar9 * (longlong)(int)puVar11[0x29] +
          (longlong)(int)puVar11[0x2c] * (longlong)iVar8;
  lVar2 = (longlong)iVar10 * (longlong)(int)puVar11[0x30] +
          (longlong)iVar9 * (longlong)(int)puVar11[0x2a] +
          (longlong)(int)puVar11[0x2d] * (longlong)iVar8;
  puVar11[0x31] = uVar4;
  puVar11[0x32] = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  puVar11[0x33] = (uint)lVar2 >> 0xc | (int)((ulonglong)lVar2 >> 0x20) << 0x14;
  iVar8 = *(int *)puVar3;
  puVar11[0x49] = (int)(*(int *)(iVar8 + 0x330) * uVar4) >> 6;
  puVar11[0x4a] = (int)(*(int *)(iVar8 + 0x334) * puVar11[0x32]) >> 6;
  puVar11[0x4b] = (int)(puVar11[0x33] * *(int *)(iVar8 + 0x32c)) >> 6;
  return;
}



// Address: 4a050808

void FUN_4a050808(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 auStack_54 [64];
  
  puVar1 = PTR_DAT_4a0508f4;
  if (*PTR_DAT_4a0508f0 == '\0') {
    piVar3 = *(int **)(*(int *)PTR_DAT_4a0508f4 + 100);
    FUN_4a03c064(&DAT_4a0508f8,0);
  }
  else {
    FUN_4a03c064(auStack_54,0x40);
    uVar2 = thunk_FUN_4a161570(0xfc);
    piVar3 = (int *)FUN_4a06a454(uVar2,0);
    FUN_4a1652c8(piVar3,auStack_54,*(undefined4 *)(*piVar3 + 0x24));
    FUN_4a08d080(*(undefined4 *)puVar1,piVar3);
    *(int **)(*(int *)puVar1 + 100) = piVar3;
  }
  FUN_4a03c12c(piVar3 + 3,1,0x20,4);
  if ((*PTR_DAT_4a0508f0 != '\0') && (piVar3[3] << 0x1d < 0)) {
    iVar4 = thunk_FUN_4a161570(0x2c);
    iVar4 = FUN_4a16fd86(iVar4 + 4,0);
    *(undefined4 *)(iVar4 + 0x18) = 0;
    *(undefined4 *)(iVar4 + 0x1c) = 0;
    puVar6 = (undefined4 *)(iVar4 + -4);
    iVar5 = iVar4 + 0x18;
    *(undefined4 *)(iVar4 + 0x20) = 0;
    *(byte *)(iVar4 + 0x24) = *(byte *)(iVar4 + 0x24) & 0xfc;
    FUN_4a16e9f0(iVar5,0);
    FUN_4a16eab4(iVar5,0);
    *(undefined4 *)(iVar4 + 0x10) = 0;
    FUN_4a16ea78(iVar5,6);
    *puVar6 = 0;
    piVar3[0x36] = (int)puVar6;
    FUN_4a06ffc0(puVar6);
    *(int **)PTR_DAT_4a0508fc = piVar3;
    if ((*PTR_DAT_4a0508f0 != '\0') && (piVar3[3] << 0x1d < 0)) {
      uVar2 = FUN_4a06fd84(piVar3[0x36]);
      *(undefined4 *)piVar3[0x36] = uVar2;
      FUN_4a06fbdc(piVar3[0x36]);
      FUN_4a06a094(piVar3,1);
    }
  }
  return;
}



// Address: 4a050934

undefined4 FUN_4a050934(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_8 [2];
  
  local_8[0] = 0;
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 8);
  }
  uVar2 = FUN_4a01d924(iVar1 + param_3 * 2,param_4 << 1,2);
  FUN_4a1020c0(local_8,uVar2);
  return local_8[0];
}



// Address: 4a050970

undefined2 FUN_4a050970(int param_1,int param_2)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 8) != 0)) {
    return *(undefined2 *)(*(int *)(param_1 + 8) + param_2 * 2);
  }
  return 0;
}



// Address: 4a050994

void FUN_4a050994(undefined4 *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = PTR_DAT_4a050aa8;
  if (*(int *)(*(int *)PTR_DAT_4a050aa8 + 0x360) != 0) {
    FUN_4a0464bc(*(undefined4 *)(PTR_LAB_4a050aac + 8));
  }
  *(undefined4 *)PTR_DAT_4a050ab0 = 0;
  puVar2 = PTR_PTR_4a050ab4;
  if (param_2 != 0) {
    iVar6 = *(int *)(*(int *)puVar1 + 0x3ac) + 1;
    iVar5 = 1;
    if (iVar6 < 2) {
      return;
    }
    do {
      puVar3 = (undefined4 *)*param_1;
      if (puVar3 != (undefined4 *)&DAT_00ffffff) {
        while (((uint)puVar3 & 1) == 0) {
          puVar4 = (undefined4 *)*puVar3;
          (**(code **)(puVar2 + ((uint)puVar3[1] >> 0x19) * 4))(puVar3 + 1);
          puVar3 = puVar4;
        }
      }
      iVar5 = iVar5 + 1;
      param_1 = param_1 + 1;
    } while (iVar5 < iVar6);
    return;
  }
  iVar6 = *(int *)(*(int *)puVar1 + 0x3ac) + 1;
  iVar5 = 1;
  if (iVar6 < 2) {
    return;
  }
  do {
    puVar3 = (undefined4 *)*param_1;
    if (puVar3 != (undefined4 *)&DAT_00ffffff) {
      while (((uint)puVar3 & 1) == 0) {
        puVar4 = (undefined4 *)*puVar3;
        (**(code **)(puVar2 + ((uint)puVar3[1] >> 0x19) * 4))(puVar3 + 1);
        puVar3 = puVar4;
      }
    }
    iVar5 = iVar5 + 1;
    param_1 = param_1 + -1;
  } while (iVar5 < iVar6);
  return;
}



// Address: 4a050ab8

undefined4 FUN_4a050ab8(void)

{
  thunk_FUN_4a1652fc();
  return 0x16;
}



// Address: 4a050aec

void FUN_4a050aec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_4a050b70;
  puVar1 = PTR_FUN_4a050b6c;
  *(undefined **)(PTR_PTR_4a050b70 + 0x450) = PTR_FUN_4a050b6c;
  *(undefined **)(puVar2 + 0x50) = puVar1;
  puVar1 = PTR_FUN_4a050b74;
  *(undefined **)(puVar2 + 0x470) = PTR_FUN_4a050b74;
  *(undefined **)(puVar2 + 0x70) = puVar1;
  puVar1 = PTR_FUN_4a050b78;
  *(undefined **)(puVar2 + 0x4d0) = PTR_FUN_4a050b78;
  *(undefined **)(puVar2 + 0xd0) = puVar1;
  puVar1 = PTR_FUN_4a050b7c;
  *(undefined **)(puVar2 + 0x4f0) = PTR_FUN_4a050b7c;
  *(undefined **)(puVar2 + 0xf0) = puVar1;
  puVar1 = PTR_FUN_4a050b80;
  *(undefined **)(puVar2 + 0x550) = PTR_FUN_4a050b80;
  *(undefined **)(puVar2 + 0x150) = puVar1;
  puVar1 = PTR_FUN_4a050b84;
  *(undefined **)(puVar2 + 0x570) = PTR_FUN_4a050b84;
  *(undefined **)(puVar2 + 0x170) = puVar1;
  puVar1 = PTR_FUN_4a050b88;
  *(undefined **)(puVar2 + 0x5d0) = PTR_FUN_4a050b88;
  *(undefined **)(puVar2 + 0x1d0) = puVar1;
  puVar1 = PTR_FUN_4a050b8c;
  *(undefined **)(puVar2 + 0x5f0) = PTR_FUN_4a050b8c;
  *(undefined **)(puVar2 + 0x1f0) = puVar1;
  puVar1 = PTR_FUN_4a050b90;
  *(undefined **)(puVar2 + 0x650) = PTR_FUN_4a050b90;
  *(undefined **)(puVar2 + 0x250) = puVar1;
  puVar1 = PTR_FUN_4a050b94;
  *(undefined **)(puVar2 + 0x670) = PTR_FUN_4a050b94;
  *(undefined **)(puVar2 + 0x270) = puVar1;
  return;
}



// Address: 4a050b9c

/* WARNING: Removing unreachable block (ram,0x4a04d688) */
/* WARNING: Removing unreachable block (ram,0x4a04d678) */
/* WARNING: Removing unreachable block (ram,0x4a04d67c) */
/* WARNING: Removing unreachable block (ram,0x4a04d690) */

void FUN_4a050b9c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = *(int *)(*(int *)PTR_DAT_4a050bb8 + 0x344);
  iVar3 = *(int *)(*(int *)PTR_DAT_4a050bb8 + 0x348);
  iVar5 = 0;
  iVar7 = *(int *)PTR_DAT_4a04d784;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  if (*(int *)(iVar7 + 0x344) < iVar1) {
    iVar1 = *(int *)(iVar7 + 0x344);
  }
  iVar6 = *(int *)(iVar7 + 0x354);
  if (*(int *)(iVar7 + 0x348) < iVar3) {
    iVar3 = *(int *)(iVar7 + 0x348);
  }
  iVar4 = 0;
  if (iVar6 == 1) {
    iVar4 = *(int *)(iVar7 + 0x33c) - iVar3;
    iVar2 = iVar1;
    iVar1 = iVar3;
  }
  else {
    iVar2 = iVar3;
    if (iVar6 == 2) {
      iVar4 = *(int *)(iVar7 + 0x33c) - iVar1;
      iVar5 = *(int *)(iVar7 + 0x340) - iVar3;
    }
    else {
      iVar5 = 0;
      if (iVar6 == 3) {
        iVar5 = *(int *)(iVar7 + 0x340) - iVar1;
        iVar4 = 0;
        iVar2 = iVar1;
        iVar1 = iVar3;
      }
    }
  }
  *(int *)(iVar7 + 0x2e8) = iVar5 << 3;
  *(int *)(iVar7 + 0x2f0) = iVar4 << 3;
  *(int *)(iVar7 + 0x2ec) = (iVar5 + iVar2) * 8;
  *(int *)(iVar7 + 0x2f4) = (iVar4 + iVar1) * 8;
  *(short *)(iVar7 + 0x2f8) = (short)iVar4;
  *(short *)(iVar7 + 0x2fa) = (short)iVar5;
  *(short *)(iVar7 + 0x2fc) = (short)iVar1;
  *(short *)(iVar7 + 0x2fe) = (short)iVar2;
  return;
}



// Address: 4a050d3c

void FUN_4a050d3c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar1 = *(int *)PTR_DAT_4a03360c;
  iVar5 = iVar1 + 0x5c8;
  uVar2 = 0;
  do {
    if ((*(int *)(iVar5 + uVar2 * 8) == 1) &&
       (uVar3 = uVar2, *(int *)(uVar2 * 8 + iVar5 + 4) == param_1)) {
      for (; uVar3 < 0x13; uVar3 = uVar3 + 1) {
        puVar4 = (undefined4 *)(uVar3 * 8 + iVar5);
        *puVar4 = puVar4[2];
        puVar4[1] = puVar4[3];
      }
      uVar2 = uVar2 - 1;
      *(undefined4 *)(iVar1 + 0x660) = 0;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x14);
  return;
}



// Address: 4a050d48

void FUN_4a050d48(int param_1,int param_2,int param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = thunk_FUN_4a161570((param_1 + param_2 + param_3 + param_4) * 4);
  puVar1 = PTR_DAT_4a050e4c;
  iVar4 = *(int *)PTR_DAT_4a050e4c;
  *(int *)(iVar4 + 0x390) = iVar2;
  *(int *)(iVar4 + 0x394) = param_1;
  *(undefined4 *)(iVar4 + 0x398) = 0;
  iVar2 = iVar2 + param_1 * 4;
  *(int *)(iVar4 + 0x39c) = iVar2;
  *(int *)(iVar4 + 0x3a4) = iVar2;
  iVar2 = iVar2 + param_3 * 4;
  *(int *)(iVar4 + 0x3a0) = iVar2;
  *(int *)(iVar4 + 0x3a8) = iVar2 + param_2 * 4;
  *(int *)(iVar4 + 0x3ac) = param_2;
  *(int *)(iVar4 + 0x3b0) = param_2;
  *(int *)(iVar4 + 0x3b4) = param_3;
  *(int *)(iVar4 + 0x3b8) = param_4;
  uVar3 = thunk_FUN_4a161570(param_3 << 4);
  *(undefined4 *)(*(int *)puVar1 + 0x3c0) = uVar3;
  uVar3 = thunk_FUN_4a161570(param_4 << 4);
  iVar2 = *(int *)puVar1;
  *(undefined4 *)(iVar2 + 0x3c4) = uVar3;
  *(undefined4 *)(iVar2 + 0x398) = 0;
  *(undefined4 *)(iVar2 + 0x39c) = *(undefined4 *)(iVar2 + 0x3a8);
  *(undefined4 *)(iVar2 + 0x3ac) = *(undefined4 *)(iVar2 + 0x3b8);
  *(undefined4 *)(iVar2 + 0x3bc) = uVar3;
  FUN_4a02ca18();
  iVar2 = *(int *)puVar1;
  *(undefined4 *)(iVar2 + 0x398) = 0;
  *(undefined4 *)(iVar2 + 0x39c) = *(undefined4 *)(iVar2 + 0x3a4);
  *(undefined4 *)(iVar2 + 0x3ac) = *(undefined4 *)(iVar2 + 0x3b4);
  *(undefined4 *)(iVar2 + 0x3bc) = *(undefined4 *)(iVar2 + 0x3c0);
  FUN_4a02ca18();
  iVar2 = *(int *)puVar1;
  *(undefined4 *)(iVar2 + 0x398) = 0;
  *(undefined4 *)(iVar2 + 0x39c) = *(undefined4 *)(iVar2 + 0x3a0);
  *(undefined4 *)(iVar2 + 0x3ac) = *(undefined4 *)(iVar2 + 0x3b0);
  *(undefined4 *)(iVar2 + 0x3bc) = 0;
  FUN_4a02ca18();
  *(int *)(*(int *)puVar1 + 0x40c) = *(int *)(*(int *)puVar1 + 0x390) + param_1 * 4 + -0x1000;
  return;
}



// Address: 4a050e50

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_4a050e50(uint param_1,short *param_2,undefined2 *param_3,undefined2 *param_4)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  short sVar7;
  short *psVar8;
  ushort *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  short *psVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  short *psVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  undefined2 *puVar32;
  short sVar33;
  undefined2 *puVar34;
  uint uVar35;
  uint uVar36;
  int iVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  int iVar43;
  int iVar44;
  uint uVar45;
  undefined2 *puVar46;
  int local_d8;
  int local_d4;
  int local_d0;
  undefined4 local_cc;
  ushort local_c8;
  ushort local_c6 [63];
  int local_48;
  ushort *local_44;
  ushort *local_40;
  ushort *local_3c;
  int local_38;
  uint local_34;
  short *local_30;
  undefined2 *local_2c;
  undefined2 *local_28;
  
  local_28 = param_4;
  local_2c = param_3;
  local_30 = param_2;
  local_34 = param_1;
  uVar35 = param_1 - 1;
  local_d0 = (int)param_2[1] * (int)param_2[param_1 * 2 + -2] -
             (int)param_2[param_1 * 2 + -1] * (int)*param_2;
  if (0 < (int)uVar35) {
    iVar44 = param_1 - 1;
    psVar8 = param_2;
    psVar19 = param_2 + 3;
    psVar25 = param_2 + 1;
    do {
      param_2 = param_2 + 2;
      local_d0 = ((int)*psVar19 * (int)*psVar8 - (int)*param_2 * (int)*psVar25) + local_d0;
      iVar44 = iVar44 + -1;
      psVar8 = psVar8 + 2;
      psVar19 = psVar19 + 2;
      psVar25 = psVar25 + 2;
    } while (iVar44 != 0);
  }
  local_38 = param_1 - 2;
  if (local_d0 == 0) {
    uVar3 = *param_3;
    if (0 < (int)(param_1 - 2)) {
      iVar44 = param_1 - 2;
      puVar32 = param_4 + 1;
      puVar34 = param_3 + 2;
      puVar46 = param_4 + 2;
      do {
        param_3 = param_3 + 1;
        uVar4 = *param_3;
        uVar5 = *puVar34;
        *param_4 = uVar3;
        *puVar32 = uVar4;
        iVar44 = iVar44 + -1;
        *puVar46 = uVar5;
        param_4 = param_4 + 3;
        puVar32 = puVar32 + 3;
        puVar34 = puVar34 + 1;
        puVar46 = puVar46 + 3;
      } while (iVar44 != 0);
    }
  }
  else {
    if (local_d0 < 1) {
      local_c8 = 0;
      if (0 < (int)uVar35) {
        puVar9 = &local_c8;
        sVar7 = 0;
        for (uVar26 = uVar35 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
          sVar33 = (short)local_34 - sVar7;
          sVar7 = sVar7 + 1;
          puVar9 = puVar9 + 1;
          *puVar9 = sVar33 - 1;
        }
        for (iVar44 = (int)uVar35 >> 2; iVar44 != 0; iVar44 = iVar44 + -1) {
          sVar33 = (short)local_34 - sVar7;
          puVar9[1] = sVar33 - 1;
          puVar9[2] = sVar33 - 2;
          puVar9[3] = sVar33 - 3;
          sVar7 = sVar7 + 4;
          puVar9 = puVar9 + 4;
          *puVar9 = sVar33 - 4;
        }
      }
    }
    else if (param_1 != 0) {
      psVar8 = (short *)((int)&local_cc + 2);
      sVar7 = 0;
      for (param_1 = param_1 & 3; param_1 != 0; param_1 = param_1 - 1) {
        psVar8 = psVar8 + 1;
        *psVar8 = sVar7;
        sVar7 = sVar7 + 1;
      }
      for (uVar35 = local_34 >> 2; uVar35 != 0; uVar35 = uVar35 - 1) {
        psVar8[1] = sVar7;
        psVar8[2] = sVar7 + 1;
        psVar8[3] = sVar7 + 2;
        sVar33 = sVar7 + 3;
        sVar7 = sVar7 + 4;
        psVar8 = psVar8 + 4;
        *psVar8 = sVar33;
      }
    }
    iVar44 = 0;
    local_d8 = 0;
    local_cc = param_4;
    uVar35 = local_34;
    while (2 < (int)uVar35) {
      if ((int)uVar35 <= iVar44) {
        iVar44 = 0;
      }
      iVar43 = iVar44 + 1;
      if ((int)uVar35 <= iVar43) {
        iVar43 = 0;
      }
      local_d4 = iVar43 + 1;
      if ((int)uVar35 <= local_d4) {
        local_d4 = 0;
      }
      local_3c = &local_c8 + iVar44;
      uVar27 = (uint)local_30[(uint)*local_3c * 2];
      uVar20 = (uint)(local_30 + (uint)*local_3c * 2)[1];
      local_40 = &local_c8 + iVar43;
      uVar40 = (uint)local_30[(uint)*local_40 * 2];
      uVar42 = (uint)(local_30 + (uint)*local_40 * 2)[1];
      local_44 = &local_c8 + local_d4;
      uVar36 = (uint)local_30[(uint)*local_44 * 2];
      uVar38 = (uint)(local_30 + (uint)*local_44 * 2)[1];
      uVar21 = uVar20 - uVar42;
      iVar18 = (int)uVar21 >> 0x1f;
      uVar10 = uVar40 - uVar27;
      iVar1 = (int)uVar10 >> 0x1f;
      uVar45 = (uint)((ulonglong)uVar10 * (ulonglong)uVar20);
      uVar11 = (uint)((ulonglong)uVar21 * (ulonglong)uVar27);
      uVar12 = uVar11 + uVar45;
      uVar26 = -uVar12;
      iVar6 = -(uVar27 * iVar18 +
                ((int)uVar27 >> 0x1f) * uVar21 +
                (int)((ulonglong)uVar21 * (ulonglong)uVar27 >> 0x20) +
                uVar20 * iVar1 +
                ((int)uVar20 >> 0x1f) * uVar10 +
                (int)((ulonglong)uVar10 * (ulonglong)uVar20 >> 0x20) + (uint)CARRY4(uVar11,uVar45) +
               (uint)(uVar12 != 0));
      local_48 = (int)uVar38 >> 0x1f;
      uVar28 = (uint)((ulonglong)uVar10 * (ulonglong)uVar38);
      uVar11 = (uint)((ulonglong)uVar21 * (ulonglong)uVar36);
      uVar45 = uVar11 + uVar28;
      iVar22 = uVar36 * iVar18 +
               ((int)uVar36 >> 0x1f) * uVar21 + (int)((ulonglong)uVar21 * (ulonglong)uVar36 >> 0x20)
               + uVar38 * iVar1 +
                 local_48 * uVar10 + (int)((ulonglong)uVar10 * (ulonglong)uVar38 >> 0x20) +
               (uint)CARRY4(uVar11,uVar28) + iVar6 + (uint)CARRY4(uVar45,uVar26);
      if (iVar22 == 0 && uVar45 == uVar12) {
LAB_4a0513ec:
        if (local_d0 < 1) {
          *local_28 = local_2c[*local_40];
          local_28[1] = local_2c[*local_3c];
        }
        else {
          *local_28 = local_2c[*local_3c];
          local_28[1] = local_2c[*local_40];
        }
        puVar32 = local_28 + 2;
        local_28 = local_28 + 3;
        *puVar32 = local_2c[*local_44];
        iVar18 = (uVar35 - iVar43) + -1;
        if (0 < iVar18) {
          FUN_4a000f84(local_40,(int)local_c6 + iVar43 * 2,iVar18 * 2);
        }
        uVar35 = uVar35 - 1;
        iVar44 = iVar44 + -1;
      }
      else if ((int)-(iVar22 + (uint)(uVar45 != uVar12)) < 0 !=
               (SBORROW4(0,iVar22) != SBORROW4(-iVar22,(uint)(uVar45 != uVar12)))) {
        uVar23 = uVar42 - uVar38;
        uVar45 = uVar36 - uVar40;
        uVar29 = (uint)((ulonglong)uVar45 * (ulonglong)uVar42);
        uVar28 = (uint)((ulonglong)uVar23 * (ulonglong)uVar40);
        iVar13 = uVar28 + uVar29;
        uVar11 = -iVar13;
        uVar20 = uVar38 - uVar20;
        uVar27 = uVar27 - uVar36;
        uVar30 = (uint)((ulonglong)uVar27 * (ulonglong)uVar38);
        uVar14 = (uint)((ulonglong)uVar20 * (ulonglong)uVar36);
        iVar15 = uVar14 + uVar30;
        uVar12 = -iVar15;
        iVar22 = 1;
        iVar37 = 0;
        if (0 < (int)uVar35) {
          do {
            if (iVar37 != iVar44 && iVar37 != iVar43) {
              iVar22 = local_d4;
            }
            if ((iVar37 != iVar44 && iVar37 != iVar43) && iVar37 != iVar22) {
              uVar39 = (uint)local_30[(uint)(&local_c8)[iVar37] * 2];
              uVar41 = (uint)(local_30 + (uint)(&local_c8)[iVar37] * 2)[1];
              uVar31 = (uint)((ulonglong)uVar10 * (ulonglong)uVar41);
              iVar24 = (int)uVar41 >> 0x1f;
              uVar16 = (uint)((ulonglong)uVar21 * (ulonglong)uVar39);
              iVar2 = (int)uVar39 >> 0x1f;
              uVar17 = uVar16 + uVar31;
              iVar22 = uVar17 + uVar26;
              if ((-1 < (int)(uVar39 * iVar18 +
                              iVar2 * uVar21 + (int)((ulonglong)uVar21 * (ulonglong)uVar39 >> 0x20)
                              + uVar41 * iVar1 +
                                iVar24 * uVar10 +
                                (int)((ulonglong)uVar10 * (ulonglong)uVar41 >> 0x20) +
                              (uint)CARRY4(uVar16,uVar31) + iVar6 + (uint)CARRY4(uVar17,uVar26))) &&
                 (uVar31 = (uint)((ulonglong)uVar45 * (ulonglong)uVar41),
                 uVar16 = (uint)((ulonglong)uVar23 * (ulonglong)uVar39), uVar17 = uVar16 + uVar31,
                 iVar22 = uVar17 + uVar11,
                 -1 < (int)(((uVar39 * ((int)uVar23 >> 0x1f) +
                              iVar2 * uVar23 + (int)((ulonglong)uVar23 * (ulonglong)uVar39 >> 0x20)
                              + uVar41 * ((int)uVar45 >> 0x1f) +
                                iVar24 * uVar45 +
                                (int)((ulonglong)uVar45 * (ulonglong)uVar41 >> 0x20) +
                             (uint)CARRY4(uVar16,uVar31)) -
                            (uVar40 * ((int)uVar23 >> 0x1f) +
                             ((int)uVar40 >> 0x1f) * uVar23 +
                             (int)((ulonglong)uVar23 * (ulonglong)uVar40 >> 0x20) +
                             uVar42 * ((int)uVar45 >> 0x1f) +
                             ((int)uVar42 >> 0x1f) * uVar45 +
                             (int)((ulonglong)uVar45 * (ulonglong)uVar42 >> 0x20) +
                             (uint)CARRY4(uVar28,uVar29) + (uint)(iVar13 != 0))) +
                           (uint)CARRY4(uVar17,uVar11)))) {
                uVar31 = (uint)((ulonglong)uVar27 * (ulonglong)uVar41);
                uVar16 = (uint)((ulonglong)uVar20 * (ulonglong)uVar39);
                uVar17 = uVar16 + uVar31;
                iVar22 = uVar17 + uVar12;
                iVar24 = ((uVar39 * ((int)uVar20 >> 0x1f) +
                           iVar2 * uVar20 + (int)((ulonglong)uVar20 * (ulonglong)uVar39 >> 0x20) +
                           uVar41 * ((int)uVar27 >> 0x1f) +
                           iVar24 * uVar27 + (int)((ulonglong)uVar27 * (ulonglong)uVar41 >> 0x20) +
                          (uint)CARRY4(uVar16,uVar31)) -
                         (uVar36 * ((int)uVar20 >> 0x1f) +
                          ((int)uVar36 >> 0x1f) * uVar20 +
                          (int)((ulonglong)uVar20 * (ulonglong)uVar36 >> 0x20) +
                          uVar38 * ((int)uVar27 >> 0x1f) +
                          local_48 * uVar27 + (int)((ulonglong)uVar27 * (ulonglong)uVar38 >> 0x20) +
                          (uint)CARRY4(uVar14,uVar30) + (uint)(iVar15 != 0))) +
                         (uint)CARRY4(uVar17,uVar12);
                if ((int)-(iVar24 + (uint)(iVar22 != 0)) < 0 !=
                    (SBORROW4(0,iVar24) != SBORROW4(-iVar24,(uint)(iVar22 != 0))))
                goto LAB_4a0514bc;
              }
            }
            iVar37 = iVar37 + 1;
          } while (iVar37 < (int)uVar35);
        }
        goto LAB_4a0513ec;
      }
LAB_4a0514bc:
      if (0x1f01 < local_d8) {
        uVar3 = *local_2c;
        if (local_38 < 1) {
          return 1;
        }
        iVar44 = local_34 - 2;
        puVar32 = local_cc + 1;
        puVar34 = local_2c + 2;
        puVar46 = local_cc + 2;
        do {
          local_2c = local_2c + 1;
          uVar4 = *local_2c;
          uVar5 = *puVar34;
          *local_cc = uVar3;
          *puVar32 = uVar4;
          iVar44 = iVar44 + -1;
          *puVar46 = uVar5;
          local_cc = local_cc + 3;
          puVar32 = puVar32 + 3;
          puVar34 = puVar34 + 1;
          puVar46 = puVar46 + 3;
        } while (iVar44 != 0);
        return 1;
      }
      local_d8 = local_d8 + 1;
      iVar44 = iVar44 + 1;
    }
    if (local_d8 != local_38) {
      return 0;
    }
  }
  return 1;
}



// Address: 4a05156c

void FUN_4a05156c(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_74 [48];
  undefined1 auStack_44 [48];
  
  FUN_4a047c0c();
  iVar3 = *(int *)PTR_DAT_4a0515e0;
  iVar1 = iVar3 + 0x1c0;
  FUN_4a0d3f10();
  uVar2 = thunk_FUN_4a1725c0(*(undefined4 *)(iVar3 + 0x1e4),*(undefined4 *)(iVar3 + 0x184));
  *(undefined4 *)(iVar3 + 0x1e4) = uVar2;
  uVar2 = thunk_FUN_4a1725c0(*(undefined4 *)(iVar3 + 0x1e8),*(undefined4 *)(iVar3 + 0x188));
  *(undefined4 *)(iVar3 + 0x1e8) = uVar2;
  uVar2 = thunk_FUN_4a1725c0(*(undefined4 *)(iVar3 + 0x1ec),*(undefined4 *)(iVar3 + 0x18c));
  *(undefined4 *)(iVar3 + 0x1ec) = uVar2;
  FUN_4a13f340(auStack_74,iVar3 + 0x160);
  FUN_4a13f6c0(auStack_44,iVar1,auStack_74);
  FUN_4a0d3f10(iVar1,auStack_44);
  FUN_4a0473d4(iVar1,iVar3 + 0x220);
  return;
}



// Address: 4a0515e4

void FUN_4a0515e4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int extraout_r1;
  uint uVar2;
  
  puVar1 = PTR_DAT_4a051614;
  if (*(int *)(PTR_DAT_4a051614 + 8) != 0) {
    uVar2 = *(uint *)(PTR_DAT_4a051614 + -0x10);
    thunk_FUN_4a0066d8(*(undefined4 *)(PTR_DAT_4a051614 + -0x14),uVar2,param_3,param_4,param_4);
    if (uVar2 <= (uint)(extraout_r1 + param_1)) {
      FUN_4a1652ce();
    }
  }
  *(int *)(puVar1 + -0x14) = *(int *)(puVar1 + -0x14) + param_1;
  return;
}



// Address: 4a051618

undefined4 FUN_4a051618(void)

{
  return 1;
}



// Address: 4a05161c

void FUN_4a05161c(int param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  puVar1 = PTR_DAT_4a051694;
  iVar5 = *(int *)PTR_DAT_4a051694;
  if ((*(int *)(iVar5 + 0x470) != 0) && ((*(uint *)(param_1 + 0x10) & 0x7ffff) >> 0x10 == 1)) {
    iVar2 = *(int *)(iVar5 + 0x494);
    if (iVar2 == 0) {
      iVar2 = *(int *)(iVar5 + 0x38c);
      *(int *)(iVar5 + 0x388) = iVar2;
      *(int *)(iVar5 + 0x38c) = iVar2 + (*(int *)(iVar5 + 0x478) + 1) * 4;
    }
    *param_2 = iVar2;
    param_2 = (int *)*param_2;
    puVar3 = *(uint **)(iVar5 + 0x470);
    for (uVar4 = 0; uVar4 < *(uint *)(iVar5 + 0x478); uVar4 = uVar4 + 1) {
      uVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      *param_2 = (uVar6 & 0xffffff) + 0x80000000;
      param_2 = param_2 + 1;
    }
    if (-1 < **(int **)puVar1 << 5) {
      *(undefined4 *)(iVar5 + 0x494) = 0;
    }
  }
  return;
}



// Address: 4a051698

/* WARNING: Type propagation algorithm not settling */

void FUN_4a051698(int param_1,uint *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined *puVar4;
  ushort uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  short *psVar20;
  uint *puVar21;
  uint *puVar22;
  uint uVar23;
  byte *pbVar24;
  uint uVar25;
  int *piVar26;
  uint in_r12;
  undefined4 *puVar27;
  uint uVar28;
  uint uVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  int aiStack_c8 [5];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  uint local_a0;
  short local_9c;
  short local_9a;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  uint *local_6c;
  uint local_68;
  int local_64;
  int local_60;
  int local_5c;
  uint *local_58;
  uint *local_54;
  uint *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  puVar22 = *(uint **)PTR_DAT_4a052640;
  uVar23 = (*(uint *)(param_1 + 0x10) & 0x1c00000) >> 0x16;
  if ((uVar23 == 1 || uVar23 == 6) && (iVar9 = FUN_4a053774(), iVar9 != 0)) {
    bVar32 = true;
  }
  else {
    bVar32 = false;
  }
  uVar5 = local_90._2_2_;
  if ((*(int *)(param_1 + 0x2c) == 0) ||
     (((*(uint *)(param_1 + 0x10) & 2) == 0 && ((*(uint *)(param_1 + 0x10) & 1) != 2)))) {
    uVar23 = 0;
  }
  else {
    uVar23 = 1;
  }
  if ((*(int *)(param_1 + 0x2c) == 0) ||
     ((((*(uint *)(param_1 + 0x10) & 2) != 0 || ((*(uint *)(param_1 + 0x10) & 1) != 1)) &&
      ((**(uint **)PTR_DAT_4a052640 & 0x400) != 0 || *(int *)PTR_DAT_4a052644 != 0)))) {
    uVar16 = 0;
  }
  else {
    uVar16 = 1;
  }
  uVar10 = 0;
  if (uVar23 == 0) {
    puVar15 = *(uint **)PTR_DAT_4a052640;
    uVar19 = *puVar15;
    bVar30 = (uVar19 & 0x2000) != 0;
    if (bVar30) {
      in_r12 = puVar15[0x105];
    }
    bVar31 = in_r12 != 3;
    if (bVar30 && bVar31) {
      in_r12 = puVar22[0x117];
    }
    if (((bVar30 && bVar31) && in_r12 != 0) && (in_r12 = puVar22[0x158] & 0xffffff, in_r12 != 0)) {
      uVar10 = 4;
    }
    bVar30 = (uVar19 & 0x4000) != 0;
    if (bVar30) {
      in_r12 = puVar15[0x105];
    }
    bVar31 = in_r12 != 3;
    if (bVar30 && bVar31) {
      in_r12 = puVar22[0x117];
    }
    if (((bVar30 && bVar31) && in_r12 != 0) && ((*(uint *)(puVar22[300] + 0x28) & 0xffffff) != 0)) {
      uVar10 = uVar10 | 8;
    }
    bVar30 = (*puVar22 & 0x8000) != 0;
    if (bVar30) {
      puVar15 = (uint *)puVar15[0x105];
    }
    if ((bVar30 && puVar15 != (uint *)0x3) && ((uVar19 & 0x400) == 0)) {
      uVar10 = uVar10 | 0x10;
    }
  }
  uVar29 = puVar22[0x11c];
  uVar19 = 0;
  if (uVar29 != 0) {
    uVar19 = 0x20;
  }
  uVar11 = 0;
  if (uVar16 != 0) {
    uVar11 = 2;
  }
  uVar16 = uVar11 | (uVar23 | uVar16) ^ 1 | uVar10 | uVar19;
  if (bVar32) {
    uVar11 = puVar22[0x117];
  }
  bVar30 = uVar11 != 0;
  if (bVar32 && bVar30) {
    uVar11 = puVar22[0x118];
  }
  bVar31 = uVar11 != 0;
  if ((bVar32 && bVar30) && bVar31) {
    uVar11 = puVar22[0x119];
  }
  if (((bVar32 && bVar30) && bVar31) && uVar11 != 0) {
    if ((*(uint *)(param_1 + 0x10) & 0x1c00000) == 0x400000) {
      uVar16 = 0x40;
    }
    else {
      uVar16 = 0x80;
    }
  }
  uVar10 = *puVar22;
  if (((uVar29 != 0) && (((uVar10 & 0x400) == 0 || (uVar16 & 2) == 0) && (uVar16 & 0xffffffdc) == 0)
      ) && ((*(uint *)(param_1 + 0x10) & 0x70000) != 0x10000)) {
    uVar19 = **(uint **)PTR_DAT_4a052640;
    bVar32 = (uVar19 & 0x800) != 0;
    if (bVar32) {
      uVar10 = puVar22[0x148];
    }
    if (!bVar32 || uVar10 == 0) {
      bVar32 = (uVar19 & 0x1000) != 0;
      if (bVar32) {
        uVar19 = puVar22[0x157];
      }
      if (!bVar32 || uVar19 == 0xffffffff) {
        if (puVar22[0x128] != 0) {
          if (puVar22[0x128] == puVar22[0x127]) {
            return;
          }
          uVar23 = 0;
          if ((short)puVar22[0x129] != 0) {
            do {
              uVar16 = (uint)*(ushort *)(puVar22[0x128] + uVar23 * 2);
              uVar23 = uVar23 + 1;
              *(undefined4 *)(puVar22[0x125] + uVar16 * 4) =
                   *(undefined4 *)
                    (uVar29 + (uint)*(ushort *)
                                     (puVar22[0x127] +
                                     uVar16 * *(byte *)((int)puVar22 + 0x4ab) * 2 +
                                     *(char *)((int)puVar22 + 0x4aa) * 2) * 4);
            } while (uVar23 < (ushort)puVar22[0x129]);
          }
          uVar23 = puVar22[0x125];
          goto LAB_4a051a7c;
        }
        uVar10 = puVar22[0x127];
        bVar32 = uVar10 == 0;
        if (bVar32) {
          uVar10 = puVar22[0x125];
        }
        if (bVar32 && uVar10 == 0) {
          return;
        }
      }
    }
  }
  uVar10 = uVar23 ^ 1;
  if ((uVar10 == 0) &&
     (((**(uint **)PTR_DAT_4a052640 & 0x400) == 0 ||
      (uVar10 = 1, (*(uint *)(param_1 + 0x10) & 0x70000) != 0x10000)))) {
    uVar10 = 0;
  }
  uVar19 = 0;
  if (uVar10 != 0) {
    if (puVar22[0x125] == 0) {
      if (puVar22[0x128] == 0) {
        uVar19 = (ushort)puVar22[0x129] - 1;
      }
      else {
        uVar10 = 0;
        if ((ushort)puVar22[0x129] != 0) {
          do {
            uVar29 = (uint)*(ushort *)(puVar22[0x128] + uVar10 * 2);
            uVar10 = uVar10 + 1;
            if (uVar19 <= uVar29) {
              uVar19 = uVar29;
            }
          } while (uVar10 < (ushort)puVar22[0x129]);
        }
      }
      uVar19 = uVar19 + 1;
      iVar9 = *(int *)PTR_DAT_4a052640;
      uVar10 = *(uint *)(iVar9 + 0x38c);
      *(uint *)(iVar9 + 0x388) = uVar10;
      *(uint *)(iVar9 + 0x38c) = uVar19 * 4 + uVar10;
      *param_2 = uVar10;
    }
    else {
      uVar19 = puVar22[0x126];
      *param_2 = puVar22[0x125];
    }
  }
  puVar4 = PTR_DAT_4a052640;
  if (uVar23 != 0) {
    if ((**(uint **)PTR_DAT_4a052640 & 0x400) == 0) {
      return;
    }
    if ((*(uint *)(param_1 + 0x10) & 0x70000) == 0x10000) {
      uVar19 = uVar19 - 1;
      puVar27 = (undefined4 *)*param_2;
      if (0x7fffffff < uVar19) {
        return;
      }
      do {
        uVar19 = uVar19 - 1;
        *puVar27 = 0x80ffffff;
        puVar27 = puVar27 + 1;
      } while (uVar19 < 0x80000000);
      return;
    }
    uVar23 = 0;
LAB_4a051a7c:
    *param_2 = uVar23;
    return;
  }
  if (uVar16 == 0x32) {
    uVar23 = *(uint *)(param_1 + 0x10);
    iVar9 = *(int *)PTR_DAT_4a052640;
    uVar10 = *param_2;
    uVar16 = 0;
    if (*(short *)(iVar9 + 0x4a4) != 0) {
      do {
        iVar17 = *(int *)(iVar9 + 0x4a0);
        if (iVar17 == 0) {
          uVar29 = uVar16 & 0xffff;
          uVar11 = uVar16 & 0xffff;
          uVar19 = uVar16;
        }
        else {
          uVar19 = (uint)*(ushort *)(iVar17 + uVar16 * 2);
          uVar29 = uVar19;
          uVar11 = uVar19;
          if (iVar17 != *(int *)(iVar9 + 0x49c)) {
            iVar17 = *(int *)(iVar9 + 0x49c) + uVar19 * *(byte *)(iVar9 + 0x4ab) * 2;
            uVar29 = (uint)*(ushort *)(iVar17 + *(char *)(iVar9 + 0x4aa) * 2);
            uVar11 = (uint)*(ushort *)(iVar17 + *(char *)(iVar9 + 0x4a8) * 2);
          }
        }
        uVar25 = 0;
        puVar15 = *(uint **)PTR_DAT_4a052640;
        iVar17 = *(int *)(iVar9 + 0x470);
        if ((*puVar15 & 0x800) != 0) {
          uVar25 = (uint)*(byte *)(iVar9 + 0x520);
        }
        pbVar24 = (byte *)(iVar9 + 0x524);
        if (iVar17 != 0) {
          pbVar24 = (byte *)(iVar17 + uVar29 * 4);
        }
        uVar28 = (uint)*pbVar24;
        if ((*puVar15 & 0x1000) != 0) {
          uVar28 = *(byte *)(iVar9 + 0x55c) * uVar28 >> 8;
        }
        uVar25 = uVar25 + uVar28;
        if (0xff < uVar25) {
          uVar25 = 0xff;
        }
        bVar32 = iVar17 != 0;
        if (bVar32) {
          uVar29 = uVar29 * 4 + 3;
        }
        if (bVar32) {
          uVar29 = (uint)*(byte *)(iVar17 + uVar29);
        }
        if (!bVar32) {
          uVar29 = 0xff;
        }
        iVar17 = *(int *)(*(int *)(iVar9 + 0x378) + uVar11 * 0x14 + 0xc);
        if ((uVar23 & 0x70000) == 0x10000) {
          uVar29 = 0x80;
        }
        iVar18 = 0x1000000;
        if ((int)puVar15[0xfe] <= iVar17) {
          if (iVar17 < (int)puVar15[0xff]) {
            iVar18 = puVar15[0x100] * (puVar15[0xff] - iVar17);
          }
          else {
            iVar18 = 0;
          }
        }
        *(uint *)(uVar10 + uVar19 * 4) =
             uVar29 * 0x1000000 + (uVar25 & 0xff) * 0x10100 + ((uVar25 & 0xff) * iVar18 >> 0x18);
        uVar16 = uVar16 + 1;
      } while (uVar16 < *(ushort *)(iVar9 + 0x4a4));
    }
    goto LAB_4a053698;
  }
  if (uVar16 < 0x33) {
    if (uVar16 == 1 || uVar16 == 2) {
      uVar19 = 0;
      uVar10 = 0;
      uVar23 = 0;
      uVar29 = 0;
      if ((**(uint **)PTR_DAT_4a052640 & 0x800) != 0) {
        uVar19 = (uint)(byte)puVar22[0x148];
        uVar10 = (uint)*(byte *)((int)puVar22 + 0x521);
        uVar23 = (uint)*(byte *)((int)puVar22 + 0x522);
        uVar29 = (uint)*(byte *)((int)puVar22 + 0x523);
      }
      uVar16 = (uVar16 & 2) >> 1;
      if ((**(uint **)PTR_DAT_4a052640 & 0x1000) == 0) {
        uVar19 = uVar19 + (byte)puVar22[0x149];
        if (uVar16 == 0) {
          uVar10 = uVar10 + *(byte *)((int)puVar22 + 0x525);
          uVar23 = uVar23 + *(byte *)((int)puVar22 + 0x526);
          uVar29 = uVar29 + *(byte *)((int)puVar22 + 0x527);
        }
      }
      else {
        uVar19 = uVar19 + ((uint)(byte)puVar22[0x157] * (uint)(byte)puVar22[0x149] >> 8);
        if (uVar16 == 0) {
          uVar10 = uVar10 + ((uint)*(byte *)((int)puVar22 + 0x525) *
                             (uint)*(byte *)((int)puVar22 + 0x55d) >> 8);
          uVar23 = uVar23 + ((uint)*(byte *)((int)puVar22 + 0x55e) *
                             (uint)*(byte *)((int)puVar22 + 0x526) >> 8);
          uVar29 = uVar29 + ((uint)*(byte *)((int)puVar22 + 0x55f) *
                             (uint)*(byte *)((int)puVar22 + 0x527) >> 8);
        }
      }
      if (0xff < uVar19) {
        uVar19 = 0xff;
      }
      uVar19 = uVar19 & 0xff;
      if (uVar16 == 0) {
        if (0xff < uVar10) {
          uVar10 = 0xff;
        }
        if (0xff < uVar23) {
          uVar23 = 0xff;
        }
        uVar10 = uVar10 & 0xff;
        if (0xff < uVar29) {
          uVar29 = 0xff;
        }
        uVar23 = uVar23 & 0xff;
        uVar29 = uVar29 & 0xff;
      }
      else {
        uVar29 = 0xff;
        uVar23 = uVar19;
        uVar10 = uVar19;
      }
      if ((*(uint *)(param_1 + 0x10) & 0x70000) == 0x10000) {
        uVar29 = 0x80;
      }
      iVar9 = uVar29 * 0x1000000 + uVar23 * 0x10000 + uVar10 * 0x100 + uVar19;
      uVar23 = 0;
      if (puVar22[0x128] == 0) {
        if ((short)puVar22[0x129] != 0) {
          do {
            *(int *)(*param_2 + uVar23 * 4) = iVar9;
            uVar23 = uVar23 + 1;
          } while (uVar23 < (ushort)puVar22[0x129]);
        }
      }
      else if ((short)puVar22[0x129] != 0) {
        do {
          iVar17 = uVar23 * 2;
          uVar23 = uVar23 + 1;
          *(int *)(*param_2 + (uint)*(ushort *)(puVar22[0x128] + iVar17) * 4) = iVar9;
        } while (uVar23 < (ushort)puVar22[0x129]);
      }
      goto LAB_4a053698;
    }
    if (uVar16 == 0x22) {
      uVar23 = *(uint *)(param_1 + 0x10);
      uVar10 = *param_2;
      iVar9 = *(int *)PTR_DAT_4a052640;
      uVar16 = 0;
      if (*(short *)(iVar9 + 0x4a4) != 0) {
        do {
          iVar17 = *(int *)(iVar9 + 0x4a0);
          if (iVar17 == 0) {
            uVar29 = uVar16 & 0xffff;
            uVar19 = uVar16;
          }
          else {
            uVar19 = (uint)*(ushort *)(iVar17 + uVar16 * 2);
            uVar29 = uVar19;
            if (iVar17 != *(int *)(iVar9 + 0x49c)) {
              uVar29 = (uint)*(ushort *)
                              (*(int *)(iVar9 + 0x49c) + uVar19 * *(byte *)(iVar9 + 0x4ab) * 2 +
                              *(char *)(iVar9 + 0x4aa) * 2);
            }
          }
          uVar11 = 0;
          uVar16 = uVar16 + 1;
          iVar17 = *(int *)(iVar9 + 0x470);
          if ((**(uint **)PTR_DAT_4a052640 & 0x800) != 0) {
            uVar11 = (uint)*(byte *)(iVar9 + 0x520);
          }
          pbVar24 = (byte *)(iVar9 + 0x524);
          if (iVar17 != 0) {
            pbVar24 = (byte *)(iVar17 + uVar29 * 4);
          }
          uVar25 = (uint)*pbVar24;
          if ((**(uint **)PTR_DAT_4a052640 & 0x1000) != 0) {
            uVar25 = *(byte *)(iVar9 + 0x55c) * uVar25 >> 8;
          }
          uVar11 = uVar11 + uVar25;
          if (0xff < uVar11) {
            uVar11 = 0xff;
          }
          if (iVar17 == 0) {
            uVar29 = 0xff;
          }
          else {
            uVar29 = (uint)*(byte *)(iVar17 + uVar29 * 4 + 3);
          }
          if ((uVar23 & 0x70000) == 0x10000) {
            uVar29 = 0x80;
          }
          *(uint *)(uVar10 + uVar19 * 4) = uVar29 * 0x1000000 + (uVar11 & 0xff) * 0x10101;
        } while (uVar16 < *(ushort *)(iVar9 + 0x4a4));
      }
      goto LAB_4a053698;
    }
  }
  else {
    if (uVar16 == 0x40) {
      uVar23 = *param_2;
      puVar15 = *(uint **)PTR_DAT_4a052640;
      local_74 = 0;
      local_70 = (uint)local_70._2_2_ << 0x10;
      local_7c = 0;
      local_78 = (uint)local_78._2_2_ << 0x10;
      if (puVar15[0x105] == 0) {
        local_80._0_2_ = -(short)puVar15[0x15b];
        local_74 = CONCAT22(-*(short *)((int)puVar15 + 0x56a),-(short)puVar15[0x15a]);
      }
      else if ((*puVar15 & 0x40000000) == 0) {
        iVar9 = (int)(short)-(short)puVar15[0x15a];
        iVar17 = (int)-*(short *)((int)puVar15 + 0x56a);
        iVar18 = (int)(short)-(short)puVar15[0x15b];
        local_80._0_2_ =
             (short)((int)(puVar15[0xc] * iVar18 + puVar15[0xb] * iVar17 + puVar15[10] * iVar9) >>
                    0xc);
        local_74 = CONCAT22((short)((int)(puVar15[9] * iVar18 +
                                         puVar15[8] * iVar17 + iVar9 * puVar15[7]) >> 0xc),
                            (short)((int)(puVar15[6] * iVar18 +
                                         puVar15[5] * iVar17 + iVar9 * puVar15[4]) >> 0xc));
      }
      else {
        local_94 = CONCAT22(-*(short *)((int)puVar15 + 0x56a),-(short)puVar15[0x15a]);
        local_90 = CONCAT22(local_90._2_2_,-(short)puVar15[0x15b]);
        local_8c = local_94;
        local_88 = (int *)local_90;
        FUN_4a13f4e0(&local_84,puVar15 + 0x4c,&local_8c);
        local_74 = local_84;
      }
      uVar16 = 0;
      if ((short)puVar15[0x129] != 0) {
        do {
          uVar10 = puVar15[0x128];
          if (uVar10 == 0) {
            uVar29 = uVar16 & 0xffff;
            uVar11 = uVar16 & 0xffff;
            uVar19 = uVar16;
          }
          else {
            uVar19 = (uint)*(ushort *)(uVar10 + uVar16 * 2);
            uVar29 = uVar19;
            uVar11 = uVar19;
            if (uVar10 != puVar15[0x127]) {
              iVar9 = puVar15[0x127] + uVar19 * *(byte *)((int)puVar15 + 0x4ab) * 2;
              uVar29 = (uint)*(ushort *)(iVar9 + *(char *)((int)puVar15 + 0x4a9) * 2);
              uVar11 = (uint)*(ushort *)(iVar9 + *(char *)((int)puVar15 + 0x4aa) * 2);
            }
          }
          local_84._0_2_ = (short)local_74;
          local_84._2_2_ = (short)(local_74 >> 0x10);
          if (puVar15[0x11f] == 0) {
            psVar20 = (short *)(puVar15[0x117] + uVar29 * 6);
            iVar9 = (int)(short)local_80 * (int)psVar20[2] +
                    (int)psVar20[1] * (int)local_84._2_2_ + (int)*psVar20 * (int)(short)local_84 >>
                    0xc;
          }
          else {
            iVar9 = (int)*(short *)(puVar15[0x11f] + uVar29 * 2);
          }
          uVar10 = puVar15[0x11c];
          if (uVar10 != 0) {
            uVar11 = (uint)*(byte *)(uVar10 + uVar11 * 4);
          }
          if (uVar10 == 0) {
            uVar11 = (uint)(byte)puVar15[0x14a];
          }
          if (puVar15[0x121] == 0) {
            psVar20 = (short *)(puVar15[0x118] + uVar29 * 6);
            iVar17 = (int)(short)local_80 * (int)psVar20[2] +
                     (int)local_84._2_2_ * (int)psVar20[1] + (int)*psVar20 * (int)(short)local_84 >>
                     0xc;
          }
          else {
            iVar17 = (int)*(short *)(puVar15[0x121] + uVar29 * 2);
          }
          if (puVar15[0x123] == 0) {
            psVar20 = (short *)(puVar15[0x119] + uVar29 * 6);
            iVar18 = (int)(short)local_80 * (int)psVar20[2] +
                     (int)local_84._2_2_ * (int)psVar20[1] + (int)*psVar20 * (int)(short)local_84 >>
                     0xc;
          }
          else {
            iVar18 = (int)*(short *)(puVar15[0x123] + uVar29 * 2);
          }
          uVar10 = (uint)(byte)puVar15[0x149];
          if ((**(uint **)PTR_DAT_4a052640 & 0x1000) != 0) {
            uVar10 = uVar10 * (byte)puVar15[0x157] >> 8;
          }
          iVar17 = ((int)(uVar11 * iVar17) >> 0xd) + 0x80;
          iVar18 = ((int)(uVar11 * iVar18) >> 0xd) + 0x80;
          iVar9 = ((int)(iVar9 * uVar11) >> 0xd) + 0x80 + uVar10;
          if (iVar17 < 0xff) {
            if (iVar17 < 0) {
              iVar17 = 0;
            }
          }
          else {
            iVar17 = 0xff;
          }
          if (iVar18 < 0xff) {
            if (iVar18 < 0) {
              iVar18 = 0;
            }
          }
          else {
            iVar18 = 0xff;
          }
          if (iVar9 < 0xff) {
            if (iVar9 < 0) {
              iVar9 = 0;
            }
          }
          else {
            iVar9 = 0xff;
          }
          uVar16 = uVar16 + 1;
          uVar10 = (uint)*(byte *)((int)puVar15 + 0x527);
          if ((*puVar15 & 0x1000) != 0) {
            uVar10 = *(byte *)((int)puVar15 + 0x55f) * uVar10 >> 8;
          }
          *(uint *)(uVar23 + uVar19 * 4) =
               iVar17 + uVar10 * 0x1000000 + iVar9 * 0x10000 + iVar18 * 0x100;
        } while (uVar16 < (ushort)puVar15[0x129]);
      }
      goto LAB_4a053698;
    }
    if (uVar16 == 0x80) {
      local_70 = *param_2;
      puVar15 = *(uint **)PTR_DAT_4a052640;
      local_78 = 0;
      local_74._0_2_ = 0;
      local_80 = 0;
      local_7c._0_2_ = 0;
      if (puVar15[0x105] == 0) {
        local_8c = CONCAT22(local_8c._2_2_,-(short)puVar15[0x15b]);
        local_84 = local_8c;
        local_78 = CONCAT22(-*(short *)((int)puVar15 + 0x56a),-(short)puVar15[0x15a]);
        local_74 = CONCAT22(local_74._2_2_,-(short)puVar15[0x15b]);
      }
      else if ((*puVar15 & 0x40000000) == 0) {
        iVar9 = (int)(short)-(short)puVar15[0x15a];
        iVar17 = (int)-*(short *)((int)puVar15 + 0x56a);
        iVar18 = (int)(short)-(short)puVar15[0x15b];
        uVar1 = (undefined2)
                ((int)(puVar15[0xc] * iVar18 + puVar15[0xb] * iVar17 + puVar15[10] * iVar9) >> 0xc);
        local_94 = CONCAT22(local_94._2_2_,uVar1);
        local_84 = CONCAT22(local_84._2_2_,uVar1);
        local_78 = CONCAT22((short)((int)(puVar15[9] * iVar18 +
                                         puVar15[8] * iVar17 + iVar9 * puVar15[7]) >> 0xc),
                            (short)((int)(puVar15[6] * iVar18 +
                                         puVar15[5] * iVar17 + iVar9 * puVar15[4]) >> 0xc));
        local_74 = CONCAT22(local_74._2_2_,uVar1);
      }
      else {
        local_98 = CONCAT22(-*(short *)((int)puVar15 + 0x56a),-(short)puVar15[0x15a]);
        local_94 = CONCAT22(local_94._2_2_,-(short)puVar15[0x15b]);
        local_90 = local_98;
        local_8c = local_94;
        FUN_4a13f4e0(&local_88,puVar15 + 0x4c,&local_90);
        local_78 = (uint)local_88;
        local_74 = CONCAT22(local_74._2_2_,(short)local_84);
      }
      puVar21 = *(uint **)puVar4;
      if ((*puVar21 & 0x40000000) == 0) {
        sVar6 = -(short)puVar15[0x15a];
        local_98 = CONCAT22(-*(short *)((int)puVar15 + 0x56a),sVar6);
        local_90 = local_98;
        local_8c._0_2_ = -(short)puVar15[0x15b];
        local_8c._2_2_ = local_94._2_2_;
        iVar9 = (int)sVar6;
        iVar17 = (int)-*(short *)((int)puVar15 + 0x56a);
        iVar18 = (int)(short)-(short)puVar15[0x15b];
        local_80._0_2_ =
             (short)((int)(puVar15[0x22] * iVar18 + puVar15[0x1f] * iVar17 + iVar9 * puVar15[0x1c])
                    >> 0xc);
        local_88._2_2_ =
             (short)((int)(puVar15[0x23] * iVar18 + puVar15[0x20] * iVar17 + iVar9 * puVar15[0x1d])
                    >> 0xc);
        local_98 = CONCAT22(local_88._2_2_,(short)local_80);
        sVar6 = (short)((int)(puVar15[0x24] * iVar18 +
                             puVar15[0x21] * iVar17 + puVar15[0x1e] * iVar9) >> 0xc);
        local_94 = CONCAT22(local_94._2_2_,sVar6);
        local_80._2_2_ = local_88._2_2_;
        local_7c = CONCAT22(local_7c._2_2_,sVar6);
        local_84._0_2_ = sVar6;
      }
      else {
        local_94._0_2_ = -(short)puVar15[0x15b];
        local_98 = CONCAT22(-*(short *)((int)puVar15 + 0x56a),-(short)puVar15[0x15a]);
        local_90 = local_98;
        local_8c._2_2_ = local_94._2_2_;
        local_88 = (int *)local_78;
        local_8c._0_2_ = (short)local_94;
        local_2c = FUN_4a171fac((int)(short)local_94);
        uVar12 = FUN_4a17211c(local_2c,puVar15[0x6a]);
        local_30 = FUN_4a171fac((int)(short)local_90._2_2_);
        uVar13 = FUN_4a17211c(local_30,puVar15[0x67]);
        local_34 = FUN_4a171fac((int)(short)local_90);
        uVar14 = FUN_4a17211c(local_34,puVar15[100]);
        uVar13 = FUN_4a171a94(uVar14,uVar13);
        FUN_4a171a94(uVar13,uVar12);
        sVar6 = FUN_4a171e1c();
        uVar12 = FUN_4a17211c(local_2c,puVar15[0x6b]);
        uVar13 = FUN_4a17211c(local_30,puVar15[0x68]);
        uVar14 = FUN_4a17211c(local_34,puVar15[0x65]);
        uVar13 = FUN_4a171a94(uVar14,uVar13);
        FUN_4a171a94(uVar13,uVar12);
        sVar7 = FUN_4a171e1c();
        local_38 = FUN_4a17211c(local_2c,puVar15[0x6c]);
        uVar12 = FUN_4a17211c(local_30,puVar15[0x69]);
        uVar13 = FUN_4a17211c(local_34,puVar15[0x66]);
        uVar12 = FUN_4a171a94(uVar13,uVar12);
        FUN_4a171a94(uVar12,local_38);
        sVar8 = FUN_4a171e1c();
        local_98 = CONCAT22(sVar7,sVar6);
        local_94 = CONCAT22(local_94._2_2_,sVar8);
        local_80._0_2_ = sVar6;
        local_80._2_2_ = sVar7;
        local_7c = CONCAT22(local_7c._2_2_,sVar8);
        local_88._2_2_ = sVar7;
        local_84._0_2_ = sVar8;
      }
      iVar9 = ((local_7c & 0xffff) - 0x1000) * 0x10000;
      iVar17 = iVar9 >> 0x10;
      local_7c._0_2_ = (short)((uint)iVar9 >> 0x10);
      local_80._2_2_ = local_88._2_2_;
      if (puVar21[0x105] == 1) {
        if ((*puVar21 & 0x40000000) == 0) {
          iVar9 = (int)(short)local_80;
          iVar18 = (int)local_88._2_2_;
          local_80._0_2_ =
               (short)((int)(puVar15[0x2a] * iVar17 + puVar15[0x29] * iVar18 + iVar9 * puVar15[0x28]
                            ) >> 0xc);
          local_80._2_2_ =
               (short)((int)(puVar15[0x2d] * iVar17 + puVar15[0x2c] * iVar18 + iVar9 * puVar15[0x2b]
                            ) >> 0xc);
          local_90 = CONCAT22(local_80._2_2_,(short)local_80);
          local_84._0_2_ =
               (short)((int)(puVar15[0x30] * iVar17 + puVar15[0x2f] * iVar18 + puVar15[0x2e] * iVar9
                            ) >> 0xc);
          local_8c._0_2_ = (short)local_84;
          local_7c._0_2_ = (short)local_84;
          local_7c._2_2_ = local_7c._2_2_;
        }
        else {
          local_88._0_2_ = (short)local_80;
          local_80._2_2_ = local_88._2_2_;
          FUN_4a13f4e0(&local_88,puVar15 + 0x70,&local_80);
          local_80._0_2_ = (short)local_88;
          local_80._2_2_ = local_88._2_2_;
          local_7c._0_2_ = (short)local_84;
        }
      }
      sVar6 = *(short *)PTR_DAT_4a0536c0;
      bVar32 = sVar6 == (short)local_80;
      sVar7 = (short)local_80;
      if (bVar32) {
        sVar6 = *(short *)(PTR_DAT_4a0536c0 + 2);
        sVar7 = local_80._2_2_;
      }
      bVar30 = bVar32 && sVar6 == sVar7;
      if (bVar32 && sVar6 == sVar7) {
        bVar30 = *(short *)(PTR_DAT_4a0536c0 + 4) == (short)local_7c;
      }
      if (!bVar30) {
        local_88._0_2_ = (short)local_80;
        local_88._2_2_ = local_80._2_2_;
        FUN_4a0ecf24(&local_80);
      }
      uVar16 = (uint)*(byte *)(puVar15[300] + 0x2b);
      uVar23 = 0;
      if ((short)puVar15[0x129] != 0) {
        local_3c = uVar16 << 0x10;
        do {
          uVar10 = puVar15[0x128];
          if (uVar10 == 0) {
            uVar29 = uVar23 & 0xffff;
            uVar19 = uVar23;
          }
          else {
            uVar19 = (uint)*(ushort *)(uVar10 + uVar23 * 2);
            uVar29 = uVar19;
            if (uVar10 != puVar15[0x127]) {
              uVar29 = (uint)*(ushort *)
                              (puVar15[0x127] + uVar19 * *(byte *)((int)puVar15 + 0x4ab) * 2 +
                              *(char *)((int)puVar15 + 0x4a9) * 2);
            }
          }
          piVar26 = (int *)(local_70 + uVar19 * 4);
          local_88 = (int *)local_78;
          local_84 = local_74;
          psVar20 = (short *)(puVar15[0x117] + uVar29 * 6);
          puVar27 = (undefined4 *)(int)(short)local_7c;
          local_a8 = (int)puVar27 * (int)psVar20[2] +
                     (int)psVar20[1] * (int)local_80._2_2_ + (int)*psVar20 * (int)(short)local_80 >>
                     0xc;
          if ((int)local_a8 < 0) {
LAB_4a0529cc:
            local_a8 = 0;
            goto switchD_4a052900_caseD_1;
          }
          switch(uVar16) {
          case 0:
            local_a8 = 0x1000;
            break;
          case 1:
            break;
          case 2:
            iVar9 = local_a8;
            goto LAB_4a052938;
          case 3:
            iVar9 = (int)(local_a8 * local_a8) >> 0xc;
LAB_4a052938:
            local_a8 = (int)(local_a8 * iVar9) >> 0xc;
            break;
          case 4:
            iVar9 = (int)(local_a8 * local_a8) >> 0xc;
            local_a8 = iVar9 * iVar9 >> 0xc;
            break;
          default:
            iVar9 = 0x10;
            uVar10 = local_3c;
            if (local_3c >> 0x18 == 0) {
              iVar9 = 0x18;
              uVar10 = local_3c << 8;
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
            uVar10 = -iVar9 + 0x1f;
            iVar17 = -iVar9 + 0x20;
            iVar9 = 1;
            if (1 < iVar17) {
              puVar27 = &local_a8;
              do {
                iVar18 = (int)((&local_ac)[iVar9] * (&local_ac)[iVar9]) >> 0xc;
                puVar27[iVar9] = iVar18;
                if (iVar18 == 0) goto LAB_4a0529cc;
                iVar9 = iVar9 + 1;
              } while (iVar9 < iVar17);
            }
            uVar19 = 1 << (uVar10 & 0xff);
            local_a8 = 0x1000;
            while (0 < (int)uVar19) {
              bVar32 = (uVar16 & uVar19) != 0;
              if (bVar32) {
                puVar27 = (undefined4 *)(&local_a8)[uVar10];
              }
              uVar19 = (int)uVar19 >> 1;
              if (bVar32) {
                local_a8 = (int)((int)puVar27 * local_a8) >> 0xc;
              }
              uVar10 = uVar10 - 1;
            }
          }
switchD_4a052900_caseD_1:
          local_8c = local_a8;
          uVar10 = (uint)*(byte *)(puVar15[300] + 0x28);
          if (puVar15[0x121] == 0) {
            psVar20 = (short *)(puVar15[0x118] + uVar29 * 6);
            iVar9 = (int)(short)local_84 * (int)psVar20[2] +
                    (int)local_88._2_2_ * (int)psVar20[1] + (int)*psVar20 * (int)(short)local_88 >>
                    0xc;
          }
          else {
            iVar9 = (int)*(short *)(puVar15[0x121] + uVar29 * 2);
          }
          if (puVar15[0x123] == 0) {
            psVar20 = (short *)(puVar15[0x119] + uVar29 * 6);
            iVar17 = (int)(short)local_84 * (int)psVar20[2] +
                     (int)local_88._2_2_ * (int)psVar20[1] + (int)*psVar20 * (int)(short)local_88 >>
                     0xc;
          }
          else {
            iVar17 = (int)*(short *)(puVar15[0x123] + uVar29 * 2);
          }
          iVar18 = ((int)(uVar10 * iVar9) >> 0xd) + 0x80;
          iVar9 = ((int)(uVar10 * iVar17) >> 0xd) + 0x80;
          iVar17 = ((int)(local_a8 * uVar10) >> 0xd) + 0x80;
          if (iVar18 < 0xff) {
            if (iVar18 < 0) {
              iVar18 = 0;
            }
          }
          else {
            iVar18 = 0xff;
          }
          if (iVar9 < 0xff) {
            if (iVar9 < 0) {
              iVar9 = 0;
            }
          }
          else {
            iVar9 = 0xff;
          }
          if (iVar17 < 0xff) {
            if (iVar17 < 0) {
              iVar17 = 0;
            }
          }
          else {
            iVar17 = 0xff;
          }
          uVar23 = uVar23 + 1;
          uVar10 = (uint)*(byte *)((int)puVar15 + 0x527);
          if ((*puVar15 & 0x1000) != 0) {
            uVar10 = *(byte *)((int)puVar15 + 0x55f) * uVar10 >> 8;
          }
          *piVar26 = uVar10 * 0x1000000 + iVar17 * 0x10000 + iVar9 * 0x100 + iVar18;
        } while (uVar23 < (ushort)puVar15[0x129]);
      }
      goto LAB_4a053698;
    }
  }
  local_7c = uVar16 & 4;
  local_84 = *param_2;
  local_80 = (uint)((*(uint *)(param_1 + 0x10) & 0x70000) == 0x10000);
  local_78 = uVar16 & 8;
  local_74 = uVar16 & 0x10;
  local_70 = uVar16 & 2;
  puVar15 = *(uint **)PTR_DAT_4a052640;
  local_90 = (uint)local_90._2_2_ << 0x10;
  local_9c = 0;
  uVar10 = 0;
  local_8c = 0;
  local_94 = 0;
  local_9a = 0;
  local_98._0_2_ = 0;
  uVar23 = 0;
  if (local_7c != 0) {
    uVar23 = puVar15[0x11f];
  }
  if (local_7c != 0 && uVar23 != 0) {
    local_8c = uVar23;
  }
  else if ((uVar16 & 8) != 0 || local_7c != 0) {
    if (puVar15[0x105] == 0) {
      local_a8 = CONCAT22(local_a8._2_2_,-(short)puVar15[0x15b]);
      local_ac = (short *)CONCAT22(-*(short *)((int)puVar15 + 0x56a),-(short)puVar15[0x15a]);
      local_a4 = (uint)local_ac;
      local_a0 = local_a8;
      local_94 = CONCAT22(-*(short *)((int)puVar15 + 0x56a),-(short)puVar15[0x15a]);
      local_90 = CONCAT22(uVar5,-(short)puVar15[0x15b]);
    }
    else if ((*puVar15 & 0x40000000) == 0) {
      sVar6 = -(short)puVar15[0x15a];
      local_b4 = CONCAT22(-*(short *)((int)puVar15 + 0x56a),sVar6);
      local_ac = (short *)local_b4;
      iVar9 = (int)sVar6;
      iVar17 = (int)-*(short *)((int)puVar15 + 0x56a);
      iVar18 = (int)(short)-(short)puVar15[0x15b];
      uVar3 = (undefined2)
              ((int)(puVar15[6] * iVar18 + puVar15[5] * iVar17 + iVar9 * puVar15[4]) >> 0xc);
      uVar1 = (undefined2)
              ((int)(puVar15[9] * iVar18 + puVar15[8] * iVar17 + iVar9 * puVar15[7]) >> 0xc);
      local_b4 = CONCAT22(uVar1,uVar3);
      uVar2 = (undefined2)
              ((int)(puVar15[0xc] * iVar18 + puVar15[0xb] * iVar17 + puVar15[10] * iVar9) >> 0xc);
      local_b0 = CONCAT22(local_b0._2_2_,uVar2);
      local_a4 = CONCAT22(uVar1,uVar3);
      local_a0 = CONCAT22(local_a0._2_2_,uVar2);
      local_94 = CONCAT22(uVar1,uVar3);
      local_90 = CONCAT22(uVar5,uVar2);
    }
    else {
      local_b4 = CONCAT22(-*(short *)((int)puVar15 + 0x56a),-(short)puVar15[0x15a]);
      local_b0 = CONCAT22(local_b0._2_2_,-(short)puVar15[0x15b]);
      local_ac = (short *)local_b4;
      local_a8 = local_b0;
      FUN_4a13f4e0(&local_a4,puVar15 + 0x4c,&local_ac);
      local_94 = local_a4;
      local_90 = CONCAT22(local_90._2_2_,(short)local_a0);
    }
  }
  if (local_78 != 0) {
    puVar21 = *(uint **)puVar4;
    if ((*puVar21 & 0x40000000) == 0) {
      sVar6 = -(short)puVar15[0x15a];
      local_a8._0_2_ = -(short)puVar15[0x15b];
      local_b4 = CONCAT22(-*(short *)((int)puVar15 + 0x56a),sVar6);
      local_ac = (short *)local_b4;
      local_a8._2_2_ = local_b0._2_2_;
      iVar9 = (int)sVar6;
      iVar17 = (int)-*(short *)((int)puVar15 + 0x56a);
      iVar18 = (int)(short)local_a8;
      local_a4._0_2_ =
           (short)((int)(puVar15[0x22] * iVar18 + puVar15[0x1f] * iVar17 + iVar9 * puVar15[0x1c]) >>
                  0xc);
      local_a4._2_2_ =
           (short)((int)(puVar15[0x23] * iVar18 + puVar15[0x20] * iVar17 + iVar9 * puVar15[0x1d]) >>
                  0xc);
      local_b4 = CONCAT22(local_a4._2_2_,(short)local_a4);
      sVar6 = (short)((int)(puVar15[0x24] * iVar18 + puVar15[0x21] * iVar17 + puVar15[0x1e] * iVar9)
                     >> 0xc);
      local_b0 = CONCAT22(local_b0._2_2_,sVar6);
      local_9c = (short)local_a4;
      local_9a = local_a4._2_2_;
      local_98 = CONCAT22(local_98._2_2_,sVar6);
      local_a0._0_2_ = sVar6;
    }
    else {
      local_b0._0_2_ = -(short)puVar15[0x15b];
      local_b4 = CONCAT22(-*(short *)((int)puVar15 + 0x56a),-(short)puVar15[0x15a]);
      local_ac = (short *)local_b4;
      local_a8._2_2_ = local_b0._2_2_;
      local_a8._0_2_ = (short)local_b0;
      local_40 = FUN_4a171fac((int)(short)local_b0);
      uVar12 = FUN_4a17211c(local_40,puVar15[0x6a]);
      local_44 = FUN_4a171fac((int)local_ac._2_2_);
      uVar13 = FUN_4a17211c(local_44,puVar15[0x67]);
      local_48 = FUN_4a171fac((int)(short)local_ac);
      uVar14 = FUN_4a17211c(local_48,puVar15[100]);
      uVar13 = FUN_4a171a94(uVar14,uVar13);
      FUN_4a171a94(uVar13,uVar12);
      sVar6 = FUN_4a171e1c();
      uVar12 = FUN_4a17211c(local_40,puVar15[0x6b]);
      uVar13 = FUN_4a17211c(local_44,puVar15[0x68]);
      uVar14 = FUN_4a17211c(local_48,puVar15[0x65]);
      uVar13 = FUN_4a171a94(uVar14,uVar13);
      FUN_4a171a94(uVar13,uVar12);
      sVar7 = FUN_4a171e1c();
      local_4c = FUN_4a17211c(local_40,puVar15[0x6c]);
      uVar12 = FUN_4a17211c(local_44,puVar15[0x69]);
      uVar13 = FUN_4a17211c(local_48,puVar15[0x66]);
      uVar12 = FUN_4a171a94(uVar13,uVar12);
      FUN_4a171a94(uVar12,local_4c);
      sVar8 = FUN_4a171e1c();
      local_b4 = CONCAT22(sVar7,sVar6);
      local_b0 = CONCAT22(local_b0._2_2_,sVar8);
      local_9c = sVar6;
      local_9a = sVar7;
      local_98 = CONCAT22(local_98._2_2_,sVar8);
      local_a4._0_2_ = sVar6;
      local_a4._2_2_ = sVar7;
      local_a0._0_2_ = sVar8;
    }
    iVar9 = ((local_98 & 0xffff) - 0x1000) * 0x10000;
    iVar17 = iVar9 >> 0x10;
    local_98._0_2_ = (short)((uint)iVar9 >> 0x10);
    if (puVar21[0x105] == 1) {
      if ((*puVar21 & 0x40000000) == 0) {
        iVar9 = (int)(short)local_a4;
        iVar18 = (int)local_a4._2_2_;
        local_a4._0_2_ =
             (short)((int)(puVar15[0x2a] * iVar17 + puVar15[0x29] * iVar18 + iVar9 * puVar15[0x28])
                    >> 0xc);
        local_a4._2_2_ =
             (short)((int)(puVar15[0x2d] * iVar17 + puVar15[0x2c] * iVar18 + iVar9 * puVar15[0x2b])
                    >> 0xc);
        local_ac = (short *)CONCAT22(local_a4._2_2_,(short)local_a4);
        local_a8._0_2_ =
             (short)((int)(puVar15[0x30] * iVar17 + puVar15[0x2f] * iVar18 + puVar15[0x2e] * iVar9)
                    >> 0xc);
        local_9c = (short)local_a4;
        local_9a = local_a4._2_2_;
        local_98._0_2_ = (short)local_a8;
        local_98._2_2_ = local_98._2_2_;
        local_a0._0_2_ = (short)local_a8;
      }
      else {
        local_9c = (short)local_a4;
        local_9a = local_a4._2_2_;
        FUN_4a13f4e0(&local_a4,puVar15 + 0x70,&local_9c);
        local_9c = (short)local_a4;
        local_9a = local_a4._2_2_;
        local_98._0_2_ = (short)local_a0;
      }
    }
    sVar6 = *(short *)PTR_DAT_4a0536c0;
    bVar32 = sVar6 == (short)local_a4;
    sVar7 = (short)local_a4;
    if (bVar32) {
      sVar6 = *(short *)(PTR_DAT_4a0536c0 + 2);
      sVar7 = local_a4._2_2_;
    }
    bVar30 = bVar32 && sVar6 == sVar7;
    if (bVar32 && sVar6 == sVar7) {
      bVar30 = *(short *)(PTR_DAT_4a0536c0 + 4) == (short)local_98;
    }
    local_9c = (short)local_a4;
    local_9a = local_a4._2_2_;
    if (!bVar30) {
      FUN_4a0ecf24(&local_9c);
    }
    uVar10 = (uint)*(byte *)(puVar15[300] + 0x2b);
  }
  local_a0 = 0;
  local_50 = puVar15 + 0x100;
  if ((short)puVar15[0x129] != 0) {
    local_54 = puVar15 + 0x149;
    local_58 = puVar15 + 0x14a;
    local_5c = (int)(short)local_94;
    local_60 = (int)local_94._2_2_;
    local_64 = (int)(short)local_90;
    local_68 = uVar10 << 0x10;
    do {
      uVar23 = puVar15[0x128];
      if (uVar23 == 0) {
        local_a8 = local_a0 & 0xffff;
        local_a4 = local_a8;
        uVar23 = local_a8;
        uVar16 = local_a0;
      }
      else {
        uVar16 = (uint)*(ushort *)(uVar23 + local_a0 * 2);
        if (uVar23 == puVar15[0x127]) {
          local_a8 = uVar16;
          local_a4 = uVar16;
          uVar23 = uVar16;
        }
        else {
          iVar9 = puVar15[0x127] + uVar16 * *(byte *)((int)puVar15 + 0x4ab) * 2;
          local_a4 = (uint)*(ushort *)(iVar9 + (char)local_50[0x2a] * 2);
          local_a8 = (uint)*(ushort *)(iVar9 + *(char *)((int)local_50 + 0xaa) * 2);
          uVar23 = (uint)*(ushort *)(iVar9 + *(char *)((int)local_50 + 0xa9) * 2);
        }
      }
      local_88 = (int *)(local_84 + uVar16 * 4);
      uVar16 = 0;
      uVar11 = **(uint **)PTR_DAT_4a052640;
      uVar25 = 0;
      uVar19 = 0;
      uVar29 = 0;
      local_6c = *(uint **)PTR_DAT_4a052640;
      if ((uVar11 & 0x800) != 0) {
        uVar16 = (uint)(byte)puVar15[0x148];
        uVar25 = (uint)*(byte *)((int)puVar15 + 0x521);
        uVar19 = (uint)*(byte *)((int)puVar15 + 0x522);
        uVar29 = (uint)*(byte *)((int)puVar15 + 0x523);
      }
      uVar28 = puVar15[0x11c];
      puVar21 = local_54;
      if (uVar28 != 0) {
        puVar21 = (uint *)(uVar28 + local_a8 * 4);
      }
      if ((uVar11 & 0x1000) == 0) {
        uVar16 = uVar16 + (byte)*puVar21;
        if (local_70 == 0) {
          uVar25 = uVar25 + *(byte *)((int)puVar21 + 1);
          uVar19 = uVar19 + *(byte *)((int)puVar21 + 2);
          uVar29 = uVar29 + *(byte *)((int)puVar21 + 3);
        }
      }
      else {
        uVar16 = uVar16 + ((uint)(byte)puVar15[0x157] * (uint)(byte)*puVar21 >> 8);
        if (local_70 == 0) {
          uVar25 = uVar25 + ((uint)*(byte *)((int)puVar21 + 1) *
                             (uint)*(byte *)((int)puVar15 + 0x55d) >> 8);
          uVar19 = uVar19 + ((uint)*(byte *)((int)puVar15 + 0x55e) *
                             (uint)*(byte *)((int)puVar21 + 2) >> 8);
          uVar29 = uVar29 + ((uint)*(byte *)((int)puVar15 + 0x55f) *
                             (uint)*(byte *)((int)puVar21 + 3) >> 8);
        }
      }
      if (local_7c != 0) {
        puVar21 = local_58;
        if (uVar28 != 0) {
          puVar21 = (uint *)(uVar28 + local_a8 * 4);
        }
        if (local_8c == 0) {
          local_ac = (short *)(puVar15[0x117] + uVar23 * 6);
          iVar9 = local_64 * local_ac[2] + local_60 * local_ac[1] + local_5c * *local_ac >> 0xc;
          if (iVar9 < 0) {
            iVar9 = 0;
          }
          sVar6 = (short)iVar9;
        }
        else {
          sVar6 = *(short *)(local_8c + uVar23 * 2);
        }
        iVar9 = (int)sVar6;
        uVar16 = uVar16 + ((int)(iVar9 * ((uint)(byte)puVar15[0x158] * (uint)(byte)*puVar21 >> 8))
                          >> 0xc);
        if (local_70 == 0) {
          uVar25 = uVar25 + ((int)(((uint)*(byte *)((int)puVar15 + 0x561) *
                                    (uint)*(byte *)((int)puVar21 + 1) >> 8) * iVar9) >> 0xc);
          uVar19 = uVar19 + ((int)(iVar9 * ((uint)*(byte *)((int)puVar15 + 0x562) *
                                            (uint)*(byte *)((int)puVar21 + 2) >> 8)) >> 0xc);
          uVar29 = uVar29 + ((int)(((uint)*(byte *)((int)puVar21 + 3) *
                                    (uint)*(byte *)((int)puVar15 + 0x563) >> 8) * iVar9) >> 0xc);
        }
      }
      if (local_78 == 0) goto LAB_4a053570;
      uVar11 = puVar15[300];
      psVar20 = (short *)(puVar15[0x117] + uVar23 * 6);
      piVar26 = (int *)(int)psVar20[1];
      aiStack_c8[1] =
           (int)(short)local_98 * (int)psVar20[2] +
           (int)local_9a * (int)piVar26 + (int)*psVar20 * (int)local_9c >> 0xc;
      if (aiStack_c8[1] < 0) {
LAB_4a0534c4:
        aiStack_c8[1] = 0;
        goto switchD_4a0533f8_caseD_1;
      }
      switch(uVar10) {
      case 0:
        aiStack_c8[1] = 0x1000;
        break;
      case 1:
        break;
      case 2:
        iVar9 = aiStack_c8[1];
        goto LAB_4a053430;
      case 3:
        iVar9 = aiStack_c8[1] * aiStack_c8[1] >> 0xc;
LAB_4a053430:
        aiStack_c8[1] = aiStack_c8[1] * iVar9 >> 0xc;
        break;
      case 4:
        iVar9 = aiStack_c8[1] * aiStack_c8[1] >> 0xc;
        aiStack_c8[1] = iVar9 * iVar9 >> 0xc;
        break;
      default:
        iVar9 = 0x10;
        uVar23 = local_68;
        if (local_68 >> 0x18 == 0) {
          iVar9 = 0x18;
          uVar23 = local_68 << 8;
        }
        if (uVar23 >> 0x1c == 0) {
          iVar9 = iVar9 + 4;
          uVar23 = uVar23 << 4;
        }
        if (uVar23 >> 0x1e == 0) {
          iVar9 = iVar9 + 2;
          uVar23 = uVar23 << 2;
        }
        if (-1 < (int)uVar23) {
          iVar9 = iVar9 + 1;
        }
        uVar23 = -iVar9 + 0x1f;
        iVar17 = -iVar9 + 0x20;
        iVar9 = 1;
        if (1 < iVar17) {
          piVar26 = aiStack_c8 + 1;
          do {
            iVar18 = aiStack_c8[iVar9] * aiStack_c8[iVar9] >> 0xc;
            piVar26[iVar9] = iVar18;
            if (iVar18 == 0) goto LAB_4a0534c4;
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar17);
        }
        uVar28 = 1 << (uVar23 & 0xff);
        aiStack_c8[1] = 0x1000;
        while (0 < (int)uVar28) {
          bVar32 = (uVar10 & uVar28) != 0;
          if (bVar32) {
            piVar26 = (int *)aiStack_c8[uVar23 + 1];
          }
          uVar28 = (int)uVar28 >> 1;
          if (bVar32) {
            aiStack_c8[1] = (int)piVar26 * aiStack_c8[1] >> 0xc;
          }
          uVar23 = uVar23 - 1;
        }
      }
switchD_4a0533f8_caseD_1:
      uVar16 = uVar16 + ((int)(aiStack_c8[1] *
                              ((uint)(byte)puVar15[0x159] * (uint)*(byte *)(uVar11 + 0x28) >> 8)) >>
                        0xc);
      if (local_70 == 0) {
        uVar25 = uVar25 + ((int)(aiStack_c8[1] *
                                ((uint)*(byte *)((int)puVar15 + 0x565) *
                                 (uint)*(byte *)(uVar11 + 0x29) >> 8)) >> 0xc);
        uVar29 = uVar29 + ((int)((uint)*(byte *)((int)puVar15 + 0x567) * aiStack_c8[1]) >> 0xc);
        uVar19 = uVar19 + ((int)(aiStack_c8[1] *
                                ((uint)*(byte *)((int)puVar15 + 0x566) *
                                 (uint)*(byte *)(uVar11 + 0x2a) >> 8)) >> 0xc);
      }
LAB_4a053570:
      if (0xff < uVar16) {
        uVar16 = 0xff;
      }
      uVar16 = uVar16 & 0xff;
      if (local_70 == 0) {
        if (0xff < uVar25) {
          uVar25 = 0xff;
        }
        if (0xff < uVar19) {
          uVar19 = 0xff;
        }
        if (0xff < uVar29) {
          uVar29 = 0xff;
        }
        uVar29 = uVar29 & 0xff;
        uVar11 = uVar25 & 0xff;
        uVar23 = uVar19 & 0xff;
      }
      else {
        uVar11 = uVar16;
        uVar23 = uVar16;
        if (puVar15[0x11c] == 0) {
          uVar29 = 0xff;
        }
        else {
          uVar29 = (uint)*(byte *)(puVar15[0x11c] + local_a8 * 4 + 3);
        }
      }
      if (local_80 != 0) {
        uVar29 = 0x80;
      }
      if (local_74 != 0) {
        iVar17 = *(int *)(puVar15[0xde] + local_a4 * 0x14 + 0xc);
        iVar9 = 0x1000000;
        if ((int)local_6c[0xfe] <= iVar17) {
          if (iVar17 < (int)local_6c[0xff]) {
            iVar9 = local_6c[0x100] * (local_6c[0xff] - iVar17);
          }
          else {
            iVar9 = 0;
          }
        }
        uVar16 = iVar9 * uVar16 >> 0x18;
        if (local_70 == 0) {
          uVar23 = uVar23 * iVar9 >> 0x18;
          uVar11 = iVar9 * uVar11 >> 0x18;
        }
      }
      *local_88 = uVar29 * 0x1000000 + uVar23 * 0x10000 + uVar11 * 0x100 + uVar16;
      local_a0 = local_a0 + 1;
    } while (local_a0 < (ushort)local_50[0x29]);
  }
LAB_4a053698:
  if ((**(uint **)PTR_DAT_4a0536c4 & 0x4000000) == 0) {
    puVar22[0x11f] = 0;
    puVar22[0x125] = 0;
  }
  return;
}



// Address: 4a0536c8

void FUN_4a0536c8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_4a05374c;
  puVar1 = PTR_LAB_4a053748;
  *(undefined **)(PTR_PTR_4a05374c + 0x404) = PTR_LAB_4a053748;
  *(undefined **)(puVar2 + 4) = puVar1;
  puVar1 = PTR_FUN_4a053750;
  *(undefined **)(puVar2 + 0x424) = PTR_FUN_4a053750;
  *(undefined **)(puVar2 + 0x24) = puVar1;
  puVar1 = PTR_LAB_4a053754;
  *(undefined **)(puVar2 + 0x484) = PTR_LAB_4a053754;
  *(undefined **)(puVar2 + 0x84) = puVar1;
  puVar1 = PTR_FUN_4a053758;
  *(undefined **)(puVar2 + 0x4a4) = PTR_FUN_4a053758;
  *(undefined **)(puVar2 + 0xa4) = puVar1;
  puVar1 = PTR_FUN_4a05375c;
  *(undefined **)(puVar2 + 0x504) = PTR_FUN_4a05375c;
  *(undefined **)(puVar2 + 0x104) = puVar1;
  puVar1 = PTR_FUN_4a053760;
  *(undefined **)(puVar2 + 0x524) = PTR_FUN_4a053760;
  *(undefined **)(puVar2 + 0x124) = puVar1;
  puVar1 = PTR_FUN_4a053764;
  *(undefined **)(puVar2 + 0x584) = PTR_FUN_4a053764;
  *(undefined **)(puVar2 + 0x184) = puVar1;
  puVar1 = PTR_FUN_4a053768;
  *(undefined **)(puVar2 + 0x5a4) = PTR_FUN_4a053768;
  *(undefined **)(puVar2 + 0x1a4) = puVar1;
  puVar1 = PTR_LAB_4a05376c;
  *(undefined **)(puVar2 + 0x604) = PTR_LAB_4a05376c;
  *(undefined **)(puVar2 + 0x204) = puVar1;
  puVar1 = PTR_FUN_4a053770;
  *(undefined **)(puVar2 + 0x624) = PTR_FUN_4a053770;
  *(undefined **)(puVar2 + 0x224) = puVar1;
  return;
}



// Address: 4a053774

undefined1 FUN_4a053774(void)

{
  if ((**(uint **)PTR_DAT_4a053790 & 0x400) != 0) {
    return PTR_DAT_4a0083c8[0x20];
  }
  return 0;
}



// Address: 4a053794

void FUN_4a053794(void)

{
  thunk_FUN_4a161570(0x3c);
  FUN_4a0a5b64();
  return;
}



// Address: 4a0537a6

undefined4 FUN_4a0537a6(void)

{
  return 0x3c;
}



// Address: 4a0537ac

void FUN_4a0537ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  puVar1 = PTR_DAT_4a0537ec;
  if (*(int *)(PTR_DAT_4a0537ec + 4) == 0) {
    FUN_4a16e68e(PTR_DAT_4a0537ec,0x10,param_3,param_4,param_3,param_4);
  }
  FUN_4a16e68e(PTR_DAT_4a0537ec,*(int *)(puVar1 + 4) + 1);
  puVar2 = (undefined4 *)(*(int *)puVar1 + *(int *)(puVar1 + 4) * 8);
  *puVar2 = param_1;
  puVar2[1] = param_2;
  *(int *)(puVar1 + 4) = *(int *)(puVar1 + 4) + 1;
  return;
}



// Address: 4a0537f4

void FUN_4a0537f4(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  puVar1 = PTR_DAT_4a053860;
  *(undefined4 *)(PTR_DAT_4a053860 + 4) = 0x800;
  host_s3eConfigGetInt_arm(&DAT_4a053878,s_UnIndexedStreamMax_4a053864,puVar1 + 4);
  uVar2 = thunk_FUN_4a161570(*(int *)(puVar1 + 4) << 1);
  *(undefined4 *)puVar1 = uVar2;
  uVar3 = 0;
  if (*(int *)(puVar1 + 4) != 0) {
    do {
      *(short *)(*(int *)puVar1 + uVar3 * 2) = (short)uVar3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(puVar1 + 4));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a053834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a05387c

void FUN_4a05387c(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_3c [4];
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28 [4];
  undefined4 local_18;
  
  iVar6 = *(int *)(*(int *)PTR_DAT_4a0539f4 + 100);
  if (*PTR_DAT_4a0539f8 == '\0') {
    iVar6 = FUN_4a135c66(*(int *)PTR_DAT_4a0539f4 + 0x1c,*(undefined4 *)(iVar6 + 4),0);
    local_18 = *(undefined4 *)(iVar6 + 0x14);
    FUN_4a03c0b8(&local_18,1,0x10,2);
    for (puVar1 = *(undefined4 **)(iVar6 + 0x10); puVar3 = (undefined4 *)FUN_4a135c90(iVar6 + 0x10),
        puVar1 < puVar3; puVar1 = puVar1 + 1) {
      FUN_4a1652c6((int *)*puVar1,*(undefined4 *)(*(int *)*puVar1 + 0x14));
    }
    local_18 = *(undefined4 *)(iVar6 + 0x24);
    FUN_4a03c0b8(&local_18,1,0x10,2);
    for (puVar1 = *(undefined4 **)(iVar6 + 0x20); puVar3 = (undefined4 *)FUN_4a135c90(iVar6 + 0x20),
        puVar1 < puVar3; puVar1 = puVar1 + 1) {
      FUN_4a1652c6((int *)*puVar1,*(undefined4 *)(*(int *)*puVar1 + 0x14));
    }
    local_18 = *(undefined4 *)(iVar6 + 0x34);
    FUN_4a03c0b8(&local_18,1,0x10,2);
    for (puVar1 = *(undefined4 **)(iVar6 + 0x30); puVar3 = (undefined4 *)FUN_4a135c90(iVar6 + 0x30),
        puVar1 < puVar3; puVar1 = puVar1 + 1) {
      FUN_4a1652c6((int *)*puVar1,*(undefined4 *)(*(int *)*puVar1 + 0x14));
    }
    local_18 = *(undefined4 *)(iVar6 + 0x44);
    FUN_4a03c0b8(&local_18,1,0x10,2);
    for (puVar1 = *(undefined4 **)(iVar6 + 0x40); puVar3 = (undefined4 *)FUN_4a135c90(iVar6 + 0x40),
        puVar1 < puVar3; puVar1 = puVar1 + 1) {
      FUN_4a1652c6((int *)*puVar1,*(undefined4 *)(*(int *)*puVar1 + 0x14));
    }
  }
  else {
    local_28[0] = FUN_4a02b1e8(s_CIwModel_4a0539fc);
    local_28[1] = FUN_4a02b1e8(s_CIwAnim_4a053a08);
    local_28[2] = FUN_4a02b1e8(s_CIwAnimSkel_4a053a10);
    local_28[3] = FUN_4a02b1e8(s_CIwAnimSkin_4a053a1c);
    uVar5 = 0;
    do {
      local_2c = local_28[uVar5];
      FUN_4a03c0b8(&local_18,1,0x10,2);
      if ((ushort)local_18 != 0) {
        for (uVar4 = 0; uVar4 < (ushort)local_18; uVar4 = uVar4 + 1) {
          puVar1 = (undefined4 *)FUN_4a0606b4(auStack_3c);
          *puVar1 = PTR_PTR_4a053a28;
          FUN_4a03c12c(local_38,1,0x20,4);
          FUN_4a039aec(&local_30,1,0x1f,4);
          piVar2 = (int *)FUN_4a134ff8(iVar6,local_38[0],local_2c,0);
          FUN_4a1652c8(piVar2,local_30,*(undefined4 *)(*piVar2 + 0x38));
          FUN_4a0606ec(auStack_3c);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 4);
  }
  return;
}



// Address: 4a053a2c

void FUN_4a053a2c(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_4a053a5c;
  iVar3 = *(int *)(*(int *)PTR_DAT_4a053a58 + 100);
  uVar2 = host_s3eFileTell_thumb(*(undefined4 *)(PTR_DAT_4a053a5c + 8));
  *(undefined4 *)(iVar3 + 0xe4) = uVar2;
  if (*puVar1 == '\0') {
    FUN_4a06a0aa(iVar3);
  }
  FUN_4a0417ec(iVar3);
  return;
}



// Address: 4a053a60

void FUN_4a053a60(void)

{
  int *piVar1;
  uint in_r3;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint local_18;
  
  iVar4 = *(int *)(*(int *)PTR_DAT_4a053ad8 + 100);
  iVar2 = iVar4 + 0x10;
  if (*PTR_DAT_4a053adc == '\0') {
    local_18 = *(uint *)(iVar4 + 0x14);
    FUN_4a03c12c(&local_18,1,0x20,4);
  }
  else {
    local_18 = in_r3;
    FUN_4a03c12c(&local_18,1,0x20,4);
    uVar3 = local_18;
    if (*(uint *)(iVar4 + 0x14) < local_18) {
      FUN_4a16decc(iVar2,local_18);
    }
    FUN_4a16df8e(iVar2,uVar3);
    FUN_4a16decc(iVar2,*(undefined4 *)(iVar4 + 0x14));
  }
  for (uVar3 = 0; uVar3 < *(uint *)(iVar4 + 0x14); uVar3 = uVar3 + 1) {
    piVar1 = (int *)(*(int *)(iVar4 + 0x10) + uVar3 * 0x30);
    FUN_4a1652c6(piVar1,*(undefined4 *)(*piVar1 + 0x14));
  }
  FUN_4a03ebc0();
  return;
}



// Address: 4a053ae0

void FUN_4a053ae0(undefined4 param_1,int *param_2,int param_3)

{
  short sVar1;
  bool bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int **ppiVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  char cVar13;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 auStack_124 [4];
  undefined1 auStack_120 [16];
  uint local_110;
  uint local_10c;
  uint local_108;
  int *local_100;
  int *local_fc;
  int *local_f8;
  int *local_f4;
  int *local_f0;
  undefined4 local_ec;
  int *local_e8;
  int *local_e4;
  int *local_e0;
  int *local_dc;
  undefined4 local_d8;
  int *local_d4;
  undefined1 auStack_d0 [64];
  uint local_90 [3];
  int *local_84;
  int *local_80;
  int *local_7c;
  int *local_78;
  int *local_74;
  int *local_70;
  int *local_6c;
  int *local_68;
  int *local_64;
  int *local_60;
  int *local_5c;
  uint local_58;
  uint local_54;
  undefined4 *local_50;
  int local_4c;
  int *local_48;
  int local_44;
  int *local_40;
  int local_3c;
  int local_38;
  int *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int *local_24;
  int local_20;
  uint *local_1c;
  int local_18;
  
  local_18 = param_3 + 0xc0;
  if (**(int **)PTR_DAT_4a053ee8 * 0x800000 < 0) {
    param_3 = thunk_FUN_4a1652fc();
    param_3 = param_3 * 0x10000;
    local_90[0] = *(uint *)(param_3 + 0x1c);
    local_90[1] = *(uint *)(param_3 + 0x20) ^ 0x80000000;
    local_90[2] = *(uint *)(param_3 + 0x24) ^ 0x80000000;
    local_84 = *(int **)(param_3 + 0x28);
    local_80 = (int *)(*(uint *)(param_3 + 0x2c) ^ 0x80000000);
    local_7c = (int *)(*(uint *)(param_3 + 0x30) ^ 0x80000000);
    local_78 = *(int **)(param_3 + 0x34);
    local_74 = (int *)(*(uint *)(param_3 + 0x38) ^ 0x80000000);
    local_70 = (int *)(*(uint *)(param_3 + 0x3c) ^ 0x80000000);
    local_6c = *(int **)(param_3 + 0x40);
    local_68 = (int *)(*(uint *)(param_3 + 0x44) ^ 0x80000000);
    local_64 = (int *)(*(uint *)(param_3 + 0x48) ^ 0x80000000);
  }
  else {
    FUN_4a0d3f10(local_90,PTR_DAT_4a053eec);
    iVar11 = DAT_4a053ef0;
    local_d4 = (int *)0x0;
    local_e8 = (int *)0x0;
    local_d8 = (int *)0x0;
    local_dc = (int *)0x0;
    local_f4 = (int *)0x0;
    local_f8 = (int *)0x0;
    local_fc = (int *)0x0;
    local_100 = (int *)&DAT_3f800000;
    local_f0 = (int *)thunk_FUN_4a002d64(DAT_4a053ef0);
    local_e0 = local_f0;
    local_e4 = (int *)thunk_FUN_4a002f08(iVar11);
    local_ec = (int *)((uint)local_e4 ^ iVar11 << 0x1f);
    FUN_4a0d3898(local_90,&local_100);
    iVar11 = 0;
    do {
      iVar8 = 0;
      local_1c = local_90 + iVar11 * 3;
      do {
        local_20 = iVar8 * 4;
        uVar4 = thunk_FUN_4a17211c(local_1c[iVar8],0x41800000);
        iVar8 = iVar8 + 1;
        *(undefined4 *)((int)local_1c + local_20) = uVar4;
      } while (iVar8 < 3);
      iVar11 = iVar11 + 1;
    } while (iVar11 < 3);
    local_6c = (int *)thunk_FUN_4a17211c(local_6c,0x41800000);
    local_68 = (int *)thunk_FUN_4a17211c(local_68,0x41800000);
    local_64 = (int *)thunk_FUN_4a17211c(local_64,0x41800000);
  }
  bVar2 = false;
  if ((((*(int *)(local_18 + 0x2c) == 5) || (*(int *)(local_18 + 0x2c) == 6)) &&
      (-1 < **(int **)PTR_DAT_4a053ee8 << 0x17)) && (*(int *)(param_3 + 0x14) == 3)) {
    bVar2 = true;
  }
  if (bVar2) {
    iVar11 = *(int *)PTR_DAT_4a053ee8;
    uVar4 = thunk_FUN_4a171fac(*(undefined4 *)(iVar11 + 0x330));
    uVar4 = thunk_FUN_4a17295c(uVar4,0xfffffff0);
    local_6c = (int *)thunk_FUN_4a171a94(uVar4,local_6c);
    uVar4 = thunk_FUN_4a171fac(*(undefined4 *)(iVar11 + 0x334));
    uVar4 = thunk_FUN_4a17295c(uVar4,0xfffffff0);
    local_68 = (int *)thunk_FUN_4a1724e0(uVar4,local_68);
  }
  iVar11 = *(int *)(param_3 + 0x10);
  if (*(int *)(param_3 + 0x14) == 3) {
    iVar11 = iVar11 << 0x17;
  }
  FUN_4a057238(auStack_d0,local_90,PTR_DAT_4a053ef4,iVar11 < 0);
  if (bVar2) {
    iVar11 = *(int *)PTR_DAT_4a053ee8;
    uVar4 = thunk_FUN_4a171fac(*(undefined4 *)(iVar11 + 0x330));
    uVar4 = thunk_FUN_4a17295c(uVar4,0xfffffff0);
    local_6c = (int *)thunk_FUN_4a1724e0(uVar4,local_6c);
    uVar4 = thunk_FUN_4a171fac(*(undefined4 *)(iVar11 + 0x334));
    uVar4 = thunk_FUN_4a17295c(uVar4,0xfffffff0);
    local_68 = (int *)thunk_FUN_4a171a94(uVar4,local_68);
  }
  local_24 = param_2 + 0x20;
  if (*param_2 != -1) {
    if (param_2[0x2a] != 0) {
      iVar11 = FUN_4a000e60(auStack_d0,param_2[0x2a],0x40);
      if (iVar11 == 0) goto LAB_4a053d36;
      thunk_FUN_4a000f84(local_24[10],auStack_d0,0x40);
    }
    FUN_4a150d20(*param_2,1,0,auStack_d0);
  }
LAB_4a053d36:
  if (param_2[1] != -1) {
    thunk_FUN_4a001134(&local_110,PTR_DAT_4a053ef8,0x40);
    local_110 = local_90[0];
    local_10c = local_90[1];
    local_108 = local_90[2];
    local_100 = local_84;
    local_fc = local_80;
    local_f8 = local_7c;
    local_f0 = local_78;
    local_ec = local_74;
    local_e8 = local_70;
    local_e0 = local_6c;
    local_dc = local_68;
    local_d8 = local_64;
    if (param_2[0x2b] != 0) {
      iVar11 = FUN_4a000e60(&local_110,param_2[0x2b],0x40);
      if (iVar11 == 0) goto LAB_4a053da6;
      thunk_FUN_4a000f84(param_2[0x2b],&local_110,0x40);
    }
    FUN_4a150d20(param_2[1],1,0,&local_110);
  }
LAB_4a053da6:
  if (param_2[2] != -1) {
    local_100 = *(int **)(param_3 + 0x1c);
    local_fc = *(int **)(param_3 + 0x20);
    local_f8 = *(int **)(param_3 + 0x24);
    local_f4 = *(int **)(param_3 + 0x28);
    local_f0 = *(int **)(param_3 + 0x2c);
    local_ec = *(int **)(param_3 + 0x30);
    local_e8 = *(int **)(param_3 + 0x34);
    local_e4 = *(int **)(param_3 + 0x38);
    local_e0 = *(int **)(param_3 + 0x3c);
    FUN_4a0d3e28(&local_100);
    if (param_2[0x2c] != 0) {
      iVar11 = FUN_4a000e60(&local_100,param_2[0x2c],0x24);
      if (iVar11 == 0) goto LAB_4a053e08;
      thunk_FUN_4a000f84(param_2[0x2c],&local_100,0x24);
    }
    FUN_4a150d0c(param_2[2],1,0,&local_100);
  }
LAB_4a053e08:
  iVar11 = param_3 + 0x4c;
  local_28 = iVar11;
  if (param_2[3] != -1) {
    if ((param_2[0x2d] != 0) && (iVar11 != 0)) {
      iVar8 = FUN_4a000e60(iVar11,param_2[0x2d],0x24);
      if (iVar8 == 0) goto LAB_4a053e48;
      thunk_FUN_4a000f84(param_2[0x2d],iVar11,0x24);
    }
    FUN_4a150d0c(param_2[3],1,0,iVar11);
  }
LAB_4a053e48:
  if (param_2[4] != -1) {
    iVar11 = local_28 + 0x24;
    if ((param_2[0x2e] != 0) && (iVar11 != 0)) {
      iVar8 = FUN_4a000e60(iVar11,param_2[0x2e],0xc);
      if (iVar8 == 0) goto LAB_4a053e82;
      thunk_FUN_4a000f84(param_2[0x2e],iVar11,0xc);
    }
    FUN_4a150cac(param_2[4],1,iVar11);
  }
LAB_4a053e82:
  local_2c = param_3 + 0x7c;
  if (param_2[5] != -1) {
    iVar11 = param_3 + 0xa0;
    if ((param_2[0x2f] != 0) && (iVar11 != 0)) {
      iVar8 = FUN_4a000e60(iVar11,param_2[0x2f],0xc);
      if (iVar8 == 0) goto LAB_4a053ec2;
      thunk_FUN_4a000f84(param_2[0x2f],iVar11,0xc);
    }
    FUN_4a150cac(param_2[5],1,iVar11);
  }
LAB_4a053ec2:
  piVar9 = (int *)0x0;
  do {
    if (param_2[(int)((int)piVar9 + 6)] != -1) {
      local_30 = (int)((int)piVar9 + 6) * 4;
      local_d4 = piVar9;
      if (param_2[(int)(piVar9 + 0xc)] != 0) {
        iVar11 = FUN_4a000e60(&local_d4,param_2[(int)(piVar9 + 0xc)],4);
        if (iVar11 == 0) goto LAB_4a053f18;
        thunk_FUN_4a000f84(param_2[(int)(piVar9 + 0xc)],&local_d4,4);
      }
      FUN_4a150c44(*(undefined4 *)((int)param_2 + local_30),local_d4);
    }
LAB_4a053f18:
    piVar9 = (int *)((int)piVar9 + 1);
  } while (piVar9 < &DAT_00000004);
  if (param_2[10] != -1) {
    piVar9 = (int *)0x0;
    if ((*(uint *)(*(int *)(param_3 + 0xc) + 0x10) & 0x1fffffff) >> 0x19 == 0) {
      iVar11 = FUN_4a069962();
      if (iVar11 != 0) {
        piVar9 = (int *)0x3f400000;
      }
    }
    else {
      uVar4 = thunk_FUN_4a172098(*(undefined1 *)(*(int *)(param_3 + 0xc) + 0x17));
      piVar9 = (int *)thunk_FUN_4a17211c(uVar4,DAT_4a054334);
    }
    local_d4 = piVar9;
    if (param_2[0x34] != 0) {
      iVar11 = FUN_4a000e60(&local_d4,param_2[0x34],4);
      if (iVar11 == 0) goto LAB_4a053f78;
      thunk_FUN_4a000f84(param_2[0x34],&local_d4,4);
    }
    FUN_4a150c1c(param_2[10],local_d4);
  }
LAB_4a053f78:
  uVar10 = 0;
  do {
    iVar11 = *(int *)(*(int *)(param_3 + 0xc) + uVar10 * 4 + 0x2c);
    if (iVar11 != 0) {
      local_34 = param_2 + uVar10;
      if (local_34[0x19] != -1) {
        local_38 = iVar11 + 0xa0;
        uVar4 = thunk_FUN_4a172098(*(undefined2 *)(iVar11 + 0xbc));
        uVar4 = thunk_FUN_4a17295c(uVar4,0xfffffff4);
        local_d8 = (int *)thunk_FUN_4a17295c(uVar4,0xfffffff4);
        uVar4 = thunk_FUN_4a172098(*(undefined2 *)(local_38 + 0x1e));
        uVar4 = thunk_FUN_4a17295c(uVar4,0xfffffff4);
        local_d4 = (int *)thunk_FUN_4a17295c(uVar4,0xfffffff4);
        local_3c = (uVar10 + 0x19) * 4;
        local_40 = param_2 + uVar10 + 0x39;
        if (param_2[uVar10 + 0x43] != 0) {
          iVar8 = FUN_4a000e60(&local_d8,param_2[uVar10 + 0x43],8);
          if (iVar8 == 0) goto LAB_4a054002;
          thunk_FUN_4a000f84(local_40[10],&local_d8,8);
        }
        FUN_4a150c78(*(undefined4 *)((int)param_2 + local_3c),1,&local_d8);
      }
LAB_4a054002:
      if (local_34[0x1d] != -1) {
        local_d8 = (int *)thunk_FUN_4a172098(*(undefined2 *)(iVar11 + 0x20));
        local_d4 = (int *)thunk_FUN_4a172098(*(undefined2 *)(iVar11 + 0x22));
        local_44 = (uVar10 + 0x1d) * 4;
        local_48 = param_2 + uVar10 + 0x3d;
        if (param_2[uVar10 + 0x47] != 0) {
          iVar8 = FUN_4a000e60(&local_d8,param_2[uVar10 + 0x47],8);
          if (iVar8 == 0) goto LAB_4a054052;
          thunk_FUN_4a000f84(local_48[10],&local_d8,8);
        }
        FUN_4a150c78(*(undefined4 *)((int)param_2 + local_44),1,&local_d8);
      }
LAB_4a054052:
      if (local_34[0x21] != -1) {
        uVar4 = thunk_FUN_4a172098(*(undefined2 *)(iVar11 + 0x20));
        local_d8 = (int *)thunk_FUN_4a171bb8(0x3f800000,uVar4);
        uVar4 = thunk_FUN_4a172098(*(undefined2 *)(iVar11 + 0x22));
        local_d4 = (int *)thunk_FUN_4a171bb8(0x3f800000,uVar4);
        local_4c = (uVar10 + 0x21) * 4;
        if (param_2[uVar10 + 0x4b] != 0) {
          iVar11 = FUN_4a000e60(&local_d8,param_2[uVar10 + 0x4b],8);
          if (iVar11 == 0) goto LAB_4a0540b8;
          thunk_FUN_4a000f84(param_2[uVar10 + 0x4b],&local_d8,8);
        }
        FUN_4a150c78(*(undefined4 *)((int)param_2 + local_4c),1,&local_d8);
      }
    }
LAB_4a0540b8:
    uVar10 = uVar10 + 1;
  } while (uVar10 < 4);
  if (param_2[0x18] != -1) {
    uVar4 = thunk_FUN_4a171fac((int)*(short *)(local_18 + 0x12));
    local_d8 = (int *)thunk_FUN_4a17295c(uVar4,0xfffffff4);
    uVar4 = thunk_FUN_4a171fac((int)*(short *)(local_18 + 0x14));
    local_d4 = (int *)thunk_FUN_4a17295c(uVar4,0xfffffff4);
    if (param_2[0x42] != 0) {
      iVar11 = FUN_4a000e60(&local_d8,param_2[0x42],8);
      if (iVar11 == 0) goto LAB_4a05411a;
      thunk_FUN_4a000f84(param_2[0x42],&local_d8,8);
    }
    FUN_4a150c78(param_2[0x18],1,&local_d8);
  }
LAB_4a05411a:
  local_50 = (undefined4 *)(param_3 + 0xa0);
  if (param_2[0xb] != -1) {
    if ((**(int **)PTR_DAT_4a054338 << 0x16 < 0) &&
       (iVar11 = FUN_4a069984(*(undefined4 *)(param_3 + 0xc)), iVar11 != 2)) {
      if ((*(uint *)(*(int *)(param_3 + 0xc) + 0x10) & 0x7ffff) >> 0x10 == 1) {
        *(byte *)((int)local_50 + 0x1b) = *(byte *)((int)local_50 + 0x1b) >> 1;
      }
      ppiVar7 = (int **)(param_3 + 0xb8);
    }
    else {
      ppiVar7 = &local_d4;
      local_d4 = (int *)0xffffffff;
    }
    FUN_4a035344(param_2,0xb,ppiVar7);
  }
  if (param_2[0xc] != -1) {
    FUN_4a035344(param_2,0xc,local_18);
  }
  if (param_2[0xd] != -1) {
    FUN_4a035344(param_2,0xd,param_3 + 0xb4);
  }
  if (param_2[0xe] != -1) {
    FUN_4a035344(param_2,0xe,param_3 + 0xc4);
  }
  if (param_2[0xf] != -1) {
    sVar1 = -*(short *)(param_3 + 0xcc);
    local_ec = (int *)CONCAT22(-*(short *)(param_3 + 0xce),sVar1);
    local_e8 = (int *)CONCAT22(local_e8._2_2_,-*(short *)(param_3 + 0xd0));
    local_d8 = local_ec;
    local_d4 = local_e8;
    uVar4 = thunk_FUN_4a171fac((int)sVar1,local_e8,auStack_d0);
    local_e4 = (int *)thunk_FUN_4a17295c(uVar4,0xfffffff4);
    uVar4 = thunk_FUN_4a171fac((int)local_d8._2_2_);
    local_e0 = (int *)thunk_FUN_4a17295c(uVar4,0xfffffff4);
    uVar4 = thunk_FUN_4a171fac((int)(short)local_d4);
    local_dc = (int *)thunk_FUN_4a17295c(uVar4,0xfffffff4);
    if ((**(int **)PTR_DAT_4a054338 << 0x17 < 0) && (*(int *)(param_3 + 0x14) != 0)) {
      FUN_4a0d3f10(auStack_120,local_28);
      FUN_4a0d3e28(auStack_120);
      FUN_4a13f43a(&local_f0,auStack_120,&local_e4);
      local_e4 = local_f0;
      local_e0 = local_ec;
      local_dc = local_e8;
    }
    if (param_2[0x39] != 0) {
      iVar11 = FUN_4a000e60(&local_e4,param_2[0x39],0xc);
      if (iVar11 == 0) goto LAB_4a054254;
      thunk_FUN_4a000f84(param_2[0x39],&local_e4,0xc);
    }
    FUN_4a150cac(param_2[0xf],1,&local_e4);
  }
LAB_4a054254:
  if (param_2[0x10] != -1) {
    FUN_4a035344(param_2,0x10,param_3 + 0xbc);
  }
  if (param_2[0x11] != -1) {
    FUN_4a035344(param_2,0x11,param_3 + 200);
  }
  if (param_2[0x12] != -1) {
    local_fc = *(int **)(local_2c + 0x1c);
    local_100 = *(int **)(local_2c + 0x18);
    local_f8 = *(int **)(local_2c + 0x20);
    local_54 = (uint)local_100 ^ 0x80000000;
    local_58 = (uint)local_f8 ^ 0x80000000;
    uVar10 = (uint)local_fc ^ 0x80000000;
    local_e8 = (int *)(int)*(short *)(param_3 + 0xcc);
    local_e4 = (int *)(int)*(short *)(param_3 + 0xce);
    local_e0 = (int *)(int)*(short *)(param_3 + 0xd0);
    local_dc = local_100;
    local_d8 = local_fc;
    local_d4 = local_f8;
    uVar4 = thunk_FUN_4a171fac(local_e8);
    uVar4 = thunk_FUN_4a17295c(uVar4,0xfffffff4);
    local_5c = (int *)thunk_FUN_4a1724e0(uVar4,local_54);
    uVar4 = thunk_FUN_4a171fac(local_e4);
    uVar4 = thunk_FUN_4a17295c(uVar4,0xfffffff4);
    piVar9 = (int *)thunk_FUN_4a1724e0(uVar4,uVar10);
    uVar4 = thunk_FUN_4a171fac(local_e0);
    uVar4 = thunk_FUN_4a17295c(uVar4,0xfffffff4);
    local_ec = (int *)thunk_FUN_4a1724e0(uVar4,local_58);
    puVar3 = PTR_DAT_4a05433c;
    local_f4 = local_5c;
    cVar13 = **(int **)PTR_DAT_4a054338 << 0x17 == 0;
    local_f0 = piVar9;
    if ((**(int **)PTR_DAT_4a054338 << 0x17 < 0) &&
       (cVar13 = *(int *)(param_3 + 0x14) == 0, !(bool)cVar13)) {
      FUN_4a13f43a(&local_100,local_28,&local_f4);
      local_f4 = local_100;
      local_f0 = local_fc;
      local_ec = local_f8;
    }
    thunk_FUN_4a171da0(*(undefined4 *)puVar3,local_f4);
    if (((cVar13 == '\0') ||
        (thunk_FUN_4a171da0(*(undefined4 *)(puVar3 + 4),local_f0), cVar13 == '\0')) ||
       (thunk_FUN_4a171da0(*(undefined4 *)(puVar3 + 8),local_ec), cVar13 == '\0')) {
      thunk_FUN_4a0e4cdc(&local_f4);
    }
    if (param_2[0x3c] != 0) {
      iVar11 = FUN_4a000e60(&local_f4,param_2[0x3c],0xc);
      if (iVar11 == 0) goto LAB_4a05438a;
      thunk_FUN_4a000f84(param_2[0x3c],&local_f4,0xc);
    }
    FUN_4a150cac(param_2[0x12],1,&local_f4);
  }
LAB_4a05438a:
  if (param_2[0x13] != -1) {
    iVar11 = *(int *)(param_3 + 0xc);
    uVar5 = thunk_FUN_4a172098(*(undefined1 *)(iVar11 + 0x28));
    uVar4 = DAT_4a054798;
    local_e0 = (int *)thunk_FUN_4a17211c(uVar5,DAT_4a054798);
    uVar5 = thunk_FUN_4a172098(*(undefined1 *)(iVar11 + 0x29));
    local_dc = (int *)thunk_FUN_4a17211c(uVar5,uVar4);
    uVar5 = thunk_FUN_4a172098(*(undefined1 *)(iVar11 + 0x2a));
    local_d8 = (int *)thunk_FUN_4a17211c(uVar5,uVar4);
    local_d4 = (int *)thunk_FUN_4a172098(*(undefined1 *)(iVar11 + 0x2b));
    if (param_2[0x3d] != 0) {
      iVar11 = FUN_4a000e60(&local_e0,param_2[0x3d],0x10);
      if (iVar11 == 0) goto LAB_4a0543f4;
      thunk_FUN_4a000f84(param_2[0x3d],&local_e0,0x10);
    }
    FUN_4a150ce8(param_2[0x13],1,&local_e0);
  }
LAB_4a0543f4:
  if (param_2[0x14] != -1) {
    local_d4 = (int *)0x0;
    if (((*(int *)(param_3 + 0x10) << 0x10 < 0) && (*(int *)(param_3 + 0x14) != 3)) &&
       (-1 < *(int *)(*(int *)(param_3 + 0xc) + 0x10) << 0x15)) {
      local_d4 = (int *)0x1;
    }
    piVar9 = *(int **)PTR_DAT_4a05479c;
    local_60 = param_2 + 0x34;
    local_d8 = piVar9;
    if (*piVar9 * 0x800000 < 0) {
      local_dc = (int *)thunk_FUN_4a171fac(piVar9[0xfb]);
      uVar4 = DAT_4a0547a0;
      if (local_d4 != (int *)0x0) {
        uVar4 = thunk_FUN_4a171fac(piVar9[0xfc]);
      }
      local_e0 = local_dc;
      if (local_60[10] == 0) {
LAB_4a05446e:
        FUN_4a150c1c(param_2[0x14],local_e0);
      }
      else {
        iVar11 = FUN_4a000e60(&local_e0,local_60[10],4);
        if (iVar11 != 0) {
          thunk_FUN_4a000f84(local_60[10],&local_e0,4);
          goto LAB_4a05446e;
        }
      }
      local_e0 = (int *)thunk_FUN_4a1725c0(uVar4,local_dc);
    }
    else {
      FUN_4a04d8e4(piVar9[0xfb],piVar9[0xcb]);
      local_dc = (int *)thunk_FUN_4a171fac();
      FUN_4a04d8e4(piVar9[0xfc],*(undefined4 *)(*(int *)PTR_DAT_4a05479c + 0x32c));
      uVar4 = thunk_FUN_4a171fac();
      local_e0 = (int *)thunk_FUN_4a17295c(local_dc,0xfffffffa);
      if (local_60[10] == 0) {
LAB_4a0544f0:
        FUN_4a150c1c(param_2[0x14],local_e0);
      }
      else {
        iVar11 = FUN_4a000e60(&local_e0,local_60[10],4);
        if (iVar11 != 0) {
          thunk_FUN_4a000f84(local_60[10],&local_e0,4);
          goto LAB_4a0544f0;
        }
      }
      local_e0 = (int *)thunk_FUN_4a17295c(uVar4,0xfffffffa);
    }
    if (param_2[0x3f] == 0) {
LAB_4a05451c:
      FUN_4a150c1c(param_2[0x15],local_e0);
    }
    else {
      iVar11 = FUN_4a000e60(&local_e0,param_2[0x3f],4);
      if (iVar11 != 0) {
        thunk_FUN_4a000f84(param_2[0x3f],&local_e0,4);
        goto LAB_4a05451c;
      }
    }
    FUN_4a035344(param_2,0x16,local_d8 + 0xfd);
  }
  if (param_2[0x17] != -1) {
    puVar12 = *(undefined4 **)(local_18 + 0x20);
    if (puVar12 == (undefined4 *)0x0) {
      thunk_FUN_4a001134(&local_150,PTR_DAT_4a0547a4,0x80);
      if (param_2[0x41] != 0) {
        iVar11 = FUN_4a000e60(&local_150,param_2[0x41],0x80);
        if (iVar11 == 0) goto LAB_4a0545aa;
        thunk_FUN_4a000f84(param_2[0x41],&local_150,0x80);
      }
      iVar11 = param_2[0x17];
      piVar9 = (int *)0x2;
      puVar12 = &local_150;
    }
    else {
      local_d4 = (int *)(uint)*(ushort *)(local_18 + 0x1c);
      local_d8 = (int *)((int)local_d4 << 6);
      if (param_2[0x41] != 0) {
        iVar11 = FUN_4a000e60(puVar12,param_2[0x41],local_d8);
        if (iVar11 == 0) goto LAB_4a0545aa;
        thunk_FUN_4a000f84(param_2[0x41],puVar12,local_d8);
      }
      iVar11 = param_2[0x17];
      piVar9 = local_d4;
    }
    FUN_4a150d20(iVar11,piVar9,0,puVar12);
  }
LAB_4a0545aa:
  if (local_24[5] != -1) {
    iVar11 = *(int *)PTR_DAT_4a05479c;
    local_d8 = (int *)thunk_FUN_4a172098(*(undefined4 *)(iVar11 + 0x34c));
    local_d4 = (int *)thunk_FUN_4a172098(*(undefined4 *)(iVar11 + 0x350));
    if (param_2[0x4f] != 0) {
      iVar11 = FUN_4a000e60(&local_d8,param_2[0x4f],8);
      if (iVar11 == 0) goto LAB_4a0545fc;
      thunk_FUN_4a000f84(param_2[0x4f],&local_d8,8);
    }
    FUN_4a150c78(param_2[0x25],1,&local_d8);
  }
LAB_4a0545fc:
  if (local_24[6] != -1) {
    iVar11 = *(int *)PTR_DAT_4a05479c;
    local_d8 = (int *)thunk_FUN_4a172098(*(undefined4 *)(iVar11 + 0x33c));
    local_d4 = (int *)thunk_FUN_4a172098(*(undefined4 *)(iVar11 + 0x340));
    if (param_2[0x50] != 0) {
      iVar11 = FUN_4a000e60(&local_d8,param_2[0x50],8);
      if (iVar11 == 0) goto LAB_4a054650;
      thunk_FUN_4a000f84(param_2[0x50],&local_d8,8);
    }
    FUN_4a150c78(param_2[0x26],1,&local_d8);
  }
LAB_4a054650:
  if (local_24[7] != -1) {
    thunk_FUN_4a001134(&local_f4,PTR_DAT_4a0547a4 + 0x80,0x24);
    iVar11 = *(int *)PTR_DAT_4a05479c;
    uVar4 = thunk_FUN_4a172098(*(undefined4 *)(iVar11 + 0x34c));
    piVar9 = (int *)thunk_FUN_4a171bb8(0x3f800000,uVar4);
    uVar4 = thunk_FUN_4a172098(*(undefined4 *)(iVar11 + 0x350));
    piVar6 = (int *)thunk_FUN_4a171bb8(0x3f800000,uVar4);
    iVar11 = *(int *)(iVar11 + 0x354);
    if (iVar11 == 0) {
      local_e4 = (int *)((uint)piVar6 ^ 0x80000000);
      local_e0 = (int *)&DAT_3f800000;
      local_f4 = piVar9;
    }
    else if (iVar11 == 1) {
      local_f0 = (int *)((uint)piVar9 ^ 0x80000000);
      local_e8 = (int *)((uint)piVar6 ^ 0x80000000);
      local_ec = (int *)&DAT_3f800000;
      local_e0 = DAT_4a0547ac;
    }
    else if (iVar11 == 2) {
      local_ec = (int *)&DAT_3f800000;
      local_f4 = (int *)((uint)piVar9 ^ 0x80000000);
      local_e4 = piVar6;
    }
    else if (iVar11 == 3) {
      local_ec = (int *)0x0;
      local_f0 = piVar9;
      local_e8 = piVar6;
      local_e0 = DAT_4a0547a8;
    }
    if (param_2[0x51] != 0) {
      iVar11 = FUN_4a000e60(&local_f4,param_2[0x51],0x24);
      if (iVar11 == 0) goto LAB_4a054714;
      thunk_FUN_4a000f84(param_2[0x51],&local_f4,0x24);
    }
    FUN_4a150d0c(param_2[0x27],1,0,&local_f4);
  }
LAB_4a054714:
  if (local_24[8] != -1) {
    local_d4 = (int *)((**(uint **)PTR_DAT_4a05479c & 0x3ff) >> 9);
    local_dc = &local_d8;
    local_d8 = (int *)((**(uint **)PTR_DAT_4a05479c & 0x1ff) >> 8);
    if (param_2[0x52] != 0) {
      iVar11 = FUN_4a000e60(&local_dc,param_2[0x52],8);
      if (iVar11 == 0) goto LAB_4a054762;
      thunk_FUN_4a000f84(param_2[0x52],&local_dc,8);
    }
    FUN_4a150c84(param_2[0x28],1,local_dc);
  }
LAB_4a054762:
  if (local_24[9] != -1) {
    local_dc = (int *)*local_50;
    local_d8 = (int *)local_50[1];
    local_d4 = (int *)local_50[2];
    if ((*(int *)(param_3 + 0x14) != 0) && (*(int *)(param_3 + 0x14) == 1)) {
      local_160 = *(undefined4 *)(param_3 + 0x4c);
      local_154 = *(undefined4 *)(param_3 + 0x50);
      local_148 = *(undefined4 *)(param_3 + 0x54);
      local_15c = *(undefined4 *)(param_3 + 0x58);
      local_150 = *(undefined4 *)(param_3 + 0x5c);
      local_144 = *(undefined4 *)(param_3 + 0x60);
      local_158 = *(undefined4 *)(param_3 + 100);
      local_14c = *(undefined4 *)(param_3 + 0x68);
      local_140 = *(undefined4 *)(param_3 + 0x6c);
      local_128 = 0;
      local_130 = 0;
      local_12c = 0;
      local_13c = 0;
      local_138 = 0;
      local_134 = 0;
      thunk_FUN_4a001134(auStack_124,&local_160,0x30);
      FUN_4a0d3e28(auStack_124);
      piVar9 = (int *)thunk_FUN_4a1725c0(local_dc,*(undefined4 *)(param_3 + 0x70));
      piVar6 = (int *)thunk_FUN_4a1725c0(local_d8,*(undefined4 *)(param_3 + 0x74));
      local_ec = (int *)thunk_FUN_4a1725c0(local_d4,*(undefined4 *)(param_3 + 0x78));
      local_f4 = piVar9;
      local_f0 = piVar6;
      FUN_4a13f61c(&local_e8,auStack_124,&local_f4,&local_ec);
      local_dc = local_e8;
      local_d8 = local_e4;
      local_d4 = local_e0;
    }
    if (param_2[0x53] != 0) {
      iVar11 = FUN_4a000e60(&local_dc,param_2[0x53],0xc);
      if (iVar11 == 0) {
        return;
      }
      thunk_FUN_4a000f84(param_2[0x53],&local_dc,0xc);
    }
    FUN_4a150cac(param_2[0x29],1,&local_dc);
  }
  return;
}



// Address: 4a054848

undefined4 FUN_4a054848(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_4a13578c(*(undefined4 *)PTR_DAT_4a054894,*(undefined4 *)(param_1 + 0xb0),
                       s_CIwGxFont_4a054898,0);
  uVar2 = 0;
  while( true ) {
    if (*(uint *)(*(int *)(PTR_DAT_4a0548a4 + 4) + 0x24) <= uVar2) {
      return 0;
    }
    if (*(int *)(*(int *)(*(int *)(PTR_DAT_4a0548a4 + 4) + 0x20) + uVar2 * 0xc) == param_1) break;
    uVar2 = uVar2 + 1;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x20) + uVar2 * 0xc);
}



// Address: 4a0548ac

void FUN_4a0548ac(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)PTR_DAT_4a02b1b8 + 0x5c8;
  uVar1 = 0;
  do {
    if (*(int *)(iVar2 + uVar1 * 8) == 0) {
      *(undefined4 *)(uVar1 * 8 + iVar2 + 4) = param_1;
      *(undefined4 *)(iVar2 + uVar1 * 8) = 1;
      return;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x14);
  return;
}



// Address: 4a0548b8

void FUN_4a0548b8(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  undefined1 auStack_240 [204];
  undefined1 auStack_174 [160];
  undefined4 local_d4;
  uint local_d0;
  int local_cc;
  undefined1 local_c8 [156];
  uint local_2c;
  byte local_28 [4];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar9 = *(int *)(*(int *)PTR_DAT_4a054bb8 + 100);
  if (*PTR_DAT_4a054bbc == '\0') {
    iVar4 = FUN_4a135c66(*(int *)PTR_DAT_4a054bb8 + 0x1c,*(undefined4 *)(iVar9 + 4),0);
    local_2c = *(uint *)(iVar4 + 0x54);
    FUN_4a039b90(&local_2c,1,8,1);
    for (uVar10 = 0; uVar10 < (local_2c & 0xff); uVar10 = uVar10 + 1) {
      FUN_4a03c064(*(int *)(iVar4 + 0x50) + uVar10 * 0xa0,0xa0);
      iVar12 = uVar10 * 4;
      FUN_4a03c12c(*(int *)(iVar4 + 0x70) + iVar12,1,0x20,4);
      FUN_4a039aec(*(int *)(iVar4 + 0x60) + iVar12,1,0x1f,4);
      FUN_4a03c12c(*(int *)(*(int *)(iVar9 + 0x20) + iVar12) + 4,1,0x20,4);
    }
  }
  else {
    FUN_4a039b90(local_28,1,8,1);
    FUN_4a092228(iVar9 + 0x20,*(int *)(iVar9 + 0x24) + (uint)local_28[0]);
    puVar2 = PTR_DAT_4a054bc0;
    local_c8[0] = 0;
    if (((*(uint *)(PTR_DAT_4a054bc0 + 0xc) & 1) == 0) &&
       (iVar4 = FUN_4a1491bc(PTR_DAT_4a054bc0 + 0xc), iVar4 != 0)) {
      *PTR_DAT_4a054bc4 = 0;
    }
    if (((*(uint *)(puVar2 + 8) & 1) == 0) &&
       (iVar4 = FUN_4a1491bc(PTR_DAT_4a054bc0 + 8), iVar4 != 0)) {
      PTR_DAT_4a054bc4[0xa0] = 0;
    }
    if (((*(uint *)(puVar2 + 4) & 1) == 0) &&
       (iVar4 = FUN_4a1491bc(PTR_DAT_4a054bc0 + 4), iVar4 != 0)) {
      *PTR_DAT_4a054bc8 = 0;
    }
    puVar11 = (uint *)(PTR_DAT_4a054bbc + 0xc0);
    local_d0 = 0;
    for (uVar10 = 0; uVar10 < local_28[0]; uVar10 = uVar10 + 1) {
      FUN_4a03c064(local_c8,0xa0);
      if (DAT_4a054bcc <= *puVar11) {
        FUN_4a03c12c(&local_d0,1,0x20,4);
      }
      FUN_4a039aec(&local_cc,1,0x1f,4);
      puVar2 = PTR_DAT_4a054bb8;
      FUN_4a08d02c(*(undefined4 *)PTR_DAT_4a054bb8,local_c8,PTR_DAT_4a054bc4,PTR_DAT_4a054bc4 + 0xa0
                   ,PTR_DAT_4a054bc8);
      local_d4 = FUN_4a02b1e8(PTR_DAT_4a054bc4 + 0xa0);
      if (DAT_4a054bd0 <= *puVar11) {
        FUN_4a03c12c(&local_d4,1,0x20,4);
      }
      iVar4 = FUN_4a1357e6(*(undefined4 *)puVar2,local_d4,1);
      puVar3 = PTR_DAT_4a054bb8;
      piVar7 = *(int **)puVar2;
      if (-1 < *piVar7 << 0x13) {
        if ((iVar4 == 0) || ((char)piVar7[0x49] != '\0')) {
          FUN_4a08cf54(auStack_174,piVar7,local_c8);
          FUN_4a0012bc(PTR_DAT_4a054bc4,auStack_174);
          FUN_4a001538(PTR_DAT_4a054bc4,&DAT_4a054bd4);
          thunk_FUN_4a001134(auStack_240,PTR_DAT_4a054bbc,0xcc);
          FUN_4a0012bc(*(int *)puVar3 + 0x6c,local_c8);
          if (((local_d0 & 1) == 0) &&
             ((-1 < (int)(local_d0 << 0x1e) || (-1 < **(int **)puVar3 << 0x1f)))) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            FUN_4a0398ac(PTR_DAT_4a054bc4,0);
          }
          else {
            FUN_4a0365c0(PTR_DAT_4a054bc4,0);
          }
          uVar5 = *(undefined4 *)(*(int *)PTR_DAT_4a054bb8 + 100);
          if ((!bVar1) && (FUN_4a06a0fc(uVar5,1), local_cc != 0x1000)) {
            iVar4 = FUN_4a134f80(uVar5,s_CIwModel_4a054bdc,1);
            if (iVar4 != 0) {
              local_18 = iVar4 + 0xc;
              for (puVar8 = *(undefined4 **)(iVar4 + 0xc);
                  puVar6 = (undefined4 *)FUN_4a135c90(local_18), puVar8 < puVar6;
                  puVar8 = puVar8 + 1) {
                FUN_4a1652c8((int *)*puVar8,local_cc,*(undefined4 *)(*(int *)*puVar8 + 0x38));
              }
            }
            iVar4 = FUN_4a134f80(uVar5,s_CIwAnim_4a054be8,1);
            if (iVar4 != 0) {
              local_1c = iVar4 + 0xc;
              for (puVar8 = *(undefined4 **)(iVar4 + 0xc);
                  puVar6 = (undefined4 *)FUN_4a135c90(local_1c), puVar8 < puVar6;
                  puVar8 = puVar8 + 1) {
                FUN_4a1652c8((int *)*puVar8,local_cc,*(undefined4 *)(*(int *)*puVar8 + 0x38));
              }
            }
            iVar4 = FUN_4a134f80(uVar5,s_CIwAnimSkel_4a054bf0,1);
            if (iVar4 != 0) {
              local_20 = iVar4 + 0xc;
              for (puVar8 = *(undefined4 **)(iVar4 + 0xc);
                  puVar6 = (undefined4 *)FUN_4a135c90(local_20), puVar8 < puVar6;
                  puVar8 = puVar8 + 1) {
                FUN_4a1652c8((int *)*puVar8,local_cc,*(undefined4 *)(*(int *)*puVar8 + 0x38));
              }
            }
            iVar4 = FUN_4a134f80(uVar5,s_CIwAnimSkin_4a054bfc,1);
            if (iVar4 != 0) {
              local_24 = iVar4 + 0xc;
              for (puVar8 = *(undefined4 **)(iVar4 + 0xc);
                  puVar6 = (undefined4 *)FUN_4a135c90(local_24), puVar8 < puVar6;
                  puVar8 = puVar8 + 1) {
                FUN_4a1652c8((int *)*puVar8,local_cc,*(undefined4 *)(*(int *)*puVar8 + 0x38));
              }
            }
          }
          FUN_4a06a2a0(iVar9,uVar5,1);
          iVar4 = *(int *)PTR_DAT_4a054bb8;
          *(int *)(iVar4 + 100) = iVar9;
          FUN_4a0012bc(iVar4 + 0x6c,iVar9 + 0x38);
          thunk_FUN_4a001134(PTR_DAT_4a054bbc,auStack_240,0xcc);
        }
        else {
          FUN_4a06a2a0(iVar9,iVar4);
        }
      }
    }
  }
  return;
}



// Address: 4a054c08

void FUN_4a054c08(undefined4 param_1)

{
  undefined1 auStack_1c [20];
  
  if (PTR_DAT_4a054c30[1] != '\0') {
    FUN_4a0a7970(auStack_1c);
    FUN_4a01da78(param_1);
    FUN_4a0a79e4(auStack_1c);
  }
  return;
}



// Address: 4a054c34

undefined4 FUN_4a054c34(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_8 [2];
  
  local_8[0] = 0;
  uVar1 = FUN_4a01d924(param_2,0xffffffff);
  FUN_4a1020c0(local_8,uVar1);
  return local_8[0];
}



// Address: 4a054c64

void FUN_4a054c64(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_4a054ce8;
  puVar1 = PTR_FUN_4a054ce4;
  *(undefined **)(PTR_PTR_4a054ce8 + 0x444) = PTR_FUN_4a054ce4;
  *(undefined **)(puVar2 + 0x44) = puVar1;
  puVar1 = PTR_FUN_4a054cec;
  *(undefined **)(puVar2 + 0x464) = PTR_FUN_4a054cec;
  *(undefined **)(puVar2 + 100) = puVar1;
  puVar1 = PTR_FUN_4a054cf0;
  *(undefined **)(puVar2 + 0x4c4) = PTR_FUN_4a054cf0;
  *(undefined **)(puVar2 + 0xc4) = puVar1;
  puVar1 = PTR_FUN_4a054cf4;
  *(undefined **)(puVar2 + 0x4e4) = PTR_FUN_4a054cf4;
  *(undefined **)(puVar2 + 0xe4) = puVar1;
  puVar1 = PTR_FUN_4a054cf8;
  *(undefined **)(puVar2 + 0x544) = PTR_FUN_4a054cf8;
  *(undefined **)(puVar2 + 0x144) = puVar1;
  puVar1 = PTR_FUN_4a054cfc;
  *(undefined **)(puVar2 + 0x564) = PTR_FUN_4a054cfc;
  *(undefined **)(puVar2 + 0x164) = puVar1;
  puVar1 = PTR_FUN_4a054d00;
  *(undefined **)(puVar2 + 0x5c4) = PTR_FUN_4a054d00;
  *(undefined **)(puVar2 + 0x1c4) = puVar1;
  puVar1 = PTR_FUN_4a054d04;
  *(undefined **)(puVar2 + 0x5e4) = PTR_FUN_4a054d04;
  *(undefined **)(puVar2 + 0x1e4) = puVar1;
  puVar1 = PTR_FUN_4a054d08;
  *(undefined **)(puVar2 + 0x644) = PTR_FUN_4a054d08;
  *(undefined **)(puVar2 + 0x244) = puVar1;
  puVar1 = PTR_FUN_4a054d0c;
  *(undefined **)(puVar2 + 0x664) = PTR_FUN_4a054d0c;
  *(undefined **)(puVar2 + 0x264) = puVar1;
  return;
}



// Address: 4a054d10

void FUN_4a054d10(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 auStack_1c [20];
  
  if (*(int *)(PTR_DAT_4a054d58 + 0x10) == 0 && PTR_DAT_4a054d58[1] == '\x01') {
    FUN_4a0a7970(auStack_1c);
    FUN_4a01da78(param_1);
    thunk_FUN_4a161570(0x18);
    puVar3 = (undefined4 *)FUN_4a0a70ec();
    puVar2 = PTR_DAT_4a054d60;
    puVar1 = PTR_PTR_4a054d5c;
    puVar3[3] = param_1;
    puVar3[2] = puVar2;
    *puVar3 = puVar1;
    iVar4 = *(int *)(puVar2 + 4);
    puVar3[1] = iVar4;
    *(undefined4 **)(iVar4 + 8) = puVar3;
    *(undefined4 **)(puVar2 + 4) = puVar3;
    FUN_4a0a79e4(auStack_1c);
  }
  return;
}



// Address: 4a054d64

void FUN_4a054d64(undefined4 param_1)

{
  undefined1 auStack_1c [20];
  
  if (PTR_DAT_4a054d8c[1] != '\0') {
    FUN_4a0a7970(auStack_1c);
    FUN_4a01da78(param_1);
    FUN_4a0a79e4(auStack_1c);
  }
  return;
}



// Address: 4a054f40

void FUN_4a054f40(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_4a040ec4();
  FUN_4a038bcc();
  FUN_4a039210();
  FUN_4a047684();
  *(uint *)PTR_DAT_4a0395dc = *(uint *)PTR_DAT_4a0395dc | 0x20;
  FUN_4a03f0ac();
  puVar2 = PTR_PTR_4a0395e4;
  puVar1 = PTR_DAT_4a0395e0;
  *(undefined **)(PTR_PTR_4a0395e4 + 0x440) = PTR_DAT_4a0395e0;
  *(undefined **)(puVar2 + 0x40) = puVar1;
  puVar1 = PTR_FUN_4a0395e8;
  *(undefined **)(puVar2 + 0x444) = PTR_FUN_4a0395e8;
  *(undefined **)(puVar2 + 0x44) = puVar1;
  puVar1 = PTR_FUN_4a0395ec;
  *(undefined **)(puVar2 + 0x448) = PTR_FUN_4a0395ec;
  *(undefined **)(puVar2 + 0x48) = puVar1;
  puVar1 = PTR_FUN_4a0395f0;
  *(undefined **)(puVar2 + 0x44c) = PTR_FUN_4a0395f0;
  *(undefined **)(puVar2 + 0x4c) = puVar1;
  puVar1 = PTR_FUN_4a0395f4;
  *(undefined **)(puVar2 + 0x454) = PTR_FUN_4a0395f4;
  *(undefined **)(puVar2 + 0x54) = puVar1;
  puVar1 = PTR_FUN_4a0395f8;
  *(undefined **)(puVar2 + 0x458) = PTR_FUN_4a0395f8;
  *(undefined **)(puVar2 + 0x58) = puVar1;
  puVar1 = PTR_FUN_4a0395fc;
  *(undefined **)(puVar2 + 0x464) = PTR_FUN_4a0395fc;
  *(undefined **)(puVar2 + 100) = puVar1;
  puVar1 = PTR_FUN_4a039600;
  *(undefined **)(puVar2 + 0x468) = PTR_FUN_4a039600;
  *(undefined **)(puVar2 + 0x68) = puVar1;
  puVar1 = PTR_FUN_4a039604;
  *(undefined **)(puVar2 + 0x46c) = PTR_FUN_4a039604;
  *(undefined **)(puVar2 + 0x6c) = puVar1;
  puVar1 = PTR_FUN_4a039608;
  *(undefined **)(puVar2 + 0x474) = PTR_FUN_4a039608;
  *(undefined **)(puVar2 + 0x74) = puVar1;
  puVar1 = PTR_FUN_4a03960c;
  *(undefined **)(puVar2 + 0x478) = PTR_FUN_4a03960c;
  *(undefined **)(puVar2 + 0x78) = puVar1;
  puVar1 = PTR_DAT_4a039610;
  *(undefined **)(puVar2 + 0x4c0) = PTR_DAT_4a039610;
  *(undefined **)(puVar2 + 0xc0) = puVar1;
  puVar1 = PTR_FUN_4a039614;
  *(undefined **)(puVar2 + 0x4c4) = PTR_FUN_4a039614;
  *(undefined **)(puVar2 + 0xc4) = puVar1;
  puVar1 = PTR_FUN_4a039618;
  *(undefined **)(puVar2 + 0x4c8) = PTR_FUN_4a039618;
  *(undefined **)(puVar2 + 200) = puVar1;
  puVar1 = PTR_FUN_4a03961c;
  *(undefined **)(puVar2 + 0x4cc) = PTR_FUN_4a03961c;
  *(undefined **)(puVar2 + 0xcc) = puVar1;
  puVar1 = PTR_FUN_4a039620;
  *(undefined **)(puVar2 + 0x4d4) = PTR_FUN_4a039620;
  *(undefined **)(puVar2 + 0xd4) = puVar1;
  puVar1 = PTR_FUN_4a039624;
  *(undefined **)(puVar2 + 0x4d8) = PTR_FUN_4a039624;
  *(undefined **)(puVar2 + 0xd8) = puVar1;
  puVar1 = PTR_FUN_4a039628;
  *(undefined **)(puVar2 + 0x4e4) = PTR_FUN_4a039628;
  *(undefined **)(puVar2 + 0xe4) = puVar1;
  puVar1 = PTR_FUN_4a03962c;
  *(undefined **)(puVar2 + 0x4e8) = PTR_FUN_4a03962c;
  *(undefined **)(puVar2 + 0xe8) = puVar1;
  puVar1 = PTR_FUN_4a039630;
  *(undefined **)(puVar2 + 0x4ec) = PTR_FUN_4a039630;
  *(undefined **)(puVar2 + 0xec) = puVar1;
  puVar1 = PTR_FUN_4a039634;
  *(undefined **)(puVar2 + 0x4f4) = PTR_FUN_4a039634;
  *(undefined **)(puVar2 + 0xf4) = puVar1;
  puVar1 = PTR_FUN_4a039638;
  *(undefined **)(puVar2 + 0x4f8) = PTR_FUN_4a039638;
  *(undefined **)(puVar2 + 0xf8) = puVar1;
  puVar1 = PTR_DAT_4a03963c;
  *(undefined **)(puVar2 + 0x540) = PTR_DAT_4a03963c;
  *(undefined **)(puVar2 + 0x140) = puVar1;
  puVar1 = PTR_FUN_4a039640;
  *(undefined **)(puVar2 + 0x544) = PTR_FUN_4a039640;
  *(undefined **)(puVar2 + 0x144) = puVar1;
  puVar1 = PTR_FUN_4a039644;
  *(undefined **)(puVar2 + 0x548) = PTR_FUN_4a039644;
  *(undefined **)(puVar2 + 0x148) = puVar1;
  puVar1 = PTR_FUN_4a039648;
  *(undefined **)(puVar2 + 0x54c) = PTR_FUN_4a039648;
  *(undefined **)(puVar2 + 0x14c) = puVar1;
  puVar1 = PTR_FUN_4a03964c;
  *(undefined **)(puVar2 + 0x554) = PTR_FUN_4a03964c;
  *(undefined **)(puVar2 + 0x154) = puVar1;
  puVar1 = PTR_FUN_4a039650;
  *(undefined **)(puVar2 + 0x558) = PTR_FUN_4a039650;
  *(undefined **)(puVar2 + 0x158) = puVar1;
  puVar1 = PTR_FUN_4a039654;
  *(undefined **)(puVar2 + 0x564) = PTR_FUN_4a039654;
  *(undefined **)(puVar2 + 0x164) = puVar1;
  puVar1 = PTR_FUN_4a039658;
  *(undefined **)(puVar2 + 0x568) = PTR_FUN_4a039658;
  *(undefined **)(puVar2 + 0x168) = puVar1;
  puVar1 = PTR_FUN_4a03965c;
  *(undefined **)(puVar2 + 0x56c) = PTR_FUN_4a03965c;
  *(undefined **)(puVar2 + 0x16c) = puVar1;
  puVar1 = PTR_FUN_4a039660;
  *(undefined **)(puVar2 + 0x574) = PTR_FUN_4a039660;
  *(undefined **)(puVar2 + 0x174) = puVar1;
  puVar1 = PTR_FUN_4a039664;
  *(undefined **)(puVar2 + 0x578) = PTR_FUN_4a039664;
  *(undefined **)(puVar2 + 0x178) = puVar1;
  puVar1 = PTR_DAT_4a039668;
  *(undefined **)(puVar2 + 0x5c0) = PTR_DAT_4a039668;
  *(undefined **)(puVar2 + 0x1c0) = puVar1;
  puVar1 = PTR_FUN_4a03966c;
  *(undefined **)(puVar2 + 0x5c4) = PTR_FUN_4a03966c;
  *(undefined **)(puVar2 + 0x1c4) = puVar1;
  puVar1 = PTR_FUN_4a039670;
  *(undefined **)(puVar2 + 0x5c8) = PTR_FUN_4a039670;
  *(undefined **)(puVar2 + 0x1c8) = puVar1;
  puVar1 = PTR_FUN_4a039674;
  *(undefined **)(puVar2 + 0x5cc) = PTR_FUN_4a039674;
  *(undefined **)(puVar2 + 0x1cc) = puVar1;
  puVar1 = PTR_FUN_4a039678;
  *(undefined **)(puVar2 + 0x5d4) = PTR_FUN_4a039678;
  *(undefined **)(puVar2 + 0x1d4) = puVar1;
  puVar1 = PTR_FUN_4a03967c;
  *(undefined **)(puVar2 + 0x5d8) = PTR_FUN_4a03967c;
  *(undefined **)(puVar2 + 0x1d8) = puVar1;
  puVar1 = PTR_FUN_4a039680;
  *(undefined **)(puVar2 + 0x5e4) = PTR_FUN_4a039680;
  *(undefined **)(puVar2 + 0x1e4) = puVar1;
  puVar1 = PTR_FUN_4a039684;
  *(undefined **)(puVar2 + 0x5e8) = PTR_FUN_4a039684;
  *(undefined **)(puVar2 + 0x1e8) = puVar1;
  puVar1 = PTR_FUN_4a039688;
  *(undefined **)(puVar2 + 0x5ec) = PTR_FUN_4a039688;
  *(undefined **)(puVar2 + 0x1ec) = puVar1;
  puVar1 = PTR_FUN_4a03968c;
  *(undefined **)(puVar2 + 0x5f4) = PTR_FUN_4a03968c;
  *(undefined **)(puVar2 + 500) = puVar1;
  puVar1 = PTR_FUN_4a039690;
  *(undefined **)(puVar2 + 0x5f8) = PTR_FUN_4a039690;
  *(undefined **)(puVar2 + 0x1f8) = puVar1;
  puVar1 = PTR_DAT_4a039694;
  *(undefined **)(puVar2 + 0x640) = PTR_DAT_4a039694;
  *(undefined **)(puVar2 + 0x240) = puVar1;
  puVar1 = PTR_FUN_4a039698;
  *(undefined **)(puVar2 + 0x644) = PTR_FUN_4a039698;
  *(undefined **)(puVar2 + 0x244) = puVar1;
  puVar1 = PTR_FUN_4a03969c;
  *(undefined **)(puVar2 + 0x648) = PTR_FUN_4a03969c;
  *(undefined **)(puVar2 + 0x248) = puVar1;
  puVar1 = PTR_FUN_4a0396a0;
  *(undefined **)(puVar2 + 0x64c) = PTR_FUN_4a0396a0;
  *(undefined **)(puVar2 + 0x24c) = puVar1;
  puVar1 = PTR_FUN_4a0396a4;
  *(undefined **)(puVar2 + 0x654) = PTR_FUN_4a0396a4;
  *(undefined **)(puVar2 + 0x254) = puVar1;
  puVar1 = PTR_FUN_4a0396a8;
  *(undefined **)(puVar2 + 0x658) = PTR_FUN_4a0396a8;
  *(undefined **)(puVar2 + 600) = puVar1;
  puVar1 = PTR_FUN_4a0396ac;
  *(undefined **)(puVar2 + 0x664) = PTR_FUN_4a0396ac;
  *(undefined **)(puVar2 + 0x264) = puVar1;
  puVar1 = PTR_FUN_4a0396b0;
  *(undefined **)(puVar2 + 0x668) = PTR_FUN_4a0396b0;
  *(undefined **)(puVar2 + 0x268) = puVar1;
  puVar1 = PTR_FUN_4a0396b4;
  *(undefined **)(puVar2 + 0x66c) = PTR_FUN_4a0396b4;
  *(undefined **)(puVar2 + 0x26c) = puVar1;
  puVar1 = PTR_FUN_4a0396b8;
  *(undefined **)(puVar2 + 0x674) = PTR_FUN_4a0396b8;
  *(undefined **)(puVar2 + 0x274) = puVar1;
  puVar1 = PTR_FUN_4a0396bc;
  *(undefined **)(puVar2 + 0x678) = PTR_FUN_4a0396bc;
  *(undefined **)(puVar2 + 0x278) = puVar1;
  FUN_4a04c6d0();
  FUN_4a050aec();
  if (PTR_LAB_4a0396c0[0x45] != '\0') {
    FUN_4a0536c8();
    FUN_4a054c64();
  }
  FUN_4a03f000();
  puVar2 = PTR_PTR_4a0478b0;
  puVar1 = PTR_FUN_4a0478ac;
  *(undefined **)(PTR_PTR_4a0478b0 + 0x45c) = PTR_FUN_4a0478ac;
  *(undefined **)(puVar2 + 0x5c) = puVar1;
  puVar1 = PTR_FUN_4a0478b4;
  *(undefined **)(puVar2 + 0x47c) = PTR_FUN_4a0478b4;
  *(undefined **)(puVar2 + 0x7c) = puVar1;
  puVar1 = PTR_FUN_4a0478b8;
  *(undefined **)(puVar2 + 0x4dc) = PTR_FUN_4a0478b8;
  *(undefined **)(puVar2 + 0xdc) = puVar1;
  puVar1 = PTR_FUN_4a0478bc;
  *(undefined **)(puVar2 + 0x4fc) = PTR_FUN_4a0478bc;
  *(undefined **)(puVar2 + 0xfc) = puVar1;
  puVar1 = PTR_FUN_4a0478c0;
  *(undefined **)(puVar2 + 0x55c) = PTR_FUN_4a0478c0;
  *(undefined **)(puVar2 + 0x15c) = puVar1;
  puVar1 = PTR_FUN_4a0478c4;
  *(undefined **)(puVar2 + 0x57c) = PTR_FUN_4a0478c4;
  *(undefined **)(puVar2 + 0x17c) = puVar1;
  puVar1 = PTR_FUN_4a0478c8;
  *(undefined **)(puVar2 + 0x5dc) = PTR_FUN_4a0478c8;
  *(undefined **)(puVar2 + 0x1dc) = puVar1;
  puVar1 = PTR_FUN_4a0478cc;
  *(undefined **)(puVar2 + 0x5fc) = PTR_FUN_4a0478cc;
  *(undefined **)(puVar2 + 0x1fc) = puVar1;
  puVar1 = PTR_FUN_4a0478d0;
  *(undefined **)(puVar2 + 0x65c) = PTR_FUN_4a0478d0;
  *(undefined **)(puVar2 + 0x25c) = puVar1;
  puVar1 = PTR_FUN_4a0478d4;
  *(undefined **)(puVar2 + 0x67c) = PTR_FUN_4a0478d4;
  *(undefined **)(puVar2 + 0x27c) = puVar1;
  return;
}



// Address: 4a054f5c

void FUN_4a054f5c(void)

{
  short sVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (*(code **)PTR_DAT_4a054f7c != (code *)0x0) {
    (**(code **)PTR_DAT_4a054f7c)();
  }
  puVar2 = PTR_LAB_4a09e2b0;
  puVar3 = *(undefined4 **)PTR_DAT_4a04d7ec;
  *(undefined4 *)(PTR_LAB_4a09e2b0 + 0x44) = *(undefined4 *)(PTR_LAB_4a09e2b0 + 0x54);
  *(undefined4 *)(puVar2 + 0x48) = *(undefined4 *)(puVar2 + 0x58);
  *(undefined4 *)(puVar2 + 0x4c) = *(undefined4 *)(puVar2 + 0x5c);
  *(undefined4 *)(puVar2 + 0x50) = *(undefined4 *)(puVar2 + 0x60);
  *(undefined4 *)(puVar2 + 0x54) = 0;
  *(undefined4 *)(puVar2 + 0x58) = 0;
  *(undefined4 *)(puVar2 + 0x5c) = 0;
  *(undefined4 *)(puVar2 + 0x60) = 0;
  if (*puVar2 != '\0') {
    FUN_4a09ddac(puVar3,4);
    FUN_4a09ddac(puVar3,3);
    FUN_4a09ddac(puVar3,2);
    FUN_4a09ddac(puVar3,1);
    FUN_4a09ddac(puVar3,0);
  }
  puVar3[5] = 0;
  piVar5 = (int *)*puVar3;
  iVar4 = *piVar5;
  iVar6 = puVar3[2] + -1;
  if (iVar6 < 0) {
    return;
  }
  sVar1 = *(short *)(iVar4 + 10);
  do {
    piVar5 = piVar5 + 1;
    iVar6 = iVar6 + -1;
    if (sVar1 < 1) {
      if (sVar1 != -1) {
        *(undefined2 *)(iVar4 + 10) = 0xffff;
        *(undefined1 *)(iVar4 + 0x13) = 0;
      }
      if (*(int *)(iVar4 + 4) == 0) {
        iVar4 = *piVar5;
        if (iVar6 < 0) {
          return;
        }
      }
      else {
        iVar7 = puVar3[5];
        iVar8 = *(int *)(puVar2 + 0x34);
        puVar3[5] = iVar7 + 1;
        *(int *)(iVar8 + iVar7 * 4) = iVar4;
        iVar4 = *piVar5;
        if (iVar6 < 0) {
          return;
        }
      }
    }
    else {
      *(undefined2 *)(iVar4 + 10) = 0;
      *(undefined1 *)(iVar4 + 0x13) = 0;
      iVar4 = *piVar5;
      if (iVar6 < 0) {
        return;
      }
    }
    sVar1 = *(short *)(iVar4 + 10);
  } while( true );
}



// Address: 4a054f80

undefined4 FUN_4a054f80(int param_1)

{
  undefined *puVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  
  puVar1 = PTR_DAT_4a054ff0;
  piVar3 = *(int **)PTR_DAT_4a054ff0;
  piVar4 = piVar3;
  while( true ) {
    if (piVar4 == piVar3 + *(int *)(PTR_DAT_4a054ff0 + 4) * 2) {
      return 0;
    }
    if (*piVar4 == param_1) break;
    piVar4 = piVar4 + 2;
  }
  for (uVar2 = (int)piVar4 - (int)piVar3 >> 3; uVar2 < *(int *)(puVar1 + 4) - 1U; uVar2 = uVar2 + 1)
  {
    puVar5 = (undefined4 *)(*(int *)puVar1 + uVar2 * 8);
    puVar6 = (undefined4 *)(*(int *)puVar1 + (uVar2 + 1) * 8);
    uVar7 = puVar6[1];
    *puVar5 = *puVar6;
    puVar5[1] = uVar7;
  }
  FUN_4a16e6aa(PTR_DAT_4a054ff0,*(int *)(puVar1 + 4) + -1);
  if (*(int *)(puVar1 + 4) == 0) {
    FUN_4a16e6aa(PTR_DAT_4a054ff0,0);
    FUN_4a16e662(PTR_DAT_4a054ff0,0);
  }
  return 1;
}



// Address: 4a054ff4

void FUN_4a054ff4(void)

{
  undefined *puVar1;
  int *piVar2;
  
  puVar1 = PTR_DAT_4a055034;
  FUN_4a09c25c(*(undefined4 *)PTR_DAT_4a055034);
  FUN_4a09d94c(*(undefined4 *)(puVar1 + 4));
  piVar2 = *(int **)(puVar1 + 4);
  if (piVar2 != (int *)0x0) {
    FUN_4a1652c6(piVar2,*(undefined4 *)(*piVar2 + 4));
  }
  piVar2 = *(int **)puVar1;
  if (piVar2 != (int *)0x0) {
    FUN_4a1652c6(piVar2,*(undefined4 *)(*piVar2 + 4));
  }
  *(undefined4 *)(puVar1 + 8) = 0;
  return;
}



// Address: 4a054ffc

void FUN_4a054ffc(void)

{
  undefined *puVar1;
  int *piVar2;
  
  puVar1 = PTR_DAT_4a055034;
  FUN_4a09c25c(*(undefined4 *)PTR_DAT_4a055034);
  FUN_4a09d94c(*(undefined4 *)(puVar1 + 4));
  piVar2 = *(int **)(puVar1 + 4);
  if (piVar2 != (int *)0x0) {
    FUN_4a1652c6(piVar2,*(undefined4 *)(*piVar2 + 4));
  }
  piVar2 = *(int **)puVar1;
  if (piVar2 != (int *)0x0) {
    FUN_4a1652c6(piVar2,*(undefined4 *)(*piVar2 + 4));
  }
  *(undefined4 *)(puVar1 + 8) = 0;
  return;
}



// Address: 4a055038

void FUN_4a055038(void)

{
  return;
}



// Address: 4a05503c

void FUN_4a05503c(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_4a055068;
  if (*(int *)(PTR_DAT_4a055064 + 0x10) == 0 && PTR_DAT_4a055064[1] == '\x01') {
    do {
      puVar1 = *(undefined **)(puVar1 + 8);
      if (puVar1 == PTR_DAT_4a055068) {
        return;
      }
    } while (*(int *)(puVar1 + 0xc) != param_1);
    *(undefined4 *)(puVar1 + 0xc) = param_2;
  }
  return;
}



// Address: 4a05506c

void FUN_4a05506c(int param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_24 [20];
  
  if (*(int *)(PTR_DAT_4a0550f0 + 0x10) == 0 && PTR_DAT_4a0550f0[1] == '\x01') {
    FUN_4a0a7970(auStack_24);
    FUN_4a01da78(param_1);
    thunk_FUN_4a161570(0x18);
    puVar2 = (undefined4 *)FUN_4a0a70ec();
    puVar1 = PTR_PTR_4a0550f4;
    puVar2[3] = param_1;
    *puVar2 = puVar1;
    puVar2[5] = *(undefined4 *)PTR_DAT_4a0550f8;
    if ((*(uint *)(param_1 + 0x34) & DAT_4a0550fc) == 0) {
      thunk_FUN_4a161570(0x24);
      uVar3 = thunk_FUN_4a0ecbc4();
      puVar2[4] = uVar3;
      thunk_FUN_4a0ecc0c(uVar3,param_1 + 0x10);
      uVar3 = 3;
      if (*(int *)(param_1 + 0x34) << 0x13 < 0) {
        uVar3 = 2;
      }
      thunk_FUN_4a0ec750(puVar2[4],uVar3);
    }
    else {
      puVar2[4] = 0;
    }
    puVar1 = PTR_DAT_4a055100;
    puVar2[2] = PTR_DAT_4a055100;
    iVar4 = *(int *)(puVar1 + 4);
    puVar2[1] = iVar4;
    *(undefined4 **)(iVar4 + 8) = puVar2;
    *(undefined4 **)(puVar1 + 4) = puVar2;
    FUN_4a0a79e4(auStack_24);
  }
  return;
}



// Address: 4a055104

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a055104(int param_1)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  
  iVar4 = FUN_4a053774();
  puVar3 = PTR_DAT_4a0557e0;
  if (((iVar4 == 0) ||
      (uVar10 = (*(uint *)(param_1 + 0x10) & 0x1c00000) >> 0x16, uVar10 != 1 && uVar10 != 6)) ||
     ((*(int *)(*(int *)PTR_DAT_4a0557e0 + 0xc) == 3 && (*(int *)(param_1 + 0x54) != 0)))) {
    iVar5 = 0;
  }
  else {
    iVar5 = 1;
  }
  FUN_4a03d0e4(0,param_1,*(undefined4 *)(param_1 + iVar5 * 4 + 0x2c));
  iVar5 = FUN_4a03d0e4(1,param_1);
  if (iVar5 == 0) goto switchD_4a0551cc_default;
  if (*(int *)(*(int *)puVar3 + 0xc) == 2) {
    thunk_FUN_4a14fcc4(0x84c1);
    switch((*(uint *)(param_1 + 0x10) & 0x380000) >> 0x13) {
    case 0:
      thunk_FUN_4a150aa8(0x2300,0x2200,0x2100);
      break;
    case 1:
      thunk_FUN_4a150aa8(0x2300,0x2200,0x2101);
      break;
    case 2:
      thunk_FUN_4a150aa8(0x2300,0x2200,0x104);
      break;
    case 3:
      thunk_FUN_4a150aa8(0x2300,0x2200,0x1e01);
      break;
    case 4:
switchD_4a0551cc_caseD_4:
      thunk_FUN_4a150aa8(0x2300,0x2200,0xbe2);
      break;
    case 5:
    case 6:
      iVar7 = thunk_FUN_4a0083c0(0x20);
      if (iVar7 == 0) goto switchD_4a0551cc_caseD_4;
      thunk_FUN_4a150aa8(0x2300,0x2200,0x8570);
      thunk_FUN_4a150aa8(0x2300,0x8573);
    }
switchD_4a0551cc_default:
    if (*(int *)(*(int *)puVar3 + 0xc) != 2) goto LAB_4a0552b8;
  }
  else {
LAB_4a0552b8:
    uVar9 = 0;
    if (iVar5 != 0) {
      uVar9 = *(undefined4 *)(param_1 + 0x34);
    }
    iVar5 = FUN_4a03d0e4(2,param_1,uVar9);
    uVar9 = 0;
    if (iVar5 != 0) {
      uVar9 = *(undefined4 *)(param_1 + 0x38);
    }
    FUN_4a03d0e4(3,param_1,uVar9);
  }
  thunk_FUN_4a14fcc4(0x84c0);
  if (*(int *)(*(int *)puVar3 + 0xc) == 2) {
    if ((*(uint *)(param_1 + 0x10) & 4) == 0) {
      uVar9 = 0x1d01;
    }
    else {
      uVar9 = 0x1d00;
    }
    thunk_FUN_4a1509f4(uVar9);
  }
  bVar2 = false;
  uVar10 = *(uint *)(PTR_DAT_4a0557e4 + 0x10);
  if ((*(uint *)(param_1 + 0x10) & 0x1c00000) == 0x1400000) {
    thunk_FUN_4a150140(0xbe2);
    uVar8 = 0x300;
    uVar9 = 0;
LAB_4a05546c:
    thunk_FUN_4a14fdb8(uVar9,uVar8);
    goto switchD_4a0553a8_default;
  }
  uVar1 = (*(uint *)(param_1 + 0x10) & 0x70000) >> 0x10;
  if (uVar1 == 5) {
    iVar5 = *(int *)(param_1 + 0x2c);
    uVar6 = 0;
    if (iVar5 != 0) {
      uVar6 = *(uint *)(iVar5 + 0x34);
    }
    if (iVar5 == 0 || (uVar6 & 8) == 0) goto LAB_4a0553a4;
    thunk_FUN_4a1500f8(0xbe2);
    if (*(int *)(*(int *)puVar3 + 0xc) == 2) {
      thunk_FUN_4a150140(0xbc0);
      thunk_FUN_4a14fcec(0x204,0xc000);
    }
    bVar2 = true;
    goto switchD_4a0553a8_default;
  }
LAB_4a0553a4:
  switch(uVar1) {
  case 0:
  case 5:
    thunk_FUN_4a1500f8(0xbe2);
    break;
  case 1:
    thunk_FUN_4a14fdb8(0x302);
    thunk_FUN_4a150140(0xbe2);
    goto LAB_4a055408;
  case 2:
    thunk_FUN_4a150140(0xbe2);
    thunk_FUN_4a14fdb8(0x302,1);
LAB_4a055408:
    uVar10 = 0;
    break;
  case 3:
    thunk_FUN_4a150140(0xbe2);
    thunk_FUN_4a14fdb8(0,0x301);
    uVar10 = 0;
    break;
  case 4:
    thunk_FUN_4a150140(0xbe2);
    if (*(int *)(*(int *)puVar3 + 0xc) == 2) {
      thunk_FUN_4a14fcec(0x204,0);
      thunk_FUN_4a150140(0xbc0);
    }
    uVar8 = 0x303;
    uVar10 = 0;
    uVar9 = 0x302;
    goto LAB_4a05546c;
  }
switchD_4a0553a8_default:
  if (*(int *)(*(int *)puVar3 + 0xc) != 2) goto switchD_4a0554b4_default;
  uVar1 = (*(uint *)(param_1 + 0x10) & 0x1e000000) >> 0x19;
  iVar5 = (int)((longlong)(int)((uint)*(byte *)(param_1 + 0x17) << 0x10) * (longlong)DAT_4a0557e8 +
                ((ulonglong)*(byte *)(param_1 + 0x17) << 0x30) >> 0x20);
  iVar5 = (iVar5 >> 7) - (iVar5 >> 0x1f);
  if (bVar2 && uVar1 == 0) goto switchD_4a0554b4_default;
  switch(uVar1) {
  case 0:
    thunk_FUN_4a1500f8(0xbc0);
    goto switchD_4a0554b4_default;
  case 1:
    thunk_FUN_4a150140(0xbc0);
    iVar5 = 0;
    uVar9 = 0x200;
    break;
  case 2:
    thunk_FUN_4a150140(0xbc0);
    uVar9 = 0x201;
    break;
  case 3:
    thunk_FUN_4a150140(0xbc0);
    uVar9 = 0x202;
    break;
  case 4:
    thunk_FUN_4a150140(0xbc0);
    uVar9 = 0x203;
    break;
  case 5:
    thunk_FUN_4a150140(0xbc0);
    uVar9 = 0x204;
    break;
  case 6:
    thunk_FUN_4a150140(0xbc0);
    uVar9 = 0x205;
    break;
  case 7:
    thunk_FUN_4a150140(0xbc0);
    uVar9 = 0x206;
    break;
  case 8:
    thunk_FUN_4a150140(0xbc0);
    iVar5 = 0;
    uVar9 = 0x207;
    break;
  default:
    goto switchD_4a0554b4_default;
  }
  thunk_FUN_4a14fcec(uVar9,iVar5);
switchD_4a0554b4_default:
  iVar5 = FUN_4a0698c8(param_1);
  if ((iVar5 == 2) || ((**(uint **)puVar3 & 0x100) == 0)) {
    thunk_FUN_4a1500f8(0xb44);
  }
  else {
    thunk_FUN_4a150140(0xb44);
    iVar7 = FUN_4a0698c8(param_1);
    iVar5 = 0x405;
    if (iVar7 == 0) {
      iVar5 = 0x404;
    }
    iVar7 = iVar5;
    if (((*(uint *)(*(int *)puVar3 + 4) & 0x200) != 0) && (iVar7 = 0x404, iVar5 == 0x404)) {
      iVar7 = 0x405;
    }
    thunk_FUN_4a14ffe8(iVar7);
  }
  if ((*(uint *)(param_1 + 0x10) & 0x20000000) != 0) {
    uVar10 = 0;
  }
  if (*(int *)(*(int *)puVar3 + 0xc) == 2) {
    iVar5 = thunk_FUN_4a0083c0(0x20);
    if ((iVar4 == 0) ||
       (uVar1 = (*(uint *)(param_1 + 0x10) & 0x1c00000) >> 0x16, uVar1 != 1 && uVar1 != 6)) {
      if (*(int *)(param_1 + 0x2c) != 0 && iVar5 != 0) {
        if ((*(uint *)(param_1 + 0x10) & 0x1c00000) == 0x1000000) {
          thunk_FUN_4a150aa8(0x2300,0x2200,0x8570);
          thunk_FUN_4a150aa8(0x2300,0x8571,0x1e01);
          thunk_FUN_4a150aa8(0x2300,0x8580,0x8577);
        }
        else {
          thunk_FUN_4a150aa8(0x2300,0x8571,0x2100);
          thunk_FUN_4a150aa8(0x2300,0x8580,0x1702);
        }
        thunk_FUN_4a150aa8(0x2300,0x8581,0x8578);
      }
    }
    else {
      thunk_FUN_4a14fcc4(0x84c0);
      if (iVar5 == 0) {
        return;
      }
      thunk_FUN_4a150aa8(0x2300,0x2200,0x8570);
      thunk_FUN_4a150aa8(0x2300,0x8571,0x86ae);
      thunk_FUN_4a150aa8(0x2300,0x8580,0x1702);
      thunk_FUN_4a150aa8(0x2300,0x8581,0x8578);
      thunk_FUN_4a150aa8(0x2300,0x8573,0x10000);
      thunk_FUN_4a14fcc4(0x84c1);
      thunk_FUN_4a150aa8(0x2300,0x8571,0x2100);
      thunk_FUN_4a150aa8(0x2300,0x8580,0x1702);
      thunk_FUN_4a150aa8(0x2300,0x8581,0x8578);
      thunk_FUN_4a14fcc4(0x84c0);
    }
  }
  FUN_4a154f38(uVar10 & 0xff);
  return;
}



// Address: 4a055800

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a055800(short *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  undefined *puVar3;
  ushort uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  puVar3 = PTR_DAT_4a055acc;
  iVar11 = *(int *)PTR_DAT_4a055acc;
  *(undefined4 *)(iVar11 + 0x414) = 2;
  *(undefined4 *)(iVar11 + 0x41c) = 0;
  *(int *)(iVar11 + 0x454) = param_2;
  *(short **)(iVar11 + 0x458) = param_1;
  iVar5 = FUN_4a03605c(param_2);
  puVar6 = *(uint **)puVar3;
  if ((*puVar6 & 0x80000000) != 0) {
    iVar7 = FUN_4a0015f0((puVar6[0xc0] + (int)puVar6[0xc2] / 2) * 0x2000);
    iVar8 = FUN_4a0015f0((puVar6[0xc1] + (int)puVar6[0xc3] / 2) * 0x2000);
    if (param_2 == 0) {
      return;
    }
    do {
      param_2 = param_2 + -1;
      sVar1 = param_1[1];
      sVar2 = param_1[2];
      iVar12 = *(int *)(iVar11 + 0x264);
      iVar10 = *(int *)(iVar11 + 0x260);
      *(int *)(iVar5 + 4) = (int)*param_1 + *(int *)(iVar11 + 0x25c);
      *(int *)(iVar5 + 8) = sVar1 + iVar10;
      *(int *)(iVar5 + 0xc) = sVar2 + iVar12;
      iVar12 = FUN_4a0015f0(*(int *)(iVar5 + 4) << 0xd,puVar6[0xc2]);
      iVar12 = iVar12 - iVar7;
      *(int *)(iVar5 + 4) = iVar12;
      iVar9 = FUN_4a0015f0(*(int *)(iVar5 + 8) << 0xd,puVar6[0xc3]);
      iVar9 = iVar9 - iVar8;
      *(int *)(iVar5 + 8) = iVar9;
      iVar10 = *(int *)(iVar11 + 0x32c) * *(int *)(iVar5 + 0xc) >> 6;
      uVar4 = 0;
      if (0x1000 < iVar12) {
        uVar4 = 4;
      }
      *(int *)(iVar5 + 0xc) = iVar10;
      if ((iVar12 < 0x1001) && (iVar12 != -0x1000 && 0xfff < -iVar12)) {
        uVar4 = 8;
      }
      if (iVar9 < 0x1001) {
        if (iVar9 != -0x1000 && 0xfff < -iVar9) {
          uVar4 = uVar4 | 0x20;
        }
      }
      else {
        uVar4 = uVar4 | 0x10;
      }
      if (iVar10 < *(int *)(*(int *)PTR_DAT_4a055acc + 0x2d0) * 0x40) {
        uVar4 = uVar4 | 1;
      }
      else if (*(int *)(*(int *)PTR_DAT_4a055acc + 0x2d4) * 0x40 < iVar10) {
        uVar4 = uVar4 | 2;
      }
      *(ushort *)(iVar5 + 0x10) = uVar4 | 0x400;
      *(undefined2 *)(iVar5 + 0x12) = *(undefined2 *)(iVar11 + 0x574);
      *(ushort *)(iVar5 + 0x10) = uVar4 | 0x480;
      param_1 = param_1 + 3;
      iVar5 = iVar5 + 0x14;
    } while (param_2 != 0);
    return;
  }
  if (param_2 == 0) {
    return;
  }
  do {
    param_2 = param_2 + -1;
    sVar1 = param_1[1];
    sVar2 = param_1[2];
    iVar7 = *(int *)(iVar11 + 0x260);
    iVar10 = *(int *)(iVar11 + 0x264);
    *(int *)(iVar5 + 4) = (int)*param_1 + *(int *)(iVar11 + 0x25c);
    iVar10 = iVar10 + sVar2;
    *(int *)(iVar5 + 8) = iVar7 + sVar1;
    *(int *)(iVar5 + 0xc) = iVar10;
    iVar7 = *(int *)(iVar11 + 0x330) * *(int *)(iVar5 + 4) >> 6;
    *(int *)(iVar5 + 4) = iVar7;
    iVar8 = *(int *)(iVar11 + 0x334) * *(int *)(iVar5 + 8) >> 6;
    *(int *)(iVar5 + 8) = iVar8;
    iVar10 = iVar10 * *(int *)(iVar11 + 0x32c) >> 6;
    uVar4 = 0;
    if (iVar10 < iVar7) {
      uVar4 = 4;
    }
    if (-iVar10 != iVar7 && iVar10 <= -iVar7) {
      uVar4 = uVar4 | 8;
    }
    *(int *)(iVar5 + 0xc) = iVar10;
    iVar7 = *(int *)puVar3;
    if (iVar10 < iVar8) {
      uVar4 = uVar4 | 0x10;
    }
    if (-iVar10 != iVar8 && iVar10 <= -iVar8) {
      uVar4 = uVar4 | 0x20;
    }
    if (iVar10 < *(int *)(iVar7 + 0x2d0) * 0x40) {
      uVar4 = uVar4 | 1;
    }
    else if (*(int *)(iVar7 + 0x2d4) * 0x40 < iVar10) {
      uVar4 = uVar4 | 2;
    }
    *(ushort *)(iVar5 + 0x10) = uVar4;
    *(undefined2 *)(iVar5 + 0x12) = *(undefined2 *)(iVar11 + 0x574);
    *(ushort *)(iVar5 + 0x10) = uVar4 | 0x80;
    param_1 = param_1 + 3;
    iVar5 = iVar5 + 0x14;
  } while (param_2 != 0);
  return;
}



// Address: 4a055ad0

undefined8 FUN_4a055ad0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  int local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  local_20 = param_2;
  local_1c = param_3;
  uStack_18 = param_4;
  uVar9 = host_s3eTimerGetMs_thumb();
  puVar4 = PTR_DAT_4a055b80;
  uVar7 = (uint)uVar9;
  if (param_1 != 0) {
    uVar6 = uVar7 - *(uint *)(PTR_DAT_4a055b80 + 0x20);
    uVar1 = (int)((ulonglong)uVar9 >> 0x20) - *(int *)(PTR_DAT_4a055b80 + 0x24);
    uVar2 = (uint)(uVar7 < *(uint *)(PTR_DAT_4a055b80 + 0x20));
    uVar7 = uVar6 - 1000;
    if (uVar1 != uVar2 || uVar1 - uVar2 < (uint)(999 < uVar6)) {
      FUN_4a1652c6(3,*(undefined4 *)(PTR_DAT_4a055b84 + 0x20));
      puVar5 = PTR_DAT_4a055b88;
      iVar8 = *(int *)PTR_DAT_4a055b88;
      sVar3 = (short)(*(int *)(iVar8 + 0x348) >> 4);
      local_1c = CONCAT22(sVar3,(short)*(undefined4 *)(iVar8 + 0x344));
      local_20 = (uint)(ushort)((short)*(undefined4 *)(iVar8 + 0x348) - sVar3) << 0x10;
      iVar8 = FUN_4a0456a8();
      *(undefined1 *)(iVar8 + 0x20) = 0x40;
      *(undefined1 *)(iVar8 + 0x21) = 0x40;
      *(undefined1 *)(iVar8 + 0x22) = 0x40;
      *(undefined1 *)(iVar8 + 0x23) = 0xff;
      FUN_4a0361cc();
      thunk_FUN_4a048e6c(&local_20,&local_1c);
      iVar8 = *(int *)puVar5;
      sVar3 = (short)(*(int *)(iVar8 + 0x348) >> 4);
      local_1c = CONCAT22(sVar3,(short)(param_1 * *(int *)(iVar8 + 0x344) >> 0xc));
      local_20 = (uint)(ushort)((short)*(undefined4 *)(iVar8 + 0x348) - sVar3) << 0x10;
      FUN_4a0456a8();
      FUN_4a0361cc();
      thunk_FUN_4a048e6c(&local_20,&local_1c);
      thunk_FUN_4a05a618();
      thunk_FUN_4a0363dc();
      uVar9 = host_s3eTimerGetMs_thumb();
      uVar7 = (uint)uVar9;
      *(undefined8 *)(puVar4 + 0x20) = uVar9;
    }
  }
  return CONCAT44(local_20,uVar7);
}



// Address: 4a055b90

void FUN_4a055b90(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)PTR_DAT_4a055b9c;
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a055bf0

void FUN_4a055bf0(short *param_1,int param_2)

{
  undefined2 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ushort uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint *puVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  int iVar29;
  int iVar30;
  undefined4 uVar31;
  int iVar32;
  int iVar33;
  undefined4 uVar34;
  int iVar35;
  undefined4 uVar36;
  int iVar37;
  undefined4 uVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  
  puVar2 = PTR_DAT_4a055fdc;
  iVar33 = *(int *)PTR_DAT_4a055fdc;
  *(undefined4 *)(iVar33 + 0x414) = 0;
  *(short **)(iVar33 + 0x458) = param_1;
  *(int *)(iVar33 + 0x454) = param_2;
  *(undefined4 *)(iVar33 + 0x41c) = 0;
  iVar3 = FUN_4a03605c(param_2);
  if ((**(uint **)puVar2 & 0x40000000) == 0) {
    iVar40 = *(int *)(iVar33 + 0xd0);
    iVar17 = *(int *)(iVar33 + 0xd4);
    iVar23 = *(int *)(iVar33 + 0xd8);
    iVar29 = *(int *)(iVar33 + 0xdc);
    iVar32 = *(int *)(iVar33 + 0xe0);
    iVar35 = *(int *)(iVar33 + 0xe4);
    iVar37 = *(int *)(iVar33 + 0xe8);
    iVar39 = *(int *)(iVar33 + 0xec);
    iVar41 = *(int *)(iVar33 + 0xf0);
    iVar18 = *(int *)(iVar33 + 0xf4);
    iVar24 = *(int *)(iVar33 + 0xf8);
    iVar30 = *(int *)(iVar33 + 0xfc);
    iVar20 = iVar3;
    for (; param_2 != 0; param_2 = param_2 + -1) {
      iVar19 = (int)param_1[1];
      iVar14 = (int)*param_1;
      iVar25 = (int)param_1[2];
      *(int *)(iVar20 + 4) =
           iVar18 + (iVar25 * (iVar37 >> 3) + iVar19 * (iVar29 >> 3) + iVar14 * (iVar40 >> 3) >> 9);
      *(int *)(iVar20 + 8) =
           iVar24 + ((iVar39 >> 3) * iVar25 + (iVar32 >> 3) * iVar19 + iVar14 * (iVar17 >> 3) >> 9);
      param_1 = param_1 + 3;
      *(int *)(iVar20 + 0xc) =
           iVar30 + ((iVar41 >> 3) * iVar25 + (iVar35 >> 3) * iVar19 + (iVar23 >> 3) * iVar14 >> 9);
      iVar20 = iVar20 + 0x14;
    }
  }
  else {
    uVar12 = *(undefined4 *)(iVar33 + 0x1f0);
    uVar15 = *(undefined4 *)(iVar33 + 500);
    uVar21 = *(undefined4 *)(iVar33 + 0x1f8);
    uVar27 = *(undefined4 *)(iVar33 + 0x1fc);
    uVar31 = *(undefined4 *)(iVar33 + 0x200);
    uVar34 = *(undefined4 *)(iVar33 + 0x204);
    uVar36 = *(undefined4 *)(iVar33 + 0x208);
    uVar38 = *(undefined4 *)(iVar33 + 0x20c);
    uVar13 = *(undefined4 *)(iVar33 + 0x210);
    uVar16 = *(undefined4 *)(iVar33 + 0x214);
    uVar22 = *(undefined4 *)(iVar33 + 0x218);
    uVar28 = *(undefined4 *)(iVar33 + 0x21c);
    iVar20 = iVar3;
    for (; param_2 != 0; param_2 = param_2 + -1) {
      uVar4 = FUN_4a171fac((int)param_1[2]);
      uVar5 = FUN_4a17211c(uVar4,uVar36);
      uVar6 = FUN_4a171fac((int)param_1[1]);
      uVar7 = FUN_4a17211c(uVar6,uVar27);
      uVar8 = FUN_4a171fac((int)*param_1);
      uVar9 = FUN_4a17211c(uVar8,uVar12);
      uVar7 = FUN_4a171a94(uVar9,uVar7);
      uVar5 = FUN_4a171a94(uVar7,uVar5);
      FUN_4a171a94(uVar5,uVar16);
      uVar5 = FUN_4a171e1c();
      uVar7 = FUN_4a17211c(uVar4,uVar38);
      uVar9 = FUN_4a17211c(uVar6,uVar31);
      uVar10 = FUN_4a17211c(uVar8,uVar15);
      uVar9 = FUN_4a171a94(uVar10,uVar9);
      uVar7 = FUN_4a171a94(uVar9,uVar7);
      FUN_4a171a94(uVar7,uVar22);
      uVar7 = FUN_4a171e1c();
      uVar4 = FUN_4a17211c(uVar4,uVar13);
      uVar6 = FUN_4a17211c(uVar6,uVar34);
      uVar8 = FUN_4a17211c(uVar8,uVar21);
      uVar6 = FUN_4a171a94(uVar8,uVar6);
      uVar4 = FUN_4a171a94(uVar6,uVar4);
      FUN_4a171a94(uVar4,uVar28);
      uVar4 = FUN_4a171e1c();
      *(undefined4 *)(iVar20 + 4) = uVar5;
      *(undefined4 *)(iVar20 + 8) = uVar7;
      *(undefined4 *)(iVar20 + 0xc) = uVar4;
      iVar20 = iVar20 + 0x14;
      param_1 = param_1 + 3;
    }
  }
  uVar1 = *(undefined2 *)(iVar33 + 0x574);
  iVar33 = *(int *)(iVar33 + 0x454);
  puVar26 = *(uint **)PTR_DAT_4a055fdc;
  if ((*puVar26 & 0x80000000) != 0) {
    if (iVar33 != 0) {
      do {
        iVar33 = iVar33 + -1;
        iVar20 = *(int *)(iVar3 + 4);
        uVar11 = 0;
        if (iVar20 < 0x1001) {
          if (iVar20 != -0x1000 && 0xfff < -iVar20) {
            uVar11 = 8;
          }
        }
        else {
          uVar11 = 4;
        }
        iVar20 = *(int *)(iVar3 + 8);
        if (iVar20 < 0x1001) {
          if (iVar20 != -0x1000 && 0xfff < -iVar20) {
            uVar11 = uVar11 | 0x20;
          }
        }
        else {
          uVar11 = uVar11 | 0x10;
        }
        if (*(int *)(iVar3 + 0xc) < (int)(puVar26[0xb4] * 0x40)) {
          uVar11 = uVar11 | 1;
        }
        else if ((int)(puVar26[0xb5] * 0x40) < *(int *)(iVar3 + 0xc)) {
          uVar11 = uVar11 | 2;
        }
        *(ushort *)(iVar3 + 0x10) = uVar11 | 0x480;
        *(undefined2 *)(iVar3 + 0x12) = uVar1;
        iVar3 = iVar3 + 0x14;
      } while (iVar33 != 0);
      return;
    }
    return;
  }
  if (iVar33 != 0) {
    do {
      iVar33 = iVar33 + -1;
      iVar40 = *(int *)(iVar3 + 4);
      iVar20 = *(int *)(iVar3 + 0xc);
      uVar11 = 0;
      if (iVar20 < iVar40) {
        uVar11 = 4;
      }
      iVar41 = *(int *)(iVar3 + 8);
      if (-iVar20 != iVar40 && iVar20 <= -iVar40) {
        uVar11 = uVar11 | 8;
      }
      if (iVar20 < iVar41) {
        uVar11 = uVar11 | 0x10;
      }
      if (-iVar20 != iVar41 && iVar20 <= -iVar41) {
        uVar11 = uVar11 | 0x20;
      }
      if (iVar20 < (int)(puVar26[0xb4] * 0x40)) {
        uVar11 = uVar11 | 1;
      }
      else if ((int)(puVar26[0xb5] * 0x40) < iVar20) {
        uVar11 = uVar11 | 2;
      }
      *(undefined2 *)(iVar3 + 0x12) = uVar1;
      *(ushort *)(iVar3 + 0x10) = uVar11 | 0x80;
      iVar3 = iVar3 + 0x14;
    } while (iVar33 != 0);
    return;
  }
  return;
}



// Address: 4a056260

void FUN_4a056260(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_4a056278;
  FUN_4a09d94c(*(undefined4 *)(PTR_DAT_4a056278 + 4));
  FUN_4a09c25c(*(undefined4 *)puVar1);
  return;
}



// Address: 4a05627c

void FUN_4a05627c(undefined4 *param_1,int param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  
  puVar2 = PTR_DAT_4a056388;
  if (*(int *)(*(int *)PTR_DAT_4a056388 + 0x360) != 0) {
    FUN_4a0464bc(*(undefined4 *)(PTR_LAB_4a05638c + 8));
  }
  iVar9 = 1;
  if (param_2 == 0) {
    iVar9 = -1;
  }
  *(undefined4 *)PTR_DAT_4a056390 = 0;
  puVar1 = PTR_PTR_4a056394;
  do {
    puVar3 = PTR_PTR_4a056394;
    PTR_PTR_4a056394 = puVar1;
    if (param_3 == 0) {
LAB_4a056340:
      iVar7 = *(int *)puVar2;
      iVar9 = *(int *)(iVar7 + 0x3bc);
      if (iVar9 == -1) {
        FUN_4a0471c4(*(undefined4 *)(iVar7 + 0x3c0),*(undefined4 *)(iVar7 + 0x3b4));
        iVar9 = *(int *)puVar2;
        uVar5 = *(uint *)(iVar9 + 0x3b8);
        iVar9 = *(int *)(iVar9 + 0x3c4);
      }
      else {
        if (iVar9 == 0) {
          return;
        }
        uVar5 = *(uint *)(iVar7 + 0x3ac);
      }
      if (0 < (int)uVar5) {
        puVar4 = (undefined4 *)(iVar9 + -0x10);
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          puVar4 = puVar4 + 4;
          *puVar4 = 0xffffffff;
        }
        iVar9 = (int)uVar5 >> 2;
        if (iVar9 != 0) {
          do {
            puVar4[4] = 0xffffffff;
            puVar4[8] = 0xffffffff;
            puVar4[0xc] = 0xffffffff;
            iVar9 = iVar9 + -1;
            puVar4 = puVar4 + 0x10;
            *puVar4 = 0xffffffff;
          } while (iVar9 != 0);
          return;
        }
        return;
      }
      return;
    }
    puVar4 = param_1 + iVar9;
    param_1 = (undefined4 *)*param_1;
    if (param_1 != (undefined4 *)&DAT_00ffffff) goto LAB_4a0562f8;
    param_3 = param_3 - 1;
    param_1 = puVar4;
    do {
      puVar4 = param_1 + iVar9;
      param_1 = (undefined4 *)*param_1;
      if (param_1 == (undefined4 *)&DAT_00ffffff) {
        param_3 = param_3 - 1;
        param_1 = puVar4;
        puVar1 = PTR_PTR_4a056394;
        PTR_PTR_4a056394 = puVar3;
        break;
      }
LAB_4a0562f8:
      if (param_3 == 0) goto LAB_4a056340;
      puVar4[-iVar9] = 0xffffff;
      do {
        puVar8 = (undefined4 *)*param_1;
        (**(code **)(puVar3 + ((uint)param_1[1] >> 0x19) * 4))(param_1 + 1);
        param_1 = puVar8;
      } while (((uint)puVar8 & 1) == 0);
      param_3 = param_3 - 1;
      param_1 = puVar4;
      puVar1 = PTR_PTR_4a056394;
    } while ((param_3 & 1) != 0);
  } while( true );
}



// Address: 4a05639c

void FUN_4a05639c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_4a0353c0(3,param_1,param_2);
  *(undefined4 *)(*(int *)PTR_DAT_4a0563bc + 0x418) = param_3;
  return;
}



// Address: 4a0563d4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0563d4(short *param_1,uint param_2,uint param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined *puVar5;
  ushort uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ushort uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  
  puVar5 = PTR_DAT_4a05670c;
  puVar7 = *(uint **)PTR_DAT_4a05670c;
  puVar7[0x105] = 3;
  puVar7[0x107] = 0;
  puVar7[0x106] = param_3;
  puVar7[0x116] = (uint)param_1;
  puVar7[0x115] = param_2;
  if ((*puVar7 & 0x400) != 0) {
    iVar8 = FUN_4a03605c(param_2);
    iVar20 = *(int *)puVar5;
    sVar1 = *(short *)(iVar20 + 600);
    sVar2 = *(short *)(iVar20 + 0x25a);
    iVar9 = *(int *)(iVar20 + 0x344);
    uVar10 = FUN_4a0066d8(0x2000000,iVar9);
    iVar21 = *(int *)(iVar20 + 0x348);
    uVar11 = FUN_4a0066d8(0x2000000,iVar21);
    if (param_2 == 0) {
      return;
    }
    do {
      param_2 = param_2 - 1;
      sVar3 = *param_1;
      sVar4 = param_1[1];
      *(undefined4 *)(iVar8 + 0xc) = 0x8000;
      uVar12 = sVar1 * 8 + ((int)sVar3 << (param_3 & 0xff)) + iVar9 * -4;
      uVar22 = uVar12 ^ uVar10;
      if ((int)uVar22 < 0) {
        uVar12 = -uVar12;
      }
      iVar13 = FUN_4a0008b0((int)((longlong)(int)uVar12 * (longlong)(int)uVar10),
                            (int)((ulonglong)((longlong)(int)uVar12 * (longlong)(int)uVar10) >> 0x20
                                 ),0xc);
      if ((int)uVar22 < 0) {
        iVar13 = -iVar13;
      }
      *(int *)(iVar8 + 4) = iVar13;
      uVar12 = sVar2 * 8 + ((int)sVar4 << (param_3 & 0xff)) + iVar21 * -4;
      uVar22 = uVar12 ^ uVar11;
      if ((int)uVar22 < 0) {
        uVar12 = -uVar12;
      }
      iVar14 = FUN_4a0008b0((int)((longlong)(int)uVar12 * (longlong)(int)uVar11),
                            (int)((ulonglong)((longlong)(int)uVar12 * (longlong)(int)uVar11) >> 0x20
                                 ),0xc);
      if ((int)uVar22 < 0) {
        iVar14 = -iVar14;
      }
      uVar6 = 0;
      if (0x8000 < iVar13) {
        uVar6 = 4;
      }
      *(int *)(iVar8 + 8) = iVar14;
      if ((iVar13 < 0x8001) && (iVar13 != -0x8000 && 0x7fff < -iVar13)) {
        uVar6 = 8;
      }
      if (iVar14 < 0x8001) {
        if (iVar14 != -0x8000 && 0x7fff < -iVar14) {
          uVar6 = uVar6 | 0x20;
        }
      }
      else {
        uVar6 = uVar6 | 0x10;
      }
      *(ushort *)(iVar8 + 0x10) = uVar6;
      param_1 = param_1 + 2;
      *(undefined2 *)(iVar8 + 0x12) = *(undefined2 *)(iVar20 + 0x574);
      iVar8 = iVar8 + 0x14;
    } while (param_2 != 0);
    return;
  }
  uVar10 = puVar7[0xce];
  if ((int)uVar10 < 0) {
    iVar8 = (puVar7[0xee] + uVar10 + 1 + puVar7[0xb6]) * 0x40;
  }
  else {
    iVar8 = (uVar10 - puVar7[0xed]) + puVar7[0xb4] * 0x40;
  }
  puVar15 = (undefined4 *)FUN_4a03605c(param_2);
  iVar9 = *(int *)puVar5;
  sVar1 = *(short *)(iVar9 + 600);
  iVar13 = *(int *)(iVar9 + 0x318);
  sVar2 = *(short *)(iVar9 + 0x25a);
  iVar21 = *(int *)(iVar9 + 0x31c);
  iVar20 = *(int *)(iVar9 + 0x354);
  iVar14 = *(int *)(iVar9 + 800);
  iVar23 = *(int *)(iVar9 + 0x324);
  uVar10 = *(uint *)(iVar9 + 0x66c);
  if (param_2 == 0) {
    return;
  }
  do {
    param_2 = param_2 - 1;
    iVar16 = (sVar1 * 8 - iVar13) + ((int)*param_1 << (param_3 & 0xff));
    iVar18 = (sVar2 * 8 - iVar21) + ((int)param_1[1] << (param_3 & 0xff));
    iVar17 = iVar16;
    iVar9 = iVar18;
    if (iVar20 != 0) {
      if (iVar20 == 1) {
        iVar17 = -iVar18;
        iVar9 = iVar16;
      }
      else if (iVar20 == 2) {
        iVar17 = -iVar16;
        iVar9 = -iVar18;
      }
      else if (iVar20 == 3) {
        iVar9 = -iVar16;
        iVar17 = iVar18;
      }
    }
    iVar17 = (iVar17 + iVar14) * 0x10000;
    iVar16 = iVar17 >> 0x10;
    sVar3 = (short)(iVar9 + iVar23 >> (uVar10 & 0xff));
    *(short *)puVar15 = (short)((uint)iVar17 >> 0x10);
    *(short *)((int)puVar15 + 2) = sVar3;
    puVar15[3] = iVar8;
    uVar6 = 0;
    puVar15[2] = *puVar15;
    puVar15[1] = *puVar15;
    iVar9 = *(int *)PTR_DAT_4a05670c;
    if (*(int *)(iVar9 + 0x2f4) < iVar16) {
      uVar6 = 4;
    }
    else if (iVar16 < *(int *)(iVar9 + 0x2f0)) {
      uVar6 = 8;
    }
    uVar19 = 0;
    if (*(int *)(iVar9 + 0x2ec) < (int)sVar3) {
      uVar19 = 0x10;
    }
    else if ((int)sVar3 < *(int *)(iVar9 + 0x2e8)) {
      uVar19 = 0x20;
    }
    *(ushort *)(puVar15 + 4) = uVar6 | uVar19 | 0x200;
    param_1 = param_1 + 2;
    *(undefined2 *)((int)puVar15 + 0x12) = *(undefined2 *)(iVar9 + 0x574);
    puVar15 = puVar15 + 5;
  } while (param_2 != 0);
  return;
}



// Address: 4a056710

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a056710(int *param_1,int param_2)

{
  undefined *puVar1;
  ushort uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  puVar1 = PTR_DAT_4a056980;
  iVar9 = *(int *)PTR_DAT_4a056980;
  *(undefined4 *)(iVar9 + 0x414) = 4;
  *(undefined4 *)(iVar9 + 0x41c) = 0;
  *(int *)(iVar9 + 0x454) = param_2;
  *(int **)(iVar9 + 0x458) = param_1;
  iVar3 = FUN_4a03605c(param_2);
  puVar4 = *(uint **)puVar1;
  if ((*puVar4 & 0x80000000) != 0) {
    iVar5 = FUN_4a0015f0((puVar4[0xc0] + (int)puVar4[0xc2] / 2) * 0x2000);
    iVar6 = FUN_4a0015f0((puVar4[0xc1] + (int)puVar4[0xc3] / 2) * 0x2000);
    if (param_2 == 0) {
      return;
    }
    do {
      param_2 = param_2 + -1;
      iVar10 = *(int *)(iVar9 + 0x264);
      iVar8 = *param_1 + *(int *)(iVar9 + 0x25c);
      iVar7 = param_1[2];
      *(int *)(iVar3 + 8) = param_1[1] + *(int *)(iVar9 + 0x260);
      *(int *)(iVar3 + 0xc) = iVar7 + iVar10;
      *(int *)(iVar3 + 4) = iVar8;
      iVar8 = FUN_4a0015f0(iVar8 * 0x2000,puVar4[0xc2]);
      iVar8 = iVar8 - iVar5;
      *(int *)(iVar3 + 4) = iVar8;
      iVar10 = FUN_4a0015f0(*(int *)(iVar3 + 8) << 0xd,puVar4[0xc3]);
      iVar10 = iVar10 - iVar6;
      *(int *)(iVar3 + 8) = iVar10;
      puVar1 = PTR_DAT_4a056980;
      iVar7 = *(int *)(iVar9 + 0x32c) * *(int *)(iVar3 + 0xc) >> 6;
      uVar2 = 0;
      if (iVar7 < iVar8) {
        uVar2 = 4;
      }
      if (-iVar7 != iVar8 && iVar7 <= -iVar8) {
        uVar2 = uVar2 | 8;
      }
      *(int *)(iVar3 + 0xc) = iVar7;
      if (iVar7 < iVar10) {
        uVar2 = uVar2 | 0x10;
      }
      if (-iVar7 != iVar10 && iVar7 <= -iVar10) {
        uVar2 = uVar2 | 0x20;
      }
      if (iVar7 < *(int *)(*(int *)puVar1 + 0x2d0) * 0x40) {
        uVar2 = uVar2 | 1;
      }
      else if (*(int *)(*(int *)puVar1 + 0x2d4) * 0x40 < iVar7) {
        uVar2 = uVar2 | 2;
      }
      *(ushort *)(iVar3 + 0x10) = uVar2;
      *(undefined2 *)(iVar3 + 0x12) = *(undefined2 *)(iVar9 + 0x574);
      *(ushort *)(iVar3 + 0x10) = uVar2 | 0x80;
      param_1 = param_1 + 3;
      iVar3 = iVar3 + 0x14;
    } while (param_2 != 0);
    return;
  }
  if (param_2 == 0) {
    return;
  }
  do {
    param_2 = param_2 + -1;
    iVar5 = *param_1 + *(int *)(iVar9 + 0x25c);
    iVar8 = param_1[2];
    iVar6 = *(int *)(iVar9 + 0x260) + param_1[1];
    iVar7 = *(int *)(iVar9 + 0x264);
    *(int *)(iVar3 + 4) = iVar5;
    *(int *)(iVar3 + 8) = iVar6;
    iVar7 = iVar7 + iVar8;
    *(int *)(iVar3 + 0xc) = iVar7;
    iVar5 = *(int *)(iVar9 + 0x330) * iVar5 >> 6;
    *(int *)(iVar3 + 4) = iVar5;
    iVar6 = *(int *)(iVar9 + 0x334) * iVar6 >> 6;
    *(int *)(iVar3 + 8) = iVar6;
    iVar7 = iVar7 * *(int *)(iVar9 + 0x32c) >> 6;
    uVar2 = 0;
    if (iVar7 < iVar5) {
      uVar2 = 4;
    }
    if (-iVar7 != iVar5 && iVar7 <= -iVar5) {
      uVar2 = uVar2 | 8;
    }
    *(int *)(iVar3 + 0xc) = iVar7;
    iVar5 = *(int *)puVar1;
    if (iVar7 < iVar6) {
      uVar2 = uVar2 | 0x10;
    }
    if (-iVar7 != iVar6 && iVar7 <= -iVar6) {
      uVar2 = uVar2 | 0x20;
    }
    if (iVar7 < *(int *)(iVar5 + 0x2d0) * 0x40) {
      uVar2 = uVar2 | 1;
    }
    else if (*(int *)(iVar5 + 0x2d4) * 0x40 < iVar7) {
      uVar2 = uVar2 | 2;
    }
    *(ushort *)(iVar3 + 0x10) = uVar2;
    *(undefined2 *)(iVar3 + 0x12) = *(undefined2 *)(iVar9 + 0x574);
    *(ushort *)(iVar3 + 0x10) = uVar2 | 0x80;
    param_1 = param_1 + 3;
    iVar3 = iVar3 + 0x14;
  } while (param_2 != 0);
  return;
}



// Address: 4a056984

undefined4 FUN_4a056984(void)

{
  return *(undefined4 *)PTR_DAT_4a05698c;
}



// Address: 4a056990

undefined4 FUN_4a056990(void)

{
  return *(undefined4 *)(PTR_DAT_4a056998 + 4);
}



// Address: 4a05699c

void FUN_4a05699c(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 1;
  if (param_2 == 0) {
    iVar4 = -1;
  }
  if (param_3 == 0) {
    return;
  }
  do {
    puVar3 = (undefined4 *)*param_1;
    param_3 = param_3 + -1;
    if ((puVar3 != (undefined4 *)&DAT_00ffffff) &&
       (puVar1 = (undefined4 *)*puVar3, ((uint)puVar1 & 1) == 0)) {
      *puVar3 = 0xffffff;
      do {
        puVar2 = puVar1;
        puVar1 = (undefined4 *)*puVar2;
        *puVar2 = puVar3;
        puVar3 = puVar2;
      } while (((uint)puVar1 & 1) == 0);
      *param_1 = puVar2;
    }
    param_1 = param_1 + iVar4;
  } while (param_3 != 0);
  return;
}



// Address: 4a056a0c

void FUN_4a056a0c(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_r3;
  uint uVar3;
  int iVar4;
  int local_18;
  
  iVar4 = *(int *)(*(int *)PTR_DAT_4a056a70 + 100);
  local_18 = in_r3;
  for (uVar3 = 0; uVar3 < *(uint *)(iVar4 + 0x14); uVar3 = uVar3 + 1) {
    iVar1 = *(int *)(iVar4 + 0x10) + uVar3 * 0x30;
    FUN_4a092228(iVar1 + 0xc,*(undefined4 *)(iVar1 + 0x20));
  }
  while( true ) {
    local_18 = 0;
    FUN_4a03c12c(&local_18,1,0x20,4);
    if (local_18 == 0) break;
    iVar1 = FUN_4a13512c(iVar4,local_18,0);
    uVar2 = FUN_4a06080c(iVar1,local_18,1);
    FUN_4a06a14c(iVar4,*(undefined4 *)(iVar1 + 4),uVar2);
  }
  FUN_4a03ebc0();
  return;
}



// Address: 4a056a74

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a056a74(void)

{
  longlong lVar1;
  undefined *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  short *psVar13;
  uint uVar14;
  int unaff_r5;
  int iVar15;
  int iVar16;
  bool bVar17;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
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
  
  puVar2 = PTR_DAT_4a056ea4;
  puVar3 = *(uint **)PTR_DAT_4a056ea4;
  if ((*puVar3 & 0x20000) == 0) {
    return;
  }
  if ((puVar3[1] & 0x20) != 0) {
    return;
  }
  puVar3[1] = puVar3[1] | 0x20;
  if (puVar3[0x117] == 0) {
    return;
  }
  uStack_28 = puVar3[0xd5];
  uVar14 = puVar3[0x11d];
  uVar9 = puVar3[0xe3];
  puVar3[0xe2] = uVar9;
  puVar3[0xe3] = (uVar14 * 2 + 3 & 0xfffffffc) + uVar9;
  puVar3[0x101] = uVar9;
  puVar3[0x102] = uVar14;
  uStack_58 = puVar3[0x28];
  uStack_54 = puVar3[0x29];
  uStack_50 = puVar3[0x2a];
  uStack_4c = puVar3[0x2b];
  uStack_48 = puVar3[0x2c];
  uStack_44 = puVar3[0x2d];
  uStack_40 = puVar3[0x2e];
  uStack_3c = puVar3[0x2f];
  uStack_38 = puVar3[0x30];
  uStack_34 = puVar3[0x31];
  uStack_30 = puVar3[0x32];
  uStack_2c = puVar3[0x33];
  FUN_4a0d41c8(&uStack_40);
  FUN_4a0d41c8(&uStack_58);
  uVar9 = uStack_40;
  if ((int)uStack_40 < 1) {
    uVar9 = -uStack_40;
  }
  uVar10 = uStack_3c;
  if ((int)uStack_3c < 1) {
    uVar10 = -uStack_3c;
  }
  uVar4 = uStack_38;
  if ((int)uStack_38 < 1) {
    uVar4 = -uStack_38;
  }
  uVar5 = uStack_58;
  if ((int)uStack_58 < 1) {
    uVar5 = -uStack_58;
  }
  uVar6 = uStack_54;
  if ((int)uStack_54 < 1) {
    uVar6 = -uStack_54;
  }
  uVar7 = uStack_50;
  if ((int)uStack_50 < 1) {
    uVar7 = -uStack_50;
  }
  if ((int)(uVar7 | uVar10 | uVar9 | uVar4 | uVar5 | uVar6) < 0x8001) {
    uStack_4c = (int)(uStack_3c * uStack_50 - uStack_38 * uStack_54) >> 0xc;
    uStack_48 = (int)(uStack_58 * uStack_38 - uStack_40 * uStack_50) >> 0xc;
    uStack_44 = (int)(uStack_54 * uStack_40 - uStack_58 * uStack_3c) >> 0xc;
  }
  else {
    lVar1 = (longlong)(int)uStack_50 * (longlong)(int)uStack_3c +
            (longlong)(int)-uStack_54 * (longlong)(int)uStack_38;
    uStack_4c = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
    lVar1 = (longlong)(int)uStack_58 * (longlong)(int)uStack_38 +
            (longlong)(int)-uStack_50 * (longlong)(int)uStack_40;
    uStack_48 = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
    lVar1 = (longlong)(int)uStack_54 * (longlong)(int)uStack_40 +
            (longlong)(int)-uStack_58 * (longlong)(int)uStack_3c;
    uStack_44 = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  }
  FUN_4a0d41c8(&uStack_4c);
  uVar9 = uStack_4c;
  if ((int)uStack_4c < 1) {
    uVar9 = -uStack_4c;
  }
  uVar10 = uStack_48;
  if ((int)uStack_48 < 1) {
    uVar10 = -uStack_48;
  }
  uVar4 = uStack_44;
  if ((int)uStack_44 < 1) {
    uVar4 = -uStack_44;
  }
  uVar5 = uStack_40;
  if ((int)uStack_40 < 1) {
    uVar5 = -uStack_40;
  }
  uVar6 = uStack_3c;
  if ((int)uStack_3c < 1) {
    uVar6 = -uStack_3c;
  }
  uVar7 = uStack_38;
  if ((int)uStack_38 < 1) {
    uVar7 = -uStack_38;
  }
  if ((int)(uVar7 | uVar10 | uVar9 | uVar4 | uVar5 | uVar6) < 0x8001) {
    uStack_58 = (int)(uStack_38 * uStack_48 - uStack_44 * uStack_3c) >> 0xc;
    uStack_54 = (int)(uStack_40 * uStack_44 - uStack_4c * uStack_38) >> 0xc;
    uStack_50 = (int)(uStack_3c * uStack_4c - uStack_40 * uStack_48) >> 0xc;
  }
  else {
    lVar1 = (longlong)(int)uStack_38 * (longlong)(int)uStack_48 +
            (longlong)(int)-uStack_3c * (longlong)(int)uStack_44;
    uStack_58 = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
    lVar1 = (longlong)(int)uStack_40 * (longlong)(int)uStack_44 +
            (longlong)(int)-uStack_38 * (longlong)(int)uStack_4c;
    uStack_54 = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
    lVar1 = (longlong)(int)uStack_3c * (longlong)(int)uStack_4c +
            (longlong)(int)-uStack_40 * (longlong)(int)uStack_48;
    uStack_50 = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  }
  puVar12 = *(undefined1 **)(*(int *)puVar2 + 0x404);
  psVar13 = *(short **)(*(int *)puVar2 + 0x45c);
  iVar15 = uVar14 - 1;
  puVar3 = &uStack_58;
  if (uVar14 == 0) {
    iVar15 = unaff_r5;
    puVar3 = (uint *)register0x00000054;
  }
  iVar11 = 0;
  iVar8 = 0;
  if (uVar14 == 0) {
    return;
  }
  do {
    lVar1 = (longlong)(int)psVar13[2] * (longlong)(int)puVar3[6] +
            (longlong)(int)*psVar13 * (longlong)(int)*puVar3 +
            (longlong)(int)puVar3[3] * (longlong)(int)psVar13[1];
    uVar9 = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
    lVar1 = (longlong)(int)psVar13[2] * (longlong)(int)puVar3[7] +
            (longlong)(int)*psVar13 * (longlong)(int)puVar3[1] +
            (longlong)(int)puVar3[4] * (longlong)(int)psVar13[1];
    uVar14 = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
    iVar16 = puVar3[0xc];
    psVar13 = psVar13 + 3;
    if (iVar16 == 0) {
      iVar11 = uVar14 * -8 + 0x8000;
      iVar8 = uVar9 * 8 + 0x8000;
    }
    else if (iVar16 == 1) {
      iVar11 = uVar9 * -8 + 0x8000;
      iVar8 = uVar14 * -8 + 0x8000;
    }
    else if (iVar16 == 2) {
      iVar11 = uVar14 * 8 + 0x8000;
      iVar8 = uVar9 * -8 + 0x8000;
    }
    else if (iVar16 == 3) {
      iVar11 = uVar9 * 8 + 0x8000;
      iVar8 = uVar14 * 8 + 0x8000;
    }
    iVar11 = 0xff - (iVar11 >> 8);
    iVar8 = iVar8 >> 8;
    if (iVar11 < 0x100) {
      if (iVar11 < 0) {
        iVar11 = 0;
      }
    }
    else {
      iVar11 = 0xff;
    }
    if (iVar8 < 0x100) {
      if (iVar8 < 0) {
        iVar8 = 0;
      }
    }
    else {
      iVar8 = 0xff;
    }
    *puVar12 = (char)iVar11;
    puVar12[1] = (char)iVar8;
    bVar17 = iVar15 != 0;
    iVar15 = iVar15 + -1;
    puVar12 = puVar12 + 2;
  } while (bVar17);
  return;
}



// Address: 4a056ea8

void FUN_4a056ea8(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_58 [80];
  
  thunk_FUN_4a00121c(auStack_58,0x50);
  FUN_4a0620b4(param_1,auStack_58,0x50);
  uVar1 = FUN_4a13578c(*(undefined4 *)(PTR_DAT_4a056ee8 + 0xc),*(undefined4 *)(param_1 + 0xb0),
                       s_CIwTexture_4a056eec,0);
  *(undefined4 *)PTR_DAT_4a056ef8 = uVar1;
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xfffffeff;
  return;
}



// Address: 4a056efc

undefined4 FUN_4a056efc(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_8 [2];
  
  local_8[0] = 0;
  uVar1 = FUN_4a01d924(param_1,0xffffffff,1);
  FUN_4a1020c0(local_8,uVar1);
  return local_8[0];
}



// Address: 4a056f2c

void FUN_4a056f2c(void)

{
  return;
}



// Address: 4a056f30

void FUN_4a056f30(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  
  if (param_2 == param_4) {
    host_s3eFileRead_thumb(param_1,param_2,param_3,*(undefined4 *)(param_5 + 8));
  }
  else {
    for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1) {
      host_s3eFileRead_thumb(param_4 * uVar1 + param_1,param_2,1,*(undefined4 *)(param_5 + 8));
    }
  }
  FUN_4a0515e4(param_3 * param_2);
  return;
}



// Address: 4a056f7c

void FUN_4a056f7c(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  bool bVar2;
  
  while (bVar2 = param_2 != 0, param_2 = param_2 + -1, bVar2) {
    uVar1 = param_1[2];
    param_1[2] = *param_1;
    *param_1 = uVar1;
    param_1 = param_1 + 4;
  }
  return;
}



// Address: 4a056f94

void FUN_4a056f94(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  
  if (param_2 == param_4) {
    host_s3eFileWrite_thumb(param_1,param_2,param_3,*(undefined4 *)(param_5 + 8));
  }
  else {
    for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1) {
      host_s3eFileWrite_thumb(param_4 * uVar1 + param_1,param_2,1,*(undefined4 *)(param_5 + 8));
    }
  }
  FUN_4a0515e4(param_3 * param_2);
  return;
}



// Address: 4a056fe0

undefined4 * FUN_4a056fe0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 local_a4;
  undefined4 local_a0;
  char local_9c [128];
  undefined1 auStack_1c [4];
  char *local_18;
  
  local_18 = local_9c;
  local_a4 = 0;
  local_a0 = 0;
  FUN_4a0012bc(local_18,param_1);
  for (uVar4 = 0; uVar1 = FUN_4a0013e0(local_18), uVar4 < uVar1; uVar4 = uVar4 + 1) {
    if (local_9c[uVar4] == '/') {
      local_9c[uVar4] = '\\';
    }
  }
  iVar2 = FUN_4a01d384(&local_a4,auStack_1c,1);
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)thunk_FUN_4a15e080(0x88);
    *puVar3 = 0;
    puVar3[1] = 0;
    FUN_4a0012bc(puVar3 + 2,local_18);
  }
  else {
    puVar3 = (undefined4 *)0x0;
  }
  return puVar3;
}



// Address: 4a057044

undefined8 FUN_4a057044(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  puVar1 = PTR_DAT_4a057084;
  local_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  puVar2 = (undefined4 *)FUN_4a15f2a0(*(undefined4 *)PTR_DAT_4a057084);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_4a00d394(0xc);
    FUN_4a15f4d4(*(undefined4 *)puVar1,puVar2);
    puVar1 = PTR_PTR_4a057088;
    uVar3 = *(undefined4 *)(PTR_PTR_4a057088 + 4);
    uVar4 = *(undefined4 *)(PTR_PTR_4a057088 + 8);
    puVar5 = (undefined4 *)(PTR_PTR_4a057088 + 0xc);
    *puVar2 = *(undefined4 *)PTR_PTR_4a057088;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    local_18 = *puVar5;
    uStack_14 = *(undefined4 *)(puVar1 + 0x10);
    uStack_10 = *(undefined4 *)(puVar1 + 0x14);
    host_s3eMemorySetUserMemMgr_thumb(&local_18,puVar1 + 0x18);
    FUN_4a1615a8(0);
  }
  return CONCAT44(local_18,puVar2);
}



// Address: 4a05708c

int FUN_4a05708c(short *param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  while (sVar1 = *param_1, param_1 = param_1 + 1, sVar1 != 0) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}



// Address: 4a0570a0

undefined4 FUN_4a0570a0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_420 [1023];
  char local_21;
  undefined1 auStack_20 [4];
  int local_1c;
  int local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  
  uStack_14 = param_1;
  local_10 = param_2;
  uVar1 = FUN_4a14ffd4();
  FUN_4a150a14(uVar1,1,&local_10,0);
  FUN_4a14ff04(uVar1);
  FUN_4a1503c8(uVar1,DAT_4a057134,&local_18);
  if (local_18 == 0) {
    FUN_4a1503c8(uVar1,DAT_4a057134 + 3,&local_1c);
    uVar2 = thunk_FUN_4a161570(local_1c + 1);
    FUN_4a1503bc(uVar1,local_1c + 1,auStack_20,uVar2);
    thunk_FUN_4a001368(auStack_420,local_10,0x400);
    if (local_21 != '\0') {
      local_21 = '\0';
    }
    thunk_FUN_4a161530(uVar2);
    uVar1 = 0;
  }
  return uVar1;
}



// Address: 4a057138

void FUN_4a057138(uint *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  uVar3 = *param_1;
  puVar1 = (undefined4 *)param_1[1];
  bVar5 = ((uint)puVar1 & 2) != 0;
  if (bVar5) {
    uVar3 = uVar3 - 1;
  }
  iVar4 = (int)uVar3 >> 4;
  puVar2 = puVar1;
  if (bVar5) {
    puVar2 = (undefined4 *)((int)puVar1 + 2);
    *(undefined2 *)puVar1 = 0xf100;
  }
  puVar1 = puVar2;
  switch((int)uVar3 >> 1 & 7) {
  case 0:
    while (bVar5 = iVar4 != 0, iVar4 = iVar4 + -1, puVar2 = puVar1, bVar5) {
      puVar2 = puVar1 + 1;
      *puVar1 = 0xf100f100;
switchD_4a057170_caseD_7:
      puVar1 = puVar2 + 1;
      *puVar2 = 0xf100f100;
switchD_4a057170_caseD_6:
      puVar2 = puVar1 + 1;
      *puVar1 = 0xf100f100;
switchD_4a057170_caseD_5:
      puVar1 = puVar2 + 1;
      *puVar2 = 0xf100f100;
switchD_4a057170_caseD_4:
      puVar2 = puVar1 + 1;
      *puVar1 = 0xf100f100;
switchD_4a057170_caseD_3:
      puVar1 = puVar2 + 1;
      *puVar2 = 0xf100f100;
switchD_4a057170_caseD_2:
      puVar2 = puVar1 + 1;
      *puVar1 = 0xf100f100;
switchD_4a057170_caseD_1:
      puVar1 = puVar2 + 1;
      *puVar2 = 0xf100f100;
    }
    break;
  case 1:
    goto switchD_4a057170_caseD_1;
  case 2:
    goto switchD_4a057170_caseD_2;
  case 3:
    goto switchD_4a057170_caseD_3;
  case 4:
    goto switchD_4a057170_caseD_4;
  case 5:
    goto switchD_4a057170_caseD_5;
  case 6:
    goto switchD_4a057170_caseD_6;
  case 7:
    goto switchD_4a057170_caseD_7;
  }
  if ((uVar3 & 1) != 0) {
    *(undefined2 *)puVar2 = 0xf100;
  }
  return;
}



// Address: 4a0571d0

uint FUN_4a0571d0(uint param_1)

{
  if ((~param_1 & 3) == 0) {
    return ((int)param_1 >> 2) * ((int)param_1 >> 2) * 4;
  }
  return param_1 & 0xfffffffc;
}



// Address: 4a0571e8

void FUN_4a0571e8(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = PTR_DAT_4a057234;
  if (param_1 != 0) {
    iVar2 = *(int *)(PTR_DAT_4a057234 + 8);
    if (*(int *)(PTR_DAT_4a057234 + 0xc) == 0 && iVar2 == 0) {
      host_s3eFreeBase_thumb(param_1);
    }
    else {
      if ((iVar2 == 0) || (iVar2 = FUN_4a0a5d80(iVar2,param_1), iVar2 == 0)) {
        piVar3 = *(int **)(puVar1 + 0xc);
        if ((piVar3 == (int *)0x0) ||
           (iVar2 = FUN_4a1652c8(piVar3,param_1,*(undefined4 *)(*piVar3 + 0x10)), iVar2 == 0)) {
          iVar2 = *(int *)(puVar1 + 4);
        }
        else {
          iVar2 = *(int *)(puVar1 + 0xc);
        }
      }
      FUN_4a02b008(iVar2,param_1);
    }
  }
  return;
}



// Address: 4a057238

void FUN_4a057238(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x3f800000;
  }
  uVar5 = 0;
  if (param_4 == 0) {
    uVar5 = DAT_4a05749c;
  }
  uVar2 = thunk_FUN_4a17211c(param_2[2],param_3[6]);
  uVar3 = thunk_FUN_4a17211c(param_2[1],param_3[3]);
  uVar4 = thunk_FUN_4a17211c(*param_2,*param_3);
  uVar3 = thunk_FUN_4a171a94(uVar4,uVar3);
  uVar2 = thunk_FUN_4a171a94(uVar3,uVar2);
  *param_1 = uVar2;
  uVar2 = thunk_FUN_4a17211c(param_2[2],param_3[7]);
  uVar3 = thunk_FUN_4a17211c(param_2[1],param_3[4]);
  uVar4 = thunk_FUN_4a17211c(*param_2,param_3[1]);
  uVar3 = thunk_FUN_4a171a94(uVar4,uVar3);
  uVar2 = thunk_FUN_4a171a94(uVar3,uVar2);
  param_1[1] = uVar2;
  uVar2 = thunk_FUN_4a17211c(param_2[2],param_3[8]);
  uVar3 = thunk_FUN_4a17211c(param_2[1],param_3[5]);
  uVar4 = thunk_FUN_4a17211c(*param_2,param_3[2]);
  uVar3 = thunk_FUN_4a171a94(uVar4,uVar3);
  uVar2 = thunk_FUN_4a171a94(uVar3,uVar2);
  param_1[2] = uVar2;
  uVar2 = thunk_FUN_4a17211c(param_2[2],uVar5);
  param_1[3] = uVar2;
  uVar2 = thunk_FUN_4a17211c(param_2[5],param_3[6]);
  uVar3 = thunk_FUN_4a17211c(param_2[4],param_3[3]);
  uVar4 = thunk_FUN_4a17211c(param_2[3],*param_3);
  uVar3 = thunk_FUN_4a171a94(uVar4,uVar3);
  uVar2 = thunk_FUN_4a171a94(uVar3,uVar2);
  param_1[4] = uVar2;
  uVar2 = thunk_FUN_4a17211c(param_2[5],param_3[7]);
  uVar3 = thunk_FUN_4a17211c(param_2[4],param_3[4]);
  uVar4 = thunk_FUN_4a17211c(param_2[3],param_3[1]);
  uVar3 = thunk_FUN_4a171a94(uVar4,uVar3);
  uVar2 = thunk_FUN_4a171a94(uVar3,uVar2);
  param_1[5] = uVar2;
  uVar2 = thunk_FUN_4a17211c(param_2[5],param_3[8]);
  uVar3 = thunk_FUN_4a17211c(param_2[4],param_3[5]);
  uVar4 = thunk_FUN_4a17211c(param_2[3],param_3[2]);
  uVar3 = thunk_FUN_4a171a94(uVar4,uVar3);
  uVar2 = thunk_FUN_4a171a94(uVar3,uVar2);
  param_1[6] = uVar2;
  uVar2 = thunk_FUN_4a17211c(param_2[5],uVar5);
  param_1[7] = uVar2;
  uVar2 = thunk_FUN_4a17211c(param_2[8],param_3[6]);
  uVar3 = thunk_FUN_4a17211c(param_2[7],param_3[3]);
  uVar4 = thunk_FUN_4a17211c(param_2[6],*param_3);
  uVar3 = thunk_FUN_4a171a94(uVar4,uVar3);
  uVar2 = thunk_FUN_4a171a94(uVar3,uVar2);
  param_1[8] = uVar2;
  uVar2 = thunk_FUN_4a17211c(param_2[8],param_3[7]);
  uVar3 = thunk_FUN_4a17211c(param_2[7],param_3[4]);
  uVar4 = thunk_FUN_4a17211c(param_2[6],param_3[1]);
  uVar3 = thunk_FUN_4a171a94(uVar4,uVar3);
  uVar2 = thunk_FUN_4a171a94(uVar3,uVar2);
  param_1[9] = uVar2;
  uVar2 = thunk_FUN_4a17211c(param_2[8],param_3[8]);
  uVar3 = thunk_FUN_4a17211c(param_2[7],param_3[5]);
  uVar4 = thunk_FUN_4a17211c(param_2[6],param_3[2]);
  uVar3 = thunk_FUN_4a171a94(uVar4,uVar3);
  uVar2 = thunk_FUN_4a171a94(uVar3,uVar2);
  param_1[10] = uVar2;
  uVar2 = thunk_FUN_4a17211c(param_2[8],uVar5);
  param_1[0xb] = uVar2;
  uVar2 = thunk_FUN_4a17211c(param_2[0xb],param_3[6]);
  uVar3 = thunk_FUN_4a17211c(param_2[10],param_3[3]);
  uVar4 = thunk_FUN_4a17211c(param_2[9],*param_3);
  uVar3 = thunk_FUN_4a171a94(uVar4,uVar3);
  uVar2 = thunk_FUN_4a171a94(uVar3,uVar2);
  uVar2 = thunk_FUN_4a171a94(uVar2,param_3[9]);
  param_1[0xc] = uVar2;
  uVar2 = thunk_FUN_4a17211c(param_2[0xb],param_3[7]);
  uVar3 = thunk_FUN_4a17211c(param_2[10],param_3[4]);
  uVar4 = thunk_FUN_4a17211c(param_2[9],param_3[1]);
  uVar3 = thunk_FUN_4a171a94(uVar4,uVar3);
  uVar2 = thunk_FUN_4a171a94(uVar3,uVar2);
  uVar2 = thunk_FUN_4a171a94(uVar2,param_3[10]);
  param_1[0xd] = uVar2;
  uVar2 = thunk_FUN_4a17211c(param_2[0xb],param_3[8]);
  uVar3 = thunk_FUN_4a17211c(param_2[10],param_3[5]);
  uVar4 = thunk_FUN_4a17211c(param_2[9],param_3[2]);
  uVar3 = thunk_FUN_4a171a94(uVar4,uVar3);
  uVar2 = thunk_FUN_4a171a94(uVar3,uVar2);
  uVar2 = thunk_FUN_4a171a94(uVar2,param_3[0xb]);
  param_1[0xe] = uVar2;
  uVar5 = thunk_FUN_4a17211c(param_2[0xb],uVar5);
  uVar1 = thunk_FUN_4a171a94(uVar5,uVar1);
  param_1[0xf] = uVar1;
  return;
}



// Address: 4a0574a0

undefined4 FUN_4a0574a0(short *param_1)

{
  if (*param_1 != -1) {
    FUN_4a00d2fc();
  }
  thunk_FUN_4a001274(param_1,0x2c);
  return 0;
}



// Address: 4a0574c4

void FUN_4a0574c4(void)

{
  FUN_4a00d388();
  return;
}



// Address: 4a0574d0

undefined4 FUN_4a0574d0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_r3;
  
  FUN_4a15edcc(s_TnbNative___kill__4a0575f8);
  piVar1 = (int *)FUN_4a05be98();
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,s_com_cp_app_MainActivity_4a05760c);
  if (iVar2 == 0) {
    FUN_4a15edcc(s_Unable_to_find_the_activity_clas_4a057624);
    return 1;
  }
  iVar3 = (**(code **)(*piVar1 + 0x240))
                    (piVar1,iVar2,s_m_Activity_4a057648,s_Lcom_cp_app_MainActivity__4a057654,in_r3);
  if (iVar3 == 0) {
    FUN_4a15edcc(s_Sorry__I_can_t_find_MainWrapper_4a057670);
    return 1;
  }
  iVar3 = (**(code **)(*piVar1 + 0x244))(piVar1,iVar2,iVar3);
  if (iVar3 == 0) {
    FUN_4a15edcc(s_Sorry__I_can_t_use_MainWrapper_4a057694);
    return 1;
  }
  iVar3 = (**(code **)(*piVar1 + 0x1c4))(piVar1,iVar2,s_killMe_4a0576b4,&DAT_4a0576bc);
  if (iVar3 == 0) {
    FUN_4a15edcc(s_Sorry__I_can_t_find_killMe_4a0576c0);
    return 1;
  }
  (**(code **)(*piVar1 + 0x238))(piVar1,iVar2,iVar3,&stack0xfffffff4,iVar3);
  return 0;
}



// Address: 4a0576e0

undefined4 FUN_4a0576e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_4a15edcc(s_TnbNative___tnbShow___d_4a0577fc,param_1,param_3,param_4,param_4);
  piVar1 = (int *)FUN_4a05be98();
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,s_com_cp_app_MainActivity_4a057818);
  if (iVar2 == 0) {
    FUN_4a15edcc(s_Unable_to_find_the_activity_clas_4a057830);
    return 1;
  }
  iVar3 = (**(code **)(*piVar1 + 0x240))
                    (piVar1,iVar2,s_m_Activity_4a057854,s_Lcom_cp_app_MainActivity__4a057860);
  if (iVar3 == 0) {
    FUN_4a15edcc(s_Sorry__I_can_t_find_MainWrapper_4a05787c);
    return 1;
  }
  iVar2 = (**(code **)(*piVar1 + 0x244))(piVar1,iVar2,iVar3);
  if (iVar2 == 0) {
    FUN_4a15edcc(s_Sorry__I_can_t_use_MainWrapper_4a0578a0);
    return 1;
  }
  uVar4 = (**(code **)(*piVar1 + 0x18))(piVar1,s_com_ea_tnb_WrapperActivity_4a0578c0);
  iVar3 = (**(code **)(*piVar1 + 0x1c4))
                    (piVar1,uVar4,&DAT_4a0578dc,s__Landroid_app_Activity_I_V_4a0578e4);
  if (iVar3 == 0) {
    FUN_4a15edcc(s_Sorry__I_can_t_find_show_4a057900);
    return 1;
  }
  FUN_4a0e4910(piVar1,uVar4,iVar3,iVar2,param_1);
  return 0;
}



// Address: 4a057940

void FUN_4a057940(int param_1)

{
  if (param_1 != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  return;
}



// Address: 4a057954

void FUN_4a057954(void)

{
  FUN_4a030160();
  if (*(int *)(PTR_DAT_4a05797c + 8) == 1) {
    FUN_4a04d648();
    FUN_4a03be3c();
    FUN_4a03f5c8();
  }
  return;
}



// Address: 4a057980

void FUN_4a057980(char *param_1,char *param_2)

{
  char cVar1;
  
  while( true ) {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    *param_2 = cVar1;
    if (cVar1 == '\0') break;
    if (cVar1 == '/') {
      *param_2 = '\\';
    }
    param_2 = param_2 + 1;
  }
  return;
}



// Address: 4a057998

undefined1 FUN_4a057998(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_4a0579cc;
  if (*PTR_DAT_4a0579cc == '\0' && PTR_DAT_4a0579cc[1] == '\0') {
    iVar2 = host_s3eExtGetHash_thumb(DAT_4a0579d0,PTR_DAT_4a0579cc + 4,4);
    if (iVar2 == 0) {
      *puVar1 = 1;
    }
    else {
      host_s3eDebugAssertShow_thumb(2,s_error_loading_extension__s3eAndr_4a0579d4);
    }
    puVar1[1] = 1;
    puVar1[2] = 1;
  }
  return *puVar1;
}



// Address: 4a0579fc

undefined1 FUN_4a0579fc(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_4a057a30;
  if (*PTR_DAT_4a057a30 == '\0' && PTR_DAT_4a057a30[1] == '\0') {
    iVar2 = host_s3eExtGetHash_thumb(DAT_4a057a34,PTR_DAT_4a057a30 + 4,4);
    if (iVar2 == 0) {
      *puVar1 = 1;
    }
    else {
      host_s3eDebugAssertShow_thumb(2,s_error_loading_extension__s3eOSEx_4a057a38);
    }
    puVar1[1] = 1;
    puVar1[2] = 1;
  }
  return *puVar1;
}



// Address: 4a057a5c

undefined1 FUN_4a057a5c(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_4a057a90;
  if (*PTR_DAT_4a057a90 == '\0' && PTR_DAT_4a057a90[1] == '\0') {
    iVar2 = host_s3eExtGetHash_thumb(DAT_4a057a98,PTR_DAT_4a057a94,0x10);
    if (iVar2 == 0) {
      *puVar1 = 1;
    }
    else {
      host_s3eDebugAssertShow_thumb(2,s_error_loading_extension__s3eOSRe_4a057a9c);
    }
    puVar1[1] = 1;
    puVar1[2] = 1;
  }
  return *puVar1;
}



// Address: 4a057ac8

undefined1 FUN_4a057ac8(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_4a057afc;
  if (*PTR_DAT_4a057afc == '\0' && PTR_DAT_4a057afc[1] == '\0') {
    iVar2 = host_s3eExtGetHash_thumb(DAT_4a057b04,PTR_DAT_4a057b00,0x4c);
    if (iVar2 == 0) {
      *puVar1 = 1;
    }
    else {
      host_s3eDebugAssertShow_thumb(2,s_error_loading_extension__s3eThre_4a057b08);
    }
    puVar1[1] = 1;
    puVar1[2] = 1;
  }
  return *puVar1;
}



// Address: 4a057b2c

undefined1 FUN_4a057b2c(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_4a057b60;
  if (*PTR_DAT_4a057b60 == '\0' && PTR_DAT_4a057b60[1] == '\0') {
    iVar2 = host_s3eExtGetHash_thumb(DAT_4a057b64,PTR_DAT_4a057b60 + 4,8);
    if (iVar2 == 0) {
      *puVar1 = 1;
    }
    else {
      host_s3eDebugAssertShow_thumb(2,s_error_loading_extension__s3eEval_4a057b68);
    }
    puVar1[1] = 1;
    puVar1[2] = 1;
  }
  return *puVar1;
}



// Address: 4a057b8c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_4a057b8c(uint param_1,uint param_2,uint *param_3,uint param_4)

{
  ushort uVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  short *psVar16;
  char *pcVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  bool bVar22;
  uint local_264;
  uint local_260;
  uint local_25c;
  uint local_254 [64];
  int local_154 [64];
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint *local_2c;
  uint uStack_28;
  
  uStack_28 = param_4;
  local_2c = param_3;
  local_30 = param_2;
  uStack_34 = param_1;
  local_4c = param_1 & 1;
  local_50 = (param_1 & 2) >> 1;
  local_54 = (param_1 & 4) >> 2;
  pcVar17 = *(char **)PTR_DAT_4a0581d0;
  uVar9 = *(undefined4 *)(*(int *)PTR_DAT_4a0581d4 + 0x10);
  local_25c = 4;
  uVar15 = (param_1 & 8) >> 3;
  local_3c = local_4c & ~uVar15;
  local_38 = local_50 & local_4c & ~uVar15;
  do {
    uVar15 = local_30;
    if ((local_25c & param_4) != 0) {
      iVar21 = local_30 - 1;
      piVar3 = (int *)PTR_DAT_4a0581d4;
      piVar10 = local_154;
      puVar13 = local_2c;
      puVar14 = local_254;
      do {
        uVar15 = *puVar13;
        *piVar10 = *piVar3;
        iVar21 = iVar21 + -1;
        *puVar14 = uVar15;
        piVar3 = piVar3 + 1;
        piVar10 = piVar10 + 1;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
      } while (-1 < iVar21);
      local_260 = 0x3c;
      bVar22 = (*local_2c & local_25c) == 0;
      uVar19 = 0;
      param_4 = 0;
      if (bVar22) {
        local_260 = local_254[0] & 0x3c;
        param_4 = local_254[0];
      }
      uVar15 = (uint)bVar22;
      local_264 = 1;
      if (0 < (int)local_30) {
        do {
          uVar20 = local_264;
          if (local_264 == local_30) {
            uVar20 = 0;
          }
          if ((local_25c & (local_254[uVar19] ^ local_254[uVar20])) != 0) {
            bVar22 = (local_254[uVar19] & local_25c) != 0;
            uVar6 = uVar20;
            if (bVar22) {
              uVar6 = uVar19;
            }
            uVar18 = uVar19;
            if (bVar22) {
              uVar18 = uVar20;
            }
            iVar11 = local_154[uVar18];
            psVar16 = (short *)(pcVar17 + 4);
            local_40 = (int)*(short *)(iVar11 + 4);
            iVar4 = *(short *)(local_154[uVar6] + 4) - local_40;
            iVar12 = (int)*(short *)(iVar11 + 6);
            iVar21 = *(short *)(local_154[uVar6] + 6) - iVar12;
            if (local_25c == 4) {
              if (4 < iVar4 + 2U) {
                local_44 = *(int *)(PTR_LAB_4a0581d8 + 0x20);
                uVar5 = local_44 * 8 - local_40;
                iVar12 = FUN_4a00080c(uVar5 * 0x1000,((int)uVar5 >> 0x1f) << 0xc | uVar5 >> 0x14,
                                      iVar4,iVar4 >> 0x1f);
                puVar2 = PTR_LAB_4a0581d8;
                *psVar16 = (short)(local_44 << 3);
                iVar21 = iVar12 * iVar21;
                bVar22 = iVar21 < 0;
                if (bVar22) {
                  iVar21 = -iVar21;
                }
                iVar21 = iVar21 >> 0xc;
                if (bVar22) {
                  iVar21 = -iVar21;
                }
                iVar21 = (iVar21 + (uint)*(ushort *)(iVar11 + 6)) * 0x10000;
                iVar4 = iVar21 >> 0x10;
                *(short *)(pcVar17 + 6) = (short)((uint)iVar21 >> 0x10);
                uVar8 = 0;
                if (*(int *)(puVar2 + 0x18) * 8 < iVar4) {
LAB_4a057ec4:
                  uVar8 = 0x10;
                }
                else if (iVar4 < *(int *)(puVar2 + 0x14) * 8) {
LAB_4a057ed8:
                  uVar8 = 0x20;
                }
LAB_4a057e30:
                *(undefined2 *)(pcVar17 + 0x14) = uVar8;
                goto LAB_4a057f48;
              }
            }
            else if (local_25c == 8) {
              if (4 < iVar4 + 2U) {
                local_48 = *(int *)(PTR_LAB_4a0581d8 + 0x1c);
                uVar5 = local_48 * 8 - local_40;
                iVar12 = FUN_4a00080c(uVar5 * 0x1000,((int)uVar5 >> 0x1f) << 0xc | uVar5 >> 0x14,
                                      iVar4,iVar4 >> 0x1f);
                puVar2 = PTR_LAB_4a0581d8;
                *psVar16 = (short)(local_48 << 3);
                iVar21 = iVar12 * iVar21;
                bVar22 = iVar21 < 0;
                if (bVar22) {
                  iVar21 = -iVar21;
                }
                iVar21 = iVar21 >> 0xc;
                if (bVar22) {
                  iVar21 = -iVar21;
                }
                iVar21 = (iVar21 + (uint)*(ushort *)(iVar11 + 6)) * 0x10000;
                iVar4 = iVar21 >> 0x10;
                *(short *)(pcVar17 + 6) = (short)((uint)iVar21 >> 0x10);
                uVar8 = 0;
                if (*(int *)(puVar2 + 0x18) * 8 < iVar4) goto LAB_4a057ec4;
                if (iVar4 < *(int *)(puVar2 + 0x14) * 8) goto LAB_4a057ed8;
                goto LAB_4a057e30;
              }
            }
            else if (local_25c == 0x10) {
              if (4 < iVar21 + 2U) {
                uVar5 = *(int *)(PTR_LAB_4a0581d8 + 0x18) * 8 - iVar12;
                iVar12 = FUN_4a00080c(uVar5 * 0x1000,((int)uVar5 >> 0x1f) << 0xc | uVar5 >> 0x14,
                                      iVar21,iVar21 >> 0x1f);
                iVar4 = iVar12 * iVar4;
                bVar22 = iVar4 < 0;
                if (bVar22) {
                  iVar4 = -iVar4;
                }
                sVar7 = (short)(iVar4 >> 0xc);
                if (bVar22) {
                  sVar7 = -sVar7;
                }
                *psVar16 = sVar7 + (short)local_40;
                *(short *)(pcVar17 + 6) = (short)(*(int *)(PTR_LAB_4a0581d8 + 0x18) << 3);
                pcVar17[0x14] = '\0';
                pcVar17[0x15] = '\0';
LAB_4a057f48:
                if (local_4c != 0) {
                  *(short *)(pcVar17 + 0x18) =
                       *(short *)(local_154[uVar18] + 0x18) +
                       (short)(iVar12 * ((int)*(short *)(local_154[uVar6] + 0x18) -
                                        (int)*(short *)(local_154[uVar18] + 0x18)) >> 0xc);
                  *(short *)(pcVar17 + 0x1a) =
                       *(short *)(local_154[uVar18] + 0x1a) +
                       (short)(iVar12 * ((int)*(short *)(local_154[uVar6] + 0x1a) -
                                        (int)*(short *)(local_154[uVar18] + 0x1a)) >> 0xc);
                }
                if (local_38 != 0) {
                  *pcVar17 = *(byte *)local_154[uVar18] +
                             (char)((int)(iVar12 * ((uint)*(byte *)local_154[uVar6] -
                                                   (uint)*(byte *)local_154[uVar18])) >> 0xc);
                }
                if ((local_50 != 0) && (local_3c == 0)) {
                  *pcVar17 = *(byte *)local_154[uVar18] +
                             (char)((int)(iVar12 * ((uint)*(byte *)local_154[uVar6] -
                                                   (uint)*(byte *)local_154[uVar18])) >> 0xc);
                  pcVar17[1] = *(byte *)(local_154[uVar18] + 1) +
                               (char)((int)(iVar12 * ((uint)*(byte *)(local_154[uVar6] + 1) -
                                                     (uint)*(byte *)(local_154[uVar18] + 1))) >> 0xc
                                     );
                  pcVar17[2] = *(byte *)(local_154[uVar18] + 2) +
                               (char)((int)(iVar12 * ((uint)*(byte *)(local_154[uVar6] + 2) -
                                                     (uint)*(byte *)(local_154[uVar18] + 2))) >> 0xc
                                     );
                  pcVar17[3] = *(byte *)(local_154[uVar18] + 3) +
                               (char)((int)(iVar12 * ((uint)*(byte *)(local_154[uVar6] + 3) -
                                                     (uint)*(byte *)(local_154[uVar18] + 3))) >> 0xc
                                     );
                }
                if (local_54 != 0) {
                  *(short *)(pcVar17 + 0x1c) =
                       *(short *)(local_154[uVar18] + 0x1c) +
                       (short)(iVar12 * ((int)*(short *)(local_154[uVar6] + 0x1c) -
                                        (int)*(short *)(local_154[uVar18] + 0x1c)) >> 0xc);
                  *(short *)(pcVar17 + 0x1e) =
                       *(short *)(local_154[uVar18] + 0x1e) +
                       (short)(((int)*(short *)(local_154[uVar6] + 0x1e) -
                               (int)*(short *)(local_154[uVar18] + 0x1e)) * iVar12 >> 0xc);
                }
                uVar1 = *(ushort *)(pcVar17 + 0x14);
                uVar6 = uVar1 & 0x3c;
                if ((uVar1 & 0x3c) == 0) {
                  *(ushort *)(pcVar17 + 0x14) = uVar1 | 0x200;
                  *(undefined4 *)(pcVar17 + 0x10) = uVar9;
                  *(undefined4 *)(pcVar17 + 0xc) = *(undefined4 *)psVar16;
                  *(undefined4 *)(pcVar17 + 8) = *(undefined4 *)psVar16;
                }
                param_4 = param_4 | uVar6;
                local_260 = local_260 & uVar6;
                local_2c[uVar15] = uVar6;
                *(char **)(PTR_DAT_4a0581d4 + uVar15 * 4) = pcVar17;
                pcVar17 = pcVar17 + 0x20;
                uVar15 = uVar15 + 1;
              }
            }
            else if (4 < iVar21 + 2U) {
              uVar5 = *(int *)(PTR_LAB_4a0581d8 + 0x14) * 8 - iVar12;
              iVar12 = FUN_4a00080c(uVar5 * 0x1000,((int)uVar5 >> 0x1f) << 0xc | uVar5 >> 0x14,
                                    iVar21,iVar21 >> 0x1f);
              iVar4 = iVar12 * iVar4;
              bVar22 = iVar4 < 0;
              if (bVar22) {
                iVar4 = -iVar4;
              }
              sVar7 = (short)(iVar4 >> 0xc);
              if (bVar22) {
                sVar7 = -sVar7;
              }
              *psVar16 = sVar7 + (short)local_40;
              *(short *)(pcVar17 + 6) = (short)(*(int *)(PTR_LAB_4a0581d8 + 0x14) << 3);
              pcVar17[0x14] = '\0';
              pcVar17[0x15] = '\0';
              goto LAB_4a057f48;
            }
          }
          if (uVar20 == 0) {
            if ((local_260 != 0) || (uVar15 == 0)) {
              return 0;
            }
            if ((param_4 & 0x3f) == 0) {
              return uVar15;
            }
          }
          else {
            uVar6 = local_254[uVar20];
            uVar19 = uVar20;
            if ((local_25c & uVar6) == 0) {
              *(int *)(PTR_DAT_4a0581d4 + uVar15 * 4) = local_154[uVar20];
              local_2c[uVar15] = uVar6;
              param_4 = param_4 | local_254[uVar20];
              local_260 = local_254[uVar20] & local_260;
              uVar15 = uVar15 + 1;
            }
          }
          local_264 = local_264 + 1;
        } while ((int)local_264 <= (int)local_30);
      }
    }
    local_30 = uVar15;
    local_25c = local_25c * 2;
    if (local_25c == 0x40) {
      return local_30;
    }
  } while( true );
}



// Address: 4a0581dc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_4a0581dc(uint param_1,uint param_2,uint *param_3,uint param_4)

{
  ushort uVar1;
  undefined *puVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  ushort *puVar14;
  int *piVar15;
  char *pcVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
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
  pcVar16 = *(char **)PTR_DAT_4a058c64;
  local_250 = 1;
  uVar13 = (param_1 & 8) >> 3;
  local_3c = local_44 & ~uVar13;
  local_38 = local_48 & local_44 & ~uVar13;
  do {
    if ((local_28 & local_250) != 0) {
      iVar21 = local_30 - 1;
      piVar15 = (int *)PTR_DAT_4a058c68;
      piVar7 = aiStack_14c;
      puVar9 = local_2c;
      puVar11 = local_24c;
      do {
        uVar13 = *puVar9;
        *piVar7 = *piVar15;
        iVar21 = iVar21 + -1;
        *puVar11 = uVar13;
        piVar15 = piVar15 + 1;
        piVar7 = piVar7 + 1;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      } while (-1 < iVar21);
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
            uVar17 = local_264;
            uVar13 = local_25c;
            if ((local_24c[local_25c] & local_250) != 0) {
              uVar17 = local_25c;
              uVar13 = local_264;
            }
            iVar8 = aiStack_14c[uVar13];
            iVar21 = aiStack_14c[uVar17];
            local_40 = *(int *)(iVar8 + 8);
            uVar19 = *(int *)(iVar21 + 8) - local_40;
            iVar12 = *(int *)(iVar8 + 0xc);
            piVar15 = (int *)(pcVar16 + 8);
            uVar20 = *(int *)(iVar21 + 0xc) - iVar12;
            iVar4 = *(int *)(iVar8 + 0x10);
            iVar21 = *(int *)(iVar21 + 0x10) - iVar4;
            if (local_250 == 4) {
              iVar12 = iVar21 - uVar19;
              if (4 < iVar12 + 2U) {
                uVar5 = local_40 - iVar4;
                uVar5 = FUN_4a00080c(uVar5 * 0x10000,((int)uVar5 >> 0x1f) << 0x10 | uVar5 >> 0x10,
                                     iVar12,iVar12 >> 0x1f);
                iVar4 = (int)((longlong)(int)uVar5 * (longlong)(int)uVar19);
                iVar4 = FUN_4a0008b0(-iVar4,-((int)((ulonglong)
                                                    ((longlong)(int)uVar5 * (longlong)(int)uVar19)
                                                   >> 0x20) + (uint)(iVar4 != 0)),0x10);
                *piVar15 = local_40 - iVar4;
                bVar22 = (int)(uVar5 ^ uVar20) < 0;
                uVar19 = uVar5;
                if (bVar22) {
                  uVar19 = -uVar5;
                }
                uVar19 = (uint)((longlong)(int)uVar19 * (longlong)(int)uVar20) >> 0x10 |
                         (int)((ulonglong)((longlong)(int)uVar19 * (longlong)(int)uVar20) >> 0x20)
                         << 0x10;
                if (bVar22) {
                  uVar19 = -uVar19;
                }
                *(uint *)(pcVar16 + 0xc) = uVar19 + *(int *)(iVar8 + 0xc);
                iVar4 = (int)((longlong)(int)uVar5 * (longlong)iVar21);
                iVar21 = FUN_4a0008b0(-iVar4,-((int)((ulonglong)
                                                     ((longlong)(int)uVar5 * (longlong)iVar21) >>
                                                    0x20) + (uint)(iVar4 != 0)),0x10);
                iVar21 = *(int *)(iVar8 + 0x10) - iVar21;
                *(int *)(pcVar16 + 0x10) = iVar21;
                iVar4 = *(int *)(pcVar16 + 0xc);
                uVar3 = 0;
                if (iVar21 < iVar4) {
LAB_4a058794:
                  uVar3 = 0x10;
                }
                else if (-iVar21 != iVar4 && iVar21 <= -iVar4) {
LAB_4a0587a8:
                  uVar3 = 0x20;
                }
                goto LAB_4a0585c4;
              }
            }
            else if ((int)local_250 < 5) {
              if (local_250 == 1) {
                uVar5 = *(int *)(*(int *)PTR_DAT_4a058c6c + 0x2d0) * 0x40 - iVar4;
                uVar5 = FUN_4a00080c(uVar5 * 0x10000,((int)uVar5 >> 0x1f) << 0x10 | uVar5 >> 0x10,
                                     iVar21,iVar21 >> 0x1f);
                bVar22 = (int)(uVar5 ^ uVar19) < 0;
                uVar6 = uVar5;
                if (bVar22) {
                  uVar6 = -uVar5;
                }
                uVar19 = (uint)((longlong)(int)uVar6 * (longlong)(int)uVar19) >> 0x10 |
                         (int)((ulonglong)((longlong)(int)uVar6 * (longlong)(int)uVar19) >> 0x20) <<
                         0x10;
                if (bVar22) {
                  uVar19 = -uVar19;
                }
                *piVar15 = uVar19 + local_40;
                puVar2 = PTR_DAT_4a058c6c;
                bVar22 = (int)(uVar5 ^ uVar20) < 0;
                uVar19 = uVar5;
                if (bVar22) {
                  uVar19 = -uVar5;
                }
                uVar19 = (uint)((longlong)(int)uVar19 * (longlong)(int)uVar20) >> 0x10 |
                         (int)((ulonglong)((longlong)(int)uVar19 * (longlong)(int)uVar20) >> 0x20)
                         << 0x10;
                if (bVar22) {
                  uVar19 = -uVar19;
                }
                *(uint *)(pcVar16 + 0xc) = uVar19 + *(int *)(iVar8 + 0xc);
                iVar4 = *(int *)(*(int *)puVar2 + 0x2d0);
                iVar21 = iVar4 * 0x40;
                *(int *)(pcVar16 + 0x10) = iVar21;
                iVar8 = *piVar15;
                uVar3 = 0;
                if (iVar21 < iVar8) {
                  uVar3 = 4;
                }
                else if (iVar4 * -0x40 != iVar8 && iVar21 <= -iVar8) {
                  uVar3 = 8;
                }
                iVar8 = *(int *)(pcVar16 + 0xc);
                if (iVar21 < iVar8) {
LAB_4a058428:
                  uVar3 = uVar3 | 0x10;
                }
                else if (iVar4 * -0x40 != iVar8 && iVar21 <= -iVar8) {
LAB_4a0585d8:
                  uVar3 = uVar3 | 0x20;
                }
LAB_4a0585c4:
                *(ushort *)(pcVar16 + 0x14) = uVar3;
              }
              else {
                if (local_250 == 2) {
                  uVar5 = *(int *)(*(int *)PTR_DAT_4a058c6c + 0x2d4) * 0x40 - iVar4;
                  uVar5 = FUN_4a00080c(uVar5 * 0x10000,((int)uVar5 >> 0x1f) << 0x10 | uVar5 >> 0x10,
                                       iVar21,iVar21 >> 0x1f);
                  *piVar15 = ((uint)((longlong)(int)uVar5 * (longlong)(int)uVar19) >> 0x10 |
                             (int)((ulonglong)((longlong)(int)uVar5 * (longlong)(int)uVar19) >> 0x20
                                  ) << 0x10) + local_40;
                  *(uint *)(pcVar16 + 0xc) =
                       ((uint)((longlong)(int)uVar5 * (longlong)(int)uVar20) >> 0x10 |
                       (int)((ulonglong)((longlong)(int)uVar5 * (longlong)(int)uVar20) >> 0x20) <<
                       0x10) + *(int *)(iVar8 + 0xc);
                  iVar4 = *(int *)(*(int *)PTR_DAT_4a058c6c + 0x2d4);
                  iVar21 = iVar4 * 0x40;
                  *(int *)(pcVar16 + 0x10) = iVar21;
                  iVar8 = *piVar15;
                  uVar3 = 0;
                  if (iVar21 < iVar8) {
                    uVar3 = 4;
                  }
                  else if (iVar4 * -0x40 != iVar8 && iVar21 <= -iVar8) {
                    uVar3 = 8;
                  }
                  iVar8 = *(int *)(pcVar16 + 0xc);
                  if (iVar21 < iVar8) goto LAB_4a058428;
                  if (iVar4 * -0x40 != iVar8 && iVar21 <= -iVar8) goto LAB_4a0585d8;
                  goto LAB_4a0585c4;
                }
LAB_4a0587b0:
                iVar10 = -(iVar21 + uVar20);
                if (iVar10 + 2U < 5) goto LAB_4a058b64;
                uVar5 = iVar4 + iVar12;
                uVar5 = FUN_4a00080c(uVar5 * 0x10000,((int)uVar5 >> 0x1f) << 0x10 | uVar5 >> 0x10,
                                     iVar10,iVar10 >> 0x1f);
                bVar22 = (int)(uVar5 ^ uVar19) < 0;
                uVar6 = uVar5;
                if (bVar22) {
                  uVar6 = -uVar5;
                }
                uVar19 = (uint)((longlong)(int)uVar6 * (longlong)(int)uVar19) >> 0x10 |
                         (int)((ulonglong)((longlong)(int)uVar6 * (longlong)(int)uVar19) >> 0x20) <<
                         0x10;
                if (bVar22) {
                  uVar19 = -uVar19;
                }
                *piVar15 = uVar19 + local_40;
                iVar4 = (int)((longlong)(int)uVar5 * (longlong)(int)uVar20);
                iVar4 = FUN_4a0008b0(-iVar4,-((int)((ulonglong)
                                                    ((longlong)(int)uVar5 * (longlong)(int)uVar20)
                                                   >> 0x20) + (uint)(iVar4 != 0)),0x10);
                *(int *)(pcVar16 + 0xc) = *(int *)(iVar8 + 0xc) - iVar4;
                iVar4 = (int)((longlong)(int)uVar5 * (longlong)iVar21);
                iVar21 = FUN_4a0008b0(-iVar4,-((int)((ulonglong)
                                                     ((longlong)(int)uVar5 * (longlong)iVar21) >>
                                                    0x20) + (uint)(iVar4 != 0)),0x10);
                *(int *)(pcVar16 + 0x10) = *(int *)(iVar8 + 0x10) - iVar21;
                pcVar16[0x14] = '\0';
                pcVar16[0x15] = '\0';
              }
LAB_4a058870:
              if (local_44 != 0) {
                *(short *)(pcVar16 + 0x18) =
                     *(short *)(aiStack_14c[uVar13] + 0x18) +
                     (short)(((int)*(short *)(aiStack_14c[uVar17] + 0x18) -
                             (int)*(short *)(aiStack_14c[uVar13] + 0x18)) * uVar5 >> 0x10);
                *(short *)(pcVar16 + 0x1a) =
                     *(short *)(aiStack_14c[uVar13] + 0x1a) +
                     (short)(((int)*(short *)(aiStack_14c[uVar17] + 0x1a) -
                             (int)*(short *)(aiStack_14c[uVar13] + 0x1a)) * uVar5 >> 0x10);
              }
              if (local_38 != 0) {
                *pcVar16 = *(byte *)aiStack_14c[uVar13] +
                           (char)(uVar5 * ((uint)*(byte *)aiStack_14c[uVar17] -
                                          (uint)*(byte *)aiStack_14c[uVar13]) >> 0x10);
              }
              if ((local_48 != 0) && (local_3c == 0)) {
                *pcVar16 = *(byte *)aiStack_14c[uVar13] +
                           (char)(uVar5 * ((uint)*(byte *)aiStack_14c[uVar17] -
                                          (uint)*(byte *)aiStack_14c[uVar13]) >> 0x10);
                pcVar16[1] = *(byte *)(aiStack_14c[uVar13] + 1) +
                             (char)(uVar5 * ((uint)*(byte *)(aiStack_14c[uVar17] + 1) -
                                            (uint)*(byte *)(aiStack_14c[uVar13] + 1)) >> 0x10);
                pcVar16[2] = *(byte *)(aiStack_14c[uVar13] + 2) +
                             (char)(uVar5 * ((uint)*(byte *)(aiStack_14c[uVar17] + 2) -
                                            (uint)*(byte *)(aiStack_14c[uVar13] + 2)) >> 0x10);
                pcVar16[3] = *(byte *)(aiStack_14c[uVar13] + 3) +
                             (char)(uVar5 * ((uint)*(byte *)(aiStack_14c[uVar17] + 3) -
                                            (uint)*(byte *)(aiStack_14c[uVar13] + 3)) >> 0x10);
              }
              if (local_4c != 0) {
                *(short *)(pcVar16 + 0x1c) =
                     *(short *)(aiStack_14c[uVar13] + 0x1c) +
                     (short)(((int)*(short *)(aiStack_14c[uVar17] + 0x1c) -
                             (int)*(short *)(aiStack_14c[uVar13] + 0x1c)) * uVar5 >> 0x10);
                *(short *)(pcVar16 + 0x1e) =
                     *(short *)(aiStack_14c[uVar13] + 0x1e) +
                     (short)(((int)*(short *)(aiStack_14c[uVar17] + 0x1e) -
                             (int)*(short *)(aiStack_14c[uVar13] + 0x1e)) * uVar5 >> 0x10);
              }
              uVar3 = *(ushort *)(pcVar16 + 0x14);
              uVar13 = uVar3 & 0x3d;
              if ((uVar3 & 0x3d) == 0) {
                puVar14 = (ushort *)(pcVar16 + 4);
                *(ushort *)(pcVar16 + 0x14) = uVar3 | 0x80;
                puVar2 = PTR_DAT_4a058c6c;
                if ((uVar3 & 0xbf | 0x80) == 0x80) {
                  *(ushort *)(pcVar16 + 0x14) = uVar3 & 0xff7f;
                  iVar21 = *(int *)puVar2;
                  if ((uVar3 & 0x400) == 0) {
                    uVar18 = *(undefined4 *)(pcVar16 + 0x10);
                    iVar4 = FUN_4a0015f0(*(int *)(pcVar16 + 8) << 0xb,uVar18);
                    uVar3 = (ushort)((uint)(*(int *)(iVar21 + 0x310) * iVar4 * 0x10) >> 0x10);
                    iVar4 = FUN_4a0015f0(*(int *)(pcVar16 + 0xc) << 0xb,uVar18);
                    uVar1 = (ushort)((uint)(*(int *)(iVar21 + 0x314) * iVar4 * 0x10) >> 0x10);
                  }
                  else {
                    uVar3 = (ushort)((uint)((*(int *)(iVar21 + 0x34c) * 8 + -1) *
                                            *(int *)(pcVar16 + 8) * 8) >> 0x10);
                    uVar1 = (ushort)((uint)(*(int *)(pcVar16 + 0xc) *
                                            (*(int *)(iVar21 + 0x350) * 8 + -1) * 8) >> 0x10);
                  }
                  iVar4 = *(int *)(iVar21 + 0x354);
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
                      if (iVar4 != 3) goto LAB_4a058b04;
                      *puVar14 = uVar1;
                    }
                    *(ushort *)(pcVar16 + 6) = ~uVar3;
                  }
LAB_4a058b04:
                  *puVar14 = (short)*(undefined4 *)(iVar21 + 800) + *puVar14;
                  *(short *)(pcVar16 + 6) =
                       (short)*(undefined4 *)(iVar21 + 0x328) + *(short *)(pcVar16 + 6);
                }
              }
              local_28 = local_28 | uVar13;
              local_254 = local_254 & uVar13;
              local_2c[local_258] = uVar13;
              *(char **)(PTR_DAT_4a058c68 + local_258 * 4) = pcVar16;
              pcVar16 = pcVar16 + 0x20;
              local_258 = local_258 + 1;
            }
            else if (local_250 == 8) {
              iVar12 = uVar19 + iVar21;
              if (4 < iVar12 + 2U) {
                uVar5 = -(iVar4 + local_40);
                uVar5 = FUN_4a00080c((iVar4 + local_40) * -0x10000,
                                     ((int)uVar5 >> 0x1f) << 0x10 | uVar5 >> 0x10,iVar12,
                                     iVar12 >> 0x1f);
                iVar4 = (int)((longlong)(int)uVar5 * (longlong)(int)uVar19);
                iVar4 = FUN_4a0008b0(-iVar4,-((int)((ulonglong)
                                                    ((longlong)(int)uVar5 * (longlong)(int)uVar19)
                                                   >> 0x20) + (uint)(iVar4 != 0)),0x10);
                *piVar15 = local_40 - iVar4;
                bVar22 = (int)(uVar5 ^ uVar20) < 0;
                uVar19 = uVar5;
                if (bVar22) {
                  uVar19 = -uVar5;
                }
                uVar19 = (uint)((longlong)(int)uVar19 * (longlong)(int)uVar20) >> 0x10 |
                         (int)((ulonglong)((longlong)(int)uVar19 * (longlong)(int)uVar20) >> 0x20)
                         << 0x10;
                if (bVar22) {
                  uVar19 = -uVar19;
                }
                *(uint *)(pcVar16 + 0xc) = uVar19 + *(int *)(iVar8 + 0xc);
                iVar4 = (int)((longlong)(int)uVar5 * (longlong)iVar21);
                iVar21 = FUN_4a0008b0(-iVar4,-((int)((ulonglong)
                                                     ((longlong)(int)uVar5 * (longlong)iVar21) >>
                                                    0x20) + (uint)(iVar4 != 0)),0x10);
                iVar21 = *(int *)(iVar8 + 0x10) - iVar21;
                *(int *)(pcVar16 + 0x10) = iVar21;
                iVar4 = *(int *)(pcVar16 + 0xc);
                uVar3 = 0;
                if (iVar21 < iVar4) goto LAB_4a058794;
                if (-iVar21 != iVar4 && iVar21 <= -iVar4) goto LAB_4a0587a8;
                goto LAB_4a0585c4;
              }
            }
            else {
              if (local_250 != 0x10) goto LAB_4a0587b0;
              iVar10 = iVar21 - uVar20;
              if (4 < iVar10 + 2U) {
                uVar5 = iVar12 - iVar4;
                uVar5 = FUN_4a00080c(uVar5 * 0x10000,((int)uVar5 >> 0x1f) << 0x10 | uVar5 >> 0x10,
                                     iVar10,iVar10 >> 0x1f);
                bVar22 = (int)(uVar5 ^ uVar19) < 0;
                uVar6 = uVar5;
                if (bVar22) {
                  uVar6 = -uVar5;
                }
                uVar19 = (uint)((longlong)(int)uVar6 * (longlong)(int)uVar19) >> 0x10 |
                         (int)((ulonglong)((longlong)(int)uVar6 * (longlong)(int)uVar19) >> 0x20) <<
                         0x10;
                if (bVar22) {
                  uVar19 = -uVar19;
                }
                *piVar15 = uVar19 + local_40;
                iVar4 = FUN_4a0008b0((int)((longlong)(int)uVar5 * (longlong)(int)uVar20),
                                     (int)((ulonglong)((longlong)(int)uVar5 * (longlong)(int)uVar20)
                                          >> 0x20),0x10);
                *(int *)(pcVar16 + 0xc) = iVar4 + *(int *)(iVar8 + 0xc);
                iVar4 = (int)((longlong)(int)uVar5 * (longlong)iVar21);
                iVar21 = FUN_4a0008b0(-iVar4,-((int)((ulonglong)
                                                     ((longlong)(int)uVar5 * (longlong)iVar21) >>
                                                    0x20) + (uint)(iVar4 != 0)),0x10);
                *(int *)(pcVar16 + 0x10) = *(int *)(iVar8 + 0x10) - iVar21;
                pcVar16[0x14] = '\0';
                pcVar16[0x15] = '\0';
                goto LAB_4a058870;
              }
            }
          }
LAB_4a058b64:
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
              *(int *)(PTR_DAT_4a058c68 + local_258 * 4) = aiStack_14c[local_264];
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



// Address: 4a058c70

void FUN_4a058c70(int *param_1,int param_2,int param_3)

{
  short sVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  sVar1 = *(short *)(param_2 + 4);
  lVar2 = (longlong)((int)*(short *)(param_3 + 4) - (int)sVar1) *
          (longlong)
          *(int *)(*(int *)PTR_DAT_4a058d00 +
                  ((int)*(short *)(param_3 + 6) - (int)*(short *)(param_2 + 6)) * 4);
  uVar4 = (uint)lVar2 >> 0xc | (int)((ulonglong)lVar2 >> 0x20) << 0x14;
  iVar3 = uVar4 * (7 - ((int)*(short *)(param_2 + 6) + 3U & 7));
  bVar5 = iVar3 < 0;
  if (bVar5) {
    iVar3 = -iVar3;
  }
  iVar3 = iVar3 >> 3;
  if (bVar5) {
    iVar3 = -iVar3;
  }
  *(short *)((int)param_1 + 0x1a) = (short)(*(short *)(param_3 + 6) + 3 >> 3);
  *param_1 = iVar3 + sVar1 * 0x8000 + 0x18000;
  param_1[1] = uVar4;
  return;
}



// Address: 4a058d04

void FUN_4a058d04(int *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  short sVar2;
  longlong lVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ushort *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  short local_28;
  
  puVar4 = PTR_DAT_4a0590e4;
  sVar2 = *(short *)(param_2 + 4);
  iVar15 = (int)*(short *)(param_3 + 6) - (int)*(short *)(param_2 + 6);
  iVar13 = (int)*(short *)(param_3 + 4) - (int)sVar2;
  uVar5 = *(uint *)(*(int *)PTR_DAT_4a0590e4 + iVar15 * 4);
  uVar14 = (uint)((longlong)iVar13 * (longlong)(int)uVar5) >> 0xc |
           (int)((ulonglong)((longlong)iVar13 * (longlong)(int)uVar5) >> 0x20) << 0x14;
  iVar6 = 7 - ((int)*(short *)(param_2 + 6) + 3U & 7);
  iVar16 = uVar14 * iVar6;
  bVar18 = iVar16 < 0;
  if (bVar18) {
    iVar16 = -iVar16;
  }
  iVar16 = iVar16 >> 3;
  if (bVar18) {
    iVar16 = -iVar16;
  }
  *(short *)((int)param_1 + 0x1a) = (short)(*(short *)(param_3 + 6) + 3 >> 3);
  *param_1 = sVar2 * 0x8000 + 0x18000 + iVar16;
  param_1[1] = uVar14;
  iVar16 = *(int *)(param_2 + 0x10) >> 3;
  iVar17 = iVar16;
  if (0x7fff < iVar16) {
    iVar17 = *(int *)(param_2 + 0x10) >> 6;
  }
  uVar14 = *(uint *)(*(int *)puVar4 + iVar17 * 4);
  iVar17 = *(int *)(param_3 + 0x10) >> 3;
  iVar8 = iVar17 - iVar16;
  if (0x7fff < iVar16) {
    uVar14 = (int)uVar14 >> 3;
  }
  puVar11 = (ushort *)(param_1 + 6);
  if (iVar8 == 0) {
    param_1[2] = uVar14 << 4;
    param_1[3] = 0;
    *puVar11 = *puVar11 | 4;
  }
  else {
    iVar9 = iVar17;
    if (0x7fff < iVar17) {
      iVar9 = *(int *)(param_3 + 0x10) >> 6;
    }
    uVar7 = *(uint *)(*(int *)puVar4 + iVar9 * 4);
    if (0x7fff < iVar17) {
      uVar7 = (int)uVar7 >> 3;
    }
    uVar10 = uVar7 - uVar14;
    bVar18 = (int)(uVar10 ^ uVar5) < 0;
    if (bVar18) {
      uVar10 = -uVar10;
    }
    uVar10 = (uint)((longlong)(int)uVar10 * (longlong)(int)uVar5) >> 0x17 |
             (int)((ulonglong)((longlong)(int)uVar10 * (longlong)(int)uVar5) >> 0x20) << 9;
    if (bVar18) {
      uVar10 = -uVar10;
    }
    param_1[3] = uVar10;
    if (iVar8 < 0) {
      iVar8 = iVar16 - iVar17;
      iVar16 = iVar17;
    }
    param_1[2] = (iVar6 * ((int)uVar10 >> 1) >> 2) + uVar14 * 0x10;
    if (iVar13 < 0) {
      iVar13 = -iVar13;
    }
    iVar8 = iVar8 * (iVar15 + iVar13 + 8 >> 1);
    if (iVar8 + iVar16 * -0x10 != 0 && iVar16 * 0x10 <= iVar8) {
      iVar16 = (int)(uVar14 << 4) >> 0xe;
      *puVar11 = *puVar11 | 8;
      iVar15 = *(int *)PTR_DAT_4a0590e4;
      uVar14 = (uVar14 & 0x3ff) * 0x10;
      iVar17 = *(int *)(iVar15 + iVar16 * 4);
      uVar10 = *(int *)(iVar15 + iVar16 * 4 + 4) - iVar17;
      lVar3 = (ulonglong)uVar14 * (ulonglong)uVar10;
      iVar17 = ((uint)lVar3 >> 0xe |
               (((int)uVar10 >> 0x1f) * uVar14 + (int)((ulonglong)lVar3 >> 0x20)) * 0x40000) +
               iVar17;
      iVar16 = (int)(uVar7 << 4) >> 0xe;
      iVar13 = *(int *)(iVar15 + iVar16 * 4);
      uVar10 = *(int *)(iVar15 + iVar16 * 4 + 4) - iVar13;
      uVar14 = (uVar7 & 0x3ff) * 0x10;
      lVar3 = (ulonglong)uVar14 * (ulonglong)uVar10;
      uVar14 = (iVar13 + ((uint)lVar3 >> 0xe |
                         (((int)uVar10 >> 0x1f) * uVar14 + (int)((ulonglong)lVar3 >> 0x20)) *
                         0x40000)) - iVar17;
      iVar16 = (int)(uVar14 * 0x10) >> 0xe;
      iVar13 = iVar16;
      if (iVar16 < 0) {
        iVar13 = -iVar16;
      }
      iVar8 = iVar13;
      if (0x7fff < iVar13) {
        iVar8 = iVar13 >> 3;
      }
      iVar8 = *(int *)(iVar15 + iVar8 * 4);
      if (0x7fff < iVar13) {
        iVar8 = iVar8 >> 3;
      }
      if (iVar16 < 0) {
        iVar8 = -iVar8;
      }
      iVar16 = iVar16 + 1;
      iVar13 = iVar16;
      if (iVar16 < 0) {
        iVar13 = -iVar16;
      }
      iVar9 = iVar13;
      if (0x7fff < iVar13) {
        iVar9 = iVar13 >> 3;
      }
      iVar15 = *(int *)(iVar15 + iVar9 * 4);
      if (0x7fff < iVar13) {
        iVar15 = iVar15 >> 3;
      }
      if (iVar16 < 0) {
        iVar15 = -iVar15;
      }
      uVar14 = (uVar14 & 0x3ff) * 0x10;
      lVar3 = (ulonglong)uVar14 * (ulonglong)(uint)(iVar15 - iVar8);
      param_1[4] = iVar17;
      param_1[5] = iVar8 + ((uint)lVar3 >> 0xe |
                           ((iVar15 - iVar8 >> 0x1f) * uVar14 + (int)((ulonglong)lVar3 >> 0x20)) *
                           0x40000);
    }
  }
  uVar7 = (uint)param_2[3];
  iVar15 = *(int *)(PTR_LAB_4a0590e8 + 0x48);
  bVar1 = param_3[3];
  uVar14 = (uint)*(byte *)(iVar15 + ((int)(uint)*param_2 >> 3));
  uVar10 = (uint)*(byte *)(iVar15 + ((int)(uint)param_2[1] >> 3));
  uVar12 = (uint)*(byte *)(iVar15 + ((int)(uint)param_2[2] >> 3));
  local_28 = (short)iVar6;
  iVar17 = (int)local_28;
  iVar16 = (uint)*(byte *)(iVar15 + ((int)(uint)*param_3 >> 3)) * 4;
  iVar13 = (uint)*(byte *)(iVar15 + ((int)(uint)param_3[1] >> 3)) * 4;
  iVar6 = (uint)*(byte *)(iVar15 + ((int)(uint)param_3[2] >> 3)) * 4;
  if ((*(ushort *)(param_1 + 6) & 8) == 0) {
    iVar15 = (int)uVar5 >> 7;
    iVar13 = iVar15 * (iVar13 + uVar10 * -4);
    param_1[0xc] = iVar13;
    param_1[8] = iVar17 * (iVar13 >> 3) + uVar10 * 0x400000;
    iVar13 = iVar15 * (iVar6 + uVar12 * -4);
    param_1[0xd] = iVar13;
    param_1[9] = iVar17 * (iVar13 >> 3) + uVar12 * 0x400000;
    iVar16 = iVar15 * (iVar16 + uVar14 * -4);
    param_1[0xb] = iVar16;
    param_1[7] = iVar17 * (iVar16 >> 3) + uVar14 * 0x400000;
    iVar15 = iVar15 * (bVar1 - uVar7);
    param_1[0xe] = iVar15;
    iVar16 = iVar17 * (iVar15 >> 3) + uVar7 * 0x100000;
  }
  else {
    param_1[0xc] = (iVar13 + uVar10 * -4) * 8;
    param_1[0xd] = (iVar6 + uVar12 * -4) * 8;
    param_1[9] = uVar12 << 0x16;
    param_1[0xb] = (iVar16 + uVar14 * -4) * 8;
    param_1[7] = uVar14 << 0x16;
    param_1[8] = uVar10 << 0x16;
    param_1[0xe] = (bVar1 - uVar7) * 8;
    iVar16 = uVar7 << 0x14;
  }
  param_1[10] = iVar16;
  return;
}



// Address: 4a0590ec

void FUN_4a0590ec(int *param_1,int param_2,int param_3)

{
  ushort uVar1;
  short sVar2;
  longlong lVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ushort *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  short local_28;
  
  puVar4 = PTR_DAT_4a059470;
  sVar2 = *(short *)(param_2 + 4);
  iVar14 = (int)*(short *)(param_3 + 6) - (int)*(short *)(param_2 + 6);
  iVar11 = (int)*(short *)(param_3 + 4) - (int)sVar2;
  uVar5 = *(uint *)(*(int *)PTR_DAT_4a059470 + iVar14 * 4);
  uVar12 = (uint)((longlong)iVar11 * (longlong)(int)uVar5) >> 0xc |
           (int)((ulonglong)((longlong)iVar11 * (longlong)(int)uVar5) >> 0x20) << 0x14;
  iVar6 = 7 - ((int)*(short *)(param_2 + 6) + 3U & 7);
  iVar15 = uVar12 * iVar6;
  bVar17 = iVar15 < 0;
  if (bVar17) {
    iVar15 = -iVar15;
  }
  iVar15 = iVar15 >> 3;
  *(short *)((int)param_1 + 0x1a) = (short)(*(short *)(param_3 + 6) + 3 >> 3);
  if (bVar17) {
    iVar15 = -iVar15;
  }
  param_1[1] = uVar12;
  *param_1 = sVar2 * 0x8000 + 0x18000 + iVar15;
  iVar15 = *(int *)(param_2 + 0x10) >> 3;
  iVar9 = iVar15;
  if (0x7fff < iVar15) {
    iVar9 = *(int *)(param_2 + 0x10) >> 6;
  }
  uVar12 = *(uint *)(*(int *)puVar4 + iVar9 * 4);
  iVar9 = *(int *)(param_3 + 0x10) >> 3;
  iVar7 = iVar9 - iVar15;
  if (0x7fff < iVar15) {
    uVar12 = (int)uVar12 >> 3;
  }
  puVar10 = (ushort *)(param_1 + 6);
  if (iVar7 == 0) {
    param_1[2] = uVar12 << 4;
    param_1[3] = 0;
    *puVar10 = *puVar10 | 4;
  }
  else {
    iVar8 = iVar9;
    if (0x7fff < iVar9) {
      iVar8 = *(int *)(param_3 + 0x10) >> 6;
    }
    uVar13 = *(uint *)(*(int *)puVar4 + iVar8 * 4);
    if (0x7fff < iVar9) {
      uVar13 = (int)uVar13 >> 3;
    }
    uVar16 = uVar13 - uVar12;
    bVar17 = (int)(uVar16 ^ uVar5) < 0;
    if (bVar17) {
      uVar16 = -uVar16;
    }
    uVar16 = (uint)((longlong)(int)uVar16 * (longlong)(int)uVar5) >> 0x17 |
             (int)((ulonglong)((longlong)(int)uVar16 * (longlong)(int)uVar5) >> 0x20) << 9;
    if (bVar17) {
      uVar16 = -uVar16;
    }
    param_1[3] = uVar16;
    if (iVar7 < 0) {
      iVar7 = iVar15 - iVar9;
      iVar15 = iVar9;
    }
    param_1[2] = (iVar6 * ((int)uVar16 >> 1) >> 2) + uVar12 * 0x10;
    if (iVar11 < 0) {
      iVar11 = -iVar11;
    }
    iVar7 = iVar7 * (iVar14 + iVar11 + 8 >> 1);
    if (iVar7 + iVar15 * -0x10 != 0 && iVar15 * 0x10 <= iVar7) {
      iVar15 = (int)(uVar12 << 4) >> 0xe;
      *puVar10 = *puVar10 | 8;
      iVar14 = *(int *)PTR_DAT_4a059470;
      uVar12 = (uVar12 & 0x3ff) * 0x10;
      iVar9 = *(int *)(iVar14 + iVar15 * 4);
      uVar16 = *(int *)(iVar14 + iVar15 * 4 + 4) - iVar9;
      lVar3 = (ulonglong)uVar12 * (ulonglong)uVar16;
      iVar9 = ((uint)lVar3 >> 0xe |
              (((int)uVar16 >> 0x1f) * uVar12 + (int)((ulonglong)lVar3 >> 0x20)) * 0x40000) + iVar9;
      iVar15 = (int)(uVar13 << 4) >> 0xe;
      iVar11 = *(int *)(iVar14 + iVar15 * 4);
      uVar16 = *(int *)(iVar14 + iVar15 * 4 + 4) - iVar11;
      uVar12 = (uVar13 & 0x3ff) * 0x10;
      lVar3 = (ulonglong)uVar12 * (ulonglong)uVar16;
      uVar12 = (((uint)lVar3 >> 0xe |
                (((int)uVar16 >> 0x1f) * uVar12 + (int)((ulonglong)lVar3 >> 0x20)) * 0x40000) +
               iVar11) - iVar9;
      iVar15 = (int)(uVar12 * 0x10) >> 0xe;
      iVar11 = iVar15;
      if (iVar15 < 0) {
        iVar11 = -iVar15;
      }
      iVar7 = iVar11;
      if (0x7fff < iVar11) {
        iVar7 = iVar11 >> 3;
      }
      iVar7 = *(int *)(iVar14 + iVar7 * 4);
      if (0x7fff < iVar11) {
        iVar7 = iVar7 >> 3;
      }
      if (iVar15 < 0) {
        iVar7 = -iVar7;
      }
      iVar15 = iVar15 + 1;
      iVar11 = iVar15;
      if (iVar15 < 0) {
        iVar11 = -iVar15;
      }
      iVar8 = iVar11;
      if (0x7fff < iVar11) {
        iVar8 = iVar11 >> 3;
      }
      iVar14 = *(int *)(iVar14 + iVar8 * 4);
      if (0x7fff < iVar11) {
        iVar14 = iVar14 >> 3;
      }
      if (iVar15 < 0) {
        iVar14 = -iVar14;
      }
      uVar12 = (uVar12 & 0x3ff) * 0x10;
      lVar3 = (ulonglong)uVar12 * (ulonglong)(uint)(iVar14 - iVar7);
      param_1[4] = iVar9;
      param_1[5] = iVar7 + ((uint)lVar3 >> 0xe |
                           ((iVar14 - iVar7 >> 0x1f) * uVar12 + (int)((ulonglong)lVar3 >> 0x20)) *
                           0x40000);
    }
  }
  iVar15 = *(short *)(param_2 + 0x18) * 0x10000;
  iVar11 = (int)*(short *)(param_3 + 0x18) - (int)*(short *)(param_2 + 0x18);
  iVar14 = (int)*(short *)(param_3 + 0x1a) - (int)*(short *)(param_2 + 0x1a);
  if (iVar11 < 0) {
    iVar15 = iVar15 + -1;
  }
  uVar1 = *(ushort *)(param_1 + 6);
  iVar9 = *(short *)(param_2 + 0x1a) * 0x10000;
  if (iVar14 < 0) {
    iVar9 = iVar9 + -1;
  }
  local_28 = (short)iVar6;
  puVar10 = (ushort *)(param_1 + 6);
  if (iVar11 == 0) {
    *puVar10 = uVar1 | 0x10;
  }
  if (iVar14 == 0) {
    *puVar10 = *puVar10 | 0x20;
  }
  param_1[7] = iVar11;
  param_1[8] = iVar14;
  param_1[9] = iVar15;
  param_1[10] = iVar9;
  if ((uVar1 & 8) != 0) {
    return;
  }
  if (uVar5 == 0x40000000) {
    return;
  }
  if (iVar11 != 0) {
    uVar12 = (uint)((longlong)iVar11 * (longlong)(int)uVar5) >> 0xb |
             (int)((ulonglong)((longlong)iVar11 * (longlong)(int)uVar5) >> 0x20) << 0x15;
    param_1[7] = uVar12;
    param_1[9] = iVar15 + ((int)local_28 * ((int)uVar12 >> 2) >> 1);
  }
  if (iVar14 != 0) {
    uVar5 = (uint)((longlong)iVar14 * (longlong)(int)uVar5) >> 0xb |
            (int)((ulonglong)((longlong)iVar14 * (longlong)(int)uVar5) >> 0x20) << 0x15;
    param_1[8] = uVar5;
    param_1[10] = iVar9 + ((int)local_28 * ((int)uVar5 >> 2) >> 1);
    return;
  }
  return;
}



// Address: 4a059474

void FUN_4a059474(int *param_1,byte *param_2,byte *param_3)

{
  ushort uVar1;
  short sVar2;
  longlong lVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ushort *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  short local_28;
  
  puVar4 = PTR_DAT_4a05986c;
  sVar2 = *(short *)(param_2 + 4);
  iVar14 = (int)*(short *)(param_3 + 6) - (int)*(short *)(param_2 + 6);
  iVar11 = (int)*(short *)(param_3 + 4) - (int)sVar2;
  uVar5 = *(uint *)(*(int *)PTR_DAT_4a05986c + iVar14 * 4);
  uVar12 = (uint)((longlong)iVar11 * (longlong)(int)uVar5) >> 0xc |
           (int)((ulonglong)((longlong)iVar11 * (longlong)(int)uVar5) >> 0x20) << 0x14;
  iVar6 = 7 - ((int)*(short *)(param_2 + 6) + 3U & 7);
  iVar15 = uVar12 * iVar6;
  bVar17 = iVar15 < 0;
  if (bVar17) {
    iVar15 = -iVar15;
  }
  iVar15 = iVar15 >> 3;
  if (bVar17) {
    iVar15 = -iVar15;
  }
  *(short *)((int)param_1 + 0x1a) = (short)(*(short *)(param_3 + 6) + 3 >> 3);
  *param_1 = sVar2 * 0x8000 + 0x18000 + iVar15;
  param_1[1] = uVar12;
  iVar15 = *(int *)(param_2 + 0x10) >> 3;
  iVar9 = iVar15;
  if (0x7fff < iVar15) {
    iVar9 = *(int *)(param_2 + 0x10) >> 6;
  }
  uVar12 = *(uint *)(*(int *)puVar4 + iVar9 * 4);
  iVar9 = *(int *)(param_3 + 0x10) >> 3;
  iVar7 = iVar9 - iVar15;
  if (0x7fff < iVar15) {
    uVar12 = (int)uVar12 >> 3;
  }
  puVar10 = (ushort *)(param_1 + 6);
  if (iVar7 == 0) {
    param_1[2] = uVar12 << 4;
    param_1[3] = 0;
    *puVar10 = *puVar10 | 4;
  }
  else {
    iVar8 = iVar9;
    if (0x7fff < iVar9) {
      iVar8 = *(int *)(param_3 + 0x10) >> 6;
    }
    uVar13 = *(uint *)(*(int *)puVar4 + iVar8 * 4);
    if (0x7fff < iVar9) {
      uVar13 = (int)uVar13 >> 3;
    }
    uVar16 = uVar13 - uVar12;
    bVar17 = (int)(uVar16 ^ uVar5) < 0;
    if (bVar17) {
      uVar16 = -uVar16;
    }
    uVar16 = (uint)((longlong)(int)uVar16 * (longlong)(int)uVar5) >> 0x17 |
             (int)((ulonglong)((longlong)(int)uVar16 * (longlong)(int)uVar5) >> 0x20) << 9;
    if (bVar17) {
      uVar16 = -uVar16;
    }
    param_1[3] = uVar16;
    if (iVar7 < 0) {
      iVar7 = iVar15 - iVar9;
      iVar15 = iVar9;
    }
    param_1[2] = (iVar6 * ((int)uVar16 >> 1) >> 2) + uVar12 * 0x10;
    if (iVar11 < 0) {
      iVar11 = -iVar11;
    }
    iVar7 = iVar7 * (iVar14 + iVar11 + 8 >> 1);
    if (iVar7 + iVar15 * -0x10 != 0 && iVar15 * 0x10 <= iVar7) {
      iVar15 = (int)(uVar12 << 4) >> 0xe;
      *puVar10 = *puVar10 | 8;
      iVar14 = *(int *)PTR_DAT_4a05986c;
      uVar12 = (uVar12 & 0x3ff) * 0x10;
      iVar9 = *(int *)(iVar14 + iVar15 * 4);
      uVar16 = *(int *)(iVar14 + iVar15 * 4 + 4) - iVar9;
      lVar3 = (ulonglong)uVar12 * (ulonglong)uVar16;
      iVar9 = ((uint)lVar3 >> 0xe |
              (((int)uVar16 >> 0x1f) * uVar12 + (int)((ulonglong)lVar3 >> 0x20)) * 0x40000) + iVar9;
      iVar15 = (int)(uVar13 << 4) >> 0xe;
      iVar11 = *(int *)(iVar14 + iVar15 * 4);
      uVar16 = *(int *)(iVar14 + iVar15 * 4 + 4) - iVar11;
      uVar12 = (uVar13 & 0x3ff) * 0x10;
      lVar3 = (ulonglong)uVar12 * (ulonglong)uVar16;
      uVar12 = (((uint)lVar3 >> 0xe |
                (((int)uVar16 >> 0x1f) * uVar12 + (int)((ulonglong)lVar3 >> 0x20)) * 0x40000) +
               iVar11) - iVar9;
      iVar15 = (int)(uVar12 * 0x10) >> 0xe;
      iVar11 = iVar15;
      if (iVar15 < 0) {
        iVar11 = -iVar15;
      }
      iVar7 = iVar11;
      if (0x7fff < iVar11) {
        iVar7 = iVar11 >> 3;
      }
      iVar7 = *(int *)(iVar14 + iVar7 * 4);
      if (0x7fff < iVar11) {
        iVar7 = iVar7 >> 3;
      }
      if (iVar15 < 0) {
        iVar7 = -iVar7;
      }
      iVar15 = iVar15 + 1;
      iVar11 = iVar15;
      if (iVar15 < 0) {
        iVar11 = -iVar15;
      }
      iVar8 = iVar11;
      if (0x7fff < iVar11) {
        iVar8 = iVar11 >> 3;
      }
      iVar14 = *(int *)(iVar14 + iVar8 * 4);
      if (0x7fff < iVar11) {
        iVar14 = iVar14 >> 3;
      }
      if (iVar15 < 0) {
        iVar14 = -iVar14;
      }
      uVar12 = (uVar12 & 0x3ff) * 0x10;
      lVar3 = (ulonglong)uVar12 * (ulonglong)(uint)(iVar14 - iVar7);
      param_1[4] = iVar9;
      param_1[5] = iVar7 + ((uint)lVar3 >> 0xe |
                           ((iVar14 - iVar7 >> 0x1f) * uVar12 + (int)((ulonglong)lVar3 >> 0x20)) *
                           0x40000);
    }
  }
  iVar11 = (int)*(short *)(param_3 + 0x18) - (int)*(short *)(param_2 + 0x18);
  iVar15 = *(short *)(param_2 + 0x18) * 0x10000;
  iVar14 = (int)*(short *)(param_3 + 0x1a) - (int)*(short *)(param_2 + 0x1a);
  if (iVar11 < 0) {
    iVar15 = iVar15 + -1;
  }
  uVar1 = *(ushort *)(param_1 + 6);
  iVar9 = *(short *)(param_2 + 0x1a) * 0x10000;
  if (iVar14 < 0) {
    iVar9 = iVar9 + -1;
  }
  local_28 = (short)iVar6;
  puVar10 = (ushort *)(param_1 + 6);
  if (iVar11 == 0) {
    *puVar10 = uVar1 | 0x10;
  }
  if (iVar14 == 0) {
    *puVar10 = *puVar10 | 0x20;
  }
  param_1[10] = iVar9;
  param_1[7] = iVar11;
  param_1[8] = iVar14;
  param_1[9] = iVar15;
  if (((uVar1 & 8) == 0) && (uVar5 != 0x40000000)) {
    if (iVar11 != 0) {
      uVar12 = (uint)((longlong)iVar11 * (longlong)(int)uVar5) >> 0xb |
               (int)((ulonglong)((longlong)iVar11 * (longlong)(int)uVar5) >> 0x20) << 0x15;
      param_1[7] = uVar12;
      param_1[9] = iVar15 + ((int)local_28 * ((int)uVar12 >> 2) >> 1);
    }
    if (iVar14 != 0) {
      uVar12 = (uint)((longlong)iVar14 * (longlong)(int)uVar5) >> 0xb |
               (int)((ulonglong)((longlong)iVar14 * (longlong)(int)uVar5) >> 0x20) << 0x15;
      param_1[8] = uVar12;
      param_1[10] = iVar9 + (((int)uVar12 >> 2) * (int)local_28 >> 1);
    }
  }
  iVar15 = 0;
  if (PTR_LAB_4a059870[0x45] != '\0') {
    iVar15 = 6;
  }
  uVar12 = (uint)*param_2 - iVar15;
  iVar15 = (uint)*param_3 - iVar15;
  if ((int)uVar12 < 0) {
    uVar12 = 0;
  }
  if (iVar15 < 0) {
    iVar15 = 0;
  }
  iVar11 = uVar12 * 0x100000;
  iVar15 = iVar15 - uVar12;
  if (iVar15 == 0) {
    uVar12 = *(ushort *)(param_1 + 6) | 0x40;
  }
  param_1[0xb] = iVar11;
  if (iVar15 == 0) {
    *(short *)(param_1 + 6) = (short)uVar12;
    iVar15 = 0;
  }
  else {
    if ((*(ushort *)(param_1 + 6) & 8) == 0) {
      iVar15 = iVar15 * ((int)uVar5 >> 7);
      param_1[0xb] = iVar11 + ((int)local_28 * (iVar15 >> 1) >> 2);
      param_1[0xc] = iVar15;
      return;
    }
    iVar15 = iVar15 * 8;
  }
  param_1[0xc] = iVar15;
  return;
}



// Address: 4a059874

void FUN_4a059874(int *param_1,int param_2,int param_3)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ushort *puVar12;
  bool bVar13;
  short local_20;
  
  sVar2 = *(short *)(param_2 + 4);
  iVar5 = *(int *)(*(int *)PTR_DAT_4a059a9c +
                  ((int)*(short *)(param_3 + 6) - (int)*(short *)(param_2 + 6)) * 4);
  lVar4 = (longlong)((int)*(short *)(param_3 + 4) - (int)sVar2) * (longlong)iVar5;
  uVar8 = (uint)lVar4 >> 0xc | (int)((ulonglong)lVar4 >> 0x20) << 0x14;
  iVar6 = 7 - ((int)*(short *)(param_2 + 6) + 3U & 7);
  iVar11 = uVar8 * iVar6;
  bVar13 = iVar11 < 0;
  if (bVar13) {
    iVar11 = -iVar11;
  }
  iVar11 = iVar11 >> 3;
  if (bVar13) {
    iVar11 = -iVar11;
  }
  *(short *)((int)param_1 + 0x1a) = (short)(*(short *)(param_3 + 6) + 3 >> 3);
  param_1[1] = uVar8;
  *param_1 = iVar11 + sVar2 * 0x8000 + 0x18000;
  iVar11 = *(short *)(param_2 + 0x18) * 0x10000;
  iVar9 = (int)*(short *)(param_3 + 0x18) - (int)*(short *)(param_2 + 0x18);
  iVar10 = (int)*(short *)(param_3 + 0x1a) - (int)*(short *)(param_2 + 0x1a);
  if (iVar9 < 0) {
    iVar11 = iVar11 + -1;
  }
  uVar1 = *(ushort *)(param_1 + 6);
  iVar7 = *(short *)(param_2 + 0x1a) * 0x10000;
  if (iVar10 < 0) {
    iVar7 = iVar7 + -1;
  }
  puVar12 = (ushort *)(param_1 + 6);
  if (iVar9 == 0) {
    *puVar12 = uVar1 | 0x10;
  }
  if (iVar10 == 0) {
    *puVar12 = *puVar12 | 0x20;
  }
  param_1[10] = iVar7;
  param_1[7] = iVar9;
  param_1[8] = iVar10;
  param_1[9] = iVar11;
  if (((uVar1 & 8) == 0) && (iVar5 != 0x40000000)) {
    if (iVar9 != 0) {
      uVar8 = (uint)((longlong)iVar9 * (longlong)iVar5) >> 0xb |
              (int)((ulonglong)((longlong)iVar9 * (longlong)iVar5) >> 0x20) << 0x15;
      param_1[7] = uVar8;
      param_1[9] = iVar11 + (iVar6 * ((int)uVar8 >> 2) >> 1);
    }
    if (iVar10 != 0) {
      uVar8 = (uint)((longlong)iVar10 * (longlong)iVar5) >> 0xb |
              (int)((ulonglong)((longlong)iVar10 * (longlong)iVar5) >> 0x20) << 0x15;
      param_1[8] = uVar8;
      param_1[10] = iVar7 + (iVar6 * ((int)uVar8 >> 2) >> 1);
    }
  }
  sVar2 = *(short *)(param_2 + 0x1c);
  sVar3 = *(short *)(param_2 + 0x1e);
  iVar11 = (int)*(short *)(param_3 + 0x1c) - (int)sVar2;
  iVar9 = (int)*(short *)(param_3 + 0x1e) - (int)sVar3;
  uVar1 = *(ushort *)(param_1 + 6);
  local_20 = (short)iVar6;
  param_1[0xd] = iVar11;
  param_1[0xe] = iVar9;
  param_1[0xc] = (int)sVar3 << 0x10;
  param_1[0xb] = (int)sVar2 << 0x10;
  puVar12 = (ushort *)(param_1 + 6);
  if (iVar5 == 0x40000000) {
    return;
  }
  if (iVar11 == 0) {
    *puVar12 = uVar1 | 0x80;
  }
  if (iVar9 == 0) {
    *puVar12 = *puVar12 | 0x100;
  }
  if ((uVar1 & 8) != 0) {
    return;
  }
  if (iVar11 != 0) {
    uVar8 = (uint)((longlong)iVar11 * (longlong)iVar5) >> 0xb |
            (int)((ulonglong)((longlong)iVar11 * (longlong)iVar5) >> 0x20) << 0x15;
    param_1[0xd] = uVar8;
    param_1[0xb] = param_1[0xb] + ((int)local_20 * ((int)uVar8 >> 1) >> 2);
  }
  if (iVar9 != 0) {
    uVar8 = (uint)((longlong)iVar9 * (longlong)iVar5) >> 0xb |
            (int)((ulonglong)((longlong)iVar9 * (longlong)iVar5) >> 0x20) << 0x15;
    param_1[0xe] = uVar8;
    param_1[0xc] = param_1[0xc] + ((int)local_20 * ((int)uVar8 >> 1) >> 2);
    return;
  }
  return;
}



// Address: 4a059aa0

void FUN_4a059aa0(int *param_1,byte *param_2,byte *param_3)

{
  ushort uVar1;
  short sVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  bool bVar12;
  short local_20;
  
  sVar2 = *(short *)(param_2 + 4);
  iVar4 = *(int *)(*(int *)PTR_DAT_4a059d3c +
                  ((int)*(short *)(param_3 + 6) - (int)*(short *)(param_2 + 6)) * 4);
  lVar3 = (longlong)((int)*(short *)(param_3 + 4) - (int)sVar2) * (longlong)iVar4;
  uVar7 = (uint)lVar3 >> 0xc | (int)((ulonglong)lVar3 >> 0x20) << 0x14;
  iVar5 = 7 - ((int)*(short *)(param_2 + 6) + 3U & 7);
  iVar10 = uVar7 * iVar5;
  bVar12 = iVar10 < 0;
  if (bVar12) {
    iVar10 = -iVar10;
  }
  iVar10 = iVar10 >> 3;
  if (bVar12) {
    iVar10 = -iVar10;
  }
  *(short *)((int)param_1 + 0x1a) = (short)(*(short *)(param_3 + 6) + 3 >> 3);
  param_1[1] = uVar7;
  *param_1 = iVar10 + sVar2 * 0x8000 + 0x18000;
  iVar10 = *(short *)(param_2 + 0x18) * 0x10000;
  iVar8 = (int)*(short *)(param_3 + 0x18) - (int)*(short *)(param_2 + 0x18);
  iVar9 = (int)*(short *)(param_3 + 0x1a) - (int)*(short *)(param_2 + 0x1a);
  if (iVar8 < 0) {
    iVar10 = iVar10 + -1;
  }
  uVar1 = *(ushort *)(param_1 + 6);
  iVar6 = *(short *)(param_2 + 0x1a) * 0x10000;
  if (iVar9 < 0) {
    iVar6 = iVar6 + -1;
  }
  puVar11 = (ushort *)(param_1 + 6);
  if (iVar8 == 0) {
    *puVar11 = uVar1 | 0x10;
  }
  if (iVar9 == 0) {
    *puVar11 = *puVar11 | 0x20;
  }
  param_1[10] = iVar6;
  param_1[7] = iVar8;
  param_1[8] = iVar9;
  param_1[9] = iVar10;
  if (((uVar1 & 8) == 0) && (iVar4 != 0x40000000)) {
    if (iVar8 != 0) {
      uVar7 = (uint)((longlong)iVar8 * (longlong)iVar4) >> 0xb |
              (int)((ulonglong)((longlong)iVar8 * (longlong)iVar4) >> 0x20) << 0x15;
      param_1[7] = uVar7;
      param_1[9] = iVar10 + (iVar5 * ((int)uVar7 >> 2) >> 1);
    }
    if (iVar9 != 0) {
      uVar7 = (uint)((longlong)iVar9 * (longlong)iVar4) >> 0xb |
              (int)((ulonglong)((longlong)iVar9 * (longlong)iVar4) >> 0x20) << 0x15;
      param_1[8] = uVar7;
      param_1[10] = iVar6 + (iVar5 * ((int)uVar7 >> 2) >> 1);
    }
  }
  sVar2 = *(short *)(param_2 + 0x1c);
  iVar10 = (int)*(short *)(param_3 + 0x1c) - (int)sVar2;
  iVar8 = (int)*(short *)(param_3 + 0x1e) - (int)*(short *)(param_2 + 0x1e);
  uVar1 = *(ushort *)(param_1 + 6);
  local_20 = (short)iVar5;
  param_1[0xe] = (int)*(short *)(param_2 + 0x1e) << 0x10;
  param_1[0xf] = iVar10;
  param_1[0x10] = iVar8;
  puVar11 = (ushort *)(param_1 + 6);
  param_1[0xd] = (int)sVar2 << 0x10;
  if (iVar4 != 0x40000000) {
    if (iVar10 == 0) {
      *puVar11 = uVar1 | 0x80;
    }
    if (iVar8 == 0) {
      *puVar11 = *puVar11 | 0x100;
    }
    if ((uVar1 & 8) == 0) {
      if (iVar10 != 0) {
        uVar7 = (uint)((longlong)iVar10 * (longlong)iVar4) >> 0xb |
                (int)((ulonglong)((longlong)iVar10 * (longlong)iVar4) >> 0x20) << 0x15;
        param_1[0xf] = uVar7;
        param_1[0xd] = param_1[0xd] + ((int)local_20 * ((int)uVar7 >> 1) >> 2);
      }
      if (iVar8 != 0) {
        uVar7 = (uint)((longlong)iVar8 * (longlong)iVar4) >> 0xb |
                (int)((ulonglong)((longlong)iVar8 * (longlong)iVar4) >> 0x20) << 0x15;
        param_1[0x10] = uVar7;
        param_1[0xe] = param_1[0xe] + ((int)local_20 * ((int)uVar7 >> 1) >> 2);
      }
    }
  }
  iVar10 = 0;
  if (PTR_LAB_4a059d40[0x45] != '\0') {
    iVar10 = 6;
  }
  uVar7 = (uint)*param_2 - iVar10;
  iVar10 = (uint)*param_3 - iVar10;
  if ((int)uVar7 < 0) {
    uVar7 = 0;
  }
  if (iVar10 < 0) {
    iVar10 = 0;
  }
  iVar5 = uVar7 * 0x100000;
  iVar10 = iVar10 - uVar7;
  if (iVar10 == 0) {
    uVar7 = *(ushort *)(param_1 + 6) | 0x40;
  }
  param_1[0xb] = iVar5;
  if (iVar10 == 0) {
    *(short *)(param_1 + 6) = (short)uVar7;
    iVar10 = 0;
  }
  else {
    if ((*(ushort *)(param_1 + 6) & 8) == 0) {
      iVar10 = iVar10 * (iVar4 >> 7);
      param_1[0xb] = iVar5 + ((int)local_20 * (iVar10 >> 1) >> 2);
      param_1[0xc] = iVar10;
      return;
    }
    iVar10 = iVar10 * 8;
  }
  param_1[0xc] = iVar10;
  return;
}



// Address: 4a059d44

void FUN_4a059d44(int *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  longlong lVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ushort *puVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  short local_28;
  
  puVar7 = PTR_DAT_4a05a1ac;
  sVar5 = *(short *)(param_2 + 4);
  iVar19 = (int)*(short *)(param_3 + 6) - (int)*(short *)(param_2 + 6);
  iVar17 = (int)*(short *)(param_3 + 4) - (int)sVar5;
  uVar8 = *(uint *)(*(int *)PTR_DAT_4a05a1ac + iVar19 * 4);
  uVar18 = (uint)((longlong)iVar17 * (longlong)(int)uVar8) >> 0xc |
           (int)((ulonglong)((longlong)iVar17 * (longlong)(int)uVar8) >> 0x20) << 0x14;
  iVar9 = 7 - ((int)*(short *)(param_2 + 6) + 3U & 7);
  iVar20 = uVar18 * iVar9;
  bVar21 = iVar20 < 0;
  if (bVar21) {
    iVar20 = -iVar20;
  }
  iVar20 = iVar20 >> 3;
  if (bVar21) {
    iVar20 = -iVar20;
  }
  *(short *)((int)param_1 + 0x1a) = (short)(*(short *)(param_3 + 6) + 3 >> 3);
  *param_1 = sVar5 * 0x8000 + 0x18000 + iVar20;
  param_1[1] = uVar18;
  iVar20 = *(int *)(param_2 + 0x10) >> 3;
  iVar13 = iVar20;
  if (0x7fff < iVar20) {
    iVar13 = *(int *)(param_2 + 0x10) >> 6;
  }
  uVar18 = *(uint *)(*(int *)puVar7 + iVar13 * 4);
  iVar13 = *(int *)(param_3 + 0x10) >> 3;
  iVar11 = iVar13 - iVar20;
  if (0x7fff < iVar20) {
    uVar18 = (int)uVar18 >> 3;
  }
  puVar16 = (ushort *)(param_1 + 6);
  if (iVar11 == 0) {
    param_1[2] = uVar18 << 4;
    param_1[3] = 0;
    *puVar16 = *puVar16 | 4;
  }
  else {
    iVar12 = iVar13;
    if (0x7fff < iVar13) {
      iVar12 = *(int *)(param_3 + 0x10) >> 6;
    }
    uVar10 = *(uint *)(*(int *)puVar7 + iVar12 * 4);
    if (0x7fff < iVar13) {
      uVar10 = (int)uVar10 >> 3;
    }
    uVar14 = uVar10 - uVar18;
    bVar21 = (int)(uVar14 ^ uVar8) < 0;
    if (bVar21) {
      uVar14 = -uVar14;
    }
    uVar14 = (uint)((longlong)(int)uVar14 * (longlong)(int)uVar8) >> 0x17 |
             (int)((ulonglong)((longlong)(int)uVar14 * (longlong)(int)uVar8) >> 0x20) << 9;
    if (bVar21) {
      uVar14 = -uVar14;
    }
    param_1[3] = uVar14;
    if (iVar11 < 0) {
      iVar11 = iVar20 - iVar13;
      iVar20 = iVar13;
    }
    param_1[2] = (iVar9 * ((int)uVar14 >> 1) >> 2) + uVar18 * 0x10;
    if (iVar17 < 0) {
      iVar17 = -iVar17;
    }
    iVar11 = iVar11 * (iVar19 + iVar17 + 8 >> 1);
    if (iVar11 + iVar20 * -0x10 != 0 && iVar20 * 0x10 <= iVar11) {
      iVar20 = (int)(uVar18 << 4) >> 0xe;
      *puVar16 = *puVar16 | 8;
      iVar19 = *(int *)PTR_DAT_4a05a1ac;
      uVar18 = (uVar18 & 0x3ff) * 0x10;
      iVar13 = *(int *)(iVar19 + iVar20 * 4);
      uVar14 = *(int *)(iVar19 + iVar20 * 4 + 4) - iVar13;
      lVar6 = (ulonglong)uVar18 * (ulonglong)uVar14;
      iVar13 = ((uint)lVar6 >> 0xe |
               (((int)uVar14 >> 0x1f) * uVar18 + (int)((ulonglong)lVar6 >> 0x20)) * 0x40000) +
               iVar13;
      iVar20 = (int)(uVar10 << 4) >> 0xe;
      iVar17 = *(int *)(iVar19 + iVar20 * 4);
      uVar14 = *(int *)(iVar19 + iVar20 * 4 + 4) - iVar17;
      uVar18 = (uVar10 & 0x3ff) * 0x10;
      lVar6 = (ulonglong)uVar18 * (ulonglong)uVar14;
      uVar18 = (iVar17 + ((uint)lVar6 >> 0xe |
                         (((int)uVar14 >> 0x1f) * uVar18 + (int)((ulonglong)lVar6 >> 0x20)) *
                         0x40000)) - iVar13;
      iVar20 = (int)(uVar18 * 0x10) >> 0xe;
      iVar17 = iVar20;
      if (iVar20 < 0) {
        iVar17 = -iVar20;
      }
      iVar11 = iVar17;
      if (0x7fff < iVar17) {
        iVar11 = iVar17 >> 3;
      }
      iVar11 = *(int *)(iVar19 + iVar11 * 4);
      if (0x7fff < iVar17) {
        iVar11 = iVar11 >> 3;
      }
      if (iVar20 < 0) {
        iVar11 = -iVar11;
      }
      iVar20 = iVar20 + 1;
      iVar17 = iVar20;
      if (iVar20 < 0) {
        iVar17 = -iVar20;
      }
      iVar12 = iVar17;
      if (0x7fff < iVar17) {
        iVar12 = iVar17 >> 3;
      }
      iVar19 = *(int *)(iVar19 + iVar12 * 4);
      if (0x7fff < iVar17) {
        iVar19 = iVar19 >> 3;
      }
      if (iVar20 < 0) {
        iVar19 = -iVar19;
      }
      uVar18 = (uVar18 & 0x3ff) * 0x10;
      lVar6 = (ulonglong)uVar18 * (ulonglong)(uint)(iVar19 - iVar11);
      param_1[4] = iVar13;
      param_1[5] = iVar11 + ((uint)lVar6 >> 0xe |
                            ((iVar19 - iVar11 >> 0x1f) * uVar18 + (int)((ulonglong)lVar6 >> 0x20)) *
                            0x40000);
    }
  }
  iVar17 = (int)*(short *)(param_3 + 0x18) - (int)*(short *)(param_2 + 0x18);
  iVar20 = *(short *)(param_2 + 0x18) * 0x10000;
  iVar19 = (int)*(short *)(param_3 + 0x1a) - (int)*(short *)(param_2 + 0x1a);
  if (iVar17 < 0) {
    iVar20 = iVar20 + -1;
  }
  uVar4 = *(ushort *)(param_1 + 6);
  iVar13 = *(short *)(param_2 + 0x1a) * 0x10000;
  if (iVar19 < 0) {
    iVar13 = iVar13 + -1;
  }
  local_28 = (short)iVar9;
  puVar16 = (ushort *)(param_1 + 6);
  if (iVar17 == 0) {
    *puVar16 = uVar4 | 0x10;
  }
  if (iVar19 == 0) {
    *puVar16 = *puVar16 | 0x20;
  }
  param_1[10] = iVar13;
  param_1[7] = iVar17;
  param_1[8] = iVar19;
  param_1[9] = iVar20;
  if (((uVar4 & 8) == 0) && (uVar8 != 0x40000000)) {
    if (iVar17 != 0) {
      uVar18 = (uint)((longlong)iVar17 * (longlong)(int)uVar8) >> 0xb |
               (int)((ulonglong)((longlong)iVar17 * (longlong)(int)uVar8) >> 0x20) << 0x15;
      param_1[7] = uVar18;
      param_1[9] = iVar20 + ((int)local_28 * ((int)uVar18 >> 2) >> 1);
    }
    if (iVar19 != 0) {
      uVar18 = (uint)((longlong)iVar19 * (longlong)(int)uVar8) >> 0xb |
               (int)((ulonglong)((longlong)iVar19 * (longlong)(int)uVar8) >> 0x20) << 0x15;
      param_1[8] = uVar18;
      param_1[10] = iVar13 + (((int)uVar18 >> 2) * (int)local_28 >> 1);
    }
  }
  uVar10 = (uint)*param_2;
  uVar14 = (uint)param_2[1];
  uVar15 = (uint)param_2[2];
  bVar1 = *param_3;
  bVar2 = param_3[2];
  iVar20 = (int)local_28;
  uVar18 = (uint)param_2[3];
  bVar3 = param_3[3];
  if ((*(ushort *)(param_1 + 6) & 8) == 0) {
    iVar17 = (int)uVar8 >> 7;
    iVar9 = (param_3[1] - uVar14) * iVar17;
    param_1[0x10] = iVar9;
    param_1[0xc] = iVar20 * (iVar9 >> 3) + uVar14 * 0x100000;
    iVar9 = iVar17 * (bVar2 - uVar15);
    param_1[0x11] = iVar9;
    param_1[0xd] = iVar20 * (iVar9 >> 3) + uVar15 * 0x100000;
    iVar9 = iVar17 * (bVar1 - uVar10);
    param_1[0xf] = iVar9;
    iVar17 = iVar17 * (bVar3 - uVar18);
    param_1[0x12] = iVar17;
    iVar17 = iVar20 * (iVar17 >> 3) + uVar18 * 0x100000;
    param_1[0xb] = iVar20 * (iVar9 >> 3) + uVar10 * 0x100000;
  }
  else {
    param_1[0x10] = (param_3[1] - uVar14) * 8;
    param_1[0xc] = uVar14 << 0x14;
    param_1[0x11] = (bVar2 - uVar15) * 8;
    param_1[0xd] = uVar15 << 0x14;
    param_1[0xf] = (bVar1 - uVar10) * 8;
    param_1[0x12] = (bVar3 - uVar18) * 8;
    iVar17 = uVar18 << 0x14;
    param_1[0xb] = uVar10 << 0x14;
  }
  param_1[0xe] = iVar17;
  return;
}



// Address: 4a05a1b0

undefined4 FUN_4a05a1b0(undefined4 param_1,undefined1 *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar2 = host_s3eFileCheckExists_thumb();
  if ((iVar2 == 0) && (lVar6 = host_s3eFileGetFileInt_thumb(param_1,1), lVar6 == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((-1 < (int)(param_3 << 0x19)) && (!bVar4)) {
    puVar3 = (undefined4 *)thunk_FUN_4a0007f8();
    *puVar3 = 2;
    return 0xffffffff;
  }
  bVar1 = true;
  if ((-1 < (int)(param_3 << 0x16)) && ((-1 < (int)(param_3 << 0x19) || (bVar4)))) {
    bVar1 = false;
  }
  uVar5 = param_3 & 3;
  if ((int)(param_3 * 0x200000) < 0) {
    *param_2 = 0x61;
    iVar2 = 1;
    if (uVar5 != 2) goto LAB_4a05a23a;
  }
  else {
    if (uVar5 != 2) {
      if (uVar5 == 1) {
        if (!bVar1) goto LAB_4a05a234;
        *param_2 = 0x77;
      }
      else {
        *param_2 = 0x72;
      }
      iVar2 = 1;
      goto LAB_4a05a23a;
    }
    if (bVar1) {
      *param_2 = 0x77;
    }
    else {
LAB_4a05a234:
      *param_2 = 0x72;
    }
  }
  iVar2 = 2;
  param_2[1] = 0x2b;
LAB_4a05a23a:
  param_2[iVar2] = 0x62;
  param_2[iVar2 + 1] = 0;
  return 0;
}



// Address: 4a05a24a

void FUN_4a05a24a(undefined1 *param_1,int param_2)

{
  undefined1 *puVar1;
  
  puVar1 = param_1 + param_2;
  for (; param_1 < puVar1; param_1 = param_1 + 1) {
    *param_1 = 0;
  }
  return;
}



// Address: 4a05a25a

void FUN_4a05a25a(undefined4 *param_1,undefined4 param_2)

{
  host_s3eFileRead_thumb(*param_1,1,param_1[1],param_2);
  return;
}



// Address: 4a05a26c

void FUN_4a05a26c(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + -1;
  if (iVar1 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a05a288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 4))();
  return;
}



// Address: 4a05a298

void FUN_4a05a298(void)

{
  if (*(int *)(PTR_DAT_4a05a2b4 + 0xc) == 0) {
    thunk_FUN_4a14f21c();
  }
  else {
    FUN_4a1652c6();
  }
  return;
}



// Address: 4a05a2c8

bool FUN_4a05a2c8(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_r3;
  int *local_10;
  
  local_10 = in_r3;
  iVar1 = FUN_4a161438();
  if (iVar1 == 0) {
    FUN_4a15edcc(s_JNI_Extension_is_not_available_4a05a3fc);
    return true;
  }
  piVar2 = (int *)FUN_4a161478();
  if (piVar2 == (int *)0x0) {
    FUN_4a15edcc(s_Unable_to_get_JVM_4a05a41c);
    return true;
  }
  FUN_4a15edcc(s_JVM___p_4a05a430,piVar2);
  local_10 = (int *)0x0;
  uVar3 = (**(code **)(*piVar2 + 0x18))(piVar2,&local_10,0x10006);
  FUN_4a15edcc(s____________________________rtn____4a05a438,uVar3,local_10);
  iVar1 = (**(code **)(*local_10 + 0x18))(local_10,s_com_cp_app_MainActivity_4a05a464);
  if (iVar1 == 0) {
    FUN_4a15edcc(s_Unable_to_find_the_activity_clas_4a05a47c);
    return true;
  }
  iVar4 = (**(code **)(*local_10 + 0x240))
                    (local_10,iVar1,s_m_Activity_4a05a4a0,s_Lcom_cp_app_MainActivity__4a05a4ac);
  if (iVar4 == 0) {
    FUN_4a15edcc(s_Sorry__I_can_t_find_ActivityDemo_4a05a4c8);
    return true;
  }
  iVar1 = (**(code **)(*local_10 + 0x244))(local_10,iVar1,iVar4);
  if (iVar1 == 0) {
    FUN_4a15edcc(s_Sorry__I_can_t_use_ActivityDemoW_4a05a4f4);
    return true;
  }
  uVar3 = (**(code **)(*local_10 + 0x18))(local_10,s_com_ea_sfr_demowrapper_SfrDemoWr_4a05a598);
  iVar4 = (**(code **)(*local_10 + 0x1c4))
                    (local_10,uVar3,s_IsDemo_4a05a5c0,s__Landroid_app_Activity__Z_4a05a5c8);
  if (iVar4 == 0) {
    FUN_4a15edcc(s_Sorry__I_can_t_find_IsDemo_4a05a5e4);
    return true;
  }
  iVar1 = FUN_4a0e4968(local_10,uVar3,iVar4,iVar1);
  return iVar1 != 0;
}



// Address: 4a05a600

undefined4 FUN_4a05a600(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((0x20 < param_1) && (param_1 != 0x3000)) {
    uVar1 = 1;
  }
  return uVar1;
}



// Address: 4a05a618

void FUN_4a05a618(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)PTR_DAT_4a05a67c;
  uVar1 = (uint)*(byte *)(iVar2 + 0x680);
  bVar3 = uVar1 == 0;
  if (bVar3) {
    uVar1 = *(uint *)(iVar2 + 0x390);
    param_2 = *(uint *)(iVar2 + 0x398);
  }
  if (bVar3 && uVar1 == param_2) {
    thunk_FUN_4a05a68c();
  }
  else {
    FUN_4a0407b8(1);
    (**(code **)(PTR_DAT_4a05a680 + 0x28))();
  }
  *(short *)(iVar2 + 0x574) = *(short *)(iVar2 + 0x574) + 1;
  *(undefined1 *)(iVar2 + 0x680) = 0;
  return;
}



// Address: 4a05a68c

void FUN_4a05a68c(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  
  thunk_FUN_4a00d70c();
  thunk_FUN_4a02ca18();
  thunk_FUN_4a00d798();
  thunk_FUN_4a0458a0();
  thunk_FUN_4a03f558();
  piVar3 = *(int **)PTR_DAT_4a05a740;
  if (*piVar3 * 0x200000 < 0) {
    piVar4 = piVar3 + 0x134;
    piVar5 = piVar4;
    while (iVar1 = DAT_4a05a744, piVar5 = (int *)piVar5[2], piVar4 != piVar5) {
      iVar1 = piVar5[3];
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x3c) = 0;
        *(undefined4 *)(iVar1 + 0x40) = 0;
        *(undefined4 *)(iVar1 + 0x44) = 0;
        *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0xffffefff;
      }
    }
    piVar3[0x136] = (int)piVar4;
    iVar1 = (int)piVar3 + iVar1;
    piVar3[0x135] = (int)piVar4;
    *(int *)(iVar1 + 8) = iVar1;
    *(int *)(iVar1 + 4) = iVar1;
    piVar3[0x1a4] = (int)(piVar3 + 0x1a2);
    piVar3[0x1a3] = (int)(piVar3 + 0x1a2);
    piVar3[0x13c] = (int)(piVar3 + 0x13a);
    piVar3[0x13b] = (int)(piVar3 + 0x13a);
    uVar7 = piVar3[0xed];
    uVar6 = piVar3[0xee];
    for (uVar2 = 0; uVar2 < uVar7; uVar2 = uVar2 + 1) {
      iVar1 = piVar3[0x13d] + uVar2 * 0xc;
      *(int *)(iVar1 + 8) = iVar1;
      *(int *)(iVar1 + 4) = iVar1;
    }
    for (uVar2 = 0; uVar2 < uVar6; uVar2 = uVar2 + 1) {
      iVar1 = piVar3[0x13e] + uVar2 * 0xc;
      *(int *)(iVar1 + 8) = iVar1;
      *(int *)(iVar1 + 4) = iVar1;
    }
  }
  piVar3[0xd8] = 0;
  return;
}



// Address: 4a05a770

uint * FUN_4a05a770(uint *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  
  bVar1 = param_2[6];
  uVar8 = (uint)param_2[3] | (uint)*param_2 << 0x18 |
          (uint)param_2[1] << 0x10 | (uint)param_2[2] << 8;
  uVar7 = *(ushort *)(param_2 + 4);
  bVar2 = param_2[7];
  bVar3 = param_2[uVar8 + 8];
  bVar4 = param_2[uVar8 + 0xb];
  bVar5 = param_2[uVar8 + 9];
  bVar6 = param_2[uVar8 + 10];
  *param_1 = uVar8;
  param_1[1] = (uint)uVar7 | (uint)bVar1 << 0x10 | (uint)bVar2 << 0x18;
  param_1[2] = (uint)bVar4 | (uint)bVar3 << 0x18 | (uint)bVar5 << 0x10 | (uint)bVar6 << 8;
  return param_1 + 3;
}



// Address: 4a05a7c4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a05a7c4(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  int *piStack_10;
  
  iVar1 = FUN_4a161438();
  if (iVar1 == 0) {
    return;
  }
  piVar2 = (int *)FUN_4a161478();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4a05a7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  piStack_10 = (int *)0x0;
  (**(code **)(*piVar2 + 0x18))(piVar2,&piStack_10,0x10006);
  iVar1 = (**(code **)(*piStack_10 + 0x18))(piStack_10,s_com_cp_app_MainActivity_4a05a8f8);
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a05a83c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  iVar3 = (**(code **)(*piStack_10 + 0x240))
                    (piStack_10,iVar1,s_m_Activity_4a05a910,s_Lcom_cp_app_MainActivity__4a05a91c);
  if (iVar3 != 0) {
    iVar3 = (**(code **)(*piStack_10 + 0x244))(piStack_10,iVar1,iVar3);
    if (iVar3 != 0) {
      uVar4 = (**(code **)(*piStack_10 + 0x84))(piStack_10,iVar1,s_S3DOnJNI_4a05a938,&DAT_4a05a944);
      iVar1 = (**(code **)(*piStack_10 + 0x98))(piStack_10,iVar3,uVar4,&piStack_10);
      if (iVar1 == 0) {
        host_s3eDeviceRequestQuit_arm();
      }
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a05a89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a05a86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



// Address: 4a05b568

void FUN_4a05b568(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  
  puVar7 = (uint *)param_1[1];
  iVar15 = param_1[7];
  iVar10 = param_1[8];
  iVar9 = param_1[4];
  iVar14 = param_1[5];
  uVar16 = param_1[6];
  iVar5 = *param_1 + -1;
  uVar4 = param_1[2];
  uVar13 = param_1[3];
  iVar3 = *(int *)PTR_LAB_4a05b8f0 + ((param_1[9] & 0xf800000U) >> 0xc);
  if (iVar14 != 0) {
    iVar6 = iVar5;
    if (((uint)puVar7 & 3) == 0) goto LAB_4a05b824;
    do {
      do {
        uVar11 = uVar4 & uVar16;
        bVar1 = *(byte *)(iVar15 + (uVar16 & uVar13 >> 0xc | uVar11 >> 0x15));
        uVar4 = uVar4 + iVar9;
        uVar13 = uVar13 + iVar14;
        if ((bool)((byte)(uVar11 >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
        uVar11 = (uint)*(ushort *)(iVar10 + (bVar1 & 0xf) * 2);
        iVar6 = iVar5 + -1;
        *(ushort *)puVar7 =
             *(ushort *)(iVar3 + ((uVar11 & 0xf00) >> 2 | (uVar11 & 0xf0) >> 3) * 2) |
             *(short *)(iVar3 + (uVar11 & 0xf) * 0x80) << 0xb;
        puVar7 = (uint *)((int)puVar7 + 2);
        if (iVar6 < 0) {
          return;
        }
LAB_4a05b824:
        iVar5 = 0;
        puVar8 = puVar7;
      } while (iVar6 == 0);
      do {
        bVar1 = *(byte *)(iVar15 + (uVar16 & uVar13 >> 0xc | (uVar4 & uVar16) >> 0x15));
        if ((bool)((byte)((uVar4 & uVar16) >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
        uVar12 = (uint)*(ushort *)(iVar10 + (bVar1 & 0xf) * 2);
        uVar11 = uVar4 + iVar9 & uVar16;
        bVar1 = *(byte *)(iVar15 + (uVar16 & uVar13 + iVar14 >> 0xc | uVar11 >> 0x15));
        if ((bool)((byte)(uVar11 >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
        uVar11 = (uint)*(ushort *)(iVar10 + (bVar1 & 0xf) * 2);
        iVar6 = iVar6 + -2;
        uVar4 = uVar4 + iVar9 + iVar9;
        uVar13 = uVar13 + iVar14 + iVar14;
        puVar7 = puVar8 + 1;
        *puVar8 = (uint)*(ushort *)(iVar3 + ((uVar12 & 0xf00) >> 2 | (uVar12 & 0xf0) >> 3) * 2) |
                  (uint)*(ushort *)(iVar3 + (uVar12 & 0xf) * 0x80) << 0xb |
                  ((uint)*(ushort *)(iVar3 + ((uVar11 & 0xf00) >> 2 | (uVar11 & 0xf0) >> 3) * 2) |
                  (uint)*(ushort *)(iVar3 + (uVar11 & 0xf) * 0x80) << 0xb) << 0x10;
        puVar8 = puVar7;
      } while (0 < iVar6);
      iVar5 = 0;
    } while (iVar6 == 0);
    return;
  }
  iVar15 = (uVar16 & uVar13 >> 0xc) + iVar15;
  if ((~param_1[9] & 0xf800000U) == 0) {
    iVar3 = iVar5;
    if (((uint)puVar7 & 3) == 0) goto LAB_4a05b724;
    do {
      do {
        bVar1 = *(byte *)(iVar15 + ((uVar4 & uVar16) >> 0x15));
        uVar13 = uVar4 & 0x100000;
        uVar4 = uVar4 + iVar9;
        if (uVar13 != 0) {
          bVar1 = bVar1 >> 4;
        }
        uVar2 = *(ushort *)(iVar10 + (bVar1 & 0xf) * 2);
        iVar3 = iVar5 + -1;
        *(ushort *)puVar7 =
             (ushort)((uVar2 & 0xf00) >> 7) | (ushort)((uVar2 & 0xf0) << 3) | uVar2 << 0xc;
        puVar7 = (uint *)((int)puVar7 + 2);
        if (iVar3 < 0) {
          return;
        }
LAB_4a05b724:
        iVar5 = 0;
        puVar8 = puVar7;
      } while (iVar3 == 0);
      do {
        bVar1 = *(byte *)(iVar15 + ((uVar4 & uVar16) >> 0x15));
        uVar13 = uVar4 + iVar9;
        if ((uVar4 & 0x100000) != 0) {
          bVar1 = bVar1 >> 4;
        }
        uVar11 = (uint)*(ushort *)(iVar10 + (bVar1 & 0xf) * 2);
        iVar3 = iVar3 + -2;
        bVar1 = *(byte *)(iVar15 + ((uVar13 & uVar16) >> 0x15));
        uVar4 = uVar13 + iVar9;
        if ((uVar13 & 0x100000) != 0) {
          bVar1 = bVar1 >> 4;
        }
        uVar13 = (uint)*(ushort *)(iVar10 + (bVar1 & 0xf) * 2);
        puVar7 = puVar8 + 1;
        *puVar8 = (uVar11 & 0xf00) >> 7 | (uVar11 & 0xf0) << 3 | (uVar11 & 0xf) << 0xc |
                  ((uVar13 & 0xf00) >> 7 | (uVar13 & 0xf0) << 3 | uVar13 << 0xc) << 0x10;
        puVar8 = puVar7;
      } while (0 < iVar3);
      iVar5 = 0;
    } while (iVar3 == 0);
    return;
  }
  iVar14 = iVar5;
  if (((uint)puVar7 & 3) == 0) goto LAB_4a05b61c;
  while( true ) {
    bVar1 = *(byte *)(iVar15 + ((uVar4 & uVar16) >> 0x15));
    uVar13 = uVar4 & 0x100000;
    uVar4 = uVar4 + iVar9;
    if (uVar13 != 0) {
      bVar1 = bVar1 >> 4;
    }
    uVar13 = (uint)*(ushort *)(iVar10 + (bVar1 & 0xf) * 2);
    iVar14 = iVar5 + -1;
    *(ushort *)puVar7 =
         *(ushort *)(iVar3 + ((uVar13 & 0xf00) >> 2 | (uVar13 & 0xf0) >> 3) * 2) |
         *(short *)(iVar3 + (uVar13 & 0xf) * 0x80) << 0xb;
    puVar7 = (uint *)((int)puVar7 + 2);
    if (iVar14 < 0) break;
LAB_4a05b61c:
    iVar5 = 0;
    puVar8 = puVar7;
    if (iVar14 != 0) {
      do {
        bVar1 = *(byte *)(iVar15 + ((uVar4 & uVar16) >> 0x15));
        uVar13 = uVar4 + iVar9;
        if ((uVar4 & 0x100000) != 0) {
          bVar1 = bVar1 >> 4;
        }
        uVar11 = (uint)*(ushort *)(iVar10 + (bVar1 & 0xf) * 2);
        iVar14 = iVar14 + -2;
        uVar4 = uVar13 + iVar9;
        bVar1 = *(byte *)(iVar15 + ((uVar13 & uVar16) >> 0x15));
        if ((uVar13 & 0x100000) != 0) {
          bVar1 = bVar1 >> 4;
        }
        uVar13 = (uint)*(ushort *)(iVar10 + (bVar1 & 0xf) * 2);
        puVar7 = puVar8 + 1;
        *puVar8 = (uint)*(ushort *)(iVar3 + ((uVar11 & 0xf00) >> 2 | (uVar11 & 0xf0) >> 3) * 2) |
                  (uint)*(ushort *)(iVar3 + (uVar11 & 0xf) * 0x80) << 0xb |
                  ((uint)*(ushort *)(iVar3 + ((uVar13 & 0xf00) >> 2 | (uVar13 & 0xf0) >> 3) * 2) |
                  (uint)*(ushort *)(iVar3 + (uVar13 & 0xf) * 0x80) << 0xb) << 0x10;
        puVar8 = puVar7;
      } while (0 < iVar14);
      iVar5 = 0;
      if (iVar14 != 0) {
        return;
      }
    }
  }
  return;
}



// Address: 4a05bc98

void FUN_4a05bc98(int *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  
  puVar7 = (undefined4 *)param_1[1];
  uVar16 = param_1[2];
  uVar5 = param_1[6];
  iVar11 = param_1[7];
  iVar14 = param_1[8];
  uVar8 = param_1[3];
  iVar9 = param_1[4];
  iVar10 = param_1[5];
  uVar12 = param_1[9];
  iVar6 = *param_1 + -1;
  if ((uVar12 & 0x80000000) != 0) {
    iVar14 = iVar14 + ((uVar12 & 0xf800000) >> 0x12);
    if (((uint)puVar7 & 3) == 0) goto joined_r0x4a05bd70;
    do {
      uVar12 = uVar16 & uVar5;
      bVar1 = *(byte *)(iVar11 + (uVar5 & uVar8 >> 0xc | uVar12 >> 0x15));
      uVar16 = uVar16 + iVar9;
      uVar8 = uVar8 + iVar10;
      if ((bool)((byte)(uVar12 >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      iVar6 = iVar6 + -1;
      *(undefined2 *)puVar7 = *(undefined2 *)(iVar14 + (bVar1 & 0xf) * 2);
      puVar7 = (undefined4 *)((int)puVar7 + 2);
      if (iVar6 < 0) {
        return;
      }
joined_r0x4a05bd70:
      while (0 < iVar6) {
        bVar1 = *(byte *)(iVar11 + (uVar5 & uVar8 >> 0xc | (uVar16 & uVar5) >> 0x15));
        if ((bool)((byte)((uVar16 & uVar5) >> 0x14) & 1)) {
          bVar1 = bVar1 >> 4;
        }
        uVar12 = uVar16 + iVar9 & uVar5;
        bVar2 = *(byte *)(iVar11 + (uVar5 & uVar8 + iVar10 >> 0xc | uVar12 >> 0x15));
        iVar6 = iVar6 + -2;
        uVar16 = uVar16 + iVar9 + iVar9;
        if ((bool)((byte)(uVar12 >> 0x14) & 1)) {
          bVar2 = bVar2 >> 4;
        }
        uVar8 = uVar8 + iVar10 + iVar10;
        *puVar7 = CONCAT22(*(undefined2 *)(iVar14 + (bVar2 & 0xf) * 2),
                           *(undefined2 *)(iVar14 + (bVar1 & 0xf) * 2));
        puVar7 = puVar7 + 1;
      }
    } while (-1 < iVar6);
    return;
  }
  iVar15 = param_1[10];
  if (((uint)puVar7 & 3) == 0) goto joined_r0x4a05bdd8;
  do {
    uVar3 = uVar16 & uVar5;
    bVar1 = *(byte *)(iVar11 + (uVar5 & uVar8 >> 0xc | uVar3 >> 0x15));
    uVar16 = uVar16 + iVar9;
    uVar8 = uVar8 + iVar10;
    if ((bool)((byte)(uVar3 >> 0x14) & 1)) {
      bVar1 = bVar1 >> 4;
    }
    uVar3 = uVar12 & 0xf800000;
    iVar6 = iVar6 + -1;
    uVar12 = uVar12 + iVar15;
    *(undefined2 *)puVar7 = *(undefined2 *)(iVar14 + (uVar3 >> 0x12) + (bVar1 & 0xf) * 2);
    puVar7 = (undefined4 *)((int)puVar7 + 2);
    if (iVar6 < 0) {
      return;
    }
joined_r0x4a05bdd8:
    while (0 < iVar6) {
      bVar1 = *(byte *)(iVar11 + (uVar5 & uVar8 >> 0xc | (uVar16 & uVar5) >> 0x15));
      if ((bool)((byte)((uVar16 & uVar5) >> 0x14) & 1)) {
        bVar1 = bVar1 >> 4;
      }
      uVar3 = uVar12 & 0xf800000;
      uVar4 = uVar16 + iVar9 & uVar5;
      bVar2 = *(byte *)(iVar11 + (uVar5 & uVar8 + iVar10 >> 0xc | uVar4 >> 0x15));
      uVar13 = uVar12 + iVar15;
      iVar6 = iVar6 + -2;
      if ((bool)((byte)(uVar4 >> 0x14) & 1)) {
        bVar2 = bVar2 >> 4;
      }
      uVar16 = uVar16 + iVar9 + iVar9;
      uVar8 = uVar8 + iVar10 + iVar10;
      uVar12 = uVar13 + iVar15;
      *puVar7 = CONCAT22(*(undefined2 *)
                          (iVar14 + ((uVar13 & 0xf800000) >> 0x12) + (bVar2 & 0xf) * 2),
                         *(undefined2 *)(iVar14 + (uVar3 >> 0x12) + (bVar1 & 0xf) * 2));
      puVar7 = puVar7 + 1;
    }
  } while (-1 < iVar6);
  return;
}



// Address: 4a05be98

undefined4 FUN_4a05be98(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 in_r3;
  undefined4 local_10;
  
  local_10 = in_r3;
  iVar1 = FUN_4a161438();
  if (iVar1 == 0) {
    FUN_4a15edcc(PTR_s_JNI_Extension_is_not_available_4a05bf2c);
    return 0;
  }
  piVar2 = (int *)FUN_4a161478();
  if (piVar2 == (int *)0x0) {
    FUN_4a15edcc(PTR_s_Unable_to_get_JVM_4a05bf30);
    return 0;
  }
  FUN_4a15edcc(PTR_s_JVM___p_4a05bf34,piVar2);
  local_10 = 0;
  uVar3 = (**(code **)(*piVar2 + 0x18))(piVar2,&local_10,0x10006);
  FUN_4a15edcc(PTR_s____________________________rtn____4a05bf38,uVar3,local_10);
  return local_10;
}



// Address: 4a05bf7c

int * FUN_4a05bf7c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  longlong lVar5;
  
  piVar4 = (int *)0x0;
  iVar1 = 3;
  do {
    if (*(int *)(PTR_DAT_4a05c008 + iVar1 * 0x14 + 0x10) == 0) {
      piVar4 = (int *)(PTR_DAT_4a05c008 + iVar1 * 0x14);
      *piVar4 = iVar1;
      iVar1 = FUN_4a0013e0(param_1);
      iVar2 = FUN_4a00d394(iVar1 + 1);
      piVar4[3] = iVar2;
      FUN_4a16303e(iVar2,param_1,iVar1 + 1);
      break;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x20);
  if (piVar4 == (int *)0x0) {
    puVar3 = (undefined4 *)thunk_FUN_4a0007f8();
    *puVar3 = 0xc;
  }
  else {
    iVar1 = host_s3eFileOpen_thumb(param_1,param_2);
    piVar4[4] = iVar1;
    if (iVar1 != 0) {
      return piVar4;
    }
    lVar5 = host_s3eFileGetFileInt_thumb(param_1,1);
    if (lVar5 != 0) {
      piVar4[2] = 1;
      return piVar4;
    }
    host_s3eFreeBase_thumb(piVar4[3]);
    FUN_4a048980(s_s3eFileOpen_4a05c00c,0);
  }
  return (int *)0x0;
}



// Address: 4a05c29c

bool FUN_4a05c29c(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 in_r3;
  
  FUN_4a15edcc(s_TnbNative___isDemo_4a05c350);
  piVar1 = (int *)FUN_4a05be98();
  uVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,s_com_ea_tnb_WrapperActivity_4a05c364);
  iVar3 = (**(code **)(*piVar1 + 0x1c4))(piVar1,uVar2,s_isDemo_4a05c380,&DAT_4a05c388,in_r3);
  if (iVar3 == 0) {
    FUN_4a15edcc(s_Sorry__I_can_t_find_isDemo_4a05c38c);
    return true;
  }
  iVar3 = (**(code **)(*piVar1 + 0x1d8))(piVar1,uVar2,iVar3,&stack0xfffffff4,iVar3);
  if (iVar3 != 0) {
    pcVar4 = s_isDemo_true_4a05c3b8;
  }
  else {
    pcVar4 = s_isDemo_false_4a05c3a8;
  }
  FUN_4a15edcc(pcVar4);
  return iVar3 != 0;
}



// Address: 4a05c3c8

void FUN_4a05c3c8(int *param_1,int *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58 [4];
  uint local_48;
  int local_44;
  int local_40;
  uint local_3c;
  int *local_38;
  int *local_34;
  int *piStack_30;
  int *local_2c;
  undefined4 uStack_28;
  
  puVar3 = PTR_DAT_4a05ccb0;
  puVar2 = PTR_DAT_4a05ccac;
  if ((*(ushort *)(param_1 + 6) & 8) == 0) {
    local_34 = param_1 + 7;
  }
  else {
    iVar9 = param_1[2] >> 0xe;
    iVar8 = *(int *)(*(int *)PTR_DAT_4a05ccb0 + iVar9 * 4);
    uVar16 = *(int *)(*(int *)PTR_DAT_4a05ccb0 + iVar9 * 4 + 4) - iVar8;
    uVar7 = param_1[2] & 0x3fff;
    lVar1 = (ulonglong)uVar7 * (ulonglong)uVar16;
    lVar1 = (longlong)
            (int)((((uint)lVar1 >> 0xe |
                   (((int)uVar16 >> 0x1f) * uVar7 + (int)((ulonglong)lVar1 >> 0x20)) * 0x40000) +
                  iVar8) - param_1[4]) * (longlong)param_1[5];
    uVar7 = (uint)lVar1 >> 10 | (int)((ulonglong)lVar1 >> 0x20) << 0x16;
    iVar9 = param_1[0xc];
    iVar8 = param_1[0xd];
    iVar14 = param_1[0xe];
    if (0x3fffffff < (int)uVar7) {
      uVar7 = 0x3fc00000;
    }
    iVar17 = param_1[8];
    iVar10 = param_1[9];
    iVar12 = param_1[10];
    *(uint *)PTR_DAT_4a05ccac =
         ((uint)((longlong)(int)uVar7 * (longlong)param_1[0xb]) >> 0xd |
         (int)((ulonglong)((longlong)(int)uVar7 * (longlong)param_1[0xb]) >> 0x20) << 0x13) +
         param_1[7];
    *(uint *)(puVar2 + 4) =
         ((uint)((longlong)(int)uVar7 * (longlong)iVar9) >> 0xd |
         (int)((ulonglong)((longlong)(int)uVar7 * (longlong)iVar9) >> 0x20) << 0x13) + iVar17;
    *(uint *)(puVar2 + 8) =
         ((uint)((longlong)(int)uVar7 * (longlong)iVar8) >> 0xd |
         (int)((ulonglong)((longlong)(int)uVar7 * (longlong)iVar8) >> 0x20) << 0x13) + iVar10;
    *(uint *)(puVar2 + 0xc) =
         ((uint)((longlong)(int)uVar7 * (longlong)iVar14) >> 0xd |
         (int)((ulonglong)((longlong)(int)uVar7 * (longlong)iVar14) >> 0x20) << 0x13) + iVar12;
    local_34 = (int *)puVar2;
  }
  if ((*(ushort *)(param_2 + 6) & 8) == 0) {
    local_38 = param_2 + 7;
  }
  else {
    iVar14 = *(int *)puVar3;
    iVar9 = param_2[2] >> 0xe;
    iVar8 = *(int *)(iVar14 + iVar9 * 4);
    uVar16 = *(int *)(iVar14 + iVar9 * 4 + 4) - iVar8;
    uVar7 = param_2[2] & 0x3fff;
    lVar1 = (ulonglong)uVar7 * (ulonglong)uVar16;
    lVar1 = (longlong)
            (int)((((uint)lVar1 >> 0xe |
                   (((int)uVar16 >> 0x1f) * uVar7 + (int)((ulonglong)lVar1 >> 0x20)) * 0x40000) +
                  iVar8) - param_2[4]) * (longlong)param_2[5];
    uVar7 = (uint)lVar1 >> 10 | (int)((ulonglong)lVar1 >> 0x20) << 0x16;
    if (0x3fffffff < (int)uVar7) {
      uVar7 = 0x3fc00000;
    }
    iVar14 = param_2[0xc];
    iVar8 = param_2[8];
    iVar12 = param_2[9];
    iVar10 = param_2[0xd];
    iVar17 = param_2[10];
    iVar9 = param_2[0xe];
    local_38 = (int *)(puVar2 + 0x10);
    *local_38 = param_2[7] +
                ((uint)((longlong)(int)uVar7 * (longlong)param_2[0xb]) >> 0xd |
                (int)((ulonglong)((longlong)(int)uVar7 * (longlong)param_2[0xb]) >> 0x20) << 0x13);
    *(uint *)(puVar2 + 0x14) =
         ((uint)((longlong)(int)uVar7 * (longlong)iVar14) >> 0xd |
         (int)((ulonglong)((longlong)(int)uVar7 * (longlong)iVar14) >> 0x20) << 0x13) + iVar8;
    *(uint *)(puVar2 + 0x18) =
         ((uint)((longlong)(int)uVar7 * (longlong)iVar10) >> 0xd |
         (int)((ulonglong)((longlong)(int)uVar7 * (longlong)iVar10) >> 0x20) << 0x13) + iVar12;
    *(uint *)(puVar2 + 0x1c) =
         ((uint)((longlong)(int)uVar7 * (longlong)iVar9) >> 0xd |
         (int)((ulonglong)((longlong)(int)uVar7 * (longlong)iVar9) >> 0x20) << 0x13) + iVar17;
  }
  puVar2 = PTR_DAT_4a05ccb4;
  local_3c = *param_1 >> 0xf;
  local_40 = (*param_2 >> 0x12) - (*param_1 >> 0x12);
  uVar7 = *(uint *)(*(int *)puVar3 + ((*param_2 >> 0xf) - local_3c) * 4);
  local_44 = 7 - (local_3c & 7);
  iVar9 = param_2[2] >> 4;
  iVar8 = param_1[2] >> 4;
  piStack_30 = param_1;
  local_2c = param_2;
  uStack_28 = param_3;
  if (0xb < local_40) {
    iVar14 = iVar8 - iVar9;
    bVar18 = iVar14 < 0;
    if (iVar14 != 0) {
      if (bVar18) {
        iVar14 = -iVar14;
      }
      iVar10 = (local_40 + 8 >> 1) * (iVar14 >> 3);
      iVar14 = iVar9;
      if (bVar18) {
        iVar14 = iVar8;
      }
      if (iVar10 - (iVar14 >> 2) != 0 && iVar14 >> 2 <= iVar10) {
        uVar16 = iVar9 - iVar8;
        bVar18 = (int)(uVar16 ^ uVar7) < 0;
        if (bVar18) {
          uVar16 = -uVar16;
        }
        local_48 = (uint)((longlong)(int)uVar16 * (longlong)(int)uVar7) >> 0x17 |
                   (int)((ulonglong)((longlong)(int)uVar16 * (longlong)(int)uVar7) >> 0x20) << 9;
        if (bVar18) {
          local_48 = -local_48;
        }
        piVar5 = (int *)FUN_4a035a80(local_40,local_48);
        if (piVar5 != (int *)0x0) {
          piVar6 = (int *)FUN_4a036998(iVar8,iVar9,local_34,local_38);
          puVar3 = PTR_LAB_4a05ccb8;
          iVar12 = *piVar5;
          iVar9 = local_44 + iVar12 * 8;
          uVar16 = iVar8 * 0x10 + (((int)local_48 >> 1) * iVar9 >> 2);
          iVar8 = *(int *)PTR_DAT_4a05ccb0;
          iVar14 = *(int *)(iVar8 + ((int)uVar16 >> 0xe) * 4);
          uVar7 = *(int *)(iVar8 + ((int)uVar16 >> 0xe) * 4 + 4) - iVar14;
          lVar1 = (ulonglong)(uVar16 & 0x3fff) * (ulonglong)uVar7;
          lVar1 = (longlong)
                  (int)((((uint)lVar1 >> 0xe |
                         (((int)uVar7 >> 0x1f) * (uVar16 & 0x3fff) + (int)((ulonglong)lVar1 >> 0x20)
                         ) * 0x40000) + iVar14) - *piVar6) * (longlong)piVar6[1];
          uVar7 = (uint)lVar1 >> 10 | (int)((ulonglong)lVar1 >> 0x20) << 0x16;
          local_68 = ((uint)((longlong)piVar6[3] * (longlong)(int)uVar7) >> 0x1e |
                     (int)((ulonglong)((longlong)piVar6[3] * (longlong)(int)uVar7) >> 0x20) << 2) +
                     *(int *)piVar6[2];
          local_64 = ((uint)((longlong)piVar6[4] * (longlong)(int)uVar7) >> 0x1e |
                     (int)((ulonglong)((longlong)piVar6[4] * (longlong)(int)uVar7) >> 0x20) << 2) +
                     *(int *)(piVar6[2] + 4);
          local_60 = ((uint)((longlong)piVar6[5] * (longlong)(int)uVar7) >> 0x1e |
                     (int)((ulonglong)((longlong)piVar6[5] * (longlong)(int)uVar7) >> 0x20) << 2) +
                     *(int *)(piVar6[2] + 8);
          local_5c = ((uint)((longlong)piVar6[6] * (longlong)(int)uVar7) >> 0x1e |
                     (int)((ulonglong)((longlong)piVar6[6] * (longlong)(int)uVar7) >> 0x20) << 2) +
                     *(int *)(piVar6[2] + 0xc);
          iVar8 = *(int *)(iVar8 + iVar9 * 4);
          iVar9 = (int)local_3c >> 3;
          *(int *)puVar2 = (int)(short)iVar12;
          iVar8 = iVar8 >> 10;
          *(int *)(puVar2 + 4) = *(int *)(puVar3 + 0x50) + iVar9 * 2;
          iVar14 = *local_34;
          iVar10 = iVar8 * ((local_68 >> 0x11) - (iVar14 >> 0x11));
          *(int *)(puVar2 + 0x28) = iVar10;
          *(int *)(puVar2 + 0x24) =
               ((local_44 * (iVar10 >> 2) >> 0xd) + (iVar14 >> 0x11) * 0x20) * 0x10000 >> 0x10;
          iVar14 = local_34[1];
          iVar10 = iVar8 * ((local_64 >> 0x11) - (iVar14 >> 0x11));
          *(int *)(puVar2 + 0x30) = iVar10;
          *(int *)(puVar2 + 0x2c) =
               ((local_44 * (iVar10 >> 2) >> 0xd) + (iVar14 >> 0x11) * 0x20) * 0x10000 >> 0x10;
          iVar14 = local_34[2];
          iVar10 = iVar8 * ((local_60 >> 0x11) - (iVar14 >> 0x11));
          *(int *)(puVar2 + 0x38) = iVar10;
          *(int *)(puVar2 + 0x34) =
               ((local_44 * (iVar10 >> 2) >> 0xd) + (iVar14 >> 0x11) * 0x20) * 0x10000 >> 0x10;
          iVar14 = local_34[3];
          iVar8 = ((local_5c >> 0x11) - (iVar14 >> 0x11)) * iVar8;
          *(int *)(puVar2 + 0x40) = iVar8;
          *(int *)(puVar2 + 0x3c) =
               ((local_44 * (iVar8 >> 2) >> 0xd) + (iVar14 >> 0x11) * 0x20) * 0x10000 >> 0x10;
          (**(code **)(puVar3 + 0x68))(puVar2);
          piVar4 = local_58;
          piVar13 = &local_68;
          piVar5 = piVar5 + 1;
          do {
            piVar11 = piVar4;
            puVar3 = PTR_LAB_4a05ccb8;
            iVar9 = iVar9 + iVar12;
            piVar15 = piVar5 + 1;
            iVar12 = *piVar5;
            if (*piVar15 == 0) {
              iVar8 = *local_2c;
              iVar14 = local_38[1];
              iVar10 = local_38[2];
              iVar17 = local_38[3];
              *piVar11 = *local_38;
              piVar11[1] = iVar14;
              piVar11[2] = iVar10;
              piVar11[3] = iVar17;
              iVar8 = (iVar8 >> 0xf) + iVar9 * -8 + -7;
            }
            else {
              uVar16 = local_48 * iVar12 + uVar16;
              iVar8 = *(int *)(*(int *)PTR_DAT_4a05ccb0 + ((int)uVar16 >> 0xe) * 4);
              uVar7 = *(int *)(*(int *)PTR_DAT_4a05ccb0 + ((int)uVar16 >> 0xe) * 4 + 4) - iVar8;
              lVar1 = (ulonglong)(uVar16 & 0x3fff) * (ulonglong)uVar7;
              lVar1 = (longlong)
                      (int)((((uint)lVar1 >> 0xe |
                             (((int)uVar7 >> 0x1f) * (uVar16 & 0x3fff) +
                             (int)((ulonglong)lVar1 >> 0x20)) * 0x40000) + iVar8) - *piVar6) *
                      (longlong)piVar6[1];
              uVar7 = (uint)lVar1 >> 10 | (int)((ulonglong)lVar1 >> 0x20) << 0x16;
              *piVar11 = ((uint)((longlong)piVar6[3] * (longlong)(int)uVar7) >> 0x1e |
                         (int)((ulonglong)((longlong)piVar6[3] * (longlong)(int)uVar7) >> 0x20) << 2
                         ) + *(int *)piVar6[2];
              piVar11[1] = ((uint)((longlong)piVar6[4] * (longlong)(int)uVar7) >> 0x1e |
                           (int)((ulonglong)((longlong)piVar6[4] * (longlong)(int)uVar7) >> 0x20) <<
                           2) + *(int *)(piVar6[2] + 4);
              piVar11[2] = ((uint)((longlong)piVar6[5] * (longlong)(int)uVar7) >> 0x1e |
                           (int)((ulonglong)((longlong)piVar6[5] * (longlong)(int)uVar7) >> 0x20) <<
                           2) + *(int *)(piVar6[2] + 8);
              piVar11[3] = ((uint)((longlong)piVar6[6] * (longlong)(int)uVar7) >> 0x1e |
                           (int)((ulonglong)((longlong)piVar6[6] * (longlong)(int)uVar7) >> 0x20) <<
                           2) + *(int *)(piVar6[2] + 0xc);
              iVar8 = iVar12 << 3;
            }
            iVar8 = *(int *)(*(int *)PTR_DAT_4a05ccb0 + iVar8 * 4);
            *(int *)puVar2 = iVar12;
            iVar8 = iVar8 >> 10;
            *(int *)(puVar2 + 4) = *(int *)(puVar3 + 0x50) + iVar9 * 2;
            iVar14 = *piVar13;
            *(int *)(puVar2 + 0x28) = iVar8 * ((*piVar11 >> 0x11) - (iVar14 >> 0x11));
            *(int *)(puVar2 + 0x24) = ((iVar14 >> 0x11) << 0x15) >> 0x10;
            iVar14 = piVar13[1];
            iVar10 = piVar11[1];
            *(int *)(puVar2 + 0x2c) = ((iVar14 >> 0x11) << 0x15) >> 0x10;
            *(int *)(puVar2 + 0x30) = iVar8 * ((iVar10 >> 0x11) - (iVar14 >> 0x11));
            iVar14 = piVar13[2];
            iVar10 = piVar11[2];
            *(int *)(puVar2 + 0x34) = ((iVar14 >> 0x11) << 0x15) >> 0x10;
            *(int *)(puVar2 + 0x38) = iVar8 * ((iVar10 >> 0x11) - (iVar14 >> 0x11));
            iVar14 = piVar13[3];
            *(int *)(puVar2 + 0x40) = ((piVar11[3] >> 0x11) - (iVar14 >> 0x11)) * iVar8;
            *(int *)(puVar2 + 0x3c) = ((iVar14 >> 0x11) << 0x15) >> 0x10;
            (**(code **)(puVar3 + 0x68))(puVar2);
            puVar3 = PTR_LAB_4a05ccb8;
            piVar4 = piVar13;
            piVar13 = piVar11;
            piVar5 = piVar15;
          } while (*piVar15 != 0);
          iVar9 = *(int *)(PTR_LAB_4a05ccb8 + 0x60);
          if (iVar9 < 0) {
            host_s3eDeviceYield_arm(0x80000000);
            iVar9 = *(int *)(puVar3 + 100);
          }
          *(int *)(puVar3 + 0x60) = (iVar9 - local_40) + -0x10;
          return;
        }
      }
    }
  }
  puVar3 = PTR_LAB_4a05ccb8;
  *(int *)puVar2 = local_40;
  *(int *)(puVar2 + 4) = *(int *)(puVar3 + 0x50) + ((int)local_3c >> 3) * 2;
  iVar9 = (int)uVar7 >> 10;
  iVar14 = *local_34;
  iVar8 = iVar9 * ((*local_38 >> 0x11) - (iVar14 >> 0x11));
  *(int *)(puVar2 + 0x28) = iVar8;
  *(int *)(puVar2 + 0x24) =
       ((local_44 * (iVar8 >> 2) >> 0xd) + (iVar14 >> 0x11) * 0x20) * 0x10000 >> 0x10;
  iVar14 = local_34[1];
  iVar8 = iVar9 * ((local_38[1] >> 0x11) - (iVar14 >> 0x11));
  *(int *)(puVar2 + 0x30) = iVar8;
  *(int *)(puVar2 + 0x2c) =
       ((local_44 * (iVar8 >> 2) >> 0xd) + (iVar14 >> 0x11) * 0x20) * 0x10000 >> 0x10;
  iVar8 = local_34[2];
  iVar14 = iVar9 * ((local_38[2] >> 0x11) - (iVar8 >> 0x11));
  *(int *)(puVar2 + 0x38) = iVar14;
  *(int *)(puVar2 + 0x34) =
       ((local_44 * (iVar14 >> 2) >> 0xd) + (iVar8 >> 0x11) * 0x20) * 0x10000 >> 0x10;
  iVar8 = local_34[3];
  iVar9 = ((local_38[3] >> 0x11) - (iVar8 >> 0x11)) * iVar9;
  *(int *)(puVar2 + 0x40) = iVar9;
  *(int *)(puVar2 + 0x3c) =
       ((local_44 * (iVar9 >> 2) >> 0xd) + (iVar8 >> 0x11) * 0x20) * 0x10000 >> 0x10;
  iVar9 = *(int *)(puVar3 + 0x60);
  if (iVar9 < 0) {
    host_s3eDeviceYield_arm(0x80000000);
    iVar9 = *(int *)(puVar3 + 100);
  }
  *(int *)(puVar3 + 0x60) = (iVar9 - local_40) + -0x10;
                    /* WARNING: Could not recover jumptable at 0x4a05c800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar3 + 0x68))(puVar2);
  return;
}



// Address: 4a05ccbc

void FUN_4a05ccbc(int *param_1,int *param_2,uint param_3,int param_4)

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
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  int *piVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  int local_74;
  int local_6c;
  int local_68;
  int local_64;
  int *local_5c;
  int local_58;
  int local_54;
  int local_50 [2];
  uint local_48;
  uint local_44;
  int local_40;
  int *local_3c;
  int *local_38;
  int *piStack_34;
  int *local_30;
  uint local_2c;
  int local_28;
  
  puVar4 = PTR_DAT_4a05d920;
  puVar3 = PTR_DAT_4a05d91c;
  uVar1 = *(ushort *)(param_1 + 6);
  if ((uVar1 & 8) == 0) {
    local_38 = param_1 + 9;
  }
  else {
    iVar13 = param_1[2] >> 0xe;
    iVar11 = *(int *)(*(int *)PTR_DAT_4a05d920 + iVar13 * 4);
    uVar19 = *(int *)(*(int *)PTR_DAT_4a05d920 + iVar13 * 4 + 4) - iVar11;
    uVar12 = param_1[2] & 0x3fff;
    lVar2 = (ulonglong)uVar12 * (ulonglong)uVar19;
    lVar2 = (longlong)
            (int)((iVar11 + ((uint)lVar2 >> 0xe |
                            (((int)uVar19 >> 0x1f) * uVar12 + (int)((ulonglong)lVar2 >> 0x20)) *
                            0x40000)) - param_1[4]) * (longlong)param_1[5];
    uVar12 = (uint)lVar2 >> 10 | (int)((ulonglong)lVar2 >> 0x20) << 0x16;
    if (0x3fffffff < (int)uVar12) {
      uVar12 = 0x3fc00000;
    }
    iVar13 = param_1[9] >> 2;
    iVar11 = param_1[10] >> 2;
    if ((uVar1 & 0x10) == 0) {
      iVar13 = iVar13 + ((uint)((longlong)param_1[7] * (longlong)(int)uVar12) >> 0x10 |
                        (int)((ulonglong)((longlong)param_1[7] * (longlong)(int)uVar12) >> 0x20) <<
                        0x10);
    }
    if ((uVar1 & 0x20) == 0) {
      iVar11 = iVar11 + ((uint)((longlong)param_1[8] * (longlong)(int)uVar12) >> 0x10 |
                        (int)((ulonglong)((longlong)param_1[8] * (longlong)(int)uVar12) >> 0x20) <<
                        0x10);
    }
    *(int *)PTR_DAT_4a05d91c = iVar13 << 2;
    *(int *)(puVar3 + 4) = iVar11 << 2;
    local_38 = (int *)puVar3;
  }
  uVar1 = *(ushort *)(param_2 + 6);
  if ((uVar1 & 8) == 0) {
    local_3c = param_2 + 9;
  }
  else {
    local_3c = (int *)(puVar3 + 8);
    iVar13 = param_2[2] >> 0xe;
    iVar11 = *(int *)(*(int *)puVar4 + iVar13 * 4);
    uVar19 = *(int *)(*(int *)puVar4 + iVar13 * 4 + 4) - iVar11;
    uVar12 = param_2[2] & 0x3fff;
    lVar2 = (ulonglong)uVar12 * (ulonglong)uVar19;
    lVar2 = (longlong)
            (int)((iVar11 + ((uint)lVar2 >> 0xe |
                            (((int)uVar19 >> 0x1f) * uVar12 + (int)((ulonglong)lVar2 >> 0x20)) *
                            0x40000)) - param_2[4]) * (longlong)param_2[5];
    uVar12 = (uint)lVar2 >> 10 | (int)((ulonglong)lVar2 >> 0x20) << 0x16;
    if (0x3fffffff < (int)uVar12) {
      uVar12 = 0x3fc00000;
    }
    iVar13 = param_2[9] >> 2;
    iVar11 = param_2[10] >> 2;
    if ((uVar1 & 0x10) == 0) {
      iVar13 = iVar13 + ((uint)((longlong)param_2[7] * (longlong)(int)uVar12) >> 0x10 |
                        (int)((ulonglong)((longlong)param_2[7] * (longlong)(int)uVar12) >> 0x20) <<
                        0x10);
    }
    if ((uVar1 & 0x20) == 0) {
      iVar11 = iVar11 + ((uint)((longlong)param_2[8] * (longlong)(int)uVar12) >> 0x10 |
                        (int)((ulonglong)((longlong)param_2[8] * (longlong)(int)uVar12) >> 0x20) <<
                        0x10);
    }
    *local_3c = iVar13 << 2;
    *(int *)(puVar3 + 0xc) = iVar11 << 2;
  }
  puVar3 = PTR_DAT_4a05d924;
  uVar12 = *param_1 >> 0xf;
  local_64 = *param_1 >> 0x12;
  local_40 = (*param_2 >> 0x12) - local_64;
  uVar19 = *(uint *)(*(int *)PTR_DAT_4a05d920 + ((*param_2 >> 0xf) - uVar12) * 4);
  local_44 = 7 - (uVar12 & 7);
  iVar13 = param_1[2] >> 4;
  iVar11 = param_2[2] >> 4;
  piStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  if (0xb < local_40) {
    iVar6 = iVar13 - iVar11;
    bVar20 = iVar6 < 0;
    if (iVar6 != 0) {
      if (bVar20) {
        iVar6 = -iVar6;
      }
      iVar7 = (local_40 + 8 >> 1) * (iVar6 >> 3);
      iVar6 = iVar11;
      if (bVar20) {
        iVar6 = iVar13;
      }
      if (iVar7 - (iVar6 >> 2) != 0 && iVar6 >> 2 <= iVar7) {
        uVar12 = iVar11 - iVar13;
        bVar20 = (int)(uVar12 ^ uVar19) < 0;
        if (bVar20) {
          uVar12 = -uVar12;
        }
        local_48 = (uint)((longlong)(int)uVar12 * (longlong)(int)uVar19) >> 0x17 |
                   (int)((ulonglong)((longlong)(int)uVar12 * (longlong)(int)uVar19) >> 0x20) << 9;
        if (bVar20) {
          local_48 = -local_48;
        }
        piVar8 = (int *)FUN_4a035a80(local_40,local_48);
        if (piVar8 != (int *)0x0) {
          piVar10 = (int *)FUN_4a03a064(iVar13,iVar11,local_38,local_3c);
          iVar7 = *piVar8;
          iVar11 = local_44 + iVar7 * 8;
          uVar9 = iVar13 * 0x10 + (((int)local_48 >> 1) * iVar11 >> 2);
          iVar6 = *(int *)PTR_DAT_4a05d920;
          iVar13 = *(int *)(iVar6 + ((int)uVar9 >> 0xe) * 4);
          uVar12 = *(int *)(iVar6 + ((int)uVar9 >> 0xe) * 4 + 4) - iVar13;
          lVar2 = (ulonglong)(uVar9 & 0x3fff) * (ulonglong)uVar12;
          lVar2 = (longlong)
                  (int)((iVar13 + ((uint)lVar2 >> 0xe |
                                  (((int)uVar12 >> 0x1f) * (uVar9 & 0x3fff) +
                                  (int)((ulonglong)lVar2 >> 0x20)) * 0x40000)) - *piVar10) *
                  (longlong)piVar10[1];
          uVar12 = (uint)lVar2 >> 10 | (int)((ulonglong)lVar2 >> 0x20) << 0x16;
          lVar2 = (longlong)piVar10[3] * (longlong)(int)uVar12;
          local_58 = (((uint)lVar2 >> 0x1d | (int)((ulonglong)lVar2 >> 0x20) << 3) +
                     (*(int *)piVar10[2] >> 1)) * 2;
          lVar2 = (longlong)piVar10[4] * (longlong)(int)uVar12;
          local_54 = (((uint)lVar2 >> 0x1d | (int)((ulonglong)lVar2 >> 0x20) << 3) +
                     (*(int *)(piVar10[2] + 4) >> 1)) * 2;
          uVar19 = *(uint *)(iVar6 + iVar11 * 4);
          *(int *)puVar3 = (int)(short)iVar7;
          *(int *)(puVar3 + 4) = *(int *)(PTR_LAB_4a05d928 + 0x50) + local_64 * 2;
          puVar4 = PTR_LAB_4a05d928;
          uVar12 = (local_58 >> 0xe) - (*local_38 >> 0xe);
          local_6c = (*local_38 >> 0xe) << 0xe;
          local_68 = (local_38[1] >> 0xe) * 0x4000;
          iVar13 = local_68;
          if ((int)uVar12 < 0) {
            iVar13 = local_6c;
          }
          uVar16 = (local_54 >> 0xe) - (local_38[1] >> 0xe);
          if ((int)uVar12 < 0) {
            local_6c = iVar13 + -1;
          }
          if ((int)uVar16 < 0) {
            local_68 = local_68 + -1;
          }
          if (iVar7 == 1) {
            iVar13 = (int)(local_44 * ((int)uVar19 >> 10)) >> 4;
            uVar19 = *(uint *)(PTR_LAB_4a05d928 + 0x54);
            *(int *)(puVar3 + 8) = iVar13 * ((int)uVar12 >> 2) + local_6c >> (uVar19 & 0xff);
            iVar13 = ((int)uVar16 >> 2) * iVar13 + local_68 >> ((uVar19 & 0x7f) << 1);
            uVar12 = *(uint *)(puVar4 + 0x58);
            if (uVar12 != 0) {
              iVar13 = iVar13 << (uVar12 & 0xff);
            }
            *(int *)(puVar3 + 0xc) = iVar13;
          }
          else {
            bVar20 = (int)(uVar12 ^ uVar19) < 0;
            if (bVar20) {
              uVar12 = -uVar12;
            }
            uVar12 = (uint)((longlong)(int)uVar12 * (longlong)(int)uVar19) >> 0xd |
                     (int)((ulonglong)((longlong)(int)uVar12 * (longlong)(int)uVar19) >> 0x20) <<
                     0x13;
            if (bVar20) {
              uVar12 = -uVar12;
            }
            bVar20 = (int)(uVar16 ^ uVar19) < 0;
            if (bVar20) {
              uVar16 = -uVar16;
            }
            uVar19 = (uint)((longlong)(int)uVar16 * (longlong)(int)uVar19) >> 0xd |
                     (int)((ulonglong)((longlong)(int)uVar16 * (longlong)(int)uVar19) >> 0x20) <<
                     0x13;
            if (bVar20) {
              uVar19 = -uVar19;
            }
            uVar16 = 0;
            if (local_2c != 0) {
              uVar14 = uVar12;
              if ((int)uVar12 < 1) {
                uVar14 = -uVar12;
              }
              uVar18 = uVar19;
              if ((int)uVar19 < 1) {
                uVar18 = -uVar19;
              }
              if ((int)uVar18 < (int)uVar14) {
                uVar14 = uVar12;
                if ((int)uVar12 < 1) {
                  uVar14 = -uVar12;
                }
              }
              else {
                uVar14 = uVar19;
                if ((int)uVar19 < 1) {
                  uVar14 = -uVar19;
                }
              }
              if (0x13ffff < uVar14) {
                uVar16 = 0;
                if (0x9ffff < uVar14 >> 4) {
                  uVar16 = 4;
                  uVar14 = uVar14 >> 4;
                }
                if (0x9ffff < uVar14 >> 2) {
                  uVar16 = uVar16 + 2;
                  uVar14 = uVar14 >> 2;
                }
                if (0x9ffff < uVar14 >> 1) {
                  uVar16 = uVar16 + 1;
                }
                if (local_2c < uVar16) {
                  uVar16 = local_2c;
                }
                local_6c = local_6c >> (uVar16 & 0xff);
                local_68 = local_68 >> (uVar16 & 0xff);
                uVar12 = (int)uVar12 >> (uVar16 & 0xff);
                uVar19 = (int)uVar19 >> (uVar16 & 0xff);
              }
              if (*(uint *)(PTR_LAB_4a05d928 + 0x54) != uVar16) {
                iVar13 = local_28 + uVar16 * 8;
                *(undefined4 *)(puVar3 + 0x18) = *(undefined4 *)(iVar13 + 100);
                *(undefined4 *)(puVar3 + 0x1c) = *(undefined4 *)(iVar13 + 0x68);
                *(uint *)(puVar4 + 0x54) = uVar16;
              }
            }
            bVar20 = (int)(local_44 ^ uVar19) < 0;
            uVar14 = uVar19;
            if (bVar20) {
              uVar14 = -uVar19;
            }
            uVar14 = (uint)((longlong)(int)uVar14 * (longlong)(int)local_44) >> 3 |
                     (int)((ulonglong)((longlong)(int)uVar14 * (longlong)(int)local_44) >> 0x20) <<
                     0x1d;
            if (bVar20) {
              uVar14 = -uVar14;
            }
            local_74 = uVar14 + local_68;
            bVar20 = (int)(local_44 ^ uVar12) < 0;
            uVar14 = uVar12;
            if (bVar20) {
              uVar14 = -uVar12;
            }
            uVar14 = (uint)((longlong)(int)uVar14 * (longlong)(int)local_44) >> 3 |
                     (int)((ulonglong)((longlong)(int)uVar14 * (longlong)(int)local_44) >> 0x20) <<
                     0x1d;
            if (bVar20) {
              uVar14 = -uVar14;
            }
            *(uint *)(puVar3 + 0x10) = uVar12;
            puVar4 = PTR_LAB_4a05d928;
            *(uint *)(puVar3 + 8) = uVar14 + local_6c;
            uVar12 = *(uint *)(puVar4 + 0x58);
            if (uVar12 != 0) {
              uVar19 = uVar19 << (uVar12 & 0xff);
              local_74 = local_74 << (uVar12 & 0xff);
            }
            *(int *)(puVar3 + 0x14) = (int)uVar19 >> (uVar16 & 0xff);
            *(int *)(puVar3 + 0xc) = local_74 >> (uVar16 & 0xff);
          }
          (**(code **)(PTR_LAB_4a05d928 + 0x68))(puVar3);
          piVar5 = local_50;
          piVar8 = piVar8 + 1;
          local_5c = &local_58;
          do {
            piVar15 = piVar5;
            puVar4 = PTR_LAB_4a05d928;
            local_64 = local_64 + iVar7;
            piVar17 = piVar8 + 1;
            iVar7 = *piVar8;
            if (*piVar17 == 0) {
              iVar13 = (*local_30 >> 0xf) + local_64 * -8 + -7;
              iVar11 = local_3c[1];
              *piVar15 = *local_3c;
              piVar15[1] = iVar11;
            }
            else {
              uVar9 = local_48 * iVar7 + uVar9;
              iVar13 = *(int *)(*(int *)PTR_DAT_4a05d920 + ((int)uVar9 >> 0xe) * 4);
              uVar12 = *(int *)(*(int *)PTR_DAT_4a05d920 + ((int)uVar9 >> 0xe) * 4 + 4) - iVar13;
              lVar2 = (ulonglong)(uVar9 & 0x3fff) * (ulonglong)uVar12;
              lVar2 = (longlong)
                      (int)((iVar13 + ((uint)lVar2 >> 0xe |
                                      (((int)uVar12 >> 0x1f) * (uVar9 & 0x3fff) +
                                      (int)((ulonglong)lVar2 >> 0x20)) * 0x40000)) - *piVar10) *
                      (longlong)piVar10[1];
              uVar12 = (uint)lVar2 >> 10 | (int)((ulonglong)lVar2 >> 0x20) << 0x16;
              lVar2 = (longlong)piVar10[3] * (longlong)(int)uVar12;
              *piVar15 = (((uint)lVar2 >> 0x1d | (int)((ulonglong)lVar2 >> 0x20) << 3) +
                         (*(int *)piVar10[2] >> 1)) * 2;
              lVar2 = (longlong)piVar10[4] * (longlong)(int)uVar12;
              piVar15[1] = (((uint)lVar2 >> 0x1d | (int)((ulonglong)lVar2 >> 0x20) << 3) +
                           (*(int *)(piVar10[2] + 4) >> 1)) * 2;
              iVar13 = iVar7 << 3;
            }
            uVar16 = *(uint *)(*(int *)PTR_DAT_4a05d920 + iVar13 * 4);
            *(int *)puVar3 = iVar7;
            *(int *)(puVar3 + 4) = *(int *)(puVar4 + 0x50) + local_64 * 2;
            puVar4 = PTR_LAB_4a05d928;
            uVar12 = (*piVar15 >> 0xe) - (*local_5c >> 0xe);
            iVar13 = (*local_5c >> 0xe) * 0x4000;
            uVar19 = (piVar15[1] >> 0xe) - (local_5c[1] >> 0xe);
            if ((int)uVar12 < 0) {
              iVar13 = iVar13 + -1;
            }
            local_6c = (local_5c[1] >> 0xe) * 0x4000;
            if ((int)uVar19 < 0) {
              local_6c = local_6c + -1;
            }
            if (iVar7 == 1) {
              uVar12 = *(uint *)(PTR_LAB_4a05d928 + 0x54);
              *(int *)(puVar3 + 8) = iVar13 >> (uVar12 & 0xff);
              uVar19 = *(uint *)(puVar4 + 0x58);
              local_6c = local_6c >> ((uVar12 & 0x7f) << 1);
              if (uVar19 != 0) {
                local_6c = local_6c << (uVar19 & 0xff);
              }
              *(int *)(puVar3 + 0xc) = local_6c;
            }
            else {
              bVar20 = (int)(uVar12 ^ uVar16) < 0;
              if (bVar20) {
                uVar12 = -uVar12;
              }
              uVar12 = (uint)((longlong)(int)uVar12 * (longlong)(int)uVar16) >> 0xd |
                       (int)((ulonglong)((longlong)(int)uVar12 * (longlong)(int)uVar16) >> 0x20) <<
                       0x13;
              if (bVar20) {
                uVar12 = -uVar12;
              }
              bVar20 = (int)(uVar19 ^ uVar16) < 0;
              if (bVar20) {
                uVar19 = -uVar19;
              }
              uVar19 = (uint)((longlong)(int)uVar19 * (longlong)(int)uVar16) >> 0xd |
                       (int)((ulonglong)((longlong)(int)uVar19 * (longlong)(int)uVar16) >> 0x20) <<
                       0x13;
              if (bVar20) {
                uVar19 = -uVar19;
              }
              uVar16 = 0;
              if (local_2c != 0) {
                uVar14 = uVar12;
                if ((int)uVar12 < 1) {
                  uVar14 = -uVar12;
                }
                uVar18 = uVar19;
                if ((int)uVar19 < 1) {
                  uVar18 = -uVar19;
                }
                if ((int)uVar18 < (int)uVar14) {
                  uVar14 = uVar12;
                  if ((int)uVar12 < 1) {
                    uVar14 = -uVar12;
                  }
                }
                else {
                  uVar14 = uVar19;
                  if ((int)uVar19 < 1) {
                    uVar14 = -uVar19;
                  }
                }
                if (0x13ffff < uVar14) {
                  uVar16 = 0;
                  if (0x9ffff < uVar14 >> 4) {
                    uVar16 = 4;
                    uVar14 = uVar14 >> 4;
                  }
                  if (0x9ffff < uVar14 >> 2) {
                    uVar16 = uVar16 + 2;
                    uVar14 = uVar14 >> 2;
                  }
                  if (0x9ffff < uVar14 >> 1) {
                    uVar16 = uVar16 + 1;
                  }
                  if (local_2c < uVar16) {
                    uVar16 = local_2c;
                  }
                  uVar12 = (int)uVar12 >> (uVar16 & 0xff);
                  uVar19 = (int)uVar19 >> (uVar16 & 0xff);
                  iVar13 = iVar13 >> (uVar16 & 0xff);
                  local_6c = local_6c >> (uVar16 & 0xff);
                }
                if (*(uint *)(PTR_LAB_4a05d928 + 0x54) != uVar16) {
                  iVar11 = local_28 + uVar16 * 8;
                  *(undefined4 *)(puVar3 + 0x18) = *(undefined4 *)(iVar11 + 100);
                  *(undefined4 *)(puVar3 + 0x1c) = *(undefined4 *)(iVar11 + 0x68);
                  *(uint *)(puVar4 + 0x54) = uVar16;
                }
              }
              *(int *)(puVar3 + 8) = iVar13;
              puVar4 = PTR_LAB_4a05d928;
              *(uint *)(puVar3 + 0x10) = uVar12;
              uVar12 = *(uint *)(puVar4 + 0x58);
              if (uVar12 != 0) {
                uVar19 = uVar19 << (uVar12 & 0xff);
                local_6c = local_6c << (uVar12 & 0xff);
              }
              *(int *)(puVar3 + 0x14) = (int)uVar19 >> (uVar16 & 0xff);
              *(int *)(puVar3 + 0xc) = local_6c >> (uVar16 & 0xff);
            }
            (**(code **)(PTR_LAB_4a05d928 + 0x68))(puVar3);
            puVar4 = PTR_LAB_4a05d928;
            piVar5 = local_5c;
            piVar8 = piVar17;
            local_5c = piVar15;
          } while (*piVar17 != 0);
          iVar13 = *(int *)(PTR_LAB_4a05d928 + 0x60);
          if (iVar13 < 0) {
            host_s3eDeviceYield_arm(0x80000000);
            iVar13 = *(int *)(puVar4 + 100);
          }
          *(int *)(puVar4 + 0x60) = (iVar13 - local_40) + -0x10;
          return;
        }
      }
    }
  }
  puVar4 = PTR_LAB_4a05d928;
  *(int *)puVar3 = local_40;
  *(int *)(puVar3 + 4) = *(int *)(puVar4 + 0x50) + local_64 * 2;
  uVar12 = (*local_3c >> 0xe) - (*local_38 >> 0xe);
  uVar9 = (local_3c[1] >> 0xe) - (local_38[1] >> 0xe);
  iVar13 = (*local_38 >> 0xe) * 0x4000;
  iVar11 = (local_38[1] >> 0xe) * 0x4000;
  if ((int)uVar12 < 0) {
    iVar13 = iVar13 + -1;
  }
  if ((int)uVar9 < 0) {
    iVar11 = iVar11 + -1;
  }
  if (local_40 == 1) {
    iVar6 = (int)(local_44 * ((int)uVar19 >> 10)) >> 4;
    uVar19 = *(uint *)(puVar4 + 0x54);
    *(int *)(puVar3 + 8) = iVar6 * ((int)uVar12 >> 2) + iVar13 >> (uVar19 & 0xff);
    iVar13 = iVar6 * ((int)uVar9 >> 2) + iVar11 >> ((uVar19 & 0x7f) << 1);
    if (*(uint *)(puVar4 + 0x58) != 0) {
      iVar13 = iVar13 << (*(uint *)(puVar4 + 0x58) & 0xff);
    }
    *(int *)(puVar3 + 0xc) = iVar13;
  }
  else {
    bVar20 = (int)(uVar12 ^ uVar19) < 0;
    if (bVar20) {
      uVar12 = -uVar12;
    }
    uVar12 = (uint)((longlong)(int)uVar12 * (longlong)(int)uVar19) >> 0xd |
             (int)((ulonglong)((longlong)(int)uVar12 * (longlong)(int)uVar19) >> 0x20) << 0x13;
    if (bVar20) {
      uVar12 = -uVar12;
    }
    bVar20 = (int)(uVar9 ^ uVar19) < 0;
    if (bVar20) {
      uVar9 = -uVar9;
    }
    uVar19 = (uint)((longlong)(int)uVar9 * (longlong)(int)uVar19) >> 0xd |
             (int)((ulonglong)((longlong)(int)uVar9 * (longlong)(int)uVar19) >> 0x20) << 0x13;
    if (bVar20) {
      uVar19 = -uVar19;
    }
    uVar9 = 0;
    if (local_2c != 0) {
      uVar16 = uVar12;
      if ((int)uVar12 < 1) {
        uVar16 = -uVar12;
      }
      uVar14 = uVar19;
      if ((int)uVar19 < 1) {
        uVar14 = -uVar19;
      }
      if ((int)uVar14 < (int)uVar16) {
        uVar16 = uVar12;
        if ((int)uVar12 < 1) {
          uVar16 = -uVar12;
        }
      }
      else {
        uVar16 = uVar19;
        if ((int)uVar19 < 1) {
          uVar16 = -uVar19;
        }
      }
      if (0x13ffff < uVar16) {
        uVar9 = 0;
        if (0x9ffff < uVar16 >> 4) {
          uVar9 = 4;
          uVar16 = uVar16 >> 4;
        }
        if (0x9ffff < uVar16 >> 2) {
          uVar9 = uVar9 + 2;
          uVar16 = uVar16 >> 2;
        }
        if (0x9ffff < uVar16 >> 1) {
          uVar9 = uVar9 + 1;
        }
        if (local_2c < uVar9) {
          uVar9 = local_2c;
        }
        uVar12 = (int)uVar12 >> (uVar9 & 0xff);
        uVar19 = (int)uVar19 >> (uVar9 & 0xff);
        iVar13 = iVar13 >> (uVar9 & 0xff);
        iVar11 = iVar11 >> (uVar9 & 0xff);
      }
      if (*(uint *)(puVar4 + 0x54) != uVar9) {
        iVar6 = local_28 + uVar9 * 8;
        *(undefined4 *)(puVar3 + 0x18) = *(undefined4 *)(iVar6 + 100);
        *(undefined4 *)(puVar3 + 0x1c) = *(undefined4 *)(iVar6 + 0x68);
        *(uint *)(puVar4 + 0x54) = uVar9;
      }
    }
    bVar20 = (int)(uVar19 ^ local_44) < 0;
    uVar16 = uVar19;
    if (bVar20) {
      uVar16 = -uVar19;
    }
    uVar16 = (uint)((longlong)(int)uVar16 * (longlong)(int)local_44) >> 3 |
             (int)((ulonglong)((longlong)(int)uVar16 * (longlong)(int)local_44) >> 0x20) << 0x1d;
    if (bVar20) {
      uVar16 = -uVar16;
    }
    bVar20 = (int)(uVar12 ^ local_44) < 0;
    iVar11 = uVar16 + iVar11;
    uVar16 = uVar12;
    if (bVar20) {
      uVar16 = -uVar12;
    }
    uVar16 = (uint)((longlong)(int)uVar16 * (longlong)(int)local_44) >> 3 |
             (int)((ulonglong)((longlong)(int)uVar16 * (longlong)(int)local_44) >> 0x20) << 0x1d;
    if (bVar20) {
      uVar16 = -uVar16;
    }
    *(uint *)(puVar3 + 0x10) = uVar12;
    *(uint *)(puVar3 + 8) = uVar16 + iVar13;
    uVar12 = *(uint *)(puVar4 + 0x58);
    if (uVar12 != 0) {
      uVar19 = uVar19 << (uVar12 & 0xff);
      iVar11 = iVar11 << (uVar12 & 0xff);
    }
    *(int *)(puVar3 + 0x14) = (int)uVar19 >> (uVar9 & 0xff);
    *(int *)(puVar3 + 0xc) = iVar11 >> (uVar9 & 0xff);
  }
  iVar13 = *(int *)(puVar4 + 0x60);
  if (iVar13 < 0) {
    host_s3eDeviceYield_arm(0x80000000);
    iVar13 = *(int *)(puVar4 + 100);
  }
  *(int *)(puVar4 + 0x60) = (iVar13 - local_40) + -0x10;
                    /* WARNING: Could not recover jumptable at 0x4a05d1c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar4 + 0x68))(puVar3);
  return;
}




/* AUTOMATED DECOMPILER OUTPUT. Not original source, not a buildable game.
 * Function boundaries, types, indirect calls, and data still require validation. */

// Address: 4a0c4860

void FUN_4a0c4860(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = PTR_PTR_4a0c48b8;
  piVar2 = (int *)param_1[2];
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a0c48bc

undefined4 FUN_4a0c48bc(void)

{
  return *(undefined4 *)PTR_DAT_4a0c48c8;
}



// Address: 4a0c48cc

undefined4 FUN_4a0c48cc(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_110 [256];
  int *local_10;
  
  local_10 = (int *)*param_1;
  if (local_10 != (int *)0x0) {
    (**(code **)(*local_10 + 0xc))();
  }
  FUN_4a03ed24(local_10[2],auStack_110,0x100,0);
  puVar2 = (undefined1 *)thunk_FUN_4a0015a0(auStack_110,0x2e);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
  }
  uVar3 = thunk_FUN_4a161570(0x34);
  uVar3 = FUN_4a0c03ec(uVar3,auStack_110,param_2);
  piVar1 = local_10;
  if ((local_10 != (int *)0x0) && (iVar4 = (**(code **)(*local_10 + 8))(local_10), iVar4 != 0)) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return uVar3;
}



// Address: 4a0c4988

void FUN_4a0c4988(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0c49a0;
  return;
}



// Address: 4a0c49c0

void FUN_4a0c49c0(undefined4 *param_1)

{
  *param_1 = PTR_PTR_4a0c49cc;
  return;
}



// Address: 4a0c49dc

void FUN_4a0c49dc(void)

{
  return;
}



// Address: 4a0c49e0

int * FUN_4a0c49e0(int *param_1)

{
  char *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  uint *puVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  uint uVar12;
  char *pcVar13;
  int iVar14;
  undefined1 auStack_268 [16];
  int local_258;
  undefined1 auStack_22c [336];
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  uint local_cc;
  uint local_c8;
  char *local_c4;
  char *local_c0;
  char *local_bc;
  undefined4 local_b8;
  char *local_b4;
  char *local_b0;
  char *local_ac;
  char local_a8 [124];
  int *local_2c;
  int *local_28;
  
  local_28 = param_1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0xc))(param_1);
  }
  piVar2 = (int *)FUN_4a0c3450();
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))();
  }
  uVar3 = thunk_FUN_4a161570(0xc);
  piVar4 = (int *)FUN_4a0c4300(uVar3,piVar2,param_1);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))();
  }
  iVar5 = FUN_4a0c4278(piVar4);
  if (iVar5 == 0) {
    FUN_4a13e59c(param_1,local_a8);
    local_b4 = (char *)0x0;
    local_b0 = (char *)0x0;
    local_ac = (char *)0x0;
    iVar5 = thunk_FUN_4a0013e0(s_Missing_file__4a0c4dd8);
    local_bc = s_Missing_file__4a0c4dd8 + iVar5;
    local_b8 = 0;
    local_c0 = s_Missing_file__4a0c4dd8;
    iVar5 = iVar5 + 1;
    local_c4 = (char *)0x0;
    if (iVar5 == 0) {
      FUN_4a0bcbf4(PTR_s_basic_string_4a0c4de8);
    }
    else {
      pcVar6 = (char *)FUN_4a15e080(iVar5);
      if (pcVar6 == (char *)0x0) {
        pcVar6 = (char *)FUN_4a1669a8();
      }
      local_ac = pcVar6 + iVar5;
      local_b4 = pcVar6;
      local_b0 = pcVar6;
    }
    pcVar1 = local_bc;
    pcVar6 = local_c0;
    pcVar11 = local_b4;
    if (local_bc != local_c0) {
      iVar5 = FUN_4a000ec8(local_b4);
      pcVar11 = pcVar1 + (iVar5 - (int)pcVar6);
    }
    local_c4 = (char *)0x0;
    *pcVar11 = '\0';
    local_b0 = pcVar11;
    iVar5 = thunk_FUN_4a0013e0(local_a8);
    local_c4 = local_a8;
    local_c0 = local_c4 + iVar5;
    local_b8 = 0;
    local_bc = (char *)0x0;
    if (local_c4 != local_c0) {
      uVar12 = (int)local_c0 - (int)local_c4;
      local_c8 = (int)local_b0 - (int)local_b4;
      local_cc = 0;
      if ((uVar12 == 0xffffffff) || (-uVar12 - 2 < (uint)((int)local_b0 - (int)local_b4))) {
        FUN_4a0bcbf4(PTR_s_basic_string_4a0c4de8);
      }
      if (local_ac + (-1 - (int)local_b4) < (char *)(local_c8 + uVar12)) {
        puVar7 = &local_cc;
        if (uVar12 <= local_c8) {
          puVar7 = &local_c8;
        }
        local_cc = uVar12;
        iVar5 = *puVar7 + local_c8 + 1;
        if (iVar5 == 0) {
          pcVar6 = (char *)0x0;
        }
        else {
          pcVar6 = (char *)FUN_4a15e080(iVar5);
          if (pcVar6 == (char *)0x0) {
            pcVar6 = (char *)FUN_4a1669a8();
          }
        }
        pcVar11 = local_b0;
        pcVar1 = local_b4;
        local_d0 = 0;
        local_d8 = 0;
        local_d4 = 0;
        local_dc = 0;
        local_d8 = FUN_4a166140();
        pcVar13 = pcVar6;
        if (pcVar11 != pcVar1) {
          iVar14 = (int)pcVar11 - (int)pcVar1;
          iVar8 = FUN_4a000ec8(pcVar6,pcVar1,iVar14);
          pcVar13 = (char *)(iVar8 + iVar14);
        }
        pcVar11 = local_c0;
        pcVar1 = local_c4;
        if (local_c0 != local_c4) {
          iVar8 = FUN_4a000ec8(pcVar13);
          pcVar13 = pcVar11 + (iVar8 - (int)pcVar1);
        }
        local_d0 = 0;
        *pcVar13 = '\0';
        if (local_b4 != (char *)0x0) {
          FUN_4a14f21c();
        }
        local_ac = pcVar6 + iVar5;
        local_b4 = pcVar6;
        local_b0 = pcVar13;
      }
      else {
        pcVar6 = local_c4 + 1;
        if (local_c0 != pcVar6) {
          FUN_4a000ec8(local_b0 + 1,pcVar6,(int)local_c0 - (int)pcVar6);
        }
        local_cc = 0;
        local_b0[uVar12] = '\0';
        *local_b0 = *local_c4;
        local_b0 = local_b0 + uVar12;
      }
    }
    if (local_b4 != (char *)0x0) {
      FUN_4a14f21c();
    }
  }
  piVar9 = (int *)FUN_4a0c42f8(piVar4);
  if (piVar9 == (int *)0x0) {
    piVar9 = (int *)0x0;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 0xc))(param_1);
      piVar9 = param_1;
    }
  }
  else {
    (**(code **)(*piVar9 + 0xc))(piVar9);
  }
  thunk_FUN_4a161570(0x18);
  piVar10 = (int *)FUN_4a0be91c();
  *piVar10 = (int)PTR_PTR_4a0c4dec;
  piVar10[2] = 0;
  piVar10[3] = 0;
  piVar10[4] = 0;
  *(undefined1 *)(piVar10 + 5) = 0;
  local_2c = piVar9;
  if (piVar9 != (int *)0x0) {
    (**(code **)(*piVar9 + 0xc))(piVar9);
  }
  FUN_4a03ed24(piVar9[2],auStack_22c,0x200,0);
  iVar5 = FUN_4a14eee8(auStack_22c,PTR_DAT_4a0c4df0);
  if (iVar5 == 0) {
    *(undefined1 *)(piVar10 + 5) = 1;
    if (piVar9 == (int *)0x0) goto LAB_4a0c4e34;
    iVar5 = (**(code **)(*piVar9 + 8))(piVar9);
  }
  else {
    piVar10[2] = iVar5;
    piVar10[3] = 0;
    uVar3 = FUN_4a14e568();
    FUN_4a14f428(uVar3,auStack_268);
    piVar10[4] = local_258;
    if (piVar9 == (int *)0x0) goto LAB_4a0c4e34;
    iVar5 = (**(code **)(*piVar9 + 8))(piVar9);
  }
  if (iVar5 != 0) {
    (**(code **)(*piVar9 + 4))(piVar9);
  }
LAB_4a0c4e34:
  if (piVar10[2] == 0) {
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 4))();
    }
    if ((piVar4 != (int *)0x0) && (iVar5 = (**(code **)(*piVar4 + 8))(piVar4), iVar5 != 0)) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    if ((piVar2 != (int *)0x0) && (iVar5 = (**(code **)(*piVar2 + 8))(piVar2), iVar5 != 0)) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    if ((piVar9 != (int *)0x0) && (iVar5 = (**(code **)(*piVar9 + 8))(piVar9), iVar5 != 0)) {
      (**(code **)(*piVar9 + 4))(piVar9);
    }
    if ((param_1 != (int *)0x0) && (iVar5 = (**(code **)(*param_1 + 8))(param_1), iVar5 != 0)) {
      (**(code **)(*param_1 + 4))(param_1);
    }
    return (int *)0x0;
  }
  if ((piVar4 != (int *)0x0) && (iVar5 = (**(code **)(*piVar4 + 8))(piVar4), iVar5 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  if ((piVar2 != (int *)0x0) && (iVar5 = (**(code **)(*piVar2 + 8))(piVar2), iVar5 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  if ((piVar9 != (int *)0x0) && (iVar5 = (**(code **)(*piVar9 + 8))(piVar9), iVar5 != 0)) {
    (**(code **)(*piVar9 + 4))(piVar9);
  }
  if ((param_1 != (int *)0x0) && (iVar5 = (**(code **)(*param_1 + 8))(param_1), iVar5 != 0)) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  return piVar10;
}



// Address: 4a0c503c

void FUN_4a0c503c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0c0628();
  *puVar1 = PTR_PTR_4a0c5054;
  return;
}



// Address: 4a0c507c

void FUN_4a0c507c(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



// Address: 4a0c5088

void FUN_4a0c5088(undefined4 param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0c50b4;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 4) = param_2;
  return;
}



// Address: 4a0c5a34

void FUN_4a0c5a34(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  *param_1 = PTR_PTR_4a0c5ad0;
  iVar6 = param_1[2];
  iVar1 = FUN_4a0bcc84();
  if (iVar1 != 0) {
    iVar4 = 0;
    if (0 < iVar6) {
      do {
        piVar5 = *(int **)(iVar1 + iVar4 * 4);
        if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
          (**(code **)(*piVar5 + 4))(piVar5);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar6);
      if (iVar1 == 0) goto LAB_4a0c5ac0;
    }
    FUN_4a14f21c(iVar1);
  }
LAB_4a0c5ac0:
  uVar3 = FUN_4a0c6bf4(param_1);
  iVar1 = FUN_4a057044();
  FUN_4a1652c6(uVar3,*(undefined4 *)(iVar1 + 8));
  return;
}



// Address: 4a0c697c

void FUN_4a0c697c(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_4a13ca30();
  if (piVar1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a0c6994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x28))();
  return;
}



// Address: 4a0c69b4

void FUN_4a0c69b4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_4a13ca30();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x2c))(piVar1,param_2,param_3,param_4);
    return;
  }
  return;
}



// Address: 4a0c6a00

void FUN_4a0c6a00(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_4a13caa0();
  uVar2 = FUN_4a13ca78(param_1);
  (**(code **)(*param_1 + 0x5c))(param_1,0,0,uVar2,uVar1);
  return;
}



// Address: 4a0c6a44

void FUN_4a0c6a44(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_4a0be1cc(param_1,param_2 + 1);
  iVar2 = *param_2;
  *piVar1 = iVar2;
  *(int *)((int)piVar1 + *(int *)(iVar2 + -0xc)) = param_2[3];
  return;
}



// Address: 4a0c6a90

int * FUN_4a0c6a90(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_2 + 4);
  *param_1 = iVar1;
  *(undefined4 *)((int)param_1 + *(int *)(iVar1 + -0xc)) = *(undefined4 *)(param_2 + 8);
  piVar2 = (int *)param_1[1];
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  return param_1;
}



// Address: 4a0c6a98

void FUN_4a0c6a98(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0c49c0();
  *puVar1 = PTR_PTR_4a0c6ab0;
  return;
}



// Address: 4a0c6ad0

void FUN_4a0c6ad0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0c49c0();
  *puVar1 = PTR_PTR_4a0c6ae8;
  return;
}



// Address: 4a0c6b08

undefined4 FUN_4a0c6b08(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// Address: 4a0c6b10

void FUN_4a0c6b10(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  piVar2 = *(int **)(param_1 + 8);
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  *(int **)(param_1 + 8) = param_2;
  return;
}



// Address: 4a0c6b80

void FUN_4a0c6b80(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0c6ba0;
  puVar1[2] = 0;
  return;
}



// Address: 4a0c6bc0

void FUN_4a0c6bc0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0c0628();
  *puVar1 = PTR_PTR_4a0c6bd8;
  return;
}



// Address: 4a0c6bf4

void FUN_4a0c6bf4(undefined4 *param_1)

{
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a0c6c00

void FUN_4a0c6c00(int param_1,int *param_2,byte *param_3)

{
  int iVar1;
  uint *puVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  uint uVar5;
  int *piVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  uint uStack_3c;
  uint uStack_38;
  byte *pbStack_34;
  byte *pbStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  piVar6 = (int *)(param_1 + 0xc);
  if (param_2 == piVar6) {
    return;
  }
  pbStack_30 = (byte *)param_2[1];
  uStack_24 = 0;
  pbStack_34 = (byte *)*param_2;
  pbVar4 = (byte *)*piVar6;
  while( true ) {
    if (pbStack_34 != pbStack_30) {
      param_3 = *(byte **)(param_1 + 0x10);
    }
    if (pbStack_34 == pbStack_30 || param_3 == pbVar4) break;
    param_3 = (byte *)(uint)*pbStack_34;
    *pbVar4 = *pbStack_34;
    pbStack_34 = pbStack_34 + 1;
    pbVar4 = pbVar4 + 1;
  }
  if (pbStack_34 == pbStack_30) {
    pbVar7 = *(byte **)(param_1 + 0x10);
    if (pbVar4 == pbVar7) {
      return;
    }
    FUN_4a000ec8(pbVar4,pbVar7,1);
    iVar1 = *(int *)(param_1 + 0x10) - ((int)pbVar7 - (int)pbVar4);
  }
  else {
    uStack_28 = 0;
    uStack_2c = 0;
    if (pbStack_34 == pbStack_30) {
      return;
    }
    uVar5 = (int)pbStack_30 - (int)pbStack_34;
    uStack_38 = *(int *)(param_1 + 0x10) - *piVar6;
    uStack_3c = 0;
    if ((uVar5 == 0xffffffff) || (-uVar5 - 2 < uStack_38)) {
      FUN_4a0bcbf4(s_basic_string_4a0c6e68);
    }
    pbVar4 = pbStack_30;
    if ((*(int *)(param_1 + 0x14) - *piVar6) - 1U < uStack_38 + uVar5) {
      puVar2 = &uStack_3c;
      if (uVar5 <= uStack_38) {
        puVar2 = &uStack_38;
      }
      uStack_3c = uVar5;
      iVar1 = *puVar2 + uStack_38 + 1;
      if (iVar1 == 0) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)FUN_4a15e080(iVar1);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = (undefined1 *)FUN_4a1669a8();
        }
      }
      iVar8 = *piVar6;
      iVar9 = *(int *)(param_1 + 0x10);
      FUN_4a166140();
      puVar10 = puVar3;
      if (iVar9 != iVar8) {
        iVar9 = iVar9 - iVar8;
        iVar8 = FUN_4a000ec8(puVar3,iVar8,iVar9);
        puVar10 = (undefined1 *)(iVar8 + iVar9);
      }
      pbVar7 = pbStack_30;
      pbVar4 = pbStack_34;
      FUN_4a166140();
      if (pbVar7 != pbVar4) {
        iVar9 = (int)pbVar7 - (int)pbVar4;
        iVar8 = FUN_4a000ec8(puVar10,pbVar4,iVar9);
        puVar10 = (undefined1 *)(iVar8 + iVar9);
      }
      *puVar10 = 0;
      if (*piVar6 != 0) {
        FUN_4a14f21c();
      }
      *piVar6 = (int)puVar3;
      *(undefined1 **)(param_1 + 0x10) = puVar10;
      *(undefined1 **)(param_1 + 0x14) = puVar3 + iVar1;
      return;
    }
    pbVar7 = pbStack_34 + 1;
    iVar1 = *(int *)(param_1 + 0x10);
    uStack_3c = 0;
    FUN_4a166140();
    if (pbVar4 != pbVar7) {
      FUN_4a000ec8(iVar1 + 1,pbVar7,(int)pbVar4 - (int)pbVar7);
    }
    *(undefined1 *)(*(int *)(param_1 + 0x10) + uVar5) = 0;
    **(byte **)(param_1 + 0x10) = *pbStack_34;
    iVar1 = *(int *)(param_1 + 0x10) + uVar5;
  }
  *(int *)(param_1 + 0x10) = iVar1;
  return;
}



// Address: 4a0c6e80

void FUN_4a0c6e80(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



// Address: 4a0c6e88

void FUN_4a0c6e88(int *param_1)

{
  (**(code **)(*param_1 + 0x2c))(param_1);
  if (param_1[1] != 200) {
    param_1[1] = 200;
  }
  return;
}



// Address: 4a0c6ed8

void FUN_4a0c6ed8(int *param_1)

{
  if (param_1[1] != 100) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a0c6ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2c))();
  return;
}



// Address: 4a0c6ef0

int * FUN_4a0c6ef0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_4a0be9c0(param_1,param_2 + 1,param_3,param_4,param_4);
  iVar2 = *param_2;
  *piVar1 = iVar2;
  *(int *)((int)piVar1 + *(int *)(iVar2 + -0xc)) = param_2[3];
  piVar1[1] = 100;
  piVar1[2] = 0;
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
  piVar1[6] = 0;
  return piVar1;
}



// Address: 4a0c6f90

undefined8 FUN_4a0c6f90(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  *(int *)((int)param_1 + *(int *)(iVar1 + -0xc)) = param_2[3];
  if (param_1[3] != 0) {
    FUN_4a14f21c();
  }
  return CONCAT44(param_2 + 1,param_1);
}



// Address: 4a0c6fcc

undefined4 * FUN_4a0c6fcc(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  thunk_FUN_4a161570(0x14);
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0c7028;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  uVar2 = FUN_4a056efc(&DAT_4a0c702c);
  uVar2 = FUN_4a04a9e4(0,0,uVar2,param_1);
  puVar1[2] = uVar2;
  return puVar1;
}



// Address: 4a0c707c

undefined4 * FUN_4a0c707c(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0c70cc;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  if (param_2 != 0) {
    uVar2 = FUN_4a04d4d0(0,param_2);
    puVar1[2] = uVar2;
  }
  return puVar1;
}



// Address: 4a0c70d0

undefined4 * FUN_4a0c70d0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0c711c;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  iVar2 = *(int *)(param_2 + 8);
  if (iVar2 != 0) {
    FUN_4a057940(iVar2);
    puVar1[2] = iVar2;
  }
  return puVar1;
}



// Address: 4a0c7120

undefined4 * FUN_4a0c7120(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0c7180;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  if (0 < param_3) {
    uVar2 = FUN_4a0489dc(0,param_2,param_3 << 1,2,0);
    puVar1[2] = uVar2;
  }
  return puVar1;
}



// Address: 4a0c7184

undefined4 * FUN_4a0c7184(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0c71e4;
  uVar2 = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  if (0 < *(int *)(param_2 + 8)) {
    if (*(int *)(param_2 + 0xc) != 0) {
      uVar2 = *(undefined4 *)(*(int *)(param_2 + 0xc) + 8);
    }
    uVar2 = FUN_4a0489dc(0,uVar2,*(int *)(param_2 + 8),0,0);
    puVar1[2] = uVar2;
  }
  return puVar1;
}



// Address: 4a0c71e8

undefined4 * FUN_4a0c71e8(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  puVar3 = PTR_PTR_4a0c7278;
  *puVar1 = PTR_PTR_4a0c7278;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  if (0 < *(int *)(param_2 + 8)) {
    uVar4 = 1;
    if ((param_3 != 0) &&
       (uVar5 = FUN_4a00142c(param_3,s_UTF_8_4a0c727c),
       puVar3 = (undefined *)((ulonglong)uVar5 >> 0x20), (int)uVar5 == 0)) {
      uVar4 = 0;
    }
    iVar2 = *(int *)(param_2 + 0xc);
    if (iVar2 != 0) {
      puVar3 = *(undefined **)(iVar2 + 8);
    }
    if (iVar2 == 0) {
      puVar3 = (undefined *)0x0;
    }
    uVar4 = FUN_4a0489dc(0,puVar3,*(undefined4 *)(param_2 + 8),uVar4,0);
    puVar1[2] = uVar4;
  }
  return puVar1;
}



// Address: 4a0c7284

void FUN_4a0c7284(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0c72ac;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  return;
}



// Address: 4a0c72f4

void FUN_4a0c72f4(undefined4 *param_1)

{
  *param_1 = PTR_PTR_4a0c732c;
  if (param_1[2] != 0) {
    FUN_4a05a26c();
  }
  param_1[2] = 0;
  FUN_4a0c6bf4(param_1);
  return;
}



// Address: 4a0c7334

void FUN_4a0c7334(void)

{
  return;
}



// Address: 4a0c7338

undefined8 FUN_4a0c7338(undefined4 param_1)

{
  return CONCAT44(param_1,0x4a0c7344);
}



// Address: 4a0c7348

void FUN_4a0c7348(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if ((int)param_5 < 1) {
    return;
  }
  puVar1 = (undefined4 *)(param_1 + param_2 * 4);
  puVar3 = (undefined4 *)(param_3 + param_4 * 4);
  puVar2 = puVar1 + -1;
  puVar4 = puVar3 + -1;
  if ((param_5 & 1) != 0) {
    *puVar3 = *puVar1;
    puVar2 = puVar1;
    puVar4 = puVar3;
  }
  iVar5 = (int)param_5 >> 1;
  if (iVar5 == 0) {
    return;
  }
  do {
    iVar5 = iVar5 + -1;
    puVar4[1] = puVar2[1];
    puVar2 = puVar2 + 2;
    puVar4 = puVar4 + 2;
    *puVar4 = *puVar2;
  } while (iVar5 != 0);
  return;
}



// Address: 4a0c7398

void FUN_4a0c7398(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  param_5 = param_5 * param_6;
  uVar5 = param_5 - 1;
  if (param_5 < 1) {
    return;
  }
  puVar1 = (undefined1 *)(param_6 * param_2 + param_1 + uVar5);
  puVar3 = (undefined1 *)(param_6 * param_4 + param_3 + uVar5);
  puVar2 = puVar1 + 1;
  puVar4 = puVar3 + 1;
  if ((uVar5 & 1) == 0) {
    *puVar3 = *puVar1;
    puVar2 = puVar1;
    puVar4 = puVar3;
  }
  param_5 = param_5 >> 1;
  if (param_5 != 0) {
    do {
      param_5 = param_5 + -1;
      puVar4[-1] = puVar2[-1];
      puVar2 = puVar2 + -2;
      puVar4 = puVar4 + -2;
      *puVar4 = *puVar2;
    } while (param_5 != 0);
    return;
  }
  return;
}



// Address: 4a0c740c

void FUN_4a0c740c(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (param_5 < 1) {
    return;
  }
  do {
    iVar3 = param_2 + iVar5;
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 8);
    }
    iVar4 = param_4 + iVar5;
    if (*(int *)(param_3 + 0xc) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_3 + 0xc) + 8);
    }
    iVar5 = iVar5 + 1;
    *(undefined4 *)(iVar2 + iVar4 * 4) = *(undefined4 *)(iVar1 + iVar3 * 4);
  } while (iVar5 < param_5);
  return;
}



// Address: 4a0c746c

void FUN_4a0c746c(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (param_5 < 1) {
    return;
  }
  do {
    iVar3 = param_2 + iVar5;
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 8);
    }
    iVar4 = param_4 + iVar5;
    if (*(int *)(param_3 + 0xc) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_3 + 0xc) + 8);
    }
    iVar5 = iVar5 + 1;
    *(undefined2 *)(iVar2 + iVar4 * 2) = *(undefined2 *)(iVar1 + iVar3 * 2);
  } while (iVar5 < param_5);
  return;
}



// Address: 4a0c74d4

undefined4 FUN_4a0c74d4(void)

{
  return 0;
}



// Address: 4a0c74dc

undefined4 FUN_4a0c74dc(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// Address: 4a0c74e8

void FUN_4a0c74e8(int param_1)

{
  int *piVar1;
  bool bVar2;
  
  bVar2 = *(char *)(param_1 + 0x1c) != '\0';
  piVar1 = (int *)0x0;
  if (bVar2) {
    piVar1 = *(int **)(param_1 + 8);
  }
  if (bVar2 && piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}



// Address: 4a0c7524

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0c7524(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  
  if (*(int **)(param_1 + 8) == param_2) {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x1d);
  while (cVar1 != '\0') {
    FUN_4a0c74d4();
    cVar1 = *(char *)(param_1 + 0x1d);
  }
  piVar2 = param_2;
  if (param_2 != (int *)0x0) {
    piVar2 = (int *)(*(int *)(*param_2 + -0xc) + (int)param_2);
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))();
  }
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 8) + 4))();
    FUN_4a0be134(*(undefined4 *)(param_1 + 8),0);
    piVar2 = *(int **)(param_1 + 8);
    if (piVar2 != (int *)0x0) {
      piVar2 = (int *)((int)piVar2 + *(int *)(*piVar2 + -0xc));
      goto LAB_4a0c75c4;
    }
  }
  piVar2 = (int *)0x0;
LAB_4a0c75c4:
  if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 8))(piVar2), iVar3 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  *(int **)(param_1 + 8) = param_2;
  if (param_2 == (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4a0c7608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_4a0be134(param_2,param_1);
  (**(code **)(**(int **)(param_1 + 8) + 8))
            (*(int **)(param_1 + 8),*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14))
  ;
  (**(code **)(**(int **)(param_1 + 8) + 0xc))
            (*(int **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
  if (*(char *)(param_1 + 0x1c) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x4a0c7654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a0c7668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined4 **)(param_1 + 8))();
  return;
}



// Address: 4a0c766c

void FUN_4a0c766c(int param_1)

{
  if ((*(char *)(param_1 + 0x1c) == '\0') && (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)(param_1 + 8))();
  }
  *(undefined1 *)(param_1 + 0x1c) = 1;
  return;
}



// Address: 4a0c76a8

void FUN_4a0c76a8(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  piVar2 = *(int **)(param_1 + 0xc);
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  *(int **)(param_1 + 0xc) = param_2;
  return;
}



// Address: 4a0c7714

void FUN_4a0c7714(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  iVar2 = param_2;
  if (piVar1 != (int *)0x0) {
    iVar2 = *(int *)(param_1 + 0x18);
  }
  if (piVar1 != (int *)0x0 && iVar2 != param_2) {
    (**(code **)(*piVar1 + 0xc))(piVar1,param_2);
  }
  *(int *)(param_1 + 0x18) = param_2;
  return;
}



// Address: 4a0c7754

void FUN_4a0c7754(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  *(undefined1 *)(param_1 + 0x1d) = 1;
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    FUN_4a0bfd80();
    piVar2 = *(int **)(param_1 + 0xc);
    (**(code **)(*piVar2 + 0xb8))(piVar2);
    (**(code **)(*piVar1 + 0x54))(piVar1,piVar2);
  }
  *(undefined1 *)(param_1 + 0x1d) = 0;
  return;
}



// Address: 4a0c77bc

void FUN_4a0c77bc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0c77fc;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  puVar1[5] = param_3;
  puVar1[6] = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  *(undefined1 *)((int)puVar1 + 0x1d) = 0;
  return;
}



// Address: 4a0c78b8

void FUN_4a0c78b8(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
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



// Address: 4a0c7964

int * FUN_4a0c7964(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint *puVar5;
  byte ******ppppppbVar6;
  byte *****pppppbVar7;
  undefined4 uVar8;
  int *piVar9;
  byte *****pppppbVar10;
  byte ****ppppbVar11;
  byte *pbVar12;
  int *piVar13;
  byte ******ppppppbVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint local_b0;
  uint local_ac;
  byte *local_a8;
  byte *local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  byte *local_94;
  byte *local_90;
  undefined4 local_8c;
  byte ****local_88;
  byte ****local_84;
  byte ***local_80;
  undefined1 *local_7c;
  undefined1 *local_78;
  undefined1 *local_74;
  byte *****local_70;
  byte *****local_6c;
  byte *local_68;
  undefined1 auStack_64 [64];
  undefined1 auStack_24 [4];
  
  FUN_4a13e59c(param_1,auStack_64);
  FUN_4a1666dc(&local_70,auStack_64,auStack_24);
  local_80 = (byte ***)((int)local_6c - (int)local_70);
  ppppbVar11 = (byte ****)(local_80 + -1);
  if (local_80 < ppppbVar11) {
    FUN_4a0bcc04(s_basic_string_4a0c7cdc);
  }
  local_94 = (byte *)((int)local_70 + (int)ppppbVar11);
  local_84 = (byte ****)((int)local_6c + (-(int)ppppbVar11 - (int)local_70));
  if (local_84 < local_80) {
    pppppbVar7 = &local_84;
  }
  else {
    pppppbVar7 = (byte *****)&local_80;
  }
  local_7c = (undefined1 *)0x0;
  local_90 = (byte *)((int)local_70 + (int)((int)ppppbVar11 + (int)*pppppbVar7));
  local_78 = (undefined1 *)0x0;
  local_74 = (undefined1 *)0x0;
  pbVar12 = local_90 + (1 - (int)local_94);
  local_88 = (byte ****)0x0;
  local_8c = 0;
  local_98 = 0;
  if (pbVar12 == (byte *)0x0) {
    FUN_4a0bcbf4(PTR_s_basic_string_4a0c7cec);
  }
  else {
    puVar3 = (undefined1 *)FUN_4a15e080(pbVar12);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = (undefined1 *)FUN_4a1669a8();
    }
    local_74 = puVar3 + (int)pbVar12;
    local_7c = puVar3;
    local_78 = puVar3;
  }
  puVar3 = local_7c;
  pbVar1 = local_90;
  pbVar12 = local_94;
  local_98 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_a4 = (byte *)0x0;
  local_a0 = FUN_4a166140();
  if (pbVar1 != pbVar12) {
    iVar15 = (int)pbVar1 - (int)pbVar12;
    iVar4 = FUN_4a000ec8(puVar3,pbVar12,iVar15);
    puVar3 = (undefined1 *)(iVar4 + iVar15);
  }
  puVar2 = local_7c;
  local_98 = 0;
  *puVar3 = 0;
  piVar13 = (int *)0x0;
  local_78 = puVar3;
  local_84 = (byte ****)thunk_FUN_4a0013e0(&DAT_4a0c7cf0);
  local_80 = (byte ***)(puVar3 + -(int)puVar2);
  if ((int)local_84 < (int)(puVar3 + -(int)puVar2)) {
    pppppbVar7 = &local_84;
  }
  else {
    pppppbVar7 = (byte *****)&local_80;
  }
  uVar18 = thunk_FUN_4a000e60(puVar2,&DAT_4a0c7cf0,*pppppbVar7);
  puVar2 = local_78;
  puVar3 = local_7c;
  bVar17 = (int)uVar18 != 0;
  if (!bVar17) {
    uVar18 = CONCAT44(local_84,local_80);
  }
  if (bVar17 || (int)uVar18 != (int)((ulonglong)uVar18 >> 0x20)) {
    local_84 = (byte ****)thunk_FUN_4a0013e0(&DAT_4a0c8080);
    local_80 = (byte ***)(puVar2 + -(int)puVar3);
    if ((int)local_84 < (int)(puVar2 + -(int)puVar3)) {
      pppppbVar7 = &local_84;
    }
    else {
      pppppbVar7 = (byte *****)&local_80;
    }
    uVar18 = thunk_FUN_4a000e60(puVar3,&DAT_4a0c8080,*pppppbVar7);
    bVar17 = (int)uVar18 == 0;
    if (bVar17) {
      uVar18 = CONCAT44(local_84,local_80);
    }
    if (bVar17 && (int)uVar18 == (int)((ulonglong)uVar18 >> 0x20)) {
      piVar13 = (int *)FUN_4a1666dc(&local_94,s_sounds__4a0c8088,&local_98);
      local_9c = 0;
      local_88 = (byte ****)0x0;
      pbVar12 = (byte *)((int)local_6c + ((piVar13[1] - *piVar13) - (int)local_70) + 1);
      local_84 = (byte ****)0x0;
      local_80 = (byte ***)0x0;
      if (pbVar12 == (byte *)0x0) {
        FUN_4a0bcbf4(PTR_s_basic_string_4a0c7cec);
      }
      else {
        pppppbVar7 = (byte *****)FUN_4a15e080(pbVar12);
        if (pppppbVar7 == (byte *****)0x0) {
          pppppbVar7 = (byte *****)FUN_4a1669a8();
        }
        local_80 = (byte ***)((int)pppppbVar7 + (int)pbVar12);
        local_88 = (byte ****)pppppbVar7;
        local_84 = (byte ****)pppppbVar7;
      }
      local_a0 = 0;
      *(byte *)local_84 = 0;
      FUN_4a1664f0(&local_88,*piVar13,piVar13[1]);
      FUN_4a1664f0(&local_88,local_70,local_6c);
      pppppbVar7 = local_6c;
      ppppppbVar14 = (byte ******)&local_88;
      if (ppppppbVar14 != &local_70) {
        local_9c = 0;
        pppppbVar10 = (byte *****)local_88;
        ppppppbVar6 = (byte ******)local_70;
        while( true ) {
          if (pppppbVar10 != (byte *****)local_84) {
            ppppppbVar14 = (byte ******)local_6c;
          }
          if (pppppbVar10 == (byte *****)local_84 || ppppppbVar14 == ppppppbVar6) break;
          ppppppbVar14 = (byte ******)(uint)*(byte *)pppppbVar10;
          *(byte *)ppppppbVar6 = *(byte *)pppppbVar10;
          pppppbVar10 = (byte *****)((int)pppppbVar10 + 1);
          ppppppbVar6 = (byte ******)((int)ppppppbVar6 + 1);
        }
        if (pppppbVar10 == (byte *****)local_84) {
          if (ppppppbVar6 != (byte ******)local_6c) {
            FUN_4a000ec8(ppppppbVar6,local_6c,1);
            local_6c = (byte *****)((int)local_6c - ((int)pppppbVar7 - (int)ppppppbVar6));
          }
        }
        else {
          FUN_4a1664f0(&local_70);
        }
      }
      if ((byte *****)local_88 != (byte *****)0x0) {
        FUN_4a14f21c();
      }
      if (local_94 != (byte *)0x0) {
        FUN_4a14f21c();
      }
      uVar8 = thunk_FUN_4a161570(0x40);
      piVar13 = (int *)FUN_4a0c0d08(uVar8,&local_70);
      goto LAB_4a0c8024;
    }
  }
  else {
    if (*PTR_DAT_4a0c7cf8 != '\0') {
      iVar15 = *(int *)PTR_PTR_4a0c7cfc;
      iVar4 = thunk_FUN_4a0013e0(iVar15);
      pbVar12 = (byte *)(iVar4 + iVar15);
      uVar16 = (int)pbVar12 - iVar15;
      if ((uint)((int)local_6c - (int)local_70) < uVar16) {
        if (local_6c != local_70) {
          FUN_4a000eb8(local_70,iVar15);
        }
        local_a8 = (byte *)((int)local_6c + (iVar15 - (int)local_70));
        local_9c = 0;
        local_a0 = 0;
        local_a4 = pbVar12;
        if (local_a8 != pbVar12) {
          uVar16 = (int)pbVar12 - (int)local_a8;
          local_ac = (int)local_6c - (int)local_70;
          local_b0 = 0;
          if ((uVar16 == 0xffffffff) || (-uVar16 - 2 < (uint)((int)local_6c - (int)local_70))) {
            FUN_4a0bcbf4(PTR_s_basic_string_4a0c7cec);
          }
          if (local_68 + (-1 - (int)local_70) < (byte *)(local_ac + uVar16)) {
            puVar5 = &local_b0;
            if (uVar16 <= local_ac) {
              puVar5 = &local_ac;
            }
            local_b0 = uVar16;
            iVar4 = *puVar5 + local_ac + 1;
            if (iVar4 == 0) {
              ppppppbVar14 = (byte ******)0x0;
            }
            else {
              ppppppbVar14 = (byte ******)FUN_4a15e080(iVar4);
              if (ppppppbVar14 == (byte ******)0x0) {
                ppppppbVar14 = (byte ******)FUN_4a1669a8();
              }
            }
            pppppbVar7 = local_70;
            uVar21 = 0;
            uVar20 = 0;
            uVar19 = 0;
            uVar8 = FUN_4a166140();
            ppppppbVar6 = ppppppbVar14;
            if (local_6c != pppppbVar7) {
              iVar15 = FUN_4a000ec8(ppppppbVar14,pppppbVar7,(int)local_6c - (int)pppppbVar7,param_4,
                                    uVar19,uVar8,uVar20,uVar21);
              ppppppbVar6 = (byte ******)(iVar15 + ((int)local_6c - (int)pppppbVar7));
            }
            pbVar1 = local_a4;
            pbVar12 = local_a8;
            if (local_a4 != local_a8) {
              iVar15 = FUN_4a000ec8();
              ppppppbVar6 = (byte ******)(pbVar1 + (iVar15 - (int)pbVar12));
            }
            *(byte *)ppppppbVar6 = 0;
            if ((byte ******)local_70 != (byte ******)0x0) {
              FUN_4a14f21c();
            }
            local_68 = (byte *)((int)ppppppbVar14 + iVar4);
            local_70 = (byte *****)ppppppbVar14;
            local_6c = (byte *****)ppppppbVar6;
          }
          else {
            pbVar12 = local_a8 + 1;
            if (local_a4 != pbVar12) {
              FUN_4a000ec8((byte *)((int)local_6c + 1),pbVar12,(int)local_a4 - (int)pbVar12);
            }
            local_b0 = 0;
            *(byte *)((int)local_6c + uVar16) = 0;
            *(byte *)local_6c = *local_a8;
            local_6c = (byte *****)((int)local_6c + uVar16);
          }
        }
      }
      else {
        if (uVar16 != 0) {
          FUN_4a000eb8(local_70,iVar15,uVar16);
        }
        pppppbVar7 = local_6c;
        ppppppbVar14 = (byte ******)((int)local_70 + uVar16);
        if (ppppppbVar14 != (byte ******)local_6c) {
          FUN_4a000ec8(ppppppbVar14,local_6c,1);
          local_6c = (byte *****)((int)local_6c - ((int)pppppbVar7 - (int)ppppppbVar14));
        }
      }
    }
    piVar13 = (int *)FUN_4a1666dc(&local_94,s_audio__4a0c8078,&local_98);
    local_9c = 0;
    local_88 = (byte ****)0x0;
    pbVar12 = (byte *)((int)local_6c + ((piVar13[1] - *piVar13) - (int)local_70) + 1);
    local_84 = (byte ****)0x0;
    local_80 = (byte ***)0x0;
    if (pbVar12 == (byte *)0x0) {
      FUN_4a0bcbf4(PTR_s_basic_string_4a0c7cec);
    }
    else {
      pppppbVar7 = (byte *****)FUN_4a15e080(pbVar12);
      if (pppppbVar7 == (byte *****)0x0) {
        pppppbVar7 = (byte *****)FUN_4a1669a8();
      }
      local_80 = (byte ***)((int)pppppbVar7 + (int)pbVar12);
      local_88 = (byte ****)pppppbVar7;
      local_84 = (byte ****)pppppbVar7;
    }
    local_a0 = 0;
    *(byte *)local_84 = 0;
    FUN_4a1664f0(&local_88,*piVar13,piVar13[1]);
    FUN_4a1664f0(&local_88,local_70,local_6c);
    pppppbVar7 = local_6c;
    ppppppbVar14 = (byte ******)&local_88;
    if (ppppppbVar14 != &local_70) {
      local_9c = 0;
      pppppbVar10 = (byte *****)local_88;
      ppppppbVar6 = (byte ******)local_70;
      while( true ) {
        if (pppppbVar10 != (byte *****)local_84) {
          ppppppbVar14 = (byte ******)local_6c;
        }
        if (pppppbVar10 == (byte *****)local_84 || ppppppbVar14 == ppppppbVar6) break;
        ppppppbVar14 = (byte ******)(uint)*(byte *)pppppbVar10;
        *(byte *)ppppppbVar6 = *(byte *)pppppbVar10;
        pppppbVar10 = (byte *****)((int)pppppbVar10 + 1);
        ppppppbVar6 = (byte ******)((int)ppppppbVar6 + 1);
      }
      if (pppppbVar10 == (byte *****)local_84) {
        if (ppppppbVar6 != (byte ******)local_6c) {
          FUN_4a000ec8(ppppppbVar6,local_6c,1);
          local_6c = (byte *****)((int)local_6c - ((int)pppppbVar7 - (int)ppppppbVar6));
        }
      }
      else {
        FUN_4a1664f0(&local_70);
      }
    }
    if ((byte *****)local_88 != (byte *****)0x0) {
      FUN_4a14f21c();
    }
    if (local_94 != (byte *)0x0) {
      FUN_4a14f21c();
    }
    uVar8 = thunk_FUN_4a161570(0x3c);
    piVar13 = (int *)FUN_4a0c0944(uVar8,&local_70);
LAB_4a0c8024:
    if (piVar13 != (int *)0x0) {
      piVar9 = (int *)(*(int *)(*piVar13 + -0xc) + (int)piVar13);
      goto LAB_4a0c803c;
    }
  }
  piVar9 = (int *)0x0;
LAB_4a0c803c:
  if (piVar9 != (int *)0x0) {
    (**(code **)(*piVar9 + 0xc))();
  }
  if (local_7c != (undefined1 *)0x0) {
    FUN_4a14f21c();
  }
  if ((byte ******)local_70 != (byte ******)0x0) {
    FUN_4a14f21c();
  }
  return piVar13;
}



// Address: 4a0c8090

undefined4 FUN_4a0c8090(void)

{
  return 0;
}



// Address: 4a0c8098

void FUN_4a0c8098(void)

{
  return;
}



// Address: 4a0c809c

void FUN_4a0c809c(void)

{
  return;
}



// Address: 4a0c80a0

int * FUN_4a0c80a0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1 != (int *)0x0) {
    piVar1 = (int *)(**(code **)(*param_1 + 0x14))();
    piVar2 = piVar1;
    if (piVar1 != (int *)0x0) {
      piVar2 = (int *)(*(int *)(*piVar1 + -0xc) + (int)piVar1);
    }
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))();
    }
    return piVar1;
  }
  return (int *)0x0;
}



// Address: 4a0c80ec

void FUN_4a0c80ec(void)

{
  return;
}



// Address: 4a0c80f0

undefined4 FUN_4a0c80f0(void)

{
  return *(undefined4 *)(PTR_DAT_4a0c80fc + 0x48);
}



// Address: 4a0c8100

void FUN_4a0c8100(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x60) < 1) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 100) + (*(int *)(param_1 + 0x60) + -1) * 4);
  }
  if (iVar2 != 0) {
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 0xc))(param_2);
    }
    piVar3 = *(int **)(iVar2 + 8);
    if ((piVar3 != (int *)0x0) && (iVar1 = (**(code **)(*piVar3 + 8))(piVar3), iVar1 != 0)) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *(int **)(iVar2 + 8) = param_2;
    return;
  }
  return;
}



// Address: 4a0c8124

void FUN_4a0c8124(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x60) < 1) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 100) + (*(int *)(param_1 + 0x60) + -1) * 4);
  }
                    /* WARNING: Could not recover jumptable at 0x4a0c8144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x20))();
  return;
}



// Address: 4a0c8148

void FUN_4a0c8148(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x60) < 1) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 100) + (*(int *)(param_1 + 0x60) + -1) * 4);
  }
                    /* WARNING: Could not recover jumptable at 0x4a0c8168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x24))();
  return;
}



// Address: 4a0c816c

void FUN_4a0c816c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *(int *)(param_1 + 0x60);
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      if (*(int *)(*(int *)(param_1 + 100) + iVar1 * 4) == param_2) goto LAB_4a0c81a4;
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  iVar1 = -1;
LAB_4a0c81a4:
  if (iVar1 != -1) {
    iVar1 = iVar1 + 1;
    if (iVar1 < iVar2) {
      do {
        piVar4 = *(int **)(*(int *)(param_1 + 100) + iVar1 * 4);
        piVar3 = *(int **)(*(int *)(param_1 + 100) + (iVar1 + -1) * 4);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0xc))();
        }
        *(int **)(*(int *)(param_1 + 100) + (iVar1 + -1) * 4) = piVar4;
        if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 8))(piVar3), iVar2 != 0)) {
          (**(code **)(*piVar3 + 4))(piVar3);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x60));
    }
    iVar1 = *(int *)(param_1 + 0x60) + -1;
    piVar3 = *(int **)(*(int *)(param_1 + 100) + iVar1 * 4);
    *(undefined4 *)(*(int *)(param_1 + 100) + iVar1 * 4) = 0;
    if ((piVar3 != (int *)0x0) && (iVar1 = (**(code **)(*piVar3 + 8))(piVar3), iVar1 != 0)) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    return;
  }
  return;
}



// Address: 4a0c82a4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0c82a4(int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(int *)(param_1 + 0x60) < 1) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 100) + (*(int *)(param_1 + 0x60) + -1) * 4);
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x20))();
  }
  FUN_4a0c6b10(param_2,param_3);
  iVar3 = *(int *)(param_1 + 0x5c);
  if ((*(int *)(param_1 + 0x60) == iVar3) &&
     (iVar2 = *(int *)(param_1 + 0x58) + iVar3, iVar3 < iVar2)) {
    *(int *)(param_1 + 0x5c) = iVar2;
    iVar4 = *(int *)(param_1 + 100);
    iVar3 = thunk_FUN_4a161570(iVar2 * 4);
    *(int *)(param_1 + 100) = iVar3;
    if (iVar3 != 0) {
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0x60)) {
        do {
          iVar2 = iVar3 + 1;
          *(undefined4 *)(*(int *)(param_1 + 100) + iVar3 * 4) = *(undefined4 *)(iVar4 + iVar3 * 4);
          iVar3 = iVar2;
        } while (iVar2 < *(int *)(param_1 + 0x60));
      }
      thunk_FUN_4a161530(iVar4);
    }
    iVar3 = *(int *)(param_1 + 0x60);
    if (iVar3 < *(int *)(param_1 + 0x5c)) {
      do {
        iVar2 = iVar3 + 1;
        *(undefined4 *)(*(int *)(param_1 + 100) + iVar3 * 4) = 0;
        iVar3 = iVar2;
      } while (iVar2 < *(int *)(param_1 + 0x5c));
    }
  }
  iVar3 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar3 + 1;
  piVar1 = *(int **)(*(int *)(param_1 + 100) + iVar3 * 4);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))();
  }
  *(int **)(*(int *)(param_1 + 100) + iVar3 * 4) = param_2;
  if (piVar1 == (int *)0x0) {
    return;
  }
  iVar3 = (**(code **)(*piVar1 + 8))(piVar1);
  if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0c83ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a0c8400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 4))(piVar1);
  return;
}



// Address: 4a0c8404

undefined4 * FUN_4a0c8404(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)FUN_4a0c6bc0();
  *puVar2 = PTR_PTR_4a0c856c;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(puVar2 + 2);
  puVar1 = PTR_PTR_4a0c8570;
  puVar2[4] = 0;
  *puVar2 = puVar1;
  puVar2[2] = 10;
  puVar2[3] = 10;
  puVar2[5] = 0;
  iVar3 = thunk_FUN_4a161570(0x28);
  puVar2[5] = iVar3;
  if (iVar3 != 0) {
    iVar3 = 0;
    if (0 < (int)puVar2[4]) {
      do {
        iVar4 = iVar3 + 1;
        *(undefined4 *)(puVar2[5] + iVar3 * 4) = *(undefined4 *)(iVar3 * 4);
        iVar3 = iVar4;
      } while (iVar4 < (int)puVar2[4]);
    }
    thunk_FUN_4a161530(0);
  }
  iVar3 = puVar2[4];
  if ((int)puVar2[4] < (int)puVar2[3]) {
    do {
      iVar4 = iVar3 + 1;
      *(undefined4 *)(puVar2[5] + iVar3 * 4) = 0;
      iVar3 = iVar4;
    } while (iVar4 < (int)puVar2[3]);
  }
  puVar2 = (undefined4 *)FUN_4a0c6bc0(puVar2 + 0x12);
  puVar2[4] = 0;
  *puVar2 = puVar1;
  puVar2[2] = 10;
  puVar2[3] = 10;
  puVar2[5] = 0;
  iVar3 = thunk_FUN_4a161570(0x28);
  puVar2[5] = iVar3;
  if (iVar3 != 0) {
    iVar3 = 0;
    if (0 < (int)puVar2[4]) {
      do {
        iVar4 = iVar3 + 1;
        *(undefined4 *)(puVar2[5] + iVar3 * 4) = *(undefined4 *)(iVar3 * 4);
        iVar3 = iVar4;
      } while (iVar4 < (int)puVar2[4]);
    }
    thunk_FUN_4a161530(0);
  }
  iVar3 = puVar2[4];
  if ((int)puVar2[4] < (int)puVar2[3]) {
    do {
      iVar4 = iVar3 + 1;
      *(undefined4 *)(puVar2[5] + iVar3 * 4) = 0;
      iVar3 = iVar4;
    } while (iVar4 < (int)puVar2[3]);
  }
  puVar2[-0xc] = 0;
  puVar2[-8] = 0;
  puVar2[-4] = 0;
  return puVar2 + -0x14;
}



// Address: 4a0c858c

void FUN_4a0c858c(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined1 auStack_34 [8];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  *param_1 = (int)PTR_PTR_4a0c88f4;
  FUN_4a0c7338(s__Runtime_4a0c88f8);
  iVar1 = param_1[0x18];
  while (0 < iVar1) {
    if (param_1[0x18] < 1) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = *(int **)(param_1[0x19] + (param_1[0x18] + -1) * 4);
    }
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
      (**(code **)(*piVar5 + 0x1c))(piVar5,1);
      (**(code **)(*param_1 + 0x20))(param_1,piVar5);
      iVar1 = (**(code **)(*piVar5 + 8))(piVar5);
      if (iVar1 != 0) {
        (**(code **)(*piVar5 + 4))(piVar5);
      }
    }
    iVar1 = param_1[0x18];
  }
  puVar2 = (undefined4 *)FUN_4a0c6bc0(auStack_34);
  *puVar2 = PTR_PTR_4a0c8904;
  puVar2[2] = 10;
  puVar2[4] = 0;
  puVar2[3] = 10;
  puVar2[5] = 0;
  iVar1 = thunk_FUN_4a161570(0x28);
  puVar2[5] = iVar1;
  if (iVar1 != 0) {
    iVar1 = 0;
    if (0 < (int)puVar2[4]) {
      do {
        iVar4 = iVar1 + 1;
        *(undefined4 *)(puVar2[5] + iVar1 * 4) = *(undefined4 *)(iVar1 * 4);
        iVar1 = iVar4;
      } while (iVar4 < (int)puVar2[4]);
    }
    thunk_FUN_4a161530(0);
  }
  iVar1 = puVar2[4];
  if ((int)puVar2[4] < (int)puVar2[3]) {
    do {
      iVar4 = iVar1 + 1;
      *(undefined4 *)(puVar2[5] + iVar1 * 4) = 0;
      iVar1 = iVar4;
    } while (iVar4 < (int)puVar2[3]);
  }
  iVar1 = 0;
  if (0 < param_1[6]) {
    do {
      iVar4 = local_20;
      piVar5 = *(int **)(param_1[7] + iVar1 * 4);
      if ((local_24 == local_28) && (iVar3 = local_28 + local_2c, local_28 < iVar3)) {
        local_28 = iVar3;
        local_20 = thunk_FUN_4a161570(iVar3 * 4);
        iVar3 = local_24;
        if (local_20 != 0) {
          iVar3 = 0;
          if (0 < local_24) {
            do {
              *(undefined4 *)(local_20 + iVar3 * 4) = *(undefined4 *)(iVar4 + iVar3 * 4);
              iVar3 = iVar3 + 1;
            } while (iVar3 < local_24);
          }
          thunk_FUN_4a161530(iVar4);
          iVar3 = local_24;
        }
        for (; iVar3 < local_28; iVar3 = iVar3 + 1) {
          *(undefined4 *)(local_20 + iVar3 * 4) = 0;
        }
      }
      iVar4 = local_24;
      iVar3 = local_24 + 1;
      piVar6 = *(int **)(local_20 + local_24 * 4);
      local_24 = iVar3;
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0xc))();
      }
      *(int **)(local_20 + iVar4 * 4) = piVar5;
      if ((piVar6 != (int *)0x0) && (iVar4 = (**(code **)(*piVar6 + 8))(piVar6), iVar4 != 0)) {
        (**(code **)(*piVar6 + 4))(piVar6);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[6]);
  }
  iVar1 = 0;
  if (0 < param_1[6]) {
    do {
      piVar5 = *(int **)(param_1[7] + iVar1 * 4);
      *(undefined4 *)(param_1[7] + iVar1 * 4) = 0;
      if ((piVar5 != (int *)0x0) && (iVar4 = (**(code **)(*piVar5 + 8))(piVar5), iVar4 != 0)) {
        (**(code **)(*piVar5 + 4))(piVar5);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[6]);
  }
  param_1[6] = 0;
  iVar1 = 0;
  if (0 < local_24) {
    do {
      if (*(int *)(local_20 + iVar1 * 4) != 0) {
        FUN_4a0c96bc();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_24);
  }
  FUN_4a16dc80(auStack_34);
  iVar1 = FUN_4a16dc80(param_1 + 0x14);
  iVar1 = FUN_4a16dc80(iVar1 + -0x48);
  FUN_4a0c6bf4(iVar1 + -8);
  return;
}



// Address: 4a0c8928

undefined4 * FUN_4a0c8928(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = thunk_FUN_4a161570(8);
  puVar2 = (undefined4 *)FUN_4a0c2c78(uVar1,param_1);
  *puVar2 = PTR_PTR_4a0c8974;
  uVar1 = thunk_FUN_4a161570(0x14);
  uVar1 = FUN_4a0c707c(uVar1,s_my_name_4a0c8978);
  FUN_4a0c8a34(param_1,uVar1);
  return puVar2;
}



// Address: 4a0c8980

void FUN_4a0c8980(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_4a0c74dc(param_2);
  piVar2 = piVar1;
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)((int)piVar1 + *(int *)(*piVar1 + -0xc));
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))();
  }
  piVar2 = *(int **)(param_1 + 0x2c);
  *(int **)(param_1 + 0x2c) = piVar1;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)((int)piVar2 + *(int *)(*piVar2 + -0xc));
  }
  if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 8))(piVar2), iVar3 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x4a0c8a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x30))(param_2,param_1);
  return;
}



// Address: 4a0c8a34

void FUN_4a0c8a34(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  piVar2 = *(int **)(param_1 + 0x18);
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  *(int **)(param_1 + 0x18) = param_2;
  return;
}



// Address: 4a0c8aa0

void FUN_4a0c8aa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_4a0c8adc(param_1,0,param_2,param_3,param_4,param_5,param_6);
  return;
}



// Address: 4a0c8adc

int * FUN_4a0c8adc(undefined4 *param_1,int *param_2,int *param_3,int *param_4,int param_5,
                  int param_6,int param_7)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  puVar1 = PTR_PTR_4a0c8c34;
  if (param_2 == (int *)0x0) {
    *param_1 = *(undefined4 *)PTR_PTR_4a0c8c34;
    iVar2 = FUN_4a0c6bc0(param_1 + 0xc);
    param_1 = (undefined4 *)(iVar2 + -0x30);
    param_2 = (int *)puVar1;
  }
  piVar3 = (int *)FUN_4a0be1cc(param_1,param_2 + 1);
  iVar2 = *param_2;
  *piVar3 = iVar2;
  *(int *)((int)piVar3 + *(int *)(iVar2 + -0xc)) = param_2[3];
  piVar3[5] = 0;
  piVar3[6] = 0;
  piVar3[7] = 0;
  piVar3[8] = 0;
  piVar3[9] = param_7;
  piVar3[10] = 0;
  piVar3[0xb] = 0;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 0xc))(param_3);
  }
  piVar4 = (int *)piVar3[5];
  if ((piVar4 != (int *)0x0) && (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  piVar3[5] = (int)param_3;
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 0xc))(param_4);
  }
  piVar4 = (int *)piVar3[6];
  if ((piVar4 != (int *)0x0) && (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  piVar3[6] = (int)param_4;
  piVar3[7] = param_5;
  piVar3[8] = param_6;
  piVar3[9] = param_7;
  iVar2 = FUN_4a0c8928(piVar3);
  piVar3[10] = iVar2;
  return piVar3;
}



// Address: 4a0c8c64

int FUN_4a0c8c64(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 != 0) {
    param_3 = (int *)PTR_PTR_4a0c8da8;
  }
  iVar1 = *param_3;
  *param_1 = iVar1;
  *(int *)((int)param_1 + *(int *)(iVar1 + -0xc)) = param_3[3];
  if ((int *)param_1[10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[10] + 4))();
  }
  piVar2 = (int *)param_1[5];
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  param_1[5] = 0;
  piVar2 = (int *)param_1[6];
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  param_1[6] = 0;
  piVar2 = (int *)param_1[0xb];
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)((int)piVar2 + *(int *)(*piVar2 + -0xc));
  }
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  iVar1 = FUN_4a0be31c(param_1,param_3 + 1);
  if (param_2 != 0) {
    iVar1 = FUN_4a0c6bf4(iVar1 + 0x30);
    return iVar1 + -0x30;
  }
  return iVar1;
}



// Address: 4a0c8dac

void FUN_4a0c8dac(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0xb4))(param_1,param_2,param_2,param_2,0xff);
  return;
}



// Address: 4a0c8ddc

void FUN_4a0c8ddc(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  if ((param_2 != (int *)0x0) || (param_2 = (int *)FUN_4a0c48bc(), param_2 != (int *)0x0)) {
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  piVar2 = *(int **)(param_1 + 0x20);
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  *(int **)(param_1 + 0x20) = param_2;
  return;
}



// Address: 4a0c8e54

void FUN_4a0c8e54(int *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x4a0c8e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa4))
            (param_1,(param_2 & 0xffffff) >> 0x10,(param_2 & 0xffff) >> 8,param_2 & 0xff);
  return;
}



// Address: 4a0c8e80

void FUN_4a0c8e80(int *param_1)

{
  (**(code **)(*param_1 + 0xb4))();
  return;
}



// Address: 4a0c8eac

void FUN_4a0c8eac(int param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  *(uint *)(param_1 + 8) = param_2 & 0xff;
  *(uint *)(param_1 + 0xc) = param_3 & 0xff;
  *(uint *)(param_1 + 0x10) = param_4 & 0xff;
  *(uint *)(param_1 + 0x14) = param_5 & 0xff;
  return;
}



// Address: 4a0c8ed4

void FUN_4a0c8ed4(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x18) = param_2 + *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_3;
  return;
}



// Address: 4a0c8ef0

undefined4 * FUN_4a0c8ef0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0c8f94;
  puVar1[2] = 0xff;
  puVar1[3] = 0xff;
  puVar1[4] = 0xff;
  puVar1[5] = 0xff;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  piVar2 = (int *)FUN_4a0c48bc();
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))(piVar2);
  }
  piVar4 = (int *)puVar1[8];
  if ((piVar4 != (int *)0x0) && (iVar3 = (**(code **)(*piVar4 + 8))(piVar4), iVar3 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  puVar1[8] = piVar2;
  return puVar1;
}



// Address: 4a0c9000

void FUN_4a0c9000(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = PTR_PTR_4a0c9058;
  piVar2 = (int *)param_1[8];
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a0c9150

int FUN_4a0c9150(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_4a164050(*(undefined4 *)(param_1 + 8));
  if (iVar1 < 1) {
    iVar1 = -1;
  }
  return iVar1;
}



// Address: 4a0c916c

int FUN_4a0c916c(int *param_1)

{
  int iVar1;
  int local_8 [2];
  
  local_8[0] = 0;
  iVar1 = (**(code **)(*param_1 + 0x30))(param_1,local_8,1);
  if (iVar1 != -1) {
    iVar1 = local_8[0];
  }
  return iVar1;
}



// Address: 4a0c91e8

void FUN_4a0c91e8(undefined4 *param_1)

{
  *param_1 = PTR_PTR_4a0c920c;
  FUN_4a1631f4(param_1[2]);
  *param_1 = PTR_PTR_4a0be968;
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a0c9210

undefined4 FUN_4a0c9210(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_15c [256];
  undefined1 auStack_5c [12];
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  
  FUN_4a00121c(auStack_5c,0x50);
  FUN_4a163284(param_1[2],auStack_5c,auStack_15c,0x100,0,0,0,0);
  uVar1 = thunk_FUN_4a161570(0x14);
  uVar1 = FUN_4a0c707c(uVar1,auStack_15c);
  uVar2 = thunk_FUN_4a161570(0x1c);
  uVar1 = FUN_4a0fad7c(uVar2,uVar1);
  FUN_4a0fad5c(uVar1,local_48);
  FUN_4a0fad6c(uVar1,local_40);
  FUN_4a0fad54(uVar1,local_44);
  FUN_4a0fad74(uVar1,local_50);
  param_1[4] = param_1[4] + 1;
  iVar3 = (**(code **)(*param_1 + 0x1c))(param_1);
  if (iVar3 != 0) {
    FUN_4a163354(param_1[2]);
  }
  return uVar1;
}



// Address: 4a0c92e0

bool FUN_4a0c92e0(int param_1)

{
  return *(int *)(param_1 + 0x10) < *(int *)(param_1 + 0xc);
}



// Address: 4a0c92f8

void FUN_4a0c92f8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_4a0c6bf4();
    iVar2 = FUN_4a057044();
    FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
    return;
  }
  return;
}



// Address: 4a0c96bc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0c96bc(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  
  piVar3 = *(int **)(param_1 + 8);
  piVar1 = piVar3;
  if (piVar3 != (int *)0x0) {
    piVar1 = (int *)(*(int *)(*piVar3 + -0xc) + (int)piVar3);
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))();
  }
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)((int)piVar1 + *(int *)(*piVar1 + -0xc));
  }
  if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 8))(piVar1), iVar2 != 0)) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (piVar3 == (int *)0x0) {
    return;
  }
  FUN_4a0ca3c0(piVar3);
  piVar3 = (int *)((int)piVar3 + *(int *)(*piVar3 + -0xc));
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4a0c9768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  iVar2 = (**(code **)(*piVar3 + 8))(piVar3);
  if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0c979c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar3 + 4))(piVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a0c9788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



// Address: 4a0c97bc

void FUN_4a0c97bc(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_38 [8];
  undefined4 local_30;
  int *local_2c;
  
  iVar1 = (int)param_2 >> 5;
  iVar6 = 0;
  if (*(int *)(param_1 + 0x10) <= iVar1) {
    iVar5 = iVar1 + 1;
    FUN_4a16be24(auStack_38,iVar5);
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar5 <= iVar3) {
      iVar3 = iVar5;
    }
    FUN_4a0c740c(param_1 + 8,0,auStack_38,0,iVar3);
    if (local_2c != (int *)0x0) {
      (**(code **)(*local_2c + 0xc))(local_2c);
    }
    (**(code **)(*(int *)(param_1 + 8) + 0x1c))((int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x10) = local_30;
    *(int **)(param_1 + 0x14) = local_2c;
    FUN_4a16bef4(auStack_38);
  }
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iVar3 + 8);
  }
  uVar4 = *(uint *)(iVar5 + iVar1 * 4);
  uVar2 = 1 << (param_2 & 0x1f);
  if (param_3 == 0) {
    uVar4 = uVar4 & ~uVar2;
  }
  else {
    uVar4 = uVar4 | uVar2;
  }
  if (iVar3 != 0) {
    iVar6 = *(int *)(iVar3 + 8);
  }
  *(uint *)(iVar6 + iVar1 * 4) = uVar4;
  return;
}



// Address: 4a0c98ac

int FUN_4a0c98ac(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0c98d0;
  iVar2 = FUN_4a16be24(puVar1 + 2,1);
  return iVar2 + -8;
}



// Address: 4a0c9920

uint FUN_4a0c9920(int param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint extraout_r1;
  uint uVar4;
  
  uVar2 = DAT_4a0c99e4;
  if ((param_2 & ~-param_2) == 0) {
    lVar1 = (ulonglong)DAT_4a0c99e4 * (ulonglong)*(uint *)(param_1 + 8);
    uVar2 = (uint)lVar1;
    iVar3 = uVar2 + 0xb;
    uVar2 = *(uint *)(param_1 + 8) * 5 +
            DAT_4a0c99e4 * *(int *)(param_1 + 0xc) + (int)((ulonglong)lVar1 >> 0x20) +
            (uint)(0xfffffff4 < uVar2) & 0xffff;
    *(int *)(param_1 + 8) = iVar3;
    *(uint *)(param_1 + 0xc) = uVar2;
    iVar3 = FUN_4a000888(iVar3,uVar2,0x11);
    return (uint)((longlong)iVar3 * (longlong)(int)param_2) >> 0x1f |
           (int)((ulonglong)((longlong)iVar3 * (longlong)(int)param_2) >> 0x20) << 1;
  }
  do {
    lVar1 = (ulonglong)uVar2 * (ulonglong)*(uint *)(param_1 + 8);
    uVar4 = (uint)lVar1;
    iVar3 = uVar4 + 0xb;
    uVar4 = *(uint *)(param_1 + 8) * 5 +
            *(int *)(param_1 + 0xc) * uVar2 + (int)((ulonglong)lVar1 >> 0x20) +
            (uint)(0xfffffff4 < uVar4) & 0xffff;
    *(int *)(param_1 + 8) = iVar3;
    *(uint *)(param_1 + 0xc) = uVar4;
    iVar3 = FUN_4a000888(iVar3,uVar4,0x11);
    FUN_4a0015f0(iVar3,param_2);
  } while ((int)((iVar3 - extraout_r1) + param_2 + -1) < 0);
  return extraout_r1;
}



// Address: 4a0c99e8

undefined4 * FUN_4a0c99e8(void)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0c9a3c;
  puVar1[2] = 0;
  puVar1[3] = 0;
  uVar2 = host_s3eTimerGetMs_arm();
  puVar1[3] = (uint)((uVar2 ^ 0x5deece66d) >> 0x20) & 0xffff;
  puVar1[2] = (int)(uVar2 ^ 0x5deece66d);
  return puVar1;
}



// Address: 4a0c9ab0

void FUN_4a0c9ab0(undefined4 *param_1)

{
  *param_1 = PTR_PTR_4a0c9ad8;
  FUN_4a16d53c();
  thunk_FUN_4a161530(param_1[5]);
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a0c9adc

void FUN_4a0c9adc(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_108 [256];
  
  iVar1 = FUN_4a0fad64(param_2);
  FUN_4a03ed24(*(undefined4 *)(iVar1 + 8),auStack_108,0x100,0);
  FUN_4a163418(*(undefined4 *)(param_1 + 0xc),auStack_108,0);
  FUN_4a163a44(*(undefined4 *)(param_1 + 0xc));
  thunk_FUN_4a161570(0xc);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  puVar2 = (undefined4 *)FUN_4a0be91c();
  *puVar2 = PTR_PTR_4a0c9b44;
  puVar2[2] = uVar3;
  return;
}



// Address: 4a0c9b48

/* WARNING: Removing unreachable block (ram,0x4a0c945c) */
/* WARNING: Removing unreachable block (ram,0x4a0c9478) */

int * FUN_4a0c9b48(int param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int local_44;
  undefined4 local_40;
  int *local_3c;
  undefined1 auStack_38 [24];
  
  thunk_FUN_4a161570(0x20);
  iVar7 = *(int *)(param_1 + 0xc);
  puVar2 = (undefined4 *)FUN_4a0c6bc0();
  *puVar2 = PTR_PTR_4a0c9660;
  piVar3 = (int *)FUN_4a0c6bc0(puVar2 + 2);
  puVar1 = PTR_PTR_4a0c9664;
  piVar3[2] = 0;
  *piVar3 = (int)puVar1;
  piVar3[3] = 0;
  piVar3[5] = 0;
  thunk_FUN_4a161570(0x14);
  piVar4 = (int *)FUN_4a0c6bc0();
  *piVar4 = (int)PTR_PTR_4a0c9668;
  piVar4[3] = -1;
  piVar4[4] = 0;
  piVar4[2] = iVar7;
  local_44 = 0;
  local_40 = 0;
  FUN_4a1632cc(piVar4[2],&local_44);
  piVar4[3] = local_44;
  FUN_4a1632ec(piVar4[2]);
  local_3c = piVar4;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))(piVar4);
  }
  iVar7 = piVar4[3];
  piVar5 = (int *)FUN_4a0c6bc0(auStack_38);
  piVar5[2] = 0;
  piVar5[3] = 0;
  *piVar5 = (int)puVar1;
  if (0 < iVar7) {
    iVar6 = FUN_4a15e080(iVar7 << 2);
    if (iVar6 == 0) {
      iVar6 = FUN_4a1669a8();
    }
    iVar8 = 0;
    do {
      *(undefined4 *)(iVar6 + iVar8 * 4) = 0;
      local_40 = 0;
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar7);
    thunk_FUN_4a161570(0x18);
    puVar2 = (undefined4 *)FUN_4a0c0628();
    puVar2[3] = 4;
    puVar2[4] = iVar7;
    puVar1 = PTR_PTR_4a0c966c;
    *puVar2 = PTR_PTR_4a0c966c;
    puVar2[2] = iVar6;
    *(undefined1 *)(puVar2 + 5) = 1;
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)(puVar1 + 0xc))(puVar2);
    }
    (**(code **)(*piVar5 + 0x1c))(piVar5);
    piVar5[3] = (int)puVar2;
    piVar5[2] = iVar7;
  }
  iVar7 = piVar5[2];
  piVar5 = (int *)piVar5[3];
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))(piVar5);
  }
  (**(code **)(*piVar3 + 0x1c))(piVar3);
  piVar3[2] = iVar7;
  piVar3[3] = (int)piVar5;
  FUN_4a169190(auStack_38);
  iVar7 = 0;
  iVar6 = (**(code **)(*piVar4 + 0x1c))(piVar4);
  while (iVar6 != 0) {
    if (piVar3[3] == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(piVar3[3] + 8);
    }
    piVar9 = (int *)(iVar6 + iVar7 * 4);
    iVar7 = iVar7 + 1;
    piVar5 = (int *)(**(code **)(*piVar4 + 0x20))(piVar4);
    if ((int *)*piVar9 != piVar5) {
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0xc))(piVar5);
      }
      piVar10 = (int *)*piVar9;
      if ((piVar10 != (int *)0x0) && (iVar6 = (**(code **)(*piVar10 + 8))(piVar10), iVar6 != 0)) {
        (**(code **)(*piVar10 + 4))(piVar10);
      }
      *piVar9 = (int)piVar5;
    }
    iVar6 = (**(code **)(*piVar4 + 0x1c))(piVar4);
  }
  if ((piVar4 != (int *)0x0) && (iVar7 = (**(code **)(*piVar4 + 8))(piVar4), iVar7 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  return piVar3 + -2;
}



// Address: 4a0c9b64

undefined4 * FUN_4a0c9b64(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_10c [256];
  
  puVar1 = (undefined4 *)FUN_4a0c6bc0();
  *puVar1 = PTR_PTR_4a0c9bd4;
  puVar1[2] = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))();
  }
  puVar1[3] = 0;
  FUN_4a03ed24(param_2[2],auStack_10c,0x100,0);
  uVar2 = FUN_4a1636a4(auStack_10c);
  puVar1[3] = uVar2;
  return puVar1;
}



// Address: 4a0c9c58

void FUN_4a0c9c58(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = PTR_PTR_4a0c9ccc;
  if (param_1[3] != 0) {
    FUN_4a163158();
    param_1[3] = 0;
  }
  piVar2 = (int *)param_1[2];
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  *param_1 = PTR_PTR_4a0c0674;
  param_1[1] = 0xffffffff;
  return;
}



// Address: 4a0ca3c0

undefined4 FUN_4a0ca3c0(int param_1)

{
  if ((*(char *)(param_1 + 0x12) == '\0') &&
     ((*(undefined1 *)(param_1 + 0x12) = 1, *(char *)(param_1 + 0x10) != '\0' ||
      (*(char *)(param_1 + 0x11) == '\0')))) {
    return 1;
  }
  return 0;
}



// Address: 4a0ca3fc

void FUN_4a0ca3fc(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_38 [8];
  undefined4 local_30;
  int *local_2c;
  
  puVar1 = PTR_DAT_4a0ca568;
  uVar6 = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  do {
    iVar2 = *(int *)(param_1 + 0x88);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x30);
    }
    iVar2 = FUN_4a0b74b0(iVar2,*(undefined4 *)(puVar1 + uVar6 * 4));
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_4a16588c();
    }
    if (iVar2 != 0) {
      FUN_4a0b4608(iVar2,0);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 4);
  iVar2 = *(int *)(param_1 + 0x88);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x30);
  }
  uVar9 = FUN_4a0b74b0(iVar2,param_2);
  if ((int)uVar9 == 0) {
    uVar9 = uVar9 & 0xffffffff00000000;
  }
  else {
    uVar9 = FUN_4a16588c();
  }
  uVar5 = (undefined4)(uVar9 >> 0x20);
  iVar2 = (int)uVar9;
  if (iVar2 != 0) {
    uVar5 = 1;
  }
  *(int *)(param_1 + 0x88) = iVar2;
  if (iVar2 != 0) {
    FUN_4a0b4608(iVar2,uVar5);
  }
  iVar7 = 0x41a;
  iVar8 = 0;
  iVar2 = iVar7;
  do {
    iVar3 = FUN_4a13eaec(param_1,iVar2);
    if (iVar3 != 0) {
      iVar8 = iVar8 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x424);
  iVar2 = FUN_4a16acfc(auStack_38,iVar8);
  iVar8 = 0;
  do {
    iVar3 = FUN_4a13eaec(param_1,iVar7);
    if (iVar3 != 0) {
      if (*(int *)(iVar2 + 0xc) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(iVar2 + 0xc) + 8);
      }
      *(int *)(iVar4 + iVar8 * 4) = iVar3;
      iVar8 = iVar8 + 1;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x424);
  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 0xc))(local_2c);
  }
  (**(code **)(*(int *)(param_1 + 0x60) + 0x1c))((int *)(param_1 + 0x60));
  *(undefined4 *)(param_1 + 0x68) = local_30;
  *(int **)(param_1 + 0x6c) = local_2c;
  FUN_4a16adcc(auStack_38);
  return;
}



// Address: 4a0ca56c

undefined * FUN_4a0ca56c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  FUN_4a0cb1ec();
  FUN_4a0fb644();
  uVar1 = FUN_4a077b38();
  piVar2 = (int *)FUN_4a077b48(uVar1,param_2,param_3,param_4);
  FUN_4a0b4c10(*(undefined4 *)(param_1 + 0x30),piVar2);
  FUN_4a06f8f0(*(undefined4 *)(param_1 + 0x34),piVar2);
  FUN_4a07b848(uVar1,param_2,param_3,param_4);
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  FUN_4a0ca62c(param_1);
  if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 8))(piVar2), iVar3 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  *(undefined4 *)(param_1 + 0x28) = 2;
  return PTR_s_assembleSim_4a0ca628;
}



// Address: 4a0ca62c

void FUN_4a0ca62c(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 auStack_38 [8];
  undefined4 local_30;
  int *local_2c;
  
  iVar2 = FUN_4a16acfc(auStack_38,0xc);
  uVar8 = *(undefined4 *)(iVar2 + 8);
  piVar6 = *(int **)(iVar2 + 0xc);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))(piVar6);
  }
  (**(code **)(*(int *)(param_1 + 0x4c) + 0x1c))((int *)(param_1 + 0x4c));
  *(undefined4 *)(param_1 + 0x54) = uVar8;
  *(int **)(param_1 + 0x58) = piVar6;
  FUN_4a16adcc(auStack_38);
  puVar1 = PTR_DAT_4a0ca894;
  iVar2 = 0;
  iVar7 = 1;
  do {
    iVar3 = *(int *)(param_1 + 0x88);
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x30);
    }
    iVar3 = FUN_4a0b74b0(iVar3,*(undefined4 *)(puVar1 + iVar2 * 4));
    if (iVar3 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_4a16588c();
    }
    iVar7 = iVar7 + 1;
    if (*(int *)(param_1 + 0x58) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(param_1 + 0x58) + 8);
    }
    *(undefined4 *)(iVar3 + iVar2 * 4) = uVar8;
    iVar2 = iVar2 + 1;
  } while (iVar7 < 0xd);
  iVar7 = 0x41a;
  iVar3 = 0;
  iVar2 = iVar7;
  do {
    iVar4 = FUN_4a13eaec(param_1,iVar2);
    if (iVar4 != 0) {
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x424);
  iVar2 = FUN_4a16acfc(auStack_38,iVar3);
  iVar3 = 0;
  do {
    iVar4 = FUN_4a13eaec(param_1,iVar7);
    piVar6 = local_2c;
    uVar8 = local_30;
    if (iVar4 != 0) {
      if (*(int *)(iVar2 + 0xc) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(iVar2 + 0xc) + 8);
      }
      *(int *)(iVar5 + iVar3 * 4) = iVar4;
      iVar3 = iVar3 + 1;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x424);
  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 0xc))(local_2c);
  }
  (**(code **)(*(int *)(param_1 + 0x60) + 0x1c))((int *)(param_1 + 0x60));
  *(undefined4 *)(param_1 + 0x68) = uVar8;
  *(int **)(param_1 + 0x6c) = piVar6;
  FUN_4a16adcc(auStack_38);
  iVar7 = 0x424;
  iVar3 = 0;
  iVar2 = iVar7;
  do {
    iVar4 = FUN_4a13eaec(param_1,iVar2);
    if (iVar4 != 0) {
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x42e);
  iVar2 = FUN_4a16acfc(auStack_38,iVar3);
  iVar3 = 0;
  do {
    iVar4 = FUN_4a13eaec(param_1,iVar7);
    if (iVar4 != 0) {
      if (*(int *)(iVar2 + 0xc) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(iVar2 + 0xc) + 8);
      }
      *(int *)(iVar5 + iVar3 * 4) = iVar4;
      iVar3 = iVar3 + 1;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x42e);
  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 0xc))(local_2c);
  }
  (**(code **)(*(int *)(param_1 + 0x74) + 0x1c))((int *)(param_1 + 0x74));
  *(undefined4 *)(param_1 + 0x7c) = local_30;
  *(int **)(param_1 + 0x80) = local_2c;
  FUN_4a16adcc(auStack_38);
  return;
}



// Address: 4a0ca898

void FUN_4a0ca898(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  
  FUN_4a0cb1ec();
  uVar2 = FUN_4a077b38();
  piVar3 = (int *)FUN_4a082464(uVar2,param_2,0);
  piVar6 = (int *)(param_1 + 0x48);
  piVar4 = (int *)FUN_4a07c504(uVar2,piVar3);
  if ((int *)*piVar6 != piVar4) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))(piVar4);
    }
    piVar8 = (int *)*piVar6;
    if ((piVar8 != (int *)0x0) && (iVar5 = (**(code **)(*piVar8 + 8))(piVar8), iVar5 != 0)) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    *piVar6 = (int)piVar4;
  }
  FUN_4a077aa8(piVar3);
  FUN_4a0b4c10(*(undefined4 *)(param_1 + 0x30),piVar3);
  FUN_4a06f8f0(*(undefined4 *)(param_1 + 0x34),piVar3);
  FUN_4a0ca62c(param_1);
  puVar1 = PTR_DAT_4a0ca9dc;
  uVar7 = 0;
  do {
    iVar5 = FUN_4a13eaec(param_1,*(undefined4 *)(puVar1 + uVar7 * 4));
    if (iVar5 != 0) {
      FUN_4a0b4608(iVar5,0);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  if ((piVar3 != (int *)0x0) && (iVar5 = (**(code **)(*piVar3 + 8))(piVar3), iVar5 != 0)) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}



// Address: 4a0ca9e0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0ca9e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(int *)(param_1 + 0x38) == param_2) {
    return;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_4a077998();
    piVar5 = *(int **)(param_1 + 0x3c);
    if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 8))(piVar5), iVar2 != 0)) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
    FUN_4a06f8f0(*(undefined4 *)(param_1 + 0x40),0);
  }
  *(int *)(param_1 + 0x38) = param_2;
  if (param_2 != -1) {
    uVar3 = FUN_4a077b38();
    uVar3 = FUN_4a082464(uVar3,param_2,1);
    *(undefined4 *)(param_1 + 0x3c) = uVar3;
    FUN_4a0b4c10(*(undefined4 *)(param_1 + 0x30),uVar3);
    piVar5 = *(int **)(param_1 + 0x3c);
    iVar2 = *(int *)(param_1 + 0x40);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
    }
    piVar4 = *(int **)(iVar2 + 0x28);
    if ((piVar4 != (int *)0x0) && (iVar1 = (**(code **)(*piVar4 + 8))(piVar4), iVar1 != 0)) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *(int **)(iVar2 + 0x28) = piVar5;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a0caa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a0caa9c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0caa9c(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,uint param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  undefined4 *puVar11;
  
  param_2 = *(int *)(param_1 + 0x44) + param_2;
  *(int *)(param_1 + 0x44) = param_2;
  if (10000 < param_2) {
    *(int *)(param_1 + 0x44) = param_2 + -10000;
  }
  uVar3 = FUN_4a13eaec(param_1,0x2bf,10000,param_4,param_4);
  FUN_4a0af278(uVar3,param_4,param_5,param_6);
  uVar3 = FUN_4a13eaec(param_1,0x2c1);
  puVar2 = PTR_DAT_4a0cac34;
  puVar1 = PTR_DAT_4a0cac30;
  uVar5 = *(undefined4 *)(PTR_DAT_4a0cac30 + 4);
  uVar6 = *(undefined4 *)(PTR_DAT_4a0cac30 + 8);
  uVar7 = *(undefined4 *)(PTR_DAT_4a0cac30 + 0xc);
  uVar8 = *(undefined4 *)(PTR_DAT_4a0cac30 + 0x10);
  uVar9 = *(undefined4 *)(PTR_DAT_4a0cac30 + 0x14);
  puVar11 = (undefined4 *)(PTR_DAT_4a0cac30 + 0x18);
  *(undefined4 *)PTR_DAT_4a0cac34 = *(undefined4 *)PTR_DAT_4a0cac30;
  *(undefined4 *)(puVar2 + 4) = uVar5;
  *(undefined4 *)(puVar2 + 8) = uVar6;
  *(undefined4 *)(puVar2 + 0xc) = uVar7;
  *(undefined4 *)(puVar2 + 0x10) = uVar8;
  *(undefined4 *)(puVar2 + 0x14) = uVar9;
  uVar5 = *(undefined4 *)(puVar1 + 0x1c);
  uVar6 = *(undefined4 *)(puVar1 + 0x20);
  uVar7 = *(undefined4 *)(puVar1 + 0x24);
  uVar8 = *(undefined4 *)(puVar1 + 0x28);
  uVar9 = *(undefined4 *)(puVar1 + 0x2c);
  *(undefined4 *)(puVar2 + 0x18) = *puVar11;
  *(undefined4 *)(puVar2 + 0x1c) = uVar5;
  *(undefined4 *)(puVar2 + 0x20) = uVar6;
  *(undefined4 *)(puVar2 + 0x24) = uVar7;
  *(undefined4 *)(puVar2 + 0x28) = uVar8;
  *(undefined4 *)(puVar2 + 0x2c) = uVar9;
  uVar5 = *(undefined4 *)(puVar1 + 0x34);
  uVar6 = *(undefined4 *)(puVar1 + 0x38);
  uVar7 = *(undefined4 *)(puVar1 + 0x3c);
  *(undefined4 *)(puVar2 + 0x30) = *(undefined4 *)(puVar1 + 0x30);
  *(undefined4 *)(puVar2 + 0x34) = uVar5;
  *(undefined4 *)(puVar2 + 0x38) = uVar6;
  *(undefined4 *)(puVar2 + 0x3c) = uVar7;
  uVar5 = FUN_4a1725c0(param_8,param_7);
  FUN_4a0b7cb0(PTR_DAT_4a0cac38,uVar5,0,0x3f800000,0);
  FUN_4a0b7cb0(PTR_DAT_4a0cac38,param_9 ^ 0x80000000,0x3f800000,0,0);
  FUN_4a0af058(uVar3,PTR_DAT_4a0cac38);
  FUN_4a13eaec(param_1,0x2c0);
  uVar6 = FUN_4a165858();
  uVar3 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x44));
  uVar7 = FUN_4a17211c(uVar3,0x43b40000);
  uVar3 = DAT_4a0cac3c;
  uVar7 = FUN_4a17211c(uVar7,DAT_4a0cac3c);
  uVar5 = FUN_4a171a94(uVar5,uVar7);
  FUN_4a0af110(uVar6,uVar5,0,0x3f800000,0);
  uVar10 = param_3 == 0;
  if ((bool)uVar10) {
    return;
  }
  uVar5 = FUN_4a13b4a0(uVar6,0);
  iVar4 = FUN_4a136540(uVar5,0);
  uVar5 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x44));
  uVar5 = FUN_4a17295c(uVar5,1);
  uVar3 = FUN_4a17211c(uVar5,uVar3);
  FUN_4a171da0(*(undefined4 *)(iVar4 + 0x28));
  if ((bool)uVar10) {
    FUN_4a171da0(*(undefined4 *)(iVar4 + 0x2c),0);
  }
  if ((bool)uVar10) {
    FUN_4a171da0(*(undefined4 *)(iVar4 + 0x30),0);
  }
  if (!(bool)uVar10) {
    *(undefined4 *)(iVar4 + 0x28) = uVar3;
    *(undefined4 *)(iVar4 + 0x2c) = 0;
    *(undefined4 *)(iVar4 + 0x30) = 0;
    *(undefined1 *)(iVar4 + 200) = 0;
    return;
  }
  return;
}



// Address: 4a0cac40

void FUN_4a0cac40(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  FUN_4a0cb1ec(param_1);
  if (param_2[0x33] != 0) {
    FUN_4a0b4ac8(param_2[0x33],param_2);
  }
  FUN_4a0b4c10(*(undefined4 *)(param_1 + 0x30),param_2);
  FUN_4a06f8f0(*(undefined4 *)(param_1 + 0x34),param_2);
  FUN_4a0af058(param_2,0);
  FUN_4a0af1d4(param_2,0,0);
  FUN_4a0af110(param_2,0,0x3f800000,0,0);
  FUN_4a0ca62c(param_1);
  if ((param_2 != (int *)0x0) && (iVar1 = (**(code **)(*param_2 + 8))(param_2), iVar1 != 0)) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  *(undefined4 *)(param_1 + 0x28) = 1;
  return;
}



// Address: 4a0cad1c

char * FUN_4a0cad1c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_4a0fb644();
  uVar1 = FUN_4a077b38();
  FUN_4a0cb1ec(param_2);
  FUN_4a0ca56c(param_1,0,1,0,param_4);
  uVar2 = FUN_4a0b75a8(**(undefined4 **)(*(int *)(*(int *)(param_1 + 0x30) + 0xdc) + 0x14));
  FUN_4a0b4c10(*(undefined4 *)(param_2 + 0x30),uVar2);
  FUN_4a06f8f0(*(undefined4 *)(param_2 + 0x34),uVar2);
  FUN_4a0813ec(uVar1,uVar2,0,10,0);
  FUN_4a0813ec(uVar1,uVar2,2,0xc,0);
  FUN_4a0813ec(uVar1,uVar2,3,0xd,0);
  FUN_4a0813ec(uVar1,uVar2,4,0xe,0);
  FUN_4a0813ec(uVar1,uVar2,5,0xf,0);
  FUN_4a0813ec(uVar1,uVar2,6,0x10,0);
  FUN_4a0813ec(uVar1,uVar2,7,0x11,0);
  FUN_4a0813ec(uVar1,uVar2,8,0x12,0);
  FUN_4a07e9fc(uVar1,uVar2,0x19,0x1a);
  FUN_4a077aa8(*(undefined4 *)(param_2 + 0x30));
  *(undefined4 *)(param_2 + 0x28) = 4;
  FUN_4a077aa8(*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x28) = 3;
  return s_assembleSimForCAS_4a0caea0;
}



// Address: 4a0caeb4

char * FUN_4a0caeb4(int param_1,undefined4 param_2)

{
  FUN_4a0fb644();
  FUN_4a0ca56c(param_1,param_2,0);
  FUN_4a077aa8(*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x28) = 2;
  return s_assembleSimForGame_4a0caef4;
}



// Address: 4a0caf08

void FUN_4a0caf08(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  int *piStack_2c;
  
  FUN_4a0cb1ec();
  uVar5 = FUN_4a077b38();
  if (param_2 == 0) {
    uVar9 = 0x38;
  }
  else {
    uVar9 = 0x37;
  }
  piVar6 = (int *)FUN_4a082464(uVar5,uVar9,1);
  FUN_4a0b4c10(*(undefined4 *)(param_1 + 0x30),piVar6);
  piVar6[3] = 0x455;
  if ((piVar6 != (int *)0x0) && (iVar7 = (**(code **)(*piVar6 + 8))(piVar6), iVar7 != 0)) {
    (**(code **)(*piVar6 + 4))(piVar6);
  }
  iVar7 = FUN_4a0ff494();
  piVar6 = (int *)FUN_4a0d727c(*(undefined4 *)(iVar7 + 0x51c),param_2);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))();
  }
  piVar8 = (int *)FUN_4a0822d8(uVar5,piVar6,1);
  FUN_4a0b4c10(*(undefined4 *)(param_1 + 0x30),piVar8);
  FUN_4a0b4608(piVar8,0);
  piVar8[3] = 0x456;
  if ((piVar8 != (int *)0x0) && (iVar7 = (**(code **)(*piVar8 + 8))(piVar8), iVar7 != 0)) {
    (**(code **)(*piVar8 + 4))(piVar8);
  }
  if ((piVar6 != (int *)0x0) && (iVar7 = (**(code **)(*piVar6 + 8))(piVar6), iVar7 != 0)) {
    (**(code **)(*piVar6 + 4))(piVar6);
  }
  FUN_4a06f8f0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x30));
  iVar7 = FUN_4a16acfc(auStack_38,0xc);
  uVar5 = *(undefined4 *)(iVar7 + 8);
  piVar6 = *(int **)(iVar7 + 0xc);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))(piVar6);
  }
  (**(code **)(*(int *)(param_1 + 0x4c) + 0x1c))((int *)(param_1 + 0x4c));
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  *(int **)(param_1 + 0x58) = piVar6;
  FUN_4a16adcc(auStack_38);
  puVar1 = PTR_DAT_4a0ca894;
  iVar7 = 0;
  iVar10 = 1;
  do {
    iVar2 = *(int *)(param_1 + 0x88);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x30);
    }
    iVar2 = FUN_4a0b74b0(iVar2,*(undefined4 *)(puVar1 + iVar7 * 4));
    if (iVar2 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_4a16588c();
    }
    iVar10 = iVar10 + 1;
    if (*(int *)(param_1 + 0x58) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0x58) + 8);
    }
    *(undefined4 *)(iVar2 + iVar7 * 4) = uVar5;
    iVar7 = iVar7 + 1;
  } while (iVar10 < 0xd);
  iVar10 = 0x41a;
  iVar2 = 0;
  iVar7 = iVar10;
  do {
    iVar3 = FUN_4a13eaec(param_1,iVar7);
    if (iVar3 != 0) {
      iVar2 = iVar2 + 1;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x424);
  iVar7 = FUN_4a16acfc(auStack_38,iVar2);
  iVar2 = 0;
  do {
    iVar3 = FUN_4a13eaec(param_1,iVar10);
    piVar6 = piStack_2c;
    uVar5 = uStack_30;
    if (iVar3 != 0) {
      if (*(int *)(iVar7 + 0xc) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(iVar7 + 0xc) + 8);
      }
      *(int *)(iVar4 + iVar2 * 4) = iVar3;
      iVar2 = iVar2 + 1;
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0x424);
  if (piStack_2c != (int *)0x0) {
    (**(code **)(*piStack_2c + 0xc))(piStack_2c);
  }
  (**(code **)(*(int *)(param_1 + 0x60) + 0x1c))((int *)(param_1 + 0x60));
  *(undefined4 *)(param_1 + 0x68) = uVar5;
  *(int **)(param_1 + 0x6c) = piVar6;
  FUN_4a16adcc(auStack_38);
  iVar10 = 0x424;
  iVar2 = 0;
  iVar7 = iVar10;
  do {
    iVar3 = FUN_4a13eaec(param_1,iVar7);
    if (iVar3 != 0) {
      iVar2 = iVar2 + 1;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x42e);
  iVar7 = FUN_4a16acfc(auStack_38,iVar2);
  iVar2 = 0;
  do {
    iVar3 = FUN_4a13eaec(param_1,iVar10);
    if (iVar3 != 0) {
      if (*(int *)(iVar7 + 0xc) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(iVar7 + 0xc) + 8);
      }
      *(int *)(iVar4 + iVar2 * 4) = iVar3;
      iVar2 = iVar2 + 1;
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0x42e);
  if (piStack_2c != (int *)0x0) {
    (**(code **)(*piStack_2c + 0xc))(piStack_2c);
  }
  (**(code **)(*(int *)(param_1 + 0x74) + 0x1c))((int *)(param_1 + 0x74));
  *(undefined4 *)(param_1 + 0x7c) = uStack_30;
  *(int **)(param_1 + 0x80) = piStack_2c;
  FUN_4a16adcc(auStack_38);
  return;
}



// Address: 4a0cb070

void FUN_4a0cb070(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_54 [72];
  
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar1 = FUN_4a0ff494();
    uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x520) + 0x468);
    FUN_4a0b8a1c(auStack_54);
    FUN_4a13b6a8(*(int *)(param_1 + 0x30),*(undefined4 *)(*(int *)(param_1 + 0x30) + 0xcc),
                 auStack_54);
    FUN_4a0b88fc(auStack_54,0x3f000000,0x3f000000);
    FUN_4a0b7d00(auStack_54,uVar2);
    FUN_4a081444(*(undefined4 *)(param_1 + 0x48),auStack_54);
    FUN_4a0c6bf4(auStack_54);
    return;
  }
  return;
}



// Address: 4a0cb0f4

void FUN_4a0cb0f4(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = FUN_4a13eaec();
  if (iVar1 == 0) {
    return;
  }
  *(undefined1 *)(iVar1 + 0xd0) = param_3;
  return;
}



// Address: 4a0cb118

char * FUN_4a0cb118(int param_1,undefined4 param_2)

{
  FUN_4a0fb644();
  FUN_4a0ca56c(param_1,param_2,0,1);
  FUN_4a077aa8(*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x28) = 2;
  return s_assembleSimForGame_4a0cb158;
}



// Address: 4a0cb16c

void FUN_4a0cb16c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_4a13eaec(param_1,0x7d1);
  if (iVar1 != 0) {
    FUN_4a0b4608(iVar1,0);
  }
  iVar1 = FUN_4a13eaec(param_1,0x7d2);
  if (iVar1 != 0) {
    FUN_4a0b4608(iVar1,0);
  }
  iVar1 = FUN_4a13eaec(param_1,0x7d3);
  if (iVar1 != 0) {
    FUN_4a0b4608(iVar1,0);
  }
  iVar1 = FUN_4a13eaec(param_1,0x7d4);
  if (iVar1 == 0) {
    return;
  }
  *(undefined1 *)(iVar1 + 0xd0) = 0;
  return;
}



// Address: 4a0cb1ec

void FUN_4a0cb1ec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 auStack_2c [20];
  
  FUN_4a06f8f0(*(undefined4 *)(param_1 + 0x34),0);
  FUN_4a06f8f0(*(undefined4 *)(param_1 + 0x40),0);
  piVar3 = *(int **)(param_1 + 0x3c);
  if ((piVar3 != (int *)0x0) && (iVar1 = (**(code **)(*piVar3 + 8))(piVar3), iVar1 != 0)) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0xdc);
  if (iVar1 != 0) {
    for (iVar1 = *(int *)(iVar1 + 0x10); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {
      FUN_4a0b4ac8(*(int *)(param_1 + 0x30),
                   **(undefined4 **)(*(int *)(*(int *)(param_1 + 0x30) + 0xdc) + 0x14));
      iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0xdc);
      if (iVar1 == 0) break;
    }
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  if ((*(int *)(param_1 + 0x28) == 2) && (*(int *)(param_1 + 0x2c) != -1)) {
    uVar2 = FUN_4a077b38();
    FUN_4a07ce40(uVar2,*(undefined4 *)(param_1 + 0x2c));
  }
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  iVar1 = FUN_4a16acfc(auStack_2c,0);
  uVar2 = *(undefined4 *)(iVar1 + 8);
  piVar3 = *(int **)(iVar1 + 0xc);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
  }
  (**(code **)(*(int *)(param_1 + 0x4c) + 0x1c))((int *)(param_1 + 0x4c));
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  *(int **)(param_1 + 0x58) = piVar3;
  FUN_4a16adcc(auStack_2c);
  iVar1 = FUN_4a16acfc(auStack_2c,0);
  uVar2 = *(undefined4 *)(iVar1 + 8);
  piVar3 = *(int **)(iVar1 + 0xc);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
  }
  (**(code **)(*(int *)(param_1 + 0x60) + 0x1c))((int *)(param_1 + 0x60));
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(int **)(param_1 + 0x6c) = piVar3;
  FUN_4a16adcc(auStack_2c);
  iVar1 = FUN_4a16acfc(auStack_2c,0);
  uVar2 = *(undefined4 *)(iVar1 + 8);
  piVar3 = *(int **)(iVar1 + 0xc);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
  }
  (**(code **)(*(int *)(param_1 + 0x74) + 0x1c))((int *)(param_1 + 0x74));
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  *(int **)(param_1 + 0x80) = piVar3;
  FUN_4a16adcc(auStack_2c);
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



// Address: 4a0cb3ec

void FUN_4a0cb3ec(int param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_34 [20];
  
  iVar4 = *(int *)(param_1 + 0x30);
  if (iVar4 == 0) {
    return;
  }
  iVar1 = FUN_4a165910();
  if (iVar1 != 0) {
    iVar7 = 0;
    iVar9 = 0;
    if (*(int *)(iVar1 + 0xdc) != 0) {
      iVar9 = *(int *)(*(int *)(iVar1 + 0xdc) + 0x10);
    }
    if (0 < iVar9) {
      do {
        FUN_4a07a584(*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0xdc) + 0x14) + iVar7 * 4),param_2);
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar9);
    }
  }
  iVar1 = FUN_4a165858(iVar4);
  if (iVar1 == 0) {
    return;
  }
  iVar9 = FUN_4a13b4a0(iVar1,0);
  iVar7 = *(int *)PTR_DAT_4a07a784;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(auStack_34);
  *puVar2 = PTR_PTR_4a07a788;
  puVar2[2] = *(undefined4 *)(iVar7 + 0x28);
  piVar3 = *(int **)(iVar7 + 0x2c);
  puVar2[3] = piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
  }
  uVar8 = 0;
  *puVar2 = PTR_PTR_4a07a78c;
  uVar6 = puVar2[2];
  if ((int)uVar6 < 1) {
    uVar10 = 0;
  }
  else {
    uVar10 = uVar6 & 1;
  }
  if (uVar10 != 0) {
    do {
      if (puVar2[3] == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(puVar2[3] + 8);
      }
      if (*(int *)(iVar7 + uVar8 * 4) == iVar9) goto LAB_4a07a6fc;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)uVar10);
  }
  if ((int)uVar10 < (int)uVar6) {
    iVar7 = puVar2[3];
    do {
      if (iVar7 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(iVar7 + 8);
      }
      uVar8 = uVar10;
      if (*(int *)(iVar5 + uVar10 * 4) == iVar9) goto LAB_4a07a6fc;
      if (iVar7 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(iVar7 + 8);
      }
      if (*(int *)(iVar5 + (uVar10 + 1) * 4) == iVar9) {
        uVar8 = uVar10 + 1;
        goto LAB_4a07a6fc;
      }
      uVar10 = uVar10 + 2;
    } while ((int)uVar10 < (int)uVar6);
  }
  uVar8 = 0xffffffff;
LAB_4a07a6fc:
  FUN_4a16a898(auStack_34);
  if (((((((*(int *)(iVar9 + 0xc) != 0x6e && uVar8 != 0x29) && uVar8 != 0x30) && uVar8 != 0x31) &&
        uVar8 != 0x32) && uVar8 != 0x28) && uVar8 != 0x19) &&
     ((((((uVar8 != 4 && uVar8 != 8) && uVar8 != 7) && uVar8 != 0x1c) && uVar8 != 0xd) &&
      uVar8 != 0x13) && uVar8 != 0x2a)) {
    iVar1 = FUN_4a13b5e4(iVar1);
    FUN_4a0ade00(iVar1,*(uint *)(iVar1 + 0x2c) & 0xff000000 | param_2);
  }
  iVar4 = FUN_4a1657f4(iVar4);
  if (iVar4 != 0) {
    FUN_4a07a584(*(undefined4 *)(iVar4 + 0x114),param_2);
  }
  return;
}



// Address: 4a0cb3f4

undefined4 * FUN_4a0cb3f4(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar2 = (undefined4 *)FUN_4a0c6bc0();
  puVar1 = PTR_PTR_4a0cb510;
  *puVar2 = PTR_PTR_4a0cb510;
  puVar2[4] = puVar1 + 0x44;
  puVar2[6] = puVar1 + 100;
  puVar2[7] = puVar1 + 0x74;
  puVar2[8] = puVar1 + 0x84;
  puVar2[5] = puVar1 + 0x54;
  puVar2[3] = puVar1 + 0x34;
  puVar2[2] = puVar1 + 0x24;
  puVar2[9] = puVar1 + 0x94;
  puVar2[10] = 0;
  puVar2[0xb] = 0xffffffff;
  puVar2[0xc] = 0;
  puVar2[0xe] = 0xffffffff;
  puVar2[0xd] = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2 = (undefined4 *)FUN_4a0c6bc0(puVar2 + 0x13);
  puVar1 = PTR_PTR_4a0cb514;
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
  puVar2[5] = 0;
  thunk_FUN_4a161570(0xe0);
  piVar3 = (int *)FUN_4a0b4e14();
  puVar2[-0x11] = piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xc))();
  }
  iVar4 = FUN_4a0ff494();
  uVar5 = thunk_FUN_4a161570(0x2c);
  uVar5 = FUN_4a06fa68(uVar5,iVar4 + 0x1f8);
  puVar2[-0x10] = uVar5;
  uVar5 = thunk_FUN_4a161570(0x2c);
  uVar5 = FUN_4a06fa68(uVar5,iVar4 + 0x1f8);
  puVar2[-0xd] = uVar5;
  return puVar2 + -0x1d;
}



// Address: 4a0cb530

void FUN_4a0cb530(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  puVar1 = PTR_PTR_4a0cb66c;
  *param_1 = PTR_PTR_4a0cb66c;
  param_1[4] = puVar1 + 0x44;
  param_1[6] = puVar1 + 100;
  param_1[7] = puVar1 + 0x74;
  param_1[8] = puVar1 + 0x84;
  param_1[5] = puVar1 + 0x54;
  param_1[3] = puVar1 + 0x34;
  param_1[2] = puVar1 + 0x24;
  param_1[9] = puVar1 + 0x94;
  FUN_4a0cb1ec(param_1);
  piVar4 = (int *)param_1[0xc];
  if ((piVar4 != (int *)0x0) && (iVar2 = (**(code **)(*piVar4 + 8))(piVar4), iVar2 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  if ((int *)param_1[0xd] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xd] + 4))();
    param_1[0xd] = 0;
  }
  if ((int *)param_1[0x10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x10] + 4))();
    param_1[0x10] = 0;
  }
  iVar2 = FUN_4a16adcc(param_1 + 0x1d);
  iVar2 = FUN_4a16adcc(iVar2 + -0x14);
  iVar2 = FUN_4a16adcc(iVar2 + -0x14);
  piVar4 = *(int **)(iVar2 + -4);
  if ((piVar4 != (int *)0x0) && (iVar3 = (**(code **)(*piVar4 + 8))(piVar4), iVar3 != 0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  *(undefined **)(iVar2 + -0x4c) = PTR_PTR_4a0c0674;
  *(undefined4 *)(iVar2 + -0x48) = 0xffffffff;
  return;
}



// Address: 4a0cb670

void FUN_4a0cb670(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 auStack_30 [20];
  
  FUN_4a0fb3b0(auStack_30,*(undefined4 *)(param_1 + 0x20));
  FUN_4a0ced00(param_1,param_2,auStack_30,param_4,param_5,param_6,param_7);
  FUN_4a16c1a0(auStack_30);
  return;
}



// Address: 4a0cb6c4

undefined4 FUN_4a0cb6c4(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if (1 << (uVar2 & 0xff) == param_2) goto LAB_4a0cb718;
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 1);
  uVar2 = 1;
  do {
    if (1 << (uVar2 & 0xff) == param_2) goto LAB_4a0cb718;
    if (1 << (uVar2 + 1 & 0xff) == param_2) {
      uVar2 = uVar2 + 1;
      goto LAB_4a0cb718;
    }
    uVar2 = uVar2 + 2;
  } while ((int)uVar2 < 0x1d);
  uVar2 = 0xffffffff;
LAB_4a0cb718:
  iVar1 = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x68) + 8);
  }
  return *(undefined4 *)(iVar1 + uVar2 * 4);
}



// Address: 4a0cb72c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0cb72c(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar2 = *(int *)(param_1 + 0x50);
  if ((*(int *)(param_1 + 0x54) == iVar2) &&
     (iVar1 = *(int *)(param_1 + 0x4c) + iVar2, iVar2 < iVar1)) {
    *(int *)(param_1 + 0x50) = iVar1;
    iVar3 = *(int *)(param_1 + 0x58);
    iVar2 = thunk_FUN_4a161570(iVar1 * 4);
    *(int *)(param_1 + 0x58) = iVar2;
    if (iVar2 != 0) {
      iVar2 = 0;
      if (0 < *(int *)(param_1 + 0x54)) {
        do {
          iVar1 = iVar2 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x58) + iVar2 * 4) = *(undefined4 *)(iVar3 + iVar2 * 4)
          ;
          iVar2 = iVar1;
        } while (iVar1 < *(int *)(param_1 + 0x54));
      }
      thunk_FUN_4a161530(iVar3);
    }
    iVar2 = *(int *)(param_1 + 0x54);
    if (iVar2 < *(int *)(param_1 + 0x50)) {
      do {
        iVar1 = iVar2 + 1;
        *(undefined4 *)(*(int *)(param_1 + 0x58) + iVar2 * 4) = 0;
        iVar2 = iVar1;
      } while (iVar1 < *(int *)(param_1 + 0x50));
    }
  }
  iVar2 = *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x54) = iVar2 + 1;
  piVar4 = *(int **)(*(int *)(param_1 + 0x58) + iVar2 * 4);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 0xc))();
  }
  *(int **)(*(int *)(param_1 + 0x58) + iVar2 * 4) = param_2;
  if (piVar4 == (int *)0x0) {
    return;
  }
  iVar2 = (**(code **)(*piVar4 + 8))(piVar4);
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0cb838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a0cb84c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar4 + 4))(piVar4);
  return;
}



// Address: 4a0cb850

bool FUN_4a0cb850(int param_1,int param_2,uint param_3)

{
  uint *puVar1;
  
  if (param_1 == 0xb) {
    puVar1 = (uint *)0x0;
    if (*(int *)(param_2 + 0xc) != 0) {
      puVar1 = *(uint **)(*(int *)(param_2 + 0xc) + 8);
    }
    return (*puVar1 & param_3) != 0;
  }
  return false;
}



// Address: 4a0cb8a0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0cb8a0(int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_r6;
  int iVar7;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar8;
  undefined1 auStack_24 [4];
  
  piVar1 = (int *)param_1[0x10];
  if (piVar1 == (int *)0x0) {
    iVar7 = param_1[0x15];
    iVar6 = 0;
    while ((iVar6 < iVar7 && (param_1[0x10] == 0))) {
      piVar1 = *(int **)(param_1[0x16] + iVar6 * 4);
      iVar5 = FUN_4a134a50(piVar1,1);
      if (iVar5 != 0) {
        (**(code **)(*piVar1 + 0x1c))(piVar1,param_2,param_3);
      }
      iVar6 = iVar6 + 1;
    }
  }
  else {
    (**(code **)(*piVar1 + 0x1c))(piVar1,param_2,param_3);
  }
  if (2 < param_2) {
    return;
  }
  iVar6 = *(int *)(param_3 + 0xc);
  iVar7 = 0;
  if (iVar6 == 0) {
    puVar2 = (uint *)0x0;
    iVar5 = 0;
  }
  else {
    puVar2 = *(uint **)(iVar6 + 8);
    iVar5 = *(int *)(iVar6 + 8);
    iVar7 = *(int *)(iVar6 + 8);
  }
  uVar3 = *puVar2;
  iVar6 = *(int *)(iVar5 + 4);
  iVar7 = *(int *)(iVar7 + 8);
  switch(param_1[0x21]) {
  case 0:
    if (param_2 != 0) {
      return;
    }
    param_1[0x24] = uVar3;
    param_1[0x26] = iVar6;
    param_1[0x27] = iVar7;
    param_1[0x28] = iVar6;
    param_1[0x29] = iVar7;
    iVar6 = 1;
    goto code_r0x4a0ce310;
  case 1:
    if (param_2 != 0) {
      if (param_2 == 1) {
        if (param_1[0x24] != uVar3) {
          return;
        }
        param_1[0x28] = iVar6;
        param_1[0x29] = iVar7;
        iVar6 = FUN_4a0d4bc8(((param_1[0x27] - iVar7) * (param_1[0x27] - iVar7) +
                             (param_1[0x26] - iVar6) * (param_1[0x26] - iVar6)) * 0x10000);
        if (iVar6 >> 0x10 < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x4a0cddb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
        iVar6 = 3;
        param_1[0x26] = param_1[0x28];
        param_1[0x27] = param_1[0x29];
      }
      else {
        bVar8 = param_2 == 2;
        if (bVar8) {
          param_2 = param_1[0x24];
        }
        if (!bVar8 || param_2 != uVar3) {
          return;
        }
        if ((param_1[0x22] == 4) && (param_1[0x23] < 500)) {
          iVar6 = 5;
        }
        else {
          iVar6 = 2;
        }
      }
      goto code_r0x4a0ce310;
    }
    if (param_1[0x24] != uVar3) {
      param_1[0x25] = uVar3;
      param_1[0x2a] = iVar6;
      param_1[0x2b] = iVar7;
      param_1[0x2c] = iVar6;
      param_1[0x2d] = iVar7;
      iVar6 = 4;
      goto code_r0x4a0ce310;
    }
LAB_4a0cdd34:
    param_1[0x24] = -1;
    param_1[0x25] = -1;
    break;
  default:
    goto switchD_4a0cdccc_caseD_2;
  case 3:
    if (param_2 == 0) {
      if (param_1[0x24] != uVar3) {
        param_1[0x25] = uVar3;
        param_1[0x2a] = iVar6;
        param_1[0x2b] = iVar7;
        param_1[0x2c] = iVar6;
        param_1[0x2d] = iVar7;
        iVar6 = 6;
        goto code_r0x4a0ce310;
      }
      goto LAB_4a0cdd34;
    }
    if (param_2 == 1) {
      if (param_1[0x24] != uVar3) {
        return;
      }
      goto LAB_4a0cde70;
    }
    bVar8 = param_2 == 2;
    if (bVar8) {
      param_2 = param_1[0x24];
    }
    if (!bVar8 || param_2 != uVar3) {
      return;
    }
    break;
  case 4:
    if (param_2 == 0) {
      return;
    }
    if (param_2 == 1) {
      if (param_1[0x24] == uVar3) {
        param_1[0x28] = iVar6;
        param_1[0x29] = iVar7;
        iVar6 = FUN_4a0d4bc8(((param_1[0x27] - iVar7) * (param_1[0x27] - iVar7) +
                             (param_1[0x26] - iVar6) * (param_1[0x26] - iVar6)) * 0x10000);
        if (iVar6 >> 0x10 < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x4a0cdefc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
      }
      else {
        if (param_1[0x25] != uVar3) {
          return;
        }
        param_1[0x2c] = iVar6;
        param_1[0x2d] = iVar7;
        iVar6 = FUN_4a0d4bc8(((param_1[0x2b] - iVar7) * (param_1[0x2b] - iVar7) +
                             (param_1[0x2a] - iVar6) * (param_1[0x2a] - iVar6)) * 0x10000);
        if (iVar6 >> 0x10 < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x4a0cdf4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
      }
      iVar6 = 6;
      param_1[0x26] = param_1[0x28];
      param_1[0x27] = param_1[0x29];
      param_1[0x2a] = param_1[0x2c];
      param_1[0x2b] = param_1[0x2d];
    }
    else {
      if (param_2 != 2) {
        return;
      }
      if (param_1[0x24] == uVar3) {
        param_1[0x24] = param_1[0x25];
        iVar6 = param_1[0x2a];
        param_1[0x2a] = param_1[0x26];
        param_1[0x26] = iVar6;
        iVar6 = param_1[0x2b];
        param_1[0x2b] = param_1[0x27];
        param_1[0x27] = iVar6;
        iVar6 = param_1[0x2c];
        param_1[0x2c] = param_1[0x28];
        param_1[0x28] = iVar6;
        iVar6 = param_1[0x2d];
        param_1[0x2d] = param_1[0x29];
        param_1[0x29] = iVar6;
      }
      else if (param_1[0x25] != uVar3) {
        return;
      }
      param_1[0x25] = -1;
      iVar6 = 1;
    }
    goto code_r0x4a0ce310;
  case 6:
    if (param_2 == 0) {
      return;
    }
    if (param_2 != 1) {
      if (param_2 != 2) {
        return;
      }
      if (param_1[0x24] == uVar3) {
        param_1[0x24] = param_1[0x25];
        param_1[0x26] = param_1[0x2a];
        param_1[0x27] = param_1[0x2b];
        param_1[0x28] = param_1[0x2c];
        param_1[0x29] = param_1[0x2d];
      }
      else if (param_1[0x25] != uVar3) {
        return;
      }
      param_1[0x25] = -1;
      iVar6 = 3;
      goto code_r0x4a0ce310;
    }
    if (param_1[0x24] != uVar3) {
      if (param_1[0x25] == uVar3) {
        param_1[0x2c] = iVar6;
        param_1[0x2d] = iVar7;
      }
      return;
    }
LAB_4a0cde70:
    param_1[0x28] = iVar6;
    param_1[0x29] = iVar7;
switchD_4a0cdccc_caseD_2:
    return;
  }
  iVar6 = 0;
code_r0x4a0ce310:
  iVar7 = param_1[0x21];
  iVar5 = 0;
  param_1[0x22] = iVar7;
  param_1[0x23] = 0;
  param_1[0x21] = iVar6;
  if (iVar7 == 3) {
    FUN_4a16be24(auStack_24,10);
    iVar7 = 0;
    if (unaff_r6 != 0) {
      iVar7 = *(int *)(unaff_r6 + 8);
    }
    iVar4 = 0;
    if (unaff_r6 == 0) {
      iVar7 = 0;
    }
    *(int *)(iVar7 + 4) = param_1[0x28];
    if (unaff_r6 != 0) {
      iVar4 = *(int *)(unaff_r6 + 8);
    }
    *(int *)(iVar4 + 8) = param_1[0x29];
    (**(code **)(*param_1 + 0x20))(param_1,6,auStack_24);
    FUN_4a16bef4(auStack_24);
  }
  else if (iVar7 == 6) {
    FUN_4a16be24(auStack_24,10);
    iVar7 = 0;
    if (unaff_r6 != 0) {
      iVar7 = *(int *)(unaff_r6 + 8);
    }
    iVar4 = 0;
    if (unaff_r6 == 0) {
      iVar7 = 0;
    }
    *(int *)(iVar7 + 4) = param_1[0x28];
    if (unaff_r6 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(unaff_r6 + 8);
    }
    *(int *)(iVar7 + 8) = param_1[0x29];
    if (unaff_r6 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(unaff_r6 + 8);
    }
    *(int *)(iVar7 + 4) = param_1[0x2c];
    if (unaff_r6 != 0) {
      iVar4 = *(int *)(unaff_r6 + 8);
    }
    *(int *)(iVar4 + 8) = param_1[0x2d];
    (**(code **)(*param_1 + 0x20))(param_1,10,auStack_24);
    FUN_4a16bef4(auStack_24);
  }
  switch(iVar6) {
  case 2:
    FUN_4a16be24(auStack_24,10);
    if (unaff_r6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(unaff_r6 + 8);
    }
    *(int *)(iVar6 + 4) = param_1[0x28];
    if (unaff_r6 != 0) {
      iVar5 = *(int *)(unaff_r6 + 8);
    }
    *(int *)(iVar5 + 8) = param_1[0x29];
    (**(code **)(*param_1 + 0x20))(param_1,3,auStack_24);
    FUN_4a0ce310(param_1,0);
    FUN_4a0fd714(param_1[8]);
    FUN_4a16bef4(auStack_24);
    break;
  case 3:
    FUN_4a16be24(auStack_24,10);
    if (unaff_r6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(unaff_r6 + 8);
    }
    *(int *)(iVar6 + 4) = param_1[0x28];
    if (unaff_r6 != 0) {
      iVar5 = *(int *)(unaff_r6 + 8);
    }
    *(int *)(iVar5 + 8) = param_1[0x29];
    (**(code **)(*param_1 + 0x20))(param_1,4,auStack_24);
    FUN_4a16bef4(auStack_24);
    return;
  case 5:
    FUN_4a16be24(auStack_24,10);
    if (unaff_r6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(unaff_r6 + 8);
    }
    *(int *)(iVar6 + 4) = param_1[0x28];
    if (unaff_r6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(unaff_r6 + 8);
    }
    *(int *)(iVar6 + 8) = param_1[0x29];
    if (unaff_r6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(unaff_r6 + 8);
    }
    *(int *)(iVar6 + 0xc) = param_1[0x2c];
    if (unaff_r6 != 0) {
      iVar5 = *(int *)(unaff_r6 + 8);
    }
    *(int *)(iVar5 + 0x10) = param_1[0x2d];
    (**(code **)(*param_1 + 0x20))(param_1,7,auStack_24);
    FUN_4a0ce310(param_1,0);
    FUN_4a0fd714(param_1[8]);
    FUN_4a16bef4(auStack_24);
    return;
  case 6:
    FUN_4a16be24(auStack_24,10);
    if (unaff_r6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(unaff_r6 + 8);
    }
    *(int *)(iVar6 + 4) = param_1[0x28];
    if (unaff_r6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(unaff_r6 + 8);
    }
    *(int *)(iVar6 + 8) = param_1[0x29];
    if (unaff_r6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(unaff_r6 + 8);
    }
    *(int *)(iVar6 + 0xc) = param_1[0x2c];
    if (unaff_r6 != 0) {
      iVar5 = *(int *)(unaff_r6 + 8);
    }
    *(int *)(iVar5 + 0x10) = param_1[0x2d];
    (**(code **)(*param_1 + 0x20))(param_1,8,auStack_24);
    FUN_4a16bef4(auStack_24);
    return;
  }
  return;
}



// Address: 4a0cbaa4

void FUN_4a0cbaa4(int param_1,int *param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  int local_78;
  int local_74;
  undefined4 local_70;
  int *local_6c;
  undefined1 auStack_64 [20];
  undefined1 auStack_50 [12];
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  int iStack_34;
  int *piStack_30;
  uint uStack_2c;
  int local_28;
  
  local_40 = *(int *)(param_1 + 0x20);
  local_38 = local_40 + 0x278;
  iVar2 = *(int *)(param_4 + 0xc);
  bVar14 = iVar2 == 0;
  if (bVar14) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = *(int **)(iVar2 + 8);
  }
  iVar13 = *piVar9;
  if (bVar14) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(iVar2 + 8);
  }
  iVar10 = *(int *)(iVar10 + 4);
  if (bVar14) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(iVar2 + 8);
  }
  iVar11 = *(int *)(iVar11 + 8);
  if (bVar14) {
    iVar12 = 0;
  }
  else {
    iVar12 = *(int *)(iVar2 + 8);
  }
  local_3c = *(int *)(iVar12 + 0xc);
  if (bVar14) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 8);
  }
  iVar12 = *(int *)(iVar2 + 0x10);
  iVar2 = 0;
  iStack_34 = param_1;
  piStack_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  if (0x15 < param_3) {
    switchD_4a11cc8c::default(0,s_invalid_ui_element_4a0cbf88);
    goto LAB_4a0cbf14;
  }
  iVar1 = iVar11 >> 1;
  local_78 = iVar11;
  switch(param_3) {
  case 0:
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 0xa0))(param_2,0);
      local_78 = local_3c;
      (**(code **)(*param_2 + 0x3c))(param_2,iVar13,iVar10,iVar11);
    }
    break;
  default:
    if (param_2 != (int *)0x0) {
      local_40 = local_40 + 0x278;
      if (iVar12 < -0xc) {
        switchD_4a11cc8c::default(-0x18 < iVar12,PTR_s_invalid_string_id_4a0cbf7c);
        iVar3 = 0;
        if (*(int *)(param_1 + 0xf0) != 0) {
          iVar3 = *(int *)(*(int *)(param_1 + 0xf0) + 8);
        }
        if (*(int *)(iVar3 + (-0xd - iVar12) * 4) == 0x800) {
          iVar12 = 0;
        }
        else {
          iVar12 = FUN_4a1351bc(local_40);
        }
      }
      else {
        iVar12 = FUN_4a1351bc(local_40,iVar12);
      }
      if (iVar12 != 0) {
        local_70 = 9;
        local_74 = iVar10 + 1;
        if (param_3 == 2 || param_3 == 5) {
          local_70 = 0xc;
          local_78 = iVar13 + iVar11;
        }
        else {
          local_78 = iVar13;
          if (param_3 == 3 || param_3 == 6) {
            local_78 = iVar13 + iVar1;
            local_70 = 10;
          }
        }
        FUN_4a06b02c(local_38,param_2,iVar12,3);
      }
    }
    break;
  case 7:
    iVar2 = *(int *)(param_1 + 0xcc);
    iVar10 = iVar10 + iVar2;
    break;
  case 8:
  case 9:
    iVar2 = FUN_4a06c7e8(local_38);
    if (iVar12 <= iVar2) {
      iVar12 = iVar2;
    }
    iVar12 = iVar12 * *(int *)(param_1 + 0xbc);
    if (param_2 != (int *)0x0) {
      if (param_3 == 9) {
        iVar12 = local_3c;
      }
      local_78 = iVar10 + (iVar12 >> 1);
      local_74 = 0x12;
      FUN_4a06c45c(local_38,param_2,3,iVar13 + iVar1);
    }
    goto LAB_4a0cbedc;
  case 10:
  case 0xb:
  case 0xc:
    iVar2 = 0xc;
    if (param_2 != (int *)0x0) {
      local_40 = local_40 + 0x128;
      uVar7 = FUN_4a09f974(local_40,0x7f);
      uVar4 = FUN_4a171fac(iVar11);
      local_44 = FUN_4a171bb8(uVar4,uVar7);
      if (param_3 == 0xc) {
        uVar7 = 0xbf800000;
      }
      else {
        uVar7 = 0x3f800000;
      }
      if (param_3 == 10) {
        uVar4 = 0x7e;
      }
      else {
        uVar4 = 0x7f;
      }
      uVar5 = FUN_4a171fac(iVar10 + 6);
      uVar6 = FUN_4a171fac(iVar13 + iVar1);
      local_6c = (int *)0x0;
      local_78 = 0x3f800000;
      local_74 = local_44;
      local_70 = uVar7;
      FUN_4a09f664(local_40,uVar4,uVar6,uVar5);
      FUN_4a09f3a4(local_40,param_2);
    }
    iVar10 = iVar10 + 0xc;
    break;
  case 0xd:
    iVar12 = local_3c;
    if (param_2 == (int *)0x0) break;
    goto LAB_4a0cbedc;
  case 0xe:
    iVar13 = iVar13 + iVar12;
    iVar11 = iVar11 + iVar12 * -2;
    iVar10 = iVar10 + iVar12;
    iVar2 = iVar12 << 1;
    break;
  case 0xf:
    iVar13 = iVar13 + iVar12;
    iVar11 = iVar11 + iVar12 * -2;
    break;
  case 0x10:
    iVar10 = iVar10 + iVar12;
    iVar2 = iVar12 << 1;
    break;
  case 0x11:
    goto LAB_4a0cbedc;
  case 0x12:
    if (param_2 == (int *)0x0) break;
    iVar2 = 0;
    if (*(int *)(param_1 + 0x7c) != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x7c) + 8);
    }
    local_74 = 1;
    local_78 = local_3c;
    FUN_4a0d22c4(*(undefined4 *)(iVar2 + iVar12 * 4),iVar13,iVar10,iVar11);
    iVar2 = 0;
    if (*(int *)(param_1 + 0x7c) != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x7c) + 8);
    }
    FUN_4a0d23c4(*(undefined4 *)(iVar2 + iVar12 * 4),param_2);
    iVar12 = local_3c;
    goto LAB_4a0cbedc;
  case 0x13:
    FUN_4a0fb3b0(&local_78,local_40,iVar12);
    iVar2 = 0;
    uVar7 = FUN_4a16bdcc(auStack_64,local_28);
    puVar8 = (undefined4 *)FUN_4a0c6bc0(auStack_50);
    *puVar8 = PTR_PTR_4a0cbf80;
    puVar8[2] = local_70;
    puVar8[3] = local_6c;
    if (local_6c != (int *)0x0) {
      (**(code **)(*local_6c + 0xc))();
    }
    *puVar8 = PTR_PTR_4a0cbf84;
    FUN_4a0cf0cc(param_1,param_2,puVar8,uVar7);
    FUN_4a16c1a0(auStack_50);
    FUN_4a16bef4(auStack_64);
    if (*(int *)(local_28 + 0xc) != 0) {
      iVar2 = *(int *)(*(int *)(local_28 + 0xc) + 8);
    }
    iVar2 = *(int *)(iVar2 + 0xc);
    iVar10 = iVar10 + iVar2;
    FUN_4a16c1a0(&local_78);
    break;
  case 0x14:
    local_74 = 0;
    iVar12 = FUN_4a118954(param_1,param_2,iVar13,iVar10);
    goto LAB_4a0cbedc;
  case 0x15:
    local_74 = 0;
    iVar12 = FUN_4a11063c(param_1,param_2,iVar13,iVar10);
LAB_4a0cbedc:
    iVar2 = iVar12;
    iVar10 = iVar10 + iVar2;
  }
LAB_4a0cbf14:
  iVar12 = 0;
  piVar9 = (int *)0x0;
  if (*(int *)(local_28 + 0xc) != 0) {
    piVar9 = *(int **)(*(int *)(local_28 + 0xc) + 8);
  }
  *piVar9 = iVar13;
  if (*(int *)(local_28 + 0xc) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(*(int *)(local_28 + 0xc) + 8);
  }
  *(int *)(iVar13 + 4) = iVar10;
  if (*(int *)(local_28 + 0xc) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(*(int *)(local_28 + 0xc) + 8);
  }
  *(int *)(iVar13 + 8) = iVar11;
  if (*(int *)(local_28 + 0xc) != 0) {
    iVar12 = *(int *)(*(int *)(local_28 + 0xc) + 8);
  }
  *(int *)(iVar12 + 0xc) = iVar2;
  return;
}



// Address: 4a0cbf9c

void FUN_4a0cbf9c(int param_1,int *param_2)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  undefined *local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  
  iVar21 = *(int *)(param_1 + 0x20);
  iVar4 = iVar21 + 0x278;
  iVar5 = iVar21 + 0x128;
  iVar6 = FUN_4a13ca78(iVar21);
  iVar7 = FUN_4a13caa0(iVar21);
  *(undefined4 *)PTR_DAT_4a0cc6a8 = *(undefined4 *)PTR_DAT_4a0cc6a4;
  (**(code **)(*param_2 + 0xa0))(param_2,0xff0000);
  (**(code **)(*param_2 + 0x58))(param_2,0,0,iVar6,iVar7);
  uVar8 = FUN_4a171fac(iVar7);
  local_28 = FUN_4a171fac(iVar6);
  FUN_4a0a07ac(iVar5,0x1ab,0,0,local_28,uVar8,0x3f800000,0);
  FUN_4a09f3a4(iVar5,param_2);
  FUN_4a0bbb28(*(undefined4 *)PTR_DAT_4a0cc6ac);
  iVar9 = FUN_4a13ca78(*(undefined4 *)(param_1 + 0x20));
  iVar9 = iVar9 >> 1;
  iVar10 = FUN_4a13caa0(*(undefined4 *)(param_1 + 0x20));
  puVar1 = PTR_DAT_4a0cc6b4;
  uVar8 = DAT_4a0cc6b0;
  uVar23 = 0x41b40000;
  iVar22 = 0;
  local_2c = FUN_4a171fac();
  local_30 = FUN_4a171fac(iVar9);
  local_34 = (undefined *)FUN_4a17211c(*(undefined4 *)puVar1,uVar8);
  do {
    uVar8 = FUN_4a17211c(local_34,uVar23);
    uVar11 = FUN_4a002d64();
    uVar11 = FUN_4a17211c(uVar11,0x42b00000);
    FUN_4a171a94(local_30,uVar11);
    uVar11 = FUN_4a171e1c();
    uVar8 = FUN_4a002f08(uVar8);
    uVar8 = FUN_4a17211c(uVar8,0x42b00000);
    FUN_4a171a94(local_2c,uVar8);
    uVar8 = FUN_4a171e1c();
    uVar12 = FUN_4a1725c0(uVar23 ^ 0x80000000,0x42b40000);
    uVar8 = FUN_4a171fac(uVar8);
    uVar11 = FUN_4a171fac(uVar11);
    FUN_4a09f664(iVar5,0x1ac,uVar11,uVar8,0x3f800000,0xbf800000,0x3f800000,uVar12);
    uVar23 = FUN_4a171a94(uVar23,0x42340000);
    iVar22 = iVar22 + 1;
  } while (iVar22 < 8);
  iVar22 = 0;
  do {
    iVar24 = param_1 + iVar22 * 4;
    uVar8 = FUN_4a171fac(*(undefined4 *)(iVar24 + 0x194));
    uVar8 = FUN_4a17211c(uVar8,0x42340000);
    uVar23 = FUN_4a171a94(uVar8,0x41c00000);
    iVar24 = *(int *)(iVar24 + 0x19c);
    if (iVar24 < 0x191) {
      uVar8 = FUN_4a171fac();
      uVar8 = FUN_4a17211c(uVar8,DAT_4a0cc6b8);
    }
    else {
      uVar8 = FUN_4a171fac(iVar24 + -400);
      uVar8 = FUN_4a17211c(uVar8,DAT_4a0cc6bc);
      uVar8 = FUN_4a1724e0(uVar8,0x3f800000);
    }
    uVar11 = FUN_4a17211c(local_34,uVar23);
    uVar12 = FUN_4a002d64();
    uVar12 = FUN_4a17211c(uVar12,0x42ac0000);
    FUN_4a171a94(local_30,uVar12);
    uVar12 = FUN_4a171e1c();
    uVar11 = FUN_4a002f08(uVar11);
    uVar11 = FUN_4a17211c(uVar11,0x42ac0000);
    FUN_4a171a94(local_2c,uVar11);
    uVar11 = FUN_4a171e1c();
    uVar13 = FUN_4a1725c0(uVar23 ^ 0x80000000,0x42b40000);
    uVar11 = FUN_4a171fac(uVar11);
    uVar12 = FUN_4a171fac(uVar12);
    FUN_4a09f664(iVar5,0x1ad,uVar12,uVar11,uVar8,0xc0000000,0x40000000,uVar13);
    iVar22 = iVar22 + 1;
  } while (iVar22 < 2);
  uVar8 = FUN_4a171fac(iVar9 + -3);
  FUN_4a09f664(iVar5,0x1a9,uVar8,local_2c,0x3f800000,0x3f800000,0x3f800000,0);
  uVar8 = FUN_4a06c1b0(iVar4);
  iVar22 = FUN_4a13e010(uVar8,&DAT_4a0cc6c0);
  if (iVar22 != 0) {
    uVar8 = FUN_4a171fac((iVar10 >> 1) + -0x32);
    uVar11 = FUN_4a171fac(iVar9 + 0x35);
    FUN_4a09f664(iVar5,0x1aa,uVar11,uVar8,0x3f800000,0x3f800000,0x3f800000,0);
  }
  uVar8 = FUN_4a1351bc(*(int *)(param_1 + 0x20) + 0x278,0x802);
  iVar22 = FUN_4a13dfe4(uVar8,0);
  if (iVar22 == 0x42) {
    uVar8 = 0x210;
  }
  else if (iVar22 == 0x43) {
    uVar8 = 0x20c;
  }
  else if (iVar22 == 0x44) {
    uVar8 = 0x20d;
  }
  else {
    uVar8 = 0x20f;
  }
  uVar11 = FUN_4a171fac((iVar10 >> 1) + -0x22);
  uVar12 = FUN_4a171fac(iVar9 + -0x59);
  FUN_4a09f664(iVar5,uVar8,uVar12,uVar11,0x3f800000,0x3f800000,0x3f800000,0);
  FUN_4a09f3a4(iVar5,param_2);
  puVar1 = PTR_DAT_4a0cc6ac;
  FUN_4a0bbcb4(*(undefined4 *)PTR_DAT_4a0cc6ac);
  iVar22 = FUN_4a06bf88(iVar4,0x80b,4);
  iVar22 = iVar22 + 0xa0;
  iVar24 = FUN_4a06be4c(iVar4,4);
  iVar24 = iVar24 + 0x14;
  iVar9 = iVar6 >> 1;
  iVar25 = iVar7 + -0x44;
  iVar14 = FUN_4a0bc1f8(*(undefined4 *)puVar1);
  iVar10 = iVar24 >> 1;
  if ((iVar14 == 400) || (iVar14 = FUN_4a0bc1f8(*(undefined4 *)puVar1), iVar14 == 0x140)) {
    uVar8 = FUN_4a171fac(iVar24);
    uVar11 = FUN_4a171fac(iVar22);
    uVar12 = FUN_4a171fac((iVar25 - iVar10) + 10);
    uVar13 = FUN_4a171fac(iVar9 - (iVar22 >> 1));
    FUN_4a0a07ac(iVar5,0x1b5,uVar13,uVar12,uVar11,uVar8,0x3f800000,0);
  }
  else {
    uVar8 = FUN_4a171fac(iVar24);
    uVar11 = FUN_4a171fac(iVar22);
    uVar12 = FUN_4a171fac(iVar25 - iVar10);
    uVar13 = FUN_4a171fac(iVar9 - (iVar22 >> 1));
    FUN_4a0a07ac(iVar5,0x1b5,uVar13,uVar12,uVar11,uVar8,0x3f800000,0);
  }
  FUN_4a17211c(local_28,DAT_4a0cc6c4);
  iVar14 = FUN_4a171e1c();
  uVar8 = FUN_4a171fac(iVar14);
  uVar11 = FUN_4a171fac(iVar25 + iVar24 + -8);
  uVar12 = FUN_4a171fac(iVar9);
  FUN_4a0a02bc(iVar5,0x1b1,0x1b2,0x1b3,uVar12,uVar11,uVar8,0x3f800000,0x3f800000,0,0);
  iVar15 = FUN_4a17211c(*(undefined4 *)(param_1 + 0x1a8),DAT_4a0cc6c8);
  FUN_4a17211c(uVar8,iVar15);
  iVar16 = FUN_4a171e1c();
  iVar22 = iVar9 - (iVar14 >> 1);
  iVar17 = iVar22 + (iVar16 >> 1) * 2 + -10;
  uVar13 = FUN_4a09f9c8(iVar5,0x1b2);
  uVar11 = FUN_4a171a94(uVar11,uVar13);
  FUN_4a171a94(uVar11,0x40400000);
  iVar18 = FUN_4a171e1c();
  uVar11 = FUN_4a171fac(iVar24);
  uVar13 = FUN_4a171fac(iVar14 + 100);
  uVar19 = FUN_4a171fac(iVar18 - iVar10);
  uVar20 = FUN_4a171fac(iVar9 - (iVar14 + 100 >> 1));
  FUN_4a0a07ac(iVar5,0x1b5,uVar20,uVar19,uVar13,uVar11,0x3f800000,0);
  FUN_4a09f3a4(iVar5,param_2);
  uVar11 = FUN_4a171fac(iVar25 + iVar24 + -0xb);
  FUN_4a0a02bc(iVar5,0x1ae,0x1af,0x1b0,uVar12,uVar11,uVar8,0x3f800000,0x3f800000,0,0);
  (**(code **)(*param_2 + 0x9c))(param_2,iVar22,0,iVar16,iVar7);
  FUN_4a09f3a4(iVar5,param_2);
  puVar1 = PTR_DAT_4a0cc6ac;
  iVar10 = FUN_4a0bc1f8(*(undefined4 *)PTR_DAT_4a0cc6ac);
  if ((iVar10 == 400) || (iVar10 = FUN_4a0bc1f8(*(undefined4 *)puVar1), iVar10 == 0x140)) {
    (**(code **)(*param_2 + 0x9c))(param_2,0,0,iVar6,iVar7 + 100);
  }
  else {
    (**(code **)(*param_2 + 0x9c))(param_2,0,0,iVar6,iVar7);
  }
  if (iVar15 < 0x3f000000) {
    iVar22 = iVar17 - iVar22;
  }
  else {
    uVar13 = FUN_4a09f974(iVar5,0x1b6);
    uVar13 = FUN_4a17295c(uVar13,0xffffffff);
    uVar19 = FUN_4a171fac(iVar17);
    FUN_4a171a94(uVar19,uVar13);
    iVar10 = FUN_4a171e1c();
    iVar22 = (iVar22 + iVar14) - iVar10;
  }
  if (0x13 < iVar22) {
    iVar22 = 0x14;
  }
  uVar13 = FUN_4a171fac(iVar22);
  uVar13 = FUN_4a17211c(uVar13,DAT_4a0cca5c);
  uVar19 = FUN_4a171fac(iVar17);
  FUN_4a09f664(iVar5,0x1b6,uVar19,uVar11,uVar13,0x3f800000,0x3f800000,0);
  FUN_4a09f3a4(iVar5,param_2);
  iVar10 = FUN_4a0bc1f8(*(undefined4 *)puVar1);
  if ((iVar10 == 400) || (iVar10 = FUN_4a0bc1f8(*(undefined4 *)puVar1), iVar10 == 0x140)) {
    FUN_4a06b074(iVar4,param_2,0x80b,4,iVar9,iVar7 + -0x3a,0x12);
  }
  else {
    FUN_4a06b074(iVar4,param_2,0x80b,4,iVar9,iVar25,0x12);
  }
  FUN_4a17211c(uVar8,DAT_4a0cca60);
  iVar9 = FUN_4a171e1c();
  if (*(int *)(param_1 + 0x188) != -1) {
    (**(code **)(*param_2 + 0x9c))(param_2,iVar9,0,iVar6 + iVar9 * -2,iVar7);
    FUN_4a06b074(iVar4,param_2,*(undefined4 *)(param_1 + 0x188),4,*(int *)(param_1 + 0x18c) >> 0x10,
                 iVar18,0x11);
    (**(code **)(*param_2 + 0x9c))(param_2,0,0,iVar6,iVar7);
  }
  iVar9 = iVar6 + iVar9 * -2 >> 1;
  uVar8 = FUN_4a171fac(iVar9);
  uVar11 = FUN_4a171fac(iVar7 + -0x1b);
  FUN_4a0a07ac(iVar5,0x1b4,uVar12,uVar11,uVar8,0x41d80000,0x3f800000,0);
  uVar8 = FUN_4a171fac(-iVar9);
  FUN_4a0a07ac(iVar5,0x1b4,uVar12,uVar11,uVar8,0x41d80000,0x3f800000,0);
  if (*(int *)(iVar21 + 0x1e8) == 0) {
    uVar8 = FUN_4a171fac(*(undefined4 *)(iVar21 + 0x1e0));
    uVar11 = FUN_4a171fac(*(undefined4 *)(iVar21 + 0x1e4));
    uVar11 = FUN_4a171bb8(uVar11,uVar8);
    FUN_4a0b529c(*(undefined4 *)(iVar21 + 0x1c0),uVar8,uVar11,0xc2c80000);
  }
  else {
    uVar8 = FUN_4a171fac(*(undefined4 *)(iVar21 + 0x1e0));
    uVar11 = FUN_4a171fac(*(undefined4 *)(iVar21 + 0x1e4));
    uVar11 = FUN_4a171bb8(uVar11,uVar8);
    FUN_4a0b529c(*(undefined4 *)(iVar21 + 0x1c0),uVar8,uVar11,0xc3480000);
  }
  FUN_4a0af110(*(undefined4 *)(iVar21 + 0x1c0),0x42b40000,0);
  uVar8 = (**(code **)(*param_2 + 0x74))(param_2);
  uVar11 = (**(code **)(*param_2 + 0x78))(param_2);
  uVar12 = (**(code **)(*param_2 + 0x70))(param_2);
  (**(code **)(*param_2 + 0x6c))(param_2);
  piVar2 = (int *)thunk_FUN_4a0b3908();
  FUN_4a0a83a4(piVar2,param_2);
  (**(code **)(*piVar2 + 0x20))
            (piVar2,*(undefined4 *)(iVar21 + 0x1d8),*(undefined4 *)(iVar21 + 0x1dc),
             *(undefined4 *)(iVar21 + 0x1e0));
  FUN_4a0a8b14(piVar2,*(undefined4 *)(iVar21 + 0x1b8));
  (**(code **)(*piVar2 + 0x30))(piVar2);
  (**(code **)(*param_2 + 0x9c))(param_2,uVar8,uVar11,uVar12);
  iVar9 = *(int *)(*(int *)(iVar21 + 0x1bc) + 0xdc);
  if (iVar9 != 0) {
    for (iVar9 = *(int *)(iVar9 + 0x10); 0 < iVar9; iVar9 = *(int *)(iVar9 + 0x10)) {
      FUN_4a0b4ac8(*(int *)(iVar21 + 0x1bc),
                   **(undefined4 **)(*(int *)(*(int *)(iVar21 + 0x1bc) + 0xdc) + 0x14));
      iVar9 = *(int *)(*(int *)(iVar21 + 0x1bc) + 0xdc);
      if (iVar9 == 0) break;
    }
  }
  puVar3 = (undefined4 *)FUN_4a0c6bc0(&local_34);
  *puVar3 = PTR_PTR_4a09f65c;
  puVar3[2] = *(undefined4 *)(iVar21 + 0x198);
  piVar2 = *(int **)(iVar21 + 0x19c);
  puVar3[3] = piVar2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))();
  }
  iVar9 = local_2c;
  local_34 = PTR_PTR_4a09f660;
  iVar4 = 0;
  *puVar3 = PTR_PTR_4a09f660;
  if (0 < (int)puVar3[2]) {
    do {
      if (puVar3[3] == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(puVar3[3] + 8);
      }
      *(undefined2 *)(iVar5 + iVar4 * 2) = 0;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)puVar3[2]);
  }
  iVar4 = FUN_4a0bcc84(&local_34);
  if (iVar4 != 0) {
    iVar5 = 0;
    if (0 < iVar9) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar9);
      if (iVar4 == 0) goto LAB_4a09f638;
    }
    FUN_4a14f21c();
  }
LAB_4a09f638:
  FUN_4a0c6bf4(&local_34);
  *(undefined4 *)(iVar21 + 0x1ec) = 0xc2480000;
  *(undefined4 *)(iVar21 + 0x1f0) = 0;
  return;
}



// Address: 4a0cca64

void FUN_4a0cca64(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x174) = param_2;
  *(undefined4 *)(param_1 + 0x178) = param_3;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0x200000;
  *(undefined1 *)(param_1 + 0x184) = 0;
  return;
}



// Address: 4a0cca84

undefined4 FUN_4a0cca84(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  
  FUN_4a13ca78(*(undefined4 *)(param_1 + 0x20));
  uVar1 = FUN_4a171fac();
  FUN_4a17211c(uVar1,DAT_4a0ccc40);
  iVar2 = FUN_4a171e1c();
  if (*(int *)(param_1 + 0x188) == -1) {
    uVar1 = FUN_4a0fe640(*(undefined4 *)(param_1 + 0x20),0xbd9);
    *(undefined4 *)(param_1 + 0x188) = uVar1;
    iVar3 = FUN_4a13ca78(*(undefined4 *)(param_1 + 0x20));
    *(int *)(param_1 + 0x18c) = (iVar3 - iVar2) * 0x10000;
    uVar1 = FUN_4a06bf88(*(int *)(param_1 + 0x20) + 0x278,*(undefined4 *)(param_1 + 0x188),3);
    *(undefined4 *)(param_1 + 400) = uVar1;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x18c) + param_2 * -0x1999;
    *(int *)(param_1 + 0x18c) = iVar3;
    if (iVar3 + iVar2 * -0x10000 < *(int *)(param_1 + 400) * -0x10000) {
      *(undefined4 *)(param_1 + 0x188) = 0xffffffff;
    }
  }
  iVar2 = *(int *)(param_1 + 0x19c) + param_2;
  *(int *)(param_1 + 0x19c) = iVar2;
  if (0x5db < iVar2) {
    *(int *)(param_1 + 0x194) = (*(int *)(param_1 + 0x194) + 2) % 8;
    *(int *)(param_1 + 0x19c) = iVar2 + -0x5dc;
  }
  uVar4 = *(int *)(param_1 + 0x1a0) + param_2;
  uVar5 = 0x5db < uVar4;
  *(uint *)(param_1 + 0x1a0) = uVar4;
  if (0x5db < (int)uVar4) {
    *(int *)(param_1 + 0x198) = (*(int *)(param_1 + 0x198) + 2) % 8;
    *(uint *)(param_1 + 0x1a0) = uVar4 - 0x5dc;
  }
  uVar1 = FUN_4a171fac(param_3);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  FUN_4a1720a0(*(undefined4 *)(param_1 + 0x1a8),uVar1);
  if ((bool)uVar5) {
    FUN_4a172458(*(undefined4 *)(param_1 + 0x1a4),*(undefined4 *)(param_1 + 0x1a8));
    if (!(bool)uVar5) goto LAB_4a0ccc18;
  }
  else {
    uVar1 = FUN_4a171fac(param_2);
    uVar1 = FUN_4a17211c(uVar1,DAT_4a0ccc44);
    uVar1 = FUN_4a17211c(uVar1,0x41a00000);
    uVar1 = FUN_4a171a94(uVar1,*(undefined4 *)(param_1 + 0x1a8));
    *(undefined4 *)(param_1 + 0x1a8) = uVar1;
    FUN_4a172458(uVar1,*(undefined4 *)(param_1 + 0x1a4));
    if ((bool)uVar5) {
LAB_4a0ccc18:
      uVar1 = *(undefined4 *)(param_1 + 0x1a8);
      goto host_s3eDeviceYield_arm;
    }
  }
  uVar1 = *(undefined4 *)(param_1 + 0x1a4);
host_s3eDeviceYield_arm:
  *(undefined4 *)(param_1 + 0x1a8) = uVar1;
  return 0;
}



// Address: 4a0ccc48

/* WARNING: Removing unreachable block (ram,0x4a0faea0) */
/* WARNING: Removing unreachable block (ram,0x4a0fae9c) */
/* WARNING: Removing unreachable block (ram,0x4a0faebc) */
/* WARNING: Removing unreachable block (ram,0x4a0faf08) */

void FUN_4a0ccc48(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x168);
  iVar1 = FUN_4a0ff494();
  *(undefined4 *)(iVar3 + 0x78) = 1;
  *(undefined4 *)(iVar3 + 0x94) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x98) = 4;
  *(undefined4 *)(iVar3 + 0x90) = param_3;
  *(undefined4 *)(iVar3 + 0x9c) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0xa0) = 0xffffffff;
  FUN_4a09f974(iVar1 + 0x128,0x60);
  uVar2 = FUN_4a171e1c();
  *(undefined4 *)(iVar3 + 0xa4) = uVar2;
  *(undefined4 *)(iVar3 + 0xa8) = 200;
  FUN_4a08a03c(iVar3,param_2,1);
  *(undefined4 *)(iVar3 + 0x74) = 0;
  *(undefined4 *)(iVar3 + 0x7c) = 2;
  *(undefined4 *)(iVar3 + 0x80) = 0;
                    /* WARNING: Could not recover jumptable at 0x4a0faeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_caseD_2_4a0faec8)();
  return;
}



// Address: 4a0ccc54

void FUN_4a0ccc54(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_20 [12];
  int local_14;
  
  FUN_4a16be24(auStack_20,3);
  iVar3 = 0;
  if (local_14 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(local_14 + 8);
  }
  *(undefined4 *)(iVar1 + 4) = 0;
  if (local_14 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(local_14 + 8);
  }
  *puVar2 = param_2;
  if (local_14 != 0) {
    iVar3 = *(int *)(local_14 + 8);
  }
  *(undefined4 *)(iVar3 + 8) = 0xffffffff;
  (**(code **)(*param_1 + 0x20))(param_1,0xb,auStack_20);
  FUN_4a16bef4(auStack_20);
  return;
}



// Address: 4a0ccce4

int FUN_4a0ccce4(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x7c) + 8);
  }
  iVar1 = *(int *)(iVar1 + param_2 * 4);
  iVar2 = FUN_4a135720();
  if (iVar2 != 0) {
    if (*(char *)(iVar1 + 0x7c) == '\0') {
      uVar3 = FUN_4a171fac(*(undefined4 *)(iVar1 + 0xbc));
      uVar6 = *(undefined4 *)(iVar1 + 0x44);
      uVar4 = FUN_4a171fac(param_4 - *(int *)(iVar1 + 0x84));
      uVar4 = FUN_4a1725c0(uVar4,uVar6);
      FUN_4a171bb8(uVar4,uVar3);
      iVar5 = FUN_4a171e1c();
      bVar8 = SCARRY4(iVar5,1);
      iVar2 = iVar5 + 1;
      bVar7 = iVar5 == -1;
      if (-2 < iVar5) {
        iVar1 = *(int *)(iVar1 + 0xac);
        bVar8 = SBORROW4(iVar1,iVar5);
        iVar2 = iVar1 - iVar5;
        bVar7 = iVar1 == iVar5;
      }
      if (!bVar7 && iVar2 < 0 == bVar8) {
        return iVar5;
      }
    }
    else {
      uVar3 = FUN_4a171fac(*(undefined4 *)(iVar1 + 0xb8));
      uVar6 = *(undefined4 *)(iVar1 + 0x5c);
      uVar4 = FUN_4a171fac(param_3 - *(int *)(iVar1 + 0x80));
      uVar4 = FUN_4a1725c0(uVar4,uVar6);
      FUN_4a171bb8(uVar4,uVar3);
      iVar5 = FUN_4a171e1c();
      bVar8 = SCARRY4(iVar5,1);
      iVar2 = iVar5 + 1;
      bVar7 = iVar5 == -1;
      if (-2 < iVar5) {
        iVar1 = *(int *)(iVar1 + 0xac);
        bVar8 = SBORROW4(iVar1,iVar5);
        iVar2 = iVar1 - iVar5;
        bVar7 = iVar1 == iVar5;
      }
      if (!bVar7 && iVar2 < 0 == bVar8) {
        return iVar5;
      }
    }
  }
  return -1;
}



// Address: 4a0ccd04

void FUN_4a0ccd04(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  
  FUN_4a089fa0(*(undefined4 *)(param_1 + 0x168),0x800,0x825,2,0xffffffff,0xffffffff,3);
  iVar1 = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x7c) + 8);
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  iVar2 = FUN_4a134a50(iVar1,1);
  if (iVar2 == 0) {
    *(undefined4 *)(iVar1 + 0xa8) = 0xffffffff;
    *(uint *)(iVar1 + 0x28) = *(uint *)(iVar1 + 0x28) & 0xfffffffd;
    return;
  }
  iVar2 = FUN_4a0ff494();
  uVar8 = *(undefined4 *)(iVar2 + 0x520);
  uVar10 = *(undefined4 *)(iVar2 + 0x51c);
  iVar3 = FUN_4a0fba7c();
  FUN_4a134a98(iVar1,2);
  *(undefined4 *)(iVar1 + 0xb0) = 1;
  *(int *)(iVar1 + 0xb8) = *(int *)(iVar1 + 0x88) + -0x14;
  *(undefined4 *)(iVar1 + 0xa4) = 0xffffffff;
  switch(*(undefined4 *)(iVar1 + 0x74)) {
  case 0:
    *(undefined4 *)(iVar1 + 0xec) = 0;
    uVar8 = FUN_4a145bfc(iVar2);
    *(undefined4 *)(iVar1 + 0xa4) = uVar8;
    *(undefined4 *)(iVar1 + 0xac) = 7;
    *(undefined4 *)(iVar1 + 0xb0) = 7;
    *(undefined4 *)(iVar1 + 0xb4) = 1;
    *(undefined4 *)(iVar1 + 0xb8) = 0x76;
    *(undefined4 *)(iVar1 + 0xbc) = *(undefined4 *)(iVar1 + 0x8c);
    goto switchD_4a0d29f4_default;
  case 1:
    *(undefined4 *)(iVar1 + 0xec) = 1;
    uVar8 = FUN_4a13fd18(uVar10);
    *(undefined4 *)(iVar1 + 0xac) = uVar8;
    uVar8 = FUN_4a13f8d8(uVar10);
    *(undefined4 *)(iVar1 + 0xa4) = uVar8;
    *(undefined4 *)(iVar1 + 0xb0) = *(undefined4 *)(iVar1 + 0xac);
    *(undefined4 *)(iVar1 + 0xb4) = 1;
    *(undefined4 *)(iVar1 + 0xb8) = 0xa0;
    uVar8 = *(undefined4 *)(iVar1 + 0x8c);
    break;
  case 2:
    uVar8 = FUN_4a13fb20(uVar10);
    *(undefined4 *)(iVar1 + 0xac) = uVar8;
    uVar8 = 0x28;
    break;
  case 3:
    uVar8 = FUN_4a13fa90(uVar10);
    *(undefined4 *)(iVar1 + 0xac) = uVar8;
    uVar8 = 0x22;
    break;
  case 4:
    uVar8 = FUN_4a13fb04(uVar10);
    *(undefined4 *)(iVar1 + 0xac) = uVar8;
    *(undefined4 *)(iVar1 + 0xbc) = 0x2d;
    iVar3 = 0;
    iVar6 = FUN_4a13fb04(uVar10);
    uVar5 = iVar6 - 1;
    if (-1 < (int)uVar5) {
      do {
        uVar8 = FUN_4a13fa58(uVar10,uVar5);
        iVar6 = FUN_4a06bf88(iVar2 + 0x278,uVar8,3);
        if (iVar3 < iVar6) {
          iVar3 = iVar6;
        }
        uVar5 = uVar5 - 1;
      } while (uVar5 < 0x80000000);
    }
    *(int *)(iVar1 + 0xc0) = iVar3;
    goto switchD_4a0d29f4_default;
  case 5:
    uVar8 = FUN_4a140cec(uVar10);
    *(undefined4 *)(iVar1 + 0xac) = uVar8;
    uVar8 = 0x28;
    break;
  case 6:
    uVar8 = FUN_4a141390(uVar10);
    *(undefined4 *)(iVar1 + 0xac) = uVar8;
    uVar8 = 0x28;
    break;
  case 7:
    *(undefined4 *)(iVar1 + 0xa4) = 0;
    *(undefined4 *)(iVar1 + 0xac) = *(undefined4 *)(iVar3 + 0xa24);
    uVar8 = 0x28;
    break;
  case 8:
    *(undefined4 *)(iVar1 + 0xa4) = 0;
    uVar10 = FUN_4a145634(uVar8,*(undefined4 *)(iVar3 + 0x6d4));
    *(undefined4 *)(iVar1 + 0xac) = uVar10;
    *(undefined4 *)(iVar1 + 0xbc) = 0x28;
    *(undefined4 *)(iVar1 + 0xb4) = 1;
    iVar2 = 0;
    *(undefined4 *)(iVar1 + 0xb8) = 0xb4;
    do {
      uVar10 = FUN_4a1457e4(uVar8,iVar2,*(undefined4 *)(iVar3 + 0x6d4));
      thunk_FUN_4a161570(0x40);
      uVar4 = FUN_4a099040();
      if (*(int *)(iVar1 + 0xd0) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(iVar1 + 0xd0) + 8);
      }
      *(undefined4 *)(iVar6 + iVar2 * 4) = uVar4;
      if (*(int *)(iVar1 + 0xd0) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(iVar1 + 0xd0) + 8);
      }
      FUN_4a098798(*(undefined4 *)(iVar6 + iVar2 * 4),uVar10);
      if (*(int *)(iVar1 + 0xd0) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(iVar1 + 0xd0) + 8);
      }
      FUN_4a0cb16c(*(undefined4 *)(*(int *)(iVar6 + iVar2 * 4) + 0x34));
      if (*(int *)(iVar1 + 0xe4) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(iVar1 + 0xe4) + 8);
      }
      *(int *)(iVar6 + iVar2 * 4) = iVar2;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 5);
    goto switchD_4a0d29f4_default;
  case 9:
    *(undefined4 *)(iVar1 + 0xa4) = 0;
    uVar8 = FUN_4a06be4c(iVar2 + 0x278,3);
    *(undefined4 *)(iVar1 + 0xbc) = uVar8;
    *(undefined4 *)(iVar1 + 0xac) = *(undefined4 *)(iVar3 + 0xa50);
    goto switchD_4a0d29f4_default;
  case 10:
    uVar8 = FUN_4a145540(uVar8);
    *(undefined4 *)(iVar1 + 0xac) = uVar8;
    *(undefined4 *)(iVar1 + 0xb0) = uVar8;
    *(undefined4 *)(iVar1 + 0xb4) = 1;
    *(undefined4 *)(iVar1 + 0xb8) = 0xa0;
    uVar8 = *(undefined4 *)(iVar1 + 0x8c);
    break;
  case 0xb:
    uVar8 = FUN_4a1454dc(uVar8);
    *(undefined4 *)(iVar1 + 0xac) = uVar8;
    *(undefined4 *)(iVar1 + 0xb0) = uVar8;
    *(undefined4 *)(iVar1 + 0xb4) = 1;
    *(undefined4 *)(iVar1 + 0xb8) = 0xa0;
    uVar8 = *(undefined4 *)(iVar1 + 0x8c);
    break;
  case 0xc:
    iVar2 = FUN_4a0fba7c(iVar2);
    iVar2 = FUN_4a143ac8(uVar8,*(undefined4 *)(iVar2 + 0x6ac));
    uVar8 = FUN_4a0f5958(uVar8,(int)*(char *)(iVar2 + 0x1f));
    *(undefined4 *)(iVar1 + 0xac) = uVar8;
    *(undefined4 *)(iVar1 + 0xb0) = uVar8;
    *(undefined4 *)(iVar1 + 0xb4) = 1;
    *(undefined4 *)(iVar1 + 0xb8) = 0xa0;
    uVar8 = *(undefined4 *)(iVar1 + 0x8c);
    break;
  case 0xd:
    uVar8 = FUN_4a0f3e54(uVar8);
    *(undefined4 *)(iVar1 + 0xac) = uVar8;
    *(undefined4 *)(iVar1 + 0xb0) = uVar8;
    *(undefined4 *)(iVar1 + 0xb4) = 1;
    *(undefined4 *)(iVar1 + 0xb8) = 0xa0;
    uVar8 = *(undefined4 *)(iVar1 + 0x8c);
    break;
  default:
    goto switchD_4a0d29f4_default;
  }
  *(undefined4 *)(iVar1 + 0xbc) = uVar8;
switchD_4a0d29f4_default:
  if (*(char *)(iVar1 + 0x7c) == '\0') {
    uVar11 = FUN_4a0015f0(*(undefined4 *)(iVar1 + 0xac),*(undefined4 *)(iVar1 + 0xb0));
    iVar2 = (uint)(0 < (int)((ulonglong)uVar11 >> 0x20)) + (int)uVar11;
    *(int *)(iVar1 + 0xb4) = iVar2;
    iVar2 = iVar2 * *(int *)(iVar1 + 0xbc);
    iVar3 = *(int *)(iVar1 + 0x8c) - iVar2;
    if (0 < iVar3) {
      iVar3 = 0;
    }
    uVar8 = FUN_4a171fac(iVar3);
    FUN_4a08c614(iVar1,uVar8,0);
    FUN_4a08c608(iVar1,*(int *)(iVar1 + 0x8c) < iVar2);
    *(undefined4 *)(iVar1 + 0x44) = 0;
    *(undefined4 *)(iVar1 + 0x54) = 0;
    return;
  }
  iVar6 = *(int *)(iVar1 + 0xb8);
  *(int *)(iVar1 + 0x88) = iVar6;
  *(int *)(iVar1 + 0x80) = *(int *)(iVar1 + 0x90) + (*(int *)(iVar1 + 0x98) - iVar6 >> 1);
  uVar11 = FUN_4a0015f0(*(undefined4 *)(iVar1 + 0xac),*(undefined4 *)(iVar1 + 0xb4));
  iVar9 = (int)uVar11 + (uint)(0 < (int)((ulonglong)uVar11 >> 0x20));
  iVar7 = (iVar9 + -1) * iVar6;
  *(int *)(iVar1 + 0xb0) = iVar9;
  iVar3 = *(int *)(iVar1 + 0xa4);
  iVar2 = -iVar7;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  if (iVar7 != 0 && -1 < iVar2) {
    iVar2 = 0;
  }
  uVar8 = FUN_4a171fac(iVar2);
  uVar10 = 0;
  if (*(int *)(iVar1 + 0x74) == 0) {
    uVar10 = FUN_4a171fac(iVar6);
    uVar8 = FUN_4a171a94(uVar10,uVar8);
    uVar10 = FUN_4a1724e0(uVar10,0);
    if (iVar3 == 0) {
      iVar3 = 1;
    }
    else if (iVar9 + -1 == iVar3) {
      iVar3 = iVar9 + -2;
    }
  }
  uVar4 = FUN_4a171fac(iVar6);
  FUN_4a08c5fc(iVar1,uVar8,uVar10,uVar4);
  FUN_4a08c564(iVar1,*(int *)(iVar1 + 0x88) <= iVar7);
  uVar8 = FUN_4a171fac(-iVar3 * *(int *)(iVar1 + 0xb8));
  *(undefined4 *)(iVar1 + 0x5c) = uVar8;
  *(undefined4 *)(iVar1 + 0x70) = uVar8;
  return;
}



// Address: 4a0ccd58

void FUN_4a0ccd58(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined1 auStack_70 [20];
  int local_5c;
  int local_58 [2];
  undefined4 local_50;
  int *local_4c;
  undefined1 auStack_44 [20];
  undefined1 auStack_30 [20];
  
  puVar2 = PTR_DAT_4a0cd1e8;
  puVar1 = PTR_DAT_4a0cd1e4;
  iVar6 = 5;
  if (*(int *)PTR_DAT_4a0cd1e4 != 0) {
    iVar6 = 6;
  }
  if (*(int *)PTR_DAT_4a0cd1e8 == 0) {
    FUN_4a08db2c();
    iVar3 = FUN_4a08df78();
    if (iVar3 != 0) {
      iVar6 = iVar6 + 1;
    }
  }
  FUN_4a16be24(local_58,iVar6 + 5);
  piVar7 = (int *)0x0;
  uVar4 = FUN_4a16bdcc(auStack_30,local_58);
  FUN_4a0ff4b8(uVar4,0x826);
  FUN_4a16bef4(auStack_30);
  uVar4 = FUN_4a16bdcc(auStack_30,local_58);
  FUN_4a0fc4b0(uVar4,0x835);
  FUN_4a16bef4(auStack_30);
  uVar4 = FUN_4a16bdcc(auStack_30,local_58);
  FUN_4a0fc4b0(uVar4,0x836);
  FUN_4a16bef4(auStack_30);
  uVar4 = FUN_4a16bdcc(auStack_30,local_58);
  FUN_4a0fc4b0(uVar4,0x838);
  FUN_4a16bef4(auStack_30);
  uVar4 = FUN_4a16bdcc(auStack_30,local_58);
  FUN_4a0fc4b0(uVar4,0x839);
  FUN_4a16bef4(auStack_30);
  iVar6 = host_s3eConfigGetInt_arm(&DAT_4a0cd1fc,s_Remove3DOption_4a0cd1ec,&local_5c);
  if (iVar6 != 0) {
    local_5c = 0;
  }
  if ((*(int *)puVar1 != 0) && (local_5c == 0)) {
    uVar4 = FUN_4a16bdcc(auStack_70,local_58);
    FUN_4a0fc4b0(uVar4,0xcd6);
    FUN_4a16bef4(auStack_70);
  }
  if (local_4c != (int *)0x0) {
    piVar7 = (int *)local_4c[2];
  }
  iVar6 = FUN_4a16be24(auStack_30,*piVar7 + 5);
  uVar4 = *(undefined4 *)(iVar6 + 8);
  piVar7 = *(int **)(iVar6 + 0xc);
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0xc))(piVar7);
  }
  (**(code **)(*(int *)(param_1 + 0x110) + 0x1c))((int *)(param_1 + 0x110));
  *(undefined4 *)(param_1 + 0x118) = uVar4;
  *(int **)(param_1 + 0x11c) = piVar7;
  FUN_4a16bef4(auStack_30);
  uVar4 = FUN_4a16bdcc(auStack_44,local_58);
  uVar5 = FUN_4a16bdcc(auStack_30,param_1 + 0x110);
  FUN_4a0ff434(uVar5,uVar4);
  FUN_4a16bef4(auStack_30);
  FUN_4a16bef4(auStack_44);
  if (*(int *)puVar2 == 0) {
    FUN_4a08db2c();
    iVar6 = FUN_4a08df78();
    if (iVar6 != 0) {
      uVar4 = FUN_4a16bdcc(auStack_70,local_58);
      FUN_4a0fc4b0(uVar4,1);
      FUN_4a16bef4(auStack_70);
    }
  }
  uVar4 = FUN_4a16bdcc(auStack_44,local_58);
  FUN_4a0fc4b0(uVar4,0x83c);
  FUN_4a16bef4(auStack_44);
  if (local_4c != (int *)0x0) {
    (**(code **)(*local_4c + 0xc))(local_4c);
  }
  (**(code **)(*(int *)(param_1 + 0xfc) + 0x1c))((int *)(param_1 + 0xfc));
  *(undefined4 *)(param_1 + 0x104) = local_50;
  *(int **)(param_1 + 0x108) = local_4c;
  iVar6 = FUN_4a16be24(auStack_44,0xc);
  uVar4 = *(undefined4 *)(iVar6 + 8);
  piVar7 = *(int **)(iVar6 + 0xc);
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0xc))(piVar7);
  }
  (**(code **)(local_58[0] + 0x1c))(local_58);
  local_50 = uVar4;
  local_4c = piVar7;
  FUN_4a16bef4(auStack_44);
  uVar4 = FUN_4a16bdcc(auStack_44,local_58);
  FUN_4a0ff4b8(uVar4,0x827);
  FUN_4a16bef4(auStack_44);
  uVar4 = FUN_4a16bdcc(auStack_44,local_58);
  FUN_4a0fc4b0(uVar4,0x828);
  FUN_4a16bef4(auStack_44);
  uVar4 = FUN_4a16bdcc(auStack_44,local_58);
  FUN_4a0fc4b0(uVar4,0x84d);
  FUN_4a16bef4(auStack_44);
  uVar4 = FUN_4a16bdcc(auStack_44,local_58);
  FUN_4a0fc4b0(uVar4,0x855);
  FUN_4a16bef4(auStack_44);
  uVar4 = FUN_4a16bdcc(auStack_44,local_58);
  FUN_4a0fc4b0(uVar4,0x857);
  FUN_4a16bef4(auStack_44);
  uVar4 = FUN_4a16bdcc(auStack_44,local_58);
  FUN_4a0fc4b0(uVar4,0x859);
  FUN_4a16bef4(auStack_44);
  uVar4 = FUN_4a16bdcc(auStack_44,local_58);
  FUN_4a0fc4b0(uVar4,0x860);
  FUN_4a16bef4(auStack_44);
  piVar7 = local_4c;
  uVar4 = local_50;
  if (local_4c != (int *)0x0) {
    (**(code **)(*local_4c + 0xc))(local_4c);
  }
  (**(code **)(*(int *)(param_1 + 0x124) + 0x1c))((int *)(param_1 + 0x124));
  *(undefined4 *)(param_1 + 300) = uVar4;
  *(int **)(param_1 + 0x130) = piVar7;
  if (*(int *)puVar2 == 0) {
    iVar6 = 5;
  }
  else {
    iVar6 = 3;
  }
  iVar6 = FUN_4a16be24(auStack_44,iVar6 + 5);
  uVar4 = *(undefined4 *)(iVar6 + 8);
  piVar7 = *(int **)(iVar6 + 0xc);
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0xc))(piVar7);
  }
  (**(code **)(local_58[0] + 0x1c))(local_58);
  local_50 = uVar4;
  local_4c = piVar7;
  FUN_4a16bef4(auStack_44);
  piVar7 = local_4c;
  uVar4 = local_50;
  if (local_4c != (int *)0x0) {
    (**(code **)(*local_4c + 0xc))(local_4c);
  }
  (**(code **)(*(int *)(param_1 + 0x138) + 0x1c))((int *)(param_1 + 0x138));
  *(undefined4 *)(param_1 + 0x140) = uVar4;
  *(int **)(param_1 + 0x144) = piVar7;
  uVar4 = FUN_4a16bdcc(auStack_44,local_58);
  FUN_4a0ff4b8(uVar4,0x828);
  FUN_4a16bef4(auStack_44);
  uVar4 = FUN_4a16bdcc(auStack_44,local_58);
  FUN_4a0fc4b0(uVar4,0x828);
  FUN_4a16bef4(auStack_44);
  if (*(int *)puVar2 == 0) {
    uVar4 = FUN_4a16bdcc(auStack_70,local_58);
    FUN_4a0fc4b0(uVar4,0x843);
    FUN_4a16bef4(auStack_70);
    if (*(int *)puVar2 == 0) {
      uVar4 = FUN_4a16bdcc(auStack_70,local_58);
      FUN_4a0fc4b0(uVar4,0x845);
      FUN_4a16bef4(auStack_70);
    }
  }
  uVar4 = FUN_4a16bdcc(auStack_44,local_58);
  FUN_4a0fc4b0(uVar4,0x847);
  FUN_4a16bef4(auStack_44);
  *(undefined4 *)(param_1 + 0xf8) = 0xffffffff;
  FUN_4a16bef4(local_58);
  return;
}



// Address: 4a0cd2cc

void FUN_4a0cd2cc(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_20 [12];
  int local_14;
  
  FUN_4a16be24(auStack_20,3);
  iVar3 = 0;
  if (local_14 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(local_14 + 8);
  }
  *(undefined4 *)(iVar1 + 4) = 0;
  if (local_14 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(local_14 + 8);
  }
  *puVar2 = 0x80000000;
  if (local_14 != 0) {
    iVar3 = *(int *)(local_14 + 8);
  }
  *(undefined4 *)(iVar3 + 8) = param_2;
  (**(code **)(*param_1 + 0x20))(param_1,0xb,auStack_20);
  FUN_4a16bef4(auStack_20);
  return;
}



// Address: 4a0cd358

void FUN_4a0cd358(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *(int *)(param_1 + 0x54);
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      if (*(int *)(*(int *)(param_1 + 0x58) + iVar1 * 4) == param_2) goto LAB_4a0cd390;
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  iVar1 = -1;
LAB_4a0cd390:
  if (iVar1 != -1) {
    iVar1 = iVar1 + 1;
    if (iVar1 < iVar2) {
      do {
        piVar4 = *(int **)(*(int *)(param_1 + 0x58) + iVar1 * 4);
        piVar3 = *(int **)(*(int *)(param_1 + 0x58) + (iVar1 + -1) * 4);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0xc))();
        }
        *(int **)(*(int *)(param_1 + 0x58) + (iVar1 + -1) * 4) = piVar4;
        if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 8))(piVar3), iVar2 != 0)) {
          (**(code **)(*piVar3 + 4))(piVar3);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x54));
    }
    iVar1 = *(int *)(param_1 + 0x54) + -1;
    piVar3 = *(int **)(*(int *)(param_1 + 0x58) + iVar1 * 4);
    *(undefined4 *)(*(int *)(param_1 + 0x58) + iVar1 * 4) = 0;
    if ((piVar3 != (int *)0x0) && (iVar1 = (**(code **)(*piVar3 + 8))(piVar3), iVar1 != 0)) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1;
    return;
  }
  return;
}



// Address: 4a0cd480

undefined4 FUN_4a0cd480(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_98 [12];
  int local_8c;
  undefined1 auStack_84 [20];
  undefined1 auStack_70 [20];
  undefined1 auStack_5c [8];
  undefined4 local_54;
  int *local_50;
  undefined1 auStack_48 [20];
  int iStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  iStack_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  FUN_4a0fb3b0(auStack_5c,*(undefined4 *)(param_1 + 0x20),param_2);
  iVar9 = 0;
  puVar3 = (undefined4 *)FUN_4a0c6bc0(auStack_48);
  puVar1 = PTR_PTR_4a0cd664;
  *puVar3 = PTR_PTR_4a0cd664;
  puVar3[2] = local_54;
  puVar3[3] = local_50;
  if (local_50 != (int *)0x0) {
    (**(code **)(*local_50 + 0xc))();
  }
  puVar2 = PTR_PTR_4a0cd668;
  iVar8 = 0;
  iVar7 = 0;
  *puVar3 = PTR_PTR_4a0cd668;
  if (0 < (int)puVar3[2]) {
    do {
      iVar4 = puVar3[3];
      if (iVar4 == 0) {
        iVar4 = 0;
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 8);
      }
      iVar4 = FUN_4a13ef24(param_1,(int)*(short *)(iVar6 + iVar7 * 2),
                           (int)*(short *)(iVar4 + (iVar7 + 1) * 2));
      iVar8 = iVar8 + iVar4;
      iVar7 = iVar7 + 2;
    } while (iVar7 < (int)puVar3[2]);
  }
  FUN_4a16c1a0(auStack_48);
  if (iVar8 == 0) {
    FUN_4a16bdcc(auStack_98,param_1 + 0xd0);
    if (local_8c == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = *(undefined4 **)(local_8c + 8);
    }
    *puVar3 = 0;
    if (local_8c == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(local_8c + 8);
    }
    *(undefined4 *)(iVar7 + 4) = 0;
    if (local_8c == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(local_8c + 8);
    }
    *(undefined4 *)(iVar7 + 8) = local_2c;
    if (local_8c == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(local_8c + 8);
    }
    *(undefined4 *)(iVar7 + 0xc) = 0;
    uVar5 = FUN_4a16bdcc(auStack_84,auStack_98);
    puVar3 = (undefined4 *)FUN_4a0c6bc0(auStack_70);
    *puVar3 = puVar1;
    puVar3[2] = local_54;
    puVar3[3] = local_50;
    if (local_50 != (int *)0x0) {
      (**(code **)(*local_50 + 0xc))();
    }
    *puVar3 = puVar2;
    FUN_4a0cf0cc(param_1,0,puVar3,uVar5);
    FUN_4a16c1a0(auStack_70);
    FUN_4a16bef4(auStack_84);
    if (local_8c != 0) {
      iVar9 = *(int *)(local_8c + 8);
    }
    uVar5 = *(undefined4 *)(iVar9 + 0xc);
    FUN_4a16bef4(auStack_98);
    FUN_4a16c1a0(auStack_5c);
    return uVar5;
  }
  FUN_4a16c1a0(auStack_5c);
  return param_4;
}



// Address: 4a0cd66c

int FUN_4a0cd66c(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar1 = param_2 - param_1;
  iVar2 = iVar1 * param_3 >> (param_4 & 0xff);
  if (iVar2 == 0) {
    iVar2 = FUN_4a0d4bb8();
  }
  else {
    iVar3 = param_1 + ((param_2 - param_1) * param_3 >> (param_4 & 0xff));
    if (iVar1 < 1) {
      if (-1 < iVar1 || param_2 <= iVar3) goto LAB_4a0cd6c4;
    }
    else if (iVar3 <= param_2) goto LAB_4a0cd6c4;
    iVar2 = iVar1;
  }
LAB_4a0cd6c4:
  return param_1 + iVar2;
}



// Address: 4a0cd6d4

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

void FUN_4a0cd6d4(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_4a041910(1);
  puVar1 = PTR_DAT_4a0cd788;
  switch(*(undefined4 *)(param_1 + 0xf8)) {
  case 0:
  case 1:
  case 3:
  case 5:
    FUN_4a08b5ec(*(undefined4 *)(param_1 + 0x164),param_2);
    break;
  case 2:
  case 4:
  case 6:
  case 7:
  case 10:
    FUN_4a0bbb28(*(undefined4 *)PTR_DAT_4a0cd788);
    FUN_4a08a39c(*(undefined4 *)(param_1 + 0x168),param_2);
    FUN_4a0bbcb4(*(undefined4 *)puVar1);
    break;
  case 0xffffffff:
    switchD_4a11cc8c::default(0,s_no_shared_menu_4a0cd778);
  }
  puVar1 = PTR_DAT_4a041a9c;
  iVar2 = 0;
  if (*(int *)PTR_DAT_4a041a9c != 0) {
    iVar2 = *(int *)(PTR_DAT_4a041a9c + 4);
  }
  if (*(int *)PTR_DAT_4a041a9c != 0 && iVar2 != 0) {
    *(undefined4 *)(PTR_DAT_4a041a9c + 0x28) = 0;
    iVar2 = *(int *)(PTR_DAT_4a041a9c + 0x38);
    if (*(int *)(PTR_DAT_4a041a9c + 0x1c) != 0) {
      *(int *)(puVar1 + 8) = *(int *)(PTR_DAT_4a041a9c + 0x34) + *(int *)(puVar1 + 0x3c);
      *(int *)(puVar1 + 0xc) = iVar2 + *(int *)(puVar1 + 0x40);
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
      FUN_4a150d7c((*(int *)(puVar1 + 0x10) + *(int *)(puVar1 + 0x18)) - *(int *)(puVar1 + 0x3c) / 2
                   ,-(*(int *)(puVar1 + 0x40) / 2));
      *(undefined4 *)(puVar1 + 0x24) = 1;
      thunk_FUN_4a150140(0xc11);
      FUN_4a1507ec(*(undefined4 *)(puVar1 + 0x34),0,*(undefined4 *)(puVar1 + 0x34),
                   *(undefined4 *)(puVar1 + 0x38));
      *(undefined4 *)(puVar1 + 0x24) = 0;
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a0419cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a0cd78c

void FUN_4a0cd78c(void)

{
  return;
}



// Address: 4a0cd790

void FUN_4a0cd790(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 0x40) = param_2;
  }
  return;
}



// Address: 4a0cd7a0

void FUN_4a0cd7a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_4a089eb4(*(undefined4 *)(param_1 + 0x168),param_2,param_3,0x40,0x20);
  return;
}



// Address: 4a0cd7c0

/* WARNING: Removing unreachable block (ram,0x4a0faea0) */
/* WARNING: Removing unreachable block (ram,0x4a0fae9c) */
/* WARNING: Removing unreachable block (ram,0x4a0faebc) */
/* WARNING: Removing unreachable block (ram,0x4a0faf08) */

void FUN_4a0cd7c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x168);
  iVar1 = FUN_4a0ff494();
  *(undefined4 *)(iVar3 + 0x78) = 1;
  *(undefined4 *)(iVar3 + 0x94) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x98) = 4;
  *(undefined4 *)(iVar3 + 0x90) = param_3;
  *(undefined4 *)(iVar3 + 0x9c) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0xa0) = 0xffffffff;
  FUN_4a09f974(iVar1 + 0x128,0x60);
  uVar2 = FUN_4a171e1c();
  *(undefined4 *)(iVar3 + 0xa4) = uVar2;
  *(undefined4 *)(iVar3 + 0xa8) = 200;
  FUN_4a08a03c(iVar3,param_2,0);
  *(undefined4 *)(iVar3 + 0x74) = 0;
  *(undefined4 *)(iVar3 + 0x7c) = 2;
  *(undefined4 *)(iVar3 + 0x80) = 0;
                    /* WARNING: Could not recover jumptable at 0x4a0faeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_caseD_2_4a0faec8)();
  return;
}



// Address: 4a0cd7cc

void FUN_4a0cd7cc(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = *(int *)(param_1 + 0x20);
  iVar8 = iVar7 + 0x278;
  uVar2 = FUN_4a13fa90(*(undefined4 *)(param_1 + 0x24));
  uVar3 = FUN_4a06c410(iVar8);
  FUN_4a06cbe8(iVar8,0xa4f);
  uVar4 = FUN_4a145b3c(iVar7);
  FUN_4a06c378(iVar8,uVar4);
  FUN_4a06cbe8(iVar8,0x803);
  FUN_4a06c378(iVar8,uVar2);
  FUN_4a06b694(iVar8,0xfffffff7,uVar3);
  iVar6 = 0;
  if (*(int *)(param_1 + 0xf0) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(param_1 + 0xf0) + 8);
  }
  *(undefined4 *)(iVar5 + 4) = 0xfffffff7;
  uVar3 = FUN_4a06c410(iVar8);
  FUN_4a06cbe8(iVar8,0xa4e);
  uVar4 = FUN_4a145c7c(iVar7);
  FUN_4a06c378(iVar8,uVar4);
  FUN_4a06cbe8(iVar8,0x803);
  FUN_4a06c378(iVar8,uVar2);
  FUN_4a06b694(iVar8,0xfffffff8,uVar3);
  if (*(int *)(param_1 + 0xf0) != 0) {
    iVar6 = *(int *)(*(int *)(param_1 + 0xf0) + 8);
  }
  *(undefined4 *)(iVar6 + 8) = 0xfffffff8;
  puVar1 = PTR_DAT_4a0cd8fc;
  FUN_4a0bbb28(*(undefined4 *)PTR_DAT_4a0cd8fc);
  FUN_4a089f50(*(undefined4 *)(param_1 + 0x168),param_2,1);
  iVar6 = *(int *)puVar1;
  *(undefined1 *)(*(int *)PTR_DAT_4a0bbce8 + 0xc) = 0;
  host_glMatrixMode_arm(0x1700);
  FUN_4a150724();
  *(undefined4 *)(iVar6 + 8) = 0x3f800000;
  return;
}



// Address: 4a0cd900

void FUN_4a0cd900(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_2c [12];
  int local_20;
  
  iVar3 = param_1[0x23] + param_2;
  if (3599999 < param_1[0x23] + param_2) {
    iVar3 = 3600000;
  }
  param_1[0x23] = iVar3;
  iVar2 = 0;
  switch(param_1[0x21]) {
  case 1:
    if (500 < iVar3) {
      FUN_4a0ce310(param_1,3);
    }
    break;
  case 3:
    FUN_4a16be24(auStack_2c,10);
    if (local_20 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(local_20 + 8);
    }
    *(int *)(iVar3 + 4) = param_1[0x26];
    if (local_20 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(local_20 + 8);
    }
    *(int *)(iVar3 + 8) = param_1[0x27];
    if (local_20 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(local_20 + 8);
    }
    *(int *)(iVar3 + 0x14) = param_1[0x28];
    if (local_20 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(local_20 + 8);
    }
    *(int *)(iVar3 + 0x18) = param_1[0x29];
    if (local_20 != 0) {
      iVar2 = *(int *)(local_20 + 8);
    }
    *(int *)(iVar2 + 0x24) = param_2;
    (**(code **)(*param_1 + 0x20))(param_1,5,auStack_2c);
    param_1[0x26] = param_1[0x28];
    param_1[0x27] = param_1[0x29];
    FUN_4a16bef4(auStack_2c);
    break;
  case 4:
    if (500 < iVar3) {
      param_1[0x26] = param_1[0x28];
      param_1[0x27] = param_1[0x29];
      param_1[0x2a] = param_1[0x2c];
      param_1[0x2b] = param_1[0x2d];
      FUN_4a0ce310(param_1,6);
    }
    break;
  case 6:
    FUN_4a16be24(auStack_2c,10);
    if (local_20 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(local_20 + 8);
    }
    *(int *)(iVar3 + 4) = param_1[0x26];
    if (local_20 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(local_20 + 8);
    }
    *(int *)(iVar3 + 8) = param_1[0x27];
    if (local_20 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(local_20 + 8);
    }
    *(int *)(iVar3 + 0x14) = param_1[0x28];
    if (local_20 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(local_20 + 8);
    }
    *(int *)(iVar3 + 0x18) = param_1[0x29];
    if (local_20 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(local_20 + 8);
    }
    *(int *)(iVar3 + 0xc) = param_1[0x2a];
    if (local_20 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(local_20 + 8);
    }
    *(int *)(iVar3 + 0x10) = param_1[0x2b];
    if (local_20 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(local_20 + 8);
    }
    *(int *)(iVar3 + 0x1c) = param_1[0x2c];
    if (local_20 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(local_20 + 8);
    }
    *(int *)(iVar3 + 0x20) = param_1[0x2d];
    if (local_20 != 0) {
      iVar2 = *(int *)(local_20 + 8);
    }
    *(int *)(iVar2 + 0x24) = param_2;
    (**(code **)(*param_1 + 0x20))(param_1,9,auStack_2c);
    param_1[0x26] = param_1[0x28];
    param_1[0x27] = param_1[0x29];
    param_1[0x2a] = param_1[0x2c];
    param_1[0x2b] = param_1[0x2d];
    FUN_4a16bef4(auStack_2c);
  }
  iVar2 = param_1[0x15];
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      piVar4 = *(int **)(param_1[0x16] + iVar3 * 4);
      iVar1 = FUN_4a134a50(piVar4,1);
      if (iVar1 != 0) {
        (**(code **)(*piVar4 + 0x20))(piVar4,param_2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
    return;
  }
  return;
}



// Address: 4a0cdbe0

void FUN_4a0cdbe0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x40) == param_2) {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}



// Address: 4a0cdbf4

undefined4 FUN_4a0cdbf4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_4a1351bc(*(int *)(param_1 + 0x20) + 0x278,0x802);
  iVar2 = FUN_4a13dfe4(uVar1,0);
  if (iVar2 == 0x42) {
    return 0x210;
  }
  if (iVar2 != 0x43) {
    if (iVar2 == 0x44) {
      uVar1 = 0x20d;
    }
    else {
      uVar1 = 0x20f;
    }
    return uVar1;
  }
  return 0x20c;
}



// Address: 4a0cdc50

void FUN_4a0cdc50(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_4a0cdc88;
  FUN_4a0bbb28(*(undefined4 *)PTR_DAT_4a0cdc88);
  FUN_4a089f50(*(undefined4 *)(param_1 + 0x168),param_2,param_3);
  iVar2 = *(int *)puVar1;
  *(undefined1 *)(*(int *)PTR_DAT_4a0bbce8 + 0xc) = 0;
  host_glMatrixMode_arm(0x1700);
  FUN_4a150724();
  *(undefined4 *)(iVar2 + 8) = 0x3f800000;
  return;
}



// Address: 4a0ce0a8

void FUN_4a0ce0a8(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_4a0ce0d8;
  FUN_4a0bbb28(*(undefined4 *)PTR_DAT_4a0ce0d8);
  FUN_4a08a39c(*(undefined4 *)(param_1 + 0x168),param_2);
  iVar2 = *(int *)puVar1;
  *(undefined1 *)(*(int *)PTR_DAT_4a0bbce8 + 0xc) = 0;
  host_glMatrixMode_arm(0x1700);
  FUN_4a150724();
  *(undefined4 *)(iVar2 + 8) = 0x3f800000;
  return;
}



// Address: 4a0ce310

void FUN_4a0ce310(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_24 [12];
  int local_18;
  
  iVar1 = param_1[0x21];
  iVar3 = 0;
  param_1[0x22] = iVar1;
  param_1[0x23] = 0;
  param_1[0x21] = param_2;
  if (iVar1 == 3) {
    FUN_4a16be24(auStack_24,10);
    iVar1 = 0;
    if (local_18 != 0) {
      iVar1 = *(int *)(local_18 + 8);
    }
    iVar2 = 0;
    if (local_18 == 0) {
      iVar1 = 0;
    }
    *(int *)(iVar1 + 4) = param_1[0x28];
    if (local_18 != 0) {
      iVar2 = *(int *)(local_18 + 8);
    }
    *(int *)(iVar2 + 8) = param_1[0x29];
    (**(code **)(*param_1 + 0x20))(param_1,6,auStack_24);
    FUN_4a16bef4(auStack_24);
  }
  else if (iVar1 == 6) {
    FUN_4a16be24(auStack_24,10);
    iVar1 = 0;
    if (local_18 != 0) {
      iVar1 = *(int *)(local_18 + 8);
    }
    iVar2 = 0;
    if (local_18 == 0) {
      iVar1 = 0;
    }
    *(int *)(iVar1 + 4) = param_1[0x28];
    if (local_18 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(local_18 + 8);
    }
    *(int *)(iVar1 + 8) = param_1[0x29];
    if (local_18 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(local_18 + 8);
    }
    *(int *)(iVar1 + 4) = param_1[0x2c];
    if (local_18 != 0) {
      iVar2 = *(int *)(local_18 + 8);
    }
    *(int *)(iVar2 + 8) = param_1[0x2d];
    (**(code **)(*param_1 + 0x20))(param_1,10,auStack_24);
    FUN_4a16bef4(auStack_24);
  }
  switch(param_2) {
  case 2:
    FUN_4a16be24(auStack_24,10);
    if (local_18 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(local_18 + 8);
    }
    *(int *)(iVar1 + 4) = param_1[0x28];
    if (local_18 != 0) {
      iVar3 = *(int *)(local_18 + 8);
    }
    *(int *)(iVar3 + 8) = param_1[0x29];
    (**(code **)(*param_1 + 0x20))(param_1,3,auStack_24);
    FUN_4a0ce310(param_1,0);
    FUN_4a0fd714(param_1[8]);
    FUN_4a16bef4(auStack_24);
    break;
  case 3:
    FUN_4a16be24(auStack_24,10);
    if (local_18 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(local_18 + 8);
    }
    *(int *)(iVar1 + 4) = param_1[0x28];
    if (local_18 != 0) {
      iVar3 = *(int *)(local_18 + 8);
    }
    *(int *)(iVar3 + 8) = param_1[0x29];
    (**(code **)(*param_1 + 0x20))(param_1,4,auStack_24);
    FUN_4a16bef4(auStack_24);
    return;
  case 5:
    FUN_4a16be24(auStack_24,10);
    if (local_18 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(local_18 + 8);
    }
    *(int *)(iVar1 + 4) = param_1[0x28];
    if (local_18 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(local_18 + 8);
    }
    *(int *)(iVar1 + 8) = param_1[0x29];
    if (local_18 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(local_18 + 8);
    }
    *(int *)(iVar1 + 0xc) = param_1[0x2c];
    if (local_18 != 0) {
      iVar3 = *(int *)(local_18 + 8);
    }
    *(int *)(iVar3 + 0x10) = param_1[0x2d];
    (**(code **)(*param_1 + 0x20))(param_1,7,auStack_24);
    FUN_4a0ce310(param_1,0);
    FUN_4a0fd714(param_1[8]);
    FUN_4a16bef4(auStack_24);
    return;
  case 6:
    FUN_4a16be24(auStack_24,10);
    if (local_18 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(local_18 + 8);
    }
    *(int *)(iVar1 + 4) = param_1[0x28];
    if (local_18 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(local_18 + 8);
    }
    *(int *)(iVar1 + 8) = param_1[0x29];
    if (local_18 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(local_18 + 8);
    }
    *(int *)(iVar1 + 0xc) = param_1[0x2c];
    if (local_18 != 0) {
      iVar3 = *(int *)(local_18 + 8);
    }
    *(int *)(iVar3 + 0x10) = param_1[0x2d];
    (**(code **)(*param_1 + 0x20))(param_1,8,auStack_24);
    FUN_4a16bef4(auStack_24);
    return;
  }
  return;
}



// Address: 4a0ce690

/* WARNING: Removing unreachable block (ram,0x4a0fd570) */
/* WARNING: Removing unreachable block (ram,0x4a0fd588) */
/* WARNING: Removing unreachable block (ram,0x4a0fd5ac) */
/* WARNING: Removing unreachable block (ram,0x4a0fd5cc) */
/* WARNING: Removing unreachable block (ram,0x4a0fd5fc) */
/* WARNING: Removing unreachable block (ram,0x4a0fd618) */
/* WARNING: Removing unreachable block (ram,0x4a0fd634) */
/* WARNING: Removing unreachable block (ram,0x4a0fd660) */
/* WARNING: Removing unreachable block (ram,0x4a0fd6d0) */
/* WARNING: Removing unreachable block (ram,0x4a0fd6f0) */
/* WARNING: Removing unreachable block (ram,0x4a0fd64c) */
/* WARNING: Removing unreachable block (ram,0x4a0fd65c) */
/* WARNING: Removing unreachable block (ram,0x4a0fd67c) */
/* WARNING: Removing unreachable block (ram,0x4a0fd694) */
/* WARNING: Removing unreachable block (ram,0x4a0fd68c) */
/* WARNING: Removing unreachable block (ram,0x4a0fd614) */
/* WARNING: Removing unreachable block (ram,0x4a0fd5e8) */
/* WARNING: Removing unreachable block (ram,0x4a0fd5a4) */
/* WARNING: Removing unreachable block (ram,0x4a0fd5c4) */
/* WARNING: Removing unreachable block (ram,0x4a0fd5e0) */
/* WARNING: Removing unreachable block (ram,0x4a0fd5f8) */
/* WARNING: Removing unreachable block (ram,0x4a0fd630) */
/* WARNING: Removing unreachable block (ram,0x4a0fd69c) */
/* WARNING: Removing unreachable block (ram,0x4a0fd6b0) */
/* WARNING: Removing unreachable block (ram,0x4a0fd6b8) */
/* WARNING: Removing unreachable block (ram,0x4a0fd6bc) */
/* WARNING: Removing unreachable block (ram,0x4a0fd6cc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_4a0ce690(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  int iVar9;
  uint *puVar10;
  undefined4 uVar11;
  uint *puVar12;
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar13;
  undefined8 uVar14;
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  int aiStack_34 [2];
  undefined4 uStack_2c;
  int *piStack_28;
  
  iVar2 = *(int *)(param_1 + 0x20);
  puVar10 = (uint *)0x0;
  if (param_2 == 0xb) {
    if (*(int *)(param_3 + 0xc) == 0) {
      puVar12 = (uint *)0x0;
    }
    else {
      puVar12 = *(uint **)(*(int *)(param_3 + 0xc) + 8);
    }
    if ((*puVar12 & 6) == 0) goto LAB_4a0ce6d0;
    goto LAB_4a0ce940;
  }
LAB_4a0ce6d0:
  switch(*(undefined4 *)(param_1 + 0xf8)) {
  case 0:
  case 1:
  case 3:
  case 5:
    if (param_2 != 0xb) {
      return iVar2;
    }
    iVar2 = *(int *)(param_3 + 0xc);
    if (iVar2 == 0) {
      puVar12 = (uint *)0x0;
    }
    else {
      puVar12 = *(uint **)(iVar2 + 8);
    }
    if ((*puVar12 & 0x80000000) == 0) {
      return iVar2;
    }
    if (iVar2 != 0) {
      puVar10 = *(uint **)(iVar2 + 8);
    }
    uVar7 = puVar10[2];
    iVar2 = uVar7 - 0x849;
    if (uVar7 == 0x849) {
      iVar2 = FUN_4a0fd380(*(undefined4 *)(param_1 + 0x20),0x849);
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 0x20);
        uVar8 = FUN_4a0941ec();
        FUN_4a094ddc(uVar8,0x849);
        uVar8 = FUN_4a0941ec();
        FUN_4a09403c(uVar8,1);
        thunk_FUN_4a161570(0x24);
        uVar8 = FUN_4a0c2818();
        uVar11 = thunk_FUN_4a161570(0xc);
        piVar4 = (int *)FUN_4a0c0198(uVar11,uVar8);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0xc))(piVar4);
        }
        FUN_4a0bfed4(piVar4,0x8b);
        FUN_4a0bfed4(piVar4,7);
        uVar11 = FUN_4a085684(*(undefined4 *)(iVar2 + 0x260));
        FUN_4a0bfd84(piVar4,uVar11);
        uVar11 = FUN_4a0855d8(*(undefined4 *)(iVar2 + 0x260));
        FUN_4a0bfd84(piVar4,uVar11);
        FUN_4a0bfe0c(piVar4,*(undefined1 *)(*(int *)(iVar2 + 0x264) + 0xd));
        FUN_4a0bfe0c(piVar4,*(undefined1 *)(iVar2 + 0x494));
        FUN_4a0bfe0c(piVar4,*(undefined1 *)(iVar2 + 0x495));
        FUN_4a0bfe0c(piVar4,*(undefined1 *)(iVar2 + 0x497));
        if (*(int *)PTR_DAT_4a0fe1d4 != 0) {
          FUN_4a0bfe0c(piVar4,*(undefined1 *)(iVar2 + 0x498));
        }
        FUN_4a0bfe0c(piVar4,*(undefined1 *)(iVar2 + 0x499));
        FUN_4a0941ec();
        uVar11 = FUN_4a0953f4();
        FUN_4a0bfe0c(piVar4,uVar11);
        FUN_4a0bfe0c(piVar4,*(undefined1 *)(iVar2 + 0x4c0));
        FUN_4a0bfe0c(piVar4,*(undefined1 *)(iVar2 + 0x4c1));
        FUN_4a0c011c(piVar4,extraout_r1,*(undefined4 *)(iVar2 + 0x4c8),
                     *(undefined4 *)(iVar2 + 0x4cc));
        FUN_4a0c011c(piVar4,extraout_r1_00,*(undefined4 *)(iVar2 + 0x4d0),
                     *(undefined4 *)(iVar2 + 0x4d4));
        FUN_4a0c011c(piVar4,extraout_r1_01,*(undefined4 *)(iVar2 + 0x4d8),
                     *(undefined4 *)(iVar2 + 0x4dc));
        FUN_4a0c011c(piVar4,extraout_r1_02,*(undefined4 *)(iVar2 + 0x4e0),
                     *(undefined4 *)(iVar2 + 0x4e4));
        FUN_4a0c0110(piVar4,*(uint *)(iVar2 + 0x49c) & 0xff);
        iVar3 = 0;
        do {
          if (*(int *)(iVar2 + 0x514) == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = *(int *)(*(int *)(iVar2 + 0x514) + 8);
          }
          FUN_4a0bff24(piVar4,*(undefined4 *)(iVar9 + iVar3 * 4));
          if (*(int *)(iVar2 + 0x4b0) == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = *(int *)(*(int *)(iVar2 + 0x4b0) + 8);
          }
          FUN_4a0bfe0c(piVar4,*(undefined1 *)(iVar9 + iVar3));
          iVar3 = iVar3 + 1;
        } while (iVar3 != 7);
        FUN_4a0bfed4(piVar4,0x8b);
        FUN_4a0c254c(&uStack_2c,uVar8);
        iVar3 = (**(code **)(*piVar4 + 0x2c))(piVar4);
        *(bool *)(iVar2 + 0x34) = iVar3 != 1 || *(char *)(iVar2 + 0x34) != '\0';
        if (*(int *)(iVar2 + 0x38) == 0) {
          uVar8 = FUN_4a16b5a0(auStack_40,&uStack_2c);
          uVar11 = thunk_FUN_4a161570(0x14);
          uVar11 = FUN_4a0c707c(uVar11,PTR_s_sim3set_4a0fe1dc);
          FUN_4a0ff2ac(iVar2,uVar11,uVar8);
          FUN_4a16b6c0(auStack_40);
        }
        else {
          uVar8 = FUN_4a16b5a0(auStack_40,&uStack_2c);
          uVar11 = thunk_FUN_4a161570(0x14);
          uVar11 = FUN_4a0c707c(uVar11,PTR_s_sim3set_demo_4a0fe1d8);
          FUN_4a0ff2ac(iVar2,uVar11,uVar8);
          FUN_4a16b6c0(auStack_40);
        }
        if ((piVar4 != (int *)0x0) && (iVar3 = (**(code **)(*piVar4 + 8))(piVar4), iVar3 != 0)) {
          (**(code **)(*piVar4 + 4))(piVar4);
        }
        iVar3 = 1 - (uint)*(byte *)(iVar2 + 0x34);
        if (1 < *(byte *)(iVar2 + 0x34)) {
          iVar3 = 0;
        }
        FUN_4a16b6c0(&uStack_2c);
        return iVar3;
      }
      uVar8 = 6;
    }
    else if ((int)uVar7 < 0x84a) {
      iVar2 = uVar7 - 0x843;
      if (uVar7 == 0x843) {
        *(undefined4 *)(param_1 + 0x16c) = 0x844;
        uVar8 = 10;
      }
      else if ((int)uVar7 < 0x844) {
        if (uVar7 == 1) {
          uVar8 = 9;
        }
        else {
          iVar2 = uVar7 - 0x828;
          if (iVar2 == 0) {
            if ((*(int *)(param_1 + 0xf8) == 5) || (*(int *)PTR_DAT_4a0ce30c != 0)) {
              uVar8 = *(undefined4 *)(param_1 + 0x168);
              uVar11 = 0x828;
              iVar2 = 0x840;
              goto LAB_4a0ce2e0;
            }
            uVar8 = 5;
          }
          else {
            if (iVar2 != 0x14) {
              return iVar2;
            }
            uVar8 = 2;
          }
        }
      }
      else if (iVar2 == 2) {
        *(undefined4 *)(param_1 + 0x16c) = 0x846;
        uVar8 = 10;
      }
      else {
        if (iVar2 != 4) {
          return iVar2;
        }
        *(undefined4 *)(param_1 + 0x16c) = 0x848;
        uVar8 = 10;
      }
    }
    else {
      if (iVar2 == 0xe) {
        uVar14 = host_s3eAccelerometerGetInt_arm(0);
        iVar2 = (int)((ulonglong)uVar14 >> 0x20);
        bVar13 = (int)uVar14 != 0;
        if (bVar13) {
          iVar2 = 0x58;
        }
        uVar8 = *(undefined4 *)(param_1 + 0x168);
        uVar11 = 0x857;
        if (bVar13) {
          iVar2 = iVar2 + 0x800;
        }
        else {
          iVar2 = 0xcd4;
        }
      }
      else if (iVar2 < 0xf) {
        if (iVar2 == 4) {
          uVar11 = 0x84d;
          uVar8 = *(undefined4 *)(param_1 + 0x168);
          iVar2 = 0x852;
        }
        else {
          if (iVar2 != 0xc) {
            return iVar2;
          }
          uVar14 = host_s3eAccelerometerGetInt_arm(0);
          iVar2 = (int)((ulonglong)uVar14 >> 0x20);
          bVar13 = (int)uVar14 != 0;
          uVar11 = 0x855;
          if (bVar13) {
            iVar2 = 0x56;
          }
          uVar8 = *(undefined4 *)(param_1 + 0x168);
          if (bVar13) {
            iVar2 = iVar2 + 0x800;
          }
          else {
            iVar2 = 0xcd5;
          }
        }
      }
      else if (iVar2 == 0x10) {
        uVar11 = 0x859;
        uVar8 = *(undefined4 *)(param_1 + 0x168);
        iVar2 = 0x85a;
      }
      else {
        if (iVar2 != 0x17) {
          return iVar2;
        }
        uVar11 = 0x860;
        uVar8 = *(undefined4 *)(param_1 + 0x168);
        iVar2 = 0x861;
      }
LAB_4a0ce2e0:
      FUN_4a08a31c(uVar8,iVar2,uVar11,4);
      uVar8 = 4;
    }
    break;
  case 2:
    if (param_2 != 0xb) {
      return iVar2;
    }
    iVar3 = *(int *)(param_3 + 0xc);
    if (iVar3 == 0) {
      puVar12 = (uint *)0x0;
    }
    else {
      puVar12 = *(uint **)(iVar3 + 8);
    }
    if ((*puVar12 & 0x20) == 0) {
      if (iVar3 != 0) {
        puVar10 = *(uint **)(iVar3 + 8);
      }
      if ((*puVar10 & 0x40) == 0) {
        return 0;
      }
    }
    else {
      FUN_4a0941ec();
      FUN_4a0949d8();
      FUN_4a0fd0dc(iVar2);
      FUN_4a0fd02c(iVar2);
      FUN_4a0fdf10(iVar2);
      FUN_4a0fd058(iVar2);
      FUN_4a0fca00(iVar2);
    }
    goto LAB_4a0ce940;
  case 6:
    if (param_2 != 0xb) {
      return iVar2;
    }
    iVar3 = *(int *)(param_3 + 0xc);
    if (iVar3 == 0) {
      puVar12 = (uint *)0x0;
    }
    else {
      puVar12 = *(uint **)(iVar3 + 8);
    }
    if ((*puVar12 & 0x20) == 0) {
      if (iVar3 != 0) {
        puVar10 = *(uint **)(iVar3 + 8);
      }
      if ((*puVar10 & 0x40) == 0) {
        return 0;
      }
      uVar8 = 5;
    }
    else {
      FUN_4a0fd564(iVar2,0x849,0);
      uVar8 = 7;
    }
    break;
  case 10:
    if (param_2 != 0xb) {
      return iVar2;
    }
    iVar3 = *(int *)(param_3 + 0xc);
    if (iVar3 == 0) {
      puVar12 = (uint *)0x0;
    }
    else {
      puVar12 = *(uint **)(iVar3 + 8);
    }
    if ((*puVar12 & 0x20) != 0) {
      piVar4 = (int *)FUN_4a1351bc(iVar2 + 0x278,*(undefined4 *)(param_1 + 0x16c));
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0xc))();
      }
      FUN_4a0ce9dc(param_1,*(undefined4 *)(param_1 + 0x160));
      FUN_4a0d36b8(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x264));
      FUN_4a0fc268(*(undefined4 *)(param_1 + 0x20));
      FUN_4a0e485c(piVar4);
      if (piVar4 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar4 + 8))(piVar4);
        if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0ce91c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar2 = (**(code **)(*piVar4 + 4))(piVar4);
          return iVar2;
        }
                    /* WARNING: Could not recover jumptable at 0x4a0ce908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar2 = (*UNRECOVERED_JUMPTABLE_00)();
        return iVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x4a0ce8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (*UNRECOVERED_JUMPTABLE_00)();
      return iVar2;
    }
    if (iVar3 != 0) {
      puVar10 = *(uint **)(iVar3 + 8);
    }
    if ((*puVar10 & 0x40) == 0) {
      return 0;
    }
LAB_4a0ce940:
    uVar8 = *(undefined4 *)(param_1 + 0x160);
    break;
  default:
    return iVar2;
  }
  puVar5 = (undefined4 *)FUN_4a0c6bc0(aiStack_34);
  puVar1 = PTR_PTR_4a0cec8c;
  puVar5[2] = 0;
  *puVar5 = puVar1;
  puVar5[3] = 0;
  uVar11 = 0xffffffff;
  switch(uVar8) {
  case 0:
    piVar4 = *(int **)(param_1 + 0x108);
    uVar6 = *(undefined4 *)(param_1 + 0x104);
    goto joined_r0x4a0cea88;
  case 1:
    piVar4 = *(int **)(param_1 + 0x11c);
    uVar6 = *(undefined4 *)(param_1 + 0x118);
    goto joined_r0x4a0cea88;
  case 2:
    uStack_38 = 0x20;
    uVar11 = 0;
    FUN_4a089eb4(*(undefined4 *)(param_1 + 0x168),0x83d,0x83c,0x40);
    break;
  case 3:
    piVar4 = *(int **)(param_1 + 0x130);
    uVar6 = *(undefined4 *)(param_1 + 300);
joined_r0x4a0cea88:
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))(piVar4);
    }
    (**(code **)(aiStack_34[0] + 0x1c))(aiStack_34);
    uStack_2c = uVar6;
    piStack_28 = piVar4;
LAB_4a0ceb4c:
    FUN_4a08be58(*(undefined4 *)(param_1 + 0x164),aiStack_34);
    break;
  case 4:
    uVar11 = 3;
    if (*(int *)(param_1 + 0xf8) == 5) {
      uVar11 = 5;
      goto LAB_4a0cebfc;
    }
    break;
  case 5:
    piVar4 = *(int **)(param_1 + 0x144);
    uVar6 = *(undefined4 *)(param_1 + 0x140);
    uVar11 = 3;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))(piVar4);
    }
    (**(code **)(aiStack_34[0] + 0x1c))(aiStack_34);
    uStack_2c = uVar6;
    piStack_28 = piVar4;
    if (*(int *)(param_1 + 0xf8) == 6 || *(int *)(param_1 + 0xf8) == 7) goto LAB_4a0cebfc;
    goto LAB_4a0ceb4c;
  case 6:
    iVar2 = 0x849;
    uVar6 = *(undefined4 *)(param_1 + 0x168);
    goto LAB_4a0cebc0;
  case 7:
    uVar11 = 5;
    FUN_4a089e34(*(undefined4 *)(param_1 + 0x168),0x84b,0x849,4);
    break;
  case 10:
    iVar2 = 0x841;
    uVar6 = *(undefined4 *)(param_1 + 0x168);
LAB_4a0cebc0:
    uStack_38 = 0x20;
    uVar11 = 5;
    FUN_4a089eb4(uVar6,iVar2 + 1,iVar2,0x40);
  }
  if (*(int *)(param_1 + 0xf8) == -1) {
    if (piStack_28 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = piStack_28[2];
    }
    if (iVar2 != 0) {
      if (piStack_28 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = piStack_28[2];
      }
      *(undefined4 *)(iVar2 + 8) = 0;
    }
  }
LAB_4a0cebfc:
  piVar4 = piStack_28;
  uVar6 = uStack_2c;
  if (piStack_28 != (int *)0x0) {
    (**(code **)(*piStack_28 + 0xc))(piStack_28);
  }
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x1c))((int *)(param_1 + 0x14c));
  *(undefined4 *)(param_1 + 0x154) = uVar6;
  *(int **)(param_1 + 0x158) = piVar4;
  *(undefined4 *)(param_1 + 0x160) = uVar11;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0xf8) = uVar8;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  FUN_4a0fd714(*(undefined4 *)(param_1 + 0x20));
  FUN_4a0fe374(*(undefined4 *)(param_1 + 0x20));
  FUN_4a0fd00c(*(undefined4 *)(param_1 + 0x20));
  iVar2 = FUN_4a16bef4(aiStack_34);
  return iVar2;
}



// Address: 4a0ce950

void FUN_4a0ce950(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0xf0) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xf0) + 8);
  }
  *(undefined4 *)(iVar1 + param_2 * 4) = param_3;
  return;
}



// Address: 4a0ce964

void FUN_4a0ce964(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_4a089fa0(*(undefined4 *)(param_1 + 0x168),param_2,param_3,0xffffffff,0x40,0x20,2);
  return;
}



// Address: 4a0ce9a4

void FUN_4a0ce9a4(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_4a089fa0(*(undefined4 *)(param_1 + 0x168),param_2,param_3,4,0xffffffff,0xffffffff,1);
  return;
}



// Address: 4a0ce9dc

void FUN_4a0ce9dc(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int local_34 [2];
  undefined4 local_2c;
  int *local_28;
  
  puVar2 = (undefined4 *)FUN_4a0c6bc0(local_34);
  puVar1 = PTR_PTR_4a0cec8c;
  puVar2[2] = 0;
  *puVar2 = puVar1;
  puVar2[3] = 0;
  uVar5 = 0xffffffff;
  switch(param_2) {
  case 0:
    piVar6 = *(int **)(param_1 + 0x108);
    uVar3 = *(undefined4 *)(param_1 + 0x104);
    goto joined_r0x4a0cea88;
  case 1:
    piVar6 = *(int **)(param_1 + 0x11c);
    uVar3 = *(undefined4 *)(param_1 + 0x118);
    goto joined_r0x4a0cea88;
  case 2:
    uVar5 = 0;
    FUN_4a089eb4(*(undefined4 *)(param_1 + 0x168),0x83d,0x83c,0x40,0x20);
    break;
  case 3:
    piVar6 = *(int **)(param_1 + 0x130);
    uVar3 = *(undefined4 *)(param_1 + 300);
joined_r0x4a0cea88:
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0xc))(piVar6);
    }
    (**(code **)(local_34[0] + 0x1c))(local_34);
    local_2c = uVar3;
    local_28 = piVar6;
LAB_4a0ceb4c:
    FUN_4a08be58(*(undefined4 *)(param_1 + 0x164),local_34);
    break;
  case 4:
    uVar5 = 3;
    if (*(int *)(param_1 + 0xf8) == 5) {
      uVar5 = 5;
      goto LAB_4a0cebfc;
    }
    break;
  case 5:
    piVar6 = *(int **)(param_1 + 0x144);
    uVar3 = *(undefined4 *)(param_1 + 0x140);
    uVar5 = 3;
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0xc))(piVar6);
    }
    (**(code **)(local_34[0] + 0x1c))(local_34);
    local_2c = uVar3;
    local_28 = piVar6;
    if (*(int *)(param_1 + 0xf8) == 6 || *(int *)(param_1 + 0xf8) == 7) goto LAB_4a0cebfc;
    goto LAB_4a0ceb4c;
  case 6:
    iVar4 = 0x849;
    uVar3 = *(undefined4 *)(param_1 + 0x168);
    goto LAB_4a0cebc0;
  case 7:
    uVar5 = 5;
    FUN_4a089e34(*(undefined4 *)(param_1 + 0x168),0x84b,0x849,4);
    break;
  case 10:
    iVar4 = 0x841;
    uVar3 = *(undefined4 *)(param_1 + 0x168);
LAB_4a0cebc0:
    uVar5 = 5;
    FUN_4a089eb4(uVar3,iVar4 + 1,iVar4,0x40,0x20);
  }
  if (*(int *)(param_1 + 0xf8) == -1) {
    if (local_28 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = local_28[2];
    }
    if (iVar4 != 0) {
      if (local_28 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = local_28[2];
      }
      *(undefined4 *)(iVar4 + 8) = 0;
    }
  }
LAB_4a0cebfc:
  piVar6 = local_28;
  uVar3 = local_2c;
  if (local_28 != (int *)0x0) {
    (**(code **)(*local_28 + 0xc))(local_28);
  }
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x1c))((int *)(param_1 + 0x14c));
  *(undefined4 *)(param_1 + 0x154) = uVar3;
  *(int **)(param_1 + 0x158) = piVar6;
  *(undefined4 *)(param_1 + 0x160) = uVar5;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0xf8) = param_2;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  FUN_4a0fd714(*(undefined4 *)(param_1 + 0x20));
  FUN_4a0fe374(*(undefined4 *)(param_1 + 0x20));
  FUN_4a0fd00c(*(undefined4 *)(param_1 + 0x20));
  FUN_4a16bef4(local_34);
  return;
}



// Address: 4a0cec90

void FUN_4a0cec90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x174) = param_2;
  *(undefined4 *)(param_1 + 0x178) = param_3;
  *(undefined4 *)(param_1 + 0x17c) = param_4;
  *(undefined4 *)(param_1 + 0x180) = 0x200000;
  *(undefined1 *)(param_1 + 0x184) = 1;
  return;
}



// Address: 4a0cecb0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0cecb0(int param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    return;
  }
  iVar1 = FUN_4a134a50(*(int *)(param_1 + 0x40),1);
  if (iVar1 == 0) {
    (**(code **)(**(int **)(param_1 + 0x40) + 0x24))();
    *(undefined4 *)(param_1 + 0x40) = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a0cecd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a0ced00

void FUN_4a0ced00(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,int param_7)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_74 [12];
  int local_68;
  undefined1 auStack_60 [20];
  undefined1 auStack_4c [20];
  undefined *local_38;
  int local_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  local_34 = param_1;
  uStack_30 = param_2;
  iStack_2c = param_3;
  uStack_28 = param_4;
  FUN_4a16bdcc(auStack_74,param_1 + 0xd0);
  iVar10 = 0;
  if (local_68 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(local_68 + 8);
  }
  *puVar2 = param_4;
  if (local_68 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_68 + 8);
  }
  *(int *)(iVar3 + 4) = param_5;
  if (local_68 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_68 + 8);
  }
  *(undefined4 *)(iVar3 + 8) = param_6;
  if (local_68 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_68 + 8);
  }
  *(undefined4 *)(iVar3 + 0xc) = 0;
  uVar4 = FUN_4a16bdcc(auStack_60,auStack_74);
  puVar2 = (undefined4 *)FUN_4a0c6bc0(auStack_4c);
  local_38 = PTR_PTR_4a0cefb8;
  *puVar2 = PTR_PTR_4a0cefb8;
  puVar2[2] = *(undefined4 *)(param_3 + 8);
  piVar5 = *(int **)(param_3 + 0xc);
  puVar2[3] = piVar5;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))();
  }
  puVar1 = PTR_PTR_4a0cefbc;
  *puVar2 = PTR_PTR_4a0cefbc;
  FUN_4a0cf0cc(local_34,0,puVar2,uVar4);
  FUN_4a16c1a0(auStack_4c);
  FUN_4a16bef4(auStack_60);
  if (local_68 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(local_68 + 8);
  }
  *puVar2 = param_4;
  if (local_68 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_68 + 8);
  }
  *(undefined4 *)(iVar3 + 8) = param_6;
  if (local_68 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_68 + 8);
  }
  iVar3 = *(int *)(iVar3 + 0xc);
  puVar2 = (undefined4 *)FUN_4a0c6bc0(auStack_4c);
  *puVar2 = local_38;
  puVar2[2] = *(undefined4 *)(param_3 + 8);
  piVar5 = *(int **)(param_3 + 0xc);
  puVar2[3] = piVar5;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))();
  }
  *puVar2 = puVar1;
  iVar9 = 0;
  iVar8 = 0;
  if (0 < (int)puVar2[2]) {
    do {
      iVar6 = puVar2[3];
      if (iVar6 == 0) {
        iVar6 = 0;
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(iVar6 + 8);
        iVar6 = *(int *)(iVar6 + 8);
      }
      iVar6 = FUN_4a13ef24(local_34,(int)*(short *)(iVar7 + iVar8 * 2),
                           (int)*(short *)(iVar6 + (iVar8 + 1) * 2));
      iVar9 = iVar9 + iVar6;
      iVar8 = iVar8 + 2;
    } while (iVar8 < (int)puVar2[2]);
  }
  FUN_4a16c1a0(auStack_4c);
  if (iVar9 == 0) {
    iVar8 = 0;
    if (local_68 != 0) {
      iVar8 = *(int *)(local_68 + 8);
    }
    if (local_68 == 0) {
      iVar8 = 0;
    }
    *(int *)(iVar8 + 4) = param_5 + (param_7 - iVar3 >> 1);
    if (local_68 != 0) {
      iVar10 = *(int *)(local_68 + 8);
    }
    *(int *)(iVar10 + 0xc) = iVar3;
  }
  else {
    if (local_68 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(local_68 + 8);
    }
    *(int *)(iVar8 + 4) = param_5;
    if (local_68 != 0) {
      iVar10 = *(int *)(local_68 + 8);
    }
    *(int *)(iVar10 + 0xc) = param_7 - iVar3;
  }
  uVar4 = FUN_4a16bdcc(auStack_60,auStack_74);
  puVar2 = (undefined4 *)FUN_4a0c6bc0(auStack_4c);
  *puVar2 = local_38;
  puVar2[2] = *(undefined4 *)(param_3 + 8);
  piVar5 = *(int **)(param_3 + 0xc);
  puVar2[3] = piVar5;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))();
  }
  *puVar2 = puVar1;
  FUN_4a0cf0cc(local_34,uStack_30,puVar2,uVar4);
  FUN_4a16c1a0(auStack_4c);
  FUN_4a16bef4(auStack_60);
  FUN_4a16bef4(auStack_74);
  return;
}



// Address: 4a0cefc0

void FUN_4a0cefc0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x20);
  FUN_4a0ccd58();
  uVar1 = FUN_4a06be4c(iVar4 + 0x278,3);
  *(undefined4 *)(param_1 + 0xbc) = uVar1;
  iVar2 = FUN_4a13ca78(iVar4);
  iVar3 = DAT_4a0cf050;
  iVar2 = (int)((ulonglong)((longlong)DAT_4a0cf050 * (longlong)(iVar2 * 7)) >> 0x20);
  iVar2 = (iVar2 >> 2) - (iVar2 >> 0x1f);
  *(int *)(param_1 + 0xc0) = iVar2;
  iVar2 = (int)((ulonglong)((longlong)iVar3 * (longlong)(iVar2 * 4)) >> 0x20);
  *(int *)(param_1 + 0xc4) = (iVar2 >> 1) - (iVar2 >> 0x1f);
  iVar2 = FUN_4a13ca78(iVar4);
  iVar3 = (int)((ulonglong)((longlong)iVar3 * (longlong)(iVar2 << 2)) >> 0x20);
  *(int *)(param_1 + 200) = (iVar3 >> 1) - (iVar3 >> 0x1f);
  iVar3 = FUN_4a06be4c(iVar4 + 0x278,3);
  *(int *)(param_1 + 0xcc) = iVar3 + 2;
  return;
}



// Address: 4a0cf054

void FUN_4a0cf054(int param_1,int param_2)

{
  int iVar1;
  
  FUN_4a0cd900();
  if (*(int *)(param_1 + 0x180) != 0) {
    iVar1 = *(int *)(param_1 + 0x180) + param_2 * 0x4000;
    *(int *)(param_1 + 0x180) = iVar1;
    if (0x7fffff < iVar1) {
      *(undefined4 *)(param_1 + 0x180) = 0;
    }
    return;
  }
  return;
}



// Address: 4a0cf090

void FUN_4a0cf090(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x54);
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      FUN_4a134a40(*(undefined4 *)(*(int *)(param_1 + 0x58) + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
    return;
  }
  return;
}



// Address: 4a0cf0cc

void FUN_4a0cf0cc(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_8c [8];
  int local_84;
  int local_80;
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [8];
  int local_6c;
  int local_68;
  undefined1 auStack_64 [4];
  int local_60;
  undefined1 auStack_5c [12];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  iVar1 = *(int *)(param_4 + 0xc);
  iVar11 = 0;
  bVar12 = iVar1 == 0;
  if (bVar12) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8 = *(undefined4 **)(iVar1 + 8);
  }
  local_38 = *puVar8;
  if (bVar12) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(iVar1 + 8);
  }
  local_3c = *(undefined4 *)(iVar9 + 4);
  if (bVar12) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(iVar1 + 8);
  }
  local_40 = *(undefined4 *)(iVar9 + 8);
  if (bVar12) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 8);
  }
  local_44 = *(int *)(iVar1 + 0xc);
  local_48 = 0;
  iVar9 = 0;
  iVar1 = 0;
  local_34 = param_1;
  local_30 = param_2;
  iStack_2c = param_3;
  iStack_28 = param_4;
  if (0 < *(int *)(param_3 + 8)) {
    do {
      iVar2 = *(int *)(param_3 + 0xc);
      if (iVar2 != 0) {
        iVar10 = *(int *)(iVar2 + 8);
      }
      else {
        iVar10 = 0;
      }
      iVar10 = (int)*(short *)(iVar10 + iVar1 * 2);
      if (iVar2 != 0) {
        iVar2 = *(int *)(iVar2 + 8);
      }
      else {
        iVar2 = 0;
      }
      iVar2 = (int)*(short *)(iVar2 + (iVar1 + 1) * 2);
      if (*(int *)(param_4 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_4 + 0xc) + 8);
      }
      *(int *)(iVar3 + 0x10) = iVar2;
      uVar4 = FUN_4a16bdcc(auStack_5c,param_4);
      FUN_4a0cbaa4(local_34,0,iVar10,uVar4);
      FUN_4a16bef4(auStack_5c);
      if (*(int *)(param_4 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_4 + 0xc) + 8);
      }
      local_60 = *(int *)(iVar3 + 0xc);
      iVar3 = iVar2;
      if (iVar10 != 0xd) {
        if (iVar10 == 0x12) {
          iVar3 = 1;
        }
        else {
          iVar3 = 0;
          if (iVar10 == 0x13) {
            FUN_4a0fb3b0(auStack_74,*(undefined4 *)(local_34 + 0x20),iVar2);
            iVar3 = 0;
            iVar2 = 0;
            if (0 < local_6c) {
              do {
                if (local_68 != 0) {
                  iVar10 = *(int *)(local_68 + 8);
                }
                else {
                  iVar10 = 0;
                }
                if (local_68 != 0) {
                  iVar5 = *(int *)(local_68 + 8);
                }
                else {
                  iVar5 = 0;
                }
                iVar10 = FUN_4a13ef24(local_34,(int)*(short *)(iVar10 + iVar2 * 2),
                                      (int)*(short *)(iVar5 + (iVar2 + 1) * 2));
                iVar3 = iVar3 + iVar10;
                iVar2 = iVar2 + 2;
              } while (iVar2 < local_6c);
            }
            FUN_4a16c1a0(auStack_74);
          }
        }
      }
      iVar1 = iVar1 + 2;
      local_48 = local_60 + local_48;
      iVar9 = iVar9 + iVar3;
    } while (iVar1 < *(int *)(param_3 + 8));
  }
  if (local_30 == 0) {
LAB_4a0cf4dc:
    if (*(int *)(param_4 + 0xc) != 0) {
      iVar11 = *(int *)(*(int *)(param_4 + 0xc) + 8);
    }
  }
  else {
    local_4c = local_44;
    if (0 < iVar9) {
      local_4c = local_44 + local_48;
    }
    if (*(int *)(param_4 + 0xc) == 0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8 = *(undefined4 **)(*(int *)(param_4 + 0xc) + 8);
    }
    *puVar8 = local_38;
    if (*(int *)(param_4 + 0xc) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_4 + 0xc) + 8);
    }
    *(undefined4 *)(iVar1 + 4) = local_3c;
    if (*(int *)(param_4 + 0xc) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_4 + 0xc) + 8);
    }
    *(undefined4 *)(iVar1 + 8) = local_40;
    iVar1 = 0;
    local_50 = 0;
    if (0 < *(int *)(param_3 + 8)) {
      do {
        iVar2 = *(int *)(param_3 + 0xc);
        if (iVar2 != 0) {
          iVar10 = *(int *)(iVar2 + 8);
        }
        else {
          iVar10 = 0;
        }
        iVar10 = (int)*(short *)(iVar10 + iVar1 * 2);
        if (iVar2 != 0) {
          iVar2 = *(int *)(iVar2 + 8);
        }
        else {
          iVar2 = 0;
        }
        iVar2 = (int)*(short *)(iVar2 + (iVar1 + 1) * 2);
        if (*(int *)(param_4 + 0xc) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(param_4 + 0xc) + 8);
        }
        iVar5 = 0;
        if (iVar10 == 0xd) {
          iVar5 = iVar2;
        }
        *(int *)(iVar3 + 0x10) = iVar2;
        if (iVar10 != 0xd) {
          if (iVar10 == 0x12) {
            iVar5 = 1;
          }
          else if (iVar10 == 0x13) {
            FUN_4a0fb3b0(auStack_8c,*(undefined4 *)(local_34 + 0x20));
            iVar5 = 0;
            iVar2 = 0;
            if (0 < local_84) {
              do {
                if (local_80 != 0) {
                  iVar3 = *(int *)(local_80 + 8);
                }
                else {
                  iVar3 = 0;
                }
                if (local_80 != 0) {
                  iVar6 = *(int *)(local_80 + 8);
                }
                else {
                  iVar6 = 0;
                }
                iVar3 = FUN_4a13ef24(local_34,(int)*(short *)(iVar3 + iVar2 * 2),
                                     (int)*(short *)(iVar6 + (iVar2 + 1) * 2));
                iVar5 = iVar5 + iVar3;
                iVar2 = iVar2 + 2;
              } while (iVar2 < local_84);
            }
            FUN_4a16c1a0(auStack_8c);
          }
        }
        if (iVar5 == 0) {
          if (*(int *)(param_4 + 0xc) == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(*(int *)(param_4 + 0xc) + 8);
          }
          *(int *)(iVar2 + 0xc) = local_4c - local_50;
          uVar4 = FUN_4a16bdcc(auStack_78,param_4);
          FUN_4a0cbaa4(local_34,local_30,iVar10,uVar4);
          puVar7 = auStack_78;
        }
        else {
          switchD_4a11cc8c::default(0 < iVar9,s_unexpected_stretchable_found_4a0cf520);
          uVar4 = FUN_4a0015f0(iVar5 * local_44,iVar9);
          if (*(int *)(param_4 + 0xc) == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(*(int *)(param_4 + 0xc) + 8);
          }
          *(undefined4 *)(iVar2 + 0xc) = uVar4;
          uVar4 = FUN_4a16bdcc(auStack_64,param_4);
          FUN_4a0cbaa4(local_34,local_30,iVar10,uVar4);
          puVar7 = auStack_64;
        }
        FUN_4a16bef4(puVar7);
        if (*(int *)(param_4 + 0xc) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(*(int *)(param_4 + 0xc) + 8);
        }
        iVar1 = iVar1 + 2;
        local_50 = *(int *)(iVar2 + 0xc) + local_50;
      } while (iVar1 < *(int *)(param_3 + 8));
      if (local_30 == 0) goto LAB_4a0cf4dc;
    }
    if (*(int *)(param_4 + 0xc) != 0) {
      iVar11 = *(int *)(*(int *)(param_4 + 0xc) + 8);
    }
    local_48 = local_44 + local_48;
  }
  *(int *)(iVar11 + 0xc) = local_48;
  return;
}



// Address: 4a0cf540

undefined4 FUN_4a0cf540(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x7c) + 8);
  }
  return *(undefined4 *)(iVar1 + param_2 * 4);
}



// Address: 4a0cf554

uint FUN_4a0cf554(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x20) + 0x260);
  iVar1 = FUN_4a085614(iVar4);
  if (iVar1 != 0) {
    FUN_4a0866c0(iVar4,param_2);
  }
  if (*(int *)(iVar4 + 0x74) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(iVar4 + 0x74) + 8);
  }
  iVar1 = iVar1 + param_2 * 0x14;
  iVar5 = *(int *)(iVar1 + 8);
  iVar4 = 0;
  if (0 < iVar5) {
    iVar1 = *(int *)(iVar1 + 0xc);
    do {
      if (iVar1 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar1 + 8);
      }
      piVar3 = *(int **)(iVar2 + iVar4 * 4);
      if (piVar3[1] != 400) {
        (**(code **)(*piVar3 + 0x28))(piVar3);
        (**(code **)(*piVar3 + 0x30))(piVar3,0);
        (**(code **)(*piVar3 + 0x3c))(piVar3);
        return param_2 | iVar4 << 0x10;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar5);
  }
  return 0xffffffff;
}



// Address: 4a0cf590

int FUN_4a0cf590(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  
  puVar1 = PTR_PTR_4a0cfbf0;
  *param_1 = PTR_PTR_4a0cfbf0;
  param_1[2] = puVar1 + 0x44;
  param_1[4] = puVar1 + 100;
  param_1[5] = puVar1 + 0x74;
  param_1[6] = puVar1 + 0x84;
  param_1[3] = puVar1 + 0x54;
  param_1[1] = puVar1 + 0x34;
  param_1[8] = param_2;
  param_1[7] = puVar1 + 0x94;
  uVar9 = *(undefined4 *)(param_2 + 0x51c);
  param_1[9] = uVar9;
  param_1[10] = *(undefined4 *)(param_2 + 0x520);
  iVar3 = FUN_4a16be24(param_1 + 0xb,4,uVar9,param_4,param_4);
  *(undefined4 *)(iVar3 + 0x14) = 0;
  puVar4 = (undefined4 *)FUN_4a0c6bc0(iVar3 + 0x18);
  *puVar4 = PTR_PTR_4a0cfbf4;
  puVar4[2] = 10;
  puVar4[4] = 0;
  puVar4[3] = 10;
  puVar4[5] = 0;
  iVar3 = thunk_FUN_4a161570(0x28);
  puVar4[5] = iVar3;
  if (iVar3 != 0) {
    iVar3 = 0;
    if (0 < (int)puVar4[4]) {
      do {
        *(undefined4 *)(puVar4[5] + iVar3 * 4) = *(undefined4 *)(iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)puVar4[4]);
    }
    thunk_FUN_4a161530(0);
  }
  iVar3 = puVar4[4];
  if ((int)puVar4[4] < (int)puVar4[3]) {
    do {
      iVar7 = iVar3 + 1;
      *(undefined4 *)(puVar4[5] + iVar3 * 4) = 0;
      iVar3 = iVar7;
    } while (iVar7 < (int)puVar4[3]);
  }
  piVar5 = (int *)FUN_4a0c6bc0(puVar4 + 6);
  puVar1 = PTR_PTR_4a0cfbf8;
  piVar5[2] = 0;
  piVar5[3] = 0;
  *piVar5 = (int)puVar1;
  iVar3 = FUN_4a15e080(0x74);
  if (iVar3 == 0) {
    iVar3 = FUN_4a1669a8();
  }
  iVar7 = 0;
  do {
    *(undefined4 *)(iVar3 + iVar7 * 4) = 0;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x1d);
  thunk_FUN_4a161570(0x18);
  puVar4 = (undefined4 *)FUN_4a0c0628();
  puVar4[2] = iVar3;
  puVar4[3] = 4;
  puVar1 = PTR_PTR_4a0cfbfc;
  puVar4[4] = 0x1d;
  *puVar4 = puVar1;
  *(undefined1 *)(puVar4 + 5) = 1;
  if (puVar4 != (undefined4 *)0x0) {
    (**(code **)(puVar1 + 0xc))(puVar4);
  }
  (**(code **)(*piVar5 + 0x1c))(piVar5);
  piVar5[2] = 0x1d;
  piVar5[3] = (int)puVar4;
  piVar5 = (int *)FUN_4a0c6bc0(piVar5 + 5);
  puVar2 = PTR_PTR_4a0cfc00;
  piVar5[2] = 0;
  piVar5[3] = 0;
  *piVar5 = (int)puVar2;
  iVar3 = FUN_4a15e080(0x38);
  if (iVar3 == 0) {
    iVar3 = FUN_4a1669a8();
  }
  iVar7 = 0;
  do {
    *(undefined4 *)(iVar3 + iVar7 * 4) = 0;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0xe);
  thunk_FUN_4a161570(0x18);
  puVar4 = (undefined4 *)FUN_4a0c0628();
  puVar4[2] = iVar3;
  puVar4[3] = 4;
  *puVar4 = puVar1;
  puVar4[4] = 0xe;
  *(undefined1 *)(puVar4 + 5) = 1;
  if (puVar4 != (undefined4 *)0x0) {
    (**(code **)(puVar1 + 0xc))(puVar4);
  }
  (**(code **)(*piVar5 + 0x1c))(piVar5);
  piVar5[3] = (int)puVar4;
  piVar5[2] = 0xe;
  piVar5[5] = 0;
  piVar5[6] = 0;
  piVar5[7] = 0;
  piVar5[8] = -1;
  piVar5[10] = 0;
  piVar5[9] = -1;
  piVar5[0xb] = 0;
  piVar5[0xc] = 0;
  piVar5[0xd] = 0;
  piVar5[0xe] = 0;
  piVar5[0xf] = 0;
  piVar5[0x10] = 0;
  piVar5[0x11] = 0;
  piVar5[0x12] = 0;
  piVar5[0x13] = 0;
  piVar5[0x14] = 0;
  piVar5[0x15] = 0;
  piVar5[0x16] = 0;
  piVar5[0x17] = 0;
  iVar3 = FUN_4a16be24(piVar5 + 0x18,6);
  iVar3 = FUN_4a16be24(iVar3 + 0x14,0xb);
  *(undefined4 *)(iVar3 + 0x14) = 0;
  iVar3 = FUN_4a16be24(iVar3 + 0x18,0);
  iVar3 = FUN_4a16be24(iVar3 + 0x14,0);
  iVar3 = FUN_4a16be24(iVar3 + 0x14,0);
  iVar3 = FUN_4a16be24(iVar3 + 0x14,0);
  iVar3 = FUN_4a16be24(iVar3 + 0x14,0);
  *(undefined4 *)(iVar3 + 0x14) = 0;
  *(undefined4 *)(iVar3 + 0x18) = 0;
  *(undefined4 *)(iVar3 + 0x1c) = 0;
  *(undefined4 *)(iVar3 + 0x20) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  *(undefined4 *)(iVar3 + 0x28) = 0;
  *(undefined4 *)(iVar3 + 0x2c) = 0;
  *(undefined4 *)(iVar3 + 0x30) = 0;
  *(undefined4 *)(iVar3 + 0x34) = 0;
  *(undefined1 *)(iVar3 + 0x38) = 0;
  *(undefined4 *)(iVar3 + 0x40) = 0;
  *(undefined4 *)(iVar3 + 0x3c) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x44) = 0;
  *(undefined4 *)(iVar3 + 0x58) = 0;
  iVar7 = iVar3 + -0x14c;
  uVar10 = 0;
  *(undefined4 *)(iVar3 + 0x5c) = 0;
  do {
    uVar9 = thunk_FUN_4a161570(0x84);
    uVar9 = FUN_4a0fa8d0(uVar9,1 << (uVar10 & 0xff));
    if (*(int *)(iVar3 + -0xe4) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(*(int *)(iVar3 + -0xe4) + 8);
    }
    *(undefined4 *)(iVar8 + uVar10 * 4) = uVar9;
    iVar8 = *(int *)(iVar3 + -0xfc);
    if (*(int *)(iVar3 + -0xe4) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(iVar3 + -0xe4) + 8);
    }
    piVar5 = *(int **)(iVar6 + uVar10 * 4);
    if ((*(int *)(iVar3 + -0xf8) == iVar8) &&
       (iVar6 = *(int *)(iVar3 + -0x100) + iVar8, iVar8 < iVar6)) {
      *(int *)(iVar3 + -0xfc) = iVar6;
      iVar11 = *(int *)(iVar3 + -0xf4);
      iVar8 = thunk_FUN_4a161570(iVar6 * 4);
      *(int *)(iVar3 + -0xf4) = iVar8;
      if (iVar8 != 0) {
        iVar8 = 0;
        if (0 < *(int *)(iVar3 + -0xf8)) {
          do {
            iVar6 = iVar8 + 1;
            *(undefined4 *)(*(int *)(iVar3 + -0xf4) + iVar8 * 4) =
                 *(undefined4 *)(iVar11 + iVar8 * 4);
            iVar8 = iVar6;
          } while (iVar6 < *(int *)(iVar3 + -0xf8));
        }
        thunk_FUN_4a161530(iVar11);
      }
      iVar8 = *(int *)(iVar3 + -0xf8);
      if (*(int *)(iVar3 + -0xf8) < *(int *)(iVar3 + -0xfc)) {
        do {
          iVar6 = iVar8 + 1;
          *(undefined4 *)(*(int *)(iVar3 + -0xf4) + iVar8 * 4) = 0;
          iVar8 = iVar6;
        } while (iVar6 < *(int *)(iVar3 + -0xfc));
      }
    }
    iVar8 = *(int *)(iVar3 + -0xf8);
    *(int *)(iVar3 + -0xf8) = iVar8 + 1;
    piVar12 = *(int **)(*(int *)(iVar3 + -0xf4) + iVar8 * 4);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))();
    }
    *(int **)(*(int *)(iVar3 + -0xf4) + iVar8 * 4) = piVar5;
    if ((piVar12 != (int *)0x0) && (iVar8 = (**(code **)(*piVar12 + 8))(piVar12), iVar8 != 0)) {
      (**(code **)(*piVar12 + 4))(piVar12);
    }
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 0x1d);
  iVar8 = 0;
  do {
    uVar9 = thunk_FUN_4a161570(0x114);
    uVar9 = FUN_4a0d2ea8(uVar9,iVar8);
    if (*(int *)(iVar3 + -0xd0) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(iVar3 + -0xd0) + 8);
    }
    *(undefined4 *)(iVar6 + iVar8 * 4) = uVar9;
    iVar6 = *(int *)(iVar3 + -0xfc);
    if (*(int *)(iVar3 + -0xd0) == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)(*(int *)(iVar3 + -0xd0) + 8);
    }
    piVar5 = *(int **)(iVar11 + iVar8 * 4);
    if ((*(int *)(iVar3 + -0xf8) == iVar6) &&
       (iVar11 = *(int *)(iVar3 + -0x100) + iVar6, iVar6 < iVar11)) {
      *(int *)(iVar3 + -0xfc) = iVar11;
      iVar13 = *(int *)(iVar3 + -0xf4);
      iVar6 = thunk_FUN_4a161570(iVar11 * 4);
      *(int *)(iVar3 + -0xf4) = iVar6;
      if (iVar6 != 0) {
        iVar6 = 0;
        if (0 < *(int *)(iVar3 + -0xf8)) {
          do {
            iVar11 = iVar6 + 1;
            *(undefined4 *)(*(int *)(iVar3 + -0xf4) + iVar6 * 4) =
                 *(undefined4 *)(iVar13 + iVar6 * 4);
            iVar6 = iVar11;
          } while (iVar11 < *(int *)(iVar3 + -0xf8));
        }
        thunk_FUN_4a161530(iVar13);
      }
      iVar6 = *(int *)(iVar3 + -0xf8);
      if (*(int *)(iVar3 + -0xf8) < *(int *)(iVar3 + -0xfc)) {
        do {
          iVar11 = iVar6 + 1;
          *(undefined4 *)(*(int *)(iVar3 + -0xf4) + iVar6 * 4) = 0;
          iVar6 = iVar11;
        } while (iVar11 < *(int *)(iVar3 + -0xfc));
      }
    }
    iVar6 = *(int *)(iVar3 + -0xf8);
    *(int *)(iVar3 + -0xf8) = iVar6 + 1;
    piVar12 = *(int **)(*(int *)(iVar3 + -0xf4) + iVar6 * 4);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))();
    }
    *(int **)(*(int *)(iVar3 + -0xf4) + iVar6 * 4) = piVar5;
    if ((piVar12 != (int *)0x0) && (iVar6 = (**(code **)(*piVar12 + 8))(piVar12), iVar6 != 0)) {
      (**(code **)(*piVar12 + 4))(piVar12);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0xe);
  thunk_FUN_4a161570(0xbc);
  uVar9 = FUN_4a08c014();
  *(undefined4 *)(iVar3 + 0x18) = uVar9;
  FUN_4a0cb72c(iVar7,uVar9);
  thunk_FUN_4a161570(0xb4);
  uVar9 = FUN_4a08adf4();
  *(undefined4 *)(iVar3 + 0x1c) = uVar9;
  FUN_4a0cb72c(iVar7,uVar9);
  *(undefined4 *)(iVar3 + 0x50) = 0;
  *(undefined4 *)(iVar3 + 0x48) = 1;
  *(undefined4 *)(iVar3 + 0x54) = 0x2ee;
  *(undefined4 *)(iVar3 + 0x4c) = 0;
  return iVar7;
}



// Address: 4a0cfc1c

int FUN_4a0cfc1c(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  puVar3 = PTR_PTR_4a0cff10;
  iVar5 = 0;
  *param_1 = PTR_PTR_4a0cff10;
  param_1[2] = puVar3 + 0x44;
  param_1[4] = puVar3 + 100;
  param_1[5] = puVar3 + 0x74;
  param_1[6] = puVar3 + 0x84;
  param_1[3] = puVar3 + 0x54;
  param_1[1] = puVar3 + 0x34;
  param_1[7] = puVar3 + 0x94;
  if (0 < (int)param_1[0x15]) {
    do {
      piVar6 = *(int **)(param_1[0x16] + iVar5 * 4);
      *(undefined4 *)(param_1[0x16] + iVar5 * 4) = 0;
      if ((piVar6 != (int *)0x0) && (iVar2 = (**(code **)(*piVar6 + 8))(piVar6), iVar2 != 0)) {
        (**(code **)(*piVar6 + 4))(piVar6);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)param_1[0x15]);
  }
  param_1[0x15] = 0;
  iVar5 = FUN_4a16bef4(param_1 + 0x53);
  iVar5 = FUN_4a16bef4(iVar5 + -0x14);
  iVar5 = FUN_4a16bef4(iVar5 + -0x14);
  iVar5 = FUN_4a16bef4(iVar5 + -0x14);
  iVar5 = FUN_4a16bef4(iVar5 + -0x14);
  iVar5 = FUN_4a16bef4(iVar5 + -0x18);
  iVar5 = FUN_4a16bef4(iVar5 + -0x14);
  puVar3 = PTR_PTR_4a0cff14;
  *(undefined4 *)(iVar5 + -0x60) = PTR_PTR_4a0cff14;
  iVar2 = *(int *)(iVar5 + -0x58);
  piVar6 = *(int **)(iVar5 + -0x54);
  if (piVar6 != (int *)0x0) {
    iVar7 = piVar6[2];
    puVar3 = (undefined *)(uint)*(byte *)(piVar6 + 5);
  }
  else {
    iVar7 = 0;
  }
  *(undefined4 *)(iVar5 + -0x54) = 0;
  *(undefined4 *)(iVar5 + -0x58) = 0;
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
      if (iVar7 == 0) goto LAB_4a0cfdb8;
    }
    FUN_4a14f21c();
  }
LAB_4a0cfdb8:
  iVar5 = FUN_4a0c6bf4((undefined4 *)(iVar5 + -0x60));
  puVar3 = PTR_PTR_4a0cff18;
  *(undefined4 *)(iVar5 + -0x14) = PTR_PTR_4a0cff18;
  iVar2 = *(int *)(iVar5 + -0xc);
  piVar6 = *(int **)(iVar5 + -8);
  if (piVar6 != (int *)0x0) {
    iVar7 = piVar6[2];
    puVar3 = (undefined *)(uint)*(byte *)(piVar6 + 5);
  }
  else {
    iVar7 = 0;
  }
  *(undefined4 *)(iVar5 + -8) = 0;
  *(undefined4 *)(iVar5 + -0xc) = 0;
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
      if (iVar7 == 0) goto LAB_4a0cfe70;
    }
    FUN_4a14f21c();
  }
LAB_4a0cfe70:
  iVar5 = FUN_4a0c6bf4((undefined4 *)(iVar5 + -0x14));
  iVar2 = 0;
  *(undefined4 *)(iVar5 + -0x18) = PTR_PTR_4a0cff1c;
  if (0 < *(int *)(iVar5 + -8)) {
    do {
      piVar6 = *(int **)(*(int *)(iVar5 + -4) + iVar2 * 4);
      *(undefined4 *)(*(int *)(iVar5 + -4) + iVar2 * 4) = 0;
      if ((piVar6 != (int *)0x0) && (iVar7 = (**(code **)(*piVar6 + 8))(piVar6), iVar7 != 0)) {
        (**(code **)(*piVar6 + 4))(piVar6);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar5 + -8));
  }
  *(undefined4 *)(iVar5 + -8) = 0;
  thunk_FUN_4a161530(*(undefined4 *)(iVar5 + -4));
  iVar5 = FUN_4a0c6bf4((undefined4 *)(iVar5 + -0x18));
  iVar5 = FUN_4a16bef4(iVar5 + -0x18);
  return iVar5 + -0x2c;
}



// Address: 4a0cff50

undefined4 * FUN_4a0cff50(undefined4 *param_1)

{
  *param_1 = PTR_PTR_4a0cff74;
  thunk_FUN_4a161530(param_1[2]);
  return param_1;
}



// Address: 4a0cff80

int FUN_4a0cff80(int param_1,int param_2)

{
  thunk_FUN_4a001134(param_1,param_2,0x24);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  return param_1;
}



// Address: 4a0cffa0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0cffa0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 auStack_20 [12];
  int iStack_14;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    iVar3 = FUN_4a08c570(param_1,*(undefined4 *)(param_1 + 0x5c));
    *(int *)(param_1 + 0xa4) = -iVar3;
    return;
  }
  if (*(int *)(param_1 + 0x74) == 1) {
    iVar3 = FUN_4a08c570(param_1,*(undefined4 *)(param_1 + 0x5c));
    *(int *)(param_1 + 0xa4) = -iVar3;
    piVar4 = (int *)FUN_4a134aa8(param_1);
    uVar5 = *(undefined4 *)(param_1 + 0xa4);
    FUN_4a16be24(auStack_20,3);
    iVar3 = 0;
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
    *puVar2 = 0x80000000;
    if (iStack_14 != 0) {
      iVar3 = *(int *)(iStack_14 + 8);
    }
    *(undefined4 *)(iVar3 + 8) = uVar5;
    (**(code **)(*piVar4 + 0x20))(piVar4,0xb,auStack_20);
    FUN_4a16bef4(auStack_20);
    return;
  }
  return;
}



// Address: 4a0d0004

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0d0004(int param_1,int *param_2,undefined4 param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  char cVar1;
  short sVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int *piVar20;
  int iVar21;
  int iVar22;
  undefined4 *puVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar27;
  undefined8 uVar28;
  int local_a4;
  int local_a0;
  undefined4 local_94;
  int local_90;
  
  iVar4 = FUN_4a0ff494();
  iVar5 = iVar4 + 0x278;
  iVar6 = *(int *)(iVar4 + 0x51c);
  iVar7 = *(int *)(iVar4 + 0x520);
  uVar8 = FUN_4a0642fc();
  iVar9 = FUN_4a0fba7c(iVar4);
  if (0xd < *(uint *)(param_1 + 0x74)) {
    return;
  }
  iVar21 = param_7 >> 1;
  iVar26 = param_8 >> 1;
  switch(*(uint *)(param_1 + 0x74)) {
  case 0:
    uVar10 = FUN_4a145a40(iVar4,param_4);
    FUN_4a0fba90(iVar4);
    uVar11 = FUN_4a12dde4();
    iVar6 = FUN_4a06be4c(iVar5,4);
    iVar6 = param_6 + ((param_8 - iVar6) + -10 >> 1);
    if (param_2 == (int *)0x0) {
      FUN_4a171fac(param_8);
      FUN_4a171fac(param_7);
      FUN_4a171fac(param_6 + 1);
      FUN_4a171fac(param_5);
      FUN_4a09ff60(param_3,0x154,0x155,0x156);
      uVar8 = FUN_4a171fac(iVar6);
      uVar19 = FUN_4a171fac(param_5 + iVar21);
      if (uVar10 == 0) {
        uVar13 = 0x191;
      }
      else {
        uVar13 = 0x192;
      }
      FUN_4a09f664(param_3,uVar13,uVar19,uVar8);
      iVar4 = *(int *)(param_1 + 0x78);
      bVar27 = iVar4 == 1;
      if (bVar27) {
        iVar4 = *(int *)(param_1 + 0xa4);
      }
      if ((bVar27 && iVar4 == param_4) && (uVar11 & ~uVar10) == 0) {
        FUN_4a0fb0c0(param_1 + 0xf4);
        FUN_4a09ff60(param_3,0xfa,0xfd,0x100);
        return;
      }
      return;
    }
    if (uVar10 != 0) {
      uVar8 = FUN_4a0fba90(iVar4);
      uVar19 = (**(code **)(*param_2 + 0x74))(param_2);
      uVar13 = (**(code **)(*param_2 + 0x78))(param_2);
      uVar14 = (**(code **)(*param_2 + 0x70))(param_2);
      (**(code **)(*param_2 + 0x6c))(param_2);
      uVar8 = FUN_4a146eb8(uVar8);
      puVar3 = PTR_DAT_4a0d107c;
      FUN_4a0bbcb4(*(undefined4 *)PTR_DAT_4a0d107c);
      FUN_4a0bbcf0(*(undefined4 *)puVar3,0x96);
      FUN_4a0bbcf0(*(undefined4 *)puVar3,200);
      uVar15 = FUN_4a0bbbcc(*(undefined4 *)puVar3,iVar6 + 0xc);
      uVar16 = FUN_4a0bbb68(*(undefined4 *)puVar3,param_5 + iVar21 + -100);
      FUN_4a098d50(uVar8,param_2,uVar16,uVar15);
      FUN_4a0bbb28(*(undefined4 *)puVar3);
      (**(code **)(*param_2 + 0x9c))(param_2,uVar19,uVar13,uVar14);
    }
    if ((uVar11 & ~uVar10) == 0) {
      piVar20 = (int *)FUN_4a145934(iVar4,param_4);
      if (piVar20 == (int *)0x0) {
        FUN_4a06b074(iVar5,param_2,0x81d,4);
                    /* WARNING: Could not recover jumptable at 0x4a0d02b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      (**(code **)(*piVar20 + 0xc))();
      FUN_4a06b02c(iVar5,param_2,piVar20);
      iVar4 = (**(code **)(*piVar20 + 8))(piVar20);
      if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0d02dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x4a0d02f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar20 + 4))(piVar20);
      return;
    }
    return;
  case 1:
    if (param_2 != (int *)0x0) {
      uVar8 = FUN_4a140d9c(iVar6,param_4);
      FUN_4a06b074(iVar5,param_2,uVar8,4);
      uVar8 = FUN_4a141544(iVar6,param_4);
      FUN_4a06cd2c(iVar5,param_2,0,uVar8);
      return;
    }
    uVar8 = FUN_4a171fac(param_8);
    FUN_4a17211c(uVar8,DAT_4a0d1084);
    FUN_4a171e1c();
    FUN_4a171fac();
    uVar8 = FUN_4a171fac(param_7);
    FUN_4a171fac(param_6);
    FUN_4a171fac(param_5);
    FUN_4a09ff60(param_3,0x154,0x155,0x156);
    uVar19 = FUN_4a171fac(param_6 + 0x32);
    uVar13 = FUN_4a171fac(param_5 + iVar21);
    FUN_4a09f664(param_3,0xb5,uVar13,uVar19);
    uVar19 = FUN_4a09f974(param_3,0x7f);
    FUN_4a171bb8(uVar8,uVar19);
    uVar8 = FUN_4a171fac(param_6 + 0x73);
    FUN_4a09f664(param_3,0x7f,uVar13,uVar8);
    return;
  case 2:
    if (param_2 != (int *)0x0) {
      uVar8 = FUN_4a1406a0(iVar6,param_4);
      FUN_4a06cd2c(iVar5,param_2,0,uVar8);
      return;
    }
    iVar5 = FUN_4a13fc4c(iVar6,0,param_4);
    iVar4 = *(int *)(param_1 + 0x78);
    bVar27 = iVar4 == 1;
    if (bVar27) {
      iVar4 = *(int *)(param_1 + 0xa4);
    }
    if ((bVar27 && iVar4 == param_4) &&
       (FUN_4a0fb0c0(param_1 + 0xf4), *(int *)(param_1 + 0x10c) == 0)) {
      uVar8 = FUN_4a171fac(param_6 + iVar26);
      uVar19 = FUN_4a171fac(param_5 + iVar26 + -5);
      FUN_4a09f664(param_3,0xab,uVar19,uVar8);
    }
    if (iVar5 == -1) {
                    /* WARNING: Could not recover jumptable at 0x4a0d0728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    uVar8 = FUN_4a171fac(param_6 + iVar26);
    uVar19 = FUN_4a171fac(param_5 + iVar26 + -5);
    FUN_4a09f664(param_3,0x72,uVar19,uVar8);
    return;
  case 3:
    iVar7 = FUN_4a0ff494();
    iVar9 = FUN_4a13fa90(*(undefined4 *)(iVar7 + 0x51c));
    iVar26 = FUN_4a145c7c(iVar7);
    iVar21 = FUN_4a145b3c(iVar7);
    iVar22 = 0;
    iVar25 = 0;
    iVar24 = 0;
    if (0 < iVar9) {
      do {
        iVar12 = FUN_4a145a74(iVar7,iVar24);
        if ((iVar12 == 0) && (iVar26 <= param_4)) goto LAB_4a0d087c;
        iVar12 = FUN_4a145a74(iVar7,iVar24);
        if (iVar12 != 0) {
          iVar12 = FUN_4a145970(iVar7,iVar24);
          if (iVar12 == 0) {
            if ((param_4 - iVar21 == iVar25) && (iVar21 <= param_4)) goto LAB_4a0d087c;
            iVar25 = iVar25 + 1;
          }
          else {
            if (iVar22 == param_4) goto LAB_4a0d087c;
            iVar22 = iVar22 + 1;
          }
        }
        iVar24 = iVar24 + 1;
      } while (iVar24 < iVar9);
    }
    switchD_4a11cc8c::default(0,PTR_s_no_dreams___shouldn_t_happen__4a0d1088);
    iVar24 = -1;
LAB_4a0d087c:
    iVar9 = -1;
    iVar7 = FUN_4a145a74(iVar4,iVar24);
    if (iVar7 == 0) {
      uVar8 = 0xa4d;
    }
    else {
      uVar8 = FUN_4a1404ac(iVar6,iVar24);
      iVar4 = FUN_4a145970(iVar4,iVar24);
      if (iVar4 != 0) {
        iVar9 = 0x86;
      }
    }
    if (param_2 == (int *)0x0) {
      uVar8 = FUN_4a171fac(param_5);
      uVar8 = FUN_4a171a94(uVar8,0x41f00000);
      uVar19 = FUN_4a171fac(param_8);
      uVar19 = FUN_4a17295c(uVar19,0xffffffff);
      uVar13 = FUN_4a171fac(param_6);
      uVar19 = FUN_4a171a94(uVar13,uVar19);
      FUN_4a09f664(param_3,0x87,uVar8,uVar19);
      if (iVar9 != -1) {
        FUN_4a09f664(param_3,0x86,uVar8,uVar19);
      }
    }
    else {
      FUN_4a06cd2c(iVar5,param_2,*(undefined4 *)(param_1 + 0xa0),uVar8);
    }
    break;
  case 4:
    param_6 = param_6 + iVar26 + 1;
    iVar4 = *(int *)(param_1 + 0xc0) + param_5 + 0x2c;
    iVar7 = (param_5 + param_7 + -0x18) - iVar4;
    if (param_2 != (int *)0x0) {
      uVar8 = FUN_4a13fa58(iVar6,param_4);
      FUN_4a06b074(iVar5,param_2,uVar8,3);
      uVar8 = FUN_4a06c410(iVar5);
      iVar4 = FUN_4a13fb0c(iVar6,param_4);
      FUN_4a06c378(iVar5,iVar4 >> 0x10);
      FUN_4a06afd0(iVar5,param_2,uVar8,3);
      uVar8 = FUN_4a1403f8(iVar6,param_4);
      FUN_4a06b074(iVar5,param_2,uVar8,3);
      return;
    }
    uVar8 = FUN_4a09f974(param_3,0xc9);
    uVar19 = FUN_4a09f974(param_3,199);
    FUN_4a171a94(uVar19,uVar8);
    iVar5 = FUN_4a171e1c();
    uVar8 = FUN_4a13fb0c(iVar6,param_4);
    FUN_4a0d4b0c(uVar8,0x50000);
    uVar8 = FUN_4a171fac();
    uVar8 = FUN_4a17295c(uVar8,0xfffffff0);
    FUN_4a171fac(iVar7);
    FUN_4a171fac(param_6 + -9);
    FUN_4a171fac(iVar4 + (iVar7 >> 1));
    FUN_4a0a02bc(param_3,0xca,0xcb,0xcc);
    uVar19 = FUN_4a171fac(iVar7 - iVar5);
    uVar8 = FUN_4a17211c(uVar19,uVar8);
    uVar19 = FUN_4a171fac(iVar5);
    uVar8 = FUN_4a171a94(uVar19,uVar8);
    uVar8 = FUN_4a17295c(uVar8,0xffffffff);
    uVar19 = FUN_4a171fac(iVar4);
    FUN_4a171a94(uVar19,uVar8);
    FUN_4a0a02bc(param_3,199,200,0xc9);
    FUN_4a171fac(param_6 + 9);
    FUN_4a0a02bc(param_3,0xcd,0xce,0xcf);
    return;
  case 5:
  case 7:
    iVar4 = *(int *)(param_1 + 0x74);
    if (iVar4 == 5) {
      uVar19 = FUN_4a1407b8(iVar6,param_4);
    }
    else {
      iVar24 = 0;
      if (*(int *)(iVar9 + 0xa3c) != 0) {
        iVar24 = *(int *)(*(int *)(iVar9 + 0xa3c) + 8);
      }
      uVar19 = *(undefined4 *)(iVar24 + param_4 * 4);
    }
    if (param_2 == (int *)0x0) {
      iVar5 = *(int *)(param_1 + 0x74);
      bVar27 = iVar5 == 7;
      if (bVar27) {
        iVar5 = *(int *)(param_1 + 0xa4);
      }
      if (bVar27 && iVar5 == param_4) {
        uVar8 = FUN_4a17295c(0,0xffffffff);
        uVar13 = FUN_4a171fac(param_5);
        uVar8 = FUN_4a171a94(uVar13,uVar8);
        FUN_4a171a94(uVar8,0x40800000);
        uVar8 = FUN_4a171e1c();
        uVar13 = FUN_4a17295c(0x40800000,0xffffffff);
        uVar14 = FUN_4a171fac(param_6);
        FUN_4a171a94(uVar14,uVar13);
        uVar13 = FUN_4a171e1c();
        FUN_4a171fac(param_8 + -4);
        FUN_4a171fac(param_7);
        FUN_4a171fac(uVar13);
        FUN_4a171fac(uVar8);
        FUN_4a09ff60(param_3,0xe0,0xe1,0xe2);
      }
      iVar5 = FUN_4a143130(iVar7,uVar19);
      if (((*(uint *)(iVar5 + 0x10) & 4) != 0) && (iVar4 != 7)) {
        iVar4 = *(int *)(param_1 + 0x78);
        bVar27 = iVar4 != 1;
        if (!bVar27) {
          iVar4 = *(int *)(param_1 + 0xa4);
        }
        if ((bVar27 || iVar4 != param_4) ||
           (iVar4 = FUN_4a0fb0c0(param_1 + 0xf4), 0x3f000000 < iVar4)) {
          FUN_4a171fac(param_8 + -4);
          FUN_4a171fac(param_7);
          FUN_4a171fac(param_6 + 3);
          FUN_4a171fac(param_5 + 4);
          FUN_4a09ff60(param_3,0xe0,0xe1,0xe2);
          uVar8 = FUN_4a143db0(iVar7,uVar19);
          iVar9 = FUN_4a145524(iVar7,uVar8);
          uVar13 = FUN_4a144940(iVar7,uVar8,0);
          iVar4 = FUN_4a143130(iVar7,uVar13);
          uVar13 = FUN_4a09f9c8(param_3,(int)*(short *)(iVar4 + 0xc));
          uVar13 = FUN_4a17295c(uVar13,0xffffffff);
          FUN_4a1725c0(uVar13,0x40000000);
          iVar24 = FUN_4a171e1c();
          uVar13 = FUN_4a144940(iVar7,uVar8,0);
          iVar4 = FUN_4a143130(iVar7,uVar13);
          uVar13 = FUN_4a09f974(param_3,(int)*(short *)(iVar4 + 0xc));
          FUN_4a17295c(uVar13,0xffffffff);
          iVar22 = FUN_4a171e1c();
          iVar5 = 0;
          iVar4 = -(iVar24 >> 1);
          iVar21 = param_5 + iVar21 + 0x14;
          if (iVar9 < 5) {
            iVar4 = 0;
          }
          iVar4 = param_6 + iVar26 + iVar4;
          iVar25 = iVar21;
          if (0 < iVar9) {
            do {
              uVar13 = FUN_4a144940(iVar7,uVar8,iVar5);
              iVar12 = FUN_4a143130(iVar7,uVar13);
              sVar2 = *(short *)(iVar12 + 0xc);
              FUN_4a140338(iVar6,uVar13);
              uVar13 = FUN_4a171fac(iVar4);
              uVar14 = FUN_4a171fac(iVar25);
              FUN_4a09f664(param_3,(int)sVar2,uVar14,uVar13);
              if (iVar5 == 3) {
                iVar4 = iVar4 + iVar24;
                iVar25 = iVar21;
              }
              else {
                iVar25 = iVar25 + iVar22;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < iVar9);
          }
        }
        uVar8 = FUN_4a171fac(param_8);
        uVar8 = FUN_4a17295c(uVar8,0xffffffff);
        uVar13 = FUN_4a171fac(param_6);
        FUN_4a171a94(uVar13,uVar8);
        FUN_4a171e1c();
        uVar8 = FUN_4a171fac();
        uVar13 = FUN_4a171fac(param_5 + param_7 + -0x23);
        FUN_4a09f664(param_3,0xb4,uVar13,uVar8);
      }
      iVar4 = FUN_4a143130(iVar7,uVar19);
      sVar2 = *(short *)(iVar4 + 0xc);
      uVar8 = FUN_4a171fac(param_6 + iVar26);
      uVar19 = FUN_4a171fac(param_5 + 0x15);
      FUN_4a09f664(param_3,(int)sVar2,uVar19,uVar8);
      return;
    }
    iVar4 = FUN_4a143130(iVar7,uVar19);
    FUN_4a06cd2c(iVar5,param_2,0,*(undefined4 *)(iVar4 + 8));
    if (*(int *)(param_1 + 0x74) == 5) {
      iVar4 = FUN_4a143130(iVar7,uVar19);
      if ((*(uint *)(iVar4 + 0x10) & 4) == 0) {
        uVar13 = FUN_4a140338(iVar6,uVar19);
        iVar4 = FUN_4a143130(iVar7,uVar19);
        cVar1 = *(char *)(iVar4 + 0x18);
        uVar14 = FUN_4a06c410(iVar5);
        FUN_4a06c378(iVar5,uVar13);
        FUN_4a06cbe8(iVar5,0x803);
        FUN_4a06c378(iVar5,(int)cVar1);
        FUN_4a06afd0(iVar5,param_2,uVar14,3);
      }
    }
    else {
      iVar4 = 0;
      if (*(int *)(iVar9 + 0xa28) != 0) {
        iVar4 = *(int *)(*(int *)(iVar9 + 0xa28) + 8);
      }
      uVar14 = *(undefined4 *)(iVar4 + param_4 * 4);
      iVar4 = FUN_4a143130(iVar7,uVar19);
      cVar1 = *(char *)(iVar4 + 0x18);
      uVar13 = FUN_4a06c410(iVar5);
      FUN_4a06c378(iVar5,uVar14);
      FUN_4a06cbe8(iVar5,0x803);
      FUN_4a06c378(iVar5,(int)cVar1);
      FUN_4a06afd0(iVar5,param_2,uVar13,3);
    }
    iVar4 = FUN_4a1430ec(iVar7,uVar19);
    if (iVar4 == -1) {
      return;
    }
    iVar4 = FUN_4a063544(uVar8,iVar4);
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0d113c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    (**(code **)(*param_2 + 0x34))(param_2,iVar4,param_5 + param_7 + -0x32,param_6 + 0x14);
    return;
  case 6:
    iVar7 = FUN_4a141128(iVar6,param_4);
    iVar4 = 0;
    if (*(int *)(iVar6 + 0x420) != 0) {
      iVar4 = *(int *)(*(int *)(iVar6 + 0x420) + 8);
    }
    sVar2 = *(short *)(iVar4 + iVar7 * 2);
    FUN_4a13f968(iVar6,iVar7);
    iVar4 = param_5 + iVar21 + 0x14;
    if (param_2 == (int *)0x0) {
      iVar5 = *(int *)(param_1 + 0x78);
      bVar27 = iVar5 != 1;
      if (!bVar27) {
        iVar5 = *(int *)(param_1 + 0xa4);
      }
      if ((bVar27 || iVar5 != param_4) || (iVar5 = FUN_4a0fb0c0(param_1 + 0xf4), 0x3f000000 < iVar5)
         ) {
        uVar8 = FUN_4a17295c(0x40000000,0xffffffff);
        uVar19 = FUN_4a171fac(param_6);
        FUN_4a171a94(uVar19,uVar8);
        uVar8 = FUN_4a171e1c();
        iVar5 = (iVar4 - param_5) + -0x4b;
        iVar6 = param_5 + iVar21 + 0x5f;
        iVar7 = param_5 + iVar5;
        FUN_4a171fac(param_8 + -2);
        FUN_4a171fac(iVar5);
        FUN_4a171fac(uVar8);
        FUN_4a171fac(param_5);
        FUN_4a09ff60(param_3,0xe0,0xe1,0xe2);
        FUN_4a171fac(((param_5 + param_7) - iVar4) + -0x4b);
        FUN_4a171fac(iVar6);
        FUN_4a09ff60(param_3,0xe0,0xe1,0xe2);
        FUN_4a171fac(param_8 + -0x10);
        FUN_4a171fac(iVar6 - iVar7);
        uVar8 = FUN_4a171fac(param_6 + 8);
        uVar19 = FUN_4a171fac(iVar7);
        FUN_4a0a07ac(param_3,0xe4,uVar19,uVar8);
      }
      uVar8 = FUN_4a171fac(param_8);
      uVar8 = FUN_4a17295c(uVar8,0xffffffff);
      uVar19 = FUN_4a171fac(param_6);
      FUN_4a171a94(uVar19,uVar8);
      FUN_4a171e1c();
      uVar8 = FUN_4a171fac();
      uVar19 = FUN_4a171fac(param_5 + param_7 + -0x23);
      FUN_4a09f664(param_3,0xb4,uVar19,uVar8);
    }
    else {
      FUN_4a06b074(iVar5,param_2,(int)sVar2,4);
    }
    FUN_4a086b6c(param_2,param_3,iVar4,param_6 + iVar26);
    return;
  case 8:
    uVar19 = FUN_4a1457e4(iVar7,param_4,*(undefined4 *)(iVar9 + 0x6d4));
    iVar4 = FUN_4a143ac8(iVar7,uVar19);
    uVar13 = *(undefined4 *)(iVar4 + 0xc);
    if (param_2 == (int *)0x0) {
      FUN_4a171fac(param_6);
      FUN_4a171fac(param_5);
      FUN_4a09ff60(param_3,0x154,0x155,0x156);
      iVar4 = FUN_4a1449bc(iVar7,uVar19);
      if (iVar4 == 0) {
        uVar8 = FUN_4a171fac(param_6 + 0x46);
        uVar19 = FUN_4a171fac(param_5 + 0x56);
        FUN_4a09f664(param_3,0x140,uVar19,uVar8);
      }
    }
    else {
      uVar14 = (**(code **)(*param_2 + 0x74))(param_2);
      uVar15 = (**(code **)(*param_2 + 0x78))(param_2);
      uVar16 = (**(code **)(*param_2 + 0x70))(param_2);
      (**(code **)(*param_2 + 0x6c))(param_2);
      iVar4 = FUN_4a1449bc(iVar7,uVar19);
      if (iVar4 != 0) {
        local_a0 = -1;
        iVar4 = *(int *)(param_1 + 0xe4);
        piVar20 = (int *)0x0;
        if (iVar4 != 0) {
          piVar20 = *(int **)(iVar4 + 8);
        }
        if (*piVar20 == param_4) {
          local_a0 = 0;
        }
        else {
          iVar6 = 0;
          if (iVar4 != 0) {
            iVar6 = *(int *)(iVar4 + 8);
          }
          if (*(int *)(iVar6 + 4) == param_4) {
            local_a0 = 1;
          }
          else {
            iVar6 = 0;
            if (iVar4 != 0) {
              iVar6 = *(int *)(iVar4 + 8);
            }
            if (*(int *)(iVar6 + 8) == param_4) {
              local_a0 = 2;
            }
            else {
              iVar6 = 0;
              if (iVar4 != 0) {
                iVar6 = *(int *)(iVar4 + 8);
              }
              if (*(int *)(iVar6 + 0xc) == param_4) {
                local_a0 = 3;
              }
              else {
                iVar6 = 0;
                if (iVar4 != 0) {
                  iVar6 = *(int *)(iVar4 + 8);
                }
                if (*(int *)(iVar6 + 0x10) == param_4) {
                  local_a0 = 4;
                }
                else {
                  iVar6 = FUN_4a08c570(param_1,*(undefined4 *)(param_1 + 0x5c));
                  iVar4 = -iVar6;
                  if (*(int *)(param_1 + 0x104) == iVar4) {
                    local_a4 = *(int *)(param_1 + 0x108);
                  }
                  else {
                    local_a4 = iVar4 - *(int *)(param_1 + 0x104);
                    if (local_a4 < -1) {
                      local_a4 = -1;
                    }
                    if (1 < local_a4) {
                      local_a4 = 1;
                    }
                  }
                  *(int *)(param_1 + 0x104) = iVar4;
                  iVar26 = 0;
                  *(int *)(param_1 + 0x108) = local_a4;
                  iVar4 = 0;
                  do {
                    iVar24 = *(int *)(param_1 + 0xe4);
                    iVar21 = 0;
                    if (iVar24 != 0) {
                      iVar21 = *(int *)(iVar24 + 8);
                    }
                    iVar22 = *(int *)(iVar21 + iVar4 * 4) + iVar6;
                    iVar21 = -iVar22;
                    if (-iVar22 < iVar22) {
                      iVar21 = iVar22;
                    }
                    if (((local_a4 * iVar22 < 0) && (1 < iVar21)) || (3 < iVar21)) {
LAB_4a0d1860:
                      iVar21 = 0;
                      if (iVar24 != 0) {
                        iVar21 = *(int *)(iVar24 + 8);
                      }
                      iVar26 = iVar26 + 1;
                      *(undefined4 *)(iVar21 + iVar4 * 4) = 0xffffffff;
                    }
                    else {
                      iVar21 = 0;
                      if (iVar24 != 0) {
                        iVar21 = *(int *)(iVar24 + 8);
                      }
                      if (*(int *)(iVar21 + iVar4 * 4) == -1) goto LAB_4a0d1860;
                    }
                    iVar4 = iVar4 + 1;
                  } while (iVar4 < 5);
                  iVar6 = 0;
                  uVar17 = uVar19;
                  iVar4 = param_4;
                  do {
                    iVar21 = 0;
                    if (*(int *)(param_1 + 0xe4) != 0) {
                      iVar21 = *(int *)(*(int *)(param_1 + 0xe4) + 8);
                    }
                    if (*(int *)(iVar21 + iVar6 * 4) == -1) {
                      iVar21 = 0;
                      if (*(int *)(param_1 + 0xd0) != 0) {
                        iVar21 = *(int *)(*(int *)(param_1 + 0xd0) + 8);
                      }
                      FUN_4a098798(*(undefined4 *)(iVar21 + iVar6 * 4),uVar17);
                      iVar21 = 0;
                      if (*(int *)(param_1 + 0xd0) != 0) {
                        iVar21 = *(int *)(*(int *)(param_1 + 0xd0) + 8);
                      }
                      FUN_4a0cb16c(*(undefined4 *)(*(int *)(iVar21 + iVar6 * 4) + 0x34));
                      iVar26 = iVar26 + -1;
                      iVar21 = 0;
                      if (*(int *)(param_1 + 0xe4) != 0) {
                        iVar21 = *(int *)(*(int *)(param_1 + 0xe4) + 8);
                      }
                      *(int *)(iVar21 + iVar6 * 4) = iVar4;
                      if (iVar4 == param_4) {
                        local_a0 = iVar6;
                      }
                      iVar4 = iVar4 + local_a4;
                      uVar28 = FUN_4a1457e4(iVar7,iVar4,*(undefined4 *)(iVar9 + 0x6d4));
                      iVar21 = (int)((ulonglong)uVar28 >> 0x20);
                      uVar17 = (undefined4)uVar28;
                      bVar27 = iVar4 == 0;
                      if (iVar4 >= 0) {
                        iVar21 = *(int *)(param_1 + 0xac);
                        bVar27 = iVar21 == iVar4;
                      }
                      if ((bVar27 || (iVar4 < 0 || iVar21 < iVar4)) || (iVar26 == 0)) break;
                    }
                    iVar6 = iVar6 + 1;
                  } while (iVar6 < 5);
                }
              }
            }
          }
        }
        puVar3 = PTR_DAT_4a0d107c;
        FUN_4a0bbcb4(*(undefined4 *)PTR_DAT_4a0d107c);
        FUN_4a0bbb68(*(undefined4 *)puVar3,param_5);
        FUN_4a0bbcf0(*(undefined4 *)puVar3,0xa3);
        FUN_4a0bbcf0(*(undefined4 *)puVar3,0xa3);
        FUN_4a0bbcf0(*(undefined4 *)puVar3,0x82);
        FUN_4a0bbcf0(*(undefined4 *)puVar3,0x82);
        FUN_4a0bbcf0(*(undefined4 *)puVar3,0xa3);
        uVar17 = FUN_4a0bbbcc(*(undefined4 *)puVar3,param_6 + 0x19);
        uVar18 = FUN_4a0bbb68(*(undefined4 *)puVar3,param_5 + 5);
        iVar4 = 0;
        if (*(int *)(param_1 + 0xd0) != 0) {
          iVar4 = *(int *)(*(int *)(param_1 + 0xd0) + 8);
        }
        FUN_4a098d50(*(undefined4 *)(iVar4 + local_a0 * 4),param_2,uVar18,uVar17);
        FUN_4a0bbb28(*(undefined4 *)puVar3);
        (**(code **)(*param_2 + 0x9c))(param_2,uVar14,uVar15,uVar16);
      }
      FUN_4a06cd2c(iVar5,param_2,*(undefined4 *)(param_1 + 0xa0),uVar13);
      iVar4 = FUN_4a143ac8(iVar7,uVar19);
      sVar2 = *(short *)(iVar4 + 0x1a);
      uVar13 = FUN_4a06c410(iVar5);
      FUN_4a06c86c(iVar5,(int)sVar2);
      FUN_4a06afd0(iVar5,param_2,uVar13,4);
      iVar4 = FUN_4a143ac8(iVar7,uVar19);
      if ((*(short *)(iVar4 + 4) != -1) && (iVar4 = FUN_4a063544(uVar8), iVar4 != 0)) {
        (**(code **)(*param_2 + 0x34))(param_2,iVar4,param_5 + param_7 + -0x1b,param_6 + 0x15);
      }
    }
    break;
  case 9:
    if (param_2 == (int *)0x0) {
      return;
    }
    iVar6 = *(int *)(iVar9 + 0xa54);
    iVar9 = 0;
    iVar4 = 0;
    if (iVar6 != 0) {
      iVar4 = *(int *)(iVar6 + 8);
    }
    iVar4 = *(int *)(iVar4 + param_4 * 0x14 + 0xc);
    puVar23 = (undefined4 *)0x0;
    if (iVar4 != 0) {
      puVar23 = *(undefined4 **)(iVar4 + 8);
    }
    if (iVar6 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar6 + 8);
    }
    iVar4 = *(int *)(iVar4 + param_4 * 0x14 + 0xc);
    if (iVar4 != 0) {
      iVar9 = *(int *)(iVar4 + 8);
    }
    uVar19 = *(undefined4 *)(iVar9 + 4);
    iVar4 = FUN_4a143130(iVar7,*puVar23);
    FUN_4a06b074(iVar5,param_2,*(undefined4 *)(iVar4 + 8),3);
    uVar8 = FUN_4a06c410(iVar5);
    FUN_4a06cbe8(iVar5,0xb00);
    FUN_4a06c378(iVar5,uVar19);
    FUN_4a06afd0(iVar5,param_2,uVar8,3);
    return;
  default:
    if (param_2 == (int *)0x0) {
      if (*(int *)(param_1 + 0xa4) == param_4) {
        FUN_4a171fac(param_8);
        FUN_4a171fac(param_7);
        FUN_4a171fac(param_6);
        FUN_4a171fac(param_5);
        FUN_4a09ff60(param_3,0x15d,0x15e,0x15f);
        return;
      }
      FUN_4a171fac(param_8);
      FUN_4a171fac(param_7);
      FUN_4a171fac(param_6);
      FUN_4a171fac(param_5);
      FUN_4a09ff60(param_3,0x14b,0x14c,0x14d);
      return;
    }
    FUN_4a06be4c(iVar5,4);
    FUN_4a06be4c(iVar5,3);
    iVar4 = FUN_4a0fba7c(iVar4);
    iVar9 = *(int *)(iVar4 + 0x6ac);
    iVar4 = -1;
    local_94 = 0;
    local_90 = -1;
    bVar27 = false;
    iVar6 = *(int *)(param_1 + 0x74);
    if (iVar6 == 10) {
      iVar6 = FUN_4a144c98(iVar7,param_4);
      iVar4 = 0;
      if (*(int *)(iVar7 + 0xe0) != 0) {
        iVar4 = *(int *)(*(int *)(iVar7 + 0xe0) + 8);
      }
      iVar4 = (int)*(short *)(iVar4 + iVar6 * 2);
      local_90 = FUN_4a143604(iVar7,iVar6);
      if (iVar6 == iVar9) goto LAB_4a0d1ce8;
LAB_4a0d1cf0:
      bVar27 = false;
    }
    else {
      if (iVar6 != 0xb) {
        if (iVar6 == 0xc) {
          iVar4 = FUN_4a143ac8(iVar7,iVar9);
          iVar6 = FUN_4a0f1910(iVar7,param_4,(int)*(char *)(iVar4 + 0x1f));
          iVar4 = FUN_4a143ac8(iVar7,iVar6);
          iVar4 = *(int *)(iVar4 + 0xc);
        }
        else {
          if (iVar6 != 0xd) goto LAB_4a0d1d80;
          iVar6 = FUN_4a0f0638(iVar7,param_4);
          iVar4 = FUN_4a143ac8(iVar7,iVar6);
          iVar4 = *(int *)(iVar4 + 0xc);
        }
        if (iVar6 == iVar9) {
          bVar27 = true;
        }
        else {
          local_94 = 0;
          local_90 = -1;
          bVar27 = false;
        }
        goto LAB_4a0d1d80;
      }
      iVar6 = FUN_4a1449a4(iVar7,param_4);
      iVar4 = 0;
      if (*(int *)(iVar7 + 0x11c) != 0) {
        iVar4 = *(int *)(*(int *)(iVar7 + 0x11c) + 8);
      }
      iVar4 = (int)*(short *)(iVar4 + iVar6 * 2);
      local_90 = FUN_4a1431cc(iVar7,iVar6);
      if (iVar6 != iVar9) goto LAB_4a0d1cf0;
LAB_4a0d1ce8:
      bVar27 = true;
    }
    local_94 = 0x32;
LAB_4a0d1d80:
    FUN_4a06cd2c(iVar5,param_2,*(undefined4 *)(param_1 + 0xa0),iVar4);
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
    if (bVar27) {
      FUN_4a06b074(iVar5,param_2,0xaf9,3);
    }
    else {
      uVar19 = FUN_4a06c410(iVar5);
      FUN_4a06c86c(iVar5,local_94);
      FUN_4a06afd0(iVar5,param_2,uVar19,3);
    }
    if (local_90 == -1) {
      return;
    }
    iVar4 = FUN_4a063544(uVar8,local_90);
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0d1e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    (**(code **)(*param_2 + 0x34))(param_2,iVar4,param_5 + param_7 + -0xc,param_6 + 0x2a);
    return;
  }
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
  return;
}



// Address: 4a0d1fb4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0d1fb4(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int unaff_r5;
  undefined4 uVar10;
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar11;
  bool bVar12;
  undefined1 auStack_20 [8];
  
  if (*(int *)(param_1 + 0x78) != 0) {
    return;
  }
  FUN_4a08c244(param_1,param_2);
  if (param_2 != 3) {
                    /* WARNING: Could not recover jumptable at 0x4a0d1fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  iVar2 = *(int *)(param_3 + 0xc);
  iVar7 = 0;
  if (iVar2 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(iVar2 + 8);
    iVar7 = *(int *)(iVar2 + 8);
  }
  iVar9 = *(int *)(iVar9 + 4);
  iVar7 = *(int *)(iVar7 + 8);
  iVar2 = FUN_4a135720(param_1,iVar9,iVar7);
  if (iVar2 == 0) {
    uVar5 = 0;
    uVar8 = 0xffffffff;
  }
  else {
    if (*(char *)(param_1 + 0x7c) == '\0') {
      uVar3 = FUN_4a171fac(*(undefined4 *)(param_1 + 0xbc));
      uVar10 = *(undefined4 *)(param_1 + 0x44);
      uVar4 = FUN_4a171fac(iVar7 - *(int *)(param_1 + 0x84));
      uVar4 = FUN_4a1725c0(uVar4,uVar10);
      FUN_4a171bb8(uVar4,uVar3);
      uVar5 = FUN_4a171e1c();
      bVar12 = SCARRY4(uVar5,1);
      iVar2 = uVar5 + 1;
      bVar11 = uVar5 == 0xffffffff;
      if (-2 < (int)uVar5) {
        uVar8 = *(uint *)(param_1 + 0xac);
        bVar12 = SBORROW4(uVar8,uVar5);
        iVar2 = uVar8 - uVar5;
        bVar11 = uVar8 == uVar5;
      }
      uVar8 = uVar5;
      if (!bVar11 && iVar2 < 0 == bVar12) goto LAB_4a0d20c8;
    }
    else {
      uVar3 = FUN_4a171fac(*(undefined4 *)(param_1 + 0xb8));
      uVar10 = *(undefined4 *)(param_1 + 0x5c);
      uVar4 = FUN_4a171fac(iVar9 - *(int *)(param_1 + 0x80));
      uVar4 = FUN_4a1725c0(uVar4,uVar10);
      FUN_4a171bb8(uVar4,uVar3);
      uVar5 = FUN_4a171e1c();
      bVar12 = SCARRY4(uVar5,1);
      iVar2 = uVar5 + 1;
      bVar11 = uVar5 == 0xffffffff;
      if (-2 < (int)uVar5) {
        uVar8 = *(uint *)(param_1 + 0xac);
        bVar12 = SBORROW4(uVar8,uVar5);
        iVar2 = uVar8 - uVar5;
        bVar11 = uVar8 == uVar5;
      }
      uVar8 = uVar5;
      if (!bVar11 && iVar2 < 0 == bVar12) goto LAB_4a0d20c8;
    }
    uVar5 = 0xffffffff;
    uVar8 = uVar5;
  }
LAB_4a0d20c8:
  if (uVar8 != 0xffffffff) {
    uVar5 = (uint)*(byte *)(param_1 + 0x7d);
  }
  if (uVar8 != 0xffffffff && uVar5 != 0) {
    iVar2 = FUN_4a0ff494();
    uVar3 = *(undefined4 *)(iVar2 + 0x520);
    switch(*(undefined4 *)(param_1 + 0x74)) {
    case 0:
    case 2:
    case 6:
    case 7:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
      goto switchD_4a0d20f0_caseD_0;
    default:
      return;
    case 5:
      goto switchD_4a0d20f0_caseD_5;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x4a0d20d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
switchD_4a0d20f0_caseD_5:
  uVar4 = FUN_4a1407b8(*(undefined4 *)(iVar2 + 0x51c),uVar8);
  iVar2 = FUN_4a143130(uVar3,uVar4);
  if ((*(uint *)(iVar2 + 0x10) & 4) == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a0d2158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
switchD_4a0d20f0_caseD_0:
  if (*(int *)(param_1 + 0x110) != -1) {
    FUN_4a0ff494();
    uVar3 = FUN_4a0ff400();
    FUN_4a0cf554(uVar3,*(undefined4 *)(param_1 + 0x110));
  }
  *(uint *)(param_1 + 0xa4) = uVar8;
  *(undefined4 *)(param_1 + 0x78) = 1;
  uVar3 = FUN_4a134aa8(param_1);
  FUN_4a0cd790(uVar3,param_1);
  if (*(int *)(param_1 + 0xf0) == -1) {
    FUN_4a0d222c(param_1,0);
  }
  else {
    FUN_4a0fae94(param_1 + 0xf4,*(int *)(param_1 + 0xf0),0x10);
  }
  if (*(int *)(param_1 + 0xec) != 0) {
    piVar6 = (int *)FUN_4a134aa8(param_1);
    uVar3 = *(undefined4 *)(param_1 + 0xa4);
    FUN_4a16be24(auStack_20,3);
    iVar2 = 0;
    if (unaff_r5 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(unaff_r5 + 8);
    }
    *(undefined4 *)(iVar7 + 4) = 0;
    if (unaff_r5 == 0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = *(undefined4 **)(unaff_r5 + 8);
    }
    *puVar1 = 0x80000000;
    if (unaff_r5 != 0) {
      iVar2 = *(int *)(unaff_r5 + 8);
    }
    *(undefined4 *)(iVar2 + 8) = uVar3;
    (**(code **)(*piVar6 + 0x20))(piVar6,0xb,auStack_20);
    FUN_4a16bef4(auStack_20);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a0d21c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



// Address: 4a0d21e4

void FUN_4a0d21e4(int param_1,int param_2)

{
  undefined4 uVar1;
  
  *(int *)(param_1 + 0xa4) = param_2;
  if (*(char *)(param_1 + 0x7c) == '\0') {
    return;
  }
  if (-1 < param_2) {
    uVar1 = FUN_4a171fac(*(int *)(param_1 + 0xb8) * -param_2);
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    return;
  }
  return;
}



// Address: 4a0d222c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0d222c(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_20 [12];
  int iStack_14;
  
  *(int *)(param_1 + 0x78) = param_2;
  if (param_2 == 0) {
    iVar5 = FUN_4a134aa8(param_1);
    if (*(int *)(iVar5 + 0x40) == param_1) {
      *(undefined4 *)(iVar5 + 0x40) = 0;
    }
    return;
  }
  if (param_2 == 1) {
    uVar3 = FUN_4a134aa8(param_1);
    FUN_4a0cd790(uVar3,param_1);
    if (*(int *)(param_1 + 0xf0) == -1) {
      FUN_4a0d222c(param_1,0);
    }
    else {
      FUN_4a0fae94(param_1 + 0xf4,*(int *)(param_1 + 0xf0),0x10);
    }
    if (*(int *)(param_1 + 0xec) != 0) {
      piVar4 = (int *)FUN_4a134aa8(param_1);
      uVar3 = *(undefined4 *)(param_1 + 0xa4);
      FUN_4a16be24(auStack_20,3);
      iVar5 = 0;
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
      *puVar2 = 0x80000000;
      if (iStack_14 != 0) {
        iVar5 = *(int *)(iStack_14 + 8);
      }
      *(undefined4 *)(iVar5 + 8) = uVar3;
      (**(code **)(*piVar4 + 0x20))(piVar4,0xb,auStack_20);
      FUN_4a16bef4(auStack_20);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a0d22a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// Address: 4a0d22bc

void FUN_4a0d22bc(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10c) = param_2;
  return;
}



// Address: 4a0d22c4

void FUN_4a0d22c4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined1 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  FUN_4a134a98(param_1,1);
  FUN_4a08c230(param_1,param_2,param_3,param_4);
  *(undefined1 *)(param_1 + 0x7d) = param_6;
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x3c);
  if ((*(char *)(param_1 + 0x7c) != '\0') && (iVar1 = FUN_4a134a50(param_1,2), iVar1 != 0)) {
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0xb8);
    *(int *)(param_1 + 0x80) =
         *(int *)(param_1 + 0x90) + (*(int *)(param_1 + 0x98) - *(int *)(param_1 + 0xb8) >> 1);
  }
  if (*(int *)(param_1 + 0x74) == 3) {
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 10;
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + -10;
    *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 8;
  }
  iVar1 = FUN_4a134a50(param_1,2);
  if (iVar1 != 0) {
    return;
  }
  uVar3 = *(undefined4 *)(param_1 + 0xa8);
  iVar1 = FUN_4a134a50(param_1,1);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xa8) = uVar3;
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffffffd;
    return;
  }
  iVar1 = FUN_4a0ff494();
  uVar7 = *(undefined4 *)(iVar1 + 0x520);
  uVar9 = *(undefined4 *)(iVar1 + 0x51c);
  iVar2 = FUN_4a0fba7c();
  FUN_4a134a98(param_1,2);
  *(undefined4 *)(param_1 + 0xb0) = 1;
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0x88) + -0x14;
  *(undefined4 *)(param_1 + 0xa4) = uVar3;
  switch(*(undefined4 *)(param_1 + 0x74)) {
  case 0:
    *(undefined4 *)(param_1 + 0xec) = 0;
    uVar3 = FUN_4a145bfc(iVar1);
    *(undefined4 *)(param_1 + 0xa4) = uVar3;
    *(undefined4 *)(param_1 + 0xac) = 7;
    *(undefined4 *)(param_1 + 0xb0) = 7;
    *(undefined4 *)(param_1 + 0xb4) = 1;
    *(undefined4 *)(param_1 + 0xb8) = 0x76;
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x8c);
    goto switchD_4a0d29f4_default;
  case 1:
    *(undefined4 *)(param_1 + 0xec) = 1;
    uVar3 = FUN_4a13fd18(uVar9);
    *(undefined4 *)(param_1 + 0xac) = uVar3;
    uVar3 = FUN_4a13f8d8(uVar9);
    *(undefined4 *)(param_1 + 0xa4) = uVar3;
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0xac);
    *(undefined4 *)(param_1 + 0xb4) = 1;
    *(undefined4 *)(param_1 + 0xb8) = 0xa0;
    uVar3 = *(undefined4 *)(param_1 + 0x8c);
    break;
  case 2:
    uVar3 = FUN_4a13fb20(uVar9);
    *(undefined4 *)(param_1 + 0xac) = uVar3;
    uVar3 = 0x28;
    break;
  case 3:
    uVar3 = FUN_4a13fa90(uVar9);
    *(undefined4 *)(param_1 + 0xac) = uVar3;
    uVar3 = 0x22;
    break;
  case 4:
    uVar3 = FUN_4a13fb04(uVar9);
    *(undefined4 *)(param_1 + 0xac) = uVar3;
    *(undefined4 *)(param_1 + 0xbc) = 0x2d;
    iVar2 = 0;
    iVar5 = FUN_4a13fb04(uVar9);
    uVar4 = iVar5 - 1;
    if (-1 < (int)uVar4) {
      do {
        uVar3 = FUN_4a13fa58(uVar9,uVar4);
        iVar5 = FUN_4a06bf88(iVar1 + 0x278,uVar3,3);
        if (iVar2 < iVar5) {
          iVar2 = iVar5;
        }
        uVar4 = uVar4 - 1;
      } while (uVar4 < 0x80000000);
    }
    *(int *)(param_1 + 0xc0) = iVar2;
    goto switchD_4a0d29f4_default;
  case 5:
    uVar3 = FUN_4a140cec(uVar9);
    *(undefined4 *)(param_1 + 0xac) = uVar3;
    uVar3 = 0x28;
    break;
  case 6:
    uVar3 = FUN_4a141390(uVar9);
    *(undefined4 *)(param_1 + 0xac) = uVar3;
    uVar3 = 0x28;
    break;
  case 7:
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(iVar2 + 0xa24);
    uVar3 = 0x28;
    break;
  case 8:
    *(undefined4 *)(param_1 + 0xa4) = 0;
    uVar3 = FUN_4a145634(uVar7,*(undefined4 *)(iVar2 + 0x6d4));
    *(undefined4 *)(param_1 + 0xac) = uVar3;
    *(undefined4 *)(param_1 + 0xbc) = 0x28;
    *(undefined4 *)(param_1 + 0xb4) = 1;
    iVar1 = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0xb4;
    do {
      uVar3 = FUN_4a1457e4(uVar7,iVar1,*(undefined4 *)(iVar2 + 0x6d4));
      thunk_FUN_4a161570(0x40);
      uVar9 = FUN_4a099040();
      if (*(int *)(param_1 + 0xd0) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0xd0) + 8);
      }
      *(undefined4 *)(iVar5 + iVar1 * 4) = uVar9;
      if (*(int *)(param_1 + 0xd0) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0xd0) + 8);
      }
      FUN_4a098798(*(undefined4 *)(iVar5 + iVar1 * 4),uVar3);
      if (*(int *)(param_1 + 0xd0) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0xd0) + 8);
      }
      FUN_4a0cb16c(*(undefined4 *)(*(int *)(iVar5 + iVar1 * 4) + 0x34));
      if (*(int *)(param_1 + 0xe4) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0xe4) + 8);
      }
      *(int *)(iVar5 + iVar1 * 4) = iVar1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 5);
    goto switchD_4a0d29f4_default;
  case 9:
    *(undefined4 *)(param_1 + 0xa4) = 0;
    uVar3 = FUN_4a06be4c(iVar1 + 0x278,3);
    *(undefined4 *)(param_1 + 0xbc) = uVar3;
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(iVar2 + 0xa50);
    goto switchD_4a0d29f4_default;
  case 10:
    uVar3 = FUN_4a145540(uVar7);
    *(undefined4 *)(param_1 + 0xac) = uVar3;
    *(undefined4 *)(param_1 + 0xb0) = uVar3;
    *(undefined4 *)(param_1 + 0xb4) = 1;
    *(undefined4 *)(param_1 + 0xb8) = 0xa0;
    uVar3 = *(undefined4 *)(param_1 + 0x8c);
    break;
  case 0xb:
    uVar3 = FUN_4a1454dc(uVar7);
    *(undefined4 *)(param_1 + 0xac) = uVar3;
    *(undefined4 *)(param_1 + 0xb0) = uVar3;
    *(undefined4 *)(param_1 + 0xb4) = 1;
    *(undefined4 *)(param_1 + 0xb8) = 0xa0;
    uVar3 = *(undefined4 *)(param_1 + 0x8c);
    break;
  case 0xc:
    iVar1 = FUN_4a0fba7c(iVar1);
    iVar1 = FUN_4a143ac8(uVar7,*(undefined4 *)(iVar1 + 0x6ac));
    uVar3 = FUN_4a0f5958(uVar7,(int)*(char *)(iVar1 + 0x1f));
    *(undefined4 *)(param_1 + 0xac) = uVar3;
    *(undefined4 *)(param_1 + 0xb0) = uVar3;
    *(undefined4 *)(param_1 + 0xb4) = 1;
    *(undefined4 *)(param_1 + 0xb8) = 0xa0;
    uVar3 = *(undefined4 *)(param_1 + 0x8c);
    break;
  case 0xd:
    uVar3 = FUN_4a0f3e54(uVar7);
    *(undefined4 *)(param_1 + 0xac) = uVar3;
    *(undefined4 *)(param_1 + 0xb0) = uVar3;
    *(undefined4 *)(param_1 + 0xb4) = 1;
    *(undefined4 *)(param_1 + 0xb8) = 0xa0;
    uVar3 = *(undefined4 *)(param_1 + 0x8c);
    break;
  default:
    goto switchD_4a0d29f4_default;
  }
  *(undefined4 *)(param_1 + 0xbc) = uVar3;
switchD_4a0d29f4_default:
  if (*(char *)(param_1 + 0x7c) == '\0') {
    uVar10 = FUN_4a0015f0(*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xb0));
    iVar1 = (uint)(0 < (int)((ulonglong)uVar10 >> 0x20)) + (int)uVar10;
    *(int *)(param_1 + 0xb4) = iVar1;
    iVar1 = iVar1 * *(int *)(param_1 + 0xbc);
    iVar2 = *(int *)(param_1 + 0x8c) - iVar1;
    if (0 < iVar2) {
      iVar2 = 0;
    }
    uVar3 = FUN_4a171fac(iVar2);
    FUN_4a08c614(param_1,uVar3,0);
    FUN_4a08c608(param_1,*(int *)(param_1 + 0x8c) < iVar1);
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    return;
  }
  iVar5 = *(int *)(param_1 + 0xb8);
  *(int *)(param_1 + 0x88) = iVar5;
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x90) + (*(int *)(param_1 + 0x98) - iVar5 >> 1);
  uVar10 = FUN_4a0015f0(*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xb4));
  iVar8 = (int)uVar10 + (uint)(0 < (int)((ulonglong)uVar10 >> 0x20));
  iVar6 = (iVar8 + -1) * iVar5;
  *(int *)(param_1 + 0xb0) = iVar8;
  iVar2 = *(int *)(param_1 + 0xa4);
  iVar1 = -iVar6;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if (iVar6 != 0 && -1 < iVar1) {
    iVar1 = 0;
  }
  uVar3 = FUN_4a171fac(iVar1);
  uVar7 = 0;
  if (*(int *)(param_1 + 0x74) == 0) {
    uVar7 = FUN_4a171fac(iVar5);
    uVar3 = FUN_4a171a94(uVar7,uVar3);
    uVar7 = FUN_4a1724e0(uVar7,0);
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    else if (iVar8 + -1 == iVar2) {
      iVar2 = iVar8 + -2;
    }
  }
  uVar9 = FUN_4a171fac(iVar5);
  FUN_4a08c5fc(param_1,uVar3,uVar7,uVar9);
  FUN_4a08c564(param_1,*(int *)(param_1 + 0x88) <= iVar6);
  uVar3 = FUN_4a171fac(-iVar2 * *(int *)(param_1 + 0xb8));
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  return;
}



// Address: 4a0d23c4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0d23c4(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  int *piVar12;
  int iVar13;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar14;
  undefined *puVar15;
  int iVar16;
  int iVar17;
  undefined *puVar18;
  int iVar19;
  undefined *puVar20;
  bool bVar21;
  bool bVar22;
  int local_48;
  int local_44;
  undefined *local_34;
  int local_30;
  int iStack_2c;
  int *local_28;
  
  iStack_2c = param_1;
  local_28 = param_2;
  iVar3 = FUN_4a0ff494();
  puVar20 = PTR_DAT_4a0d28fc;
  iVar4 = iVar3 + 0x128;
  local_44 = *(int *)(param_1 + 0x98);
  puVar18 = *(undefined **)(param_1 + 0x90);
  iVar19 = *(int *)(param_1 + 0x94);
  local_48 = *(int *)(param_1 + 0x9c);
  iVar5 = FUN_4a0bc1f8(*(undefined4 *)PTR_DAT_4a0d28fc);
  if (((iVar5 == 400) || (iVar5 = FUN_4a0bc1f8(*(undefined4 *)puVar20), iVar5 == 0x140)) &&
     (*(int *)(param_1 + 0x74) == 6 || *(int *)(param_1 + 0x74) == 4)) {
    puVar18 = (undefined *)(**(code **)(*local_28 + 0x74))(local_28);
    if ((int)puVar18 < (int)*(undefined **)(param_1 + 0x90)) {
      puVar18 = *(undefined **)(param_1 + 0x90);
    }
    iVar5 = (**(code **)(*local_28 + 0x78))(local_28);
    iVar13 = *(int *)(param_1 + 0x94);
    if (iVar13 <= iVar5) {
      iVar19 = iVar5;
    }
    local_44 = (int)puVar18 - *(int *)(param_1 + 0x90);
    if (iVar5 < iVar13) {
      iVar19 = iVar13;
    }
    iVar5 = *(int *)(param_1 + 0x90) - (int)puVar18;
    if (local_44 <= iVar5) {
      local_44 = iVar5;
    }
    local_44 = *(int *)(param_1 + 0x98) - local_44;
    local_48 = iVar19 - iVar13;
    if (iVar19 - iVar13 <= iVar13 - iVar19) {
      local_48 = iVar13 - iVar19;
    }
    local_48 = *(int *)(param_1 + 0x9c) - local_48;
  }
  iVar5 = *(int *)(param_1 + 0x88);
  iVar16 = *(int *)(param_1 + 0x80);
  iVar13 = FUN_4a171e1c(*(undefined4 *)(param_1 + 0x5c));
  puVar20 = (undefined *)(iVar13 + iVar16);
  iVar13 = FUN_4a171e1c(*(undefined4 *)(param_1 + 0x44));
  iVar13 = iVar13 + *(int *)(param_1 + 0x84);
  iVar6 = *(int *)(param_1 + 0xbc);
  uVar7 = FUN_4a171fac(iVar5 + -0x14);
  uVar8 = FUN_4a17295c(uVar7,0xffffffff);
  uVar9 = FUN_4a171fac(iVar16);
  uVar8 = FUN_4a171a94(uVar9,uVar8);
  uVar9 = FUN_4a09f974(iVar4,0x7e);
  FUN_4a171bb8(uVar7,uVar9);
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0xac)) {
    local_30 = local_48 + iVar19;
    local_34 = puVar18 + local_44;
    puVar15 = puVar20;
    iVar16 = iVar13;
    do {
      if (*(char *)(param_1 + 0x7c) == '\0') {
        if ((iVar19 - *(int *)(param_1 + 0xbc) < iVar16) &&
           (iVar16 < *(int *)(param_1 + 0xbc) + local_30)) {
LAB_4a0d25a8:
          FUN_4a0d0004(param_1,0,iVar4,iVar5);
          if ((*(int *)(param_1 + 0xb0) == 1) &&
             ((iVar5 < *(int *)(param_1 + 0xac) + -1 && (*(int *)(param_1 + 0x74) != 9)))) {
            uVar7 = FUN_4a171fac(iVar6 + iVar16);
            FUN_4a09f664(iVar4,0x7e,uVar8,uVar7);
          }
        }
      }
      else {
        puVar10 = puVar15 + *(int *)(param_1 + 0xb8);
        bVar22 = SBORROW4((int)puVar10,(int)puVar18);
        iVar17 = (int)puVar10 - (int)puVar18;
        bVar21 = puVar10 == puVar18;
        if ((int)puVar18 < (int)puVar10) {
          bVar22 = SBORROW4((int)local_34,(int)puVar15);
          iVar17 = (int)local_34 - (int)puVar15;
          bVar21 = local_34 == puVar15;
        }
        if (!bVar21 && iVar17 < 0 == bVar22) goto LAB_4a0d25a8;
      }
      iVar17 = *(int *)(param_1 + 0xb0);
      FUN_4a0015f0(iVar5,iVar17);
      if (extraout_r1 == iVar17 + -1) {
        iVar16 = iVar16 + *(int *)(param_1 + 0xbc);
        puVar15 = puVar20;
      }
      else {
        puVar15 = puVar15 + *(int *)(param_1 + 0xb8);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0xac));
  }
  uVar7 = (**(code **)(*local_28 + 0x74))(local_28);
  uVar8 = (**(code **)(*local_28 + 0x78))(local_28);
  uVar9 = (**(code **)(*local_28 + 0x70))(local_28);
  (**(code **)(*local_28 + 0x6c))(local_28);
  (**(code **)(*local_28 + 0x20))(local_28,puVar18,iVar19,local_44);
  FUN_4a09f3a4(iVar4,local_28);
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (0 < *(int *)(param_1 + 0xac)) {
    puVar10 = puVar18 + local_44;
    puVar15 = puVar20;
    do {
      if (*(char *)(param_1 + 0x7c) == '\0') {
        if ((iVar19 - *(int *)(param_1 + 0xbc) < iVar13) &&
           (iVar13 < *(int *)(param_1 + 0xbc) + local_48 + iVar19)) {
LAB_4a0d2798:
          FUN_4a0d0004(param_1,local_28,0,iVar5);
        }
      }
      else {
        puVar11 = puVar15 + *(int *)(param_1 + 0xb8);
        bVar22 = SBORROW4((int)puVar11,(int)puVar18);
        iVar6 = (int)puVar11 - (int)puVar18;
        bVar21 = puVar11 == puVar18;
        if ((int)puVar18 < (int)puVar11) {
          bVar22 = SBORROW4((int)puVar10,(int)puVar15);
          iVar6 = (int)puVar10 - (int)puVar15;
          bVar21 = puVar10 == puVar15;
        }
        if (!bVar21 && iVar6 < 0 == bVar22) goto LAB_4a0d2798;
      }
      iVar6 = *(int *)(param_1 + 0xb0);
      FUN_4a0015f0(iVar5,iVar6);
      if (extraout_r1_00 == iVar6 + -1) {
        iVar13 = iVar13 + *(int *)(param_1 + 0xbc);
        puVar15 = puVar20;
      }
      else {
        puVar15 = puVar15 + *(int *)(param_1 + 0xb8);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0xac));
  }
  (**(code **)(*local_28 + 0x9c))(local_28,uVar7,uVar8,uVar9);
  if (*(char *)(param_1 + 0x7c) != '\0') {
    return;
  }
  uVar7 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x8c));
  uVar8 = FUN_4a171fac(*(int *)(param_1 + 0x80) + *(int *)(param_1 + 0x88));
  FUN_4a1725c0(uVar8,0x41200000);
  uVar8 = FUN_4a17295c(uVar7,0xffffffff);
  uVar9 = FUN_4a171fac(*(undefined4 *)(param_1 + 0x84));
  FUN_4a171a94(uVar9,uVar8);
  FUN_4a171fac(*(int *)(param_1 + 0xb4) * *(int *)(param_1 + 0xbc));
  uVar14 = *(uint *)(param_1 + 0x44);
  FUN_4a171e1c();
  uVar7 = FUN_4a171e1c(uVar7);
  uVar8 = FUN_4a171e1c(uVar14 ^ 0x80000000);
  FUN_4a08c638(param_1,iVar4,uVar8,uVar7);
  piVar12 = local_28;
  if (*(int *)(iVar3 + 0x1e8) == 0) {
    uVar7 = FUN_4a171fac(*(undefined4 *)(iVar3 + 0x1e0));
    uVar8 = FUN_4a171fac(*(undefined4 *)(iVar3 + 0x1e4));
    uVar8 = FUN_4a171bb8(uVar8,uVar7);
    FUN_4a0b529c(*(undefined4 *)(iVar3 + 0x1c0),uVar7,uVar8,0xc2c80000);
  }
  else {
    uVar7 = FUN_4a171fac(*(undefined4 *)(iVar3 + 0x1e0));
    uVar8 = FUN_4a171fac(*(undefined4 *)(iVar3 + 0x1e4));
    uVar8 = FUN_4a171bb8(uVar8,uVar7);
    FUN_4a0b529c(*(undefined4 *)(iVar3 + 0x1c0),uVar7,uVar8,0xc3480000);
  }
  FUN_4a0af110(*(undefined4 *)(iVar3 + 0x1c0),0x42b40000,0);
  uVar7 = (**(code **)(*piVar12 + 0x74))(piVar12);
  uVar8 = (**(code **)(*piVar12 + 0x78))(piVar12);
  uVar9 = (**(code **)(*piVar12 + 0x70))(piVar12);
  (**(code **)(*piVar12 + 0x6c))(piVar12);
  piVar1 = (int *)thunk_FUN_4a0b3908();
  FUN_4a0a83a4(piVar1,piVar12);
  (**(code **)(*piVar1 + 0x20))
            (piVar1,*(undefined4 *)(iVar3 + 0x1d8),*(undefined4 *)(iVar3 + 0x1dc),
             *(undefined4 *)(iVar3 + 0x1e0));
  FUN_4a0a8b14(piVar1,*(undefined4 *)(iVar3 + 0x1b8));
  (**(code **)(*piVar1 + 0x30))(piVar1);
  (**(code **)(*piVar12 + 0x9c))(piVar12,uVar7,uVar8,uVar9);
  iVar19 = *(int *)(*(int *)(iVar3 + 0x1bc) + 0xdc);
  if (iVar19 != 0) {
    for (iVar19 = *(int *)(iVar19 + 0x10); 0 < iVar19; iVar19 = *(int *)(iVar19 + 0x10)) {
      FUN_4a0b4ac8(*(int *)(iVar3 + 0x1bc),
                   **(undefined4 **)(*(int *)(*(int *)(iVar3 + 0x1bc) + 0xdc) + 0x14));
      iVar19 = *(int *)(*(int *)(iVar3 + 0x1bc) + 0xdc);
      if (iVar19 == 0) break;
    }
  }
  puVar2 = (undefined4 *)FUN_4a0c6bc0(&local_34);
  *puVar2 = PTR_PTR_4a09f65c;
  puVar2[2] = *(undefined4 *)(iVar3 + 0x198);
  piVar12 = *(int **)(iVar3 + 0x19c);
  puVar2[3] = piVar12;
  if (piVar12 != (int *)0x0) {
    (**(code **)(*piVar12 + 0xc))();
  }
  iVar19 = iStack_2c;
  local_34 = PTR_PTR_4a09f660;
  iVar4 = 0;
  *puVar2 = PTR_PTR_4a09f660;
  if (0 < (int)puVar2[2]) {
    do {
      if (puVar2[3] == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(puVar2[3] + 8);
      }
      *(undefined2 *)(iVar5 + iVar4 * 2) = 0;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)puVar2[2]);
  }
  iVar4 = FUN_4a0bcc84(&local_34);
  if (iVar4 != 0) {
    iVar5 = 0;
    if (0 < iVar19) {
      do {
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar19);
      if (iVar4 == 0) goto LAB_4a09f638;
    }
    FUN_4a14f21c();
  }
LAB_4a09f638:
  FUN_4a0c6bf4(&local_34);
  *(undefined4 *)(iVar3 + 0x1ec) = 0xc2480000;
  *(undefined4 *)(iVar3 + 0x1f0) = 0;
  return;
}



// Address: 4a0d2900

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0d2900(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined1 uVar5;
  
  if (((param_1[0x1e] != 0) && (param_1[0x1e] == 1)) &&
     (FUN_4a0faf18(param_1 + 0x3d,param_2), (param_1[0x40] & 2U) == 0)) {
    param_1[0x1e] = 0;
    uVar4 = FUN_4a134aa8(param_1);
    FUN_4a0cdbe0(uVar4,param_1);
    if (param_1[0x3b] == 0) {
      uVar4 = FUN_4a134aa8(param_1);
      FUN_4a0cd2cc(uVar4,param_1[0x29]);
    }
  }
  uVar4 = DAT_4a08ccd8;
  uVar5 = param_1[0xb] == 0;
  if (!(bool)uVar5) {
    return;
  }
  FUN_4a171da0(param_1[0x17],param_1[0x1c]);
  if (!(bool)uVar5) {
    iVar1 = param_1[0x17];
    FUN_4a0d4898(iVar1,param_1[0x1c],param_2,uVar4);
    iVar2 = FUN_4a171fac();
    param_1[0x17] = iVar2;
    uVar4 = FUN_4a08c744(param_1,iVar1);
    uVar3 = FUN_4a08c744(param_1,iVar2);
    FUN_4a171da0(uVar4,uVar3);
    if (!(bool)uVar5) {
                    /* WARNING: Could not recover jumptable at 0x4a08cbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x38))(param_1);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a08cbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_4a171da0(param_1[0x11],param_1[0x15]);
  if (!(bool)uVar5) {
    FUN_4a0d4898(param_1[0x11],param_1[0x15],param_2,uVar4);
    iVar1 = FUN_4a171fac();
    param_1[0x11] = iVar1;
    return;
  }
  uVar5 = 1;
  if ((param_1[0x1a] & 0x7fffffffU) == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a08cc28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  iVar1 = FUN_4a08c744(param_1,param_1[0x17]);
  uVar4 = FUN_4a171fac(param_2);
  uVar4 = FUN_4a17211c(uVar4,DAT_4a08ccdc);
  uVar4 = FUN_4a17211c(uVar4,0x43c80000);
  FUN_4a172458(iVar1,param_1[0x17]);
  if ((bool)uVar5) {
    FUN_4a1720a0(iVar1,param_1[0x17]);
    if ((bool)uVar5) goto LAB_4a08ccc8;
    iVar2 = FUN_4a1725c0(param_1[0x17],uVar4);
    FUN_4a172458(iVar1,iVar2);
    if ((bool)uVar5) goto LAB_4a08cc8c;
  }
  else {
    iVar2 = FUN_4a171a94(param_1[0x17],uVar4);
    FUN_4a1720a0(iVar1,iVar2);
    if ((bool)uVar5) {
LAB_4a08cc8c:
      iVar1 = iVar2;
    }
  }
  param_1[0x17] = iVar1;
LAB_4a08ccc8:
  param_1[0x1c] = param_1[0x17];
  return;
}



// Address: 4a0d297c

void FUN_4a0d297c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  iVar1 = FUN_4a134a50(param_1,1,param_3,param_4,param_4);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xa8) = param_2;
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffffffd;
    return;
  }
  iVar1 = FUN_4a0ff494();
  uVar7 = *(undefined4 *)(iVar1 + 0x520);
  uVar9 = *(undefined4 *)(iVar1 + 0x51c);
  iVar2 = FUN_4a0fba7c();
  FUN_4a134a98(param_1,2);
  *(undefined4 *)(param_1 + 0xb0) = 1;
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0x88) + -0x14;
  *(undefined4 *)(param_1 + 0xa4) = param_2;
  switch(*(undefined4 *)(param_1 + 0x74)) {
  case 0:
    *(undefined4 *)(param_1 + 0xec) = 0;
    uVar7 = FUN_4a145bfc(iVar1);
    *(undefined4 *)(param_1 + 0xa4) = uVar7;
    *(undefined4 *)(param_1 + 0xac) = 7;
    *(undefined4 *)(param_1 + 0xb0) = 7;
    *(undefined4 *)(param_1 + 0xb4) = 1;
    *(undefined4 *)(param_1 + 0xb8) = 0x76;
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x8c);
    goto switchD_4a0d29f4_default;
  case 1:
    *(undefined4 *)(param_1 + 0xec) = 1;
    uVar7 = FUN_4a13fd18(uVar9);
    *(undefined4 *)(param_1 + 0xac) = uVar7;
    uVar7 = FUN_4a13f8d8(uVar9);
    *(undefined4 *)(param_1 + 0xa4) = uVar7;
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0xac);
    *(undefined4 *)(param_1 + 0xb4) = 1;
    *(undefined4 *)(param_1 + 0xb8) = 0xa0;
    uVar7 = *(undefined4 *)(param_1 + 0x8c);
    break;
  case 2:
    uVar7 = FUN_4a13fb20(uVar9);
    *(undefined4 *)(param_1 + 0xac) = uVar7;
    uVar7 = 0x28;
    break;
  case 3:
    uVar7 = FUN_4a13fa90(uVar9);
    *(undefined4 *)(param_1 + 0xac) = uVar7;
    uVar7 = 0x22;
    break;
  case 4:
    uVar7 = FUN_4a13fb04(uVar9);
    *(undefined4 *)(param_1 + 0xac) = uVar7;
    *(undefined4 *)(param_1 + 0xbc) = 0x2d;
    iVar2 = 0;
    iVar5 = FUN_4a13fb04(uVar9);
    uVar4 = iVar5 - 1;
    if (-1 < (int)uVar4) {
      do {
        uVar7 = FUN_4a13fa58(uVar9,uVar4);
        iVar5 = FUN_4a06bf88(iVar1 + 0x278,uVar7,3);
        if (iVar2 < iVar5) {
          iVar2 = iVar5;
        }
        uVar4 = uVar4 - 1;
      } while (uVar4 < 0x80000000);
    }
    *(int *)(param_1 + 0xc0) = iVar2;
    goto switchD_4a0d29f4_default;
  case 5:
    uVar7 = FUN_4a140cec(uVar9);
    *(undefined4 *)(param_1 + 0xac) = uVar7;
    uVar7 = 0x28;
    break;
  case 6:
    uVar7 = FUN_4a141390(uVar9);
    *(undefined4 *)(param_1 + 0xac) = uVar7;
    uVar7 = 0x28;
    break;
  case 7:
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(iVar2 + 0xa24);
    uVar7 = 0x28;
    break;
  case 8:
    *(undefined4 *)(param_1 + 0xa4) = 0;
    uVar9 = FUN_4a145634(uVar7,*(undefined4 *)(iVar2 + 0x6d4));
    *(undefined4 *)(param_1 + 0xac) = uVar9;
    *(undefined4 *)(param_1 + 0xbc) = 0x28;
    *(undefined4 *)(param_1 + 0xb4) = 1;
    iVar1 = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0xb4;
    do {
      uVar9 = FUN_4a1457e4(uVar7,iVar1,*(undefined4 *)(iVar2 + 0x6d4));
      thunk_FUN_4a161570(0x40);
      uVar3 = FUN_4a099040();
      if (*(int *)(param_1 + 0xd0) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0xd0) + 8);
      }
      *(undefined4 *)(iVar5 + iVar1 * 4) = uVar3;
      if (*(int *)(param_1 + 0xd0) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0xd0) + 8);
      }
      FUN_4a098798(*(undefined4 *)(iVar5 + iVar1 * 4),uVar9);
      if (*(int *)(param_1 + 0xd0) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0xd0) + 8);
      }
      FUN_4a0cb16c(*(undefined4 *)(*(int *)(iVar5 + iVar1 * 4) + 0x34));
      if (*(int *)(param_1 + 0xe4) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0xe4) + 8);
      }
      *(int *)(iVar5 + iVar1 * 4) = iVar1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 5);
    goto switchD_4a0d29f4_default;
  case 9:
    *(undefined4 *)(param_1 + 0xa4) = 0;
    uVar7 = FUN_4a06be4c(iVar1 + 0x278,3);
    *(undefined4 *)(param_1 + 0xbc) = uVar7;
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(iVar2 + 0xa50);
    goto switchD_4a0d29f4_default;
  case 10:
    uVar7 = FUN_4a145540(uVar7);
    *(undefined4 *)(param_1 + 0xac) = uVar7;
    *(undefined4 *)(param_1 + 0xb0) = uVar7;
    *(undefined4 *)(param_1 + 0xb4) = 1;
    *(undefined4 *)(param_1 + 0xb8) = 0xa0;
    uVar7 = *(undefined4 *)(param_1 + 0x8c);
    break;
  case 0xb:
    uVar7 = FUN_4a1454dc(uVar7);
    *(undefined4 *)(param_1 + 0xac) = uVar7;
    *(undefined4 *)(param_1 + 0xb0) = uVar7;
    *(undefined4 *)(param_1 + 0xb4) = 1;
    *(undefined4 *)(param_1 + 0xb8) = 0xa0;
    uVar7 = *(undefined4 *)(param_1 + 0x8c);
    break;
  case 0xc:
    iVar1 = FUN_4a0fba7c(iVar1);
    iVar1 = FUN_4a143ac8(uVar7,*(undefined4 *)(iVar1 + 0x6ac));
    uVar7 = FUN_4a0f5958(uVar7,(int)*(char *)(iVar1 + 0x1f));
    *(undefined4 *)(param_1 + 0xac) = uVar7;
    *(undefined4 *)(param_1 + 0xb0) = uVar7;
    *(undefined4 *)(param_1 + 0xb4) = 1;
    *(undefined4 *)(param_1 + 0xb8) = 0xa0;
    uVar7 = *(undefined4 *)(param_1 + 0x8c);
    break;
  case 0xd:
    uVar7 = FUN_4a0f3e54(uVar7);
    *(undefined4 *)(param_1 + 0xac) = uVar7;
    *(undefined4 *)(param_1 + 0xb0) = uVar7;
    *(undefined4 *)(param_1 + 0xb4) = 1;
    *(undefined4 *)(param_1 + 0xb8) = 0xa0;
    uVar7 = *(undefined4 *)(param_1 + 0x8c);
    break;
  default:
    goto switchD_4a0d29f4_default;
  }
  *(undefined4 *)(param_1 + 0xbc) = uVar7;
switchD_4a0d29f4_default:
  if (*(char *)(param_1 + 0x7c) == '\0') {
    uVar10 = FUN_4a0015f0(*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xb0));
    iVar1 = (uint)(0 < (int)((ulonglong)uVar10 >> 0x20)) + (int)uVar10;
    *(int *)(param_1 + 0xb4) = iVar1;
    iVar1 = iVar1 * *(int *)(param_1 + 0xbc);
    iVar2 = *(int *)(param_1 + 0x8c) - iVar1;
    if (0 < iVar2) {
      iVar2 = 0;
    }
    uVar7 = FUN_4a171fac(iVar2);
    FUN_4a08c614(param_1,uVar7,0);
    FUN_4a08c608(param_1,*(int *)(param_1 + 0x8c) < iVar1);
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    return;
  }
  iVar5 = *(int *)(param_1 + 0xb8);
  *(int *)(param_1 + 0x88) = iVar5;
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x90) + (*(int *)(param_1 + 0x98) - iVar5 >> 1);
  uVar10 = FUN_4a0015f0(*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xb4));
  iVar8 = (int)uVar10 + (uint)(0 < (int)((ulonglong)uVar10 >> 0x20));
  iVar6 = (iVar8 + -1) * iVar5;
  *(int *)(param_1 + 0xb0) = iVar8;
  iVar2 = *(int *)(param_1 + 0xa4);
  iVar1 = -iVar6;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if (iVar6 != 0 && -1 < iVar1) {
    iVar1 = 0;
  }
  uVar7 = FUN_4a171fac(iVar1);
  uVar9 = 0;
  if (*(int *)(param_1 + 0x74) == 0) {
    uVar9 = FUN_4a171fac(iVar5);
    uVar7 = FUN_4a171a94(uVar9,uVar7);
    uVar9 = FUN_4a1724e0(uVar9,0);
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    else if (iVar8 + -1 == iVar2) {
      iVar2 = iVar8 + -2;
    }
  }
  uVar3 = FUN_4a171fac(iVar5);
  FUN_4a08c5fc(param_1,uVar7,uVar9,uVar3);
  FUN_4a08c564(param_1,*(int *)(param_1 + 0x88) <= iVar6);
  uVar7 = FUN_4a171fac(-iVar2 * *(int *)(param_1 + 0xb8));
  *(undefined4 *)(param_1 + 0x5c) = uVar7;
  *(undefined4 *)(param_1 + 0x70) = uVar7;
  return;
}



// Address: 4a0d2ea8

int FUN_4a0d2ea8(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined1 auStack_4c [20];
  undefined1 auStack_38 [20];
  
  puVar3 = (undefined4 *)FUN_4a08cd00();
  puVar1 = PTR_PTR_4a0d3204;
  *puVar3 = PTR_PTR_4a0d3204;
  puVar3[4] = puVar1 + 100;
  puVar3[6] = puVar1 + 0x84;
  puVar3[7] = puVar1 + 0x94;
  puVar3[8] = puVar1 + 0xa4;
  puVar3[5] = puVar1 + 0x74;
  puVar3[3] = puVar1 + 0x54;
  puVar3[2] = puVar1 + 0x44;
  puVar3[9] = puVar1 + 0xb4;
  puVar3[0x1d] = param_2;
  puVar3[0x1e] = 0;
  *(undefined1 *)(puVar3 + 0x1f) = 0;
  *(undefined1 *)((int)puVar3 + 0x7d) = 1;
  puVar3[0x20] = 0;
  puVar3[0x21] = 0;
  puVar3[0x22] = 0;
  puVar3[0x23] = 0;
  puVar3[0x24] = 0;
  puVar3[0x25] = 0;
  puVar3[0x26] = 0;
  puVar3[0x27] = 0;
  puVar3[0x28] = 0;
  puVar3[0x2a] = 0xffffffff;
  puVar3[0x29] = 0;
  puVar3[0x2b] = 0;
  puVar3[0x2c] = 0;
  puVar3[0x2d] = 0;
  puVar3[0x2e] = 0;
  puVar3[0x2f] = 0;
  puVar3[0x30] = 0;
  puVar3 = (undefined4 *)FUN_4a0c6bc0(puVar3 + 0x31);
  puVar1 = PTR_PTR_4a0d3208;
  puVar3[2] = 0;
  *puVar3 = puVar1;
  puVar3[3] = 0;
  puVar3 = (undefined4 *)FUN_4a0c6bc0(puVar3 + 5);
  puVar2 = PTR_PTR_4a0d320c;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = puVar2;
  puVar3[5] = 0;
  puVar3[6] = 0;
  iVar4 = FUN_4a0fb394(puVar3 + 7);
  *(undefined4 *)(iVar4 + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar4 + 0x14) = 1;
  *(undefined4 *)(iVar4 + 0x18) = 0;
  *(undefined4 *)(iVar4 + 0x1c) = 0xffffffff;
  switch(param_2) {
  case 0:
    *(undefined1 *)(iVar4 + -0x78) = 1;
    *(undefined4 *)(iVar4 + 0x1c) = 0x15;
    break;
  case 1:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
    *(undefined1 *)(iVar4 + -0x78) = 1;
    break;
  case 8:
    *(undefined1 *)(iVar4 + -0x78) = 1;
    piVar5 = (int *)FUN_4a0c6bc0(auStack_38);
    piVar5[2] = 0;
    piVar5[3] = 0;
    *piVar5 = (int)puVar1;
    iVar6 = FUN_4a15e080(0x14);
    if (iVar6 == 0) {
      iVar6 = FUN_4a1669a8();
    }
    iVar7 = 0;
    do {
      *(undefined4 *)(iVar6 + iVar7 * 4) = 0;
      iVar7 = iVar7 + 1;
    } while (iVar7 < 5);
    thunk_FUN_4a161570(0x18);
    piVar8 = (int *)FUN_4a0c0628();
    piVar8[2] = iVar6;
    piVar8[3] = 4;
    piVar8[4] = 5;
    puVar1 = PTR_PTR_4a0d3210;
    *piVar8 = (int)PTR_PTR_4a0d3210;
    *(undefined1 *)(piVar8 + 5) = 1;
    if (piVar8 != (int *)0x0) {
      (**(code **)(puVar1 + 0xc))(piVar8);
    }
    (**(code **)(*piVar5 + 0x1c))(piVar5);
    piVar5[2] = 5;
    piVar5[3] = (int)piVar8;
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 0xc))(piVar8);
    }
    (**(code **)(*(int *)(iVar4 + -0x30) + 0x1c))((int *)(iVar4 + -0x30));
    *(undefined4 *)(iVar4 + -0x28) = 5;
    *(int **)(iVar4 + -0x24) = piVar8;
    FUN_4a169b9c(auStack_38);
    piVar5 = (int *)FUN_4a0c6bc0(auStack_4c);
    piVar5[2] = 0;
    piVar5[3] = 0;
    *piVar5 = (int)puVar2;
    iVar6 = FUN_4a15e080(0x14);
    if (iVar6 == 0) {
      iVar6 = FUN_4a1669a8();
    }
    iVar7 = 0;
    do {
      *(undefined4 *)(iVar6 + iVar7 * 4) = 0;
      iVar7 = iVar7 + 1;
    } while (iVar7 < 5);
    thunk_FUN_4a161570(0x18);
    piVar8 = (int *)FUN_4a0c0628();
    piVar8[3] = 4;
    piVar8[4] = 5;
    piVar8[2] = iVar6;
    *piVar8 = (int)puVar1;
    *(undefined1 *)(piVar8 + 5) = 1;
    if (piVar8 != (int *)0x0) {
      (**(code **)(puVar1 + 0xc))(piVar8);
    }
    (**(code **)(*piVar5 + 0x1c))(piVar5);
    piVar5[2] = 5;
    piVar5[3] = (int)piVar8;
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 0xc))(piVar8);
    }
    (**(code **)(*(int *)(iVar4 + -0x1c) + 0x1c))((int *)(iVar4 + -0x1c));
    *(undefined4 *)(iVar4 + -0x14) = 5;
    *(int **)(iVar4 + -0x10) = piVar8;
    FUN_4a16bef4(auStack_4c);
  }
  return iVar4 + -0xf4;
}



// Address: 4a0d322c

void FUN_4a0d322c(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  puVar1 = PTR_PTR_4a0d32e0;
  *param_1 = PTR_PTR_4a0d32e0;
  param_1[4] = puVar1 + 100;
  param_1[6] = puVar1 + 0x84;
  param_1[7] = puVar1 + 0x94;
  param_1[8] = puVar1 + 0xa4;
  param_1[5] = puVar1 + 0x74;
  param_1[3] = puVar1 + 0x54;
  param_1[2] = puVar1 + 0x44;
  param_1[9] = puVar1 + 0xb4;
  if (param_1[0x1d] == 8) {
    iVar4 = 0;
    do {
      if (param_1[0x34] == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(param_1[0x34] + 8);
      }
      piVar3 = *(int **)(iVar2 + iVar4 * 4);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 4))();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 5);
  }
  iVar4 = FUN_4a16bef4(param_1 + 0x36);
  iVar4 = FUN_4a169b9c(iVar4 + -0x14);
  *(undefined **)(iVar4 + -0xc4) = PTR_PTR_4a0c0674;
  *(undefined4 *)(iVar4 + -0xc0) = 0xffffffff;
  return;
}



// Address: 4a0d32e4

void FUN_4a0d32e4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_4a0ff494();
  iVar2 = FUN_4a0fe640(uVar1,0,5);
  uVar1 = *(undefined4 *)(PTR_DAT_4a0d336c + iVar2 * 4);
  *(undefined1 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x14) = 0;
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 0:
    *(undefined4 *)(param_1 + 0x18) = 5;
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x18) = 2;
    FUN_4a0866c0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x24));
  }
  *(int *)(param_1 + 0x2c) = iVar2;
  return;
}



// Address: 4a0d3370

void FUN_4a0d3370(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_20 [20];
  
  FUN_4a0c707c(auStack_20,param_3);
  iVar1 = FUN_4a13e010(auStack_20,*(undefined4 *)PTR_PTR_4a0d341c);
  if (iVar1 == 0) {
    iVar1 = FUN_4a13e010(auStack_20,*(undefined4 *)PTR_PTR_4a0d3420);
    if (iVar1 == 0) {
      iVar1 = FUN_4a13e010(auStack_20,*(undefined4 *)PTR_PTR_4a0d3424);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x18) = 5;
        *(undefined4 *)(param_1 + 0x1c) = 0xfa;
      }
      goto LAB_4a0d3408;
    }
    if (*(int *)(param_1 + 0x18) != 1) goto LAB_4a0d3408;
  }
  else if (*(int *)(param_1 + 0x18) != 2) goto LAB_4a0d3408;
  *(undefined4 *)(param_1 + 0x18) = 3;
LAB_4a0d3408:
  FUN_4a0c72f4(auStack_20);
  return;
}



// Address: 4a0d34e4

void FUN_4a0d34e4(void)

{
  return;
}



// Address: 4a0d34e8

void FUN_4a0d34e8(int param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  
  iVar3 = *(int *)(param_1 + 0x34);
  while (iVar3 != 0) {
    FUN_4a0c74d4();
    iVar3 = *(int *)(param_1 + 0x34);
  }
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  iVar3 = *(int *)(param_1 + 0x10) - param_2;
  *(int *)(param_1 + 0x10) = iVar3;
  if (iVar3 < 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xfa;
    if (*(char *)(param_1 + 0xf) == '\0') {
      FUN_4a0c8090();
    }
    else {
      iVar3 = FUN_4a0c8090();
      if (iVar3 == 0) {
        *(undefined1 *)(param_1 + 0xf) = 0;
      }
      else if (*(char *)(param_1 + 0x30) == '\0') {
        *(undefined1 *)(param_1 + 0xc) = 0;
      }
    }
  }
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 3:
    cVar1 = *(char *)(param_1 + 0xf);
    bVar7 = cVar1 == '\0';
    if (bVar7) {
      cVar1 = *(char *)(param_1 + 0xe);
    }
    if ((bVar7 && cVar1 == '\0') &&
       (*(undefined4 *)(param_1 + 0x18) = 4, *(int *)(param_1 + 0x20) != -1)) {
      FUN_4a085310(*(undefined4 *)(param_1 + 8));
    }
    break;
  case 5:
    cVar1 = *(char *)(param_1 + 0xf);
    bVar7 = cVar1 != '\0';
    if (!bVar7) {
      cVar1 = *(char *)(param_1 + 0xe);
    }
    if (bVar7 || cVar1 != '\0') break;
    if (0 < *(int *)(param_1 + 0x1c)) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) - param_2;
      break;
    }
    if (*(char *)(param_1 + 0xc) == '\0') {
LAB_4a0d3628:
      uVar2 = 0;
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x2c);
      bVar7 = uVar4 == 0xffffffff;
      if (bVar7) {
        uVar4 = (uint)*(byte *)(param_1 + 0x30);
      }
      bVar8 = bVar7 && uVar4 == 0;
      if (bVar7 && uVar4 == 0) {
        bVar8 = *(int *)(param_1 + 0x20) == *(int *)(param_1 + 0x28);
      }
      if ((bVar8) && (*(char *)(param_1 + 0x14) == '\0')) goto LAB_4a0d3628;
      uVar2 = 1;
    }
    *(undefined1 *)(param_1 + 0xc) = uVar2;
    *(undefined1 *)(param_1 + 0x14) = 0;
    iVar3 = DAT_4a0d36b4;
    iVar5 = *(int *)(param_1 + 0x2c);
    if (iVar5 != -1) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(PTR_DAT_4a0d36b0 + iVar5 * 4);
      iVar3 = (int)((ulonglong)((longlong)iVar3 * (longlong)(iVar5 + 1)) >> 0x20);
      *(int *)(param_1 + 0x2c) = iVar5 + 1 + (iVar3 - (iVar3 >> 0x1f)) * -6;
    }
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x28);
    FUN_4a086318(*(undefined4 *)(param_1 + 8));
    FUN_4a0856c0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x20),param_1);
    uVar6 = FUN_4a086608(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x20),0x3f800000);
    *(undefined4 *)(param_1 + 0x24) = uVar6;
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}



// Address: 4a0d36b8

void FUN_4a0d36b8(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  iVar1 = host_s3eAudioGetInt_arm(1);
  if (iVar1 == 0) {
    return;
  }
  return;
}



// Address: 4a0d36cc

void FUN_4a0d36cc(void)

{
  return;
}



// Address: 4a0d36d0

void FUN_4a0d36d0(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  *(undefined1 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(char *)(param_1 + 0x30) = (char)((param_3 & 2) >> 1);
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(byte *)(param_1 + 0x14) = (byte)param_3 & 1;
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 0:
    *(undefined4 *)(param_1 + 0x18) = 5;
    return;
  case 1:
    break;
  default:
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 2;
  uVar4 = *(uint *)(param_1 + 0x24);
  if ((int)uVar4 < 0) {
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x74);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
  }
  iVar3 = 0;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  iVar2 = *(int *)(iVar2 + (uVar4 & 0xffff) * 0x14 + 0xc);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 8);
  }
  piVar5 = *(int **)(iVar3 + (uVar4 >> 0x10) * 4);
  if (piVar5 == (int *)0x0) {
    return;
  }
  (**(code **)(*piVar5 + 0x40))(piVar5);
                    /* WARNING: Could not recover jumptable at 0x4a08673c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar5 + 0x38))(piVar5,*(code **)(*piVar5 + 0x38),0);
  return;
}



// Address: 4a0d3730

void FUN_4a0d3730(undefined4 *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = PTR_PTR_4a0d37bc;
  *param_1 = *(undefined4 *)PTR_PTR_4a0d37bc;
  iVar2 = FUN_4a0c6bc0(param_1 + 0xe);
  piVar3 = (int *)FUN_4a0bf4f0(iVar2 + -0x38,puVar1 + 4);
  iVar2 = *(int *)puVar1;
  *piVar3 = iVar2;
  *(undefined4 *)((int)piVar3 + *(int *)(iVar2 + -0xc)) = *(undefined4 *)(puVar1 + 0xc);
  piVar3[1] = (int)PTR_PTR_4a0d37c0;
  piVar3[2] = param_2;
  *(undefined1 *)(piVar3 + 3) = 0;
  *(undefined1 *)((int)piVar3 + 0xd) = 1;
  *(undefined1 *)((int)piVar3 + 0xe) = 0;
  *(undefined1 *)((int)piVar3 + 0xf) = 1;
  piVar3[4] = 0;
  *(undefined1 *)(piVar3 + 5) = 0;
  piVar3[6] = 0;
  piVar3[7] = 0;
  piVar3[8] = -1;
  piVar3[9] = -1;
  piVar3[10] = -1;
  piVar3[0xb] = -1;
  *(undefined1 *)(piVar3 + 0xc) = 0;
  piVar3[0xd] = 0;
  return;
}



// Address: 4a0d37f4

int FUN_4a0d37f4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_4a0bf528(param_1,PTR_PTR_4a0d3814);
  iVar1 = FUN_4a0c6bf4(iVar1 + 0x38);
  return iVar1 + -0x38;
}



// Address: 4a0d3818

undefined4 FUN_4a0d3818(short *param_1,short *param_2,uint param_3)

{
  while( true ) {
    if (param_3 == 0) {
      return 1;
    }
    if (*param_1 != *param_2) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 - 1 & 0xffff;
  }
  return 0;
}



// Address: 4a0d383c

void FUN_4a0d383c(undefined4 param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_4a0d3894;
  if (((*(undefined4 **)PTR_DAT_4a0d3894)[0x12] == 0) ||
     (piVar2 = (int *)**(undefined4 **)PTR_DAT_4a0d3894,
     iVar3 = FUN_4a1652c8(piVar2,param_1,*(undefined4 *)(*piVar2 + 0x10)), iVar3 == 0)) {
    if ((*(int *)(*(int *)puVar1 + 0x4c) == 0) ||
       (piVar2 = *(int **)(*(int *)puVar1 + 4),
       iVar3 = FUN_4a1652c8(piVar2,param_1,*(undefined4 *)(*piVar2 + 0x10)), iVar3 == 0)) {
      thunk_FUN_4a14f21c(param_1);
      return;
    }
    piVar2 = *(int **)(*(int *)puVar1 + 4);
  }
  else {
    piVar2 = (int *)**(undefined4 **)puVar1;
  }
  FUN_4a1652c8(piVar2,param_1,*(undefined4 *)(*piVar2 + 8));
  return;
}



// Address: 4a0d3898

undefined4 * FUN_4a0d3898(undefined4 *param_1,undefined4 *param_2)

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
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  uVar1 = param_2[6];
  uVar2 = param_1[2];
  uVar3 = thunk_FUN_4a17211c(uVar2,uVar1);
  uVar4 = param_2[3];
  uVar5 = param_1[1];
  uVar6 = thunk_FUN_4a17211c(uVar5,uVar4);
  uVar7 = *param_2;
  uVar8 = *param_1;
  uVar9 = thunk_FUN_4a17211c(uVar8,uVar7);
  uVar6 = thunk_FUN_4a171a94(uVar9,uVar6);
  uVar3 = thunk_FUN_4a171a94(uVar6,uVar3);
  uVar13 = param_2[7];
  uVar6 = thunk_FUN_4a17211c(uVar2);
  uVar14 = param_2[4];
  uVar9 = thunk_FUN_4a17211c(uVar5);
  uVar15 = param_2[1];
  uVar10 = thunk_FUN_4a17211c(uVar8);
  uVar9 = thunk_FUN_4a171a94(uVar10,uVar9);
  uVar6 = thunk_FUN_4a171a94(uVar9,uVar6);
  uVar16 = param_2[8];
  uVar2 = thunk_FUN_4a17211c(uVar2);
  uVar17 = param_2[5];
  uVar5 = thunk_FUN_4a17211c(uVar5);
  uVar18 = param_2[2];
  uVar8 = thunk_FUN_4a17211c(uVar8);
  uVar5 = thunk_FUN_4a171a94(uVar8,uVar5);
  uVar2 = thunk_FUN_4a171a94(uVar5,uVar2);
  uVar19 = param_1[5];
  uVar5 = thunk_FUN_4a17211c(uVar19,uVar1);
  uVar8 = param_1[4];
  uVar9 = thunk_FUN_4a17211c(uVar8,uVar4);
  uVar10 = param_1[3];
  uVar11 = thunk_FUN_4a17211c(uVar10,uVar7);
  uVar9 = thunk_FUN_4a171a94(uVar11,uVar9);
  uVar5 = thunk_FUN_4a171a94(uVar9,uVar5);
  uVar9 = thunk_FUN_4a17211c(uVar19,uVar13);
  uVar11 = thunk_FUN_4a17211c(uVar8,uVar14);
  uVar12 = thunk_FUN_4a17211c(uVar10,uVar15);
  uVar11 = thunk_FUN_4a171a94(uVar12,uVar11);
  uVar9 = thunk_FUN_4a171a94(uVar11,uVar9);
  uVar11 = thunk_FUN_4a17211c(uVar19,uVar16);
  uVar8 = thunk_FUN_4a17211c(uVar8,uVar17);
  uVar10 = thunk_FUN_4a17211c(uVar10,uVar18);
  uVar8 = thunk_FUN_4a171a94(uVar10,uVar8);
  uVar8 = thunk_FUN_4a171a94(uVar8,uVar11);
  uVar10 = param_1[8];
  uVar1 = thunk_FUN_4a17211c(uVar10,uVar1);
  uVar11 = param_1[7];
  uVar4 = thunk_FUN_4a17211c(uVar11,uVar4);
  uVar12 = param_1[6];
  uVar7 = thunk_FUN_4a17211c(uVar12,uVar7);
  uVar4 = thunk_FUN_4a171a94(uVar7,uVar4);
  uVar1 = thunk_FUN_4a171a94(uVar4,uVar1);
  uVar4 = thunk_FUN_4a17211c(uVar10,uVar13);
  uVar7 = thunk_FUN_4a17211c(uVar11,uVar14);
  uVar13 = thunk_FUN_4a17211c(uVar12,uVar15);
  uVar7 = thunk_FUN_4a171a94(uVar13,uVar7);
  uVar4 = thunk_FUN_4a171a94(uVar7,uVar4);
  uVar7 = thunk_FUN_4a17211c(uVar10,uVar16);
  uVar10 = thunk_FUN_4a17211c(uVar11,uVar17);
  uVar11 = thunk_FUN_4a17211c(uVar12,uVar18);
  uVar10 = thunk_FUN_4a171a94(uVar11,uVar10);
  uVar7 = thunk_FUN_4a171a94(uVar10,uVar7);
  *param_1 = uVar3;
  param_1[1] = uVar6;
  param_1[2] = uVar2;
  param_1[4] = uVar9;
  param_1[3] = uVar5;
  param_1[6] = uVar1;
  param_1[5] = uVar8;
  param_1[8] = uVar7;
  param_1[7] = uVar4;
  return param_1;
}



// Address: 4a0d3a78

undefined4 * FUN_4a0d3a78(undefined4 *param_1,undefined4 *param_2)

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
  undefined4 uVar16;
  
  uVar1 = FUN_4a17211c(param_2[2],param_1[6]);
  uVar2 = FUN_4a17211c(param_2[1],param_1[3]);
  uVar3 = FUN_4a17211c(*param_2,*param_1);
  uVar2 = FUN_4a171a94(uVar3,uVar2);
  uVar1 = FUN_4a171a94(uVar2,uVar1);
  uVar2 = FUN_4a17211c(param_2[2],param_1[7]);
  uVar3 = FUN_4a17211c(param_2[1],param_1[4]);
  uVar4 = FUN_4a17211c(*param_2,param_1[1]);
  uVar3 = FUN_4a171a94(uVar4,uVar3);
  uVar2 = FUN_4a171a94(uVar3,uVar2);
  uVar3 = FUN_4a17211c(param_2[2],param_1[8]);
  uVar4 = FUN_4a17211c(param_2[1],param_1[5]);
  uVar5 = FUN_4a17211c(*param_2,param_1[2]);
  uVar4 = FUN_4a171a94(uVar5,uVar4);
  uVar3 = FUN_4a171a94(uVar4,uVar3);
  uVar4 = FUN_4a17211c(param_2[5],param_1[6]);
  uVar5 = FUN_4a17211c(param_2[4],param_1[3]);
  uVar6 = FUN_4a17211c(param_2[3],*param_1);
  uVar5 = FUN_4a171a94(uVar6,uVar5);
  uVar4 = FUN_4a171a94(uVar5,uVar4);
  uVar5 = FUN_4a17211c(param_2[5],param_1[7]);
  uVar6 = FUN_4a17211c(param_2[4],param_1[4]);
  uVar7 = FUN_4a17211c(param_2[3],param_1[1]);
  uVar6 = FUN_4a171a94(uVar7,uVar6);
  uVar5 = FUN_4a171a94(uVar6,uVar5);
  uVar6 = FUN_4a17211c(param_2[5],param_1[8]);
  uVar7 = FUN_4a17211c(param_2[4],param_1[5]);
  uVar8 = FUN_4a17211c(param_2[3],param_1[2]);
  uVar7 = FUN_4a171a94(uVar8,uVar7);
  uVar6 = FUN_4a171a94(uVar7,uVar6);
  uVar7 = FUN_4a17211c(param_2[8],param_1[6]);
  uVar8 = FUN_4a17211c(param_2[7],param_1[3]);
  uVar9 = FUN_4a17211c(param_2[6],*param_1);
  uVar8 = FUN_4a171a94(uVar9,uVar8);
  uVar7 = FUN_4a171a94(uVar8,uVar7);
  uVar8 = FUN_4a17211c(param_2[8],param_1[7]);
  uVar9 = FUN_4a17211c(param_2[7],param_1[4]);
  uVar10 = FUN_4a17211c(param_2[6],param_1[1]);
  uVar9 = FUN_4a171a94(uVar10,uVar9);
  uVar8 = FUN_4a171a94(uVar9,uVar8);
  uVar9 = FUN_4a17211c(param_2[8],param_1[8]);
  uVar10 = FUN_4a17211c(param_2[7],param_1[5]);
  uVar11 = FUN_4a17211c(param_2[6],param_1[2]);
  uVar10 = FUN_4a171a94(uVar11,uVar10);
  uVar9 = FUN_4a171a94(uVar10,uVar9);
  uVar14 = param_2[0xb];
  uVar10 = FUN_4a17211c(param_1[6],uVar14);
  uVar15 = param_2[10];
  uVar11 = FUN_4a17211c(param_1[3],uVar15);
  uVar16 = param_2[9];
  uVar12 = FUN_4a17211c(*param_1,uVar16);
  uVar11 = FUN_4a171a94(uVar12,uVar11);
  uVar10 = FUN_4a171a94(uVar11,uVar10);
  uVar10 = FUN_4a171a94(uVar10,param_1[9]);
  uVar11 = FUN_4a17211c(param_1[7],uVar14);
  uVar12 = FUN_4a17211c(param_1[4],uVar15);
  uVar13 = FUN_4a17211c(param_1[1],uVar16);
  uVar12 = FUN_4a171a94(uVar13,uVar12);
  uVar11 = FUN_4a171a94(uVar12,uVar11);
  uVar11 = FUN_4a171a94(uVar11,param_1[10]);
  uVar12 = FUN_4a17211c(param_1[8],uVar14);
  uVar13 = FUN_4a17211c(param_1[5],uVar15);
  uVar14 = FUN_4a17211c(param_1[2],uVar16);
  uVar13 = FUN_4a171a94(uVar14,uVar13);
  uVar12 = FUN_4a171a94(uVar13,uVar12);
  uVar12 = FUN_4a171a94(uVar12,param_1[0xb]);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  param_1[8] = uVar9;
  param_1[9] = uVar10;
  param_1[10] = uVar11;
  param_1[0xb] = uVar12;
  return param_1;
}



// Address: 4a0d3e28

void FUN_4a0d3e28(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  puVar7 = param_1 + 6;
  puVar6 = param_1 + 3;
  thunk_FUN_4a0e4cdc(puVar7);
  uVar1 = param_1[1];
  uVar2 = param_1[8];
  uVar3 = thunk_FUN_4a17211c(uVar2,uVar1);
  uVar8 = param_1[2];
  uVar4 = param_1[7];
  uVar5 = thunk_FUN_4a17211c(uVar4,uVar8);
  uVar3 = thunk_FUN_4a1725c0(uVar5,uVar3);
  uVar5 = *puVar7;
  uVar8 = thunk_FUN_4a17211c(uVar5,uVar8);
  uVar9 = *param_1;
  uVar2 = thunk_FUN_4a17211c(uVar2,uVar9);
  uVar2 = thunk_FUN_4a1725c0(uVar2,uVar8);
  uVar4 = thunk_FUN_4a17211c(uVar4,uVar9);
  uVar1 = thunk_FUN_4a17211c(uVar5,uVar1);
  uVar1 = thunk_FUN_4a1725c0(uVar1,uVar4);
  *puVar6 = uVar3;
  param_1[4] = uVar2;
  param_1[5] = uVar1;
  thunk_FUN_4a0e4cdc(puVar6,uVar3,uVar2,param_1 + 5);
  uVar1 = param_1[7];
  uVar2 = param_1[5];
  uVar3 = thunk_FUN_4a17211c(uVar2,uVar1);
  uVar9 = param_1[8];
  uVar4 = param_1[4];
  uVar5 = thunk_FUN_4a17211c(uVar4,uVar9);
  uVar3 = thunk_FUN_4a1725c0(uVar5,uVar3);
  uVar8 = *puVar6;
  uVar5 = thunk_FUN_4a17211c(uVar8,uVar9);
  uVar9 = *puVar7;
  uVar2 = thunk_FUN_4a17211c(uVar2,uVar9);
  uVar2 = thunk_FUN_4a1725c0(uVar2,uVar5);
  uVar4 = thunk_FUN_4a17211c(uVar4,uVar9);
  uVar1 = thunk_FUN_4a17211c(uVar8,uVar1);
  uVar1 = thunk_FUN_4a1725c0(uVar1,uVar4);
  *param_1 = uVar3;
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  return;
}



// Address: 4a0d3f10

int FUN_4a0d3f10(int param_1,int param_2)

{
  thunk_FUN_4a001134(param_1,param_2,0x24);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  return param_1;
}



// Address: 4a0d3f30

void FUN_4a0d3f30(short *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_38 [8];
  int local_30;
  ushort local_26;
  ushort local_24;
  undefined4 local_20;
  int local_18;
  
  thunk_FUN_4a161570(0xc4);
  iVar1 = FUN_4a0633c4();
  *(undefined1 *)(iVar1 + 0x41) = *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x41);
  FUN_4a06157c(iVar1,((*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x34) << 0xd) >> 0x1f) + 1);
  *(int *)(param_1 + 2) = iVar1;
  thunk_FUN_4a0ecbc4(auStack_38);
  uVar2 = FUN_4a0e4a6a(param_2);
  thunk_FUN_4a0ecab0(auStack_38,uVar2);
  thunk_FUN_4a0ebe9c(auStack_38,(int)*param_1 * (int)*(short *)(param_3 + 0x18) >> 0xc);
  thunk_FUN_4a0ecb88(auStack_38,(int)param_1[1] * (int)*(short *)(param_3 + 0x1a) >> 0xc);
  thunk_FUN_4a0e4d6c(auStack_38,0,0,0,0);
  if ((((3 < local_30 - 0x20U) && (local_30 != 0x27)) && (local_30 != 0x34)) &&
     ((local_30 != 0x2b && (local_30 != 0x35)))) {
    local_18 = (uint)local_26 * (uint)local_24;
  }
  thunk_FUN_4a001274(local_20,local_18);
  for (uVar4 = 0; uVar4 < *(uint *)(param_1 + 6); uVar4 = uVar4 + 1) {
    iVar3 = *(int *)(param_1 + 4) + uVar4 * 0x18;
    FUN_4a02c880(auStack_38,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 0xc),
                 *(undefined4 *)(iVar3 + 0x10));
  }
  FUN_4a062e34(iVar1,auStack_38);
  thunk_FUN_4a0ecbf0(auStack_38);
  return;
}



// Address: 4a0d401c

void FUN_4a0d401c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint local_18;
  
  local_18 = param_4;
  thunk_FUN_4a0ecd30();
  puVar2 = PTR_DAT_4a0d40e4;
  puVar1 = PTR_DAT_4a0d40e0;
  if (*PTR_DAT_4a0d40e0 == '\0') {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    if (*PTR_DAT_4a0d40e4 == '\0') {
      piVar4 = *(int **)(param_1 + 4);
    }
    else {
      thunk_FUN_4a161570(0xc4);
      piVar4 = (int *)FUN_4a0633c4();
      *(int **)(param_1 + 4) = piVar4;
    }
    FUN_4a1652c6(piVar4,*(undefined4 *)(*piVar4 + 0x14));
    if ((*puVar2 == '\0') && (piVar4 = *(int **)(param_1 + 4), piVar4 != (int *)0x0)) {
      FUN_4a1652c6(piVar4,*(undefined4 *)(*piVar4 + 4));
    }
  }
  iVar5 = param_1 + 8;
  if (*puVar2 == '\0') {
    local_18 = *(uint *)(param_1 + 0xc);
    FUN_4a03c12c(&local_18,1,0x20,4);
  }
  else {
    FUN_4a03c12c(&local_18,1,0x20,4);
    uVar3 = local_18;
    if (*(uint *)(param_1 + 0xc) < local_18) {
      FUN_4a16e112(iVar5,local_18);
    }
    FUN_4a16e152(iVar5,uVar3);
    FUN_4a16e112(iVar5,*(undefined4 *)(param_1 + 0xc));
  }
  for (iVar5 = *(int *)(param_1 + 8);
      *(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0x18 != iVar5; iVar5 = iVar5 + 0x18) {
    FUN_4a08cdc4(iVar5);
    if (*(int *)(param_1 + 4) != 0) {
      *(undefined1 *)(iVar5 + 0x14) = 1;
    }
    *(short *)(iVar5 + 0x16) = (short)*(undefined4 *)(puVar1 + 4);
  }
  return;
}



// Address: 4a0d40e8

int FUN_4a0d40e8(int param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 0xc); uVar1 = uVar1 + 1) {
  }
  if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
    FUN_4a0a6f48(*(undefined4 *)(param_1 + 8),0x18);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return param_1;
}



// Address: 4a0d4116

void FUN_4a0d4116(undefined4 *param_1)

{
  *param_1 = 0x40000000;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// Address: 4a0d4128

void FUN_4a0d4128(short *param_1,uint param_2,short param_3,short param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  
  if (param_2 == 0) {
    return;
  }
  sVar3 = 0;
  sVar2 = 0;
  if (param_2 == 1) {
    sVar2 = *param_1;
    sVar3 = (param_3 - param_1[1]) - param_1[3];
  }
  else {
    if (param_2 == 2) {
      sVar1 = param_1[1];
      sVar3 = (param_3 - *param_1) - param_1[2];
      sVar2 = param_1[3];
    }
    else {
      if (param_2 != 3) goto LAB_4a0d4168;
      sVar1 = *param_1;
      sVar2 = param_1[2];
      sVar3 = param_1[1];
    }
    sVar2 = (param_4 - sVar1) - sVar2;
  }
LAB_4a0d4168:
  if ((param_2 & 1) != 0) {
    sVar1 = param_1[2];
    param_1[2] = param_1[3];
    param_1[3] = sVar1;
  }
  *param_1 = sVar3;
  param_1[1] = sVar2;
  return;
}



// Address: 4a0d41c8

void FUN_4a0d41c8(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = *param_1;
  uVar8 = param_1[1];
  uVar3 = uVar5;
  if ((int)uVar5 < 1) {
    uVar3 = -uVar5;
  }
  uVar6 = param_1[2];
  uVar7 = uVar8;
  if ((int)uVar8 < 1) {
    uVar7 = -uVar8;
  }
  uVar1 = uVar6;
  if ((int)uVar6 < 1) {
    uVar1 = -uVar6;
  }
  uVar1 = uVar1 | uVar7 | uVar3;
  iVar4 = 0;
  if (uVar1 >> 0x10 == 0) {
    iVar4 = 0x10;
    uVar1 = uVar1 << 0x10;
  }
  if (uVar1 >> 0x18 == 0) {
    iVar4 = iVar4 + 8;
    uVar1 = uVar1 << 8;
  }
  if (uVar1 >> 0x1c == 0) {
    iVar4 = iVar4 + 4;
    uVar1 = uVar1 << 4;
  }
  if (uVar1 >> 0x1e == 0) {
    iVar4 = iVar4 + 2;
    uVar1 = uVar1 << 2;
  }
  if (-1 < (int)uVar1) {
    iVar4 = iVar4 + 1;
  }
  iVar2 = -iVar4 + 0x1f;
  if (iVar2 < 0xe) {
    uVar3 = 0xd - iVar2;
    *param_1 = uVar5 << (uVar3 & 0xff);
    uVar6 = uVar6 << (uVar3 & 0xff);
    param_1[1] = uVar8 << (uVar3 & 0xff);
  }
  else {
    uVar3 = -iVar4 + 0x12;
    *param_1 = (int)uVar5 >> (uVar3 & 0xff);
    uVar6 = (int)uVar6 >> (uVar3 & 0xff);
    param_1[1] = (int)uVar8 >> (uVar3 & 0xff);
  }
  param_1[2] = uVar6;
  uVar6 = *param_1;
  uVar1 = param_1[1];
  uVar7 = param_1[2];
  uVar8 = uVar7 * uVar7 + uVar1 * uVar1 + uVar6 * uVar6;
  uVar5 = 0;
  uVar3 = uVar8;
  if (uVar8 >> 0x10 == 0) {
    uVar5 = 0x10;
    uVar3 = uVar8 * 0x10000;
  }
  if (uVar3 >> 0x18 == 0) {
    uVar5 = uVar5 + 8;
    uVar3 = uVar3 << 8;
  }
  if (uVar3 >> 0x1c == 0) {
    uVar5 = uVar5 + 4;
    uVar3 = uVar3 << 4;
  }
  if (uVar3 >> 0x1e == 0) {
    uVar5 = uVar5 + 2;
    uVar3 = uVar3 << 2;
  }
  if (-1 < (int)uVar3) {
    uVar5 = uVar5 + 1;
  }
  if (uVar5 < 0x16) {
    uVar3 = 0x16 - uVar5 >> 1;
    iVar4 = (*(int *)(PTR_DAT_4a0d434c + ((int)uVar8 >> ((uVar3 & 0x7f) << 1)) * 4) << 9) >>
            (uVar3 & 0xff);
  }
  else {
    uVar3 = uVar5 - 0x15 >> 1;
    iVar4 = *(int *)(PTR_DAT_4a0d434c + (uVar8 << ((uVar3 & 0x7f) << 1)) * 4) << (9 - uVar3 & 0xff);
  }
  *param_1 = (int)(uVar6 * iVar4) >> 0xc;
  param_1[1] = (int)(uVar1 * iVar4) >> 0xc;
  param_1[2] = (int)(uVar7 * iVar4) >> 0xc;
  return;
}



// Address: 4a0d4368

void FUN_4a0d4368(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  *param_1 = PTR_PTR_4a0d4774;
  piVar2 = (int *)param_1[0x24];
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  param_1[0x1f] = PTR_PTR_4a0d4778;
  iVar4 = param_1[0x21];
  iVar1 = FUN_4a0bcc84(param_1 + 0x1f);
  if (iVar1 != 0) {
    iVar3 = 0;
    if (0 < iVar4) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar3 * 0x14))();
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
      if (iVar1 == 0) goto LAB_4a0d4414;
    }
    FUN_4a14f21c(iVar1);
  }
LAB_4a0d4414:
  iVar1 = FUN_4a0c6bf4(param_1 + 0x1f);
  puVar5 = (undefined4 *)(iVar1 + -0x14);
  *puVar5 = PTR_PTR_4a0d477c;
  iVar4 = *(int *)(iVar1 + -0xc);
  iVar1 = FUN_4a0bcc84(puVar5);
  if (iVar1 != 0) {
    iVar3 = 0;
    if (0 < iVar4) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar3 * 0x14))();
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
      if (iVar1 == 0) goto LAB_4a0d447c;
    }
    FUN_4a14f21c(iVar1);
  }
LAB_4a0d447c:
  iVar1 = FUN_4a0c6bf4(puVar5);
  puVar5 = (undefined4 *)(iVar1 + -0x14);
  *puVar5 = PTR_PTR_4a0d4780;
  iVar4 = *(int *)(iVar1 + -0xc);
  iVar1 = FUN_4a0bcc84(puVar5);
  if (iVar1 != 0) {
    iVar3 = 0;
    if (0 < iVar4) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar3 * 0x14))();
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
      if (iVar1 == 0) goto LAB_4a0d44e4;
    }
    FUN_4a14f21c(iVar1);
  }
LAB_4a0d44e4:
  iVar1 = FUN_4a0c6bf4(puVar5);
  puVar5 = (undefined4 *)(iVar1 + -0x14);
  *puVar5 = PTR_PTR_4a0d4784;
  iVar4 = *(int *)(iVar1 + -0xc);
  iVar1 = FUN_4a0bcc84(puVar5);
  if (iVar1 != 0) {
    iVar3 = 0;
    if (0 < iVar4) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar3 * 0x1c))();
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
      if (iVar1 == 0) goto LAB_4a0d454c;
    }
    FUN_4a14f21c(iVar1);
  }
LAB_4a0d454c:
  iVar1 = FUN_4a0c6bf4(puVar5);
  puVar5 = (undefined4 *)(iVar1 + -0x14);
  *puVar5 = PTR_PTR_4a0d4788;
  iVar4 = *(int *)(iVar1 + -0xc);
  iVar1 = FUN_4a0bcc84(puVar5);
  if (iVar1 != 0) {
    iVar3 = 0;
    if (0 < iVar4) {
      do {
        (*(code *)**(undefined4 **)(iVar1 + iVar3 * 100))();
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
      if (iVar1 == 0) goto LAB_4a0d45b8;
    }
    FUN_4a14f21c(iVar1);
  }
LAB_4a0d45b8:
  iVar1 = FUN_4a0c6bf4(puVar5);
  piVar2 = *(int **)(iVar1 + -4);
  if ((piVar2 != (int *)0x0) && (iVar4 = (**(code **)(*piVar2 + 8))(piVar2), iVar4 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  piVar2 = *(int **)(iVar1 + -8);
  if ((piVar2 != (int *)0x0) && (iVar4 = (**(code **)(*piVar2 + 8))(piVar2), iVar4 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  piVar2 = *(int **)(iVar1 + -0xc);
  if ((piVar2 != (int *)0x0) && (iVar4 = (**(code **)(*piVar2 + 8))(piVar2), iVar4 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  piVar2 = *(int **)(iVar1 + -0x10);
  if ((piVar2 != (int *)0x0) && (iVar4 = (**(code **)(*piVar2 + 8))(piVar2), iVar4 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  piVar2 = *(int **)(iVar1 + -0x18);
  if ((piVar2 != (int *)0x0) && (iVar4 = (**(code **)(*piVar2 + 8))(piVar2), iVar4 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  piVar2 = *(int **)(iVar1 + -0x1c);
  if ((piVar2 != (int *)0x0) && (iVar4 = (**(code **)(*piVar2 + 8))(piVar2), iVar4 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  piVar2 = *(int **)(iVar1 + -0x20);
  if ((piVar2 != (int *)0x0) && (iVar4 = (**(code **)(*piVar2 + 8))(piVar2), iVar4 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  *(undefined **)(iVar1 + -0x2c) = PTR_PTR_4a0c0674;
  *(undefined4 *)(iVar1 + -0x28) = 0xffffffff;
  return;
}



// Address: 4a0d478c

/* WARNING: Removing unreachable block (ram,0x4a1729d8) */
/* WARNING: Removing unreachable block (ram,0x4a1729ec) */
/* WARNING: Removing unreachable block (ram,0x4a1728bc) */
/* WARNING: Removing unreachable block (ram,0x4a1728ac) */
/* WARNING: Removing unreachable block (ram,0x4a1729e0) */
/* WARNING: Removing unreachable block (ram,0x4a17289c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_4a0d478c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar10;
  bool bVar11;
  
  FUN_4a172458(param_1,param_3);
  if (!(bool)in_CY) {
    return 0;
  }
  FUN_4a172458(param_3,param_2);
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x4a0d47c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(0x3f800000);
    return uVar1;
  }
  uVar2 = FUN_4a1724e0(param_1,param_3);
  uVar3 = FUN_4a1724e0(param_1,param_2);
  uVar2 = FUN_4a171bb8(uVar2,uVar3);
  uVar3 = FUN_4a17211c(uVar2,uVar2);
  uVar4 = FUN_4a17211c(uVar3,0x40400000);
  uVar3 = FUN_4a17211c(uVar3,0xc0000000);
  uVar1 = FUN_4a17211c(uVar3,uVar2);
  if ((int)(uVar1 ^ uVar4) < 0) {
    uVar4 = uVar4 ^ 0x80000000;
    if (uVar1 < uVar4) {
      uVar6 = uVar1 - uVar4 ^ 0x80000000;
      uVar1 = uVar1 - uVar6;
      uVar4 = uVar4 + uVar6;
    }
    uVar6 = uVar1 >> 0x17;
    uVar8 = uVar6 - (uVar4 >> 0x17);
    if ((uVar4 & 0x7f800000) != 0 && (uVar6 & 0xff) != 0xff) {
      uVar5 = uVar1 << 8 | 0x80000000;
      uVar4 = uVar4 << 8 | 0x80000000;
      uVar9 = uVar5 - (uVar4 >> (uVar8 & 0xff));
      if ((int)uVar9 < 0) {
        bVar11 = (bool)((byte)(uVar9 >> 7) & 1);
        uVar1 = (uVar9 >> 8) + (uVar6 - 1) * 0x800000 + (uint)bVar11;
        if (!bVar11) {
          return uVar1;
        }
        if ((uVar9 & 0x7f) != 0) {
          return uVar1;
        }
      }
      else {
        bVar10 = (uVar6 & 0xfe) == 0;
        bVar11 = false;
        if (!bVar10) {
          uVar5 = uVar9 * 2;
          bVar11 = (int)uVar5 < 0;
          bVar10 = uVar5 == 0;
        }
        if (!bVar11) {
          if (bVar10) {
            if (uVar9 >> 7 == 0) {
              return 0;
            }
            return (uVar1 >> 0x1f) << 0x1f;
          }
          if (uVar5 == 0) {
            return 0;
          }
          uVar4 = uVar5;
          uVar8 = uVar6;
          if (uVar5 >> 0x17 == 0) {
            uVar4 = uVar5 << 8;
            uVar8 = uVar6 - 8;
            if ((uVar5 & 0xffffff) >> 0xf == 0) {
              uVar4 = uVar5 << 0x10;
              uVar8 = uVar6 - 0x10;
            }
          }
          if ((uVar4 & 0x78000000) != 0) {
            uVar4 = uVar4 >> 4;
            uVar8 = uVar8 + 4;
          }
          if ((uVar4 & 0x6000000) != 0) {
            uVar4 = uVar4 >> 2;
            uVar8 = uVar8 + 2;
          }
          uVar8 = uVar8 - ((uVar4 < 0x1000000) + 9);
          if (uVar4 >= 0x1000000) {
            uVar4 = uVar4 >> 1;
          }
          if ((uVar6 ^ uVar8) >> 8 == 0) {
            return uVar4 + uVar8 * 0x800000;
          }
          return (uVar1 >> 0x1f) << 0x1f;
        }
        bVar11 = (bool)((byte)(uVar5 >> 7) & 1);
        uVar1 = ((int)uVar5 >> 8) + uVar6 * 0x800000 + (uint)bVar11;
        if (!bVar11) {
          return uVar1;
        }
        if ((uVar9 & 0x3f) != 0) {
          return uVar1;
        }
      }
      if (uVar4 << (0x20 - uVar8 & 0xff) == 0) {
        uVar1 = uVar1 & 0xfffffffe;
      }
      else {
        uVar1 = uVar1 - 1;
      }
      return uVar1;
    }
    if ((uVar6 & 0xff) != 0xff) {
      if ((uVar1 & 0x7f800000) == 0) {
        uVar1 = 0;
      }
      return uVar1;
    }
    uVar6 = uVar1 * 2;
    uVar8 = 0x4000002;
    if (uVar4 << 1 < 0xff000001 && uVar6 < 0xff000001) {
      if (uVar6 == uVar4 * 2) {
        if ((int)(uVar1 ^ uVar4) < 0) {
          return uVar1;
        }
        return DAT_4a172724;
      }
      if (uVar6 == 0xff000000) {
        return uVar1;
      }
      return uVar4 ^ 0x80000000;
    }
LAB_4a171b9c:
    uVar8 = uVar8 & 0xf;
    if (uVar8 == 9) {
      return 0;
    }
    if (uVar8 != 10) {
      if (uVar8 == 8) {
        return uVar4 & 0xff000000 | DAT_4a171ba4 >> 0x1d | (uVar4 & 0xffffff) << 3;
      }
      return DAT_4a171ba4;
    }
    return DAT_4a171ba4;
  }
  iVar7 = uVar1 - uVar4;
  if (uVar1 < uVar4) {
    uVar1 = uVar1 - iVar7;
    uVar4 = uVar4 + iVar7;
  }
  uVar6 = uVar1 >> 0x17;
  uVar8 = uVar6 - (uVar4 >> 0x17);
  if ((uVar4 & 0x7f800000) == 0 || (uVar6 & 0xff) == 0xff) {
    if ((uVar6 & 0xff) != 0xff) {
      if ((uVar1 & 0x7f800000) == 0) {
        uVar1 = uVar1 & 0x80000000;
      }
      return uVar1;
    }
    uVar6 = uVar1 * 2;
    uVar8 = 0x4000001;
    if (uVar4 << 1 < 0xff000001 && uVar6 < 0xff000001) {
      if (uVar6 == uVar4 * 2) {
        if (-1 < (int)(uVar1 ^ uVar4)) {
          return uVar1;
        }
        return DAT_4a171b98;
      }
      if (uVar6 == 0xff000000) {
        return uVar1;
      }
      return uVar4;
    }
    goto LAB_4a171b9c;
  }
  uVar5 = uVar1 << 8 | 0x80000000;
  uVar4 = uVar4 << 8 | 0x80000000;
  uVar1 = uVar4 >> (uVar8 & 0xff);
  uVar9 = uVar5 + uVar1;
  if (CARRY4(uVar5,uVar1)) {
    uVar1 = uVar9 >> 1 | 0x80000000;
    bVar11 = (bool)((byte)(uVar1 >> 7) & 1);
    uVar1 = uVar1 >> 8;
    uVar6 = uVar1 + uVar6 * 0x800000 + (uint)bVar11;
    if (bVar11) {
      uVar1 = uVar9 & 0xff;
    }
    uVar5 = uVar6 * 2;
    if (uVar1 != 0) {
      if (uVar5 < 0xff000000) {
        return uVar6;
      }
      goto LAB_4a171b0c;
    }
  }
  else {
    bVar11 = (bool)((byte)(uVar9 >> 7) & 1);
    uVar6 = (uVar9 >> 8) + (uVar6 - 1) * 0x800000 + (uint)bVar11;
    if (!bVar11) {
      return uVar6;
    }
    uVar5 = uVar6 * 2;
    if ((uVar9 & 0x7f) != 0) {
      bVar11 = 0xfeffffff < uVar5;
    }
    if (!bVar11) {
      return uVar6;
    }
  }
  if (uVar4 << (0x20 - uVar8 & 0xff) == 0) {
    uVar6 = uVar6 & 0xfffffffe;
  }
  if (uVar5 < 0xff000000) {
    return uVar6;
  }
LAB_4a171b0c:
  return (uVar6 + 0xa0000000 >> 0x17 | 0xff) << 0x17;
}



// Address: 4a0d4830

int FUN_4a0d4830(int param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  
  if (param_3 < param_1) {
    return 0;
  }
  if (param_3 < param_2) {
    uVar3 = param_3 - param_1;
    iVar2 = FUN_4a00080c(uVar3 * 0x10000,((int)uVar3 >> 0x1f) << 0x10 | uVar3 >> 0x10,
                         param_2 - param_1,param_2 - param_1 >> 0x1f);
    uVar3 = (uint)((longlong)iVar2 * (longlong)iVar2) >> 0x10 |
            (int)((ulonglong)((longlong)iVar2 * (longlong)iVar2) >> 0x20) << 0x10;
    lVar1 = (longlong)(int)uVar3 * (longlong)iVar2;
    return uVar3 * 3 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) * -2;
  }
  return 0x10000;
}



// Address: 4a0d4898

/* WARNING: Removing unreachable block (ram,0x4a1729ec) */

uint FUN_4a0d4898(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  
  FUN_4a171da0();
  if ((bool)in_ZR) goto LAB_4a0d496c;
  uVar1 = FUN_4a1724e0(param_1,param_2);
  uVar2 = FUN_4a171fac(param_3);
  uVar2 = FUN_4a17211c(uVar2,uVar1);
  uVar3 = FUN_4a17211c(uVar2,param_4);
  if ((uVar3 < 0xbf800000) && ((int)uVar3 < 0x3f800000)) {
    iVar4 = FUN_4a171e1c(uVar1);
    if (iVar4 < 1) {
      iVar4 = iVar4 >> 0x1f;
    }
    else {
      iVar4 = 1;
    }
    uVar3 = FUN_4a171fac(iVar4);
  }
  else {
    uVar5 = 1;
    if ((int)uVar1 < 1) {
LAB_4a0d4938:
      uVar5 = 0x7fffffff < uVar1;
      if (0x80000000 < uVar1) {
        uVar2 = FUN_4a171a94(param_1,uVar3);
        FUN_4a1720a0(uVar2,param_2);
        if (!(bool)uVar5) goto LAB_4a0d4958;
      }
    }
    else {
      uVar2 = FUN_4a171a94(param_1,uVar3);
      FUN_4a172458(uVar2,param_2);
      if ((bool)uVar5) goto LAB_4a0d4938;
LAB_4a0d4958:
      uVar3 = uVar1;
    }
  }
  param_1 = FUN_4a171a94(param_1,uVar3);
LAB_4a0d496c:
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
      return -(uVar3 >> (0x9e - (uVar1 & 0xff) & 0xff));
    }
  }
  else if (uVar1 < 0x9f && 0x9e - uVar1 != 0) {
    return uVar3 >> (0x9e - uVar1 & 0xff);
  }
  uVar3 = param_1 * 2;
  if (uVar3 < 0xff000001) {
    if (uVar3 != 0xff000000) {
      return ~((int)param_1 >> 0x1f) ^ 0x80000000;
    }
    return ~((int)param_1 >> 0x1f) ^ 0x80000000;
  }
  uVar1 = DAT_4a171e8c & 0xf;
  if (uVar1 == 9) {
    if ((DAT_4a171e8c & 0x100000) != 0) {
      return 8;
    }
    return 0;
  }
  if (uVar1 == 10) {
    uVar3 = DAT_4a171bb0;
    if ((DAT_4a171e8c & 0x40) != 0) {
      uVar3 = 0x80000000;
    }
    return uVar3;
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
  return uVar3 & 0xff000000 | DAT_4a171bb0 >> 0x1d | (uVar3 & 0xffffff) << 3;
}



// Address: 4a0d4978

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

ulonglong FUN_4a0d4978(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  uVar3 = param_1 >> 7 & 0xff0000;
  bVar8 = uVar3 == 0;
  if (!bVar8) {
    param_4 = DAT_4a0d4980 >> 7 & 0xff0000;
    bVar8 = param_4 == 0;
  }
  if (!bVar8) {
    bVar8 = uVar3 == 0xff0000;
  }
  if (!bVar8) {
    bVar8 = param_4 == 0xff0000;
  }
  if (bVar8) {
    if ((int)(param_1 ^ DAT_4a0d4980) < 0) {
      uVar3 = uVar3 | 0x100;
    }
    uVar7 = DAT_4a0d4980 >> 7 & 0xff0000;
    if (uVar3 < 0xff0000 && uVar7 < 0xff0000) {
      return CONCAT44(DAT_4a0d4980,param_1 ^ DAT_4a0d4980) & 0xffffffff80000000;
    }
    param_1 = param_1 * 2;
    if (param_1 < 0xff000001) {
      param_1 = DAT_4a0d4980 * 2;
    }
    if (0xff000000 < param_1) {
      return CONCAT44(DAT_4a0d4980,DAT_4a171ba4);
    }
    if ((uVar3 & 0xff0000) == 0 || uVar7 == 0) {
      return CONCAT44(DAT_4a0d4980,DAT_4a172220);
    }
    return CONCAT44(DAT_4a0d4980,(uVar3 | 0xff) << 0x17);
  }
  if ((int)(param_1 ^ DAT_4a0d4980) < 0) {
    uVar3 = uVar3 | 0x100;
  }
  uVar7 = DAT_4a0d4980 << 8;
  lVar1 = (ulonglong)(uVar7 | 0x80000000) * (ulonglong)(param_1 << 8 | 0x80000000);
  uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
  iVar4 = uVar3 + param_4 + -0x800000;
  if ((int)lVar1 != 0) {
    uVar6 = uVar6 | 1;
  }
  bVar8 = 0x7fffffff < uVar6;
  if (!bVar8) {
    uVar6 = uVar6 << 1;
  }
  uVar5 = iVar4 + (iVar4 >> 0x10) + (uint)bVar8;
  bVar8 = (bool)((byte)(uVar6 >> 7) & 1);
  uVar3 = uVar6 >> 8;
  if (bVar8) {
    uVar3 = uVar6 & 0x7f;
  }
  uVar6 = (uVar6 >> 8) + uVar5 * 0x800000 + (uint)bVar8;
  if (uVar3 != 0) {
    bVar8 = 0xfbffff < uVar5;
  }
  if (!bVar8) {
    return CONCAT44(uVar7,uVar6) | 0x8000000000000000;
  }
  if (uVar3 == 0 || uVar5 == 0xfc0000) {
    uVar6 = uVar6 & 0xfffffffe;
  }
  if (uVar5 < 0xfc0000) {
    return CONCAT44(uVar7,uVar6) | 0x8000000000000000;
  }
  if (-1 < (int)(uVar5 - 0xfc0000)) {
    if (-1 < (int)((uVar6 + 0x800000) * 2)) {
      if ((int)(uVar6 + 0xa0000000) < 0) {
        uVar2 = 0xff800000;
      }
      else {
        uVar2 = 0x7f800000;
      }
      return CONCAT44(uVar7,uVar2) | 0x8000000000000000;
    }
    return CONCAT44(uVar7,uVar6) | 0x8000000000000000;
  }
  if ((int)(uVar5 ^ 0xff) < -0xffff) {
    uVar6 = uVar6 + 0x60000000;
    if ((int)(uVar5 ^ 0xff) < -0xffff) {
      uVar6 = uVar6 & 0x80000000;
    }
    return CONCAT44(uVar7,uVar6) | 0x8000000000000000;
  }
  return CONCAT44(uVar7,uVar6) | 0x8000000000000000;
}



// Address: 4a0d4984

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

ulonglong FUN_4a0d4984(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  uVar3 = param_1 >> 7 & 0xff0000;
  bVar8 = uVar3 == 0;
  if (!bVar8) {
    param_4 = DAT_4a0d498c >> 7 & 0xff0000;
    bVar8 = param_4 == 0;
  }
  if (!bVar8) {
    bVar8 = uVar3 == 0xff0000;
  }
  if (!bVar8) {
    bVar8 = param_4 == 0xff0000;
  }
  if (bVar8) {
    if ((int)(param_1 ^ DAT_4a0d498c) < 0) {
      uVar3 = uVar3 | 0x100;
    }
    uVar7 = DAT_4a0d498c >> 7 & 0xff0000;
    if (uVar3 < 0xff0000 && uVar7 < 0xff0000) {
      return CONCAT44(DAT_4a0d498c,param_1 ^ DAT_4a0d498c) & 0xffffffff80000000;
    }
    param_1 = param_1 * 2;
    if (param_1 < 0xff000001) {
      param_1 = DAT_4a0d498c * 2;
    }
    if (0xff000000 < param_1) {
      return CONCAT44(DAT_4a0d498c,DAT_4a171ba4);
    }
    if ((uVar3 & 0xff0000) == 0 || uVar7 == 0) {
      return CONCAT44(DAT_4a0d498c,DAT_4a172220);
    }
    return CONCAT44(DAT_4a0d498c,(uVar3 | 0xff) << 0x17);
  }
  if ((int)(param_1 ^ DAT_4a0d498c) < 0) {
    uVar3 = uVar3 | 0x100;
  }
  uVar7 = DAT_4a0d498c << 8;
  lVar1 = (ulonglong)(uVar7 | 0x80000000) * (ulonglong)(param_1 << 8 | 0x80000000);
  uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
  iVar4 = uVar3 + param_4 + -0x800000;
  if ((int)lVar1 != 0) {
    uVar6 = uVar6 | 1;
  }
  bVar8 = 0x7fffffff < uVar6;
  if (!bVar8) {
    uVar6 = uVar6 << 1;
  }
  uVar5 = iVar4 + (iVar4 >> 0x10) + (uint)bVar8;
  bVar8 = (bool)((byte)(uVar6 >> 7) & 1);
  uVar3 = uVar6 >> 8;
  if (bVar8) {
    uVar3 = uVar6 & 0x7f;
  }
  uVar6 = (uVar6 >> 8) + uVar5 * 0x800000 + (uint)bVar8;
  if (uVar3 != 0) {
    bVar8 = 0xfbffff < uVar5;
  }
  if (!bVar8) {
    return CONCAT44(uVar7,uVar6) | 0x8000000000000000;
  }
  if (uVar3 == 0 || uVar5 == 0xfc0000) {
    uVar6 = uVar6 & 0xfffffffe;
  }
  if (uVar5 < 0xfc0000) {
    return CONCAT44(uVar7,uVar6) | 0x8000000000000000;
  }
  if (-1 < (int)(uVar5 - 0xfc0000)) {
    if (-1 < (int)((uVar6 + 0x800000) * 2)) {
      if ((int)(uVar6 + 0xa0000000) < 0) {
        uVar2 = 0xff800000;
      }
      else {
        uVar2 = 0x7f800000;
      }
      return CONCAT44(uVar7,uVar2) | 0x8000000000000000;
    }
    return CONCAT44(uVar7,uVar6) | 0x8000000000000000;
  }
  if ((int)(uVar5 ^ 0xff) < -0xffff) {
    uVar6 = uVar6 + 0x60000000;
    if ((int)(uVar5 ^ 0xff) < -0xffff) {
      uVar6 = uVar6 & 0x80000000;
    }
    return CONCAT44(uVar7,uVar6) | 0x8000000000000000;
  }
  return CONCAT44(uVar7,uVar6) | 0x8000000000000000;
}



// Address: 4a0d4990

uint FUN_4a0d4990(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = DAT_4a0d4a34;
  if ((int)param_1 < 0x43340001) {
    if (0xc3340000 < param_1) {
      uVar1 = FUN_4a1724e0(param_1);
      FUN_4a17211c(uVar1,uVar3);
      iVar2 = FUN_4a171e1c();
      if (iVar2 < 1) {
        iVar2 = 1;
      }
      uVar3 = FUN_4a171fac(iVar2);
      uVar3 = FUN_4a17211c(uVar3,0x43b40000);
      param_1 = FUN_4a171a94(uVar3,param_1);
    }
  }
  else {
    uVar1 = FUN_4a171a94(param_1);
    FUN_4a17211c(uVar1,uVar3);
    iVar2 = FUN_4a171e1c();
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    uVar3 = FUN_4a171fac(iVar2);
    uVar3 = FUN_4a17211c(uVar3,0x43b40000);
    param_1 = FUN_4a1724e0(uVar3,param_1);
  }
  return param_1;
}



// Address: 4a0d4a38

int FUN_4a0d4a38(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 < 0xb40001) {
    if (-0xb40001 < param_1) {
      return param_1;
    }
    uVar1 = 0xb40000 - param_1;
    if ((int)uVar1 < 0x1680000) {
      iVar2 = 1;
    }
    else {
      iVar2 = (int)((longlong)(int)uVar1 * (longlong)DAT_4a0d4a9c + ((ulonglong)uVar1 << 0x20) >>
                   0x20);
      iVar2 = (iVar2 >> 0x18) - (iVar2 >> 0x1f);
    }
    iVar2 = iVar2 * 0x2d;
  }
  else {
    uVar1 = param_1 + 0xb40000;
    if ((int)uVar1 < 0x1680000) {
      iVar2 = 1;
    }
    else {
      iVar2 = (int)((longlong)(int)uVar1 * (longlong)DAT_4a0d4a9c + ((ulonglong)uVar1 << 0x20) >>
                   0x20);
      iVar2 = (iVar2 >> 0x18) - (iVar2 >> 0x1f);
    }
    iVar2 = iVar2 * -0x2d;
  }
  return param_1 + iVar2 * 0x80000;
}



// Address: 4a0d4aa0

int FUN_4a0d4aa0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  param_2 = param_2 - param_1;
  if (param_2 < 0xb40001) {
    if (-0xb40001 < param_2) {
      return param_2;
    }
    uVar1 = 0xb40000 - param_2;
    if ((int)uVar1 < 0x1680000) {
      iVar2 = 1;
    }
    else {
      iVar2 = (int)((longlong)(int)uVar1 * (longlong)DAT_4a0d4b08 + ((ulonglong)uVar1 << 0x20) >>
                   0x20);
      iVar2 = (iVar2 >> 0x18) - (iVar2 >> 0x1f);
    }
    iVar2 = iVar2 * 0x2d;
  }
  else {
    uVar1 = param_2 + 0xb40000;
    if ((int)uVar1 < 0x1680000) {
      iVar2 = 1;
    }
    else {
      iVar2 = (int)((longlong)(int)uVar1 * (longlong)DAT_4a0d4b08 + ((ulonglong)uVar1 << 0x20) >>
                   0x20);
      iVar2 = (iVar2 >> 0x18) - (iVar2 >> 0x1f);
    }
    iVar2 = iVar2 * -0x2d;
  }
  return param_2 + iVar2 * 0x80000;
}



// Address: 4a0d4b0c

int FUN_4a0d4b0c(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  uVar5 = param_2 >> 0x1f;
  uVar4 = ((int)param_1 >> 0x1f) << 0x10 | param_1 >> 0x10;
  iVar3 = param_1 * 0x10000;
  uVar2 = (int)uVar4 >> 1;
  uVar1 = uVar5 >> 1;
  if ((int)uVar2 < 0) {
    bVar6 = iVar3 != 0;
    iVar3 = param_1 * -0x10000;
    uVar4 = -(uVar4 + bVar6);
  }
  if ((int)uVar5 < 0) {
    bVar6 = param_2 != 0;
    param_2 = -param_2;
    uVar5 = -(uVar5 + bVar6);
  }
  iVar3 = FUN_4a0008f8(iVar3,uVar4,param_2,uVar5);
  if (((uVar2 ^ uVar1) & 0x40000000) != 0) {
    iVar3 = -iVar3;
  }
  return iVar3;
}



// Address: 4a0d4b28

uint FUN_4a0d4b28(int param_1,int param_2)

{
  return (uint)((longlong)param_1 * (longlong)param_2) >> 0x10 |
         (int)((ulonglong)((longlong)param_1 * (longlong)param_2) >> 0x20) << 0x10;
}



// Address: 4a0d4b38

undefined4 FUN_4a0d4b38(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 in_CY;
  
  FUN_4a1720a0(param_3,param_1);
  if (!(bool)in_CY) {
    param_1 = param_3;
  }
  FUN_4a172458(param_2,param_1);
  if ((bool)in_CY) {
    param_2 = param_1;
  }
  return param_2;
}



// Address: 4a0d4b74

int FUN_4a0d4b74(int param_1,int param_2,int param_3)

{
  if (param_3 < param_1) {
    param_1 = param_3;
  }
  if (param_1 < param_2) {
    param_1 = param_2;
  }
  return param_1;
}



// Address: 4a0d4b88

uint FUN_4a0d4b88(undefined4 param_1,undefined4 param_2)

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
  
  uVar2 = FUN_4a17211c(param_2);
  uVar3 = FUN_4a17211c(param_1,param_1);
  uVar4 = FUN_4a171a94(uVar3,uVar2);
  iVar1 = DAT_4a002bb0 - (uVar4 & 0x7fffffff);
  bVar11 = (bool)((byte)((uint)iVar1 >> 0x1e) & 1);
  if ((-1 < iVar1) && (FUN_4a1720a0(uVar4,0), !bVar11)) {
    thunk_FUN_4a003182(1);
    return DAT_4a002bb4;
  }
  uVar7 = uVar4 >> 0x17 & 0xff;
  if (uVar7 == 0 || uVar7 == 0xff) {
    if (uVar7 != 0xff) {
      if ((uVar4 & 0x7fffffff) == 0) {
        return uVar4;
      }
      return uVar4 & 0x80000000;
    }
    if ((uVar4 & 0x7fffff) != 0) {
      uVar7 = DAT_4a1725b4 & 0xf;
      if (uVar7 == 9) {
        if ((DAT_4a1725b4 & 0x100000) == 0) {
          return 0;
        }
        if ((DAT_4a1725b4 & 0x70000) != 0) {
          return 8;
        }
        return 0x30000000;
      }
      if (uVar7 == 10) {
        uVar4 = DAT_4a171bb0;
        if ((DAT_4a1725b4 & 0x40) != 0) {
          uVar4 = 0x80000000;
        }
        return uVar4;
      }
      if (uVar7 != 8) {
        return DAT_4a171bb0;
      }
      if ((DAT_4a1725b4 & 0x40) != 0) {
        return 0;
      }
      if ((DAT_4a1725b4 & 0x10) != 0) {
        return DAT_4a171bb0 << 0x1d;
      }
      return DAT_4a171bb0 >> 0x1d | (uVar4 >> 0x17) << 3;
    }
    if ((uVar4 & 0x80000000) == 0) {
      return uVar4;
    }
  }
  else if ((uVar4 & 0x80000000) == 0) {
    uVar7 = uVar4 << 8 | 0x80000000;
    uVar5 = (uVar4 >> 0x17) + 0x7d;
    uVar4 = 0x40000000;
    if (!(bool)((byte)uVar5 & 1)) {
      uVar7 = uVar7 >> 1;
    }
    uVar8 = 0x10000000;
    uVar7 = uVar7 + 0xc0000000 >> 1;
    uVar5 = uVar5 >> 1 | 0x17000000;
    do {
      uVar6 = uVar5;
      bVar11 = uVar4 <= uVar7 * 2;
      uVar9 = uVar7 * 2 - uVar4;
      uVar5 = uVar9;
      if (bVar11) {
        uVar5 = uVar9 - uVar8;
      }
      bVar10 = uVar9 < uVar8;
      if (bVar11 && !bVar10) {
        uVar4 = uVar4 + uVar8 * 2;
        uVar7 = uVar5;
      }
      uVar8 = uVar8 >> 1;
      if (!bVar11 || bVar10) {
        uVar7 = uVar7 << 1;
      }
      uVar5 = uVar6 - 0x1000000;
    } while (0xffffff < uVar6);
    uVar5 = uVar4 << 0x1a;
    if (((bool)((byte)(uVar4 >> 6) & 1)) && (uVar4 = uVar4 + 0x80, uVar7 == uVar5)) {
      uVar4 = uVar4 & 0xffffff7f;
    }
    return (uVar4 >> 7) + uVar6 * 0x800000;
  }
  return DAT_4a1725b8;
}



// Address: 4a0d4bb8

int FUN_4a0d4bb8(int param_1)

{
  if (param_1 < 1) {
    param_1 = param_1 >> 0x1f;
  }
  else {
    param_1 = 1;
  }
  return param_1;
}



// Address: 4a0d4bc8

int FUN_4a0d4bc8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 < 0) {
    return 0;
  }
  if (param_1 < 0x30) {
    return *(int *)(PTR_DAT_4a0d4ca0 + param_1 * 4);
  }
  iVar5 = 0x6db;
  if (param_1 < 0x6db) {
    iVar4 = param_1 << 2;
  }
  else {
    iVar4 = param_1;
    if (0x400000 < param_1) {
      iVar4 = param_1 >> 2;
    }
  }
  if (iVar4 - 0xfeb1U < 599) {
    iVar1 = iVar4 + 0x10000 >> 1;
  }
  else {
    iVar3 = (iVar4 >> 3) + 0x20000;
    if (0x800000 < iVar3) {
      iVar3 = 0x800000;
    }
    iVar1 = iVar3 + 0x6db >> 1;
    iVar2 = 0;
    do {
      if (iVar4 < (int)((uint)((longlong)iVar1 * (longlong)iVar1) >> 0x10 |
                       (int)((ulonglong)((longlong)iVar1 * (longlong)iVar1) >> 0x20) << 0x10)) {
        iVar3 = iVar1;
        iVar1 = iVar5;
      }
      iVar5 = iVar1;
      iVar2 = iVar2 + 1;
      iVar1 = iVar3 + iVar5 >> 1;
    } while (iVar2 < 0xd);
  }
  if (param_1 < 0x6db) {
    return iVar1 >> 1;
  }
  if (0x400000 < param_1) {
    iVar1 = iVar1 << 1;
  }
  return iVar1;
}



// Address: 4a0d4ca4

int FUN_4a0d4ca4(uint param_1,uint param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  uint local_24 [6];
  
  local_24[3] = (param_1 & 0xff0000) >> 0x10;
  local_24[5] = param_1 & 0xff;
  local_24[0] = (param_2 & 0xff0000) >> 0x10;
  local_24[1] = (param_2 & 0xff00) >> 8;
  local_24[2] = param_2 & 0xff;
  iVar2 = 0;
  local_24[4] = (param_1 & 0xff00) >> 8;
  do {
    lVar1 = (longlong)(0x10000 - param_3) * (longlong)(int)local_24[iVar2];
    local_24[iVar2] =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)((longlong)param_3 * (longlong)(int)local_24[iVar2 + 3]) >> 0x10 |
         (int)((ulonglong)((longlong)param_3 * (longlong)(int)local_24[iVar2 + 3]) >> 0x20) << 0x10)
    ;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return local_24[0] * 0x10000 + local_24[1] * 0x100 + local_24[2];
}



// Address: 4a0d4d54

void FUN_4a0d4d54(int param_1,undefined4 param_2,undefined2 param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  *(undefined2 *)(param_1 + 4) = 0xffff;
  *(undefined2 *)(param_1 + 6) = param_3;
  uVar3 = FUN_4a0f0e84(param_2);
  *(undefined4 *)(param_1 + 8) = uVar3;
  uVar2 = FUN_4a0f0e84(param_2);
  *(undefined2 *)(param_1 + 0xc) = uVar2;
  uVar3 = FUN_4a0bf62c(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  uVar2 = FUN_4a0bfbdc(param_2);
  *(undefined2 *)(param_1 + 0x14) = uVar2;
  uVar2 = FUN_4a0bfbdc(param_2);
  *(undefined2 *)(param_1 + 0x16) = uVar2;
  uVar1 = FUN_4a0bf920(param_2);
  *(undefined1 *)(param_1 + 0x18) = uVar1;
  return;
}



// Address: 4a0d4dbc

void FUN_4a0d4dbc(int param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4,int param_5)

{
  undefined1 uVar1;
  short sVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  *(undefined2 *)(param_1 + 4) = param_3;
  *(undefined2 *)(param_1 + 6) = param_4;
  uVar4 = FUN_4a0bfbdc(param_2);
  *(uint *)(param_1 + 8) = uVar4 | param_5 << 0xb;
  sVar2 = FUN_4a0bfbdc(param_2);
  *(short *)(param_1 + 0xc) = sVar2 + 0xb;
  uVar5 = FUN_4a0bf62c(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar5;
  uVar3 = FUN_4a0bfbdc(param_2);
  *(undefined2 *)(param_1 + 0x14) = uVar3;
  uVar3 = FUN_4a0bfbdc(param_2);
  *(undefined2 *)(param_1 + 0x16) = uVar3;
  uVar1 = FUN_4a0bf920(param_2);
  *(undefined1 *)(param_1 + 0x18) = uVar1;
  return;
}



// Address: 4a0d4e2c

void FUN_4a0d4e2c(undefined4 *param_1,int param_2)

{
  *param_1 = PTR_PTR_4a0d4e80;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 4);
  *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)(param_2 + 6);
  param_1[2] = *(undefined4 *)(param_2 + 8);
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 0xc);
  param_1[4] = *(undefined4 *)(param_2 + 0x10);
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 0x14);
  *(undefined2 *)((int)param_1 + 0x16) = *(undefined2 *)(param_2 + 0x16);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x18);
  *(undefined2 *)((int)param_1 + 0x1a) = *(undefined2 *)(param_2 + 0x1a);
  return;
}



// Address: 4a0d4e84

void FUN_4a0d4e84(undefined4 *param_1)

{
  *param_1 = PTR_PTR_4a0d4ebc;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  *(undefined2 *)((int)param_1 + 6) = 0xffff;
  param_1[2] = 0xffffffff;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[4] = 0xffffffff;
  *(undefined2 *)(param_1 + 5) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x16) = 0xffff;
  *(undefined1 *)(param_1 + 6) = 0xff;
  *(undefined2 *)((int)param_1 + 0x1a) = 0;
  return;
}



// Address: 4a0d4ecc

void FUN_4a0d4ecc(void)

{
  return;
}



// Address: 4a0d4ed0

void FUN_4a0d4ed0(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined1 auStack_44 [20];
  undefined1 auStack_30 [20];
  
  if (*(int *)(param_1 + 0x4ac) == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = *(undefined1 **)(*(int *)(param_1 + 0x4ac) + 8);
  }
  *puVar1 = 0xff;
  if (*(int *)(param_1 + 0x4c0) == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = *(undefined1 **)(*(int *)(param_1 + 0x4c0) + 8);
  }
  *puVar1 = 0;
  *(undefined1 *)(param_1 + 0x7b4) = 0xff;
  *(undefined2 *)(param_1 + 0x7b6) = 0;
  *(undefined2 *)(param_1 + 0x7b8) = 0;
  piVar5 = (int *)(param_1 + 0x7bc);
  if (*(int *)(param_1 + 0x7c8) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x7c8) + 8);
  }
  if (iVar2 == 0) {
    iVar2 = FUN_4a16b5f8(auStack_44,*(undefined4 *)(param_1 + 0x60));
    uVar7 = *(undefined4 *)(iVar2 + 8);
    piVar6 = *(int **)(iVar2 + 0xc);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0xc))(piVar6);
    }
    (**(code **)(*piVar5 + 0x1c))(piVar5);
    *(int **)(param_1 + 0x7c8) = piVar6;
    *(undefined4 *)(param_1 + 0x7c4) = uVar7;
    FUN_4a16b6c0(auStack_44);
  }
  iVar2 = FUN_4a16b5a0(auStack_30,piVar5);
  iVar3 = 0;
  if (0 < *(int *)(iVar2 + 8)) {
    do {
      if (*(int *)(iVar2 + 0xc) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(iVar2 + 0xc) + 8);
      }
      *(undefined1 *)(iVar4 + iVar3) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar2 + 8));
  }
  FUN_4a16b6c0(auStack_30);
  *(undefined1 *)(param_1 + 2000) = 0xff;
  *(undefined4 *)(param_1 + 0x7d4) = 0x15f900;
  return;
}



// Address: 4a0d4ff4

void FUN_4a0d4ff4(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined1 auStack_74 [20];
  undefined1 auStack_60 [20];
  undefined1 auStack_4c [20];
  undefined1 auStack_38 [20];
  
  *(undefined1 *)(param_1 + 0x7d9) = 0xff;
  uVar1 = FUN_4a0fe640(*(undefined4 *)(param_1 + 0x18),0,*(int *)(param_1 + 0x1b4) + -1);
  *(undefined2 *)(param_1 + 0x7da) = uVar1;
  *(undefined4 *)(param_1 + 0x7dc) = 0x1c138;
  if (*(int *)(param_1 + 0x7ec) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x7ec) + 8);
  }
  piVar6 = (int *)(param_1 + 0x7fc);
  piVar5 = (int *)(param_1 + 0x814);
  if (iVar2 == 0) {
    iVar2 = FUN_4a16b5f8(auStack_60,4);
    uVar8 = *(undefined4 *)(iVar2 + 8);
    piVar7 = *(int **)(iVar2 + 0xc);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0xc))(piVar7);
    }
    (**(code **)(*(int *)(param_1 + 0x7e0) + 0x1c))((int *)(param_1 + 0x7e0));
    *(undefined4 *)(param_1 + 0x7e8) = uVar8;
    *(int **)(param_1 + 0x7ec) = piVar7;
    FUN_4a16b6c0(auStack_60);
    iVar2 = FUN_4a16be24(auStack_74,*(undefined4 *)(param_1 + 0x26c));
    uVar8 = *(undefined4 *)(iVar2 + 8);
    piVar7 = *(int **)(iVar2 + 0xc);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0xc))(piVar7);
    }
    (**(code **)(*piVar6 + 0x1c))(piVar6);
    *(int **)(param_1 + 0x808) = piVar7;
    *(undefined4 *)(param_1 + 0x804) = uVar8;
    FUN_4a16bef4(auStack_74);
    iVar2 = FUN_4a16be24(auStack_74,10);
    uVar8 = *(undefined4 *)(iVar2 + 8);
    piVar7 = *(int **)(iVar2 + 0xc);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0xc))(piVar7);
    }
    (**(code **)(*piVar5 + 0x1c))(piVar5);
    *(int **)(param_1 + 0x820) = piVar7;
    *(undefined4 *)(param_1 + 0x81c) = uVar8;
    FUN_4a16bef4(auStack_74);
  }
  iVar2 = FUN_4a16b5a0(auStack_38,param_1 + 0x7e0);
  iVar3 = 0;
  if (0 < *(int *)(iVar2 + 8)) {
    do {
      if (*(int *)(iVar2 + 0xc) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(iVar2 + 0xc) + 8);
      }
      *(undefined1 *)(iVar4 + iVar3) = 0xff;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar2 + 8));
  }
  FUN_4a16b6c0(auStack_38);
  *(undefined4 *)(param_1 + 0x7f4) = 0;
  *(undefined4 *)(param_1 + 0x7f8) = 0;
  iVar2 = FUN_4a16bdcc(auStack_4c,piVar6);
  uVar8 = *(undefined4 *)(param_1 + 0x78c);
  iVar3 = 0;
  if (0 < *(int *)(iVar2 + 8)) {
    do {
      if (*(int *)(iVar2 + 0xc) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(iVar2 + 0xc) + 8);
      }
      *(undefined4 *)(iVar4 + iVar3 * 4) = uVar8;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar2 + 8));
  }
  FUN_4a16bef4(auStack_4c);
  *(undefined2 *)(param_1 + 0x810) = 0;
  *(undefined2 *)(param_1 + 0x812) = 0;
  iVar2 = FUN_4a16bdcc(auStack_4c,piVar5);
  iVar3 = 0;
  if (0 < *(int *)(iVar2 + 8)) {
    do {
      if (*(int *)(iVar2 + 0xc) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(iVar2 + 0xc) + 8);
      }
      *(undefined4 *)(iVar4 + iVar3 * 4) = 0xffffffff;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar2 + 8));
  }
  FUN_4a16bef4(auStack_4c);
  *(undefined4 *)(param_1 + 0x828) = 0;
  return;
}



// Address: 4a0d5260

void FUN_4a0d5260(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined1 auStack_6c [20];
  undefined1 auStack_58 [20];
  undefined1 auStack_44 [20];
  undefined1 auStack_30 [20];
  
  if (*(int *)(param_1 + 0x968) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x968) + 8);
  }
  piVar4 = (int *)(param_1 + 0x95c);
  if (iVar1 == 0) {
    iVar1 = FUN_4a16b5f8(auStack_58,*(undefined4 *)(param_1 + 0x718));
    uVar6 = *(undefined4 *)(iVar1 + 8);
    piVar5 = *(int **)(iVar1 + 0xc);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
    }
    (**(code **)(*piVar4 + 0x1c))(piVar4);
    *(int **)(param_1 + 0x968) = piVar5;
    *(undefined4 *)(param_1 + 0x964) = uVar6;
    FUN_4a16b6c0(auStack_58);
    iVar1 = FUN_4a16be24(auStack_6c,*(undefined4 *)(param_1 + 0x718));
    uVar6 = *(undefined4 *)(iVar1 + 8);
    piVar5 = *(int **)(iVar1 + 0xc);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
    }
    (**(code **)(*(int *)(param_1 + 0x970) + 0x1c))((int *)(param_1 + 0x970));
    *(undefined4 *)(param_1 + 0x978) = uVar6;
    *(int **)(param_1 + 0x97c) = piVar5;
    FUN_4a16bef4(auStack_6c);
  }
  iVar1 = FUN_4a16b5a0(auStack_30,piVar4);
  iVar2 = 0;
  if (0 < *(int *)(iVar1 + 8)) {
    do {
      if (*(int *)(iVar1 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar1 + 0xc) + 8);
      }
      *(undefined1 *)(iVar3 + iVar2) = 0xff;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar1 + 8));
  }
  FUN_4a16b6c0(auStack_30);
  iVar1 = FUN_4a16bdcc(auStack_44,param_1 + 0x970);
  iVar2 = 0;
  if (0 < *(int *)(iVar1 + 8)) {
    do {
      if (*(int *)(iVar1 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar1 + 0xc) + 8);
      }
      *(undefined4 *)(iVar3 + iVar2 * 4) = 0xffffffff;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar1 + 8));
  }
  FUN_4a16bef4(auStack_44);
  return;
}



// Address: 4a0d53dc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0d53dc(int param_1,short param_2,ushort param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_r4;
  int iVar5;
  int unaff_r5;
  ushort unaff_r6;
  undefined1 auStack_24 [20];
  
  uVar1 = FUN_4a16c074(auStack_24,param_1 + 0x988);
  iVar2 = FUN_4a16ff5c((int)param_2,uVar1);
  FUN_4a16c1a0(auStack_24);
  iVar5 = iVar2;
  if (iVar2 == -1) {
    iVar5 = unaff_r4;
    param_1 = unaff_r5;
    param_3 = unaff_r6;
  }
  iVar3 = 0;
  if (iVar2 != -1) {
    iVar2 = *(int *)(param_1 + 0x994);
    if (iVar2 != 0) {
      iVar4 = *(int *)(iVar2 + 8);
    }
    else {
      iVar4 = 0;
    }
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 8);
    }
    *(ushort *)(iVar3 + iVar5 * 2) = *(ushort *)(iVar4 + iVar5 * 2) & 0xff00 | param_3;
    return;
  }
  return;
}



// Address: 4a0d546c

void FUN_4a0d546c(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  ushort *puVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x968);
  iVar5 = param_2;
  if (iVar1 != 0) {
    iVar5 = *(int *)(iVar1 + 8);
  }
  iVar6 = 0;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  if (*(char *)(iVar5 + param_2) != -1) {
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iVar1 + 8);
    }
    if (*(char *)(iVar5 + param_2) != param_3) {
      uVar2 = 0;
      goto LAB_4a0d54bc;
    }
  }
  uVar2 = 1;
LAB_4a0d54bc:
  switchD_4a11cc8c::default(uVar2,s_quest_already_in_progress_4a0d56a0);
  if (*(int *)(param_1 + 0x968) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(param_1 + 0x968) + 8);
  }
  *(char *)(iVar5 + param_2) = (char)param_3;
  uVar2 = FUN_4a0fba7c(*(undefined4 *)(param_1 + 0x18));
  FUN_4a118458(uVar2,param_2,param_3);
  if (param_2 == 0x10) {
    if (*(int *)(param_1 + 0x8e4) != 0) {
      iVar6 = *(int *)(*(int *)(param_1 + 0x8e4) + 8);
    }
    puVar3 = (ushort *)(iVar6 + 8);
    uVar4 = *(ushort *)(iVar6 + 8) & 0xbfff;
  }
  else if (param_2 < 0x11) {
    if (param_2 == 4) {
      if (*(int *)(param_1 + 0x8e4) != 0) {
        iVar6 = *(int *)(*(int *)(param_1 + 0x8e4) + 8);
      }
      puVar3 = (ushort *)(iVar6 + 4);
      uVar4 = *(ushort *)(iVar6 + 4) & 0xdfff;
    }
    else if (param_2 < 5) {
      if (param_2 == 0) {
        if (*(int *)(param_1 + 0x8e4) != 0) {
          iVar6 = *(int *)(*(int *)(param_1 + 0x8e4) + 8);
        }
        puVar3 = (ushort *)(iVar6 + 2);
        uVar4 = *(ushort *)(iVar6 + 2) & 0xefff;
      }
      else {
        if (param_2 != 1) {
          return;
        }
        if (*(int *)(param_1 + 0x8e4) != 0) {
          iVar6 = *(int *)(*(int *)(param_1 + 0x8e4) + 8);
        }
        puVar3 = (ushort *)(iVar6 + 2);
        uVar4 = *(ushort *)(iVar6 + 2) & 0xf7ff;
      }
    }
    else if (param_2 == 8) {
      if (*(int *)(param_1 + 0x8e4) != 0) {
        iVar6 = *(int *)(*(int *)(param_1 + 0x8e4) + 8);
      }
      puVar3 = (ushort *)(iVar6 + 0x1a);
      uVar4 = *(ushort *)(iVar6 + 0x1a) & 0xefff;
    }
    else {
      if (param_2 != 0xf) {
        return;
      }
      if (*(int *)(param_1 + 0x8e4) != 0) {
        iVar6 = *(int *)(*(int *)(param_1 + 0x8e4) + 8);
      }
      puVar3 = (ushort *)(iVar6 + 8);
      uVar4 = *(ushort *)(iVar6 + 8) & 0xefff;
    }
  }
  else if (param_2 == 0x13) {
    if (*(int *)(param_1 + 0x8e4) != 0) {
      iVar6 = *(int *)(*(int *)(param_1 + 0x8e4) + 8);
    }
    puVar3 = (ushort *)(iVar6 + 4);
    uVar4 = *(ushort *)(iVar6 + 4) & 0xbfff;
  }
  else if (param_2 < 0x14) {
    if (param_2 == 0x11) {
      if (*(int *)(param_1 + 0x8e4) != 0) {
        iVar6 = *(int *)(*(int *)(param_1 + 0x8e4) + 8);
      }
      puVar3 = (ushort *)(iVar6 + 8);
      uVar4 = *(ushort *)(iVar6 + 8) & 0xf7ff;
    }
    else {
      if (param_2 != 0x12) {
        return;
      }
      if (*(int *)(param_1 + 0x8e4) != 0) {
        iVar6 = *(int *)(*(int *)(param_1 + 0x8e4) + 8);
      }
      puVar3 = (ushort *)(iVar6 + 4);
      uVar4 = *(ushort *)(iVar6 + 4) & 0xefff;
    }
  }
  else {
    if (param_2 != 0x14) {
      if (param_2 == 0x1c) {
        if (*(int *)(param_1 + 0x8e4) != 0) {
          iVar6 = *(int *)(*(int *)(param_1 + 0x8e4) + 8);
        }
        *(ushort *)(iVar6 + 0xe) = *(ushort *)(iVar6 + 0xe) & 0xefff;
        return;
      }
      return;
    }
    if (*(int *)(param_1 + 0x8e4) != 0) {
      iVar6 = *(int *)(*(int *)(param_1 + 0x8e4) + 8);
    }
    puVar3 = (ushort *)(iVar6 + 4);
    uVar4 = *(ushort *)(iVar6 + 4) & 0xf7ff;
  }
  *puVar3 = uVar4;
  return;
}



// Address: 4a0d56bc

void FUN_4a0d56bc(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x940) = param_2;
  *(undefined4 *)(param_1 + 0x944) = 0;
  return;
}



// Address: 4a0d56d4

void FUN_4a0d56d4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_20 [12];
  int local_14;
  
  FUN_4a16bdcc(auStack_20,param_1 + 0x8a8);
  iVar4 = *(int *)PTR_DAT_4a0d5850;
  iVar5 = -1;
  iVar6 = *(int *)PTR_DAT_4a0d5854;
  iVar1 = 0;
  do {
    if (local_14 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(local_14 + 8);
    }
    if (iVar4 < *(int *)(iVar3 + iVar1 * 4)) {
      if (local_14 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(local_14 + 8);
      }
      iVar4 = *(int *)(iVar4 + iVar1 * 4);
    }
    if (local_14 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(local_14 + 8);
    }
    if (*(int *)(iVar3 + iVar1 * 4) < iVar6) {
      if (local_14 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(local_14 + 8);
      }
      iVar6 = *(int *)(iVar6 + iVar1 * 4);
      iVar5 = iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  uVar2 = 3;
  if (-0xa0001 < iVar6) {
    iVar6 = iVar4;
    if (0xa0000 < iVar4) {
      if (iVar4 < 0x4b0001) {
        if (iVar4 < 0x280001) {
          uVar2 = 2;
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    goto LAB_4a0d5834;
  }
  if (-0x320001 < iVar6) {
    if (iVar5 != 0) {
      if (iVar5 == 1) {
        uVar2 = 6;
        goto LAB_4a0d5834;
      }
      if (iVar5 == 2) {
        uVar2 = 8;
        goto LAB_4a0d5834;
      }
      if (iVar5 == 3) {
        uVar2 = 10;
        goto LAB_4a0d5834;
      }
      switchD_4a11cc8c::default(0,PTR_s_invalid_mood_4a0d5858);
    }
    uVar2 = 4;
    goto LAB_4a0d5834;
  }
  if (iVar5 != 0) {
    if (iVar5 == 1) {
      uVar2 = 7;
      goto LAB_4a0d5834;
    }
    if (iVar5 == 2) {
      uVar2 = 9;
      goto LAB_4a0d5834;
    }
    if (iVar5 == 3) {
      uVar2 = 0xb;
      goto LAB_4a0d5834;
    }
    switchD_4a11cc8c::default(0,PTR_s_invalid_mood_4a0d5858);
  }
  uVar2 = 5;
LAB_4a0d5834:
  *(int *)(param_1 + 0x8c0) = iVar6;
  *(undefined4 *)(param_1 + 0x8bc) = uVar2;
  FUN_4a16bef4(auStack_20);
  return;
}




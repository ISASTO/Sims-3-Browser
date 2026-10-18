/* AUTOMATED DECOMPILER OUTPUT. Not original source, not a buildable game.
 * Function boundaries, types, indirect calls, and data still require validation. */

// Address: 4a0456a8

void FUN_4a0456a8(void)

{
  int iVar1;
  
  iVar1 = *(int *)PTR_DAT_4a0456d0;
  *(int *)(iVar1 + 0x388) = *(int *)(iVar1 + 0x38c);
  *(int *)(iVar1 + 0x38c) = *(int *)(iVar1 + 0x38c) + 0x58;
  FUN_4a069e28();
  return;
}



// Address: 4a0456d4

bool FUN_4a0456d4(int param_1)

{
  return param_1 == 0x2d;
}



// Address: 4a0456e0

undefined4 FUN_4a0456e0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)**(int **)PTR_DAT_4a045704;
  piVar3 = piVar2 + (*(int **)PTR_DAT_4a045704)[1] * 3;
  while( true ) {
    if (piVar2 == piVar3) {
      return 0;
    }
    if (*piVar2 == param_1) break;
    piVar2 = piVar2 + 3;
  }
                    /* WARNING: Could not recover jumptable at 0x4a0456f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)piVar2[1])();
  return uVar1;
}



// Address: 4a045708

void FUN_4a045708(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  
  piVar11 = *(int **)PTR_DAT_4a045780;
  iVar10 = piVar11[1];
  piVar5 = (int *)*piVar11;
  piVar6 = piVar5;
  while( true ) {
    if (piVar6 == piVar5 + iVar10 * 3) {
      return;
    }
    if (*piVar6 == param_1) break;
    piVar6 = piVar6 + 3;
  }
  iVar1 = thunk_FUN_4a0015f0((int)piVar6 - (int)piVar5,0xc,piVar5,piVar5 + iVar10 * 3,param_4);
  uVar2 = iVar10 - (iVar1 + 1);
  uVar4 = 1;
  if (uVar2 < 2) {
    uVar4 = uVar2;
  }
  for (uVar2 = 0; uVar2 < uVar4; uVar2 = uVar2 + 1) {
    puVar7 = (undefined4 *)(*piVar11 + ((piVar11[1] - uVar4) + uVar2) * 0xc);
    puVar3 = (undefined4 *)(*piVar11 + (iVar1 + uVar2) * 0xc);
    uVar8 = puVar7[1];
    uVar9 = puVar7[2];
    *puVar3 = *puVar7;
    puVar3[1] = uVar8;
    puVar3[2] = uVar9;
  }
  uVar2 = piVar11[1] - 1;
  for (uVar4 = uVar2; uVar4 < (uint)piVar11[1]; uVar4 = uVar4 + 1) {
  }
  piVar11[1] = uVar2;
  return;
}



// Address: 4a045784

int * FUN_4a045784(int *param_1,byte *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_40 [36];
  int *local_1c;
  int *local_18;
  
  if (*(int *)param_2 == -1) {
    *(short *)(param_1 + 3) = (short)param_1[3] + 1;
  }
  else {
    thunk_FUN_4a161570(0xc4);
    local_1c = (int *)FUN_4a0633c4();
    local_1c[0xd] = local_1c[0xd] | 0x1000;
    local_18 = param_1 + 6;
    iVar2 = thunk_FUN_4a0e6898();
    iVar2 = thunk_FUN_4a161570(iVar2 << 2);
    FUN_4a134b68(param_1,iVar2,0x12);
    for (iVar5 = 0; iVar3 = thunk_FUN_4a0e6898(local_18), iVar5 < iVar3; iVar5 = iVar5 + 1) {
      iVar3 = iVar5 * 4;
      iVar4 = iVar3 + iVar2;
      *(char *)(iVar2 + iVar3) = (char)((uint)param_2[3] * (uint)*(byte *)(iVar2 + iVar3) >> 8);
      *(char *)(iVar4 + 1) = (char)((uint)param_2[2] * (uint)*(byte *)(iVar4 + 1) >> 8);
      *(char *)(iVar4 + 2) = (char)((uint)param_2[1] * (uint)*(byte *)(iVar4 + 2) >> 8);
      *(char *)(iVar4 + 3) = (char)((uint)*param_2 * (uint)*(byte *)(iVar4 + 3) >> 8);
    }
    thunk_FUN_4a0ecbc4(auStack_40);
    thunk_FUN_4a0ecab0(auStack_40,param_1[6]);
    thunk_FUN_4a0ebe9c(auStack_40,(short)param_1[8]);
    thunk_FUN_4a0ecb88(auStack_40,*(undefined2 *)((int)param_1 + 0x22));
    thunk_FUN_4a0e4d6c(auStack_40,0,0,0,0);
    thunk_FUN_4a0e53a8(auStack_40,iVar2);
    FUN_4a062e34(local_1c,auStack_40);
    FUN_4a0614aa(local_1c,iVar2,0x12);
    thunk_FUN_4a161530(iVar2);
    puVar1 = PTR_DAT_4a045898;
    *(int **)PTR_DAT_4a045890 = param_1;
    *(undefined **)puVar1 = PTR_LAB_4a049c38_1_4a045894;
    FUN_4a06157c(local_1c,((param_1[0xd] << 0xd) >> 0x1f) + 1);
    FUN_4a1652c6(local_1c,*(undefined4 *)(*local_1c + 0x3c));
    param_1 = local_1c;
    *(undefined4 *)puVar1 = 0;
    thunk_FUN_4a0ecbf0(auStack_40);
  }
  return param_1;
}



// Address: 4a0458a0

void FUN_4a0458a0(void)

{
  int iVar1;
  
  iVar1 = *(int *)PTR_DAT_4a0458bc;
  *(undefined4 *)(iVar1 + 0x378) = 0;
  *(undefined4 *)(iVar1 + 0x37c) = *(undefined4 *)(iVar1 + 0x374);
  return;
}



// Address: 4a0458c0

void FUN_4a0458c0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)PTR_DAT_4a0458e4;
  *(undefined4 *)(iVar1 + 0x4b4) = 0;
  if (param_1 != 0) {
    FUN_4a0361cc(param_1);
    *(int *)(iVar1 + 0x4b4) = param_1;
  }
  return;
}



// Address: 4a0458e8

/* WARNING: Removing unreachable block (ram,0x4a0459d0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0458e8(int param_1,int param_2,int param_3,int param_4,short param_5,short param_6,
                 uint param_7,undefined4 param_8,uint param_9)

{
  short sVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int *piVar5;
  short **ppsVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  short sVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  short *psVar15;
  short *psVar16;
  undefined8 uVar17;
  short *local_154;
  short *local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  int local_13c [20];
  int local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  int local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  int local_cc [5];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  short *local_ac;
  int local_a8;
  short *local_a4;
  undefined4 local_a0;
  int local_9c;
  short *local_98;
  short *local_94;
  int *local_90;
  int *local_8c;
  undefined4 local_88;
  uint local_84;
  undefined4 local_80;
  byte local_7c;
  undefined4 local_78;
  uint local_74;
  undefined4 local_70;
  byte local_6c;
  int local_68;
  int local_64;
  undefined4 local_60;
  undefined2 local_58;
  undefined2 local_56;
  undefined2 local_54;
  undefined2 local_52;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  uint local_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  puVar2 = PTR_DAT_4a045fa0;
  if (*(int *)(PTR_DAT_4a045fa0 + 0x18) != 0) {
    *(undefined4 *)(PTR_DAT_4a045fa0 + 0x60) = 1;
  }
  local_4c = *(undefined4 *)(param_1 + 8);
  iStack_34 = param_1;
  local_30 = param_2;
  iStack_2c = param_3;
  iStack_28 = param_4;
  uVar17 = FUN_4a145d70(&local_4c);
  local_50 = (int)uVar17;
  if (param_4 == -1) {
    param_4 = FUN_4a03b640(*(undefined4 *)(param_1 + 8),(int)((ulonglong)uVar17 >> 0x20),0xffffffff)
    ;
    param_4 = param_4 - param_3;
  }
  local_58 = 0;
  local_56 = 0;
  local_54 = 1000;
  local_52 = 1000;
  iVar4 = *(int *)PTR_DAT_4a045fa4;
  *(undefined2 *)(iVar4 + 0x14) = 0;
  *(undefined2 *)(iVar4 + 0x16) = 0;
  *(undefined2 *)(iVar4 + 0x18) = 1000;
  *(undefined2 *)(iVar4 + 0x1a) = 1000;
  *(int *)(iVar4 + 0x10) = local_30;
  *(undefined4 *)(iVar4 + 0x34) = *(undefined4 *)(local_30 + 0x18);
  *(int *)(iVar4 + 0x30) = (int)*(char *)(local_30 + 0x11);
  local_88 = 0;
  local_7c = local_7c & 0xfc;
  local_80 = 0;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_6c = local_6c & 0xfc;
  local_74 = 0;
  local_60 = 0;
  FUN_4a040c7c(&local_88,local_50 + param_3 * 2,param_4);
  if ((param_7 & 0x10) == 0) {
    if ((param_7 & 8) == 0) {
      param_6 = param_6 - (short)local_64;
    }
  }
  else {
    param_6 = param_6 - (short)(local_64 / 2);
  }
  if ((param_7 & 2) != 0) {
    param_5 = param_5 - (short)(local_68 / 2);
  }
  if ((param_7 & 4) != 0) {
    param_5 = param_5 - (short)local_68;
  }
  FUN_4a0bf06c();
  piVar5 = (int *)FUN_4a0bf07c();
  puVar3 = PTR_DAT_4a045fac;
  piVar10 = (int *)0x0;
  local_90 = (int *)0x0;
  local_38 = (int)param_9 >> 8;
  local_3c = (int)param_9 >> 0x10;
  local_8c = piVar5;
  if (*(int *)(*(int *)PTR_DAT_4a045fa8 + 0xc) == 2) {
    piVar10 = piVar5;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xac))(piVar5,0x1701);
      FUN_4a1504dc();
      uVar12 = *(undefined4 *)puVar3;
      local_94 = (short *)FUN_4a0bc200(uVar12);
      local_98 = (short *)FUN_4a0bc1f8(uVar12);
      if ((int)local_94 < (int)local_98) {
        ppsVar6 = &local_98;
      }
      else {
        ppsVar6 = &local_94;
      }
      uVar12 = FUN_4a171fac(*ppsVar6);
      uVar14 = *(undefined4 *)puVar3;
      local_94 = (short *)FUN_4a0bc200(uVar14);
      local_98 = (short *)FUN_4a0bc1f8(uVar14);
      if ((int)local_98 < (int)local_94) {
        ppsVar6 = &local_98;
      }
      else {
        ppsVar6 = &local_94;
      }
      uVar14 = FUN_4a171fac(*ppsVar6);
      local_154 = (short *)0x40a00000;
      FUN_4a1506a8(uVar14,0,uVar12,0,&DAT_c0a00000);
      (**(code **)(*piVar5 + 0xac))(piVar5,0x1700);
      FUN_4a1504dc();
      (**(code **)(*piVar5 + 0x28))(piVar5,0xde1);
      (**(code **)(*piVar5 + 0x24))(piVar5,0x8076);
      (**(code **)(*piVar5 + 0x2c))(piVar5,0x8078);
      uVar14 = FUN_4a172098(param_9 & 0xff);
      uVar12 = DAT_4a045fb0;
      uVar14 = FUN_4a17211c(uVar14,DAT_4a045fb0);
      uVar7 = FUN_4a172098(local_38 & 0xff);
      uVar7 = FUN_4a17211c(uVar7,uVar12);
      uVar8 = FUN_4a172098(local_3c & 0xff);
      uVar12 = FUN_4a17211c(uVar8,uVar12);
      thunk_FUN_4a14febc(uVar12,uVar7,uVar14,0x3f800000);
      goto LAB_4a0460a0;
    }
  }
  else {
    local_90 = piVar5;
    if (*(int *)(puVar2 + 0x6c) == 0) {
      uVar12 = FUN_4a135760(*(undefined4 *)PTR_DAT_4a045fb4,s_textShader_4a045fd0,
                            s_CIwGxShaderTechnique_4a045fb8,0);
      *(undefined4 *)(puVar2 + 0x6c) = uVar12;
      uVar12 = FUN_4a0a5a90();
      uVar12 = thunk_FUN_4a1503f0(uVar12,s_inPMVMat_4a045fdc);
      *(undefined4 *)(puVar2 + 0x70) = uVar12;
      uVar12 = FUN_4a0a5a90(*(undefined4 *)(puVar2 + 0x6c));
      uVar12 = thunk_FUN_4a1503f0(uVar12,s_inUVScale_4a045fe8);
      *(undefined4 *)(puVar2 + 0x74) = uVar12;
      uVar12 = FUN_4a0a5a90(*(undefined4 *)(puVar2 + 0x6c));
      uVar12 = thunk_FUN_4a1503f0(uVar12,s_inSampler0_4a045ff4);
      *(undefined4 *)(puVar2 + 0x78) = uVar12;
      uVar12 = FUN_4a0a5a90(*(undefined4 *)(puVar2 + 0x6c));
      uVar12 = thunk_FUN_4a1503f0(uVar12,s_inCol_4a046000);
      *(undefined4 *)(puVar2 + 0x7c) = uVar12;
    }
    piVar5 = local_90;
    uVar12 = FUN_4a0a5a90(*(undefined4 *)(puVar2 + 0x6c));
    (**(code **)(*piVar5 + 0xdc))(piVar5,uVar12);
  }
  local_cc[0] = *(int *)PTR_DAT_4a046008;
  local_cc[1] = *(int *)(PTR_DAT_4a046008 + 4);
  local_cc[2] = *(int *)(PTR_DAT_4a046008 + 8);
  local_cc[3] = *(int *)(PTR_DAT_4a046008 + 0xc);
  local_cc[4] = *(int *)(PTR_DAT_4a046008 + 0x10);
  local_b8 = *(undefined4 *)(PTR_DAT_4a046008 + 0x14);
  local_b4 = *(undefined4 *)(PTR_DAT_4a046008 + 0x18);
  local_b0 = *(undefined4 *)(PTR_DAT_4a046008 + 0x1c);
  local_ac = *(short **)(PTR_DAT_4a046008 + 0x20);
  local_a8 = *(int *)(PTR_DAT_4a046008 + 0x24);
  local_a4 = *(short **)(PTR_DAT_4a046008 + 0x28);
  local_a0 = *(short **)(PTR_DAT_4a046008 + 0x2c);
  uVar12 = *(undefined4 *)puVar3;
  local_150 = (short *)FUN_4a0bc200(uVar12);
  local_154 = (short *)FUN_4a0bc1f8(uVar12);
  if ((int)local_154 < (int)local_150) {
    ppsVar6 = &local_154;
  }
  else {
    ppsVar6 = &local_150;
  }
  uVar12 = FUN_4a171fac(*ppsVar6);
  local_cc[0] = FUN_4a171bb8(0x40000000,uVar12);
  uVar12 = *(undefined4 *)puVar3;
  local_150 = (short *)FUN_4a0bc200(uVar12);
  local_154 = (short *)FUN_4a0bc1f8(uVar12);
  if ((int)local_150 < (int)local_154) {
    ppsVar6 = &local_154;
  }
  else {
    ppsVar6 = &local_150;
  }
  uVar12 = FUN_4a171fac(*ppsVar6);
  local_cc[4] = FUN_4a171bb8(0x40000000,uVar12);
  local_ac = DAT_4a04600c;
  local_a8 = -0x40800000;
  local_a4 = (short *)0xbf800000;
  uVar12 = FUN_4a171fac(2 - *(int *)(puVar2 + 0x4c));
  uVar12 = FUN_4a17211c(uVar12,DAT_4a046010);
  local_d0 = 0;
  local_d4 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_e4 = 0;
  local_e8 = 0;
  local_13c[0x12] = 0;
  local_dc = 0x3f800000;
  local_13c[0x10] = FUN_4a002d64(uVar12);
  local_ec = local_13c[0x10];
  local_13c[0x13] = FUN_4a002f08(uVar12);
  local_13c[0x11] = local_13c[0x13] ^ 0x80000000;
  FUN_4a0d3a78(local_cc,local_13c + 0x10);
  uVar12 = FUN_4a17211c(local_13c[0x12],local_a0);
  uVar14 = FUN_4a17211c(local_13c[0x11],local_a4);
  uVar7 = FUN_4a17211c(local_13c[0x10],local_a8);
  uVar14 = FUN_4a171a94(uVar7,uVar14);
  iVar4 = FUN_4a171a94(uVar14,uVar12);
  local_40 = FUN_4a17211c(local_e8,local_a0);
  uVar12 = FUN_4a17211c(local_ec,local_a4);
  uVar14 = FUN_4a17211c(local_13c[0x13],local_a8);
  uVar12 = FUN_4a171a94(uVar14,uVar12);
  psVar15 = (short *)FUN_4a171a94(uVar12,local_40);
  local_44 = FUN_4a17211c(local_dc,local_a0);
  local_48 = FUN_4a17211c(local_e0,local_a4);
  uVar12 = FUN_4a17211c(local_e4,local_a8);
  uVar12 = FUN_4a171a94(uVar12,local_48);
  local_150 = (short *)FUN_4a171a94(uVar12,local_44);
  local_154 = psVar15;
  local_9c = iVar4;
  local_98 = psVar15;
  local_94 = local_150;
  local_a8 = iVar4;
  local_a4 = psVar15;
  uVar9 = 0;
  local_a0 = local_150;
  do {
    uVar13 = 0;
    do {
      if (uVar9 < 3) {
        if (uVar13 < 3) {
          local_13c[uVar13 * 4 + uVar9] = local_cc[uVar9 * 3 + uVar13];
        }
        else {
          local_13c[uVar13 * 4 + uVar9] = (&local_a8)[uVar9];
        }
      }
      else {
        local_13c[uVar13 * 4 + uVar9] = 0;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < 4);
    uVar9 = uVar9 + 1;
  } while (uVar9 < 4);
  local_13c[0xf] = 0x3f800000;
  (**(code **)(*local_90 + 0xd8))(local_90,*(undefined4 *)(puVar2 + 0x70),1,0,local_13c);
  uVar14 = FUN_4a172098(param_9 & 0xff);
  uVar12 = DAT_4a045fb0;
  local_14c = FUN_4a17211c(uVar14,DAT_4a045fb0);
  uVar14 = FUN_4a172098(local_38 & 0xff);
  local_148 = FUN_4a17211c(uVar14,uVar12);
  uVar14 = FUN_4a172098(local_3c & 0xff);
  local_144 = FUN_4a17211c(uVar14,uVar12);
  uVar14 = FUN_4a172098(param_9 >> 0x18);
  local_140 = FUN_4a17211c(uVar14,uVar12);
  (**(code **)(*local_90 + 0xd4))(local_90,*(undefined4 *)(puVar2 + 0x7c),1,&local_14c);
  (**(code **)(*local_90 + 0xac))(local_90,0);
  (**(code **)(*local_90 + 0xac))(local_90,1);
LAB_4a0460a0:
  (**(code **)(*local_8c + 0x28))(local_8c,0xbe2);
  (**(code **)(*local_8c + 0x90))(local_8c,0x302);
  local_94 = (short *)0x0;
  iVar4 = FUN_4a145eb8(local_30);
  if (0 < iVar4) {
    do {
      uVar9 = FUN_4a033558(&local_88,0xffffffff,local_94,&local_98);
      if (piVar10 == (int *)0x0) {
        local_154 = *(short **)(*(int *)PTR_DAT_4a045fa8 + 0x468);
        thunk_FUN_4a150d48(1,2,0x1402,0,4);
      }
      else {
        thunk_FUN_4a150a70(2,0x1402);
      }
      iVar4 = FUN_4a145dc8(local_30,local_94);
      local_9c = *(int *)(iVar4 + 0x2c);
      local_a0 = *(short **)(local_9c + 0xbc);
      if (piVar10 == (int *)0x0) {
        uVar12 = FUN_4a172098((uint)local_a0 & 0xffff);
        uVar12 = FUN_4a17295c(uVar12,0xfffffff4);
        local_b4 = FUN_4a17295c(uVar12,0xfffffff4);
        uVar12 = FUN_4a172098(local_a0._2_2_);
        uVar12 = FUN_4a17295c(uVar12,0xfffffff4);
        local_b0 = FUN_4a17295c(uVar12,0xfffffff4);
        (**(code **)(*local_90 + 0xcc))
                  (local_90,*(undefined4 *)(PTR_DAT_4a045fa0 + 0x74),1,&local_b4);
      }
      else {
        (**(code **)(*piVar10 + 0xac))(piVar10,0x1702);
        local_e8 = *(undefined4 *)(PTR_DAT_4a0464b8 + 4);
        local_e4 = *(undefined4 *)(PTR_DAT_4a0464b8 + 8);
        local_e0 = *(undefined4 *)(PTR_DAT_4a0464b8 + 0xc);
        local_dc = *(undefined4 *)(PTR_DAT_4a0464b8 + 0x10);
        local_d4 = *(undefined4 *)(PTR_DAT_4a0464b8 + 0x18);
        local_d0 = *(undefined4 *)(PTR_DAT_4a0464b8 + 0x1c);
        local_cc[0] = *(int *)(PTR_DAT_4a0464b8 + 0x20);
        local_cc[1] = *(int *)(PTR_DAT_4a0464b8 + 0x24);
        local_cc[2] = *(int *)(PTR_DAT_4a0464b8 + 0x28);
        local_cc[3] = *(int *)(PTR_DAT_4a0464b8 + 0x2c);
        local_cc[4] = *(int *)(PTR_DAT_4a0464b8 + 0x30);
        local_b8 = *(undefined4 *)(PTR_DAT_4a0464b8 + 0x34);
        local_b4 = *(undefined4 *)(PTR_DAT_4a0464b8 + 0x38);
        local_b0 = *(undefined4 *)(PTR_DAT_4a0464b8 + 0x3c);
        local_ec = (int)(short)local_a0 >> 8;
        local_d8 = (int)local_a0._2_2_ >> 8;
        FUN_4a1505bc(&local_ec);
      }
      iVar4 = *(int *)PTR_DAT_4a045fa8;
      sVar11 = 0;
      psVar15 = *(short **)(iVar4 + 0x38c);
      psVar16 = psVar15 + uVar9 * 8;
      local_a8 = uVar9 * 6;
      *(short **)(iVar4 + 0x388) = psVar16;
      *(short **)(iVar4 + 0x38c) = psVar16 + uVar9 * 6;
      uVar13 = 0;
      local_ac = psVar16;
      local_a4 = psVar15;
      if (uVar9 != 0) {
        do {
          FUN_4a1364ec(&local_b8,&local_88,*(undefined4 *)(local_98 + uVar13 * 2));
          uVar13 = uVar13 + 1;
          sVar1 = (short)local_b8 + param_5;
          local_b8._2_2_ = local_b8._2_2_ + param_6;
          local_b8 = CONCAT22(local_b8._2_2_,sVar1);
          *psVar15 = local_b8._2_2_;
          psVar15[1] = sVar1;
          psVar15[2] = local_b4._2_2_ + local_b8._2_2_;
          psVar15[3] = sVar1;
          sVar1 = sVar1 + (short)local_b4;
          psVar15[4] = local_b4._2_2_ + local_b8._2_2_;
          psVar15[5] = sVar1;
          local_b0 = CONCAT22(sVar1,local_b8._2_2_);
          psVar15[6] = local_b8._2_2_;
          psVar15[7] = sVar1;
          *psVar16 = sVar11;
          psVar16[1] = sVar11 + 1;
          psVar16[2] = sVar11 + 2;
          psVar16[3] = sVar11;
          psVar16[4] = sVar11 + 2;
          sVar1 = sVar11 + 3;
          sVar11 = sVar11 + 4;
          psVar16[5] = sVar1;
          psVar15 = psVar15 + 8;
          psVar16 = psVar16 + 6;
        } while (uVar13 < uVar9);
      }
      (**(code **)(*local_8c + 0x10))(local_8c,0xde1,*(undefined4 *)(local_9c + 0xb4));
      if (piVar10 == (int *)0x0) {
        local_154 = local_a4;
        thunk_FUN_4a150d48(0,2,0x1402,0,4);
        (**(code **)(*local_90 + 0xb4))(local_90,*(undefined4 *)(PTR_DAT_4a045fa0 + 0x78),0);
      }
      else {
        thunk_FUN_4a150d6c(2,0x1402);
      }
      if (local_a8 != 0) {
        host_glDrawElements_arm(4,local_a8,0x1403,local_ac);
      }
      thunk_FUN_4a05a68c();
      local_94 = (short *)((int)local_94 + 1);
      iVar4 = FUN_4a145eb8(local_30);
    } while ((int)local_94 < iVar4);
  }
  for (uVar9 = 0; uVar9 < local_74; uVar9 = uVar9 + 1) {
  }
  if ((local_6c & 1) == 0) {
    thunk_FUN_4a0a6f48(local_78,4);
    local_78 = 0;
  }
  for (uVar9 = 0; uVar9 < local_84; uVar9 = uVar9 + 1) {
  }
  if ((local_7c & 1) == 0) {
    thunk_FUN_4a0a6f48(local_88,8);
    return;
  }
  return;
}



// Address: 4a0464bc

void FUN_4a0464bc(uint param_1)

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



// Address: 4a0466b8

void FUN_4a0466b8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_4a046714;
  puVar1 = PTR_DAT_4a046704;
  *(undefined **)(PTR_DAT_4a046704 + 0x24) = PTR_LAB_4a046700;
  *(undefined **)(puVar1 + 0x28) = PTR_FUN_4a046708;
  *(undefined **)(puVar1 + 0x2c) = PTR_FUN_4a04670c;
  *(undefined **)puVar2 = PTR_FUN_4a046710;
  *(undefined **)PTR_DAT_4a04671c = PTR_FUN_4a046718;
  *(undefined **)(puVar1 + 0x30) = PTR_LAB_4a046720;
  *(undefined4 *)(puVar1 + 0x20) = 1;
  return;
}



// Address: 4a046724

void FUN_4a046724(void)

{
  int iVar1;
  
  iVar1 = FUN_4a04e90c();
  if (iVar1 != 0) {
    do {
      iVar1 = FUN_4a04d7bc();
    } while (iVar1 != 0);
    FUN_4a0399a0();
  }
  return;
}



// Address: 4a046740

void FUN_4a046740(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*param_1 != 0) {
    iVar1 = FUN_4a13578c(*(undefined4 *)(PTR_DAT_4a046760 + 0xc),*param_1,param_2,param_3);
    *param_1 = iVar1;
  }
  return;
}



// Address: 4a046764

void FUN_4a046764(void)

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
  puVar6 = PTR_DAT_4a046888;
  *(int **)(PTR_DAT_4a046888 + 0x50) = piVar8;
  FUN_4a0612e0(piVar8,*(undefined4 *)(puVar6 + 0x1c));
  (**(code **)(*piVar8 + 0x3c))(piVar8);
  thunk_FUN_4a161570(0x58);
  iVar9 = thunk_FUN_4a069e28();
  *(int *)(puVar6 + 0x54) = iVar9;
  *(int **)(iVar9 + 0x2c) = piVar8;
  puVar7 = PTR_DAT_4a04688c;
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



// Address: 4a046890

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a046890(int param_1,uint param_2)

{
  short sVar1;
  ushort uVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined *puVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  ushort *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  int *piVar17;
  uint uVar18;
  short *psVar19;
  int iVar20;
  ushort *puVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint *puVar28;
  byte *pbVar29;
  undefined *puVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  short *psVar36;
  int iVar37;
  uint *puVar38;
  int iVar39;
  short *psVar40;
  ushort *puVar41;
  uint *puVar42;
  int iVar43;
  undefined4 *puVar44;
  ushort uVar45;
  uint uVar46;
  undefined4 uVar47;
  int iVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  int iVar52;
  short *psVar53;
  int iVar54;
  short *psVar55;
  int iVar56;
  int iVar57;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar58;
  bool bVar59;
  bool bVar60;
  bool bVar61;
  bool bVar62;
  bool bVar63;
  bool bVar64;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  int iStack_e0;
  short *psStack_dc;
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
  uint local_80;
  uint local_7c;
  undefined *local_78;
  uint local_74;
  ushort *local_70;
  undefined4 *local_6c;
  short *local_68;
  uint local_64;
  short *local_60;
  uint local_5c;
  uint *local_58;
  uint local_54;
  ushort *local_50;
  uint local_4c;
  uint local_48;
  short *local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  ushort *local_2c;
  uint local_28;
  
  local_50 = *(ushort **)PTR_DAT_4a046d00;
  local_54 = param_2 * 4;
  local_58 = *(uint **)(local_50 + 0x1c6);
  local_60 = (short *)((int)local_58 + param_2 * 8 * 2);
  *(uint **)(local_50 + 0x1c4) = local_58;
  *(short **)(local_50 + 0x1c6) = local_60;
  local_5c = *(uint *)(local_50 + 0x22c);
  psVar19 = local_60 + param_2 * 8;
  *(short **)(local_50 + 0x1c4) = local_60;
  *(short **)(local_50 + 0x1c6) = psVar19;
  local_64 = *(uint *)(local_50 + 0x234);
  local_68 = (short *)0x0;
  iVar39 = *(int *)(local_50 + 0x22e);
  if (iVar39 != 0) {
    *(short **)(local_50 + 0x1c4) = psVar19;
    *(short **)(local_50 + 0x1c6) = psVar19 + param_2 * 0xc;
    local_68 = psVar19;
  }
  local_6c = (undefined4 *)0x0;
  iVar43 = *(int *)(local_50 + 0x238);
  if (iVar43 != 0) {
    local_6c = *(undefined4 **)(local_50 + 0x1c6);
    *(undefined4 **)(local_50 + 0x1c4) = local_6c;
    *(undefined4 **)(local_50 + 0x1c6) = local_6c + param_2 * 4;
  }
  uVar33 = 0;
  iVar20 = *(int *)(local_50 + 0x20c);
  if (param_2 != 0) {
    local_34 = 0xc - (3 - iVar20);
    puVar16 = local_6c;
    psVar19 = (short *)local_58;
    psVar36 = local_60;
    psVar40 = local_68;
    do {
      puVar21 = (ushort *)(param_1 + uVar33 * 2);
      local_38 = (uint)*puVar21;
      iVar37 = local_38 * 2 + 1;
      uVar45 = *(ushort *)(*(int *)(*(int *)(local_50 + 600) + 0x2c) + 0x20);
      iVar54 = *(int *)(local_50 + 0x234);
      local_3c = (int)*(short *)(iVar54 + iVar37 * 4);
      iVar52 = (int)*(short *)(iVar54 + local_38 * 8);
      iVar48 = local_3c - iVar52;
      if (iVar48 < 1) {
        iVar48 = iVar52 - local_3c;
      }
      uVar9 = *(ushort *)(*(int *)(*(int *)(local_50 + 600) + 0x2c) + 0x22);
      local_40 = (uint)*(short *)(iVar54 + iVar37 * 4 + 2);
      iVar54 = (int)*(short *)(iVar54 + local_38 * 8 + 2);
      iVar52 = local_40 - iVar54;
      if (iVar52 < 1) {
        iVar52 = iVar54 - local_40;
      }
      psVar53 = (short *)(local_5c + local_38 * 4);
      sVar1 = *psVar53;
      uVar2 = psVar53[1];
      *psVar19 = *psVar53;
      psVar19[1] = psVar53[1];
      local_44 = (short *)(local_64 + local_38 * 8);
      *psVar36 = *local_44;
      psVar36[1] = local_44[1];
      local_48 = (uint)uVar2;
      local_4c = local_48 + ((uint)uVar9 * iVar52 >> (local_34 & 0xff));
      psVar19[2] = sVar1;
      psVar19[3] = (short)local_4c;
      psVar53 = (short *)(local_64 + iVar37 * 4);
      sVar3 = psVar53[1];
      psVar36[2] = *local_44;
      psVar36[3] = sVar3;
      sVar1 = sVar1 + (short)((uint)uVar45 * iVar48 >> (local_34 & 0xff));
      psVar19[4] = sVar1;
      psVar19[5] = (short)local_4c;
      psVar36[4] = *psVar53;
      psVar36[5] = psVar53[1];
      psVar19[6] = sVar1;
      psVar19[7] = uVar2;
      sVar1 = local_44[1];
      psVar36[6] = *psVar53;
      psVar36[7] = sVar1;
      psVar53 = psVar40;
      if (iVar39 != 0) {
        psVar53 = (short *)(iVar39 + (uint)*puVar21 * 6);
        *psVar40 = *psVar53;
        psVar40[1] = psVar53[1];
        psVar40[2] = psVar53[2];
        psVar53 = (short *)(iVar39 + (uint)*puVar21 * 6);
        psVar40[3] = *psVar53;
        psVar40[4] = psVar53[1];
        psVar40[5] = psVar53[2];
        psVar55 = (short *)(iVar39 + (uint)*puVar21 * 6);
        psVar40[6] = *psVar55;
        psVar40[7] = psVar55[1];
        psVar53 = psVar40 + 0xc;
        psVar40[8] = psVar55[2];
        psVar55 = (short *)(iVar39 + (uint)*puVar21 * 6);
        psVar40[9] = *psVar55;
        psVar40[10] = psVar55[1];
        psVar40[0xb] = psVar55[2];
      }
      puVar44 = puVar16;
      if (iVar43 != 0) {
        *puVar16 = *(undefined4 *)(iVar43 + (uint)*puVar21 * 4);
        puVar16[1] = *(undefined4 *)(iVar43 + (uint)*puVar21 * 4);
        puVar44 = puVar16 + 4;
        puVar16[2] = *(undefined4 *)(iVar43 + (uint)*puVar21 * 4);
        puVar16[3] = *(undefined4 *)(iVar43 + (uint)*puVar21 * 4);
      }
      uVar33 = uVar33 + 1;
      puVar16 = puVar44;
      psVar19 = psVar19 + 8;
      psVar36 = psVar36 + 8;
      psVar40 = psVar53;
    } while (uVar33 < param_2);
  }
  local_30 = local_54;
  local_2c = (ushort *)param_1;
  local_28 = param_2;
  if (3 - iVar20 == 0) {
    (**(code **)(PTR_DAT_4a046d04 + 0x14))(local_58,local_54,3);
  }
  else {
    (**(code **)(PTR_DAT_4a046d04 + 0x14))(local_58,local_54,0);
  }
  FUN_4a0363b8(local_60,0);
  if (iVar39 != 0) {
    FUN_4a03bf40(local_68,local_54);
  }
  if (iVar43 != 0) {
    FUN_4a0397f0(local_6c,local_54);
  }
  uVar33 = local_30;
  puVar30 = PTR_DAT_4a042dfc;
  local_2c = *(ushort **)PTR_DAT_4a046d08;
  local_28 = local_30;
  local_30 = 3;
  local_58 = *(uint **)PTR_DAT_4a042dfc;
  puVar21 = local_2c;
  if (local_2c == (ushort *)0x0) {
    puVar21 = (ushort *)PTR_DAT_4a042e00;
  }
  if (local_2c == (ushort *)0x0) {
    local_2c = *(ushort **)puVar21;
  }
  local_5c = local_58[0x12d];
  if ((local_58[0x12d] == 0) && (local_5c = local_58[300], local_58[300] == 0)) {
    return;
  }
  iVar39 = FUN_4a0698e4(local_5c);
  if (iVar39 != 0) {
                    /* WARNING: Could not recover jumptable at 0x4a041e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (local_30 == 7) {
    uVar10 = local_58[0xd5];
    bVar58 = uVar10 == 0;
    if (bVar58) {
      uVar10 = local_58[0x19b];
    }
    if (!bVar58 || uVar10 != 0) {
      FUN_4a046890(local_2c,uVar33);
      return;
    }
  }
  uStack_c4 = uVar33;
  if ((((local_30 == 4 || local_30 == 3) && (uVar10 = local_58[0x11c], uVar10 != 0)) &&
      (uVar11 = *(uint *)(local_5c + 0x10), (~(uVar11 >> 2) & 1) == 0 && (uVar11 & 2) == 0)) &&
     ((uVar11 & 1) != 2)) {
    uVar11 = uVar33 >> 1;
    if (local_30 == 4) {
      uVar11 = uVar33 - 2;
    }
    iVar39 = 0;
    if (0 < (int)uVar11) {
      do {
        if (*(int *)(uVar10 + iVar39 * 4) != *(int *)(uVar10 + iVar39 * 4 + 4)) {
          if (local_30 == 4) {
            local_30 = 1;
          }
          else if (local_30 == 3) {
            uStack_c4 = uVar33 * 0x18000 >> 0x10;
            iVar39 = *(int *)puVar30;
            puVar12 = *(ushort **)(iVar39 + 0x38c);
            *(ushort **)(iVar39 + 0x388) = puVar12;
            *(uint *)(iVar39 + 0x38c) = (uStack_c4 * 2 + 3 & 0xfffffffc) + (int)puVar12;
            puVar21 = puVar12;
            for (; (uVar33 & 0xffff) != 0; uVar33 = (uVar33 & 0xffff) - 4) {
              *puVar21 = *local_2c;
              puVar21[1] = local_2c[1];
              puVar21[2] = local_2c[3];
              puVar21[3] = local_2c[3];
              puVar21[4] = local_2c[1];
              puVar21[5] = local_2c[2];
              puVar21 = puVar21 + 6;
              local_2c = local_2c + 4;
            }
            local_30 = 0;
            local_2c = puVar12;
          }
          break;
        }
        iVar39 = iVar39 + 2;
      } while (iVar39 < (int)uVar11);
    }
  }
  local_60 = (short *)local_58[0x11c];
  local_64 = 0xff;
  local_58[0x127] = (uint)local_2c;
  local_58[0x128] = (uint)local_2c;
  *(short *)(local_58 + 0x129) = (short)uStack_c4;
  if ((*(int *)(local_5c + 0x2c) == 0) ||
     (((*(uint *)(local_5c + 0x10) & 2) == 0 && ((*(uint *)(local_5c + 0x10) & 1) != 2)))) {
    bVar64 = false;
    bVar58 = false;
  }
  else {
    bVar64 = true;
    bVar58 = true;
  }
  if (bVar58) {
    local_64 = 0xffffffff;
    local_60 = (short *)0x0;
  }
  else {
    (**(code **)(PTR_DAT_4a042e04 + 0x18))(local_5c,&local_60);
  }
  uVar33 = local_58[0xde];
  local_78 = (undefined *)0x0;
  local_7c = 0;
  local_80 = 0;
  bVar58 = *(int *)(local_5c + 0x2c) != 0;
  uVar10 = *(uint *)(local_5c + 0x10);
  if ((((~(uVar10 >> 2) & 1) != 0) && ((uVar10 & 2) == 0)) && ((uVar10 & 1) != 2)) {
    uVar10 = local_58[0x11c];
    bVar59 = uVar10 == 0;
    if (bVar59) {
      uVar10 = local_58[0x117];
    }
    if (!bVar59 || uVar10 != 0) {
      uStack_a4 = (uint)(local_60 != (short *)0x0);
      goto LAB_4a042168;
    }
  }
  uStack_a4 = 0;
LAB_4a042168:
  uStack_a8 = 0;
  pbStack_ac = (byte *)0x0;
  uVar10 = **(uint **)puVar30;
  bVar59 = (uVar10 & 0x20000) != 0;
  if (bVar59) {
    uVar10 = local_58[0x117];
  }
  if (bVar59 && uVar10 != 0) {
    FUN_4a056a74(local_5c);
    uStack_a8 = (*(uint *)(*(int *)puVar30 + 4) & 0x20) >> 5;
    pbStack_ac = (byte *)local_58[0x101];
  }
  uVar11 = *(uint *)(local_5c + 0x2c);
  uVar10 = (*(uint *)(local_5c + 0x10) & 0x70000) >> 0x10;
  if (((uVar10 == 5) && (uVar10 = 0, uVar11 != 0)) && ((*(uint *)(uVar11 + 0x34) & 2) != 0)) {
    uVar10 = 4;
  }
  if ((*local_58 & 0x400000) != 0) {
    FUN_4a032b24(uVar11);
  }
  uVar13 = *(uint *)(local_5c + 0x10);
  if (((uVar13 & 2) == 0) && ((uVar13 & 1) == 0)) {
    bVar59 = true;
  }
  else {
    bVar59 = false;
  }
  if (((uVar13 & 2) == 0) && ((uVar13 & 1) != 2)) {
    iVar39 = 0;
    if (bVar59) {
      iVar39 = *(int *)(PTR_DAT_4a042e08 + 8);
    }
    bVar59 = bVar59 && iVar39 != 0;
  }
  if (((*local_58 & 0x400000) != 0) && (!bVar59)) {
    FUN_4a032b24(uVar11,local_5c);
  }
  puVar30 = PTR_DAT_4a042dfc;
  uStack_bc = 0;
  iVar39 = *(int *)PTR_DAT_4a042dfc;
  if (*(int *)(iVar39 + 0x514) < 0) {
    if (*(short *)(iVar39 + 0x510) != 0) {
      iVar43 = *(int *)(iVar39 + 0x32c) * (int)*(short *)(iVar39 + 0x510) >> 0xc;
      uVar13 = iVar43 * 8;
      if (uVar13 == 0) {
        uVar13 = 0;
      }
      else {
        uVar14 = uVar13;
        if ((int)uVar13 < 0) {
          uVar14 = iVar43 * -8;
        }
        iVar43 = 0;
        if (uVar14 >> 0x10 == 0) {
          iVar43 = 0x10;
          uVar14 = uVar14 << 0x10;
        }
        if (uVar14 >> 0x18 == 0) {
          iVar43 = iVar43 + 8;
          uVar14 = uVar14 << 8;
        }
        if (uVar14 >> 0x1c == 0) {
          iVar43 = iVar43 + 4;
          uVar14 = uVar14 << 4;
        }
        if (uVar14 >> 0x1e == 0) {
          iVar43 = iVar43 + 2;
          uVar14 = uVar14 << 2;
        }
        if (-1 < (int)uVar14) {
          iVar43 = iVar43 + 1;
        }
        uVar14 = 0x1d - iVar43;
        if ((int)uVar14 < 0) {
          uVar14 = 0;
        }
        uVar13 = (uint)(char)((byte)uVar14 | (byte)(((int)uVar13 >> (uVar14 & 0xff)) << 4));
      }
      uStack_bc = (uVar13 & 0xff) << 9;
    }
  }
  else {
    iVar43 = *(int *)(iVar39 + 0x32c) * *(int *)(iVar39 + 0x514) >> 0xc;
    uVar13 = iVar43 * 8;
    if (uVar13 == 0) {
      uVar13 = 0;
    }
    else {
      uVar14 = uVar13;
      if ((int)uVar13 < 0) {
        uVar14 = iVar43 * -8;
      }
      iVar43 = 0;
      if (uVar14 >> 0x10 == 0) {
        iVar43 = 0x10;
        uVar14 = uVar14 << 0x10;
      }
      if (uVar14 >> 0x18 == 0) {
        iVar43 = iVar43 + 8;
        uVar14 = uVar14 << 8;
      }
      if (uVar14 >> 0x1c == 0) {
        iVar43 = iVar43 + 4;
        uVar14 = uVar14 << 4;
      }
      if (uVar14 >> 0x1e == 0) {
        iVar43 = iVar43 + 2;
        uVar14 = uVar14 << 2;
      }
      if (-1 < (int)uVar14) {
        iVar43 = iVar43 + 1;
      }
      uVar14 = 0x1d - iVar43;
      if ((int)uVar14 < 0) {
        uVar14 = 0;
      }
      uVar13 = (uint)(char)((byte)uVar14 | (byte)(((int)uVar13 >> (uVar14 & 0xff)) << 4));
    }
    uStack_bc = (uVar13 & 0xff) << 9 | 0x40000;
  }
  if (local_58[0x105] == 3) {
    uStack_bc = 0;
    local_78 = *(undefined **)(iVar39 + 0x338);
    if ((int)local_78 < 0) {
      local_78 = local_78 + local_58[0xee];
      FUN_4a00d744();
    }
    else {
      FUN_4a00d76c();
    }
    iVar43 = *(int *)puVar30;
    uVar13 = *(uint *)(iVar43 + 0x2f8);
    uVar14 = *(uint *)(iVar43 + 0x2fc);
    iVar39 = *(int *)(iVar43 + 0x3bc);
    if (*(int *)(iVar39 + (int)local_78 * 0x10) == -1) {
      *(uint *)(iVar39 + (int)local_78 * 0x10) = uVar13;
      iVar39 = iVar39 + (int)local_78 * 0x10;
      *(uint *)(iVar39 + 4) = uVar14;
      *(uint *)(iVar39 + 8) = uVar13;
      *(uint *)(iVar39 + 0xc) = uVar14;
    }
    else {
      iVar39 = iVar39 + (int)local_78 * 0x10;
      uVar15 = *(uint *)(iVar39 + 8);
      bVar60 = uVar15 == uVar13;
      uVar18 = uVar13;
      if (bVar60) {
        uVar15 = *(uint *)(iVar39 + 0xc);
        uVar18 = uVar14;
      }
      if (!bVar60 || uVar15 != uVar18) {
        puVar16 = *(undefined4 **)(iVar43 + 0x398);
        *(undefined4 **)(iVar43 + 0x398) = puVar16 + 3;
        puVar16[1] = uVar13 & 0xffff | (uVar13 >> 0x10) << 0xc | 0x60000000;
        puVar16[2] = uVar14;
        *puVar16 = *(undefined4 *)(*(int *)(iVar43 + 0x39c) + (int)local_78 * 4);
        *(undefined4 **)(*(int *)(*(int *)puVar30 + 0x39c) + (int)local_78 * 4) = puVar16;
        *(uint *)(iVar39 + 8) = uVar13;
        *(uint *)(iVar39 + 0xc) = uVar14;
      }
    }
  }
  puVar30 = PTR_DAT_4a04516c;
  uVar13 = local_58[0x11a];
  switch(local_30) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    uVar14 = 0;
    if (bVar58) {
      uVar14 = 2;
    }
    uVar18 = 0;
    if (uStack_a8 != 0) {
      uVar18 = 4;
    }
    piVar17 = (int *)(PTR_DAT_4a042e10 + (uVar18 | uStack_a4 | uVar14) * 0x24);
    bVar60 = false;
    if (local_30 == 0) {
      uStack_9c = (uint)((ulonglong)uStack_c4 * (ulonglong)DAT_4a042e14 >> 0x21);
    }
    else if (local_30 == 1) {
      uStack_9c = uStack_c4 - 2;
    }
    else if (local_30 == 2) {
      uStack_9c = uStack_c4 - 2;
      local_7c = (uint)*local_2c;
    }
    else if (local_30 == 3) {
      uStack_9c = uStack_c4 >> 2;
      bVar60 = true;
    }
    else {
      uStack_9c = uStack_c4 - 2 >> 1;
      bVar60 = true;
    }
    if (bVar60) {
      uVar14 = 0x200000;
    }
    else {
      uVar14 = 0x180000;
    }
    uVar14 = uVar14 | piVar17[2];
    if (bVar59) {
      uVar14 = uVar14 | 0x4000000;
    }
    local_70 = local_2c;
    local_74 = 0;
    if (uStack_9c != 0) {
      local_34 = uStack_bc | uVar14 | uVar10 << 5;
      do {
        uStack_9c = uStack_9c - 1;
        if (bVar60) {
          local_7c = (uint)*local_70;
          uStack_90 = (uint)local_70[1];
          if (local_30 == 3) {
            uVar9 = local_70[2];
            uVar45 = local_70[3];
          }
          else {
            uVar9 = local_70[3];
            uVar45 = local_70[2];
          }
          local_80 = (uint)uVar45;
          uStack_88 = (uint)uVar9;
          uVar10 = uStack_88;
          uVar14 = local_7c;
          if (local_7c != uStack_88) {
            uVar10 = local_80;
            uVar14 = uStack_90;
          }
          if (local_7c != uStack_88 && uVar14 != uVar10) {
            puVar38 = (uint *)(uVar33 + local_80 * 0x14);
LAB_4a042730:
            uVar14 = local_7c;
            uVar10 = uStack_88;
            puStack_94 = (ushort *)(uVar33 + local_7c * 0x14);
            puVar21 = (ushort *)(uVar33 + uStack_90 * 0x14);
            puStack_98 = (ushort *)(uVar33 + uStack_88 * 0x14);
            uVar45 = puStack_98[8] & puVar21[8] & puStack_94[8];
            if (puVar38 != (uint *)0x0) {
              uVar45 = uVar45 & (ushort)puVar38[4];
            }
            if ((uVar45 & 0x3f) == 0) {
              if (local_58[0x105] == 3) {
                if (puVar38 == (uint *)0x0) {
                  iVar43 = ((int)(short)*puVar21 - (int)(short)*puStack_94) *
                           ((int)(short)puStack_98[1] - (int)(short)puVar21[1]);
                  iVar20 = ((int)(short)puVar21[1] - (int)(short)puStack_94[1]) *
                           ((int)(short)*puStack_98 - (int)(short)*puVar21);
                  iVar39 = iVar43;
                  if (iVar20 <= iVar43) {
                    iVar39 = 0;
                  }
                  if (iVar43 < iVar20) {
                    iVar39 = 1;
                  }
                  if ((*(uint *)(local_5c + 0x10) & 8) == 0) {
                    if ((*(uint *)(local_5c + 0x10) & 0x10) == 0) {
                      if (iVar39 != 0) goto LAB_4a043d60;
                    }
                    else if (iVar39 == 0) goto LAB_4a043d50;
LAB_4a043d48:
                    iVar39 = 0;
                  }
                  else {
                    if (iVar39 != 0) goto LAB_4a043d60;
LAB_4a043d50:
                    iVar39 = 2;
                  }
                }
                else if ((*(uint *)(local_5c + 0x10) & 8) == 0) {
                  if ((*(uint *)(local_5c + 0x10) & 0x10) != 0) {
                    iVar20 = (int)(short)(ushort)*puVar38 - (int)(short)*puStack_94;
                    iVar37 = (int)(short)*(ushort *)((int)puVar38 + 2) - (int)(short)puStack_94[1];
                    iVar54 = (int)(short)puStack_98[1] - (int)(short)*(ushort *)((int)puVar38 + 2);
                    iVar48 = (int)(short)*puVar21 - (int)(short)*puStack_98;
                    iVar52 = (int)(short)*puStack_98 - (int)(short)(ushort)*puVar38;
                    iVar43 = (int)(short)puVar21[1] - (int)(short)puStack_98[1];
                    iVar39 = iVar48 * iVar37;
                    iVar37 = iVar20 * iVar54 - iVar37 * iVar52;
                    bVar59 = iVar37 < 0;
                    uVar18 = iVar52 * iVar43 - iVar48 * iVar54;
                    bVar63 = (int)uVar18 < 0;
                    iVar43 = iVar43 * iVar20 - iVar39;
                    if (!bVar59 && !bVar63) {
                      iVar39 = iVar37 + iVar43;
                    }
                    bVar61 = iVar39 < 0;
                    if ((!bVar59 && !bVar63) && !bVar61) {
                      uVar18 = uVar18 + iVar43;
                    }
                    bVar62 = -1 < (int)uVar18;
                    if (((!bVar59 && !bVar63) && !bVar61) && bVar62) {
                      uVar18 = 0;
                    }
                    if (((bVar59 || bVar63) || bVar61) || !bVar62) {
                      uVar18 = 1;
                    }
                    goto joined_r0x4a043c44;
                  }
                  iVar37 = (int)(short)*puVar21 - (int)(short)*puStack_94;
                  iVar48 = (int)(short)puVar21[1] - (int)(short)puStack_94[1];
                  iVar52 = (int)(short)*puStack_98 - (int)(short)*puVar21;
                  iVar43 = (int)(short)(ushort)*puVar38 - (int)(short)*puStack_98;
                  iVar54 = (int)(short)puStack_98[1] - (int)(short)puVar21[1];
                  iVar20 = (int)(short)*(ushort *)((int)puVar38 + 2) - (int)(short)puStack_98[1];
                  iVar39 = iVar48 * iVar43;
                  iVar48 = iVar37 * iVar54 - iVar48 * iVar52;
                  bVar59 = -1 < iVar48;
                  iVar43 = iVar52 * iVar20 - iVar43 * iVar54;
                  bVar63 = -1 < iVar43;
                  iVar20 = iVar37 * iVar20 - iVar39;
                  if (bVar59 && bVar63) {
                    iVar39 = iVar48 + iVar20;
                  }
                  if ((bVar59 && bVar63) && -1 < iVar39) {
                    iVar43 = iVar43 + iVar20;
                  }
                  if (((bVar59 && bVar63) && -1 < iVar39) && -1 < iVar43) goto LAB_4a043d48;
LAB_4a043d60:
                  iVar39 = 1;
                }
                else {
                  iVar52 = (int)(short)puStack_98[1] - (int)(short)puVar21[1];
                  iVar20 = (int)(short)*puVar21 - (int)(short)*puStack_94;
                  iVar37 = (int)(short)puVar21[1] - (int)(short)puStack_94[1];
                  iVar39 = (int)(short)*puStack_98 - (int)(short)*puVar21;
                  uVar15 = (int)(short)(ushort)*puVar38 - (int)(short)*puStack_98;
                  iVar48 = (int)(short)*(ushort *)((int)puVar38 + 2) - (int)(short)puStack_98[1];
                  iVar43 = iVar20 * iVar52 - iVar37 * iVar39;
                  bVar59 = iVar43 < 0;
                  iVar39 = iVar39 * iVar48 - uVar15 * iVar52;
                  bVar63 = iVar39 < 0;
                  iVar20 = iVar20 * iVar48 - uVar15 * iVar37;
                  if (!bVar59 && !bVar63) {
                    uVar15 = iVar43 + iVar20;
                  }
                  bVar61 = (int)uVar15 < 0;
                  if ((!bVar59 && !bVar63) && !bVar61) {
                    uVar15 = iVar39 + iVar20;
                  }
                  bVar62 = -1 < (int)uVar15;
                  if (((!bVar59 && !bVar63) && !bVar61) && bVar62) {
                    uVar15 = 0;
                  }
                  if (((bVar59 || bVar63) || bVar61) || !bVar62) {
                    uVar15 = 1;
                  }
                  iVar37 = iVar43;
                  if (iVar43 < 1) {
                    iVar37 = iVar39;
                  }
                  if (iVar37 < 1) {
                    iVar37 = iVar43 + iVar20;
                  }
                  if (iVar37 < 1) {
                    iVar37 = iVar39 + iVar20;
                  }
                  uVar18 = (uint)(0 < iVar37);
                  if ((uVar15 & uVar18) == 0) {
                    if (uVar15 != 0) goto LAB_4a043d60;
joined_r0x4a043c44:
                    if (uVar18 != 0) goto LAB_4a043d50;
                    goto LAB_4a043d48;
                  }
                  iVar39 = 3;
                }
                if (iVar39 == 0) goto LAB_4a04414c;
              }
              else {
                if (puVar38 == (uint *)0x0) {
                  iVar20 = *(int *)(puStack_94 + 2) - *(int *)(puVar21 + 2);
                  iVar37 = *(int *)(puStack_94 + 4) - *(int *)(puVar21 + 4);
                  iVar48 = *(int *)(puStack_94 + 6) - *(int *)(puVar21 + 6);
                  iVar52 = *(int *)(puStack_98 + 2) - *(int *)(puVar21 + 2);
                  iVar43 = *(int *)(puStack_98 + 4) - *(int *)(puVar21 + 4);
                  iVar39 = *(int *)(puStack_98 + 6) - *(int *)(puVar21 + 6);
                  if ((**(uint **)PTR_DAT_4a042dfc & 0x80000000) == 0) {
                    psStack_dc = *(short **)(puVar21 + 2);
                    uStack_d8 = *(uint *)(puVar21 + 4);
                    uStack_d4 = *(uint *)(puVar21 + 6);
                  }
                  else {
                    psStack_dc = *(short **)PTR_DAT_4a042e0c;
                    uStack_d8 = *(uint *)(PTR_DAT_4a042e0c + 4);
                    uStack_d4 = *(uint *)(PTR_DAT_4a042e0c + 8);
                  }
                  lVar4 = (longlong)iVar37 * (longlong)iVar52;
                  uVar15 = (uint)lVar4;
                  lVar5 = (longlong)iVar20 * (longlong)iVar43;
                  uVar18 = (uint)lVar5;
                  iVar54 = (int)((ulonglong)lVar5 >> 0x20) -
                           ((int)((ulonglong)lVar4 >> 0x20) + (uint)(uVar18 < uVar15));
                  uVar18 = uVar18 - uVar15 >> 8 | iVar54 * 0x1000000;
                  lVar6 = (ulonglong)uVar18 * (ulonglong)uStack_d4;
                  uVar35 = (uint)lVar6;
                  lVar4 = (longlong)iVar20 * (longlong)iVar39;
                  uVar31 = (uint)lVar4;
                  lVar5 = (longlong)iVar48 * (longlong)iVar52;
                  uVar15 = (uint)lVar5;
                  iVar20 = (int)((ulonglong)lVar5 >> 0x20) -
                           ((int)((ulonglong)lVar4 >> 0x20) + (uint)(uVar15 < uVar31));
                  uVar15 = uVar15 - uVar31 >> 8 | iVar20 * 0x1000000;
                  lVar7 = (ulonglong)uVar15 * (ulonglong)uStack_d8;
                  uVar34 = (uint)lVar7;
                  lVar4 = (longlong)iVar48 * (longlong)iVar43;
                  uVar32 = (uint)lVar4;
                  lVar5 = (longlong)iVar37 * (longlong)iVar39;
                  uVar31 = (uint)lVar5;
                  iVar43 = (int)((ulonglong)lVar5 >> 0x20) -
                           ((int)((ulonglong)lVar4 >> 0x20) + (uint)(uVar31 < uVar32));
                  uVar51 = uVar31 - uVar32 >> 8 | iVar43 * 0x1000000;
                  lVar4 = (ulonglong)uVar51 * ZEXT48(psStack_dc);
                  uVar31 = (uint)lVar4;
                  uVar32 = uVar31 + uVar34;
                  iVar39 = uVar32 + uVar35;
                  bVar59 = (int)((int)psStack_dc * (iVar43 >> 8) +
                                 ((int)psStack_dc >> 0x1f) * uVar51 +
                                 (int)((ulonglong)lVar4 >> 0x20) +
                                 uStack_d8 * (iVar20 >> 8) +
                                 ((int)uStack_d8 >> 0x1f) * uVar15 + (int)((ulonglong)lVar7 >> 0x20)
                                 + (uint)CARRY4(uVar31,uVar34) +
                                 uStack_d4 * (iVar54 >> 8) +
                                 ((int)uStack_d4 >> 0x1f) * uVar18 + (int)((ulonglong)lVar6 >> 0x20)
                                + (uint)CARRY4(uVar32,uVar35)) < 0;
                  if (bVar59) {
                    iVar39 = 0;
                  }
                  if (!bVar59) {
                    iVar39 = 1;
                  }
                  if ((*(uint *)(local_5c + 0x10) & 8) != 0) {
                    if (iVar39 != 0) goto LAB_4a043508;
                    goto LAB_4a0434f8;
                  }
                  if ((*(uint *)(local_5c + 0x10) & 0x10) == 0) {
                    if (iVar39 != 0) goto LAB_4a043508;
                  }
                  else if (iVar39 == 0) goto LAB_4a0434f8;
LAB_4a0434f0:
                  iVar39 = 0;
                }
                else if ((*(uint *)(local_5c + 0x10) & 8) == 0) {
                  if ((*(uint *)(local_5c + 0x10) & 0x10) == 0) {
                    iVar37 = *(int *)(puStack_94 + 2) - *(int *)(puVar21 + 2);
                    iVar48 = *(int *)(puStack_94 + 4) - *(int *)(puVar21 + 4);
                    iVar52 = *(int *)(puStack_94 + 6) - *(int *)(puVar21 + 6);
                    iVar43 = puVar38[1] - *(int *)(puStack_94 + 2);
                    iVar39 = puVar38[2] - *(int *)(puStack_94 + 4);
                    iVar20 = puVar38[3] - *(int *)(puStack_94 + 6);
                    if ((**(uint **)PTR_DAT_4a042dfc & 0x80000000) == 0) {
                      uStack_ec = *(uint *)(puVar21 + 2);
                      uStack_e8 = *(uint *)(puVar21 + 4);
                      uStack_e4 = *(uint *)(puVar21 + 6);
                    }
                    else {
                      uStack_ec = *(uint *)PTR_DAT_4a042e0c;
                      uStack_e8 = *(uint *)(PTR_DAT_4a042e0c + 4);
                      uStack_e4 = *(uint *)(PTR_DAT_4a042e0c + 8);
                    }
                    uVar15 = (uint)((longlong)iVar48 * (longlong)iVar43);
                    uVar18 = (uint)((longlong)iVar37 * (longlong)iVar39);
                    iVar25 = (int)((ulonglong)((longlong)iVar37 * (longlong)iVar39) >> 0x20) -
                             ((int)((ulonglong)((longlong)iVar48 * (longlong)iVar43) >> 0x20) +
                             (uint)(uVar18 < uVar15));
                    uVar18 = uVar18 - uVar15 >> 8 | iVar25 * 0x1000000;
                    lVar4 = (ulonglong)uVar18 * (ulonglong)uStack_e4;
                    uVar34 = (uint)lVar4;
                    iVar54 = (int)uStack_e4 >> 0x1f;
                    uVar31 = (uint)((longlong)iVar37 * (longlong)iVar20);
                    uVar15 = (uint)((longlong)iVar52 * (longlong)iVar43);
                    iVar26 = (int)((ulonglong)((longlong)iVar52 * (longlong)iVar43) >> 0x20) -
                             ((int)((ulonglong)((longlong)iVar37 * (longlong)iVar20) >> 0x20) +
                             (uint)(uVar15 < uVar31));
                    uVar15 = uVar15 - uVar31 >> 8 | iVar26 * 0x1000000;
                    lVar5 = (ulonglong)uVar15 * (ulonglong)uStack_e8;
                    uVar49 = (uint)lVar5;
                    iVar56 = (int)uStack_e8 >> 0x1f;
                    uVar32 = (uint)((longlong)iVar52 * (longlong)iVar39);
                    uVar31 = (uint)((longlong)iVar48 * (longlong)iVar20);
                    iVar27 = (int)((ulonglong)((longlong)iVar48 * (longlong)iVar20) >> 0x20) -
                             ((int)((ulonglong)((longlong)iVar52 * (longlong)iVar39) >> 0x20) +
                             (uint)(uVar31 < uVar32));
                    uVar51 = uVar31 - uVar32 >> 8 | iVar27 * 0x1000000;
                    lVar6 = (ulonglong)uVar51 * (ulonglong)uStack_ec;
                    uVar31 = (uint)lVar6;
                    iVar57 = (int)uStack_ec >> 0x1f;
                    uVar32 = uVar31 + uVar49;
                    uVar35 = uVar32 + uVar34;
                    iVar25 = uStack_ec * (iVar27 >> 8) +
                             iVar57 * uVar51 + (int)((ulonglong)lVar6 >> 0x20) +
                             uStack_e8 * (iVar26 >> 8) +
                             iVar56 * uVar15 + (int)((ulonglong)lVar5 >> 0x20) +
                             (uint)CARRY4(uVar31,uVar49) +
                             uStack_e4 * (iVar25 >> 8) +
                             iVar54 * uVar18 + (int)((ulonglong)lVar4 >> 0x20) +
                             (uint)CARRY4(uVar32,uVar34);
                    if ((int)-(iVar25 + (uint)(uVar35 != 0)) < 0 ==
                        (SBORROW4(0,iVar25) != SBORROW4(-iVar25,(uint)(uVar35 != 0)))) {
                      iVar23 = *(int *)(puStack_98 + 2) - puVar38[1];
                      iVar26 = *(int *)(puStack_98 + 4) - puVar38[2];
                      iVar27 = *(int *)(puStack_98 + 6) - puVar38[3];
                      uVar15 = (uint)((longlong)iVar39 * (longlong)iVar23);
                      uVar18 = (uint)((longlong)iVar43 * (longlong)iVar26);
                      iVar22 = (int)((ulonglong)((longlong)iVar43 * (longlong)iVar26) >> 0x20) -
                               ((int)((ulonglong)((longlong)iVar39 * (longlong)iVar23) >> 0x20) +
                               (uint)(uVar18 < uVar15));
                      uVar18 = uVar18 - uVar15 >> 8 | iVar22 * 0x1000000;
                      lVar4 = (ulonglong)uVar18 * (ulonglong)uStack_e4;
                      uVar34 = (uint)lVar4;
                      uVar31 = (uint)((longlong)iVar43 * (longlong)iVar27);
                      uVar15 = (uint)((longlong)iVar20 * (longlong)iVar23);
                      iVar43 = (int)((ulonglong)((longlong)iVar20 * (longlong)iVar23) >> 0x20) -
                               ((int)((ulonglong)((longlong)iVar43 * (longlong)iVar27) >> 0x20) +
                               (uint)(uVar15 < uVar31));
                      uVar15 = uVar15 - uVar31 >> 8 | iVar43 * 0x1000000;
                      lVar5 = (ulonglong)uVar15 * (ulonglong)uStack_e8;
                      uVar46 = (uint)lVar5;
                      uVar32 = (uint)((longlong)iVar20 * (longlong)iVar26);
                      uVar31 = (uint)((longlong)iVar39 * (longlong)iVar27);
                      iVar39 = (int)((ulonglong)((longlong)iVar39 * (longlong)iVar27) >> 0x20) -
                               ((int)((ulonglong)((longlong)iVar20 * (longlong)iVar26) >> 0x20) +
                               (uint)(uVar31 < uVar32));
                      uVar49 = uVar31 - uVar32 >> 8 | iVar39 * 0x1000000;
                      lVar6 = (ulonglong)uVar49 * (ulonglong)uStack_ec;
                      uVar31 = (uint)lVar6;
                      uVar32 = uVar31 + uVar46;
                      uVar51 = uVar32 + uVar34;
                      iVar39 = uStack_ec * (iVar39 >> 8) +
                               iVar57 * uVar49 + (int)((ulonglong)lVar6 >> 0x20) +
                               uStack_e8 * (iVar43 >> 8) +
                               iVar56 * uVar15 + (int)((ulonglong)lVar5 >> 0x20) +
                               (uint)CARRY4(uVar31,uVar46) +
                               uStack_e4 * (iVar22 >> 8) +
                               iVar54 * uVar18 + (int)((ulonglong)lVar4 >> 0x20) +
                               (uint)CARRY4(uVar32,uVar34);
                      if ((int)-(iVar39 + (uint)(uVar51 != 0)) < 0 ==
                          (SBORROW4(0,iVar39) != SBORROW4(-iVar39,(uint)(uVar51 != 0)))) {
                        uVar15 = (uint)((longlong)iVar48 * (longlong)iVar23);
                        uVar18 = (uint)((longlong)iVar37 * (longlong)iVar26);
                        iVar43 = (int)((ulonglong)((longlong)iVar37 * (longlong)iVar26) >> 0x20) -
                                 ((int)((ulonglong)((longlong)iVar48 * (longlong)iVar23) >> 0x20) +
                                 (uint)(uVar18 < uVar15));
                        uVar18 = uVar18 - uVar15 >> 8 | iVar43 * 0x1000000;
                        lVar4 = (ulonglong)uVar18 * (ulonglong)uStack_e4;
                        uVar46 = (uint)lVar4;
                        uVar31 = (uint)((longlong)iVar37 * (longlong)iVar27);
                        uVar15 = (uint)((longlong)iVar52 * (longlong)iVar23);
                        iVar20 = (int)((ulonglong)((longlong)iVar52 * (longlong)iVar23) >> 0x20) -
                                 ((int)((ulonglong)((longlong)iVar37 * (longlong)iVar27) >> 0x20) +
                                 (uint)(uVar15 < uVar31));
                        uVar15 = uVar15 - uVar31 >> 8 | iVar20 * 0x1000000;
                        lVar5 = (ulonglong)uVar15 * (ulonglong)uStack_e8;
                        uVar50 = (uint)lVar5;
                        uVar32 = (uint)((longlong)iVar52 * (longlong)iVar26);
                        uVar31 = (uint)((longlong)iVar48 * (longlong)iVar27);
                        iVar37 = (int)((ulonglong)((longlong)iVar48 * (longlong)iVar27) >> 0x20) -
                                 ((int)((ulonglong)((longlong)iVar52 * (longlong)iVar26) >> 0x20) +
                                 (uint)(uVar31 < uVar32));
                        uVar34 = uVar31 - uVar32 >> 8 | iVar37 * 0x1000000;
                        lVar6 = (ulonglong)uVar34 * (ulonglong)uStack_ec;
                        uVar31 = (uint)lVar6;
                        uVar32 = uVar31 + uVar50;
                        uVar49 = uVar32 + uVar46;
                        iVar20 = uStack_ec * (iVar37 >> 8) +
                                 iVar57 * uVar34 + (int)((ulonglong)lVar6 >> 0x20) +
                                 uStack_e8 * (iVar20 >> 8) +
                                 iVar56 * uVar15 + (int)((ulonglong)lVar5 >> 0x20) +
                                 (uint)CARRY4(uVar31,uVar50) +
                                 uStack_e4 * (iVar43 >> 8) +
                                 iVar54 * uVar18 + (int)((ulonglong)lVar4 >> 0x20) +
                                 (uint)CARRY4(uVar32,uVar46);
                        iVar43 = iVar25 + iVar20 + (uint)CARRY4(uVar35,uVar49);
                        bVar59 = uVar35 + uVar49 != 0;
                        if (((int)-(iVar43 + (uint)bVar59) < 0 ==
                             (SBORROW4(0,iVar43) != SBORROW4(-iVar43,(uint)bVar59))) &&
                           (iVar39 = iVar39 + iVar20 + (uint)CARRY4(uVar51,uVar49),
                           bVar59 = uVar51 + uVar49 != 0,
                           (int)-(iVar39 + (uint)bVar59) < 0 ==
                           (SBORROW4(0,iVar39) != SBORROW4(-iVar39,(uint)bVar59))))
                        goto LAB_4a0434f0;
                      }
                    }
                    goto LAB_4a043508;
                  }
                  iVar20 = *(int *)(puStack_98 + 2) - *(int *)(puVar21 + 2);
                  iVar48 = *(int *)(puStack_98 + 4) - *(int *)(puVar21 + 4);
                  iVar52 = *(int *)(puStack_98 + 6) - *(int *)(puVar21 + 6);
                  iVar43 = puVar38[1] - *(int *)(puStack_98 + 2);
                  iVar37 = puVar38[2] - *(int *)(puStack_98 + 4);
                  iVar39 = puVar38[3] - *(int *)(puStack_98 + 6);
                  if ((**(uint **)PTR_DAT_4a042dfc & 0x80000000) == 0) {
                    uStack_ec = *(uint *)(puVar21 + 2);
                    uStack_e8 = *(uint *)(puVar21 + 4);
                    uStack_e4 = *(uint *)(puVar21 + 6);
                  }
                  else {
                    uStack_ec = *(uint *)PTR_DAT_4a042e0c;
                    uStack_e8 = *(uint *)(PTR_DAT_4a042e0c + 4);
                    uStack_e4 = *(uint *)(PTR_DAT_4a042e0c + 8);
                  }
                  uVar15 = (uint)((longlong)iVar48 * (longlong)iVar43);
                  uVar18 = (uint)((longlong)iVar20 * (longlong)iVar37);
                  iVar25 = (int)((ulonglong)((longlong)iVar20 * (longlong)iVar37) >> 0x20) -
                           ((int)((ulonglong)((longlong)iVar48 * (longlong)iVar43) >> 0x20) +
                           (uint)(uVar18 < uVar15));
                  uVar18 = uVar18 - uVar15 >> 8 | iVar25 * 0x1000000;
                  lVar4 = (ulonglong)uVar18 * (ulonglong)uStack_e4;
                  uVar49 = (uint)lVar4;
                  iVar54 = (int)uStack_e4 >> 0x1f;
                  uVar31 = (uint)((longlong)iVar20 * (longlong)iVar39);
                  uVar15 = (uint)((longlong)iVar52 * (longlong)iVar43);
                  iVar26 = (int)((ulonglong)((longlong)iVar52 * (longlong)iVar43) >> 0x20) -
                           ((int)((ulonglong)((longlong)iVar20 * (longlong)iVar39) >> 0x20) +
                           (uint)(uVar15 < uVar31));
                  uVar15 = uVar15 - uVar31 >> 8 | iVar26 * 0x1000000;
                  lVar5 = (ulonglong)uVar15 * (ulonglong)uStack_e8;
                  uVar34 = (uint)lVar5;
                  iVar56 = (int)uStack_e8 >> 0x1f;
                  uVar32 = (uint)((longlong)iVar52 * (longlong)iVar37);
                  uVar31 = (uint)((longlong)iVar48 * (longlong)iVar39);
                  iVar27 = (int)((ulonglong)((longlong)iVar48 * (longlong)iVar39) >> 0x20) -
                           ((int)((ulonglong)((longlong)iVar52 * (longlong)iVar37) >> 0x20) +
                           (uint)(uVar31 < uVar32));
                  uVar51 = uVar31 - uVar32 >> 8 | iVar27 * 0x1000000;
                  lVar6 = (ulonglong)uVar51 * (ulonglong)uStack_ec;
                  uVar31 = (uint)lVar6;
                  iVar57 = (int)uStack_ec >> 0x1f;
                  uVar32 = uVar31 + uVar34;
                  uVar35 = uVar32 + uVar49;
                  iVar25 = uStack_ec * (iVar27 >> 8) +
                           iVar57 * uVar51 + (int)((ulonglong)lVar6 >> 0x20) +
                           uStack_e8 * (iVar26 >> 8) +
                           iVar56 * uVar15 + (int)((ulonglong)lVar5 >> 0x20) +
                           (uint)CARRY4(uVar31,uVar34) +
                           uStack_e4 * (iVar25 >> 8) +
                           iVar54 * uVar18 + (int)((ulonglong)lVar4 >> 0x20) +
                           (uint)CARRY4(uVar32,uVar49);
                  if ((int)-(iVar25 + (uint)(uVar35 != 0)) < 0 ==
                      (SBORROW4(0,iVar25) != SBORROW4(-iVar25,(uint)(uVar35 != 0)))) {
                    iVar23 = *(int *)(puStack_94 + 2) - puVar38[1];
                    iVar26 = *(int *)(puStack_94 + 4) - puVar38[2];
                    iVar27 = *(int *)(puStack_94 + 6) - puVar38[3];
                    uVar15 = (uint)((longlong)iVar37 * (longlong)iVar23);
                    uVar18 = (uint)((longlong)iVar43 * (longlong)iVar26);
                    iVar22 = (int)((ulonglong)((longlong)iVar43 * (longlong)iVar26) >> 0x20) -
                             ((int)((ulonglong)((longlong)iVar37 * (longlong)iVar23) >> 0x20) +
                             (uint)(uVar18 < uVar15));
                    uVar18 = uVar18 - uVar15 >> 8 | iVar22 * 0x1000000;
                    lVar4 = (ulonglong)uVar18 * (ulonglong)uStack_e4;
                    uVar34 = (uint)lVar4;
                    uVar31 = (uint)((longlong)iVar43 * (longlong)iVar27);
                    uVar15 = (uint)((longlong)iVar39 * (longlong)iVar23);
                    iVar43 = (int)((ulonglong)((longlong)iVar39 * (longlong)iVar23) >> 0x20) -
                             ((int)((ulonglong)((longlong)iVar43 * (longlong)iVar27) >> 0x20) +
                             (uint)(uVar15 < uVar31));
                    uVar15 = uVar15 - uVar31 >> 8 | iVar43 * 0x1000000;
                    lVar5 = (ulonglong)uVar15 * (ulonglong)uStack_e8;
                    uVar46 = (uint)lVar5;
                    uVar32 = (uint)((longlong)iVar39 * (longlong)iVar26);
                    uVar31 = (uint)((longlong)iVar37 * (longlong)iVar27);
                    iVar39 = (int)((ulonglong)((longlong)iVar37 * (longlong)iVar27) >> 0x20) -
                             ((int)((ulonglong)((longlong)iVar39 * (longlong)iVar26) >> 0x20) +
                             (uint)(uVar31 < uVar32));
                    uVar49 = uVar31 - uVar32 >> 8 | iVar39 * 0x1000000;
                    lVar6 = (ulonglong)uVar49 * (ulonglong)uStack_ec;
                    uVar31 = (uint)lVar6;
                    uVar32 = uVar31 + uVar46;
                    uVar51 = uVar32 + uVar34;
                    iVar39 = uStack_ec * (iVar39 >> 8) +
                             iVar57 * uVar49 + (int)((ulonglong)lVar6 >> 0x20) +
                             uStack_e8 * (iVar43 >> 8) +
                             iVar56 * uVar15 + (int)((ulonglong)lVar5 >> 0x20) +
                             (uint)CARRY4(uVar31,uVar46) +
                             uStack_e4 * (iVar22 >> 8) +
                             iVar54 * uVar18 + (int)((ulonglong)lVar4 >> 0x20) +
                             (uint)CARRY4(uVar32,uVar34);
                    if ((int)-(iVar39 + (uint)(uVar51 != 0)) < 0 !=
                        (SBORROW4(0,iVar39) != SBORROW4(-iVar39,(uint)(uVar51 != 0))))
                    goto LAB_4a042fc0;
                    uVar15 = (uint)((longlong)iVar48 * (longlong)iVar23);
                    uVar18 = (uint)((longlong)iVar20 * (longlong)iVar26);
                    iVar43 = (int)((ulonglong)((longlong)iVar20 * (longlong)iVar26) >> 0x20) -
                             ((int)((ulonglong)((longlong)iVar48 * (longlong)iVar23) >> 0x20) +
                             (uint)(uVar18 < uVar15));
                    uVar18 = uVar18 - uVar15 >> 8 | iVar43 * 0x1000000;
                    lVar4 = (ulonglong)uVar18 * (ulonglong)uStack_e4;
                    uVar46 = (uint)lVar4;
                    uVar31 = (uint)((longlong)iVar20 * (longlong)iVar27);
                    uVar15 = (uint)((longlong)iVar52 * (longlong)iVar23);
                    iVar20 = (int)((ulonglong)((longlong)iVar52 * (longlong)iVar23) >> 0x20) -
                             ((int)((ulonglong)((longlong)iVar20 * (longlong)iVar27) >> 0x20) +
                             (uint)(uVar15 < uVar31));
                    uVar15 = uVar15 - uVar31 >> 8 | iVar20 * 0x1000000;
                    lVar5 = (ulonglong)uVar15 * (ulonglong)uStack_e8;
                    uVar50 = (uint)lVar5;
                    uVar32 = (uint)((longlong)iVar52 * (longlong)iVar26);
                    uVar31 = (uint)((longlong)iVar48 * (longlong)iVar27);
                    iVar37 = (int)((ulonglong)((longlong)iVar48 * (longlong)iVar27) >> 0x20) -
                             ((int)((ulonglong)((longlong)iVar52 * (longlong)iVar26) >> 0x20) +
                             (uint)(uVar31 < uVar32));
                    uVar34 = uVar31 - uVar32 >> 8 | iVar37 * 0x1000000;
                    lVar6 = (ulonglong)uVar34 * (ulonglong)uStack_ec;
                    uVar31 = (uint)lVar6;
                    uVar32 = uVar31 + uVar50;
                    uVar49 = uVar32 + uVar46;
                    iVar20 = uStack_ec * (iVar37 >> 8) +
                             iVar57 * uVar34 + (int)((ulonglong)lVar6 >> 0x20) +
                             uStack_e8 * (iVar20 >> 8) +
                             iVar56 * uVar15 + (int)((ulonglong)lVar5 >> 0x20) +
                             (uint)CARRY4(uVar31,uVar50) +
                             uStack_e4 * (iVar43 >> 8) +
                             iVar54 * uVar18 + (int)((ulonglong)lVar4 >> 0x20) +
                             (uint)CARRY4(uVar32,uVar46);
                    iVar43 = iVar25 + iVar20 + (uint)CARRY4(uVar35,uVar49);
                    bVar59 = uVar35 + uVar49 != 0;
                    if (((int)-(iVar43 + (uint)bVar59) < 0 !=
                         (SBORROW4(0,iVar43) != SBORROW4(-iVar43,(uint)bVar59))) ||
                       (iVar39 = iVar39 + iVar20 + (uint)CARRY4(uVar51,uVar49),
                       bVar59 = uVar51 + uVar49 != 0,
                       (int)-(iVar39 + (uint)bVar59) < 0 !=
                       (SBORROW4(0,iVar39) != SBORROW4(-iVar39,(uint)bVar59)))) goto LAB_4a042fc0;
                    bVar59 = false;
                  }
                  else {
LAB_4a042fc0:
                    bVar59 = true;
                  }
                  if (!bVar59) goto LAB_4a0434f0;
LAB_4a0434f8:
                  iVar39 = 2;
                }
                else {
                  iVar56 = *(int *)(puStack_94 + 2) - *(int *)(puVar21 + 2);
                  iVar39 = *(int *)(puStack_94 + 4) - *(int *)(puVar21 + 4);
                  iVar52 = *(int *)(puStack_94 + 6) - *(int *)(puVar21 + 6);
                  iVar57 = puVar38[1] - *(int *)(puStack_94 + 2);
                  iVar54 = puVar38[2] - *(int *)(puStack_94 + 4);
                  iVar20 = puVar38[3] - *(int *)(puStack_94 + 6);
                  iVar37 = *(int *)(puStack_98 + 2) - puVar38[1];
                  iVar43 = *(int *)(puStack_98 + 4) - puVar38[2];
                  iVar48 = *(int *)(puStack_98 + 6) - puVar38[3];
                  if ((**(uint **)PTR_DAT_4a042dfc & 0x80000000) == 0) {
                    uStack_100 = *(uint *)(puVar21 + 2);
                    uStack_fc = *(uint *)(puVar21 + 4);
                    uStack_f8 = *(uint *)(puVar21 + 6);
                  }
                  else {
                    uStack_100 = *(uint *)PTR_DAT_4a042e0c;
                    uStack_fc = *(uint *)(PTR_DAT_4a042e0c + 4);
                    uStack_f8 = *(uint *)(PTR_DAT_4a042e0c + 8);
                  }
                  uVar15 = (uint)((longlong)iVar39 * (longlong)iVar57);
                  uVar18 = (uint)((longlong)iVar56 * (longlong)iVar54);
                  iVar22 = (int)((ulonglong)((longlong)iVar56 * (longlong)iVar54) >> 0x20) -
                           ((int)((ulonglong)((longlong)iVar39 * (longlong)iVar57) >> 0x20) +
                           (uint)(uVar18 < uVar15));
                  uVar18 = uVar18 - uVar15 >> 8 | iVar22 * 0x1000000;
                  lVar4 = (ulonglong)uVar18 * (ulonglong)uStack_f8;
                  uVar34 = (uint)lVar4;
                  iVar25 = (int)uStack_f8 >> 0x1f;
                  uVar31 = (uint)((longlong)iVar56 * (longlong)iVar20);
                  uVar15 = (uint)((longlong)iVar52 * (longlong)iVar57);
                  iVar23 = (int)((ulonglong)((longlong)iVar52 * (longlong)iVar57) >> 0x20) -
                           ((int)((ulonglong)((longlong)iVar56 * (longlong)iVar20) >> 0x20) +
                           (uint)(uVar15 < uVar31));
                  uVar15 = uVar15 - uVar31 >> 8 | iVar23 * 0x1000000;
                  lVar5 = (ulonglong)uVar15 * (ulonglong)uStack_fc;
                  uVar49 = (uint)lVar5;
                  iVar26 = (int)uStack_fc >> 0x1f;
                  uVar32 = (uint)((longlong)iVar52 * (longlong)iVar54);
                  uVar31 = (uint)((longlong)iVar39 * (longlong)iVar20);
                  iVar24 = (int)((ulonglong)((longlong)iVar39 * (longlong)iVar20) >> 0x20) -
                           ((int)((ulonglong)((longlong)iVar52 * (longlong)iVar54) >> 0x20) +
                           (uint)(uVar31 < uVar32));
                  uVar51 = uVar31 - uVar32 >> 8 | iVar24 * 0x1000000;
                  lVar6 = (ulonglong)uVar51 * (ulonglong)uStack_100;
                  uVar31 = (uint)lVar6;
                  iVar27 = (int)uStack_100 >> 0x1f;
                  uVar32 = uVar31 + uVar49;
                  uVar35 = uVar32 + uVar34;
                  iVar22 = uStack_100 * (iVar24 >> 8) +
                           iVar27 * uVar51 + (int)((ulonglong)lVar6 >> 0x20) +
                           uStack_fc * (iVar23 >> 8) +
                           iVar26 * uVar15 + (int)((ulonglong)lVar5 >> 0x20) +
                           (uint)CARRY4(uVar31,uVar49) +
                           uStack_f8 * (iVar22 >> 8) +
                           iVar25 * uVar18 + (int)((ulonglong)lVar4 >> 0x20) +
                           (uint)CARRY4(uVar32,uVar34);
                  uVar15 = (uint)((longlong)iVar54 * (longlong)iVar37);
                  uVar18 = (uint)((longlong)iVar57 * (longlong)iVar43);
                  iVar23 = (int)((ulonglong)((longlong)iVar57 * (longlong)iVar43) >> 0x20) -
                           ((int)((ulonglong)((longlong)iVar54 * (longlong)iVar37) >> 0x20) +
                           (uint)(uVar18 < uVar15));
                  uVar18 = uVar18 - uVar15 >> 8 | iVar23 * 0x1000000;
                  lVar4 = (ulonglong)uVar18 * (ulonglong)uStack_f8;
                  uVar49 = (uint)lVar4;
                  uVar31 = (uint)((longlong)iVar57 * (longlong)iVar48);
                  uVar15 = (uint)((longlong)iVar20 * (longlong)iVar37);
                  iVar57 = (int)((ulonglong)((longlong)iVar20 * (longlong)iVar37) >> 0x20) -
                           ((int)((ulonglong)((longlong)iVar57 * (longlong)iVar48) >> 0x20) +
                           (uint)(uVar15 < uVar31));
                  uVar15 = uVar15 - uVar31 >> 8 | iVar57 * 0x1000000;
                  lVar5 = (ulonglong)uVar15 * (ulonglong)uStack_fc;
                  uVar46 = (uint)lVar5;
                  uVar32 = (uint)((longlong)iVar20 * (longlong)iVar43);
                  uVar31 = (uint)((longlong)iVar54 * (longlong)iVar48);
                  iVar20 = (int)((ulonglong)((longlong)iVar54 * (longlong)iVar48) >> 0x20) -
                           ((int)((ulonglong)((longlong)iVar20 * (longlong)iVar43) >> 0x20) +
                           (uint)(uVar31 < uVar32));
                  uVar34 = uVar31 - uVar32 >> 8 | iVar20 * 0x1000000;
                  lVar6 = (ulonglong)uVar34 * (ulonglong)uStack_100;
                  uVar31 = (uint)lVar6;
                  uVar32 = uVar31 + uVar46;
                  uVar51 = uVar32 + uVar49;
                  iVar20 = uStack_100 * (iVar20 >> 8) +
                           iVar27 * uVar34 + (int)((ulonglong)lVar6 >> 0x20) +
                           uStack_fc * (iVar57 >> 8) +
                           iVar26 * uVar15 + (int)((ulonglong)lVar5 >> 0x20) +
                           (uint)CARRY4(uVar31,uVar46) +
                           uStack_f8 * (iVar23 >> 8) +
                           iVar25 * uVar18 + (int)((ulonglong)lVar4 >> 0x20) +
                           (uint)CARRY4(uVar32,uVar49);
                  uVar15 = (uint)((longlong)iVar39 * (longlong)iVar37);
                  uVar18 = (uint)((longlong)iVar56 * (longlong)iVar43);
                  iVar54 = (int)((ulonglong)((longlong)iVar56 * (longlong)iVar43) >> 0x20) -
                           ((int)((ulonglong)((longlong)iVar39 * (longlong)iVar37) >> 0x20) +
                           (uint)(uVar18 < uVar15));
                  uVar18 = uVar18 - uVar15 >> 8 | iVar54 * 0x1000000;
                  lVar4 = (ulonglong)uVar18 * (ulonglong)uStack_f8;
                  uVar50 = (uint)lVar4;
                  uVar31 = (uint)((longlong)iVar56 * (longlong)iVar48);
                  uVar15 = (uint)((longlong)iVar52 * (longlong)iVar37);
                  iVar37 = (int)((ulonglong)((longlong)iVar52 * (longlong)iVar37) >> 0x20) -
                           ((int)((ulonglong)((longlong)iVar56 * (longlong)iVar48) >> 0x20) +
                           (uint)(uVar15 < uVar31));
                  uVar15 = uVar15 - uVar31 >> 8 | iVar37 * 0x1000000;
                  lVar5 = (ulonglong)uVar15 * (ulonglong)uStack_fc;
                  uVar46 = (uint)lVar5;
                  uVar32 = (uint)((longlong)iVar52 * (longlong)iVar43);
                  uVar31 = (uint)((longlong)iVar39 * (longlong)iVar48);
                  iVar39 = (int)((ulonglong)((longlong)iVar39 * (longlong)iVar48) >> 0x20) -
                           ((int)((ulonglong)((longlong)iVar52 * (longlong)iVar43) >> 0x20) +
                           (uint)(uVar31 < uVar32));
                  uVar34 = uVar31 - uVar32 >> 8 | iVar39 * 0x1000000;
                  lVar6 = (ulonglong)uVar34 * (ulonglong)uStack_100;
                  uVar31 = (uint)lVar6;
                  uVar32 = uVar31 + uVar46;
                  uVar49 = uVar32 + uVar50;
                  iVar43 = uStack_100 * (iVar39 >> 8) +
                           iVar27 * uVar34 + (int)((ulonglong)lVar6 >> 0x20) +
                           (iVar37 >> 8) * uStack_fc +
                           iVar26 * uVar15 + (int)((ulonglong)lVar5 >> 0x20) +
                           (uint)CARRY4(uVar31,uVar46) +
                           uStack_f8 * (iVar54 >> 8) +
                           iVar25 * uVar18 + (int)((ulonglong)lVar4 >> 0x20) +
                           (uint)CARRY4(uVar32,uVar50);
                  bVar59 = (int)-(iVar22 + (uint)(uVar35 != 0)) < 0 !=
                           (SBORROW4(0,iVar22) != SBORROW4(-iVar22,(uint)(uVar35 != 0)));
                  bVar63 = (int)-(iVar20 + (uint)(uVar51 != 0)) < 0 !=
                           (SBORROW4(0,iVar20) != SBORROW4(-iVar20,(uint)(uVar51 != 0)));
                  iVar39 = iVar20 + iVar43 + (uint)CARRY4(uVar51,uVar49);
                  bVar61 = uVar51 + uVar49 != 0;
                  bVar61 = (int)-(iVar39 + (uint)bVar61) < 0 !=
                           (SBORROW4(0,iVar39) != SBORROW4(-iVar39,(uint)bVar61));
                  iVar43 = iVar22 + iVar43 + (uint)CARRY4(uVar35,uVar49);
                  bVar62 = uVar35 + uVar49 != 0;
                  bVar62 = (int)-(iVar43 + (uint)bVar62) < 0 !=
                           (SBORROW4(0,iVar43) != SBORROW4(-iVar43,(uint)bVar62));
                  if ((bVar62 || (bVar61 || (bVar63 || bVar59))) &&
                      (iVar43 < 0 || (iVar39 < 0 || (iVar20 < 0 || iVar22 < 0)))) {
                    iVar39 = 3;
                  }
                  else {
                    if (!bVar62 && (!bVar61 && (!bVar63 && !bVar59))) {
                      if (iVar43 >= 0 && (iVar39 >= 0 && (iVar20 >= 0 && iVar22 >= 0)))
                      goto LAB_4a0434f0;
                      goto LAB_4a0434f8;
                    }
LAB_4a043508:
                    iVar39 = 1;
                  }
                }
                if (iVar39 == 0) goto LAB_4a04414c;
                uVar45 = puStack_94[8];
                if ((uVar45 & 0xbf) == 0x80) {
                  puStack_94[8] = uVar45 & 0xff7f;
                  iVar43 = *(int *)PTR_DAT_4a042dfc;
                  if ((uVar45 & 0x400) == 0) {
                    uVar47 = *(undefined4 *)(puStack_94 + 6);
                    iVar20 = FUN_4a0015f0(*(int *)(puStack_94 + 2) << 0xb,uVar47);
                    uVar45 = (ushort)((uint)(*(int *)(iVar43 + 0x310) * iVar20 * 0x10) >> 0x10);
                    iVar20 = FUN_4a0015f0(*(int *)(puStack_94 + 4) << 0xb,uVar47);
                    uVar9 = (ushort)((uint)(*(int *)(iVar43 + 0x314) * iVar20 * 0x10) >> 0x10);
                  }
                  else {
                    uVar45 = (ushort)((uint)((*(int *)(iVar43 + 0x34c) * 8 + -1) *
                                             *(int *)(puStack_94 + 2) * 8) >> 0x10);
                    uVar9 = (ushort)((uint)(*(int *)(puStack_94 + 4) *
                                            (*(int *)(iVar43 + 0x350) * 8 + -1) * 8) >> 0x10);
                  }
                  iVar20 = *(int *)(iVar43 + 0x354);
                  if (iVar20 == 0) {
                    *puStack_94 = uVar45;
                    puStack_94[1] = uVar9;
                  }
                  else if (iVar20 == 1) {
                    *puStack_94 = ~uVar9;
                    puStack_94[1] = uVar45;
                  }
                  else if (iVar20 == 2) {
                    *puStack_94 = ~uVar45;
                    puStack_94[1] = ~uVar9;
                  }
                  else if (iVar20 == 3) {
                    *puStack_94 = uVar9;
                    puStack_94[1] = ~uVar45;
                  }
                  *puStack_94 = (short)*(undefined4 *)(iVar43 + 800) + *puStack_94;
                  puStack_94[1] = (short)*(undefined4 *)(iVar43 + 0x328) + puStack_94[1];
                }
                puVar30 = PTR_DAT_4a042dfc;
                uVar45 = puVar21[8];
                if ((uVar45 & 0xbf) == 0x80) {
                  puVar21[8] = uVar45 & 0xff7f;
                  iVar43 = *(int *)puVar30;
                  if ((uVar45 & 0x400) == 0) {
                    uVar47 = *(undefined4 *)(puVar21 + 6);
                    iVar20 = FUN_4a0015f0(*(int *)(puVar21 + 2) << 0xb,uVar47);
                    uVar45 = (ushort)((uint)(*(int *)(iVar43 + 0x310) * iVar20 * 0x10) >> 0x10);
                    iVar20 = FUN_4a0015f0(*(int *)(puVar21 + 4) << 0xb,uVar47);
                    uVar9 = (ushort)((uint)(*(int *)(iVar43 + 0x314) * iVar20 * 0x10) >> 0x10);
                  }
                  else {
                    uVar45 = (ushort)((uint)((*(int *)(iVar43 + 0x34c) * 8 + -1) *
                                             *(int *)(puVar21 + 2) * 8) >> 0x10);
                    uVar9 = (ushort)((uint)(*(int *)(puVar21 + 4) *
                                            (*(int *)(iVar43 + 0x350) * 8 + -1) * 8) >> 0x10);
                  }
                  iVar20 = *(int *)(iVar43 + 0x354);
                  if (iVar20 == 0) {
                    *puVar21 = uVar45;
                    puVar21[1] = uVar9;
                  }
                  else if (iVar20 == 1) {
                    *puVar21 = ~uVar9;
                    puVar21[1] = uVar45;
                  }
                  else {
                    if (iVar20 == 2) {
                      *puVar21 = ~uVar45;
                      uVar45 = uVar9;
                    }
                    else {
                      if (iVar20 != 3) goto LAB_4a043774;
                      *puVar21 = uVar9;
                    }
                    puVar21[1] = ~uVar45;
                  }
LAB_4a043774:
                  *puVar21 = (short)*(undefined4 *)(iVar43 + 800) + *puVar21;
                  puVar21[1] = (short)*(undefined4 *)(iVar43 + 0x328) + puVar21[1];
                }
                uVar45 = puStack_98[8];
                if ((uVar45 & 0xbf) == 0x80) {
                  puStack_98[8] = uVar45 & 0xff7f;
                  iVar43 = *(int *)PTR_DAT_4a042dfc;
                  if ((uVar45 & 0x400) == 0) {
                    uVar47 = *(undefined4 *)(puStack_98 + 6);
                    iVar20 = FUN_4a0015f0(*(int *)(puStack_98 + 2) << 0xb,uVar47);
                    uVar45 = (ushort)((uint)(*(int *)(iVar43 + 0x310) * iVar20 * 0x10) >> 0x10);
                    iVar20 = FUN_4a0015f0(*(int *)(puStack_98 + 4) << 0xb,uVar47);
                    uVar9 = (ushort)((uint)(*(int *)(iVar43 + 0x314) * iVar20 * 0x10) >> 0x10);
                  }
                  else {
                    uVar45 = (ushort)((uint)((*(int *)(iVar43 + 0x34c) * 8 + -1) *
                                             *(int *)(puStack_98 + 2) * 8) >> 0x10);
                    uVar9 = (ushort)((uint)(*(int *)(puStack_98 + 4) *
                                            (*(int *)(iVar43 + 0x350) * 8 + -1) * 8) >> 0x10);
                  }
                  iVar20 = *(int *)(iVar43 + 0x354);
                  if (iVar20 == 0) {
                    *puStack_98 = uVar45;
                    puStack_98[1] = uVar9;
                  }
                  else if (iVar20 == 1) {
                    *puStack_98 = ~uVar9;
                    puStack_98[1] = uVar45;
                  }
                  else if (iVar20 == 2) {
                    *puStack_98 = ~uVar45;
                    puStack_98[1] = ~uVar9;
                  }
                  else if (iVar20 == 3) {
                    *puStack_98 = uVar9;
                    puStack_98[1] = ~uVar45;
                  }
                  *puStack_98 = (short)*(undefined4 *)(iVar43 + 800) + *puStack_98;
                  puStack_98[1] = (short)*(undefined4 *)(iVar43 + 0x328) + puStack_98[1];
                }
                puVar30 = PTR_DAT_4a042dfc;
                if ((puVar38 != (uint *)0x0) &&
                   (uVar45 = (ushort)puVar38[4], (uVar45 & 0xbf) == 0x80)) {
                  *(ushort *)(puVar38 + 4) = uVar45 & 0xff7f;
                  iVar43 = *(int *)puVar30;
                  if ((uVar45 & 0x400) == 0) {
                    uVar18 = puVar38[3];
                    iVar20 = FUN_4a0015f0(puVar38[1] << 0xb,uVar18);
                    uVar9 = (ushort)((uint)(*(int *)(iVar43 + 0x310) * iVar20 * 0x10) >> 0x10);
                    iVar20 = FUN_4a0015f0(puVar38[2] << 0xb,uVar18);
                    uVar45 = (ushort)((uint)(*(int *)(iVar43 + 0x314) * iVar20 * 0x10) >> 0x10);
                  }
                  else {
                    uVar9 = (ushort)((*(int *)(iVar43 + 0x34c) * 8 + -1) * puVar38[1] * 8 >> 0x10);
                    uVar45 = (ushort)(puVar38[2] * (*(int *)(iVar43 + 0x350) * 8 + -1) * 8 >> 0x10);
                  }
                  iVar20 = *(int *)(iVar43 + 0x354);
                  if (iVar20 == 0) {
                    *(ushort *)puVar38 = uVar9;
                    *(ushort *)((int)puVar38 + 2) = uVar45;
                  }
                  else if (iVar20 == 1) {
                    *(ushort *)puVar38 = ~uVar45;
                    *(ushort *)((int)puVar38 + 2) = uVar9;
                  }
                  else {
                    if (iVar20 == 2) {
                      *(ushort *)puVar38 = ~uVar9;
                      uVar9 = uVar45;
                    }
                    else {
                      if (iVar20 != 3) goto LAB_4a0439fc;
                      *(ushort *)puVar38 = uVar45;
                    }
                    *(ushort *)((int)puVar38 + 2) = ~uVar9;
                  }
LAB_4a0439fc:
                  *(ushort *)puVar38 = (short)*(undefined4 *)(iVar43 + 800) + (ushort)*puVar38;
                  *(ushort *)((int)puVar38 + 2) =
                       (short)*(undefined4 *)(iVar43 + 0x328) + *(ushort *)((int)puVar38 + 2);
                }
                if (local_58[0x145] == 0xffffffff) {
                  uVar31 = *(uint *)(puVar21 + 6);
                  uVar32 = *(uint *)(puStack_98 + 6);
                  uVar18 = *(uint *)(puStack_94 + 6);
                  uVar15 = uVar32;
                  if ((int)uVar32 < (int)uVar31) {
                    uVar15 = uVar31;
                  }
                  if (((int)uVar18 <= (int)uVar15) && (uVar18 = uVar31, (int)uVar31 <= (int)uVar32))
                  {
                    uVar18 = uVar32;
                  }
                  if ((puVar38 != (uint *)0x0) && ((int)uVar18 <= (int)puVar38[3])) {
                    uVar18 = puVar38[3];
                  }
                  iVar43 = FUN_4a03b088(uVar18);
                  iVar20 = FUN_4a030140();
                  local_78 = (undefined *)(iVar20 + iVar43);
                }
                else {
                  local_78 = (undefined *)FUN_4a03b0cc();
                }
                uVar18 = local_58[0xeb];
                puVar30 = local_78;
                if ((int)(uVar18 - 1) < (int)local_78) {
                  puVar30 = (undefined *)(uVar18 - 1);
                }
                if ((int)puVar30 < 0) {
                  local_78 = (undefined *)0x0;
                }
                else if ((int)(uVar18 - 1) < (int)local_78) {
                  local_78 = (undefined *)(uVar18 - 1);
                }
              }
              puVar30 = PTR_DAT_4a042dfc;
              if (iVar39 == 2) {
                uStack_88 = local_7c;
                local_7c = uVar10;
                puStack_94 = (ushort *)(uVar33 + uVar10 * 0x14);
                puStack_98 = (ushort *)(uVar33 + uVar14 * 0x14);
              }
              if (puVar38 == (uint *)0x0) {
                iVar43 = *piVar17;
              }
              else {
                iVar43 = piVar17[1];
              }
              puVar16 = *(undefined4 **)(*(int *)PTR_DAT_4a042dfc + 0x398);
              *(uint *)(*(int *)PTR_DAT_4a042dfc + 0x398) =
                   (iVar43 + 3U & 0xfffffffc) + (int)puVar16;
              iVar43 = piVar17[8];
              puVar44 = puVar16 + piVar17[3];
              *puVar44 = puStack_94;
              puVar44 = puVar44 + iVar43;
              *puVar44 = puVar21;
              puVar44[iVar43] = puStack_98;
              if (puVar38 != (uint *)0x0) {
                (puVar44 + iVar43)[iVar43] = puVar38;
              }
              if (uStack_a4 == 0) {
                if (bVar64) {
                  puVar16[piVar17[4]] = local_64;
                }
                else {
                  puVar16[piVar17[4]] = *(undefined4 *)(local_60 + uStack_88 * 2);
                }
              }
              else {
                puVar28 = puVar38;
                if (local_60 == (short *)0x0) {
                  iVar43 = piVar17[8];
                  puVar42 = puVar16 + piVar17[4];
                  *puVar42 = local_64;
                  if (puVar38 != (uint *)0x0) {
                    puVar28 = &local_64;
                  }
                  puVar42[iVar43] = local_64;
                  puVar42 = puVar42 + iVar43 + iVar43;
                  *puVar42 = local_64;
                }
                else {
                  iVar43 = piVar17[8];
                  puVar44 = puVar16 + piVar17[4];
                  if (puVar38 != (uint *)0x0) {
                    puVar28 = (uint *)(local_60 + local_80 * 2);
                  }
                  *puVar44 = *(undefined4 *)(local_60 + local_7c * 2);
                  if (local_60 + uStack_90 * 2 == (short *)0x0) goto LAB_4a043f58;
                  puVar44[iVar43] = *(undefined4 *)(local_60 + uStack_90 * 2);
                  puVar42 = puVar44 + iVar43 + iVar43;
                  *puVar42 = *(uint *)(local_60 + uStack_88 * 2);
                }
                if (puVar28 != (uint *)0x0) {
                  puVar42[iVar43] = *puVar28;
                }
              }
LAB_4a043f58:
              if (bVar58) {
                psVar19 = (short *)piVar17[2];
                iVar43 = piVar17[6];
                iVar20 = piVar17[8];
                psVar36 = (short *)(uVar13 + local_7c * 4);
                if (puVar38 == (uint *)0x0) {
                  psVar19 = (short *)0x0;
                }
                psVar40 = (short *)(uVar13 + uStack_90 * 4);
                psVar53 = (short *)(uVar13 + uStack_88 * 4);
                if (puVar38 != (uint *)0x0) {
                  psVar19 = (short *)(uVar13 + local_80 * 4);
                }
                puVar16[piVar17[5]] = uVar11;
                psVar55 = (short *)(puVar16 + iVar43);
                sVar1 = *(short *)(*(int *)puVar30 + 0x250);
                sVar3 = *(short *)(*(int *)puVar30 + 0x252);
                *psVar55 = *psVar36 + sVar1;
                psVar55[1] = psVar36[1] + sVar3;
                psVar55 = psVar55 + iVar20 * 2;
                *psVar55 = *psVar40 + sVar1;
                psVar55[1] = psVar40[1] + sVar3;
                psVar55 = psVar55 + iVar20 * 2;
                *psVar55 = *psVar53 + sVar1;
                psVar55[1] = psVar53[1] + sVar3;
                if (psVar19 != (short *)0x0) {
                  psVar55[iVar20 * 2] = sVar1 + *psVar19;
                  (psVar55 + iVar20 * 2)[1] = sVar3 + psVar19[1];
                }
              }
              if (uStack_a8 != 0) {
                iVar43 = piVar17[8];
                uVar10 = uStack_88;
                pbVar29 = (byte *)0x0;
                if (puVar38 != (uint *)0x0) {
                  uVar10 = local_80;
                  pbVar29 = pbStack_ac;
                }
                if (puVar38 != (uint *)0x0) {
                  pbVar29 = pbVar29 + uVar10 * 2;
                }
                psVar36 = (short *)(puVar16 + piVar17[7]);
                *psVar36 = (ushort)pbStack_ac[local_7c * 2] << 4;
                psVar19 = psVar36 + iVar43 * 2;
                psVar36[1] = (ushort)(pbStack_ac + local_7c * 2)[1] << 4;
                *psVar19 = (ushort)pbStack_ac[uStack_90 * 2] << 4;
                psVar36 = psVar19 + iVar43 * 2;
                psVar19[1] = (ushort)(pbStack_ac + uStack_90 * 2)[1] << 4;
                *psVar36 = (ushort)pbStack_ac[uStack_88 * 2] << 4;
                psVar36[1] = (ushort)(pbStack_ac + uStack_88 * 2)[1] << 4;
                if (pbVar29 != (byte *)0x0) {
                  psVar36[iVar43 * 2] = (ushort)*pbVar29 << 4;
                  (psVar36 + iVar43 * 2)[1] = (ushort)pbVar29[1] << 4;
                }
              }
              puVar16[1] = local_34;
              *puVar16 = *(undefined4 *)(*(int *)(*(int *)puVar30 + 0x39c) + (int)local_78 * 4);
              *(undefined4 **)(*(int *)(*(int *)puVar30 + 0x39c) + (int)local_78 * 4) = puVar16;
              if (iVar39 == 2) {
                local_7c = uStack_88;
              }
            }
          }
        }
        else {
          uStack_88 = (uint)local_70[2];
          uStack_90 = (uint)local_70[local_74 ^ 1];
          if (local_30 != 2) {
            local_7c = (uint)local_70[local_74];
          }
          bVar59 = local_7c != uStack_88;
          uVar10 = uStack_88;
          if (bVar59) {
            uVar10 = uStack_90;
          }
          uVar14 = uVar10;
          uVar18 = local_7c;
          if (bVar59 && local_7c != uVar10) {
            uVar14 = uStack_88;
            uVar18 = uStack_90;
          }
          if ((bVar59 && local_7c != uVar10) && uVar18 != uVar14) {
            puVar38 = (uint *)0x0;
            goto LAB_4a042730;
          }
        }
LAB_4a04414c:
        switch(local_30) {
        case 0:
          local_70 = local_70 + 3;
          break;
        case 1:
          local_74 = local_74 ^ 1;
        case 2:
          local_70 = local_70 + 1;
          break;
        case 3:
          local_70 = local_70 + 4;
          break;
        case 4:
          local_70 = local_70 + 2;
        }
      } while (uStack_9c != 0);
    }
    break;
  case 5:
  case 6:
    if (local_30 == 5) {
      uStack_9c = uStack_c4 >> 1;
    }
    else {
      uStack_9c = uStack_c4 - 1;
    }
    if (uStack_9c != 0) {
      puVar30 = PTR_DAT_4a042e0c;
      puVar21 = local_2c;
      do {
        puVar8 = PTR_DAT_4a04516c;
        uStack_9c = uStack_9c - 1;
        uVar10 = (uint)*puVar21;
        uVar11 = (uint)puVar21[1];
        if (uVar10 != uVar11) {
          puVar41 = (ushort *)(uVar33 + uVar10 * 0x14);
          puVar12 = (ushort *)(uVar33 + uVar11 * 0x14);
          uVar45 = puVar41[8];
          if ((puVar12[8] & uVar45 & 0x3f) == 0) {
            if (local_58[0x105] != 3) {
              if ((uVar45 & 0xbf) == 0x80) {
                puVar41[8] = uVar45 & 0xff7f;
                iVar39 = *(int *)puVar8;
                if ((uVar45 & 0x400) == 0) {
                  local_38 = *(uint *)(puVar41 + 6);
                  iVar43 = FUN_4a0015f0(*(int *)(puVar41 + 2) << 0xb,local_38,puVar30);
                  uVar45 = (ushort)((uint)(*(int *)(iVar39 + 0x310) * iVar43 * 0x10) >> 0x10);
                  iVar43 = FUN_4a0015f0(*(int *)(puVar41 + 4) << 0xb,local_38);
                  uVar9 = (ushort)((uint)(*(int *)(iVar39 + 0x314) * iVar43 * 0x10) >> 0x10);
                }
                else {
                  uVar45 = (ushort)((uint)((*(int *)(iVar39 + 0x34c) * 8 + -1) *
                                           *(int *)(puVar41 + 2) * 8) >> 0x10);
                  uVar9 = (ushort)((uint)(*(int *)(puVar41 + 4) *
                                          (*(int *)(iVar39 + 0x350) * 8 + -1) * 8) >> 0x10);
                }
                iVar43 = *(int *)(iVar39 + 0x354);
                if (iVar43 == 0) {
                  *puVar41 = uVar45;
                  puVar41[1] = uVar9;
                }
                else if (iVar43 == 1) {
                  *puVar41 = ~uVar9;
                  puVar41[1] = uVar45;
                }
                else {
                  if (iVar43 == 2) {
                    *puVar41 = ~uVar45;
                    uVar45 = uVar9;
                  }
                  else {
                    if (iVar43 != 3) goto LAB_4a044324;
                    *puVar41 = uVar9;
                  }
                  puVar41[1] = ~uVar45;
                }
LAB_4a044324:
                *puVar41 = (short)*(undefined4 *)(iVar39 + 800) + *puVar41;
                puVar41[1] = (short)*(undefined4 *)(iVar39 + 0x328) + puVar41[1];
              }
              puVar30 = PTR_DAT_4a04516c;
              uVar45 = puVar12[8];
              if ((uVar45 & 0xbf) == 0x80) {
                puVar12[8] = uVar45 & 0xff7f;
                iVar39 = *(int *)puVar30;
                if ((uVar45 & 0x400) == 0) {
                  local_3c = *(int *)(puVar12 + 6);
                  iVar43 = FUN_4a0015f0(*(int *)(puVar12 + 2) << 0xb,local_3c);
                  uVar45 = (ushort)((uint)(*(int *)(iVar39 + 0x310) * iVar43 * 0x10) >> 0x10);
                  iVar43 = FUN_4a0015f0(*(int *)(puVar12 + 4) << 0xb,local_3c);
                  uVar9 = (ushort)((uint)(*(int *)(iVar39 + 0x314) * iVar43 * 0x10) >> 0x10);
                }
                else {
                  uVar45 = (ushort)((uint)((*(int *)(iVar39 + 0x34c) * 8 + -1) *
                                           *(int *)(puVar12 + 2) * 8) >> 0x10);
                  uVar9 = (ushort)((uint)(*(int *)(puVar12 + 4) *
                                          (*(int *)(iVar39 + 0x350) * 8 + -1) * 8) >> 0x10);
                }
                iVar43 = *(int *)(iVar39 + 0x354);
                if (iVar43 == 0) {
                  *puVar12 = uVar45;
                  puVar12[1] = uVar9;
                }
                else if (iVar43 == 1) {
                  *puVar12 = ~uVar9;
                  puVar12[1] = uVar45;
                }
                else {
                  if (iVar43 == 2) {
                    *puVar12 = ~uVar45;
                    uVar45 = uVar9;
                  }
                  else {
                    if (iVar43 != 3) goto LAB_4a04443c;
                    *puVar12 = uVar9;
                  }
                  puVar12[1] = ~uVar45;
                }
LAB_4a04443c:
                *puVar12 = (short)*(undefined4 *)(iVar39 + 800) + *puVar12;
                puVar12[1] = (short)*(undefined4 *)(iVar39 + 0x328) + puVar12[1];
              }
              if (local_58[0x145] == 0xffffffff) {
                iVar39 = *(int *)(puVar41 + 6);
                if (*(int *)(puVar41 + 6) <= *(int *)(puVar12 + 6)) {
                  iVar39 = *(int *)(puVar12 + 6);
                }
                iVar39 = FUN_4a03b088(iVar39);
                iVar43 = FUN_4a030140();
                local_78 = (undefined *)(iVar43 + iVar39);
              }
              else {
                local_78 = (undefined *)FUN_4a03b0cc();
              }
              uVar13 = local_58[0xeb];
              puVar30 = local_78;
              if ((int)(uVar13 - 1) < (int)local_78) {
                puVar30 = (undefined *)(uVar13 - 1);
              }
              if ((int)puVar30 < 0) {
                local_78 = (undefined *)0x0;
              }
              else if ((int)(uVar13 - 1) < (int)local_78) {
                local_78 = (undefined *)(uVar13 - 1);
              }
            }
            puVar8 = PTR_DAT_4a04516c;
            puVar30 = local_78;
            if ((uStack_a4 == 0) ||
               (*(int *)(local_60 + uVar10 * 2) == *(int *)(local_60 + uVar11 * 2))) {
              iVar39 = *(int *)PTR_DAT_4a04516c;
              puVar16 = *(undefined4 **)(iVar39 + 0x398);
              if (((puVar41[8] | puVar12[8]) & 0x3f) == 0) {
                *(undefined4 **)(iVar39 + 0x398) = puVar16 + 5;
                puVar16[4] = puVar12;
                puVar16[3] = puVar41;
                uVar11 = local_64;
                if (local_60 != (short *)0x0) {
                  uVar11 = *(uint *)(local_60 + uVar10 * 2);
                }
                puVar16[2] = uVar11;
                puVar16[1] = uStack_bc;
                *puVar16 = *(undefined4 *)(*(int *)(iVar39 + 0x39c) + (int)local_78 * 4);
                *(undefined4 **)(*(int *)(*(int *)puVar8 + 0x39c) + (int)local_78 * 4) = puVar16;
              }
              else {
                *(undefined4 **)(iVar39 + 0x398) = puVar16 + 6;
                puVar16[5] = puVar12;
                puVar16[3] = puVar41;
                if (local_60 == (short *)0x0) {
                  puVar16[2] = local_64;
                  uVar10 = local_64;
                }
                else {
                  puVar16[2] = *(undefined4 *)(local_60 + uVar10 * 2);
                  uVar10 = *(uint *)(local_60 + uVar10 * 2);
                }
                puVar16[4] = uVar10;
                puVar16[1] = uStack_bc | 0x2000000;
                *puVar16 = *(undefined4 *)(*(int *)(iVar39 + 0x39c) + (int)local_78 * 4);
                *(undefined4 **)(*(int *)(*(int *)puVar8 + 0x39c) + (int)local_78 * 4) = puVar16;
              }
            }
            else {
              iVar39 = *(int *)PTR_DAT_4a04516c;
              puVar16 = *(undefined4 **)(iVar39 + 0x398);
              *(undefined4 **)(iVar39 + 0x398) = puVar16 + 6;
              puVar16[5] = puVar12;
              puVar16[3] = puVar41;
              if (local_60 == (short *)0x0) {
                puVar16[2] = local_64;
                uVar10 = local_64;
              }
              else {
                puVar16[2] = *(undefined4 *)(local_60 + uVar10 * 2);
                uVar10 = *(uint *)(local_60 + uVar11 * 2);
              }
              puVar16[4] = uVar10;
              puVar16[1] = uStack_bc | 0x2000000;
              *puVar16 = *(undefined4 *)(*(int *)(iVar39 + 0x39c) + (int)local_78 * 4);
              *(undefined4 **)(*(int *)(*(int *)puVar8 + 0x39c) + (int)local_78 * 4) = puVar16;
            }
          }
        }
        if (local_30 == 5) {
          puVar21 = puVar21 + 2;
        }
        else {
          puVar21 = puVar21 + 1;
        }
      } while (uStack_9c != 0);
    }
    break;
  case 7:
    if (uStack_c4 != 0) {
      local_40 = uVar10 << 5 | 0x28000000;
      puVar21 = local_2c;
      do {
        uStack_c4 = uStack_c4 - 1;
        uVar13 = (uint)*puVar21;
        puVar21 = puVar21 + 1;
        iVar39 = *(int *)puVar30;
        puVar16 = *(undefined4 **)(iVar39 + 0x398);
        *(undefined4 **)(iVar39 + 0x398) = puVar16 + 7;
        puVar16[4] = uVar33 + uVar13 * 0x14;
        iVar43 = uVar13 * 2 + 1;
        uVar10 = local_64;
        if (!bVar64) {
          uVar10 = *(uint *)(local_60 + uVar13 * 2);
        }
        puVar16[3] = uVar10;
        puVar16[1] = 0x28000000;
        uVar45 = *(ushort *)(uVar11 + 0x4a);
        uVar9 = *(ushort *)(uVar11 + 0x48);
        sVar1 = (short)((uint)uVar45 *
                        ((int)*(short *)(*(int *)(iVar39 + 0x468) + uVar13 * 8) +
                        (int)*(short *)(iVar39 + 0x250)) * 0x10 >> 0x10);
        *(short *)(puVar16 + 5) = sVar1;
        sVar3 = (short)((uint)uVar9 *
                        ((int)*(short *)(*(int *)(iVar39 + 0x468) + uVar13 * 8 + 2) +
                        (int)*(short *)(iVar39 + 0x252)) * 0x10 >> 0x10);
        *(short *)((int)puVar16 + 0x16) = sVar3;
        *(short *)(puVar16 + 6) =
             (short)((int)(((int)*(short *)(local_58[0x11a] + iVar43 * 4) +
                           (int)(short)local_58[0x94]) * (uint)uVar45) >> 0xc) - sVar1;
        *(short *)((int)puVar16 + 0x1a) =
             (short)((int)((uint)uVar9 *
                          ((int)*(short *)(local_58[0x11a] + iVar43 * 4 + 2) +
                          (int)*(short *)((int)local_58 + 0x252))) >> 0xc) - sVar3;
        puVar16[2] = uVar11;
        puVar16[1] = local_40;
        *puVar16 = *(undefined4 *)(*(int *)(iVar39 + 0x39c) + (int)local_78 * 4);
        *(undefined4 **)(*(int *)(*(int *)puVar30 + 0x39c) + (int)local_78 * 4) = puVar16;
      } while (uStack_c4 != 0);
    }
    break;
  case 8:
    iStack_c8 = 0;
    while (iVar39 = iStack_c8, 0 < (int)uStack_c4) {
      iVar43 = 0;
      iStack_cc = 0;
      uStack_c4 = uStack_c4 - 1;
      uVar13 = 0xffffffff;
      if (-1 < (int)uStack_c4) {
        do {
          puVar21 = local_2c + iStack_c8;
          iStack_c8 = iStack_c8 + 1;
          if (uVar13 == *puVar21) break;
          iStack_cc = iStack_cc + 1;
          uStack_c4 = uStack_c4 - 1;
          uVar13 = (uint)*puVar21;
        } while (uStack_c4 < 0x80000000);
      }
      uStack_d4 = iStack_c8 + -2;
      if ((int)uStack_c4 < 0) {
        uStack_d4 = iStack_c8 + -1;
      }
      if (local_58[0x105] == 3) {
        puVar21 = local_2c + iVar39;
        if ((*(uint *)(local_5c + 0x10) & 8) == 0) {
          iStack_8c = 0;
          if ((*(uint *)(local_5c + 0x10) & 0x10) == 0) {
            psVar36 = (short *)(uVar33 + (uint)puVar21[iStack_cc + -1] * 0x14);
            psVar19 = (short *)(uVar33 + (uint)puVar21[iStack_cc + -2] * 0x14);
            iVar48 = (int)*psVar36;
            iVar52 = (int)psVar36[1];
            psVar36 = (short *)(uVar33 + (uint)*puVar21 * 0x14);
            iVar54 = 0;
            iVar20 = *psVar36 - iVar48;
            iVar37 = psVar36[1] - iVar52;
            iVar48 = iVar48 - *psVar19;
            iVar52 = iVar52 - psVar19[1];
            while (iVar57 = iVar37, iVar56 = iVar20, -1 < iVar48 * iVar57 - iVar52 * iVar56) {
              if (iVar54 == iStack_cc + -1) goto LAB_4a04525c;
              psVar36 = (short *)(uVar33 + (uint)(puVar21 + iVar54)[1] * 0x14);
              psVar19 = (short *)(uVar33 + (uint)puVar21[iVar54] * 0x14);
              iVar54 = iVar54 + 1;
              iVar20 = (int)*psVar36 - (int)*psVar19;
              iVar48 = iVar56;
              iVar52 = iVar57;
              iVar37 = (int)psVar36[1] - (int)psVar19[1];
            }
LAB_4a0451fc:
            iStack_8c = 1;
          }
          else {
            psVar36 = (short *)(uVar33 + (uint)puVar21[iStack_cc + -1] * 0x14);
            psVar19 = (short *)(uVar33 + (uint)puVar21[iStack_cc + -2] * 0x14);
            iVar48 = (int)*psVar36;
            iVar52 = (int)psVar36[1];
            psVar36 = (short *)(uVar33 + (uint)*puVar21 * 0x14);
            iVar54 = 0;
            iVar20 = *psVar36 - iVar48;
            iVar37 = psVar36[1] - iVar52;
            iVar48 = iVar48 - *psVar19;
            iVar52 = iVar52 - psVar19[1];
            while (iVar57 = iVar37, iVar56 = iVar20, -1 < iVar52 * iVar56 - iVar48 * iVar57) {
              if (iVar54 == iStack_cc + -1) goto LAB_4a04525c;
              psVar36 = (short *)(uVar33 + (uint)(puVar21 + iVar54)[1] * 0x14);
              psVar19 = (short *)(uVar33 + (uint)puVar21[iVar54] * 0x14);
              iVar54 = iVar54 + 1;
              iVar37 = (int)psVar36[1] - (int)psVar19[1];
              iVar48 = iVar56;
              iVar52 = iVar57;
              iVar20 = (int)*psVar36 - (int)*psVar19;
            }
LAB_4a04517c:
            iStack_8c = 2;
          }
        }
        else {
          psVar36 = (short *)(uVar33 + (uint)puVar21[iStack_cc + -1] * 0x14);
          psVar19 = (short *)(uVar33 + (uint)puVar21[iStack_cc + -2] * 0x14);
          iVar48 = (int)*psVar36;
          iVar52 = (int)psVar36[1];
          bVar64 = false;
          bVar60 = false;
          psVar36 = (short *)(uVar33 + (uint)*puVar21 * 0x14);
          iVar54 = 0;
          iVar20 = *psVar36 - iVar48;
          iVar37 = psVar36[1] - iVar52;
          iVar48 = iVar48 - *psVar19;
          iVar52 = iVar52 - psVar19[1];
          while( true ) {
            iVar57 = iVar37;
            iVar56 = iVar20;
            iVar20 = iVar48 * iVar57 - iVar52 * iVar56;
            if (iVar20 < 0) {
              bVar64 = true;
            }
            else if (0 < iVar20) {
              bVar60 = true;
            }
            if (iVar54 == iStack_cc + -1) break;
            psVar19 = (short *)(uVar33 + (uint)(puVar21 + iVar54)[1] * 0x14);
            psVar36 = (short *)(uVar33 + (uint)puVar21[iVar54] * 0x14);
            iVar54 = iVar54 + 1;
            iVar20 = (int)*psVar19 - (int)*psVar36;
            iVar37 = (int)psVar19[1] - (int)psVar36[1];
            iVar48 = iVar56;
            iVar52 = iVar57;
          }
          if ((bool)(bVar64 & bVar60)) {
            iStack_8c = 3;
          }
          else {
            if (bVar64) goto LAB_4a0451fc;
            if (bVar60) goto LAB_4a04517c;
            iStack_8c = 0;
          }
        }
      }
      else {
        puVar21 = local_2c + iVar39;
        if ((*(uint *)(local_5c + 0x10) & 8) == 0) {
          psStack_dc = (short *)0x0;
          if ((*(uint *)(local_5c + 0x10) & 0x10) == 0) {
            iVar20 = uVar33 + (uint)puVar21[iStack_cc + -1] * 0x14;
            iVar37 = uVar33 + (uint)puVar21[iStack_cc + -2] * 0x14;
            iVar48 = uVar33 + (uint)*puVar21 * 0x14;
            if ((**(uint **)PTR_DAT_4a04516c & 0x80000000) == 0) {
              uStack_f4 = *(uint *)(iVar48 + 4);
              uStack_f0 = *(uint *)(iVar48 + 8);
              uStack_ec = *(uint *)(iVar48 + 0xc);
            }
            else {
              uStack_f4 = *(uint *)PTR_DAT_4a045170;
              uStack_f0 = *(uint *)((int)PTR_DAT_4a045170 + 4);
              uStack_ec = *(uint *)((int)PTR_DAT_4a045170 + 8);
            }
            local_4c = iStack_cc - 1;
            uVar13 = *(int *)(iVar20 + 4) - *(int *)(iVar37 + 4);
            uVar14 = *(int *)(iVar20 + 8) - *(int *)(iVar37 + 8);
            iVar37 = *(int *)(iVar20 + 0xc) - *(int *)(iVar37 + 0xc);
            uStack_e8 = *(int *)(iVar48 + 4) - *(int *)(iVar20 + 4);
            uStack_e4 = *(int *)(iVar48 + 8) - *(int *)(iVar20 + 8);
            iStack_e0 = *(int *)(iVar48 + 0xc) - *(int *)(iVar20 + 0xc);
            while (uVar15 = (uint)((longlong)(int)uVar14 * (longlong)(int)uStack_e8),
                  uVar18 = (uint)((longlong)(int)uVar13 * (longlong)(int)uStack_e4),
                  iVar20 = (int)((ulonglong)((longlong)(int)uVar13 * (longlong)(int)uStack_e4) >>
                                0x20) -
                           ((int)((ulonglong)((longlong)(int)uVar14 * (longlong)(int)uStack_e8) >>
                                 0x20) + (uint)(uVar18 < uVar15)),
                  uVar18 = uVar18 - uVar15 >> 8 | iVar20 * 0x1000000,
                  lVar4 = (ulonglong)uVar18 * (ulonglong)uStack_ec, uVar31 = (uint)lVar4,
                  uVar32 = (uint)((longlong)(int)uVar13 * (longlong)iStack_e0),
                  uVar15 = (uint)((longlong)iVar37 * (longlong)(int)uStack_e8),
                  iVar48 = (int)((ulonglong)((longlong)iVar37 * (longlong)(int)uStack_e8) >> 0x20) -
                           ((int)((ulonglong)((longlong)(int)uVar13 * (longlong)iStack_e0) >> 0x20)
                           + (uint)(uVar15 < uVar32)),
                  uVar13 = uVar15 - uVar32 >> 8 | iVar48 * 0x1000000,
                  lVar5 = (ulonglong)uVar13 * (ulonglong)uStack_f0, uVar51 = (uint)lVar5,
                  uVar32 = (uint)((longlong)iVar37 * (longlong)(int)uStack_e4),
                  uVar15 = (uint)((longlong)(int)uVar14 * (longlong)iStack_e0),
                  iVar37 = (int)((ulonglong)((longlong)(int)uVar14 * (longlong)iStack_e0) >> 0x20) -
                           ((int)((ulonglong)((longlong)iVar37 * (longlong)(int)uStack_e4) >> 0x20)
                           + (uint)(uVar15 < uVar32)),
                  uVar32 = uVar15 - uVar32 >> 8 | iVar37 * 0x1000000,
                  lVar6 = (ulonglong)uVar32 * (ulonglong)uStack_f4, uVar14 = (uint)lVar6,
                  uVar15 = uVar14 + uVar51, uVar35 = uVar31 + uVar15,
                  lVar7 = (ulonglong)uVar35 * 0xffffffff,
                  iVar20 = ((int)((ulonglong)lVar7 >> 0x20) - uVar35) -
                           (uStack_f4 * (iVar37 >> 8) +
                            ((int)uStack_f4 >> 0x1f) * uVar32 + (int)((ulonglong)lVar6 >> 0x20) +
                            uStack_f0 * (iVar48 >> 8) +
                            ((int)uStack_f0 >> 0x1f) * uVar13 + (int)((ulonglong)lVar5 >> 0x20) +
                            (uint)CARRY4(uVar14,uVar51) +
                            uStack_ec * (iVar20 >> 8) +
                            ((int)uStack_ec >> 0x1f) * uVar18 + (int)((ulonglong)lVar4 >> 0x20) +
                           (uint)CARRY4(uVar31,uVar15)), bVar64 = (int)lVar7 != 0,
                  (int)-(iVar20 + (uint)bVar64) < 0 ==
                  (SBORROW4(0,iVar20) != SBORROW4(-iVar20,(uint)bVar64))) {
              if (psStack_dc == (short *)local_4c) goto LAB_4a044eec;
              iVar20 = uVar33 + (uint)(puVar21 + (int)psStack_dc)[1] * 0x14;
              iVar48 = uVar33 + (uint)puVar21[(int)psStack_dc] * 0x14;
              psStack_dc = (short *)((int)psStack_dc + 1);
              uVar13 = uStack_e8;
              uVar14 = uStack_e4;
              iVar37 = iStack_e0;
              uStack_e8 = *(int *)(iVar20 + 4) - *(int *)(iVar48 + 4);
              uStack_e4 = *(int *)(iVar20 + 8) - *(int *)(iVar48 + 8);
              iStack_e0 = *(int *)(iVar20 + 0xc) - *(int *)(iVar48 + 0xc);
            }
LAB_4a044ed4:
            iStack_8c = 1;
          }
          else {
            iVar20 = uVar33 + (uint)puVar21[iStack_cc + -1] * 0x14;
            iVar37 = uVar33 + (uint)puVar21[iStack_cc + -2] * 0x14;
            iVar48 = uVar33 + (uint)*puVar21 * 0x14;
            if ((**(uint **)PTR_DAT_4a04516c & 0x80000000) == 0) {
              uStack_f4 = *(uint *)(iVar48 + 4);
              uStack_f0 = *(uint *)(iVar48 + 8);
              uStack_ec = *(uint *)(iVar48 + 0xc);
            }
            else {
              uStack_f4 = *(uint *)PTR_DAT_4a045170;
              uStack_f0 = *(uint *)((int)PTR_DAT_4a045170 + 4);
              uStack_ec = *(uint *)((int)PTR_DAT_4a045170 + 8);
            }
            local_48 = iStack_cc - 1;
            iVar52 = *(int *)(iVar20 + 0xc) - *(int *)(iVar37 + 0xc);
            uVar13 = *(int *)(iVar20 + 4) - *(int *)(iVar37 + 4);
            uVar14 = *(int *)(iVar20 + 8) - *(int *)(iVar37 + 8);
            uStack_e8 = *(int *)(iVar48 + 4) - *(int *)(iVar20 + 4);
            uStack_e4 = *(int *)(iVar48 + 8) - *(int *)(iVar20 + 8);
            iStack_e0 = *(int *)(iVar48 + 0xc) - *(int *)(iVar20 + 0xc);
            while (uVar15 = (uint)((longlong)(int)uVar14 * (longlong)(int)uStack_e8),
                  uVar18 = (uint)((longlong)(int)uVar13 * (longlong)(int)uStack_e4),
                  iVar20 = (int)((ulonglong)((longlong)(int)uVar13 * (longlong)(int)uStack_e4) >>
                                0x20) -
                           ((int)((ulonglong)((longlong)(int)uVar14 * (longlong)(int)uStack_e8) >>
                                 0x20) + (uint)(uVar18 < uVar15)),
                  uVar18 = uVar18 - uVar15 >> 8 | iVar20 * 0x1000000,
                  lVar4 = (ulonglong)uVar18 * (ulonglong)uStack_ec, uVar31 = (uint)lVar4,
                  uVar32 = (uint)((longlong)(int)uVar13 * (longlong)iStack_e0),
                  uVar15 = (uint)((longlong)iVar52 * (longlong)(int)uStack_e8),
                  iVar37 = (int)((ulonglong)((longlong)iVar52 * (longlong)(int)uStack_e8) >> 0x20) -
                           ((int)((ulonglong)((longlong)(int)uVar13 * (longlong)iStack_e0) >> 0x20)
                           + (uint)(uVar15 < uVar32)),
                  uVar13 = uVar15 - uVar32 >> 8 | iVar37 * 0x1000000,
                  lVar5 = (ulonglong)uVar13 * (ulonglong)uStack_f0, uVar35 = (uint)lVar5,
                  uVar32 = (uint)((longlong)iVar52 * (longlong)(int)uStack_e4),
                  uVar15 = (uint)((longlong)(int)uVar14 * (longlong)iStack_e0),
                  iVar48 = (int)((ulonglong)((longlong)(int)uVar14 * (longlong)iStack_e0) >> 0x20) -
                           ((int)((ulonglong)((longlong)iVar52 * (longlong)(int)uStack_e4) >> 0x20)
                           + (uint)(uVar15 < uVar32)),
                  uVar32 = uVar15 - uVar32 >> 8 | iVar48 * 0x1000000,
                  lVar6 = (ulonglong)uVar32 * (ulonglong)uStack_f4, uVar14 = (uint)lVar6,
                  uVar15 = uVar14 + uVar35,
                  iVar20 = uStack_f4 * (iVar48 >> 8) +
                           ((int)uStack_f4 >> 0x1f) * uVar32 + (int)((ulonglong)lVar6 >> 0x20) +
                           uStack_f0 * (iVar37 >> 8) +
                           ((int)uStack_f0 >> 0x1f) * uVar13 + (int)((ulonglong)lVar5 >> 0x20) +
                           (uint)CARRY4(uVar14,uVar35) +
                           uStack_ec * (iVar20 >> 8) +
                           ((int)uStack_ec >> 0x1f) * uVar18 + (int)((ulonglong)lVar4 >> 0x20) +
                           (uint)CARRY4(uVar31,uVar15), bVar64 = uVar31 + uVar15 != 0,
                  (int)-(iVar20 + (uint)bVar64) < 0 ==
                  (SBORROW4(0,iVar20) != SBORROW4(-iVar20,(uint)bVar64))) {
              if (psStack_dc == (short *)local_48) {
                bVar64 = false;
                goto LAB_4a044cb0;
              }
              iVar37 = uVar33 + (uint)(puVar21 + (int)psStack_dc)[1] * 0x14;
              iVar20 = uVar33 + (uint)puVar21[(int)psStack_dc] * 0x14;
              psStack_dc = (short *)((int)psStack_dc + 1);
              iVar52 = iStack_e0;
              uVar13 = uStack_e8;
              uVar14 = uStack_e4;
              uStack_e8 = *(int *)(iVar37 + 4) - *(int *)(iVar20 + 4);
              uStack_e4 = *(int *)(iVar37 + 8) - *(int *)(iVar20 + 8);
              iStack_e0 = *(int *)(iVar37 + 0xc) - *(int *)(iVar20 + 0xc);
            }
            bVar64 = true;
LAB_4a044cb0:
            iStack_8c = 0;
            if (bVar64) goto LAB_4a044cb8;
          }
        }
        else {
          psStack_dc = (short *)0x0;
          bVar60 = false;
          bVar64 = false;
          iVar20 = uVar33 + (uint)puVar21[iStack_cc + -1] * 0x14;
          iVar37 = uVar33 + (uint)puVar21[iStack_cc + -2] * 0x14;
          iVar48 = uVar33 + (uint)*puVar21 * 0x14;
          if ((**(uint **)PTR_DAT_4a04516c & 0x80000000) == 0) {
            uStack_f8 = *(uint *)(iVar48 + 4);
            uStack_f4 = *(uint *)(iVar48 + 8);
            uStack_f0 = *(uint *)(iVar48 + 0xc);
          }
          else {
            uStack_f8 = *(uint *)PTR_DAT_4a045170;
            uStack_f4 = *(uint *)((int)PTR_DAT_4a045170 + 4);
            uStack_f0 = *(uint *)((int)PTR_DAT_4a045170 + 8);
          }
          local_44 = (short *)(iStack_cc + -1);
          iVar52 = *(int *)(iVar48 + 4) - *(int *)(iVar20 + 4);
          iVar54 = *(int *)(iVar20 + 4) - *(int *)(iVar37 + 4);
          uVar13 = *(int *)(iVar20 + 8) - *(int *)(iVar37 + 8);
          uVar14 = *(int *)(iVar20 + 0xc) - *(int *)(iVar37 + 0xc);
          uStack_ec = *(int *)(iVar48 + 8) - *(int *)(iVar20 + 8);
          uStack_e8 = *(int *)(iVar48 + 0xc) - *(int *)(iVar20 + 0xc);
          while( true ) {
            iVar56 = iVar52;
            uVar15 = (uint)((longlong)(int)uVar13 * (longlong)iVar56);
            uVar18 = (uint)((longlong)iVar54 * (longlong)(int)uStack_ec);
            iVar20 = (int)((ulonglong)((longlong)iVar54 * (longlong)(int)uStack_ec) >> 0x20) -
                     ((int)((ulonglong)((longlong)(int)uVar13 * (longlong)iVar56) >> 0x20) +
                     (uint)(uVar18 < uVar15));
            uVar18 = uVar18 - uVar15 >> 8 | iVar20 * 0x1000000;
            lVar4 = (ulonglong)uVar18 * (ulonglong)uStack_f0;
            uVar35 = (uint)lVar4;
            uVar31 = (uint)((longlong)iVar54 * (longlong)(int)uStack_e8);
            uVar15 = (uint)((longlong)(int)uVar14 * (longlong)iVar56);
            iVar37 = (int)((ulonglong)((longlong)(int)uVar14 * (longlong)iVar56) >> 0x20) -
                     ((int)((ulonglong)((longlong)iVar54 * (longlong)(int)uStack_e8) >> 0x20) +
                     (uint)(uVar15 < uVar31));
            uVar15 = uVar15 - uVar31 >> 8 | iVar37 * 0x1000000;
            lVar5 = (ulonglong)uVar15 * (ulonglong)uStack_f4;
            uVar51 = (uint)lVar5;
            uVar32 = (uint)((longlong)(int)uVar14 * (longlong)(int)uStack_ec);
            uVar31 = (uint)((longlong)(int)uVar13 * (longlong)(int)uStack_e8);
            iVar48 = (int)((ulonglong)((longlong)(int)uVar13 * (longlong)(int)uStack_e8) >> 0x20) -
                     ((int)((ulonglong)((longlong)(int)uVar14 * (longlong)(int)uStack_ec) >> 0x20) +
                     (uint)(uVar31 < uVar32));
            uVar31 = uVar31 - uVar32 >> 8 | iVar48 * 0x1000000;
            lVar6 = (ulonglong)uVar31 * (ulonglong)uStack_f8;
            uVar13 = (uint)lVar6;
            uVar14 = uVar13 + uVar51;
            iVar20 = uStack_f8 * (iVar48 >> 8) +
                     ((int)uStack_f8 >> 0x1f) * uVar31 + (int)((ulonglong)lVar6 >> 0x20) +
                     uStack_f4 * (iVar37 >> 8) +
                     ((int)uStack_f4 >> 0x1f) * uVar15 + (int)((ulonglong)lVar5 >> 0x20) +
                     (uint)CARRY4(uVar13,uVar51) +
                     uStack_f0 * (iVar20 >> 8) +
                     ((int)uStack_f0 >> 0x1f) * uVar18 + (int)((ulonglong)lVar4 >> 0x20) +
                     (uint)CARRY4(uVar14,uVar35);
            bVar63 = uVar14 + uVar35 != 0;
            if ((int)-(iVar20 + (uint)bVar63) < 0 !=
                (SBORROW4(0,iVar20) != SBORROW4(-iVar20,(uint)bVar63))) {
              bVar60 = true;
            }
            if (iVar20 < 0) {
              bVar64 = true;
            }
            if (psStack_dc == local_44) break;
            iVar20 = uVar33 + (uint)(puVar21 + (int)psStack_dc)[1] * 0x14;
            iVar37 = uVar33 + (uint)puVar21[(int)psStack_dc] * 0x14;
            psStack_dc = (short *)((int)psStack_dc + 1);
            iVar52 = *(int *)(iVar20 + 4) - *(int *)(iVar37 + 4);
            iVar54 = iVar56;
            uVar13 = uStack_ec;
            uVar14 = uStack_e8;
            uStack_ec = *(int *)(iVar20 + 8) - *(int *)(iVar37 + 8);
            uStack_e8 = *(int *)(iVar20 + 0xc) - *(int *)(iVar37 + 0xc);
          }
          if ((bool)(bVar60 & bVar64)) {
            iStack_8c = 3;
          }
          else if (bVar60) {
LAB_4a044cb8:
            iStack_8c = 2;
          }
          else {
            if (bVar64) goto LAB_4a044ed4;
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
      local_50 = local_2c + iVar39;
      do {
        if (uStack_d8 == 0) {
          iVar20 = 1;
          if (iStack_8c != 1) {
            iVar20 = iStack_8c;
          }
          if (iStack_8c == 1 || iVar20 == 3) {
            psStack_dc = (short *)(uStack_d4 + 1);
            iVar20 = 1;
            uVar13 = iVar39;
LAB_4a0452e0:
            puVar16 = *(undefined4 **)(*(int *)PTR_DAT_4a04516c + 0x398);
            puVar38 = puVar16 + 2;
            uVar14 = uStack_bc | 0x40000000;
            if (uStack_a4 == 0) {
              if (local_60 == (short *)0x0) {
                puVar28 = puVar16 + 3;
                *puVar38 = local_64;
              }
              else {
                puVar28 = puVar16 + 3;
                *puVar38 = *(uint *)(local_60 + (uint)*local_50 * 2);
              }
            }
            else {
              uVar14 = uStack_bc | 0x42000000;
              puVar28 = puVar38;
            }
            puVar38 = puVar28;
            if (bVar58) {
              uVar14 = uVar14 | 0x8000000;
              puVar38 = puVar28 + 1;
              *puVar28 = uVar11;
            }
            iVar37 = 0;
            if (uStack_a8 != 0) {
              uVar14 = uVar14 | 0x10000000;
            }
            if (bVar59) {
              uVar14 = uVar14 | 0x4000000;
            }
            puVar16[1] = uVar14 | uVar10 << 5;
            uVar45 = 0x3f;
            if ((short *)uVar13 != psStack_dc) {
              do {
                uVar14 = (uint)local_2c[uVar13];
                uVar13 = uVar13 + iVar20;
                puVar28 = puVar38;
                if (uStack_a4 != 0) {
                  if (local_60 == (short *)0x0) {
                    puVar28 = puVar38 + 1;
                    *puVar38 = local_64;
                  }
                  else {
                    puVar28 = puVar38 + 1;
                    *puVar38 = *(uint *)(local_60 + uVar14 * 2);
                  }
                }
                puVar30 = PTR_DAT_4a04516c;
                puVar21 = (ushort *)(uVar33 + uVar14 * 0x14);
                uVar9 = puVar21[8];
                uVar45 = uVar45 & uVar9;
                if (local_58[0x105] != 3) {
                  if ((uVar9 & 0xbf) == 0x80) {
                    puVar21[8] = uVar9 & 0xff7f;
                    iVar48 = *(int *)puVar30;
                    if ((uVar9 & 0x400) == 0) {
                      local_54 = *(uint *)(puVar21 + 6);
                      iVar52 = FUN_4a0015f0(*(int *)(puVar21 + 2) << 0xb,local_54);
                      uVar9 = (ushort)((uint)(*(int *)(iVar48 + 0x310) * iVar52 * 0x10) >> 0x10);
                      iVar52 = FUN_4a0015f0(*(int *)(puVar21 + 4) << 0xb,local_54);
                      uVar2 = (ushort)((uint)(*(int *)(iVar48 + 0x314) * iVar52 * 0x10) >> 0x10);
                    }
                    else {
                      uVar9 = (ushort)((uint)((*(int *)(iVar48 + 0x34c) * 8 + -1) *
                                              *(int *)(puVar21 + 2) * 8) >> 0x10);
                      uVar2 = (ushort)((uint)(*(int *)(puVar21 + 4) *
                                              (*(int *)(iVar48 + 0x350) * 8 + -1) * 8) >> 0x10);
                    }
                    iVar52 = *(int *)(iVar48 + 0x354);
                    if (iVar52 == 0) {
                      *puVar21 = uVar9;
                      puVar21[1] = uVar2;
                    }
                    else if (iVar52 == 1) {
                      *puVar21 = ~uVar2;
                      puVar21[1] = uVar9;
                    }
                    else {
                      if (iVar52 == 2) {
                        *puVar21 = ~uVar9;
                        uVar9 = uVar2;
                      }
                      else {
                        if (iVar52 != 3) goto LAB_4a0454f0;
                        *puVar21 = uVar2;
                      }
                      puVar21[1] = ~uVar9;
                    }
LAB_4a0454f0:
                    *puVar21 = (short)*(undefined4 *)(iVar48 + 800) + *puVar21;
                    puVar21[1] = (short)*(undefined4 *)(iVar48 + 0x328) + puVar21[1];
                  }
                  if (iVar37 == 0) {
                    iVar43 = *(int *)(puVar21 + 6);
                  }
                  else if (iVar43 < *(int *)(puVar21 + 6)) {
                    iVar43 = *(int *)(puVar21 + 6);
                  }
                }
                *puVar28 = (uint)puVar21;
                iVar37 = iVar37 + 1;
                puVar42 = puVar28 + 1;
                if (bVar58) {
                  iVar48 = *(int *)PTR_DAT_4a04516c;
                  puVar42 = puVar28 + 2;
                  puVar28[1] = (uint)*(ushort *)(iVar48 + 0x250) +
                               (uint)*(ushort *)(*(int *)(iVar48 + 0x468) + uVar14 * 4) & 0xffff |
                               ((uint)*(ushort *)(*(int *)(iVar48 + 0x468) + uVar14 * 4 + 2) +
                               (uint)*(ushort *)(iVar48 + 0x252)) * 0x10000;
                }
                puVar38 = puVar42;
                if (uStack_a8 != 0) {
                  puVar38 = puVar42 + 1;
                  *puVar42 = (uint)pbStack_ac[uVar14 * 2] << 4 |
                             (uint)pbStack_ac[uVar14 * 2 + 1] << 0x14;
                }
              } while ((short *)uVar13 != psStack_dc);
              if (uVar45 == 0) {
                if (local_58[0x105] != 3) {
                  if (local_58[0x145] == 0xffffffff) {
                    iVar20 = FUN_4a03b088(iVar43);
                    iVar48 = FUN_4a030140();
                    local_78 = (undefined *)(iVar48 + iVar20);
                  }
                  else {
                    local_78 = (undefined *)FUN_4a03b0cc();
                  }
                  uVar13 = local_58[0xeb];
                  puVar30 = local_78;
                  if ((int)(uVar13 - 1) < (int)local_78) {
                    puVar30 = (undefined *)(uVar13 - 1);
                  }
                  if ((int)puVar30 < 0) {
                    local_78 = (undefined *)0x0;
                  }
                  else if ((int)(uVar13 - 1) < (int)local_78) {
                    local_78 = (undefined *)(uVar13 - 1);
                  }
                }
                puVar30 = PTR_DAT_4a04516c;
                iVar20 = *(int *)PTR_DAT_4a04516c;
                *(uint **)(iVar20 + 0x398) = puVar38;
                puVar16[1] = puVar16[1] | iVar37 * 0x80000;
                *puVar16 = *(undefined4 *)(*(int *)(iVar20 + 0x39c) + (int)local_78 * 4);
                *(undefined4 **)(*(int *)(*(int *)puVar30 + 0x39c) + (int)local_78 * 4) = puVar16;
              }
            }
          }
        }
        else if (iStack_8c == 2 || iStack_8c == 3) {
          psStack_dc = (short *)(iVar39 + -1);
          iVar20 = -1;
          uVar13 = uStack_d4;
          goto LAB_4a0452e0;
        }
        uStack_d8 = uStack_d8 + 1;
      } while (uStack_d8 < 2);
    }
  }
  FUN_4a00d798();
  return;
}



// Address: 4a046d0c

int FUN_4a046d0c(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  thunk_FUN_4a161570(0xe8);
  puVar1 = (undefined4 *)FUN_4a0606b4();
  *(undefined2 *)(puVar1 + 3) = 0;
  *(undefined2 *)((int)puVar1 + 0xe) = 0;
  *puVar1 = PTR_PTR_4a046d38;
  iVar2 = FUN_4a1490e8(puVar1 + 4,PTR_FUN_4a046d3c,0x24,6);
  return iVar2 + -0x10;
}



// Address: 4a046d40

undefined4 FUN_4a046d40(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = FUN_4a135c66((int *)(param_1 + 0x20),param_2,0);
  if (iVar1 == 0) {
    for (uVar3 = 0; uVar3 < *(uint *)(param_1 + 0x24); uVar3 = uVar3 + 1) {
      iVar1 = FUN_4a046d40(*(undefined4 *)(*(int *)(param_1 + 0x20) + uVar3 * 4),param_2);
      if (iVar1 != 0) goto LAB_4a046d6a;
    }
    uVar2 = 0;
  }
  else {
LAB_4a046d6a:
    uVar2 = 1;
  }
  return uVar2;
}



// Address: 4a046d7e

undefined4 FUN_4a046d7e(void)

{
  return 0xe8;
}



// Address: 4a046d84

bool FUN_4a046d84(undefined4 *param_1,uint param_2)

{
  undefined *puVar1;
  void *configs;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  uint local_20;
  undefined4 *local_1c;
  uint uStack_18;
  
  puVar1 = PTR_DAT_4a046ff8;
  local_24 = 0;
  local_1c = param_1;
  uStack_18 = param_2;
  host_eglGetConfigs_thumb(*(void **)(PTR_DAT_4a046ff8 + 8),(void *)0x0,0,&local_24);
  configs = (void *)thunk_FUN_4a161570(local_24 << 2);
  local_28 = 0;
  host_eglGetConfigs_thumb(*(void **)(puVar1 + 8),configs,local_24,&local_28);
  local_2c = 0;
  local_30 = -1;
  iVar2 = host_s3eGLGetInt_thumb(0);
  local_34 = 1;
  if (iVar2 >> 8 != 1) {
    local_34 = 4;
  }
  for (iVar2 = 0; iVar2 < local_24; iVar2 = iVar2 + 1) {
    local_3c = 0;
    host_eglGetConfigAttrib_thumb
              (*(void **)(PTR_DAT_4a046ff8 + 8),*(void **)((int)configs + iVar2 * 4),0x3040,
               &local_3c);
    if ((local_3c & local_34) != 0) goto LAB_4a046e04;
  }
  local_34 = 0;
LAB_4a046e04:
  local_38 = 0;
  local_20 = param_2 & 1;
  do {
    if (local_24 <= local_38) {
      bVar4 = local_30 != -1;
      if (bVar4) {
        *local_1c = *(undefined4 *)((int)configs + local_2c * 4);
        thunk_FUN_4a161530(configs);
      }
      else {
        thunk_FUN_4a161530(configs);
      }
      return bVar4;
    }
    local_3c = 0;
    iVar2 = local_38 * 4;
    host_eglGetConfigAttrib_thumb
              (*(void **)(PTR_DAT_4a046ff8 + 8),*(void **)((int)configs + iVar2),0x3040,&local_3c);
    if (local_34 == 0) goto LAB_4a046e38;
    bVar4 = (local_3c & local_34) == 0;
    while (!bVar4) {
LAB_4a046e38:
      puVar1 = PTR_DAT_4a046ff8;
      local_40 = 0;
      host_eglGetConfigAttrib_thumb
                (*(void **)(PTR_DAT_4a046ff8 + 8),*(void **)((int)configs + iVar2),DAT_4a046ffc,
                 &local_40);
      local_44 = 0;
      host_eglGetConfigAttrib_thumb
                (*(void **)(puVar1 + 8),*(void **)((int)configs + iVar2),DAT_4a046ffc + -1,&local_44
                );
      local_48 = 0;
      host_eglGetConfigAttrib_thumb
                (*(void **)(puVar1 + 8),*(void **)((int)configs + iVar2),DAT_4a046ffc + -2,&local_48
                );
      bVar5 = SBORROW4(local_40,5);
      bVar4 = local_40 + -5 < 0;
      while( true ) {
        do {
          do {
            if (bVar4 != bVar5) goto LAB_4a046fbe;
            bVar5 = SBORROW4(local_44,6);
            bVar4 = local_44 + -6 < 0;
          } while (local_44 < 6);
          bVar5 = SBORROW4(local_48,5);
          bVar4 = local_48 + -5 < 0;
        } while (local_48 < 5);
        local_4c = 0;
        host_eglGetConfigAttrib_thumb
                  (*(void **)(PTR_DAT_4a046ff8 + 8),*(void **)((int)configs + iVar2),
                   DAT_4a046ffc + 3,&local_4c);
        bVar4 = true;
        if (local_4c == DAT_4a046ffc + 0x2c) break;
        local_50 = 0;
        host_eglGetConfigAttrib_thumb
                  (*(void **)(PTR_DAT_4a046ff8 + 8),*(void **)((int)configs + iVar2),
                   DAT_4a046ffc + 1,&local_50);
        bVar5 = SBORROW4(local_50,0x10);
        bVar4 = local_50 + -0x10 < 0;
        if (0xf < local_50) {
          local_54 = 0;
          host_eglGetConfigAttrib_thumb
                    (*(void **)(PTR_DAT_4a046ff8 + 8),*(void **)((int)configs + iVar2),
                     DAT_4a046ffc + -3,&local_54);
          local_58 = 0;
          host_eglGetConfigAttrib_thumb
                    (*(void **)(PTR_DAT_4a046ff8 + 8),*(void **)((int)configs + iVar2),
                     DAT_4a046ffc + 2,&local_58);
          if ((int)(param_2 << 0x1e) < 0) {
            if ((local_54 != 0) != local_20) goto LAB_4a046fbe;
            local_60 = 0;
            host_eglGetConfigAttrib_thumb
                      (*(void **)(PTR_DAT_4a046ff8 + 8),*(void **)((int)configs + iVar2),
                       DAT_4a046ffc + 8,&local_60);
            if (local_60 == 0) goto LAB_4a046fbe;
            iVar3 = host_s3eGLGetInt_thumb(1);
            if (0x100 < iVar3) {
              local_64 = 0;
              if ((param_2 & 1) == 0) {
                iVar3 = DAT_4a046ffc + 0x15;
              }
              else {
                iVar3 = DAT_4a046ffc + 0x16;
              }
              host_eglGetConfigAttrib_thumb
                        (*(void **)(PTR_DAT_4a046ff8 + 8),*(void **)((int)configs + iVar2),iVar3,
                         &local_64);
              if (local_64 == 0) goto LAB_4a046fbe;
            }
          }
          else {
            local_60 = 0;
            host_eglGetConfigAttrib_thumb
                      (*(void **)(PTR_DAT_4a046ff8 + 8),*(void **)((int)configs + iVar2),
                       DAT_4a046ffc + 0xf,&local_60);
            if (-1 < local_60 << 0x1d) goto LAB_4a046fbe;
          }
          iVar3 = 0;
          if ((uint)(local_40 == 8) == (param_2 & 7) >> 2) {
            iVar3 = 2;
          }
          local_5c = 0;
          host_eglGetConfigAttrib_thumb
                    (*(void **)(PTR_DAT_4a046ff8 + 8),*(void **)((int)configs + iVar2),
                     DAT_4a046ffc + 0xe,&local_5c);
          if (local_5c == 2) {
            iVar2 = param_2 << 0x1c;
LAB_4a046f92:
            if (iVar2 < 0) {
              iVar3 = iVar3 + 4;
            }
          }
          else if (local_5c == 4) {
            iVar2 = param_2 << 0x1b;
            goto LAB_4a046f92;
          }
          if ((local_54 != 0) == local_20) {
            iVar3 = iVar3 + 8;
          }
          if ((local_58 != 0) && ((int)(param_2 << 0x1a) < 0)) {
            iVar3 = iVar3 + 0x10;
          }
          if (local_30 < iVar3) {
            local_2c = local_38;
            local_30 = iVar3;
          }
          goto LAB_4a046fbe;
        }
      }
    }
LAB_4a046fbe:
    local_38 = local_38 + 1;
  } while( true );
}



// Address: 4a047000

void FUN_4a047000(void)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_18;
  
  puVar1 = PTR_DAT_4a0470e0;
  uVar3 = 0;
  *(undefined4 *)(PTR_DAT_4a0470e0 + 0x20) = 0;
  do {
    uVar4 = 1 << (uVar3 & 0xff);
    local_18 = (uint)((*(uint *)(puVar1 + 0x20) & uVar4) != 0);
    if (uVar3 == 0) {
      iVar2 = host_s3eConfigGetInt_thumb(&DAT_4a0470fc,s_GlesFrameBuffNoAlpha_4a0470e4,&local_18);
      if (iVar2 == 0) {
        local_18 = (uint)(local_18 == 0);
      }
    }
    else {
      host_s3eConfigGetInt_thumb
                (&DAT_4a0470fc,*(undefined4 *)(PTR_DAT_4a0470e0 + uVar3 * 4 + 0x24),&local_18);
    }
    host_s3eConfigGetInt_thumb
              (&DAT_4a047100,*(undefined4 *)(PTR_DAT_4a0470e0 + uVar3 * 4 + 0x24),&local_18);
    if (local_18 == 0) {
      *(uint *)(puVar1 + 0x20) = *(uint *)(puVar1 + 0x20) & ~uVar4;
    }
    else {
      *(uint *)(puVar1 + 0x20) = uVar4 | *(uint *)(puVar1 + 0x20);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  if ((*(uint *)(puVar1 + 0x20) & 1) != 0) {
    host_glColorMask_thumb('\x01','\x01','\x01','\x01');
    host_glClearColor_thumb(0.0,0.0,0.0,1.0);
    host_glClear_thumb(0x4000);
    host_eglSwapBuffers_thumb(*(void **)(puVar1 + 8),*(void **)(puVar1 + 0xc));
    host_glClearColor_thumb(0.0,0.0,0.0,1.0);
    host_glClear_thumb(0x4000);
  }
  if (*(int *)(puVar1 + 0x20) << 0x1d < 0) {
    host_s3eSurfaceRegister_thumb(1,PTR_FUN_4a04838c_1_4a047104,0);
  }
  if (*(int *)(puVar1 + 0x20) << 0x1c < 0) {
    host_s3eDeviceRegister_thumb(1,PTR_FUN_4a04838c_1_4a047104,0);
  }
  return;
}



// Address: 4a047108

undefined4 FUN_4a047108(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  bool bVar7;
  
  puVar1 = PTR_DAT_4a0471c0;
  iVar4 = -1;
  iVar6 = -1;
  if (param_2 != 0) {
    do {
      param_2 = param_2 + -1;
      iVar2 = *(int *)(param_1 + param_2 * 0x10);
      if (iVar2 != -1) {
        bVar7 = iVar2 == iVar6;
        if (bVar7) {
          iVar2 = *(int *)(param_1 + param_2 * 0x10 + 4);
        }
        if (!bVar7 || iVar2 != iVar4) {
          iVar4 = *(int *)puVar1;
          puVar3 = *(undefined4 **)(iVar4 + 0x398);
          *(undefined4 **)(iVar4 + 0x398) = puVar3 + 3;
          puVar5 = (ushort *)(param_1 + param_2 * 0x10);
          puVar3[1] = (uint)*puVar5 | (uint)puVar5[1] << 0xc | 0x60000000;
          puVar3[2] = *(undefined4 *)(puVar5 + 2);
          *puVar3 = *(undefined4 *)(*(int *)(iVar4 + 0x39c) + param_2 * 4);
          *(undefined4 **)(*(int *)(*(int *)puVar1 + 0x39c) + param_2 * 4) = puVar3;
          iVar6 = *(int *)(puVar5 + 4);
          iVar4 = *(int *)(puVar5 + 6);
        }
      }
    } while (param_2 != 0);
    if (iVar6 != -1) {
      return 1;
    }
  }
  return 0;
}



// Address: 4a0471c4

void FUN_4a0471c4(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  if ((int)param_2 < 1) {
    return;
  }
  puVar1 = (undefined4 *)(param_1 + -0x10);
  for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar1 = puVar1 + 4;
    *puVar1 = 0xffffffff;
  }
  iVar2 = (int)param_2 >> 2;
  if (iVar2 != 0) {
    do {
      puVar1[4] = 0xffffffff;
      puVar1[8] = 0xffffffff;
      puVar1[0xc] = 0xffffffff;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + 0x10;
      *puVar1 = 0xffffffff;
    } while (iVar2 != 0);
    return;
  }
  return;
}



// Address: 4a047210

void FUN_4a047210(void)

{
  undefined *puVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)PTR_DAT_4a047244;
  *puVar2 = puVar2[0xda] & 0x40 | *puVar2;
  puVar1 = PTR_DAT_4a04724c;
  *(undefined **)(PTR_DAT_4a04724c + 0x54) = PTR_FUN_4a05161c_1_4a047248;
  *(undefined **)(puVar1 + 0x94) = PTR_FUN_4a04e3f0_1_4a047250;
  return;
}



// Address: 4a047258

void FUN_4a047258(void)

{
  undefined *puVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)PTR_DAT_4a04728c;
  *puVar2 = puVar2[0xda] & 8 | *puVar2;
  puVar1 = PTR_DAT_4a047294;
  *(undefined **)(PTR_DAT_4a047294 + 0x18) = PTR_FUN_4a047290;
  *(undefined **)(puVar1 + 0x1c) = PTR_DAT_4a047298;
  return;
}



// Address: 4a0472a0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0472a0(void)

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
  
  iVar3 = *(int *)PTR_DAT_4a0473d0;
  iVar5 = *(int *)(iVar3 + 0x34c);
  iVar9 = *(int *)(iVar3 + 0x350);
  iVar7 = *(int *)(iVar3 + 0x33c);
  iVar8 = *(int *)(iVar3 + 0x340);
  iVar4 = *(int *)(iVar3 + 0x354);
  iVar1 = (*(int *)(iVar3 + 0x318) >> 3) - (iVar5 >> 1);
  iVar10 = (*(int *)(iVar3 + 0x31c) >> 3) - (iVar9 >> 1);
  iVar2 = iVar1;
  iVar6 = iVar5;
  if ((*(uint *)(iVar3 + 4) & 0x200) == 0) {
    if (iVar4 == 0) {
      iVar10 = iVar8 - (iVar10 + iVar9);
    }
    else if (iVar4 == 1) {
      iVar2 = iVar7 - (iVar10 + iVar9);
      iVar10 = iVar8 - (iVar1 + iVar5);
      iVar6 = iVar9;
      iVar9 = iVar5;
    }
    else if (iVar4 == 2) {
      iVar2 = iVar7 - (iVar1 + iVar5);
    }
    else {
      iVar2 = iVar10;
      iVar10 = iVar1;
      iVar6 = iVar9;
      iVar9 = iVar5;
      if (iVar4 != 3) {
        return;
      }
    }
  }
  else if (iVar4 != 0) {
    if (iVar4 == 1) {
      iVar2 = iVar7 - (iVar10 + iVar9);
      iVar10 = iVar1;
      iVar6 = iVar9;
      iVar9 = iVar5;
    }
    else if (iVar4 == 2) {
      iVar2 = iVar7 - (iVar1 + iVar5);
      iVar10 = iVar8 - (iVar10 + iVar9);
    }
    else {
      if (iVar4 != 3) {
        return;
      }
      iVar2 = iVar10;
      iVar10 = iVar8 - (iVar1 + iVar5);
      iVar6 = iVar9;
      iVar9 = iVar5;
    }
  }
  iVar1 = *(int *)PTR_DAT_4a150dbc;
  if (iVar2 == 0 && iVar10 == 0) {
    if (iVar6 + iVar9 == *(int *)(iVar1 + 0x20) + *(int *)(iVar1 + 0x24)) {
      iVar6 = *(int *)(iVar1 + 0x20);
      iVar9 = *(int *)(iVar1 + 0x24);
    }
  }
  *(int *)(iVar1 + 0x10) = iVar2;
  *(int *)(iVar1 + 0x14) = iVar10;
  *(int *)(iVar1 + 0x18) = iVar6;
  *(int *)(iVar1 + 0x1c) = iVar9;
  return;
}



// Address: 4a0473d4

void FUN_4a0473d4(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar5 = 0;
  local_2c = 0;
  piVar1 = *(int **)PTR_DAT_4a04752c;
  if (*piVar1 < 0) {
    iVar6 = piVar1[0xc2];
    uVar5 = thunk_FUN_4a171fac(iVar6);
    local_24 = thunk_FUN_4a171bb8(0x46000000,uVar5);
    iVar2 = piVar1[0xc3];
    uVar3 = thunk_FUN_4a171fac();
    local_28 = thunk_FUN_4a171bb8(0x46000000,uVar3);
    uVar4 = thunk_FUN_4a171fac(iVar6 / 2 + piVar1[0xc0]);
    uVar4 = thunk_FUN_4a17211c(uVar4,0xc6000000);
    local_2c = thunk_FUN_4a171bb8(uVar4,uVar5);
    uVar5 = thunk_FUN_4a171fac(iVar2 / 2 + piVar1[0xc1]);
    uVar5 = thunk_FUN_4a17211c(uVar5,0xc6000000);
    uVar5 = thunk_FUN_4a171bb8(uVar5,uVar3);
  }
  else {
    uVar3 = thunk_FUN_4a171fac(piVar1[0xcc]);
    uVar3 = thunk_FUN_4a17295c(uVar3,0xfffffff4);
    local_24 = thunk_FUN_4a17295c(uVar3,6);
    uVar3 = thunk_FUN_4a171fac(piVar1[0xcd]);
    uVar3 = thunk_FUN_4a17295c(uVar3,0xfffffff4);
    local_28 = thunk_FUN_4a17295c(uVar3,6);
  }
  uVar3 = thunk_FUN_4a171fac(piVar1[0xcb]);
  uVar3 = thunk_FUN_4a17295c(uVar3,0xfffffff4);
  uVar3 = thunk_FUN_4a17295c(uVar3,6);
  uVar4 = thunk_FUN_4a17211c(*param_1,local_24);
  *param_2 = uVar4;
  uVar4 = thunk_FUN_4a17211c(param_1[3],local_24);
  param_2[3] = uVar4;
  uVar4 = thunk_FUN_4a17211c(param_1[6],local_24);
  param_2[6] = uVar4;
  uVar4 = thunk_FUN_4a17211c(param_1[1],local_28);
  param_2[1] = uVar4;
  uVar4 = thunk_FUN_4a17211c(param_1[4],local_28);
  param_2[4] = uVar4;
  uVar4 = thunk_FUN_4a17211c(param_1[7],local_28);
  param_2[7] = uVar4;
  uVar4 = thunk_FUN_4a17211c(param_1[2],uVar3);
  param_2[2] = uVar4;
  uVar4 = thunk_FUN_4a17211c(param_1[5],uVar3);
  param_2[5] = uVar4;
  uVar4 = thunk_FUN_4a17211c(param_1[8],uVar3);
  param_2[8] = uVar4;
  uVar4 = thunk_FUN_4a17211c(param_1[9],local_24);
  uVar4 = thunk_FUN_4a171a94(uVar4,local_2c);
  param_2[9] = uVar4;
  uVar4 = thunk_FUN_4a17211c(param_1[10],local_28);
  uVar5 = thunk_FUN_4a171a94(uVar4,uVar5);
  param_2[10] = uVar5;
  uVar5 = thunk_FUN_4a17211c(param_1[0xb],uVar3);
  param_2[0xb] = uVar5;
  return;
}



// Address: 4a047530

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a047530(uint param_1)

{
  undefined *puVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  
  puVar1 = PTR_DAT_4a0475ac;
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
  iVar4 = *(int *)puVar1;
  *(uint *)(iVar4 + 0x354) = param_1;
  if ((param_1 & 1) == 0) {
    *(undefined4 *)(iVar4 + 0x344) = *(undefined4 *)(iVar4 + 0x33c);
    iVar6 = *(int *)(iVar4 + 0x340);
  }
  else {
    *(undefined4 *)(iVar4 + 0x344) = *(undefined4 *)(iVar4 + 0x340);
    iVar6 = *(int *)(iVar4 + 0x33c);
  }
  *(int *)(iVar4 + 0x348) = iVar6;
  puVar1 = PTR_DAT_4a03b170;
  iVar8 = *(int *)(iVar4 + 0x344);
  iVar7 = *(int *)PTR_DAT_4a03b170;
  iVar4 = iVar6 * 4;
  bVar12 = *(int *)(iVar7 + 0x34c) == iVar8;
  iVar2 = iVar4;
  if (bVar12) {
    iVar2 = *(int *)(iVar7 + 0x350);
  }
  bVar13 = bVar12 && iVar2 == iVar6;
  if (bVar12 && iVar2 == iVar6) {
    bVar13 = *(int *)(iVar7 + 0x318) == iVar8 * 4;
  }
  bVar12 = false;
  if (bVar13) {
    bVar12 = *(int *)(iVar7 + 0x31c) == iVar4;
  }
  if (bVar12) {
    return;
  }
  if (*(int *)(PTR_DAT_4a03b174 + 0x28) != 0 && *(int *)(iVar7 + 0x34c) != 0) {
    FUN_4a05a618();
  }
  iVar2 = *(int *)puVar1;
  *(int *)(iVar2 + 0x318) = iVar8 * 4;
  *(int *)(iVar2 + 0x31c) = iVar4;
  *(int *)(iVar2 + 0x34c) = iVar8;
  *(int *)(iVar2 + 0x350) = iVar6;
  iVar2 = *(int *)PTR_DAT_4a04d43c;
  iVar7 = *(int *)(iVar2 + 0x34c);
  iVar4 = *(int *)(iVar2 + 0x350);
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
      iVar6 = iVar4;
      iVar4 = iVar7;
      goto LAB_4a047eac;
    }
    if (iVar8 != 2) {
      if (iVar8 == 3) {
        *(undefined4 *)(iVar2 + 800) = *(undefined4 *)(iVar2 + 0x31c);
        *(int *)(iVar2 + 0x324) = *(int *)(iVar2 + 0x340) * 8 - *(int *)(iVar2 + 0x318);
        iVar6 = iVar4;
        iVar4 = iVar7;
      }
      goto LAB_4a047eac;
    }
    *(int *)(iVar2 + 800) = *(int *)(iVar2 + 0x33c) * 8 - *(int *)(iVar2 + 0x318);
    iVar7 = *(int *)(iVar2 + 0x340) * 8 - *(int *)(iVar2 + 0x31c);
  }
  *(int *)(iVar2 + 0x324) = iVar7;
LAB_4a047eac:
  iVar7 = *(int *)(iVar2 + 0x324) >> (*(uint *)(iVar2 + 0x66c) & 0xff);
  iVar4 = iVar4 >> (*(uint *)(iVar2 + 0x66c) & 0xff);
  iVar8 = iVar7 + iVar4 * -4;
  *(int *)(iVar2 + 0x328) = iVar7;
  iVar7 = iVar7 + iVar4 * 4;
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
  iVar4 = *(int *)(iVar2 + 0x34c);
  iVar6 = *(int *)(iVar2 + 0x350);
  if ((*(uint *)(iVar2 + 0x354) & 1) == 0) {
    iVar6 = iVar6 >> (*(uint *)(iVar2 + 0x66c) & 0xff);
  }
  else {
    iVar4 = iVar4 >> (*(uint *)(iVar2 + 0x66c) & 0xff);
  }
  uVar5 = FUN_4a0015f0(0x1000000,iVar4 << 5);
  *(undefined4 *)(iVar2 + 0x330) = uVar5;
  iVar7 = FUN_4a0015f0(0x1000000,iVar6 << 5);
  *(int *)(iVar2 + 0x334) = iVar7;
  if ((*(uint *)(iVar2 + 0x354) & 1) == 0) {
    *(int *)(iVar2 + 0x334) = iVar7 >> (*(uint *)(iVar2 + 0x66c) & 0xff);
  }
  else {
    *(int *)(iVar2 + 0x330) = *(int *)(iVar2 + 0x330) >> (*(uint *)(iVar2 + 0x66c) & 0xff);
  }
  uVar5 = FUN_4a0015f0(0x40000,*(undefined4 *)(iVar2 + 0x2dc));
  *(undefined4 *)(iVar2 + 0x32c) = uVar5;
  iVar7 = FUN_4a02afd0(*(int *)(iVar2 + 0x2dc) * *(int *)(iVar2 + 0x2dc) +
                       ((int)(iVar4 * iVar4 + ((uint)(iVar4 * iVar4 >> 0x1f) >> 0x1e)) >> 2));
  *(int *)(iVar2 + 0x2e0) = iVar7 >> 6;
  iVar7 = FUN_4a02afd0(*(int *)(iVar2 + 0x2dc) * *(int *)(iVar2 + 0x2dc) +
                       ((int)(iVar6 * iVar6 + ((uint)(iVar6 * iVar6 >> 0x1f) >> 0x1e)) >> 2));
  uVar5 = *(undefined4 *)(iVar2 + 0x2dc);
  iVar8 = FUN_4a0015f0(*(int *)(iVar2 + 0x2e0) << 0xc,uVar5);
  iVar7 = FUN_4a0015f0((iVar7 >> 6) << 0xc,uVar5);
  *(int *)(iVar2 + 0x2e0) = iVar8 * *(int *)(iVar2 + 0x330) >> 0xc;
  *(int *)(iVar2 + 0x2e4) = *(int *)(iVar2 + 0x334) * iVar7 >> 0xc;
  *(int *)(iVar2 + 0x314) = iVar6 * 8 + -1;
  *(int *)(iVar2 + 0x310) = iVar4 * 8 + -1;
  iVar6 = *(int *)(iVar2 + 0x2c8);
  iVar4 = iVar6 * *(int *)(iVar2 + 0x32c) >> 0xc;
  *(int *)(iVar2 + 0x2d0) = iVar4;
  if (iVar4 < 6) {
    iVar4 = 5;
  }
  *(int *)(iVar2 + 0x2d0) = iVar4;
  iVar10 = *(int *)(iVar2 + 0x2cc);
  iVar7 = iVar10 * *(int *)(iVar2 + 0x32c) >> 0xc;
  iVar4 = iVar7 - iVar4;
  *(int *)(iVar2 + 0x2d4) = iVar7;
  uVar5 = FUN_4a0015f0((iVar10 - iVar6) * 0x1000,iVar4 * 0x40);
  *(undefined4 *)(iVar2 + 0x3c8) = uVar5;
  uVar5 = FUN_4a0015f0(iVar4 * 0x8000,iVar10 - iVar6);
  *(undefined4 *)(iVar2 + 0x3d0) = uVar5;
  iVar9 = *(int *)PTR_DAT_4a03ebbc;
  iVar8 = *(int *)(iVar9 + 0x32c);
  iVar7 = *(int *)(iVar9 + 0x3ac);
  iVar4 = iVar8 * iVar6 >> 0xc;
  iVar2 = iVar8 * iVar10 >> 0xc;
  if (iVar4 < 5) {
    iVar4 = 5;
  }
  iVar11 = *(int *)(iVar9 + 0x3e0);
  if (*(uint *)(iVar9 + 1000) != 0xffffffff) {
    iVar7 = iVar2 >> (*(uint *)(iVar9 + 1000) & 0xff);
  }
  if (iVar11 == 0) {
    iVar11 = *(int *)(iVar9 + 0x3e4);
    if (*(int *)(iVar9 + 0x2cc) + iVar11 != *(int *)(iVar9 + 0x2c8)) {
      uVar5 = FUN_4a0015f0(iVar7 << 0xc,((iVar2 + (iVar11 * iVar8 >> 0xc)) - iVar4) * 0x40);
      *(undefined4 *)(iVar9 + 0x3cc) = uVar5;
      uVar5 = FUN_4a0015f0(iVar7 << 0xc,(iVar10 + iVar11) - iVar6);
      *(undefined4 *)(iVar9 + 0x3d4) = uVar5;
    }
    if (iVar7 != 0) {
      uVar5 = FUN_4a0015f0(((iVar2 + (iVar11 * *(int *)(iVar9 + 0x32c) >> 0xc)) - iVar4) * 0x8000,
                           iVar7);
      *(undefined4 *)(iVar9 + 0x3d8) = uVar5;
      uVar5 = FUN_4a0015f0(((iVar10 + iVar11) - iVar6) * 0x1000,iVar7);
      *(undefined4 *)(iVar9 + 0x3dc) = uVar5;
    }
  }
  else {
    iVar8 = iVar7 - iVar11;
    uVar5 = FUN_4a0015f0(iVar8 * 0x1000,(iVar2 - iVar4) * 0x40);
    *(undefined4 *)(iVar9 + 0x3cc) = uVar5;
    uVar5 = FUN_4a0015f0(iVar8 * 0x1000,iVar10 - iVar6);
    *(undefined4 *)(iVar9 + 0x3d4) = uVar5;
    if (iVar7 != iVar11) {
      uVar5 = FUN_4a0015f0((iVar2 - iVar4) * 0x8000,iVar8);
      *(undefined4 *)(iVar9 + 0x3d8) = uVar5;
      uVar5 = FUN_4a0015f0((iVar10 - iVar6) * 0x1000,iVar8);
      *(undefined4 *)(iVar9 + 0x3dc) = uVar5;
    }
  }
  if (*(int *)(iVar9 + 0x3cc) != 0) {
    iVar6 = FUN_4a0015f0(iVar7 << 0xc);
    *(int *)(iVar9 + 0x2d8) = iVar6 + iVar4 * 0x40 >> 6;
    return;
  }
  *(int *)(iVar9 + 0x2d8) = iVar2;
  return;
}



// Address: 4a0475bc

void FUN_4a0475bc(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  puVar1 = PTR_DAT_4a04762c;
  bVar5 = *(int *)PTR_DAT_4a04762c != 0;
  iVar3 = 0;
  if (bVar5) {
    iVar3 = *(int *)(PTR_DAT_4a04762c + 4);
  }
  bVar6 = iVar3 != 0;
  iVar4 = iVar3;
  if (bVar5 && bVar6) {
    iVar4 = *(int *)(PTR_DAT_4a04762c + 0x5c);
    iVar3 = iVar4 + -2;
  }
  if (iVar3 < 0 != ((bVar5 && bVar6) && SBORROW4(iVar4,2))) {
    iVar4 = iVar4 + 1;
    *(int *)(PTR_DAT_4a04762c + 0x5c) = iVar4;
    puVar2 = PTR_DAT_4a047630;
    *(undefined4 *)(PTR_DAT_4a047630 + iVar4 * 8 + 4) = *(undefined4 *)(puVar1 + 0x2c);
    if ((param_1 & 1) == 0) {
      iVar3 = *(int *)(PTR_DAT_4a04762c + 0x14) << 1;
    }
    else {
      iVar3 = *(int *)(PTR_DAT_4a04762c + 0x14) * 2 + -1;
    }
    *(int *)(puVar2 + iVar4 * 8) = iVar3;
    *(undefined4 *)(puVar1 + 0x5c) = 0xffffffff;
    FUN_4a041aa0();
    *(int *)(puVar1 + 0x5c) = iVar4;
    return;
  }
  return;
}



// Address: 4a047638

void FUN_4a047638(void)

{
  return;
}



// Address: 4a04764c

void FUN_4a04764c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_4a01d924(param_2,0xffffffff);
  FUN_4a0331f8(param_1,uVar1);
  iVar2 = FUN_4a057044();
  FUN_4a1652c6(uVar1,*(undefined4 *)(iVar2 + 8));
  return;
}



// Address: 4a04767c

undefined4 FUN_4a04767c(void)

{
  return 0;
}



// Address: 4a047684

void FUN_4a047684(void)

{
  *(undefined **)(PTR_PTR_4a047698 + 0x9c) = PTR_FUN_4a047694;
  return;
}



// Address: 4a047744

void FUN_4a047744(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  
  iVar6 = *(int *)PTR_DAT_4a047824;
  iVar1 = FUN_4a0066d8(*(undefined4 *)(param_2 + 8),param_3);
  local_24 = (short)(*(int *)(iVar6 + 0x318) >> 3) - (short)(*(uint *)(iVar6 + 0x34c) >> 1);
  local_22 = (short)(*(int *)(iVar6 + 0x31c) >> 3) - (short)(*(uint *)(iVar6 + 0x350) >> 1);
  local_20 = (short)*(undefined4 *)(iVar6 + 0x34c);
  local_1e = (short)*(undefined4 *)(iVar6 + 0x350);
  FUN_4a0d4128(&local_24,*(undefined4 *)(iVar6 + 0x354),*(undefined4 *)(iVar6 + 0x33c),
               *(undefined4 *)(iVar6 + 0x340));
  local_22 = FUN_4a0015f0((int)local_22,(int)(short)param_3);
  iVar6 = (int)local_22;
  iVar7 = (int)local_20;
  iVar2 = FUN_4a0015f0((int)local_1e,param_3);
  uVar3 = *(uint *)(param_2 + 0xc);
  iVar4 = *(int *)(param_2 + 0x10);
  iVar5 = *(int *)(param_2 + 8);
  param_1[1] = iVar2;
  param_1[2] = iVar1;
  param_1[3] = uVar3;
  param_1[4] = iVar6 * iVar5 + (int)local_24 * ((uVar3 & 0x70) >> 4) + iVar4;
  *param_1 = iVar7;
  return;
}



// Address: 4a0478d8

int FUN_4a0478d8(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)**(int **)PTR_DAT_4a0478fc;
  piVar2 = piVar1 + (*(int **)PTR_DAT_4a0478fc)[1] * 3;
  while( true ) {
    if (piVar1 == piVar2) {
      return 0;
    }
    if (*piVar1 == param_1) break;
    piVar1 = piVar1 + 3;
  }
  return piVar1[2];
}



// Address: 4a047900

undefined4 FUN_4a047900(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_a8 [128];
  int local_28 [3];
  undefined4 uStack_1c;
  undefined4 local_18;
  
  local_28[2] = param_1;
  uStack_1c = param_2;
  local_18 = param_3;
  iVar3 = FUN_4a0015c0(param_2,&DAT_4a0479dc);
  if ((iVar3 == 0) && (iVar3 = FUN_4a0015c0(param_2,&DAT_4a0479e0), iVar3 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  puVar2 = PTR_DAT_4a0479e4;
  if (bVar1) {
    piVar4 = *(int **)(PTR_DAT_4a0479e4 + 4);
    if (piVar4 != (int *)0x0) {
      for (; *piVar4 != 0; piVar4 = piVar4 + 1) {
        FUN_4a0012bc(local_18);
        FUN_4a001538(local_18,&DAT_4a0479e8);
        FUN_4a00ba22(param_1,auStack_a8,1);
        FUN_4a001538(local_18,auStack_a8);
        iVar3 = host_s3eFileCheckExists_thumb(local_18);
        if (iVar3 != 0) {
          return 1;
        }
      }
    }
    piVar4 = *(int **)puVar2;
  }
  else {
    if (*(int *)(PTR_DAT_4a0479e4 + 8) == 0) goto LAB_4a0479d2;
    local_28[0] = *(int *)(PTR_DAT_4a0479e4 + 8);
    piVar4 = local_28;
    local_28[1] = 0;
  }
  if (piVar4 != (int *)0x0) {
    for (; *piVar4 != 0; piVar4 = piVar4 + 1) {
      FUN_4a0012bc(local_18);
      FUN_4a001538(local_18,&DAT_4a0479e8);
      FUN_4a001538(local_18,param_1);
      if (!bVar1) {
        FUN_4a00b998(local_18,auStack_a8);
        FUN_4a03349c(auStack_a8);
        return 1;
      }
      iVar3 = host_s3eFileCheckExists_thumb(local_18);
      if (iVar3 != 0) {
        return 1;
      }
    }
  }
  if ((bVar1) && (iVar3 = host_s3eFileCheckExists_thumb(param_1), iVar3 == 0)) {
    return 0;
  }
LAB_4a0479d2:
  FUN_4a0012bc(local_18,param_1);
  return 1;
}



// Address: 4a0479ec

void FUN_4a0479ec(void)

{
  if (*(int *)(PTR_DAT_4a047a00 + 4) != 0) {
    FUN_4a09bba8();
  }
  return;
}



// Address: 4a047a04

void FUN_4a047a04(void)

{
  if (*(int *)(PTR_DAT_4a047a18 + 4) != 0) {
    FUN_4a09b240();
  }
  return;
}



// Address: 4a047a1c

void FUN_4a047a1c(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_4a047a50;
  iVar2 = FUN_4a1652c8(*(int **)(PTR_DAT_4a047a50 + 8),param_1,
                       *(undefined4 *)(**(int **)(PTR_DAT_4a047a50 + 8) + 0x10));
  if (iVar2 == 0) {
    FUN_4a1652c6(param_1,*(undefined4 *)(PTR_DAT_4a047a54 + 8));
  }
  else {
    FUN_4a1652c8(*(int **)(puVar1 + 8),param_1,*(undefined4 *)(**(int **)(puVar1 + 8) + 8));
  }
  return;
}



// Address: 4a047a58

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_4a047a58(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iStack_20;
  int aiStack_1c [2];
  
  puVar1 = PTR_DAT_4a047b84;
  if (*PTR_DAT_4a047b84 == '\0' && PTR_DAT_4a047b84[1] == '\0') {
    iVar2 = host_s3eGLGetInt_thumb(2);
    aiStack_1c[0] = iVar2;
    host_s3eConfigGetInt_thumb(&DAT_4a047b9c,s_useGLContextShadow_4a047b88,aiStack_1c);
    if (aiStack_1c[0] != 0 || iVar2 != 0) {
      iStack_20 = 0;
      host_s3eConfigGetInt_thumb(&DAT_4a047b9c,s_useLegacyContextShadow_4a047ba0,&iStack_20);
      if (iStack_20 != 0) {
        FUN_4a00ae50(10,0);
        FUN_4a00ae50(0xb,0);
        FUN_4a00ae50(0xc,0);
        FUN_4a00ae50(0xd,0);
        host_s3eConfigGetInt_thumb(&DAT_4a047b9c,s_ShadowSurfaces_4a047bb8,puVar1 + 4);
        *(undefined **)(*(int *)PTR_DAT_4a047bc8 + 0x674) = PTR_FUN_4a055ad0_1_4a047bcc;
        FUN_4a00ada8(0,PTR_FUN_4a04c8ac_1_4a047bd0);
        FUN_4a00ada8(1,PTR_FUN_4a048d10_1_4a047bd4,0);
        iVar6 = aiStack_1c[0];
        *puVar1 = 1;
        if (aiStack_1c[0] != 0) {
          puVar1[1] = 1;
          uVar3 = host_s3eMemoryGetInt_thumb(0);
          uVar4 = FUN_4a00b94c();
          FUN_4a00b958(0);
          if (iVar2 == 0) {
            iVar6 = iVar6 + -0x3b8;
            if (iVar6 < 1) {
              FUN_4a008004(s_Context_shadow_must_be_over___d__4a047bd8);
              iVar2 = host_s3eDebugIsDebuggerPresent_thumb();
              if (iVar2 != 0) {
                _DAT_fffffff4 = 0;
              }
            }
            uVar5 = FUN_4a161570(iVar6);
            *(undefined4 *)(puVar1 + 0xc) = uVar5;
            uVar5 = thunk_FUN_4a161570(0x398);
            uVar5 = FUN_4a0a5ce0(uVar5,*(undefined4 *)(puVar1 + 0xc),iVar6,s_ContextShadow_4a047bfc)
            ;
            *(undefined4 *)(puVar1 + 8) = uVar5;
          }
          else {
            *(undefined4 *)(*(int *)PTR_DAT_4a047bc8 + 0x674) = 0;
            host_s3eMemoryHeapCreate_thumb(6);
            host_s3eMemorySetInt_thumb(0,6);
            host_s3eMemoryGetInt_thumb(2);
          }
          host_s3eMemorySetInt_thumb(0,uVar3);
          FUN_4a00b958(uVar4);
        }
      }
    }
  }
  return;
}



// Address: 4a047a60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_4a047a60(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int local_20;
  int local_1c [2];
  
  puVar1 = PTR_DAT_4a047b84;
  if (*PTR_DAT_4a047b84 == '\0' && PTR_DAT_4a047b84[1] == '\0') {
    iVar2 = host_s3eGLGetInt_thumb(2);
    local_1c[0] = iVar2;
    host_s3eConfigGetInt_thumb(&DAT_4a047b9c,s_useGLContextShadow_4a047b88,local_1c);
    if (local_1c[0] != 0 || iVar2 != 0) {
      local_20 = 0;
      host_s3eConfigGetInt_thumb(&DAT_4a047b9c,s_useLegacyContextShadow_4a047ba0,&local_20);
      if (local_20 != 0) {
        FUN_4a00ae50(10,0);
        FUN_4a00ae50(0xb,0);
        FUN_4a00ae50(0xc,0);
        FUN_4a00ae50(0xd,0);
        host_s3eConfigGetInt_thumb(&DAT_4a047b9c,s_ShadowSurfaces_4a047bb8,puVar1 + 4);
        *(undefined **)(*(int *)PTR_DAT_4a047bc8 + 0x674) = PTR_FUN_4a055ad0_1_4a047bcc;
        FUN_4a00ada8(0,PTR_FUN_4a04c8ac_1_4a047bd0);
        FUN_4a00ada8(1,PTR_FUN_4a048d10_1_4a047bd4,0);
        iVar6 = local_1c[0];
        *puVar1 = 1;
        if (local_1c[0] != 0) {
          puVar1[1] = 1;
          uVar3 = host_s3eMemoryGetInt_thumb(0);
          uVar4 = FUN_4a00b94c();
          FUN_4a00b958(0);
          if (iVar2 == 0) {
            iVar6 = iVar6 + -0x3b8;
            if (iVar6 < 1) {
              FUN_4a008004(s_Context_shadow_must_be_over___d__4a047bd8);
              iVar2 = host_s3eDebugIsDebuggerPresent_thumb();
              if (iVar2 != 0) {
                _DAT_fffffff4 = 0;
              }
            }
            uVar5 = FUN_4a161570(iVar6);
            *(undefined4 *)(puVar1 + 0xc) = uVar5;
            uVar5 = thunk_FUN_4a161570(0x398);
            uVar5 = FUN_4a0a5ce0(uVar5,*(undefined4 *)(puVar1 + 0xc),iVar6,s_ContextShadow_4a047bfc)
            ;
            *(undefined4 *)(puVar1 + 8) = uVar5;
          }
          else {
            *(undefined4 *)(*(int *)PTR_DAT_4a047bc8 + 0x674) = 0;
            host_s3eMemoryHeapCreate_thumb(6);
            host_s3eMemorySetInt_thumb(0,6);
            host_s3eMemoryGetInt_thumb(2);
          }
          host_s3eMemorySetInt_thumb(0,uVar3);
          FUN_4a00b958(uVar4);
        }
      }
    }
  }
  return;
}



// Address: 4a047c0c

void FUN_4a047c0c(void)

{
  uint uVar1;
  
  uVar1 = **(uint **)PTR_DAT_4a047c20;
  if (-1 < (int)(uVar1 << 1)) {
    **(uint **)PTR_DAT_4a047c20 = uVar1 | 0x40000000;
  }
  return;
}



// Address: 4a047cdc

void FUN_4a047cdc(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_4a047d18;
  iVar2 = *(int *)(PTR_DAT_4a047d18 + 0x10);
  *(int *)(PTR_DAT_4a047d18 + 0x10) = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    if (*(int *)(puVar1 + 0xc) != 0) {
      FUN_4a08d418();
      thunk_FUN_4a161530();
    }
    FUN_4a04c77c(0);
    FUN_4a04d500(0);
    FUN_4a04c788(0);
  }
  return;
}



// Address: 4a047d20

void FUN_4a047d20(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_4a047d5c;
  thunk_FUN_4a161530(*(undefined4 *)(*(int *)PTR_DAT_4a047d5c + 900));
  *(undefined4 *)(*(int *)puVar1 + 0x380) = param_1;
  uVar2 = thunk_FUN_4a161570(param_1);
  iVar3 = *(int *)puVar1;
  *(undefined4 *)(iVar3 + 900) = uVar2;
  *(undefined4 *)(iVar3 + 0x38c) = uVar2;
  return;
}



// Address: 4a047d64

void FUN_4a047d64(void)

{
  undefined *puVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)PTR_DAT_4a047dbc;
  *puVar2 = puVar2[0xda] & 0x20 | *puVar2;
  puVar1 = PTR_DAT_4a047dc4;
  *(undefined **)(PTR_DAT_4a047dc4 + 0x40) = PTR_LAB_4a055bd8_1_4a047dc0;
  *(undefined **)(puVar1 + 0x44) = PTR_LAB_4a055bc8_1_4a047dc8;
  *(undefined **)(puVar1 + 0x48) = PTR_LAB_4a0557ec_1_4a047dcc;
  *(undefined **)(puVar1 + 0x4c) = PTR_LAB_4a0563c0_1_4a047dd0;
  *(undefined **)(puVar1 + 0x50) = PTR_FUN_4a05639c_1_4a047dd4;
  *(undefined **)PTR_DAT_4a047ddc = PTR_LAB_4a047dd8;
  return;
}



// Address: 4a047de4

void FUN_4a047de4(void)

{
  undefined *puVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)PTR_DAT_4a047e3c;
  *puVar2 = puVar2[0xda] & 4 | *puVar2;
  puVar1 = PTR_DAT_4a047e44;
  *(undefined **)(PTR_DAT_4a047e44 + 4) = PTR_FUN_4a047e40;
  *(undefined **)(puVar1 + 8) = PTR_LAB_4a047e48;
  *(undefined **)(puVar1 + 0xc) = PTR_FUN_4a047e4c;
  *(undefined **)(puVar1 + 0x10) = PTR_FUN_4a047e50;
  *(undefined **)(puVar1 + 0x14) = PTR_FUN_4a047e54;
  *(undefined **)PTR_DAT_4a047e5c = PTR_FUN_4a047e58;
  return;
}



// Address: 4a047e60

void FUN_4a047e60(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_4a047e7c;
  thunk_FUN_4a161530(*(undefined4 *)(PTR_DAT_4a047e7c + 4));
  thunk_FUN_4a161530(*(undefined4 *)(puVar1 + 0x18));
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 0x18) = 0;
  return;
}



// Address: 4a047e80

void FUN_4a047e80(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  puVar1 = PTR_DAT_4a047ea4;
  puVar2 = *(undefined4 **)(PTR_DAT_4a047ea4 + 0x28);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_4a1652c6(puVar2,*(undefined4 *)*puVar2);
  }
  *(undefined4 *)(puVar1 + 0x28) = 0;
  return;
}



// Address: 4a047e88

void FUN_4a047e88(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  puVar1 = PTR_DAT_4a047ea4;
  puVar2 = *(undefined4 **)(PTR_DAT_4a047ea4 + 0x28);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_4a1652c6(puVar2,*(undefined4 *)*puVar2);
  }
  *(undefined4 *)(puVar1 + 0x28) = 0;
  return;
}



// Address: 4a047ea8

void FUN_4a047ea8(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar5 = *(int *)PTR_DAT_4a048034;
  iVar6 = *(int *)(iVar5 + 0x34c);
  iVar7 = *(int *)(iVar5 + 0x350);
  if ((*(uint *)(iVar5 + 0x354) & 1) == 0) {
    iVar7 = iVar7 >> (*(uint *)(iVar5 + 0x66c) & 0xff);
  }
  else {
    iVar6 = iVar6 >> (*(uint *)(iVar5 + 0x66c) & 0xff);
  }
  uVar1 = FUN_4a0015f0(0x1000000,iVar6 << 5);
  *(undefined4 *)(iVar5 + 0x330) = uVar1;
  iVar2 = FUN_4a0015f0(0x1000000,iVar7 << 5);
  *(int *)(iVar5 + 0x334) = iVar2;
  if ((*(uint *)(iVar5 + 0x354) & 1) == 0) {
    *(int *)(iVar5 + 0x334) = iVar2 >> (*(uint *)(iVar5 + 0x66c) & 0xff);
  }
  else {
    *(int *)(iVar5 + 0x330) = *(int *)(iVar5 + 0x330) >> (*(uint *)(iVar5 + 0x66c) & 0xff);
  }
  uVar1 = FUN_4a0015f0(0x40000,*(undefined4 *)(iVar5 + 0x2dc));
  *(undefined4 *)(iVar5 + 0x32c) = uVar1;
  iVar2 = FUN_4a02afd0(*(int *)(iVar5 + 0x2dc) * *(int *)(iVar5 + 0x2dc) +
                       ((int)(iVar6 * iVar6 + ((uint)(iVar6 * iVar6 >> 0x1f) >> 0x1e)) >> 2));
  *(int *)(iVar5 + 0x2e0) = iVar2 >> 6;
  iVar2 = FUN_4a02afd0(*(int *)(iVar5 + 0x2dc) * *(int *)(iVar5 + 0x2dc) +
                       ((int)(iVar7 * iVar7 + ((uint)(iVar7 * iVar7 >> 0x1f) >> 0x1e)) >> 2));
  uVar1 = *(undefined4 *)(iVar5 + 0x2dc);
  iVar3 = FUN_4a0015f0(*(int *)(iVar5 + 0x2e0) << 0xc,uVar1);
  iVar2 = FUN_4a0015f0((iVar2 >> 6) << 0xc,uVar1);
  *(int *)(iVar5 + 0x2e0) = iVar3 * *(int *)(iVar5 + 0x330) >> 0xc;
  *(int *)(iVar5 + 0x2e4) = *(int *)(iVar5 + 0x334) * iVar2 >> 0xc;
  *(int *)(iVar5 + 0x314) = iVar7 * 8 + -1;
  *(int *)(iVar5 + 0x310) = iVar6 * 8 + -1;
  iVar7 = *(int *)(iVar5 + 0x2c8);
  iVar6 = iVar7 * *(int *)(iVar5 + 0x32c) >> 0xc;
  *(int *)(iVar5 + 0x2d0) = iVar6;
  if (iVar6 < 6) {
    iVar6 = 5;
  }
  *(int *)(iVar5 + 0x2d0) = iVar6;
  iVar8 = *(int *)(iVar5 + 0x2cc);
  iVar2 = iVar8 * *(int *)(iVar5 + 0x32c) >> 0xc;
  iVar6 = iVar2 - iVar6;
  *(int *)(iVar5 + 0x2d4) = iVar2;
  uVar1 = FUN_4a0015f0((iVar8 - iVar7) * 0x1000,iVar6 * 0x40);
  *(undefined4 *)(iVar5 + 0x3c8) = uVar1;
  uVar1 = FUN_4a0015f0(iVar6 * 0x8000,iVar8 - iVar7);
  *(undefined4 *)(iVar5 + 0x3d0) = uVar1;
  iVar4 = *(int *)PTR_DAT_4a03ebbc;
  iVar3 = *(int *)(iVar4 + 0x32c);
  iVar2 = *(int *)(iVar4 + 0x3ac);
  iVar6 = iVar3 * iVar7 >> 0xc;
  iVar5 = iVar3 * iVar8 >> 0xc;
  if (iVar6 < 5) {
    iVar6 = 5;
  }
  iVar9 = *(int *)(iVar4 + 0x3e0);
  if (*(uint *)(iVar4 + 1000) != 0xffffffff) {
    iVar2 = iVar5 >> (*(uint *)(iVar4 + 1000) & 0xff);
  }
  if (iVar9 == 0) {
    iVar9 = *(int *)(iVar4 + 0x3e4);
    if (*(int *)(iVar4 + 0x2cc) + iVar9 != *(int *)(iVar4 + 0x2c8)) {
      uVar1 = FUN_4a0015f0(iVar2 << 0xc,((iVar5 + (iVar9 * iVar3 >> 0xc)) - iVar6) * 0x40);
      *(undefined4 *)(iVar4 + 0x3cc) = uVar1;
      uVar1 = FUN_4a0015f0(iVar2 << 0xc,(iVar8 + iVar9) - iVar7);
      *(undefined4 *)(iVar4 + 0x3d4) = uVar1;
    }
    if (iVar2 != 0) {
      uVar1 = FUN_4a0015f0(((iVar5 + (iVar9 * *(int *)(iVar4 + 0x32c) >> 0xc)) - iVar6) * 0x8000,
                           iVar2);
      *(undefined4 *)(iVar4 + 0x3d8) = uVar1;
      uVar1 = FUN_4a0015f0(((iVar8 + iVar9) - iVar7) * 0x1000,iVar2);
      *(undefined4 *)(iVar4 + 0x3dc) = uVar1;
    }
  }
  else {
    iVar3 = iVar2 - iVar9;
    uVar1 = FUN_4a0015f0(iVar3 * 0x1000,(iVar5 - iVar6) * 0x40);
    *(undefined4 *)(iVar4 + 0x3cc) = uVar1;
    uVar1 = FUN_4a0015f0(iVar3 * 0x1000,iVar8 - iVar7);
    *(undefined4 *)(iVar4 + 0x3d4) = uVar1;
    if (iVar2 != iVar9) {
      uVar1 = FUN_4a0015f0((iVar5 - iVar6) * 0x8000,iVar3);
      *(undefined4 *)(iVar4 + 0x3d8) = uVar1;
      uVar1 = FUN_4a0015f0((iVar8 - iVar7) * 0x1000,iVar3);
      *(undefined4 *)(iVar4 + 0x3dc) = uVar1;
    }
  }
  if (*(int *)(iVar4 + 0x3cc) == 0) {
    *(int *)(iVar4 + 0x2d8) = iVar5;
    return;
  }
  iVar7 = FUN_4a0015f0(iVar2 << 0xc);
  *(int *)(iVar4 + 0x2d8) = iVar7 + iVar6 * 0x40 >> 6;
  return;
}



// Address: 4a048038

void FUN_4a048038(uint param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint local_50;
  int local_4c;
  int local_48;
  uint *local_40;
  undefined1 auStack_3c [4];
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_28;
  
  puVar6 = *(uint **)PTR_DAT_4a048060;
  if (puVar6[0x19a] == param_1) {
    return;
  }
  if ((*puVar6 & 0x400) != 0) {
    puVar6[0x19a] = param_1;
    return;
  }
  local_28 = param_1;
  FUN_4a05a618();
  FUN_4a03f51c(auStack_3c);
  if (*(int *)(*(int *)PTR_DAT_4a04a658 + 0x668) == 0) {
    FUN_4a047744(&local_50,auStack_3c,2);
    iVar13 = (int)local_40 + local_48;
    iVar3 = 0;
    if (0 < local_4c) {
      do {
        FUN_4a000f84(iVar13,local_40,local_50 * ((local_30 & 0x70) >> 4));
        iVar3 = iVar3 + 1;
        local_40 = (uint *)((int)local_40 + local_48 * 2);
        iVar13 = iVar13 + local_48 * 2;
      } while (iVar3 < local_4c);
    }
  }
  else {
    if (*(int *)(*(int *)PTR_DAT_4a04a658 + 0x668) != 1) goto LAB_4a04a4b4;
    FUN_4a047744(&local_50,auStack_3c,2);
    uVar14 = local_50 & 1;
    iVar3 = (int)local_50 >> 1;
    uVar1 = (local_30 & 0x70) >> 4;
    bVar2 = false;
    if (((uint)local_40 & 1) == 0) {
      if (((uint)local_40 & 3) != 0) {
        bVar2 = true;
        local_40 = (uint *)((int)local_40 + uVar1);
        if (uVar14 == 0) {
          iVar3 = iVar3 + -1;
          uVar14 = 1;
        }
        else {
          uVar14 = 0;
        }
      }
      puVar6 = local_40;
      for (iVar13 = local_4c + -1; 0 < iVar13; iVar13 = iVar13 + -1) {
        puVar4 = (uint *)((int)puVar6 + local_48);
        puVar7 = (uint *)((int)puVar4 + local_48);
        if (bVar2) {
          *(short *)((int)puVar4 + -2) =
               (short)(((*(ushort *)((int)puVar7 + -2) ^ *(ushort *)((int)puVar6 + -2)) & 0x820 ^
                       (uint)*(ushort *)((int)puVar6 + -2) + (uint)*(ushort *)((int)puVar7 + -2)) >>
                      1);
        }
        iVar9 = 0;
        puVar5 = puVar4;
        puVar8 = puVar7;
        puVar11 = puVar6;
        puVar12 = puVar6;
        if (0 < iVar3) {
          do {
            puVar12 = puVar11 + 1;
            uVar15 = *puVar11;
            puVar7 = puVar8 + 1;
            uVar10 = *puVar8;
            iVar9 = iVar9 + 1;
            puVar4 = puVar5 + 1;
            *puVar5 = (uint)CARRY4(uVar10,uVar15) << 0x1f |
                      (uVar10 + uVar15 ^ (uVar15 ^ uVar10) & 0x8210820) >> 1;
            puVar5 = puVar4;
            puVar8 = puVar7;
            puVar11 = puVar12;
          } while (iVar9 < iVar3);
        }
        if (uVar14 != 0) {
          *(short *)puVar4 =
               (short)(((ushort)((ushort)*puVar7 ^ (ushort)*puVar12) & 0x820 ^
                       (uint)(ushort)*puVar12 + (uint)(ushort)*puVar7) >> 1);
        }
        puVar6 = (uint *)((int)puVar6 + local_48 * 2);
      }
      iVar3 = *(int *)PTR_DAT_4a04a658;
      iVar13 = 0;
      if ((*(uint *)(iVar3 + 0x354) & 1) == 0) {
        iVar3 = *(int *)(iVar3 + 0x350);
      }
      else {
        iVar3 = *(int *)(iVar3 + 0x34c);
      }
      iVar3 = iVar3 + (local_4c + -1) * -2 + -1;
      if (0 < iVar3) {
        puVar4 = puVar6;
        do {
          puVar4 = (uint *)((int)puVar4 + local_48);
          FUN_4a000f84(puVar4,puVar6,local_50 * uVar1);
          iVar13 = iVar13 + 1;
        } while (iVar13 < iVar3);
      }
    }
  }
  local_34 = local_34 >> 1;
  local_38 = local_38 << 1;
LAB_4a04a4b4:
  iVar3 = *(int *)PTR_DAT_4a04a658;
  *(uint *)(iVar3 + 0x668) = local_28;
  if (local_28 < 2) {
    local_34 = local_34 << 1;
    local_38 = local_38 >> 1;
    *(undefined4 *)(iVar3 + 0x66c) = 1;
  }
  else {
    *(undefined4 *)(iVar3 + 0x66c) = 0;
  }
  FUN_4a03f8d4(auStack_3c);
  *PTR_DAT_4a04a65c = 0;
  FUN_4a04d300();
  return;
}



// Address: 4a048064

undefined4 FUN_4a048064(undefined4 *param_1,uint *param_2,uint *param_3)

{
  ushort uVar1;
  uint *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  undefined2 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ushort *puVar14;
  uint local_38;
  uint local_34;
  
  puVar2 = *(uint **)PTR_DAT_4a0482c4;
  uVar10 = 0;
  local_34 = 0;
  local_38 = 0;
  if ((*puVar2 & 0x100) == 0) {
    uVar10 = puVar2[0xde];
    uVar4 = local_38;
  }
  else {
    uVar4 = puVar2[0x116];
    if (puVar2[0x105] == 3) {
      uVar4 = local_38;
      local_34 = puVar2[0x116];
    }
  }
  local_38 = uVar4;
  uVar12 = puVar2[0xe3];
  uVar4 = *param_3;
  puVar2[0xe2] = uVar12;
  puVar2[0xe3] = (uVar4 * 6 + 3 & 0xfffffffc) + uVar12;
  puVar5 = (ushort *)*param_2;
  uVar1 = *puVar5;
  uVar7 = 1;
  uVar9 = 1;
  uVar11 = 1;
  uVar4 = uVar12;
  if (1 < *param_3) {
    do {
      puVar14 = puVar5 + uVar9;
      if (*puVar14 == uVar1) {
        if (2 < (int)uVar9) {
          if (uVar10 == 0) {
            if (local_34 == 0) {
              FUN_4a04a724(uVar9 & 0xffff,local_38,puVar5,uVar4);
            }
            else {
              FUN_4a04a660(uVar9 & 0xffff,local_34);
            }
          }
          else {
            uVar7 = uVar9 & 0xffff;
            iVar6 = *(int *)PTR_DAT_4a0482c4;
            puVar3 = *(undefined2 **)(iVar6 + 0x38c);
            *(undefined2 **)(iVar6 + 0x388) = puVar3;
            *(undefined2 **)(iVar6 + 0x38c) = puVar3 + uVar7 * 2;
            if (uVar7 != 0) {
              iVar6 = 0;
              puVar8 = puVar3;
              do {
                uVar7 = uVar7 - 1;
                iVar13 = uVar10 + (uint)*puVar5 * 0x14;
                *puVar8 = (short)*(undefined4 *)(iVar13 + 4);
                puVar3[iVar6 * 2 + 1] = (short)*(undefined4 *)(iVar13 + 8);
                iVar6 = iVar6 + 1;
                puVar8 = puVar8 + 2;
                puVar5 = puVar5 + 1;
              } while (uVar7 != 0);
            }
            FUN_4a050e50();
          }
          uVar4 = (uVar4 + uVar9 * 6) - 0xc;
        }
        uVar9 = 0;
        puVar5 = puVar14 + 1;
        uVar11 = uVar11 + 1;
        uVar7 = 0;
      }
      uVar1 = puVar5[uVar9];
      uVar11 = uVar11 + 1;
      uVar9 = uVar9 + 1;
    } while (uVar11 < *param_3);
    if (2 < (int)uVar9) {
      if (uVar10 == 0) {
        if (local_34 == 0) {
          uVar10 = FUN_4a04a724(uVar9 & 0xffff,local_38,puVar5,uVar4);
        }
        else {
          uVar10 = FUN_4a04a660(uVar9 & 0xffff,local_34);
        }
        uVar7 = uVar7 & uVar10;
      }
      else {
        uVar10 = FUN_4a04a95c(uVar9 & 0xffff,uVar10,puVar5,uVar4);
        uVar7 = uVar7 & uVar10;
      }
    }
    if (uVar7 == 0) {
      *param_1 = 0;
      *param_3 = (int)(((uVar4 + uVar9 * 6) - uVar12) + -0xc) >> 1;
      *param_2 = uVar12;
      return 1;
    }
  }
  *param_1 = 2;
  return 0;
}



// Address: 4a0482c8

void FUN_4a0482c8(void)

{
  undefined *puVar1;
  int *piVar2;
  uint uVar3;
  
  puVar1 = PTR_DAT_4a04831c;
  if (*(int *)(PTR_DAT_4a04831c + 4) != 0) {
    FUN_4a00b958(0);
    uVar3 = 2;
    while( true ) {
      if (*(uint *)(*(int *)(puVar1 + 4) + 0xc) <= uVar3) break;
      if (*(int *)(*(int *)(*(int *)(puVar1 + 4) + 8) + uVar3 * 0x28 + 4) != 0) {
        FUN_4a00b8ac(uVar3);
      }
      uVar3 = uVar3 + 1;
    }
    FUN_4a04a9d8(0);
    piVar2 = *(int **)(puVar1 + 4);
    if (piVar2 != (int *)0x0) {
      FUN_4a1652c6(piVar2,*(undefined4 *)(*piVar2 + 4));
    }
    *(undefined4 *)(puVar1 + 4) = 0;
    FUN_4a0487b8();
  }
  return;
}



// Address: 4a048348

void FUN_4a048348(void)

{
  FUN_4a048038(2);
  FUN_4a040eb0();
  host_s3eSurfaceShow_arm();
  FUN_4a04ca64();
  *PTR_DAT_4a048388 = (char)((*(uint *)(*(int *)PTR_DAT_4a048384 + 4) & 0x80) >> 7);
  return;
}



// Address: 4a04838c

undefined4 FUN_4a04838c(void)

{
  FUN_4a04839c();
  return 0;
}



// Address: 4a04839c

void FUN_4a04839c(void)

{
  undefined *puVar1;
  void *pvVar2;
  
  puVar1 = PTR_DAT_4a0483cc;
  host_eglDestroySurface_thumb(*(void **)(PTR_DAT_4a0483cc + 8),*(void **)(PTR_DAT_4a0483cc + 0xc));
  pvVar2 = (void *)host_s3eGLGetNativeWindow_thumb();
  pvVar2 = host_eglCreateWindowSurface_thumb
                     (*(void **)(puVar1 + 8),*(void **)(puVar1 + 4),pvVar2,(void *)0x0);
  *(void **)(puVar1 + 0xc) = pvVar2;
  host_eglMakeCurrent_thumb(*(void **)(puVar1 + 8),pvVar2,pvVar2,*(void **)(puVar1 + 0x10));
  return;
}



// Address: 4a0483d0

undefined4 FUN_4a0483d0(void)

{
  return *(undefined4 *)(PTR_DAT_4a0483d8 + 0xc);
}



// Address: 4a0483f0

void FUN_4a0483f0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  
  puVar1 = PTR_DAT_4a0484a0;
  if ((**(uint **)PTR_DAT_4a0484a0 & 0x400) == 0) {
    thunk_FUN_4a05a68c();
    puVar3 = *(uint **)puVar1;
    *puVar3 = *puVar3 | 0x400;
  }
  puVar2 = PTR_DAT_4a0484a4;
  puVar3 = *(uint **)puVar1;
  if ((*puVar3 & 0x100) == 0) {
    *(undefined4 *)(PTR_DAT_4a0484a4 + 0x24) = *(undefined4 *)PTR_DAT_4a0484ac;
  }
  else {
    *(undefined4 *)(PTR_DAT_4a0484a4 + 0x24) = *(undefined4 *)PTR_DAT_4a0484a8;
  }
  if (puVar3[0x16c] >> 8 == 1) {
    uVar5 = 2;
  }
  else {
    uVar5 = 3;
  }
  puVar3[3] = uVar5;
  puVar1 = PTR_DAT_4a0484b0;
  *(undefined4 *)(puVar2 + 0x20) = *(undefined4 *)(PTR_DAT_4a0484b0 + 0x98);
  if (puVar3[3] == 3) {
    uVar4 = *(undefined4 *)(puVar1 + 0xdc);
  }
  else {
    uVar4 = *(undefined4 *)(puVar1 + 0xa0);
  }
  *(undefined4 *)(puVar2 + 0x28) = uVar4;
  *(undefined4 *)(puVar2 + 0x2c) = *(undefined4 *)(puVar1 + 0xa4);
  *(undefined4 *)(puVar2 + 0x30) = *(undefined4 *)(puVar1 + 0xa8);
  *(undefined4 *)(puVar2 + 0x34) = *(undefined4 *)(puVar1 + 0xac);
  return;
}



// Address: 4a0484b8

void FUN_4a0484b8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  uint uVar4;
  
  puVar1 = PTR_DAT_4a04855c;
  **(uint **)PTR_DAT_4a04855c = **(uint **)PTR_DAT_4a04855c & 0xfffffbff;
  FUN_4a03f83c();
  if ((**(uint **)puVar1 & 0x200) != 0) {
    FUN_4a05a618();
  }
  puVar3 = *(uint **)puVar1;
  uVar4 = *puVar3;
  *puVar3 = uVar4 & 0xfffffdff;
  if (((uVar4 & 0x80) != 0) && (puVar3[3] == 2)) {
    thunk_FUN_4a1500f8(0xb50);
  }
  puVar2 = PTR_DAT_4a048564;
  puVar1 = PTR_DAT_4a048560;
  *(undefined4 *)(PTR_DAT_4a048564 + 0x18) = *(undefined4 *)(PTR_DAT_4a048560 + 0x18);
  *(undefined4 *)(puVar2 + 0x1c) = *(undefined4 *)(puVar1 + 0x1c);
  *(undefined4 *)(puVar2 + 0x20) = *(undefined4 *)(puVar1 + 0x20);
  *(undefined4 *)(puVar2 + 0x24) = *(undefined4 *)(puVar1 + 0x24);
  *(undefined4 *)(puVar2 + 0x28) = *(undefined4 *)(puVar1 + 0x28);
  *(undefined4 *)(puVar2 + 0x2c) = *(undefined4 *)(puVar1 + 0x2c);
  *(undefined4 *)(puVar2 + 0x30) = *(undefined4 *)(puVar1 + 0x30);
  *(undefined4 *)(puVar2 + 0x34) = *(undefined4 *)(puVar1 + 0x34);
  return;
}



// Address: 4a048568

void FUN_4a048568(void)

{
  undefined *puVar1;
  int *piVar2;
  
  puVar1 = PTR_DAT_4a048584;
  piVar2 = *(int **)(PTR_DAT_4a048584 + 4);
  if (piVar2 != (int *)0x0) {
    FUN_4a1652c6(piVar2,*(undefined4 *)(*piVar2 + 4));
  }
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



// Address: 4a048588

undefined4 FUN_4a048588(void)

{
  return *(undefined4 *)(PTR_DAT_4a048590 + 8);
}



// Address: 4a048594

void FUN_4a048594(int param_1)

{
  if (param_1 == 0) {
    param_1 = *(int *)(PTR_DAT_4a0485a8 + 4);
  }
  FUN_4a04a9d8(param_1);
  return;
}



// Address: 4a0485ac

void FUN_4a0485ac(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  if (param_3 == 0) {
    puVar2 = (undefined4 *)(param_1 + param_2 * 4);
    if (0 < (int)(param_2 & 0xfffffffc)) {
      for (iVar1 = (int)param_2 >> 2; iVar1 != 0; iVar1 = iVar1 + -1) {
        puVar2[-1] = 0xffffff;
        puVar2[-2] = 0xffffff;
        puVar2[-3] = 0xffffff;
        puVar2 = puVar2 + -4;
        *puVar2 = 0xffffff;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 0xffffff;
    *(undefined4 *)(param_1 + 8) = 0xffffff;
    *(undefined4 *)(param_1 + 4) = 0xffffff;
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    if (param_2 != 1) {
      puVar2 = (undefined4 *)(param_1 + -4);
      for (uVar3 = param_2 - 1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        puVar2 = puVar2 + 1;
        *puVar2 = 0xffffff;
      }
      for (uVar3 = param_2 - 1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        puVar2[1] = 0xffffff;
        puVar2[2] = 0xffffff;
        puVar2[3] = 0xffffff;
        puVar2 = puVar2 + 4;
        *puVar2 = 0xffffff;
      }
      iVar1 = param_2 - 1;
    }
  }
  *(undefined4 *)(param_1 + iVar1 * 4) = 0xffffff;
  return;
}



// Address: 4a048664

void FUN_4a048664(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int local_10;
  
  if (*PTR_DAT_4a0486a0 == '\x01') {
    local_10 = param_4;
    FUN_4a03c12c(&local_10,1,0x20,4);
    *param_1 = local_10;
  }
  else {
    local_10 = 0;
    if (*param_1 != 0) {
      local_10 = *(int *)(*param_1 + 4);
    }
    FUN_4a03c12c(&local_10,1,0x20,4);
  }
  return;
}



// Address: 4a0486c0

void FUN_4a0486c0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [4];
  
  puVar1 = PTR_DAT_4a0486d4;
  PTR_DAT_4a0486d4[0x48] = 1;
  puVar1[0x94] = 1;
  FUN_4a150348(0xd33,auStack_24);
  puVar1 = PTR_DAT_4a04a1a4;
  uStack_28 = 0;
  if (*(int *)(*(int *)PTR_DAT_4a04a1a4 + 0xc) == 3) {
    uVar3 = 0x8b4d;
  }
  else {
    uVar3 = 0x84e2;
  }
  FUN_4a150348(uVar3,&uStack_28);
  host_s3eConfigGetInt_arm(&DAT_4a04a1bc,s_MaxTextureStages_4a04a1a8,&uStack_28);
  *(undefined4 *)(*(int *)puVar1 + 0x5b4) = uStack_28;
  thunk_FUN_4a1500f8(0xb44);
  thunk_FUN_4a14ffe8(0x405);
  thunk_FUN_4a150140(0xb71);
  FUN_4a15022c(0x901);
  thunk_FUN_4a14fee4(1,1,1);
  thunk_FUN_4a1500b0(1);
  thunk_FUN_4a1500f8(0xbe2);
  if (*(int *)(*(int *)puVar1 + 0xc) == 2) {
    thunk_FUN_4a1509f4(0x1d01);
    thunk_FUN_4a1500f8(0xbc0);
    FUN_4a150618(0x1702);
    FUN_4a1504dc();
    thunk_FUN_4a1500f8(0xb60);
    thunk_FUN_4a1501a4(0xb65,0x2601);
    thunk_FUN_4a1500f8(0xb50);
    thunk_FUN_4a14fed0(0x10000,0x10000,0x10000);
    thunk_FUN_4a1500f8(0xbc0);
    thunk_FUN_4a1500f8(0xbe2);
    puVar2 = PTR_DAT_4a04a1c0;
    *(undefined4 *)PTR_DAT_4a04a1c0 = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0;
    *(undefined4 *)(puVar2 + 0x10) = 0;
    *(undefined4 *)(puVar2 + 0x14) = 0;
    *(undefined4 *)(puVar2 + 0x18) = 0;
    *(undefined4 *)(puVar2 + 0x1c) = 0;
    *(undefined4 *)(puVar2 + 0x20) = 0;
    *(undefined4 *)(puVar2 + 0x24) = 0;
    *(undefined4 *)(puVar2 + 0x28) = 0;
    *(undefined4 *)(puVar2 + 0x2c) = 0;
    *(undefined4 *)(puVar2 + 0x30) = 0;
    *(undefined4 *)(puVar2 + 0x34) = 0;
    *(undefined4 *)(puVar2 + 0x38) = 0;
    *(undefined4 *)(puVar2 + 0x3c) = 0;
    puVar2 = PTR_DAT_4a04a1c4;
    if (PTR_DAT_4a04a1c4[0x49] == '\0') {
      iVar4 = thunk_FUN_4a0083c0(0x30);
      if (iVar4 == 0) {
        uVar3 = 0x39800000;
      }
      else {
        uVar3 = 0x3f800000;
      }
      *(undefined4 *)(puVar2 + 0x30) = uVar3;
      *(undefined4 *)(puVar2 + 0x1c) = uVar3;
      *(undefined4 *)(puVar2 + 8) = uVar3;
      *(undefined4 *)(puVar2 + 0x44) = 0x3f800000;
    }
    else {
      iVar4 = thunk_FUN_4a0083c0(0x30);
      if (iVar4 == 0) {
        uVar3 = 0x10;
      }
      else {
        uVar3 = 0x10000;
      }
      *(undefined4 *)(puVar2 + 0x30) = uVar3;
      *(undefined4 *)(puVar2 + 0x1c) = uVar3;
      *(undefined4 *)(puVar2 + 8) = uVar3;
      *(undefined4 *)(puVar2 + 0x44) = 0x10000;
    }
    puVar2[0x48] = 1;
    *(undefined4 *)(puVar2 + 0x54) = 0;
    *(undefined4 *)(puVar2 + 0x58) = 0;
    *(undefined4 *)(puVar2 + 0x5c) = 0;
    *(undefined4 *)(puVar2 + 0x60) = 0;
    *(undefined4 *)(puVar2 + 100) = 0;
    *(undefined4 *)(puVar2 + 0x68) = 0;
    *(undefined4 *)(puVar2 + 0x6c) = 0;
    *(undefined4 *)(puVar2 + 0x70) = 0;
    *(undefined4 *)(puVar2 + 0x74) = 0;
    *(undefined4 *)(puVar2 + 0x78) = 0;
    *(undefined4 *)(puVar2 + 0x7c) = 0;
    *(undefined4 *)(puVar2 + 0x80) = 0;
    *(undefined4 *)(puVar2 + 0x84) = 0;
    *(undefined4 *)(puVar2 + 0x88) = 0;
    *(undefined4 *)(puVar2 + 0x8c) = 0;
    *(undefined4 *)(puVar2 + 0x90) = 0;
    if (puVar2[0x95] == '\0') {
      iVar4 = thunk_FUN_4a0083c0(0x30);
      if (iVar4 == 0) {
        uVar3 = 0x39800000;
      }
      else {
        uVar3 = 0x3f800000;
      }
      *(undefined4 *)(puVar2 + 0x7c) = uVar3;
      *(undefined4 *)(puVar2 + 0x68) = uVar3;
      *(undefined4 *)(puVar2 + 0x54) = uVar3;
      *(undefined4 *)(puVar2 + 0x90) = 0x3f800000;
    }
    else {
      iVar4 = thunk_FUN_4a0083c0(0x30);
      if (iVar4 == 0) {
        uVar3 = 0x10;
      }
      else {
        uVar3 = 0x10000;
      }
      *(undefined4 *)(puVar2 + 0x7c) = uVar3;
      *(undefined4 *)(puVar2 + 0x68) = uVar3;
      *(undefined4 *)(puVar2 + 0x54) = uVar3;
      *(undefined4 *)(puVar2 + 0x90) = 0x10000;
    }
    puVar2[0x94] = 1;
    uVar7 = 0;
    uVar5 = *(uint *)(*(int *)puVar1 + 0x5b4);
    if (4 < uVar5) {
      uVar5 = 4;
    }
    if (uVar5 != 0) {
      do {
        thunk_FUN_4a14fcc4(uVar7 + 0x84c0);
        FUN_4a14fd70(0xde1,0);
        thunk_FUN_4a150aa8(0x2300,0x2200,0x2100);
        uVar7 = uVar7 + 1;
        uVar5 = *(uint *)(*(int *)puVar1 + 0x5b4);
        if (4 < uVar5) {
          uVar5 = 4;
        }
      } while (uVar7 < uVar5);
    }
    thunk_FUN_4a14fcc4(0x84c0);
    FUN_4a1503fc(0xc50,0x1102);
    thunk_FUN_4a1500f8(0xb60);
    thunk_FUN_4a1501a4(0xb65,0x2601);
    thunk_FUN_4a1500f8(0xb50);
    uStack_38 = *(undefined4 *)PTR_DAT_4a04a1c8;
    uStack_34 = *(undefined4 *)(PTR_DAT_4a04a1c8 + 4);
    uStack_30 = *(undefined4 *)(PTR_DAT_4a04a1c8 + 8);
    uStack_2c = *(undefined4 *)(PTR_DAT_4a04a1c8 + 0xc);
    FUN_4a150468(0xb53,&uStack_38);
    FUN_4a150600(0x408,0x1600,&uStack_38);
    FUN_4a150600(0x408,0x1200,&uStack_38);
    FUN_4a150600(0x408,0x1201,&uStack_38);
    FUN_4a150600(0x408,0x1202,&uStack_38);
    uVar5 = 0x4000;
    do {
      FUN_4a1504a0(uVar5,0x1200,&uStack_38);
      FUN_4a1504a0(uVar5,0x1201,&uStack_38);
      FUN_4a1504a0(uVar5,0x1202,&uStack_38);
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x4001);
    FUN_4a150454(0xb52,0);
  }
  thunk_FUN_4a1500f8(0xbd0);
  puVar6 = *(uint **)puVar1;
  if ((puVar6[0x16f] & 0x40) == 0) {
    if ((*puVar6 & 0x2000000) == 0) {
      uVar5 = 0x206;
    }
    else {
      uVar5 = 0x204;
    }
    puVar6[0x171] = uVar5;
    uVar3 = 0;
  }
  else {
    uVar3 = 0x3f800000;
  }
  thunk_FUN_4a14fe64(uVar3);
  FUN_4a150094(*(undefined4 *)(*(int *)puVar1 + 0x5c4));
  if (*(int *)(*(int *)puVar1 + 0xc) == 3) {
    FUN_4a150348(0x8869,*(int *)puVar1 + 0x5b8);
  }
  iVar4 = thunk_FUN_4a0083c0(0xe);
  if (iVar4 != 0) {
    FUN_4a150348(0x8ca6,PTR_DAT_4a04a240);
  }
  return;
}



// Address: 4a0486d8

void FUN_4a0486d8(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_DAT_4a048708;
  thunk_FUN_4a161530(*(undefined4 *)(PTR_DAT_4a048708 + 4));
  thunk_FUN_4a161530(*(undefined4 *)(puVar1 + 0x18));
  uVar2 = thunk_FUN_4a161570(param_1);
  *(undefined4 *)(puVar1 + 4) = uVar2;
  *(undefined4 *)(puVar1 + 8) = param_1;
  uVar2 = thunk_FUN_4a161570(param_2 << 4,puVar1 + 0xc);
  *(undefined4 *)(puVar1 + 0x18) = uVar2;
  *(int *)(puVar1 + 0x1c) = param_2;
  return;
}



// Address: 4a04870c

int FUN_4a04870c(int *param_1,undefined4 param_2,int *param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_4a1652c8(param_1,param_2,*(undefined4 *)(*param_1 + 0x18));
  if (-1 < iVar2) {
    if (param_4 < iVar2) {
      iVar2 = param_4;
    }
    iVar3 = FUN_4a1652ca(param_3,0,param_4,*(undefined4 *)(*param_3 + 0xc));
    puVar1 = PTR_DAT_4a0487b0;
    if (iVar3 != 0) {
      thunk_FUN_4a000f84(iVar3,param_2,iVar2);
      FUN_4a1652c8(param_1,param_2,*(undefined4 *)(*param_1 + 8));
      if (*(int *)(puVar1 + 8) == 0) {
        return iVar3;
      }
      for (iVar2 = *(int *)(*(int *)(puVar1 + 8) + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
        FUN_4a1652d2(iVar2,param_1,param_2,param_3,iVar3,param_4);
      }
      return iVar3;
    }
    if (*(int *)(PTR_DAT_4a0487b0 + 8) != 0) {
      for (iVar2 = *(int *)(*(int *)(PTR_DAT_4a0487b0 + 8) + 4); iVar2 != 0;
          iVar2 = *(int *)(iVar2 + 4)) {
        FUN_4a1652d2(iVar2,param_3,param_2,param_4);
      }
    }
  }
  return 0;
}



// Address: 4a0487b8

void FUN_4a0487b8(void)

{
  FUN_4a1615a8(0);
  *(undefined4 *)(PTR_DAT_4a0487cc + 4) = 0;
  return;
}



// Address: 4a0487d0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0487d0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  
  puVar1 = PTR_DAT_4a04897c;
  iVar2 = 0;
  if (*(int *)PTR_DAT_4a04897c != 0) {
    iVar2 = *(int *)(PTR_DAT_4a04897c + 4);
  }
  if (*(int *)PTR_DAT_4a04897c == 0 || iVar2 == 0) {
    return;
  }
  *(int *)(PTR_DAT_4a04897c + 0x28) = param_1;
  iVar2 = *(int *)(PTR_DAT_4a04897c + 0x34);
  iVar3 = *(int *)(PTR_DAT_4a04897c + 0x38);
  if (param_1 != 0) {
    if (param_1 != 1) {
      return;
    }
    param_5 = param_5 >> 1;
    if (*(int *)(PTR_DAT_4a04897c + 0x1c) != 0) {
      *(int *)(puVar1 + 8) = iVar2;
      *(int *)(puVar1 + 0xc) = iVar3;
      FUN_4a150d7c(param_3 >> 1,iVar2 * 2 - (param_2 + param_4),param_5,param_4);
    }
    if (*(int *)(puVar1 + 0x20) != 0) {
      iVar2 = *(int *)(puVar1 + 0x34);
      *(int *)(puVar1 + 8) = iVar2;
      *(undefined4 *)(puVar1 + 0xc) = *(undefined4 *)(puVar1 + 0x38);
      iVar3 = iVar2 * 2 - (param_2 + param_4);
      iVar2 = iVar2 + (param_3 >> 1);
      iVar4 = *(int *)PTR_DAT_4a150dbc;
      if (iVar2 == 0 && iVar3 == 0) {
        if (param_5 + param_4 == *(int *)(iVar4 + 0x20) + *(int *)(iVar4 + 0x24)) {
          param_5 = *(int *)(iVar4 + 0x20);
          param_4 = *(int *)(iVar4 + 0x24);
        }
      }
      *(int *)(iVar4 + 0x10) = iVar2;
      *(int *)(iVar4 + 0x14) = iVar3;
      *(int *)(iVar4 + 0x18) = param_5;
      *(int *)(iVar4 + 0x1c) = param_4;
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4a048950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  if (*(int *)(PTR_DAT_4a04897c + 0x1c) != 0) {
    *(int *)(puVar1 + 8) = iVar2 + *(int *)(puVar1 + 0x3c);
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
                    /* WARNING: Could not recover jumptable at 0x4a04889c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



// Address: 4a048980

void FUN_4a048980(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = host_s3eFileGetError_thumb();
  puVar2 = (undefined4 *)thunk_FUN_4a0007f8();
  if (iVar1 == 0xb) {
LAB_4a04899c:
    if (param_2 == 0) {
      uVar3 = 2;
    }
    else {
      uVar3 = 0x14;
    }
  }
  else {
    if (iVar1 < 0xc) {
      if ((iVar1 == 4) || (iVar1 == 10)) goto LAB_4a04899c;
    }
    else {
      if (iVar1 + DAT_4a0489c4 == 0) {
        uVar3 = 0x11;
        goto LAB_4a0489b8;
      }
      if (iVar1 + DAT_4a0489c4 == 2) {
        uVar3 = 0xd;
        goto LAB_4a0489b8;
      }
    }
    uVar3 = 0xc;
  }
LAB_4a0489b8:
  *puVar2 = uVar3;
  return;
}



// Address: 4a0489c8

void FUN_4a0489c8(void)

{
  return;
}



// Address: 4a0489dc

undefined4 FUN_4a0489dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_8 [2];
  
  local_8[0] = 0;
  uVar1 = FUN_4a01d924(param_2,param_3,param_4);
  FUN_4a1020c0(local_8,uVar1);
  return local_8[0];
}



// Address: 4a048a10

void FUN_4a048a10(int *param_1)

{
  uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  short *psVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  bool bVar26;
  
  uVar5 = DAT_4a048d0c;
  iVar6 = *(int *)PTR_DAT_4a048d04;
  iVar8 = *(int *)(PTR_LAB_4a048d08 + 0x40);
  psVar10 = (short *)param_1[1];
  iVar12 = *param_1 + -1;
  uVar7 = param_1[2];
  uVar9 = param_1[3];
  iVar22 = param_1[4];
  iVar24 = param_1[5];
  puVar1 = (uint *)(param_1 + 0xb);
  puVar2 = (uint *)(param_1 + 0xd);
  iVar13 = param_1[0xc];
  iVar17 = param_1[0xe];
  uVar14 = param_1[6];
  iVar18 = *(int *)PTR_LAB_4a048d08;
  uVar15 = param_1[9];
  iVar23 = param_1[7];
  bVar26 = (uVar15 & 0x80000000) == 0;
  if (bVar26) {
    param_1 = (int *)param_1[10];
  }
  uVar25 = (*puVar1 & 0xfff0ffff) << 0xc;
  uVar11 = (*puVar2 & 0xfff0ffff) << 0xc;
  if (!bVar26) {
    iVar18 = iVar18 + ((uVar15 & 0xf800000) >> 0xc);
    do {
      uVar3 = *(ushort *)(iVar23 + (uVar14 & uVar9 >> 0xd | (uVar7 & uVar14) >> 0x14) * 2);
      while( true ) {
        uVar15 = (uint)uVar3;
        uVar9 = uVar9 + iVar24;
        uVar7 = uVar7 + iVar22;
        if (uVar15 == 0) break;
        uVar15 = (uint)*(ushort *)(iVar18 + ((uVar15 & 0xffff7fff) >> 5) * 2) |
                 (uint)*(ushort *)(iVar18 + (uVar15 & 0x1f) * 0x40) << 0xb;
        iVar12 = iVar12 + -1;
        uVar19 = uVar5 & *(ushort *)
                          (iVar8 + *(int *)(iVar6 + (uVar25 >> 0xe & 0x3f80 |
                                                    (uVar11 & 0xfffffff) >> 0x15) * 4) * 2) >> 2;
        uVar16 = uVar19 + uVar15;
        uVar19 = (uVar15 ^ uVar16 ^ uVar19) & 0x10820;
        uVar15 = uVar19 >> 5;
        uVar4 = (ushort)uVar19;
        uVar3 = uVar4 - ((short)uVar15 - (short)((uVar15 & 0x40) >> 1));
        uVar25 = uVar25 + iVar13;
        *psVar10 = ((ushort)uVar16 | uVar3) - (uVar4 & ~uVar3);
        uVar11 = uVar11 + iVar17;
        if (iVar12 < 0) {
          return;
        }
        uVar3 = *(ushort *)(iVar23 + (uVar14 & uVar9 >> 0xd | (uVar7 & uVar14) >> 0x14) * 2);
        psVar10 = psVar10 + 1;
      }
      iVar12 = iVar12 + -1;
      uVar25 = uVar25 + iVar13;
      psVar10 = psVar10 + 1;
      uVar11 = uVar11 + iVar17;
      if (iVar12 < 0) {
        return;
      }
    } while( true );
  }
  do {
    uVar3 = *(ushort *)(iVar23 + (uVar14 & uVar9 >> 0xd | (uVar7 & uVar14) >> 0x14) * 2);
    while( true ) {
      uVar19 = (uint)uVar3;
      uVar9 = uVar9 + iVar24;
      uVar7 = uVar7 + iVar22;
      if (uVar19 == 0) break;
      iVar20 = iVar18 + ((uVar15 & 0xf800000) >> 0xc);
      uVar19 = (uint)*(ushort *)(iVar20 + ((uVar19 & 0xffff7fff) >> 5) * 2) |
               (uint)*(ushort *)(iVar20 + (uVar19 & 0x1f) * 0x40) << 0xb;
      iVar12 = iVar12 + -1;
      uVar21 = uVar5 & *(ushort *)
                        (iVar8 + *(int *)(iVar6 + (uVar25 >> 0xe & 0x3f80 |
                                                  (uVar11 & 0xfffffff) >> 0x15) * 4) * 2) >> 2;
      uVar16 = uVar21 + uVar19;
      uVar21 = (uVar19 ^ uVar16 ^ uVar21) & 0x10820;
      uVar19 = uVar21 >> 5;
      uVar4 = (ushort)uVar21;
      uVar3 = uVar4 - ((short)uVar19 - (short)((uVar19 & 0x40) >> 1));
      uVar25 = uVar25 + iVar13;
      uVar11 = uVar11 + iVar17;
      *psVar10 = ((ushort)uVar16 | uVar3) - (uVar4 & ~uVar3);
      uVar15 = uVar15 + (int)param_1;
      if (iVar12 < 0) {
        return;
      }
      uVar3 = *(ushort *)(iVar23 + (uVar14 & uVar9 >> 0xd | (uVar7 & uVar14) >> 0x14) * 2);
      psVar10 = psVar10 + 1;
    }
    iVar12 = iVar12 + -1;
    uVar25 = uVar25 + iVar13;
    psVar10 = psVar10 + 1;
    uVar11 = uVar11 + iVar17;
    uVar15 = uVar15 + (int)param_1;
    if (iVar12 < 0) {
      return;
    }
  } while( true );
}



// Address: 4a048d10

undefined4 FUN_4a048d10(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int *piVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [20];
  
  puVar5 = PTR_DAT_4a048e40;
  iVar2 = *(int *)(PTR_DAT_4a048e40 + 0x18);
  *(int *)(PTR_DAT_4a048e40 + 0x18) = iVar2 + -1;
  puVar1 = PTR_DAT_4a048e44;
  if (iVar2 + -1 == 0) {
    iVar2 = 0;
    piVar6 = (int *)PTR_DAT_4a048e44;
    if (puVar5[1] != '\0') {
      while (piVar6 = (int *)piVar6[2], piVar6 != (int *)puVar1) {
        FUN_4a1652c6(piVar6,*(undefined4 *)(*piVar6 + 0x10));
        iVar2 = iVar2 + 1;
      }
    }
    puVar1 = PTR_DAT_4a048e48;
    puVar5 = PTR_DAT_4a048e40;
    puVar7 = (undefined1 *)(*(int *)PTR_DAT_4a048e48 + DAT_4a048e4c);
    iVar3 = *(int *)(PTR_DAT_4a048e40 + 0x10);
    *(int *)(PTR_DAT_4a048e40 + 0x10) = iVar3 + 1;
    *(int *)(puVar5 + 0x14) = iVar3 + 1;
    FUN_4a0a7970(auStack_28);
    uVar4 = *(undefined4 *)PTR_DAT_4a048e50;
    host_s3eDeviceYield_thumb(10);
    if (*(int *)(puVar5 + 0x14) <= *(int *)(puVar5 + 0x10)) {
      FUN_4a05a68c();
      if (*(int *)(*(int *)puVar1 + 0xc) == 3) {
        host_eglBindAPI_thumb(DAT_4a048e54);
      }
      puVar5 = PTR_FUN_4a150b60_1_4a048e60;
      if (*(int *)(*(int *)PTR_DAT_4a048e48 + 0xc) == 2) {
        puVar5 = PTR_FUN_4a048e5c;
      }
      *(undefined **)PTR_DAT_4a048e58 = puVar5;
      host_s3eDeviceYield_thumb(5);
      puVar5 = PTR_DAT_4a048e40;
      if (*(int *)(PTR_DAT_4a048e40 + 0x14) <= *(int *)(PTR_DAT_4a048e40 + 0x10)) {
        thunk_FUN_4a049dc8();
        thunk_FUN_4a0360f8(*puVar7,puVar7[1],puVar7[2],puVar7[3]);
        if (puVar5[1] != '\0') {
          iVar3 = 0;
          piVar6 = (int *)PTR_DAT_4a048e44;
          while (piVar6 = (int *)piVar6[2], piVar6 != (int *)PTR_DAT_4a048e44) {
            if (*(int *)(*(int *)PTR_DAT_4a048e48 + 0x674) != 0) {
              thunk_FUN_4a0015f0(iVar3 << 0xc,iVar2);
              FUN_4a1652d2();
            }
            FUN_4a1652c6(piVar6,*(undefined4 *)(*piVar6 + 0xc));
            host_s3eDeviceYield_thumb(0);
            if (*(int *)(PTR_DAT_4a048e40 + 0x10) < *(int *)(PTR_DAT_4a048e40 + 0x14))
            goto LAB_4a048e24;
            iVar3 = iVar3 + 1;
          }
        }
        FUN_4a1652c6(3,*(undefined4 *)(PTR_DAT_4a048e64 + 0x20));
        if (*(int *)(*(int *)PTR_DAT_4a048e48 + 0x67c) != 0) {
          FUN_4a070740();
        }
      }
    }
LAB_4a048e24:
    *(undefined4 *)PTR_DAT_4a048e50 = uVar4;
    puVar5 = PTR_DAT_4a048e40;
    iVar2 = *(int *)(PTR_DAT_4a048e40 + 0x10);
    *(int *)(PTR_DAT_4a048e40 + 0x10) = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      *(undefined4 *)(puVar5 + 0x14) = 0;
    }
    FUN_4a0a79e4(auStack_28);
  }
  return 0;
}



// Address: 4a048e6c

void FUN_4a048e6c(undefined4 param_1,undefined4 param_2)

{
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  local_8 = 0;
  local_6 = 0;
  local_c = 0x1000;
  local_a = 0x1000;
  FUN_4a048f0c(param_1,param_2,&local_8,&local_c,0);
  return;
}



// Address: 4a048eac

void FUN_4a048eac(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  local_8 = 0;
  local_6 = 0;
  local_c = 0x1000;
  local_a = 0x1000;
  FUN_4a048f0c(param_1,param_2,&local_8,&local_c,param_3);
  return;
}



// Address: 4a048eec

void FUN_4a048eec(void)

{
  FUN_4a048f0c();
  return;
}



// Address: 4a048f0c

void FUN_4a048f0c(short *param_1,short *param_2,short *param_3,short *param_4,int param_5)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  code *pcVar8;
  int iVar9;
  short *psVar10;
  uint *puVar11;
  uint uVar12;
  short *psVar13;
  
  puVar4 = PTR_DAT_4a0492cc;
  puVar6 = PTR_DAT_4a0492c4;
  puVar11 = *(uint **)PTR_DAT_4a0492c4;
  uVar12 = puVar11[300];
  iVar9 = *(int *)(uVar12 + 0x2c);
  if ((((iVar9 == 0) || ((~(*(uint *)(uVar12 + 0x10) >> 2) & 1) != 0)) ||
      ((int)((uint)*(ushort *)(iVar9 + 0x20) * ((int)*param_4 - (int)*param_3)) >> 0xc !=
       (int)*param_2)) ||
     ((int)(((int)param_4[1] - (int)param_3[1]) * (uint)*(ushort *)(iVar9 + 0x22)) >> 0xc !=
      (int)param_2[1])) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (((bVar3) && (param_5 == 0)) &&
     ((((*(uint *)(uVar12 + 0x10) & 2) != 0 || ((*(uint *)(uVar12 + 0x10) & 1) == 2)) ||
      ((((*puVar11 & 0x800) == 0 || ((puVar11[0x148] & 0xffffff) == 0)) &&
       (((*puVar11 & 0x1000) == 0 ||
        ((puVar11[0x157] == 0xffffffff && ((DAT_4a0492c8 & ~puVar11[0x149]) == 0)))))))))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  psVar13 = *(short **)(*(int *)PTR_DAT_4a0492c4 + 0x38c);
  puVar11[0xe2] = (uint)psVar13;
  if (!bVar3) {
    puVar11[0xe3] = (uint)(psVar13 + 8);
    sVar1 = param_1[1];
    *psVar13 = *param_1;
    psVar13[1] = sVar1;
    sVar1 = param_1[1];
    sVar2 = param_2[1];
    psVar13[2] = *param_1;
    psVar13[3] = sVar1 + sVar2;
    sVar1 = param_1[1];
    psVar13[4] = *param_1 + *param_2;
    psVar13[5] = sVar1;
    sVar1 = param_1[1];
    sVar2 = param_2[1];
    psVar13[6] = *param_1 + *param_2;
    psVar13[7] = sVar1 + sVar2;
    iVar9 = *(int *)puVar6;
    psVar10 = *(short **)(iVar9 + 0x38c);
    *(short **)(iVar9 + 0x388) = psVar10;
    *(short **)(iVar9 + 0x38c) = psVar10 + 8;
    sVar1 = param_3[1];
    *psVar10 = *param_3;
    psVar10[1] = sVar1;
    sVar1 = param_3[1];
    sVar2 = param_4[1];
    psVar10[2] = *param_3;
    psVar10[3] = sVar1 + sVar2;
    sVar1 = param_3[1];
    psVar10[4] = *param_3 + *param_4;
    psVar10[5] = sVar1;
    sVar1 = param_3[1];
    sVar2 = param_4[1];
    psVar10[6] = *param_3 + *param_4;
    psVar10[7] = sVar1 + sVar2;
    (**(code **)(puVar4 + 0x14))(psVar13,4,3);
    FUN_4a0363b8(psVar10,0);
    FUN_4a0397f0(param_5,4);
    puVar11 = *(uint **)puVar6;
    if ((*puVar11 & 0x400) == 0) {
      if ((puVar11[1] & 0x800) != 0) {
        return;
      }
      *(undefined1 *)(puVar11 + 0x1a0) = 1;
      pcVar8 = *(code **)(puVar4 + 0x24);
      uVar7 = 4;
      puVar6 = (undefined *)0x0;
      uVar5 = 4;
    }
    else {
      if ((puVar11[1] & 0x800) != 0) {
        return;
      }
      *(undefined1 *)(puVar11 + 0x1a0) = 1;
      pcVar8 = *(code **)(puVar4 + 0x24);
      uVar7 = 6;
      uVar5 = 0;
      puVar6 = PTR_DAT_4a0492d0;
    }
    (*pcVar8)(uVar5,puVar6,uVar7);
    return;
  }
  puVar11[0xe3] = (uint)(psVar13 + 2);
  *psVar13 = *param_1;
  psVar13[1] = param_1[1];
  iVar9 = *(int *)puVar6;
  psVar10 = *(short **)(iVar9 + 0x38c);
  *(short **)(iVar9 + 0x388) = psVar10;
  *(short **)(iVar9 + 0x38c) = psVar10 + 4;
  *psVar10 = *param_3;
  psVar10[1] = param_3[1];
  psVar10[2] = *param_4;
  psVar10[3] = param_4[1];
  (**(code **)(puVar4 + 0x14))(psVar13,4,3);
  FUN_4a0363b8(psVar10,0);
  FUN_4a0397f0(param_5,4);
  if ((*(uint *)(*(int *)puVar6 + 4) & 0x800) == 0) {
    *(undefined1 *)(*(int *)puVar6 + 0x680) = 1;
                    /* WARNING: Could not recover jumptable at 0x4a0490c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(puVar4 + 0x24))(7,0,1);
    return;
  }
  return;
}



// Address: 4a0492d4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a0492d4(int param_1,uint param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined *puVar4;
  int iVar5;
  short *psVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  undefined4 *puVar12;
  short *psVar13;
  short *psVar14;
  int iVar15;
  int iVar16;
  ushort *puVar17;
  uint uVar18;
  int iVar19;
  short *psVar20;
  int iVar21;
  short local_84;
  short local_82;
  short local_80;
  short local_7e;
  short local_7c;
  short local_7a;
  uint local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  undefined4 *local_5c;
  short *local_58;
  int local_54;
  short *local_50;
  short *local_4c;
  short *local_48;
  short *local_44;
  int local_40;
  short *local_3c;
  short *local_38;
  short *local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  
  local_40 = param_2 << 2;
  iVar5 = *(int *)PTR_DAT_4a049b08;
  if (param_1 == 0) {
    local_40 = *(int *)(iVar5 + 0x454) * 6;
  }
  local_44 = *(short **)(iVar5 + 0x38c);
  local_4c = local_44 + local_40 * 2;
  iVar15 = *(int *)(iVar5 + 0x458);
  psVar11 = local_4c + local_40 * 2;
  *(short **)(iVar5 + 0x388) = local_4c;
  *(short **)(iVar5 + 0x38c) = psVar11;
  local_54 = *(int *)(iVar5 + 0x468);
  local_58 = (short *)0x0;
  iVar16 = *(int *)(iVar5 + 0x45c);
  if (iVar16 != 0) {
    *(short **)(iVar5 + 0x388) = psVar11;
    *(short **)(iVar5 + 0x38c) = psVar11 + local_40 * 3;
    local_58 = psVar11;
  }
  local_5c = (undefined4 *)0x0;
  local_60 = *(int *)(iVar5 + 0x470);
  if (local_60 != 0) {
    local_5c = *(undefined4 **)(iVar5 + 0x38c);
    *(undefined4 **)(iVar5 + 0x388) = local_5c;
    *(undefined4 **)(iVar5 + 0x38c) = local_5c + local_40;
  }
  local_64 = *(int *)(*(int *)(iVar5 + 0x4b0) + 0x2c);
  local_68 = 0;
  local_6c = 0;
  uVar18 = 0;
  if (param_1 != 0) {
    uVar18 = param_2;
  }
  local_2c = param_1;
  local_28 = param_2;
  if (param_1 == 0 || uVar18 == 0) {
    uVar18 = 0;
    psVar11 = local_58;
    puVar12 = local_5c;
    psVar13 = local_44;
    psVar14 = local_4c;
    if (*(int *)(iVar5 + 0x454) != 0) {
      do {
        local_74 = uVar18 * 2 + 1;
        iVar5 = *(int *)(*(int *)PTR_DAT_4a049b08 + 0x468);
        iVar19 = (int)*(short *)(iVar5 + local_74 * 4);
        iVar10 = (int)*(short *)(iVar5 + uVar18 * 8);
        iVar9 = iVar19 - iVar10;
        if (iVar9 < 1) {
          iVar9 = iVar10 - iVar19;
        }
        sVar1 = (short)((uint)*(ushort *)(local_64 + 0x20) * iVar9 >> 0xc);
        iVar10 = (int)*(short *)(iVar5 + local_74 * 4 + 2);
        iVar9 = (int)*(short *)(iVar5 + uVar18 * 8 + 2);
        iVar5 = iVar10 - iVar9;
        if (iVar5 < 1) {
          iVar5 = iVar9 - iVar10;
        }
        sVar3 = (short)((uint)*(ushort *)(local_64 + 0x22) * iVar5 >> 0xc);
        psVar20 = (short *)(iVar15 + uVar18 * 4);
        *psVar13 = *psVar20;
        psVar13[1] = psVar20[1];
        local_3c = (short *)(local_54 + uVar18 * 8);
        *psVar14 = *local_3c;
        psVar14[1] = local_3c[1];
        sVar2 = psVar20[1];
        psVar13[2] = *psVar20;
        psVar13[3] = sVar2 + sVar3;
        local_50 = psVar14 + 4;
        psVar6 = (short *)(local_54 + local_74 * 4);
        sVar2 = psVar6[1];
        psVar14[2] = *local_3c;
        psVar14[3] = sVar2;
        sVar2 = psVar20[1];
        psVar13[4] = *psVar20 + sVar1;
        psVar13[5] = sVar2 + sVar3;
        *local_50 = *psVar6;
        psVar14[5] = psVar6[1];
        psVar13[6] = *psVar20;
        psVar13[7] = psVar20[1];
        psVar14[6] = *local_3c;
        psVar14[7] = local_3c[1];
        local_48 = psVar13 + 10;
        sVar2 = psVar20[1];
        psVar13[8] = *psVar20 + sVar1;
        psVar13[9] = sVar3 + sVar2;
        psVar14[8] = *psVar6;
        psVar14[9] = psVar6[1];
        sVar2 = psVar20[1];
        *local_48 = sVar1 + *psVar20;
        psVar13[0xb] = sVar2;
        sVar1 = local_3c[1];
        local_70 = CONCAT22(sVar1,*psVar6);
        psVar14[10] = *psVar6;
        psVar14[0xb] = sVar1;
        psVar20 = psVar11;
        if (iVar16 != 0) {
          psVar6 = (short *)(iVar16 + uVar18 * 6);
          *psVar11 = *psVar6;
          psVar11[1] = psVar6[1];
          psVar11[2] = psVar6[2];
          psVar11[3] = *psVar6;
          psVar11[4] = psVar6[1];
          psVar11[5] = psVar6[2];
          psVar11[6] = *psVar6;
          psVar11[7] = psVar6[1];
          psVar11[8] = psVar6[2];
          psVar11[9] = *psVar6;
          psVar11[10] = psVar6[1];
          psVar11[0xb] = psVar6[2];
          psVar11[0xc] = *psVar6;
          psVar11[0xd] = psVar6[1];
          psVar11[0xe] = psVar6[2];
          psVar20 = psVar11 + 0x12;
          psVar11[0xf] = *psVar6;
          psVar11[0x10] = psVar6[1];
          psVar11[0x11] = psVar6[2];
        }
        if (local_60 != 0) {
          iVar5 = 2;
          puVar8 = (undefined4 *)(local_60 + uVar18 * 4);
          puVar7 = puVar12 + -1;
          do {
            iVar5 = iVar5 + -1;
            puVar7 = puVar7 + 1;
            *puVar7 = *puVar8;
          } while (iVar5 != 0);
          iVar5 = 1;
          do {
            puVar7[1] = *puVar8;
            iVar5 = iVar5 + -1;
            puVar7[2] = *puVar8;
            puVar7[3] = *puVar8;
            puVar7 = puVar7 + 4;
            *puVar7 = *puVar8;
          } while (iVar5 != 0);
          puVar12 = puVar12 + 6;
        }
        uVar18 = uVar18 + 1;
        psVar11 = psVar20;
        psVar13 = psVar13 + 0xc;
        psVar14 = psVar14 + 0xc;
      } while (uVar18 < *(uint *)(*(int *)PTR_DAT_4a049b08 + 0x454));
    }
  }
  else {
    local_68 = param_2 * 6;
    local_70 = *(int *)(iVar5 + 0x38c);
    uVar18 = 0;
    *(int *)(iVar5 + 0x388) = local_70;
    *(uint *)(iVar5 + 0x38c) = param_2 * 0xc + local_70;
    psVar11 = local_58;
    puVar12 = local_5c;
    psVar13 = local_44;
    psVar14 = local_4c;
    local_6c = local_70;
    do {
      puVar17 = (ushort *)(local_2c + uVar18 * 2);
      local_30 = (uint)*puVar17;
      iVar10 = *(int *)(*(int *)PTR_DAT_4a049b08 + 0x468);
      iVar5 = local_30 * 2 + 1;
      iVar9 = (int)*(short *)(iVar10 + iVar5 * 4);
      iVar19 = (int)*(short *)(iVar10 + local_30 * 8);
      iVar21 = iVar9 - iVar19;
      if (iVar21 < 1) {
        iVar21 = iVar19 - iVar9;
      }
      local_78 = iVar21 * (uint)*(ushort *)(local_64 + 0x20) >> 0xc & 0xfff0ffff;
      iVar9 = (int)*(short *)(iVar10 + iVar5 * 4 + 2);
      iVar10 = (int)*(short *)(iVar10 + local_30 * 8 + 2);
      iVar19 = iVar9 - iVar10;
      if (iVar19 < 1) {
        iVar19 = iVar10 - iVar9;
      }
      sVar2 = (short)(iVar19 * (uint)*(ushort *)(local_64 + 0x22) >> 0xc);
      psVar20 = (short *)(iVar15 + local_30 * 4);
      *psVar13 = *psVar20;
      psVar13[1] = psVar20[1];
      local_34 = (short *)(local_54 + local_30 * 8);
      *psVar14 = *local_34;
      psVar14[1] = local_34[1];
      psVar20 = (short *)(iVar15 + (uint)*puVar17 * 4);
      sVar1 = psVar20[1];
      psVar13[2] = *psVar20;
      psVar13[3] = sVar1 + sVar2;
      local_38 = (short *)(local_54 + iVar5 * 4);
      sVar1 = local_38[1];
      psVar14[2] = *local_34;
      psVar14[3] = sVar1;
      psVar20 = (short *)(iVar15 + (uint)*puVar17 * 4);
      sVar1 = psVar20[1];
      psVar13[4] = *psVar20 + (short)local_78;
      psVar13[5] = sVar2 + sVar1;
      psVar14[4] = *local_38;
      psVar14[5] = local_38[1];
      psVar20 = (short *)(iVar15 + (uint)*puVar17 * 4);
      sVar1 = psVar20[1];
      psVar13[6] = *psVar20 + (short)local_78;
      psVar13[7] = sVar1;
      sVar1 = local_34[1];
      local_74 = CONCAT22(sVar1,*local_38);
      psVar14[6] = *local_38;
      psVar14[7] = sVar1;
      local_84 = (short)(uVar18 << 2);
      local_82 = local_84 + 1;
      local_80 = local_84 + 2;
      local_7a = local_84 + 3;
      local_7e = local_84;
      local_7c = local_80;
      FUN_4a000f84(local_70,&local_84,0xc);
      local_70 = local_70 + 0xc;
      psVar20 = psVar11;
      if (iVar16 != 0) {
        psVar6 = (short *)(iVar16 + (uint)*puVar17 * 6);
        *psVar11 = *psVar6;
        psVar11[1] = psVar6[1];
        psVar11[2] = psVar6[2];
        psVar11[3] = *psVar6;
        psVar11[4] = psVar6[1];
        psVar11[5] = psVar6[2];
        psVar11[6] = *psVar6;
        psVar11[7] = psVar6[1];
        psVar11[8] = psVar6[2];
        psVar20 = psVar11 + 0xc;
        psVar11[9] = *psVar6;
        psVar11[10] = psVar6[1];
        psVar11[0xb] = psVar6[2];
      }
      if (local_60 != 0) {
        puVar7 = (undefined4 *)(local_60 + (uint)*puVar17 * 4);
        puVar8 = puVar12 + 3;
        *puVar12 = *puVar7;
        puVar12[1] = *puVar7;
        puVar12[2] = *puVar7;
        puVar12 = puVar12 + 4;
        *puVar8 = *puVar7;
      }
      uVar18 = uVar18 + 1;
      psVar11 = psVar20;
      psVar13 = psVar13 + 8;
      psVar14 = psVar14 + 8;
    } while (uVar18 < local_28);
  }
  puVar4 = PTR_DAT_4a049b0c;
  (**(code **)(PTR_DAT_4a049b0c + 0x14))(local_44,local_40,3);
  FUN_4a0363b8(local_4c,0);
  if (iVar16 != 0) {
    FUN_4a03bf40(local_58,local_40);
  }
  if (local_60 != 0) {
    FUN_4a0397f0(local_5c,local_40);
  }
  if ((*(uint *)(*(int *)PTR_DAT_4a049b08 + 4) & 0x800) == 0) {
    if (local_68 != 0) {
      *(undefined1 *)(*(int *)PTR_DAT_4a049b08 + 0x680) = 1;
                    /* WARNING: Could not recover jumptable at 0x4a049b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(puVar4 + 0x24))(0,local_6c,local_68);
      return;
    }
    return;
  }
  return;
}



// Address: 4a049b10

void FUN_4a049b10(void)

{
  undefined *puVar1;
  uint uVar2;
  
  puVar1 = PTR_DAT_4a049b34;
  for (uVar2 = 0; uVar2 < *(uint *)(puVar1 + 4); uVar2 = uVar2 + 1) {
    FUN_4a0a4704(*(undefined4 *)(*(int *)puVar1 + uVar2 * 4));
  }
  return;
}



// Address: 4a049b3c

void FUN_4a049b3c(undefined1 *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  undefined1 uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint local_30;
  undefined1 *local_24;
  
  uVar3 = *(ushort *)(param_4 + 0x12);
  uVar4 = (uint)*(byte *)(param_3 + 8);
  if (7 < uVar4) {
    uVar4 = thunk_FUN_4a0e6b6c(param_4 + 8);
  }
  uVar4 = uVar4 + 7 >> 3;
  local_30 = (uint)*(ushort *)(param_4 + 0x10);
  bVar1 = *(byte *)(param_3 + 8);
  if (bVar1 < 8) {
    if (bVar1 == 4) {
      local_30 = local_30 + 1 >> 1;
    }
    else if (bVar1 == 2) {
      local_30 = local_30 + 3 >> 2;
    }
    else if (bVar1 == 1) {
      local_30 = local_30 + 7 >> 3;
    }
  }
  local_24 = param_1;
  for (uVar5 = 0; uVar5 < uVar3; uVar5 = uVar5 + 1) {
    uVar2 = *local_24;
    puVar10 = local_24 + 1;
    if (*(char *)(param_3 + 9) == '\0') {
      for (uVar9 = 0; uVar9 < local_30; uVar9 = uVar9 + 1) {
        if (uVar9 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = (int)param_1 - uVar4;
        }
        FUN_4a04cd64(param_1,puVar10,iVar7,0,0,uVar2,1);
        puVar10 = puVar10 + 1;
        param_1 = param_1 + 1;
      }
    }
    else {
      for (uVar9 = 0; uVar9 < local_30; uVar9 = uVar9 + 1) {
        if (uVar9 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = (int)param_1 - uVar4;
        }
        if (uVar5 == 0) {
          puVar8 = (undefined1 *)0x0;
        }
        else {
          puVar8 = param_1 + (1 - param_2);
        }
        iVar6 = 0;
        if ((uVar5 != 0) && (uVar9 != 0)) {
          iVar6 = (int)puVar8 - uVar4;
        }
        FUN_4a04cd64(param_1,puVar10,iVar7,puVar8,iVar6,uVar2,uVar4);
        puVar10 = puVar10 + uVar4;
        param_1 = param_1 + uVar4;
      }
    }
    local_24 = local_24 + param_2;
  }
  return;
}



// Address: 4a049c44

void FUN_4a049c44(void)

{
  thunk_FUN_4a161570(0x1c);
  FUN_4a097f74();
  return;
}



// Address: 4a049c58

void FUN_4a049c58(undefined2 *param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  short *psVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 auStack_40 [28];
  
  uVar9 = param_4 - 1;
  psVar8 = (short *)(param_2 + param_3 * 6);
  puVar10 = auStack_40;
  if (0x7fffffff < uVar9) {
    puVar10 = &stack0xffffffdc;
  }
  if (uVar9 != 0xffffffff && param_4 < 0 == SCARRY4(uVar9,1)) {
    do {
      uVar4 = FUN_4a171fac((int)psVar8[2]);
      *(undefined4 *)(puVar10 + 0x18) = uVar4;
      uVar4 = FUN_4a17211c(uVar4,param_5[6]);
      uVar5 = FUN_4a171fac((int)psVar8[1]);
      uVar6 = FUN_4a17211c(uVar5,param_5[3]);
      uVar7 = FUN_4a171fac((int)*psVar8);
      *(undefined4 *)(puVar10 + 0x14) = uVar7;
      uVar7 = FUN_4a17211c(uVar7,*param_5);
      uVar6 = FUN_4a171a94(uVar7,uVar6);
      FUN_4a171a94(uVar6,uVar4);
      uVar1 = FUN_4a171e1c();
      uVar4 = FUN_4a17211c(*(undefined4 *)(puVar10 + 0x18),param_5[7]);
      uVar6 = FUN_4a17211c(uVar5,param_5[4]);
      uVar7 = FUN_4a17211c(*(undefined4 *)(puVar10 + 0x14),param_5[1]);
      uVar6 = FUN_4a171a94(uVar7,uVar6);
      FUN_4a171a94(uVar6,uVar4);
      uVar2 = FUN_4a171e1c();
      uVar4 = FUN_4a17211c(*(undefined4 *)(puVar10 + 0x18),param_5[8]);
      uVar5 = FUN_4a17211c(uVar5,param_5[5]);
      uVar6 = FUN_4a17211c(*(undefined4 *)(puVar10 + 0x14),param_5[2]);
      uVar5 = FUN_4a171a94(uVar6,uVar5);
      FUN_4a171a94(uVar5,uVar4);
      uVar3 = FUN_4a171e1c();
      *(undefined2 *)(puVar10 + 4) = uVar1;
      *(undefined2 *)(puVar10 + 6) = uVar2;
      *(undefined2 *)(puVar10 + 8) = uVar3;
      uVar9 = uVar9 - 1;
      *(undefined2 *)(puVar10 + 0xc) = *(undefined2 *)(puVar10 + 4);
      psVar8 = psVar8 + 3;
      *(undefined2 *)(puVar10 + 0xe) = *(undefined2 *)(puVar10 + 6);
      *(undefined2 *)(puVar10 + 0x10) = *(undefined2 *)(puVar10 + 8);
      *param_1 = *(undefined2 *)(puVar10 + 0xc);
      param_1[1] = *(undefined2 *)(puVar10 + 0xe);
      param_1[2] = *(undefined2 *)(puVar10 + 0x10);
      param_1 = param_1 + 3;
    } while (uVar9 < 0x80000000);
    return;
  }
  return;
}



// Address: 4a049dc0

undefined4 FUN_4a049dc0(void)

{
  return 0x1c;
}



// Address: 4a049dc8

void FUN_4a049dc8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined1 auStack_24 [4];
  
  FUN_4a150348(0xd33,auStack_24);
  puVar1 = PTR_DAT_4a04a1a4;
  local_28 = 0;
  if (*(int *)(*(int *)PTR_DAT_4a04a1a4 + 0xc) == 3) {
    uVar3 = 0x8b4d;
  }
  else {
    uVar3 = 0x84e2;
  }
  FUN_4a150348(uVar3,&local_28);
  host_s3eConfigGetInt_arm(&DAT_4a04a1bc,s_MaxTextureStages_4a04a1a8,&local_28);
  *(undefined4 *)(*(int *)puVar1 + 0x5b4) = local_28;
  thunk_FUN_4a1500f8(0xb44);
  thunk_FUN_4a14ffe8(0x405);
  thunk_FUN_4a150140(0xb71);
  FUN_4a15022c(0x901);
  thunk_FUN_4a14fee4(1,1,1);
  thunk_FUN_4a1500b0(1);
  thunk_FUN_4a1500f8(0xbe2);
  if (*(int *)(*(int *)puVar1 + 0xc) == 2) {
    thunk_FUN_4a1509f4(0x1d01);
    thunk_FUN_4a1500f8(0xbc0);
    FUN_4a150618(0x1702);
    FUN_4a1504dc();
    thunk_FUN_4a1500f8(0xb60);
    thunk_FUN_4a1501a4(0xb65,0x2601);
    thunk_FUN_4a1500f8(0xb50);
    thunk_FUN_4a14fed0(0x10000,0x10000,0x10000);
    thunk_FUN_4a1500f8(0xbc0);
    thunk_FUN_4a1500f8(0xbe2);
    puVar2 = PTR_DAT_4a04a1c0;
    *(undefined4 *)PTR_DAT_4a04a1c0 = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0;
    *(undefined4 *)(puVar2 + 0x10) = 0;
    *(undefined4 *)(puVar2 + 0x14) = 0;
    *(undefined4 *)(puVar2 + 0x18) = 0;
    *(undefined4 *)(puVar2 + 0x1c) = 0;
    *(undefined4 *)(puVar2 + 0x20) = 0;
    *(undefined4 *)(puVar2 + 0x24) = 0;
    *(undefined4 *)(puVar2 + 0x28) = 0;
    *(undefined4 *)(puVar2 + 0x2c) = 0;
    *(undefined4 *)(puVar2 + 0x30) = 0;
    *(undefined4 *)(puVar2 + 0x34) = 0;
    *(undefined4 *)(puVar2 + 0x38) = 0;
    *(undefined4 *)(puVar2 + 0x3c) = 0;
    puVar2 = PTR_DAT_4a04a1c4;
    if (PTR_DAT_4a04a1c4[0x49] == '\0') {
      iVar4 = thunk_FUN_4a0083c0(0x30);
      if (iVar4 == 0) {
        uVar3 = 0x39800000;
      }
      else {
        uVar3 = 0x3f800000;
      }
      *(undefined4 *)(puVar2 + 0x30) = uVar3;
      *(undefined4 *)(puVar2 + 0x1c) = uVar3;
      *(undefined4 *)(puVar2 + 8) = uVar3;
      *(undefined4 *)(puVar2 + 0x44) = 0x3f800000;
    }
    else {
      iVar4 = thunk_FUN_4a0083c0(0x30);
      if (iVar4 == 0) {
        uVar3 = 0x10;
      }
      else {
        uVar3 = 0x10000;
      }
      *(undefined4 *)(puVar2 + 0x30) = uVar3;
      *(undefined4 *)(puVar2 + 0x1c) = uVar3;
      *(undefined4 *)(puVar2 + 8) = uVar3;
      *(undefined4 *)(puVar2 + 0x44) = 0x10000;
    }
    puVar2[0x48] = 1;
    *(undefined4 *)(puVar2 + 0x54) = 0;
    *(undefined4 *)(puVar2 + 0x58) = 0;
    *(undefined4 *)(puVar2 + 0x5c) = 0;
    *(undefined4 *)(puVar2 + 0x60) = 0;
    *(undefined4 *)(puVar2 + 100) = 0;
    *(undefined4 *)(puVar2 + 0x68) = 0;
    *(undefined4 *)(puVar2 + 0x6c) = 0;
    *(undefined4 *)(puVar2 + 0x70) = 0;
    *(undefined4 *)(puVar2 + 0x74) = 0;
    *(undefined4 *)(puVar2 + 0x78) = 0;
    *(undefined4 *)(puVar2 + 0x7c) = 0;
    *(undefined4 *)(puVar2 + 0x80) = 0;
    *(undefined4 *)(puVar2 + 0x84) = 0;
    *(undefined4 *)(puVar2 + 0x88) = 0;
    *(undefined4 *)(puVar2 + 0x8c) = 0;
    *(undefined4 *)(puVar2 + 0x90) = 0;
    if (puVar2[0x95] == '\0') {
      iVar4 = thunk_FUN_4a0083c0(0x30);
      if (iVar4 == 0) {
        uVar3 = 0x39800000;
      }
      else {
        uVar3 = 0x3f800000;
      }
      *(undefined4 *)(puVar2 + 0x7c) = uVar3;
      *(undefined4 *)(puVar2 + 0x68) = uVar3;
      *(undefined4 *)(puVar2 + 0x54) = uVar3;
      *(undefined4 *)(puVar2 + 0x90) = 0x3f800000;
    }
    else {
      iVar4 = thunk_FUN_4a0083c0(0x30);
      if (iVar4 == 0) {
        uVar3 = 0x10;
      }
      else {
        uVar3 = 0x10000;
      }
      *(undefined4 *)(puVar2 + 0x7c) = uVar3;
      *(undefined4 *)(puVar2 + 0x68) = uVar3;
      *(undefined4 *)(puVar2 + 0x54) = uVar3;
      *(undefined4 *)(puVar2 + 0x90) = 0x10000;
    }
    puVar2[0x94] = 1;
    uVar7 = 0;
    uVar5 = *(uint *)(*(int *)puVar1 + 0x5b4);
    if (4 < uVar5) {
      uVar5 = 4;
    }
    if (uVar5 != 0) {
      do {
        thunk_FUN_4a14fcc4(uVar7 + 0x84c0);
        FUN_4a14fd70(0xde1,0);
        thunk_FUN_4a150aa8(0x2300,0x2200,0x2100);
        uVar7 = uVar7 + 1;
        uVar5 = *(uint *)(*(int *)puVar1 + 0x5b4);
        if (4 < uVar5) {
          uVar5 = 4;
        }
      } while (uVar7 < uVar5);
    }
    thunk_FUN_4a14fcc4(0x84c0);
    FUN_4a1503fc(0xc50,0x1102);
    thunk_FUN_4a1500f8(0xb60);
    thunk_FUN_4a1501a4(0xb65,0x2601);
    thunk_FUN_4a1500f8(0xb50);
    local_38 = *(undefined4 *)PTR_DAT_4a04a1c8;
    uStack_34 = *(undefined4 *)(PTR_DAT_4a04a1c8 + 4);
    uStack_30 = *(undefined4 *)(PTR_DAT_4a04a1c8 + 8);
    uStack_2c = *(undefined4 *)(PTR_DAT_4a04a1c8 + 0xc);
    FUN_4a150468(0xb53,&local_38);
    FUN_4a150600(0x408,0x1600,&local_38);
    FUN_4a150600(0x408,0x1200,&local_38);
    FUN_4a150600(0x408,0x1201,&local_38);
    FUN_4a150600(0x408,0x1202,&local_38);
    uVar5 = 0x4000;
    do {
      FUN_4a1504a0(uVar5,0x1200,&local_38);
      FUN_4a1504a0(uVar5,0x1201,&local_38);
      FUN_4a1504a0(uVar5,0x1202,&local_38);
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x4001);
    FUN_4a150454(0xb52,0);
  }
  thunk_FUN_4a1500f8(0xbd0);
  puVar6 = *(uint **)puVar1;
  if ((puVar6[0x16f] & 0x40) == 0) {
    if ((*puVar6 & 0x2000000) == 0) {
      uVar5 = 0x206;
    }
    else {
      uVar5 = 0x204;
    }
    puVar6[0x171] = uVar5;
    uVar3 = 0;
  }
  else {
    uVar3 = 0x3f800000;
  }
  thunk_FUN_4a14fe64(uVar3);
  FUN_4a150094(*(undefined4 *)(*(int *)puVar1 + 0x5c4));
  if (*(int *)(*(int *)puVar1 + 0xc) == 3) {
    FUN_4a150348(0x8869,*(int *)puVar1 + 0x5b8);
  }
  iVar4 = thunk_FUN_4a0083c0(0xe);
  if (iVar4 != 0) {
    FUN_4a150348(0x8ca6,PTR_DAT_4a04a240);
  }
  return;
}



// Address: 4a04a244

void FUN_4a04a244(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  piVar6 = *(int **)PTR_DAT_4a04a348;
  if ((piVar6[0xcf] != *param_1) || (piVar6[0xd0] != param_1[1] << (piVar6[0x19b] & 0xffU))) {
    piVar6[0xd3] = 0;
  }
  iVar4 = *param_1;
  piVar6[0xcf] = iVar4;
  iVar5 = param_1[1] << (piVar6[0x19b] & 0xffU);
  piVar6[0xd0] = iVar5;
  uVar2 = piVar6[0xd5];
  if ((uVar2 & 1) == 0) {
    piVar6[0xd1] = iVar4;
    piVar6[0xd2] = iVar5;
  }
  else {
    piVar6[0xd1] = iVar5;
    piVar6[0xd2] = iVar4;
  }
  iVar4 = piVar6[0xd1] << 2;
  piVar6[0xc6] = iVar4;
  iVar7 = piVar6[0xd2];
  piVar6[199] = iVar7 << 2;
  iVar4 = thunk_FUN_4a0066d8(0x1000000,piVar6[0xd1] << 5,iVar4,iVar5,param_2,uVar2,param_4);
  piVar6[0xcc] = iVar4;
  iVar5 = thunk_FUN_4a0066d8(0x1000000,iVar7 << 5);
  piVar6[0xcd] = iVar5;
  uVar3 = *(int *)(*(int *)PTR_DAT_4a04a348 + 0x66c) << 1;
  if ((uVar2 & 1) == 0) {
    piVar6[0xcd] = iVar5 >> (uVar3 & 0xff);
  }
  else {
    piVar6[0xcc] = iVar4 >> (uVar3 & 0xff);
  }
  puVar1 = PTR_DAT_4a04a348;
  iVar4 = thunk_FUN_4a0015f0(0x40000,piVar6[0xb7]);
  piVar6[0xcb] = iVar4;
  if (*piVar6 << 0x1b < 0) {
    iVar4 = host_s3eSurfacePtr_thumb();
    iVar5 = *(int *)puVar1;
    if (iVar4 == param_1[4]) {
      uVar2 = *(uint *)(iVar5 + 4) | 0x80;
    }
    else {
      uVar2 = *(uint *)(iVar5 + 4) & 0xffffff7f;
    }
    *(uint *)(iVar5 + 4) = uVar2;
    thunk_FUN_4a04db10(param_1);
  }
  iVar4 = *(int *)puVar1;
  if ((*(int *)(iVar4 + 0x344) != 0) && (*(int *)(iVar4 + 0x348) != 0)) {
    thunk_FUN_4a03b0f4(0);
  }
  return;
}



// Address: 4a04a350

void FUN_4a04a350(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = PTR_DAT_4a04a3b8;
  thunk_FUN_4a161530(*(undefined4 *)(*(int *)PTR_DAT_4a04a3b8 + 0x370));
  puVar2 = PTR_DAT_4a04a3bc;
  *(int *)(*(int *)puVar1 + 0x36c) = param_1;
  iVar3 = FUN_4a149148(0x14,param_1,puVar2);
  iVar4 = *(int *)puVar1;
  *(int *)(iVar4 + 0x370) = iVar3;
  *(int *)(iVar4 + 0x374) = iVar3;
  *(int *)(iVar4 + 0x410) = param_1 * 0x14 + -0xa00 + iVar3;
  *(int *)(iVar4 + 0x37c) = iVar3;
  *(undefined4 *)(iVar4 + 0x378) = 0;
  return;
}



// Address: 4a04a660

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_4a04a660(uint param_1,int param_2,ushort *param_3,ushort *param_4)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  short sVar7;
  short *psVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  short *psVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  short *psVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  ushort *puVar31;
  short sVar32;
  ushort *puVar33;
  uint uVar34;
  int iVar35;
  uint uVar36;
  uint uVar37;
  short *psVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  int iVar42;
  int iVar43;
  uint uVar44;
  uint uVar45;
  ushort *puVar46;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  ushort uStack_c8;
  ushort auStack_c6 [63];
  int iStack_48;
  ushort *puStack_44;
  ushort *puStack_40;
  ushort *puStack_3c;
  int iStack_38;
  uint uStack_34;
  short *psStack_30;
  ushort *puStack_2c;
  ushort *puStack_28;
  
  iVar43 = *(int *)PTR_DAT_4a04a720;
  psVar38 = *(short **)(iVar43 + 0x38c);
  *(short **)(iVar43 + 0x388) = psVar38;
  *(short **)(iVar43 + 0x38c) = psVar38 + param_1 * 2;
  uVar44 = 0;
  if (param_1 != 0) {
    uVar44 = param_1 & 1;
  }
  if (uVar44 == 1) {
    *psVar38 = *(short *)(param_2 + (uint)*param_3 * 4);
    psVar38[1] = *(short *)(param_2 + (uint)*param_3 * 4 + 2);
  }
  for (; (int)uVar44 < (int)param_1; uVar44 = uVar44 + 2) {
    puVar31 = param_3 + uVar44;
    psVar8 = psVar38 + uVar44 * 2;
    *psVar8 = *(short *)(param_2 + (uint)*puVar31 * 4);
    psVar8[1] = *(short *)(param_2 + (uint)*puVar31 * 4 + 2);
    psVar8[2] = *(short *)(param_2 + (uint)puVar31[1] * 4);
    psVar8[3] = *(short *)(param_2 + (uint)puVar31[1] * 4 + 2);
  }
  puStack_28 = param_4;
  puStack_2c = param_3;
  psStack_30 = psVar38;
  uStack_34 = param_1;
  uVar44 = param_1 - 1;
  iStack_d0 = (int)psVar38[1] * (int)psVar38[param_1 * 2 + -2] -
              (int)psVar38[param_1 * 2 + -1] * (int)*psVar38;
  if (0 < (int)uVar44) {
    iVar43 = param_1 - 1;
    psVar8 = psVar38;
    psVar18 = psVar38 + 3;
    psVar24 = psVar38 + 1;
    do {
      psVar38 = psVar38 + 2;
      iStack_d0 = ((int)*psVar18 * (int)*psVar8 - (int)*psVar38 * (int)*psVar24) + iStack_d0;
      iVar43 = iVar43 + -1;
      psVar8 = psVar8 + 2;
      psVar18 = psVar18 + 2;
      psVar24 = psVar24 + 2;
    } while (iVar43 != 0);
  }
  iStack_38 = param_1 - 2;
  if (iStack_d0 == 0) {
    uVar3 = *param_3;
    if (0 < (int)(param_1 - 2)) {
      iVar43 = param_1 - 2;
      puVar31 = param_4 + 1;
      puVar33 = param_3 + 2;
      puVar46 = param_4 + 2;
      do {
        param_3 = param_3 + 1;
        uVar4 = *param_3;
        uVar5 = *puVar33;
        *param_4 = uVar3;
        *puVar31 = uVar4;
        iVar43 = iVar43 + -1;
        *puVar46 = uVar5;
        param_4 = param_4 + 3;
        puVar31 = puVar31 + 3;
        puVar33 = puVar33 + 1;
        puVar46 = puVar46 + 3;
      } while (iVar43 != 0);
    }
  }
  else {
    if (iStack_d0 < 1) {
      uStack_c8 = 0;
      if (0 < (int)uVar44) {
        puVar31 = &uStack_c8;
        sVar7 = 0;
        for (uVar25 = uVar44 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
          sVar32 = (short)uStack_34 - sVar7;
          sVar7 = sVar7 + 1;
          puVar31 = puVar31 + 1;
          *puVar31 = sVar32 - 1;
        }
        for (iVar43 = (int)uVar44 >> 2; iVar43 != 0; iVar43 = iVar43 + -1) {
          sVar32 = (short)uStack_34 - sVar7;
          puVar31[1] = sVar32 - 1;
          puVar31[2] = sVar32 - 2;
          puVar31[3] = sVar32 - 3;
          sVar7 = sVar7 + 4;
          puVar31 = puVar31 + 4;
          *puVar31 = sVar32 - 4;
        }
      }
    }
    else if (param_1 != 0) {
      psVar38 = (short *)((int)&uStack_cc + 2);
      sVar7 = 0;
      for (param_1 = param_1 & 3; param_1 != 0; param_1 = param_1 - 1) {
        psVar38 = psVar38 + 1;
        *psVar38 = sVar7;
        sVar7 = sVar7 + 1;
      }
      for (uVar44 = uStack_34 >> 2; uVar44 != 0; uVar44 = uVar44 - 1) {
        psVar38[1] = sVar7;
        psVar38[2] = sVar7 + 1;
        psVar38[3] = sVar7 + 2;
        sVar32 = sVar7 + 3;
        sVar7 = sVar7 + 4;
        psVar38 = psVar38 + 4;
        *psVar38 = sVar32;
      }
    }
    iVar43 = 0;
    iStack_d8 = 0;
    uStack_cc = param_4;
    uVar44 = uStack_34;
    while (2 < (int)uVar44) {
      if ((int)uVar44 <= iVar43) {
        iVar43 = 0;
      }
      iVar42 = iVar43 + 1;
      if ((int)uVar44 <= iVar42) {
        iVar42 = 0;
      }
      iStack_d4 = iVar42 + 1;
      if ((int)uVar44 <= iStack_d4) {
        iStack_d4 = 0;
      }
      puStack_3c = &uStack_c8 + iVar43;
      uVar26 = (uint)psStack_30[(uint)*puStack_3c * 2];
      uVar19 = (uint)(psStack_30 + (uint)*puStack_3c * 2)[1];
      puStack_40 = &uStack_c8 + iVar42;
      uVar39 = (uint)psStack_30[(uint)*puStack_40 * 2];
      uVar41 = (uint)(psStack_30 + (uint)*puStack_40 * 2)[1];
      puStack_44 = &uStack_c8 + iStack_d4;
      uVar34 = (uint)psStack_30[(uint)*puStack_44 * 2];
      uVar36 = (uint)(psStack_30 + (uint)*puStack_44 * 2)[1];
      uVar20 = uVar19 - uVar41;
      iVar17 = (int)uVar20 >> 0x1f;
      uVar9 = uVar39 - uVar26;
      iVar1 = (int)uVar9 >> 0x1f;
      uVar45 = (uint)((ulonglong)uVar9 * (ulonglong)uVar19);
      uVar10 = (uint)((ulonglong)uVar20 * (ulonglong)uVar26);
      uVar11 = uVar10 + uVar45;
      uVar25 = -uVar11;
      iVar6 = -(uVar26 * iVar17 +
                ((int)uVar26 >> 0x1f) * uVar20 +
                (int)((ulonglong)uVar20 * (ulonglong)uVar26 >> 0x20) +
                uVar19 * iVar1 +
                ((int)uVar19 >> 0x1f) * uVar9 + (int)((ulonglong)uVar9 * (ulonglong)uVar19 >> 0x20)
                + (uint)CARRY4(uVar10,uVar45) + (uint)(uVar11 != 0));
      iStack_48 = (int)uVar36 >> 0x1f;
      uVar27 = (uint)((ulonglong)uVar9 * (ulonglong)uVar36);
      uVar10 = (uint)((ulonglong)uVar20 * (ulonglong)uVar34);
      uVar45 = uVar10 + uVar27;
      iVar21 = uVar34 * iVar17 +
               ((int)uVar34 >> 0x1f) * uVar20 + (int)((ulonglong)uVar20 * (ulonglong)uVar34 >> 0x20)
               + uVar36 * iVar1 +
                 iStack_48 * uVar9 + (int)((ulonglong)uVar9 * (ulonglong)uVar36 >> 0x20) +
               (uint)CARRY4(uVar10,uVar27) + iVar6 + (uint)CARRY4(uVar45,uVar25);
      if (iVar21 == 0 && uVar45 == uVar11) {
LAB_4a0513ec:
        if (iStack_d0 < 1) {
          *puStack_28 = puStack_2c[*puStack_40];
          puStack_28[1] = puStack_2c[*puStack_3c];
        }
        else {
          *puStack_28 = puStack_2c[*puStack_3c];
          puStack_28[1] = puStack_2c[*puStack_40];
        }
        puVar31 = puStack_28 + 2;
        puStack_28 = puStack_28 + 3;
        *puVar31 = puStack_2c[*puStack_44];
        iVar17 = (uVar44 - iVar42) + -1;
        if (0 < iVar17) {
          FUN_4a000f84(puStack_40,(int)auStack_c6 + iVar42 * 2,iVar17 * 2);
        }
        uVar44 = uVar44 - 1;
        iVar43 = iVar43 + -1;
      }
      else if ((int)-(iVar21 + (uint)(uVar45 != uVar11)) < 0 !=
               (SBORROW4(0,iVar21) != SBORROW4(-iVar21,(uint)(uVar45 != uVar11)))) {
        uVar22 = uVar41 - uVar36;
        uVar45 = uVar34 - uVar39;
        uVar28 = (uint)((ulonglong)uVar45 * (ulonglong)uVar41);
        uVar27 = (uint)((ulonglong)uVar22 * (ulonglong)uVar39);
        iVar12 = uVar27 + uVar28;
        uVar10 = -iVar12;
        uVar19 = uVar36 - uVar19;
        uVar26 = uVar26 - uVar34;
        uVar29 = (uint)((ulonglong)uVar26 * (ulonglong)uVar36);
        uVar13 = (uint)((ulonglong)uVar19 * (ulonglong)uVar34);
        iVar14 = uVar13 + uVar29;
        uVar11 = -iVar14;
        iVar21 = 1;
        iVar35 = 0;
        if (0 < (int)uVar44) {
          do {
            if (iVar35 != iVar43 && iVar35 != iVar42) {
              iVar21 = iStack_d4;
            }
            if ((iVar35 != iVar43 && iVar35 != iVar42) && iVar35 != iVar21) {
              uVar37 = (uint)psStack_30[(uint)(&uStack_c8)[iVar35] * 2];
              uVar40 = (uint)(psStack_30 + (uint)(&uStack_c8)[iVar35] * 2)[1];
              uVar30 = (uint)((ulonglong)uVar9 * (ulonglong)uVar40);
              iVar23 = (int)uVar40 >> 0x1f;
              uVar15 = (uint)((ulonglong)uVar20 * (ulonglong)uVar37);
              iVar2 = (int)uVar37 >> 0x1f;
              uVar16 = uVar15 + uVar30;
              iVar21 = uVar16 + uVar25;
              if ((-1 < (int)(uVar37 * iVar17 +
                              iVar2 * uVar20 + (int)((ulonglong)uVar20 * (ulonglong)uVar37 >> 0x20)
                              + uVar40 * iVar1 +
                                iVar23 * uVar9 + (int)((ulonglong)uVar9 * (ulonglong)uVar40 >> 0x20)
                              + (uint)CARRY4(uVar15,uVar30) + iVar6 + (uint)CARRY4(uVar16,uVar25)))
                 && (uVar30 = (uint)((ulonglong)uVar45 * (ulonglong)uVar40),
                    uVar15 = (uint)((ulonglong)uVar22 * (ulonglong)uVar37), uVar16 = uVar15 + uVar30
                    , iVar21 = uVar16 + uVar10,
                    -1 < (int)(((uVar37 * ((int)uVar22 >> 0x1f) +
                                 iVar2 * uVar22 +
                                 (int)((ulonglong)uVar22 * (ulonglong)uVar37 >> 0x20) +
                                 uVar40 * ((int)uVar45 >> 0x1f) +
                                 iVar23 * uVar45 +
                                 (int)((ulonglong)uVar45 * (ulonglong)uVar40 >> 0x20) +
                                (uint)CARRY4(uVar15,uVar30)) -
                               (uVar39 * ((int)uVar22 >> 0x1f) +
                                ((int)uVar39 >> 0x1f) * uVar22 +
                                (int)((ulonglong)uVar22 * (ulonglong)uVar39 >> 0x20) +
                                uVar41 * ((int)uVar45 >> 0x1f) +
                                ((int)uVar41 >> 0x1f) * uVar45 +
                                (int)((ulonglong)uVar45 * (ulonglong)uVar41 >> 0x20) +
                                (uint)CARRY4(uVar27,uVar28) + (uint)(iVar12 != 0))) +
                              (uint)CARRY4(uVar16,uVar10)))) {
                uVar30 = (uint)((ulonglong)uVar26 * (ulonglong)uVar40);
                uVar15 = (uint)((ulonglong)uVar19 * (ulonglong)uVar37);
                uVar16 = uVar15 + uVar30;
                iVar21 = uVar16 + uVar11;
                iVar23 = ((uVar37 * ((int)uVar19 >> 0x1f) +
                           iVar2 * uVar19 + (int)((ulonglong)uVar19 * (ulonglong)uVar37 >> 0x20) +
                           uVar40 * ((int)uVar26 >> 0x1f) +
                           iVar23 * uVar26 + (int)((ulonglong)uVar26 * (ulonglong)uVar40 >> 0x20) +
                          (uint)CARRY4(uVar15,uVar30)) -
                         (uVar34 * ((int)uVar19 >> 0x1f) +
                          ((int)uVar34 >> 0x1f) * uVar19 +
                          (int)((ulonglong)uVar19 * (ulonglong)uVar34 >> 0x20) +
                          uVar36 * ((int)uVar26 >> 0x1f) +
                          iStack_48 * uVar26 + (int)((ulonglong)uVar26 * (ulonglong)uVar36 >> 0x20)
                          + (uint)CARRY4(uVar13,uVar29) + (uint)(iVar14 != 0))) +
                         (uint)CARRY4(uVar16,uVar11);
                if ((int)-(iVar23 + (uint)(iVar21 != 0)) < 0 !=
                    (SBORROW4(0,iVar23) != SBORROW4(-iVar23,(uint)(iVar21 != 0))))
                goto LAB_4a0514bc;
              }
            }
            iVar35 = iVar35 + 1;
          } while (iVar35 < (int)uVar44);
        }
        goto LAB_4a0513ec;
      }
LAB_4a0514bc:
      if (0x1f01 < iStack_d8) {
        uVar3 = *puStack_2c;
        if (iStack_38 < 1) {
          return 1;
        }
        iVar43 = uStack_34 - 2;
        puVar31 = uStack_cc + 1;
        puVar33 = puStack_2c + 2;
        puVar46 = uStack_cc + 2;
        do {
          puStack_2c = puStack_2c + 1;
          uVar4 = *puStack_2c;
          uVar5 = *puVar33;
          *uStack_cc = uVar3;
          *puVar31 = uVar4;
          iVar43 = iVar43 + -1;
          *puVar46 = uVar5;
          uStack_cc = uStack_cc + 3;
          puVar31 = puVar31 + 3;
          puVar33 = puVar33 + 1;
          puVar46 = puVar46 + 3;
        } while (iVar43 != 0);
        return 1;
      }
      iStack_d8 = iStack_d8 + 1;
      iVar43 = iVar43 + 1;
    }
    if (iStack_d8 != iStack_38) {
      return 0;
    }
  }
  return 1;
}



// Address: 4a04a724

void FUN_4a04a724(int param_1,int param_2,ushort *param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  ushort *puVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  short local_28;
  short local_26;
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  
  iVar4 = *(int *)PTR_DAT_4a04a958;
  puVar1 = *(undefined2 **)(iVar4 + 0x38c);
  *(undefined2 **)(iVar4 + 0x388) = puVar1;
  *(undefined2 **)(iVar4 + 0x38c) = puVar1 + param_1 * 2;
  local_1e = -0x8000;
  iVar4 = 0;
  local_20 = -0x8000;
  local_22 = -0x8000;
  local_26 = 0x7fff;
  local_24 = 0x7fff;
  local_28 = 0x7fff;
  if (0 < param_1) {
    do {
      puVar5 = param_3 + iVar4;
      iVar4 = iVar4 + 1;
      psVar6 = (short *)(param_2 + (uint)*puVar5 * 6);
      if (*psVar6 <= local_28) {
        local_28 = *psVar6;
      }
      if (psVar6[1] <= local_26) {
        local_26 = psVar6[1];
      }
      if (psVar6[2] <= local_24) {
        local_24 = psVar6[2];
      }
      if (local_22 <= *psVar6) {
        local_22 = *psVar6;
      }
      if (local_20 <= psVar6[1]) {
        local_20 = psVar6[1];
      }
      if (local_1e <= psVar6[2]) {
        local_1e = psVar6[2];
      }
    } while (iVar4 < param_1);
  }
  iVar7 = (int)(short)(local_22 - local_28);
  iVar8 = (int)(short)(local_1e - local_24);
  iVar4 = iVar7 - iVar8;
  iVar2 = iVar7;
  if (iVar8 <= iVar7) {
    iVar2 = (int)(short)(local_20 - local_26);
    iVar4 = iVar2 - iVar8;
  }
  if (iVar4 < 0 == SBORROW4(iVar2,iVar8)) {
    if (param_1 != 0) {
      iVar4 = param_1;
      puVar9 = puVar1;
      iVar2 = 0;
      do {
        iVar4 = iVar4 + -1;
        puVar3 = (undefined2 *)(param_2 + (uint)*param_3 * 6);
        *puVar9 = *puVar3;
        puVar1[iVar2 * 2 + 1] = puVar3[1];
        param_3 = param_3 + 1;
        puVar9 = puVar9 + 2;
        iVar2 = iVar2 + 1;
      } while (iVar4 != 0);
    }
  }
  else if (iVar7 < (short)(local_20 - local_26)) {
    if (param_1 != 0) {
      iVar2 = 0;
      iVar4 = param_1;
      do {
        iVar7 = iVar2 * 2;
        iVar4 = iVar4 + -1;
        iVar8 = param_2 + (uint)*param_3 * 6;
        iVar2 = iVar2 + 1;
        puVar1[iVar7] = *(undefined2 *)(iVar8 + 2);
        (puVar1 + iVar7)[1] = *(undefined2 *)(iVar8 + 4);
        param_3 = param_3 + 1;
      } while (iVar4 != 0);
    }
  }
  else if (param_1 != 0) {
    iVar2 = 0;
    iVar4 = param_1;
    do {
      iVar7 = iVar2 * 2;
      iVar4 = iVar4 + -1;
      puVar9 = (undefined2 *)(param_2 + (uint)*param_3 * 6);
      iVar2 = iVar2 + 1;
      puVar1[iVar7] = *puVar9;
      (puVar1 + iVar7)[1] = puVar9[2];
      param_3 = param_3 + 1;
    } while (iVar4 != 0);
  }
  FUN_4a050e50(param_1,puVar1);
  return;
}



// Address: 4a04a95c

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_4a04a95c(uint param_1,int param_2,ushort *param_3,ushort *param_4)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  short sVar7;
  short *psVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  short *psVar18;
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
  ushort *puVar32;
  short sVar33;
  ushort *puVar34;
  uint uVar35;
  int iVar36;
  uint uVar37;
  uint uVar38;
  int iVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  int iVar43;
  uint uVar44;
  uint uVar45;
  ushort *puVar46;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  ushort uStack_c8;
  ushort auStack_c6 [63];
  int iStack_48;
  ushort *puStack_44;
  ushort *puStack_40;
  ushort *puStack_3c;
  int iStack_38;
  uint uStack_34;
  short *psStack_30;
  ushort *puStack_2c;
  ushort *puStack_28;
  
  iVar43 = *(int *)PTR_DAT_4a04a9d4;
  psVar18 = *(short **)(iVar43 + 0x38c);
  *(short **)(iVar43 + 0x388) = psVar18;
  *(short **)(iVar43 + 0x38c) = psVar18 + param_1 * 2;
  if (param_1 != 0) {
    psVar8 = psVar18;
    iVar43 = 0;
    uVar44 = param_1;
    puVar32 = param_3;
    do {
      uVar44 = uVar44 - 1;
      iVar39 = param_2 + (uint)*puVar32 * 0x14;
      *psVar8 = (short)*(undefined4 *)(iVar39 + 4);
      psVar18[iVar43 * 2 + 1] = (short)*(undefined4 *)(iVar39 + 8);
      psVar8 = psVar8 + 2;
      iVar43 = iVar43 + 1;
      puVar32 = puVar32 + 1;
    } while (uVar44 != 0);
  }
  puStack_28 = param_4;
  puStack_2c = param_3;
  psStack_30 = psVar18;
  uStack_34 = param_1;
  uVar44 = param_1 - 1;
  iStack_d0 = (int)psVar18[1] * (int)psVar18[param_1 * 2 + -2] -
              (int)psVar18[param_1 * 2 + -1] * (int)*psVar18;
  if (0 < (int)uVar44) {
    iVar43 = param_1 - 1;
    psVar8 = psVar18;
    psVar19 = psVar18 + 3;
    psVar25 = psVar18 + 1;
    do {
      psVar18 = psVar18 + 2;
      iStack_d0 = ((int)*psVar19 * (int)*psVar8 - (int)*psVar18 * (int)*psVar25) + iStack_d0;
      iVar43 = iVar43 + -1;
      psVar8 = psVar8 + 2;
      psVar19 = psVar19 + 2;
      psVar25 = psVar25 + 2;
    } while (iVar43 != 0);
  }
  iStack_38 = param_1 - 2;
  if (iStack_d0 == 0) {
    uVar3 = *param_3;
    if (0 < (int)(param_1 - 2)) {
      iVar43 = param_1 - 2;
      puVar32 = param_4 + 1;
      puVar34 = param_3 + 2;
      puVar46 = param_4 + 2;
      do {
        param_3 = param_3 + 1;
        uVar4 = *param_3;
        uVar5 = *puVar34;
        *param_4 = uVar3;
        *puVar32 = uVar4;
        iVar43 = iVar43 + -1;
        *puVar46 = uVar5;
        param_4 = param_4 + 3;
        puVar32 = puVar32 + 3;
        puVar34 = puVar34 + 1;
        puVar46 = puVar46 + 3;
      } while (iVar43 != 0);
    }
  }
  else {
    if (iStack_d0 < 1) {
      uStack_c8 = 0;
      if (0 < (int)uVar44) {
        puVar32 = &uStack_c8;
        sVar7 = 0;
        for (uVar26 = uVar44 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
          sVar33 = (short)uStack_34 - sVar7;
          sVar7 = sVar7 + 1;
          puVar32 = puVar32 + 1;
          *puVar32 = sVar33 - 1;
        }
        for (iVar43 = (int)uVar44 >> 2; iVar43 != 0; iVar43 = iVar43 + -1) {
          sVar33 = (short)uStack_34 - sVar7;
          puVar32[1] = sVar33 - 1;
          puVar32[2] = sVar33 - 2;
          puVar32[3] = sVar33 - 3;
          sVar7 = sVar7 + 4;
          puVar32 = puVar32 + 4;
          *puVar32 = sVar33 - 4;
        }
      }
    }
    else if (param_1 != 0) {
      psVar18 = (short *)((int)&uStack_cc + 2);
      sVar7 = 0;
      for (param_1 = param_1 & 3; param_1 != 0; param_1 = param_1 - 1) {
        psVar18 = psVar18 + 1;
        *psVar18 = sVar7;
        sVar7 = sVar7 + 1;
      }
      for (uVar44 = uStack_34 >> 2; uVar44 != 0; uVar44 = uVar44 - 1) {
        psVar18[1] = sVar7;
        psVar18[2] = sVar7 + 1;
        psVar18[3] = sVar7 + 2;
        sVar33 = sVar7 + 3;
        sVar7 = sVar7 + 4;
        psVar18 = psVar18 + 4;
        *psVar18 = sVar33;
      }
    }
    iVar43 = 0;
    iStack_d8 = 0;
    uStack_cc = param_4;
    uVar44 = uStack_34;
    while (2 < (int)uVar44) {
      if ((int)uVar44 <= iVar43) {
        iVar43 = 0;
      }
      iVar39 = iVar43 + 1;
      if ((int)uVar44 <= iVar39) {
        iVar39 = 0;
      }
      iStack_d4 = iVar39 + 1;
      if ((int)uVar44 <= iStack_d4) {
        iStack_d4 = 0;
      }
      puStack_3c = &uStack_c8 + iVar43;
      uVar27 = (uint)psStack_30[(uint)*puStack_3c * 2];
      uVar20 = (uint)(psStack_30 + (uint)*puStack_3c * 2)[1];
      puStack_40 = &uStack_c8 + iVar39;
      uVar40 = (uint)psStack_30[(uint)*puStack_40 * 2];
      uVar42 = (uint)(psStack_30 + (uint)*puStack_40 * 2)[1];
      puStack_44 = &uStack_c8 + iStack_d4;
      uVar35 = (uint)psStack_30[(uint)*puStack_44 * 2];
      uVar37 = (uint)(psStack_30 + (uint)*puStack_44 * 2)[1];
      uVar21 = uVar20 - uVar42;
      iVar17 = (int)uVar21 >> 0x1f;
      uVar9 = uVar40 - uVar27;
      iVar1 = (int)uVar9 >> 0x1f;
      uVar45 = (uint)((ulonglong)uVar9 * (ulonglong)uVar20);
      uVar10 = (uint)((ulonglong)uVar21 * (ulonglong)uVar27);
      uVar11 = uVar10 + uVar45;
      uVar26 = -uVar11;
      iVar6 = -(uVar27 * iVar17 +
                ((int)uVar27 >> 0x1f) * uVar21 +
                (int)((ulonglong)uVar21 * (ulonglong)uVar27 >> 0x20) +
                uVar20 * iVar1 +
                ((int)uVar20 >> 0x1f) * uVar9 + (int)((ulonglong)uVar9 * (ulonglong)uVar20 >> 0x20)
                + (uint)CARRY4(uVar10,uVar45) + (uint)(uVar11 != 0));
      iStack_48 = (int)uVar37 >> 0x1f;
      uVar28 = (uint)((ulonglong)uVar9 * (ulonglong)uVar37);
      uVar10 = (uint)((ulonglong)uVar21 * (ulonglong)uVar35);
      uVar45 = uVar10 + uVar28;
      iVar22 = uVar35 * iVar17 +
               ((int)uVar35 >> 0x1f) * uVar21 + (int)((ulonglong)uVar21 * (ulonglong)uVar35 >> 0x20)
               + uVar37 * iVar1 +
                 iStack_48 * uVar9 + (int)((ulonglong)uVar9 * (ulonglong)uVar37 >> 0x20) +
               (uint)CARRY4(uVar10,uVar28) + iVar6 + (uint)CARRY4(uVar45,uVar26);
      if (iVar22 == 0 && uVar45 == uVar11) {
LAB_4a0513ec:
        if (iStack_d0 < 1) {
          *puStack_28 = puStack_2c[*puStack_40];
          puStack_28[1] = puStack_2c[*puStack_3c];
        }
        else {
          *puStack_28 = puStack_2c[*puStack_3c];
          puStack_28[1] = puStack_2c[*puStack_40];
        }
        puVar32 = puStack_28 + 2;
        puStack_28 = puStack_28 + 3;
        *puVar32 = puStack_2c[*puStack_44];
        iVar17 = (uVar44 - iVar39) + -1;
        if (0 < iVar17) {
          FUN_4a000f84(puStack_40,(int)auStack_c6 + iVar39 * 2,iVar17 * 2);
        }
        uVar44 = uVar44 - 1;
        iVar43 = iVar43 + -1;
      }
      else if ((int)-(iVar22 + (uint)(uVar45 != uVar11)) < 0 !=
               (SBORROW4(0,iVar22) != SBORROW4(-iVar22,(uint)(uVar45 != uVar11)))) {
        uVar23 = uVar42 - uVar37;
        uVar45 = uVar35 - uVar40;
        uVar29 = (uint)((ulonglong)uVar45 * (ulonglong)uVar42);
        uVar28 = (uint)((ulonglong)uVar23 * (ulonglong)uVar40);
        iVar12 = uVar28 + uVar29;
        uVar10 = -iVar12;
        uVar20 = uVar37 - uVar20;
        uVar27 = uVar27 - uVar35;
        uVar30 = (uint)((ulonglong)uVar27 * (ulonglong)uVar37);
        uVar13 = (uint)((ulonglong)uVar20 * (ulonglong)uVar35);
        iVar14 = uVar13 + uVar30;
        uVar11 = -iVar14;
        iVar22 = 1;
        iVar36 = 0;
        if (0 < (int)uVar44) {
          do {
            if (iVar36 != iVar43 && iVar36 != iVar39) {
              iVar22 = iStack_d4;
            }
            if ((iVar36 != iVar43 && iVar36 != iVar39) && iVar36 != iVar22) {
              uVar38 = (uint)psStack_30[(uint)(&uStack_c8)[iVar36] * 2];
              uVar41 = (uint)(psStack_30 + (uint)(&uStack_c8)[iVar36] * 2)[1];
              uVar31 = (uint)((ulonglong)uVar9 * (ulonglong)uVar41);
              iVar24 = (int)uVar41 >> 0x1f;
              uVar15 = (uint)((ulonglong)uVar21 * (ulonglong)uVar38);
              iVar2 = (int)uVar38 >> 0x1f;
              uVar16 = uVar15 + uVar31;
              iVar22 = uVar16 + uVar26;
              if ((-1 < (int)(uVar38 * iVar17 +
                              iVar2 * uVar21 + (int)((ulonglong)uVar21 * (ulonglong)uVar38 >> 0x20)
                              + uVar41 * iVar1 +
                                iVar24 * uVar9 + (int)((ulonglong)uVar9 * (ulonglong)uVar41 >> 0x20)
                              + (uint)CARRY4(uVar15,uVar31) + iVar6 + (uint)CARRY4(uVar16,uVar26)))
                 && (uVar31 = (uint)((ulonglong)uVar45 * (ulonglong)uVar41),
                    uVar15 = (uint)((ulonglong)uVar23 * (ulonglong)uVar38), uVar16 = uVar15 + uVar31
                    , iVar22 = uVar16 + uVar10,
                    -1 < (int)(((uVar38 * ((int)uVar23 >> 0x1f) +
                                 iVar2 * uVar23 +
                                 (int)((ulonglong)uVar23 * (ulonglong)uVar38 >> 0x20) +
                                 uVar41 * ((int)uVar45 >> 0x1f) +
                                 iVar24 * uVar45 +
                                 (int)((ulonglong)uVar45 * (ulonglong)uVar41 >> 0x20) +
                                (uint)CARRY4(uVar15,uVar31)) -
                               (uVar40 * ((int)uVar23 >> 0x1f) +
                                ((int)uVar40 >> 0x1f) * uVar23 +
                                (int)((ulonglong)uVar23 * (ulonglong)uVar40 >> 0x20) +
                                uVar42 * ((int)uVar45 >> 0x1f) +
                                ((int)uVar42 >> 0x1f) * uVar45 +
                                (int)((ulonglong)uVar45 * (ulonglong)uVar42 >> 0x20) +
                                (uint)CARRY4(uVar28,uVar29) + (uint)(iVar12 != 0))) +
                              (uint)CARRY4(uVar16,uVar10)))) {
                uVar31 = (uint)((ulonglong)uVar27 * (ulonglong)uVar41);
                uVar15 = (uint)((ulonglong)uVar20 * (ulonglong)uVar38);
                uVar16 = uVar15 + uVar31;
                iVar22 = uVar16 + uVar11;
                iVar24 = ((uVar38 * ((int)uVar20 >> 0x1f) +
                           iVar2 * uVar20 + (int)((ulonglong)uVar20 * (ulonglong)uVar38 >> 0x20) +
                           uVar41 * ((int)uVar27 >> 0x1f) +
                           iVar24 * uVar27 + (int)((ulonglong)uVar27 * (ulonglong)uVar41 >> 0x20) +
                          (uint)CARRY4(uVar15,uVar31)) -
                         (uVar35 * ((int)uVar20 >> 0x1f) +
                          ((int)uVar35 >> 0x1f) * uVar20 +
                          (int)((ulonglong)uVar20 * (ulonglong)uVar35 >> 0x20) +
                          uVar37 * ((int)uVar27 >> 0x1f) +
                          iStack_48 * uVar27 + (int)((ulonglong)uVar27 * (ulonglong)uVar37 >> 0x20)
                          + (uint)CARRY4(uVar13,uVar30) + (uint)(iVar14 != 0))) +
                         (uint)CARRY4(uVar16,uVar11);
                if ((int)-(iVar24 + (uint)(iVar22 != 0)) < 0 !=
                    (SBORROW4(0,iVar24) != SBORROW4(-iVar24,(uint)(iVar22 != 0))))
                goto LAB_4a0514bc;
              }
            }
            iVar36 = iVar36 + 1;
          } while (iVar36 < (int)uVar44);
        }
        goto LAB_4a0513ec;
      }
LAB_4a0514bc:
      if (0x1f01 < iStack_d8) {
        uVar3 = *puStack_2c;
        if (iStack_38 < 1) {
          return 1;
        }
        iVar43 = uStack_34 - 2;
        puVar32 = uStack_cc + 1;
        puVar34 = puStack_2c + 2;
        puVar46 = uStack_cc + 2;
        do {
          puStack_2c = puStack_2c + 1;
          uVar4 = *puStack_2c;
          uVar5 = *puVar34;
          *uStack_cc = uVar3;
          *puVar32 = uVar4;
          iVar43 = iVar43 + -1;
          *puVar46 = uVar5;
          uStack_cc = uStack_cc + 3;
          puVar32 = puVar32 + 3;
          puVar34 = puVar34 + 1;
          puVar46 = puVar46 + 3;
        } while (iVar43 != 0);
        return 1;
      }
      iStack_d8 = iStack_d8 + 1;
      iVar43 = iVar43 + 1;
    }
    if (iStack_d8 != iStack_38) {
      return 0;
    }
  }
  return 1;
}



// Address: 4a04a9d8

void FUN_4a04a9d8(undefined4 param_1)

{
  *(undefined4 *)(PTR_DAT_4a04a9e0 + 8) = param_1;
  return;
}



// Address: 4a04a9e4

undefined4 FUN_4a04a9e4(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_82c;
  undefined4 uStack_828;
  undefined4 local_824;
  undefined1 auStack_820 [512];
  undefined1 auStack_620 [512];
  undefined1 auStack_420 [512];
  undefined1 auStack_220 [512];
  undefined4 uStack_4;
  
  iVar2 = 0;
  if (param_3 != (int *)0x0) {
    iVar2 = param_3[2];
  }
  uStack_4 = param_4;
  FUN_4a000ed8(auStack_420,iVar2);
  uStack_82c = *(undefined4 *)PTR_DAT_4a04aaf0;
  uStack_828 = *(undefined4 *)(PTR_DAT_4a04aaf0 + 4);
  iVar2 = FUN_4a000f18(auStack_420,&uStack_82c);
  if (iVar2 != 0) {
    *(undefined2 *)(iVar2 + 2) = 99;
  }
  FUN_4a039d70(auStack_420,0x100,auStack_820,0x200);
  FUN_4a000d44(auStack_620,auStack_820,&uStack_4);
  FUN_4a039bec(auStack_620,0x200,auStack_220,0x100);
  iVar2 = FUN_4a000f50(auStack_220);
  iVar2 = (iVar2 + 1) * 2;
  uVar1 = thunk_FUN_4a161570(iVar2);
  FUN_4a000f84(uVar1,auStack_220,iVar2);
  local_824 = 0;
  FUN_4a1020c0(&local_824,uVar1);
  if ((param_3 != (int *)0x0) && (iVar2 = param_3[1], param_3[1] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*param_3 + 4))();
  }
  return local_824;
}



// Address: 4a04aaf4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a04aaf4(int param_1,int param_2,undefined2 *param_3,uint param_4)

{
  undefined2 *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  code *UNRECOVERED_JUMPTABLE;
  int iStack_40;
  int iStack_3c;
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined1 uStack_35;
  uint local_34;
  int iStack_30;
  int iStack_2c;
  undefined2 *local_28;
  uint uStack_24;
  
  puVar2 = PTR_DAT_4a04aecc;
  local_34 = param_4;
  if (param_4 == 0) {
    local_34 = *(uint *)(param_2 + 0x10);
  }
  iVar8 = *(int *)PTR_DAT_4a04aecc;
  local_28 = param_3;
  iStack_30 = param_1;
  iStack_2c = param_2;
  uStack_24 = param_4;
  if (param_3 == (undefined2 *)0x0) {
    if ((param_1 == 3 || param_1 == 8) || param_1 == 7) {
      param_2 = 0;
      local_28 = *(undefined2 **)PTR_DAT_4a04aed0;
      goto LAB_4a04ab44;
    }
  }
  else {
LAB_4a04ab44:
    if (param_1 == 7) {
      FUN_4a0492d4(local_28);
      return;
    }
  }
  uVar6 = *(undefined4 *)(iVar8 + 0x4b0);
  iVar3 = FUN_4a0698e4(uVar6);
  if (iVar3 != 0) {
    return;
  }
  uStack_35 = 0xff;
  uStack_36 = 0xff;
  uStack_37 = 0xff;
  uStack_38 = 0xff;
  *(undefined2 **)(iVar8 + 0x49c) = local_28;
  *(undefined2 **)(iVar8 + 0x4a0) = local_28;
  *(short *)(iVar8 + 0x4a4) = (short)local_34;
  iStack_3c = 0;
  (**(code **)(PTR_DAT_4a04aed4 + 0x18))(uVar6,&iStack_3c);
  iStack_40 = 0;
  FUN_4a04ced0(uVar6,&iStack_40);
  iVar3 = *(int *)puVar2;
  iVar7 = *(int *)(iVar3 + 0x38c);
  *(int *)(iVar3 + 0x388) = iVar7;
  *(int *)(iVar3 + 0x38c) = iVar7 + 0x150;
  FUN_4a0922a4(iVar7);
  *(undefined4 *)(iVar7 + 0xac) = 0;
  if (*(int *)(iVar8 + 0x41c) == 0) {
    *(undefined4 *)(iVar7 + 0x130) = *(undefined4 *)(iVar8 + 0x458);
    uVar4 = *(uint *)(iVar7 + 300) & 0xfffffffe;
  }
  else {
    *(int *)(iVar7 + 0x130) = *(int *)(iVar8 + 0x41c);
    uVar4 = *(uint *)(iVar7 + 300) | 1;
  }
  *(uint *)(iVar7 + 300) = uVar4;
  if (iStack_3c == 0) {
    if (*(int *)(iVar8 + 0x434) == 0) {
      if (*(int *)(iVar8 + 0x470) == 0) {
        *(undefined4 *)(iVar7 + 0x140) = 0;
        *(uint *)(iVar7 + 300) = *(uint *)(iVar7 + 300) & 0xffffffef;
        goto LAB_4a04ac90;
      }
      *(int *)(iVar7 + 0x140) = *(int *)(iVar8 + 0x470);
      uVar4 = *(uint *)(iVar7 + 300) & 0xffffffef;
    }
    else {
      *(int *)(iVar7 + 0x140) = *(int *)(iVar8 + 0x434);
      uVar4 = *(uint *)(iVar7 + 300) | 0x10;
    }
    *(uint *)(iVar7 + 300) = uVar4;
  }
  else {
    *(int *)(iVar7 + 0x140) = iStack_3c;
    *(uint *)(iVar7 + 300) = *(uint *)(iVar7 + 300) & 0xffffffef;
  }
LAB_4a04ac90:
  if (*(int *)(iVar8 + 0x42c) == 0) {
    if (*(int *)(iVar8 + 0x468) != 0) {
      *(int *)(iVar7 + 0x148) = *(int *)(iVar8 + 0x468);
      uVar4 = *(uint *)(iVar7 + 300) & 0xffffffbf;
      goto LAB_4a04acc0;
    }
    *(undefined4 *)(iVar7 + 0x148) = 0;
    *(uint *)(iVar7 + 300) = *(uint *)(iVar7 + 300) & 0xffffffbf;
  }
  else {
    *(int *)(iVar7 + 0x148) = *(int *)(iVar8 + 0x42c);
    uVar4 = *(uint *)(iVar7 + 300) | 0x40;
LAB_4a04acc0:
    *(uint *)(iVar7 + 300) = uVar4;
  }
  if (iStack_40 == 0) {
    if (*(int *)(iVar8 + 0x430) == 0) {
      if (*(int *)(iVar8 + 0x46c) == 0) {
        *(undefined4 *)(iVar7 + 0x14c) = 0;
        *(uint *)(iVar7 + 300) = *(uint *)(iVar7 + 300) & 0xffffff7f;
        goto LAB_4a04ad44;
      }
      *(int *)(iVar7 + 0x14c) = *(int *)(iVar8 + 0x46c);
      uVar4 = *(uint *)(iVar7 + 300) & 0xffffff7f;
    }
    else {
      *(int *)(iVar7 + 0x14c) = *(int *)(iVar8 + 0x430);
      uVar4 = *(uint *)(iVar7 + 300) | 0x80;
    }
    *(uint *)(iVar7 + 300) = uVar4;
  }
  else {
    *(int *)(iVar7 + 0x14c) = iStack_40;
    *(uint *)(iVar7 + 300) = *(uint *)(iVar7 + 300) & 0xffffff7f;
  }
LAB_4a04ad44:
  *(int *)(iVar7 + 0xec) = param_1;
  if (param_2 == 0) {
    *(undefined2 **)(iVar7 + 0x144) = local_28;
    uVar4 = *(uint *)(iVar7 + 300) & 0xffffffdf;
  }
  else {
    *(int *)(iVar7 + 0x144) = param_2;
    uVar4 = *(uint *)(iVar7 + 300) | 0x20;
  }
  *(uint *)(iVar7 + 300) = uVar4;
  *(uint *)(iVar7 + 0xf0) = local_34;
  FUN_4a093364(iVar7);
  switch(param_1) {
  default:
    return;
  case 3:
    iVar8 = *(int *)puVar2;
    uVar4 = local_34 * 0x18000 >> 0x10;
    puVar5 = *(undefined2 **)(iVar8 + 0x38c);
    *(undefined2 **)(iVar8 + 0x388) = puVar5;
    *(uint *)(iVar8 + 0x38c) = (uVar4 * 2 + 3 & 0xfffffffc) + (int)puVar5;
    puVar1 = puVar5;
    for (; (local_34 & 0xffff) != 0; local_34 = (local_34 & 0xffff) - 4) {
      *puVar1 = *local_28;
      puVar1[1] = local_28[1];
      puVar1[2] = local_28[3];
      puVar1[3] = local_28[3];
      puVar1[4] = local_28[1];
      puVar1[5] = local_28[2];
      puVar1 = puVar1 + 6;
      local_28 = local_28 + 4;
    }
    *(undefined2 **)(iVar7 + 0x144) = puVar5;
    *(undefined4 *)(iVar7 + 0xec) = 0;
    *(uint *)(iVar7 + 0xf0) = uVar4;
    *(uint *)(iVar7 + 300) = *(uint *)(iVar7 + 300) & 0xffffffdf;
    return;
  case 4:
    *(undefined4 *)(iVar7 + 0xec) = 1;
    return;
  case 8:
    break;
  }
  iVar8 = FUN_4a048064(iVar7 + 0xec,&local_28,&local_34);
  if (iVar8 != 0) {
    *(undefined2 **)(iVar7 + 0x144) = local_28;
    *(uint *)(iVar7 + 300) = *(uint *)(iVar7 + 300) & 0xffffffdf;
    *(uint *)(iVar7 + 0xf0) = local_34;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4a04adcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// Address: 4a04aee8

/* WARNING: Removing unreachable block (ram,0x4a04c164) */
/* WARNING: Removing unreachable block (ram,0x4a04c170) */
/* WARNING: Removing unreachable block (ram,0x4a04c174) */
/* WARNING: Removing unreachable block (ram,0x4a04c178) */
/* WARNING: Removing unreachable block (ram,0x4a04c17c) */
/* WARNING: Removing unreachable block (ram,0x4a04c180) */
/* WARNING: Removing unreachable block (ram,0x4a04c184) */
/* WARNING: Removing unreachable block (ram,0x4a04c188) */
/* WARNING: Removing unreachable block (ram,0x4a04c18c) */
/* WARNING: Removing unreachable block (ram,0x4a04b4d0) */
/* WARNING: Removing unreachable block (ram,0x4a04b4dc) */
/* WARNING: Removing unreachable block (ram,0x4a04b4e0) */
/* WARNING: Removing unreachable block (ram,0x4a04b4e4) */
/* WARNING: Removing unreachable block (ram,0x4a04b4e8) */
/* WARNING: Removing unreachable block (ram,0x4a04b4ec) */
/* WARNING: Removing unreachable block (ram,0x4a04b4f0) */
/* WARNING: Removing unreachable block (ram,0x4a04b4f4) */
/* WARNING: Removing unreachable block (ram,0x4a04b4f8) */
/* WARNING: Removing unreachable block (ram,0x4a04c624) */
/* WARNING: Removing unreachable block (ram,0x4a04c630) */
/* WARNING: Removing unreachable block (ram,0x4a04c634) */
/* WARNING: Removing unreachable block (ram,0x4a04c638) */
/* WARNING: Removing unreachable block (ram,0x4a04c63c) */
/* WARNING: Removing unreachable block (ram,0x4a04c640) */
/* WARNING: Removing unreachable block (ram,0x4a04c644) */
/* WARNING: Removing unreachable block (ram,0x4a04c648) */
/* WARNING: Removing unreachable block (ram,0x4a04c64c) */
/* WARNING: Removing unreachable block (ram,0x4a04b74c) */
/* WARNING: Removing unreachable block (ram,0x4a04b754) */
/* WARNING: Removing unreachable block (ram,0x4a04b75c) */
/* WARNING: Removing unreachable block (ram,0x4a04b768) */
/* WARNING: Removing unreachable block (ram,0x4a04b770) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a04aee8(int param_1,ushort *param_2,uint param_3)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  short *psVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  ushort *puVar26;
  ushort *puVar27;
  ushort *puVar28;
  uint uVar29;
  ushort *puVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  int iVar34;
  code *UNRECOVERED_JUMPTABLE_00;
  int iVar35;
  bool bVar36;
  bool bVar37;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_98;
  uint uStack_90;
  uint uStack_84;
  undefined2 *puStack_80;
  ushort *puStack_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  uint uStack_60;
  int iStack_5c;
  uint uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  uint uStack_38;
  int local_30;
  ushort *local_2c;
  uint uStack_28;
  
  iVar24 = *(int *)PTR_DAT_4a04be40;
  local_2c = param_2;
  if (param_2 == (ushort *)0x0) {
    local_2c = *(ushort **)PTR_DAT_4a04be44;
  }
  local_30 = param_1;
  uStack_28 = param_3;
  if (param_1 != 7) {
    local_70 = *(int *)(iVar24 + 0x4b0);
    iVar10 = FUN_4a0698e4();
    if (iVar10 != 0) {
      return;
    }
    *(ushort **)(iVar24 + 0x49c) = local_2c;
    *(ushort **)(iVar24 + 0x4a0) = local_2c;
    *(short *)(iVar24 + 0x4a4) = (short)uStack_28;
    iVar10 = 0;
    iStack_74 = 0;
    (**(code **)(PTR_DAT_4a04be48 + 0x18))(local_70,&iStack_74);
    iStack_78 = 0;
    FUN_4a04ced0(local_70,&iStack_78);
    uVar31 = uStack_28;
    puVar9 = PTR_DAT_4a04be40;
    iVar25 = *(int *)(iVar24 + 0x378);
    puVar26 = (ushort *)0x0;
    uVar29 = 0;
    switch(local_30) {
    case 1:
      goto switchD_4a04afb4_caseD_1;
    case 3:
    case 4:
      if (local_30 == 3) {
        uStack_98 = uStack_28 >> 2;
      }
      else {
        uStack_98 = uStack_28 - 2 >> 1;
      }
      if (uStack_98 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a04bb08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
      uStack_58 = uStack_98 * 0xc + 3;
      puVar27 = local_2c;
      do {
        puVar9 = PTR_DAT_4a04be40;
        uStack_98 = uStack_98 - 1;
        uVar2 = *puVar27;
        uVar31 = (uint)uVar2;
        uVar3 = puVar27[1];
        if (local_30 == 3) {
          uVar6 = puVar27[3];
          uVar5 = puVar27[2];
        }
        else {
          uVar6 = puVar27[2];
          uVar5 = puVar27[3];
        }
        uVar29 = (uint)uVar6;
        uVar33 = uVar31;
        if (uVar31 != uVar29) {
          uVar33 = (uint)uVar3;
        }
        if (uVar31 != uVar29 && uVar33 != uVar5) {
          iVar15 = iVar25 + uVar31 * 0x14;
          iVar18 = iVar25 + (uint)uVar3 * 0x14;
          iVar32 = iVar25 + uVar29 * 0x14;
          iVar11 = iVar25 + (uint)uVar5 * 0x14;
          if ((*(ushort *)(iVar11 + 0x10) & *(ushort *)(iVar32 + 0x10) &
               *(ushort *)(iVar15 + 0x10) & *(ushort *)(iVar18 + 0x10) & 0x3f) == 0) {
            iStack_5c = *(int *)(iVar18 + 4);
            iVar14 = *(int *)(iVar18 + 8);
            iVar34 = *(int *)(iVar18 + 0xc);
            iVar16 = *(int *)(iVar15 + 8) - iVar14 >> 2;
            iVar1 = *(int *)(iVar15 + 4) - iStack_5c >> 2;
            iVar15 = *(int *)(iVar15 + 0xc) - iVar34 >> 2;
            iVar23 = *(int *)(iVar32 + 4) - iStack_5c >> 2;
            iVar17 = *(int *)(iVar32 + 8) - iVar14 >> 2;
            iVar35 = *(int *)(iVar32 + 0xc) - iVar34 >> 2;
            if ((**(uint **)PTR_DAT_4a04be40 & 0x80000000) == 0) {
              uStack_b8 = iVar14 >> 2;
              uStack_b4 = iVar34 >> 2;
              uStack_bc = iStack_5c >> 2;
            }
            else {
              uStack_bc = *(uint *)PTR_DAT_4a04be50;
              uStack_b8 = *(uint *)(PTR_DAT_4a04be50 + 4);
              uStack_b4 = *(uint *)(PTR_DAT_4a04be50 + 8);
            }
            lVar7 = (longlong)iVar15 * (longlong)iVar17;
            uVar33 = (uint)lVar7;
            lVar8 = (longlong)iVar16 * (longlong)iVar35;
            uVar31 = (uint)lVar8;
            uVar29 = uVar31 - uVar33;
            iVar14 = (int)((ulonglong)lVar8 >> 0x20) -
                     ((int)((ulonglong)lVar7 >> 0x20) + (uint)(uVar31 < uVar33));
            lVar7 = (longlong)iVar1 * (longlong)iVar35;
            uVar33 = (uint)lVar7;
            lVar8 = (longlong)iVar15 * (longlong)iVar23;
            uVar31 = (uint)lVar8;
            uVar20 = uVar31 - uVar33;
            iVar15 = (int)((ulonglong)lVar8 >> 0x20) -
                     ((int)((ulonglong)lVar7 >> 0x20) + (uint)(uVar31 < uVar33));
            lVar7 = (longlong)iVar16 * (longlong)iVar23;
            uVar19 = (uint)lVar7;
            lVar8 = (longlong)iVar1 * (longlong)iVar17;
            uVar31 = (uint)lVar8;
            uVar33 = uVar31 - uVar19;
            iVar16 = (int)((ulonglong)lVar8 >> 0x20) -
                     ((int)((ulonglong)lVar7 >> 0x20) + (uint)(uVar31 < uVar19));
            if (((iVar16 == 0 && (iVar14 == 0 && iVar15 == 0)) &&
                 (uVar33 == 0 && (uVar20 == 0 && uVar29 == 0))) ||
               (uVar19 = (uint)((ulonglong)uVar20 * (ulonglong)uStack_b8),
               uVar31 = (uint)((ulonglong)uVar29 * (ulonglong)uStack_bc),
               (int)(iVar14 * uStack_bc +
                     ((int)uStack_bc >> 0x1f) * uVar29 +
                     (int)((ulonglong)uVar29 * (ulonglong)uStack_bc >> 0x20) +
                     iVar15 * uStack_b8 +
                     ((int)uStack_b8 >> 0x1f) * uVar20 +
                     (int)((ulonglong)uVar20 * (ulonglong)uStack_b8 >> 0x20) +
                     (uint)CARRY4(uVar31,uVar19) +
                     iVar16 * uStack_b4 +
                     ((int)uStack_b4 >> 0x1f) * uVar33 +
                     (int)((ulonglong)uVar33 * (ulonglong)uStack_b4 >> 0x20) +
                    (uint)CARRY4(uVar31 + uVar19,(uint)((ulonglong)uVar33 * (ulonglong)uStack_b4)))
               < 0)) {
              iVar23 = *(int *)(iVar18 + 4);
              iVar17 = *(int *)(iVar18 + 8);
              iVar35 = *(int *)(iVar18 + 0xc);
              iVar15 = *(int *)(iVar32 + 4) - iVar23 >> 2;
              iVar18 = *(int *)(iVar32 + 8) - iVar17 >> 2;
              iVar32 = *(int *)(iVar32 + 0xc) - iVar35 >> 2;
              iVar16 = *(int *)(iVar11 + 4) - iVar23 >> 2;
              iVar1 = *(int *)(iVar11 + 8) - iVar17 >> 2;
              iVar11 = *(int *)(iVar11 + 0xc) - iVar35 >> 2;
              if ((**(uint **)PTR_DAT_4a04be40 & 0x80000000) == 0) {
                uStack_b4 = iVar23 >> 2;
                uStack_b0 = iVar17 >> 2;
                uStack_ac = iVar35 >> 2;
              }
              else {
                uStack_b4 = *(uint *)PTR_DAT_4a04be50;
                uStack_b0 = *(uint *)(PTR_DAT_4a04be50 + 4);
                uStack_ac = *(uint *)(PTR_DAT_4a04be50 + 8);
              }
              lVar7 = (longlong)iVar32 * (longlong)iVar1;
              uVar29 = (uint)lVar7;
              lVar8 = (longlong)iVar18 * (longlong)iVar11;
              uVar31 = (uint)lVar8;
              uVar33 = uVar31 - uVar29;
              iVar23 = (int)((ulonglong)lVar8 >> 0x20) -
                       ((int)((ulonglong)lVar7 >> 0x20) + (uint)(uVar31 < uVar29));
              lVar7 = (longlong)iVar15 * (longlong)iVar11;
              uVar29 = (uint)lVar7;
              lVar8 = (longlong)iVar32 * (longlong)iVar16;
              uVar31 = (uint)lVar8;
              uVar19 = uVar31 - uVar29;
              iVar32 = (int)((ulonglong)lVar8 >> 0x20) -
                       ((int)((ulonglong)lVar7 >> 0x20) + (uint)(uVar31 < uVar29));
              lVar7 = (longlong)iVar18 * (longlong)iVar16;
              uVar29 = (uint)lVar7;
              lVar8 = (longlong)iVar15 * (longlong)iVar1;
              uVar31 = (uint)lVar8;
              uVar20 = uVar31 - uVar29;
              iVar11 = (int)((ulonglong)lVar8 >> 0x20) -
                       ((int)((ulonglong)lVar7 >> 0x20) + (uint)(uVar31 < uVar29));
              if (((iVar11 != 0 || (iVar23 != 0 || iVar32 != 0)) ||
                   ((uVar33 != 0 || uVar19 != 0) || uVar20 != 0)) &&
                 (uVar29 = (uint)((ulonglong)uVar19 * (ulonglong)uStack_b0),
                 uVar31 = (uint)((ulonglong)uVar33 * (ulonglong)uStack_b4),
                 -1 < (int)(iVar23 * uStack_b4 +
                            ((int)uStack_b4 >> 0x1f) * uVar33 +
                            (int)((ulonglong)uVar33 * (ulonglong)uStack_b4 >> 0x20) +
                            uStack_b0 * iVar32 +
                            uVar19 * ((int)uStack_b0 >> 0x1f) +
                            (int)((ulonglong)uVar19 * (ulonglong)uStack_b0 >> 0x20) +
                            (uint)CARRY4(uVar31,uVar29) +
                            iVar11 * uStack_ac +
                            uVar20 * ((int)uStack_ac >> 0x1f) +
                            (int)((ulonglong)uVar20 * (ulonglong)uStack_ac >> 0x20) +
                           (uint)CARRY4(uVar31 + uVar29,
                                        (uint)((ulonglong)uVar20 * (ulonglong)uStack_ac)))))
              goto LAB_4a04bf7c;
              bVar37 = false;
            }
            else {
LAB_4a04bf7c:
              bVar37 = true;
            }
            if ((*(uint *)(local_70 + 0x10) & 8) == 0) {
              if ((*(uint *)(local_70 + 0x10) & 0x10) == 0) {
                if (bVar37) goto LAB_4a04bfc4;
              }
              else if (!bVar37) goto LAB_4a04bfb4;
              iVar11 = 0;
            }
            else if (bVar37) {
LAB_4a04bfc4:
              iVar11 = 1;
            }
            else {
LAB_4a04bfb4:
              iVar11 = 2;
            }
            if (iVar11 != 0) {
              if (iVar10 == 0) {
                iVar11 = *(int *)PTR_DAT_4a04be40;
                iVar10 = *(int *)(iVar11 + 0x38c);
                *(int *)(iVar11 + 0x388) = iVar10;
                *(int *)(iVar11 + 0x38c) = iVar10 + 0x150;
                FUN_4a0922a4(iVar10);
                *(undefined4 *)(iVar10 + 0x130) = 0;
                *(int *)(iVar10 + 0xac) = iVar25;
                *(uint *)(iVar10 + 300) = *(uint *)(iVar10 + 300) & 0xfffffffe;
                if (iStack_74 == 0) {
                  if (*(int *)(iVar24 + 0x434) == 0) {
                    if (*(int *)(iVar24 + 0x470) == 0) {
                      *(undefined4 *)(iVar10 + 0x140) = 0;
                      *(uint *)(iVar10 + 300) = *(uint *)(iVar10 + 300) & 0xffffffef;
                      goto LAB_4a04c078;
                    }
                    *(int *)(iVar10 + 0x140) = *(int *)(iVar24 + 0x470);
                    uVar31 = *(uint *)(iVar10 + 300) & 0xffffffef;
                  }
                  else {
                    *(int *)(iVar10 + 0x140) = *(int *)(iVar24 + 0x434);
                    uVar31 = *(uint *)(iVar10 + 300) | 0x10;
                  }
                  *(uint *)(iVar10 + 300) = uVar31;
                }
                else {
                  *(int *)(iVar10 + 0x140) = iStack_74;
                  *(uint *)(iVar10 + 300) = *(uint *)(iVar10 + 300) & 0xffffffef;
                }
LAB_4a04c078:
                if (*(int *)(iVar24 + 0x42c) == 0) {
                  if (*(int *)(iVar24 + 0x468) != 0) {
                    *(int *)(iVar10 + 0x148) = *(int *)(iVar24 + 0x468);
                    uVar31 = *(uint *)(iVar10 + 300) & 0xffffffbf;
                    goto LAB_4a04c0a8;
                  }
                  *(undefined4 *)(iVar10 + 0x148) = 0;
                  *(uint *)(iVar10 + 300) = *(uint *)(iVar10 + 300) & 0xffffffbf;
                }
                else {
                  *(int *)(iVar10 + 0x148) = *(int *)(iVar24 + 0x42c);
                  uVar31 = *(uint *)(iVar10 + 300) | 0x40;
LAB_4a04c0a8:
                  *(uint *)(iVar10 + 300) = uVar31;
                }
                if (iStack_78 == 0) {
                  if (*(int *)(iVar24 + 0x430) == 0) {
                    if (*(int *)(iVar24 + 0x46c) == 0) {
                      *(undefined4 *)(iVar10 + 0x14c) = 0;
                      *(uint *)(iVar10 + 300) = *(uint *)(iVar10 + 300) & 0xffffff7f;
                      goto LAB_4a04c128;
                    }
                    *(int *)(iVar10 + 0x14c) = *(int *)(iVar24 + 0x46c);
                    uVar31 = *(uint *)(iVar10 + 300) & 0xffffff7f;
                  }
                  else {
                    *(int *)(iVar10 + 0x14c) = *(int *)(iVar24 + 0x430);
                    uVar31 = *(uint *)(iVar10 + 300) | 0x80;
                  }
                  *(uint *)(iVar10 + 300) = uVar31;
                }
                else {
                  *(int *)(iVar10 + 0x14c) = iStack_78;
                  *(uint *)(iVar10 + 300) = *(uint *)(iVar10 + 300) & 0xffffff7f;
                }
LAB_4a04c128:
                *(undefined4 *)(iVar10 + 0xec) = 0;
                iVar15 = *(int *)puVar9;
                iVar11 = *(int *)(iVar15 + 0x38c);
                *(int *)(iVar15 + 0x388) = iVar11;
                *(uint *)(iVar15 + 0x38c) = (uStack_58 & 0xfffffffc) + iVar11;
                *(int *)(iVar10 + 0x144) = iVar11;
                *(uint *)(iVar10 + 300) = *(uint *)(iVar10 + 300) & 0xffffffdf;
                puVar26 = *(ushort **)(iVar10 + 0x144);
                *(undefined4 *)(iVar10 + 0xf0) = 0;
                FUN_4a093364(iVar10);
              }
              *puVar26 = uVar2;
              puVar26[1] = uVar3;
              puVar26[2] = uVar6;
              puVar26[3] = uVar6;
              puVar26[4] = uVar3;
              puVar26[5] = uVar5;
              puVar26 = puVar26 + 6;
              *(int *)(iVar10 + 0xf0) = *(int *)(iVar10 + 0xf0) + 6;
            }
          }
        }
        if (local_30 == 3) {
          puVar27 = puVar27 + 4;
        }
        else if (local_30 == 4) {
          puVar27 = puVar27 + 2;
        }
        if (uStack_98 == 0) {
          return;
        }
      } while( true );
    case 5:
    case 6:
      if (local_30 == 5) {
        uStack_98 = uStack_28 >> 1;
      }
      else {
        uStack_98 = uStack_28 - 1;
      }
      if (uStack_98 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a04c228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
      uStack_60 = uStack_98 * 4 + 3;
      puVar27 = local_2c;
      do {
        puVar9 = PTR_DAT_4a04be40;
        uStack_98 = uStack_98 - 1;
        uVar2 = *puVar27;
        uVar3 = puVar27[1];
        if ((uint)uVar2 != (uint)uVar3) {
          puVar30 = (ushort *)(iVar25 + (uint)uVar2 * 0x14);
          puVar28 = (ushort *)(iVar25 + (uint)uVar3 * 0x14);
          uVar6 = puVar30[8];
          if ((puVar28[8] & uVar6 & 0x3f) == 0) {
            iVar11 = 0;
            if (*(int *)(puVar30 + 6) != 0) {
              iVar11 = *(int *)(puVar28 + 6);
            }
            if (*(int *)(puVar30 + 6) != 0 && iVar11 != 0) {
              if ((uVar6 & 0xbf) == 0x80) {
                puVar30[8] = uVar6 & 0xff7f;
                iVar11 = *(int *)puVar9;
                iStack_64 = iVar11;
                if ((uVar6 & 0x400) == 0) {
                  uStack_68 = *(undefined4 *)(puVar30 + 6);
                  iVar15 = FUN_4a0015f0(*(int *)(puVar30 + 2) << 0xb,uStack_68);
                  uVar6 = (ushort)((uint)(*(int *)(iStack_64 + 0x310) * iVar15 * 0x10) >> 0x10);
                  iVar15 = FUN_4a0015f0(*(int *)(puVar30 + 4) << 0xb,uStack_68);
                  uVar5 = (ushort)((uint)(*(int *)(iStack_64 + 0x314) * iVar15 * 0x10) >> 0x10);
                }
                else {
                  uVar6 = (ushort)((uint)(*(int *)(puVar30 + 2) *
                                          (*(int *)(iVar11 + 0x34c) * 8 + -1) * 8) >> 0x10);
                  uVar5 = (ushort)((uint)(*(int *)(puVar30 + 4) *
                                          (*(int *)(iVar11 + 0x350) * 8 + -1) * 8) >> 0x10);
                }
                iVar15 = *(int *)(iVar11 + 0x354);
                if (iVar15 == 0) {
                  *puVar30 = uVar6;
                  puVar30[1] = uVar5;
                }
                else if (iVar15 == 1) {
                  *puVar30 = ~uVar5;
                  puVar30[1] = uVar6;
                }
                else {
                  if (iVar15 == 2) {
                    *puVar30 = ~uVar6;
                    uVar6 = uVar5;
                  }
                  else {
                    if (iVar15 != 3) goto LAB_4a04c3a0;
                    *puVar30 = uVar5;
                  }
                  puVar30[1] = ~uVar6;
                }
LAB_4a04c3a0:
                *puVar30 = (short)*(undefined4 *)(iVar11 + 800) + *puVar30;
                puVar30[1] = (short)*(undefined4 *)(iVar11 + 0x328) + puVar30[1];
              }
              puVar9 = PTR_DAT_4a04be40;
              uVar6 = puVar28[8];
              if ((uVar6 & 0xbf) == 0x80) {
                puVar28[8] = uVar6 & 0xff7f;
                iVar11 = *(int *)puVar9;
                if ((uVar6 & 0x400) == 0) {
                  uStack_6c = *(undefined4 *)(puVar28 + 6);
                  iVar15 = FUN_4a0015f0(*(int *)(puVar28 + 2) << 0xb,uStack_6c);
                  uVar6 = (ushort)((uint)(*(int *)(iVar11 + 0x310) * iVar15 * 0x10) >> 0x10);
                  iVar15 = FUN_4a0015f0(*(int *)(puVar28 + 4) << 0xb,uStack_6c);
                  uVar5 = (ushort)((uint)(*(int *)(iVar11 + 0x314) * iVar15 * 0x10) >> 0x10);
                }
                else {
                  uVar6 = (ushort)((uint)((*(int *)(iVar11 + 0x34c) * 8 + -1) *
                                          *(int *)(puVar28 + 2) * 8) >> 0x10);
                  uVar5 = (ushort)((uint)(*(int *)(puVar28 + 4) *
                                          (*(int *)(iVar11 + 0x350) * 8 + -1) * 8) >> 0x10);
                }
                iVar15 = *(int *)(iVar11 + 0x354);
                if (iVar15 == 0) {
                  *puVar28 = uVar6;
                  puVar28[1] = uVar5;
                }
                else if (iVar15 == 1) {
                  *puVar28 = ~uVar5;
                  puVar28[1] = uVar6;
                }
                else {
                  if (iVar15 == 2) {
                    *puVar28 = ~uVar6;
                    uVar6 = uVar5;
                  }
                  else {
                    if (iVar15 != 3) goto LAB_4a04c4c0;
                    *puVar28 = uVar5;
                  }
                  puVar28[1] = ~uVar6;
                }
LAB_4a04c4c0:
                *puVar28 = (short)*(undefined4 *)(iVar11 + 800) + *puVar28;
                puVar28[1] = (short)*(undefined4 *)(iVar11 + 0x328) + puVar28[1];
              }
              puVar9 = PTR_DAT_4a04be40;
              if (iVar10 == 0) {
                iVar11 = *(int *)PTR_DAT_4a04be40;
                iVar10 = *(int *)(iVar11 + 0x38c);
                *(int *)(iVar11 + 0x388) = iVar10;
                *(int *)(iVar11 + 0x38c) = iVar10 + 0x150;
                FUN_4a0922a4(iVar10);
                *(undefined4 *)(iVar10 + 0x130) = 0;
                *(int *)(iVar10 + 0xac) = iVar25;
                *(uint *)(iVar10 + 300) = *(uint *)(iVar10 + 300) & 0xfffffffe;
                if (iStack_74 == 0) {
                  if (*(int *)(iVar24 + 0x434) == 0) {
                    if (*(int *)(iVar24 + 0x470) == 0) {
                      *(undefined4 *)(iVar10 + 0x140) = 0;
                      *(uint *)(iVar10 + 300) = *(uint *)(iVar10 + 300) & 0xffffffef;
                      goto LAB_4a04c588;
                    }
                    *(int *)(iVar10 + 0x140) = *(int *)(iVar24 + 0x470);
                    uVar31 = *(uint *)(iVar10 + 300) & 0xffffffef;
                  }
                  else {
                    *(int *)(iVar10 + 0x140) = *(int *)(iVar24 + 0x434);
                    uVar31 = *(uint *)(iVar10 + 300) | 0x10;
                  }
                  *(uint *)(iVar10 + 300) = uVar31;
                }
                else {
                  *(int *)(iVar10 + 0x140) = iStack_74;
                  *(uint *)(iVar10 + 300) = *(uint *)(iVar10 + 300) & 0xffffffef;
                }
LAB_4a04c588:
                if (*(int *)(iVar24 + 0x42c) == 0) {
                  if (*(int *)(iVar24 + 0x468) != 0) {
                    *(int *)(iVar10 + 0x148) = *(int *)(iVar24 + 0x468);
                    uVar31 = *(uint *)(iVar10 + 300) & 0xffffffbf;
                    goto LAB_4a04c5b8;
                  }
                  *(undefined4 *)(iVar10 + 0x148) = 0;
                  *(uint *)(iVar10 + 300) = *(uint *)(iVar10 + 300) & 0xffffffbf;
                }
                else {
                  *(int *)(iVar10 + 0x148) = *(int *)(iVar24 + 0x42c);
                  uVar31 = *(uint *)(iVar10 + 300) | 0x40;
LAB_4a04c5b8:
                  *(uint *)(iVar10 + 300) = uVar31;
                }
                *(int *)(iVar10 + 0x14c) = iStack_78;
                *(uint *)(iVar10 + 300) = *(uint *)(iVar10 + 300) & 0xffffff7f;
                *(undefined4 *)(iVar10 + 0xec) = 5;
                iVar15 = *(int *)puVar9;
                iVar11 = *(int *)(iVar15 + 0x38c);
                *(int *)(iVar15 + 0x388) = iVar11;
                *(uint *)(iVar15 + 0x38c) = (uStack_60 & 0xfffffffc) + iVar11;
                *(int *)(iVar10 + 0x144) = iVar11;
                *(uint *)(iVar10 + 300) = *(uint *)(iVar10 + 300) & 0xffffffdf;
                puVar26 = *(ushort **)(iVar10 + 0x144);
                *(undefined4 *)(iVar10 + 0xf0) = 0;
                FUN_4a093364(iVar10);
              }
              *puVar26 = uVar2;
              puVar26[1] = uVar3;
              puVar26 = puVar26 + 2;
              *(int *)(iVar10 + 0xf0) = *(int *)(iVar10 + 0xf0) + 2;
            }
          }
        }
        if (local_30 == 5) {
          puVar27 = puVar27 + 2;
        }
        else {
          puVar27 = puVar27 + 1;
        }
        if (uStack_98 == 0) {
          return;
        }
      } while( true );
    case 7:
      if (uStack_28 != 0) {
        do {
          uStack_28 = uStack_28 - 1;
        } while (uStack_28 != 0);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x4a04c6b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    case 8:
      FUN_4a048064(&local_30,&local_2c,&uStack_28);
    case 0:
    case 2:
      if (local_30 == 0) {
        uStack_98 = (uint)((ulonglong)uStack_28 * (ulonglong)DAT_4a04be4c >> 0x21);
      }
      else {
        if (local_30 != 1) {
          uVar29 = (uint)*local_2c;
        }
        uStack_98 = uStack_28 - 2;
      }
      uStack_84 = 0;
      if (uStack_98 == 0) {
                    /* WARNING: Could not recover jumptable at 0x4a04b040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
      uStack_38 = uStack_98 * 6 + 3;
      puVar27 = local_2c;
      do {
        puVar9 = PTR_DAT_4a04be40;
        uStack_98 = uStack_98 - 1;
        if (local_30 != 2 && local_30 != 8) {
          uVar29 = (uint)puVar27[uStack_84];
        }
        uVar2 = puVar27[2];
        uVar31 = (uint)uVar2;
        uVar3 = puVar27[uStack_84 ^ 1];
        uVar33 = (uint)uVar3;
        if ((uVar29 != uVar31 && uVar29 != uVar33) && uVar31 != uVar33) {
          iVar11 = iVar25 + uVar29 * 0x14;
          iVar15 = iVar25 + uVar31 * 0x14;
          iVar18 = iVar25 + uVar33 * 0x14;
          if ((*(ushort *)(iVar11 + 0x10) & *(ushort *)(iVar15 + 0x10) & *(ushort *)(iVar18 + 0x10)
              & 0x3f) == 0) {
            iStack_40 = *(int *)(iVar11 + 4);
            iStack_48 = *(int *)(iVar11 + 8);
            iStack_50 = *(int *)(iVar11 + 0xc);
            iVar11 = *(int *)(iVar15 + 0xc) - iStack_50 >> 2;
            iVar32 = *(int *)(iVar15 + 4) - iStack_40 >> 2;
            iVar15 = *(int *)(iVar15 + 8) - iStack_48 >> 2;
            iVar16 = *(int *)(iVar18 + 0xc) - iStack_50 >> 2;
            iVar1 = *(int *)(iVar18 + 4) - iStack_40 >> 2;
            iVar18 = *(int *)(iVar18 + 8) - iStack_48 >> 2;
            if ((**(uint **)PTR_DAT_4a04be40 & 0x80000000) == 0) {
              uStack_bc = iStack_40 >> 2;
              uStack_b4 = iStack_50 >> 2;
              uStack_b8 = iStack_48 >> 2;
            }
            else {
              uStack_bc = *(uint *)PTR_DAT_4a04be50;
              uStack_b8 = *(uint *)(PTR_DAT_4a04be50 + 4);
              uStack_b4 = *(uint *)(PTR_DAT_4a04be50 + 8);
            }
            lVar7 = (longlong)iVar11 * (longlong)iVar18;
            uVar33 = (uint)lVar7;
            lVar8 = (longlong)iVar15 * (longlong)iVar16;
            uVar31 = (uint)lVar8;
            uVar19 = uVar31 - uVar33;
            iVar23 = (int)((ulonglong)lVar8 >> 0x20) -
                     ((int)((ulonglong)lVar7 >> 0x20) + (uint)(uVar31 < uVar33));
            lVar7 = (longlong)iVar32 * (longlong)iVar16;
            uVar20 = (uint)lVar7;
            lVar8 = (longlong)iVar11 * (longlong)iVar1;
            uVar31 = (uint)lVar8;
            uVar33 = uVar31 - uVar20;
            iVar11 = (int)((ulonglong)lVar8 >> 0x20) -
                     ((int)((ulonglong)lVar7 >> 0x20) + (uint)(uVar31 < uVar20));
            lVar7 = (longlong)iVar15 * (longlong)iVar1;
            uVar21 = (uint)lVar7;
            lVar8 = (longlong)iVar32 * (longlong)iVar18;
            uVar31 = (uint)lVar8;
            uVar20 = uVar31 - uVar21;
            iVar15 = (int)((ulonglong)lVar8 >> 0x20) -
                     ((int)((ulonglong)lVar7 >> 0x20) + (uint)(uVar31 < uVar21));
            if (((iVar15 == 0 && (iVar23 == 0 && iVar11 == 0)) &&
                 (uVar20 == 0 && (uVar19 == 0 && uVar33 == 0))) ||
               (uVar21 = (uint)((ulonglong)uVar33 * (ulonglong)uStack_b8),
               uVar31 = (uint)((ulonglong)uVar19 * (ulonglong)uStack_bc),
               (int)(iVar23 * uStack_bc +
                     ((int)uStack_bc >> 0x1f) * uVar19 +
                     (int)((ulonglong)uVar19 * (ulonglong)uStack_bc >> 0x20) +
                     iVar11 * uStack_b8 +
                     ((int)uStack_b8 >> 0x1f) * uVar33 +
                     (int)((ulonglong)uVar33 * (ulonglong)uStack_b8 >> 0x20) +
                     (uint)CARRY4(uVar31,uVar21) +
                     iVar15 * uStack_b4 +
                     ((int)uStack_b4 >> 0x1f) * uVar20 +
                     (int)((ulonglong)uVar20 * (ulonglong)uStack_b4 >> 0x20) +
                    (uint)CARRY4(uVar31 + uVar21,(uint)((ulonglong)uVar20 * (ulonglong)uStack_b4)))
               < 0)) {
              bVar37 = false;
            }
            else {
              bVar37 = true;
            }
            if ((*(uint *)(local_70 + 0x10) & 8) == 0) {
              if ((*(uint *)(local_70 + 0x10) & 0x10) == 0) {
                if (bVar37) goto LAB_4a04b330;
              }
              else if (!bVar37) goto LAB_4a04b320;
              iVar11 = 0;
            }
            else if (bVar37) {
LAB_4a04b330:
              iVar11 = 1;
            }
            else {
LAB_4a04b320:
              iVar11 = 2;
            }
            if (iVar11 != 0) {
              if (iVar10 == 0) {
                iVar11 = *(int *)PTR_DAT_4a04be40;
                iVar10 = *(int *)(iVar11 + 0x38c);
                *(int *)(iVar11 + 0x388) = iVar10;
                *(int *)(iVar11 + 0x38c) = iVar10 + 0x150;
                iStack_4c = iStack_50;
                iStack_44 = iStack_48;
                iStack_3c = iStack_40;
                FUN_4a0922a4(iVar10);
                *(undefined4 *)(iVar10 + 0x130) = 0;
                *(int *)(iVar10 + 0xac) = iVar25;
                *(uint *)(iVar10 + 300) = *(uint *)(iVar10 + 300) & 0xfffffffe;
                if (iStack_74 == 0) {
                  if (*(int *)(iVar24 + 0x434) == 0) {
                    if (*(int *)(iVar24 + 0x470) == 0) {
                      *(undefined4 *)(iVar10 + 0x140) = 0;
                      *(uint *)(iVar10 + 300) = *(uint *)(iVar10 + 300) & 0xffffffef;
                      goto LAB_4a04b3e4;
                    }
                    *(int *)(iVar10 + 0x140) = *(int *)(iVar24 + 0x470);
                    uVar31 = *(uint *)(iVar10 + 300) & 0xffffffef;
                  }
                  else {
                    *(int *)(iVar10 + 0x140) = *(int *)(iVar24 + 0x434);
                    uVar31 = *(uint *)(iVar10 + 300) | 0x10;
                  }
                  *(uint *)(iVar10 + 300) = uVar31;
                }
                else {
                  *(int *)(iVar10 + 0x140) = iStack_74;
                  *(uint *)(iVar10 + 300) = *(uint *)(iVar10 + 300) & 0xffffffef;
                }
LAB_4a04b3e4:
                if (*(int *)(iVar24 + 0x42c) == 0) {
                  if (*(int *)(iVar24 + 0x468) != 0) {
                    *(int *)(iVar10 + 0x148) = *(int *)(iVar24 + 0x468);
                    uVar31 = *(uint *)(iVar10 + 300) & 0xffffffbf;
                    goto LAB_4a04b414;
                  }
                  *(undefined4 *)(iVar10 + 0x148) = 0;
                  *(uint *)(iVar10 + 300) = *(uint *)(iVar10 + 300) & 0xffffffbf;
                }
                else {
                  *(int *)(iVar10 + 0x148) = *(int *)(iVar24 + 0x42c);
                  uVar31 = *(uint *)(iVar10 + 300) | 0x40;
LAB_4a04b414:
                  *(uint *)(iVar10 + 300) = uVar31;
                }
                if (iStack_78 == 0) {
                  if (*(int *)(iVar24 + 0x430) == 0) {
                    if (*(int *)(iVar24 + 0x46c) == 0) {
                      *(undefined4 *)(iVar10 + 0x14c) = 0;
                      *(uint *)(iVar10 + 300) = *(uint *)(iVar10 + 300) & 0xffffff7f;
                      goto LAB_4a04b494;
                    }
                    *(int *)(iVar10 + 0x14c) = *(int *)(iVar24 + 0x46c);
                    uVar31 = *(uint *)(iVar10 + 300) & 0xffffff7f;
                  }
                  else {
                    *(int *)(iVar10 + 0x14c) = *(int *)(iVar24 + 0x430);
                    uVar31 = *(uint *)(iVar10 + 300) | 0x80;
                  }
                  *(uint *)(iVar10 + 300) = uVar31;
                }
                else {
                  *(int *)(iVar10 + 0x14c) = iStack_78;
                  *(uint *)(iVar10 + 300) = *(uint *)(iVar10 + 300) & 0xffffff7f;
                }
LAB_4a04b494:
                *(undefined4 *)(iVar10 + 0xec) = 0;
                iVar15 = *(int *)puVar9;
                iVar11 = *(int *)(iVar15 + 0x38c);
                *(int *)(iVar15 + 0x388) = iVar11;
                *(uint *)(iVar15 + 0x38c) = (uStack_38 & 0xfffffffc) + iVar11;
                *(int *)(iVar10 + 0x144) = iVar11;
                *(uint *)(iVar10 + 300) = *(uint *)(iVar10 + 300) & 0xffffffdf;
                puVar26 = *(ushort **)(iVar10 + 0x144);
                *(undefined4 *)(iVar10 + 0xf0) = 0;
                FUN_4a093364(iVar10);
              }
              *puVar26 = (ushort)uVar29;
              puVar26[1] = uVar3;
              puVar26[2] = uVar2;
              puVar26 = puVar26 + 3;
              *(int *)(iVar10 + 0xf0) = *(int *)(iVar10 + 0xf0) + 3;
            }
          }
        }
        if (local_30 == 0) {
          puVar27 = puVar27 + 3;
        }
        else {
          if (local_30 == 1) {
            uStack_84 = uStack_84 ^ 1;
          }
          else if (local_30 != 2 && local_30 != 8) goto LAB_4a04b558;
          puVar27 = puVar27 + 1;
        }
LAB_4a04b558:
        if (uStack_98 == 0) {
          return;
        }
      } while( true );
    default:
      goto switchD_4a04afb4_default;
    }
  }
  FUN_4a0492d4(local_2c,param_3);
switchD_4a04afb4_default:
  return;
switchD_4a04afb4_caseD_1:
  uVar29 = uStack_28 - 2;
  puStack_7c = local_2c;
  uVar2 = *local_2c;
  uStack_90 = (uint)local_2c[1];
  iVar10 = iVar25 + (uint)uVar2 * 0x14;
  iVar11 = iVar25 + uStack_90 * 0x14;
  uVar12 = *(undefined4 *)(iVar24 + 0x38c);
  iVar15 = *(int *)PTR_DAT_4a04be40;
  iVar18 = *(int *)(iVar15 + 0x38c);
  *(int *)(iVar15 + 0x388) = iVar18;
  *(int *)(iVar15 + 0x38c) = iVar18 + 0x150;
  FUN_4a0922a4(iVar18);
  *(undefined4 *)(iVar18 + 0x130) = 0;
  *(int *)(iVar18 + 0xac) = iVar25;
  *(uint *)(iVar18 + 300) = *(uint *)(iVar18 + 300) & 0xfffffffe;
  if (iStack_74 == 0) {
    if (*(int *)(iVar24 + 0x434) == 0) {
      if (*(int *)(iVar24 + 0x470) == 0) {
        *(undefined4 *)(iVar18 + 0x140) = 0;
        *(uint *)(iVar18 + 300) = *(uint *)(iVar18 + 300) & 0xffffffef;
        goto LAB_4a04b658;
      }
      *(int *)(iVar18 + 0x140) = *(int *)(iVar24 + 0x470);
      uVar33 = *(uint *)(iVar18 + 300) & 0xffffffef;
    }
    else {
      *(int *)(iVar18 + 0x140) = *(int *)(iVar24 + 0x434);
      uVar33 = *(uint *)(iVar18 + 300) | 0x10;
    }
    *(uint *)(iVar18 + 300) = uVar33;
  }
  else {
    *(int *)(iVar18 + 0x140) = iStack_74;
    *(uint *)(iVar18 + 300) = *(uint *)(iVar18 + 300) & 0xffffffef;
  }
LAB_4a04b658:
  if (*(int *)(iVar24 + 0x42c) == 0) {
    if (*(int *)(iVar24 + 0x468) != 0) {
      *(int *)(iVar18 + 0x148) = *(int *)(iVar24 + 0x468);
      uVar33 = *(uint *)(iVar18 + 300) & 0xffffffbf;
      goto LAB_4a04b688;
    }
    *(undefined4 *)(iVar18 + 0x148) = 0;
    *(uint *)(iVar18 + 300) = *(uint *)(iVar18 + 300) & 0xffffffbf;
  }
  else {
    *(int *)(iVar18 + 0x148) = *(int *)(iVar24 + 0x42c);
    uVar33 = *(uint *)(iVar18 + 300) | 0x40;
LAB_4a04b688:
    *(uint *)(iVar18 + 300) = uVar33;
  }
  if (iStack_78 == 0) {
    if (*(int *)(iVar24 + 0x430) == 0) {
      if (*(int *)(iVar24 + 0x46c) == 0) {
        *(undefined4 *)(iVar18 + 0x14c) = 0;
        *(uint *)(iVar18 + 300) = *(uint *)(iVar18 + 300) & 0xffffff7f;
        goto LAB_4a04b708;
      }
      *(int *)(iVar18 + 0x14c) = *(int *)(iVar24 + 0x46c);
      uVar33 = *(uint *)(iVar18 + 300) & 0xffffff7f;
    }
    else {
      *(int *)(iVar18 + 0x14c) = *(int *)(iVar24 + 0x430);
      uVar33 = *(uint *)(iVar18 + 300) | 0x80;
    }
    *(uint *)(iVar18 + 300) = uVar33;
  }
  else {
    *(int *)(iVar18 + 0x14c) = iStack_78;
    *(uint *)(iVar18 + 300) = *(uint *)(iVar18 + 300) & 0xffffff7f;
  }
LAB_4a04b708:
  *(undefined4 *)(iVar18 + 0xec) = 0;
  iVar32 = *(int *)puVar9;
  iVar15 = *(int *)(iVar32 + 0x38c);
  *(int *)(iVar32 + 0x388) = iVar15;
  *(uint *)(iVar32 + 0x38c) = (uVar29 * 6 + 3 & 0xfffffffc) + iVar15;
  *(int *)(iVar18 + 0x144) = iVar15;
  *(uint *)(iVar18 + 300) = *(uint *)(iVar18 + 300) & 0xffffffdf;
  puStack_80 = *(undefined2 **)(iVar18 + 0x144);
  *(undefined4 *)(iVar18 + 0xf0) = 0;
  uVar33 = (uint)uVar2;
  uVar31 = uVar31 - 3;
  bVar37 = false;
  do {
    uStack_98 = uVar31;
    if (uVar29 == 0) {
      psVar13 = *(short **)(iVar18 + 0x144);
      if ((*(uint *)(iVar18 + 300) & 0x20) != 0) {
        sVar4 = psVar13[2];
        bVar37 = sVar4 == 0;
        if (bVar37) {
          sVar4 = psVar13[3];
        }
        bVar36 = bVar37 && sVar4 == 0;
        if (bVar37 && sVar4 == 0) {
          bVar36 = *psVar13 == 0x803;
        }
        if (bVar36) {
          psVar13 = *(short **)(psVar13 + 6);
        }
        else {
          psVar13 = (short *)0x0;
        }
      }
      iVar10 = (int)puStack_80 - (int)psVar13 >> 1;
      *(int *)(iVar18 + 0xf0) = iVar10;
      if (iVar10 != 0) {
        FUN_4a093364(iVar18);
        return;
      }
      *(undefined4 *)(iVar24 + 0x38c) = uVar12;
      return;
    }
    uVar2 = puStack_7c[2];
    uVar29 = (uint)uVar2;
    bVar36 = uVar33 != uVar29;
    iVar15 = iVar25 + uVar29 * 0x14;
    uVar31 = uVar29 * 5;
    if (bVar36) {
      uVar31 = uStack_90;
    }
    uVar20 = uVar31;
    if (bVar36 && uVar33 != uVar31) {
      uVar20 = uStack_90;
    }
    if (((bVar36 && uVar33 != uVar31) && uVar29 != uVar20) &&
       ((*(ushort *)(iVar10 + 0x10) & *(ushort *)(iVar15 + 0x10) & *(ushort *)(iVar11 + 0x10) & 0x3f
        ) == 0)) {
      iStack_54 = *(int *)(iVar10 + 4);
      iVar14 = *(int *)(iVar10 + 8);
      iVar34 = *(int *)(iVar10 + 0xc);
      iVar32 = *(int *)(iVar15 + 0xc) - iVar34 >> 2;
      iVar16 = *(int *)(iVar15 + 4) - iStack_54 >> 2;
      iVar1 = *(int *)(iVar15 + 8) - iVar14 >> 2;
      iVar23 = *(int *)(iVar11 + 4) - iStack_54 >> 2;
      iVar17 = *(int *)(iVar11 + 8) - iVar14 >> 2;
      iVar35 = *(int *)(iVar11 + 0xc) - iVar34 >> 2;
      if ((**(uint **)PTR_DAT_4a04be40 & 0x80000000) == 0) {
        uStack_bc = iVar14 >> 2;
        uStack_b8 = iVar34 >> 2;
        uStack_c0 = iStack_54 >> 2;
      }
      else {
        uStack_c0 = *(uint *)PTR_DAT_4a04be50;
        uStack_bc = *(uint *)((int)PTR_DAT_4a04be50 + 4);
        uStack_b8 = *(uint *)((int)PTR_DAT_4a04be50 + 8);
      }
      lVar7 = (longlong)iVar32 * (longlong)iVar17;
      uVar20 = (uint)lVar7;
      lVar8 = (longlong)iVar1 * (longlong)iVar35;
      uVar31 = (uint)lVar8;
      uVar21 = uVar31 - uVar20;
      iVar14 = (int)((ulonglong)lVar8 >> 0x20) -
               ((int)((ulonglong)lVar7 >> 0x20) + (uint)(uVar31 < uVar20));
      lVar7 = (longlong)iVar16 * (longlong)iVar35;
      uVar19 = (uint)lVar7;
      lVar8 = (longlong)iVar32 * (longlong)iVar23;
      uVar31 = (uint)lVar8;
      uVar20 = uVar31 - uVar19;
      iVar32 = (int)((ulonglong)lVar8 >> 0x20) -
               ((int)((ulonglong)lVar7 >> 0x20) + (uint)(uVar31 < uVar19));
      lVar7 = (longlong)iVar1 * (longlong)iVar23;
      uVar22 = (uint)lVar7;
      lVar8 = (longlong)iVar16 * (longlong)iVar17;
      uVar31 = (uint)lVar8;
      uVar19 = uVar31 - uVar22;
      iVar16 = (int)((ulonglong)lVar8 >> 0x20) -
               ((int)((ulonglong)lVar7 >> 0x20) + (uint)(uVar31 < uVar22));
      if (((iVar16 == 0 && (iVar14 == 0 && iVar32 == 0)) &&
           (uVar19 == 0 && (uVar21 == 0 && uVar20 == 0))) ||
         (uVar22 = (uint)((ulonglong)uVar20 * (ulonglong)uStack_bc),
         uVar31 = (uint)((ulonglong)uVar21 * (ulonglong)uStack_c0),
         (int)(iVar14 * uStack_c0 +
               ((int)uStack_c0 >> 0x1f) * uVar21 +
               (int)((ulonglong)uVar21 * (ulonglong)uStack_c0 >> 0x20) +
               iVar32 * uStack_bc +
               ((int)uStack_bc >> 0x1f) * uVar20 +
               (int)((ulonglong)uVar20 * (ulonglong)uStack_bc >> 0x20) + (uint)CARRY4(uVar31,uVar22)
               + iVar16 * uStack_b8 +
                 ((int)uStack_b8 >> 0x1f) * uVar19 +
                 (int)((ulonglong)uVar19 * (ulonglong)uStack_b8 >> 0x20) +
              (uint)CARRY4(uVar31 + uVar22,(uint)((ulonglong)uVar19 * (ulonglong)uStack_b8))) < 0))
      {
        bVar36 = false;
      }
      else {
        bVar36 = true;
      }
      if ((*(uint *)(local_70 + 0x10) & 8) == 0) {
        if ((*(uint *)(local_70 + 0x10) & 0x10) == 0) {
          if (bVar36) goto LAB_4a04ba04;
        }
        else if (!bVar36) goto LAB_4a04b9f4;
        iVar32 = 0;
      }
      else if (bVar36) {
LAB_4a04ba04:
        iVar32 = 1;
      }
      else {
LAB_4a04b9f4:
        iVar32 = 2;
      }
      if (iVar32 != 0) {
        *puStack_80 = (short)uVar33;
        puStack_80[1] = (short)uStack_90;
        puStack_80[2] = uVar2;
        puStack_80 = puStack_80 + 3;
      }
    }
    if (bVar37) {
      uStack_90 = uVar29;
    }
    if (bVar37) {
      iVar11 = iVar15;
      uVar29 = uVar33;
      iVar15 = iVar10;
    }
    iVar10 = iVar15;
    puStack_7c = puStack_7c + 1;
    uVar33 = uVar29;
    uVar31 = uStack_98 + -1;
    uVar29 = uStack_98;
    bVar37 = (bool)(bVar37 ^ 1);
  } while( true );
}



// Address: 4a04c6d0

void FUN_4a04c6d0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_4a04c754;
  puVar1 = PTR_LAB_4a04c750;
  *(undefined **)(PTR_PTR_4a04c754 + 0x410) = PTR_LAB_4a04c750;
  *(undefined **)(puVar2 + 0x10) = puVar1;
  puVar1 = PTR_FUN_4a04c758;
  *(undefined **)(puVar2 + 0x430) = PTR_FUN_4a04c758;
  *(undefined **)(puVar2 + 0x30) = puVar1;
  puVar1 = PTR_LAB_4a04c75c;
  *(undefined **)(puVar2 + 0x490) = PTR_LAB_4a04c75c;
  *(undefined **)(puVar2 + 0x90) = puVar1;
  puVar1 = PTR_FUN_4a04c760;
  *(undefined **)(puVar2 + 0x4b0) = PTR_FUN_4a04c760;
  *(undefined **)(puVar2 + 0xb0) = puVar1;
  puVar1 = PTR_FUN_4a04c764;
  *(undefined **)(puVar2 + 0x510) = PTR_FUN_4a04c764;
  *(undefined **)(puVar2 + 0x110) = puVar1;
  puVar1 = PTR_FUN_4a04c768;
  *(undefined **)(puVar2 + 0x530) = PTR_FUN_4a04c768;
  *(undefined **)(puVar2 + 0x130) = puVar1;
  puVar1 = PTR_FUN_4a04c76c;
  *(undefined **)(puVar2 + 0x590) = PTR_FUN_4a04c76c;
  *(undefined **)(puVar2 + 400) = puVar1;
  puVar1 = PTR_FUN_4a04c770;
  *(undefined **)(puVar2 + 0x5b0) = PTR_FUN_4a04c770;
  *(undefined **)(puVar2 + 0x1b0) = puVar1;
  puVar1 = PTR_LAB_4a04c774;
  *(undefined **)(puVar2 + 0x610) = PTR_LAB_4a04c774;
  *(undefined **)(puVar2 + 0x210) = puVar1;
  puVar1 = PTR_FUN_4a04c778;
  *(undefined **)(puVar2 + 0x630) = PTR_FUN_4a04c778;
  *(undefined **)(puVar2 + 0x230) = puVar1;
  return;
}



// Address: 4a04c77c

void FUN_4a04c77c(undefined4 param_1)

{
  *(undefined4 *)(PTR_DAT_4a04c784 + 4) = param_1;
  return;
}



// Address: 4a04c788

void FUN_4a04c788(undefined4 param_1)

{
  *(undefined4 *)(PTR_DAT_4a04c790 + 8) = param_1;
  return;
}



// Address: 4a04c794

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_4a04c794(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined4 local_1c;
  int local_18;
  
  puVar6 = PTR_DAT_4a04c858;
  if (((*(undefined **)(PTR_DAT_4a04c858 + 4) == PTR_FUN_4a00e4e8_1_4a04c85c) &&
      (iVar2 = FUN_4a00b94c(), iVar2 == 1)) ||
     ((param_1 != 0 &&
      (iVar2 = FUN_4a1652c8(*(int **)(PTR_DAT_4a04c860 + 8),param_1,
                            *(undefined4 *)(**(int **)(PTR_DAT_4a04c860 + 8) + 0x10)), iVar2 == 0)))
     ) {
    iVar2 = FUN_4a1652c8(param_1,param_2,*(undefined4 *)(puVar6 + 4));
  }
  else {
    iVar2 = FUN_4a1652ca(*(int **)(PTR_DAT_4a04c860 + 8),param_1,param_2,
                         *(undefined4 *)(**(int **)(PTR_DAT_4a04c860 + 8) + 0xc));
    if (iVar2 == 0) {
      local_18 = 0;
      host_s3eConfigGetInt_thumb(&DAT_4a04c87c,s_EGLTerminateOnSuspend_4a04c864,&local_18);
      puVar6 = &DAT_4a04c880;
      if (local_18 != 0) {
        puVar6 = &DAT_4a04c884;
      }
      pcVar7 = s_useGLContextShadow_4a04c888;
      if (local_18 != 0) {
        pcVar7 = s_MemSize6_4a04c89c;
      }
      local_1c = 0;
      host_s3eConfigGetInt_thumb(puVar6,pcVar7,&local_1c);
      puVar1 = PTR_DAT_4a04c860;
      uVar3 = FUN_4a1652c6(*(int **)(PTR_DAT_4a04c860 + 8),
                           *(undefined4 *)(**(int **)(PTR_DAT_4a04c860 + 8) + 0x28));
      uVar4 = FUN_4a1652c6(*(int **)(puVar1 + 8),*(undefined4 *)(**(int **)(puVar1 + 8) + 0x20));
      FUN_4a008004(PTR_s_GL_Context_Shadow_has_run_out_of_4a18302b_0xd_4a04c8a8,uVar4,uVar3,puVar6,
                   pcVar7,local_1c);
      iVar5 = host_s3eDebugIsDebuggerPresent_thumb();
      if (iVar5 != 0) {
        _DAT_fffffff4 = 0;
      }
    }
  }
  return iVar2;
}



// Address: 4a04c8ac

undefined4 FUN_4a04c8ac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_24 [20];
  
  puVar1 = PTR_DAT_4a04c90c;
  iVar3 = *(int *)(PTR_DAT_4a04c90c + 0x18);
  *(int *)(PTR_DAT_4a04c90c + 0x18) = iVar3 + 1;
  if (iVar3 + 1 < 2) {
    FUN_4a0a7970(auStack_24);
    puVar1[2] = 0;
    puVar2 = PTR_DAT_4a04c910;
    piVar4 = (int *)PTR_DAT_4a04c910;
    if (puVar1[1] != '\0') {
      while (piVar4 = (int *)piVar4[2], piVar4 != (int *)puVar2) {
        FUN_4a1652c6(piVar4,*(undefined4 *)(*piVar4 + 8));
      }
      if (puVar1[2] != '\0') {
        FUN_4a01dab0();
      }
    }
    if (*(int *)PTR_DAT_4a04c914 != 0) {
      FUN_4a1652c4();
    }
    FUN_4a0a79e4(auStack_24);
  }
  return 0;
}



// Address: 4a04c918

uint FUN_4a04c918(int *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint local_34;
  undefined1 auStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar4 = *param_2;
  uVar8 = 0xffffffff;
  if (0 < iVar4) {
    iVar6 = *(int *)PTR_DAT_4a04ca5c;
    if (iVar6 == -1) {
      *param_2 = iVar4 + -2;
      uVar3 = *(ushort *)*param_1;
      *param_1 = (int)((ushort *)*param_1 + 1);
      uVar8 = (uint)uVar3;
    }
    else if (iVar6 == 0) {
      *param_2 = iVar4 + -1;
      pbVar5 = (byte *)*param_1;
      *param_1 = (int)(pbVar5 + 1);
      uVar8 = (uint)*pbVar5;
    }
    else if (iVar6 == 0x28) {
      *param_2 = iVar4 + -1;
      pbVar5 = (byte *)*param_1;
      pbVar7 = pbVar5 + 1;
      *param_1 = (int)pbVar7;
      uVar8 = (uint)*pbVar5;
      if ((int)(uVar8 << 0x18) < 0) {
        if ((uVar8 & 0x7f) >> 4 == 7) {
          *param_1 = (int)(pbVar5 + 2);
          bVar1 = *pbVar7;
          *param_2 = *param_2 + -1;
          pbVar5 = (byte *)*param_1;
          *param_1 = (int)(pbVar5 + 1);
          bVar2 = *pbVar5;
          *param_2 = *param_2 + -1;
          pbVar5 = (byte *)*param_1;
          uVar8 = bVar2 & 0x3f | (bVar1 & 0x3f | (uVar8 & 7) << 6) << 6;
          *param_1 = (int)(pbVar5 + 1);
          bVar1 = *pbVar5;
          *param_2 = *param_2 + -1;
        }
        else {
          if ((uVar8 & 0x7f) >> 5 != 3) {
            if (-1 < (int)(uVar8 << 0x19)) {
              return 0xffffffff;
            }
            *param_1 = (int)(pbVar5 + 2);
            bVar1 = *pbVar7;
            *param_2 = *param_2 + -1;
            return bVar1 & 0x3f | (uVar8 & 0x1f) << 6;
          }
          *param_1 = (int)(pbVar5 + 2);
          bVar1 = *pbVar7;
          *param_2 = *param_2 + -1;
          pbVar5 = (byte *)*param_1;
          uVar8 = bVar1 & 0x3f | (uVar8 & 0xf) << 6;
          *param_1 = (int)(pbVar5 + 1);
          bVar1 = *pbVar5;
          *param_2 = *param_2 + -1;
        }
        uVar8 = bVar1 & 0x3f | uVar8 << 6;
      }
    }
    else if (*(int *)PTR_DAT_4a04ca60 != 0) {
      puVar9 = (undefined4 *)(iVar6 * 0x10 + *(int *)PTR_DAT_4a04ca60);
      thunk_FUN_4a00121c(auStack_30,0x1c);
      local_28 = *puVar9;
      local_24 = puVar9[1];
      local_20 = puVar9[2];
      local_1c = puVar9[3];
      local_34 = 0;
      iVar4 = FUN_4a1652d2(auStack_30,&local_34,*param_1,*param_2);
      if (-1 < iVar4) {
        *param_1 = *param_1 + iVar4;
        *param_2 = *param_2 - iVar4;
        uVar8 = local_34;
      }
    }
  }
  return uVar8;
}



// Address: 4a04ca64

void FUN_4a04ca64(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iStack_28;
  int iStack_24;
  
  puVar3 = PTR_DAT_4a04cb04;
  puVar2 = PTR_DAT_4a04cb00;
  puVar1 = PTR_DAT_4a04cafc;
  if (*(char *)(*(int *)PTR_DAT_4a04cafc + 0x5c0) == '\0') {
    if (*(int *)(*(int *)PTR_DAT_4a04cafc + 0x2dc) != 0) {
      FUN_4a03be0c(&iStack_28);
      iVar4 = *(int *)puVar1;
      if ((*(int *)(iVar4 + 0x33c) != iStack_28) || (*(int *)(iVar4 + 0x340) != iStack_24)) {
        FUN_4a04a244(&iStack_28);
      }
    }
  }
  else if (*PTR_DAT_4a04cb00 != '\0' || *PTR_DAT_4a04cb04 != '\0') {
    uVar5 = *(undefined4 *)(PTR_DAT_4a04cb00 + 0xc);
    FUN_4a05a68c();
    if (*(int *)(*(int *)puVar1 + 4) << 0x18 < 0) {
      FUN_4a03be0c(&iStack_28);
      FUN_4a04a244(&iStack_28);
    }
    thunk_FUN_4a040d20(uVar5);
    *puVar2 = 0;
    *puVar3 = 0;
    FUN_4a0407c0(2);
  }
  FUN_4a04ff24();
  return;
}



// Address: 4a04ca6c

void FUN_4a04ca6c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int local_28;
  int local_24;
  
  puVar3 = PTR_DAT_4a04cb04;
  puVar2 = PTR_DAT_4a04cb00;
  puVar1 = PTR_DAT_4a04cafc;
  if (*(char *)(*(int *)PTR_DAT_4a04cafc + 0x5c0) == '\0') {
    if (*(int *)(*(int *)PTR_DAT_4a04cafc + 0x2dc) != 0) {
      FUN_4a03be0c(&local_28);
      iVar4 = *(int *)puVar1;
      if (*(int *)(iVar4 + 0x33c) == local_28) {
        if (*(int *)(iVar4 + 0x340) == local_24) goto LAB_4a04caf0;
      }
      FUN_4a04a244(&local_28);
    }
  }
  else if (*PTR_DAT_4a04cb00 != '\0' || *PTR_DAT_4a04cb04 != '\0') {
    uVar5 = *(undefined4 *)(PTR_DAT_4a04cb00 + 0xc);
    FUN_4a05a68c();
    if (*(int *)(*(int *)puVar1 + 4) << 0x18 < 0) {
      FUN_4a03be0c(&local_28);
      FUN_4a04a244(&local_28);
    }
    thunk_FUN_4a040d20(uVar5);
    *puVar2 = 0;
    *puVar3 = 0;
    FUN_4a0407c0(2);
  }
LAB_4a04caf0:
  FUN_4a04ff24();
  return;
}



// Address: 4a04cce0

void FUN_4a04cce0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_4a04cd50;
  if (*(code **)(PTR_DAT_4a04cd50 + 0x2c) != (code *)0x0) {
    (**(code **)(PTR_DAT_4a04cd50 + 0x2c))();
  }
  if (*(int *)(puVar1 + 0xc) != 0) {
    thunk_FUN_4a161530();
    *(undefined4 *)(puVar1 + 0xc) = 0;
  }
  *(undefined4 *)(puVar1 + 0x10) = 0;
  FUN_4a01d414();
  if (*(int *)(puVar1 + 0x40) != 0) {
    thunk_FUN_4a161530();
  }
  *(undefined4 *)(puVar1 + 0x40) = 0;
  if (*(int *)(puVar1 + 0x3c) != 0) {
    thunk_FUN_4a161530();
  }
  *(undefined4 *)(puVar1 + 0x3c) = 0;
  FUN_4a09e4dc();
  thunk_FUN_4a161530(*(undefined4 *)puVar1);
  *(undefined4 *)puVar1 = 0;
  return;
}



// Address: 4a04cd64

undefined8 FUN_4a04cd64(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint in_stack_00000008;
  
  for (uVar1 = 0; uVar1 < in_stack_00000008; uVar1 = uVar1 + 1) {
    thunk_FUN_4a1652fc();
    *(undefined1 *)(uVar1 + 0x18) = *(undefined1 *)(param_2 + uVar1);
  }
  return CONCAT44(param_2,param_1);
}



// Address: 4a04ce00

void FUN_4a04ce00(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar1 = PTR_DAT_4a04ce38;
  puVar3 = *(undefined4 **)PTR_DAT_4a04ce38;
  if (puVar3 != (undefined4 *)0x0) {
    for (uVar2 = 0; uVar2 < (uint)puVar3[1]; uVar2 = uVar2 + 1) {
    }
    if ((*(byte *)(puVar3 + 3) & 1) == 0) {
      FUN_4a0a6f48(*puVar3,0xc);
      *puVar3 = 0;
    }
    thunk_FUN_4a161530(puVar3);
  }
  *(undefined4 *)puVar1 = 0;
  return;
}



// Address: 4a04ce3c

void FUN_4a04ce3c(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short local_14;
  short local_12;
  short local_10;
  short sStack_e;
  
  puVar1 = PTR_DAT_4a04cecc;
  puVar7 = *(undefined4 **)(*(int *)PTR_DAT_4a04cecc + 0x398);
  *(undefined4 **)(*(int *)PTR_DAT_4a04cecc + 0x398) = puVar7 + 3;
  puVar7[1] = 0x60000000;
  FUN_4a04d598(&local_14);
  FUN_4a050b9c();
  iVar2 = *(int *)puVar1;
  *(undefined2 *)(puVar7 + 2) = *(undefined2 *)(iVar2 + 0x2fc);
  *(undefined2 *)((int)puVar7 + 10) = *(undefined2 *)(iVar2 + 0x2fe);
  *puVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x3a0) + *(int *)(iVar2 + 0x3b0) * 4 + -4);
  iVar2 = *(int *)puVar1;
  *(undefined4 **)(*(int *)(iVar2 + 0x3a0) + *(int *)(iVar2 + 0x3b0) * 4 + -4) = puVar7;
  iVar5 = (int)sStack_e;
  iVar2 = (int)local_10;
  iVar4 = (int)local_12;
  iVar3 = (int)local_14;
  if (iVar3 < 0) {
    iVar2 = iVar2 + iVar3;
    iVar3 = 0;
  }
  if (iVar4 < 0) {
    iVar5 = iVar5 + iVar4;
    iVar4 = 0;
  }
  iVar10 = *(int *)PTR_DAT_4a04d784;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  if (*(int *)(iVar10 + 0x344) < iVar3 + iVar2) {
    iVar2 = *(int *)(iVar10 + 0x344) - iVar3;
  }
  iVar9 = *(int *)(iVar10 + 0x354);
  if (*(int *)(iVar10 + 0x348) < iVar4 + iVar5) {
    iVar5 = *(int *)(iVar10 + 0x348) - iVar4;
  }
  if (iVar9 == 1) {
    iVar8 = (*(int *)(iVar10 + 0x33c) - iVar4) - iVar5;
    iVar6 = iVar2;
    iVar4 = iVar3;
    iVar2 = iVar5;
  }
  else {
    iVar6 = iVar5;
    if (iVar9 == 2) {
      iVar8 = (*(int *)(iVar10 + 0x33c) - iVar3) - iVar2;
      iVar4 = (*(int *)(iVar10 + 0x340) - iVar4) - iVar5;
    }
    else {
      iVar8 = iVar3;
      if (iVar9 == 3) {
        iVar6 = iVar2;
        iVar8 = iVar4;
        iVar4 = (*(int *)(iVar10 + 0x340) - iVar3) - iVar2;
        iVar2 = iVar5;
      }
    }
  }
  *(int *)(iVar10 + 0x2e8) = iVar4 << 3;
  *(int *)(iVar10 + 0x2f0) = iVar8 << 3;
  *(int *)(iVar10 + 0x2ec) = (iVar4 + iVar6) * 8;
  *(int *)(iVar10 + 0x2f4) = (iVar8 + iVar2) * 8;
  *(short *)(iVar10 + 0x2f8) = (short)iVar8;
  *(short *)(iVar10 + 0x2fa) = (short)iVar4;
  *(short *)(iVar10 + 0x2fc) = (short)iVar2;
  *(short *)(iVar10 + 0x2fe) = (short)iVar6;
  return;
}



// Address: 4a04ced0

void FUN_4a04ced0(int param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  short *psVar11;
  int iVar12;
  short *psVar13;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar3 = PTR_DAT_4a04d26c;
  if (*(int *)(param_1 + 0x54) != 0) {
    return;
  }
  uVar9 = (*(uint *)(param_1 + 0x10) & 0x1c00000) >> 0x16;
  if (uVar9 != 2 && uVar9 != 3) {
    return;
  }
  iVar4 = *(int *)PTR_DAT_4a04d26c;
  psVar13 = *(short **)(iVar4 + 0x45c);
  if (psVar13 == (short *)0x0) {
    return;
  }
  iVar12 = *(int *)(iVar4 + 0x474);
  psVar11 = *(short **)(iVar4 + 0x38c);
  *(short **)(iVar4 + 0x388) = psVar11;
  *(short **)(iVar4 + 0x38c) = psVar11 + iVar12 * 2;
  *param_2 = psVar11;
  iVar4 = *(int *)puVar3;
  uStack_50 = *(uint *)(iVar4 + 0xa0);
  uStack_4c = *(uint *)(iVar4 + 0xa4);
  uStack_48 = *(uint *)(iVar4 + 0xa8);
  uStack_44 = *(uint *)(iVar4 + 0xac);
  uStack_40 = *(undefined4 *)(iVar4 + 0xb0);
  uStack_3c = *(undefined4 *)(iVar4 + 0xb4);
  uStack_38 = *(uint *)(iVar4 + 0xb8);
  uStack_34 = *(uint *)(iVar4 + 0xbc);
  uStack_30 = *(uint *)(iVar4 + 0xc0);
  uStack_2c = *(undefined4 *)(iVar4 + 0xc4);
  uStack_28 = *(undefined4 *)(iVar4 + 200);
  uStack_24 = *(undefined4 *)(iVar4 + 0xcc);
  FUN_4a0d41c8(&uStack_38);
  FUN_4a0d41c8(&uStack_50);
  uVar9 = uStack_38;
  if ((int)uStack_38 < 1) {
    uVar9 = -uStack_38;
  }
  uVar10 = uStack_34;
  if ((int)uStack_34 < 1) {
    uVar10 = -uStack_34;
  }
  uVar5 = uStack_30;
  if ((int)uStack_30 < 1) {
    uVar5 = -uStack_30;
  }
  uVar6 = uStack_50;
  if ((int)uStack_50 < 1) {
    uVar6 = -uStack_50;
  }
  uVar7 = uStack_4c;
  if ((int)uStack_4c < 1) {
    uVar7 = -uStack_4c;
  }
  uVar8 = uStack_48;
  if ((int)uStack_48 < 1) {
    uVar8 = -uStack_48;
  }
  if ((int)(uVar8 | uVar10 | uVar9 | uVar5 | uVar6 | uVar7) < 0x8001) {
    uStack_44 = (int)(uStack_48 * uStack_34 - uStack_30 * uStack_4c) >> 0xc;
    uStack_40 = (int)(uStack_50 * uStack_30 - uStack_38 * uStack_48) >> 0xc;
    uStack_3c = (int)(uStack_4c * uStack_38 - uStack_50 * uStack_34) >> 0xc;
  }
  else {
    lVar1 = (longlong)(int)uStack_48 * (longlong)(int)uStack_34 +
            (longlong)(int)-uStack_4c * (longlong)(int)uStack_30;
    uStack_44 = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
    lVar1 = (longlong)(int)uStack_50 * (longlong)(int)uStack_30 +
            (longlong)(int)-uStack_48 * (longlong)(int)uStack_38;
    uStack_40 = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
    lVar1 = (longlong)(int)uStack_4c * (longlong)(int)uStack_38 +
            (longlong)(int)-uStack_50 * (longlong)(int)uStack_34;
    uStack_3c = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  }
  FUN_4a0d41c8(&uStack_44);
  uVar9 = uStack_44;
  if ((int)uStack_44 < 1) {
    uVar9 = -uStack_44;
  }
  uVar10 = uStack_40;
  if ((int)uStack_40 < 1) {
    uVar10 = -uStack_40;
  }
  uVar5 = uStack_3c;
  if ((int)uStack_3c < 1) {
    uVar5 = -uStack_3c;
  }
  uVar6 = uStack_38;
  if ((int)uStack_38 < 1) {
    uVar6 = -uStack_38;
  }
  uVar7 = uStack_34;
  if ((int)uStack_34 < 1) {
    uVar7 = -uStack_34;
  }
  uVar8 = uStack_30;
  if ((int)uStack_30 < 1) {
    uVar8 = -uStack_30;
  }
  if ((int)(uVar8 | uVar10 | uVar9 | uVar5 | uVar6 | uVar7) < 0x8001) {
    uVar9 = (int)(uStack_30 * uStack_40 - uStack_3c * uStack_34) >> 0xc;
    uVar10 = (int)(uStack_38 * uStack_3c - uStack_44 * uStack_30) >> 0xc;
  }
  else {
    lVar1 = (longlong)(int)uStack_30 * (longlong)(int)uStack_40 +
            (longlong)(int)-uStack_34 * (longlong)(int)uStack_3c;
    uVar9 = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
    lVar1 = (longlong)(int)uStack_38 * (longlong)(int)uStack_3c +
            (longlong)(int)-uStack_30 * (longlong)(int)uStack_44;
    uVar10 = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  }
  if (iVar12 != 0) {
    do {
      iVar12 = iVar12 + -1;
      lVar1 = (longlong)(int)psVar13[2] * (longlong)(int)uStack_38 +
              (longlong)(int)*psVar13 * (longlong)(int)uVar9 +
              (longlong)(int)uStack_44 * (longlong)(int)psVar13[1];
      lVar2 = (longlong)(int)psVar13[2] * (longlong)(int)uStack_34 +
              (longlong)(int)*psVar13 * (longlong)(int)uVar10 +
              (longlong)(int)uStack_40 * (longlong)(int)psVar13[1];
      *psVar11 = (short)((int)((uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14) >> 1) +
                 0x800;
      psVar11[1] = (short)((int)((uint)lVar2 >> 0xc | (int)((ulonglong)lVar2 >> 0x20) << 0x14) >> 1)
                   + 0x800;
      psVar13 = psVar13 + 3;
      psVar11 = psVar11 + 2;
    } while (iVar12 != 0);
    return;
  }
  return;
}



// Address: 4a04d274

void FUN_4a04d274(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_PTR_4a04d2ac;
  puVar1 = PTR_DAT_4a04d2a8;
  uVar3 = *(undefined4 *)(PTR_PTR_4a04d2ac + 4);
  *(undefined4 *)PTR_DAT_4a04d2a8 = *(undefined4 *)PTR_PTR_4a04d2ac;
  *(undefined4 *)(puVar1 + 4) = uVar3;
  puVar1 = PTR_DAT_4a04d2b0;
  uVar3 = *(undefined4 *)(puVar2 + 0xc);
  *(undefined4 *)PTR_DAT_4a04d2b0 = *(undefined4 *)(puVar2 + 8);
  *(undefined4 *)(puVar1 + 4) = uVar3;
  puVar1 = PTR_DAT_4a04d2b4;
  uVar3 = *(undefined4 *)(puVar2 + 0x14);
  *(undefined4 *)PTR_DAT_4a04d2b4 = *(undefined4 *)(puVar2 + 0x10);
  *(undefined4 *)(puVar1 + 4) = uVar3;
  return;
}



// Address: 4a04d2bc

void FUN_4a04d2bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_PTR_4a04d2f4;
  puVar1 = PTR_DAT_4a04d2f0;
  uVar3 = *(undefined4 *)(PTR_PTR_4a04d2f4 + 4);
  *(undefined4 *)PTR_DAT_4a04d2f0 = *(undefined4 *)PTR_PTR_4a04d2f4;
  *(undefined4 *)(puVar1 + 4) = uVar3;
  puVar1 = PTR_DAT_4a04d2f8;
  uVar3 = *(undefined4 *)(puVar2 + 0xc);
  *(undefined4 *)PTR_DAT_4a04d2f8 = *(undefined4 *)(puVar2 + 8);
  *(undefined4 *)(puVar1 + 4) = uVar3;
  puVar1 = PTR_DAT_4a04d2fc;
  uVar3 = *(undefined4 *)(puVar2 + 0x14);
  *(undefined4 *)PTR_DAT_4a04d2fc = *(undefined4 *)(puVar2 + 0x10);
  *(undefined4 *)(puVar1 + 4) = uVar3;
  return;
}



// Address: 4a04d300

void FUN_4a04d300(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar2 = *(int *)PTR_DAT_4a04d43c;
  iVar3 = *(int *)(iVar2 + 0x34c);
  iVar4 = *(int *)(iVar2 + 0x350);
  iVar5 = *(int *)(iVar2 + 0x354);
  iVar7 = iVar3;
  if (iVar5 == 0) {
    *(undefined4 *)(iVar2 + 800) = *(undefined4 *)(iVar2 + 0x318);
    iVar3 = *(int *)(iVar2 + 0x31c);
  }
  else {
    if (iVar5 == 1) {
      *(int *)(iVar2 + 800) = *(int *)(iVar2 + 0x33c) * 8 - *(int *)(iVar2 + 0x31c);
      *(undefined4 *)(iVar2 + 0x324) = *(undefined4 *)(iVar2 + 0x318);
      iVar7 = iVar4;
      iVar4 = iVar3;
      goto LAB_4a047eac;
    }
    if (iVar5 != 2) {
      if (iVar5 == 3) {
        *(undefined4 *)(iVar2 + 800) = *(undefined4 *)(iVar2 + 0x31c);
        *(int *)(iVar2 + 0x324) = *(int *)(iVar2 + 0x340) * 8 - *(int *)(iVar2 + 0x318);
        iVar7 = iVar4;
        iVar4 = iVar3;
      }
      goto LAB_4a047eac;
    }
    *(int *)(iVar2 + 800) = *(int *)(iVar2 + 0x33c) * 8 - *(int *)(iVar2 + 0x318);
    iVar3 = *(int *)(iVar2 + 0x340) * 8 - *(int *)(iVar2 + 0x31c);
  }
  *(int *)(iVar2 + 0x324) = iVar3;
LAB_4a047eac:
  iVar3 = *(int *)(iVar2 + 0x324) >> (*(uint *)(iVar2 + 0x66c) & 0xff);
  iVar4 = iVar4 >> (*(uint *)(iVar2 + 0x66c) & 0xff);
  iVar5 = iVar3 + iVar4 * -4;
  *(int *)(iVar2 + 0x328) = iVar3;
  iVar3 = iVar3 + iVar4 * 4;
  *(int *)(iVar2 + 0x2e8) = iVar5;
  *(int *)(iVar2 + 0x2ec) = iVar3;
  *(int *)(iVar2 + 0x2f0) = *(int *)(iVar2 + 800) + iVar7 * -4;
  *(int *)(iVar2 + 0x2f4) = *(int *)(iVar2 + 800) + iVar7 * 4;
  *(short *)(iVar2 + 0x2f8) = (short)((uint)(*(int *)(iVar2 + 0x2f0) << 0xd) >> 0x10);
  *(short *)(iVar2 + 0x2fa) = (short)((uint)(iVar5 * 0x2000) >> 0x10);
  *(short *)(iVar2 + 0x2fc) =
       (short)((*(int *)(iVar2 + 0x2f4) - *(int *)(iVar2 + 0x2f0) & 0xfff8ffffU) >> 3);
  *(short *)(iVar2 + 0x2fe) = (short)((iVar3 - iVar5 & 0xfff8ffffU) >> 3);
  iVar2 = *(int *)PTR_DAT_4a048034;
  iVar4 = *(int *)(iVar2 + 0x34c);
  iVar7 = *(int *)(iVar2 + 0x350);
  if ((*(uint *)(iVar2 + 0x354) & 1) == 0) {
    iVar7 = iVar7 >> (*(uint *)(iVar2 + 0x66c) & 0xff);
  }
  else {
    iVar4 = iVar4 >> (*(uint *)(iVar2 + 0x66c) & 0xff);
  }
  uVar1 = FUN_4a0015f0(0x1000000,iVar4 << 5);
  *(undefined4 *)(iVar2 + 0x330) = uVar1;
  iVar3 = FUN_4a0015f0(0x1000000,iVar7 << 5);
  *(int *)(iVar2 + 0x334) = iVar3;
  if ((*(uint *)(iVar2 + 0x354) & 1) == 0) {
    *(int *)(iVar2 + 0x334) = iVar3 >> (*(uint *)(iVar2 + 0x66c) & 0xff);
  }
  else {
    *(int *)(iVar2 + 0x330) = *(int *)(iVar2 + 0x330) >> (*(uint *)(iVar2 + 0x66c) & 0xff);
  }
  uVar1 = FUN_4a0015f0(0x40000,*(undefined4 *)(iVar2 + 0x2dc));
  *(undefined4 *)(iVar2 + 0x32c) = uVar1;
  iVar3 = FUN_4a02afd0(*(int *)(iVar2 + 0x2dc) * *(int *)(iVar2 + 0x2dc) +
                       ((int)(iVar4 * iVar4 + ((uint)(iVar4 * iVar4 >> 0x1f) >> 0x1e)) >> 2));
  *(int *)(iVar2 + 0x2e0) = iVar3 >> 6;
  iVar3 = FUN_4a02afd0(*(int *)(iVar2 + 0x2dc) * *(int *)(iVar2 + 0x2dc) +
                       ((int)(iVar7 * iVar7 + ((uint)(iVar7 * iVar7 >> 0x1f) >> 0x1e)) >> 2));
  uVar1 = *(undefined4 *)(iVar2 + 0x2dc);
  iVar5 = FUN_4a0015f0(*(int *)(iVar2 + 0x2e0) << 0xc,uVar1);
  iVar3 = FUN_4a0015f0((iVar3 >> 6) << 0xc,uVar1);
  *(int *)(iVar2 + 0x2e0) = iVar5 * *(int *)(iVar2 + 0x330) >> 0xc;
  *(int *)(iVar2 + 0x2e4) = *(int *)(iVar2 + 0x334) * iVar3 >> 0xc;
  *(int *)(iVar2 + 0x314) = iVar7 * 8 + -1;
  *(int *)(iVar2 + 0x310) = iVar4 * 8 + -1;
  iVar7 = *(int *)(iVar2 + 0x2c8);
  iVar4 = iVar7 * *(int *)(iVar2 + 0x32c) >> 0xc;
  *(int *)(iVar2 + 0x2d0) = iVar4;
  if (iVar4 < 6) {
    iVar4 = 5;
  }
  *(int *)(iVar2 + 0x2d0) = iVar4;
  iVar8 = *(int *)(iVar2 + 0x2cc);
  iVar3 = iVar8 * *(int *)(iVar2 + 0x32c) >> 0xc;
  iVar4 = iVar3 - iVar4;
  *(int *)(iVar2 + 0x2d4) = iVar3;
  uVar1 = FUN_4a0015f0((iVar8 - iVar7) * 0x1000,iVar4 * 0x40);
  *(undefined4 *)(iVar2 + 0x3c8) = uVar1;
  uVar1 = FUN_4a0015f0(iVar4 * 0x8000,iVar8 - iVar7);
  *(undefined4 *)(iVar2 + 0x3d0) = uVar1;
  iVar6 = *(int *)PTR_DAT_4a03ebbc;
  iVar5 = *(int *)(iVar6 + 0x32c);
  iVar3 = *(int *)(iVar6 + 0x3ac);
  iVar4 = iVar5 * iVar7 >> 0xc;
  iVar2 = iVar5 * iVar8 >> 0xc;
  if (iVar4 < 5) {
    iVar4 = 5;
  }
  iVar9 = *(int *)(iVar6 + 0x3e0);
  if (*(uint *)(iVar6 + 1000) != 0xffffffff) {
    iVar3 = iVar2 >> (*(uint *)(iVar6 + 1000) & 0xff);
  }
  if (iVar9 == 0) {
    iVar9 = *(int *)(iVar6 + 0x3e4);
    if (*(int *)(iVar6 + 0x2cc) + iVar9 != *(int *)(iVar6 + 0x2c8)) {
      uVar1 = FUN_4a0015f0(iVar3 << 0xc,((iVar2 + (iVar9 * iVar5 >> 0xc)) - iVar4) * 0x40);
      *(undefined4 *)(iVar6 + 0x3cc) = uVar1;
      uVar1 = FUN_4a0015f0(iVar3 << 0xc,(iVar8 + iVar9) - iVar7);
      *(undefined4 *)(iVar6 + 0x3d4) = uVar1;
    }
    if (iVar3 != 0) {
      uVar1 = FUN_4a0015f0(((iVar2 + (iVar9 * *(int *)(iVar6 + 0x32c) >> 0xc)) - iVar4) * 0x8000,
                           iVar3);
      *(undefined4 *)(iVar6 + 0x3d8) = uVar1;
      uVar1 = FUN_4a0015f0(((iVar8 + iVar9) - iVar7) * 0x1000,iVar3);
      *(undefined4 *)(iVar6 + 0x3dc) = uVar1;
    }
  }
  else {
    iVar5 = iVar3 - iVar9;
    uVar1 = FUN_4a0015f0(iVar5 * 0x1000,(iVar2 - iVar4) * 0x40);
    *(undefined4 *)(iVar6 + 0x3cc) = uVar1;
    uVar1 = FUN_4a0015f0(iVar5 * 0x1000,iVar8 - iVar7);
    *(undefined4 *)(iVar6 + 0x3d4) = uVar1;
    if (iVar3 != iVar9) {
      uVar1 = FUN_4a0015f0((iVar2 - iVar4) * 0x8000,iVar5);
      *(undefined4 *)(iVar6 + 0x3d8) = uVar1;
      uVar1 = FUN_4a0015f0((iVar8 - iVar7) * 0x1000,iVar5);
      *(undefined4 *)(iVar6 + 0x3dc) = uVar1;
    }
  }
  if (*(int *)(iVar6 + 0x3cc) != 0) {
    iVar7 = FUN_4a0015f0(iVar3 << 0xc);
    *(int *)(iVar6 + 0x2d8) = iVar7 + iVar4 * 0x40 >> 6;
    return;
  }
  *(int *)(iVar6 + 0x2d8) = iVar2;
  return;
}



// Address: 4a04d440

undefined4 * FUN_4a04d440(void)

{
  undefined4 *puVar1;
  int *piVar2;
  
  thunk_FUN_4a161570(0x1c);
  puVar1 = (undefined4 *)FUN_4a0c6b80();
  *puVar1 = PTR_PTR_4a04d4b8;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  *(undefined1 *)((int)puVar1 + 0x19) = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  FUN_4a0fc728(puVar1);
  piVar2 = (int *)FUN_4a0ff494();
  puVar1[4] = piVar2;
  if (piVar2 != (int *)0x0) {
    piVar2 = (int *)((int)piVar2 + *(int *)(*piVar2 + -0xc));
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))();
  }
  return puVar1;
}



// Address: 4a04d4d0

undefined4 FUN_4a04d4d0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_8 [2];
  
  local_8[0] = 0;
  uVar1 = FUN_4a01d924(param_2,0xffffffff);
  FUN_4a1020c0(local_8,uVar1);
  return local_8[0];
}



// Address: 4a04d500

void FUN_4a04d500(undefined4 param_1)

{
  *(undefined4 *)PTR_DAT_4a04d508 = param_1;
  return;
}



// Address: 4a04d50c

void FUN_4a04d50c(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  uVar1 = 0;
  if (*(int *)(*(int *)PTR_DAT_4a04d584 + 4) << 0x11 < 0) {
    uVar1 = 0xff000000;
  }
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  FUN_4a069950(param_1,0);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffc | 0x80;
  if (param_3 == 0) {
    FUN_4a06991c(param_1,5);
    FUN_4a06992c(param_1,0);
  }
  else {
    FUN_4a06991c(param_1,4);
    FUN_4a06992c(param_1,1);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xe1ffffff | 0xe000000;
    *(undefined1 *)(param_1 + 0x17) = 0x40;
  }
  return;
}



// Address: 4a04d588

bool FUN_4a04d588(void)

{
  return *(int *)(PTR_DAT_4a04d594 + 0xc) != 0;
}



// Address: 4a04d598

void FUN_4a04d598(undefined2 *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined2 local_1c;
  short local_1a;
  undefined2 local_18;
  short local_16;
  
  puVar1 = PTR_DAT_4a04d644;
  iVar4 = *(int *)PTR_DAT_4a04d644;
  local_1c = *(undefined2 *)(iVar4 + 0x2f8);
  local_1a = *(short *)(iVar4 + 0x2fa);
  local_18 = *(undefined2 *)(iVar4 + 0x2fc);
  local_16 = *(short *)(iVar4 + 0x2fe);
  uVar7 = *(undefined4 *)(iVar4 + 0x344);
  uVar6 = *(undefined4 *)(iVar4 + 0x348);
  uVar2 = FUN_4a038ee4(*(undefined4 *)(iVar4 + 0x354));
  FUN_4a0d4128(&local_1c,uVar2,uVar7,uVar6);
  uVar5 = *(uint *)(*(int *)puVar1 + 0x66c);
  uVar3 = *(uint *)(*(int *)puVar1 + 0x66c);
  *param_1 = local_1c;
  param_1[1] = local_1a << (uVar5 & 0xff);
  param_1[2] = local_18;
  param_1[3] = local_16 << (uVar3 & 0xff);
  return;
}



// Address: 4a04d648

void FUN_4a04d648(void)

{
  thunk_FUN_4a0466b8();
  FUN_4a03e62c();
  if (**(int **)PTR_DAT_4a04d66c << 0x1b < 0) {
    thunk_FUN_4a054f40();
    *(undefined4 *)PTR_DAT_4a04d670 = 1;
  }
  return;
}



// Address: 4a04d7bc

int FUN_4a04d7bc(void)

{
  int local_8 [2];
  
  local_8[0] = 0;
  FUN_4a03c12c(local_8,1,0x20,4);
  if (local_8[0] != 0) {
    FUN_4a04d928();
  }
  return local_8[0];
}



// Address: 4a04d7f4

void FUN_4a04d7f4(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if ((1 << (uVar2 & 0xff) & param_1) != 0) {
      iVar1 = FUN_4a000d18(param_2,s__define__s_4a04d874,
                           *(undefined4 *)(PTR_PTR_4a04d870 + uVar2 * 4));
      param_2 = iVar1 + param_2;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x12);
  if ((param_1 & 0xffffff) >> 0x15 != 0) {
    iVar1 = FUN_4a000d18(param_2,s__define_ALPHA_TEST__d_4a04d884,(param_1 & 0xffffff) >> 0x15);
    param_2 = iVar1 + param_2;
  }
  if ((param_1 & 0x1fffff) >> 0x12 != 0) {
    iVar1 = FUN_4a000d18(param_2,s__define_BLEND__d_4a04d89c,(param_1 & 0x1fffff) >> 0x12);
    param_2 = iVar1 + param_2;
  }
  if ((param_1 & 0xfffffff) >> 0x18 != 0) {
    iVar1 = FUN_4a000d18(param_2,s__define_EFFECT_PRESET__d_4a04d8b0,(param_1 & 0xfffffff) >> 0x18);
    param_2 = iVar1 + param_2;
  }
  if ((param_1 & 0x7fffffff) >> 0x1c != 0) {
    FUN_4a000d18(param_2,s__define_ALPHA_BLEND__d_4a04d8cc,(param_1 & 0x7fffffff) >> 0x1c);
  }
  return;
}



// Address: 4a04d8e4

uint FUN_4a04d8e4(void)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_4a1652e8();
  return (uint)uVar1 >> 0xc | (int)((ulonglong)uVar1 >> 0x20) << 0x14;
}



// Address: 4a04d8f8

void FUN_4a04d8f8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_4a04d920;
  if (*(int *)(PTR_DAT_4a04d920 + 0x20) << 0x1d < 0) {
    host_s3eSurfaceUnRegister_thumb(1,PTR_FUN_4a04838c_1_4a04d924);
  }
  if (*(int *)(puVar1 + 0x20) << 0x1c < 0) {
    host_s3eDeviceUnRegister_thumb(1,PTR_FUN_4a04838c_1_4a04d924);
  }
  return;
}



// Address: 4a04d928

void FUN_4a04d928(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int local_18;
  int local_14;
  
  puVar1 = PTR_DAT_4a04d9d8;
  piVar5 = *(int **)PTR_DAT_4a04d9d4;
  piVar2 = piVar5 + *(int *)(PTR_DAT_4a04d9d4 + 4) * 2;
  do {
    local_14 = param_1;
    if (piVar5 == piVar2) {
      if (*PTR_DAT_4a04d9d8 != '\0') {
        iVar3 = host_s3eFileTell_thumb(*(undefined4 *)(PTR_DAT_4a04d9d8 + 8));
        FUN_4a03c12c(&local_18,1,0x20,4);
        iVar3 = iVar3 + local_18;
        uVar4 = *(undefined4 *)(puVar1 + 8);
LAB_4a04d9ca:
        host_s3eFileSeek_thumb(uVar4,iVar3,0);
      }
      return;
    }
    if (*piVar5 == param_1) {
      iVar6 = 0;
      if (*PTR_DAT_4a04d9d8 == '\0') {
        FUN_4a03c12c(&local_14,1,0x20,4);
        iVar6 = host_s3eFileTell_thumb(*(undefined4 *)(puVar1 + 8));
        local_18 = DAT_4a04d9dc;
      }
      FUN_4a03c12c(&local_18,1,0x20,4);
      FUN_4a1652c4(piVar5[1]);
      if (*puVar1 != '\0') {
        return;
      }
      iVar3 = host_s3eFileTell_thumb(*(undefined4 *)(puVar1 + 8));
      host_s3eFileSeek_thumb(*(undefined4 *)(puVar1 + 8),iVar6,0);
      local_18 = iVar3 - iVar6;
      FUN_4a03c12c(&local_18,1,0x20,4);
      uVar4 = *(undefined4 *)(puVar1 + 8);
      goto LAB_4a04d9ca;
    }
    piVar5 = piVar5 + 2;
  } while( true );
}



// Address: 4a04d9e4

void FUN_4a04d9e4(void)

{
  if ((**(uint **)PTR_DAT_4a04da04 & 0x10) != 0) {
    *(undefined4 *)PTR_DAT_4a04da08 = 0xffffffff;
  }
  return;
}



// Address: 4a04da10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_4a04da10(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  int in_r3;
  int local_18;
  
  *(undefined **)(PTR_DAT_4a04da24 + 0xa0) = PTR_FUN_4a04da20;
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
    local_18 = in_r3;
    if (*(int *)(PTR_DAT_4a03e5f8 + 0xc) == 0) {
      thunk_FUN_4a04d274();
      if (**(int **)puVar2 << 0x18 < 0) {
        thunk_FUN_4a029e80();
        if (*(int *)(*(int *)puVar2 + 0xc) == 3) {
          local_18 = DAT_4a03e600;
          host_s3eConfigGetInt_thumb(&DAT_4a03e61c,s_ShaderUniformShadowMem_4a03e604,&local_18);
          *(undefined4 *)(puVar1 + 0x14) = 0;
          *(undefined4 *)(puVar1 + 0x18) = 0;
          *(int *)(puVar1 + 0x1c) = local_18;
          if (local_18 != 0) {
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



// Address: 4a04da2c

void FUN_4a04da2c(void)

{
  undefined *puVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)PTR_DAT_4a04da80;
  *puVar2 = puVar2[0xda] & 0x10 | *puVar2;
  puVar1 = PTR_DAT_4a04da88;
  *(undefined **)(PTR_DAT_4a04da88 + 0x20) = PTR_FUN_4a04da84;
  *(undefined **)(puVar1 + 0x24) = PTR_FUN_4a04da8c;
  *(undefined **)(puVar1 + 0x28) = PTR_FUN_4a04da90;
  *(undefined **)(puVar1 + 0x2c) = PTR_FUN_4a04da94;
  *(undefined **)(puVar1 + 0x30) = PTR_DAT_4a04da98;
  *(undefined **)(puVar1 + 0x34) = PTR_DAT_4a04da9c;
  return;
}



// Address: 4a04daa4

void FUN_4a04daa4(void)

{
  undefined *puVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)PTR_DAT_4a04daf0;
  *puVar2 = puVar2[0xda] & 4 | *puVar2;
  puVar1 = PTR_DAT_4a04daf8;
  *(undefined **)(PTR_DAT_4a04daf8 + 4) = PTR_FUN_4a04daf4;
  *(undefined **)(puVar1 + 8) = PTR_LAB_4a04dafc;
  *(undefined **)(puVar1 + 0xc) = PTR_FUN_4a04db00;
  *(undefined **)(puVar1 + 0x10) = PTR_FUN_4a04db04;
  *(undefined **)(puVar1 + 0x14) = PTR_FUN_4a04db08;
  return;
}



// Address: 4a04db10

void FUN_4a04db10(void)

{
  FUN_4a03f8d4();
  *PTR_DAT_4a04db2c = 0;
  return;
}



// Address: 4a04db34

void FUN_4a04db34(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  ushort uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  
  iVar8 = *param_1;
  iVar11 = *(int *)(iVar8 + 0xc);
  uVar10 = 0;
  iVar9 = iVar8;
  if (*param_2 != iVar8) {
    do {
      if ((*(int *)(iVar9 + 0xc) == iVar11) && (*(int *)(iVar9 + 0xec) == 0)) {
        bVar12 = true;
      }
      else {
        bVar12 = false;
      }
      if ((bVar12) &&
         (((*(uint *)(iVar9 + 300) & 0x20) == 0 || (*(int *)(*(int *)(iVar9 + 0x144) + 8) == 0)))) {
        bVar12 = true;
      }
      else {
        bVar12 = false;
      }
      if ((bVar12) && (((*(uint *)(iVar9 + 0x10) ^ *(uint *)(iVar8 + 0x10)) & 0x8000) == 0)) {
        bVar12 = true;
      }
      else {
        bVar12 = false;
      }
      if (((bVar12) && (*(int *)(iVar9 + 0x100) == *(int *)(iVar8 + 0x100))) &&
         (*(int *)(iVar9 + 0x104) == *(int *)(iVar8 + 0x104))) {
        bVar12 = true;
      }
      else {
        bVar12 = false;
      }
      if ((bVar12) && (*(int *)(iVar9 + 0xac) == *(int *)(iVar8 + 0xac))) {
        bVar12 = true;
      }
      else {
        bVar12 = false;
      }
      if (((bVar12) && (*(int *)(iVar9 + 0x130) == *(int *)(iVar8 + 0x130))) &&
         ((*(int *)(iVar9 + 0x134) == *(int *)(iVar8 + 0x134) &&
          ((((*(int *)(iVar9 + 0x138) == *(int *)(iVar8 + 0x138) &&
             (*(int *)(iVar9 + 0x13c) == *(int *)(iVar8 + 0x13c))) &&
            (*(int *)(iVar9 + 0x140) == *(int *)(iVar8 + 0x140))) &&
           ((*(int *)(iVar9 + 0x148) == *(int *)(iVar8 + 0x148) &&
            (*(int *)(iVar9 + 0x14c) == *(int *)(iVar8 + 0x14c))))))))) {
        bVar12 = true;
      }
      else {
        bVar12 = false;
      }
      if ((bVar12) && (*(int *)(iVar9 + 0x120) == iVar9 + 0x118)) {
        bVar12 = true;
      }
      else {
        bVar12 = false;
      }
      uVar6 = *(uint *)(iVar8 + 0x10);
      if ((uVar6 & 0x200) != 0 && (uVar6 & 0x7800) != 0) {
        if ((uVar6 & 0x1000) != 0) {
          if ((bVar12) && (*(int *)(iVar9 + 0xb8) == *(int *)(iVar8 + 0xb8))) {
            bVar12 = true;
          }
          else {
            bVar12 = false;
          }
        }
        if ((uVar6 & 0x2000) != 0) {
          if ((bVar12) && (*(int *)(iVar9 + 0xbc) == *(int *)(iVar8 + 0xbc))) {
            bVar12 = true;
          }
          else {
            bVar12 = false;
          }
        }
        if ((uVar6 & 0x800) != 0) {
          if ((bVar12) && (*(int *)(iVar9 + 0xb4) == *(int *)(iVar8 + 0xb4))) {
            bVar12 = true;
          }
          else {
            bVar12 = false;
          }
        }
        if ((uVar6 & 0x4000) != 0) {
          if ((bVar12) && (*(int *)(*(int *)(iVar9 + 0xc) + 0x28) == *(int *)(iVar11 + 0x28))) {
            bVar12 = true;
          }
          else {
            bVar12 = false;
          }
        }
      }
      if ((*(uint *)(iVar9 + 0x10) & 0x100) != 0) {
        if ((bVar12) && (iVar3 = thunk_FUN_4a000e60(iVar9 + 0x1c,iVar8 + 0x1c,0x30), iVar3 == 0)) {
          bVar12 = true;
        }
        else {
          bVar12 = false;
        }
        if ((*(uint *)(iVar9 + 0x10) & 0x80000000) != 0) {
          if ((((bVar12) && (*(int *)(iVar9 + 0x108) == *(int *)(iVar8 + 0x108))) &&
              (*(int *)(iVar9 + 0x10c) == *(int *)(iVar8 + 0x10c))) &&
             ((*(int *)(iVar9 + 0x110) == *(int *)(iVar8 + 0x110) &&
              (*(int *)(iVar9 + 0x114) == *(int *)(iVar8 + 0x114))))) {
            bVar12 = true;
          }
          else {
            bVar12 = false;
          }
        }
      }
      if (!bVar12) break;
      piVar1 = (int *)(iVar9 + 0xf0);
      iVar9 = *(int *)(iVar9 + 8);
      uVar10 = uVar10 + *piVar1;
    } while (*param_2 != iVar9);
  }
  if (*(uint *)(iVar8 + 0xf0) < uVar10) {
    iVar8 = *(int *)PTR_DAT_4a04df54;
    iVar3 = *(int *)(iVar8 + 0x38c);
    *(int *)(iVar8 + 0x388) = iVar3;
    *(uint *)(iVar8 + 0x38c) = (uVar10 * 2 + 3 & 0xfffffffc) + iVar3;
    iVar8 = iVar3;
    for (iVar11 = *param_1; iVar11 != iVar9; iVar11 = *(int *)(iVar11 + 8)) {
      if ((*(uint *)(iVar11 + 300) & 0x20) == 0) {
        uVar7 = *(undefined4 *)(iVar11 + 0x144);
      }
      else {
        psVar4 = *(short **)(iVar11 + 0x144);
        sVar2 = psVar4[2];
        bVar12 = sVar2 == 0;
        if (bVar12) {
          sVar2 = psVar4[3];
        }
        bVar13 = bVar12 && sVar2 == 0;
        if (bVar12 && sVar2 == 0) {
          bVar13 = *psVar4 == 0x803;
        }
        if (bVar13) {
          uVar7 = *(undefined4 *)(psVar4 + 6);
        }
        else {
          uVar7 = 0;
        }
      }
      FUN_4a000f84(iVar8,uVar7,*(int *)(iVar11 + 0xf0) << 1);
      iVar8 = iVar8 + *(int *)(iVar11 + 0xf0) * 2;
      uVar5 = *(ushort *)(*param_3 + 0xf4);
      if (*(ushort *)(iVar11 + 0xf4) <= uVar5) {
        uVar5 = *(ushort *)(iVar11 + 0xf4);
      }
      *(ushort *)(*param_3 + 0xf4) = uVar5;
      uVar5 = *(ushort *)(*param_3 + 0xf6);
      if (uVar5 <= *(ushort *)(iVar11 + 0xf6)) {
        uVar5 = *(ushort *)(iVar11 + 0xf6);
      }
      *(ushort *)(*param_3 + 0xf6) = uVar5;
    }
    iVar8 = *param_3;
    *(int *)(iVar8 + 0x144) = iVar3;
    *(uint *)(iVar8 + 300) = *(uint *)(iVar8 + 300) & 0xffffffdf;
    *(int *)(*param_3 + 0xf0) = (int)(short)uVar10;
    *(int *)(*param_3 + 8) = iVar9;
    *(int *)(iVar9 + 4) = *param_3;
    return;
  }
  return;
}



// Address: 4a04df58

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_4a04df58(uint param_1,uint param_2)

{
  longlong lVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  
  puVar2 = PTR_DAT_4a04e20c;
  puVar9 = *(uint **)PTR_DAT_4a04e20c;
  uVar4 = puVar9[0xb3];
  uVar10 = puVar9[0xb7];
  uVar11 = puVar9[0xb2];
  uVar12 = puVar9[0xd4];
  if ((*puVar9 & 0x100) != 0) {
    lVar1 = (ulonglong)uVar11 * (ulonglong)(puVar9[0xd3] << 0xf);
    uVar7 = FUN_4a0008f8((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),uVar10,0);
    lVar1 = (ulonglong)uVar11 * (ulonglong)(uVar12 << 0xf);
    uVar8 = FUN_4a0008f8((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),uVar10,0);
    uVar7 = FUN_4a172098(uVar7);
    uVar10 = FUN_4a17295c(uVar7,0xfffffff0);
    uVar7 = FUN_4a172098(uVar8);
    uVar12 = FUN_4a17295c(uVar7,0xfffffff0);
    if (puVar9[3] != 2) {
      return;
    }
    FUN_4a150618(0x1701);
    FUN_4a1504dc();
    uVar7 = FUN_4a171fac(-*(int *)(*(int *)puVar2 + 0x354));
    uVar7 = FUN_4a17211c(uVar7,0x42b40000);
    FUN_4a150798(uVar7,0,0,0x3f800000);
    if ((*(uint *)(*(int *)puVar2 + 4) & 0x200) == 0) {
      uVar7 = 0x3f800000;
    }
    else {
      uVar7 = 0xbf800000;
    }
    FUN_4a1507c0(0x3f800000,uVar7);
    FUN_4a172098(uVar4);
    FUN_4a172098(uVar11);
    FUN_4a150240(uVar10 ^ 0x80000000,uVar10,uVar12 ^ 0x80000000,uVar12);
    return;
  }
  if (param_2 == 0) {
    uVar4 = puVar9[0xb4] << 10;
    uVar10 = puVar9[0xb5] << 10;
  }
  else {
    uVar4 = 0x100000;
    uVar10 = 0x40000;
  }
  FUN_4a150618(0x1701);
  puVar3 = PTR_DAT_4a04e210;
  if ((param_1 & ~param_2) == 0) {
    lVar1 = (ulonglong)(uVar4 * 2) * (ulonglong)uVar10;
    uVar11 = uVar10 * CARRY4(uVar4,uVar4) + (int)((ulonglong)lVar1 >> 0x20);
    *(undefined4 *)PTR_DAT_4a04e210 = 0x10000;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0;
    *(undefined4 *)(puVar3 + 0x14) = 0x10000;
    *(undefined4 *)(puVar3 + 0x10) = 0;
    *(undefined4 *)(puVar3 + 0x18) = 0;
    *(undefined4 *)(puVar3 + 0x1c) = 0;
    *(undefined4 *)(puVar3 + 0x20) = 0;
    iVar5 = uVar10 - uVar4;
    *(undefined4 *)(puVar3 + 0x24) = 0;
    iVar6 = FUN_4a00080c((uVar10 + uVar4) * 0x10000,uVar10 + uVar4 >> 0x10,iVar5,iVar5 >> 0x1f);
    *(int *)(puVar3 + 0x28) = -iVar6;
    *(undefined4 *)(puVar3 + 0x2c) = 0xffff0000;
    *(undefined4 *)(puVar3 + 0x30) = 0;
    *(undefined4 *)(puVar3 + 0x34) = 0;
    uVar13 = FUN_4a00080c((int)lVar1,((int)uVar11 >> 0xc) << 0xc | uVar11 & 0xfff,iVar5,
                          iVar5 >> 0x1f);
    *(int *)(puVar3 + 0x38) = -(int)uVar13;
    *(undefined4 *)(puVar3 + 0x3c) = 0;
    FUN_4a1505bc(puVar3,-((int)((ulonglong)uVar13 >> 0x20) + (uint)((int)uVar13 != 0)));
  }
  else {
    FUN_4a1504dc();
    FUN_4a1506cc(0xffff0000,0x10000,0xffff0000);
  }
  FUN_4a1507ac(*(int *)(*(int *)puVar2 + 0x354) * -0x5a0000,0,0,0x10000);
  if ((*(uint *)(*(int *)puVar2 + 4) & 0x200) == 0) {
    return;
  }
  FUN_4a156e38(0x10000,0xffff0000);
  return;
}



